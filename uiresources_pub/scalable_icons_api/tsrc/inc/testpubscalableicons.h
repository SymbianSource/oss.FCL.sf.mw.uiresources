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
* Description:  scalable_icons_api
*
*/


#ifndef C_TESTPUBSCALABLEICONS_H
#define C_TESTPUBSCALABLEICONS_H

//  INCLUDES
#include <stiflogger.h>
#include <testscripterinternal.h>
#include <stiftestmodule.h>
#include <testclassassert.h>

#include <AknIconSrvClient.h>
#include <AknIconUtils.h>
#include <AknInternalIconUtils.h>
// MACROS
#define TEST_CLASS_VERSION_MAJOR 0
#define TEST_CLASS_VERSION_MINOR 0
#define TEST_CLASS_VERSION_BUILD 0

// Logging path
_LIT( KtestpubscalableiconsLogPath, "\\logs\\testframework\\testpubscalableicons\\" ); 
// Log file
_LIT( KtestpubscalableiconsLogFile, "testpubscalableicons.txt" ); 
_LIT( KtestpubscalableiconsLogFileWithTitle, "testpubscalableicons_[%S].txt" );

/**
*  Ctestpubscalableicons test class for STIF Test Framework TestScripter.
*  @since S60 5.0
*/
NONSHARABLE_CLASS( Ctestpubscalableicons ) : public CScriptBase
    {
public:  // Constructors and destructor

    /**
    * Two-phased constructor.
    */
    static Ctestpubscalableicons* NewL( CTestModuleIf& aTestModuleIf );

    /**
    * Destructor.
    */
    virtual ~Ctestpubscalableicons();

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
    Ctestpubscalableicons( CTestModuleIf& aTestModuleIf );

    /**
    * By default Symbian 2nd phase constructor is private.
    */
    void ConstructL();

    /**
    * Example test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */

    
    /**
     * Method used to log version of test class
     */
    void SendTestClassVersion();

private: // [TestMethods]
    /**
     * TestRAknIconSrvClientConnectL test Connect of RAknIconSrvClient
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestRAknIconSrvClientConnectL( CStifItemParser& aItem );

    /**
     * TestRAknIconSrvClientDisconnectL test Disconnect of RAknIconSrvClient
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestRAknIconSrvClientDisconnectL( CStifItemParser& aItem );

    /**
     * TestTAknContentDimensionsTAknContentDimensions1L test TAknContentDimensions of TAknContentDimensions
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestTAknContentDimensionsTAknContentDimensions1L( CStifItemParser& aItem );

    /**
     * TestTAknContentDimensionsTAknContentDimensions2L test TAknContentDimensions of TAknContentDimensions
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestTAknContentDimensionsTAknContentDimensions2L( CStifItemParser& aItem );

    /**
     * TestTAknContentDimensionsSetDimensions1L test SetDimensions of TAknContentDimensions
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestTAknContentDimensionsSetDimensions1L( CStifItemParser& aItem );

    /**
     * TestTAknContentDimensionsSetDimensions2L test SetDimensions of TAknContentDimensions
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestTAknContentDimensionsSetDimensions2L( CStifItemParser& aItem );

    /**
     * TestCAknIconNewL test NewL of CAknIcon
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestCAknIconNewL( CStifItemParser& aItem );

    /**
     * TestCAknIconBitmapL test Bitmap of CAknIcon
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestCAknIconBitmapL( CStifItemParser& aItem );

    /**
     * TestCAknIconMaskL test Mask of CAknIcon
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestCAknIconMaskL( CStifItemParser& aItem );

    /**
     * TestCAknIconSetBitmapL test SetBitmap of CAknIcon
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestCAknIconSetBitmapL( CStifItemParser& aItem );

    /**
     * TestCAknIconSetMaskL test SetMask of CAknIcon
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestCAknIconSetMaskL( CStifItemParser& aItem );

    /**
     * TestAknIconUtilsCreateIconL1L test CreateIconL of AknIconUtils
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestAknIconUtilsCreateIconL1L( CStifItemParser& aItem );

    /**
     * TestAknIconUtilsCreateIconLC1L test CreateIconLC of AknIconUtils
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestAknIconUtilsCreateIconLC1L( CStifItemParser& aItem );

    /**
     * TestAknIconUtilsCreateIconL2L test CreateIconL of AknIconUtils
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestAknIconUtilsCreateIconL2L( CStifItemParser& aItem );

    /**
     * TestAknIconUtilsCreateIconL3L test CreateIconL of AknIconUtils
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestAknIconUtilsCreateIconL3L( CStifItemParser& aItem );

    /**
     * TestAknIconUtilsCreateIconLC2L test CreateIconLC of AknIconUtils
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestAknIconUtilsCreateIconLC2L( CStifItemParser& aItem );

    /**
     * TestAknIconUtilsCreateIconL4L test CreateIconL of AknIconUtils
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestAknIconUtilsCreateIconL4L( CStifItemParser& aItem );

    /**
     * TestAknIconUtilsPreserveIconDataL test PreserveIconData of AknIconUtils
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestAknIconUtilsPreserveIconDataL( CStifItemParser& aItem );

    /**
     * TestAknIconUtilsDestroyIconDataL test DestroyIconData of AknIconUtils
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestAknIconUtilsDestroyIconDataL( CStifItemParser& aItem );

    /**
     * TestAknIconUtilsSetSizeL test SetSize of AknIconUtils
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestAknIconUtilsSetSizeL( CStifItemParser& aItem );

    /**
     * TestAknIconUtilsSetSizeAndRotationL test SetSizeAndRotation of AknIconUtils
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestAknIconUtilsSetSizeAndRotationL( CStifItemParser& aItem );

    /**
     * TestAknIconUtilsSetObserverL test SetObserver of AknIconUtils
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestAknIconUtilsSetObserverL( CStifItemParser& aItem );

    /**
     * TestAknIconUtilsAvkonIconFileNameL test AvkonIconFileName of AknIconUtils
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestAknIconUtilsAvkonIconFileNameL( CStifItemParser& aItem );

    /**
     * TestAknIconUtilsValidateLogicalAppIconIdL test ValidateLogicalAppIconId of AknIconUtils
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestAknIconUtilsValidateLogicalAppIconIdL( CStifItemParser& aItem );

    /**
     * TestAknIconUtilsIsMifFileL test IsMifFile of AknIconUtils
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestAknIconUtilsIsMifFileL( CStifItemParser& aItem );

    /**
     * TestAknIconUtilsIsMifIconL test IsMifIcon of AknIconUtils
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestAknIconUtilsIsMifIconL( CStifItemParser& aItem );

    /**
     * TestAknIconUtilsGetContentDimensions1L test GetContentDimensions of AknIconUtils
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestAknIconUtilsGetContentDimensions1L( CStifItemParser& aItem );

    /**
     * TestAknIconUtilsGetContentDimensions2L test GetContentDimensions of AknIconUtils
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestAknIconUtilsGetContentDimensions2L( CStifItemParser& aItem );

    /**
     * TestAknIconUtilsCreateIconL5L test CreateIconL of AknIconUtils
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestAknIconUtilsCreateIconL5L( CStifItemParser& aItem );

    /**
     * TestAknIconUtilsCreateIconL6L test CreateIconL of AknIconUtils
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestAknIconUtilsCreateIconL6L( CStifItemParser& aItem );

    /**
     * TestAknIconUtilsSetIconColorL test SetIconColor of AknIconUtils
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestAknIconUtilsSetIconColorL( CStifItemParser& aItem );

    /**
     * TestAknIconUtilsExcludeFromCacheL test ExcludeFromCache of AknIconUtils
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestAknIconUtilsExcludeFromCacheL( CStifItemParser& aItem );

    /**
     * TestAknIconUtilsDisableCompressionL test DisableCompression of AknIconUtils
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestAknIconUtilsDisableCompressionL( CStifItemParser& aItem );

    /**
     * TestAknIconUtilsScaleBitmapL test ScaleBitmapL of AknIconUtils
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestAknIconUtilsScaleBitmapL( CStifItemParser& aItem );

    /**
     * TestAknInternalIconUtilsSetAppIconL test SetAppIcon of AknInternalIconUtils
     * @since S60 5.0
     * @param aItem never used
     * @return Symbian OS error code.
     */
    virtual TInt TestAknInternalIconUtilsSetAppIconL( CStifItemParser& aItem );



private:    // Data

    /**
     * ScreenSaver Property
     */
    TInt iOldScreenSaverProperty;
    
    /**
     * ?description_of_pointer_member
     * Not own.
     */
    //?type* ?member_name;

    };

#endif      // C_TESTPUBSCALABLEICONS_H

// End of File

