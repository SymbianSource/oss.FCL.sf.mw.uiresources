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
#include "CCdlEngine.h"
#include <CdlEngDef.h>
#include "CdlRefs.h"
#include "CdlServEng.h"



//
// CCdlEngineBase
//

CCdlEngineBase* CCdlEngineBase::Static()
	{
	return static_cast<CCdlEngineBase*>(Dll::Tls());
	}

CCdlEngineBase* CCdlEngineBase::NewLC()
	{
	CCdlEngineBase* self = new(ELeave) CCdlEngineBase;
	CleanupStack::PushL(self);
	self->ConstructL();
	return self;
	}

CCdlEngineBase* CCdlEngineBase::InstanceLC(TBool& aPushed)
	{
	aPushed = EFalse;
	CCdlEngineBase* eng = CCdlEngineBase::Static();
	if (!eng)
		{
		eng = CCdlEngineBase::NewLC();
		aPushed = ETrue;
		}
	return eng;
	}

CCdlEngineBase::~CCdlEngineBase()
	{
	delete iLibMan;
	Dll::SetTls(0);
	}

void CCdlEngineBase::IncRefCount()
	{
	iRefCount++;
	}

void CCdlEngineBase::DecRefCount()
	{
	iRefCount--;
	if (iRefCount == 0)
		delete this;
	}

CCdlEngineBase::CCdlEngineBase()
	{
	Dll::SetTls(this);
	}

void CCdlEngineBase::ConstructL()
	{
	iLibMan = new(ELeave) CCdlLibManager;
	iLibMan->ConstructL();
	}

CCdlRefCollection* CCdlEngineBase::FileContentsLC(const TDesC& aLibName)
	{
	return CCdlLibraryContentsImp::NewLC(aLibName, this);
	}

CCdlLibManager* CCdlEngineBase::LibMan() const
	{
	return iLibMan;
	}

TInt CCdlEngineBase::IsPluginInRom(const TDesC& /*aFileName*/, TBool& /*aIsInRom*/) const
	{
	return KErrNotSupported;
	}

TInt CCdlEngineBase::PluginDrive(const TDesC& /*aFileName*/, TDriveUnit& /*aDrive*/) const
    {
	return KErrNotSupported;
    }


//
// CCdlEngine
//

CCdlEngine* CCdlEngine::Static()
	{
	return static_cast<CCdlEngine*>(Dll::Tls());
	}

CCdlEngine* CCdlEngine::NewLC()
	{
	CCdlEngine* self = new(ELeave) CCdlEngine;
	CleanupStack::PushL(self);
	self->ConstructL();
	return self;
	}

CCdlEngine* CCdlEngine::InstanceLC(TBool& aPushed)
	{
	aPushed = EFalse;
	CCdlEngine* eng = CCdlEngine::Static();
	if (!eng)
		{
		eng = CCdlEngine::NewLC();
		aPushed = ETrue;
		}
	return eng;
	}

CCdlEngine& CCdlEngine::Instance()
	{
	CCdlEngine* eng = CCdlEngine::Static();
	__ASSERT_ALWAYS(eng, Panic(ECdlEngPanic_NoEngine));
	return *eng;
	}


CCdlEngine::~CCdlEngine()
	{
	delete iChangeMonitor;
	// Release the hash table
	CCdlCustomisations::TIter iterator(iCustomisations);
	while(iterator.NextKey())
	{
		CCdlCustomisationStack* stack = *(iterator.CurrentValue());
		delete stack;
	}
	
	iCustomisations.Close();
	iServer.Close();
	}

TAny* CCdlEngine::GetData(TUid aCdlUid, TInt aApiId) const
	{
	return LookupP(aCdlUid).GetData(aApiId);
	}

TCdlEngineFunc* CCdlEngine::GetFunction(TUid aCdlUid, TInt aApiId) const
	{
	return LookupP(aCdlUid).GetFunction(aApiId);
	}

CCdlEngine::CCdlEngine()
	{
	}

void CCdlEngine::ConstructL()
	{
	CCdlEngineBase::ConstructL();
	User::LeaveIfError(iServer.Connect());
	iChangeMonitor = new(ELeave) CCdlChangeMonitor(iServer, this);
	}

CCdlCustomisationStack* CCdlEngine::LookupOrCreateL(TUid aCdlUid)
	{
	CCdlCustomisationStack* stack = Lookup(aCdlUid);
	if (!stack)
		{
		stack = CCdlCustomisationStack::NewLC(aCdlUid, this);
		iCustomisations.InsertL(aCdlUid.iUid, stack);
		CleanupStack::Pop(stack);
		}
	return stack;
	}

void CCdlEngine::RequireCustomisationL(const SCdlInterface* aInterfaceParams)
	{
	LookupOrCreateL(aInterfaceParams->iUid)->RequireCustomisationL(aInterfaceParams);
	}

void CCdlEngine::LoadCustomisationL(const TCdlRef& aRef)
	{
	LookupOrCreateL(aRef.iUid)->LoadCustomisationL(aRef);
	}

TBool CCdlEngine::IsCustomisationStarted(const SCdlInterface* aInterfaceParams) const
	{
	CCdlCustomisationStack* stack = Lookup(aInterfaceParams->iUid);
	if (!stack)
		return EFalse;
	return stack->IsCustomisationStarted(aInterfaceParams);
	}

const CCdlInstance& CCdlEngine::CustomisationInstance(TUid aCdlUid) const
	{
	return LookupP(aCdlUid).Top();
	}

CCdlCustomisationStack* CCdlEngine::Lookup(TUid aCdlUid) const
	{
	CCdlCustomisationStack * const * stack = iCustomisations.Find(aCdlUid.iUid);
	if(stack)
		{
		// Found from the hash map
		return *stack;
		}
		
	return NULL;
	}

CCdlCustomisationStack& CCdlEngine::LookupP(TUid aCdlUid) const
	{
	CCdlCustomisationStack* stack = Lookup(aCdlUid);
	__ASSERT_ALWAYS(stack, Panic(ECdlEngPanic_CustomisationNotPresent));
	return *stack;
	}

const CCdlInstance* CCdlEngine::LastAccessedInstance(TUid aCdlUid) const
	{
	return LookupP(aCdlUid).LastAccessedInstance();
	}

const TCdlRef& CCdlEngine::LastAccessedRef(TUid aCdlUid) const
	{
	return LastAccessedInstance(aCdlUid)->Ref();
	}

void CCdlEngine::FileNameRelativeToLastAccessedInstance(TUid aCdlUid, TFileName& aFileName) const
	{
	LastAccessedInstance(aCdlUid)->FileNameRelativeToLastAccessedInstance(aFileName);
	}

TInt CCdlEngine::LastApiId() const
	{
	return iLastApiId;
	}

CCdlRefs* CCdlEngine::FindInstancesLC(TUid aCdlUid) const
	{
	return iServer.FindInstancesLC(aCdlUid);
	}

CCdlRefCollection* CCdlEngine::FileContentsLC(const TDesC& aLibName)
	{
	return iServer.FileContentsLC(aLibName);
	}

CCdlNames* CCdlEngine::FindCustomisationFilesLC() const
	{
	return iServer.FindCustomisationFilesLC();
	}

CCdlRefs* CCdlEngine::AllAvailableRefsLC() const
	{
	return iServer.AllAvailableRefsLC();
	}

TInt CCdlEngine::IsPluginInRom(const TDesC& aFileName, TBool& aIsInRom) const
	{
	return iServer.IsPluginInRom(aFileName, aIsInRom);
	}

TInt CCdlEngine::PluginDrive(const TDesC& aFileName, TDriveUnit& aDrive) const
    {
	return iServer.PluginDrive(aFileName, aDrive);
    }

TInt* CCdlEngine::LastApiRefL(TUid aCdlUid)
	{
	CCdlCustomisationStack* stack = LookupOrCreateL(aCdlUid);
	return stack->LastApiRef();
	}

void CCdlEngine::SetLocalStateL(const CCdlRefs& aState)
	{
	CCdlUids* uids = CCdlUids::NewLC();
	TRAPD(err, DoSetLocalStateL(aState, *uids));
	iObservers.HandleCustomisationChangeL(*uids);
	CleanupStack::PopAndDestroy();
	User::LeaveIfError(err);
	}

void CCdlEngine::DoSetLocalStateL(const CCdlRefs& aState, CCdlUids& aChangedUids)
	{
	CCdlUids* uids = aState.UidsLC();
	TInt uidCount = uids->Count();
	aChangedUids.ResizeL(uidCount, TUid::Uid(0));
	for (TInt ii=0; ii<uidCount; ++ii)
		{
		TUid uid = uids->At(ii);
		CCdlCustomisationStack* stack = LookupOrCreateL(uid);
		stack->ClearOverrides();
		aChangedUids[ii] = uid;
		for (CCdlRefs::TIterator pRef = aState.Begin(uid); pRef != aState.End(); ++pRef)
			{
			stack->LoadCustomisationL(*pRef);
			}
		}
	CleanupStack::PopAndDestroy(uids);
	}

void CCdlEngine::SetGlobalStateL(const CCdlRefs& aState)
	{
	HBufC8* buf = aState.ExportLC();
	iServer.SetCustL(*buf);
	CleanupStack::PopAndDestroy(buf);
	}

CCdlRefs* CCdlEngine::LocalStateLC(const CCdlUids& aCdlUids) const
	{
	CCdlRefs* state = CCdlRefs::NewLC();
	TInt count = aCdlUids.Count();
	for (TInt ii=0; ii<count; ii++)
		{
		TUid uid = aCdlUids[ii];
		AddLocalStateToRefs(uid, state);
		}
	return state;
	}

void CCdlEngine::AddLocalStateToRefs(TUid aUid, CCdlRefs* aState) const
	{
	CCdlCustomisationStack* stack = Lookup(aUid);
	if (stack)
		{
		const CCdlCustomisationStack::CStack& insts = stack->Stack();
		TInt iCount = insts.Count();
		for (TInt jj=0; jj<iCount; jj++)
			{
			aState->AppendL(insts[jj]->Ref());
			}
		}
	}

CCdlRefs* CCdlEngine::GlobalStateLC(const CCdlUids& aCdlUids) const
	{
	TInt size;
	iServer.RequestGetCustL(aCdlUids, size);
	return GlobalStateLC(size);
	}

CCdlRefs* CCdlEngine::GlobalStateLC(TInt aSize) const
	{
	const TInt KMaxRetries = 10;
	CCdlRefs* state = CCdlRefs::NewLC();
	HBufC8* buf = HBufC8::NewMaxLC(aSize);
	TInt ii;
	for (ii=0; ii<KMaxRetries; ii++)
		{
		TPtr8 ptr = buf->Des();
		TInt err = iServer.GetCust(ptr, aSize);
		if (err == KErrNone)
			{
			state->ImportL(ptr);
			CleanupStack::PopAndDestroy(buf);
			break;
			}
		else if (err == KCdlRefsSizeChanged)
			{
			CleanupStack::PopAndDestroy(buf);	// makes ptr invalid
			buf = HBufC8::NewMaxLC(aSize);
			}
		else
			{
			User::Leave(err);
			}
		}

	if (ii == KMaxRetries)
		User::Leave(KErrNotReady);

	return state;
	}

void CCdlEngine::EnableGlobalCustomisationL(const CCdlUids& aCdlUids, TBool aEnabled)
	{
	TInt count = aCdlUids.Count();
	for (TInt ii=0; ii<count; ii++)
		{
		TUid uid = aCdlUids[ii];
		CCdlCustomisationStack* stack = Lookup(uid);
		if (stack)
			{
			stack->EnableGlobalCustomisation(aEnabled);
			}
		}
	StartGlobalCustomisationL();
	}

void CCdlEngine::StartGlobalCustomisationL()
	{
	CCdlUids* add = CCdlUids::NewLC();
	
	CCdlCustomisations::TIter iterator(iCustomisations);
	while(iterator.NextKey())
		{
		CCdlCustomisationStack* stack = *(iterator.CurrentValue());
		TUid uid = stack->Uid();
		TBool isEnabled = (iGloballyCustomised.FindIndex(uid) != KErrNotFound);
		TBool reqEnabled = stack->GlobalCustomisationEnabled();
		if (isEnabled && !reqEnabled)			// enabled, but not required -> remove
			iGloballyCustomised.Remove(uid);
		if (!isEnabled && reqEnabled)			// not enabled, but required -> add
			add->AppendL(uid);
		// other combinations of enabled & required need no action.
		}

	if (add->Count())
		{
		CCdlRefs* state = GlobalStateLC(*add);
		SetLocalStateL(*state);
		CleanupStack::PopAndDestroy(state);
		iGloballyCustomised.AddL(*add);
		}

	iServer.SetUidsToNotifyL(iGloballyCustomised);

	CleanupStack::PopAndDestroy(add);
	}

void CCdlEngine::HandleGlobalCustomisationChangeL(TInt aSize)
	{
	CCdlRefs* state = GlobalStateLC(aSize);
	SetLocalStateL(*state);
	CleanupStack::PopAndDestroy(state);
	}

void CCdlEngine::HandleAvailableRefsChangeL()
	{
	iObservers.HandleAvailableRefsChangeL();
	}

void CCdlEngine::AddCustomisationChangeObserverL(MCdlChangeObserver* aObserver, TUid aUid)
	{
	iObservers.AddCustomisationChangeObserverL(aObserver, aUid);
	}

void CCdlEngine::AddGeneralChangeObserverL(MCdlChangeObserver* aObserver)
	{
	iObservers.AddGeneralChangeObserverL(aObserver);
	}

void CCdlEngine::RemoveChangeObserver(MCdlChangeObserver* aObserver)
	{
	iObservers.RemoveChangeObserver(aObserver);
	}


//
// CCdlLibraryContentsImp
//

CCdlLibraryContentsImp* CCdlLibraryContentsImp::NewLC(const TDesC& aLibName, CCdlEngineBase* aEngine)
	{
	CCdlLibraryContentsImp* self = new(ELeave) CCdlLibraryContentsImp();
	CleanupStack::PushL(self);
	self->ConstructL(aEngine, aLibName);
	return self;
	}

CCdlLibraryContentsImp::~CCdlLibraryContentsImp()
	{
	iLib.Close();
	}

TInt CCdlLibraryContentsImp::CountRefs() const
	{
	return iContent.Count();
	}

TCdlRef CCdlLibraryContentsImp::Ref(TInt aIndex) const
	{
	const SCdlCustomisation& cust = iContent[aIndex];
	TCdlRef ref = 
		{
		cust.iId, 
		{ cust.iInterface->iUid.iUid }, 
		iLib.Lib()->FullName()
		};
	return ref;
	}

void CCdlLibraryContentsImp::ConstructL(CCdlEngineBase* aEngine, const TDesC& aLibName)
	{
	CCdlLibManager* libMan = aEngine->LibMan();
    RCdlLibrary* lib = libMan->FindLib(aLibName);
	iLib = libMan->LoadL(aLibName, lib, EFalse);
	iContent = iLib.Lib()->ContentsL();
	}





