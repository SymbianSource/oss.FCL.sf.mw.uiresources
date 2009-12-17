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
* Description:  Defines an internal class CAknsAppSkinInstanceCacheEntry which
*                encapsulates a single skin instance cache entry.
*
*/


// INCLUDE FILES
#include "AknsASICacheEntry.h"

#include "AknsDebug.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// C++ constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknsAppSkinInstanceCacheEntry::CAknsAppSkinInstanceCacheEntry(
    const TAknsItemID& aID, CAknsItemData* aData )
    // Explicit initialization required here!
    : iID( aID ), iRefCount(0), iData( aData )
    {
    }

// -----------------------------------------------------------------------------
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
CAknsAppSkinInstanceCacheEntry* CAknsAppSkinInstanceCacheEntry::NewL(
    const TAknsItemID& aID, CAknsItemData* aData )
    {
    return new (ELeave) CAknsAppSkinInstanceCacheEntry( aID, aData );
    }
//lint -esym(1714,CAknsAppSkinInstanceCacheEntry::NewL) Defined for completeness

// -----------------------------------------------------------------------------
// Destructor
// -----------------------------------------------------------------------------
//
CAknsAppSkinInstanceCacheEntry::~CAknsAppSkinInstanceCacheEntry()
    {
    delete iData;
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstanceCacheEntry::IncreaseRefCount()
// -----------------------------------------------------------------------------
//
void CAknsAppSkinInstanceCacheEntry::IncreaseRefCount()
    {
    iRefCount++;
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstanceCacheEntry::DecreaseRefCount()
// -----------------------------------------------------------------------------
//
void CAknsAppSkinInstanceCacheEntry::DecreaseRefCount()
    {
    __ASSERT_DEBUG(iRefCount>0,AKNS_DEBUG_PANIC(EAknsDPanicInvalidRefCount));
    iRefCount--;
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstanceCacheEntry::IsReferenced()
// -----------------------------------------------------------------------------
//
TBool CAknsAppSkinInstanceCacheEntry::IsReferenced() const
    {
    return (iRefCount > 0);
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstanceCacheEntry::LinearOrder()
// -----------------------------------------------------------------------------
//
TInt CAknsAppSkinInstanceCacheEntry::LinearOrder(
    const CAknsAppSkinInstanceCacheEntry& aFirst,
    const CAknsAppSkinInstanceCacheEntry& aSecond )
    {
    return TAknsItemID::LinearOrder( aFirst.iID, aSecond.iID );
    }

//  End of File
