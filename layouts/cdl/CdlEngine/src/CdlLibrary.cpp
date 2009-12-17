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
#include "CdlLibrary.h"
#include "CCdlEngine.h"
#include <e32svr.h>
#include <f32file.h>
#include <e32uid.h>
#ifdef RD_SECURE_BIN_RES
#include <ecom/ecom.h>
#endif

const TInt KCdlLibManGranularity = 4;
const TUid KCdlLibraryUid = { 0x101F8BD1 };

template<class T> 
inline T* CheckPtrL(T* aPtr)
	{
	if (aPtr == NULL)
		User::Leave(KErrNotFound);
	return aPtr;
	}


//
// RCdlLibrary
//

enum TRCdlLibraryFlags
	{
	ERCdlLibrary_RomOnly
	};

RCdlLibrary::RCdlLibrary() : iName(0), iRefCount(0)
,iEcomDtorUid(KNullUid), iEcomImpl(0)
	{
	}

void RCdlLibrary::Close()
	{
	REComSession::DestroyedImplementation(iEcomDtorUid);
	iEcomDtorUid.iUid = 0;
	iEcomImpl = 0;
	delete iName;
	iName = NULL;
	}

TInt RCdlLibrary::CdlLoad(const TDesC& aLibName, TBool /*aRomOnly*/)
	{
	// get the ECom implementation id from the DLL name
	TParsePtrC parse(aLibName);
	TPtrC name(parse.Name());
	TLex lexer(name);
	TUint32 uid;
	TInt r = lexer.Val(uid, EHex);
	if (r!=KErrNone)
		return r;

	TRAP(r, iEcomImpl = REComSession::CreateImplementationL(TUid::Uid(uid), iEcomDtorUid, NULL));

	delete iName;
	iName = 0;

	if (r==KErrNone)
		{
		iName = aLibName.Alloc();
		if (!iName)
			{
			Close();
			return KErrNoMemory;
			}

		iShortName.Set(ExtractName(*iName));
		}

	return r;
	}

TBool RCdlLibrary::CheckIfNotRomOnly(TBool aRomOnly, const TDesC& aName)
	{
	return	aRomOnly &&
			aName.Length() >= 2 && aName[1] == ':' && 
			aName[0] != 'z' && aName[0] != 'Z';
	}

const SCdlCustomisation* RCdlLibrary::CustomisationL(TUid aUid, TInt aImplId) const
	{
	const TCdlArray<SCdlCustomisation>& contents = ContentsL();

	// first try the micro customisation optimisation, where aImplId is an index into
	// the contents table.
	if (0 <= aImplId && aImplId < contents.iCount)
		{
		const SCdlCustomisation& c = contents[aImplId];
		if (c.iInterface->iUid == aUid && c.iId == aImplId)
			return &c;
		}

	// if that failed, scan the contents table.
	for (TInt ii=0; ii<contents.iCount; ii++)
		{
		const SCdlCustomisation& c = contents[ii];
		if (c.iInterface->iUid == aUid && c.iId == aImplId)
			return &c;
		}

	User::Leave(KErrNotFound);
	return NULL;
	}

const TCdlArray<SCdlCustomisation>& RCdlLibrary::ContentsL() const
	{
	TAny* f = iEcomImpl;
	SCdlMain* m = CheckPtrL((SCdlMain*)(f));

	if (m->iMajorVer != KCdlCompilerMajorVersion || m->iMinorVer != KCdlCompilerMinorVersion)
		User::Leave(KErrCorrupt);
	return *CheckPtrL((const TCdlArray<SCdlCustomisation>*)(m->iData));
	}

TPtrC RCdlLibrary::Name() const
	{
	return iShortName;
	}

const TDesC* RCdlLibrary::FullName() const
	{
	return iName;
	}

TPtrC RCdlLibrary::ExtractName(const TDesC& aLibName)
	{
	// find the postion of the colon in aLibName
	TInt colonPos = aLibName.Locate(':');
	// set name to be after the colon in aLibName, this works when colonPos is KErrNotFound (-1) too
	TPtrC name(aLibName.Mid(colonPos + 1));
	// find the postion of the last slash
	TInt lastSlashPos = name.LocateReverse('\\');
	// move name so that it only contains name after the last slash. Works with -1 again.
	name.Set(name.Mid(lastSlashPos + 1));
	// find the position of the "." in the name
	TInt dotPos = name.Locate('.');
	// if there is a dot, set the name to be the portion before the dot.
	if (dotPos != KErrNotFound)
		name.Set(name.Left(dotPos));
	// name will now be the file name only, without extension.
	return name;
	}

TBool RCdlLibrary::SameShortName(const TDesC& aShortLibName)
    {
    // Call Compare first, because it's much faster if the
	// strings match
	if (iShortName.Compare(aShortLibName) == 0)
		{
		return ETrue;
		}
	return iShortName.CompareF(aShortLibName) == 0;
	}

TBool RCdlLibrary::IsLibLoadedAsRomOnly() const
	{
	return iFlags[ERCdlLibrary_RomOnly];
	}

void RCdlLibrary::SetLibLoadedAsRomOnly()
	{
	iFlags.Set(ERCdlLibrary_RomOnly);
	}

//
// RCdlLibRef
//

RCdlLibRef::RCdlLibRef() : iLibMan(0), iLib(0)
	{
	}

void RCdlLibRef::Close()
	{
	if (iLib && iLibMan)
		iLibMan->Close(iLib);
	iLibMan = 0;
	iLib = 0;
	}

RCdlLibrary* RCdlLibRef::Lib() const
	{
	return iLib;
	}

void RCdlLibRef::SetRef(CCdlLibManager* aLibMan, RCdlLibrary* aLib)
	{
	__ASSERT_ALWAYS(!iLib && !iLibMan, Panic(ECdlEngPanic_LibraryAlreadySet));
	iLibMan = aLibMan;
	iLib = aLib;
	}

TPtrC RCdlLibRef::Name() const
	{
	return iLib->Name();
	}



//
// CCdlLibManager
//

CCdlLibManager::CCdlLibManager() : iLibs(KCdlLibManGranularity)
	{
	}

CCdlLibManager::~CCdlLibManager()
	{
	delete iLazyUnloader;
	TInt count = iLibs.Count();
	for (TInt ii=0; ii<count; ii++)
		iLibs[ii]->Close();
	iLibs.ResetAndDestroy();
	if (iEcom)
		{
		iEcom->Close();
		REComSession::FinalClose();
		}
	}

void CCdlLibManager::ConstructL()
	{
	iEcom = &REComSession::OpenL();
	}

RCdlLibRef CCdlLibManager::LoadL(const TDesC& aLibName, RCdlLibrary* aLib, TBool aRomOnly)
	{
	__ASSERT_DEBUG(aLib || !FindLib(aLibName), Panic(ECdlEngPanic_LibraryCanBeFound));

	// load new library if a lib is not supplied
	if (!aLib)
		{
		aLib = new(ELeave) RCdlLibrary;
		CleanupStack::PushL(aLib);
		User::LeaveIfError(aLib->CdlLoad(aLibName, aRomOnly));
		CleanupClosePushL(*aLib);
		iLibs.AppendL(aLib);
		CleanupStack::Pop(2);		// lib->Close() and lib's heap cell
		}

	if (aRomOnly)
		{
		// the lib must be ROM only if aRomOnly is set and we got here.
		aLib->SetLibLoadedAsRomOnly();
		}

	RCdlLibRef ref;
	ref.SetRef(this, aLib);
	aLib->RefCount()++;
	return ref;
	}

void CCdlLibManager::Close(RCdlLibrary* aLib)
	{
	aLib->RefCount()--;
	if (aLib->RefCount()==0 && !iLazyUnloader)
		{
		// note, not (ELeave) because Close can't leave and
		// unloading can always be left till another time if
		// it doesn't work now.
		iLazyUnloader = new CAsyncCallBack(TCallBack(LazyUnload, this), CActive::EPriorityLow);
		if (iLazyUnloader)
			iLazyUnloader->CallBack();
		}
	}

TInt CCdlLibManager::LazyUnload(TAny* aThis)
	{
	static_cast<CCdlLibManager*>(aThis)->DoLazyUnload();
	return 0;
	}
	
void CCdlLibManager::DoLazyUnload()
	{
	TInt count = iLibs.Count();
	for (TInt ii=count-1; ii>=0; ii--)
		{
		RCdlLibrary* lib = iLibs[ii];
		if (lib->RefCount() <= 0)
			{
			iLibs.Delete(ii--);
			lib->Close();
			delete lib;
			}
		}

	delete iLazyUnloader;
	iLazyUnloader = 0;
	}
	
RCdlLibrary* CCdlLibManager::FindLib(const TDesC& aLibName) const
	{
	RCdlLibrary* lib = NULL;
	TPtrC libName(RCdlLibrary::ExtractName(aLibName));

	// search for already loaded library
	TInt count = iLibs.Count();
	for (TInt ii=0; ii<count; ii++)
		{
		if (iLibs[ii]->SameShortName(libName))
			{
			lib = iLibs[ii];
			break;
			}
		}

	return lib;
	}

TBool CCdlLibManager::IsLibLoadedAsRomOnly(const TDesC& aLibName) const
	{
	RCdlLibrary* lib = FindLib(aLibName);
	return lib && lib->IsLibLoadedAsRomOnly();
	}
