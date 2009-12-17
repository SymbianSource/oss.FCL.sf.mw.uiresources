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
#include "testpubscalableicons.h"

// ============================ MEMBER FUNCTIONS =========================


// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestRAknIconSrvClientConnectL
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestRAknIconSrvClientConnectL( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktestrakniconsrvclientconnectl, "In TestRAknIconSrvClientConnectL");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktestrakniconsrvclientconnectl);
    iLog->Log(Ktestrakniconsrvclientconnectl);


    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestRAknIconSrvClientDisconnectL
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestRAknIconSrvClientDisconnectL( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktestrakniconsrvclientdisconnectl, "In TestRAknIconSrvClientDisconnectL");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktestrakniconsrvclientdisconnectl);
    iLog->Log(Ktestrakniconsrvclientdisconnectl);


    return KErrNone;
    }

