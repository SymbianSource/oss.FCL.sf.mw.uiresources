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
* Description:  layout_system_private_api
*
*/



#ifndef C_TESTDOMLAYOUTSYSTEMPRIVATE_H
#define C_TESTDOMLAYOUTSYSTEMPRIVATE_H

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
_LIT( KtestdomlayoutsystemprivateLogPath, "\\logs\\testframework\\testdomlayoutsystemprivate\\" ); 
// Log file
_LIT( KtestdomlayoutsystemprivateLogFile, "testdomlayoutsystemprivate.txt" ); 
_LIT( KtestdomlayoutsystemprivateLogFileWithTitle, "testdomlayoutsystemprivate_[%S].txt" );

/**
*  CTestDOMLayoutSystemPrivate test class for STIF Test Framework TestScripter.
*  @since S60 5.0
*/
NONSHARABLE_CLASS( CTestDOMLayoutSystemPrivate ) : public CScriptBase
    {
public:  // Constructors and destructor

    /**
    * Two-phased constructor.
    */
    static CTestDOMLayoutSystemPrivate* NewL( CTestModuleIf& aTestModuleIf );

    /**
    * Destructor.
    */
    virtual ~CTestDOMLayoutSystemPrivate();

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
    CTestDOMLayoutSystemPrivate( CTestModuleIf& aTestModuleIf );

    /**
    * By default Symbian 2nd phase constructor is private.
    */
    void ConstructL();
    
    /**
     * Method used to log version of test class
     */
    void SendTestClassVersion();

private: // [TestMethods]
    // for test AknLayout2AdaptationDataDef.h
    /**
    * TestLADSMultiLineTextLineL test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLADSMultiLineTextLineL( CStifItemParser& aItem );
    /**
    * TestLADSWindowTableL test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLADSWindowTableL( CStifItemParser& aItem );
    /**
    * TestLADSTextTableL test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLADSTextTableL( CStifItemParser& aItem );
    /**
    * TestLADSWindowTableRectL test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLADSWindowTableRectL( CStifItemParser& aItem );
    /**
    * TestLADSTableLimitsL test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLADSTableLimitsL( CStifItemParser& aItem );
    // for test AknLayout2DataDef.h
    /**
    * TestWLLISetAllParentOffsets test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestWLLISetAllParentOffsets( CStifItemParser& aItem );
    /**
    * TestTLLISetAllParentOffsets test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestTLLISetAllParentOffsets( CStifItemParser& aItem );
    /**
    * TestLDSWindowLine test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLDSWindowLine( CStifItemParser& aItem );
    /**
    * TestLDSWindowLineIndex test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLDSWindowLineIndex( CStifItemParser& aItem );
    /**
    * TestLDSWindowLineRect test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLDSWindowLineRect( CStifItemParser& aItem );
    /**
    * TestLDSTextLine test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLDSTextLine( CStifItemParser& aItem );
    /**
    * TestLDSTextLineIndex test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLDSTextLineIndex( CStifItemParser& aItem );
    /**
    * TestLDSTextLineRect test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLDSTextLineRect( CStifItemParser& aItem );
    /**
    * TestLDSMultiLineTextLine test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLDSMultiLineTextLine( CStifItemParser& aItem );
    /**
    * TestLDSMultiLineTextLineRect test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLDSMultiLineTextLineRect( CStifItemParser& aItem );
    /**
    * TestLDSWindowTable test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLDSWindowTable( CStifItemParser& aItem );
    /**
    * TestLDSTextTable test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLDSTextTable( CStifItemParser& aItem );
    /**
    * TestLDSWindowTableRect test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLDSWindowTableRect( CStifItemParser& aItem );
    /**
    * TestLDSTextTableRect test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLDSTextTableRect( CStifItemParser& aItem );
    /**
    * TestLDSTableLimits test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLDSTableLimits( CStifItemParser& aItem );
    // for test aknlayout2hierarchy.h
    /**
    * TestLHGetComponentType test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLHGetComponentType( CStifItemParser& aItem );
    /**
    * TestLHGetParamLimits test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLHGetParamLimits( CStifItemParser& aItem );
    /**
    * TestLHGetWindowComponentLayout test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLHGetWindowComponentLayout( CStifItemParser& aItem );
    /**
    * TestLHGetTextComponentLayout test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLHGetTextComponentLayout( CStifItemParser& aItem );
    // for test aknlayout2hierarchydef.h
    /**
    * TestLHCHDefaultConstructor test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLHCHDefaultConstructor( CStifItemParser& aItem );
    /**
    * TestLHCHConstructor test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLHCHConstructor( CStifItemParser& aItem );
    /**
    * TestLHCHLayoutSystemId test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLHCHLayoutSystemId( CStifItemParser& aItem );
    /**
    * TestLHCHSetLayoutSystemId test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLHCHSetLayoutSystemId( CStifItemParser& aItem );
    /**
    * TestLHCHApiId test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLHCHApiId( CStifItemParser& aItem );
    /**
    * TestLHCHComponentId test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLHCHComponentId( CStifItemParser& aItem );
    /**
    * TestLHCHOptionIndex test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLHCHOptionIndex( CStifItemParser& aItem );
    /**
    * TestLHCHVarietyIndex test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLHCHVarietyIndex( CStifItemParser& aItem );
    /**
    * TestLHCHColumn test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLHCHColumn( CStifItemParser& aItem );
    /**
    * TestLHCHRow test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLHCHRow( CStifItemParser& aItem );
    /**
     * TestLHCHSetApiId test method.
     * @since S60 5.0
     * @param aItem Script line containing parameters.
     * @return Symbian OS error code.
     */
    virtual TInt TestLHCHSetApiId( CStifItemParser& aItem );
    /**
     * TestLHCHSetComponentId test method.
     * @since S60 5.0
     * @param aItem Script line containing parameters.
     * @return Symbian OS error code.
     */
    virtual TInt TestLHCHSetComponentId( CStifItemParser& aItem );
    /**
     * TestLHCHSetOptionIndex test method.
     * @since S60 5.0
     * @param aItem Script line containing parameters.
     * @return Symbian OS error code.
     */
    virtual TInt TestLHCHSetOptionIndex( CStifItemParser& aItem );
    /**
     * TestLHCHSetVarietyIndex test method.
     * @since S60 5.0
     * @param aItem Script line containing parameters.
     * @return Symbian OS error code.
     */
    virtual TInt TestLHCHSetVarietyIndex( CStifItemParser& aItem );
    /**
     * TestLHCHSetColumn test method.
     * @since S60 5.0
     * @param aItem Script line containing parameters.
     * @return Symbian OS error code.
     */
    virtual TInt TestLHCHSetColumn( CStifItemParser& aItem );
    /**
     * TestLHCHSetRow test method.
     * @since S60 5.0
     * @param aItem Script line containing parameters.
     * @return Symbian OS error code.
     */
    virtual TInt TestLHCHSetRow( CStifItemParser& aItem );
    // for test aknlayout2scalabledatadef.h
    /**
    * TestLSDSWindowLine test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSDSWindowLine( CStifItemParser& aItem );
    /**
    * TestLSDSWindowLineVariety test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSDSWindowLineVariety( CStifItemParser& aItem );
    /**
    * TestLSDSTextLine test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSDSTextLine( CStifItemParser& aItem );
    /**
    * TestLSDSTextLineVariety test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSDSTextLineVariety( CStifItemParser& aItem );
    /**
    * TestLSDSWindowTable test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSDSWindowTable( CStifItemParser& aItem );
    /**
    * TestLSDSWindowTableVariety test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSDSWindowTableVariety( CStifItemParser& aItem );
    /**
    * TestLSDSTextTable test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSDSTextTable( CStifItemParser& aItem );
    /**
    * TestLSDSTextTableVariety test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSDSTextTableVariety( CStifItemParser& aItem );
    /**
    * TestLSDSTableLimits test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSDSTableLimits( CStifItemParser& aItem );
    /**
    * TestLSDSParameterLimits test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSDSParameterLimits( CStifItemParser& aItem );
    /**
    * TestLSDSParameterLimitsTable test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSDSParameterLimitsTable( CStifItemParser& aItem );
    /**
    * TestLSDSGetComponentTypeById test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSDSGetComponentTypeById( CStifItemParser& aItem );
    /**
    * TestLSDSGetParamLimitsById test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSDSGetParamLimitsById( CStifItemParser& aItem );
    /**
    * TestLSDSGetWindowComponentById test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSDSGetWindowComponentById( CStifItemParser& aItem );
    /**
    * TestLSDSGetTextComponentById test method.
    * @since S60 5.0
    * @param aItem Script line containing parameters.
    * @return Symbian OS error code.
    */
    virtual TInt TestLSDSGetTextComponentById( CStifItemParser& aItem );
private:    // Data

    /**
     * ScreenSaver Property
     */
    TInt iOldScreenSaverProperty;

    };

#endif      // C_TESTDOMLAYOUTSYSTEMPRIVATE_H

// End of File
