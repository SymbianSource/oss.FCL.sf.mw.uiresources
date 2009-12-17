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


// INCLUDE FILES
#include <hal.h>
#include <hal_data.h>
#include <AknsUtils.h>
#include <babitflags.h>

#include <hwrmlightdomaincrkeys.h>

#include "AknsRlEffectPlugin.h"
#include "AknsRlCommand.h"

#include "AknsAppSkinInstance.h"
#include "AknsAlAnimatorBmp.h"
#include "AknsAlShared.h"
#include "AknsAlAnimationFactory.h"
#include "AknsAlEffectContext.h"
#include "AknsAlDataAccess.h"
#include <AknsEffectAnim.h> // For the animation state enum

#include "AknsDebug.h"

// CONSTANTS

const TInt KAlMaxDeltaTime = 65536; // In milliseconds, ~65 seconds

// =============================== HELPERS =====================================
/**
* Utility class for binding size changes to animation value parameters.
*/
NONSHARABLE_CLASS( CAknsAlSizeBoundParam ):
    public CBase,
    public MAknsRlParameterIterator
    {
    private:
        // Internal flag indices
        enum TFlag
            {
            EFlagW    = 0,
            EFlagH    = 1,
            EFlagIter = 2
            };

    protected:
        CAknsAlSizeBoundParam();
        void ConstructL( MAknsAlAnimationValue* aValue,
                         const TDesC& aName, TInt aFlags );

    public:
        ~CAknsAlSizeBoundParam();
        static CAknsAlSizeBoundParam* NewL( MAknsAlAnimationValue* aValue,
                                            const TDesC& aName, TInt aFlags );
        void SizeChangedL( const TSize& aNewSize );

    public: // Implementation of MAknsRlParameterIterator
        TBool HasNext();
        const TAknsRlParameterData* NextL();

    private:
        // Referenced only
        MAknsAlAnimationValue* iAnimationValue;
        // Owned
        HBufC* iName;
        /// Combines the x, y, xy flags with interator flag.
        TBitFlags32 iFlags;
        TAknsRlParameterData iIteratorData;
        // Stores the current size
        TBuf16<2> iSize;
    };

// -----------------------------------------------------------------------------
// CAknsAlSizeBoundParam::CAknsAlSizeBoundParam
// -----------------------------------------------------------------------------
//
CAknsAlSizeBoundParam::CAknsAlSizeBoundParam()
    {
    // Derived from CBase -> members are zeroed
    }

// -----------------------------------------------------------------------------
// CAknsAlSizeBoundParam::ConstructL
// -----------------------------------------------------------------------------
//
void CAknsAlSizeBoundParam::ConstructL( MAknsAlAnimationValue* aValue,
                                        const TDesC& aName, TInt aFlags )
    {
    if( NULL == aValue )
        User::Leave( KErrArgument );

    iAnimationValue = aValue;
    iName  = aName.AllocL();
    iFlags.SetValue( aFlags );

    iSize.SetLength( 2 );
    }

// -----------------------------------------------------------------------------
// CAknsAlSizeBoundParam::~CAknsAlSizeBoundParam
// -----------------------------------------------------------------------------
//
CAknsAlSizeBoundParam::~CAknsAlSizeBoundParam()
    {
    delete iName; //lint
    iAnimationValue = NULL; // Removes lint nag
    }

// -----------------------------------------------------------------------------
// CAknsAlSizeBoundParam::NewL
// -----------------------------------------------------------------------------
//
CAknsAlSizeBoundParam* CAknsAlSizeBoundParam::NewL(
    MAknsAlAnimationValue* aValue,
    const TDesC& aName,
    TInt aFlags )
    {
    CAknsAlSizeBoundParam* self = new(ELeave) CAknsAlSizeBoundParam();
    CleanupStack::PushL( self );
    self->ConstructL( aValue, aName, aFlags );
    CleanupStack::Pop( self );
    return self;
    }

// -----------------------------------------------------------------------------
// CAknsAlSizeBoundParam::SizeChangedL
// -----------------------------------------------------------------------------
//
void CAknsAlSizeBoundParam::SizeChangedL( const TSize& aNewSize )
    {
    iSize[0] = TInt16( aNewSize.iWidth );
    iSize[1] = TInt16( aNewSize.iHeight );

    // Push the changed parameter to animation value
    iFlags.Set( EFlagIter );
    iAnimationValue->SetParametersL( *this );
    }

// -----------------------------------------------------------------------------
// CAknsAlSizeBoundParam::HasNext
// -----------------------------------------------------------------------------
//
TBool CAknsAlSizeBoundParam::HasNext()
    {
    if( !iFlags.IsSet( EFlagIter ) )
        return ETrue;

    return EFalse;
    }

// -----------------------------------------------------------------------------
// CAknsAlSizeBoundParam::NextL
// -----------------------------------------------------------------------------
//
const TAknsRlParameterData* CAknsAlSizeBoundParam::NextL()
    {
    if( iFlags.IsSet( EFlagIter ) )
        User::Leave( KErrOverflow );

    iIteratorData.iName = iName;

    if( iFlags.IsSet( EFlagW ) && iFlags.IsSet( EFlagH ) )
        {
        iIteratorData.iType   = EAknsRlParameterTypeString;
        iIteratorData.iString = &iSize;
        }
    else if( iFlags.IsSet( EFlagW ) )
        {
        iIteratorData.iType   = EAknsRlParameterTypeNumber;
        iIteratorData.iNumber = iSize[0];
        }
    else // Must be EFlagH
        {
        iIteratorData.iType   = EAknsRlParameterTypeNumber;
        iIteratorData.iNumber = iSize[1];
        }

    // Mark the iterator flag
    iFlags.Set( EFlagIter );

    return &iIteratorData;
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::CAknsAlAnimatorBmp
// C++ default constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CAknsAlAnimatorBmp::CAknsAlAnimatorBmp( MAknsEffectAnimObserver* aObserver ):
    iObserver( aObserver )
    {
    // Derived from CBase, members zeroed
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::ConstructL
// -----------------------------------------------------------------------------
//
void CAknsAlAnimatorBmp::ConstructL()
    {
    iState = EAknsAnimStateStopped;

    iTimer = CPeriodic::NewL( CActive::EPriorityIdle );

    User::LeaveIfError( HAL::Get( HALData::ESystemTickPeriod, iMsPerTick ) );
    // HAL returns microseconds, convert to milliseconds
    iMsPerTick = iMsPerTick / 1000;

    iContext = CAknsAlEffectContext::NewL();

    iLightsClient = CHWRMLight::NewL( this );
    }

// -----------------------------------------------------------------------------
// Destructor
// -----------------------------------------------------------------------------
//
CAknsAlAnimatorBmp::~CAknsAlAnimatorBmp()
    {
    /*lint -save -e1551 */ // No exceptions are thrown
    // Release effect filters
    TInt count = iAnimationCommands.Count();
    for( TInt i=0; i < count; i++ )
        {
        // Activate effects
        CAknsAlAnimationCommand* cmd = iAnimationCommands[i];
        MAknsRlEffect* effect = cmd->Effect();
        effect->Deactivate();
        effect->Release();
        }

    delete iTimer;
    delete iContext;

    iPreprocessCommands.ResetAndDestroy();
    iAnimationCommands.ResetAndDestroy();
    iValueContainers.ResetAndDestroy();
    iTimingModels.ResetAndDestroy();
    iSizeBoundParams.ResetAndDestroy();

    delete iLightsClient;
    /*lint -restore */
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::NewL
// -----------------------------------------------------------------------------
//
CAknsAlAnimatorBmp* CAknsAlAnimatorBmp::NewL(  MAknsEffectAnimObserver* aObserver )
    {
    if( !aObserver )
        User::Leave( KErrArgument );

    CAknsAlAnimatorBmp* self = new(ELeave) CAknsAlAnimatorBmp( aObserver );
    CleanupStack::PushL(self);
    self->ConstructL();
    CleanupStack::Pop();
    return self;
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::ConstructFromSkinL
// -----------------------------------------------------------------------------
//
TBool CAknsAlAnimatorBmp::ConstructFromSkinL( const TAknsItemID& aItemID )
    {
    MAknsSkinInstance* skin = AknsUtils::SkinInstance();
    if( NULL == skin )
        User::Leave( KErrBadHandle );

    // TODO: We need to pass skin server session to bitmap context (it is
    // required by ApplyGfx plugin). This is bad style but this is currently
    // the only way to do it (without BC break). In ideal case you could query
    // the server session via the skin instance interface. Note that by
    // referring to AppSkinInstance we create an unwanted dependency to other
    // parts of skin library. Fortunately, there is no need to link
    // AppSkinInstance as we are using the session member directly.
    CAknsAppSkinInstance* appSkin = static_cast<CAknsAppSkinInstance*>(skin); //lint !e1774 dynamic_cast not allowed
    iContext->SetSkinSrvSession( &appSkin->iSession );

    // Query animation instructions from skin
    CAknsItemData* item = skin->GetCachedItemData( aItemID, EAknsITAnimation );
    if( !item )
        return EFalse; // Item was not found

    // Querying EAknsITAnimation quarantees that the pointer is of right type
    CAknsAnimationItemData* skinData = static_cast<CAknsAnimationItemData*>( item ); //lint !e1774 dynamic_cast not allowed

    // Morphing animations are not for highlights
    if( skinData->Morphing() )
        {
        return EFalse; // Item was found, but we ignore morphing animations
        }

    iMinimumInterval = skinData->MinInterval();

    iInputLayerMode   = skinData->InputLayerMode();
    iInputLayerIndex  = skinData->InputLayer();
    iOutputLayerMode  = skinData->OutputLayerMode();
    iOutputLayerIndex = skinData->OutputLayer();

    CreateTimingModelsL( *skinData );
    CreateAnimationValueContainersL( *skinData );
    CreatePreprocessCommandsL( *skinData );
    CreateAnimationCommandsL( *skinData );
    CreateSizeBoundParamsL( *skinData );

    return ETrue;
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::ConstructFromItemL
// Testing time functionality only.
// -----------------------------------------------------------------------------
//
TBool CAknsAlAnimatorBmp::ConstructFromItemL( const CAknsAnimationItemData& aData,
                                              RAknsSrvSession* aSession )
    {
    // Morphing animations are not for highlights
    if( aData.Morphing() )
        {
        return EFalse; // Item was found, but we ignore morphing animations
        }

    iContext->SetSkinSrvSession( aSession );

    iMinimumInterval = aData.MinInterval();

    iInputLayerMode   = aData.InputLayerMode();
    iInputLayerIndex  = aData.InputLayer();
    iOutputLayerMode  = aData.OutputLayerMode();
    iOutputLayerIndex = aData.OutputLayer();

    CreateTimingModelsL( aData );
    CreateAnimationValueContainersL( aData );
    CreatePreprocessCommandsL( aData );
    CreateAnimationCommandsL( aData );
    CreateSizeBoundParamsL( aData );

    return ETrue;
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::BeginConfigLayersL
// -----------------------------------------------------------------------------
//
void CAknsAlAnimatorBmp::BeginConfigLayersL( const TSize& aLayerSize,
                                             TDisplayMode aRgbMode )
    {
    if( RenderError() )
        User::Leave( iRenderError );

    // Make sure we have a valid size
    if( aLayerSize.iWidth < KAknsAlAnimMinimumWidth ||
        aLayerSize.iHeight < KAknsAlAnimMinimumHeight )
        User::Leave( KErrArgument );

    // Configure
    iContext->ConfigureL( aLayerSize, aRgbMode,
                          iInputLayerIndex,
                          iInputLayerMode );
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::EndConfigLayersL
// -----------------------------------------------------------------------------
//
void CAknsAlAnimatorBmp::EndConfigLayersL( TBool aAboutToStart )
    {
    // Do the preprocessing step
    PreprocessL();

    // Because layer size may have changed and some layers may have been lost
    // we need to restart the animation (while preserving its state).
    TInt originalState = iState;

    if( EAknsAnimStateRunning == originalState )
        {
        // Starting will also stop animation first
        StartAnimationL( EFalse, ETrue );
        User::LeaveIfError( UpdateOutput() );
        }
    else // Animation must be stopped, paused or finished
        {
        // Starting will also stop animation first
        StartAnimationL( EFalse, EFalse );
        User::LeaveIfError( UpdateOutput() );
        iState = originalState;

        if( ( EAknsAnimStateStopped == originalState ) && !aAboutToStart )
            {
            // Stopping releases input layers and plugins
            StopAndRelease( ETrue, ETrue );
            }
        }

    // Check if we need to restore idling
    if( EAknsAnimStatePaused == iState && iIdling )
        {
        // Restart the idle timer
        if ( iTimer->IsActive() )
            {
            iTimer->Cancel();
            }
        iTimer->Start( 0, iIdlingInterval * 1000, TCallBack( TimerTimeoutCallback, this ) );
        }

    iSizeKnown = ETrue;
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::StartAnimation
// -----------------------------------------------------------------------------
//
TInt CAknsAlAnimatorBmp::StartAnimation()
    {
    CancelIdling();

    if( RenderError() )
        {
        return iRenderError;
        }

    TRAPD( err, StartAnimationL( ETrue, ETrue ) );
    if( err )
        {
        StopAndRelease( ETrue, ETrue );
        return err;
        }

    iState = EAknsAnimStateRunning;
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::StopAnimation
// -----------------------------------------------------------------------------
//
TInt CAknsAlAnimatorBmp::StopAnimation()
    {
    CancelIdling();

    if( RenderError() )
        return iRenderError;

    if( EAknsAnimStatePaused == iState ||
        EAknsAnimStateRunning == iState ||
        EAknsAnimStateFinished == iState )
        {
        // Stopping releases input layers and plugins
        StopAndRelease( ETrue, ETrue );
        iState = EAknsAnimStateStopped;
        }

    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::PauseAnimation
// -----------------------------------------------------------------------------
//
TInt CAknsAlAnimatorBmp::PauseAnimation()
    {
    CancelIdling();

    if( RenderError() )
        return iRenderError;

    if( EAknsAnimStateRunning == iState )
        {
        iTimer->Cancel();
        iState = EAknsAnimStatePaused;
        }

    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::ContinueAnimationL
// -----------------------------------------------------------------------------
//
TInt CAknsAlAnimatorBmp::ContinueAnimation()
    {
    CancelIdling();

    if( RenderError() )
        return iRenderError;

    if( EAknsAnimStatePaused == iState )
        {
        iLastFrameTicks = User::TickCount();

        if ( iTimer->IsActive() )
            {
            iTimer->Cancel();
            }
        iTimer->Start( 0, iMinimumInterval * 1000, TCallBack( TimerTimeoutCallback, this ) );
        iState = EAknsAnimStateRunning;
        }

    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::State
// -----------------------------------------------------------------------------
//
TInt CAknsAlAnimatorBmp::State() const
    {
    return iState;
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::OutputRgb
// -----------------------------------------------------------------------------
//
CFbsBitmap* CAknsAlAnimatorBmp::OutputRgb() const
    {
    return iContext->RgbBitmap( iOutputLayerIndex );
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::OutputAlpha
// -----------------------------------------------------------------------------
//
CFbsBitmap* CAknsAlAnimatorBmp::OutputAlpha() const
    {
    return iContext->AlphaBitmap( iOutputLayerIndex );
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::InputRgbGc
// -----------------------------------------------------------------------------
//
CFbsBitGc* CAknsAlAnimatorBmp::InputRgbGc() const
    {
    return iContext->RgbGc( iInputLayerIndex );
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::InputAlphaGc
// -----------------------------------------------------------------------------
//
CFbsBitGc* CAknsAlAnimatorBmp::InputAlphaGc() const
    {
    return iContext->AlphaGc( iInputLayerIndex );
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::UpdateOutput
// -----------------------------------------------------------------------------
//
TInt CAknsAlAnimatorBmp::UpdateOutput()
    {
    return Render( EFalse );
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::SetIdling
// -----------------------------------------------------------------------------
//
void CAknsAlAnimatorBmp::SetIdling( TInt aIntervalMs )
    {
    if( EAknsAnimStateRunning == iState || iIdling )
        {
        iTimer->Cancel();
        iIdling = ETrue;
        iState = EAknsAnimStatePaused;
        iIdlingInterval = aIntervalMs;

        if ( iTimer->IsActive() )
            {
            iTimer->Cancel();
            }
        iTimer->Start( 0, iIdlingInterval * 1000, TCallBack( TimerTimeoutCallback, this ) );
        }
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::IsIdling
// -----------------------------------------------------------------------------
//
TBool CAknsAlAnimatorBmp::IsIdling() const
    {
    return iIdling;
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::CancelIdling
// -----------------------------------------------------------------------------
//
void CAknsAlAnimatorBmp::CancelIdling()
    {
    if( iIdling )
        {
        iTimer->Cancel();
        iIdling = EFalse;
        }
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::LayerSize
// -----------------------------------------------------------------------------
//
TSize CAknsAlAnimatorBmp::LayerSize() const
    {
    return iContext->LayerSize();
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::NeedsInputLayer
// -----------------------------------------------------------------------------
//
TBool CAknsAlAnimatorBmp::NeedsInputLayer() const
    {
    if( iInputLayerIndex >= 0 &&
        !iContext->RgbBitmap( iInputLayerIndex ) )
        {
        return ETrue;
        }

    // input layers created in preprocess step are needed too
    for (TInt i = 0; i <KAknsAlEffectContextLayerN; i++ )
        {
        if ( iPreprocessInputLayers & (1 << i) ) // layers bitpacked - use bitwise and
            {
            if ( !iContext->RgbBitmap( i ) )
                {
                return ETrue;
                }
            }
        }

    return EFalse;
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::RenderError
// -----------------------------------------------------------------------------
//
TBool CAknsAlAnimatorBmp::RenderError() const
    {
    return (KErrNone != iRenderError) ? ETrue: EFalse;
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::StartAnimationL
// -----------------------------------------------------------------------------
//
void CAknsAlAnimatorBmp::StartAnimationL( TBool aReset, TBool aStartTimer )
    {
    // Don't release input layers, do release plugins because we will activate
    // them here.
    StopAndRelease( EFalse, ETrue );

    TInt i;
    if( aReset )
        {
        // Make sure animation models are at the beginning of the animation
        for( i=0; i < iTimingModels.Count(); i++ )
            iTimingModels[i]->Begin();

        // Make sure animation values are at the begining of the animation
        for( i=0; i < iValueContainers.Count(); i++ )
            iValueContainers[i]->Begin();
        }

    // Resizing causes restart and initially we must apply size bound
    // parameters too.
    TInt count = iSizeBoundParams.Count();
    for( i=0; i < count; i++ )
        {
        CAknsAlSizeBoundParam* param = iSizeBoundParams[i];
        param->SizeChangedL( iContext->LayerSize() );
        }

    // Activate and parametrize effect filters
    count = iAnimationCommands.Count();
    for( i=0; i < count; i++ )
        {
        // Activate effect
        CAknsAlAnimationCommand* cmd = iAnimationCommands[i];
        MAknsRlEffect* effect = cmd->Effect();
        effect->InitializeL();
        effect->ActivateL( iContext );

        // Parametrize effect
        MAknsRlParameterIterator* iter = cmd->ParameterIterator();
        if( iter )
            {
            effect->SetParametersL( *iter );
            }
        }

    // Start timer
    if( aStartTimer )
        {
        iLastFrameTicks = User::TickCount();
        if ( iTimer->IsActive() )
            {
            iTimer->Cancel();
            }
        iTimer->Start( 0, iMinimumInterval * 1000, TCallBack( TimerTimeoutCallback, this ) );
        }
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::StopAndRelease
// -----------------------------------------------------------------------------
//
void CAknsAlAnimatorBmp::StopAndRelease( TBool aReleaseInputLayers,
                                         TBool aReleasePlugins )
    {
    // Stop timer
    iTimer->Cancel();

    // Release effect filters
    if( aReleasePlugins )
        {
        TInt count = iAnimationCommands.Count();
        for( TInt i=0; i < count; i++ )
            {
            // Activate effects
            CAknsAlAnimationCommand* cmd = iAnimationCommands[i];
            MAknsRlEffect* effect = cmd->Effect();
            effect->Deactivate();
            effect->Release();
            }
        }

    // Release input layers, output layer is still available (even if the
    // animation is stopped we must be able to draw the last frame).
    if( aReleaseInputLayers )
        {
        iContext->ReleaseInputLayers( iOutputLayerIndex );
        }
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::Tick
// -----------------------------------------------------------------------------
//
void CAknsAlAnimatorBmp::Tick()
    {
    if( RenderError() )
        return;

    if( iIdling && iObserver )
        {
        iObserver->AnimFrameReady( KErrNone, 0 );
        return;
        }

    TBool isFinished = EFalse;
    TInt i;

    //---------------------------------
    // Check if the animation has been finished
    TInt count = iTimingModels.Count();
    for( i=0; i < count; i++ )
        {
        isFinished = isFinished | iTimingModels[i]->IsFinished();
        }

    if( isFinished )
        {
        // No need to do rendering, animation became finished on the last tick
        // -> last rendered frame is valid. Cancelling the timer is enough as
        // we don't release input layers or plugins.
        iTimer->Cancel();
        iState = EAknsAnimStateFinished;
        return;
        }

    //---------------------------------
    // Determine the delta time
    TInt now = User::TickCount();
    TInt deltaTime = ( now - iLastFrameTicks ) * iMsPerTick;
    iLastFrameTicks = now;

    // The range for delta time is (0, 65536]. It cannot be 0 and 65536 is the
    // maximum limit caused by the fixed point calculations.
    if( deltaTime <= 0 )
        deltaTime = 1;
    if( deltaTime > KAlMaxDeltaTime )
        deltaTime = KAlMaxDeltaTime;

    //---------------------------------
    // Update timing models
    count = iTimingModels.Count();
    for( i=0; i < count; i++ )
        {
        iTimingModels[i]->Tick( deltaTime );
        }

    //---------------------------------
    // Step 2: Tick the animation
    count = iValueContainers.Count();
    for( i=0; i < count; i++ )
        {
        CAknsAlAnimationValueContainer* container = iValueContainers[i];
        container->Tick( deltaTime );
        }

    // Render the animation (skipped if layers are not ok)
    if( iSizeKnown )
        {
        TInt err = Render( ETrue );
        if( KErrNone != err )
            {
            iRenderError = err;
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::Render
// -----------------------------------------------------------------------------
//
TInt CAknsAlAnimatorBmp::Render( TBool aNotify )
    {
    // Cannot render when state is invalid
    if( RenderError() )
        {
        if( iObserver && aNotify )
            {
            iObserver->AnimFrameReady( iRenderError, 0 );
            }
        return iRenderError;
        }

    // State is valid, we can try rendering
    TInt err = ApplyCommands( iAnimationCommands, ETrue );

    if( KErrNone != err )
        {
#if defined(_DEBUG)
        RDebug::Printf("ANIM CAknsAlAnimatorBmp, ApplyCommands failed %d, stopping...", err);
#endif
        StopAnimation(); // Failed animation cannot run
        }

    // Inform observer about new frame
    if( iObserver && aNotify )
        {
        iObserver->AnimFrameReady( err, 0 );
        }

    return err;
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::PreprocessL
// -----------------------------------------------------------------------------
//
void CAknsAlAnimatorBmp::PreprocessL()
    {
    TInt i;
    TInt count = iPreprocessCommands.Count();
    for( i=0; i < count; i++ )
        {
        // Activate effect
        CAknsAlAnimationCommand* cmd = iPreprocessCommands[i];
        MAknsRlEffect* effect = cmd->Effect();
        effect->InitializeL();
        effect->ActivateL( iContext );

        // No untrapped leaves after this line before deactivation & release

        // Parametrize effect
        MAknsRlParameterIterator* iter = cmd->ParameterIterator();
        if( iter )
            {
            TRAPD( paramErr, effect->SetParametersL( *iter ) );
            if( paramErr )
                {
                effect->Deactivate();
                effect->Release();
                AKNS_TRACE_ERROR1("CAknsAlAnimatorBmp::PreprocessL Bad params for effect %d", i);
                User::Leave( paramErr );
                }
            }

        TAknsRlRenderOpParam opParam = cmd->LayerConfig();

        TAknsRlEffectCaps caps;
        effect->GetCapabilities( caps );

        TBool opPossible = ETrue;
        if( !(caps.iInputLayerASupport&opParam.iInputLayerAStatus) )
            opPossible = EFalse;
        if( !(caps.iInputLayerBSupport&opParam.iInputLayerBStatus) )
            opPossible = EFalse;
        if( !(caps.iOutputLayerSupport&opParam.iOutputLayerStatus) )
            opPossible = EFalse;
        if( opParam.iOutputLayerStatus == KAknsRlLayerNone )
            opPossible = EFalse;

        TInt effectRet = KErrArgument;

        if( opPossible )
            {
            effectRet = KAknsRlRenderIncomplete;
            while( effectRet == KAknsRlRenderIncomplete )
                {
                effectRet = effect->Render( opParam );
                }
            }
#if defined(_DEBUG)
        else
            {
            AKNS_TRACE_ERROR1("CAknsAlAnimatorBmp::PreprocessL Effect not executed %d", i);
            }
#endif

        // Deactivation, leaves are OK after this
        effect->Deactivate();
        effect->Release();

#if defined(_DEBUG)
        if( effectRet )
            {
            AKNS_TRACE_ERROR2("CAknsAlAnimatorBmp::PreprocessL error %d for %d", effectRet, i);
            }
#endif

        User::LeaveIfError( effectRet );
        }

    iPreprocessInputLayers = 0;
    // we have to save input layers created in preprocess step
    for (i = 0; i <KAknsAlEffectContextLayerN; i++ )
        {
        if( iContext->RgbBitmap( i ) )
            {
            iPreprocessInputLayers |= 1 << i;
            }
        }
    }
// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::ApplyCommands
// -----------------------------------------------------------------------------
//
TInt CAknsAlAnimatorBmp::ApplyCommands(
    RPointerArray<CAknsAlAnimationCommand>& aCommands,
    TBool aApplyNamedReferences ) const
    {
    TInt count = aCommands.Count();
    TAknsRlEffectCaps caps;
    TBool opPossible = EFalse;
    for( TInt i=0; i < count; i++ )
        {
        CAknsAlAnimationCommand* cmd = aCommands[i];
        MAknsRlEffect* effect = cmd->Effect();

        TAknsRlRenderOpParam opParam = cmd->LayerConfig();

        effect->GetCapabilities( caps );

        opPossible = ETrue;

        if( !(caps.iInputLayerASupport&opParam.iInputLayerAStatus) )
            opPossible = EFalse;
        if( !(caps.iInputLayerBSupport&opParam.iInputLayerBStatus) )
            opPossible = EFalse;
        if( !(caps.iOutputLayerSupport&opParam.iOutputLayerStatus) )
            opPossible = EFalse;
        if( opParam.iOutputLayerStatus == KAknsRlLayerNone )
            opPossible = EFalse;

        TInt effectRet = KErrArgument;

        if( opPossible )
            {
            if( aApplyNamedReferences )
                {
                // Apply time bound parameters
                MAknsRlParameterIterator* iter = cmd->NamedReferenceIterator();
                if( iter )
                    {
                    TRAPD( paramErr, effect->SetParametersL( *iter ) );
                    if( paramErr )
                        return paramErr;
                    }
                }

            // Render effect
            effectRet = KAknsRlRenderIncomplete;
            while( effectRet == KAknsRlRenderIncomplete )
                {
                effectRet = effect->Render( opParam );
                }
            }
#if defined(_DEBUG)
        else
            {
            AKNS_TRACE_ERROR1("CAknsAlAnimatorBmp::ApplyCommands Effect not executed %d", i);
            }
#endif

#if defined(_DEBUG)
        if( effectRet )
            {
            AKNS_TRACE_ERROR2("CAknsAlAnimatorBmp::ApplyCommands error %d for %d", effectRet, i);
            }
#endif

        if( KErrNone != effectRet )
            return effectRet;
        }

    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::FindTimingModelById
// -----------------------------------------------------------------------------
//
MAknsAlTimingModel* CAknsAlAnimatorBmp::FindTimingModelById( TInt aId ) const
    {
    if( 0 <= aId && aId < iTimingModels.Count() )
        return iTimingModels[ aId ];

    return NULL;
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::FindContainerById
// -----------------------------------------------------------------------------
//
CAknsAlAnimationValueContainer* CAknsAlAnimatorBmp::FindContainerById( TInt aId ) const
    {
    if( 0 <= aId && aId < iValueContainers.Count() )
        return iValueContainers[ aId ];

    return NULL;
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::CreateTimingModelsL
// -----------------------------------------------------------------------------
//
void CAknsAlAnimatorBmp::CreateTimingModelsL(
    const CAknsAnimationItemData& aSkinData )
    {
    MAknsAlIterator* iter = aSkinData.TimingModelIteratorL();
    CleanupStack::PushL( TCleanupItem( MAknsAlIterator::CleanupOp, iter ) );

    while( iter->HasNext() )
        {
        const TAknsAlTimingModelData* item =
            static_cast<const TAknsAlTimingModelData*>( iter->NextL() );
        MAknsAlTimingModel* model =
            AknsAlAnimationFactory::CreateTimingModelL( item->iTimingModelUid );
        if( !model )
            {
            User::Leave( KErrNotFound );
            }

        CleanupStack::PushL( TCleanupItem( MAknsAlTimingModel::CleanupOp, model ) );

        if( item->iParamIterator )
            model->SetParametersL( *item->iParamIterator );

        User::LeaveIfError( iTimingModels.Append( model ) );

        CleanupStack::Pop(); // Model
        }

    CleanupStack::PopAndDestroy(); // iter
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::CreateAnimationValueContainersL
// -----------------------------------------------------------------------------
//
void CAknsAlAnimatorBmp::CreateAnimationValueContainersL(
    const CAknsAnimationItemData& aSkinData )
    {
    MAknsAlIterator* iter = aSkinData.AnimationValueIteratorL();
    CleanupStack::PushL( TCleanupItem( MAknsAlIterator::CleanupOp, iter ) );

    while( iter->HasNext() )
        {
        const TAknsAlAnimationValueData* data =
            static_cast<const TAknsAlAnimationValueData*>( iter->NextL() );

        // Create animation value
        MAknsAlAnimationValue* value =
            AknsAlAnimationFactory::CreateAnimationValueL( data->iAnimationValueUid );
        if( !value )
            {
            User::Leave( KErrNotFound );
            }

        CleanupStack::PushL( TCleanupItem( MAknsAlAnimationValue::CleanupOp, value ) );

        if( data->iParamIterator )
            value->SetParametersL( *data->iParamIterator );

        // Fetch timing model
        MAknsAlTimingModel* timing = FindTimingModelById( data->iTimingModelId );
        if( !timing )
            User::Leave( KErrNotFound );

        // Create the container
        CAknsAlAnimationValueContainer* container =
            CAknsAlAnimationValueContainer::NewL( value, timing );

        CleanupStack::Pop( value ); // Animation value is now owned by container

        CleanupStack::PushL( container );
        User::LeaveIfError( iValueContainers.Append( container ) );
        CleanupStack::Pop( container );
        }

    CleanupStack::PopAndDestroy(); // iter
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::CreatePreprocessCommandsL
// -----------------------------------------------------------------------------
//
void CAknsAlAnimatorBmp::CreatePreprocessCommandsL(
    const CAknsAnimationItemData& aSkinData )
    {
    MAknsRlCommandIterator* iter = aSkinData.PreprocessCommandIteratorL();
    CleanupStack::PushL( TCleanupItem( MAknsRlCommandIterator::CleanupOperation, iter ) );

    while( iter->HasNext() )
        {
        const TAknsRlCommandData* data = iter->NextL();
        CAknsAlAnimationCommand* command = CAknsAlAnimationCommand::NewL();
        CleanupStack::PushL( command );

        // Step 1: Create the plugin
        CAknsRlEffectPlugin* plugin =
            AknsAlAnimationFactory::CreateEffectPluginL( data->iEffectUid );
        if( !plugin )
            {
            User::Leave( KErrNotFound );
            }

        command->SetPlugin( plugin );

        // Step 2: Assign layer configuration
        command->SetLayerConfig( data->iLayerConf );

        // Step 3: Add initial parameters
        if( data->iParamIterator )
            {
            MAknsRlParameterIterator* paramIter = data->iParamIterator;
            while( paramIter->HasNext() )
                {
                const TAknsRlParameterData* param = paramIter->NextL();
                command->AddParameterL( *param );
                }
            }

        // Preprocess commands don't have named references
        User::LeaveIfError( iPreprocessCommands.Append( command ) );
        CleanupStack::Pop( command );
        }

    CleanupStack::PopAndDestroy(); // iter
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::CreateAnimationCommandsL
// -----------------------------------------------------------------------------
//
void CAknsAlAnimatorBmp::CreateAnimationCommandsL(
    const CAknsAnimationItemData& aSkinData )
    {
    MAknsAlIterator* iter = aSkinData.CommandIteratorL();
    CleanupStack::PushL( TCleanupItem( MAknsAlIterator::CleanupOp, iter ) );

    while( iter->HasNext() )
        {
        const TAknsAlAnimationCommandData* data =
            static_cast<const TAknsAlAnimationCommandData*>( iter->NextL() );

        CAknsAlAnimationCommand* command = CAknsAlAnimationCommand::NewL();
        CleanupStack::PushL( command );

        // Step 1: Create the plugin
        CAknsRlEffectPlugin* plugin =
            AknsAlAnimationFactory::CreateEffectPluginL( data->iEffectUid );
        if( !plugin )
            {
            User::Leave( KErrNotFound );
            }
        command->SetPlugin( plugin );

        // Step 2: Assign layer configuration
        command->SetLayerConfig( data->iLayerConf );

        // Step 3: Add initial parameters
        if( data->iParamIterator )
            {
            MAknsRlParameterIterator* paramIter = data->iParamIterator;
            while( paramIter->HasNext() )
                {
                const TAknsRlParameterData* param = paramIter->NextL();
                command->AddParameterL( *param );
                }
            }

        // Step 4: Add named references
        if( data->iNamedReferenceIterator )
            {
            MAknsAlIterator* refIter = data->iNamedReferenceIterator;
            while( refIter->HasNext() )
                {
                const TAknsAlNamedReferenceData* ref =
                    static_cast<const TAknsAlNamedReferenceData*>( refIter->NextL() );

                CAknsAlAnimationValueContainer* container = FindContainerById( ref->iAnimationValueId );
                if( !container )
                    User::Leave( KErrNotFound );

                command->AddNamedReferenceL( *ref->iName,
                                             container->AnimationValue() );
                }
            }

        User::LeaveIfError( iAnimationCommands.Append( command ) );
        CleanupStack::Pop( command );
        }

    CleanupStack::PopAndDestroy(); // iter
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::CreateSizeBoundParamsL
// -----------------------------------------------------------------------------
//
void CAknsAlAnimatorBmp::CreateSizeBoundParamsL(
    const CAknsAnimationItemData& aSkinData )
    {
    MAknsAlIterator* iter = aSkinData.SizeBoundParamIteratorL();
    CleanupStack::PushL( TCleanupItem( MAknsAlIterator::CleanupOp, iter ) );

    while( iter->HasNext() )
        {
        const TAknsAlSizeBoundParameterData* data =
            static_cast<const TAknsAlSizeBoundParameterData*>( iter->NextL() );

        if( !data->iName )
            User::Leave( KErrBadHandle );

        CAknsAlAnimationValueContainer* container = FindContainerById( data->iAnimationValueId );
        if( !container )
            User::Leave( KErrNotFound );

        CAknsAlSizeBoundParam* param =
            CAknsAlSizeBoundParam::NewL( container->AnimationValue(),
                                         *data->iName,
                                         data->iParamFlags );

        CleanupStack::PushL( param );
        User::LeaveIfError( iSizeBoundParams.Append( param ) );
        CleanupStack::Pop( param );
        }

    CleanupStack::PopAndDestroy(); // iter
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimatorBmp::TimerTimeoutCallback
// -----------------------------------------------------------------------------
//
TInt CAknsAlAnimatorBmp::TimerTimeoutCallback(TAny *aPtr)
    {
    CAknsAlAnimatorBmp* render = reinterpret_cast<CAknsAlAnimatorBmp*>( aPtr );
    render->Tick();

    return ETrue; // Continue running
    }

// -----------------------------------------------------------------------------
// Callback interface for lights status.
// -----------------------------------------------------------------------------
//
void CAknsAlAnimatorBmp::LightStatusChanged( TInt aTarget,
                         CHWRMLight::TLightStatus aStatus )
    {
    if ( aTarget == CHWRMLight::EPrimaryDisplay ||
         aTarget == CHWRMLight::EPrimaryDisplayAndKeyboard )
        {
        if ( aStatus == CHWRMLight::ELightOff )
            {
            PauseAnimation(); // don't care about errors in here
            }
        else if ( aStatus == CHWRMLight::ELightOn )
            {
            ContinueAnimation();
            }
        }
    }

// End of File
