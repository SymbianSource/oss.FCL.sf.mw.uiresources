/*
* Copyright (c) 2002 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:   font_definition_api
*
*/




#ifndef C_TESTSDKFONTDEFINITION_H
#define C_TESTSDKFONTDEFINITION_H

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
_LIT( KtestsdkfontdefinitionLogPath, "\\logs\\testframework\\testsdkfontdefinition\\" ); 
// Log file
_LIT( KtestsdkfontdefinitionLogFile, "testsdkfontdefinition.txt" ); 
_LIT( KtestsdkfontdefinitionLogFileWithTitle, "testsdkfontdefinition_[%S].txt" );

/**
*  CTestSDKFontDefinition test class for STIF Test Framework TestScripter.
*  @since S60 5.0
*/
NONSHARABLE_CLASS( CTestSDKFontDefinition ) : public CScriptBase
    {
public:  // Constructors and destructor

    /**
    * Two-phased constructor.
    */
    static CTestSDKFontDefinition* NewL( CTestModuleIf& aTestModuleIf );

    /**
    * Destructor.
    */
    virtual ~CTestSDKFontDefinition();

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
    CTestSDKFontDefinition( CTestModuleIf& aTestModuleIf );

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
    * TestFSConstructor test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestFSConstructor( CStifItemParser& aItem );
    /**
    * TestFSFontConstructorL test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestFSFontConstructorL( CStifItemParser& aItem );
    /**
    * TestFSSetFontCategory test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestFSSetFontCategory( CStifItemParser& aItem );
    /**
    * TestFSFontCategory test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestFSFontCategory( CStifItemParser& aItem );
    /**
    * TestFSSetTextPaneHeight test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestFSSetTextPaneHeight( CStifItemParser& aItem );
    /**
    * TestFSTextPaneHeight test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestFSTextPaneHeight( CStifItemParser& aItem );
    /**
    * TestFSSetWeight test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestFSSetWeight( CStifItemParser& aItem );
    /**
    * TestFSSetPosture test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestFSSetPosture( CStifItemParser& aItem );
    /**
    * TestFSSetTextPaneHeightIsDesignHeight test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestFSSetTextPaneHeightIsDesignHeight( CStifItemParser& aItem );
    /**
    * TestFSTextPaneIsDesignHeight test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestFSTextPaneIsDesignHeight( CStifItemParser& aItem );
    /**
    * TestFSSetExactMatchRequired test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestFSSetExactMatchRequired( CStifItemParser& aItem );
    /**
    * TestFSExactMatchRequired test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestFSExactMatchRequired( CStifItemParser& aItem );
    /**
    * TestFSSetUnits test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestFSSetUnits( CStifItemParser& aItem );
    /**
    * TestFSUnits test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestFSUnits( CStifItemParser& aItem );
    /**
    * TestFSWeight test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestFSWeight( CStifItemParser& aItem );
    /**
    * TestFSPosture test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestFSPosture( CStifItemParser& aItem );
    /**
    * TestFSIsOutlineEffectOn test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestFSIsOutlineEffectOn( CStifItemParser& aItem );

private:    // Data

    /**
     * ScreenSaver Property
     */
    TInt iOldScreenSaverProperty;
    };

#endif      // C_TESTSDKFONTDEFINITION_H

// End of File
