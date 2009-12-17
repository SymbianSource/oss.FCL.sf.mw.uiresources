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
* Description:  test AknsBasicBackgroundControlContext.h AknsControlContext.h
*                     AknsDataContext.h AknsDrawUtils.h AknsItemData.h
*                     AknsFrameBackgroundControlContext.h AknsItemID.h
*                     AknsLayeredBackgroundControlContext.h
*                     AknsListBoxBackgroundControlContext.h
*                     AknsRlEffectContext.h AknsRlParameter.h
*                     AknsSkinInstance.h AknsUtils.h AknsWallpaperUtils.h
*
*/



// [INCLUDE FILES]
#include <e32svr.h>
#include <stifparser.h>
#include <stiftestinterface.h>

#include "testsdkskins.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestSDKSkins::RunMethodL
// Run specified method. Contains also table of test mothods and their names.
// -----------------------------------------------------------------------------
//
TInt CTestSDKSkins::RunMethodL( CStifItemParser& aItem ) 
    {

    static TStifFunctionInfo const KFunctions[] =
        {  
        ENTRY( "TestBBCCNewL", CTestSDKSkins::TestBBCCNewL ),
        ENTRY( "TestBBCCSetBitmapL", CTestSDKSkins::TestBBCCSetBitmapL ),
        ENTRY( "TestBBCCSetRectL", CTestSDKSkins::TestBBCCSetRectL ),
        ENTRY( "TestBBCCSetParentPosL", CTestSDKSkins::TestBBCCSetParentPosL ),
        ENTRY( "TestBBCCSetParentContextL", CTestSDKSkins::TestBBCCSetParentContextL ),
        
        ENTRY( "TestCCSupplyMopObjectL", CTestSDKSkins::TestCCSupplyMopObjectL ),
        
        ENTRY( "TestDCSupplyMopObjectL", CTestSDKSkins::TestDCSupplyMopObjectL ),
        
        ENTRY( "TestDUControlContextL", CTestSDKSkins::TestDUControlContextL ),
        ENTRY( "TestDUControlContextOfParentL", CTestSDKSkins::TestDUControlContextOfParentL ),
        ENTRY( "TestDUBackgroundL", CTestSDKSkins::TestDUBackgroundL ),
        ENTRY( "TestDUBackgroundFPL", CTestSDKSkins::TestDUBackgroundFPL ),
        ENTRY( "TestDUBackgroundSPL", CTestSDKSkins::TestDUBackgroundSPL ),
        ENTRY( "TestDUDrawBackgroundL", CTestSDKSkins::TestDUDrawBackgroundL ),
        ENTRY( "TestDUBackgroundBetweenRectsFPL", CTestSDKSkins::TestDUBackgroundBetweenRectsFPL ),
        ENTRY( "TestDUBackgroundBetweenRectsL", CTestSDKSkins::TestDUBackgroundBetweenRectsL ),
        ENTRY( "TestDUBackgroundBetweenRectsSPL", CTestSDKSkins::TestDUBackgroundBetweenRectsSPL ),
        ENTRY( "TestDUHasBitmapBackgroundL", CTestSDKSkins::TestDUHasBitmapBackgroundL ),
        ENTRY( "TestDUDrawCachedImageL", CTestSDKSkins::TestDUDrawCachedImageL ),
        ENTRY( "TestDUDrawCachedImageFBSL", CTestSDKSkins::TestDUDrawCachedImageFBSL ),
        ENTRY( "TestDUDrawFrameL", CTestSDKSkins::TestDUDrawFrameL ),
        ENTRY( "TestDUPrepareFrameL", CTestSDKSkins::TestDUPrepareFrameL ),
        ENTRY( "TestDUDrawFrameSPL", CTestSDKSkins::TestDUDrawFrameSPL ),
        ENTRY( "TestDUDrawFrameFBSL", CTestSDKSkins::TestDUDrawFrameFBSL ),
        ENTRY( "TestDUDrawFramePartL", CTestSDKSkins::TestDUDrawFramePartL ),
        ENTRY( "TestDUIsListSeperatorLines", CTestSDKSkins::TestDUIsListSeperatorLines ),
        ENTRY( "TestDUSlidingMode", CTestSDKSkins::TestDUSlidingMode ),
        
        ENTRY( "TestFBCCNewL", CTestSDKSkins::TestFBCCNewL ),
        ENTRY( "TestFBCCSetFrameL", CTestSDKSkins::TestFBCCSetFrameL ),
        ENTRY( "TestFBCCSetFrameRectsL", CTestSDKSkins::TestFBCCSetFrameRectsL ),
        ENTRY( "TestFBCCSetCenterL", CTestSDKSkins::TestFBCCSetCenterL ),
        ENTRY( "TestFBCCSetFramePartRectL", CTestSDKSkins::TestFBCCSetFramePartRectL ),
        
        ENTRY( "TestIDTypeL", CTestSDKSkins::TestIDTypeL ),
        ENTRY( "TestIIDSetAttributesL", CTestSDKSkins::TestIIDSetAttributesL ),
        ENTRY( "TestIIDAttributesL", CTestSDKSkins::TestIIDAttributesL ),
        ENTRY( "TestIIDSetParentIIDL", CTestSDKSkins::TestIIDSetParentIIDL ),
        ENTRY( "TestIIDSetDrawRectL", CTestSDKSkins::TestIIDSetDrawRectL ),
        ENTRY( "TestIIDParentIIDL", CTestSDKSkins::TestIIDParentIIDL ),
        ENTRY( "TestIIDDrawRectL", CTestSDKSkins::TestIIDDrawRectL ),
        ENTRY( "TestBIDNewL", CTestSDKSkins::TestBIDNewL ),
        ENTRY( "TestBIDSetBitmapL", CTestSDKSkins::TestBIDSetBitmapL ),
        ENTRY( "TestBIDDestroyAndSetBitmapL", CTestSDKSkins::TestBIDDestroyAndSetBitmapL ),
        ENTRY( "TestBIDBitmapL", CTestSDKSkins::TestBIDBitmapL ),
        ENTRY( "TestMBIDNewL", CTestSDKSkins::TestMBIDNewL ),
        ENTRY( "TestMBIDSetMaskL", CTestSDKSkins::TestMBIDSetMaskL ),
        ENTRY( "TestMBIDDestroyAndSetMaskL", CTestSDKSkins::TestMBIDDestroyAndSetMaskL ),
        ENTRY( "TestMBIDMaskL", CTestSDKSkins::TestMBIDMaskL ),
        ENTRY( "TestCTIDNewL", CTestSDKSkins::TestCTIDNewL ),
        ENTRY( "TestCTIDSetColorsL", CTestSDKSkins::TestCTIDSetColorsL ),
        ENTRY( "TestCTIDColorIndexedL", CTestSDKSkins::TestCTIDColorIndexedL ),
        ENTRY( "TestCTIDColorRgbL", CTestSDKSkins::TestCTIDColorRgbL ),
        ENTRY( "TestCTIDGetColorL", CTestSDKSkins::TestCTIDGetColorL ),
        ENTRY( "TestITIDNewL", CTestSDKSkins::TestITIDNewL ),
        ENTRY( "TestITIDSetImagesL", CTestSDKSkins::TestITIDSetImagesL ),
        ENTRY( "TestITIDImageIIDL", CTestSDKSkins::TestITIDImageIIDL ),
        ENTRY( "TestITIDImagesL", CTestSDKSkins::TestITIDImagesL ),
        ENTRY( "TestITIDNumberOfImagesL", CTestSDKSkins::TestITIDNumberOfImagesL ),
        ENTRY( "TestBAIDNewL", CTestSDKSkins::TestBAIDNewL ),
        ENTRY( "TestBAIDSetFrameInfosL", CTestSDKSkins::TestBAIDSetFrameInfosL ),
        ENTRY( "TestBAIDFrameInfosL", CTestSDKSkins::TestBAIDFrameInfosL ),
        ENTRY( "TestBAIDSetLastFrameBackgroundL", CTestSDKSkins::TestBAIDSetLastFrameBackgroundL ),
        ENTRY( "TestBAIDLastFrameBackgroundL", CTestSDKSkins::TestBAIDLastFrameBackgroundL ),
        ENTRY( "TestBAIDSetFrameIntervalL", CTestSDKSkins::TestBAIDSetFrameIntervalL ),
        ENTRY( "TestBAIDFrameIntervalL", CTestSDKSkins::TestBAIDFrameIntervalL ),
        ENTRY( "TestBAIDSetPlayModeL", CTestSDKSkins::TestBAIDSetPlayModeL ),
        ENTRY( "TestBAIDPlayModeL", CTestSDKSkins::TestBAIDPlayModeL ),
        ENTRY( "TestBAIDSetFlashL", CTestSDKSkins::TestBAIDSetFlashL ),
        ENTRY( "TestBAIDFlashL", CTestSDKSkins::TestBAIDFlashL ),
        ENTRY( "TestSIDNewL", CTestSDKSkins::TestSIDNewL ),
        ENTRY( "TestSIDSetStringL", CTestSDKSkins::TestSIDSetStringL ),
        ENTRY( "TestSIDStringL", CTestSDKSkins::TestSIDStringL ),
        ENTRY( "TestECNewL", CTestSDKSkins::TestECNewL ),
        ENTRY( "TestECSetEffectUidL", CTestSDKSkins::TestECSetEffectUidL ),
        ENTRY( "TestECEffectUidL", CTestSDKSkins::TestECEffectUidL ),
        ENTRY( "TestECSetLayerConfL", CTestSDKSkins::TestECSetLayerConfL ),
        ENTRY( "TestECLayerConfL", CTestSDKSkins::TestECLayerConfL ),
        ENTRY( "TestECAppendParameterL", CTestSDKSkins::TestECAppendParameterL ),
        ENTRY( "TestECCreateParameterIteratorL", CTestSDKSkins::TestECCreateParameterIteratorL ),
        ENTRY( "TestEQIDNewL", CTestSDKSkins::TestEQIDNewL ),
        ENTRY( "TestEQIDSetRefItemL", CTestSDKSkins::TestEQIDSetRefItemL ),
        ENTRY( "TestEQIDRefItemL", CTestSDKSkins::TestEQIDRefItemL ),
        ENTRY( "TestEQIDSetInputLayerL", CTestSDKSkins::TestEQIDSetInputLayerL ),
        ENTRY( "TestEQIDInputLayerL", CTestSDKSkins::TestEQIDInputLayerL ),
        ENTRY( "TestEQIDSetInputLayerModeL", CTestSDKSkins::TestEQIDSetInputLayerModeL ),
        ENTRY( "TestEQIDInputLayerModeL", CTestSDKSkins::TestEQIDInputLayerModeL ),
        ENTRY( "TestEQIDSetOutputLayerL", CTestSDKSkins::TestEQIDSetOutputLayerL ),
        ENTRY( "TestEQIDOutputLayerL", CTestSDKSkins::TestEQIDOutputLayerL ),
        ENTRY( "TestEQIDSetOutputLayerModeL", CTestSDKSkins::TestEQIDSetOutputLayerModeL ),
        ENTRY( "TestEQIDOutputLayerModeL", CTestSDKSkins::TestEQIDOutputLayerModeL ),
        ENTRY( "TestEQIDAppendCommandL", CTestSDKSkins::TestEQIDAppendCommandL ),
        ENTRY( "TestEQIDCreateCommandIteratorL", CTestSDKSkins::TestEQIDCreateCommandIteratorL ),
        

        ENTRY( "TestIILinearOrder", CTestSDKSkins::TestIILinearOrder ),
        
        ENTRY( "TestLBCCNewL", CTestSDKSkins::TestLBCCNewL ),
        ENTRY( "TestLBCCSetLayerImageL", CTestSDKSkins::TestLBCCSetLayerImageL ),
        ENTRY( "TestLBCCSetLayerRectL", CTestSDKSkins::TestLBCCSetLayerRectL ),
        
        ENTRY( "TestLBBCCNewL", CTestSDKSkins::TestLBBCCNewL ),
        ENTRY( "TestLBBCCSetTiledBitmapL", CTestSDKSkins::TestLBBCCSetTiledBitmapL ),
        ENTRY( "TestLBBCCSetTiledRectL", CTestSDKSkins::TestLBBCCSetTiledRectL ),
        ENTRY( "TestLBBCCSetBottomBitmapL", CTestSDKSkins::TestLBBCCSetBottomBitmapL ),
        ENTRY( "TestLBBCCSetBottomRectL", CTestSDKSkins::TestLBBCCSetBottomRectL ),
        
        ENTRY( "TestWUSetIdleWallpaper", CTestSDKSkins::TestWUSetIdleWallpaper ),
        ENTRY( "TestWUSetSlidesetWallpaperL", CTestSDKSkins::TestWUSetSlidesetWallpaperL ),
        
        ENTRY( "TestUInitSkinSupportL", CTestSDKSkins::TestUInitSkinSupportL ),
        ENTRY( "TestUCreateDataContextForContainerL", CTestSDKSkins::TestUCreateDataContextForContainerL ),
        ENTRY( "TestUCreateBitmapItemDefL", CTestSDKSkins::TestUCreateBitmapItemDefL ),
        ENTRY( "TestUCreateMaskedBitmapItemDefL", CTestSDKSkins::TestUCreateMaskedBitmapItemDefL ),
        ENTRY( "TestUSkinInstanceL", CTestSDKSkins::TestUSkinInstanceL ),
        ENTRY( "TestUDataContextL", CTestSDKSkins::TestUDataContextL ),
        ENTRY( "TestUCreateIconML", CTestSDKSkins::TestUCreateIconML ),
        ENTRY( "TestUCreateIconMLC", CTestSDKSkins::TestUCreateIconMLC ),
        ENTRY( "TestUCreateIconL", CTestSDKSkins::TestUCreateIconL ),
        ENTRY( "TestUCreateIconLC", CTestSDKSkins::TestUCreateIconLC ),
        ENTRY( "TestUCreateMaskedBitmapL", CTestSDKSkins::TestUCreateMaskedBitmapL ),
        ENTRY( "TestUCreateGulIconL", CTestSDKSkins::TestUCreateGulIconL ),
        ENTRY( "TestUCreateAppIconLC", CTestSDKSkins::TestUCreateAppIconLC ),
        ENTRY( "TestUOpenAppIconFileL", CTestSDKSkins::TestUOpenAppIconFileL ),
        ENTRY( "TestUCreateColorIconL", CTestSDKSkins::TestUCreateColorIconL ),
        ENTRY( "TestUCreateColorIconLC", CTestSDKSkins::TestUCreateColorIconLC ),
        ENTRY( "TestUCreateColorIconML", CTestSDKSkins::TestUCreateColorIconML ),
        ENTRY( "TestUCreateColorIconMLC", CTestSDKSkins::TestUCreateColorIconMLC ),
        ENTRY( "TestUGetAppIconL", CTestSDKSkins::TestUGetAppIconL ),
        ENTRY( "TestUCreateBitmapL", CTestSDKSkins::TestUCreateBitmapL ),
        ENTRY( "TestUCreateMaskedBitmapIL", CTestSDKSkins::TestUCreateMaskedBitmapIL ),
        ENTRY( "TestUCreateGulIconIL", CTestSDKSkins::TestUCreateGulIconIL ),
        ENTRY( "TestUGetCachedBitmapL", CTestSDKSkins::TestUGetCachedBitmapL ),
        ENTRY( "TestUGetCachedMaskedBitmapL", CTestSDKSkins::TestUGetCachedMaskedBitmapL ),
        ENTRY( "TestUGetCachedColorL", CTestSDKSkins::TestUGetCachedColorL ),
        ENTRY( "TestUBooleanPropertyL", CTestSDKSkins::TestUBooleanPropertyL ),
        ENTRY( "TestUSetAvkonSkinEnabledL", CTestSDKSkins::TestUSetAvkonSkinEnabledL ),
        ENTRY( "TestUAvkonSkinEnabledL", CTestSDKSkins::TestUAvkonSkinEnabledL ),
        ENTRY( "TestUSetAvkonHighlightAnimationEnabledL", CTestSDKSkins::TestUSetAvkonHighlightAnimationEnabledL ),
        ENTRY( "TestUAvkonHighlightAnimationEnabledL", CTestSDKSkins::TestUAvkonHighlightAnimationEnabledL ),
        ENTRY( "TestURegisterControlPositionL", CTestSDKSkins::TestURegisterControlPositionL ),
        ENTRY( "TestURegisterControlPositionPL", CTestSDKSkins::TestURegisterControlPositionPL ),
        ENTRY( "TestUDeregisterControlPositionL", CTestSDKSkins::TestUDeregisterControlPositionL ),
        ENTRY( "TestUGetControlPositionL", CTestSDKSkins::TestUGetControlPositionL ),
        };

    const TInt count = sizeof( KFunctions ) / sizeof( TStifFunctionInfo );

    return RunInternalL( KFunctions, count, aItem );

    }



//  [End of File]
