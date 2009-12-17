/*
* Copyright (c) 2002-2004 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:
*
*/


#include "AknLayout2AdaptationDecode.h"
#include <CdlEngine.h>

// These functions are supplied as a library linked into LayoutInst.dll. They are
// called by the specialised access functions for each instance. It is more efficient,
// in terms of ROM, to use these functions to call the decode functions in AknLayout2.dll
// than it is to call another DLL from the specialised functions.

TAknWindowLineLayout AknLayoutAdaptationDecode::WindowLine0f(const TUint* /*aDataLookup*/)
	{
	TAknWindowLineLayout line;
//	AknLayoutAdaptationDecodeSupport::WindowLine(line, aDataLookup);
	return line;
	}

TAknWindowLineLayout AknLayoutAdaptationDecode::WindowLine1f(const TUint* /*aDataLookup*/, TInt /*aIndex1*/)
	{
	TAknWindowLineLayout line;
//	AknLayoutAdaptationDecodeSupport::WindowLine(line, aDataLookup, 1, aIndex1, 0, 0, 0);
	return line;
	}

TAknWindowLineLayout AknLayoutAdaptationDecode::WindowLine2f(const TUint* /*aDataLookup*/, TInt /*aIndex1*/, TInt /*aIndex2*/)
	{
	TAknWindowLineLayout line;
//	AknLayoutAdaptationDecodeSupport::WindowLine(line, aDataLookup, 2, aIndex1, aIndex2, 0, 0);
	return line;
	}

TAknWindowLineLayout AknLayoutAdaptationDecode::WindowLine3f(const TUint* /*aDataLookup*/, TInt /*aIndex1*/, TInt /*aIndex2*/, TInt /*aIndex3*/)
	{
	TAknWindowLineLayout line;
//	AknLayoutAdaptationDecodeSupport::WindowLine(line, aDataLookup, 3, aIndex1, aIndex2, aIndex3, 0);
	return line;
	}

TAknWindowLineLayout AknLayoutAdaptationDecode::WindowLine4f(const TUint* /*aDataLookup*/, TInt /*aIndex1*/, TInt /*aIndex2*/, TInt /*aIndex3*/, TInt /*aIndex4*/)
	{
	TAknWindowLineLayout line;
//	AknLayoutAdaptationDecodeSupport::WindowLine(line, aDataLookup, 4, aIndex1, aIndex2, aIndex3, aIndex4);
	return line;
	}

TAknWindowLineLayout AknLayoutAdaptationDecode::WindowLine0t(const TUint* /*aDataLookup*/, const TRect& /*aParentRect*/)
	{
	TAknWindowLineLayout line;
//	AknLayoutAdaptationDecodeSupport::WindowLine(line, aDataLookup, aParentRect, 0, 0, 0, 0, 0);
	return line;
	}

TAknWindowLineLayout AknLayoutAdaptationDecode::WindowLine1t(const TUint* /*aDataLookup*/, const TRect& /*aParentRect*/, TInt /*aIndex1*/)
	{
	TAknWindowLineLayout line;
//	AknLayoutAdaptationDecodeSupport::WindowLine(line, aDataLookup, aParentRect, 1, aIndex1, 0, 0, 0);
	return line;
	}

TAknWindowLineLayout AknLayoutAdaptationDecode::WindowLine2t(const TUint* /*aDataLookup*/, const TRect& /*aParentRect*/, TInt /*aIndex1*/, TInt /*aIndex2*/)
	{
	TAknWindowLineLayout line;
//	AknLayoutAdaptationDecodeSupport::WindowLine(line, aDataLookup, aParentRect, 2, aIndex1, aIndex2, 0, 0);
	return line;
	}

TAknWindowLineLayout AknLayoutAdaptationDecode::WindowLine3t(const TUint* /*aDataLookup*/, const TRect& /*aParentRect*/, TInt /*aIndex1*/, TInt /*aIndex2*/, TInt /*aIndex3*/)
	{
	TAknWindowLineLayout line;
//	AknLayoutAdaptationDecodeSupport::WindowLine(line, aDataLookup, aParentRect, 3, aIndex1, aIndex2, aIndex3, 0);
	return line;
	}

TAknWindowLineLayout AknLayoutAdaptationDecode::WindowLine4t(const TUint* /*aDataLookup*/, const TRect& /*aParentRect*/, TInt /*aIndex1*/, TInt /*aIndex2*/, TInt /*aIndex3*/, TInt /*aIndex4*/)
	{
	TAknWindowLineLayout line;
//	AknLayoutAdaptationDecodeSupport::WindowLine(line, aDataLookup, aParentRect, 4, aIndex1, aIndex2, aIndex3, aIndex4);
	return line;
	}

TAknTextLineLayout AknLayoutAdaptationDecode::TextLine0f(const TUint* /*aDataLookup*/)
	{
	TAknTextLineLayout line;
//	AknLayoutAdaptationDecodeSupport::TextLine(line, aDataLookup);
	return line;
	}

TAknTextLineLayout AknLayoutAdaptationDecode::TextLine1f(const TUint* /*aDataLookup*/, TInt /*aIndex1*/)
	{
	TAknTextLineLayout line;
//	AknLayoutAdaptationDecodeSupport::TextLine(line, aDataLookup, 1, aIndex1, 0, 0, 0);
	return line;
	}

TAknTextLineLayout AknLayoutAdaptationDecode::TextLine2f(const TUint* /*aDataLookup*/, TInt /*aIndex1*/, TInt /*aIndex2*/)
	{
	TAknTextLineLayout line;
//	AknLayoutAdaptationDecodeSupport::TextLine(line, aDataLookup, 2, aIndex1, aIndex2, 0, 0);
	return line;
	}

TAknTextLineLayout AknLayoutAdaptationDecode::TextLine3f(const TUint* /*aDataLookup*/, TInt /*aIndex1*/, TInt /*aIndex2*/, TInt /*aIndex3*/)
	{
	TAknTextLineLayout line;
//	AknLayoutAdaptationDecodeSupport::TextLine(line, aDataLookup, 3, aIndex1, aIndex2, aIndex3, 0);
	return line;
	}

TAknTextLineLayout AknLayoutAdaptationDecode::TextLine4f(const TUint* /*aDataLookup*/, TInt /*aIndex1*/, TInt /*aIndex2*/, TInt /*aIndex3*/, TInt /*aIndex4*/)
	{
	TAknTextLineLayout line;
//	AknLayoutAdaptationDecodeSupport::TextLine(line, aDataLookup, 4, aIndex1, aIndex2, aIndex3, aIndex4);
	return line;
	}

TAknTextLineLayout AknLayoutAdaptationDecode::TextLine0t(const TUint* /*aDataLookup*/, const TRect& /*aParentRect*/)
	{
	TAknTextLineLayout line;
//	AknLayoutAdaptationDecodeSupport::TextLine(line, aDataLookup, aParentRect, 0, 0, 0, 0, 0);
	return line;
	}

TAknTextLineLayout AknLayoutAdaptationDecode::TextLine1t(const TUint* /*aDataLookup*/, const TRect& /*aParentRect*/, TInt /*aIndex1*/)
	{
	TAknTextLineLayout line;
//	AknLayoutAdaptationDecodeSupport::TextLine(line, aDataLookup, aParentRect, 1, aIndex1, 0, 0, 0);
	return line;
	}

TAknTextLineLayout AknLayoutAdaptationDecode::TextLine2t(const TUint* /*aDataLookup*/, const TRect& /*aParentRect*/, TInt /*aIndex1*/, TInt /*aIndex2*/)
	{
	TAknTextLineLayout line;
//	AknLayoutAdaptationDecodeSupport::TextLine(line, aDataLookup, aParentRect, 2, aIndex1, aIndex2, 0, 0);
	return line;
	}

TAknTextLineLayout AknLayoutAdaptationDecode::TextLine3t(const TUint* /*aDataLookup*/, const TRect& /*aParentRect*/, TInt /*aIndex1*/, TInt /*aIndex2*/, TInt /*aIndex3*/)
	{
	TAknTextLineLayout line;
//	AknLayoutAdaptationDecodeSupport::TextLine(line, aDataLookup, aParentRect, 3, aIndex1, aIndex2, aIndex3, 0);
	return line;
	}

TAknTextLineLayout AknLayoutAdaptationDecode::TextLine4t(const TUint* /*aDataLookup*/, const TRect& /*aParentRect*/, TInt /*aIndex1*/, TInt /*aIndex2*/, TInt /*aIndex3*/, TInt /*aIndex4*/)
	{
	TAknTextLineLayout line;
//	AknLayoutAdaptationDecodeSupport::TextLine(line, aDataLookup, aParentRect, 4, aIndex1, aIndex2, aIndex3, aIndex4);
	return line;
	}

TAknMultiLineTextLayout AknLayoutAdaptationDecode::MultiLineTextLine1f(const TUint* aDataLookup, TInt aIndex1)
	{
	TAknMultiLineTextLayout line;
	AknLayoutAdaptationDecodeSupport::MultiLineTextLine(line, aDataLookup, 1, aIndex1, 0, 0, 0);
	return line;
	}

TAknMultiLineTextLayout AknLayoutAdaptationDecode::MultiLineTextLine2f(const TUint* aDataLookup, TInt aIndex1, TInt aIndex2)
	{
	TAknMultiLineTextLayout line;
	AknLayoutAdaptationDecodeSupport::MultiLineTextLine(line, aDataLookup, 2, aIndex1, aIndex2, 0, 0);
	return line;
	}

TAknMultiLineTextLayout AknLayoutAdaptationDecode::MultiLineTextLine3f(const TUint* aDataLookup, TInt aIndex1, TInt aIndex2, TInt aIndex3)
	{
	TAknMultiLineTextLayout line;
	AknLayoutAdaptationDecodeSupport::MultiLineTextLine(line, aDataLookup, 3, aIndex1, aIndex2, aIndex3, 0);
	return line;
	}

TAknMultiLineTextLayout AknLayoutAdaptationDecode::MultiLineTextLine4f(const TUint* aDataLookup, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4)
	{
	TAknMultiLineTextLayout line;
	AknLayoutAdaptationDecodeSupport::MultiLineTextLine(line, aDataLookup, 4, aIndex1, aIndex2, aIndex3, aIndex4);
	return line;
	}

TAknMultiLineTextLayout AknLayoutAdaptationDecode::MultiLineTextLine1t(const TUint* aDataLookup, const TRect& aParentRect, TInt aIndex1)
	{
	TAknMultiLineTextLayout line;
	AknLayoutAdaptationDecodeSupport::MultiLineTextLine(line, aDataLookup, aParentRect, 1, aIndex1, 0, 0, 0);
	return line;
	}

TAknMultiLineTextLayout AknLayoutAdaptationDecode::MultiLineTextLine2t(const TUint* aDataLookup, const TRect& aParentRect, TInt aIndex1, TInt aIndex2)
	{
	TAknMultiLineTextLayout line;
	AknLayoutAdaptationDecodeSupport::MultiLineTextLine(line, aDataLookup, aParentRect, 2, aIndex1, aIndex2, 0, 0);
	return line;
	}

TAknMultiLineTextLayout AknLayoutAdaptationDecode::MultiLineTextLine3t(const TUint* aDataLookup, const TRect& aParentRect, TInt aIndex1, TInt aIndex2, TInt aIndex3)
	{
	TAknMultiLineTextLayout line;
	AknLayoutAdaptationDecodeSupport::MultiLineTextLine(line, aDataLookup, aParentRect, 3, aIndex1, aIndex2, aIndex3, 0);
	return line;
	}

TAknMultiLineTextLayout AknLayoutAdaptationDecode::MultiLineTextLine4t(const TUint* aDataLookup, const TRect& aParentRect, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4)
	{
	TAknMultiLineTextLayout line;
	AknLayoutAdaptationDecodeSupport::MultiLineTextLine(line, aDataLookup, aParentRect, 4, aIndex1, aIndex2, aIndex3, aIndex4);
	return line;
	}

TAknWindowLineLayout AknLayoutAdaptationDecode::WindowTable0f(const TUint* aDataLookup, TInt aLineIndex)
	{
	TAknWindowLineLayout line;
	AknLayoutAdaptationDecodeSupport::WindowTable(line, aDataLookup, aLineIndex, 0, 0, 0, 0, 0);
	return line;
	}

TAknWindowLineLayout AknLayoutAdaptationDecode::WindowTable1f(const TUint* aDataLookup, TInt aLineIndex, TInt aIndex1)
	{
	TAknWindowLineLayout line;
	AknLayoutAdaptationDecodeSupport::WindowTable(line, aDataLookup, aLineIndex, 1, aIndex1, 0, 0, 0);
	return line;
	}

TAknWindowLineLayout AknLayoutAdaptationDecode::WindowTable2f(const TUint* aDataLookup, TInt aLineIndex, TInt aIndex1, TInt aIndex2)
	{
	TAknWindowLineLayout line;
	AknLayoutAdaptationDecodeSupport::WindowTable(line, aDataLookup, aLineIndex, 2, aIndex1, aIndex2, 0, 0);
	return line;
	}

TAknWindowLineLayout AknLayoutAdaptationDecode::WindowTable3f(const TUint* aDataLookup, TInt aLineIndex, TInt aIndex1, TInt aIndex2, TInt aIndex3)
	{
	TAknWindowLineLayout line;
	AknLayoutAdaptationDecodeSupport::WindowTable(line, aDataLookup, aLineIndex, 3, aIndex1, aIndex2, aIndex3, 0);
	return line;
	}

TAknWindowLineLayout AknLayoutAdaptationDecode::WindowTable4f(const TUint* aDataLookup, TInt aLineIndex, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4)
	{
	TAknWindowLineLayout line;
	AknLayoutAdaptationDecodeSupport::WindowTable(line, aDataLookup, aLineIndex, 4, aIndex1, aIndex2, aIndex3, aIndex4);
	return line;
	}

TAknWindowLineLayout AknLayoutAdaptationDecode::WindowTable0t(const TUint* aDataLookup, TInt aLineIndex, const TRect& aParentRect)
	{
	TAknWindowLineLayout line;
	AknLayoutAdaptationDecodeSupport::WindowTable(line, aDataLookup, aLineIndex, aParentRect, 0, 0, 0, 0, 0);
	return line;
	}

TAknWindowLineLayout AknLayoutAdaptationDecode::WindowTable1t(const TUint* aDataLookup, TInt aLineIndex, const TRect& aParentRect, TInt aIndex1)
	{
	TAknWindowLineLayout line;
	AknLayoutAdaptationDecodeSupport::WindowTable(line, aDataLookup, aLineIndex, aParentRect, 1, aIndex1, 0, 0, 0);
	return line;
	}

TAknWindowLineLayout AknLayoutAdaptationDecode::WindowTable2t(const TUint* aDataLookup, TInt aLineIndex, const TRect& aParentRect, TInt aIndex1, TInt aIndex2)
	{
	TAknWindowLineLayout line;
	AknLayoutAdaptationDecodeSupport::WindowTable(line, aDataLookup, aLineIndex, aParentRect, 2, aIndex1, aIndex2, 0, 0);
	return line;
	}

TAknWindowLineLayout AknLayoutAdaptationDecode::WindowTable3t(const TUint* aDataLookup, TInt aLineIndex, const TRect& aParentRect, TInt aIndex1, TInt aIndex2, TInt aIndex3)
	{
	TAknWindowLineLayout line;
	AknLayoutAdaptationDecodeSupport::WindowTable(line, aDataLookup, aLineIndex, aParentRect, 3, aIndex1, aIndex2, aIndex3, 0);
	return line;
	}

TAknWindowLineLayout AknLayoutAdaptationDecode::WindowTable4t(const TUint* aDataLookup, TInt aLineIndex, const TRect& aParentRect, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4)
	{
	TAknWindowLineLayout line;
	AknLayoutAdaptationDecodeSupport::WindowTable(line, aDataLookup, aLineIndex, aParentRect, 4, aIndex1, aIndex2, aIndex3, aIndex4);
//	line.SetAllParentOffsets(aParentRect);
	return line;
	}

TAknTextLineLayout AknLayoutAdaptationDecode::TextTable0f(const TUint* aDataLookup, TInt aLineIndex)
	{
	TAknTextLineLayout line;
	AknLayoutAdaptationDecodeSupport::TextTable(line, aDataLookup, aLineIndex, 0, 0, 0, 0, 0);
	return line;
	}

TAknTextLineLayout AknLayoutAdaptationDecode::TextTable1f(const TUint* aDataLookup, TInt aLineIndex, TInt aIndex1)
	{
	TAknTextLineLayout line;
	AknLayoutAdaptationDecodeSupport::TextTable(line, aDataLookup, aLineIndex, 1, aIndex1, 0, 0, 0);
	return line;
	}

TAknTextLineLayout AknLayoutAdaptationDecode::TextTable2f(const TUint* aDataLookup, TInt aLineIndex, TInt aIndex1, TInt aIndex2)
	{
	TAknTextLineLayout line;
	AknLayoutAdaptationDecodeSupport::TextTable(line, aDataLookup, aLineIndex, 2, aIndex1, aIndex2, 0, 0);
	return line;
	}

TAknTextLineLayout AknLayoutAdaptationDecode::TextTable3f(const TUint* aDataLookup, TInt aLineIndex, TInt aIndex1, TInt aIndex2, TInt aIndex3)
	{
	TAknTextLineLayout line;
	AknLayoutAdaptationDecodeSupport::TextTable(line, aDataLookup, aLineIndex, 3, aIndex1, aIndex2, aIndex3, 0);
	return line;
	}

TAknTextLineLayout AknLayoutAdaptationDecode::TextTable4f(const TUint* aDataLookup, TInt aLineIndex, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4)
	{
	TAknTextLineLayout line;
	AknLayoutAdaptationDecodeSupport::TextTable(line, aDataLookup, aLineIndex, 4, aIndex1, aIndex2, aIndex3, aIndex4);
	return line;
	}

TAknTextLineLayout AknLayoutAdaptationDecode::TextTable0t(const TUint* aDataLookup, TInt aLineIndex, const TRect& aParentRect)
	{
	TAknTextLineLayout line;
	AknLayoutAdaptationDecodeSupport::TextTable(line, aDataLookup, aLineIndex, aParentRect, 0, 0, 0, 0, 0);
	return line;
	}

TAknTextLineLayout AknLayoutAdaptationDecode::TextTable1t(const TUint* aDataLookup, TInt aLineIndex, const TRect& aParentRect, TInt aIndex1)
	{
	TAknTextLineLayout line;
	AknLayoutAdaptationDecodeSupport::TextTable(line, aDataLookup, aLineIndex, aParentRect, 1, aIndex1, 0, 0, 0);
	return line;
	}

TAknTextLineLayout AknLayoutAdaptationDecode::TextTable2t(const TUint* aDataLookup, TInt aLineIndex, const TRect& aParentRect, TInt aIndex1, TInt aIndex2)
	{
	TAknTextLineLayout line;
	AknLayoutAdaptationDecodeSupport::TextTable(line, aDataLookup, aLineIndex, aParentRect, 2, aIndex1, aIndex2, 0, 0);
	return line;
	}

TAknTextLineLayout AknLayoutAdaptationDecode::TextTable3t(const TUint* aDataLookup, TInt aLineIndex, const TRect& aParentRect, TInt aIndex1, TInt aIndex2, TInt aIndex3)
	{
	TAknTextLineLayout line;
	AknLayoutAdaptationDecodeSupport::TextTable(line, aDataLookup, aLineIndex, aParentRect, 3, aIndex1, aIndex2, aIndex3, 0);
	return line;
	}

TAknTextLineLayout AknLayoutAdaptationDecode::TextTable4t(const TUint* aDataLookup, TInt aLineIndex, const TRect& aParentRect, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4)
	{
	TAknTextLineLayout line;
	AknLayoutAdaptationDecodeSupport::TextTable(line, aDataLookup, aLineIndex, aParentRect, 4, aIndex1, aIndex2, aIndex3, aIndex4);
	return line;
	}

TAknLayoutTableLimits AknLayoutAdaptationDecode::TableLimits(const TUint* aDataLookup)
	{
	return AknLayoutAdaptationDecodeSupport::TableLimits(aDataLookup);
	}
