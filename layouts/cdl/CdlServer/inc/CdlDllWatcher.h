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
#ifndef CDLDLLWATCHER_H
#define CDLDLLWATCHER_H

#include <e32base.h>
#include <f32file.h>
#include "CdlServEng.h"

/**
* Mixin interface for objects that want to observe changes in the set of available CDL DLLs.
*/
class MCdlDllsObserver
	{
public:
	virtual void McdoPrepareForChangesL() = 0;
	virtual void McdoFileAddedL(const TDesC& aFile) = 0;
	virtual void McdoFileRemovedL(const TDesC& aFile) = 0;
	virtual void McdoChangesCompleteL() = 0;
	};

class CCdlDllsWatcherBase : public CActive
	{
public:
	static void NewL(CCdlDllsWatcherBase*& iWatcher, RFs& aFs, MCdlDllsObserver* aObserver);
	CCdlDllsWatcherBase(RFs& aFs);
	CCdlRefCollection* FileContentsLC(const TDesC& aFileName);
	virtual TInt IsPluginInRom(const TDesC& aFileName, TBool& aIsInRom) const = 0;
	virtual TInt PluginDrive(const TDesC& aFileName, TDriveUnit& aDrive) const = 0;
protected:
	RFs& iFs;
	};

#endif
