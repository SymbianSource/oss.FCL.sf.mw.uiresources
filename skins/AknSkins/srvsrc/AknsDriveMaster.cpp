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
* Description:  Handles disk drive information
*
*/

#include "AknsDriveMaster.h"
#include "AknsDebug.h"

// Double colon character
_LIT( KAknsSrvDoubleColon, ":" );

// -----------------------------------------------------------------------------
// Appends drive letter and double colon to a descriptor.
// Path should be zero length when calling this method.
// -----------------------------------------------------------------------------
//
void AppendDriveLetterToDes( const TInt aDrive, TDes& aPath )
    {
    TChar driveLetter;
    RFs::DriveToChar( aDrive, driveLetter );
    aPath.Append( driveLetter );
    aPath.Append( KAknsSrvDoubleColon );
    }

// ======== MEMBER FUNCTIONS ========
// ---------------------------------------------------------------------------
// CAknsSrvDriveMaster::NewL
// ---------------------------------------------------------------------------
//
CAknsSrvDriveMaster* CAknsSrvDriveMaster::NewL( MAknsSrvDriveObserver* aObserver )
    {
    AKNS_TRACE_INFO("CAknsSrvDriveMaster::NewL");
    CAknsSrvDriveMaster* self = new( ELeave ) CAknsSrvDriveMaster( aObserver );
    CleanupStack::PushL( self );
    self->ConstructL();
    CleanupStack::Pop( self );
    return self;
    }

// ---------------------------------------------------------------------------
// Destructor
// ---------------------------------------------------------------------------
//
CAknsSrvDriveMaster::~CAknsSrvDriveMaster()
    {
    AKNS_TRACE_INFO("CAknsSrvDriveMaster destructor");
    iStaticDriveArray.Reset();
    iStaticDriveArray.Close();

    iRemovableDriveArray.Reset();
    iRemovableDriveArray.Close();

    delete iDiskNotifier;
    iFsSession.Close();
    }

// -----------------------------------------------------------------------------
// Finds and appends skin server's private ROM-drive directory to a string.
// -----------------------------------------------------------------------------
//
void CAknsSrvDriveMaster::DefaultSkinDirectoryOnRom( TDes& aPath )
    {
    AKNS_TRACE_INFO("CAknsSrvDriveMaster::DefaultSkinDirectoryOnRom");
    aPath.Zero();
    TInt drive = KErrNotFound;
    DriveInfo::GetDefaultDrive( DriveInfo::EDefaultRom, drive );
    AppendDriveLetterToDes( drive, aPath );
    if ( aPath.Length() )
        {
        aPath.Append( KAknSkinSrvPrivateSkinPath );
        }
    }

// -----------------------------------------------------------------------------
// Finds and appends skin server's private mass memory drive directory to a string.
// -----------------------------------------------------------------------------
//
void CAknsSrvDriveMaster::DefaultSkinDirectoryOnMemoryCard( TDes& aPath )
    {
    AKNS_TRACE_INFO("CAknsSrvDriveMaster::DefaultSkinDirectoryOnMemoryCard");
    aPath.Zero();
    TInt drive = KErrNotFound;
    DriveInfo::GetDefaultDrive( DriveInfo::EDefaultRemovableMassStorage, drive );
    AppendDriveLetterToDes( drive, aPath );
    if ( aPath.Length() )
        {
        aPath.Append( KAknSkinSrvPrivateSkinPath );
        }
    }

// -----------------------------------------------------------------------------
// Finds and appends skin server's private device drive directory to a string.
// -----------------------------------------------------------------------------
//
void CAknsSrvDriveMaster::DefaultSkinDirectoryOnDevice( TDes& aPath )
    {
    AKNS_TRACE_INFO("CAknsSrvDriveMaster::DefaultSkinDirectoryOnDevice");
    aPath.Zero();
    TInt drive = KErrNotFound;
    DriveInfo::GetDefaultDrive( DriveInfo::EDefaultPhoneMemory, drive );
    AppendDriveLetterToDes( drive, aPath );
    if ( aPath.Length() )
        {
        aPath.Append( KAknSkinSrvPrivateSkinPath );
        }
    }

// -----------------------------------------------------------------------------
// Gets default drive for the drive type.
// -----------------------------------------------------------------------------
//
void CAknsSrvDriveMaster::GetDefaultDrive( const TInt& aDriveType, TDes& aDrive )
    {
    AKNS_TRACE_INFO("CAknsSrvDriveMaster::GetDefaultDrive");
    TFileName path;
    TInt drive = EDriveC;
    TInt err = DriveInfo::GetDefaultDrive( aDriveType, drive );
    if ( err == KErrNone )
        {
        AppendDriveLetterToDes( drive, aDrive );
        }
    }

// -----------------------------------------------------------------------------
// Checks if given drive is removable.
// -----------------------------------------------------------------------------
//
TBool CAknsSrvDriveMaster::IsRemovableDrive( RFs& aFileSession, const TDesC& aDrive )
    {
    AKNS_TRACE_INFO("CAknsSrvDriveMaster::IsRemovableDrive");
    TInt drive = EDriveC;
    RFs::CharToDrive( aDrive[0], drive );
    return CAknsSrvDriveMaster::IsRemovableDrive( aFileSession, drive );
    }

// -----------------------------------------------------------------------------
// Checks if given drive is removable.
// -----------------------------------------------------------------------------
//
TBool CAknsSrvDriveMaster::IsRemovableDrive( RFs& aFileSession, const TInt aDrive )
    {
    AKNS_TRACE_INFO("CAknsSrvDriveMaster::IsRemovableDrive 2");
    TUint driveStatus = 0;
    TBool retVal = EFalse;
    TInt err = DriveInfo::GetDriveStatus( aFileSession, aDrive, driveStatus );
    if ( driveStatus & DriveInfo::EDriveExternallyMountable )
        {
        retVal = ETrue;
        }
    return retVal;
    }

// -----------------------------------------------------------------------------
// Returns number of drives in the device.
// -----------------------------------------------------------------------------
//
TInt CAknsSrvDriveMaster::GetNumberOfDrives( TAknsSrvSkinDriveList aDriveType ) const
    {
    AKNS_TRACE_INFO("CAknsSrvDriveMaster::GetNumberOfDrives");
    TInt drives = 0;
    if ( aDriveType == EAknsSrvStaticDrive )
        {
        drives = iStaticDriveArray.Count();
        AKNS_TRACE_INFO1("CAknsSrvDriveMaster::GetNumberOfDrives - static drives=%d", drives );
        }
    else if ( aDriveType == EAknsSrvRemovableDrive )
        {
        drives = iRemovableDriveArray.Count();
        AKNS_TRACE_INFO1("CAknsSrvDriveMaster::GetNumberOfDrives - removable drives=%d", drives );
        }
    else if ( aDriveType == EAknsSrvAnyDrive )
        {
        drives = iRemovableDriveArray.Count() + iStaticDriveArray.Count();
        AKNS_TRACE_INFO1("CAknsSrvDriveMaster::GetNumberOfDrives - all drives=%d", drives );
        }
    return drives;
    }

// -----------------------------------------------------------------------------
// Gets skin directory as descriptor based on drive type and array loc.
// -----------------------------------------------------------------------------
//
void CAknsSrvDriveMaster::SkinDirectoryOnDrive(
        TAknsSrvSkinDriveList aDriveType,
        TInt aLocation,
        TDes& aPath ) const
    {
    AKNS_TRACE_INFO("CAknsSrvDriveMaster::SkinDirectoryOnDrive");
    TInt driveNumber = KErrNotFound;
    aPath.Zero();
    if ( aDriveType == EAknsSrvStaticDrive )
        {
        if ( iStaticDriveArray.Count() == 0 )
            {
            return;
            }
        if ( aLocation >= 0 && aLocation <= iStaticDriveArray.Count() )
            {
            driveNumber = iStaticDriveArray[ aLocation ];
            AppendDriveLetterToDes( driveNumber, aPath );
            aPath.Append( KAknSkinSrvPrivateSkinPath );
            }
        }
    else if ( aDriveType == EAknsSrvRemovableDrive )
        {
        if ( iRemovableDriveArray.Count() == 0 )
            {
            return;
            }
        if ( aLocation >= 0 && aLocation <= iRemovableDriveArray.Count() )
            {
            driveNumber = iRemovableDriveArray[ aLocation ];
            AppendDriveLetterToDes( driveNumber, aPath );
            aPath.Append( KAknSkinSrvPrivateSkinPath );
            }
        }
    }

// -----------------------------------------------------------------------------
// Handle disk drive notifications.
// -----------------------------------------------------------------------------
//
void CAknsSrvDriveMaster::HandleNotifyDisk(
        TInt /*aError*/,
        const TDiskEvent& aEvent )
    {
    switch ( aEvent.iType )
        {
        // Add drive to arrays.
        case MDiskNotifyHandlerCallback::EDiskAdded:
            {
            TUint driveStatus = KErrNone;
            DriveInfo::GetDriveStatus( iFsSession, aEvent.iDrive, driveStatus );
            if ( driveStatus & DriveInfo::EDriveRemote )
                {
                return;
                }
            if ( ( driveStatus & DriveInfo::EDriveRemovable ) ||
                      ( driveStatus & DriveInfo::EDriveExternallyMountable ) )
                {
                iRemovableDriveArray.Append( aEvent.iDrive );
                }
            else if ( driveStatus & DriveInfo::EDriveInternal )
                {
                iStaticDriveArray.Append( aEvent.iDrive );
                }
            // AknsInstallObserver re-builds the skin list again automatically.
            break;
            }
        // Remove drive from arrays.
        case MDiskNotifyHandlerCallback::EDiskRemoved:
            if ( aEvent.iInfo.iDriveAtt & KDriveAttInternal )
                {
                TInt loc = iStaticDriveArray.Find( aEvent.iDrive );
                if ( loc != KErrNotFound )
                    {
                    iStaticDriveArray.Remove( loc );
                    }
                else
                    {
                    AKNS_TRACE_ERROR("CAknsSrvDriveMaster::HandleNotifyDisk unknown removable drive removed" );
                    }
                }
            else
                {
                TInt loc = iRemovableDriveArray.Find( aEvent.iDrive );
                if ( loc != KErrNotFound )
                    {
                    iRemovableDriveArray.Remove( loc );
                    }
                else
                    {
                    AKNS_TRACE_ERROR("CAknsSrvDriveMaster::HandleNotifyDisk unknown static drive removed" );
                    }
                }
            iObserver->NotifyDriveStatusChange( aEvent.iDrive, ETrue );
            break;
        case MDiskNotifyHandlerCallback::EDiskStatusChanged:
            {
            TBool diskRemoved = EFalse;
            if( !( aEvent.iInfo.iDriveAtt & KDriveAttInternal ) )
                {
                diskRemoved = ( aEvent.iInfo.iType == EMediaNotPresent );
                }
            iObserver->NotifyDriveStatusChange( aEvent.iDrive, diskRemoved );
            }
            break;
        default:
            // Uninteresting event.
            break;
        }
    }

// -----------------------------------------------------------------------------
// C++ constructor.
// -----------------------------------------------------------------------------
//
CAknsSrvDriveMaster::CAknsSrvDriveMaster( MAknsSrvDriveObserver* aObserver ) :
    iObserver( aObserver )
    {
    // We need own RFs session, so that this works in line with install observer,
    TInt err = iFsSession.Connect();
    AKNS_TRACE_INFO1("CAknsSrv::New RFs connected, ret=%d", err);

    TFileName path;
    TInt drive = EDriveC;
    err = DriveInfo::GetDefaultDrive( DriveInfo::EDefaultPhoneMemory, drive );
    AKNS_TRACE_INFO2("CAknsSrv::New Default Device Drive, ret=%d drive=%d", err, drive );
    if ( err == KErrNone )
        {
        iStaticDriveArray.Append( drive );
        }
    err = DriveInfo::GetDefaultDrive( DriveInfo::EDefaultRemovableMassStorage, drive );
    AKNS_TRACE_INFO2("CAknsSrv::New Default Removable Drive, ret=%d drive=%d", err, drive );
    if ( err == KErrNone )
        {
        iRemovableDriveArray.Append( drive );
        }
    TDriveList driveList;
    TInt driveCount = 0;
    TUint driveStatus = 0;
    err = DriveInfo::GetUserVisibleDrives( iFsSession, driveList, driveCount );
    for ( TInt i = 0; i < KMaxDrives; i++ )
        {
        // If drive has been set and it is not the default, append it
        if ( driveList[i] != 0 &&
             ( i != iStaticDriveArray[0] &&
               i != iRemovableDriveArray[0] ) )
            {
            driveStatus = 0;
            err = DriveInfo::GetDriveStatus( iFsSession, i, driveStatus );
            AKNS_TRACE_INFO3("CAknsSrv::New Drive Found, ret=%d drive=%d status=%d", err, driveList[i], driveStatus );
            if ( driveStatus & DriveInfo::EDriveRemote ) 
                {
                driveCount--;
                continue;
                }
            if ( ( driveStatus & DriveInfo::EDriveRemovable ) ||
            			( driveStatus & DriveInfo::EDriveExternallyMountable ) )
                {
                AKNS_TRACE_INFO("CAknsSrv::New Removable Drive Added ");
                iRemovableDriveArray.Append( i );
                }
            else if ( driveStatus & DriveInfo::EDriveInternal )
                {
                AKNS_TRACE_INFO("CAknsSrv::New Static Drive Added ");
                iStaticDriveArray.Append( i );
                }
            driveCount--;
            }

        // Check if all drives have already been found.
        if ( !driveCount )
            {
            break;
            }
        }
    }

// -----------------------------------------------------------------------------
// 2nd phase constructor.
// -----------------------------------------------------------------------------
//
void CAknsSrvDriveMaster::ConstructL()
    {
    AKNS_TRACE_INFO("CAknsSrvDriveMaster::ConstructL");
    // Start listening for drive events.
    iDiskNotifier = CDiskNotifyHandler::NewL( *this, iFsSession );
    User::LeaveIfError( iDiskNotifier->NotifyDisk() );
    }

// End of file
