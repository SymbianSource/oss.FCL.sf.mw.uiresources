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
* Description:  Real-time timing model.
*
*/


// INCLUDE FILES
#include <e32base.h>
#include <AknsRlParameter.h>
#include "AknsAlTimingModelRealTime.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsAlTimingModelRealTime::CAknsAlTimingModelRealTime
// -----------------------------------------------------------------------------
//
CAknsAlTimingModelRealTime::CAknsAlTimingModelRealTime():
    iDuration( 0 ),
    iTotalDuration( 0 ),
    iElapsedTime( 0 ),
    iRelative( 0 ),
    iWrap( EFalse )
    {
    }

// -----------------------------------------------------------------------------
// CAknsAlTimingModelRealTime::NewL
// -----------------------------------------------------------------------------
//
CAknsAlTimingModelRealTime* CAknsAlTimingModelRealTime::NewL()
    {
    CAknsAlTimingModelRealTime* self = new(ELeave) CAknsAlTimingModelRealTime();
    return self;
    }

// -----------------------------------------------------------------------------
// CAknsAlTimingModelRealTime::CAknsAlTimingModelRealTime
// -----------------------------------------------------------------------------
//
CAknsAlTimingModelRealTime::~CAknsAlTimingModelRealTime()
    {
    }

// -----------------------------------------------------------------------------
// CAknsAlTimingModelRealTime::Duration
// -----------------------------------------------------------------------------
//
TInt CAknsAlTimingModelRealTime::Duration() const
    {
    return iDuration;
    }

// -----------------------------------------------------------------------------
// CAknsAlTimingModelRealTime::TotalDuration
// -----------------------------------------------------------------------------
//
TInt CAknsAlTimingModelRealTime::TotalDuration() const
    {
    return iTotalDuration;
    }

// -----------------------------------------------------------------------------
// CAknsAlTimingModelRealTime::Configure
// -----------------------------------------------------------------------------
//
void CAknsAlTimingModelRealTime::Configure( TInt aD, TInt aRC, TInt aRD, TBool aWrap )
    {
    iElapsedTime = 0;
    iWrap = aWrap;
    iRelative = 0;

    // Because we use fixed point arithmetic, duration and repeat duration
    // absolute value must be clamped.
    if( Defined( aRD ) && aRD > KAlMaxDurationVal )
        {
        aRD = KAlMaxDurationVal;
        }

    if( Defined( aD ) && aD > KAlMaxDurationVal )
        {
        aD = KAlMaxDurationVal;
        }

    // Determine duration and total duration
    if( Defined( aD ) ) // Cases from #6 to #14
        {
        // Duration is the same in all cases
        iDuration = aD;

        if( Infinite( aRC ) )
            {
            if( Undefined( aRD ) ) // #6
                {
                iTotalDuration = -1;
                }
            else if( Defined( aRD ) ) // #7
                {
                iTotalDuration = aRD;
                }
            else // aRD must be infinite, #8
                {
                iTotalDuration = -1;
                }
            }
        else if( Undefined( aRC ) )
            {
            if( Undefined( aRD ) ) // #9
                {
                iTotalDuration = aD;
                }
            else if( Defined( aRD ) ) // #10
                {
                iTotalDuration = aRD;
                }
            else // aRD must be infinite, #11
                {
                iTotalDuration = -1;
                }
            }
        else // aRC must be defined
            {
            if( Undefined( aRD ) ) // #12
                {
                iTotalDuration = aD * aRC;
                }
            else if( Defined( aRD ) ) // #13
                {
                // total duration = MIN( D * RC, RD )
                iTotalDuration = aD * aRC < aRD ? aD * aRC: aRD;
                }
            else // aRD must be infinite, #14
                {
                iTotalDuration = aD * aRC;
                }
            }
        }
    else if( Infinite( aD ) ) // Cases from #15 to #17
        {
        // Repeat count is ignored

        if( Defined( aRD ) ) // #15
            {
            iDuration      = aRD;
            iTotalDuration = aRD;
            }
        else // #16 and #17
            {
            // Undefined and infinite produce the same result
            iDuration      = -1;
            iTotalDuration = -1;
            }
        }
    else // Duration is undefined, cases from #1 to #5
        {
        // Cases, #4 and #5
        if( Undefined( aRD ) && !Infinite( aRC ) )
            {
            // These are basically impossible cases
            iDuration      = 0;
            iTotalDuration = 0;
            }
        // Case #1
        else if( Defined( aRD ) )
            {
            iDuration      = aRD;
            iTotalDuration = aRD;
            }
        else // Must be cases #2 and #3
            {
            iDuration      = -1;
            iTotalDuration = -1;
            }
         }
    }

// -----------------------------------------------------------------------------
// CAknsAlTimingModelRealTime::SetParametersL
// -----------------------------------------------------------------------------
//
void CAknsAlTimingModelRealTime::SetParametersL(
    MAknsRlParameterIterator& aParameters )
    {
    TInt duration = 0;
    TInt repeatCount = 0;
    TInt repeatDuration = 0;
    TBool wrap = EFalse;

    // Iterate over available parameters
    while( aParameters.HasNext() )
        {
        const TAknsRlParameterData* param = aParameters.NextL();

        if( param->iName->Compare( KAknsAlRealTimeDuration ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            duration = param->iNumber;
            }
        else if( param->iName->Compare( KAknsAlRealTimeRepeatCount ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            repeatCount = param->iNumber;
            }
        else if( param->iName->Compare( KAknsAlRealTimeRepeatDuration ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            repeatDuration = param->iNumber;
            }
        else if( param->iName->Compare( KAknsAlRealTimeWrap ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            wrap = ( param->iNumber != 0 ) ? ETrue: EFalse;
            }
        }

    // Configure the model
    Configure( duration, repeatCount, repeatDuration, wrap );
    }

// -----------------------------------------------------------------------------
// CAknsAlTimingModelRealTime::Tick
// -----------------------------------------------------------------------------
//
void CAknsAlTimingModelRealTime::Tick( const TInt aDeltaTime )
    {
    iElapsedTime = iElapsedTime + aDeltaTime;

    // Cases #4 and #5 are the only ones that will produce undefined durations
    // in Configure. This kind of animation will never run properly
    if( Undefined( iDuration ) || Undefined( iTotalDuration ) )
        return;

    // Starting from here the durations are either defined or infinite

    // Check if the the total duration has been exceeded
    if( IsFinished() )
        return;

    // Relative value is undefined if duration is either undefined or infinite
    if( !Defined( iDuration ) ) // iDuration <= 0
        {
        iRelative = 0;
        }
    else // Duration is defined, relative value can be calculated
        {
        // Note: iDuration is always > 0 here

        // Elapsed time and duration always >= 0 -> conversion ok
        TUint32 durationPos = TUint32( iElapsedTime % iDuration ); //lint !e414 iDuration > 0
        TBool ascending = ETrue;

        // When wrapping, odd durations are descending, even ascending
        if( iWrap && ( iElapsedTime / iDuration ) % 2 ) //lint !e414 iDuration > 0 Remainder != 0
            ascending = EFalse;

        // TODO Allow longer durations -> promote results to 64bit integer
        // Calculate the relative value
        if( ascending )
            {
            iRelative = ( durationPos << 16 ) / TUint32( iDuration ); //lint !e414 iDuration > 0
            }
        else // Current range must be descending
            {
            iRelative = ( ( iDuration - durationPos ) << 16 ) / TUint32( iDuration ); //lint !e414 iDuration > 0
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknsAlTimingModelRealTime::Tick
// -----------------------------------------------------------------------------
//
void CAknsAlTimingModelRealTime::Tick( const TTime& /*aStamp*/ )
    {
    // Not supported
    }

// -----------------------------------------------------------------------------
// CAknsAlTimingModelRealTime::RelativeValue
// -----------------------------------------------------------------------------
//
TUint32 CAknsAlTimingModelRealTime::RelativeValue() const
    {
    return iRelative;
    }

// -----------------------------------------------------------------------------
// CAknsAlTimingModelRealTime::IsFinished
// -----------------------------------------------------------------------------
//
TBool CAknsAlTimingModelRealTime::IsFinished() const
    {
    if( Defined( iTotalDuration ) && iElapsedTime > iTotalDuration )
        {
        return ETrue;
        }

    return EFalse;
    }

// -----------------------------------------------------------------------------
// CAknsAlTimingModelRealTime::Begin
// -----------------------------------------------------------------------------
//
void CAknsAlTimingModelRealTime::Begin()
    {
    iElapsedTime = 0;
    iRelative = 0;
    }

// End of file
