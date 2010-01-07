// Copyright (c) 2008-2010 Nokia Corporation and/or its subsidiary(-ies).
// All rights reserved.
// This component and the accompanying materials are made available
// under the terms of "Eclipse Public License v1.0"
// which accompanies this distribution, and is available
// at the URL "http://www.eclipse.org/legal/epl-v10.html".
//
// Initial Contributors:
// Nokia Corporation - initial contribution.
//
// Contributors:
//
// Description:
//

#ifndef NVGRENDERSTAGE_H
#define NVGRENDERSTAGE_H

/**
@file
@test
@internalComponent - Internal Symbian test code
*/

#include <graphics/wsrenderstage.h>
#include <graphics/wsgraphicdrawer.h>
#include <graphics/wsgraphicscontext.h>
#include <nvg.h>
#include "vgigraphicsinterface.h"

/** Struct to form a simple LRU cache of conversion results
 */
class TCachedConversion
  {
public:
  TCachedConversion();
  ~TCachedConversion();
  inline void Deque();
  
public:
  TDblQueLink iLink;
  TUint32 iBitmapID;
  TUint32 iDiscriminator;
  CFbsBitmap* iCachedResult;
  };

void TCachedConversion::Deque() {iLink.Deque();}

/** This is a render stage used for processing NVG Icon bitmaps in the absence of
graphics acceleration hardware. The software implementation of OpenVG is used to
render the NVG drawing commands onto a normal CFbsBitmap, and a simple LRU cache
is used to keep the results for faster redrawing.

This render stage implements the MWsGraphicsContext interface so that it can intercept
any drawing commands that draw an extended bitmap, any commands that draw a normal 
bitmap are just passed through to the next renderstage (along with any commands that
do not involve bitmaps at all).

A CNvgRenderStage object is created by a CNvgRenderStageFactory.
 */
class CNvgRenderStage : public CWsRenderStage, public MWsGraphicsContext
	{
public:
	static CNvgRenderStage* NewL(MWsGraphicDrawerEnvironment* aEnv, MWsScreen* aScreen, MWsScreenRedraw* aScreenRedraw, CWsRenderStage* aNextStage);
	virtual ~CNvgRenderStage();

public: 
	// Implementation of CWsRenderStage
	TAny* ResolveObjectInterface(TUint aTypeId);
	virtual void Begin(const TRegion* aRegion);
	virtual void End(TRequestStatus* aCompositorReady);
	
public:
	// Implementation of MWsGraphicsContext
	void BitBlt(const TPoint& aDestPos, const CFbsBitmap& aSourceBitmap);
	void BitBlt(const TPoint& aDestPos, const CFbsBitmap& aSourceBitmap,	const TRect& aSourceRect);
	void BitBltMasked(const TPoint& aDestPos, const CFbsBitmap& aSourceBitmap, const TRect& aSourceRect, const CFbsBitmap& aMaskBitmap, TBool aInvertMask);
	void BitBltMasked(const TPoint& aDestPos, const CFbsBitmap& aSourceBitmap, const TRect& aSourceRect, const CFbsBitmap& aMaskBitmap, const TPoint& aMaskPos);
	void ResetClippingRegion();
	void Clear();
	void Clear(const TRect& aRect);
	void ResetBrushPattern();
	void ResetFont();
	void DrawArc(const TRect& aRect, const TPoint& aStart, const TPoint& aEnd);
	void DrawPie(const TRect& aRect, const TPoint& aStart, const TPoint& aEnd);
	void DrawBitmap(const TRect& aDestRect, const CFbsBitmap& aSourceBitmap);
	void DrawBitmap(const TRect& aDestRect, const CFbsBitmap& aSourceBitmap, const TRect& aSourceRect);
	void DrawBitmapMasked(const TRect& aDestRect, const CFbsBitmap& aSourceBitmap,const TRect& aSourceRect, const CFbsBitmap& aMaskBitmap, TBool aInvertMask);
	void DrawRoundRect(const TRect& aRect, const TSize& aEllipse);
	void DrawPolyLine(const TArray<TPoint>& aPointList); 
	void DrawPolyLineNoEndPoint(const TArray<TPoint>& aPointList);  
	void DrawPolygon(const TArray<TPoint>& aPointList, TFillRule aFillRule=EAlternate);
	void DrawEllipse(const TRect& aRect);
	void DrawLine(const TPoint& aStart, const TPoint& aEnd);
	void DrawLineTo(const TPoint& aPoint);
	void DrawLineBy(const TPoint& aVector);
	void DrawRect(const TRect& aRect);
	void DrawText(const TDesC& aText,const TTextParameters* aParam);
	void DrawText(const TDesC& aText,const TTextParameters* aParam,const TPoint& aPosition);
	void DrawText(const TDesC& aText,const TTextParameters* aParam,const TRect& aClipRect);
	void DrawText(const TDesC& aText,const TTextParameters* aParam,const TRect& aClipFillRect,TInt aBaselineOffset,TTextAlign aHrz=ELeft,TInt aMargin=0);
	void DrawTextVertical(const TDesC& aText,const TTextParameters* aParam,TBool aUp);
	void DrawTextVertical(const TDesC& aText,const TTextParameters* aParam,const TPoint& aPosition,TBool aUp);
	void DrawTextVertical(const TDesC& aText,const TTextParameters* aParam,const TRect& aClipRect,TBool aUp);
	void DrawTextVertical(const TDesC& aText,const TTextParameters* aParam,const TRect& aClipRect,TInt aBaselineOffset,TBool aUp,TTextAlign aVert=ELeft,TInt aMargin=0);
	void DrawTextVertical(const TDesC& aText,const TTextParameters* aParam,const TRect& aClipRect,TInt aBaselineOffset,TInt aTextWidth,TBool aUp,TTextAlign aVert=ELeft,TInt aMargin=0);
	void MoveTo(const TPoint& aPoint);
	void MoveBy(const TPoint& aVector);
	void Plot(const TPoint& aPoint);
	void Reset();
	void SetBrushColor(const TRgb& aColor);
	void SetBrushOrigin(const TPoint& aOrigin);
	void SetBrushStyle(TBrushStyle aBrushStyle);
	void SetClippingRegion(const TRegion& aRegion);
	void SetDrawMode(TDrawMode aDrawMode);
	void SetOrigin(const TPoint& aPoint = TPoint(0, 0));
	void SetPenColor(const TRgb& aColor);
	void SetPenStyle(TPenStyle aPenStyle);
	void SetPenSize(const TSize& aSize);
	void SetTextShadowColor(const TRgb& aColor);
	void SetCharJustification(TInt aExcessWidth, TInt aNumChars);
	void SetWordJustification(TInt aExcessWidth, TInt aNumGaps);
	void SetUnderlineStyle(TFontUnderline aUnderlineStyle);
	void SetStrikethroughStyle(TFontStrikethrough aStrikethroughStyle);
	void SetBrushPattern(const CFbsBitmap& aBitmap);
	void SetBrushPattern(TInt aFbsBitmapHandle);
	void SetFont(const CFont* aFont);	
	void CopyRect(const TPoint& aOffset, const TRect& aRect);
	void UpdateJustification(const TDesC& aText,const TTextParameters* aParam);
	void UpdateJustificationVertical(const TDesC& aText,const TTextParameters* aParam,TBool aUp);
	void SetFontNoDuplicate(const CFont* aFont);
	TBool HasBrushPattern() const;
	TBool HasFont() const;
	TRgb BrushColor() const;
	TRgb PenColor() const;
	TRgb TextShadowColor() const;	
	TInt GetError();
	TPoint Origin() const;	
	const TRegion& ClippingRegion();	
	TInt Push();	
	void Pop();
	
private:
	CNvgRenderStage();
	void ConstructL(CWsRenderStage* aNextStage);
	
private:
	// Helper methods that support the implementation of MWsGraphicsContext
	CFbsBitmap* GetConvertedBitmap(const CFbsBitmap& aSourceBitmap);
	void CopyExtendedBitmapToNormalBitmap(const CFbsBitmap& aExtendedBitmapSrc, CFbsBitmap& aBitmapDst);

private:
	MWsGraphicsContext* iGc;	
	TInt iExtendedBitmapError;
	TPoint iOrigin;
	RRegion iEmptyRegion;
	CFbsBitmap* iBrushPattern;
	CFbsBitmap* iInternalBrushPattern;
	MWsGraphicsContext::TBrushStyle iBrushStyle;
	CVGIGraphicsInterface* iGraphicsInterface;
	CNvgEngine* iNvgEngine;
	
	// LRU Cache of rendered bitmaps
#define MAX_NVG_CACHE_SIZE 128

	TDblQue<TCachedConversion> iCache;
  TDblQueIter<TCachedConversion> iCacheIterator;
	TUint iCacheFree;
	};

// #define DEBUG_NVG_RENDERSTAGE

#endif // NVGRENDERSTAGE_H
