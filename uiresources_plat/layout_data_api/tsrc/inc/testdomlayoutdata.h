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
* Description:  layout_data_api
*
*/



#ifndef C_TESTDOMLAYOUTDATA_H
#define C_TESTDOMLAYOUTDATA_H

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
_LIT( KtestdomlayoutdataLogPath, "\\logs\\testframework\\testdomlayoutdata\\" ); 
// Log file
_LIT( KtestdomlayoutdataLogFile, "testdomlayoutdata.txt" ); 
_LIT( KtestdomlayoutdataLogFileWithTitle, "testdomlayoutdata_[%S].txt" );

class TAknWindowLineLayout;

/**
*  Ctestdomlayoutdata test class for STIF Test Framework TestScripter.
*  @since S60 5.0
*/
NONSHARABLE_CLASS( CTestDOMLayoutData ) : public CScriptBase
    {
public:  // Constructors and destructor

    /**
    * Two-phased constructor.
    */
    static CTestDOMLayoutData* NewL( CTestModuleIf& aTestModuleIf );

    /**
    * Destructor.
    */
    virtual ~CTestDOMLayoutData();

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
    CTestDOMLayoutData( CTestModuleIf& aTestModuleIf );

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
    * TestWLLImportConstructor test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestWLLImportConstructor( CStifItemParser& aItem );
    /**
    * TestWLLOperator test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestWLLOperator( CStifItemParser& aItem );
    /**
    * TestWLLCombineLines test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestWLLCombineLines( CStifItemParser& aItem );
    /**
    * TestTLLImportConstructor test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTLLImportConstructor( CStifItemParser& aItem );
    /**
    * TestTLLOperator test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTLLOperator( CStifItemParser& aItem );
    //for test aknlayout2scalabledef.h
    /**
    * TestLSTLDefaultConstructor test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSTLDefaultConstructor( CStifItemParser& aItem );
    /**
    * TestLSTLConstructor test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSTLConstructor( CStifItemParser& aItem );
    /**
    * TestLSTLLayoutLimits test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSTLLayoutLimits( CStifItemParser& aItem );
    /**
    * TestLSTLFirstIndex test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSTLFirstIndex( CStifItemParser& aItem );
    /**
    * TestLSTLLastIndex test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSTLLastIndex( CStifItemParser& aItem );
    /**
    * TestLSTLSetFirstIndex test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSTLSetFirstIndex( CStifItemParser& aItem );
    /**
    * TestLSTLSetLastIndex test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSTLSetLastIndex( CStifItemParser& aItem );
    /**
    * TestLSPLDefaultConstructor test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSPLDefaultConstructor( CStifItemParser& aItem );
    /**
    * TestLSPLConstructor test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSPLConstructor( CStifItemParser& aItem );
    /**
    * TestLSPLFirstVariety test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSPLFirstVariety( CStifItemParser& aItem );
    /**
    * TestLSPLLastVariety test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSPLLastVariety( CStifItemParser& aItem );
    /**
    * TestLSPLFirstColumn test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSPLFirstColumn( CStifItemParser& aItem );
    /**
    * TestLSPLLastColumn test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSPLLastColumn( CStifItemParser& aItem );
    /**
    * TestLSPLFirstRow test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSPLFirstRow( CStifItemParser& aItem );
    /**
    * TestLSPLLastRow test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSPLLastRow( CStifItemParser& aItem );
    /**
    * TestLSPLSetFirstVariety test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSPLSetFirstVariety( CStifItemParser& aItem );
    /**
    * TestLSPLSetLastVariety test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSPLSetLastVariety( CStifItemParser& aItem );
    /**
    * TestLSPLSetFirstColumn test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSPLSetFirstColumn( CStifItemParser& aItem );
    /**
    * TestLSPLSetLastColumn test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSPLSetLastColumn( CStifItemParser& aItem );
    /**
    * TestLSPLSetFirstRow test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSPLSetFirstRow( CStifItemParser& aItem );
    /**
    * TestLSPLSetLastRow test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSPLSetLastRow( CStifItemParser& aItem );
    /**
    * TestWCLDefaultConstructor test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestWCLDefaultConstructor( CStifItemParser& aItem );
    /**
    * TestWCLLayoutLine test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestWCLLayoutLine( CStifItemParser& aItem );
    /**
    * TestWCLLayoutLineNoEmptys test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestWCLLayoutLineNoEmptys( CStifItemParser& aItem );
    /**
    * TestWCLLayoutComponentType test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestWCLLayoutComponentType( CStifItemParser& aItem );
    /**
    * TestWCLCompose test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestWCLCompose( CStifItemParser& aItem );
    /**
    * TestWCLComposeText test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestWCLComposeText( CStifItemParser& aItem );
    /**
    * TestWCLIntersect test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestWCLIntersect( CStifItemParser& aItem );
    /**
    * TestWCLMinus test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestWCLMinus( CStifItemParser& aItem );
    /**
    * TestWCLSiblingAsChild test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestWCLSiblingAsChild( CStifItemParser& aItem );
    /**
    * TestWCLSetZeroSized test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestWCLSetZeroSized( CStifItemParser& aItem );
    /**
    * TestWCLSplit test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestWCLSplit( CStifItemParser& aItem );
    /**
    * TestWCLMultiLineGrid test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestWCLMultiLineGrid( CStifItemParser& aItem );
    /**
    * TestWCLMultiLineX test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestWCLMultiLineX( CStifItemParser& aItem );
    /**
    * TestWCLMultiLineY test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestWCLMultiLineY( CStifItemParser& aItem );
    /**
    * TestWCLAnim test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestWCLAnim( CStifItemParser& aItem );
    /**
    * TestWCLConstructor test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestWCLConstructor( CStifItemParser& aItem );
    /**
    * TestWCLOperator test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestWCLOperator( CStifItemParser& aItem );
    /**
    * TestTCLDefaultConstructor test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTCLDefaultConstructor( CStifItemParser& aItem );
    /**
    * TestTCLLayoutLine test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTCLLayoutLine( CStifItemParser& aItem );
    /**
    * TestTCLMultilineL test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTCLMultilineL( CStifItemParser& aItem );
    /**
    * TestTCLLayoutLineNoEmptys test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTCLLayoutLineNoEmptys( CStifItemParser& aItem );
    /**
    * TestTCLLayoutComponentType test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTCLLayoutComponentType( CStifItemParser& aItem );
    /**
    * TestTCLCFunction test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTCLCFunction( CStifItemParser& aItem );
    /**
    * TestTCLlFunction test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTCLlFunction( CStifItemParser& aItem );
    /**
    * TestTCLtFunction test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTCLtFunction( CStifItemParser& aItem );
    /**
    * TestTCLrFunction test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTCLrFunction( CStifItemParser& aItem );
    /**
    * TestTCLbFunction test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTCLbFunction( CStifItemParser& aItem );
    /**
    * TestTCLWFunction test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTCLWFunction( CStifItemParser& aItem );
    /**
    * TestTCLHFunction test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTCLHFunction( CStifItemParser& aItem );
    /**
    * TestTCLJFunction test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTCLJFunction( CStifItemParser& aItem );
    /**
    * TestTCLFont test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTCLFont( CStifItemParser& aItem );
    /**
    * TestTCLSetC test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTCLSetC( CStifItemParser& aItem );
    /**
    * TestTCLSetl test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTCLSetl( CStifItemParser& aItem );
    /**
    * TestTCLSett test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTCLSett( CStifItemParser& aItem );
    /**
    * TestTCLSetr test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTCLSetr( CStifItemParser& aItem );
    /**
    * TestTCLSetb test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTCLSetb( CStifItemParser& aItem );
    /**
    * TestTCLSetW test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTCLSetW( CStifItemParser& aItem );
    /**
    * TestTCLSetH test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTCLSetH( CStifItemParser& aItem );
    /**
    * TestTCLSetJ test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTCLSetJ( CStifItemParser& aItem );
    /**
    * TestTCLSetFont test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTCLSetFont( CStifItemParser& aItem );
    /**
    * TestTCLAnim test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTCLAnim( CStifItemParser& aItem );
    /**
    * TestTCLMultiLineY test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTCLMultiLineY( CStifItemParser& aItem );
    /**
    * TestTCLConstructor test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTCLConstructor( CStifItemParser& aItem );
    /**
    * TestTCLOperator test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTCLOperator( CStifItemParser& aItem );
    
    /**
     * Get instance of TAknWindowLineLayout
     * @return an instance of TAknWindowLineLayout
     */
    TAknWindowLineLayout WindowLine1f();   

private:    // Data

    /**
     * ScreenSaver Property
     */
    TInt iOldScreenSaverProperty;
    };

#endif      // C_TESTDOMLAYOUTDATA_H

// End of File
