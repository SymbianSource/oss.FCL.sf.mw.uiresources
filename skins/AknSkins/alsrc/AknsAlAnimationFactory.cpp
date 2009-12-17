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
* Description:  Animation Factory.
*
*/


// INCLUDE FILES
#include "AknsAlAnimationFactory.h"

#include "AknsRlEffectPluginAdjustChannels.h"
#include "AknsRlEffectPluginAlphaBlend.h"
#include "AknsRlEffectPluginApplyColor.h"
#include "AknsRlEffectPluginApplyGfx.h"
#include "AknsRlEffectPluginBlackWhite.h"
#include "AknsRlEffectPluginBumpMap.h"
#include "AknsRlEffectPluginChannelBlend.h"
#include "AknsRlEffectPluginContrast.h"
#include "AknsRlEffectPluginConvolution.h"
#include "AknsRlEffectPluginGrayscale.h"
#include "AknsRlEffectPluginInvert.h"
#include "AknsRlEffectPluginMovingLayers.h"
#include "AknsRlEffectPluginNoise.h"
#include "AknsRlEffectPluginSaturation.h"
#include "AknsRlEffectPluginSolarize.h"

#include "AknsAlAnimationValue.h"

#include "AknsAlTimingModelRealTime.h"
#include "AknsAlTimingModelRelative.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// Hidden constructor and destructor
// -----------------------------------------------------------------------------
//
AknsAlAnimationFactory::AknsAlAnimationFactory() {}
AknsAlAnimationFactory::~AknsAlAnimationFactory() {}

// -----------------------------------------------------------------------------
// AknsAlAnimationFactory::CreateEffectPluginL
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsRlEffectPlugin* AknsAlAnimationFactory::CreateEffectPluginL( TUid aUid )
    {
    if( KAknsRlEffectPluginAdjustChannelsUID == aUid.iUid )
        return new(ELeave) CAknsRlEffectPluginAdjustChannels();
    else if( KAknsRlEffectPluginAlphaBlendUID == aUid.iUid )
        return new(ELeave) CAknsRlEffectPluginAlphaBlend();
    else if( 0x101F873A == aUid.iUid ) // Apply color
        return new(ELeave) CAknsRlEffectPluginApplyColor();
    else if( 0x101F8748 == aUid.iUid ) // Apply graphics
        return new(ELeave) CAknsRlEffectPluginApplyGfx();
    else if( KAknsRlEffectPluginBlackWhiteUID == aUid.iUid )
        return new(ELeave) CAknsRlEffectPluginBlackWhite();
    else if( KAknsRlEffectPluginBumpMapUID == aUid.iUid )
        return new(ELeave) CAknsRlEffectPluginBumpMap();
    else if( KAknsRlEffectPluginChannelBlendUID == aUid.iUid )
        return new(ELeave) CAknsRlEffectPluginChannelBlend();
    else if( KAknsRlEffectPluginContrastUID == aUid.iUid )
        return new(ELeave) CAknsRlEffectPluginContrast();
    else if( KAknsRlEffectPluginConvolutionUID == aUid.iUid )
        return new(ELeave) CAknsRlEffectPluginConvolution();
    else if( KAknsRlEffectPluginGrayscaleUID == aUid.iUid )
        return new(ELeave) CAknsRlEffectPluginGrayscale();
    else if( KAknsRlEffectPluginInvertUID == aUid.iUid )
        return new(ELeave) CAknsRlEffectPluginInvert();
    else if( KAknsRlEffectPluginNoiseUID == aUid.iUid )
        return new(ELeave) CAknsRlEffectPluginNoise();
    else if( KAknsRlEffectPluginMovingLayersUID == aUid.iUid )
        return new(ELeave) CAknsRlEffectPluginMovingLayers();
    else if( KAknsRlEffectPluginSaturationUID == aUid.iUid )
        return new(ELeave) CAknsRlEffectPluginSaturation();
    else if( KAknsRlEffectPluginSolarizeUID == aUid.iUid )
        return new(ELeave) CAknsRlEffectPluginSolarize();

    return NULL;
    }

// -----------------------------------------------------------------------------
// AknsAlAnimationFactory::CreateAnimationValueL
// -----------------------------------------------------------------------------
//
EXPORT_C MAknsAlAnimationValue* AknsAlAnimationFactory::CreateAnimationValueL( TUid aUid )
    {
    if( KAknsAlValueConstantUID == aUid.iUid )
        return CAknsAlValueConstant::NewL();
    else if( KAknsAlValueLinearRangeUID == aUid.iUid )
        return CAknsAlValueLinearRange::NewL();
    else if( KAknsAlValueRandomUID == aUid.iUid )
        return CAknsAlValueRandom::NewL();
    else if( KAknsAlValuePoly1DUID == aUid.iUid )
        return CAknsAlValuePoly1D::NewL();
    else if( KAknsAlValuePoly2DUID == aUid.iUid )
        return CAknsAlValuePoly2D::NewL();

    return NULL;
    }

// -----------------------------------------------------------------------------
// AknsAlAnimationFactory::CreateTimingModelL
// -----------------------------------------------------------------------------
//
EXPORT_C MAknsAlTimingModel* AknsAlAnimationFactory::CreateTimingModelL( TUid aUid )
    {
    if( KAknsAlTimingModelRealTimeUID == aUid.iUid )
        return CAknsAlTimingModelRealTime::NewL();
    else if( KAknsAlTimingModelRelativeUID == aUid.iUid )
        return CAknsAlTimingModelRelative::NewL();

    return NULL;
    }
