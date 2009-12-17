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


#ifndef C_AKNSSRVDRIVEMASTER_H
#define C_AKNSSRVDRIVEMASTER_H

#include <e32base.h>
#include <f32file.h>
#include <disknotifyhandler.h>
#include <driveinfo.h>

// path to available skin directory
_LIT( KAknSkinSrvPrivateSkinPath, "\\private\\10207114\\import\\" );

// path to skin resource directory
_LIT( KAknSkinSrvResourceDirectory, "\\resource\\skins\\" );


/**
 *  Listens to drive status changes.
 *
 *  @lib aknskinsrv.lib
 *  @since S60 v5.0
 */
class MAknsSrvDriveObserver
    {
    public:
        virtual void NotifyDriveStatusChange(
            const TInt& aDrive, const TBool& aMediaNotPresent ) =0;
    };


/**
 *  Handles disk drive information
 *
 *  Changes in drive statuses are received from MAknsSrvDriveObserver.
 *
 *  @lib aknskinsrv.lib
 *  @since S60 v5.0
 */
NONSHARABLE_CLASS( CAknsSrvDriveMaster ) :
    public CBase, public MDiskNotifyHandlerCallback
    {

public:

    // Type of drive list.
    enum TAknsSrvSkinDriveList
        {
        // Static, non-removable drive.
        EAknsSrvStaticDrive = 0,
        // Removable drive.
        EAknsSrvRemovableDrive = 1,
        // Any kind of drive.
        EAknsSrvAnyDrive = 2
        };

    /**
    * Constructor.
    *
    * @param aObserver observer for drive status changes.
    * @return new instance of CAknsSrvDriveMaster.
    */
    static CAknsSrvDriveMaster* NewL( MAknsSrvDriveObserver* aObserver );

    /**
    * Destructor.
    *
    */
    virtual ~CAknsSrvDriveMaster();

    /**
    * Returns skin directory on Rom.
    *
    * @param path to private skin directory on Rom.
    */
    static void DefaultSkinDirectoryOnRom( TDes& aPath );

    /**
    * Returns skin directory on memory card.
    *
    * @param path to private skin directory on memory card.
    */
    static void DefaultSkinDirectoryOnMemoryCard( TDes& aPath );

    /**
    * Returns skin directory on device drive.
    *
    * @param path to private skin directory on device drive.
    */
    static void DefaultSkinDirectoryOnDevice( TDes& aPath );

    /**
    * Returns a given default drive.
    *
    * @param aDriveType type of drive wanted (@see TDriveInfo)
    * @param aDrive returned drive (inluding a double colon e.g. "C:")
    */
    static void GetDefaultDrive( const TInt& aDriveType, TDes& aDrive );

    /**
    * Returns information whether or not the drive is removable.
    *
    * @param aFileSession File server session.
    * @param aDrive drive letter.
    * @return ETrue if drive is removable.
    */
    static TBool IsRemovableDrive( RFs& aFileSession, const TDesC& aDrive );

    /**
    * Returns information whether or not the drive is removable.
    *
    * @param aFileSession File server session.
    * @param aDrive drive enumeration.
    * @return ETrue if drive is removable.
    */
    static TBool IsRemovableDrive( RFs& aFileSession, const TInt aDrive );

    /**
    * Returns the number of drives.
    *
    * @param aDriveType type of drives counted.
    * @return number of drives in the device.
    */
    TInt GetNumberOfDrives( TAknsSrvSkinDriveList aDriveType ) const;

    /**
    * Returns the path to private skin directory on a given drive.
    *
    * @param aDriveType type of drive to get.
    * @param aLocation index in drive array.
    *        The max number to use can be retrieved with GetNumberOfDrives.
    * @param aPath returns path to private directory.
    */
    void SkinDirectoryOnDrive(
        TAknsSrvSkinDriveList aDriveType,
        TInt aLocation,
        TDes& aPath ) const;

    /**
    * From MDiskNotifyHandlerCallback.
    */
    void HandleNotifyDisk(
        TInt aError,
        const TDiskEvent& aEvent );

private:

    /* C++ constructor.*/
    CAknsSrvDriveMaster( MAknsSrvDriveObserver* aObserver );

    /* Second phase constructor. */
    void ConstructL();

private: // data

    /**
     * Array of removable drives. Each drive is given as drive enumerable
     * (e.g. EDriveC).
     * Own.
     */
    RArray<TInt> iRemovableDriveArray;

    /**
     * Array of non-removable drives. Each drive is given as drive enumerable
     * (e.g. EDriveC).
     * Own.
     */
    RArray<TInt> iStaticDriveArray;

    /**
     * Notifier for disk drive status changes.
     * Own.
     */
    CDiskNotifyHandler* iDiskNotifier;

    /**
     * File server session.
     * Own.
     */
    RFs iFsSession;

    /**
     * Observer for drive status changes.
     * Not own.
     */
    MAknsSrvDriveObserver* iObserver;

    };


#endif // C_AKNSSRVDRIVEMASTER_H
