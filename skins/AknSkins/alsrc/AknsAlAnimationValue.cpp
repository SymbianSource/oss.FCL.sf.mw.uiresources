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
* Description:  Interface for animation value.
*
*/


// INCLUDE FILES
#include <e32math.h>
#include <e32base.h> // Required to make include AknsRlParameter.h ok
#include <AknsRlParameter.h>

#include "AknsAlAnimationValue.h"
#include "AknsAlPolyLine.h"
#include "AknsAlPolyLine1D.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsAlValueLinearRange::CAknsAlValueLinearRange
// -----------------------------------------------------------------------------
//
CAknsAlValueLinearRange::CAknsAlValueLinearRange():
    iValue( 0 ),
    iStart( 0 ),
    iEnd( 255 )
    {}

// -----------------------------------------------------------------------------
// CAknsAlValueLinearRange::NewL
// -----------------------------------------------------------------------------
//
CAknsAlValueLinearRange* CAknsAlValueLinearRange::NewL()
    {
    CAknsAlValueLinearRange* self = new(ELeave) CAknsAlValueLinearRange();
    return self;
    }

// -----------------------------------------------------------------------------
// CAknsAlValueLinearRange::~CAknsAlValueLinearRange
// -----------------------------------------------------------------------------
//
CAknsAlValueLinearRange::~CAknsAlValueLinearRange()
    {
    }

// -----------------------------------------------------------------------------
// CAknsAlValueLinearRange::Tick
// -----------------------------------------------------------------------------
//
void CAknsAlValueLinearRange::Tick( TUint32 /*aDeltaTime*/, TUint32 aRelative )
    {
    // Note: It is assumed that arithmetic shifting is supported
    // -> negative values are shifted correctly
    iValue = iStart + ( ( ( iEnd - iStart ) * aRelative ) >> 16 );
    }

// -----------------------------------------------------------------------------
// CAknsAlValueLinearRange::FillData
// -----------------------------------------------------------------------------
//
void CAknsAlValueLinearRange::FillData( TAknsRlParameterData& aData ) const
    {
    aData.iType   = EAknsRlParameterTypeNumber;
    aData.iNumber = iValue;
    }

// -----------------------------------------------------------------------------
// CAknsAlValueLinearRange::SetParametersL
// -----------------------------------------------------------------------------
//
void CAknsAlValueLinearRange::SetParametersL( MAknsRlParameterIterator& aParameters )
    {
    // Iterate over available parameters
    while( aParameters.HasNext() )
        {
        const TAknsRlParameterData* param = aParameters.NextL();

        if( param->iName->Compare( KAknsAlValueLinearRangeStart ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iStart = param->iNumber;
            }
        else if( param->iName->Compare( KAknsAlValueLinearRangeEnd ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iEnd = param->iNumber;
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknsAlValueLinearRange::Begin
// -----------------------------------------------------------------------------
//
void CAknsAlValueLinearRange::Begin()
    {
    iValue = iStart;
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsAlValueConstant::CAknsAlValueConstant
// -----------------------------------------------------------------------------
//
CAknsAlValueConstant::CAknsAlValueConstant():
    iValue( 0 )
    {}

// -----------------------------------------------------------------------------
// CAknsAlValueConstant::NewL
// -----------------------------------------------------------------------------
//
CAknsAlValueConstant* CAknsAlValueConstant::NewL()
    {
    CAknsAlValueConstant* self = new(ELeave) CAknsAlValueConstant();
    return self;
    }

// -----------------------------------------------------------------------------
// CAknsAlValueConstant::~CAknsAlValueConstant
// -----------------------------------------------------------------------------
//
CAknsAlValueConstant::~CAknsAlValueConstant()
    {
    }

// -----------------------------------------------------------------------------
// CAknsAlValueConstant::Tick
// -----------------------------------------------------------------------------
//
void CAknsAlValueConstant::Tick( TUint32 /*aDeltaTime*/, TUint32 /*aRelative*/ )
    {
    }

// -----------------------------------------------------------------------------
// CAknsAlValueConstant::FillData
// -----------------------------------------------------------------------------
//
void CAknsAlValueConstant::FillData( TAknsRlParameterData& aData ) const
    {
    aData.iType   = EAknsRlParameterTypeNumber;
    aData.iNumber = iValue;
    }

// -----------------------------------------------------------------------------
// CAknsAlValueConstant::SetParametersL
// -----------------------------------------------------------------------------
//
void CAknsAlValueConstant::SetParametersL( MAknsRlParameterIterator& aParameters )
    {
    // Iterate over available parameters
    while( aParameters.HasNext() )
        {
        const TAknsRlParameterData* param = aParameters.NextL();

        if( param->iName->Compare( KAknsAlValueConstantValue ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iValue = param->iNumber;
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknsAlValueConstant::Begin
// -----------------------------------------------------------------------------
//
void CAknsAlValueConstant::Begin()
    {
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsAlValueRandom::CAknsAlValueRandom
// -----------------------------------------------------------------------------
//
CAknsAlValueRandom::CAknsAlValueRandom():
    iCurrentSeed( 0 ),
    iValue( 0 ),
    iMin( 0 ),
    iMax( 255 )
    {}

// -----------------------------------------------------------------------------
// CAknsAlValueRandom::NewL
// -----------------------------------------------------------------------------
//
CAknsAlValueRandom* CAknsAlValueRandom::NewL()
    {
    CAknsAlValueRandom* self = new(ELeave) CAknsAlValueRandom();
    return self;
    }

// -----------------------------------------------------------------------------
// CAknsAlValueRandom::~CAknsAlValueRandom
// -----------------------------------------------------------------------------
//
CAknsAlValueRandom::~CAknsAlValueRandom()
    {
    }

// -----------------------------------------------------------------------------
// CAknsAlValueRandom::Tick
// -----------------------------------------------------------------------------
//
void CAknsAlValueRandom::Tick( TUint32 /*aDeltaTime*/, TUint32 /*aRelative*/ )
    {
    // iMax - iMin is always > 0
    iValue = iMin + ( Math::Rand( iCurrentSeed ) % ( iMax - iMin ) );
    }

// -----------------------------------------------------------------------------
// CAknsAlValueRandom::FillData
// -----------------------------------------------------------------------------
//
void CAknsAlValueRandom::FillData( TAknsRlParameterData& aData ) const
    {
    aData.iType   = EAknsRlParameterTypeNumber;
    aData.iNumber = iValue;
    }

// -----------------------------------------------------------------------------
// CAknsAlValueRandom::SetParametersL
// -----------------------------------------------------------------------------
//
void CAknsAlValueRandom::SetParametersL( MAknsRlParameterIterator& aParameters )
    {
    // Iterate over available parameters
    while( aParameters.HasNext() )
        {
        const TAknsRlParameterData* param = aParameters.NextL();

        if( param->iName->Compare( KAknsAlValueRandomMin ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iMin = param->iNumber;
            }
        else if( param->iName->Compare( KAknsAlValueRandomMax ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iMax = param->iNumber;
            }
        }

    // Sanity check
    if( iMax <= iMin )
        User::Leave( KErrArgument );

    // Randomize the starting seed
    iCurrentSeed = TInt64( User::TickCount() );
    }

// -----------------------------------------------------------------------------
// CAknsAlValueRandom::Begin
// -----------------------------------------------------------------------------
//
void CAknsAlValueRandom::Begin()
    {
    iCurrentSeed = TInt64( User::TickCount() );
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsAlValuePoly1D::CAknsAlValuePoly1D
// -----------------------------------------------------------------------------
//
CAknsAlValuePoly1D::CAknsAlValuePoly1D()
    {
    // Derived from CBase -> members zeroed
    }

// -----------------------------------------------------------------------------
// CAknsAlValuePoly1D::ConstructL
// -----------------------------------------------------------------------------
//
void CAknsAlValuePoly1D::ConstructL()
    {
    iPoly = CAknsAlPolyLine1D::NewL();
    }

// -----------------------------------------------------------------------------
// CAknsAlValuePoly1D::NewL
// -----------------------------------------------------------------------------
//
CAknsAlValuePoly1D* CAknsAlValuePoly1D::NewL()
    {
    CAknsAlValuePoly1D* self =
        new(ELeave) CAknsAlValuePoly1D();
    CleanupStack::PushL( self );
    self->ConstructL();
    CleanupStack::Pop( self );
    return self;
    }

// -----------------------------------------------------------------------------
// CAknsAlValuePoly1D::~CAknsAlValuePoly1D
// -----------------------------------------------------------------------------
//
CAknsAlValuePoly1D::~CAknsAlValuePoly1D()
    {
    delete iPoly; //lint !e1551 Doesn't throw exception
    }

// -----------------------------------------------------------------------------
// CAknsAlValuePoly1D::Tick
// -----------------------------------------------------------------------------
//
void CAknsAlValuePoly1D::Tick( TUint32 /*aDeltaTime*/, TUint32 aRelative )
    {
    TPoint p = iPoly->GetPolyPoint( aRelative << 16 ); // Make relative .32 integer
    iValue = p.iY;
    }

// -----------------------------------------------------------------------------
// CAknsAlValuePoly1D::FillData
// -----------------------------------------------------------------------------
//
void CAknsAlValuePoly1D::FillData(
    TAknsRlParameterData& aData ) const
    {
    aData.iType   = EAknsRlParameterTypeNumber;
    aData.iNumber = iValue;
    }

// -----------------------------------------------------------------------------
// CAknsAlValuePoly1D::SetParametersL
// -----------------------------------------------------------------------------
//
void CAknsAlValuePoly1D::SetParametersL(
    MAknsRlParameterIterator& aParameters )
    {
    // Iterate over available parameters
    while( aParameters.HasNext() )
        {
        const TAknsRlParameterData* param = aParameters.NextL();

        if( param->iName->Compare( KAknsAlValuePoly1DPoints ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeString )
                User::Leave( KErrArgument );

            if( !param->iString )
                User::Leave( KErrArgument );

            if( ( param->iString->Length() % 2 ) != 0 ) // Array size is odd
                User::Leave( KErrArgument );

            iPoly->SetPolyPoints1DL( *(param->iString) );
            iPoly->CalculateLengthsL();
            }
        else if( param->iName->Compare( KAknsAlValuePoly1DFactor ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iPoly->SetScaledArea( TSize( 1, param->iNumber ) );
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknsAlValuePoly1D::Begin
// -----------------------------------------------------------------------------
//
void CAknsAlValuePoly1D::Begin()
    {
    TPoint p = iPoly->GetPolyPoint( 0 );
    iValue = p.iY;
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsAlValuePoly2D::CAknsAlValuePoly2D
// -----------------------------------------------------------------------------
//
CAknsAlValuePoly2D::CAknsAlValuePoly2D()
    {
    // Derived from CBase -> members zeroed
    }

// -----------------------------------------------------------------------------
// CAknsAlValuePoly2D::ConstructL
// -----------------------------------------------------------------------------
//
void CAknsAlValuePoly2D::ConstructL()
    {
    iPoly = CAknsAlPolyLine::NewL();
    iValue.SetLength(2);
    iValue[0] = 0;
    iValue[1] = 0;
    }

// -----------------------------------------------------------------------------
// CAknsAlValuePoly2D::NewL
// -----------------------------------------------------------------------------
//
CAknsAlValuePoly2D* CAknsAlValuePoly2D::NewL()
    {
    CAknsAlValuePoly2D* self =
        new(ELeave) CAknsAlValuePoly2D();
    CleanupStack::PushL( self );
    self->ConstructL();
    CleanupStack::Pop( self );
    return self;
    }

// -----------------------------------------------------------------------------
// CAknsAlValuePoly2D::~CAknsAlValuePoly2D
// -----------------------------------------------------------------------------
//
CAknsAlValuePoly2D::~CAknsAlValuePoly2D()
    {
    delete iPoly; //lint !e1551 Doesn't throw exception
    }

// -----------------------------------------------------------------------------
// CAknsAlValuePoly2D::Tick
// -----------------------------------------------------------------------------
//
void CAknsAlValuePoly2D::Tick(
    TUint32 /*aDeltaTime*/, TUint32 aRelative )
    {
    TPoint p = iPoly->GetPolyPoint( aRelative << 16 ); // Make relative .32 integer
    iValue[0] = p.iX;
    iValue[1] = p.iY;
    }

// -----------------------------------------------------------------------------
// CAknsAlValuePoly2D::FillData
// -----------------------------------------------------------------------------
//
void CAknsAlValuePoly2D::FillData(
    TAknsRlParameterData& aData ) const
    {
    aData.iType   = EAknsRlParameterTypeString;
    aData.iString = &iValue;
    }

// -----------------------------------------------------------------------------
// CAknsAlValuePoly2D::SetParametersL
// -----------------------------------------------------------------------------
//
void CAknsAlValuePoly2D::SetParametersL(
    MAknsRlParameterIterator& aParameters )
    {
    // Iterate over available parameters
    while( aParameters.HasNext() )
        {
        const TAknsRlParameterData* param = aParameters.NextL();

        if( param->iName->Compare( KAknsAlValuePoly2DPoints ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeString )
                User::Leave( KErrArgument );

            if( !param->iString )
                User::Leave( KErrArgument );

            if( ( param->iString->Length() % 2 ) != 0 ) // Array size is odd
                User::Leave( KErrArgument );

            iPoly->SetPolyPointsL( *(param->iString) );
            iPoly->CalculateLengthsL();
            }
        else if( param->iName->Compare( KAknsAlValuePoly2DFactor ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeString )
                User::Leave( KErrArgument );

            if( !param->iString )
                User::Leave( KErrArgument );

            // We need 2 or more elements
            if( param->iString->Length() < 2 )
                User::Leave( KErrArgument );

            iPoly->SetScaledArea( TSize( (*param->iString)[0],
                                         (*param->iString)[1] ) );
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknsAlValuePoly2D::Begin
// -----------------------------------------------------------------------------
//
void CAknsAlValuePoly2D::Begin()
    {
    TPoint p = iPoly->GetPolyPoint( 0 );
    iValue[0] = p.iX;
    iValue[1] = p.iY;
    }

