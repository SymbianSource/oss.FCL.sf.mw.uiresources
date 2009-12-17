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
* Description:  Static interface class for arbitrary data storage
*
*/


// INCLUDE FILES
#include <coemain.h>

#include "AknsCppPreface.h"
#include <AknsPointerStore.h>
#include "AknsAppSkinInstance.h"

AKNS_UNDEFINED_METHOD(AknsPointerStore::AknsPointerStore)

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// AknsPointerStore::StorePointerL
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsPointerStore::StorePointerL)
EXPORT_C void AknsPointerStore::StorePointerL( const TAny* aKey, TAny* aValue )
    {
    CAknsAppSkinInstance* skin = static_cast<CAknsAppSkinInstance*>
        (CCoeEnv::Static( KAknsSkinInstanceTls ));

    if( !aValue )
        {
        // No need to store NULL value
        return;
        }

    if( !skin )
        {
        User::Leave( KErrNotReady );
        }

    TAknsPointerStoreEntry entry;
    TInt index;

    entry.iKey = reinterpret_cast<TUint>(aKey);
    if( skin->iPointerStoreList.FindInUnsignedKeyOrder(
        entry, index ) == KErrNone )
        {
        skin->iPointerStoreList[index].iValue = aValue;
        }
    else
        {
        entry.iValue = aValue;
        User::LeaveIfError(
            skin->iPointerStoreList.InsertInUnsignedKeyOrder( entry ) );
        }
    }

// -----------------------------------------------------------------------------
// AknsPointerStore::RetrievePointer
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsPointerStore::RetrievePointer)
EXPORT_C TAny* AknsPointerStore::RetrievePointer( const TAny* aKey )
    {
    CAknsAppSkinInstance* skin = static_cast<CAknsAppSkinInstance*>
        (CCoeEnv::Static( KAknsSkinInstanceTls ));

    if( !skin )
        {
        return NULL;
        }

    TAknsPointerStoreEntry entry;
    TInt index;

    entry.iKey = reinterpret_cast<TUint>(aKey);
    if( skin->iPointerStoreList.FindInUnsignedKeyOrder(
        entry, index ) == KErrNone )
        {
        return skin->iPointerStoreList[index].iValue;
        }

    return NULL;
    }

// -----------------------------------------------------------------------------
// AknsPointerStore::RemovePointer
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsPointerStore::RemovePointer)
EXPORT_C void AknsPointerStore::RemovePointer( const TAny* aKey )
    {
    CAknsAppSkinInstance* skin = static_cast<CAknsAppSkinInstance*>
        (CCoeEnv::Static( KAknsSkinInstanceTls ));

    if( !skin )
        {
        return;
        }

    TAknsPointerStoreEntry entry;
    TInt index;

    entry.iKey = reinterpret_cast<TUint>(aKey);
    if( skin->iPointerStoreList.FindInUnsignedKeyOrder(
        entry, index ) == KErrNone )
        {
        skin->iPointerStoreList.Remove( index );
        }
    }

//  End of File
