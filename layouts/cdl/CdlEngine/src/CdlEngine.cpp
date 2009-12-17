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
#include <e32base.h>
#include "CdlEngine.h"
#include "CdlServEng.h"
#include "CCdlEngine.h"
#include <e32uid.h>
#include <f32file.h>


void Panic(TCdlEngPanic aReason)
	{
	_LIT(KCat, "CdlEng");
	User::Panic(KCat, aReason);
	}


//
// CCdlEngineRef
//

EXPORT_C CCdlEngineRef::~CCdlEngineRef()
	{
	__ASSERT_DEBUG(iRefCount==0 || iRefCount==1, Panic(ECdlEngPanic_BadRefCount));
	ReleaseRef();
	}

CCdlEngineRef::CCdlEngineRef(CCdlEngineBase* aEngine)
: iEngine(aEngine)
	{
	AddRef();
	}

void CCdlEngineRef::AddRef()
	{
	iEngine->IncRefCount();
	iRefCount++;
	}

void CCdlEngineRef::ReleaseRef()
	{
	if (iRefCount > 0)
		{
		iEngine->DecRefCount();
		iRefCount--;
		}
	}

CCdlEngineBase* CCdlEngineRef::Engine() const
	{
	return iEngine;
	}


//
// CdlEngine
//

EXPORT_C TBool CdlEngine::IsCdlEngineCreated()
	{
	return CCdlEngine::Static() != NULL;
	}

EXPORT_C CCdlEngineRef* CdlEngine::CreateCdlEngineL()
	{
	TBool pushed;
	CCdlEngine* eng = CCdlEngine::InstanceLC(pushed);
	CCdlEngineRef* ref = new(ELeave) CCdlEngineRef(eng);
	if (pushed)
		CleanupStack::Pop();
	return ref;
	}

EXPORT_C TAny* CdlEngine::GetData(TUid aCdlUid, TInt aApiId)
	{
	return CCdlEngine::Instance().GetData(aCdlUid, aApiId);
	}

EXPORT_C TCdlEngineFunc* CdlEngine::GetFunction(TUid aCdlUid, TInt aApiId)
	{
	CCdlEngine& eng = CCdlEngine::Instance();
	CCdlCustomisationStack** pCust = eng.iCustomisations.Find(aCdlUid.iUid);
	if(!pCust)
		{
		Panic(ECdlEngPanic_CustomisationNotPresent);
		return NULL;
		}
	
		CCdlCustomisationStack* stack = *pCust;
			const CCdlInstance* inst = stack->iTop;
			__ASSERT_ALWAYS(inst, Panic(ECdlEngPanic_NoInstanceLoaded));
			inst->iLastApi = aApiId;
			eng.SetLastApiId(aApiId);
			TCdlEngineFunc* func = 0;
			do
				{
				if (aApiId < inst->Interface().iApiSize)
					func = (TCdlEngineFunc*)(inst->Implementation(aApiId));
				inst = inst->iSubLayer;
				} while (!func && inst);
			__ASSERT_ALWAYS(func, Panic(ECdlEngPanic_NoImplementation));
			return func;
	}


//
// Note that if this method is called, then GetFunction will naturally be called on the resulting instance
// and not on CdlEngine, which means that the stack iteration will not be repeated unnecessarily
// 
EXPORT_C const CCdlInstance* CdlEngine::Implementor(TUid aCdlUid, TInt aApiId)
	{
	CCdlEngine& eng = CCdlEngine::Instance();
	CCdlCustomisationStack** pCust = eng.iCustomisations.Find(aCdlUid.iUid);
	if(!pCust)
		{
		Panic(ECdlEngPanic_CustomisationNotPresent);
		}
		CCdlCustomisationStack* stack = *pCust;
			const CCdlInstance* inst = stack->iTop;
			__ASSERT_ALWAYS(inst, Panic(ECdlEngPanic_NoInstanceLoaded));
			return inst->Implementor(aApiId);
	}
	
	
EXPORT_C void CdlEngine::RequireCustomisationL(const SCdlInterface* aInterfaceParams)
	{
	CCdlEngine::Instance().RequireCustomisationL(aInterfaceParams);
	}

EXPORT_C void CdlEngine::LoadCustomisationL(const TCdlRef& aRef)
	{
	CCdlEngine::Instance().LoadCustomisationL(aRef);
	}

EXPORT_C TBool CdlEngine::IsCustomisationStarted(const SCdlInterface* aInterfaceParams)
	{
	return CCdlEngine::Instance().IsCustomisationStarted(aInterfaceParams);
	}

EXPORT_C const CCdlInstance& CdlEngine::CustomisationInstance(TUid aCdlUid)
	{
	return CCdlEngine::Instance().CustomisationInstance(aCdlUid);
	}

EXPORT_C const TCdlRef& CdlEngine::LastAccessedRef(TUid aCdlUid)
	{
	return CCdlEngine::Instance().LastAccessedRef(aCdlUid);
	}

EXPORT_C void CdlEngine::FileNameRelativeToLastAccessedInstance(TUid aCdlUid, TFileName& aFileName)
	{
	CCdlEngine::Instance().FileNameRelativeToLastAccessedInstance(aCdlUid, aFileName);
	}

EXPORT_C TInt CdlEngine::LastApiId()
	{
	return CCdlEngine::Instance().LastApiId();
	}

EXPORT_C CCdlRefs* CdlEngine::FindInstancesLC(TUid aCdlUid)
	{
	return CCdlEngine::Instance().FindInstancesLC(aCdlUid);
	}

EXPORT_C CCdlRefCollection* CdlEngine::FileContentsLC(const TDesC& aFileName)
	{
	return CCdlEngine::Instance().FileContentsLC(aFileName);
	}

EXPORT_C CCdlNames* CdlEngine::FindCustomisationFilesLC()
	{
	return CCdlEngine::Instance().FindCustomisationFilesLC();
	}

EXPORT_C CCdlRefs* CdlEngine::AllAvailableRefsLC()
	{
	return CCdlEngine::Instance().AllAvailableRefsLC();
	}

EXPORT_C void CdlEngine::SetLocalStateL(const CCdlRefs& aState)
	{
	CCdlEngine::Instance().SetLocalStateL(aState);
	}

EXPORT_C void CdlEngine::SetGlobalStateL(const CCdlRefs& aState)
	{
	CCdlEngine::Instance().SetGlobalStateL(aState);
	}

EXPORT_C CCdlRefs* CdlEngine::LocalStateLC(const CCdlUids& aCdlUids)
	{
	return CCdlEngine::Instance().LocalStateLC(aCdlUids);
	}

EXPORT_C CCdlRefs* CdlEngine::GlobalStateLC(const CCdlUids& aCdlUids)
	{
	return CCdlEngine::Instance().GlobalStateLC(aCdlUids);
	}

EXPORT_C void CdlEngine::EnableGlobalCustomisationL(const CCdlUids& aCdlUids, TBool aEnabled)
	{
	CCdlEngine::Instance().EnableGlobalCustomisationL(aCdlUids, aEnabled);
	}

EXPORT_C void CdlEngine::StartGlobalCustomisationL()
	{
	CCdlEngine::Instance().StartGlobalCustomisationL();
	}

EXPORT_C void CdlEngine::SetCustomisationChangeObserverL(MCdlChangeObserver* aObserver, TUid aUid)
	{
	CCdlEngine::Instance().AddCustomisationChangeObserverL(aObserver, aUid);
	}

EXPORT_C void CdlEngine::SetAvailableRefsChangeObserverL(MCdlChangeObserver* aObserver)
	{
	CCdlEngine::Instance().AddGeneralChangeObserverL(aObserver);
	}

EXPORT_C TInt CdlEngine::CompareNames(const TDesC& aLeft, const TDesC& aRight)
	{
	TPtrC left(RCdlLibrary::ExtractName(aLeft));
	TPtrC right(RCdlLibrary::ExtractName(aRight));
	// Call Compare first, because it's much faster if the
	// strings match
	if (left.Compare(right) == 0)
		{
		return 0;
		}
	return left.CompareF(right);
	}


//
// CdlServerEngine
//

EXPORT_C CCdlEngineRef* CdlServerEngine::CreateCdlEngineL()
	{
	TBool pushed;
	CCdlEngineBase* eng = CCdlEngineBase::InstanceLC(pushed);
	CCdlEngineRef* ref = new(ELeave) CCdlEngineRef(static_cast<CCdlEngine*>(eng));
	if (pushed)
		CleanupStack::Pop();
	return ref;
	}


//
// MCdlChangeObserver
//

EXPORT_C MCdlChangeObserver::~MCdlChangeObserver()
	{
	// It's unusual for a M-class to have a real implementation of this function.
	// This function ensures that an observer will automatically deregister from the
	// engine on destruction.
	CCdlEngine* eng = CCdlEngine::Static();
	if (eng)
		eng->RemoveChangeObserver(this);
	}

EXPORT_C void MCdlChangeObserver::HandleCustomisationChangeL(const CCdlUids& /*aUids*/)
	{
	}

EXPORT_C void MCdlChangeObserver::HandleAvailableRefsChangeL()
	{
	}

#ifndef EKA2
GLDEF_C TInt E32Dll(TDllReason /*aReason*/)
	{
	return(KErrNone);
	}
#endif
