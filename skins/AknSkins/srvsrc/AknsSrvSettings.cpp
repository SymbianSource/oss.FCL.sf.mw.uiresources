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
* Description:  Skin server settings.
*
*/


// INCLUDE FILES

#include "AknsSrvSettings.h"
#include <AknsSkinUID.h>

#include "AknsDebug.h"

#include <AknLayoutDef.h>
#include <centralrepository.h>
#include <driveinfo.h>
#include <pathinfo.h>

// CenRep keys.
#include <AvkonInternalCRKeys.h>                // KAknLayoutId
#include <AknSkinsInternalCRKeys.h>             // KPslnActiveSkinUid, ...
#include <DRMHelperServerInternalCRKeys.h>      // KDRMHelperServerNotification
#include <pslninternalcrkeys.h>                 // KThemesWallpaperSlideSetType

//PubSub keys.
#include <UsbWatcherInternalPSKeys.h>           // KPSUidUsbWatcher
#include <usbpersonalityids.h>                  // KUsbPersonalityIdMS

// Default theme has been configured to be different from S60 Default skin.
_LIT( KAknSkinSrvNoDefaultThemeConfigured, "0" );

// Length of hex UID in characters (number or timestamp)
const TInt KAknsSkinSrvUIDLength = 8;

// ============================== LOCAL CLASSES ================================

NONSHARABLE_CLASS(CAknsPropertySubscriber) : public CActive
    {
    public:
        CAknsPropertySubscriber(TCallBack aCallBack, RProperty& aProperty);
        virtual ~CAknsPropertySubscriber();

    public: // New functions
        void SubscribeL();
        void StopSubscribe();

    private: // from CActive
        void RunL();
        void DoCancel();

    private:
        TCallBack   iCallBack;
        RProperty&  iProperty;
    };

NONSHARABLE_CLASS(CAknsRepositoryWatcher) : public CBase,
    public MCenRepNotifyHandlerCallback
    {
    public:
        static CAknsRepositoryWatcher* NewL(
            const TUid aUid, const TUint32 aKey,
            CCenRepNotifyHandler::TCenRepKeyType aKeyType,
            TCallBack aCallBack, CRepository* aRepository );

        static CAknsRepositoryWatcher* NewL(
            const TUid aUid, TCallBack aCallBack, CRepository* aRepository);

        virtual ~CAknsRepositoryWatcher();

        TUint32 ChangedKey();

    public: // from MCenRepNotifyHandlerCallback
        void HandleNotifyInt(
            TUint32 aKey, TInt aNewValue );
        void HandleNotifyString(
            TUint32 aKey, const TDesC16& aNewValue );
        void HandleNotifyGeneric(
            TUint32 aKey );
        void HandleNotifyError(
            TUint32 aKey, TInt aError, CCenRepNotifyHandler* aHandler );

    private:
        CAknsRepositoryWatcher(
            const TUid aUid, const TUint32 aKey,
            TCallBack aCallBack, CRepository* aRepository);

        void ConstructL(CCenRepNotifyHandler::TCenRepKeyType aKeyType);

        void ConstructL();

    private: // Data
        TUid iUid;
        TUint32 iKey;
        TUint32 iChangedKey;
        TCallBack iCallBack;
        CRepository* iRepository;
        CCenRepNotifyHandler* iNotifyHandler;
    };

// -----------------------------------------------------------------------------
// C++ constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CAknsPropertySubscriber::CAknsPropertySubscriber(
    TCallBack aCallBack, RProperty& aProperty)
    : CActive(EPriorityNormal), iCallBack(aCallBack), iProperty(aProperty)
    {
    CActiveScheduler::Add(this);
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsPropertySubscriber::~CAknsPropertySubscriber()
    {
    Cancel();
    }

// -----------------------------------------------------------------------------
// Starts to listen for changes.
// -----------------------------------------------------------------------------
//
void CAknsPropertySubscriber::SubscribeL()
    {
    if (!IsActive())
        {
        iProperty.Subscribe(iStatus);
        SetActive();
        }
    }

// -----------------------------------------------------------------------------
// Stops listening for changes.
// -----------------------------------------------------------------------------
//
void CAknsPropertySubscriber::StopSubscribe()
    {
    Cancel();
    }

// -----------------------------------------------------------------------------
// When active object fires, call callback and continue listening.
// -----------------------------------------------------------------------------
//
void CAknsPropertySubscriber::RunL()
    {
    if (iStatus.Int() == KErrNone)
        {
        iCallBack.CallBack();
        SubscribeL();
        }
    }

// -----------------------------------------------------------------------------
// Cancel.
// -----------------------------------------------------------------------------
//
void CAknsPropertySubscriber::DoCancel()
    {
    iProperty.Cancel();
    }

// -----------------------------------------------------------------------------
// Constructor.
// -----------------------------------------------------------------------------
//
CAknsRepositoryWatcher* CAknsRepositoryWatcher::NewL(
    const TUid aUid,
    const TUint32 aKey,
    CCenRepNotifyHandler::TCenRepKeyType aKeyType,
    TCallBack aCallBack,
    CRepository* aRepository)
    {
    CAknsRepositoryWatcher* self =
        new(ELeave) CAknsRepositoryWatcher(aUid, aKey, aCallBack, aRepository);

    CleanupStack::PushL(self);
    self->ConstructL(aKeyType);
    CleanupStack::Pop(self);

    return self;
    }

// -----------------------------------------------------------------------------
// Constructor.
// -----------------------------------------------------------------------------
//
CAknsRepositoryWatcher* CAknsRepositoryWatcher::NewL(
    const TUid aUid,
    TCallBack aCallBack,
    CRepository* aRepository)
    {
    CAknsRepositoryWatcher* self = new(ELeave) CAknsRepositoryWatcher(
        aUid,
        NCentralRepositoryConstants::KInvalidNotificationId,
        aCallBack,
        aRepository );

    CleanupStack::PushL(self);
    self->ConstructL();
    CleanupStack::Pop(self);

    return self;
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsRepositoryWatcher::~CAknsRepositoryWatcher()
    {
    if (iNotifyHandler)
        {
        iNotifyHandler->StopListening();
        }
    delete iNotifyHandler;
    }

// -----------------------------------------------------------------------------
// C++ constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CAknsRepositoryWatcher::CAknsRepositoryWatcher(
    const TUid aUid,
    const TUint32 aKey,
    TCallBack aCallBack,
    CRepository* aRepository)
    : iUid(aUid), iKey(aKey), iCallBack(aCallBack), iRepository(aRepository)
    {
    }

// -----------------------------------------------------------------------------
// 2nd phase constructor.
// -----------------------------------------------------------------------------
//
void CAknsRepositoryWatcher::ConstructL(
    CCenRepNotifyHandler::TCenRepKeyType aKeyType)
    {
    iNotifyHandler = CCenRepNotifyHandler::NewL(
        *this, *iRepository, aKeyType, iKey);
    iNotifyHandler->StartListeningL();
    }

// -----------------------------------------------------------------------------
// 2nd phase constructor.
// -----------------------------------------------------------------------------
//
void CAknsRepositoryWatcher::ConstructL()
    {
    iNotifyHandler = CCenRepNotifyHandler::NewL(*this, *iRepository);
    iNotifyHandler->StartListeningL();
    }

// -----------------------------------------------------------------------------
// Returns Uid of changed key,
// -----------------------------------------------------------------------------
//
TUint32 CAknsRepositoryWatcher::ChangedKey()
    {
    return iChangedKey;
    }

// -----------------------------------------------------------------------------
// Repository has changed - int key.
// -----------------------------------------------------------------------------
//
void CAknsRepositoryWatcher::HandleNotifyInt(TUint32 aKey, TInt /*aNewValue*/)
    {
    iChangedKey = aKey;
    iCallBack.CallBack();
    iChangedKey = NCentralRepositoryConstants::KInvalidNotificationId;
    }

// -----------------------------------------------------------------------------
// Repository has changed - string key.
// -----------------------------------------------------------------------------
//
void CAknsRepositoryWatcher::HandleNotifyString(
    TUint32 aKey, const TDesC16& /*aNewValue*/)
    {
    iChangedKey = aKey;
    iCallBack.CallBack();
    iChangedKey = NCentralRepositoryConstants::KInvalidNotificationId;
    }

// -----------------------------------------------------------------------------
// Repository has changed - all keys.
// -----------------------------------------------------------------------------
//
void CAknsRepositoryWatcher::HandleNotifyGeneric(TUint32 aKey)
    {
    iChangedKey = aKey;
    iCallBack.CallBack();
    iChangedKey = NCentralRepositoryConstants::KInvalidNotificationId;
    }

// -----------------------------------------------------------------------------
// Error in repository.
// -----------------------------------------------------------------------------
//
void CAknsRepositoryWatcher::HandleNotifyError(
    TUint32 /*aKey*/, TInt /*aError*/, CCenRepNotifyHandler* /*aHandler*/)
    {
    }


// ============================= LOCAL FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// RetrieveInt
// Retrieves an integer (to the given reference) from shared data, or uses
// default value if an error occured.
// -----------------------------------------------------------------------------
//
static TInt RetrieveInt(
    CRepository* aRepository, const TUint32 aKey,
    TInt& aValue, const TInt aDefaultValue )
    {
    TInt errorCode = aRepository->Get( aKey, aValue );
    if( errorCode != KErrNone )
        {
        aValue = aDefaultValue;
        }
    return errorCode;
    }

// -----------------------------------------------------------------------------
// RetrievePID
// Retrieves a package ID (to the given reference) from shared data, or uses
// default value if an error occured.
// -----------------------------------------------------------------------------
//
static TInt RetrievePID(
    CRepository* aRepository, const TUint32 aKey,
    TAknsPkgID& aValue, const TAknsPkgID& aDefaultValue )
    {
    TAknsPkgIDBuf buf;
    TInt errorCode = aRepository->Get( aKey, buf );
    if( errorCode == KErrNone )
        {
        TRAP( errorCode, aValue.SetFromDesL(buf) );
        }
    if( errorCode != KErrNone )
        {
        aValue.Set(aDefaultValue);
        }
    return errorCode;
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// C++ constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CAknsSrvSettings::CAknsSrvSettings( MAknsSrvSettingObserver* aObserver, RFs& aFileSystemSession )
    : iObserver( aObserver ), iFsSession ( aFileSystemSession )
    {
    // We need to update this, when class is completely constructed.
    iActiveSkinPID.Set( KAknsPIDProductDefaultSkin );
    }

// -----------------------------------------------------------------------------
// 2nd phase constructor.
// -----------------------------------------------------------------------------
//
void CAknsSrvSettings::ConstructL()
    {
    iAvkonRepository = CRepository::NewL(KCRUidAvkon);
    iSkinsRepository = CRepository::NewL(KCRUidPersonalisation);
    iDefaultSkinPID = KAknsNullPkgID;
    iThemesRepository = CRepository::NewL(KCRUidThemes);
    ReadDefaultSkinID();

    ReadAHMirroringActive();
    ReadActiveSkinPID();
    ReadHighlightAnimEnabled();

    iDriveMaster = CAknsSrvDriveMaster::NewL( this );

    iIdleTime = CIdle::NewL( CActive::EPriorityIdle );
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsSrvSettings::~CAknsSrvSettings()
    {
    delete iAvkonRepositoryWatcher;
    delete iAvkonRepository;
    delete iSkinsRepositoryWatcher;
    delete iSkinsRepository;
    delete iThemesRepository;

    if( iUSBWatchSubscriber )
        {
        iUSBWatchSubscriber->StopSubscribe();
        }
    iEnableUSBWatchProperty.Close();
    delete iUSBWatchSubscriber;

    if( iScreensaverActivationSubscriber )
        {
        iScreensaverActivationSubscriber->StopSubscribe();
        }
    iScreensaverActivationProperty.Close();
    delete iScreensaverActivationSubscriber;

    if ( iIdleTime )
        {
        iIdleTime->Cancel();
        }
    delete iIdleTime;
    delete iDriveMaster;
    }

// -----------------------------------------------------------------------------
// Constructor.
// -----------------------------------------------------------------------------
//
CAknsSrvSettings* CAknsSrvSettings::NewL(
    MAknsSrvSettingObserver* aObserver, RFs& aFileSystemSession )
    {
    CAknsSrvSettings* self = new (ELeave) CAknsSrvSettings( aObserver, aFileSystemSession );
    CleanupStack::PushL( self );
    self->ConstructL();
    CleanupStack::Pop( self );
    return self;
    }

// -----------------------------------------------------------------------------
// Callback - USB status change.
// -----------------------------------------------------------------------------
//
TInt CAknsSrvSettings::USBCallBack(TAny* aPtr)
    {
    CAknsSrvSettings* self = static_cast<CAknsSrvSettings*>(aPtr);
    if (self)
        {
        self->HandlePropertyChange(EAknsSrvSPUSBAttached);
        }
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// Callback - when screensaver state changes.
// -----------------------------------------------------------------------------
//
TInt CAknsSrvSettings::SSCallBack(TAny* aPtr)
    {
    CAknsSrvSettings* self = static_cast<CAknsSrvSettings*>(aPtr);
    if (self)
        {
        self->HandlePropertyChange( EAknsSrvSPScreensaverActivation );
        }
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// Callback - layout changed.
// -----------------------------------------------------------------------------
//
TInt CAknsSrvSettings::LayoutCallBack(TAny* aPtr)
    {
    CAknsSrvSettings* self = static_cast<CAknsSrvSettings*>(aPtr);
    if (self)
        {
        self->HandlePropertyChange( EAknsSrvSPLayoutId );
        }
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// Callback - skins repository.
// -----------------------------------------------------------------------------
//
TInt CAknsSrvSettings::SkinsRepositoryCallBack(TAny* aPtr)
    {
    CAknsSrvSettings* self = static_cast<CAknsSrvSettings*>(aPtr);
    if (self)
        {
        switch( self->iSkinsRepositoryWatcher->ChangedKey() )
            {
            case KPslnActiveSkinUid:
                break;
            case KPslnWallpaperType:
                self->HandlePropertyChange( EAknsSrvSPWallpaperType );
                break;
            };
        }
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// Callback - Themes repository.
// -----------------------------------------------------------------------------
//
TInt CAknsSrvSettings::ThemesRepositoryCallBack(TAny* aPtr)
    {
    CAknsSrvSettings* self = static_cast<CAknsSrvSettings*>(aPtr);
    if (self)
        {
        switch( self->iThemesRepositoryWatcher->ChangedKey() )
            {
            case KThemesWallpaperSlideSetInterval:
                self->HandlePropertyChange( EAknsSrvSPSlidesetWPTimeout );
                break;
            case KThemesWallpaperSlideSetType:
                self->HandlePropertyChange( EAknsSrvSPSlidesetWPType );
                break;
            case KThemesTransitionEffects:
                self->HandlePropertyChange( EAknsSrvSPTransitionFx );
                break;
            case KThemesAnimBackgroundSupport:
                self->HandlePropertyChange( EAknsSrvSPAnimBackground );
                break;
            default:
                break;
            };
        }
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// Callback - DRM repository.
// -----------------------------------------------------------------------------
//
TInt CAknsSrvSettings::DRMRepositoryCallBack(TAny* aPtr)
    {
    CAknsSrvSettings* self = static_cast<CAknsSrvSettings*>(aPtr);
    if (self)
        {
        if( self->iDRMRepositoryWatcher->ChangedKey() ==
            KDRMHelperServerNotification )
            {
            self->HandlePropertyChange( EAknsSrvSPDRMHelperNotification );
            }
        }
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// Backup operation handling.
// -----------------------------------------------------------------------------
//
void CAknsSrvSettings::HandleBackupOperationEventL(
    const TBackupOperationAttributes& aBackupOperationAttributes )
    {
    if( aBackupOperationAttributes.iOperation == EStart )
        {
        AKNS_TRACE_INFO("CAknsSrvSettings::HandleBackupOperationEventL Operation START");
        iBackupOperationInProgress = ETrue;
        iObserver->NotifyBackupOperationBegin();
        }
    else if( aBackupOperationAttributes.iOperation == EEnd ||
        aBackupOperationAttributes.iOperation == EAbort )
        {
        AKNS_TRACE_INFO("CAknsSrvSettings::HandleBackupOperationEventL Operation END/ABORT");
        iBackupOperationInProgress = EFalse;
        iObserver->NotifyBackupOperationEnd();
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrvSettings::NotifyDriveStatusChange
// -----------------------------------------------------------------------------
//
void CAknsSrvSettings::NotifyDriveStatusChange(
    const TInt& aDrive, const TBool& aMediaNotPresent  )
    {
    iObserver->NotifyDriveChange( aDrive, aMediaNotPresent );
    }

// -----------------------------------------------------------------------------
// Starts additional listeners.
// -----------------------------------------------------------------------------
//
void CAknsSrvSettings::InstallAdditionalWatchersL()
    {
    iAvkonRepositoryWatcher = CAknsRepositoryWatcher::NewL(
        KCRUidAvkon,
        KAknLayoutId,
        CCenRepNotifyHandler::EIntKey,
        TCallBack(LayoutCallBack, this),
        iAvkonRepository );

    iSkinsRepositoryWatcher = CAknsRepositoryWatcher::NewL(
        KCRUidPersonalisation,
        TCallBack(SkinsRepositoryCallBack, this),
        iSkinsRepository );

    iDRMRepository = CRepository::NewL(KCRUidDRMHelperServer);
    iDRMRepositoryWatcher = CAknsRepositoryWatcher::NewL(
        KCRUidDRMHelperServer,
        KDRMHelperServerNotification,
        CCenRepNotifyHandler::EStringKey,
        TCallBack(DRMRepositoryCallBack, this),
        iDRMRepository );

    iThemesRepositoryWatcher = CAknsRepositoryWatcher::NewL(
        KCRUidThemes,
        TCallBack(ThemesRepositoryCallBack, this),
        iThemesRepository);

    iScreensaverActivationSubscriber = new (ELeave) CAknsPropertySubscriber(
        TCallBack(SSCallBack, this), iScreensaverActivationProperty );

    User::LeaveIfError( iEnableUSBWatchProperty.Attach(
          KPSUidUsbWatcher, KUsbWatcherSelectedPersonality) );
    iUSBWatchSubscriber = new (ELeave) CAknsPropertySubscriber(
        TCallBack(USBCallBack, this), iEnableUSBWatchProperty );
    iUSBWatchSubscriber->SubscribeL();
    }

// -----------------------------------------------------------------------------
// Sets active skin PID.
// -----------------------------------------------------------------------------
//
void CAknsSrvSettings::SetCachedSkinPID( const TAknsPkgID aPid )
    {
    iActiveSkinPID = aPid;
    }

// -----------------------------------------------------------------------------
// ETrue when AH mirroring is active.
// -----------------------------------------------------------------------------
//
TBool CAknsSrvSettings::CachedAHMirroringActive()
    {
    return iAHMirroringActive;
    }

// -----------------------------------------------------------------------------
// Returns cached skin PID.
// -----------------------------------------------------------------------------
//
TAknsPkgID CAknsSrvSettings::CachedSkinPID()
    {
    return iActiveSkinPID;
    }

// -----------------------------------------------------------------------------
// Is cached backup operation in progress.
// -----------------------------------------------------------------------------
//
TBool CAknsSrvSettings::CachedBackupOperationInProgress()
    {
    return iBackupOperationInProgress;
    }

// -----------------------------------------------------------------------------
// Is highlight animation enabled.
// -----------------------------------------------------------------------------
//
TBool CAknsSrvSettings::HighlightAnimEnabled() const
    {
    return iHighlightAnimEnabled;
    }

// -----------------------------------------------------------------------------
// Type of wallpaper (none/image/slideset).
// -----------------------------------------------------------------------------
//
TInt CAknsSrvSettings::WallpaperType()
    {
    TInt value = 0;
    TInt err = iSkinsRepository->Get( KPslnWallpaperType, value );
    if (err)
        {
        value = 0;
        }
    return value;
    }

// -----------------------------------------------------------------------------
// Type of slide set (user defined/random).
// -----------------------------------------------------------------------------
//
TInt CAknsSrvSettings::SlideSetWPType()
    {
    TInt value = 0;
    TInt err = iThemesRepository->Get( KThemesWallpaperSlideSetType, value );

    // Error cases or zero value -> use random (default)
    if( err || !value )
        {
        value = 0;
        }
    return value;
    }

// -----------------------------------------------------------------------------
// Starts to listen for screensaver changes.
// -----------------------------------------------------------------------------
//
void CAknsSrvSettings::StartScreenSaverListen()
    {
    if( iScreensaverActivationSubscriber )
        {
        iPreviousScreenSaverValue = ScreensaverState();
        iScreensaverActivationSubscriber->StopSubscribe();
        TRAPD( err, iScreensaverActivationSubscriber->SubscribeL() );
        if ( err == KErrNone )
            {
            iDelayedNotification = ETrue;
            }
        }
    }

// -----------------------------------------------------------------------------
// Stops to listen for screensaver changes.
// -----------------------------------------------------------------------------
//
void CAknsSrvSettings::StopScreenSaverListen()
    {
    if( iScreensaverActivationSubscriber )
        {
        iScreensaverActivationSubscriber->StopSubscribe();
        }
    iDelayedNotification = EFalse;
    }

// -----------------------------------------------------------------------------
// Return screensaver state.
// -----------------------------------------------------------------------------
//
TInt CAknsSrvSettings::ScreensaverState() const
    {
    return KErrNotFound;
    }

// -----------------------------------------------------------------------------
// Interval of image change in slide set.
// -----------------------------------------------------------------------------
//
TInt CAknsSrvSettings::SlideSetWPTimeout()
    {
    TInt value = 0;
    TInt err = iThemesRepository->Get( KThemesWallpaperSlideSetInterval, value );

    // Error cases or invalid value -> use default setting (10mins).
    if( err || value < 0 )
        {
        return 600;
        }
    else
        {
        switch (value)
            {
            case 0:
                return 60;
            case 1:
                return 600;
            case 2:
                return 1800;
            case 3:
                return 3600;
            case 4:
                return 86400;
            default:
                return 600;

            }
        }
    }

// -----------------------------------------------------------------------------
// Returns transition effects state.
// -----------------------------------------------------------------------------
//
TInt CAknsSrvSettings::TransitionFxState()
    {
    TInt value = KMaxTInt;
    TInt err = iThemesRepository->Get( KThemesTransitionEffects, value );

    // Error cases, disable effects
    if( err )
        {
        return KMaxTInt;
        }
    return value;
    }

// -----------------------------------------------------------------------------
// Returns animation effects state.
// -----------------------------------------------------------------------------
//
TInt CAknsSrvSettings::AnimBackgroundState()
    {
    TInt value = KMaxTInt;
    TInt err = iThemesRepository->Get( KThemesAnimBackgroundSupport, value );
    if( err != KErrNone )
        {
        value = KMaxTInt;
        }
    return value;
    }

// -----------------------------------------------------------------------------
// Set animation effects state.
// -----------------------------------------------------------------------------
//
void CAknsSrvSettings::SetAnimBackgroundState( TInt aValue )
    {
    ASSERT( aValue == 0 || aValue == KMaxTInt );
    
    iThemesRepository->Set( KThemesAnimBackgroundSupport, aValue );
    }

// -----------------------------------------------------------------------------
// Gives a reference to drive master.
// -----------------------------------------------------------------------------
//
CAknsSrvDriveMaster* CAknsSrvSettings::GetDriveMaster()
    {
    return iDriveMaster;
    }

// -----------------------------------------------------------------------------
// Write all settings to defaults.
// -----------------------------------------------------------------------------
//
void CAknsSrvSettings::WriteAllToDefault(TBool aExcludeWP)
    {
    WriteSkinToDefault();
    if (!aExcludeWP)
        {
        WriteIdleBackgroundToDefault();
        }
    }

// -----------------------------------------------------------------------------
// Write skin to default.
// -----------------------------------------------------------------------------
//
void CAknsSrvSettings::WriteSkinToDefault()
    {
    TAknsPkgID defaultSkin = DefaultSkinPID();
    iActiveSkinPID.Set( defaultSkin );

    TAknsPkgIDBuf buf;
    defaultSkin.CopyToDes( buf );
    iSkinsRepository->Set(KPslnActiveSkinUid, buf);
    // Active skin location
    iSkinsRepository->Set(KPslnActiveSkinLocation, 0);
    }

// -----------------------------------------------------------------------------
// Write skin settings.
// -----------------------------------------------------------------------------
//
void CAknsSrvSettings::WriteSkinSettings(const TAknsPkgID aPid, TBool aMMC)
    {
    iActiveSkinPID.Set( aPid );
    TAknsPkgIDBuf buf;
    iActiveSkinPID.CopyToDes(buf);
    iSkinsRepository->Set(KPslnActiveSkinUid, buf);
    // Active skin location
    TInt location = 0;
    if (aMMC)
        {
        location = 2;
        }
    iSkinsRepository->Set(KPslnActiveSkinLocation, location);
    }

// -----------------------------------------------------------------------------
// Write wallpaper to default.
// -----------------------------------------------------------------------------
//
void CAknsSrvSettings::WriteIdleBackgroundToDefault()
    {
    TAknsPkgIDBuf buf;
    DefaultSkinPID().CopyToDes(buf);
    iSkinsRepository->Set(KPslnIdleBackgroundImageUid, buf);
    iSkinsRepository->Set(KPslnIdleBackgroundImagePath, KNullDesC());
    iSkinsRepository->Set(KPslnWallpaperType, 0);
    }

// -----------------------------------------------------------------------------
// Read arabic/hebrew mirroring state.
// -----------------------------------------------------------------------------
//
TInt CAknsSrvSettings::ReadAHMirroringActive()
    {
    TInt ret(0);
    TInt value(0);
    ret = RetrieveInt( iAvkonRepository, KAknLayoutId, value, 0 );
    if( value == EAknLayoutIdABRW )
        {
        iAHMirroringActive = ETrue;
        }
    else
        {
        iAHMirroringActive = EFalse;
        }
    return ret;
    }

// -----------------------------------------------------------------------------
// Read active skin's PID.
// -----------------------------------------------------------------------------
//
TInt CAknsSrvSettings::ReadActiveSkinPID()
    {
    TInt ret = RetrievePID( iSkinsRepository, KPslnActiveSkinUid,
        iActiveSkinPID, DefaultSkinPID() );

    // if KPslnActiveSkinUid is 0, translate to default skin
    if( iActiveSkinPID == KAknsNullPkgID )
        {
        iActiveSkinPID.Set( DefaultSkinPID() );
        
        TAknsPkgIDBuf buf;
        iActiveSkinPID.CopyToDes(buf);
        iSkinsRepository->Set(KPslnActiveSkinUid, buf);
        }
    
    return ret;
    }

// -----------------------------------------------------------------------------
// Read path to wallpaper file.
// -----------------------------------------------------------------------------
//
TInt CAknsSrvSettings::ReadIdleBackgroundFile( TPath& aPath )
    {
    return iSkinsRepository->Get( KPslnIdleBackgroundImagePath,
        aPath );
    }

// -----------------------------------------------------------------------------
// Read DRM Helper server notification state.
// -----------------------------------------------------------------------------
//
TInt CAknsSrvSettings::ReadDRMHelperServerNotification( TDes& aString )
    {
    return iDRMRepository->Get( KDRMHelperServerNotification, aString );
    }

// -----------------------------------------------------------------------------
// Highlight animation enabled/disable flag is read-only -> just read and cache.
// -----------------------------------------------------------------------------
//
void CAknsSrvSettings::ReadHighlightAnimEnabled()
    {
    TInt value = KErrNone;
    TInt err = iSkinsRepository->Get( KPslnHighlightAnimationEnabled, value );

    // Error cases or zero value -> disabled highlight animation
    if( err || !value )
        {
        iHighlightAnimEnabled = EFalse;
        }
    else
        {
        iHighlightAnimEnabled = ETrue;
        }
    }

// -----------------------------------------------------------------------------
// Return default skin PID.
// -----------------------------------------------------------------------------
//
TAknsPkgID CAknsSrvSettings::DefaultSkinPID()
    {
    // If value has not been read, read it now.
    if ( iDefaultSkinPID == KAknsNullPkgID )
        {
        ReadDefaultSkinID();
        }
    return iDefaultSkinPID;
    }

// -----------------------------------------------------------------------------
// Some PS property has changed.
// -----------------------------------------------------------------------------
//
void CAknsSrvSettings::HandlePropertyChange(
    const TAknsSrvSettingsProperty aProperty )
    {
    switch( aProperty )
        {
        case EAknsSrvSPUSBAttached:
            {
            TInt value = KErrNone;
            iEnableUSBWatchProperty.Get(value);
            if (value == KUsbPersonalityIdMS)
                {
                iObserver->NotifyUSBAttach();
                }
            else
                {
                iObserver->NotifyUSBRemoval();
                }
            }
            break;
        case EAknsSrvSPLayoutId:
            {
            ReadAHMirroringActive();
            iObserver->NotifyLayoutChange();
            }
            break;

        case EAknsSrvSPActiveSkin:
            {
            TAknsPkgID oldSkin = iActiveSkinPID;
            ReadActiveSkinPID();

            if( oldSkin != iActiveSkinPID)
                {
                iObserver->NofifySkinChange();
                }
            }
            break;

        case EAknsSrvSPIdleBackground:
            iObserver->NotifyIdleBackgroundChange();
            break;

        case EAknsSrvSPDRMHelperNotification:
            iObserver->NotifyDRMChange();
            break;
        case EAknsSrvSPWallpaperType:
            iObserver->NotifyWallpaperTypeChange();
            break;
        case EAknsSrvSPSlidesetWPTimeout:
            iObserver->NotifySlideSetTimeoutChange();
            break;
        case EAknsSrvSPSlidesetWPType:
            iObserver->NotifySlideSetTypeChange();
            break;

        case EAknsSrvSPScreensaverActivation:
            {
            TInt screenSaverState = ScreensaverState();
            if ( ( iPreviousScreenSaverValue != screenSaverState ) &&
                 ( screenSaverState == 0 ) )
                {
                if ( iIdleTime )
                    {
                    iIdleTime->Cancel();
                    delete iIdleTime;
                    iIdleTime = NULL;
                    }
                TRAP_IGNORE( 
                    iIdleTime = CIdle::NewL( CActive::EPriorityIdle );
                    iIdleTime->Start( TCallBack( DoHandleIdleTimeL, this ) ) ;
                    );
                }
            }
            break;
        case EAknsSrvSPTransitionFx:
            iObserver->NotifyTransitionFxChange();
            break;
        case EAknsSrvSPAnimBackground:
            iObserver->NotifyAnimBackgroundChange();
            break;
        default:
            break;
        };
    }

// -----------------------------------------------------------------------------
// Default skin ID is read-only -> just read and cache.
// -----------------------------------------------------------------------------
//
void CAknsSrvSettings::ReadDefaultSkinID()
    {
    // If value has already been read, ignore call.
    if ( iDefaultSkinPID != KAknsNullPkgID )
        {
        return;
        }

    // Inquire the default theme UID/PID from CenRep.
    TInt value = KErrNone;
    TBuf<32> buf;
    TInt err = iSkinsRepository->Get( KPslnDefaultSkinUID, buf );
    // Error case or zero value -> check the old key.
    if ( err || !buf.CompareF( KAknSkinSrvNoDefaultThemeConfigured ) )
        {
        err = iSkinsRepository->Get( KPslnDefaultSkinID, value );
        // Error case or zero value -> use platform default.
        if ( err || !value )
            {
            iDefaultSkinPID = KAknsPIDS60DefaultSkin;
            }
        else
            {
            iDefaultSkinPID.Set( TUid::Uid( value ) );
            }
        }
    else
        {
        TInt bufLength = buf.Length();
        // If its 8 characters long, its UID.
        // PIDs are 16 characters (8 ID + 8 timestamp)
        if ( bufLength == KAknsSkinSrvUIDLength )
            {
            // Let's try to set it directly as Hex.
            TLex hexLex( buf );
            TUint pid;
            err = hexLex.Val( pid, EHex );
            if (!err)
                {
                // UIDs have no timestamp.
                iDefaultSkinPID.Set( 0, pid );
                }
            }
        else
            {
            // The skin PID is set in CenRep in format <PID1><PID2> and
            // values are in hex.
            TLex lex ( buf.Left( KAknsSkinSrvUIDLength ) );
            TLex lex2 ( buf.Right( KAknsSkinSrvUIDLength ) );
            TUint pid;
            TUint timeStamp;
            err = lex.Val( pid, EHex );
            if ( !err )
                {
                err = lex2.Val( timeStamp, EHex );
                }
            if ( !err )
                {
                iDefaultSkinPID.Set( timeStamp, pid );
                }
            }
        }
    if ( err != KErrNone )
        {
        iDefaultSkinPID = KAknsPIDS60DefaultSkin;
        }
    }

// -----------------------------------------------------------------------------
// Called when device is idle.
// -----------------------------------------------------------------------------
//
TInt CAknsSrvSettings::DoHandleIdleTimeL( TAny* aAny )
    {
    static_cast< CAknsSrvSettings* >( aAny )->HandleIdleTime();
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// Handle the idle object activation.
// If wallpaper has been changed when screensaver has been active,
// and screensaver is now off, change wallpaper now.
// -----------------------------------------------------------------------------
//
void CAknsSrvSettings::HandleIdleTime()
    {
    if ( iIdleTime )
        {
        iIdleTime->Cancel();
        delete iIdleTime;
        }
    iIdleTime = NULL;
    if ( iDelayedNotification )
        {
        iObserver->NotifyScreenSaverChange();
        }
    iDelayedNotification = EFalse;
    }

// End of File
