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


#include "CdlServer.h"

CCdlDllsWatcherBase::CCdlDllsWatcherBase(RFs& aFs)
: CActive(CActive::EPriorityStandard), iFs(aFs)
	{
	CActiveScheduler::Add(this);
	}


CCdlServer::CCdlServer()
	:CServer2(0)
	{}

CCdlServer::~CCdlServer()
	{
	delete iDllWatcher;
	delete iAllRefs;
	delete iState;
	delete iEngRef;
	iFs.Close();
	}

CServer2* CCdlServer::NewLC()
	{
	CCdlServer* self=new(ELeave) CCdlServer;
	CleanupStack::PushL(self);
	self->ConstructL();
	return self;
	}

//
// 2nd phase construction - ensure the timer and server objects are running
//
void CCdlServer::ConstructL()
	{
	StartL(KCdlServerName);
	iShutdown.ConstructL();
	// ensure that the server still exits even if the 1st client fails to connect
	iShutdown.Start();
	User::LeaveIfError(iFs.Connect());
	iEngRef = CdlServerEngine::CreateCdlEngineL();
	iState = CCdlRefs::NewL();
	iAllRefs = CCdlRefs::NewL();
	CCdlDllsWatcherBase::NewL(iDllWatcher, iFs, this);
	}


//
// Create a new client session. This should really check the version number.
//
CSession2* CCdlServer::NewSessionL(const TVersion& /*aVersion*/,const RMessage2& /*aMessage*/) const
	{
	return new(ELeave) CCdlSession();
	}

//
// A new session is being created
// Cancel the shutdown timer if it was running
//
void CCdlServer::AddSession()
	{
	++iSessionCount;
	iShutdown.Cancel();
	}

//
// A session is being destroyed
// Start the shutdown timer if it is the last session.
//
void CCdlServer::DropSession()
	{
	if (--iSessionCount==0)
		iShutdown.Start();
	}

//
// Handle an error from CCdlSession::ServiceL()
// A bad descriptor error implies a badly programmed client, so panic it;
// otherwise report the error to the client
//
TInt CCdlServer::RunError(TInt aError)
	{
	if (aError == KErrBadDescriptor)
		PanicClient(Message(),EPanicBadDescriptor);
	else if (aError == KErrArgument)
		PanicClient(Message(), EPanicParamOutOfRange);
	else
		Message().Complete(aError);
	//
	// The leave will result in an early return from CServer::RunL(), skipping
	// the call to request another message. So do that now in order to keep the
	// server running.
	ReStart();
	return KErrNone;	// handled the error fully
	}

CCdlRefs* CCdlServer::GetStateLC(const CCdlUids& aUids) const
	{
	return iState->SubsetByUidsLC(aUids);
	}

void CCdlServer::SetStateL(CCdlRefs* aState)
	{
	CCdlUids* uids = aState->UidsLC();
	iState->MergeAndReplaceL(*aState);

	iSessionIter.SetToFirst();
	CSession2* s;
	while ((s = iSessionIter++) != 0)
		static_cast<CCdlSession*>(s)->HandleCustChangeL(*uids);

	CleanupStack::PopAndDestroy(uids);
	}

void CCdlServer::McdoPrepareForChangesL()
	{
	}

void CCdlServer::McdoFileAddedL(const TDesC& aFile)
	{
	CCdlRefCollection* refs = FileContentsLC(aFile);
	iAllRefs->AppendL(*refs);
	CleanupStack::PopAndDestroy(refs);
	}

void CCdlServer::McdoFileRemovedL(const TDesC& aFile)
	{
	iAllRefs->Delete(aFile);
	}

void CCdlServer::McdoChangesCompleteL()
	{
	iSessionIter.SetToFirst();
	CSession2* s;
	while ((s = iSessionIter++) != 0)
		static_cast<CCdlSession*>(s)->HandleRefsChangeL();
	}

const CCdlRefs& CCdlServer::AllRefs() const
	{
	return *iAllRefs;
	}

TInt CCdlServer::IsPluginInRom(const TDesC& aFileName, TBool& aIsInRom)
	{
	return iDllWatcher->IsPluginInRom(aFileName, aIsInRom);
	}

TInt CCdlServer::PluginDrive(const TDesC& aFileName, TDriveUnit& aDrive)
	{
	return iDllWatcher->PluginDrive(aFileName, aDrive);
	}
