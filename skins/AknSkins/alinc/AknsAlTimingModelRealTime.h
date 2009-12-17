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

#ifndef AKNSALTIMINGMODELREALTIME_H
#define AKNSALTIMINGMODELREALTIME_H

// INCLUDE FILES
#include "AknsAlTimingModel.h"

// CONSTANTS

// Timing model UID
const TInt KAknsAlTimingModelRealTimeUID = 0x10207624;

const TInt KAlMaxDurationVal = 65536; // In milliseconds, ~65 seconds

// Constants for parameter names
_LIT( KAknsAlRealTimeDuration, "d" );
_LIT( KAknsAlRealTimeRepeatCount, "rc" );
_LIT( KAknsAlRealTimeRepeatDuration, "rd" );
_LIT( KAknsAlRealTimeWrap, "w" );

// CLASS DECLARATION
/**
Real-time timing model that advances by keeping track on elapsed time between
subsequent updates. The next named parameters are supported:
- "d", duration
- "rc", repeat count
- "rd", repeat duration
- "w", wrap mode

Timing model configuration works as follows:

Duration undefined:
D    RC    RD     Single duration  Total duration
0    Inf   0      Inf              Inf
0    Inf   Def    RD               RD
0    Inf   Inf    Inf              Inf
0    0     0      0                0
0    0     Def    RD               RD
0    0     Inf    Inf              Inf
0    Def   0      0                0
0    Def   Def    RD               RD
0    Def   Inf    Inf              Inf

Duration defined:
D    RC    RD    Single duration   Total duration
Def  Inf   0     D                 Inf
Def  Inf   Def   D                 RD
Def  Inf   Inf   D                 Inf
Def  0     0     D                 D
Def  0     Def   D                 RD
Def  0     Inf   D                 Inf
Def  Def   0     D                 D * RC
Def  Def   Def   D                 MIN(D * RC, RD)
Def  Def   Inf   D                 D * RC

Duration infinite:
D    RC    RD    Single duration   Total duration
Inf  Inf   0     Inf               Inf
Inf  Inf   Def   RD                RD
Inf  Inf   Inf   Inf               Inf
Inf  0     0     Inf               Inf
Inf  0     Def   RD                RD
Inf  0     Inf   Inf               Inf
Inf  Def   0     Inf               Inf
Inf  Def   Def   RD                RD
Inf  Def   Inf   Inf               Inf

The above tables can reduced to:
    D    RC    RD    Single duration   Total duration
#1  0    *     Def   RD                RD
#2  0    *     Inf   Inf               Inf
#3  0    Inf   0     Inf               Inf
#4  0    0     0     0                 0
#5  0    Def   0     0                 0
#6  Def  Inf   0     D                 Inf
#7  Def  Inf   Def   D                 RD
#8  Def  Inf   Inf   D                 Inf
#9  Def  0     0     D                 D
#10 Def  0     Def   D                 RD
#11 Def  0     Inf   D                 Inf
#12 Def  Def   0     D                 D * RC
#13 Def  Def   Def   D                 MIN(D * RC, RD)
#14 Def  Def   Inf   D                 D * RC
#15 Inf  *     Def   RD                RD
#16 Inf  *     Inf   Inf               Inf
#17 Inf  *     0     Inf               Inf

Abbreviations used:
D   duration
RC  repeat count
RD  repeat duration
Def defined
0   undefined (zero in resulting durations)
Inf infinite
*   any value (defined, undefined, infinite)

Note: Case #3 follows SMIL, it could have been defined to produce the same
result as #4 and #5. Cases #4 and #5 could have been implemented as impossible
case that causes a leave. Current implementation just sets the total duration
to zero which produces an animation that finishes immediately.

Configuration value formats:
- Duration, repeat count and repeat duration are all defined as follows:
  < 0, value is infinite
    0, value is undefined
  > 0, value is defined
- Duration is milliseconds, when defined
- Repeat count is the number of repeated durations, when defined
- Repeat duration is milliseconds, when defined
- Because fixed point calculations are used, durations and repeat durations
  larger than KAlMaxDurationVal are clamped to KAlMaxDurationVal. It is
  possible to produce longer total durations by using repeat count.

Wrap:
If duration is repeated, wrapping defines how successive durations are mapped
to relative values ranges.
- If ETrue the sequence is wrapped [0,1][1,0][0,1]...
- If EFalse the sequence is tiled [0,1][0,1][0,1]...
- The default wrap mode is tiled. Wrapping is ignored if the duration is not
  repeated.

Relative value format:
- 32-bit unsigned integer, fixed point, 16.16 format.
- Relative value range [0, 65536] maps effectively to real number range [0, 1].
- Relative value is quaranteed to be in range [0, 65536].
- If animation duration is infinite the relative value is always 0.

@since 3.0
*/
NONSHARABLE_CLASS( CAknsAlTimingModelRealTime ): public MAknsAlTimingModel
    {
    public:

        static inline TBool Infinite( TInt aValue )
            {
            return ( aValue < 0 ? ETrue: EFalse );
            }

        static inline TBool Undefined( TInt aValue )
            {
            return ( aValue == 0 ? ETrue: EFalse );
            }

        static inline TBool Defined( TInt aValue )
            {
            return ( aValue > 0 ? ETrue: EFalse );
            }

    protected:
        CAknsAlTimingModelRealTime();

    public:
        static CAknsAlTimingModelRealTime* NewL();
        virtual ~CAknsAlTimingModelRealTime();

        TInt Duration() const;
        TInt TotalDuration() const;

    public: // Implementation of MAknsAlTimingModel

        /**
        * Supported named parameters are:
        * - "d", integer, duration
        * - "rc", integer, repeat count
        * - "rd", integer, repeat duration
        * - "w", boolean (0/1), wrap mode
        *
        * For documentation see the extensive class comment.
        *
        * Default parameter values are:
        * - "d" = 0
        * - "rc" = 0
        * - "rd" = 0
        * - "w" = EFalse (0)
        */
        void SetParametersL( MAknsRlParameterIterator& aParameters );
        /**
        * Advances the timing model by the provided delta time.
        */
        void Tick( const TInt aDeltaTime );
        /**
        * Timestamp based ticking is ignored.
        */
        void Tick( const TTime& aStamp );
        TUint32 RelativeValue() const;
        TBool IsFinished() const;
        void Begin();

    private:
        void Configure( TInt aD, TInt aRC, TInt aRD, TBool aWrap );

    private:

        /// The length of one active duration, in milliseconds
        TInt iDuration;

        /// The total animation length, in milliseconds
        TInt iTotalDuration;

        /// Elapsed time since the start of the animation, in milliseconds
        TInt iElapsedTime;

        /// The current relative value, fixed point 16.16 format.
        TUint32 iRelative;

        /// Used wrapping mode.
        TBool iWrap;
    };

#endif // AKNSALTIMINGMODELREALTIME_H

// End of File

