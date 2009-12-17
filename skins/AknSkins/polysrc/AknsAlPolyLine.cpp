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
* Description:  Poly line class.
*
*/


#include "AknsAlPolyLine.h"

// -----------------------------------------------------------------------------
// C++ constructor.
// -----------------------------------------------------------------------------
//
CAknsAlPolyLine::CAknsAlPolyLine()
    {
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsAlPolyLine::~CAknsAlPolyLine()
    {
    delete [] iSegmentLengths;
    iSegmentLengths = NULL;
    }

// -----------------------------------------------------------------------------
// Symbian 1st phase constructor.
// -----------------------------------------------------------------------------
//
CAknsAlPolyLine* CAknsAlPolyLine::NewL()
    { // static
    CAknsAlPolyLine* self=new(ELeave) CAknsAlPolyLine();
    return self;
    }

// -----------------------------------------------------------------------------
// Gets poly point.
// -----------------------------------------------------------------------------
//
TPoint CAknsAlPolyLine::GetPolyPoint( const TUint32 aPosition )
    {
    // aPosition is 32 bit integer representing range 0...1
#if (defined(__SERIES60_26__) || defined(__SERIES60_27__) || defined(__SERIES60_28__))
    TInt64 aa;
    aa.Set(0,aPosition);
    TInt64 bb;
    bb.Set(0,iSegmentLengths[iPointCount-2]);
    TInt64 pos64 = aa*bb;
    TUint32 pos = (TUint32)pos64.High(); // same as pos64 >> 32
#else // 3.0 or newer
    TUint64 pos64 = TUint64(aPosition) * TUint64(iSegmentLengths[iPointCount-2]);
    TUint32 pos = pos64 >> 32;
#endif
    // because of possible rounding errors, first check for last pixel
    if (pos >= iSegmentLengths[iPointCount-2])
        {
        return TPoint(iPoints[iPointCount-1].iX,
                      iPoints[iPointCount-1].iY);
        }

    // find the segment, where pos is pointing
    TInt i = 0; // first index
    TInt j = iPointCount-2; // last index
    TInt k;
    while ( i < j )
        {
        k = (i + j)/2;
        if ( pos < iSegmentLengths[k] )
            {
            j = k;
            }
        else
            {
            i = k + 1;
            }
        }
    // i = j = wanted index

    TUint32 segLength; // real segment length (not cumulative)
    if (i > 0)
        {
        pos -= iSegmentLengths[i-1]; // position between 0...segment length
        segLength = iSegmentLengths[i]-iSegmentLengths[i-1];
        }
    else
        {
        segLength =  iSegmentLengths[0]; // we are in first segment
        }

    TUint32 deltaX, deltaY;
    // must handle negative values differently
    TBool xnegative = EFalse;
    TBool ynegative = EFalse;

    if ( (iPoints[i+1].iX - iPoints[i].iX) < 0)
        {
        deltaX = iPoints[i].iX - iPoints[i+1].iX; // max 16 bits
        xnegative = ETrue;
        }
    else
        {
        deltaX = iPoints[i+1].iX - iPoints[i].iX; // max 16 bits
        }

    if ( (iPoints[i+1].iY - iPoints[i].iY) < 0)
        {
        deltaY = iPoints[i].iY - iPoints[i+1].iY; // max 16 bits
        ynegative = ETrue;
        }
    else
        {
        deltaY = iPoints[i+1].iY - iPoints[i].iY; // max 16 bits
        }

    TUint32 deltaXpos = ((pos * deltaX) / segLength);
    TUint32 deltaYpos = ((pos * deltaY) / segLength);

    if (xnegative)
        {
        deltaXpos = iPoints[i].iX - deltaXpos;
        }
    else
        {
        deltaXpos = iPoints[i].iX + deltaXpos;
        }

    if (ynegative)
        {
        deltaYpos = iPoints[i].iY - deltaYpos;
        }
    else
        {
        deltaYpos = iPoints[i].iY + deltaYpos;
        }

    return CalculateScaledPoint(TPoint(deltaXpos,deltaYpos));
    }

// -----------------------------------------------------------------------------
// Calculates lengths.
// -----------------------------------------------------------------------------
//
void CAknsAlPolyLine::CalculateLengthsL()
    {
    // won't get here if not at least 2 points are already set
    delete [] iSegmentLengths;
    iSegmentLengths = NULL;

    iSegmentLengths = new (ELeave) TUint32[iPointCount-1];

    TInt32 diffX, diffY;

    TUint32 length = 0; // for holding the cumulative length

    for (TInt i = 0; i < (iPointCount-1); i++)
        {
        // Points have their x and y coordinates in form 0.16 (e.g. only decimal
        // part is set), so there won't be overflow when multiplying. But after
        // multiply the results can't be added together without a possibility
        // for overflow. That's why the coordinates are first divided by 2.
        diffX = (iPoints[i+1].iX - iPoints[i].iX) >> 1; // result can be negative!
        diffY = (iPoints[i+1].iY - iPoints[i].iY) >> 1; // result can be negative!

        // this is not the actual length, but length/2
        // length might overflow if the poly has over 60000 segments...
        length += Sqrt( diffX*diffX + diffY*diffY );
        iSegmentLengths[i] = length;
        }
    }

// End of file
