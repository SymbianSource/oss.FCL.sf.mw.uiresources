/*
* Copyright (c) 2002-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Drawing utility class.
*
*/


// INCLUDE FILES
#include "AknsCppPreface.h"

#include <coecntrl.h>
#include <w32std.h>
#include <AknStatuspaneUtils.h>
#include "layoutmetadata.cdl.h"
#include "AknsDrawUtils.h"

#include "AknsItemData.h"
#include <AknsSkinInstance.h>
#include <AknsControlContext.h>
#include "AknsBackgroundLayout.h"
#include <AknsImageAttributeData.h>
#include "AknsAppSkinInstance.h"
#include "AknsTemporaryBitmap.h"
#include "AknsScalabilityUtils.h"
#include <AknsLayeredBackgroundControlContext.h>
#include "AknsMaskedLayerBackgroundControlContext.h"
#include "AknsRlMasterLayout.h"
#include "AknsRlUtils.h"


#include "AknSkinsVariant.hrh"

#include "AknsDebug.h"

#ifdef RD_SLIDING_ANIMATION_EFFECTS
_LIT(KAknsDrawUtilsSLDisabled,"ds");
_LIT(KAknsDrawUtilsSLFromCBA ,"cba");
_LIT(KAknsDrawUtilsSLFromL,   "l");
_LIT(KAknsDrawUtilsSLFromTL,  "tl");
_LIT(KAknsDrawUtilsSLFromT,   "t");
_LIT(KAknsDrawUtilsSLFromTR,  "tr");
_LIT(KAknsDrawUtilsSLFromR,   "r");
_LIT(KAknsDrawUtilsSLFromBR,  "br");
_LIT(KAknsDrawUtilsSLFromB,   "b");
_LIT(KAknsDrawUtilsSLFromBl,  "bl");
_LIT(KAknsDrawUtilsSLRnd,     "rnd");
#endif
AKNS_UNDEFINED_METHOD(AknsDrawUtils::AknsDrawUtils)

// ============================= LOCAL FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// IsSinglePart
//
// Checks whether the given item is a single-part image (bitmap or masked bitmap)
//
// Returns: ETrue or EFalse
// -----------------------------------------------------------------------------
//
static TBool IsSinglePart(
    MAknsSkinInstance* aInstance, const TAknsItemID& aIID )
    {
    CAknsItemData* fdata = aInstance->GetCachedItemData(
        aIID, EAknsITBitmap );
    if( fdata )
        {
        if( fdata->Type()==EAknsITBitmap
            || fdata->Type()==EAknsITMaskedBitmap )
            {
            return ETrue;
            }
        }
    return EFalse;
    }

// -----------------------------------------------------------------------------
// RetrieveKnownBackgroundImage
//
// Retrieves background image item data that has a known item ID (if any)
//
// Returns: Pointer to cached background image, or NULL
//          if none found.
// -----------------------------------------------------------------------------
//
static CAknsImageItemData* RetrieveKnownBackgroundImage(
    MAknsSkinInstance* aInstance,
    const TAknsItemID& aIID, const TAknsBackground* aLayout = NULL )
    {
    if( !aInstance || aIID == KAknsIIDDefault || aIID == KAknsIIDNone )
        {
        return NULL;
        }

    TAknsItemID id = aIID;

    // special handling for main panes
    if (aIID == KAknsIIDQsnBgAreaMain ||
        aIID == KAknsIIDQsnBgAreaMainListGene ||
        aIID == KAknsIIDQsnBgAreaMainListSet ||
        aIID == KAknsIIDQsnBgAreaMainMessage)
        {
        if (AknStatuspaneUtils::FlatLayoutActive())
            {
            id = KAknsIIDQsnBgAreaMainFlat;
            }
        else if (AknStatuspaneUtils::SmallLayoutActive())
            {
            id = KAknsIIDQsnBgAreaMainSmall;
            }
        }

    // Special handling for popup centerpieces
    if( AknsRlUtils::IsPopupCenter( id )
        && IsSinglePart( aInstance, KAknsIIDQsnFrPopup ) )
        {
        // Frame exists and is not image table, return surrounding frame
        return static_cast<CAknsImageItemData*>(
            aInstance->GetCachedItemData( KAknsIIDQsnFrPopup, EAknsITImage ) );
        }

    CAknsItemData* idata = aInstance->GetCachedItemData( id ); //lint !e613 Always non-null

    if( idata && AknsUtils::IsDerivedType( EAknsITImage, idata->Type()) )
        {
        return static_cast<CAknsImageItemData*>(idata);
        }
    // Render only if...
    TBool doScalableRendering( EFalse );

    CAknsAppSkinInstance* appSkinInstance =
        static_cast<CAknsAppSkinInstance*>(aInstance);
    if( idata )
        {
        if( AknsUtils::IsDerivedType( EAknsITEffectQueue, idata->Type() ) )
            {
            // ... 1) data exists and is an effect queue or...
            doScalableRendering = ETrue;
            }
        else if( AknsUtils::IsDerivedType( EAknsITAnimation, idata->Type() ) )
            {
            CAknsAnimationItemData* adata =
                static_cast<CAknsAnimationItemData*>( idata );
            if( adata->Morphing() )
                {
                // ... 2) data exists and is a morphing animation element...
                doScalableRendering = ETrue;
                }
            }
        }
    else 
        {
            if( (appSkinInstance->MasterLayout()->GetParent(id) != KAknsIIDDefault) )
            {
            // ...or data does not exist and there is a (definite, but possibly
            // non-existing) parent.
            doScalableRendering = ETrue;
            }
        }

    if( doScalableRendering )
        {
        return AknsScalabilityUtils::ConvertToBitmap(appSkinInstance, id, aLayout);
        }

    return NULL;
    }

// -----------------------------------------------------------------------------
// RetrieveBackgroundImage
//
// Retrieves background image item data (if any)
//
// Returns: Pointer to cached background image, or NULL
//          if none found.
// -----------------------------------------------------------------------------
//
static CAknsImageItemData* RetrieveBackgroundImage(
    MAknsSkinInstance* aInstance,
    const TAknsBackground* aLayout, TAknsItemID& aIID )
    {
    aIID = aLayout ? aLayout->iImageID : KAknsIIDNone;
    return RetrieveKnownBackgroundImage( aInstance, aIID, aLayout );
    }

// -----------------------------------------------------------------------------
// RetrieveBackgroundLayout
//
// Retrieves pointer (not owned) to background layout.
//
// Returns: Pointer to background layout, or NULL
//          if none found.
// -----------------------------------------------------------------------------
//
static TAknsBackground* RetrieveBackgroundLayout(
    MAknsControlContext* aContext )
    {
    if( aContext )
        {
        return static_cast<TAknsBackground*>(
            aContext->SupplySkinObject( EAknsCCOBackground ) );
        }

    return NULL;
    }

// -----------------------------------------------------------------------------
// GetParentAbsoluteDelta
//
// Calculates position delta based on parent absolute layout.
// -----------------------------------------------------------------------------
//
static TPoint GetParentAbsoluteDelta(
    const TAknsBackground* aLayout,
    const CCoeControl* aControl )
    {
    TPoint p(0,0);

    if( aLayout && aLayout->iParentAbsolute && aControl )
        {
        TPoint cachedPos;
        if( AknsUtils::GetControlPosition( aControl, cachedPos ) == KErrNone )
            {
            p = cachedPos;
            }
        else
            {
            __ASSERT_DEBUG( aControl->DrawableWindow(),
                AKNS_DEBUG_PANIC(EAknsDPanicNoWindow) );

            // For release build, play it safe
            if( !aControl->DrawableWindow() )
                {
                return p;
                }

            p = aControl->PositionRelativeToScreen();
            }

        if( !aControl->OwnsWindow() )
            {
            p -= aControl->Position();
            }

        p -= aLayout->iParentPos;
        }

    return p;
    }

// -----------------------------------------------------------------------------
// DrawPartialCachedImage
//
// Draws the specified part of an image with layout.
//
// -----------------------------------------------------------------------------
//
static TBool DrawPartialCachedImage(
    MAknsSkinInstance* aSkin, CBitmapContext& aGc, const TRect& aTrgLayoutRect,
    const TRect& aTrgDrawRect, CAknsImageItemData* aImgData,
    const TAknsItemID& aIID, const TAknsImageAttributeData* aAttr,
    const TInt aDrawParam )
    {
    TRect trgLayoutRect( aTrgLayoutRect );

    // Adjust "faked" centerpiece region
    if( AknsRlUtils::IsPopupCenter(aIID)
        && IsSinglePart( aSkin, KAknsIIDQsnFrPopup ) )
        {
        TSize tl, br;
        AknsRlUtils::GetPopupFrameDimensions( tl, br );

        trgLayoutRect.iTl -= tl;
        trgLayoutRect.iBr += br;
        }

    return AknsScalabilityUtils::DrawPartialCachedImage( aSkin, aGc, trgLayoutRect,
        aTrgDrawRect, aImgData, aIID, aAttr, aDrawParam );
    }

static TBool IsBackgroundItem( const TAknsItemID& aIID,CAknsAppSkinInstance* aSkin )
    {
    TBool isbg = EFalse;
     
    if( aIID.iMajor == EAknsMajorSkin)
        {
        switch (aIID.iMinor)
            {
            case EAknsMinorQsnBgScreen:
            case EAknsMinorQsnBgScreenIdle:
            case EAknsMinorQsnBgScreenMp:
            case EAknsMinorQsnBgAreaMain:
            case EAknsMinorQsnBgAreaMainAppsGrid:
            case EAknsMinorQsnBgAreaMainListGene:
            case EAknsMinorQsnBgAreaMainListSet:
            case EAknsMinorQsnBgAreaMainMessage:
            case EAknsMinorQsnBgAreaMainHigh:
            case EAknsMinorQsnBgAreaMainCalc:
            case EAknsMinorQsnBgAreaMainPinb:
            case EAknsMinorQsnBgAreaMainQdial:
            case EAknsMinorQsnBgAreaMainMp:
            case EAknsMinorQsnBgAreaMainFlat:
            case EAknsMinorQsnBgAreaMainSmall:
            case EAknsMinorQsnBgAreaMainIdle:
            case EAknsMinorQsnBgAreaMainIdleDimmed:
            case EAknsMinorQsnBgAreaStatus:
            case EAknsMinorQsnBgAreaStatusIdle:
            case EAknsMinorQsnBgAreaStaconRt:
            case EAknsMinorQsnBgAreaStaconLt:
            case EAknsMinorQsnBgAreaStaconRb:
            case EAknsMinorQsnBgAreaStaconLb:
            case EAknsMinorQsnBgAreaStaconRtIdle:
            case EAknsMinorQsnBgAreaStaconLtIdle:
            case EAknsMinorQsnBgAreaStaconRbIdle:
            case EAknsMinorQsnBgAreaStaconLbIdle:
            case EAknsMinorQsnBgAreaControl:
            case EAknsMinorQsnBgAreaControlPopup:
            case EAknsMinorQsnBgAreaControlMp:
            case EAknsMinorQsnBgAreaControlIdle:
            case EAknsMinorQsnBgColumn0:
            case EAknsMinorQsnBgColumnA:
            case EAknsMinorQsnBgColumnAB:
            case EAknsMinorQsnBgColumnC0:
            case EAknsMinorQsnBgColumnCA:
            case EAknsMinorQsnBgColumnCAB:
            case EAknsMinorQsnBgSliceList0:
            case EAknsMinorQsnBgSliceListA:
            case EAknsMinorQsnBgSliceListAB:
                isbg = ETrue;
                break;
            case EAknsMinorWallpaper:
                {
                if ( aSkin && !aSkin->WallpaperDefined() )
                    {
                    isbg = ETrue;
                    }
                }
                break;
            default:
                break;
            }
        }
     else if (aIID.iMajor == EAknsMajorAvkon)
        {
        switch (aIID.iMinor)
            {
            case EAknsMinorQsnBgNavipaneSolid:
            case EAknsMinorQsnBgNavipaneWipe:
            case EAknsMinorQsnBgNavipaneSolidIdle:
            case EAknsMinorQsnBgNavipaneWipeIdle:
                isbg = ETrue;
            default:
                break;
            }
        }
    return isbg;
    }


// -----------------------------------------------------------------------------
// Blit
//
// Blits given image to gc.
//
// -----------------------------------------------------------------------------
//
inline static TBool Blit(
    MAknsSkinInstance* aSkin, CBitmapContext& aGc, const TRect& aTrgRect,
    CAknsImageItemData* aImgData, const TAknsItemID& aIID,
    const TAknsBackground* aLayout, const TPoint& aPADelta,
    const TInt aDrawParam )
    {
    CAknsAppSkinInstance* appInstance = 
        static_cast<CAknsAppSkinInstance*>(aSkin);
        
    if ( IsBackgroundItem( aIID,appInstance ) && 
            appInstance && appInstance->AnimBackgroundState() )
        {
        if( (aDrawParam&KAknsDrawParamPrepareOnly) )
            {
            return ETrue;
            }        
        
        TRgb color = KRgbWhite;
        color.SetAlpha(0x00);
        aGc.SetPenColor(color);
        aGc.SetBrushColor(color);
        aGc.SetPenStyle(CGraphicsContext::ESolidPen);
        aGc.SetBrushStyle(CGraphicsContext::ESolidBrush);
        aGc.SetDrawMode(CGraphicsContext::EDrawModeWriteAlpha);
        TRect layoutRect( aTrgRect );
        if( aLayout )
            {
            layoutRect = aLayout->iRect;
            }
        layoutRect.Move( -aPADelta );

        TRect drawRect = aTrgRect;
        drawRect.Intersection( layoutRect );

        aGc.Clear(drawRect);
        return ETrue;
        }

    TRect layoutRect( aTrgRect );

    const TAknsImageAttributeData* attr = NULL;

    if( aLayout )
        {
        layoutRect = aLayout->iRect;

        if( aLayout->iAttr.iAttributes != EAknsImageAttributeNone )
            {
            attr = &(aLayout->iAttr);
            }
        }

    layoutRect.Move( -aPADelta );

    TRect drawRect(aTrgRect);
    drawRect.Intersection( layoutRect );

    return DrawPartialCachedImage( aSkin, aGc, layoutRect, drawRect,
        aImgData, aIID, attr, aDrawParam );
    }

// -----------------------------------------------------------------------------
// BlitAndClear
//
// Blits given image to gc and draws the area that is not
// covered by the bitmap.
//
// -----------------------------------------------------------------------------
//
inline static TBool BlitAndClear(
    MAknsSkinInstance* aSkin, CBitmapContext& aGc, const TRect& aTrgRect,
    CAknsImageItemData* aImgData, const TAknsItemID& aIID,
    const TAknsBackground* aLayout, const TPoint& aPADelta,
    const TInt aDrawParam )
    {
    CAknsAppSkinInstance* appInstance = 
            static_cast<CAknsAppSkinInstance*>(aSkin);
            
    if ( IsBackgroundItem( aIID,appInstance ) && 
            appInstance && appInstance->AnimBackgroundState() )
        {
        return Blit( aSkin, aGc, aTrgRect, aImgData, aIID, aLayout, aPADelta, aDrawParam );
        }
    
    if( !(aDrawParam & KAknsDrawParamPrepareOnly) )
        {
        TAknsItemType type = aImgData->Type();
        // don't clear if the item is not a masked one
        if( AknsUtils::IsDerivedType( EAknsITMaskedBitmap, type )  
                && !(aDrawParam & KAknsDrawParamNoClearUnderImage) )
            {
            TRect layoutRect( aTrgRect );
            if( aLayout )
                {
                layoutRect = aLayout->iRect;
                }
            layoutRect.Move( -aPADelta );

            TRect drawRect(aTrgRect);
            drawRect.Intersection( layoutRect );

            aGc.DrawRect( drawRect );
            }
        }
    return Blit( aSkin, aGc, aTrgRect, aImgData, aIID, aLayout, aPADelta, aDrawParam );
    }

// -----------------------------------------------------------------------------
// CheckAndDrawCachedImage
//
// -----------------------------------------------------------------------------
//
static TBool CheckAndDrawCachedImage( MAknsSkinInstance* aSkin,
    CBitmapContext& aGc, const TRect& aRect, const TAknsItemID& aIID,
    const TInt aDrawParam )
    {
    // Basic consistency checks
    if( !aSkin )
        {
        return EFalse;
        }

    CAknsItemData* data = aSkin->GetCachedItemData( aIID );
    if( !data )
        {
        return EFalse;
        }

    if( !AknsUtils::IsDerivedType( EAknsITImage, data->Type() ) )
        {
        return EFalse;
        }

    return DrawPartialCachedImage( aSkin, aGc, aRect, aRect,
        static_cast<CAknsImageItemData*>(data), aIID,
        NULL, aDrawParam );
    }

// -----------------------------------------------------------------------------
// GetParentContext
//
// -----------------------------------------------------------------------------
//
static MAknsControlContext* GetParentContext( MAknsControlContext* aContext )
    {
    if( aContext )
        {
        return static_cast<MAknsControlContext*>(
            aContext->SupplySkinObject( EAknsCCOParentContext ) );
        }
    return NULL;
    }

// -----------------------------------------------------------------------------
// CheckAndDrawFrame
//
// -----------------------------------------------------------------------------
//
static TBool CheckAndDrawFrame( MAknsSkinInstance* aInstance,
    CBitmapContext& aGc, const TRect& aOuterRect, const TRect& aInnerRect,
    const TAknsItemID& aFrameID, const TAknsItemID& aCenterID,
    const TInt aDrawParam )
    {
    if( !aInstance )
        {
        return EFalse;
        }
    
    if( !(aDrawParam & KAknsDrawParamPrepareOnly) )
        {
        // Prepare before drawing
        CheckAndDrawFrame( aInstance, aGc, aOuterRect, aInnerRect,
            aFrameID, aCenterID, aDrawParam|KAknsDrawParamPrepareOnly );
        }

    CAknsImageItemData* rawData = static_cast<CAknsImageItemData*>(
        aInstance->GetCachedItemData( aFrameID, EAknsITImage ) );
    if( !rawData )
        {
        return EFalse;
        }

    if (!(aDrawParam & KAknsDrawParamPrepareOnly))
        {
        aGc.SetPenStyle(CGraphicsContext::ENullPen);
        aGc.SetBrushStyle(CGraphicsContext::ENullBrush);
        }

    TBool retVal = EFalse;

    if( AknsUtils::IsDerivedType( EAknsITImageTable, rawData->Type() ) )
        {
        CAknsImageTableItemData* data =
            static_cast<CAknsImageTableItemData*>(rawData);
        if( data->NumberOfImages() != EAknsFrameElementsN )
            {
            return EFalse;
            }

        // Corners
        retVal |= CheckAndDrawCachedImage( aInstance, aGc,
            TRect( aOuterRect.iTl, aInnerRect.iTl ),
            data->ImageIID( EAknsFrameIndexTl ), aDrawParam );
        retVal |= CheckAndDrawCachedImage( aInstance, aGc,
            TRect( aInnerRect.iBr.iX, aOuterRect.iTl.iY,
            aOuterRect.iBr.iX, aInnerRect.iTl.iY ),
            data->ImageIID( EAknsFrameIndexTr ), aDrawParam );
        retVal |= CheckAndDrawCachedImage( aInstance, aGc,
            TRect( aOuterRect.iTl.iX, aInnerRect.iBr.iY,
            aInnerRect.iTl.iX, aOuterRect.iBr.iY ),
            data->ImageIID( EAknsFrameIndexBl ), aDrawParam );
        retVal |= CheckAndDrawCachedImage( aInstance, aGc,
            TRect( aInnerRect.iBr, aOuterRect.iBr ),
            data->ImageIID( EAknsFrameIndexBr ), aDrawParam );

        // Sides
        TRect sideRect( aInnerRect.iTl.iX, aOuterRect.iTl.iY,
            aInnerRect.iBr.iX, aInnerRect.iTl.iY );
        retVal |= CheckAndDrawCachedImage( aInstance, aGc, sideRect,
            data->ImageIID( EAknsFrameIndexT ), aDrawParam );
        sideRect.SetRect( aInnerRect.iTl.iX, aInnerRect.iBr.iY,
            aInnerRect.iBr.iX, aOuterRect.iBr.iY );
        retVal |= CheckAndDrawCachedImage( aInstance, aGc, sideRect,
            data->ImageIID( EAknsFrameIndexB ), aDrawParam );
        sideRect.SetRect( aOuterRect.iTl.iX, aInnerRect.iTl.iY,
            aInnerRect.iTl.iX, aInnerRect.iBr.iY );
        retVal |= CheckAndDrawCachedImage( aInstance, aGc, sideRect,
            data->ImageIID( EAknsFrameIndexL ), aDrawParam );
        sideRect.SetRect( aInnerRect.iBr.iX, aInnerRect.iTl.iY,
            aOuterRect.iBr.iX, aInnerRect.iBr.iY );
        retVal |= CheckAndDrawCachedImage( aInstance, aGc, sideRect,
            data->ImageIID( EAknsFrameIndexR ), aDrawParam );

        // Center
        //lint --e{961} Valid logic
        if( aCenterID == KAknsIIDDefault )
            {
            retVal |= CheckAndDrawCachedImage( aInstance, aGc, aInnerRect,
                data->ImageIID( EAknsFrameIndexCenter ), aDrawParam );
            }
        else if( aCenterID != KAknsIIDNone )
            {
            retVal |= CheckAndDrawCachedImage( aInstance, aGc, aInnerRect,
                aCenterID, aDrawParam );
            }
        }
    else if( AknsUtils::IsDerivedType( EAknsITBitmap, rawData->Type() ) )
        {
        // Center only
        retVal |= CheckAndDrawCachedImage( aInstance, aGc, aOuterRect,
            aFrameID, aDrawParam );
        }

    if (!(aDrawParam & KAknsDrawParamPrepareOnly))
        {
        aGc.SetPenStyle(CGraphicsContext::ESolidPen); //lint !e961 Intentional
        aGc.SetBrushStyle(CGraphicsContext::ENullBrush);
        }
    return retVal;
    }


// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// AknsDrawUtils::ControlContext()
// (commented in the header).
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsDrawUtils::ControlContext)
EXPORT_C MAknsControlContext* AknsDrawUtils::ControlContext(
    const MObjectProvider* aMop )
    {
    MAknsControlContext* cc = NULL;
    if( aMop )
        {
        const_cast<MObjectProvider*>(aMop)->MopGetObject( cc );
        }

    return cc;
    }

// -----------------------------------------------------------------------------
// AknsDrawUtils::ControlContextOfParent()
// (commented in the header).
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsDrawUtils::ControlContextOfParent)
EXPORT_C MAknsControlContext* AknsDrawUtils::ControlContextOfParent(
    const CCoeControl* aControl )
    {
    MObjectProvider* parentMop = NULL;
    if( aControl )
        {
        // Bypass private qualifier of iMopParent member of CCoeControl
        const TUint8* mopParentPointerLocation =
            reinterpret_cast<const TUint8*>(aControl);
        mopParentPointerLocation += sizeof( CCoeControl );
        mopParentPointerLocation -= sizeof( MObjectProvider* );
        TInt mopParentPointer =
            *reinterpret_cast<const TInt*>( mopParentPointerLocation ); //lint !e826 Intentionally ugly
        // Check alignment
        __ASSERT_DEBUG( !(mopParentPointer&3),
            AKNS_DEBUG_PANIC(EAknsDPanicBadAlignment));
        parentMop = reinterpret_cast<MObjectProvider*>(
            mopParentPointer );
        }

    return ControlContext( parentMop );
    }

// -----------------------------------------------------------------------------
// AknsDrawUtils::Background()
// (commented in the header).
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsDrawUtils::Background)
EXPORT_C TBool AknsDrawUtils::Background( MAknsSkinInstance* aInstance,
    MAknsControlContext* aContext, CWindowGc& aGc, const TRect& aRect )
    {
    return Background( aInstance, aContext, NULL, aGc, aRect );
    }

// -----------------------------------------------------------------------------
// AknsDrawUtils::Background()
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TBool AknsDrawUtils::Background( MAknsSkinInstance* aInstance,
    MAknsControlContext* aContext, const CCoeControl* aControl,
    CWindowGc& aGc, const TRect& aRect )
    {
    return Background( aInstance, aContext, aControl, aGc, aRect,
        KAknsDrawParamDefault );
    }

// -----------------------------------------------------------------------------
// AknsDrawUtils::Background()
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TBool AknsDrawUtils::Background( MAknsSkinInstance* aInstance,
    MAknsControlContext* aContext, const CCoeControl* aControl,
    CWindowGc& aGc, const TRect& aRect, const TInt aDrawParam )
    {
    return DrawBackground( aInstance, aContext, aControl,
        aGc, aRect.iTl, aRect, aDrawParam );
    }

// -----------------------------------------------------------------------------
// AknsDrawUtils::DrawBackground()
// (commented in the header).
// -----------------------------------------------------------------------------
EXPORT_C TBool AknsDrawUtils::DrawBackground( MAknsSkinInstance* aInstance,
    MAknsControlContext* aContext, const CCoeControl* aControl,
    CBitmapContext& aGc, const TPoint& aDstPos,
    const TRect& aControlRect, const TInt aDrawParam )
    {
    TInt drawParam = aDrawParam;
    TInt originalParam = aDrawParam;
    TBool retVal = EFalse;
    TBool blitFailed = EFalse;
    TBool blit = EFalse;
    TBool blitAttempted = EFalse;

    if ( !&aGc )
        {
        return retVal;
        }

    MAknsControlContext* parentContext = GetParentContext( aContext );
    if( parentContext )
        {
        retVal = DrawBackground( aInstance, parentContext, aControl, aGc,
            aDstPos, aControlRect, aDrawParam );
        drawParam |= KAknsDrawParamNoClearUnderImage;
        }
    else if( drawParam & KAknsDrawParamBottomLevelRGBOnly )
        {
        drawParam |= KAknsDrawParamRGBOnly;
        }

    originalParam = drawParam;

    if( aContext )
        {
        aContext->UpdateContext();
        }

    TAknsBackground* bgLayout = RetrieveBackgroundLayout( aContext );

    TAknsItemID imgIID( KAknsIIDNone );
    CAknsImageItemData* imgData = RetrieveBackgroundImage(
        aInstance, bgLayout, imgIID );

    // chained background
    if (imgData && imgData->ParentIID() != KAknsIIDNone)
        {
        TAknsItemID parentiid = imgData->ParentIID();
        TRect parentDrawRect = imgData->DrawRect();

        imgData = RetrieveKnownBackgroundImage(
            aInstance, parentiid );
        if (imgData)
            {
            imgData->SetDrawRect(parentDrawRect);
            drawParam |= KAknsDrawParamChained ;
            }
        }

    TPoint paDelta = GetParentAbsoluteDelta( bgLayout, aControl );

    TRect drawRect = aControlRect;
    drawRect.Move( aDstPos-aControlRect.iTl );
    paDelta += aControlRect.iTl-aDstPos;

    if (!(aDrawParam & KAknsDrawParamPrepareOnly))
        {
        aGc.SetPenStyle(CGraphicsContext::ENullPen);
        aGc.SetBrushStyle(CGraphicsContext::ESolidBrush);
        }

    if ( !(aDrawParam & KAknsDrawParamIgnoreLayerMask))
        {
        if( imgData )
            {
            blitAttempted = ETrue;
            if( (drawParam&KAknsDrawParamNoClearUnderImage)==0 )
                {
                blit = BlitAndClear( aInstance, aGc, drawRect,
                    imgData, imgIID, bgLayout, paDelta, drawParam );
                }
            else
                {
                blit = Blit( aInstance, aGc, drawRect,
                    imgData, imgIID, bgLayout, paDelta, drawParam );
                }
            if ( !blit )
                {
                blitFailed = ETrue;
                }
            }
        else
            {
            if( !(drawParam&KAknsDrawParamNoClearUnderImage) &&
                !(drawParam&KAknsDrawParamPrepareOnly) )
                {
                // Clear only if permitted
                aGc.DrawRect( drawRect );
                }
            }
        }

    if( bgLayout )
        {
        if (!(aDrawParam & KAknsDrawParamIgnoreLayerMask) && aContext->IsCompatibleWithType(EAknsControlContextTypeMasked))
            {
            CAknsMaskedLayerBackgroundControlContext* layeredCxt = static_cast<CAknsMaskedLayerBackgroundControlContext*>(aContext);
            if (layeredCxt->iOffScreenBmp)
                {
                CAknsMaskedBitmapItemData* maskedImgData = NULL;
                TRAPD( err, maskedImgData = CAknsMaskedBitmapItemData::NewL() );
                if ( err != KErrNone )
                    {
                    return EFalse;
                    }
                maskedImgData->SetBitmap(layeredCxt->iOffScreenBmp);
                maskedImgData->SetMask(layeredCxt->iLayerMask);

                TAknsBackground* childLayout = bgLayout->iNext;

                blitAttempted = ETrue;
                blit = Blit( aInstance, aGc, drawRect, maskedImgData,
                    KAknsIIDNone, childLayout, paDelta, drawParam );
                if ( !blit )
                    {
                    blitFailed = ETrue;
                    }

                maskedImgData->SetBitmap(NULL);
                maskedImgData->SetMask(NULL);
                delete maskedImgData;
                if (!(aDrawParam & KAknsDrawParamPrepareOnly))
                    {
                    aGc.SetPenStyle(CGraphicsContext::ESolidPen);
                    aGc.SetBrushStyle(CGraphicsContext::ENullBrush);
                    }
                retVal = !blitFailed;
                return retVal;
                }
            }

        if (!aContext->IsCompatibleWithType(EAknsControlContextTypeFrame))
            {
            // special handling for frames
            drawParam|=KAknsDrawParamNoClearUnderImage;
            originalParam|=KAknsDrawParamNoClearUnderImage;
            }
        TAknsBackground* nextLayout = bgLayout->iNext;
        while( nextLayout &&
            ((drawParam & KAknsDrawParamLimitToFirstLevel) == 0) )
            {
            imgData = RetrieveKnownBackgroundImage( aInstance,
                nextLayout->iImageID );
            if (imgData && imgData->ParentIID() != KAknsIIDNone)
                {
                TAknsItemID parentiid = imgData->ParentIID();
                TRect parentDrawRect = imgData->DrawRect();

                imgData = RetrieveKnownBackgroundImage(
                    aInstance, parentiid );
                if (imgData)
                    {
                    imgData->SetDrawRect(parentDrawRect);
                    drawParam |= KAknsDrawParamChained ;
                    }
                }
            else
                {
                drawParam=originalParam;
                }
            if( imgData )
                {
                blitAttempted = ETrue;
                blit = BlitAndClear( aInstance, aGc, drawRect, imgData,
                    nextLayout->iImageID, nextLayout, paDelta, drawParam );
                if ( !blit )
                    {
                    blitFailed = ETrue;
                    }
                }
            nextLayout = nextLayout->iNext;
            }
        }

    if (!(aDrawParam & KAknsDrawParamPrepareOnly))
        {
        aGc.SetPenStyle(CGraphicsContext::ESolidPen);
        aGc.SetBrushStyle(CGraphicsContext::ENullBrush);
        }

    // If Blit failed, or was not even attempted => return EFalse
    if ( blitFailed )
        {
        retVal = EFalse;
        }
    else if ( !retVal )
        {
        retVal = blitAttempted;
        }

    return retVal;
    }

// -----------------------------------------------------------------------------
// AknsDrawUtils::BackgroundBetweenRects()
// (commented in the header).
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsDrawUtils::BackgroundBetweenRects)
EXPORT_C TBool AknsDrawUtils::BackgroundBetweenRects(
    MAknsSkinInstance* aInstance,
    MAknsControlContext* aContext, CWindowGc& aGc,
    const TRect& aOuterRect,const TRect& aInnerRect )
    {
    return BackgroundBetweenRects( aInstance, aContext, NULL, aGc, aOuterRect,
        aInnerRect );
    }

// -----------------------------------------------------------------------------
// AknsDrawUtils::BackgroundBetweenRects()
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TBool AknsDrawUtils::BackgroundBetweenRects(
    MAknsSkinInstance* aInstance, MAknsControlContext* aContext,
    const CCoeControl* aControl, CWindowGc& aGc,
    const TRect& aOuterRect,const TRect& aInnerRect )
    {
    return BackgroundBetweenRects( aInstance, aContext, aControl, aGc,
        aOuterRect, aInnerRect, KAknsDrawParamDefault );
    }

// -----------------------------------------------------------------------------
// AknsDrawUtils::BackgroundBetweenRects()
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TBool AknsDrawUtils::BackgroundBetweenRects(
    MAknsSkinInstance* aInstance, MAknsControlContext* aContext,
    const CCoeControl* aControl, CWindowGc& aGc,
    const TRect& aOuterRect,const TRect& aInnerRect, const TInt aDrawParam )
    {
    TInt drawParam = aDrawParam;
    TInt originalParam = aDrawParam;
    TBool retVal = EFalse;
    TBool blitFailed = EFalse;
    TBool blitAttempted = EFalse;

    if ( !&aGc )
        {
        return retVal;
        }

    MAknsControlContext* parentContext = GetParentContext( aContext );
    if( parentContext )
        {
        retVal = BackgroundBetweenRects( aInstance, parentContext, aControl, aGc,
            aOuterRect, aInnerRect, aDrawParam );
        drawParam |= KAknsDrawParamNoClearUnderImage;
        }
    else if( drawParam & KAknsDrawParamBottomLevelRGBOnly )
        {
        drawParam |= KAknsDrawParamRGBOnly;
        }

    originalParam = drawParam;

    if( aContext )
        {
        aContext->UpdateContext();
        }

    TAknsBackground* bgLayout = RetrieveBackgroundLayout( aContext );

    TAknsItemID imgIID( KAknsIIDNone );
    CAknsImageItemData* imgData = RetrieveBackgroundImage(
        aInstance, bgLayout, imgIID );

    // chained background
    if (imgData && imgData->ParentIID() != KAknsIIDNone)
        {
        TAknsItemID parentiid = imgData->ParentIID();
        TRect parentDrawRect = imgData->DrawRect();

        imgData = RetrieveKnownBackgroundImage(
            aInstance, parentiid );
        if (imgData)
            {
            imgData->SetDrawRect(parentDrawRect);
            drawParam |= KAknsDrawParamChained ;
            }
        }

    TPoint paDelta = GetParentAbsoluteDelta( bgLayout, aControl );

    if (!(aDrawParam & KAknsDrawParamPrepareOnly))
        {
        aGc.SetPenStyle(CGraphicsContext::ENullPen);
        aGc.SetBrushStyle(CGraphicsContext::ESolidBrush);
        }

    TBool blit = EFalse;
    //Rect for frame border
    TRect rlist[4];
    rlist[0] = aOuterRect;
    rlist[0].iBr.iY=aInnerRect.iTl.iY;
    rlist[1] = rlist[0];
    rlist[1].iBr.iY=aOuterRect.iBr.iY;
    rlist[1].iTl.iY=aInnerRect.iBr.iY;
    rlist[2] = aInnerRect;
    rlist[2].iTl.iX=aOuterRect.iTl.iX;
    rlist[2].iBr.iX=aInnerRect.iTl.iX;
    rlist[3] = rlist[2];
    rlist[3].iTl.iX=aInnerRect.iBr.iX;
    rlist[3].iBr.iX=aOuterRect.iBr.iX;
    if( imgData )
        {        
        blitAttempted = ETrue;
        for ( TInt i=0; i <4 ; i++ )
            {
            if( (drawParam & KAknsDrawParamNoClearUnderImage) == 0 )
                {            
                blit = BlitAndClear( aInstance, aGc, rlist[i],
                        imgData, imgIID, bgLayout, paDelta, drawParam );
                }
            else
                {
                blit = Blit( aInstance, aGc, rlist[i],
                        imgData, imgIID, bgLayout, paDelta, drawParam );
                }
            if ( !blit )
                {
                blitFailed = ETrue;
                }
            }
        }
    else
        {
        if( !(drawParam & KAknsDrawParamNoClearUnderImage) &&
            !(drawParam & KAknsDrawParamPrepareOnly) )
            {
            // Clear only if permitted
            for (TInt i=0; i<4; i++)
                {
                aGc.DrawRect(rlist[i]);
                }
            }
        }

    if( bgLayout )
        {
        TAknsBackground* nextLayout = bgLayout->iNext;
        while( nextLayout && (drawParam!=KAknsDrawParamLimitToFirstLevel) )
            {
            imgData = RetrieveKnownBackgroundImage( aInstance,
                nextLayout->iImageID );
            if (imgData && imgData->ParentIID() != KAknsIIDNone)
                {
                TAknsItemID parentiid = imgData->ParentIID();
                TRect parentDrawRect = imgData->DrawRect();

                imgData = RetrieveKnownBackgroundImage(
                aInstance, parentiid );
                if (imgData)
                    {
                    imgData->SetDrawRect(parentDrawRect);
                    drawParam |= KAknsDrawParamChained;
                    }
                }
            else
                {
                drawParam=originalParam;
                }

            if( imgData )
                {                
                blitAttempted = ETrue;
                for ( TInt i=0; i < 4; i++ )
                    {
                    blit = Blit( aInstance, aGc, rlist[i], imgData,
                            nextLayout->iImageID, nextLayout, paDelta, drawParam );
                    if ( !blit )
                        {
                        blitFailed = ETrue;
                        }
                    }
                }

            nextLayout = nextLayout->iNext;
            }
        }

    if (!(aDrawParam & KAknsDrawParamPrepareOnly))
        {
        aGc.SetPenStyle(CGraphicsContext::ESolidPen);
        aGc.SetBrushStyle(CGraphicsContext::ENullBrush);
        }

    if ( blitFailed )
        {
        retVal = EFalse;
        }
    else if ( !retVal )
        {
        retVal = blitAttempted;
        }

    return retVal;
    }

// -----------------------------------------------------------------------------
// AknsDrawUtils::HasBitmapBackground
// (commented in the header).
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsDrawUtils::HasBitmapBackground)
EXPORT_C TBool AknsDrawUtils::HasBitmapBackground(
    MAknsSkinInstance* /*aInstance*/, MAknsControlContext* /*aContext*/ )
    {
    return ETrue;
    }

// -----------------------------------------------------------------------------
// AknsDrawUtils::DrawCachedImage
// (commented in the header).
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsDrawUtils::DrawCachedImage)
EXPORT_C void AknsDrawUtils::DrawCachedImage( MAknsSkinInstance* aInstance,
    CWindowGc& aGc, const TRect& aRect, const TAknsItemID& aID )
    {
    // Ignore return value
    CheckAndDrawCachedImage( aInstance, aGc, aRect, aID, KAknsDrawParamDefault );
    }

// -----------------------------------------------------------------------------
// AknsDrawUtils::DrawCachedImage
// (commented in the header).
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsDrawUtils::DrawCachedImage)
EXPORT_C void AknsDrawUtils::DrawCachedImage( MAknsSkinInstance* aInstance,
    CFbsBitGc& aGc, const TRect& aRect, const TAknsItemID& aID )
    {
    // Ignore return value
    CheckAndDrawCachedImage( aInstance, aGc, aRect, aID, KAknsDrawParamDefault );
    }

// -----------------------------------------------------------------------------
// AknsDrawUtils::PrepareFrame
// (commented in the header).
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsDrawUtils::PrepareFrame)
EXPORT_C TBool AknsDrawUtils::PrepareFrame( MAknsSkinInstance* aInstance,
    const TRect& aOuterRect, const TRect& aInnerRect,
    const TAknsItemID& aFrameID, const TAknsItemID& aCenterID)
    {
    CBitmapContext* gc = NULL;
    // coverity[var_deref_model]
    return CheckAndDrawFrame( aInstance, *gc, aOuterRect, aInnerRect,
        aFrameID, aCenterID, KAknsDrawParamPrepareOnly );
    }

// -----------------------------------------------------------------------------
// AknsDrawUtils::DrawFrame
// (commented in the header).
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsDrawUtils::DrawFrame)
EXPORT_C TBool AknsDrawUtils::DrawFrame( MAknsSkinInstance* aInstance,
    CWindowGc& aGc, const TRect& aOuterRect, const TRect& aInnerRect,
    const TAknsItemID& aFrameID, const TAknsItemID& aCenterID )
    {
    return CheckAndDrawFrame( aInstance, aGc, aOuterRect, aInnerRect,
        aFrameID, aCenterID, KAknsDrawParamDefault );
    }

// -----------------------------------------------------------------------------
// AknsDrawUtils::DrawFrame
// (commented in the header).
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsDrawUtils::DrawFrame)
EXPORT_C TBool AknsDrawUtils::DrawFrame( MAknsSkinInstance* aInstance,
    CFbsBitGc& aGc, const TRect& aOuterRect, const TRect& aInnerRect,
    const TAknsItemID& aFrameID, const TAknsItemID& aCenterID,
    const TInt aDrawParam )
    {
    return CheckAndDrawFrame( aInstance, aGc, aOuterRect, aInnerRect,
        aFrameID, aCenterID, aDrawParam );
    }

// -----------------------------------------------------------------------------
// AknsDrawUtils::DrawFrame
// (commented in the header).
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsDrawUtils::DrawFrame)
EXPORT_C TBool AknsDrawUtils::DrawFrame( MAknsSkinInstance* aInstance,
    CFbsBitGc& aGc, const TRect& aOuterRect, const TRect& aInnerRect,
    const TAknsItemID& aFrameID, const TAknsItemID& aCenterID )
    {
    return CheckAndDrawFrame( aInstance, aGc, aOuterRect, aInnerRect,
        aFrameID, aCenterID, KAknsDrawParamDefault );
    }

// -----------------------------------------------------------------------------
// AknsDrawUtils::DrawFramePart
// (commented in the header).
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsDrawUtils::DrawFramePart)
EXPORT_C TBool AknsDrawUtils::DrawFramePart( MAknsSkinInstance* aInstance,
    CWindowGc& aGc, const TRect& aRect, const TAknsItemID& aFrameID,
    const TAknsFrameElementIndex aFrameElement )
    {
    if( !aInstance )
        {
        return EFalse;
        }

    CAknsImageTableItemData* data = static_cast<CAknsImageTableItemData*>(
        aInstance->GetCachedItemData( aFrameID, EAknsITImageTable ) );
    if( data && (data->NumberOfImages()==EAknsFrameElementsN) )
        {
        aGc.SetPenStyle(CGraphicsContext::ENullPen);
        aGc.SetBrushStyle(CGraphicsContext::ESolidBrush);

        TBool retVal = CheckAndDrawCachedImage( aInstance, aGc, aRect,
            data->ImageIID( aFrameElement ), KAknsDrawParamDefault );

        aGc.SetPenStyle(CGraphicsContext::ESolidPen);
        aGc.SetBrushStyle(CGraphicsContext::ENullBrush);

        return retVal;
        }

    return EFalse;
    }

// -----------------------------------------------------------------------------
// AknsDrawUtils::IsListSeperatorLines
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TBool AknsDrawUtils::IsListSeperatorLines(
    MAknsSkinInstance* aInstance )
    {
    if ( !aInstance ) return ETrue;

    TBool propVal = ETrue;
    TRAPD( propErr, (propVal=AknsUtils::BooleanPropertyL(
        aInstance, KAknsIIDPropertyListSeparatorLines )) );
    if( !propErr ) return propVal;

    if( AknsUtils::GetCachedBitmap(
        aInstance, KAknsIIDQsnBgColumnA ) )
        return EFalse;

    if( AknsUtils::GetCachedBitmap(
        aInstance, KAknsIIDQsnBgAreaMainListGene ) )
        return EFalse;

    return ETrue;
    }


// -----------------------------------------------------------------------------
// AknsDrawUtils::SlidingMode
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TSlidingMode AknsDrawUtils::SlidingMode( MAknsSkinInstance*
#ifdef RD_SLIDING_ANIMATION_EFFECTS
    aInstance
#endif // RD_SLIDING_ANIMATION_EFFECTS
)
    {
#ifdef RD_SLIDING_ANIMATION_EFFECTS
    if (!KAknsFeaSlideNotes || !aInstance)
        {
        return ESlidingDisabled;
        }

    CAknsStringItemData* data = static_cast<CAknsStringItemData*>(
        aInstance->GetCachedItemData( KAknsIIDPropertyNoteSlidingMode, EAknsITString ) );
    if( !data )
        {
        return ESlidingDisabled;
        }

    if( !data->String().CompareF( KAknsDrawUtilsSLDisabled ) ) return ESlidingDisabled;
    if( !data->String().CompareF( KAknsDrawUtilsSLFromCBA ) ) return ESlidingFromCBA;
    if( !data->String().CompareF( KAknsDrawUtilsSLFromL ) ) return ESlidingFromLeft;
    if( !data->String().CompareF( KAknsDrawUtilsSLFromTL ) ) return ESlidingFromTopLeft;
    if( !data->String().CompareF( KAknsDrawUtilsSLFromT ) ) return ESlidingFromTop;
    if( !data->String().CompareF( KAknsDrawUtilsSLFromTR ) ) return ESlidingFromTopRight;
    if( !data->String().CompareF( KAknsDrawUtilsSLFromR ) ) return ESlidingFromRight;
    if( !data->String().CompareF( KAknsDrawUtilsSLFromBR ) ) return ESlidingFromBottomRight;
    if( !data->String().CompareF( KAknsDrawUtilsSLFromB ) ) return ESlidingFromBottom;
    if( !data->String().CompareF( KAknsDrawUtilsSLFromBl ) ) return ESlidingFromBottomLeft;
    if( !data->String().CompareF( KAknsDrawUtilsSLRnd ) ) return ESlidingFromRandom;
#endif //RD_SLIDING_ANIMATION_EFFECTS

    return ESlidingDisabled; // Never reached when animations are on
    }


//  End of File
