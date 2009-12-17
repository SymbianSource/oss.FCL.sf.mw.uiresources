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

#ifndef CDLEXPLORABLE
#define CDLEXPLORABLE

#include <e32base.h>
#include <CdlEngine.h>
#include "CdlExplorerContainer.h"
#include "CdlExplorerAppUi.h"

class CCdlExplorable : public CBase, public MDesCArray
	{
public:
	CCdlExplorable();
	CCdlExplorable(const TDesC& aName);
	~CCdlExplorable();

	void SetName(const TDesC& aName);
	const TDesC& Name() const;
	TInt Count() const;
	CCdlExplorable* At(TInt aIndex) const;

	virtual TBool CanOpen() = 0;
	virtual void OpenL() = 0;
	virtual void Properties(TDes& aBuf) = 0;
	virtual TBool CanBeApplied();
	virtual void ApplyStandAloneL();
	virtual void ApplyLayerL();

    TInt MdcaCount() const;
    TPtrC16 MdcaPoint(TInt aIndex) const;

	void SetView(CCdlExplorerContainer* aView);
	void ListChangedL();

	inline const CInfo& Info() const { return iInfo; }

protected:
	void AddComponentL(CCdlExplorable* aComponent);
	void ResetComponents();

protected:
	typedef CArrayPtrFlat<CCdlExplorable> CComponents;
	CComponents iComponents;
	TName iName;
	CCdlExplorerContainer* iView;
	const CInfo& iInfo;
	};


class CCdlExplorableLibs : public CCdlExplorable, MCdlChangeObserver
	{
public:
	CCdlExplorableLibs();
	~CCdlExplorableLibs();

	TBool CanOpen();
	void OpenL();
	void Properties(TDes& aBuf);

	void HandleAvailableRefsChangeL();
	};


class CCdlExplorableInstance : public CCdlExplorable
	{
public:
	enum TShow
		{
		EShowId = 0x1,
		EShowUid = 0x2,
		EShowName = 0x4
		};
public:
	CCdlExplorableInstance(const TCdlRef& aRef, TInt aShow = EShowId | EShowUid);
	~CCdlExplorableInstance();

	TBool CanOpen();
	void OpenL();
	void Properties(TDes& aBuf);
	TBool CanBeApplied();
	void ApplyStandAloneL();
	void ApplyLayerL();

protected:
	TCdlRef iRef;
	};


class CCdlExplorableDll : public CCdlExplorable
	{
public:
	CCdlExplorableDll(const TDesC& aFileName);
	~CCdlExplorableDll();

	TBool CanOpen();
	void OpenL();
	void Properties(TDes& aBuf);

private:
	CCdlExplorableInstance* InstanceFactoryLC(const TCdlRef& aRef);

private:
	CCdlRefCollection* iInstances;
	};


typedef CCdlExplorableInstance* (FInstanceFactoryLC)(const TCdlRef& aRef);
GLREF_C CCdlExplorableInstance* MakeUserPackageLC(const TCdlRef& aRef);

GLREF_C CCdlExplorable* MakeUserPackagesExplorableLC();
GLREF_C CCdlExplorable* MakeInterfacesExplorableLC();
GLREF_C CCdlExplorable* MakeGlobalCustsExplorableLC();

GLREF_C void ApplyInstStandAloneL(const TCdlRef& aRef);
GLREF_C void ApplyInstLayerL(const TCdlRef& aRef);
GLREF_C void ApplyPackageStandAloneL(CCdlInstance* aPackage, const TCdlArray<TCdlRef>& aRef);
GLREF_C void ApplyPackageLayerL(CCdlInstance* aPackage, const TCdlArray<TCdlRef>& aRef);

GLREF_C void AppendInterfaceProperties(TDes& aDes, const SCdlInterface& aInterface);

#endif
