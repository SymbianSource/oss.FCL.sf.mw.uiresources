/*
* Copyright (c) 2004-2007 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Observer for installation changes.
*
*/


#ifndef C_AKNSSRVFILEOBSERVER_H
#define C_AKNSSRVFILEOBSERVER_H

//  INCLUDES
#include <e32base.h>
#include <f32file.h>

// CLASS DECLARATIONS

/**
*  And callback interface class for listening file server when new skin
*  packages are installed.
*  @since 2.6
*/
NONSHARABLE_CLASS(MAknsSrvFileObserver)
    {
    public:
        virtual void NewSkinPackagesInstalled() = 0;
        virtual void WallpaperLost() = 0;
        virtual void SlideSetModifiedL() = 0;
    };

// Defines type of observer.
enum TAknsSrvFileSrvObserverType
    {
    EAknsSrvNotDefined,
    EAknsSrvDirObserver, // not used
    EAknsSrvFileObsWallpaper, // not used
    // Observer for slide set wallpaper ini-file.
    EAknsSrvFileObsSlidesetWallpaper,
    };

/**
*  An active object notification class for listening file server events
*  when new skins are installed to the system.
*
*  @since 2.6
*/
NONSHARABLE_CLASS(CAknsSrvFileObserver) : public CActive
    {
    public:
        /**
        * Two-phased constructor.
        */
        static CAknsSrvFileObserver* NewL(MAknsSrvFileObserver* aObserver);
        static CAknsSrvFileObserver* NewL(MAknsSrvFileObserver* aObserver,
                                          const TDesC& aFilename);
        /**
        * Creates new instance of CAknsSrvFileObserver.
        * @param aObserver observer.
        * @param aFilename file to observer
        * @param aObserverType type of observer -
        *        see TAknsSrvFileSrvObserverType enum for types.
        * @param aFilename filename to be observed.
        */
        static CAknsSrvFileObserver* NewL( MAknsSrvFileObserver* aObserver,
                                           TAknsSrvFileSrvObserverType aObserverType,
                                           const TDesC& aFilename );
        /**
        * Destructor.
        */
        ~CAknsSrvFileObserver();

        void IssueRequest();
    public: // From CActive

        void RunL();
        void DoCancel();
    private: // Construction

        /**
        * C++ constructor.
        */
        CAknsSrvFileObserver(MAknsSrvFileObserver* aObserver);

        /**
        * By default Symbian 2nd phase constructor is private.
        */
        void ConstructL();
    private:
        RFs iFsSession;
        MAknsSrvFileObserver* iObserver;
        HBufC* iFilename;
        // Type of observer - see TAknsSrvFileSrvObserverType.
        TAknsSrvFileSrvObserverType iType;
    };

#endif    // C_AKNSSRVFILEOBSERVER_H

// End of File
