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
* Description:  Skin server's active data owner in backup/restore.
*
*/


#include <f32file.h>

#include "aknssrvactivebackupdataclient.h"
#include "AknsSrvUtils.h"

#include "AknsDebug.h"

// Maximum size of header info.
const TUint KMaxHeaderSize = 256;

// number of bytes to read from file per block
const TUint KCheckSumBlockSize = 128;

// Default size of restore/backup stream size in bytes.
const TUint KArbitraryNumber=1024;

// 8 bytes
const TUint K8Bytes = 8;
// 16 bytes
const TUint K16Bytes = 16;
// Length of extension (including preceding dot).
const TInt KExtensionLength = 4;

_LIT( KSkinRootDir,":\\resource\\skins\\" );

// ======== MEMBER FUNCTIONS ========

// Skin files are backed up in the following format.
// filename contains drive and path in addition to filename.
// <checksum><filesize><filenamelen><filename>

// ---------------------------------------------------------------------------
// Symbian constructor.
// ---------------------------------------------------------------------------
//
CAknsSrvActiveBackupDataClient* CAknsSrvActiveBackupDataClient::NewL( RFs& aFsSession )
    {
    AKNS_TRACE_DEBUG("CAknsSrvActiveBackupDataClient::NewL" );
    CAknsSrvActiveBackupDataClient* self =
        new( ELeave ) CAknsSrvActiveBackupDataClient( aFsSession );
    CleanupStack::PushL( self );
    self->ConstructL();
    CleanupStack::Pop( self );

    return self;
    }

// ---------------------------------------------------------------------------
// Destructor
// ---------------------------------------------------------------------------
//
CAknsSrvActiveBackupDataClient::~CAknsSrvActiveBackupDataClient()
    {
    AKNS_TRACE_DEBUG("CAknsSrvActiveBackupDataClient::destructor" );
    iFileArray.Reset();
    iFileArray.Close();
    iFile.Close();
    delete iBuffer;
    }

// ---------------------------------------------------------------------------
// Prepare for backup and restore ( no actions).
// ---------------------------------------------------------------------------
//
void CAknsSrvActiveBackupDataClient::PrepareForBURL( TInt /*aBackupStateValue*/ )
    {
    AKNS_TRACE_DEBUG("CAknsSrvActiveBackupDataClient::PrepareForBURL" );
    }

// ---------------------------------------------------------------------------
// Inform that all data has been backed up or restored.
// ---------------------------------------------------------------------------
//
void CAknsSrvActiveBackupDataClient::AllSnapshotsSuppliedL()
    {
    AKNS_TRACE_DEBUG("CAknsSrvActiveBackupDataClient::AllSnapshotsSuppliedL" );
    // Finalize and cleanup.
    return;
    }

// ---------------------------------------------------------------------------
// Not supported.
// ---------------------------------------------------------------------------
//
void CAknsSrvActiveBackupDataClient::ReceiveSnapshotDataL(
    TDriveNumber /*aDrive*/, TDesC8& /*aBuffer*/, TBool /*aLastSection*/)
    {
    AKNS_TRACE_DEBUG("CAknsSrvActiveBackupDataClient::ReceiveSnapshotDataL" );
    User::Leave( KErrNotSupported );
    }

// ---------------------------------------------------------------------------
// Make a guess about data size.
// ---------------------------------------------------------------------------
//
TUint CAknsSrvActiveBackupDataClient::GetExpectedDataSize(
    TDriveNumber /*aDrive*/)
    {
    AKNS_TRACE_DEBUG("CAknsSrvActiveBackupDataClient::GetExpectedDataSize" );
    // we have no idea at this point - we even don't know what is to be
    // backed up yet
    return KArbitraryNumber;
    }

// ---------------------------------------------------------------------------
// Not supported.
// ---------------------------------------------------------------------------
//
void CAknsSrvActiveBackupDataClient::GetSnapshotDataL(
    TDriveNumber /*aDrive*/, TPtr8& /*aBuffer*/, TBool& /*aFinished*/)
    {
    AKNS_TRACE_DEBUG("CAknsSrvActiveBackupDataClient::GetSnapshotDataL" );
    User::Leave( KErrNotSupported );
    }

// ---------------------------------------------------------------------------
// Initialize for backup - collect to-be-backed-up-files.
// ---------------------------------------------------------------------------
//
void CAknsSrvActiveBackupDataClient::InitialiseGetBackupDataL(
    TDriveNumber aDrive)
    {
    AKNS_TRACE_DEBUG("CAknsSrvActiveBackupDataClient::InitialiseGetBackupDataL" );
    DoInitialiseGetBackupDataL( aDrive );
    }

// ---------------------------------------------------------------------------
// Run state machine for backup. Each file is opened and streamed to the
// BUR engine.
// ---------------------------------------------------------------------------
//
void CAknsSrvActiveBackupDataClient::GetBackupDataSectionL(
    TPtr8& aBuffer, TBool& aFinished)
    {
    AKNS_TRACE_DEBUG("CAknsSrvActiveBackupDataClient::GetBackupDataSectionL" );
    // Make sure that the buffer is empty and starts from the beginning
    aBuffer.SetLength(0);

    // don't assume they set it to false
    aFinished = EFalse;
    // any files to backup
    if( iFileArray.Count() == 0 )
        {
        // nothing to backup - just return the finished flag
        aFinished = ETrue;
        // clear the list and stop.
        iFileArray.Reset();
        AKNS_TRACE_DEBUG("CAknsSrvActiveBackupDataClient::GetBackupDataSectionL no files" );
        return;
        }

    // run the state machine
    while( ETrue )
        {
        switch( iBackupState )
            {
            // open a file for processing
            case EBackupNoFileOpen:
                {
                AKNS_TRACE_DEBUG1("CAknsSrvActiveBackupDataClient::GetBackupDataSectionL state %d", iBackupState );
                if( iFileIndex >= iFileArray.Count() )
                    {
                    // all files have been processed - send the finished flag
                    aFinished = ETrue;
                    // clear the list and stop.
                    iFileArray.Reset();
                    AKNS_TRACE_DEBUG("CAknsSrvActiveBackupDataClient::GetBackupDataSectionL all processed" );
                    return;
                    }

                // open file to send
                TInt rc=iFile.Open( iFsSession,
                                    iFileArray[iFileIndex].FullName(),
                                    ( EFileRead | EFileShareExclusive | EFileStream ) );
                if( rc != KErrNone )
                    {
                    // there's nothing we can do if we can't open the file
                    // so we just skip it
                    AKNS_TRACE_DEBUG("CAknsSrvActiveBackupDataClient::GetBackupDataSectionL skip file" );
                    ++iFileIndex;
                    break;
                    }
                iBackupState = EBackupOpenNothingSent;
                break;
                }
            // nothing sent (so far) for this file - send the header info
            case EBackupOpenNothingSent:
                {
                AKNS_TRACE_DEBUG1("CAknsSrvActiveBackupDataClient::GetBackupDataSectionL state %d", iBackupState );
                TInt fileSize;
                TInt retValue = iFile.Size( fileSize );
                if( retValue != KErrNone || fileSize == 0 )
                    {
                    // empty or unreadable - skip this file
                    iBackupState = EBackupEndOfFile;
                    AKNS_TRACE_DEBUG("CAknsSrvActiveBackupDataClient::GetBackupDataSectionL skip file2" );
                    break;
                    }

                // build the header - this is an instance member because it
                // has to persist over multiple calls to this method
                TPtr headerPtr = iBuffer->Des();

                // get the checksum - only grab last 4 bytes - enough to be satisfied that
                // the backup and restore worked ok
                TUint64 checksum = CheckSumL( iFile ) & 0xffffffff;

                // build the header - note NOT AppendFormat(); wipes out previous content.
                // <no of files><checksum><filesize><filenamelen><filename>
                headerPtr.Format(_L("%8x%8lx%8x%8x"),
                    iFileArray.Count(),
                    checksum,
                    fileSize,
                    iFileArray[iFileIndex].FullName().Length());
                headerPtr.Append( iFileArray[iFileIndex].FullName() );

                // we need it to look like an 8bit buffer
                TPtr8 headerPtr8(
                    (TUint8*)headerPtr.Ptr(),
                    headerPtr.Size(),
                    headerPtr.Size() );

                // Check how much room is left in the buffer.
                // it starts out empty when we get it from the BUE
                TInt available = aBuffer.MaxSize() - aBuffer.Size();

                // Check is there enough room for the whole header.
                TBool enoughRoom = headerPtr8.Size() < available;

                // append the header to the buffer (only till it's full)
                aBuffer.Append(
                    headerPtr8.Ptr(),
                    enoughRoom ? headerPtr8.Size() : available) ;

                // decide what needs to happen next
                // if complete then we need data, otherwise we need to put
                // the rest of the header in the next chunk
                if( enoughRoom )
                    {
                    iBackupState = EBackupOpenAllHeaderSent;
                    }
                else
                    {
                    // we need to keep track of how much of the header has
                    // been sent so that we only send the reminder on the next
                    // iteration
                    iHeaderSent = available;
                    iBackupState = EBackupOpenPartHeaderSent;
                    }

                // if the buffer's full we need to return control to the backup engine
                // Because the finishedFlag is not set, the BUE will process this
                // chunk and then ask for another
                if( aBuffer.Size() == aBuffer.MaxSize() )
                    {
                    return;
                    }
                break;
                }
            // need to send the rest of the header
            case EBackupOpenPartHeaderSent:
                {
                AKNS_TRACE_DEBUG1("CAknsSrvActiveBackupDataClient::GetBackupDataSectionL state %d", iBackupState );
                // get back the header - this is already loaded with the necessary info
                // from the previous state we were in
                TPtr headerPtr = iBuffer->Des();

                // we need it to look like an 8bit buffer
                TPtr8 headerPtr8(
                    (TUint8*)headerPtr.Ptr(),
                    headerPtr.Size(),
                    headerPtr.Size() );

                // Check how many bytes have we yet to send.
                TInt bytesRemaining = headerPtr.Size() - iHeaderSent;

                // Check how much room in the buffer.
                TInt available = aBuffer.MaxSize() - aBuffer.Size();

                // enough, if not send as much as we can
                TBool enoughRoom = bytesRemaining < available;
                aBuffer.Append(
                    headerPtr8.Ptr() + iHeaderSent,
                    enoughRoom ? bytesRemaining : available );

                if( enoughRoom )
                    {
                    iHeaderSent = 0; // ready for next header
                    iBackupState = EBackupOpenAllHeaderSent;
                    }
                else
                    {
                    iHeaderSent += available; // ready to do round again
                    // state remains as EBackupOpenPartHeaderSent
                    }

                // if the buffer's full we need to return control to the backup engine
                // Because the finishedFlag is not set, the BUE will process this
                // chunk and then ask for another
                if( aBuffer.Size() == aBuffer.MaxSize() )
                    {
                    return;
                    }
                break;
                }
            // need to send some data
            case EBackupOpenAllHeaderSent:
                {
                AKNS_TRACE_DEBUG1("CAknsSrvActiveBackupDataClient::GetBackupDataSectionL state %d", iBackupState );
                // how many bytes can we send
                TInt available = aBuffer.MaxSize() - aBuffer.Size();

                // create a buffer for this data (plus one for PtrZ)
                HBufC8* transferBuffer = HBufC8::NewLC( available + 1 );
                TPtr8 bufferToSend = transferBuffer->Des();

                // get the data
                User::LeaveIfError( iFile.Read( bufferToSend, available ) );

                // Check how much did we actually read.
                TInt bytesRead = bufferToSend.Size();

                // EOF
                if( bytesRead == 0 )
                    {
                    CleanupStack::PopAndDestroy( transferBuffer );
                    iBackupState = EBackupEndOfFile;
                    break;
                    }

                // add it to the aBuffer
                aBuffer.Append( bufferToSend.PtrZ(), bytesRead );

                // tidy up
                CleanupStack::PopAndDestroy( transferBuffer );

                // if the buffer's full we need to return control to the backup engine
                if( aBuffer.Size() == aBuffer.MaxSize() )
                    {
                    return;
                    }
                break;
                }
            // At the end of the current file.
            case EBackupEndOfFile:
                {
                AKNS_TRACE_DEBUG1("CAknsSrvActiveBackupDataClient::GetBackupDataSectionL state %d", iBackupState );

                // how many bytes can we send
                if ( aBuffer.Size() != 0 )
                    {
                    TInt available = aBuffer.MaxSize() - aBuffer.Size();
                    // pad the end of the buffer with NULL.
                    HBufC8* transferBuffer = HBufC8::NewLC( available + 1 );
                    TPtr8 bufferToSend = transferBuffer->Des();
                    bufferToSend.FillZ();
                    aBuffer.Append( bufferToSend.PtrZ(), available );
                    CleanupStack::PopAndDestroy( transferBuffer );
                    if( aBuffer.Size() != aBuffer.MaxSize() )
                        {
                        // Sanity check
                        User::Leave( KErrGeneral );
                        }
                    }
                // Close file and move on to next file.
                iFile.Close();
                ++iFileIndex;
                // Start all over again.
                iBackupState = EBackupNoFileOpen;
                break;
                }
            default:
                {
                // not reachable
                return;
                }
            }
        }
    }

// ---------------------------------------------------------------------------
// Initialize restore.
// ---------------------------------------------------------------------------
//
void CAknsSrvActiveBackupDataClient::InitialiseRestoreBaseDataL(
    TDriveNumber /*aDrive*/ )
    {
    AKNS_TRACE_DEBUG("CAknsSrvActiveBackupDataClient::InitialiseRestoreBaseDataL" );
    // this is the first state of the restore state machine
    iRestoreState = ERestoreNumberOfFiles;
    // to keep track in the state machine whether any data was actually sent
    iDataRestored = EFalse;
    iFilesRestored = 0;
    }

// ---------------------------------------------------------------------------
// Run state machine for restore. Receive stream from BUR engine and turn it
// to file(s).
// ---------------------------------------------------------------------------
//
void CAknsSrvActiveBackupDataClient::RestoreBaseDataSectionL(
    TDesC8& aBuffer, TBool aFinished )
    {
    AKNS_TRACE_DEBUG("CAknsSrvActiveBackupDataClient::RestoreBaseDataSectionL" );
    // convert the buffer - this is KMaxHeaderSize=256
    TInt bufferIndex;
    TPtr bufPtr = iBuffer->Des();

    // used to walk the buffer
    // got a new buffer - because each time this method is called, we have a
    // fresh chunk of data
    bufferIndex = 0;

    // to mark when the state machine is through
    TBool done = EFalse;

    // check whether this is an empty restore
    if( aFinished && !iDataRestored )
        {
        // we have to do this and not rely on aFinishedFlag alone, because
        // if aFinished is used, we'll process the last state of the machine
        // which does tidyup, except that if there was no data, no tidyup should
        // be done
        AKNS_TRACE_DEBUG("CAknsSrvActiveBackupDataClient::RestoreBaseDataSectionL empty restore" );
        return;
        }

    // run the machine
    do
        {
        // Check how many bytes are there available in the buffer for processing.
        TInt bytesAvailable = aBuffer.Length() - bufferIndex;
        // the reason why we are testing finishedFlag is because we must
        // make sure we re-enter the machine to do the tidyup
        if( bytesAvailable <= 0 && !aFinished )
            {
            // ran out of data in the chunk
            // so we return and wait for more data to arrive
            return;
            }

        if( aFinished &&
            iRestoreState != ERestoreComplete &&
            iRestoreState != ERestoreExpectMoreData )
            {
            // ran out of data early
            // will be ERestoreComplete if data not aligned on 128
            // will be ERestoreExpectMoreData if data aligned on 128
            User::Leave( KErrCorrupt );
            }
        // yep there was some data in the chunk if we got here
        if( bytesAvailable > 0 )
            {
            iDataRestored = ETrue;
            }
        switch( iRestoreState )
            {
            case ERestoreNumberOfFiles: // 16 bytes
                {
                TInt bytesToGet = bytesAvailable >= K16Bytes ? K16Bytes : bytesAvailable;
                TPtrC8 ptr8 = aBuffer.Mid( bufferIndex, bytesToGet );
                bufferIndex += bytesToGet;

                // convert to 16 bit
                TPtr ptr16(
                    (TUint16*) ptr8.Ptr(),
                    bytesToGet >> 1,
                    bytesToGet >> 1 );

                // stick it in the heap buffer
                bufPtr.Zero();
                bufPtr.Append( ptr16 );

                if( bufPtr.Length() == K8Bytes )
                    {
                    // If file size is now read, read file name size next.
                    iRestoreState = ERestoreExpectChecksum;
                    }

                break;
                }
            case ERestoreExpectChecksum:
                {
                // first of all, process the heap buffer to extract the checksum
                TLex lex( bufPtr );
                lex.SkipSpace();
                lex.Val( iNumberofFiles, EHex );

                AKNS_TRACE_DEBUG1("CAknsSrvActiveBackupDataClient::RestoreBaseDataSectionL state %d", iRestoreState );
                // if we have 16 bytes, get them;
                // otherwise get what we have available.
                // if not complete then we need to go around again to get the rest
                TInt bytesToGet = bytesAvailable >= K16Bytes ? K16Bytes : bytesAvailable;

                // extract the bytes
                TPtrC8 ptr8 = aBuffer.Mid( bufferIndex, bytesToGet );
                bufferIndex += bytesToGet;

                // convert to 16 bit
                TPtr ptr16(
                    (TUint16*) ptr8.Ptr(),
                    bytesToGet >> 1,
                    bytesToGet >> 1 );

                // stick it in the heap buffer
                bufPtr.Zero();
                bufPtr.Append( ptr16 );

                if( bufPtr.Length() == 8 )
                    {
                    // If complete checksum is available, move on to filesize.
                    iRestoreState = ERestoreExpectFileSize;
                    }
                else
                    {
                    // Otherwise continue reading the checksum.
                    iRestoreState = ERestoreExpectMoreChecksum;
                    }
                break;
                }
            // checksum overran buffer on first/subsequent read.
            case ERestoreExpectMoreChecksum:
                {
                AKNS_TRACE_DEBUG1("CAknsSrvActiveBackupDataClient::RestoreBaseDataSectionL state %d", iRestoreState );
                // Check how many more bytes do we want.
                TInt bytesNeeded=( K8Bytes - bufPtr.Length() ) << 1;
                TInt bytesToGet=
                    bytesAvailable >= bytesNeeded ? bytesNeeded : bytesAvailable;

                // extract the bytes
                TPtrC8 ptr8 = aBuffer.Mid( bufferIndex, bytesToGet );
                bufferIndex += bytesToGet;

                // convert to 16 bit
                TPtr ptr16(
                    (TUint16*) ptr8.Ptr(),
                    bytesToGet >> 1,
                    bytesToGet >> 1 );

                // append it to the heap buffer
                bufPtr.Append( ptr16 );

                if( bufPtr.Length() == K8Bytes )
                    {
                    // If complete checksum is now available, move on to filesize.
                    iRestoreState = ERestoreExpectFileSize;
                    }
                else
                    {
                    // same state : ERestoreExpectMoreChecksum;
                    }
                break;
                }
            case ERestoreExpectFileSize: // 16 bytes
                {
                AKNS_TRACE_DEBUG1("CAknsSrvActiveBackupDataClient::RestoreBaseDataSectionL state %d", iRestoreState );
                // first of all, process the heap buffer to extract the checksum
                TLex lex( bufPtr );
                lex.SkipSpace();
                lex.Val( iChecksum, EHex );

                // now start getting the file size
                TInt bytesToGet = bytesAvailable >= K16Bytes ? K16Bytes : bytesAvailable;
                TPtrC8 ptr8 = aBuffer.Mid( bufferIndex, bytesToGet );
                bufferIndex += bytesToGet;

                // convert to 16 bit
                TPtr ptr16(
                    (TUint16*) ptr8.Ptr(),
                    bytesToGet >> 1,
                    bytesToGet >> 1 );

                // stick it in the heap buffer
                bufPtr.Zero();
                bufPtr.Append( ptr16 );

                if( bufPtr.Length() == K8Bytes )
                    {
                    // If file size is now read, read file name size next.
                    iRestoreState = ERestoreExpectFileNameSize;
                    }
                else
                    {
                    // Otherwise continue reading the file size.
                    iRestoreState = ERestoreExpectMoreFileSize;
                    }
                break;
                }
            // file size didn't fit into one buffer
            case ERestoreExpectMoreFileSize:
                {
                AKNS_TRACE_DEBUG1("CAknsSrvActiveBackupDataClient::RestoreBaseDataSectionL state %d", iRestoreState );
                // Check how many more bytes do we want.
                TInt bytesNeeded = ( K8Bytes - bufPtr.Length() ) << 1;
                TInt bytesToGet = bytesAvailable >= bytesNeeded ? bytesNeeded : bytesAvailable;
                TPtrC8 ptr8 = aBuffer.Mid( bufferIndex, bytesToGet );
                bufferIndex += bytesToGet;

                // convert to 16 bit
                TPtr ptr16(
                    (TUint16*) ptr8.Ptr(),
                    bytesToGet >> 1,
                    bytesToGet >> 1 );

                // append it to the heap buffer
                bufPtr.Append( ptr16 );

                if( bufPtr.Length() == K8Bytes )
                    {
                    // If file size is now read, read file name size next.
                    iRestoreState = ERestoreExpectFileNameSize;
                    }
                else
                    {
                    // same state ERestoreExpectMoreFileSize;
                    }
                break;
                }
            // the size of the file name to restore
            case ERestoreExpectFileNameSize:
                {
                AKNS_TRACE_DEBUG1("CAknsSrvActiveBackupDataClient::RestoreBaseDataSectionL state %d", iRestoreState );
                // first of all, process the heap buffer to extract the file size
                TLex lex( bufPtr );
                lex.SkipSpace();
                lex.Val( iFileSize, EHex );

                // now start getting the file name size
                TInt bytesToGet = bytesAvailable >= K16Bytes ? K16Bytes : bytesAvailable;
                TPtrC8 ptr8 = aBuffer.Mid( bufferIndex, bytesToGet );
                bufferIndex += bytesToGet;

                // convert to 16 bit
                TPtr ptr16(
                    (TUint16*) ptr8.Ptr(),
                    bytesToGet >> 1,
                    bytesToGet >> 1 );

                // stick it in the heap buffer
                bufPtr.Zero();
                bufPtr.Append( ptr16 );

                if( bufPtr.Length() == K8Bytes )
                    {
                    // If filename size is now read, read filename next.
                    iRestoreState = ERestoreExpectFileName;
                    }
                else
                    {
                    // Otherwise, continue reading the filename size.
                    iRestoreState = ERestoreExpectMoreFileNameSize;
                    }
                break;
                }
            // the file name size overran the buffer
            case ERestoreExpectMoreFileNameSize:
                {
                AKNS_TRACE_DEBUG1("CAknsSrvActiveBackupDataClient::RestoreBaseDataSectionL state %d", iRestoreState );
                // Check how many more bytes do we want.
                TInt bytesNeeded = ( K8Bytes - bufPtr.Length() ) << 1;
                TInt bytesToGet = bytesAvailable >= bytesNeeded ? bytesNeeded : bytesAvailable;
                TPtrC8 ptr8 = aBuffer.Mid( bufferIndex, bytesToGet );
                bufferIndex += bytesToGet;

                // convert to 16 bit
                TPtr ptr16(
                    (TUint16*) ptr8.Ptr(),
                    bytesToGet >> 1,
                    bytesToGet >> 1 );

                // append it to the heap buffer
                bufPtr.Append( ptr16 );

                if( bufPtr.Length() == K8Bytes )
                    {
                    // If filename size is now read, read filename next.
                    iRestoreState = ERestoreExpectFileName;
                    }
                else
                    {
                    // same state ERestoreExpectMoreFileNameSize;
                    }
                break;
                }
            case ERestoreExpectFileName:  // the name of the file to restore
                {
                AKNS_TRACE_DEBUG1("CAknsSrvActiveBackupDataClient::RestoreBaseDataSectionL state %d", iRestoreState );
                // first of all, process the heap buffer to extract the file name size
                TLex lex( bufPtr );
                lex.SkipSpace();
                lex.Val( iFileNameSize, EHex );

                // now start getting the file name
                TInt bytesToGet = bytesAvailable >= iFileNameSize << 1 ? iFileNameSize << 1:bytesAvailable;
                TPtrC8 ptr8 = aBuffer.Mid( bufferIndex, bytesToGet );
                bufferIndex += bytesToGet;

                // convert to 16 bit
                TPtr ptr16(
                    (TUint16*) ptr8.Ptr(),
                    bytesToGet >> 1,
                    bytesToGet >> 1 );

                // stick it in the heap buffer
                bufPtr.Zero();
                bufPtr.Append( ptr16 );

                if( bufPtr.Length() == iFileNameSize )
                    {
                    // If filename is now read, start reading the file content.
                    iRestoreState = ERestoreExpectData;
                    }
                else
                    {
                    // Otherwise, continue reading the file.
                    iRestoreState = ERestoreExpectMoreFileName;
                    }
                break;
                }
            // the file name overran the buffer
            case ERestoreExpectMoreFileName:
                {
                AKNS_TRACE_DEBUG1("CAknsSrvActiveBackupDataClient::RestoreBaseDataSectionL state %d", iRestoreState );
                // Check how many more bytes do we want.
                TInt bytesNeeded = ( iFileNameSize  -bufPtr.Length() ) << 1;
                TInt bytesToGet = bytesAvailable >= bytesNeeded ? bytesNeeded : bytesAvailable;
                TPtrC8 ptr8 = aBuffer.Mid( bufferIndex, bytesToGet );
                bufferIndex += bytesToGet;

                // convert to 16 bit
                TPtr ptr16(
                    (TUint16*) ptr8.Ptr(),
                    bytesToGet >> 1,
                    bytesToGet >> 1 );

                // append it to the heap buffer
                bufPtr.Append( ptr16 );

                if( bufPtr.Length() == iFileNameSize )
                    {
                    // If filename is now read, start reading the file content.
                    iRestoreState = ERestoreExpectData;
                    }
                else
                    {
                    // same state ERestoreExpectMoreFileName;
                    }
                break;
                }
            // now for the data
            case ERestoreExpectData:
                {
                AKNS_TRACE_DEBUG1("CAknsSrvActiveBackupDataClient::RestoreBaseDataSectionL state %d", iRestoreState );
                iFileOpenError = EFalse;
                // iFileSize counts down
                TInt bytesToGet = bytesAvailable >= iFileSize ? iFileSize : bytesAvailable;

                if ( iFsSession.IsValidName( bufPtr ) &&
                     !AknsSrvUtils::IsFile( iFsSession, bufPtr ) &&
                     RestoreFileInPrivateDirectoryL( bufPtr ) == KErrNone )
                    {
                    // write it
                    TInt fileErr = iFile.Write( aBuffer.Mid( bufferIndex, bytesToGet ) );
                    AKNS_TRACE_DEBUG1("CAknsSrvActiveBackupDataClient::RestoreBaseDataSectionL file write %d", fileErr );
                    }
                else
                    {
                    iFileOpenError = ETrue;
                    }

                // update our counters
                bufferIndex += bytesToGet;
                iFileSize -= bytesToGet;

                // Check if finished now.
                if( iFileSize == 0 )
                    {
                    // If file is now written, restore is complete (for this file).
                    iRestoreState = ERestoreComplete;
                    }
                else
                    {
                    // Otherwise, continue reading and writing the file.
                    iRestoreState = ERestoreExpectMoreData;
                    }
                if ( iFileOpenError )
                    {
                    return;
                    }

                break;
                }
            // will almost certainly exceed a single buffer
            case ERestoreExpectMoreData:
                {
                AKNS_TRACE_DEBUG1("CAknsSrvActiveBackupDataClient::RestoreBaseDataSectionL state %d", iRestoreState );
                // Check how much more.
                TInt bytesToGet = bytesAvailable >= iFileSize ? iFileSize : bytesAvailable;

                // write it
                if (!iFileOpenError)
                    {
                    TInt fileErr = iFile.Write( aBuffer.Mid( bufferIndex, bytesToGet ) );
                    AKNS_TRACE_DEBUG1("CAknsSrvActiveBackupDataClient::RestoreBaseDataSectionL file write %d", fileErr );
                    }

                // update the counters
                bufferIndex += bytesToGet;
                iFileSize -= bytesToGet;

                // Check if finished now.
                if( iFileSize == 0 )
                    {
                    // If file is now written, restore is complete (for this file).
                    iRestoreState = ERestoreComplete;
                    }
                else
                    {
                    // same state ERestoreExpectMoreData;
                    }
                break;
                }
            // file completely restored
            case ERestoreComplete:
                {
                AKNS_TRACE_DEBUG1("CAknsSrvActiveBackupDataClient::RestoreBaseDataSectionL state %d", iRestoreState );
                // calculate the checksum
                if(!iFileOpenError)
                    {
                    TUint64 cksum = CheckSumL( iFile ) & 0xffffffff;

                    // validate that the checksum matches
                    if( cksum != iChecksum )
                        {
                        AKNS_TRACE_DEBUG2("CAknsSrvActiveBackupDataClient::RestoreBaseDataSectionL checksum fail %d %d", cksum, iChecksum );
                        User::Leave( KErrCorrupt );
                        }

                    // Done with the file, so close it.
                    iFile.Close();
                    }
                iFilesRestored++;

                // end of data - Check if another file is to be restored.
                iRestoreState = ERestoreNumberOfFiles;
                iFileOpenError = EFalse;

                // Each file should end at the end of buffer.
                aFinished = ETrue;
                return;
                }
            default:
                break;
            }
        } while(!done);
    }

// ---------------------------------------------------------------------------
// Incremental restoration is not supported.
// ---------------------------------------------------------------------------
//
void CAknsSrvActiveBackupDataClient::InitialiseRestoreIncrementDataL(
    TDriveNumber /*aDrive*/)
    {
    AKNS_TRACE_DEBUG("CAknsSrvActiveBackupDataClient::InitialiseRestoreIncrementDataL" );
    User::Leave( KErrNotSupported );
    }

// ---------------------------------------------------------------------------
// Incremental restoration is not supported.
// ---------------------------------------------------------------------------
//
void CAknsSrvActiveBackupDataClient::RestoreIncrementDataSectionL(
    TDesC8& /*aBuffer*/, TBool /*aFinished*/)
    {
    AKNS_TRACE_DEBUG("CAknsSrvActiveBackupDataClient::RestoreIncrementDataSectionL" );
    User::Leave( KErrNotSupported );
    }

// ---------------------------------------------------------------------------
// Called when restore is complete - sets data back to initial state.
// ---------------------------------------------------------------------------
//
void CAknsSrvActiveBackupDataClient::RestoreComplete(TDriveNumber /*aDrive*/)
    {
    AKNS_TRACE_DEBUG("CAknsSrvActiveBackupDataClient::RestoreComplete" );
    // Possibly delete some extra data.
    iDataRestored = EFalse;
    iRestoreState = ERestoreNumberOfFiles;
    }

// ---------------------------------------------------------------------------
// Tidy up when operation is over.
// ---------------------------------------------------------------------------
//
void CAknsSrvActiveBackupDataClient::TerminateMultiStageOperation()
    {
    AKNS_TRACE_DEBUG("CAknsSrvActiveBackupDataClient::TerminateMultiStageOperation" );
    iFileArray.Reset();
    }

// ---------------------------------------------------------------------------
//
// ---------------------------------------------------------------------------
//
TUint CAknsSrvActiveBackupDataClient::GetDataChecksum(TDriveNumber /*aDrive*/)
    {
    AKNS_TRACE_DEBUG("CAknsSrvActiveBackupDataClient::GetDataChecksum" );
    // not required - not implemented
    return KArbitraryNumber;
    }

// ---------------------------------------------------------------------------
// Initialize backup.
// ---------------------------------------------------------------------------
//
void CAknsSrvActiveBackupDataClient::InitialiseGetProxyBackupDataL(
    TSecureId /*aSID*/, TDriveNumber aDrive )
    {
    AKNS_TRACE_DEBUG("CAknsSrvActiveBackupDataClient::InitialiseGetProxyBackupDataL" );
    DoInitialiseGetBackupDataL( aDrive );
    }

// ---------------------------------------------------------------------------
// Initializes restore state machine.
// ---------------------------------------------------------------------------
//
void CAknsSrvActiveBackupDataClient::InitialiseRestoreProxyBaseDataL(
    TSecureId /*aSID*/, TDriveNumber /*aDrive*/ )
    {
    AKNS_TRACE_DEBUG("CAknsSrvActiveBackupDataClient::InitialiseRestoreProxyBaseDataL" );
    // this is the first state of the restore state machine
    iRestoreState = ERestoreNumberOfFiles;
    // to keep track in the state machine whether any data was actually sent
    iDataRestored = EFalse;
    }

// ---------------------------------------------------------------------------
// Creates a checksum for the files.
// ---------------------------------------------------------------------------
//
TUint64 CAknsSrvActiveBackupDataClient::CheckSumL(const RFile& aOpenFile) const
    {
    AKNS_TRACE_DEBUG("CAknsSrvActiveBackupDataClient::CheckSumL" );
    // scoot through the database file building the checksum
    TInt seekPos = 0; // rewind first
    User::LeaveIfError( aOpenFile.Seek( ESeekStart, seekPos ) );
    TUint64 total = 0;
    HBufC8* block = HBufC8::NewL( KCheckSumBlockSize );
    CleanupStack::PushL( block );
    TPtr8 ptr=block->Des();
    while( ETrue )
        {
        User::LeaveIfError( aOpenFile.Read( ptr ) );
        TInt len = ptr.Length();
        if( len == 0 )
            {
            break;
            }
        // calculate the checksum
        for( TInt i = 0; i < len; ++i )
            {
            TUint64 carry = total&(0x8000000000000000ULL);
            total<<=1;
            if( carry )
                {
                total|=1;
                }
            TUint in = ptr[i];
            total += in;
            }
        };
    CleanupStack::PopAndDestroy( block );
    // restore file position
    seekPos = 0;
    User::LeaveIfError( aOpenFile.Seek( ESeekStart, seekPos ) );
    return total;
    }

// ---------------------------------------------------------------------------
// Scan directory for files.
// ---------------------------------------------------------------------------
//
void CAknsSrvActiveBackupDataClient::ScanDirectoryForSkinFilesL(
    const TDesC& aRootDir )
    {
    AKNS_TRACE_DEBUG("CAknsSrvActiveBackupDataClient::ScanDirectoryForSkinFilesL" );
    CDirScan *dirScan = CDirScan::NewLC( iFsSession );
    dirScan->SetScanDataL(
        aRootDir,
        KEntryAttNormal | KEntryAttHidden | KEntryAttSystem |
        KEntryAttDir,
        ESortNone );

    // Fetch all directories and files from root.
    CDir* entryList = NULL;
    TParse parse;
    for(;;)
        {
        TRAPD( err, dirScan->NextL( entryList ) );

        // Stop in error case, or if no more data.
        if (!entryList  || ( err != KErrNone) )
            {
            break;
            }

        for (TInt i=0; i < entryList->Count(); i++)
            {
            TEntry entry = (*entryList)[i];
            const TDesC& dir = dirScan->FullPath();
            parse.Set( entry.iName, &dir, NULL );
            if ( !entry.IsDir() )
                {
                iFileArray.Append( parse );
                }
            }
        delete entryList;
        }
    AKNS_TRACE_DEBUG1("CAknsSrvActiveBackupDataClient::ScanDirectoryForSkinFilesL noFiles=%d", iFileArray.Count() );

    // Destroy the list.
    CleanupStack::PopAndDestroy( dirScan );
    }

// ---------------------------------------------------------------------------
// Re-creates backed-up file in private directory.
// ---------------------------------------------------------------------------
//
TInt CAknsSrvActiveBackupDataClient::RestoreFileInPrivateDirectoryL(
    const TDesC& aFileName )
    {
    AKNS_TRACE_DEBUG("CAknsSrvActiveBackupDataClient::RestoreFileInPrivateDirectoryL" );
    _LIT( KAknsStaticPath, "\\private\\10207114\\import" );
    _LIT( KAknsSknExtension, ".SKN" );
    TBool parseError = EFalse;
    TInt fileErr = KErrNone;

    HBufC* fileNameBuffer = HBufC::NewL( KMaxFileName );
    TParsePtrC fileName( aFileName );
    TPtr bufferPtr = fileNameBuffer->Des();

    // First append drive and static path.
    if ( fileName.DrivePresent() )
        {
        bufferPtr.Append( fileName.Drive() );
        }
    else
        {
        AKNS_TRACE_DEBUG("CAknsSrvActiveBackupDataClient::RestoreFileInPrivateDirectoryL parse error1" );
        parseError = ETrue;
        }
    if ( !parseError )
        {
        bufferPtr.Append( KAknsStaticPath );
        }

    if ( fileName.PathPresent() && !parseError )
        {
        // Take path without the trailing backslash.
        TPtrC path = fileName.Path().Left( fileName.Path().Length() - 1 );

        // Locate last backslash.
        TChar backslash('\\');
        TInt bsLoc = path.LocateReverse( backslash );

        // Append skin PID to the directory.
        bufferPtr.Append( fileName.Path().Mid( bsLoc ) );

        if ( fileName.ExtPresent() )
            {
            // Last, append filename. Now string is complete.
            bufferPtr.Append( fileName.NameAndExt() );

            // switch the extension and check for file existance.
            bufferPtr.Replace(
                bufferPtr.Length() - KExtensionLength,
                KExtensionLength,
                KAknsSknExtension );
            if ( !AknsSrvUtils::IsFile( iFsSession, bufferPtr ) )
                {
                // There is no matching .skn-file, do not restore the graphics file.
                fileErr = KErrNotFound;
                }

            // switch back the graphics file extension.
            bufferPtr.Replace(
                bufferPtr.Length() - KExtensionLength,
                KExtensionLength,
                fileName.Ext() );
            }
        else
            {
            AKNS_TRACE_DEBUG("CAknsSrvActiveBackupDataClient::RestoreFileInPrivateDirectoryL parse error2" );
            parseError = ETrue;
            }
        }
    else
        {
        AKNS_TRACE_DEBUG("CAknsSrvActiveBackupDataClient::RestoreFileInPrivateDirectoryL parse error3" );
        parseError = ETrue;
        }

    if( !parseError && fileErr == KErrNone )
        {
        if ( AknsSrvUtils::IsFile( iFsSession, bufferPtr ) )
            {
            // Do not restore, if the file already exists.
            fileErr = KErrAlreadyExists;
            }
        else
            {
            // Create the file.
            fileErr = iFile.Replace(
                iFsSession,
                bufferPtr,
                ( EFileWrite | EFileShareExclusive | EFileStream ) );
            }
        }

    AKNS_TRACE_DEBUG1("CAknsSrvActiveBackupDataClient::RestoreFileInPrivateDirectoryL parse ret=%d", fileErr );
    if ( fileErr != KErrNone )
        {
        // If error creating or parsing the file, skip to next one.
        return fileErr;
        }
    if ( parseError )
        {
        return KErrArgument;
        }
    return KErrNone;
    }

// ---------------------------------------------------------------------------
// C++ constructor.
// ---------------------------------------------------------------------------
//
CAknsSrvActiveBackupDataClient::CAknsSrvActiveBackupDataClient(
    RFs& aFsSession ) : iFsSession( aFsSession )
    {
    }

// ---------------------------------------------------------------------------
// 2nd phase constructor.
// ---------------------------------------------------------------------------
//
void CAknsSrvActiveBackupDataClient::ConstructL()
    {
    AKNS_TRACE_DEBUG("CAknsSrvActiveBackupDataClient::ConstructL" );
    iBuffer=HBufC::NewL( KMaxHeaderSize );
    }

// ---------------------------------------------------------------------------
// Do initialise get backup data.
// ---------------------------------------------------------------------------
//
void CAknsSrvActiveBackupDataClient::DoInitialiseGetBackupDataL(
    TDriveNumber aDrive )
    {
    // this is the index of the file being processed - point to the beginning
    iFileIndex=0;
    // the first state of the backup state machine
    iBackupState=EBackupNoFileOpen;

    TFileName path;
    TChar driveLetter;
    RFs::DriveToChar( aDrive, driveLetter );
    path.Append( driveLetter );
    path.Append( KSkinRootDir );
    // Store the directories and filenames.
    ScanDirectoryForSkinFilesL( path );
    }

// End of file
