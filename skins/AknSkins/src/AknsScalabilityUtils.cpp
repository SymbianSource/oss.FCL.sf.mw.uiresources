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
* Description:  Internal utility class to handle scalability-related
                 operations.
*
*/


// INCLUDE FILES
#include "AknsCppPreface.h"

#include <coecntrl.h>
#include <w32std.h>
#include <AknIconUtils.h>
#include <akniconconfig.h>

#include "AknsScalabilityUtils.h"

#include <AknsDrawUtils.h>
#include <AknsItemData.h>
#include <AknsImageAttributeData.h>
#include "AknsTemporaryBitmap.h"

#include "AknsRlRenderer.h"
#include "AknsRlMasterLayout.h"
#include "AknsAppSkinInstance.h"
#include "AknsAlConversionUtil.h"
#include <AknsDrawUtils.h>

#include "AknSkinsVariant.hrh"

#include "AknsDebug.h"
#include "AknsBackgroundLayout.h"

// CONSTANTS

static const TInt KAknsSURErrNoParent   = -9000;
static const TInt KAknsSURErrNoLayout   = -9001;
static const TInt KAknsSURErrNoData     = -9002;

static const TInt KAknsSURecursionLimit = 8;

// ============================= LOCAL FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// GetSourceSize
//
// Retrieves source size based on the given size parameter and image data.
// -----------------------------------------------------------------------------
//
static TSize GetSourceSize(
    const TSize& aOverridingSize, const TSize& aTargetLayoutSize,
    CFbsBitmap* aBitmap, TBool& aPreserved )
    {
    // Use overriding size, if defined
    if( aOverridingSize.iWidth>=0 && aOverridingSize.iHeight>=0 )
        {
        return aOverridingSize;
        }

    if( aBitmap )
        {
        if( AknIconUtils::IsMifIcon( aBitmap ) )
            {
            TSize svgSize( aTargetLayoutSize );
            // Preserve icon data
            AknIconUtils::PreserveIconData( aBitmap );
            aPreserved = ETrue;
            // Set source rectangle from SVG dimension
            if( AknIconUtils::GetContentDimensions( aBitmap, svgSize ) )
                {
                AKNS_TRACE_ERROR("AknsScalabilityUtils-GetSourceSize GetContentDimensions FAILED!");
                }
            return svgSize;
            }
        else
            {
            // Set source rectangle from bitmap dimension
            return aBitmap->SizeInPixels();
            }
        }

    return aTargetLayoutSize;
    }

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
// AknsScalabilityUtils::DrawPartialCachedImage
// (commented in the header).
// -----------------------------------------------------------------------------
//
TBool AknsScalabilityUtils::DrawPartialCachedImage(
    MAknsSkinInstance* /*aSkin*/, CBitmapContext& aGc, const TRect& aTrgLayoutRect,
    const TRect& aTrgDrawRect, CAknsImageItemData* aImgData,
    const TAknsItemID& /*aIID*/, const TAknsImageAttributeData* aAttr,
    const TInt aDrawParam )
    {
    // Check for empty draw rectangle
    if( aTrgDrawRect.IsEmpty() )
        {
        return ETrue;
        }

    TBool isChained (EFalse);
    if (aImgData && (aDrawParam&KAknsDrawParamChained))
        {
        isChained = ETrue;
        }

    // @TODO KAknsDrawParamAlphaOnly supports only soft masks!

    // Attribute retrieval
    TAknsImageAttributeData attr;
    //lint --e{961} Valid logic
    if( aAttr )
        {
        AKNS_TRACE_INFO("AknsScalabilityUtils::DPCI Using supplied attributes");
        attr.Set( *aAttr );
        }
    else if( aImgData->Attributes() )
        {
        AKNS_TRACE_INFO("AknsScalabilityUtils::DPCI Using data attributes");
        attr.Set( *(aImgData->Attributes()) );
        }

    TAknsItemType type = aImgData->Type();

    // Sanity checks

    if( AknsUtils::IsDerivedType( EAknsITBitmap, type ) )
        {
        if( !static_cast<CAknsBitmapItemData*>(aImgData)->Bitmap() )
            {
            AKNS_TRACE_ERROR("AknsScalabilityUtils::DPCI Bitmap is NULL");
            return EFalse;
            }
        }
    if( AknsUtils::IsDerivedType( EAknsITMaskedBitmap, type ) )
        {
        if( !static_cast<CAknsMaskedBitmapItemData*>(aImgData)->Mask() )
            {
            AKNS_TRACE_ERROR("AknsScalabilityUtils::DPCI Mask is NULL");
            return EFalse;
            }
        }

    // Graphics type detection

    CFbsBitmap* bdBmp = NULL;
    if( AknsUtils::IsDerivedType( EAknsITBitmap, type ) )
        {
        bdBmp = static_cast<CAknsBitmapItemData*>(aImgData)->Bitmap();
        }

    TSize overridingSize( -1, -1 ); // By default there is no overriding size

    // Backward compatibility operations

    if( !(attr.iAttributes&EAknsImageAttributeNBC) )
        {
        // Scale NONE and ALIGNED images to the entire rectangle
        if( (attr.iAttributes==EAknsImageAttributeNone) ||
            (attr.iAttributes&EAknsImageAttributeAlign) )
            {
            AKNS_TRACE_INFO("AknsScalabilityUtils::DPCI BC scale" );
            overridingSize = aTrgLayoutRect.Size();
            }
        }

    // Concrete image layout

    if( attr.iAttributes & EAknsImageAttributeSize )
        {
        overridingSize = attr.iSize;
        }

    if( (attr.iAttributes & EAknsImageAttributeStretch) || 
          (attr.iAttributes & EAknsImageAttributeTileX) ||
            (attr.iAttributes & EAknsImageAttributeTileY) )
        {
        overridingSize = aTrgLayoutRect.Size();
        }

    TBool iconPreserved = EFalse;
    TRect imgRect( aTrgLayoutRect.iTl,
        GetSourceSize( overridingSize, aTrgLayoutRect.Size(), bdBmp, iconPreserved ) );
    if ( iconPreserved )
        {
        // Let's make room to the cleanupstack so that the following TCleanupItem
        // PushL never leaves.
        TRAPD( err,
            CleanupStack::PushL( static_cast<TAny*>(NULL) );
            CleanupStack::Pop(); // NULL
            );
        if ( err )
            {
            iconPreserved = EFalse;
            }
        else
            {
            // Now - this should never leave. Leavescan still complains about this, 
            // but it should be ignored.
            CleanupStack::PushL( TCleanupItem( DestroyPreservedIcon, bdBmp ) );
            }
        }

    if( attr.iAttributes & EAknsImageAttributeCoords )
        {
        imgRect.Move( attr.iCoords );
        }

    if( attr.iAttributes & EAknsImageAttributeAlign )
        {
        switch( attr.iAlignment & EAknsImageAlignVMask )
            {
            case EAknsImageAlignVBottom:
                {
                imgRect.Move( 0, aTrgLayoutRect.Height() - imgRect.Height() );
                break;
                }
            case EAknsImageAlignVCenter:
                {
                // Negative values should not appear, and thus "rounding to
                // the wrong direction" is acceptable.
                imgRect.Move( 0, ( aTrgLayoutRect.Height() -
                    imgRect.Height() ) >> 1 ); //lint !e702
                break;
                }
            default: // incl. EAknsImageAlignVTop
                {
                break;
                }
            } //lint !e788 Default correct for unexpected values
        switch( attr.iAlignment & EAknsImageAlignHMask )
            {
            case EAknsImageAlignHRight:
                {
                imgRect.Move( aTrgLayoutRect.Width() - imgRect.Width(), 0 );
                break;
                }
            case EAknsImageAlignHCenter:
                {
                // Negative values should not appear, and thus "rounding to
                // the wrong direction" is acceptable.
                imgRect.Move( ( aTrgLayoutRect.Width() -
                    imgRect.Width() ) >> 1, 0 ); //lint !e702
                break;
                }
            default: // incl. EAknsImageAlignHLeft
                {
                break;
                }
            } //lint !e788 Default correct for unexpected values
        }

    TRect uncroppedImgRect = imgRect;
    imgRect.Intersection( aTrgLayoutRect );

    AKNS_TRACE_INFO2("AknsScalabilityUtils::DPCI ImgRectSize=%i,%i", imgRect.Size().iWidth, imgRect.Size().iHeight );

    // Drawing

    if( (attr.iAttributes & EAknsImageAttributeTile) ||
        (attr.iAttributes & EAknsImageAttributeTileX) ||
        (attr.iAttributes & EAknsImageAttributeTileY) )
        {
        if( bdBmp )
            {
            TInt setSizeErr( KErrUnknown );

            if( attr.iAttributes & EAknsImageAttributeTile )
                {
                setSizeErr = AknIconUtils::SetSize( bdBmp,
                    uncroppedImgRect.Size(), EAspectRatioNotPreserved );
                }
            else if( attr.iAttributes & EAknsImageAttributeTileX )
                {
                setSizeErr = AknIconUtils::SetSize( bdBmp,
                    TSize( KMaxTInt, aTrgLayoutRect.Height() ),
                    EAspectRatioPreservedAndUnusedSpaceRemoved );
                }
            else if( attr.iAttributes & EAknsImageAttributeTileY )
                {
                setSizeErr = AknIconUtils::SetSize( bdBmp,
                    TSize( aTrgLayoutRect.Width(), KMaxTInt ),
                    EAspectRatioPreservedAndUnusedSpaceRemoved );
                }
            // Destroy icon data
            if ( iconPreserved )
                {
                CleanupStack::PopAndDestroy(); // DestroyPreservedIcon
                }
            if( setSizeErr )
                {
                AKNS_TRACE_ERROR1("AknsScalabilityUtils::DPCI SetSize (in tiling) FAILED, err=%i", setSizeErr);
                return EFalse;
                }
            iconPreserved = EFalse;
            }

        if( aDrawParam&KAknsDrawParamPrepareOnly )
            {
            // Prepare only, return before drawing
            if ( iconPreserved )
                {
                CleanupStack::PopAndDestroy(); // DestroyPreservedIcon
                }
            return ETrue;
            }

        //lint --e{961} Valid logic
        // RGB-only drawing falls to next branch
        if( AknsUtils::IsDerivedType( EAknsITMaskedBitmap, type ) &&
            (!(aDrawParam&KAknsDrawParamRGBOnly)) )
            {
            // This fallback functionality draws tiled masked bitmaps.
            // It's known to be slow - therefore such elements are strongly
            // discouraged.
            CAknsMaskedBitmapItemData* bmpData =
                static_cast<CAknsMaskedBitmapItemData*>(aImgData);

            aGc.SetClippingRect( aTrgDrawRect );
            aGc.SetBrushStyle(CGraphicsContext::ENullBrush);

            TSize tileSize( bmpData->Bitmap()->SizeInPixels() );

            for( int tileY = aTrgLayoutRect.iTl.iY;
                tileY < aTrgLayoutRect.iBr.iY;
                tileY += tileSize.iHeight )
                {
                for( int tileX = aTrgLayoutRect.iTl.iX;
                    tileX < aTrgLayoutRect.iBr.iX;
                    tileX += tileSize.iWidth )
                    {
                    TRect tileRect( TPoint( tileX, tileY ), tileSize );
                    if( !tileRect.Intersects( aTrgDrawRect ) )
                        {
                        // Skip tiles that fall outside the drawing rectangle
                        continue;
                        }
                    if( aDrawParam&KAknsSDMAlphaOnly )
                        {
                        aGc.BitBlt( tileRect.iTl, bmpData->Mask(),
                            TRect( TPoint(0,0), tileSize ) );
                        }
                    else
                        {
                        aGc.BitBltMasked( tileRect.iTl, bmpData->Bitmap(),
                            TRect( TPoint(0,0), tileSize ),
                            bmpData->Mask(), ETrue );
                        }
                    }
                }

            aGc.SetBrushStyle(CGraphicsContext::ESolidBrush);
            aGc.CancelClippingRect();
            }
        else if( AknsUtils::IsDerivedType( EAknsITBitmap, type ) )
            {
            if( aDrawParam&KAknsSDMAlphaOnly )
                {
                // Do not draw anything
                if ( iconPreserved )
                    {
                    CleanupStack::PopAndDestroy(); // DestroyPreservedIcon
                    }
                return ETrue;
                }

            CAknsBitmapItemData* bmpData =
                static_cast<CAknsBitmapItemData*>(aImgData);

            aGc.UseBrushPattern( bmpData->Bitmap() );
            aGc.SetBrushOrigin( aTrgLayoutRect.iTl );
            aGc.SetBrushStyle(CGraphicsContext::EPatternedBrush);

            aGc.DrawRect( aTrgDrawRect );

            aGc.SetBrushStyle(CGraphicsContext::ESolidBrush);
            aGc.DiscardBrushPattern();
            }
        }
    else
        {
        // Size must be set (to support SVG icons)
        // This also handles stretching of masks transparently
        if( AknsUtils::IsDerivedType( EAknsITBitmap, type ) )
            {
            CAknsBitmapItemData* bmpData =
                static_cast<CAknsBitmapItemData*>(aImgData);
            if( AknIconUtils::SetSize( bmpData->Bitmap(),
                imgRect.Size(), EAspectRatioNotPreserved ) )
                {
                AKNS_TRACE_ERROR("AknsScalabilityUtils::DPCI SetSize FAILED!");
                if ( iconPreserved )
                    {
                    CleanupStack::PopAndDestroy(); // DestroyPreservedIcon
                    }
                return EFalse;
                }
            }
        if( bdBmp )
            {
            // Destroy icon data
            if ( iconPreserved )
                {
                iconPreserved = EFalse;
                CleanupStack::PopAndDestroy(); // DestroyPreservedIcon
                }
            }

        if( aDrawParam&KAknsDrawParamPrepareOnly )
            {
            // Prepare only, return before drawing
            if ( iconPreserved )
                {
                CleanupStack::PopAndDestroy(); // DestroyPreservedIcon
                }
            return ETrue;
            }

        TRect imgDrawRect = imgRect;
        imgDrawRect.Intersection( aTrgDrawRect );
        TPoint imgDrawPoint = imgDrawRect.iTl - uncroppedImgRect.iTl;


        TBool isMasked = AknsUtils::IsDerivedType( EAknsITMaskedBitmap, type);
        CAknsMaskedBitmapItemData* bmpData =
                static_cast<CAknsMaskedBitmapItemData*>(aImgData);

        TRect drawrect = isChained ? TRect( imgDrawPoint + aImgData->DrawRect().iTl,imgDrawRect.Size() ) :
                                     TRect( imgDrawPoint,imgDrawRect.Size() );
        // RGB-only falls to next branch
        if( isMasked && bmpData->Mask()
            && (!(aDrawParam&KAknsDrawParamRGBOnly)) )
            {
            aGc.SetBrushStyle(CGraphicsContext::ENullBrush);
            if( aDrawParam&KAknsSDMAlphaOnly)
                {
                aGc.BitBlt( imgDrawRect.iTl, bmpData->Mask(), drawrect );
                }
            else
                {
                aGc.BitBltMasked( imgDrawRect.iTl, bmpData->Bitmap(), drawrect, bmpData->Mask(), ETrue );
                }
            int m = bmpData->Bitmap()->DisplayMode();
            aGc.SetBrushStyle(CGraphicsContext::ESolidBrush);
            }
        else if( AknsUtils::IsDerivedType( EAknsITBitmap, type ) )
            {
            if( aDrawParam&KAknsSDMAlphaOnly )
                {
                // Do not draw anything
                if ( iconPreserved )
                    {
                    AknIconUtils::DestroyIconData( bdBmp );
                    }
                return ETrue;
                }

            CAknsBitmapItemData* bmpData2 =
                static_cast<CAknsBitmapItemData*>(aImgData);
            int m = bmpData2->Bitmap()->DisplayMode();
            aGc.BitBlt(imgDrawRect.iTl, bmpData2->Bitmap(), drawrect );
            
            }
        }
    return ETrue;
    }

// ============================= LOCAL FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CachedLayoutBitmap
//
// Retrieves a cached masked bitmap representing particular layout item
// (or @c NULL if not found).
//
// -----------------------------------------------------------------------------
//
CAknsImageItemData* CachedLayoutBitmap( CAknsAppSkinInstance* aSkin,
    const TAknsItemID& aIID, const TSize& /*aSize*/,
    const TSize& aLayoutSize, const TInt aLayout, TBool& aMorphingOut, const TBool& aLocalItem )
    {
    return aSkin->GetLayoutBitmap( aIID, aLayoutSize, aLayout, aMorphingOut, aLocalItem );
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// AknsScalabilityUtils::ProcessDefL
// (commented in the header).
// If additional handling is added - then might leave. Leave indication 'L'
// left for future purposes.
// -----------------------------------------------------------------------------
//
CAknsItemDef* AknsScalabilityUtils::ProcessDefL( CAknsItemDef* aDef )
    {
    // INSERTION POINT for any additional handling
    return aDef;
    }

// -----------------------------------------------------------------------------
// AknsScalabilityUtils::ConvertToBitmap
// (commented in the header).
// -----------------------------------------------------------------------------
//
CAknsImageItemData* AknsScalabilityUtils::ConvertToBitmap(
    CAknsAppSkinInstance* aSkin, const TAknsItemID aIID,const TAknsBackground* aLayout)
    {
    AKNS_TRACE_INFO2("AknsScalabilityUtils::ConvertToBitmap Called for item %x %x", aIID.iMajor, aIID.iMinor );

    //  Comment out so that client can always get image
    //  aSkin->BeginRender is used later for sync,Refer bug EHLU-7GBDRY&ESNN-7HN92G
    //if( aSkin->IsUpdateInProgress() )
    //    {
    //    AKNS_TRACE_INFO("AknsScalabilityUtils::ConvertToBitmap Update in progress, exiting immediately." );
    //    return NULL;
    //    }

    CAknsImageItemData* renderedData = NULL;

    CAknsRlMasterLayout* masterLayout = aSkin->MasterLayout();
    TInt layoutType = masterLayout->CurrentLayoutType();
    TSize layoutSize = masterLayout->CurrentLayoutSize();
    
    if (aIID == KAknsIIDQsnBgScreen && aLayout)
        {
        const TSize QvgaPrtSize = TSize(240,320);
        const TSize QhdPrtSize = TSize(360,640);
        if ( layoutSize == QvgaPrtSize && aLayout->iRect.Size() == QhdPrtSize)
            {
            //Change Compatible Qvga background to a Qhd background
            const TInt QhdLayoutType = 0x10283389;    
            layoutType = QhdLayoutType; //Qhd LayoutType
            layoutSize = QhdPrtSize;//Qhd Protrait Size
            }
        }
    aSkin->BeginRender();

    TRect ignored1;
    TBool ignored2;
    TBool ignored3 = EFalse;
    TRAPD( renderErr, ( renderedData=RecursiveCacheRenderL(
        aSkin, aIID, layoutType, *(masterLayout), layoutSize, ignored1, ignored2, ignored3 ) ) );

    aSkin->EndRender();

    if( renderErr )
        {
        AKNS_TRACE_ERROR1("AknsScalabilityUtils::ConvertToBitmap Rendering error %i", renderErr );
        }

    return renderedData;
    }

// -----------------------------------------------------------------------------
// AknsScalabilityUtils::ConcreteEffectQueue
// (commented in the header).
// -----------------------------------------------------------------------------
//
TAknsItemID AknsScalabilityUtils::ConcreteEffectQueue(
    CAknsAppSkinInstance* aSkin, const TAknsItemID& aIID )
    {
    TAknsItemID iid = aIID;
    TInt findLevel = 0;
    while( findLevel < KAknsSURecursionLimit )
        {
        // First, check whether this is a morphing element
        CAknsAnimationItemData* adata = static_cast<CAknsAnimationItemData*>(
            aSkin->GetCachedItemData( iid, EAknsITAnimation ) );
        if( adata && adata->Morphing() )
            {
            return iid;
            }

        // Otherwise, search for scalable item
        CAknsEffectQueueItemData* data =
            static_cast<CAknsEffectQueueItemData*>(
            aSkin->GetCachedItemData( iid, EAknsITEffectQueue ) );
        if( !data )
            {
            // Not found
            AKNS_TRACE_INFO2("AknsScalabilityUtils::ConcreteEffectQueue No data found for %x %x", iid.iMajor, iid.iMinor );
            return KAknsIIDNone;
            }

        TAknsItemID refIid = data->RefItem();
        if( refIid == KAknsIIDDefault )
            {
            // Concrete item
            return iid;
            }
        else
            {
            iid = refIid;
            }
        }

    AKNS_TRACE_ERROR2("AknsScalabilityUtils::ConcreteEffectQueue SEARCH LIMIT EXCEEDED for %x %x", aIID.iMajor, aIID.iMinor );
    return KAknsIIDNone;
    }

// -----------------------------------------------------------------------------
// AknsScalabilityUtils::GetBackwardCompatibilityColor
// (commented in the header).
// -----------------------------------------------------------------------------
//
TBool AknsScalabilityUtils::GetBackwardCompatibilityColor(
    MAknsSkinInstance* aInstance, TRgb& aRgb,
    const TAknsItemID& aID, const TInt aIndex )
    {
    CAknsColorTableItemData* colorData = static_cast<CAknsColorTableItemData*>(
        aInstance->GetCachedItemData(
        KAknsIIDQsnComponentColors, EAknsITColorTable ) );
    // If there is no old table or it's marked NBC, do not use it.
    if( (!colorData)
        || (colorData->Attributes()->iAttributes&EAknsImageAttributeNBC) )
        {
        return EFalse;
        }

    TInt ccIndex = KErrNotFound;
    if( aID == KAknsIIDQsnIconColors )
        {
        switch( aIndex )
            {
            case EAknsCIQsnIconColorsCG1:  // icon #1    main area; idle    status indicators    #215
                ccIndex = EAknsCIQsnComponentColorsCG1; // #1 status indicators
                break;
            case EAknsCIQsnIconColorsCG2:  // icon #2    status area    universal indicator pane icons    #215
            case EAknsCIQsnIconColorsCG3:  // icon #3    status area    reception off icon    #215
                ccIndex = EAknsCIQsnComponentColorsCG3; // #3 universal status indicators
                break;
            case EAknsCIQsnIconColorsCG4:  // icon #4    navi pane    editing state icons    #0
            case EAknsCIQsnIconColorsCG5:  // icon #5    navi pane    signal iconpacket data indications    #0
            case EAknsCIQsnIconColorsCG6:  // icon #6    navi pane    battery icon    #0
            case EAknsCIQsnIconColorsCG7:  // icon #7    navi pane    other navi pane icons (e.g. tab 1 icons)    #0
            case EAknsCIQsnIconColorsCG20: // icon #20    stacon area    universal indicator pane icons    #0
            case EAknsCIQsnIconColorsCG21: // icon #21    stacon area    reception off icon    #0
            case EAknsCIQsnIconColorsCG22: // icon #22    stacon navi pane    editing state icons    #0
            case EAknsCIQsnIconColorsCG23: // icon #23    stacon navi pane    signal iconpacket data indications    #0
            case EAknsCIQsnIconColorsCG24: // icon #24    stacon navi pane    battery icon    #0
            case EAknsCIQsnIconColorsCG25: // icon #25    stacon navi pane    other navi pane icons (e.g. tab 1 icons)    #0
                ccIndex = EAknsCIQsnComponentColorsCG2; // #2 navi pane text, editing state icons, navi pane arrows, other navi pane icons, gprs indications, tab 1 icons
                break;
            case EAknsCIQsnIconColorsCG8:  // icon #8    active tab    active tab icon colour    #215
                ccIndex = EAknsCIQsnComponentColorsCG6a; // #6a tab 2 icons, tab 3 icons, tab 4 icons (active)
                break;
            case EAknsCIQsnIconColorsCG9:  // icon #9    passive tab    passive tab icon colour    #243
                ccIndex = EAknsCIQsnComponentColorsCG6b; // #6b tab 2 icons, tab 3 icons, tab 4 icons (passive)
                break;
            case EAknsCIQsnIconColorsCG10: // icon #10    popup window    query editing state icons    #210
                ccIndex = EAknsCIQsnComponentColorsCG4; // #4 query editing state icons
                break;
            case EAknsCIQsnIconColorsCG11: // icon #11    call graphics    call status icons    #215
                ccIndex = EAknsCIQsnComponentColorsCG5; // #5 call status icons
                break;
            case EAknsCIQsnIconColorsCG12: // icon #12
                // Intentionally unassigned, use default
                break;
            case EAknsCIQsnIconColorsCG13: // icon #13    main area    additional list icons    #215
            case EAknsCIQsnIconColorsCG14: // icon #14    settings popup list    checkbox, radio button    #215
            case EAknsCIQsnIconColorsCG15: // icon #15    form popup list    checkbox, radio button    #215
            case EAknsCIQsnIconColorsCG16: // icon #16    list highlight    additional list iconsform checkbox, radio button    #215
            case EAknsCIQsnIconColorsCG17: // icon #17    grid highlight    additional list iconsgms images    #215
            case EAknsCIQsnIconColorsCG19: // icon #19    calendar views    additional list icons    #215
                // Although there is BC item (#11), do not use it
                // Old skins do not necessarily define correct main pane colors
                break;
            case EAknsCIQsnIconColorsCG18: // icon #18    setting list highlight    checkbox, radio button    #0
                // Intentionally unassigned, use default
                break;
            }
        }
    else if( aID == KAknsIIDQsnTextColors )
        {
        switch( aIndex )
            {
            case EAknsCIQsnTextColorsCG1:  // text #1    status area    title text    #215
            case EAknsCIQsnTextColorsCG36: // text #36  status area title text in idle #215
                ccIndex = EAknsCIQsnComponentColorsCG10; // #10 title font color
                break;
            case EAknsCIQsnTextColorsCG2:  // text #2    navi pane    navi pane texts    #0
            case EAknsCIQsnTextColorsCG37: // text #37  stacon area title text  #0
            case EAknsCIQsnTextColorsCG38: // text #38  stacon area title text in idle #0
            case EAknsCIQsnTextColorsCG39: // text #39  stacon area top softkey text    #0
            case EAknsCIQsnTextColorsCG40: // text #40  stacon area bottom softkey text    #0
            case EAknsCIQsnTextColorsCG41: // text #41  stacon area top softkey text in idle #0
            case EAknsCIQsnTextColorsCG42: // text #42  stacon area bottom softkey text in idle #0
            case EAknsCIQsnTextColorsCG43: // text #43  stacon navi pane text   #0
                ccIndex = EAknsCIQsnComponentColorsCG2; // #2 navi pane text, editing state icons, navi pane arrows, other navi pane icons, gprs indications, tab 1 icons
                break;
            case EAknsCIQsnTextColorsCG3:  // text #3    active tab    active tab text    #215
                ccIndex = EAknsCIQsnComponentColorsCG6a; // #6a tab 2 icons, tab 3 icons, tab 4 icons (active)
                break;
            case EAknsCIQsnTextColorsCG4:  // text #4    passive tab    passive tab text    #243
                ccIndex = EAknsCIQsnComponentColorsCG6b; // #6b tab 2 icons, tab 3 icons, tab 4 icons (passive)
                break;
            case EAknsCIQsnTextColorsCG5:  // text #5    power save state    time/date power save text    #0
                // Intentionally unassigned, use default
                break;
            case EAknsCIQsnTextColorsCG6:  // text #6    main area    main area texts    #215
            case EAknsCIQsnTextColorsCG7:  // text #7    settings popup list    settings list item text    #215
            case EAknsCIQsnTextColorsCG8:  // text #8    form popup listform input field    form list item textform data entry text    #215
            case EAknsCIQsnTextColorsCG9:  // text #9    application grid    unfocused application title texts     #215
            case EAknsCIQsnTextColorsCG10: // text #10    list highlight    list texts    #215
            case EAknsCIQsnTextColorsCG11: // text #11    grid highlight    grid text     #215
            case EAknsCIQsnTextColorsCG22: // text #22    calendar month viewcalendar day view    active month day numbersday view list items    #215
            case EAknsCIQsnTextColorsCG23: // text #23    calendar month viewcalendar week view    day abbreviationshoursweek numbers    #215
            case EAknsCIQsnTextColorsCG33: // text #33    pinboard/list view    item title    #215
            case EAknsCIQsnTextColorsCG35: // text #35  active idle text    #215
                // Although there are BC item (#11, #14, #15), do not use them
                // Old skins do not necessarily define correct main pane colors
                break;
            case EAknsCIQsnTextColorsCG12: // text #12    settings popup list highlight;settings list item value box    settings value item text    #0
                // Intentionally unassigned, use default
                break;
            case EAknsCIQsnTextColorsCG13: // text #13    control pane general    left softkey text    #215
            case EAknsCIQsnTextColorsCG14: // text #14    control pane general    right softkey text    #215
            case EAknsCIQsnTextColorsCG15: // text #15    control pane idle    left softkey text    #215
            case EAknsCIQsnTextColorsCG16: // text #16  control pane idle    right softkey text    #215
            case EAknsCIQsnTextColorsCG17: // text #17    control pane popup windows    left softkey text    #215
            case EAknsCIQsnTextColorsCG18: // text #18    control pane popup windows    right softkey text    #215
                ccIndex = EAknsCIQsnComponentColorsCG12; // #12 softkey texts
                break;
            case EAknsCIQsnTextColorsCG19: // text #19    popup windows    popup windows text    #215
            case EAknsCIQsnTextColorsCG20: // text #20    submenu popup windows    submenu texts    #215
                ccIndex = EAknsCIQsnComponentColorsCG13; // #13 popup windows text
                break;
            case EAknsCIQsnTextColorsCG21: // text #21    calendar month view    passive month day numbers    #221
                ccIndex = EAknsCIQsnComponentColorsCG16; // #16 calendar month view passive month numbers
                break;
            case EAknsCIQsnTextColorsCG24: // text #24    cut/copy/paste highlight    copied text    #0
                // Intentionally unassigned, use default
                break;
            case EAknsCIQsnTextColorsCG25: // text #25    find pane    search string text    #215
            case EAknsCIQsnTextColorsCG26: // text #26    settings input field    setting text entry    #215
            case EAknsCIQsnTextColorsCG27: // text #27    query input field    query text entry    #215
            case EAknsCIQsnTextColorsCG32: // text #32    pinboard input field    item title/find string    #215
                ccIndex = EAknsCIQsnComponentColorsCG18; // #18 search string text, text input, code/date/time entry
                break;
            case EAknsCIQsnTextColorsCG28: // text #28    power save mode    time/date shadow text    #215
                // Intentionally unassigned, use default
                break;
            case EAknsCIQsnTextColorsCG29: // text #29    calculator paper     operator/operand    #215
                // Intentionally unassigned, use default
                break;
            case EAknsCIQsnTextColorsCG30: // text #30    calculator display    result    #210
                // Intentionally unassigned, use default
                break;
            case EAknsCIQsnTextColorsCG31: // text #31  calculator display    result shadow    #219
                // Intentionally unassigned, use default
                break;
            case EAknsCIQsnTextColorsCG34: // text #34    notepad    note text    #215
                // Intentionally unassigned, use default
                break;
            }
        }
    else if( aID == KAknsIIDQsnLineColors )
        {
        switch( aIndex )
            {
            case EAknsCIQsnLineColorsCG1: // line #1    calendar day/week/month view    lines     #215
            case EAknsCIQsnLineColorsCG3: // line #3    heading pane    heading pane separator line    #215
            case EAknsCIQsnLineColorsCG6: // line #6    lists    column separator lines    #215
            case EAknsCIQsnLineColorsCG7: // line #7    setting list    column separator lines    #215
                ccIndex = EAknsCIQsnComponentColorsCG7; // #7 separator lines, primary separator lines
                break;
            case EAknsCIQsnLineColorsCG2: // line #2    calendar day/week/month view    lines     #221
            case EAknsCIQsnLineColorsCG4: // line #4    main pane    grid cell separator lines    #221
            case EAknsCIQsnLineColorsCG5: // line #5    popup windows    grid cell separator lines    #221
            case EAknsCIQsnLineColorsCG11: // line #11    popup     separator line in options menu    #221
                ccIndex = EAknsCIQsnComponentColorsCG8; // #8 separator lines, secondary separator lines
                break;
            case EAknsCIQsnLineColorsCG8: // line #8    form    slider line     #215
            case EAknsCIQsnLineColorsCG9: // line #9    settings list    value item slider line    #215
            case EAknsCIQsnLineColorsCG10: // line #10    opened settings list    value item slider line    #215
                // Intentionally unassigned, use default
                break;
            }
        }
    else if( aID == KAknsIIDQsnOtherColors )
        {
        switch( aIndex )
            {
            case EAknsCIQsnOtherColorsCG1: // other #1    calendar week view    public event    #35
                ccIndex = EAknsCIQsnComponentColorsCG20; // #20 public event
                break;
            case EAknsCIQsnOtherColorsCG2: // other #2    calendar week view    private event    #210
                ccIndex = EAknsCIQsnComponentColorsCG21; // #21 private event
                break;
            case EAknsCIQsnOtherColorsCG3: // other #3    calendar week view    not synchronized event    #35 dimmed
                ccIndex = EAknsCIQsnComponentColorsCG22; // #22 not synchronized event
                break;
            case EAknsCIQsnOtherColorsCG4: // other #4    calendar week view    2 or more events overlapping    #215
                ccIndex = EAknsCIQsnComponentColorsCG23; // #23 2 or more events overlapping
                break;
            case EAknsCIQsnOtherColorsCG5: // other #5    calendar month view    event indication on focused month    #215
            case EAknsCIQsnOtherColorsCG6: // other #6    calendar month view    event indication on unfocused month    #221
                // Intentionally unassigned, use default
                break;
            }
        }
    else if( aID == KAknsIIDQsnHighlightColors )
        {
        switch( aIndex )
            {
            case EAknsCIQsnHighlightColorsCG1: // highlight #1    link highlight     browser link highlight colour; japanese fep predictive candidate indication;automatic find item indcation    #244
                // Intentionally unassigned, use default
                break;
            case EAknsCIQsnHighlightColorsCG2: // highlight #2    cut/copy/paste     cut/copy/paste highlight    #210
                ccIndex = EAknsCIQsnComponentColorsCG17; // #17 input, text entry
                break;
            case EAknsCIQsnHighlightColorsCG3: // highlight #3    link indication    link text and underline indication    #210
                // Intentionally unassigned, use default
                break;
            }
        }

    if( ccIndex >= 0 )
        {
        TRAPD( err, colorData->GetColorL( ccIndex, aRgb ) );
        if( err == KErrNone )
            {
            return ETrue;
            }
        }

    return EFalse;
    }

CAknsEffectQueueItemData *GetEffectQueueItemData(MAknsSkinInstance* aInstance, const TAknsItemID &aID)
    {
    CAknsAppSkinInstance* appSkinInstance =
        static_cast<CAknsAppSkinInstance*>(aInstance);
        
    TAknsItemID id = AknsScalabilityUtils::ConcreteEffectQueue(appSkinInstance, aID);

    CAknsItemData *itemData = appSkinInstance->GetCachedItemData(id, EAknsITEffectQueue);
    
    return static_cast<CAknsEffectQueueItemData *>(itemData);
    }

CFbsBitmap *AknsScalabilityUtils::LoadBitmapFromSkinId(MAknsSkinInstance* aInstance, const TAknsItemID &aID, const TSize &size)
    {
    CAknsAppSkinInstance* appSkinInstance =
        static_cast<CAknsAppSkinInstance*>(aInstance);
        
    CAknsItemData* itemData = NULL;
    itemData = aInstance->GetCachedItemData(aID, EAknsITBitmap);
    if (itemData)
        {
        CFbsBitmap *bmp =
                static_cast<CAknsBitmapItemData*> (itemData)->Bitmap();

        CFbsBitmap *ret = new CFbsBitmap();
        ret->Duplicate(bmp->Handle());

        return ret;
        }

    CFbsBitmap *bitmap = NULL;
    CAknsEffectQueueItemData *effectQueueItemData = GetEffectQueueItemData(aInstance, aID);
    if(effectQueueItemData)
        {
        MAknsRlCommandIterator *iter = effectQueueItemData->CreateCommandIteratorL();
        while(iter->HasNext())
            {
            const TAknsRlCommandData *commandData = iter->NextL();
            MAknsRlParameterIterator *paramIter = commandData->iParamIterator;
            while(paramIter->HasNext())
                {
                const TAknsRlParameterData *paramData = paramIter->NextL();
                if( paramData->iType == EAknsRlParameterTypeGraphics)
                    {
                    const TDesC16* filename = paramData->iGfx->iFilename;
                    TInt index = paramData->iGfx->iIndex;
                    
                    if(index > 0)
                        {
                        bitmap = AknIconUtils::CreateIconL(*filename, index);                    
                        AknIconUtils::SetSize(bitmap, size, EAspectRatioNotPreserved);
                        break;
                        }
                    //could be wallpaper
                    CFbsBitmap *mask = NULL;
                    TRAPD(err, appSkinInstance->iSession.DecodeWallpaperImageL(*filename, size, bitmap, mask));
                    
                    if(err == KErrNone)
                        {
                        break;
                        }
                    }
                }

            if(bitmap)
                {
                break;
                }
            }
        
        delete iter;
        }
    
    return bitmap;
    }

TBool IsScalableItem ( const TAknsItemID aID )
    {
    if ( aID.iMajor == EAknsMajorSkin &&
         aID.iMinor >= EAknsMinorQsnBgScreen &&
         aID.iMinor <= EAknsMinorQsnBgAreaMainSmall )
        {
        return ETrue;
        }
    else if ( aID.iMajor == EAknsMajorAvkon &&
              aID.iMinor >= EAknsMinorQsnBgNavipaneSolid && 
              aID.iMinor <= EAknsMinorQsnBgNavipaneWipeIdle )
        {
        //return ETrue;
        }
    
    return EFalse;
    }
// -----------------------------------------------------------------------------
// AknsScalabilityUtils::RecursiveCacheRenderL
// (commented in the header).
// -----------------------------------------------------------------------------
//
CAknsImageItemData* AknsScalabilityUtils::RecursiveCacheRenderL(
    CAknsAppSkinInstance* aSkin, const TAknsItemID aIID,
    const TInt aLayoutType,
    CAknsRlMasterLayout& aLayoutMaster, const TSize& aLayoutSize, TRect& aRectOut, TBool& aMorphingOut, TBool& aLocalItem )
    {
    AKNS_TRACE_INFO2("AknsScalabilityUtils::RecursiveCacheRenderL (START) Rendering %x %x", aIID.iMajor, aIID.iMinor );

    if ( aIID == KAknsIIDWallpaper ) 
        {
        aSkin->ReleaseItem( KAknsIIDWallpaper );	
        }

    CAknsItemDef* itemToFind = NULL;

    if (aSkin->iLocalItemDefArray.Count() && !aLocalItem )
        {
        TInt index = 0;

        itemToFind = CAknsItemDef::NewL( aIID );
        if( (aSkin->iLocalItemDefArray.FindInOrder( itemToFind, index,
                CAknsItemDef::LinearOrder ) == KErrNone) )
            {
            aLocalItem = ETrue;
            }
        delete itemToFind;
        }

    TBool morphing( EFalse );

    TAknsItemID thisIid = ConcreteEffectQueue( aSkin, aIID );
    TBool hasData( ETrue );
    if( thisIid == KAknsIIDNone )
        {
        AKNS_TRACE_INFO2("AknsScalabilityUtils::RecursiveCacheRenderL No concrete item found for %x %x", aIID.iMajor, aIID.iMinor );
        hasData = EFalse;
        thisIid = aIID;
        }


    TAknsItemID parent = aLayoutMaster.GetParent( thisIid );
    TRect parentRect;
    CAknsImageItemData* parentData = NULL;

    if( parent == KAknsIIDDefault )
        {
        // Item can not be rendered (no definite parent)
        AKNS_TRACE_ERROR2("AknsScalabilityUtils::RecursiveCacheRenderL Can not render, no parent for %x %x", thisIid.iMajor, thisIid.iMinor );
        User::Leave( KAknsSURErrNoParent );
        }
    else if( parent != KAknsIIDNone )
        {
        TBool parentMorphing( EFalse );
        parentData = RecursiveCacheRenderL( aSkin, parent, aLayoutType,
            aLayoutMaster, aLayoutSize, parentRect, parentMorphing, aLocalItem );
        if( parentMorphing ) morphing = ETrue;
        }
    else
        {
        // Root element (KAknsIIDNone)
        parentRect = TRect(0,0,KMaxTInt,KMaxTInt);
        if( !hasData )
            {
            AKNS_TRACE_ERROR2("AknsScalabilityUtils::RecursiveCacheRenderL Root element has no data %x %x", thisIid.iMajor, thisIid.iMinor );
            User::Leave( KAknsSURErrNoData );
            }
        }

    // First get the layout

    TRect rect;
    if( aLayoutMaster.GetItemLayout( thisIid, parentRect, rect ) == EFalse )
        {
        AKNS_TRACE_ERROR2("AknsScalabilityUtils::RecursiveCacheRenderL Can not render, no layout for %x %x", thisIid.iMajor, thisIid.iMinor );
        User::Leave( KAknsSURErrNoLayout );
        }
    aRectOut = rect;

    // If already rendered, nothing further to do
    TBool bitmapMorphing( EFalse );
    CAknsImageItemData* existingData = CachedLayoutBitmap( aSkin, thisIid,
        rect.Size(), aLayoutSize, aLayoutType, bitmapMorphing, aLocalItem );
    if( bitmapMorphing ) morphing = ETrue;
    if( existingData )
        {
        aMorphingOut = morphing;
        return existingData;
        }
    if(aSkin->iLocalItemDefArray.Count() == 0) //not in preview
        {
        if ( hasData && IsScalableItem( thisIid ) )
            {
            CAknsMaskedBitmapItemData* data =
                    CAknsMaskedBitmapItemData::NewL();

            data->SetDrawRect(aLayoutSize);
            data->SetParentIID(KAknsIIDNone);

            TAknsImageAttributeData attributes;
            attributes.iAttributes = EAknsImageAttributeNBC;
            data->SetAttributesL(attributes);

            CFbsBitmap *bmp = LoadBitmapFromSkinId(aSkin, thisIid, aLayoutSize);
            data->SetBitmap( bmp );
            data->SetMask(NULL);

            aSkin->AddLayoutBitmapL(thisIid, data, aLayoutType,
                    aLayoutSize, morphing, aLocalItem);
            aMorphingOut = morphing;
            return CachedLayoutBitmap(aSkin, thisIid, rect.Size(),
                    aLayoutSize, aLayoutType, morphing, aLocalItem);
            }
        }
    // Otherwise, start rendering

    CAknsMaskedBitmapItemData* thisData = CAknsMaskedBitmapItemData::NewL();
    CleanupStack::PushL( thisData ); // (1)

     // if this item is "empty" and parent has data
    if (!hasData && parentData)
        {
        // parent is the root element, or
        // parent has rendered itself
        if (parentData->ParentIID() == KAknsIIDNone)
            {
            thisData->SetDrawRect(aRectOut);
            thisData->SetParentIID(parent);
            }
        else
            {
            if (parentRect.iTl != TPoint(0,0) && aRectOut.iTl == TPoint(0,0))
                {
                thisData->SetDrawRect(TRect(parentRect.iTl,aRectOut.Size()));
                }
            else
                {
                thisData->SetDrawRect(aRectOut);
                }
            thisData->SetParentIID(parentData->ParentIID());
            }
        thisData->SetBitmap(NULL);
        thisData->SetMask(NULL);

        TAknsImageAttributeData attributes;
        attributes.iAttributes = EAknsImageAttributeNBC;
        thisData->SetAttributesL( attributes );
        CleanupStack::Pop( thisData );
        aSkin->AddLayoutBitmapL( thisIid, thisData, aLayoutType, aLayoutSize, morphing, aLocalItem );
        // Skin instance may choose to re-create the item, thus re-fetch
        aMorphingOut = morphing;
        return CachedLayoutBitmap( aSkin, thisIid, rect.Size(),
            aLayoutSize, aLayoutType, morphing, aLocalItem );
        }

    CAknsEffectQueueItemData* queue = NULL;
    TBool queueOwned( EFalse );
    if( hasData )
        {
        queue = static_cast<CAknsEffectQueueItemData*>(
            aSkin->GetCachedItemData( thisIid, EAknsITEffectQueue ) );
        if( !queue )
            {
            // If no queue exists, if may be a morphing item
            CAknsAnimationItemData* animation = NULL;
            animation = static_cast<CAknsAnimationItemData*>(
                aSkin->GetCachedItemData( thisIid, EAknsITAnimation ) );
            if( animation && animation->Morphing() )
                {
                // Fetch timestamp
                TTime timeStamp;
                CAknsStringItemData* ttData =
                    static_cast<CAknsStringItemData*>(
                    aSkin->CreateUncachedItemDataL(
                    KAknsIIDPropertyMorphingTime, EAknsITString ) );
                CleanupStack::PushL( ttData );
                if( ttData )
                    {
                    const TUint* hiPtr = reinterpret_cast<const TUint*>(ttData->String().Ptr());
                    const TUint* loPtr = hiPtr+1;
                    timeStamp = MAKE_TINT64( *hiPtr, *loPtr );
                    }
                else
                    {
                    // In case the server did not update timestamp, use hometime
                    timeStamp.HomeTime();
                    }
                CleanupStack::PopAndDestroy( ttData );

                // Convert to queue
                queue = AknsAlConversionUtil::AnimationToEffectQueueL( *animation, timeStamp );

                // Queue is now owned by us
                CleanupStack::PushL( queue );
                queueOwned = ETrue;

                morphing = ETrue;
                }
            }

        if( !queue )
            {
            // Still no data, abort
            AKNS_TRACE_ERROR2("AknsScalabilityUtils::RecursiveCacheRenderL Existing data vanished %x %x", thisIid.iMajor, thisIid.iMinor );
            User::Leave( KAknsSURErrNoData );
            }
        }

    MAknsRlRenderer* renderer = aSkin->DefaultRenderer();

    CFbsBitmap* bitmap = NULL;
    CFbsBitmap* alpha = NULL;

    MAknsRlCommandIterator* commands = NULL;
    TInt inputLayer = 0;
    TInt outputLayer = 0;
    if( hasData )
        {
        commands = queue->CreateCommandIteratorL();
        inputLayer = queue->InputLayer();
        outputLayer = queue->OutputLayer();
        }
    CleanupStack::PushL( TCleanupItem(
        MAknsRlCommandIterator::CleanupOperation, commands ) ); // (2)

    CFbsBitmap* parentBitmap = NULL;
    CFbsBitmap* parentAlpha = NULL;
    CAknsImageItemData* realParent = parentData;
    TRect realRect = rect;
    if (parentData&& parentData->ParentIID() != KAknsIIDNone)
        {
        realParent = CachedLayoutBitmap( aSkin, parentData->ParentIID(), rect.Size(),
            aLayoutSize, aLayoutType, morphing, aLocalItem );
        if (!realParent)
            {
            TAknsItemID concreteiid = ConcreteEffectQueue( aSkin, parentData->ParentIID() );
            realParent = CachedLayoutBitmap( aSkin, concreteiid, rect.Size(),
                aLayoutSize, aLayoutType, morphing, aLocalItem );
            }
        if (hasData)
            {
            if (realParent && realParent->ParentIID() == KAknsIIDNone && aRectOut.iTl == TPoint(0,0))
                {
                realRect = parentRect;
                }
            if (inputLayer >= 0 && parentData->ParentIID() != KAknsIIDNone)
                {
                // input layer present and the parent is not a root element,
                // need to adjust the realrect
                if (realRect.iTl != parentRect.iTl)
                    {
                    realRect.iTl.iY+=parentRect.iTl.iY;
                    realRect.iBr.iY+=parentRect.iTl.iY;
                    }
                }
            }
        }
    // Bitmap and mask is being created, no leaves allowed
    if( realParent &&
        AknsUtils::IsDerivedType( EAknsITBitmap, realParent->Type() ) )
        {
        parentBitmap = static_cast<CAknsBitmapItemData*>(
            realParent)->Bitmap();
        if( AknsUtils::IsDerivedType( EAknsITMaskedBitmap, realParent->Type() ) )
            {
            parentAlpha = static_cast<CAknsMaskedBitmapItemData*>(
                realParent)->Mask();
            }
        TInt rendererErr = renderer->RenderItemWithBackground(
            bitmap, alpha, outputLayer, commands, rect.Size(),
            parentBitmap, parentAlpha, realRect, inputLayer );
        if( rendererErr )
            {
            AKNS_TRACE_ERROR3("AknScalabilityUtils::RecursiveCacheRenderL Renderer (RIWB) for %x %x exited with ERROR %i", thisIid.iMajor, thisIid.iMinor, rendererErr );
            User::Leave( rendererErr );
            }
        }
    else
        {
        // Root element
        TInt rendererErr = renderer->RenderItem(
            bitmap, alpha,
            outputLayer, commands, rect.Size() );
        if( rendererErr )
            {
            AKNS_TRACE_ERROR3("AknScalabilityUtils::RecursiveCacheRenderL Renderer (RI) for %x %x exited with ERROR %i", thisIid.iMajor, thisIid.iMinor, rendererErr );
            User::Leave( rendererErr );
            }
        }

    thisData->DestroyAndSetBitmap( bitmap );
    thisData->DestroyAndSetMask( alpha );
    // Leaves are OK after this point

    CleanupStack::PopAndDestroy(1); // commands (1)

    // Adjust data according to queue setup
    if( hasData )
        {
        switch( queue->OutputLayerMode() )
            {
            case KAknsRlLayerRGBA:
                // Do nothing
                AKNS_TRACE_INFO("AknsScalabilityUtils::RecursiveCacheRenderL No adjustment necessary");
                break;
            case KAknsRlLayerRGBOnly:
                // Drop alpha
                thisData->DestroyAndSetMask( NULL );
                AKNS_TRACE_INFO("AknsScalabilityUtils::RecursiveCacheRenderL Alpha-output dropped");
                break;
            default:
                AKNS_TRACE_ERROR1("AknsScalabilityUtils::RecursiveCacheRenderL Invalid output mode %i", queue->OutputLayerMode() );
                break;
            }
        }
    else
        {
        // No data, but parent exists (with bitmap but no mask)
        if( realParent && parentBitmap && (!parentAlpha) )
            {
            // Drop alpha
            thisData->DestroyAndSetMask( NULL );
            AKNS_TRACE_INFO("AknsScalabilityUtils::RecursiveCacheRenderL Fall-through alpha-output dropped");
            }
        else
            {
            AKNS_TRACE_INFO("AknsScalabilityUtils::RecursiveCacheRenderL No fall-through adjustment necessary");
            }
        }

    // Post-processing, only if compression is defined
    AknIconConfig::CompressIfPreferred(thisData->Bitmap(), thisData->Mask());

    // Disable backward compatibility, size should be already correct
    TAknsImageAttributeData attributes;
    attributes.iAttributes = EAknsImageAttributeNBC;
    thisData->SetAttributesL( attributes );

    // Destroy owned queue, if any
    if( queueOwned )
        {
        CleanupStack::PopAndDestroy( queue );
        }

    // Ownership transfer
    CleanupStack::Pop( thisData ); // thisData (0)
    aSkin->AddLayoutBitmapL( thisIid, thisData, aLayoutType, aLayoutSize, morphing, aLocalItem );

    // Skin instance may choose to re-create the item, thus re-fetch
    aMorphingOut = morphing;
    return CachedLayoutBitmap( aSkin, thisIid, rect.Size(),
        aLayoutSize, aLayoutType, morphing, aLocalItem );
    }

//  End of File
