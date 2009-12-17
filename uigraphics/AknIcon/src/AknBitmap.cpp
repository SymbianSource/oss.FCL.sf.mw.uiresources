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
* Description:   Implementation of class CAknBitmap.
*
*/




// INCLUDE FILES
#include "AknBitmap.h"
#include "AknIconSrvDef.h"
#include "AknIconSrvTlsData.h"
#include "AknIconPanic.h"
#include "AknIconManager.h"

// CONSTANTS

// bit flags

const TInt KFlagSharedByIconSrv         = 0x0001; // Initialized and shared by AknIconSrv
const TInt KFlagMaskDestroyed           = 0x0002; // Mask has been destroyed for the bitmap
const TInt KFlagIsAppIcon				= 0x0004;

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknBitmap::CAknBitmap
// C++ default constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknBitmap::CAknBitmap()
    {
    }

CAknBitmap* CAknBitmap::NewL( CAknIconManager& aManager )
    {
    CAknBitmap* bitmap = new( ELeave ) CAknBitmap();
    CleanupStack::PushL( bitmap );
    bitmap->ConstructL( aManager );
    CleanupStack::Pop();
    return bitmap;
    }

void CAknBitmap::ConstructL( CAknIconManager& aManager )
    {
    AddToPointerListL();

    // This needs to be done in the end of ConstructL.
    iManager = &aManager;
    iManager->Ref();
    }

TInt CAknBitmap::Extension_(TUint aExtensionId, TAny*& a0, TAny* a1)
	{
	if(aExtensionId == KExtensionId)
		{
		return KErrNone;
		}
	return CFbsBitmap::Extension_(aExtensionId, a0, a1);
	}
	
// Destructor
CAknBitmap::~CAknBitmap()
    {
    Reset();
    
    if ( iManager )
        {
        iManager->Unref(*this);
        }

    RemoveFromPointerList();
    }

// -----------------------------------------------------------------------------
// CAknBitmap::AddToPointerListL
// -----------------------------------------------------------------------------
//
void CAknBitmap::AddToPointerListL()
    {
    // Add this pointer to the list of CAknBitmaps
    CAknIconSrvTlsData* data = static_cast<CAknIconSrvTlsData*>( Dll::Tls() );

    __ASSERT_ALWAYS( data, 
        User::Panic( KAknIconPanicCategory, EClientSessionNotConnected ) );

    User::LeaveIfError(
        data->iPointers.InsertInOrder(
            reinterpret_cast<TInt>( static_cast<CFbsBitmap*>( this ) ) ) );
    }

// -----------------------------------------------------------------------------
// CAknBitmap::RemoveFromPointerList
// -----------------------------------------------------------------------------
//
void CAknBitmap::RemoveFromPointerList()
    {
    // Remove this pointer to the list of CAknBitmaps
    CAknIconSrvTlsData* data = static_cast<CAknIconSrvTlsData*>( Dll::Tls() );

    __ASSERT_ALWAYS( data, 
        User::Panic( KAknIconPanicCategory, EClientSessionNotConnected ) );

    TInt index = data->iPointers.FindInOrder(
        reinterpret_cast<TInt>( static_cast<CFbsBitmap*>( this ) ) );

    if ( index >= 0 )
        {
        data->iPointers.Remove( index );
        }
    }

// -----------------------------------------------------------------------------
// CAknBitmap::SharedByIconSrv
// -----------------------------------------------------------------------------
//
TBool CAknBitmap::SharedByIconSrv()
    {
    return iFlags & KFlagSharedByIconSrv;
    }

// -----------------------------------------------------------------------------
// CAknBitmap::SetSharedByIconSrv
// -----------------------------------------------------------------------------
//
void CAknBitmap::SetSharedByIconSrv()
    {
    iFlags |= KFlagSharedByIconSrv;
    }

// -----------------------------------------------------------------------------
// CAknBitmap::MaskDestroyed
// -----------------------------------------------------------------------------
//
TBool CAknBitmap::MaskDestroyed()
    {
    return iFlags & KFlagMaskDestroyed;
    }

// -----------------------------------------------------------------------------
// CAknBitmap::SetMaskDestroyed
// -----------------------------------------------------------------------------
//
void CAknBitmap::SetMaskDestroyed()
    {
    iFlags |= KFlagMaskDestroyed;
    }

TBool CAknBitmap::IsAppIcon() const
	{
	return iFlags & KFlagIsAppIcon;
	}
	
void CAknBitmap::SetAppIcon()
	{
	iFlags |= KFlagIsAppIcon;
	}	
	
void CAknBitmap::SetEnsuredSize(const TSize& aSize)
	{
	iEnsuredSize = aSize;
	}
    
TBool CAknBitmap::IsEnsuredSize(const TSize& aSize) const	
	{
	return iEnsuredSize == aSize;
	}	
	
// -----------------------------------------------------------------------------
// CAknBitmap::Reset
// -----------------------------------------------------------------------------
//
void CAknBitmap::Reset()
    {
    if ( iFlags & KFlagSharedByIconSrv )
        {
        RAknIconSrvClient* client = RAknIconSrvClient::GetSession();
        client->FreeBitmap( *this );
        }

    CFbsBitmap::Reset();

    iFlags &= ~(KFlagSharedByIconSrv|KFlagMaskDestroyed);
    }
    
//  End of File
