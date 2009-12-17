/*
* Copyright (c) 2009 Nokia Corporation and/or its subsidiary(-ies).
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

// This customisation implements the interface defined in AknLayoutScalable_UiAccel.cdl

#include "aknlayoutscalable_elaf_hvl4_c_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_UiAccel { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_hvp4_c_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_hvl4_c_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_UiAccel::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_UiAccel::KByteCodedData_AknLayoutScalable_Elaf_hvp4_c_vga4_prt_tch + 0x00000000 };

TAknWindowComponentLayout WindowLineVCR(TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::WindowLineVCR(&KImplData, aVariety, aCol, aRow); }
TAknLayoutScalableParameterLimits ParameterLimitsV(TInt aVariety) { return AknLayoutScalableDecode::ParameterLimitsV(&KImplData, aVariety); }
TAknTextComponentLayout TextLineVCR(TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::TextLineVCR(&KImplData, aVariety, aCol, aRow); }
TAknWindowComponentLayout WindowTableLVCR(TInt aLineIndex, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::WindowTableLVCR(&KImplData, aLineIndex, aVariety, aCol, aRow); }
TAknLayoutScalableTableLimits Limits() { return AknLayoutScalableDecode::TableLimits(KDataLookup); }
TAknLayoutScalableParameterLimits ParameterLimitsTableLV(TInt aLineIndex, TInt aVariety) { return AknLayoutScalableDecode::ParameterLimitsTableLV(&KImplData, aLineIndex, aVariety); }
TAknTextComponentLayout TextTableLVCR(TInt aLineIndex, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::TextTableLVCR(&KImplData, aLineIndex, aVariety, aCol, aRow); }
TAknLayoutScalableComponentType GetComponentTypeById(TInt aComponentId) { return AknLayoutScalableDecode::GetComponentTypeById(&KImplData, aComponentId); }
TAknLayoutScalableParameterLimits GetParamLimitsById(TInt aComponentId, TInt aVariety) { return AknLayoutScalableDecode::GetParamLimitsById(&KImplData, aComponentId, aVariety); }
TAknWindowComponentLayout GetWindowComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::GetWindowComponentById(&KImplData, aComponentId, aVariety, aCol, aRow); }
TAknTextComponentLayout GetTextComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::GetTextComponentById(&KImplData, aComponentId, aVariety, aCol, aRow); }

const TUint16 KDataLookup[AknLayoutScalable_UiAccel::E_TApiId_TableSize] =
	{
0x0000,

0x0000,

0x0000,

0x0000,

0x13d8,	// (0x000013d8) Screen

0x000c,	// (0x0000000c) application_window

0x13e4,	// (0x000013e4) area_bottom_pane_ParamLimits

0x13e4,	// (0x000013e4) area_bottom_pane

0x13fe,	// (0x000013fe) area_top_pane_ParamLimits

0x13fe,	// (0x000013fe) area_top_pane

0x1415,	// (0x00001415) main_pane_ParamLimits

0x1415,	// (0x00001415) main_pane

0x000c,	// (0x0000000c) main_hc_listscroll_pane

0x00f8,	// (0x000000f8) hc_list_pane

0x0109,	// (0x00000109) hc_scroll_pane

0x016d,	// (0x0000016d) hc_list_double2_graphic_pane

0x016d,	// (0x0000016d) hc_list_double2_large_graphic_pane

0x016d,	// (0x0000016d) hc_list_double2_pane

0x0176,	// (0x00000176) hc_list_double_graphic_pane

0x0176,	// (0x00000176) hc_list_double_heading_pane

0x0176,	// (0x00000176) hc_list_double_large_graphic_pane

0x0176,	// (0x00000176) hc_list_double_pane

0x017f,	// (0x0000017f) hc_list_single_graphic_pane

0x017f,	// (0x0000017f) hc_list_single_heading_pane

0x016d,	// (0x0000016d) hc_list_single_large_graphic_pane

0x017f,	// (0x0000017f) hc_list_single_pane

0x01da,	// (0x000001da) hc_list_single_pane_g1_ParamLimits

0x01da,	// (0x000001da) hc_list_single_pane_g1

0x01e6,	// (0x000001e6) hc_list_single_pane_g2_ParamLimits

0x01e6,	// (0x000001e6) hc_list_single_pane_g2

0x0001,

0x1277,	// (0x00001277) hc_list_single_pane_g_ParamLimits

0x1277,	// (0x00001277) hc_list_single_pane_g

0x01fa,	// (0x000001fa) hc_list_single_pane_t1_ParamLimits

0x01fa,	// (0x000001fa) hc_list_single_pane_t1

0x0211,	// (0x00000211) hc_list_single_graphic_pane_g1_ParamLimits

0x0211,	// (0x00000211) hc_list_single_graphic_pane_g1

0x021d,	// (0x0000021d) hc_list_single_graphic_pane_g2_ParamLimits

0x021d,	// (0x0000021d) hc_list_single_graphic_pane_g2

0x01e6,	// (0x000001e6) hc_list_single_graphic_pane_g3_ParamLimits

0x01e6,	// (0x000001e6) hc_list_single_graphic_pane_g3

0x0002,

0x127c,	// (0x0000127c) hc_list_single_graphic_pane_g_ParamLimits

0x127c,	// (0x0000127c) hc_list_single_graphic_pane_g

0x022c,	// (0x0000022c) hc_list_single_graphic_pane_t1_ParamLimits

0x022c,	// (0x0000022c) hc_list_single_graphic_pane_t1

0x01da,	// (0x000001da) hc_list_single_heading_pane_g1_ParamLimits

0x01da,	// (0x000001da) hc_list_single_heading_pane_g1

0x01e6,	// (0x000001e6) hc_list_single_heading_pane_g2_ParamLimits

0x01e6,	// (0x000001e6) hc_list_single_heading_pane_g2

0x0001,

0x1277,	// (0x00001277) hc_list_single_heading_pane_g_ParamLimits

0x1277,	// (0x00001277) hc_list_single_heading_pane_g

0x0242,	// (0x00000242) hc_list_single_heading_pane_t1_ParamLimits

0x0242,	// (0x00000242) hc_list_single_heading_pane_t1

0x0254,	// (0x00000254) hc_list_single_heading_pane_t2_ParamLimits

0x0254,	// (0x00000254) hc_list_single_heading_pane_t2

0x0001,

0x1283,	// (0x00001283) hc_list_single_heading_pane_t_ParamLimits

0x1283,	// (0x00001283) hc_list_single_heading_pane_t

0x026a,	// (0x0000026a) hc_list_single_large_graphic_pane_g1_ParamLimits

0x026a,	// (0x0000026a) hc_list_single_large_graphic_pane_g1

0x0276,	// (0x00000276) hc_list_single_large_graphic_pane_g2_ParamLimits

0x0276,	// (0x00000276) hc_list_single_large_graphic_pane_g2

0x0282,	// (0x00000282) hc_list_single_large_graphic_pane_g3_ParamLimits

0x0282,	// (0x00000282) hc_list_single_large_graphic_pane_g3

0x0002,

0x1288,	// (0x00001288) hc_list_single_large_graphic_pane_g_ParamLimits

0x1288,	// (0x00001288) hc_list_single_large_graphic_pane_g

0x0296,	// (0x00000296) hc_list_single_large_graphic_pane_t1_ParamLimits

0x0296,	// (0x00000296) hc_list_single_large_graphic_pane_t1

0x01da,	// (0x000001da) hc_list_double_pane_g1_ParamLimits

0x01da,	// (0x000001da) hc_list_double_pane_g1

0x01e6,	// (0x000001e6) hc_list_double_pane_g2_ParamLimits

0x01e6,	// (0x000001e6) hc_list_double_pane_g2

0x0001,

0x1277,	// (0x00001277) hc_list_double_pane_g_ParamLimits

0x1277,	// (0x00001277) hc_list_double_pane_g

0x02ac,	// (0x000002ac) hc_list_double_pane_t1_ParamLimits

0x02ac,	// (0x000002ac) hc_list_double_pane_t1

0x02c2,	// (0x000002c2) hc_list_double_pane_t2_ParamLimits

0x02c2,	// (0x000002c2) hc_list_double_pane_t2

0x0001,

0x128f,	// (0x0000128f) hc_list_double_pane_t_ParamLimits

0x128f,	// (0x0000128f) hc_list_double_pane_t

0x0211,	// (0x00000211) hc_list_double_graphic_pane_g1_ParamLimits

0x0211,	// (0x00000211) hc_list_double_graphic_pane_g1

0x01da,	// (0x000001da) hc_list_double_graphic_pane_g2_ParamLimits

0x01da,	// (0x000001da) hc_list_double_graphic_pane_g2

0x01e6,	// (0x000001e6) hc_list_double_graphic_pane_g3_ParamLimits

0x01e6,	// (0x000001e6) hc_list_double_graphic_pane_g3

0x0002,

0x1294,	// (0x00001294) hc_list_double_graphic_pane_g_ParamLimits

0x1294,	// (0x00001294) hc_list_double_graphic_pane_g

0x022c,	// (0x0000022c) hc_list_double_graphic_pane_t1_ParamLimits

0x022c,	// (0x0000022c) hc_list_double_graphic_pane_t1

0x02d4,	// (0x000002d4) hc_list_double_graphic_pane_t2_ParamLimits

0x02d4,	// (0x000002d4) hc_list_double_graphic_pane_t2

0x0001,

0x129b,	// (0x0000129b) hc_list_double_graphic_pane_t_ParamLimits

0x129b,	// (0x0000129b) hc_list_double_graphic_pane_t

0x02e6,	// (0x000002e6) hc_list_double_heading_pane_g1_ParamLimits

0x02e6,	// (0x000002e6) hc_list_double_heading_pane_g1

0x02f2,	// (0x000002f2) hc_list_double_heading_pane_g2_ParamLimits

0x02f2,	// (0x000002f2) hc_list_double_heading_pane_g2

0x0001,

0x12a0,	// (0x000012a0) hc_list_double_heading_pane_g_ParamLimits

0x12a0,	// (0x000012a0) hc_list_double_heading_pane_g

0x0306,	// (0x00000306) hc_list_double_heading_pane_t1_ParamLimits

0x0306,	// (0x00000306) hc_list_double_heading_pane_t1

0x0318,	// (0x00000318) hc_list_double_heading_pane_t2_ParamLimits

0x0318,	// (0x00000318) hc_list_double_heading_pane_t2

0x0001,

0x12a5,	// (0x000012a5) hc_list_double_heading_pane_t_ParamLimits

0x12a5,	// (0x000012a5) hc_list_double_heading_pane_t

0x032e,	// (0x0000032e) hc_list_double_large_graphic_pane_g1_ParamLimits

0x032e,	// (0x0000032e) hc_list_double_large_graphic_pane_g1

0x01da,	// (0x000001da) hc_list_double_large_graphic_pane_g2_ParamLimits

0x01da,	// (0x000001da) hc_list_double_large_graphic_pane_g2

0x01e6,	// (0x000001e6) hc_list_double_large_graphic_pane_g3_ParamLimits

0x01e6,	// (0x000001e6) hc_list_double_large_graphic_pane_g3

0x0002,

0x12aa,	// (0x000012aa) hc_list_double_large_graphic_pane_g_ParamLimits

0x12aa,	// (0x000012aa) hc_list_double_large_graphic_pane_g

0x033a,	// (0x0000033a) hc_list_double_large_graphic_pane_t1_ParamLimits

0x033a,	// (0x0000033a) hc_list_double_large_graphic_pane_t1

0x0350,	// (0x00000350) hc_list_double_large_graphic_pane_t2_ParamLimits

0x0350,	// (0x00000350) hc_list_double_large_graphic_pane_t2

0x0001,

0x12b1,	// (0x000012b1) hc_list_double_large_graphic_pane_t_ParamLimits

0x12b1,	// (0x000012b1) hc_list_double_large_graphic_pane_t

0x01da,	// (0x000001da) hc_list_double2_pane_g1_ParamLimits

0x01da,	// (0x000001da) hc_list_double2_pane_g1

0x01e6,	// (0x000001e6) hc_list_double2_pane_g2_ParamLimits

0x01e6,	// (0x000001e6) hc_list_double2_pane_g2

0x0001,

0x1277,	// (0x00001277) hc_list_double2_pane_g_ParamLimits

0x1277,	// (0x00001277) hc_list_double2_pane_g

0x02ac,	// (0x000002ac) hc_list_double2_pane_t1_ParamLimits

0x02ac,	// (0x000002ac) hc_list_double2_pane_t1

0x0362,	// (0x00000362) hc_list_double2_pane_t2_ParamLimits

0x0362,	// (0x00000362) hc_list_double2_pane_t2

0x0001,

0x12b6,	// (0x000012b6) hc_list_double2_pane_t_ParamLimits

0x12b6,	// (0x000012b6) hc_list_double2_pane_t

0x0211,	// (0x00000211) hc_list_double2_graphic_pane_g1_ParamLimits

0x0211,	// (0x00000211) hc_list_double2_graphic_pane_g1

0x01da,	// (0x000001da) hc_list_double2_graphic_pane_g2_ParamLimits

0x01da,	// (0x000001da) hc_list_double2_graphic_pane_g2

0x01e6,	// (0x000001e6) hc_list_double2_graphic_pane_g3_ParamLimits

0x01e6,	// (0x000001e6) hc_list_double2_graphic_pane_g3

0x0002,

0x1294,	// (0x00001294) hc_list_double2_graphic_pane_g_ParamLimits

0x1294,	// (0x00001294) hc_list_double2_graphic_pane_g

0x022c,	// (0x0000022c) hc_list_double2_graphic_pane_t1_ParamLimits

0x022c,	// (0x0000022c) hc_list_double2_graphic_pane_t1

0x0374,	// (0x00000374) hc_list_double2_graphic_pane_t2_ParamLimits

0x0374,	// (0x00000374) hc_list_double2_graphic_pane_t2

0x0001,

0x12bb,	// (0x000012bb) hc_list_double2_graphic_pane_t_ParamLimits

0x12bb,	// (0x000012bb) hc_list_double2_graphic_pane_t

0x026a,	// (0x0000026a) hc_list_double2_large_graphic_pane_g1_ParamLimits

0x026a,	// (0x0000026a) hc_list_double2_large_graphic_pane_g1

0x01da,	// (0x000001da) hc_list_double2_large_graphic_pane_g2_ParamLimits

0x01da,	// (0x000001da) hc_list_double2_large_graphic_pane_g2

0x01e6,	// (0x000001e6) hc_list_double2_large_graphic_pane_g3_ParamLimits

0x01e6,	// (0x000001e6) hc_list_double2_large_graphic_pane_g3

0x0002,

0x12c0,	// (0x000012c0) hc_list_double2_large_graphic_pane_g_ParamLimits

0x12c0,	// (0x000012c0) hc_list_double2_large_graphic_pane_g

0x033a,	// (0x0000033a) hc_list_double2_large_graphic_pane_t1_ParamLimits

0x033a,	// (0x0000033a) hc_list_double2_large_graphic_pane_t1

0x0386,	// (0x00000386) hc_list_double2_large_graphic_pane_t2_ParamLimits

0x0386,	// (0x00000386) hc_list_double2_large_graphic_pane_t2

0x0001,

0x12c7,	// (0x000012c7) hc_list_double2_large_graphic_pane_t_ParamLimits

0x12c7,	// (0x000012c7) hc_list_double2_large_graphic_pane_t

0x000c,	// (0x0000000c) main_hc_button_pane

0x1456,	// (0x00001456) aid_hc_size_touch_scroll_bar_ParamLimits

0x1456,	// (0x00001456) aid_hc_size_touch_scroll_bar

0x1477,	// (0x00001477) aid_hc_size_touch_scroll_bar_cp01_ParamLimits

0x1477,	// (0x00001477) aid_hc_size_touch_scroll_bar_cp01

0x148d,	// (0x0000148d) hc_popup_scroll_hotspot_window

0x0109,	// (0x00000109) hc_scroll_pane_ParamLimits

0x0139,	// (0x00000139) hc_scroll_pane_cp01_ParamLimits

0x0139,	// (0x00000139) hc_scroll_pane_cp01

0x014f,	// (0x0000014f) main_hc_listscroll_pane_g1_ParamLimits

0x014f,	// (0x0000014f) main_hc_listscroll_pane_g1

0x0161,	// (0x00000161) main_hc_listscroll_pane_g2_ParamLimits

0x0161,	// (0x00000161) main_hc_listscroll_pane_g2

0x0001,

0x1272,	// (0x00001272) main_hc_listscroll_pane_g_ParamLimits

0x1272,	// (0x00001272) main_hc_listscroll_pane_g

0x0176,	// (0x00000176) hc_list_double_graphic_heading_pane

0x0188,	// (0x00000188) aid_hc_size_max_handle_ParamLimits

0x0188,	// (0x00000188) aid_hc_size_max_handle

0x019e,	// (0x0000019e) aid_hc_size_min_handle_ParamLimits

0x019e,	// (0x0000019e) aid_hc_size_min_handle

0x00b3,	// (0x000000b3) hc_scroll_bg_pane_ParamLimits

0x00b3,	// (0x000000b3) hc_scroll_bg_pane

0x01b2,	// (0x000001b2) hc_scroll_handle_pane_ParamLimits

0x01b2,	// (0x000001b2) hc_scroll_handle_pane

0x01c6,	// (0x000001c6) hc_scroll_pane_g1_ParamLimits

0x01c6,	// (0x000001c6) hc_scroll_pane_g1

0x01c6,	// (0x000001c6) hc_scroll_bg_pane_g1_ParamLimits

0x01c6,	// (0x000001c6) hc_scroll_bg_pane_g1

0x0398,	// (0x00000398) hc_scroll_bg_pane_g2_ParamLimits

0x0398,	// (0x00000398) hc_scroll_bg_pane_g2

0x03b0,	// (0x000003b0) hc_scroll_bg_pane_g3_ParamLimits

0x03b0,	// (0x000003b0) hc_scroll_bg_pane_g3

0x0002,

0x12cc,	// (0x000012cc) hc_scroll_bg_pane_g_ParamLimits

0x12cc,	// (0x000012cc) hc_scroll_bg_pane_g

0x01c6,	// (0x000001c6) hc_scroll_handle_pane_g1_ParamLimits

0x01c6,	// (0x000001c6) hc_scroll_handle_pane_g1

0x0398,	// (0x00000398) hc_scroll_handle_pane_g2_ParamLimits

0x0398,	// (0x00000398) hc_scroll_handle_pane_g2

0x03b0,	// (0x000003b0) hc_scroll_handle_pane_g3_ParamLimits

0x03b0,	// (0x000003b0) hc_scroll_handle_pane_g3

0x0002,

0x12cc,	// (0x000012cc) hc_scroll_handle_pane_g_ParamLimits

0x12cc,	// (0x000012cc) hc_scroll_handle_pane_g

0x000c,	// (0x0000000c) bg_hc_secondary_window

0x03c8,	// (0x000003c8) qfn_secondary_cp6

0x03d6,	// (0x000003d6) hc_button_pane

0x03de,	// (0x000003de) bg_hc_button_pane_ParamLimits

0x03de,	// (0x000003de) bg_hc_button_pane

0x03ec,	// (0x000003ec) hc_button_pane_g1_ParamLimits

0x03ec,	// (0x000003ec) hc_button_pane_g1

0x0407,	// (0x00000407) hc_button_pane_t1_ParamLimits

0x0407,	// (0x00000407) hc_button_pane_t1

0x0425,	// (0x00000425) bg_hc_button_pane_g1

0x042d,	// (0x0000042d) bg_hc_button_pane_g2

0x0435,	// (0x00000435) bg_hc_button_pane_g3

0x043d,	// (0x0000043d) bg_hc_button_pane_g4

0x0445,	// (0x00000445) bg_hc_button_pane_g5

0x044d,	// (0x0000044d) bg_hc_button_pane_g6

0x0455,	// (0x00000455) bg_hc_button_pane_g7

0x045d,	// (0x0000045d) bg_hc_button_pane_g8

0x0465,	// (0x00000465) bg_hc_button_pane_g9

0x0008,

0x12d3,	// (0x000012d3) bg_hc_button_pane_g

0x0211,	// (0x00000211) hc_list_double_graphic_heading_pane_g1_ParamLimits

0x0211,	// (0x00000211) hc_list_double_graphic_heading_pane_g1

0x02e6,	// (0x000002e6) hc_list_double_graphic_heading_pane_g2_ParamLimits

0x02e6,	// (0x000002e6) hc_list_double_graphic_heading_pane_g2

0x02f2,	// (0x000002f2) hc_list_double_graphic_heading_pane_g3_ParamLimits

0x02f2,	// (0x000002f2) hc_list_double_graphic_heading_pane_g3

0x0002,

0x12e6,	// (0x000012e6) hc_list_double_graphic_heading_pane_g_ParamLimits

0x12e6,	// (0x000012e6) hc_list_double_graphic_heading_pane_g

0x046d,	// (0x0000046d) hc_list_double_graphic_heading_pane_t1_ParamLimits

0x046d,	// (0x0000046d) hc_list_double_graphic_heading_pane_t1

0x047f,	// (0x0000047f) hc_list_double_graphic_heading_pane_t2_ParamLimits

0x047f,	// (0x0000047f) hc_list_double_graphic_heading_pane_t2

0x0001,

0x12ed,	// (0x000012ed) hc_list_double_graphic_heading_pane_t_ParamLimits

0x12ed,	// (0x000012ed) hc_list_double_graphic_heading_pane_t

0x000c,	// (0x0000000c) main_hc_gridscroll_pane

0x000c,	// (0x0000000c) bg_hc_highlight_list_pane

0x1495,	// (0x00001495) aid_hc_grid_cell_size_ParamLimits

0x1495,	// (0x00001495) aid_hc_grid_cell_size

0x14af,	// (0x000014af) hc_scroll_pane_cp02_ParamLimits

0x14af,	// (0x000014af) hc_scroll_pane_cp02

0x14bc,	// (0x000014bc) main_hc_grid_pane_ParamLimits

0x14bc,	// (0x000014bc) main_hc_grid_pane

0x14e5,	// (0x000014e5) cell_hc_grid_pane_ParamLimits

0x14e5,	// (0x000014e5) cell_hc_grid_pane

0x0514,	// (0x00000514) bg_hc_highlight_grid_pane_ParamLimits

0x0514,	// (0x00000514) bg_hc_highlight_grid_pane

0x152c,	// (0x0000152c) cell_hc_grid_pane_g1_ParamLimits

0x152c,	// (0x0000152c) cell_hc_grid_pane_g1

0x1545,	// (0x00001545) cell_hc_grid_pane_t1_ParamLimits

0x1545,	// (0x00001545) cell_hc_grid_pane_t1

0x0555,	// (0x00000555) bg_hc_highlight_grid_pane_g1_ParamLimits

0x0555,	// (0x00000555) bg_hc_highlight_grid_pane_g1

0x0561,	// (0x00000561) bg_hc_highlight_grid_pane_g2_ParamLimits

0x0561,	// (0x00000561) bg_hc_highlight_grid_pane_g2

0x056d,	// (0x0000056d) bg_hc_highlight_grid_pane_g3_ParamLimits

0x056d,	// (0x0000056d) bg_hc_highlight_grid_pane_g3

0x0579,	// (0x00000579) bg_hc_highlight_grid_pane_g4_ParamLimits

0x0579,	// (0x00000579) bg_hc_highlight_grid_pane_g4

0x0585,	// (0x00000585) bg_hc_highlight_grid_pane_g5_ParamLimits

0x0585,	// (0x00000585) bg_hc_highlight_grid_pane_g5

0x0591,	// (0x00000591) bg_hc_highlight_grid_pane_g6_ParamLimits

0x0591,	// (0x00000591) bg_hc_highlight_grid_pane_g6

0x059d,	// (0x0000059d) bg_hc_highlight_grid_pane_g7_ParamLimits

0x059d,	// (0x0000059d) bg_hc_highlight_grid_pane_g7

0x05a9,	// (0x000005a9) bg_hc_highlight_grid_pane_g8_ParamLimits

0x05a9,	// (0x000005a9) bg_hc_highlight_grid_pane_g8

0x05b5,	// (0x000005b5) bg_hc_highlight_grid_pane_g9_ParamLimits

0x05b5,	// (0x000005b5) bg_hc_highlight_grid_pane_g9

0x05c1,	// (0x000005c1) bg_hc_highlight_grid_pane_g10_ParamLimits

0x05c1,	// (0x000005c1) bg_hc_highlight_grid_pane_g10

0x0009,

0x12f2,	// (0x000012f2) bg_hc_highlight_grid_pane_g_ParamLimits

0x12f2,	// (0x000012f2) bg_hc_highlight_grid_pane_g

0x0561,	// (0x00000561) bg_hc_highlight_list_pane_g1_ParamLimits

0x0561,	// (0x00000561) bg_hc_highlight_list_pane_g1

0x0561,	// (0x00000561) bg_hc_highlight_list_pane_g2_ParamLimits

0x0561,	// (0x00000561) bg_hc_highlight_list_pane_g2

0x056d,	// (0x0000056d) bg_hc_highlight_list_pane_g3_ParamLimits

0x056d,	// (0x0000056d) bg_hc_highlight_list_pane_g3

0x0579,	// (0x00000579) bg_hc_highlight_list_pane_g4_ParamLimits

0x0579,	// (0x00000579) bg_hc_highlight_list_pane_g4

0x0585,	// (0x00000585) bg_hc_highlight_list_pane_g5_ParamLimits

0x0585,	// (0x00000585) bg_hc_highlight_list_pane_g5

0x0591,	// (0x00000591) bg_hc_highlight_list_pane_g6_ParamLimits

0x0591,	// (0x00000591) bg_hc_highlight_list_pane_g6

0x059d,	// (0x0000059d) bg_hc_highlight_list_pane_g7_ParamLimits

0x059d,	// (0x0000059d) bg_hc_highlight_list_pane_g7

0x05a9,	// (0x000005a9) bg_hc_highlight_list_pane_g8_ParamLimits

0x05a9,	// (0x000005a9) bg_hc_highlight_list_pane_g8

0x05b5,	// (0x000005b5) bg_hc_highlight_list_pane_g9_ParamLimits

0x05b5,	// (0x000005b5) bg_hc_highlight_list_pane_g9

0x05c1,	// (0x000005c1) bg_hc_highlight_list_pane_g10_ParamLimits

0x05c1,	// (0x000005c1) bg_hc_highlight_list_pane_g10

0x0009,

0x1307,	// (0x00001307) bg_hc_highlight_list_pane_g_ParamLimits

0x1307,	// (0x00001307) bg_hc_highlight_list_pane_g

0x002f,	// (0x0000002f) area_side_right_pane_ParamLimits

0x002f,	// (0x0000002f) area_side_right_pane

0x0098,	// (0x00000098) popup_toolbar2_fixed_window_cp001

0x03de,	// (0x000003de) main_aa_coverflow_pane

0x000c,	// (0x0000000c) main_aa_empty_pane

0x000c,	// (0x0000000c) main_aa_fastscroll_pane

0x00a5,	// (0x000000a5) main_aa_gridscroll_pane_ParamLimits

0x00a5,	// (0x000000a5) main_aa_gridscroll_pane

0x000c,	// (0x0000000c) main_aa_listscroll_pane

0x00b3,	// (0x000000b3) main_aa_metadata_pane

0x00b3,	// (0x000000b3) main_aa_slider_pane

0x155f,	// (0x0000155f) aacf_image_pane_ParamLimits

0x155f,	// (0x0000155f) aacf_image_pane

0x0618,	// (0x00000618) aacf_image_pane_cp001_ParamLimits

0x0618,	// (0x00000618) aacf_image_pane_cp001

0x064e,	// (0x0000064e) aacf_image_pane_cp002_ParamLimits

0x064e,	// (0x0000064e) aacf_image_pane_cp002

0x06b0,	// (0x000006b0) aacf_slider_pane

0x15f0,	// (0x000015f0) main_aa_coverflow_pane_t1_ParamLimits

0x15f0,	// (0x000015f0) main_aa_coverflow_pane_t1

0x1602,	// (0x00001602) aacf_image_pane_g1_ParamLimits

0x1602,	// (0x00001602) aacf_image_pane_g1

0x15b6,	// (0x000015b6) aacf_image_title_pane_ParamLimits

0x15b6,	// (0x000015b6) aacf_image_title_pane

0x06e6,	// (0x000006e6) aacf_slider_pane_g1

0x06ee,	// (0x000006ee) aacf_slider_pane_g1_cp001

0x06f6,	// (0x000006f6) aaslider_bg_pane

0x161b,	// (0x0000161b) aacf_image_title_pane_g1_ParamLimits

0x161b,	// (0x0000161b) aacf_image_title_pane_g1

0x1629,	// (0x00001629) aacf_image_title_pane_t1_ParamLimits

0x1629,	// (0x00001629) aacf_image_title_pane_t1

0x164d,	// (0x0000164d) aacf_image_title_pane_t2_ParamLimits

0x164d,	// (0x0000164d) aacf_image_title_pane_t2

0x0001,

0x1e1a,	// (0x00001e1a) aacf_image_title_pane_t_ParamLimits

0x1e1a,	// (0x00001e1a) aacf_image_title_pane_t

0x0730,	// (0x00000730) aafs_strip_pane_ParamLimits

0x0730,	// (0x00000730) aafs_strip_pane

0x0743,	// (0x00000743) main_aa_fastscroll_pane_g1_ParamLimits

0x0743,	// (0x00000743) main_aa_fastscroll_pane_g1

0x0752,	// (0x00000752) main_aa_fastscroll_pane_g2_ParamLimits

0x0752,	// (0x00000752) main_aa_fastscroll_pane_g2

0x0001,

0x1321,	// (0x00001321) main_aa_fastscroll_pane_g_ParamLimits

0x1321,	// (0x00001321) main_aa_fastscroll_pane_g

0x0761,	// (0x00000761) aafs_strip_grid_pane_ParamLimits

0x0761,	// (0x00000761) aafs_strip_grid_pane

0x00b3,	// (0x000000b3) aafs_strip_shadow_pane_ParamLimits

0x00b3,	// (0x000000b3) aafs_strip_shadow_pane

0x076f,	// (0x0000076f) aafs_strip_grid_pane_g1_ParamLimits

0x076f,	// (0x0000076f) aafs_strip_grid_pane_g1

0x07a8,	// (0x000007a8) aa_scroll_pane

0x07b1,	// (0x000007b1) aalist_gene_pane_ParamLimits

0x07b1,	// (0x000007b1) aalist_gene_pane

0x167b,	// (0x0000167b) aalist_double_entry_pane_ParamLimits

0x167b,	// (0x0000167b) aalist_double_entry_pane

0x167b,	// (0x0000167b) aalist_double_graphic_pane_ParamLimits

0x167b,	// (0x0000167b) aalist_double_graphic_pane

0x167b,	// (0x0000167b) aalist_double_pane_ParamLimits

0x167b,	// (0x0000167b) aalist_double_pane

0x167b,	// (0x0000167b) aalist_double_progress_pane_ParamLimits

0x167b,	// (0x0000167b) aalist_double_progress_pane

0x167b,	// (0x0000167b) aalist_gene_ad_pane_ParamLimits

0x167b,	// (0x0000167b) aalist_gene_ad_pane

0x168e,	// (0x0000168e) aalist_single_pane_ParamLimits

0x168e,	// (0x0000168e) aalist_single_pane

0x2263,	// (0x00002263) aalist_single_pane_g1_ParamLimits

0x2263,	// (0x00002263) aalist_single_pane_g1

0x226f,	// (0x0000226f) aalist_single_pane_g2_ParamLimits

0x226f,	// (0x0000226f) aalist_single_pane_g2

0x0004,

0x2582,	// (0x00002582) aalist_single_pane_g_ParamLimits

0x2582,	// (0x00002582) aalist_single_pane_g

0x2287,	// (0x00002287) aalist_single_pane_t1_ParamLimits

0x2287,	// (0x00002287) aalist_single_pane_t1

0x22a5,	// (0x000022a5) aalist_double_pane_g1_ParamLimits

0x22a5,	// (0x000022a5) aalist_double_pane_g1

0x22b1,	// (0x000022b1) aalist_double_pane_g2_ParamLimits

0x22b1,	// (0x000022b1) aalist_double_pane_g2

0x0001,

0x258d,	// (0x0000258d) aalist_double_pane_g_ParamLimits

0x258d,	// (0x0000258d) aalist_double_pane_g

0x22c5,	// (0x000022c5) aalist_double_pane_t1_ParamLimits

0x22c5,	// (0x000022c5) aalist_double_pane_t1

0x22db,	// (0x000022db) aalist_double_pane_t2_ParamLimits

0x22db,	// (0x000022db) aalist_double_pane_t2

0x0001,

0x2592,	// (0x00002592) aalist_double_pane_t_ParamLimits

0x2592,	// (0x00002592) aalist_double_pane_t

0x173c,	// (0x0000173c) aalist_double_graphic_pane_g1_ParamLimits

0x173c,	// (0x0000173c) aalist_double_graphic_pane_g1

0x22ed,	// (0x000022ed) aalist_double_graphic_pane_g2_ParamLimits

0x22ed,	// (0x000022ed) aalist_double_graphic_pane_g2

0x230d,	// (0x0000230d) aalist_double_graphic_pane_g3_ParamLimits

0x230d,	// (0x0000230d) aalist_double_graphic_pane_g3

0x178e,	// (0x0000178e) aalist_double_graphic_pane_g4_ParamLimits

0x178e,	// (0x0000178e) aalist_double_graphic_pane_g4

0x17b2,	// (0x000017b2) aalist_double_graphic_pane_g5_ParamLimits

0x17b2,	// (0x000017b2) aalist_double_graphic_pane_g5

0x0947,	// (0x00000947) aalist_double_graphic_pane_g6_ParamLimits

0x0947,	// (0x00000947) aalist_double_graphic_pane_g6

0x0974,	// (0x00000974) aalist_double_graphic_pane_g7_ParamLimits

0x0974,	// (0x00000974) aalist_double_graphic_pane_g7

0x09a1,	// (0x000009a1) aalist_double_graphic_pane_g8_ParamLimits

0x09a1,	// (0x000009a1) aalist_double_graphic_pane_g8

0x09c5,	// (0x000009c5) aalist_double_graphic_pane_g9_ParamLimits

0x09c5,	// (0x000009c5) aalist_double_graphic_pane_g9

0x09e9,	// (0x000009e9) aalist_double_graphic_pane_g10_ParamLimits

0x09e9,	// (0x000009e9) aalist_double_graphic_pane_g10

0x0a0d,	// (0x00000a0d) aalist_double_graphic_pane_g11_ParamLimits

0x0a0d,	// (0x00000a0d) aalist_double_graphic_pane_g11

0x000a,

0x2597,	// (0x00002597) aalist_double_graphic_pane_g_ParamLimits

0x2597,	// (0x00002597) aalist_double_graphic_pane_g

0x2329,	// (0x00002329) aalist_double_graphic_pane_t1_ParamLimits

0x2329,	// (0x00002329) aalist_double_graphic_pane_t1

0x234d,	// (0x0000234d) aalist_double_graphic_pane_t2_ParamLimits

0x234d,	// (0x0000234d) aalist_double_graphic_pane_t2

0x0001,

0x25ae,	// (0x000025ae) aalist_double_graphic_pane_t_ParamLimits

0x25ae,	// (0x000025ae) aalist_double_graphic_pane_t

0x239d,	// (0x0000239d) aalist_double_entry_pane_t1

0x23ab,	// (0x000023ab) aalist_entry_pane

0x2035,	// (0x00002035) aalist_entry_pane_t1

0x000c,	// (0x0000000c) input_focus_pane_cp001

0x1834,	// (0x00001834) aalist_double_progress_pane_g1_ParamLimits

0x1834,	// (0x00001834) aalist_double_progress_pane_g1

0x23b3,	// (0x000023b3) aalist_double_progress_pane_g2_ParamLimits

0x23b3,	// (0x000023b3) aalist_double_progress_pane_g2

0x23e3,	// (0x000023e3) aalist_double_progress_pane_g3_ParamLimits

0x23e3,	// (0x000023e3) aalist_double_progress_pane_g3

0x0002,

0x25b3,	// (0x000025b3) aalist_double_progress_pane_g_ParamLimits

0x25b3,	// (0x000025b3) aalist_double_progress_pane_g

0x2413,	// (0x00002413) aalist_double_progress_pane_t1_ParamLimits

0x2413,	// (0x00002413) aalist_double_progress_pane_t1

0x2437,	// (0x00002437) aalist_double_progress_pane_t2_ParamLimits

0x2437,	// (0x00002437) aalist_double_progress_pane_t2

0x20d9,	// (0x000020d9) aalist_double_progress_pane_t3_ParamLimits

0x20d9,	// (0x000020d9) aalist_double_progress_pane_t3

0x0002,

0x25ba,	// (0x000025ba) aalist_double_progress_pane_t_ParamLimits

0x25ba,	// (0x000025ba) aalist_double_progress_pane_t

0x245b,	// (0x0000245b) aalist_progress_pane_ParamLimits

0x245b,	// (0x0000245b) aalist_progress_pane

0x0b84,	// (0x00000b84) aalist_progress_pane_g1

0x0b8d,	// (0x00000b8d) aalist_progress_pane_g2

0x0b96,	// (0x00000b96) aalist_progress_pane_g3

0x0003,

0x1365,	// (0x00001365) aalist_progress_pane_g

0x192f,	// (0x0000192f) aalist_gene_ad_pane_g1

0x1938,	// (0x00001938) main_aa_empty_pane_t1

0x1946,	// (0x00001946) main_aa_empty_pane_t2

0x1954,	// (0x00001954) main_aa_empty_pane_t3

0x1962,	// (0x00001962) main_aa_empty_pane_t4

0x0003,

0x1e5e,	// (0x00001e5e) main_aa_empty_pane_t

0x0be2,	// (0x00000be2) aa_scroll_pane_cp001_ParamLimits

0x0be2,	// (0x00000be2) aa_scroll_pane_cp001

0x1970,	// (0x00001970) aa_taskswapper_pane_ParamLimits

0x1970,	// (0x00001970) aa_taskswapper_pane

0x0c13,	// (0x00000c13) aagrid_gene_pane_ParamLimits

0x0c13,	// (0x00000c13) aagrid_gene_pane

0x1986,	// (0x00001986) aagrid_cell_image_pane_ParamLimits

0x1986,	// (0x00001986) aagrid_cell_image_pane

0x1a5f,	// (0x00001a5f) aagrid_cell_image_pane_g1_ParamLimits

0x1a5f,	// (0x00001a5f) aagrid_cell_image_pane_g1

0x1a93,	// (0x00001a93) aagrid_cell_image_pane_g2_ParamLimits

0x1a93,	// (0x00001a93) aagrid_cell_image_pane_g2

0x1abf,	// (0x00001abf) aagrid_cell_image_pane_g3_ParamLimits

0x1abf,	// (0x00001abf) aagrid_cell_image_pane_g3

0x1ad8,	// (0x00001ad8) aagrid_cell_image_pane_g4_ParamLimits

0x1ad8,	// (0x00001ad8) aagrid_cell_image_pane_g4

0x0003,

0x1e67,	// (0x00001e67) aagrid_cell_image_pane_g_ParamLimits

0x1e67,	// (0x00001e67) aagrid_cell_image_pane_g

0x0d93,	// (0x00000d93) aagrid_cell_image_pane_t1_ParamLimits

0x0d93,	// (0x00000d93) aagrid_cell_image_pane_t1

0x0da5,	// (0x00000da5) grid_highlight_pane_cp001_ParamLimits

0x0da5,	// (0x00000da5) grid_highlight_pane_cp001

0x1aee,	// (0x00001aee) aa_taskswapper_pane_g1_ParamLimits

0x1aee,	// (0x00001aee) aa_taskswapper_pane_g1

0x1afb,	// (0x00001afb) aa_taskswapper_pane_t1_ParamLimits

0x1afb,	// (0x00001afb) aa_taskswapper_pane_t1

0x1b13,	// (0x00001b13) aatasksw_grid_pane_ParamLimits

0x1b13,	// (0x00001b13) aatasksw_grid_pane

0x1b2c,	// (0x00001b2c) aatasksw_cell_pane_ParamLimits

0x1b2c,	// (0x00001b2c) aatasksw_cell_pane

0x1b3f,	// (0x00001b3f) aatasksw_cell_pane_g1

0x000c,	// (0x0000000c) grid_highlight_pane_cp002

0x1b48,	// (0x00001b48) aamd_info_pane

0x1b51,	// (0x00001b51) aamd_list_pane

0x1b5d,	// (0x00001b5d) aamd_list_double_pane_ParamLimits

0x1b5d,	// (0x00001b5d) aamd_list_double_pane

0x1b6e,	// (0x00001b6e) aamd_list_single_pane_ParamLimits

0x1b6e,	// (0x00001b6e) aamd_list_single_pane

0x0e43,	// (0x00000e43) aamd_list_single_pane_g1_ParamLimits

0x0e43,	// (0x00000e43) aamd_list_single_pane_g1

0x1b85,	// (0x00001b85) aamd_list_single_pane_g2_ParamLimits

0x1b85,	// (0x00001b85) aamd_list_single_pane_g2

0x1b91,	// (0x00001b91) aamd_list_single_pane_g3_ParamLimits

0x1b91,	// (0x00001b91) aamd_list_single_pane_g3

0x0002,

0x1e70,	// (0x00001e70) aamd_list_single_pane_g_ParamLimits

0x1e70,	// (0x00001e70) aamd_list_single_pane_g

0x1ba9,	// (0x00001ba9) aamd_list_single_pane_t1_ParamLimits

0x1ba9,	// (0x00001ba9) aamd_list_single_pane_t1

0x0e43,	// (0x00000e43) aamd_list_double_pane_g1_ParamLimits

0x0e43,	// (0x00000e43) aamd_list_double_pane_g1

0x1bc3,	// (0x00001bc3) aamd_list_double_pane_g2_ParamLimits

0x1bc3,	// (0x00001bc3) aamd_list_double_pane_g2

0x1bcf,	// (0x00001bcf) aamd_list_double_pane_g3_ParamLimits

0x1bcf,	// (0x00001bcf) aamd_list_double_pane_g3

0x0002,

0x1e77,	// (0x00001e77) aamd_list_double_pane_g_ParamLimits

0x1e77,	// (0x00001e77) aamd_list_double_pane_g

0x1be7,	// (0x00001be7) aamd_list_double_pane_t1_ParamLimits

0x1be7,	// (0x00001be7) aamd_list_double_pane_t1

0x1bfe,	// (0x00001bfe) aamd_list_double_pane_t2_ParamLimits

0x1bfe,	// (0x00001bfe) aamd_list_double_pane_t2

0x0001,

0x1e7e,	// (0x00001e7e) aamd_list_double_pane_t_ParamLimits

0x1e7e,	// (0x00001e7e) aamd_list_double_pane_t

0x161b,	// (0x0000161b) aamd_info_pane_g1_ParamLimits

0x161b,	// (0x0000161b) aamd_info_pane_g1

0x1c15,	// (0x00001c15) aamd_info_pane_g2_ParamLimits

0x1c15,	// (0x00001c15) aamd_info_pane_g2

0x1c25,	// (0x00001c25) aamd_info_pane_g3_ParamLimits

0x1c25,	// (0x00001c25) aamd_info_pane_g3

0x0002,

0x1e83,	// (0x00001e83) aamd_info_pane_g_ParamLimits

0x1e83,	// (0x00001e83) aamd_info_pane_g

0x1c35,	// (0x00001c35) aamd_info_pane_t1_ParamLimits

0x1c35,	// (0x00001c35) aamd_info_pane_t1

0x1c51,	// (0x00001c51) aamd_info_pane_t2_ParamLimits

0x1c51,	// (0x00001c51) aamd_info_pane_t2

0x0f3c,	// (0x00000f3c) aamd_info_pane_t3_ParamLimits

0x0f3c,	// (0x00000f3c) aamd_info_pane_t3

0x0002,

0x1e8a,	// (0x00001e8a) aamd_info_pane_t_ParamLimits

0x1e8a,	// (0x00001e8a) aamd_info_pane_t

0x0f60,	// (0x00000f60) aaslider_bg_pane_g1

0x0f69,	// (0x00000f69) aaslider_bg_pane_g2

0x0001,

0x13a1,	// (0x000013a1) aaslider_bg_pane_g

0x0f72,	// (0x00000f72) aaslider_bg_pane_g2_copy1

0x1c7d,	// (0x00001c7d) aaslider_pane_ParamLimits

0x1c7d,	// (0x00001c7d) aaslider_pane

0x0fa1,	// (0x00000fa1) aaslider_bg_pane_cp001_ParamLimits

0x0fa1,	// (0x00000fa1) aaslider_bg_pane_cp001

0x0fd5,	// (0x00000fd5) aaslider_pane_g1_ParamLimits

0x0fd5,	// (0x00000fd5) aaslider_pane_g1

0x0fef,	// (0x00000fef) aaslider_pane_g2_ParamLimits

0x0fef,	// (0x00000fef) aaslider_pane_g2

0x1013,	// (0x00001013) aaslider_pane_g3_ParamLimits

0x1013,	// (0x00001013) aaslider_pane_g3

0x0004,

0x13a6,	// (0x000013a6) aaslider_pane_g_ParamLimits

0x13a6,	// (0x000013a6) aaslider_pane_g

0x1045,	// (0x00001045) aaslider_pane_t1_ParamLimits

0x1045,	// (0x00001045) aaslider_pane_t1

0x105b,	// (0x0000105b) aaslider_pane_t2_ParamLimits

0x105b,	// (0x0000105b) aaslider_pane_t2

0x1071,	// (0x00001071) aaslider_pane_t3_ParamLimits

0x1071,	// (0x00001071) aaslider_pane_t3

0x0002,

0x13b1,	// (0x000013b1) aaslider_pane_t_ParamLimits

0x13b1,	// (0x000013b1) aaslider_pane_t

0x108f,	// (0x0000108f) aid_touch_size_slider_marker_ParamLimits

0x108f,	// (0x0000108f) aid_touch_size_slider_marker

0x168e,	// (0x0000168e) aalist_list_sub_pane_ParamLimits

0x168e,	// (0x0000168e) aalist_list_sub_pane

0x082c,	// (0x0000082c) aalist_single_pane_g3_ParamLimits

0x082c,	// (0x0000082c) aalist_single_pane_g3

0x0838,	// (0x00000838) aalist_single_pane_g4_ParamLimits

0x0838,	// (0x00000838) aalist_single_pane_g4

0x00a5,	// (0x000000a5) list_highlight_pane_cp001

0x10f4,	// (0x000010f4) aalist_list_sub_pane_g1_ParamLimits

0x10f4,	// (0x000010f4) aalist_list_sub_pane_g1

0x1100,	// (0x00001100) aalist_list_sub_pane_g2_ParamLimits

0x1100,	// (0x00001100) aalist_list_sub_pane_g2

0x1cb4,	// (0x00001cb4) aalist_list_sub_pane_g3_ParamLimits

0x1cb4,	// (0x00001cb4) aalist_list_sub_pane_g3

0x247d,	// (0x0000247d) aalist_list_sub_pane_g4_ParamLimits

0x247d,	// (0x0000247d) aalist_list_sub_pane_g4

0x2489,	// (0x00002489) aalist_list_sub_pane_g5_ParamLimits

0x2489,	// (0x00002489) aalist_list_sub_pane_g5

0x24b9,	// (0x000024b9) aalist_list_sub_pane_g7_ParamLimits

0x24b9,	// (0x000024b9) aalist_list_sub_pane_g7

0x0005,

0x25c1,	// (0x000025c1) aalist_list_sub_pane_g_ParamLimits

0x25c1,	// (0x000025c1) aalist_list_sub_pane_g

0x24f1,	// (0x000024f1) aalist_list_sub_pane_t1_ParamLimits

0x24f1,	// (0x000024f1) aalist_list_sub_pane_t1

0x2506,	// (0x00002506) aalist_list_sub_pane_t2_ParamLimits

0x2506,	// (0x00002506) aalist_list_sub_pane_t2

0x0001,

0x25ce,	// (0x000025ce) aalist_list_sub_pane_t_ParamLimits

0x25ce,	// (0x000025ce) aalist_list_sub_pane_t

0x03de,	// (0x000003de) main_aa_coverflow_pane_ParamLimits

0x00b3,	// (0x000000b3) main_aa_metadata_pane_ParamLimits

0x16ca,	// (0x000016ca) aalist_single_pane_g5_ParamLimits

0x16ca,	// (0x000016ca) aalist_single_pane_g5

0x00a5,	// (0x000000a5) list_highlight_pane_cp001_ParamLimits

0x06b0,	// (0x000006b0) aacf_slider_pane_ParamLimits

0x000c,	// (0x0000000c) main_aa_video_pane

0x1671,	// (0x00001671) aid_size_touch_aascroll_bar

0x167b,	// (0x0000167b) aalist_single_large_graphic_pane_ParamLimits

0x167b,	// (0x0000167b) aalist_single_large_graphic_pane

0x1025,	// (0x00001025) aaslider_pane_g4_ParamLimits

0x1025,	// (0x00001025) aaslider_pane_g4

0x1035,	// (0x00001035) aaslider_pane_g5_ParamLimits

0x1035,	// (0x00001035) aaslider_pane_g5

0x10b3,	// (0x000010b3) aid_touch_size_slider_max_ParamLimits

0x10b3,	// (0x000010b3) aid_touch_size_slider_max

0x1ca0,	// (0x00001ca0) aid_touch_size_slider_min_ParamLimits

0x1ca0,	// (0x00001ca0) aid_touch_size_slider_min

0x1dc5,	// (0x00001dc5) aalist_single_large_graphic_pane_g1_ParamLimits

0x1dc5,	// (0x00001dc5) aalist_single_large_graphic_pane_g1

0x1dd2,	// (0x00001dd2) aalist_single_large_graphic_pane_g2_ParamLimits

0x1dd2,	// (0x00001dd2) aalist_single_large_graphic_pane_g2

0x1dde,	// (0x00001dde) aalist_single_large_graphic_pane_g3_ParamLimits

0x1dde,	// (0x00001dde) aalist_single_large_graphic_pane_g3

0x0002,

0x1ea3,	// (0x00001ea3) aalist_single_large_graphic_pane_g_ParamLimits

0x1ea3,	// (0x00001ea3) aalist_single_large_graphic_pane_g

0x1df2,	// (0x00001df2) aalist_single_large_graphic_pane_t1_ParamLimits

0x1df2,	// (0x00001df2) aalist_single_large_graphic_pane_t1

0x1e08,	// (0x00001e08) main_aa_video_pane_g1_ParamLimits

0x1e08,	// (0x00001e08) main_aa_video_pane_g1

0x06bd,	// (0x000006bd) main_aa_coverflow_pane_g1

0x07ff,	// (0x000007ff) aid_size_min_handle_cp002

0x0098,	// (0x00000098) popup_toolbar2_fixed_window_cp001_ParamLimits

0x00b3,	// (0x000000b3) main_aa_slider_pane_ParamLimits

0x07ff,	// (0x000007ff) aid_size_min_handle_cp001

0x10d9,	// (0x000010d9) aaslider_bg_pane_cp001_g1

0x10e2,	// (0x000010e2) aaslider_bg_pane_cp001_g2

0x10eb,	// (0x000010eb) aaslider_bg_pane_cp001_g3

0x0002,

0x13b8,	// (0x000013b8) aaslider_bg_pane_cp001_g

0x0b84,	// (0x00000b84) aalist_progress_pane_g4

0x1087,	// (0x00001087) aid_aaslider_pane_rect_inner
};


const AknLayoutScalable_UiAccel::SCdlImpl KCdlImpl = 
	{
	&GetComponentTypeById,
	&GetParamLimitsById,
	&GetWindowComponentById,
	&GetTextComponentById,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Elaf_hvl4_c_vga4_lsc_tch_Small
