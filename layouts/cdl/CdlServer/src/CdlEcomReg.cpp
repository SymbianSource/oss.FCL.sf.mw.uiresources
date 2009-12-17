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
#include <barsc2.h>
#include <barsread2.h>
#include "CdlEcomReg.h"

void CCdlDllsWatcherBase::NewL(CCdlDllsWatcherBase*& iWatcher, RFs& aFs, MCdlDllsObserver* aObserver)
	{
	CCdlEcomWatcher* self = new(ELeave) CCdlEcomWatcher(aFs, aObserver);
	iWatcher = self;
	self->ConstructL();
	}

CCdlRefCollection* CCdlDllsWatcherBase::FileContentsLC(const TDesC& aFileName)
	{
	CCdlRefs* refs = CCdlRefs::NewLC();

	TParsePtrC parse(aFileName);
	TPtrC name(parse.Name());
	TPtrC drive(parse.Drive());

	_LIT(KRes, "%S\\resource\\cdl\\%S_cdl_detail.rsc");
	TBuf<64> fileName;
	fileName.Format(KRes, &drive, &name);
	
	CResourceFile* resFile = CResourceFile::NewLC(iFs, fileName, 0, 0);
	RResourceReader reader;
	reader.OpenLC(resFile, 1);

	TInt count = reader.ReadInt16L();
	for (TInt ii=0; ii<count; ii++)
		{
		TCdlRef ref;
		ref.iName = &aFileName;
		ref.iUid = TUid::Uid(reader.ReadInt32L());
		ref.iId = reader.ReadInt32L();
		refs->AppendL(ref);
		}

	CleanupStack::PopAndDestroy(2);		// reader, resFile

	return refs;
	}


CCdlEcomWatcher::CCdlEcomWatcher(RFs& aFs, MCdlDllsObserver* aObserver)
: CCdlDllsWatcherBase(aFs), iObserver(aObserver)
	{
	}

CCdlEcomWatcher::~CCdlEcomWatcher()
	{
	Cancel();
	if (iImplArray)
		iImplArray->ResetAndDestroy();
	delete iImplArray;
	if (iEcom)
		{
		iEcom->Close();
		REComSession::FinalClose();
		}
	}

void CCdlEcomWatcher::ConstructL()
	{
	iImplArray = new(ELeave) RImplInfoPtrArray;
	iEcom = &REComSession::OpenL();
	TRAP_IGNORE(GetListL());
	Queue();
	}

void CCdlEcomWatcher::DoCancel()
	{
	iEcom->CancelNotifyOnChange(iStatus);
	}

void CCdlEcomWatcher::RunL()
	{
	TRAP_IGNORE(GetListL());
	Queue();
	}

void CleanImplArray(TAny* aArray)
	{
	RImplInfoPtrArray* array = static_cast<RImplInfoPtrArray*>(aArray);
	array->ResetAndDestroy();
	delete array;
	}

TInt ImplUidLessThan(const CImplementationInformation& aLhs, const CImplementationInformation& aRhs)
	{
	return aLhs.ImplementationUid().iUid - aRhs.ImplementationUid().iUid;
	}

void CCdlEcomWatcher::GetListL()
	{
	RImplInfoPtrArray* implArray = new(ELeave) RImplInfoPtrArray;
	CleanupStack::PushL(TCleanupItem(CleanImplArray, implArray));
	REComSession::ListImplementationsL(TUid::Uid(0x101f8243), *implArray);

	implArray->Sort(&ImplUidLessThan);

	HandleNewListL(*implArray);

	iImplArray->ResetAndDestroy();
	delete iImplArray;
	iImplArray = implArray;

	CleanupStack::Pop(); // implArray
	}

void CCdlEcomWatcher::Queue()
	{
	iEcom->NotifyOnChange(iStatus);
	SetActive();
	}

void CCdlEcomWatcher::HandleNewListL(RImplInfoPtrArray& aImplArray)
	{
	RImplInfoPtrArray& implArray = *iImplArray;
	TInt ixNew = 0;
	TInt ixCur = 0;
	TInt countNew = aImplArray.Count();
	TInt countCur = implArray.Count();
	while (ixNew < countNew || ixCur < countCur)
		{
		if (ixCur == countCur)				// at end of current list, any UIDs left in new list should be added
			{
			AddNewToObserverL(*aImplArray[ixNew]);
			ixNew++;
			}
		else if (ixNew == countNew)					// at end of new list, any UIDs left in current list should be removed
			{
			RemoveCurrentFromObserverL(*implArray[ixCur]);
			ixCur++;
			}
		else if (implArray[ixCur]->ImplementationUid() == aImplArray[ixNew]->ImplementationUid())				// UIDs are the same, skip to the next one
			{
			ixNew++;
			ixCur++;
			}
		else if (implArray[ixCur]->ImplementationUid().iUid < aImplArray[ixNew]->ImplementationUid().iUid)				// current UID does not appear in new list, remove it
			{
			RemoveCurrentFromObserverL(*implArray[ixCur]);
			ixCur++;
			}
		else									// new UID does not appear in current list, add it
			{
			AddNewToObserverL(*aImplArray[ixNew]);
			ixNew++;
			}
		}

	if (iTellingObserver)
		{
		iTellingObserver = EFalse;
		iObserver->McdoChangesCompleteL();
		}
	}

void CCdlEcomWatcher::AddNewToObserverL(CImplementationInformation& aImpl)
	{
	TFileName fileName;
	ImplFileName(aImpl, fileName);
	StartTellingObserverIfNecessaryL();
	TRAP_IGNORE(iObserver->McdoFileAddedL(fileName));
	}

void CCdlEcomWatcher::RemoveCurrentFromObserverL(CImplementationInformation& aImpl)
	{
	TFileName fileName;
	ImplFileName(aImpl, fileName);
	StartTellingObserverIfNecessaryL();
	TRAP_IGNORE(iObserver->McdoFileRemovedL(fileName));
	}

void CCdlEcomWatcher::ImplFileName(CImplementationInformation& aImpl, TFileName& aFileName)
	{
	TDriveName drive = aImpl.Drive().Name();
	aFileName.Format(_L("%S%08x.dll"), &drive, aImpl.ImplementationUid());
	}

void CCdlEcomWatcher::StartTellingObserverIfNecessaryL()
	{
	if (!iTellingObserver)
		iObserver->McdoPrepareForChangesL();
	iTellingObserver = ETrue;
	}

TInt ImplArrayUidSearchPred(const TUid* aUid, const CImplementationInformation& aImpl)
	{
	return aUid->iUid - aImpl.ImplementationUid().iUid;
	}

TInt CCdlEcomWatcher::FindPlugin(const TDesC& aFileName) const
	{
	// get the implementation UID from the file name
	TParsePtrC parse(aFileName);
	TPtrC name(parse.Name());
	TLex lexer(name);
	TUint32 uidVal;
	TInt r = lexer.Val(uidVal, EHex);
	if (r!=KErrNone)
		return r;
	
	// Search for an implementation with the UID in the implementation array
	TUid uid = { uidVal };
	return iImplArray->FindInOrder(uid, &ImplArrayUidSearchPred);
	}

TInt CCdlEcomWatcher::IsPluginInRom(const TDesC& aFileName, TBool& aIsInRom) const
    {
    TInt index = FindPlugin(aFileName);
	if (index<=KErrNotFound)
		return index;
	
	// Is this implementation ROM based or not?
	aIsInRom = (*iImplArray)[index]->RomBased();
	
	return KErrNone;
	}

TInt CCdlEcomWatcher::PluginDrive(const TDesC& aFileName, TDriveUnit& aDrive) const
    {
    TInt index = FindPlugin(aFileName);
	if (index<=KErrNotFound)
		return index;
	
	// Get the drive unit
	aDrive = (*iImplArray)[index]->Drive();
	
	return KErrNone;
    }
