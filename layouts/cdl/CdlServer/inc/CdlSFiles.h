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
#ifndef CDLSFILES
#define CDLSFILES

#include <CdlDllWatcher.h>

/**
* A collection of CDir objects.
*/
class CCdlDirs : public CArrayPtrFlat<CDir>
	{
public:
	CCdlDirs();
	~CCdlDirs();
	};

/**
* Mixin interface for objects that want to observe activity in the file system watcher
*/
class MFsWatcherObserver
	{
public:
	virtual void NewDirsList(CCdlDirs* aNewDirs) = 0;
	};

/**
* The file system watcher active object.
* This watches the ?:\system\cdl directories for changes in the available CDL DLLs.
*/
class CFsWatcher : public CActive
	{
public:
	CFsWatcher(RFs& aFs, MFsWatcherObserver& aObserver);
	~CFsWatcher();
	void ConstructL();

	CCdlDirs* CreateDirsListL() const;

private:
	void DoCancel();
	void RunL();
	void DoRunL();
	void Queue();

private:
	RFs& iFs;
	MFsWatcherObserver& iObserver;
	};


/**
* Self driven active object that maintains a list of the currently available CDL DLLs.
* It trickles changes in this set of DLLs to it's observer. This is done one DLL at a time
* to avoid hanging up the server on a long running scan of all CDL DLLs.
*/
class CCdlDllsWatcher : public CCdlDllsWatcherBase, MFsWatcherObserver
	{
public:
	CCdlDllsWatcher(RFs& aFs, MCdlDllsObserver* aObserver);
	~CCdlDllsWatcher();
	void ConstructL();

private: // from CActive
	void DoCancel();
	void RunL();

private: // from MFsWatcherObserver
	void NewDirsList(CCdlDirs* aNewDirs);

private:
	void DoRunL();
	void Queue();

	void StartTellingObserverIfNecessaryL();
	void AddNewToObserverL();
	void RemoveCurrentFromObserverL();

private: // from CCdlDllsWatcherBase
	TInt IsPluginInRom(const TDesC& aFileName, TBool& aIsInRom) const;

private:
	class TDllList
		{
	public:
		// List functions.
		// These functions iterate all the DLLs in name order.
		// Drive order is ignored, except when the same name appears in more
		// than one drive, when CDL drive priority rules are observed.
		void Reset();
		const TEntry& Current() const;
		TBool AtEnd() const;
		void Next();

		// Current entry comparison operators.
		// These compare the current entry for two DLL lists by name then 
		// date modified.
		TBool operator==(const TDllList& aRhs) const;
		TBool operator<(const TDllList& aRhs) const;

	private:
		void SetCurrent();

	public:
		CCdlDirs* iDirs;			// not owned
		TInt iIndices[KMaxDrives];
		const TEntry* iCurrent;
		};

	TDllList iCurrent;				// .iDirs is owned
	TDllList iNew;					// .iDirs is owned
	CCdlDirs* iNext;				// owned, temporary storage for new dirs list while processing on-going
	TBool iTellingObserver;
	MCdlDllsObserver* iObserver;
	CFsWatcher* iFsWatcher;			// owned
	};

#endif
