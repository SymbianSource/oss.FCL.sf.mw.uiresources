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

#ifndef CDLFONT_CDL
#define CDLFONT_CDL

#include <CdlEngine.h>
#include <cdlfont.cdl.common.h>

namespace CDL_Font
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


// CDL API functions, as defined in cdlfont.cdl

inline TCdlArray<SIdMetricsPair> const& metricsArray()		{ return *(TCdlArray<SIdMetricsPair> const*)(CdlEngine::GetData(KCdlInterfaceUid, EApiId_metricsArray)); }

inline TCdlArray<SLogicalIdMetricsIdPair> const& logicalIdMapArray()		{ return *(TCdlArray<SLogicalIdMetricsIdPair> const*)(CdlEngine::GetData(KCdlInterfaceUid, EApiId_logicalIdMapArray)); }



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

// CDL API functions, as defined in cdlfont.cdl

	inline TCdlArray<SIdMetricsPair> const& metricsArray() const		{ return *(TCdlArray<SIdMetricsPair> const*)(GetData(EApiId_metricsArray)); }

	inline TCdlArray<SLogicalIdMetricsIdPair> const& logicalIdMapArray() const		{ return *(TCdlArray<SLogicalIdMetricsIdPair> const*)(GetData(EApiId_logicalIdMapArray)); }

private:
	CInstance();
	};

} // end of namespace CDL_Font
#endif // CDLFONT_CDL
