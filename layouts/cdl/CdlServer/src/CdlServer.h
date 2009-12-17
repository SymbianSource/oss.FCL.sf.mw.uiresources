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


#ifndef CDLSERVER_H
#define CDLSERVER_H

// CDL server classes

#include <e32base.h>
#include "CdlClientServer.h"
#include "CdlClientServerStd.h"
#include "CdlRefs.h"
#include "CdlDllWatcher.h"

class TDriveUnit;

enum TCdlPanic
	{
	// client panics
	EPanicBadDescriptor,
	EPanicIllegalFunction,
	EPanicNotifyActive,
	EPanicNoCustomisationRequested,
	EPanicBufRequestedWithoutSetup,
	EPanicParamOutOfRange,

	// server panics
	EServerPanicBase = 100,
	EPanicTDllListOpEqNullCurrent,
	EPanicTDllListOpLtNullCurrent,
	EPanicTDllListCurrentNullCurrent,
	EPanicTDllListNextNullCurrent,
	EPanicTDllListNextNullDirs,
	};

void PanicClient(const RMessagePtr2& aMessage,TCdlPanic TCdlPanic);
void Panic(TCdlPanic TCdlPanic);


/**
* Timer used to shut down the server after 2 seconds with no clients.
*/
class CShutdown : public CTimer
	{
	enum {KCdlShutdownDelay=2000000};	// 2 seconds
public:
	CShutdown();
	void ConstructL();
	void Start();
private:
	void RunL();
	};


/**
* The CDL server.
* This maintains a watch on the available CDL DLLs. It also maintains the total global
* customisation state.
*/
class CCdlServer : public CServer2, MCdlDllsObserver
	{
public:
	static CServer2* NewLC();
	~CCdlServer();
	void AddSession();
	void DropSession();
	CCdlRefs* GetStateLC(const CCdlUids& aUids) const;
	void SetStateL(CCdlRefs* aState);
	const CCdlRefs& AllRefs() const;
	inline CCdlRefCollection* FileContentsLC(const TDesC& aFileName) { return iDllWatcher->FileContentsLC(aFileName); }
	TInt IsPluginInRom(const TDesC& aFileName, TBool& aIsInRom);
	TInt PluginDrive(const TDesC& aFileName, TDriveUnit& aDrive);

private:
	CCdlServer();
	void ConstructL();
	CSession2* NewSessionL(const TVersion& aVersion,const RMessage2& aMessage) const;
	TInt RunError(TInt aError);

private: // from MCdlDllsObserver
	void McdoPrepareForChangesL();
	void McdoFileAddedL(const TDesC& aFile);
	void McdoFileRemovedL(const TDesC& aFile);
	void McdoChangesCompleteL();

private:
	TInt iSessionCount;
	// All the following are owned
	CShutdown iShutdown;
	CCdlEngineRef* iEngRef;
	CCdlRefs* iState;
	RFs iFs;
	CCdlDllsWatcherBase* iDllWatcher;
	CCdlRefs* iAllRefs;
	};


/**
* The CDL server's client session.
* This maintains a list of the UIDs that the client is interested in.
* Changes in available customisations and in the relevant global customisation state
* are sent to the client.
*/
class CCdlSession : public CSession2
	{
public:
	CCdlSession();
	void CreateL();
	void HandleCustChangeL(const CCdlUids& aUids);
	void HandleRefsChangeL();
private:
	~CCdlSession();
	CCdlServer& Server();
	void ServiceL(const RMessage2& aMessage);
	void RequestGetCustL(const RMessage2& aMessage);
	void GetCustL(const RMessage2& aMessage);
	void SetUidsToNotifyL(const RMessage2& aMessage);
	void NotifyChangeL(const RMessage2& aMessage);
	void CancelNotifyChangeL(const RMessage2& aMessage);
	void SetCustL(const RMessage2& aMessage);
	void GetRefsSizeL(const RMessage2& aMessage);
	void GetAllRefsSizeL(const RMessage2& aMessage);
	void GetNamesSizeL(const RMessage2& aMessage);
	void GetTempBufL(const RMessage2& aMessage);
	void IsPluginInRomL(const RMessage2& aMessage);
	void PluginDriveL(const RMessage2& aMessage);
	TBool NotifyPending() const;
	void NotifyCustChangeL();
	void WriteAndComplete(const RMessagePtr2& aMessage, TInt aParam, const TDesC8& aDes, TInt aCode = KErrNone);
	TInt ValidIntL(TInt aVal, TInt aMin, TInt aMax) const;
private:
	RMessagePtr2 iNotify;
	HBufC8* iSendingBuf;		//owned
	CCdlRefs* iSendingState;	//owned
	CCdlUids iUids;
	TBool iQueuedCustChange;	// is there a global customisation change waiting to be sent to the client?
	TBool iQueuedRefsChange;	// is there a refs list change waiting to be sent to the client?
	HBufC8* iTempBuf;			//owned
	};

#endif
