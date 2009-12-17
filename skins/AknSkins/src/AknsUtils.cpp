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
* Description:  Defines a public static utility class AknsUtils.
*
*/


// INCLUDE FILES
#include "AknsCppPreface.h"

#include <eikenv.h>
#include <coecntrl.h>
#include <gulicon.h>

#include <AknsUtils.h>

#include "AknsAppSkinInstance.h"
#include "AknsContainerDataContext.h"
#include "AknsAppUiParameters.h"
#include "AknsScalabilityUtils.h"

#include "AknsDebug.h"

_LIT(KAknsUtilsTrue, "true");
_LIT(KAknsUtilsFalse, "false");


AKNS_UNDEFINED_METHOD(AknsUtils::AknsUtils)

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// AknsUtils::InitSkinSupportL
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsUtils::InitSkinSupportL)
EXPORT_C void AknsUtils::InitSkinSupportL()
    {
    AKNS_TRACE_INFO("AknsUtils::InitSkinSupportL");

    if( !SkinInstance() )
        {
        CAknsAppSkinInstance::CreateSingletonL();
        }

    __ASSERT_DEBUG(SkinInstance(),AKNS_DEBUG_PANIC(EAknsDPanicNotInitialized));
    }

// -----------------------------------------------------------------------------
// AknsUtils::CreateDataContextForContainerL
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsUtils::CreateDataContextForContainerL)
EXPORT_C MAknsDataContext* AknsUtils::CreateDataContextForContainerL()
    {
    return CAknsContainerDataContext::NewL();
    }

// -----------------------------------------------------------------------------
// AknsUtils::CreateBitmapItemDefL
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsUtils::CreateBitmapItemDefL)
EXPORT_C CAknsItemDef* AknsUtils::CreateBitmapItemDefL(
    const TAknsItemID& aID, const TDesC& aFilename,
    const TInt aIndex )
    {
    return CAknsBitmapItemDef::NewL( aID, aFilename, aIndex );
    }

// -----------------------------------------------------------------------------
// AknsUtils::CreateMaskedBitmapItemDefL
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsUtils::CreateMaskedBitmapItemDefL)
EXPORT_C CAknsItemDef* AknsUtils::CreateMaskedBitmapItemDefL(
    const TAknsItemID& aID, const TDesC& aFilename,
    const TInt aIndex, const TInt aMaskIndex )
    {
    return CAknsMaskedBitmapItemDef::NewL( aID, aFilename, aIndex,
        aMaskIndex );
    }

// -----------------------------------------------------------------------------
// AknsUtils::SkinInstance
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsUtils::SkinInstance)
EXPORT_C MAknsSkinInstance* AknsUtils::SkinInstance()
    {
    CAknsAppSkinInstance* skin = static_cast<CAknsAppSkinInstance*>
        (CCoeEnv::Static( KAknsSkinInstanceTls ));
    return skin;
    }

// -----------------------------------------------------------------------------
// AknsUtils::DataContext
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsUtils::DataContext)
EXPORT_C MAknsDataContext* AknsUtils::DataContext( MObjectProvider* aMop )
    {
    MAknsSkinInstance* skin = SkinInstance();
    if( !skin )
        {
        return NULL;
        }

    MAknsDataContext* dc = NULL;
    if( aMop )
        {
        aMop->MopGetObject( dc );
        }

    if( !dc )
        {
        dc = skin->RootDataContext();
        }

    return dc;
    }

// -----------------------------------------------------------------------------
// AknsUtils::CreateIconL
// -----------------------------------------------------------------------------
//
EXPORT_C void AknsUtils::CreateIconL(
    MAknsSkinInstance* aInstance, const TAknsItemID& aID,
    CFbsBitmap*& aBitmap, CFbsBitmap*& aMask,
    const TDesC& aFilename,
    const TInt aFileBitmapId, const TInt aFileMaskId )
    {
    CreateIconLC( aInstance, aID, aBitmap, aMask,
        aFilename, aFileBitmapId, aFileMaskId );
    CleanupStack::Pop(2); // aBitmap, aMask
    }

// -----------------------------------------------------------------------------
// AknsUtils::CreateIconLC
// -----------------------------------------------------------------------------
//
EXPORT_C void AknsUtils::CreateIconLC(
    MAknsSkinInstance* aInstance, const TAknsItemID& aID,
    CFbsBitmap*& aBitmap, CFbsBitmap*& aMask,
    const TDesC& aFilename,
    const TInt aFileBitmapId, const TInt aFileMaskId )
    {
    CFbsBitmap* bitmap = NULL;
    CFbsBitmap* mask = NULL;
    TBool fallback = EFalse;
    if( aInstance )
        {
        CAknsMaskedBitmapItemData* bmpData =
            static_cast<CAknsMaskedBitmapItemData*>(
            aInstance->CreateUncachedItemDataL( aID, EAknsITMaskedBitmap ) );
        CleanupStack::PushL( bmpData );
        if( bmpData && bmpData->Bitmap() && bmpData->Mask() )
            {
            // Detach bitmaps
            bitmap = bmpData->Bitmap();
            bmpData->SetBitmap( NULL );
            mask = bmpData->Mask();
            bmpData->SetMask( NULL );
            }
        CleanupStack::PopAndDestroy( bmpData );
        }

    if( bitmap ) // Mask is also loaded
        {
        CleanupStack::PushL( mask );
        CleanupStack::PushL( bitmap );
        }
    else
        {
        if( !aFilename.Length() )
            {
            User::Leave( KErrNotFound );
            }

        // Fallback
        AknIconUtils::CreateIconLC( bitmap, mask,
            aFilename, aFileBitmapId, aFileMaskId );
        fallback = ETrue;
        }

    if( (bitmap && mask) || fallback)
        {
        // Ownership transferred
        aBitmap = bitmap;
        aMask = mask;
        }
    else
        {
        User::Leave( KErrUnknown );
        }
    }

// -----------------------------------------------------------------------------
// AknsUtils::CreateIconL
// -----------------------------------------------------------------------------
//
EXPORT_C void AknsUtils::CreateIconL(
    MAknsSkinInstance* aInstance, const TAknsItemID& aID,
    CFbsBitmap*& aBitmap,
    const TDesC& aFilename,
    const TInt aFileBitmapId )
    {
    CreateIconLC( aInstance, aID, aBitmap,
        aFilename, aFileBitmapId );
    CleanupStack::Pop( aBitmap );
    }

// -----------------------------------------------------------------------------
// AknsUtils::CreateIconLC
// -----------------------------------------------------------------------------
//
EXPORT_C void AknsUtils::CreateIconLC(
    MAknsSkinInstance* aInstance, const TAknsItemID& aID,
    CFbsBitmap*& aBitmap,
    const TDesC& aFilename,
    const TInt aFileBitmapId )
    {
    CFbsBitmap* bitmap = NULL;

    if( aInstance )
        {
        CAknsBitmapItemData* bmpData =
            static_cast<CAknsBitmapItemData*>(
            aInstance->CreateUncachedItemDataL( aID, EAknsITBitmap ) );
        CleanupStack::PushL( bmpData );
        if( bmpData && bmpData->Bitmap() )
            {
            // Detach bitmap
            bitmap = bmpData->Bitmap();
            bmpData->SetBitmap( NULL );
            }
        CleanupStack::PopAndDestroy( bmpData );
        }

    if( bitmap )
        {
        CleanupStack::PushL( bitmap );
        }
    else
        {
        if( !aFilename.Length() )
            {
            User::Leave( KErrNotFound );
            }

        // Fallback
        bitmap = AknIconUtils::CreateIconL(
            aFilename, aFileBitmapId );

        CleanupStack::PushL( bitmap ); // bitmap
        }

    if( bitmap )
        {
        // Ownership transferred
        aBitmap = bitmap;
        }
    else
        {
        User::Leave( KErrUnknown );
        }
    }

// -----------------------------------------------------------------------------
// AknsUtils::CreateMaskedBitmapL
// -----------------------------------------------------------------------------
//
EXPORT_C CApaMaskedBitmap* AknsUtils::CreateMaskedBitmapL(
    MAknsSkinInstance* aInstance, const TAknsItemID& aID,
    const TDesC& aFilename,
    const TInt aFileIndex, const TInt aFileMaskIndex )
    {
    AKNS_TRACE_OBSOLETE("AknsUtils::CreateMaskedBitmapL (5 param)");

    CFbsBitmap* bitmap = NULL;
    CFbsBitmap* mask = NULL;

    CreateIconLC( aInstance, aID, bitmap, mask,
        aFilename, aFileIndex, aFileMaskIndex );

    // Bitmap and mask always exist here
    CApaMaskedBitmap* maskedBitmap = CApaMaskedBitmap::NewLC();
    // Note that these calls leave with SVG-originating icons
    User::LeaveIfError( maskedBitmap->Duplicate( bitmap->Handle() ) );
    User::LeaveIfError( maskedBitmap->Mask()->Duplicate( mask->Handle() ) );
    CleanupStack::Pop( maskedBitmap );

    CleanupStack::PopAndDestroy( 2 ); // bitmap, mask

    return maskedBitmap;
    }

// -----------------------------------------------------------------------------
// AknsUtils::CreateGulIconL
// -----------------------------------------------------------------------------
//
EXPORT_C CGulIcon* AknsUtils::CreateGulIconL(
    MAknsSkinInstance* aInstance, const TAknsItemID& aID,
    const TDesC& aFilename,
    const TInt aFileIndex, const TInt aFileMaskIndex )
    {
    CFbsBitmap* bitmap = NULL;
    CFbsBitmap* mask = NULL;

    CreateIconLC( aInstance, aID, bitmap, mask,
        aFilename, aFileIndex, aFileMaskIndex );

    CGulIcon* icon = CGulIcon::NewL( bitmap, mask );

    CleanupStack::Pop( 2 ); // bitmap, mask

    return icon;
    }

// -----------------------------------------------------------------------------
// AknsUtils::CreateColorIconL
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsUtils::CreateColorIconL)
EXPORT_C void AknsUtils::CreateColorIconL(
    MAknsSkinInstance* aInstance, const TAknsItemID& aID,
    const TAknsItemID& aColorID, const TInt aColorIndex,
    CFbsBitmap*& aBitmap, CFbsBitmap*& aMask,
    const TDesC& aFilename,
    const TInt aFileBitmapId, const TInt aFileMaskId,
    const TRgb aDefaultColor )
    {
    CreateColorIconLC( aInstance, aID, aColorID, aColorIndex,
        aBitmap, aMask, aFilename, aFileBitmapId, aFileMaskId, aDefaultColor );
    CleanupStack::Pop(2); // aBitmap, aMask
    }

// -----------------------------------------------------------------------------
// AknsUtils::CreateColorIconLC
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsUtils::CreateColorIconLC)
EXPORT_C void AknsUtils::CreateColorIconLC(
    MAknsSkinInstance* aInstance, const TAknsItemID& aID,
    const TAknsItemID& aColorID, const TInt aColorIndex,
    CFbsBitmap*& aBitmap, CFbsBitmap*& aMask,
    const TDesC& aFilename,
    const TInt aFileBitmapId, const TInt aFileMaskId,
    const TRgb aDefaultColor )
    {
    CreateColorIconLC(
        aInstance, aID, aColorID, aColorIndex, aBitmap, aMask,
        aFilename, aFileBitmapId, aFileMaskId, aDefaultColor,
        TSize(-1,-1), EAspectRatioPreserved );
    }

// -----------------------------------------------------------------------------
// AknsUtils::CreateColorIconL
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsUtils::CreateColorIconL)
EXPORT_C void AknsUtils::CreateColorIconL(
    MAknsSkinInstance* aInstance, const TAknsItemID& aID,
    const TAknsItemID& aColorID, const TInt aColorIndex,
    CFbsBitmap*& aBitmap, CFbsBitmap*& aMask,
    const TDesC& aFilename,
    const TInt aFileBitmapId, const TInt aFileMaskId,
    const TRgb aDefaultColor,
    const TSize& aSize, const TScaleMode aScaleMode )
    {
    CreateColorIconLC( aInstance, aID, aColorID, aColorIndex,
        aBitmap, aMask, aFilename, aFileBitmapId, aFileMaskId, aDefaultColor,
        aSize, aScaleMode );
    CleanupStack::Pop(2); // aBitmap, aMask
    }

// -----------------------------------------------------------------------------
// AknsUtils::CreateColorIconLC
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsUtils::CreateColorIconLC)
EXPORT_C void AknsUtils::CreateColorIconLC(
    MAknsSkinInstance* aInstance, const TAknsItemID& aID,
    const TAknsItemID& aColorID, const TInt aColorIndex,
    CFbsBitmap*& aBitmap, CFbsBitmap*& aMask,
    const TDesC& aFilename,
    const TInt aFileBitmapId, const TInt aFileMaskId,
    const TRgb aDefaultColor,
    const TSize& aSize, const TScaleMode aScaleMode )
    {
    CFbsBitmap* bitmap = NULL;
    CFbsBitmap* mask = NULL;

    CreateIconLC( aInstance, aID, bitmap, mask,
        aFilename, aFileBitmapId, aFileMaskId ); // (2)

    TRgb color = aDefaultColor;
    // Return value intentionally ignored
    GetCachedColor( aInstance, color, aColorID, aColorIndex );

    if( AknIconUtils::IsMifIcon( bitmap ) )
        {
        AknIconUtils::SetIconColor( bitmap, color );
        aBitmap = bitmap;
        aMask = mask;
        }
    else // Create Own Icon
        {
        CFbsBitmap* colorBitmap = new (ELeave) CFbsBitmap();
        CleanupStack::PushL( colorBitmap ); // (3)

        TSize size = mask->SizeInPixels();
        User::LeaveIfError(
            colorBitmap->Create( size,
            CEikonEnv::Static()->ScreenDevice()->DisplayMode() ) );

        CFbsBitmapDevice* colorBmpDev = CFbsBitmapDevice::NewL( colorBitmap );
        CleanupStack::PushL( colorBmpDev ); // (4)
        User::LeaveIfError( colorBmpDev->Resize( size ) );

        CFbsBitGc* colorBmpGc = CFbsBitGc::NewL();
        CleanupStack::PushL( colorBmpGc ); // (5)
        colorBmpGc->Activate( colorBmpDev );

        colorBmpGc->SetBrushColor( color );
        colorBmpGc->SetPenStyle( CGraphicsContext::ENullPen );
        colorBmpGc->SetBrushStyle( CGraphicsContext::ESolidBrush );
        colorBmpGc->DrawRect( TRect( TPoint(0,0), size ) );

        CleanupStack::PopAndDestroy( 2 ); // colorBmpGc, colorBmpDev (3)
        CleanupStack::Pop( 3 ); // colorBmp, bitmap, mask (0)
        delete bitmap; // We don't know the order, must destroy manually

        aBitmap = colorBitmap;
        aMask = mask;

        // These are both safe
        CleanupStack::PushL( aBitmap ); // (1)
        CleanupStack::PushL( aMask ); // (2)
        }

    if( aSize.iWidth>=0 )
        {
        // Set the size
        User::LeaveIfError(
            AknIconUtils::SetSize( aBitmap, aSize, aScaleMode ) );
        }
    }

// -----------------------------------------------------------------------------
// AknsUtils::CreateBitmapL
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsUtils::CreateBitmapL)
EXPORT_C CFbsBitmap* AknsUtils::CreateBitmapL(
    MAknsSkinInstance* aInstance, const TAknsItemID& aID )
    {
    CFbsBitmap* bitmap = NULL;
    CreateIconL( aInstance, aID, bitmap, KNullDesC, -1 );

    return bitmap;
    }

// -----------------------------------------------------------------------------
// AknsUtils::CreateMaskedBitmapL
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsUtils::CreateMaskedBitmapL)
EXPORT_C CApaMaskedBitmap* AknsUtils::CreateMaskedBitmapL(
    MAknsSkinInstance* aInstance, const TAknsItemID& aID )
    {
    AKNS_TRACE_OBSOLETE("AknsUtils::CreateMaskedBitmapL (2 param)");
    return CreateMaskedBitmapL( aInstance, aID, KNullDesC, -1, -1 );
    }

// -----------------------------------------------------------------------------
// AknsUtils::CreateGulIconL
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsUtils::CreateGulIconL)
EXPORT_C CGulIcon* AknsUtils::CreateGulIconL(
    MAknsSkinInstance* aInstance, const TAknsItemID& aID,
    const TBool aRequireMask )
    {
    if( !aInstance )
        {
        User::Leave(KErrNotSupported);
        }

    // Forward-query type
    TBool needsDelete = EFalse;
    CAknsItemDef* def =
        static_cast<CAknsAppSkinInstance*>(aInstance)->LookupDef(
        needsDelete, aID, EAknsITMaskedBitmap );
    TBool maskedAvailable = def ? ETrue : EFalse;
    if( needsDelete ) delete def;

    if( maskedAvailable )
        {
        return CreateGulIconL( aInstance, aID, KNullDesC, -1, -1 );
        }
    else if( !aRequireMask )
        {
        CFbsBitmap* bitmap = NULL;
        CreateIconLC( aInstance, aID, bitmap, KNullDesC, -1 );
        CGulIcon* icon = CGulIcon::NewL( bitmap );
        CleanupStack::Pop( bitmap );
        return icon;
        }
    else
        {
        User::Leave( KErrNotFound );
        }

    return NULL; // Never reached
    }

// -----------------------------------------------------------------------------
// AknsUtils::GetCachedBitmap
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsUtils::GetCachedBitmap)
EXPORT_C CFbsBitmap* AknsUtils::GetCachedBitmap(
    MAknsSkinInstance* aInstance, const TAknsItemID& aID )
    {
    if( !aInstance )
        {
        return NULL;
        }

    CAknsItemData* resData = aInstance->GetCachedItemData( aID, EAknsITBitmap );
    if( !resData )
        {
        return NULL;
        }

    return static_cast<CAknsBitmapItemData*>(resData)->Bitmap();
    }

// -----------------------------------------------------------------------------
// AknsUtils::GetCachedMaskedBitmap
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsUtils::GetCachedMaskedBitmap)
EXPORT_C void AknsUtils::GetCachedMaskedBitmap(
    MAknsSkinInstance* aInstance, const TAknsItemID& aID,
    CFbsBitmap*& aBitmap, CFbsBitmap*& aMask )
    {
    aBitmap = NULL;
    aMask = NULL;

    if( !aInstance )
        {
        return;
        }

    CAknsItemData* resData = aInstance->GetCachedItemData( aID, EAknsITBitmap );
    if( !resData )
        {
        return;
        }

    // If found, guaranteed to be at least EAknsITBitmap
    aBitmap = static_cast<CAknsBitmapItemData*>( resData )->Bitmap();

    // Assign mask only, if EAknsITMaskedBitmap
    if( IsDerivedType( EAknsITMaskedBitmap, resData->Type() ) )
        {
        aMask = static_cast<CAknsMaskedBitmapItemData*>( resData )->Mask();
        }
    }

// -----------------------------------------------------------------------------
// AknsUtils::GetCachedColor
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsUtils::GetCachedColor)
EXPORT_C TInt AknsUtils::GetCachedColor(
    MAknsSkinInstance* aInstance, TRgb& aRgb, const TAknsItemID& aID,
    const TInt aIndex )
    {
    if( !aInstance )
        {
        return KErrNotSupported;
        }

    // Check backward compatibility first
    if( AknsScalabilityUtils::GetBackwardCompatibilityColor(
        aInstance, aRgb, aID, aIndex ) )
        {
        // Found and assigned
        return KErrNone;
        }

    CAknsColorTableItemData* colorData = static_cast<CAknsColorTableItemData*>(
        aInstance->GetCachedItemData( aID, EAknsITColorTable ) );
    if( !colorData)
        {
        return KErrNotFound;
        }

    TRAPD( err, colorData->GetColorL( aIndex, aRgb ) );
    return err;
    }

// -----------------------------------------------------------------------------
// AknsUtils::BooleanPropertyL
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsUtils::BooleanPropertyL)
EXPORT_C TBool AknsUtils::BooleanPropertyL( MAknsSkinInstance* aInstance,
    const TAknsItemID& aID )
    {
    if( !aInstance ) User::Leave( KErrNotSupported );

    CAknsStringItemData* data = static_cast<CAknsStringItemData*>(
        aInstance->GetCachedItemData( aID, EAknsITString ) );
    if( !data ) User::Leave( KErrNotFound );

    if( !data->String().CompareF( KAknsUtilsTrue ) ) return ETrue;
    if( !data->String().CompareF( KAknsUtilsFalse ) ) return EFalse;

    User::Leave( KErrArgument );
    return EFalse; // Never reached
    }

// -----------------------------------------------------------------------------
// AknsUtils::IsDerivedType
// -----------------------------------------------------------------------------
//
TBool AknsUtils::IsDerivedType( const TAknsItemType aBaseType,
    const TAknsItemType aDerivedType )
    {
    if( aBaseType == aDerivedType )
        {
        return ETrue;
        }

    switch( aBaseType )
        {
        case EAknsITUnknown:
            {
            return ETrue;
            }

        case EAknsITImage:
            {
            if( (aDerivedType==EAknsITBitmap) ||
                (aDerivedType==EAknsITMaskedBitmap) ||
                (aDerivedType==EAknsITColorTable) ||
                (aDerivedType==EAknsITImageTable) ||
                (aDerivedType==EAknsITBmpAnim ) )
                {
                return ETrue;
                }

            return EFalse;
            }

        case EAknsITBitmap:
            {
            if( aDerivedType == EAknsITMaskedBitmap )
                {
                return ETrue;
                }

            return EFalse;
            }

        case EAknsITImageTable:
            {
            if( aDerivedType == EAknsITBmpAnim )
                {
                return ETrue;
                }

            return EFalse;
            }

        default:
            break;
        } //lint !e788 Other values return EFalse

    return EFalse;
    }

// -----------------------------------------------------------------------------
// AknsUtils::SetAvkonSkinEnabledL
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsUtils::SetAvkonSkinEnabledL)
EXPORT_C void AknsUtils::SetAvkonSkinEnabledL( const TBool aEnabled )
    {
    CAknsAppUiParameters* aup = static_cast<CAknsAppUiParameters*>
        (CCoeEnv::Static( KAknsAppUiParametersTls ));

    if( !aup )
        {
        CAknsAppUiParameters::CreateSingletonL();
        aup = static_cast<CAknsAppUiParameters*>
            (CCoeEnv::Static( KAknsAppUiParametersTls ));
        }

    __ASSERT_DEBUG(aup,AKNS_DEBUG_PANIC(EAknsDPanicNotInitialized));

    aup->SetAvkonSkinEnabled( aEnabled );
    }

// -----------------------------------------------------------------------------
// AknsUtils::AvkonSkinEnabled
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsUtils::AvkonSkinEnabled)
EXPORT_C TBool AknsUtils::AvkonSkinEnabled()
    {
    CAknsAppUiParameters* aup = static_cast<CAknsAppUiParameters*>
        (CCoeEnv::Static( KAknsAppUiParametersTls ));

    if( aup )
        {
        return aup->AvkonSkinEnabled();
        }

    return EFalse;
    }

// -----------------------------------------------------------------------------
// AknsUtils::SetAvkonHighlightAnimationEnabledL
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsUtils::SetAvkonHighlightAnimationEnabledL)
EXPORT_C void AknsUtils::SetAvkonHighlightAnimationEnabledL( const TBool aEnabled )
    {
    CAknsAppUiParameters* aup = static_cast<CAknsAppUiParameters*>
        (CCoeEnv::Static( KAknsAppUiParametersTls ));

    if( !aup )
        {
        CAknsAppUiParameters::CreateSingletonL();
        aup = static_cast<CAknsAppUiParameters*>
            (CCoeEnv::Static( KAknsAppUiParametersTls ));
        }

    __ASSERT_DEBUG(aup,AKNS_DEBUG_PANIC(EAknsDPanicNotInitialized));

    aup->SetAvkonHighlightAnimationEnabled( aEnabled );
    }

// -----------------------------------------------------------------------------
// AknsUtils::AvkonHighlightAnimationEnabled
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsUtils::AvkonHighlightAnimationEnabled)
EXPORT_C TBool AknsUtils::AvkonHighlightAnimationEnabled()
    {
    // Step 1: Check if product variant has disabled animations
    CAknsAppSkinInstance* skin = static_cast<CAknsAppSkinInstance*>
        (CCoeEnv::Static( KAknsSkinInstanceTls ));
    if( skin )
        {
        if( !skin->VariantHighlightAnimationEnabled() )
            {
            // Product variant has disabled highlight animation
            return EFalse;
            }
        }
    else
        {
        // No skin instance -> no skin -> animations can hardly be supported
        return EFalse;
        }

    // Step 2: Product allows animations, check application specific status
    CAknsAppUiParameters* aup = static_cast<CAknsAppUiParameters*>
        (CCoeEnv::Static( KAknsAppUiParametersTls ));

    if( aup )
        {
        return aup->AvkonHighlightAnimationEnabled();
        }

    return ETrue; // By default, highlight animations are enabled
    }

// -----------------------------------------------------------------------------
// AknsUtils::RegisterControlPosition
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsUtils::RegisterControlPosition)
EXPORT_C void AknsUtils::RegisterControlPosition( const CCoeControl* aControl )
    {
    if( aControl && aControl->DrawableWindow() )
        {
        RegisterControlPosition( aControl, aControl->PositionRelativeToScreen() );
        }
    }

// -----------------------------------------------------------------------------
// AknsUtils::RegisterControlPosition
// -----------------------------------------------------------------------------
//
EXPORT_C void AknsUtils::RegisterControlPosition( const CCoeControl* aControl,
    const TPoint& aPoint )
    {
    CAknsAppSkinInstance* skin = static_cast<CAknsAppSkinInstance*>
        (CCoeEnv::Static( KAknsSkinInstanceTls ));

    if( (!skin) || (!aControl) || (!aControl->DrawableWindow()) )
        {
        return;
        }

    TAknsControlPositionEntry entry;
    TInt index;

    entry.iKey = reinterpret_cast<TUint>(aControl);
    if( skin->iControlPositionList.FindInUnsignedKeyOrder(
        entry, index ) == KErrNone )
        {
        skin->iControlPositionList[index].iScreenPos = aPoint;
        }
    else
        {
        entry.iScreenPos = aPoint;
        skin->iControlPositionList.InsertInUnsignedKeyOrder( entry );
        }
    }

// -----------------------------------------------------------------------------
// AknsUtils::DeregisterControlPosition
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsUtils::DeregisterControlPosition)
EXPORT_C void AknsUtils::DeregisterControlPosition( const CCoeControl* aControl )
    {
    CAknsAppSkinInstance* skin = static_cast<CAknsAppSkinInstance*>
        (CCoeEnv::Static( KAknsSkinInstanceTls ));

    if( !skin )
        {
        return;
        }

    TAknsControlPositionEntry entry;
    TInt index;

    entry.iKey = reinterpret_cast<TUint>(aControl);
    if( skin->iControlPositionList.FindInUnsignedKeyOrder(
        entry, index ) == KErrNone )
        {
        skin->iControlPositionList.Remove( index );
        }
    }

// -----------------------------------------------------------------------------
// AknsUtils::GetControlPosition
// -----------------------------------------------------------------------------
//
EXPORT_C TInt AknsUtils::GetControlPosition( const CCoeControl* aControl,
    TPoint& aScreenPos )
    {
    CAknsAppSkinInstance* skin = static_cast<CAknsAppSkinInstance*>
        (CCoeEnv::Static( KAknsSkinInstanceTls ));

    if( !skin )
        {
        return KErrNotFound;
        }

    TAknsControlPositionEntry entry;
    TInt index;

    entry.iKey = reinterpret_cast<TUint>(aControl);
    if( skin->iControlPositionList.FindInUnsignedKeyOrder(
        entry, index ) == KErrNone )
        {
        aScreenPos = skin->iControlPositionList[index].iScreenPos;
        return KErrNone;
        }

    return KErrNotFound;
    }

// -----------------------------------------------------------------------------
// AknsUtils::Reserved
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsUtils::Reserved)
EXPORT_C TInt AknsUtils::Reserved()
    {
    return 0;
    }

//  End of File
