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
#ifndef CDLLIBRARY_H
#define CDLLIBRARY_H

#include <e32base.h>
#include <CdlEngDef.h>
#include <CdlEngine.h>
#include <babitflags.h>

class CCdlLibManager;
class REComSession;


GLREF_D const TUid KCdlLibraryUid;

_LIT(KCdlLibsPath,"\\sys\\bin\\");
_LIT(KCdlLibsLoaderPath,"z:\\sys\\bin\\;\\sys\\bin\\");

/**
* CDL's version of RLibrary.
* This suppresses calling of entry points on DLL load and close.
*/
class RCdlLibrary
	{
public:
	RCdlLibrary();

	void Close();
	TInt CdlLoad(const TDesC& aLibName, TBool aRomOnly);

	const TCdlArray<SCdlCustomisation>& ContentsL() const;
	const SCdlCustomisation* CustomisationL(TUid aUid, TInt aImplId) const;
	TPtrC Name() const;
	const TDesC* FullName() const;
	TBool SameShortName(const TDesC& aShortLibName);

	TInt& RefCount() { return iRefCount; }

	TBool IsLibLoadedAsRomOnly() const;
	void SetLibLoadedAsRomOnly();

public:
	static TPtrC ExtractName(const TDesC& aLibName);
	static TBool CheckIfNotRomOnly(TBool aRomOnly, const TDesC& aName);

private:
	HBufC* iName;			// owned, the full path name of the library
	TPtrC iShortName;		// file name without extension or path, points to content of iName
	TInt iRefCount;
	TBitFlags iFlags;
	TUid iEcomDtorUid;
	TAny* iEcomImpl;
	};


/**
* A reference to a CDL library. This allows the CDL library manager to reference count
* RCdlLibrary objects, thereby preventing many instances of the same library existing.
*/
class RCdlLibRef
	{
public:
	RCdlLibRef();
	void Close();
	RCdlLibrary* Lib() const;
	TPtrC Name() const;

private:
	friend class CCdlLibManager;	// only CCdlLibManager can set a reference
	void SetRef(CCdlLibManager* aLibMan, RCdlLibrary* aLib);

private:
	CCdlLibManager* iLibMan;		// not owned
	RCdlLibrary* iLib;				// shared ownership with CCdlManager and all other references to this library
	};


/**
* The CDL library manager. Maintains one RCdlLibrary for each CDL DLL that is required
* by the engine and its clients.
*/
NONSHARABLE_CLASS(CCdlLibManager) : public CBase
	{
public:
	CCdlLibManager();
	~CCdlLibManager();
	void ConstructL();

	TBool IsLibLoadedAsRomOnly(const TDesC& aLibName) const;
	RCdlLibRef LoadL(const TDesC& aLibName, RCdlLibrary* aLib, TBool aRomOnly);
	void Close(RCdlLibrary* aLib);
	RCdlLibrary* FindLib(const TDesC& aLibName) const;

private:

	static TInt LazyUnload(TAny* aThis);
	void DoLazyUnload();
	
private:
	CArrayPtrFlat<RCdlLibrary> iLibs;	// shared ownership of contained libraries with RCdlLibRef objects
	REComSession* iEcom;
	CAsyncCallBack* iLazyUnloader;
	};


#endif
