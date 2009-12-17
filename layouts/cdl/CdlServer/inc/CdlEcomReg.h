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
#ifndef CDLECOMREG_H
#define CDLECOMREG_H

#include "CdlDllWatcher.h"
#include <ecom/ecom.h>
#include <CdlRefs.h>

class CCdlEcomWatcher : public CCdlDllsWatcherBase
	{
public:
	CCdlEcomWatcher(RFs& aFs, MCdlDllsObserver* aObserver);
	~CCdlEcomWatcher();
	void ConstructL();

private: // from CActive
	void DoCancel();
	void RunL();

private:
	void GetListL();
	void Queue();
	void HandleNewListL(RImplInfoPtrArray& aImplArray);
	void AddNewToObserverL(CImplementationInformation& aImpl);
	void RemoveCurrentFromObserverL(CImplementationInformation& aImpl);
	void StartTellingObserverIfNecessaryL();
	void ImplFileName(CImplementationInformation& aImpl, TFileName& aFileName);

private: // from CCdlDllsWatcherBase
	TInt IsPluginInRom(const TDesC& aFileName, TBool& aIsInRom) const;
	TInt PluginDrive(const TDesC& aFileName, TDriveUnit& aDrive) const;

private:
	TInt FindPlugin(const TDesC& aFileName) const;

private:
	REComSession* iEcom;
	MCdlDllsObserver* iObserver;
	RImplInfoPtrArray* iImplArray;
	TBool iTellingObserver;
	};


#endif
