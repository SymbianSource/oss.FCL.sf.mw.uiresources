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
* Description:  Session object for skin server.
*
*/


// INCLUDE FILES

#include "AknsSrvSession.h"
#include "AknsSrv.h"
#include <AknsConstants.h>

#include "AknsDebug.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsSrvSession::CAknsSrvSession
// C++ constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CAknsSrvSession::CAknsSrvSession() : CSession2()
    {
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsSrvSession::~CAknsSrvSession()
    {
    EnableNotify();
    iHandler = NULL; // Not owned

    // Ensure that server does not continue waiting ack after exit

    for (TInt count = 0; count < iPendingAcks; count++)
        {
        Server()->AcknowledgeNotification( EAknsSCHNContentChanged );
        }

    iPendingAcks = 0;
    iCountNotifications = EFalse;
    iNotifyList.Reset();
    }

// -----------------------------------------------------------------------------
// CAknSkinSrvSession::DispatchMessageL()
// -----------------------------------------------------------------------------
//
TInt CAknsSrvSession::DispatchMessageL( const RMessage2& aMessage )
    {
    TInt err( KErrNone );

    switch ( aMessage.Function() )
        {
        case EAknSkinSrvEnableNotifySkinChange:
            aMessage.HasCapabilityL(ECapabilitySwEvent);
            EnableNotify();
            break;
        case EAknSkinSrvDisableNotifySkinChange:
            aMessage.HasCapabilityL(ECapabilitySwEvent);
            DisableNotify();
            break;
        case EAknSkinSrvSetAllItemDefSets:
            aMessage.HasCapabilityL(ECapabilityWriteDeviceData);
            err = SetAllItemDefSets( aMessage );
            break;
        case EAknSkinSrvSetItemDefSet:
            // this is deprecated as of 3.0
            break;
        case EAknSkinSrvClientError:
            ClientError( aMessage );
            break;
        case EAknSkinSrvSetNotifyHandler:
            SetNotifyHandler( aMessage );
            break;
        case EAknSkinSrvNextEvent:
            NextEvent(aMessage);
            break;
        case EAknSkinSrvCancel:
            Cancel();
            break;
        case EAknSkinSrvSetIdleWallPaper:
            aMessage.HasCapabilityL(ECapabilityWriteDeviceData);
            SetIdleWallPaperL( aMessage );
            break;
        /*case EAknSkinSrvSetPinboardWallPaper:
            break;*/
        case EAknSkinSrvStoreScalableGfx:
            StoreScalableGraphicsL( aMessage );
            break;
        case EAknSkinSrvClearScalableGfx:
            ClearScalableGraphics( aMessage );
            break;
        case EAknSkinSrvAckNotification:
            AcknowledgeNotification( aMessage );
            break;
        case EAknSkinSrvOpenBitmapFile:
            OpenBitmapFileL( aMessage );
            break;
        /*case EAknSkinSrvDeleteSkin:
            break;
        case EAknSkinSrvCopySkin:
            break;*/
        case EAknSkinSrvOpenIniFile:
            aMessage.HasCapabilityL(ECapabilityWriteDeviceData);
            OpenIniFileL( aMessage );
            break;
        case EAknSkinSrvCopySoundFile:
            aMessage.HasCapabilityL(ECapabilityWriteDeviceData);
            CopySoundFileL( aMessage );
            break;
        case EAknSkinSrvEnumeratePackages:
            EnumeratePackages( aMessage );
            break;
        case EAknSkinSrvReceivePackages:
            ReceivePackages( aMessage );
            break;
        case  EAknSkinSrvStoreMorphingScalableGfx:
            StoreScalableGraphicsL( aMessage, ETrue );
            break;
        case EAknSkinSrvDecodeWallpaperImage:
            DecodeWallpaperImageL( aMessage );
            break;
        case EAknSkinSrvFreeDecodedWallpaper:
            FreeDecodedWallpaper( aMessage );
            break;
        case EAknSkinSrvCacheWallpaperImage:
            CacheWallpaperImageL( aMessage );
            break;
        case EAknSkinSrvOpenImageInifile:
            aMessage.HasCapabilityL(ECapabilityWriteDeviceData);
            OpenImageInifileL( aMessage );
            break;
        case EAknSkinSrvSetSlideSetWP:
            aMessage.HasCapabilityL(ECapabilityWriteDeviceData);
            Server()->SetSlidesetWallpaperL();
            break;
        case EAknSkinSrvStopSSIniFileObserver:
            Server()->StopSlidesetIniFileObserver();
            break;
        case EAknSkinSrvFreeLayoutBitmaps:
            Server()->FreeLayoutBitmaps( aMessage );
            break;
        case EAknSkinSrvCheckIconConfiguration:
            err = CheckIconConfiguration( aMessage );
            break;
        default:
            AKNS_TRACE_ERROR("CAknsSrvSession::DispatchMessageL BAD REQUEST!");
            err = KErrGeneral;
            PanicClient( aMessage, EAknsSrvBadRequest );
            break;
        }

    return err;
    }

// -----------------------------------------------------------------------------
// CAknSkinSrvSession::ServiceL()
// -----------------------------------------------------------------------------
//
void CAknsSrvSession::ServiceL(const RMessage2& aMessage)
    {
    TInt ret( KErrNone );

    AKNS_TRACE_INFO1("CAknsSrvSession::ServiceL dispatch %i", aMessage.Function() );
    TRAPD( err, {ret = DispatchMessageL( aMessage );} );
    AKNS_TRACE_INFO1("CAknsSrvSession::ServiceL result %i", err );

    // don't complete the functions which open a filehandle as if they succeeded
    // the message should already be completed and double completion would result in a PANIC
    // If an error(Leave) occurred, complete even these two few lines below
    if (!err && ( (aMessage.Function() == EAknSkinSrvOpenBitmapFile) ||
                  (aMessage.Function() == EAknSkinSrvOpenIniFile) ||
                  (aMessage.Function() == EAknSkinSrvOpenImageInifile)))
        {
        return;
        }
    if ( ret != KErrNone )
        {
        // Server calls that return value are handled differently.
        if ( aMessage.Function() == EAknSkinSrvSetAllItemDefSets || 
             aMessage.Function() == EAknSkinSrvCheckIconConfiguration )
            {
            aMessage.Complete( err != KErrNone ? err : ret );
            }
        // Client has already been panicked and thus message completed.
        return;
        }

    // If the service routine leaved, return the leave reason.
    // Otherwise, return its return code.
    if (aMessage.Function() != EAknSkinSrvNextEvent)
        {
        __ASSERT_ALWAYS( !aMessage.IsNull(),
            User::Panic( KAknSkinSrvPanicCategory, EAknsSrvInvalidMessageHandle ) );
        aMessage.Complete( err != KErrNone ? err : ret );
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrvSession::PanicClient()
// -----------------------------------------------------------------------------
//
void CAknsSrvSession::PanicClient( const RMessage2& aMessage, TAknSkinSrvPanic aPanic ) const
    {
    AKNS_TRACE_ERROR("CAknsSrvSession::PanicClient PANIC!");
    aMessage.Panic( KAknSkinSrvPanicCategory, aPanic );
    }

// -----------------------------------------------------------------------------
// CAknsSrvSession::EnableNotify()
// -----------------------------------------------------------------------------
//
void CAknsSrvSession::EnableNotify()
    {
    Server()->EnableSkinChangeNotify();
    }

// -----------------------------------------------------------------------------
// CAknsSrvSession::DisableNotify()
// -----------------------------------------------------------------------------
//
void CAknsSrvSession::DisableNotify()
    {
    Server()->DisableSkinChangeNotify();
    }

// -----------------------------------------------------------------------------
// CAknsSrvSession::SetNotifyHandler()
// -----------------------------------------------------------------------------
//
void CAknsSrvSession::SetNotifyHandler( const RMessage2& aMessage )
    {
    iHandler = (CAknsSkinChangeHandler*)( aMessage.Ptr0() ); //lint !e1924 Cast
    }

// -----------------------------------------------------------------------------
// CAknsSrvSession::Server()
// -----------------------------------------------------------------------------
//
CAknsSrv* CAknsSrvSession::Server()
    {
    return (CAknsSrv*)(CSession2::Server()); //lint !e1924 Cast
    }

// -----------------------------------------------------------------------------
// CAknsSrvSession::Cancel()
// -----------------------------------------------------------------------------
//
void CAknsSrvSession::Cancel()
    {
    if (iHandler && (iPendingNotifications == 0))
        {
        __ASSERT_DEBUG( !iNotifyRequest.IsNull(),
            User::Panic( KAknSkinSrvPanicCategory, EAknsSrvInvalidMessageHandle ) );
        if (!iNotifyRequest.IsNull())
            {
            iNotifyRequest.Complete(KErrCancel);
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrvSession::SetAllItemDefSets()
// -----------------------------------------------------------------------------
//
TInt CAknsSrvSession::SetAllItemDefSets( const RMessage2& aMessage )
    {
    TInt error = KErrNone;
    TInt number = static_cast<TInt> (aMessage.Int0());
    TInt timestamp = static_cast<TInt> (aMessage.Int1());
    TAknsPkgID pid;
    pid.Set( timestamp, number );

    Server()->SetActiveSkinContent(pid);
    error = Server()->MergeAndBroadcast();
    return error;
    }

// -----------------------------------------------------------------------------
// CAknsSrvSession::SetIdleWallPaperL
// -----------------------------------------------------------------------------
//
void CAknsSrvSession::SetIdleWallPaperL( const RMessage2& aMessage )
    {
    // Message parameters
    // 0. filename
    // 1. filename length;
    HBufC* buffer = HBufC::NewLC( aMessage.Int1() );
    TPtr filename = buffer->Des();
    aMessage.ReadL( 0, filename );
    Server()->SetWallpaperL(*buffer, KAknsIIDWallpaper );
    Server()->BroadcastUpdate();
    CleanupStack::PopAndDestroy( buffer );
    }

// -----------------------------------------------------------------------------
// CAknsSrvSession::StoreScalableGraphicsL
// -----------------------------------------------------------------------------
//
void CAknsSrvSession::StoreScalableGraphicsL(
    const RMessage2& aMessage, TBool aMorphing )
    {
    // Message parameters
    // 0. ItemID
    // 1. LayoutType & size
    // 2. bitmap handle
    // 3. mask handle
    TAknsItemID iid = { 0, 0 };
    TPckg<TAknsItemID> iidPack( iid );
    TAknsSrvLayoutInfo layoutInfo;
    TPckg<TAknsSrvLayoutInfo> layoutInfoPack( layoutInfo );
    // Leaves only if non-valid descriptor in client side.
    aMessage.ReadL( 0, iidPack );
    aMessage.ReadL( 1, layoutInfoPack );
    TInt bmphandle = aMessage.Int2();
    TInt mskhandle = aMessage.Int3();

    Server()->StoreScalableGraphicsL(
        iid,
        layoutInfo.iLayoutType,
        layoutInfo.iLayoutSize,
        bmphandle,
        mskhandle,
        aMorphing );
    }

// -----------------------------------------------------------------------------
// CAknsSrvSession::ClearScalableGraphics
// -----------------------------------------------------------------------------
//
void CAknsSrvSession::ClearScalableGraphics( const RMessage2& /*aMessage*/ )
    {
    // Message parameters
    // (none)
    Server()->ClearScalableGraphics();
    }

// -----------------------------------------------------------------------------
// CAknsSrvSession::AcknowledgeNotification
// -----------------------------------------------------------------------------
//
void CAknsSrvSession::AcknowledgeNotification( const RMessage2& aMessage )
    {
    // Message parameters
    // 0. Reserved (zero)
    Server()->AcknowledgeNotification( aMessage.Int0() );
    if (iPendingAcks && aMessage.Int0() == EAknsSCHNContentChanged)
        {
        iPendingAcks--;
        }
    if (!iPendingAcks)
        {
        iCountNotifications = EFalse;
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrvSession::ClientError()
// -----------------------------------------------------------------------------
//
void CAknsSrvSession::ClientError( const RMessage2& aMessage )
    {
    TInt err = (TInt) (aMessage.Int0());
    Server()->HandleClientError(err);
    }

// -----------------------------------------------------------------------------
// CAknsSrvSession::EnqueueNotification
// -----------------------------------------------------------------------------
//
TBool CAknsSrvSession::EnqueueNotification(
    const TAknsSkinChangeHandlerNotification aType, TBool aCountNotifications )
    {
    if( !iHandler )
        {
        return EFalse;
        }

    if( iPendingNotifications == 0 )
        {
        __ASSERT_DEBUG( !iNotifyRequest.IsNull(),
            User::Panic( KAknSkinSrvPanicCategory, EAknsSrvInvalidMessageHandle ) );
        if (!iNotifyRequest.IsNull())
            {
            iNotifyRequest.Complete(aType);
            }
        }
    else
        {
        if (aType == EAknsSCHNContentChanged && aCountNotifications)
            {
            TBool found = EFalse;
            for (TInt count = 0; count < iNotifyList.Count(); count++)
            {
            TAknsSkinChangeHandlerNotification type = iNotifyList[count];
            if (type == EAknsSCHNContentChanged)
                {
                found = ETrue;
                }
            }
            if (!found)
                {
                // Append to queue
                iNotifyList.Append( aType );
                iPendingAcks++;
                }
            else
                {
                return EFalse;
                }
            }
        else
            {
            iNotifyList.Append( aType );
            }
        }

    iPendingNotifications++;
    iCountNotifications = aCountNotifications;
    return ETrue;
    }

// -----------------------------------------------------------------------------
// CAknsSrvSession::NextEvent()
// -----------------------------------------------------------------------------
//
void CAknsSrvSession::NextEvent(const RMessage2 aMessage)
    {
    if( iCanceled )
        {
        iNotifyList.Reset();

        if (!iNotifyRequest.IsNull())
            {
            iNotifyRequest.Complete( KErrCancel );
            }
        __ASSERT_DEBUG( !aMessage.IsNull(),
            User::Panic( KAknSkinSrvPanicCategory, EAknsSrvInvalidMessageHandle ) );
        if (!aMessage.IsNull())
            {
            aMessage.Complete (KErrCancel);
            }
        return;
        }

    if( iPendingNotifications>0 )
        {
        iPendingNotifications--;
        }

    __ASSERT_DEBUG( iPendingNotifications>=iNotifyList.Count(),
        User::Panic( KAknSkinSrvPanicCategory, EAknsSrvNotifyListImbalance ) );

    if( iNotifyList.Count() > 0 )
        {
        // Take the first entry (FIFO)
        TAknsSkinChangeHandlerNotification type = iNotifyList[0];
        iNotifyList.Remove(0);
        __ASSERT_DEBUG( !aMessage.IsNull(),
            User::Panic( KAknSkinSrvPanicCategory, EAknsSrvInvalidMessageHandle ) );
        if (!aMessage.IsNull())
            {
            aMessage.Complete( type );
            }
        }
    else
        {
        // No notifications pending, store the message we want
        // to complete in the future...
        iNotifyRequest = aMessage;
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrvSession::OpenBitmapFileL
// -----------------------------------------------------------------------------
//
void CAknsSrvSession::OpenBitmapFileL( const RMessage2 aMessage )
    {
    // message parameters
    // 0. filename
    // 1. filehandle
    Server()->OpenBitmapFileL(aMessage);
    }

// -----------------------------------------------------------------------------
// CAknsSrvSession::OpenIniFileL
// -----------------------------------------------------------------------------
//
void CAknsSrvSession::OpenIniFileL( const RMessage2 aMessage )
    {
    // Message parameters
    // 0. package id
    // 1. location
    // 2. filehandle
    Server()->OpenIniFileL(aMessage);
    }

// -----------------------------------------------------------------------------
// CAknsSrvSession::CopySoundFileL
// -----------------------------------------------------------------------------
//
void CAknsSrvSession::CopySoundFileL( const RMessage2 aMessage)
    {
    Server()->CopySoundFileL( aMessage );
    }

// -----------------------------------------------------------------------------
// CAknsSrvSession::EnumeratePackages
// -----------------------------------------------------------------------------
//
void CAknsSrvSession::EnumeratePackages( const RMessage2 aMessage )
    {
    // Message parameters
    // 0. package count (return value)
    // 1. location
    Server()->EnumeratePackages(aMessage);
    }

// -----------------------------------------------------------------------------
// CAknsSrvSession::ReceivePackages
// -----------------------------------------------------------------------------
//
void CAknsSrvSession::ReceivePackages(const RMessage2 aMessage)
    {
    // Message parameters
    // 0. package count
    // 1. pointer to store enumerated packages
    Server()->ReceivePackages(aMessage);
    }

// -----------------------------------------------------------------------------
// CAknsSrvSession::DecodeWallpaperImageL
// -----------------------------------------------------------------------------
//
void CAknsSrvSession::DecodeWallpaperImageL(const RMessage2 aMessage)
    {
    Server()->DecodeWallpaperImageL( aMessage );
    }

// -----------------------------------------------------------------------------
// CAknsSrvSession::CacheWallpaperImageL
// -----------------------------------------------------------------------------
//
void CAknsSrvSession::CacheWallpaperImageL(const RMessage2 aMessage)
    {
    Server()->CacheWallpaperImageL(aMessage);
    }

// -----------------------------------------------------------------------------
// CAknsSrvSession::FreeDecodedWallpaper
// -----------------------------------------------------------------------------
//
void CAknsSrvSession::FreeDecodedWallpaper( const RMessage2 aMessage)
    {
    Server()->FreeDecodedWallpaper( aMessage );
    }

// -----------------------------------------------------------------------------
// CAknsSrvSession::OpenImageInifileL
// -----------------------------------------------------------------------------
//
void CAknsSrvSession::OpenImageInifileL( const RMessage2 aMessage)
    {
    Server()->OpenImageInifileL(aMessage);
    }

// -----------------------------------------------------------------------------
// CAknsSrvSession::CheckIconConfiguration
// -----------------------------------------------------------------------------
//
TInt CAknsSrvSession::CheckIconConfiguration( const RMessage2 aMessage )
    {
    TInt iconConfigured = KErrNotFound;
    iconConfigured = Server()->CheckIconConfiguration( aMessage );
    return iconConfigured;
    }

// End of File
