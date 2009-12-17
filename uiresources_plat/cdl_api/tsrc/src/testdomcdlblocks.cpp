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



// [INCLUDE FILES]
#include <e32svr.h>
#include <stifparser.h>
#include <stiftestinterface.h>

#include "testdomcdl.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestDomCdl::RunMethodL
// Run specified method. Contains also table of test mothods and their names.
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::RunMethodL( CStifItemParser& aItem ) 
    {

    static TStifFunctionInfo const KFunctions[] =
        {  
        // First string is the function name used in TestScripter script file.
        // Second is the actual implementation member function. 
        ENTRY( "TestCIRefL", CTestDomCdl::TestCIRefL ),
        ENTRY( "TestCISubLayerL", CTestDomCdl::TestCISubLayerL ),
        ENTRY( "TestCILastAccessedRefL", CTestDomCdl::TestCILastAccessedRefL ),
        ENTRY( "TestCIFileNameRelativeToLastAccessedInstanceL", CTestDomCdl::TestCIFileNameRelativeToLastAccessedInstanceL ),
        ENTRY( "TestCIoperatorL", CTestDomCdl::TestCIoperatorL ),
        ENTRY( "TestCINewL", CTestDomCdl::TestCINewL ),
        ENTRY( "TestCINewLCL", CTestDomCdl::TestCINewLCL ),
        ENTRY( "TestCIGetDataL", CTestDomCdl::TestCIGetDataL ),
        ENTRY( "TestCIGetFunctionL", CTestDomCdl::TestCIGetFunctionL ),
        ENTRY( "TestCUNewLCL", CTestDomCdl::TestCUNewLCL ),
        ENTRY( "TestCUCCdlUidsCL", CTestDomCdl::TestCUCCdlUidsCL ),
        ENTRY( "TestCUAddL", CTestDomCdl::TestCUAddL ),
        ENTRY( "TestCURemoveL", CTestDomCdl::TestCURemoveL ),
        ENTRY( "TestCUAddLUidL", CTestDomCdl::TestCUAddLUidL ),
        ENTRY( "TestCURemoveUidL", CTestDomCdl::TestCURemoveUidL ),
        ENTRY( "TestCUFindIndexL", CTestDomCdl::TestCUFindIndexL ),
        ENTRY( "TestCUIntersectionLCL", CTestDomCdl::TestCUIntersectionLCL ),
        ENTRY( "TestCUImportL", CTestDomCdl::TestCUImportL ),
        ENTRY( "TestCUExportL", CTestDomCdl::TestCUExportL ),
        ENTRY( "TestCNNewLCL", CTestDomCdl::TestCNNewLCL ),
        ENTRY( "TestCNCCdlNamesL", CTestDomCdl::TestCNCCdlNamesL ),
        ENTRY( "TestCNFindIndexL", CTestDomCdl::TestCNFindIndexL ),
        ENTRY( "TestCNAddL", CTestDomCdl::TestCNAddL ),
        ENTRY( "TestCNImportL", CTestDomCdl::TestCNImportL ),
        ENTRY( "TestCNExportL", CTestDomCdl::TestCNExportL ),
        ENTRY( "TestCNExportLCL", CTestDomCdl::TestCNExportLCL ),
        ENTRY( "TestCCOHandleCustomisationChangeL", CTestDomCdl::TestCCOHandleCustomisationChangeL ),
        ENTRY( "TestCCOHandleAvailableRefsChangeL", CTestDomCdl::TestCCOHandleAvailableRefsChangeL ),
        ENTRY( "TestCEIsCdlEngineCreated", CTestDomCdl::TestCEIsCdlEngineCreated ),
        ENTRY( "TestCECreateCdlEngineL", CTestDomCdl::TestCECreateCdlEngineL ),
        ENTRY( "TestCEStartGlobalCustomisationL", CTestDomCdl::TestCEStartGlobalCustomisationL ),
        ENTRY( "TestCEGetDataL", CTestDomCdl::TestCEGetDataL ),
        ENTRY( "TestCEGetFunctionL", CTestDomCdl::TestCEGetFunctionL ),
        ENTRY( "TestCEIsCustomisationStarted", CTestDomCdl::TestCEIsCustomisationStarted ),
        ENTRY( "TestCERequireCustomisationL", CTestDomCdl::TestCERequireCustomisationL ),
        ENTRY( "TestCELoadCustomisationL", CTestDomCdl::TestCELoadCustomisationL ),
        ENTRY( "TestCECustomisationInstanceL", CTestDomCdl::TestCECustomisationInstanceL ),
        ENTRY( "TestCESetCustomisationChangeObserverL", CTestDomCdl::TestCESetCustomisationChangeObserverL ),
        ENTRY( "TestCELastAccessedRefL", CTestDomCdl::TestCELastAccessedRefL ),
        ENTRY( "TestCEFileNameRelativeToLastAccessedInstanceL", CTestDomCdl::TestCEFileNameRelativeToLastAccessedInstanceL ),
        ENTRY( "TestCELastApiIdL", CTestDomCdl::TestCELastApiIdL ),
        ENTRY( "TestCEFindInstancesLCL", CTestDomCdl::TestCEFindInstancesLCL ),
        ENTRY( "TestCEFileContentsLCL", CTestDomCdl::TestCEFileContentsLCL ),
        ENTRY( "TestCEFindCustomisationFilesLCL", CTestDomCdl::TestCEFindCustomisationFilesLCL ),
        ENTRY( "TestCEAllAvailableRefsLCL", CTestDomCdl::TestCEAllAvailableRefsLCL ),
        ENTRY( "TestCESetAvailableRefsChangeObserverL", CTestDomCdl::TestCESetAvailableRefsChangeObserverL ),
        ENTRY( "TestCESetLocalStateL", CTestDomCdl::TestCESetLocalStateL ),
        ENTRY( "TestCESetGlobalStateL", CTestDomCdl::TestCESetGlobalStateL ),
        ENTRY( "TestCELocalStateLCL", CTestDomCdl::TestCELocalStateLCL ),
        ENTRY( "TestCEGlobalStateLCL", CTestDomCdl::TestCEGlobalStateLCL ),
        ENTRY( "TestCEEnableGlobalCustomisationL", CTestDomCdl::TestCEEnableGlobalCustomisationL ),
        ENTRY( "TestCECompareNames", CTestDomCdl::TestCECompareNames ),

        ENTRY( "TestCEUCreateRefsLCL", CTestDomCdl::TestCEUCreateRefsLCL ),
        ENTRY( "TestCEUCreateRefsLCArrayL", CTestDomCdl::TestCEUCreateRefsLCArrayL ),
        ENTRY( "TestCIEBDoFindLCL", CTestDomCdl::TestCIEBDoFindLCL ),

        ENTRY( "TestCRITIteratorL", CTestDomCdl::TestCRITIteratorL ),
        ENTRY( "TestCRIoperatorL", CTestDomCdl::TestCRIoperatorL ),
        ENTRY( "TestCRNewL", CTestDomCdl::TestCRNewL ),
        ENTRY( "TestCRNewLCL", CTestDomCdl::TestCRNewLCL ),
        ENTRY( "TestCRBeginL", CTestDomCdl::TestCRBeginL ),
        ENTRY( "TestCRBeginUidL", CTestDomCdl::TestCRBeginUidL ),
        ENTRY( "TestCRBeginDesL", CTestDomCdl::TestCRBeginDesL ),
        ENTRY( "TestCREndL", CTestDomCdl::TestCREndL ),
        ENTRY( "TestCRAppendL", CTestDomCdl::TestCRAppendL ),
        ENTRY( "TestCRAppendRefsL", CTestDomCdl::TestCRAppendRefsL ),
        ENTRY( "TestCRAppendDesL", CTestDomCdl::TestCRAppendDesL ),
        ENTRY( "TestCRInsertL", CTestDomCdl::TestCRInsertL ),
        ENTRY( "TestCRDeleteL", CTestDomCdl::TestCRDeleteL ),
        ENTRY( "TestCRDeleteBeginAndL", CTestDomCdl::TestCRDeleteBeginAndL ),
        ENTRY( "TestCRNamesL", CTestDomCdl::TestCRNamesL ),
        ENTRY( "TestCRUidsLCL", CTestDomCdl::TestCRUidsLCL ),
        ENTRY( "TestCRSubsetByUidLCL", CTestDomCdl::TestCRSubsetByUidLCL ),
        ENTRY( "TestCRSubsetByUidsLCL", CTestDomCdl::TestCRSubsetByUidsLCL ),
        ENTRY( "TestCRSubsetByNameLCL", CTestDomCdl::TestCRSubsetByNameLCL ),
        ENTRY( "TestCRMergeAndReplaceL", CTestDomCdl::TestCRMergeAndReplaceL ),
        ENTRY( "TestCRAddLayerL", CTestDomCdl::TestCRAddLayerL ),
        ENTRY( "TestCRExportL", CTestDomCdl::TestCRExportL ),
        ENTRY( "TestCRExportLCL", CTestDomCdl::TestCRExportLCL ),
        ENTRY( "TestCRImportL", CTestDomCdl::TestCRImportL ),
        ENTRY( "TestCRCountRefsL", CTestDomCdl::TestCRCountRefsL ),
        ENTRY( "TestCRRefL", CTestDomCdl::TestCRRefL ),
        ENTRY( "TestCRDeleteWithNameL", CTestDomCdl::TestCRDeleteWithNameL ),
        ENTRY( "TestCUPEConstructL", CTestDomCdl::TestCUPEConstructL ),

        
        // [test cases entries]

        };

    const TInt count = sizeof( KFunctions ) / sizeof( TStifFunctionInfo );

    return RunInternalL( KFunctions, count, aItem );

    }

// [End of File]
