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
#include "CdlExplorer.h"
#include "CdlRefs.h"

const TInt KGranularity = 4;

NONSHARABLE_CLASS(CInstArray) : public CArrayPtrFlat<CCdlInstance>
	{
public:
	CInstArray();
	~CInstArray();
	};

CInstArray::CInstArray()
: CArrayPtrFlat<CCdlInstance>(KGranularity)
	{
	}

CInstArray::~CInstArray()
	{
	ResetAndDestroy();
	}

//
// CCdlInstanceExplorerBase
//

EXPORT_C CCdlInstanceExplorerBase::~CCdlInstanceExplorerBase()
	{
	delete iSubLayer;
	}

EXPORT_C CArrayPtr<CCdlInstance>* CCdlInstanceExplorerBase::FindLC(TUid aCdlUid)
	{
	CArrayPtr<CCdlInstance>* insts = new(ELeave) CInstArray;
	CleanupStack::PushL(insts);

	// first try to add instances giving them no sublayer & record best found along the way
	CCdlRefs* refs = CdlEngine::FindInstancesLC(aCdlUid);

	CCdlRefs::TIterator pRef = refs->Begin();
	// if we don't have a sub-layer, find one and remove refs that we manage to load
	if (!iSubLayer)
		{
		for (; pRef != refs->End();)
			{
			TCdlRef ref = *pRef;
			TRAPD(err, TryAddL(ref, NULL, insts));
			if (!err)
				{
				// try to create instance without validity check to see if it's a good sub-layer
				CCdlInstance* sub = NULL;
				TRAP_IGNORE({sub = CreateInstanceLC(ref, NULL); CleanupStack::Pop();});
				if (sub)
					{
					if (!iSubLayer || iSubLayer->Interface().iApiSize < sub->Interface().iApiSize)
						{
						delete iSubLayer;
						iSubLayer = sub;
						}
					else
						{
						delete sub;
						}
					}
				// delete good refs from the array, so that instances aren't loaded twice
				refs->Delete(pRef);		// Delete moves pRef to next entry
				}
			else
				{
				// leave failed refs in the array for retry
				++pRef;
				}
			}
		}

	// try to add the instances that failed first time around
	for (pRef = refs->Begin(); pRef != refs->End(); ++pRef)
		{
		TRAP_IGNORE(TryAddL(*pRef, iSubLayer, insts));
		}

	CleanupStack::PopAndDestroy(refs);

	return insts;
	}

void CCdlInstanceExplorerBase::TryAddL(const TCdlRef& aRef, const CCdlInstance* aSubLayer, CArrayPtr<CCdlInstance>* aInstances)
	{
	CCdlInstance* inst = CreateInstanceLC(aRef, aSubLayer);
	if (!CallIsValid(*inst))
		{
		CleanupStack::PopAndDestroy(inst);
		return;
		}

	TInt count = aInstances->Count();
	for (TInt ii=0; ii<count; ii++)
		{
		CCdlInstance*& otherInst = aInstances->At(ii);
		switch (CallCompare(*otherInst, *inst))
			{
			case ECdlInstancesNotComparable:
				break;

			case EFirstCdlInstanceBetter:
				{
				// a better instance already exists
				CleanupStack::PopAndDestroy(inst);
				return;
				}

			case ESecondCdlInstanceBetter:
			default:
				{
				// replace the existing instance
				delete otherInst;
				otherInst = inst;
				CleanupStack::Pop(inst);
				return;
				}
			}
		}

	// No comparable instance has been found - add this
	aInstances->AppendL(inst);
	CleanupStack::Pop(inst);
	}



//
// CdlExplorerUtils
//

EXPORT_C CCdlRefs* CdlExplorerUtils::CreateRefsLC(const CCdlInstance& aSingleInstance)
	{
	CCdlRefs* refs = CCdlRefs::NewLC();
	refs->AppendL(aSingleInstance.Ref());
	return refs;
	}

EXPORT_C CCdlRefs* CdlExplorerUtils::CreateRefsLC(const CCdlInstance& aHomeInstance, const TCdlArray<TCdlRef>& aRefs)
	{
	CCdlRefs* refs = CCdlRefs::NewLC();
	refs->AppendL(*aHomeInstance.Ref().iName, aRefs);
	return refs;
	}




