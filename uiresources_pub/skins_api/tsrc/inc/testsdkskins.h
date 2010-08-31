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



#ifndef C_TESTSDKSKINS_H
#define C_TESTSDKSKINS_H

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
_LIT( KtestsdkskinsLogPath, "\\logs\\testframework\\testsdkskins\\" ); 
// Log file
_LIT( KtestsdkskinsLogFile, "testsdkskins.txt" ); 
_LIT( KtestsdkskinsLogFileWithTitle, "testsdkskins_[%S].txt" );

/**
*  CTestSDKSkins test class for STIF Test Framework TestScripter.
*  @since S60 5.0
*/
NONSHARABLE_CLASS( CTestSDKSkins ) : public CScriptBase
    {
public:  // Constructors and destructor

    /**
    * Two-phased constructor.
    */
    static CTestSDKSkins* NewL( CTestModuleIf& aTestModuleIf );

    /**
    * Destructor.
    */
    virtual ~CTestSDKSkins();

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
    CTestSDKSkins( CTestModuleIf& aTestModuleIf );

    /**
    * By default Symbian 2nd phase constructor is private.
    */
    void ConstructL();
    
    /**
     * Method used to log version of test class
     */
    void SendTestClassVersion();

private: // Test AknsBasicBackgroundControlContext.h
/*                  class CAknsBasicBackgroundControlContext                */
    /**
     * TestBBCCNewL test function for testing the 
     *     NewL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestBBCCNewL( CStifItemParser& aItem );
    
    /**
     * TestBBCCSetBitmapL test function for testing the 
     *     SetBitmap function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestBBCCSetBitmapL( CStifItemParser& aItem );
    
    /**
     * TestBBCCSetRectL test function for testing the 
     *     SetRect function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestBBCCSetRectL( CStifItemParser& aItem );
    
    /**
     * TestBBCCSetParentPosL test function for testing the 
     *     SetParentPos function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestBBCCSetParentPosL( CStifItemParser& aItem );
    
    /**
     * TestBBCCSetParentContextL test function for testing the 
     *     SetParentContext function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestBBCCSetParentContextL( CStifItemParser& aItem );

private: // Test AknsControlContext.h
/*                          class MAknsControlContext                       */
    /**
     * TestCCSupplyMopObjectL test function for testing the 
     *     SupplyMopObject function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestCCSupplyMopObjectL( CStifItemParser& aItem );
    
private: // Test AknsDataContext.h
/*                            class MAknsDataContext                          */
    /**
     * TestDCSupplyMopObjectL test function for testing the 
     *     SupplyMopObject function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestDCSupplyMopObjectL( CStifItemParser& aItem );
    
private: // Test AknsDrawUtils.h
/*                            class AknsDrawUtils                             */
    /**
     * TestDUControlContextL test function for testing the 
     *     ControlContext function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestDUControlContextL( CStifItemParser& aItem );
    
    /**
     * TestDUControlContextOfParentL test function for testing the 
     *     ControlContextOfParent function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestDUControlContextOfParentL( CStifItemParser& aItem );
    
    /**
     * TestDUBackgroundL test function for testing the 
     *     Background function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestDUBackgroundL( CStifItemParser& aItem );
    
    /**
     * TestDUBackgroundFPL test function for testing the 
     *     Background function with five parameters
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestDUBackgroundFPL( CStifItemParser& aItem );
    
    /**
     * TestDUBackgroundSPL test function for testing the 
     *     Background function with six parameters
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestDUBackgroundSPL( CStifItemParser& aItem );
    
    /**
     * TestDUDrawBackgroundL test function for testing the 
     *     DrawBackground function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestDUDrawBackgroundL( CStifItemParser& aItem );
    
    /**
     * TestDUBackgroundBetweenRectsFPL test function for testing the 
     *     BackgroundBetweenRects function with five parameters
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestDUBackgroundBetweenRectsFPL( CStifItemParser& aItem );
    
    /**
     * TestDUBackgroundBetweenRectsL test function for testing the 
     *     BackgroundBetweenRects function with six parameters
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestDUBackgroundBetweenRectsL( CStifItemParser& aItem );
    
    /**
     * TestDUBackgroundBetweenRectsSPL test function for testing the 
     *     BackgroundBetweenRects function with seven parameters
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestDUBackgroundBetweenRectsSPL( CStifItemParser& aItem );
    
    /**
     * TestDUHasBitmapBackgroundL test function for testing the 
     *     HasBitmapBackground function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestDUHasBitmapBackgroundL( CStifItemParser& aItem );
    
    /**
     * TestDUDrawCachedImageL test function for testing the 
     *     DrawCachedImage function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestDUDrawCachedImageL( CStifItemParser& aItem );
    
    /**
     * TestDUDrawCachedImageFBSL test function for testing the 
     *     ControlContext function with fbsbitgc
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestDUDrawCachedImageFBSL( CStifItemParser& aItem );
    
    /**
     * TestDUDrawFrameL test function for testing the 
     *     DrawFrame function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestDUDrawFrameL( CStifItemParser& aItem );
    
    /**
     * TestDUPrepareFrameL test function for testing the 
     *     PrepareFrame function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestDUPrepareFrameL( CStifItemParser& aItem );
    
    /**
     * TestDUDrawFrameSPL test function for testing the 
     *     DrawFrame function with seven parameters
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestDUDrawFrameSPL( CStifItemParser& aItem );
    
    /**
     * TestDUDrawFrameFBSL test function for testing the 
     *     DrawFrame function with fbsbitgc
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestDUDrawFrameFBSL( CStifItemParser& aItem );
    
    /**
     * TestDUDrawFramePartL test function for testing the 
     *     DrawFramePart function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestDUDrawFramePartL( CStifItemParser& aItem );
    
    /**
     * TestDUIsListSeperatorLines test function for testing the 
     *     IsListSeperatorLines function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestDUIsListSeperatorLines( CStifItemParser& aItem );
    
    /**
     * TestDUSlidingMode test function for testing the 
     *     SlidingMode function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestDUSlidingMode( CStifItemParser& aItem );
    
private: // Test AknsDrawUtils.h
/*                            class AknsDrawUtils                             */
    /**
     * TestFBCCNewL test function for testing the 
     *     NewL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestFBCCNewL( CStifItemParser& aItem );
    
    /**
     * TestFBCCSetFrameL test function for testing the 
     *     SetFrame function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestFBCCSetFrameL( CStifItemParser& aItem );
    
    /**
     * TestFBCCSetFrameRectsL test function for testing the 
     *     SetFrameRects function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestFBCCSetFrameRectsL( CStifItemParser& aItem );
    
    /**
     * TestFBCCSetCenterL test function for testing the 
     *     SetCenter function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestFBCCSetCenterL( CStifItemParser& aItem );
    
    /**
     * TestFBCCSetFramePartRectL test function for testing the 
     *     SetFramePartRect function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestFBCCSetFramePartRectL( CStifItemParser& aItem );
    
private: // Test AknsItemData.h
/*                            class CAknsItemData                             */
    /**
     * TestIDTypeL test function for testing the 
     *     Type function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestIDTypeL( CStifItemParser& aItem );

/*                            class CAknsImageItemData                         */
    /**
     * TestIIDSetAttributesL test function for testing the 
     *     SetAttributesL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestIIDSetAttributesL( CStifItemParser& aItem );
    
    /**
     * TestIIDAttributesL test function for testing the 
     *     Attributes function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestIIDAttributesL( CStifItemParser& aItem );
    
    /**
     * TestIIDSetParentIIDL test function for testing the 
     *     SetParentIID function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestIIDSetParentIIDL( CStifItemParser& aItem );
    
    /**
     * TestIIDSetDrawRectL test function for testing the 
     *     SetDrawRect function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestIIDSetDrawRectL( CStifItemParser& aItem );
    
    /**
     * TestIIDParentIIDL test function for testing the 
     *     ParentIID function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestIIDParentIIDL( CStifItemParser& aItem );
    
    /**
     * TestIIDDrawRectL test function for testing the 
     *     DrawRect function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestIIDDrawRectL( CStifItemParser& aItem );

private://AknsItemData.h
/*                            class CAknsBitmapItemData                        */
    /**
     * TestBIDNewL test function for testing the 
     *     NewL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestBIDNewL( CStifItemParser& aItem );
    
    /**
     * TestBIDSetBitmapL test function for testing the 
     *     SetBitmap function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestBIDSetBitmapL( CStifItemParser& aItem );
    
    /**
     * TestBIDDestroyAndSetBitmapL test function for testing the 
     *     DestroyAndSetBitmap function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestBIDDestroyAndSetBitmapL( CStifItemParser& aItem );
    
    /**
     * TestBIDBitmapL test function for testing the 
     *     Bitmap function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestBIDBitmapL( CStifItemParser& aItem );

/*                     class CAknsMaskedBitmapItemData                    */
    /**
     * TestMBIDNewL test function for testing the 
     *     NewL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestMBIDNewL( CStifItemParser& aItem );
    
    /**
     * TestMBIDSetMaskL test function for testing the 
     *     SetMask function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestMBIDSetMaskL( CStifItemParser& aItem );
    
    /**
     * TestMBIDDestroyAndSetMaskL test function for testing the 
     *     DestroyAndSetMask function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestMBIDDestroyAndSetMaskL( CStifItemParser& aItem );
    
    /**
     * TestMBIDMaskL test function for testing the 
     *     Mask function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestMBIDMaskL( CStifItemParser& aItem );
    
/*                      class CAknsColorTableItemData                       */
    /**
     * TestCTIDNewL test function for testing the 
     *     NewL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestCTIDNewL( CStifItemParser& aItem );
    
    /**
     * TestCTIDSetColorsL test function for testing the 
     *     SetColorsL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestCTIDSetColorsL( CStifItemParser& aItem );
    
    /**
     * TestCTIDColorIndexedL test function for testing the 
     *     ColorIndexed function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestCTIDColorIndexedL( CStifItemParser& aItem );
    
    /**
     * TestCTIDColorRgbL test function for testing the 
     *     ColorRgb function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestCTIDColorRgbL( CStifItemParser& aItem );
    
    /**
     * TestCTIDGetColorL test function for testing the 
     *     GetColorL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestCTIDGetColorL( CStifItemParser& aItem );

/*                      class CAknsImageTableItemData                       */
    /**
     * TestITIDNewL test function for testing the 
     *     NewL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestITIDNewL( CStifItemParser& aItem );
    
    /**
     * TestITIDSetImagesL test function for testing the 
     *     SetImagesL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestITIDSetImagesL( CStifItemParser& aItem );
    
    /**
     * TestITIDImageIIDL test function for testing the 
     *     ImageIID function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestITIDImageIIDL( CStifItemParser& aItem );
    
    /**
     * TestITIDImagesL test function for testing the 
     *     Images function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestITIDImagesL( CStifItemParser& aItem );
    
    /**
     * TestITIDNumberOfImagesL test function for testing the 
     *     NumberOfImages function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestITIDNumberOfImagesL( CStifItemParser& aItem );

/*                      class CAknsBmpAnimItemData                       */
    /**
     * TestBAIDNewL test function for testing the 
     *     NewL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestBAIDNewL( CStifItemParser& aItem );
    
    /**
     * TestBAIDSetFrameInfosL test function for testing the 
     *     SetFrameInfosL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestBAIDSetFrameInfosL( CStifItemParser& aItem );
    
    /**
     * TestBAIDFrameInfosL test function for testing the 
     *     FrameInfos function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestBAIDFrameInfosL( CStifItemParser& aItem );
    
    /**
     * TestBAIDSetLastFrameBackgroundL test function for testing the 
     *     SetLastFrameBackground function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestBAIDSetLastFrameBackgroundL( CStifItemParser& aItem );
    
    /**
     * TestBAIDLastFrameBackgroundL test function for testing the 
     *     LastFrameBackground function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestBAIDLastFrameBackgroundL( CStifItemParser& aItem );
    
    /**
     * TestBAIDSetFrameIntervalL test function for testing the 
     *     SetFrameInterval function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestBAIDSetFrameIntervalL( CStifItemParser& aItem );
    
    /**
     * TestBAIDFrameIntervalL test function for testing the 
     *     FrameInterval function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestBAIDFrameIntervalL( CStifItemParser& aItem );
    
    /**
     * TestBAIDSetPlayModeL test function for testing the 
     *     SetPlayMode function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestBAIDSetPlayModeL( CStifItemParser& aItem );
    
    /**
     * TestBAIDPlayModeL test function for testing the 
     *     PlayMode function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestBAIDPlayModeL( CStifItemParser& aItem );
    
    /**
     * TestBAIDSetFlashL test function for testing the 
     *     SetFlash function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestBAIDSetFlashL( CStifItemParser& aItem );
    
    /**
     * TestBAIDFlashL test function for testing the 
     *     Flash function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestBAIDFlashL( CStifItemParser& aItem );

/*                      class CAknsStringItemData                        */
    /**
     * TestSIDNewL test function for testing the 
     *     NewL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestSIDNewL( CStifItemParser& aItem );
    
    /**
     * TestSIDSetStringL test function for testing the 
     *     SetStringL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestSIDSetStringL( CStifItemParser& aItem );
    
    /**
     * TestSIDStringL test function for testing the 
     *     String function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestSIDStringL( CStifItemParser& aItem );

/*                      class CAknsEffectCommand                        */
    /**
     * TestECNewL test function for testing the 
     *     NewL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestECNewL( CStifItemParser& aItem );
    
    /**
     * TestECSetEffectUidL test function for testing the 
     *     SetEffectUid function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestECSetEffectUidL( CStifItemParser& aItem );
    
    /**
     * TestECEffectUidL test function for testing the 
     *     EffectUid function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestECEffectUidL( CStifItemParser& aItem );
    
    /**
     * TestECSetLayerConfL test function for testing the 
     *     SetLayerConf function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestECSetLayerConfL( CStifItemParser& aItem );
    
    /**
     * TestECLayerConfL test function for testing the 
     *     LayerConf function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestECLayerConfL( CStifItemParser& aItem );
    
    /**
     * TestECAppendParameterL test function for testing the 
     *     AppendParameterL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestECAppendParameterL( CStifItemParser& aItem );
    
    /**
     * TestECCreateParameterIteratorL test function for testing the 
     *     CreateParameterIteratorL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestECCreateParameterIteratorL( CStifItemParser& aItem );

/*                      class CAknsEffectQueueItemData                 */
    /**
     * TestEQIDNewL test function for testing the 
     *     NewL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestEQIDNewL( CStifItemParser& aItem );
    
    /**
     * TestEQIDSetRefItemL test function for testing the 
     *     SetRefItem function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestEQIDSetRefItemL( CStifItemParser& aItem );
    
    /**
     * TestEQIDRefItemL test function for testing the 
     *     RefItem function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestEQIDRefItemL( CStifItemParser& aItem );
    
    /**
     * TestEQIDSetInputLayerL test function for testing the 
     *     SetInputLayer function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestEQIDSetInputLayerL( CStifItemParser& aItem );
    
    /**
     * TestEQIDInputLayerL test function for testing the 
     *     InputLayer function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestEQIDInputLayerL( CStifItemParser& aItem );
    
    /**
     * TestEQIDSetInputLayerModeL test function for testing the 
     *     SetInputLayerMode function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestEQIDSetInputLayerModeL( CStifItemParser& aItem );
    
    /**
     * TestEQIDInputLayerModeL test function for testing the 
     *     InputLayerMode function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestEQIDInputLayerModeL( CStifItemParser& aItem );
    
    /**
     * TestEQIDSetOutputLayerL test function for testing the 
     *     SetOutputLayer function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestEQIDSetOutputLayerL( CStifItemParser& aItem );
    
    /**
     * TestEQIDOutputLayerL test function for testing the 
     *     OutputLayer function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestEQIDOutputLayerL( CStifItemParser& aItem );
    
    /**
     * TestEQIDSetOutputLayerModeL test function for testing the 
     *     SetOutputLayerMode function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestEQIDSetOutputLayerModeL( CStifItemParser& aItem );
    
    /**
     * TestEQIDOutputLayerModeL test function for testing the 
     *     OutputLayerMode function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestEQIDOutputLayerModeL( CStifItemParser& aItem );
    
    /**
     * TestEQIDAppendCommandL test function for testing the 
     *     AppendCommandL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestEQIDAppendCommandL( CStifItemParser& aItem );
    
    /**
     * TestEQIDCreateCommandIteratorL test function for testing the 
     *     CreateCommandIteratorL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestEQIDCreateCommandIteratorL( CStifItemParser& aItem );
    
private://AknsItemID.h
/*                               class TAknsItemID                            */
    /**
     * TestIILinearOrder test function for testing the 
     *     LinearOrder function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestIILinearOrder( CStifItemParser& aItem );
    
private://AknsLayeredBackgroundControlContext.h
/*                 class CAknsLayeredBackgroundControlContext                 */
    /**
     * TestLBCCNewL test function for testing the 
     *     NewL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestLBCCNewL( CStifItemParser& aItem );
    
    /**
     * TestLBCCSetLayerImageL test function for testing the 
     *     SetLayerImage function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestLBCCSetLayerImageL( CStifItemParser& aItem );

    /**
     * TestLBCCSetLayerRectL test function for testing the 
     *     SetLayerRect function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestLBCCSetLayerRectL( CStifItemParser& aItem );
    
private://AknsListBoxBackgroundControlContext.h
/*                 class CAknsListBoxBackgroundControlContext                 */
    /**
     * TestLBBCCNewL test function for testing the 
     *     NewL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestLBBCCNewL( CStifItemParser& aItem );
    
    /**
     * TestLBBCCSetTiledBitmapL test function for testing the 
     *     SetTiledBitmap function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestLBBCCSetTiledBitmapL( CStifItemParser& aItem );
    
    /**
     * TestLBBCCSetTiledRectL test function for testing the 
     *     SetTiledRect function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestLBBCCSetTiledRectL( CStifItemParser& aItem );
    
    /**
     * TestLBBCCSetBottomBitmapL test function for testing the 
     *     SetBottomBitmap function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestLBBCCSetBottomBitmapL( CStifItemParser& aItem );
    
    /**
     * TestLBBCCSetBottomRectL test function for testing the 
     *     SetBottomRect function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestLBBCCSetBottomRectL( CStifItemParser& aItem );
    
private://AknsWallpaperUtils.h
/*                          class AknsWallpaperUtils                       */
    /**
     * TestWUSetIdleWallpaper test function for testing the 
     *     SetIdleWallpaper function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestWUSetIdleWallpaper( CStifItemParser& aItem );
    
    /**
     * TestWUSetSlidesetWallpaperL test function for testing the 
     *     SetSlidesetWallpaper function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestWUSetSlidesetWallpaperL( CStifItemParser& aItem );
    
private://AknsUtils.h
/*                               class AknsUtils                             */
    /**
     * TestUInitSkinSupportL test function for testing the 
     *     InitSkinSupportL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUInitSkinSupportL( CStifItemParser& aItem );
    
    /**
     * TestUCreateDataContextForContainerL test function for testing the 
     *     CreateDataContextForContainerL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUCreateDataContextForContainerL( CStifItemParser& aItem );
    
    /**
     * TestUCreateBitmapItemDefL test function for testing the 
     *     CreateBitmapItemDefL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUCreateBitmapItemDefL( CStifItemParser& aItem );
    
    /**
     * TestUCreateMaskedBitmapItemDefL test function for testing the 
     *     CreateMaskedBitmapItemDefL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUCreateMaskedBitmapItemDefL( CStifItemParser& aItem );
    
    /**
     * TestUSkinInstanceL test function for testing the 
     *     SkinInstance function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUSkinInstanceL( CStifItemParser& aItem );
    
    /**
     * TestUDataContextL test function for testing the 
     *     DataContext function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUDataContextL( CStifItemParser& aItem );
    
    /**
     * TestUCreateIconML test function for testing the 
     *     CreateIconL function with mask
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUCreateIconML( CStifItemParser& aItem );
    
    /**
     * TestUCreateIconMLC test function for testing the 
     *     CreateIconLC function with mask
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUCreateIconMLC( CStifItemParser& aItem );
    
    /**
     * TestUCreateIconL test function for testing the 
     *     CreateIconL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUCreateIconL( CStifItemParser& aItem );
    
    /**
     * TestUCreateIconLC test function for testing the 
     *     CreateIconLC function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUCreateIconLC( CStifItemParser& aItem );
    
    /**
     * TestUCreateMaskedBitmapL test function for testing the 
     *     CreateMaskedBitmapL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUCreateMaskedBitmapL( CStifItemParser& aItem );
    
    /**
     * TestUCreateGulIconL test function for testing the 
     *     CreateGulIconL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUCreateGulIconL( CStifItemParser& aItem );
    
    /**
     * TestUCreateAppIconLC test function for testing the 
     *     CreateAppIconLC function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUCreateAppIconLC( CStifItemParser& aItem );
    
    /**
     * TestUOpenAppIconFileL test function for testing the 
     *     OpenAppIconFile function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUOpenAppIconFileL( CStifItemParser& aItem );
    
    /**
     * TestUCreateColorIconL test function for testing the 
     *     CreateColorIconL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUCreateColorIconL( CStifItemParser& aItem );
    
    /**
     * TestUCreateColorIconLC test function for testing the 
     *     CreateColorIconLC function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUCreateColorIconLC( CStifItemParser& aItem );
    
    /**
     * TestUCreateColorIconML test function for testing the 
     *     InitSkinSupportL function with mode
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUCreateColorIconML( CStifItemParser& aItem );
    
    /**
     * TestUCreateColorIconMLC test function for testing the 
     *     CreateColorIconLC function with mode
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUCreateColorIconMLC( CStifItemParser& aItem );
    
    /**
     * TestUGetAppIconL test function for testing the 
     *     GetAppIcon function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUGetAppIconL( CStifItemParser& aItem );
    
    /**
     * TestUCreateBitmapL test function for testing the 
     *     CreateBitmapL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUCreateBitmapL( CStifItemParser& aItem );
    
    /**
     * TestUCreateMaskedBitmapIL test function for testing the 
     *     CreateMaskedBitmapL function with instance
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUCreateMaskedBitmapIL( CStifItemParser& aItem );
    
    /**
     * TestUCreateGulIconIL test function for testing the 
     *     CreateGulIconL function with instance
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUCreateGulIconIL( CStifItemParser& aItem );
    
    /**
     * TestUGetCachedBitmapL test function for testing the 
     *     GetCachedBitmap function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUGetCachedBitmapL( CStifItemParser& aItem );
    
    /**
     * TestUGetCachedMaskedBitmapL test function for testing the 
     *     GetCachedMaskedBitmap function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUGetCachedMaskedBitmapL( CStifItemParser& aItem );
    
    /**
     * TestUGetCachedColorL test function for testing the 
     *     GetCachedColor function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUGetCachedColorL( CStifItemParser& aItem );
    
    /**
     * TestUBooleanPropertyL test function for testing the 
     *     BooleanPropertyL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUBooleanPropertyL( CStifItemParser& aItem );
    
    /**
     * TestUSetAvkonSkinEnabledL test function for testing the 
     *     SetAvkonSkinEnabledL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUSetAvkonSkinEnabledL( CStifItemParser& aItem );
    
    /**
     * TestUAvkonSkinEnabledL test function for testing the 
     *     AvkonSkinEnabled function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUAvkonSkinEnabledL( CStifItemParser& aItem );
    
    /**
     * TestUSetAvkonHighlightAnimationEnabledL test function for testing the 
     *     SetAvkonHighlightAnimationEnabledL function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUSetAvkonHighlightAnimationEnabledL( CStifItemParser& aItem );
    
    /**
     * TestUAvkonHighlightAnimationEnabledL test function for testing the 
     *     AvkonHighlightAnimationEnabled function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUAvkonHighlightAnimationEnabledL( CStifItemParser& aItem );
    
    /**
     * TestURegisterControlPositionL test function for testing the 
     *     RegisterControlPosition function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestURegisterControlPositionL( CStifItemParser& aItem );
    
    /**
     * TestURegisterControlPositionPL test function for testing the 
     *     RegisterControlPosition function with point
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestURegisterControlPositionPL( CStifItemParser& aItem );
    
    /**
     * TestUDeregisterControlPositionL test function for testing the 
     *     DeregisterControlPosition function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUDeregisterControlPositionL( CStifItemParser& aItem );
    
    /**
     * TestUGetControlPositionL test function for testing the 
     *     GetControlPosition function
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestUGetControlPositionL( CStifItemParser& aItem );
private:    // Data

    /**
     * ScreenSaver Property
     */
    TInt iOldScreenSaverProperty;

    };

#endif      // C_TESTSDKSKINS_H

// End of File
