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
* Description:  Pictograph drawer. It handles drawing pictographs.
*
*
*/



#ifndef AKN_PICTOGRAPH_DRAWER_IMPL_H
#define AKN_PICTOGRAPH_DRAWER_IMPL_H

// INCLUDES
#include "AknPictographDrawerInterface.h"
#include <e32base.h>

// CONSTANTS

// FORWARD DECLARATIONS

class CFont;
struct TAknPictographData;
class CAknPictographAnimator;
class CCoeControl;

// CLASS DECLARATION

/**
* Avkon's Pictograph drawer
*/
NONSHARABLE_CLASS(CAknPictographDrawer) : 
    public CBase,
    public MAknPictographDrawer
	{
    public:  // Constructors and destructor
        
        /**
        * Two-phased constructor.
        */
	    static CAknPictographDrawer* NewL(
            MAknPictographAnimatorCallBack& aCallBack );
        
        /**
        * Destructor.
        */
        ~CAknPictographDrawer();

    public: // New functions

        void AnimationTick();
	    void HandleGainingForeground();
	    void HandleLosingForeground();

        inline TBool IsAnimating() const;

    public: // Functions from MAknPictographDrawer (commented there)

        HBufC* SupportedPictographCodesL() const;
        TBool IsPictograph( TText aCode ) const;
        TBool ContainsPictographs( const TDesC& aText ) const;

        void DrawPictograph(
            CBitmapContext& aGc,
            const TPoint& aTopLeft,
            TText aCode,
            TAknPictographHeight aHeight ) const;

        void DrawPictograph(
            CBitmapContext& aGc,
            const TRect& aRect,
            TText aCode,
            TAknPictographHeight aHeight ) const;

        void DrawPictograph(
            CBitmapContext& aGc,
            const TRect& aRect,
            const TRect& aClipRect,
            TText aCode,
            TAknPictographHeight aHeight ) const;

        void DrawText(
            CBitmapContext& aGc,
            const CFont& aFont,
            const TDesC& aText,
            const TPoint& aPosition ) const;

        void DrawText(
            CBitmapContext& aGc,
            const CFont& aFont,
            const TDesC& aText,
            const TRect& aBox,
            TInt aBaselineOffset,
            CGraphicsContext::TTextAlign aAlignment = CGraphicsContext::ELeft,
            TInt aLeftMargin = 0 ) const;

        void DrawPictographsInText(
            CBitmapContext& aGc,
            const CFont& aFont,
            const TDesC& aText,
            const TPoint& aPosition ) const;

        void DrawPictographsInText(
            CBitmapContext& aGc,
            const CFont& aFont,
            const TDesC& aText,
            const TRect& aBox,
            TInt aBaselineOffset,
            CGraphicsContext::TTextAlign aAlignment = CGraphicsContext::ELeft,
            TInt aLeftMargin = 0 ) const;

        TBool IsAnimated( TText aCode, TAknPictographHeight aHeight ) const;

         
        TInt SelectPictographHeightForFont(
            const CFont& aFont,
            TAknPictographHeight& aHeight
            ) const;

        TAknPictographDrawingMode SetPictographDrawingMode(
            TAknPictographDrawingMode aDrawingMode);

    private: // New functions

        void DoDrawPictograph( 
            CBitmapContext& aGc,
            const TPoint& aTopLeft,
            const TAknPictographData& aData,
            TRect* aRect ) const;

        void DrawPictographs(
            CBitmapContext& aGc,
            const CFont& aFont,
            const TDesC& aText,
            const TPoint& aPosition,
            const TRect* aClipRect ) const;

        void StartAnimatorIfRequired() const;
        void StopAnimator() const;

        TInt FetchPictographData(
            TText aCode,
            TAknPictographData& aData ) const;

    private:

        /**
        * C++ default constructor.
        */
        CAknPictographDrawer( MAknPictographAnimatorCallBack& aCallBack );

        /**
        * 2nd phase constructor.
        */
        void ConstructL();

    private:    // Data        

        /**
        * Pictograph animator, not owned.
        */
        CAknPictographAnimator* iAnimator;

        /**
        * CallBack to draw animation frames.
        */
        MAknPictographAnimatorCallBack& iCallBack;

        /**
        * Currently used pictograph height. Modified during drawing routine.
        */
        mutable TAknPictographHeight iCurrentHeight;

        /**
        * Flags. Modified during drawing routine.
        */
        mutable TInt16 iFlags;

        /**
        * Currently used pictograph drawing mode.
        */
        TAknPictographDrawingMode iDrawingMode;
    };

#include "AknPictographDrawer.inl"

#endif      // AKN_PICTOGRAPH_DRAWER_IMPL_H
            
// End of File
