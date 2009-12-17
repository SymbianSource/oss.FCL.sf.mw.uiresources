/*
* Copyright (c) 2009 Nokia Corporation and/or its subsidiary(-ies).
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
#include "CdlChangeObserver.h"
#include "CCdlEngine.h"

const TInt KCdlGranularity = 4;


//
// CCdlChangeMonitor
//

CCdlChangeMonitor::CCdlChangeMonitor(RCdlSession& aServer, CCdlEngine* aEngine)
: CActive(EPriorityStandard), iServer(aServer), iEngine(aEngine)
	{
	CActiveScheduler::Add(this);
	Queue();
	}

CCdlChangeMonitor::~CCdlChangeMonitor()
	{
	Cancel();
	}

void CCdlChangeMonitor::Queue()
	{
	iServer.NotifyChange(iStatus, iChange);
	SetActive();
	}

void CCdlChangeMonitor::RunL()
	{
	if (iStatus == KErrNone)
		Queue();

	TRAP_IGNORE(ProcessL());
	}

void CCdlChangeMonitor::ProcessL()
	{
	switch (iChange().iType)
		{
		case SCdlServerChange::EGlobalCustomisation:
			iEngine->HandleGlobalCustomisationChangeL(iChange().iSize);
			break;

		case SCdlServerChange::EAvailableRefs:
			iEngine->HandleAvailableRefsChangeL();
			break;

		default:
			Panic(ECdlEngPanic_BadChangeType);
			break;
		}
	}

void CCdlChangeMonitor::DoCancel()
	{
	iServer.CancelNotifyChange();
	}


//
// CCdlChangeObserver
//

CCdlChangeObserver* CCdlChangeObserver::NewLC(MCdlChangeObserver* aObserver, TUid aUid)
	{
	CCdlChangeObserver* self = new(ELeave) CCdlChangeObserver;
	CleanupStack::PushL(self);
	self->iObserver = aObserver;
	self->AddUidL(aUid);
	return self;
	}

CCdlChangeObserver* CCdlChangeObserver::NewLC(MCdlChangeObserver* aObserver)
	{
	CCdlChangeObserver* self = new(ELeave) CCdlChangeObserver;
	CleanupStack::PushL(self);
	self->iObserver = aObserver;
	return self;
	}

CCdlChangeObserver::~CCdlChangeObserver()
	{
	}

MCdlChangeObserver* CCdlChangeObserver::Observer() const
	{
	return iObserver;
	}

void CCdlChangeObserver::AddUidL(TUid aUid)
	{
	iUids.AddL(aUid);
	}

void CCdlChangeObserver::HandleCustomisationChangeL(const CCdlUids& aUids)
	{
	CCdlUids* change = iUids.IntersectionLC(aUids);
	if (change->Count())
		iObserver->HandleCustomisationChangeL(*change);
	CleanupStack::PopAndDestroy(change);
	}

void CCdlChangeObserver::HandleAvailableRefsChangeL()
	{
	iObserver->HandleAvailableRefsChangeL();
	}


//
// CCdlChangeObservers
//

CCdlChangeObservers::CCdlChangeObservers()
: iObservers(KCdlGranularity)
	{
	}

CCdlChangeObservers::~CCdlChangeObservers()
	{
	iObservers.ResetAndDestroy();
	}

void CCdlChangeObservers::AddCustomisationChangeObserverL(MCdlChangeObserver* aObserver, TUid aUid)
	{
	TInt index = FindIndex(aObserver);
	if (index == KErrNotFound)
		{
		iObservers.AppendL(CCdlChangeObserver::NewLC(aObserver, aUid));
		CleanupStack::Pop();
		}
	else
		{
		iObservers[index]->AddUidL(aUid);
		}
	}

void CCdlChangeObservers::AddGeneralChangeObserverL(MCdlChangeObserver* aObserver)
	{
	TInt index = FindIndex(aObserver);
	if (index == KErrNotFound)
		{
		iObservers.AppendL(CCdlChangeObserver::NewLC(aObserver));
		CleanupStack::Pop();
		}
	}

void CCdlChangeObservers::RemoveChangeObserver(MCdlChangeObserver* aObserver)
	{
	TInt index = FindIndex(aObserver);
	if (index != KErrNotFound)
		{
		delete iObservers[index];
		iObservers.Delete(index);
		}
	}

void CCdlChangeObservers::HandleCustomisationChangeL(const CCdlUids& aUids)
	{
	TInt count = iObservers.Count();
	for (TInt ii=0; ii<count; ii++)
		{
		iObservers[ii]->HandleCustomisationChangeL(aUids);
		}
	}

void CCdlChangeObservers::HandleAvailableRefsChangeL()
	{
	TInt count = iObservers.Count();
	for (TInt ii=0; ii<count; ii++)
		{
		iObservers[ii]->HandleAvailableRefsChangeL();
		}
	}

TInt CCdlChangeObservers::FindIndex(MCdlChangeObserver* aObserver) const
	{
	TInt count = iObservers.Count();
	for (TInt ii=0; ii<count; ii++)
		{
		if (iObservers[ii]->Observer() == aObserver)
			return ii;
		}
	return KErrNotFound;
	}
