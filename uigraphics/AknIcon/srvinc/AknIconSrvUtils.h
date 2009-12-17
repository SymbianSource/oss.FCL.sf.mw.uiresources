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
*
*/


#ifndef AKN_ICON_SRV_UTILS_H
#define AKN_ICON_SRV_UTILS_H

//  INCLUDES
#include <e32base.h>
#include <gdi.h>
#include "AknIconUtils.h"

// CONSTANTS

// FUNCTION PROTOTYPES

// FORWARD DECLARATIONS
class MAknIconFormatHandler;
class CAknIconLoader;
struct TAknIconParams;
// CLASS DECLARATION

/**
* A static utility class.
*/
class AknIconSrvUtils
    { 
    public:

        /**
        * Loads icon data and initializes icon format handler,
        * stores Handler in the handler list
        */
        static TPtrC8 InitIconDataAndHandlerLC(
            CAknIconLoader* aLoader,
            RPointerArray<MAknIconFormatHandler>& aHandlerList,
            MAknIconFormatHandler*& aHandler,
            const TAknIconParams& aParams,
            TBool aAnimated );

        /**
        * Loads icon data and initializes icon format handler.
        */
        static TPtrC8 InitIconDataAndHandlerLC(
            CAknIconLoader* aLoader,
            MAknIconFormatHandler*& aHandler,
            TInt aIconId,
            TBool aAnimated );

        /**
        * Renders a prepared MIF icon according to the given parameters.
        * @ret Content dimensions of the icon.
        */
        static TAknContentDimensions RenderPreparedIconL(
            MAknIconFormatHandler& aHandler,
            CFbsBitmap* aBitmap,
            CFbsBitmap* aMask, // may be NULL
            TDisplayMode aBitmapDepth,
            TDisplayMode aPreferredDepth,
            const TSize& aSize,
            TScaleMode aMode,
            TInt aRotationAngle = 0,
            TRgb aColor = TRgb(0,0,0),
            TInt aBitmapId = 0,
            TInt aMaskId = 0,
            TBool aIsAppIcon = EFalse);

        /**
        * Modifies given size so that the given aspect ratio is preserved.
        */
        static void GetAspectRatioPreservedSize(
            const TAknContentDimensions& aDimensions,
            TSize& aSize );
            
        /**
        * Modifies given size so that the given aspect ratio is preserved.
        * This is a version optimised for using integer numbers as
        * content dimensions.        
        */
        static void GetAspectRatioPreservedSize(
            const TSize& aDimensions,
            TSize& aSize,
            TBool aFitToOriginalSize );            

        /**
        * Scales bitmap icon.
        */
        static TBool ScaleBitmapIconL(
            const TSize& aSize,
            const TScaleMode aMode,
            const TInt aAngle,
            const TRgb aColor,
            CFbsBitmap* aSourceBitmap,
            CFbsBitmap* aSourceMask,
            CFbsBitmap* aTargetBitmap,
            CFbsBitmap* aTargetMask );

				/**
        * Checks the transparency on the bitmap and if required scale the bitmap/mask
        * to give 12% at the bottom of the image/mask bitmap
        */
        static void EnsureValidSizeL(
            CFbsBitmap* aBitmap,
            CFbsBitmap* aMask );
        
        /**
        * Checks the transparency on the bitmap and returns the valid height possible
        * on the bitmap. Valid height means 12% of transparent pixel at the bottom
        */    
        static TInt CheckMaskTransparencyL(const CFbsBitmap* aBmp);
        
        /**
        * Checks the transparency on the bitmap and returns the valid height possible
        * on the bitmap. Valid height means 12% of transparent pixel at the bottom
        */    
        static TInt CheckAlphaTransparencyL(const CFbsBitmap* aBmp);
    private: // Private constructor
        AknIconSrvUtils();
    };

#endif // AKN_ICON_SRV_UTILS_H

// Enf of File
