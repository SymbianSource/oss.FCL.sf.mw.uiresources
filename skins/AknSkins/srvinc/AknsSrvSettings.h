/*
* Copyright (c) 2005-2008 Nokia Corporation and/or its subsidiary(-ies).
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


#ifndef AKNSSRVSETTINGS_H
#define AKNSSRVSETTINGS_H

// INCLUDES

#include <e32base.h>
#include <babackup.h>
#include <f32file.h>

#include <AknsPkgID.h>

#include <e32property.h>
#include <cenrepnotifyhandler.h>

#include "AknsDriveMaster.h"
#include "aknssrvwallpapertimer.h"

// TYPES

enum TAknsSrvSettingsProperty
    {
    EAknsSrvSPLayoutId              = 1,
    EAknsSrvSPActiveSkin            = 2,
    EAknsSrvSPIdleBackground        = 3,
    EAknsSrvSPPinboardBackground    = 4,
    EAknsSrvSPDRMHelperNotification = 5,
    EAknsSrcSpLayoutSwitch          = 6,
    EAknsSrvSPUSBAttached           = 7,
    EAknsSrvSPWallpaperType         = 8,
    EAknsSrvSPSlidesetWPTimeout     = 9,
    EAknsSrvSPSlidesetWPType        = 10,
    EAknsSrvSPTransitionFx          = 11,
    EAknsSrvSPScreensaverActivation = 12,
    EAknsSrvSPAnimBackground        = 13
    };

// FORWARD DECLARATIONS

class CRepository;
class CAknsPropertySubscriber;
class CAknsRepositoryWatcher;
class CAknsSrvDriveMaster;

// CLASS DECLARATIONS

class MAknsSrvSettingObserver
    {
    public:
        virtual void NotifyBackupOperationEnd() =0;
        virtual void NotifyLayoutChange(TBool aClearScalable = EFalse) =0;
        virtual void NofifySkinChange() =0;
        virtual void NotifyIdleBackgroundChange() =0;
        virtual void NotifyDRMChange() =0;
        virtual void NotifyUSBAttach() = 0;
        virtual void NotifyUSBRemoval() = 0;
        virtual void NotifySlideSetTimeoutChange() = 0;
        virtual void NotifySlideSetTypeChange() = 0;
        virtual void NotifyWallpaperTypeChange() = 0;
        // Observer interface for screensaver state changes.
        virtual void NotifyScreenSaverChange() = 0;
        virtual void NotifyTransitionFxChange() = 0;
        virtual void NotifyDriveChange( const TInt& aDrive, const TBool& aMediaNotPresent ) =0;
        virtual void NotifyBackupOperationBegin() =0;
        virtual void NotifyAnimBackgroundChange() = 0;
    };

NONSHARABLE_CLASS(CAknsSrvSettings) : public CBase,
    public MBackupOperationObserver,
    public MAknsSrvDriveObserver
    {
    public:
        virtual ~CAknsSrvSettings();
        static CAknsSrvSettings* NewL(
            MAknsSrvSettingObserver* aObserver,
            RFs& aFileSystemSession );


    public: // CenRep callbacks
        static TInt LayoutCallBack(TAny* aPtr);
        static TInt SkinsRepositoryCallBack(TAny* aPtr);
        static TInt DRMRepositoryCallBack(TAny* aPtr);
        static TInt LayoutSwitchCallBack(TAny* aPtr);
        static TInt USBCallBack(TAny* aPtr);
        static TInt ThemesRepositoryCallBack(TAny* aPtr);
        // Callback for screensaver state changes.
        static TInt SSCallBack( TAny* aPtr );

    public: // From MBackupOperationObserver
        void HandleBackupOperationEventL(
            const TBackupOperationAttributes& aBackupOperationAttributes);

    public: //From MAknsSrvDriveObserver
        void NotifyDriveStatusChange(  const TInt& aDrive, const TBool& aMediaNotPresent  );

    public: // New methods
        void InstallAdditionalWatchersL();

        void SetCachedSkinPID( const TAknsPkgID aPid );


        TBool CachedAHMirroringActive();
        TAknsPkgID CachedSkinPID();

        TBool CachedBackupOperationInProgress();
        TBool HighlightAnimEnabled() const;

        void WriteAllToDefault(TBool aExcludeWP);
        void WriteSkinToDefault();
        void WriteIdleBackgroundToDefault();
        void WriteSkinSettings(const TAknsPkgID aPid, TBool aMMC);

        TInt ReadAHMirroringActive();
        TInt ReadActiveSkinPID();

        TInt ReadIdleBackgroundFile( TPath& aPath );
        TInt ReadDRMHelperServerNotification( TDes& aString );
        void ReadHighlightAnimEnabled();

        /**
        * Returns default skin PID.
        * @return default skin PID.
        *
        * @since 3.1
        */
        TAknsPkgID DefaultSkinPID();

        //
        TInt SlideSetWPTimeout();

        //
        TInt WallpaperType();

        //
        TInt SlideSetWPType();
        // Starts to listen for screensaver changes in PS.
        void StartScreenSaverListen();
        // Stops to listen for screensaver changes in PS.
        void StopScreenSaverListen();
        // Return screensaver state as defined in the PS key.
        TInt ScreensaverState() const;

        TInt TransitionFxState();
        
		// Get Animation Background state.
        TInt AnimBackgroundState();
        
		// Set Animation Background state.
        void SetAnimBackgroundState( TInt aValue );

        // Get a reference to drive master.
        CAknsSrvDriveMaster* GetDriveMaster();

    protected: // New methods
        void HandlePropertyChange( const TAknsSrvSettingsProperty aProperty );

    private:

        /**
        * Reads default skin ID from repository and sets it to iDefaultSkinPID.
        */
        void ReadDefaultSkinID();

        /**
        * Called when wallpaper needs to advance in slideset and
        * device is idle.
        */
        static TInt DoHandleIdleTimeL( TAny* aAny );
        void HandleIdleTime();

    private: // Private constructors
        CAknsSrvSettings( MAknsSrvSettingObserver* aObserver, RFs& aFileSystemSession );
        void ConstructL();

    private: // Data

        MAknsSrvSettingObserver* iObserver;

        TBool iAHMirroringActive;
        TAknsPkgID iActiveSkinPID;
        TBool iBackupOperationInProgress;
        TBool iHighlightAnimEnabled;

        RProperty iEnableUSBWatchProperty;
        CAknsPropertySubscriber* iUSBWatchSubscriber;

        CRepository* iAvkonRepository;
        CAknsRepositoryWatcher* iAvkonRepositoryWatcher;
        CRepository* iSkinsRepository;
        CAknsRepositoryWatcher* iSkinsRepositoryWatcher;
        CRepository* iDRMRepository;
        CAknsRepositoryWatcher* iDRMRepositoryWatcher;

        CRepository* iThemesRepository;
        CAknsRepositoryWatcher* iThemesRepositoryWatcher;

        /**
        * Set to ETrue if screensaver is active and wallpaper notification
        * is needed to be broadcast.
        */
        TBool iDelayedNotification;

        /**
        * Previous value of screensaver. Value zero means off.
        */
        TInt iPreviousScreenSaverValue;

        /**
        * Property access variable for screensaver.
        */
        RProperty iScreensaverActivationProperty;

        /**
        * Listener for screensaver state in PS.
        * Own.
        */
        CAknsPropertySubscriber* iScreensaverActivationSubscriber;

        /**
        * Default skin PID. Skin PID is set only once and cannot be changed.
        */
        TAknsPkgID iDefaultSkinPID;

        /* Handles drive information.
        *  Own.
        */
        CAknsSrvDriveMaster* iDriveMaster;

        /**
        * Own RFs session.
        */
        RFs iFsSession;

        /**
        * This CIdle is used to change the wallpaper image in slideset,
        * when device is idle, in order to avoid CPU load in critical phase.
        *
        * Own.
        */
        CIdle* iIdleTime;

    };

#endif // AKNSSRVSETTINGS_H

// End of File
