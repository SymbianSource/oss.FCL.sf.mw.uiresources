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


#ifndef AKNSSRV_H
#define AKNSSRV_H

// INCLUDES

#include <e32base.h>
#include <fbs.h>

#include <w32std.h>

#include "AknsSrvSettings.h"
#include <AknsItemID.h>
#include <AknsPkgID.h>
#include "AknsSrvItemDef.h"
#include "AknsSrvSession.h"
#include <AknsSrvSkinInformationPkg.h>
#include "AknsSrvChunkMaintainer.h"
#include "AknsSrvBitmapRenderer.h"
#include "AknsSrvBitmapStore.h"
#include "aknssrvinstallobserver.h"
#include "aknssrvwallpapertimer.h"

#include "AknsSrvWallpaperCache.h"

#include "tfxconfigparser.h"
// CONSTANTS
// File extension for dynamic link library.
_LIT(KDllPostFix,".DLL");
// File extension for skin binary file.
_LIT(KSKNPostFix,"\\*.SKN");

// Empty string.
_LIT( KAknsSkinSrvEmptyString, "" );

const TUint KAknSkinSrvMajorVersionNumber=0;
const TUint KAknSkinSrvMinorVersionNumber=1;
const TUint KAknSkinSrvBuildVersionNumber=1;

// Needed for creating server thread.
const TUint KDefaultHeapSize=160*1024;

_LIT(KAknSkinSrvName,"!AknSkinServer");
_LIT(KAknSkinSrvExe,"Z:\\System\\Programs\\AknSkinSrv.exe");
_LIT(KAknSkinSrvLibName,"AknSkinSrv.dll");

// Minimum amount of RAM needed to activate skin.
const TInt KAknSkinSrvFreeRAMNeeded = 2000000;

// Amount of time to wait when ini-file has changed, so that 
// writing is finished.
const TInt KAknSkinSrvWaitForWriteToEnd = 1000000;

class MTransitionServerController;
class MTransitionServer;

// DATA TYPES

/**
* Opcodes used in message passing between client and server.
*/
enum TAknSkinSrvRequest
    {
    EAknSkinSrvEnableNotifySkinChange   = 0,
    EAknSkinSrvDisableNotifySkinChange  = 1,
    EAknSkinSrvSetAllItemDefSets        = 2,
    EAknSkinSrvSetItemDefSet            = 3,
    EAknSkinSrvClientError              = 4,
    EAknSkinSrvSetNotifyHandler         = 5,
    EAknSkinSrvNextEvent                = 6,
    EAknSkinSrvCancel                   = 7,
    EAknSkinSrvSetIdleWallPaper         = 8,
    EAknSkinSrvSetPinboardWallPaper     = 9,
    EAknSkinSrvStoreScalableGfx         = 10,
    EAknSkinSrvClearScalableGfx         = 11,
    EAknSkinSrvAckNotification          = 12,
    EAknSkinSrvOpenBitmapFile           = 13,
    EAknSkinSrvDeleteSkin               = 14,
    EAknSkinSrvCopySkin                 = 15,
    EAknSkinSrvOpenIniFile              = 16,
    EAknSkinSrvCopySoundFile            = 17,
    EAknSkinSrvEnumeratePackages        = 18,
    EAknSkinSrvReceivePackages          = 19,
    EAknSkinSrvStoreMorphingScalableGfx = 20,
    EAknSkinSrvDecodeWallpaperImage     = 21,
    EAknSkinSrvFreeDecodedWallpaper     = 22,
    EAknSkinSrvFreeLayoutBitmaps        = 23,
    EAknSkinSrvOpenImageInifile         = 24,
    EAknSkinSrvSetSlideSetWP            = 25,
    EAknSkinSrvCheckIconConfiguration   = 26,
    EAknSkinSrvStopSSIniFileObserver    = 27,
    EAknSkinSrvCacheWallpaperImage      = 28,
    };

enum TAknsSkinSrvMergeType
    {
    EAknsSkinSrvNone = 0,
    EAknsSkinSrvSkin = 2,
    EAknsSkinSrvIdleWp = 4,
    EAknsSkinSrvPinbWp = 8,
    };

struct TAknsSrvLayoutInfo
    {
    TInt iLayoutType;
    TSize iLayoutSize;
    };


// FUNCTION PROTOTYPES

/**
* Function to start the server thread/process.
*/
GLREF_C TInt StartServer();

#ifdef __WINS__

/**
* Thread function for WINS builds.
*/
GLREF_C TInt ThreadFunction( TAny* aThreadParams );

#endif // __WINS__

// FORWARD DECLARATIONS

class CAknsSrvExclusionList;
class CDRMHelper;
class CAknsSrvBitmapStore;
class CAknsSrvActiveDataOwner;
class CAknsSrvIconConfigMap;


// CLASS DECLARATIONS


/**
* Server implementation class.
*
*/
NONSHARABLE_CLASS(CAknsSrv) : public CServer2,
                              public MAknsSrvSettingObserver,
                              public MAknsSrvMorphingListener,
                              public MAknsSrvFileObserver,
                              public MAknsSrvWallpaperListener
    {
    public:

        /**
        * Static constructor.
        *
        * @return Newly created server object.
        */
        static CAknsSrv* New( TBool& aStartFailed );

        /**
        * Destructor.
        */
        virtual ~CAknsSrv();

    public:

        /**
        * Creates a new session.
        *
        * @since 2.0
        *
        * @param aVersion Skin server version.
        *
        * @return Newly created session object.
        */
        CSession2* NewSessionL( const TVersion& aVersion, const RMessage2& aMessage) const;

        /**
        * Server bootstrap code.
        *
        * @since 2.0
        *
        *
        */
        IMPORT_C static TInt ThreadStart();

    public: // From MAknsSrvSettingObserver

        void NotifyBackupOperationEnd();
        void NotifyLayoutChange(TBool aClearScalable);
        void NofifySkinChange();
        void NotifyIdleBackgroundChange();
        void NotifyDRMChange();
        void NotifyDRMChangeL();
        void NotifyUSBAttach();
        void NotifyUSBRemoval();
        void NotifySlideSetTimeoutChange();
        void NotifySlideSetTypeChange();
        void NotifyWallpaperTypeChange();
        // Notify screensaver state change.
        void NotifyScreenSaverChange();

        void NotifyTransitionFxChange();
        void StartTransitionSrvL(TBool aSkipSrvStart = EFalse);
        void StopTransitionSrv();
        void NotifyDriveChange( const TInt& aDrive, const TBool& aMediaNotPresent );
        void NotifyBackupOperationBegin();
        void NotifyAnimBackgroundChange();

    public:
        void MorhphingEventTimeout();
        void NewSkinPackagesInstalled();
        void WallpaperLost();
        // Observer interface - slide set ini-file has been changed.
        void SlideSetModifiedL();
    public: // New functions

        /**
        * Disables the skin notification mechanism.
        *
        * @since 2.0
        *
        */
        void DisableSkinChangeNotify();

        /**
        * Enables the skin notification mechanism
        *
        * @since 2.0
        */
        void EnableSkinChangeNotify();

        void BroadcastUpdate();
        /**
        * Merges skin content and notifies all the sessions.
        *
        * @since 2.7
        */
        TInt MergeAndBroadcast();

        /**
        * Notifies change of the given type to all sessions.
        *
        * @param aType Type of the notification.
        *
        * @return Number of sessions that will process the notification.
        *
        * @since 2.5
        */
        TInt ForceNotifySessions(
            const TAknsSkinChangeHandlerNotification aType,
            TBool aCountNotifications = EFalse);

        /**
        * Skin content setter function.
        *
        * @since 2.0
        *
        * @param aPID Package ID of the skin that will be used for all the item
        *   types.
        */
        void SetActiveSkinContent(const TAknsPkgID aPID);

        /**
        * Prepares merged skin content based on active definition sets.
        *
        * @since 2.0
        */
        void PrepareMergedSkinContentL();

        /**
        * Prepares merged skin content based on active definition sets
        * without being semaphore-safe.
        *
        * @since 2.8
        */
        void PrepareMergedSkinContentUnprotectedL();

        /**
        * Handles the client error condition.
        */
        void HandleClientError(TInt aErrorCode);

        /**
        *
        */
        void SetWallpaperL(const TDesC& aFilename,
            const TAknsItemID& aIID, TBool aIsSlide = EFalse);

        /**
        *
        * @since 2.8
        */
        void StoreScalableGraphicsL( const TAknsItemID& aIID,
            const TInt aType, const TSize& aSize, TInt aBmpHandle, TInt aMskHandle, TBool aMorphing);

        /**
        *
        * @since 2.8
        */
        void ClearScalableGraphics();

        /**
        * Marks the given notification acknowledged.
        *
        * @param aType Type of the notification.
        *
        * @since 2.7
        */
        void AcknowledgeNotification( const TInt aType );

        void OpenBitmapFileL( const RMessage2 aMessage );
        void OpenIniFileL( const RMessage2 aMessage);
        void CopySoundFileL( const RMessage2 aMessage);
        void EnumeratePackages( const RMessage2 aMessage );
        void EnumeratePackagesL( const RMessage2 aMessage );
        void ReceivePackages( const RMessage2 aMessage );
        void DecodeWallpaperImageL( const RMessage2 aMessage);
        void FreeDecodedWallpaper( const RMessage2 aMessage );
        void CacheWallpaperImageL( const RMessage2 aMessage);

        /**
        * Opens ini-file for slideset.
        *
        * @since 3.2
        */
        void OpenImageInifileL(const RMessage2 aMessage);

        TBool CheckImageL(const TDesC& aFilename, TBool& aIsProtected );

        /**
        *
        */
        void SetSlidesetWallpaperL();

        /**
        *
        */
        void WallpaperTimerTimeoutL( TBool aForceChange = EFalse );

        /**
        *
        */
        void StopSlidesetIniFileObserver();

        /**
        *
        */
        void FreeLayoutBitmaps( const RMessage2 aMessage);

        /**
        * Checks if the application UID has repository based configuration for its icons.
        * 
        * @since 3.2
        */
        TInt CheckIconConfiguration( const RMessage2 aMessage );

    private:

        /**
        * Default C++ constructor
        */
        CAknsSrv();

        /**
        * The actual skin merge function.
        */
        void DoMergeSkinL( const TAknsPkgID aSkinPID,
            const TAknsPkgID aLocationPID,
            const TAknsItemDefClass aClass, const TBool aClearTable,
            const TBool aAHOverrideSkin );

        /**
        * Restores default shared data settings
        */
        void RestoreDefaultSDSettings(TBool aExcludeWP = EFalse);

        void RestoreDefaultSkin();
        void RestoreDefaultIdleWP();

        void CheckAndCreateDRMHelper();
        void RemoveAutomatedWallpaper(const TAknsItemID aIID, const TDesC8& aContentUri);
        void RemoveAutomatedContent();

        /**
        * Loads TfxSrv srv / srv controller objects if available
        */
        TBool LoadTfxSrvPluginL();
        void GetTransitionNameL( TFileName& aName, TAknsPkgID aPkgId );
        void CloseTfxServerConnection();

        /**
        * Sets default skin active.
        */
        void SetDefaultSkinActive();

        /**
        * Reads slide set filenames from a file to a member variable.
        */
        void ReadSlideSetImageFilesL();

        /**
        * Returns the pointer to slide set timer.
        * If timer is not created, creates it first.
        */
        CAknsSrvWallpaperTimer* WallpaperTimerL();

        /**
        * Sets the slide set timer active.
        */
        void SetSlideSetTimerActiveL();
        
        /**
        * Load max image size from CenRep.
        */
        void InitMaxImageSizeL();


        /**
        * Backup current skin name and active default skin.
        */
        void BackupAndActiveDefaultSkin();

        /**
        * Reactive backup skin.
        */
        void RestoreOldSkin();

        /**
        * Check if the slideset wallpaper can change.
        */
        TBool CanChangeSlidesetWallpaperL();
        
        /**
        * Load slideset enable application uid.
        */
        void InitSlidesetEnableAppUid();
        
		/**
        * Check if active skin support animation background
        */
        TBool ActiveSkinAnimBgSupportL();
        
		/**
        * Get animation background parameter of active skin, 
		* Owner Transfered
        */
        HBufC* ActiveSkinAnimBgParamL();
        
        /**
        * Start animation background if possible
        */
        void StartAnimBackgroundL();   

    private: // Data

        CAknsSrvSettings* iSettings;

        TBool iNotifyEnabled;
        TBool iContentChanged;
        TInt iOutstandingChangeEvents;

        RFbsSession iFbsSession;
        RFs iFsSession;

        TInt iSkinCount;
        CAknsSrvSkinInformationPkg* iSkinInfoPkgs;

        CAknsSrvChunkMaintainer* iChunkMaintainer;

        CAknsSrvExclusionList* iExclusionList;

        CDRMHelper* iDrmHelper;
        HBufC8* iSkinContentUri;
        HBufC8* iIdleWPContentUri;
        HBufC8* iSkinContentUri2;
        HBufC8* iIdleWPContentUri2;
        HBufC* iWPFilename;
        TAknsPkgID iOldSkin;

        CBaBackupSessionWrapper* iBackupSession;

        // Active skin in on removable drive.
        TBool iSkinOnRemovableDrive;

        // Current wallpaper on removable drive.
        TBool iWPOnRemovableDrive;

        // USB cable has been attached.
        TBool iUSBAttached;

        CAknsSrvBitmapStore* iBitmapStore;
        TAknsSkinSrvMergeType iMergeType;
        TBool iBootFinished;

        CArrayPtrFlat<TAknsSrvSkinInfoPkg>* iPackageArray;

        CAknsSrvFileObserver* iInstallObserver;
        CAknsSrvFileObserver* iWallpaperObserver;

        RFile iSknFile;

        /*
        *  Timer for slideset.
        *  Own.
        */
        CAknsSrvWallpaperTimer* iWallpaperTimer;

        /*
        * Index of currently active wallpaper in slideset.
        */
        TInt iCurrentSlide;

        /* 
        *  Array of filenames forming the slideset.
        *  Own.
        */
        CDesCArray* iSlideSetNameArray;
        
        /* 
        * Type of wallpaper (none/image/slideset).
        */
        TInt iWallpaperType;

        /**
        * Observes for slide set wallpaper ini-file changes.
        * Own.
        */
        CAknsSrvFileObserver* iSlideSetObserver;

        // For transition effects

        // using tfxsrv via plugin interface
        MTransitionServerController* iTFXServerCtrl;
        MTransitionServer* iTFXServer;

        // for destroying ecom implementation
        TUid iSrvControllerEComDtorUID;
        TUid iSrvEComDtorUID;

        RWsSession iWsSession;

        /* Observes for backup state and controls active data owner
        *  for skin server backup/restore.
        *  Own.
        */
        CAknsSrvActiveDataOwner* iBackupNotifier;

        /**
        * Drive ID of removable drive, where active skin is located.
        */
        TInt iDriveIdOfRemovableDrive;
        
        /**
        * Wallpaper max size. 
        */
        TSize iMaxWallpaperSize;

        /* Contains indication if certain application icon is configured
        * using cenrep. Then skinned icon should not be used.
        * Icon configuration is language based.
        * Own.
        */
        CAknsSrvIconConfigMap* iIconConfigMap;
        
        /**
        * Slidesetwallpaper-enable application whitelist
        */
        RArray<TInt> iSlidesetEnableAppUidArray;
        
        /**
        * WallpaperCache
        */
        CAknsSrvWallpaperCache* iWallpaperCache;
        
        TBool iSetSlideSet;
        
    };


#endif // AKNSSRV_H

// End of File

