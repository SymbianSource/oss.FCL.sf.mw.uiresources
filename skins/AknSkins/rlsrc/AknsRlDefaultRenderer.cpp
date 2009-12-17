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
* Description:  Default renderer.
*
*/


// INCLUDE FILES
#include "AknsRlDefaultRenderer.h"

#include "AknsRlInternalEffectPool.h"
#include "AknSkinsVariant.hrh"
#include "AknsDebug.h"
#include <akniconconfig.h>

// CONSTANTS

static const TInt KAknsRlDefaultRendererLayerN = 3;

// INTERNAL CLASSES

NONSHARABLE_CLASS(CAknsRlDefaultEffectContext) :
    public CBase, public MAknsRlEffectContext
    {
    public: // Constructor and destructor
        CAknsRlDefaultEffectContext( const TSize aSize );
        ~CAknsRlDefaultEffectContext();
        void ConstructL();

    public: // From MAknsRlEffectContext
        const TSize LayerSize();
        void GetLayerDataL( TAknsRlLayerData& aData,
            const TInt aLayerIndex, const TInt aLayerStatus,
            const TBool aInitialize );
        RAknsSrvSession* GetSkinSrvSession();

    public: // New methods
        void DetachLayerBitmaps( const TInt aLayerIndex );
        void SetSkinSrvSession(RAknsSrvSession* aSession);

    private: // New methods
        void CreateIfNeededL( const TInt aLayerIndex, const TInt aLayerStatus,
            const TBool aInitialize );

    private:
        TSize iSize;
        TAknsRlLayerData iLayers[KAknsRlDefaultRendererLayerN];
        RAknsSrvSession* iSkinSrvSession;
    };

// ============================= LOCAL FUNCTIONS ===============================

TDisplayMode DefaultRenderingMode()
{
    AknIconConfig::TPreferredDisplayMode mode;
    AknIconConfig::PreferredDisplayMode(mode, AknIconConfig::EImageTypeOffscreen);
    return mode.iBitmapMode;
}

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsRlDefaultRenderer::CAknsRlDefaultRenderer
// C++ default constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknsRlDefaultRenderer::CAknsRlDefaultRenderer(RAknsSrvSession* aSession)
    : iSkinSrvSession(aSession)
    {
    }

// -----------------------------------------------------------------------------
// Destructor
// -----------------------------------------------------------------------------
//
CAknsRlDefaultRenderer::~CAknsRlDefaultRenderer()
    {
    delete iPool;
    }

// -----------------------------------------------------------------------------
// CAknsRlDefaultRenderer::NewL
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsRlDefaultRenderer* CAknsRlDefaultRenderer::NewL(
    RAknsSrvSession* aSession )
    {
    CAknsRlDefaultRenderer* self =
        new (ELeave) CAknsRlDefaultRenderer(aSession);
    CleanupStack::PushL( self );
    self->ConstructL();
    CleanupStack::Pop(); // self
    return self;
    }

// -----------------------------------------------------------------------------
// CAknsRlDefaultRenderer::ConstructL
// -----------------------------------------------------------------------------
//
void CAknsRlDefaultRenderer::ConstructL()
    {
    iPool = CAknsRlInternalEffectPool::NewL();
    }

// -----------------------------------------------------------------------------
// CAknsRlDefaultRenderer::RenderItem
// -----------------------------------------------------------------------------
//
TInt CAknsRlDefaultRenderer::RenderItem(
    CFbsBitmap*& aOutRGB, CFbsBitmap*& aOutAlpha,
    const TInt aOutLayerIndex, MAknsRlCommandIterator* aCommands,
    const TSize& aSize )
    {
    TInt ret = KErrNone;
    TRAP( ret, DoRenderItemL( aOutRGB, aOutAlpha, aOutLayerIndex,
        aCommands, aSize, NULL, NULL, TRect(0,0,1,1), -1 ) );
    return ret;
    }

// -----------------------------------------------------------------------------
// CAknsRlDefaultRenderer::RenderItemWithBackground
// -----------------------------------------------------------------------------
//
TInt CAknsRlDefaultRenderer::RenderItemWithBackground(
    CFbsBitmap*& aOutRGB, CFbsBitmap*& aOutAlpha,
    const TInt aOutLayerIndex,
    MAknsRlCommandIterator* aCommands, const TSize& aSize,
    const CFbsBitmap* aInRGB, const CFbsBitmap* aInAlpha,
    const TRect& aInRect, const TInt aInLayerIndex )
    {
    TInt ret = KErrNone;
    TRAP( ret, DoRenderItemL( aOutRGB, aOutAlpha, aOutLayerIndex,
        aCommands, aSize, aInRGB, aInAlpha, aInRect, aInLayerIndex ) );
    return ret;
    }

// -----------------------------------------------------------------------------
// CAknsRlDefaultRenderer::DisplayMode
// -----------------------------------------------------------------------------
//
TDisplayMode CAknsRlDefaultRenderer::DisplayMode()
    {
    return DefaultRenderingMode();
    }

// -----------------------------------------------------------------------------
// CAknsRlDefaultRenderer::DoRenderItemL
// -----------------------------------------------------------------------------
//
void CAknsRlDefaultRenderer::DoRenderItemL(
    CFbsBitmap*& aOutRGB, CFbsBitmap*& aOutAlpha,
    const TInt aOutputLayerIndex,
    MAknsRlCommandIterator* aCommands,
    const TSize& aSize,
    const CFbsBitmap* aInRGB, const CFbsBitmap* aInAlpha,
    const TRect& aInRect, const TInt aInputLayerIndex )
    {
    CAknsRlDefaultEffectContext* context =
        new (ELeave) CAknsRlDefaultEffectContext( aSize );
    CleanupStack::PushL( context );
    context->ConstructL();
    context->SetSkinSrvSession(iSkinSrvSession);

    if( aInputLayerIndex>=0 )
        {
        TInt inputMode = KAknsRlLayerNone;
        if( aInRGB && aInAlpha ) inputMode = KAknsRlLayerRGBA;
        else if( aInRGB ) inputMode = KAknsRlLayerRGBOnly;
        else if( aInAlpha ) inputMode = KAknsRlLayerAlphaOnly;

        TAknsRlLayerData inputLayer;
        context->GetLayerDataL( inputLayer, aInputLayerIndex,
            inputMode, ETrue );

        if( inputLayer.iRGBGc ) inputLayer.iRGBGc->BitBlt(
            TPoint(0,0), aInRGB, aInRect );
        if( inputLayer.iAlphaGc ) inputLayer.iAlphaGc->BitBlt(
            TPoint(0,0), aInAlpha, aInRect );
        }

    ExecuteCommandsL( aCommands, context );

    TAknsRlLayerData outputLayer;
    context->GetLayerDataL( outputLayer, aOutputLayerIndex,
        KAknsRlLayerRGBA, ETrue );
    aOutRGB = outputLayer.iRGBBitmap;
    aOutAlpha = outputLayer.iAlphaBitmap;

    context->DetachLayerBitmaps( aOutputLayerIndex );
    // Output detached, no leaves allowed after this point

    CleanupStack::PopAndDestroy( context );
    }

// -----------------------------------------------------------------------------
// CAknsRlDefaultRenderer::ExecuteCommandsL
// -----------------------------------------------------------------------------
//
void CAknsRlDefaultRenderer::ExecuteCommandsL(
    MAknsRlCommandIterator* aCommands, MAknsRlEffectContext* aContext )
    {
    if( !aCommands ) return;

    while( aCommands->HasNext() )
        {
        const TAknsRlCommandData* data = aCommands->NextL();

        MAknsRlEffect* effect = iPool->GetEffect( data->iEffectUid );

        if( !effect )
            {
            AKNS_TRACE_ERROR1("CAknsRlDefaultRenderer::ExecuteCommandsL Effect %x not available", data->iEffectUid );
            User::Leave( KAknsRlErrEffectNotAvailable );
            }

        effect->ActivateL( aContext );
        // CS: No untrapped leaves after this line before deactivation

        if( data->iParamIterator )
            {
            TRAPD( paramErr, effect->SetParametersL( *data->iParamIterator ) );
            if( paramErr )
                {
                effect->Deactivate();
                AKNS_TRACE_ERROR1("CAknsRlDefaultRenderer::ExecuteCommandsL Bad parameters for effect %x", data->iEffectUid );
                User::Leave( paramErr );
                }
            }

        TAknsRlRenderOpParam opParam = data->iLayerConf;

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
            AKNS_TRACE_ERROR1("CAknsRlDefaultRenderer::ExecuteCommandsL Effect %x not executed", data->iEffectUid );
            }
#endif

        // CS: Deactivation, leaves are OK after this
        effect->Deactivate();

#if defined(_DEBUG)
        if( effectRet )
            {
            AKNS_TRACE_ERROR2("CAknsRlDefaultRenderer::ExecuteCommandsL Effect %x returned %i", data->iEffectUid, effectRet );
            }
#endif

        User::LeaveIfError( effectRet );
        }
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsRlDefaultEffectContext::CAknsRlDefaultEffectContext
// -----------------------------------------------------------------------------
//
CAknsRlDefaultEffectContext::CAknsRlDefaultEffectContext(
    const TSize aSize ) : iSize( aSize )
    {
    for( TInt i=0; i<KAknsRlDefaultRendererLayerN; i++ )
        {
        iLayers[i].iRGBBitmap = NULL;
        iLayers[i].iRGBDevice = NULL;
        iLayers[i].iRGBGc = NULL;
        iLayers[i].iAlphaBitmap = NULL;
        iLayers[i].iAlphaDevice = NULL;
        iLayers[i].iAlphaGc = NULL;
        }
    iSkinSrvSession = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlDefaultEffectContext::~CAknsRlDefaultEffectContext
// -----------------------------------------------------------------------------
//
CAknsRlDefaultEffectContext::~CAknsRlDefaultEffectContext()
    {
    for( TInt i=0; i<KAknsRlDefaultRendererLayerN; i++ )
        {
        delete iLayers[i].iRGBBitmap;
        delete iLayers[i].iRGBDevice;
        delete iLayers[i].iRGBGc;
        delete iLayers[i].iAlphaBitmap;
        delete iLayers[i].iAlphaDevice;
        delete iLayers[i].iAlphaGc;
        }
    }

// -----------------------------------------------------------------------------
// CAknsRlDefaultEffectContext::ConstructL
// -----------------------------------------------------------------------------
//
void CAknsRlDefaultEffectContext::ConstructL()
    {
    }

// -----------------------------------------------------------------------------
// CAknsRlDefaultEffectContext::LayerSize
// -----------------------------------------------------------------------------
//
const TSize CAknsRlDefaultEffectContext::LayerSize()
    {
    return iSize;
    }

// -----------------------------------------------------------------------------
// CAknsRlDefaultEffectContext::GetLayerDataL
// -----------------------------------------------------------------------------
//
void CAknsRlDefaultEffectContext::GetLayerDataL( TAknsRlLayerData& aData,
    const TInt aLayerIndex, const TInt aLayerStatus,
    const TBool aInitialize )
    {
    if( (aLayerIndex<0) || (aLayerIndex>=KAknsRlDefaultRendererLayerN) )
        {
        User::Leave( KAknsRlErrBadLayerIndex );
        }

    CreateIfNeededL( aLayerIndex, aLayerStatus, aInitialize );

    if( (aLayerStatus==KAknsRlLayerRGBOnly) ||
        (aLayerStatus==KAknsRlLayerRGBA) )
        {
        aData.iRGBBitmap = iLayers[aLayerIndex].iRGBBitmap;
        aData.iRGBDevice = iLayers[aLayerIndex].iRGBDevice;
        aData.iRGBGc     = iLayers[aLayerIndex].iRGBGc;
        }
    if( (aLayerStatus==KAknsRlLayerAlphaOnly) ||
        (aLayerStatus==KAknsRlLayerRGBA) )
        {
        aData.iAlphaBitmap = iLayers[aLayerIndex].iAlphaBitmap;
        aData.iAlphaDevice = iLayers[aLayerIndex].iAlphaDevice;
        aData.iAlphaGc     = iLayers[aLayerIndex].iAlphaGc;
        }
    }

// -----------------------------------------------------------------------------
// CAknsRlDefaultEffectContext::DetachLayerBitmaps
// -----------------------------------------------------------------------------
//
void CAknsRlDefaultEffectContext::DetachLayerBitmaps( const TInt aLayerIndex )
    {
    iLayers[aLayerIndex].iRGBBitmap = NULL;
    iLayers[aLayerIndex].iAlphaBitmap = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlDefaultEffectContext::CreateIfNeededL
// -----------------------------------------------------------------------------
//
void CAknsRlDefaultEffectContext::CreateIfNeededL( const TInt aLayerIndex,
    const TInt aLayerStatus, const TBool aInitialize )
    {
    if( iLayers[aLayerIndex].iRGBBitmap &&
        iLayers[aLayerIndex].iAlphaBitmap ) return;

    if( iLayers[aLayerIndex].iRGBBitmap ||
        iLayers[aLayerIndex].iAlphaBitmap )
        User::Leave( KAknsRlErrInternalState );

    TSize size = LayerSize();

    CFbsBitmap* bitmap = new (ELeave) CFbsBitmap();
    CleanupStack::PushL( bitmap );
    User::LeaveIfError(
        bitmap->Create( size, DefaultRenderingMode() ) );

    CFbsBitmapDevice* dev = CFbsBitmapDevice::NewL( bitmap );
    CleanupStack::PushL( dev );

    CFbsBitGc* gc = CFbsBitGc::NewL();
    CleanupStack::PushL( gc );
    gc->Activate( dev );

    iLayers[aLayerIndex].iRGBBitmap = bitmap;
    iLayers[aLayerIndex].iRGBDevice = dev;
    iLayers[aLayerIndex].iRGBGc = gc;
    CleanupStack::Pop(3); // gc, dev, bitmap

    bitmap = new (ELeave) CFbsBitmap();
    CleanupStack::PushL( bitmap );
    AknIconConfig::TPreferredDisplayMode mode;
    AknIconConfig::PreferredDisplayMode(mode, AknIconConfig::EImageTypeOffscreen);

    User::LeaveIfError(
        bitmap->Create( size, mode.iMaskMode ) );

    dev = CFbsBitmapDevice::NewL( bitmap );
    CleanupStack::PushL( dev );

    gc = CFbsBitGc::NewL();
    CleanupStack::PushL( gc );
    gc->Activate( dev );

    iLayers[aLayerIndex].iAlphaBitmap = bitmap;
    iLayers[aLayerIndex].iAlphaDevice = dev;
    iLayers[aLayerIndex].iAlphaGc = gc;
    CleanupStack::Pop(3); // gc, dev, bitmap

    if( aInitialize )
        {
        switch( aLayerStatus )
            {
            case KAknsRlLayerRGBOnly:
                iLayers[aLayerIndex].iRGBGc->SetBrushColor( KRgbBlack );
                iLayers[aLayerIndex].iRGBGc->Clear();
                iLayers[aLayerIndex].iAlphaGc->SetBrushColor( KRgbWhite );
                iLayers[aLayerIndex].iAlphaGc->Clear();
                break;
            default:
                iLayers[aLayerIndex].iRGBGc->SetBrushColor( KRgbBlack );
                iLayers[aLayerIndex].iRGBGc->Clear();
                iLayers[aLayerIndex].iAlphaGc->SetBrushColor( KRgbBlack );
                iLayers[aLayerIndex].iAlphaGc->Clear();
                break;
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknsRlDefaultEffectContext::GetSkinSrvSession
// -----------------------------------------------------------------------------
//
RAknsSrvSession* CAknsRlDefaultEffectContext::GetSkinSrvSession()
    {
    return iSkinSrvSession;
    }

// -----------------------------------------------------------------------------
// CAknsRlDefaultEffectContext::SetSkinSrvSession
// -----------------------------------------------------------------------------
//
void CAknsRlDefaultEffectContext::SetSkinSrvSession(RAknsSrvSession* aSession)
    {
    iSkinSrvSession = aSession;
    }

// End of File
