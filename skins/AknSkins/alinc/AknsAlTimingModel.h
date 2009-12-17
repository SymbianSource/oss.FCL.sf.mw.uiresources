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
* Description:  Base class for animation timing models.
*
*/

#ifndef AKNSALTIMINGMODEL_H
#define AKNSALTIMINGMODEL_H

// INCLUDE FILES
#include <e32std.h>

// FORWARD DECLARATIONS
class MAknsRlParameterIterator;

// CONSTANTS
/**
* Maximum value of relative value. Relative value is in 16.16 fixed point
* format. Relative value range [0, KMaxRelative] maps to floating point
* range [0, 1].
*/
const TInt KAlMaxRelative = 65536;

// CLASS DECLARATION
/**
* Base class for animation timing models. Implementing class may choose what
* ticking method is supported (real-time or timestamped or both).
*
* @since 3.0
*/
class MAknsAlTimingModel
    {
    public:
        inline virtual ~MAknsAlTimingModel() {}

    public:
        /**
        * Sets the parameters for this timing model.
        *
        * If any parameter appears more than once in the given iterator (or in
        * iterators given in more than one call to this method), the latest
        * parameter value must be used. Already set parameters can not be
        * removed, but their values can be updated.
        *
        * Any parameters not supported by this timing model at all (i.e., the
        * name of the parameter is not recognized) must be ignored silently.
        * If parameter type or value is not supported, the plugin may leave
        * with @c KErrArgument.
        *
        * If a particular combination of parameters is not supported (and
        * further calls to this method can not change the situation), the
        * timing model may leave with @c KErrArgument.
        *
        * @c SetParametersL should also leave if the parameter values can not
        * be stored, e.g. because of an OOM condition.
        *
        * @param aParameters Iterator to the parameters. The iterator (and all
        *   the returned values) is guaranteed to be valid during the call
        *   to this method. No ownership is transferred, unless specified
        *   otherwise in iterator API.
        *
        * @par Exceptions:
        * If parameter setup fails (i.e. this method leaves with an error
        * code), the animation creation will fail.
        */
        virtual void SetParametersL( MAknsRlParameterIterator& aParameters ) =0;

        /**
        * Advances the timing model.
        *
        * @param aDeltaTime The time difference between the this and the last
        *                   update, in milliseconds.
        */
        virtual void Tick( const TInt aDeltaTime ) =0;

        /**
        * Ticks the timing model to the point in time defined by the timestamp.
        */
        virtual void Tick( const TTime& aStamp ) =0;

        /**
        * @return The current relative value. Fixed point, 16.16 format, always
        * in range [0, 1] (when interpreted as a real number).
        */
        virtual TUint32 RelativeValue() const =0;

        /**
        * @return ETrue if the animation has finished, otherwise EFalse.
        */
        virtual TBool IsFinished() const =0;

        /**
        * Restores the model state to the beginning of time span.
        */
        virtual void Begin() =0;

    public:
        inline static void CleanupOp( TAny* aItem )
            {
            MAknsAlTimingModel* model =
                static_cast<MAknsAlTimingModel*>( aItem );
            delete model;
            }

    };

#endif // AKNSALTIMINGMODEL_H

// End of File
