/*
* Copyright (c) 2005-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Effect animation.
*
*/


// INCLUDE FILES
#include <AknsEffectAnim.h>
#include <AknsUtils.h>
#include "AknsAlAnimatorBmp.h"

#include <bitstd.h>
#include <coemain.h>
#include <eikenv.h>

// CONSTANTS

// Alpha blended draw is not currently supported. Enable alpha blended draw by
// uncommenting the definition below
//#define AKNS_EFFECT_ANIM_USE_ALPHA

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsEffectAnim::NewL
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsEffectAnim* CAknsEffectAnim::NewL(
    MAknsEffectAnimObserver* aObserver )
    {
    if( !AknsUtils::AvkonHighlightAnimationEnabled() )
        User::Leave( KErrNotSupported );

    if( !AknsUtils::AvkonSkinEnabled() )
        User::Leave( KErrNotSupported );

    if( !aObserver )
        User::Leave( KErrArgument );

    CAknsEffectAnim* self = new(ELeave) CAknsEffectAnim();
    CleanupStack::PushL( self );
    self->ConstructL( aObserver );
    CleanupStack::Pop( self );
    return self;
    }

// -----------------------------------------------------------------------------
// CAknsEffectAnim::~CAknsEffectAnim
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsEffectAnim::~CAknsEffectAnim()
    {
    delete iAnim; //lint !e1551 No exception thrown
    }

// -----------------------------------------------------------------------------
// CAknsEffectAnim::ConstructFromSkinL
// -----------------------------------------------------------------------------
//
EXPORT_C TBool CAknsEffectAnim::ConstructFromSkinL( const TAknsItemID& aItemID )
    {
    return iAnim->ConstructFromSkinL( aItemID );
    }

// -----------------------------------------------------------------------------
// CAknsEffectAnim::CAknsEffectAnim
// -----------------------------------------------------------------------------
//
CAknsEffectAnim::CAknsEffectAnim()
    {
    // Derived from CBase -> members zeroed
    }

// -----------------------------------------------------------------------------
// CAknsEffectAnim::ConstructL
// -----------------------------------------------------------------------------
//
void CAknsEffectAnim::ConstructL( MAknsEffectAnimObserver* aObserver )
    {
    iAnim = CAknsAlAnimatorBmp::NewL( aObserver );
    }

// -----------------------------------------------------------------------------
// CAknsEffectAnim::Start
// -----------------------------------------------------------------------------
//
EXPORT_C TInt CAknsEffectAnim::Start()
    {
    return iAnim->StartAnimation();
    }

// -----------------------------------------------------------------------------
// CAknsEffectAnim::Stop
// -----------------------------------------------------------------------------
//
EXPORT_C TInt CAknsEffectAnim::Stop()
    {
    return iAnim->StopAnimation();
    }

// -----------------------------------------------------------------------------
// CAknsEffectAnim::Pause
// -----------------------------------------------------------------------------
//
EXPORT_C TInt CAknsEffectAnim::Pause()
    {
    return iAnim->PauseAnimation();
    }

// -----------------------------------------------------------------------------
// CAknsEffectAnim::Continue
// -----------------------------------------------------------------------------
//
EXPORT_C TInt CAknsEffectAnim::Continue()
    {
    return iAnim->ContinueAnimation();
    }

// -----------------------------------------------------------------------------
// CAknsEffectAnim::State
// -----------------------------------------------------------------------------
//
EXPORT_C TInt CAknsEffectAnim::State()
    {
    return iAnim->State();
    }//lint !e1762 changing to const will change export name mangling

// -----------------------------------------------------------------------------
// CAknsEffectAnim::MinimumSize
// -----------------------------------------------------------------------------
//
EXPORT_C TSize CAknsEffectAnim::MinimumSize() const
    {
    return TSize( KAknsAlAnimMinimumWidth, KAknsAlAnimMinimumHeight );
    }

// -----------------------------------------------------------------------------
// CAknsEffectAnim::Size
// -----------------------------------------------------------------------------
//
EXPORT_C TSize CAknsEffectAnim::Size() const
    {
    return iAnim->LayerSize();
    }

// -----------------------------------------------------------------------------
// CAknsEffectAnim::NeedsInputLayer
// -----------------------------------------------------------------------------
//
EXPORT_C TBool CAknsEffectAnim::NeedsInputLayer() const
    {
    return iAnim->NeedsInputLayer();
    }

// -----------------------------------------------------------------------------
// CAknsEffectAnim::Render
// -----------------------------------------------------------------------------
//
EXPORT_C TBool CAknsEffectAnim::Render(
    CFbsBitGc& aGc, const TRect& aGcRect ) const
    {
    return Render( *((CBitmapContext*)&aGc), aGcRect );
    }

// -----------------------------------------------------------------------------
// CAknsEffectAnim::Render
// -----------------------------------------------------------------------------
//
EXPORT_C TBool CAknsEffectAnim::Render(
    CWindowGc& aGc, const TRect& aGcRect ) const
    {
    return Render( *((CBitmapContext*)&aGc), aGcRect );
    }

// -----------------------------------------------------------------------------
// CAknsEffectAnim::Render
// -----------------------------------------------------------------------------
//
EXPORT_C TBool CAknsEffectAnim::Render(
    CBitmapContext& aGc, const TRect& aGcRect ) const
    {
    if( !iAnim->OutputRgb() )
        {
        return EFalse;
        }

#ifdef AKNS_EFFECT_ANIM_USE_ALPHA
    if( iAnim->OutputAlpha() )
        {
        aGc.BitBltMasked( aGcRect.iTl, iAnim->OutputRgb(),
                          TRect( TPoint(0, 0), aGcRect.Size() ),
                          iAnim->OutputAlpha(), EFalse );
        }
    else
#endif // AKNS_EFFECT_ANIM_USE_ALPHA
        {
        aGc.BitBlt( aGcRect.iTl, iAnim->OutputRgb(),
                    TRect( TPoint(0, 0), aGcRect.Size() ) );
        }

    return ETrue;
    }

// -----------------------------------------------------------------------------
// CAknsEffectAnim::OutputRgb
// -----------------------------------------------------------------------------
//
EXPORT_C const CFbsBitmap* CAknsEffectAnim::OutputRgb() const
    {
    return iAnim->OutputRgb();
    }

// -----------------------------------------------------------------------------
// CAknsEffectAnim::OutputAlpha
// -----------------------------------------------------------------------------
//
EXPORT_C const CFbsBitmap* CAknsEffectAnim::OutputAlpha() const
    {
    return iAnim->OutputAlpha();
    }

// -----------------------------------------------------------------------------
// CAknsEffectAnim::BeginConfigInputLayersL
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsEffectAnim::BeginConfigInputLayersL(
    const TSize& aNewSize, TBool aAboutToStart )
    {
    iAboutToStart = aAboutToStart;

    // Make sure we have a valid size
    if( aNewSize.iWidth < KAknsAlAnimMinimumWidth ||
        aNewSize.iHeight < KAknsAlAnimMinimumHeight )
        {
        User::Leave( KErrArgument );
        }

    // Determine display mode
    TDisplayMode mode = CCoeEnv::Static()->SystemGc().Device()->DisplayMode();
    // Only two RGB display modes are supported by animation plugins
    if( EColor16M == mode || EColor16MU == mode )
        mode = EColor16MU;
    else // In all other cases use 16-bit colors (565-format assumed)
        mode = EColor64K;

    iAnim->BeginConfigLayersL( aNewSize, mode );
    }

// -----------------------------------------------------------------------------
// CAknsEffectAnim::InputRgbGc
// -----------------------------------------------------------------------------
//
EXPORT_C CFbsBitGc* CAknsEffectAnim::InputRgbGc() const
    {
    return iAnim->InputRgbGc();
    }

// -----------------------------------------------------------------------------
// CAknsEffectAnim::InputAlphaGc
// -----------------------------------------------------------------------------
//
EXPORT_C CFbsBitGc* CAknsEffectAnim::InputAlphaGc() const
    {
    return iAnim->InputAlphaGc();
    }

// -----------------------------------------------------------------------------
// CAknsEffectAnim::EndConfigInputLayersL
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsEffectAnim::EndConfigInputLayersL()
    {
    iAnim->EndConfigLayersL( (iAboutToStart!= 0 ? ETrue: EFalse) );
    }

// -----------------------------------------------------------------------------
// CAknsEffectAnim::UpdateOutput
// -----------------------------------------------------------------------------
//
EXPORT_C TInt CAknsEffectAnim::UpdateOutput()
    {
    return iAnim->UpdateOutput();
    }

// -----------------------------------------------------------------------------
// CAknsEffectAnim::SetIdling
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsEffectAnim::SetIdling( TInt aIntervalMs )
    {
    iAnim->SetIdling( aIntervalMs );
    }

// -----------------------------------------------------------------------------
// CAknsEffectAnim::IsIdling
// -----------------------------------------------------------------------------
//
EXPORT_C TBool CAknsEffectAnim::IsIdling() const
    {
    return iAnim->IsIdling();
    }

// End of file
