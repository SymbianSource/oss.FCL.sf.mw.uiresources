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

// [INCLUDE FILES]
#include <aknutils.h>
#include <avkon.mbg>

#include "testpubscalableicons.h"

// ============================ MEMBER FUNCTIONS =========================
_LIT( KMbmFile, "z:\\resource\\apps\\avkon2.mbm" );

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestAknInternalIconUtilsSetAppIconL
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestAknInternalIconUtilsSetAppIconL( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktestakninternaliconutilssetappiconl, "In TestAknInternalIconUtilsSetAppIconL");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktestakninternaliconutilssetappiconl);
    iLog->Log(Ktestakninternaliconutilssetappiconl);

    TFileName file( KMbmFile );
    User::LeaveIfError( CompleteWithAppPath( file ) );
    CFbsBitmap* aSrcBitmap = AknIconUtils::CreateIconL( file, EMbmAvkonQgn_indi_mic );

    CleanupStack::PushL( aSrcBitmap );

    AknInternalIconUtils::SetAppIcon( aSrcBitmap );
    
    CleanupStack::PopAndDestroy();

    return KErrNone;
    }

