/*
* Copyright (c) 2002 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Pictograph drawer
*
*/



// INCLUDE FILES
#include "AknPictographDrawer.h"
#include "AknPictographConstants.h"
#include "AknPictographRange.h"
#include "AknPictographFactory.h"
#include "AknPictographAnimator.h"
#include "AknPictographPanic.h"
#include "AknPictographDrawerFlags.h"

#include <gdi.h>
#include <fbs.h>
#include <eikenv.h>
#include <coecntrl.h>

// CONSTANTS

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknPictographDrawer::CAknPictographDrawer
// C++ default constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknPictographDrawer::CAknPictographDrawer( 
    MAknPictographAnimatorCallBack& aCallBack ) :
        iCallBack( aCallBack ), iDrawingMode(EDrawingModeNormal)
    {
    }

// -----------------------------------------------------------------------------
// CAknPictographDrawer::ConstructL
// Symbian 2nd phase constructor can leave.
// -----------------------------------------------------------------------------
//
void CAknPictographDrawer::ConstructL()
    {
    iAnimator = static_cast<CAknPictographAnimator*>(
        CCoeEnv::Static( KUidAknPictographAnimator ) );

    if ( !iAnimator )
        {
        // adds CCoeStatic in CoeEnv
        iAnimator = CAknPictographAnimator::CreateSingletonL();
        }

    iAnimator->AddClientL( *this );
    }

// -----------------------------------------------------------------------------
// CAknPictographDrawer::NewL
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
CAknPictographDrawer* CAknPictographDrawer::NewL(
    MAknPictographAnimatorCallBack& aCallBack )
    {
    CAknPictographDrawer* self = 
        new( ELeave ) CAknPictographDrawer( aCallBack );
    CleanupStack::PushL( self );
    self->ConstructL();
    CleanupStack::Pop();
    return self;
    }

// Destructor
CAknPictographDrawer::~CAknPictographDrawer()
    {
    // CCoeStatic list is destroyed in Cone before AppUi, so have to check if
    // it still exist here.
    if ( CCoeEnv::Static( KUidAknPictographAnimator ) )
        {
        StopAnimator();
        if ( iAnimator->RemoveClient( *this ) == 0 )
            {
            // Removes CCoeStatic
            delete iAnimator;
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknPictographDrawer::SupportedPictographCodesL
// -- API method --
// -----------------------------------------------------------------------------
//
HBufC* CAknPictographDrawer::SupportedPictographCodesL() const
    {
    return AknPictographFactory::SupportedPictographCodesL();
    }

// -----------------------------------------------------------------------------
// CAknPictographDrawer::IsPictograph
// -- API method --
// -----------------------------------------------------------------------------
//
TBool CAknPictographDrawer::IsPictograph( TText aCode ) const
    {
    return ( aCode >= KPictographRangeStart &&
             aCode <= KPictographRangeEnd );
    }

// -----------------------------------------------------------------------------
// CAknPictographDrawer::ContainsPictographs
// -- API method --
// -----------------------------------------------------------------------------
//
TBool CAknPictographDrawer::ContainsPictographs( const TDesC& aText ) const
    {
    const TText* text = aText.Ptr();
    TInt length( aText.Length() );

    TBool ret( EFalse );

    for ( TInt i = 0 ; i < length ; i++ )
        {
        if ( IsPictograph( text[i] ) )
            {
            ret = ETrue;
            break;
            }
        }

    return ret;
    }

// -----------------------------------------------------------------------------
// CAknPictographDrawer::DrawPictograph
// -- API method --
// -----------------------------------------------------------------------------
//
void CAknPictographDrawer::DrawPictograph(
    CBitmapContext& aGc,
    const TPoint& aTopLeft,
    TText aCode,
    TAknPictographHeight aHeight ) const
    {
    iFlags &= ~KFlagNullBrushSet;

    iCurrentHeight = aHeight;
    TAknPictographData data;

    TInt ret = FetchPictographData( aCode, data );

    if ( ret == KErrNone )
        {
        DoDrawPictograph( aGc, aTopLeft, data, NULL );
        }
    }

// -----------------------------------------------------------------------------
// CAknPictographDrawer::DrawPictograph
// -- API method --
// -----------------------------------------------------------------------------
//
void CAknPictographDrawer::DrawPictograph(
    CBitmapContext& aGc,
    const TRect& aRect,
    TText aCode,
    TAknPictographHeight aHeight ) const
    {
    DrawPictograph(
        aGc,
        aRect,
        aRect,
        aCode,
        aHeight );
    }

// -----------------------------------------------------------------------------
// CAknPictographDrawer::DrawPictograph
// -- API method --
// -----------------------------------------------------------------------------
//
void CAknPictographDrawer::DrawPictograph(
    CBitmapContext& aGc,
    const TRect& aRect,
    const TRect& aClipRect,
    TText aCode,
    TAknPictographHeight aHeight ) const
    {
    iFlags &= ~KFlagNullBrushSet;

    iCurrentHeight = aHeight;
    TAknPictographData data;

    TInt ret = FetchPictographData( aCode, data );

    if ( ret == KErrNone )
        {
        // Center the pictograph bitmap in the given rect.
        // Round to the left and down if required.

        TRect pictoRect( aRect );

        TInt rectWidth = aRect.Width();
        TInt rectHeight = aRect.Height();

        if ( data.iSize.iWidth < rectWidth )
            {
            pictoRect.iTl.iX += ( rectWidth - data.iSize.iWidth ) / 2;
            }
        if ( data.iSize.iHeight < rectHeight )
            {
            // +1 makes rounding down instead of up.
            pictoRect.iTl.iY += ( rectHeight - data.iSize.iHeight + 1 ) / 2;
            }

        pictoRect.iBr.iX = pictoRect.iTl.iX + data.iSize.iWidth;
        pictoRect.iBr.iY = pictoRect.iTl.iY + data.iSize.iHeight;

        // Calculate rect that is drawn in the pictograph bitmap,
        // based on cliprect.

        TRect intersection = pictoRect;
        intersection.Intersection( aClipRect );

        TPoint topLeft = intersection.iTl;

        // change rect coordinates relative to bitmap's top left
        intersection.Move( -pictoRect.iTl.iX, -pictoRect.iTl.iY );

        DoDrawPictograph( aGc, topLeft, data, &intersection );
        }
    }

// -----------------------------------------------------------------------------
// CAknPictographDrawer::DrawText
// -- API method --
// -----------------------------------------------------------------------------
//
void CAknPictographDrawer::DrawText(
    CBitmapContext& aGc,
    const CFont& aFont,
    const TDesC& aText,
    const TPoint& aPosition ) const
    {
    aGc.DrawText( aText, aPosition );
    DrawPictographsInText( aGc, aFont, aText, aPosition );
    }

// -----------------------------------------------------------------------------
// CAknPictographDrawer::DrawText
// -- API method --
// -----------------------------------------------------------------------------
//
void CAknPictographDrawer::DrawText(
    CBitmapContext& aGc,
    const CFont& aFont,
    const TDesC& aText,
    const TRect& aBox,
    TInt aBaselineOffset,
    CGraphicsContext::TTextAlign aAlignment,
    TInt aLeftMargin ) const
    {
    aGc.DrawText( aText, aBox, aBaselineOffset, aAlignment, aLeftMargin );

    DrawPictographsInText( 
        aGc, aFont, aText, aBox, aBaselineOffset, aAlignment, aLeftMargin );
    }

// -----------------------------------------------------------------------------
// CAknPictographDrawer::DrawPictographsInText
// -- API method --
// -----------------------------------------------------------------------------
//
void CAknPictographDrawer::DrawPictographsInText(
    CBitmapContext& aGc,
    const CFont& aFont,
    const TDesC& aText,
    const TPoint& aPosition ) const
    {
    if ( !ContainsPictographs( aText ) )
        {
        return;
        }

    DrawPictographs( aGc, aFont, aText, aPosition, NULL );
    }

// -----------------------------------------------------------------------------
// CAknPictographDrawer::DrawPictographsInText
// -- API method --
// -----------------------------------------------------------------------------
//
void CAknPictographDrawer::DrawPictographsInText(
    CBitmapContext& aGc,
    const CFont& aFont,
    const TDesC& aText,
    const TRect& aBox,
    TInt aBaselineOffset,
    CGraphicsContext::TTextAlign aAlignment,
    TInt aMargin ) const
    {
    if ( !ContainsPictographs( aText ) )
        {
        return;
        }

    // Work out the text layout.
    TPoint p( aBox.iTl );
    p.iY += aBaselineOffset;

    if ( aAlignment == CGraphicsContext::ELeft )
        {
        p.iX += aMargin;
        }
    else
        {
        // measure the text
	    CFont::TMeasureTextInput input;
	    input.iFlags |= CFont::TMeasureTextInput::EFVisualOrder;
	    TInt textWidth = aFont.MeasureText( aText, &input );

        if ( aAlignment == CGraphicsContext::ERight )
            {
            p.iX = aBox.iBr.iX - aMargin - textWidth;
            }
        else if ( aAlignment == CGraphicsContext::ECenter )
            {
            p.iX += aBox.Width() / 2 + aMargin - textWidth / 2;
            }
        }

    DrawPictographs( aGc, aFont, aText, p, &aBox );
    }

// -----------------------------------------------------------------------------
// CAknPictographDrawer::IsAnimated
// -----------------------------------------------------------------------------
//
TBool CAknPictographDrawer::IsAnimated(
    TText aCode, TAknPictographHeight aHeight ) const
    {
    TAknPictographData data;

    return AknPictographFactory::AnimatedPictographData(
        aCode, aHeight, 0, data ) == KErrNone;
    }

// -----------------------------------------------------------------------------
// CAknPictographDrawer::SelectPictographHeightForFont
// -----------------------------------------------------------------------------
//
TInt CAknPictographDrawer::SelectPictographHeightForFont(
            const CFont& aFont,
            TAknPictographHeight& aHeight ) const
    {
    return AknPictographFactory::SelectPictographHeightForFont(aFont,aHeight);
    }

// -----------------------------------------------------------------------------
// CAknPictographDrawer::SetPictographDrawingMode
// -----------------------------------------------------------------------------
//
TAknPictographDrawingMode CAknPictographDrawer::SetPictographDrawingMode(
            TAknPictographDrawingMode aDrawingMode)
    {
    TAknPictographDrawingMode currentDrawingMode = iDrawingMode;
    iDrawingMode = aDrawingMode;
    return currentDrawingMode;
    }

// -----------------------------------------------------------------------------
// CAknPictographDrawer::DrawPictographs
// -----------------------------------------------------------------------------
//
void CAknPictographDrawer::DrawPictographs(
    CBitmapContext& aGc,
    const CFont& aFont,
    const TDesC& aText,
    const TPoint& aPosition,
    const TRect* aClipRect ) const
    {

    // Choose pictograph height based on font.
    if( AknPictographFactory::SelectPictographHeightForFont(
            aFont,
            iCurrentHeight
            ) != KErrNone)

        {
        return;
        }

    TInt topY = aPosition.iY - aFont.AscentInPixels();
    TInt bottomY = aPosition.iY + aFont.DescentInPixels();

    const TText* text = aText.Ptr();
    TInt length( aText.Length() );

    iFlags &= ~KFlagNullBrushSet;
    iFlags |= KFlagDrawingMultiplePictographs;
   

    // Draw the pictographs in loop.
    for ( TInt i = 0 ; i < length ; i++ )
        {
        if ( IsPictograph( text[i] ) )
            {
            TInt x = aPosition.iX;
            x += aFont.TextWidthInPixels( aText.Left( i ) );

            TRect rect( x, topY, x + aFont.CharWidthInPixels( text[i] ), bottomY );
            TRect clipRect = aClipRect ? *aClipRect : rect;

            DrawPictograph(
                aGc, 
                rect,
                clipRect,
                text[i],
                iCurrentHeight );
            }
        }
    iFlags &= ~KFlagDrawingMultiplePictographs;
    }

// -----------------------------------------------------------------------------
// CAknPictographDrawer::HandleGainingForeground
// -----------------------------------------------------------------------------
//
void CAknPictographDrawer::HandleGainingForeground()
    {
    StartAnimatorIfRequired();
    }

// -----------------------------------------------------------------------------
// CAknPictographDrawer::HandleLosingForeground
// -----------------------------------------------------------------------------
//
void CAknPictographDrawer::HandleLosingForeground()
    {
    StopAnimator();
    }

// -----------------------------------------------------------------------------
// CAknPictographDrawer::DoDrawPictograph
// -----------------------------------------------------------------------------
//
void CAknPictographDrawer::DoDrawPictograph( 
    CBitmapContext& aGc,
    const TPoint& aTopLeft,
    const TAknPictographData& aData,
    TRect* aRect ) const
    {
    // First get the index for accessing the correct bitmap
    // This also validates iCurrentHeight 
    TUint bitmapIndex;
    if( AknPictographFactory::GetArrayIndexForHeight(iCurrentHeight,bitmapIndex) != KErrNone )
        {
        return;
        }

    if ( aData.iAnimated )
        {
        // Animated pictographs used
        iFlags |= KFlagAnimatedPictographs;
        StartAnimatorIfRequired();
        }

    TRect rect = aRect ? *aRect : TRect( aData.iSize );

    // Move to the correct x-offset in the pictograph collection bitmap
    rect.Move( aData.iOffset, 0 );

    RPointerArray<CFbsBitmap>* bitmaps = iAnimator->Bitmaps();
    RPointerArray<CFbsBitmap>* masks = iAnimator->Masks();

    CFbsBitmap* bitmap = (*bitmaps)[bitmapIndex];
    CFbsBitmap* mask = (*masks)[bitmapIndex];


    if ( EDrawingModeWhite==iDrawingMode && 
         !(iFlags & KFlagDrawingMultiplePictographs) )
        {
        // Note: EDrawingModeWhite is supported only if 
        // a single pictograph is drawn only per component->Draw() call.
        // This restriction is needed because aGc.BitBltMasked calls are cached
        // in client side as a result only the last pictograph will be drawn
        // in place all other aGc.BitBltMasked calls.
        bitmap = iAnimator->WhiteBitmap();
        CFbsBitGc* maskGc = iAnimator->WhiteBitmapMaskGc();
        maskGc->Clear();
        maskGc->BitBlt(TPoint(0,0), mask, rect);
        mask = iAnimator->WhiteBitmapMask();
        rect.Move( -rect.iTl );
        }
    
    if ( !( iFlags & KFlagNullBrushSet ) )
        {
        // To minimize WS buffer consumption, we set null brush
        // only once per API call.
        aGc.SetBrushStyle( CGraphicsContext::ENullBrush );
        iFlags |= KFlagNullBrushSet;
        }

    aGc.BitBltMasked(
        aTopLeft,
        bitmap,
        rect,
        mask,
        ETrue );
    }

// -----------------------------------------------------------------------------
// CAknPictographDrawer::AnimationTick
// -----------------------------------------------------------------------------
//
void CAknPictographDrawer::AnimationTick()
    {
    // Clear animated pictographs flag before callback to see whether they are
    // needed any more or not (the flag will be updated during the callback).
    iFlags &= ~KFlagAnimatedPictographs;

    iCallBack.DrawPictographArea();

    // If no animation was required during the redraw callback,
    // stop the animator.
    // It will be started again when a request to draw an animated pictograph
    // is detected.
    if ( !( iFlags & KFlagAnimatedPictographs ) )
        {
        StopAnimator();
        }
    }

// -----------------------------------------------------------------------------
// CAknPictographDrawer::StartAnimatorIfRequired
// -----------------------------------------------------------------------------
//
void CAknPictographDrawer::StartAnimatorIfRequired() const
    {
    TInt bits = iFlags & ( KFlagAnimatedPictographs | KFlagTimerStarted );

    // Animated pictographs but timer not started?
    if ( bits == KFlagAnimatedPictographs )
        {
        iAnimator->Start();
        iFlags |= KFlagTimerStarted;
        }
    }

// -----------------------------------------------------------------------------
// CAknPictographDrawer::StopAnimator
// -----------------------------------------------------------------------------
//
void CAknPictographDrawer::StopAnimator() const
    {
    if ( iFlags & KFlagTimerStarted )
        {
        iAnimator->Stop();
        iFlags &= ~KFlagTimerStarted;
        }
    }

// -----------------------------------------------------------------------------
// CAknPictographDrawer::FetchPictographData
// -----------------------------------------------------------------------------
//
TInt CAknPictographDrawer::FetchPictographData(
    TText aCode,
    TAknPictographData& aData ) const
    {
    TInt ret = AknPictographFactory::StaticPictographData(
        aCode, iCurrentHeight, aData );

    if ( ret != KErrNone )
        {
        ret = AknPictographFactory::AnimatedPictographData(
            aCode, iCurrentHeight, iAnimator->Counter(), aData );
        }

    return ret;
    }

//  End of File  
