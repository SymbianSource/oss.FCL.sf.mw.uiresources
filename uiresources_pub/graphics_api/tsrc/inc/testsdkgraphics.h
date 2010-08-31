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
* Description:  test function for graphics_api
*
*/



#ifndef C_TESTSDKGRAPHICS_H
#define C_TESTSDKGRAPHICS_H

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
_LIT( KtestsdkgraphicsLogPath, "\\logs\\testframework\\testsdkgraphics\\" ); 
// Log file
_LIT( KtestsdkgraphicsLogFile, "testsdkgraphics.txt" ); 
_LIT( KtestsdkgraphicsLogFileWithTitle, "testsdkgraphics_[%S].txt" );

/**
*  CTestSdkGraphics test class for STIF Test Framework TestScripter.
*  @since S60 5.0
*/
NONSHARABLE_CLASS( CTestSdkGraphics ) : public CScriptBase
    {
public:  // Constructors and destructor

    /**
    * Two-phased constructor.
    */
    static CTestSdkGraphics* NewL( CTestModuleIf& aTestModuleIf );

    /**
    * Destructor.
    */
    virtual ~CTestSdkGraphics();

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
    CTestSdkGraphics( CTestModuleIf& aTestModuleIf );

    /**
    * By default Symbian 2nd phase constructor is private.
    */
    void ConstructL();
    
    /**
     * Method used to log version of test class
     */
    void SendTestClassVersion();

private: // [TestMethods]
    /**
    * TestDPDefaultColor256Util tests DefaultColor256Util
    * of DynamicPalette in palette.h.
    * @since S60 5.0
    * @param aItem is not used.
    * @return Symbian OS error code.
    */
    virtual TInt TestDPDefaultColor256Util( CStifItemParser& aItem );

    /**
    * TestDPSetColor256Util tests SetColor256Util
    * of DynamicPalette in palette.h.
    * @since S60 5.0
    * @param aItem is not used.
    * @return Symbian OS error code.
    */
    virtual TInt TestDPSetColor256Util( CStifItemParser& aItem );

    /**
    * TestDPColor16array tests Color16array
    * of DynamicPalette in palette.h.
    * @since S60 5.0
    * @param aItem is not used.
    * @return Symbian OS error code.
    */
    virtual TInt TestDPColor16array( CStifItemParser& aItem );

    /**
    * TestDPColor16inverse tests Color16inverse
    * of DynamicPalette in palette.h.
    * @since S60 5.0
    * @param aItem is not used.
    * @return Symbian OS error code.
    */
    virtual TInt TestDPColor16inverse( CStifItemParser& aItem );

private:    // Data

    /**
     * ScreenSaver Property
     */
    TInt iOldScreenSaverProperty;

    };

#endif      // C_TESTSDKGRAPHICS_H

// End of File
