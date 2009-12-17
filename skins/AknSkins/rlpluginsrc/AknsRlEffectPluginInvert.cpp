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
* Description:  Inverts bitmap channels.
*
*/


// INCLUDE FILES
#include "AknsRlEffectPluginInvert.h"
#include "AknsRlEffectUtil.h"

// ==================TEMPLATE IMPL. OF INVERT ==================================
/**
* Template implementation of Invert. Type defines the used data type for
* iterating over the bitmap data. X, R, G and B define the used pixel color bit
* layout.
*/
template<class Type,TInt X, TInt R, TInt G, TInt B>
class AknsRlEffectInvert
    {
    public:
    //------------------------------------------------------------------------
    static void Process( const CFbsBitmap& aTarget,
                         const CFbsBitmap& aSource,
                         const TUint8 aChannelMask,
                         const TInt aBlendFactor )
        {
        // ScanLineLength returns bytes, but width must match the Type
        TInt width  = CFbsBitmap::ScanLineLength( aSource.SizeInPixels().iWidth,
                                                  aSource.DisplayMode() ) / sizeof(Type);
        TInt height = aSource.SizeInPixels().iHeight;

        TInt pixelCount = width * height;
        TInt r,g,b;

        aTarget.LockHeap( ETrue ); // Lock the global bitmap heap
        Type* dataT = reinterpret_cast<Type*>( aTarget.DataAddress() );
        Type* dataS = reinterpret_cast<Type*>( aSource.DataAddress() );

        for( TInt index = 0; index < pixelCount; ++index )
            {
            r = AknsRlRgb<Type,X,R,G,B>::R8(*dataS);
            g = AknsRlRgb<Type,X,R,G,B>::G8(*dataS);
            b = AknsRlRgb<Type,X,R,G,B>::B8(*dataS);

            if( CAknsRlEffectPluginInvert::EMaskR & aChannelMask )
                r = 255 - r;
            if( CAknsRlEffectPluginInvert::EMaskG & aChannelMask )
                g = 255 - g;
            if( CAknsRlEffectPluginInvert::EMaskB & aChannelMask )
                b = 255 - b;

            // Exposure blending
            // Note: It is assumed that arithmetic shifting is supported
            // -> negative values are shifted correctly
            r = ( r * aBlendFactor + (255 - aBlendFactor) * AknsRlRgb<Type,X,R,G,B>::R8(*dataS) ) >> 8;
            g = ( g * aBlendFactor + (255 - aBlendFactor) * AknsRlRgb<Type,X,R,G,B>::G8(*dataS) ) >> 8;
            b = ( b * aBlendFactor + (255 - aBlendFactor) * AknsRlRgb<Type,X,R,G,B>::B8(*dataS) ) >> 8;

            if( r < 0 ) r = 0; else if( r > 255 ) r = 255;
            if( g < 0 ) g = 0; else if( g > 255 ) g = 255;
            if( b < 0 ) b = 0; else if( b > 255 ) b = 255;

            AknsRlRgb<Type,X,R,G,B>::SetRgb8( dataT, TUint8(r), TUint8(g), TUint8(b) );

            dataT++;
            dataS++;
            }

        aTarget.UnlockHeap( ETrue ); // Unlock the global bitmap heap
        }
    };

// ================== GRAYSCALE IMPL. OF INVERT ================================
class AknsRlEffectInvertGray
    {
    public:
    //------------------------------------------------------------------------
    static void Process( const CFbsBitmap& aTarget,
                         const CFbsBitmap& aSource,
                         const TInt aBlendFactor )
        {
        TInt width = CFbsBitmap::ScanLineLength( aSource.SizeInPixels().iWidth,
                                                 aSource.DisplayMode() );
        TInt height = aSource.SizeInPixels().iHeight;

        TInt pixelCount = width * height;
        TInt shade;

        aTarget.LockHeap( ETrue ); // Lock the global bitmap heap
        TUint8* dataT = reinterpret_cast<TUint8*>( aTarget.DataAddress() );
        TUint8* dataS = reinterpret_cast<TUint8*>( aSource.DataAddress() );

        for( TInt index = 0; index < pixelCount; ++index )
            {
            shade = 255 - (*dataS);

            // Exposure blending
            // Note: It is assumed that arithmetic shifting is supported
            // -> negative values are shifted correctly
            shade = ( shade * aBlendFactor + (255 - aBlendFactor) * (*dataS) ) >> 8; //lint !e702 Arithmetic shifting assumed

            if( shade < 0 ) shade = 0;
            else if( shade > 255 ) shade = 255;

            *dataT = TUint8(shade);

            dataT++;
            dataS++;
            }

        aTarget.UnlockHeap( ETrue ); // Unlock the global bitmap heap
        }
    };

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginInvert::CAknsRlEffectPluginInvert
// C++ default constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknsRlEffectPluginInvert::CAknsRlEffectPluginInvert()
    {
    }

// -----------------------------------------------------------------------------
// Destructor
// -----------------------------------------------------------------------------
//
CAknsRlEffectPluginInvert::~CAknsRlEffectPluginInvert()
    {
    iContext = NULL; // Removes lint nag
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginInvert::EffectUid
// -----------------------------------------------------------------------------
//
TUid CAknsRlEffectPluginInvert::EffectUid() const
    {
    return TUid::Uid( KAknsRlEffectPluginInvertUID );
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginInvert::Effect
// -----------------------------------------------------------------------------
//
MAknsRlEffect* CAknsRlEffectPluginInvert::Effect( const TInt aInterface )
    {
    if( aInterface == KAknsRlEffectPluginInterfaceEffect )
        return this;
    return NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginInvert::InitializeL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginInvert::InitializeL()
    {
    iContext = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginInvert::Release
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginInvert::Release()
    {
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginInvert::ActivateL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginInvert::ActivateL( MAknsRlEffectContext* aContext )
    {
    if( !aContext ) // We absolutely need the context
        {
        User::Leave( KErrArgument );
        }

    iContext = aContext;

    iChannelMask = EMaskR | EMaskG | EMaskB;
    iBlendFactor = 255;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginInvert::Deactivate
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginInvert::Deactivate()
    {
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginInvert::SetParametersL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginInvert::SetParametersL( MAknsRlParameterIterator& aParameters )
    {
    // Iterate over available parameters
    while( aParameters.HasNext() )
        {
        const TAknsRlParameterData* param = aParameters.NextL();

        // Fetch channel mask value
        if( param->iName->Compare( KAknsRlEffectInvertChannels ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iChannelMask = TUint8(param->iNumber);
            }
        // Fetch blend factor value
        else if( param->iName->Compare( KAknsRlEffectInvertBlendFactor ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iBlendFactor = param->iNumber;
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginInvert::GetCapabilities
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginInvert::GetCapabilities( TAknsRlEffectCaps& aCaps )
    {
    aCaps.iOutputLayerSupport = KAknsRlLayerRGBOnly;
    aCaps.iInputLayerASupport = KAknsRlLayerRGBOnly;
    aCaps.iInputLayerBSupport = KAknsRlLayerNone;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginInvert::Render
// -----------------------------------------------------------------------------
//
TInt CAknsRlEffectPluginInvert::Render( const TAknsRlRenderOpParam& aParam )
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
            AknsRlEffectInvert<TUint16,0,5,6,5>::Process(
                            *dataTarget.iRGBBitmap,
                            *dataSource.iRGBBitmap,
                            iChannelMask,
                            iBlendFactor );

            }
        else if( EColor16MU == modeS && EColor16MU == modeT )
            {
            AknsRlEffectInvert<TUint32,8,8,8,8>::Process(
                            *dataTarget.iRGBBitmap,
                            *dataSource.iRGBBitmap,
                            iChannelMask,
                            iBlendFactor );
            }
        // Gray -> Gray mode
        else if( EGray256 == modeS && EGray256 == modeT )
            {
            AknsRlEffectInvertGray::Process(
                            *dataTarget.iRGBBitmap,
                            *dataSource.iRGBBitmap,
                            iBlendFactor );
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
