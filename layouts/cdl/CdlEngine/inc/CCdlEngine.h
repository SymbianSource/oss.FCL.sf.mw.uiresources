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
#ifndef CCDLENGINE_H
#define CCDLENGINE_H

#include <e32base.h>
#include <e32hashtab.h>
#include "CdlLibrary.h"
#include "CdlCustomisation.h"
#include "CdlClient.h"
#include "CdlRefs.h"
#include "CdlChangeObserver.h"
#include "CdlPanic.h"

class CCdlEngine;

/**
* Utility functions for importing and exporting descriptors
*/
class CdlUtils
	{
public:
	/**
	* Copy aLen bytes of data from aBuf to aData and move aBuf on.
	*/
	static void Extract(TPtrC8& aBuf, TDes8& aData, TInt aLen);

	/**
	* Add aText to aBuf, growing aBuf exponentially as necessary.
	* This exponential growth waste on average 1/3 extra space, but it reduces run time
	* from O(n^2) to O(nLog(n))
	* This function assumes aBuf is on top of the cleanup stack. The LDC ending means
	* that it may leave, it may destroy the object on the cleanup stack and it may
	* place a new object on the cleanup stack.
	*/
	static void AppendLDC(HBufC8*& aBuf, const TDesC8& aText);
	
	/**
	* Templated function for extracting T-classes from a descriptor, using TPckg.
	*/
	template<class T>
	inline static void Extract(TPtrC8& aBuf, T& aData)
		{ TPckg<T> pckg(aData); Extract(aBuf, pckg, pckg.MaxLength()); }
	};

/**
* CDL engine base class.
* This has the reference counting and library manager functionality.
* The CDL server uses this class to provide the engine functionality it needs.
*/
NONSHARABLE_CLASS(CCdlEngineBase) : public CBase
	{
public:
	static CCdlEngineBase* Static();
	static CCdlEngineBase* NewLC();
	static CCdlEngineBase* InstanceLC(TBool& aPushed);

	~CCdlEngineBase();
	void IncRefCount();
	void DecRefCount();

	virtual CCdlRefCollection* FileContentsLC(const TDesC& aLibName);
	CCdlLibManager* LibMan() const;
	virtual TInt IsPluginInRom(const TDesC& aFileName, TBool& aIsInRom) const;
	virtual TInt PluginDrive(const TDesC& aFileName, TDriveUnit& aDrive) const;

protected:
	CCdlEngineBase();
	void ConstructL();

private:
	TInt iRefCount;
	CCdlLibManager* iLibMan;		// owned
	};

/**
* The client side CDL engine.
* This adds all the customisation management functionality over the base class.
*/
NONSHARABLE_CLASS(CCdlEngine) : public CCdlEngineBase
	{
public:
	static CCdlEngine* Static();
	static CCdlEngine* NewLC();
	static CCdlEngine* InstanceLC(TBool& aPushed);
	static CCdlEngine& Instance();

	~CCdlEngine();

	TAny* GetData(TUid aCdlUid, TInt aApiId) const;
	TCdlEngineFunc* GetFunction(TUid aCdlUid, TInt aApiId) const;

	void RequireCustomisationL(const SCdlInterface* aInterfaceParams);
	void LoadCustomisationL(const TCdlRef& aRef);
	TBool IsCustomisationStarted(const SCdlInterface* aInterfaceParams) const;

	const CCdlInstance& CustomisationInstance(TUid aCdlUid) const;
	const TCdlRef& LastAccessedRef(TUid aCdlUid) const;
	void FileNameRelativeToLastAccessedInstance(TUid aCdlUid, TFileName& aFileName) const;
	TInt LastApiId() const;
	inline void SetLastApiId(TInt aLastApiId) const;

	CCdlRefs* FindInstancesLC(TUid aCdlUid) const;
	CCdlNames* FindCustomisationFilesLC() const;
	CCdlRefs* AllAvailableRefsLC() const;
	TInt* LastApiRefL(TUid aCdlUid);

	void SetLocalStateL(const CCdlRefs& aState);
	void SetGlobalStateL(const CCdlRefs& aState);
	CCdlRefs* LocalStateLC(const CCdlUids& aCdlUids) const;
	CCdlRefs* GlobalStateLC(const CCdlUids& aCdlUids) const;

	void EnableGlobalCustomisationL(const CCdlUids& aCdlUids, TBool aEnabled);
	void StartGlobalCustomisationL();
	
	void AddCustomisationChangeObserverL(MCdlChangeObserver* aObserver, TUid aUid);
	void AddGeneralChangeObserverL(MCdlChangeObserver* aObserver);
	void RemoveChangeObserver(MCdlChangeObserver* aObserver);

	void HandleGlobalCustomisationChangeL(TInt aSize);
	void HandleAvailableRefsChangeL();

	
	// from CCdlEngineBase
	virtual CCdlRefCollection* FileContentsLC(const TDesC& aLibName);
	virtual TInt IsPluginInRom(const TDesC& aFileName, TBool& aIsInRom) const;
	virtual TInt PluginDrive(const TDesC& aFileName, TDriveUnit& aDrive) const;

private:
	CCdlEngine();
	void ConstructL();

	CCdlCustomisationStack* Lookup(TUid aCdlUid) const;
	CCdlCustomisationStack& LookupP(TUid aCdlUid) const;
	CCdlRefs* GlobalStateLC(TInt aSize) const;
	void DoSetLocalStateL(const CCdlRefs& aState, CCdlUids& aChangedUids);
	CCdlCustomisationStack* LookupOrCreateL(TUid aCdlUid);
	const CCdlInstance* LastAccessedInstance(TUid aCdlUid) const;
	void AddLocalStateToRefs(TUid aUid, CCdlRefs* aState) const;

private:
	friend class CdlEngine;	// for optimised GetFunction()
	typedef RHashMap<TUint32, CCdlCustomisationStack*> CCdlCustomisations;
	CCdlCustomisations iCustomisations;			// contained CCdlCustomisationStacks are owned
	//mutable CCdlCustomisationStack* iLastStack;	// not owned thru this pointer
	RCdlSession iServer;
	CCdlUids iGloballyCustomised;
	CCdlChangeMonitor* iChangeMonitor;			// owned
	CCdlChangeObservers iObservers;
	//CCdlCustomisationStack** iBeginCust;
	//CCdlCustomisationStack** iEndCust;
	mutable TInt iLastApiId;
	};


/**
* Wrapper around a CDL DLL, to access it's contents as a CCdlRefCollection
*/
NONSHARABLE_CLASS(CCdlLibraryContentsImp) : public CCdlRefCollection
	{
public:
	static CCdlLibraryContentsImp* NewLC(const TDesC& aLibName, CCdlEngineBase* aEngine);
	~CCdlLibraryContentsImp();

	TInt CountRefs() const;
	TCdlRef Ref(TInt aIndex) const;

private:
	void ConstructL(CCdlEngineBase* aEngine, const TDesC& aLibName);

private:
	RCdlLibRef iLib;
	TCdlArray<SCdlCustomisation> iContent;
	};


void CCdlEngine::SetLastApiId(TInt aLastApiId) const
	{
	iLastApiId = aLastApiId;
	}

#endif
