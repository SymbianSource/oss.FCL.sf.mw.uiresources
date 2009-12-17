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
#include "CdlSFiles.h"
#include "CdlServer.h"
#include <e32uid.h>

const TUid KCdlLibraryUid = { 0x101F8BD1 };

_LIT(KCdlLibsPath,"*:\\sys\\bin");

CCdlRefCollection* CCdlDllsWatcherBase::FileContentsLC(const TDesC& aFileName)
	{
	return CdlServerEngine::FileContentsLC(aFileName);
	}

//
// CCdlDirs
//

const TInt KCCdlDirsGranularity = 4;

CCdlDirs::CCdlDirs()
: CArrayPtrFlat<CDir>(KCCdlDirsGranularity)
	{
	}

CCdlDirs::~CCdlDirs()
	{
	ResetAndDestroy();
	}


//
// CFsWatcher
//

CFsWatcher::CFsWatcher(RFs& aFs, MFsWatcherObserver& aObserver)
: CActive(EPriorityStandard), iFs(aFs), iObserver(aObserver)
	{
	CActiveScheduler::Add(this);
	Queue();
	}

CFsWatcher::~CFsWatcher()
	{
	Cancel();
	}

void CFsWatcher::ConstructL()
	{
	}

CCdlDirs* CFsWatcher::CreateDirsListL() const
	{
	CCdlDirs* dirs = new(ELeave) CCdlDirs();
	CleanupStack::PushL(dirs);

	TDriveList drives;
	User::LeaveIfError(iFs.DriveList(drives));
	TFileName path(KCdlLibsPath);
	path.Append('\\');
	for (TInt drive = EDriveZ; drive >= EDriveA; drive--)
		{
		if (drives[drive])
			{
			path[0] = TText('A' + drive);
			CDir* fileList=NULL;
			const TUidType dllType(KDynamicLibraryUid, KCdlLibraryUid);
			if (iFs.GetDir(path, dllType, ESortByName, fileList) == KErrNone)
				{
				CleanupStack::PushL(fileList);
				dirs->AppendL(fileList);
				CleanupStack::Pop(fileList);
				}
			}
		}

	CleanupStack::Pop(dirs);
	return dirs;
	}

void CFsWatcher::DoCancel()
	{
	iFs.NotifyChangeCancel();
	}

void CFsWatcher::RunL()
	{
	// errors in the FS watcher can't be reported sensibly, so they are ignored.
	TRAPD(ignore, DoRunL());
	}

void CFsWatcher::DoRunL()
	{
	// error from RFs::NotifyChange will stop the watcher
	User::LeaveIfError(iStatus.Int());
	Queue();
	// error from CreateDirsListL, most likely OOM, will stop the change from being processed
	// immediately, but further changes will make it catch up.
	iObserver.NewDirsList(CreateDirsListL());
	}

void CFsWatcher::Queue()
	{
	iFs.NotifyChange(ENotifyAll, iStatus, KCdlLibsPath);
	SetActive();
	}


//
// CCdlDllsWatcher
//

void CCdlDllsWatcherBase::NewL(CCdlDllsWatcherBase*& iWatcher, RFs& aFs, MCdlDllsObserver* aObserver)
	{
	CCdlDllsWatcher* self = new(ELeave) CCdlDllsWatcher(aFs, aObserver);
	iWatcher = self;
	self->ConstructL();
	}

CCdlDllsWatcher::CCdlDllsWatcher(RFs& aFs, MCdlDllsObserver* aObserver)
: CCdlDllsWatcherBase(aFs), iObserver(aObserver)
	{
	}

CCdlDllsWatcher::~CCdlDllsWatcher()
	{
	delete iFsWatcher;
	delete iCurrent.iDirs;
	delete iNew.iDirs;
	delete iNext;
	Cancel();
	}

void CCdlDllsWatcher::ConstructL()
	{
	iFsWatcher = new(ELeave) CFsWatcher(iFs, *this);
	iFsWatcher->ConstructL();
	iNew.iDirs = iFsWatcher->CreateDirsListL();
	iNew.Reset();
	Queue();
	}

void CCdlDllsWatcher::DoCancel()
	{
	}

void CCdlDllsWatcher::RunL()
	{
	// errors here will be caused by leaves in the observer. These should not stop
	// processing of further DLLs. So, errors are ignored.
	TRAPD(ignore, DoRunL());
	}

void CCdlDllsWatcher::DoRunL()
	{
	if (iCurrent.AtEnd() && iNew.AtEnd())	// At end of both queues, restart if there is a pending dirs list

		{
		delete iCurrent.iDirs;
		iCurrent.iDirs = iNew.iDirs;
		iCurrent.Reset();

		iNew.iDirs = iNext;
		iNext = NULL;
		iNew.Reset();

		if (iNew.iDirs)
			Queue();

		if (iTellingObserver)
			{
			iTellingObserver = EFalse;
			iObserver->McdoChangesCompleteL();
			}
		}
	else if (iCurrent.AtEnd())				// at end of current list, any DLLs left in new list should be added
		{
		AddNewToObserverL();
		}
	else if (iNew.AtEnd())					// at end of new list, any DLLs left in current list should be removed
		{
		RemoveCurrentFromObserverL();
		}
	else if (iCurrent == iNew)				// DLLs are the same, skip to the next one
		{
		iCurrent.Next();
		iNew.Next();
		Queue();
		}
	else if (iCurrent < iNew)				// current DLL does not appear in new list, remove it
		{	
		// note: it is important to check for deletes before adds, because the
		// two files may have the same name but different times.
		RemoveCurrentFromObserverL();
		}
	else									// new DLL does not appear in current list, add it
		{
		AddNewToObserverL();
		}
	}

void CCdlDllsWatcher::AddNewToObserverL()
	{
	const TEntry& file = iNew.Current();
	iNew.Next();
	Queue();
	StartTellingObserverIfNecessaryL();
	iObserver->McdoFileAddedL(file.iName);
	}

void CCdlDllsWatcher::RemoveCurrentFromObserverL()
	{
	const TEntry& file = iCurrent.Current();
	iCurrent.Next();
	Queue();
	StartTellingObserverIfNecessaryL();
	iObserver->McdoFileRemovedL(file.iName);
	}

void CCdlDllsWatcher::StartTellingObserverIfNecessaryL()
	{
	if (!iTellingObserver)
		iObserver->McdoPrepareForChangesL();
	iTellingObserver = ETrue;
	}

void CCdlDllsWatcher::Queue()
	{
	iStatus = KRequestPending;
	TRequestStatus* s = &iStatus;
	User::RequestComplete(s, KErrNone);
	SetActive();
	}

void CCdlDllsWatcher::NewDirsList(CCdlDirs* aNewDirs)
	{
	if (IsActive())
		{
		delete iNext;
		iNext = aNewDirs;
		}
	else
		{
		iNew.iDirs = aNewDirs;
		iNew.Reset();
		Queue();
		}
	}


//
// CCdlDllsWatcher::TDllList
//

void CCdlDllsWatcher::TDllList::Reset()
	{
	Mem::FillZ(iIndices, sizeof(TInt)*KMaxDrives);
	SetCurrent();
	}

TBool CCdlDllsWatcher::TDllList::operator==(const TDllList& aRhs) const
	{
	__ASSERT_ALWAYS(iCurrent, Panic(EPanicTDllListOpEqNullCurrent));

	const TEntry& rhsEntry = aRhs.Current();
	return	iCurrent->iName.CompareF(rhsEntry.iName) == 0 &&
			iCurrent->iModified == rhsEntry.iModified;
	}

TBool CCdlDllsWatcher::TDllList::operator<(const TDllList& aRhs) const
	{
	__ASSERT_ALWAYS(iCurrent, Panic(EPanicTDllListOpLtNullCurrent));

	const TEntry& rhsEntry = aRhs.Current();
	TInt cmp = iCurrent->iName.CompareF(rhsEntry.iName);
	return	cmp < 0 || (cmp == 0 && iCurrent->iModified < rhsEntry.iModified);
	}

const TEntry& CCdlDllsWatcher::TDllList::Current() const
	{
	__ASSERT_ALWAYS(iCurrent, Panic(EPanicTDllListCurrentNullCurrent));

	return *iCurrent;
	}

TBool CCdlDllsWatcher::TDllList::AtEnd() const
	{
	if (!iDirs)
		return ETrue;

	return !iCurrent;
	}

void CCdlDllsWatcher::TDllList::Next()
	{
	__ASSERT_ALWAYS(iCurrent, Panic(EPanicTDllListNextNullCurrent));
	__ASSERT_ALWAYS(iDirs, Panic(EPanicTDllListNextNullDirs));

	TInt count = iDirs->Count();
	for (TInt ii = 0; ii < count; ii++)
		{
		CDir& dir = *iDirs->At(ii);
		if (iIndices[ii] < dir.Count())
			{
			const TEntry& entry = dir[iIndices[ii]];
			if (entry.iName.CompareF(iCurrent->iName) == 0)
				iIndices[ii]++;
			}
		}

	SetCurrent();
	}

void CCdlDllsWatcher::TDllList::SetCurrent()
	{
	// This function implements the CDL drive priority rule, 
	// where DLLs on Z are higher priority than Y...
	// nb. Z: is the first in iDirs, A: is last.

	iCurrent = NULL;
	if (!iDirs)
		return;

	TInt count = iDirs->Count();
	for (TInt ii = 0; ii < count; ii++)
		{
		CDir& dir = *iDirs->At(ii);
		if (iIndices[ii] < dir.Count())
			{
			const TEntry& entry = dir[iIndices[ii]];
			if (!iCurrent || entry.iName.CompareF(iCurrent->iName) < 0)
				iCurrent = &entry;
			}
		}
	}

TInt CCdlDllsWatcher::IsPluginInRom(const TDesC& /*aFileName*/, TBool& /*aIsInRom*/) const
	{
	return KErrNotSupported;
	}


