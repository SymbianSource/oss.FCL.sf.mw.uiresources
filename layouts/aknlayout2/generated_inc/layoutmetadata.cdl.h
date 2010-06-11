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

#ifndef LAYOUTMETADATA_CDL
#define LAYOUTMETADATA_CDL

#include <CdlEngine.h>
#include <layoutmetadata.cdl.common.h>

namespace Layout_Meta_Data
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


// CDL API functions, as defined in layoutmetadata.cdl

inline TBool IsLandscapeOrientation()		{ return (*(TIsLandscapeOrientation_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_IsLandscapeOrientation)))(); }

inline TBool IsMirrored()		{ return (*(TIsMirrored_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_IsMirrored)))(); }

inline TBool IsScrollbarEnabled()		{ return (*(TIsScrollbarEnabled_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_IsScrollbarEnabled)))(); }

inline TBool IsAPAC()		{ return (*(TIsAPAC_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_IsAPAC)))(); }

inline TBool IsPenEnabled()		{ return (*(TIsPenEnabled_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_IsPenEnabled)))(); }

inline TBool IsListStretchingEnabled()		{ return (*(TIsListStretchingEnabled_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_IsListStretchingEnabled)))(); }

inline TBool IsMSKEnabled()		{ return (*(TIsMSKEnabled_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_IsMSKEnabled)))(); }

inline TBool IsTouchPaneEnabled()		{ return (*(TIsTouchPaneEnabled_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_IsTouchPaneEnabled)))(); }



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

// CDL API functions, as defined in layoutmetadata.cdl

	inline TBool IsLandscapeOrientation() const		{ return (*(TIsLandscapeOrientation_sig*)(GetFunction(EApiId_IsLandscapeOrientation)))(); }

	inline TBool IsMirrored() const		{ return (*(TIsMirrored_sig*)(GetFunction(EApiId_IsMirrored)))(); }

	inline TBool IsScrollbarEnabled() const		{ return (*(TIsScrollbarEnabled_sig*)(GetFunction(EApiId_IsScrollbarEnabled)))(); }

	inline TBool IsAPAC() const		{ return (*(TIsAPAC_sig*)(GetFunction(EApiId_IsAPAC)))(); }

	inline TBool IsPenEnabled() const		{ return (*(TIsPenEnabled_sig*)(GetFunction(EApiId_IsPenEnabled)))(); }

	inline TBool IsListStretchingEnabled() const		{ return (*(TIsListStretchingEnabled_sig*)(GetFunction(EApiId_IsListStretchingEnabled)))(); }

	inline TBool IsMSKEnabled() const		{ return (*(TIsMSKEnabled_sig*)(GetFunction(EApiId_IsMSKEnabled)))(); }

	inline TBool IsTouchPaneEnabled() const		{ return (*(TIsTouchPaneEnabled_sig*)(GetFunction(EApiId_IsTouchPaneEnabled)))(); }

private:
	CInstance();
	};

} // end of namespace Layout_Meta_Data
#endif // LAYOUTMETADATA_CDL
