/*
* Copyright (c) 2004 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Wrapper class for access to scalable item renderer.
*
*/


#ifndef AKNSRENDERERWRAPPER_H
#define AKNSRENDERERWRAPPER_H

// INCLUDES
#include <AknsItemID.h>

// FORWARD DECLARATIONS
class MAknsSkinInstance;
class CFbsBitmap;

// CLASS DECLARATION

/**
* Utility class that allows access to default renderer for scalable skin items.
*
* This is a static public class with exported members.
*
* @lib AknSkins.lib
*
* @since 2.8
*/
class AknsRendererWrapper
    {
    
    public: // New methods

        /**
        * Renders the given scalable item to a newly constructed bitmap and 
        * mask.
        *
        * @param aSkin Pointer to the skin instance.
        *
        * @param aIID Item ID of the scalable item to be rendered.
        *
        * @param aOutRGB If the method completes successfully, a pointer
        *   to a newly constructed bitmap containing the RGB channel of
        *   the item. The ownership of the bitmap is transferred to the caller.
        *
        * @param aOutAlpha If the method completes successfully, a pointer
        *   to a newly constructed bitmap containing the alpha channel of
        *   the item, or @c NULL. The ownership of the bitmap is transferred
        *   to the caller.
        *
        * @param aRect Position and size of the item in parent coordinate
        *   system. If no parent item is given, use 
        *   @c TRect( TPoint(0,0), yourSize ).
        *
        * @param aInRGB Optional parent element RGB channel bitmap, or @c NULL.
        *
        * @param aInAlpha Optional parent element alpha channel bitmap, 
        *   or @c NULL.
        *
        * @since 2.8
        *
        * @par Exceptions:
        *   If the rendering fails or no scalable item with the given item ID
        *   is found, the method leaves with an error code.
        */ 
        IMPORT_C static void RenderScalableItemL( MAknsSkinInstance* aSkin,
            const TAknsItemID& aIID, CFbsBitmap*& aOutRGB, 
            CFbsBitmap*& aOutAlpha, const TRect& aRect,
            const CFbsBitmap* aInRGB, const CFbsBitmap* aInAlpha );

    private: // Construction and destruction

        AknsRendererWrapper();
        ~AknsRendererWrapper();

    };

#endif // AKNSRENDERERWRAPPER_H
            
// End of File

