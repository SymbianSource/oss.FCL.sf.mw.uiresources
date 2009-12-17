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
#include "CdlCustomisation.h"
#include "CCdlEngine.h"
#include <f32file.h>

const TInt KCustomisationStackGranularity = 2;

const TUint32 KCdlInstanceFlagIsComplete = 0x1;

//
// CCdlInstance
//

EXPORT_C CCdlInstance* CCdlInstance::NewL(const TCdlRef& aRef, 
										  const SCdlInterface* aInterfaceParams, 
										  const CCdlInstance* aSubLayer, 
										  CCdlEngine* aEngine, 
										  TInt* aLastApi)
	{
	CCdlInstance* self = NewLC(aRef, aInterfaceParams, aSubLayer, aEngine, aLastApi);
	CleanupStack::Pop(self);
	return self;
	}

EXPORT_C CCdlInstance* CCdlInstance::NewLC(const TCdlRef& aRef, 
										   const SCdlInterface* aInterfaceParams, 
										   const CCdlInstance* aSubLayer, 
										   CCdlEngine* aEngine, 
										   TInt* aLastApi)
	{
	// get/create the CDL engine, if necessary
	TBool pushed = EFalse;
	if (!aEngine)
		aEngine = CCdlEngine::InstanceLC(pushed);
	// get the last API ref, if necessary
	if (!aLastApi)
		aLastApi = aEngine->LastApiRefL(aInterfaceParams->iUid);
	// CCdlDllInstance is the only appropriate concrete implementation of CCdlInstance, so create one.
	// Note, when other imlementation types become available, there will need to be a descision here about
	// what implementation type is required
	CCdlDllInstance* self = new(ELeave) CCdlDllInstance(aRef, aSubLayer, aEngine, aLastApi);
	// engine will be owned by the instance if it was created
	if (pushed)
		CleanupStack::Pop(aEngine);
	// finish construction. Again, this may depend on implementation type.
	CleanupStack::PushL(self);
	self->ConstructL(aInterfaceParams->iFlags & KCdlFlagRomOnly, aInterfaceParams->iApiSize);
	return self;
	}

CCdlInstance::CCdlInstance(CCdlEngine* aEngine, TInt* aLastApi)
: CCdlEngineRef(aEngine), iLastApi(*aLastApi)
	{
	}

EXPORT_C TAny* CCdlInstance::GetData(TInt aCdlApiId) const
	{
	iLastApi = aCdlApiId;
	((CCdlEngine*)Engine())->SetLastApiId(aCdlApiId);
	return Implementor(aCdlApiId)->Implementation(aCdlApiId);
	}

EXPORT_C TCdlEngineFunc* CCdlInstance::GetFunction(TInt aCdlApiId) const
	{
	iLastApi = aCdlApiId;
	((CCdlEngine*)Engine())->SetLastApiId(aCdlApiId);
	const CCdlInstance* inst = this;
	TCdlEngineFunc* func = 0;
	do
		{
		if (aCdlApiId < inst->Interface().iApiSize)
			func = (TCdlEngineFunc*)(inst->Implementation(aCdlApiId));
		inst = inst->iSubLayer;
		} while (!func && inst);
	__ASSERT_ALWAYS(func, Panic(ECdlEngPanic_NoImplementation));
	return func;
	}

const CCdlInstance* CCdlInstance::Implementor(TInt aCdlApiId) const
	{
	if (aCdlApiId < Interface().iApiSize && Implementation(aCdlApiId))
		return this;
	__ASSERT_ALWAYS(iSubLayer, Panic(ECdlEngPanic_NoImplementation));	
	return iSubLayer->Implementor(aCdlApiId);
	}

EXPORT_C const TCdlRef& CCdlInstance::Ref() const
	{
	return iRef;
	}

EXPORT_C const CCdlInstance* CCdlInstance::SubLayer() const
	{
	return iSubLayer;
	}

EXPORT_C const TCdlRef& CCdlInstance::LastAccessedRef() const
	{
	return Implementor(iLastApi)->Ref();
	}

EXPORT_C void CCdlInstance::FileNameRelativeToLastAccessedInstance(TFileName& aFileName) const
	{
	TParse parse;
	parse.Set(aFileName, LastAccessedRef().iName, NULL);
	aFileName = parse.FullName();
	}

EXPORT_C TBool CCdlInstance::operator==(const CCdlInstance& aOther) const
	{
	return iRef.iId == aOther.iRef.iId && CdlEngine::CompareNames(*iRef.iName, *aOther.iRef.iName) == 0;
	}

TAny* CCdlInstance::Extension(TInt /*aId*/) const
	{
	return NULL;
	}


//
// CCdlDllInstance
//

CCdlDllInstance::CCdlDllInstance(const TCdlRef& aRef, const CCdlInstance* aSubLayer, CCdlEngine* aEngine, TInt* aLastApi)
: CCdlInstance(aEngine, aLastApi)
	{
	iRef = aRef;
	iSubLayer = aSubLayer;
	__ASSERT_ALWAYS(!iSubLayer || iSubLayer->Ref().iUid == aRef.iUid, Panic(ECdlEngPanic_IncompatibleSubLayer));
	}

CCdlDllInstance::~CCdlDllInstance()
	{
	iLib.Close();
	}

void CCdlDllInstance::ConstructL(TBool aRomOnly, TInt aApiSize)
	{
	CCdlLibManager* libMan = Engine()->LibMan();


    // get the filename pointer, so that it can have drive name added if necessary
    const TDesC* name = iRef.iName;
    TFileName tempName;
    // first look if the library is already loaded
    RCdlLibrary* lib = libMan->FindLib(*name);
    if (lib)
        {
        // get the name from the library, it will be sure to have the drive letter present
        name = lib->FullName();
        }
    else
        {
        // library is not loaded
        if ((*name)[1] != ':')  // test if the filename is missing a drive letter
            {
            // get the drive for this plugin
            TDriveUnit drive;
            User::LeaveIfError(Engine()->PluginDrive(*name, drive));
            // build the new filename and set the pointer to it
            tempName = drive.Name();
            tempName.Append(*name);
            name = &tempName;
            }
        }

	// for CDL/ECom, test the ROM status before loading. .DLL loading
	// tests ROM status during load.
#ifdef RD_SECURE_BIN_RES
	if (RCdlLibrary::CheckIfNotRomOnly(aRomOnly, *name))
		{
		User::Leave(KErrAccessDenied);
		}
#endif
	
	// get the library
	iLib = libMan->LoadL(*name, lib, aRomOnly);
	lib = iLib.Lib();
	iRef.iName = lib->FullName();

	// get the customisation data for this instance
	const SCdlCustomisation* cust = lib->CustomisationL(iRef.iUid, iRef.iId);
	
	// get the table of pointers
	iApi = (TAny**)(cust->iImpl);
	
	// get the interface
	iInterface = cust->iInterface;
	
	// find out if this implementation is complete
	SetIsCompleteFlag(aApiSize);
	
	// Check that instances with no sub-layer are fully implemented
	if (!iSubLayer && !IsComplete())
		User::Leave(KErrCorrupt);
	}

void CCdlDllInstance::SetIsCompleteFlag(TInt aRequiredApiSize)
	{
    if (iInterface->iApiSize >= aRequiredApiSize)
		{
		iFlags |= KCdlInstanceFlagIsComplete;
		TAny** pApi = iApi;
		TAny** end = iApi + iInterface->iApiSize;
		for (; pApi != end; ++pApi)
			{
			if (!*pApi)
				{
				iFlags &= ~KCdlInstanceFlagIsComplete;
				break;
				}
			}
		}
	else
		{
		iFlags &= ~KCdlInstanceFlagIsComplete;
		}
	}

const RCdlLibRef& CCdlDllInstance::Lib() const
	{
	return iLib;
	}

TBool CCdlDllInstance::IsComplete() const
	{
	return iFlags & KCdlInstanceFlagIsComplete;
	}

TAny* CCdlDllInstance::Implementation(TInt aCdlApiId) const
	{
	return iApi[aCdlApiId];
	}

const SCdlInterface& CCdlDllInstance::Interface() const
	{
	return *iInterface;
	}


//
// CCdlInstanceProxy
//

CCdlInstanceProxy::CCdlInstanceProxy(CCdlEngine* aEngine, TInt* aLastApi)
: CCdlInstance(aEngine, aLastApi)
	{
	}

void CCdlInstanceProxy::Set(const CCdlInstance& aInst)
	{
	iInst = &aInst;
	iRef = iInst->Ref();
	iSubLayer = iInst->SubLayer();
	}

TBool CCdlInstanceProxy::IsComplete() const
	{
	__ASSERT_ALWAYS(iInst, Panic(ECdlEngPanic_ProxyNotInitialised));
	return iInst->IsComplete();
	}

TAny* CCdlInstanceProxy::Implementation(TInt aCdlApiId) const
	{
	__ASSERT_ALWAYS(iInst, Panic(ECdlEngPanic_ProxyNotInitialised));
	return iInst->Implementation(aCdlApiId);
	}

const SCdlInterface& CCdlInstanceProxy::Interface() const
	{
	__ASSERT_ALWAYS(iInst, Panic(ECdlEngPanic_ProxyNotInitialised));
	return iInst->Interface();
	}


//
// CCdlCustomisationStack
//

CCdlCustomisationStack* CCdlCustomisationStack::NewLC(TUid aCdlUid, CCdlEngine* aEngine)
	{
	CCdlCustomisationStack* self = new(ELeave) CCdlCustomisationStack(aCdlUid, aEngine);
	CleanupStack::PushL(self);
	self->ConstructL();
	return self;
	}

CCdlCustomisationStack::~CCdlCustomisationStack()
	{
	delete iTopProxy;
	iStack.ResetAndDestroy();
	}

const CCdlInstance* CCdlCustomisationStack::LastAccessedInstance() const
	{
	__ASSERT_ALWAYS(iTop, Panic(ECdlEngPanic_NoInstanceLoaded));
	return iTop->Implementor(iLastApiId);
	}

CCdlCustomisationStack::CCdlCustomisationStack(TUid aUid, CCdlEngine* aEngine)
: iUid(aUid), iStack(KCustomisationStackGranularity), 
  iGlobalCustomisationEnabled(ETrue), iEngine(aEngine)
	{
	}

void CCdlCustomisationStack::ConstructL()
	{
	iTopProxy = new(ELeave) CCdlInstanceProxy(iEngine, &iLastApiId);
	iTopProxy->ReleaseRef();		// we don't want a reference to the engine owned by engine
	}

void CCdlCustomisationStack::RequireCustomisationL(const SCdlInterface* aInterfaceParams)
	{
	if (!iInterfaceParams)
		iInterfaceParams = aInterfaceParams;
	else if (CompareInterfaces(aInterfaceParams, iInterfaceParams) > 0)
		User::Leave(KErrNotSupported);
	}

void CCdlCustomisationStack::ClearOverrides()
	{
	if (iTop)
		{
		Delete(1, iStack.Count()-1);	// remove everything but the base
		iTop = iStack[0];
		iTopProxy->Set(*iTop);
		}
	}

void CCdlCustomisationStack::LoadCustomisationL(const TCdlRef& aRef)
	{
	CCdlInstance* cust = NewInstanceLC(aRef);
	if (InstanceCanBeBase(cust))
		{	// this customisation is sufficient to form a new base and doesn't change ROM-only flag
		NewBaseL(cust);
		CleanupStack::Pop(cust);
		}
	else if (!iTop)
		{	// there must be an existing base before this customisation can be used
		User::Leave(KErrCorrupt);
		}
	else if (*cust == *iTop)
		{	// don't layer the same customisation over itself - no point
		CleanupStack::PopAndDestroy(cust);
		}
	else
		{	// this is a partial customisation
		PushCustL(cust);
		CleanupStack::Pop(cust);
		}
	}

CCdlInstance* CCdlCustomisationStack::NewInstanceLC(const TCdlRef& aRef)
	{
	// these temporary params are only used when no interface has been set
	SCdlInterface tempParams = 
		{
		0,					// iMajorEngVer
		0,					// iMinorEngVer
		0,					// iName
		{aRef.iUid.iUid},	// iUid
		0,					// iMajorVer
		0,					// iMinorVer
		0,					// iFlags
		0					// iApiSize
		};
	const SCdlInterface* iface = iInterfaceParams ? iInterfaceParams : &tempParams;
	return CCdlInstance::NewLC(aRef, iface, iTop, iEngine, &iLastApiId);
	}

const CCdlInstance& CCdlCustomisationStack::Top() const
	{
	return *iTopProxy;
	}

TInt* CCdlCustomisationStack::LastApiRef() const
	{
	return &iLastApiId;
	}

void CCdlCustomisationStack::NewBaseL(CCdlInstance* aBase)
	{
	PushCustL(aBase);
	iInterfaceParams = &aBase->Interface();
	Delete(0, iStack.Count()-1);	// remove everything but the new base
	}

void CCdlCustomisationStack::PushCustL(CCdlInstance* aCust)
	{
	iStack.AppendL(aCust);
	aCust->ReleaseRef();		// we don't want a reference to the engine owned by engine
	iTop = aCust;
	iTopProxy->Set(*iTop);
	}

void CCdlCustomisationStack::Delete(TInt aPos, TInt aCount)
	{
	for (TInt ii=0; ii<aCount; ii++)
		delete iStack[aPos+ii];
	iStack.Delete(aPos, aCount);
	}

TBool CCdlCustomisationStack::IsCustomisationStarted(const SCdlInterface* aInterfaceParams) const
	{
	TBool apiIsSupported = (CompareInterfaces(iInterfaceParams, aInterfaceParams) >= 0);
	return iTop && apiIsSupported;
	}

// this returns 0 for same, >0 for aLeft better than aRight and <0 otherwise
TInt CCdlCustomisationStack::CompareInterfaces(const SCdlInterface* aLeft, const SCdlInterface* aRight)
	{
	// first, pointer checks
	if (!aLeft && !aRight)
		return 0;
	else if (!aRight)
		return 1;
	else if (!aLeft)
		return -1;
	// next, ROM only flag checks
	else if ((aLeft->iFlags&KCdlFlagRomOnly) && !(aRight->iFlags&KCdlFlagRomOnly))
		return 1;
	else if (!(aLeft->iFlags&KCdlFlagRomOnly) && (aRight->iFlags&KCdlFlagRomOnly))
		return -1;
	// finally, API size check
		return aLeft->iApiSize - aRight->iApiSize;
	}

TBool CCdlCustomisationStack::InstanceCanBeBase(CCdlInstance* aInst) const
	{
	return
		CompareInterfaces(&aInst->Interface(), iInterfaceParams) >= 0 &&
		aInst->IsComplete() &&
		( // check that ROM only flag does not change
			!iInterfaceParams || 
			(aInst->Interface().iFlags&KCdlFlagRomOnly) == (iInterfaceParams->iFlags&KCdlFlagRomOnly)
		);
	}
