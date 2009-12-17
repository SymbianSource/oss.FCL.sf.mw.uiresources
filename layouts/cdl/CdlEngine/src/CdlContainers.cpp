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
#include "CCdlEngine.h"

const TInt KCdlGranularity = 4;


//
// CCdlUids
//

EXPORT_C CCdlUids* CCdlUids::NewLC()
	{
	CCdlUids* self = new(ELeave) CCdlUids;
	CleanupStack::PushL(self);
	return self;
	}

EXPORT_C CCdlUids::CCdlUids()
: CArrayFixFlat<TUid>(KCdlGranularity)
	{
	}

EXPORT_C void CCdlUids::AddL(TUid aUid)
	{
	if (FindIndex(aUid) == KErrNotFound)
		AppendL(aUid);
	}

EXPORT_C void CCdlUids::AddL(const CCdlUids& aArray)
	{
	TInt count = aArray.Count();
	for (TInt ii=0; ii<count; ii++)
		{
		TUid uid = aArray[ii];
		AddL(uid);
		}
	}

EXPORT_C void CCdlUids::Remove(const CCdlUids& aArray)
	{
	TInt count = aArray.Count();
	for (TInt ii=0; ii<count; ii++)
		Remove(aArray[ii]);
	}

EXPORT_C void CCdlUids::Remove(TUid aUid)
	{
	TInt index = FindIndex(aUid);
	if (index != KErrNotFound)
		Delete(index);
	}

EXPORT_C TInt CCdlUids::FindIndex(TUid aUid) const
	{
	TInt count = Count();
	for (TInt ii=0; ii<count; ii++)
		{
		if (At(ii) == aUid)
			return ii;
		}
	return KErrNotFound;
	}

EXPORT_C CCdlUids* CCdlUids::IntersectionLC(const CCdlUids& aArray) const
	{
	CCdlUids* array = CCdlUids::NewLC();
	TInt count = aArray.Count();
	for (TInt ii=0; ii<count; ii++)
		{
		TUid uid = aArray[ii];
		if (FindIndex(uid) != KErrNotFound)
			array->AppendL(uid);
		}
	return array;
	}

EXPORT_C void CCdlUids::ImportL(const TDesC8& aDes)
	{
	TInt size = aDes.Size();
	ResizeL(size/sizeof(TUid));
	if (size)
		{
		Mem::Copy(&At(0), aDes.Ptr(), size);
		}
	}

EXPORT_C TPtrC8 CCdlUids::Export() const
	{
	TInt count = Count();
	const TUid* uids = count ? &At(0) : NULL;
	TPtrC8 ptr(reinterpret_cast<const TText8*>(uids), count*sizeof(TUid));
	return ptr;
	}


//
// CCdlNames
//

EXPORT_C CCdlNames* CCdlNames::NewLC()
	{
	CCdlNames* self = new(ELeave) CCdlNames;
	CleanupStack::PushL(self);
	return self;
	}

EXPORT_C CCdlNames::CCdlNames()
: CArrayPtrFlat<HBufC>(KCdlGranularity)
	{
	}

EXPORT_C CCdlNames::~CCdlNames()
	{
	ResetAndDestroy();
	}

EXPORT_C TInt CCdlNames::FindIndex(const TDesC& aName) const
	{
	TInt count = Count();
	for (TInt ii=0; ii<count; ii++)
		{
		HBufC* name = At(ii);
		if (CdlEngine::CompareNames(*name, aName) == 0)
			return ii;
		}

	return KErrNotFound;
	}

EXPORT_C HBufC* CCdlNames::AddL(const TDesC& aName)
	{
	TInt pos = FindIndex(aName);
	if (pos != KErrNotFound)
		return At(pos);

	HBufC* name = aName.AllocLC();
	AppendL(name);
	CleanupStack::Pop(name);
	return name;
	}


EXPORT_C void CCdlNames::ImportL(const TDesC8& aDes)
	{
	TPtrC8 buf(aDes);

	TInt newCount=0;
	CdlUtils::Extract(buf, newCount);
	TInt arrayCount = Count();
	ResizeL(arrayCount + newCount, 0);
	CleanupStack::PushL(TCleanupItem(CleanupImport, this));
	for (TInt ii=0; ii<newCount; ii++)
		{
		TInt size=0;
		CdlUtils::Extract(buf, size);
		TPtrC name((TText*)buf.Ptr(), size/2);
		buf.Set(buf.Mid(size));
		if (FindIndex(name) == KErrNotFound)
			At(arrayCount++) = name.AllocL();
		}
	CleanupStack::Pop();	// cleanup import
	ResizeL(arrayCount);
	}

EXPORT_C HBufC8* CCdlNames::ExportL() const
	{
	HBufC8* buf = ExportLC();
	CleanupStack::Pop(buf);
	return buf;
	}

EXPORT_C HBufC8* CCdlNames::ExportLC() const
	{
	HBufC8* buf = HBufC8::NewLC(sizeof(TInt));

	// names count is first in the export descriptor
	TInt count = Count();
	CdlUtils::AppendLDC(buf, TPckgC<TInt>(count));
	for (TInt ii=0; ii<count; ii++)
		{
		// for each name, place the size of the name, then the name in the export descriptor
		const TDesC& name = *At(ii);
		TInt size = name.Size();
		CdlUtils::AppendLDC(buf, TPckgC<TInt>(size));
		TPtrC8 name8((TText8*)name.Ptr(), size);
		CdlUtils::AppendLDC(buf, name8);
		}

	return buf;
	}

void CCdlNames::CleanupImport(TAny* aThis)
	{
	static_cast<CCdlNames*>(aThis)->DoCleanupImport();
	}

void CCdlNames::DoCleanupImport()
	{
	// count the number of used HBufCs and resize to that size.
	TInt count = Count();
	TInt used;
	for (used=0; used<count; used++)
		if (!At(used))
			break;
	if (used<count)
		ResizeL(used);	// will not leave because array is shrinking
	}
