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
* Description:  test aknpictographinterface.h
                      akniconsrvclient.h
                      akniconutils.h
                      akninternaliconutils.h
*
*/



#ifndef C_TESTSDKPICTOGRAPH_H
#define C_TESTSDKPICTOGRAPH_H

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
_LIT( KtestsdkpictographLogPath, "\\logs\\testframework\\testsdkpictograph\\" ); 
// Log file
_LIT( KtestsdkpictographLogFile, "testsdkpictograph.txt" ); 
_LIT( KtestsdkpictographLogFileWithTitle, "testsdkpictograph_[%S].txt" );

/**
*  CTestSDKPicToGraph test class for STIF Test Framework TestScripter.
*  @since S60 5.0
*/
NONSHARABLE_CLASS( CTestSDKPicToGraph ) : public CScriptBase
    {
public:  // Constructors and destructor

    /**
    * Two-phased constructor.
    */
    static CTestSDKPicToGraph* NewL( CTestModuleIf& aTestModuleIf );

    /**
    * Destructor.
    */
    virtual ~CTestSDKPicToGraph();

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
    CTestSDKPicToGraph( CTestModuleIf& aTestModuleIf );

    /**
    * By default Symbian 2nd phase constructor is private.
    */
    void ConstructL();

    /**
     * Method used to log version of test class
     */
    void SendTestClassVersion();

private: // test functions in aknpictographinterface.h

    /**
    * test NewL method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestIntfaceNewL( CStifItemParser& aItem );

private: // test functions in akniconsrvclient.h

    /**
    * test Connect method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestSrvConnect( CStifItemParser& aItem );

    /**
    * test Disconnect method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestSrvDisconnect( CStifItemParser& aItem );

private: // test functions in akniconutils.h

    /**
    * test default constructor method of TAknContentDimensions class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestDimenDefCons( CStifItemParser& aItem );

    /**
    * test constructor method of TAknContentDimensions class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestDimenConstruct( CStifItemParser& aItem );

    /**
    * test SetDimensions method of TAknContentDimensions class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestDimenSetDimen( CStifItemParser& aItem );

    /**
    * test NewL method of CAknIcon class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestIconNewL( CStifItemParser& aItem );

    /**
    * test Bitmap method of CAknIcon class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestIconBitmapL( CStifItemParser& aItem );

    /**
    * test Mask method of CAknIcon class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestIconMaskL( CStifItemParser& aItem );

    /**
    * test SetBitmap method of CAknIcon class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestIconSetBitmapL( CStifItemParser& aItem );

    /**
    * test SetMask method of CAknIcon class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestIconSetMaskL( CStifItemParser& aItem );

    /**
    * test CreateIconL method of AknIconUtils class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestUtilCreateIconWithMaskL( CStifItemParser& aItem );

    /**
    * test CreateIconL method of AknIconUtils class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestUtilCreateIconWithBmpIdL( CStifItemParser& aItem );

    /**
    * test CreateIconL method of AknIconUtils class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestUtilCreateIconWithProMaskL( CStifItemParser& aItem );

    /**
    * test CreateIconL method of AknIconUtils class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestUtilCreateIconWithProviderL( CStifItemParser& aItem );

    /**
    * test CreateIconL method of AknIconUtils class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestUtilCreateIconWithSoIconL( CStifItemParser& aItem );

    /**
    * test CreateIconL method of AknIconUtils class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestUtilCreateIconWithSoBmpL( CStifItemParser& aItem );

    /**
    * test CreateIconLC method of AknIconUtils class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestUtilCreateIconLCL( CStifItemParser& aItem );

    /**
    * test PreserveIconData method of AknIconUtils class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestUtilPreserveIconDataL( CStifItemParser& aItem );

    /**
    * test DestroyIconData method of AknIconUtils class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestUtilDestroyIconDataL( CStifItemParser& aItem );

    /**
    * test SetSize method of AknIconUtils class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestUtilSetSizeL( CStifItemParser& aItem );

    /**
    * test SetSizeAndRotation method of AknIconUtils class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestUtilSetSizeAndRotationL( CStifItemParser& aItem );

    /**
    * test SetObserver method of AknIconUtils class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestUtilSetObserverL( CStifItemParser& aItem );

    /**
    * test AvkonIconFileName method of AknIconUtils class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestUtilAvkonIconFileName( CStifItemParser& aItem );

    /**
    * test ValidateLogicalAppIconId method of AknIconUtils class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestUtilValidateLogicalAppIconId( CStifItemParser& aItem );

    /**
    * test IsMifFile method of AknIconUtils class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestUtilIsMifFile( CStifItemParser& aItem );

    /**
    * test IsMifIcon method of AknIconUtils class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestUtilIsMifIconL( CStifItemParser& aItem );

    /**
    * test GetContentDimensions method of AknIconUtils class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestUtilGetContentDimensionsL( CStifItemParser& aItem );

    /**
    * test SetIconColor method of AknIconUtils class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestUtilSetIconColorL( CStifItemParser& aItem );

    /**
    * test ExcludeFromCache method of AknIconUtils class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestUtilExcludeFromCacheL( CStifItemParser& aItem );

    /**
    * test DisableCompression method of AknIconUtils class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestUtilDisableCompressionL( CStifItemParser& aItem );

    /**
    * test ScaleBitmapL method of AknIconUtils class.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestUtilScaleBitmapL( CStifItemParser& aItem );

private: // test functions in akninternaliconutils.h

    /**
    * test SetAppIcon method.
    * @since S60 5.0
    * @param aItem never used.
    * @return Symbian OS error code.
    */
    virtual TInt TestIntUtilSetAppIconL( CStifItemParser& aItem );

private:    // Data

    /**
     * ScreenSaver Property
     */
    TInt iOldScreenSaverProperty;

    };

#endif      // C_TESTSDKPICTOGRAPH_H

// End of File
