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

#include "aknlayoutscalable_abrw_hhp_c_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_UiAccel { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_hhp_c_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_hhp_c_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_UiAccel::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_UiAccel::KByteCodedData_AknLayoutScalable_Elaf_hhp_c_qhd_prt_tch + 0x00000000 };

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

0x0000,	// (0x00000000) Screen

0x000c,	// (0x0000000c) application_window

0x0016,	// (0x00000016) area_bottom_pane_ParamLimits

0x0016,	// (0x00000016) area_bottom_pane

0x0046,	// (0x00000046) area_top_pane_ParamLimits

0x0046,	// (0x00000046) area_top_pane

0x005c,	// (0x0000005c) main_pane_ParamLimits

0x005c,	// (0x0000005c) main_pane

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

0x1261,	// (0x00001261) hc_list_single_pane_g_ParamLimits

0x1261,	// (0x00001261) hc_list_single_pane_g

0x01fa,	// (0x000001fa) hc_list_single_pane_t1_ParamLimits

0x01fa,	// (0x000001fa) hc_list_single_pane_t1

0x0211,	// (0x00000211) hc_list_single_graphic_pane_g1_ParamLimits

0x0211,	// (0x00000211) hc_list_single_graphic_pane_g1

0x021d,	// (0x0000021d) hc_list_single_graphic_pane_g2_ParamLimits

0x021d,	// (0x0000021d) hc_list_single_graphic_pane_g2

0x01e6,	// (0x000001e6) hc_list_single_graphic_pane_g3_ParamLimits

0x01e6,	// (0x000001e6) hc_list_single_graphic_pane_g3

0x0002,

0x1266,	// (0x00001266) hc_list_single_graphic_pane_g_ParamLimits

0x1266,	// (0x00001266) hc_list_single_graphic_pane_g

0x022c,	// (0x0000022c) hc_list_single_graphic_pane_t1_ParamLimits

0x022c,	// (0x0000022c) hc_list_single_graphic_pane_t1

0x01da,	// (0x000001da) hc_list_single_heading_pane_g1_ParamLimits

0x01da,	// (0x000001da) hc_list_single_heading_pane_g1

0x01e6,	// (0x000001e6) hc_list_single_heading_pane_g2_ParamLimits

0x01e6,	// (0x000001e6) hc_list_single_heading_pane_g2

0x0001,

0x1261,	// (0x00001261) hc_list_single_heading_pane_g_ParamLimits

0x1261,	// (0x00001261) hc_list_single_heading_pane_g

0x0242,	// (0x00000242) hc_list_single_heading_pane_t1_ParamLimits

0x0242,	// (0x00000242) hc_list_single_heading_pane_t1

0x0254,	// (0x00000254) hc_list_single_heading_pane_t2_ParamLimits

0x0254,	// (0x00000254) hc_list_single_heading_pane_t2

0x0001,

0x126d,	// (0x0000126d) hc_list_single_heading_pane_t_ParamLimits

0x126d,	// (0x0000126d) hc_list_single_heading_pane_t

0x026a,	// (0x0000026a) hc_list_single_large_graphic_pane_g1_ParamLimits

0x026a,	// (0x0000026a) hc_list_single_large_graphic_pane_g1

0x0276,	// (0x00000276) hc_list_single_large_graphic_pane_g2_ParamLimits

0x0276,	// (0x00000276) hc_list_single_large_graphic_pane_g2

0x0282,	// (0x00000282) hc_list_single_large_graphic_pane_g3_ParamLimits

0x0282,	// (0x00000282) hc_list_single_large_graphic_pane_g3

0x0002,

0x1272,	// (0x00001272) hc_list_single_large_graphic_pane_g_ParamLimits

0x1272,	// (0x00001272) hc_list_single_large_graphic_pane_g

0x0296,	// (0x00000296) hc_list_single_large_graphic_pane_t1_ParamLimits

0x0296,	// (0x00000296) hc_list_single_large_graphic_pane_t1

0x01da,	// (0x000001da) hc_list_double_pane_g1_ParamLimits

0x01da,	// (0x000001da) hc_list_double_pane_g1

0x01e6,	// (0x000001e6) hc_list_double_pane_g2_ParamLimits

0x01e6,	// (0x000001e6) hc_list_double_pane_g2

0x0001,

0x1261,	// (0x00001261) hc_list_double_pane_g_ParamLimits

0x1261,	// (0x00001261) hc_list_double_pane_g

0x02ac,	// (0x000002ac) hc_list_double_pane_t1_ParamLimits

0x02ac,	// (0x000002ac) hc_list_double_pane_t1

0x02c2,	// (0x000002c2) hc_list_double_pane_t2_ParamLimits

0x02c2,	// (0x000002c2) hc_list_double_pane_t2

0x0001,

0x1279,	// (0x00001279) hc_list_double_pane_t_ParamLimits

0x1279,	// (0x00001279) hc_list_double_pane_t

0x0211,	// (0x00000211) hc_list_double_graphic_pane_g1_ParamLimits

0x0211,	// (0x00000211) hc_list_double_graphic_pane_g1

0x01da,	// (0x000001da) hc_list_double_graphic_pane_g2_ParamLimits

0x01da,	// (0x000001da) hc_list_double_graphic_pane_g2

0x01e6,	// (0x000001e6) hc_list_double_graphic_pane_g3_ParamLimits

0x01e6,	// (0x000001e6) hc_list_double_graphic_pane_g3

0x0002,

0x127e,	// (0x0000127e) hc_list_double_graphic_pane_g_ParamLimits

0x127e,	// (0x0000127e) hc_list_double_graphic_pane_g

0x022c,	// (0x0000022c) hc_list_double_graphic_pane_t1_ParamLimits

0x022c,	// (0x0000022c) hc_list_double_graphic_pane_t1

0x02d4,	// (0x000002d4) hc_list_double_graphic_pane_t2_ParamLimits

0x02d4,	// (0x000002d4) hc_list_double_graphic_pane_t2

0x0001,

0x1285,	// (0x00001285) hc_list_double_graphic_pane_t_ParamLimits

0x1285,	// (0x00001285) hc_list_double_graphic_pane_t

0x02e6,	// (0x000002e6) hc_list_double_heading_pane_g1_ParamLimits

0x02e6,	// (0x000002e6) hc_list_double_heading_pane_g1

0x02f2,	// (0x000002f2) hc_list_double_heading_pane_g2_ParamLimits

0x02f2,	// (0x000002f2) hc_list_double_heading_pane_g2

0x0001,

0x128a,	// (0x0000128a) hc_list_double_heading_pane_g_ParamLimits

0x128a,	// (0x0000128a) hc_list_double_heading_pane_g

0x0306,	// (0x00000306) hc_list_double_heading_pane_t1_ParamLimits

0x0306,	// (0x00000306) hc_list_double_heading_pane_t1

0x0318,	// (0x00000318) hc_list_double_heading_pane_t2_ParamLimits

0x0318,	// (0x00000318) hc_list_double_heading_pane_t2

0x0001,

0x128f,	// (0x0000128f) hc_list_double_heading_pane_t_ParamLimits

0x128f,	// (0x0000128f) hc_list_double_heading_pane_t

0x032e,	// (0x0000032e) hc_list_double_large_graphic_pane_g1_ParamLimits

0x032e,	// (0x0000032e) hc_list_double_large_graphic_pane_g1

0x01da,	// (0x000001da) hc_list_double_large_graphic_pane_g2_ParamLimits

0x01da,	// (0x000001da) hc_list_double_large_graphic_pane_g2

0x01e6,	// (0x000001e6) hc_list_double_large_graphic_pane_g3_ParamLimits

0x01e6,	// (0x000001e6) hc_list_double_large_graphic_pane_g3

0x0002,

0x1294,	// (0x00001294) hc_list_double_large_graphic_pane_g_ParamLimits

0x1294,	// (0x00001294) hc_list_double_large_graphic_pane_g

0x033a,	// (0x0000033a) hc_list_double_large_graphic_pane_t1_ParamLimits

0x033a,	// (0x0000033a) hc_list_double_large_graphic_pane_t1

0x0350,	// (0x00000350) hc_list_double_large_graphic_pane_t2_ParamLimits

0x0350,	// (0x00000350) hc_list_double_large_graphic_pane_t2

0x0001,

0x129b,	// (0x0000129b) hc_list_double_large_graphic_pane_t_ParamLimits

0x129b,	// (0x0000129b) hc_list_double_large_graphic_pane_t

0x01da,	// (0x000001da) hc_list_double2_pane_g1_ParamLimits

0x01da,	// (0x000001da) hc_list_double2_pane_g1

0x01e6,	// (0x000001e6) hc_list_double2_pane_g2_ParamLimits

0x01e6,	// (0x000001e6) hc_list_double2_pane_g2

0x0001,

0x1261,	// (0x00001261) hc_list_double2_pane_g_ParamLimits

0x1261,	// (0x00001261) hc_list_double2_pane_g

0x02ac,	// (0x000002ac) hc_list_double2_pane_t1_ParamLimits

0x02ac,	// (0x000002ac) hc_list_double2_pane_t1

0x0362,	// (0x00000362) hc_list_double2_pane_t2_ParamLimits

0x0362,	// (0x00000362) hc_list_double2_pane_t2

0x0001,

0x12a0,	// (0x000012a0) hc_list_double2_pane_t_ParamLimits

0x12a0,	// (0x000012a0) hc_list_double2_pane_t

0x0211,	// (0x00000211) hc_list_double2_graphic_pane_g1_ParamLimits

0x0211,	// (0x00000211) hc_list_double2_graphic_pane_g1

0x01da,	// (0x000001da) hc_list_double2_graphic_pane_g2_ParamLimits

0x01da,	// (0x000001da) hc_list_double2_graphic_pane_g2

0x01e6,	// (0x000001e6) hc_list_double2_graphic_pane_g3_ParamLimits

0x01e6,	// (0x000001e6) hc_list_double2_graphic_pane_g3

0x0002,

0x127e,	// (0x0000127e) hc_list_double2_graphic_pane_g_ParamLimits

0x127e,	// (0x0000127e) hc_list_double2_graphic_pane_g

0x022c,	// (0x0000022c) hc_list_double2_graphic_pane_t1_ParamLimits

0x022c,	// (0x0000022c) hc_list_double2_graphic_pane_t1

0x0374,	// (0x00000374) hc_list_double2_graphic_pane_t2_ParamLimits

0x0374,	// (0x00000374) hc_list_double2_graphic_pane_t2

0x0001,

0x12a5,	// (0x000012a5) hc_list_double2_graphic_pane_t_ParamLimits

0x12a5,	// (0x000012a5) hc_list_double2_graphic_pane_t

0x026a,	// (0x0000026a) hc_list_double2_large_graphic_pane_g1_ParamLimits

0x026a,	// (0x0000026a) hc_list_double2_large_graphic_pane_g1

0x01da,	// (0x000001da) hc_list_double2_large_graphic_pane_g2_ParamLimits

0x01da,	// (0x000001da) hc_list_double2_large_graphic_pane_g2

0x01e6,	// (0x000001e6) hc_list_double2_large_graphic_pane_g3_ParamLimits

0x01e6,	// (0x000001e6) hc_list_double2_large_graphic_pane_g3

0x0002,

0x12aa,	// (0x000012aa) hc_list_double2_large_graphic_pane_g_ParamLimits

0x12aa,	// (0x000012aa) hc_list_double2_large_graphic_pane_g

0x033a,	// (0x0000033a) hc_list_double2_large_graphic_pane_t1_ParamLimits

0x033a,	// (0x0000033a) hc_list_double2_large_graphic_pane_t1

0x0386,	// (0x00000386) hc_list_double2_large_graphic_pane_t2_ParamLimits

0x0386,	// (0x00000386) hc_list_double2_large_graphic_pane_t2

0x0001,

0x12b1,	// (0x000012b1) hc_list_double2_large_graphic_pane_t_ParamLimits

0x12b1,	// (0x000012b1) hc_list_double2_large_graphic_pane_t

0x000c,	// (0x0000000c) main_hc_button_pane

0x00c1,	// (0x000000c1) aid_hc_size_touch_scroll_bar_ParamLimits

0x00c1,	// (0x000000c1) aid_hc_size_touch_scroll_bar

0x00e2,	// (0x000000e2) aid_hc_size_touch_scroll_bar_cp01_ParamLimits

0x00e2,	// (0x000000e2) aid_hc_size_touch_scroll_bar_cp01

0x0101,	// (0x00000101) hc_popup_scroll_hotspot_window

0x0109,	// (0x00000109) hc_scroll_pane_ParamLimits

0x0139,	// (0x00000139) hc_scroll_pane_cp01_ParamLimits

0x0139,	// (0x00000139) hc_scroll_pane_cp01

0x014f,	// (0x0000014f) main_hc_listscroll_pane_g1_ParamLimits

0x014f,	// (0x0000014f) main_hc_listscroll_pane_g1

0x0161,	// (0x00000161) main_hc_listscroll_pane_g2_ParamLimits

0x0161,	// (0x00000161) main_hc_listscroll_pane_g2

0x0001,

0x125c,	// (0x0000125c) main_hc_listscroll_pane_g_ParamLimits

0x125c,	// (0x0000125c) main_hc_listscroll_pane_g

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

0x12b6,	// (0x000012b6) hc_scroll_bg_pane_g_ParamLimits

0x12b6,	// (0x000012b6) hc_scroll_bg_pane_g

0x01c6,	// (0x000001c6) hc_scroll_handle_pane_g1_ParamLimits

0x01c6,	// (0x000001c6) hc_scroll_handle_pane_g1

0x0398,	// (0x00000398) hc_scroll_handle_pane_g2_ParamLimits

0x0398,	// (0x00000398) hc_scroll_handle_pane_g2

0x03b0,	// (0x000003b0) hc_scroll_handle_pane_g3_ParamLimits

0x03b0,	// (0x000003b0) hc_scroll_handle_pane_g3

0x0002,

0x12b6,	// (0x000012b6) hc_scroll_handle_pane_g_ParamLimits

0x12b6,	// (0x000012b6) hc_scroll_handle_pane_g

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

0x12bd,	// (0x000012bd) bg_hc_button_pane_g

0x0211,	// (0x00000211) hc_list_double_graphic_heading_pane_g1_ParamLimits

0x0211,	// (0x00000211) hc_list_double_graphic_heading_pane_g1

0x02e6,	// (0x000002e6) hc_list_double_graphic_heading_pane_g2_ParamLimits

0x02e6,	// (0x000002e6) hc_list_double_graphic_heading_pane_g2

0x02f2,	// (0x000002f2) hc_list_double_graphic_heading_pane_g3_ParamLimits

0x02f2,	// (0x000002f2) hc_list_double_graphic_heading_pane_g3

0x0002,

0x12d0,	// (0x000012d0) hc_list_double_graphic_heading_pane_g_ParamLimits

0x12d0,	// (0x000012d0) hc_list_double_graphic_heading_pane_g

0x046d,	// (0x0000046d) hc_list_double_graphic_heading_pane_t1_ParamLimits

0x046d,	// (0x0000046d) hc_list_double_graphic_heading_pane_t1

0x047f,	// (0x0000047f) hc_list_double_graphic_heading_pane_t2_ParamLimits

0x047f,	// (0x0000047f) hc_list_double_graphic_heading_pane_t2

0x0001,

0x12d7,	// (0x000012d7) hc_list_double_graphic_heading_pane_t_ParamLimits

0x12d7,	// (0x000012d7) hc_list_double_graphic_heading_pane_t

0x000c,	// (0x0000000c) main_hc_gridscroll_pane

0x000c,	// (0x0000000c) bg_hc_highlight_list_pane

0x0495,	// (0x00000495) aid_hc_grid_cell_size_ParamLimits

0x0495,	// (0x00000495) aid_hc_grid_cell_size

0x04ab,	// (0x000004ab) hc_scroll_pane_cp02_ParamLimits

0x04ab,	// (0x000004ab) hc_scroll_pane_cp02

0x04b8,	// (0x000004b8) main_hc_grid_pane_ParamLimits

0x04b8,	// (0x000004b8) main_hc_grid_pane

0x04dc,	// (0x000004dc) cell_hc_grid_pane_ParamLimits

0x04dc,	// (0x000004dc) cell_hc_grid_pane

0x0514,	// (0x00000514) bg_hc_highlight_grid_pane_ParamLimits

0x0514,	// (0x00000514) bg_hc_highlight_grid_pane

0x0522,	// (0x00000522) cell_hc_grid_pane_g1_ParamLimits

0x0522,	// (0x00000522) cell_hc_grid_pane_g1

0x053b,	// (0x0000053b) cell_hc_grid_pane_t1_ParamLimits

0x053b,	// (0x0000053b) cell_hc_grid_pane_t1

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

0x12dc,	// (0x000012dc) bg_hc_highlight_grid_pane_g_ParamLimits

0x12dc,	// (0x000012dc) bg_hc_highlight_grid_pane_g

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

0x12f1,	// (0x000012f1) bg_hc_highlight_list_pane_g_ParamLimits

0x12f1,	// (0x000012f1) bg_hc_highlight_list_pane_g

0x002f,	// (0x0000002f) area_side_right_pane_ParamLimits

0x002f,	// (0x0000002f) area_side_right_pane

0x0098,	// (0x00000098) popup_toolbar2_fixed_window_cp001

0x00a5,	// (0x000000a5) main_aa_coverflow_pane

0x000c,	// (0x0000000c) main_aa_empty_pane

0x000c,	// (0x0000000c) main_aa_fastscroll_pane

0x00a5,	// (0x000000a5) main_aa_gridscroll_pane_ParamLimits

0x00a5,	// (0x000000a5) main_aa_gridscroll_pane

0x000c,	// (0x0000000c) main_aa_listscroll_pane

0x00b3,	// (0x000000b3) main_aa_metadata_pane

0x00b3,	// (0x000000b3) main_aa_slider_pane

0x05d3,	// (0x000005d3) aacf_image_pane_ParamLimits

0x05d3,	// (0x000005d3) aacf_image_pane

0x0615,	// (0x00000615) aacf_image_pane_cp001_ParamLimits

0x0615,	// (0x00000615) aacf_image_pane_cp001

0x0643,	// (0x00000643) aacf_image_pane_cp002_ParamLimits

0x0643,	// (0x00000643) aacf_image_pane_cp002

0x069b,	// (0x0000069b) aacf_slider_pane

0x06b0,	// (0x000006b0) main_aa_coverflow_pane_t1_ParamLimits

0x06b0,	// (0x000006b0) main_aa_coverflow_pane_t1

0x06c2,	// (0x000006c2) aacf_image_pane_g1_ParamLimits

0x06c2,	// (0x000006c2) aacf_image_pane_g1

0x0671,	// (0x00000671) aacf_image_title_pane_ParamLimits

0x0671,	// (0x00000671) aacf_image_title_pane

0x06d1,	// (0x000006d1) aacf_slider_pane_g1

0x06d9,	// (0x000006d9) aacf_slider_pane_g1_cp001

0x06e1,	// (0x000006e1) aaslider_bg_pane

0x06e9,	// (0x000006e9) aacf_image_title_pane_g1_ParamLimits

0x06e9,	// (0x000006e9) aacf_image_title_pane_g1

0x06f7,	// (0x000006f7) aacf_image_title_pane_t1_ParamLimits

0x06f7,	// (0x000006f7) aacf_image_title_pane_t1

0x0709,	// (0x00000709) aacf_image_title_pane_t2_ParamLimits

0x0709,	// (0x00000709) aacf_image_title_pane_t2

0x0001,

0x1306,	// (0x00001306) aacf_image_title_pane_t_ParamLimits

0x1306,	// (0x00001306) aacf_image_title_pane_t

0x071b,	// (0x0000071b) aafs_strip_pane_ParamLimits

0x071b,	// (0x0000071b) aafs_strip_pane

0x072e,	// (0x0000072e) main_aa_fastscroll_pane_g1_ParamLimits

0x072e,	// (0x0000072e) main_aa_fastscroll_pane_g1

0x073d,	// (0x0000073d) main_aa_fastscroll_pane_g2_ParamLimits

0x073d,	// (0x0000073d) main_aa_fastscroll_pane_g2

0x0001,

0x130b,	// (0x0000130b) main_aa_fastscroll_pane_g_ParamLimits

0x130b,	// (0x0000130b) main_aa_fastscroll_pane_g

0x074c,	// (0x0000074c) aafs_strip_grid_pane_ParamLimits

0x074c,	// (0x0000074c) aafs_strip_grid_pane

0x00b3,	// (0x000000b3) aafs_strip_shadow_pane_ParamLimits

0x00b3,	// (0x000000b3) aafs_strip_shadow_pane

0x075a,	// (0x0000075a) aafs_strip_grid_pane_g1_ParamLimits

0x075a,	// (0x0000075a) aafs_strip_grid_pane_g1

0x0793,	// (0x00000793) aa_scroll_pane

0x079c,	// (0x0000079c) aalist_gene_pane_ParamLimits

0x079c,	// (0x0000079c) aalist_gene_pane

0x07b6,	// (0x000007b6) aalist_double_entry_pane_ParamLimits

0x07b6,	// (0x000007b6) aalist_double_entry_pane

0x07b6,	// (0x000007b6) aalist_double_graphic_pane_ParamLimits

0x07b6,	// (0x000007b6) aalist_double_graphic_pane

0x07b6,	// (0x000007b6) aalist_double_pane_ParamLimits

0x07b6,	// (0x000007b6) aalist_double_pane

0x07b6,	// (0x000007b6) aalist_double_progress_pane_ParamLimits

0x07b6,	// (0x000007b6) aalist_double_progress_pane

0x07b6,	// (0x000007b6) aalist_gene_ad_pane_ParamLimits

0x07b6,	// (0x000007b6) aalist_gene_ad_pane

0x07d0,	// (0x000007d0) aalist_single_pane_ParamLimits

0x07d0,	// (0x000007d0) aalist_single_pane

0x1dbd,	// (0x00001dbd) aalist_single_pane_g1_ParamLimits

0x1dbd,	// (0x00001dbd) aalist_single_pane_g1

0x1dc9,	// (0x00001dc9) aalist_single_pane_g2_ParamLimits

0x1dc9,	// (0x00001dc9) aalist_single_pane_g2

0x0004,

0x20d6,	// (0x000020d6) aalist_single_pane_g_ParamLimits

0x20d6,	// (0x000020d6) aalist_single_pane_g

0x1de1,	// (0x00001de1) aalist_single_pane_t1_ParamLimits

0x1de1,	// (0x00001de1) aalist_single_pane_t1

0x1dff,	// (0x00001dff) aalist_double_pane_g1_ParamLimits

0x1dff,	// (0x00001dff) aalist_double_pane_g1

0x1e0b,	// (0x00001e0b) aalist_double_pane_g2_ParamLimits

0x1e0b,	// (0x00001e0b) aalist_double_pane_g2

0x0001,

0x20e1,	// (0x000020e1) aalist_double_pane_g_ParamLimits

0x20e1,	// (0x000020e1) aalist_double_pane_g

0x1e1f,	// (0x00001e1f) aalist_double_pane_t1_ParamLimits

0x1e1f,	// (0x00001e1f) aalist_double_pane_t1

0x1e35,	// (0x00001e35) aalist_double_pane_t2_ParamLimits

0x1e35,	// (0x00001e35) aalist_double_pane_t2

0x0001,

0x20e6,	// (0x000020e6) aalist_double_pane_t_ParamLimits

0x20e6,	// (0x000020e6) aalist_double_pane_t

0x08ad,	// (0x000008ad) aalist_double_graphic_pane_g1_ParamLimits

0x08ad,	// (0x000008ad) aalist_double_graphic_pane_g1

0x1e47,	// (0x00001e47) aalist_double_graphic_pane_g2_ParamLimits

0x1e47,	// (0x00001e47) aalist_double_graphic_pane_g2

0x1e67,	// (0x00001e67) aalist_double_graphic_pane_g3_ParamLimits

0x1e67,	// (0x00001e67) aalist_double_graphic_pane_g3

0x08fe,	// (0x000008fe) aalist_double_graphic_pane_g4_ParamLimits

0x08fe,	// (0x000008fe) aalist_double_graphic_pane_g4

0x091e,	// (0x0000091e) aalist_double_graphic_pane_g5_ParamLimits

0x091e,	// (0x0000091e) aalist_double_graphic_pane_g5

0x093e,	// (0x0000093e) aalist_double_graphic_pane_g6_ParamLimits

0x093e,	// (0x0000093e) aalist_double_graphic_pane_g6

0x096b,	// (0x0000096b) aalist_double_graphic_pane_g7_ParamLimits

0x096b,	// (0x0000096b) aalist_double_graphic_pane_g7

0x0998,	// (0x00000998) aalist_double_graphic_pane_g8_ParamLimits

0x0998,	// (0x00000998) aalist_double_graphic_pane_g8

0x09bc,	// (0x000009bc) aalist_double_graphic_pane_g9_ParamLimits

0x09bc,	// (0x000009bc) aalist_double_graphic_pane_g9

0x09e0,	// (0x000009e0) aalist_double_graphic_pane_g10_ParamLimits

0x09e0,	// (0x000009e0) aalist_double_graphic_pane_g10

0x0a04,	// (0x00000a04) aalist_double_graphic_pane_g11_ParamLimits

0x0a04,	// (0x00000a04) aalist_double_graphic_pane_g11

0x000a,

0x20eb,	// (0x000020eb) aalist_double_graphic_pane_g_ParamLimits

0x20eb,	// (0x000020eb) aalist_double_graphic_pane_g

0x1e83,	// (0x00001e83) aalist_double_graphic_pane_t1_ParamLimits

0x1e83,	// (0x00001e83) aalist_double_graphic_pane_t1

0x1e9d,	// (0x00001e9d) aalist_double_graphic_pane_t2_ParamLimits

0x1e9d,	// (0x00001e9d) aalist_double_graphic_pane_t2

0x0001,

0x2102,	// (0x00002102) aalist_double_graphic_pane_t_ParamLimits

0x2102,	// (0x00002102) aalist_double_graphic_pane_t

0x1edd,	// (0x00001edd) aalist_double_entry_pane_t1

0x1eeb,	// (0x00001eeb) aalist_entry_pane

0x1ef3,	// (0x00001ef3) aalist_entry_pane_t1

0x000c,	// (0x0000000c) input_focus_pane_cp001

0x0a80,	// (0x00000a80) aalist_double_progress_pane_g1_ParamLimits

0x0a80,	// (0x00000a80) aalist_double_progress_pane_g1

0x1f01,	// (0x00001f01) aalist_double_progress_pane_g2_ParamLimits

0x1f01,	// (0x00001f01) aalist_double_progress_pane_g2

0x1f31,	// (0x00001f31) aalist_double_progress_pane_g3_ParamLimits

0x1f31,	// (0x00001f31) aalist_double_progress_pane_g3

0x0002,

0x2107,	// (0x00002107) aalist_double_progress_pane_g_ParamLimits

0x2107,	// (0x00002107) aalist_double_progress_pane_g

0x1f61,	// (0x00001f61) aalist_double_progress_pane_t1_ParamLimits

0x1f61,	// (0x00001f61) aalist_double_progress_pane_t1

0x1f85,	// (0x00001f85) aalist_double_progress_pane_t2_ParamLimits

0x1f85,	// (0x00001f85) aalist_double_progress_pane_t2

0x1f97,	// (0x00001f97) aalist_double_progress_pane_t3_ParamLimits

0x1f97,	// (0x00001f97) aalist_double_progress_pane_t3

0x0002,

0x210e,	// (0x0000210e) aalist_double_progress_pane_t_ParamLimits

0x210e,	// (0x0000210e) aalist_double_progress_pane_t

0x1fa9,	// (0x00001fa9) aalist_progress_pane_ParamLimits

0x1fa9,	// (0x00001fa9) aalist_progress_pane

0x0b7c,	// (0x00000b7c) aalist_progress_pane_g1

0x0b85,	// (0x00000b85) aalist_progress_pane_g2

0x0b8e,	// (0x00000b8e) aalist_progress_pane_g3

0x0003,

0x134f,	// (0x0000134f) aalist_progress_pane_g

0x0b97,	// (0x00000b97) aalist_gene_ad_pane_g1

0x0ba0,	// (0x00000ba0) main_aa_empty_pane_t1

0x0bae,	// (0x00000bae) main_aa_empty_pane_t2

0x0bbc,	// (0x00000bbc) main_aa_empty_pane_t3

0x0bca,	// (0x00000bca) main_aa_empty_pane_t4

0x0003,

0x1358,	// (0x00001358) main_aa_empty_pane_t

0x0bda,	// (0x00000bda) aa_scroll_pane_cp001_ParamLimits

0x0bda,	// (0x00000bda) aa_scroll_pane_cp001

0x0bfd,	// (0x00000bfd) aa_taskswapper_pane_ParamLimits

0x0bfd,	// (0x00000bfd) aa_taskswapper_pane

0x0c0b,	// (0x00000c0b) aagrid_gene_pane_ParamLimits

0x0c0b,	// (0x00000c0b) aagrid_gene_pane

0x0c29,	// (0x00000c29) aagrid_cell_image_pane_ParamLimits

0x0c29,	// (0x00000c29) aagrid_cell_image_pane

0x0cf3,	// (0x00000cf3) aagrid_cell_image_pane_g1_ParamLimits

0x0cf3,	// (0x00000cf3) aagrid_cell_image_pane_g1

0x0d27,	// (0x00000d27) aagrid_cell_image_pane_g2_ParamLimits

0x0d27,	// (0x00000d27) aagrid_cell_image_pane_g2

0x0d53,	// (0x00000d53) aagrid_cell_image_pane_g3_ParamLimits

0x0d53,	// (0x00000d53) aagrid_cell_image_pane_g3

0x0d6c,	// (0x00000d6c) aagrid_cell_image_pane_g4_ParamLimits

0x0d6c,	// (0x00000d6c) aagrid_cell_image_pane_g4

0x0003,

0x1361,	// (0x00001361) aagrid_cell_image_pane_g_ParamLimits

0x1361,	// (0x00001361) aagrid_cell_image_pane_g

0x0d85,	// (0x00000d85) aagrid_cell_image_pane_t1_ParamLimits

0x0d85,	// (0x00000d85) aagrid_cell_image_pane_t1

0x0d97,	// (0x00000d97) grid_highlight_pane_cp001_ParamLimits

0x0d97,	// (0x00000d97) grid_highlight_pane_cp001

0x0da5,	// (0x00000da5) aa_taskswapper_pane_g1_ParamLimits

0x0da5,	// (0x00000da5) aa_taskswapper_pane_g1

0x0db2,	// (0x00000db2) aa_taskswapper_pane_t1_ParamLimits

0x0db2,	// (0x00000db2) aa_taskswapper_pane_t1

0x0dc4,	// (0x00000dc4) aatasksw_grid_pane_ParamLimits

0x0dc4,	// (0x00000dc4) aatasksw_grid_pane

0x0dd2,	// (0x00000dd2) aatasksw_cell_pane_ParamLimits

0x0dd2,	// (0x00000dd2) aatasksw_cell_pane

0x0de5,	// (0x00000de5) aatasksw_cell_pane_g1

0x000c,	// (0x0000000c) grid_highlight_pane_cp002

0x0dee,	// (0x00000dee) aamd_info_pane

0x0df7,	// (0x00000df7) aamd_list_pane

0x0e01,	// (0x00000e01) aamd_list_double_pane_ParamLimits

0x0e01,	// (0x00000e01) aamd_list_double_pane

0x0e15,	// (0x00000e15) aamd_list_single_pane_ParamLimits

0x0e15,	// (0x00000e15) aamd_list_single_pane

0x0e2f,	// (0x00000e2f) aamd_list_single_pane_g1_ParamLimits

0x0e2f,	// (0x00000e2f) aamd_list_single_pane_g1

0x0e3c,	// (0x00000e3c) aamd_list_single_pane_g2_ParamLimits

0x0e3c,	// (0x00000e3c) aamd_list_single_pane_g2

0x0e48,	// (0x00000e48) aamd_list_single_pane_g3_ParamLimits

0x0e48,	// (0x00000e48) aamd_list_single_pane_g3

0x0002,

0x136a,	// (0x0000136a) aamd_list_single_pane_g_ParamLimits

0x136a,	// (0x0000136a) aamd_list_single_pane_g

0x0e60,	// (0x00000e60) aamd_list_single_pane_t1_ParamLimits

0x0e60,	// (0x00000e60) aamd_list_single_pane_t1

0x0e2f,	// (0x00000e2f) aamd_list_double_pane_g1_ParamLimits

0x0e2f,	// (0x00000e2f) aamd_list_double_pane_g1

0x0e7a,	// (0x00000e7a) aamd_list_double_pane_g2_ParamLimits

0x0e7a,	// (0x00000e7a) aamd_list_double_pane_g2

0x0e86,	// (0x00000e86) aamd_list_double_pane_g3_ParamLimits

0x0e86,	// (0x00000e86) aamd_list_double_pane_g3

0x0002,

0x1371,	// (0x00001371) aamd_list_double_pane_g_ParamLimits

0x1371,	// (0x00001371) aamd_list_double_pane_g

0x0e9e,	// (0x00000e9e) aamd_list_double_pane_t1_ParamLimits

0x0e9e,	// (0x00000e9e) aamd_list_double_pane_t1

0x0eb5,	// (0x00000eb5) aamd_list_double_pane_t2_ParamLimits

0x0eb5,	// (0x00000eb5) aamd_list_double_pane_t2

0x0001,

0x1378,	// (0x00001378) aamd_list_double_pane_t_ParamLimits

0x1378,	// (0x00001378) aamd_list_double_pane_t

0x0ecc,	// (0x00000ecc) aamd_info_pane_g1_ParamLimits

0x0ecc,	// (0x00000ecc) aamd_info_pane_g1

0x0eda,	// (0x00000eda) aamd_info_pane_g2_ParamLimits

0x0eda,	// (0x00000eda) aamd_info_pane_g2

0x0ee6,	// (0x00000ee6) aamd_info_pane_g3_ParamLimits

0x0ee6,	// (0x00000ee6) aamd_info_pane_g3

0x0002,

0x137d,	// (0x0000137d) aamd_info_pane_g_ParamLimits

0x137d,	// (0x0000137d) aamd_info_pane_g

0x0ef2,	// (0x00000ef2) aamd_info_pane_t1_ParamLimits

0x0ef2,	// (0x00000ef2) aamd_info_pane_t1

0x0f07,	// (0x00000f07) aamd_info_pane_t2_ParamLimits

0x0f07,	// (0x00000f07) aamd_info_pane_t2

0x0f26,	// (0x00000f26) aamd_info_pane_t3_ParamLimits

0x0f26,	// (0x00000f26) aamd_info_pane_t3

0x0002,

0x1384,	// (0x00001384) aamd_info_pane_t_ParamLimits

0x1384,	// (0x00001384) aamd_info_pane_t

0x0f4a,	// (0x00000f4a) aaslider_bg_pane_g1

0x0f53,	// (0x00000f53) aaslider_bg_pane_g2

0x0001,

0x138b,	// (0x0000138b) aaslider_bg_pane_g

0x0f5c,	// (0x00000f5c) aaslider_bg_pane_g2_copy1

0x1d78,	// (0x00001d78) aaslider_pane_ParamLimits

0x1d78,	// (0x00001d78) aaslider_pane

0x0f8b,	// (0x00000f8b) aaslider_bg_pane_cp001_ParamLimits

0x0f8b,	// (0x00000f8b) aaslider_bg_pane_cp001

0x0fbf,	// (0x00000fbf) aaslider_pane_g1_ParamLimits

0x0fbf,	// (0x00000fbf) aaslider_pane_g1

0x0fd9,	// (0x00000fd9) aaslider_pane_g2_ParamLimits

0x0fd9,	// (0x00000fd9) aaslider_pane_g2

0x0ffd,	// (0x00000ffd) aaslider_pane_g3_ParamLimits

0x0ffd,	// (0x00000ffd) aaslider_pane_g3

0x0004,

0x1390,	// (0x00001390) aaslider_pane_g_ParamLimits

0x1390,	// (0x00001390) aaslider_pane_g

0x102f,	// (0x0000102f) aaslider_pane_t1_ParamLimits

0x102f,	// (0x0000102f) aaslider_pane_t1

0x1045,	// (0x00001045) aaslider_pane_t2_ParamLimits

0x1045,	// (0x00001045) aaslider_pane_t2

0x105b,	// (0x0000105b) aaslider_pane_t3_ParamLimits

0x105b,	// (0x0000105b) aaslider_pane_t3

0x0002,

0x139b,	// (0x0000139b) aaslider_pane_t_ParamLimits

0x139b,	// (0x0000139b) aaslider_pane_t

0x1079,	// (0x00001079) aid_touch_size_slider_marker_ParamLimits

0x1079,	// (0x00001079) aid_touch_size_slider_marker

0x07d0,	// (0x000007d0) aalist_list_sub_pane_ParamLimits

0x07d0,	// (0x000007d0) aalist_list_sub_pane

0x0823,	// (0x00000823) aalist_single_pane_g3_ParamLimits

0x0823,	// (0x00000823) aalist_single_pane_g3

0x082f,	// (0x0000082f) aalist_single_pane_g4_ParamLimits

0x082f,	// (0x0000082f) aalist_single_pane_g4

0x00a5,	// (0x000000a5) list_highlight_pane_cp001

0x10de,	// (0x000010de) aalist_list_sub_pane_g1_ParamLimits

0x10de,	// (0x000010de) aalist_list_sub_pane_g1

0x10ea,	// (0x000010ea) aalist_list_sub_pane_g2_ParamLimits

0x10ea,	// (0x000010ea) aalist_list_sub_pane_g2

0x10f6,	// (0x000010f6) aalist_list_sub_pane_g3_ParamLimits

0x10f6,	// (0x000010f6) aalist_list_sub_pane_g3

0x1fd1,	// (0x00001fd1) aalist_list_sub_pane_g4_ParamLimits

0x1fd1,	// (0x00001fd1) aalist_list_sub_pane_g4

0x1fdd,	// (0x00001fdd) aalist_list_sub_pane_g5_ParamLimits

0x1fdd,	// (0x00001fdd) aalist_list_sub_pane_g5

0x200d,	// (0x0000200d) aalist_list_sub_pane_g7_ParamLimits

0x200d,	// (0x0000200d) aalist_list_sub_pane_g7

0x0005,

0x2115,	// (0x00002115) aalist_list_sub_pane_g_ParamLimits

0x2115,	// (0x00002115) aalist_list_sub_pane_g

0x2045,	// (0x00002045) aalist_list_sub_pane_t1_ParamLimits

0x2045,	// (0x00002045) aalist_list_sub_pane_t1

0x205a,	// (0x0000205a) aalist_list_sub_pane_t2_ParamLimits

0x205a,	// (0x0000205a) aalist_list_sub_pane_t2

0x0001,

0x2122,	// (0x00002122) aalist_list_sub_pane_t_ParamLimits

0x2122,	// (0x00002122) aalist_list_sub_pane_t

0x00a5,	// (0x000000a5) main_aa_coverflow_pane_ParamLimits

0x00b3,	// (0x000000b3) main_aa_metadata_pane_ParamLimits

0x083b,	// (0x0000083b) aalist_single_pane_g5_ParamLimits

0x083b,	// (0x0000083b) aalist_single_pane_g5

0x00a5,	// (0x000000a5) list_highlight_pane_cp001_ParamLimits

0x069b,	// (0x0000069b) aacf_slider_pane_ParamLimits

0x000c,	// (0x0000000c) main_aa_video_pane

0x07ac,	// (0x000007ac) aid_size_touch_aascroll_bar

0x07b6,	// (0x000007b6) aalist_single_large_graphic_pane_ParamLimits

0x07b6,	// (0x000007b6) aalist_single_large_graphic_pane

0x100f,	// (0x0000100f) aaslider_pane_g4_ParamLimits

0x100f,	// (0x0000100f) aaslider_pane_g4

0x101f,	// (0x0000101f) aaslider_pane_g5_ParamLimits

0x101f,	// (0x0000101f) aaslider_pane_g5

0x109d,	// (0x0000109d) aid_touch_size_slider_max_ParamLimits

0x109d,	// (0x0000109d) aid_touch_size_slider_max

0x10ad,	// (0x000010ad) aid_touch_size_slider_min_ParamLimits

0x10ad,	// (0x000010ad) aid_touch_size_slider_min

0x1207,	// (0x00001207) aalist_single_large_graphic_pane_g1_ParamLimits

0x1207,	// (0x00001207) aalist_single_large_graphic_pane_g1

0x1214,	// (0x00001214) aalist_single_large_graphic_pane_g2_ParamLimits

0x1214,	// (0x00001214) aalist_single_large_graphic_pane_g2

0x1220,	// (0x00001220) aalist_single_large_graphic_pane_g3_ParamLimits

0x1220,	// (0x00001220) aalist_single_large_graphic_pane_g3

0x0002,

0x13bb,	// (0x000013bb) aalist_single_large_graphic_pane_g_ParamLimits

0x13bb,	// (0x000013bb) aalist_single_large_graphic_pane_g

0x1234,	// (0x00001234) aalist_single_large_graphic_pane_t1_ParamLimits

0x1234,	// (0x00001234) aalist_single_large_graphic_pane_t1

0x124a,	// (0x0000124a) main_aa_video_pane_g1_ParamLimits

0x124a,	// (0x0000124a) main_aa_video_pane_g1

0x06a8,	// (0x000006a8) main_aa_coverflow_pane_g1

0x07f6,	// (0x000007f6) aid_size_min_handle_cp002

0x0098,	// (0x00000098) popup_toolbar2_fixed_window_cp001_ParamLimits

0x00b3,	// (0x000000b3) main_aa_slider_pane_ParamLimits

0x07f6,	// (0x000007f6) aid_size_min_handle_cp001

0x10c3,	// (0x000010c3) aaslider_bg_pane_cp001_g1

0x10cc,	// (0x000010cc) aaslider_bg_pane_cp001_g2

0x10d5,	// (0x000010d5) aaslider_bg_pane_cp001_g3

0x0002,

0x13a2,	// (0x000013a2) aaslider_bg_pane_cp001_g

0x0b7c,	// (0x00000b7c) aalist_progress_pane_g4

0x1071,	// (0x00001071) aid_aaslider_pane_rect_inner
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

} // end of namespace AknLayoutScalable_Abrw_hhp_c_qhd_prt_tch_Small
