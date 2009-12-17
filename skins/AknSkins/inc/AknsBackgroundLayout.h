/*
* Copyright (c) 2002-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Defines internal data structures for background layouts.
*
*/


#ifndef AKNSBACKGROUNDLAYOUT_H
#define AKNSBACKGROUNDLAYOUT_H

//  INCLUDES
#include <e32std.h>
#include <AknsItemID.h>
#include <AknsImageAttributeData.h>

// CLASS DECLARATION

/**
* Background information structure for ::EAknsCCOBackground.
*
* This is an internal class that contains no exported functions.
* The class is not intended for derivation outside the library.
*
* @since 2.0
*
* @internal
*/
class TAknsBackground
    {
    public: // Constructor

        /**
        * Default C++ constructor.
        * Initializes background layout structure to values
        *   iRect = (0,0,1,1), iImageID = KAknsIIDNone,
        *   iAttr = KAknsImageAttributeNone,
        *   iParentAbsolute = EFalse, iParentPos = (0,0) and
        *   iSecondLayout = NULL
        *
        * @internal
        */
        TAknsBackground();

    public: // Data

        /**
        * The layout background bitmap area as a rectangle.
        */
        TRect iRect;

        /**
        * Item ID of the image;
        */
        TAknsItemID iImageID;

        /**
        * Attribute overloads (if any) to be applied to background.
        */
        TAknsImageAttributeData iAttr;

        /**
        * Specifies whether absolute parent window coordinates are
        * give in iParentLeft and iParentTop members.
        */
        TBool iParentAbsolute;

        /**
        * The position of the top left corner of the parent window.
        * If iParentAbsolute is ETrue, this value is in absolute
        * screen coordinates. If iParentAbsolute is EFalse, this
        * value must be (0,0).
        */
        TPoint iParentPos;

        /**
        * Pointer to the second layout. No ownership is
        * implied. Default value is NULL.
        */
        TAknsBackground* iNext;

    };

#endif      // AKNSBACKGROUNDLAYOUT_H

// End of File
