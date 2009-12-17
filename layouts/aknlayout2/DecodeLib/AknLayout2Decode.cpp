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


#include "AknLayout2Decode.h"
#include <CdlEngine.h>

LOCAL_C TAknMultiLineTextLayout FixedTextLineLayout( TAknTextLineLayoutImp& aImplLine )
    {
	// Clear the top 16 bits for the 32 bit fontid
	TAknMultiLineTextLayout retLine = static_cast<TAknMultiLineTextLayout>(aImplLine);
	retLine.iFont &= 0x0000ffff;
	return retLine;
    }

// These functions are supplied as a library linked into LayoutInst.dll. They are
// called by the specialised access functions for each instance. It is more efficient,
// in terms of ROM, to use these functions to call the decode functions in AknLayout2.dll
// than it is to call another DLL from the specialised functions.

TAknWindowLineLayout AknLayoutDecode::WindowLine0f(const SImplData* aImplData)
	{
	TAknWindowLineLayoutImp line;
	AknLayoutDecodeSupport::WindowLine(line, aImplData);
	return line;
	}

TAknWindowLineLayout AknLayoutDecode::WindowLine1f(const SImplData* aImplData, TInt aIndex1)
	{
	TAknWindowLineLayoutImp line;
	AknLayoutDecodeSupport::WindowLine(line, aImplData, 1, aIndex1, 0, 0, 0);
	return line;
	}

TAknWindowLineLayout AknLayoutDecode::WindowLine2f(const SImplData* aImplData, TInt aIndex1, TInt aIndex2)
	{
	TAknWindowLineLayoutImp line;
	AknLayoutDecodeSupport::WindowLine(line, aImplData, 2, aIndex1, aIndex2, 0, 0);
	return line;
	}

TAknWindowLineLayout AknLayoutDecode::WindowLine3f(const SImplData* aImplData, TInt aIndex1, TInt aIndex2, TInt aIndex3)
	{
	TAknWindowLineLayoutImp line;
	AknLayoutDecodeSupport::WindowLine(line, aImplData, 3, aIndex1, aIndex2, aIndex3, 0);
	return line;
	}

TAknWindowLineLayout AknLayoutDecode::WindowLine4f(const SImplData* aImplData, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4)
	{
	TAknWindowLineLayoutImp line;
	AknLayoutDecodeSupport::WindowLine(line, aImplData, 4, aIndex1, aIndex2, aIndex3, aIndex4);
	return line;
	}

TAknWindowLineLayout AknLayoutDecode::WindowLine0t(const SImplData* aImplData, const TRect& aParentRect)
	{
	TAknWindowLineLayoutImp line;
	AknLayoutDecodeSupport::WindowLine(line, aImplData, aParentRect, 0, 0, 0, 0, 0);
	return line;
	}

TAknWindowLineLayout AknLayoutDecode::WindowLine1t(const SImplData* aImplData, const TRect& aParentRect, TInt aIndex1)
	{
	TAknWindowLineLayoutImp line;
	AknLayoutDecodeSupport::WindowLine(line, aImplData, aParentRect, 1, aIndex1, 0, 0, 0);
	return line;
	}

TAknWindowLineLayout AknLayoutDecode::WindowLine2t(const SImplData* aImplData, const TRect& aParentRect, TInt aIndex1, TInt aIndex2)
	{
	TAknWindowLineLayoutImp line;
	AknLayoutDecodeSupport::WindowLine(line, aImplData, aParentRect, 2, aIndex1, aIndex2, 0, 0);
	return line;
	}

TAknWindowLineLayout AknLayoutDecode::WindowLine3t(const SImplData* aImplData, const TRect& aParentRect, TInt aIndex1, TInt aIndex2, TInt aIndex3)
	{
	TAknWindowLineLayoutImp line;
	AknLayoutDecodeSupport::WindowLine(line, aImplData, aParentRect, 3, aIndex1, aIndex2, aIndex3, 0);
	return line;
	}

TAknWindowLineLayout AknLayoutDecode::WindowLine4t(const SImplData* aImplData, const TRect& aParentRect, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4)
	{
	TAknWindowLineLayoutImp line;
	AknLayoutDecodeSupport::WindowLine(line, aImplData, aParentRect, 4, aIndex1, aIndex2, aIndex3, aIndex4);
	return line;
	}

TAknTextLineLayout AknLayoutDecode::TextLine0f(const SImplData* aImplData)
	{
	TAknTextLineLayoutImp line;
	AknLayoutDecodeSupport::TextLine(line, aImplData);
	return FixedTextLineLayout( line );
	}

TAknTextLineLayout AknLayoutDecode::TextLine1f(const SImplData* aImplData, TInt aIndex1)
	{
	TAknTextLineLayoutImp line;
	AknLayoutDecodeSupport::TextLine(line, aImplData, 1, aIndex1, 0, 0, 0);
	return FixedTextLineLayout( line );
	}

TAknTextLineLayout AknLayoutDecode::TextLine2f(const SImplData* aImplData, TInt aIndex1, TInt aIndex2)
	{
	TAknTextLineLayoutImp line;
	AknLayoutDecodeSupport::TextLine(line, aImplData, 2, aIndex1, aIndex2, 0, 0);
	return FixedTextLineLayout( line );
	}

TAknTextLineLayout AknLayoutDecode::TextLine3f(const SImplData* aImplData, TInt aIndex1, TInt aIndex2, TInt aIndex3)
	{
	TAknTextLineLayoutImp line;
	AknLayoutDecodeSupport::TextLine(line, aImplData, 3, aIndex1, aIndex2, aIndex3, 0);
	return FixedTextLineLayout( line );
	}

TAknTextLineLayout AknLayoutDecode::TextLine4f(const SImplData* aImplData, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4)
	{
	TAknTextLineLayoutImp line;
	AknLayoutDecodeSupport::TextLine(line, aImplData, 4, aIndex1, aIndex2, aIndex3, aIndex4);
	return FixedTextLineLayout( line );
	}

TAknTextLineLayout AknLayoutDecode::TextLine0t(const SImplData* aImplData, const TRect& aParentRect)
	{
	TAknTextLineLayoutImp line;
	AknLayoutDecodeSupport::TextLine(line, aImplData, aParentRect, 0, 0, 0, 0, 0);
	return FixedTextLineLayout( line );
	}

TAknTextLineLayout AknLayoutDecode::TextLine1t(const SImplData* aImplData, const TRect& aParentRect, TInt aIndex1)
	{
	TAknTextLineLayoutImp line;
	AknLayoutDecodeSupport::TextLine(line, aImplData, aParentRect, 1, aIndex1, 0, 0, 0);
	return FixedTextLineLayout( line );
	}

TAknTextLineLayout AknLayoutDecode::TextLine2t(const SImplData* aImplData, const TRect& aParentRect, TInt aIndex1, TInt aIndex2)
	{
	TAknTextLineLayoutImp line;
	AknLayoutDecodeSupport::TextLine(line, aImplData, aParentRect, 2, aIndex1, aIndex2, 0, 0);
	return FixedTextLineLayout( line );
	}

TAknTextLineLayout AknLayoutDecode::TextLine3t(const SImplData* aImplData, const TRect& aParentRect, TInt aIndex1, TInt aIndex2, TInt aIndex3)
	{
	TAknTextLineLayoutImp line;
	AknLayoutDecodeSupport::TextLine(line, aImplData, aParentRect, 3, aIndex1, aIndex2, aIndex3, 0);
	return FixedTextLineLayout( line );
	}

TAknTextLineLayout AknLayoutDecode::TextLine4t(const SImplData* aImplData, const TRect& aParentRect, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4)
	{
	TAknTextLineLayoutImp line;
	AknLayoutDecodeSupport::TextLine(line, aImplData, aParentRect, 4, aIndex1, aIndex2, aIndex3, aIndex4);
	return FixedTextLineLayout( line );
	}

TAknMultiLineTextLayout AknLayoutDecode::MultiLineTextLine1f(const SImplData* aImplData, TInt aIndex1)
	{
	TAknTextLineLayoutImp line;
	AknLayoutDecodeSupport::MultiLineTextLine(line, aImplData, 1, aIndex1, 0, 0, 0);
	return FixedTextLineLayout( line );
	}

TAknMultiLineTextLayout AknLayoutDecode::MultiLineTextLine2f(const SImplData* aImplData, TInt aIndex1, TInt aIndex2)
	{
	TAknTextLineLayoutImp line;
	AknLayoutDecodeSupport::MultiLineTextLine(line, aImplData, 2, aIndex1, aIndex2, 0, 0);
	return FixedTextLineLayout( line );
	}

TAknMultiLineTextLayout AknLayoutDecode::MultiLineTextLine3f(const SImplData* aImplData, TInt aIndex1, TInt aIndex2, TInt aIndex3)
	{
	TAknTextLineLayoutImp line;
	AknLayoutDecodeSupport::MultiLineTextLine(line, aImplData, 3, aIndex1, aIndex2, aIndex3, 0);
	return FixedTextLineLayout( line );
	}

TAknMultiLineTextLayout AknLayoutDecode::MultiLineTextLine4f(const SImplData* aImplData, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4)
	{
	TAknTextLineLayoutImp line;
	AknLayoutDecodeSupport::MultiLineTextLine(line, aImplData, 4, aIndex1, aIndex2, aIndex3, aIndex4);
	return FixedTextLineLayout( line );
	}

TAknMultiLineTextLayout AknLayoutDecode::MultiLineTextLine1t(const SImplData* aImplData, const TRect& aParentRect, TInt aIndex1)
	{
	TAknTextLineLayoutImp line;
	AknLayoutDecodeSupport::MultiLineTextLine(line, aImplData, aParentRect, 1, aIndex1, 0, 0, 0);
	return FixedTextLineLayout( line );
	}

TAknMultiLineTextLayout AknLayoutDecode::MultiLineTextLine2t(const SImplData* aImplData, const TRect& aParentRect, TInt aIndex1, TInt aIndex2)
	{
	TAknTextLineLayoutImp line;
	AknLayoutDecodeSupport::MultiLineTextLine(line, aImplData, aParentRect, 2, aIndex1, aIndex2, 0, 0);
	return FixedTextLineLayout( line );
	}

TAknMultiLineTextLayout AknLayoutDecode::MultiLineTextLine3t(const SImplData* aImplData, const TRect& aParentRect, TInt aIndex1, TInt aIndex2, TInt aIndex3)
	{
	TAknTextLineLayoutImp line;
	AknLayoutDecodeSupport::MultiLineTextLine(line, aImplData, aParentRect, 3, aIndex1, aIndex2, aIndex3, 0);
	return FixedTextLineLayout( line );
	}

TAknMultiLineTextLayout AknLayoutDecode::MultiLineTextLine4t(const SImplData* aImplData, const TRect& aParentRect, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4)
	{
	TAknTextLineLayoutImp line;
	AknLayoutDecodeSupport::MultiLineTextLine(line, aImplData, aParentRect, 4, aIndex1, aIndex2, aIndex3, aIndex4);
	return FixedTextLineLayout( line );
	}

TAknWindowLineLayout AknLayoutDecode::WindowTable0f(const SImplData* aImplData, TInt aLineIndex)
	{
	TAknWindowLineLayoutImp line;
	AknLayoutDecodeSupport::WindowTable(line, aImplData, aLineIndex, 0, 0, 0, 0, 0);
	return line;
	}

TAknWindowLineLayout AknLayoutDecode::WindowTable1f(const SImplData* aImplData, TInt aLineIndex, TInt aIndex1)
	{
	TAknWindowLineLayoutImp line;
	AknLayoutDecodeSupport::WindowTable(line, aImplData, aLineIndex, 1, aIndex1, 0, 0, 0);
	return line;
	}

TAknWindowLineLayout AknLayoutDecode::WindowTable2f(const SImplData* aImplData, TInt aLineIndex, TInt aIndex1, TInt aIndex2)
	{
	TAknWindowLineLayoutImp line;
	AknLayoutDecodeSupport::WindowTable(line, aImplData, aLineIndex, 2, aIndex1, aIndex2, 0, 0);
	return line;
	}

TAknWindowLineLayout AknLayoutDecode::WindowTable3f(const SImplData* aImplData, TInt aLineIndex, TInt aIndex1, TInt aIndex2, TInt aIndex3)
	{
	TAknWindowLineLayoutImp line;
	AknLayoutDecodeSupport::WindowTable(line, aImplData, aLineIndex, 3, aIndex1, aIndex2, aIndex3, 0);
	return line;
	}

TAknWindowLineLayout AknLayoutDecode::WindowTable4f(const SImplData* aImplData, TInt aLineIndex, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4)
	{
	TAknWindowLineLayoutImp line;
	AknLayoutDecodeSupport::WindowTable(line, aImplData, aLineIndex, 4, aIndex1, aIndex2, aIndex3, aIndex4);
	return line;
	}

TAknWindowLineLayout AknLayoutDecode::WindowTable0t(const SImplData* aImplData, TInt aLineIndex, const TRect& aParentRect)
	{
	TAknWindowLineLayoutImp line;
	AknLayoutDecodeSupport::WindowTable(line, aImplData, aLineIndex, aParentRect, 0, 0, 0, 0, 0);
	return line;
	}

TAknWindowLineLayout AknLayoutDecode::WindowTable1t(const SImplData* aImplData, TInt aLineIndex, const TRect& aParentRect, TInt aIndex1)
	{
	TAknWindowLineLayoutImp line;
	AknLayoutDecodeSupport::WindowTable(line, aImplData, aLineIndex, aParentRect, 1, aIndex1, 0, 0, 0);
	return line;
	}

TAknWindowLineLayout AknLayoutDecode::WindowTable2t(const SImplData* aImplData, TInt aLineIndex, const TRect& aParentRect, TInt aIndex1, TInt aIndex2)
	{
	TAknWindowLineLayoutImp line;
	AknLayoutDecodeSupport::WindowTable(line, aImplData, aLineIndex, aParentRect, 2, aIndex1, aIndex2, 0, 0);
	return line;
	}

TAknWindowLineLayout AknLayoutDecode::WindowTable3t(const SImplData* aImplData, TInt aLineIndex, const TRect& aParentRect, TInt aIndex1, TInt aIndex2, TInt aIndex3)
	{
	TAknWindowLineLayoutImp line;
	AknLayoutDecodeSupport::WindowTable(line, aImplData, aLineIndex, aParentRect, 3, aIndex1, aIndex2, aIndex3, 0);
	return line;
	}

TAknWindowLineLayout AknLayoutDecode::WindowTable4t(const SImplData* aImplData, TInt aLineIndex, const TRect& aParentRect, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4)
	{
	TAknWindowLineLayoutImp line;
	AknLayoutDecodeSupport::WindowTable(line, aImplData, aLineIndex, aParentRect, 4, aIndex1, aIndex2, aIndex3, aIndex4);
	line.SetAllParentOffsets(aParentRect);
	return line;
	}

TAknTextLineLayout AknLayoutDecode::TextTable0f(const SImplData* aImplData, TInt aLineIndex)
	{
	TAknTextLineLayoutImp line;
	AknLayoutDecodeSupport::TextTable(line, aImplData, aLineIndex, 0, 0, 0, 0, 0);
	return FixedTextLineLayout( line );
	}

TAknTextLineLayout AknLayoutDecode::TextTable1f(const SImplData* aImplData, TInt aLineIndex, TInt aIndex1)
	{
	TAknTextLineLayoutImp line;
	AknLayoutDecodeSupport::TextTable(line, aImplData, aLineIndex, 1, aIndex1, 0, 0, 0);
	return FixedTextLineLayout( line );
	}

TAknTextLineLayout AknLayoutDecode::TextTable2f(const SImplData* aImplData, TInt aLineIndex, TInt aIndex1, TInt aIndex2)
	{
	TAknTextLineLayoutImp line;
	AknLayoutDecodeSupport::TextTable(line, aImplData, aLineIndex, 2, aIndex1, aIndex2, 0, 0);
	return FixedTextLineLayout( line );
	}

TAknTextLineLayout AknLayoutDecode::TextTable3f(const SImplData* aImplData, TInt aLineIndex, TInt aIndex1, TInt aIndex2, TInt aIndex3)
	{
	TAknTextLineLayoutImp line;
	AknLayoutDecodeSupport::TextTable(line, aImplData, aLineIndex, 3, aIndex1, aIndex2, aIndex3, 0);
	return FixedTextLineLayout( line );
	}

TAknTextLineLayout AknLayoutDecode::TextTable4f(const SImplData* aImplData, TInt aLineIndex, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4)
	{
	TAknTextLineLayoutImp line;
	AknLayoutDecodeSupport::TextTable(line, aImplData, aLineIndex, 4, aIndex1, aIndex2, aIndex3, aIndex4);
	return FixedTextLineLayout( line );
	}

TAknTextLineLayout AknLayoutDecode::TextTable0t(const SImplData* aImplData, TInt aLineIndex, const TRect& aParentRect)
	{
	TAknTextLineLayoutImp line;
	AknLayoutDecodeSupport::TextTable(line, aImplData, aLineIndex, aParentRect, 0, 0, 0, 0, 0);
	return FixedTextLineLayout( line );
	}

TAknTextLineLayout AknLayoutDecode::TextTable1t(const SImplData* aImplData, TInt aLineIndex, const TRect& aParentRect, TInt aIndex1)
	{
	TAknTextLineLayoutImp line;
	AknLayoutDecodeSupport::TextTable(line, aImplData, aLineIndex, aParentRect, 1, aIndex1, 0, 0, 0);
	return FixedTextLineLayout( line );
	}

TAknTextLineLayout AknLayoutDecode::TextTable2t(const SImplData* aImplData, TInt aLineIndex, const TRect& aParentRect, TInt aIndex1, TInt aIndex2)
	{
	TAknTextLineLayoutImp line;
	AknLayoutDecodeSupport::TextTable(line, aImplData, aLineIndex, aParentRect, 2, aIndex1, aIndex2, 0, 0);
	return FixedTextLineLayout( line );
	}

TAknTextLineLayout AknLayoutDecode::TextTable3t(const SImplData* aImplData, TInt aLineIndex, const TRect& aParentRect, TInt aIndex1, TInt aIndex2, TInt aIndex3)
	{
	TAknTextLineLayoutImp line;
	AknLayoutDecodeSupport::TextTable(line, aImplData, aLineIndex, aParentRect, 3, aIndex1, aIndex2, aIndex3, 0);
	return FixedTextLineLayout( line );
	}

TAknTextLineLayout AknLayoutDecode::TextTable4t(const SImplData* aImplData, TInt aLineIndex, const TRect& aParentRect, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4)
	{
	TAknTextLineLayoutImp line;
	AknLayoutDecodeSupport::TextTable(line, aImplData, aLineIndex, aParentRect, 4, aIndex1, aIndex2, aIndex3, aIndex4);
	return FixedTextLineLayout( line );
	}

TAknLayoutTableLimits AknLayoutDecode::TableLimits(const TUint16* aDataLookup)
	{
	return AknLayoutDecodeSupport::TableLimits(aDataLookup);
	}
