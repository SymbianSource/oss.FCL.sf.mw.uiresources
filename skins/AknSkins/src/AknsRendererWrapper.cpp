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
* Description:  Wrapper class for access to scalable item renderer.
*
*/


// INCLUDE FILES
#include "AknsCppPreface.h"

#include <AknsRendererWrapper.h>

#include "AknsScalabilityUtils.h"
#include "AknsRlRenderer.h"
#include "AknsDebug.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// AknsRendererWrapper::RenderScalableItemL
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void AknsRendererWrapper::RenderScalableItemL(
    MAknsSkinInstance* aSkin, const TAknsItemID& aIID, CFbsBitmap*& aOutRGB,
    CFbsBitmap*& aOutAlpha, const TRect& aRect,
    const CFbsBitmap* aInRGB, const CFbsBitmap* aInAlpha )
    {
    if( !aSkin ) User::Leave( KErrArgument );

    CAknsAppSkinInstance* appSkin = static_cast<CAknsAppSkinInstance*>(aSkin);

    TAknsItemID realIID =
        AknsScalabilityUtils::ConcreteEffectQueue( appSkin, aIID );
    if( realIID == KAknsIIDNone )
        {
        // No such item
        User::Leave( KErrNotFound );
        }

    CAknsEffectQueueItemData* queue = static_cast<CAknsEffectQueueItemData*>(
        appSkin->GetCachedItemData( realIID, EAknsITEffectQueue ) );
    if( !queue )
        {
        // No such item
        User::Leave( KErrNotFound );
        }

    MAknsRlRenderer* renderer = appSkin->DefaultRenderer();

    MAknsRlCommandIterator* commands =
        queue->CreateCommandIteratorL();
    CleanupStack::PushL( TCleanupItem(
        MAknsRlCommandIterator::CleanupOperation, commands ) ); // (1)
    TInt inputLayer = queue->InputLayer();
    TInt outputLayer = queue->OutputLayer();

    // Bitmap and mask being created, no leaves allowed
    TInt rendererErr = KErrNone;
    CFbsBitmap* bitmap = NULL;
    CFbsBitmap* alpha = NULL;
    if( aInRGB || aInAlpha )
        {
        rendererErr = renderer->RenderItemWithBackground(
            bitmap, alpha, outputLayer, commands, aRect.Size(),
            aInRGB, aInAlpha, aRect, inputLayer );
        }
    else
        {
        rendererErr = renderer->RenderItem(
            bitmap, alpha, outputLayer, commands, aRect.Size() );
        }
    if( rendererErr )
        {
        // Leave is safe (bitmaps not created)
        User::Leave( rendererErr );
        }
    CleanupStack::PopAndDestroy(); // commands (0)

    // Drop alpha, if RGB only
    if( queue->OutputLayerMode() == KAknsRlLayerRGBOnly )
        {
        delete alpha;
        alpha = NULL;
        }

    // Ownership transfer
    aOutRGB = bitmap;
    aOutAlpha = alpha;
    }

//  End of File

