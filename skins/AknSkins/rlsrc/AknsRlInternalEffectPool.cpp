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
* Description:  Effect pool class.
*
*/


// INCLUDE FILES
#include "AknsRlInternalEffectPool.h"

#include "AknsRlEffectPluginApplyColor.h"
#include "AknsRlEffectPluginApplyGfx.h"
#include "AknsRlEffectPluginAdjustChannels.h"
#include "AknsRlEffectPluginAlphaBlend.h"
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

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsRlInternalEffectPool::CAknsRlInternalEffectPool
// C++ default constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknsRlInternalEffectPool::CAknsRlInternalEffectPool()
    {
    }

// -----------------------------------------------------------------------------
// Destructor
// -----------------------------------------------------------------------------
//
CAknsRlInternalEffectPool::~CAknsRlInternalEffectPool()
    {
    for( TInt i=0; i<iEffectArray.Count(); i++ )
        {
        iEffectArray[i]->Effect(KAknsRlEffectPluginInterfaceEffect)->Release();
        }
    iEffectArray.ResetAndDestroy();
    }

// -----------------------------------------------------------------------------
// CAknsRlInternalEffectPool::NewL
// -----------------------------------------------------------------------------
//
CAknsRlInternalEffectPool* CAknsRlInternalEffectPool::NewL()
    {
    CAknsRlInternalEffectPool* self =
        new (ELeave) CAknsRlInternalEffectPool();
    CleanupStack::PushL( self );
    self->ConstructL();
    CleanupStack::Pop(); // self
    return self;
    }

// -----------------------------------------------------------------------------
// CAknsRlInternalEffectPool::ConstructL
// -----------------------------------------------------------------------------
//
void CAknsRlInternalEffectPool::ConstructL()
    {
    AddInstanceL( new (ELeave) CAknsRlEffectPluginApplyColor() );
    AddInstanceL( new (ELeave) CAknsRlEffectPluginApplyGfx() );
    AddInstanceL( new (ELeave) CAknsRlEffectPluginAdjustChannels() );
    AddInstanceL( new (ELeave) CAknsRlEffectPluginAlphaBlend() );
    AddInstanceL( new (ELeave) CAknsRlEffectPluginBlackWhite() );
    AddInstanceL( new (ELeave) CAknsRlEffectPluginBumpMap() );
    AddInstanceL( new (ELeave) CAknsRlEffectPluginChannelBlend() );
    AddInstanceL( new (ELeave) CAknsRlEffectPluginContrast() );
    AddInstanceL( new (ELeave) CAknsRlEffectPluginConvolution() );
    AddInstanceL( new (ELeave) CAknsRlEffectPluginGrayscale() );
    AddInstanceL( new (ELeave) CAknsRlEffectPluginInvert() );
    AddInstanceL( new (ELeave) CAknsRlEffectPluginMovingLayers() );
    AddInstanceL( new (ELeave) CAknsRlEffectPluginNoise() );
    AddInstanceL( new (ELeave) CAknsRlEffectPluginSaturation() );
    AddInstanceL( new (ELeave) CAknsRlEffectPluginSolarize() );
    }

// -----------------------------------------------------------------------------
// CAknsRlInternalEffectPool::GetEffect
// -----------------------------------------------------------------------------
//
MAknsRlEffect* CAknsRlInternalEffectPool::GetEffect( const TUid aEffectUid )
    {
    MAknsRlEffect* effect = NULL;
    for( TInt i=0; i<iEffectArray.Count(); i++ )
        {
        if( iEffectArray[i]->EffectUid() == aEffectUid )
            {
            effect =
                iEffectArray[i]->Effect(KAknsRlEffectPluginInterfaceEffect);
            break;
            }
        }
    return effect;
    }

// -----------------------------------------------------------------------------
// CAknsRlInternalEffectPool::AddInstanceL
// -----------------------------------------------------------------------------
//
void CAknsRlInternalEffectPool::AddInstanceL( CAknsRlEffectPlugin* aPlugin )
    {
    CleanupStack::PushL( aPlugin );
    aPlugin->Effect(KAknsRlEffectPluginInterfaceEffect)->InitializeL();
    User::LeaveIfError( iEffectArray.Append( aPlugin ) );
    CleanupStack::Pop(); // aPlugin
    }

// End of File
