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
* Description:  Contains data structures for animations.
*
*/


#ifndef AKNSALDATAACCESS_H
#define AKNSALDATAACCESS_H

//  INCLUDES
#include <e32std.h>

// FORWARD DECLARATIONS
class MAknsRlParameterIterator;

/**
* Generic iterator interface.
*
* @since 3.0
*/
class MAknsAlIterator
    {
    public: // Constructors and destructor

        /**
        * Destructor for internal use.
        *
        * Destructor is reserved for internal use. Client code usually does
        * not destroy iterators.
        */
        inline virtual ~MAknsAlIterator() {}

    public: // New functions

        /**
        * Checks whether there are more parameters available.
        *
        * @return @c ETrue if subsequent @c GetNextL should succeed,
        *   @c EFalse if @c GetNextL must not be called anymore.
        */
        virtual TBool HasNext() =0;

        /**
        * Gets the next parameter.
        *
        * @return Pointer to the parameter data. The ownership is not
        *   transferred. The data is guaranteed to be valid until
        *   the next call to @c HasNext, @c NextL, or the iterator is
        *   destroyed.
        */
        virtual const TAny* NextL() =0;

    public:
        inline static void CleanupOp( TAny* aIter )
            {
            MAknsAlIterator* iter =
                static_cast<MAknsAlIterator*>( aIter );
            delete iter;
            }
    };

/**
* Named reference data structure. Named reference binds animation value with
* name. Animator uses named references when parametrizing effect filters with
* dynamic parameters. Because of named reference, one animation value can be
* mapped to multiple effect filter parameters.
*
* @since 3.0
*/
struct TAknsAlNamedReferenceData
    {
    const TDesC16* iName;
    TInt iAnimationValueId;
    };

/**
* Animation command data structure. Animation commands are similar to RL effect
* commands but add support for named references.
*
* @since 3.0
*/
struct TAknsAlAnimationCommandData
    {
    /**
    * UID of the effect that this command executes.
    */
    TUid iEffectUid;

    /**
    * Layer configuration for this command.
    */
    TAknsRlRenderOpParam iLayerConf;

    /**
    * Iterator for animation's initial parameters.
    * No ownership is vested in this structure.
    * If null-value is given, no parameters are used.
    */
    MAknsRlParameterIterator* iParamIterator;

    MAknsAlIterator* iNamedReferenceIterator;
    };

/**
* Data structure for timing models.
*
* @since 3.0
*/
struct TAknsAlTimingModelData
    {
    TUid iTimingModelUid;

    /**
    * Pointer to the parameter iterator.
    * No ownership is vested in this structure.
    * If null-value is given, no parameters are used.
    */
    MAknsRlParameterIterator* iParamIterator;
    };

/**
* Data structure for AnimationValues.
*
* @since 3.0
*/
struct TAknsAlAnimationValueData
    {
    TInt iTimingModelId;

    TUid iAnimationValueUid;
    // Iterator for animation value parameters
    MAknsRlParameterIterator* iParamIterator;
    };

const TInt KAknsAlParamW  = 1;
const TInt KAknsAlParamH  = 2;

/**
* Data structure for size bound parameters. Size bound parameters are animation
* global parameters for animation values. When animation size changes the new
* size information is applied to referenced animation value. This allows, for
* example, creating animation values that animate pixel positions in layer size
* independent manner.
*
* @since 3.0
*/
struct TAknsAlSizeBoundParameterData
    {
    const TDesC16* iName;
    TInt iAnimationValueId;
    /**
    * Combination of KAknsAlParamW and/or KAknsAlParamH. If both flags are set,
    * both coordinates are used.
    * E.g. iParamFlags = KAknsAlParamW | * KAknsAlParamH.
    */
    TInt iParamFlags;
    };

#endif // AKNSALDATAACCESS_H

// End of File
