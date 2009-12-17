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
* Description:   Session to AknIconServer.
*
*/



// INCLUDE FILES

#include <e32std.h>

#include "AknIconSrvSession.h"
#include "AknIconSrv.h"
#include "AknIconPanic.h"
#include "AknIconSrvIconItem.h"
#include "AknIconTraces.h"


// CONSTANTS

const TInt KIconItemArrayGranularity = 4;
const TInt KPreservedItemArrayGranularity = 1;

// ================= MEMBER FUNCTIONS ==========================================

CAknIconSrvSession::CAknIconSrvSession() :
    CSession2(),
    iIconItems( KIconItemArrayGranularity ),
    iPreservedItems( KPreservedItemArrayGranularity ),
    iClientPanicCode(EBadServerRequest)
    {
    }

CAknIconSrvSession::~CAknIconSrvSession()
    {
    // Cleanup all icons and preserved icon data items referred by the session
    // that were not freed normally, for example due to a client thread panic.

    TInt count = iIconItems.Count();
    
    for ( TInt i = 0 ; i < count ; i++ )
        {
        Server()->CleanupSessionIconItem( iIconItems[i] );
        }

    count = iPreservedItems.Count();
    
    for ( TInt j = 0 ; j < count ; j++ )
        {
        Server()->CleanupSessionPreservedItem( iPreservedItems[j] );
        }

    iIconItems.Close();
    iPreservedItems.Close();
    }

// -----------------------------------------------------------------------------
// CAknIconSrvSession::DispatchMessageL()
// -----------------------------------------------------------------------------

TInt CAknIconSrvSession::DispatchMessageL( const RMessage2& aMessage )
    {
// Debug heap testing.
#ifdef _DEBUG
    if ( iDbgHeapFailNextCount )
        {
        __UHEAP_FAILNEXT( iDbgHeapFailNextCount );
        iDbgHeapFailNextCount++;
        }
#endif // _DEBUG

    TInt ret = KErrNone;

    switch ( aMessage.Function() )
        {
        case ERetrieveOrCreateSharedIcon:
            {
            // Append and remove a dummy element to prevent memory allocation
            // failure when the real item is appended.
            TAknIconSrvSessionIconItem dummy;
            User::LeaveIfError( iIconItems.Append( dummy ) );
            iIconItems.Remove( iIconItems.Count() - 1 );

            const CAknIconSrvIconItem* item = 
                Server()->RetrieveOrCreateSharedIconL();

            TInt users = ( item->iMaskId < 0 ? 1 : 2 );

            // Append in here cannot fail now because of the operation done above.
            ModifyUserCount( item, users ); // bitmap and optionally mask
            break;
            }

        case EFreeBitmap:
            {
            const CAknIconSrvIconItem* item = Server()->FreeBitmapL();
            ModifyUserCount( item, -1 );
            break;
            }

        case EGetContentDimensions:
            {
            Server()->GetContentDimensionsL();
            break;
            }

        case EPreserveIconData:
            {
            // Append and remove a dummy element to prevent memory allocation
            // failure when the real item is appended.
            TAknIconSrvSessionPreservedItem dummy;
            User::LeaveIfError( iPreservedItems.Append( dummy ) );
            iPreservedItems.Remove( iPreservedItems.Count() - 1 );

            const CAknIconDataItem* item = Server()->PreserveIconDataL();
            ModifyUserCount( item, 1 );
            break;
            }

        case EDestroyIconData:
            {
            const CAknIconDataItem* item = Server()->UnpreserveIconDataL();
            ModifyUserCount( item, -1 );
            break;
            }

        case EGetInitData:
            {
            TAknIconInitData data;
            Server()->GetInitData( data );
            TPckgC<TAknIconInitData> retPack( data );
            aMessage.WriteL( 0, retPack );
            break;
            }
        
        case EAknIconServRequestEnableCache:
        	{
        	if (aMessage.HasCapability(ECapabilityWriteDeviceData))
	        	Server()->EnableCache( aMessage.Int0() );
        	else
        		ret = KErrPermissionDenied;
        	break;
        	}

// Debug heap testing.
#ifdef _DEBUG
        case EServerHeapMark:
            {
            __UHEAP_MARK;
            break;
            }

        case EServerHeapMarkEnd:
            {
            __UHEAP_MARKEND;
            break;
            }

        case EServerHeapFailNext:
            {
            iDbgHeapFailNextCount = 0;
            __UHEAP_FAILNEXT( aMessage.Int0() );
            break;
            }

        case EServerHeapFailNextIncreasing:
            {
            iDbgHeapFailNextCount = aMessage.Int0();
            break;
            }

        case EServerHeapReset:
            {
            iDbgHeapFailNextCount = 0;
            __UHEAP_RESET;
            break;
            }
        
        case EServerResetDynamicallyChangingAllocations:
            {
            Server()->ResetDynamicallyChangingAllocations();
            break;
            }

        case EServerHeapUsed:
            {
            TInt heapUsed;
            User::AllocSize( heapUsed );
            ret = heapUsed;
            break;
            }

        case EServerSetPreferredIconDisplayMode:
            {
            Server()->SetPreferredIconDisplayMode( (TDisplayMode)aMessage.Int0() );
            break;
            }

#endif // _DEBUG

        default:
            {
      //      PanicClient( aMessage, EBadServerRequest );
			// If we dont call Leave here, Server crashes.. 
			// Fixed it as a part of error fix JJUN-78QCL6
			User::Leave(KAknIconSrvCodePanicClient);
            break;
            }
        }

    return ret;
    }

// -----------------------------------------------------------------------------
// CAknIconSrvSession::ServiceL()
// -----------------------------------------------------------------------------

void CAknIconSrvSession::ServiceL(const RMessage2& aMessage)
    {
    TInt ret = KErrNone;

    TInt opCode = aMessage.Function();
    
    // File handles are transfered to server side with these opCodes.
    if ( opCode == ERetrieveOrCreateSharedIcon ||
         opCode == EGetContentDimensions ||
         opCode == EPreserveIconData )
        {
        if ( aMessage.Int2() )
            {
            User::LeaveIfError(
                iAdoptedFile.AdoptFromClient( aMessage, 2, 3 ) );
            }
        }

    TRAPD( err,
        {
        ret = DispatchMessageL( aMessage );
        } );

    iAdoptedFile.Close();

#ifdef __AKNICON_TRACES
    if (err != KErrNone)
        {                
        RDebug::Print( _L("CAknIconSrvSession: %x DispatchMessageL leaved: %d"), this, err );
        }
#endif

    // Don't complete message if client panicked
    if (err != KAknIconSrvCodePanicClient)
        {
        // If the service routine leaved, return the leave reason.
        // Otherwise, return its return code.

        aMessage.Complete( err != KErrNone ? err : ret );
        }
    else   
	    {
	    if (aMessage.IsNull() == EFalse)
	        {
	        PanicClient( aMessage, iClientPanicCode );
	        }
		  User::Leave(KAknIconSrvCodePanicClient);	    	
	    }
    }

// -----------------------------------------------------------------------------
// CAknIconSrvSession::PanicClient()
// -----------------------------------------------------------------------------

void CAknIconSrvSession::PanicClient( const RMessage2& aMessage, TAknIconPanic aPanic ) const
    {
    aMessage.Panic( KAknIconPanicCategory, aPanic );
    }

// -----------------------------------------------------------------------------
// CAknIconSrvSession::ModifyUserCount()
// -----------------------------------------------------------------------------
//
void CAknIconSrvSession::ModifyUserCount( 
    const CAknIconSrvIconItem* aItem,
    TInt aCount )
    {    
    TAknIconSrvSessionIconItem newItem = { aItem, aCount };
    TInt index = iIconItems.FindInOrder( 
        newItem, TAknIconSrvSessionIconItem::LinearOrder );
        
    if ( index >= 0 )
        {
        TAknIconSrvSessionIconItem& sessionItem = iIconItems[index];
        // session's user count for this icon
        sessionItem.iUserCount += aCount;

        if ( sessionItem.iUserCount == 0 )
            {
            iIconItems.Remove( index );
            }
        return;
        }

    // If not found, it must be a new item,
    // and then the user count should be increasing.
    __ASSERT_ALWAYS( aCount > 0, User::Invariant() );

    // Cannot fail at this stage, see caller function.
    iIconItems.InsertInOrder(newItem, TAknIconSrvSessionIconItem::LinearOrder );    
    }
    
// -----------------------------------------------------------------------------
// CAknIconSrvSession::ModifyUserCount()
// -----------------------------------------------------------------------------
//
void CAknIconSrvSession::ModifyUserCount( 
    const CAknIconDataItem* aItem,
    TInt aCount )
    {
    TInt count = iPreservedItems.Count();

    for ( TInt i = 0 ; i < count ; i++ )
        {
        TAknIconSrvSessionPreservedItem& sessionItem = iPreservedItems[i];
        if ( sessionItem.iDataItem == aItem )
            {
            // session's user count for this icon
            sessionItem.iUserCount += aCount;

            if ( sessionItem.iUserCount == 0 )
                {
                iPreservedItems.Remove( i );
                }
            return;
            }
        }

    // If not found, it must be a new item,
    // and then the user count should be increasing.
    __ASSERT_ALWAYS( aCount > 0, User::Invariant() );

    TAknIconSrvSessionPreservedItem newItem = { aItem, aCount };
    // Cannot fail at this stage, see caller function.
    iPreservedItems.Append( newItem );
    }
    
// -----------------------------------------------------------------------------
// CAknIconSrvSession::AdoptedFileHandle()
// -----------------------------------------------------------------------------
//    
RFile& CAknIconSrvSession::AdoptedFileHandle()
    {
    return iAdoptedFile;
    }


//  End of File  
