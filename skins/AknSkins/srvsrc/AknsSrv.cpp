/*
* Copyright (c) 2002-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Skin server core class.
*
*/


// INCLUDE FILES
#include "AknsSrv.h"

#include <e32svr.h>
#include <AknLayoutDef.h>
#include <DRMHelper.h>
#include <Oma2Agent.h>
#include <bautils.h>
#include <hal.h>
#include <AknSkinsInternalCRKeys.h>
#include <centralrepository.h>
#include "tfxconfigparser.h"
#include <TfxSrvEcomIds.h>
#include <apgwgnam.h>


#include "AknsSrvSettings.h"
#include "AknsSrvScheduler.h"
#include "AknsSkinContent.h"
#include <AknsSkinUID.h>
#include "AknsSrvUtils.h"
#include "AknsSrvExclusion.h"
#include "AknsSrvBitmapStore.h"
#include "aknssrvwallpaperscaling.h"
#include "aknssrvactivedataowner.h"
#include "AknsDriveMaster.h"
#include "aknssrviconconfigmap.h"

#include "AknsDebug.h"

_LIT(KTFxDefaultExtensionPath, "z:\\resource\\skins\\");
_LIT(KTFxExtFileExt, ".sel");

// Extension for ini file.
_LIT( KAknsSkinSrvIniFileExt, ".ini" );

// Extension for scalable vector graphics file.
_LIT( KAknsSkinSrvSvgFileExt, ".svg" );

// No wallpaper
const TInt KAknsSkinSrvNoWallpaper = 0;
// Image wallpaper
const TInt KAknsSkinSrvImageWallpaper = 1;
// Slideset wallpaper type
const TInt KAknsSkinSrvSlidesetWallpaper = 2;

// Filenames and locations of slideset ini-files.
_LIT( KAknsSrvSSSSInifile, "\\private\\10207114\\SSSS.ini");
_LIT( KAknsSrvSSWPInifile, "\\private\\10207114\\SSWP.ini");

const TUint KSlidesetEnableAppUid[] = {
    0x100056cf,    // ScreenSaver
    0x102750f0,    // ActiveIdle
    0x10005a32,    // Psln
    0x10207218,    // CapServer
    0x00000000     // Empty
    };

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsSrv::CAknsSrv
// C++ constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CAknsSrv::CAknsSrv() :
    CServer2( CActive::EPriorityStandard),
    iNotifyEnabled( ETrue ),
    iContentChanged( EFalse ),
    iOutstandingChangeEvents( 0 )
    {
    }

// -----------------------------------------------------------------------------
// CAknsSrv::New
// -----------------------------------------------------------------------------
//
CAknsSrv* CAknsSrv::New( TBool &aStartFailed )
    {
    AKNS_TRACE_INFO("CAknsSrv::New STARTED");

	aStartFailed = EFalse;
	
    CAknsSrv* server = new CAknsSrv();
    if ( !server )
        {
        AKNS_TRACE_ERROR("CAknsSrv::New SERVER ALLOCATION FAILED!");
        return NULL;
        }

    server->iMergeType = (TAknsSkinSrvMergeType)(
        EAknsSkinSrvSkin | EAknsSkinSrvIdleWp );
    server->iBootFinished = EFalse;
    if (server->Start(KAknSkinSrvName) != KErrNone)
        {
        AKNS_TRACE_ERROR("CAknsSrv::New START FAILED!");

        aStartFailed = ETrue;
        delete server;
        return NULL;
        }

    server->iBitmapStore = new CAknsSrvBitmapStore;
    if( !server->iBitmapStore )
        {
        AKNS_TRACE_ERROR("CAknsSrv::New BITMAPSTORE CREATION FAILED!");
        delete server;
        return NULL;
        }
    server->iChunkMaintainer =
        new CAknsSrvChunkMaintainer(server->iBitmapStore);
    if( !server->iChunkMaintainer )
        {
        AKNS_TRACE_ERROR("CAknsSrv::New CHUNK CREATION FAILED!");
        delete server;
        return NULL;
        }

    TInt err = server->iFsSession.Connect();
    AKNS_TRACE_INFO1("CAknsSrv::New RFs connected, ret=%d", err);

    AKNS_TRACE_INFO("CAknsSrv::New server up, connecting shared data");

    TInt errorCode( KErrNone );
    TRAP( errorCode, (server->iSettings=CAknsSrvSettings::NewL(server, server->iFsSession )) );
    if( errorCode )
        {
        AKNS_TRACE_ERROR("CAknsSrv::New SETTING MANAGER CREATION FAILED!");
        delete server;
        return NULL;
        }

    AKNS_TRACE_INFO("CAknsSrv::New Settings manager created");

    TRAPD( exlListErr, server->iExclusionList =
        CAknsSrvExclusionList::NewL() );
    AKNS_TRACE_INFO1("CAknsSrv::New Exclusion list init, ret=%d", exlListErr);
    if( exlListErr == KErrNone )
        {
        TRAP( exlListErr, server->iExclusionList->LoadDefaultListFromFileL( server->iFsSession ) );
        AKNS_TRACE_INFO1("CAknsSrv::New Exclusion list loaded, ret=%d", exlListErr);
        if( exlListErr != KErrNone )
            {
            delete server->iExclusionList;
            server->iExclusionList = NULL;
            }
        }

    // Connection to Fbs-server is needed for server side bitmaps
    // and should allways be kept connected.
    err = server->iFbsSession.Connect();
    AKNS_TRACE_INFO1("CAknsSrv::New FBS connected, ret=%d", err);

    TRAP( errorCode, server->iSettings->InstallAdditionalWatchersL() );
    AKNS_TRACE_INFO1("CAknsSrv::New Additional watchers installed, ret=%d", errorCode);
    
    server->InitSlidesetEnableAppUid();

    TRAP_IGNORE( server->InitMaxImageSizeL() );
    
    TRAP( errorCode,server->iWallpaperCache = CAknsSrvWallpaperCache::NewL( KAknsWallpaperCacheSize ) );
    
    AKNS_TRACE_INFO("CAknsSrv::New PrepareMergedSkinContentL");
    TRAPD( mergeErr, server->PrepareMergedSkinContentL() );
    if( mergeErr != KErrNone )
        {
        AKNS_TRACE_ERROR1("CAknsSrv::New MERGE ERROR %i", mergeErr);
        server->SetDefaultSkinActive();
        server->RestoreDefaultSDSettings();
        TRAP( mergeErr, server->PrepareMergedSkinContentL() );
        AKNS_TRACE_INFO1("CAknsSrv::New FALLBACK MERGE, ret=%d", mergeErr);
        __ASSERT_DEBUG( mergeErr==KErrNone, User::Panic(
            KAknSkinSrvPanicCategory, EAknsSrvFatalMergeFailure ) );
        }

    TRAP(err, server->iBackupSession = CBaBackupSessionWrapper::NewL() );
    AKNS_TRACE_INFO1("CAknsSrv::New Backup session wrapper created, ret=%d", err);
    if( server->iBackupSession )
        {
        TRAP(err, server->iBackupSession->RegisterBackupOperationObserverL(
            *(server->iSettings) ) );
        AKNS_TRACE_INFO1("CAknsSrv::New Backup observer registered, ret=%d", err);
        }
    TRAP( err, server->iBackupNotifier = CAknsSrvActiveDataOwner::NewL( server->iFsSession ) );
    AKNS_TRACE_INFO1("CAknsSrv::New Backup notifier created, ret=%d", err);

    AKNS_TRACE_INFO("CAknsSrv::New COMPLETED");

    TRAP(err,server->iInstallObserver = CAknsSrvFileObserver::NewL(server));
    server->iInstallObserver->IssueRequest();

    server->iMergeType =  EAknsSkinSrvNone;
    server->iBootFinished = ETrue;
    server->iWallpaperType = server->iSettings->WallpaperType();

    
    return server;
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsSrv::~CAknsSrv()
    {
    // In theory we should never get here, since the server is always running.

   delete iWPFilename;
   iWPFilename = NULL;

    if( iBackupSession )
        {
        iBackupSession->DeRegisterBackupOperationObserver( *iSettings );
        delete iBackupSession;
        iBackupSession = NULL;
        }
    delete iExclusionList;
    delete iSettings;
    delete iInstallObserver;
    delete iWallpaperObserver;
    iFbsSession.Disconnect();
    iFsSession.Close();
    iSknFile.Close();

    delete iDrmHelper;
    delete iBitmapStore;
    delete iChunkMaintainer;
    delete iSkinContentUri;
    delete iIdleWPContentUri;
    delete iSkinContentUri2;
    delete iIdleWPContentUri2;

    delete iWallpaperTimer;

    delete iSlideSetObserver;
    if ( iSlideSetNameArray )
        {
        iSlideSetNameArray->Reset();
        }
    delete iSlideSetNameArray;
    delete iBackupNotifier;
    delete iIconConfigMap;
    
    iWallpaperCache->ResetAndDestory( );
    
    iSlidesetEnableAppUidArray.Close();
    }

// -----------------------------------------------------------------------------
// CAknsSrv::NewSessionL
// -----------------------------------------------------------------------------
//
CSession2* CAknsSrv::NewSessionL(const TVersion& aVersion, const RMessage2& /*aMessage*/) const
    {
    // Check that we're the right version
    TVersion v( KAknSkinSrvMajorVersionNumber,
        KAknSkinSrvMinorVersionNumber,
        KAknSkinSrvBuildVersionNumber);
    if ( !User::QueryVersionSupported(v, aVersion) )
        {
        User::Leave( KErrNotSupported );
        }
    // Make a new session
    return new(ELeave) CAknsSrvSession( );
    }

// -----------------------------------------------------------------------------
// CAknSkinSrv::ThreadStart()
// The skin server thread.
// -----------------------------------------------------------------------------
//
EXPORT_C TInt CAknsSrv::ThreadStart()
    {
    // Rename own thread
    User::RenameThread(KAknSkinSrvName);

    CAknsSrv* server = NULL;
    CTrapCleanup* cleanup = CTrapCleanup::New();
    CActiveScheduler* scheduler = new CAknsSrvScheduler;
    TInt err(KErrNone);

	TBool startFailed(EFalse);
	
    if ( cleanup && scheduler )
        {
        CActiveScheduler::Install( scheduler );
        server = CAknsSrv::New( startFailed );   // Adds server in scheduler
        }

    if ( !cleanup || !scheduler || !server )
        {
        delete cleanup;
        delete scheduler;
        delete server;
        
        err = KErrNoMemory;
        
        if(startFailed)
        	{
        	// Server Start call failed (means really that the server already existed)	
        	err = KErrAlreadyExists;
        	}
        
        }
    if ( err == KErrNone )
        {
        // Prevent killing skin  server from other processes
        User::SetProcessCritical(User::ESystemCritical);
        User::SetCritical(User::ESystemCritical);

        // Signal that we've started
        RProcess::Rendezvous(KErrNone);

        // Start fielding requests from clients
        CActiveScheduler::Start();

        // Comes here if server gets shut down
        delete scheduler;   //lint !e644 Initialized
        delete cleanup;     //lint !e644 Initialized
        delete server;      //lint !e644 Initialized
        }

    // Thread/process exit
    return( err );
    }

// -----------------------------------------------------------------------------
// CAknsSrv::NotifyBackupOperationEnd
// -----------------------------------------------------------------------------
//
void CAknsSrv::NotifyBackupOperationEnd()
    {
    RestoreOldSkin();
    }

// -----------------------------------------------------------------------------
// CAknsSrv::NotifyLayoutChange
// -----------------------------------------------------------------------------
//
void CAknsSrv::NotifyLayoutChange(TBool aClearScalable)
    {
#ifdef __WINS__
// for emulator only, flush the cache also as
// it is possible to perform "illegal" layout changes
// ie. landscape -> landscape

    if (aClearScalable)
        {
        iChunkMaintainer->ClearScalableGraphics(EAknsSrcScrModeNone);
        }

#endif // __WINS__
    iContentChanged = ETrue;

    if( !iSettings->CachedBackupOperationInProgress() )
        {
        MergeAndBroadcast();
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrv::NotifySkinChange
// -----------------------------------------------------------------------------
//
void CAknsSrv::NofifySkinChange()
    {
    if (iUSBAttached)
        {
        return;
        }
    iContentChanged = ETrue;

    if( !iSettings->CachedBackupOperationInProgress() )
        {
        MergeAndBroadcast();
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrv::NotifyIdleBackgroundChange
// -----------------------------------------------------------------------------
//
void CAknsSrv::NotifyIdleBackgroundChange()
    {
    iContentChanged = ETrue;
    iMergeType = (TAknsSkinSrvMergeType)(iMergeType | EAknsSkinSrvIdleWp);

    if( !iSettings->CachedBackupOperationInProgress() )
        {
        MergeAndBroadcast();
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrv::NotifyDRMChange
// -----------------------------------------------------------------------------
//
void CAknsSrv::NotifyDRMChange()
    {
    TRAP_IGNORE ( NotifyDRMChangeL() );
    }

// -----------------------------------------------------------------------------
// CAknsSrv::NotifyDRMChangeL
// -----------------------------------------------------------------------------
//
void CAknsSrv::NotifyDRMChangeL()
    {
    AKNS_TRACE_INFO("CAknsSrv::NofifyDRMChange - DrmHelper notification");
    CheckAndCreateDRMHelper();

    TInt size = 256;
    HBufC* buf = HBufC::NewLC(size);
    TPtr bufPtr = buf->Des();

    TInt error = iSettings->ReadDRMHelperServerNotification( bufPtr );
    AKNS_TRACE_INFO1("CAknsSrv::NofifyDRMChange - ReadDRMHelperServerNotification: %d", error );

    HBufC8* buf8 = HBufC8::New((buf->Length())*2);
    CleanupStack::PushL(buf8);
    const unsigned char* ptr = (const unsigned char*)(buf->Ptr());

    buf8->Des().Copy(ptr,(buf->Length())*2);
    TInt8 count = (TInt8)(*(buf8->Ptr()));
    TChar mark = (TChar)(*(buf8->Ptr()+1));
    TInt8 permtype = (TChar)(*(buf8->Ptr()+2));
    TInt8 automcontenttype = (TChar)(*(buf8->Ptr()+3));
    TBuf8<256> curi = buf8->Right( buf8->Length()-4);
    if (curi.Ptr()[curi.Size()-1] == 0)
        {
        // The last character in the descriptor is 0, which means
        // that the original 16-bit desc was padded so
        // remove the last char...
        curi.SetLength(curi.Size()-1);
        }

    if (mark == 'V')
        {
        AKNS_TRACE_INFO1("CAknsSrv::NotifyDRMChange DrmHelper notification type V received, count=%d",count);
        if (count > 0)
            {
            if (iSkinContentUri && iSkinContentUri->Compare(curi) == 0)
                {
                AKNS_TRACE_INFO("CAknsSrv::NotifyDRMChange Skin is valid but about to expire");
                iDrmHelper->SetAutomatedType(CDRMHelper::EAutomatedTypeTheme);
                iDrmHelper->CheckRightsAmountL( *iSkinContentUri);
                }
            if ( iIdleWPContentUri && iIdleWPContentUri->Compare(curi) == 0)
                {
                AKNS_TRACE_INFO("CAknsSrv::NotifyDRMChange IdleWP is valid but about to expire");
                iDrmHelper->SetAutomatedType(CDRMHelper::EAutomatedTypeWallpaper);
                iDrmHelper->CheckRightsAmountL( *iIdleWPContentUri);
                }
            }
        }
    else if (mark == 'E')
        {
        AKNS_TRACE_INFO1("CAknsSrv::NotifyDRMChange DrmHelper notification type E received, count=%d",count);

        if (count == 0)
            {
            // Expire skins here..., no note
            if (iSkinContentUri && iSkinContentUri->Compare(curi) == 0)
                {
                AKNS_TRACE_INFO("CAknsSrv::NotifyDRMChange Skin is expired");
                iSkinContentUri2 = (*iSkinContentUri).AllocL();
                delete iSkinContentUri; iSkinContentUri = NULL;
                RestoreDefaultSkin();
                // Merge and broadcast
                iContentChanged = ETrue;
                MergeAndBroadcast();
                // Also notify potential package list update
                ForceNotifySessions(EAknsSCHNPackageListUpdate);
                }
            if (iIdleWPContentUri && iIdleWPContentUri->Compare(curi) == 0)
                {
                AKNS_TRACE_INFO("CAknsSrv::NotifyDRMChange IdleWP is expired");
                iIdleWPContentUri2 = (*iIdleWPContentUri).AllocL();
                delete iIdleWPContentUri; 
                iIdleWPContentUri = NULL;
                
                if ( iWallpaperType == KAknsSkinSrvSlidesetWallpaper )
                    {
                    TBool isProtected = EFalse;
                    if ( iSlideSetNameArray && iSlideSetNameArray->MdcaCount() )
                        {
                        TFileName wallpaper;
                        iSettings->ReadIdleBackgroundFile( wallpaper );
                        CheckImageL( wallpaper, isProtected );
                        }
                    if ( isProtected )
                        {
                        iCurrentSlide = iCurrentSlide ? (iCurrentSlide - 1): (iSlideSetNameArray->MdcaCount() - 1);
                        WallpaperTimerTimeoutL( ETrue );
                        }
                    }
                else
                    {
                    RestoreDefaultIdleWP();
                    // Merge and broadcast
                    iContentChanged = ETrue;
                    MergeAndBroadcast();
                    // Also notify potential package list update
                    ForceNotifySessions(EAknsSCHNPackageListUpdate);
                    }
                }
            }
        else if (count > 0)
            {
            // Show expiration notes...
            if (iSkinContentUri2 && iSkinContentUri2->Compare(curi) == 0)
                {
                AKNS_TRACE_INFO("CAknsSrv::NotifyDRMChange: RemoveAutomated called for skin");
                iDrmHelper->SetAutomatedType(CDRMHelper::EAutomatedTypeTheme);
                iDrmHelper->CheckRightsAmountL( *iSkinContentUri2);
                User::LeaveIfError(iDrmHelper->RemoveAutomated( *iSkinContentUri2 ));
                delete iSkinContentUri2;
                iSkinContentUri2 = NULL;
                }
            if (iIdleWPContentUri2 && iIdleWPContentUri2->Compare(curi) == 0)
                {
                AKNS_TRACE_INFO("CAknsSrv::NotifyDRMChange: RemoveAutomated called for idlewp");
                iDrmHelper->SetAutomatedType(CDRMHelper::EAutomatedTypeWallpaper);
                iDrmHelper->CheckRightsAmountL( *iIdleWPContentUri2);
                User::LeaveIfError(iDrmHelper->RemoveAutomated( *iIdleWPContentUri2 ));
                delete iIdleWPContentUri2;
                iIdleWPContentUri2 = NULL;
                }
            }
        }

    CleanupStack::PopAndDestroy(2); //buf, buf8
    }

// -----------------------------------------------------------------------------
// CAknsSrv::NotifySlideSetTimeoutChange
// -----------------------------------------------------------------------------
//
void CAknsSrv::NotifySlideSetTimeoutChange()
    {
    // If timeout has not changed, then resume.
    TInt newtimeout = iSettings->SlideSetWPTimeout();
    if (iWallpaperTimer && iWallpaperTimer->Interval() == newtimeout)
        {
        return;
        }
    // only do this if slideset is selected
    if ( iSettings->WallpaperType() == KAknsSkinSrvSlidesetWallpaper &&
         iSlideSetNameArray )
        {
        TRAP_IGNORE( SetSlideSetTimerActiveL() );
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrv::NotifySlideSetTypeChange
// -----------------------------------------------------------------------------
//
void CAknsSrv::NotifySlideSetTypeChange()
    {
    }

// -----------------------------------------------------------------------------
// CAknsSrv::NotifyWallpaperTypeChange
// -----------------------------------------------------------------------------
//
void CAknsSrv::NotifyWallpaperTypeChange()
    {
    if ( iSlideSetObserver )
        {
        iSlideSetObserver->Cancel();
        }
    delete iSlideSetObserver;
    iSlideSetObserver = NULL;

    TInt newtype = iSettings->WallpaperType();
    // do nothing if the type does not change
    if (newtype != iWallpaperType)
        {
        // none
        if ( newtype == KAknsSkinSrvNoWallpaper )
            {
            WallpaperLost();
            }
        // normal
        else if ( newtype == KAknsSkinSrvImageWallpaper )
            {
            TFileName filename;
            TInt error = iSettings->ReadIdleBackgroundFile( filename );
            if( (error == KErrNone) && (filename.Length()>0))
                {
                if (AknsSrvUtils::IsFile( iFsSession, filename ) )
                    {
                    TRAP_IGNORE(
                        SetWallpaperL( filename,KAknsIIDWallpaper ) );
                    }
                else
                    {
                    iSettings->WriteIdleBackgroundToDefault();
                    }
                }
            }
        //slideset
        else if ( newtype == KAknsSkinSrvSlidesetWallpaper )
            {
            TRAPD( err, SetSlidesetWallpaperL());
            if ( err != KErrNone )
                {
                iSettings->WriteIdleBackgroundToDefault();
                }
            }
        iWallpaperType = iSettings->WallpaperType();
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrv::NotifyScreenSaverChange
// -----------------------------------------------------------------------------
//
void CAknsSrv::NotifyScreenSaverChange()
    {
    // If screensaver is now off => try to change the image.
    TInt newValue = iSettings->ScreensaverState();
    if ( newValue == 0 )
        {
        TRAP_IGNORE( WallpaperTimerTimeoutL() );
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrv::NotifyTransitionFxChange
// -----------------------------------------------------------------------------
//
void CAknsSrv::NotifyTransitionFxChange()
    {
    if (iSettings->TransitionFxState() == KMaxTInt)
        {
        StopTransitionSrv();
        }
    else
        {
        TRAPD(err,StartTransitionSrvL());
        if (err)
            {
            StopTransitionSrv();
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrv::NotifyAnimEffectsChange
// -----------------------------------------------------------------------------
//
void CAknsSrv::NotifyAnimBackgroundChange()
    {
    ForceNotifySessions( EAknsSCHNAnimBackgroundChanged );
    }
// -----------------------------------------------------------------------------
// CAknsSrv::StartTransitionSrvL
// -----------------------------------------------------------------------------
//
void CAknsSrv::StartTransitionSrvL(TBool aSkipSrvStart /*EFalse*/)
    {
    // if the transition server is running,
    // shutdown it first in case TFX server start is not skipped
    if (!aSkipSrvStart)
        {
        StopTransitionSrv();
        User::LeaveIfError(iWsSession.Connect());
        }

    if ( ( iSettings->TransitionFxState() != KMaxTInt ) && LoadTfxSrvPluginL())
        {
        // If the server was already running unregister all the kml files
        if (aSkipSrvStart)
            {
            if (!iTFXServer->IsConnected())
                {
                User::LeaveIfError(iTFXServer->Connect());
                }
            User::LeaveIfError(iTFXServer->UnregisterAllKml());
            }
        CTFXConfigParser* parser = CTFXConfigParser::NewL();
        CleanupStack::PushL( parser );

        TFileName transitionName;

        // get active skin's transition
        GetTransitionNameL( transitionName, iSettings->CachedSkinPID() );

        TRAPD( err, StartSrvAndRegisterTransitionsL( transitionName,
                                                    iTFXServer,
                                                    iTFXServerCtrl,
                                                    parser,
                                                    aSkipSrvStart ) );
        // base skin definition encountered
        if( err == KBaseSkinParserLeave )
            {
            _LIT( KHexPrefix, "0x");
            const TInt KUidLenght = 20;

            TAknsPkgID baseSkinId = KAknsNullPkgID;
            TBuf<KUidLenght> baseSkinDesc;
            baseSkinDesc.Append( KHexPrefix );
            baseSkinDesc.Append( parser->BaseSkinSelFile() );

            TRAPD( err2, baseSkinId.SetFromDesL( baseSkinDesc ) );
            if( err2 == KErrNone )
                {
                GetTransitionNameL( transitionName, baseSkinId );

                // register base skin transitions
                StartSrvAndRegisterTransitionsL( transitionName,
                                                    iTFXServer,
                                                    iTFXServerCtrl,
                                                    parser,
                                                    aSkipSrvStart );
                }

            // then register current skin's transitions
            //(overrides base skin ones if overlapping)

            GetTransitionNameL( transitionName, iSettings->CachedSkinPID() );

            StartSrvAndRegisterTransitionsL( transitionName,
                                    iTFXServer,
                                    iTFXServerCtrl,
                                    parser,
                                    ETrue ); // server already running
            }
         else
            {
            User::LeaveIfError( err );
            }
        CleanupStack::PopAndDestroy( parser );
        }
     // if leave happens before this point, StopTransitionSrv is called
     // which closes handle to tfxserver / deletes tfxserver ctrl
     CloseTfxServerConnection();
     }

// -----------------------------------------------------------------------------
// CAknsSrv::StopTransitionSrv
// -----------------------------------------------------------------------------
//
void CAknsSrv::StopTransitionSrv()
    {
    CloseTfxServerConnection();

    if (iTFXServerCtrl)
        {
        iTFXServerCtrl->StopTransitionServer();
        delete iTFXServerCtrl;
        iTFXServerCtrl = NULL;

        REComSession::DestroyedImplementation( iSrvControllerEComDtorUID );
        iSrvControllerEComDtorUID.iUid = 0;
        }

    iWsSession.Close();
    }

// -----------------------------------------------------------------------------
// CAknsSrv::NotifyDriveChange
//
// -----------------------------------------------------------------------------
//
void CAknsSrv::NotifyDriveChange( const TInt& aDrive, const TBool& aMediaNotPresent )
    {
    // USB attachement is handled via other notifications.
    if (iUSBAttached)
        {
        return;
        }
    if ( aMediaNotPresent && !iSettings->CachedBackupOperationInProgress())
        {
        if ( iSkinOnRemovableDrive && aDrive == iDriveIdOfRemovableDrive )
            {
            TAknsPkgID skinPID = iSettings->CachedSkinPID();
            TBool excludeWP = EFalse;
            if ( iSettings->WallpaperType() == KAknsSkinSrvSlidesetWallpaper )
                {
                excludeWP = ETrue;
                }
            SetDefaultSkinActive();
            RestoreDefaultSDSettings(excludeWP);
            MergeAndBroadcast();
            }
        else
            {
            // Set previous skin ID as NULL
            iOldSkin = KAknsNullPkgID;
            }
        // Wallpaper was on removable drive and it is no longer accessible.
        if ( iWPOnRemovableDrive && iWPFilename )
            {
            if ( !AknsSrvUtils::IsFile( iFsSession, *iWPFilename ) )
                {
                iWPOnRemovableDrive = EFalse;
                WallpaperLost();
                }
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrv::NotifyBackupOperationBegin
// -----------------------------------------------------------------------------
//
void CAknsSrv::NotifyBackupOperationBegin()
    {
    BackupAndActiveDefaultSkin();
    }
    
// -----------------------------------------------------------------------------
// CAknsSrv::NotifyUSBAttach
//
// -----------------------------------------------------------------------------
//
void CAknsSrv::NotifyUSBAttach()
    {
    if (iUSBAttached)
        {
        return;
        }
    iUSBAttached = ETrue;
    
    BackupAndActiveDefaultSkin();
    }

// -----------------------------------------------------------------------------
// CAknsSrv::NotifyUSBRemoval
// -----------------------------------------------------------------------------
//
void CAknsSrv::NotifyUSBRemoval()
    {
    if (!iUSBAttached)
        {
        return;
        }
    iUSBAttached = EFalse;
    
    RestoreOldSkin();
    }

// -----------------------------------------------------------------------------
// CAknsSrv::MorhphingEventTimeout
// -----------------------------------------------------------------------------
//
void CAknsSrv::MorhphingEventTimeout()
    {
    if( iBootFinished )
        {
        iChunkMaintainer->ClearMorphedGraphics();
        iChunkMaintainer->UpdateMorphingTime();
        ForceNotifySessions(EAknsSCHNMorphingStateChange);
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrv::NewSkinPackagesInstalled
// -----------------------------------------------------------------------------
//
void CAknsSrv::NewSkinPackagesInstalled()
    {
    if (iUSBAttached)
       {
       return;
       }

    ForceNotifySessions( EAknsSCHNPackageListUpdate );
    }

// -----------------------------------------------------------------------------
// CAknsSrv::WallpaperLost
// -----------------------------------------------------------------------------
//
void CAknsSrv::WallpaperLost()
    {
    if ( iUSBAttached && iWPOnRemovableDrive )
        {
        return;
        }
    else if ( iSettings->WallpaperType() == KAknsSkinSrvSlidesetWallpaper )
        {
        TRAP_IGNORE( WallpaperTimerTimeoutL( ETrue ) );
        return;
        }
    // Does not leave when removing wallpaper.
    SetWallpaperL( KNullDesC, KAknsIIDWallpaper );
    iSettings->WriteIdleBackgroundToDefault();
    iMergeType = (TAknsSkinSrvMergeType)(iMergeType | EAknsSkinSrvIdleWp);
    iContentChanged = ETrue;
    BroadcastUpdate();
    ForceNotifySessions( EAknsSCHNPackageListUpdate );
    }

// -----------------------------------------------------------------------------
// CAknsSrv::SlideSetModifiedL
// -----------------------------------------------------------------------------
//
void CAknsSrv::SlideSetModifiedL()
    {
    // Read new file name array
    ReadSlideSetImageFilesL();

    SetSlideSetTimerActiveL();
    // Try to get the first image.
    WallpaperTimerTimeoutL( ETrue );
    }

// -----------------------------------------------------------------------------
// CAknsSrv::EnableSkinChangeNotify
// -----------------------------------------------------------------------------
//
void CAknsSrv::EnableSkinChangeNotify()
    {
    // Only do something if the notificatio mechanism was disabled.
    if (!iNotifyEnabled)
        {
        iNotifyEnabled = ETrue;
        MergeAndBroadcast();
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrv::DisableSkinChangeNotify
// -----------------------------------------------------------------------------
//
void CAknsSrv::DisableSkinChangeNotify()
    {
    iNotifyEnabled = EFalse;
    }

// -----------------------------------------------------------------------------
// CAknsSrv::BroadcastUpdate
// -----------------------------------------------------------------------------
//
void CAknsSrv::BroadcastUpdate()
    {
    if ( iContentChanged )
        {
        iChunkMaintainer->RemoveSingleScalableItem(KAknsIIDWallpaper);
        ForceNotifySessions( EAknsSCHNWallpaperChanged);
        iContentChanged = EFalse;
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrv::MergeAndBroadcast
// -----------------------------------------------------------------------------
//
TInt CAknsSrv::MergeAndBroadcast()
    {
    TInt mergeErr = KErrNone;
    // We don't want to notify anything if the mechanism was disabled.
    if (iNotifyEnabled && iContentChanged)
        {
        iContentChanged = EFalse;
        TRAP( mergeErr, PrepareMergedSkinContentL() );

        if( mergeErr )
            {
            if( mergeErr==KErrNoMemory )
                {
                ForceNotifySessions( EAknsSCHNConfigurationOOM );
                }
            else
                {
                ForceNotifySessions( EAknsSCHNConfigurationCorrupt );
                }

            AKNS_TRACE_ERROR1("CAknsSrv::NotifySkinChangeToSessions MERGE ERROR %i", mergeErr);
            SetDefaultSkinActive();
            RestoreDefaultSDSettings();

            // Error ignored, we can do nothing if default system skin does not merge
            TRAP_IGNORE( PrepareMergedSkinContentL() );
            }

        iOutstandingChangeEvents +=
            ForceNotifySessions( EAknsSCHNContentChanged, ETrue);
        }
    return mergeErr;
    }

// -----------------------------------------------------------------------------
// CAknsSrv::ForceNotifySessions
// -----------------------------------------------------------------------------
//
TInt CAknsSrv::ForceNotifySessions(
    const TAknsSkinChangeHandlerNotification aType, TBool aCountNotifications )
    {
    TInt queued(0);
    iSessionIter.SetToFirst();
    while( CSession2* session = iSessionIter++ )
        {
        if( (static_cast<CAknsSrvSession*>(session))->
            EnqueueNotification( aType, aCountNotifications ) )
            {
            queued += 1;
            }
        }
    return queued;
    }

// -----------------------------------------------------------------------------
// CAknsSrv::SetActiveSkinContent
// -----------------------------------------------------------------------------
//
void CAknsSrv::SetActiveSkinContent(const TAknsPkgID aPID)
    {
    AKNS_TRACE_INFO2("CAknsSrv::SetActiveSkinContent %i %i", aPID.iNumber, aPID.iTimestamp );
    iMergeType = (TAknsSkinSrvMergeType)(iMergeType | EAknsSkinSrvSkin);
    iSettings->SetCachedSkinPID( aPID );
    iContentChanged = ETrue;
    }

// -----------------------------------------------------------------------------
// CAknsSrv::PrepareMergedSkinContentL
// -----------------------------------------------------------------------------
//
void CAknsSrv::PrepareMergedSkinContentL()
    {
    iChunkMaintainer->BeginWrite();

    TRAPD( error, PrepareMergedSkinContentUnprotectedL() );

    iChunkMaintainer->EndWrite();

    if( error )
        {
        User::Leave( error );
        }
    
    StartAnimBackgroundL();
    
    // Send notifications
    ForceNotifySessions( EAknsSCHNConfigurationMerged );
    iMergeType = EAknsSkinSrvNone;
    iChunkMaintainer->CreateMorphingTimerL(this);
    }

// -----------------------------------------------------------------------------
// CAknsSrv::PrepareMergedSkinContentUnprotectedL
// -----------------------------------------------------------------------------
//
void CAknsSrv::PrepareMergedSkinContentUnprotectedL()
    {
    iSkinOnRemovableDrive = EFalse;

    iDriveIdOfRemovableDrive = KErrNotFound;

    iChunkMaintainer->ResetLevel();

    // Insert System default skin definitions first
    DoMergeSkinL(
        KAknsPIDS60DefaultSkin,
        KAknsPIDS60DefaultSkin,
        EAknsItemDefClassBitmaps,
        ETrue, // clear
        EFalse ); // override

    iChunkMaintainer->NextLevel();

    if (iSkinContentUri && (iMergeType & EAknsSkinSrvSkin))
        {
        CheckAndCreateDRMHelper();
        if (!iSkinContentUri2)
            {
            // error ignored
            if (iBootFinished)
                {
                iDrmHelper->SetAutomatedType(CDRMHelper::EAutomatedTypeTheme);
                iDrmHelper->RemoveAutomated( *iSkinContentUri );
                AKNS_TRACE_INFO("CAknsSrv - PrepareMergerSkinContentL: RemoveAutomated called for skin");
                delete iSkinContentUri;
                iSkinContentUri = NULL;
                }
            }
        else if (iSkinContentUri->Compare(*iSkinContentUri2))
            {
            iDrmHelper->SetAutomatedType(CDRMHelper::EAutomatedTypeTheme);
            iDrmHelper->RemoveAutomated( *iSkinContentUri );
            AKNS_TRACE_INFO("CAknsSrv - PrepareMergerSkinContentL: RemoveAutomated called for skin");
            delete iSkinContentUri;
            iSkinContentUri = NULL;
            }
        }

    if (iIdleWPContentUri && (iMergeType & EAknsSkinSrvIdleWp))
        {
        CheckAndCreateDRMHelper();
        if (!iIdleWPContentUri2)
            {
            // error ignored
            if (iBootFinished)
                {
                iDrmHelper->SetAutomatedType(CDRMHelper::EAutomatedTypeWallpaper);
                iDrmHelper->RemoveAutomated( *iIdleWPContentUri );
                AKNS_TRACE_INFO("CAknsSrv - PrepareMergerSkinContentL: RemoveAutomated called for idlewp");
                delete iIdleWPContentUri;
                iIdleWPContentUri = NULL;
                }
            }
        else if (iIdleWPContentUri->Compare(*iIdleWPContentUri2))
            {
            iDrmHelper->SetAutomatedType(CDRMHelper::EAutomatedTypeWallpaper);
            iDrmHelper->RemoveAutomated( *iIdleWPContentUri );
            AKNS_TRACE_INFO("CAknsSrv - PrepareMergerSkinContentL: RemoveAutomated called for idlewp");
            delete iIdleWPContentUri;
            iIdleWPContentUri = NULL;
            }
        }

    // And then, insert definitions from the selected skin...
    if( iSettings->CachedSkinPID() != KAknsPIDS60DefaultSkin )
        {
        DoMergeSkinL(
            iSettings->CachedSkinPID(), iSettings->CachedSkinPID(),
            EAknsItemDefClassBitmaps, EFalse, EFalse );
        }

    iChunkMaintainer->NextLevel();

    // Finally, check and merge wallpaper configuration

    iChunkMaintainer->NextLevel();
    if ( (!iUSBAttached) || ( iUSBAttached && !iWPOnRemovableDrive ) )
    	{
    	if ( iSettings->WallpaperType() == KAknsSkinSrvSlidesetWallpaper )
    		{
    		SetSlidesetWallpaperL();
    		}
    	else
    		{
    		TPath filename;
    		TInt error = iSettings->ReadIdleBackgroundFile( filename );
    		if( (error == KErrNone) && (filename.Length()>0))
    			{
    		    if (AknsSrvUtils::IsFile( iFsSession, filename ) )
    		    	{
    		        SetWallpaperL( filename,KAknsIIDWallpaper );
    		        }
    		    else
    		    	{
    		        iSettings->WriteIdleBackgroundToDefault();
    		        }
    		    }
    		}
    	}

    iChunkMaintainer->NextLevel();

    // register effects if TfxSrvPlugin is available
    TBool tfxServerRunning = (iTFXServerCtrl && iTFXServerCtrl->ServerRunning());
    TRAPD(err,StartTransitionSrvL(tfxServerRunning));
    if (err)
        {
        StopTransitionSrv();
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrv::DoMergeSkinL
// -----------------------------------------------------------------------------
//
void CAknsSrv::DoMergeSkinL( const TAknsPkgID /*aSkinPID*/,
    const TAknsPkgID aLocationPID, const TAknsItemDefClass aClass,
    const TBool aClearTable, const TBool /*aAHOverrideSkin*/  )
    {
    AKNS_TRACE_INFO("CAknsSrv::DoMergeSkinL ENTERED");
    TAknsSrvExclusionQuery query( iExclusionList );

    // Add highlight animation variant status to query (to include/exclude
    // animations in merging).
    query.SetHighlightAnimEnabled( iSettings->HighlightAnimEnabled() );

    AKNS_TRACE_INFO("CAknsSrv::DoMergeSkinL Non System skin");
    // Normal skin
    TBool isProtected = EFalse;

    // First look from ROM drive.
    TFileName path;
    CAknsSrvDriveMaster::DefaultSkinDirectoryOnRom( path );
    HBufC* skinfilename = AknsSrvUtils::GetSkinFileNameL( path, aLocationPID, iFsSession );
    if ( !skinfilename )
        {
        AKNS_TRACE_INFO("CAknsSrv::DoMergeSkinL Skin was not found from ROM, trying static ones");
        // Then from device drives.
        CAknsSrvDriveMaster* driveMaster = iSettings->GetDriveMaster();
        skinfilename = AknsSrvUtils::GetSkinFileNameL(
            *driveMaster,
            aLocationPID,
            iFsSession,
            CAknsSrvDriveMaster::EAknsSrvStaticDrive );
        if( !skinfilename )
            {
            AKNS_TRACE_INFO("CAknsSrv::DoMergeSkinL Skin was not found from static drives, trying removable ones");
            // Finally from removable drives.
            skinfilename = AknsSrvUtils::GetSkinFileNameL(
                *driveMaster,
                aLocationPID,
                iFsSession,
                CAknsSrvDriveMaster::EAknsSrvRemovableDrive );
            if ( !skinfilename )
                {
                AKNS_TRACE_ERROR("CAknsSrv::DoMergeSkinL Skin not found!");
                // No skin was found at all...
                User::Leave( KErrNotFound );
                }
            else
                {
                iSkinOnRemovableDrive = ETrue;
                iFsSession.CharToDrive( skinfilename->Des()[0], iDriveIdOfRemovableDrive );
                CleanupStack::PushL( skinfilename );
                }
            }
        else
            {
            CleanupStack::PushL( skinfilename );
            }
        }
    else
        {
        CleanupStack::PushL( skinfilename );
        }
#if defined(AKNS_TRACING_ENABLED_INFO)
        if (skinfilename)
            {
            AKNS_TRACE_INFO1("CAknsSrv::DoMergeSkinL Skinfilename == %S", skinfilename);
            }
        else
            {
            AKNS_TRACE_INFO("CAknsSrv::DoMergeSkinL Skinfilename  == NULL");
            }
#endif // AKNS_TRACING_ENABLED_INFO

        RFile file;
        User::LeaveIfError( file.Open(
                iFsSession, *skinfilename, EFileRead | EFileShareReadersOnly));
        CleanupClosePushL(file);

        TFileName fn;
        if (iSknFile.SubSessionHandle())
            {
            iSknFile.FullName(fn);
            }

        if (fn.CompareF(*skinfilename))
            {
             // file is not already open
            iSknFile.Close();
            iSknFile.Duplicate(file);
            }

        AKNS_TRACE_INFO("CAknsSrv::DoMergeSkinL SkinFilename got, checking protection...");
        isProtected = AknsSrvUtils::IsDrmProtectedL(file);
        if (isProtected)
            {
            AKNS_TRACE_INFO("CAknsSrv::DoMergeSkinL Skin is DRM-Protected");
            // Get fileInfo
            HBufC8* contenturi = AknsSrvUtils::GetContentUriFromFileL( *skinfilename );
            AKNS_TRACE_INFO("CAknsSrv::DoMergeSkinLL - GetContentUriFromFileL returned succesfully");
            CleanupStack::PushL(contenturi);

            CheckAndCreateDRMHelper();
            TBool canSetAutomated( EFalse );
            TInt res = iDrmHelper->CanSetAutomated( *skinfilename, canSetAutomated );

            if ( res == KErrCANoRights ||
                 res == KErrCANoPermission ||
                 !canSetAutomated )
                {
                AKNS_TRACE_ERROR1("CAknsSrv::DoMergeSkinL, failed due to CanSetAutomated result=%d, remove skin", res );
                AKNS_TRACE_ERROR1("CAknsSrv::DoMergeSkinL, failed due to CanSetAutomated boolean=%d, remove skin", canSetAutomated );
                if (!iBootFinished)
                    {
                    iSkinContentUri2 = contenturi->AllocL();
                    }
                User::Leave(KErrCorrupt);
                }

            AKNS_TRACE_INFO("CAknsSrv::DoMergeSkinL - GetRightsInfo returned");
            AKNS_TRACE_INFO("CAknsSrv::DoMergeSkin ENTERED");

            if (!iSkinContentUri)
                {
                AKNS_TRACE_INFO("CAknsSrv::DoMergeSkinL - Picked up contenturi for automated content (SKIN)");
                iSkinContentUri = contenturi->AllocL();
                }

            CleanupStack::PopAndDestroy(contenturi);
            }
        AKNS_TRACE_INFO("CAknsSrv::DoMergeSkinL DRM stuff done");
        // Not sure if using mirroring flag works correctly here....
        iChunkMaintainer->MergeSkinDefinitionsL(
            *skinfilename, aClass, aClearTable, query,
            iSettings->CachedAHMirroringActive(), aLocationPID );

    CleanupStack::PopAndDestroy( 2, skinfilename );

    AKNS_TRACE_INFO("CAknsSrv::DoMergeSkinL COMPLETED");
    }

// -----------------------------------------------------------------------------
// CAknsSrv::ActiveSkinAnimBgSupportL
// -----------------------------------------------------------------------------
//
TBool CAknsSrv::ActiveSkinAnimBgSupportL( )
    {
    CAknsSrvChunkLookup* chunklookup = CAknsSrvChunkLookup::NewL();
    CleanupStack::PushL( chunklookup );
    TAknsItemID p;
    p.Set(EAknsMajorProperty,EAknsMinorPropertyAnimBgParam);
    CAknsItemDef* def = chunklookup->LookupAndCreateDefL( p );
    CleanupStack::PopAndDestroy( chunklookup );
    if ( def )
        {
		delete def;
        return ETrue;
        }
    
    return EFalse;
    }

// -----------------------------------------------------------------------------
// CAknsSrv::ActiveSkinAnimBgParamL
// -----------------------------------------------------------------------------
//
HBufC* CAknsSrv::ActiveSkinAnimBgParamL( )
    {
    HBufC* param = NULL;
    CAknsSrvChunkLookup* chunklookup = CAknsSrvChunkLookup::NewL();
	CleanupStack::PushL( chunklookup );
    TAknsItemID p;
    p.Set(EAknsMajorProperty,EAknsMinorPropertyAnimBgParam);
    CAknsItemDef* def = chunklookup->LookupAndCreateDefL( p );
    if ( def )
        {
        CleanupStack::PushL( def );
        param = ((CAknsStringItemDef*)def)->String().AllocL();
        CleanupStack::PopAndDestroy ( def );
        }
    CleanupStack::PopAndDestroy ( chunklookup );
    return param;
    }

// -----------------------------------------------------------------------------
// CAknsSrv::StartAnimBackgroundL
// -----------------------------------------------------------------------------
void CAknsSrv::StartAnimBackgroundL()
    {
    if ( iSettings->TransitionFxState() == KMaxTInt )
        {
        //Stop anim effects
        iSettings->SetAnimBackgroundState( KMaxTInt );
        return;
        }
    
    const TUid KCRUidThemesVariation = { 0x102818EB };
    const TUint32 KThemesLocalVariation  = 0x00000001;
    
    // Enable animated background setting.
    // Bitmask value in decimals: 2048.
    const TUint32 KPslnSupportAnimBackground = 0x00000800;
    
    TInt value = 0;
    CRepository* themeVar = CRepository::NewL( KCRUidThemesVariation );
    TInt err = themeVar->Get( KThemesLocalVariation, value );
	if ( err != KErrNone )
	    {
		value = 0;
	    }
    delete themeVar;

    if ( (value & KPslnSupportAnimBackground) && 
         ActiveSkinAnimBgSupportL()
         )
        {
        //Start anim effects
        iSettings->SetAnimBackgroundState( 0 );
        }
    else
        {
        //Stop anim effects
        iSettings->SetAnimBackgroundState( KMaxTInt );
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrv::SetWallpaperL
// -----------------------------------------------------------------------------
//
void CAknsSrv::SetWallpaperL( const TDesC& aFilename,
    const TAknsItemID& aIID, TBool aIsSlide )
    {
    if (iWallpaperType == KAknsSkinSrvNoWallpaper ||
        iWallpaperType == KAknsSkinSrvImageWallpaper ||
        !aIsSlide)
        {
        iCurrentSlide = 0;
        WallpaperTimerL()->Stop();
        }
   if (!aIsSlide && iSlideSetNameArray)
        {
        delete iSlideSetNameArray;
        iSlideSetNameArray = NULL;
        }

    if (aIID == KAknsIIDWallpaper)
        {
        iMergeType = (TAknsSkinSrvMergeType)(iMergeType | EAknsSkinSrvIdleWp);
        }

    if (iWallpaperObserver)
        {
        iWallpaperObserver->Cancel();
        delete iWallpaperObserver;
        iWallpaperObserver = NULL;
        }

    AKNS_TRACE_INFO("CAknsSrv::SetWallPaperL entered");
    TBool isprotected = EFalse;
    if (aFilename.Length() >0 )
        {
        CFbsBitmap* bmp = NULL;
        CFbsBitmap* mask = NULL;
        TInt err = KErrNone;

        if ( !iWallpaperCache->IsCached( aFilename ) )
            {
            if ( aFilename.Right(4).CompareF( KAknsSkinSrvSvgFileExt ) != 0 )
                {
                TRAP( err, CAknsSrvImageConverter::DecodeImageL( iFsSession,
                     aFilename,
                     TSize(-1,-1),
                     bmp,
                     mask,
                     iMaxWallpaperSize ) );
                 }
            delete bmp;
            delete mask;
            if ( err )
                {
                User::LeaveIfError( err );
                }
            }
        
        isprotected = AknsSrvUtils::IsDrmProtectedL(aFilename);
        if (!BaflUtils::FileExists(iFsSession, aFilename))
            {
            iSettings->WriteIdleBackgroundToDefault();
            return;
            }
        }
    if (isprotected)
        {
        CheckAndCreateDRMHelper();

        // Get fileInfo
        HBufC8* contenturi = AknsSrvUtils::GetContentUriFromFileL( aFilename );
        CleanupStack::PushL(contenturi);
        AKNS_TRACE_INFO("CAknsSrv::SetWallPaperL - GetFileInfo returned succesfully");

        TBool canSetAutomated( EFalse );
        TInt res = iDrmHelper->CanSetAutomated( aFilename, canSetAutomated );
        if ( res == KErrCANoRights )
            {
            AKNS_TRACE_ERROR("CAknsSrv::SetWallPaperL - CanSetAutomated, result = KErrCANoRights");
            RemoveAutomatedWallpaper(aIID, *contenturi);
            CleanupStack::PopAndDestroy( contenturi );
            return;
            }

        if ( res == KErrCANoPermission || !canSetAutomated )
            {
            AKNS_TRACE_ERROR("CAknsSrv::SetWallPaperL - ExpiredRights, FutureRights or ECountBased, remove wallpaper");
            if (!iBootFinished)
                {
                if (aIID == KAknsIIDWallpaper)
                    {
                    AKNS_TRACE_INFO("CAknsSrv::SetWallpaperL - Picked up contenturi for automated content (idlewp)");
                    iIdleWPContentUri = contenturi->AllocL();
                    }
                }
            else
                {
                RemoveAutomatedWallpaper(aIID, *contenturi);
                }
            CleanupStack::PopAndDestroy( contenturi );
            return;
            }

        AKNS_TRACE_INFO("CAknsSrv::SetWallPaperL - Wallpaper has valid restricted rights");
        if (aIID == KAknsIIDWallpaper)
            {
            if (!iIdleWPContentUri)
                {
                AKNS_TRACE_INFO("CAknsSrv::SetWallpaperL - Picked up contenturi for automated content (idlewp)");
                iIdleWPContentUri = contenturi->AllocL();
                }
            }

        CleanupStack::PopAndDestroy(contenturi);
        }

    iChunkMaintainer->SetWallpaper( aIID, aFilename, 0);

// Set the wallpaper type as correct.
    if ( aFilename != KNullDesC && !aIsSlide )
        {
        iWallpaperType = KAknsSkinSrvImageWallpaper;
        }
    else if ( aFilename == KNullDesC && !aIsSlide )
        {
        iWallpaperType = KAknsSkinSrvNoWallpaper;
        }

    iContentChanged = ETrue;
    if ( aFilename.Length() >0 )
        {
        TRAPD(err,iWallpaperObserver = CAknsSrvFileObserver::NewL(this, aFilename));
        if (!err)
            {
            iWallpaperObserver->IssueRequest();
            }
        if ( CAknsSrvDriveMaster::IsRemovableDrive( iFsSession, aFilename ) )
            {
            iWPOnRemovableDrive = ETrue;
            if ( iWPFilename )
                {
                delete iWPFilename;
                iWPFilename = NULL;
                }
            iWPFilename = aFilename.AllocL();
            }
        else
            {
            iWPOnRemovableDrive = EFalse;
            }
        }
    else
        {
        delete iWPFilename;
        iWPFilename = NULL;
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrv::CheckImageL
// -----------------------------------------------------------------------------
//
TBool CAknsSrv::CheckImageL(const TDesC& aFilename, TBool& aIsProtected )
    {
    CFbsBitmap* bmp = NULL;
    CFbsBitmap* mask = NULL;

    TInt err = KErrNone;
    if ( aFilename.Right(4).CompareF( KAknsSkinSrvSvgFileExt ) != 0 )
    	{
		TRAP( err, CAknsSrvImageConverter::DecodeImageL( iFsSession,
			aFilename,
			TSize(-1,-1),
			bmp,
			mask,
			iMaxWallpaperSize ) );
    	}
    delete bmp;
    delete mask;
    if ( err )
        {
        return EFalse;
        }

    TBool isValidFile = ETrue;
    aIsProtected = AknsSrvUtils::IsDrmProtectedL( aFilename );
    if ( aIsProtected )
        {
        CheckAndCreateDRMHelper();

        TBool canSetAutomated = EFalse;
        TInt result = iDrmHelper->CanSetAutomated( aFilename, canSetAutomated );
        if ( !canSetAutomated || result != KErrNone )
            {
            isValidFile = EFalse;
            }
        else
            {
            TBool expired = EFalse;
            TBool sendAllowed = EFalse; //not needed
            CDRMHelperRightsConstraints* playDrmHlpCons = NULL;
            CDRMHelperRightsConstraints* dispDrmHlpCons = NULL;
            CDRMHelperRightsConstraints* execDrmHlpCons = NULL;
            CDRMHelperRightsConstraints* printDrmHlpCons = NULL;
            iDrmHelper->GetRightsDetailsL(
                aFilename,
                ContentAccess::EView,
                expired,
                sendAllowed,
                playDrmHlpCons,
                dispDrmHlpCons,
                execDrmHlpCons,
                printDrmHlpCons );
            delete playDrmHlpCons;
            delete execDrmHlpCons;
            delete printDrmHlpCons;
            CleanupStack::PushL( dispDrmHlpCons );

            if ( dispDrmHlpCons && dispDrmHlpCons->FullRights() )
                {
                isValidFile = ETrue;
                }
            CleanupStack::PopAndDestroy( dispDrmHlpCons );
            }
        }

    return isValidFile;
    }

// -----------------------------------------------------------------------------
// CAknsSrv::WallpaperTimerTimeoutL
// -----------------------------------------------------------------------------
//
void CAknsSrv::WallpaperTimerTimeoutL( TBool aForceChange )
    {
    
    TInt slideCount = 0;
    if ( iSlideSetNameArray )
        {
        slideCount = iSlideSetNameArray->MdcaCount();
        }
    else
        {
        // Wallpaper slideset array has been deleted.
        iSettings->WriteIdleBackgroundToDefault();
        return;
        }
    
    if( !aForceChange && !CanChangeSlidesetWallpaperL() )
        {
        iCurrentSlide++;
        if (iCurrentSlide >= slideCount)
            {
            iCurrentSlide = 0;
            }
        return;
        }
    
//Commnet out for bug ETTA-7JSDGE
//    if ( iSettings->ScreensaverState() > 0 )
//        {
//        iContentChanged = ETrue;
//        iCurrentSlide++;
//        if (iCurrentSlide >= slideCount)
//            {
//            iCurrentSlide = 0;
//            }
//        iSettings->StartScreenSaverListen();
//        return;
//        }

    TInt freeRAM = 0;
    HAL::Get(HALData::EMemoryRAMFree, freeRAM);
    if (freeRAM < KAknSkinSrvFreeRAMNeeded)
        {
        return;
        }

    // Find next valid image.
    TBool isProtected = EFalse;
    while ( slideCount &&
            ( !BaflUtils::FileExists(
                iFsSession,
                iSlideSetNameArray->MdcaPoint( iCurrentSlide ) ) ||
            !CheckImageL(
                iSlideSetNameArray->MdcaPoint( iCurrentSlide ),
                isProtected ) ) )
        {
        iSlideSetNameArray->Delete(iCurrentSlide);
        slideCount = iSlideSetNameArray->MdcaCount();
        if (iCurrentSlide >= slideCount && slideCount > 0)
            {
            iCurrentSlide = 0;
            TRAPD(err,{isProtected =
                AknsSrvUtils::IsDrmProtectedL(iSlideSetNameArray->MdcaPoint(iCurrentSlide));}
                );
            if ( err != KErrNone )
                {
                isProtected = EFalse;
                }
            }
        }

    CheckAndCreateDRMHelper();

    // @todo - remove automated content for previous slide - they don't use the member variable
    // URI's.

    // remove any previous automated content
    if (iIdleWPContentUri)
        {
        iDrmHelper->SetAutomatedType(CDRMHelper::EAutomatedTypeWallpaper);
        iDrmHelper->RemoveAutomated( *iIdleWPContentUri );
        delete iIdleWPContentUri;
        iIdleWPContentUri = NULL;
        }

    if (iIdleWPContentUri2)
        {
        iDrmHelper->SetAutomatedType(CDRMHelper::EAutomatedTypeWallpaper);
        iDrmHelper->RemoveAutomated( *iIdleWPContentUri2 );
        delete iIdleWPContentUri2;
        iIdleWPContentUri2 = NULL;
        }

    // Set image as automated content.
    if ( slideCount > iCurrentSlide && slideCount )
        {
        if ( isProtected )
            {
            iDrmHelper->SetAutomatedType(CDRMHelper::EAutomatedTypeWallpaper);
            iDrmHelper->SetAutomatedSilent(iSlideSetNameArray->MdcaPoint(iCurrentSlide), ETrue);
            iDrmHelper->ConsumeFile2(
                iSlideSetNameArray->MdcaPoint( iCurrentSlide),
                ContentAccess::EView,
                CDRMHelper::EStart );
            iDrmHelper->ConsumeFile2(
                iSlideSetNameArray->MdcaPoint( iCurrentSlide),
                ContentAccess::EView,
                CDRMHelper::EFinish );
            }
        }
    
    CRepository* skinsrep = CRepository::NewL(KCRUidPersonalisation);
    CleanupStack::PushL(skinsrep);
    
    if ( slideCount > 1 )
        {
        SetWallpaperL( iSlideSetNameArray->MdcaPoint(iCurrentSlide),KAknsIIDWallpaper, ETrue );
        skinsrep->Set(KPslnIdleBackgroundImagePath, iSlideSetNameArray->MdcaPoint(iCurrentSlide));
        iMergeType = (TAknsSkinSrvMergeType)(iMergeType | EAknsSkinSrvIdleWp);
        iContentChanged = ETrue;
        BroadcastUpdate();
        iCurrentSlide++;
        if ( iCurrentSlide >= slideCount )
            {
            iCurrentSlide = 0;
            }
        }
    else
        {
        // only one or zero images left, cancel timer and set the wallpaper to normal
        WallpaperTimerL()->Stop();
        iCurrentSlide = 0;

        TFileName fname;
        if ( slideCount )
            {
            fname = iSlideSetNameArray->MdcaPoint(0);
            }

        if ( slideCount && BaflUtils::FileExists(iFsSession, fname) )
            {
            SetWallpaperL( fname,KAknsIIDWallpaper );
            iWallpaperType = KAknsSkinSrvImageWallpaper;
            User::LeaveIfError(skinsrep->Set(KPslnIdleBackgroundImagePath, fname));
            User::LeaveIfError(skinsrep->Set(KPslnWallpaperType, iWallpaperType));
            }
        else
            {
            SetWallpaperL( KNullDesC,KAknsIIDWallpaper );
            iSettings->WriteIdleBackgroundToDefault();
            }
        
        if ( iSlideSetNameArray )
            {
            iSlideSetNameArray->Reset();
            }
        delete iSlideSetNameArray;
        iSlideSetNameArray = NULL;

        iMergeType = (TAknsSkinSrvMergeType)(iMergeType | EAknsSkinSrvIdleWp);
        iContentChanged = ETrue;
        BroadcastUpdate();
        }
    CleanupStack::PopAndDestroy( skinsrep );
    }

// -----------------------------------------------------------------------------
// Sets slide set wallpaper.
// -----------------------------------------------------------------------------
//
void CAknsSrv::SetSlidesetWallpaperL( )
    {
    ReadSlideSetImageFilesL();

    iWallpaperType = KAknsSkinSrvSlidesetWallpaper;

    SetSlideSetTimerActiveL();

    StopSlidesetIniFileObserver();
    TFileName fileName;
    CAknsSrvDriveMaster::GetDefaultDrive(
        DriveInfo::EDefaultPhoneMemory, fileName );
    fileName.Append( KAknsSrvSSWPInifile );

    TAknsSrvFileSrvObserverType type = EAknsSrvFileObsSlidesetWallpaper;
    iSlideSetObserver = CAknsSrvFileObserver::NewL( this, type, fileName );
    iSlideSetObserver->IssueRequest();

    WallpaperTimerTimeoutL();
    }

// -----------------------------------------------------------------------------
// Sets slide set wallpaper.
// -----------------------------------------------------------------------------
//
void CAknsSrv::StopSlidesetIniFileObserver( )
    {
    if ( iSlideSetObserver )
        {
        iSlideSetObserver->Cancel();
        delete iSlideSetObserver;
        iSlideSetObserver = NULL;
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrv::StoreScalableGraphicsL
// -----------------------------------------------------------------------------
//
void CAknsSrv::StoreScalableGraphicsL( const TAknsItemID& aIID,
    const TInt aType, const TSize& aSize, TInt aBmpHandle, TInt aMskHandle, TBool aMorphing )
    {
    iChunkMaintainer->StoreScalableGraphicsL(
        aIID, aType, aSize, aBmpHandle, aMskHandle, aMorphing);
    }

// -----------------------------------------------------------------------------
// CAknsSrv::ClearScalableGraphics
// -----------------------------------------------------------------------------
//
void CAknsSrv::ClearScalableGraphics()
    {
    iChunkMaintainer->ClearScalableGraphics(EAknsSrvScrModeSquare);
    }

// -----------------------------------------------------------------------------
// CAknsSrv::FreeLayoutBitmaps
// -----------------------------------------------------------------------------
//
void CAknsSrv::FreeLayoutBitmaps(const RMessage2 aMessage)
    {
    TAknsSrcScreenMode mode = (TAknsSrcScreenMode)aMessage.Int0();
    iChunkMaintainer->ClearScalableGraphics(mode);
    ForceNotifySessions( EAknsSCHNFlushClientSideCaches );
    }

// -----------------------------------------------------------------------------
// CAknsSrv::CheckIconConfigurationL
// -----------------------------------------------------------------------------
//
TInt CAknsSrv::CheckIconConfiguration( const RMessage2 aMessage )
    {
    TUid appUid = TUid::Uid( 0 );
    TPckg<TUid> appUidPack( appUid );
    TBool isConfiguredIcon = EFalse;
    TRAPD(err,
            {aMessage.ReadL(0, appUidPack);            
            if ( !iIconConfigMap )
                {
                iIconConfigMap = CAknsSrvIconConfigMap::NewL();
                }
            iIconConfigMap->IsIconConfiguredL( appUid, isConfiguredIcon );}
            );
    if ( err != KErrNone)
        {
        err = isConfiguredIcon;
        }
    return isConfiguredIcon;
    }

// -----------------------------------------------------------------------------
// CAknsSrv::AcknowledgeNotification
// -----------------------------------------------------------------------------
//
void CAknsSrv::AcknowledgeNotification( const TInt aType )
    {
    if( aType == EAknsSCHNContentChanged )
        {
        iOutstandingChangeEvents -= 1;
        //__ASSERT_DEBUG( iOutstandingChangeEvents >= 0, User::Panic(
        //    KAknSkinSrvPanicCategory, EAknsSrvNotifyListImbalance ) );

        if( iOutstandingChangeEvents == 0 )
            {
            // Clear scalable graphics
            ClearScalableGraphics();

            // Broadcast deployment notification
            ForceNotifySessions( EAknsSCHNConfigurationDeployed );
            }
        if ( iOutstandingChangeEvents < 0 )
            {
            // Some client is spamming us with EAknSkinSrvAckNotification.
            iOutstandingChangeEvents = 0;
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrv::OpenBitmapFileL
// -----------------------------------------------------------------------------
//
void CAknsSrv::OpenBitmapFileL( const RMessage2 aMessage )
    {
    // message parameters
    // 0. filename
    // 1. filehandle
    TFileName filename;
    aMessage.ReadL( 0,filename );

    if ( !filename.Length() )
        {
        User::Leave( KErrNotFound );
        }

    RFile file;
    TChar driveLetter = filename[0];
    TInt driveNumber;
    User::LeaveIfError( iFsSession.CharToDrive( driveLetter, driveNumber ) );

    User::LeaveIfError( iFsSession.ShareProtected() );
    TInt err = iFsSession.CreatePrivatePath( driveNumber );

    if ( err != KErrNone && err != KErrAlreadyExists )
        {
        User::Leave( err );
        }

    User::LeaveIfError( iFsSession.SetSessionToPrivate( driveNumber ) );

    // @TODO the filename should probably be checked against the filenames
    // in the chunkmaintainer

    User::LeaveIfError( file.Open(
        iFsSession, filename, EFileRead | EFileShareReadersOnly ) );
    CleanupClosePushL( file );
    User::LeaveIfError( file.TransferToClient( aMessage, 1 ) );

    CleanupStack::PopAndDestroy(); // file, ownership transferred to client
    }

// -----------------------------------------------------------------------------
// CAknsSrv::OpenIniFileL
// -----------------------------------------------------------------------------
//
void CAknsSrv::OpenIniFileL( const RMessage2 aMessage)
    {
    // Message parameters
    // 0. package id
    // 1. location
    // 2. filehandle
    // 3. openmode (EFalse = read, ETrue = write)
    TFileName filename;
    TFileName path;
    TAknsPkgID pid = KAknsNullPkgID;
    TPckg<TAknsPkgID> pidPack( pid );
    aMessage.ReadL(0, pidPack);
    TAknSkinSrvSkinPackageLocation location =(TAknSkinSrvSkinPackageLocation)aMessage.Int1();
    TBool openmode = aMessage.Int3(); // todo read this from client

    if ( location == EAknsSrvPhone )
        {
        CAknsSrvDriveMaster::GetDefaultDrive( DriveInfo::EDefaultPhoneMemory, path );
        if ( path.Length() > 0 )
            {
            path.Append( KAknSkinSrvPrivateSkinPath );
            }
        }
    else if ( location == EAknsSrvMMC )
        {
        CAknsSrvDriveMaster::GetDefaultDrive( DriveInfo::EDefaultMassStorage, path );
        if ( path.Length() > 0 )
            {
            path.Append( KAknSkinSrvPrivateSkinPath );
            }
        }
    else
        {
        User::Leave(KErrArgument);
        }

    // this is the skin directory
    path.AppendNumFixedWidthUC( pid.iNumber, EHex, 8 );
    if( !pid.IsUid() )
        {
        path.AppendNumFixedWidthUC( pid.iTimestamp, EHex, 8 );
        }
    path.Append(KPathDelimiter);

    RFile file;
    User::LeaveIfError(iFsSession.ShareProtected());
    TChar driveLetter = path[0];

    TInt driveNumber;
    User::LeaveIfError(iFsSession.CharToDrive(driveLetter, driveNumber));
    TInt err=iFsSession.CreatePrivatePath(driveNumber);
    if (err!=KErrNone && err!=KErrAlreadyExists)
        {
        User::Leave(err);
        }
    filename.AppendNumFixedWidthUC( pid.iNumber, EHex, 8 );
    if( !pid.IsUid() )
        {
        filename.AppendNumFixedWidthUC( pid.iTimestamp, EHex, 8 );
        }

    filename.Append( KAknsSkinSrvIniFileExt );

    User::LeaveIfError(iFsSession.SetSessionToPrivate(driveNumber));

    iInstallObserver->Cancel();
    if (openmode)
        {
        // open readwrite
        err = iFsSession.MkDirAll(path);
        path.Append(filename);
        if (err == KErrNone || err == KErrAlreadyExists)
            {
            err = file.Replace(
                iFsSession,path,
                EFileShareExclusive  | EFileStreamText | EFileWrite );
            }
        }
    else
        {
        // open in read only mode
        path.Append(filename);
        err = file.Open( iFsSession, path, EFileStreamText | EFileRead );
        }
    iInstallObserver->IssueRequest();
    User::LeaveIfError(err);
    CleanupClosePushL(file);

    User::LeaveIfError(file.TransferToClient(aMessage,2));
    CleanupStack::PopAndDestroy(); // file, ownership transferred to client
    }

// -----------------------------------------------------------------------------
// CAknsSrv::OpenImageInifileL
// -----------------------------------------------------------------------------
//
void CAknsSrv::OpenImageInifileL(const RMessage2 aMessage)
    {
    // Message parameters
    // 0. filehandle
    // 1. type
    TAknsSrvInifileType inifiletype = (TAknsSrvInifileType)aMessage.Int1();

    RFile file;
    User::LeaveIfError(iFsSession.ShareProtected());
    TInt driveNumber;

    TFileName path;
    CAknsSrvDriveMaster::GetDefaultDrive( DriveInfo::EDefaultPhoneMemory, path );
    User::LeaveIfError(iFsSession.CharToDrive(path[0], driveNumber));

    TInt err=iFsSession.CreatePrivatePath(driveNumber);
    if (err!=KErrNone && err!=KErrAlreadyExists)
        {
        User::Leave(err);
        }

    User::LeaveIfError(iFsSession.SetSessionToPrivate(driveNumber));

    TFileName fileName;
    CAknsSrvDriveMaster::GetDefaultDrive(
        DriveInfo::EDefaultPhoneMemory, fileName );

    if (inifiletype == EAknsSrvInifileSSWP)
        {
        fileName.Append( KAknsSrvSSWPInifile );
        err = file.Create(
            iFsSession, fileName, EFileShareAny|EFileStreamText|EFileWrite );
        if (err == KErrAlreadyExists)
            {
            User::LeaveIfError( file.Open(
                    iFsSession,
                    fileName,
                    EFileShareAny | EFileStreamText | EFileWrite ) );
            }
        }
    else
        {
        fileName.Append( KAknsSrvSSSSInifile );
        err = file.Create(
            iFsSession, fileName, EFileShareAny|EFileStreamText|EFileWrite );
        if (err == KErrAlreadyExists)
            {
            User::LeaveIfError( file.Open(
                    iFsSession,
                    KAknsSrvSSSSInifile,
                    EFileShareAny | EFileStreamText | EFileWrite ) );
            }
        }
    CleanupClosePushL(file);

    User::LeaveIfError(file.TransferToClient(aMessage,0));
    CleanupStack::PopAndDestroy(); // file, ownership transferred to client
    }

// -----------------------------------------------------------------------------
// CAknsSrv::CopySoundFileL
// -----------------------------------------------------------------------------
//
void CAknsSrv::CopySoundFileL(const RMessage2 aMessage)
    {
    TFileName sourcefilename;
    TFileName targetfilename;
    aMessage.ReadL( 0,sourcefilename );
    aMessage.ReadL( 1,targetfilename );
    CFileMan* fileMan = CFileMan::NewL( iFsSession );
    CleanupStack::PushL(fileMan);
    User::LeaveIfError(
        fileMan->Copy(
            sourcefilename,
            targetfilename,
            CFileMan::ERecurse | CFileMan::EOverWrite ) );
    CleanupStack::PopAndDestroy( fileMan );
    }

// -----------------------------------------------------------------------------
// CAknsSrv::EnumeratePackages
// -----------------------------------------------------------------------------
//
void CAknsSrv::EnumeratePackages( const RMessage2 aMessage)
    {
    TRAP_IGNORE( EnumeratePackagesL( aMessage ) );
    }

// -----------------------------------------------------------------------------
// CAknsSrv::EnumeratePackagesL
// -----------------------------------------------------------------------------
//
void CAknsSrv::EnumeratePackagesL( const RMessage2 aMessage)
    {
    AKNS_TRACE_INFO("CAknsSrv::EnumeratePackagesL Begin");
    TAknSkinSrvSkinPackageLocation location = (TAknSkinSrvSkinPackageLocation)aMessage.Int1();
    if (iPackageArray)
        {
        iPackageArray->ResetAndDestroy();
        delete iPackageArray;
        iPackageArray = NULL;
        }
    iPackageArray = new (ELeave) CArrayPtrFlat<TAknsSrvSkinInfoPkg>(5);
    CDesC16ArrayFlat* skinfiles = new (ELeave) CDesC16ArrayFlat(5);
    CleanupStack::PushL(skinfiles);

    CAknsSrvDriveMaster* driveMaster = iSettings->GetDriveMaster();
    TInt deviceDrives =
        driveMaster->GetNumberOfDrives( CAknsSrvDriveMaster::EAknsSrvStaticDrive );
    TInt massDrives =
        driveMaster->GetNumberOfDrives( CAknsSrvDriveMaster::EAknsSrvRemovableDrive );

    AKNS_TRACE_INFO1("CAknsSrv::EnumeratePackagesL device drives = %d", deviceDrives );
    AKNS_TRACE_INFO1("CAknsSrv::EnumeratePackagesL mass drives = %d", massDrives );

    TInt index = 0;
    TFileName path;

    switch (location)
        {
        // Drives z and c
        case EAknsSrvPhone:
            CAknsSrvDriveMaster::DefaultSkinDirectoryOnRom( path );
            AknsSrvUtils::SearchDirectoriesL( iFsSession, path, skinfiles );
            for ( ; index < deviceDrives; index++ )
                {
                driveMaster->SkinDirectoryOnDrive(
                    CAknsSrvDriveMaster::EAknsSrvStaticDrive, index, path );
                AknsSrvUtils::SearchDirectoriesL( iFsSession, path, skinfiles );
                }
            break;
        // drive e
        case EAknsSrvMMC:
            for ( ; index < massDrives; index++ )
                {
                driveMaster->SkinDirectoryOnDrive(
                    CAknsSrvDriveMaster::EAknsSrvRemovableDrive, index, path );
                AknsSrvUtils::SearchDirectoriesL( iFsSession, path, skinfiles );
                }
            break;
        // all drives
        case EAknsSrvAll:
            CAknsSrvDriveMaster::DefaultSkinDirectoryOnRom( path );
            AknsSrvUtils::SearchDirectoriesL( iFsSession, path, skinfiles );
            for ( ; index < deviceDrives; index++ )
                {
                driveMaster->SkinDirectoryOnDrive(
                    CAknsSrvDriveMaster::EAknsSrvStaticDrive, index, path );
                AknsSrvUtils::SearchDirectoriesL( iFsSession, path, skinfiles );
                }
            index = 0;
            for ( ; index < massDrives; index++ )
                {
                driveMaster->SkinDirectoryOnDrive(
                    CAknsSrvDriveMaster::EAknsSrvRemovableDrive, index, path );
                AknsSrvUtils::SearchDirectoriesL( iFsSession, path, skinfiles );
                }

            break;
        default: break;
        }

    AKNS_TRACE_INFO1("CAknsSrv::EnumeratePackagesL skin files found = %d", skinfiles->Count() );

    CheckAndCreateDRMHelper();
    AknsSrvUtils::BuildSkinInfoPackagesL(
        iPackageArray, skinfiles, iFsSession, *iDrmHelper );

    TInt count = iPackageArray->Count();
    AKNS_TRACE_INFO1("CAknsSrv::EnumeratePackagesL packages found = %d", count );
    TPtr8 countptr((TUint8*)(&count),4,4);
    aMessage.WriteL( 0,countptr );
    CleanupStack::Pop( skinfiles );
    skinfiles->Reset();
    delete skinfiles;
    AKNS_TRACE_INFO("CAknsSrv::EnumeratePackagesL End");
    }

// -----------------------------------------------------------------------------
// CAknsSrv::ReceivePackages
// -----------------------------------------------------------------------------
//
void CAknsSrv::ReceivePackages( const RMessage2 aMessage )
    {
    TInt pkgcount = aMessage.Int0();

    for (TInt count= 0; count < pkgcount; count++)
        {
        if ( !iPackageArray )
            {
            // No package array.
            break;
            }
        if ( iPackageArray->Count() == 0 )
            {
            // Package array is empty.
            break;
            }
        if ( count >= iPackageArray->Count() )
            {
            // Out-of-bounds with package array.
            break;
            }
        TPtr8 pkgptr((TUint8*)( iPackageArray->At(count)),
            sizeof(TAknsSrvSkinInfoPkg),sizeof(TAknsSrvSkinInfoPkg));
        aMessage.Write(1,pkgptr,count*sizeof(TAknsSrvSkinInfoPkg));
        }
    if ( iPackageArray )
        {
        iPackageArray->ResetAndDestroy();
        }
    delete iPackageArray;
    iPackageArray = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsSrv::DecodeWallpaperImageL
// -----------------------------------------------------------------------------
//
void CAknsSrv::DecodeWallpaperImageL( const RMessage2 aMessage)
    {
    // message params
    // 0 = filename
    // 1 = size
    // 2 = bmphandle
    // 3 = maskhandle
    TFileName filename;
    TSize trgSize;
    TPckg<TSize> sizePack( trgSize );
    aMessage.ReadL(0, filename);
    aMessage.ReadL(1, sizePack);
    
    TAknsSrvWallpaper* wp;
    wp = iWallpaperCache->AddL( iFsSession, filename, trgSize, iMaxWallpaperSize );
    
    if ( !wp )
        {
        return;
        }
    
    TInt bmphandle = 0;
    TInt mskhandle = 0;

    if ( trgSize.iHeight >= trgSize.iWidth )
        {
        bmphandle =  wp->iPortrait ? wp->iPortrait->Handle() : 0;
        mskhandle =  wp->iPortraitMask ? wp->iPortraitMask->Handle() : 0;
        }
    else 
        {
        bmphandle =  wp->iLandscape ? wp->iLandscape->Handle() : 0;
        mskhandle =  wp->iLandscapeMask ? wp->iLandscapeMask->Handle() : 0;
        }
    
    TPtr8 bmpptr((TUint8*)(&bmphandle), 4, 4);
    TPtr8 mskptr((TUint8*)(&mskhandle), 4, 4);
    if (wp->iPortrait || wp->iLandscape)
        {
        aMessage.Write(2,bmpptr);
        }
    
    aMessage.Write(3,mskptr);
    }

// -----------------------------------------------------------------------------
// CAknsSrv::CacheWallpaperImageL
// -----------------------------------------------------------------------------
//
void CAknsSrv::CacheWallpaperImageL( const RMessage2 aMessage)
    {
    // message params
    // 0 = filename
    // 1 = size
    // 2 = bmphandle
    // 3 = maskhandle
    TFileName filename;
    TSize trgSize;
    TPckg<TSize> sizePack( trgSize );
    aMessage.ReadL(0, filename);
    aMessage.ReadL(1, sizePack);
    
    iWallpaperCache->AddL( iFsSession, filename, trgSize, iMaxWallpaperSize ); 
    return;    
    }
// -----------------------------------------------------------------------------
// CAknsSrv::FreeDecodedWallpaper
// -----------------------------------------------------------------------------
//
void CAknsSrv::FreeDecodedWallpaper( const RMessage2 aMessage )
    {
    TFileName filename;
    aMessage.ReadL( 0, filename );
    if ( filename.Length() )
        {
        iWallpaperCache->Remove( filename );
        }
    else
        {
        iWallpaperCache->ResetAndDestory( );
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrv::RestoreDefaultSkin
// -----------------------------------------------------------------------------
//
void CAknsSrv::RestoreDefaultSkin()
    {
    iMergeType = (TAknsSkinSrvMergeType)(iMergeType | EAknsSkinSrvSkin);

    iSettings->WriteSkinToDefault();
    }

// -----------------------------------------------------------------------------
// CAknsSrv::RestoreDefaultIdleWP
// -----------------------------------------------------------------------------
//
void CAknsSrv::RestoreDefaultIdleWP()
    {
    iMergeType = (TAknsSkinSrvMergeType)(iMergeType | EAknsSkinSrvIdleWp);

    iSettings->WriteIdleBackgroundToDefault();
    }

// -----------------------------------------------------------------------------
// CAknsSrv::RemoveAutomatedWallpaper
// -----------------------------------------------------------------------------
//
void CAknsSrv::RemoveAutomatedWallpaper(
    const TAknsItemID aIID, const TDesC8& aContentUri )
    {
    CheckAndCreateDRMHelper();
    if (!iUSBAttached)
        {
        iDrmHelper->SetAutomatedType(CDRMHelper::EAutomatedTypeWallpaper);
        iDrmHelper->RemoveAutomated(aContentUri);
        }
    AKNS_TRACE_INFO("CAknsSrv - RemoveAutomatedWallpaperL: RemoveAutomated called for idlewp");
    RestoreDefaultIdleWP();
    iChunkMaintainer->SetWallpaper( aIID, KNullDesC(), 0 );
    }

// -----------------------------------------------------------------------------
// CAknsSrv::HandleClientError
// -----------------------------------------------------------------------------
//
void CAknsSrv::HandleClientError( TInt aErrorCode )
    {
    AKNS_TRACE_INFO("CAknsSrv::HandleClientError called");
    // Ignore all errors if backup operation is in progress....
    if( iSettings->CachedBackupOperationInProgress() )
        {
        return;
        }
    // We cannot really do anything if the system default skin is
    // already set.....
    if( iSettings->CachedSkinPID() == iSettings->DefaultSkinPID() )
        {
        return;
        }
    else
        {
        TBool enabled = iNotifyEnabled;
        EnableSkinChangeNotify();

        if( aErrorCode==KErrNoMemory )
            {
            ForceNotifySessions( EAknsSCHNConfigurationOOM );
            }
        else
            {
            ForceNotifySessions( EAknsSCHNConfigurationCorrupt );
            }

        SetDefaultSkinActive();

        // This merges the skin content:
        MergeAndBroadcast();

        // Package list might have changed as well
        ForceNotifySessions( EAknsSCHNPackageListUpdate );

        // Restore the notify mechanism to its original state so that
        // clients do not get confused...
        if (!enabled)
            {
            DisableSkinChangeNotify();
            }

        // Try to update values in shareddata also
        RestoreDefaultSDSettings();
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrv::RestoreDefaultSDSettings()
// Restores default shared data settings
// -----------------------------------------------------------------------------
//
void CAknsSrv::RestoreDefaultSDSettings(TBool aExcludeWP)
    {
    AKNS_TRACE_ERROR("CAknsSrv::Skin not found, or other error encountered! Trying to restore default SD settings.");
    if (!iUSBAttached)
        {
        RemoveAutomatedContent();
        }
    iSettings->WriteAllToDefault(aExcludeWP);
    }

// -----------------------------------------------------------------------------
// CAknsSrv::RemoveAutomatedContent
// -----------------------------------------------------------------------------
//
void CAknsSrv::RemoveAutomatedContent()
    {
    // Remove all automated content
    CheckAndCreateDRMHelper();
    if (!iBootFinished)
        {
        return;
        }
    if (iSkinContentUri)
        {
        iDrmHelper->SetAutomatedType(CDRMHelper::EAutomatedTypeTheme);
        iDrmHelper->RemoveAutomated( *iSkinContentUri );
        delete iSkinContentUri;
        iSkinContentUri = NULL;
        }
    if (iIdleWPContentUri)
        {
        iDrmHelper->SetAutomatedType(CDRMHelper::EAutomatedTypeWallpaper);
        iDrmHelper->RemoveAutomated( *iIdleWPContentUri );
        delete iIdleWPContentUri;
        iIdleWPContentUri = NULL;
        }
    if (iSkinContentUri2)
        {
        iDrmHelper->SetAutomatedType(CDRMHelper::EAutomatedTypeTheme);
        iDrmHelper->RemoveAutomated( *iSkinContentUri2 );
        delete iSkinContentUri2;
        iSkinContentUri2 = NULL;
        }
    if (iIdleWPContentUri2)
        {
        iDrmHelper->SetAutomatedType(CDRMHelper::EAutomatedTypeWallpaper);
        iDrmHelper->RemoveAutomated( *iIdleWPContentUri2 );
        delete iIdleWPContentUri2;
        iIdleWPContentUri2 = NULL;
        }
    }


// -----------------------------------------------------------------------------
// CAknsSrv::LoadTfxSrvPluginL
// -----------------------------------------------------------------------------
//
TBool CAknsSrv::LoadTfxSrvPluginL()
    {
    // load ServerController
    if (!iTFXServerCtrl)
        {
        TUid implementationUidCtrl = { KTfxSrvCtrlEcomImpl };
        TAny* inputParams = &iWsSession;

        iTFXServerCtrl =(MTransitionServerController*)
            REComSession::CreateImplementationL( implementationUidCtrl,
                                                iSrvControllerEComDtorUID,
                                                inputParams );
        }

    // load Server
    if (!iTFXServer)
        {
        TUid implementationUidSrv = { KTfxSrvEcomImpl };

        iTFXServer =(MTransitionServer*)
            REComSession::CreateImplementationL( implementationUidSrv,
                                                iSrvEComDtorUID,
                                                 NULL );
        }

    if( iTFXServer && iTFXServerCtrl )
        {
        return ETrue;
        }
    return EFalse;
    }

// -----------------------------------------------------------------------------
// CAknsSrv::GetTransitionNameL
// -----------------------------------------------------------------------------
//
void CAknsSrv::GetTransitionNameL( TFileName& aName, TAknsPkgID aPkgId )
    {

    User::LeaveIfError(iSknFile.FullName(aName));

    TAknsPkgID pkgid = aPkgId;

    aName = KTFxDefaultExtensionPath();
    aName.AppendNumFixedWidthUC( pkgid.iNumber, EHex, 8 );
    if( !pkgid.IsUid() )
        {
        aName.AppendNumFixedWidthUC( pkgid.iTimestamp, EHex, 8 );
        }
    aName.Append(KPathDelimiter);
    aName.AppendNumFixedWidthUC( pkgid.iNumber, EHex, 8 );
    if( !pkgid.IsUid() )
        {
        aName.AppendNumFixedWidthUC( pkgid.iTimestamp, EHex, 8 );
        }
    aName.Append(KTFxExtFileExt);
    if (!AknsSrvUtils::IsFile( iFsSession, aName ) )
        {
        // Try the s60 default as a fallback
        pkgid = KAknsPIDS60DefaultSkin;
        aName = KTFxDefaultExtensionPath();
        aName.AppendNumFixedWidthUC( pkgid.iNumber, EHex, 8 );
        if( !pkgid.IsUid() )
            {
            aName.AppendNumFixedWidthUC( pkgid.iTimestamp, EHex, 8 );
            }
        aName.Append(KPathDelimiter);
        aName.AppendNumFixedWidthUC( pkgid.iNumber, EHex, 8 );
        if( !pkgid.IsUid() )
            {
            aName.AppendNumFixedWidthUC( pkgid.iTimestamp, EHex, 8 );
            }

        aName.Append(KTFxExtFileExt);
        if (!AknsSrvUtils::IsFile( iFsSession, aName ) )
            {
            User::Leave(KErrNotFound);
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrv::CloseTfxServerConnection
// -----------------------------------------------------------------------------
//
void CAknsSrv::CloseTfxServerConnection()
    {
    if( iTFXServer )
        {
        // disconnect also calls close to actual R-object
        iTFXServer->Disconnect();
        delete iTFXServer;
        iTFXServer = NULL;
        REComSession::DestroyedImplementation( iSrvEComDtorUID );
        iSrvEComDtorUID.iUid = 0;
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrv::CheckAndCreateDRMHelper
// -----------------------------------------------------------------------------
//
void CAknsSrv::CheckAndCreateDRMHelper()
    {
    if( iDrmHelper )
        {
        return;
        }

    AKNS_TRACE_INFO("CAknsSrv::CheckAndCreateDRMHelper No helper, creating");

    TRAPD(helperErr, iDrmHelper = CDRMHelper::NewL() );
    if( helperErr || (!iDrmHelper) )
        {
        AKNS_TRACE_ERROR("CAknsSrv::CheckAndCreateDRMHelper FATAL DRMHELPER FAILURE!");
        User::Panic( KAknSkinSrvPanicCategory, EAknsSrvFatalDRMFailure );
        }

    AKNS_TRACE_INFO("CAknsSrv::CheckAndCreateDRMHelper COMPLETED");
    }

// -----------------------------------------------------------------------------
// Sets default skin active.
// -----------------------------------------------------------------------------
//
void CAknsSrv::SetDefaultSkinActive()
    {
    SetActiveSkinContent( iSettings->DefaultSkinPID() );
    }

// -----------------------------------------------------------------------------
// Reads slide set image filenames from file to member variable.
// -----------------------------------------------------------------------------
//
void CAknsSrv::ReadSlideSetImageFilesL()
    {
    WallpaperTimerL()->Stop();

    TFileName fileName;
    CAknsSrvDriveMaster::GetDefaultDrive(
        DriveInfo::EDefaultPhoneMemory, fileName );
    fileName.Append( KAknsSrvSSWPInifile );

    RFile file;
    User::LeaveIfError( file.Open(
        iFsSession,fileName, EFileRead|EFileShareAny ));
    CleanupClosePushL( file );

    if ( iSlideSetNameArray )
        {
        iSlideSetNameArray->Reset();
        delete iSlideSetNameArray;
        iSlideSetNameArray = NULL;
        }
    iSlideSetNameArray = new(ELeave) CDesCArrayFlat(5);

    TFileText textFile;
    textFile.Set( file );
    textFile.Seek( ESeekStart );

    // Wait some time so that file write is finished.
    User::After( KAknSkinSrvWaitForWriteToEnd );

    FOREVER
        {
        TFileName filename;
        if( textFile.Read( filename ) != KErrNone )
            {
            break;
            }
        iSlideSetNameArray->AppendL( filename );
        }
    iCurrentSlide = 0;
    CleanupStack::PopAndDestroy();  // file
    }


// -----------------------------------------------------------------------------
// Returns the pointer to slide set timer.
// -----------------------------------------------------------------------------
//
CAknsSrvWallpaperTimer* CAknsSrv::WallpaperTimerL()
    {
    if ( iWallpaperTimer == NULL )
        {
        iWallpaperTimer = CAknsSrvWallpaperTimer::NewL( this );
        }

    return iWallpaperTimer;
    }

// -----------------------------------------------------------------------------
// Sets slideset wallpaper interval timer active.
// -----------------------------------------------------------------------------
//
void CAknsSrv::SetSlideSetTimerActiveL()
    {
    AKNS_TRACE_INFO("CAknsSrv::SetSlideSetTimerActiveL");

    TInt timeout = iSettings->SlideSetWPTimeout();
    WallpaperTimerL()->Start( timeout );
    }
    
    
// -----------------------------------------------------------------------------
// Load max image size from CenRep.
// -----------------------------------------------------------------------------
//
void CAknsSrv::InitMaxImageSizeL()
    {
    iMaxWallpaperSize = TSize(KAknsMaxWpWidth,KAknsMaxWpHeight);
    
    CRepository* repository = CRepository::NewL( KCRUidWallpaperConfiguration );
    repository->Get( KWpConfMaxWallpaperWidth, iMaxWallpaperSize.iWidth );
    repository->Get( KWpConfMaxWallpaperHeight, iMaxWallpaperSize.iHeight );
    
    delete repository;
    
    }

// -----------------------------------------------------------------------------
// Backup current skin name and active default skin.
// -----------------------------------------------------------------------------
//
void CAknsSrv::BackupAndActiveDefaultSkin()
    {
    if( iSkinOnRemovableDrive )
        {
        iOldSkin = iSettings->CachedSkinPID();
        AKNS_TRACE_INFO("CAknsSrv::NotifyUSBAttach - USB attached, restoring default skin");
        SetDefaultSkinActive();
        RestoreDefaultSDSettings(ETrue);
        MergeAndBroadcast();
        }
    else
        {
        // we really are not interested in mmc stuff if the current skin is not on MMC
        iOldSkin = KAknsNullPkgID;
        return;
        }
    }

// -----------------------------------------------------------------------------
// Reactive backup skin.
// -----------------------------------------------------------------------------
//
void CAknsSrv::RestoreOldSkin()
    {
    if (iOldSkin != KAknsNullPkgID)
        {
           
        if ( iSettings->CachedSkinPID() != iSettings->DefaultSkinPID() )
            {
            //Keep None Default active skin
            iOldSkin = KAknsNullPkgID;
            return;
            }
            
        SetActiveSkinContent( iOldSkin  );
        iSettings->WriteSkinSettings(iOldSkin, ETrue);
        iOldSkin = KAknsNullPkgID;
        MergeAndBroadcast();
        return; // if skin was on mmc, the wallpaper is handled aswell
        }
    // skin was not on mmc, but wp was
    if ( iWPOnRemovableDrive && iWPFilename )
        {
        // Check if wallpaper file is still found.
        // If so, continue observing.
        if ( AknsSrvUtils::IsFile( iFsSession, *iWPFilename ) )
            {
            if (iWallpaperObserver)
                {
                iWallpaperObserver->IssueRequest();
                }
            }
        else
            {
            iWPOnRemovableDrive = EFalse;
            WallpaperLost();
            }
        }
    }

// ========================== OTHER EXPORTED FUNCTIONS =========================

// -----------------------------------------------------------------------------
// ThreadFunction()
// Needed only in WINS build
// -----------------------------------------------------------------------------
//
#ifdef __WINS__
GLDEF_C TInt ThreadFunction( TAny* /*aThreadParams*/ )
    {
    // increase dll's user count so it can't get unloaded when the client
    // application terminates

    RLibrary lib;
    lib.Load( KAknSkinSrvLibName ); // AknSkinServer.dll

    return CAknsSrv::ThreadStart();
    }
#endif // __WINS__

// -----------------------------------------------------------------------------
// StartServer()
// Create the server thread/process
// -----------------------------------------------------------------------------
//
GLDEF_C TInt StartServer()
    {
    AKNS_TRACE_INFO("CAknsSrv/StartServer ENTERED");
    
    TInt ret( KErrNone );

    // Launch server process
    RProcess server;
    ret = server.Create( KAknSkinSrvExe, KNullDesC,
        TUidType( KNullUid, KNullUid, KNullUid ),
        EOwnerThread );

    if( ret != KErrNone )
        {
        AKNS_TRACE_ERROR1("CAknsSrv/StartServer CREATE FAILED, ret=%d", ret);
        return ret;
        }
	
	// Sync server startup
	TRequestStatus rendezvousStatus;
	server.Rendezvous(rendezvousStatus);
	
	// Check the rendezvous status before resuming
	if(rendezvousStatus!=KRequestPending)
		{
		AKNS_TRACE_INFO("CAknsSrv/StartServer: startup aborted");
		server.Kill(0); // Abort startup
		}
	else
		{
		AKNS_TRACE_INFO("CAknsSrv/StartServer: resuming server process");
		server.Resume(); // Resume process
		}
	
	AKNS_TRACE_INFO("CAknsSrv/StartServer: wait for server");
	
	// Wait for server start (or death)
	User::WaitForRequest(rendezvousStatus);
	
	// We can't use status alone since it might be 0 in case of a panic
	ret = (server.ExitType()==EExitPanic) ? KErrGeneral : rendezvousStatus.Int();
	
	// Close server handle	
    server.Close();

	AKNS_TRACE_INFO1("CAknsSrv/StartServer: server start status %d", rendezvousStatus.Int());

	AKNS_TRACE_INFO("CAknsSrv/StartServer EXIT");
	
	// Return the status code
    return rendezvousStatus.Int();
    }


// -----------------------------------------------------------------------------
// Check if the slideset wallpaper can change.
// -----------------------------------------------------------------------------
//
TBool CAknsSrv::CanChangeSlidesetWallpaperL()
    {
    TBool retval = EFalse;
    RWsSession wsSession;
    
    TInt errorcode = wsSession.Connect();
    if(errorcode != KErrNone)
        {
        return retval;
        }
    
    CleanupClosePushL(wsSession);
    CApaWindowGroupName *topWindowgroup = CApaWindowGroupName::NewLC(wsSession, wsSession.GetFocusWindowGroup());
    TUid topUid = topWindowgroup->AppUid();
    CleanupStack::PopAndDestroy(2);

    if( iSlidesetEnableAppUidArray.Find( topUid.iUid ) != KErrNotFound )
        {
        retval = ETrue;            
        }
    
    return retval;
    }

// -----------------------------------------------------------------------------
// Load slideset disable application uid from rss file.
// -----------------------------------------------------------------------------
//
void CAknsSrv::InitSlidesetEnableAppUid()
    {
    for ( int i = 0; i < sizeof( KSlidesetEnableAppUid )
        / sizeof( KSlidesetEnableAppUid[0] ); i++ )
        {
        iSlidesetEnableAppUidArray.Append( KSlidesetEnableAppUid[i] );
        }
    }

// End of File
