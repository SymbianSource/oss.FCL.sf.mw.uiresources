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
* Description:  Test AknsWallpaperUtils.h
*
*/


#include <aknswallpaperutils.h>
#include <coemain.h>

#include "testsdkskins.h"

const TInt KLength = 20;

// ============================ MEMBER FUNCTIONS ===============================
// -----------------------------------------------------------------------------
// CTestSDKSkins::TestWUSetIdleWallpaper
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestWUSetIdleWallpaper( CStifItemParser& /*aItem*/ )
    {
    _LIT( KFileName, "wallpaperutils" );
    TBuf<KLength> fileName( KFileName );
    AknsWallpaperUtils::SetIdleWallpaper( fileName, CCoeEnv::Static() );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestWUSetSlidesetWallpaperL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestWUSetSlidesetWallpaperL( CStifItemParser& /*aItem*/ )
    {
    _LIT( KFileName, "wallpaperutils" );
    TBuf<KLength> fileName( KFileName );
    
    CDesCArray* array = new (ELeave) CDesCArrayFlat(1);
    CleanupStack::PushL( array );
    STIF_ASSERT_NOT_NULL( array );
    
    array->AppendL( fileName );
    AknsWallpaperUtils::SetSlidesetWallpaper( *array, CCoeEnv::Static() );
    
    CleanupStack::PopAndDestroy( array );
    
    return KErrNone;
    
    }
