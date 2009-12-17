/*
* Copyright (c) 2004-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Skin effect renderer.
*
*/


#ifndef AKNSRLRENDERER_H
#define AKNSRLRENDERER_H

//  INCLUDES
#include "AknsRlCommand.h"
#include "AknsRlErr.h"

/**
* Interface to skin effect renderer.
*
*
* @since 2.8
*/
class MAknsRlRenderer
    {
    public: // Constructors and destructor

        // This interface is not used to control ownership.

    public: // New functions

        /**
        * Renders the item by executing the given command queue.
        *
        * @param aOutRGB Bitmap that will receive the final content of
        *   the output layer RGB channel. This bitmap is created by the method.
        *
        * @param aOutAlpha Bitmap that will receive the final content of
        *   the output alpha channel. This bitmap is created by the method.
        *
        * @param aOutLayerIndex Index of the output layer.
        *
        * @param aCommands Iterator that returns the commands used to
        *   render this element. The commands are executed in the sequence
        *   specified by the iterator. If @c NULL, no command is executed.
        *
        * @param aSize Size of the item.
        *
        * @since 2.8
        */
        virtual TInt RenderItem( CFbsBitmap*& aOutRGB, CFbsBitmap*& aOutAlpha,
            const TInt aOutLayerIndex,
            MAknsRlCommandIterator* aCommands, const TSize& aSize ) =0;

        /**
        * Renders the item on top of existing background by executing the given
        * command queue.
        *
        * @param aOutRGB Bitmap that will receive the final content of
        *   the output layer RGB channel. This bitmap is created by the method.
        *
        * @param aOutAlpha Bitmap that will receive the final content of
        *   the output alpha channel. This bitmap is created by the method.
        *
        * @param aOutLayerIndex Index of the output layer.
        *
        * @param aCommands Iterator that returns the commands used to
        *   render this element. The commands are executed in the sequence
        *   specified by the iterator. If @c NULL, no command is executed.
        *
        * @param aSize Size of the item.
        *
        * @param aInRGB Bitmap containing initial input layer RGB content.
        *
        * @param aInAlpha Bitmap containing initial input layer alpha content.
        *   Must be have @c EGray256 color depth.
        *
        * @param aInRect Rectangle that defines the part of the input bitmaps
        *   (both RGB and alpha) to be used. Must have the same size as
        *   @c aSize.
        *
        * @param aInLayerIndex Index of the input layer. Given input content
        *   will be assigned to this layer.
        *
        * @since 2.8
        */
        virtual TInt RenderItemWithBackground(
            CFbsBitmap*& aOutRGB, CFbsBitmap*& aOutAlpha,
            const TInt aOutLayerIndex,
            MAknsRlCommandIterator* aCommands, const TSize& aSize,
            const CFbsBitmap* aInRGB, const CFbsBitmap* aInAlpha,
            const TRect& aInRect, const TInt aInLayerIndex ) =0;

        /**
        * Gets the display mode that this renderer uses for RGB data.
        *
        * @return Display mode used for RGB data.
        *
        * @since 2.8
        */
        virtual TDisplayMode DisplayMode() =0;
    };

#endif // AKNSRLRENDERER_H

// End of File
