/*
* Copyright (c) 2002 - 2007 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  layout_data_api
*
*/



// [INCLUDE FILES]
#include <e32svr.h>
#include <stifparser.h>
#include <stiftestinterface.h>
#include <aknlayout2scalabledef.h>

#include "testdomlayoutdata.h"


// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestLSTLDefaultConstructor
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestLSTLDefaultConstructor( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestLSTLDefaultConstructor, "In TestLSTLDefaultConstructor" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestLSTLDefaultConstructor );
    // Print to log file
    iLog->Log( KTestLSTLDefaultConstructor );
    TAknLayoutScalableTableLimits layoutScalableTableLimits;
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestLSTLConstructor
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestLSTLConstructor( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestLSTLConstructor, "In TestLSTLConstructor" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestLSTLConstructor );
    // Print to log file
    iLog->Log( KTestLSTLConstructor );
    TAknLayoutScalableTableLimits layoutScalableTableLimits( 0, 1 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestLSTLLayoutLimits
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestLSTLLayoutLimits( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestLSTLLayoutLimits, "In TestLSTLLayoutLimits" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestLSTLLayoutLimits );
    // Print to log file
    iLog->Log( KTestLSTLLayoutLimits );
    TAknLayoutScalableTableLimits layoutScalableTableLimits;
    layoutScalableTableLimits.LayoutLimits();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestLSTLFirstIndex
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestLSTLFirstIndex( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestLSTLFirstIndex, "In TestLSTLFirstIndex" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestLSTLFirstIndex );
    // Print to log file
    iLog->Log( KTestLSTLFirstIndex );
    TAknLayoutScalableTableLimits layoutScalableTableLimits;
    layoutScalableTableLimits.FirstIndex();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestLSTLLastIndex
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestLSTLLastIndex( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestLSTLLastIndex, "In TestLSTLLastIndex" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestLSTLLastIndex );
    // Print to log file
    iLog->Log( KTestLSTLLastIndex );
    TAknLayoutScalableTableLimits layoutScalableTableLimits;
    layoutScalableTableLimits.LastIndex();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestLSTLSetFirstIndex
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestLSTLSetFirstIndex( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestLSTLSetFirstIndex, "In TestLSTLSetFirstIndex" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestLSTLSetFirstIndex );
    // Print to log file
    iLog->Log( KTestLSTLSetFirstIndex );
    TAknLayoutScalableTableLimits layoutScalableTableLimits;
    layoutScalableTableLimits.SetFirstIndex( 0 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestLSTLSetLastIndex
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestLSTLSetLastIndex( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestLSTLSetLastIndex, "In TestLSTLSetLastIndex" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestLSTLSetLastIndex );
    // Print to log file
    iLog->Log( KTestLSTLSetLastIndex );
    TAknLayoutScalableTableLimits layoutScalableTableLimits;
    layoutScalableTableLimits.SetLastIndex( 0 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestLSPLDefaultConstructor
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestLSPLDefaultConstructor( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestLSPLDefaultConstructor, "In TestLSPLDefaultConstructor" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestLSPLDefaultConstructor );
    // Print to log file
    iLog->Log( KTestLSPLDefaultConstructor );
    TAknLayoutScalableParameterLimits layoutScalableParameterLimits;
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestLSPLConstructor
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestLSPLConstructor( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestLSPLConstructor, "In TestLSPLConstructor" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestLSPLConstructor );
    // Print to log file
    iLog->Log( KTestLSPLConstructor );
    TAknLayoutScalableParameterLimits layoutScalableParameterLimits( 1, 2, 1, 2, 1, 2 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestLSPLFirstVariety
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestLSPLFirstVariety( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestLSPLFirstVariety, "In TestLSPLFirstVariety" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestLSPLFirstVariety );
    // Print to log file
    iLog->Log( KTestLSPLFirstVariety );
    TAknLayoutScalableParameterLimits layoutScalableParameterLimits;
    layoutScalableParameterLimits.FirstVariety();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestLSPLLastVariety
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestLSPLLastVariety( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestLSPLLastVariety, "In TestLSPLLastVariety" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestLSPLLastVariety );
    // Print to log file
    iLog->Log( KTestLSPLLastVariety );
    TAknLayoutScalableParameterLimits layoutScalableParameterLimits;
    layoutScalableParameterLimits.LastVariety();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestLSPLFirstColumn
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestLSPLFirstColumn( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestLSPLFirstColumn, "In TestLSPLFirstColumn" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestLSPLFirstColumn );
    // Print to log file
    iLog->Log( KTestLSPLFirstColumn );
    TAknLayoutScalableParameterLimits layoutScalableParameterLimits;
    layoutScalableParameterLimits.FirstColumn();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestLSPLLastColumn
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestLSPLLastColumn( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestLSPLLastColumn, "In TestLSPLLastColumn" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestLSPLLastColumn );
    // Print to log file
    iLog->Log( KTestLSPLLastColumn );
    TAknLayoutScalableParameterLimits layoutScalableParameterLimits;
    layoutScalableParameterLimits.LastColumn();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestLSPLFirstRow
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestLSPLFirstRow( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestLSPLFirstRow, "In TestLSPLFirstRow" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestLSPLFirstRow );
    // Print to log file
    iLog->Log( KTestLSPLFirstRow );
    TAknLayoutScalableParameterLimits layoutScalableParameterLimits;
    layoutScalableParameterLimits.FirstRow();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestLSPLLastRow
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestLSPLLastRow( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestLSPLLastRow, "In TestLSPLLastRow" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestLSPLLastRow );
    // Print to log file
    iLog->Log( KTestLSPLLastRow );
    TAknLayoutScalableParameterLimits layoutScalableParameterLimits;
    layoutScalableParameterLimits.LastRow();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestLSPLSetFirstVariety
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestLSPLSetFirstVariety( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestLSPLSetFirstVariety, "In TestLSPLSetFirstVariety" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestLSPLSetFirstVariety );
    // Print to log file
    iLog->Log( KTestLSPLSetFirstVariety );
    TAknLayoutScalableParameterLimits layoutScalableParameterLimits;
    TInt value = layoutScalableParameterLimits.FirstVariety();
    layoutScalableParameterLimits.SetFirstVariety( value );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestLSPLSetLastVariety
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestLSPLSetLastVariety( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestLSPLSetLastVariety, "In TestLSPLSetLastVariety" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestLSPLSetLastVariety );
    // Print to log file
    iLog->Log( KTestLSPLSetLastVariety );
    TAknLayoutScalableParameterLimits layoutScalableParameterLimits;
    TInt value = layoutScalableParameterLimits.LastVariety();
    layoutScalableParameterLimits.SetLastVariety( value );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestLSPLSetFirstColumn
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestLSPLSetFirstColumn( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestLSPLSetFirstColumn, "In TestLSPLSetFirstColumn" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestLSPLSetFirstColumn );
    // Print to log file
    iLog->Log( KTestLSPLSetFirstColumn );
    TAknLayoutScalableParameterLimits layoutScalableParameterLimits;
    TInt value = layoutScalableParameterLimits.FirstColumn();
    layoutScalableParameterLimits.SetFirstColumn( value );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestLSPLSetLastColumn
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestLSPLSetLastColumn( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestLSPLSetLastColumn, "In TestLSPLSetLastColumn" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestLSPLSetLastColumn );
    // Print to log file
    iLog->Log( KTestLSPLSetLastColumn );
    TAknLayoutScalableParameterLimits layoutScalableParameterLimits;
    TInt value = layoutScalableParameterLimits.LastColumn();
    layoutScalableParameterLimits.SetLastColumn( value );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestLSPLSetFirstRow
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestLSPLSetFirstRow( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestLSPLSetFirstRow, "In TestLSPLSetFirstRow" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestLSPLSetFirstRow );
    // Print to log file
    iLog->Log( KTestLSPLSetFirstRow );
    TAknLayoutScalableParameterLimits layoutScalableParameterLimits;
    TInt value = layoutScalableParameterLimits.FirstRow();
    layoutScalableParameterLimits.SetFirstRow( value );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestLSPLSetLastRow
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestLSPLSetLastRow( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestLSPLSetLastRow, "In TestLSPLSetLastRow" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestLSPLSetLastRow );
    // Print to log file
    iLog->Log( KTestLSPLSetLastRow );
    TAknLayoutScalableParameterLimits layoutScalableParameterLimits;
    TInt value = layoutScalableParameterLimits.LastRow();
    layoutScalableParameterLimits.SetLastRow( value );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestWCLDefaultConstructor
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestWCLDefaultConstructor( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestWCLDefaultConstructor, "In TestWCLDefaultConstructor" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestWCLDefaultConstructor );
    // Print to log file
    iLog->Log( KTestWCLDefaultConstructor );
    TAknWindowComponentLayout windowComponentLayout;
   
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestWCLLayoutLine
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestWCLLayoutLine( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestWCLLayoutLine, "In TestWCLLayoutLine" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestWCLLayoutLine );
    // Print to log file
    iLog->Log( KTestWCLLayoutLine );
    TAknWindowComponentLayout windowComponentLayout;
    windowComponentLayout.LayoutLine();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestWCLLayoutLineNoEmptys
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestWCLLayoutLineNoEmptys( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestWCLLayoutLineNoEmptys, "In TestWCLLayoutLineNoEmptys" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestWCLLayoutLineNoEmptys );
    // Print to log file
    iLog->Log( KTestWCLLayoutLineNoEmptys );
    TAknWindowComponentLayout windowComponentLayout;
    windowComponentLayout.LayoutLineNoEmptys();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestWCLLayoutComponentType
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestWCLLayoutComponentType( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestWCLLayoutComponentType, "In TestWCLLayoutComponentType" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestWCLLayoutComponentType );
    // Print to log file
    iLog->Log( KTestWCLLayoutComponentType );
    TAknWindowComponentLayout windowComponentLayout;
    windowComponentLayout.LayoutComponentType();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestWCLCompose
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestWCLCompose( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestWCLCompose, "In TestWCLCompose" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestWCLCompose );
    // Print to log file
    iLog->Log( KTestWCLCompose );
    TAknWindowComponentLayout line;
    TAknWindowComponentLayout anotherLine;
    TAknWindowComponentLayout::Compose( line, anotherLine );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestWCLComposeText
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestWCLComposeText( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestWCLComposeText, "In TestWCLComposeText" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestWCLComposeText );
    // Print to log file
    iLog->Log( KTestWCLComposeText );
    TAknWindowComponentLayout line;
    TAknTextComponentLayout anotherLine;
    TAknWindowComponentLayout::ComposeText( line, anotherLine );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestWCLIntersect
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestWCLIntersect( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestWCLIntersect, "In TestWCLIntersect" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestWCLIntersect );
    // Print to log file
    iLog->Log( KTestWCLIntersect );
    TAknWindowComponentLayout line;
    TAknWindowComponentLayout anotherLine;
    TAknWindowComponentLayout::Intersect( line, anotherLine );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestWCLMinus
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestWCLMinus( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestWCLMinus, "In TestWCLMinus" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestWCLMinus );
    // Print to log file
    iLog->Log( KTestWCLMinus );
    TAknWindowComponentLayout line;
    TAknWindowComponentLayout parentDiff;
    TAknWindowComponentLayout::Minus( line, parentDiff );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestWCLSiblingAsChild
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestWCLSiblingAsChild( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestWCLSiblingAsChild, "In TestWCLSiblingAsChild" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestWCLSiblingAsChild );
    // Print to log file
    iLog->Log( KTestWCLSiblingAsChild );
    TAknWindowComponentLayout parent;
    TAknWindowComponentLayout child;
    TAknWindowComponentLayout::SiblingAsChild( parent, child );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestWCLSetZeroSized
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestWCLSetZeroSized( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestWCLSetZeroSized, "In TestWCLSetZeroSized" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestWCLSetZeroSized );
    // Print to log file
    iLog->Log( KTestWCLSetZeroSized );
    TAknWindowComponentLayout windowComponentLayout;
    windowComponentLayout.SetZeroSized();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestWCLSplit
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestWCLSplit( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestWCLSplit, "In TestWCLSplit" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestWCLSplit );
    // Print to log file
    iLog->Log( KTestWCLSplit );
    TAknWindowComponentLayout line;
    TAknWindowComponentLayout::Split( line, 0 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestWCLMultiLineGrid
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestWCLMultiLineGrid( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestWCLMultiLineGrid, "In TestWCLMultiLineGrid" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestWCLMultiLineGrid );
    // Print to log file
    iLog->Log( KTestWCLMultiLineGrid );
    TAknWindowComponentLayout line;
    TAknWindowComponentLayout::MultiLineGrid( line, 0, 0, 0, 0 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestWCLMultiLineX
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestWCLMultiLineX( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestWCLMultiLineX, "In TestWCLMultiLineX" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestWCLMultiLineX );
    // Print to log file
    iLog->Log( KTestWCLMultiLineX );
    TAknWindowComponentLayout line;
    TAknWindowComponentLayout::MultiLineX( line, 0, 0 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestWCLMultiLineY
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestWCLMultiLineY( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestWCLMultiLineY, "In TestWCLMultiLineY" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestWCLMultiLineY );
    // Print to log file
    iLog->Log( KTestWCLMultiLineY );
    TAknWindowComponentLayout line;
    TAknWindowComponentLayout componentLayout = TAknWindowComponentLayout::MultiLineY( line, 0, 0 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestWCLAnim
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestWCLAnim( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestWCLAnim, "In TestWCLAnim" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestWCLAnim );
    // Print to log file
    iLog->Log( KTestWCLAnim );
    TAknWindowComponentLayout line;
    TAknWindowComponentLayout anotherLine;
    TAknWindowComponentLayout::TRangeTriplet triplet;
    TAknWindowComponentLayout::Anim( line, anotherLine, triplet );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestWCLConstructor
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestWCLConstructor( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestWCLConstructor, "In TestWCLConstructor" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestWCLConstructor );
    // Print to log file
    iLog->Log( KTestWCLConstructor );
    TAknWindowLineLayout line = WindowLine1f();
    TAknWindowComponentLayout windowComponentLayout( line );
    
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestWCLOperator
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestWCLOperator( CStifItemParser& /*aItem*/ )
    {
    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestWCLOperator, "In TestWCLOperator" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestWCLOperator );
    // Print to log file
    iLog->Log( KTestWCLOperator );
    TAknWindowLineLayout line = WindowLine1f();
    TAknWindowComponentLayout windowComponentLayout = line;
    
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestTCLDefaultConstructor
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestTCLDefaultConstructor( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestTCLDefaultConstructor, "In TestTCLDefaultConstructor" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestTCLDefaultConstructor );
    // Print to log file
    iLog->Log( KTestTCLDefaultConstructor );
    TAknTextComponentLayout textComponentLayout;

    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestTCLLayoutLine
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestTCLLayoutLine( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestTCLLayoutLine, "In TestTCLLayoutLine" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestTCLLayoutLine );
    // Print to log file
    iLog->Log( KTestTCLLayoutLine );
    TAknTextComponentLayout textComponentLayout;
    textComponentLayout.LayoutLine();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestTCLMultilineL
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestTCLMultilineL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestTCLMultiline, "In TestTCLMultiline" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestTCLMultiline );
    // Print to log file
    iLog->Log( KTestTCLMultiline );
    RArray<TAknTextComponentLayout> layouts;
    TAknTextComponentLayout componentLayout;
    CleanupClosePushL( layouts );
    layouts.Append( componentLayout );
    TAknTextComponentLayout::Multiline( layouts );
    CleanupStack::Pop(); 
    layouts.Close();    
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestTCLLayoutLineNoEmptys
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestTCLLayoutLineNoEmptys( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestTCLLayoutLineNoEmptys, "In TestTCLLayoutLineNoEmptys" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestTCLLayoutLineNoEmptys );
    // Print to log file
    iLog->Log( KTestTCLLayoutLineNoEmptys );
    TAknTextComponentLayout textComponentLayout;
    textComponentLayout.LayoutLineNoEmptys();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestTCLLayoutComponentType
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestTCLLayoutComponentType( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestTCLLayoutComponentType, "In TestTCLLayoutComponentType" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestTCLLayoutComponentType );
    // Print to log file
    iLog->Log( KTestTCLLayoutComponentType );
    TAknTextComponentLayout textComponentLayout;
    textComponentLayout.LayoutComponentType();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestTCLCFunction
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestTCLCFunction( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestTCLC, "In TestTCLC" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestTCLC );
    // Print to log file
    iLog->Log( KTestTCLC );
    TAknTextComponentLayout textComponentLayout;
    textComponentLayout.C();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestTCLlFunction
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestTCLlFunction( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestTCLlFunction, "In TestTCLlFunction" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestTCLlFunction );
    // Print to log file
    iLog->Log( KTestTCLlFunction );
    TAknTextComponentLayout textComponentLayout;
    textComponentLayout.l();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestTCLtFunction
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestTCLtFunction( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestTCLtFunction, "In TestTCLtFunction" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestTCLtFunction );
    // Print to log file
    iLog->Log( KTestTCLtFunction );
    TAknTextComponentLayout textComponentLayout;
    textComponentLayout.t();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestTCLrFunction
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestTCLrFunction( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestTCLrFunction, "In TestTCLrFunction" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestTCLrFunction );
    // Print to log file
    iLog->Log( KTestTCLrFunction );
    TAknTextComponentLayout textComponentLayout;
    textComponentLayout.r();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestTCLbFunction
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestTCLbFunction( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestTCLbFunction, "In TestTCLbFunction" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestTCLbFunction );
    // Print to log file
    iLog->Log( KTestTCLbFunction );
    TAknTextComponentLayout textComponentLayout;
    textComponentLayout.b();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestTCLWFunction
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestTCLWFunction( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestTCLWFunction, "In TestTCLWFunction" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestTCLWFunction );
    // Print to log file
    iLog->Log( KTestTCLWFunction );
    TAknTextComponentLayout textComponentLayout;
    textComponentLayout.W();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestTCLHFunction
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestTCLHFunction( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestTCLHFunction, "In TestTCLHFunction" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestTCLHFunction );
    // Print to log file
    iLog->Log( KTestTCLHFunction );
    TAknTextComponentLayout textComponentLayout;
    textComponentLayout.H();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestTCLJFunction
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestTCLJFunction( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestTCLJFunction, "In TestTCLJFunction" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestTCLJFunction );
    // Print to log file
    iLog->Log( KTestTCLJFunction );
    TAknTextComponentLayout textComponentLayout;
    textComponentLayout.J();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestTCLFont
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestTCLFont( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestTCLFont, "In TestTCLFont" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestTCLFont );
    // Print to log file
    iLog->Log( KTestTCLFont );
    TAknTextComponentLayout textComponentLayout;
    textComponentLayout.Font();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestTCLSetC
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestTCLSetC( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestTCLSetC, "In TestTCLSetC" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestTCLSetC );
    // Print to log file
    iLog->Log( KTestTCLSetC );
    TAknTextComponentLayout textComponentLayout;
    TInt16 value = textComponentLayout.C();
    textComponentLayout.SetC( value );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestTCLSetl
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestTCLSetl( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestTCLSetl, "In TestTCLSetl" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestTCLSetl );
    // Print to log file
    iLog->Log( KTestTCLSetl );
    TAknTextComponentLayout textComponentLayout;
    TInt16 value = textComponentLayout.l();
    textComponentLayout.Setl( value );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestTCLSett
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestTCLSett( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestTCLSett, "In TestTCLSett" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestTCLSett );
    // Print to log file
    iLog->Log( KTestTCLSett );
    TAknTextComponentLayout textComponentLayout;
    TInt16 value = textComponentLayout.t();
    textComponentLayout.Sett( value );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestTCLSetr
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestTCLSetr( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestTCLSetr, "In TestTCLSetr" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestTCLSetr );
    // Print to log file
    iLog->Log( KTestTCLSetr );
    TAknTextComponentLayout textComponentLayout;
    TInt16 value = textComponentLayout.r();
    textComponentLayout.Setr( value );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestTCLSetb
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestTCLSetb( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestTCLSetb, "In TestTCLSetb" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestTCLSetb );
    // Print to log file
    iLog->Log( KTestTCLSetb );
    TAknTextComponentLayout textComponentLayout;
    TInt16 value = textComponentLayout.b();
    textComponentLayout.Setb( value );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestTCLSetW
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestTCLSetW( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestTCLSetW, "In TestTCLSetW" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestTCLSetW );
    // Print to log file
    iLog->Log( KTestTCLSetW );
    TAknTextComponentLayout textComponentLayout;
    TInt16 value = textComponentLayout.W();
    textComponentLayout.SetW( value );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestTCLSetH
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestTCLSetH( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestTCLSetH, "In TestTCLSetH" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestTCLSetH );
    // Print to log file
    iLog->Log( KTestTCLSetH );
    TAknTextComponentLayout textComponentLayout;
    TInt16 value = textComponentLayout.H();
    textComponentLayout.SetH( value );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestTCLSetJ
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestTCLSetJ( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestTCLSetJ, "In TestTCLSetJ" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestTCLSetJ );
    // Print to log file
    iLog->Log( KTestTCLSetJ );
    TAknTextComponentLayout textComponentLayout;
    TInt16 value = textComponentLayout.J();
    textComponentLayout.SetJ( value );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestTCLSetFont
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestTCLSetFont( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestTCLSetFont, "In TestTCLSetFont" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestTCLSetFont );
    // Print to log file
    iLog->Log( KTestTCLSetFont );
    TAknTextComponentLayout textComponentLayout;
    TInt32 value = textComponentLayout.Font();
    textComponentLayout.SetFont( value );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestTCLAnim
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestTCLAnim( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestTCLAnim, "In TestTCLAnim" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestTCLAnim );
    // Print to log file
    iLog->Log( KTestTCLAnim );
    TAknTextComponentLayout line;
    TAknTextComponentLayout anotherLine;
    TAknWindowComponentLayout::TRangeTriplet triplet;
    TAknTextComponentLayout::Anim( line, anotherLine, triplet );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestTCLMultiLineY
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestTCLMultiLineY( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestTCLMultiLineY, "In TestTCLMultiLineY" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestTCLMultiLineY );
    // Print to log file
    iLog->Log( KTestTCLMultiLineY );
    TAknTextComponentLayout line;
    TAknTextComponentLayout::MultiLineY( line, 1, 1 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestTCLConstructor
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestTCLConstructor( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestTCLConstructor, "In TestTCLConstructor" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestTCLConstructor );
    // Print to log file
    iLog->Log( KTestTCLConstructor );
    TAknTextLineLayout line;
    TAknTextComponentLayout textComponentLayout( line );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestTCLOperator
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestTCLOperator( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestTCLOperator, "In TestTCLOperator" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestTCLOperator );
    // Print to log file
    iLog->Log( KTestTCLOperator );
    TAknTextLineLayout line;
    TAknTextComponentLayout textComponentLayout = line;
    return KErrNone;
    }

TAknWindowLineLayout CTestDOMLayoutData::WindowLine1f()   
    {
    return TAknWindowLineLayout();
    }
