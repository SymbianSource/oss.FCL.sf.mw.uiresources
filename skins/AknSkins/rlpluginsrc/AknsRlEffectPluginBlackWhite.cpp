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
* Description:  Black & White provides functionality to convert bitmaps to black & white.
*
*/


// INCLUDE FILES
#include "AknsRlEffectPluginBlackWhite.h"
#include "AknsRlEffectUtil.h"

// ==================== INTERNAL IMPL. OF BLACK & WHITE ========================
/**
* Template implementation of Black&White. Type defines the used data type for
* iterating over the bitmap data. X, R, G and B define the used pixel color bit
* layout.
*/
template<class Type,TInt X, TInt R, TInt G, TInt B>
class AknsRlEffectBlackWhite
    {
    public:
    //------------------------------------------------------------------------
    static void ProcessRgbToRgb( const CFbsBitmap& aTarget,
                                 const CFbsBitmap& aSource,
                                 const TInt aTreshold,
                                 const TInt aBlendFactor )
        {
        // ScanLineLength returns bytes, but width must match the Type
        TInt width  = CFbsBitmap::ScanLineLength( aSource.SizeInPixels().iWidth,
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

            // Pixel intensity = grayscale value
            shade = AknsRlUtil::Grayscale( TUint8(r), TUint8(g), TUint8(b) );

            // Convert to B&W
            if( shade < aTreshold )
                shade = 0;
            else
                shade = 255;

            // Exposure blending
            // Note: It is assumed that arithmetic shifting is supported
            // -> negative values are shifted correctly
            r = (shade * aBlendFactor + (255 - aBlendFactor) * r) >> 8;
            g = (shade * aBlendFactor + (255 - aBlendFactor) * g) >> 8;
            b = (shade * aBlendFactor + (255 - aBlendFactor) * b) >> 8;

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
                                  const TInt aTreshold )
        {
        TInt width  = aSource.SizeInPixels().iWidth;
        TInt height = aSource.SizeInPixels().iHeight;

        // ScanLineLength returns bytes, but width must match the Type
        TInt scanT = CFbsBitmap::ScanLineLength(width, aTarget.DisplayMode());
        TInt scanS = CFbsBitmap::ScanLineLength(width, aSource.DisplayMode()) / sizeof(Type);

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
                // Pixel intensity = grayscale value
                shade = AknsRlUtil::Grayscale( AknsRlRgb<Type,X,R,G,B>::R8(*dataS),
                                               AknsRlRgb<Type,X,R,G,B>::G8(*dataS),
                                               AknsRlRgb<Type,X,R,G,B>::B8(*dataS) );

                // Convert to B&W
                if( shade < aTreshold )
                    *dataT = 0;
                else
                    *dataT = 255;

                dataT++;
                dataS++;
                }

            dataT = dataT + pitchT;
            dataS = dataS + pitchS;
            }

        aTarget.UnlockHeap( ETrue ); // Unlock the global bitmap heap
        }
    //------------------------------------------------------------------------
    static void ProcessGrayToRgb( const CFbsBitmap& aTarget,
                                  const CFbsBitmap& aSource,
                                  const TInt aTreshold )
        {
        TInt width  = aSource.SizeInPixels().iWidth;
        TInt height = aSource.SizeInPixels().iHeight;

        // ScanLineLength returns bytes, but width must match the Type
        TInt scanT = CFbsBitmap::ScanLineLength(width, aTarget.DisplayMode()) / sizeof(Type);
        TInt scanS = CFbsBitmap::ScanLineLength(width, aSource.DisplayMode());

        TInt pitchT = scanT - width;
        TInt pitchS = scanS - width;

        aTarget.LockHeap( ETrue ); // Lock the global bitmap heap
        Type* dataT = reinterpret_cast<Type*>( aTarget.DataAddress() );
        TUint8* dataS = reinterpret_cast<TUint8*>( aSource.DataAddress() );

        TInt x, y;
        for( y=0; y < height; y++ )
            {
            for( x=0; x < width; x++ )
                {
                // Convert to B&W
                if( *dataS < aTreshold )
                    AknsRlRgb<Type,X,R,G,B>::SetRgb8( dataT, TUint8(0), TUint8(0), TUint8(0) );
                else
                    AknsRlRgb<Type,X,R,G,B>::SetRgb8( dataT, TUint8(255), TUint8(255), TUint8(255) );

                dataT++;
                dataS++;
                }

            dataT = dataT + pitchT;
            dataS = dataS + pitchS;
            }

        aTarget.UnlockHeap( ETrue ); // Unlock the global bitmap heap
        }
    }; // End of AknsRlEffectBlackWhite


// ==================== GRAYSCALE IMPL. OF BLACK & WHITE =======================
class AknsRlEffectBlackWhiteGray
    {
    public:
    //------------------------------------------------------------------------
    static void Process( const CFbsBitmap& aTarget,
                         const CFbsBitmap& aSource,
                         const TInt aTreshold,
                         const TInt aBlendFactor )
        {
        TInt width  = CFbsBitmap::ScanLineLength( aSource.SizeInPixels().iWidth,
                                                  aSource.DisplayMode() );
        TInt height = aSource.SizeInPixels().iHeight;

        TInt pixelCount = width * height;
        TInt shade, bw;

        aTarget.LockHeap( ETrue ); // Lock the global bitmap heap
        TUint8* dataT = reinterpret_cast<TUint8*>( aTarget.DataAddress() );
        TUint8* dataS = reinterpret_cast<TUint8*>( aSource.DataAddress() );

        for( TInt index = 0; index < pixelCount; ++index )
            {
            shade = *dataS;

            // Convert to B&W
            if( shade < aTreshold )
                bw = 0;
            else
                bw = 255;

            // Exposure blending
            // Note: It is assumed that arithmetic shifting is supported
            // -> negative values are shifted correctly
            bw = (bw * aBlendFactor + (255 - aBlendFactor) * shade) >> 8; //lint !e702 Arithmetic shifting assumed

            if( bw < 0 )
                *dataT = 0;
            else if( bw > 255 )
                *dataT = 255;
            else
                *dataT = TUint8(bw);

            dataT++;
            dataS++;
            }

        aTarget.UnlockHeap( ETrue ); // Unlock the global bitmap heap
        }
    }; // End of AknsRlEffectBlackWhiteGray

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginBlackWhite::CAknsRlEffectPluginBlackWhite
// C++ default constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknsRlEffectPluginBlackWhite::CAknsRlEffectPluginBlackWhite()
    {
    }

// -----------------------------------------------------------------------------
// Destructor
// -----------------------------------------------------------------------------
//
CAknsRlEffectPluginBlackWhite::~CAknsRlEffectPluginBlackWhite()
    {
    iContext = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginBlackWhite::EffectUid
// -----------------------------------------------------------------------------
//
TUid CAknsRlEffectPluginBlackWhite::EffectUid() const
    {
    return TUid::Uid( KAknsRlEffectPluginBlackWhiteUID );
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginBlackWhite::Effect
// -----------------------------------------------------------------------------
//
MAknsRlEffect* CAknsRlEffectPluginBlackWhite::Effect( const TInt aInterface )
    {
    if( aInterface == KAknsRlEffectPluginInterfaceEffect )
        return this;
    return NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginBlackWhite::InitializeL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginBlackWhite::InitializeL()
    {
    iContext = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginBlackWhite::Release
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginBlackWhite::Release()
    {
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginBlackWhite::ActivateL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginBlackWhite::ActivateL( MAknsRlEffectContext* aContext )
    {
    if( !aContext ) // We absolutely need the context
        {
        User::Leave( KErrArgument );
        }

    iContext = aContext;

    iTreshold = 127;
    iBlend    = 255;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginBlackWhite::Deactivate
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginBlackWhite::Deactivate()
    {
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginBlackWhite::SetParametersL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginBlackWhite::SetParametersL( MAknsRlParameterIterator& aParameters )
    {
    // Iterate over available parameters
    while( aParameters.HasNext() )
        {
        const TAknsRlParameterData* param = aParameters.NextL();

        // Fetch treshold value
        if( param->iName->Compare( KAknsRlEffectBlackWhiteTreshold ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iTreshold = param->iNumber;
            }
        // Fetch blend value
        else if( param->iName->Compare( KAknsRlEffectBlackWhiteBlendFactor ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iBlend = param->iNumber;
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginBlackWhite::GetCapabilities
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginBlackWhite::GetCapabilities( TAknsRlEffectCaps& aCaps )
    {
    aCaps.iOutputLayerSupport = KAknsRlLayerRGBOnly;
    aCaps.iInputLayerASupport = KAknsRlLayerRGBOnly;
    aCaps.iInputLayerBSupport = KAknsRlLayerNone;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginBlackWhite::Render
// -----------------------------------------------------------------------------
//
TInt CAknsRlEffectPluginBlackWhite::Render( const TAknsRlRenderOpParam& aParam )
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
            AknsRlEffectBlackWhite<TUint16,0,5,6,5>::ProcessRgbToRgb(
                            *dataTarget.iRGBBitmap,
                            *dataSource.iRGBBitmap,
                            iTreshold,
                            iBlend );
            }
        else if( EColor16MU == modeS && EColor16MU == modeT )
            {
            AknsRlEffectBlackWhite<TUint32,8,8,8,8>::ProcessRgbToRgb(
                            *dataTarget.iRGBBitmap,
                            *dataSource.iRGBBitmap,
                            iTreshold,
                            iBlend );
            }
        // Rgb -> Gray modes
        else if( EColor64K == modeS && EGray256 == modeT )
            {
            AknsRlEffectBlackWhite<TUint16,0,5,6,5>::ProcessRgbToGray(
                            *dataTarget.iRGBBitmap,
                            *dataSource.iRGBBitmap,
                            iTreshold );
            }
        else if( EColor16MU == modeS && EGray256 == modeT )
            {
            AknsRlEffectBlackWhite<TUint32,8,8,8,8>::ProcessRgbToGray(
                            *dataTarget.iRGBBitmap,
                            *dataSource.iRGBBitmap,
                            iTreshold );
            }
        // Gray -> Rgb modes
        else if( EGray256 == modeS && EColor64K == modeT )
            {
            AknsRlEffectBlackWhite<TUint16,0,5,6,5>::ProcessGrayToRgb(
                            *dataTarget.iRGBBitmap,
                            *dataSource.iRGBBitmap,
                            iTreshold );
            }
        else if( EGray256 == modeS && EColor16MU == modeT )
            {
            AknsRlEffectBlackWhite<TUint32,8,8,8,8>::ProcessGrayToRgb(
                            *dataTarget.iRGBBitmap,
                            *dataSource.iRGBBitmap,
                            iTreshold );
            }
        // Gray -> Gray mode
        else if( EGray256 == modeS && EGray256 == modeT )
            {
            AknsRlEffectBlackWhiteGray::Process(
                            *dataTarget.iRGBBitmap,
                            *dataSource.iRGBBitmap,
                            iTreshold, iBlend );
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
