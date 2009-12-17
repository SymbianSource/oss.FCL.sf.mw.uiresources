/*
* Copyright (c) 2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  test aknsitemdef.h
*
*/



#include <aknsitemdef.h>
#include <aknsitemid.h>
#include <aknsitemdata.h>
#include <aknsimageattributedata.h>
#include <aknsconstants.h>
#include <akniconutils.h>
#include <avkon.mbg>
#include <stifparser.h>

#include "testdomskins.h"

// CONSTANTS
const TInt KFrameInfoTime = 100;
const TInt KFrameInfoPosX = 50;
const TInt KFrameInfoPosY = 50;

_LIT( KTxtFileName, "\\resource\\apps\\avkon2.mbm");

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestItemNewL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestItemNewL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestItemNewL, "In ItemDef ItemNewL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestItemNewL );
    // Print to log file
    iLog->Log( KTestItemNewL );

    CAknsItemDef* itemDef = CAknsItemDef::NewL( KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( itemDef );
    STIF_ASSERT_NOT_NULL( itemDef );

    CleanupStack::Pop( itemDef );
    delete itemDef;
    itemDef = NULL;
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestItemTypeL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestItemTypeL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestItemType, "In ItemDef ItemType" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestItemType );
    // Print to log file
    iLog->Log( KTestItemType );

    CAknsItemDef* itemDef = CAknsItemDef::NewL( KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( itemDef );
    TAknsItemType type = itemDef->Type();
    STIF_ASSERT_EQUALS( EAknsITUnknown, type );

    CleanupStack::PopAndDestroy( itemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestItemIDL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestItemIDL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestItemID, "In ItemDef ItemID" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestItemID );
    // Print to log file
    iLog->Log( KTestItemID );

    CAknsItemDef* itemDef = CAknsItemDef::NewL( KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( itemDef );
    TAknsItemID id = itemDef->ID();

    CleanupStack::PopAndDestroy( itemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestItemLinearOrderL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestItemLinearOrderL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestItemLinearOrder, "In ItemDef ItemLinearOrder" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestItemLinearOrder );
    // Print to log file
    iLog->Log( KTestItemLinearOrder );

    CAknsItemDef* itemDef = CAknsItemDef::NewL( KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( itemDef );
    TInt order = CAknsItemDef::LinearOrder( *itemDef, *itemDef );
    STIF_ASSERT_EQUALS( 0, order );

    CleanupStack::PopAndDestroy( itemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestImageNewL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestImageNewL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestImageNewL, "In ItemDef ImageItemNewL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestImageNewL );
    // Print to log file
    iLog->Log( KTestImageNewL );

    CAknsImageItemDef* imageItem = CAknsImageItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( imageItem );
    STIF_ASSERT_NOT_NULL( imageItem );

    CleanupStack::PopAndDestroy( imageItem );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestImageSetAttributesL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestImageSetAttributesL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestImageSetAttributesL, "In ItemDef ImageItemSetAttributesL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestImageSetAttributesL );
    // Print to log file
    iLog->Log( KTestImageSetAttributesL );

    CAknsImageItemDef* imageItem = CAknsImageItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( imageItem );
    TAknsImageAttributeData data;
    imageItem->SetAttributesL( data );

    CleanupStack::PopAndDestroy( imageItem );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestImageAttributesL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestImageAttributesL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestImageAttributes, "In ItemDef ImageItemAttributes" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestImageAttributes );
    // Print to log file
    iLog->Log( KTestImageAttributes );

    CAknsImageItemDef* imageItem = CAknsImageItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( imageItem );
    TAknsImageAttributeData data;
    imageItem->SetAttributesL( data );

    const TAknsImageAttributeData* attributes = imageItem->Attributes();
    STIF_ASSERT_NOT_NULL( attributes );

    CleanupStack::PopAndDestroy( imageItem );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestBitmapNewWithIndexL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestBitmapNewWithIndexL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestBitmapNewWithIndexL, "In ItemDef BitmapItemNewWithIndexL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestBitmapNewWithIndexL );
    // Print to log file
    iLog->Log( KTestBitmapNewWithIndexL );

    CAknsBitmapItemDef* bitmapItem = CAknsBitmapItemDef::NewL(
            KAknsIIDQgnIndiTpDialler, KTxtFileName, 1 );
    CleanupStack::PushL( bitmapItem );
    STIF_ASSERT_NOT_NULL( bitmapItem );

    CleanupStack::PopAndDestroy( bitmapItem );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestBitmapNewL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestBitmapNewL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestBitmapNewL, "In ItemDef BitmapItemNewL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestBitmapNewL );
    // Print to log file
    iLog->Log( KTestBitmapNewL );

    CAknsBitmapItemDef* bitmapItem = CAknsBitmapItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( bitmapItem );
    STIF_ASSERT_NOT_NULL( bitmapItem );

    CleanupStack::PopAndDestroy( bitmapItem );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestBitmapSetFilenameL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestBitmapSetFilenameL( CStifItemParser& aItem )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestBitmapSetFilename, "In ItemDef BitmapItemSetFilename" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestBitmapSetFilename );
    // Print to log file
    iLog->Log( KTestBitmapSetFilename );

    TInt num = 0;
    TInt err = aItem.GetNextInt( num );
    if ( err != KErrNone )
        {
        return err;
        }

    CAknsBitmapItemDef* bitmapItem = CAknsBitmapItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( bitmapItem );
    _LIT( KFileName, "abc.bmp");

    switch( num )
        {
        case 1:
            bitmapItem->SetFilename( KFileName );
            break;
        case 2:
            bitmapItem->SetFilenameL( KFileName );
            break;
        default:
            CleanupStack::PopAndDestroy( bitmapItem );
            return KErrNotSupported;
        }

    CleanupStack::PopAndDestroy( bitmapItem );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestBitmapFilenameL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestBitmapFilenameL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestBitmapFilename, "In ItemDef BitmapItemFilename" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestBitmapFilename );
    // Print to log file
    iLog->Log( KTestBitmapFilename );

    CAknsBitmapItemDef* bitmapItem = CAknsBitmapItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( bitmapItem );
    _LIT( KFileName, "abc.bmp");
    bitmapItem->SetFilename( KFileName );
    const TDesC fileName = bitmapItem->Filename();
    STIF_ASSERT_NOT_EQUALS( 0, fileName.Length() );

    CleanupStack::PopAndDestroy( bitmapItem );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestBitmapSetIndexL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestBitmapSetIndexL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestBitmapSetIndex, "In ItemDef BitmapItemSetIndex" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestBitmapSetIndex );
    // Print to log file
    iLog->Log( KTestBitmapSetIndex );

    CAknsBitmapItemDef* bitmapItem = CAknsBitmapItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( bitmapItem );

    bitmapItem->SetIndex( 1 );

    CleanupStack::PopAndDestroy( bitmapItem );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestBitmapIndexL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestBitmapIndexL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestBitmapIndex, "In ItemDef BitmapItemIndex" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestBitmapIndex );
    // Print to log file
    iLog->Log( KTestBitmapIndex );

    CAknsBitmapItemDef* bitmapItem = CAknsBitmapItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( bitmapItem );
    bitmapItem->SetIndex( 1 );
    TInt index = bitmapItem->Index();
    STIF_ASSERT_EQUALS( 1, index );

    CleanupStack::PopAndDestroy( bitmapItem );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestMaskNewWithIndexL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestMaskNewWithIndexL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestMaskNewWithIndexL, "In ItemDef MaskItemNewWithIndexL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestMaskNewWithIndexL );
    // Print to log file
    iLog->Log( KTestMaskNewWithIndexL );

    CAknsMaskedBitmapItemDef* maskItem = CAknsMaskedBitmapItemDef::NewL(
            KAknsIIDQgnIndiTpDialler, KTxtFileName, 1, 2 );
    CleanupStack::PushL( maskItem );
    STIF_ASSERT_NOT_NULL( maskItem );

    CleanupStack::PopAndDestroy( maskItem );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestMaskNewL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestMaskNewL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestMaskNewL, "In ItemDef MaskItemNewL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestMaskNewL );
    // Print to log file
    iLog->Log( KTestMaskNewL );

    CAknsMaskedBitmapItemDef* maskItem = CAknsMaskedBitmapItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( maskItem );
    STIF_ASSERT_NOT_NULL( maskItem );

    CleanupStack::PopAndDestroy( maskItem );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestMaskSetIndexL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestMaskSetIndexL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestMaskSetIndex, "In ItemDef MaskItemSetIndex" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestMaskSetIndex );
    // Print to log file
    iLog->Log( KTestMaskSetIndex );

    CAknsMaskedBitmapItemDef* maskItem = CAknsMaskedBitmapItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( maskItem );

    maskItem->SetMaskIndex( 1 );

    CleanupStack::PopAndDestroy( maskItem );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestMaskIndexL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestMaskIndexL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestMaskIndex, "In ItemDef MaskItemIndex" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestMaskIndex );
    // Print to log file
    iLog->Log( KTestMaskIndex );

    CAknsMaskedBitmapItemDef* maskItem = CAknsMaskedBitmapItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( maskItem );
    maskItem->SetMaskIndex( 1 );
    TInt index = maskItem->MaskIndex();
    STIF_ASSERT_EQUALS( 1, index );

    CleanupStack::PopAndDestroy( maskItem );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestColorTableNewWithColorL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestColorTableNewWithColorL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestColorTableNewWithColorL, "In ItemDef ColorTableNewWithColorL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestColorTableNewWithColorL );
    // Print to log file
    iLog->Log( KTestColorTableNewWithColorL );

    TAknsColorTableEntry ctEntry;
    ctEntry.iIndex = 1;
    CAknsColorTableItemDef* colorTable = CAknsColorTableItemDef::NewL(
            KAknsIIDQgnIndiTpDialler, 1, &ctEntry );
    CleanupStack::PushL( colorTable );
    STIF_ASSERT_NOT_NULL( colorTable );

    CleanupStack::PopAndDestroy( colorTable );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestColorTableNewL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestColorTableNewL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestColorTableNewL, "In ItemDef ColorTableNewL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestColorTableNewL );
    // Print to log file
    iLog->Log( KTestColorTableNewL );

    CAknsColorTableItemDef* colorTable = CAknsColorTableItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( colorTable );
    STIF_ASSERT_NOT_NULL( colorTable );

    CleanupStack::PopAndDestroy( colorTable );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestColorTableSetColorsL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestColorTableSetColorsL( CStifItemParser& aItem )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestColorTableSetColors, "In ItemDef ColorTableSetColors" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestColorTableSetColors );
    // Print to log file
    iLog->Log( KTestColorTableSetColors );

    TInt num = 0;
    TInt err = aItem.GetNextInt( num );
    if ( err != KErrNone )
        {
        return err;
        }

    TAknsColorTableEntry ctEntry;
    ctEntry.iIndex = 1;
    CAknsColorTableItemDef* colorTable = CAknsColorTableItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( colorTable );

    switch( num )
        {
        case 1:
            colorTable->SetColors( 1, &ctEntry );
            break;
        case 2:
            colorTable->SetColorsL( 1, &ctEntry );
            break;
        default:
            CleanupStack::PopAndDestroy( colorTable );
            return KErrNotSupported;
        }

    CleanupStack::PopAndDestroy( colorTable );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestColorTableColorsL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestColorTableColorsL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestColorTableColors, "In ItemDef ColorTableColors" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestColorTableColors );
    // Print to log file
    iLog->Log( KTestColorTableColors );

    TAknsColorTableEntry ctEntry;
    ctEntry.iIndex = 1;
    CAknsColorTableItemDef* colorTable = CAknsColorTableItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( colorTable );
    colorTable->SetColors( 1, &ctEntry );
    const TAknsColorTableEntry* entry = colorTable->Colors();
    STIF_ASSERT_EQUALS( ctEntry.iIndex, entry->iIndex );

    CleanupStack::PopAndDestroy( colorTable );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestColorTableNumberOfColorsL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestColorTableNumberOfColorsL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestColorTableNumberOfColors, "In ItemDef ColorTableNumberOfColors" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestColorTableNumberOfColors );
    // Print to log file
    iLog->Log( KTestColorTableNumberOfColors );

    TAknsColorTableEntry ctEntry;
    ctEntry.iIndex = 1;
    CAknsColorTableItemDef* colorTable = CAknsColorTableItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( colorTable );
    colorTable->SetColors( 1, &ctEntry );
    TInt numColors = colorTable->NumberOfColors();
    STIF_ASSERT_EQUALS( 1, numColors );

    CleanupStack::PopAndDestroy( colorTable );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestImageTableNewWithImageL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestImageTableNewWithImageL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestImageTableNewWithImageL, "In ItemDef ImageTableNewWithImageL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestImageTableNewWithImageL );
    // Print to log file
    iLog->Log( KTestImageTableNewWithImageL );

    TAknsItemID itemId;
    itemId.Set( KAknsIIDQgnPropSetAppsLoc );
    CAknsImageTableItemDef* colorTable = CAknsImageTableItemDef::NewL(
            KAknsIIDQgnIndiTpDialler, 1, &itemId );
    CleanupStack::PushL( colorTable );
    STIF_ASSERT_NOT_NULL( colorTable );

    CleanupStack::PopAndDestroy( colorTable );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestImageTableNewL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestImageTableNewL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestImageTableNewL, "In ItemDef ImageTableNewL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestImageTableNewL );
    // Print to log file
    iLog->Log( KTestImageTableNewL );

    CAknsImageTableItemDef* colorTable = CAknsImageTableItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( colorTable );
    STIF_ASSERT_NOT_NULL( colorTable );

    CleanupStack::PopAndDestroy( colorTable );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestImageTableSetImagesL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestImageTableSetImagesL( CStifItemParser& aItem )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestImageTableSetImages, "In ItemDef ImageTableSetImages" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestImageTableSetImages );
    // Print to log file
    iLog->Log( KTestImageTableSetImages );

    TInt num = 0;
    TInt err = aItem.GetNextInt( num );
    if ( err != KErrNone )
        {
        return err;
        }

    TAknsItemID itemId;
    itemId.Set( KAknsIIDQgnPropSetAppsLoc );
    CAknsImageTableItemDef* colorTable = CAknsImageTableItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( colorTable );

    switch( num )
        {
        case 1:
            colorTable->SetImages( 1, &itemId );
            break;
        case 2:
            colorTable->SetImagesL( 1, &itemId );
            break;
        default:
            CleanupStack::PopAndDestroy( colorTable );
            return KErrNotSupported;
        }

    CleanupStack::PopAndDestroy( colorTable );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestImageTableImagesL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestImageTableImagesL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestImageTableImages, "In ItemDef ImageTableImages" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestImageTableImages );
    // Print to log file
    iLog->Log( KTestImageTableImages );

    TAknsItemID itemId;
    itemId.Set( KAknsIIDQgnPropSetAppsLoc );
    CAknsImageTableItemDef* colorTable = CAknsImageTableItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( colorTable );
    colorTable->SetImages( 1, &itemId );
    const TAknsItemID* imageItemID = colorTable->Images();
    STIF_ASSERT_EQUALS( itemId.iMajor, imageItemID->iMajor );

    CleanupStack::PopAndDestroy( colorTable );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestImageTableNumberOfImagesL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestImageTableNumberOfImagesL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestImageTableNumberOfImages, "In ItemDef ImageTableNumberOfImages" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestImageTableNumberOfImages );
    // Print to log file
    iLog->Log( KTestImageTableNumberOfImages );

    TAknsItemID itemId;
    itemId.Set( KAknsIIDQgnPropSetAppsLoc );
    CAknsImageTableItemDef* colorTable = CAknsImageTableItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( colorTable );
    colorTable->SetImages( 1, &itemId );
    TInt numImages = colorTable->NumberOfImages();
    STIF_ASSERT_EQUALS( 1, numImages );

    CleanupStack::PopAndDestroy( colorTable );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestBmpAnimNewWithFrameInfoL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestBmpAnimNewWithFrameInfoL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestBmpAnimNewWithFrameInfoL, "In ItemDef BmpAnimNewWithFrameInfoL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestBmpAnimNewWithFrameInfoL );
    // Print to log file
    iLog->Log( KTestBmpAnimNewWithFrameInfoL );

    TAknsItemID itemId;
    itemId.Set( KAknsIIDQgnPropSetAppsLoc );
    TAknsBmpAnimFrameInfo frameInfo;
    frameInfo.iTime = KFrameInfoTime;
    frameInfo.iPosX = KFrameInfoPosX;
    frameInfo.iPosY = KFrameInfoPosY;
    CAknsBmpAnimItemDef* bmpAnim = CAknsBmpAnimItemDef::NewL(
            KAknsIIDQgnIndiTpDialler, 1, &itemId, &frameInfo );
    CleanupStack::PushL( bmpAnim );
    STIF_ASSERT_NOT_NULL( bmpAnim );

    CleanupStack::PopAndDestroy( bmpAnim );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestBmpAnimNewL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestBmpAnimNewL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestBmpAnimNewL, "In ItemDef BmpAnimNewL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestBmpAnimNewL );
    // Print to log file
    iLog->Log( KTestBmpAnimNewL );

    CAknsBmpAnimItemDef* bmpAnim = CAknsBmpAnimItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( bmpAnim );
    STIF_ASSERT_NOT_NULL( bmpAnim );

    CleanupStack::PopAndDestroy( bmpAnim );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestBmpAnimSetFrameInfosL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestBmpAnimSetFrameInfosL( CStifItemParser& aItem )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestBmpAnimSetFrameInfos, "In ItemDef BmpAnimSetFrameInfos" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestBmpAnimSetFrameInfos );
    // Print to log file
    iLog->Log( KTestBmpAnimSetFrameInfos );

    TInt num = 0;
    TInt err = aItem.GetNextInt( num );
    if ( err != KErrNone )
        {
        return err;
        }

    TAknsBmpAnimFrameInfo frameInfo;
    frameInfo.iTime = KFrameInfoTime;
    frameInfo.iPosX = KFrameInfoPosX;
    frameInfo.iPosY = KFrameInfoPosY;
    CAknsBmpAnimItemDef* bmpAnim = CAknsBmpAnimItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( bmpAnim );

    switch( num )
        {
        case 1:
            bmpAnim->SetFrameInfos( &frameInfo );
            break;
        case 2:
            bmpAnim->SetFrameInfosL( &frameInfo );
            break;
        default:
            CleanupStack::PopAndDestroy( bmpAnim );
            return KErrNotSupported;
        }

    CleanupStack::PopAndDestroy( bmpAnim );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestBmpAnimFrameInfosL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestBmpAnimFrameInfosL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestBmpAnimFrameInfos, "In ItemDef BmpAnimFrameInfos" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestBmpAnimFrameInfos );
    // Print to log file
    iLog->Log( KTestBmpAnimFrameInfos );

    TAknsBmpAnimFrameInfo frameInfo;
    frameInfo.iTime = KFrameInfoTime;
    frameInfo.iPosX = KFrameInfoPosX;
    frameInfo.iPosY = KFrameInfoPosY;
    CAknsBmpAnimItemDef* bmpAnim = CAknsBmpAnimItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( bmpAnim );
    bmpAnim->SetFrameInfos( &frameInfo );
    const TAknsBmpAnimFrameInfo* bmpFrameInfo = bmpAnim->FrameInfos();
    STIF_ASSERT_EQUALS( frameInfo.iTime, bmpFrameInfo->iTime );

    CleanupStack::PopAndDestroy( bmpAnim );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestBmpAnimSetLastFrmBgL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestBmpAnimSetLastFrmBgL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestBmpAnimSetLastFrameBackground, "In ItemDef BmpAnimSetLastFrameBackground" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestBmpAnimSetLastFrameBackground );
    // Print to log file
    iLog->Log( KTestBmpAnimSetLastFrameBackground );

    CAknsBmpAnimItemDef* bmpAnim = CAknsBmpAnimItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( bmpAnim );
    bmpAnim->SetLastFrameBackground( ETrue );

    CleanupStack::PopAndDestroy( bmpAnim );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestBmpAnimLastFrmBgL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestBmpAnimLastFrmBgL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestBmpAnimLastFrameBackground, "In ItemDef BmpAnimLastFrameBackground" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestBmpAnimLastFrameBackground );
    // Print to log file
    iLog->Log( KTestBmpAnimLastFrameBackground );

    CAknsBmpAnimItemDef* bmpAnim = CAknsBmpAnimItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( bmpAnim );
    bmpAnim->SetLastFrameBackground( ETrue );

    TBool lastFrame = bmpAnim->LastFrameBackground();
    STIF_ASSERT_TRUE( lastFrame );

    CleanupStack::PopAndDestroy( bmpAnim );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestBmpAnimSetFrameIntervalL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestBmpAnimSetFrameIntervalL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestBmpAnimSetFrameInterval, "In ItemDef BmpAnimSetFrameInterval" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestBmpAnimSetFrameInterval );
    // Print to log file
    iLog->Log( KTestBmpAnimSetFrameInterval );

    CAknsBmpAnimItemDef* bmpAnim = CAknsBmpAnimItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( bmpAnim );
    bmpAnim->SetFrameInterval( 1 );

    CleanupStack::PopAndDestroy( bmpAnim );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestBmpAnimFrameIntervalL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestBmpAnimFrameIntervalL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestBmpAnimFrameInterval, "In ItemDef BmpAnimFrameInterval" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestBmpAnimFrameInterval );
    // Print to log file
    iLog->Log( KTestBmpAnimFrameInterval );

    CAknsBmpAnimItemDef* bmpAnim = CAknsBmpAnimItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( bmpAnim );
    bmpAnim->SetFrameInterval( 1 );

    TInt16 frameInter = bmpAnim->FrameInterval();
    STIF_ASSERT_EQUALS( 1, static_cast<TInt>( frameInter ) );

    CleanupStack::PopAndDestroy( bmpAnim );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestBmpAnimSetPlayModeL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestBmpAnimSetPlayModeL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestBmpAnimSetPlayMode, "In ItemDef BmpAnimSetPlayMode" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestBmpAnimSetPlayMode );
    // Print to log file
    iLog->Log( KTestBmpAnimSetPlayMode );

    CAknsBmpAnimItemDef* bmpAnim = CAknsBmpAnimItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( bmpAnim );
    bmpAnim->SetPlayMode( 1 );

    CleanupStack::PopAndDestroy( bmpAnim );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestBmpAnimPlayModeL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestBmpAnimPlayModeL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestBmpAnimPlayMode, "In ItemDef BmpAnimPlayMode" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestBmpAnimPlayMode );
    // Print to log file
    iLog->Log( KTestBmpAnimPlayMode );

    CAknsBmpAnimItemDef* bmpAnim = CAknsBmpAnimItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( bmpAnim );
    bmpAnim->SetPlayMode( 1 );

    TInt16 playMode = bmpAnim->PlayMode();
    STIF_ASSERT_EQUALS( 1, static_cast<TInt>( playMode ) );

    CleanupStack::PopAndDestroy( bmpAnim );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestBmpAnimSetFlashL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestBmpAnimSetFlashL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestBmpAnimSetFlash, "In ItemDef BmpAnimSetFlash" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestBmpAnimSetFlash );
    // Print to log file
    iLog->Log( KTestBmpAnimSetFlash );

    CAknsBmpAnimItemDef* bmpAnim = CAknsBmpAnimItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( bmpAnim );
    bmpAnim->SetFlash( ETrue );

    CleanupStack::PopAndDestroy( bmpAnim );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestBmpAnimFlashL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestBmpAnimFlashL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestBmpAnimFlash, "In ItemDef BmpAnimFlash" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestBmpAnimFlash );
    // Print to log file
    iLog->Log( KTestBmpAnimFlash );

    CAknsBmpAnimItemDef* bmpAnim = CAknsBmpAnimItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( bmpAnim );
    bmpAnim->SetFlash( ETrue );

    TBool isFlash = bmpAnim->Flash();
    STIF_ASSERT_TRUE( isFlash );

    CleanupStack::PopAndDestroy( bmpAnim );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestStringNewL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestStringNewL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestStringNewL, "In ItemDef StringNewL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestStringNewL );
    // Print to log file
    iLog->Log( KTestStringNewL );

    CAknsStringItemDef* strItemDef = CAknsStringItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( strItemDef );
    STIF_ASSERT_NOT_NULL( strItemDef );

    CleanupStack::PopAndDestroy( strItemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestStringSetStringL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestStringSetStringL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestStringSetStringL, "In ItemDef StringSetStringL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestStringSetStringL );
    // Print to log file
    iLog->Log( KTestStringSetStringL );

    CAknsStringItemDef* strItemDef = CAknsStringItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( strItemDef );
    _LIT( KString, "string" );
    strItemDef->SetStringL( KString );

    CleanupStack::PopAndDestroy( strItemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestStringStringL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestStringStringL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestStringString, "In ItemDef StringString" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestStringString );
    // Print to log file
    iLog->Log( KTestStringString );

    CAknsStringItemDef* strItemDef = CAknsStringItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( strItemDef );
    _LIT( KString, "string" );
    strItemDef->SetStringL( KString );

    const TDesC string = strItemDef->String();
    STIF_ASSERT_NOT_EQUALS( 0, string.Length() );

    CleanupStack::PopAndDestroy( strItemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestEffParamNewL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestEffParamNewL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestEffParamNewL, "In ItemDef EffParamNewL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestEffParamNewL );
    // Print to log file
    iLog->Log( KTestEffParamNewL );

    CAknsEffectParamDef* paramDef = CAknsEffectParamDef::NewL();
    CleanupStack::PushL( paramDef );
    STIF_ASSERT_NOT_NULL( paramDef );

    CleanupStack::PopAndDestroy( paramDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestEffParamSetTypeL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestEffParamSetTypeL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestEffParamSetType, "In ItemDef EffParamSetType" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestEffParamSetType );
    // Print to log file
    iLog->Log( KTestEffParamSetType );

    CAknsEffectParamDef* paramDef = CAknsEffectParamDef::NewL();
    CleanupStack::PushL( paramDef );
    paramDef->SetType( 1 );

    CleanupStack::PopAndDestroy( paramDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestEffParamGetTypeL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestEffParamGetTypeL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestEffParamGetType, "In ItemDef EffParamGetType" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestEffParamGetType );
    // Print to log file
    iLog->Log( KTestEffParamGetType );

    CAknsEffectParamDef* paramDef = CAknsEffectParamDef::NewL();
    CleanupStack::PushL( paramDef );
    paramDef->SetType( 1 );

    TUint32 type = paramDef->GetType();
    STIF_ASSERT_EQUALS( 1, static_cast<TInt>( type ) );

    CleanupStack::PopAndDestroy( paramDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestEffParamSetNameL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestEffParamSetNameL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestEffParamSetNameL, "In ItemDef EffParamSetNameL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestEffParamSetNameL );
    // Print to log file
    iLog->Log( KTestEffParamSetNameL );

    CAknsEffectParamDef* paramDef = CAknsEffectParamDef::NewL();
    CleanupStack::PushL( paramDef );
    _LIT( KTxtName, "EffectParam" );
    paramDef->SetNameL( KTxtName );

    CleanupStack::PopAndDestroy( paramDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestEffParamGetNameL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestEffParamGetNameL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestEffParamGetNameL, "In ItemDef EffParamGetNameL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestEffParamGetNameL );
    // Print to log file
    iLog->Log( KTestEffParamGetNameL );

    CAknsEffectParamDef* paramDef = CAknsEffectParamDef::NewL();
    CleanupStack::PushL( paramDef );
    _LIT( KTxtName, "EffectParam" );
    paramDef->SetNameL( KTxtName );

    const TDesC* name = paramDef->GetName();
    STIF_ASSERT_NOT_EQUALS( 0, name->Length() );

    CleanupStack::PopAndDestroy( paramDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestEffParamSetValueL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestEffParamSetValueL( CStifItemParser& aItem )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestEffParamSetValue, "In ItemDef EffParamSetValue" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestEffParamSetValue );
    // Print to log file
    iLog->Log( KTestEffParamSetValue );

    TInt num = 0;
    TInt err = aItem.GetNextInt( num );
    if ( err != KErrNone )
        {
        return err;
        }

    CAknsEffectParamDef* paramDef = CAknsEffectParamDef::NewL();
    CleanupStack::PushL( paramDef );
    _LIT( KTxtValue, "value" );

    switch( num )
        {
        case 1:
            paramDef->SetValue( 1 );
            break;
        case 2:
            paramDef->SetValueL( KTxtValue );
            break;
        case 3:
            paramDef->SetValueL( KTxtValue, 1, 2 );
            break;
        default:
            CleanupStack::PopAndDestroy( paramDef );
            return KErrNotSupported;
        }

    CleanupStack::PopAndDestroy( paramDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestEffParamGetNumberL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestEffParamGetNumberL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestEffParamGetNumber, "In ItemDef EffParamGetNumber" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestEffParamGetNumber );
    // Print to log file
    iLog->Log( KTestEffParamGetNumber );

    CAknsEffectParamDef* paramDef = CAknsEffectParamDef::NewL();
    CleanupStack::PushL( paramDef );
    paramDef->SetValue( 1 );

    TUint32 paramNum = paramDef->GetNumber();
    STIF_ASSERT_EQUALS( 1, static_cast<TInt>( paramNum ) );

    CleanupStack::PopAndDestroy( paramDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestEffParamGetStringL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestEffParamGetStringL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestEffParamGetString, "In ItemDef EffParamGetString" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestEffParamGetString );
    // Print to log file
    iLog->Log( KTestEffParamGetString );

    CAknsEffectParamDef* paramDef = CAknsEffectParamDef::NewL();
    CleanupStack::PushL( paramDef );
    _LIT( KTxtValue, "value" );
    paramDef->SetValueL( KTxtValue );

    const TDesC* paramString = paramDef->GetString();
    STIF_ASSERT_NOT_EQUALS( 0, paramString->Length() );

    CleanupStack::PopAndDestroy( paramDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestEffParamGetFilenameL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestEffParamGetFilenameL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestEffParamGetFilename, "In ItemDef EffParamGetFilename" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestEffParamGetFilename );
    // Print to log file
    iLog->Log( KTestEffParamGetFilename );

    CAknsEffectParamDef* paramDef = CAknsEffectParamDef::NewL();
    CleanupStack::PushL( paramDef );
    _LIT( KTxtValue, "value" );
    paramDef->SetValueL( KTxtValue, 1, 2 );

    const TDesC* fileName = paramDef->GetFilename();
    STIF_ASSERT_NOT_EQUALS( 0, fileName->Length() );

    CleanupStack::PopAndDestroy( paramDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestEffParamGetBmpIndexL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestEffParamGetBmpIndexL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestEffParamGetBitmapIndex, "In ItemDef EffParamGetBitmapIndex" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestEffParamGetBitmapIndex );
    // Print to log file
    iLog->Log( KTestEffParamGetBitmapIndex );

    CAknsEffectParamDef* paramDef = CAknsEffectParamDef::NewL();
    CleanupStack::PushL( paramDef );
    _LIT( KTxtValue, "value" );
    paramDef->SetValueL( KTxtValue, 1, 2 );

    TUint32 bmpIndex = paramDef->GetBitmapIndex();
    STIF_ASSERT_EQUALS( 1, static_cast<TInt>( bmpIndex ) );

    CleanupStack::PopAndDestroy( paramDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestEffParamGetMaskIndexL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestEffParamGetMaskIndexL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestEffParamGetMaskIndex, "In ItemDef EffParamGetMaskIndex" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestEffParamGetMaskIndex );
    // Print to log file
    iLog->Log( KTestEffParamGetMaskIndex );

    CAknsEffectParamDef* paramDef = CAknsEffectParamDef::NewL();
    CleanupStack::PushL( paramDef );
    _LIT( KTxtValue, "value" );
    paramDef->SetValueL( KTxtValue, 1, 2 );

    TUint32 maskIndex = paramDef->GetMaskIndex();
    STIF_ASSERT_EQUALS( 2, static_cast<TInt>( maskIndex ) );

    CleanupStack::PopAndDestroy( paramDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestEffectNewL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestEffectNewL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestEffectNewL, "In ItemDef EffectNewL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestEffectNewL );
    // Print to log file
    iLog->Log( KTestEffectNewL );

    CAknsEffectItemDef* effItemDef = CAknsEffectItemDef::NewL();
    CleanupStack::PushL( effItemDef );
    STIF_ASSERT_NOT_NULL( effItemDef );

    CleanupStack::PopAndDestroy( effItemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestEffectSetEffectUidL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestEffectSetEffectUidL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestEffectSetEffectUid, "In ItemDef EffectSetEffectUid" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestEffectSetEffectUid );
    // Print to log file
    iLog->Log( KTestEffectSetEffectUid );

    CAknsEffectItemDef* effItemDef = CAknsEffectItemDef::NewL();
    CleanupStack::PushL( effItemDef );
    TUid efUid = { 0x1818518 };
    effItemDef->SetEffectUid( efUid );

    CleanupStack::PopAndDestroy( effItemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestEffectEffectUidL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestEffectEffectUidL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestEffectEffectUid, "In ItemDef EffectEffectUid" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestEffectEffectUid );
    // Print to log file
    iLog->Log( KTestEffectEffectUid );

    CAknsEffectItemDef* effItemDef = CAknsEffectItemDef::NewL();
    CleanupStack::PushL( effItemDef );
    TUid efUid = { 0x1818518 };
    effItemDef->SetEffectUid( efUid );

    TUid effectUid = effItemDef->EffectUid();
    STIF_ASSERT_EQUALS( efUid, effectUid );

    CleanupStack::PopAndDestroy( effItemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestEffectAddParameterL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestEffectAddParameterL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestEffectAddParameterL, "In ItemDef EffectAddParameterL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestEffectAddParameterL );
    // Print to log file
    iLog->Log( KTestEffectAddParameterL );

    CAknsEffectItemDef* effItemDef = CAknsEffectItemDef::NewL();
    CleanupStack::PushL( effItemDef );
    CAknsEffectParamDef* effParDef = CAknsEffectParamDef::NewL();
    CleanupStack::PushL( effParDef );
    effItemDef->AddParameterL( effParDef );

    CleanupStack::PopAndDestroy( effParDef );
    CleanupStack::Pop( effItemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestEffectGetParameterL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestEffectGetParameterL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestEffectGetParameter, "In ItemDef EffectGetParameter" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestEffectGetParameter );
    // Print to log file
    iLog->Log( KTestEffectGetParameter );

    CAknsEffectItemDef* effItemDef = CAknsEffectItemDef::NewL();
    CleanupStack::PushL( effItemDef );
    CAknsEffectParamDef* effParDef = CAknsEffectParamDef::NewL();
    CleanupStack::PushL( effParDef );
    effItemDef->AddParameterL( effParDef );

    CAknsEffectParamDef* effParamDef = effItemDef->GetParameter( 0 );
    STIF_ASSERT_NOT_NULL( effParamDef );

    CleanupStack::PopAndDestroy( effParDef );
    CleanupStack::Pop( effItemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestEffectParameterCountL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestEffectParameterCountL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestEffectParameterCount, "In ItemDef EffectParameterCount" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestEffectParameterCount );
    // Print to log file
    iLog->Log( KTestEffectParameterCount );

    CAknsEffectItemDef* effItemDef = CAknsEffectItemDef::NewL();
    CleanupStack::PushL( effItemDef );
    CAknsEffectParamDef* effParDef = CAknsEffectParamDef::NewL();
    CleanupStack::PushL( effParDef );
    effItemDef->AddParameterL( effParDef );

    TInt paramCount = effItemDef->ParameterCount();
    STIF_ASSERT_EQUALS( 1, paramCount );

    CleanupStack::PopAndDestroy( effParDef );
    CleanupStack::Pop( effItemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestEffectSetLayIndAndModL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestEffectSetLayIndAndModL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestEffectSetLayerIndexesAndModes, "In ItemDef EffectSetLayerIndexesAndModes" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestEffectSetLayerIndexesAndModes );
    // Print to log file
    iLog->Log( KTestEffectSetLayerIndexesAndModes );

    CAknsEffectItemDef* effItemDef = CAknsEffectItemDef::NewL();
    CleanupStack::PushL( effItemDef );

    effItemDef->SetLayerIndexesAndModes( 1, 2, 3, 4, 5, 6 );

    CleanupStack::PopAndDestroy( effItemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestEffQueueNewL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestEffQueueNewL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestEffQueueNewL, "In ItemDef EffQueueNewL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestEffQueueNewL );
    // Print to log file
    iLog->Log( KTestEffQueueNewL );

    CAknsEffectQueueItemDef* effQueueDef = CAknsEffectQueueItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( effQueueDef );
    STIF_ASSERT_NOT_NULL( effQueueDef );

    CleanupStack::PopAndDestroy( effQueueDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestEffQueueAddEffectL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestEffQueueAddEffectL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestEffQueueAddEffectL, "In ItemDef EffectAddEffectL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestEffQueueAddEffectL );
    // Print to log file
    iLog->Log( KTestEffQueueAddEffectL );

    CAknsEffectQueueItemDef* effQueueDef = CAknsEffectQueueItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( effQueueDef );
    CAknsEffectItemDef* effItemDef = CAknsEffectItemDef::NewL();
    CleanupStack::PushL( effItemDef );
    effQueueDef->AddEffectL( effItemDef );

    CleanupStack::PopAndDestroy( effItemDef );
    CleanupStack::Pop( effQueueDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestEffQueueGetEffectL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestEffQueueGetEffectL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestEffQueueGetEffect, "In ItemDef EffectGetEffect" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestEffQueueGetEffect );
    // Print to log file
    iLog->Log( KTestEffQueueGetEffect );

    CAknsEffectQueueItemDef* effQueueDef = CAknsEffectQueueItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( effQueueDef );
    CAknsEffectItemDef* effItemDef = CAknsEffectItemDef::NewL();
    CleanupStack::PushL( effItemDef );
    effQueueDef->AddEffectL( effItemDef );

    CAknsEffectItemDef* effectItem = effQueueDef->GetEffect( 0 );
    STIF_ASSERT_NOT_NULL( effectItem );

    CleanupStack::PopAndDestroy( effItemDef );
    CleanupStack::Pop( effQueueDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestEffQueueEffectCountL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestEffQueueEffectCountL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestEffQueueEffectCount, "In ItemDef EffectEffectCount" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestEffQueueEffectCount );
    // Print to log file
    iLog->Log( KTestEffQueueEffectCount );

    CAknsEffectQueueItemDef* effQueueDef = CAknsEffectQueueItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( effQueueDef );
    CAknsEffectItemDef* effItemDef = CAknsEffectItemDef::NewL();
    CleanupStack::PushL( effItemDef );
    effQueueDef->AddEffectL( effItemDef );

    TInt paramCount = effQueueDef->EffectCount();
    STIF_ASSERT_EQUALS( 1, paramCount );

    CleanupStack::PopAndDestroy( effItemDef );
    CleanupStack::Pop( effQueueDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestEffQueueSetLayIndAndModL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestEffQueueSetLayIndAndModL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestEffQueueSetLayerIndexesAndModes, "In ItemDef EffectSetLayerIndexesAndModes" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestEffQueueSetLayerIndexesAndModes );
    // Print to log file
    iLog->Log( KTestEffQueueSetLayerIndexesAndModes );

    CAknsEffectQueueItemDef* effQueueDef = CAknsEffectQueueItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( effQueueDef );

    effQueueDef->SetLayerIndexesAndModes( 1, 2, 3, 4 );

    CleanupStack::PopAndDestroy( effQueueDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestEffQueueSetReferenceL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestEffQueueSetReferenceL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestEffQueueSetReference, "In ItemDef EffectSetReference" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestEffQueueSetReference );
    // Print to log file
    iLog->Log( KTestEffQueueSetReference );

    CAknsEffectQueueItemDef* effQueueDef = CAknsEffectQueueItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( effQueueDef );

    TAknsItemID itemQueueId;
    itemQueueId.Set( KAknsIIDQgnPropSetAppsLoc );
    effQueueDef->SetReference( itemQueueId );

    CleanupStack::PopAndDestroy( effQueueDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestSBParamNewL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestSBParamNewL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestSBParamNewL, "In ItemDef SBParamNewL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestSBParamNewL );
    // Print to log file
    iLog->Log( KTestSBParamNewL );

    CAknsSizeBoundParamDef* boundParamDef = CAknsSizeBoundParamDef::NewL();
    CleanupStack::PushL( boundParamDef );
    STIF_ASSERT_NOT_NULL( boundParamDef );

    CleanupStack::PopAndDestroy( boundParamDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestSBParamSetDataL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestSBParamSetDataL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestSBParamSetDataL, "In ItemDef SBParamSetDataL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestSBParamSetDataL );
    // Print to log file
    iLog->Log( KTestSBParamSetDataL );

    CAknsSizeBoundParamDef* boundParamDef = CAknsSizeBoundParamDef::NewL();
    CleanupStack::PushL( boundParamDef );

    _LIT( KTxtBoundName, "SizeBound" );
    boundParamDef->SetDataL( KTxtBoundName, 1, 1 );

    CleanupStack::PopAndDestroy( boundParamDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestSBParamNameL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestSBParamNameL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestSBParamName, "In ItemDef SBParamName" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestSBParamName );
    // Print to log file
    iLog->Log( KTestSBParamName );

    CAknsSizeBoundParamDef* boundParamDef = CAknsSizeBoundParamDef::NewL();
    CleanupStack::PushL( boundParamDef );
    _LIT( KTxtBoundName, "SizeBound" );
    boundParamDef->SetDataL( KTxtBoundName, 1, 1 );

    const TDesC* name = boundParamDef->Name();
    STIF_ASSERT_NOT_EQUALS( 0, name->Length() );

    CleanupStack::PopAndDestroy( boundParamDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestSBParamAnimValueIdL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestSBParamAnimValueIdL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestSBParamAnimationValueId, "In ItemDef SBParamAnimationValueId" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestSBParamAnimationValueId );
    // Print to log file
    iLog->Log( KTestSBParamAnimationValueId );

    CAknsSizeBoundParamDef* boundParamDef = CAknsSizeBoundParamDef::NewL();
    CleanupStack::PushL( boundParamDef );
    _LIT( KTxtBoundName, "SizeBound" );
    boundParamDef->SetDataL( KTxtBoundName, 1, 1 );

    TUint32 boundValudId = boundParamDef->AnimationValueId();
    STIF_ASSERT_EQUALS( 1, static_cast<TInt>( boundValudId ) );

    CleanupStack::PopAndDestroy( boundParamDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestSBParamParamFlagsL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestSBParamParamFlagsL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestSBParamParamFlags, "In ItemDef SBParamParamFlags" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestSBParamParamFlags );
    // Print to log file
    iLog->Log( KTestSBParamParamFlags );

    CAknsSizeBoundParamDef* boundParamDef = CAknsSizeBoundParamDef::NewL();
    CleanupStack::PushL( boundParamDef );
    _LIT( KTxtBoundName, "SizeBound" );
    boundParamDef->SetDataL( KTxtBoundName, 1, 1 );

    TInt paramFlags = boundParamDef->ParamFlags();
    STIF_ASSERT_EQUALS( 1, static_cast<TInt>( paramFlags ) );

    CleanupStack::PopAndDestroy( boundParamDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestNameRefNewL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestNameRefNewL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestNameRefNewL, "In ItemDef NameRefNewL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestNameRefNewL );
    // Print to log file
    iLog->Log( KTestNameRefNewL );

    CAknsNamedReferenceDef* nameRefDef = CAknsNamedReferenceDef::NewL();
    CleanupStack::PushL( nameRefDef );
    STIF_ASSERT_NOT_NULL( nameRefDef );

    CleanupStack::PopAndDestroy( nameRefDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestNameRefSetDataL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestNameRefSetDataL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestNameRefSetDataL, "In ItemDef NameRefSetDataL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestNameRefSetDataL );
    // Print to log file
    iLog->Log( KTestNameRefSetDataL );

    CAknsNamedReferenceDef* nameRefDef = CAknsNamedReferenceDef::NewL();
    CleanupStack::PushL( nameRefDef );

    _LIT( KTxtNameRef, "NameRef" );
    nameRefDef->SetDataL( KTxtNameRef, 1 );

    CleanupStack::PopAndDestroy( nameRefDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestNameRefNameL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestNameRefNameL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestNameRefName, "In ItemDef NameRefName" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestNameRefName );
    // Print to log file
    iLog->Log( KTestNameRefName );

    CAknsNamedReferenceDef* nameRefDef = CAknsNamedReferenceDef::NewL();
    CleanupStack::PushL( nameRefDef );
    _LIT( KTxtNameRef, "NameRef" );
    nameRefDef->SetDataL( KTxtNameRef, 1 );

    const TDesC* name = nameRefDef->Name();
    STIF_ASSERT_NOT_EQUALS( 0, name->Length() );

    CleanupStack::PopAndDestroy( nameRefDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestNameRefAnimValueIdL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestNameRefAnimValueIdL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestNameRefAnimationValueId, "In ItemDef NameRefAnimationValueId" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestNameRefAnimationValueId );
    // Print to log file
    iLog->Log( KTestNameRefAnimationValueId );

    CAknsNamedReferenceDef* nameRefDef = CAknsNamedReferenceDef::NewL();
    CleanupStack::PushL( nameRefDef );
    _LIT( KTxtNameRef, "NameRef" );
    nameRefDef->SetDataL( KTxtNameRef, 1 );

    TUint32 refValudId = nameRefDef->AnimationValueId();
    STIF_ASSERT_EQUALS( 1, static_cast<TInt>( refValudId ) );

    CleanupStack::PopAndDestroy( nameRefDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestTimModelNewL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestTimModelNewL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestTimModelNewL, "In ItemDef TimModelNewL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestTimModelNewL );
    // Print to log file
    iLog->Log( KTestTimModelNewL );

    CAknsTimingModelDef* timModelDef = CAknsTimingModelDef::NewL();
    CleanupStack::PushL( timModelDef );
    STIF_ASSERT_NOT_NULL( timModelDef );

    CleanupStack::PopAndDestroy( timModelDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestTimModelSetTimingModelUidL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestTimModelSetTimingModelUidL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestTimModelSetTimingModelUid, "In ItemDef TimModelSetTimingModelUid" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestTimModelSetTimingModelUid );
    // Print to log file
    iLog->Log( KTestTimModelSetTimingModelUid );

    CAknsTimingModelDef* timModelDef = CAknsTimingModelDef::NewL();
    CleanupStack::PushL( timModelDef );
    TUid timUid = { 0x1818518 };
    timModelDef->SetTimingModelUid( timUid );

    CleanupStack::PopAndDestroy( timModelDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestTimModelTimingModelUidL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestTimModelTimingModelUidL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestTimModelTimingModelUid, "In ItemDef TimModelTimingModelUid" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestTimModelTimingModelUid );
    // Print to log file
    iLog->Log( KTestTimModelTimingModelUid );

    CAknsTimingModelDef* timModelDef = CAknsTimingModelDef::NewL();
    CleanupStack::PushL( timModelDef );
    TUid timUid = { 0x1818518 };
    timModelDef->SetTimingModelUid( timUid );

    TUid timModelUid = timModelDef->TimingModelUid();
    STIF_ASSERT_EQUALS( timUid, timModelUid );

    CleanupStack::PopAndDestroy( timModelDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestTimModelAddParameterL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestTimModelAddParameterL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestTimModelAddParameterL, "In ItemDef TimModelAddParameterL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestTimModelAddParameterL );
    // Print to log file
    iLog->Log( KTestTimModelAddParameterL );

    CAknsTimingModelDef* timModelDef = CAknsTimingModelDef::NewL();
    CleanupStack::PushL( timModelDef );
    CAknsEffectParamDef* effParDef = CAknsEffectParamDef::NewL();
    CleanupStack::PushL( effParDef );
    timModelDef->AddParameterL( effParDef );

    CleanupStack::PopAndDestroy( effParDef );
    CleanupStack::Pop( timModelDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestTimModelParameterL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestTimModelParameterL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestTimModelParameter, "In ItemDef TimModelParameter" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestTimModelParameter );
    // Print to log file
    iLog->Log( KTestTimModelParameter );

    CAknsTimingModelDef* timModelDef = CAknsTimingModelDef::NewL();
    CleanupStack::PushL( timModelDef );
    CAknsEffectParamDef* effParDef = CAknsEffectParamDef::NewL();
    CleanupStack::PushL( effParDef );
    timModelDef->AddParameterL( effParDef );

    CAknsEffectParamDef* effParamDef = timModelDef->Parameter( 0 );
    STIF_ASSERT_NOT_NULL( effParamDef );

    CleanupStack::PopAndDestroy( effParDef );
    CleanupStack::Pop( timModelDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestTimModelParameterCountL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestTimModelParameterCountL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestTimModelParameterCount, "In ItemDef TimModelParameterCount" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestTimModelParameterCount );
    // Print to log file
    iLog->Log( KTestTimModelParameterCount );

    CAknsTimingModelDef* timModelDef = CAknsTimingModelDef::NewL();
    CleanupStack::PushL( timModelDef );
    CAknsEffectParamDef* effParDef = CAknsEffectParamDef::NewL();
    CleanupStack::PushL( effParDef );
    timModelDef->AddParameterL( effParDef );

    TInt paramCount = timModelDef->ParameterCount();
    STIF_ASSERT_EQUALS( 1, paramCount );

    CleanupStack::PopAndDestroy( effParDef );
    CleanupStack::Pop( timModelDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimValueNewL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimValueNewL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimValueNewL, "In ItemDef AnimValueNewL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimValueNewL );
    // Print to log file
    iLog->Log( KTestAnimValueNewL );

    CAknsAnimationValueDef* animValueDef = CAknsAnimationValueDef::NewL();
    CleanupStack::PushL( animValueDef );
    STIF_ASSERT_NOT_NULL( animValueDef );

    CleanupStack::PopAndDestroy( animValueDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimValueSetAnimValueUidL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimValueSetAnimValueUidL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimValueSetAnimationValueUid, "In ItemDef AnimValueSetAnimationValueUid" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimValueSetAnimationValueUid );
    // Print to log file
    iLog->Log( KTestAnimValueSetAnimationValueUid );

    CAknsAnimationValueDef* animValueDef = CAknsAnimationValueDef::NewL();
    CleanupStack::PushL( animValueDef );
    TUid animUid = { 0x1818518 };
    animValueDef->SetAnimationValueUid( animUid );

    CleanupStack::PopAndDestroy( animValueDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimValueAnimValueUidL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimValueAnimValueUidL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimValueAnimationValueUid, "In ItemDef AnimValueAnimationValueUid" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimValueAnimationValueUid );
    // Print to log file
    iLog->Log( KTestAnimValueAnimationValueUid );

    CAknsAnimationValueDef* animValueDef = CAknsAnimationValueDef::NewL();
    CleanupStack::PushL( animValueDef );
    TUid animUid = { 0x1818518 };
    animValueDef->SetAnimationValueUid( animUid );

    TUid animValueUid = animValueDef->AnimationValueUid();
    STIF_ASSERT_EQUALS( animUid, animValueUid );

    CleanupStack::PopAndDestroy( animValueDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimValueSetTimModelIdL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimValueSetTimModelIdL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimValueSetTimingModelId, "In ItemDef AnimValueSetTimingModelId" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimValueSetTimingModelId );
    // Print to log file
    iLog->Log( KTestAnimValueSetTimingModelId );

    CAknsAnimationValueDef* animValueDef = CAknsAnimationValueDef::NewL();
    CleanupStack::PushL( animValueDef );
    animValueDef->SetTimingModelId( 1 );

    CleanupStack::PopAndDestroy( animValueDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimValueTimingModelIdL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimValueTimingModelIdL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimValueTimingModelId, "In ItemDef AnimValueTimingModelId" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimValueTimingModelId );
    // Print to log file
    iLog->Log( KTestAnimValueTimingModelId );

    CAknsAnimationValueDef* animValueDef = CAknsAnimationValueDef::NewL();
    CleanupStack::PushL( animValueDef );
    animValueDef->SetTimingModelId( 1 );

    TUint32 animModelId = animValueDef->TimingModelId();
    STIF_ASSERT_EQUALS( 1, static_cast<TInt>( animModelId ) );

    CleanupStack::PopAndDestroy( animValueDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimValueAddParameterL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimValueAddParameterL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimValueAddParameterL, "In ItemDef AnimValueAddParameterL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimValueAddParameterL );
    // Print to log file
    iLog->Log( KTestAnimValueAddParameterL );

    CAknsAnimationValueDef* animValueDef = CAknsAnimationValueDef::NewL();
    CleanupStack::PushL( animValueDef );
    CAknsEffectParamDef* effParDef = CAknsEffectParamDef::NewL();
    CleanupStack::PushL( effParDef );
    animValueDef->AddParameterL( effParDef );

    CleanupStack::PopAndDestroy( effParDef );
    CleanupStack::Pop( animValueDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimValueParameterL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimValueParameterL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimValueParameter, "In ItemDef AnimValueParameter" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimValueParameter );
    // Print to log file
    iLog->Log( KTestAnimValueParameter );

    CAknsAnimationValueDef* animValueDef = CAknsAnimationValueDef::NewL();
    CleanupStack::PushL( animValueDef );
    CAknsEffectParamDef* effParDef = CAknsEffectParamDef::NewL();
    CleanupStack::PushL( effParDef );
    animValueDef->AddParameterL( effParDef );

    CAknsEffectParamDef* effParamDef = animValueDef->Parameter( 0 );
    STIF_ASSERT_NOT_NULL( effParamDef );

    CleanupStack::PopAndDestroy( effParDef );
    CleanupStack::Pop( animValueDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimValueParameterCountL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimValueParameterCountL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimValueParameterCount, "In ItemDef AnimValueParameterCount" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimValueParameterCount );
    // Print to log file
    iLog->Log( KTestAnimValueParameterCount );

    CAknsAnimationValueDef* animValueDef = CAknsAnimationValueDef::NewL();
    CleanupStack::PushL( animValueDef );
    CAknsEffectParamDef* effParDef = CAknsEffectParamDef::NewL();
    CleanupStack::PushL( effParDef );
    animValueDef->AddParameterL( effParDef );

    TInt paramCount = animValueDef->ParameterCount();
    STIF_ASSERT_EQUALS( 1, paramCount );

    CleanupStack::PopAndDestroy( effParDef );
    CleanupStack::Pop( animValueDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimCmdNewL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimCmdNewL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimCmdNewL, "In ItemDef AnimCmdNewL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimCmdNewL );
    // Print to log file
    iLog->Log( KTestAnimCmdNewL );

    CAknsAnimationCommandItemDef* aniCmdDef = CAknsAnimationCommandItemDef::NewL();
    CleanupStack::PushL( aniCmdDef );
    STIF_ASSERT_NOT_NULL( aniCmdDef );

    CleanupStack::PopAndDestroy( aniCmdDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimCmdAddNamedRefL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimCmdAddNamedRefL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimCmdAddNamedReferenceL, "In ItemDef AnimCmdAddNamedReferenceL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimCmdAddNamedReferenceL );
    // Print to log file
    iLog->Log( KTestAnimCmdAddNamedReferenceL );

    CAknsAnimationCommandItemDef* aniCmdDef = CAknsAnimationCommandItemDef::NewL();
    CleanupStack::PushL( aniCmdDef );
    CAknsNamedReferenceDef* namedRefDef = CAknsNamedReferenceDef::NewL();
    CleanupStack::PushL( namedRefDef );
    aniCmdDef->AddNamedReferenceL( namedRefDef );

    CleanupStack::PopAndDestroy( namedRefDef );
    CleanupStack::Pop( aniCmdDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimCmdNamedRefL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimCmdNamedRefL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimCmdNamedReference, "In ItemDef AnimCmdNamedReference" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimCmdNamedReference );
    // Print to log file
    iLog->Log( KTestAnimCmdNamedReference );

    CAknsAnimationCommandItemDef* aniCmdDef = CAknsAnimationCommandItemDef::NewL();
    CleanupStack::PushL( aniCmdDef );
    CAknsNamedReferenceDef* namedRefDef = CAknsNamedReferenceDef::NewL();
    CleanupStack::PushL( namedRefDef );
    aniCmdDef->AddNamedReferenceL( namedRefDef );

    CAknsNamedReferenceDef* nameRefDef = aniCmdDef->NamedReference( 0 );
    STIF_ASSERT_NOT_NULL( nameRefDef );

    CleanupStack::PopAndDestroy( namedRefDef );
    CleanupStack::Pop( aniCmdDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimCmdNamedRefCountL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimCmdNamedRefCountL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimCmdNamedReferenceCount, "In ItemDef AnimCmdNamedReferenceCount" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimCmdNamedReferenceCount );
    // Print to log file
    iLog->Log( KTestAnimCmdNamedReferenceCount );

    CAknsAnimationCommandItemDef* aniCmdDef = CAknsAnimationCommandItemDef::NewL();
    CleanupStack::PushL( aniCmdDef );
    CAknsNamedReferenceDef* namedRefDef = CAknsNamedReferenceDef::NewL();
    CleanupStack::PushL( namedRefDef );
    aniCmdDef->AddNamedReferenceL( namedRefDef );

    TInt paramCount = aniCmdDef->NamedReferenceCount();
    STIF_ASSERT_EQUALS( 1, paramCount );

    CleanupStack::PopAndDestroy( namedRefDef );
    CleanupStack::Pop( aniCmdDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimItemNewL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimItemNewL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimItemNewL, "In ItemDef AnimItemNewL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimItemNewL );
    // Print to log file
    iLog->Log( KTestAnimItemNewL );

    CAknsAnimationItemDef* animItemDef = CAknsAnimationItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( animItemDef );
    STIF_ASSERT_NOT_NULL( animItemDef );

    CleanupStack::PopAndDestroy( animItemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimItemSetLayIndAndModL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimItemSetLayIndAndModL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimItemSetLayerIndexesAndModes, "In ItemDef AnimItemSetLayerIndexesAndModes" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimItemSetLayerIndexesAndModes );
    // Print to log file
    iLog->Log( KTestAnimItemSetLayerIndexesAndModes );

    CAknsAnimationItemDef* animItemDef = CAknsAnimationItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( animItemDef );

    animItemDef->SetLayerIndexesAndModes( 1, 2, 3, 4 );

    CleanupStack::PopAndDestroy( animItemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimItemSetMinIntervalL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimItemSetMinIntervalL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimItemSetMinInterval, "In ItemDef AnimItemSetMinInterval" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimItemSetMinInterval );
    // Print to log file
    iLog->Log( KTestAnimItemSetMinInterval );

    CAknsAnimationItemDef* animItemDef = CAknsAnimationItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( animItemDef );
    animItemDef->SetMinInterval( 1 );

    CleanupStack::PopAndDestroy( animItemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimItemMinIntervalL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimItemMinIntervalL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimItemMinInterval, "In ItemDef AnimItemMinInterval" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimItemMinInterval );
    // Print to log file
    iLog->Log( KTestAnimItemMinInterval );

    CAknsAnimationItemDef* animItemDef = CAknsAnimationItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( animItemDef );
    animItemDef->SetMinInterval( 1 );

    TUint32 minInterval= animItemDef->MinInterval();
    STIF_ASSERT_EQUALS( 1, static_cast<TInt>( minInterval ) );

    CleanupStack::PopAndDestroy( animItemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimItemSetMorphingL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimItemSetMorphingL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimItemSetMorphing, "In ItemDef AnimItemSetMorphing" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimItemSetMorphing );
    // Print to log file
    iLog->Log( KTestAnimItemSetMorphing );

    CAknsAnimationItemDef* animItemDef = CAknsAnimationItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( animItemDef );
    animItemDef->SetMorphing( ETrue );

    CleanupStack::PopAndDestroy( animItemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimItemMorphingL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimItemMorphingL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimItemMorphing, "In ItemDef AnimItemMorphing" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimItemMorphing );
    // Print to log file
    iLog->Log( KTestAnimItemMorphing );

    CAknsAnimationItemDef* animItemDef = CAknsAnimationItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( animItemDef );
    animItemDef->SetMorphing( ETrue );

    TBool isMorphing = animItemDef->Morphing();
    STIF_ASSERT_TRUE( isMorphing );

    CleanupStack::PopAndDestroy( animItemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimItemAddPreprocessCmdL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimItemAddPreprocessCmdL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimItemAddPreprocessCommandL, "In ItemDef AnimItemAddPreprocessCommandL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimItemAddPreprocessCommandL );
    // Print to log file
    iLog->Log( KTestAnimItemAddPreprocessCommandL );

    CAknsAnimationItemDef* animItemDef = CAknsAnimationItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( animItemDef );
    CAknsEffectItemDef* effItemDef = CAknsEffectItemDef::NewL();
    CleanupStack::PushL( effItemDef );
    animItemDef->AddPreprocessCommandL( effItemDef );

    CleanupStack::PopAndDestroy( effItemDef );
    CleanupStack::Pop( animItemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimItemPreprocessCmdL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimItemPreprocessCmdL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimItemPreprocessCommand, "In ItemDef AnimItemPreprocessCommand" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimItemPreprocessCommand );
    // Print to log file
    iLog->Log( KTestAnimItemPreprocessCommand );

    CAknsAnimationItemDef* animItemDef = CAknsAnimationItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( animItemDef );
    CAknsEffectItemDef* effItemDef = CAknsEffectItemDef::NewL();
    CleanupStack::PushL( effItemDef );
    animItemDef->AddPreprocessCommandL( effItemDef );

    CAknsEffectItemDef* effectItemDef = animItemDef->PreprocessCommand( 0 );
    STIF_ASSERT_NOT_NULL( effectItemDef );

    CleanupStack::PopAndDestroy( effItemDef );
    CleanupStack::Pop( animItemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimItemPreprocessCmdCountL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimItemPreprocessCmdCountL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimItemPreprocessCommandCount, "In ItemDef AnimItemPreprocessCommandCount" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimItemPreprocessCommandCount );
    // Print to log file
    iLog->Log( KTestAnimItemPreprocessCommandCount );

    CAknsAnimationItemDef* animItemDef = CAknsAnimationItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( animItemDef );
    CAknsEffectItemDef* effItemDef = CAknsEffectItemDef::NewL();
    CleanupStack::PushL( effItemDef );
    animItemDef->AddPreprocessCommandL( effItemDef );

    TInt paramCount = animItemDef->PreprocessCommandCount();
    STIF_ASSERT_EQUALS( 1, paramCount );

    CleanupStack::PopAndDestroy( effItemDef );
    CleanupStack::Pop( animItemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimItemAddAnimCmdItemL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimItemAddAnimCmdItemL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimItemAddAnimationCommandItemL, "In ItemDef AnimItemAddAnimationCommandItemL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimItemAddAnimationCommandItemL );
    // Print to log file
    iLog->Log( KTestAnimItemAddAnimationCommandItemL );

    CAknsAnimationItemDef* animItemDef = CAknsAnimationItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( animItemDef );
    CAknsAnimationCommandItemDef* animCmdDef = CAknsAnimationCommandItemDef::NewL();
    CleanupStack::PushL( animCmdDef );
    animItemDef->AddAnimationCommandItemL( animCmdDef );

    CleanupStack::PopAndDestroy( animCmdDef );
    CleanupStack::Pop( animItemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimItemAnimCmdItemL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimItemAnimCmdItemL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimItemAnimationCommandItem, "In ItemDef AnimItemAnimationCommandItem" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimItemAnimationCommandItem );
    // Print to log file
    iLog->Log( KTestAnimItemAnimationCommandItem );

    CAknsAnimationItemDef* animItemDef = CAknsAnimationItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( animItemDef );
    CAknsAnimationCommandItemDef* animCmdDef = CAknsAnimationCommandItemDef::NewL();
    CleanupStack::PushL( animCmdDef );
    animItemDef->AddAnimationCommandItemL( animCmdDef );

    CAknsAnimationCommandItemDef* animCmdItem = animItemDef->AnimationCommandItem( 0 );
    STIF_ASSERT_NOT_NULL( animCmdItem );

    CleanupStack::PopAndDestroy( animCmdDef );
    CleanupStack::Pop( animItemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimItemAnimCmdItemCountL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimItemAnimCmdItemCountL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimItemAnimationCommandItemCount, "In ItemDef AnimItemAnimationCommandItemCount" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimItemAnimationCommandItemCount );
    // Print to log file
    iLog->Log( KTestAnimItemAnimationCommandItemCount );

    CAknsAnimationItemDef* animItemDef = CAknsAnimationItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( animItemDef );
    CAknsAnimationCommandItemDef* animCmdDef = CAknsAnimationCommandItemDef::NewL();
    CleanupStack::PushL( animCmdDef );
    animItemDef->AddAnimationCommandItemL( animCmdDef );

    TInt paramCount = animItemDef->AnimationCommandItemCount();
    STIF_ASSERT_EQUALS( 1, paramCount );

    CleanupStack::PopAndDestroy( animCmdDef );
    CleanupStack::Pop( animItemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimItemAddAnimValueL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimItemAddAnimValueL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimItemAddAnimationValueL, "In ItemDef AnimItemAddAnimationValueL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimItemAddAnimationValueL );
    // Print to log file
    iLog->Log( KTestAnimItemAddAnimationValueL );

    CAknsAnimationItemDef* animItemDef = CAknsAnimationItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( animItemDef );
    CAknsAnimationValueDef* aniValueDef = CAknsAnimationValueDef::NewL();
    CleanupStack::PushL( aniValueDef );
    animItemDef->AddAnimationValueL( aniValueDef );

    CleanupStack::PopAndDestroy( aniValueDef );
    CleanupStack::Pop( animItemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimItemAnimValueL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimItemAnimValueL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimItemAnimationValue, "In ItemDef AnimItemAnimationValue" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimItemAnimationValue );
    // Print to log file
    iLog->Log( KTestAnimItemAnimationValue );

    CAknsAnimationItemDef* animItemDef = CAknsAnimationItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( animItemDef );
    CAknsAnimationValueDef* aniValueDef = CAknsAnimationValueDef::NewL();
    CleanupStack::PushL( aniValueDef );
    animItemDef->AddAnimationValueL( aniValueDef );

    CAknsAnimationValueDef* aniValue = animItemDef->AnimationValue( 0 );
    STIF_ASSERT_NOT_NULL( aniValue );

    CleanupStack::PopAndDestroy( aniValueDef );
    CleanupStack::Pop( animItemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimItemAnimValueCountL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimItemAnimValueCountL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimItemAnimationValueCount, "In ItemDef AnimItemAnimationValueCount" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimItemAnimationValueCount );
    // Print to log file
    iLog->Log( KTestAnimItemAnimationValueCount );

    CAknsAnimationItemDef* animItemDef = CAknsAnimationItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( animItemDef );
    CAknsAnimationValueDef* aniValueDef = CAknsAnimationValueDef::NewL();
    CleanupStack::PushL( aniValueDef );
    animItemDef->AddAnimationValueL( aniValueDef );

    TInt paramCount = animItemDef->AnimationValueCount();
    STIF_ASSERT_EQUALS( 1, paramCount );

    CleanupStack::PopAndDestroy( aniValueDef );
    CleanupStack::Pop( animItemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimItemAddTimingModelL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimItemAddTimingModelL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimItemAddTimingModelL, "In ItemDef AnimItemAddTimingModelL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimItemAddTimingModelL );
    // Print to log file
    iLog->Log( KTestAnimItemAddTimingModelL );

    CAknsAnimationItemDef* animItemDef = CAknsAnimationItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( animItemDef );
    CAknsTimingModelDef* timModelDef = CAknsTimingModelDef::NewL();
    CleanupStack::PushL( timModelDef );
    animItemDef->AddTimingModelL( timModelDef );

    CleanupStack::PopAndDestroy( timModelDef );
    CleanupStack::Pop( animItemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimItemTimingModelL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimItemTimingModelL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimItemTimingModel, "In ItemDef AnimItemTimingModel" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimItemTimingModel );
    // Print to log file
    iLog->Log( KTestAnimItemTimingModel );

    CAknsAnimationItemDef* animItemDef = CAknsAnimationItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( animItemDef );
    CAknsTimingModelDef* timModelDef = CAknsTimingModelDef::NewL();
    CleanupStack::PushL( timModelDef );
    animItemDef->AddTimingModelL( timModelDef );

    CAknsTimingModelDef* timingModelDef = animItemDef->TimingModel( 0 );
    STIF_ASSERT_NOT_NULL( timingModelDef );

    CleanupStack::PopAndDestroy( timModelDef );
    CleanupStack::Pop( animItemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimItemTimingModelCountL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimItemTimingModelCountL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimItemTimingModelCount, "In ItemDef AnimItemTimingModelCount" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimItemTimingModelCount );
    // Print to log file
    iLog->Log( KTestAnimItemTimingModelCount );

    CAknsAnimationItemDef* animItemDef = CAknsAnimationItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( animItemDef );
    CAknsTimingModelDef* timModelDef = CAknsTimingModelDef::NewL();
    CleanupStack::PushL( timModelDef );
    animItemDef->AddTimingModelL( timModelDef );

    TInt paramCount = animItemDef->TimingModelCount();
    STIF_ASSERT_EQUALS( 1, paramCount );

    CleanupStack::PopAndDestroy( timModelDef );
    CleanupStack::Pop( animItemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimItemAddSizeBoundParamL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimItemAddSizeBoundParamL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimItemAddSizeBoundParamL, "In ItemDef AnimItemAddSizeBoundParamL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimItemAddSizeBoundParamL );
    // Print to log file
    iLog->Log( KTestAnimItemAddSizeBoundParamL );

    CAknsAnimationItemDef* animItemDef = CAknsAnimationItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( animItemDef );
    CAknsSizeBoundParamDef* boundParDef = CAknsSizeBoundParamDef::NewL();
    CleanupStack::PushL( boundParDef );
    animItemDef->AddSizeBoundParamL( boundParDef );

    CleanupStack::PopAndDestroy( boundParDef );
    CleanupStack::Pop( animItemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimItemSizeBoundParamL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimItemSizeBoundParamL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimItemSizeBoundParam, "In ItemDef AnimItemSizeBoundParam" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimItemSizeBoundParam );
    // Print to log file
    iLog->Log( KTestAnimItemSizeBoundParam );

    CAknsAnimationItemDef* animItemDef = CAknsAnimationItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( animItemDef );
    CAknsSizeBoundParamDef* boundParDef = CAknsSizeBoundParamDef::NewL();
    CleanupStack::PushL( boundParDef );
    animItemDef->AddSizeBoundParamL( boundParDef );

    CAknsSizeBoundParamDef* boundParamDef = animItemDef->SizeBoundParam( 0 );
    STIF_ASSERT_NOT_NULL( boundParamDef );

    CleanupStack::PopAndDestroy( boundParDef );
    CleanupStack::Pop( animItemDef );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimItemSBParamCountL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimItemSBParamCountL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimItemSizeBoundParamCount, "In ItemDef AnimItemSizeBoundParamCount" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimItemSizeBoundParamCount );
    // Print to log file
    iLog->Log( KTestAnimItemSizeBoundParamCount );

    CAknsAnimationItemDef* animItemDef = CAknsAnimationItemDef::NewL(
            KAknsIIDQgnIndiTpDialler );
    CleanupStack::PushL( animItemDef );
    CAknsSizeBoundParamDef* boundParDef = CAknsSizeBoundParamDef::NewL();
    CleanupStack::PushL( boundParDef );
    animItemDef->AddSizeBoundParamL( boundParDef );

    TInt paramCount = animItemDef->SizeBoundParamCount();
    STIF_ASSERT_EQUALS( 1, paramCount );

    CleanupStack::PopAndDestroy( boundParDef );
    CleanupStack::Pop( animItemDef );
    return KErrNone;

    }

