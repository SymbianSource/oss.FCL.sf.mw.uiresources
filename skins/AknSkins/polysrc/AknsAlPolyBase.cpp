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
* Description:  Base class for PolyLine and PolySpline classes.
*
*/


#include "AknsAlPolyBase.h"

#include <e32debug.h>

// -----------------------------------------------------------------------------
// Constructor.
// -----------------------------------------------------------------------------
//
CAknsAlPolyBase::CAknsAlPolyBase()
    {
    iPoints = NULL; // not needed, but just in case
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsAlPolyBase::~CAknsAlPolyBase()
    {
    delete iPoints;
    iPoints = NULL;
    }

// -----------------------------------------------------------------------------
// Sets scaled area.
// -----------------------------------------------------------------------------
//
void CAknsAlPolyBase::SetScaledArea( const TSize aAreaSize )
    {
    iAreaSize = aAreaSize;
    }

// -----------------------------------------------------------------------------
// Sets poly points.
// -----------------------------------------------------------------------------
//
void CAknsAlPolyBase::SetPolyPointsL( const TDesC16& aPointString )
    {
    TInt coordCount = aPointString.Length();

    if ((coordCount & 0x1) || coordCount < 4) // odd number or too few point coordinates
        {
        RDebug::Printf("%s, line %d, ERROR: Illegal coordinate count", __FILE__, __LINE__);
        User::Leave(KErrArgument);
        }

    iPointCount = coordCount >> 1;
    iPoints = new (ELeave) TPolyPoint[iPointCount];

    iPoints[0].iX = aPointString[0];
    iPoints[0].iY = aPointString[1];

    TUint16 oldX = iPoints[0].iX;
    TUint16 oldY = iPoints[0].iY;

    // parse numbers from the descriptor
    for (TInt i = 1; i < iPointCount; i++) // first point already set
        {
        iPoints[i].iX = aPointString[i*2];
        iPoints[i].iY = aPointString[i*2+1];

        if (oldX == iPoints[i].iX && oldY == iPoints[i].iY)
            {
            RDebug::Printf("%s, line %d, ERROR: subsequent coordinates cannot be equal", __FILE__, __LINE__);
            User::Leave(KErrArgument);
            }

        oldX = iPoints[i].iX;
        oldY = iPoints[i].iY;
        }
    }


// -----------------------------------------------------------------------------
// Sets poly1D points.
// -----------------------------------------------------------------------------
//
void CAknsAlPolyBase::SetPolyPoints1DL( const TDesC16& aPointString )
    {
    TInt coordCount = aPointString.Length();

    if ((coordCount & 0x1) || coordCount < 4) // odd number or too few point coordinates
        User::Leave(KErrArgument);

    iPointCount = coordCount >> 1;
    iPoints = new (ELeave) TPolyPoint[iPointCount];

    iPoints[0].iX = aPointString[0];
    iPoints[0].iY = aPointString[1];

    TUint16 oldX = iPoints[0].iX;

    // parse numbers from the descriptor
    for (TInt i = 1; i < iPointCount; i++) // first point already set
        {
        iPoints[i].iX = aPointString[i*2];
        iPoints[i].iY = aPointString[i*2+1];

        if (iPoints[i].iX < oldX) // points must be in ascending order
            User::Leave(KErrArgument);

        oldX = iPoints[i].iX;
        }
    }

// Some helper methods for child classes
// -----------------------------------------------------------------------------
// Squareroot.
// -----------------------------------------------------------------------------
//
TUint CAknsAlPolyBase::Sqrt( TUint aParam )
    {
    TUint t,b,c=0;

    for (b=0x40000000;b!=0;b>>=2)
        {
        t = c + b;
        c >>= 1;
        if (t <= aParam)
            {
            aParam -= t;
            c += b;
            }
        }
    return(c);
    }

// -----------------------------------------------------------------------------
// Calculates scaled point.
// -----------------------------------------------------------------------------
//
TPoint CAknsAlPolyBase::CalculateScaledPoint( const TPoint aPoint )
    {
    TPoint ret(0,0);
    if (iAreaSize.iWidth == 0)
        {
        ret.iX = aPoint.iX;
        }
    else
        {
        ret.iX = (aPoint.iX * iAreaSize.iWidth) >> 16;
        }

    if (iAreaSize.iHeight == 0)
        {
        ret.iY = aPoint.iY;
        }
    else
        {
        ret.iY = (aPoint.iY * iAreaSize.iHeight) >> 16;
        }

    return ret;
    }

// End of file

