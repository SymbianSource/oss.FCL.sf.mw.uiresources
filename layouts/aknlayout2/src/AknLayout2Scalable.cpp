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


#include "AknLayout2ScalableDataDef.h"
#include "AknLayout2ScalableDef.h"
#include <layoutmetadata.cdl.h>
#include <CdlEngine.h>


#define AKNLAYOUT_DEFINE_BYTECODE(name,byte) const TUint8 name = byte;
#include "AknLayoutByteCodes.h"

// in the simple case, numCols and numRows are missing
const TInt KNumCellsNotSimple = 2;

// first two cells are numCols and numRows
const TInt KNumCellsWindow = 7;
const TInt KNumCellsText = 9;

// this is the total possible number
const TInt KNumCells = 11;

#ifndef EKA2
GLDEF_C TInt E32Dll(TDllReason)
	{
	return KErrNone;
	}
#endif

//
// Panic
//

enum TLayoutScalablePanic
	{
	ENegativeOffset,
	EOffsetOutOfRange,
	EIllegalLineIndex,
	EMultiLineOffsetOutOfRange,
	EParameterOutOfRange,
	EWrongType
	};

void Panic(TLayoutScalablePanic aCode)
	{
	_LIT(KLayoutPanic, "Layout panic");
	User::Panic(KLayoutPanic, aCode);
	}


//
// Helpers
//

TInt16 Max(TInt16 aValue1, TInt16 aValue2)
    {
    if (aValue1 > aValue2) return aValue1;
    return aValue2;
    }
TInt16 MinusInt(TInt16 aValue1, TInt16 aValue2)
    {
    return TInt16(aValue1 - aValue2);
    }

TBool IsParentRelative(TInt aVal)
    {
    return aVal > ELayoutP-ELayoutPRange && aVal <= ELayoutP;
    }

struct TAknTextComponentLayoutAttrs 
    {
    TInt32 iFontId;
    TInt16 iJustification;
    };

TAknTextComponentLayoutAttrs ExtractAttributes(TAknTextComponentLayout aText)
    {
    TAknTextComponentLayoutAttrs attrs;
    attrs.iFontId = aText.Font();
    attrs.iJustification = aText.J();
    return attrs;
    }

TAknWindowComponentLayout TAknWindowComponentLayout::ExtractWindow(TAknTextComponentLayout aText)
    {
    TAknWindowComponentLayout layout;
    layout.Setl(aText.l());
    layout.Sett(aText.t());
    layout.SetW(aText.W());
    layout.SetH(aText.H());
    layout.Setb(aText.b());
    layout.Setr(aText.r());

	layout.SetC(aText.C()); // colour is separate.
    return layout;
    }

TAknTextComponentLayout TAknWindowComponentLayout::CombineAttrs(TAknWindowComponentLayout aLine1, const TAknTextComponentLayoutAttrs &aAttrs)
    {
    TAknTextComponentLayout layout;
    layout.Setl(aLine1.l());
    layout.Sett(aLine1.t());
    layout.SetW(aLine1.W());
    layout.SetH(aLine1.H());
    layout.Setb(aLine1.b());
    layout.Setr(aLine1.r());
	layout.SetC(aLine1.C());
    layout.SetJ(aAttrs.iJustification);
    layout.SetFont(aAttrs.iFontId);
    return layout;
    }

struct TAknWindowComponentLayoutAttrs
	{
	TInt16 iGap;
	};

TAknWindowComponentLayout TAknWindowComponentLayout::RemoveLayoutEmptys(TAknWindowComponentLayout aLine1)
    {
    if (aLine1.r() == ELayoutEmpty)
        {
        aLine1.Setr( TInt16(ELayoutP - aLine1.W() - aLine1.l()));
        }
    if (aLine1.b() == ELayoutEmpty)
        {
        aLine1.Setb(TInt16(ELayoutP - aLine1.H() - aLine1.t()));
        }

    if (aLine1.l() == ELayoutEmpty)
        {
        aLine1.Setl(TInt16(ELayoutP - aLine1.W() - aLine1.r()));
        }
    if (aLine1.t() == ELayoutEmpty)
        {
        aLine1.Sett(TInt16(ELayoutP - aLine1.H() - aLine1.b()));
        }
    if (aLine1.W() == ELayoutEmpty)
        {
        aLine1.SetW(TInt16(ELayoutP - aLine1.l() - aLine1.r()));
        }
    if (aLine1.H() == ELayoutEmpty)
        {
        aLine1.SetH(TInt16(ELayoutP - aLine1.t() - aLine1.b()));
        }
#if defined (_DEBUG)
	TBool noerror1 = aLine1.il + aLine1.iW + aLine1.ir == ELayoutP;
	TBool noerror2 = aLine1.it + aLine1.iH + aLine1.ib == ELayoutP;
	if (!noerror1 || !noerror2)
		{
		noerror1 = noerror1; // good place for breakpoint.
		}
/*
	__ASSERT_DEBUG(noerror1, Panic(EInvalidLayoutData));
	__ASSERT_DEBUG(noerror2, Panic(EInvalidLayoutData));

*/
#endif
    
	return aLine1;
    }

EXPORT_C TAknTextComponentLayout TAknTextComponentLayout::RemoveLayoutEmptys(TAknTextComponentLayout aLine1)
    {
   if (aLine1.r() == ELayoutEmpty)
        {
        aLine1.Setr( TInt16(ELayoutP - aLine1.W() - aLine1.l()));
        }
    if (aLine1.b() == ELayoutEmpty)
        {
        aLine1.Setb(TInt16(ELayoutP - aLine1.H() - aLine1.t()));
        }

    if (aLine1.l() == ELayoutEmpty)
        {
        aLine1.Setl(TInt16(ELayoutP - aLine1.W() - aLine1.r()));
        }
    if (aLine1.t() == ELayoutEmpty)
        {
        aLine1.Sett(TInt16(ELayoutP - aLine1.H() - aLine1.b()));
        }
    if (aLine1.W() == ELayoutEmpty)
        {
        aLine1.SetW(TInt16(ELayoutP - aLine1.l() - aLine1.r()));
        }
    if (aLine1.H() == ELayoutEmpty)
        {
        aLine1.SetH(TInt16(ELayoutP - aLine1.t() - aLine1.b()));
        }

    
	return aLine1;

    }


// 
// class TAknLayoutScalableTableLimits
// 

EXPORT_C TAknLayoutScalableTableLimits::TAknLayoutScalableTableLimits(TInt aFirstIndex, TInt aLastIndex)	
	:
	iFirstIndex(aFirstIndex),
	iLastIndex(aLastIndex)
	{

	}

EXPORT_C TAknLayoutScalableTableLimits::TAknLayoutScalableTableLimits()	
	{

	}

EXPORT_C TAknLayoutTableLimits TAknLayoutScalableTableLimits::LayoutLimits() const
	{
	TAknLayoutTableLimits limits;
	limits.iFirstIndex = iFirstIndex;
	limits.iLastIndex = iLastIndex;
	return limits;
	}

EXPORT_C TInt TAknLayoutScalableTableLimits::FirstIndex() const
	{
	return iFirstIndex;
	}

EXPORT_C TInt TAknLayoutScalableTableLimits::LastIndex() const
	{
	return iLastIndex;
	}

EXPORT_C void TAknLayoutScalableTableLimits::SetFirstIndex(TInt aIndex)
	{
	iFirstIndex = aIndex;
	}

EXPORT_C void TAknLayoutScalableTableLimits::SetLastIndex(TInt aIndex)
	{
	iLastIndex = aIndex;
	}

//
// class TAknLayoutScalableParameterLimits
//

EXPORT_C TAknLayoutScalableParameterLimits::TAknLayoutScalableParameterLimits()
	:
	iFirstVariety(0), iLastVariety(0),
	iFirstColumn(0), iLastColumn(0),
	iFirstRow(0), iLastRow(0)
	{

	}

EXPORT_C TAknLayoutScalableParameterLimits::TAknLayoutScalableParameterLimits(
	TInt aFirstVariety, TInt aLastVariety, 
	TInt aFirstColumn, TInt aLastColumn, 
	TInt aFirstRow, TInt aLastRow)
	:
	iFirstVariety(aFirstVariety), iLastVariety(aLastVariety),
	iFirstColumn(aFirstColumn), iLastColumn(aLastColumn),
	iFirstRow(aFirstRow), iLastRow(aLastRow)
	{

	}

EXPORT_C TInt TAknLayoutScalableParameterLimits::FirstVariety() const
	{
	return iFirstVariety;
	}

EXPORT_C TInt TAknLayoutScalableParameterLimits::LastVariety() const
	{
	return iLastVariety;
	}

EXPORT_C TInt TAknLayoutScalableParameterLimits::FirstColumn() const
	{
	return iFirstColumn;
	}

EXPORT_C TInt TAknLayoutScalableParameterLimits::LastColumn() const
	{
	return iLastColumn; 
	}

EXPORT_C TInt TAknLayoutScalableParameterLimits::FirstRow() const
	{
	return iFirstRow;
	}

EXPORT_C TInt TAknLayoutScalableParameterLimits::LastRow() const
	{
	return iLastRow;
	}

EXPORT_C void TAknLayoutScalableParameterLimits::SetFirstVariety(TInt aFirstVariety)
	{
	iFirstVariety = aFirstVariety;
	}

EXPORT_C void TAknLayoutScalableParameterLimits::SetLastVariety(TInt aLastVariety)
	{
	iLastVariety = aLastVariety;
	}

EXPORT_C void TAknLayoutScalableParameterLimits::SetFirstColumn(TInt aFirstColumn)
	{
	iFirstColumn = aFirstColumn;
	}

EXPORT_C void TAknLayoutScalableParameterLimits::SetLastColumn(TInt aLastColumn)
	{
	iLastColumn = aLastColumn;
	}

EXPORT_C void TAknLayoutScalableParameterLimits::SetFirstRow(TInt aFirstRow)
	{
	iFirstRow = aFirstRow;
	}

EXPORT_C void TAknLayoutScalableParameterLimits::SetLastRow(TInt aLastRow)
	{
	iLastRow = aLastRow;
	}




// 
// class TAknWindowComponentLayout
// 

EXPORT_C TAknWindowComponentLayout::TAknWindowComponentLayout()
	:
	iC(ELayoutEmpty),
	il(0),
	it(0),
	ir(0),
	ib(0),
	iW(ELayoutEmpty),
	iH(ELayoutEmpty)
	{

	}

EXPORT_C TAknWindowLineLayout TAknWindowComponentLayout::LayoutLine() const
	{
	TAknWindowLineLayout line;
	line.iC = iC;
	line.il = il;
	line.it = it;
	line.ir = ir;
	line.ib = ib;
	line.iW = iW;
	line.iH = iH;

    // Swap parent relative and empty based on equation l+W+r = p.W
    TInt16 *empty = NULL;
    if (line.il == ELayoutEmpty) empty = &line.il;
    if (line.iW == ELayoutEmpty) empty = &line.iW;
    if (line.ir == ELayoutEmpty) empty = &line.ir;

    TInt16 *parentRelative = NULL;
    if (IsParentRelative(line.il)) parentRelative = &line.il;
    if (IsParentRelative(line.iW)) parentRelative = &line.iW;
    if (IsParentRelative(line.ir)) parentRelative = &line.ir;
    
    TInt16 *number = NULL;
    if (&line.il != empty && (&line.il) != parentRelative) number=&line.il;
    if (&line.iW != empty && (&line.iW) != parentRelative) number=&line.iW;
    if (&line.ir != empty && (&line.ir) != parentRelative) number=&line.ir;

    if (empty && parentRelative && number)
        {
        *empty = TInt16(ELayoutP - *parentRelative - *number);
        *parentRelative = ELayoutEmpty;
        }

    // Swap parent relative and empty based on equation t+H+b = p.H
    empty = NULL;
    if (line.it == ELayoutEmpty) empty = &line.it;
    if (line.iH == ELayoutEmpty) empty = &line.iH;
    if (line.ib == ELayoutEmpty) empty = &line.ib;

    parentRelative = NULL;
    if (IsParentRelative(line.it)) parentRelative = &line.it;
    if (IsParentRelative(line.iH)) parentRelative = &line.iH;
    if (IsParentRelative(line.ib)) parentRelative = &line.ib;
    
    number = NULL;
    if (&line.it != empty && (&line.it) != parentRelative) number=&line.it;
    if (&line.iH != empty && (&line.iH) != parentRelative) number=&line.iH;
    if (&line.ib != empty && (&line.ib) != parentRelative) number=&line.ib;

    if (empty && parentRelative && number)
        {
        *empty = TInt16(ELayoutP - *parentRelative - *number);
        *parentRelative = ELayoutEmpty;
        }
    
    
    
	return line;
	}

EXPORT_C TAknWindowLineLayout TAknWindowComponentLayout::LayoutLineNoEmptys() const
	{
	TAknWindowLineLayout line;
	line.iC = iC;
	line.il = (il == ELayoutEmpty) ? TInt16(ELayoutP - iW - ir) : il;
	line.it = (it == ELayoutEmpty) ? TInt16(ELayoutP - iH - ib) : it;
	line.ir = (ir == ELayoutEmpty) ? TInt16(ELayoutP - iW - il) : ir;
	line.ib = (ib == ELayoutEmpty) ? TInt16(ELayoutP - iH - it) : ib;
	line.iW = (iW == ELayoutEmpty) ? TInt16(ELayoutP - il - ir) : iW;
	line.iH = (iH == ELayoutEmpty) ? TInt16(ELayoutP - it - ib) : iH;
	return line;
	}

EXPORT_C TAknLayoutScalableComponentType TAknWindowComponentLayout::LayoutComponentType() const
	{
	TAknLayoutScalableComponentType type = (TAknLayoutScalableComponentType)iType;
	return type;
	}

EXPORT_C TInt16 TAknWindowComponentLayout::C() const
	{
	return iC;
	}

EXPORT_C TInt16 TAknWindowComponentLayout::l() const
	{
	return il;
	}

EXPORT_C TInt16 TAknWindowComponentLayout::t() const
	{
	return it;
	}

EXPORT_C TInt16 TAknWindowComponentLayout::r() const
	{
	return ir;
	}

EXPORT_C TInt16 TAknWindowComponentLayout::b() const
	{
	return ib;
	}

EXPORT_C TInt16 TAknWindowComponentLayout::W() const
	{
	return iW;
	}

EXPORT_C TInt16 TAknWindowComponentLayout::H() const
	{
	return iH;
	}

EXPORT_C void TAknWindowComponentLayout::SetC(TInt16 aC)
	{
	iC = aC;
	}

EXPORT_C void TAknWindowComponentLayout::Setl(TInt16 al)
	{
	il = al;
	}

EXPORT_C void TAknWindowComponentLayout::Sett(TInt16 at)
	{
	it = at;
	}

EXPORT_C void TAknWindowComponentLayout::Setr(TInt16 ar)
	{
	ir = ar;
	}

EXPORT_C void TAknWindowComponentLayout::Setb(TInt16 ab)
	{
	ib = ab;
	}

EXPORT_C void TAknWindowComponentLayout::SetW(TInt16 aW)
	{
	iW = aW;
	}

EXPORT_C void TAknWindowComponentLayout::SetH(TInt16 aH)
	{
	iH = aH;
	}


EXPORT_C TAknWindowComponentLayout TAknWindowComponentLayout::Compose(TAknWindowComponentLayout aLine1, TAknWindowComponentLayout aLine2)
    {
    if (aLine1.r() == ELayoutEmpty)
        {
        aLine1.Setr( TInt16(ELayoutP - aLine1.W() - aLine1.l()));
        }
    if (aLine1.b() == ELayoutEmpty)
        {
        aLine1.Setb(TInt16(ELayoutP - aLine1.H() - aLine1.t()));
        }
    
    if (aLine1.l() == ELayoutEmpty)
        {
        aLine1.Setl(TInt16(ELayoutP - aLine1.W() - aLine1.r()));
        }
    if (aLine1.t() == ELayoutEmpty)
        {
        aLine1.Sett(TInt16(ELayoutP - aLine1.H() - aLine1.b()));
        }
    
    
    if (aLine2.r() == ELayoutEmpty)
        {
        aLine2.Setr(TInt16(ELayoutP /*-p2Xdiff*/ - aLine2.W() - aLine2.l()));
        }
    if (aLine2.b() == ELayoutEmpty)
        {
        aLine2.Setb(TInt16(ELayoutP /*-p2Ydiff*/ - aLine2.H() - aLine2.t()));
        }
    
    if (aLine2.l() == ELayoutEmpty)
        {
        aLine2.Setl(TInt16(ELayoutP /*-p2Xdiff*/ - aLine2.W()- aLine2.r()));
        }
    if (aLine2.t() == ELayoutEmpty)
        {
        aLine2.Sett(TInt16(ELayoutP /*-p2Ydiff*/ - aLine2.H() - aLine2.b()));
        }
#if defined(_DEBUG)
    // these are only in debug build, because the rest of the Compose() does not need W and H; so this should have no effect.
	if (aLine1.W() == ELayoutEmpty)
		{
		aLine1.SetW(TInt16(ELayoutP - aLine1.l() - aLine1.r()) );
		}
    if (aLine1.H() == ELayoutEmpty)
		{
		aLine1.SetH(TInt16(ELayoutP - aLine1.t() - aLine1.b()) );
		}
	if (aLine2.W() == ELayoutEmpty)
		{
		aLine2.SetW(TInt16(ELayoutP - aLine2.l() - aLine2.r()) );
		}
    if (aLine2.H() == ELayoutEmpty)
		{
		aLine2.SetH(TInt16(ELayoutP - aLine2.t() - aLine2.b()) );
		}
	TBool noerror1 = aLine1.il + aLine1.iW + aLine1.ir == ELayoutP;
	TBool noerror2 = aLine1.it + aLine1.iH + aLine1.ib == ELayoutP;
	TBool noerror3 = aLine2.il + aLine2.iW + aLine2.ir == ELayoutP;
	TBool noerror4 = aLine2.it + aLine2.iH + aLine2.ib == ELayoutP;
	if (!noerror1 || !noerror2 || !noerror3 || !noerror4)
		{
		noerror1 = noerror1; // good place for breakpoint.
		}
/*
	__ASSERT_DEBUG(noerror1, Panic(EInvalidLayoutData));
	__ASSERT_DEBUG(noerror2, Panic(EInvalidLayoutData));

	__ASSERT_DEBUG(noerror3, Panic(EInvalidLayoutData));
	__ASSERT_DEBUG(noerror4, Panic(EInvalidLayoutData));
*/
#endif

	// Upgrade all p-XX type expressions, these are only for aLine2. Parent of aLine2 is different
	// from aLine1's parent, so we need to do conversion from parent of aLine2 to parent of aLine1
    if (IsParentRelative(aLine2.r()))
        {
        TInt p2Xdiff = aLine1.l() + aLine1.r();
        aLine2.Setr(TInt16(aLine2.r() - p2Xdiff));
        }
    if (IsParentRelative(aLine2.b()))
        {
	    TInt p2Ydiff = aLine1.t() + aLine1.b();
        aLine2.Setb(TInt16(aLine2.b() - p2Ydiff));
        }
    if (IsParentRelative(aLine2.l()))
        {
        TInt p2Xdiff = aLine1.l() + aLine1.r();
        aLine2.Setl(TInt16(aLine2.l() - p2Xdiff));
        }
    if (IsParentRelative(aLine2.t()))
        {
        TInt p2Ydiff = aLine1.t() + aLine1.b();
        aLine2.Sett(TInt16(aLine2.t() - p2Ydiff));
        }
    
    if (IsParentRelative(aLine1.r()) && IsParentRelative(aLine2.r()))
        {
        aLine1.Setr(TInt16(aLine1.r() - ELayoutP));
        }
    if (IsParentRelative(aLine1.b()) && IsParentRelative(aLine2.b()))
        {
        aLine1.Setb(TInt16(aLine1.b() - ELayoutP));
        }
    
	// It might be possible that here we need parent relative checks for t and l too.
	// We might need to do some changes to allow multiply() to work, for example ELayoutEmpty's
	//      need to handle the p-values. (i.e. r == ElayoutEmpty -check doesnt work anymore etc)
    
    TAknWindowComponentLayout result;
    result.Setl(TInt16(aLine1.l() + aLine2.l()));
    result.Sett(TInt16(aLine1.t() + aLine2.t()));
    result.Setr(TInt16(aLine1.r() + aLine2.r()));
    result.Setb(TInt16(aLine1.b() + aLine2.b()));
    result.SetW(ELayoutEmpty); 
    result.SetH(ELayoutEmpty); 
	result.SetC(aLine2.C());
    return result;
    }


TBool IsValueEmpty(TInt aValue)
{
	return aValue >= ELayoutEmpty && aValue < (ELayoutEmpty +8192);
	}
//TReal FromEmptyToDividingFloat(TInt aValue)
//{
//}
//TReal MultiplyRealAndReal(TReal aReal, TReal aReal2)
//{
//  return aReal * aReal2;
//}

//TInt MultiplyIntAndReal(TInt aValue, TReal aReal)
//{
// return aValue * aReal;
//}
/*
class TScaledInt
{
public:
	TScaledInt(TInt16 aValue) : iValue(aValue) { }

	friend inline TScaledInt operator*(TScaledInt aValue, TScaledInt aValue2)
	{
	return TInt16( (TInt32(aValue.Value()) * TInt32(aValue2.Value())) >> 12 );
	}
    
	friend TInt16 MultiplyByScaled(TInt16 aValue, TScaledInt aValue2)
	{
	return TInt16( TInt32(aValue) * TInt32(aValue2.Value()) );
    }

	TInt16 Value() { return iValue; }

private:
  TInt16 iValue;
};
*/
/*
struct TTriplet
	{
	TScaledInt iX;
	TScaledInt iY;
	TScaledInt iP;
	};
*/
  TAknWindowComponentLayout::TTriplet::TTriplet(TInt16 aX, TInt16 aY, TInt16 aP)
: iX(aX), iY(aY), iP(aP) { }
  TAknWindowComponentLayout::TTriplet::TTriplet(const TTriplet &aValue)
: iX(aValue.iX), iY(aValue.iY), iP(aValue.iP)
	{
	}

TInt16 AddEmptyFlag(TInt16 aValue) { return (TInt16)(aValue + ELayoutEmpty); }
TInt16 RemoveEmptyFlag(TInt16 aValue) { return (TInt16)(aValue - ELayoutEmpty); }

TInt16 AddPFlag(TInt16 aValue) { return (TInt16)(aValue + ELayoutP); }
TInt16 RemovePFlag(TInt16 aValue) { return (TInt16)(aValue - ELayoutP); }


TInt16 TAknWindowComponentLayout::MultiplyValue(TInt16 aValue, TAknWindowComponentLayout::TScaledInt aMultiplier, TAknWindowComponentLayout::TScaledInt aPMultiplier)
  {
  TInt16 result;
  if (IsValueEmpty(aValue))
     {
      // remove ELayoutEmpty flag from aValue
      TInt16 newval = RemoveEmptyFlag(aValue);

      // Multiply aValue by aPMultiplier (aValue is scaled integer).
      TAknWindowComponentLayout::TScaledInt sval(newval);
	  TAknWindowComponentLayout::TScaledInt res = sval * aPMultiplier;

	  result = AddEmptyFlag((TInt16)res.Value());
	  // add ELayoutEmpty flag
	  // done
     }
  else if (!IsParentRelative(aValue))
  { // normal values
    // Multiply aValue by aMultiplier
     result = MultiplyByScaled(aValue, aMultiplier).NonScaled();
  }
  else
     { // parent-relative values
	 // remove ELayoutP flag
     TInt16 newval = RemovePFlag(aValue);

	 // multiply aValue by aMultiplier
	TInt16 res = MultiplyByScaled(newval, aMultiplier).NonScaled();

	 // add ELayoutP flag
	result = AddPFlag(res);
	 // done
	 }
  return result;  
  }

// Multiply requires the following representation for TAknWindowComponentLayout:
// 1) There are 3 dimensions in each TAknWindowComponentLayout:
//     a) X-dimension (l,W,r)
//     b) Y-dimension (t,H,b)
//     c) P-dimension p-XX expressions
// 2) In each empty cell, there are "value" for P encoded as a scaled int from 0.0 .. 1.0
// 3) In each P-cell there are value encoding "p-10" expressions as a ELayoutP flag together with value 10.

TAknWindowComponentLayout TAknWindowComponentLayout::Multiply(TAknWindowComponentLayout aLine, const TTriplet &aTriplet)
	{
	aLine = RemoveLayoutEmptys(aLine);
	aLine.iW = ELayoutEmpty;
	aLine.iH = ELayoutEmpty;
    TAknWindowComponentLayout layout;
    // multiply l,W,r by iX
	layout.il = MultiplyValue(aLine.il, aTriplet.iX, aTriplet.iP);
	layout.iW = MultiplyValue(aLine.iW, aTriplet.iX, aTriplet.iP);
	layout.ir = MultiplyValue(aLine.ir, aTriplet.iX, aTriplet.iP);
    
	// multiply t,H,b by iY
	layout.it = MultiplyValue(aLine.it, aTriplet.iY, aTriplet.iP);
	layout.iH = MultiplyValue(aLine.iH, aTriplet.iY, aTriplet.iP);
	layout.ib = MultiplyValue(aLine.ib, aTriplet.iY, aTriplet.iP);

	layout.iC = aLine.iC;

  // multiply p by iP
  // nothing to be done, since MultiplyValue handles P-values.
  
	// REQUIRES THAT LAYOUT LINES HAVE ALWAYS ONE EMPTY CELL in l,W,r and in t,H,b
   return layout;
   }
/*
struct TRangeTriplet
{
	TInt16 iX; // 0.0 .. 1.0
	TInt16 iY; // 0.0 .. 1.0
	TInt16 iP;
};
*/
TAknWindowComponentLayout::TRangeTriplet OneMinus(TAknWindowComponentLayout::TRangeTriplet aValue)
{
    TAknWindowComponentLayout::TRangeTriplet triplet;
	triplet.iX = (TInt16) ((1 << 12) - aValue.iX);
	triplet.iY = (TInt16) ((1 << 12) - aValue.iY);
	triplet.iP = (TInt16) ((1 << 12) - aValue.iP); 
	return triplet;
}
TAknWindowComponentLayout::TTriplet TAknWindowComponentLayout::FromRangeToTriplet(const TRangeTriplet &aRange)
	{
	TTriplet triplet(aRange.iX, aRange.iY, aRange.iP);
	return triplet;
	}

/*
TRangeTriplet TripletFromPath(TPathDefinition aPath, TReal aPos)
	{
    
    }
*/

TBool HasParentRelative(TInt alt, TInt aWH, TInt arb)
	{
	if (IsParentRelative(alt)) return ETrue;
	if (IsParentRelative(aWH)) return ETrue;
	if (IsParentRelative(arb)) return ETrue;
	return EFalse;
	}

EXPORT_C TAknTextComponentLayout TAknTextComponentLayout::Anim(TAknTextComponentLayout aLine,
								   TAknTextComponentLayout aLine2, 
								   const TAknWindowComponentLayout::TRangeTriplet &aTriplet)
{
    TAknTextComponentLayoutAttrs attrs = ExtractAttributes(aLine);
    TAknWindowComponentLayout window1 = TAknWindowComponentLayout::ExtractWindow(aLine);
    TAknWindowComponentLayout window2 = TAknWindowComponentLayout::ExtractWindow(aLine2);
    TAknWindowComponentLayout animated = TAknWindowComponentLayout::Anim(window1, window2, aTriplet);
    TAknTextComponentLayout text = TAknWindowComponentLayout::CombineAttrs(animated, attrs);
    return text;
}

// Layout animation should be something like this:
EXPORT_C TAknWindowComponentLayout TAknWindowComponentLayout::Anim(TAknWindowComponentLayout aLine, 
																   TAknWindowComponentLayout aLine2, 
																   const TRangeTriplet &aTriplet)
{
	TTriplet triplet(FromRangeToTriplet(aTriplet));
	TTriplet oneminustriplet(FromRangeToTriplet(OneMinus(aTriplet)));
	TAknWindowComponentLayout m1 = Multiply(aLine, triplet);
	TAknWindowComponentLayout m2 = Multiply(aLine2, oneminustriplet);
	TAknWindowComponentLayout c = Compose(m1, m2);

	// the code below assumes that Compose() returns ELayoutEmpty as W and H.

	// X-dimension
	if (HasParentRelative(m1.il, m1.iW, m1.ir) &&
		!HasParentRelative(m2.il, m2.iW, m2.ir))
		{
		c.iW = (TInt16)(ELayoutEmpty + TInt16(triplet.iX.Value()));
		}
	if (!HasParentRelative(m1.il, m1.iW, m1.ir) &&
		HasParentRelative(m2.il, m2.iW, m2.ir))
		{
		c.iW = (TInt16)(ELayoutEmpty + TInt16(oneminustriplet.iX.Value()));
		}

	// Y-dimension
	if (HasParentRelative(m1.it, m1.iH, m1.ib) &&
		!HasParentRelative(m2.it, m2.iH, m2.ib))
		{
		c.iH = (TInt16)(ELayoutEmpty + TInt16(triplet.iY.Value()));
		}
	if (!HasParentRelative(m1.it, m1.iH, m1.ib) &&
		HasParentRelative(m2.it, m2.iH, m2.ib))
		{
		c.iH = (TInt16)(ELayoutEmpty + TInt16(oneminustriplet.iY.Value()));
		}
		
	// NOTE, to really make this work, AknLayoutUtils need to handle the ELayoutEmpty + triplet.iX in the following way:
	    /*
        TInt FindMultiplier(TInt alt, TInt aWH, TInt arb)
	    {
	       TInt mult = 4096;
           if (alt == ELayoutEmpty || aWH == ELayoutEmpty || arb == ELayoutEmpty) { return mult; }
	       if (IsValueEmpty(alt)) { mult =  RemoveEmptyFlag(alt);  }
	       if (IsValueEmpty(aWH)) { mult = RemoveEmptyFlag(aWH); }
	       if (IsValueEmpty(arb)) { mult = RemoveEmptyFlag(arb); }
           return mult;
	    }
        TInt MultiplyParent(TInt parent, TInt alt, TInt awh, TInt arb)
	    {
	       TInt16 multiplier = FindMultiplier(ilt,iWH,irb); 
	       parent = MultiplyByScaled(parent, multiplier).NonScaled();	
           return parent;
	    }
	     ... inside AknLayoutUtils (or RectFromCoords() method actually), need to put the following:
	     if (IsParentRelative(il)) { 
	       TInt parent = aParent.Width(); 
	       parent = MultiplyParent(parent, il, iW, ir);
	       il = il + parent - ELayoutP; 
	     }
	     */
	// Or something like that. (and that for all the components il, it, ir, ib, iW, iH.)
	// BUT, This is really quite complicated thing to do as we would need to do the same
	// for TEXT LINES TOO. (a text line has a layout line inside them, so those probably would need to be animated too)
	// TEXT LINES ARE CLEARLY SOMETHING WE NEED TO THINK ABOUT VERY CAREFULLY. Currently Anim() only works with window lines :-)
	// TEXT LINES HAS A PROBLEM THAT THE FINDMULTIPLIER() is impossible to do with TAknTextLineLayout data structure.
	// and the findmultiplier needs the aParent.Width() value which is only available at TextRectFromCoords.
	// (in TAknTextLineLayout we only have ONE Dimension(x-dimension) fully implemented. y-dimension is missing top value.)

    //
	//
	// Anim method for text lines would work about the same as ComposeText() compared to Compose(). I.e. it'd separate
	// window line layout first from the text line layout and then call Anim on the window line and then combine
	// the results back to text line :-) (and then try to think of how to animate justification attribute :-)
	//
    
	return c;
}



EXPORT_C TAknTextComponentLayout TAknWindowComponentLayout::ComposeText(TAknWindowComponentLayout aLine1, TAknTextComponentLayout aLine2)
    {
    TAknTextComponentLayoutAttrs attrs = ExtractAttributes(aLine2);
    TAknWindowComponentLayout window1 = ExtractWindow(aLine2);
    TAknWindowComponentLayout combined = Compose(aLine1, window1);
    TAknTextComponentLayout text = CombineAttrs(combined, attrs);
    return text;
    }

EXPORT_C TAknWindowComponentLayout TAknWindowComponentLayout::Intersect(TAknWindowComponentLayout aLine, TAknWindowComponentLayout aLine2)
{
    aLine = RemoveLayoutEmptys(aLine);
    aLine2 = RemoveLayoutEmptys(aLine2);
    // Should get rid of W and H
    // Something to do with ELayoutEmpty's and p-10's.
	TAknWindowComponentLayout result;
	result.Setl(Max(aLine.l(), aLine2.l()));
	result.Sett(Max(aLine.t(), aLine2.t()));
	result.SetW(ELayoutEmpty);
	result.SetH(ELayoutEmpty);
	result.Setb(Max(aLine.b(), aLine2.b()));
	result.Setr(Max(aLine.r(), aLine2.r()));
	result.SetC(aLine2.C());
	return result;
}

EXPORT_C TAknWindowComponentLayout TAknWindowComponentLayout::Minus(TAknWindowComponentLayout aLine, TAknWindowComponentLayout aParentDiff)
{
    aLine = RemoveLayoutEmptys(aLine);
    aParentDiff = RemoveLayoutEmptys(aParentDiff);
    // Should get rid of W and H
    // Something to do with ELayoutEmpty's and p-10's.
	TAknWindowComponentLayout result;
	result.Setl(MinusInt(aLine.l(),aParentDiff.l()));
	result.Sett(MinusInt(aLine.t(),aParentDiff.t()));
	result.SetW(ELayoutEmpty);
	result.SetH(ELayoutEmpty);
	result.Setb(MinusInt(aLine.b(),aParentDiff.b()));
	result.Setr(MinusInt(aLine.r(),aParentDiff.r()));
	result.SetC(aLine.C());

    TInt16 pxdiff = TInt16(aParentDiff.l() + aParentDiff.r());
    TInt16 pydiff = TInt16(aParentDiff.t() + aParentDiff.b());
    if (IsParentRelative(result.l())) { result.Setl( TInt16( result.l() + pxdiff ) ); }
    if (IsParentRelative(result.t())) { result.Sett( TInt16( result.t() + pydiff ) ); }
    if (IsParentRelative(result.r())) { result.Setr( TInt16( result.r() + pxdiff ) ); }
    if (IsParentRelative(result.b())) { result.Setb( TInt16( result.b() + pydiff ) ); }
    
    return result;
}

EXPORT_C TAknWindowComponentLayout TAknWindowComponentLayout::SiblingAsChild(
        TAknWindowComponentLayout aLine1, 
        TAknWindowComponentLayout aLine2)
{
    aLine1 = RemoveLayoutEmptys(aLine1);
    aLine2 = RemoveLayoutEmptys(aLine2);
	TAknWindowComponentLayout result;
    // Consider aLine2 as being wholly inside aLine1; Relative positions should all then be +ve
    // From this you can see, somewhat counter-intuitively, that the orderings of the 
    // subtractions is line2 - line1.
	result.Setl(MinusInt(aLine2.l(),aLine1.l()));  
	result.Sett(MinusInt(aLine2.t(),aLine1.t()));
	result.SetW(ELayoutEmpty);
	result.SetH(ELayoutEmpty);
	result.Setb(MinusInt(aLine2.b(),aLine1.b()));
	result.Setr(MinusInt(aLine2.r(),aLine1.r()));
	result.SetC(aLine1.C());
 
    return result;
}

EXPORT_C void TAknWindowComponentLayout::SetZeroSized()
    {
    // Position is set to top left; size is 0,0
    Setl(0);
    Sett(0);
    Setr(ELayoutP);
    Setb(ELayoutP);
    SetW(0);
    SetH(0);
	SetC(ELayoutEmpty);
    }

// aValue is value 0..8:
//
//   0    1    2
//   3    4    5
//   6    7    8
//

EXPORT_C TAknWindowComponentLayout TAknWindowComponentLayout::Split(TAknWindowComponentLayout aLine, TInt aValue)
	{
	__ASSERT_DEBUG(aValue >=0 && aValue <=8, Panic(EParameterOutOfRange));
	TAknWindowComponentLayout result = aLine;

	if (aLine.il == ELayoutEmpty) 
	    { 
	    aLine.il = TInt16(ELayoutP - result.ir - result.iW);
	    }
	if (aLine.ir == ELayoutEmpty) 
	    {
	    aLine.ir = TInt16(ELayoutP - result.il - result.iW);
	    }
	if (aLine.iW == ELayoutEmpty)
	    {
	    aLine.iW = TInt16(ELayoutP - result.ir - result.il);
	    }
	if (aLine.it == ELayoutEmpty)
	    {
	    aLine.it = TInt16(ELayoutP - result.ib - result.iH);
	    }
	if (aLine.ib == ELayoutEmpty)
	    {
	    aLine.ib = TInt16(ELayoutP - result.it - result.iH);
	    }
	if (aLine.iH == ELayoutEmpty) 
	    {
	    aLine.iH = TInt16(ELayoutP - result.it - result.ib);
	    }
	    

	if (aValue == 0 || aValue == 1 || aValue == 2)
		{
		result.it = 0;
		result.ib = ELayoutEmpty;
		result.iH = aLine.it;
		}
	if (aValue == 6 || aValue == 7 || aValue == 8)
		{
		result.it = ELayoutEmpty;
		result.ib = 0;
		result.iH = aLine.ib;
		}
	if (aValue == 0 || aValue == 3 || aValue == 6)
		{
		result.il = 0;
		result.ir = ELayoutEmpty;
		result.iW = aLine.il;
		}
	if (aValue == 2 || aValue == 5 || aValue == 8)
		{
		result.il = ELayoutEmpty;
		result.ir = 0;
		result.iW = aLine.ir;
		}	
	return result;
	}

EXPORT_C TAknWindowComponentLayout TAknWindowComponentLayout::MultiLineGrid(TAknWindowComponentLayout aFirst, TInt aColumnIndex, TInt aRowIndex, TInt aGapBetweenColumns, TInt aGapBetweenRows)
	{
	TAknWindowComponentLayout layout = MultiLineX(aFirst, aColumnIndex, aGapBetweenColumns);
	TAknWindowComponentLayout layout2 = MultiLineY(layout, aRowIndex, aGapBetweenRows);
	return layout2;
	}


EXPORT_C TAknWindowComponentLayout TAknWindowComponentLayout::MultiLineY(TAknWindowComponentLayout aFirst, TInt aItem, TInt aGapBetweenItems)
	{
	TAknWindowComponentLayout first = RemoveLayoutEmptys(aFirst);

	TAknWindowComponentLayout layout;
    layout.il = first.il;
	layout.it = TInt16(first.it + aItem * (first.iH + aGapBetweenItems));
	layout.ib = ELayoutEmpty;
	layout.ir = ELayoutEmpty;
	layout.iW = first.iW;
	layout.iH = first.iH;
	return layout;
	}

EXPORT_C TAknWindowComponentLayout TAknWindowComponentLayout::MultiLineX(TAknWindowComponentLayout aFirst, TInt aItem, TInt aGapBetweenColumns)
	{
    TAknWindowComponentLayout first = RemoveLayoutEmptys(aFirst);

	TAknWindowComponentLayout layout;
    layout.il = TInt16(first.il + aItem * (first.iW + aGapBetweenColumns));
	layout.it = first.it;
	layout.ib = ELayoutEmpty;
	layout.ir = ELayoutEmpty;
	layout.iW = first.iW;
	layout.iH = first.iH;
	return layout;
	}


//
// class TAknTextComponentLayout
//

EXPORT_C TAknTextComponentLayout::TAknTextComponentLayout()
	:
	iC(ELayoutEmpty),
	il(0),
	it(0),
	ir(0),
	ib(0),
	iW(ELayoutEmpty),
	iH(ELayoutEmpty),
	iJ(0),
	iFont(0)
	{

	}

EXPORT_C TAknTextLineLayout TAknTextComponentLayout::LayoutLine() const
	{
	TAknTextLineLayout line;
	line.iC = iC;
	line.il = il;
    // there is no top value
	line.ir = ir;
    if(ib == ELayoutEmpty)
        {
        line.iB = TInt16(ELayoutP - it - iH);
        }
    else
        {
	    line.iB = ib;
        }
	line.iW = iW;
    // there is no height value
	line.iJ = iJ;
	line.iFont = iFont;
	
	line.iBaselineSkip = 0;
	line.iNumberOfLinesShown = 1;
	return line;
	}

EXPORT_C TAknMultiLineTextLayout TAknTextComponentLayout::Multiline(const RArray<TAknTextComponentLayout> &aLayouts)
{
	__ASSERT_ALWAYS(aLayouts.Count() >= 1, Panic(EParameterOutOfRange));
	TAknTextComponentLayout layout0 = aLayouts[0];
    TAknTextComponentLayout layout0NoEmptys = RemoveLayoutEmptys(layout0);	
	TAknTextLineLayout layout = layout0NoEmptys.LayoutLine();
	
    
	TAknMultiLineTextLayout multiline;
	multiline.iC = layout.iC;
	multiline.il = layout.il;
	multiline.ir = layout.ir;
	multiline.iB = layout.iB;
	multiline.iW = layout.iW;
	multiline.iJ = layout.iJ;
	multiline.iFont = layout.iFont;

	if (aLayouts.Count() >= 2)
		{
		TAknTextComponentLayout layout1 = aLayouts[1];
        TAknTextComponentLayout layout1NoEmptys = RemoveLayoutEmptys(layout1);	
		multiline.iBaselineSkip = layout0NoEmptys.ib - layout1NoEmptys.ib;
		multiline.iNumberOfLinesShown = aLayouts.Count();
		}
	else
		{
		multiline.iBaselineSkip = 0;
		multiline.iNumberOfLinesShown = 1;
		}
	return multiline;
}

EXPORT_C TAknTextLineLayout TAknTextComponentLayout::LayoutLineNoEmptys() const
	{
	TAknTextLineLayout line;
	line.iC = iC;
	line.il = (il == ELayoutEmpty) ? TInt16(ELayoutP - iW - ir) : il;
        // there is no top value
	line.ir = (ir == ELayoutEmpty) ? TInt16(ELayoutP - iW - il) : ir;
	line.iB = (ib == ELayoutEmpty) ? TInt16(ELayoutP - iH - it) : ib;
	line.iW = (iW == ELayoutEmpty) ? TInt16(ELayoutP - il - ir) : iW;
	// there is no height value
	line.iJ = iJ;
	line.iFont = iFont;
	line.iBaselineSkip = 0;
	line.iNumberOfLinesShown = 1;
	return line;
	}

EXPORT_C TAknLayoutScalableComponentType TAknTextComponentLayout::LayoutComponentType() const
	{
	TAknLayoutScalableComponentType type = (TAknLayoutScalableComponentType)iType;
	return type;
	}

EXPORT_C TInt16 TAknTextComponentLayout::C() const
	{
	return iC;
	}

EXPORT_C TInt16 TAknTextComponentLayout::l() const
	{
	return il;
	}

EXPORT_C TInt16 TAknTextComponentLayout::t() const
	{
	return it;
	}

EXPORT_C TInt16 TAknTextComponentLayout::r() const
	{
	return ir;
	}

EXPORT_C TInt16 TAknTextComponentLayout::b() const
	{
	return ib;
	}

EXPORT_C TInt16 TAknTextComponentLayout::W() const
	{
	return iW;
	}

EXPORT_C TInt16 TAknTextComponentLayout::H() const
	{
	return iH;
	}

EXPORT_C TInt16 TAknTextComponentLayout::J() const
	{
	return iJ;
	}

EXPORT_C TInt32 TAknTextComponentLayout::Font() const
	{
	return iFont;
	}

EXPORT_C void TAknTextComponentLayout::SetC(TInt16 aC)
	{
	iC = aC;
	}

EXPORT_C void TAknTextComponentLayout::Setl(TInt16 al)
	{
	il = al;
	}

EXPORT_C void TAknTextComponentLayout::Sett(TInt16 at)
	{
	it = at;
	}

EXPORT_C void TAknTextComponentLayout::Setr(TInt16 ar)
	{
	ir = ar;
	}

EXPORT_C void TAknTextComponentLayout::Setb(TInt16 ab)
	{
	ib = ab;
	}

EXPORT_C void TAknTextComponentLayout::SetW(TInt16 aW)
	{
	iW = aW;
	}

EXPORT_C void TAknTextComponentLayout::SetH(TInt16 aH)
	{
	iH = aH;
	}

EXPORT_C void TAknTextComponentLayout::SetJ(TInt16 aJ)
	{
	iJ = aJ;
	}

EXPORT_C void TAknTextComponentLayout::SetFont(TInt32 aFont)
	{
	iFont = aFont;
	}


//
// class AknLayoutScalableDecodeSupport
//

TInt32 AknLayoutScalableDecodeSupport::DecodeBytes(const TUint8*& aPtr)
    {
    TInt32 result = 0;
    TUint16* pResult = (TUint16*)(&result); // assumes little endian, low word will get filled first
    DecodeBytes(aPtr, pResult);
    return result;
    };

// ------------------------------------------------------------------------------------------------ 
// This routine is slightly inefficient, as the main decode routine increments both pointers.
// However, this one is only called for ParamLimits, so there are in general less values 
// to decode, and also SkipBytes is called more often.
// ------------------------------------------------------------------------------------------------
TInt32 AknLayoutScalableDecodeSupport::SumBytes(const TUint8*& aPtr, TInt aNum)
    {
    TInt32 total = 0;
    TInt32 result = 0;
    for ( ; aNum ; --aNum)
        {
        TUint16* pResult = (TUint16*)(&result); // assumes little endian, low word will get filled first
        DecodeBytes(aPtr, pResult);
        total  += result;
        }
    return total;
    }

void AknLayoutScalableDecodeSupport::DecodeBytes(const TUint8*& aPtr, TUint16*& aDecodedPtr)
	{
	if(!aDecodedPtr)
	    return;
	TUint8 ch = *aPtr++;
	switch (ch)
		{
		case KByteWord:
			{
			TUint16 high = *aPtr++;
			TUint16 low = *aPtr++;
			*aDecodedPtr++ = TUint16((high<<8) | low);
			break;
			}
		case KByteEmpty:
		    {
			*aDecodedPtr++ = TUint16(ELayoutEmpty);
			break;
		    }
		case KByteP1:
			{
			TInt8 offset = *aPtr++;
			*aDecodedPtr++ = TUint16(p+offset);
			break;
			}
		case KByteP2:
			{
			TInt16 high = *aPtr++;
			TUint16 low = *aPtr++;
			*aDecodedPtr++ = TUint16(p+((high<<8) | low));
			break;
			}
		case KByteLong:
			{
			TUint16 maskFF000000 = *aPtr++;
			TUint16 mask00FF0000 = *aPtr++;
			TUint16 mask0000FF00 = *aPtr++;
			TUint16 mask000000FF = *aPtr++;
			// assume little endian, so start with the low word
			*aDecodedPtr++ = TUint16((mask0000FF00<<8) | mask000000FF);
			*aDecodedPtr++ = TUint16((maskFF000000<<8) | mask00FF0000);
			break;
			}
		default:
			*aDecodedPtr++ = ch;
		}
	}

void AknLayoutScalableDecodeSupport::SkipBytes(const TUint8*& aPtr, TInt aNum)
	{
	for ( ; aNum ; --aNum)
		{
		TUint8 ch = *aPtr++;
		switch (ch)
			{
			case KByteWord:
				{
				aPtr+=2;
				break;
				}
			case KByteP1:
				{
				++aPtr;
				break;
				}
			case KByteP2:
				{
				aPtr+=2;
				break;
				}
			case KByteLong:
				{
				aPtr+=4;
				break;
				}
			default:
				break;
			}
		}
	}


const TUint8* AknLayoutScalableDecodeSupport::DecodeTable(const SCompDataImplData* aImplData, TInt aLineIndex)
	{
	const TUint8* data = DataPtr(aImplData);
	TUint16 numElements = DecodeBytes(data);
	__ASSERT_ALWAYS(aLineIndex < numElements, Panic(EIllegalLineIndex));
	const TUint8* tableOffsetData = data+(aLineIndex*2);
	TUint16 high = *tableOffsetData++;
	TUint16 low = *tableOffsetData++;
	TUint16 tableOffset = TUint16 ((high<<8) | low);
	return aImplData->iByteCodedData + tableOffset;
	}


const TUint8* AknLayoutScalableDecodeSupport::DataPtr(const SCompDataImplData* aImplData)
	{
	return aImplData->iByteCodedData + aImplData->iDataLookup[CdlEngine::LastApiId()];
	}

const TUint8* AknLayoutScalableDecodeSupport::DataPtr(const SCompDataImplData* aImplData, TInt aComponentId)
	{
	return aImplData->iByteCodedData + aImplData->iDataLookup[aComponentId];
	}

void AknLayoutScalableDecodeSupport::DecodeTypeId(TInt16& aType, TBool& aHasHeaderBlock, const TUint8*& aData)
	{
	TUint16 typeBitfield = *aData++;
	aHasHeaderBlock = typeBitfield & 1;
	aType = typeBitfield >> 1;
	}

void AknLayoutScalableDecodeSupport::DecodeSimple(TUint16* aLine, const TUint8* aData, TInt aNumCells)
	{
	TInt16 type;
	TBool hasHeaderBlock;
	DecodeTypeId(type, hasHeaderBlock, aData);
	DecodeSimpleCells(aLine, aData, type, aNumCells);
	}
	
void AknLayoutScalableDecodeSupport::DecodeSimpleCells(TUint16* aLine, const TUint8* aData, TUint16 aType, TInt aNumCells)
	{
	// header block data is not used, and there are five 16bit values to skip
	//     iFirstChildID;iNextSiblingID;iParentID;iParentVariety;iAttributeSetID;
	aLine+=5;
	*aLine++ = aType;
	
	// decode a non-parameterised line by decoding the bytes for each cell
	for (TInt ii=0; ii<aNumCells; ii++)
		DecodeBytes(aData, aLine);
	}


void AknLayoutScalableDecodeSupport::DecodeHeaderBlock(
    TInt*& aLimits, 
    TInt& aNumVarieties,
    TInt& aNumMultiValues, 
    const TUint8*& aParamsPtr, 
    const TUint8*& aData, 
    TInt aVariety)
    {
    aNumVarieties = *aData++;
    
    *aLimits++ = 0;
    *aLimits++ = aNumVarieties - 1;
     	
    __ASSERT_ALWAYS(0 <= aVariety && aVariety < aNumVarieties, Panic(EOffsetOutOfRange));

    aNumMultiValues = *aData++;
    aParamsPtr = aData;

    // decode params to find data ptr
    TInt numBytes = aNumMultiValues * 2;
    if (numBytes)
    	SkipBytes(aData, numBytes);
    }

void AknLayoutScalableDecodeSupport::DecodeParamLimitParam(
    TInt*& aLimits, 
    TInt& aNumMultiValues, 
    const TUint8*& aParamsPtr, 
    const TUint8*& aData, 
    TInt aVariety,
    TInt aCellIndex,
    TInt& aVarietyOffset)
    {
    TBool optimized(EFalse);
    TInt max;
    TInt param;
    TUint32 limit;
    TUint32* pLimit = &limit;

    // always exactly one value for each variety, therefore:
    // - multi is always 0
    // - the variety offset for decoding this cell is always the variety index
    DecodeParam(aCellIndex, optimized, max, param, aParamsPtr, aNumMultiValues, 0, aVariety, aVariety);
    
    // now calculate the variety offset for decoding real cells
    DecodeParamLimitsCell(aVariety, max, param, aData, pLimit, aVarietyOffset);

    *aLimits++ = 0; // first values currently not implemented
    *aLimits++ = limit - 1; // currently stored as "number of values", but we need to return "last"
    }

// {numCols; numRows; iC; il; it; ir; ib; iW; iH; iJ; iFont};
const TInt isCol[KNumCells] = {0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0};

void AknLayoutScalableDecodeSupport::DecodeParams(TUint16* aLine, const TUint8* aData, TInt aNumCells, TInt aVariety, TInt aColumn, TInt aRow)
    {
    TInt16 type;
    TBool hasHeaderBlock;
    DecodeTypeId(type, hasHeaderBlock, aData);
    if(hasHeaderBlock)
        DecodeParamCells(aLine, aData, type, aNumCells + KNumCellsNotSimple, aVariety, aColumn, aRow);
    else
        DecodeSimpleCells(aLine, aData, type, aNumCells);
    }
    
void AknLayoutScalableDecodeSupport::DecodeParamCells(TUint16* aLine, const TUint8* aData, TUint16 aType, TInt aNumCells, TInt aVariety, TInt aColumn, TInt aRow)
    {
    // header block data is not used, and there are five 16bit values to skip
    //     iFirstChildID;iNextSiblingID;iParentID;iParentVariety;iAttributeSetID;
    aLine+=5;
    *aLine++ = aType;

    TAknLayoutScalableParameterLimitsImp limits;
    TInt* pLimits = (TInt*)&limits;
    TInt numVarieties = 0;
    TInt numMultiValues = 0;
    const TUint8* paramsPtr = 0;
    DecodeHeaderBlock(pLimits, numVarieties, numMultiValues, paramsPtr, aData, aVariety);

    // decode the param limit params, always cols then rows
    TFixedArray<TInt, KNumCellsNotSimple> varietyOffsets;
    TInt ii=0;
    for(; ii<KNumCellsNotSimple; ii++)
        {
        DecodeParamLimitParam(pLimits, numMultiValues, paramsPtr, aData, aVariety, ii, varietyOffsets[ii]);
        }

    TInt numCols = limits.iLastColumn + 1;
    TInt numRows = limits.iLastRow + 1;

    __ASSERT_ALWAYS(0 <= aColumn && aColumn <= numCols, Panic(EOffsetOutOfRange));
    __ASSERT_ALWAYS(0 <= aRow && aRow <= numRows, Panic(EOffsetOutOfRange));

    // decode each cell
    TBool optimized(EFalse);
    TInt max;
    TInt param;
    // continuing after numRows
    for (; ii<aNumCells; ii++)
	{
	// calculate the requested and maximum parameter value for this cell
	TInt multi = isCol[ii] ? aColumn : aRow;
	TInt colRow = isCol[ii] ? 0 : 1;
	DecodeParam(ii, optimized, max, param, paramsPtr, numMultiValues, multi, aVariety, varietyOffsets[colRow]);
	DecodeCell(max, param, aData, aLine);
	}
    }

void AknLayoutScalableDecodeSupport::DecodeParam(TInt aCell, TBool& aOptimizedVarieties, TInt& aMax, TInt& aParam, const TUint8* aParamsPtr, TInt aNumParams, TInt aMulti, TInt aVariety, TInt aVarietyOffset)
	{
	// Parameter coding is sequence of pairs of bytes, one for each parameter.
	// The first byte is a bit field indicating which cells the parameter affects.
	// The second is the number of items in the cell.
	TInt ii=0;
	// This is the bit in the bit-fields we are looking for
	TUint bit = 1<<aCell;

	// scan through the parameters and break if one has the relevant bit set for this cell
	for (; ii<aNumParams; ii++)
		{
		TUint16 bits = DecodeBytes(aParamsPtr); // increments pointer
		if (bits & bit)
			break;
		DecodeBytes(aParamsPtr); // consume the unwanted max value
		}

	if (ii == aNumParams)
		{
		// No parameter was found for this cell.
		aMax = 1;
		aParam = 0;
		
		// there is only one value stored, so whatever was requested,
		// that's the value we'll return, so effectively there's no difference
		// whether it was optimized or not.
		aOptimizedVarieties = false;
		}
	else
		{
		// A parameter was found for the cell, extract the number of items in the cell
		// and the correct parameter index value.
		TInt bitfield = DecodeBytes(aParamsPtr); // increments pointer

	        const static TUint optimizedVarietiesMask = 0x0001;
	        aOptimizedVarieties = (bitfield & optimizedVarietiesMask) != 0;

	        const static TUint optimizedCalcsMask = 0x0002;
	        TBool optimizedCalcs = (bitfield & optimizedCalcsMask) != 0;
		
		aMax = bitfield >> 2;
		
		// the variety offset must be re-calculated in the case of compressed calcs
		TInt actualVarietyOffset = optimizedCalcs ? aVariety : aVarietyOffset;

                // if optimized, we can ignore the variety as they're all the same
                // otherwise, just start counting from the variety offset
                aParam = aOptimizedVarieties ? 0 : actualVarietyOffset;

                // if optimized, we can ingore the index, as they're all the same
                aParam += optimizedCalcs ? 0 : aMulti;
		}
	}

void AknLayoutScalableDecodeSupport::DecodeCell(TInt& aMax, TInt& aParam, const TUint8*& aDataPtr, TUint16*& aDecodedPtr)
    {
    __ASSERT_ALWAYS(0 <= aParam && aParam < aMax, Panic(EOffsetOutOfRange));

    if (aParam)
        {
        SkipBytes(aDataPtr, aParam);
        }
    DecodeBytes(aDataPtr, aDecodedPtr); // increments ptr
    TInt post = aMax - (aParam+1);
    if (post)
        {
        SkipBytes(aDataPtr, post);
        }
    }

void AknLayoutScalableDecodeSupport::DecodeParamLimitsCell(TInt aVariety, TInt aMax, TInt& aParam, const TUint8*& aDataPtr, TUint32*& aDecodedPtr, TInt& aVarietyOffset)
    {
    __ASSERT_ALWAYS(0 <= aParam && aParam < aMax, Panic(EOffsetOutOfRange));

    // In the case of only one value being stored, it might be optimized.
    // Either way, the variety offset will be 0.
    aVarietyOffset = 0;

    // However, if more than one value is stored, need to
    // accumulate the previous values
    if (aParam)
        {
        // must be not optimized
        aVarietyOffset = SumBytes(aDataPtr, aParam);
        }

    TInt32 value = 0;
    TUint16* pValue = (TUint16*)(&value); // assumes little endian, low word will get filled first
    DecodeBytes(aDataPtr, pValue); // increments ptr

    // Record the position of the start of the variety that we're looking for (in the actual cells).
    // if this cell is optimized or only has one value, we simulate the location of the required variety
    // and if there is only one variety, then aVariety will always be 0.
    if(aMax == 1) 
        {
        aVarietyOffset =  aVariety * value;
        }
    
    // record the actual value
    *aDecodedPtr++ = value;

    // we don't need to know the total for all the varieties, so we can just skip
    // the last few, without accumulating
    TInt post = aMax - (aParam+1);
    if (post)
        {
        SkipBytes(aDataPtr, post);
        }
    }

void AknLayoutScalableDecodeSupport::DecodeParamLimits(TInt* aLimits, const TUint8* aData, TInt aVariety)
    {
    TInt16 type;
    TBool hasHeaderBlock;
    DecodeTypeId(type, hasHeaderBlock, aData);
    // *aLine++ = aType;
    
    if(hasHeaderBlock)
        {
        TInt numVarieties = 0;
        TInt numMultiValues = 0;
        const TUint8* paramsPtr = 0;
        DecodeHeaderBlock(aLimits, numVarieties, numMultiValues, paramsPtr, aData, aVariety);
    	
        // decode the param limits, always cols then rows
        TInt ii = 0;
        for (ii=0; ii<2; ii++)
            {
            TInt unusedVarietyOffset;
            DecodeParamLimitParam(aLimits, numMultiValues, paramsPtr, aData, aVariety, ii, unusedVarietyOffset);
            }
        }
    }

void AknLayoutScalableDecodeSupport::MirrorValues(TAknWindowComponentLayoutImp& aLine)
	{
	// data is currently mirrored in separate layout instances
	// but if the instance is mirrored, it will be stored with l and r swapped, so unswap them
	if(Layout_Meta_Data::IsMirrored())
		{
		TInt16 temp = aLine.il;
		aLine.il = aLine.ir;
		aLine.ir = temp;
		}
	}

void AknLayoutScalableDecodeSupport::MirrorValues(TAknTextComponentLayoutImp& aLine)
	{
	// data is currently mirrored in separate layout instances
	// but if the instance is mirrored, it will be stored with l and r swapped, 
	// and justification reversed, so unswap them
	if(Layout_Meta_Data::IsMirrored())
		{
		TInt16 temp = aLine.il;
		aLine.il = aLine.ir;
		aLine.ir = temp;
		if(aLine.iJ == ELayoutAlignLeft) 
			aLine.iJ = ELayoutAlignRight;
		else if(aLine.iJ == ELayoutAlignRight) 
			aLine.iJ = ELayoutAlignLeft;
		}
	}

// The following functions could be factorised, but that would extend the call depth
// of an already tricky calculation, with expensive function calls.
// So these functions are individually coded - they're short anyway.
EXPORT_C void AknLayoutScalableDecodeSupport::WindowLine(TAknWindowComponentLayoutImp& aLine, const SCompDataImplData* aImplData)
	{
	DecodeSimple((TUint16*)&aLine, DataPtr(aImplData), KNumCellsWindow);
	MirrorValues(aLine);
	}

EXPORT_C void AknLayoutScalableDecodeSupport::WindowLine(TAknWindowComponentLayoutImp& aLine, const SCompDataImplData* aImplData, TInt aVariety, TInt aColumn, TInt aRow)
	{
	DecodeParams((TUint16*)&aLine, DataPtr(aImplData), KNumCellsWindow, aVariety, aColumn, aRow);
	MirrorValues(aLine);
	}

EXPORT_C void AknLayoutScalableDecodeSupport::TextLine(TAknTextComponentLayoutImp& aLine, const SCompDataImplData* aImplData)
	{
	DecodeSimple((TUint16*)&aLine, DataPtr(aImplData), KNumCellsText);
	MirrorValues(aLine);
	}

EXPORT_C void AknLayoutScalableDecodeSupport::TextLine(TAknTextComponentLayoutImp& aLine, const SCompDataImplData* aImplData, TInt aVariety, TInt aColumn, TInt aRow)
	{
	DecodeParams((TUint16*)&aLine, DataPtr(aImplData), KNumCellsText, aVariety, aColumn, aRow);
	MirrorValues(aLine);
	}

EXPORT_C void AknLayoutScalableDecodeSupport::WindowTable(TAknWindowComponentLayoutImp& aLine, const SCompDataImplData* aImplData, TInt aLineIndex)
	{
	const TUint8* data = DecodeTable(aImplData, aLineIndex);
	DecodeSimple((TUint16*)&aLine, data, KNumCellsWindow);
	MirrorValues(aLine);
	}

EXPORT_C void AknLayoutScalableDecodeSupport::WindowTable(TAknWindowComponentLayoutImp& aLine, const SCompDataImplData* aImplData, TInt aLineIndex, TInt aVariety, TInt aColumn, TInt aRow)
	{
	const TUint8* data = DecodeTable(aImplData, aLineIndex);
	DecodeParams((TUint16*)&aLine, data, KNumCellsWindow, aVariety, aColumn, aRow);
	MirrorValues(aLine);
	}

EXPORT_C void AknLayoutScalableDecodeSupport::TextTable(TAknTextComponentLayoutImp& aLine, const SCompDataImplData* aImplData, TInt aLineIndex)
	{
	const TUint8* data = DecodeTable(aImplData, aLineIndex);
	DecodeSimple((TUint16*)&aLine, data, KNumCellsText);
	MirrorValues(aLine);
	}

EXPORT_C void AknLayoutScalableDecodeSupport::TextTable(TAknTextComponentLayoutImp& aLine, const SCompDataImplData* aImplData, TInt aLineIndex, TInt aVariety, TInt aColumn, TInt aRow)
	{
	const TUint8* data = DecodeTable(aImplData, aLineIndex);
	DecodeParams((TUint16*)&aLine, data, KNumCellsText, aVariety, aColumn, aRow);
	MirrorValues(aLine);
	}

EXPORT_C TAknLayoutScalableTableLimits AknLayoutScalableDecodeSupport::TableLimits(const TUint16* aDataLookup)
	{
	TUint8* encoded = (TUint8*)(aDataLookup + CdlEngine::LastApiId());
	TAknLayoutScalableTableLimits limits(encoded[1], encoded[0]);
	return limits;
	}


EXPORT_C void AknLayoutScalableDecodeSupport::ParameterLimits(TAknLayoutScalableParameterLimitsImp& aLimits, const SCompDataImplData* aImplData, TInt aVariety)
    {
    DecodeParamLimits((TInt*)&aLimits, DataPtr(aImplData), aVariety);
    }

EXPORT_C void AknLayoutScalableDecodeSupport::ParameterLimitsTable(TAknLayoutScalableParameterLimitsImp& aLimits, const SCompDataImplData* aImplData, TInt aLineIndex, TInt aVariety)
    {
    const TUint8* data = DecodeTable(aImplData, aLineIndex);
    DecodeParamLimits((TInt*)&aLimits, data, aVariety);
    }


EXPORT_C void AknLayoutScalableDecodeSupport::GetComponentTypeById(TAknLayoutScalableComponentType& aType, const SCompDataImplData* aImplData, TInt aComponentId)
    {
    TInt16 type(0);
    TBool hasHeaderBlock;
    const TUint8* dataPtr = DataPtr(aImplData, aComponentId);
    DecodeTypeId(type, hasHeaderBlock, dataPtr);
    aType = (TAknLayoutScalableComponentType)type;
    }

EXPORT_C void AknLayoutScalableDecodeSupport::GetParamLimitsById(TAknLayoutScalableParameterLimitsImp& aLimits, const SCompDataImplData* aImplData, TInt aComponentId, TInt aVariety)
    {
    const TUint8* dataPtr = DataPtr(aImplData, aComponentId);
    DecodeParamLimits((TInt*)&aLimits, dataPtr, aVariety);
    }

EXPORT_C void AknLayoutScalableDecodeSupport::GetWindowComponentById(TAknWindowComponentLayoutImp & aLine, const SCompDataImplData* aImplData, TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow)
    {
    const TUint8* dataPtr = DataPtr(aImplData, aComponentId);

    TInt16 type(0);
    TBool hasHeaderBlock;
    DecodeTypeId(type, hasHeaderBlock, dataPtr);

    TAknLayoutScalableComponentType compType((TAknLayoutScalableComponentType)type);
    TInt numCells = (compType == EAknLayoutScalableComponentTypeText) ? KNumCellsText : KNumCellsWindow;

    if(hasHeaderBlock)
	DecodeParamCells((TUint16*)&aLine, dataPtr, type, numCells + KNumCellsNotSimple, aVariety, aCol, aRow);
    else
        DecodeSimpleCells((TUint16*)&aLine, dataPtr, type, numCells);
    
    MirrorValues(aLine);
    }

EXPORT_C void AknLayoutScalableDecodeSupport::GetTextComponentById(TAknTextComponentLayoutImp & aLine, const SCompDataImplData* aImplData, TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow)
    {
    const TUint8* dataPtr = DataPtr(aImplData, aComponentId);

    TInt16 type(0);
    TBool hasHeaderBlock;
    DecodeTypeId(type, hasHeaderBlock, dataPtr);

    __ASSERT_DEBUG(type == EAknLayoutScalableComponentTypeText, Panic(EWrongType));

    if(hasHeaderBlock)
	DecodeParamCells((TUint16*)&aLine, dataPtr, type, KNumCellsText + KNumCellsNotSimple, aVariety, aCol, aRow);
    else
        DecodeSimpleCells((TUint16*)&aLine, dataPtr, type, KNumCellsText);
    
    MirrorValues(aLine);
    }


// 
// struct implementations
// 

EXPORT_C TAknTextComponentLayout TAknTextComponentLayout::MultiLineY(TAknTextComponentLayout aFirst, TInt aItem, TInt aGapBetweenItems)
    {
    TAknTextComponentLayout first = TAknTextComponentLayout::RemoveLayoutEmptys(aFirst);
    
    TAknTextComponentLayout layout;
    layout.SetC(first.C());
    layout.Setl(first.l());
    layout.Sett(TInt16(first.t() + aItem * (first.H() + aGapBetweenItems)));
    layout.Setb(ELayoutEmpty);
    layout.Setr(ELayoutEmpty);
    layout.SetW(first.W());
    layout.SetH(first.H());
    layout.SetJ(first.J());
    layout.SetFont(first.Font());
    return layout;
	}
EXPORT_C TAknWindowComponentLayout TAknWindowComponentLayout::operator=( TAknWindowLineLayout aLine )
    {
    iC = aLine.iC;
    il = aLine.il;
    it = aLine.it;
    ir = aLine.ir;
    ib = aLine.ib;
    iW = aLine.iW;
    iH = aLine.iH;
    return *this;
    }

EXPORT_C TAknWindowComponentLayout::TAknWindowComponentLayout( TAknWindowLineLayout aLine )
    {
    iC = aLine.iC;
    il = aLine.il;
    it = aLine.it;
    ir = aLine.ir;
    ib = aLine.ib;
    iW = aLine.iW;
    iH = aLine.iH;
    }
EXPORT_C TAknTextComponentLayout::TAknTextComponentLayout( TAknTextLineLayout aLine )
    {
    iC = aLine.iC;
    il = aLine.il;
    ir = aLine.ir;
    ib = aLine.iB;
    iW = aLine.iW;
    iJ = aLine.iJ;
    iFont = aLine.iFont;
    }


EXPORT_C TAknTextComponentLayout TAknTextComponentLayout::operator=( TAknTextLineLayout aLine )
    {
    iC = aLine.iC;
    il = aLine.il;
    ir = aLine.ir;
    ib = aLine.iB;
    iW = aLine.iW;
    iJ = aLine.iJ;
    iFont = aLine.iFont;
    return *this;
    }
