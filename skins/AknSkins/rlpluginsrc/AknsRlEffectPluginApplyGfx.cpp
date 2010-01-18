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
* Description:  Effect that applies the given bitmap or SVG icon to the layer.
*
*/


// INCLUDE FILES
#include "AknsRlEffectPluginApplyGfx.h"

#include <AknIconUtils.h>
#include <AknsSrvClient.h>

#include "AknsFsHandleProvider.h"

// CONSTANTS
/*lint -save -e618 */ // Disables lint nag about _LIT
const TInt KApplyGfxEffectUID = 0x101F8748;
_LIT( KApplyGfxParamFilename,   "f" );
_LIT( KApplyGfxParamScaleMode,  "ms" );
static const TInt KApplyGfxValueScaleModePreserveAspect = 0;
static const TInt KApplyGfxValueScaleModeStretch = 1;
_LIT( KApplyGfxParamXTiles,     "tx" );
_LIT( KApplyGfxParamYTiles,     "ty" );
_LIT( KApplyGfxParamTileW,      "tw" );
_LIT( KApplyGfxParamTileH,      "th" );
_LIT( KApplyGfxParamAspectLT,   "alt" );
_LIT( KApplyGfxParamAspectGT,   "agt" );
_LIT( KApplyGfxParamGenImg,     "g" );
/*lint -restore */

_LIT(KAknsSrvPrivateLocation, "private\\10207114\\");


// ============================= LOCAL FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// DivAndRoundUp
//
// Divides the given number by the given divider, and rounds the resulting
// integer upward, if there is a non-zero remainder.
//
// Returns: Divedend as an integer.
// -----------------------------------------------------------------------------
//
TInt DivAndRoundUp( const TInt aNumber, const TInt aDivider )
    {
    TInt result = aNumber/aDivider;
    if( aNumber%aDivider )
        {
        result+=1;
        }
    return result;
    }

// Destroys preserved icon.
void DestroyPreservedIcon( TAny* aBitmap )
    {
    CFbsBitmap* bitmap = static_cast<CFbsBitmap*>(aBitmap);
    if ( bitmap )
        {
        AknIconUtils::DestroyIconData( bitmap );
        }
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginApplyGfx::CAknsRlEffectPluginApplyGfx
// C++ default constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknsRlEffectPluginApplyGfx::CAknsRlEffectPluginApplyGfx()
    {
    }

// -----------------------------------------------------------------------------
// Destructor
// -----------------------------------------------------------------------------
//
CAknsRlEffectPluginApplyGfx::~CAknsRlEffectPluginApplyGfx()
    {
    iContext = NULL; // Removes lint nag
    iFilename = NULL; // Removes lint nag
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginApplyGfx::EffectUid
// -----------------------------------------------------------------------------
//
TUid CAknsRlEffectPluginApplyGfx::EffectUid() const
    {
    return TUid::Uid( KApplyGfxEffectUID );
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginApplyGfx::Effect
// -----------------------------------------------------------------------------
//
MAknsRlEffect* CAknsRlEffectPluginApplyGfx::Effect( const TInt aInterface )
    {
    if( aInterface == KAknsRlEffectPluginInterfaceEffect )
        {
        return this;
        }
    return NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginApplyGfx::InitializeL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginApplyGfx::InitializeL()
    {
    iContext = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginApplyGfx::Release
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginApplyGfx::Release()
    {
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginApplyGfx::ActivateL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginApplyGfx::ActivateL( MAknsRlEffectContext* aContext )
    {
    if( !aContext ) // We absolutely need the context
        {
        User::Leave( KErrArgument );
        }

    iContext = aContext;

    iFilename = NULL;
    iBmpIndex = -1;
    iMaskIndex = -1;

    iScaleMode = KApplyGfxValueScaleModeStretch;
    iTiled = EFalse;
    iTilesX = 1;
    iTilesY = 1;
    iTileW = 0;
    iTileH = 0;

    iMaxAspect = -1;
    iMinAspect = -1;
    iGenericImage = 0;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginApplyGfx::Deactivate
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginApplyGfx::Deactivate()
    {
    delete iFilename;
    iFilename = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginApplyGfx::SetParametersL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginApplyGfx::SetParametersL(
    MAknsRlParameterIterator& aParameters )
    {
    while( aParameters.HasNext() )
        {
        const TAknsRlParameterData* param = aParameters.NextL();

        if( param->iName->Compare(KApplyGfxParamFilename) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeGraphics )
                {
                User::Leave( KErrArgument );
                }
            delete iFilename;
            iFilename = NULL;
            iFilename = param->iGfx->iFilename->AllocL();
            iBmpIndex = param->iGfx->iIndex;
            iMaskIndex = param->iGfx->iMaskIndex;
            }
        else if( param->iName->Compare(KApplyGfxParamScaleMode) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                {
                User::Leave( KErrArgument );
                }
            iScaleMode = param->iNumber;
            }
        else if( param->iName->Compare(KApplyGfxParamXTiles) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                {
                User::Leave( KErrArgument );
                }
            iTilesX = param->iNumber;
            iTiled = ETrue;
            }
        else if( param->iName->Compare(KApplyGfxParamYTiles) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                {
                User::Leave( KErrArgument );
                }
            iTilesY = param->iNumber;
            iTiled = ETrue;
            }
        else if( param->iName->Compare(KApplyGfxParamTileW) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                {
                User::Leave( KErrArgument );
                }
            iTileW = param->iNumber;
            iTiled = ETrue;
            }
        else if( param->iName->Compare(KApplyGfxParamTileH) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                {
                User::Leave( KErrArgument );
                }
            iTileH = param->iNumber;
            iTiled = ETrue;
            }
        else if( param->iName->Compare(KApplyGfxParamAspectGT) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                {
                User::Leave( KErrArgument );
                }
            iMinAspect = param->iNumber;
            }
        else if( param->iName->Compare(KApplyGfxParamAspectLT) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                {
                User::Leave( KErrArgument );
                }
            iMaxAspect = param->iNumber;
            }
        else if( param->iName->Compare(KApplyGfxParamGenImg) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                {
                User::Leave( KErrArgument );
                }
            iGenericImage = param->iNumber;
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginApplyGfx::GetCapabilities
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginApplyGfx::GetCapabilities( TAknsRlEffectCaps& aCaps )
    {
    // Input layers are not used
    aCaps.iInputLayerASupport = KAknsRlLayerNone;
    aCaps.iInputLayerBSupport = KAknsRlLayerNone;
    aCaps.iOutputLayerSupport = KAknsRlLayerRGBOnly |
        KAknsRlLayerAlphaOnly | KAknsRlLayerRGBA;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginApplyGfx::Render
// -----------------------------------------------------------------------------
//
TInt CAknsRlEffectPluginApplyGfx::Render( const TAknsRlRenderOpParam& aParam )
    {
    TRAPD( err, DoRenderL( aParam ) );
    return err;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginApplyGfx::DoRenderL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginApplyGfx::DoRenderL( const TAknsRlRenderOpParam& aParam )
    {
    TSize layoutSize = iContext->LayerSize();
    TInt aspect = KMaxTInt;
    if( layoutSize.iHeight != 0 )
        {
        aspect = (layoutSize.iWidth*256) / layoutSize.iHeight;
        }

    if( iMaxAspect >= 0 )
        {
        if( aspect >= iMaxAspect ) return;
        }
    if( iMinAspect >= 0 )
        {
        if( aspect <= iMinAspect ) return;
        }

    TAknsRlLayerData layerData;
    iContext->GetLayerDataL( layerData, aParam.iOutputLayerIndex,
        aParam.iOutputLayerStatus, ETrue );

    if( !iFilename ) User::Leave( KErrArgument );
    if( iBmpIndex<0 ) User::Leave( KErrArgument );

    TBool hasMask = ETrue;
    if( iMaskIndex<0 ) hasMask = EFalse;

    CFbsBitmap* bitmap = NULL;
    CFbsBitmap* mask = NULL;

    RAknsSrvSession* skinsrvsession = NULL;

    TBool altbmplocation = ETrue;
#ifdef AKNS_RL_TEST_FRAMEWORK
// Note: Pragma message causes CodeTest compiler to go berserk.
#pragma message("Compiling ApplyGfx WITHOUT filename check <----------------")
    // Don't compile filename check to test framework. This is required to make
    // ApplyGfx behave with unit tests.
#else

    if (iGenericImage)
        {
        hasMask = EFalse;
        }
    else
        {
        TInt res = (*iFilename).FindF(KAknsSrvPrivateLocation);
        if (res >= 0) // location found
            {
            altbmplocation = EFalse;
            }
        }
#endif

    skinsrvsession = iContext->GetSkinSrvSession();
    if (!skinsrvsession)
        {
        User::Leave(KErrArgument);
        }

    if( hasMask && !iGenericImage)
        {
        if (!altbmplocation)
            {
            // AknIconUtils will call CAknsFsHandleProvider::Finished when it is ready => deletes the object
            CAknsFsHandleProvider* provider = CAknsFsHandleProvider::NewL(skinsrvsession, *iFilename);
            AknIconUtils::CreateIconL(
                bitmap, mask, *provider, iBmpIndex, iMaskIndex );
            }
        else
            {
            AknIconUtils::CreateIconL(
                bitmap, mask, *iFilename, iBmpIndex, iMaskIndex );
            }

        CleanupStack::PushL( bitmap );
        CleanupStack::PushL( mask );
        if( !bitmap || !mask )
            {
            User::Leave( KErrNotFound );
            }
        }
    else if (!iGenericImage)
        {
        if (!altbmplocation)
            {
            // AknIconUtils will call CAknsFsHandleProvider::Finished when it is ready => deletes the object
            CAknsFsHandleProvider* provider = CAknsFsHandleProvider::NewL(skinsrvsession, *iFilename);
            bitmap = AknIconUtils::CreateIconL( *provider, iBmpIndex );
            }
        else
            {
            bitmap = AknIconUtils::CreateIconL( *iFilename, iBmpIndex );
            }

        CleanupStack::PushL( bitmap ); // bitmap
        if( !bitmap )
            {
            User::Leave( KErrNotFound );
            }
        }
    else // isGenericImage
        {
        TInt decodeErr = KErrNone;
        TRAP(decodeErr,
            skinsrvsession->DecodeWallpaperImageL(*iFilename, layoutSize, bitmap, mask));
        if (decodeErr == KErrNoMemory)
            {
            // ignore OOM errors, so that the phone will
            // not try to do this whole time
            return;
            }
        else
            {
            User::LeaveIfError(decodeErr);
            }

        if (!bitmap)
            {
            User::Leave( KErrNotFound );
            }
        CleanupStack::PushL(bitmap);
        if (mask)
            {
            hasMask = ETrue;
            CleanupStack::PushL(mask);
            }
        }

    TSize srcSize;
    TBool svg = AknIconUtils::IsMifIcon( bitmap );
    TBool svgIconDataPreserved = EFalse;
    if( svg && !iGenericImage)
        {
        svgIconDataPreserved = ETrue;
        AknIconUtils::PreserveIconData( bitmap );
        CleanupStack::PushL( TCleanupItem( DestroyPreservedIcon, bitmap ) );
        if( AknIconUtils::GetContentDimensions( bitmap, srcSize ) )
            {
            User::Leave( KErrUnknown );
            }
        }
    else
        {
        srcSize = bitmap->SizeInPixels();
        }
    TInt srcAspect = KMaxTInt;
    if( srcSize.iHeight )
        {
        srcAspect = (srcSize.iWidth<<16) / srcSize.iHeight;
        }

    TInt layoutAspect = KMaxTInt;
    if( layoutSize.iHeight )
        {
        layoutAspect = (layoutSize.iWidth<<16) / layoutSize.iHeight;
        }

    TRect imgRect;
    if( iTiled )
        {
        // Zero checks
        if( (iTilesX<1) || (iTilesY<1) ) {
            User::Leave( KErrArgument );
            }

        TSize tileSize(
            DivAndRoundUp( layoutSize.iWidth, iTilesX ),
            DivAndRoundUp( layoutSize.iHeight, iTilesY ) );

        if( iTileW>0 )
            {
            tileSize.iWidth = iTileW;
            iTilesX = DivAndRoundUp( layoutSize.iWidth, tileSize.iWidth );
            }

        if( iTileH>0 )
            {
            tileSize.iHeight = iTileH;
            iTilesY = DivAndRoundUp( layoutSize.iHeight, tileSize.iHeight );
            }
        AknIconUtils::ExcludeFromCache( bitmap );
        User::LeaveIfError(
            AknIconUtils::SetSize(
                bitmap, tileSize, EAspectRatioNotPreserved ) );

        imgRect = TRect( TPoint(0,0), tileSize );
        }
    else
        {
        // Disable tiling in drawing
        iTilesX = 1;
        iTilesY = 1;

        if( iScaleMode == KApplyGfxValueScaleModePreserveAspect )
            {
            if( srcAspect > layoutAspect )
                {
                if (!iGenericImage)
                    {
                    //28-Apr-2008 Modified by Ding Long
                    //according to Merila Sami suggestion.
                    //Comment out to speed up Screen Rotation.
                    //(Refer to defect AVAO-7D4BXY.)
                    //AknIconUtils::ExcludeFromCache( bitmap );
                    User::LeaveIfError(
                        AknIconUtils::SetSize(
                            bitmap, TSize(KMaxTInt, layoutSize.iHeight),
                            EAspectRatioPreservedAndUnusedSpaceRemoved ) );
                    }
                }
            else
                {
                if (!iGenericImage)
                    {
                    //28-Apr-2008 Modified by Ding Long
                    //according to Merila Sami suggestion.
                    //Comment out to speed up Screen Rotation.
                    //(Refer to defect AVAO-7D4BXY.)
                    //AknIconUtils::ExcludeFromCache( bitmap );
                    User::LeaveIfError(
                        AknIconUtils::SetSize(
                            bitmap, TSize(layoutSize.iWidth, KMaxTInt),
                            EAspectRatioPreservedAndUnusedSpaceRemoved ) );
                    }
                }
            TSize bmpSize = bitmap->SizeInPixels();
            imgRect = TRect( TPoint(
                (bmpSize.iWidth-layoutSize.iWidth)/2,
                (bmpSize.iHeight-layoutSize.iHeight)/2), layoutSize );
            }
        else if( iScaleMode == KApplyGfxValueScaleModeStretch )
            {
            if (!iGenericImage)
                {
                //28-Apr-2008 Modified by Ding Long
                //according to Merila Sami suggestion.
                //Comment out to speed up Screen Rotation.
                //(Refer to defect AVAO-7D4BXY.)
                //AknIconUtils::ExcludeFromCache( bitmap );
                User::LeaveIfError(
                    AknIconUtils::SetSize(
                        bitmap, layoutSize,
                        EAspectRatioNotPreserved ) );
                }
            imgRect = TRect( TPoint(0,0), layoutSize );
            }
        else
            {
            User::Leave( KErrNotSupported );
            }
        }

    // @TODO This does not do mask inversion for hard->soft.

    // Icon operations should be done by now
    if (!iGenericImage)
        {
        if ( svgIconDataPreserved )
            {
            svgIconDataPreserved = EFalse;
            CleanupStack::PopAndDestroy(); // DestroyPreservedIcon
            }
        }
    TPoint drawPoint( 0, 0 );
    TBool generatedMask = EFalse;
    for( TInt yTile=0; yTile<iTilesY; yTile++ )
        {
        drawPoint.iX = 0;
        if (iGenericImage)
            {
            if (bitmap->SizeInPixels().iWidth < layoutSize.iWidth)
                {
                drawPoint.iX = (layoutSize.iWidth / 2) - (bitmap->SizeInPixels().iWidth /2);
                if (!hasMask)
                    {
                    generatedMask = ETrue;
                    }
                }
            if (bitmap->SizeInPixels().iHeight < layoutSize.iHeight)
                {
                drawPoint.iY = (layoutSize.iHeight / 2) - (bitmap->SizeInPixels().iHeight /2);
                if (!hasMask)
                    {
                    generatedMask = ETrue;
                    }
                }
            }
        for( TInt xTile=0; xTile<iTilesX; xTile++ )
            {
            if( layerData.iRGBGc )
                {
                layerData.iRGBGc->SetBrushStyle(
                    CGraphicsContext::ENullBrush );
                }
            if( layerData.iAlphaGc )
                {
                layerData.iAlphaGc->SetBrushStyle(
                    CGraphicsContext::ENullBrush );
                }

            if( (aParam.iOutputLayerStatus==KAknsRlLayerRGBOnly) ||
                (aParam.iOutputLayerStatus==KAknsRlLayerRGBA) )
                {
                if ( layerData.iRGBGc )
                    {
                    layerData.iRGBGc->BitBlt( drawPoint, bitmap, imgRect );
                    }
                // When RGBOnly is queried alpha information is not filled ->
                // we need to check alphaGc exists.
                if (generatedMask && layerData.iAlphaGc)
                    {
                    layerData.iAlphaGc->SetBrushColor( KRgbBlack );
                    layerData.iAlphaGc->Clear();
                    layerData.iAlphaGc->SetBrushStyle(
                    CGraphicsContext::ESolidBrush );

                    layerData.iAlphaGc->SetPenColor(KRgbWhite);
                    layerData.iAlphaGc->SetPenStyle(CGraphicsContext::ESolidPen);
                    layerData.iAlphaGc->SetBrushColor( KRgbWhite );
                    TRect rect(drawPoint, bitmap->SizeInPixels());
                    layerData.iAlphaGc->DrawRect(rect);
                     layerData.iAlphaGc->SetBrushStyle(
                    CGraphicsContext::ENullBrush );
                    layerData.iAlphaGc->SetPenStyle(CGraphicsContext::ENullPen);
                    }
                }
            if( aParam.iOutputLayerStatus==KAknsRlLayerRGBA && hasMask)
                {
                layerData.iAlphaGc->BitBlt( drawPoint, mask, imgRect );
                }
            if( aParam.iOutputLayerStatus==KAknsRlLayerAlphaOnly )
                {
                // If there is no mask, draw bitmap to alpha channel
                CFbsBitmap* srcBitmap = bitmap;
                if( hasMask )
                    {
                    // ... otherwise, draw mask to alpha channel
                    srcBitmap = mask;
                    }
                layerData.iAlphaGc->BitBlt( drawPoint, srcBitmap, imgRect );
                }

            drawPoint.iX += imgRect.Size().iWidth;
            }

        drawPoint.iY += imgRect.Size().iHeight;
        }

    if( aParam.iOutputLayerStatus==KAknsRlLayerRGBA && !hasMask && !generatedMask )
        {
        // RGBA and no mask, clear with white
        layerData.iAlphaGc->SetBrushColor( KRgbWhite );
        layerData.iAlphaGc->Clear();
        }
    if ( svgIconDataPreserved )
        {
        CleanupStack::PopAndDestroy(); // DestroyPreservedIcon
        }

    if( hasMask )
        {
        CleanupStack::PopAndDestroy( mask );
        }
    CleanupStack::PopAndDestroy( bitmap );
    }

// End of File
