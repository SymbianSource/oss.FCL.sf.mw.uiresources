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
* Description:  Implementation of class CAknIconManager.
*
*/



// INCLUDE FILES
#include <mifconvdefs.h>
#include "AknIconManager.h"
#include "AknIconSrvDef.h"
#include "AknIconFormatHandler.h"
#include "AknIconFormatHandlerFactory.h"
#include "AknIconSrvClient.h"
#include "AknBitmap.h"
#include "AknIconSrv.h"
#include "AknIconSrvTlsData.h"
#include "AknIconLoader.h"
#include "AknIconSrvUtils.h"
#include "AknIconLocationInfo.h"
#include "AknIconTraces.h"
#include "AknIconFileNameCache.h"
#include <bitdev.h>
#include <e32math.h> // for Math::Frac()

// CONSTANTS

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknIconManager::CAknIconManager
// C++ default constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknIconManager::CAknIconManager() : 
    iInitializedSize( -1, -1 ),
    iInitializedMode( -1 ),
    iInitializedColor(KColorNotDefined),
    iColor( KColorNotDefined ),
    iContentDimensions( -1, -1 ),
    iAppIcon(EFalse)
	{
	}

// -----------------------------------------------------------------------------
// CAknIconManager::ConstructL
// Symbian 2nd phase constructor can leave.
// -----------------------------------------------------------------------------
//
void CAknIconManager::ConstructL(
    const TDesC& aFileName, const TInt16 aBitmapId, const TInt16 aMaskId )
    {
    iBitmapId = aBitmapId;
    iMaskId = aMaskId;
    
#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: %x CAknIconManager::ConstructL - iBitmapId=%d, iMaskId=%d"), this, iBitmapId, iMaskId);
#endif    

    TFileName fileName;
    const TDesC* usedFileName = &aFileName;

    // This check is to support compatibility with CEikonEnv::CreateBitmapL
    if ( !aFileName.Length() )
        {
        usedFileName = &AknIconUtils::AvkonIconFileName();
        }
    // Drive not defined? If so, check in all drives, Z: first.
    else if ( aFileName.Length() < 2 || aFileName[1] != KDriveDelimiter )
        {
        fileName = aFileName;
        ChangeFileExtension( fileName );

        CAknIconSrvTlsData* data = static_cast<CAknIconSrvTlsData*>( Dll::Tls() );
        TFindFile* find = new( ELeave ) TFindFile( data->FsSessionL() );
        CleanupStack::PushL( find );
        User::LeaveIfError( find->FindByDir( fileName, KDriveZ ) );
        fileName = find->File();
        CleanupStack::PopAndDestroy(); // find
        usedFileName = &fileName;
        }
                
    InitIconFileNameL(*usedFileName);
    }
    
// -----------------------------------------------------------------------------
// CAknIconManager::InitIconFileNameL
// -----------------------------------------------------------------------------
//
void CAknIconManager::InitIconFileNameL( const TDesC& aFileName )
    {
    CAknIconSrvTlsData* data = static_cast<CAknIconSrvTlsData*>( Dll::Tls() );
    
    TPtrC usedFileName = aFileName;
    
    // Check for the default icon dir. It is indicated with a flag, to save RAM.
    if ( usedFileName.Length() >= KAknIconDefaultDirLength &&
         usedFileName.Left( KAknIconDefaultDirLength ).CompareF( 
            KAknIconDefaultDir ) == 0 )
        {
        SetDefaultIconDirUsed();
        usedFileName.Set(usedFileName.Mid( KAknIconDefaultDirLength ));
        }

    // remove file extension to save RAM by eliminating storing redundant file names
    // in TLS data
    if (HasValidFileExtension(usedFileName))    
        {
        usedFileName.Set(usedFileName.Left( usedFileName.Length() - KExtensionLength ));
        SetFileExtRemoved();
        }

    // cache icon file name        
    iFileName = data->IconFileNameCache().CacheIconFileNameL(usedFileName);
    }

CAknIconManager* CAknIconManager::NewL(
    const TDesC& aFileName, const TInt16 aBitmapId, const TInt16 aMaskId )
    {
    CAknIconManager* self = new( ELeave ) CAknIconManager();
    CleanupStack::PushL( self );
    self->ConstructL( aFileName, aBitmapId, aMaskId );
    CleanupStack::Pop();
    return self;
    }

// Destructor
CAknIconManager::~CAknIconManager()
    {
    DestroyIconData();
    delete iHandler;
    }

// -----------------------------------------------------------------------------
// CAknIconManager::PreinitializeIconL
// Does the initializations that are done during AknIconUtils::CreateIconL(C)
// calls, i.e. before AknIconUtils::SetSize has been called.
// -----------------------------------------------------------------------------
//
void CAknIconManager::PreinitializeIconL()
    {
    // Releases the icon file handle, if opened.
    CleanupStack::PushL( TCleanupItem( CleanupReleaseFileHandle, this ) );    

    RetrieveIconLocationInfoL();
    LoadIfBitmapIconL();

    CleanupStack::PopAndDestroy(); // CleanupReleaseFileHandle
    }

// -----------------------------------------------------------------------------
// CAknIconManager::LoadIfBitmapIconL
// -----------------------------------------------------------------------------
//
void CAknIconManager::LoadIfBitmapIconL()
    {
    if ( IsMbmIcon() )
        {
        /**
        * CAknBitmap::Reset needs to be called always before calling
        * CFbsBitmap::Load or CFbsBitmap::Duplicate.
        */
        iBitmap->Reset();
        if ( iMask )
            {
            iMask->Reset();
            }

        LoadBitmapIconL(); // virtual function call

        // None of the scale modes was used - just plain load.
        iInitializedMode = -1; 
        iLoadedSize = iBitmap->SizeInPixels();
        }
    }

// -----------------------------------------------------------------------------
// CAknIconManager::InitializeIcon
// -----------------------------------------------------------------------------
//
TInt CAknIconManager::InitializeIcon( const TSize& aSize, TScaleMode aMode )
    {
    return InitializeIcon( aSize, aMode, 0 );
    }

// -----------------------------------------------------------------------------
// CAknIconManager::InitializeIcon
// -----------------------------------------------------------------------------
//
// This method resizes both scalable and bitmap icons.
//
TInt CAknIconManager::InitializeIcon( 
    const TSize& aSize,
    TScaleMode aMode,
    TInt aAngle )
    {
#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: %x Calling CAknIconManager::InitializeIcon - Icon size (%d,%d), Mode=%d, Angle=%d"),
                   this, aSize.iWidth, aSize.iHeight, aMode, aAngle);
#endif    
    
    if(!iBitmap)
        {
            return KErrCorrupt;
        }
    // If already initialized with the same parameters, do nothing.
    if ( iBitmap->Handle() )
        {
        // MBM icon
        if ( IsMbmIcon() )
            {
            if ( (iInitializedMode < 0 && iBitmap->SizeInPixels() == aSize && !iBitmap->IsAppIcon() && !aAngle && iColor == KColorNotDefined ) ||
                 (iInitializedMode == aMode &&
                  iInitializedSize == aSize && 
                  iInitializedAngle == aAngle &&
                  iInitializedColor == iColor) )
                {
                return KErrNone;
                }
            }
        // MIF icon
        else
            {
            if ( iInitializedMode == aMode && 
                 iInitializedSize == aSize &&
                 iInitializedAngle == aAngle &&
                 iInitializedColor == iColor)
                {
                return KErrNone;
                }
            }
        }

    // TRAP all leaving code and handle error in the end.
    TRAPD( err,
        {
        InitializeIconL(
            aSize,
            aMode,
            aAngle );
        } );

    HandleError( err );
#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: %x CAknIconManager::InitializeIcon called - return: %d"), this, err);
#endif    
    return err;
    }

// -----------------------------------------------------------------------------
// CAknIconManager::InitializeIconL
// -----------------------------------------------------------------------------
//
void CAknIconManager::InitializeIconL(
    const TSize& aSize,
    TScaleMode aMode,
    TInt aAngle )
    {
#ifdef __AKNICON_TRACES

    TSize oldSize = iBitmap->SizeInPixels();

    if ( oldSize != TSize( 0, 0 ) &&
         oldSize != iLoadedSize )
        {
        HBufC* buf = HBufC::New( 1024 );
        if ( buf )
            {
            TPtr ptr = buf->Des();
            ptr.Copy( _L("AknIcon WARNING: icon size changed (") );            
            ptr.AppendNum( oldSize.iWidth );
            ptr.Append( _L(", ") );
            ptr.AppendNum( oldSize.iHeight );
            ptr.Append( _L(") -> (") );
            ptr.AppendNum( aSize.iWidth );
            ptr.Append( _L(", ") );
            ptr.AppendNum( aSize.iHeight );
            ptr.Append( _L(")") );

            RDebug::Print( ptr );

            ptr.Zero();
            if (iFileName)
            	{
            	GetFullFileName( ptr );
            	}
            ptr.Append( _L(", bitmap ID = ") );
            ptr.AppendNum( iBitmapId );
            ptr.Append( _L(", mask ID = ") );
            ptr.AppendNum( iMaskId );

            RDebug::Print( ptr );

            delete buf;
            }
        }
#endif

    DoInitializeIconL( aSize, aMode, aAngle ); // virtual function call
    }

// -----------------------------------------------------------------------------
// CAknIconManager::GetContentDimensions
// -----------------------------------------------------------------------------
//
TInt CAknIconManager::GetContentDimensions( TAknContentDimensions& aContentDimensions )
    {
    TRAPD( ret, GetContentDimensionsL( aContentDimensions ) );
    return ret;
    }

// -----------------------------------------------------------------------------
// CAknIconManager::GetContentDimensionsL
// -----------------------------------------------------------------------------
//
void CAknIconManager::GetContentDimensionsL( TAknContentDimensions& aContentDimensions )
    {
    // Releases the icon file handle, if opened.
    CleanupStack::PushL( TCleanupItem( CleanupReleaseFileHandle, this ) );
    
    // MBM icon
    if ( IsMbmIcon() )
        {
        // If not loaded at all yet, do it now.
        if ( !iBitmap->Handle() )
            {
            LoadIfBitmapIconL();
            }
        aContentDimensions.SetDimensions(iLoadedSize);
        }
    else if ( iContentDimensions.iWidth < 0 )
        {
	    // Server-shared MIF icon (not animated)
		if ( !IsAnimated() )
			{
		    // Never returns NULL.
		    RAknIconSrvClient* client = RAknIconSrvClient::GetSession();
		    TInt ret = client->GetContentDimensions( *iBitmap, aContentDimensions );

		    if ( ret == KAknIconSrvCodeAnimated )
		        {
#ifdef __AKNICON_TRACES
		    RDebug::Print( _L("AknIcon: %x In DoInitializeIconL animated icon"), this);
#endif    	        
		        SetAnimated();
		        }
		    else
		        {
		        User::LeaveIfError( ret );
		        }
	        }
		// Animated MIF icon
		if ( IsAnimated())
		    {
		        // Prepare icon if not done yet.
		        if ( !iHandler )
		            {
					PrepareAnimatedIconL();
		            }
		        
		        iHandler->GetContentDimensionsL( aContentDimensions );
		        
		        // free resources
		        DeleteIconFormatHandler();
		    }
		// Store content dimensions in this class.
		iContentDimensions = aContentDimensions;
		}
    // Content dimensions already retrieved.
    else
        {
        aContentDimensions = iContentDimensions;
        }
       
    CleanupStack::PopAndDestroy(); // CleanupReleaseFileHandle
    }

// -----------------------------------------------------------------------------
// CAknIconManager::HandleError
// Handles errors occurred in icon initialization (SetSize).
// -----------------------------------------------------------------------------
//
void CAknIconManager::HandleError( TInt aError )
    {
    if ( aError != KErrNone )
        {
        iBitmap->Reset();
        if ( iMask )
            {
            iMask->Reset();
            }
            
        // Clear the information of the
        // initialisation status parameters.    
        iInitializedMode = -1;
        iInitializedSize = ( TSize( -1, -1 ) );
        iInitializedAngle = 0;
        }
    }

// -----------------------------------------------------------------------------
// CAknIconManager::PreserveIconData
// -----------------------------------------------------------------------------
//
void CAknIconManager::PreserveIconData()
    {
    if ( !IsMbmIcon() && !IsIconDataPreserved() )
        {
        // Never returns NULL.
        RAknIconSrvClient* client = RAknIconSrvClient::GetSession();
        TInt ret = client->PreserveIconData( *iBitmap->Manager() );

        // Release the icon file handle, if opened.
        ReleaseFileHandle();

        if ( ret == KErrNone )
            {
            SetIconDataPreserved();
            }

        else if ( ret == KAknIconSrvCodeAnimated )
            {
            SetAnimated();
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknIconManager::DestroyIconData
// -----------------------------------------------------------------------------
//
void CAknIconManager::DestroyIconData()
    {
    if ( IsIconDataPreserved() )
        {
        ClearIconDataPreserved();

        // Never returns NULL.
        RAknIconSrvClient* client = RAknIconSrvClient::GetSession();
        client->DestroyIconData( *this );
        }
    }

// -----------------------------------------------------------------------------
// CAknIconManager::SetIconColor
// -----------------------------------------------------------------------------
//
void CAknIconManager::SetIconColor( const TRgb aColor )
    {
    iColor = aColor;
    }

TRgb CAknIconManager::GetIconColor() const
    {
    return iColor;
    }


// -----------------------------------------------------------------------------
// CAknIconManager::GetFileName
// -----------------------------------------------------------------------------
//
void CAknIconManager::GetFileName( TDes& aFileName ) const
    {
    aFileName = *iFileName;
    AppendFileExtension( aFileName );
    }

// -----------------------------------------------------------------------------
// CAknIconManager::GetFullFileName
// -----------------------------------------------------------------------------
//
void CAknIconManager::GetFullFileName( TDes& aFileName ) const
    {
    if ( IsDefaultIconDirUsed() )
        {
        aFileName = KAknIconDefaultDir;
        }

    aFileName.Append( *iFileName );
    AppendFileExtension( aFileName );
    }

// -----------------------------------------------------------------------------
// CAknIconManager::GetFullMifFileName
// -----------------------------------------------------------------------------
//
void CAknIconManager::GetFullMifFileName( TDes& aFileName ) const
    {
    if ( IsDefaultIconDirUsed() )
        {
        aFileName = KAknIconDefaultDir;
        }

    aFileName.Append( *iFileName );
    
    if ( IsFileExtRemoved())
        {                
        aFileName.Append( KMifExtension );
        }    
    }

// -----------------------------------------------------------------------------
// CAknIconManager::Ref
// -----------------------------------------------------------------------------
//
void CAknIconManager::Ref()
    {
    iRefCount++;
    }

// -----------------------------------------------------------------------------
// CAknIconManager::Unref
// -----------------------------------------------------------------------------
//
void CAknIconManager::Unref(const CAknBitmap& aBitmap)
    {
    if ( --iRefCount == 0 )
        {
        delete this;
        }
    else
        {
        // If bitmap or mask is destroyed, delete icon format handler
        DeleteIconFormatHandler();
        // If mask is destroyed reset mask related info
        if (&aBitmap == iMask && iBitmap)
            {
            iMask = NULL;
            iOriginalMaskId = iMaskId;
            iMaskId = -1;
            iBitmap->SetMaskDestroyed();
            }
        else
            {
            iBitmap = NULL;
            }                  
        }
    }

// -----------------------------------------------------------------------------
// CAknIconManager::SetBitmap
// -----------------------------------------------------------------------------
//
void CAknIconManager::SetBitmap( CAknBitmap* aBitmap )
    {
    iBitmap = aBitmap;
    }

// -----------------------------------------------------------------------------
// CAknIconManager::SetMask
// -----------------------------------------------------------------------------
//
void CAknIconManager::SetMask( CAknBitmap* aMask )
    {
    iMask = aMask;
    }

// -----------------------------------------------------------------------------
// CAknIconManager::InitializeAnimatedIconL
// -----------------------------------------------------------------------------
//
void CAknIconManager::InitializeAnimatedIconL( const TAknIconParams& aInfo )
    {
    CAknIconSrvTlsData* data = static_cast<CAknIconSrvTlsData*>( Dll::Tls() );    
    
    CAknIconLoader* loader = NULL;

    if ( !iHandler )
        {
        loader = PrepareAnimatedIconLC();
        }
    else
        {
        TFileName name;
        GetFullFileName( name );

        RFile* file = FileHandleL();
        data->InitIconLoaderL( name, file );
        loader = data->IconLoader();
        // push 1 item to match other branch
        CleanupStack::PushL( (TAny*)NULL );
        }
    
    TDisplayMode bitmapDepth =
        (TDisplayMode)loader->IconDepthL( IconIdToIndex( iBitmapId ) );

    CleanupStack::PopAndDestroy(); // PrepareAnimatedIconLC or NULL
    
    iBitmap->Reset();
    if ( iMask )
        {
        iMask->Reset();
        }

    TBool MarginFlag = EFalse;
    
    if(iBitmap->IsAppIcon()&& !iBitmap->IsRomBitmap())
    MarginFlag = ETrue;
    
   
    AknIconSrvUtils::RenderPreparedIconL(
        *iHandler,
        iBitmap,
        iMask,
        bitmapDepth,
        data->InitData().iIconMode,
        aInfo.iSize,
        (TScaleMode)aInfo.iMode,
        aInfo.iRotationAngle,
        MarginFlag);

	SetInitializedParams( aInfo );

    // No color icon support here currently.

    // No bitmap compression here, because SVG engine cannot handle compressed
    // frame buffer.
    }

// -----------------------------------------------------------------------------
// CAknIconManager::SetObserver
// -----------------------------------------------------------------------------
//
void CAknIconManager::SetObserver( MAknIconObserver* aObserver )
    {
    iObserver = aObserver;
    if ( iHandler )
        {
        iHandler->SetObserver( this );
        }
    }

// -----------------------------------------------------------------------------
// CAknIconManager::BitmapChanged
// -----------------------------------------------------------------------------
//
void CAknIconManager::BitmapChanged()
    {
    if ( iObserver )
        {
        iObserver->BitmapChanged( iBitmap );
        }
    }

// -----------------------------------------------------------------------------
// CAknIconManager::IsMbmIcon
// This function does not work before PreinitializeIconL has been called.
// -----------------------------------------------------------------------------
//
TBool CAknIconManager::IsMbmIcon() const
    {
    return iBitmapId < KMifIdFirst;
    }

// -----------------------------------------------------------------------------
// CAknIconManager::IconIdToIndex
// This function does not work before PreinitializeIconL has been called.
// -----------------------------------------------------------------------------
//
TInt CAknIconManager::IconIdToIndex( TInt aId ) const
    {
    if ( IsMbmIcon() || aId < 0 )
        {
        return aId;
        }
    return aId - KMifIdFirst;
    }

// -----------------------------------------------------------------------------
// CAknIconManager::ChangeFileExtension
// -----------------------------------------------------------------------------
//
void CAknIconManager::ChangeFileExtension( TDes& aFileName ) const
    {
    // change file extension to .mif or .mbm depending on IsMbmIcon
    const TDesC& extension = IsMbmIcon() ? KMbmExtension : KMifExtension;
    
    if (HasValidFileExtension(aFileName))    
        {
        aFileName.SetLength( aFileName.Length() - KExtensionLength );
        aFileName.Append( extension );
        }
    }

// -----------------------------------------------------------------------------
// CAknIconManager::AppendFileExtension
// -----------------------------------------------------------------------------
//
void CAknIconManager::AppendFileExtension( TDes& aFileName ) const
    {
    // append file extension .mif or .mbm depending on IsMbmIcon
    const TDesC& extension = IsMbmIcon() ? KMbmExtension : KMifExtension;
    
    if ( IsFileExtRemoved())
        {                
        aFileName.Append( extension );
        }
    }  

// -----------------------------------------------------------------------------
// CAknIconManager::PrepareAnimatedIconLC
// -----------------------------------------------------------------------------
//
CAknIconLoader* CAknIconManager::PrepareAnimatedIconLC()
    {
    TFileName name;
    GetFullFileName( name );

    CAknIconSrvTlsData* data = static_cast<CAknIconSrvTlsData*>( Dll::Tls() );
        
    RFile* file = FileHandleL();
    data->InitIconLoaderL( name, file );
    CAknIconLoader* loader = data->IconLoader();

    // Puts a cleanup item in CS, which makes sure that the icon data in memory
    // is released it is no longer needed.
    TPtrC8 iconData = AknIconSrvUtils::InitIconDataAndHandlerLC( 
        loader, iHandler, IconIdToIndex( iBitmapId ), ETrue );

	// set observer if SetObserver is called
	if ( iObserver )
    	{
        iHandler->SetObserver( this );
    	}
    TInt handle;
    iHandler->PrepareIconL( iconData, handle );
    iHandler->UsePreparedIconL( handle );

    return loader;
    }

// -----------------------------------------------------------------------------
// CAknIconManager::PrepareAnimatedIconL
// -----------------------------------------------------------------------------
//
void CAknIconManager::PrepareAnimatedIconL(TBool bAnimationReady /*= EFalse*/)
	{
	// If PrepareAnimatedIconLC leaves the animated icon might not be fully prepared.
	// We have to delete iHandler to ensure the state integrity of
	// CAknIconManager object. This also causes that a new call to this function tries
	// to prepare again the animated icon.
	TRAPD(err,
		{
	    PrepareAnimatedIconLC();
	    CleanupStack::PopAndDestroy(); // PrepareAnimatedIconLC
		if (bAnimationReady)		
			{
			iHandler->RenderPreparedIconL(iBitmap,iMask);
			}
		});
	if (err != KErrNone)
		{
#ifdef __AKNICON_TRACES
	RDebug::Print( _L("AknIcon: %x In PrepareAnimatedIconL PrepareAnimatedIconLC/RenderPreparedIconL leaved - err: %d"), this, err);
#endif    
		DeleteIconFormatHandler();
		User::Leave(err);
		}
		
	}

// -----------------------------------------------------------------------------
// CAknIconManager::LoadBitmapIconL
// -----------------------------------------------------------------------------
//
void CAknIconManager::LoadBitmapIconL()
    {
    TFileName filename;
    GetFullFileName( filename );

    // CAknBitmap::Reset must always be called before calling CFbsBitmap::Load.
    __ASSERT_DEBUG( !iBitmap->Handle(), User::Invariant() );

    User::LeaveIfError( iBitmap->Load( filename, iBitmapId ) );

    if ( iMask )
        {
        // CAknBitmap::Reset must always be called before calling CFbsBitmap::Load.
        __ASSERT_DEBUG( !iMask->Handle(), User::Invariant() );

        User::LeaveIfError( iMask->Load( filename, iMaskId ) );
        }
    }

// -----------------------------------------------------------------------------
// CAknIconManager::FileHandleL
// -----------------------------------------------------------------------------
//
RFile* CAknIconManager::FileHandleL(
    MAknIconFileProvider::TIconFileType /*aType*/ )
    {
    return NULL;
    }

// -----------------------------------------------------------------------------
// CAknIconManager::ReleaseFileHandle
// -----------------------------------------------------------------------------
//
void CAknIconManager::ReleaseFileHandle()
    {
    CAknIconSrvTlsData* data = static_cast<CAknIconSrvTlsData*>( Dll::Tls() );    
    if ( data )
        {
        CAknIconLoader* loader = data->IconLoader();
        if ( loader )
            {
            loader->CloseFile();
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknIconManager::CleanupReleaseFileHandle
// -----------------------------------------------------------------------------
//
void CAknIconManager::CleanupReleaseFileHandle( TAny* aParam )
    {
    static_cast<CAknIconManager*>( aParam )->ReleaseFileHandle();
    }

// -----------------------------------------------------------------------------
// CAknIconManager::DoInitializeIconL
// -----------------------------------------------------------------------------
//
void CAknIconManager::DoInitializeIconL(
    const TSize& aSize,
    TScaleMode aMode,
    TInt aAngle )
    {
    // Releases the icon file handle, if opened.
    CleanupStack::PushL( TCleanupItem( CleanupReleaseFileHandle, this ) );
    
    // In case of an MBM icon, load it normally here and be happy if it
    // matches the given size.
    LoadIfBitmapIconL();

    // Only condition not to proceed to server side in here is that
    // the loaded bitmap meets exactly the given parameters.
    if ( iBitmap->IsAppIcon() || !IsMbmIcon() || iBitmap->SizeInPixels() != aSize || aAngle || iColor != KColorNotDefined )
        {
        // Never returns NULL.
        RAknIconSrvClient* client = RAknIconSrvClient::GetSession();

        TAknIconParams info;

        GetFileName( info.iFileName );
        info.iBitmapId = IconIdToIndex( iBitmapId );
        info.iMaskId = IconIdToIndex( iMaskId );
        info.iSize = aSize;
        info.iMode = aMode;
        info.iRotationAngle = aAngle;
        info.iColor = iColor;
        info.iAppIcon = iBitmap->IsAppIcon();
        if (IsDefaultIconDirUsed())
            {
            info.SetDefaultIconDirUsed();
            }
            
        if (IsMbmIcon())
            {
            info.SetMbmIcon();
            }                    

        if (IsExcludedFromCache())
            {
            info.ExcludeFromCache();
            }      
            
        if (IsCompressionDisabled())
            {
            info.DisableCompression();
            }                                             

        RFile* file = FileHandleL();
        if ( file )
            {
            info.iFile = *file;
            }
        // Otherwise, info.iFile is initialized by RFile constructor.

        // Retrieve scaled icon from server side.
        TRAPD( err, 
            {
            client->InitializeIconL( *iBitmap, *iMask, iContentDimensions, info );
            } );

        // Animated icon? Those are not shared by the server.
        if ( err == KAknIconSrvCodeAnimated )
            {
#ifdef __AKNICON_TRACES
		    RDebug::Print( _L("AknIcon: %x In DoInitializeIconL animated icon"), this);
#endif               
            SetAnimated();            
            // If InitializeAnimatedIconL leaves the animated icon might not be fully prepared.
            // We have to delete iHandler to ensure the state integrity of
            // CAknIconManager object. This also causes that a new call to this function tries
            // to prepare again the animated icon.
            TRAPD(err,InitializeAnimatedIconL( info ));
            
			if (err != KErrNone )
				{
				// free resources
				DeleteIconFormatHandler();
#ifdef __AKNICON_TRACES
			    RDebug::Print( _L("AknIcon: %x In DoInitializeIconL InitializeAnimatedIconL leaved - err: %d"), this, err);
#endif    
	            User::Leave( err );
				}
				
			if (!iObserver)
				{
				// free resources if no observer is specified for the animation
				DeleteIconFormatHandler();
				}
            }
        else
            {
            User::LeaveIfError( err );
            }
        }

    CleanupStack::PopAndDestroy(); // CleanupReleaseFileHandle        
    }

// -----------------------------------------------------------------------------
// CAknIconManager::RetrieveIconLocationInfoL
// -----------------------------------------------------------------------------
//
void CAknIconManager::RetrieveIconLocationInfoL()
    {
    // With MIF v1, bitmap IDs were in the range 0 ... KMifIdFirst-1.
    // In that case, we don't need to do anything.
    if ( iBitmapId >= KMifIdFirst )
        {
        // Try retrieve cached information of icon type from TLS
        CAknIconSrvTlsData* data = static_cast<CAknIconSrvTlsData*>( Dll::Tls() );
        // If MBM icon, this stores new IDs in iBitmapId and iMaskId.

        TFileName name;
        GetFullMifFileName( name );

        TInt ret = data->GetIconLocationInfo(
            name, iBitmapId, iMaskId );
        
        if ( ret == KErrNotFound )
            {
            // Loads the icon type information from the MIF file and caches
            // it in TLS for all the icons in the same icon file.
            // Also, mapping from MBG IDs to the IDs used with MBM files is stored.
            LoadIconLocationInfoL( name );
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknIconManager::LoadIconLocationInfoL
// -----------------------------------------------------------------------------
//
void CAknIconManager::LoadIconLocationInfoL(
    const TDesC& aFileName )
    {
    // With CAknFileProviderIconManager, this call also initializes iFileName,
    // which is needed below in GetFullFileName call.
    RFile* file = FileHandleL( MAknIconFileProvider::EMifFile ); // virtual function call

    CAknIconSrvTlsData* data = static_cast<CAknIconSrvTlsData*>( Dll::Tls() );
    data->InitIconLoaderL( aFileName, file );
    CAknIconLoader* loader = data->IconLoader();

    CAknIconLocationInfo* info = loader->LoadIconLocationInfoL( aFileName );
    CleanupStack::PushL( info );
    // Store in TLS for further use.
    data->StoreIconLocationInfoL( info );
    CleanupStack::Pop(); // info

    User::LeaveIfError( info->GetIconLocation( iBitmapId, iMaskId ) );
    }

// -----------------------------------------------------------------------------
// CAknIconManager::FileHandleL
// -----------------------------------------------------------------------------
//
RFile* CAknIconManager::FileHandleL()
    {
    MAknIconFileProvider::TIconFileType type =
        IsMbmIcon() ?
        MAknIconFileProvider::EMbmFile :
        MAknIconFileProvider::EMifFile;
        
    return FileHandleL( type ); // Virtual function call
    }


   	
 TInt CAknIconManager::ScaleMode() const  	
 	{
 	return iInitializedMode;
 	}

TInt CAknIconManager::Check(const TSize& aSize,TScaleMode aMode,TInt aAngle) 
   {
   
    // If already initialized with the same parameters, do nothing.
    if ( iBitmap->Handle() )
        {
        // MBM icon
        if ( IsMbmIcon() )
            {
            if ( (iInitializedMode < 0 && iBitmap->SizeInPixels() == aSize && !aAngle && iColor == KColorNotDefined ) ||
                 (iInitializedMode == aMode &&
                  iInitializedSize == aSize && 
                  iInitializedAngle == aAngle &&
                  iInitializedColor == iColor) )
                {
                return KErrNone;
                }
            }
        // MIF icon
        else
            {
            if ( iInitializedMode == aMode && 
                 iInitializedSize == aSize &&
                 iInitializedAngle == aAngle &&
                 iInitializedColor == iColor)
                {
                return KErrNone;
                }
            }
        }
   
    return KErrGeneral;   
   }
   
 
   
//  End of File
