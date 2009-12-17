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
* Description:  Pictograph factory.
*                Creates pictographs according to definition table.
*
*
*/


#ifndef AKN_PICTOGRAPH_FACTORY_H
#define AKN_PICTOGRAPH_FACTORY_H

// INCLUDES

#include "AknPictographConstants.h"
#include "AknPictographDrawerInterface.h"
#include <e32std.h>

// CONSTANTS

// FORWARD DECLARATIONS
struct TAknPictographData;
class CFont;
class CFbsBitmapDevice;
class CFbsBitmap;
class CFbsBitGc;

// CLASS DECLARATION

/**
* Pictograph factory.
* Used for retrieving pictograph definitions.
* Only this class accesses the pictograph definition tables.
*/
NONSHARABLE_CLASS(AknPictographFactory)
	{
    public: // New functions

        static HBufC* SupportedPictographCodesL();

        static TInt StaticPictographData( 
            TText aCode,
            TAknPictographHeight aHeight,
            TAknPictographData& aData );

        static TInt AnimatedPictographData(
            TText aCode,
            TAknPictographHeight aHeight,
            TUint aCounter,
            TAknPictographData& aData );

        static const TAknStaticPictographDefinition* StaticPictographTable();
        static const TAknAnimatedPictographDefinition* AnimatedPictographTable();


       /**
        * Loads the bitmaps and masks for the supported heights to allocated array objects.
        * The array objects are returned and owned by the caller.
        *
        * A bitmap can be looked up for a given height using indexes returned by function
        * GetArrayIndexForHeight.
        *
        * @since 2.8
        * @param aBitmaps stores the loaded bitmaps for the supported heights
        * @param aMasks stores the loaded masks for the bitmaps for the supported heights
        */
        static void LoadBitmapsL(
            RPointerArray<CFbsBitmap>*& aBitmaps,
            RPointerArray<CFbsBitmap>*& aMasks
            );

       /**
        * Gets an array index for a supported height value. This index can be used
        * to access data specific to a given height in arrays.
        *
        * @since 2.8
        * @param aHeight Pictograph height.
        * @param aIndex returns the array index if the call is successful
        * @return KErrNone if aHeight is supported otherwise returns KErrNotSupported
        */
        static TInt GetArrayIndexForHeight(
            TAknPictographHeight aHeight,
            TUint& aIndex
            );

       /**
        * Tries to find a matching pictograph height for a given font.
        *
        * @since 2.8
        * @param aFont Used font.
        * @param aHeight Pictograph height.
        * @return KErrNone if a supported pictograph height is found that matches
        *         aFont otherwise returns KErrNotSupported
        */
        static TInt SelectPictographHeightForFont(
            const CFont& aFont,
            TAknPictographHeight& aHeight
            );

        /**
        * Creates white bitmaps to be used when drawing pictographs in EDrawingModeWhite mode.
        * The objects are returned and owned by the caller.
        * aMaskGc should be used to copy the actual pictograph mask to aMask before drawing
        * the pictograph.
        *
        *
        * @since 2.8
        * @param aBitmap white bitmap
        * @param aBitmap white bitmap mask
        * @param aMaskBitmapDevice bitmap device for aBitmap
        * @param aMaskGc graphics context for aBitmap
        */
        static void CreateWhiteBitmapsL(
            CFbsBitmap*& aBitmap,
            CFbsBitmap*& aMask,
            CFbsBitmapDevice*& aMaskBitmapDevice,
            CFbsBitGc*& aMaskGc
            );

    private:

        /**
        * C++ default constructor.
        */
        AknPictographFactory();
    };

#endif      // AKN_PICTOGRAPH_FACTORY_H

// End of File
