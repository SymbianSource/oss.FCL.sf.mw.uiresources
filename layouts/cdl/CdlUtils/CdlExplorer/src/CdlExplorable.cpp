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
#include <CdlRefs.h>
#include "CdlExplorerContainer.h"

struct SInstanceFactory
	{
	TUid iUid;
	FInstanceFactoryLC* iFactoryLC;
	};

const SInstanceFactory gInstanceFactories[] =
	{
		{ {0x101f8bb2}, &MakeUserPackageLC }
	};


CCdlExplorable::CCdlExplorable() 
: iComponents(4), iInfo(static_cast<CCdlExplorerAppUi*>(CEikonEnv::Static()->EikAppUi())->Info())
	{
	}

CCdlExplorable::CCdlExplorable(const TDesC& aName) 
: iComponents(4), iName(aName), iInfo(static_cast<CCdlExplorerAppUi*>(CEikonEnv::Static()->EikAppUi())->Info())
	{
	}

CCdlExplorable::~CCdlExplorable()
	{
	ResetComponents();
	}

void CCdlExplorable::ResetComponents()
	{
	iComponents.ResetAndDestroy();
	}

void CCdlExplorable::SetName(const TDesC& aName)
	{
	iName = aName;
	}

const TDesC& CCdlExplorable::Name() const
	{
	return iName;
	}

TInt CCdlExplorable::Count() const
	{
	return iComponents.Count();
	}

CCdlExplorable* CCdlExplorable::At(TInt aIndex) const
	{
	return iComponents[aIndex];
	}

void CCdlExplorable::AddComponentL(CCdlExplorable* aComponent)
	{
	iComponents.AppendL(aComponent);
	}

TInt CCdlExplorable::MdcaCount() const
	{
	return Count();
	}

TPtrC16 CCdlExplorable::MdcaPoint(TInt aIndex) const
	{
	return At(aIndex)->Name();
	}

TBool CCdlExplorable::CanBeApplied()
	{
	return EFalse;
	}

void CCdlExplorable::ApplyStandAloneL()
	{
	}

void CCdlExplorable::ApplyLayerL()
	{
	}

void CCdlExplorable::SetView(CCdlExplorerContainer* aView)
	{
	iView = aView;
	}

void CCdlExplorable::ListChangedL()
	{
	iView->HandleListBoxContentChangeL(this);
	}



CCdlExplorableLibs::CCdlExplorableLibs()
: CCdlExplorable(_L("the libs"))
	{
	}

CCdlExplorableLibs::~CCdlExplorableLibs()
	{
	}

TBool CCdlExplorableLibs::CanOpen()
	{
	return ETrue;
	}

void CCdlExplorableLibs::OpenL()
	{
	CdlEngine::SetAvailableRefsChangeObserverL(this);
	const CCdlNames& libs = Info().AllRefs().Names();
	TInt count = libs.Count();
	for (TInt ii=0; ii<count; ii++)
		{
		TParsePtrC parse(*libs[ii]);
		TPtrC drive(parse.Drive());
		TPtrC name(parse.NameAndExt());
		TFileName libName;
		libName.Format(_L("%S%S"),&drive,&name);
		CCdlExplorableDll* dll = new(ELeave) CCdlExplorableDll(libName);
		CleanupStack::PushL(dll);
		AddComponentL(dll);
		CleanupStack::Pop(dll);
		}
	}

void CCdlExplorableLibs::Properties(TDes& aBuf)
	{
	aBuf.Append(_L("All libraries"));
	}

void CCdlExplorableLibs::HandleAvailableRefsChangeL()
	{
	ResetComponents();
	OpenL();
	iView->HandleChangeL(this);
	}



CCdlExplorableDll::CCdlExplorableDll(const TDesC& aFileName)
: CCdlExplorable(aFileName)
	{
	}

CCdlExplorableDll::~CCdlExplorableDll()
	{
	delete iInstances;
	}

TBool CCdlExplorableDll::CanOpen()
	{
	return ETrue;
	}

void CCdlExplorableDll::OpenL()
	{
	if (iInstances)
		return;

	iInstances = Info().AllRefs().SubsetByNameLC(Name());
	CleanupStack::Pop(iInstances);
	TInt count = iInstances->CountRefs();
	for (TInt ii=0; ii<count; ii++)
		{
		CCdlExplorableInstance* inst = InstanceFactoryLC(iInstances->Ref(ii));
		AddComponentL(inst);
		CleanupStack::Pop(inst);
		}
	}

void CCdlExplorableDll::Properties(TDes& aBuf)
	{
	aBuf.Format(_L("Name: %S"), &Name());
	}

CCdlExplorableInstance* CCdlExplorableDll::InstanceFactoryLC(const TCdlRef& aRef)
	{
	CCdlExplorableInstance* inst = NULL;
	TInt count = sizeof(gInstanceFactories)/sizeof(*gInstanceFactories);
	TInt ii;
	for (ii=0; ii<count; ii++)
		{
		const SInstanceFactory& factory = gInstanceFactories[ii];
		if (factory.iUid == aRef.iUid)
			{
			inst = (*factory.iFactoryLC)(aRef);
			break;
			}
		}
	if (ii == count)
		{
		inst = new(ELeave) CCdlExplorableInstance(aRef);
		CleanupStack::PushL(inst);
		}
	return inst;
	}


CCdlExplorableInstance::CCdlExplorableInstance(const TCdlRef& aRef, TInt aShow)
: iRef(aRef)
	{
	TName name;
	name.Zero();
	if (aShow & EShowId)
		name.AppendFormat(_L("%d "), aRef.iId);
	if (aShow & EShowUid)
		name.AppendFormat(_L("%08X %S "), aRef.iUid, Info().InterfaceName(aRef.iUid));
	if (aShow & EShowName)
		{
		TPtrC n = aRef.iName->Mid(14);
		name.AppendFormat(_L("%S "), &n);
		}
	SetName(name);
	}

CCdlExplorableInstance::~CCdlExplorableInstance()
	{
	}

TBool CCdlExplorableInstance::CanOpen()
	{
	return EFalse;
	}

void CCdlExplorableInstance::OpenL()
	{
	User::Leave(KErrNotSupported);
	}

void CCdlExplorableInstance::Properties(TDes& aBuf)
	{
	aBuf.Format(_L("Inst Id: %d\nCDL UID: 0x%08X\nCDL name: %S\nLibrary: %S"), iRef.iId, iRef.iUid, Info().InterfaceName(iRef.iUid), iRef.iName);
	}

TBool CCdlExplorableInstance::CanBeApplied()
	{
	return ETrue;
	}

void CCdlExplorableInstance::ApplyStandAloneL()
	{
	ApplyInstStandAloneL(iRef);
	}

void CCdlExplorableInstance::ApplyLayerL()
	{
	ApplyInstLayerL(iRef);
	}


void ApplyInstStandAloneL(const TCdlRef& aRef)
	{
	CCdlRefs* state = CCdlRefs::NewLC();
	state->AppendL(aRef);
	CdlEngine::SetGlobalStateL(*state);
	CleanupStack::PopAndDestroy(state);
	}

void ApplyInstLayerL(const TCdlRef& aRef)
	{
	CCdlUids* uids = CCdlUids::NewLC();
	uids->AppendL(aRef.iUid);
	CCdlRefs* state = CdlEngine::GlobalStateLC(*uids);
	state->AppendL(aRef);
	CdlEngine::SetGlobalStateL(*state);
	CleanupStack::PopAndDestroy(state);
	CleanupStack::PopAndDestroy(uids);
	}


