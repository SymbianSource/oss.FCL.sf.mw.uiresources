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
* Description:  Skin change handler.
*
*/


// INCLUDE FILES
#include "AknsSkinChangeHandler.h"
#include <AknsSrvClient.h>
#include "AknsSrvClientMemberData.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsSkinChangeHandler::CAknsSkinChangeHandler
// C++ constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CAknsSkinChangeHandler::CAknsSkinChangeHandler(
    RAknsSrvSession& aSession, TInt aPriority )
    : CActive( aPriority ), iSession( aSession )
    {
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsSkinChangeHandler::~CAknsSkinChangeHandler()
    {
    if ( iDestroyedPtr )
        {
        *iDestroyedPtr = ETrue;
        iDestroyedPtr = NULL;
        }
    }

// -----------------------------------------------------------------------------
// CAknsSkinChangeHandler::HandleSkinChange
// -----------------------------------------------------------------------------
//
void CAknsSkinChangeHandler::HandleSkinChange(
    const TAknsSkinChangeHandlerNotification aType )
    {
    MAknsSkinChangeObserver* observer = iSession.iMemberData->iObserver;
    switch( aType )
        {
        case EAknsSCHNContentChanged:
            observer->SkinContentChanged();
            // Mark the notification acknowledged
            iSession.AcknowledgeSkinChangeNotification();
            break;
        case EAknsSCHNPackageListUpdate:
            observer->SkinPackageChanged(
                EAknsSkinStatusPackageListUpdate );
            break;
        case EAknsSCHNConfigurationMerged:
            observer->SkinConfigurationChanged(
                EAknsSkinStatusConfigurationMerged );
            break;
        case EAknsSCHNConfigurationDeployed:
            observer->SkinConfigurationChanged(
                EAknsSkinStatusConfigurationDeployed );
            break;
        case EAknsSCHNConfigurationOOM:
            observer->SkinConfigurationChanged(
                EAknsSkinStatusConfigurationFailedOOM );
            break;
        case EAknsSCHNConfigurationCorrupt:
            observer->SkinConfigurationChanged(
                EAknsSkinStatusConfigurationFailedCorrupt );
            break;
        case EAknsSCHNMorphingStateChange:
            observer->SkinConfigurationChanged(
                EAknsSkinStatusMorphingStateChange );
            break;
        case EAknsSCHNSSWallpaperChanged:
            observer->SkinConfigurationChanged(
                EAknsSkinStatusSlideSetWallpaperChanged );
            break;
        case EAknsSCHNWallpaperChanged: //-fallthrough
            observer->SkinConfigurationChanged(
                EAknsSkinStatusWallpaperChanged );
        case EAknsSCHNFlushClientSideCaches:
            observer->FlushLocalCaches();
            break;
        case EAknsSCHNAnimBackgroundChanged:
            observer->SkinConfigurationChanged(
                    EAknsSkinStatusAnimBackgroundChanged );
            break;
        default:
            break;
        }
    }

// -----------------------------------------------------------------------------
// CAknsSkinChangeHandler::SetActive
// -----------------------------------------------------------------------------
//
void CAknsSkinChangeHandler::SetActive()
    {
    iStatus = KRequestPending;
    CActive::SetActive();
    }

// -----------------------------------------------------------------------------
// CAknsSkinChangeHandler::RunL
// -----------------------------------------------------------------------------
//
void CAknsSkinChangeHandler::RunL()
    {
    TBool destroyed( EFalse );
    iDestroyedPtr = &destroyed;

    if( iStatus >= 0 )
        {
        HandleSkinChange(
            static_cast<TAknsSkinChangeHandlerNotification>(
            iStatus.Int() ) );
        }

    if( !destroyed ) // Destructor sets this to ETrue
        {
        // Activate again
        SetActive();
        iSession.EventHandled();
        iDestroyedPtr = NULL;
        }
    }

// -----------------------------------------------------------------------------
// CAknsSkinChangeHandler::DoCancel
// -----------------------------------------------------------------------------
//
void CAknsSkinChangeHandler::DoCancel()
    {
    iSession.SendCancel();
    }

// End of File
