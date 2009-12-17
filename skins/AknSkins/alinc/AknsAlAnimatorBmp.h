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
* Description:  Animates effect queues.
*
*/


#ifndef AKNSALANIMATORBMP_H
#define AKNSALANIMATORBMP_H

// INCLUDES
#include <gdi.h>
#include <hwrmlight.h>

// FORWARD DECLARATIONS
class MAknsAlTimingModel;
class CAknsAlEffectContext;
class CAknsAlEffectParamContainer;
class CAknsAlAnimationValueContainer;
class CAknsAlAnimationCommand;
class CAknsAlSizeBoundParam;
class CAknsAnimationItemData;
class TAknsItemID;
class MAknsEffectAnimObserver;
class RAknsSrvSession;

// CONSTANTS

// Minimum convoluteable bitmap size is 3x3
const TInt KAknsAlAnimMinimumWidth  = 3;
const TInt KAknsAlAnimMinimumHeight = 3;

// CLASS DECLARATION
/**
* AnimatorBmp animates RL effect filter queues by allowing time bound
* parametrization with timing models and animation values. AnimatorBmp
* implements the next state machine:
*
* Starting |          | Resulting
*  state   | Command  |  state
* -------------------------------
* Stopped    Start      Running
*            Stop       Stopped
*            Pause      Stopped
*            Continue   Stopped
*
* Running    Start      Running
*            Stop       Stopped
*            Pause      Paused
*            Continue   Running
*
* Paused     Start      Running
*            Stop       Stopped
*            Pause      Paused
*            Continue   Running
*
* Finished   Start      Running
*            Stop       Stopped
*            Pause      Finished
*            Continue   Finished
*
* @since 3.0
*/
NONSHARABLE_CLASS( CAknsAlAnimatorBmp ): public CBase, public MHWRMLightObserver
    {
    protected: // Protected construction
        CAknsAlAnimatorBmp( MAknsEffectAnimObserver* aObserver );
        void ConstructL();

    public: // Public construction/destruction

        /**
        * Deleting the animator will stop running animation.
        */
        virtual ~CAknsAlAnimatorBmp();

        static CAknsAlAnimatorBmp* NewL( MAknsEffectAnimObserver* aObserver );

        /**
        * Constructs the animation from skin. The animation is not
        * automatically updated during a skin change. A newly constructed
        * animation is in stopped state.
        *
        * @param aItemID Animation bound to this id will be queried from the
        *                Skin.
        *
        * @return ETrue if the animation was found and succesfully constructed.
        *   EFalse if the animation was not found.
        */
        TBool ConstructFromSkinL( const TAknsItemID& aItemID );

        /**
        * Constructs animation directly from item data. This allows bypassing
        * skin data and feeding test cases directly to animation. This method
        * exists only for testing purposes.
        */
        TBool ConstructFromItemL( const CAknsAnimationItemData& aData,
                                  RAknsSrvSession* aSession);

    public:

        /**
        * Removes all layers and creates the input layer if it is required.
        * @param aLayerSize New layer size
        * @param aRgbMode   New RGB layer mode
        */
        void BeginConfigLayersL( const TSize& aLayerSize,
                                 TDisplayMode aRgbMode );
        /**
        * Updates the animation once so that output layer is available for
        * drawing immediately after this method.
        */
        void EndConfigLayersL( TBool aAboutToStart );

        TInt StartAnimation();
        TInt StopAnimation();
        TInt PauseAnimation();
        TInt ContinueAnimation();

        TInt State() const;

        CFbsBitmap* OutputRgb() const;
        CFbsBitmap* OutputAlpha() const;
        CFbsBitGc* InputRgbGc() const;
        CFbsBitGc* InputAlphaGc() const;

        TInt UpdateOutput();

        void SetIdling( TInt aIntervalMs );
        TBool IsIdling() const;

        TSize LayerSize() const;
        TBool NeedsInputLayer() const;

    private: // New methods
        void CancelIdling();
        TBool RenderError() const;

        /// Does not change iState
        void StartAnimationL( TBool aReset, TBool aStartTimer );
        /// Does not change iState
        void StopAndRelease( TBool aReleaseInputLayers, TBool aReleasePlugins );
        void Tick();
        TInt Render( TBool aNotify );
        void PreprocessL();
        TInt ApplyCommands( RPointerArray<CAknsAlAnimationCommand>& aArray,
                            TBool aApplyNamedReferences ) const;

        MAknsAlTimingModel* FindTimingModelById( TInt aId ) const;
        CAknsAlAnimationValueContainer* FindContainerById( TInt aId ) const;

        void CreateTimingModelsL( const CAknsAnimationItemData& aSkinData );
        void CreateAnimationValueContainersL( const CAknsAnimationItemData& aSkinData );
        void CreatePreprocessCommandsL( const CAknsAnimationItemData& aSkinData );
        void CreateAnimationCommandsL( const CAknsAnimationItemData& aSkinData );
        void CreateSizeBoundParamsL( const CAknsAnimationItemData& aSkinData );

        static TInt TimerTimeoutCallback( TAny *aPtr );

        // From MHWRMLightObserver.
        // Used to pause animation when lights go out, and to resume
        // when lights are active again.
        void LightStatusChanged( TInt aTarget, CHWRMLight::TLightStatus aStatus );

    private: // Data

        TInt iState;
        // Set if rendering plugins fails
        TInt iRenderError;
        TBool iSizeKnown;

        TBool iIdling;
        TInt iIdlingInterval;

        TInt iLastFrameTicks;
        TInt iMsPerTick; // Milliseconds per tick, queried from HAL
        TInt iMinimumInterval;

        // Animation's layer configuration
        TInt iInputLayerMode;
        TInt iInputLayerIndex;
        TInt iOutputLayerMode;
        TInt iOutputLayerIndex;

        CPeriodic* iTimer;
        CAknsAlEffectContext* iContext;

        RPointerArray<MAknsAlTimingModel> iTimingModels;
        RPointerArray<CAknsAlAnimationValueContainer> iValueContainers;
        RPointerArray<CAknsAlAnimationCommand> iPreprocessCommands;
        RPointerArray<CAknsAlAnimationCommand> iAnimationCommands;
        RPointerArray<CAknsAlSizeBoundParam> iSizeBoundParams;

        MAknsEffectAnimObserver* iObserver;

        TInt iPreprocessInputLayers;

        // Light client.
        // Own.
        CHWRMLight* iLightsClient;

    };

#endif // AKNSALANIMATORBMP_H

// End of File
