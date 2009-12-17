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
#ifndef CDLCHANGEOBSERVER_H
#define CDLCHANGEOBSERVER_H

#include <e32base.h>
#include "CdlEngine.h"
#include "CdlClientServerStd.h"

class RCdlSession;
class CCdlEngine;

/**
* Active object that watches out for changes from the CDL server.
*/
NONSHARABLE_CLASS(CCdlChangeMonitor) : public CActive
	{
public:
	CCdlChangeMonitor(RCdlSession& aServer, CCdlEngine* aEngine);
	~CCdlChangeMonitor();

private:
	void Queue();
	void RunL();
	void DoCancel();
	void ProcessL();

private:
	RCdlSession& iServer;
	CCdlEngine* iEngine;					// not owned
	TPckgBuf<SCdlServerChange> iChange;
	};

/**
* CCdlChangeObserver records all the UIDs that a particular observer is interested in
*/
NONSHARABLE_CLASS(CCdlChangeObserver) : public CBase
	{
public:
	static CCdlChangeObserver* NewLC(MCdlChangeObserver* aObserver, TUid aUid);
	static CCdlChangeObserver* NewLC(MCdlChangeObserver* aObserver);
	~CCdlChangeObserver();

	MCdlChangeObserver* Observer() const;
	void AddUidL(TUid aUid);

	void HandleCustomisationChangeL(const CCdlUids& aUids);
	void HandleAvailableRefsChangeL();

private:
	MCdlChangeObserver* iObserver;			// not owned
	CCdlUids iUids;
	};


/**
* Collection of CCdlChangeObserver objects.
*/
NONSHARABLE_CLASS(CCdlChangeObservers) : public CBase
	{
public:
	CCdlChangeObservers();
	~CCdlChangeObservers();

	void AddCustomisationChangeObserverL(MCdlChangeObserver* aObserver, TUid aUid);
	void AddGeneralChangeObserverL(MCdlChangeObserver* aObserver);
	void RemoveChangeObserver(MCdlChangeObserver* aObserver);

	void HandleCustomisationChangeL(const CCdlUids& aUids);
	void HandleAvailableRefsChangeL();

private:
	TInt FindIndex(MCdlChangeObserver* aObserver) const;

private:
	typedef CArrayPtrFlat<CCdlChangeObserver> CCdlChangeObserverArray;
	CCdlChangeObserverArray iObservers;		// contained CCdlChangeObservers are owned
	};


#endif
