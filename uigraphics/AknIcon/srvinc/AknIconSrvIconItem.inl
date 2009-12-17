/*
* Copyright (c) 2002 Nokia Corporation and/or its subsidiary(-ies).
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



// INCLUDE FILES

#include <e32std.h>

// CONSTANTS

// ================= MEMBER FUNCTIONS ==========================================

// -----------------------------------------------------------------------------
// CAknIconSrvIconItem::IsCached()
// -----------------------------------------------------------------------------
//
inline TBool CAknIconSrvIconItem::IsCached() const
    {
    return iModeAndFlags & EFlagCached;
    }

// -----------------------------------------------------------------------------
// CAknIconSrvIconItem::SetCached()
// -----------------------------------------------------------------------------
//
inline void CAknIconSrvIconItem::SetCached()
    {
    iModeAndFlags |= EFlagCached;
    }

// -----------------------------------------------------------------------------
// CAknIconSrvIconItem::ClearCached()
// -----------------------------------------------------------------------------
//
inline void CAknIconSrvIconItem::ClearCached()
    {
    iModeAndFlags &= ~EFlagCached;
    }

// -----------------------------------------------------------------------------
// CAknIconSrvIconItem::IsPermanentlyCached()
// -----------------------------------------------------------------------------
//
inline TBool CAknIconSrvIconItem::IsPermanentlyCached() const
    {
    return iModeAndFlags & EFlagPermanentlyCached;
    }

// -----------------------------------------------------------------------------
// CAknIconSrvIconItem::SetPermanentlyCached()
// -----------------------------------------------------------------------------
//
inline void CAknIconSrvIconItem::SetPermanentlyCached()
    {
    iModeAndFlags |= EFlagPermanentlyCached;
    }

// -----------------------------------------------------------------------------
// CAknIconSrvIconItem::ClearPermanentlyCached()
// -----------------------------------------------------------------------------
//
inline void CAknIconSrvIconItem::ClearPermanentlyCached()
    {
    iModeAndFlags &= ~EFlagPermanentlyCached;
    }

// -----------------------------------------------------------------------------
// CAknIconSrvIconItem::IsCachedFromSkin()
// -----------------------------------------------------------------------------
//
inline TBool CAknIconSrvIconItem::IsCachedFromSkin() const
    {
    return iModeAndFlags & EFlagCachedFromSkin;
    }

// -----------------------------------------------------------------------------
// CAknIconSrvIconItem::SetCachedFromSkin()
// -----------------------------------------------------------------------------
//
inline void CAknIconSrvIconItem::SetCachedFromSkin()
    {
    iModeAndFlags |= EFlagCachedFromSkin;
    }

// -----------------------------------------------------------------------------
// CAknIconSrvIconItem::ClearCachedFromSkin()
// -----------------------------------------------------------------------------
//
inline void CAknIconSrvIconItem::ClearCachedFromSkin()
    {
    iModeAndFlags &= ~EFlagCachedFromSkin;
    }

// -----------------------------------------------------------------------------
// CAknIconSrvIconItem::IsMbmIcon()
// -----------------------------------------------------------------------------
//
inline TBool CAknIconSrvIconItem::IsMbmIcon() const
    {
    return iModeAndFlags & EFlagMbmIcon;
    }

// -----------------------------------------------------------------------------
// CAknIconSrvIconItem::SetMbmIcon()
// -----------------------------------------------------------------------------
//
inline void CAknIconSrvIconItem::SetMbmIcon()
    {
    iModeAndFlags |= EFlagMbmIcon;
    }

// -----------------------------------------------------------------------------
// CAknIconSrvIconItem::IsExcludedFromCache()
// -----------------------------------------------------------------------------
//
inline TBool CAknIconSrvIconItem::IsExcludedFromCache() const
    {
    return iModeAndFlags & EFlagExcludeFromCache;
    }

// -----------------------------------------------------------------------------
// CAknIconSrvIconItem::ExcludeFromCache()
// -----------------------------------------------------------------------------
//
inline void CAknIconSrvIconItem::ExcludeFromCache()
    {
    iModeAndFlags |= EFlagExcludeFromCache;
    }    
    
// -----------------------------------------------------------------------------
// CAknIconSrvIconItem::IsCompressionDisabled()
// -----------------------------------------------------------------------------
//    
inline TBool CAknIconSrvIconItem::IsCompressionDisabled() const
    {
    return iModeAndFlags & EFlagDisableCompression;
    }   
    
// -----------------------------------------------------------------------------
// CAknIconSrvIconItem::DisableCompression()
// -----------------------------------------------------------------------------
// 
inline void CAknIconSrvIconItem::DisableCompression()
    {
    iModeAndFlags |= EFlagDisableCompression;
    }        
//  End of File  
