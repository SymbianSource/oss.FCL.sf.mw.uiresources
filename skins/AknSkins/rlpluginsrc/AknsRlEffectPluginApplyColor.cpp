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
* Description:  Simple effect that applies the given color to the entire layer.
*
*/


// INCLUDE FILES
#include "AknsRlEffectPluginApplyColor.h"

#include <aknenv.h>

// CONSTANTS
/*lint -save -e618 */ // Disables lint nag about _LIT
const TInt KApplyColorEffectUID = 0x101F873A;
_LIT( KApplyColorParamRed,      "r" );
_LIT( KApplyColorParamGreen,    "g" );
_LIT( KApplyColorParamBlue,     "b" );
_LIT( KApplyColorParamIndex,    "i" );
_LIT( KApplyColorParamAlpha,    "a" );
/*lint -restore */

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginApplyColor::CAknsRlEffectPluginApplyColor
// C++ default constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknsRlEffectPluginApplyColor::CAknsRlEffectPluginApplyColor()
    {
    }

// -----------------------------------------------------------------------------
// Destructor
// -----------------------------------------------------------------------------
//
CAknsRlEffectPluginApplyColor::~CAknsRlEffectPluginApplyColor()
    {
    iContext = NULL; // Removes lint nag
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginApplyColor::EffectUid
// (commented in a header).
// -----------------------------------------------------------------------------
//
TUid CAknsRlEffectPluginApplyColor::EffectUid() const
    {
    return TUid::Uid( KApplyColorEffectUID );
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginApplyColor::Effect
// (commented in a header).
// -----------------------------------------------------------------------------
//
MAknsRlEffect* CAknsRlEffectPluginApplyColor::Effect( const TInt aInterface )
    {
    if( aInterface == KAknsRlEffectPluginInterfaceEffect )
        return this;
    return NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginApplyColor::InitializeL
// (commented in a header).
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginApplyColor::InitializeL()
    {
    iContext = NULL;

    iRGBSpecified = EFalse;
    iAlphaSpecified = EFalse;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginApplyColor::Release
// (commented in a header).
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginApplyColor::Release()
    {
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginApplyColor::ActivateL
// (commented in a header).
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginApplyColor::ActivateL( MAknsRlEffectContext* aContext )
    {
    if( !aContext ) // We absolutely need the context
        {
        User::Leave( KErrArgument );
        }

    iContext = aContext;

    iRGBSpecified = EFalse;
    iRGBColor = TRgb(0,0,0);
    iAlphaSpecified = EFalse;
    iAlphaColor = TRgb(0,0,0);
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginApplyColor::Deactivate
// (commented in a header).
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginApplyColor::Deactivate()
    {
    iContext = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginApplyColor::SetParametersL
// (commented in a header).
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginApplyColor::SetParametersL(
    MAknsRlParameterIterator& aParameters )
    {
    while( aParameters.HasNext() )
        {
        const TAknsRlParameterData* param = aParameters.NextL();

        if( param->iName->Compare(KApplyColorParamRed) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );
            iRGBSpecified = ETrue;
            iRGBColor.SetRed( param->iNumber );
            }
        else if( param->iName->Compare(KApplyColorParamGreen) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );
            iRGBSpecified = ETrue;
            iRGBColor.SetGreen( param->iNumber );
            }
        else if( param->iName->Compare(KApplyColorParamBlue) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );
            iRGBSpecified = ETrue;
            iRGBColor.SetBlue( param->iNumber );
            }
        else if( param->iName->Compare(KApplyColorParamAlpha) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );
            iAlphaSpecified = ETrue;
            iAlphaColor = TRgb( param->iNumber, param->iNumber, param->iNumber );
            }
        else if( param->iName->Compare(KApplyColorParamIndex) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );
            iRGBSpecified = ETrue;
            iRGBColor = CAknEnv::AvkonColor( param->iNumber );
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginApplyColor::GetCapabilities
// (commented in a header).
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginApplyColor::GetCapabilities( TAknsRlEffectCaps& aCaps )
    {
    // Input layers are not used
    aCaps.iInputLayerASupport = KAknsRlLayerNone;
    aCaps.iInputLayerBSupport = KAknsRlLayerNone;

    // Output layer support depends on the parameters
    if( !(iRGBSpecified||iAlphaSpecified) )
        {
        // "None" indicates that the plugin cannot be rendered
        aCaps.iOutputLayerSupport = KAknsRlLayerNone;
        return;
        }
    aCaps.iOutputLayerSupport = 0; // "None" is not supported
    if( iRGBSpecified )
        {
        aCaps.iOutputLayerSupport |= KAknsRlLayerRGBOnly |
            KAknsRlLayerAlphaOnly | KAknsRlLayerRGBA;
        }
    if( iAlphaSpecified )
        {
        aCaps.iOutputLayerSupport |= KAknsRlLayerAlphaOnly;
        }
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginApplyColor::Render
// (commented in a header).
// -----------------------------------------------------------------------------
//
TInt CAknsRlEffectPluginApplyColor::Render( const TAknsRlRenderOpParam& aParam )
    {
    TRAPD( err, DoRenderL( aParam ) );
    return err;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginApplyColor::DoRenderL
// (commented in a header).
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginApplyColor::DoRenderL( const TAknsRlRenderOpParam& aParam )
    {
    TAknsRlLayerData layerData;
    iContext->GetLayerDataL( layerData, aParam.iOutputLayerIndex,
        aParam.iOutputLayerStatus, ETrue );

    if( ((aParam.iOutputLayerStatus == KAknsRlLayerRGBOnly) ||
        (aParam.iOutputLayerStatus == KAknsRlLayerRGBA)) &&
        iRGBSpecified )
        {
        layerData.iRGBGc->SetBrushColor( iRGBColor );
        layerData.iRGBGc->Clear();
        }

    if( ((aParam.iOutputLayerStatus == KAknsRlLayerAlphaOnly) ||
        (aParam.iOutputLayerStatus == KAknsRlLayerRGBA)) &&
        iAlphaSpecified )
        {
        layerData.iAlphaGc->SetBrushColor( iAlphaColor );
        layerData.iAlphaGc->Clear();
        }
    }

// End of File
