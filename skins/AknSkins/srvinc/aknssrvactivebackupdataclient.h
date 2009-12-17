/*
* Copyright (c) 2007 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Skin server's active data owner in backup/restore.
*
*/


#ifndef C_AKNSSRVACTIVEBACKUPDATACLIENT_H
#define C_AKNSSRVACTIVEBACKUPDATACLIENT_H

#include <e32base.h>    // CBase
#include <connect/abclient.h>

/**
 *  Skin server's active data owner in backup/restore.
 *
 *  Backed up files are not restored:
 *      - if same file exists in system folder (cannot overwrite)
 *      - if the same file exists in private directory
 *      - if no matching .skn-file is found from private directory.
 *
 * If file is restored, it is re-created to the skin's private directory.
 *
 *  @lib aknskinsrv.dll
 *  @since S60 v3.1
 */
NONSHARABLE_CLASS( CAknsSrvActiveBackupDataClient ) : public CBase, 
                                                      public conn::MActiveBackupDataClient
    {
public:

    enum TAknsSrvBackupState
        {
        // initial state; open a file for processing
        EBackupNoFileOpen = 0,
        // nothing sent for current file - send the file header info
        EBackupOpenNothingSent,
        // part of the header info sent - need to send the rest of the header
        EBackupOpenPartHeaderSent,
        // need to send data from the current file
        EBackupOpenAllHeaderSent,
        // At the end of the current file.
        EBackupEndOfFile
        };

    enum TAknsSrvRestoreState
        {
        // initial state; expecting number of files to restore.
        ERestoreNumberOfFiles = 0,
        // expecting checksum of 16 bytes
        ERestoreExpectChecksum,
        // continue reading checksum; it didn't fit completely in 
        // one read
        ERestoreExpectMoreChecksum,
        // expecting to read file size of 16 bytes
        ERestoreExpectFileSize,
        // file size didn't fit into read buffer in one read.
        ERestoreExpectMoreFileSize,
        // the size of the filename to restore
        ERestoreExpectFileNameSize,
        // filename size didn't fit into read buffer in one read.
        ERestoreExpectMoreFileNameSize,
        // the filename to restore
        ERestoreExpectFileName,
        // filename didn't fit into read buffer in one read.
        ERestoreExpectMoreFileName,
        // the content of the file to restore
        ERestoreExpectData,
        // file content didn't fit into read buffer in one read.
        ERestoreExpectMoreData,
        // At the end of current file. Creates missing files to 
        // restored directory.
        ERestoreComplete
        };

    static CAknsSrvActiveBackupDataClient* NewL( RFs& aFsSession );

    virtual ~CAknsSrvActiveBackupDataClient();

    /**
    * This method is called when a backup or restore operation is 
    * starting. Preparations can be done to prepare for BUR.
    *        
    * @param aBackupStateValue the value of the current backup state
    */
    void PrepareForBURL( TInt aBackupStateValue );

// from base class MActiveBackupDataClient

    /**
     * This method informs the active backup data client that all 
     * snapshots have been supplied. If the client has not
     * received a snapshot then it should perform a base backup
     */
    virtual void AllSnapshotsSuppliedL();

    /**
     * This method receives all or part of a snapshot of data to allow 
     * calculation of an incremental backup.  The snapshot is one that
     * was previously supplied by the data owner.  The snapshot data 
     * should be read from the location supplied. The snapshot data may
     * be larger than the location supplied in which case the routine 
     * will be called repeatedly until all data has been supplied.
     *
     * Snapshot data will also be supplied as part of a restore operation
     *        
     * @param aDrive the drive being backed up
     * @param aBuffer a pointer to the base of the location from whence 
     *        data can be copied.
     * @param aLastSection ETrue if this is the last section of snapshot 
     *        data, else EFalse.
     */
    virtual void ReceiveSnapshotDataL(
        TDriveNumber aDrive, TDesC8& aBuffer, TBool aLastSection);

    /**
     * This method returns the expected size of backup data that will be
     * supplied. If an incremental backup is underway then this method
     * then this method will not be called until after 
     * ReceiveSnapshotDataL(). The size data will be used for the purpose
     * of tracking progess during a backup. If it is inaccurate then the
     * user may see irregular progress but the actual backup data will 
     * not be affected so it is acceptable to return an estimated value.
     *
     * @param aDrive the drive being backed up.
     * @return the size of the data that will be returned
     */
    virtual TUint GetExpectedDataSize(TDriveNumber aDrive);

    /**
     * This method returns a snapshot of data to accompany a backup. The 
     * snapshot is expected to contain details on files / data being 
     * backed up. The format of the snapshot is only meaningful to the
     * data owner. The snapshot will be supplied if the data owner is 
     * asked for an incremental backup and for a restore operation. The 
     * snapshot data should be copied to the location supplied.
     *
     * The snapshot data may be larger than the location supplied in 
     * which case the routine will be called repeatedly until all data
     * has been retrieved.
     *
     * @param aDrive the drive being backed up
     * @param aBuffer a pointer to the base of the location where data 
     *        can be copied.
     * @param aFinished on return ETrue if all data has been returned 
     *        for this drive, else EFalse.
     */
    virtual void GetSnapshotDataL( 
        TDriveNumber aDrive, TPtr8& aBuffer, TBool& aFinished);

    /**
     * This method prepares the implementor to return backup data. It 
     * will be followed by a sequence of calls to request the actual 
     * data.
     *        
     * @param aDrive the drive being backed up.
     */
    virtual void InitialiseGetBackupDataL(TDriveNumber aDrive);

    /**
     * This method requests a section of backup data.  
     * InitialiseGetBackupDataL() will have been called previously to
     * specify the drive concerned.  The data returned may be base or
     * incremental depending on the type of backup and the capability of
     * the data owner.
     *
     * @param aBuffer a pointer to the base of the location where data 
     *        can be copied.
     * @param aFinished on return ETrue if all data has been returned 
     *        for this drive, else EFalse.
     */
    virtual void GetBackupDataSectionL(TPtr8& aBuffer, TBool& aFinished);

    /**
     * This method prepares the implementor to receive base restore data
     * for a drive. It will be followed by a sequence of calls to supply
     * the actual data.
     *
     * @param aDrive the drive being restored.
     */
    virtual void InitialiseRestoreBaseDataL(TDriveNumber aDrive);

    /**
     * This method receives a section of base restore data.
     * InitialiseRestoreBaseDataL() will have been called previously to 
     * specify the drive concerned.
     *
     * @param aBuffer a pointer to the base of the location whence data
     *        can be read.
     * @param aFinished ETrue if all data has been returned for this 
     *        drive, else EFalse.
     */
    virtual void RestoreBaseDataSectionL(TDesC8& aBuffer, TBool aFinished);

    /**
     * This method prepares the implementor to receive incremental 
     * restore data for a drive. It will be followed by a sequence 
     * of calls to supply the actual data.  If multiple increments
     * are supplied then this methid will be called before each increment
     *
     * @param aDrive the drive being restored.
     */
    virtual void InitialiseRestoreIncrementDataL(TDriveNumber aDrive);

    /**
     * This method receives a section of increment restore data.
     * InitialiseRestoreIncrementDataL() will have been called 
     * previously to specify the drive concerned.
     *
     * @param aBuffer a pointer to the base of the location whence data 
     *        can be read.
     * @param aFinished ETrue if all data has been returned for this 
     *        increment, else EFalse.
     */
    virtual void RestoreIncrementDataSectionL(TDesC8& aBuffer, TBool aFinished);

    /**
     * This method is called when all data to be restored has been 
     * supplied.
     *
     * @param aDrive the drive being restored.
     */
    virtual void RestoreComplete(TDriveNumber aDrive);   

    /**
     * This method is called if copying of data is terminated prematurely 
     * to allow the implementor to tidy up.  The same method applies to 
     * all types of data and to backup and restore.
     */
    virtual void TerminateMultiStageOperation();

    /**
     * Gets a 32-bit checksum for its private data.
     * This routine is for test purposes.  It must be implemented but an
     * invariant checksum value can be provided.  Some tests may cause 
     * checksum values to be compared.
     *
     * @param aDrive the drive containing data being checksummed
     * @return the 32-bit checksum
     */
    virtual TUint GetDataChecksum(TDriveNumber aDrive);

    /**
    * This method prepares the implementor to return backup data on behalf of another data owner.
    * It will be followed by a sequence of calls to request the actual data. This method is only
    * for use by a proxy data manager that backs up data on behalf of other data owners.  There
    * is no corresponding method for snapshots as it is assumed that a proxy data manager will
    * only handle base data.
    *
    * @param aSID the data owner whose data is to be backed up
    * @param aDrive the drive being backed up.
    */
    virtual void InitialiseGetProxyBackupDataL(TSecureId aSID, TDriveNumber aDrive);

    /**
    This method prepares the implementor to receive base restore data for another data owner
    for a drive. It will be followed by a sequence of calls to supply the actual data.
    This method is only for use by a proxy data manager that restores up data on behalf of
    other data owners.  There is no corresponding method for incremental data as it is assumed
    that a proxy data manager will only handle base data.

    @param aSID the data owner whose data is to be restored
    @param aDrive the drive being restored.
    */
    virtual void InitialiseRestoreProxyBaseDataL(TSecureId aSID, TDriveNumber aDrive);

private:

    /* Checks file integrity after restoration. */
    TUint64 CheckSumL(const RFile& aOpenFile) const;

    /* Scans the .skn-files in the private directory. */
    void ScanDirectoryForSkinFilesL( const TDesC& aRootDir );

    /* Re-creates backed-up file to private directory.
       Also verifies that a matching .skn-file exists.*/
    TInt RestoreFileInPrivateDirectoryL( const TDesC& aFileName );

    CAknsSrvActiveBackupDataClient( RFs& aFsSession );

    void ConstructL();

    /* Initialise backup data. */
    void DoInitialiseGetBackupDataL( TDriveNumber aDrive );

private: // data

    /**
     * Index of currently handled file in filename array.
     */
    TInt iFileIndex;

    /**
     * Backup statemachine state.
     */
    TAknsSrvBackupState iBackupState;

    /**
     * Restore statemachine state.
     */
    TAknsSrvRestoreState iRestoreState;

    /**
     * Number of bytes sent from file header.
     */
    TInt iHeaderSent;

    /**
     * Array of files to backup/restore.
     */
    RArray<TParse> iFileArray;

    /**
     * "persistent" buffer.
     */
    HBufC* iBuffer;

    /**
     * Currently handled file.
     */
    RFile iFile;

    /**
     * Has any data been restored.
     */
    TBool iDataRestored;

    /**
     * Checksum of backup file. Used by Restore.
     */
    TUint32 iChecksum;

    /**
     * Size of file. Used by Restore.
     */    
    TUint32 iFileSize;

    /**
     * Lenght of filename. Used by Restore.
     */
    TUint32 iFileNameSize;

    /*
    * File system session.
    */
    RFs& iFsSession;

    /*
    * Number of files handled by Restore. 
    * Note that actual number of restored files might be less than this, 
    * since already existing files are not restored and orphaned files
    * (.skn-file missing) are not restored either.
    */
    TInt iFilesRestored;

    /*
    * Number of files supposed to restore.
    */
    TUint32 iNumberofFiles;

    /*
    * Indicates that there is an issue with current file.
    * All received Restore streams will be ignored, until a new file
    * is received.
    */
    TBool iFileOpenError;
    };

#endif // C_AKNSSRVACTIVEBACKUPDATACLIENT_H

