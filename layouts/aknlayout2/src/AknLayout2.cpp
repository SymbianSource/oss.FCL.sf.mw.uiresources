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


#include "AknLayout2DataDef.h"
#include "AknLayout2Def.h"
#include <CdlEngine.h>
#include "AknLayout2ScalableDef.h"
#define AKNLAYOUT_DEFINE_BYTECODE(name,byte) const TUint8 name = byte;
#include "AknLayoutByteCodes.h"

const TInt KNumCells = 7;

enum TLayoutPanic
	{
	ENegativeOffset,
	EOffsetOutOfRange,
	EIllegalLineIndex,
	EMultiLineOffsetOutOfRange
	};

void Panic(TLayoutPanic aCode)
	{
	_LIT(KLayoutPanic, "Layout panic");
	User::Panic(KLayoutPanic, aCode);
	}

// local functions

TBool IsParentOffset(TInt16 aVal)
	{
	const TInt16 pLimits = 0x1000;
	return ((p-pLimits) <= aVal && aVal <= (p+pLimits));
	}

void TAknWindowLineLayoutImp::SetlParentOffset(TInt16 aVal, const TRect& aRect)
	{
	if (IsParentOffset(aVal))
		il = TInt16(aRect.iTl.iX + aVal - p);
	else
		il = aVal;
	}

void TAknWindowLineLayoutImp::SettParentOffset(TInt16 aVal, const TRect& aRect)
	{
	if (IsParentOffset(aVal))
		it = TInt16(aRect.iTl.iY + aVal - p);
	else
		it = aVal;
	}

void TAknWindowLineLayoutImp::SetrParentOffset(TInt16 aVal, const TRect& aRect)
	{
	if (IsParentOffset(aVal))
		ir = TInt16(aRect.iBr.iX + aVal - p);
	else
		ir = aVal;
	}

void TAknWindowLineLayoutImp::SetbParentOffset(TInt16 aVal, const TRect& aRect)
	{
	if (IsParentOffset(aVal))
		ib = TInt16(aRect.iBr.iY + aVal - p);
	else
		ib = aVal;
	}

void TAknWindowLineLayoutImp::SetWParentOffset(TInt16 aVal, const TRect& aRect)
	{
	if (IsParentOffset(aVal))
		iW = TInt16(aRect.Width() + aVal - p);
	else
		iW = aVal;
	}

void TAknWindowLineLayoutImp::SetHParentOffset(TInt16 aVal, const TRect& aRect)
	{
	if (IsParentOffset(aVal))
		iH = TInt16(aRect.Height() + aVal - p);
	else
		iH = aVal;
	}

EXPORT_C void TAknWindowLineLayoutImp::SetAllParentOffsets(const TRect& aRect)
	{
	SetlParentOffset(il, aRect);
	SettParentOffset(it, aRect);
	SetrParentOffset(ir, aRect);
	SetbParentOffset(ib, aRect);
	SetWParentOffset(iW, aRect);
	SetHParentOffset(iH, aRect);
	}

EXPORT_C TAknWindowLineLayout TAknWindowLineLayout::CombineLines(TAknWindowLineLayout aLine, TAknWindowLineLayout aLine2)
	{
	if (aLine2.iC != ELayoutEmpty) aLine.iC = aLine2.iC;
	if (aLine2.il != ELayoutEmpty) aLine.il = aLine2.il;
	if (aLine2.it != ELayoutEmpty) aLine.it = aLine2.it;
	if (aLine2.ir != ELayoutEmpty) aLine.ir = aLine2.ir;
	if (aLine2.ib != ELayoutEmpty) aLine.ib = aLine2.ib;
	if (aLine2.iW != ELayoutEmpty) aLine.iW = aLine2.iW;
	if (aLine2.iH != ELayoutEmpty) aLine.iH = aLine2.iH;
	return aLine;
	}

//
// TAknTextLineLayout
//

void TAknTextLineLayoutImp::SetlParentOffset(TInt16 aVal, const TRect& aRect)
	{
	if (IsParentOffset(aVal))
		il = TInt16(aRect.iTl.iX + aVal - p);
	else
		il = aVal;
	}


void TAknTextLineLayoutImp::SetrParentOffset(TInt16 aVal, const TRect& aRect)
	{
	if (IsParentOffset(aVal))
		ir = TInt16(aRect.iBr.iX + aVal - p);
	else
		ir = aVal;
	}

void TAknTextLineLayoutImp::SetBParentOffset(TInt16 aVal, const TRect& aRect)
	{
	if (IsParentOffset(aVal))
		iB = TInt16(aRect.iBr.iY + aVal - p);
	else
		iB = aVal;
	}

void TAknTextLineLayoutImp::SetWParentOffset(TInt16 aVal, const TRect& aRect)
	{
	if (IsParentOffset(aVal))
		iW = TInt16(aRect.Width() + aVal - p);
	else
		iW = aVal;
	}


EXPORT_C void TAknTextLineLayoutImp::SetAllParentOffsets(const TRect& aRect)
	{
	SetlParentOffset(il, aRect);
	SetrParentOffset(ir, aRect);
	SetBParentOffset(iB, aRect);
	SetWParentOffset(iW, aRect);
	}

TUint16 AknLayoutDecodeSupport::DecodeBytes(const TUint8*& aPtr)
	{
	TUint8 ch = *aPtr++;
	switch (ch)
		{
		case KByteWord:
			{
			TUint16 high = *aPtr++;
			TUint16 low = *aPtr++;
			return TUint16((high<<8) | low);
			}
		case KByteEmpty:
			return TUint16(ELayoutEmpty);
		case KByteP1:
			{
			TInt8 offset = *aPtr++;
			return TUint16(p+offset);
			}
		case KByteP2:
			{
			TInt16 high = *aPtr++;
			TUint16 low = *aPtr++;
			return TUint16(p+((high<<8) | low));
			}
		default:
			return ch;
		}
	}

const TUint8* AknLayoutDecodeSupport::DecodeTable(const SImplData* aImplData, TInt aLineIndex)
	{
	const TUint16* pApiId = aImplData->iDataLookup + CdlEngine::LastApiId();
	const TUint8* pLimits = (const TUint8*)(pApiId-1);
	__ASSERT_ALWAYS(pLimits[1] <= aLineIndex && aLineIndex <= pLimits[0], Panic(EIllegalLineIndex));
	return aImplData->iByteCodedData + aImplData->iDataLookup[(*pApiId) + aLineIndex];
	}

const TUint8* AknLayoutDecodeSupport::DataPtr(const SImplData* aImplData)
	{
	return aImplData->iByteCodedData + aImplData->iDataLookup[CdlEngine::LastApiId()];
	}

void AknLayoutDecodeSupport::DecodeSimple(TUint16* aLine, const TUint8* aData)
	{
	// decode a non-parameterised line by decoding the bytes for each cell
	for (TInt ii=0; ii<KNumCells; ii++)
		*aLine++ = DecodeBytes(aData);
	}

void AknLayoutDecodeSupport::DecodeParams(TUint16* aLine, const TUint8* aData, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4)
	{
	// parameters are at the start of the byte coded data
	const TUint8* paramsPtr = aData;
	// the cell data follows
	const TUint8* dataPtr = aData + (aNumParams*2);
	// decode each cell
	for (TInt ii=0; ii<KNumCells; ii++)
		{
		// calculate the requested and maximum paramter value for this cell
		TInt max, param;
		DecodeParam(ii, max, param, paramsPtr, aNumParams, aIndex1, aIndex2, aIndex3, aIndex4);
		__ASSERT_ALWAYS(0 <= param && param < max, Panic(EOffsetOutOfRange));
		// scan through all values for this cell and record the one indicated by the parameter
		for (int jj=0; jj<max; jj++)
			{
			TUint16 val = DecodeBytes(dataPtr);
			if (jj == param)
				*aLine++ = val;
			}
		}
	}

void AknLayoutDecodeSupport::DecodeMultiLineParams(TAknTextLineLayoutImp& aLine, const TUint8* aData, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4)
	{
	// this function is similar to DecodeParams, except that extra processing is required
	// for multiline parameters.
	TUint16* linePtr = (TUint16*)&aLine;
	// parameters are at the start of the byte coded data
	const TUint8* paramsPtr = aData;
	// the cell data follows
	const TUint8* dataPtr = aData + (aNumParams*2);
	TUint16 v0 = 0;
	for (TInt ii=0; ii<KNumCells; ii++)
		{
		// calculate the requested and maximum paramter value for this cell
		TInt max, param;
		DecodeParam(ii, max, param, paramsPtr, aNumParams, aIndex1, aIndex2, aIndex3, aIndex4);
		__ASSERT_ALWAYS(0 <= param && param < max, Panic(EMultiLineOffsetOutOfRange));
		// scan through all values for this cell and record the one indicated by the parameter
		for (int jj=0; jj<max; jj++)
			{
			TUint16 val = DecodeBytes(dataPtr);
			// cell 3 is the "B" cell. 
			// set baseline skip to the difference between the first and second values for cell B.
			if (ii == 3 && jj < 2)
				{
				if (jj == 0)
					v0 = val;
				else
					aLine.iBaselineSkip = val - v0;
				}
			if (jj == param)
				*linePtr++ = val;
			}
		}
	}

TInt AknLayoutDecodeSupport::DecodeNumberOfLinesShown(const TUint8* aParamPtr, TInt& aIndex1, TInt& aIndex2, TInt& aIndex3, TInt& aIndex4)
	{
	// For multiline APIs, the parameter order may be changed
	TInt numberOfLinesShownParamNumber = aParamPtr[0];
	TInt numberOfLinesShown;
	switch (numberOfLinesShownParamNumber)
		{
		case 0:
			numberOfLinesShown = aIndex1;
			break;
		case 1:
			numberOfLinesShown = aIndex2;
			break;
		case 2:
			numberOfLinesShown = aIndex3;
			break;
		default:
			numberOfLinesShown = aIndex4;
			break;
		}

	// index_B will have been removed from the multiline API, so insert a 0 where it
	// would have been, and shift up the other parameters.
	TInt indexBParamNumber = aParamPtr[1];
	switch (indexBParamNumber)
		{
		case 0:
			aIndex4 = aIndex3;
			aIndex3 = aIndex2;
			aIndex2 = aIndex1;
			aIndex1 = 0;
			break;
		case 1:
			aIndex4 = aIndex3;
			aIndex3 = aIndex2;
			aIndex2 = 0;
			break;
		case 2:
			aIndex4 = aIndex3;
			aIndex3 = 0;
			break;
		case 3:
			aIndex4 = 0;
			break;
		default:
			break;
		}

	return numberOfLinesShown;
	}

void AknLayoutDecodeSupport::DecodeParam(TInt aCell, TInt& aMax, TInt& aParam, const TUint8* aParamsPtr, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4)
	{
	// Parameter coding is sequence of pairs of bytes, one for each parameter.
	// The first byte is a bit field indicating which cells the parameter affects.
	// The second is the number of items in the cell.
	TInt ii=0;
	// This is the bit in the bit-fields we are looking for
	TInt bit = 1<<aCell;
	// scan through the parameters and break if one has the relevant bit set for this cell
	for (; ii<aNumParams; ii++)
		{
		if (aParamsPtr[0] & bit)
			break;
		aParamsPtr += 2;
		}

	if (ii == aNumParams)
		{
		// No parameter was found for this cell.
		aMax = 1;
		aParam = 0;
		}
	else
		{
		// A parameter was found for the cell, extract the number of items in the cell
		// and the correct parameter index value.
		aMax = aParamsPtr[1];
		switch (ii)
			{
			case 0:
				aParam = aIndex1;
				break;
			case 1:
				aParam = aIndex2;
				break;
			case 2:
				aParam = aIndex3;
				break;
			default:
				aParam = aIndex4;
				break;
			}
		}
	}

// The following functions could be factorised, but that would extend the call depth
// of an already tricky calculation, with expensive function calls.
// So these functions are individually coded - they're short anyway.
EXPORT_C void AknLayoutDecodeSupport::WindowLine(TAknWindowLineLayoutImp& aLine, const SImplData* aImplData)
	{
	DecodeSimple((TUint16*)&aLine, DataPtr(aImplData));
	}

EXPORT_C void AknLayoutDecodeSupport::WindowLine(TAknWindowLineLayoutImp& aLine, const SImplData* aImplData, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4)
	{
	DecodeParams((TUint16*)&aLine, DataPtr(aImplData), aNumParams, aIndex1, aIndex2, aIndex3, aIndex4);
	}

EXPORT_C void AknLayoutDecodeSupport::WindowLine(TAknWindowLineLayoutImp& aLine, const SImplData* aImplData, const TRect& aRect, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4)
	{
	DecodeParams((TUint16*)&aLine, DataPtr(aImplData), aNumParams, aIndex1, aIndex2, aIndex3, aIndex4);
	aLine.SetAllParentOffsets(aRect);
	}

EXPORT_C void AknLayoutDecodeSupport::TextLine(TAknTextLineLayoutImp& aLine, const SImplData* aImplData)
	{
	DecodeSimple((TUint16*)&aLine, DataPtr(aImplData));
	aLine.iBaselineSkip = 0;
	aLine.iNumberOfLinesShown = 1;
	}

EXPORT_C void AknLayoutDecodeSupport::TextLine(TAknTextLineLayoutImp& aLine, const SImplData* aImplData, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4)
	{
	DecodeParams((TUint16*)&aLine, DataPtr(aImplData), aNumParams, aIndex1, aIndex2, aIndex3, aIndex4);
	aLine.iBaselineSkip = 0;
	aLine.iNumberOfLinesShown = 1;
	}

EXPORT_C void AknLayoutDecodeSupport::TextLine(TAknTextLineLayoutImp& aLine, const SImplData* aImplData, const TRect& aRect, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4)
	{
	DecodeParams((TUint16*)&aLine, DataPtr(aImplData), aNumParams, aIndex1, aIndex2, aIndex3, aIndex4);
	aLine.SetAllParentOffsets(aRect);
	aLine.iBaselineSkip = 0;
	aLine.iNumberOfLinesShown = 1;
	}

EXPORT_C void AknLayoutDecodeSupport::MultiLineTextLine(TAknTextLineLayoutImp& aLine, const SImplData* aImplData, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4)
	{
	TInt lastApiId = CdlEngine::LastApiId();
	const TUint8* pParamInfo = (const TUint8*)(aImplData->iDataLookup + lastApiId);
	const TUint8* pData = aImplData->iByteCodedData + aImplData->iDataLookup[lastApiId-1];
	aLine.iNumberOfLinesShown = DecodeNumberOfLinesShown(pParamInfo, aIndex1, aIndex2, aIndex3, aIndex4);
	DecodeMultiLineParams(aLine, pData, aNumParams, aIndex1, aIndex2, aIndex3, aIndex4);
	}

EXPORT_C void AknLayoutDecodeSupport::MultiLineTextLine(TAknTextLineLayoutImp& aLine, const SImplData* aImplData, const TRect& aRect, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4)
	{
	TInt lastApiId = CdlEngine::LastApiId();
	const TUint8* pParamInfo = (const TUint8*)(aImplData->iDataLookup + lastApiId);
	const TUint8* pData = aImplData->iByteCodedData + aImplData->iDataLookup[lastApiId-1];
	aLine.iNumberOfLinesShown = DecodeNumberOfLinesShown(pParamInfo, aIndex1, aIndex2, aIndex3, aIndex4);
	DecodeMultiLineParams(aLine, pData, aNumParams, aIndex1, aIndex2, aIndex3, aIndex4);
	aLine.SetAllParentOffsets(aRect);
	}

EXPORT_C void AknLayoutDecodeSupport::WindowTable(TAknWindowLineLayoutImp& aLine, const SImplData* aImplData, TInt aLineIndex, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4)
	{
	const TUint8* data = DecodeTable(aImplData, aLineIndex);
	DecodeParams((TUint16*)&aLine, data, aNumParams, aIndex1, aIndex2, aIndex3, aIndex4);
	}

EXPORT_C void AknLayoutDecodeSupport::WindowTable(TAknWindowLineLayoutImp& aLine, const SImplData* aImplData, TInt aLineIndex, const TRect& aRect, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4)
	{
	const TUint8* data = DecodeTable(aImplData, aLineIndex);
	DecodeParams((TUint16*)&aLine, data, aNumParams, aIndex1, aIndex2, aIndex3, aIndex4);
	aLine.SetAllParentOffsets(aRect);
	}

EXPORT_C void AknLayoutDecodeSupport::TextTable(TAknTextLineLayoutImp& aLine, const SImplData* aImplData, TInt aLineIndex, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4)
	{
	const TUint8* data = DecodeTable(aImplData, aLineIndex);
	DecodeParams((TUint16*)&aLine, data, aNumParams, aIndex1, aIndex2, aIndex3, aIndex4);
	}

EXPORT_C void AknLayoutDecodeSupport::TextTable(TAknTextLineLayoutImp& aLine, const SImplData* aImplData, TInt aLineIndex, const TRect& aRect, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4)
	{
	const TUint8* data = DecodeTable(aImplData, aLineIndex);
	DecodeParams((TUint16*)&aLine, data, aNumParams, aIndex1, aIndex2, aIndex3, aIndex4);
	aLine.SetAllParentOffsets(aRect);
	}

EXPORT_C TAknLayoutTableLimits AknLayoutDecodeSupport::TableLimits(const TUint16* aDataLookup)
	{
	TUint8* encoded = (TUint8*)(aDataLookup + CdlEngine::LastApiId());
	TAknLayoutTableLimits limits = { encoded[1], encoded[0] };
	return limits;
	}


EXPORT_C TAknWindowLineLayout::TAknWindowLineLayout( const TAknWindowComponentLayout& aLine )
    {
    TAknWindowLineLayout line = aLine.LayoutLine();
    iC = line.iC;
    il = line.il;
    it = line.it;
    ir = line.ir;
    ib = line.ib;
    iW = line.iW;
    iH = line.iH;
    }


EXPORT_C TAknWindowLineLayout TAknWindowLineLayout::operator=( const TAknWindowComponentLayout& aLine )
    {
    TAknWindowLineLayout line = aLine.LayoutLine();
    iC = line.iC;
    il = line.il;
    it = line.it;
    ir = line.ir;
    ib = line.ib;
    iW = line.iW;
    iH = line.iH;
    return *this;
    }
    
    
EXPORT_C TAknTextLineLayout::TAknTextLineLayout( const TAknTextComponentLayout& aLine )
    {
    TAknTextLineLayout line = aLine.LayoutLine();
    iC = line.iC;
    il = line.il;
    ir = line.ir;
    iB = line.iB;
    iW = line.iW;
    iJ = line.iJ;
    iFont = line.iFont;
    }


EXPORT_C TAknTextLineLayout TAknTextLineLayout::operator=( const TAknTextComponentLayout& aLine )
    {
    TAknTextLineLayout line = aLine.LayoutLine();
    iC = line.iC;
    il = line.il;
    ir = line.ir;
    iB = line.iB;
    iW = line.iW;
    iJ = line.iJ;
    iFont = line.iFont;
    return *this;
    }
