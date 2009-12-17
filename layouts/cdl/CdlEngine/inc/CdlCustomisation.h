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
#ifndef CDLCUSTOMISATION_H
#define CDLCUSTOMISATION_H

#include "CdlLibrary.h"
#include <badesca.h>
#include "CdlPanic.h"

/**
* This is a CDL customisation instance implemented in a DLL
*/
NONSHARABLE_CLASS(CCdlDllInstance) : public CCdlInstance
	{
public:
	CCdlDllInstance(const TCdlRef& aRef, const CCdlInstance* aSubLayer, CCdlEngine* aEngine, TInt* aLastApi);	// all parameters are input parameters
	~CCdlDllInstance();
	void ConstructL(TBool aRomOnly, TInt aApiSize);
	const RCdlLibRef& Lib() const;

private:
	void SetIsCompleteFlag(TInt aRequiredApiSize);

	// from CCdlInstance
	virtual TBool IsComplete() const;
	virtual TAny* Implementation(TInt aCdlApiId) const;
	virtual const SCdlInterface& Interface() const;

private:
	TAny** iApi;							// not owned, points to library contents
	RCdlLibRef iLib;
	TUint32 iFlags;
	const SCdlInterface* iInterface;		// not owned, points to library contents
	};


/**
* A CDL customisation instance implemented as a proxy for another instance
*/
NONSHARABLE_CLASS(CCdlInstanceProxy) : public CCdlInstance
	{
public:
	CCdlInstanceProxy(CCdlEngine* aEngine, TInt* aLastApi);
	void Set(const CCdlInstance& aInst);

private:
	// from CCdlInstance
	virtual TBool IsComplete() const;
	virtual TAny* Implementation(TInt aCdlApiId) const;
	virtual const SCdlInterface& Interface() const;

private:
	const CCdlInstance* iInst;				// not owned
	};


/**
* A stack of customisation instances. Manages ownership and layering of customisation
* instances for the server
*/
NONSHARABLE_CLASS(CCdlCustomisationStack) : public CBase
	{
public:
	typedef CArrayPtrFlat<CCdlInstance> CStack;

public:
	static CCdlCustomisationStack* NewLC(TUid aCdlUid, CCdlEngine* aEngine);
	~CCdlCustomisationStack();

	inline TUid Uid() const { return iUid; }
	void ClearOverrides();
	void LoadCustomisationL(const TCdlRef& aRef);

	inline TAny* GetData(TInt aCdlApiId) const;
	inline TCdlEngineFunc* GetFunction(TInt aCdlApiId) const;

	const CCdlInstance* LastAccessedInstance() const;
	const CCdlInstance& Top() const;
	TInt* LastApiRef() const;
	inline TInt LastApiId() const;

	inline const CStack& Stack() const;
	inline TBool GlobalCustomisationEnabled() const;
	inline void EnableGlobalCustomisation(TBool aEnabled);

	void RequireCustomisationL(const SCdlInterface* aInterfaceParams);
	TBool IsCustomisationStarted(const SCdlInterface* aInterfaceParams) const;

private:
	static TInt CompareInterfaces(const SCdlInterface* aLeft, const SCdlInterface* aRight);

	CCdlCustomisationStack(TUid aUid, CCdlEngine* aEngine);
	void ConstructL();
	void PushCustL(CCdlInstance* aCust);
	void Delete(TInt aPos, TInt aCount);
	void NewBaseL(CCdlInstance* aBase);
	CCdlInstance* NewInstanceLC(const TCdlRef& aRef);
	TBool InstanceCanBeBase(CCdlInstance* aInst) const;

private:
	friend class CdlEngine;	// for optimised GetFunction()
	mutable TInt iLastApiId;
	TUid iUid;
	CStack iStack;							// contained CCdlInstances are owned
	CCdlInstanceProxy* iTopProxy;			// owned
	TBool iGlobalCustomisationEnabled;

	// not owned
	CCdlInstance* iTop;
	CCdlEngine* iEngine;
	const SCdlInterface* iInterfaceParams;
	};


inline TAny* CCdlCustomisationStack::GetData(TInt aCdlApiId) const
	{
	__ASSERT_ALWAYS(iTop, Panic(ECdlEngPanic_NoInstanceLoaded));
	return iTop->GetData(aCdlApiId);
	}

inline TCdlEngineFunc* CCdlCustomisationStack::GetFunction(TInt aCdlApiId) const
	{
	__ASSERT_ALWAYS(iTop, Panic(ECdlEngPanic_NoInstanceLoaded));
	return iTop->GetFunction(aCdlApiId);
	}

inline const CCdlCustomisationStack::CStack& CCdlCustomisationStack::Stack() const
	{
	return iStack;
	}

inline TBool CCdlCustomisationStack::GlobalCustomisationEnabled() const
	{
	return iGlobalCustomisationEnabled;
	}

inline void CCdlCustomisationStack::EnableGlobalCustomisation(TBool aEnabled)
	{
	iGlobalCustomisationEnabled = aEnabled;
	}

inline TInt CCdlCustomisationStack::LastApiId() const
	{
	return iLastApiId;
	}


#endif
