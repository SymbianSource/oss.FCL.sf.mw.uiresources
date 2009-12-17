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
* Description:  test aknssrvclient.h
*
*/



#include <aknsskinuid.h>
#include <aknssrvclient.h>
#include <akniconutils.h>
#include <aknsconstants.h>
#include <avkon.mbg>
#include <fbs.h>

#include "testdomskins.h"

// CONSTANTS
const TInt KScalableWidth = 20;
const TInt KScalableHeight = 20;
const TInt KGranularity = 5;

_LIT( KTxtFilename, "\\resource\\apps\\avkon2.mbm" );

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestClientConstructL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestClientConstructL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestClientConstruct, "In SrvClient default construct" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestClientConstruct );
    // Print to log file
    iLog->Log( KTestClientConstruct );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );

    CleanupStack::Pop( &srvSession );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestClientConnectL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestClientConnectL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestClientConnect, "In SrvClient Connect" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestClientConnect );
    // Print to log file
    iLog->Log( KTestClientConnect );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();

    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return err;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestClientCloseL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestClientCloseL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestClientClose, "In SrvClient Close" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestClientClose );
    // Print to log file
    iLog->Log( KTestClientClose );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestClientEnaSkinChaNotifyL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestClientEnaSkinChaNotifyL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestClientEnableSkinChangeNotify, "In SrvClient EnableSkinChangeNotify" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestClientEnableSkinChangeNotify );
    // Print to log file
    iLog->Log( KTestClientEnableSkinChangeNotify );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    srvSession.EnableSkinChangeNotify();

    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestClientDisaSkinChaNotifyL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestClientDisaSkinChaNotifyL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestClientDisableSkinChangeNotify, "In SrvClient DisableSkinChangeNotify" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestClientDisableSkinChangeNotify );
    // Print to log file
    iLog->Log( KTestClientDisableSkinChangeNotify );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    srvSession.DisableSkinChangeNotify();

    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestClientClientErrorL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestClientClientErrorL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestClientClientError, "In SrvClient ClientError" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestClientClientError );
    // Print to log file
    iLog->Log( KTestClientClientError );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    srvSession.ClientError();

    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestClientSetAllDefiSetsL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestClientSetAllDefiSetsL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestClientSetAllDefinitionSets, "In SrvClient SetAllDefinitionSets" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestClientSetAllDefinitionSets );
    // Print to log file
    iLog->Log( KTestClientSetAllDefinitionSets );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    err = srvSession.SetAllDefinitionSets( KAknsPIDS60DefaultSkin );

    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return err;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestClientEnumSkinPkgsL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestClientEnumSkinPkgsL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestClientEnumerateSkinPackagesL, "In SrvClient EnumerateSkinPackagesL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestClientEnumerateSkinPackagesL );
    // Print to log file
    iLog->Log( KTestClientEnumerateSkinPackagesL );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    CArrayPtr<CAknsSrvSkinInformationPkg>* skinInfoPkgs =
        srvSession.EnumerateSkinPackagesL();
    STIF_ASSERT_NOT_NULL( skinInfoPkgs );

    TInt skinCount = skinInfoPkgs->Count();
    for ( TInt i=0; i < skinCount; i++ )
        {
        delete ( *skinInfoPkgs )[i];
        }

    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestClientCreateChunkLookupL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestClientCreateChunkLookupL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestClientCreateChunkLookupL, "In SrvClient CreateChunkLookupL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestClientCreateChunkLookupL );
    // Print to log file
    iLog->Log( KTestClientCreateChunkLookupL );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    CAknsSrvChunkLookup* srvChunkLookup = srvSession.CreateChunkLookupL();
    CleanupStack::PushL( srvChunkLookup );
    STIF_ASSERT_NOT_NULL( srvChunkLookup );

    CleanupStack::PopAndDestroy( srvChunkLookup );
    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestClientSetIdleWallpaperL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestClientSetIdleWallpaperL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestClientSetIdleWallpaper, "In SrvClient SetIdleWallpaper" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestClientSetIdleWallpaper );
    // Print to log file
    iLog->Log( KTestClientSetIdleWallpaper );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }
    srvSession.EnableSkinChangeNotify();
    srvSession.SetAllDefinitionSets( KAknsPIDS60DefaultSkin );
    err = srvSession.SetIdleWallpaper( KTxtFilename );

    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestClientStoreScaGraphicsL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestClientStoreScaGraphicsL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestClientStoreScalableGraphics, "In SrvClient StoreScalableGraphics" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestClientStoreScalableGraphics );
    // Print to log file
    iLog->Log( KTestClientStoreScalableGraphics );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    TSize scalableSize( KScalableWidth, KScalableHeight );
    CFbsBitmap* bitmap = AknIconUtils::CreateIconL(
            AknIconUtils::AvkonIconFileName(), EMbmAvkonQgn_graf_tab_21 );
    CleanupStack::PushL( bitmap );
    err = srvSession.StoreScalableGraphics(
            KAknsIIDQgnIndiTpDialler, 1, scalableSize, bitmap, NULL );

    CleanupStack::PopAndDestroy( bitmap );
    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return err;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestClientClearScaGraphicsL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestClientClearScaGraphicsL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestClientClearScalableGraphics, "In SrvClient ClearScalableGraphics" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestClientClearScalableGraphics );
    // Print to log file
    iLog->Log( KTestClientClearScalableGraphics );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    err = srvSession.ClearScalableGraphics();

    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return err;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestClientCopySkinL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestClientCopySkinL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestClientCopySkin, "In SrvClient CopySkin" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestClientCopySkin );
    // Print to log file
    iLog->Log( KTestClientCopySkin );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    err = srvSession.CopySkin( KAknsPIDSkin6, EAknsSrvPhone, EAknsSrvMMC );

    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestClientDeleteSkinL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestClientDeleteSkinL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestClientDeleteSkin, "In SrvClient DeleteSkin" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestClientDeleteSkin );
    // Print to log file
    iLog->Log( KTestClientDeleteSkin );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    err = srvSession.DeleteSkin( KAknsPIDSkin6, EAknsSrvPhone );

    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestClientOpenBitmapFileL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestClientOpenBitmapFileL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestClientOpenBitmapFile, "In SrvClient OpenBitmapFile" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestClientOpenBitmapFile );
    // Print to log file
    iLog->Log( KTestClientOpenBitmapFile );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    TInt fileHandle = 0;
    err = srvSession.OpenBitmapFile( KTxtFilename, fileHandle );

    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestClientOpenInifileL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestClientOpenInifileL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestClientOpenInifile, "In SrvClient OpenInifile" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestClientOpenInifile );
    // Print to log file
    iLog->Log( KTestClientOpenInifile );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    TInt fileHandle = 0;
    err = srvSession.OpenInifile( KAknsPIDSkin6, EAknsSrvPhone,
            fileHandle, EFalse );

    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestClientCopySoundFileL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestClientCopySoundFileL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestClientCopySoundFile, "In SrvClient CopySoundFile" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestClientCopySoundFile );
    // Print to log file
    iLog->Log( KTestClientCopySoundFile );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    _LIT(KTxtSource,"abcd");
    _LIT(KTxtTarget,"efgh");
    err = srvSession.CopySoundFile( KTxtSource, KTxtTarget );

    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestClientDecodeWallpaperImageL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestClientDecodeWallpaperImageL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestClientDecodeWallpaperImageL, "In SrvClient DecodeWallpaperImageL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestClientDecodeWallpaperImageL );
    // Print to log file
    iLog->Log( KTestClientDecodeWallpaperImageL );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    TSize wallSize(-1,-1);
    CFbsBitmap* wallBitmap = NULL;
    CFbsBitmap* wallmaskBitmap = NULL;
    _LIT( KTxtDecodeFinename, "aaaa.svg" );
    CleanupStack::PushL( wallBitmap );
    CleanupStack::PushL( wallmaskBitmap );
    srvSession.DecodeWallpaperImageL( KTxtDecodeFinename,
        wallSize, wallBitmap, wallmaskBitmap );

    CleanupStack::Pop( wallmaskBitmap );
    delete wallmaskBitmap;
    wallmaskBitmap = NULL;
    CleanupStack::Pop( wallBitmap );
    delete wallBitmap;
    wallBitmap = NULL;
    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestClientOpenImageInifileL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestClientOpenImageInifileL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestClientOpenImageInifile, "In SrvClient OpenImageInifile" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestClientOpenImageInifile );
    // Print to log file
    iLog->Log( KTestClientOpenImageInifile );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    TInt imageFileHandle = 0 ;
    err = srvSession.OpenImageInifile( EAknsSrvInifileSSWP, imageFileHandle );

    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestClientSetSlideSetWallpaperL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestClientSetSlideSetWallpaperL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestClientSetSlideSetWallpaper, "In SrvClient SetSlideSetWallpaper" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestClientSetSlideSetWallpaper );
    // Print to log file
    iLog->Log( KTestClientSetSlideSetWallpaper );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    CDesCArray* array = new (ELeave) CDesC16ArrayFlat( KGranularity );
    CleanupStack::PushL( array );
    _LIT( KTxtAaa, "aaaa.bmp" );
    array->AppendL( KTxtAaa );
    _LIT( KTxtBbb, "bbbb.bmp" );
    array->AppendL( KTxtBbb );

    err = srvSession.SetSlideSetWallpaper( *array );

    CleanupStack::PopAndDestroy( array );
    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return err;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestClientFreeUnnecLayBmpsL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestClientFreeUnnecLayBmpsL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestClientFreeUnnecessaryLayoutBitmaps, "In SrvClient FreeUnnecessaryLayoutBitmaps" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestClientFreeUnnecessaryLayoutBitmaps );
    // Print to log file
    iLog->Log( KTestClientFreeUnnecessaryLayoutBitmaps );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    srvSession.FreeUnnecessaryLayoutBitmaps( EAknsSrcScrModeNone );

    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestClientCheckIconConfigL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestClientCheckIconConfigL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestClientCheckIconConfiguration, "In SrvClient CheckIconConfiguration" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestClientCheckIconConfiguration );
    // Print to log file
    iLog->Log( KTestClientCheckIconConfiguration );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    TInt config = srvSession.CheckIconConfiguration( KAknsUIDDefaultSystemSkin );
    STIF_ASSERT_EQUALS( 0, config );

    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

