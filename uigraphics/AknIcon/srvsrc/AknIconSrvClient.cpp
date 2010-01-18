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
* Description:  Client to AknIconServer.
*
*/


// INCLUDE FILES

#include "AknIconSrv.h"
#include "AknIconSrvClient.h"
#include "AknIconSrvTlsData.h"
#include "AknBitmap.h"
#include "AknIconSrvDef.h"
#include "AknIconPanic.h"
#include "AknIconManager.h"
#include "AknIconTraces.h"
#include <flogger.h>

#ifdef PRECACHELOG
#include <flogger.h>
#endif

// CONSTANTS
const TInt KAsyncMessageSlots = 0;
const TInt KConnectionTries = 2;

// ================= MEMBER FUNCTIONS ==========================================

RAknIconSrvClient::RAknIconSrvClient() : iConnections( 1 )
    {
    }

// -----------------------------------------------------------------------------
// RAknIconSrvClient::Connect()
// -----------------------------------------------------------------------------
//
EXPORT_C TInt RAknIconSrvClient::Connect()
    {
    TInt ret = KErrNone;

    CAknIconSrvTlsData* data = static_cast<CAknIconSrvTlsData*>( Dll::Tls() );

    if ( data )
        {
        data->iIconSession.iConnections++;
        return KErrNone;
        }
    else
        {
        TRAP( ret, CAknIconSrvTlsData::CreateSingletonL() );
        }

    return ret;
    }

// -----------------------------------------------------------------------------
// RAknIconSrvClient::Disconnect()
// -----------------------------------------------------------------------------
//
EXPORT_C void RAknIconSrvClient::Disconnect()
    {
    CAknIconSrvTlsData* data = static_cast<CAknIconSrvTlsData*>( Dll::Tls() );

	if ( !data ) return;

	if ( data->iIconSession.iConnections > 0 )
		{
		data->iIconSession.iConnections--;
		}

	if ( !data->iIconSession.iConnections )
		{
        delete data; // also frees TLS
		}
    }

// -----------------------------------------------------------------------------
// RAknIconSrvClient::GetSession()
// -----------------------------------------------------------------------------
//
RAknIconSrvClient* RAknIconSrvClient::GetSession()
    {
    CAknIconSrvTlsData* data = static_cast<CAknIconSrvTlsData*>( Dll::Tls() );

    __ASSERT_ALWAYS( data, 
        User::Panic( KAknIconPanicCategory, EClientSessionNotConnected ) );

    return &data->iIconSession;
    }

// -----------------------------------------------------------------------------
// RAknIconSrvClient::InitializeIconL()
// -----------------------------------------------------------------------------
//
void RAknIconSrvClient::InitializeIconL(
    CAknBitmap& aBitmap,
    CAknBitmap& aMask,
    TAknContentDimensions& aContentDimensions,
    const TAknIconParams& aInfo ) const
    {
    TPckgC<TAknIconParams> paramPack( aInfo );
    TAknIconSrvReturnData retData;

    CAknIconManager* manager = aBitmap.Manager();
    TBool mbmIcon = manager->IsMbmIcon();

    if ( mbmIcon )
        {
        // Existing bitmap handles are passed to the server side if they point
        // to the bitmaps already retrieved with CFbsBitmap::Load, which the
        // server it supposed to stretch into another bitmaps of given size.
        retData.iBitmapHandle = aBitmap.Handle();
        if ( aInfo.iMaskId >= 0 )
            {
            retData.iMaskHandle = aMask.Handle();
            }
#ifdef PRECACHELOG
        HBufC* buf = HBufC::New( 1024 );
        if ( buf )
            {

            TPtr ptr = buf->Des();
            ptr.Append( _L("AKNICON load, ") );
            
            TFileName fileName;
            manager->GetFullFileName( fileName );
            
            ptr.Append(fileName);
            
            ptr.Append( _L(", ") );
            ptr.AppendNum( aInfo.iBitmapId );
            ptr.Append( _L(", ") );
            ptr.AppendNum( aInfo.iMaskId );
            ptr.Append( _L(", ") );
            ptr.AppendNum( aInfo.iSize.iWidth );
            ptr.Append( _L(", ") );
            ptr.AppendNum( aInfo.iSize.iHeight );
            ptr.Append( _L(", ") );
            ptr.AppendNum( aInfo.iMode );
            ptr.Append( _L(", ") );
            ptr.AppendNum( aInfo.iRotationAngle );
            ptr.Append( _L(", ") );
            ptr.AppendNum( aInfo.iColor.Internal() );
            ptr.Append( _L(", ") );
            ptr.AppendNum( aInfo.IsCompressionDisabled() );
            ptr.Append( _L(", ") );
            
            
            _LIT( KFileLoggingDir, "AknIconPreCacher" );
            _LIT( KFileLog, "Traces.txt" );
                             
            RFileLogger::Write(KFileLoggingDir, KFileLog, EFileLoggingModeAppend, ptr);
              
            
                  
            delete buf;
            }

#endif
//PrecacheCache tool
        }

	TPckg<TAknIconSrvReturnData> retPack( retData );
	TIpcArgs args( &paramPack, &retPack, 0, 0 );
	
	if ( aInfo.iFile.SubSessionHandle() )
	    {
	    User::LeaveIfError( aInfo.iFile.TransferToServer( args, 2, 3 ) );
	    }

    // Scalable icon are generated and shared by server.
    // Bitmap icons are stretched and shared by server.
    User::LeaveIfError( SendReceive( ERetrieveOrCreateSharedIcon, args ) );

    // Now reset the bitmaps, which frees their old contents.
    // Then duplicate them with the handles retrieved from the server.
    aBitmap.Reset();
    if ( aInfo.iMaskId >= 0 )
        {
        aMask.Reset();
        }

    // This code enables proper cleanup in AknIconSrv side in CAknBitmap::Reset
    // and must be done before any leaving code.
    // ---------------------------------------------------------------------
    manager->SetInitializedParams( aInfo );
    manager->SetAppIcon(aInfo.iAppIcon);
    aBitmap.SetSharedByIconSrv();

    if ( aInfo.iMaskId >= 0 )
        {
        aMask.SetSharedByIconSrv();
        }
    // ---------------------------------------------------------------------

    // Duplicate the returned bitmap (and mask).
    User::LeaveIfError( aBitmap.Duplicate( retData.iBitmapHandle ) );

    if ( aInfo.iMaskId >= 0 )
        {
        User::LeaveIfError( aMask.Duplicate( retData.iMaskHandle ) );
        }

    aContentDimensions = retData.iContentDimensions;
    }

// -----------------------------------------------------------------------------
// RAknIconSrvClient::FreeBitmap()
// -----------------------------------------------------------------------------
//
void RAknIconSrvClient::FreeBitmap( CAknBitmap& aBitmap ) const
    {
    TAknIconParams info;

    CAknIconManager* manager = aBitmap.Manager();
    manager->GetFileName( info.iFileName );
    info.iBitmapId = manager->IconIdToIndex( manager->BitmapId() );
    info.iMaskId = manager->IconIdToIndex( manager->MaskId() );
    info.iAppIcon = manager->GetAppIcon();    
    manager->GetInitializedParams( info );

    TPckgC<TAknIconParams> paramPack( info );

    SendReceive( EFreeBitmap, TIpcArgs( &paramPack ) );
    }

// -----------------------------------------------------------------------------
// RAknIconSrvClient::GetContentDimensions()
// -----------------------------------------------------------------------------
//
TInt RAknIconSrvClient::GetContentDimensions( 
    CAknBitmap& aBitmap, TAknContentDimensions& aContentDimensions ) const
    {
    CAknIconManager* manager = aBitmap.Manager();
    
    RFile* file = NULL;

    TRAPD( err,
        {
        file = manager->FileHandleL();
        } );

    if ( err != KErrNone )
        {
        return err;
        }

    TAknIconParams info;
    manager->GetFileName( info.iFileName );
    info.iBitmapId = manager->IconIdToIndex( manager->BitmapId() );
    info.iAppIcon = manager->GetAppIcon();
    if (manager->IsDefaultIconDirUsed())
        {
        info.SetDefaultIconDirUsed();
        }    

    if ( file )
        {
        info.iFile = *file;
        }

    // Other members of TAknIconParams omitted.

    TPckgC<TAknIconParams> paramPack( info );
    TPckg<TAknContentDimensions> returnPack( aContentDimensions );

    TIpcArgs args( &paramPack, &returnPack, 0, 0 );

	if ( info.iFile.SubSessionHandle() )
	    {
	    err = info.iFile.TransferToServer( args, 2, 3 );
	    }

    if ( err == KErrNone )
        {
        err = SendReceive( EGetContentDimensions, args );
        }
        
    return err;
    }

// -----------------------------------------------------------------------------
// RAknIconSrvClient::PreserveIconData()
// -----------------------------------------------------------------------------
//
TInt RAknIconSrvClient::PreserveIconData( CAknIconManager& aManager ) const
    {
    RFile* file = NULL;

    TRAPD( err,
        {
        file = aManager.FileHandleL();
        } );

    if ( err != KErrNone )
        {
        return err;
        }

    TAknIconParams info;
    aManager.GetFileName( info.iFileName );
    info.iBitmapId = aManager.IconIdToIndex( aManager.BitmapId() );
    info.iAppIcon = aManager.GetAppIcon();
    if (aManager.IsDefaultIconDirUsed())
        {
        info.SetDefaultIconDirUsed();
        }      
    
    if ( file )
        {
        info.iFile = *file;
        }

    // Other members of TAknIconParams omitted.

    TPckgC<TAknIconParams> paramPack( info );
    TIpcArgs args( &paramPack, 0, 0, 0 );

	if ( info.iFile.SubSessionHandle() )
	    {
	    err = info.iFile.TransferToServer( args, 2, 3 );
	    }
	    
	if ( err == KErrNone )
	    {
	    err = SendReceive( EPreserveIconData, args );
	    }

    return err;
    }

// -----------------------------------------------------------------------------
// RAknIconSrvClient::DestroyIconData()
// -----------------------------------------------------------------------------
//
void RAknIconSrvClient::DestroyIconData( CAknIconManager& aManager ) const
    {
    TAknIconParams info;
    aManager.GetFileName( info.iFileName );
    info.iBitmapId = aManager.IconIdToIndex( aManager.BitmapId() );
    // Other members of TAknIconParams omitted.
   info.iAppIcon = aManager.GetAppIcon();
    TPckgC<TAknIconParams> paramPack( info );

    SendReceive( EDestroyIconData, TIpcArgs(&paramPack) );
    }

// -----------------------------------------------------------------------------
// RAknIconSrvClient::GetInitData()
// -----------------------------------------------------------------------------
//
void RAknIconSrvClient::GetInitData(
    TAknIconInitData& aData ) const
    {
    TPckg<TAknIconInitData> returnPack( aData );
    SendReceive( EGetInitData, TIpcArgs( &returnPack ) );
    }

// -----------------------------------------------------------------------------
// RAknIconSrvClient::__SERVER_HEAP_MARK()
// -----------------------------------------------------------------------------
//
void RAknIconSrvClient::__SERVER_HEAP_MARK() const
    {
#if defined(_DEBUG) && defined(__WINS__)
    SendReceive( EServerHeapMark, TIpcArgs() );
#endif
    }

// -----------------------------------------------------------------------------
// RAknIconSrvClient::__SERVER_HEAP_MARKEND()
// -----------------------------------------------------------------------------
//
void RAknIconSrvClient::__SERVER_HEAP_MARKEND() const
    {
#if defined(_DEBUG) && defined(__WINS__)
    SendReceive( EServerHeapMarkEnd, TIpcArgs() );
#endif
    }

// -----------------------------------------------------------------------------
// RAknIconSrvClient::__SERVER_HEAP_FAILNEXT()
// -----------------------------------------------------------------------------
//
void RAknIconSrvClient::__SERVER_HEAP_FAILNEXT( TInt aCount ) const
    {
	// Notice: this code is used to avoid the building warning!
    aCount = aCount;
#if defined(_DEBUG) && defined(__WINS__)
    SendReceive( EServerHeapFailNext, TIpcArgs(aCount) );
#endif
    }

// -----------------------------------------------------------------------------
// RAknIconSrvClient::__SERVER_HEAP_FAILNEXT_INCREASING()
// -----------------------------------------------------------------------------
//
void RAknIconSrvClient::__SERVER_HEAP_FAILNEXT_INCREASING( TInt aCount ) const
    {
	// Notice: this code is used to avoid the building warning!
    aCount = aCount;
#if defined(_DEBUG) && defined(__WINS__)
    SendReceive( EServerHeapFailNextIncreasing, TIpcArgs(aCount) );
#endif
    }

// -----------------------------------------------------------------------------
// RAknIconSrvClient::__SERVER_HEAP_RESET()
// -----------------------------------------------------------------------------
//
void RAknIconSrvClient::__SERVER_HEAP_RESET() const
    {
#if defined(_DEBUG) && defined(__WINS__)
    SendReceive( EServerHeapReset, TIpcArgs() );
#endif
    }

// -----------------------------------------------------------------------------
// RAknIconSrvClient::__SERVER_RESET_DYNAMICALLY_CHANGING_ALLOCATIONS()
// -----------------------------------------------------------------------------
//
void RAknIconSrvClient::__SERVER_RESET_DYNAMICALLY_CHANGING_ALLOCATIONS() const
    {
#if defined(_DEBUG)
    SendReceive( EServerResetDynamicallyChangingAllocations, TIpcArgs() );
#endif
    }

// -----------------------------------------------------------------------------
// RAknIconSrvClient::__SERVER_HEAP_USED()
// -----------------------------------------------------------------------------
//
TInt RAknIconSrvClient::__SERVER_HEAP_USED() const
    {
    TInt ret = 0;
#if defined(_DEBUG)
    ret = SendReceive( EServerHeapUsed, TIpcArgs() );
#endif
    return ret;
    }

// -----------------------------------------------------------------------------
// RAknIconSrvClient::__SERVER_HEAP_USED()
// -----------------------------------------------------------------------------
//
void RAknIconSrvClient::__SERVER_SET_PREFERRED_ICON_DISPLAY_MODE(
    TDisplayMode aMode ) const
    {
	// Notice: this code is used to avoid the building warning!
    aMode = aMode;
#if defined(_DEBUG)
    SendReceive( EServerSetPreferredIconDisplayMode, TIpcArgs( aMode ) );
#endif
    }

// -----------------------------------------------------------------------------
// RAknIconSrvClient::ConnectToServer()
// -----------------------------------------------------------------------------
//
TInt RAknIconSrvClient::ConnectToServer()
    {
    // Connect to server and make sure this can't cause 2 servers launch
    // if 2 clients are trying to connect simultaneously.

    TInt err = KErrNone;

    for ( TInt tries = 0; tries < KConnectionTries ; tries++ )
        { 
        err = CreateSession( KAknIconSrvName, TVersion(), KAsyncMessageSlots );

        // Break if connected to existing server or if the problem is
        // other than missing server.

        if ( err == KErrNone || 
           ( err != KErrNotFound && err != KErrServerTerminated ) )
            {
            break; 
            }

        err = StartServer();    // try start a new server

        // If server launched ok or someone else got to launch it first,
        // try connect again.

        if ( err != KErrNone && err != KErrAlreadyExists)
            {
            break; // server not launched: don't cycle round again
            }
        }

    return err;
    }

// -----------------------------------------------------------------------------
// RAknIconSrvClient::EnableCache()
// -----------------------------------------------------------------------------
//
TInt RAknIconSrvClient::EnableCache(TBool aEnable)
    {
    return SendReceive( EAknIconServRequestEnableCache, TIpcArgs(aEnable) );
    }

// End of File
