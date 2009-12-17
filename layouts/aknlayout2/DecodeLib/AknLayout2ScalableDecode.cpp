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


#include "AknLayout2ScalableDecode.h"
#include <CdlEngine.h>

// These functions are supplied as a library linked into LayoutInst.dll. They are
// called by the specialised access functions for each instance. It is more efficient,
// in terms of ROM, to use these functions to call the decode functions in AknLayout2.dll
// than it is to call another DLL from the specialised functions.





//
// WindowLineZZZ
//

TAknWindowComponentLayout AknLayoutScalableDecode::WindowLine(const SCompDataImplData* aImplData)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowLine(line, aImplData);
	return line;
	}

TAknWindowComponentLayout AknLayoutScalableDecode::WindowLineV(const SCompDataImplData* aImplData, TInt aVariety)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowLine(line, aImplData, aVariety, 0, 0);
	return line;
	}

TAknWindowComponentLayout AknLayoutScalableDecode::WindowLineC(const SCompDataImplData* aImplData, TInt aColumn)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowLine(line, aImplData, 0, aColumn, 0);
	return line;
	}

TAknWindowComponentLayout AknLayoutScalableDecode::WindowLineR(const SCompDataImplData* aImplData, TInt aRow)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowLine(line, aImplData, 0, 0, aRow);
	return line;
	}

TAknWindowComponentLayout AknLayoutScalableDecode::WindowLineCR(const SCompDataImplData* aImplData, TInt aColumn, TInt aRow)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowLine(line, aImplData, 0, aColumn, aRow);
	return line;
	}

TAknWindowComponentLayout AknLayoutScalableDecode::WindowLineRC(const SCompDataImplData* aImplData, TInt aRow, TInt aColumn)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowLine(line, aImplData, 0, aColumn, aRow); // switched order!
	return line;
	}

TAknWindowComponentLayout AknLayoutScalableDecode::WindowLineVR(const SCompDataImplData* aImplData, TInt aVariety, TInt aRow)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowLine(line, aImplData, aVariety, 0, aRow);
	return line;
	}

TAknWindowComponentLayout AknLayoutScalableDecode::WindowLineRV(const SCompDataImplData* aImplData, TInt aRow, TInt aVariety)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowLine(line, aImplData, aVariety, 0, aRow); // switched order!
	return line;
	}

TAknWindowComponentLayout AknLayoutScalableDecode::WindowLineCV(const SCompDataImplData* aImplData, TInt aColumn, TInt aVariety)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowLine(line, aImplData, aVariety, aColumn, 0); // switched order!
	return line;
	}

TAknWindowComponentLayout AknLayoutScalableDecode::WindowLineVC(const SCompDataImplData* aImplData, TInt aVariety, TInt aColumn)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowLine(line, aImplData, aVariety, aColumn, 0);
	return line;
	}

TAknWindowComponentLayout AknLayoutScalableDecode::WindowLineVCR(const SCompDataImplData* aImplData, TInt aVariety, TInt aColumn, TInt aRow)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowLine(line, aImplData, aVariety, aColumn, aRow);
	return line;
	}

TAknWindowComponentLayout AknLayoutScalableDecode::WindowLineVRC(const SCompDataImplData* aImplData, TInt aVariety, TInt aRow, TInt aColumn)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowLine(line, aImplData, aVariety, aColumn, aRow); // switched order!
	return line;
	}

TAknWindowComponentLayout AknLayoutScalableDecode::WindowLineCVR(const SCompDataImplData* aImplData, TInt aColumn, TInt aVariety, TInt aRow)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowLine(line, aImplData, aVariety, aColumn, aRow); // switched order!
	return line;
	}

TAknWindowComponentLayout AknLayoutScalableDecode::WindowLineCRV(const SCompDataImplData* aImplData, TInt aColumn, TInt aRow, TInt aVariety)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowLine(line, aImplData, aVariety, aColumn, aRow); // switched order!
	return line;
	}

TAknWindowComponentLayout AknLayoutScalableDecode::WindowLineRCV(const SCompDataImplData* aImplData, TInt aRow, TInt aColumn, TInt aVariety)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowLine(line, aImplData, aVariety, aColumn, aRow); // switched order!
	return line;
	}

TAknWindowComponentLayout AknLayoutScalableDecode::WindowLineRVC(const SCompDataImplData* aImplData, TInt aRow, TInt aVariety, TInt aColumn)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowLine(line, aImplData, aVariety, aColumn, aRow); // switched order!
	return line;
	}


//
// TextLineZZZ
//

TAknTextComponentLayout AknLayoutScalableDecode::TextLine(const SCompDataImplData* aImplData)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextLine(line, aImplData);
	return line;
	}

TAknTextComponentLayout AknLayoutScalableDecode::TextLineV(const SCompDataImplData* aImplData, TInt aVariety)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextLine(line, aImplData, aVariety, 0, 0);
	return line;
	}

TAknTextComponentLayout AknLayoutScalableDecode::TextLineC(const SCompDataImplData* aImplData, TInt aColumn)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextLine(line, aImplData, 0, aColumn, 0);
	return line;
	}

TAknTextComponentLayout AknLayoutScalableDecode::TextLineR(const SCompDataImplData* aImplData, TInt aRow)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextLine(line, aImplData, 0, 0, aRow);
	return line;
	}

TAknTextComponentLayout AknLayoutScalableDecode::TextLineCR(const SCompDataImplData* aImplData, TInt aColumn, TInt aRow)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextLine(line, aImplData, 0, aColumn, aRow);
	return line;
	}

TAknTextComponentLayout AknLayoutScalableDecode::TextLineRC(const SCompDataImplData* aImplData, TInt aRow, TInt aColumn)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextLine(line, aImplData, 0, aColumn, aRow); // switched order!
	return line;
	}

TAknTextComponentLayout AknLayoutScalableDecode::TextLineVR(const SCompDataImplData* aImplData, TInt aVariety, TInt aRow)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextLine(line, aImplData, aVariety, 0, aRow);
	return line;
	}

TAknTextComponentLayout AknLayoutScalableDecode::TextLineRV(const SCompDataImplData* aImplData, TInt aRow, TInt aVariety)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextLine(line, aImplData, aVariety, 0, aRow); // switched order!
	return line;
	}

TAknTextComponentLayout AknLayoutScalableDecode::TextLineCV(const SCompDataImplData* aImplData, TInt aColumn, TInt aVariety)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextLine(line, aImplData, aVariety, aColumn, 0); // switched order!
	return line;
	}

TAknTextComponentLayout AknLayoutScalableDecode::TextLineVC(const SCompDataImplData* aImplData, TInt aVariety, TInt aColumn)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextLine(line, aImplData, aVariety, aColumn, 0);
	return line;
	}

TAknTextComponentLayout AknLayoutScalableDecode::TextLineVCR(const SCompDataImplData* aImplData, TInt aVariety, TInt aColumn, TInt aRow)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextLine(line, aImplData, aVariety, aColumn, aRow);
	return line;
	}

TAknTextComponentLayout AknLayoutScalableDecode::TextLineVRC(const SCompDataImplData* aImplData, TInt aVariety, TInt aRow, TInt aColumn)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextLine(line, aImplData, aVariety, aColumn, aRow); // switched order!
	return line;
	}

TAknTextComponentLayout AknLayoutScalableDecode::TextLineCVR(const SCompDataImplData* aImplData, TInt aColumn, TInt aVariety, TInt aRow)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextLine(line, aImplData, aVariety, aColumn, aRow); // switched order!
	return line;
	}

TAknTextComponentLayout AknLayoutScalableDecode::TextLineCRV(const SCompDataImplData* aImplData, TInt aColumn, TInt aRow, TInt aVariety)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextLine(line, aImplData, aVariety, aColumn, aRow); // switched order!
	return line;
	}

TAknTextComponentLayout AknLayoutScalableDecode::TextLineRCV(const SCompDataImplData* aImplData, TInt aRow, TInt aColumn, TInt aVariety)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextLine(line, aImplData, aVariety, aColumn, aRow); // switched order!
	return line;
	}

TAknTextComponentLayout AknLayoutScalableDecode::TextLineRVC(const SCompDataImplData* aImplData, TInt aRow, TInt aVariety, TInt aColumn)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextLine(line, aImplData, aVariety, aColumn, aRow); // switched order!
	return line;
	}


//
// WindowTableZZZ
//

TAknWindowComponentLayout AknLayoutScalableDecode::WindowTableL(const SCompDataImplData* aImplData, TInt aLineIndex)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowTable(line, aImplData, aLineIndex);
	return line;
	}

TAknWindowComponentLayout AknLayoutScalableDecode::WindowTableLV(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aVariety)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowTable(line, aImplData, aLineIndex, aVariety, 0, 0);
	return line;
	}

TAknWindowComponentLayout AknLayoutScalableDecode::WindowTableLC(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aColumn)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowTable(line, aImplData, aLineIndex, 0, aColumn, 0);
	return line;
	}

TAknWindowComponentLayout AknLayoutScalableDecode::WindowTableLR(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aRow)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowTable(line, aImplData, aLineIndex, 0, 0, aRow);
	return line;
	}

TAknWindowComponentLayout AknLayoutScalableDecode::WindowTableLCR(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aColumn, TInt aRow)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowTable(line, aImplData, aLineIndex, 0, aColumn, aRow);
	return line;
	}

TAknWindowComponentLayout AknLayoutScalableDecode::WindowTableLRC(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aRow, TInt aColumn)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowTable(line, aImplData, aLineIndex, 0, aColumn, aRow); // switched order!
	return line;
	}

TAknWindowComponentLayout AknLayoutScalableDecode::WindowTableLVR(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aVariety, TInt aRow)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowTable(line, aImplData, aLineIndex, aVariety, 0, aRow);
	return line;
	}

TAknWindowComponentLayout AknLayoutScalableDecode::WindowTableLRV(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aRow, TInt aVariety)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowTable(line, aImplData, aLineIndex, aVariety, 0, aRow); // switched order!
	return line;
	}

TAknWindowComponentLayout AknLayoutScalableDecode::WindowTableLCV(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aColumn, TInt aVariety)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowTable(line, aImplData, aLineIndex, aVariety, aColumn, 0); // switched order!
	return line;
	}

TAknWindowComponentLayout AknLayoutScalableDecode::WindowTableLVC(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aVariety, TInt aColumn)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowTable(line, aImplData, aLineIndex, aVariety, aColumn, 0);
	return line;
	}

TAknWindowComponentLayout AknLayoutScalableDecode::WindowTableLVCR(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aVariety, TInt aColumn, TInt aRow)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowTable(line, aImplData, aLineIndex, aVariety, aColumn, aRow);
	return line;
	}

TAknWindowComponentLayout AknLayoutScalableDecode::WindowTableLVRC(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aVariety, TInt aRow, TInt aColumn)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowTable(line, aImplData, aLineIndex, aVariety, aColumn, aRow); // switched order!
	return line;
	}

TAknWindowComponentLayout AknLayoutScalableDecode::WindowTableLCVR(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aColumn, TInt aVariety, TInt aRow)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowTable(line, aImplData, aLineIndex, aVariety, aColumn, aRow); // switched order!
	return line;
	}

TAknWindowComponentLayout AknLayoutScalableDecode::WindowTableLCRV(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aColumn, TInt aRow, TInt aVariety)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowTable(line, aImplData, aLineIndex, aVariety, aColumn, aRow); // switched order!
	return line;
	}

TAknWindowComponentLayout AknLayoutScalableDecode::WindowTableLRCV(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aRow, TInt aColumn, TInt aVariety)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowTable(line, aImplData, aLineIndex, aVariety, aColumn, aRow); // switched order!
	return line;
	}

TAknWindowComponentLayout AknLayoutScalableDecode::WindowTableLRVC(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aRow, TInt aVariety, TInt aColumn)
	{
	TAknWindowComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::WindowTable(line, aImplData, aLineIndex, aVariety, aColumn, aRow); // switched order!
	return line;
	}


//
//TextTableZZZ
//

TAknTextComponentLayout AknLayoutScalableDecode::TextTableL(const SCompDataImplData* aImplData, TInt aLineIndex)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextTable(line, aImplData, aLineIndex);
	return line;
	}

TAknTextComponentLayout AknLayoutScalableDecode::TextTableLV(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aVariety)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextTable(line, aImplData, aLineIndex, aVariety, 0, 0);
	return line;
	}

TAknTextComponentLayout AknLayoutScalableDecode::TextTableLC(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aColumn)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextTable(line, aImplData, aLineIndex, 0, aColumn, 0);
	return line;
	}

TAknTextComponentLayout AknLayoutScalableDecode::TextTableLR(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aRow)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextTable(line, aImplData, aLineIndex, 0, 0, aRow);
	return line;
	}

TAknTextComponentLayout AknLayoutScalableDecode::TextTableLCR(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aColumn, TInt aRow)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextTable(line, aImplData, aLineIndex, 0, aColumn, aRow);
	return line;
	}

TAknTextComponentLayout AknLayoutScalableDecode::TextTableLRC(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aRow, TInt aColumn)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextTable(line, aImplData, aLineIndex, 0, aColumn, aRow); // switched order!
	return line;
	}

TAknTextComponentLayout AknLayoutScalableDecode::TextTableLVR(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aVariety, TInt aRow)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextTable(line, aImplData, aLineIndex, aVariety, 0, aRow);
	return line;
	}

TAknTextComponentLayout AknLayoutScalableDecode::TextTableLRV(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aRow, TInt aVariety)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextTable(line, aImplData, aLineIndex, aVariety, 0, aRow); // switched order!
	return line;
	}

TAknTextComponentLayout AknLayoutScalableDecode::TextTableLCV(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aColumn, TInt aVariety)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextTable(line, aImplData, aLineIndex, aVariety, aColumn, 0); // switched order!
	return line;
	}

TAknTextComponentLayout AknLayoutScalableDecode::TextTableLVC(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aVariety, TInt aColumn)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextTable(line, aImplData, aLineIndex, aVariety, aColumn, 0);
	return line;
	}

TAknTextComponentLayout AknLayoutScalableDecode::TextTableLVCR(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aVariety, TInt aColumn, TInt aRow)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextTable(line, aImplData, aLineIndex, aVariety, aColumn, aRow);
	return line;
	}

TAknTextComponentLayout AknLayoutScalableDecode::TextTableLVRC(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aVariety, TInt aRow, TInt aColumn)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextTable(line, aImplData, aLineIndex, aVariety, aColumn, aRow); // switched order!
	return line;
	}

TAknTextComponentLayout AknLayoutScalableDecode::TextTableLCVR(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aColumn, TInt aVariety, TInt aRow)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextTable(line, aImplData, aLineIndex, aVariety, aColumn, aRow); // switched order!
	return line;
	}

TAknTextComponentLayout AknLayoutScalableDecode::TextTableLCRV(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aColumn, TInt aRow, TInt aVariety)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextTable(line, aImplData, aLineIndex, aVariety, aColumn, aRow); // switched order!
	return line;
	}

TAknTextComponentLayout AknLayoutScalableDecode::TextTableLRCV(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aRow, TInt aColumn, TInt aVariety)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextTable(line, aImplData, aLineIndex, aVariety, aColumn, aRow); // switched order!
	return line;
	}

TAknTextComponentLayout AknLayoutScalableDecode::TextTableLRVC(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aRow, TInt aVariety, TInt aColumn)
	{
	TAknTextComponentLayoutImp line;
	AknLayoutScalableDecodeSupport::TextTable(line, aImplData, aLineIndex, aVariety, aColumn, aRow); // switched order!
	return line;
	}




//
// TableLimits
//

TAknLayoutScalableTableLimits AknLayoutScalableDecode::TableLimits(const TUint16* aDataLookup)
	{
	return AknLayoutScalableDecodeSupport::TableLimits(aDataLookup);
	}

//
// ParamLimits
//

TAknLayoutScalableParameterLimits AknLayoutScalableDecode::ParameterLimits(const SCompDataImplData* aImplData)
	{
	TAknLayoutScalableParameterLimitsImp limits;
	AknLayoutScalableDecodeSupport::ParameterLimits(limits, aImplData, 0);
	return limits;
	}

TAknLayoutScalableParameterLimits AknLayoutScalableDecode::ParameterLimitsV(const SCompDataImplData* aImplData, TInt aVariety)
	{
	TAknLayoutScalableParameterLimitsImp limits;
	AknLayoutScalableDecodeSupport::ParameterLimits(limits, aImplData, aVariety);
	return limits;
	}

TAknLayoutScalableParameterLimits AknLayoutScalableDecode::ParameterLimitsTableL(const SCompDataImplData* aImplData, TInt aLineIndex)
	{
	TAknLayoutScalableParameterLimitsImp limits;
	AknLayoutScalableDecodeSupport::ParameterLimitsTable(limits, aImplData, aLineIndex, 0);
	return limits;
	}

TAknLayoutScalableParameterLimits AknLayoutScalableDecode::ParameterLimitsTableLV(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aVariety)
	{
	TAknLayoutScalableParameterLimitsImp limits;
	AknLayoutScalableDecodeSupport::ParameterLimitsTable(limits, aImplData, aLineIndex, aVariety);
	return limits;
	}

TAknLayoutScalableComponentType AknLayoutScalableDecode::GetComponentTypeById(const SCompDataImplData* aImplData, TInt aComponentId)
	{
	TAknLayoutScalableComponentType type;
	AknLayoutScalableDecodeSupport::GetComponentTypeById(type, aImplData, aComponentId);
	return type;
	}

TAknLayoutScalableParameterLimits AknLayoutScalableDecode::GetParamLimitsById(const SCompDataImplData* aImplData, TInt aComponentId, TInt aVariety)
	{
	TAknLayoutScalableParameterLimitsImp limits;
	AknLayoutScalableDecodeSupport::GetParamLimitsById(limits, aImplData, aComponentId, aVariety);
	return limits;
	}

TAknWindowComponentLayout AknLayoutScalableDecode::GetWindowComponentById(const SCompDataImplData* aImplData, TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow)
	{
	TAknWindowComponentLayoutImp layout;
	AknLayoutScalableDecodeSupport::GetWindowComponentById(layout, aImplData, aComponentId, aVariety, aCol, aRow);
	return layout;
	}

TAknTextComponentLayout AknLayoutScalableDecode::GetTextComponentById(const SCompDataImplData* aImplData, TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow)
	{
	TAknTextComponentLayoutImp layout;
	AknLayoutScalableDecodeSupport::GetTextComponentById(layout, aImplData, aComponentId, aVariety, aCol, aRow);
	return layout;
	}

