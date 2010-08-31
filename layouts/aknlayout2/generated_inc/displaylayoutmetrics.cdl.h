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

// It contains the client API.
// It should not be modified manually.

#ifndef DISPLAYLAYOUTMETRICS_CDL
#define DISPLAYLAYOUTMETRICS_CDL

#include <CdlEngine.h>
#include <displaylayoutmetrics.cdl.common.h>

namespace Display_Layout_Metrics
{

class CInstance;

// Standard interface functions 
inline void LoadCustomisationL(const TCdlRef& aRef)                          { CdlEngine::LoadCustomisationL(aRef); }
inline void LoadCustomisationL(const TDesC& aLibName, TInt aInstId)          { TCdlRef ref = { aInstId, { KCdlInterfaceUidValue }, &aLibName }; LoadCustomisationL(ref); }
inline void RequireCustomisationL()                                          { CdlEngine::RequireCustomisationL(&KCdlInterface); }
inline TBool IsCustomisationStarted()                                        { return CdlEngine::IsCustomisationStarted(&KCdlInterface); }
inline const CInstance& CustomisationInstance()                              { return (const CInstance&)(CdlEngine::CustomisationInstance(KCdlInterfaceUid)); }
inline void SetCustomisationChangeObserverL(MCdlChangeObserver* aObserver)   { CdlEngine::SetCustomisationChangeObserverL(aObserver, KCdlInterfaceUid); }

inline const TCdlRef& LastAccessedRef()                                      { return CdlEngine::LastAccessedRef(KCdlInterfaceUid); }
inline void FileNameRelativeToLastAccessedInstance(TFileName& aFileName)     { CdlEngine::FileNameRelativeToLastAccessedInstance(KCdlInterfaceUid, aFileName); }


// CDL API functions, as defined in displaylayoutmetrics.cdl

inline TReal32 UnitValue()		{ return (*(TUnitValue_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_UnitValue)))(); }



class CInstance : public CCdlInstance
	{
public:
	enum { ETypeId = KCdlInterfaceUidValue };

	inline static const CInstance& CustomisationInstance()                                                    { return (const CInstance&)(CdlEngine::CustomisationInstance(KCdlInterfaceUid)); }
	inline static CInstance* NewL(const TCdlRef& aRef, const CCdlInstance* aSubLayer = NULL)                  { return (CInstance*) CCdlInstance::NewL(aRef, &KCdlInterface, aSubLayer); }
	inline static CInstance* NewLC(const TCdlRef& aRef, const CCdlInstance* aSubLayer = NULL)                 { return (CInstance*) CCdlInstance::NewLC(aRef, &KCdlInterface, aSubLayer); }
	inline static CInstance* NewL(const TDesC& aLibName, TInt aImplId, const CCdlInstance* aSubLayer = NULL)  { TCdlRef ref = { aImplId, { KCdlInterfaceUidValue }, &aLibName }; return NewL(ref, aSubLayer); }
	inline static CInstance* NewLC(const TDesC& aLibName, TInt aImplId, const CCdlInstance* aSubLayer = NULL) { TCdlRef ref = { aImplId, { KCdlInterfaceUidValue }, &aLibName }; return NewLC(ref, aSubLayer); }

	inline const CInstance* SubLayer()                                                                        { return static_cast<const CInstance*>(CCdlInstance::SubLayer()); }

// CDL API functions, as defined in displaylayoutmetrics.cdl

	inline TReal32 UnitValue() const		{ return (*(TUnitValue_sig*)(GetFunction(EApiId_UnitValue)))(); }

private:
	CInstance();
	};

} // end of namespace Display_Layout_Metrics
#endif // DISPLAYLAYOUTMETRICS_CDL
