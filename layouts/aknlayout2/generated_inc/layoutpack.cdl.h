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

#ifndef LAYOUTPACK_CDL
#define LAYOUTPACK_CDL

#include <CdlEngine.h>
#include <layoutpack.cdl.common.h>

namespace LayoutPack
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


// CDL API functions, as defined in layoutpack.cdl

//
// Primary layout identification data
//
// The name of this layout
inline TDesC const& name()		{ return *(TDesC const*)(CdlEngine::GetData(KCdlInterfaceUid, EApiId_name)); }

// Screen size that this layout works in
inline TSize const& size()		{ return *(TSize const*)(CdlEngine::GetData(KCdlInterfaceUid, EApiId_size)); }

// The type of layout, eg ELAF, ABRW, APAC
inline TAknLayoutId const& id()		{ return *(TAknLayoutId const*)(CdlEngine::GetData(KCdlInterfaceUid, EApiId_id)); }

// related layout instances
inline TCdlArray<TCdlRef> const& contents()		{ return *(TCdlArray<TCdlRef> const*)(CdlEngine::GetData(KCdlInterfaceUid, EApiId_contents)); }

// The zoom level that is present in this layout
inline TAknUiZoom const& zoom()		{ return *(TAknUiZoom const*)(CdlEngine::GetData(KCdlInterfaceUid, EApiId_zoom)); }

// A hash of the screen style name that this layout works in
inline TInt const& styleHash()		{ return *(TInt const*)(CdlEngine::GetData(KCdlInterfaceUid, EApiId_styleHash)); }

// the priority of this pack, instances in packs with the lowest priority will be added to the layout stack first
inline TInt const& priority()		{ return *(TInt const*)(CdlEngine::GetData(KCdlInterfaceUid, EApiId_priority)); }

// if this is non-zero, then this pack will only be loaded into an application whose Secure UID matches this
inline TInt const& appUid()		{ return *(TInt const*)(CdlEngine::GetData(KCdlInterfaceUid, EApiId_appUid)); }



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

// CDL API functions, as defined in layoutpack.cdl

	//
	// Primary layout identification data
	//
	// The name of this layout
	inline TDesC const& name() const		{ return *(TDesC const*)(GetData(EApiId_name)); }

	// Screen size that this layout works in
	inline TSize const& size() const		{ return *(TSize const*)(GetData(EApiId_size)); }

	// The type of layout, eg ELAF, ABRW, APAC
	inline TAknLayoutId const& id() const		{ return *(TAknLayoutId const*)(GetData(EApiId_id)); }

	// related layout instances
	inline TCdlArray<TCdlRef> const& contents() const		{ return *(TCdlArray<TCdlRef> const*)(GetData(EApiId_contents)); }

	// The zoom level that is present in this layout
	inline TAknUiZoom const& zoom() const		{ return *(TAknUiZoom const*)(GetData(EApiId_zoom)); }

	// A hash of the screen style name that this layout works in
	inline TInt const& styleHash() const		{ return *(TInt const*)(GetData(EApiId_styleHash)); }

	// the priority of this pack, instances in packs with the lowest priority will be added to the layout stack first
	inline TInt const& priority() const		{ return *(TInt const*)(GetData(EApiId_priority)); }

	// if this is non-zero, then this pack will only be loaded into an application whose Secure UID matches this
	inline TInt const& appUid() const		{ return *(TInt const*)(GetData(EApiId_appUid)); }

private:
	CInstance();
	};

} // end of namespace LayoutPack
#endif // LAYOUTPACK_CDL
