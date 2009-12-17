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
* Description:  Skin server's active data owner in backup/restore.
*
*/


#include <connect/abclient.h>
#include <connect/sbdefs.h>
#include <e32property.h>

#include "aknssrvactivedataowner.h"
#include "aknssrvactivebackupdataclient.h"

#include "AknsDebug.h"

// ======== MEMBER FUNCTIONS ========
// ---------------------------------------------------------------------------
// Constructor.
// ---------------------------------------------------------------------------
//
CAknsSrvActiveDataOwner* CAknsSrvActiveDataOwner::NewL( RFs& aFsSession )
    {
    AKNS_TRACE_DEBUG("CAknsSrvActiveDataOwner::NewL");
    CAknsSrvActiveDataOwner* self =
        new ( ELeave ) CAknsSrvActiveDataOwner( aFsSession );

    return self;
    }

// ---------------------------------------------------------------------------
// Destructor
// ---------------------------------------------------------------------------
//
CAknsSrvActiveDataOwner::~CAknsSrvActiveDataOwner()
    {
    AKNS_TRACE_DEBUG("CAknsSrvActiveDataOwner::destructor");
    DoCancel();
    iBackupProperty.Close();
    delete iCallBack;
    delete iActiveBackupClient;
    }

// ---------------------------------------------------------------------------
// Active object's request handling.
// ---------------------------------------------------------------------------
//
void CAknsSrvActiveDataOwner::RunL()
    {
    AKNS_TRACE_DEBUG("CAknsSrvActiveDataOwner::RunL");
    if ( iStatus.Int() == KErrNone )
        {
        TInt currentValue = KErrNone;
        iBackupProperty.Get( currentValue );

        HandleBackupStateL( currentValue );
        }
    // Re-subscribe notifications.
    SubscribePSKey();
    }

// ---------------------------------------------------------------------------
// Active object's request error handling.
// ---------------------------------------------------------------------------
//
TInt CAknsSrvActiveDataOwner::RunError( TInt /*aError*/ )
    {
    return KErrNone;
    }

// ---------------------------------------------------------------------------
// Cancel the request.
// ---------------------------------------------------------------------------
//
void CAknsSrvActiveDataOwner::DoCancel()
    {
    AKNS_TRACE_DEBUG("CAknsSrvActiveDataOwner::DoCancel");
    if ( IsActive() )
        {
        iBackupProperty.Cancel();
        }
    }

// ---------------------------------------------------------------------------
// C++ constructor.
// ---------------------------------------------------------------------------
//
CAknsSrvActiveDataOwner::CAknsSrvActiveDataOwner( RFs& aFsSession ) :
    CActive( EPriorityNormal ), iFsSession( aFsSession )
    {
    AKNS_TRACE_DEBUG("CAknsSrvActiveDataOwner::ConstructL");

    // Attach to backup key.
    iBackupProperty.Attach( KUidSystemCategory, conn::KUidBackupRestoreKey );

    // Add to active scheduler.
    CActiveScheduler::Add( this );

    // Start listening for changes in backup/restore p&s-key.
    SubscribePSKey();
    }

// ---------------------------------------------------------------------------
// Handles changes in backup state.
// ---------------------------------------------------------------------------
//
void CAknsSrvActiveDataOwner::HandleBackupStateL( const TInt aValue )
    {
    AKNS_TRACE_DEBUG1("CAknsSrvActiveDataOwner::HandleBackupStateL %d", aValue );
    TInt type = aValue & conn::KBURPartTypeMask;
    // Test if the device is going into backup or restore mode, and we are
    // required to participate.
    if ( ( type == conn::EBURBackupFull || type == conn::EBURRestoreFull ) ||
         ( type == conn::EBURBackupPartial || type == conn::EBURRestorePartial ) )
        {
        if ( !iCallBack )
            {
            iCallBack = CAknsSrvActiveBackupDataClient::NewL( iFsSession );
            }
        if ( !iActiveBackupClient )
            {
            iActiveBackupClient = conn::CActiveBackupClient::NewL( iCallBack );

            if ( ( type == conn::EBURBackupPartial ||
                   type == conn::EBURRestorePartial ) &&
                 !iActiveBackupClient->DoesPartialBURAffectMeL() )
                {
                delete iCallBack;
                iCallBack = NULL;
                delete iActiveBackupClient;
                iActiveBackupClient = NULL;
                return;
                }
            }

        iCallBack->PrepareForBURL( type );
        iActiveBackupClient->ConfirmReadyForBURL( KErrNone );
        }
    else
        {
        if ( type == conn::EBURNormal )
            {
            // delete once back to normal.
            delete iCallBack;
            iCallBack = NULL;
            delete iActiveBackupClient;
            iActiveBackupClient = NULL;
            }
        }
    }

// ---------------------------------------------------------------------------
// Subsribes notifications of backup/restore p&s key.
// ---------------------------------------------------------------------------
//
void CAknsSrvActiveDataOwner::SubscribePSKey()
    {
    AKNS_TRACE_DEBUG("CAknsSrvActiveDataOwner::SubscribePSKey" );
    Cancel();
    if ( !IsActive() )
        {
        iStatus = KRequestPending;
        iBackupProperty.Subscribe( iStatus );
        SetActive();
        }
    }

// End of file
