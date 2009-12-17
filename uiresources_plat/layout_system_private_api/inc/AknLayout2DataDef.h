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


#ifndef AKNLAYOUT2DATADEF_H
#define AKNLAYOUT2DATADEF_H

#include <AknLayout2Def.h>

// constants used as special values in layout data
// for internal use only.
const TInt16 p = 0x4000;
const TInt16 EUserSupplied = 0x7ffe;

/**
* A version of TAknWindowLineLayout that can be initialised as a const static.
* For internal use only.
* This must be maintained in parallel with TAknWindowLineLayout.
*/
class TAknWindowLineLayoutImp
	{
public:
	IMPORT_C void SetAllParentOffsets(const TRect& aRect);

	void SetlParentOffset(TInt16 aVal, const TRect& aRect);
	void SettParentOffset(TInt16 aVal, const TRect& aRect);
	void SetrParentOffset(TInt16 aVal, const TRect& aRect);
	void SetbParentOffset(TInt16 aVal, const TRect& aRect);
	void SetWParentOffset(TInt16 aVal, const TRect& aRect);
	void SetHParentOffset(TInt16 aVal, const TRect& aRect);

	inline operator TAknWindowLineLayout() { return *reinterpret_cast<TAknWindowLineLayout*>(this); }

public:
	TInt16 iC;
	TInt16 il;
	TInt16 it;
	TInt16 ir;
	TInt16 ib;
	TInt16 iW;
	TInt16 iH;
	};


/**
* A version of TAknTextLineLayout that can be initialised as a const static.
* For internal use only.
* This must be maintained in parallel with TAknTextLineLayout.
*/
class TAknTextLineLayoutImp
	{
public:
	IMPORT_C void SetAllParentOffsets(const TRect& aRect);

	void SetlParentOffset(TInt16 aVal, const TRect& aRect);
	void SetrParentOffset(TInt16 aVal, const TRect& aRect);
	void SetBParentOffset(TInt16 aVal, const TRect& aRect);
	void SetWParentOffset(TInt16 aVal, const TRect& aRect);

	inline operator TAknTextLineLayout() { return *reinterpret_cast<TAknTextLineLayout*>(this); }
	inline operator TAknMultiLineTextLayout() { return *reinterpret_cast<TAknMultiLineTextLayout*>(this); }

public:
	TInt16 iC;
	TInt16 il;
	TInt16 ir;
	TInt16 iB;
	TInt16 iW;
	TInt16 iJ;
	TInt16 iFont;

	TInt iBaselineSkip;
	TInt iNumberOfLinesShown;
	};

/**
* A version of TAknMultiLineTextLayout that can be initialised as a const static.
* For internal use only.
* This must be maintained in parallel with TAknMultiLineTextLayout.
*/
typedef TAknTextLineLayoutImp TAknMultiLineTextLayoutImp;

_LIT(KAknLayoutDllName, "101fe2aa.DLL");

/**
* represents data structures used in the optimised representation of layout data.
* for internal use only
*/
struct SImplData
	{
	TUint16 const * iDataLookup;
	TUint8 const * iByteCodedData;
	};

/**
* Decode functions for optimised layout data.
* For internal use only.
* Note: TUint8 and TUin16 are used extensively in the layout data to minimise ROM use in the
* layout data.
*/
class AknLayoutDecodeSupport
	{
public:
	IMPORT_C static void WindowLine(TAknWindowLineLayoutImp& aLine, const SImplData* aImplData);
	IMPORT_C static void WindowLine(TAknWindowLineLayoutImp& aLine, const SImplData* aImplData, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4);
	IMPORT_C static void WindowLine(TAknWindowLineLayoutImp& aLine, const SImplData* aImplData, const TRect& aRect, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4);

	IMPORT_C static void TextLine(TAknTextLineLayoutImp& aLine, const SImplData* aImplData);
	IMPORT_C static void TextLine(TAknTextLineLayoutImp& aLine, const SImplData* aImplData, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4);
	IMPORT_C static void TextLine(TAknTextLineLayoutImp& aLine, const SImplData* aImplData, const TRect& aRect, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4);

	IMPORT_C static void MultiLineTextLine(TAknTextLineLayoutImp& aLine, const SImplData* aImplData, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4);
	IMPORT_C static void MultiLineTextLine(TAknTextLineLayoutImp& aLine, const SImplData* aImplData, const TRect& aRect, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4);

	IMPORT_C static void WindowTable(TAknWindowLineLayoutImp& aLine, const SImplData* aImplData, TInt aLineIndex, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4);
	IMPORT_C static void TextTable(TAknTextLineLayoutImp& aLine, const SImplData* aImplData, TInt aLineIndex, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4);
	IMPORT_C static void WindowTable(TAknWindowLineLayoutImp& aLine, const SImplData* aImplData, TInt aLineIndex, const TRect& aRect, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4);
	IMPORT_C static void TextTable(TAknTextLineLayoutImp& aLine, const SImplData* aImplData, TInt aLineIndex, const TRect& aRect, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4);
	IMPORT_C static TAknLayoutTableLimits TableLimits(const TUint16* aDataLookup);

private:
	static void DecodeSimple(TUint16* aLine, const TUint8* aData);
	static void DecodeParams(TUint16* aLine, const TUint8* aData, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4);
	static void DecodeMultiLineParams(TAknTextLineLayoutImp& aLine, const TUint8* aData, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4);
	static void DecodeParam(TInt aCell, TInt& aMax, TInt& aParam, const TUint8* aParamsPtr, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4);
	static TUint16 DecodeBytes(const TUint8*& aPtr);
	static const TUint8* DecodeTable(const SImplData* aImplData, TInt aLineIndex);
	static const TUint8* DataPtr(const SImplData* aImplData);
	static TInt DecodeNumberOfLinesShown(const TUint8* aParamPtr, TInt& aIndex1, TInt& aIndex2, TInt& aIndex3, TInt& aIndex4);
	};


#endif
// End of File
