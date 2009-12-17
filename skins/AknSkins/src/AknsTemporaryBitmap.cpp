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
* Description:  Defines an internal class CAknsTemporaryBitmap which
*                encapsulates a single temporary bitmap entry.
*
*/


// INCLUDE FILES
#include "AknsTemporaryBitmap.h"

#include <fbs.h>
#include <bitdev.h>

#include "AknsDebug.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// C++ constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknsTemporaryBitmap::CAknsTemporaryBitmap( const TAknsItemID& aID,
    const TSize& aSize, const TInt aKey, const TSize& aLayoutSize )
    // Explicit initialization required here!
    : iID( aID ), iSize( aSize ), iKey( aKey ),
      iData( NULL ), iDev( NULL ), iGc( NULL ), iMorphing( EFalse ),
      iLayoutSize(aLayoutSize)
    {
    }

// -----------------------------------------------------------------------------
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
CAknsTemporaryBitmap* CAknsTemporaryBitmap::NewL( const TAknsItemID& aID,
    const TSize& aSize, const TInt aKey, const TBool aMorphing, const TSize& aLayoutSize )
    {
    CAknsTemporaryBitmap* self =
        new (ELeave) CAknsTemporaryBitmap( aID, aSize, aKey, aLayoutSize );
    // This value set outside constructor (to not confuse parameter construction
    // for LinearOrder-based comparisons)
    self->iMorphing = aMorphing;
    CleanupStack::PushL( self );
    self->ConstructL();
    CleanupStack::Pop( self );
    return self;
    }

// -----------------------------------------------------------------------------
// Two-phased constructor (2nd phase).
// -----------------------------------------------------------------------------
//
void CAknsTemporaryBitmap::ConstructL()
    {
    iData = CAknsMaskedBitmapItemData::NewL();
    }

// -----------------------------------------------------------------------------
// Destructor
// -----------------------------------------------------------------------------
//
CAknsTemporaryBitmap::~CAknsTemporaryBitmap()
    {
    delete iData;
    delete iDev;
    delete iGc;
    }

// -----------------------------------------------------------------------------
// CAknsTemporaryBitmap::Bitmap
// -----------------------------------------------------------------------------
//
CFbsBitmap* CAknsTemporaryBitmap::Bitmap()
    {
    return iData->Bitmap();
    }

// -----------------------------------------------------------------------------
// CAknsTemporaryBitmap::Mask
// -----------------------------------------------------------------------------
//
CFbsBitmap* CAknsTemporaryBitmap::Mask()
    {
    return iData->Mask();
    }

// -----------------------------------------------------------------------------
// CAknsTemporaryBitmap::ItemData
// -----------------------------------------------------------------------------
//
CAknsMaskedBitmapItemData* CAknsTemporaryBitmap::ItemData()
    {
    return iData;
    }

// -----------------------------------------------------------------------------
// CAknsTemporaryBitmap::IsMorphing
// -----------------------------------------------------------------------------
//
TBool CAknsTemporaryBitmap::IsMorphing()
    {
    return iMorphing;
    }

// -----------------------------------------------------------------------------
// CAknsTemporaryBitmap::ActivateGcL
// -----------------------------------------------------------------------------
//
CFbsBitGc* CAknsTemporaryBitmap::ActivateGcL(
    const TDisplayMode aMode, const TBool aMask )
    {
    CFbsBitmap* bmp = NULL;
    if( !aMask )
        {
        bmp = new (ELeave) CFbsBitmap();
        CleanupStack::PushL( bmp );
        User::LeaveIfError( bmp->Create( iSize, aMode ) );
        CleanupStack::Pop( bmp );
        iData->DestroyAndSetBitmap( bmp );
        }
    else
        {
        bmp = new (ELeave) CFbsBitmap();
        CleanupStack::PushL( bmp );
        User::LeaveIfError( bmp->Create( iSize, aMode ) );
        CleanupStack::Pop( bmp );
        iData->DestroyAndSetMask( bmp );
        }

    if ( iDev )
        {
        delete iDev;
        iDev = NULL;
        }
    iDev = CFbsBitmapDevice::NewL( bmp );
    iDev->Resize( iSize );

    if ( iGc )
        {
        delete iGc;
        iGc = NULL;
        }
    iGc = CFbsBitGc::NewL();
    iGc->Activate( iDev );
    return iGc;
    }

// -----------------------------------------------------------------------------
// CAknsTemporaryBitmap::ReleaseGc
// -----------------------------------------------------------------------------
//
void CAknsTemporaryBitmap::ReleaseGc()
    {
    delete iGc;
    iGc = NULL;
    delete iDev;
    iDev = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsTemporaryBitmap::LinearOrder
// -----------------------------------------------------------------------------
//
TInt CAknsTemporaryBitmap::LinearOrder(
    const CAknsTemporaryBitmap& aFirst,
    const CAknsTemporaryBitmap& aSecond )
    {
    TInt idDiff = TAknsItemID::LinearOrder( aFirst.iID, aSecond.iID );
    if( !idDiff )
        {
        TInt keyDiff = aFirst.iKey - aSecond.iKey;
        if( !keyDiff )
            {
            TInt laysizeDif = aFirst.iLayoutSize.iWidth-aSecond.iLayoutSize.iWidth ?
                aFirst.iLayoutSize.iWidth-aSecond.iLayoutSize.iWidth :
                aFirst.iLayoutSize.iHeight-aSecond.iLayoutSize.iHeight;
            if (!laysizeDif)
                {
               return aFirst.iSize.iWidth-aSecond.iSize.iWidth ?
                   aFirst.iSize.iWidth-aSecond.iSize.iWidth :
                   aFirst.iSize.iHeight-aSecond.iSize.iHeight;
                }
            else
                {
                return laysizeDif;
                }
            }
        else
            {
            return keyDiff;
            }
        }
    else
        {
        return idDiff;
        }
    }

//  End of File
