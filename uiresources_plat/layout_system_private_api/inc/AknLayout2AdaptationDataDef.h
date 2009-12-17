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


#ifndef AKNLAYOUT2ADAPTATIONDATADEF_H
#define AKNLAYOUT2ADAPTATIONDATADEF_H

#include <AknLayout2Def.h>
#include <AknLayout2DataDef.h>

typedef TAknWindowLineLayout (WindowLine0f_sig)();
typedef TAknWindowLineLayout (WindowLine0t_sig)(const TRect&);
typedef TAknWindowLineLayout (WindowLine1t_sig)(const TRect&,TInt);
typedef TAknWindowLineLayout (WindowLine3t_sig)(const TRect&,TInt,TInt,TInt);
typedef TAknWindowLineLayout (WindowLine1f_sig)(TInt);
typedef TAknLayoutTableLimits (Limits_sig)();
typedef TAknWindowLineLayout (WindowTable0f_sig)(TInt);
typedef TAknTextLineLayout (TextLine2f_sig)(TInt,TInt);
typedef TAknMultiLineTextLayout (MultiLineTextLine2f_sig)(TInt,TInt);
typedef TAknWindowLineLayout (WindowLine2f_sig)(TInt,TInt);
typedef TAknWindowLineLayout (WindowTable1f_sig)(TInt, TInt);
typedef TAknTextLineLayout (TextLine1f_sig)(TInt);
typedef TAknTextLineLayout (TextTable1f_sig)(TInt, TInt);
typedef TAknTextLineLayout (TextLine0f_sig)();
typedef TAknTextLineLayout (TextTable0f_sig)(TInt);
typedef TAknWindowLineLayout (WindowTable0t_sig)(TInt, const TRect&);
typedef TAknWindowLineLayout (WindowTable2f_sig)(TInt, TInt, TInt);
typedef TAknMultiLineTextLayout (MultiLineTextLine1f_sig)(TInt);
typedef TAknTextLineLayout (TextLine4f_sig)(TInt,TInt,TInt,TInt);
typedef TAknTextLineLayout (TextLine3f_sig)(TInt,TInt,TInt);
typedef TAknWindowLineLayout (WindowLine2t_sig)(const TRect&,TInt,TInt);
typedef TAknWindowLineLayout (WindowLine3f_sig)(TInt,TInt,TInt);
typedef TAknMultiLineTextLayout (MultiLineTextLine3f_sig)(TInt,TInt,TInt);
typedef TAknMultiLineTextLayout (MultiLineTextLine4f_sig)(TInt,TInt,TInt,TInt);
typedef TAknWindowLineLayout (WindowTable1t_sig)(TInt, const TRect&, TInt);
typedef TAknWindowLineLayout (WindowLine4f_sig)(TInt,TInt,TInt,TInt);



/**
* Decode functions for adaptation layer
* For internal use only.
* Note: TUint8 and TUin16 are used extensively in the layout data to minimise ROM use in the
* layout data.
*/
class AknLayoutAdaptationDecodeSupport
	{
public:
	IMPORT_C static void MultiLineTextLine(TAknTextLineLayout& aLine, const TUint* aDataLookup, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4);
	IMPORT_C static void MultiLineTextLine(TAknTextLineLayout& aLine, const TUint* aDataLookup, const TRect& aRect, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4);
	IMPORT_C static void WindowTable(TAknWindowLineLayout& aLine, const TUint* aDataLookup, TInt aLineIndex, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4);
	IMPORT_C static void TextTable(TAknTextLineLayout& aLine, const TUint* aDataLookup, TInt aLineIndex, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4);
	IMPORT_C static void WindowTable(TAknWindowLineLayout& aLine, const TUint* aDataLookup, TInt aLineIndex, const TRect& aRect, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4);
	IMPORT_C static void TextTable(TAknTextLineLayout& aLine, const TUint* aDataLookup, TInt aLineIndex, const TRect& aRect, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4);
	IMPORT_C static TAknLayoutTableLimits TableLimits(const TUint* aDataLookup);

private:
	static TUint16 DecodeBytes(const TUint8*& aPtr);
	static const TUint* DecodeTable(const TUint* aDataLookup, TInt aLineIndex);
	static const TUint8* DataPtr(const SImplData* aImplData);
    static void DecodeMultiLineTextLine(TAknTextLineLayout& aLine, const TUint* aDataLookup, const TUint8* aMultiInfo, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4, TInt aIndex_B);
	static TInt DecodeNumberOfLinesShown(const TUint8* aParamPtr, TInt& aIndex1, TInt& aIndex2, TInt& aIndex3, TInt& aIndex4, TInt aIndex_B);
	};


#endif
// End of File
