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
* Description:  
*
*
*/


#ifndef __AKNICONCONFIG_H__
#define __AKNICONCONFIG_H__

#include <e32def.h>
#include <gdi.h> // for TDisplayMode
#include <e32cmn.h> // for TUid

class CFbsBitmap;

class AknIconConfig
    {
    public:
        /**
        * A structure to contain the preferred display mode.
        * if the iMaskMode is not applicable to a specific
        * iBitmapMode, iMaskMode is set to ENone.
        */
        struct TPreferredDisplayMode
            {
            TDisplayMode iBitmapMode;
            TDisplayMode iMaskMode;
            };


        /**
        *  Specifies the image types, what can be used to enquire
        *  preferred display modes. 
        */
        enum TImageType
            {
            EImageTypeIcon,
            EImageTypePhoto,
            EImageTypeVideo,
            EImageTypeOffscreen
            };

        /**
        * Gets the preferred displaymode for the given image type. Applications
        * may use the aUid parameter to obtain application specific settings.
        *
        * @param aMode, On return contains the preferred display mode
        *               for bitmap and mask if applicable
        * @param aType  The type of the image to get preferred mode for.
        * @param aUid The application uid if application specific mode is required
        *
        */
        IMPORT_C static void PreferredDisplayMode(TPreferredDisplayMode& aMode, const TImageType aType, const TUid aUid = KNullUid);

        /**
        *  Compresses the given bitmap, if required. The compression may use
        *  whatever compression type if available for bitmaps, or there
        *  may be no compression at all. The uid parameter is used to control
        *  possible application specific compression settings.
        *
        *  @param aBitmap, the bitmap to compress
        *  @param aUid the application uid
        */
        IMPORT_C static void CompressIfPreferred(CFbsBitmap* aBitmap, const TUid aUid = KNullUid);

        /**
        *  Compresses the given bitmap and mask, if required. The compression may use
        *  whatever compression type if available for bitmaps, or there
        *  may be no compression at all. The uid parameter is used to control
        *  possible application specific compression settings.
        *
        *  @param aBitmap, the bitmap to compress
        *  @param aMask, the mask bitmap to compress
        *  @param aUid the application uid.
        */
        IMPORT_C static void CompressIfPreferred(CFbsBitmap* aBitmap, CFbsBitmap* aMask, const TUid aUid = KNullUid);
        
        /**
        * Internal function to perform the actual compression
        */
        static void CompressIfPreferred(CFbsBitmap* aBitmap, CFbsBitmap* aMask, const TInt aValue, const TUid aUid = KNullUid);

		/**
		* Enable or disable the cache.
		* @param aEnable, ETrue to enable icon caching,
		*                 EFalse to disable icon caching and clear the icon cache.
		* @return KErrNone for success or error code from server request.
		*/
		IMPORT_C static TInt EnableAknIconSrvCache(TBool aEnable);
    };


#endif
