/*
* Copyright (c) 2003 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:
*
*/


#include "CdlClient.h"
#include "CdlClientServer.h"
#ifdef __CDLSERVER_NO_PROCESSES__
#include <e32math.h>
#endif
#include "CdlRefs.h"
#include <f32file.h>

static TInt StartServer()
//
// Start the server process or thread
//
	{
	const TUidType serverUid(KNullUid,KNullUid,KServerUid3);

#ifdef __CDLSERVER_NO_PROCESSES__
	//
	// In EKA1 WINS the server is a DLL, the exported entrypoint returns a TInt
	// which represents the real entry-point for the server thread
	//
	RLibrary lib;
	TInt r=lib.Load(KCdlServerDllImg,serverUid);
	if (r!=KErrNone)
		return r;
	TLibraryFunction ordinal1=lib.Lookup(1);
	TThreadFunction serverFunc=reinterpret_cast<TThreadFunction>(ordinal1());
	//
	// To deal with the unique thread (+semaphore!) naming in EPOC, and that we may
	// be trying to restart a server that has just exited we attempt to create a
	// unique thread name for the server.
	// This uses Math::Random() to generate a 32-bit random number for the name
	//
	TName name(KCdlServerName);
	name.AppendNum(Math::Random(),EHex);
	RThread server;
	r=server.Create(name,serverFunc,
					KCdlServerStackSize,
					NULL,&lib,NULL,
					KCdlServerInitHeapSize,KCdlServerMaxHeapSize,EOwnerProcess);
	lib.Close();	// if successful, server thread has handle to library now
#else
	//
	// EPOC and EKA2 is easy, we just create a new server process. Simultaneous launching
	// of two such processes should be detected when the second one attempts to
	// create the server object, failing with KErrAlreadyExists.
	//
	RProcess server;
	TInt r=server.Create(KCdlServerExeImg,KNullDesC,serverUid);
#endif
	if (r!=KErrNone)
		return r;
	TRequestStatus stat;
	server.Rendezvous(stat);
	if (stat!=KRequestPending)
		server.Kill(0);		// abort startup
	else
		server.Resume();	// logon OK - start the server
	User::WaitForRequest(stat);		// wait for start or death
	// we can't use the 'exit reason' if the server panicked as this
	// is the panic 'reason' and may be '0' which cannot be distinguished
	// from KErrNone
	r=(server.ExitType()==EExitPanic) ? KErrGeneral : stat.Int();
	server.Close();
	return r;
	}

TInt RCdlSession::Connect()
//
// Connect to the server, attempting to start it if necessary
//
	{
	TInt retry=2;
	for (;;)
		{
		TInt r=CreateSession(KCdlServerName,TVersion(0,0,0),1);
		if (r!=KErrNotFound && r!=KErrServerTerminated)
			return r;
		if (--retry==0)
			return r;
		r=StartServer();
		if (r!=KErrNone && r!=KErrAlreadyExists)
			return r;
		}
	}

void RCdlSession::RequestGetCustL(const CCdlUids& aUids, TInt& aCustSize) const
	{
	TPtrC8 ptr = aUids.Export();
	TPckg<TInt> pckg(aCustSize);

	TIpcArgs p(&pckg, &ptr, ptr.Length());
	User::LeaveIfError(SendReceive(ECdlServCmdRequestGetCust,p));
	}

TInt RCdlSession::GetCust(TDes8& aCust, TInt& aNewSize) const
	{
	TPckg<TInt> pckg(aNewSize);

	TIpcArgs p(&aCust, aCust.MaxLength(), &pckg);
	return SendReceive(ECdlServCmdGetCust,p);
	}

void RCdlSession::SetUidsToNotifyL(const CCdlUids& aUids)
	{
	TPtrC8 ptr = aUids.Export();

	TIpcArgs p(&ptr, ptr.Size());
	User::LeaveIfError(SendReceive(ECdlServCmdSetUidsToNotify,p));
	}

void RCdlSession::NotifyChange(TRequestStatus& aStatus, TPckgBuf<SCdlServerChange>& aChange)
	{
	TIpcArgs p(&aChange);
	SendReceive(ECdlServCmdNotifyChange,p,aStatus);
	}

void RCdlSession::CancelNotifyChange() const
	{
	SendReceive(ECdlServCmdCancelNotifyChange,TIpcArgs());
	}

void RCdlSession::SetCustL(const TDesC8& aCust)
	{
	TIpcArgs p(&aCust, aCust.Size());
	User::LeaveIfError(SendReceive(ECdlServCmdSetCust,p));
	}

CCdlRefs* RCdlSession::FileContentsLC(const TDesC& aName) const
	{
	return GetRefsLC(KNullUid, aName, EFalse);
	}

CCdlRefs* RCdlSession::FindInstancesLC(TUid aCdlUid) const
	{
	return GetRefsLC(aCdlUid, KNullDesC, ETrue);
	}

CCdlRefs* RCdlSession::GetRefsLC(TUid aCdlUid, const TDesC& aName, TBool aByUid) const
	{
	TPckgBuf<TInt> refsSize;

	// get the server to export the refs to the temp buffer and return it's size.
	TIpcArgs p(&refsSize, aByUid ? 0 : &aName, aName.Length(), aCdlUid.iUid);
	User::LeaveIfError(SendReceive(ECdlServCmdGetRefsSize,p));

	CCdlRefs* refs = CCdlRefs::NewLC();

	// now get the temp buffer and import the refs.
	HBufC8* buf = GetTempBufLC(refsSize());
	refs->ImportL(*buf);
	CleanupStack::PopAndDestroy(buf);

	return refs;
	}

CCdlNames* RCdlSession::FindCustomisationFilesLC() const
	{
	TPckgBuf<TInt> namesSize;

	// get the server to export the files list to the temp buffer and return it's size
	TIpcArgs p(&namesSize);
	User::LeaveIfError(SendReceive(ECdlServCmdGetNamesSize,p));

	CCdlNames* names = CCdlNames::NewLC();

	// now get the temp buffer and import the names.
	HBufC8* buf = GetTempBufLC(namesSize());
	names->ImportL(*buf);
	CleanupStack::PopAndDestroy(buf);

	return names;
	}

// There are a number of commands that use a common temporary buffer in the server-side
// session. This function gets that buffer.
HBufC8* RCdlSession::GetTempBufLC(TInt aSize) const
	{
	HBufC8* buf = HBufC8::NewMaxLC(aSize);
	TPtr8 ptr = buf->Des();
	TIpcArgs p(&ptr);
	User::LeaveIfError(SendReceive(ECdlServCmdGetTempBuf,p));
	return buf;
	}

CCdlRefs* RCdlSession::AllAvailableRefsLC() const
	{
	// get the server to export the refs to the temp buffer and return it's size.
	TPckgBuf<TInt> refsSize;
	TIpcArgs p(&refsSize);
	User::LeaveIfError(SendReceive(ECdlServCmdGetAllRefsSize,p));

	CCdlRefs* refs = CCdlRefs::NewLC();

	// now get the temp buffer and import the refs.
	HBufC8* buf = GetTempBufLC(refsSize());
	refs->ImportL(*buf);
	CleanupStack::PopAndDestroy(buf);

	return refs;
	}

TInt RCdlSession::IsPluginInRom(const TDesC& aFileName, TBool& aIsInRom) const
	{
	TPckg<TBool> isInRom(aIsInRom);
	TIpcArgs p(&aFileName, aFileName.Length(), &isInRom);
	return SendReceive(ECdlServCmdIsPluginInRom, p);
	}

TInt RCdlSession::PluginDrive(const TDesC& aFileName, TDriveUnit& aDrive) const
	{
	TIpcArgs p(&aFileName, aFileName.Length());
	TInt ret = SendReceive(ECdlServCmdPluginDrive, p);
	if (ret < KErrNone)
	    return ret;
	aDrive = ret;
	return KErrNone;
	}

