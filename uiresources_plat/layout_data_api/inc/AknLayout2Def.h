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


#ifndef AKNLAYOUT2DEF_H
#define AKNLAYOUT2DEF_H

#include <e32std.h>
#include <avkon.hrh>
#include <AknLayout2Id.h>

class TAknLayoutRect;
class TAknWindowComponentLayout;
class TAknTextComponentLayout;

/**
* Defines the valid range of a table lookup index.
* A table index is valid if it satisfies iFirstIndex <= index <= iLastIndex
*/
class TAknLayoutTableLimits
	{
public:
	TInt iFirstIndex;
	TInt iLastIndex;
	};


#define ELayoutP ((TInt16)16384)
#define ELayoutPRange ((TInt16)8192)

/**
* A window line structure from layout.
*/
class TAknWindowLineLayout
	{
public:
	inline TAknWindowLineLayout() {}
	inline TAknWindowLineLayout(TInt /*aDummy*/) {}

    IMPORT_C TAknWindowLineLayout( const TAknWindowComponentLayout& aLine );
    IMPORT_C TAknWindowLineLayout operator=(const TAknWindowComponentLayout& aLine);

	/**
	* Can this structure be used directly as a rectangle?
	* @return ETrue when all of l,t,W,H are specified
	*/
	inline TBool IsRect() const;

    
    /**
	* Convert this structure to a rectangle
	* This is only valid when IsRect() returns ETrue.
	* It is intended that this is used when the caller knows that the LAF line encoded in
	* this structure is written with l, t, W and H specified, as is the case with many
	* LAF lines.
    *
	* THIS METHOD IS DEPRECATED, PLEASE DO NOT USE IT! USE OF THIS METHOD MAY RETURN UNEXPECTED VALUES IN SCALABLE UI.
    *
	* Here's CORRECT WAY to do the same thing:
	*  TRect parent = iAvkonAppUi->ClientRect(); // pick parent rectangle from existing control hierarchy.
	*  TAknLayoutRect rect;
	*  rect.LayoutRect(parent, AknLayout::xxxx() ); // TAknWindowLineLayout should go directly to LayoutRect/LayoutControl etc. methods
	*  ... use rect.Rect().... // This one is VALID rectangle, calculated based on parent rectangle.
	*
	*  NOTE, the parent comes from _existing control hierarchy_ CCoeControl::Rect() or
	*  from TAknLayoutRect::Rect() method.
    *
    *  BUT PLEASE, DO NOT USE TAknWindowLineLayout::Rect(), because it assumes invalid things
	*  about our layout data. (the parent rectangle _needs_ to be provided to get a valid rectangle!)
    *
	* THIS METHOD IS DEPRECATED, PLEASE DO NOT USE IT! USE OF THIS METHOD MAY RETURN UNEXPECTED VALUES IN SCALABLE UI.
    * @return a rectangle made from l, t, W and H
	*/
	inline TRect Rect() const;

public: 
	IMPORT_C static TAknWindowLineLayout CombineLines(TAknWindowLineLayout aLine, TAknWindowLineLayout aLine2);

public: // Please DO NOT USE the data members below. Use of them breaks scalable ui. (only place that can use these is aknlayout2 module)
	TInt16 iC;
	TInt16 il;
	TInt16 it;
	TInt16 ir;
	TInt16 ib;
	TInt16 iW;
	TInt16 iH;
	};


/**
* A text line structure from layout.
*/
class TAknTextLineLayout
	{
public:
	inline TAknTextLineLayout() {}
	inline TAknTextLineLayout(TInt /*aDummy*/) {}

	inline TInt FontId() const { return iFont; }
	inline TInt BaselineSkip() const { return iBaselineSkip; }
	inline TInt NumberOfLinesShown() const { return iNumberOfLinesShown; }

    IMPORT_C TAknTextLineLayout( const TAknTextComponentLayout& aLine );
    IMPORT_C TAknTextLineLayout operator=(const TAknTextComponentLayout& aLine);

public:  
    // Please DO NOT USE the data members below. They may contain unexpected values with scalable UI.
	TInt16 iC;
	TInt16 il;
	TInt16 ir;
	TInt16 iB;
	TInt16 iW;
	TInt16 iJ;
	TInt32 iFont;

	TInt iBaselineSkip;
	TInt iNumberOfLinesShown;
	};


/**
* A multiline text line structure from layout.
* TAknMultiLineTextLayout is a specialisation of TAknTextLineLayout, but
* the current implementation does not need to add anything (previous versions did).
*/
class TAknMultiLineTextLayout : public TAknTextLineLayout
	{
	};



inline TBool TAknWindowLineLayout::IsRect() const 
	{ 
	return (il!=ELayoutEmpty && it!=ELayoutEmpty && iW!=ELayoutEmpty && iH!=ELayoutEmpty); 
	}

inline TRect TAknWindowLineLayout::Rect() const 
	{ // THIS METHOD IS DEPRECATED
	ASSERT(IsRect()); 
	return TRect(TPoint(il, it), TSize(iW, iH)); 
	}

#endif
// End of File
