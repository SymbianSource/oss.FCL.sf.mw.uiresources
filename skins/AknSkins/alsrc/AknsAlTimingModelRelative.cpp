/*
* Copyright (c) 2004-2008 Nokia Corporation and/or its subsidiary(-ies).
* All rights reserved.
* This component and the accompanying materials are made available
* under the terms of "Eclipse Public License v1.0"
* which accompanies this distribution, and is available
* at the URL "http://www.eclipse.org/legal/epl-v10.html".
*
* Initial Contributors:
* Nokia Corporation - initial contribution.
*
* Contributors:
*
* Description:  Implements relative timing model.
*
*/


// INCLUDE FILES
#include <e32base.h>
#include <e32math.h>
#include <AknsRlParameter.h>
#include "AknsAlTimingModelRelative.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsAlTimingModelRelative::CAknsAlTimingModelRelative
// -----------------------------------------------------------------------------
//
CAknsAlTimingModelRelative::CAknsAlTimingModelRelative():
    iTimeSpan( EHour ),
    iSlices( 1 ),
    iWrap( EFalse ),
    iRelative( 0 )
    {
    }

// -----------------------------------------------------------------------------
// CAknsAlTimingModelRelative::NewL
// -----------------------------------------------------------------------------
//
CAknsAlTimingModelRelative* CAknsAlTimingModelRelative::NewL()
    {
    CAknsAlTimingModelRelative* self = new(ELeave) CAknsAlTimingModelRelative();
    return self;
    }

// -----------------------------------------------------------------------------
// CAknsAlTimingModelRelative::CAknsAlTimingModelRelative
// -----------------------------------------------------------------------------
//
CAknsAlTimingModelRelative::~CAknsAlTimingModelRelative()
    {
    }

// -----------------------------------------------------------------------------
// CAknsAlTimingModelRelative::SetParametersL
// -----------------------------------------------------------------------------
//
void CAknsAlTimingModelRelative::SetParametersL(
    MAknsRlParameterIterator& aParameters )
    {
    // Iterate over available parameters
    while( aParameters.HasNext() )
        {
        const TAknsRlParameterData* param = aParameters.NextL();

        if( param->iName->Compare( KAknsAlRelativeTimeSpan ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            if( param->iNumber < EHour || param->iNumber > EMonth )
                User::Leave( KErrArgument );

            iTimeSpan = TTimeSpan( param->iNumber );
            }
        else if( param->iName->Compare( KAknsAlRelativeSlices ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            if( param->iNumber < 1 )
                User::Leave( KErrArgument );

            iSlices = param->iNumber;
            }
        else if( param->iName->Compare( KAknsAlRelativeWrap ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iWrap = ( param->iNumber != 0 ) ? ETrue: EFalse;
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknsAlTimingModelRelative::Tick
// -----------------------------------------------------------------------------
//
void CAknsAlTimingModelRelative::Tick( const TInt /*aDeltaTime*/ )
    {
    TTime current;
    current.HomeTime();
    Tick( current );
    }

// -----------------------------------------------------------------------------
// CAknsAlTimingModelRelative::Tick
// -----------------------------------------------------------------------------
//
void CAknsAlTimingModelRelative::Tick( const TTime& aStamp )
    {
    // TODO Is 16.16 enough for lengthy time spans?
    // In a month time span 16.16 leads to about 40 second resolution
    TDateTime cur = aStamp.DateTime();
    TTime startStamp;
    TTime endStamp;

    switch( iTimeSpan )
        {
        case EHour:
            {
            startStamp = TDateTime( cur.Year(), cur.Month(), cur.Day(), cur.Hour(), 0, 0, 0 );
            endStamp = startStamp + TTimeIntervalHours( 1 );
            }
            break;
        case EDay:
            {
            startStamp = TDateTime( cur.Year(), cur.Month(), cur.Day(), 0, 0, 0, 0 );
            endStamp = startStamp + TTimeIntervalDays( 1 );
            }
            break;
        case EWeek:
            {
            startStamp = TDateTime( cur.Year(), cur.Month(), cur.Day(), 0, 0, 0, 0 );
            // Reverse to the start of the week
            startStamp = startStamp - TTimeIntervalDays( aStamp.DayNoInWeek() );
            endStamp = startStamp + TTimeIntervalDays( 7 );
            }
            break;
        case EMonth:
            {
            startStamp = TDateTime( cur.Year(), cur.Month(), 0, 0, 0, 0, 0 );
            endStamp = startStamp + TTimeIntervalDays( aStamp.DaysInMonth() );
            }
            break;
        default:
            iRelative = 0;
            return;
        }

    // Determine second spans ( start -> end, start -> cur )
    TTimeIntervalSeconds intervalToCur = 0;
    TTimeIntervalSeconds intervalToEnd = 0;

    TInt err = startStamp.SecondsFrom( aStamp, intervalToCur );
    if( KErrNone != err ) // Theoretical, 32bit integer was overflown
        {
        iRelative = KAlMaxRelative;
        return;
        }

    err = startStamp.SecondsFrom( endStamp, intervalToEnd );
    if( KErrNone != err ) // Theoretical, 32bit integer was overflown
        {
        iRelative = KAlMaxRelative;
        return;
        }

    // Floating point calculations used intentionally (relative timing model is
    // called rarely).
    TReal secsToCur = TReal( intervalToCur.Int() );
    TReal secsToEnd = TReal( intervalToEnd.Int() );
    if( secsToEnd == 0 )
        secsToEnd = 1;
    TReal posOnSlices = ( secsToCur / secsToEnd ) * TReal( iSlices ); //lint !e414 secsToEnd != 0

    TInt32 sliceNo;
    TReal relative;

    // Current slice is the integer part of posOnSlices
    err = Math::Int( sliceNo, posOnSlices );
    if( KErrNone != err )
        {
        iRelative = 0;
        return;
        }

    // Relative value is the posOnSlices fractional
    err = Math::Frac( relative, posOnSlices );
    if( KErrNone != err )
        {
        iRelative = 0;
        return;
        }

    // Reverse every second slice. Wrapping has effect only when there are
    // more than one slices.
    if( iWrap && ( sliceNo % 2 ) == 1 )
        {
        relative = 1.0 - relative;
        }

    // Convert to fixed point, relative is always in range [0.0, 1.0]
    iRelative = TInt( ( TReal(KAlMaxRelative) * relative ) + 0.5 );
    }//lint !e414 secsToEnd != 0 (for some reason lint nags about the whole method)

// -----------------------------------------------------------------------------
// CAknsAlTimingModelRelative::RelativeValue
// -----------------------------------------------------------------------------
//
TUint32 CAknsAlTimingModelRelative::RelativeValue() const
    {
    return iRelative;
    }

// -----------------------------------------------------------------------------
// CAknsAlTimingModelRelative::IsFinished
// -----------------------------------------------------------------------------
//
TBool CAknsAlTimingModelRelative::IsFinished() const
    {
    // Relative timing model is always infinite
    return EFalse;
    }

// -----------------------------------------------------------------------------
// CAknsAlTimingModelRelative::Begin
// -----------------------------------------------------------------------------
//
void CAknsAlTimingModelRelative::Begin()
    {
    // Time span type defines the starting point of a time span. System time or
    // time stamp defines the current poisition in time span -> begin is
    // irrelevant
    }

// End of file

