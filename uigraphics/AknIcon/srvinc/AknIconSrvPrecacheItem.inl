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
#include "AknIconSrvDef.h"

// CONSTANTS

// ================= MEMBER FUNCTIONS ==========================================

// -----------------------------------------------------------------------------
// CAknIconSrvPrecacheItem::FileName
// -----------------------------------------------------------------------------
//
inline const TDesC& CAknIconSrvPrecacheItem::FileName() const
    {
    if ( iFileNameRef )
        {
        return *iFileNameRef;
        }

    if ( iSkinnedIconFile )
        {
        return *iSkinnedIconFile;
        }

    return *iFallbackIconFile;
    }

// -----------------------------------------------------------------------------
// CAknIconSrvPrecacheItem::GetFullFileName
// -----------------------------------------------------------------------------
//
inline void CAknIconSrvPrecacheItem::GetFullFileName( TDes& aFileName ) const
    {
    if ( iFileNameRef )
        {
        aFileName = *iFileNameRef;
        }
    else if ( iSkinnedIconFile )
        {
        if ( iFlags & EFlagDefaultIconDirSkinned )
            {
            aFileName = KAknIconDefaultDir;
            }
        aFileName.Append( *iSkinnedIconFile );
        }
    else
        {
        if ( iFlags & EFlagDefaultIconDirFallback )
            {
            aFileName = KAknIconDefaultDir;
            }
        aFileName.Append( *iFallbackIconFile );
        }
    }

// -----------------------------------------------------------------------------
// CAknIconSrvPrecacheItem::IsSkinned
// -----------------------------------------------------------------------------
//
inline TBool CAknIconSrvPrecacheItem::IsSkinned() const
    {
    return iSkinIdMajor != -1 || iSkinIdMinor != -1;
    }

//  End of File  
