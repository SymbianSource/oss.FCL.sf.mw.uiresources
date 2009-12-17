/*
* Copyright (c) 2002 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Pictograph drawer
*
*/



// INCLUDE FILES
#include "AknPictographAnimator.h"
#include "AknPictographDrawer.h"
#include "AknPictographConstants.h"
#include "AknPictographFactory.h"

#include <gdi.h>
#include <fbs.h>
#include <activitymanager.h>

// CONSTANTS

const TInt KUserActivityTimeout = 15;
const TInt KClientArrayGranularity = 4;

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknPictographAnimator::CAknPictographAnimator
// C++ default constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknPictographAnimator::CAknPictographAnimator() :
    CCoeStatic( KUidAknPictographAnimator ), iClients( KClientArrayGranularity )
	{
	}

// -----------------------------------------------------------------------------
// CAknPictographAnimator::ConstructL
// Symbian 2nd phase constructor can leave.
// -----------------------------------------------------------------------------
//
void CAknPictographAnimator::ConstructL()
    {
    AknPictographFactory::LoadBitmapsL(iBitmaps, iMasks);

    AknPictographFactory::CreateWhiteBitmapsL(
                                              iWhiteBitmap,
                                              iWhiteBitmapMask,
                                              iWhiteBitmapMaskDevice,
                                              iWhiteBitmapMaskGc
                                              );

    // Needs to be very low priority so that animator cannot prevent any other
    // active objects from running.
    iTimer = CPeriodic::NewL( CActive::EPriorityIdle );

    iUserActivityManager = 
        CUserActivityManager::NewL( CActive::EPriorityStandard );
    // start monitoring user activity
    iUserActivityManager->Start( 
        KUserActivityTimeout,
        TCallBack( InactiveCallBack, this ),
        TCallBack( ActiveCallBack, this ) );

    CCoeEnv* env = CCoeEnv::Static();

    env->AddForegroundObserverL( *this );
    }

CAknPictographAnimator* CAknPictographAnimator::CreateSingletonL()
    {
    CAknPictographAnimator* self = new( ELeave ) CAknPictographAnimator();
    CleanupStack::PushL( self );
    self->ConstructL();
    CleanupStack::Pop();
    return self;
    }

// Destructor
CAknPictographAnimator::~CAknPictographAnimator()
    {
    CCoeEnv* env = CCoeEnv::Static();
    env->RemoveForegroundObserver( *this );

    delete iTimer; // calls Cancel()
    delete iUserActivityManager;
    iClients.Reset();

    if (iBitmaps)
        {
        iBitmaps->ResetAndDestroy();
        }
    delete iBitmaps;
    if (iMasks)
        {
        iMasks->ResetAndDestroy();
        }
    delete iMasks;
    delete iWhiteBitmapMaskGc;
    delete iWhiteBitmapMaskDevice,
    delete iWhiteBitmapMask;
    delete iWhiteBitmap;
    }

// -----------------------------------------------------------------------------
// CAknPictographAnimator::AddClientL
// -----------------------------------------------------------------------------
//
void CAknPictographAnimator::AddClientL( CAknPictographDrawer& aDrawer )
    {
    User::LeaveIfError( iClients.InsertInAddressOrder( &aDrawer ) );
    }

// -----------------------------------------------------------------------------
// CAknPictographAnimator::RemoveClient
// -----------------------------------------------------------------------------
//
TInt CAknPictographAnimator::RemoveClient( CAknPictographDrawer& aDrawer )
    {
    TInt index = iClients.FindInAddressOrder( &aDrawer );

    if ( index >= 0 )
        {
        iClients.Remove( index );
        }

    return iClients.Count();
    }

// -----------------------------------------------------------------------------
// CAknPictographAnimator::TimerCallBack
// -----------------------------------------------------------------------------
//
TInt CAknPictographAnimator::TimerCallBack( TAny* aParameter )
    {
    static_cast<CAknPictographAnimator*>( aParameter )->AnimationTick();
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CAknPictographAnimator::AnimationTick
// -----------------------------------------------------------------------------
//
void CAknPictographAnimator::AnimationTick()
    {
    iCounter++;

    TInt count = iClients.Count();
    for ( TInt i = 0 ; i < count ; i++ )
        {
        CAknPictographDrawer* drawer = 
            const_cast<CAknPictographDrawer*>( iClients[i] );

        if ( drawer->IsAnimating() )
            {
            drawer->AnimationTick();
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknPictographAnimator::ActiveCallBack
// -----------------------------------------------------------------------------
//
TInt CAknPictographAnimator::ActiveCallBack( TAny* aParameter )
    {
    static_cast<CAknPictographAnimator*>( aParameter )->HandleActiveCallBack();
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CAknPictographAnimator::InactiveCallBack
// -----------------------------------------------------------------------------
//
TInt CAknPictographAnimator::InactiveCallBack( TAny* aParameter )
    {
    static_cast<CAknPictographAnimator*>( aParameter )->HandleInactiveCallBack();
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CAknPictographAnimator::HandleActiveCallBack
// -----------------------------------------------------------------------------
//
void CAknPictographAnimator::HandleActiveCallBack()
    {
    if ( iAnimatedClients > 0 && !iTimer->IsActive() )
        {
        iTimer->Start( 
            KAknPictographAnimationDelay,
            KAknPictographAnimationDelay,
            TCallBack( TimerCallBack, this ) );
        }
    }

// -----------------------------------------------------------------------------
// CAknPictographAnimator::HandleInactiveCallBack
// -----------------------------------------------------------------------------
//
void CAknPictographAnimator::HandleInactiveCallBack()
    {
    iTimer->Cancel();
    }

// -----------------------------------------------------------------------------
// CAknPictographAnimator::HandleGainingForeground
// -----------------------------------------------------------------------------
//
void CAknPictographAnimator::HandleGainingForeground()
    {
    TInt count = iClients.Count();
    for ( TInt i = 0 ; i < count ; i++ )
        {
        iClients[i]->HandleGainingForeground();
        }
    }

// -----------------------------------------------------------------------------
// CAknPictographAnimator::HandleLosingForeground
// -----------------------------------------------------------------------------
//
void CAknPictographAnimator::HandleLosingForeground()
    {
    TInt count = iClients.Count();
    for ( TInt i = 0 ; i < count ; i++ )
        {
        iClients[i]->HandleLosingForeground();
        }
    }

//  End of File
