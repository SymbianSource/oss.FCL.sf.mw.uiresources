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


// [INCLUDE FILES]
#include <e32svr.h>
#include <stifparser.h>
#include <stiftestinterface.h>
#include <aknfontid.h>

#include "testdomextedfonts.h"

// ============================ MEMBER FUNCTIONS ===============================
// -----------------------------------------------------------------------------
// CTestDOMUiVoiceRengn::TestTAFIdIsEncodedFont
// -----------------------------------------------------------------------------
TInt CTestDOMExtedFonts::TestTAFIdIsEncodedFont( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomextedfonts, "Ktestdomextedfonts" );
    _LIT( KTestTAFIdIsEncodedFont, "In TestTAFIdIsEncodedFont" );
    TestModuleIf().Printf( 0, Ktestdomextedfonts, KTestTAFIdIsEncodedFont );
    // Print to log file
    iLog->Log( KTestTAFIdIsEncodedFont );

    TInt fontId = 0x00001111;
    TAknFontId::IsEncodedFont( fontId );

    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMUiVoiceRengn::TestTAFFntIdForStatupNormalFnt
// -----------------------------------------------------------------------------
TInt CTestDOMExtedFonts::TestTAFFntIdForStatupNormalFnt( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomextedfonts, "Ktestdomextedfonts" );
    _LIT( KTestTAFFntIdForStatupNormalFnt, "In TestTAFFntIdForStatupNormalFnt" );
    TestModuleIf().Printf( 0, Ktestdomextedfonts, KTestTAFFntIdForStatupNormalFnt );
    // Print to log file
    iLog->Log( KTestTAFFntIdForStatupNormalFnt );

    TAknFontId::FontIdForStartupNormalFont();

    return KErrNone;
    }
