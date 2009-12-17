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

#include <ecam.h>
#include <cdlrefs.h>

#include "testdomcdl.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCUPEConstructL
// -----------------------------------------------------------------------------

TInt CTestDomCdl::TestCUPEConstructL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlUserPackageExplorer* cdiUPE = new(ELeave) CCdlUserPackageExplorer();
    CleanupStack::PushL( cdiUPE );//push
    cdiUPE->ConstructL();
    CleanupStack::PopAndDestroy();
    return KErrNone;
    }

// [End of File]


