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
* Description:  Adds grayscale noise to bitmap image.
*
*/


// INCLUDE FILES
#include <e32math.h>

#include "AknsRlEffectPluginNoise.h"
#include "AknsRlEffectUtil.h"

// ===================== TEMPLATED IMPL. OF NOISE ==============================
/**
* Template implementation of Noise. Type defines the used data type for
* iterating over the bitmap data. X, R, G and B define the used pixel color bit
* layout.
*
* Adding the noise works as the uniform noise in Paint Shop Pro (result-wise).
*
*         Current pixel value
*                 |
* -127            v               127
*  |-------|------+------|--------|
*
*           \ - - - - - /
*         current intensity value
*   \ - - - full intensity - - - /
*               (255)
*
* The current color channel value is displaced by random value in range
* [-intensity/2, intensity/2]. Intensity value 0 will result in the original
* image.
*/
template<class Type,TInt X, TInt R, TInt G, TInt B>
class AknsRlEffectNoise
    {
    public:
    //------------------------------------------------------------------------
    static void Process( const CFbsBitmap& aTarget,
                         const CFbsBitmap& aSource,
                         const TInt aSeed,
                         const TInt aIntensity )
        {
        // ScanLineLength returns bytes, but width must match the Type
        TInt width  = CFbsBitmap::ScanLineLength( aSource.SizeInPixels().iWidth,
                                                  aSource.DisplayMode() ) / sizeof(Type);
        TInt height = aSource.SizeInPixels().iHeight;

        TInt pixelCount = width * height;
        TInt r,g,b;
        TInt rnd;
        TInt64 seed( aSeed );

        aTarget.LockHeap( ETrue ); // Lock the global bitmap heap
        Type* dataT = reinterpret_cast<Type*>( aTarget.DataAddress() );
        Type* dataS = reinterpret_cast<Type*>( aSource.DataAddress() );

        for( TInt index = 0; index < pixelCount; ++index )
            {
            // Note: It is assumed that arithmetic shifting is supported
            // -> negative values are shifted correctly
            rnd = (((Math::Rand( seed ) % 256) * aIntensity ) >> 8) - ( aIntensity >> 1 );

            r = AknsRlRgb<Type,X,R,G,B>::R8(*dataS);
            g = AknsRlRgb<Type,X,R,G,B>::G8(*dataS);
            b = AknsRlRgb<Type,X,R,G,B>::B8(*dataS);

            r = r + rnd;
            g = g + rnd;
            b = b + rnd;

            if( r < 0 ) r = 0; else if( r > 255 ) r = 255;
            if( g < 0 ) g = 0; else if( g > 255 ) g = 255;
            if( b < 0 ) b = 0; else if( b > 255 ) b = 255;

            AknsRlRgb<Type,X,R,G,B>::SetRgb8( dataT, TUint8(r), TUint8(g), TUint8(b) );

            dataT++;
            dataS++;
            }

        aTarget.UnlockHeap( ETrue ); // Unlock the global bitmap heap
        }
    }; // End of AknsRlEffectNoise

// ===================== GRAYSCALE IMPL. OF NOISE ==============================
class AknsRlEffectNoiseGray
    {
    public:
    //------------------------------------------------------------------------
    static void Process( const CFbsBitmap& aTarget,
                         const CFbsBitmap& aSource,
                         const TInt aSeed,
                         const TInt aIntensity )
        {
        TInt width  = CFbsBitmap::ScanLineLength( aSource.SizeInPixels().iWidth,
                                                  aSource.DisplayMode() );
        TInt height = aSource.SizeInPixels().iHeight;

        TInt pixelCount = width * height;
        TInt shade, rnd;
        TInt64 seed( aSeed );

        aTarget.LockHeap( ETrue ); // Lock the global bitmap heap
        TUint8* dataT = reinterpret_cast<TUint8*>( aTarget.DataAddress() );
        TUint8* dataS = reinterpret_cast<TUint8*>( aSource.DataAddress() );

        for( TInt index = 0; index < pixelCount; ++index )
            {
            // Note: It is assumed that arithmetic shifting is supported
            // -> negative values are shifted correctly
            rnd = (((Math::Rand( seed ) % 256) * aIntensity ) >> 8) - ( aIntensity >> 1 ); //lint !e702 Arithmetic shifting assumed

            shade = (*dataS) + rnd;

            if( shade < 0 )
                *dataT = 0;
            else if( shade > 255 )
                *dataT = 255;
            else
                *dataT = TUint8(shade);

            dataT++;
            dataS++;
            }

        aTarget.UnlockHeap( ETrue ); // Unlock the global bitmap heap
        }
    }; // End of AknsRlEffectNoise

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginNoise::CAknsRlEffectPluginNoise
// C++ default constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknsRlEffectPluginNoise::CAknsRlEffectPluginNoise()
    {
    }

// -----------------------------------------------------------------------------
// Destructor
// -----------------------------------------------------------------------------
//
CAknsRlEffectPluginNoise::~CAknsRlEffectPluginNoise()
    {
    iContext = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginNoise::EffectUid
// -----------------------------------------------------------------------------
//
TUid CAknsRlEffectPluginNoise::EffectUid() const
    {
    return TUid::Uid( KAknsRlEffectPluginNoiseUID );
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginNoise::Effect
// -----------------------------------------------------------------------------
//
MAknsRlEffect* CAknsRlEffectPluginNoise::Effect( const TInt aInterface )
    {
    if( aInterface == KAknsRlEffectPluginInterfaceEffect )
        return this;
    return NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginNoise::InitializeL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginNoise::InitializeL()
    {
    iContext = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginNoise::Release
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginNoise::Release()
    {
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginNoise::ActivateL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginNoise::ActivateL( MAknsRlEffectContext* aContext )
    {
    if( !aContext ) // We absolutely need the context
        {
        User::Leave( KErrArgument );
        }

    iContext = aContext;

    iSeed = 0;
    iIntensity = 127;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginNoise::Deactivate
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginNoise::Deactivate()
    {
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginNoise::SetParametersL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginNoise::SetParametersL( MAknsRlParameterIterator& aParameters )
    {
    // Iterate over available parameters
    while( aParameters.HasNext() )
        {
        const TAknsRlParameterData* param = aParameters.NextL();

        // Fetch seed value
        if( param->iName->Compare( KAknsRlEffectNoiseSeed ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iSeed = param->iNumber;
            }
        // Fetch intensity value
        else if( param->iName->Compare( KAknsRlEffectNoiseIntensity ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iIntensity = param->iNumber;
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginNoise::GetCapabilities
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginNoise::GetCapabilities( TAknsRlEffectCaps& aCaps )
    {
    aCaps.iOutputLayerSupport = KAknsRlLayerRGBOnly;
    aCaps.iInputLayerASupport = KAknsRlLayerRGBOnly;
    aCaps.iInputLayerBSupport = KAknsRlLayerNone;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginNoise::Render
// -----------------------------------------------------------------------------
//
TInt CAknsRlEffectPluginNoise::Render( const TAknsRlRenderOpParam& aParam )
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
            AknsRlEffectNoise<TUint16,0,5,6,5>::Process(
                            *dataTarget.iRGBBitmap,
                            *dataSource.iRGBBitmap,
                            iSeed,
                            iIntensity );
            }
        else if( EColor16MU == modeS && EColor16MU == modeT )
            {
            AknsRlEffectNoise<TUint32,8,8,8,8>::Process(
                            *dataTarget.iRGBBitmap,
                            *dataSource.iRGBBitmap,
                            iSeed,
                            iIntensity );

            }
        // Gray -> Gray mode
        else if( EGray256 == modeS && EGray256 == modeT )
            {
            AknsRlEffectNoiseGray::Process(
                            *dataTarget.iRGBBitmap,
                            *dataSource.iRGBBitmap,
                            iSeed,
                            iIntensity );
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
