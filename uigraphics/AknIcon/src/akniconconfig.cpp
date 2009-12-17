/*
* Copyright (c) 2006 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:   Implementation of class AknIconConfig.
*
*/




#include "akniconconfig.h"
#include "AknIconSrvDef.h"
#include "AknIconSrvTlsData.h"
#include "AknIconSrvClient.h"

#include <fbs.h>

// -----------------------------------------------------------------------------
// AknIconConfig::PreferredDisplayMode
// -----------------------------------------------------------------------------
//
EXPORT_C void AknIconConfig::PreferredDisplayMode(TPreferredDisplayMode& aMode, const TImageType aType, const TUid /*aUid*/)
    {
    CAknIconSrvTlsData* data = static_cast<CAknIconSrvTlsData*>( Dll::Tls() );
    switch (aType)
        {
        case EImageTypeIcon:
            {
            aMode.iBitmapMode = data->iInitData.iIconMode;
            aMode.iMaskMode = data->iInitData.iIconMaskMode;
            break;
            }
        case EImageTypePhoto:
            {
            aMode.iBitmapMode = data->iInitData.iPhotoMode;
            aMode.iMaskMode = ENone;
            break;
            }
        case EImageTypeVideo:
            {
            aMode.iBitmapMode = data->iInitData.iVideoMode;
            aMode.iMaskMode = ENone;
            break;
            }
        case EImageTypeOffscreen:
            {
            aMode.iBitmapMode = data->iInitData.iOffscreenMode;
            aMode.iMaskMode = data->iInitData.iOffscreenMaskMode;
            break;
            }
        default:
            {
            aMode.iBitmapMode = EColor64K;
            aMode.iMaskMode = EGray256;
            break;
            }
        }
    }

// -----------------------------------------------------------------------------
// AknIconConfig::CompressIfPreferred
// -----------------------------------------------------------------------------
//
EXPORT_C void AknIconConfig::CompressIfPreferred(CFbsBitmap* aBitmap, const TUid aUid)
    {
    CompressIfPreferred(aBitmap, NULL, aUid);
    }

// -----------------------------------------------------------------------------
// AknIconConfig::CompressIfPreferred
// -----------------------------------------------------------------------------
//
EXPORT_C void AknIconConfig::CompressIfPreferred(CFbsBitmap* aBitmap, CFbsBitmap* aMask, const TUid aUid)
    {
    CAknIconSrvTlsData* data = static_cast<CAknIconSrvTlsData*>( Dll::Tls() );
    CompressIfPreferred(aBitmap, aMask, data->iInitData.iCompression, aUid);
    }
    
// -----------------------------------------------------------------------------
// AknIconConfig::CompressIfPreferred
// -----------------------------------------------------------------------------
//
void AknIconConfig::CompressIfPreferred(CFbsBitmap* aBitmap, CFbsBitmap* aMask, const TInt aValue, const TUid /*aUid*/)
    {
    TBool compression = EFalse;
    TBitmapfileCompressionScheme compressionValue;
    switch (aValue)
        {
        case 0:
            break;
        case 1:
            {
            compression = ETrue;
            compressionValue = ERLECompression;
            break;
            }
        case 2:
            {
            compression = ETrue;
            compressionValue = EPaletteCompression;
            break;
            }
        default:
            break;
        }
        
    if (compression)        
        {
        if (aBitmap)
            {
            aBitmap->CompressInBackground(compressionValue);
            }
        if (aMask)
            {
            aMask->CompressInBackground(compressionValue);
            }
        }
    }
    
    

// -----------------------------------------------------------------------------
// AknIconConfig::EnableAknIconSrvCache
// -----------------------------------------------------------------------------
//
EXPORT_C TInt AknIconConfig::EnableAknIconSrvCache(TBool aEnable)
	{
    RAknIconSrvClient* client = RAknIconSrvClient::GetSession();
    return client->EnableCache(aEnable);
	}
