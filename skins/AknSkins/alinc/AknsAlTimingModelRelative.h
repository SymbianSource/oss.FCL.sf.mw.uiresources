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

#ifndef AKNSALTIMINGMODELRELATIVE_H
#define AKNSALTIMINGMODELRELATIVE_H

// INCLUDE FILES
#include "AknsAlTimingModel.h"

// CONSTANTS

// Timing model UID
const TInt KAknsAlTimingModelRelativeUID = 0x10207625;

// Constants for parameter names
_LIT( KAknsAlRelativeTimeSpan, "t" );
_LIT( KAknsAlRelativeSlices, "s" );
_LIT( KAknsAlRelativeWrap, "w" );

// CLASS DECLARATION
/**
* Implements relative timing model. The timing model is relative to anchors in
* real-time. Timespans define the location of anchors. Possible timespans are
* hour, day, week and month. For example, when the used timespan is hour the
* start of real-time hour is used as an anchor and relative value goes from [0,
* 1] over this timespan.
*
* Timing model also supports slices and wrapping which affect how relative
* values are generated over one timespan.
*
* @since 3.0
*/
NONSHARABLE_CLASS( CAknsAlTimingModelRelative ): public MAknsAlTimingModel
    {
    public:
        enum TTimeSpan
            {
            EHour  = 0,
            EDay   = 1,
            EWeek  = 2,
            EMonth = 3
            };

    protected:
        CAknsAlTimingModelRelative();

    public:
        static CAknsAlTimingModelRelative* NewL();
        virtual ~CAknsAlTimingModelRelative();

     public: // Implementation of MAknsAlTimingModel

        /**
        * Supported named parameters are:
        * - "t", enumeration TTimeSpan, used timespan
        * - "s", integer >= 1, number of slices in timespan
        * - "w", boolean (0/1), wrapping toggle
        *
        * Timespan, "t", must be one of the values in TTimeSpan.
        *
        * Slicing defines the number of slices in the used timespan. For
        * example, using timespan hour and 4 slices will effectively divide
        * hour in 15 minute slices (results in four relative value spans over
        * hour, [0, 1][1, 0][0, 1][1, 0] with wrapping,
        * [0, 1][0, 1][0, 1][0, 1] without wrapping).
        *
        * Number of slices must be >= 1.
        *
        * If wrapping is true, every second slice is reversed (relative value
        * goes over range [1, 0] instead of [0, 1]). Wrapping affects only one
        * slice. To achieve continuous wrapping over multiple timespans an even
        * value for slices should be used. Note that wrapping is ignored when
        * slice count is 1.
        *
        * The default parameter values are:
        * - "t" = EHour
        * - "s" = 1
        * - "w" = EFalse (0)
        */
        void SetParametersL( MAknsRlParameterIterator& aParameters );
        /**
        * Updates the timing model. Provided delta time is ignored,
        * TTime::HomeTime is used as time stamp when updating the model.
        */
        void Tick( const TInt aDeltaTime );
        /**
        * Updates the timing model to the point in time defined by the provided
        * time stamp.
        */
        void Tick( const TTime& aStamp );
        TUint32 RelativeValue() const;
        TBool IsFinished() const;
        void Begin();

    private:

        /// Time span type
        TTimeSpan iTimeSpan;
        /// Number of slices in time span, >= 1
        TInt iSlices;
        /// Used wrapping mode.
        TBool iWrap;

        /// The current relative value, fixed point 16.16 format.
        TUint32 iRelative;
    };

#endif // AKNSALTIMINGMODELRELATIVE_H

// End of File

