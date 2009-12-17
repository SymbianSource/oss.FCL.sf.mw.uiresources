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


#ifndef AKNLAYOUT2SCALABLEDEF_H
#define AKNLAYOUT2SCALABLEDEF_H

#include <e32std.h>
#include <avkon.hrh>

#include "AknLayout2Def.h"

class TAknLayoutRect;

/* 
 * this is in global namespace, as it needs to be used by multiple different classes
 */
enum TAknLayoutScalableComponentType 
	{ 
	EAknLayoutScalableComponentTypeUnknown, 
	EAknLayoutScalableComponentTypeScreen, 
	EAknLayoutScalableComponentTypeContainer, 
	EAknLayoutScalableComponentTypePane, 
	EAknLayoutScalableComponentTypeGraphic, 
	EAknLayoutScalableComponentTypeText
	};

/**
* Defines the valid range of a table lookup index.
* A table index is valid if it satisfies iFirstIndex <= index <= iLastIndex
*/
class TAknLayoutScalableTableLimits
	{
public:
	IMPORT_C TAknLayoutScalableTableLimits();
	IMPORT_C TAknLayoutScalableTableLimits(TInt aFirstIndex, TInt aLastIndex);
	IMPORT_C TAknLayoutTableLimits LayoutLimits() const;

	IMPORT_C TInt FirstIndex() const;
	IMPORT_C TInt LastIndex() const;
	IMPORT_C void SetFirstIndex(TInt aIndex);
	IMPORT_C void SetLastIndex(TInt aIndex);
private:
	TInt iFirstIndex;
	TInt iLastIndex;
	};

/**
* Defines the valid maximum value of the parameters that can be passed into a scalable layout API
* An index is valid if it satisfies index < iMaxVarietys etc
*/
class TAknLayoutScalableParameterLimits
	{
public:
	IMPORT_C TAknLayoutScalableParameterLimits();
	IMPORT_C TAknLayoutScalableParameterLimits(
		TInt aFirstVariety, TInt aLastVariety, 
		TInt aFirstColumn, TInt aLastColumn, 
		TInt aFirstRow, TInt aLastRow);

	IMPORT_C TInt FirstVariety() const;
	IMPORT_C TInt LastVariety() const;
	IMPORT_C TInt FirstColumn() const;
	IMPORT_C TInt LastColumn() const;
	IMPORT_C TInt FirstRow() const;
	IMPORT_C TInt LastRow() const;
	IMPORT_C void SetFirstVariety(TInt FirstVariety);
	IMPORT_C void SetLastVariety(TInt LastVariety);
	IMPORT_C void SetFirstColumn(TInt aFirstColumn);
	IMPORT_C void SetLastColumn(TInt aLastColumn);
	IMPORT_C void SetFirstRow(TInt aFirstRow);
	IMPORT_C void SetLastRow(TInt aLastRow);
private:
	TInt iFirstVariety;
	TInt iLastVariety;
	TInt iFirstColumn;
	TInt iLastColumn;
	TInt iFirstRow;
	TInt iLastRow;
	};


class TAknTextComponentLayout;
struct TAknTextComponentLayoutAttrs;
class TAknTextLineLayout;
/**
* A window component structure from scalable layout.
*
* The data members of this class have the following invariants which must be preserved in any methods
* of this class.
*
*  il + iW + ir = parentRect.Width()
*  it + iH + ib = parentRect.Height()
*
* The data format of the data members are as follows: (AknLayoutUtils knows this)
*  any of il,iW,ir, it,iH,ib may be one of the following
*    1) coordinate value
*    2) ELayoutEmpty
*    3) ELayoutP - value
*/
class TAknWindowComponentLayout
	{
public:
	/**
	 * contructor
	 *
	 */
	IMPORT_C TAknWindowComponentLayout();

	/*
	 * create a layout line using the old layout API structure
	 * 
	 * @return layout line
	 */
	IMPORT_C TAknWindowLineLayout LayoutLine() const;
	
	/*
	 * create a layout line using the old layout API structure
	 * such that the values are all non-empty
	 * 
	 * @return layout line
	 */
	IMPORT_C TAknWindowLineLayout LayoutLineNoEmptys() const;
	
	/* 
	 * Return the type of the component, as specified in the layout
	 * Note that a TAknWindowComponentLayout is data layout 
	 * compatible with TAknTextComponentLayout, and the actual
	 * type can be accessed using this method before casting. 
	 * However, casting to the wrong type may cause unexpected results.
	 * 
	 * @return the type of the component
	 * 
	 */
	IMPORT_C TAknLayoutScalableComponentType LayoutComponentType() const;
	
private:
	// note that the following get and set methods do not follow coding conventions
	// this is to increase source compatibility with existing implementation
	// that directly accesses the public members of the corresponding non-scalable
	// data structures. also note that the parameter names don't follow coding conventions, 
	// this is to maintain consistency with the layout specifications.
	// also note that they are not inline so that they can be modified
	// for dynamic layout calculation without breaking BC. 
	IMPORT_C TInt16 C() const;
	IMPORT_C TInt16 l() const;
	IMPORT_C TInt16 t() const;
	IMPORT_C TInt16 r() const;
	IMPORT_C TInt16 b() const;
	IMPORT_C TInt16 W() const;
	IMPORT_C TInt16 H() const;
	IMPORT_C void SetC(TInt16 aC);
	IMPORT_C void Setl(TInt16 al);
	IMPORT_C void Sett(TInt16 at);
	IMPORT_C void Setr(TInt16 ar);
	IMPORT_C void Setb(TInt16 ab);
	IMPORT_C void SetW(TInt16 aW);
	IMPORT_C void SetH(TInt16 aH);

public:
	/* 
	 * Compose two window lines together
	 * note that this is not commutative, line2 should lie inside line1
	 *
	 * Compose puts two layout lines together in the following way:
	 *    TRect --aLine1--> TRect --aLine2--> TRect
	 *  
	 * becomes
	 *    TRect --------result--------------> TRect
     *
	 * The arrow direction points towards smaller rectangles. 
	 *
	 *  The rectangle in the middle gets hidden and is shared by aLine1 and aLine2 in such way that
	 *  aLine1's child rectangle becomes parent rectangle of aLine2. 
	 *
	 * Compose() works pretty well with AknLayoutUtils. Here's two equivalent code pieces:
	 *    1) Chain of 2 AknLayoutUtils calls
	 *          TAknLayoutRect rect;
	 *          rect.LayoutRect(parent1, AknLayoutScalable::xxxx1().LayoutLine());
	 *          TAknLayoutRect rect2;
	 *          rect2.LayoutRect(rect.Rect(), AknLayoutScalable::xxxx2().LayoutLine());
	 *          ... use rect2.Rect()....
	 *    2) Compose + one AknLayoutUtils call
	 *         TAknWindowLineLayout combined = Compose(AknLayoutScalable::xxxx1(), AknLayoutScalable::xxxx2()).LayoutLine();
	 *         TAknLayoutRect rect2;
	 *         rect2.LayoutRect(parent1, combined);
	 *         ... use rect2.Rect()...
	 *
	 *     The only differences between the two pieces of code is that the version (2)
	 *     cannot use rect.Rect() for positioning any CCoeControl's or drawable elements.
	 *     Compose() hides that rectangle completely and it is no longer accessible.
     *
	 *     Compose() works without the parent rectangle! In the version (1), the
	 *     parent rectangle must be provided at beginning. In version (2), the parent
	 *     rectangle is provided after combining two layout lines; This property of Compose() allows
	 *     us to use it in adaptation layer where parent rectangle is not always known.
     *     
	 *  Compose() is associative. Compose(x,Compose(y,z)) == Compose(Compose(x,y),z).
	 *
	 *  Mathematically, Compose() corresponds to function composition for TRect f(TRect) -type functions.
     *
	 *  Compose() implementation generates values for TAknWindowComponentLayout which are not coordinates:
	 *     1) any of l,t,r,b,W,H may become ELayoutEmpty
	 *     2) any of l,t,r,b,W,H may become ELayoutP - XX, where XX is some number.
     *   This is why the data members of TAknWindowComponentLayout (or TAknWindowLineLayout) should not be accessed.
     *   AknLayoutUtils and all related classes which access these values must handle these cases.
     *
	 *  Compose() implementation preserves some invariants of TAknWindowComponentLayout
	 *      l+W+r = p.W
	 *      t+H+b = p.H
	 * 
	 * @param aLine1 window line
	 * @param aLine2 window line
	 */
    IMPORT_C static TAknWindowComponentLayout Compose(TAknWindowComponentLayout aLine1, TAknWindowComponentLayout aLine2);

	/* 
	 * compose a window line with a text line
	 * note that this is not commutative, line2 should lie inside line1
	 *
	 * ComposeText puts two layout lines together in the following way:
	 *    TRect --aLine1--> TRect --aLine2--> Text
	 *  
	 * becomes
	 *    TRect --------result--------------> Text
	 *
	 * ComposeText() is associative. ComposeText(x,ComposeText(y,z)) = ComposeText(Compose(x,y),z).
	 *
	 * @param aLine1 window line
	 * @param aLine2 text line
	 */
    IMPORT_C static TAknTextComponentLayout ComposeText(TAknWindowComponentLayout aLine1, TAknTextComponentLayout aLine2);

	/*
	 * intersect two layout lines that share the same parent rectangle
	 *
 	 * Intersect combines two layout lines in such way that
     *   a) their parent rectangles will become the same rectangle
	 *   b) the child rectangle is intersection of the child rectangles of aLine and aLine2
	 *
     * Intersect can fail if the rectangles have no overlap. This can be detected by negative
	 * values in resulting TAknWindowComponentLayout.
	 *
	 * @param aLine
	 * @param aLine2
	 */
    IMPORT_C static TAknWindowComponentLayout Intersect(TAknWindowComponentLayout aLine, TAknWindowComponentLayout aLine2);

	/**
	 * subtract two layout lines relative to the same parent rectangle
	 *
 	 * Minus combines two layout lines in such way that
     *   a) the result is aLine with it's parent rectangle changed
	 *   b) aLine and aParentDiff's parent rectangles becomes the same; and result's parent rectangle is calculated to be aParentDiff's child rectangle.
	 *
	 * @param aLine the inner rect
	 * @param aParentDiff the difference between the parent and the inner rect
	 */
    IMPORT_C static TAknWindowComponentLayout Minus(TAknWindowComponentLayout aLine, TAknWindowComponentLayout aParentDiff);
    
    /**
     * Treat two layout lines as if one is a child of the other. 
     * The two layouts must have the same parent.
     * They must also have the same pattern of absolute, ElayoutEmptys and Parent relative
     * measurements, both vertically and horizontally.
     * 
	 * @param aSiblingTreatedAsParent
	 * @param aSiblingTreatedAsChild
     * 
     * @return a layout representing aSiblingTreated as child, relative to aSiblingTreatedAsParent 
     */
    IMPORT_C static TAknWindowComponentLayout SiblingAsChild(TAknWindowComponentLayout aSiblingTreatedAsParent, TAknWindowComponentLayout aSiblingTreatedAsChild);

    /**
    * Makes the window zero-sized, positioned in the top left corner.
    */
    IMPORT_C void SetZeroSized();
        
	/**
     * This method splits parent rectangle to one of the 9 pieces based on aLine.
	 *
	 *  aValue is one of the numbers:
	 *       0    1    2
	 *       3    4    5
	 *       6    7    8
     * This is highly related to "frames" in skins. This allows us to generate a skin frame definition
	 * from a single TAknWindowComponentLayout.
  	 */
	IMPORT_C static TAknWindowComponentLayout Split(TAknWindowComponentLayout aLine, TInt aValue);


	/**
	 * This method calculates a grid item position in based on first cell.
	 *
	 */
	IMPORT_C static TAknWindowComponentLayout MultiLineGrid(TAknWindowComponentLayout aFirst, TInt aColumnIndex, TInt aRowIndex, TInt aGapBetweenColumns, TInt aGapBetweenRows);
	/**
	 * This method calculates a grid item position in X-dimension based on first cell.
	 *
	 */
	IMPORT_C static TAknWindowComponentLayout MultiLineX(TAknWindowComponentLayout aFirst, TInt aColumnIndex, TInt aGapBetweenColumns);
	/**
     * This method calculates a list item position based on first item.
	 * This can be used to calculate either list item positions or grid cell Y-positions.
	 */
	IMPORT_C static TAknWindowComponentLayout MultiLineY(TAknWindowComponentLayout aFirst, TInt aItemIndex, TInt aGapBetweenItems);

public:
	struct TRangeTriplet;
    IMPORT_C static TAknWindowComponentLayout Anim(TAknWindowComponentLayout aLine, 
											TAknWindowComponentLayout aLine2, 
											const TRangeTriplet &aTriplet);
	IMPORT_C TAknWindowComponentLayout( TAknWindowLineLayout aLine );

    IMPORT_C TAknWindowComponentLayout operator=( TAknWindowLineLayout aLine );


public:
static void FormFieldHack(TAknWindowComponentLayout &aLayout) { aLayout.SetH(ELayoutEmpty); }
    static void ListGenPaneHack(TAknWindowComponentLayout &aLayout) { aLayout.Setl(0); aLayout.Sett(0); }
	static TAknWindowComponentLayout ListPaneHack(const TAknWindowComponentLayout &aLayout, const TAknWindowComponentLayout aListGenPane)
		{
		TAknWindowComponentLayout layout = aLayout;
		TAknWindowComponentLayout l3 = aListGenPane; // 0 = find pane on

	TAknWindowComponentLayout &aLine1 = layout;	
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

		
		layout.il = TInt16(layout.il + l3.il);
		layout.it = TInt16(layout.it + l3.it);
		layout.ib = ELayoutEmpty;
		layout.ir = ELayoutEmpty;
		return layout;
		}
		
	// this is a method to get the arrowhead scroll indicators working.
	// aDirection is the nudge button direction, 1 = up, 2 = down.
	static void ScrollIndicatorHack( const TAknWindowComponentLayout& aWidthHeightLayout,
									 TAknWindowComponentLayout& aParent,
									 TAknWindowComponentLayout& aLayout,
									 TInt aDirection)
		{
		aParent.SetW( aWidthHeightLayout.W() );
	
		aLayout.Setl( aParent.W() / 2 - aParent.W() / 39 );
		if (aDirection == 0)
			{
			aLayout.Sett( 0 );
			aLayout.SetH( ( aWidthHeightLayout.H() - aParent.t() ) / 2);
			}
		else
			{
			aLayout.Sett( ( aWidthHeightLayout.H() - aParent.t() ) / 2 );
			aLayout.SetH( ( aWidthHeightLayout.H() - aParent.t() ) / 2 );
			}
			
		aLayout.SetW( aParent.W() - 2 * aLayout.l() );
		}
							
private:
    // structural information
    TInt16 iFirstChildID;
    TInt16 iNextSiblingID;
    TInt16 iParentID;
    TInt16 iParentVariety;

    TInt16 iAttributeSetID;
    TInt16 iType;

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
    
private:
	static TAknWindowComponentLayout RemoveLayoutEmptys(TAknWindowComponentLayout aLine1);
	static TAknWindowComponentLayout ExtractWindow(TAknTextComponentLayout aText);
	static TAknTextComponentLayout CombineAttrs(TAknWindowComponentLayout aLine1, const TAknTextComponentLayoutAttrs &aAttrs);
	friend class TAknTextComponentLayout;

public:
struct TRangeTriplet
{
	TInt16 iX; // 0.0 .. 1.0, scaled by 12 bits.
	TInt16 iY; // 0.0 .. 1.0
	TInt16 iP;
};

private:
class TScaledInt
{
public:
	TScaledInt(TInt32 aValue) : iValue(aValue) { }

	friend inline TScaledInt operator*(TScaledInt aValue, TScaledInt aValue2)
	{
	return TInt16( (aValue.Value() * aValue2.Value()) >> 12 );
	}
	
	friend TScaledInt MultiplyByScaled(TInt16 aValue, TScaledInt aValue2)
	{
	return TInt32( TInt32(aValue) * TInt32(aValue2.Value()) );
    }
	TInt16 NonScaled() { return TInt16(iValue >> 12); }

	TInt32 Value() { return iValue; }

private:
  TInt32 iValue;
};
static TInt16 MultiplyValue(TInt16 aValue, TScaledInt aMultiplier, TScaledInt aPMultiplier);


struct TTriplet
	{
	TTriplet(const TTriplet &aValue);
	TTriplet(TInt16 aX, TInt16 aY, TInt16 aP);
	TScaledInt iX;
	TScaledInt iY;
	TScaledInt iP;
	};
static TAknWindowComponentLayout Multiply(TAknWindowComponentLayout aLine1, const TTriplet &aTriplet);
static TTriplet FromRangeToTriplet(const TRangeTriplet &aRange);

	};


/**
* A text component structure from layout.
*/
class TAknTextComponentLayout
	{
public:
	/**
	 * contructor
	 *
	 */
	IMPORT_C TAknTextComponentLayout();

	/*
	 * create a layout line using the old layout API structure
	 * note that the B value will contain the b value and may be parent relative
	 * note also that the fontId will be encoded
	 * see AknFontSpecification and AknLayoutUtils for helper methods
	 * 
	 * @return layout line
	 */
	IMPORT_C TAknTextLineLayout LayoutLine() const;
	IMPORT_C static TAknMultiLineTextLayout Multiline(const RArray<TAknTextComponentLayout> &aLayouts);

	/*
	 * create a layout line using the old layout API structure
	 * such that the values are all non-empty
	 * 
	 * @return layout line
	 */
	IMPORT_C TAknTextLineLayout LayoutLineNoEmptys() const;

	/* 
	 * Return the type of the component, as specified in the layout
	 * Note that a TAknWindowComponentLayout is data layout 
	 * compatible with TAknTextComponentLayout, and the actual
	 * type can be accessed using this method before casting. 
	 * However, casting to the wrong type may cause unexpected results.
	 * 
	 * @return the type of the component
	 * 
	 */
	IMPORT_C TAknLayoutScalableComponentType LayoutComponentType() const;

public:
	// note that the following get and set methods do not follow coding conventions
	// this is to increase source compatibility with existing implementation
	// that directly accesses the public members of the corresponding non-scalable
	// data structures. also note that the parameter names don't follow coding conventions, 
	// this is to maintain consistency with the layout specifications.
	// also note that they are not inline so that they can be modified
	// for dynamic layout calculation without breaking BC. 
	IMPORT_C TInt16 C() const;
	IMPORT_C TInt16 l() const;
	IMPORT_C TInt16 t() const;
	IMPORT_C TInt16 r() const;
	IMPORT_C TInt16 b() const;
	IMPORT_C TInt16 W() const;
	IMPORT_C TInt16 H() const;
	IMPORT_C TInt16 J() const;
    IMPORT_C TInt32 Font() const;
    IMPORT_C void SetC(TInt16 aC);
	IMPORT_C void Setl(TInt16 al);
	IMPORT_C void Sett(TInt16 at);
	IMPORT_C void Setr(TInt16 ar);
	IMPORT_C void Setb(TInt16 ab);
	IMPORT_C void SetW(TInt16 aW);
	IMPORT_C void SetH(TInt16 aH);
	IMPORT_C void SetJ(TInt16 aJ);
    IMPORT_C void SetFont(TInt32 aFont);

public:

    IMPORT_C static TAknTextComponentLayout Anim(TAknTextComponentLayout aLine,
					    TAknTextComponentLayout aLine2, 
						const TAknWindowComponentLayout::TRangeTriplet &aTriplet);

    
    /**
     * This method calculates a list item position based on first item.
     * This can be used to calculate list item positions.
     */
    IMPORT_C static TAknTextComponentLayout MultiLineY(TAknTextComponentLayout aFirst, TInt aItemIndex, TInt aGapBetweenItems);
    IMPORT_C TAknTextComponentLayout( TAknTextLineLayout aLine );
    IMPORT_C TAknTextComponentLayout operator=(TAknTextLineLayout aLine);

public:

	static TInt FormDataHack(TAknTextComponentLayout aLayout)
		{ 
		aLayout = RemoveLayoutEmptys(aLayout);
		return ELayoutP - aLayout.it - aLayout.iH;
		}
	static void FormDataHack2(TAknTextComponentLayout &aLayout)
		{ 
		aLayout.ib = ELayoutEmpty;
		}

private:
    IMPORT_C static TAknTextComponentLayout RemoveLayoutEmptys(TAknTextComponentLayout aLayout);

private:
    // structural information
    TInt16 iFirstChildID;
    TInt16 iNextSiblingID;
    TInt16 iParentID;
    TInt16 iParentVariety;

    TInt16 iAttributeSetID;
    TInt16 iType;

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



#endif
// End of File
