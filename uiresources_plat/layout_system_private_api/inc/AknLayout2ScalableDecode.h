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


#ifndef AKNLAYOUT2SCALABLEDECODE_H
#define AKNLAYOUT2SCALABLEDECODE_H

#include <AknLayout2ScalableDataDef.h>

class AknLayoutScalableDecode
	{
public:
	/**
	 * 
	* Data decode functions
	* There are 5 main types of decode functions: WindowLine, TextLine, WindowTable, TextTable and TableLimits.
	* For each of the line and table access functions, there are 1 + 3 + 6 + 6 variants, all permutations of option, row, and column
	*/

	static TAknWindowComponentLayout WindowLine(const SCompDataImplData* aImplData);
	static TAknWindowComponentLayout WindowLineV(const SCompDataImplData* aImplData, TInt aVariety);
	static TAknWindowComponentLayout WindowLineC(const SCompDataImplData* aImplData, TInt aColumn);
	static TAknWindowComponentLayout WindowLineR(const SCompDataImplData* aImplData, TInt aRow);
	static TAknWindowComponentLayout WindowLineCR(const SCompDataImplData* aImplData, TInt aColumn, TInt aRow);
	static TAknWindowComponentLayout WindowLineRC(const SCompDataImplData* aImplData, TInt aRow, TInt aColumn);
	static TAknWindowComponentLayout WindowLineVR(const SCompDataImplData* aImplData, TInt aVariety, TInt aRow);
	static TAknWindowComponentLayout WindowLineRV(const SCompDataImplData* aImplData, TInt aRow, TInt aVariety);
	static TAknWindowComponentLayout WindowLineCV(const SCompDataImplData* aImplData, TInt aColumn, TInt aVariety);
	static TAknWindowComponentLayout WindowLineVC(const SCompDataImplData* aImplData, TInt aVariety, TInt aColumn);
	static TAknWindowComponentLayout WindowLineVCR(const SCompDataImplData* aImplData, TInt aVariety, TInt aColumn, TInt aRow);
	static TAknWindowComponentLayout WindowLineVRC(const SCompDataImplData* aImplData, TInt aVariety, TInt aRow, TInt aColumn);
	static TAknWindowComponentLayout WindowLineCVR(const SCompDataImplData* aImplData, TInt aColumn, TInt aVariety, TInt aRow);
	static TAknWindowComponentLayout WindowLineCRV(const SCompDataImplData* aImplData, TInt aColumn, TInt aRow, TInt aVariety);
	static TAknWindowComponentLayout WindowLineRCV(const SCompDataImplData* aImplData, TInt aRow, TInt aColumn, TInt aVariety);
	static TAknWindowComponentLayout WindowLineRVC(const SCompDataImplData* aImplData, TInt aRow, TInt aVariety, TInt aColumn);

	static TAknTextComponentLayout TextLine(const SCompDataImplData* aImplData);
	static TAknTextComponentLayout TextLineV(const SCompDataImplData* aImplData, TInt aVariety);
	static TAknTextComponentLayout TextLineC(const SCompDataImplData* aImplData, TInt aColumn);
	static TAknTextComponentLayout TextLineR(const SCompDataImplData* aImplData, TInt aRow);
	static TAknTextComponentLayout TextLineCR(const SCompDataImplData* aImplData, TInt aColumn, TInt aRow);
	static TAknTextComponentLayout TextLineRC(const SCompDataImplData* aImplData, TInt aRow, TInt aColumn);
	static TAknTextComponentLayout TextLineVR(const SCompDataImplData* aImplData, TInt aVariety, TInt aRow);
	static TAknTextComponentLayout TextLineRV(const SCompDataImplData* aImplData, TInt aRow, TInt aVariety);
	static TAknTextComponentLayout TextLineCV(const SCompDataImplData* aImplData, TInt aColumn, TInt aVariety);
	static TAknTextComponentLayout TextLineVC(const SCompDataImplData* aImplData, TInt aVariety, TInt aColumn);
	static TAknTextComponentLayout TextLineVCR(const SCompDataImplData* aImplData, TInt aVariety, TInt aColumn, TInt aRow);
	static TAknTextComponentLayout TextLineVRC(const SCompDataImplData* aImplData, TInt aVariety, TInt aRow, TInt aColumn);
	static TAknTextComponentLayout TextLineCVR(const SCompDataImplData* aImplData, TInt aColumn, TInt aVariety, TInt aRow);
	static TAknTextComponentLayout TextLineCRV(const SCompDataImplData* aImplData, TInt aColumn, TInt aRow, TInt aVariety);
	static TAknTextComponentLayout TextLineRCV(const SCompDataImplData* aImplData, TInt aRow, TInt aColumn, TInt aVariety);
	static TAknTextComponentLayout TextLineRVC(const SCompDataImplData* aImplData, TInt aRow, TInt aVariety, TInt aColumn);

	static TAknWindowComponentLayout WindowTableL(const SCompDataImplData* aImplData, TInt aLineIndex);
	static TAknWindowComponentLayout WindowTableLV(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aVariety);
	static TAknWindowComponentLayout WindowTableLC(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aColumn);
	static TAknWindowComponentLayout WindowTableLR(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aRow);
	static TAknWindowComponentLayout WindowTableLCR(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aColumn, TInt aRow);
	static TAknWindowComponentLayout WindowTableLRC(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aRow, TInt aColumn);
	static TAknWindowComponentLayout WindowTableLVR(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aVariety, TInt aRow);
	static TAknWindowComponentLayout WindowTableLRV(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aRow, TInt aVariety);
	static TAknWindowComponentLayout WindowTableLCV(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aColumn, TInt aVariety);
	static TAknWindowComponentLayout WindowTableLVC(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aVariety, TInt aColumn);
	static TAknWindowComponentLayout WindowTableLVCR(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aVariety, TInt aColumn, TInt aRow);
	static TAknWindowComponentLayout WindowTableLVRC(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aVariety, TInt aRow, TInt aColumn);
	static TAknWindowComponentLayout WindowTableLCVR(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aColumn, TInt aVariety, TInt aRow);
	static TAknWindowComponentLayout WindowTableLCRV(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aColumn, TInt aRow, TInt aVariety);
	static TAknWindowComponentLayout WindowTableLRCV(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aRow, TInt aColumn, TInt aVariety);
	static TAknWindowComponentLayout WindowTableLRVC(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aRow, TInt aVariety, TInt aColumn);

	static TAknTextComponentLayout TextTableL(const SCompDataImplData* aImplData, TInt aLineIndex);
	static TAknTextComponentLayout TextTableLV(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aVariety);
	static TAknTextComponentLayout TextTableLC(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aColumn);
	static TAknTextComponentLayout TextTableLR(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aRow);
	static TAknTextComponentLayout TextTableLCR(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aColumn, TInt aRow);
	static TAknTextComponentLayout TextTableLRC(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aRow, TInt aColumn);
	static TAknTextComponentLayout TextTableLVR(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aVariety, TInt aRow);
	static TAknTextComponentLayout TextTableLRV(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aRow, TInt aVariety);
	static TAknTextComponentLayout TextTableLCV(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aColumn, TInt aVariety);
	static TAknTextComponentLayout TextTableLVC(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aVariety, TInt aColumn);
	static TAknTextComponentLayout TextTableLVCR(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aVariety, TInt aColumn, TInt aRow);
	static TAknTextComponentLayout TextTableLVRC(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aVariety, TInt aRow, TInt aColumn);
	static TAknTextComponentLayout TextTableLCVR(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aColumn, TInt aVariety, TInt aRow);
	static TAknTextComponentLayout TextTableLCRV(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aColumn, TInt aRow, TInt aVariety);
	static TAknTextComponentLayout TextTableLRCV(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aRow, TInt aColumn, TInt aVariety);
	static TAknTextComponentLayout TextTableLRVC(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aRow, TInt aVariety, TInt aColumn);
		
	static TAknLayoutScalableTableLimits TableLimits(const TUint16* aDataLookup);
	static TAknLayoutScalableParameterLimits ParameterLimits(const SCompDataImplData* aImplData);
	static TAknLayoutScalableParameterLimits ParameterLimitsV(const SCompDataImplData* aImplData, TInt aVariety);
	static TAknLayoutScalableParameterLimits ParameterLimitsTableL(const SCompDataImplData* aImplData, TInt aLineIndex);
	static TAknLayoutScalableParameterLimits ParameterLimitsTableLV(const SCompDataImplData* aImplData, TInt aLineIndex, TInt aVariety);

	static TAknLayoutScalableComponentType GetComponentTypeById(const SCompDataImplData* aImplData, TInt aComponentId);
	static TAknLayoutScalableParameterLimits GetParamLimitsById(const SCompDataImplData* aImplData, TInt aComponentId, TInt aVariety);	
	static TAknWindowComponentLayout GetWindowComponentById(const SCompDataImplData* aImplData, TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow);
	static TAknTextComponentLayout GetTextComponentById(const SCompDataImplData* aImplData, TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow);
	};

#endif
