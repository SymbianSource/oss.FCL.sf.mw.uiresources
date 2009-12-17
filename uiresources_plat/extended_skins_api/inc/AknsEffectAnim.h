/*
* Copyright (c) 2005 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  ?Description
*
*/

#ifndef AKNSEFFECTANIM_H
#define AKNSEFFECTANIM_H

// INCLUDE FILES
#include <gdi.h> // For TDisplayMode

// CONSTANTS
enum TAknsAnimState
    {
    EAknsAnimStateStopped       = 0,
    EAknsAnimStateRunning       = 1,
    EAknsAnimStatePaused        = 2,
    EAknsAnimStateFinished      = 3
    };

// In milliseconds
const TInt KAknsEffectAnimDefaultIdleInterval = 333;

// FORWARD DECLARATIONS
class CFbsBitGc;
class CWindowGc;
class CBitmapContext;
class CFbsBitmap;
class TAknsItemID;

class CAknsAlAnimatorBmp;

// CLASS DECLARATION
/**
* Animation user must implement this interface to receive notification when a
* new animation frame is ready to be drawn.
*
* @since 3.0
*/
class MAknsEffectAnimObserver
    {
    public:
        /**
        * Animation frame is ready to be drawn.
        *
        * @param aError  KErrNone if frame has been succesfully created and is
        *   available for drawing. If !KErrNone the animation has internally
        *   failed.
        * @param aAnimId  Reserved for future use
        */
        virtual void AnimFrameReady( TInt aError, TInt aAnimId ) = 0;
    };

// CLASS DECLARATION
/**
* Animation controller for using effect animations.
*
* @since 3.0
*/
class CAknsEffectAnim: public CBase
    {
public: // Constructors
    /**
    * Creates a new animation controller. Full construction requires a call to
    * ConstructFromSkinL. Leaves with KErrNotSupported if highlight animations
    * have been disabled, see AknsUtils::SetAvkonHighlightAnimationEnabledL.
    *
    * @param aObserver Must be non-NULL
    */
    IMPORT_C static CAknsEffectAnim* NewL( MAknsEffectAnimObserver* aObserver );
    IMPORT_C virtual ~CAknsEffectAnim();

    /**
    * Constructs animation from skin item. Leaves if animation construction
    * fails.
    * @param aItemID Animation skin item ID
    * @return ETrue if the animation was found from the skin, EFalse if it was
    *         not found.
    */
    IMPORT_C TBool ConstructFromSkinL( const TAknsItemID& aItemID );

private:
    CAknsEffectAnim();
    void ConstructL( MAknsEffectAnimObserver* aObserver );

public: // Interface for using the animation
    /**
    * Starts the animation from the very beginning.
    *
    * @return Error code, KErrNone if operation was succesfull. If returned
    *   error code != KErrNone the operation has failed (OOM, internal
    *   misconfiguration etc). Recommended action is to delete the animation
    *   and fall back to normal rendering. Returns KErrNotReady if input layers
    *   have not been configured.
    */
    IMPORT_C TInt Start();

    /**
    * Stops the animation. Input layers are released, output layer is kept.
    *
    * @return Error code, KErrNone if operation was succesfull. If returned
    *   error code != KErrNone the operation has failed (OOM, internal
    *   misconfiguration etc). Recommended action is to delete the animation
    *   and fall back to normal rendering.
    */
    IMPORT_C TInt Stop();

    /**
    * Pauses the animation. Input layers are not released.
    *
    * @return Error code, KErrNone if operation was succesfull. If returned
    *   error code != KErrNone the operation has failed (OOM, internal
    *   misconfiguration etc). Recommended action is to delete the animation
    *   and fall back to normal rendering.
    */
    IMPORT_C TInt Pause();

    /**
    * Continues the animation from the state where it was paused.
    *
    * @return Error code, KErrNone if operation was succesfull. If returned
    *   error code != KErrNone the operation has failed (OOM, internal
    *   misconfiguration etc). Recommended action is to delete the animation
    *   and fall back to normal rendering.
    */
    IMPORT_C TInt Continue();

    /**
    * @return The current state of animation. Possible state values are
    * described in TAknsAnimState.
    */
    IMPORT_C TInt State();

    /**
    * Renders the current animation frame with the provided graphics context.
    * The animation may have an output mask. The output mask will be used in
    * the rendering if it exists. Otherwise nonmasked renderig will be used.
    * Rendering will use BitBlt. For more specialized rendering use the exposed
    * output bitmaps.
    *
    * @param aGc The graphics context used for rendering.
    * @param aGcRect The frame is blit to this rectangle on the graphics
    *   context target.
    * @return ETrue if rendering was successfull, EFalse otherwise.
    */
    IMPORT_C TBool Render( CFbsBitGc& aGc, const TRect& aGcRect ) const;

    /**
    * Similar to the other Render, this version is just for the window graphics
    * context.
    */
    IMPORT_C TBool Render( CWindowGc& aGc, const TRect& aGcRect ) const;

    /**
    * Similar to the other renders, this version is just for the bitmap
    * graphics context.
    *
    * @since 3.1
    */
    IMPORT_C TBool Render( CBitmapContext& aGc, const TRect& aGcRect ) const;

    /**
    * @return The current animation output frame. Can be NULL if e.g. called
    *         before configuring animation layers.
    */
    IMPORT_C const CFbsBitmap* OutputRgb() const;

    /**
    * @return The current animation output frame mask. Output mask is optional
    *         --> can be NULL at any given time.
    */
    IMPORT_C const CFbsBitmap* OutputAlpha() const;

    /**
    * @return The minimum allowed size of animation.
    */
    IMPORT_C TSize MinimumSize() const;

    /**
    * @return The current size of animation.
    */
    IMPORT_C TSize Size() const;

    /**
    * @return ETrue if input layer is required for correct rendering but it is
    *         not currently present.
    */
    IMPORT_C TBool NeedsInputLayer() const;

    /**
    * Starts configuring input layers, should be called prior to Begin() and
    * Continue() to restore input layers to animation. Configure sequence is as
    * follows:
    * 1. Call BeginConfigLayers to start configuration
    * 2. Use InputRgbGc and InputAlphaGc to prepare input layers
    * 3. Call EndConfigLayers to end configuration
    *
    * @param aNewSize  The layer size, must be larger than or equal to minimum
    *   size. Providing size smaller than minimum size will lead to leave with
    *   KErrArgument.
    * @param aAboutToStart If animation is about to be started or continued
    *   after layer configuration this should be set to ETrue (to keep input
    *   layers). Otherwise EFalse should be used.
    */
    IMPORT_C void BeginConfigInputLayersL( const TSize& aNewSize,
                                           TBool aAboutToStart );

    /**
    * Graphics context for drawing the input layer RGB. Can be NULL, in this
    * case animation is not expecting input layer.
    */
    IMPORT_C CFbsBitGc* InputRgbGc() const;

    /**
    * Graphics context for drawing the input layer alpha. Can be NULL, in this
    * case animation is not expecting input layer alpha.
    */
    IMPORT_C CFbsBitGc* InputAlphaGc() const;

    /**
    * Ends layer configuration.
    */
    IMPORT_C void EndConfigInputLayersL();

    /**
    * Renders the output layer once without notifying the animation observer.
    * Doesn't set animator error state if fails.
    * @return The status of rendering, if KErrNone rendering was ok, if
    *         !KErrNone either rendering failed or animator is already in
    *         error state.
    */
    IMPORT_C TInt UpdateOutput();

    /**
    * When animation is idling it won't update the actual animation. Observer
    * AnimFrameReady will be called when idle timer timeouts. Animation
    * observer should check there whether or not animation is idling and ignore
    * redraw calls caused by idling.
    *
    * Only animations in state EAknsAnimStateRunning can be set idling. Setting
    * idling causes the animation to go in paused state. Trying to idle
    * animation in any other state will be silently ignored. Also, idling is
    * interrupted when animation is started, stoppped, paused or continued.
    * Idling is not interrupted if the animation is resized when being idled.
    * Idling can be reset, e.g. calling SetIdling multiple times is ok.
    *
    * @param aInterval Idling interval in milliseconds. Using the default value
    *                  KAknsEffectAnimDefaultIdleInterval is recommended.
    */
    IMPORT_C void SetIdling( TInt aIntervalMs );

    /**
    * @return ETrue if animation is idling, EFalse otherwise.
    */
    IMPORT_C TBool IsIdling() const;

private:
    CAknsAlAnimatorBmp* iAnim;
    TInt iAboutToStart;
    };

#endif // AKNSEFFECTANIM_H
