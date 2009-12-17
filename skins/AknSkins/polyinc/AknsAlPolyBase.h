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


#ifndef AKNSALPOLYBASE_H
#define AKNSALPOLYBASE_H

#include "AknsAlFixed.h"
#include <e32base.h>
/**
* Base class for PolyLine and PolySpline classes.
*
* The class is not intended for derivation outside the library.
*
* @since 3.0
*/
class CAknsAlPolyBase : public CBase
    {
    public:  // Constructors and destructor

        /**
        * Default constructor.
        *
        * @since 3.0
        */
        CAknsAlPolyBase();

        /**
        * Destructor
        *
        * @since 3.0
        */
        virtual ~CAknsAlPolyBase();

    public: // New functions

        /**
        * Internally all positions are scaled to spacing from 0 to 1.
        * This method sets the area where positions are scaled
        * before returning.
        *
        * @param aAreaSize
        *
        * @since 3.0
        */
        void SetScaledArea( const TSize aAreaSize );

        /**
        * Helper method for scaling point to scaled area.
        * Possible combinations:
        * ScaledArea(x,y) -> return TPoint(x*TFixed(x), y*TFixed(y))
        * ScaledArea(x,0) -> return TPoint(x*Tfixed(x), TFixed(y))
        * ScaledArea(0,y) -> return TPoint(Tfixed(x), y*TFixed(y))
        * ScaledArea(0,0) -> return TPoint(Tfixed(x), TFixed(y))
        *
        * @param aPoint input point with (TFixed(x), TFixed(y))
        *
        * @return TPoint scaled to given scaled area
        *
        * @since 3.0
        */
        TPoint CalculateScaledPoint( const TPoint aPoint );

        /**
        * Sets the points for Poly(Line/Spline).
        * TDesC holds 16-bit integers, which represent values from 0 to 1.
        * Format of string is: point1_x, point1_y, point2_x, point2_y,...
        *
        * @return Leaves with KErrArgument, if the string has odd number of items
        *   or if 2 adjacent points are the same (zero length line/spline segment).
        *   Leaves with KErrNoMemory, if there were not enough memory for new points.
        *
        * @since 3.0
        */
        void SetPolyPointsL( const TDesC16& aPointString );

        /**
        * Sets the points for 1-dimensional Poly(Line/Spline).
        * TDesC holds 16-bit integers, which represent values from 0 to 1.
        * Format of string is: point1_x, point1_y, point2_x, point2_y,...
        *
        * @return Leaves with KErrArgument, if the string has odd number of items
        *   or if 2 adjacent are in wrong order (points must be in ascending order).
        *   Leaves with KErrNoMemory, if there were not enough memory for new points.
        *
        * @since 3.0
        */
        void SetPolyPoints1DL( const TDesC16& aPointString );

        /**
        * Fast square root for integers. If the input is 16.16 fixed point,
        * the output is 8.8 fixed point. Use SqrtFixed to get correct output.
        *
        * @param aParam
        *
        * @return Integer square root.
        *
        * @since 3.0
        */
        TUint Sqrt( TUint aParam );

        /**
        * Returns the point in poly(line/spline) in scaled area.
        *
        * @param aPosition 32-bit integer representing the position in poly(line/spline).
        *   If aPosition is 0, starting point is returned and if aPosition is 0xffffffff,
        *   the last point is returned.
        *
        * @return Point in poly(line/spline) scaled to the set area or if no
        *   area is set, returned values are in scale from 0 to 1.
        *
        * @since 3.0
        */
        virtual TPoint GetPolyPoint( const TUint32 aPosition ) =0;

        /**
        * Calculates and sets the lengths of poly segments. This is automatically
        * called after the points have been set.
        *
        * @return Returns KErrNoMemory if the lengths couldn't be saved.
        */
        virtual void CalculateLengthsL( ) {};

    protected:  // Data

        TSize iAreaSize;

        TInt iPointCount; // number of points

        struct TPolyPoint
            {
            TUint16 iX;
            TUint16 iY;
            };

        TPolyPoint* iPoints; // poly points

        // for holding cumulative lengths of poly segments - last length is the
        // whole poly's length
        TUint32* iSegmentLengths;
    };

#endif //AKNSALPOLYBASE_H

// End of file
