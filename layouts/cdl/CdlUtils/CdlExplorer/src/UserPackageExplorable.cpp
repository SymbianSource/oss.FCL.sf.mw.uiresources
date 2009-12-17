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
#include <UserPckg.cdl.h>
#include <CdlUserPackageExplorer.h>
#include <CdlRefs.h>

using namespace CDL_User_Package;

class CUserPackageExplorable : public CCdlExplorableInstance
	{
public:
	CUserPackageExplorable(const TCdlRef& aRef);
	~CUserPackageExplorable();
	void ConstructL();

	TBool CanOpen();
	void OpenL();
	void Properties(TDes& aBuf);
	TBool CanBeApplied();
	void ApplyStandAloneL();
	void ApplyLayerL();

private:
	CInstance* iPckg;
	};


CUserPackageExplorable::CUserPackageExplorable(const TCdlRef& aRef)
: CCdlExplorableInstance(aRef)
	{
	}

CUserPackageExplorable::~CUserPackageExplorable()
	{
	delete iPckg;
	}

void CUserPackageExplorable::ConstructL()
	{
	iPckg = CInstance::NewL(iRef);
	TName name;
	name.Format(_L("%d U:%S %d %08X"), iRef.iId, &iPckg->name(), iPckg->language(), iPckg->uid());
	SetName(name);
	}

TBool CUserPackageExplorable::CanOpen()
	{
	return ETrue;
	}

void CUserPackageExplorable::OpenL()
	{
	TCdlArray<TCdlRef> const& contents = iPckg->contents();
	TInt count = contents.Count();
	for (TInt ii=0; ii<count; ii++)
		{
		TCdlRef ref = contents[ii];
		if (!ref.iName)
			ref.iName = iRef.iName;
		CCdlExplorableInstance* inst = new(ELeave) CCdlExplorableInstance(ref);
		CleanupStack::PushL(inst);
		AddComponentL(inst);
		CleanupStack::Pop(inst);
		}
	}

void CUserPackageExplorable::Properties(TDes& aBuf)
	{
	aBuf.Format(_L("%S\nId: %d, 0x%08X\nLibrary: %S\nLang: %d\nUID: 0x%08X"), &iPckg->name(), iRef.iId, iRef.iUid, iRef.iName, iPckg->language(), iPckg->uid());
	}


CCdlExplorableInstance* MakeUserPackageLC(const TCdlRef& aRef)
	{
	CUserPackageExplorable* inst = new(ELeave) CUserPackageExplorable(aRef);
	CleanupStack::PushL(inst);
	inst->ConstructL();
	return inst;
	}

TBool CUserPackageExplorable::CanBeApplied()
	{
	return ETrue;
	}

void CUserPackageExplorable::ApplyStandAloneL()
	{
	ApplyPackageStandAloneL(iPckg, iPckg->contents());
	}

void CUserPackageExplorable::ApplyLayerL()
	{
	ApplyPackageLayerL(iPckg, iPckg->contents());
	}


class CUserPackagesExplorable : public CCdlExplorable
	{
public:
	CUserPackagesExplorable();
	~CUserPackagesExplorable();
	void ConstructL();

	TBool CanOpen();
	void OpenL();
	void Properties(TDes& aBuf);

private:
	CCdlUserPackageExplorer* iExplorer;
	CArrayPtr<CInstance>* iPackages;
	};


CUserPackagesExplorable::CUserPackagesExplorable()
: CCdlExplorable(_L("User packages"))
	{
	}

CUserPackagesExplorable::~CUserPackagesExplorable()
	{
	if (iPackages)
		iPackages->ResetAndDestroy();
	delete iPackages;
	delete iExplorer;
	}

void CUserPackagesExplorable::ConstructL()
	{
	iExplorer = new(ELeave) CCdlUserPackageExplorer;
	iExplorer->ConstructL();
	iPackages = iExplorer->FindLC();
	CleanupStack::Pop(iPackages);
	}

TBool CUserPackagesExplorable::CanOpen()
	{
	return ETrue;
	}

void CUserPackagesExplorable::OpenL()
	{
	TInt count = iPackages->Count();
	for (TInt ii=0; ii<count; ii++)
		{
		CInstance* inst = iPackages->At(ii);
		CCdlExplorableInstance* pckg = MakeUserPackageLC(inst->Ref());
		AddComponentL(pckg);
		CleanupStack::Pop(pckg);
		}
	}

void CUserPackagesExplorable::Properties(TDes& aBuf)
	{
	aBuf = _L("The user packages");
	}


CCdlExplorable* MakeUserPackagesExplorableLC()
	{
	CUserPackagesExplorable* inst = new(ELeave) CUserPackagesExplorable();
	CleanupStack::PushL(inst);
	inst->ConstructL();
	return inst;
	}


void ApplyPackageStandAloneL(CCdlInstance* aPackage, const TCdlArray<TCdlRef>& aRefs)
	{
	CCdlRefs* state = CdlExplorerUtils::CreateRefsLC(*aPackage, aRefs);
	CdlEngine::SetGlobalStateL(*state);
	CleanupStack::PopAndDestroy(state);
	}

void ApplyPackageLayerL(CCdlInstance* aPackage, const TCdlArray<TCdlRef>& aRefs)
	{
	CCdlRefs* layer = CdlExplorerUtils::CreateRefsLC(*aPackage, aRefs);
	CCdlUids* uids = layer->UidsLC();
	CCdlRefs* state = CdlEngine::GlobalStateLC(*uids);
	state->AddLayerL(*layer);
	CdlEngine::SetGlobalStateL(*state);
	CleanupStack::PopAndDestroy(state);
	CleanupStack::PopAndDestroy(uids);
	CleanupStack::PopAndDestroy(layer);
	}
