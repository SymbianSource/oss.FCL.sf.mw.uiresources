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
* Description:  Default renderer.
*
*/


#ifndef AKNSRLDEFAULTRENDERER_H
#define AKNSRLDEFAULTRENDERER_H

//  INCLUDES
#include "AknsRlRenderer.h"

// FORWARD DECLARATIONS
class CAknsRlInternalEffectPool;

// CLASS DECLARATION

/**
* Concrete default renderer implementation.
*
* Provides a concrete implementation of MAknsRlRenderer interface
* using the internal efffect pool of the plugins built into the library only.
*
* @since 2.8
*/
NONSHARABLE_CLASS(CAknsRlDefaultRenderer) : public CBase, public MAknsRlRenderer
    {
    private: // Constructors and destructor

        /**
        * Default constructor is private.
        *
        * @since 2.8
        */
        CAknsRlDefaultRenderer(RAknsSrvSession* aSession);

    public: // Constructors and destructor

        /**
        * Static creator.
        *
        * @since 2.8
        */
        IMPORT_C static CAknsRlDefaultRenderer* NewL(RAknsSrvSession* aSession);

        /**
        * Two-phased constructor.
        *
        * @since 2.8
        */
        void ConstructL();

        /**
        * Destructor.
        *
        * @since 2.8
        */
        virtual ~CAknsRlDefaultRenderer();

    public: // From MAknsRlRenderer

        /**
        * @copydoc MAknsRlRenderer::RenderItem
        */
        TInt RenderItem( CFbsBitmap*& aOutRGB, CFbsBitmap*& aOutAlpha,
            const TInt aOutLayerIndex,
            MAknsRlCommandIterator* aCommands,
            const TSize& aSize );

        /**
        * @copydoc MAknsRlRenderer::RenderItemWithBackground
        */
        TInt RenderItemWithBackground(
            CFbsBitmap*& aOutRGB, CFbsBitmap*& aOutAlpha,
            const TInt aOutLayerIndex,
            MAknsRlCommandIterator* aCommands, const TSize& aSize,
            const CFbsBitmap* aInRGB, const CFbsBitmap* aInAlpha,
            const TRect& aInRect, const TInt aInLayerIndex );

        /**
        * @copydoc MAknsRlRenderer::DisplayMode
        */
        TDisplayMode DisplayMode();

    private: // New methods

        void DoRenderItemL( CFbsBitmap*& aOutRGB, CFbsBitmap*& aOutAlpha,
            const TInt aOutputLayerIndex,
            MAknsRlCommandIterator* aCommands,
            const TSize& aSize,
            const CFbsBitmap* aInRGB, const CFbsBitmap* aInAlpha,
            const TRect& aInRect, const TInt aInputLayerIndex );

        void ExecuteCommandsL( MAknsRlCommandIterator* aCommands,
            MAknsRlEffectContext* aContext );

    private: // Data

        CAknsRlInternalEffectPool* iPool;
        RAknsSrvSession* iSkinSrvSession; // not owned

    };

#endif // AKNSRLDEFAULTRENDERER_H

// End of File
