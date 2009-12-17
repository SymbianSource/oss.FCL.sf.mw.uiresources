/*
* Copyright (c) 2005-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Utility class for storing animation value and binding the animation
*  value to timing model.
*
*/


#ifndef AKNSALSHARED_H
#define AKNSALSHARED_H

// INCLUDE FILES
#include <e32base.h>
#include <AknsRlEffect.h>

#include "AknsAlTimingModel.h"
#include "AknsAlAnimationValue.h"

// FORWARD DECLARATIONS
class CAknsAlEffectParamContainer;
class CAknsAlNamedReferenceContainer;

class CAknsRlEffectPlugin;

/**
* Utility class for storing animation value and binding the animation value to
* timing model.
*/
NONSHARABLE_CLASS( CAknsAlAnimationValueContainer ): public CBase
    {
    protected:
        CAknsAlAnimationValueContainer();
        void ConstructL( MAknsAlAnimationValue* aValue,
                         const MAknsAlTimingModel* aModel );

    public:
        virtual ~CAknsAlAnimationValueContainer();
        static CAknsAlAnimationValueContainer* NewL( MAknsAlAnimationValue* aValue,
                                                     const MAknsAlTimingModel* aModel );

    public:
        inline void Tick( TUint32 aDeltaTime )
            {
            iAnimationValue->Tick( aDeltaTime, iTimingModel->RelativeValue() );
            }

        inline MAknsAlAnimationValue* AnimationValue() const
            {
            return iAnimationValue;
            }

        inline void Begin() { iAnimationValue->Begin(); }

    private:
        // Ownership vested here
        MAknsAlAnimationValue* iAnimationValue;
        // Only referencing
        const MAknsAlTimingModel* iTimingModel;
    };


NONSHARABLE_CLASS( CAknsAlAnimationCommand ): public CBase
    {
    protected:
        CAknsAlAnimationCommand();
        void ConstructL();

    public:
        virtual ~CAknsAlAnimationCommand();
        static CAknsAlAnimationCommand* NewL();

        MAknsRlEffect* Effect();
        void AddParameterL( const TAknsRlParameterData& aParam );
        void AddNamedReferenceL( const TDesC& aName,
                                 const MAknsAlAnimationValue* aValue );
        /**
        * Ownership of plugin is transferred
        */
        void SetPlugin( CAknsRlEffectPlugin* aPlugin );
        void SetLayerConfig( const TAknsRlRenderOpParam& aConfig );
        const TAknsRlRenderOpParam& LayerConfig() const;
        MAknsRlParameterIterator* ParameterIterator();
        MAknsRlParameterIterator* NamedReferenceIterator();

    private:

        TAknsRlRenderOpParam iLayerConfig;
        // Effect plugin, owned
        CAknsRlEffectPlugin* iPlugin;
        // Stores initial (constant) parameters, owned
        CAknsAlEffectParamContainer* iParamContainer;
        // Stores time bound parameters (references to animation values), owned
        CAknsAlNamedReferenceContainer* iReferenceContainer;
    };

#endif // AKNSALSHARED_H
