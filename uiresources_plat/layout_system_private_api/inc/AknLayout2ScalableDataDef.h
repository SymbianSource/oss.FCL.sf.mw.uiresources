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


#ifndef AKNLAYOUT2SCALABLEDATADEF_H
#define AKNLAYOUT2SCALABLEDATADEF_H

#include <AknLayout2ScalableDef.h>

// constants used as special values in layout data
// for internal use only.
const TInt16 p = 0x4000;

/**
* A version of TAknLayoutScalableParameterLimits that can be initialised as a const static.
* For internal use only.
* This must be maintained in parallel with TAknWindowComponentLayout.
*/
class TAknLayoutScalableParameterLimitsImp
	{
public:
	inline operator TAknLayoutScalableParameterLimits() { return *reinterpret_cast<TAknLayoutScalableParameterLimits*>(this); }

public:
	TInt iFirstVariety;
	TInt iLastVariety;
	TInt iFirstColumn;
	TInt iLastColumn;
	TInt iFirstRow;
	TInt iLastRow;
	};


/**
* A version of TAknWindowComponentLayout that can be initialised as a const static.
* For internal use only.
* This must be maintained in parallel with TAknWindowComponentLayout.
*/
class TAknWindowComponentLayoutImp
	{
public:
	inline operator TAknWindowComponentLayout() { return *reinterpret_cast<TAknWindowComponentLayout*>(this); }

public:
    // structural information
    TInt16 iFirstChildID;
    TInt16 iNextSiblingID;
    TInt16 iParentID;
    TInt16 iParentVariety;

    TInt16 iType;
    TInt16 iAttributeSetID;

    // the following entries are the layout data
    TInt16 iC;
    TInt16 il;
    TInt16 it;

    TInt16 ir;
    TInt16 ib;
    TInt16 iW;
    TInt16 iH;
    
    // the following entries are to force this structure to be castable to TAknTextComponentLayout
    TInt16 iReserved1;
    TInt16 iReserved2;
    TInt16 iReserved3;
	};


/**
* A version of TAknTextComponentLayout that can be initialised as a const static.
* For internal use only.
* This must be maintained in parallel with TAknTextComponentLayout.
*/
class TAknTextComponentLayoutImp
	{
public:
	inline operator TAknTextComponentLayout() { return *reinterpret_cast<TAknTextComponentLayout*>(this); }

public:
    // structural information
    TInt16 iFirstChildID;
    TInt16 iNextSiblingID;
    TInt16 iParentID;
    TInt16 iParentVariety;

    TInt16 iType;
    TInt16 iAttributeSetID;

    // the following entries are the layout data
    TInt16 iC;
    TInt16 il;
    TInt16 it;

    TInt16 ir;
    TInt16 ib; // note that this is bottom, not baseline
    TInt16 iW;
    TInt16 iH;
    
    // the following entries are specific to text components
    TInt16 iJ;
    mutable TInt32 iFont;
	};


#ifdef RD_SECURE_BIN_RES
_LIT(KAknLayoutDllName, "101fe2aa.DLL");
#else
_LIT(KAknLayoutDllName, "LayoutInst.DLL");
#endif

/**
* represents data structures used in the optimised representation of layout data.
* for internal use only
*/
struct SCompDataImplData
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
class AknLayoutScalableDecodeSupport
	{
public:
	IMPORT_C static void WindowLine(TAknWindowComponentLayoutImp& aLine, const SCompDataImplData* aImplData);
	IMPORT_C static void WindowLine(TAknWindowComponentLayoutImp& aLine, const SCompDataImplData* aImplData, TInt aVariety, TInt aColumn, TInt aRow);

	IMPORT_C static void TextLine(TAknTextComponentLayoutImp& aLine, const SCompDataImplData* aImplData);
	IMPORT_C static void TextLine(TAknTextComponentLayoutImp& aLine, const SCompDataImplData* aImplData, TInt aVariety, TInt aColumn, TInt aRow);

	IMPORT_C static void WindowTable(TAknWindowComponentLayoutImp& aLine, const SCompDataImplData* aImplData, TInt aLineIndex);
	IMPORT_C static void WindowTable(TAknWindowComponentLayoutImp& aLine, const SCompDataImplData* aImplData, TInt aLineIndex, TInt aVariety, TInt aColumn, TInt aRow);

	IMPORT_C static void TextTable(TAknTextComponentLayoutImp& aLine, const SCompDataImplData* aImplData, TInt aLineIndex);
	IMPORT_C static void TextTable(TAknTextComponentLayoutImp& aLine, const SCompDataImplData* aImplData, TInt aLineIndex, TInt aVariety, TInt aColumn, TInt aRow);
	
	IMPORT_C static TAknLayoutScalableTableLimits TableLimits(const TUint16* aDataLookup);
	IMPORT_C static void ParameterLimits(TAknLayoutScalableParameterLimitsImp& aLimits, const SCompDataImplData* aImplData, TInt aVariety);
	IMPORT_C static void ParameterLimitsTable(TAknLayoutScalableParameterLimitsImp& aLimits, const SCompDataImplData* aImplData, TInt aLineIndex, TInt aVariety);

	IMPORT_C static void GetComponentTypeById(TAknLayoutScalableComponentType& aLimits, const SCompDataImplData* aImplData, TInt aComponentId);
	IMPORT_C static void GetParamLimitsById(TAknLayoutScalableParameterLimitsImp& aLimits, const SCompDataImplData* aImplData, TInt aComponentId, TInt aVariety);	
	IMPORT_C static void GetWindowComponentById(TAknWindowComponentLayoutImp & aLine, const SCompDataImplData* aImplData, TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow);
	IMPORT_C static void GetTextComponentById(TAknTextComponentLayoutImp & aLine, const SCompDataImplData* aImplData, TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow);

private:
	static void DecodeTypeId(TInt16& aType, TBool& aHasHeaderBlock, const TUint8*& aData);
	static void DecodeSimple(TUint16* aLine, const TUint8* aData, TInt aNumCells);
	static void DecodeSimpleCells(TUint16* aLine, const TUint8* aData, TUint16 aType, TInt aNumCells);
	static void DecodeHeaderBlock(TInt*& aLimits, TInt& aNumVarieties, TInt& aNumMultiValues, const TUint8*& aParamsPtr, const TUint8*& aData, TInt aVariety);
	static void DecodeParamLimitParam(TInt*& aLimits, TInt& aNumMultiValues, const TUint8*& aParamsPtr, const TUint8*& aData, TInt aVariety, TInt aCellIndex, TInt& aVarietyOffset);
	static void DecodeParams(TUint16* aLine, const TUint8* aData, TInt aNumCells, TInt aVariety, TInt aColumn, TInt aRow);
	static void DecodeParamCells(TUint16* aLine, const TUint8* aData, TUint16 aType, TInt aNumCells, TInt aVariety, TInt aColumn, TInt aRow);
	static void DecodeParam(TInt aCell, TBool& aOptimizedVarieties, TInt& aMax, TInt& aParam, const TUint8* aParamsPtr, TInt aNumParams, TInt aMulti, TInt aVariety, TInt aVarietyOffset);
	static void DecodeCell(TInt& aMax, TInt& aParam, const TUint8*& aDataPtr, TUint16*& aDecodedPtr);
	static void DecodeParamLimitsCell(TInt aVariety, TInt aMax, TInt& aParam, const TUint8*& aDataPtr, TUint32*& aDecodedPtr, TInt& aVarietyOffset);
	static void DecodeParamLimits(TInt* aLimits, const TUint8* aData, TInt aVariety);
	static void SkipBytes(const TUint8*& aPtr, TInt aNum);
	static TInt32 SumBytes(const TUint8*& aPtr, TInt aNum);
	static TInt32 DecodeBytes(const TUint8*& aPtr);
	static void DecodeBytes(const TUint8*& aPtr, TUint16*& aDecodedPtr);
	static const TUint8* DecodeTable(const SCompDataImplData* aImplData, TInt aLineIndex);
	static const TUint8* DataPtr(const SCompDataImplData* aImplData);
	static const TUint8* DataPtr(const SCompDataImplData* aImplData, TInt aComponentId);
	static void MirrorValues(TAknWindowComponentLayoutImp& aLine);
	static void MirrorValues(TAknTextComponentLayoutImp& aLine);
	};


#endif
// End of File
