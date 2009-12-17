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
#include "CdlRefs.h"
#include "CCdlEngine.h"
#include <e32hashtab.h>


const TInt KCdlGranularity = 4;



//
// CdlUtils
//

void CdlUtils::Extract(TPtrC8& aBuf, TDes8& aData, TInt aLen)
	{
	aData.Zero();
	aData.Append(aBuf.Left(aLen));
	aBuf.Set(aBuf.Mid(aLen));
	}

void CdlUtils::AppendLDC(HBufC8*& aBuf, const TDesC8& aText)
	{
	TPtr8 ptr = aBuf->Des();
	TInt newLen = ptr.Length() + aText.Length();
	if (newLen > ptr.MaxLength())
		{
		aBuf = aBuf->ReAllocL(newLen * 2);
		CleanupStack::Pop();		// old value of aBuf
		CleanupStack::PushL(aBuf);
		ptr.Set(aBuf->Des());
		}
	ptr.Append(aText);
	}



//
// CCdlRefs
//

EXPORT_C CCdlRefs* CCdlRefs::NewL()
	{
	CCdlRefs* self = NewLC();
	CleanupStack::Pop(self);
	return self;
	}

EXPORT_C CCdlRefs* CCdlRefs::NewLC()
	{
	CCdlRefs* self = new(ELeave) CCdlRefs;
	CleanupStack::PushL(self);
	return self;
	}

CCdlRefs::CCdlRefs()
: iRefs(KCdlGranularity)
	{
	}

EXPORT_C CCdlRefs::~CCdlRefs()
	{
	}

EXPORT_C CCdlRefs::TIterator CCdlRefs::Begin() const
	{
	return TIterator(iRefs, 0);
	}

EXPORT_C CCdlRefs::TIterator CCdlRefs::Begin(TUid aUid) const
	{
	TInt count = iRefs.Count();
	TInt ii=0;
	for (; ii<count; ii++)
		if (iRefs[ii].iUid == aUid)
			break;
	return TInterfaceIterator(iRefs, ii);
	}

EXPORT_C CCdlRefs::TIterator CCdlRefs::Begin(const TDesC& aName) const
	{
	TInt count = iRefs.Count();
	TInt ii=0;
	for (; ii<count; ii++)
		if (CdlEngine::CompareNames(*iRefs[ii].iName, aName) == 0)
			break;
	return TNameIterator(iRefs, ii);
	}

EXPORT_C CCdlRefs::TIterator CCdlRefs::End() const
	{
	return TIterator(iRefs, iRefs.Count());
	}


EXPORT_C HBufC8* CCdlRefs::ExportL() const
	{
	HBufC8* buf = ExportLC();
	CleanupStack::Pop(buf);
	return buf;
	}

EXPORT_C HBufC8* CCdlRefs::ExportLC() const
	{
	// ptrMap used to translate HBufC*s to indicies in iNames
	// this has to be pushed on cleanup stack before HBufC
	// because AppendLDC pops and pushes the HBufC from the
	// cleanup stack.
	RHashMap<TUint32,TInt> ptrMap;
	CleanupClosePushL(ptrMap);
	
	HBufC8* buf = HBufC8::NewLC(sizeof(TInt));
	
	TInt nameCount = iNames.Count();
	CdlUtils::AppendLDC(buf, TPckgC<TInt>(nameCount));
	for (TInt ii=0; ii<nameCount; ii++)
		{
		HBufC* pName = iNames[ii];
		ptrMap.InsertL((TUint32)pName, ii);
		
		const TDesC& name = *pName;
		TInt size = name.Size();
		CdlUtils::AppendLDC(buf, TPckgC<TInt>(size));
		CdlUtils::AppendLDC(buf, TPtrC8((TText8*)name.Ptr(), size));
		}

	TInt refCount = iRefs.Count();
	CdlUtils::AppendLDC(buf, TPckgC<TInt>(refCount));
	for (TInt ii=0; ii<refCount; ii++)
		{
		const TCdlRef& ref = iRefs[ii];

		CdlUtils::AppendLDC(buf, TPckgC<TInt>(ref.iId));
		CdlUtils::AppendLDC(buf, TPckgC<TUid>(ref.iUid));

		TInt index = ptrMap.FindL((TUint32)ref.iName);
		CdlUtils::AppendLDC(buf, TPckgC<TInt>(index));
		}

	CleanupStack::Pop(buf);
	CleanupStack::PopAndDestroy(&ptrMap);
	CleanupStack::PushL(buf);

	return buf;
	}

EXPORT_C void CCdlRefs::ImportL(const TDesC8& aData)
	{
	TPtrC8 buf(aData);
	
	// insert the imported names at the start of the names list
	TInt nameCount=0;
	CdlUtils::Extract(buf, nameCount);
	iNames.InsertL(0, (HBufC*)NULL, nameCount);
	for (TInt ii=0; ii<nameCount; ii++)
		{
		TInt size=0;
		CdlUtils::Extract(buf, size);
		TPtrC name((TText*)buf.Ptr(), size/2);
		buf.Set(buf.Mid(size));
		iNames[ii] = name.AllocL();
		}
	
	// replace duplicated names, preserving position of new names
	TInt allNamesCount = iNames.Count();
	for (TInt ii=nameCount; ii<allNamesCount; ii++)
		{
		TInt pos = iNames.FindIndex(*iNames[ii]);
		if (pos < nameCount && pos!=KErrNotFound)
			{
			delete iNames[pos];
			iNames[pos] = iNames[ii];
			iNames.Delete(ii);
			// ii and allNamesCount have to decremented because of deletion from the array.
			ii--;
			allNamesCount--;
			}
		}

	TInt refCount=0;
	CdlUtils::Extract(buf, refCount);
	TInt existingRefs = iRefs.Count();
	iRefs.ResizeL(existingRefs + refCount);
	for (TInt ii=0; ii<refCount; ii++)
		{
		TInt id=0;
		CdlUtils::Extract(buf, id);

		TUid uid;
		CdlUtils::Extract(buf, uid);
		
		TInt nameIndex=0;
		CdlUtils::Extract(buf, nameIndex);

		TCdlRef ref = {id, {uid.iUid}, iNames[nameIndex]};
		iRefs[existingRefs+ii] = ref;
		}
	}


EXPORT_C void CCdlRefs::MergeAndReplaceL(const CCdlRefs& aRefs)
	{
	// delete existing refs for these UIDs
	CCdlUids* uids = aRefs.UidsLC();
	TInt uidCount = uids->Count();
	for (TInt ii=0; ii<uidCount; ++ii)
		{
		for (TIterator pRef = Begin(uids->At(ii)); pRef != End();)
			Delete(pRef);
		}
	CleanupStack::PopAndDestroy();

	// Add new/replacement refs
	AppendL(aRefs);
	}

EXPORT_C void CCdlRefs::AddLayerL(const CCdlRefs& aRefs)
	{
	AppendL(aRefs);
	}

EXPORT_C void CCdlRefs::AppendL(const TCdlRef& aRef)
	{
	TCdlRef ref = aRef;
	ref.iName = iNames.AddL(*ref.iName);
	iRefs.AppendL(ref);
	}

EXPORT_C void CCdlRefs::AppendL(const CCdlRefCollection& aRefs)
	{
	TInt count = aRefs.CountRefs();
	for (TInt ii=0; ii<count; ii++)
		AppendL(aRefs.Ref(ii));
	}

EXPORT_C void CCdlRefs::AppendL(const TDesC& aHomeName, const TCdlArray<TCdlRef>& aRefs)
	{
	HBufC* homeLib = iNames.AddL(aHomeName);
	TInt existing = iRefs.Count();
	TInt count = aRefs.Count();
	iRefs.ResizeL(count+existing);
	for (TInt ii=0; ii<count; ii++)
		{
		TCdlRef ref = aRefs[ii];
		if (ref.iName)
			ref.iName = iNames.AddL(*ref.iName);
		else
			ref.iName = homeLib;
		iRefs[existing+ii] = ref;
		}
	}

EXPORT_C void CCdlRefs::InsertL(const TIterator& aAt, const TCdlRef& aRef)
	{
	TCdlRef ref = aRef;
	// set the ref's name to be in the name pool.
	ref.iName = iNames.AddL(*ref.iName);
	// insert the ref at the position indicated in the iterator.
	iRefs.InsertL(aAt.iIndex, ref);
	}

EXPORT_C void CCdlRefs::Delete(TIterator& aAt)
	{
	TInt index = aAt.iIndex;
	// move the iterator to the next item
	++aAt;
	// delete the object it was pointing at
	iRefs.Delete(index);
	// move the iterator back to keep it pointing at the right cell
	aAt.iIndex--;
	}

EXPORT_C void CCdlRefs::Delete(const TIterator& aBegin, const TIterator& aEnd)
	{
	// find the first object to delete
	TIterator pRef(aBegin);
	TInt writeIndex = pRef.iIndex;
	TInt readIndex = writeIndex + 1;

	while (pRef != aEnd)
		{
		// find the next object to delete
		++pRef;
		TInt nextIndex = pRef.iIndex;
		// copy those refs between last position and next position down the refs array
		// note, nextIndex may be == aEnd now, so this will copy to the end of the array
		while (readIndex < nextIndex)
			{
			iRefs[writeIndex++] = iRefs[readIndex++];
			}
		// skip the object to be deleted
		readIndex++;
		}

	// resize the array to remove the now unused cells
	__ASSERT_DEBUG(writeIndex <= iRefs.Count(), Panic(ECdlEngPanic_DeleteAssertionFail));
	iRefs.ResizeL(writeIndex);		// shrinking array will not leave
	}

EXPORT_C void CCdlRefs::Delete(const TDesC& aName)
	{
	TInt namePos = iNames.FindIndex(aName);
	if (namePos != KErrNotFound)
		{
		// if the name was in the names list, delete all references using it
		Delete(Begin(aName), End());
		// delete the name from the names array.
		delete iNames[namePos];
		iNames.Delete(namePos);
		}
	}

EXPORT_C const CCdlNames& CCdlRefs::Names() const
	{
	return iNames;
	}

EXPORT_C CCdlUids* CCdlRefs::UidsLC() const
	{
	CCdlUids* uids = CCdlUids::NewLC();
	
	RHashSet<TInt> uidSet;
	CleanupClosePushL(uidSet);
	TInt count = iRefs.Count();
	for (TInt ii=0; ii<count; ++ii)
		uidSet.InsertL(iRefs[ii].iUid.iUid);

	uids->ResizeL(uidSet.Count());
	
	TInt pos = 0;
	THashSetIter<TInt> iter(uidSet);
	const TInt* pUid = iter.Next();
	while (pUid)
		{
		(*uids)[pos++].iUid = *pUid;
		pUid = iter.Next();
		}
	
	CleanupStack::PopAndDestroy(&uidSet);
	
	return uids;
	}

void CleanupNamesMap(TAny* aNamesMap)
	{
	RHashMap<TUint32, HBufC*>& namesMap = *static_cast<RHashMap<TUint32, HBufC*>*>(aNamesMap);
	THashMapIter<TUint32, HBufC*> iter(namesMap);
	HBufC* const* newName = iter.NextValue();
	while(newName)
		{
		delete *newName;
		newName = iter.NextValue();
		}
	}
	
EXPORT_C CCdlRefs* CCdlRefs::SubsetByUidLC(TUid aUid) const
	{
	CCdlRefs* refs = CCdlRefs::NewLC();

	// RHashMap<const TDesC*, HBufC*> would be preferrable,
	// but RHashMap does not directly support pointers as key types,
	// so TUint32 is used instead.
	RHashMap<TUint32, HBufC*> namesMap;
	CleanupStack::PushL(TCleanupItem(CleanupNamesMap, &namesMap));
	TInt uidMatch = 0;

	// count matching refs & collect names
	TInt count = iRefs.Count();
	for (TInt ii=0; ii<count; ++ii)
		{
		const TCdlRef& ref = iRefs[ii];
		if (aUid == ref.iUid)
			{
			uidMatch++;
			if (namesMap.Find(reinterpret_cast<TUint32>(ref.iName)) == NULL)
				{
				HBufC* newName = ref.iName->AllocLC();
				namesMap.Insert(reinterpret_cast<TUint32>(ref.iName), newName);
				CleanupStack::Pop(newName);
				}
			}
		}

	
	// insert the new items into refs
	refs->iRefs.ResizeL(uidMatch);
	TInt insertPos=0;
	for (TInt ii=0; ii<count; ii++)
		{
		const TCdlRef& ref = iRefs[ii];
		if (aUid == ref.iUid)
			{
			TCdlRef& newRef = refs->iRefs[insertPos++];
			newRef.iId = ref.iId;
			newRef.iUid = ref.iUid;
			newRef.iName = namesMap.FindL(reinterpret_cast<TUint32>(ref.iName));
			}
		}
	
	// insert the new names into refs->iNames
	refs->iNames.InsertL(0, (HBufC*)NULL, namesMap.Count());
	THashMapIter<TUint32, HBufC*> iter(namesMap);
	insertPos=0;
	HBufC* const* newName = iter.NextValue();
	while(newName)
		{
		refs->iNames[insertPos++] = *newName;
		newName = iter.NextValue();
		}

	CleanupStack::Pop();	// namesMap
	namesMap.Close();
	
	return refs;
	}

EXPORT_C CCdlRefs* CCdlRefs::SubsetByUidsLC(const CCdlUids& aUids) const
	{
	CCdlRefs* refs = CCdlRefs::NewLC();

	TInt count = iRefs.Count();
	for (TInt ii=0; ii<count; ++ii)
		{
		const TCdlRef& ref = iRefs[ii];
		if (aUids.FindIndex(ref.iUid) != KErrNotFound)
			refs->AppendL(ref);
		}

	return refs;
	}

EXPORT_C CCdlRefs* CCdlRefs::SubsetByNameLC(const TDesC& aName) const
	{
	CCdlRefs* refs = CCdlRefs::NewLC();
	
	TInt namePos = iNames.FindIndex(aName);
	if (namePos != KErrNotFound)
		{
		HBufC* name = iNames[namePos];
		
		// count matches
		TInt nameCount = 0;
		TInt count = iRefs.Count();
		for (TInt ii=0; ii<count; ii++)
			{
			if (iRefs[ii].iName == name)
				nameCount++;
			}
		
		// set up refs for new entries.
		HBufC* newName = refs->iNames.AddL(*name);
		refs->iRefs.ResizeL(nameCount);
		
		// insert the new items into refs
		TInt insertPos=0;
		for (TInt ii=0; ii<count; ii++)
			{
			const TCdlRef& ref = iRefs[ii];
			if (ref.iName == name)
				{
				TCdlRef& newRef = refs->iRefs[insertPos++];
				newRef.iId = ref.iId;
				newRef.iUid = ref.iUid;
				newRef.iName = newName;
				}
			}
		}
	
	return refs;
	}

EXPORT_C TInt CCdlRefs::CountRefs() const
	{
	return iRefs.Count();
	}

EXPORT_C TCdlRef CCdlRefs::Ref(TInt aIndex) const
	{
	return iRefs[aIndex];
	}



//
// CCdlRefs::TIterator
//

EXPORT_C CCdlRefs::TIterator::TIterator(const TIterator& aOther)
: iRefs(aOther.iRefs)
	{
	*this = aOther;
	}

EXPORT_C CCdlRefs::TIterator& CCdlRefs::TIterator::operator++()
	{
	TInt count = iRefs.Count();
	TInt ii;
	for (ii = iIndex+1; ii<count; ++ii)
		{
		if (Match(ii))
			{
			break;
			}
		}
	iIndex = ii;
	return *this;
	}

CCdlRefs::TIterator::TIterator(const CRefs& aRefs, TInt aIndex)
: iRefs(aRefs), iIndex(aIndex)
	{
	}

TBool CCdlRefs::TIterator::Match(TInt /*aIndex*/) const
	{
	return ETrue;
	}


CCdlRefs::TInterfaceIterator::TInterfaceIterator(const CRefs& aRefs, TInt aIndex)
: TIterator(aRefs, aIndex)
	{
	}

TBool CCdlRefs::TInterfaceIterator::Match(TInt aIndex) const
	{
	return iRefs[iIndex].iUid == iRefs[aIndex].iUid;
	}


CCdlRefs::TNameIterator::TNameIterator(const CRefs& aRefs, TInt aIndex)
: TIterator(aRefs, aIndex)
	{
	}

TBool CCdlRefs::TNameIterator::Match(TInt aIndex) const
	{
	return iRefs[iIndex].iName == iRefs[aIndex].iName;	// comparing pointers, not strings
	}



