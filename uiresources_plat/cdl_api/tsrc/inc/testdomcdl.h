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
* Description:  test cdl_api
*
*/



#ifndef C_TESTDOMCDL_H
#define C_TESTDOMCDL_H

//  INCLUDES
#include <stiflogger.h>
#include <testscripterinternal.h>
#include <stiftestmodule.h>
#include <testclassassert.h>
#include <CdlEngine.h>
#include <e32des8.h>
#include <coemain.h>
#include <e32cmn.h>
#include <cdlexplorer.h>
#include <cdlrefs.h>

#include "testdomcdlengineobserver.h"

// MACROS
#define TEST_CLASS_VERSION_MAJOR 0
#define TEST_CLASS_VERSION_MINOR 0
#define TEST_CLASS_VERSION_BUILD 0

// Logging path
_LIT( KtestdomcdlLogPath, "\\logs\\testframework\\testdomcdl\\" ); 
// Log file
_LIT( KtestdomcdlLogFile, "testdomcdl.txt" ); 
_LIT( KtestdomcdlLogFileWithTitle, "testdomcdl_[%S].txt" );

/**
*  CTestDomCdl test class for STIF Test Framework TestScripter.
*  @since S60 5.0
*/
NONSHARABLE_CLASS( CTestDomCdl ) : public CScriptBase
    {
public:  // Constructors and destructor

    /**
    * Two-phased constructor.
    */
    static CTestDomCdl* NewL( CTestModuleIf& aTestModuleIf );

    /**
    * Destructor.
    */
    virtual ~CTestDomCdl();

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
    CTestDomCdl( CTestModuleIf& aTestModuleIf );

    /**
    * By default Symbian 2nd phase constructor is private.
    */
    void ConstructL();

    /**
     * Method used to log version of test class
     */
    void SendTestClassVersion();

private: // Test MediaSharedDocument.h
    /**
    * TestCIRefL test function of class CCdlInstance in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCIRefL( CStifItemParser& aItem );
    
    /**
    * TestCISubLayerL test function of class CCdlInstance in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCISubLayerL( CStifItemParser& aItem );
    
    /**
    * TestCILastAccessedRefL test function of class CCdlInstance in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCILastAccessedRefL( CStifItemParser& aItem );
    
    /**
    * TestCIFileNameRelativeToLastAccessedInstanceL test function of class CCdlInstance in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCIFileNameRelativeToLastAccessedInstanceL( CStifItemParser& aItem );
    
    /**
    * TestCIoperatorL test function of class CCdlInstance in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCIoperatorL( CStifItemParser& aItem );
    
    /**
    * TestCINewL test function of class CCdlInstance in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCINewL( CStifItemParser& aItem );
    
    /**
    * TestCINewLCL test function of class CCdlInstance in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCINewLCL( CStifItemParser& aItem );
    
    /**
    * TestCIGetDataL test function of class CCdlInstance in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCIGetDataL( CStifItemParser& aItem );
    
    /**
    * TestCIGetFunctionL test function of class CCdlInstance in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCIGetFunctionL( CStifItemParser& aItem );
    

    /**
    * TestCUNewLCL test function of class CCdlUids in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCUNewLCL( CStifItemParser& aItem );
    
    /**
    * TestCUCCdlUidsCL test function of class CCdlUids in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCUCCdlUidsCL( CStifItemParser& aItem );
    
    /**
    * TestCUAddL test function of class CCdlUids in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCUAddL( CStifItemParser& aItem );
    
    /**
    * TestCURemoveL test function of class CCdlUids in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCURemoveL( CStifItemParser& aItem );
    
    /**
    * TestCUAddLUidL test function of class CCdlUids in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCUAddLUidL( CStifItemParser& aItem );
    
    /**
    * TestCURemoveUidL test function of class CCdlUids in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCURemoveUidL( CStifItemParser& aItem );
    
    /**
    * TestCUFindIndexL test function of class CCdlUids in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCUFindIndexL( CStifItemParser& aItem );
    
    /**
    * TestCUIntersectionLCL test function of class CCdlUids in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCUIntersectionLCL( CStifItemParser& aItem );
    
    /**
    * TestCUImportL test function of class CCdlUids in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCUImportL( CStifItemParser& aItem );
    
    /**
    * TestCUExportL test function of class CCdlUids in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCUExportL( CStifItemParser& aItem );
    

    /**
    * TestCNNewLCL test function of class CCdlNames in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCNNewLCL( CStifItemParser& aItem );
    
    /**
    * TestCNCCdlNamesL test function of class CCdlNames in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCNCCdlNamesL( CStifItemParser& aItem );
    
    /**
    * TestCNFindIndexL test function of class CCdlNames in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCNFindIndexL( CStifItemParser& aItem );
    
    /**
    * TestCNAddL test function of class CCdlNames in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCNAddL( CStifItemParser& aItem );
    
    /**
    * TestCNImportL test function of class CCdlNames in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCNImportL( CStifItemParser& aItem );
    
    /**
    * TestCNExportL test function of class CCdlNames in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCNExportL( CStifItemParser& aItem );
    
    /**
    * TestCNExportLCL test function of class CCdlNames in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCNExportLCL( CStifItemParser& aItem );

    /**
    * TestCCOHandleCustomisationChangeL test function of class MCdlChangeObserver in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCCOHandleCustomisationChangeL( CStifItemParser& aItem );
    
    /**
    * TestCCOHandleAvailableRefsChangeL test function of class MCdlChangeObserver in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCCOHandleAvailableRefsChangeL( CStifItemParser& aItem );
    

    /**
    * TestCEIsCdlEngineCreated test function of class CdlEngine in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCEIsCdlEngineCreated( CStifItemParser& aItem );
    
    /**
    * TestCECreateCdlEngineL test function of class CdlEngine in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCECreateCdlEngineL( CStifItemParser& aItem );
    
    /**
    * TestCEStartGlobalCustomisationL test function of class CdlEngine in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCEStartGlobalCustomisationL( CStifItemParser& aItem );
    
    /**
    * TestCEGetDataL test function of class CdlEngine in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCEGetDataL( CStifItemParser& aItem );
    
    /**
    * TestCEGetFunctionL test function of class CdlEngine in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCEGetFunctionL( CStifItemParser& aItem );
    
    /**
    * TestCEIsCustomisationStarted test function of class CdlEngine in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCEIsCustomisationStarted( CStifItemParser& aItem );
    
    /**
    * TestCERequireCustomisationL test function of class CdlEngine in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCERequireCustomisationL( CStifItemParser& aItem );
    
    /**
    * TestCELoadCustomisationL test function of class CdlEngine in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCELoadCustomisationL( CStifItemParser& aItem );
    
    /**
    * TestCECustomisationInstanceL test function of class CdlEngine in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCECustomisationInstanceL( CStifItemParser& aItem );
    
    /**
    * TestCESetCustomisationChangeObserverL test function of class CdlEngine in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCESetCustomisationChangeObserverL( CStifItemParser& aItem );
    
    /**
    * TestCELastAccessedRefL test function of class CdlEngine in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCELastAccessedRefL( CStifItemParser& aItem );
    
    /**
    * TestCEFileNameRelativeToLastAccessedInstanceL test function of class CdlEngine in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCEFileNameRelativeToLastAccessedInstanceL( CStifItemParser& aItem );
    
    /**
    * TestCELastApiIdL test function of class CdlEngine in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCELastApiIdL( CStifItemParser& aItem );
    
    /**
    * TestCEFindInstancesLCL test function of class CdlEngine in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCEFindInstancesLCL( CStifItemParser& aItem );
    
    /**
    * TestCEFileContentsLCL test function of class CdlEngine in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCEFileContentsLCL( CStifItemParser& aItem );
    
    /**
    * TestCEFindCustomisationFilesLCL test function of class CdlEngine in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCEFindCustomisationFilesLCL( CStifItemParser& aItem );
    
    /**
    * TestCEAllAvailableRefsLCL test function of class CdlEngine in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCEAllAvailableRefsLCL( CStifItemParser& aItem );
    
    /**
    * TestCESetAvailableRefsChangeObserverL test function of class CdlEngine in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCESetAvailableRefsChangeObserverL( CStifItemParser& aItem );
    
    /**
    * TestCESetLocalStateL test function of class CdlEngine in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCESetLocalStateL( CStifItemParser& aItem );
    
    /**
    * TestCESetGlobalStateL test function of class CdlEngine in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCESetGlobalStateL( CStifItemParser& aItem );
    
    /**
    * TestCELocalStateLCL test function of class CdlEngine in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCELocalStateLCL( CStifItemParser& aItem );
    
    /**
    * TestCEGlobalStateLCL test function of class CdlEngine in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCEGlobalStateLCL( CStifItemParser& aItem );
    
    /**
    * TestCEEnableGlobalCustomisationL test function of class CdlEngine in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCEEnableGlobalCustomisationL( CStifItemParser& aItem );
    
    /**
    * TestCECompareNames test function of class CdlEngine in cdlengine.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCECompareNames( CStifItemParser& aItem );
    
private: // Test cdlexplorer.h
    /**
    * TestCEUCreateRefsLCL test function of class CdlExplorerUtils in cdlexplorer.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCEUCreateRefsLCL( CStifItemParser& aItem );
    
    /**
    * TestCEUCreateRefsLCArrayL test function of class CdlExplorerUtils in cdlexplorer.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCEUCreateRefsLCArrayL( CStifItemParser& aItem );
    
    /**
    * TestCIEBDoFindLCL test function of class CCdlInstanceExplorerBase in cdlexplorer.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCIEBDoFindLCL( CStifItemParser& aItem );
    
private: // Test cdlrefs.h
    /**
    * TestCRITIteratorL test function of class CCdlRefs's subclass TIterator in cdlrefs.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCRITIteratorL( CStifItemParser& aItem );
    
    /**
    * TestCRIoperatorL test function of class CCdlRefs's subclass TIterator in cdlrefs.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCRIoperatorL( CStifItemParser& aItem );
    
    /**
    * TestCRNewL test function of class CCdlRefs in cdlrefs.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCRNewL( CStifItemParser& aItem );
    
    /**
    * TestCRNewLCL test function of class CCdlRefs in cdlrefs.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCRNewLCL( CStifItemParser& aItem );
    
    /**
    * TestCRBeginL test function of class CCdlRefs in cdlrefs.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCRBeginL( CStifItemParser& aItem );
    
    /**
    * TestCRBeginUidL test function of class CCdlRefs in cdlrefs.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCRBeginUidL( CStifItemParser& aItem );
    
    /**
    * TestCRBeginDesL test function of class CCdlRefs in cdlrefs.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCRBeginDesL( CStifItemParser& aItem );
    
    /**
    * TestCREndL test function of class CCdlRefs in cdlrefs.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCREndL( CStifItemParser& aItem );
    
    /**
    * TestCRAppendL test function of class CCdlRefs in cdlrefs.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCRAppendL( CStifItemParser& aItem );
    
    /**
    * TestCRAppendRefsL test function of class CCdlRefs in cdlrefs.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCRAppendRefsL( CStifItemParser& aItem );
    
    /**
    * TestCRAppendDesL test function of class CCdlRefs in cdlrefs.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCRAppendDesL( CStifItemParser& aItem );
    
    /**
    * TestCRInsertL test function of class CCdlRefs in cdlrefs.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCRInsertL( CStifItemParser& aItem );
    
    /**
    * TestCRDeleteL test function of class CCdlRefs in cdlrefs.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCRDeleteL( CStifItemParser& aItem );
    
    /**
    * TestCRDeleteBeginAndL test function of class CCdlRefs in cdlrefs.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCRDeleteBeginAndL( CStifItemParser& aItem );
    
    /**
    * TestCRNamesL test function of class CCdlRefs in cdlrefs.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCRNamesL( CStifItemParser& aItem );
    
    /**
    * TestCRUidsLCL test function of class CCdlRefs in cdlrefs.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCRUidsLCL( CStifItemParser& aItem );
    
    /**
    * TestCRSubsetByUidLCL test function of class CCdlRefs in cdlrefs.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCRSubsetByUidLCL( CStifItemParser& aItem );
    
    /**
    * TestCRSubsetByUidLCUidL test function of class CCdlRefs in cdlrefs.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCRSubsetByUidsLCL( CStifItemParser& aItem );
    
    /**
    * TestCRSubsetByNameLCL test function of class CCdlRefs in cdlrefs.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCRSubsetByNameLCL( CStifItemParser& aItem );
    
    /**
    * TestCRMergeAndReplaceL test function of class CCdlRefs in cdlrefs.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCRMergeAndReplaceL( CStifItemParser& aItem );
    
    /**
    * TestCRAddLayerL test function of class CCdlRefs in cdlrefs.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCRAddLayerL( CStifItemParser& aItem );
    
    /**
    * TestCRExportL test function of class CCdlRefs in cdlrefs.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCRExportL( CStifItemParser& aItem );
    
    /**
    * TestCRExportLCL test function of class CCdlRefs in cdlrefs.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCRExportLCL( CStifItemParser& aItem );
    
    /**
    * TestCRImportL test function of class CCdlRefs in cdlrefs.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCRImportL( CStifItemParser& aItem );
    
    /**
    * TestCRCountRefsL test function of class CCdlRefs in cdlrefs.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCRCountRefsL( CStifItemParser& aItem );
    
    /**
    * TestCRRefL test function of class CCdlRefs in cdlrefs.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCRRefL( CStifItemParser& aItem );
    
    /**
    * TestCRRefL test function of class CCdlRefs in cdlrefs.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCRDeleteWithNameL( CStifItemParser& aItem );
    
private: // Test cdluserpackageexplorer.h
    /**
    * TestCUPEConstructL test function of class CCdlUserPackageExplorer in cdluserpackageexplorer.h
    * @since S60 5.0
    * @param aItem never used
    * @return Symbian OS error code.
    */
    virtual TInt TestCUPEConstructL( CStifItemParser& aItem );
    

private:    // Data

    /**
     * ScreenSaver Property
     */
    TInt iOldScreenSaverProperty;
    
    /*
     * Resource file offset
     */
    TInt iOffset;
    };

#endif      // C_TESTDOMCDL_H

// End of File


