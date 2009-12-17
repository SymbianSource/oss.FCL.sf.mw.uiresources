/*
* Copyright (c) 2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  test aknsrendererwrapper.h
*
*/



#include <aknsrendererwrapper.h>
#include <aknsutils.h>

#include "testdomskins.h"

// CONSTANTS
const TInt KRectAx = 5;
const TInt KRectAy = 5;
const TInt KRectBx = 50;
const TInt KRectBy = 20;

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestWrapRenderScalableItemL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestWrapRenderScalableItemL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestWrapRenderScalableItemL, "In RendererWrapper RenderScalableItemL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestWrapRenderScalableItemL );
    // Print to log file
    iLog->Log( KTestWrapRenderScalableItemL );

    MAknsSkinInstance* skin = AknsUtils::SkinInstance();

    CFbsBitmap* outRGB = NULL;
    CFbsBitmap* outAlpha = NULL;
    TRect rect( KRectAx, KRectAy, KRectBx, KRectBy );
    CleanupStack::PushL( outRGB );
    CleanupStack::PushL( outAlpha );
    AknsRendererWrapper::RenderScalableItemL(
        skin, KAknsIIDQsnBgScreen, outRGB, outAlpha, rect, NULL, NULL );

    CleanupStack::PopAndDestroy( outAlpha );
    CleanupStack::Pop();
    delete outRGB;
    outRGB = NULL;
    return KErrNone;

    }

