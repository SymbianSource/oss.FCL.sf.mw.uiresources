/*
* Copyright (c) 2004-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Observes for changes in skin files.
*
*/


#include "aknssrvinstallobserver.h"
#include <bautils.h>

_LIT(KAknsSrvSkinRootPath,"?:\\private\\10207114\\import\\");

// -----------------------------------------------------------------------------
// CAknsSrvInstallObserver::NewL
//
// (other items were commented in a header).
// -----------------------------------------------------------------------------
//
CAknsSrvFileObserver* CAknsSrvFileObserver::NewL(MAknsSrvFileObserver* aObserver)
    {
    CAknsSrvFileObserver* self = new (ELeave) CAknsSrvFileObserver(aObserver);
    CleanupStack::PushL(self);
    self->ConstructL();
    CleanupStack::Pop( self );
    return self;
    }

CAknsSrvFileObserver* CAknsSrvFileObserver::NewL(MAknsSrvFileObserver* aObserver, const TDesC& aFilename)
    {
    CAknsSrvFileObserver* self = new (ELeave) CAknsSrvFileObserver(aObserver);
    CleanupStack::PushL(self);
    self->ConstructL();
    self->iFilename = aFilename.AllocL();
    CleanupStack::Pop( self );
    return self;
    }

CAknsSrvFileObserver* CAknsSrvFileObserver::NewL(
    MAknsSrvFileObserver* aObserver, TAknsSrvFileSrvObserverType aObserverType,
    const TDesC& aFilename  )
    {
    CAknsSrvFileObserver* self =
        new (ELeave) CAknsSrvFileObserver( aObserver );
    CleanupStack::PushL(self);
    self->ConstructL();
    self->iFilename = aFilename.AllocL();
    self->iType = aObserverType;
    CleanupStack::Pop( self );
    return self;
    }

// -----------------------------------------------------------------------------
// CAknsSrvInstallObserver::ConstructL
//
// (other items were commented in a header).
// -----------------------------------------------------------------------------
//
void CAknsSrvFileObserver::ConstructL()
    {
    User::LeaveIfError(iFsSession.Connect());
    CActiveScheduler::Add(this);
    }

// -----------------------------------------------------------------------------
// CAknsSrvSkinInstallObserver::C++ Constructor
//
// (other items were commented in a header).
// -----------------------------------------------------------------------------
//
CAknsSrvFileObserver::CAknsSrvFileObserver(MAknsSrvFileObserver* aObserver ) :
    CActive(CActive::EPriorityIdle)
    {
    iObserver = aObserver;
    iType = EAknsSrvNotDefined;
    }

// -----------------------------------------------------------------------------
// CAknsSrvSkinInstallObserver::C++ Desctructor
//
// (other items were commented in a header).
// -----------------------------------------------------------------------------
//
CAknsSrvFileObserver::~CAknsSrvFileObserver()
    {
    Cancel();
    iFsSession.NotifyChangeCancel();
    iFsSession.Close();
    delete iFilename;
    iFilename = NULL;
    iObserver = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsSrvSkinInstallObserver::IssueRequest
//
// (other items were commented in a header).
// -----------------------------------------------------------------------------
//
void CAknsSrvFileObserver::IssueRequest()
    {
    if ( !IsActive() && iObserver )
        {
        if ( iFilename )
            {
            if ( iType == EAknsSrvFileObsSlidesetWallpaper )
                {
                iFsSession.NotifyChange( ENotifyWrite, iStatus, *iFilename );
                }
            else
                {
                iFsSession.NotifyChange(ENotifyFile, iStatus, *iFilename);
                }
            }
        else
            {
            iFsSession.NotifyChange( ENotifyDir, iStatus, KAknsSrvSkinRootPath );
            }

        SetActive();
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrvInstallObserver::RunL
//
// (other items were commented in a header).
// -----------------------------------------------------------------------------
//
void CAknsSrvFileObserver::RunL()
    {
    iFsSession.NotifyChangeCancel();

    // Nobody is listening, so better stop.
    if ( !iObserver )
        {
        return;
        }

    if (iFilename)
        {
        if (BaflUtils::FileExists(iFsSession, *iFilename))
            {
            if ( iType == EAknsSrvFileObsSlidesetWallpaper )
                {
                // Slideset file has changed.
                iObserver->SlideSetModifiedL();
                }
            IssueRequest();
            return;
            }
        else // the file has been deleted / renamed
            {
            iObserver->WallpaperLost();
            }
        }
    else
        {
        // Since system immediately notifies of changes, let's wait awhile so that all operations on
        // directory have finished.
        User::After( 1000000 );
        iObserver->NewSkinPackagesInstalled();
        IssueRequest();
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrvInstallObserver::DoCancel
//
// (other items were commented in a header).
// -----------------------------------------------------------------------------
//
void CAknsSrvFileObserver::DoCancel()
    {
    iFsSession.NotifyChangeCancel();
    }

// End of File

