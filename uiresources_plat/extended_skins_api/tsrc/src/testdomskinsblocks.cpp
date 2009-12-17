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
* Description:  test aknseffectanim.h
                      aknsitemdef.h
                      aknspkgid.h
                      aknspointerstore.h
                      aknsrendererwrapper.h
                      aknssrvchunklookup.h
                      aknssrvclient.h
                      aknssrvskininformationpkg.h
*
*/



// [INCLUDE FILES]
#include <e32svr.h>
#include <stifparser.h>
#include <stiftestinterface.h>

#include "testdomskins.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestDOMSkins::RunMethodL
// Run specified method. Contains also table of test mothods and their names.
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::RunMethodL( CStifItemParser& aItem ) 
    {

    static TStifFunctionInfo const KFunctions[] =
        {  
        // First string is the function name used in TestScripter script file.
        // Second is the actual implementation member function. 

        // test functions in aknseffectanim.h
        ENTRY( "TestAnimNewL", CTestDOMSkins::TestAnimNewL ),
        ENTRY( "TestAnimConstructFromSkinL", CTestDOMSkins::TestAnimConstructFromSkinL ),
        ENTRY( "TestAnimStart", CTestDOMSkins::TestAnimStartL ),
        ENTRY( "TestAnimStop", CTestDOMSkins::TestAnimStopL ),
        ENTRY( "TestAnimPause", CTestDOMSkins::TestAnimPauseL ),
        ENTRY( "TestAnimContinue", CTestDOMSkins::TestAnimContinueL ),
        ENTRY( "TestAnimState", CTestDOMSkins::TestAnimStateL ),
        ENTRY( "TestAnimRender", CTestDOMSkins::TestAnimRenderL ),
        ENTRY( "TestAnimOutputRgb", CTestDOMSkins::TestAnimOutputRgbL ),
        ENTRY( "TestAnimOutputAlpha", CTestDOMSkins::TestAnimOutputAlphaL ),
        ENTRY( "TestAnimMinimumSize", CTestDOMSkins::TestAnimMinimumSizeL ),
        ENTRY( "TestAnimSize", CTestDOMSkins::TestAnimSizeL ),
        ENTRY( "TestAnimNeedsInputLayer", CTestDOMSkins::TestAnimNeedsInputLayerL ),
        ENTRY( "TestAnimBeginConfigInputLayersL", CTestDOMSkins::TestAnimBeginConfigInputLayersL ),
        ENTRY( "TestAnimInputRgbGc", CTestDOMSkins::TestAnimInputRgbGcL ),
        ENTRY( "TestAnimInputAlphaGc", CTestDOMSkins::TestAnimInputAlphaGcL ),
        ENTRY( "TestAnimEndConfigInputLayersL", CTestDOMSkins::TestAnimEndConfigInputLayersL ),
        ENTRY( "TestAnimUpdateOutput", CTestDOMSkins::TestAnimUpdateOutputL ),
        ENTRY( "TestAnimSetIdling", CTestDOMSkins::TestAnimSetIdlingL ),
        ENTRY( "TestAnimIsIdling", CTestDOMSkins::TestAnimIsIdlingL ),

        // test functions in aknsitemdef.h
        ENTRY( "TestItemNewL", CTestDOMSkins::TestItemNewL ),
        ENTRY( "TestItemType", CTestDOMSkins::TestItemTypeL ),
        ENTRY( "TestItemID", CTestDOMSkins::TestItemIDL ),
        ENTRY( "TestItemLinearOrder", CTestDOMSkins::TestItemLinearOrderL ),

        ENTRY( "TestImageNewL", CTestDOMSkins::TestImageNewL ),
        ENTRY( "TestImageSetAttributesL", CTestDOMSkins::TestImageSetAttributesL ),
        ENTRY( "TestImageAttributes", CTestDOMSkins::TestImageAttributesL ),

        ENTRY( "TestBitmapNewWithIndexL", CTestDOMSkins::TestBitmapNewWithIndexL ),
        ENTRY( "TestBitmapNewL", CTestDOMSkins::TestBitmapNewL ),
        ENTRY( "TestBitmapSetFilename", CTestDOMSkins::TestBitmapSetFilenameL ),
        ENTRY( "TestBitmapFilename", CTestDOMSkins::TestBitmapFilenameL ),
        ENTRY( "TestBitmapSetIndex", CTestDOMSkins::TestBitmapSetIndexL ),
        ENTRY( "TestBitmapIndex", CTestDOMSkins::TestBitmapIndexL ),

        ENTRY( "TestMaskNewWithIndexL", CTestDOMSkins::TestMaskNewWithIndexL ),
        ENTRY( "TestMaskNewL", CTestDOMSkins::TestMaskNewL ),
        ENTRY( "TestMaskSetIndex", CTestDOMSkins::TestMaskSetIndexL ),
        ENTRY( "TestMaskIndex", CTestDOMSkins::TestMaskIndexL ),

        ENTRY( "TestColorTableNewWithColorL", CTestDOMSkins::TestColorTableNewWithColorL ),
        ENTRY( "TestColorTableNewL", CTestDOMSkins::TestColorTableNewL ),
        ENTRY( "TestColorTableSetColors", CTestDOMSkins::TestColorTableSetColorsL ),
        ENTRY( "TestColorTableColors", CTestDOMSkins::TestColorTableColorsL ),
        ENTRY( "TestColorTableNumberOfColors", CTestDOMSkins::TestColorTableNumberOfColorsL ),

        ENTRY( "TestImageTableNewWithImageL", CTestDOMSkins::TestImageTableNewWithImageL ),
        ENTRY( "TestImageTableNewL", CTestDOMSkins::TestImageTableNewL ),
        ENTRY( "TestImageTableSetImages", CTestDOMSkins::TestImageTableSetImagesL ),
        ENTRY( "TestImageTableImages", CTestDOMSkins::TestImageTableImagesL ),
        ENTRY( "TestImageTableNumberOfImages", CTestDOMSkins::TestImageTableNumberOfImagesL ),

        ENTRY( "TestBmpAnimNewWithFrameInfoL", CTestDOMSkins::TestBmpAnimNewWithFrameInfoL ),
        ENTRY( "TestBmpAnimNewL", CTestDOMSkins::TestBmpAnimNewL ),
        ENTRY( "TestBmpAnimSetFrameInfos", CTestDOMSkins::TestBmpAnimSetFrameInfosL ),
        ENTRY( "TestBmpAnimFrameInfos", CTestDOMSkins::TestBmpAnimFrameInfosL ),
        ENTRY( "TestBmpAnimSetLastFrameBackground", CTestDOMSkins::TestBmpAnimSetLastFrmBgL ),
        ENTRY( "TestBmpAnimLastFrameBackground", CTestDOMSkins::TestBmpAnimLastFrmBgL ),
        ENTRY( "TestBmpAnimSetFrameInterval", CTestDOMSkins::TestBmpAnimSetFrameIntervalL ),
        ENTRY( "TestBmpAnimFrameInterval", CTestDOMSkins::TestBmpAnimFrameIntervalL ),
        ENTRY( "TestBmpAnimSetPlayMode", CTestDOMSkins::TestBmpAnimSetPlayModeL ),
        ENTRY( "TestBmpAnimPlayMode", CTestDOMSkins::TestBmpAnimPlayModeL ),
        ENTRY( "TestBmpAnimSetFlash", CTestDOMSkins::TestBmpAnimSetFlashL ),
        ENTRY( "TestBmpAnimFlash", CTestDOMSkins::TestBmpAnimFlashL ),

        ENTRY( "TestStringNewL", CTestDOMSkins::TestStringNewL ),
        ENTRY( "TestStringSetStringL", CTestDOMSkins::TestStringSetStringL ),
        ENTRY( "TestStringString", CTestDOMSkins::TestStringStringL ),

        ENTRY( "TestEffParamNewL", CTestDOMSkins::TestEffParamNewL ),
        ENTRY( "TestEffParamSetType", CTestDOMSkins::TestEffParamSetTypeL ),
        ENTRY( "TestEffParamGetType", CTestDOMSkins::TestEffParamGetTypeL ),
        ENTRY( "TestEffParamSetNameL", CTestDOMSkins::TestEffParamSetNameL ),
        ENTRY( "TestEffParamGetName", CTestDOMSkins::TestEffParamGetNameL ),
        ENTRY( "TestEffParamSetValue", CTestDOMSkins::TestEffParamSetValueL ),
        ENTRY( "TestEffParamGetNumber", CTestDOMSkins::TestEffParamGetNumberL ),
        ENTRY( "TestEffParamGetString", CTestDOMSkins::TestEffParamGetStringL ),
        ENTRY( "TestEffParamGetFilename", CTestDOMSkins::TestEffParamGetFilenameL ),
        ENTRY( "TestEffParamGetBitmapIndex", CTestDOMSkins::TestEffParamGetBmpIndexL ),
        ENTRY( "TestEffParamGetMaskIndex", CTestDOMSkins::TestEffParamGetMaskIndexL ),

        ENTRY( "TestEffectNewL", CTestDOMSkins::TestEffectNewL ),
        ENTRY( "TestEffectSetEffectUid", CTestDOMSkins::TestEffectSetEffectUidL ),
        ENTRY( "TestEffectEffectUid", CTestDOMSkins::TestEffectEffectUidL ),
        ENTRY( "TestEffectAddParameterL", CTestDOMSkins::TestEffectAddParameterL ),
        ENTRY( "TestEffectGetParameter", CTestDOMSkins::TestEffectGetParameterL ),
        ENTRY( "TestEffectParameterCount", CTestDOMSkins::TestEffectParameterCountL ),
        ENTRY( "TestEffectSetLayerIndexesAndModes", CTestDOMSkins::TestEffectSetLayIndAndModL ),

        ENTRY( "TestEffQueueNewL", CTestDOMSkins::TestEffQueueNewL ),
        ENTRY( "TestEffQueueAddEffectL", CTestDOMSkins::TestEffQueueAddEffectL ),
        ENTRY( "TestEffQueueGetEffect", CTestDOMSkins::TestEffQueueGetEffectL ),
        ENTRY( "TestEffQueueEffectCount", CTestDOMSkins::TestEffQueueEffectCountL ),
        ENTRY( "TestEffQueueSetLayerIndexesAndModes", CTestDOMSkins::TestEffQueueSetLayIndAndModL ),
        ENTRY( "TestEffQueueSetReference", CTestDOMSkins::TestEffQueueSetReferenceL ),

        ENTRY( "TestSBParamNewL", CTestDOMSkins::TestSBParamNewL ),
        ENTRY( "TestSBParamSetDataL", CTestDOMSkins::TestSBParamSetDataL ),
        ENTRY( "TestSBParamName", CTestDOMSkins::TestSBParamNameL ),
        ENTRY( "TestSBParamAnimationValueId", CTestDOMSkins::TestSBParamAnimValueIdL ),
        ENTRY( "TestSBParamParamFlags", CTestDOMSkins::TestSBParamParamFlagsL ),

        ENTRY( "TestNameRefNewL", CTestDOMSkins::TestNameRefNewL ),
        ENTRY( "TestNameRefSetDataL", CTestDOMSkins::TestNameRefSetDataL ),
        ENTRY( "TestNameRefName", CTestDOMSkins::TestNameRefNameL ),
        ENTRY( "TestNameRefAnimationValueId", CTestDOMSkins::TestNameRefAnimValueIdL ),

        ENTRY( "TestTimModelNewL", CTestDOMSkins::TestTimModelNewL ),
        ENTRY( "TestTimModelSetTimingModelUid", CTestDOMSkins::TestTimModelSetTimingModelUidL ),
        ENTRY( "TestTimModelTimingModelUid", CTestDOMSkins::TestTimModelTimingModelUidL ),
        ENTRY( "TestTimModelAddParameterL", CTestDOMSkins::TestTimModelAddParameterL ),
        ENTRY( "TestTimModelParameter", CTestDOMSkins::TestTimModelParameterL ),
        ENTRY( "TestTimModelParameterCount", CTestDOMSkins::TestTimModelParameterCountL ),

        ENTRY( "TestAnimValueNewL", CTestDOMSkins::TestAnimValueNewL ),
        ENTRY( "TestAnimValueSetAnimationValueUid", CTestDOMSkins::TestAnimValueSetAnimValueUidL ),
        ENTRY( "TestAnimValueAnimationValueUid", CTestDOMSkins::TestAnimValueAnimValueUidL ),
        ENTRY( "TestAnimValueSetTimingModelId", CTestDOMSkins::TestAnimValueSetTimModelIdL ),
        ENTRY( "TestAnimValueTimingModelId", CTestDOMSkins::TestAnimValueTimingModelIdL ),
        ENTRY( "TestAnimValueAddParameterL", CTestDOMSkins::TestAnimValueAddParameterL ),
        ENTRY( "TestAnimValueParameter", CTestDOMSkins::TestAnimValueParameterL ),
        ENTRY( "TestAnimValueParameterCount", CTestDOMSkins::TestAnimValueParameterCountL ),

        ENTRY( "TestAnimCmdNewL", CTestDOMSkins::TestAnimCmdNewL ),
        ENTRY( "TestAnimCmdAddNamedReferenceL", CTestDOMSkins::TestAnimCmdAddNamedRefL ),
        ENTRY( "TestAnimCmdNamedReference", CTestDOMSkins::TestAnimCmdNamedRefL ),
        ENTRY( "TestAnimCmdNamedReferenceCount", CTestDOMSkins::TestAnimCmdNamedRefCountL ),

        ENTRY( "TestAnimItemNewL", CTestDOMSkins::TestAnimItemNewL ),
        ENTRY( "TestAnimItemSetLayerIndexesAndModes", CTestDOMSkins::TestAnimItemSetLayIndAndModL ),
        ENTRY( "TestAnimItemSetMinInterval", CTestDOMSkins::TestAnimItemSetMinIntervalL ),
        ENTRY( "TestAnimItemMinInterval", CTestDOMSkins::TestAnimItemMinIntervalL ),
        ENTRY( "TestAnimItemSetMorphing", CTestDOMSkins::TestAnimItemSetMorphingL ),
        ENTRY( "TestAnimItemMorphing", CTestDOMSkins::TestAnimItemMorphingL ),
        ENTRY( "TestAnimItemAddPreprocessCommandL", CTestDOMSkins::TestAnimItemAddPreprocessCmdL ),
        ENTRY( "TestAnimItemPreprocessCommand", CTestDOMSkins::TestAnimItemPreprocessCmdL ),
        ENTRY( "TestAnimItemPreprocessCommandCount", CTestDOMSkins::TestAnimItemPreprocessCmdCountL ),
        ENTRY( "TestAnimItemAddAnimationCommandItemL", CTestDOMSkins::TestAnimItemAddAnimCmdItemL ),
        ENTRY( "TestAnimItemAnimationCommandItem", CTestDOMSkins::TestAnimItemAnimCmdItemL ),
        ENTRY( "TestAnimItemAnimationCommandItemCount", CTestDOMSkins::TestAnimItemAnimCmdItemCountL ),
        ENTRY( "TestAnimItemAddAnimationValueL", CTestDOMSkins::TestAnimItemAddAnimValueL ),
        ENTRY( "TestAnimItemAnimationValue", CTestDOMSkins::TestAnimItemAnimValueL ),
        ENTRY( "TestAnimItemAnimationValueCount", CTestDOMSkins::TestAnimItemAnimValueCountL ),
        ENTRY( "TestAnimItemAddTimingModelL", CTestDOMSkins::TestAnimItemAddTimingModelL ),
        ENTRY( "TestAnimItemTimingModel", CTestDOMSkins::TestAnimItemTimingModelL ),
        ENTRY( "TestAnimItemTimingModelCount", CTestDOMSkins::TestAnimItemTimingModelCountL ),
        ENTRY( "TestAnimItemAddSizeBoundParamL", CTestDOMSkins::TestAnimItemAddSizeBoundParamL ),
        ENTRY( "TestAnimItemSizeBoundParam", CTestDOMSkins::TestAnimItemSizeBoundParamL ),
        ENTRY( "TestAnimItemSizeBoundParamCount", CTestDOMSkins::TestAnimItemSBParamCountL ),

        // test functions in aknspkgid.h
        ENTRY( "TestPkgIDCopyToDes", CTestDOMSkins::TestPkgIDCopyToDesL ),
        ENTRY( "TestPkgIDSetFromDesL", CTestDOMSkins::TestPkgIDSetFromDesL ),

        // test functions in aknspointerstore.h
        ENTRY( "TestPoiStoStorePointerL", CTestDOMSkins::TestPoiStoStorePointerL ),
        ENTRY( "TestPoiStoRetrievePointer", CTestDOMSkins::TestPoiStoRetrievePointerL ),
        ENTRY( "TestPoiStoRemovePointer", CTestDOMSkins::TestPoiStoRemovePointerL ),

        // test functions in aknsrendererwrapper.h
        ENTRY( "TestWrapRenderScalableItemL", CTestDOMSkins::TestWrapRenderScalableItemL ),

        // test functions in aknssrvchunklookup.h
        ENTRY( "TestChunkLookupAndCreateDefL", CTestDOMSkins::TestChunkLookupAndCreateDefL ),
        ENTRY( "TestChunkLookupAndCreateScalableItemL", CTestDOMSkins::TestChunkLookupAndCreScaItemL ),
        ENTRY( "TestChunkBeginRender", CTestDOMSkins::TestChunkBeginRenderL ),
        ENTRY( "TestChunkEndRender", CTestDOMSkins::TestChunkEndRenderL ),

        // test functions in aknssrvclient.h
        ENTRY( "TestClientConstruct", CTestDOMSkins::TestClientConstructL ),
        ENTRY( "TestClientConnect", CTestDOMSkins::TestClientConnectL ),
        ENTRY( "TestClientClose", CTestDOMSkins::TestClientCloseL ),
        ENTRY( "TestClientEnableSkinChangeNotify", CTestDOMSkins::TestClientEnaSkinChaNotifyL ),
        ENTRY( "TestClientDisableSkinChangeNotify", CTestDOMSkins::TestClientDisaSkinChaNotifyL ),
        ENTRY( "TestClientClientError", CTestDOMSkins::TestClientClientErrorL ),
        ENTRY( "TestClientSetAllDefinitionSets", CTestDOMSkins::TestClientSetAllDefiSetsL ),
        ENTRY( "TestClientEnumerateSkinPackagesL", CTestDOMSkins::TestClientEnumSkinPkgsL ),
        ENTRY( "TestClientCreateChunkLookupL", CTestDOMSkins::TestClientCreateChunkLookupL ),
        ENTRY( "TestClientSetIdleWallpaper", CTestDOMSkins::TestClientSetIdleWallpaperL ),
        ENTRY( "TestClientStoreScalableGraphics", CTestDOMSkins::TestClientStoreScaGraphicsL ),
        ENTRY( "TestClientClearScalableGraphics", CTestDOMSkins::TestClientClearScaGraphicsL ),
        ENTRY( "TestClientCopySkin", CTestDOMSkins::TestClientCopySkinL ),
        ENTRY( "TestClientDeleteSkin", CTestDOMSkins::TestClientDeleteSkinL ),
        ENTRY( "TestClientOpenBitmapFile", CTestDOMSkins::TestClientOpenBitmapFileL ),
        ENTRY( "TestClientOpenInifile", CTestDOMSkins::TestClientOpenInifileL ),
        ENTRY( "TestClientCopySoundFile", CTestDOMSkins::TestClientCopySoundFileL ),
        ENTRY( "TestClientDecodeWallpaperImageL", CTestDOMSkins::TestClientDecodeWallpaperImageL ),
        ENTRY( "TestClientOpenImageInifile", CTestDOMSkins::TestClientOpenImageInifileL ),
        ENTRY( "TestClientSetSlideSetWallpaper", CTestDOMSkins::TestClientSetSlideSetWallpaperL ),
        ENTRY( "TestClientFreeUnnecessaryLayoutBitmaps", CTestDOMSkins::TestClientFreeUnnecLayBmpsL ),
        ENTRY( "TestClientCheckIconConfiguration", CTestDOMSkins::TestClientCheckIconConfigL ),

        // test functions in aknssrvskininformationpkg.h
        ENTRY( "TestInfoPID", CTestDOMSkins::TestInfoPIDL ),
        ENTRY( "TestInfoDirectory", CTestDOMSkins::TestInfoDirectoryL ),
        ENTRY( "TestInfoIniFileDirectory", CTestDOMSkins::TestInfoIniFileDirectoryL ),
        ENTRY( "TestInfoName", CTestDOMSkins::TestInfoNameL ),
        ENTRY( "TestInfoIdleStateWallPaperImageFileName", CTestDOMSkins::TestInfoIdleStateWallFileNameL ),
        ENTRY( "TestInfoPinboarWallPaperImageFileName", CTestDOMSkins::TestInfoPinboarWallFileNameL ),
        ENTRY( "TestInfoIdleStateWallPaperImageIndex", CTestDOMSkins::TestInfoIdleStateWallIndexL ),
        ENTRY( "TestInfoPinboarWallPaperImageIndex", CTestDOMSkins::TestInfoPinboardWallIndexL ),
        ENTRY( "TestInfoIsDeletable", CTestDOMSkins::TestInfoIsDeletableL ),
        ENTRY( "TestInfoIsCopyable", CTestDOMSkins::TestInfoIsCopyableL ),
        ENTRY( "TestInfoColorSchemePID", CTestDOMSkins::TestInfoColorSchemePIDL ),
        ENTRY( "TestInfoHasIconset", CTestDOMSkins::TestInfoHasIconsetL ),
        ENTRY( "TestInfoProtectionType", CTestDOMSkins::TestInfoProtectionTypeL ),
        ENTRY( "TestInfoIsCorrupted", CTestDOMSkins::TestInfoIsCorruptedL ),
        ENTRY( "TestInfoFullName", CTestDOMSkins::TestInfoFullNameL ),

        // [test cases entries]

        };

    const TInt count = sizeof( KFunctions ) / sizeof( TStifFunctionInfo );

    return RunInternalL( KFunctions, count, aItem );

    }


//  [End of File]
