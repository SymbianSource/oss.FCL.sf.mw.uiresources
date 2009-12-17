/*
* Copyright (c) 2007-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Slide set wallpaper timer.
*
*/


#include "aknssrvwallpapertimer.h"

// ======== MEMBER FUNCTIONS ========
// ---------------------------------------------------------------------------
// Constructor.
// ---------------------------------------------------------------------------
//
CAknsSrvWallpaperTimer* CAknsSrvWallpaperTimer::NewL(
    MAknsSrvWallpaperListener* aListener )
    {
    CAknsSrvWallpaperTimer* self =
        new (ELeave)CAknsSrvWallpaperTimer( aListener );
    CleanupStack::PushL( self );
    self->ConstructL();
    CleanupStack::Pop( self );
    return self;
    }

// ---------------------------------------------------------------------------
// Handles an active object's request completion event.
// ---------------------------------------------------------------------------
//
void CAknsSrvWallpaperTimer::RunL()
    {
    if ( iStatus.Int() == KErrAbort && !iCanceled )
        {
        TTime now;
        now.HomeTime();
        TTimeIntervalSeconds seconds;
        now.SecondsFrom( iPreviousTime, seconds );
        if ( seconds.Int() < iInterval )
            {
            IssueRequest( iInterval-seconds.Int() );
            return;
            }
        }

    iListener->WallpaperTimerTimeoutL();
    if ( !iCanceled )
        {
        IssueRequest();
        }
    }

// ---------------------------------------------------------------------------
// Cancels request.
// ---------------------------------------------------------------------------
//
void CAknsSrvWallpaperTimer::DoCancel()
    {
    iCanceled = ETrue;
    iTimer.Cancel();
    }

// ---------------------------------------------------------------------------
// Issues a new request.
// ---------------------------------------------------------------------------
//
void CAknsSrvWallpaperTimer::IssueRequest( TInt aTempInterval )
    {
    iCanceled = EFalse;
    if ( !IsActive() )
        {
        TTime now;
        now.HomeTime();
        if ( aTempInterval )
            {
            now += TTimeIntervalSeconds( aTempInterval );
            }
        else
            {
            iPreviousTime = now;
            now += TTimeIntervalSeconds( iInterval );
            }
        iTimer.At( iStatus, now );
        SetActive();
        }
    }

// ---------------------------------------------------------------------------
// Destructor.
// ---------------------------------------------------------------------------
//
CAknsSrvWallpaperTimer::~CAknsSrvWallpaperTimer()
    {
    iTimer.Close();
    }

// ---------------------------------------------------------------------------
// Second phase constructor.
// ---------------------------------------------------------------------------
//
void CAknsSrvWallpaperTimer::ConstructL()
    {
    User::LeaveIfError( iTimer.CreateLocal() );
    }

// ---------------------------------------------------------------------------
// C++ constructor.
// ---------------------------------------------------------------------------
//
CAknsSrvWallpaperTimer::CAknsSrvWallpaperTimer(
    MAknsSrvWallpaperListener* aListener ) :
        CActive( CActive::EPriorityStandard ),
        iListener( aListener )
    {
    CActiveScheduler::Add( this );
    }

// ---------------------------------------------------------------------------
// Returns the interval period of the timer.
// ---------------------------------------------------------------------------
//
TInt CAknsSrvWallpaperTimer::Interval()
    {
    return iInterval;
    }

// ---------------------------------------------------------------------------
// Start the timer.
// ---------------------------------------------------------------------------
//
void CAknsSrvWallpaperTimer::Start( TInt aInterval )
    {
    Cancel();
    iInterval = aInterval;
    IssueRequest();
    }

// ---------------------------------------------------------------------------
// Stop the timer.
// ---------------------------------------------------------------------------
//
void CAknsSrvWallpaperTimer::Stop()
    {
    Cancel();
    }

// End of file
