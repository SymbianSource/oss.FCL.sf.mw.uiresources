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



#ifndef C_TESTDOMSKINS_H
#define C_TESTDOMSKINS_H

//  INCLUDES
#include <stiflogger.h>
#include <testscripterinternal.h>
#include <stiftestmodule.h>
#include <testclassassert.h>

// MACROS
#define TEST_CLASS_VERSION_MAJOR 0
#define TEST_CLASS_VERSION_MINOR 0
#define TEST_CLASS_VERSION_BUILD 0

// Logging path
_LIT( KtestdomskinsLogPath, "\\logs\\testframework\\testdomskins\\" ); 
// Log file
_LIT( KtestdomskinsLogFile, "testdomskins.txt" ); 
_LIT( KtestdomskinsLogFileWithTitle, "testdomskins_[%S].txt" );

/**
*  CTestDOMSkins test class for STIF Test Framework TestScripter.
*  @since S60 5.0
*/
NONSHARABLE_CLASS( CTestDOMSkins ) : public CScriptBase
    {
public:  // Constructors and destructor

    /**
    * Two-phased constructor.
    */
    static CTestDOMSkins* NewL( CTestModuleIf& aTestModuleIf );

    /**
    * Destructor.
    */
    virtual ~CTestDOMSkins();

public: // Functions from base classes

    /**
    * From CScriptBase Runs a script line.
    * @since S60 5.0
    * @param aItem Script line containing method name and parameters
    * @return Symbian OS error code
    */
    virtual TInt RunMethodL( CStifItemParser& aItem );

private:

    /**
    * C++ default constructor.
    */
    CTestDOMSkins( CTestModuleIf& aTestModuleIf );

    /**
    * By default Symbian 2nd phase constructor is private.
    */
    void ConstructL();

    /**
     * Method used to log version of test class
     */
    void SendTestClassVersion();

private: // test functions in aknseffectanim.h

    /**
    * test NewL method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimNewL( CStifItemParser& aItem );

    /**
    * test ConstructFromSkinL method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimConstructFromSkinL( CStifItemParser& aItem );

    /**
    * test Start method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimStartL( CStifItemParser& aItem );

    /**
    * test Stop method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimStopL( CStifItemParser& aItem );

    /**
    * test Pause method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimPauseL( CStifItemParser& aItem );

    /**
    * test Continue method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimContinueL( CStifItemParser& aItem );

    /**
    * test State method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimStateL( CStifItemParser& aItem );

    /**
    * test Render method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimRenderL( CStifItemParser& aItem );

    /**
    * test OutputRgb method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimOutputRgbL( CStifItemParser& aItem );

    /**
    * test OutputAlpha method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimOutputAlphaL( CStifItemParser& aItem );

    /**
    * test MinimumSize method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimMinimumSizeL( CStifItemParser& aItem );

    /**
    * test Size method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimSizeL( CStifItemParser& aItem );

    /**
    * test NeedsInputLayer method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimNeedsInputLayerL( CStifItemParser& aItem );

    /**
    * test BeginConfigInputLayersL method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimBeginConfigInputLayersL( CStifItemParser& aItem );

    /**
    * test InputRgbGc method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimInputRgbGcL( CStifItemParser& aItem );

    /**
    * test InputAlphaGc method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimInputAlphaGcL( CStifItemParser& aItem );

    /**
    * test EndConfigInputLayersL method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimEndConfigInputLayersL( CStifItemParser& aItem );

    /**
    * test UpdateOutput method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimUpdateOutputL( CStifItemParser& aItem );

    /**
    * test SetIdling method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimSetIdlingL( CStifItemParser& aItem );

    /**
    * test IsIdling method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimIsIdlingL( CStifItemParser& aItem );

private: // test functions in aknsitemdef.h

    /**
    * test NewL method of CAknsItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestItemNewL( CStifItemParser& aItem );

    /**
    * test Type method of CAknsItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestItemTypeL( CStifItemParser& aItem );

    /**
    * test ID method of CAknsItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestItemIDL( CStifItemParser& aItem );

    /**
    * test LinearOrder method of CAknsItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestItemLinearOrderL( CStifItemParser& aItem );

private: // test functions in aknsitemdef.h

    /**
    * test NewL method of CAknsImageItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestImageNewL( CStifItemParser& aItem );

    /**
    * test SetAttributesL method of CAknsImageItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestImageSetAttributesL( CStifItemParser& aItem );

    /**
    * test Attributes method of CAknsImageItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestImageAttributesL( CStifItemParser& aItem );

private: // test functions in aknsitemdef.h

    /**
    * test NewL method with index param of CAknsBitmapItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestBitmapNewWithIndexL( CStifItemParser& aItem );

    /**
    * test NewL method of CAknsBitmapItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestBitmapNewL( CStifItemParser& aItem );

    /**
    * test SetFilename method of CAknsBitmapItemDef class.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestBitmapSetFilenameL( CStifItemParser& aItem );

    /**
    * test Filename method of CAknsBitmapItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestBitmapFilenameL( CStifItemParser& aItem );

    /**
    * test SetIndex method of CAknsBitmapItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestBitmapSetIndexL( CStifItemParser& aItem );

    /**
    * test Index method of CAknsBitmapItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestBitmapIndexL( CStifItemParser& aItem );

private: // test functions in aknsitemdef.h

    /**
    * test NewL method with index param of CAknsMaskedBitmapItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestMaskNewWithIndexL( CStifItemParser& aItem );

    /**
    * test NewL method with index param of CAknsMaskedBitmapItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestMaskNewL( CStifItemParser& aItem );

    /**
    * test SetIndex method of CAknsMaskedBitmapItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestMaskSetIndexL( CStifItemParser& aItem );

    /**
    * test Index method of CAknsMaskedBitmapItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestMaskIndexL( CStifItemParser& aItem );

private: // test functions in aknsitemdef.h

    /**
    * test NewL method with index param of CAknsColorTableItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestColorTableNewWithColorL( CStifItemParser& aItem );

    /**
    * test NewL method with index param of CAknsColorTableItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestColorTableNewL( CStifItemParser& aItem );

    /**
    * test SetColors method of CAknsColorTableItemDef class.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestColorTableSetColorsL( CStifItemParser& aItem );

    /**
    * test Colors method of CAknsColorTableItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestColorTableColorsL( CStifItemParser& aItem );

    /**
    * test NumberOfColors method of CAknsColorTableItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestColorTableNumberOfColorsL( CStifItemParser& aItem );

private: // test functions in aknsitemdef.h

    /**
    * test NewL method with index param of CAknsImageTableItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestImageTableNewWithImageL( CStifItemParser& aItem );

    /**
    * test NewL method with index param of CAknsImageTableItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestImageTableNewL( CStifItemParser& aItem );

    /**
    * test SetImages method of CAknsImageTableItemDef class.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestImageTableSetImagesL( CStifItemParser& aItem );

    /**
    * test Images method of CAknsImageTableItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestImageTableImagesL( CStifItemParser& aItem );

    /**
    * test NumberOfImages method of CAknsImageTableItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestImageTableNumberOfImagesL( CStifItemParser& aItem );

private: // test functions in aknsitemdef.h

    /**
    * test NewL method with index param of CAknsBmpAnimItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestBmpAnimNewWithFrameInfoL( CStifItemParser& aItem );

    /**
    * test NewL method with index param of CAknsBmpAnimItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestBmpAnimNewL( CStifItemParser& aItem );

    /**
    * test SetFrameInfos method of CAknsBmpAnimItemDef class.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestBmpAnimSetFrameInfosL( CStifItemParser& aItem );

    /**
    * test FrameInfos method of CAknsBmpAnimItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestBmpAnimFrameInfosL( CStifItemParser& aItem );

    /**
    * test SetLastFrameBackground method of CAknsBmpAnimItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestBmpAnimSetLastFrmBgL( CStifItemParser& aItem );

    /**
    * test LastFrameBackground method of CAknsBmpAnimItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestBmpAnimLastFrmBgL( CStifItemParser& aItem );

    /**
    * test SetFrameInterval method of CAknsBmpAnimItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestBmpAnimSetFrameIntervalL( CStifItemParser& aItem );

    /**
    * test FrameInterval method of CAknsBmpAnimItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestBmpAnimFrameIntervalL( CStifItemParser& aItem );

    /**
    * test SetPlayMode method of CAknsBmpAnimItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestBmpAnimSetPlayModeL( CStifItemParser& aItem );

    /**
    * test PlayMode method of CAknsBmpAnimItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestBmpAnimPlayModeL( CStifItemParser& aItem );

    /**
    * test SetFlash method of CAknsBmpAnimItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestBmpAnimSetFlashL( CStifItemParser& aItem );

    /**
    * test Flash method of CAknsBmpAnimItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestBmpAnimFlashL( CStifItemParser& aItem );

private: // test functions in aknsitemdef.h

    /**
    * test NewL method of CAknsStringItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestStringNewL( CStifItemParser& aItem );

    /**
    * test SetStringL method of CAknsStringItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestStringSetStringL( CStifItemParser& aItem );

    /**
    * test String method of CAknsStringItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestStringStringL( CStifItemParser& aItem );

private: // test functions in aknsitemdef.h

    /**
    * test NewL method of CAknsEffectParamDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestEffParamNewL( CStifItemParser& aItem );

    /**
    * test SetType method of CAknsEffectParamDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestEffParamSetTypeL( CStifItemParser& aItem );

    /**
    * test GetType method of CAknsEffectParamDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestEffParamGetTypeL( CStifItemParser& aItem );

    /**
    * test SetNameL method of CAknsEffectParamDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestEffParamSetNameL( CStifItemParser& aItem );

    /**
    * test GetName method of CAknsEffectParamDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestEffParamGetNameL( CStifItemParser& aItem );

    /**
    * test SetValue method of CAknsEffectParamDef class.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestEffParamSetValueL( CStifItemParser& aItem );

    /**
    * test GetNumber method of CAknsEffectParamDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestEffParamGetNumberL( CStifItemParser& aItem );

    /**
    * test GetString method of CAknsEffectParamDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestEffParamGetStringL( CStifItemParser& aItem );

    /**
    * test GetFilename method of CAknsEffectParamDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestEffParamGetFilenameL( CStifItemParser& aItem );

    /**
    * test GetBitmapIndex method of CAknsEffectParamDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestEffParamGetBmpIndexL( CStifItemParser& aItem );

    /**
    * test GetMaskIndex method of CAknsEffectParamDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestEffParamGetMaskIndexL( CStifItemParser& aItem );

private: // test functions in aknsitemdef.h

    /**
    * test NewL method of CAknsEffectItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestEffectNewL( CStifItemParser& aItem );

    /**
    * test SetEffectUid method of CAknsEffectItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestEffectSetEffectUidL( CStifItemParser& aItem );

    /**
    * test EffectUid method of CAknsEffectItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestEffectEffectUidL( CStifItemParser& aItem );

    /**
    * test AddParameterL method of CAknsEffectItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestEffectAddParameterL( CStifItemParser& aItem );

    /**
    * test GetParameter method of CAknsEffectItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestEffectGetParameterL( CStifItemParser& aItem );

    /**
    * test ParameterCount method of CAknsEffectItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestEffectParameterCountL( CStifItemParser& aItem );

    /**
    * test SetLayerIndexesAndModes method of CAknsEffectItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestEffectSetLayIndAndModL( CStifItemParser& aItem );

private: // test functions in aknsitemdef.h

    /**
    * test NewL method of CAknsEffectQueueItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestEffQueueNewL( CStifItemParser& aItem );

    /**
    * test AddEffectL method of CAknsEffectQueueItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestEffQueueAddEffectL( CStifItemParser& aItem );

    /**
    * test GetEffect method of CAknsEffectQueueItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestEffQueueGetEffectL( CStifItemParser& aItem );

    /**
    * test EffectCount method of CAknsEffectQueueItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestEffQueueEffectCountL( CStifItemParser& aItem );

    /**
    * test SetLayerIndexesAndModes method of CAknsEffectQueueItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestEffQueueSetLayIndAndModL( CStifItemParser& aItem );

    /**
    * test SetReference method of CAknsEffectQueueItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestEffQueueSetReferenceL( CStifItemParser& aItem );

private: // test functions in aknsitemdef.h

    /**
    * test NewL method of CAknsSizeBoundParamDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestSBParamNewL( CStifItemParser& aItem );

    /**
    * test SetDataL method of CAknsSizeBoundParamDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestSBParamSetDataL( CStifItemParser& aItem );

    /**
    * test Name method of CAknsSizeBoundParamDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestSBParamNameL( CStifItemParser& aItem );

    /**
    * test AnimationValueId method of CAknsSizeBoundParamDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestSBParamAnimValueIdL( CStifItemParser& aItem );

    /**
    * test ParamFlags method of CAknsSizeBoundParamDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestSBParamParamFlagsL( CStifItemParser& aItem );

private: // test functions in aknsitemdef.h

    /**
    * test NewL method of CAknsNamedReferenceDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestNameRefNewL( CStifItemParser& aItem );

    /**
    * test SetDataL method of CAknsNamedReferenceDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestNameRefSetDataL( CStifItemParser& aItem );

    /**
    * test Name method of CAknsNamedReferenceDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestNameRefNameL( CStifItemParser& aItem );

    /**
    * test AnimationValueId method of CAknsNamedReferenceDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestNameRefAnimValueIdL( CStifItemParser& aItem );

private: // test functions in aknsitemdef.h

    /**
    * test NewL method of CAknsTimingModelDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestTimModelNewL( CStifItemParser& aItem );

    /**
    * test SetTimingModelUid method of CAknsTimingModelDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestTimModelSetTimingModelUidL( CStifItemParser& aItem );

    /**
    * test TimingModelUid method of CAknsTimingModelDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestTimModelTimingModelUidL( CStifItemParser& aItem );

    /**
    * test AddParameterL method of CAknsTimingModelDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestTimModelAddParameterL( CStifItemParser& aItem );

    /**
    * test Parameter method of CAknsTimingModelDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestTimModelParameterL( CStifItemParser& aItem );

    /**
    * test ParameterCount method of CAknsTimingModelDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestTimModelParameterCountL( CStifItemParser& aItem );

private: // test functions in aknsitemdef.h

    /**
    * test NewL method of CAknsAnimationValueDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimValueNewL( CStifItemParser& aItem );

    /**
    * test SetAnimationValueUid method of CAknsAnimationValueDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimValueSetAnimValueUidL( CStifItemParser& aItem );

    /**
    * test AnimationValueUid method of CAknsAnimationValueDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimValueAnimValueUidL( CStifItemParser& aItem );

    /**
    * test SetTimingModelId method of CAknsAnimationValueDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimValueSetTimModelIdL( CStifItemParser& aItem );

    /**
    * test TimingModelId method of CAknsAnimationValueDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimValueTimingModelIdL( CStifItemParser& aItem );

    /**
    * test AddParameterL method of CAknsAnimationValueDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimValueAddParameterL( CStifItemParser& aItem );

    /**
    * test Parameter method of CAknsAnimationValueDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimValueParameterL( CStifItemParser& aItem );

    /**
    * test ParameterCount method of CAknsAnimationValueDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimValueParameterCountL( CStifItemParser& aItem );

private: // test functions in aknsitemdef.h

    /**
    * test NewL method of CAknsAnimationCommandItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimCmdNewL( CStifItemParser& aItem );

    /**
    * test AddNamedReferenceL method of CAknsAnimationCommandItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimCmdAddNamedRefL( CStifItemParser& aItem );

    /**
    * test NamedReference method of CAknsAnimationCommandItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimCmdNamedRefL( CStifItemParser& aItem );

    /**
    * test NamedReferenceCount method of CAknsAnimationCommandItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimCmdNamedRefCountL( CStifItemParser& aItem );

private: // test functions in aknsitemdef.h

    /**
    * test NewL method of CAknsAnimationItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimItemNewL( CStifItemParser& aItem );

    /**
    * test SetLayerIndexesAndModes method of CAknsAnimationItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimItemSetLayIndAndModL( CStifItemParser& aItem );

    /**
    * test SetMinInterval method of CAknsAnimationItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimItemSetMinIntervalL( CStifItemParser& aItem );

    /**
    * test MinInterval method of CAknsAnimationItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimItemMinIntervalL( CStifItemParser& aItem );

    /**
    * test SetMorphing method of CAknsAnimationItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimItemSetMorphingL( CStifItemParser& aItem );

    /**
    * test Morphing method of CAknsAnimationItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimItemMorphingL( CStifItemParser& aItem );

    /**
    * test AddPreprocessCommandL method of CAknsAnimationItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimItemAddPreprocessCmdL( CStifItemParser& aItem );

    /**
    * test PreprocessCommand method of CAknsAnimationItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimItemPreprocessCmdL( CStifItemParser& aItem );

    /**
    * test PreprocessCommandCount method of CAknsAnimationItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimItemPreprocessCmdCountL( CStifItemParser& aItem );

    /**
    * test AddAnimationCommandItemL method of CAknsAnimationItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimItemAddAnimCmdItemL( CStifItemParser& aItem );

    /**
    * test AnimationCommandItem method of CAknsAnimationItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimItemAnimCmdItemL( CStifItemParser& aItem );

    /**
    * test AnimationCommandItemCount method of CAknsAnimationItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimItemAnimCmdItemCountL( CStifItemParser& aItem );

    /**
    * test AddAnimationValueL method of CAknsAnimationItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimItemAddAnimValueL( CStifItemParser& aItem );

    /**
    * test AnimationValue method of CAknsAnimationItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimItemAnimValueL( CStifItemParser& aItem );

    /**
    * test AnimationValueCount method of CAknsAnimationItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimItemAnimValueCountL( CStifItemParser& aItem );

    /**
    * test AddTimingModelL method of CAknsAnimationItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimItemAddTimingModelL( CStifItemParser& aItem );

    /**
    * test TimingModel method of CAknsAnimationItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimItemTimingModelL( CStifItemParser& aItem );

    /**
    * test TimingModelCount method of CAknsAnimationItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimItemTimingModelCountL( CStifItemParser& aItem );

    /**
    * test AddSizeBoundParamL method of CAknsAnimationItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimItemAddSizeBoundParamL( CStifItemParser& aItem );

    /**
    * test SizeBoundParam method of CAknsAnimationItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimItemSizeBoundParamL( CStifItemParser& aItem );

    /**
    * test SizeBoundParamCount method of CAknsAnimationItemDef class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestAnimItemSBParamCountL( CStifItemParser& aItem );

private: // test functions in aknspkgid.h

    /**
    * test CopyToDes method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestPkgIDCopyToDesL( CStifItemParser& aItem );

    /**
    * test SetFromDesL method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestPkgIDSetFromDesL( CStifItemParser& aItem );

private: // test functions in aknspointerstore.h

    /**
    * test StorePointerL method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestPoiStoStorePointerL( CStifItemParser& aItem );

    /**
    * test RetrievePointer method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestPoiStoRetrievePointerL( CStifItemParser& aItem );

    /**
    * test RemovePointer method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestPoiStoRemovePointerL( CStifItemParser& aItem );

private: // test functions in aknsrendererwrapper.h

    /**
    * test RenderScalableItemL method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestWrapRenderScalableItemL( CStifItemParser& aItem );

private: // test functions in aknssrvchunklookup.h

    /**
    * test LookupAndCreateDefL method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestChunkLookupAndCreateDefL( CStifItemParser& aItem );

    /**
    * test LookupAndCreateScalableItemL method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestChunkLookupAndCreScaItemL( CStifItemParser& aItem );

    /**
    * test BeginRender method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestChunkBeginRenderL( CStifItemParser& aItem );

    /**
    * test EndRender method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestChunkEndRenderL( CStifItemParser& aItem );

private: // test functions of RAknsSrvSession class in aknssrvclient.h

    /**
    * test default constructor method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestClientConstructL( CStifItemParser& aItem );

    /**
    * test Connect method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestClientConnectL( CStifItemParser& aItem );

    /**
    * test Close method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestClientCloseL( CStifItemParser& aItem );

    /**
    * test EnableSkinChangeNotify method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestClientEnaSkinChaNotifyL( CStifItemParser& aItem );

    /**
    * test DisableSkinChangeNotify method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestClientDisaSkinChaNotifyL( CStifItemParser& aItem );

    /**
    * test ClientError method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestClientClientErrorL( CStifItemParser& aItem );

    /**
    * test SetAllDefinitionSets method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestClientSetAllDefiSetsL( CStifItemParser& aItem );

    /**
    * test EnumerateSkinPackagesL method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestClientEnumSkinPkgsL( CStifItemParser& aItem );

    /**
    * test CreateChunkLookupL method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestClientCreateChunkLookupL( CStifItemParser& aItem );

    /**
    * test SetIdleWallpaper method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestClientSetIdleWallpaperL( CStifItemParser& aItem );

    /**
    * test StoreScalableGraphics method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestClientStoreScaGraphicsL( CStifItemParser& aItem );

    /**
    * test ClearScalableGraphics method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestClientClearScaGraphicsL( CStifItemParser& aItem );

    /**
    * test CopySkin method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestClientCopySkinL( CStifItemParser& aItem );

    /**
    * test DeleteSkin method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestClientDeleteSkinL( CStifItemParser& aItem );

    /**
    * test OpenBitmapFile method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestClientOpenBitmapFileL( CStifItemParser& aItem );

    /**
    * test OpenInifile method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestClientOpenInifileL( CStifItemParser& aItem );

    /**
    * test CopySoundFile method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestClientCopySoundFileL( CStifItemParser& aItem );

    /**
    * test DecodeWallpaperImageL method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestClientDecodeWallpaperImageL( CStifItemParser& aItem );

    /**
    * test OpenImageInifile method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestClientOpenImageInifileL( CStifItemParser& aItem );

    /**
    * test SetSlideSetWallpaper method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestClientSetSlideSetWallpaperL( CStifItemParser& aItem );

    /**
    * test FreeUnnecessaryLayoutBitmaps method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestClientFreeUnnecLayBmpsL( CStifItemParser& aItem );

    /**
    * test CheckIconConfiguration method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestClientCheckIconConfigL( CStifItemParser& aItem );

private: // test functions in aknssrvskininformationpkg.h

    /**
    * test PID method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestInfoPIDL( CStifItemParser& aItem );

    /**
    * test Directory method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestInfoDirectoryL( CStifItemParser& aItem );

    /**
    * test IniFileDirectory method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestInfoIniFileDirectoryL( CStifItemParser& aItem );

    /**
    * test Name method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestInfoNameL( CStifItemParser& aItem );

    /**
    * test IdleStateWallPaperImageFileName method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestInfoIdleStateWallFileNameL( CStifItemParser& aItem );

    /**
    * test PinboarWallPaperImageFileName method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestInfoPinboarWallFileNameL( CStifItemParser& aItem );

    /**
    * test IdleStateWallPaperImageIndex method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestInfoIdleStateWallIndexL( CStifItemParser& aItem );

    /**
    * test PinboardWallPaperImageIndex method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestInfoPinboardWallIndexL( CStifItemParser& aItem );

    /**
    * test IsDeletable method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestInfoIsDeletableL( CStifItemParser& aItem );

    /**
    * test IsCopyable method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestInfoIsCopyableL( CStifItemParser& aItem );

    /**
    * test ColorSchemePID method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestInfoColorSchemePIDL( CStifItemParser& aItem );

    /**
    * test HasIconset method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestInfoHasIconsetL( CStifItemParser& aItem );

    /**
    * test ProtectionType method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestInfoProtectionTypeL( CStifItemParser& aItem );

    /**
    * test IsCorrupted method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestInfoIsCorruptedL( CStifItemParser& aItem );

    /**
    * test FullName method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestInfoFullNameL( CStifItemParser& aItem );

private:    // Data

    /**
     * ScreenSaver Property
     */
    TInt iOldScreenSaverProperty;

    };

#endif      // C_TESTDOMSKINS_H

// End of File
