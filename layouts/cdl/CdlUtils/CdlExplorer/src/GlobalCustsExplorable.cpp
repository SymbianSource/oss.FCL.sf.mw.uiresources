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

#include "CdlExplorable.h"
#include "CdlExplorerContainer.h"
#include <CdlRefs.h>


class CCdlGlobalCustExplorable : public CCdlExplorable
	{
public:
	CCdlGlobalCustExplorable(CCdlRefs* aState, TUid aUid);
	~CCdlGlobalCustExplorable();
	void ConstructL();

	TBool CanOpen();
	void OpenL();
	void Properties(TDes& aBuf);
	TBool CanBeApplied();
	void ApplyStandAloneL();
	void ApplyLayerL();

public:
	CCdlRefs* iState;
	TUid iUid;
	};


class CCdlGlobalCustsExplorable : public CCdlExplorable, MCdlChangeObserver
	{
public:
	CCdlGlobalCustsExplorable();
	~CCdlGlobalCustsExplorable();
	void ConstructL();

	TBool CanOpen();
	void OpenL();
	void Properties(TDes& aBuf);
	TBool CanBeApplied();
	void ApplyStandAloneL();
	void ApplyLayerL();

private:
	void HandleCustomisationChangeL(const CCdlUids& aUids);
	void GetStateL();
	CCdlGlobalCustExplorable* FindInterface(TUid aUid);
	void AddInterfaceL(TUid aUid);

private:
	CCdlRefs* iState;
	};


CCdlGlobalCustExplorable::CCdlGlobalCustExplorable(CCdlRefs* aState, TUid aUid)
: iState(aState), iUid(aUid)
	{
	TName name;
	name.Format(_L("%08X %S"), aUid, Info().InterfaceName(aUid));
	SetName(name);
	}

CCdlGlobalCustExplorable::~CCdlGlobalCustExplorable()
	{
	}

void CCdlGlobalCustExplorable::ConstructL()
	{
	}

TBool CCdlGlobalCustExplorable::CanOpen()
	{
	return ETrue;
	}

void CCdlGlobalCustExplorable::OpenL()
	{
	ResetComponents();
	for (CCdlRefs::TIterator pRef = iState->Begin(iUid); pRef != iState->End(); ++pRef)
		{
		CCdlExplorableInstance* exp = new(ELeave) CCdlExplorableInstance(*pRef, CCdlExplorableInstance::EShowId | CCdlExplorableInstance::EShowName);
		CleanupStack::PushL(exp);
		AddComponentL(exp);
		CleanupStack::Pop(exp);
		}
	}

void CCdlGlobalCustExplorable::Properties(TDes& aBuf)
	{
	AppendInterfaceProperties(aBuf, Info().Interface(Info().FindInterfaceIndex(iUid)));
	}

TBool CCdlGlobalCustExplorable::CanBeApplied()
	{
	return EFalse;
	}

void CCdlGlobalCustExplorable::ApplyStandAloneL()
	{
	}

void CCdlGlobalCustExplorable::ApplyLayerL()
	{
	}



CCdlGlobalCustsExplorable::CCdlGlobalCustsExplorable()
: CCdlExplorable(_L("Global State"))
	{
	}

CCdlGlobalCustsExplorable::~CCdlGlobalCustsExplorable()
	{
	delete iState;
	}

void CCdlGlobalCustsExplorable::ConstructL()
	{
	TInt count = Info().Uids().Count();
	for (TInt ii=0; ii<count; ii++)
		{
		CdlEngine::SetCustomisationChangeObserverL(this, Info().Uids()[ii]);
		}
	}

TBool CCdlGlobalCustsExplorable::CanOpen()
	{
	return ETrue;
	}

void CCdlGlobalCustsExplorable::OpenL()
	{
	GetStateL();
	CCdlUids* uids = iState->UidsLC();
	TInt count = uids->Count();
	for (TInt ii=0; ii<count; ii++)
		{
		AddInterfaceL(uids->At(ii));
		}
	CleanupStack::PopAndDestroy();
	}

void CCdlGlobalCustsExplorable::HandleCustomisationChangeL(const CCdlUids& /*aUids*/)
	{
	ResetComponents();
	OpenL();
	iView->HandleChangeL(this);
	}

void CCdlGlobalCustsExplorable::GetStateL()
	{
	CCdlRefs* state = CdlEngine::GlobalStateLC(Info().Uids());
	delete iState;
	iState = state;
	CleanupStack::Pop(state);
	}

void CCdlGlobalCustsExplorable::Properties(TDes& /*aBuf*/)
	{
	}

TBool CCdlGlobalCustsExplorable::CanBeApplied()
	{
	return EFalse;
	}

void CCdlGlobalCustsExplorable::ApplyStandAloneL()
	{
	}

void CCdlGlobalCustsExplorable::ApplyLayerL()
	{
	}

CCdlGlobalCustExplorable* CCdlGlobalCustsExplorable::FindInterface(TUid aUid)
	{
	TInt count = iComponents.Count();
	for (TInt ii=0; ii<count; ii++)
		{
		CCdlGlobalCustExplorable* comp = static_cast<CCdlGlobalCustExplorable*>(iComponents[ii]);
		if (comp->iUid == aUid)
			return comp;
		}
	return NULL;
	}

void CCdlGlobalCustsExplorable::AddInterfaceL(TUid aUid)
	{
	CCdlGlobalCustExplorable* comp = new(ELeave) CCdlGlobalCustExplorable(iState, aUid);
	CleanupStack::PushL(comp);
	comp->ConstructL();
	AddComponentL(comp);
	CleanupStack::Pop(comp);
	}



CCdlExplorable* MakeGlobalCustsExplorableLC()
	{
	CCdlGlobalCustsExplorable* inst = new(ELeave) CCdlGlobalCustsExplorable();
	CleanupStack::PushL(inst);
	inst->ConstructL();
	return inst;
	}

