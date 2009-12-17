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
* Description:  Handles channel adjustments.
*
*/


// INCLUDE FILES
#include "AknsRlEffectPluginAdjustChannels.h"
#include "AknsRlEffectUtil.h"

// =============== INTERNAL IMPL. OF ADJUST CHANNELS ===========================
/**
* Template implementation of AdjustChannels. Type defines the used data type
* for iterating over the bitmap data. X, R, G and B define the used pixel color
* bit layout.
*/
template<class Type,TInt X, TInt R, TInt G, TInt B>
class AknsRlEffectAdjustChannels
    {
    public:

    static void Process( const CFbsBitmap& aTarget,
                         const CFbsBitmap& aSource,
                         const TInt aRedSource,
                         const TInt aGreenSource,
                         const TInt aBlueSource,
                         const TInt aRedFactor,
                         const TInt aGreenFactor,
                         const TInt aBlueFactor,
                         const TInt aBlendFactor )
        {
        // ScanLineLength returns bytes, but width must match the Type
        TInt width  = CFbsBitmap::ScanLineLength( aSource.SizeInPixels().iWidth,
                                                  aSource.DisplayMode() ) / sizeof(Type);
        TInt height = aSource.SizeInPixels().iHeight;

        TInt pixelCount = width * height;
        Type color;
        TInt r,g,b;

        aTarget.LockHeap( ETrue ); // Lock the global bitmap heap
        Type* dataT = reinterpret_cast<Type*>( aTarget.DataAddress() );
        Type* dataS = reinterpret_cast<Type*>( aSource.DataAddress() );

        for( TInt index = 0; index < pixelCount; ++index )
            {
            color = *dataS;

            // Select channels
            if( KAknsRlEffectAdjustChannelsRed == aRedSource )
                r = AknsRlRgb<Type,X,R,G,B>::R8(color);
            else if( KAknsRlEffectAdjustChannelsGreen == aRedSource )
                r = AknsRlRgb<Type,X,R,G,B>::G8(color);
            else // Must be blue
                r = AknsRlRgb<Type,X,R,G,B>::B8(color);

            if( KAknsRlEffectAdjustChannelsRed == aGreenSource )
                g = AknsRlRgb<Type,X,R,G,B>::R8(color);
            else if( KAknsRlEffectAdjustChannelsGreen == aGreenSource )
                g = AknsRlRgb<Type,X,R,G,B>::G8(color);
            else // Must be blue
                g = AknsRlRgb<Type,X,R,G,B>::B8(color);

            if( KAknsRlEffectAdjustChannelsRed == aBlueSource )
                b = AknsRlRgb<Type,X,R,G,B>::R8(color);
            else if( KAknsRlEffectAdjustChannelsGreen == aBlueSource )
                b = AknsRlRgb<Type,X,R,G,B>::G8(color);
            else // Must be blue
                b = AknsRlRgb<Type,X,R,G,B>::B8(color);

            // Scale channels.
            // Note: It is assumed that arithmetic shifting is supported
            // -> negative values are shifted correctly
            r = (aRedFactor * r) >> 8;
            g = (aGreenFactor * g) >> 8;
            b = (aBlueFactor * b) >> 8;

            // Exposure blending.
            // Note: It is assumed that arithmetic shifting is supported
            // -> negative values are shifted correctly
            r = (r * aBlendFactor + (255 - aBlendFactor) * AknsRlRgb<Type,X,R,G,B>::R8(color)) >> 8;
            g = (g * aBlendFactor + (255 - aBlendFactor) * AknsRlRgb<Type,X,R,G,B>::G8(color)) >> 8;
            b = (b * aBlendFactor + (255 - aBlendFactor) * AknsRlRgb<Type,X,R,G,B>::B8(color)) >> 8;

            if( r < 0 ) r = 0; else if( r > 255 ) r = 255;
            if( g < 0 ) g = 0; else if( g > 255 ) g = 255;
            if( b < 0 ) b = 0; else if( b > 255 ) b = 255;

            AknsRlRgb<Type,X,R,G,B>::SetRgb8( dataT, TUint8(r), TUint8(g), TUint8(b) );

            dataT++;
            dataS++;
            }

        aTarget.UnlockHeap( ETrue ); // Unlock the global bitmap heap
        }
    }; // End of AknsRlEffectAdjustChannels

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginAdjustChannels::CAknsRlEffectPluginAdjustChannels
// C++ default constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknsRlEffectPluginAdjustChannels::CAknsRlEffectPluginAdjustChannels()
    {
    }

// -----------------------------------------------------------------------------
// Destructor
// -----------------------------------------------------------------------------
//
CAknsRlEffectPluginAdjustChannels::~CAknsRlEffectPluginAdjustChannels()
    {
    iContext = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginAdjustChannels::EffectUid
// -----------------------------------------------------------------------------
//
TUid CAknsRlEffectPluginAdjustChannels::EffectUid() const
    {
    return TUid::Uid( KAknsRlEffectPluginAdjustChannelsUID );
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginAdjustChannels::Effect
// -----------------------------------------------------------------------------
//
MAknsRlEffect* CAknsRlEffectPluginAdjustChannels::Effect( const TInt aInterface )
    {
    if( aInterface == KAknsRlEffectPluginInterfaceEffect )
        return this;
    return NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginAdjustChannels::InitializeL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginAdjustChannels::InitializeL()
    {
    iContext = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginAdjustChannels::Release
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginAdjustChannels::Release()
    {
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginAdjustChannels::ActivateL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginAdjustChannels::ActivateL( MAknsRlEffectContext* aContext )
    {
    if( !aContext ) // We absolutely need the context
        {
        User::Leave( KErrArgument );
        }

    iContext = aContext;

    iSourceRed   = KAknsRlEffectAdjustChannelsRed;
    iSourceGreen = KAknsRlEffectAdjustChannelsGreen;
    iSourceBlue  = KAknsRlEffectAdjustChannelsBlue;

    iFactorRed   = 255;
    iFactorGreen = 255;
    iFactorBlue  = 255;

    iBlendFactor = 255;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginAdjustChannels::Deactivate
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginAdjustChannels::Deactivate()
    {
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginAdjustChannels::SetParametersL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginAdjustChannels::SetParametersL( MAknsRlParameterIterator& aParameters )
    {
    // Iterate over available parameters
    while( aParameters.HasNext() )
        {
        const TAknsRlParameterData* param = aParameters.NextL();

        // Fetch channel source values
        if( param->iName->Compare( KAknsRlEffectAdjustChannelsSourceRed ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            if( param->iNumber < KAknsRlEffectAdjustChannelsRed ||
                param->iNumber > KAknsRlEffectAdjustChannelsBlue )
                User::Leave( KErrArgument );

            iSourceRed = TUint8( param->iNumber );
            }
        else if( param->iName->Compare( KAknsRlEffectAdjustChannelsSourceGreen ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            if( param->iNumber < KAknsRlEffectAdjustChannelsRed ||
                param->iNumber > KAknsRlEffectAdjustChannelsBlue )
                User::Leave( KErrArgument );

            iSourceGreen = TUint8( param->iNumber );
            }
        else if( param->iName->Compare( KAknsRlEffectAdjustChannelsSourceBlue ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            if( param->iNumber < KAknsRlEffectAdjustChannelsRed ||
                param->iNumber > KAknsRlEffectAdjustChannelsBlue )
                User::Leave( KErrArgument );

            iSourceBlue = TUint8( param->iNumber );
            }
        // Fetch channel factors
        else if( param->iName->Compare( KAknsRlEffectAdjustChannelsFactorRed ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iFactorRed = param->iNumber;
            }
        else if( param->iName->Compare( KAknsRlEffectAdjustChannelsFactorGreen ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iFactorGreen = param->iNumber;
            }
        else if( param->iName->Compare( KAknsRlEffectAdjustChannelsFactorBlue ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iFactorBlue = param->iNumber;
            }
        // Fetch blend value
        else if( param->iName->Compare( KAknsRlEffectAdjustChannelsBlendFactor ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iBlendFactor = param->iNumber;
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginAdjustChannels::GetCapabilities
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginAdjustChannels::GetCapabilities( TAknsRlEffectCaps& aCaps )
    {
    aCaps.iOutputLayerSupport = KAknsRlLayerRGBOnly;
    aCaps.iInputLayerASupport = KAknsRlLayerRGBOnly;
    aCaps.iInputLayerBSupport = KAknsRlLayerNone;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginAdjustChannels::Render
// -----------------------------------------------------------------------------
//
TInt CAknsRlEffectPluginAdjustChannels::Render( const TAknsRlRenderOpParam& aParam )
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

        // Process the layers
        if( EColor64K == modeT && EColor64K == modeS )
            {
            AknsRlEffectAdjustChannels<TUint16,0,5,6,5>::Process(
                            *dataTarget.iRGBBitmap,
                            *dataSource.iRGBBitmap,
                            iSourceRed,
                            iSourceGreen,
                            iSourceBlue,
                            iFactorRed,
                            iFactorGreen,
                            iFactorBlue,
                            iBlendFactor );
            }
        else if( EColor16MU == modeT && EColor16MU == modeS )
            {
            AknsRlEffectAdjustChannels<TUint32,8,8,8,8>::Process(
                            *dataTarget.iRGBBitmap,
                            *dataSource.iRGBBitmap,
                            iSourceRed,
                            iSourceGreen,
                            iSourceBlue,
                            iFactorRed,
                            iFactorGreen,
                            iFactorBlue,
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
