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


#ifndef AKNLAYOUT2DECODE_H
#define AKNLAYOUT2DECODE_H

#include <AknLayout2DataDef.h>

class AknLayoutDecode
	{
public:
	/**
	* Data decode functions
	* There are six main types of decode functions: WindowLine, TextLine,
	* MultiLineTextLine, WindowTable, TextTable and TableLimits.
	* For each of the line and table access functions, there are 10 variants.
	* There are 5 that take parent paramters and 5 that don't.
	* In each 5, there are versions that take from 0 to 4 index parameters.
	*
	* The function naming convention is <accessType><params><parent>, where <parent>
	* is t for true (takes a parent parameter) and f for false.
	*/
	static TAknWindowLineLayout WindowLine0f(const SImplData* aImplData);
	static TAknWindowLineLayout WindowLine1f(const SImplData* aImplData, TInt aIndex1);
	static TAknWindowLineLayout WindowLine2f(const SImplData* aImplData, TInt aIndex1, TInt aIndex2);
	static TAknWindowLineLayout WindowLine3f(const SImplData* aImplData, TInt aIndex1, TInt aIndex2, TInt aIndex3);
	static TAknWindowLineLayout WindowLine4f(const SImplData* aImplData, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4);
	static TAknWindowLineLayout WindowLine0t(const SImplData* aImplData, const TRect& aParentRect);
	static TAknWindowLineLayout WindowLine1t(const SImplData* aImplData, const TRect& aParentRect, TInt aIndex1);
	static TAknWindowLineLayout WindowLine2t(const SImplData* aImplData, const TRect& aParentRect, TInt aIndex1, TInt aIndex2);
	static TAknWindowLineLayout WindowLine3t(const SImplData* aImplData, const TRect& aParentRect, TInt aIndex1, TInt aIndex2, TInt aIndex3);
	static TAknWindowLineLayout WindowLine4t(const SImplData* aImplData, const TRect& aParentRect, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4);

	static TAknTextLineLayout TextLine0f(const SImplData* aImplData);
	static TAknTextLineLayout TextLine1f(const SImplData* aImplData, TInt aIndex1);
	static TAknTextLineLayout TextLine2f(const SImplData* aImplData, TInt aIndex1, TInt aIndex2);
	static TAknTextLineLayout TextLine3f(const SImplData* aImplData, TInt aIndex1, TInt aIndex2, TInt aIndex3);
	static TAknTextLineLayout TextLine4f(const SImplData* aImplData, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4);
	static TAknTextLineLayout TextLine0t(const SImplData* aImplData, const TRect& aParentRect);
	static TAknTextLineLayout TextLine1t(const SImplData* aImplData, const TRect& aParentRect, TInt aIndex1);
	static TAknTextLineLayout TextLine2t(const SImplData* aImplData, const TRect& aParentRect, TInt aIndex1, TInt aIndex2);
	static TAknTextLineLayout TextLine3t(const SImplData* aImplData, const TRect& aParentRect, TInt aIndex1, TInt aIndex2, TInt aIndex3);
	static TAknTextLineLayout TextLine4t(const SImplData* aImplData, const TRect& aParentRect, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4);

	static TAknMultiLineTextLayout MultiLineTextLine1f(const SImplData* aImplData, TInt aIndex1);
	static TAknMultiLineTextLayout MultiLineTextLine2f(const SImplData* aImplData, TInt aIndex1, TInt aIndex2);
	static TAknMultiLineTextLayout MultiLineTextLine3f(const SImplData* aImplData, TInt aIndex1, TInt aIndex2, TInt aIndex3);
	static TAknMultiLineTextLayout MultiLineTextLine4f(const SImplData* aImplData, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4);
	static TAknMultiLineTextLayout MultiLineTextLine1t(const SImplData* aImplData, const TRect& aParentRect, TInt aIndex1);
	static TAknMultiLineTextLayout MultiLineTextLine2t(const SImplData* aImplData, const TRect& aParentRect, TInt aIndex1, TInt aIndex2);
	static TAknMultiLineTextLayout MultiLineTextLine3t(const SImplData* aImplData, const TRect& aParentRect, TInt aIndex1, TInt aIndex2, TInt aIndex3);
	static TAknMultiLineTextLayout MultiLineTextLine4t(const SImplData* aImplData, const TRect& aParentRect, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4);

	static TAknWindowLineLayout WindowTable0f(const SImplData* aImplData, TInt aLineIndex);
	static TAknWindowLineLayout WindowTable1f(const SImplData* aImplData, TInt aLineIndex, TInt aIndex1);
	static TAknWindowLineLayout WindowTable2f(const SImplData* aImplData, TInt aLineIndex, TInt aIndex1, TInt aIndex2);
	static TAknWindowLineLayout WindowTable3f(const SImplData* aImplData, TInt aLineIndex, TInt aIndex1, TInt aIndex2, TInt aIndex3);
	static TAknWindowLineLayout WindowTable4f(const SImplData* aImplData, TInt aLineIndex, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4);
	static TAknWindowLineLayout WindowTable0t(const SImplData* aImplData, TInt aLineIndex, const TRect& aParentRect);
	static TAknWindowLineLayout WindowTable1t(const SImplData* aImplData, TInt aLineIndex, const TRect& aParentRect, TInt aIndex1);
	static TAknWindowLineLayout WindowTable2t(const SImplData* aImplData, TInt aLineIndex, const TRect& aParentRect, TInt aIndex1, TInt aIndex2);
	static TAknWindowLineLayout WindowTable3t(const SImplData* aImplData, TInt aLineIndex, const TRect& aParentRect, TInt aIndex1, TInt aIndex2, TInt aIndex3);
	static TAknWindowLineLayout WindowTable4t(const SImplData* aImplData, TInt aLineIndex, const TRect& aParentRect, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4);

	static TAknTextLineLayout TextTable0f(const SImplData* aImplData, TInt aLineIndex);
	static TAknTextLineLayout TextTable1f(const SImplData* aImplData, TInt aLineIndex, TInt aIndex1);
	static TAknTextLineLayout TextTable2f(const SImplData* aImplData, TInt aLineIndex, TInt aIndex1, TInt aIndex2);
	static TAknTextLineLayout TextTable3f(const SImplData* aImplData, TInt aLineIndex, TInt aIndex1, TInt aIndex2, TInt aIndex3);
	static TAknTextLineLayout TextTable4f(const SImplData* aImplData, TInt aLineIndex, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4);
	static TAknTextLineLayout TextTable0t(const SImplData* aImplData, TInt aLineIndex, const TRect& aParentRect);
	static TAknTextLineLayout TextTable1t(const SImplData* aImplData, TInt aLineIndex, const TRect& aParentRect, TInt aIndex1);
	static TAknTextLineLayout TextTable2t(const SImplData* aImplData, TInt aLineIndex, const TRect& aParentRect, TInt aIndex1, TInt aIndex2);
	static TAknTextLineLayout TextTable3t(const SImplData* aImplData, TInt aLineIndex, const TRect& aParentRect, TInt aIndex1, TInt aIndex2, TInt aIndex3);
	static TAknTextLineLayout TextTable4t(const SImplData* aImplData, TInt aLineIndex, const TRect& aParentRect, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4);

	static TAknLayoutTableLimits TableLimits(const TUint16* aDataLookup);
	};

#endif
