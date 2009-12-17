/*
* Copyright (c) 2002 - 2007 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Test AknsItemData.h
*
*/


#include <aknsitemdata.h>
#include <aknsimageattributedata.h>
#include <aknsitemdef.h>
#include <aknsconstants.h>
#include <eikcolor.hrh>

#include "testsdkskins.h"

const TInt KLength = 10;
// ============================ MEMBER FUNCTIONS ===============================
// -----------------------------------------------------------------------------
// CTestSDKSkins::TestIDTypeL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestIDTypeL( CStifItemParser& /*aItem*/ )
    {
    CAknsBitmapItemData* itemData = CAknsBitmapItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    TAknsItemType typeGet = itemData->Type();
    STIF_ASSERT_TRUE( typeGet == EAknsITBitmap );
    
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestIIDSetAttributesL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestIIDSetAttributesL( CStifItemParser& /*aItem*/ )
    {
    CAknsBitmapItemData* itemData = CAknsBitmapItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    TAknsImageAttributeData attributeData;
    itemData->SetAttributesL( attributeData );
    STIF_ASSERT_NOT_NULL( itemData->Attributes() );
    
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestIIDAttributesL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestIIDAttributesL( CStifItemParser& aItem )
    {
    return TestIIDSetAttributesL( aItem );
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestIIDSetParentIIDL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestIIDSetParentIIDL( CStifItemParser& /*aItem*/ )
    {
    CAknsBitmapItemData* itemData = CAknsBitmapItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    TAknsItemID itemID;
    itemData->SetParentIID( itemID );
    STIF_ASSERT_TRUE( itemID.iMajor == itemData->ParentIID().iMajor );
    STIF_ASSERT_TRUE( itemID.iMinor == itemData->ParentIID().iMinor );
    
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestIIDSetDrawRectL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestIIDSetDrawRectL( CStifItemParser& /*aItem*/ )
    {
    CAknsBitmapItemData* itemData = CAknsBitmapItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    TRect rect( pointTL, pointBR );
    itemData->SetDrawRect( rect );
    STIF_ASSERT_TRUE( rect == itemData->DrawRect() );
    
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestIIDParentIIDL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestIIDParentIIDL( CStifItemParser& aItem )
    {
    return TestIIDSetParentIIDL( aItem );
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestIIDDrawRectL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestIIDDrawRectL( CStifItemParser& aItem )
    {
    return TestIIDSetDrawRectL( aItem );
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestBIDNewL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestBIDNewL( CStifItemParser& /*aItem*/ )
    {
    CAknsBitmapItemData* itemData = CAknsBitmapItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestBIDSetBitmapL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestBIDSetBitmapL( CStifItemParser& /*aItem*/ )
    {
    CAknsBitmapItemData* itemData = CAknsBitmapItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    CFbsBitmap* bitMap = new (ELeave) CFbsBitmap;
    CleanupStack::PushL( bitMap );
    itemData->SetBitmap( bitMap );
    
    STIF_ASSERT_TRUE( bitMap == itemData->Bitmap() );
    
    CleanupStack::Pop( bitMap );
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestBIDDestroyAndSetBitmapL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestBIDDestroyAndSetBitmapL( CStifItemParser& /*aItem*/ )
    {
    CAknsBitmapItemData* itemData = CAknsBitmapItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    CFbsBitmap* bitMap = new (ELeave) CFbsBitmap;
    CleanupStack::PushL( bitMap );
    itemData->DestroyAndSetBitmap( bitMap );
    
    CleanupStack::Pop( bitMap );
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestBIDBitmapL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestBIDBitmapL( CStifItemParser& aItem )
    {
    return TestBIDSetBitmapL( aItem );
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestMBIDNewL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestMBIDNewL( CStifItemParser& /*aItem*/ )
    {
    CAknsMaskedBitmapItemData* itemData = CAknsMaskedBitmapItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );

    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestMBIDSetMaskL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestMBIDSetMaskL( CStifItemParser& /*aItem*/ )
    {
    CAknsMaskedBitmapItemData* itemData = CAknsMaskedBitmapItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );

    CFbsBitmap* bitMapMask = new (ELeave) CFbsBitmap;
    CleanupStack::PushL( bitMapMask );
    itemData->SetMask( bitMapMask );
    
    STIF_ASSERT_TRUE( bitMapMask == itemData->Mask() );
    
    CleanupStack::Pop( bitMapMask );
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestMBIDDestroyAndSetMaskL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestMBIDDestroyAndSetMaskL( CStifItemParser& /*aItem*/ )
    {
    CAknsMaskedBitmapItemData* itemData = CAknsMaskedBitmapItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );

    CFbsBitmap* bitMapMask = new (ELeave) CFbsBitmap;
    CleanupStack::PushL( bitMapMask );
    itemData->DestroyAndSetBitmap( bitMapMask );
    
    CleanupStack::Pop( bitMapMask );
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestMBIDMaskL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestMBIDMaskL( CStifItemParser& aItem )
    {
    return TestMBIDSetMaskL( aItem );
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestCTIDNewL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestCTIDNewL( CStifItemParser& /*aItem*/ )
    {
    CAknsColorTableItemData* itemData = CAknsColorTableItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );

    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestCTIDSetColorsL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestCTIDSetColorsL( CStifItemParser& /*aItem*/ )
    {
    CAknsColorTableItemData* itemData = CAknsColorTableItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    TAknsColorTableEntry* color = new (ELeave) TAknsColorTableEntry[1];
    color->iIndex = 0;
    color->iRgb = 0x00020408;
    itemData->SetColorsL( 1, color );

    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestCTIDColorIndexedL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestCTIDColorIndexedL( CStifItemParser& /*aItem*/ )
    {
    CAknsColorTableItemData* itemData = CAknsColorTableItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    TAknsColorTableEntry* color = new (ELeave) TAknsColorTableEntry[1];
    color->iIndex = 0;
    color->iRgb = 0x00020408;
    itemData->SetColorsL( 1, color );
    
    TInt value = itemData->ColorIndexed( 0 );

    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestCTIDColorRgbL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestCTIDColorRgbL( CStifItemParser& /*aItem*/ )
    {
    CAknsColorTableItemData* itemData = CAknsColorTableItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    TAknsColorTableEntry* color = new (ELeave) TAknsColorTableEntry[1];
    color->iIndex = 0;
    color->iRgb = 0x00020408;
    itemData->SetColorsL( 1, color );
    
    TRgb rgb = itemData->ColorRgb( 0 );

    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestCTIDGetColorL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestCTIDGetColorL( CStifItemParser& /*aItem*/ )
    {
    CAknsColorTableItemData* itemData = CAknsColorTableItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    TAknsColorTableEntry* color = new (ELeave) TAknsColorTableEntry[1];
    color->iIndex = 0;
    color->iRgb = 0x00020408;
    itemData->SetColorsL( 1, color );
    
    TRgb rgb; 
    itemData->GetColorL( 0, rgb );

    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestITIDNewL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestITIDNewL( CStifItemParser& /*aItem*/ )
    {
    CAknsImageTableItemData* itemData = CAknsImageTableItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );

    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestITIDSetImagesL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestITIDSetImagesL( CStifItemParser& /*aItem*/ )
    {
    CAknsImageTableItemData* itemData = CAknsImageTableItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );

    TAknsItemID itemID;
    itemData->SetImagesL( 1, &itemID );
    
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestITIDImageIIDL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestITIDImageIIDL( CStifItemParser& /*aItem*/ )
    {
    CAknsImageTableItemData* itemData = CAknsImageTableItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );

    TAknsItemID itemID;
    itemData->SetImagesL( 1, &itemID );
    TAknsItemID itemIDGet = itemData->ImageIID( 0 );
    
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestITIDImagesL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestITIDImagesL( CStifItemParser& /*aItem*/ )
    {
    CAknsImageTableItemData* itemData = CAknsImageTableItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );

    TAknsItemID itemID;
    itemData->SetImagesL( 1, &itemID );
    TAknsItemID* item = itemData->Images();
    
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestITIDNumberOfImagesL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestITIDNumberOfImagesL( CStifItemParser& /*aItem*/ )
    {
    CAknsImageTableItemData* itemData = CAknsImageTableItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );

    TAknsItemID itemID;
    itemData->SetImagesL( 1, &itemID );
    TInt num = itemData->NumberOfImages();
    STIF_ASSERT_TRUE( 1 == num );
    
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestBAIDNewL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestBAIDNewL( CStifItemParser& /*aItem*/ )
    {
    CAknsBmpAnimItemData* itemData = CAknsBmpAnimItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestBAIDSetFrameInfosL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestBAIDSetFrameInfosL( CStifItemParser& /*aItem*/ )
    {
    CAknsBmpAnimItemData* itemData = CAknsBmpAnimItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    TAknsBmpAnimFrameInfo info;
    itemData->SetFrameInfosL( &info );
    
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestBAIDFrameInfosL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestBAIDFrameInfosL( CStifItemParser& /*aItem*/ )
    {
    CAknsBmpAnimItemData* itemData = CAknsBmpAnimItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    TAknsBmpAnimFrameInfo info;
    itemData->SetFrameInfosL( &info );
    TAknsBmpAnimFrameInfo* infoGet = itemData->FrameInfos();
    
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestBAIDSetLastFrameBackgroundL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestBAIDSetLastFrameBackgroundL( CStifItemParser& /*aItem*/ )
    {
    CAknsBmpAnimItemData* itemData = CAknsBmpAnimItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    itemData->SetLastFrameBackground( ETrue );
    STIF_ASSERT_TRUE( itemData->LastFrameBackground() );
    
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestBAIDLastFrameBackgroundL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestBAIDLastFrameBackgroundL( CStifItemParser& aItem )
    {
    return TestBAIDSetLastFrameBackgroundL( aItem );
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestBAIDSetFrameIntervalL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestBAIDSetFrameIntervalL( CStifItemParser& /*aItem*/ )
    {
    CAknsBmpAnimItemData* itemData = CAknsBmpAnimItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    itemData->SetFrameInterval( 1 );
    STIF_ASSERT_TRUE( 1 == itemData->FrameInterval() );
    
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestBAIDFrameIntervalL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestBAIDFrameIntervalL( CStifItemParser& aItem )
    {
    return TestBAIDSetFrameIntervalL( aItem );
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestBAIDSetPlayModeL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestBAIDSetPlayModeL( CStifItemParser& /*aItem*/ )
    {
    CAknsBmpAnimItemData* itemData = CAknsBmpAnimItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    itemData->SetPlayMode( 1 );
    STIF_ASSERT_TRUE( 1 == itemData->PlayMode() );
    
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestBAIDPlayModeL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestBAIDPlayModeL( CStifItemParser& aItem )
    {
    return TestBAIDSetPlayModeL( aItem );
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestBAIDSetFlashL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestBAIDSetFlashL( CStifItemParser& /*aItem*/ )
    {
    CAknsBmpAnimItemData* itemData = CAknsBmpAnimItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    itemData->SetFlash( ETrue );
    STIF_ASSERT_TRUE( itemData->Flash() );
    
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestBAIDFlashL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestBAIDFlashL( CStifItemParser& aItem )
    {
    return TestBAIDSetFlashL( aItem );
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestSIDNewL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestSIDNewL( CStifItemParser& /*aItem*/ )
    {
    CAknsStringItemData* itemData = CAknsStringItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestSIDSetStringL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestSIDSetStringL( CStifItemParser& /*aItem*/ )
    {
    CAknsStringItemData* itemData = CAknsStringItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    _LIT( KString, "string" );
    TBuf<KLength> string( KString );
    itemData->SetStringL( string );
    TBuf<KLength> stringGet = itemData->String();
    STIF_ASSERT_TRUE( 0 == stringGet.Compare( string ) );
    
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestSIDStringL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestSIDStringL( CStifItemParser& aItem )
    {
    return TestSIDSetStringL( aItem );
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestECNewL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestECNewL( CStifItemParser& /*aItem*/ )
    {
    CAknsEffectCommand* itemData = CAknsEffectCommand::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestECSetEffectUidL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestECSetEffectUidL( CStifItemParser& /*aItem*/ )
    {
    CAknsEffectCommand* itemData = CAknsEffectCommand::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    TUid uid = TUid::Uid( 0 );
    itemData->SetEffectUid( uid );
    STIF_ASSERT_TRUE( uid == itemData->EffectUid() );
    
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestECEffectUidL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestECEffectUidL( CStifItemParser& aItem )
    {
    return TestECSetEffectUidL( aItem );
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestECSetLayerConfL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestECSetLayerConfL( CStifItemParser& /*aItem*/ )
    {
    CAknsEffectCommand* itemData = CAknsEffectCommand::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    TAknsRlRenderOpParam param;
    param.iInputLayerAIndex = KLength;
    itemData->SetLayerConf( param );
    TAknsRlRenderOpParam paramGet = itemData->LayerConf();
    STIF_ASSERT_TRUE( param.iInputLayerAIndex == paramGet.iInputLayerAIndex );
    STIF_ASSERT_TRUE( param.iInputLayerAStatus == paramGet.iInputLayerAStatus );
    STIF_ASSERT_TRUE( param.iInputLayerBIndex == paramGet.iInputLayerBIndex );
    STIF_ASSERT_TRUE( param.iInputLayerBStatus == paramGet.iInputLayerBStatus );
    STIF_ASSERT_TRUE( param.iOutputLayerIndex == paramGet.iOutputLayerIndex );
    STIF_ASSERT_TRUE( param.iOutputLayerStatus  == paramGet.iOutputLayerStatus );
    
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestECLayerConfL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestECLayerConfL( CStifItemParser& aItem )
    {
    return TestECSetLayerConfL( aItem );
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestECAppendParameterL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestECAppendParameterL( CStifItemParser& /*aItem*/ )
    {
    CAknsEffectCommand* itemData = CAknsEffectCommand::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    TAknsRlParameterData parameterData;
    _LIT( KName, "parameter" );
    TBuf<KLength> name( KName );
    parameterData.iName = &name;
    itemData->AppendParameterL( parameterData );
    
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestECCreateParameterIteratorL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestECCreateParameterIteratorL( CStifItemParser& /*aItem*/ )
    {
    CAknsEffectCommand* itemData = CAknsEffectCommand::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    MAknsRlParameterIterator* iterator = itemData->CreateParameterIteratorL();
    STIF_ASSERT_NOT_NULL( iterator );
    
    delete iterator;
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestEQIDNewL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestEQIDNewL( CStifItemParser& /*aItem*/ )
    {
    CAknsEffectQueueItemData* itemData = CAknsEffectQueueItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestEQIDSetRefItemL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestEQIDSetRefItemL( CStifItemParser& /*aItem*/ )
    {
    CAknsEffectQueueItemData* itemData = CAknsEffectQueueItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    TAknsItemID itemID( KAknsIIDQsnCpScrollBgTop );
    itemData->SetRefItem( itemID );
    TAknsItemID itemIDGet = itemData->RefItem();
    STIF_ASSERT_TRUE( itemID.iMajor == itemID.iMajor );
    STIF_ASSERT_TRUE( itemID.iMinor == itemID.iMinor );
    
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestEQIDRefItemL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestEQIDRefItemL( CStifItemParser& aItem )
    {
    return TestEQIDSetRefItemL( aItem );
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestEQIDSetInputLayerL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestEQIDSetInputLayerL( CStifItemParser& /*aItem*/ )
    {
    CAknsEffectQueueItemData* itemData = CAknsEffectQueueItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    itemData->SetInputLayer( 1 );
    TInt inputLayerGet = itemData->InputLayer();
    STIF_ASSERT_TRUE( 1 == inputLayerGet );
    
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestEQIDInputLayerL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestEQIDInputLayerL( CStifItemParser& aItem )
    {
    return TestEQIDSetInputLayerL( aItem );
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestEQIDSetInputLayerModeL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestEQIDSetInputLayerModeL( CStifItemParser& /*aItem*/ )
    {
    CAknsEffectQueueItemData* itemData = CAknsEffectQueueItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    itemData->SetInputLayerMode( 1 );
    TInt modeGet = itemData->InputLayerMode();
    STIF_ASSERT_TRUE( 1 == modeGet );
    
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestEQIDInputLayerModeL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestEQIDInputLayerModeL( CStifItemParser& aItem )
    {
    return TestEQIDSetInputLayerModeL( aItem );
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestEQIDSetOutputLayerL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestEQIDSetOutputLayerL( CStifItemParser& /*aItem*/ )
    {
    CAknsEffectQueueItemData* itemData = CAknsEffectQueueItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    itemData->SetOutputLayer( 1 );
    TInt outputLayerGet = itemData->OutputLayer();
    STIF_ASSERT_TRUE( 1 == outputLayerGet );
    
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestEQIDOutputLayerL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestEQIDOutputLayerL( CStifItemParser& aItem )
    {
    return TestEQIDSetOutputLayerL( aItem );
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestEQIDSetOutputLayerModeL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestEQIDSetOutputLayerModeL( CStifItemParser& /*aItem*/ )
    {
    CAknsEffectQueueItemData* itemData = CAknsEffectQueueItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    itemData->SetOutputLayerMode( 1 );
    TInt outputLayerModeGet = itemData->OutputLayerMode();
    STIF_ASSERT_TRUE( 1 == outputLayerModeGet );
    
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestEQIDOutputLayerModeL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestEQIDOutputLayerModeL( CStifItemParser& aItem )
    {
    return TestEQIDSetOutputLayerModeL( aItem );
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestEQIDAppendCommandL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestEQIDAppendCommandL( CStifItemParser& /*aItem*/ )
    {
    CAknsEffectQueueItemData* itemData = CAknsEffectQueueItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    CAknsEffectCommand* command = CAknsEffectCommand::NewL();
    CleanupStack::PushL( command );
    STIF_ASSERT_NOT_NULL( command );

    itemData->AppendCommandL( command );
    
    CleanupStack::Pop( command );
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestEQIDCreateCommandIteratorL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestEQIDCreateCommandIteratorL( CStifItemParser& /*aItem*/ )
    {
    CAknsEffectQueueItemData* itemData = CAknsEffectQueueItemData::NewL();
    CleanupStack::PushL( itemData );
    STIF_ASSERT_NOT_NULL( itemData );
    
    MAknsRlCommandIterator* iterator = itemData->CreateCommandIteratorL();
    STIF_ASSERT_NOT_NULL( iterator );
    
    CleanupStack::PopAndDestroy( itemData );
    
    return KErrNone;
    
    }

