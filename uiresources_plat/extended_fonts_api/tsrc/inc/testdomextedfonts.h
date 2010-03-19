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
* Description:   For test extended fonts api modules
*
*/


#ifndef C_TESTDOMEXTEDFONTS_H
#define C_TESTDOMEXTEDFONTS_H

//  INCLUDES
#include <stiflogger.h>
#include <testscripterinternal.h>
#include <stiftestmodule.h>
#include <testclassassert.h>
#include <aknfontid.h>
#include <aknfontprovider.h>
#include <aknfontprovidersuppliedmetrics.h>

// MACROS
#define TEST_CLASS_VERSION_MAJOR 0
#define TEST_CLASS_VERSION_MINOR 0
#define TEST_CLASS_VERSION_BUILD 0

// Logging path
_LIT( KtestdomextedfontsLogPath, "\\logs\\testframework\\testdomextedfonts\\" ); 
// Log file
_LIT( KtestdomextedfontsLogFile, "testdomextedfonts.txt" ); 
_LIT( KtestdomextedfontsLogFileWithTitle, "testdomextedfonts_[%S].txt" );

class TAknFontId;
class TAknFontProviderSuppliedMetrics;
class CEikonEnv;
class AknFontProvider;
class TAknFontProviderSuppliedMetrics;
/**
*  CTestDOMExtedFonts test class for STIF Test Framework TestScripter.
*  @since S60 5.0
*/
NONSHARABLE_CLASS( CTestDOMExtedFonts ) : public CScriptBase
    {
public:  // Constructors and destructor

    /**
    * Two-phased constructor.
    */
    static CTestDOMExtedFonts* NewL( CTestModuleIf& aTestModuleIf );

    /**
    * Destructor.
    */
    virtual ~CTestDOMExtedFonts();

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
    CTestDOMExtedFonts( CTestModuleIf& aTestModuleIf );

    /**
    * By default Symbian 2nd phase constructor is private.
    */
    void ConstructL();

    /**
     * Method used to log version of test class
     */
    void SendTestClassVersion();

private: // [TestMethods]
    // For testing the AknFontId.h class TAknFontId
    /**
    * TestTAFIdIsEncodedFont test method for testing the IsEncodedFont method
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTAFIdIsEncodedFont( CStifItemParser& aItem );
    /**
    * TestTAFFntIdForStatupNormalFnt test method for testing the FontIdForStartupNormalFont method
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTAFFntIdForStatupNormalFnt( CStifItemParser& aItem );
    
private:
    // For test AknFontProvider.h class AknFontProvider
    /**
    * TestAFPCreateFontFromMetrics test method for testing the CreateFontFromMetrics method
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestAFPCreateFontFromMetrics( CStifItemParser& aItem );
    /**
    * TestAFPCrateFntFrmTpefacAndMetics test method for testing the CreateFontFromTypefaceAndMetrics method
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestAFPCrateFntFrmTpefacAndMetics( CStifItemParser& aItem );
    /**
    * TestAFPHasBaselineCorrection test method for testing the HasBaselineCorrection method
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestAFPHasBaselineCorrection( CStifItemParser& aItem );
    /**
    * TestAFPBaslinDeltaForCharcter test method for testing the BaselineDeltaForCharacter method
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestAFPBaslinDeltaForCharcter( CStifItemParser& aItem );
    /**
    * TestAFPMinimumBaslinDetaForDescrptr test method for testing the MinimumBaselineDeltaForDescriptor method
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestAFPMinimumBaslinDetaForDescrptr( CStifItemParser& aItem );
    /**
    * TestAFPFontProvidrIndexFromFntSpec test method for testing the FontProviderIndexFromFontSpec method
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestAFPFontProvidrIndexFromFntSpec( CStifItemParser& aItem );
    /**
    * TestAFPInitializeSystemL test method for testing the InitializeSystemL method
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestAFPInitializeSystemL( CStifItemParser& aItem );
    /**
    * TestAFPGetFontSpecFromMetrics test method for testing the GetFontSpecFromMetrics method
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestAFPGetFontSpecFromMetrics( CStifItemParser& aItem );
    
private:// For test AknFontProviderSuppliedMetrics.h class TAknFontProviderSuppliedMetrics
    /**
    * TestTAFPSMExcessAscent test method for testing the ExcessAscent method
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTAFPSMExcessAscent( CStifItemParser& aItem );
    /**
    * TestTAFPSMSetExcessAscent test method for testing the SetExcessAscent method
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTAFPSMSetExcessAscent( CStifItemParser& aItem );
    /**
    * TestTAFPSMExcessDescent test method for testing the ExcessDescent method
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTAFPSMExcessDescent( CStifItemParser& aItem );
    /**
    * TestTAFPSMSetExcessDescent test method for testing the SetExcessDescent method
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTAFPSMSetExcessDescent( CStifItemParser& aItem );
    /**
    * TestTAFPSMMxDescntToTxtPanBotom test method for testing the MaxDescentToTextPaneBottom method
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTAFPSMMxDescntToTxtPanBotom( CStifItemParser& aItem );
    /**
    * TestTAFPSMStMxDescntToTxtPanBotom test method for testing the SetMaxDescentToTextPaneBottom method
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTAFPSMStMxDescntToTxtPanBotom( CStifItemParser& aItem );
private:    // Data

    /**
     * ScreenSaver Property
     */
    TInt iOldScreenSaverProperty;
    /**
     * Own member
     */
    TAknFontProviderSuppliedMetrics iSuppliedMetrics;
    };

#endif      // C_TESTDOMEXTEDFONTS_H

// End of File
