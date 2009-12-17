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


#ifndef AKNSALPOLYLINE1D_H
#define AKNSALPOLYLINE1D_H

#include "AknsAlPolyBase.h"
#include "AknsAlFixed.h"


/**
* Base class for PolyLine and PolySpline classes.
*
* The class is not intended for derivation outside the library.
*
* @since 3.0
*/
class CAknsAlPolyLine1D : public CAknsAlPolyBase
    {
    public:  // Constructors

        static CAknsAlPolyLine1D* NewL();

        /**
        * Destructor
        *
        * @since 3.0
        */
        ~CAknsAlPolyLine1D();

    public: // New functions

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
        TPoint GetPolyPoint( const TUint32 aPosition );

    private:

        /**
        * Default constructor.
        *
        * @since 3.0
        */
        CAknsAlPolyLine1D();
    };

#endif //AKNSALPOLYLINE1D_H

// End of file

