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
* Description:  Grayscales images.
*
*/


// INCLUDE FILES
#include "AknsRlEffectPluginGrayscale.h"
#include "AknsRlEffectUtil.h"

// =============== TEMPLATE IMPS. OF GRAYSCALE =================================
/**
* Template implementation of Grayscale. Type defines the used data type for
* iterating over the bitmap data. X, R, G and B define the used pixel color bit
* layout.
*/
template<class Type,TInt X, TInt R, TInt G, TInt B>
class AknsRlEffectGrayscale
    {
    public:
    //------------------------------------------------------------------------
    static void ProcessRgbToRgb( const CFbsBitmap& aTarget,
                                 const CFbsBitmap& aSource,
                                 const TInt aMin,
                                 const TInt aMax,
                                 const TInt aBlendFactor )
        {
        // ScanLineLength returns bytes, but width must match the Type
        TInt width = CFbsBitmap::ScanLineLength( aSource.SizeInPixels().iWidth,
                                                 aSource.DisplayMode() ) / sizeof(Type);
        TInt height = aSource.SizeInPixels().iHeight;

        TInt pixelCount = width * height;
        TInt shade;
        TInt r,g,b;

        aTarget.LockHeap( ETrue ); // Lock the global bitmap heap
        Type* dataT = reinterpret_cast<Type*>( aTarget.DataAddress() );
        Type* dataS = reinterpret_cast<Type*>( aSource.DataAddress() );

        for( TInt index = 0; index < pixelCount; ++index )
            {
            r = AknsRlRgb<Type,X,R,G,B>::R8(*dataS);
            g = AknsRlRgb<Type,X,R,G,B>::G8(*dataS);
            b = AknsRlRgb<Type,X,R,G,B>::B8(*dataS);

            shade = AknsRlUtil::Grayscale( TUint8(r), TUint8(g), TUint8(b) );

            // Scale the shade to range [aMin, aMax], note that
            // (aMax - aMin) * shade is always >= 0
            shade = aMin + ( ((aMax - aMin) * shade) >> 8 );

            // Exposure blending
            // Note: It is assumed that arithmetic shifting is supported
            // -> negative values are shifted correctly
            r = ( shade * aBlendFactor + (255 - aBlendFactor) * r ) >> 8;
            g = ( shade * aBlendFactor + (255 - aBlendFactor) * g ) >> 8;
            b = ( shade * aBlendFactor + (255 - aBlendFactor) * b ) >> 8;

            if( r < 0 ) r = 0; else if( r > 255 ) r = 255;
            if( g < 0 ) g = 0; else if( g > 255 ) g = 255;
            if( b < 0 ) b = 0; else if( b > 255 ) b = 255;

            AknsRlRgb<Type,X,R,G,B>::SetRgb8( dataT, TUint8(r), TUint8(g), TUint8(b) );

            dataT++;
            dataS++;
            }

        aTarget.UnlockHeap( ETrue ); // Unlock the global bitmap heap
        }

    //------------------------------------------------------------------------
    static void ProcessRgbToGray( const CFbsBitmap& aTarget,
                                  const CFbsBitmap& aSource,
                                  const TInt aMin,
                                  const TInt aMax )
        {
        TInt width  = aSource.SizeInPixels().iWidth;
        TInt height = aSource.SizeInPixels().iHeight;

        // ScanLineLength returns bytes, but width must match the Type
        TInt scanT  = CFbsBitmap::ScanLineLength(width, aTarget.DisplayMode());
        TInt scanS  = CFbsBitmap::ScanLineLength(width, aSource.DisplayMode()) / sizeof(Type);

        TInt shade;

        TInt pitchT = scanT - width;
        TInt pitchS = scanS - width;

        aTarget.LockHeap( ETrue ); // Lock the global bitmap heap
        TUint8* dataT = reinterpret_cast<TUint8*>( aTarget.DataAddress() );
        Type* dataS = reinterpret_cast<Type*>( aSource.DataAddress() );

        TInt x, y;
        for( y=0; y < height; y++ )
            {
            for( x=0; x < width; x++ )
                {
                shade = AknsRlUtil::Grayscale( AknsRlRgb<Type,X,R,G,B>::R8(*dataS),
                                               AknsRlRgb<Type,X,R,G,B>::G8(*dataS),
                                               AknsRlRgb<Type,X,R,G,B>::B8(*dataS) );

                // Scale the shade to range [aMin, aMax], note that
                // (aMax - aMin) * shade is always >= 0
                *dataT = TUint8( aMin + ( ((aMax - aMin) * shade) >> 8 ) );

                dataT++;
                dataS++;
                }

            dataT = dataT + pitchT;
            dataS = dataS + pitchS;
            }

        aTarget.UnlockHeap( ETrue ); // Unlock the global bitmap heap
        }

    }; // End of AknsRlGrayscale

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginGrayscale::CAknsRlEffectPluginGrayscale
// C++ default constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknsRlEffectPluginGrayscale::CAknsRlEffectPluginGrayscale()
    {
    }

// -----------------------------------------------------------------------------
// Destructor
// -----------------------------------------------------------------------------
//
CAknsRlEffectPluginGrayscale::~CAknsRlEffectPluginGrayscale()
    {
    iContext = NULL; // Removes lint nag
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginGrayscale::EffectUid
// -----------------------------------------------------------------------------
//
TUid CAknsRlEffectPluginGrayscale::EffectUid() const
    {
    return TUid::Uid( KAknsRlEffectPluginGrayscaleUID );
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginGrayscale::Effect
// -----------------------------------------------------------------------------
//
MAknsRlEffect* CAknsRlEffectPluginGrayscale::Effect( const TInt aInterface )
    {
    if( aInterface == KAknsRlEffectPluginInterfaceEffect )
        return this;
    return NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginGrayscale::InitializeL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginGrayscale::InitializeL()
    {
    iContext = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginGrayscale::Release
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginGrayscale::Release()
    {
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginGrayscale::ActivateL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginGrayscale::ActivateL( MAknsRlEffectContext* aContext )
    {
    if( !aContext ) // We absolutely need the context
        {
        User::Leave( KErrArgument );
        }

    iContext = aContext;

    iGrayMin = 0;
    iGrayMax = 255;

    iBlendFactor = 255;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginGrayscale::Deactivate
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginGrayscale::Deactivate()
    {
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginGrayscale::SetParametersL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginGrayscale::SetParametersL( MAknsRlParameterIterator& aParameters )
    {
    // Iterate over available parameters
    while( aParameters.HasNext() )
        {
        const TAknsRlParameterData* param = aParameters.NextL();

        // Fetch blend factor value
        if( param->iName->Compare( KAknsRlEffectGrayscaleBlendFactor ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iBlendFactor = param->iNumber;
            }
        // Fetch gray min value
        else if( param->iName->Compare( KAknsRlEffectGrayscaleGrayMin ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iGrayMin = param->iNumber;
            }
        // Fetch gray max value
        else if( param->iName->Compare( KAknsRlEffectGrayscaleGrayMax ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iGrayMax = param->iNumber;
            }
        }

    // Sanity check, minimum limit cannot be larger than maximum limit
    if( iGrayMin > iGrayMax )
        User::Leave( KErrArgument );
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginGrayscale::GetCapabilities
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginGrayscale::GetCapabilities( TAknsRlEffectCaps& aCaps )
    {
    aCaps.iOutputLayerSupport = KAknsRlLayerRGBOnly;
    aCaps.iInputLayerASupport = KAknsRlLayerRGBOnly;
    aCaps.iInputLayerBSupport = KAknsRlLayerNone;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginGrayscale::Render
// -----------------------------------------------------------------------------
//
TInt CAknsRlEffectPluginGrayscale::Render( const TAknsRlRenderOpParam& aParam )
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
            AknsRlEffectGrayscale<TUint16,0,5,6,5>::ProcessRgbToRgb(
                            *dataTarget.iRGBBitmap,
                            *dataSource.iRGBBitmap,
                            iGrayMin,
                            iGrayMax,
                            iBlendFactor );
            }
        else if( EColor16MU == modeS && EColor16MU == modeT )
            {
            AknsRlEffectGrayscale<TUint32,8,8,8,8>::ProcessRgbToRgb(
                            *dataTarget.iRGBBitmap,
                            *dataSource.iRGBBitmap,
                            iGrayMin,
                            iGrayMax,
                            iBlendFactor );
            }
        // Rgb -> Gray modes
        else if( EColor64K == modeS && EGray256 == modeT )
            {
            AknsRlEffectGrayscale<TUint16,0,5,6,5>::ProcessRgbToGray(
                            *dataTarget.iRGBBitmap,
                            *dataSource.iRGBBitmap,
                            iGrayMin,
                            iGrayMax );
            }
        else if( EColor16MU == modeS && EGray256 == modeT )
            {
            AknsRlEffectGrayscale<TUint32,8,8,8,8>::ProcessRgbToGray(
                            *dataTarget.iRGBBitmap,
                            *dataSource.iRGBBitmap,
                            iGrayMin,
                            iGrayMax );
            }
        else
            {
            // Provided layers have illegal display mode combination
            return KErrArgument;
            }
        }
    else
        {
        // Required layers were not provided
        return KErrArgument;
        }

    return KErrNone;
    }

// End of File
