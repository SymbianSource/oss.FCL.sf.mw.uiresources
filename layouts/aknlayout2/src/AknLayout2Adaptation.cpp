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


#include "AknLayout2AdaptationDataDef.h"
#include <CdlEngine.h>

#define AKNLAYOUT_DEFINE_BYTECODE(name,byte) const TUint8 name = byte;
#include "AknLayoutByteCodes.h"

enum TLayoutPanic
	{
	ENegativeOffset,
	EOffsetOutOfRange,
	EIllegalLineIndex,
	EMultiLineOffsetOutOfRange,
	EDecodeNotSupported
	};

void Panic(TLayoutPanic aCode)
	{
	_LIT(KLayoutPanic, "Layout panic");
	User::Panic(KLayoutPanic, aCode);
	}

// local functions


//
// class AknLayoutAdaptationDecodeSupport
//

TUint16 AknLayoutAdaptationDecodeSupport::DecodeBytes(const TUint8*& aPtr)
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

const TUint* AknLayoutAdaptationDecodeSupport::DecodeTable(const TUint* aDataLookup, TInt aLineIndex)
	{
	const TUint* pApiId = aDataLookup + CdlEngine::LastApiId();
	const TUint8* pLimits = (const TUint8*)(pApiId-1);
	__ASSERT_ALWAYS(pLimits[1] <= aLineIndex && aLineIndex <= pLimits[0], Panic(EIllegalLineIndex));
	return (TUint*)aDataLookup[(*pApiId) + aLineIndex];
	}

const TUint8* AknLayoutAdaptationDecodeSupport::DataPtr(const SImplData* aImplData)
	{
	return aImplData->iByteCodedData + aImplData->iDataLookup[CdlEngine::LastApiId()];
	}

void AknLayoutAdaptationDecodeSupport::DecodeMultiLineTextLine(
	TAknTextLineLayout& aLine, const TUint* aDataLookup, const TUint8* aMultiInfo, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4, TInt aIndex_B)
    {
    // insert our desired index_B into the correct place
    TInt numberOfLines = DecodeNumberOfLinesShown(aMultiInfo, aIndex1, aIndex2, aIndex3, aIndex4, aIndex_B);
	
    // now just call straight through to the adaptation layer
    switch(aNumParams)
	    {
	    case 0:	{aLine = ((TextLine0f_sig*)aDataLookup)(); break;}
	    case 1:	{aLine = ((TextLine1f_sig*)aDataLookup)(aIndex1); break;}
	    case 2:	{aLine = ((TextLine2f_sig*)aDataLookup)(aIndex1, aIndex2); break;}
	    case 3:	{aLine = ((TextLine3f_sig*)aDataLookup)(aIndex1, aIndex2, aIndex3); break;}
        }

    aLine.iNumberOfLinesShown = numberOfLines;
    }


TInt AknLayoutAdaptationDecodeSupport::DecodeNumberOfLinesShown(
	const TUint8* aParamPtr, TInt& aIndex1, TInt& aIndex2, TInt& aIndex3, TInt& aIndex4, TInt aIndex_B)
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

	// index_B will have been removed from the multiline API, so insert desired index_B where it
	// would have been, and shift up the other parameters.
	TInt indexBParamNumber = aParamPtr[1];
	switch (indexBParamNumber)
		{
		case 0:
			aIndex4 = aIndex3;
			aIndex3 = aIndex2;
			aIndex2 = aIndex1;
			aIndex1 = aIndex_B;
			break;
		case 1:
			aIndex4 = aIndex3;
			aIndex3 = aIndex2;
			aIndex2 = aIndex_B;
			break;
		case 2:
			aIndex4 = aIndex3;
			aIndex3 = aIndex_B;
			break;
		case 3:
			aIndex4 = aIndex_B;
			break;
		default:
			break;
		}

	return numberOfLinesShown;
	}

EXPORT_C void AknLayoutAdaptationDecodeSupport::MultiLineTextLine(
	TAknTextLineLayout& aLine, const TUint* aDataLookup, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4)
	{
	TInt lastApiId = CdlEngine::LastApiId();
	const TUint8* pMultiInfo = (const TUint8*)(aDataLookup + lastApiId);
    const TUint* data = (TUint*)aDataLookup[lastApiId - 1];

    // use index_B = 0 for our return value
    // and use index_B = 1 to calculate baseline skip
    TAknTextLineLayout line1;
    DecodeMultiLineTextLine(aLine, data, pMultiInfo, aNumParams, aIndex1, aIndex2, aIndex3, aIndex4, 0);
    DecodeMultiLineTextLine(line1, data, pMultiInfo, aNumParams, aIndex1, aIndex2, aIndex3, aIndex4, 1);

	aLine.iBaselineSkip = aLine.iB - line1.iB;
	}


EXPORT_C void AknLayoutAdaptationDecodeSupport::MultiLineTextLine(
	TAknTextLineLayout& /*aLine*/, const TUint* /*aDataLookup*/, const TRect& /*aRect*/, TInt /*aNumParams*/, TInt /*aIndex1*/, TInt /*aIndex2*/, TInt /*aIndex3*/, TInt /*aIndex4*/)
	{
	// no requirements for multiline texts that take a parent rect
	Panic(EDecodeNotSupported);
	}

EXPORT_C void AknLayoutAdaptationDecodeSupport::WindowTable(
	TAknWindowLineLayout& aLine, const TUint* aDataLookup, TInt aLineIndex, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt /*aIndex4*/)
	{
	const TUint* data = DecodeTable(aDataLookup, aLineIndex);
	switch(aNumParams)
		{
		case 0:	{aLine = ((WindowLine0f_sig*)data)(); break;}
		case 1:	{aLine = ((WindowLine1f_sig*)data)(aIndex1); break;}
		case 2: {aLine = ((WindowLine2f_sig*)data)(aIndex1, aIndex2); break;}
		case 3: {aLine = ((WindowLine3f_sig*)data)(aIndex1, aIndex2, aIndex3); break;}
		case 4: {/*aLine = ((WindowLine4f_sig*)data)(aIndex1, aIndex2, aIndex3, aIndex4);*/ Panic(EDecodeNotSupported); break;}
		}
	}

EXPORT_C void AknLayoutAdaptationDecodeSupport::WindowTable(
	TAknWindowLineLayout& aLine, const TUint* aDataLookup, TInt aLineIndex, const TRect& aRect, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt /*aIndex4*/)
	{
	const TUint* data = DecodeTable(aDataLookup, aLineIndex);
	switch(aNumParams)
		{
		case 0:	{aLine = ((WindowLine0t_sig*)data)(aRect); break;}
		case 1:	{aLine = ((WindowLine1t_sig*)data)(aRect, aIndex1); break;}
		case 2:	{aLine = ((WindowLine2t_sig*)data)(aRect, aIndex1, aIndex2); break;}
		case 3: {aLine = ((WindowLine3t_sig*)data)(aRect, aIndex1, aIndex2, aIndex3); break;}
		case 4:	{/*aLine = ((WindowLine4t_sig*)data)(aRect, aIndex1, aIndex2, aIndex3, aIndex4);*/ Panic(EDecodeNotSupported); break;}
		}
	}

EXPORT_C void AknLayoutAdaptationDecodeSupport::TextTable(
	TAknTextLineLayout& aLine, const TUint* aDataLookup, TInt aLineIndex, TInt aNumParams, TInt aIndex1, TInt aIndex2, TInt aIndex3, TInt aIndex4)
	{
	const TUint* data = DecodeTable(aDataLookup, aLineIndex);
	switch(aNumParams)
		{
		case 0:	{aLine = ((TextLine0f_sig*)data)(); break;}
		case 1:	{aLine = ((TextLine1f_sig*)data)(aIndex1); break;}
		case 2: {aLine = ((TextLine2f_sig*)data)(aIndex1, aIndex2); break;}
		case 3: {aLine = ((TextLine3f_sig*)data)(aIndex1, aIndex2, aIndex3); break;}
		case 4: {aLine = ((TextLine4f_sig*)data)(aIndex1, aIndex2, aIndex3, aIndex4); break;}
		}
	}

EXPORT_C void AknLayoutAdaptationDecodeSupport::TextTable(
	TAknTextLineLayout& /*aLine*/, const TUint* /*aDataLookup*/, TInt /*aLineIndex*/, const TRect& /*aRect*/, TInt /*aNumParams*/, TInt /*aIndex1*/, TInt /*aIndex2*/, TInt /*aIndex3*/, TInt /*aIndex4*/)
	{
	// no requirements for text tables that take a parent rect
	Panic(EDecodeNotSupported);
	}

EXPORT_C TAknLayoutTableLimits AknLayoutAdaptationDecodeSupport::TableLimits(const TUint* aDataLookup)
	{
	TUint8* encoded = (TUint8*)(aDataLookup + CdlEngine::LastApiId());
	TAknLayoutTableLimits limits = { encoded[1], encoded[0] };
	return limits;
	}
