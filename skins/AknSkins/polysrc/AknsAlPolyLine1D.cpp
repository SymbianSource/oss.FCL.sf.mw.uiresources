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
* Description:  PolySpline.
*
*/


#include "AknsAlPolyLine1D.h"


// -----------------------------------------------------------------------------
// C++ constructor.
// -----------------------------------------------------------------------------
//
CAknsAlPolyLine1D::CAknsAlPolyLine1D()
    {
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsAlPolyLine1D::~CAknsAlPolyLine1D()
    {
    }

// -----------------------------------------------------------------------------
// Symbian 1st phase constructor.
// -----------------------------------------------------------------------------
//
CAknsAlPolyLine1D* CAknsAlPolyLine1D::NewL()
    { // static
    CAknsAlPolyLine1D* self=new(ELeave) CAknsAlPolyLine1D();
    return self;
    }

// -----------------------------------------------------------------------------
// Gets poly point.
// -----------------------------------------------------------------------------
//
TPoint CAknsAlPolyLine1D::GetPolyPoint( const TUint32 aPosition )
    {
    // linepoints have x-coordinates between 0...16bit,
    // so we only need to use upper 16 bits from aPosition
    TInt pos = aPosition >> 16;

    // find the line, where pos is pointing
    TInt i = 0; // first index
    TInt j = iPointCount-1; // last index
    TInt k;
    while ( i < j )
        {
        k = (i + j)/2;
        if ( pos < iPoints[k].iX )
            {
            j = k;
            }
        else
            {
            i = k + 1;
            }
        }
    // i = j = wanted line's end point index

    TUint32 deltaX = iPoints[i].iX - iPoints[i-1].iX; // always positive, 16 bits
    TUint32 deltaY; // might be negative, so use flag to get correct results
    TBool negativeY = EFalse;
    if ((iPoints[i].iY - iPoints[i-1].iY) < 0)
        {
        deltaY = iPoints[i-1].iY - iPoints[i].iY;
        negativeY = ETrue;
        }
    else
        {
        deltaY = iPoints[i].iY - iPoints[i-1].iY;
        }
    pos -= iPoints[i-1].iX;

    if (pos == 0) // we are in line's first pixel
        {
        return TPoint((iPoints[i-1].iX * iAreaSize.iWidth) >> 16,
                  (iPoints[i-1].iY * iAreaSize.iHeight) >> 16);
        }

    TUint32 calculatedY = (deltaY * pos) / deltaX; // first get delta from start point
    if (negativeY)
        {
        calculatedY = iPoints[i-1].iY - calculatedY; // line going downwards
        }
    else
        {
        calculatedY = iPoints[i-1].iY + calculatedY; // line going upwards
        }

    return CalculateScaledPoint(TPoint(aPosition >> 16,calculatedY));
    }

// End of file

