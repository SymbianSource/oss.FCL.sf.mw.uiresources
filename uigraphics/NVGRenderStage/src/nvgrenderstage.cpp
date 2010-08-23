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
// Symbian Foundation Ltd- conversion from t_extendedbitmaprenderstage
//
// Description:
//

#include "nvgrenderstage.h"
#include <graphics/wsrenderstage.h>
#include <s32mem.h>
#include <AknIconHeader.h>
#include <AknIconUtils.h>

TCachedConversion::TCachedConversion() :
  iLink(), iCachedResult(NULL)
  {}

TCachedConversion::~TCachedConversion()
  {
  delete iCachedResult;
  }

const TUid KUidNvgExtendedBitmap = {0x39b9273e};  

CNvgRenderStage::CNvgRenderStage() : 	
	iExtendedBitmapError(KErrNone), 
	iCache(_FOFF(TCachedConversion,iLink)), 
	iCacheIterator(iCache),
	iCacheFree(MAX_NVG_CACHE_SIZE)
	{	
	}

/** Called by CNvgRenderStageFactory::CreateRenderStageL() and 
CNvgRenderStageFactory::CreateFinalRenderStageL() when a new render stage
called "nvgbitmap" is to be created. The only parameter used by this render stage
is aNextStage, the rest are commented out to prevent warnings.
@see MWsRenderStageFactory::CreateRenderStageL()
@see MWsRenderStageFactory::CreateFinalRenderStageL()
 */
CNvgRenderStage* CNvgRenderStage::NewL(MWsGraphicDrawerEnvironment* /*aEnv*/, MWsScreen* /*aScreen*/, MWsScreenRedraw* /*aScreenRedraw*/, CWsRenderStage* aNextStage)
	{
	CNvgRenderStage* stage = new(ELeave) CNvgRenderStage();
	CleanupStack::PushL(stage);
	stage->ConstructL(aNextStage);
	CleanupStack::Pop(stage);
	return stage;
	}
	
void CNvgRenderStage::ConstructL(CWsRenderStage* aNextStage)
	{
	iBrushPattern = new(ELeave) CFbsBitmap;
	iInternalBrushPattern = new(ELeave) CFbsBitmap;
	iGraphicsInterface = new(ELeave) CVGIGraphicsInterface;
  iNvgEngine = CNvgEngine::NewL();
  iNvgEngine->SetVGImageBinder(iGraphicsInterface);
	
	BaseConstructL();	
	SetNext(aNextStage);
	}

CNvgRenderStage::~CNvgRenderStage()
	{	
	iEmptyRegion.Close();
	delete iBrushPattern;
	delete iInternalBrushPattern;
	delete iNvgEngine;
	delete iGraphicsInterface;
	
	iCacheIterator.SetToFirst();
  TCachedConversion* cached = iCacheIterator++;
	while (cached != NULL)
	 {
   delete cached;
   cached = iCacheIterator++;
   }
	}

/** The only interface returned by this render stage is MWsGraphicsContext.
All other interface requests are passed to the base render stage class for resolving.

@see CWsRenderStage::ResolveObjectInterface()

@param aTypeId The type id of the interface to be retreived, must be one of the 
TSurfaceConfiguration interface extension IDs.

@return Returns a pointer to an object that has the requested interface if found, 
otherwise returns NULL.
 */
TAny* CNvgRenderStage::ResolveObjectInterface(TUint aTypeId)
	{	
	switch (aTypeId)
		{
		case MWsGraphicsContext::EWsObjectInterfaceId:
			return static_cast<MWsGraphicsContext*>(this);
		
		default:
			return CWsRenderStage::ResolveObjectInterface(aTypeId);
		}
	}

/** Call Begin() for this render stage and for the next one as well. It is assumed
that this renderstage is chained in front of a renderstage that can draw to a
CGraphicsContext as this renderstage uses MWsGraphicsContext interface from the
next stage to draw to. A pointer to the MWsGraphicsContext interface is saved here
and is used for all subsequent MWsGraphicsContext operations called on this
render stage. 

This render stage draws all extended bitmaps of type 0x39b9273e
and passes all other drawing operations directly to the next render stage through
its MWsGraphicsContext interface.

@see CWsRenderStage::Begin()

@param aRegion The dirty region for which drawing operations are about to be issued.

@post An error of KErrNotFound is set for this render stage if the MWsGraphicsContext
interface of the next render stage cannot be obtained. This render stage relies on
the existence of a subsequent stage with a valid MWsGraphicsContext interface to send
its draw operations to so will not be able to draw anything if no MWsGraphicsContext
is returned by the next render stage. The current error for this render stage can be
retreived by calling GetError().
 */
void CNvgRenderStage::Begin(const TRegion* aRegion)
	{		
	CWsRenderStage* nextStage = Next();
	if (nextStage)
		{
		nextStage->Begin(aRegion);
		
		// Use the graphics context from the next render stage to draw to
		iGc = static_cast<MWsGraphicsContext*>(nextStage->ResolveObjectInterface(MWsGraphicsContext::EWsObjectInterfaceId));
		if (iGc == NULL)
			{
			iExtendedBitmapError = KErrNotFound; 
			}
		}
	}

/** Signals that the currect batch of drawing operations is complete. This
implementation of End() just calls End() for the next render stage in the chain.

@see CWsRenderStage::End()

@param aCompositorReady Will be completed when the render stage is ready to 
receive the next batch of drawing operations.
 */
void CNvgRenderStage::End(TRequestStatus* aCompositorReady)
	{
	if (Next())
		{		
		Next()->End(aCompositorReady);
		}
	}

/** If the passed bitmap is an extended bitmap of type 0x39b9273e, draw it to the stored
graphics context of the next render stage using  DrawExtendedBitmap(), if the passed bitmap
is not an extended bitmap just pass it on to the next render stage directly.

@see CFbsBitGc::BitBlt(const TPoint&, const CFbsBitmap&)
 */
void CNvgRenderStage::BitBlt(const TPoint& aDestPos, const CFbsBitmap& aSourceBitmap)
	{
	if (iGc)
		{
		CFbsBitmap* sourceBitmap = const_cast<CFbsBitmap*>(&aSourceBitmap);
		
		if (aSourceBitmap.ExtendedBitmapType() == KUidNvgExtendedBitmap)
			{						
			sourceBitmap = GetConvertedBitmap(aSourceBitmap);
			}
		
		iGc->BitBlt(aDestPos, *sourceBitmap);
		}
	}

/** If the passed bitmap is an extended bitmap of type 0x39b9273e, draw it to the 
stored graphics context of the next render stage using  DrawExtendedBitmap(), if the
passed bitmap is not an extended bitmap just pass it on to the next render stage directly.

@see CFbsBitGc::BitBlt(const TPoint&, const CFbsBitmap&, const TRect&)
 */
void CNvgRenderStage::BitBlt(const TPoint& aDestPos, const CFbsBitmap& aSourceBitmap, const TRect& aSourceRect)
	{
	if (iGc)
		{			
		CFbsBitmap* sourceBitmap = const_cast<CFbsBitmap*>(&aSourceBitmap);
		
		if (aSourceBitmap.ExtendedBitmapType() == KUidNvgExtendedBitmap)
			{						
			sourceBitmap = GetConvertedBitmap(aSourceBitmap);
			}

		iGc->BitBlt(aDestPos, *sourceBitmap, aSourceRect);
		}
	}

/** If either of the passed bitmaps is an extended bitmap of type 0x39b9273e convert
to a normal bitmap before passing to the next render stage, otherwise
just pass to the next render stage directly.

@see CFbsBitGc::BitBltMasked(const TPoint& aDestPos, const CFbsBitmap&, const TRect&, const CFbsBitmap&, TBool)
 */
void CNvgRenderStage::BitBltMasked(const TPoint& aDestPos, const CFbsBitmap& aSourceBitmap, const TRect& aSourceRect, const CFbsBitmap& aMaskBitmap, TBool aInvertMask)
	{
	if (iGc)
		{		
		CFbsBitmap* sourceBitmap = const_cast<CFbsBitmap*>(&aSourceBitmap);
		CFbsBitmap* maskBitmap = const_cast<CFbsBitmap*>(&aMaskBitmap);		
		
		if (aSourceBitmap.ExtendedBitmapType() == KUidNvgExtendedBitmap)
			{						
			sourceBitmap = GetConvertedBitmap(aSourceBitmap);
			}
		
		if (aMaskBitmap.ExtendedBitmapType() == KUidNvgExtendedBitmap)
			{			
			maskBitmap = GetConvertedBitmap(aMaskBitmap);
			}	
		
		iGc->BitBltMasked(aDestPos, *sourceBitmap, aSourceRect, *maskBitmap, aInvertMask);
		}
	}

/** If either of the passed bitmaps is an extended bitmap of type 0x39b9273e
convert to a normal bitmap before passing to the next render stage, otherwise
just pass to the next render stage directly.

@see CFbsBitGc::BitBltMasked(const TPoint& aDestPos, const CFbsBitmap&, const TRect&, const CFbsBitmap&, TPoint)
 */
void CNvgRenderStage::BitBltMasked(const TPoint& aDestPos, const CFbsBitmap& aSourceBitmap, const TRect& aSourceRect, const CFbsBitmap& aMaskBitmap, const TPoint& aMaskPos)
	{
	if (iGc)
		{		
		CFbsBitmap* sourceBitmap = const_cast<CFbsBitmap*>(&aSourceBitmap);
		CFbsBitmap* maskBitmap = const_cast<CFbsBitmap*>(&aMaskBitmap);
		
		if (aSourceBitmap.ExtendedBitmapType() == KUidNvgExtendedBitmap)
			{
			sourceBitmap = GetConvertedBitmap(aSourceBitmap);
			}
		
		if (aMaskBitmap.ExtendedBitmapType() == KUidNvgExtendedBitmap)
			{
			maskBitmap = GetConvertedBitmap(aMaskBitmap);
			}	
		
		iGc->BitBltMasked(aDestPos, *sourceBitmap, aSourceRect, *maskBitmap, aMaskPos);
		}
	}

/** @see CFbsBitGc::ResetClippingRegion()
 */
void CNvgRenderStage::ResetClippingRegion()
	{
	if (iGc)
		{		
		iGc->ResetClippingRegion();
		}
	}

/** @see CFbsBitGc::Clear()
 */
void CNvgRenderStage::Clear()
	{
	if (iGc)
		{
		iGc->Clear();
		}
	}

/** @see CFbsBitGc::Clear(const TRect&)
 */
void CNvgRenderStage::Clear(const TRect& aRect)
	{
	if (iGc)
		{
		iGc->Clear(aRect);
		}
	}

/** @see CFbsBitGc::ResetBrushPattern()
 */
void CNvgRenderStage::ResetBrushPattern()
	{	
	if (iGc)
		{
		iGc->ResetBrushPattern();
		}
	}

/** @see CFbsBitGc::ResetFont()
 */
void CNvgRenderStage::ResetFont()
	{
	if (iGc)
		{
		iGc->ResetFont();
		}
	}

/** @see CFbsBitGc::DrawArc()
 */
void CNvgRenderStage::DrawArc(const TRect& aRect, const TPoint& aStart, const TPoint& aEnd)
	{	
	if (iGc)
		{
		iGc->DrawArc(aRect, aStart, aEnd);	
		}
	}

/** @see CFbsBitGc::DrawPie()
 */
void CNvgRenderStage::DrawPie(const TRect& aRect, const TPoint& aStart, const TPoint& aEnd)
	{	
	if (iGc)
		{
		iGc->DrawPie(aRect, aStart, aEnd);
		}
	}

/** If the passed bitmap is an extended bitmap of type 0x39b9273e, draw it to the 
stored graphics context of the next render stage using DrawExtendedBitmap(), if the
passed bitmap is not an extended bitmap just pass it on to the next render stage directly.

@see CFbsBitGc::DrawBitmap(const TRect&, const CFbsBitmap&)
 */
void CNvgRenderStage::DrawBitmap(const TRect& aDestRect, const CFbsBitmap& aSourceBitmap)
	{
	if (iGc)
		{	
		CFbsBitmap* sourceBitmap = const_cast<CFbsBitmap*>(&aSourceBitmap);		
		
		if (aSourceBitmap.ExtendedBitmapType() == KUidNvgExtendedBitmap)
			{
			sourceBitmap = GetConvertedBitmap(aSourceBitmap);
			}
				
		iGc->DrawBitmap(aDestRect, *sourceBitmap);	
		}
	}

/** If the passed bitmap is an extended bitmap of type 0x39b9273e, draw it to the 
stored graphics context of the next render stage using DrawExtendedBitmap(), if the
passed bitmap is not an extended bitmap just pass it on to the next render stage directly.

@see CFbsBitGc::DrawBitmap(const TRect&, const CFbsBitmap&, const TRect&)
 */
void CNvgRenderStage::DrawBitmap(const TRect& aDestRect, const CFbsBitmap& aSourceBitmap, const TRect& aSourceRect)
	{
	if (iGc)
		{
		CFbsBitmap* sourceBitmap = const_cast<CFbsBitmap*>(&aSourceBitmap);		
		
		if (aSourceBitmap.ExtendedBitmapType() == KUidNvgExtendedBitmap)
			{
			sourceBitmap = GetConvertedBitmap(aSourceBitmap);
			}
				
		iGc->DrawBitmap(aDestRect, *sourceBitmap, aSourceRect);		
		}
	}

/** If the passed bitmap or mask bitmap is an extended bitmap of type 0x39b9273e
convert it to a normal bitmap before calling DrawBitmapMasked(), normal bitmaps
are passed straight through to the next render stage without conversion.

@see CFbsBitGc::DrawBitmapMasked(const TRect&, const CFbsBitmap&, const TRect&, const CFbsBitmap&, TBool)
 */
void CNvgRenderStage::DrawBitmapMasked(const TRect& aDestRect, const CFbsBitmap& aSourceBitmap,const TRect& aSourceRect, const CFbsBitmap& aMaskBitmap, TBool aInvertMask)
	{	
	if (iGc)
		{
		CFbsBitmap* sourceBitmap = const_cast<CFbsBitmap*>(&aSourceBitmap);
		CFbsBitmap* maskBitmap = const_cast<CFbsBitmap*>(&aMaskBitmap);
		
		if (aSourceBitmap.ExtendedBitmapType() == KUidNvgExtendedBitmap)
			{
			sourceBitmap = GetConvertedBitmap(aSourceBitmap);
			}
		if (aMaskBitmap.ExtendedBitmapType() == KUidNvgExtendedBitmap)
			{
			maskBitmap = GetConvertedBitmap(aMaskBitmap);
			}
	
		iGc->DrawBitmapMasked(aDestRect, *sourceBitmap, aSourceRect, *maskBitmap, aInvertMask);
		}	
	}

/** @see CFbsBitGc::DrawRoundRect(const TRect&, const TSize&)
 */
void CNvgRenderStage::DrawRoundRect(const TRect& aRect, const TSize& aEllipse)
	{	
	if (iGc)
		{
		iGc->DrawRoundRect(aRect, aEllipse);
		}
	}

/** @see CFbsBitGc::DrawPolyLine(const TArray<TPoint>&)
 */
void CNvgRenderStage::DrawPolyLine(const TArray<TPoint>& aPointList) 
	{	
	if (iGc)
		{
		iGc->DrawPolyLine(aPointList);
		}
	}

/** @see CFbsBitGc::DrawPolyLineNoEndPoint(const TArray<TPoint>&)
 */
void CNvgRenderStage::DrawPolyLineNoEndPoint(const TArray<TPoint>& aPointList)  
	{	
	if (iGc)
		{
		iGc->DrawPolyLineNoEndPoint(aPointList);
		}
	}

/** @see CFbsBitGc::DrawPolygon(const TArray<TPoint>&, TFillRule)
 */
void CNvgRenderStage::DrawPolygon(const TArray<TPoint>& aPointList, TFillRule aFillRule)
	{	
	if (iGc)
		{
		iGc->DrawPolygon(aPointList, aFillRule);
		}
	}

/** @see CFbsBitGc::DrawEllipse(const TRect&)
 */
void CNvgRenderStage::DrawEllipse(const TRect& aRect)
	{	
	if (iGc)
		{
		iGc->DrawEllipse(aRect);
		}
	}

/** @see CFbsBitGc::DrawLine(const TPoint&, const TPoint&)
 */
void CNvgRenderStage::DrawLine(const TPoint& aStart, const TPoint& aEnd)
	{
	if (iGc)
		{
		iGc->DrawLine(aStart, aEnd);
		}
	}

/** @see CFbsBitGc::DrawLineTo(const TPoint&)
 */
void CNvgRenderStage::DrawLineTo(const TPoint& aPoint)
	{
	if (iGc)
		{
		iGc->DrawLineTo(aPoint);
		}
	}

/** @see CFbsBitGc::DrawLineBy(const TPoint&)
 */
void CNvgRenderStage::DrawLineBy(const TPoint& aVector)
	{
	if (iGc)
		{
		iGc->DrawLineBy(aVector);
		}
	}

/** @see CFbsBitGc::DrawRect(const TRect&)
 */
void CNvgRenderStage::DrawRect(const TRect& aRect)
	{
	if (iGc)
		{
		iGc->DrawRect(aRect);
		}
	}

/** @see CFbsBitGc::DrawText(const TDesC& aText, const TTextParameters*)
 */
void CNvgRenderStage::DrawText(const TDesC& aText, const TTextParameters* aParam)
	{	
	if (iGc)
		{
		iGc->DrawText(aText, aParam);	
		}
	}

/** @see CFbsBitGc::DrawText(const TDesC& aText, const TTextParameters*, const TPoint&)
 */
void CNvgRenderStage::DrawText(const TDesC& aText, const TTextParameters* aParam, const TPoint& aPosition)
	{	
	if (iGc)
		{
		iGc->DrawText(aText, aParam, aPosition);
		}
	}

/** @see CFbsBitGc::DrawText(const TDesC& aText, const TTextParameters*, const TRect&)
 */
void CNvgRenderStage::DrawText(const TDesC& aText, const TTextParameters* aParam, const TRect& aClipRect)
	{	
	if (iGc)
		{
		iGc->DrawText(aText, aParam, aClipRect);	
		}
	}

/** @see CFbsBitGc::DrawText(const TDesC& aText, const TTextParameters*, const TRect&, TInt, TTextAlign, TInt)
 */
void CNvgRenderStage::DrawText(const TDesC& aText, const TTextParameters* aParam, const TRect& aClipFillRect, TInt aBaselineOffset, TTextAlign aHrz, TInt aMargin)
	{
	if (iGc)
		{
		iGc->DrawText(aText, aParam, aClipFillRect, aBaselineOffset, aHrz, aMargin);
		}
	}

/** @see CFbsBitGc::DrawTextVertical(const TDesC&, const TTextParameters*, TBool)
 */
void CNvgRenderStage::DrawTextVertical(const TDesC& aText, const TTextParameters* aParam, TBool aUp)
	{
	if (iGc)
		{
		iGc->DrawTextVertical(aText, aParam, aUp);
		}
	}

/** @see CFbsBitGc::DrawTextVertical(const TDesC&, const TTextParameters*, const TPoint&, TBool)
 */
void CNvgRenderStage::DrawTextVertical(const TDesC& aText, const TTextParameters* aParam, const TPoint& aPosition, TBool aUp)
	{
	if (iGc)
		{
		iGc->DrawTextVertical(aText, aParam, aPosition, aUp);
		}
	}

/** @see CFbsBitGc::DrawTextVertical(const TDesC&, const TTextParameters*, const TRect&, TBool)
 */
void CNvgRenderStage::DrawTextVertical(const TDesC& aText, const TTextParameters* aParam, const TRect& aClipRect, TBool aUp)
	{	
	if (iGc)
		{
		iGc->DrawTextVertical(aText, aParam, aClipRect, aUp);		
		}
	}

/** @see CFbsBitGc::DrawTextVertical(const TDesC&, const TTextParameters*, const TRect&, TInt aBaselineOffset, TBool, TTextAlign, TInt)
 */
void CNvgRenderStage::DrawTextVertical(const TDesC& aText, const TTextParameters* aParam, const TRect& aClipRect, TInt aBaselineOffset, TBool aUp, TTextAlign aVert, TInt aMargin)
	{
	if (iGc)
		{
		iGc->DrawTextVertical(aText, aParam, aClipRect, aBaselineOffset, aUp, aVert, aMargin);
		}
	}

/** @see CFbsBitGc::DrawTextVertical(const TDesC&, const TTextParameters*, const TRect&, TInt, TInt, TBool, TTextAlign, TInt)
 */
void CNvgRenderStage::DrawTextVertical(const TDesC& aText, const TTextParameters* aParam, const TRect& aClipRect, TInt aBaselineOffset, TInt aTextWidth, TBool aUp, TTextAlign aVert, TInt aMargin)
	{
	if (iGc)
		{
		iGc->DrawTextVertical(aText, aParam, aClipRect, aBaselineOffset, aTextWidth, aUp, aVert, aMargin);	
		}
	}

/** @see CFbsBitGc::MoveTo(const TPoint&)
 */
void CNvgRenderStage::MoveTo(const TPoint& aPoint)
	{
	if (iGc)
		{
		iGc->MoveTo(aPoint);
		}
	}

/** @see CFbsBitGc::MoveBy(const TPoint&)
 */
void CNvgRenderStage::MoveBy(const TPoint& aVector)
	{
	if (iGc)
		{
		iGc->MoveBy(aVector);
		}
	}

/** @see CFbsBitGc::Plot(const TPoint&)
 */
void CNvgRenderStage::Plot(const TPoint& aPoint)
	{
	if (iGc)
		{
		iGc->Plot(aPoint);
		}
	}

/** @see CFbsBitGc::Reset()
 */
void CNvgRenderStage::Reset()
	{
	iExtendedBitmapError = KErrNone;
	iOrigin.SetXY(0,0);
	iBrushStyle = MWsGraphicsContext::ENullBrush;
	if (iGc)
		{	
		iGc->Reset();
		}
	}

/** @see CFbsBitGc::SetBrushColor(const TRgb&)
 */
void CNvgRenderStage::SetBrushColor(const TRgb& aColor)
	{
	if (iGc)
		{
		iGc->SetBrushColor(aColor);
		}
	}

/** @see CFbsBitGc::SetBrushOrigin(const TPoint&)
 */
void CNvgRenderStage::SetBrushOrigin(const TPoint& aOrigin)
	{
	if (iGc)
		{
		iGc->SetBrushOrigin(aOrigin);
		}
	}

/** @see CFbsBitGc::SetBrushStyle(TBrushStyle)
 */
void CNvgRenderStage::SetBrushStyle(TBrushStyle aBrushStyle)
	{	
	if (iGc)
		{
		iGc->SetBrushStyle(aBrushStyle);
		iBrushStyle = aBrushStyle;
		}
	}

/** @see CFbsBitGc::SetClippingRegion(const TRegion&)
 */
void CNvgRenderStage::SetClippingRegion(const TRegion& aRegion)
	{
	if (iGc)
		{
		iGc->SetClippingRegion(aRegion);
		}
	}

/** @see CFbsBitGc::SetDrawMode(TDrawMode)
 */
void CNvgRenderStage::SetDrawMode(TDrawMode aDrawMode)
	{
	if (iGc)
		{
		iGc->SetDrawMode(aDrawMode);
		}
	}

/** @see CFbsBitGc::SetOrigin(const TPoint&)
 */
void CNvgRenderStage::SetOrigin(const TPoint& aPoint)
	{	
	if (iGc)
		{
		iGc->SetOrigin(aPoint);
		iOrigin = aPoint;
		}
	}

/** @see CFbsBitGc::SetPenColor(const TRgb&)
 */
void CNvgRenderStage::SetPenColor(const TRgb& aColor)
	{
	if (iGc)
		{
		iGc->SetPenColor(aColor);
		}
	}

/** @see CFbsBitGc::SetPenStyle(TPenStyle)
 */
void CNvgRenderStage::SetPenStyle(TPenStyle aPenStyle)
	{
	if (iGc)
		{
		iGc->SetPenStyle(aPenStyle);
		}
	}

/** @see CFbsBitGc::SetPenSize(const TSize&)
 */
void CNvgRenderStage::SetPenSize(const TSize& aSize)
	{
	if (iGc)
		{
		iGc->SetPenSize(aSize);
		}
	}

/** @see CFbsBitGc::SetTextShadowColor(const TRgb&)
 */
void CNvgRenderStage::SetTextShadowColor(const TRgb& aColor)
	{
	if (iGc)
		{
		iGc->SetTextShadowColor(aColor);
		}
	}

/** @see CFbsBitGc::SetCharJustification(TInt, TInt)
 */
void CNvgRenderStage::SetCharJustification(TInt aExcessWidth, TInt aNumChars)
	{
	if (iGc)
		{
		iGc->SetCharJustification(aExcessWidth, aNumChars);
		}
	}

/** @see CFbsBitGc::SetWordJustification(TInt, TInt)
 */
void CNvgRenderStage::SetWordJustification(TInt aExcessWidth, TInt aNumGaps)
	{
	if (iGc)
		{
		iGc->SetWordJustification(aExcessWidth, aNumGaps);
		}
	}

/** @see CFbsBitGc::SetUnderlineStyle(TFontUnderline)
 */
void CNvgRenderStage::SetUnderlineStyle(TFontUnderline aUnderlineStyle)
	{
	if (iGc)
		{
		iGc->SetUnderlineStyle(aUnderlineStyle);
		}
	}

/** @see CFbsBitGc::SetStrikethroughStyle(TFontStrikethrough)
 */
void CNvgRenderStage::SetStrikethroughStyle(TFontStrikethrough aStrikethroughStyle)
	{
	if (iGc)
		{
		iGc->SetStrikethroughStyle(aStrikethroughStyle);
		}
	}

/** If the passed bitmap is an extended bitmap of type 0x39b9273e
convert the extended bitmap to a normal bitmap and set the converted bitmap
as the current brush pattern. If the passed bitmap is a normal
bitmap just pass it on to the next render stage.

@see SetBrushPattern(TInt)
@see CFbsBitGc::SetBrushPattern(const CFbsBitmap&)
 */
void CNvgRenderStage::SetBrushPattern(const CFbsBitmap& aBitmap)
	{
	SetBrushPattern(aBitmap.Handle());	
	}

/** If the passed bitmap handle refers to an extended bitmap of type 0x39b9273e
convert the extended bitmap to a normal bitmap and set the converted bitmap
as the current brush pattern. If the passed bitmap handle refers to a normal
bitmap just pass it on to the next render stage.

@see SetBrushPattern(const CFbsBitmap&)
@see CFbsBitGc::SetBrushPattern(TInt)
 */
void CNvgRenderStage::SetBrushPattern(TInt aFbsBitmapHandle)
	{
	if (iGc)
		{
		iBrushPattern->Duplicate(aFbsBitmapHandle);
		if (iBrushPattern->ExtendedBitmapType() == KUidNvgExtendedBitmap)
			{
			iInternalBrushPattern = GetConvertedBitmap(*iBrushPattern);
			iGc->SetBrushPattern(*iInternalBrushPattern);
			}
		else
			{
			iGc->SetBrushPattern(aFbsBitmapHandle);
			}
		}
	}

/** @see CFbsBitGc::SetFont(const CFont*)
 */
void CNvgRenderStage::SetFont(const CFont* aFont)	
	{
	if (iGc)
		{
		iGc->SetFont(aFont);
		}
	}

/** @see CFbsBitGc::CopyRect(const TPoint&, const TRect&)
 */
void CNvgRenderStage::CopyRect(const TPoint& aOffset, const TRect& aRect)
	{
	if (iGc)
		{
		iGc->CopyRect(aOffset, aRect);
		}
	}

/** @see CFbsBitGc::UpdateJustification(const TDesC&, const TTextParameters*)
 */
void CNvgRenderStage::UpdateJustification(const TDesC& aText, const TTextParameters* aParam)
	{
	if (iGc)
		{
		iGc->UpdateJustification(aText, aParam);
		}
	}

/** @see CFbsBitGc::UpdateJustificationVertical(const TDesC&, const TTextParameters*, TBool)
 */
void CNvgRenderStage::UpdateJustificationVertical(const TDesC& aText, const TTextParameters* aParam, TBool aUp)
	{
	if (iGc)
		{
		iGc->UpdateJustificationVertical(aText, aParam, aUp);
		}
	}

/** @see CFbsBitGc::SetFontNoDuplicate(const CFont*)
 */
void CNvgRenderStage::SetFontNoDuplicate(const CFont* aFont)
	{
	if (iGc)
		{
		iGc->SetFontNoDuplicate(aFont);
		}
	}

/** @see CFbsBitGc::HasBrushPattern()
 */
TBool CNvgRenderStage::HasBrushPattern() const
	{
	if (iGc)
		{
		return iGc->HasBrushPattern();
		}
	else
		{
		return EFalse;
		}
	}

/** @see CFbsBitGc::HasFont()
 */
TBool CNvgRenderStage::HasFont() const
	{
	if (iGc)
		{
		return iGc->HasFont();
		}
	else
		{
		return EFalse;
		}
	}

/** @see CFbsBitGc::BrushColor()
 */
TRgb CNvgRenderStage::BrushColor() const
	{
	if (iGc)
		{
		return iGc->BrushColor();
		}
	else
		{
		return KRgbWhite;
		}
	}

/** @see CFbsBitGc::PenColor()
 */
TRgb CNvgRenderStage::PenColor() const
	{
	if (iGc)
		{
		return iGc->PenColor();
		}
	else
		{
		return KRgbBlack;
		}
	}

/** @see MWsGraphicsContext::TextShadowColor()
 */
TRgb CNvgRenderStage::TextShadowColor() const	
	{
	if (iGc)
		{
		return iGc->TextShadowColor();
		}
	else
		{
		return KRgbGray;
		}
	}

/** If an error has been set by this render stage return that error,
otherwise return the error from the graphics context of the next
render stage.

@see MWsGraphicsContext::GetError()
 */
TInt CNvgRenderStage::GetError()
	{
	if (iExtendedBitmapError != KErrNone)
		{
		return iExtendedBitmapError;
		}
	if (iGc)
		{
		return iGc->GetError();
		}
	return KErrNone;
	}

/** @see MWsGraphicsContext::Origin()
 */
TPoint CNvgRenderStage::Origin() const	
	{
	if (iGc)
		{
		return iGc->Origin();
		}
	else
		{
		return TPoint(0,0);
		}
	}

/** @see MWsGraphicsContext::ClippingRegion()
 */
const TRegion& CNvgRenderStage::ClippingRegion()	
	{
	if (iGc)
		{
		return iGc->ClippingRegion();
		}
	else
		{		
		return iEmptyRegion;
		}
	}

/** @see MWsGraphicsContext::Push()
 */
TInt CNvgRenderStage::Push()	
	{
	if (iGc)
		{
		return iGc->Push();
		}
	else
		{
		return KErrGeneral;
		}
	}

/** @see MWsGraphicsContext::Pop()
 */
void CNvgRenderStage::Pop()
	{
	if (iGc)
		{
		iGc->Pop();
		}
	}


/** Helper method that draws an NVG extended bitmap into a normal bitmap. 

@param aExtendedBitmapSrc The extended bitmap to draw 

@pre aExtendedBitmapSrc must be an extended bitmap of extended bitmap type 0x39b9273e
 */

CFbsBitmap* CNvgRenderStage::GetConvertedBitmap(const CFbsBitmap& aExtendedBitmapSrc)
  {
  aExtendedBitmapSrc.BeginDataAccess();
  const TUint8* bmpData = (const TUint8*)aExtendedBitmapSrc.DataAddress();

  TPtr8 IconHeaderPtr((TUint8*)bmpData, KIconHeaderLength, KIconHeaderLength);
  TAknIconHeader iconheader(IconHeaderPtr);

  TUint32 bitmapid = iconheader.GetBitmapId();
  TUint32 handle = aExtendedBitmapSrc.Handle();
  aExtendedBitmapSrc.EndDataAccess();
  CFbsBitmap* error = const_cast<CFbsBitmap*>(&aExtendedBitmapSrc);  // not renderable, but better than panic!
  
  // look to see if we have this in the cache
  iCacheIterator.SetToFirst();
  TCachedConversion* cached = iCacheIterator++;
  while (cached != NULL)
    {
    if (cached->iBitmapID == bitmapid && cached->iDiscriminator == handle)
      {
      // Cache hit
#ifdef DEBUG_NVG_RENDERSTAGE
      RDebug::Printf("NVG Render cache hit for id %08x, handle %d\n", bitmapid, handle);
#endif
      cached->Deque();
      iCache.AddFirst(*cached);  // move to front of the list, to record use
      return cached->iCachedResult;  
      }
    cached = iCacheIterator++;
    }
  
  // missed in the cache, need to perform the conversion
  TInt err = KErrNone;
  if (iCacheFree > 0)
    {
    // just allocate a new entry, which will be added to the end
    TRAP(err, cached = new(ELeave) TCachedConversion);
    if (err != KErrNone)
      {
      return error;
      }
    TRAP(err, cached->iCachedResult = new(ELeave) CFbsBitmap);
    if (err != KErrNone)
      {
      delete cached;
      return error;
      }
    }
  else
    {
    // Remove the least recently used item
    cached = iCache.Last();
    cached->Deque();  // remove from the cache
    iCacheFree++;
#ifdef DEBUG_NVG_RENDERSTAGE
    RDebug::Printf("NVG Render cache removing id %08x, handle %d\n", cached->iBitmapID, cached->iDiscriminator);
#endif
    }
  
  // cached is now available to hold the new result
  cached->iBitmapID = bitmapid;
  cached->iDiscriminator = handle;

  CopyExtendedBitmapToNormalBitmap(aExtendedBitmapSrc, *cached->iCachedResult);
  if (iExtendedBitmapError != KErrNone)
    {
    delete cached;
    return error;
    }
  
  // Newly cached bitmap is valid
  iCache.AddFirst(*cached);
  iCacheFree--;
#ifdef DEBUG_NVG_RENDERSTAGE
  RDebug::Printf("NVG Render cache added id %08x, handle %d (%d free)\n", bitmapid, handle, iCacheFree);
#endif
  return cached->iCachedResult;
  }

/** Helper method that draws an NVG extended bitmap into a normal bitmap. The normal
bitmap passed is resized before the extended bitmap is drawn into it.

@param aExtendedBitmapSrc The extended bitmap to draw in to the normal bitmap aBitmapDest
@param aBitmapDest The normal bitmap that the extended bitmap is to be drawn into

@pre aExtendedBitmapSrc must be an extended bitmap of extended bitmap type 0x39b9273e
@post aBitmapDest has been reset and resized and now contains a representation of the aExtendedBitmapSrc
 */

void CNvgRenderStage::CopyExtendedBitmapToNormalBitmap(const CFbsBitmap& aExtendedBitmapSrc, CFbsBitmap& aBitmapDst)
	{
	TSize size = aExtendedBitmapSrc.SizeInPixels();
	TInt err = aBitmapDst.Create(size, aExtendedBitmapSrc.DisplayMode());
	if (err != KErrNone)
		{
		iExtendedBitmapError = err;
		return;
		}
	
	TRAP(err, iGraphicsInterface->InitializeL(size));
	if (err != KErrNone)
		{
		iExtendedBitmapError = err;
		return;
		}

	// Clear to White before doing anything else
  VGfloat color[4] = { 1.0f, 1.0f, 1.0f, 0.0f };
  vgSeti(VG_SCISSORING, VG_FALSE);
  vgSetfv(VG_CLEAR_COLOR, 4, color);
  vgClear(0, 0, size.iWidth, size.iHeight);

  aExtendedBitmapSrc.BeginDataAccess();
  const TUint8* bmpData = (const TUint8*)aExtendedBitmapSrc.DataAddress();

  TPtr8 IconHeaderPtr((TUint8*)bmpData, KIconHeaderLength, KIconHeaderLength);
  TAknIconHeader iconheader(IconHeaderPtr);

#ifdef DEBUG_NVG_RENDERSTAGE
  RDebug::Printf("ConvertExtendedBitmap: id=%08x size (%d x %d)\n", iconheader.GetBitmapId(), size.iWidth, size.iHeight);
#endif

  TInt dataSize = aExtendedBitmapSrc.DataSize();
  // skip TNVGIconHeader structure - we only know about version 0
  if (bmpData[2] == 0)
    {
    TInt headerlength = bmpData[3];   // should be KIconHeaderLength
    bmpData += headerlength;    
    dataSize -=  headerlength;
    }
  TPtrC8 nvgData(bmpData,dataSize);

    TInt rotAngle = iconheader.GetRotation();
    // setting the rotation angle
    iNvgEngine->Rotate(-rotAngle, size.iWidth >> 1, size.iHeight >>1);
    
    //setting preserve aspect ratio
    TNvgAlignStatusType alignTypeValue = ENvgPreserveAspectRatio_XmidYmid;
    TNvgMeetOrSliceType meetOrSliceTypeValue = ENvgMeet;
    
    switch ( iconheader.GetScaleMode() )
        {
        case EAspectRatioPreserved: // fall through
            {
            // use default
            break;
            }
            // Ensures NVG content fully covers the area of the icon whilst preserving aspect ratio.
        case EAspectRatioPreservedSlice:
            {
            // alignTypeValue use default
            meetOrSliceTypeValue = ENvgSlice;
            break;
            } 
            /* EAspectRatioPreservedAndUnusedSpaceRemoved is mapped to the same values as EAspectRatioNotPreserved
             * because we already have a frame buffer with the dimensions that preserves the aspect ratio.
             * This mapping ensures that NVG engine does not calculate aspect ratio twice and potentially resulting in precision loss.*/
        case EAspectRatioPreservedAndUnusedSpaceRemoved:                        
        case EAspectRatioNotPreserved:
            {            
            alignTypeValue = ENvgPreserveAspectRatio_None;
            // meetOrSliceTypeValue use default
            break;
            }
        }    
    iNvgEngine->SetPreserveAspectRatio(alignTypeValue, meetOrSliceTypeValue);
  
  TInt error = iNvgEngine->DrawNvg(nvgData, aExtendedBitmapSrc.SizeInPixels(), &aBitmapDst, NULL);
  aExtendedBitmapSrc.EndDataAccess(ETrue);
  
  TRAP(err, iGraphicsInterface->CopyBitmapL(&aBitmapDst, NULL));
	if (err != KErrNone)
		{
		iExtendedBitmapError = err;
		return;
		}
	}
