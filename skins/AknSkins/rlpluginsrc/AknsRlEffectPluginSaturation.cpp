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
* Description:  Saturation provides functionality adjust image saturation.
*
*/


// INCLUDE FILES
#include "AknsRlEffectPluginSaturation.h"
#include "AknsRlEffectUtil.h"

// ================= TEMPLATE IMPL. OF SATURATION ==============================
/**
* Template implementation of Saturation. Type defines the used data type for
* iterating over the bitmap data. X, R, G and B define the used pixel color bit
* layout.
*/
template<class Type,TInt X, TInt R, TInt G, TInt B>
class AknsRlEffectSaturation
    {
    public:
    //------------------------------------------------------------------------
    static void Process( const CFbsBitmap& aTarget,
                         const CFbsBitmap& aSource,
                         const TInt aAdjustment )
        {
        // ScanLineLength returns bytes, but width must match the Type
        TInt width  = CFbsBitmap::ScanLineLength( aSource.SizeInPixels().iWidth,
                                                  aSource.DisplayMode() ) / sizeof(Type);
        TInt height = aSource.SizeInPixels().iHeight;

        TInt pixelCount = width * height;
        TInt r,g,b;
        TInt shade;

        aTarget.LockHeap( ETrue ); // Lock the global bitmap heap
        Type* dataT = reinterpret_cast<Type*>( aTarget.DataAddress() );
        Type* dataS = reinterpret_cast<Type*>( aSource.DataAddress() );

        for( TInt index = 0; index < pixelCount; ++index )
            {
            r = AknsRlRgb<Type,X,R,G,B>::R8(*dataS);
            g = AknsRlRgb<Type,X,R,G,B>::G8(*dataS);
            b = AknsRlRgb<Type,X,R,G,B>::B8(*dataS);

            shade = AknsRlUtil::Grayscale( TUint8(r), TUint8(g), TUint8(b) );

            // Note: It is assumed that arithmetic shifting is supported
            // -> negative values are shifted correctly
            r = ( AknsRlRgb<Type,X,R,G,B>::R8(*dataS) * (255 + aAdjustment) - aAdjustment * shade ) >> 8;
            g = ( AknsRlRgb<Type,X,R,G,B>::G8(*dataS) * (255 + aAdjustment) - aAdjustment * shade ) >> 8;
            b = ( AknsRlRgb<Type,X,R,G,B>::B8(*dataS) * (255 + aAdjustment) - aAdjustment * shade ) >> 8;

            if( r < 0 ) r = 0; else if( r > 255 ) r = 255;
            if( g < 0 ) g = 0; else if( g > 255 ) g = 255;
            if( b < 0 ) b = 0; else if( b > 255 ) b = 255;

            AknsRlRgb<Type,X,R,G,B>::SetRgb8( dataT, TUint8(r), TUint8(g), TUint8(b) );

            dataT++;
            dataS++;
            }

        aTarget.UnlockHeap( ETrue ); // Unlock the global bitmap heap
        }
    }; // End of AknsRlEffectSaturation

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginSaturation::CAknsRlEffectPluginSaturation
// C++ default constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknsRlEffectPluginSaturation::CAknsRlEffectPluginSaturation()
    {
    }

// -----------------------------------------------------------------------------
// Destructor
// -----------------------------------------------------------------------------
//
CAknsRlEffectPluginSaturation::~CAknsRlEffectPluginSaturation()
    {
    iContext = NULL; // Removes lint nag
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginSaturation::EffectUid
// -----------------------------------------------------------------------------
//
TUid CAknsRlEffectPluginSaturation::EffectUid() const
    {
    return TUid::Uid( KAknsRlEffectPluginSaturationUID );
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginSaturation::Effect
// -----------------------------------------------------------------------------
//
MAknsRlEffect* CAknsRlEffectPluginSaturation::Effect( const TInt aInterface )
    {
    if( aInterface == KAknsRlEffectPluginInterfaceEffect )
        return this;
    return NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginSaturation::InitializeL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginSaturation::InitializeL()
    {
    iContext = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginSaturation::Release
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginSaturation::Release()
    {
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginSaturation::ActivateL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginSaturation::ActivateL( MAknsRlEffectContext* aContext )
    {
    if( !aContext ) // We absolutely need the context
        {
        User::Leave( KErrArgument );
        }

    iContext = aContext;

    iAdjustment = 0;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginSaturation::Deactivate
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginSaturation::Deactivate()
    {
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginSaturation::SetParametersL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginSaturation::SetParametersL( MAknsRlParameterIterator& aParameters )
    {
    // Iterate over available parameters
    while( aParameters.HasNext() )
        {
        const TAknsRlParameterData* param = aParameters.NextL();

        // Fetch adjustment value
        if( param->iName->Compare( KAknsRlEffectSaturationAdjustment ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iAdjustment = param->iNumber;
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginSaturation::GetCapabilities
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginSaturation::GetCapabilities( TAknsRlEffectCaps& aCaps )
    {
    aCaps.iOutputLayerSupport = KAknsRlLayerRGBOnly;
    aCaps.iInputLayerASupport = KAknsRlLayerRGBOnly;
    aCaps.iInputLayerBSupport = KAknsRlLayerNone;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginSaturation::Render
// -----------------------------------------------------------------------------
//
TInt CAknsRlEffectPluginSaturation::Render( const TAknsRlRenderOpParam& aParam )
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
            AknsRlEffectSaturation<TUint16,0,5,6,5>::Process(
                            *dataTarget.iRGBBitmap,
                            *dataSource.iRGBBitmap,
                            iAdjustment );
            }
        else if( EColor16MU == modeS && EColor16MU == modeT )
            {
            AknsRlEffectSaturation<TUint32,8,8,8,8>::Process(
                            *dataTarget.iRGBBitmap,
                            *dataSource.iRGBBitmap,
                            iAdjustment );
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
