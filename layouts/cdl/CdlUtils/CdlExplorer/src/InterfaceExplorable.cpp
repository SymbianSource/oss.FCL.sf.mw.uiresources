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

class CCdlInterfaceExplorable : public CCdlExplorable
	{
public:
	CCdlInterfaceExplorable(const SCdlInterface& aInterface);
	~CCdlInterfaceExplorable();
	void ConstructL();

	TBool CanOpen();
	void OpenL();
	void Properties(TDes& aBuf);
	TBool CanBeApplied();
	void ApplyStandAloneL();
	void ApplyLayerL();

private:
	const SCdlInterface& iInterface;
	};


class CCdlInterfacesExplorable : public CCdlExplorable, MCdlChangeObserver
	{
public:
	CCdlInterfacesExplorable();
	~CCdlInterfacesExplorable();
	void ConstructL();

	TBool CanOpen();
	void OpenL();
	void Properties(TDes& aBuf);
	TBool CanBeApplied();
	void ApplyStandAloneL();
	void ApplyLayerL();

private:
	void AddInterfaceL(const SCdlInterface& aInterface);
	void HandleAvailableRefsChangeL();
	};


CCdlInterfaceExplorable::CCdlInterfaceExplorable(const SCdlInterface& aInterface)
: iInterface(aInterface)
	{
	TBuf<256> buf;
	buf.Format(_L("%S(%d.%d)"), iInterface.iName, iInterface.iMajorVer, iInterface.iMinorVer);
	SetName(buf);
	}

CCdlInterfaceExplorable::~CCdlInterfaceExplorable()
	{
	}

void CCdlInterfaceExplorable::ConstructL()
	{
	}

TBool CCdlInterfaceExplorable::CanOpen()
	{
	return EFalse;
	}

void CCdlInterfaceExplorable::OpenL()
	{
	}

void CCdlInterfaceExplorable::Properties(TDes& aBuf)
	{
	AppendInterfaceProperties(aBuf, iInterface);
	}

TBool CCdlInterfaceExplorable::CanBeApplied()
	{
	return EFalse;
	}

void CCdlInterfaceExplorable::ApplyStandAloneL()
	{
	}

void CCdlInterfaceExplorable::ApplyLayerL()
	{
	}


CCdlInterfacesExplorable::CCdlInterfacesExplorable()
: CCdlExplorable(_L("Interfaces"))
	{
	}

CCdlInterfacesExplorable::~CCdlInterfacesExplorable()
	{
	}

void CCdlInterfacesExplorable::ConstructL()
	{
	CdlEngine::SetAvailableRefsChangeObserverL(this);
	}

TBool CCdlInterfacesExplorable::CanOpen()
	{
	return ETrue;
	}

void CCdlInterfacesExplorable::OpenL()
	{
	TInt count = Info().CountInterfaces();
	for (TInt ii=0; ii<count; ii++)
		{
		AddInterfaceL(Info().Interface(ii));
		}
	}

void CCdlInterfacesExplorable::Properties(TDes& /*aBuf*/)
	{
	}

TBool CCdlInterfacesExplorable::CanBeApplied()
	{
	return EFalse;
	}

void CCdlInterfacesExplorable::ApplyStandAloneL()
	{
	}

void CCdlInterfacesExplorable::ApplyLayerL()
	{
	}

void CCdlInterfacesExplorable::AddInterfaceL(const SCdlInterface& aInterface)
	{
	CCdlInterfaceExplorable* comp = new(ELeave) CCdlInterfaceExplorable(aInterface);
	CleanupStack::PushL(comp);
	comp->ConstructL();
	AddComponentL(comp);
	CleanupStack::Pop(comp);
	}

void CCdlInterfacesExplorable::HandleAvailableRefsChangeL()
	{
	}



CCdlExplorable* MakeInterfacesExplorableLC()
	{
	CCdlInterfacesExplorable* inst = new(ELeave) CCdlInterfacesExplorable();
	CleanupStack::PushL(inst);
	inst->ConstructL();
	return inst;
	}


void AppendInterfaceProperties(TDes& aDes, const SCdlInterface& aInterface)
	{
	aDes.AppendFormat(_L("%S\nUid: 0x%08x\nMajorVer: %d\nMinorVer: %d\nFlags: 0x%08x\nAPI size: %d\nEng major: %d\nEng minor: %d"), 
		aInterface.iName,
		aInterface.iUid,
		aInterface.iMajorVer,
		aInterface.iMinorVer,
		aInterface.iFlags,
		aInterface.iApiSize,
		aInterface.iMajorEngVer,
		aInterface.iMinorEngVer
		);
	}

