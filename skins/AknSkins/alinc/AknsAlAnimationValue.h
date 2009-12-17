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


#ifndef AKNSALANIMATIONVALUE_H
#define AKNSALANIMATIONVALUE_H

//  INCLUDES
#include <e32std.h>

// FORWARD DECLARATIONS
class CAknsAlPolyLine;
class CAknsAlPolyLine1D;
struct TAknsRlParameterData;
class MAknsRlParameterIterator;

// -----------------------------------------------------------------------------
// AnimationValue interface
// -----------------------------------------------------------------------------

// CLASS DECLARATION
/**
* Interface for animation value. Animation value is an entity that dynamically
* changes over time (most probably a function yielding a value). One animation
* has pool of animation values. When the animation is running it will update
* timing models first and then update the animation values.
*
* AnimationValue is not aware of the context where it is being used. The
* animation framework binds each animation value to a timing model. Binding
* animation values to effect filter parameters is also done by the animation
* framework (with named references).
*
* @since 3.0
*/
class MAknsAlAnimationValue
    {
    public:

        /**
        * This interface is used for controlling the ownership.
        */
        virtual ~MAknsAlAnimationValue() {}

        /**
        * Advances the state of the animation value by one frame.
        *
        * @param aDeltaTime The time delta between this update and the previous
        *   update, in milliseconds.
        * @param aRelative The relative position in current animation duration,
        *   16.16 fixed point, always in real number range [0,1]. See
        *   CAknsAlTimingModelRealTime.h for details.
        */
        virtual void Tick( TUint32 aDeltaTime, TUint32 aRelative ) =0;

        /**
        * Fills the provided parameter structure with the current animation
        * value type and value. Note that the parameter name is not changed
        * (name is assigned by the animation framework).
        */
        virtual void FillData( TAknsRlParameterData& aData ) const =0;

        /**
        * Parametrizes the animation value. The semantics of this method follow
        * MAknsRlEffect::SetParametersL. Setting parameters is done once when
        * the animation is created.
        */
        virtual void SetParametersL( MAknsRlParameterIterator& aParameters ) =0;

        /**
        * Resets the animation value state to the very beginning of animation
        * (without losing any parameter information). Restarting an animation
        * cause Begin on all animation values.
        */
        virtual void Begin() =0;

    public: // Cleanup operation

        /**
        * Cleanup operation for internal use.
        *
        * @internal
        */
        static void CleanupOp( TAny* aItem )
            {
            MAknsAlAnimationValue* value =
                static_cast<MAknsAlAnimationValue*>( aItem );
            delete value;
            }
    };

// -----------------------------------------------------------------------------
// LinearRange
// -----------------------------------------------------------------------------

// CONSTANTS

// Animation value UID
const TInt KAknsAlValueLinearRangeUID = 0x10207626;

// Constants for parameter names
_LIT( KAknsAlValueLinearRangeStart, "s" );
_LIT( KAknsAlValueLinearRangeEnd, "e" );

// CLASS DECLARATION
/**
* Animation value implementation of linear range. Resulting values are
* generated linearly in range [start, end] by using mapping
*   current = start + relative * (end - start)
*
* @since 3.0
*/
NONSHARABLE_CLASS( CAknsAlValueLinearRange ):
    public CBase, public MAknsAlAnimationValue
    {
    protected: // Protected constructors
        CAknsAlValueLinearRange();

    public:
        static CAknsAlValueLinearRange* NewL();
        virtual ~CAknsAlValueLinearRange();

    public: // Implementation of MAknsAlAnimationValue
        void Tick( TUint32 aDeltaTime, TUint32 aRelative );

        /**
        * Fills the data with the current range value (integer).
        */
        void FillData( TAknsRlParameterData& aData ) const;

        /**
        * Accepted named parameters:
        * - "s", integer, range [MIN_INT, MAX_INT], range start value
        * - "e", integer, range [MIN_INT, MAX_INT], range end value
        *
        * There are no constraints on start and end values. E.g. "s" < "e" is
        * ok, "s" >= "e" is ok.
        *
        * The default parameter values are:
        * - "s" = 0
        * - "e" = 255
        */
        void SetParametersL( MAknsRlParameterIterator& aParameters );
        void Begin();

    private:
        TInt iValue;
        TInt iStart;
        TInt iEnd;
    };

// -----------------------------------------------------------------------------
// Constant
// -----------------------------------------------------------------------------

// CONSTANTS

// Animation value UID
const TInt KAknsAlValueConstantUID = 0x10207627;

// Constants for parameter names
_LIT( KAknsAlValueConstantValue, "c" );

// CLASS DECLARATION
/**
* Implements a constant value that cannot be changed by ticking (but by
* reparametrizing can).
*
* @since 3.0
*/
NONSHARABLE_CLASS( CAknsAlValueConstant ):
    public CBase, public MAknsAlAnimationValue
    {
    protected: // Protected constructors
        CAknsAlValueConstant();

    public:
        static CAknsAlValueConstant* NewL();
        virtual ~CAknsAlValueConstant();

    public: // Implementation of MAknsAlAnimationValue
        void Tick( TUint32 aDeltaTime, TUint32 aRelative );

        /**
        * Fills the data with the constant value (integer).
        */
        void FillData( TAknsRlParameterData& aData ) const;

        /**
        * Accepted named parameter:
        * - "c", integer, range [MIN_INT, MAX_INT], constant value
        *
        * The default parameter value is:
        * - "c" = 0
        */
        void SetParametersL( MAknsRlParameterIterator& aParameters );
        void Begin();

    private:
        TInt iValue;
    };

// -----------------------------------------------------------------------------
// Random
// -----------------------------------------------------------------------------

// CONSTANTS

// Animation value UID
const TInt KAknsAlValueRandomUID = 0x10207628;

// Constants for parameter names
_LIT( KAknsAlValueRandomMin, "min" );
_LIT( KAknsAlValueRandomMax, "max" );

// CLASS DECLARATION
/**
* Implements random animation value. Resulting random values are in range [min,
* max]. User::TickCount is used for generating the random seed.
*
* @since 3.0
*/
NONSHARABLE_CLASS( CAknsAlValueRandom ):
    public CBase, public MAknsAlAnimationValue
    {
    protected: // Protected constructors
        CAknsAlValueRandom();

    public:
        static CAknsAlValueRandom* NewL();
        virtual ~CAknsAlValueRandom();

    public: // Implementation of MAknsAlAnimationValue
        void Tick( TUint32 aDeltaTime, TUint32 aRelative );

        /**
        * Fills the data with the current random value (integer).
        */
        void FillData( TAknsRlParameterData& aData ) const;

        /**
        * Accepted named parameters:
        * - "min", integer, range [MIN_INT, MAX_INT], range start value
        * - "max", integer, range [MIN_INT, MAX_INT], range end value
        *
        * Random values are generated in range [min, max]. Min must be <= max,
        * otherwise parametrization will leave.
        *
        * The default parameter values are:
        * - "min" = 0
        * - "max" = 255
        */
        void SetParametersL( MAknsRlParameterIterator& aParameters );
        void Begin();

    private:
        TInt64 iCurrentSeed;
        TInt iValue;
        TInt iMin;
        TInt iMax;
    };

// -----------------------------------------------------------------------------
// Poly line 1D
// -----------------------------------------------------------------------------

// CONSTANTS

// Animation value UID
const TInt KAknsAlValuePoly1DUID = 0x10207629;

// Constants for parameter names
_LIT( KAknsAlValuePoly1DPoints, "p" );
_LIT( KAknsAlValuePoly1DFactor, "f" );

// CLASS DECLARATION
/**
* Implements one dimensional polyline as a segmented function on xy-plane.
* Relative value defines the position on x axis and the polyline defines the y
* for each x.
*
* @since 3.0
*/
NONSHARABLE_CLASS( CAknsAlValuePoly1D ):
    public CBase, public MAknsAlAnimationValue
    {
    protected: // Protected constructors
        CAknsAlValuePoly1D();
        void ConstructL();

    public:
        static CAknsAlValuePoly1D* NewL();
        virtual ~CAknsAlValuePoly1D();

    public: // Implementation of MAknsAlAnimationValue
        void Tick( TUint32 aDeltaTime, TUint32 aRelative );

        /**
        * Fills the data with the current value (integer).
        */
        void FillData( TAknsRlParameterData& aData ) const;

        /**
        * Accepted named parameters:
        * - "p", descriptor/string, contains polyline points
        * - "f", integer, the factor used for scaling the polyline results
        *
        * Descriptor "p" contains (x,y) pairs that define the polyline
        * segments. Polyline is not closed (no segment between the first and
        * last points). Coordinates are interpreted as 16-bit values that map
        * to floating point range [0, 1].
        *
        * Input descriptor "p" must fulfil the next constraints:
        * - Length must be even (divisible with 2)
        * - p[n] < p[n+2] must hold, where n is an even integer (yields x
        *   coordinates, odd integers index y coordinates).
        *
        * Factor "f" defines the range of resulting values, hence the resulting
        * values are in range [0, f]. Factor "f" must be >= 0.
        *
        * The default parameter values are:
        * - "p" = empty
        * - "f" = 1
        */
        void SetParametersL( MAknsRlParameterIterator& aParameters );
        void Begin();

    private:
        TInt iValue;
        // The numeric implementation of polyline, owned
        CAknsAlPolyLine1D* iPoly;
    };

// -----------------------------------------------------------------------------
// Poly line 2D
// -----------------------------------------------------------------------------

// CONSTANTS

// Animation value UID
const TInt KAknsAlValuePoly2DUID = 0x1020762A;

// Constants for parameter names
_LIT( KAknsAlValuePoly2DPoints, "p" );
_LIT( KAknsAlValuePoly2DFactor, "f" );

// CLASS DECLARATION
/**
* Implements 2D polyline xy-plane. Relative value defines the position on the
* length of polyline.
*
* @since 3.0
*/
NONSHARABLE_CLASS( CAknsAlValuePoly2D ):
    public CBase, public MAknsAlAnimationValue
    {
    protected: // Protected constructors
        CAknsAlValuePoly2D();
        void ConstructL();

    public:
        static CAknsAlValuePoly2D* NewL();
        virtual ~CAknsAlValuePoly2D();

    public: // Implementation of MAknsAlAnimationValue
        void Tick( TUint32 aDeltaTime, TUint32 aRelative );

        /**
        * Fills the data with the current spline point. It is a two element
        * 16-bit descriptor containing point (x,y), string. First element
        * contains the value x, second element contains the value y.
        */
        void FillData( TAknsRlParameterData& aData ) const;

        /**
        * Accepted named parameters:
        * - "p", descriptor/string, contains polyline points
        * - "f", descriptor, the factors used for scaling the polyline results
        *
        * Descriptor "p" contains (x,y) pairs that define the polyline
        * segments. Polyline is not closed (no segment between the first and
        * last points). Coordinates are interpreted as 16-bit values that map
        * to floating point range [0, 1]. The number of coordinates must be
        * even (divisible with 2)
        *
        * Factor "f" defines the range of resulting values, hence the resulting
        * values are in range [fx, fy], where fx >= 0 and fy >= 0. The first
        * descriptor value is considered "fx", the second "fy", the rest is
        * omitted. At least 2 values must be available.
        *
        * The default parameter values are:
        * - "p" = empty
        * - "f" = (1, 1)
        */
        void SetParametersL( MAknsRlParameterIterator& aParameters );
        void Begin();

    private:
        TBuf16<2> iValue;
        // The numeric implementation of polyline, owned
        CAknsAlPolyLine* iPoly;
    };

#endif // AKNSALANIMATIONVALUE_H

// End of File
