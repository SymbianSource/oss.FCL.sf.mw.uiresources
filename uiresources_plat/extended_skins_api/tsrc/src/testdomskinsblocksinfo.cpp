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
* Description:  test aknssrvskininformationpkg.h
*
*/



#include <aknssrvskininformationpkg.h>
#include <aknssrvclient.h>

#include "testdomskins.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestInfoPIDL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestInfoPIDL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestInfoPID, "In SkinInfoPkg PID" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestInfoPID );
    // Print to log file
    iLog->Log( KTestInfoPID );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    CArrayPtr<CAknsSrvSkinInformationPkg>* skinInfoPkgs =
        srvSession.EnumerateSkinPackagesL();
    CleanupStack::PushL( skinInfoPkgs );
    CAknsSrvSkinInformationPkg* srvSkinInfoPkg = ( *skinInfoPkgs )[0];

    TAknsPkgID pkgId = srvSkinInfoPkg->PID();
    STIF_ASSERT_EQUALS( 0, pkgId.iTimestamp );

    TInt skinCount = skinInfoPkgs->Count();
    for ( TInt i=0; i < skinCount; i++ )
        {
        delete ( *skinInfoPkgs )[i];
        }

    CleanupStack::PopAndDestroy( skinInfoPkgs );
    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestInfoDirectoryL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestInfoDirectoryL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestInfoDirectory, "In SkinInfoPkg Directory" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestInfoDirectory );
    // Print to log file
    iLog->Log( KTestInfoDirectory );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    CArrayPtr<CAknsSrvSkinInformationPkg>* skinInfoPkgs =
        srvSession.EnumerateSkinPackagesL();
    CleanupStack::PushL( skinInfoPkgs );
    CAknsSrvSkinInformationPkg* srvSkinInfoPkg = ( *skinInfoPkgs )[0];

    TDesC& direct = srvSkinInfoPkg->Directory();
    STIF_ASSERT_NOT_EQUALS( 0, direct.Length() );

    TInt skinCount = skinInfoPkgs->Count();
    for ( TInt i=0; i < skinCount; i++ )
        {
        delete ( *skinInfoPkgs )[i];
        }

    CleanupStack::PopAndDestroy( skinInfoPkgs );
    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestInfoIniFileDirectoryL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestInfoIniFileDirectoryL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestInfoIniFileDirectory, "In SkinInfoPkg IniFileDirectory" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestInfoIniFileDirectory );
    // Print to log file
    iLog->Log( KTestInfoIniFileDirectory );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    CArrayPtr<CAknsSrvSkinInformationPkg>* skinInfoPkgs =
        srvSession.EnumerateSkinPackagesL();
    CleanupStack::PushL( skinInfoPkgs );
    CAknsSrvSkinInformationPkg* srvSkinInfoPkg = ( *skinInfoPkgs )[0];

    TDesC& iniFileDirect = srvSkinInfoPkg->IniFileDirectory();
    STIF_ASSERT_NOT_EQUALS( 0, iniFileDirect.Length() );

    TInt skinCount = skinInfoPkgs->Count();
    for ( TInt i=0; i < skinCount; i++ )
        {
        delete ( *skinInfoPkgs )[i];
        }

    CleanupStack::PopAndDestroy( skinInfoPkgs );
    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestInfoNameL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestInfoNameL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestInfoName, "In SkinInfoPkg Name" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestInfoName );
    // Print to log file
    iLog->Log( KTestInfoName );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    CArrayPtr<CAknsSrvSkinInformationPkg>* skinInfoPkgs =
        srvSession.EnumerateSkinPackagesL();
    CleanupStack::PushL( skinInfoPkgs );
    CAknsSrvSkinInformationPkg* srvSkinInfoPkg = ( *skinInfoPkgs )[0];

    TDesC& skinName = srvSkinInfoPkg->Name();
    STIF_ASSERT_NOT_EQUALS( 0, skinName.Length() );

    TInt skinCount = skinInfoPkgs->Count();
    for ( TInt i=0; i < skinCount; i++ )
        {
        delete ( *skinInfoPkgs )[i];
        }

    CleanupStack::PopAndDestroy( skinInfoPkgs );
    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestInfoIdleStateWallFileNameL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestInfoIdleStateWallFileNameL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestInfoIdleStateWallPaperImageFileName, "In SkinInfoPkg IdleStateWallPaperImageFileName" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestInfoIdleStateWallPaperImageFileName );
    // Print to log file
    iLog->Log( KTestInfoIdleStateWallPaperImageFileName );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    CArrayPtr<CAknsSrvSkinInformationPkg>* skinInfoPkgs =
        srvSession.EnumerateSkinPackagesL();
    CleanupStack::PushL( skinInfoPkgs );
    CAknsSrvSkinInformationPkg* srvSkinInfoPkg = ( *skinInfoPkgs )[0];

    TDesC& idleStateFileName = srvSkinInfoPkg->IdleStateWallPaperImageFileName();
    STIF_ASSERT_EQUALS( 0, idleStateFileName.Length() );

    TInt skinCount = skinInfoPkgs->Count();
    for ( TInt i=0; i < skinCount; i++ )
        {
        delete ( *skinInfoPkgs )[i];
        }

    CleanupStack::PopAndDestroy( skinInfoPkgs );
    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestInfoPinboarWallFileNameL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestInfoPinboarWallFileNameL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestInfoPinboarWallPaperImageFileName, "In SkinInfoPkg PinboarWallPaperImageFileName" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestInfoPinboarWallPaperImageFileName );
    // Print to log file
    iLog->Log( KTestInfoPinboarWallPaperImageFileName );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    CArrayPtr<CAknsSrvSkinInformationPkg>* skinInfoPkgs =
        srvSession.EnumerateSkinPackagesL();
    CleanupStack::PushL( skinInfoPkgs );
    CAknsSrvSkinInformationPkg* srvSkinInfoPkg = ( *skinInfoPkgs )[0];

    TDesC& pinboarFileName = srvSkinInfoPkg->PinboarWallPaperImageFileName();
    STIF_ASSERT_EQUALS( 0, pinboarFileName.Length() );

    TInt skinCount = skinInfoPkgs->Count();
    for ( TInt i=0; i < skinCount; i++ )
        {
        delete ( *skinInfoPkgs )[i];
        }

    CleanupStack::PopAndDestroy( skinInfoPkgs );
    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestInfoIdleStateWallIndexL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestInfoIdleStateWallIndexL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestInfoIdleStateWallPaperImageIndex, "In SkinInfoPkg IdleStateWallPaperImageIndex" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestInfoIdleStateWallPaperImageIndex );
    // Print to log file
    iLog->Log( KTestInfoIdleStateWallPaperImageIndex );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    CArrayPtr<CAknsSrvSkinInformationPkg>* skinInfoPkgs =
        srvSession.EnumerateSkinPackagesL();
    CleanupStack::PushL( skinInfoPkgs );
    CAknsSrvSkinInformationPkg* srvSkinInfoPkg = ( *skinInfoPkgs )[0];

    TInt idleStateIndex = srvSkinInfoPkg->IdleStateWallPaperImageIndex();
    STIF_ASSERT_EQUALS( 0, idleStateIndex );

    TInt skinCount = skinInfoPkgs->Count();
    for ( TInt i=0; i < skinCount; i++ )
        {
        delete ( *skinInfoPkgs )[i];
        }

    CleanupStack::PopAndDestroy( skinInfoPkgs );
    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestInfoPinboardWallIndexL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestInfoPinboardWallIndexL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestInfoPinboardWallPaperImageIndex, "In SkinInfoPkg PinboardWallPaperImageIndex" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestInfoPinboardWallPaperImageIndex );
    // Print to log file
    iLog->Log( KTestInfoPinboardWallPaperImageIndex );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    CArrayPtr<CAknsSrvSkinInformationPkg>* skinInfoPkgs =
        srvSession.EnumerateSkinPackagesL();
    CleanupStack::PushL( skinInfoPkgs );
    CAknsSrvSkinInformationPkg* srvSkinInfoPkg = ( *skinInfoPkgs )[0];

    TInt pinboardIndex = srvSkinInfoPkg->PinboardWallPaperImageIndex();
    STIF_ASSERT_EQUALS( 0, pinboardIndex );

    TInt skinCount = skinInfoPkgs->Count();
    for ( TInt i=0; i < skinCount; i++ )
        {
        delete ( *skinInfoPkgs )[i];
        }

    CleanupStack::PopAndDestroy( skinInfoPkgs );
    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestInfoIsDeletableL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestInfoIsDeletableL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestInfoIsDeletable, "In SkinInfoPkg IsDeletable" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestInfoIsDeletable );
    // Print to log file
    iLog->Log( KTestInfoIsDeletable );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    CArrayPtr<CAknsSrvSkinInformationPkg>* skinInfoPkgs =
        srvSession.EnumerateSkinPackagesL();
    CleanupStack::PushL( skinInfoPkgs );
    CAknsSrvSkinInformationPkg* srvSkinInfoPkg = ( *skinInfoPkgs )[0];

    TBool isDel = srvSkinInfoPkg->IsDeletable();
    STIF_ASSERT_FALSE( isDel );

    TInt skinCount = skinInfoPkgs->Count();
    for ( TInt i=0; i < skinCount; i++ )
        {
        delete ( *skinInfoPkgs )[i];
        }

    CleanupStack::PopAndDestroy( skinInfoPkgs );
    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestInfoIsCopyableL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestInfoIsCopyableL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestInfoIsCopyable, "In SkinInfoPkg IsCopyable" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestInfoIsCopyable );
    // Print to log file
    iLog->Log( KTestInfoIsCopyable );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    CArrayPtr<CAknsSrvSkinInformationPkg>* skinInfoPkgs =
        srvSession.EnumerateSkinPackagesL();
    CleanupStack::PushL( skinInfoPkgs );
    CAknsSrvSkinInformationPkg* srvSkinInfoPkg = ( *skinInfoPkgs )[0];

    TBool isCopy = srvSkinInfoPkg->IsCopyable();
    STIF_ASSERT_FALSE( isCopy );

    TInt skinCount = skinInfoPkgs->Count();
    for ( TInt i=0; i < skinCount; i++ )
        {
        delete ( *skinInfoPkgs )[i];
        }

    CleanupStack::PopAndDestroy( skinInfoPkgs );
    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestInfoColorSchemePIDL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestInfoColorSchemePIDL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestInfoColorSchemePID, "In SkinInfoPkg ColorSchemePID" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestInfoColorSchemePID );
    // Print to log file
    iLog->Log( KTestInfoColorSchemePID );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    CArrayPtr<CAknsSrvSkinInformationPkg>* skinInfoPkgs =
        srvSession.EnumerateSkinPackagesL();
    CleanupStack::PushL( skinInfoPkgs );
    CAknsSrvSkinInformationPkg* srvSkinInfoPkg = ( *skinInfoPkgs )[0];

    TAknsPkgID colorPid = srvSkinInfoPkg->ColorSchemePID();
    STIF_ASSERT_EQUALS( 0, colorPid.iTimestamp );

    TInt skinCount = skinInfoPkgs->Count();
    for ( TInt i=0; i < skinCount; i++ )
        {
        delete ( *skinInfoPkgs )[i];
        }

    CleanupStack::PopAndDestroy( skinInfoPkgs );
    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestInfoHasIconsetL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestInfoHasIconsetL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestInfoHasIconset, "In SkinInfoPkg HasIconset" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestInfoHasIconset );
    // Print to log file
    iLog->Log( KTestInfoHasIconset );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    CArrayPtr<CAknsSrvSkinInformationPkg>* skinInfoPkgs =
        srvSession.EnumerateSkinPackagesL();
    CleanupStack::PushL( skinInfoPkgs );
    CAknsSrvSkinInformationPkg* srvSkinInfoPkg = ( *skinInfoPkgs )[0];

    TBool hasIconset = srvSkinInfoPkg->HasIconset();
    STIF_ASSERT_FALSE( hasIconset );

    TInt skinCount = skinInfoPkgs->Count();
    for ( TInt i=0; i < skinCount; i++ )
        {
        delete ( *skinInfoPkgs )[i];
        }

    CleanupStack::PopAndDestroy( skinInfoPkgs );
    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestInfoProtectionTypeL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestInfoProtectionTypeL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestInfoProtectionType, "In SkinInfoPkg ProtectionType" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestInfoProtectionType );
    // Print to log file
    iLog->Log( KTestInfoProtectionType );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    CArrayPtr<CAknsSrvSkinInformationPkg>* skinInfoPkgs =
        srvSession.EnumerateSkinPackagesL();
    CleanupStack::PushL( skinInfoPkgs );
    CAknsSrvSkinInformationPkg* srvSkinInfoPkg = ( *skinInfoPkgs )[0];

    TAknsSkinSrvSkinProtectionType proType = srvSkinInfoPkg->ProtectionType();
    STIF_ASSERT_EQUALS( EAknsSrvNoProtection, proType );

    TInt skinCount = skinInfoPkgs->Count();
    for ( TInt i=0; i < skinCount; i++ )
        {
        delete ( *skinInfoPkgs )[i];
        }

    CleanupStack::PopAndDestroy( skinInfoPkgs );
    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestInfoIsCorruptedL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestInfoIsCorruptedL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestInfoIsCorrupted, "In SkinInfoPkg IsCorrupted" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestInfoIsCorrupted );
    // Print to log file
    iLog->Log( KTestInfoIsCorrupted );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    CArrayPtr<CAknsSrvSkinInformationPkg>* skinInfoPkgs =
        srvSession.EnumerateSkinPackagesL();
    CleanupStack::PushL( skinInfoPkgs );
    CAknsSrvSkinInformationPkg* srvSkinInfoPkg = ( *skinInfoPkgs )[0];

    TBool isCorrupt = srvSkinInfoPkg->IsCorrupted();
    STIF_ASSERT_FALSE( isCorrupt );

    TInt skinCount = skinInfoPkgs->Count();
    for ( TInt i=0; i < skinCount; i++ )
        {
        delete ( *skinInfoPkgs )[i];
        }

    CleanupStack::PopAndDestroy( skinInfoPkgs );
    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestInfoFullNameL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestInfoFullNameL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestInfoFullName, "In SkinInfoPkg FullName" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestInfoFullName );
    // Print to log file
    iLog->Log( KTestInfoFullName );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    CArrayPtr<CAknsSrvSkinInformationPkg>* skinInfoPkgs =
        srvSession.EnumerateSkinPackagesL();
    CleanupStack::PushL( skinInfoPkgs );
    CAknsSrvSkinInformationPkg* srvSkinInfoPkg = ( *skinInfoPkgs )[0];

    TDesC& fullName = srvSkinInfoPkg->FullName();
    STIF_ASSERT_NOT_EQUALS( 0, fullName.Length() );

    TInt skinCount = skinInfoPkgs->Count();
    for ( TInt i=0; i < skinCount; i++ )
        {
        delete ( *skinInfoPkgs )[i];
        }

    CleanupStack::PopAndDestroy( skinInfoPkgs );
    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

