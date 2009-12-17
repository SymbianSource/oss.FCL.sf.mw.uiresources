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
* Description:  Class for providing effect context for effect plugins.
*
*/


// INCLUDE FILES
#include "AknsRlErr.h"
#include "AknsAlEffectContext.h"

// -----------------------------------------------------------------------------
// CAknsAlEffectContext::CAknsAlEffectContext
// -----------------------------------------------------------------------------
//
CAknsAlEffectContext::CAknsAlEffectContext()
    {
    // Derived from CBase -> all data is zeroed
    }

// -----------------------------------------------------------------------------
// CAknsAlEffectContext::NewL
// -----------------------------------------------------------------------------
//
CAknsAlEffectContext* CAknsAlEffectContext::NewL()
    {
    CAknsAlEffectContext* self = new(ELeave) CAknsAlEffectContext();
    return self;
    }

// -----------------------------------------------------------------------------
// CAknsAlEffectContext::~CAknsAlEffectContext
// -----------------------------------------------------------------------------
//
CAknsAlEffectContext::~CAknsAlEffectContext()
    {
    ReleaseLayers(); //lint !e1551 No exception thrown
    }

// -----------------------------------------------------------------------------
// CAknsAlEffectContext::ConfigureL
// -----------------------------------------------------------------------------
//
void CAknsAlEffectContext::ConfigureL( const TSize& aSize,
                                       TDisplayMode aRgbMode,
                                       TInt aInputLayerIndex,
                                       TInt aInputLayerMode )
    {
    iLayerSize = aSize;
    iRgbMode = aRgbMode;

    ReleaseLayers();

    if( aInputLayerIndex < 0 ) // Input layer is set to none
        {
        return;
        }

    CreateIfNeededL( aInputLayerIndex, aInputLayerMode, ETrue );
    }

// -----------------------------------------------------------------------------
// CAknsAlEffectContext::RgbBitmap
// -----------------------------------------------------------------------------
//
CFbsBitmap* CAknsAlEffectContext::RgbBitmap( TInt aLayerIndex ) const
    {
    if( aLayerIndex < 0 || aLayerIndex >= KAknsAlEffectContextLayerN )
        return NULL;

    return iLayers[aLayerIndex].iRGBBitmap;
    }

// -----------------------------------------------------------------------------
// CAknsAlEffectContext::AlphaBitmap
// -----------------------------------------------------------------------------
//
CFbsBitmap* CAknsAlEffectContext::AlphaBitmap( TInt aLayerIndex ) const
    {
    if( aLayerIndex < 0 || aLayerIndex >= KAknsAlEffectContextLayerN )
        return NULL;

    return iLayers[aLayerIndex].iAlphaBitmap;
    }

// -----------------------------------------------------------------------------
// CAknsAlEffectContext::RgbGc
// -----------------------------------------------------------------------------
//
CFbsBitGc* CAknsAlEffectContext::RgbGc( TInt aIndex ) const
    {
    if( aIndex < 0 || aIndex >= KAknsAlEffectContextLayerN )
        return NULL;

    return iLayers[aIndex].iRGBGc;
    }

// -----------------------------------------------------------------------------
// CAknsAlEffectContext::AlphaGc
// -----------------------------------------------------------------------------
//
CFbsBitGc* CAknsAlEffectContext::AlphaGc( TInt aIndex ) const
    {
    if( aIndex < 0 || aIndex >= KAknsAlEffectContextLayerN )
        return NULL;

    return iLayers[aIndex].iAlphaGc;
    }

// -----------------------------------------------------------------------------
// CAknsAlEffectContext::ReleaseInputLayers
// -----------------------------------------------------------------------------
//
void CAknsAlEffectContext::ReleaseInputLayers( TInt aOutputLayerIndex )
    {
    // It is possible that output layer is also one of the input layers ->
    // delete all layers that are not output layer.
    for( int i=0; i < KAknsAlEffectContextLayerN; i++ )
        {
        if( i != aOutputLayerIndex )
            {
            ReleaseLayer( i );
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknsAlEffectContext::SetSkinSrvSession
// -----------------------------------------------------------------------------
//
void CAknsAlEffectContext::SetSkinSrvSession( RAknsSrvSession* aSession )
    {
    iSession = aSession;
    }

// -----------------------------------------------------------------------------
// CAknsAlEffectContext::LayerSize
// -----------------------------------------------------------------------------
//
const TSize CAknsAlEffectContext::LayerSize()
    {
    return iLayerSize;
    }

// -----------------------------------------------------------------------------
// CAknsAlEffectContext::GetLayerDataL
// -----------------------------------------------------------------------------
//
void CAknsAlEffectContext::GetLayerDataL( TAknsRlLayerData& aData,
                                          const TInt aLayerIndex,
                                          const TInt aLayerStatus,
                                          const TBool aInitialize )
    {
    if( ( aLayerIndex < 0 ) || ( aLayerIndex >= KAknsAlEffectContextLayerN ) )
        {
        User::Leave( KAknsRlErrBadLayerIndex );
        }

    CreateIfNeededL( aLayerIndex, aLayerStatus, aInitialize );

    /*lint -save -e661 */ // Index is boundary checked above
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
    /*lint -restore */
    }

// -----------------------------------------------------------------------------
// CAknsAlEffectContext::GetSkinSrvSession
// -----------------------------------------------------------------------------
//
RAknsSrvSession* CAknsAlEffectContext::GetSkinSrvSession()
    {
    return iSession;
    }

// -----------------------------------------------------------------------------
// CAknsAlEffectContext::CreateIfNeededL
// -----------------------------------------------------------------------------
//
void CAknsAlEffectContext::CreateIfNeededL( const TInt aLayerIndex,
    const TInt aLayerStatus, const TBool aInitialize )
    {
    if( ( aLayerIndex < 0 ) || ( aLayerIndex >= KAknsAlEffectContextLayerN ) )
        {
        User::Leave( KAknsRlErrBadLayerIndex );
        }

    /*lint -save -e661 */ // Index is boundary checked above
    if( iLayers[aLayerIndex].iRGBBitmap &&
        iLayers[aLayerIndex].iAlphaBitmap ) return;

    if( iLayers[aLayerIndex].iRGBBitmap ||
        iLayers[aLayerIndex].iAlphaBitmap )
        User::Leave( KAknsRlErrInternalState );

    TSize size = LayerSize();

    CFbsBitmap* bitmap = new (ELeave) CFbsBitmap();
    CleanupStack::PushL( bitmap );
    User::LeaveIfError( bitmap->Create( size, iRgbMode ) );

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
    User::LeaveIfError( bitmap->Create( size, EGray256 ) );

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
    /*lint -restore */
    }//lint !e661 Layer index is boundary checked

// -----------------------------------------------------------------------------
// CAknsAlEffectContext::ReleaseLayers
// -----------------------------------------------------------------------------
//
void CAknsAlEffectContext::ReleaseLayers()
    {
    for( TInt i=0; i < KAknsAlEffectContextLayerN; i++ )
        {
        ReleaseLayer( i );
        }
    }
// -----------------------------------------------------------------------------
// CAknsAlEffectContext::ReleaseLayer
// -----------------------------------------------------------------------------
//
void CAknsAlEffectContext::ReleaseLayer( const TInt aLayerIndex )
    {
    ASSERT( aLayerIndex >= 0 && aLayerIndex < KAknsAlEffectContextLayerN );

    /*lint -save -e661 */ // Never called with invalid index
    delete iLayers[aLayerIndex].iRGBBitmap;
    delete iLayers[aLayerIndex].iRGBDevice;
    delete iLayers[aLayerIndex].iRGBGc;
    delete iLayers[aLayerIndex].iAlphaBitmap;
    delete iLayers[aLayerIndex].iAlphaDevice;
    delete iLayers[aLayerIndex].iAlphaGc;

    iLayers[aLayerIndex].iRGBBitmap   = NULL;
    iLayers[aLayerIndex].iRGBDevice   = NULL;
    iLayers[aLayerIndex].iRGBGc       = NULL;
    iLayers[aLayerIndex].iAlphaBitmap = NULL;
    iLayers[aLayerIndex].iAlphaDevice = NULL;
    iLayers[aLayerIndex].iAlphaGc     = NULL;
    /*lint -restore */
    }

// End of File
