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
* Description:  Provides moving layer(s) functionality.
*
*/


// INCLUDE FILES
#include "AknsRlEffectPluginMovingLayers.h"

// ================= INTERNAL IMPL. OF MOVING LAYERS ===========================
class AknsRlMovingLayers
    {
    public:
    static void RenderTiled( CFbsBitGc& aBitGc,
                         const TInt aX, const TInt aY,
                         const TInt aW, const TInt aH,
                         const CFbsBitmap& aBmp,
                         const CFbsBitmap* aMask=NULL )
        {
        if( 0 == aX && 0 == aY ) // Render 1:1
            {
            if( aMask )
                {
                aBitGc.BitBltMasked( TPoint( 0, 0 ), &aBmp,
                                     TRect( TPoint( 0, 0 ),
                                     TSize( aW, aH ) ),
                                     aMask, EFalse );
                }
            else
                {
                aBitGc.BitBlt( TPoint( 0, 0 ), &aBmp,
                                TRect( TPoint( 0, 0 ),
                                TSize( aW, aH ) ) );
                }
            }
        else // Draw tiled
            {
            /*
            Output        Input
             ---------     ---------
            |4' |3'   |   |1    |2  |
            |---o-----|   |     |   |
            |2' |1'   |   |     |   |
            |   |     |   |     |   |
            |   |     |   |-----o---|
            |   |     |   |3    |4  |
             ---------     ---------

            Output rects:
            1' (     x,     y, w - x, h - y )
            2' (     0,     y,     x, h - y )
            3' (     x,     0, w - x,     y )
            4' (     0,     0,     x,     y )

            Input rects:
            1  (     0,     0, w - x, h - y )
            2  ( w - x,     0,     x, h - y )
            3  (     0, h - y, w - x,     y )
            4  ( w - x, h - y,     x,     y )

            */
            TRect source;

            if( aMask )
                {
                // Target top left ( 4 -> 4' )
                source.SetRect( TPoint( aW - aX, aH - aY ), TSize( aX, aY ) );
                aBitGc.BitBltMasked( TPoint( 0, 0 ), &aBmp, source, aMask, EFalse );
                // Target top right ( 3 -> 3' )
                source.SetRect( TPoint( 0, aH - aY ), TSize( aW - aX, aY ) );
                aBitGc.BitBltMasked( TPoint( aX, 0 ), &aBmp, source, aMask, EFalse );
                // Target bottom left ( 2 -> 2' )
                source.SetRect( TPoint( aW - aX, 0 ), TSize( aX, aH - aY ) );
                aBitGc.BitBltMasked( TPoint( 0, aY ), &aBmp, source, aMask, EFalse );
                // Target bottom right ( 1 -> 1' )
                source.SetRect( TPoint( 0, 0 ), TSize( aW - aX, aH - aY ) );
                aBitGc.BitBltMasked( TPoint( aX, aY ), &aBmp, source, aMask, EFalse );
                }
            else
                {
                // Target top left ( 4 -> 4' )
                source.SetRect( TPoint( aW - aX, aH - aY ), TSize( aX, aY ) );
                aBitGc.BitBlt( TPoint( 0, 0 ), &aBmp, source );
                // Target top right ( 3 -> 3' )
                source.SetRect( TPoint( 0, aH - aY ), TSize( aW - aX, aY ) );
                aBitGc.BitBlt( TPoint( aX, 0 ), &aBmp, source );
                // Target bottom left ( 2 -> 2' )
                source.SetRect( TPoint( aW - aX, 0 ), TSize( aX, aH - aY ) );
                aBitGc.BitBlt( TPoint( 0, aY ), &aBmp, source );
                // Target bottom right ( 1 -> 1' )
                source.SetRect( TPoint( 0, 0 ), TSize( aW - aX, aH - aY ) );
                aBitGc.BitBlt( TPoint( aX, aY ), &aBmp, source );
                }
            }
        }
    };

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginMovingLayers::CAknsRlEffectPluginMovingLayers
// C++ default constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknsRlEffectPluginMovingLayers::CAknsRlEffectPluginMovingLayers()
    {
    }

// -----------------------------------------------------------------------------
// Destructor
// -----------------------------------------------------------------------------
//
CAknsRlEffectPluginMovingLayers::~CAknsRlEffectPluginMovingLayers()
    {
    // The user of this plugin should call deactivate...but we ensure deletion
    // here (just in case).
    DeleteTempBitmap(); //lint !e1551 No exception thrown
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginMovingLayers::EffectUid
// -----------------------------------------------------------------------------
//
TUid CAknsRlEffectPluginMovingLayers::EffectUid() const
    {
    return TUid::Uid( KAknsRlEffectPluginMovingLayersUID );
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginMovingLayers::Effect
// -----------------------------------------------------------------------------
//
MAknsRlEffect* CAknsRlEffectPluginMovingLayers::Effect( const TInt aInterface )
    {
    if( aInterface == KAknsRlEffectPluginInterfaceEffect )
        return this;
    return NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginMovingLayers::InitializeL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginMovingLayers::InitializeL()
    {
    iContext = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginMovingLayers::Release
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginMovingLayers::Release()
    {
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginMovingLayers::ActivateL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginMovingLayers::ActivateL( MAknsRlEffectContext* aContext )
    {
    if( !aContext ) // We absolutely need the context
        {
        User::Leave( KErrArgument );
        }

    iContext = aContext;

    iAx = 0;
    iAy = 0;
    iBx = 0;
    iBy = 0;

    DeleteTempBitmap();
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginMovingLayers::Deactivate
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginMovingLayers::Deactivate()
    {
    DeleteTempBitmap();
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginMovingLayers::SetParametersL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginMovingLayers::SetParametersL( MAknsRlParameterIterator& aParameters )
    {
    // Iterate over available parameters
    while( aParameters.HasNext() )
        {
        const TAknsRlParameterData* param = aParameters.NextL();

        if( param->iName->Compare( KAknsRlEffectMovingLayersAX ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iAx = param->iNumber;
            }
        else if( param->iName->Compare( KAknsRlEffectMovingLayersAY ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iAy = param->iNumber;
            }
        else if( param->iName->Compare( KAknsRlEffectMovingLayersBX ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iBx = param->iNumber;
            }
        else if( param->iName->Compare( KAknsRlEffectMovingLayersBY ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iBy = param->iNumber;
            }
        else if( param->iName->Compare( KAknsRlEffectMovingLayersAXY ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeString || !param->iString )
                User::Leave( KErrArgument );

            if( param->iString->Length() < 2 )
                User::Leave( KErrArgument );

            iAx = (*param->iString)[0];
            iAy = (*param->iString)[1];
            }
        else if( param->iName->Compare( KAknsRlEffectMovingLayersBXY ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeString || !param->iString )
                User::Leave( KErrArgument );

            if( param->iString->Length() < 2 )
                User::Leave( KErrArgument );

            iBx = (*param->iString)[0];
            iBy = (*param->iString)[1];
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginMovingLayers::GetCapabilities
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginMovingLayers::GetCapabilities( TAknsRlEffectCaps& aCaps )
    {
    aCaps.iOutputLayerSupport = KAknsRlLayerRGBOnly;
    aCaps.iInputLayerASupport = KAknsRlLayerRGBOnly;
    aCaps.iInputLayerBSupport = KAknsRlLayerNone | KAknsRlLayerRGBOnly | KAknsRlLayerRGBA;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginMovingLayers::Render
// -----------------------------------------------------------------------------
//
TInt CAknsRlEffectPluginMovingLayers::Render( const TAknsRlRenderOpParam& aParam )
    {
    if( !iContext ) // We absolutely need the context
        {
        return KErrBadHandle;
        }

    TAknsRlLayerData dataT;
    TAknsRlLayerData dataA;
    TAknsRlLayerData dataB;

    // We need the output layer
    if( !( ( aParam.iOutputLayerStatus & KAknsRlLayerRGBOnly ) ||
           ( aParam.iOutputLayerStatus & KAknsRlLayerRGBA ) ) )
        return KErrArgument; // Output must be some sort of RGB layer

    TRAPD( err, iContext->GetLayerDataL( dataT, aParam.iOutputLayerIndex,
                                         aParam.iOutputLayerStatus, EFalse ) );
    if( KErrNone != err )
        return KErrArgument;

    if( !dataT.iRGBGc || !dataT.iRGBBitmap )
        return KErrBadHandle;

    // We need the input layer A
    if( !( ( aParam.iInputLayerAStatus & KAknsRlLayerRGBOnly ) ||
           ( aParam.iInputLayerAStatus & KAknsRlLayerRGBA ) ) )
        return KErrArgument; // Input layer A must be some sort of RGB layer

    TRAP( err, iContext->GetLayerDataL( dataA, aParam.iInputLayerAIndex,
                                        aParam.iInputLayerAStatus, EFalse ) );
    if( KErrNone != err )
        return KErrArgument;

    if( !dataA.iRGBBitmap )
        return KErrBadHandle;

    // Input layer B is optional
    if( ( aParam.iInputLayerBStatus & KAknsRlLayerRGBOnly ) ||
        ( aParam.iInputLayerBStatus & KAknsRlLayerRGBA ) )
        {
        // Input layer B is RGB layer
        TRAP( err, iContext->GetLayerDataL( dataB, aParam.iInputLayerBIndex,
                                            aParam.iInputLayerBStatus, EFalse ) );
        if( KErrNone != err )
            return KErrArgument;

        if( !dataB.iRGBBitmap )
            return KErrBadHandle;
        }

    // If we got this far we have all the required devices for doing rendering.

    // Tiled rendering does not work correctly if one of the input layers is
    // the same as output layer.
    if( ( aParam.iInputLayerAIndex == aParam.iOutputLayerIndex && dataA.iRGBBitmap ) ||
        ( aParam.iInputLayerBIndex == aParam.iOutputLayerIndex && dataB.iRGBBitmap ) )
        {
        if( !iTempBitmap )
            {
            err = CreateTempBitmap( *dataT.iRGBBitmap );
            if( KErrNone != err )
                return err;
            }
        else // Temp bitmap already exists
            {
            // Check if we can reuse the existing bitmap
            if( iTempBitmap->SizeInPixels() == dataT.iRGBBitmap->SizeInPixels() &&
                iTempBitmap->DisplayMode() == dataT.iRGBBitmap->DisplayMode() )
                {
                iTempContext->BitBlt( TPoint( 0, 0 ), dataT.iRGBBitmap );
                }
            else
                {
                DeleteTempBitmap();
                err = CreateTempBitmap( *dataT.iRGBBitmap );
                if( KErrNone != err )
                    return err;
                }
            }
        }

    // Determine real coordinates (we do tiling)
    TSize size = iContext->LayerSize();

    TInt ax = iAx % size.iWidth;
    TInt ay = iAy % size.iHeight;

    if( ax < 0 )
        ax = ax + size.iWidth;
    if( ay < 0 )
        ay = ay + size.iHeight;
    // ax, bx are now in range [0, size.iWidth - 1]

    TInt bx = iBx % size.iWidth;
    TInt by = iBy % size.iHeight;

    if( bx < 0 )
        bx = bx + size.iWidth;
    if( by < 0 )
        by = by + size.iHeight;
    // bx, by are now in range [0, size.iHeight - 1]

    // Render
    if( dataA.iRGBBitmap && !dataB.iRGBBitmap ) // Only A is available
        {
        if( aParam.iInputLayerAIndex == aParam.iOutputLayerIndex  )
            AknsRlMovingLayers::RenderTiled( *dataT.iRGBGc,
                            ax, ay, size.iWidth, size.iHeight,
                            *iTempBitmap );
        else
            AknsRlMovingLayers::RenderTiled( *dataT.iRGBGc,
                            ax, ay, size.iWidth, size.iHeight,
                            *dataA.iRGBBitmap );
        }
    // A, B and mask B available
    else if( dataA.iRGBBitmap && dataB.iRGBBitmap && dataB.iAlphaBitmap )
        {
        if( aParam.iInputLayerAIndex == aParam.iOutputLayerIndex  )
            AknsRlMovingLayers::RenderTiled( *dataT.iRGBGc,
                            ax, ay, size.iWidth, size.iHeight,
                            *iTempBitmap );
        else
            AknsRlMovingLayers::RenderTiled( *dataT.iRGBGc,
                            ax, ay, size.iWidth, size.iHeight,
                            *dataA.iRGBBitmap );

        if( aParam.iInputLayerBIndex == aParam.iOutputLayerIndex  )
            AknsRlMovingLayers::RenderTiled( *dataT.iRGBGc,
                            bx, by, size.iWidth, size.iHeight,
                            *iTempBitmap );
        else
            AknsRlMovingLayers::RenderTiled( *dataT.iRGBGc,
                            bx, by, size.iWidth, size.iHeight,
                            *dataB.iRGBBitmap, dataB.iAlphaBitmap );
        }
    // A and B available, but no mask for B
    else if( dataA.iRGBBitmap && dataB.iRGBBitmap && !dataB.iAlphaBitmap )
        {
        // Render B only
        if( aParam.iInputLayerBIndex == aParam.iOutputLayerIndex  )
            AknsRlMovingLayers::RenderTiled( *dataT.iRGBGc,
                            bx, by, size.iWidth, size.iHeight,
                            *iTempBitmap );
        else
            AknsRlMovingLayers::RenderTiled( *dataT.iRGBGc,
                            bx, by, size.iWidth, size.iHeight,
                            *dataB.iRGBBitmap, dataB.iAlphaBitmap );
        }

    // Clear the target alpha if it exists
    if( dataT.iAlphaGc )
        {
        dataT.iAlphaGc->SetBrushColor( KRgbWhite );
        dataT.iAlphaGc->Clear();
        }

    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginMovingLayers::CreateTempBitmap
// -----------------------------------------------------------------------------
//
TInt CAknsRlEffectPluginMovingLayers::CreateTempBitmap(
    const CFbsBitmap& aBitmap )
    {
    ASSERT( NULL == iTempBitmap );
    ASSERT( NULL == iTempDevice );
    ASSERT( NULL == iTempContext );

    iTempBitmap = new CFbsBitmap(); // OOM returns NULL
    if( !iTempBitmap )
        {
        DeleteTempBitmap();
        return KErrNoMemory;
        }

    TInt err = iTempBitmap->Create( aBitmap.SizeInPixels(), aBitmap.DisplayMode() );
    if( KErrNone != err )
        {
        DeleteTempBitmap();
        return err;
        }

    TRAP( err, iTempDevice = CFbsBitmapDevice::NewL( iTempBitmap ) );
    if( KErrNone != err )
        {
        DeleteTempBitmap();
        return err;
        }

    err = iTempDevice->CreateContext( iTempContext );
    if( KErrNone != err )
        {
        DeleteTempBitmap();
        return err;
        }

    // Temp bitmap and related objects created ok, just render the temp bitmap.
    iTempContext->BitBlt( TPoint( 0, 0 ), &aBitmap );

    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginMovingLayers::DeleteTempBitmap
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginMovingLayers::DeleteTempBitmap()
    {
    delete iTempBitmap;
    iTempBitmap  = NULL;
    delete iTempDevice;
    iTempDevice  = NULL;
    delete iTempContext;
    iTempContext = NULL;
    }

// End of File

