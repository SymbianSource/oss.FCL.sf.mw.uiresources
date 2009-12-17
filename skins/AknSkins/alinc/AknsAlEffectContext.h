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
* Description:  Class for providing effect context for effect plugins.
*
*/


#ifndef AKNSALEFFECTCONTEXT_H
#define AKNSALEFFECTCONTEXT_H

// INCLUDES
#include <AknsRlEffectContext.h>

// CONSTANTS
const TInt KAknsAlEffectContextLayerN = 5;

// CLASS DECLARATION
/**
* Internal class for providing effect context for effect plugins used in
* animations. This class is used by AnimatorBmp for managing input/output
* layers during the lifetime of the animator.
*
* @since 3.0
*/
NONSHARABLE_CLASS( CAknsAlEffectContext ):
    public CBase, public MAknsRlEffectContext
    {
    protected: // Protected constructors
        CAknsAlEffectContext();

    public: // New methods

        static CAknsAlEffectContext* NewL();

        ~CAknsAlEffectContext();

        void ConfigureL( const TSize& aSize,
                         TDisplayMode aRgbMode,
                         TInt aInputLayerIndex,
                         TInt aInputLayerMode );

        /// @return May return NULL if the bitmap does not exist.
        CFbsBitmap* RgbBitmap( TInt aLayerIndex ) const;
        /// @return May return NULL if the bitmap does not exist.
        CFbsBitmap* AlphaBitmap( TInt aLayerIndex ) const;

        CFbsBitGc* RgbGc( TInt aIndex ) const;
        CFbsBitGc* AlphaGc( TInt aIndex ) const;

        /**
        * Releases all layers but the output layer.
        */
        void ReleaseInputLayers( TInt aOutputLayerIndex );

        void SetSkinSrvSession( RAknsSrvSession* aSession );

    public: // From MAknsRlEffectContext
        const TSize LayerSize();
        void GetLayerDataL( TAknsRlLayerData& aData, const TInt aLayerIndex,
                            const TInt aLayerStatus, const TBool aInitialize );
        RAknsSrvSession* GetSkinSrvSession();

    private: // New methods

        void CreateIfNeededL( TInt aLayerIndex, const TInt aLayerStatus,
                              TBool aInitialize );
        void ReleaseLayers();
        void ReleaseLayer( TInt aLayerIndex );

    private:
        RAknsSrvSession* iSession; // Referenced only
        TSize iLayerSize;
        TDisplayMode iRgbMode;
        TAknsRlLayerData iLayers[KAknsAlEffectContextLayerN];
    };

#endif // AKNSALEFFECTCONTEXT_H

// End of File
