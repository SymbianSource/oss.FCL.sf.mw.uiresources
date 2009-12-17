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
* Description:  Bump-mapping for effects.
*
*/


// INCLUDE FILES
#include <e32math.h>

#include "AknsRlEffectPluginBumpMap.h"
#include "AknsRlEffectUtil.h"

// CONSTANTS
const TReal KPixelScale = 255.9;

// ====================== TEMPLATED IMPL. OF BUMPMAP ===========================
/**
* Template implementation of BumpMap. Type defines the used data type for
* iterating over the bitmap data. X, R, G and B define the used pixel color bit
* layout.
*/
template<class Type,TInt X, TInt R, TInt G, TInt B>
class AknsRlEffectBumpMap
    {
    public:
    /**
    * @return KErrNone if processing was ok, something else on error.
    */
    static TInt Process( const CFbsBitmap& aTarget,
                         const CFbsBitmap& aSource,
                         const TReal aAzimuth,
                         const TReal aElevation,
                         const TInt aDepth,
                         TAknsRlChannelBlendMode aBlendMode,
                         const TInt aBlendFactor,
                         TUint8* aGrayscale )
        {
        // CFbsBitmap::ScanLineLength returns bytes, determine the scanw when using Type
        TInt scanW  = CFbsBitmap::ScanLineLength( aTarget.SizeInPixels().iWidth,
                                                  aTarget.DisplayMode() ) / sizeof(Type);
        TInt width  = aTarget.SizeInPixels().iWidth;
        TInt height = aTarget.SizeInPixels().iHeight;

        TInt grayW = width + 2;
        TInt grayH = height + 2;

        TInt x, y;

        // Step 1: Grayscale the image
        TInt pitch = scanW - width;
        // The grayscale buffer has that one pixel extra border
        TUint8* buf = aGrayscale + grayW + 1;
        aSource.LockHeap(); // Lock the global bitmap heap
        Type* dataS = reinterpret_cast<Type*>( aSource.DataAddress() );

        for( y=0; y < height; y++ )
            {
            for( x=0; x < width; x++ )
                {
                *buf = AknsRlUtil::Grayscale( AknsRlRgb<Type,X,R,G,B>::R8(*dataS),
                                              AknsRlRgb<Type,X,R,G,B>::G8(*dataS),
                                              AknsRlRgb<Type,X,R,G,B>::B8(*dataS) );
                buf++;
                dataS++;
                }

            // Skip possibly trailing pixels on aSource
            dataS = dataS + pitch;
            buf = buf + 2;
            }

        aSource.UnlockHeap(); // Unlock the global bitmap heap

        // Next, fill the grayscale 1 pixel border by copying the neighbouring
        // pixel values

        // Top row
        buf = aGrayscale + 1;
        for( x=1; x < grayW - 2; x++ )
            {
            *buf = *( buf + grayW );
            buf++;
            }

        // Bottom row
        buf = aGrayscale + grayW * (grayH - 1) + 1;
        for( x=1; x < grayW - 2; x++ )
            {
            *buf = *( buf - grayW );
            buf++;
            }

        // Left column
        buf = aGrayscale + grayW;
        for( y=1; y < grayH - 2; y++ )
            {
            *buf = *( buf + 1 );
            buf = buf + grayW;
            }

        // Right column
        buf = aGrayscale + 2 * grayW - 1;
        for( y=1; y < grayH - 2; y++ )
            {
            *buf = *( buf - 1 );
            buf = buf + grayW;
            }

        // Top left corner
        aGrayscale[ 0 ] = aGrayscale[ grayW + 1 ];
        // Top right corner
        aGrayscale[ grayW - 1 ] = aGrayscale[ 2 * grayW - 2 ];
        // Bottom left corner
        aGrayscale[ (grayH - 1) * grayW ] = aGrayscale[ ((grayH - 2 ) * grayW) + 1];
        // Bottom right corner
        aGrayscale[ (grayH * grayW) - 1 ] = aGrayscale[ (grayH - 2) * grayW + grayW - 2 ];

        // Step 2: Create the bump map by embossing. The embossing routine
        // follows the ANSI C code from the article "Fast Embossing Effects on
        // Raster Image Data" by John Schlag, jfs@kerner.com, in "Graphics Gems
        // IV", Academic Press, 1994

        // Determine the light direction vector
        TReal aziRes, eleRes;
        TInt err;

        err = Math::Cos(aziRes, aAzimuth);
        if( KErrNone != err )
            return err;

        err = Math::Cos(eleRes, aElevation);
        if( KErrNone != err )
            return err;

        TInt lx = TInt( aziRes * eleRes * KPixelScale );

        err = Math::Sin(aziRes, aAzimuth);
        if( KErrNone != err )
            return err;

        TInt ly = TInt( aziRes * eleRes * KPixelScale );

        err = Math::Sin(eleRes, aElevation);
        if( KErrNone != err )
            return err;

        TInt lz = TInt( eleRes * KPixelScale );

        // Determine a constant z of image surface normal
        TInt nz = (6 * 255) / aDepth; // Depth always > 0
        TInt nz2 = nz * nz;
        TInt nzlz = nz * lz;
        TInt nx, ny;
        TInt NdotL;
        TInt shade, root;
        TInt r, g, b;
        TReal sqrt;

        aTarget.LockHeap( ETrue ); // Lock the global bitmap heap
        dataS = reinterpret_cast<Type*>( aSource.DataAddress() );
        Type* dataT = reinterpret_cast<Type*>( aTarget.DataAddress() );

        // The grayscale buffer has that one pixel extra border
        buf = aGrayscale + grayW + 1;

        // We can process the whole source image directly because the
        // grayscale image has 1 pixel extra border (convolution can refer
        // outside the source image dimensions).
        for(y=0; y < height; y++)
            {
            for(x=0; x < width; x++)
                {
                // Do embossing
                nx = *(buf - grayW - 1) + *(buf - 1) + *(buf + grayW - 1) -
                     *(buf - grayW + 1) - *(buf + 1) - *(buf + grayW + 1);
                ny = *(buf + grayW - 1) + *(buf + grayW) + *(buf + grayW + 1) -
                     *(buf - grayW - 1) - *(buf - grayW) - *(buf - grayW + 1);

                if( nx == 0 && ny == 0 )
                    shade = lz;
                else if( (NdotL = nx*lx + ny*ly + nzlz) < 0 )
                    shade = 0;
                else
                    {
                    // Note that the error value is ignored because
                    // nx*nx + ny*ny + nz2 >= 0 always.
                    Math::Sqrt( sqrt, nx*nx + ny*ny + nz2 );
                    root = TInt( sqrt );
                    if( root )
                        shade = NdotL / root;
                    else // Square root was rounded to zero
                        {
                        // ( nx * nx + ny * ny ) is always >= 0. If aDepth is
                        // large enough nz2 will be small enough so that sqrt(
                        // nx*nx + ny*ny + nz2 ) returns < 1.0 and the result
                        // rounds to zero.
                        shade = 255;
                        }
                    }

                if(shade < 0)
                    shade = 0;
                else if(shade > 255)
                    shade = 255;

                // Step 3: Do Channel blending
                r = AknsRlChannelBlend::Blend( aBlendMode,
                                               aBlendFactor,
                                               AknsRlRgb<Type,X,R,G,B>::R8(*dataS),
                                               TUint8( shade ));
                g = AknsRlChannelBlend::Blend( aBlendMode,
                                               aBlendFactor,
                                               AknsRlRgb<Type,X,R,G,B>::G8(*dataS),
                                               TUint8( shade ));
                b = AknsRlChannelBlend::Blend( aBlendMode,
                                               aBlendFactor,
                                               AknsRlRgb<Type,X,R,G,B>::B8(*dataS),
                                               TUint8( shade ));

                AknsRlRgb<Type,X,R,G,B>::SetRgb8(dataT, TUint8(r), TUint8(g), TUint8(b));

                buf++;
                dataS++;
                dataT++;
                }

            buf = buf + 2;
            dataS = dataS + pitch;
            dataT = dataT + pitch;
            }

        aTarget.UnlockHeap( ETrue );

        return KErrNone;
        }
    };

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginBumpMap::CAknsRlEffectPluginBumpMap
// C++ default constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknsRlEffectPluginBumpMap::CAknsRlEffectPluginBumpMap()
    {
    }

// -----------------------------------------------------------------------------
// Destructor
// -----------------------------------------------------------------------------
//
CAknsRlEffectPluginBumpMap::~CAknsRlEffectPluginBumpMap()
    {
    // The user of this plugin should call deactivate eventually...but we
    // delete grayscale buffer here too (just in case)
    delete [] iGrayscale;
    iContext = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginBumpMap::EffectUid
// -----------------------------------------------------------------------------
//
TUid CAknsRlEffectPluginBumpMap::EffectUid() const
    {
    return TUid::Uid( KAknsRlEffectPluginBumpMapUID );
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginBumpMap::Effect
// -----------------------------------------------------------------------------
//
MAknsRlEffect* CAknsRlEffectPluginBumpMap::Effect( const TInt aInterface )
    {
    if( aInterface == KAknsRlEffectPluginInterfaceEffect )
        return this;
    return NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginBumpMap::InitializeL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginBumpMap::InitializeL()
    {
    iContext = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginBumpMap::Release
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginBumpMap::Release()
    {
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginBumpMap::ActivateL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginBumpMap::ActivateL( MAknsRlEffectContext* aContext )
    {
    if( !aContext ) // We absolutely need the context
        {
        User::Leave( KErrArgument );
        }

    iContext = aContext;

    iAzimuth     = 0.0;
    iElevation   = 0.59; // ~34 in degrees
    iDepth       = 10;
    iBlendMode   = EAknsRlChannelBlendNormal;
    iBlendFactor = 255;

    // Because the grayscale image is convoluted we need to create grayscale
    // image that has extra one pixel border.
    TSize size = aContext->LayerSize();
    size.iWidth  = size.iWidth + 2;
    size.iHeight = size.iHeight + 2;

    // Calling activate multiple times in row in unlikely but we delete the
    // grayscale buffer just in case.
    delete [] iGrayscale;
    iGrayscale = NULL;
    iGrayscale = new(ELeave) TUint8[ size.iWidth * size.iHeight ]; //lint !e119 Enough arguments
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginBumpMap::Deactivate
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginBumpMap::Deactivate()
    {
    delete [] iGrayscale;
    iGrayscale = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginBumpMap::SetParametersL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginBumpMap::SetParametersL( MAknsRlParameterIterator& aParameters )
    {
    while( aParameters.HasNext() )
        {
        const TAknsRlParameterData* param = aParameters.NextL();

        // Fetch azimuth value
        if( param->iName->Compare( KAknsRlEffectBumpMapAzimuth ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            if( param->iNumber < 0 || param->iNumber > 360 )
                User::Leave( KErrArgument );

            // Convert from degrees to radians: [0, 360] -> [0, 2 * KPi]
            iAzimuth = (TReal( param->iNumber ) / 360.0) * 2 * KPi;
            }
        // Fetch elevation value
        else if( param->iName->Compare( KAknsRlEffectBumpMapElevation ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            if( param->iNumber < 0 || param->iNumber > 180 )
                User::Leave( KErrArgument );

            // Convert from degrees to radians: [0, 180] -> [0, KPi]
            iElevation = (TReal( param->iNumber ) / 180.0) * KPi;
            }
        // Fetch depth value
        else if( param->iName->Compare( KAknsRlEffectBumpMapDepth ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            if( param->iNumber <= 0 )
                User::Leave( KErrArgument );

            iDepth = param->iNumber;
            }
        // Fetch blend mode value
        else if( param->iName->Compare( KAknsRlEffectBumpMapBlendMode ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            if( param->iNumber < EAknsRlChannelBlendNormal ||
                param->iNumber > EAknsRlChannelBlendBurn )
                User::Leave( KErrArgument );

            iBlendMode = param->iNumber;
            }
        // Fetch blend factor value
        else if( param->iName->Compare( KAknsRlEffectBumpMapBlendFactor ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iBlendFactor = param->iNumber;
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginBumpMap::GetCapabilities
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginBumpMap::GetCapabilities( TAknsRlEffectCaps& aCaps )
    {
    aCaps.iOutputLayerSupport = KAknsRlLayerRGBOnly;
    aCaps.iInputLayerASupport = KAknsRlLayerRGBOnly;
    aCaps.iInputLayerBSupport = KAknsRlLayerNone;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginBumpMap::Render
// -----------------------------------------------------------------------------
//
TInt CAknsRlEffectPluginBumpMap::Render( const TAknsRlRenderOpParam& aParam )
    {
    if( !iContext ) // We absolutely need the context
        {
        return KErrBadHandle;
        }

    // To do anything we need both, the output layer and input layer
    if( ( aParam.iOutputLayerStatus & KAknsRlLayerRGBOnly ) &&
        ( aParam.iInputLayerAStatus & KAknsRlLayerRGBOnly ) )
        {
        // Query the layers, uninitialized because we process the whole image
        TAknsRlLayerData dataTarget;
        TRAPD( err, iContext->GetLayerDataL( dataTarget, aParam.iOutputLayerIndex,
                                             aParam.iOutputLayerStatus, EFalse ) );
        if( KErrNone != err )
            return KErrArgument;

        TAknsRlLayerData dataSource;
        TRAP( err, iContext->GetLayerDataL( dataSource, aParam.iInputLayerAIndex,
                                            aParam.iInputLayerAStatus, EFalse ) );
        if( KErrNone != err )
            return KErrArgument;

        if( !dataTarget.iRGBBitmap ) // We need the target bitmap
            return KErrBadHandle;

        if( !dataSource.iRGBBitmap ) // We need the source bitmap
            return KErrBadHandle;

        TDisplayMode modeT = dataTarget.iRGBBitmap->DisplayMode();
        TDisplayMode modeS = dataSource.iRGBBitmap->DisplayMode();

        // Rgb -> Rgb modes
        if( EColor64K == modeS && EColor64K == modeT )
            {
            return AknsRlEffectBumpMap<TUint16,0,5,6,5>::Process(
                            *dataTarget.iRGBBitmap,
                            *dataSource.iRGBBitmap,
                            iAzimuth,
                            iElevation,
                            iDepth,
                            TAknsRlChannelBlendMode( iBlendMode ),
                            iBlendFactor,
                            iGrayscale );
            }
        else if( EColor16MU == modeS && EColor16MU == modeT )
            {
            return AknsRlEffectBumpMap<TUint32,8,8,8,8>::Process(
                            *dataTarget.iRGBBitmap,
                            *dataSource.iRGBBitmap,
                            iAzimuth,
                            iElevation,
                            iDepth,
                            TAknsRlChannelBlendMode( iBlendMode ),
                            iBlendFactor,
                            iGrayscale );
            }
        else
            {
            // Provided layers have illegal display mode combination
            return KErrArgument;
            }
        }

    // The else part, required layers were not provided
    return KErrArgument;
    }

// End of File
