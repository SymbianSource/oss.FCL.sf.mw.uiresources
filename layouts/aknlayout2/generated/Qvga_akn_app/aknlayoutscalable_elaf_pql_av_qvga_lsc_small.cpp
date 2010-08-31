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

// This customisation implements the interface defined in AknLayoutScalable_Avkon.cdl

#include "aknlayoutscalable_elaf_pql_av_qvga_lsc_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x000135f0 };

TAknWindowComponentLayout WindowLineVCR(TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::WindowLineVCR(&KImplData, aVariety, aCol, aRow); }
TAknLayoutScalableParameterLimits ParameterLimitsV(TInt aVariety) { return AknLayoutScalableDecode::ParameterLimitsV(&KImplData, aVariety); }
TAknTextComponentLayout TextLineVCR(TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::TextLineVCR(&KImplData, aVariety, aCol, aRow); }
TAknTextComponentLayout TextLineRVC(TInt aRow, TInt aVariety, TInt aCol) { return AknLayoutScalableDecode::TextLineRVC(&KImplData, aRow, aVariety, aCol); }
TAknWindowComponentLayout WindowLineRVC(TInt aRow, TInt aVariety, TInt aCol) { return AknLayoutScalableDecode::WindowLineRVC(&KImplData, aRow, aVariety, aCol); }
TAknWindowComponentLayout WindowLineCVR(TInt aCol, TInt aVariety, TInt aRow) { return AknLayoutScalableDecode::WindowLineCVR(&KImplData, aCol, aVariety, aRow); }
TAknWindowComponentLayout WindowLineVRC(TInt aVariety, TInt aRow, TInt aCol) { return AknLayoutScalableDecode::WindowLineVRC(&KImplData, aVariety, aRow, aCol); }
TAknTextComponentLayout TextLineVRC(TInt aVariety, TInt aRow, TInt aCol) { return AknLayoutScalableDecode::TextLineVRC(&KImplData, aVariety, aRow, aCol); }
TAknWindowComponentLayout WindowLineCRV(TInt aCol, TInt aRow, TInt aVariety) { return AknLayoutScalableDecode::WindowLineCRV(&KImplData, aCol, aRow, aVariety); }
TAknWindowComponentLayout WindowTableLVCR(TInt aLineIndex, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::WindowTableLVCR(&KImplData, aLineIndex, aVariety, aCol, aRow); }
TAknLayoutScalableTableLimits Limits() { return AknLayoutScalableDecode::TableLimits(KDataLookup); }
TAknLayoutScalableParameterLimits ParameterLimitsTableLV(TInt aLineIndex, TInt aVariety) { return AknLayoutScalableDecode::ParameterLimitsTableLV(&KImplData, aLineIndex, aVariety); }
TAknTextComponentLayout TextTableLVCR(TInt aLineIndex, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::TextTableLVCR(&KImplData, aLineIndex, aVariety, aCol, aRow); }
TAknTextComponentLayout TextTableLRVC(TInt aLineIndex, TInt aRow, TInt aVariety, TInt aCol) { return AknLayoutScalableDecode::TextTableLRVC(&KImplData, aLineIndex, aRow, aVariety, aCol); }
TAknLayoutScalableComponentType GetComponentTypeById(TInt aComponentId) { return AknLayoutScalableDecode::GetComponentTypeById(&KImplData, aComponentId); }
TAknLayoutScalableParameterLimits GetParamLimitsById(TInt aComponentId, TInt aVariety) { return AknLayoutScalableDecode::GetParamLimitsById(&KImplData, aComponentId, aVariety); }
TAknWindowComponentLayout GetWindowComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::GetWindowComponentById(&KImplData, aComponentId, aVariety, aCol, aRow); }
TAknTextComponentLayout GetTextComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::GetTextComponentById(&KImplData, aComponentId, aVariety, aCol, aRow); }

const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize] =
	{
0xa052,	// (0x0001d642) Screen

0xa05c,	// (0x0001d64c) application_window_ParamLimits

0xa05c,	// (0x0001d64c) application_window

0xd30d,	// (0x000208fd) screen_g1

0xa08a,	// (0x0001d67a) area_bottom_pane_ParamLimits

0xa08a,	// (0x0001d67a) area_bottom_pane

0xd317,	// (0x00020907) area_top_pane_ParamLimits

0xd317,	// (0x00020907) area_top_pane

0x4f24,	// (0x00018514) main_pane_ParamLimits

0x4f24,	// (0x00018514) main_pane

0xd38f,	// (0x0002097f) misc_graphics

0xb02c,	// (0x0001e61c) battery_pane_ParamLimits

0xb02c,	// (0x0001e61c) battery_pane

0xf165,	// (0x00022755) bg_status_flat_pane_g8

0xf16d,	// (0x0002275d) bg_status_flat_pane_g9

0xe8c5,	// (0x00021eb5) context_pane_ParamLimits

0xe8c5,	// (0x00021eb5) context_pane

0xb186,	// (0x0001e776) navi_pane_ParamLimits

0xb186,	// (0x0001e776) navi_pane

0xb1fb,	// (0x0001e7eb) signal_pane_ParamLimits

0xb1fb,	// (0x0001e7eb) signal_pane

0x0008,

0xf877,	// (0x00022e67) bg_status_flat_pane_g

0xb287,	// (0x0001e877) status_pane_g1_ParamLimits

0xb287,	// (0x0001e877) status_pane_g1

0xb293,	// (0x0001e883) status_pane_g2_ParamLimits

0xb293,	// (0x0001e883) status_pane_g2

0xe92b,	// (0x00021f1b) status_pane_g3_ParamLimits

0xe92b,	// (0x00021f1b) status_pane_g3

0x0004,

0xf7b8,	// (0x00022da8) status_pane_g_ParamLimits

0xf7b8,	// (0x00022da8) status_pane_g

0xb29f,	// (0x0001e88f) title_pane_ParamLimits

0xb29f,	// (0x0001e88f) title_pane

0xb2fa,	// (0x0001e8ea) uni_indicator_pane_ParamLimits

0xb2fa,	// (0x0001e8ea) uni_indicator_pane

0xe727,	// (0x00021d17) bg_list_pane_ParamLimits

0xe727,	// (0x00021d17) bg_list_pane

0x9db0,	// (0x0001d3a0) find_pane

0xaa11,	// (0x0001e001) listscroll_app_pane_ParamLimits

0xaa11,	// (0x0001e001) listscroll_app_pane

0xe747,	// (0x00021d37) listscroll_form_pane

0x9db8,	// (0x0001d3a8) listscroll_gen_pane_ParamLimits

0x9db8,	// (0x0001d3a8) listscroll_gen_pane

0xe747,	// (0x00021d37) listscroll_set_pane

0xaa1d,	// (0x0001e00d) main_idle_act_pane

0xe4fd,	// (0x00021aed) main_idle_trad_pane

0xe4fd,	// (0x00021aed) main_list_empty_pane

0xdea5,	// (0x00021495) main_midp_pane

0xe761,	// (0x00021d51) main_pane_g1_ParamLimits

0xe761,	// (0x00021d51) main_pane_g1

0xaa30,	// (0x0001e020) popup_ai_message_window_ParamLimits

0xaa30,	// (0x0001e020) popup_ai_message_window

0xaab4,	// (0x0001e0a4) popup_fep_china_uni_window_ParamLimits

0xaab4,	// (0x0001e0a4) popup_fep_china_uni_window

0xe791,	// (0x00021d81) popup_fep_japan_candidate_window_ParamLimits

0xe791,	// (0x00021d81) popup_fep_japan_candidate_window

0xe7af,	// (0x00021d9f) popup_fep_japan_predictive_window_ParamLimits

0xe7af,	// (0x00021d9f) popup_fep_japan_predictive_window

0xaaf2,	// (0x0001e0e2) popup_find_window

0xab0b,	// (0x0001e0fb) popup_grid_graphic_window_ParamLimits

0xab0b,	// (0x0001e0fb) popup_grid_graphic_window

0xe7db,	// (0x00021dcb) popup_large_graphic_colour_window

0xab87,	// (0x0001e177) popup_menu_window_ParamLimits

0xab87,	// (0x0001e177) popup_menu_window

0xace5,	// (0x0001e2d5) popup_note_image_window

0xacad,	// (0x0001e29d) popup_note_wait_window_ParamLimits

0xacad,	// (0x0001e29d) popup_note_wait_window

0xacfb,	// (0x0001e2eb) popup_note_window_ParamLimits

0xacfb,	// (0x0001e2eb) popup_note_window

0xad8f,	// (0x0001e37f) popup_query_code_window_ParamLimits

0xad8f,	// (0x0001e37f) popup_query_code_window

0xe7fa,	// (0x00021dea) popup_query_data_code_window_ParamLimits

0xe7fa,	// (0x00021dea) popup_query_data_code_window

0xadc7,	// (0x0001e3b7) popup_query_data_window_ParamLimits

0xadc7,	// (0x0001e3b7) popup_query_data_window

0xae3b,	// (0x0001e42b) popup_query_sat_info_window_ParamLimits

0xae3b,	// (0x0001e42b) popup_query_sat_info_window

0xaec8,	// (0x0001e4b8) popup_snote_single_graphic_window_ParamLimits

0xaec8,	// (0x0001e4b8) popup_snote_single_graphic_window

0xaec8,	// (0x0001e4b8) popup_snote_single_text_window_ParamLimits

0xaec8,	// (0x0001e4b8) popup_snote_single_text_window

0xe80f,	// (0x00021dff) popup_sub_window_general

0xe851,	// (0x00021e41) popup_window_general_ParamLimits

0xe851,	// (0x00021e41) popup_window_general

0xe864,	// (0x00021e54) power_save_pane

0xa8ba,	// (0x0001deaa) control_pane_g1_ParamLimits

0xa8ba,	// (0x0001deaa) control_pane_g1

0x55ac,	// (0x00018b9c) control_pane_g2_ParamLimits

0x55ac,	// (0x00018b9c) control_pane_g2

0xe709,	// (0x00021cf9) control_pane_g3_ParamLimits

0xe709,	// (0x00021cf9) control_pane_g3

0x0007,

0xf7a0,	// (0x00022d90) control_pane_g_ParamLimits

0xf7a0,	// (0x00022d90) control_pane_g

0xa917,	// (0x0001df07) control_pane_t1_ParamLimits

0xa917,	// (0x0001df07) control_pane_t1

0xa973,	// (0x0001df63) control_pane_t2_ParamLimits

0xa973,	// (0x0001df63) control_pane_t2

0x0002,

0xf7b1,	// (0x00022da1) control_pane_t_ParamLimits

0xf7b1,	// (0x00022da1) control_pane_t

0xe62c,	// (0x00021c1c) navi_navi_volume_pane_cp1

0xe635,	// (0x00021c25) status_small_icon_pane

0xe63d,	// (0x00021c2d) status_small_pane_g1_ParamLimits

0xe63d,	// (0x00021c2d) status_small_pane_g1

0xe671,	// (0x00021c61) status_small_pane_g2_ParamLimits

0xe671,	// (0x00021c61) status_small_pane_g2

0xe67d,	// (0x00021c6d) status_small_pane_g3_ParamLimits

0xe67d,	// (0x00021c6d) status_small_pane_g3

0xe689,	// (0x00021c79) status_small_pane_g4_ParamLimits

0xe689,	// (0x00021c79) status_small_pane_g4

0xe695,	// (0x00021c85) status_small_pane_g5_ParamLimits

0xe695,	// (0x00021c85) status_small_pane_g5

0xe6a2,	// (0x00021c92) status_small_pane_g6_ParamLimits

0xe6a2,	// (0x00021c92) status_small_pane_g6

0x0007,

0xf78f,	// (0x00022d7f) status_small_pane_g_ParamLimits

0xf78f,	// (0x00022d7f) status_small_pane_g

0xe6d2,	// (0x00021cc2) status_small_pane_t1

0xe6f5,	// (0x00021ce5) status_small_wait_pane_ParamLimits

0xe6f5,	// (0x00021ce5) status_small_wait_pane

0xa780,	// (0x0001dd70) aid_levels_signal_ParamLimits

0xa780,	// (0x0001dd70) aid_levels_signal

0xa794,	// (0x0001dd84) signal_pane_g1_ParamLimits

0xa794,	// (0x0001dd84) signal_pane_g1

0xa7ae,	// (0x0001dd9e) signal_pane_g2_ParamLimits

0xa7ae,	// (0x0001dd9e) signal_pane_g2

0x0001,

0xf724,	// (0x00022d14) signal_pane_g_ParamLimits

0xf724,	// (0x00022d14) signal_pane_g

0xe0a2,	// (0x00021692) context_pane_g1

0xa1da,	// (0x0001d7ca) title_pane_g1

0xa21c,	// (0x0001d80c) title_pane_t1

0xd3a5,	// (0x00020995) title_pane_t2

0xd3cb,	// (0x000209bb) title_pane_t3

0x0002,

0xf573,	// (0x00022b63) title_pane_t

0xb320,	// (0x0001e910) aid_levels_battery_ParamLimits

0xb320,	// (0x0001e910) aid_levels_battery

0xb338,	// (0x0001e928) battery_pane_g1_ParamLimits

0xb338,	// (0x0001e928) battery_pane_g1

0xb353,	// (0x0001e943) battery_pane_g2_ParamLimits

0xb353,	// (0x0001e943) battery_pane_g2

0x0001,

0xf7c3,	// (0x00022db3) battery_pane_g_ParamLimits

0xf7c3,	// (0x00022db3) battery_pane_g

0xb6c2,	// (0x0001ecb2) uni_indicator_pane_g1

0xb6d7,	// (0x0001ecc7) uni_indicator_pane_g2

0xb6ed,	// (0x0001ecdd) uni_indicator_pane_g3

0x0005,

0xf908,	// (0x00022ef8) uni_indicator_pane_g

0xda53,	// (0x00021043) navi_icon_pane_ParamLimits

0xda53,	// (0x00021043) navi_icon_pane

0xd38f,	// (0x0002097f) navi_midp_pane

0xd38f,	// (0x0002097f) navi_navi_pane

0xda53,	// (0x00021043) navi_text_pane_ParamLimits

0xda53,	// (0x00021043) navi_text_pane

0xd30d,	// (0x000208fd) status_small_wait_pane_g1

0xd6e6,	// (0x00020cd6) status_small_wait_pane_g2

0x0001,

0xf903,	// (0x00022ef3) status_small_wait_pane_g

0xb668,	// (0x0001ec58) navi_navi_icon_text_pane

0xb670,	// (0x0001ec60) navi_navi_pane_g1_ParamLimits

0xb670,	// (0x0001ec60) navi_navi_pane_g1

0xb682,	// (0x0001ec72) navi_navi_pane_g2_ParamLimits

0xb682,	// (0x0001ec72) navi_navi_pane_g2

0x0001,

0xf8d1,	// (0x00022ec1) navi_navi_pane_g_ParamLimits

0xf8d1,	// (0x00022ec1) navi_navi_pane_g

0xb694,	// (0x0001ec84) navi_navi_tabs_pane

0xb668,	// (0x0001ec58) navi_navi_text_pane

0xb668,	// (0x0001ec58) navi_navi_volume_pane

0x12c2,	// (0x000148b2) navi_text_pane_t1

0x12b6,	// (0x000148a6) navi_icon_pane_g1

0x120a,	// (0x000147fa) navi_navi_text_pane_t1

0x59b8,	// (0x00018fa8) navi_navi_volume_pane_g1

0xb65f,	// (0x0001ec4f) volume_small_pane

0xb5bb,	// (0x0001ebab) navi_navi_icon_text_pane_g1

0xb5c3,	// (0x0001ebb3) navi_navi_icon_text_pane_t1

0xf1ad,	// (0x0002279d) navi_tabs_2_long_pane

0xf1ad,	// (0x0002279d) navi_tabs_2_pane

0xf1ad,	// (0x0002279d) navi_tabs_3_long_pane

0xf1ad,	// (0x0002279d) navi_tabs_3_pane

0xf1ad,	// (0x0002279d) navi_tabs_4_pane

0xb59b,	// (0x0001eb8b) tabs_2_active_pane_ParamLimits

0xb59b,	// (0x0001eb8b) tabs_2_active_pane

0xb5ab,	// (0x0001eb9b) tabs_2_passive_pane_ParamLimits

0xb5ab,	// (0x0001eb9b) tabs_2_passive_pane

0xb569,	// (0x0001eb59) tabs_3_active_pane_ParamLimits

0xb569,	// (0x0001eb59) tabs_3_active_pane

0xb579,	// (0x0001eb69) tabs_3_passive_pane_ParamLimits

0xb579,	// (0x0001eb69) tabs_3_passive_pane

0xb58a,	// (0x0001eb7a) tabs_3_passive_pane_cp_ParamLimits

0xb58a,	// (0x0001eb7a) tabs_3_passive_pane_cp

0xb525,	// (0x0001eb15) tabs_4_active_pane_ParamLimits

0xb525,	// (0x0001eb15) tabs_4_active_pane

0xb536,	// (0x0001eb26) tabs_4_passive_pane_ParamLimits

0xb536,	// (0x0001eb26) tabs_4_passive_pane

0xb547,	// (0x0001eb37) tabs_4_passive_pane_cp_ParamLimits

0xb547,	// (0x0001eb37) tabs_4_passive_pane_cp

0xb558,	// (0x0001eb48) tabs_4_passive_pane_cp2_ParamLimits

0xb558,	// (0x0001eb48) tabs_4_passive_pane_cp2

0xb505,	// (0x0001eaf5) tabs_2_long_active_pane_ParamLimits

0xb505,	// (0x0001eaf5) tabs_2_long_active_pane

0xb515,	// (0x0001eb05) tabs_2_long_passive_pane_ParamLimits

0xb515,	// (0x0001eb05) tabs_2_long_passive_pane

0xb4ce,	// (0x0001eabe) tabs_3_long_active_pane_ParamLimits

0xb4ce,	// (0x0001eabe) tabs_3_long_active_pane

0xb4e1,	// (0x0001ead1) tabs_3_long_passive_pane_ParamLimits

0xb4e1,	// (0x0001ead1) tabs_3_long_passive_pane

0xb4f2,	// (0x0001eae2) tabs_3_long_passive_pane_cp_ParamLimits

0xb4f2,	// (0x0001eae2) tabs_3_long_passive_pane_cp

0x57e5,	// (0x00018dd5) volume_small_pane_g1

0x57ee,	// (0x00018dde) volume_small_pane_g2

0x57f7,	// (0x00018de7) volume_small_pane_g3

0x5800,	// (0x00018df0) volume_small_pane_g4

0x5809,	// (0x00018df9) volume_small_pane_g5

0x5812,	// (0x00018e02) volume_small_pane_g6

0x581b,	// (0x00018e0b) volume_small_pane_g7

0x5824,	// (0x00018e14) volume_small_pane_g8

0x582d,	// (0x00018e1d) volume_small_pane_g9

0x5836,	// (0x00018e26) volume_small_pane_g10

0x0009,

0xf89d,	// (0x00022e8d) volume_small_pane_g

0xd3dd,	// (0x000209cd) bg_active_tab_pane_cp2_ParamLimits

0xd3dd,	// (0x000209cd) bg_active_tab_pane_cp2

0xd3eb,	// (0x000209db) tabs_3_active_pane_g1

0xa2a9,	// (0x0001d899) tabs_3_active_pane_t1

0xd3dd,	// (0x000209cd) bg_passive_tab_pane_cp2_ParamLimits

0xd3dd,	// (0x000209cd) bg_passive_tab_pane_cp2

0xd3eb,	// (0x000209db) tabs_3_passive_pane_g1

0xa2a9,	// (0x0001d899) tabs_3_passive_pane_t1

0xd3dd,	// (0x000209cd) bg_active_tab_pane_cp3_ParamLimits

0xd3dd,	// (0x000209cd) bg_active_tab_pane_cp3

0x1140,	// (0x00014730) tabs_4_active_pane_g1

0xa2bf,	// (0x0001d8af) tabs_4_active_pane_t1

0xd3dd,	// (0x000209cd) bg_passive_tab_pane_cp3_ParamLimits

0xd3dd,	// (0x000209cd) bg_passive_tab_pane_cp3

0x1140,	// (0x00014730) tabs_4_1_passive_pane_g1

0xa2bf,	// (0x0001d8af) tabs_4_1_passive_pane_t1

0xdea5,	// (0x00021495) list_highlight_pane_cp2

0xb7a9,	// (0x0001ed99) list_set_pane_ParamLimits

0xb7a9,	// (0x0001ed99) list_set_pane

0xb837,	// (0x0001ee27) main_pane_set_t1_ParamLimits

0xb837,	// (0x0001ee27) main_pane_set_t1

0xb857,	// (0x0001ee47) main_pane_set_t2_ParamLimits

0xb857,	// (0x0001ee47) main_pane_set_t2

0xb86b,	// (0x0001ee5b) main_pane_set_t3_ParamLimits

0xb86b,	// (0x0001ee5b) main_pane_set_t3

0xb87d,	// (0x0001ee6d) main_pane_set_t4_ParamLimits

0xb87d,	// (0x0001ee6d) main_pane_set_t4

0x0003,

0xf96d,	// (0x00022f5d) main_pane_set_t_ParamLimits

0xf96d,	// (0x00022f5d) main_pane_set_t

0xb88f,	// (0x0001ee7f) setting_code_pane

0xb897,	// (0x0001ee87) setting_slider_graphic_pane

0xb897,	// (0x0001ee87) setting_slider_pane

0xb897,	// (0x0001ee87) setting_text_pane

0xb897,	// (0x0001ee87) setting_volume_pane

0xa2d5,	// (0x0001d8c5) volume_set_pane

0xd3f3,	// (0x000209e3) bg_set_opt_pane_cp

0xd401,	// (0x000209f1) setting_slider_pane_t1

0xa2dd,	// (0x0001d8cd) setting_slider_pane_t2

0xa2f6,	// (0x0001d8e6) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x00022b6a) setting_slider_pane_t

0xd417,	// (0x00020a07) slider_set_pane

0xd38f,	// (0x0002097f) bg_set_opt_pane_cp2

0xd42d,	// (0x00020a1d) setting_slider_graphic_pane_g1

0xa30d,	// (0x0001d8fd) setting_slider_graphic_pane_t1

0xa31c,	// (0x0001d90c) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x00022b71) setting_slider_graphic_pane_t

0xa32b,	// (0x0001d91b) slider_set_pane_cp

0xd38f,	// (0x0002097f) input_focus_pane_cp1

0x1712,	// (0x00014d02) list_set_text_pane

0xd30d,	// (0x000208fd) setting_text_pane_g1

0xd38f,	// (0x0002097f) input_focus_pane_cp2

0xd30d,	// (0x000208fd) setting_code_pane_g1

0xd436,	// (0x00020a26) setting_code_pane_t1

0x9839,	// (0x0001ce29) set_text_pane_t1_ParamLimits

0x9839,	// (0x0001ce29) set_text_pane_t1

0xd9ee,	// (0x00020fde) set_opt_bg_pane_g1

0xd9f6,	// (0x00020fe6) set_opt_bg_pane_g2

0xb769,	// (0x0001ed59) set_opt_bg_pane_g3

0xda06,	// (0x00020ff6) set_opt_bg_pane_g4

0xda0e,	// (0x00020ffe) set_opt_bg_pane_g5

0xda16,	// (0x00021006) set_opt_bg_pane_g6

0xb771,	// (0x0001ed61) set_opt_bg_pane_g7

0xb779,	// (0x0001ed69) set_opt_bg_pane_g8

0xb781,	// (0x0001ed71) set_opt_bg_pane_g9

0x0008,

0xf95a,	// (0x00022f4a) set_opt_bg_pane_g

0x1705,	// (0x00014cf5) slider_set_pane_g1

0x5a7f,	// (0x0001906f) slider_set_pane_g2

0x0006,

0xf94b,	// (0x00022f3b) slider_set_pane_g

0xb703,	// (0x0001ecf3) volume_set_pane_g1

0xb70b,	// (0x0001ecfb) volume_set_pane_g2

0xb713,	// (0x0001ed03) volume_set_pane_g3

0xb71b,	// (0x0001ed0b) volume_set_pane_g4

0xb723,	// (0x0001ed13) volume_set_pane_g5

0xb72b,	// (0x0001ed1b) volume_set_pane_g6

0xb733,	// (0x0001ed23) volume_set_pane_g7

0xb73b,	// (0x0001ed2b) volume_set_pane_g8

0xb743,	// (0x0001ed33) volume_set_pane_g9

0xb74b,	// (0x0001ed3b) volume_set_pane_g10

0x0009,

0xf923,	// (0x00022f13) volume_set_pane_g

0xa333,	// (0x0001d923) indicator_pane_ParamLimits

0xa333,	// (0x0001d923) indicator_pane

0xa35b,	// (0x0001d94b) main_idle_pane_g2_ParamLimits

0xa35b,	// (0x0001d94b) main_idle_pane_g2

0xa38b,	// (0x0001d97b) main_pane_idle_g1_ParamLimits

0xa38b,	// (0x0001d97b) main_pane_idle_g1

0xd444,	// (0x00020a34) popup_clock_digital_analogue_window_ParamLimits

0xd444,	// (0x00020a34) popup_clock_digital_analogue_window

0xa3b0,	// (0x0001d9a0) soft_indicator_pane_ParamLimits

0xa3b0,	// (0x0001d9a0) soft_indicator_pane

0xa3ca,	// (0x0001d9ba) wallpaper_pane_ParamLimits

0xa3ca,	// (0x0001d9ba) wallpaper_pane

0xd30d,	// (0x000208fd) wallpaper_pane_g1

0xa3dc,	// (0x0001d9cc) indicator_pane_g1_ParamLimits

0xa3dc,	// (0x0001d9cc) indicator_pane_g1

0x181f,	// (0x00014e0f) navi_navi_icon_text_pane_srt_g1

0xd472,	// (0x00020a62) soft_indicator_pane_t1

0xd48c,	// (0x00020a7c) aid_ps_area_pane

0xa3f5,	// (0x0001d9e5) aid_ps_clock_pane

0xd49d,	// (0x00020a8d) aid_ps_indicator_pane

0xd4a9,	// (0x00020a99) indicator_ps_pane_ParamLimits

0xd4a9,	// (0x00020a99) indicator_ps_pane

0xd4b8,	// (0x00020aa8) power_save_pane_g1_ParamLimits

0xd4b8,	// (0x00020aa8) power_save_pane_g1

0xd4c4,	// (0x00020ab4) power_save_pane_g2_ParamLimits

0xd4c4,	// (0x00020ab4) power_save_pane_g2

0x4ea0,	// (0x00018490) aid_navinavi_width_pane

0xd48c,	// (0x00020a7c) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x00022b76) power_save_pane_g_ParamLimits

0xf586,	// (0x00022b76) power_save_pane_g

0xd4d2,	// (0x00020ac2) power_save_pane_t1_ParamLimits

0xd4d2,	// (0x00020ac2) power_save_pane_t1

0xa3f5,	// (0x0001d9e5) aid_ps_clock_pane_ParamLimits

0xd49d,	// (0x00020a8d) aid_ps_indicator_pane_ParamLimits

0xd4e4,	// (0x00020ad4) power_save_pane_t4_ParamLimits

0xd4e4,	// (0x00020ad4) power_save_pane_t4

0x0001,

0xf58b,	// (0x00022b7b) power_save_pane_t_ParamLimits

0xf58b,	// (0x00022b7b) power_save_pane_t

0xd50e,	// (0x00020afe) power_save_t3_ParamLimits

0xd50e,	// (0x00020afe) power_save_t3

0xd4f9,	// (0x00020ae9) power_save_t2_ParamLimits

0xd4f9,	// (0x00020ae9) power_save_t2

0xd523,	// (0x00020b13) indicator_ps_pane_g1

0xa401,	// (0x0001d9f1) ai_gene_pane_ParamLimits

0xa401,	// (0x0001d9f1) ai_gene_pane

0xa418,	// (0x0001da08) ai_links_pane_ParamLimits

0xa418,	// (0x0001da08) ai_links_pane

0xa42a,	// (0x0001da1a) indicator_pane_cp1_ParamLimits

0xa42a,	// (0x0001da1a) indicator_pane_cp1

0xa439,	// (0x0001da29) main_pane_idle_g1_cp_ParamLimits

0xa439,	// (0x0001da29) main_pane_idle_g1_cp

0xd52c,	// (0x00020b1c) popup_ai_links_title_window

0xa451,	// (0x0001da41) soft_indicator_pane_cp1_ParamLimits

0xa451,	// (0x0001da41) soft_indicator_pane_cp1

0x1547,	// (0x00014b37) ai_links_pane_g1

0x1550,	// (0x00014b40) grid_ai_links_pane

0xb6b9,	// (0x0001eca9) ai_gene_pane_1

0x1535,	// (0x00014b25) ai_gene_pane_2

0x153e,	// (0x00014b2e) list_highlight_pane_cp4

0xb69d,	// (0x0001ec8d) cell_ai_link_pane_ParamLimits

0xb69d,	// (0x0001ec8d) cell_ai_link_pane

0x152d,	// (0x00014b1d) cell_ai_link_pane_g1

0xd6e6,	// (0x00020cd6) cell_ai_link_pane_g2

0x0001,

0xf8fe,	// (0x00022eee) cell_ai_link_pane_g

0xd38f,	// (0x0002097f) grid_highlight_cp2

0xd38f,	// (0x0002097f) bg_popup_sub_pane_cp1

0xd543,	// (0x00020b33) popup_ai_links_title_window_t1

0x147f,	// (0x00014a6f) ai_gene_pane_1_g1_ParamLimits

0x147f,	// (0x00014a6f) ai_gene_pane_1_g1

0x148b,	// (0x00014a7b) ai_gene_pane_1_g2_ParamLimits

0x148b,	// (0x00014a7b) ai_gene_pane_1_g2

0x0001,

0xf8f4,	// (0x00022ee4) ai_gene_pane_1_g_ParamLimits

0xf8f4,	// (0x00022ee4) ai_gene_pane_1_g

0x1498,	// (0x00014a88) ai_gene_pane_1_t1_ParamLimits

0x1498,	// (0x00014a88) ai_gene_pane_1_t1

0x14cc,	// (0x00014abc) grid_ai_soft_ind_pane

0x146a,	// (0x00014a5a) ai_gene_pane_2_t1_ParamLimits

0x146a,	// (0x00014a5a) ai_gene_pane_2_t1

0xa465,	// (0x0001da55) main_pane_empty_t1_ParamLimits

0xa465,	// (0x0001da55) main_pane_empty_t1

0xa482,	// (0x0001da72) main_pane_empty_t2_ParamLimits

0xa482,	// (0x0001da72) main_pane_empty_t2

0xa49a,	// (0x0001da8a) main_pane_empty_t3_ParamLimits

0xa49a,	// (0x0001da8a) main_pane_empty_t3

0xa4ad,	// (0x0001da9d) main_pane_empty_t4_ParamLimits

0xa4ad,	// (0x0001da9d) main_pane_empty_t4

0xa4c0,	// (0x0001dab0) main_pane_empty_t5_ParamLimits

0xa4c0,	// (0x0001dab0) main_pane_empty_t5

0x0004,

0xf590,	// (0x00022b80) main_pane_empty_t_ParamLimits

0xf590,	// (0x00022b80) main_pane_empty_t

0xda53,	// (0x00021043) bg_popup_window_pane_ParamLimits

0xda53,	// (0x00021043) bg_popup_window_pane

0x1219,	// (0x00014809) find_popup_pane_cp2_ParamLimits

0x1219,	// (0x00014809) find_popup_pane_cp2

0x1225,	// (0x00014815) heading_pane_ParamLimits

0x1225,	// (0x00014815) heading_pane

0xd38f,	// (0x0002097f) bg_popup_sub_pane

0xb5e0,	// (0x0001ebd0) bg_popup_window_pane_g1_ParamLimits

0xb5e0,	// (0x0001ebd0) bg_popup_window_pane_g1

0xb5ef,	// (0x0001ebdf) bg_popup_window_pane_g2_ParamLimits

0xb5ef,	// (0x0001ebdf) bg_popup_window_pane_g2

0xb5fb,	// (0x0001ebeb) bg_popup_window_pane_g3_ParamLimits

0xb5fb,	// (0x0001ebeb) bg_popup_window_pane_g3

0xb607,	// (0x0001ebf7) bg_popup_window_pane_g4_ParamLimits

0xb607,	// (0x0001ebf7) bg_popup_window_pane_g4

0xb616,	// (0x0001ec06) bg_popup_window_pane_g5_ParamLimits

0xb616,	// (0x0001ec06) bg_popup_window_pane_g5

0xb626,	// (0x0001ec16) bg_popup_window_pane_g6_ParamLimits

0xb626,	// (0x0001ec16) bg_popup_window_pane_g6

0xb632,	// (0x0001ec22) bg_popup_window_pane_g7_ParamLimits

0xb632,	// (0x0001ec22) bg_popup_window_pane_g7

0xb641,	// (0x0001ec31) bg_popup_window_pane_g8_ParamLimits

0xb641,	// (0x0001ec31) bg_popup_window_pane_g8

0xb650,	// (0x0001ec40) bg_popup_window_pane_g9_ParamLimits

0xb650,	// (0x0001ec40) bg_popup_window_pane_g9

0x11fe,	// (0x000147ee) bg_popup_window_pane_g10_ParamLimits

0x11fe,	// (0x000147ee) bg_popup_window_pane_g10

0x0009,

0xf8bc,	// (0x00022eac) bg_popup_window_pane_g_ParamLimits

0xf8bc,	// (0x00022eac) bg_popup_window_pane_g

0x11b5,	// (0x000147a5) bg_popup_heading_pane_ParamLimits

0x11b5,	// (0x000147a5) bg_popup_heading_pane

0x5d2f,	// (0x0001931f) tabs_4_passive_pane_cp_srt_ParamLimits

0x5d2f,	// (0x0001931f) tabs_4_passive_pane_cp_srt

0x5d41,	// (0x00019331) tabs_4_passive_pane_srt_ParamLimits

0x11c9,	// (0x000147b9) heading_pane_g2

0x5d41,	// (0x00019331) tabs_4_passive_pane_srt

0xeb0d,	// (0x000220fd) bg_passive_tab_pane_cp3_srt_ParamLimits

0xeb0d,	// (0x000220fd) bg_passive_tab_pane_cp3_srt

0x11d1,	// (0x000147c1) heading_pane_t1_ParamLimits

0x11d1,	// (0x000147c1) heading_pane_t1

0x11e8,	// (0x000147d8) heading_pane_t2_ParamLimits

0x11e8,	// (0x000147d8) heading_pane_t2

0x0001,

0xf8b7,	// (0x00022ea7) heading_pane_t_ParamLimits

0xf8b7,	// (0x00022ea7) heading_pane_t

0xf12d,	// (0x0002271d) bg_popup_heading_pane_g1

0xf1be,	// (0x000227ae) bg_popup_heading_pane_g2

0xf1c6,	// (0x000227b6) bg_popup_heading_pane_g3

0xf1ce,	// (0x000227be) bg_popup_heading_pane_g4

0xf1d6,	// (0x000227c6) bg_popup_heading_pane_g5

0xf1de,	// (0x000227ce) bg_popup_heading_pane_g6

0xf1e6,	// (0x000227d6) bg_popup_heading_pane_g7

0xf1ee,	// (0x000227de) bg_popup_heading_pane_g8

0xf1f6,	// (0x000227e6) bg_popup_heading_pane_g9

0x0008,

0xf88a,	// (0x00022e7a) bg_popup_heading_pane_g

0xea13,	// (0x00022003) bg_popup_sub_pane_g1

0xea1b,	// (0x0002200b) bg_popup_sub_pane_g2

0xea23,	// (0x00022013) bg_popup_sub_pane_g3

0xea2b,	// (0x0002201b) bg_popup_sub_pane_g4

0xea33,	// (0x00022023) bg_popup_sub_pane_g5

0xea3b,	// (0x0002202b) bg_popup_sub_pane_g6

0xea43,	// (0x00022033) bg_popup_sub_pane_g7

0xea4b,	// (0x0002203b) bg_popup_sub_pane_g8

0xea53,	// (0x00022043) bg_popup_sub_pane_g9

0x0008,

0xf864,	// (0x00022e54) bg_popup_sub_pane_g

0xd3dd,	// (0x000209cd) bg_popup_window_pane_cp5_ParamLimits

0xd3dd,	// (0x000209cd) bg_popup_window_pane_cp5

0xd560,	// (0x00020b50) popup_note_window_g1_ParamLimits

0xd560,	// (0x00020b50) popup_note_window_g1

0xd56c,	// (0x00020b5c) popup_note_window_t1_ParamLimits

0xd56c,	// (0x00020b5c) popup_note_window_t1

0xd582,	// (0x00020b72) popup_note_window_t2_ParamLimits

0xd582,	// (0x00020b72) popup_note_window_t2

0xd598,	// (0x00020b88) popup_note_window_t3_ParamLimits

0xd598,	// (0x00020b88) popup_note_window_t3

0xd5ae,	// (0x00020b9e) popup_note_window_t4_ParamLimits

0xd5ae,	// (0x00020b9e) popup_note_window_t4

0xd5d6,	// (0x00020bc6) popup_note_window_t5_ParamLimits

0xd5d6,	// (0x00020bc6) popup_note_window_t5

0x0004,

0xf59b,	// (0x00022b8b) popup_note_window_t_ParamLimits

0xf59b,	// (0x00022b8b) popup_note_window_t

0xd5fa,	// (0x00020bea) bg_popup_window_pane_cp6_ParamLimits

0xd5fa,	// (0x00020bea) bg_popup_window_pane_cp6

0xf0a9,	// (0x00022699) popup_note_image_window_g1_ParamLimits

0xf0a9,	// (0x00022699) popup_note_image_window_g1

0xf0b5,	// (0x000226a5) popup_note_image_window_g2_ParamLimits

0xf0b5,	// (0x000226a5) popup_note_image_window_g2

0x0001,

0xf858,	// (0x00022e48) popup_note_image_window_g_ParamLimits

0xf858,	// (0x00022e48) popup_note_image_window_g

0xf0ce,	// (0x000226be) popup_note_image_window_t1_ParamLimits

0xf0ce,	// (0x000226be) popup_note_image_window_t1

0xf0e7,	// (0x000226d7) popup_note_image_window_t2_ParamLimits

0xf0e7,	// (0x000226d7) popup_note_image_window_t2

0xf100,	// (0x000226f0) popup_note_image_window_t3_ParamLimits

0xf100,	// (0x000226f0) popup_note_image_window_t3

0x0002,

0xf85d,	// (0x00022e4d) popup_note_image_window_t_ParamLimits

0xf85d,	// (0x00022e4d) popup_note_image_window_t

0xef94,	// (0x00022584) bg_popup_window_pane_cp7_ParamLimits

0xef94,	// (0x00022584) bg_popup_window_pane_cp7

0xefc4,	// (0x000225b4) popup_note_wait_window_g1_ParamLimits

0xefc4,	// (0x000225b4) popup_note_wait_window_g1

0xefd0,	// (0x000225c0) popup_note_wait_window_g2_ParamLimits

0xefd0,	// (0x000225c0) popup_note_wait_window_g2

0x0002,

0xf846,	// (0x00022e36) popup_note_wait_window_g_ParamLimits

0xf846,	// (0x00022e36) popup_note_wait_window_g

0xefe8,	// (0x000225d8) popup_note_wait_window_t1_ParamLimits

0xefe8,	// (0x000225d8) popup_note_wait_window_t1

0xf00f,	// (0x000225ff) popup_note_wait_window_t2_ParamLimits

0xf00f,	// (0x000225ff) popup_note_wait_window_t2

0xf02c,	// (0x0002261c) popup_note_wait_window_t3_ParamLimits

0xf02c,	// (0x0002261c) popup_note_wait_window_t3

0xf03f,	// (0x0002262f) popup_note_wait_window_t4_ParamLimits

0xf03f,	// (0x0002262f) popup_note_wait_window_t4

0x0004,

0xf84d,	// (0x00022e3d) popup_note_wait_window_t_ParamLimits

0xf84d,	// (0x00022e3d) popup_note_wait_window_t

0xf064,	// (0x00022654) wait_bar_pane_ParamLimits

0xf064,	// (0x00022654) wait_bar_pane

0xd38f,	// (0x0002097f) wait_anim_pane

0xd38f,	// (0x0002097f) wait_border_pane

0xd30d,	// (0x000208fd) wait_anim_pane_g1

0xd30d,	// (0x000208fd) wait_anim_pane_g2

0x0001,

0xf71f,	// (0x00022d0f) wait_anim_pane_g

0xef44,	// (0x00022534) wait_border_pane_g1

0xef4d,	// (0x0002253d) wait_border_pane_g2

0xef56,	// (0x00022546) wait_border_pane_g3

0x0002,

0xf83f,	// (0x00022e2f) wait_border_pane_g

0xedb4,	// (0x000223a4) bg_popup_window_pane_cp16_ParamLimits

0xedb4,	// (0x000223a4) bg_popup_window_pane_cp16

0xeeb4,	// (0x000224a4) indicator_popup_pane_cp4_ParamLimits

0xeeb4,	// (0x000224a4) indicator_popup_pane_cp4

0xeec8,	// (0x000224b8) popup_query_data_window_t1_ParamLimits

0xeec8,	// (0x000224b8) popup_query_data_window_t1

0xeeda,	// (0x000224ca) popup_query_data_window_t2_ParamLimits

0xeeda,	// (0x000224ca) popup_query_data_window_t2

0xeef3,	// (0x000224e3) popup_query_data_window_t3_ParamLimits

0xeef3,	// (0x000224e3) popup_query_data_window_t3

0x0002,

0xf838,	// (0x00022e28) popup_query_data_window_t_ParamLimits

0xf838,	// (0x00022e28) popup_query_data_window_t

0xef0d,	// (0x000224fd) query_popup_data_pane_ParamLimits

0xef0d,	// (0x000224fd) query_popup_data_pane

0xef21,	// (0x00022511) query_popup_data_pane_cp1_ParamLimits

0xef21,	// (0x00022511) query_popup_data_pane_cp1

0xedb4,	// (0x000223a4) bg_popup_window_pane_cp10_ParamLimits

0xedb4,	// (0x000223a4) bg_popup_window_pane_cp10

0xede6,	// (0x000223d6) indicator_popup_pane_ParamLimits

0xede6,	// (0x000223d6) indicator_popup_pane

0xee08,	// (0x000223f8) popup_query_code_window_t1_ParamLimits

0xee08,	// (0x000223f8) popup_query_code_window_t1

0xee22,	// (0x00022412) popup_query_code_window_t2_ParamLimits

0xee22,	// (0x00022412) popup_query_code_window_t2

0xee6b,	// (0x0002245b) popup_query_code_window_t3_ParamLimits

0xee6b,	// (0x0002245b) popup_query_code_window_t3

0x0002,

0xf831,	// (0x00022e21) popup_query_code_window_t_ParamLimits

0xf831,	// (0x00022e21) popup_query_code_window_t

0xee9a,	// (0x0002248a) query_popup_pane_ParamLimits

0xee9a,	// (0x0002248a) query_popup_pane

0xd5fa,	// (0x00020bea) bg_popup_window_pane_cp15_ParamLimits

0xd5fa,	// (0x00020bea) bg_popup_window_pane_cp15

0xd618,	// (0x00020c08) indicator_popup_pane_cp1_ParamLimits

0xd618,	// (0x00020c08) indicator_popup_pane_cp1

0xd62b,	// (0x00020c1b) indicator_popup_pane_cp2_ParamLimits

0xd62b,	// (0x00020c1b) indicator_popup_pane_cp2

0xd63e,	// (0x00020c2e) popup_query_data_code_window_g1_ParamLimits

0xd63e,	// (0x00020c2e) popup_query_data_code_window_g1

0xd651,	// (0x00020c41) popup_query_data_code_window_t1_ParamLimits

0xd651,	// (0x00020c41) popup_query_data_code_window_t1

0xd663,	// (0x00020c53) popup_query_data_code_window_t2_ParamLimits

0xd663,	// (0x00020c53) popup_query_data_code_window_t2

0xd675,	// (0x00020c65) popup_query_data_code_window_t3_ParamLimits

0xd675,	// (0x00020c65) popup_query_data_code_window_t3

0xd68b,	// (0x00020c7b) popup_query_data_code_window_t4_ParamLimits

0xd68b,	// (0x00020c7b) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x00022b96) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x00022b96) popup_query_data_code_window_t

0xe37e,	// (0x0002196e) list_single_midp_graphic_pane_g3

0xd6a3,	// (0x00020c93) query_popup_data_pane_cp2_ParamLimits

0xd6b6,	// (0x00020ca6) query_popup_pane_cp2_ParamLimits

0xd6b6,	// (0x00020ca6) query_popup_pane_cp2

0xd38f,	// (0x0002097f) bg_popup_window_pane_cp11

0xedac,	// (0x0002239c) heading_pane_cp5

0xd742,	// (0x00020d32) listscroll_popup_info_pane

0xd38f,	// (0x0002097f) input_focus_pane_cp3

0xd6c9,	// (0x00020cb9) query_popup_pane_t1

0xd6d7,	// (0x00020cc7) list_popup_info_pane_ParamLimits

0xd6d7,	// (0x00020cc7) list_popup_info_pane

0xd6e6,	// (0x00020cd6) listscroll_popup_info_pane_g1

0xd6ee,	// (0x00020cde) scroll_pane_cp7

0xd6f6,	// (0x00020ce6) popup_info_list_pane_t1_ParamLimits

0xd6f6,	// (0x00020ce6) popup_info_list_pane_t1

0xd710,	// (0x00020d00) popup_info_list_pane_t2_ParamLimits

0xd710,	// (0x00020d00) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x00022b9f) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x00022b9f) popup_info_list_pane_t

0xd38f,	// (0x0002097f) bg_popup_window_pane_cp12

0x1839,	// (0x00014e29) find_popup_pane

0xd3f3,	// (0x000209e3) bg_popup_window_pane_cp3

0xd72a,	// (0x00020d1a) heading_pane_cp3

0xd736,	// (0x00020d26) listscroll_popup_graphic_pane

0xd38f,	// (0x0002097f) bg_popup_window_pane_cp4

0xa523,	// (0x0001db13) heading_pane_cp4

0xd742,	// (0x00020d32) listscroll_popup_colour_pane

0xd74a,	// (0x00020d3a) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xd74a,	// (0x00020d3a) cell_large_graphic_colour_none_popup_pane

0xa52b,	// (0x0001db1b) grid_large_graphic_colour_popup_pane_ParamLimits

0xa52b,	// (0x0001db1b) grid_large_graphic_colour_popup_pane

0xa547,	// (0x0001db37) listscroll_popup_colour_pane_g1_ParamLimits

0xa547,	// (0x0001db37) listscroll_popup_colour_pane_g1

0xa55e,	// (0x0001db4e) listscroll_popup_colour_pane_g2_ParamLimits

0xa55e,	// (0x0001db4e) listscroll_popup_colour_pane_g2

0xd75a,	// (0x00020d4a) listscroll_popup_colour_pane_g3_ParamLimits

0xd75a,	// (0x00020d4a) listscroll_popup_colour_pane_g3

0xa572,	// (0x0001db62) listscroll_popup_colour_pane_g4_ParamLimits

0xa572,	// (0x0001db62) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x00022ba4) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x00022ba4) listscroll_popup_colour_pane_g

0xd76a,	// (0x00020d5a) scroll_pane_cp6_ParamLimits

0xd76a,	// (0x00020d5a) scroll_pane_cp6

0xa581,	// (0x0001db71) cell_large_graphic_colour_popup_pane_ParamLimits

0xa581,	// (0x0001db71) cell_large_graphic_colour_popup_pane

0xd77c,	// (0x00020d6c) cell_large_graphic_colour_none_popup_pane_t1

0xd38f,	// (0x0002097f) grid_highlight_pane_cp5

0xd78b,	// (0x00020d7b) cell_large_graphic_colour_popup_pane_g1

0xd793,	// (0x00020d83) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x00022bad) cell_large_graphic_colour_popup_pane_g

0xd79b,	// (0x00020d8b) cell_large_graphic_colour_popup_pane_g2_copy1

0xd7a4,	// (0x00020d94) grid_highlight_pane_cp4

0xd7ac,	// (0x00020d9c) bg_popup_window_pane_cp8_ParamLimits

0xd7ac,	// (0x00020d9c) bg_popup_window_pane_cp8

0xd7c7,	// (0x00020db7) popup_snote_single_text_window_g1_ParamLimits

0xd7c7,	// (0x00020db7) popup_snote_single_text_window_g1

0xd7d9,	// (0x00020dc9) popup_snote_single_text_window_t1_ParamLimits

0xd7d9,	// (0x00020dc9) popup_snote_single_text_window_t1

0xd7ec,	// (0x00020ddc) popup_snote_single_text_window_t2_ParamLimits

0xd7ec,	// (0x00020ddc) popup_snote_single_text_window_t2

0xd7ff,	// (0x00020def) popup_snote_single_text_window_t3_ParamLimits

0xd7ff,	// (0x00020def) popup_snote_single_text_window_t3

0xd838,	// (0x00020e28) popup_snote_single_text_window_t4_ParamLimits

0xd838,	// (0x00020e28) popup_snote_single_text_window_t4

0xd86c,	// (0x00020e5c) popup_snote_single_text_window_t5_ParamLimits

0xd86c,	// (0x00020e5c) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x00022bb2) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x00022bb2) popup_snote_single_text_window_t

0xd89b,	// (0x00020e8b) bg_popup_window_pane_cp9_ParamLimits

0xd89b,	// (0x00020e8b) bg_popup_window_pane_cp9

0xd7c7,	// (0x00020db7) popup_snote_single_graphic_window_g1_ParamLimits

0xd7c7,	// (0x00020db7) popup_snote_single_graphic_window_g1

0xd8a9,	// (0x00020e99) popup_snote_single_graphic_window_g2_ParamLimits

0xd8a9,	// (0x00020e99) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x00022bbd) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x00022bbd) popup_snote_single_graphic_window_g

0xd8b5,	// (0x00020ea5) popup_snote_single_graphic_window_t1_ParamLimits

0xd8b5,	// (0x00020ea5) popup_snote_single_graphic_window_t1

0xd8c8,	// (0x00020eb8) popup_snote_single_graphic_window_t2_ParamLimits

0xd8c8,	// (0x00020eb8) popup_snote_single_graphic_window_t2

0xd7ff,	// (0x00020def) popup_snote_single_graphic_window_t3_ParamLimits

0xd7ff,	// (0x00020def) popup_snote_single_graphic_window_t3

0xd838,	// (0x00020e28) popup_snote_single_graphic_window_t4_ParamLimits

0xd838,	// (0x00020e28) popup_snote_single_graphic_window_t4

0xd86c,	// (0x00020e5c) popup_snote_single_graphic_window_t5_ParamLimits

0xd86c,	// (0x00020e5c) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x00022bc2) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x00022bc2) popup_snote_single_graphic_window_t

0xb992,	// (0x0001ef82) grid_graphic_popup_pane_ParamLimits

0xb992,	// (0x0001ef82) grid_graphic_popup_pane

0xb9b5,	// (0x0001efa5) listscroll_popup_graphic_pane_g1_ParamLimits

0xb9b5,	// (0x0001efa5) listscroll_popup_graphic_pane_g1

0xb9c9,	// (0x0001efb9) listscroll_popup_graphic_pane_g2_ParamLimits

0xb9c9,	// (0x0001efb9) listscroll_popup_graphic_pane_g2

0x0001,

0xf997,	// (0x00022f87) listscroll_popup_graphic_pane_g_ParamLimits

0xf997,	// (0x00022f87) listscroll_popup_graphic_pane_g

0x1175,	// (0x00014765) scroll_pane_cp5

0xb94d,	// (0x0001ef3d) cell_graphic_popup_pane_ParamLimits

0xb94d,	// (0x0001ef3d) cell_graphic_popup_pane

0x17e2,	// (0x00014dd2) cell_graphic_popup_pane_g1

0x17ea,	// (0x00014dda) cell_graphic_popup_pane_g2

0xd79b,	// (0x00020d8b) cell_graphic_popup_pane_g3

0x0002,

0xf990,	// (0x00022f80) cell_graphic_popup_pane_g

0x17f3,	// (0x00014de3) cell_graphic_popup_pane_t2

0xd7a4,	// (0x00020d94) grid_highlight_pane_cp3

0xd8ed,	// (0x00020edd) list_gen_pane_ParamLimits

0xd8ed,	// (0x00020edd) list_gen_pane

0xd916,	// (0x00020f06) scroll_pane

0xb920,	// (0x0001ef10) bg_list_pane_g1_ParamLimits

0xb920,	// (0x0001ef10) bg_list_pane_g1

0x1799,	// (0x00014d89) bg_list_pane_g2_ParamLimits

0x1799,	// (0x00014d89) bg_list_pane_g2

0x17ac,	// (0x00014d9c) bg_list_pane_g3_ParamLimits

0x17ac,	// (0x00014d9c) bg_list_pane_g3

0x17be,	// (0x00014dae) bg_list_pane_g4_ParamLimits

0x17be,	// (0x00014dae) bg_list_pane_g4

0xb93b,	// (0x0001ef2b) bg_list_pane_g5_ParamLimits

0xb93b,	// (0x0001ef2b) bg_list_pane_g5

0x0004,

0xf985,	// (0x00022f75) bg_list_pane_g_ParamLimits

0xf985,	// (0x00022f75) bg_list_pane_g

0xb8c4,	// (0x0001eeb4) list_double2_graphic_large_graphic_pane_ParamLimits

0xb8c4,	// (0x0001eeb4) list_double2_graphic_large_graphic_pane

0xb8c4,	// (0x0001eeb4) list_double2_graphic_pane_ParamLimits

0xb8c4,	// (0x0001eeb4) list_double2_graphic_pane

0xb8c4,	// (0x0001eeb4) list_double2_large_graphic_pane_ParamLimits

0xb8c4,	// (0x0001eeb4) list_double2_large_graphic_pane

0xb8d6,	// (0x0001eec6) list_double2_pane_ParamLimits

0xb8d6,	// (0x0001eec6) list_double2_pane

0xb8c4,	// (0x0001eeb4) list_double_graphic_heading_pane_ParamLimits

0xb8c4,	// (0x0001eeb4) list_double_graphic_heading_pane

0xb8c4,	// (0x0001eeb4) list_double_graphic_pane_ParamLimits

0xb8c4,	// (0x0001eeb4) list_double_graphic_pane

0xb8c4,	// (0x0001eeb4) list_double_heading_pane_ParamLimits

0xb8c4,	// (0x0001eeb4) list_double_heading_pane

0xb8c4,	// (0x0001eeb4) list_double_large_graphic_pane_ParamLimits

0xb8c4,	// (0x0001eeb4) list_double_large_graphic_pane

0xb8c4,	// (0x0001eeb4) list_double_number_pane_ParamLimits

0xb8c4,	// (0x0001eeb4) list_double_number_pane

0xb8c4,	// (0x0001eeb4) list_double_pane_ParamLimits

0xb8c4,	// (0x0001eeb4) list_double_pane

0xb8c4,	// (0x0001eeb4) list_double_time_pane_ParamLimits

0xb8c4,	// (0x0001eeb4) list_double_time_pane

0xb8c4,	// (0x0001eeb4) list_setting_number_pane_ParamLimits

0xb8c4,	// (0x0001eeb4) list_setting_number_pane

0xb8c4,	// (0x0001eeb4) list_setting_pane_ParamLimits

0xb8c4,	// (0x0001eeb4) list_setting_pane

0x9e20,	// (0x0001d410) list_single_2graphic_pane_ParamLimits

0x9e20,	// (0x0001d410) list_single_2graphic_pane

0x9e20,	// (0x0001d410) list_single_graphic_heading_pane_ParamLimits

0x9e20,	// (0x0001d410) list_single_graphic_heading_pane

0x9e20,	// (0x0001d410) list_single_graphic_pane_ParamLimits

0x9e20,	// (0x0001d410) list_single_graphic_pane

0x9e20,	// (0x0001d410) list_single_heading_pane_ParamLimits

0x9e20,	// (0x0001d410) list_single_heading_pane

0xb8c4,	// (0x0001eeb4) list_single_large_graphic_pane_ParamLimits

0xb8c4,	// (0x0001eeb4) list_single_large_graphic_pane

0x9e20,	// (0x0001d410) list_single_number_heading_pane_ParamLimits

0x9e20,	// (0x0001d410) list_single_number_heading_pane

0x9e20,	// (0x0001d410) list_single_number_pane_ParamLimits

0x9e20,	// (0x0001d410) list_single_number_pane

0x9e20,	// (0x0001d410) list_single_pane_ParamLimits

0x9e20,	// (0x0001d410) list_single_pane

0xd38f,	// (0x0002097f) list_highlight_pane_cp1

0x472f,	// (0x00017d1f) list_single_pane_g1_ParamLimits

0x472f,	// (0x00017d1f) list_single_pane_g1

0x473b,	// (0x00017d2b) list_single_pane_g2_ParamLimits

0x473b,	// (0x00017d2b) list_single_pane_g2

0x0001,

0xf5e4,	// (0x00022bd4) list_single_pane_g_ParamLimits

0xf5e4,	// (0x00022bd4) list_single_pane_g

0x48f4,	// (0x00017ee4) list_single_pane_t1_ParamLimits

0x48f4,	// (0x00017ee4) list_single_pane_t1

0x472f,	// (0x00017d1f) list_single_number_pane_g1_ParamLimits

0x472f,	// (0x00017d1f) list_single_number_pane_g1

0x473b,	// (0x00017d2b) list_single_number_pane_g2_ParamLimits

0x473b,	// (0x00017d2b) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x00022bd4) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x00022bd4) list_single_number_pane_g

0x478d,	// (0x00017d7d) list_single_number_pane_t1_ParamLimits

0x478d,	// (0x00017d7d) list_single_number_pane_t1

0x9de3,	// (0x0001d3d3) list_single_number_pane_t2_ParamLimits

0x9de3,	// (0x0001d3d3) list_single_number_pane_t2

0x0001,

0xf946,	// (0x00022f36) list_single_number_pane_t_ParamLimits

0xf946,	// (0x00022f36) list_single_number_pane_t

0x4004,	// (0x000175f4) list_single_graphic_pane_g1_ParamLimits

0x4004,	// (0x000175f4) list_single_graphic_pane_g1

0x472f,	// (0x00017d1f) list_single_graphic_pane_g2_ParamLimits

0x472f,	// (0x00017d1f) list_single_graphic_pane_g2

0x473b,	// (0x00017d2b) list_single_graphic_pane_g3_ParamLimits

0x473b,	// (0x00017d2b) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x00022bcd) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x00022bcd) list_single_graphic_pane_g

0x478d,	// (0x00017d7d) list_single_graphic_pane_t1_ParamLimits

0x478d,	// (0x00017d7d) list_single_graphic_pane_t1

0x472f,	// (0x00017d1f) list_single_heading_pane_g1_ParamLimits

0x472f,	// (0x00017d1f) list_single_heading_pane_g1

0x473b,	// (0x00017d2b) list_single_heading_pane_g2_ParamLimits

0x473b,	// (0x00017d2b) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x00022bd4) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x00022bd4) list_single_heading_pane_g

0x9853,	// (0x0001ce43) list_single_heading_pane_t1_ParamLimits

0x9853,	// (0x0001ce43) list_single_heading_pane_t1

0x9869,	// (0x0001ce59) list_single_heading_pane_t2_ParamLimits

0x9869,	// (0x0001ce59) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x00022bd9) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x00022bd9) list_single_heading_pane_t

0x472f,	// (0x00017d1f) list_single_number_heading_pane_g1_ParamLimits

0x472f,	// (0x00017d1f) list_single_number_heading_pane_g1

0x473b,	// (0x00017d2b) list_single_number_heading_pane_g2_ParamLimits

0x473b,	// (0x00017d2b) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x00022bd4) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x00022bd4) list_single_number_heading_pane_g

0x9853,	// (0x0001ce43) list_single_number_heading_pane_t1_ParamLimits

0x9853,	// (0x0001ce43) list_single_number_heading_pane_t1

0x987b,	// (0x0001ce6b) list_single_number_heading_pane_t2_ParamLimits

0x987b,	// (0x0001ce6b) list_single_number_heading_pane_t2

0x48d0,	// (0x00017ec0) list_single_number_heading_pane_t3_ParamLimits

0x48d0,	// (0x00017ec0) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x00022bde) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x00022bde) list_single_number_heading_pane_t

0x4004,	// (0x000175f4) list_single_graphic_heading_pane_g1_ParamLimits

0x4004,	// (0x000175f4) list_single_graphic_heading_pane_g1

0x988d,	// (0x0001ce7d) list_single_graphic_heading_pane_g4_ParamLimits

0x988d,	// (0x0001ce7d) list_single_graphic_heading_pane_g4

0x473b,	// (0x00017d2b) list_single_graphic_heading_pane_g5_ParamLimits

0x473b,	// (0x00017d2b) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x00022be5) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x00022be5) list_single_graphic_heading_pane_g

0x9853,	// (0x0001ce43) list_single_graphic_heading_pane_t1_ParamLimits

0x9853,	// (0x0001ce43) list_single_graphic_heading_pane_t1

0x989e,	// (0x0001ce8e) list_single_graphic_heading_pane_t2_ParamLimits

0x989e,	// (0x0001ce8e) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x00022bec) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x00022bec) list_single_graphic_heading_pane_t

0x490a,	// (0x00017efa) list_single_large_graphic_pane_g1_ParamLimits

0x490a,	// (0x00017efa) list_single_large_graphic_pane_g1

0x4916,	// (0x00017f06) list_single_large_graphic_pane_g2_ParamLimits

0x4916,	// (0x00017f06) list_single_large_graphic_pane_g2

0x4922,	// (0x00017f12) list_single_large_graphic_pane_g3_ParamLimits

0x4922,	// (0x00017f12) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x00022bf1) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00022bf1) list_single_large_graphic_pane_g

0xef4d,	// (0x0002253d) wait_border_pane_g2_copy1

0x98b0,	// (0x0001cea0) list_single_large_graphic_pane_g4_cp2

0x492e,	// (0x00017f1e) list_single_large_graphic_pane_t1_ParamLimits

0x492e,	// (0x00017f1e) list_single_large_graphic_pane_t1

0x4010,	// (0x00017600) list_double_pane_g1_ParamLimits

0x4010,	// (0x00017600) list_double_pane_g1

0x401c,	// (0x0001760c) list_double_pane_g2_ParamLimits

0x401c,	// (0x0001760c) list_double_pane_g2

0x0001,

0xf608,	// (0x00022bf8) list_double_pane_g_ParamLimits

0xf608,	// (0x00022bf8) list_double_pane_g

0x4832,	// (0x00017e22) list_double_pane_t1_ParamLimits

0x4832,	// (0x00017e22) list_double_pane_t1

0x98b8,	// (0x0001cea8) list_double_pane_t2_ParamLimits

0x98b8,	// (0x0001cea8) list_double_pane_t2

0x0001,

0xf60d,	// (0x00022bfd) list_double_pane_t_ParamLimits

0xf60d,	// (0x00022bfd) list_double_pane_t

0x98ca,	// (0x0001ceba) list_double2_pane_g1_ParamLimits

0x98ca,	// (0x0001ceba) list_double2_pane_g1

0x41ef,	// (0x000177df) list_double2_pane_g2_ParamLimits

0x41ef,	// (0x000177df) list_double2_pane_g2

0x0001,

0xf612,	// (0x00022c02) list_double2_pane_g_ParamLimits

0xf612,	// (0x00022c02) list_double2_pane_g

0x98db,	// (0x0001cecb) list_double2_pane_t1_ParamLimits

0x98db,	// (0x0001cecb) list_double2_pane_t1

0x98f1,	// (0x0001cee1) list_double2_pane_t2_ParamLimits

0x98f1,	// (0x0001cee1) list_double2_pane_t2

0x0001,

0xf617,	// (0x00022c07) list_double2_pane_t_ParamLimits

0xf617,	// (0x00022c07) list_double2_pane_t

0x4010,	// (0x00017600) list_double_number_pane_g1_ParamLimits

0x4010,	// (0x00017600) list_double_number_pane_g1

0x401c,	// (0x0001760c) list_double_number_pane_g2_ParamLimits

0x401c,	// (0x0001760c) list_double_number_pane_g2

0x0001,

0xf608,	// (0x00022bf8) list_double_number_pane_g_ParamLimits

0xf608,	// (0x00022bf8) list_double_number_pane_g

0x9903,	// (0x0001cef3) list_double_number_pane_t1_ParamLimits

0x9903,	// (0x0001cef3) list_double_number_pane_t1

0x4028,	// (0x00017618) list_double_number_pane_t2_ParamLimits

0x4028,	// (0x00017618) list_double_number_pane_t2

0x9915,	// (0x0001cf05) list_double_number_pane_t3_ParamLimits

0x9915,	// (0x0001cf05) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x00022c0c) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x00022c0c) list_double_number_pane_t

0x4004,	// (0x000175f4) list_double_graphic_pane_g1_ParamLimits

0x4004,	// (0x000175f4) list_double_graphic_pane_g1

0x9927,	// (0x0001cf17) list_double_graphic_pane_g2_ParamLimits

0x9927,	// (0x0001cf17) list_double_graphic_pane_g2

0x9936,	// (0x0001cf26) list_double_graphic_pane_g3_ParamLimits

0x9936,	// (0x0001cf26) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x00022c13) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x00022c13) list_double_graphic_pane_g

0x994e,	// (0x0001cf3e) list_double_graphic_pane_t1_ParamLimits

0x994e,	// (0x0001cf3e) list_double_graphic_pane_t1

0x9964,	// (0x0001cf54) list_double_graphic_pane_t2_ParamLimits

0x9964,	// (0x0001cf54) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x00022c1c) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x00022c1c) list_double_graphic_pane_t

0x9976,	// (0x0001cf66) list_double2_graphic_pane_g1_ParamLimits

0x9976,	// (0x0001cf66) list_double2_graphic_pane_g1

0x4010,	// (0x00017600) list_double2_graphic_pane_g2_ParamLimits

0x4010,	// (0x00017600) list_double2_graphic_pane_g2

0x401c,	// (0x0001760c) list_double2_graphic_pane_g3_ParamLimits

0x401c,	// (0x0001760c) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x00022c21) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x00022c21) list_double2_graphic_pane_g

0x9982,	// (0x0001cf72) list_double2_graphic_pane_t1_ParamLimits

0x9982,	// (0x0001cf72) list_double2_graphic_pane_t1

0x9998,	// (0x0001cf88) list_double2_graphic_pane_t2_ParamLimits

0x9998,	// (0x0001cf88) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x00022c28) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x00022c28) list_double2_graphic_pane_t

0x99aa,	// (0x0001cf9a) list_double_large_graphic_pane_g1_ParamLimits

0x99aa,	// (0x0001cf9a) list_double_large_graphic_pane_g1

0x99d3,	// (0x0001cfc3) list_double_large_graphic_pane_g2_ParamLimits

0x99d3,	// (0x0001cfc3) list_double_large_graphic_pane_g2

0x401c,	// (0x0001760c) list_double_large_graphic_pane_g3_ParamLimits

0x401c,	// (0x0001760c) list_double_large_graphic_pane_g3

0x99e4,	// (0x0001cfd4) list_double_large_graphic_pane_g4_ParamLimits

0x99e4,	// (0x0001cfd4) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x00022c2d) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x00022c2d) list_double_large_graphic_pane_g

0x99f5,	// (0x0001cfe5) list_double_large_graphic_pane_t1_ParamLimits

0x99f5,	// (0x0001cfe5) list_double_large_graphic_pane_t1

0x9a0e,	// (0x0001cffe) list_double_large_graphic_pane_t2_ParamLimits

0x9a0e,	// (0x0001cffe) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x00022c38) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x00022c38) list_double_large_graphic_pane_t

0x9a20,	// (0x0001d010) list_double2_large_graphic_pane_g1_ParamLimits

0x9a20,	// (0x0001d010) list_double2_large_graphic_pane_g1

0x9a2c,	// (0x0001d01c) list_double2_large_graphic_pane_g2_ParamLimits

0x9a2c,	// (0x0001d01c) list_double2_large_graphic_pane_g2

0x9a3d,	// (0x0001d02d) list_double2_large_graphic_pane_g3_ParamLimits

0x9a3d,	// (0x0001d02d) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x00022c3d) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x00022c3d) list_double2_large_graphic_pane_g

0x9a49,	// (0x0001d039) list_double2_large_graphic_pane_t1_ParamLimits

0x9a49,	// (0x0001d039) list_double2_large_graphic_pane_t1

0x9a5f,	// (0x0001d04f) list_double2_large_graphic_pane_t2_ParamLimits

0x9a5f,	// (0x0001d04f) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x00022c44) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x00022c44) list_double2_large_graphic_pane_t

0x9a71,	// (0x0001d061) list_double_heading_pane_g1_ParamLimits

0x9a71,	// (0x0001d061) list_double_heading_pane_g1

0x9a82,	// (0x0001d072) list_double_heading_pane_g2_ParamLimits

0x9a82,	// (0x0001d072) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x00022c49) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x00022c49) list_double_heading_pane_g

0x9a8e,	// (0x0001d07e) list_double_heading_pane_t1_ParamLimits

0x9a8e,	// (0x0001d07e) list_double_heading_pane_t1

0x9aa4,	// (0x0001d094) list_double_heading_pane_t2_ParamLimits

0x9aa4,	// (0x0001d094) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x00022c4e) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x00022c4e) list_double_heading_pane_t

0x9ab6,	// (0x0001d0a6) list_double_graphic_heading_pane_g1_ParamLimits

0x9ab6,	// (0x0001d0a6) list_double_graphic_heading_pane_g1

0x9a71,	// (0x0001d061) list_double_graphic_heading_pane_g2_ParamLimits

0x9a71,	// (0x0001d061) list_double_graphic_heading_pane_g2

0x9a82,	// (0x0001d072) list_double_graphic_heading_pane_g3_ParamLimits

0x9a82,	// (0x0001d072) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x00022c53) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x00022c53) list_double_graphic_heading_pane_g

0x9ac2,	// (0x0001d0b2) list_double_graphic_heading_pane_t1_ParamLimits

0x9ac2,	// (0x0001d0b2) list_double_graphic_heading_pane_t1

0x9998,	// (0x0001cf88) list_double_graphic_heading_pane_t2_ParamLimits

0x9998,	// (0x0001cf88) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x00022c5a) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x00022c5a) list_double_graphic_heading_pane_t

0x99d3,	// (0x0001cfc3) list_double_time_pane_g1_ParamLimits

0x99d3,	// (0x0001cfc3) list_double_time_pane_g1

0x401c,	// (0x0001760c) list_double_time_pane_g2_ParamLimits

0x401c,	// (0x0001760c) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x00022c5f) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x00022c5f) list_double_time_pane_g

0x403e,	// (0x0001762e) list_double_time_pane_t1_ParamLimits

0x403e,	// (0x0001762e) list_double_time_pane_t1

0x9ad8,	// (0x0001d0c8) list_double_time_pane_t2_ParamLimits

0x9ad8,	// (0x0001d0c8) list_double_time_pane_t2

0x9aea,	// (0x0001d0da) list_double_time_pane_t3_ParamLimits

0x9aea,	// (0x0001d0da) list_double_time_pane_t3

0x9afc,	// (0x0001d0ec) list_double_time_pane_t4_ParamLimits

0x9afc,	// (0x0001d0ec) list_double_time_pane_t4

0x0003,

0xf674,	// (0x00022c64) list_double_time_pane_t_ParamLimits

0xf674,	// (0x00022c64) list_double_time_pane_t

0x9b0e,	// (0x0001d0fe) list_setting_pane_g1_ParamLimits

0x9b0e,	// (0x0001d0fe) list_setting_pane_g1

0x9a82,	// (0x0001d072) list_setting_pane_g2_ParamLimits

0x9a82,	// (0x0001d072) list_setting_pane_g2

0x0001,

0xf67d,	// (0x00022c6d) list_setting_pane_g_ParamLimits

0xf67d,	// (0x00022c6d) list_setting_pane_g

0x9b1a,	// (0x0001d10a) list_setting_pane_t1_ParamLimits

0x9b1a,	// (0x0001d10a) list_setting_pane_t1

0x9b31,	// (0x0001d121) list_setting_pane_t2_ParamLimits

0x9b31,	// (0x0001d121) list_setting_pane_t2

0x0002,

0xf682,	// (0x00022c72) list_setting_pane_t_ParamLimits

0xf682,	// (0x00022c72) list_setting_pane_t

0x9b6e,	// (0x0001d15e) set_value_pane_cp_ParamLimits

0x9b6e,	// (0x0001d15e) set_value_pane_cp

0x9b7a,	// (0x0001d16a) list_setting_number_pane_g1_ParamLimits

0x9b7a,	// (0x0001d16a) list_setting_number_pane_g1

0x9b86,	// (0x0001d176) list_setting_number_pane_g2_ParamLimits

0x9b86,	// (0x0001d176) list_setting_number_pane_g2

0x0001,

0xf689,	// (0x00022c79) list_setting_number_pane_g_ParamLimits

0xf689,	// (0x00022c79) list_setting_number_pane_g

0x9b92,	// (0x0001d182) list_setting_number_pane_t1_ParamLimits

0x9b92,	// (0x0001d182) list_setting_number_pane_t1

0x9ba6,	// (0x0001d196) list_setting_number_pane_t2_ParamLimits

0x9ba6,	// (0x0001d196) list_setting_number_pane_t2

0x9bbd,	// (0x0001d1ad) list_setting_number_pane_t3_ParamLimits

0x9bbd,	// (0x0001d1ad) list_setting_number_pane_t3

0x0003,

0xf68e,	// (0x00022c7e) list_setting_number_pane_t_ParamLimits

0xf68e,	// (0x00022c7e) list_setting_number_pane_t

0x9b6e,	// (0x0001d15e) set_value_pane_ParamLimits

0x9b6e,	// (0x0001d15e) set_value_pane

0xd94b,	// (0x00020f3b) bg_set_opt_pane_ParamLimits

0xd94b,	// (0x00020f3b) bg_set_opt_pane

0x4462,	// (0x00017a52) set_value_pane_t1

0xd96c,	// (0x00020f5c) slider_set_pane_cp3

0xd975,	// (0x00020f65) volume_small_pane_cp

0xd97e,	// (0x00020f6e) list_form_gen_pane

0xd93a,	// (0x00020f2a) scroll_pane_cp8

0x9c00,	// (0x0001d1f0) form_field_data_pane_ParamLimits

0x9c00,	// (0x0001d1f0) form_field_data_pane

0x9c17,	// (0x0001d207) form_field_data_wide_pane_ParamLimits

0x9c17,	// (0x0001d207) form_field_data_wide_pane

0x9c37,	// (0x0001d227) form_field_popup_pane_ParamLimits

0x9c37,	// (0x0001d227) form_field_popup_pane

0x9c4f,	// (0x0001d23f) form_field_popup_wide_pane_ParamLimits

0x9c4f,	// (0x0001d23f) form_field_popup_wide_pane

0x44e6,	// (0x00017ad6) form_field_slider_pane_ParamLimits

0x44e6,	// (0x00017ad6) form_field_slider_pane

0x44f9,	// (0x00017ae9) form_field_slider_wide_pane_ParamLimits

0x44f9,	// (0x00017ae9) form_field_slider_wide_pane

0xd987,	// (0x00020f77) data_form_pane

0xa5a8,	// (0x0001db98) form_field_data_pane_t1

0xd993,	// (0x00020f83) input_focus_pane

0xd9a1,	// (0x00020f91) data_form_wide_pane

0x4520,	// (0x00017b10) form_field_data_wide_pane_t1

0xd7b9,	// (0x00020da9) input_focus_pane_cp6

0x9c70,	// (0x0001d260) form_field_popup_pane_t1

0xd993,	// (0x00020f83) input_focus_pane_cp7

0xd987,	// (0x00020f77) list_form_pane

0x4562,	// (0x00017b52) form_field_popup_wide_pane_t1

0xd993,	// (0x00020f83) input_focus_pane_cp8

0xd9cd,	// (0x00020fbd) list_form_wide_pane

0x9c90,	// (0x0001d280) form_field_slider_pane_t1_ParamLimits

0x9c90,	// (0x0001d280) form_field_slider_pane_t1

0x9ca6,	// (0x0001d296) form_field_slider_pane_t2_ParamLimits

0x9ca6,	// (0x0001d296) form_field_slider_pane_t2

0x0001,

0xf69e,	// (0x00022c8e) form_field_slider_pane_t_ParamLimits

0xf69e,	// (0x00022c8e) form_field_slider_pane_t

0xd3dd,	// (0x000209cd) input_focus_pane_cp9_ParamLimits

0xd3dd,	// (0x000209cd) input_focus_pane_cp9

0x9cbb,	// (0x0001d2ab) slider_cont_pane_ParamLimits

0x9cbb,	// (0x0001d2ab) slider_cont_pane

0xd9dc,	// (0x00020fcc) form_field_slider_wide_pane_t1_ParamLimits

0xd9dc,	// (0x00020fcc) form_field_slider_wide_pane_t1

0x45b7,	// (0x00017ba7) form_field_slider_wide_pane_t2_ParamLimits

0x45b7,	// (0x00017ba7) form_field_slider_wide_pane_t2

0x0001,

0xf6a3,	// (0x00022c93) form_field_slider_wide_pane_t_ParamLimits

0xf6a3,	// (0x00022c93) form_field_slider_wide_pane_t

0xd3dd,	// (0x000209cd) input_focus_pane_cp10_ParamLimits

0xd3dd,	// (0x000209cd) input_focus_pane_cp10

0x9ccf,	// (0x0001d2bf) slider_cont_pane_cp1_ParamLimits

0x9ccf,	// (0x0001d2bf) slider_cont_pane_cp1

0x9ce5,	// (0x0001d2d5) slider_form_pane_cp

0xd9ee,	// (0x00020fde) input_focus_pane_g1

0xd9f6,	// (0x00020fe6) input_focus_pane_g2

0xd9fe,	// (0x00020fee) input_focus_pane_g3

0xda06,	// (0x00020ff6) input_focus_pane_g4

0xda0e,	// (0x00020ffe) input_focus_pane_g5

0xda16,	// (0x00021006) input_focus_pane_g6

0xda1e,	// (0x0002100e) input_focus_pane_g7

0xda26,	// (0x00021016) input_focus_pane_g8

0xda2e,	// (0x0002101e) input_focus_pane_g9

0xd30d,	// (0x000208fd) input_focus_pane_g10

0x0009,

0xf6a8,	// (0x00022c98) input_focus_pane_g

0xef56,	// (0x00022546) wait_border_pane_g3_copy1

0x9ced,	// (0x0001d2dd) data_form_pane_t1

0xd30d,	// (0x000208fd) wait_anim_pane_g1_copy1

0x9df5,	// (0x0001d3e5) data_form_wide_pane_t1

0xda36,	// (0x00021026) list_form_graphic_pane_cp_ParamLimits

0xda36,	// (0x00021026) list_form_graphic_pane_cp

0x172c,	// (0x00014d1c) slider_form_pane_g1

0x1735,	// (0x00014d25) slider_form_pane_g2

0x0006,

0xf976,	// (0x00022f66) slider_form_pane_g

0x9d06,	// (0x0001d2f6) list_form_graphic_pane_ParamLimits

0x9d06,	// (0x0001d2f6) list_form_graphic_pane

0x4617,	// (0x00017c07) list_form_graphic_pane_g1

0x461f,	// (0x00017c0f) list_form_graphic_pane_t1_ParamLimits

0x461f,	// (0x00017c0f) list_form_graphic_pane_t1

0xd3f3,	// (0x000209e3) list_highlight_pane_cp5_ParamLimits

0xd3f3,	// (0x000209e3) list_highlight_pane_cp5

0x9d1b,	// (0x0001d30b) find_pane_g1

0xda4a,	// (0x0002103a) input_find_pane

0x9d26,	// (0x0001d316) input_find_pane_g1_ParamLimits

0x9d26,	// (0x0001d316) input_find_pane_g1

0x4649,	// (0x00017c39) input_find_pane_t1_ParamLimits

0x4649,	// (0x00017c39) input_find_pane_t1

0x465e,	// (0x00017c4e) input_find_pane_t2_ParamLimits

0x465e,	// (0x00017c4e) input_find_pane_t2

0x0001,

0xf6bd,	// (0x00022cad) input_find_pane_t_ParamLimits

0xf6bd,	// (0x00022cad) input_find_pane_t

0xda53,	// (0x00021043) input_focus_pane_cp5_ParamLimits

0xda53,	// (0x00021043) input_focus_pane_cp5

0xd3dd,	// (0x000209cd) bg_popup_window_pane_cp2_ParamLimits

0xd3dd,	// (0x000209cd) bg_popup_window_pane_cp2

0xda6d,	// (0x0002105d) listscroll_menu_pane_ParamLimits

0xda6d,	// (0x0002105d) listscroll_menu_pane

0xda79,	// (0x00021069) popup_submenu_window_ParamLimits

0xda79,	// (0x00021069) popup_submenu_window

0xda9d,	// (0x0002108d) find_popup_pane_g1

0xdaa5,	// (0x00021095) input_popup_find_pane_cp

0xda53,	// (0x00021043) input_focus_pane_cp4_ParamLimits

0xda53,	// (0x00021043) input_focus_pane_cp4

0xdaaf,	// (0x0002109f) input_popup_find_pane_t1_ParamLimits

0xdaaf,	// (0x0002109f) input_popup_find_pane_t1

0xd38f,	// (0x0002097f) bg_popup_sub_pane_cp

0xdadd,	// (0x000210cd) listscroll_popup_sub_pane

0xdae5,	// (0x000210d5) list_submenu_pane_ParamLimits

0xdae5,	// (0x000210d5) list_submenu_pane

0xdaf6,	// (0x000210e6) scroll_pane_cp4

0xda36,	// (0x00021026) list_single_popup_submenu_pane_ParamLimits

0xda36,	// (0x00021026) list_single_popup_submenu_pane

0xdafe,	// (0x000210ee) list_single_popup_submenu_pane_g1

0xdb06,	// (0x000210f6) list_single_popup_submenu_pane_t1_ParamLimits

0xdb06,	// (0x000210f6) list_single_popup_submenu_pane_t1

0xd3dd,	// (0x000209cd) bg_active_tab_pane_cp1_ParamLimits

0xd3dd,	// (0x000209cd) bg_active_tab_pane_cp1

0x115b,	// (0x0001474b) tabs_2_active_pane_g1

0xa5cc,	// (0x0001dbbc) tabs_2_active_pane_t1

0xd3dd,	// (0x000209cd) bg_passive_tab_pane_cp1_ParamLimits

0xd3dd,	// (0x000209cd) bg_passive_tab_pane_cp1

0x115b,	// (0x0001474b) tabs_2_passive_pane_g1

0xa5cc,	// (0x0001dbbc) tabs_2_passive_pane_t1

0xd3f3,	// (0x000209e3) bg_active_tab_pane_cp4

0xa5e2,	// (0x0001dbd2) tabs_2_long_active_pane_t1

0xdea5,	// (0x00021495) bg_passive_tab_pane_cp4

0xea5b,	// (0x0002204b) list_single_midp_graphic_pane_g4_ParamLimits

0xd3f3,	// (0x000209e3) bg_active_tab_pane_cp5

0xa5f9,	// (0x0001dbe9) tabs_3_long_active_pane_t1

0xdea5,	// (0x00021495) bg_passive_tab_pane_cp5

0xea5b,	// (0x0002204b) list_single_midp_graphic_pane_g4

0xd3f3,	// (0x000209e3) bg_popup_window_pane_cp13_ParamLimits

0xd3f3,	// (0x000209e3) bg_popup_window_pane_cp13

0xdb24,	// (0x00021114) listscroll_popup_fast_pane_ParamLimits

0xdb24,	// (0x00021114) listscroll_popup_fast_pane

0xdb33,	// (0x00021123) grid_popup_fast_pane_ParamLimits

0xdb33,	// (0x00021123) grid_popup_fast_pane

0xdb45,	// (0x00021135) scroll_pane_cp9_ParamLimits

0xdb45,	// (0x00021135) scroll_pane_cp9

0x2db4,	// (0x000163a4) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x2db4,	// (0x000163a4) list_single_graphic_hl_pane_t1_cp2

0xdb69,	// (0x00021159) input_focus_pane_cp20_ParamLimits

0xdb69,	// (0x00021159) input_focus_pane_cp20

0xdb77,	// (0x00021167) query_popup_data_pane_t1_ParamLimits

0xdb77,	// (0x00021167) query_popup_data_pane_t1

0xdb8a,	// (0x0002117a) query_popup_data_pane_t2_ParamLimits

0xdb8a,	// (0x0002117a) query_popup_data_pane_t2

0xdbd0,	// (0x000211c0) query_popup_data_pane_t3_ParamLimits

0xdbd0,	// (0x000211c0) query_popup_data_pane_t3

0xdc11,	// (0x00021201) query_popup_data_pane_t4_ParamLimits

0xdc11,	// (0x00021201) query_popup_data_pane_t4

0xdc4d,	// (0x0002123d) query_popup_data_pane_t5_ParamLimits

0xdc4d,	// (0x0002123d) query_popup_data_pane_t5

0x0004,

0xf6c2,	// (0x00022cb2) query_popup_data_pane_t_ParamLimits

0xf6c2,	// (0x00022cb2) query_popup_data_pane_t

0xd9ee,	// (0x00020fde) bg_set_opt_pane_g1

0xd9f6,	// (0x00020fe6) bg_set_opt_pane_g2

0xd9fe,	// (0x00020fee) bg_set_opt_pane_g3

0xda06,	// (0x00020ff6) bg_set_opt_pane_g4

0xda0e,	// (0x00020ffe) bg_set_opt_pane_g5

0xda16,	// (0x00021006) bg_set_opt_pane_g6

0xda1e,	// (0x0002100e) bg_set_opt_pane_g7

0xda26,	// (0x00021016) bg_set_opt_pane_g8

0xda2e,	// (0x0002101e) bg_set_opt_pane_g9

0x0008,

0xf6cd,	// (0x00022cbd) bg_set_opt_pane_g

0x53b5,	// (0x000189a5) control_top_pane_stacon_ParamLimits

0x53b5,	// (0x000189a5) control_top_pane_stacon

0x5408,	// (0x000189f8) signal_pane_stacon_ParamLimits

0x5408,	// (0x000189f8) signal_pane_stacon

0xe210,	// (0x00021800) stacon_top_pane_g1_ParamLimits

0xe210,	// (0x00021800) stacon_top_pane_g1

0x542d,	// (0x00018a1d) title_pane_stacon_ParamLimits

0x542d,	// (0x00018a1d) title_pane_stacon

0x544f,	// (0x00018a3f) uni_indicator_pane_stacon_ParamLimits

0x544f,	// (0x00018a3f) uni_indicator_pane_stacon

0x5464,	// (0x00018a54) battery_pane_stacon_ParamLimits

0x5464,	// (0x00018a54) battery_pane_stacon

0x54a4,	// (0x00018a94) control_bottom_pane_stacon_ParamLimits

0x54a4,	// (0x00018a94) control_bottom_pane_stacon

0x54c3,	// (0x00018ab3) navi_pane_stacon_ParamLimits

0x54c3,	// (0x00018ab3) navi_pane_stacon

0xe232,	// (0x00021822) stacon_bottom_pane_g1_ParamLimits

0xe232,	// (0x00021822) stacon_bottom_pane_g1

0xdc84,	// (0x00021274) aid_levels_signal_lsc_ParamLimits

0xdc84,	// (0x00021274) aid_levels_signal_lsc

0x5181,	// (0x00018771) signal_pane_stacon_g1_ParamLimits

0x5181,	// (0x00018771) signal_pane_stacon_g1

0x518d,	// (0x0001877d) signal_pane_stacon_g2_ParamLimits

0x518d,	// (0x0001877d) signal_pane_stacon_g2

0x0001,

0xf6e0,	// (0x00022cd0) signal_pane_stacon_g_ParamLimits

0xf6e0,	// (0x00022cd0) signal_pane_stacon_g

0x51c1,	// (0x000187b1) title_pane_stacon_t1_ParamLimits

0x51c1,	// (0x000187b1) title_pane_stacon_t1

0xdc9e,	// (0x0002128e) uni_indicator_pane_stacon_g1

0xdca8,	// (0x00021298) uni_indicator_pane_stacon_g2

0xdcb2,	// (0x000212a2) uni_indicator_pane_stacon_g3

0xdcbc,	// (0x000212ac) uni_indicator_pane_stacon_g4

0x0003,

0xf6ec,	// (0x00022cdc) uni_indicator_pane_stacon_g

0x51e6,	// (0x000187d6) control_top_pane_stacon_g1

0x51ee,	// (0x000187de) control_top_pane_stacon_t1_ParamLimits

0x51ee,	// (0x000187de) control_top_pane_stacon_t1

0xdcc6,	// (0x000212b6) aid_levels_battery_lsc_ParamLimits

0xdcc6,	// (0x000212b6) aid_levels_battery_lsc

0x521f,	// (0x0001880f) battery_pane_stacon_g1_ParamLimits

0x521f,	// (0x0001880f) battery_pane_stacon_g1

0x522b,	// (0x0001881b) battery_pane_stacon_g2_ParamLimits

0x522b,	// (0x0001881b) battery_pane_stacon_g2

0x0001,

0xf6f5,	// (0x00022ce5) battery_pane_stacon_g_ParamLimits

0xf6f5,	// (0x00022ce5) battery_pane_stacon_g

0x525a,	// (0x0001884a) navi_icon_pane_stacon

0x526a,	// (0x0001885a) navi_navi_pane_stacon

0x525a,	// (0x0001884a) navi_text_pane_stacon

0x51e6,	// (0x000187d6) control_bottom_pane_stacon_g1

0x527a,	// (0x0001886a) control_bottom_pane_stacon_t1_ParamLimits

0x527a,	// (0x0001886a) control_bottom_pane_stacon_t1

0xa60f,	// (0x0001dbff) grid_app_pane_ParamLimits

0xa60f,	// (0x0001dbff) grid_app_pane

0xa63d,	// (0x0001dc2d) scroll_pane_cp15_ParamLimits

0xa63d,	// (0x0001dc2d) scroll_pane_cp15

0xa654,	// (0x0001dc44) cell_app_pane_ParamLimits

0xa654,	// (0x0001dc44) cell_app_pane

0xa693,	// (0x0001dc83) cell_app_pane_g1_ParamLimits

0xa693,	// (0x0001dc83) cell_app_pane_g1

0xdeb1,	// (0x000214a1) cell_app_pane_g2_ParamLimits

0xdeb1,	// (0x000214a1) cell_app_pane_g2

0x0001,

0xf6fa,	// (0x00022cea) cell_app_pane_g_ParamLimits

0xf6fa,	// (0x00022cea) cell_app_pane_g

0xdebd,	// (0x000214ad) cell_app_pane_t1_ParamLimits

0xdebd,	// (0x000214ad) cell_app_pane_t1

0xdecf,	// (0x000214bf) grid_highlight_pane_ParamLimits

0xdecf,	// (0x000214bf) grid_highlight_pane

0xd9ee,	// (0x00020fde) cell_highlight_pane_g1

0xd9f6,	// (0x00020fe6) cell_highlight_pane_g2

0xd9fe,	// (0x00020fee) cell_highlight_pane_g3

0xda06,	// (0x00020ff6) cell_highlight_pane_g4

0xda0e,	// (0x00020ffe) cell_highlight_pane_g5

0xda16,	// (0x00021006) cell_highlight_pane_g6

0xda1e,	// (0x0002100e) cell_highlight_pane_g7

0xda26,	// (0x00021016) cell_highlight_pane_g8

0xda2e,	// (0x0002101e) cell_highlight_pane_g9

0xd30d,	// (0x000208fd) cell_highlight_pane_g10

0x0009,

0xf6a8,	// (0x00022c98) cell_highlight_pane_g

0xdee0,	// (0x000214d0) bg_scroll_pane

0x52be,	// (0x000188ae) scroll_handle_pane

0xdf27,	// (0x00021517) scroll_bg_pane_g1

0xdf3c,	// (0x0002152c) scroll_bg_pane_g2

0xdf54,	// (0x00021544) scroll_bg_pane_g3

0x0002,

0xf6ff,	// (0x00022cef) scroll_bg_pane_g

0xdf69,	// (0x00021559) scroll_handle_focus_pane_ParamLimits

0xdf69,	// (0x00021559) scroll_handle_focus_pane

0xdf27,	// (0x00021517) scroll_handle_pane_g1

0xdf76,	// (0x00021566) scroll_handle_pane_g2

0xdf54,	// (0x00021544) scroll_handle_pane_g3

0x0002,

0xf706,	// (0x00022cf6) scroll_handle_pane_g

0xda53,	// (0x00021043) bg_popup_sub_pane_cp21_ParamLimits

0xda53,	// (0x00021043) bg_popup_sub_pane_cp21

0xdf8a,	// (0x0002157a) popup_fep_japan_predictive_window_t1_ParamLimits

0xdf8a,	// (0x0002157a) popup_fep_japan_predictive_window_t1

0xdfa1,	// (0x00021591) popup_fep_japan_predictive_window_t2_ParamLimits

0xdfa1,	// (0x00021591) popup_fep_japan_predictive_window_t2

0xdfd4,	// (0x000215c4) popup_fep_japan_predictive_window_t3_ParamLimits

0xdfd4,	// (0x000215c4) popup_fep_japan_predictive_window_t3

0x0002,

0xf70d,	// (0x00022cfd) popup_fep_japan_predictive_window_t_ParamLimits

0xf70d,	// (0x00022cfd) popup_fep_japan_predictive_window_t

0xd38f,	// (0x0002097f) bg_popup_sub_pane_cp23

0xe00b,	// (0x000215fb) listscroll_japin_cand_pane

0xe013,	// (0x00021603) popup_fep_japan_candidate_window_t1

0xe021,	// (0x00021611) candidate_pane_ParamLimits

0xe021,	// (0x00021611) candidate_pane

0xe034,	// (0x00021624) scroll_pane_cp30

0xe03c,	// (0x0002162c) list_single_popup_jap_candidate_pane_ParamLimits

0xe03c,	// (0x0002162c) list_single_popup_jap_candidate_pane

0xd38f,	// (0x0002097f) list_highlight_pane_cp30

0xe051,	// (0x00021641) list_single_popup_jap_candidate_pane_t1

0xa6c0,	// (0x0001dcb0) level_1_signal

0xa6d2,	// (0x0001dcc2) level_2_signal

0xa6e5,	// (0x0001dcd5) level_3_signal

0xa6f8,	// (0x0001dce8) level_4_signal

0xa70b,	// (0x0001dcfb) level_5_signal

0xa71e,	// (0x0001dd0e) level_6_signal

0xa731,	// (0x0001dd21) level_7_signal

0xa6c0,	// (0x0001dcb0) level_1_battery

0xa6d2,	// (0x0001dcc2) level_2_battery

0xa6e5,	// (0x0001dcd5) level_3_battery

0xa6f8,	// (0x0001dce8) level_4_battery

0xa70b,	// (0x0001dcfb) level_5_battery

0xa71e,	// (0x0001dd0e) level_6_battery

0xa731,	// (0x0001dd21) level_7_battery

0xe078,	// (0x00021668) list_menu_pane_ParamLimits

0xe078,	// (0x00021668) list_menu_pane

0xe089,	// (0x00021679) scroll_pane_cp25_ParamLimits

0xe089,	// (0x00021679) scroll_pane_cp25

0xa744,	// (0x0001dd34) list_double2_graphic_pane_cp2_ParamLimits

0xa744,	// (0x0001dd34) list_double2_graphic_pane_cp2

0xa744,	// (0x0001dd34) list_double2_large_graphic_pane_cp2_ParamLimits

0xa744,	// (0x0001dd34) list_double2_large_graphic_pane_cp2

0xa744,	// (0x0001dd34) list_double2_pane_cp2_ParamLimits

0xa744,	// (0x0001dd34) list_double2_pane_cp2

0xa744,	// (0x0001dd34) list_double_graphic_pane_cp2_ParamLimits

0xa744,	// (0x0001dd34) list_double_graphic_pane_cp2

0xa744,	// (0x0001dd34) list_double_large_graphic_pane_cp2_ParamLimits

0xa744,	// (0x0001dd34) list_double_large_graphic_pane_cp2

0xa744,	// (0x0001dd34) list_double_number_pane_cp2_ParamLimits

0xa744,	// (0x0001dd34) list_double_number_pane_cp2

0xa744,	// (0x0001dd34) list_double_pane_cp2_ParamLimits

0xa744,	// (0x0001dd34) list_double_pane_cp2

0xa75f,	// (0x0001dd4f) list_single_2graphic_pane_cp2_ParamLimits

0xa75f,	// (0x0001dd4f) list_single_2graphic_pane_cp2

0xa75f,	// (0x0001dd4f) list_single_graphic_heading_pane_cp2_ParamLimits

0xa75f,	// (0x0001dd4f) list_single_graphic_heading_pane_cp2

0xa75f,	// (0x0001dd4f) list_single_graphic_pane_cp2_ParamLimits

0xa75f,	// (0x0001dd4f) list_single_graphic_pane_cp2

0xa75f,	// (0x0001dd4f) list_single_heading_pane_cp2_ParamLimits

0xa75f,	// (0x0001dd4f) list_single_heading_pane_cp2

0xa770,	// (0x0001dd60) list_single_large_graphic_pane_cp2_ParamLimits

0xa770,	// (0x0001dd60) list_single_large_graphic_pane_cp2

0xa75f,	// (0x0001dd4f) list_single_number_heading_pane_cp2_ParamLimits

0xa75f,	// (0x0001dd4f) list_single_number_heading_pane_cp2

0xa75f,	// (0x0001dd4f) list_single_number_pane_cp2_ParamLimits

0xa75f,	// (0x0001dd4f) list_single_number_pane_cp2

0xa75f,	// (0x0001dd4f) list_single_pane_cp2_ParamLimits

0xa75f,	// (0x0001dd4f) list_single_pane_cp2

0xe0ab,	// (0x0002169b) bg_popup_sub_pane_cp22

0x536d,	// (0x0001895d) popup_side_volume_key_window_g1

0x5391,	// (0x00018981) popup_side_volume_key_window_t1

0x53ad,	// (0x0001899d) volume_small_pane_cp1

0xd3dd,	// (0x000209cd) bg_popup_sub_pane_cp24_ParamLimits

0xd3dd,	// (0x000209cd) bg_popup_sub_pane_cp24

0xe0c1,	// (0x000216b1) fep_china_uni_candidate_pane_ParamLimits

0xe0c1,	// (0x000216b1) fep_china_uni_candidate_pane

0xe0d5,	// (0x000216c5) fep_china_uni_entry_pane

0xe0e5,	// (0x000216d5) popup_fep_china_uni_window_g1

0xe101,	// (0x000216f1) fep_china_uni_entry_pane_g1

0xe109,	// (0x000216f9) fep_china_uni_entry_pane_g2

0x0001,

0xf73a,	// (0x00022d2a) fep_china_uni_entry_pane_g

0xe111,	// (0x00021701) fep_entry_item_pane

0xe11b,	// (0x0002170b) fep_candidate_item_pane

0xe123,	// (0x00021713) fep_china_uni_candidate_pane_g1

0xe12b,	// (0x0002171b) fep_china_uni_candidate_pane_g2

0xe133,	// (0x00021723) fep_china_uni_candidate_pane_g3

0xe13b,	// (0x0002172b) fep_china_uni_candidate_pane_g4

0x0003,

0xf73f,	// (0x00022d2f) fep_china_uni_candidate_pane_g

0xd30d,	// (0x000208fd) fep_entry_item_pane_g1

0xe143,	// (0x00021733) fep_entry_item_pane_t1_ParamLimits

0xe143,	// (0x00021733) fep_entry_item_pane_t1

0xe159,	// (0x00021749) fep_candidate_item_pane_t1_ParamLimits

0xe159,	// (0x00021749) fep_candidate_item_pane_t1

0xe16e,	// (0x0002175e) fep_candidate_item_pane_t2_ParamLimits

0xe16e,	// (0x0002175e) fep_candidate_item_pane_t2

0x0001,

0xf748,	// (0x00022d38) fep_candidate_item_pane_t_ParamLimits

0xf748,	// (0x00022d38) fep_candidate_item_pane_t

0xd3f3,	// (0x000209e3) list_highlight_pane_cp31_ParamLimits

0xd3f3,	// (0x000209e3) list_highlight_pane_cp31

0xe180,	// (0x00021770) level_1_signal_lsc

0xe189,	// (0x00021779) level_2_signal_lsc

0xe192,	// (0x00021782) level_3_signal_lsc

0xe19b,	// (0x0002178b) level_4_signal_lsc

0xe1a4,	// (0x00021794) level_5_signal_lsc

0xe1ad,	// (0x0002179d) level_6_signal_lsc

0xe1b6,	// (0x000217a6) level_7_signal_lsc

0xe1b6,	// (0x000217a6) level_1_battery_lsc

0xe1bf,	// (0x000217af) level_2_battery_lsc

0xe1c8,	// (0x000217b8) level_3_battery_lsc

0xe1d1,	// (0x000217c1) level_4_battery_lsc

0xe1da,	// (0x000217ca) level_5_battery_lsc

0xe1e3,	// (0x000217d3) level_6_battery_lsc

0xe180,	// (0x00021770) level_7_battery_lsc

0xe1ec,	// (0x000217dc) scroll_handle_focus_pane_g1

0xe1f5,	// (0x000217e5) scroll_handle_focus_pane_g2

0xe1fe,	// (0x000217ee) scroll_handle_focus_pane_g3

0x0002,

0xf74d,	// (0x00022d3d) scroll_handle_focus_pane_g

0x4673,	// (0x00017c63) list_single_2graphic_pane_g1_ParamLimits

0x4673,	// (0x00017c63) list_single_2graphic_pane_g1

0x988d,	// (0x0001ce7d) list_single_2graphic_pane_g2_ParamLimits

0x988d,	// (0x0001ce7d) list_single_2graphic_pane_g2

0x473b,	// (0x00017d2b) list_single_2graphic_pane_g3_ParamLimits

0x473b,	// (0x00017d2b) list_single_2graphic_pane_g3

0x9d32,	// (0x0001d322) list_single_2graphic_pane_g4_ParamLimits

0x9d32,	// (0x0001d322) list_single_2graphic_pane_g4

0x0003,

0xf754,	// (0x00022d44) list_single_2graphic_pane_g_ParamLimits

0xf754,	// (0x00022d44) list_single_2graphic_pane_g

0x9d3e,	// (0x0001d32e) list_single_2graphic_pane_t1_ParamLimits

0x9d3e,	// (0x0001d32e) list_single_2graphic_pane_t1

0x9d6c,	// (0x0001d35c) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9d6c,	// (0x0001d35c) list_double2_graphic_large_graphic_pane_g1

0x9a2c,	// (0x0001d01c) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9a2c,	// (0x0001d01c) list_double2_graphic_large_graphic_pane_g2

0x9a3d,	// (0x0001d02d) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9a3d,	// (0x0001d02d) list_double2_graphic_large_graphic_pane_g3

0x9d7c,	// (0x0001d36c) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9d7c,	// (0x0001d36c) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf75d,	// (0x00022d4d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf75d,	// (0x00022d4d) list_double2_graphic_large_graphic_pane_g

0x9d88,	// (0x0001d378) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9d88,	// (0x0001d378) list_double2_graphic_large_graphic_pane_t1

0x9d9e,	// (0x0001d38e) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9d9e,	// (0x0001d38e) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf766,	// (0x00022d56) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf766,	// (0x00022d56) list_double2_graphic_large_graphic_pane_t

0xe2d9,	// (0x000218c9) popup_fast_swap_window_ParamLimits

0xe2d9,	// (0x000218c9) popup_fast_swap_window

0xe2f5,	// (0x000218e5) popup_side_volume_key_window

0xe30f,	// (0x000218ff) stacon_top_pane

0xe319,	// (0x00021909) status_pane_ParamLimits

0xe319,	// (0x00021909) status_pane

0xe30f,	// (0x000218ff) status_small_pane

0xd38f,	// (0x0002097f) control_pane

0xd38f,	// (0x0002097f) stacon_bottom_pane

0xd93a,	// (0x00020f2a) scroll_pane_cp121

0xd97e,	// (0x00020f6e) set_content_pane

0x116c,	// (0x0001475c) bg_active_tab_pane_g1_cp1

0xe207,	// (0x000217f7) bg_active_tab_pane_g2_cp1

0x1163,	// (0x00014753) bg_active_tab_pane_g3_cp1

0x116c,	// (0x0001475c) bg_passive_tab_pane_g1_cp1

0xe207,	// (0x000217f7) bg_passive_tab_pane_g2_cp1

0x1163,	// (0x00014753) bg_passive_tab_pane_g3_cp1

0xa7c9,	// (0x0001ddb9) bg_active_tab_pane_g1_cp2

0xe207,	// (0x000217f7) bg_active_tab_pane_g2_cp2

0xa7d2,	// (0x0001ddc2) bg_active_tab_pane_g3_cp2

0xa7c9,	// (0x0001ddb9) bg_passive_tab_pane_g1_cp2

0xe207,	// (0x000217f7) bg_passive_tab_pane_g2_cp2

0xa7d2,	// (0x0001ddc2) bg_passive_tab_pane_g3_cp2

0xa7db,	// (0x0001ddcb) bg_active_tab_pane_g1_cp3

0xe207,	// (0x000217f7) bg_active_tab_pane_g2_cp3

0xa7e4,	// (0x0001ddd4) bg_active_tab_pane_g3_cp3

0xa7db,	// (0x0001ddcb) bg_passive_tab_pane_g1_cp3

0xe207,	// (0x000217f7) bg_passive_tab_pane_g2_cp3

0xa7e4,	// (0x0001ddd4) bg_passive_tab_pane_g3_cp3

0xa7ed,	// (0x0001dddd) bg_active_tab_pane_g1_cp4

0xe207,	// (0x000217f7) bg_active_tab_pane_g2_cp4

0xa7f6,	// (0x0001dde6) bg_active_tab_pane_g3_cp4

0xa7ed,	// (0x0001dddd) bg_passive_tab_pane_g1_cp4

0xe207,	// (0x000217f7) bg_passive_tab_pane_g2_cp4

0xa7f6,	// (0x0001dde6) bg_passive_tab_pane_g3_cp4

0xe24e,	// (0x0002183e) bg_active_tab_pane_g1_cp5

0xe207,	// (0x000217f7) bg_active_tab_pane_g2_cp5

0xe257,	// (0x00021847) bg_active_tab_pane_g3_cp5

0xe24e,	// (0x0002183e) bg_passive_tab_pane_g1_cp5

0xe207,	// (0x000217f7) bg_passive_tab_pane_g2_cp5

0xe257,	// (0x00021847) bg_passive_tab_pane_g3_cp5

0xa7ff,	// (0x0001ddef) list_set_graphic_pane_ParamLimits

0xa7ff,	// (0x0001ddef) list_set_graphic_pane

0xd38f,	// (0x0002097f) bg_set_opt_pane_cp4

0xe260,	// (0x00021850) list_set_graphic_pane_g1_ParamLimits

0xe260,	// (0x00021850) list_set_graphic_pane_g1

0xe26c,	// (0x0002185c) list_set_graphic_pane_g2_ParamLimits

0xe26c,	// (0x0002185c) list_set_graphic_pane_g2

0x0001,

0xf76b,	// (0x00022d5b) list_set_graphic_pane_g_ParamLimits

0xf76b,	// (0x00022d5b) list_set_graphic_pane_g

0x0009,

0xfab9,	// (0x000230a9) volume_small_pane_cp_g

0xe28e,	// (0x0002187e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xe28e,	// (0x0002187e) list_double2_large_graphic_pane_g1_cp2

0xe29a,	// (0x0002188a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xe29a,	// (0x0002188a) list_double2_large_graphic_pane_g2_cp2

0xe2a9,	// (0x00021899) list_double2_large_graphic_pane_g3_cp2

0xe2b1,	// (0x000218a1) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xe2b1,	// (0x000218a1) list_double2_large_graphic_pane_t1_cp2

0xe2c7,	// (0x000218b7) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xe2c7,	// (0x000218b7) list_double2_large_graphic_pane_t2_cp2

0x14dc,	// (0x00014acc) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x14dc,	// (0x00014acc) list_double_large_graphic_pane_g1_cp2

0x14ed,	// (0x00014add) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x14ed,	// (0x00014add) list_double_large_graphic_pane_g2_cp2

0xe3f4,	// (0x000219e4) list_double_large_graphic_pane_g3_cp2

0x14fc,	// (0x00014aec) list_double_large_graphic_pane_g4_cp

0x1504,	// (0x00014af4) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x1504,	// (0x00014af4) list_double_large_graphic_pane_t1_cp2

0x151b,	// (0x00014b0b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x151b,	// (0x00014b0b) list_double_large_graphic_pane_t2_cp2

0xe327,	// (0x00021917) list_double2_graphic_pane_g1_cp2_ParamLimits

0xe327,	// (0x00021917) list_double2_graphic_pane_g1_cp2

0xe333,	// (0x00021923) list_double2_graphic_pane_g2_cp2_ParamLimits

0xe333,	// (0x00021923) list_double2_graphic_pane_g2_cp2

0xe342,	// (0x00021932) list_double2_graphic_pane_g3_cp2

0xe34a,	// (0x0002193a) list_double2_graphic_pane_t1_cp2_ParamLimits

0xe34a,	// (0x0002193a) list_double2_graphic_pane_t1_cp2

0xe360,	// (0x00021950) list_double2_graphic_pane_t2_cp2_ParamLimits

0xe360,	// (0x00021950) list_double2_graphic_pane_t2_cp2

0xe372,	// (0x00021962) list_single_number_heading_pane_g1_cp2_ParamLimits

0xe372,	// (0x00021962) list_single_number_heading_pane_g1_cp2

0xe37e,	// (0x0002196e) list_single_number_heading_pane_g2_cp2

0xe386,	// (0x00021976) list_single_number_heading_pane_t1_cp2_ParamLimits

0xe386,	// (0x00021976) list_single_number_heading_pane_t1_cp2

0xe39c,	// (0x0002198c) list_single_number_heading_pane_t2_cp2_ParamLimits

0xe39c,	// (0x0002198c) list_single_number_heading_pane_t2_cp2

0xe3ae,	// (0x0002199e) list_single_number_heading_pane_t3_cp2_ParamLimits

0xe3ae,	// (0x0002199e) list_single_number_heading_pane_t3_cp2

0xe372,	// (0x00021962) list_single_heading_pane_g1_cp2_ParamLimits

0xe372,	// (0x00021962) list_single_heading_pane_g1_cp2

0xe37e,	// (0x0002196e) list_single_heading_pane_g2_cp2

0xe386,	// (0x00021976) list_single_heading_pane_t1_cp2_ParamLimits

0xe386,	// (0x00021976) list_single_heading_pane_t1_cp2

0x12e6,	// (0x000148d6) list_single_heading_pane_t2_cp2_ParamLimits

0x12e6,	// (0x000148d6) list_single_heading_pane_t2_cp2

0x126b,	// (0x0001485b) list_double_graphic_pane_g1_cp2_ParamLimits

0x126b,	// (0x0001485b) list_double_graphic_pane_g1_cp2

0x1277,	// (0x00014867) list_double_graphic_pane_g2_cp2_ParamLimits

0x1277,	// (0x00014867) list_double_graphic_pane_g2_cp2

0x1286,	// (0x00014876) list_double_graphic_pane_g3_cp2

0x128e,	// (0x0001487e) list_double_graphic_pane_t1_cp2_ParamLimits

0x128e,	// (0x0001487e) list_double_graphic_pane_t1_cp2

0x12a4,	// (0x00014894) list_double_graphic_pane_t2_cp2_ParamLimits

0x12a4,	// (0x00014894) list_double_graphic_pane_t2_cp2

0xe3e8,	// (0x000219d8) list_double_number_pane_g1_cp2_ParamLimits

0xe3e8,	// (0x000219d8) list_double_number_pane_g1_cp2

0xe3f4,	// (0x000219e4) list_double_number_pane_g2_cp2

0x1231,	// (0x00014821) list_double_number_pane_t1_cp2_ParamLimits

0x1231,	// (0x00014821) list_double_number_pane_t1_cp2

0x1243,	// (0x00014833) list_double_number_pane_t2_cp2_ParamLimits

0x1243,	// (0x00014833) list_double_number_pane_t2_cp2

0x1259,	// (0x00014849) list_double_number_pane_t3_cp2_ParamLimits

0x1259,	// (0x00014849) list_double_number_pane_t3_cp2

0x11a9,	// (0x00014799) list_single_graphic_pane_g1_cp2_ParamLimits

0x11a9,	// (0x00014799) list_single_graphic_pane_g1_cp2

0xe372,	// (0x00021962) list_single_graphic_pane_g2_cp2_ParamLimits

0xe372,	// (0x00021962) list_single_graphic_pane_g2_cp2

0xe37e,	// (0x0002196e) list_single_graphic_pane_g3_cp2

0x1181,	// (0x00014771) list_single_graphic_pane_t1_cp2_ParamLimits

0x1181,	// (0x00014771) list_single_graphic_pane_t1_cp2

0xe372,	// (0x00021962) list_single_number_pane_g1_cp2_ParamLimits

0xe372,	// (0x00021962) list_single_number_pane_g1_cp2

0xe37e,	// (0x0002196e) list_single_number_pane_g2_cp2

0x1181,	// (0x00014771) list_single_number_pane_t1_cp2_ParamLimits

0x1181,	// (0x00014771) list_single_number_pane_t1_cp2

0x1197,	// (0x00014787) list_single_number_pane_t2_cp2_ParamLimits

0x1197,	// (0x00014787) list_single_number_pane_t2_cp2

0xe29a,	// (0x0002188a) list_double2_pane_g1_cp2_ParamLimits

0xe29a,	// (0x0002188a) list_double2_pane_g1_cp2

0xe2a9,	// (0x00021899) list_double2_pane_g2_cp2

0xe3c0,	// (0x000219b0) list_double2_pane_t1_cp2_ParamLimits

0xe3c0,	// (0x000219b0) list_double2_pane_t1_cp2

0xe3d6,	// (0x000219c6) list_double2_pane_t2_cp2_ParamLimits

0xe3d6,	// (0x000219c6) list_double2_pane_t2_cp2

0xe3e8,	// (0x000219d8) list_double_pane_g1_cp2_ParamLimits

0xe3e8,	// (0x000219d8) list_double_pane_g1_cp2

0xe3f4,	// (0x000219e4) list_double_pane_g2_cp2

0xe3fc,	// (0x000219ec) list_double_pane_t1_cp2_ParamLimits

0xe3fc,	// (0x000219ec) list_double_pane_t1_cp2

0xe412,	// (0x00021a02) list_double_pane_t2_cp2_ParamLimits

0xe412,	// (0x00021a02) list_double_pane_t2_cp2

0xe43a,	// (0x00021a2a) list_single_pane_cp2_g3

0xe372,	// (0x00021962) list_single_pane_g1_cp2_ParamLimits

0xe372,	// (0x00021962) list_single_pane_g1_cp2

0xe37e,	// (0x0002196e) list_single_pane_g2_cp2

0xe44a,	// (0x00021a3a) list_single_pane_t1_cp2_ParamLimits

0xe44a,	// (0x00021a3a) list_single_pane_t1_cp2

0xe462,	// (0x00021a52) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xe462,	// (0x00021a52) list_single_large_graphic_pane_g1_cp2

0xe46e,	// (0x00021a5e) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xe46e,	// (0x00021a5e) list_single_large_graphic_pane_g2_cp2

0xe47a,	// (0x00021a6a) list_single_large_graphic_pane_g3_cp2

0xe482,	// (0x00021a72) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xe482,	// (0x00021a72) list_single_large_graphic_pane_g4_cp1

0xe49c,	// (0x00021a8c) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xe49c,	// (0x00021a8c) list_single_large_graphic_pane_t1_cp2

0xf54c,	// (0x00022b3c) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xf54c,	// (0x00022b3c) list_single_graphic_heading_pane_g1_cp2

0xf527,	// (0x00022b17) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xf527,	// (0x00022b17) list_single_graphic_heading_pane_g4_cp2

0xe37e,	// (0x0002196e) list_single_graphic_heading_pane_g5_cp2

0xe386,	// (0x00021976) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xe386,	// (0x00021976) list_single_graphic_heading_pane_t1_cp2

0xf558,	// (0x00022b48) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xf558,	// (0x00022b48) list_single_graphic_heading_pane_t2_cp2

0xf51b,	// (0x00022b0b) list_single_2graphic_pane_g1_cp2_ParamLimits

0xf51b,	// (0x00022b0b) list_single_2graphic_pane_g1_cp2

0xf527,	// (0x00022b17) list_single_2graphic_pane_g2_cp2_ParamLimits

0xf527,	// (0x00022b17) list_single_2graphic_pane_g2_cp2

0xe37e,	// (0x0002196e) list_single_2graphic_pane_g3_cp2

0xea5b,	// (0x0002204b) list_single_2graphic_pane_g4_cp2_ParamLimits

0xea5b,	// (0x0002204b) list_single_2graphic_pane_g4_cp2

0xf536,	// (0x00022b26) list_single_2graphic_pane_t1_cp2_ParamLimits

0xf536,	// (0x00022b26) list_single_2graphic_pane_t1_cp2

0xd30d,	// (0x000208fd) list_highlight_pane_g10_cp1

0xf12d,	// (0x0002271d) list_highlight_pane_g1_cp1

0xf135,	// (0x00022725) list_highlight_pane_g2_cp1

0xf13d,	// (0x0002272d) list_highlight_pane_g3_cp1

0xf145,	// (0x00022735) list_highlight_pane_g4_cp1

0xf14d,	// (0x0002273d) list_highlight_pane_g5_cp1

0xf155,	// (0x00022745) list_highlight_pane_g6_cp1

0xf15d,	// (0x0002274d) list_highlight_pane_g7_cp1

0xf165,	// (0x00022755) list_highlight_pane_g8_cp1

0xf16d,	// (0x0002275d) list_highlight_pane_g9_cp1

0xb494,	// (0x0001ea84) form_field_slider_pane_t3

0xb4a2,	// (0x0001ea92) form_field_slider_pane_t4

0xf077,	// (0x00022667) slider_form_pane_ParamLimits

0xf077,	// (0x00022667) slider_form_pane

0xd38f,	// (0x0002097f) control_abbreviations

0xd38f,	// (0x0002097f) control_conventions

0xd38f,	// (0x0002097f) control_definitions

0xd38f,	// (0x0002097f) format_table_attribute

0x1330,	// (0x00014920) bg_popup_preview_window_pane_g9

0xd38f,	// (0x0002097f) format_table_data2

0xd38f,	// (0x0002097f) format_table_data3

0xd38f,	// (0x0002097f) format_table_data_example

0x0008,

0xd38f,	// (0x0002097f) intro_purpose

0xf8d6,	// (0x00022ec6) bg_popup_preview_window_pane_g

0xd38f,	// (0x0002097f) texts_category

0xd38f,	// (0x0002097f) texts_graphics

0xe4b2,	// (0x00021aa2) text_digital

0xe4c1,	// (0x00021ab1) text_primary

0xe4d0,	// (0x00021ac0) text_primary_small

0xe4df,	// (0x00021acf) text_secondary

0xe4ee,	// (0x00021ade) text_title

0x17d9,	// (0x00014dc9) bg_passive_tab_pane_g1_cp3_srt

0xe207,	// (0x000217f7) bg_passive_tab_pane_g2_cp3_srt

0x17d0,	// (0x00014dc0) bg_passive_tab_pane_g3_cp3_srt

0xd3dd,	// (0x000209cd) bg_active_tab_pane_cp3_srt_ParamLimits

0xd3dd,	// (0x000209cd) bg_active_tab_pane_cp3_srt

0x1140,	// (0x00014730) tabs_4_active_pane_srt_g1

0xa2bf,	// (0x0001d8af) tabs_4_active_pane_srt_t1_ParamLimits

0xa2bf,	// (0x0001d8af) tabs_4_active_pane_srt_t1

0x17d9,	// (0x00014dc9) bg_active_tab_pane_g1_cp3_copy1

0xe207,	// (0x000217f7) bg_active_tab_pane_g2_cp3_copy1

0x17d0,	// (0x00014dc0) bg_active_tab_pane_g3_cp3_copy1

0xd3f3,	// (0x000209e3) tabs_2_long_active_pane_srt_ParamLimits

0xd3f3,	// (0x000209e3) tabs_2_long_active_pane_srt

0xd3f3,	// (0x000209e3) tabs_2_long_passive_pane_srt_ParamLimits

0xd3f3,	// (0x000209e3) tabs_2_long_passive_pane_srt

0xdea5,	// (0x00021495) bg_passive_tab_pane_cp4_srt_ParamLimits

0xdea5,	// (0x00021495) bg_passive_tab_pane_cp4_srt

0x16fc,	// (0x00014cec) bg_passive_tab_pane_g1_cp4_srt

0xe207,	// (0x000217f7) bg_passive_tab_pane_g2_cp4_srt

0x16f3,	// (0x00014ce3) bg_passive_tab_pane_g3_cp4_srt

0xd3f3,	// (0x000209e3) bg_active_tab_pane_cp4_srt_ParamLimits

0xd3f3,	// (0x000209e3) bg_active_tab_pane_cp4_srt

0xa5e2,	// (0x0001dbd2) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa5e2,	// (0x0001dbd2) tabs_2_long_active_pane_srt_t1

0x16fc,	// (0x00014cec) bg_active_tab_pane_g1_cp4_srt

0xe207,	// (0x000217f7) bg_active_tab_pane_g2_cp4_srt

0x16f3,	// (0x00014ce3) bg_active_tab_pane_g3_cp4_srt

0xd3dd,	// (0x000209cd) tabs_3_long_active_pane_srt_ParamLimits

0xd3dd,	// (0x000209cd) tabs_3_long_active_pane_srt

0xd3dd,	// (0x000209cd) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xd3dd,	// (0x000209cd) tabs_3_long_passive_pane_cp_srt

0xd3dd,	// (0x000209cd) tabs_3_long_passive_pane_srt_ParamLimits

0xd3dd,	// (0x000209cd) tabs_3_long_passive_pane_srt

0xdea5,	// (0x00021495) bg_passive_tab_pane_cp5_srt_ParamLimits

0xdea5,	// (0x00021495) bg_passive_tab_pane_cp5_srt

0xe24e,	// (0x0002183e) bg_passive_tab_pane_g1_cp5_srt

0xe207,	// (0x000217f7) bg_passive_tab_pane_g2_cp5_srt

0xe257,	// (0x00021847) bg_passive_tab_pane_g3_cp5_srt

0xd3f3,	// (0x000209e3) bg_active_tab_pane_cp5_srt_ParamLimits

0xd3f3,	// (0x000209e3) bg_active_tab_pane_cp5_srt

0xa5f9,	// (0x0001dbe9) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa5f9,	// (0x0001dbe9) tabs_3_long_active_pane_srt_t1

0xe24e,	// (0x0002183e) bg_active_tab_pane_g1_cp5_srt

0xe207,	// (0x000217f7) bg_active_tab_pane_g2_cp5_srt

0xe257,	// (0x00021847) bg_active_tab_pane_g3_cp5_srt

0x16e5,	// (0x00014cd5) navi_text_pane_srt_t1

0x16dd,	// (0x00014ccd) navi_icon_pane_srt_g1

0xe606,	// (0x00021bf6) midp_editing_number_pane_srt

0xe4fd,	// (0x00021aed) midp_ticker_pane_srt

0xe60e,	// (0x00021bfe) midp_ticker_pane_srt_g1

0xe616,	// (0x00021c06) midp_ticker_pane_srt_g2

0x0001,

0xf78a,	// (0x00022d7a) midp_ticker_pane_srt_g

0xe61e,	// (0x00021c0e) midp_ticker_pane_srt_t1

0x16ce,	// (0x00014cbe) midp_editing_number_pane_t1_copy1

0xa813,	// (0x0001de03) listscroll_midp_pane

0xa813,	// (0x0001de03) midp_form_pane

0xe505,	// (0x00021af5) midp_info_popup_window_ParamLimits

0xe505,	// (0x00021af5) midp_info_popup_window

0xda53,	// (0x00021043) bg_popup_sub_pane_cp50_ParamLimits

0xda53,	// (0x00021043) bg_popup_sub_pane_cp50

0xeda0,	// (0x00022390) listscroll_midp_info_pane_ParamLimits

0xeda0,	// (0x00022390) listscroll_midp_info_pane

0xed88,	// (0x00022378) listscroll_form_midp_pane_ParamLimits

0xed88,	// (0x00022378) listscroll_form_midp_pane

0xed94,	// (0x00022384) scroll_bar_cp050

0xb488,	// (0x0001ea78) list_midp_pane

0x21d7,	// (0x000157c7) signal_pane_g2_cp

0xecba,	// (0x000222aa) listscroll_midp_info_pane_t1_ParamLimits

0xecba,	// (0x000222aa) listscroll_midp_info_pane_t1

0xecd2,	// (0x000222c2) listscroll_midp_info_pane_t2_ParamLimits

0xecd2,	// (0x000222c2) listscroll_midp_info_pane_t2

0xed10,	// (0x00022300) listscroll_midp_info_pane_t3_ParamLimits

0xed10,	// (0x00022300) listscroll_midp_info_pane_t3

0xed4a,	// (0x0002233a) listscroll_midp_info_pane_t4_ParamLimits

0xed4a,	// (0x0002233a) listscroll_midp_info_pane_t4

0x0003,

0xf828,	// (0x00022e18) listscroll_midp_info_pane_t_ParamLimits

0xf828,	// (0x00022e18) listscroll_midp_info_pane_t

0xdaf6,	// (0x000210e6) scroll_pane_cp21

0xec5e,	// (0x0002224e) form_midp_field_choice_group_pane

0xec67,	// (0x00022257) form_midp_field_text_pane

0xeca0,	// (0x00022290) form_midp_field_time_pane

0xeca8,	// (0x00022298) form_midp_gauge_slider_pane

0xecb1,	// (0x000222a1) form_midp_gauge_wait_pane

0xd38f,	// (0x0002097f) form_midp_image_pane

0x9dcd,	// (0x0001d3bd) list_single_midp_pane_ParamLimits

0x9dcd,	// (0x0001d3bd) list_single_midp_pane

0xb467,	// (0x0001ea57) form_midp_field_text_pane_t1

0xeb0d,	// (0x000220fd) input_focus_pane_cp050

0xec4d,	// (0x0002223d) list_midp_form_text_pane

0xec1c,	// (0x0002220c) form_midp_field_choice_group_pane_t1

0xec2a,	// (0x0002221a) input_focus_pane_cp051

0xec3e,	// (0x0002222e) list_midp_choice_pane

0xd38f,	// (0x0002097f) status_idle_pane

0xec00,	// (0x000221f0) form_midp_field_time_pane_t1

0xd30d,	// (0x000208fd) wait_anim_pane_g2_copy1

0xec0e,	// (0x000221fe) form_midp_field_time_pane_t2

0x0001,

0xe570,	// (0x00021b60) aid_navinavi_width_2_pane

0xf823,	// (0x00022e13) form_midp_field_time_pane_t

0xd38f,	// (0x0002097f) input_focus_pane_cp052

0xd38f,	// (0x0002097f) bg_input_focus_pane_cp040

0xebdc,	// (0x000221cc) form_midp_gauge_slider_pane_t1

0xebea,	// (0x000221da) form_midp_gauge_slider_pane_t2

0xb44b,	// (0x0001ea3b) form_midp_gauge_slider_pane_t3

0xb459,	// (0x0001ea49) form_midp_gauge_slider_pane_t4

0x0003,

0xf81a,	// (0x00022e0a) form_midp_gauge_slider_pane_t

0xebf8,	// (0x000221e8) form_midp_slider_pane

0xd3f3,	// (0x000209e3) bg_input_focus_pane_cp041_ParamLimits

0xd3f3,	// (0x000209e3) bg_input_focus_pane_cp041

0xebac,	// (0x0002219c) form_midp_gauge_wait_pane_t1_ParamLimits

0xebac,	// (0x0002219c) form_midp_gauge_wait_pane_t1

0xebbe,	// (0x000221ae) form_midp_gauge_wait_pane_t2_ParamLimits

0xebbe,	// (0x000221ae) form_midp_gauge_wait_pane_t2

0x0001,

0xf815,	// (0x00022e05) form_midp_gauge_wait_pane_t_ParamLimits

0xf815,	// (0x00022e05) form_midp_gauge_wait_pane_t

0xebd0,	// (0x000221c0) form_midp_wait_pane_ParamLimits

0xebd0,	// (0x000221c0) form_midp_wait_pane

0xeb76,	// (0x00022166) form_midp_image_pane_g1

0xeb7f,	// (0x0002216f) form_midp_image_pane_t1

0xeb8e,	// (0x0002217e) form_midp_image_pane_t2

0xeb9d,	// (0x0002218d) form_midp_image_pane_t3

0x0002,

0xf80e,	// (0x00022dfe) form_midp_image_pane_t

0xeb6d,	// (0x0002215d) list_single_midp_pane_g1

0x47cb,	// (0x00017dbb) list_single_midp_pane_t1

0xb437,	// (0x0001ea27) list_midp_form_item_pane_ParamLimits

0xb437,	// (0x0001ea27) list_midp_form_item_pane

0xe518,	// (0x00021b08) list_midp_form_item_pane_t1

0xe527,	// (0x00021b17) midp_ticker_pane_g1

0xe533,	// (0x00021b23) midp_ticker_pane_g2

0x0001,

0xf770,	// (0x00022d60) midp_ticker_pane_g

0xe53f,	// (0x00021b2f) midp_ticker_pane_t1

0x16ce,	// (0x00014cbe) midp_editing_number_pane_t1

0x1756,	// (0x00014d46) midp_editing_number_pane

0x1762,	// (0x00014d52) midp_ticker_pane

0x16be,	// (0x00014cae) ai_message_heading_pane

0xd38f,	// (0x0002097f) bg_popup_window_pane_cp14

0x16c6,	// (0x00014cb6) listscroll_ai_message_pane

0x1648,	// (0x00014c38) ai_message_heading_pane_g1_ParamLimits

0x1648,	// (0x00014c38) ai_message_heading_pane_g1

0x1654,	// (0x00014c44) ai_message_heading_pane_g2_ParamLimits

0x1654,	// (0x00014c44) ai_message_heading_pane_g2

0x1660,	// (0x00014c50) ai_message_heading_pane_g3_ParamLimits

0x1660,	// (0x00014c50) ai_message_heading_pane_g3

0x166c,	// (0x00014c5c) ai_message_heading_pane_g4_ParamLimits

0x166c,	// (0x00014c5c) ai_message_heading_pane_g4

0x0003,

0xf938,	// (0x00022f28) ai_message_heading_pane_g_ParamLimits

0xf938,	// (0x00022f28) ai_message_heading_pane_g

0x1678,	// (0x00014c68) ai_message_heading_pane_t1_ParamLimits

0x1678,	// (0x00014c68) ai_message_heading_pane_t1

0x1692,	// (0x00014c82) ai_message_heading_pane_t2_ParamLimits

0x1692,	// (0x00014c82) ai_message_heading_pane_t2

0x0001,

0xf941,	// (0x00022f31) ai_message_heading_pane_t_ParamLimits

0xf941,	// (0x00022f31) ai_message_heading_pane_t

0x16a4,	// (0x00014c94) bg_popup_heading_pane_cp1_ParamLimits

0x16a4,	// (0x00014c94) bg_popup_heading_pane_cp1

0x1636,	// (0x00014c26) list_ai_message_pane_ParamLimits

0x1636,	// (0x00014c26) list_ai_message_pane

0xdaf6,	// (0x000210e6) scroll_pane_cp10

0x15d2,	// (0x00014bc2) list_ai_message_pane_g1

0x15da,	// (0x00014bca) list_ai_message_pane_g2

0x0001,

0xf915,	// (0x00022f05) list_ai_message_pane_g

0x15e2,	// (0x00014bd2) list_ai_message_pane_t1_ParamLimits

0x15e2,	// (0x00014bd2) list_ai_message_pane_t1

0x15f7,	// (0x00014be7) list_ai_message_pane_t2_ParamLimits

0x15f7,	// (0x00014be7) list_ai_message_pane_t2

0x160c,	// (0x00014bfc) list_ai_message_pane_t3_ParamLimits

0x160c,	// (0x00014bfc) list_ai_message_pane_t3

0x1621,	// (0x00014c11) list_ai_message_pane_t4_ParamLimits

0x1621,	// (0x00014c11) list_ai_message_pane_t4

0x0003,

0xf91a,	// (0x00022f0a) list_ai_message_pane_t_ParamLimits

0xf91a,	// (0x00022f0a) list_ai_message_pane_t

0x15c0,	// (0x00014bb0) cell_ai_soft_ind_pane_ParamLimits

0x15c0,	// (0x00014bb0) cell_ai_soft_ind_pane

0xe551,	// (0x00021b41) cell_ai_soft_ind_pane_g1_ParamLimits

0xe551,	// (0x00021b41) cell_ai_soft_ind_pane_g1

0xd38f,	// (0x0002097f) grid_highlight_cp1

0xe55e,	// (0x00021b4e) text_secondary_cp56_ParamLimits

0xe55e,	// (0x00021b4e) text_secondary_cp56

0x1595,	// (0x00014b85) example_general_pane_ParamLimits

0x1595,	// (0x00014b85) example_general_pane

0x15a1,	// (0x00014b91) example_parent_pane_g1_ParamLimits

0x15a1,	// (0x00014b91) example_parent_pane_g1

0x15ad,	// (0x00014b9d) example_parent_pane_t1_ParamLimits

0x15ad,	// (0x00014b9d) example_parent_pane_t1

0xad2b,	// (0x0001e31b) popup_preview_text_window_ParamLimits

0xad2b,	// (0x0001e31b) popup_preview_text_window

0xe442,	// (0x00021a32) list_single_pane_cp2_g4

0xd5fa,	// (0x00020bea) bg_popup_preview_window_pane_ParamLimits

0xd5fa,	// (0x00020bea) bg_popup_preview_window_pane

0x1338,	// (0x00014928) popup_preview_text_window_t1_ParamLimits

0x1338,	// (0x00014928) popup_preview_text_window_t1

0x1356,	// (0x00014946) popup_preview_text_window_t2_ParamLimits

0x1356,	// (0x00014946) popup_preview_text_window_t2

0x139f,	// (0x0001498f) popup_preview_text_window_t3_ParamLimits

0x139f,	// (0x0001498f) popup_preview_text_window_t3

0x13e4,	// (0x000149d4) popup_preview_text_window_t4_ParamLimits

0x13e4,	// (0x000149d4) popup_preview_text_window_t4

0x0004,

0xf8e9,	// (0x00022ed9) popup_preview_text_window_t_ParamLimits

0xf8e9,	// (0x00022ed9) popup_preview_text_window_t

0x1462,	// (0x00014a52) scroll_pane_cp11

0xea13,	// (0x00022003) bg_popup_preview_window_pane_g1

0x12f8,	// (0x000148e8) bg_popup_preview_window_pane_g2

0x1300,	// (0x000148f0) bg_popup_preview_window_pane_g3

0x1308,	// (0x000148f8) bg_popup_preview_window_pane_g4

0x1310,	// (0x00014900) bg_popup_preview_window_pane_g5

0x1318,	// (0x00014908) bg_popup_preview_window_pane_g6

0x1320,	// (0x00014910) bg_popup_preview_window_pane_g7

0x1328,	// (0x00014918) bg_popup_preview_window_pane_g8

0x4ea8,	// (0x00018498) aid_popup_width_pane

0xacad,	// (0x0001e29d) popup_midp_note_alarm_window_ParamLimits

0xacad,	// (0x0001e29d) popup_midp_note_alarm_window

0xd987,	// (0x00020f77) data_form_pane_ParamLimits

0x9c66,	// (0x0001d256) form_field_data_pane_g1

0xa5a8,	// (0x0001db98) form_field_data_pane_t1_ParamLimits

0xd993,	// (0x00020f83) input_focus_pane_ParamLimits

0xd9a1,	// (0x00020f91) data_form_wide_pane_ParamLimits

0x4514,	// (0x00017b04) form_field_data_wide_pane_g1

0x4520,	// (0x00017b10) form_field_data_wide_pane_t1_ParamLimits

0xd7b9,	// (0x00020da9) input_focus_pane_cp6_ParamLimits

0xa5c0,	// (0x0001dbb0) input_popup_find_pane_g1_ParamLimits

0xa5c0,	// (0x0001dbb0) input_popup_find_pane_g1

0x523b,	// (0x0001882b) aid_navi_side_left_pane

0x524b,	// (0x0001883b) aid_navi_side_right_pane

0xf1fe,	// (0x000227ee) bg_popup_window_pane_cp30_ParamLimits

0xf1fe,	// (0x000227ee) bg_popup_window_pane_cp30

0xf278,	// (0x00022868) popup_midp_note_alarm_window_g1_ParamLimits

0xf278,	// (0x00022868) popup_midp_note_alarm_window_g1

0xf2a8,	// (0x00022898) popup_midp_note_alarm_window_t1_ParamLimits

0xf2a8,	// (0x00022898) popup_midp_note_alarm_window_t1

0xf349,	// (0x00022939) popup_midp_note_alarm_window_t2_ParamLimits

0xf349,	// (0x00022939) popup_midp_note_alarm_window_t2

0xf3f7,	// (0x000229e7) popup_midp_note_alarm_window_t3_ParamLimits

0xf3f7,	// (0x000229e7) popup_midp_note_alarm_window_t3

0xf41f,	// (0x00022a0f) popup_midp_note_alarm_window_t4_ParamLimits

0xf41f,	// (0x00022a0f) popup_midp_note_alarm_window_t4

0xf43f,	// (0x00022a2f) popup_midp_note_alarm_window_t5_ParamLimits

0xf43f,	// (0x00022a2f) popup_midp_note_alarm_window_t5

0x000a,

0x0263,	// (0x00013853) popup_midp_note_alarm_window_t_ParamLimits

0x0263,	// (0x00013853) popup_midp_note_alarm_window_t

0xf4eb,	// (0x00022adb) wait_bar_pane_cp1_ParamLimits

0xf4eb,	// (0x00022adb) wait_bar_pane_cp1

0xd38f,	// (0x0002097f) wait_anim_pane_copy1

0xd38f,	// (0x0002097f) wait_border_pane_copy1

0xef44,	// (0x00022534) wait_border_pane_g1_copy1

0x453a,	// (0x00017b2a) form_field_popup_pane_g1

0x9c70,	// (0x0001d260) form_field_popup_pane_t1_ParamLimits

0xd993,	// (0x00020f83) input_focus_pane_cp7_ParamLimits

0xd987,	// (0x00020f77) list_form_pane_ParamLimits

0x455a,	// (0x00017b4a) form_field_popup_wide_pane_g1

0x4562,	// (0x00017b52) form_field_popup_wide_pane_t1_ParamLimits

0xd993,	// (0x00020f83) input_focus_pane_cp8_ParamLimits

0xd9cd,	// (0x00020fbd) list_form_wide_pane_ParamLimits

0x1801,	// (0x00014df1) aid_size_cell_graphic_pane

0x9ced,	// (0x0001d2dd) data_form_pane_t1_ParamLimits

0x9df5,	// (0x0001d3e5) data_form_wide_pane_t1_ParamLimits

0xb089,	// (0x0001e679) bg_status_flat_pane

0xa21c,	// (0x0001d80c) title_pane_t1_ParamLimits

0xd3a5,	// (0x00020995) title_pane_t2_ParamLimits

0xd3cb,	// (0x000209bb) title_pane_t3_ParamLimits

0xf573,	// (0x00022b63) title_pane_t_ParamLimits

0xa6c0,	// (0x0001dcb0) level_1_signal_ParamLimits

0xa6d2,	// (0x0001dcc2) level_2_signal_ParamLimits

0xa6e5,	// (0x0001dcd5) level_3_signal_ParamLimits

0xa6f8,	// (0x0001dce8) level_4_signal_ParamLimits

0xa70b,	// (0x0001dcfb) level_5_signal_ParamLimits

0xa71e,	// (0x0001dd0e) level_6_signal_ParamLimits

0xa731,	// (0x0001dd21) level_7_signal_ParamLimits

0xa6c0,	// (0x0001dcb0) level_1_battery_ParamLimits

0xa6d2,	// (0x0001dcc2) level_2_battery_ParamLimits

0xa6e5,	// (0x0001dcd5) level_3_battery_ParamLimits

0xa6f8,	// (0x0001dce8) level_4_battery_ParamLimits

0xa70b,	// (0x0001dcfb) level_5_battery_ParamLimits

0xa71e,	// (0x0001dd0e) level_6_battery_ParamLimits

0xa731,	// (0x0001dd21) level_7_battery_ParamLimits

0xf12d,	// (0x0002271d) bg_status_flat_pane_g1

0xf135,	// (0x00022725) bg_status_flat_pane_g2

0xf13d,	// (0x0002272d) bg_status_flat_pane_g3

0xf145,	// (0x00022735) bg_status_flat_pane_g4

0xf14d,	// (0x0002273d) bg_status_flat_pane_g5

0xf155,	// (0x00022745) bg_status_flat_pane_g6

0xf15d,	// (0x0002274d) bg_status_flat_pane_g7

0xa2a9,	// (0x0001d899) tabs_3_active_pane_t1_ParamLimits

0xa2a9,	// (0x0001d899) tabs_3_passive_pane_t1_ParamLimits

0xa2bf,	// (0x0001d8af) tabs_4_active_pane_t1_ParamLimits

0xa2bf,	// (0x0001d8af) tabs_4_1_passive_pane_t1_ParamLimits

0xa5cc,	// (0x0001dbbc) tabs_2_active_pane_t1_ParamLimits

0xa5cc,	// (0x0001dbbc) tabs_2_passive_pane_t1_ParamLimits

0xd3f3,	// (0x000209e3) bg_active_tab_pane_cp4_ParamLimits

0xa5e2,	// (0x0001dbd2) tabs_2_long_active_pane_t1_ParamLimits

0xdea5,	// (0x00021495) bg_passive_tab_pane_cp4_ParamLimits

0x573a,	// (0x00018d2a) list_single_midp_graphic_pane_t1_ParamLimits

0xd3f3,	// (0x000209e3) bg_active_tab_pane_cp5_ParamLimits

0xa5f9,	// (0x0001dbe9) tabs_3_long_active_pane_t1_ParamLimits

0xdea5,	// (0x00021495) bg_passive_tab_pane_cp5_ParamLimits

0x573a,	// (0x00018d2a) list_single_midp_graphic_pane_t1

0xb089,	// (0x0001e679) bg_status_flat_pane_ParamLimits

0xe8f2,	// (0x00021ee2) indicator_pane_cp2_ParamLimits

0xe8f2,	// (0x00021ee2) indicator_pane_cp2

0xb1ef,	// (0x0001e7df) navi_pane_srt_ParamLimits

0xb1ef,	// (0x0001e7df) navi_pane_srt

0xe91a,	// (0x00021f0a) popup_clock_digital_analogue_window_cp1

0xd463,	// (0x00020a53) indicator_pane_t1

0xe4fd,	// (0x00021aed) copy_highlight_pane

0xe4fd,	// (0x00021aed) cursor_graphics_pane

0xe4fd,	// (0x00021aed) graphic_within_text_pane

0xe4fd,	// (0x00021aed) link_highlight_pane

0x1425,	// (0x00014a15) popup_preview_text_window_t5_ParamLimits

0x1425,	// (0x00014a15) popup_preview_text_window_t5

0xe578,	// (0x00021b68) cursor_digital_pane

0xe578,	// (0x00021b68) cursor_primary_pane

0xe589,	// (0x00021b79) cursor_primary_small_pane

0xe591,	// (0x00021b81) cursor_secondary_pane

0xe599,	// (0x00021b89) cursor_title_pane

0xe578,	// (0x00021b68) link_highlight_digital_pane

0xe580,	// (0x00021b70) link_highlight_primary_pane

0xe589,	// (0x00021b79) link_highlight_primary_small_pane

0xe591,	// (0x00021b81) link_highlight_secondary_pane

0xe599,	// (0x00021b89) link_highlight_title_pane

0xe578,	// (0x00021b68) copy_highlight_digital_pane

0xe578,	// (0x00021b68) copy_highlight_primary_pane

0xe589,	// (0x00021b79) copy_highlight_primary_small_pane

0xe591,	// (0x00021b81) copy_highlight_secondary_pane

0xe599,	// (0x00021b89) copy_highlight_title_pane

0xe591,	// (0x00021b81) graphic_text_digital_pane

0xf1ad,	// (0x0002279d) graphic_text_primary_pane

0xf1b6,	// (0x000227a6) graphic_text_primary_small_pane

0xe589,	// (0x00021b79) graphic_text_secondary_pane

0xe578,	// (0x00021b68) graphic_text_title_pane

0xa8b0,	// (0x0001dea0) cursor_primary_pane_g1

0xf19f,	// (0x0002278f) cursor_text_primary_t1

0xb4c4,	// (0x0001eab4) cursor_primary_small_pane_g1

0xf191,	// (0x00022781) cursor_text_primary_small_t1

0xb4ba,	// (0x0001eaaa) cursor_primary_small_pane_g1_copy1

0xf183,	// (0x00022773) cursor_text_primary_small_t1_copy1

0xf175,	// (0x00022765) cursor_text_title_t1

0xb4b0,	// (0x0001eaa0) cursor_title_pane_g1

0xa8b0,	// (0x0001dea0) cursor_digital_pane_g1

0xe5a1,	// (0x00021b91) cursor_text_digital_t1

0xe5af,	// (0x00021b9f) link_highlight_primary_pane_g1

0xf11e,	// (0x0002270e) link_highlight_primary_pane_t1

0xe5af,	// (0x00021b9f) link_highlight_primary_small_pane_g1

0xe5b7,	// (0x00021ba7) link_highlight_primary_small_pane_t1

0xe5c6,	// (0x00021bb6) link_highlight_secondary_pane_g1

0xe5ce,	// (0x00021bbe) link_highlight_secondary_pane_t1

0xf083,	// (0x00022673) link_highlight_title_pane_g1

0xf09a,	// (0x0002268a) link_highlight_title_pane_t1

0xf083,	// (0x00022673) link_highlight_digital_pane_g1

0xf08b,	// (0x0002267b) link_highlight_digital_pane_t1

0xef5f,	// (0x0002254f) copy_highlight_primary_pane_g1

0xef85,	// (0x00022575) copy_highlight_primary_pane_t1

0xef5f,	// (0x0002254f) copy_highlight_primary_small_pane_g1

0xef76,	// (0x00022566) copy_highlight_primary_small_pane_t1

0xe5dd,	// (0x00021bcd) copy_highlight_secondary_pane_g1

0xe5e5,	// (0x00021bd5) copy_highlight_secondary_pane_t1

0xef5f,	// (0x0002254f) copy_highlight_title_pane_g1

0xef67,	// (0x00022557) copy_highlight_title_pane_t1

0xef5f,	// (0x0002254f) copy_highlight_digital_pane_g1

0x1931,	// (0x00014f21) copy_highlight_digital_pane_t1

0x1885,	// (0x00014e75) graphic_text_primary_pane_g1

0x1915,	// (0x00014f05) graphic_text_primary_pane_t1

0x1923,	// (0x00014f13) graphic_text_primary_pane_t2

0x0001,

0xf9b5,	// (0x00022fa5) graphic_text_primary_pane_t

0x18f1,	// (0x00014ee1) graphic_text_primary_small_pane_g1

0x18f9,	// (0x00014ee9) graphic_text_primary_small_pane_t1

0x1907,	// (0x00014ef7) graphic_text_primary_small_pane_t2

0x0001,

0xf9b0,	// (0x00022fa0) graphic_text_primary_small_pane_t

0x18cd,	// (0x00014ebd) graphic_text_secondary_pane_g1

0x18d5,	// (0x00014ec5) graphic_text_secondary_pane_t1

0x18e3,	// (0x00014ed3) graphic_text_secondary_pane_t2

0x0001,

0xf9ab,	// (0x00022f9b) graphic_text_secondary_pane_t

0x18a9,	// (0x00014e99) graphic_text_title_pane_g1

0x18b1,	// (0x00014ea1) graphic_text_title_pane_t1

0x18bf,	// (0x00014eaf) graphic_text_title_pane_t2

0x0001,

0xf9a6,	// (0x00022f96) graphic_text_title_pane_t

0x1885,	// (0x00014e75) graphic_text_digital_pane_g1

0x188d,	// (0x00014e7d) graphic_text_digital_pane_t1

0x189b,	// (0x00014e8b) graphic_text_digital_pane_t2

0x0001,

0xf9a1,	// (0x00022f91) graphic_text_digital_pane_t

0xd3f3,	// (0x000209e3) navi_icon_pane_srt_ParamLimits

0xd3f3,	// (0x000209e3) navi_icon_pane_srt

0xd38f,	// (0x0002097f) navi_midp_pane_srt

0xd38f,	// (0x0002097f) navi_navi_pane_srt

0xd3f3,	// (0x000209e3) navi_text_pane_srt_ParamLimits

0xd3f3,	// (0x000209e3) navi_text_pane_srt

0x1850,	// (0x00014e40) navi_navi_icon_text_pane_srt

0x186a,	// (0x00014e5a) navi_navi_pane_srt_g1_ParamLimits

0x186a,	// (0x00014e5a) navi_navi_pane_srt_g1

0x1858,	// (0x00014e48) navi_navi_pane_srt_g2_ParamLimits

0x1858,	// (0x00014e48) navi_navi_pane_srt_g2

0x0001,

0xf99c,	// (0x00022f8c) navi_navi_pane_srt_g_ParamLimits

0xf99c,	// (0x00022f8c) navi_navi_pane_srt_g

0x187c,	// (0x00014e6c) navi_navi_tabs_pane_srt

0x1850,	// (0x00014e40) navi_navi_text_pane_srt

0x1850,	// (0x00014e40) navi_navi_volume_pane_srt

0x1841,	// (0x00014e31) navi_navi_text_pane_srt_t1

0x5da6,	// (0x00019396) navi_navi_volume_pane_srt_g1

0x5dae,	// (0x0001939e) volume_small_pane_srt_ParamLimits

0x5dae,	// (0x0001939e) volume_small_pane_srt

0x54e2,	// (0x00018ad2) volume_small_pane_srt_g1_ParamLimits

0x54e2,	// (0x00018ad2) volume_small_pane_srt_g1

0x54f2,	// (0x00018ae2) volume_small_pane_srt_g2_ParamLimits

0x54f2,	// (0x00018ae2) volume_small_pane_srt_g2

0x5503,	// (0x00018af3) volume_small_pane_srt_g3_ParamLimits

0x5503,	// (0x00018af3) volume_small_pane_srt_g3

0x5514,	// (0x00018b04) volume_small_pane_srt_g4_ParamLimits

0x5514,	// (0x00018b04) volume_small_pane_srt_g4

0x5525,	// (0x00018b15) volume_small_pane_srt_g5_ParamLimits

0x5525,	// (0x00018b15) volume_small_pane_srt_g5

0x5536,	// (0x00018b26) volume_small_pane_srt_g6_ParamLimits

0x5536,	// (0x00018b26) volume_small_pane_srt_g6

0x5547,	// (0x00018b37) volume_small_pane_srt_g7_ParamLimits

0x5547,	// (0x00018b37) volume_small_pane_srt_g7

0x5558,	// (0x00018b48) volume_small_pane_srt_g8_ParamLimits

0x5558,	// (0x00018b48) volume_small_pane_srt_g8

0x5569,	// (0x00018b59) volume_small_pane_srt_g9_ParamLimits

0x5569,	// (0x00018b59) volume_small_pane_srt_g9

0x557a,	// (0x00018b6a) volume_small_pane_srt_g10_ParamLimits

0x557a,	// (0x00018b6a) volume_small_pane_srt_g10

0x0009,

0xf775,	// (0x00022d65) volume_small_pane_srt_g_ParamLimits

0xf775,	// (0x00022d65) volume_small_pane_srt_g

0xd6a3,	// (0x00020c93) query_popup_data_pane_cp2

0x1827,	// (0x00014e17) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x1827,	// (0x00014e17) navi_navi_icon_text_pane_srt_t1

0xf1ad,	// (0x0002279d) navi_tabs_2_long_pane_srt

0xf1ad,	// (0x0002279d) navi_tabs_2_pane_srt

0xf1ad,	// (0x0002279d) navi_tabs_3_long_pane_srt

0xf1ad,	// (0x0002279d) navi_tabs_3_pane_srt

0xf1ad,	// (0x0002279d) navi_tabs_4_pane_srt

0x5d86,	// (0x00019376) tabs_2_active_pane_srt_ParamLimits

0x5d86,	// (0x00019376) tabs_2_active_pane_srt

0x5d96,	// (0x00019386) tabs_2_passive_pane_srt_ParamLimits

0x5d96,	// (0x00019386) tabs_2_passive_pane_srt

0xeb0d,	// (0x000220fd) bg_passive_tab_pane_cp1_srt_ParamLimits

0xeb0d,	// (0x000220fd) bg_passive_tab_pane_cp1_srt

0x116c,	// (0x0001475c) bg_passive_tab_pane_g1_cp1_srt

0xe207,	// (0x000217f7) bg_passive_tab_pane_g2_cp1_srt

0x1163,	// (0x00014753) bg_passive_tab_pane_g3_cp1_srt

0xd3dd,	// (0x000209cd) bg_active_tab_pane_cp1_srt_ParamLimits

0xd3dd,	// (0x000209cd) bg_active_tab_pane_cp1_srt

0x115b,	// (0x0001474b) tabs_2_active_pane_srt_g1

0xa5cc,	// (0x0001dbbc) tabs_2_active_pane_srt_t1_ParamLimits

0xa5cc,	// (0x0001dbbc) tabs_2_active_pane_srt_t1

0x116c,	// (0x0001475c) bg_active_tab_pane_g1_cp1_srt

0xe207,	// (0x000217f7) bg_active_tab_pane_g2_cp1_srt

0x1163,	// (0x00014753) bg_active_tab_pane_g3_cp1_srt

0x5d53,	// (0x00019343) tabs_3_active_pane_srt_ParamLimits

0x5d53,	// (0x00019343) tabs_3_active_pane_srt

0x5d64,	// (0x00019354) tabs_3_passive_pane_cp_srt_ParamLimits

0x5d64,	// (0x00019354) tabs_3_passive_pane_cp_srt

0x5d75,	// (0x00019365) tabs_3_passive_pane_srt_ParamLimits

0x5d75,	// (0x00019365) tabs_3_passive_pane_srt

0xeb0d,	// (0x000220fd) bg_passive_tab_pane_cp2_srt_ParamLimits

0xeb0d,	// (0x000220fd) bg_passive_tab_pane_cp2_srt

0xe5f4,	// (0x00021be4) bg_passive_tab_pane_g1_cp2_srt

0xe207,	// (0x000217f7) bg_passive_tab_pane_g2_cp2_srt

0xe5fd,	// (0x00021bed) bg_passive_tab_pane_g3_cp2_srt

0xd3dd,	// (0x000209cd) bg_active_tab_pane_cp2_srt_ParamLimits

0xd3dd,	// (0x000209cd) bg_active_tab_pane_cp2_srt

0x1817,	// (0x00014e07) tabs_3_active_pane_srt_g1

0xa2a9,	// (0x0001d899) tabs_3_active_pane_srt_t1_ParamLimits

0xa2a9,	// (0x0001d899) tabs_3_active_pane_srt_t1

0xe5f4,	// (0x00021be4) bg_active_tab_pane_g1_cp2_srt

0xe207,	// (0x000217f7) bg_active_tab_pane_g2_cp2_srt

0xe5fd,	// (0x00021bed) bg_active_tab_pane_g3_cp2_srt

0x5d0b,	// (0x000192fb) tabs_4_active_pane_srt_ParamLimits

0x5d0b,	// (0x000192fb) tabs_4_active_pane_srt

0x5d1d,	// (0x0001930d) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5d1d,	// (0x0001930d) tabs_4_passive_pane_cp2_srt

0xe717,	// (0x00021d07) aid_size_cell_toolbar

0xaa1d,	// (0x0001e00d) main_idle_act_pane_ParamLimits

0xe7db,	// (0x00021dcb) popup_large_graphic_colour_window_ParamLimits

0xaf7b,	// (0x0001e56b) popup_toolbar_window_ParamLimits

0xaf7b,	// (0x0001e56b) popup_toolbar_window

0x4848,	// (0x00017e38) list_single_graphic_2heading_pane_ParamLimits

0x4848,	// (0x00017e38) list_single_graphic_2heading_pane

0xdcd4,	// (0x000212c4) aid_size_cell_apps_grid_lsc_pane

0xdce6,	// (0x000212d6) aid_size_cell_apps_grid_prt_pane

0xdea5,	// (0x00021495) bg_wml_button_pane_cp1_ParamLimits

0xdea5,	// (0x00021495) bg_wml_button_pane_cp1

0xb467,	// (0x0001ea57) form_midp_field_text_pane_t1_ParamLimits

0xeb0d,	// (0x000220fd) input_focus_pane_cp050_ParamLimits

0xec4d,	// (0x0002223d) list_midp_form_text_pane_ParamLimits

0xec2a,	// (0x0002221a) input_focus_pane_cp051_ParamLimits

0xec3e,	// (0x0002222e) list_midp_choice_pane_ParamLimits

0xb405,	// (0x0001e9f5) list_single_2graphic_pane_cp3_ParamLimits

0xb405,	// (0x0001e9f5) list_single_2graphic_pane_cp3

0xb418,	// (0x0001ea08) list_single_midp_graphic_pane_ParamLimits

0xb418,	// (0x0001ea08) list_single_midp_graphic_pane

0x4004,	// (0x000175f4) list_single_graphic_2heading_pane_g1_ParamLimits

0x4004,	// (0x000175f4) list_single_graphic_2heading_pane_g1

0x472f,	// (0x00017d1f) list_single_graphic_2heading_pane_g4_ParamLimits

0x472f,	// (0x00017d1f) list_single_graphic_2heading_pane_g4

0x473b,	// (0x00017d2b) list_single_graphic_2heading_pane_g5_ParamLimits

0x473b,	// (0x00017d2b) list_single_graphic_2heading_pane_g5

0x0002,

0xf5dd,	// (0x00022bcd) list_single_graphic_2heading_pane_g_ParamLimits

0xf5dd,	// (0x00022bcd) list_single_graphic_2heading_pane_g

0x4747,	// (0x00017d37) list_single_graphic_2heading_pane_t1_ParamLimits

0x4747,	// (0x00017d37) list_single_graphic_2heading_pane_t1

0x475b,	// (0x00017d4b) list_single_graphic_2heading_pane_t2_ParamLimits

0x475b,	// (0x00017d4b) list_single_graphic_2heading_pane_t2

0x4775,	// (0x00017d65) list_single_graphic_2heading_pane_t3_ParamLimits

0x4775,	// (0x00017d65) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c8,	// (0x00022db8) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c8,	// (0x00022db8) list_single_graphic_2heading_pane_t

0xe95d,	// (0x00021f4d) bg_popup_sub_pane_cp2

0xe983,	// (0x00021f73) grid_toobar_pane

0x56d6,	// (0x00018cc6) cell_toolbar_pane_ParamLimits

0x56d6,	// (0x00018cc6) cell_toolbar_pane

0xe9b9,	// (0x00021fa9) cell_toolbar_pane_g1_ParamLimits

0xe9b9,	// (0x00021fa9) cell_toolbar_pane_g1

0xe9cb,	// (0x00021fbb) cell_toolbar_pane_g2_ParamLimits

0xe9cb,	// (0x00021fbb) cell_toolbar_pane_g2

0x0001,

0xf7cf,	// (0x00022dbf) cell_toolbar_pane_g_ParamLimits

0xf7cf,	// (0x00022dbf) cell_toolbar_pane_g

0xe9ed,	// (0x00021fdd) grid_highlight_pane_cp2_ParamLimits

0xe9ed,	// (0x00021fdd) grid_highlight_pane_cp2

0xea07,	// (0x00021ff7) toolbar_button_pane

0xea13,	// (0x00022003) toolbar_button_pane_g1

0xea1b,	// (0x0002200b) toolbar_button_pane_g2

0xea23,	// (0x00022013) toolbar_button_pane_g3

0xea2b,	// (0x0002201b) toolbar_button_pane_g4

0xea33,	// (0x00022023) toolbar_button_pane_g5

0xea3b,	// (0x0002202b) toolbar_button_pane_g6

0xea43,	// (0x00022033) toolbar_button_pane_g7

0xea4b,	// (0x0002203b) toolbar_button_pane_g8

0xea53,	// (0x00022043) toolbar_button_pane_g9

0x0009,

0xf7d4,	// (0x00022dc4) toolbar_button_pane_g

0x5705,	// (0x00018cf5) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5705,	// (0x00018cf5) list_single_2graphic_pane_g1_cp3

0xb36d,	// (0x0001e95d) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb36d,	// (0x0001e95d) list_single_2graphic_pane_g2_cp3

0xe37e,	// (0x0002196e) list_single_2graphic_pane_g3_cp3

0xea5b,	// (0x0002204b) list_single_2graphic_pane_g4_cp3_ParamLimits

0xea5b,	// (0x0002204b) list_single_2graphic_pane_g4_cp3

0x5720,	// (0x00018d10) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5720,	// (0x00018d10) list_single_2graphic_pane_t1_cp3

0xe372,	// (0x00021962) list_single_midp_graphic_pane_g2_ParamLimits

0xe372,	// (0x00021962) list_single_midp_graphic_pane_g2

0xe71f,	// (0x00021d0f) aid_zoom_text_primary

0x4702,	// (0x00017cf2) aid_zoom_text_secondary

0xe6af,	// (0x00021c9f) status_small_pane_g7_ParamLimits

0xe6af,	// (0x00021c9f) status_small_pane_g7

0xe6d2,	// (0x00021cc2) status_small_pane_t1_ParamLimits

0xa1f1,	// (0x0001d7e1) title_pane_g2

0x0003,

0xf56a,	// (0x00022b5a) title_pane_g

0xa4d3,	// (0x0001dac3) aid_size_cell_colour_1_pane_ParamLimits

0xa4d3,	// (0x0001dac3) aid_size_cell_colour_1_pane

0xa4e7,	// (0x0001dad7) aid_size_cell_colour_2_pane_ParamLimits

0xa4e7,	// (0x0001dad7) aid_size_cell_colour_2_pane

0xa4fb,	// (0x0001daeb) aid_size_cell_colour_3_pane_ParamLimits

0xa4fb,	// (0x0001daeb) aid_size_cell_colour_3_pane

0xa50f,	// (0x0001daff) aid_size_cell_colour_4_pane_ParamLimits

0xa50f,	// (0x0001daff) aid_size_cell_colour_4_pane

0x519d,	// (0x0001878d) title_pane_stacon_g1_ParamLimits

0x519d,	// (0x0001878d) title_pane_stacon_g1

0xefdc,	// (0x000225cc) popup_note_wait_window_g3_ParamLimits

0xefdc,	// (0x000225cc) popup_note_wait_window_g3

0xf052,	// (0x00022642) popup_note_wait_window_t5_ParamLimits

0xf052,	// (0x00022642) popup_note_wait_window_t5

0xd38f,	// (0x0002097f) main_feb_china_hwr_fs_writing_pane

0xaa7e,	// (0x0001e06e) popup_feb_china_hwr_fs_window_ParamLimits

0xaa7e,	// (0x0001e06e) popup_feb_china_hwr_fs_window

0xb37e,	// (0x0001e96e) aid_size_cell_hwr_fs_ParamLimits

0xb37e,	// (0x0001e96e) aid_size_cell_hwr_fs

0xeb0d,	// (0x000220fd) bg_popup_sub_pane_cp3_ParamLimits

0xeb0d,	// (0x000220fd) bg_popup_sub_pane_cp3

0xb393,	// (0x0001e983) grid_hwr_fs_pane_ParamLimits

0xb393,	// (0x0001e983) grid_hwr_fs_pane

0x5779,	// (0x00018d69) linegrid_hwr_fs_pane_ParamLimits

0x5779,	// (0x00018d69) linegrid_hwr_fs_pane

0xb3ab,	// (0x0001e99b) cell_hwr_fs_pane_ParamLimits

0xb3ab,	// (0x0001e99b) cell_hwr_fs_pane

0xeb19,	// (0x00022109) linegrid_hwr_fs_pane_g1_ParamLimits

0xeb19,	// (0x00022109) linegrid_hwr_fs_pane_g1

0xb3cb,	// (0x0001e9bb) linegrid_hwr_fs_pane_g2_ParamLimits

0xb3cb,	// (0x0001e9bb) linegrid_hwr_fs_pane_g2

0xeb25,	// (0x00022115) linegrid_hwr_fs_pane_g3_ParamLimits

0xeb25,	// (0x00022115) linegrid_hwr_fs_pane_g3

0x57a7,	// (0x00018d97) linegrid_hwr_fs_pane_g4_ParamLimits

0x57a7,	// (0x00018d97) linegrid_hwr_fs_pane_g4

0x57c1,	// (0x00018db1) linegrid_hwr_fs_pane_g5_ParamLimits

0x57c1,	// (0x00018db1) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fa,	// (0x00022dea) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x00022dea) linegrid_hwr_fs_pane_g

0xeb31,	// (0x00022121) cell_hwr_fs_pane_g1_ParamLimits

0xeb31,	// (0x00022121) cell_hwr_fs_pane_g1

0xe92b,	// (0x00021f1b) cell_hwr_fs_pane_g2_ParamLimits

0xe92b,	// (0x00021f1b) cell_hwr_fs_pane_g2

0xb3dd,	// (0x0001e9cd) cell_hwr_fs_pane_g3_ParamLimits

0xb3dd,	// (0x0001e9cd) cell_hwr_fs_pane_g3

0xb3ea,	// (0x0001e9da) cell_hwr_fs_pane_g4_ParamLimits

0xb3ea,	// (0x0001e9da) cell_hwr_fs_pane_g4

0x0003,

0xf805,	// (0x00022df5) cell_hwr_fs_pane_g_ParamLimits

0xf805,	// (0x00022df5) cell_hwr_fs_pane_g

0xb3f7,	// (0x0001e9e7) cell_hwr_fs_pane_t1

0xd38f,	// (0x0002097f) grid_highlight_pane_cp6

0xd38f,	// (0x0002097f) main_idle_act2_pane

0xdadd,	// (0x000210cd) aid_inside_area_popup_secondary

0xb5d1,	// (0x0001ebc1) aid_inside_area_window_primary_ParamLimits

0xb5d1,	// (0x0001ebc1) aid_inside_area_window_primary

0x1940,	// (0x00014f30) ai2_news_ticker_pane

0x1948,	// (0x00014f38) aid_size_cell_ai1_link_ParamLimits

0x1948,	// (0x00014f38) aid_size_cell_ai1_link

0xb9dd,	// (0x0001efcd) popup_ai2_data_window_ParamLimits

0xb9dd,	// (0x0001efcd) popup_ai2_data_window

0x1962,	// (0x00014f52) popup_ai2_link_window_ParamLimits

0x1962,	// (0x00014f52) popup_ai2_link_window

0xeb0d,	// (0x000220fd) bg_popup_sub_pane_cp4_ParamLimits

0xeb0d,	// (0x000220fd) bg_popup_sub_pane_cp4

0x1976,	// (0x00014f66) grid_ai2_link_pane_ParamLimits

0x1976,	// (0x00014f66) grid_ai2_link_pane

0x198d,	// (0x00014f7d) popup_ai2_link_window_g1_ParamLimits

0x198d,	// (0x00014f7d) popup_ai2_link_window_g1

0x1999,	// (0x00014f89) popup_ai2_link_window_g2_ParamLimits

0x1999,	// (0x00014f89) popup_ai2_link_window_g2

0x0001,

0xf9ba,	// (0x00022faa) popup_ai2_link_window_g_ParamLimits

0xf9ba,	// (0x00022faa) popup_ai2_link_window_g

0x19a8,	// (0x00014f98) ai2_mp_button_pane

0x19b0,	// (0x00014fa0) ai2_mp_volume_pane

0xec2a,	// (0x0002221a) bg_popup_sub_pane_cp5_ParamLimits

0xec2a,	// (0x0002221a) bg_popup_sub_pane_cp5

0x19b8,	// (0x00014fa8) heading_ai2_gene_pane_ParamLimits

0x19b8,	// (0x00014fa8) heading_ai2_gene_pane

0x19c4,	// (0x00014fb4) list_ai2_gene_pane_ParamLimits

0x19c4,	// (0x00014fb4) list_ai2_gene_pane

0x1a0c,	// (0x00014ffc) cell_ai2_link_pane_ParamLimits

0x1a0c,	// (0x00014ffc) cell_ai2_link_pane

0x1a22,	// (0x00015012) cell_ai2_link_pane_g1

0xd38f,	// (0x0002097f) grid_highlight_pane_cp7

0x5e0a,	// (0x000193fa) ai2_mp_volume_pane_g1

0x1abf,	// (0x000150af) ai2_mp_volume_pane_g2

0xba07,	// (0x0001eff7) list_ai2_gene_pane_t1

0x1ab7,	// (0x000150a7) ai2_mp_volume_pane_g3

0x0002,

0xf9d3,	// (0x00022fc3) ai2_mp_volume_pane_g

0x5e12,	// (0x00019402) volume_small_pane_cp3

0x1ac7,	// (0x000150b7) aid_size_cell_ai2_button

0x1acf,	// (0x000150bf) grid_ai2_button_pane

0x1ad8,	// (0x000150c8) cell_ai2_button_pane_ParamLimits

0x1ad8,	// (0x000150c8) cell_ai2_button_pane

0xd30d,	// (0x000208fd) cell_ai2_button_pane_g1

0xd38f,	// (0x0002097f) grid_highlight_pane_cp8

0x1a77,	// (0x00015067) ai2_gene_pane_t1_ParamLimits

0x1a77,	// (0x00015067) ai2_gene_pane_t1

0xaa09,	// (0x0001dff9) aid_height_parent_landscape

0xb789,	// (0x0001ed79) aid_height_set_list

0x171a,	// (0x00014d0a) aid_size_parent

0x1801,	// (0x00014df1) aid_size_cell_graphic_pane_ParamLimits

0x19d4,	// (0x00014fc4) popup_ai2_data_window_g1_ParamLimits

0x19d4,	// (0x00014fc4) popup_ai2_data_window_g1

0x19e0,	// (0x00014fd0) ai2_news_ticker_pane_g1

0x19e8,	// (0x00014fd8) ai2_news_ticker_pane_g2

0x0001,

0xf9bf,	// (0x00022faf) ai2_news_ticker_pane_g

0x19f0,	// (0x00014fe0) ai2_news_ticker_pane_t1

0x19fe,	// (0x00014fee) ai2_news_ticker_pane_t2

0x0001,

0xf9c4,	// (0x00022fb4) ai2_news_ticker_pane_t

0x17e2,	// (0x00014dd2) heading_ai2_gene_pane_g1

0x1a2b,	// (0x0001501b) heading_ai2_gene_pane_t1_ParamLimits

0x1a2b,	// (0x0001501b) heading_ai2_gene_pane_t1

0x1a40,	// (0x00015030) list_highlight_pane_cp6

0xb9f1,	// (0x0001efe1) ai2_gene_pane_ParamLimits

0xb9f1,	// (0x0001efe1) ai2_gene_pane

0xba15,	// (0x0001f005) list_ai2_gene_pane_t2

0x0001,

0xf9c9,	// (0x00022fb9) list_ai2_gene_pane_t

0x1a48,	// (0x00015038) list_highlight_pane_cp8_ParamLimits

0x1a48,	// (0x00015038) list_highlight_pane_cp8

0x1a59,	// (0x00015049) ai2_gene_pane_g1_ParamLimits

0x1a59,	// (0x00015049) ai2_gene_pane_g1

0x1a6b,	// (0x0001505b) ai2_gene_pane_g2_ParamLimits

0x1a6b,	// (0x0001505b) ai2_gene_pane_g2

0x0001,

0xf9ce,	// (0x00022fbe) ai2_gene_pane_g_ParamLimits

0xf9ce,	// (0x00022fbe) ai2_gene_pane_g

0xd93a,	// (0x00020f2a) scroll_pane_cp12

0xa9c8,	// (0x0001dfb8) control_pane_t3_ParamLimits

0xa9c8,	// (0x0001dfb8) control_pane_t3

0xe6c3,	// (0x00021cb3) status_small_pane_g8_ParamLimits

0xe6c3,	// (0x00021cb3) status_small_pane_g8

0xaaf2,	// (0x0001e0e2) popup_find_window_ParamLimits

0xace5,	// (0x0001e2d5) popup_note_image_window_ParamLimits

0x4004,	// (0x000175f4) list_double2_graphic_pane_vc_g1_ParamLimits

0x4004,	// (0x000175f4) list_double2_graphic_pane_vc_g1

0x472f,	// (0x00017d1f) list_double2_graphic_pane_vc_g2_ParamLimits

0x472f,	// (0x00017d1f) list_double2_graphic_pane_vc_g2

0x473b,	// (0x00017d2b) list_double2_graphic_pane_vc_g3_ParamLimits

0x473b,	// (0x00017d2b) list_double2_graphic_pane_vc_g3

0x0002,

0xf5dd,	// (0x00022bcd) list_double2_graphic_pane_vc_g_ParamLimits

0xf5dd,	// (0x00022bcd) list_double2_graphic_pane_vc_g

0x478d,	// (0x00017d7d) list_double2_graphic_pane_vc_t1_ParamLimits

0x478d,	// (0x00017d7d) list_double2_graphic_pane_vc_t1

0x472f,	// (0x00017d1f) list_single_heading_pane_vc_g1_ParamLimits

0x472f,	// (0x00017d1f) list_single_heading_pane_vc_g1

0x473b,	// (0x00017d2b) list_single_heading_pane_vc_g2_ParamLimits

0x473b,	// (0x00017d2b) list_single_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x00022bd4) list_single_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x00022bd4) list_single_heading_pane_vc_g

0x47a3,	// (0x00017d93) list_single_heading_pane_vc_t1_ParamLimits

0x47a3,	// (0x00017d93) list_single_heading_pane_vc_t1

0x47b9,	// (0x00017da9) list_single_heading_pane_vc_t2_ParamLimits

0x47b9,	// (0x00017da9) list_single_heading_pane_vc_t2

0x0001,

0xf7e9,	// (0x00022dd9) list_single_heading_pane_vc_t_ParamLimits

0xf7e9,	// (0x00022dd9) list_single_heading_pane_vc_t

0xea67,	// (0x00022057) list_setting_number_pane_vc_g1_ParamLimits

0xea67,	// (0x00022057) list_setting_number_pane_vc_g1

0xea73,	// (0x00022063) list_setting_number_pane_vc_g2_ParamLimits

0xea73,	// (0x00022063) list_setting_number_pane_vc_g2

0x0001,

0xf7ee,	// (0x00022dde) list_setting_number_pane_vc_g_ParamLimits

0xf7ee,	// (0x00022dde) list_setting_number_pane_vc_g

0xea7f,	// (0x0002206f) list_setting_number_pane_vc_t1_ParamLimits

0xea7f,	// (0x0002206f) list_setting_number_pane_vc_t1

0xea93,	// (0x00022083) list_setting_number_pane_vc_t2_ParamLimits

0xea93,	// (0x00022083) list_setting_number_pane_vc_t2

0xeaaf,	// (0x0002209f) list_setting_number_pane_vc_t3_ParamLimits

0xeaaf,	// (0x0002209f) list_setting_number_pane_vc_t3

0x0002,

0xf7f3,	// (0x00022de3) list_setting_number_pane_vc_t_ParamLimits

0xf7f3,	// (0x00022de3) list_setting_number_pane_vc_t

0xead5,	// (0x000220c5) set_value_pane_vc_ParamLimits

0xead5,	// (0x000220c5) set_value_pane_vc

0x4848,	// (0x00017e38) list_double2_graphic_pane_vc_ParamLimits

0x4848,	// (0x00017e38) list_double2_graphic_pane_vc

0x1788,	// (0x00014d78) list_double2_large_graphic_pane_vc_ParamLimits

0x1788,	// (0x00014d78) list_double2_large_graphic_pane_vc

0x4848,	// (0x00017e38) list_double2_pane_vc_ParamLimits

0x4848,	// (0x00017e38) list_double2_pane_vc

0x4848,	// (0x00017e38) list_double_graphic_heading_pane_vc_ParamLimits

0x4848,	// (0x00017e38) list_double_graphic_heading_pane_vc

0x4848,	// (0x00017e38) list_double_graphic_pane_vc_ParamLimits

0x4848,	// (0x00017e38) list_double_graphic_pane_vc

0x4848,	// (0x00017e38) list_double_heading_pane_vc_ParamLimits

0x4848,	// (0x00017e38) list_double_heading_pane_vc

0x1788,	// (0x00014d78) list_double_large_graphic_pane_vc_ParamLimits

0x1788,	// (0x00014d78) list_double_large_graphic_pane_vc

0x4848,	// (0x00017e38) list_double_number_pane_vc_ParamLimits

0x4848,	// (0x00017e38) list_double_number_pane_vc

0x4848,	// (0x00017e38) list_double_pane_vc_ParamLimits

0x4848,	// (0x00017e38) list_double_pane_vc

0x4848,	// (0x00017e38) list_double_time_pane_vc_ParamLimits

0x4848,	// (0x00017e38) list_double_time_pane_vc

0x4848,	// (0x00017e38) list_setting_number_pane_vc_ParamLimits

0x4848,	// (0x00017e38) list_setting_number_pane_vc

0x4848,	// (0x00017e38) list_setting_pane_vc_ParamLimits

0x4848,	// (0x00017e38) list_setting_pane_vc

0x4848,	// (0x00017e38) list_single_graphic_heading_pane_vc_ParamLimits

0x4848,	// (0x00017e38) list_single_graphic_heading_pane_vc

0x4848,	// (0x00017e38) list_single_heading_pane_vc_ParamLimits

0x4848,	// (0x00017e38) list_single_heading_pane_vc

0x4848,	// (0x00017e38) list_single_number_heading_pane_vc_ParamLimits

0x4848,	// (0x00017e38) list_single_number_heading_pane_vc

0x48a0,	// (0x00017e90) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x48a0,	// (0x00017e90) list_double_graphic_heading_pane_vc_g1

0x472f,	// (0x00017d1f) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x472f,	// (0x00017d1f) list_double_graphic_heading_pane_vc_g2

0x473b,	// (0x00017d2b) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x473b,	// (0x00017d2b) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9da,	// (0x00022fca) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9da,	// (0x00022fca) list_double_graphic_heading_pane_vc_g

0x48ac,	// (0x00017e9c) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x48ac,	// (0x00017e9c) list_double_graphic_heading_pane_vc_t1

0x47a3,	// (0x00017d93) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x47a3,	// (0x00017d93) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e1,	// (0x00022fd1) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e1,	// (0x00022fd1) list_double_graphic_heading_pane_vc_t

0xea67,	// (0x00022057) list_setting_pane_vc_g1_ParamLimits

0xea67,	// (0x00022057) list_setting_pane_vc_g1

0xea73,	// (0x00022063) list_setting_pane_vc_g2_ParamLimits

0xea73,	// (0x00022063) list_setting_pane_vc_g2

0x0001,

0xf7ee,	// (0x00022dde) list_setting_pane_vc_g_ParamLimits

0xf7ee,	// (0x00022dde) list_setting_pane_vc_g

0x1d5b,	// (0x0001534b) list_setting_pane_vc_t1_ParamLimits

0x1d5b,	// (0x0001534b) list_setting_pane_vc_t1

0x1d6f,	// (0x0001535f) list_setting_pane_vc_t2_ParamLimits

0x1d6f,	// (0x0001535f) list_setting_pane_vc_t2

0x0001,

0xfa24,	// (0x00023014) list_setting_pane_vc_t_ParamLimits

0xfa24,	// (0x00023014) list_setting_pane_vc_t

0xead5,	// (0x000220c5) set_value_pane_cp_vc_ParamLimits

0xead5,	// (0x000220c5) set_value_pane_cp_vc

0x472f,	// (0x00017d1f) list_single_number_heading_pane_vc_g1_ParamLimits

0x472f,	// (0x00017d1f) list_single_number_heading_pane_vc_g1

0x473b,	// (0x00017d2b) list_single_number_heading_pane_vc_g2_ParamLimits

0x473b,	// (0x00017d2b) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x00022bd4) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x00022bd4) list_single_number_heading_pane_vc_g

0x47a3,	// (0x00017d93) list_single_number_heading_pane_vc_t1_ParamLimits

0x47a3,	// (0x00017d93) list_single_number_heading_pane_vc_t1

0x48be,	// (0x00017eae) list_single_number_heading_pane_vc_t2_ParamLimits

0x48be,	// (0x00017eae) list_single_number_heading_pane_vc_t2

0x48d0,	// (0x00017ec0) list_single_number_heading_pane_vc_t3_ParamLimits

0x48d0,	// (0x00017ec0) list_single_number_heading_pane_vc_t3

0x0002,

0xfa29,	// (0x00023019) list_single_number_heading_pane_vc_t_ParamLimits

0xfa29,	// (0x00023019) list_single_number_heading_pane_vc_t

0x4004,	// (0x000175f4) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4004,	// (0x000175f4) list_single_graphic_heading_pane_vc_g1

0x472f,	// (0x00017d1f) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x472f,	// (0x00017d1f) list_single_graphic_heading_pane_vc_g4

0x473b,	// (0x00017d2b) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x473b,	// (0x00017d2b) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf5dd,	// (0x00022bcd) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf5dd,	// (0x00022bcd) list_single_graphic_heading_pane_vc_g

0x47a3,	// (0x00017d93) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x47a3,	// (0x00017d93) list_single_graphic_heading_pane_vc_t1

0x48e2,	// (0x00017ed2) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x48e2,	// (0x00017ed2) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa30,	// (0x00023020) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa30,	// (0x00023020) list_single_graphic_heading_pane_vc_t

0x472f,	// (0x00017d1f) list_double2_pane_vc_g1_ParamLimits

0x472f,	// (0x00017d1f) list_double2_pane_vc_g1

0x473b,	// (0x00017d2b) list_double2_pane_vc_g2_ParamLimits

0x473b,	// (0x00017d2b) list_double2_pane_vc_g2

0x0001,

0xf5e4,	// (0x00022bd4) list_double2_pane_vc_g_ParamLimits

0xf5e4,	// (0x00022bd4) list_double2_pane_vc_g

0x48f4,	// (0x00017ee4) list_double2_pane_vc_t1_ParamLimits

0x48f4,	// (0x00017ee4) list_double2_pane_vc_t1

0x490a,	// (0x00017efa) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x490a,	// (0x00017efa) list_double2_large_graphic_pane_vc_g1

0x4916,	// (0x00017f06) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4916,	// (0x00017f06) list_double2_large_graphic_pane_vc_g2

0x4922,	// (0x00017f12) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x4922,	// (0x00017f12) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf601,	// (0x00022bf1) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf601,	// (0x00022bf1) list_double2_large_graphic_pane_vc_g

0x492e,	// (0x00017f1e) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x492e,	// (0x00017f1e) list_double2_large_graphic_pane_vc_t1

0x4944,	// (0x00017f34) list_double_time_pane_vc_g1_ParamLimits

0x4944,	// (0x00017f34) list_double_time_pane_vc_g1

0x4950,	// (0x00017f40) list_double_time_pane_vc_g2_ParamLimits

0x4950,	// (0x00017f40) list_double_time_pane_vc_g2

0x0001,

0xfa35,	// (0x00023025) list_double_time_pane_vc_g_ParamLimits

0xfa35,	// (0x00023025) list_double_time_pane_vc_g

0x495c,	// (0x00017f4c) list_double_time_pane_vc_t1_ParamLimits

0x495c,	// (0x00017f4c) list_double_time_pane_vc_t1

0x4975,	// (0x00017f65) list_double_time_pane_vc_t2_ParamLimits

0x4975,	// (0x00017f65) list_double_time_pane_vc_t2

0x49ae,	// (0x00017f9e) list_double_time_pane_vc_t3_ParamLimits

0x49ae,	// (0x00017f9e) list_double_time_pane_vc_t3

0x49c6,	// (0x00017fb6) list_double_time_pane_vc_t4_ParamLimits

0x49c6,	// (0x00017fb6) list_double_time_pane_vc_t4

0x0003,

0xfa3a,	// (0x0002302a) list_double_time_pane_vc_t_ParamLimits

0xfa3a,	// (0x0002302a) list_double_time_pane_vc_t

0x472f,	// (0x00017d1f) list_double_pane_vc_g1_ParamLimits

0x472f,	// (0x00017d1f) list_double_pane_vc_g1

0x473b,	// (0x00017d2b) list_double_pane_vc_g2_ParamLimits

0x473b,	// (0x00017d2b) list_double_pane_vc_g2

0x0001,

0xf5e4,	// (0x00022bd4) list_double_pane_vc_g_ParamLimits

0xf5e4,	// (0x00022bd4) list_double_pane_vc_g

0x49d8,	// (0x00017fc8) list_double_pane_vc_t1_ParamLimits

0x49d8,	// (0x00017fc8) list_double_pane_vc_t1

0x49ea,	// (0x00017fda) list_double_pane_vc_t2_ParamLimits

0x49ea,	// (0x00017fda) list_double_pane_vc_t2

0x0001,

0xfa43,	// (0x00023033) list_double_pane_vc_t_ParamLimits

0xfa43,	// (0x00023033) list_double_pane_vc_t

0x472f,	// (0x00017d1f) list_double_number_pane_vc_g1_ParamLimits

0x472f,	// (0x00017d1f) list_double_number_pane_vc_g1

0x473b,	// (0x00017d2b) list_double_number_pane_vc_g2_ParamLimits

0x473b,	// (0x00017d2b) list_double_number_pane_vc_g2

0x0001,

0xf5e4,	// (0x00022bd4) list_double_number_pane_vc_g_ParamLimits

0xf5e4,	// (0x00022bd4) list_double_number_pane_vc_g

0x4a00,	// (0x00017ff0) list_double_number_pane_vc_t1_ParamLimits

0x4a00,	// (0x00017ff0) list_double_number_pane_vc_t1

0x4a14,	// (0x00018004) list_double_number_pane_vc_t2_ParamLimits

0x4a14,	// (0x00018004) list_double_number_pane_vc_t2

0x49ea,	// (0x00017fda) list_double_number_pane_vc_t3_ParamLimits

0x49ea,	// (0x00017fda) list_double_number_pane_vc_t3

0x0002,

0xfa48,	// (0x00023038) list_double_number_pane_vc_t_ParamLimits

0xfa48,	// (0x00023038) list_double_number_pane_vc_t

0x4a26,	// (0x00018016) list_double_large_graphic_pane_vc_g1_ParamLimits

0x4a26,	// (0x00018016) list_double_large_graphic_pane_vc_g1

0x4a32,	// (0x00018022) list_double_large_graphic_pane_vc_g2_ParamLimits

0x4a32,	// (0x00018022) list_double_large_graphic_pane_vc_g2

0x4922,	// (0x00017f12) list_double_large_graphic_pane_vc_g3_ParamLimits

0x4922,	// (0x00017f12) list_double_large_graphic_pane_vc_g3

0x4a41,	// (0x00018031) list_double_large_graphic_pane_vc_g4_ParamLimits

0x4a41,	// (0x00018031) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4f,	// (0x0002303f) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4f,	// (0x0002303f) list_double_large_graphic_pane_vc_g

0x4a4d,	// (0x0001803d) list_double_large_graphic_pane_vc_t1_ParamLimits

0x4a4d,	// (0x0001803d) list_double_large_graphic_pane_vc_t1

0x4a5f,	// (0x0001804f) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4a5f,	// (0x0001804f) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa58,	// (0x00023048) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa58,	// (0x00023048) list_double_large_graphic_pane_vc_t

0x472f,	// (0x00017d1f) list_double_heading_pane_vc_g1_ParamLimits

0x472f,	// (0x00017d1f) list_double_heading_pane_vc_g1

0x473b,	// (0x00017d2b) list_double_heading_pane_vc_g2_ParamLimits

0x473b,	// (0x00017d2b) list_double_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x00022bd4) list_double_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x00022bd4) list_double_heading_pane_vc_g

0x4a76,	// (0x00018066) list_double_heading_pane_vc_t1_ParamLimits

0x4a76,	// (0x00018066) list_double_heading_pane_vc_t1

0x47a3,	// (0x00017d93) list_double_heading_pane_vc_t2_ParamLimits

0x47a3,	// (0x00017d93) list_double_heading_pane_vc_t2

0x0001,

0xfa5d,	// (0x0002304d) list_double_heading_pane_vc_t_ParamLimits

0xfa5d,	// (0x0002304d) list_double_heading_pane_vc_t

0x4a88,	// (0x00018078) list_double_graphic_pane_vc_g1_ParamLimits

0x4a88,	// (0x00018078) list_double_graphic_pane_vc_g1

0x4a98,	// (0x00018088) list_double_graphic_pane_vc_g2_ParamLimits

0x4a98,	// (0x00018088) list_double_graphic_pane_vc_g2

0x4aa7,	// (0x00018097) list_double_graphic_pane_vc_g3_ParamLimits

0x4aa7,	// (0x00018097) list_double_graphic_pane_vc_g3

0x0002,

0xfa62,	// (0x00023052) list_double_graphic_pane_vc_g_ParamLimits

0xfa62,	// (0x00023052) list_double_graphic_pane_vc_g

0x4ab3,	// (0x000180a3) list_double_graphic_pane_vc_t1_ParamLimits

0x4ab3,	// (0x000180a3) list_double_graphic_pane_vc_t1

0x49ea,	// (0x00017fda) list_double_graphic_pane_vc_t2_ParamLimits

0x49ea,	// (0x00017fda) list_double_graphic_pane_vc_t2

0x0001,

0xfa69,	// (0x00023059) list_double_graphic_pane_vc_t_ParamLimits

0xfa69,	// (0x00023059) list_double_graphic_pane_vc_t

0x4eb0,	// (0x000184a0) aid_size_cell_fastswap

0xa06a,	// (0x0001d65a) aid_size_cell_touch_ParamLimits

0xa06a,	// (0x0001d65a) aid_size_cell_touch

0x4ffd,	// (0x000185ed) popup_fast_swap_wide_window_ParamLimits

0x4ffd,	// (0x000185ed) popup_fast_swap_wide_window

0xa184,	// (0x0001d774) touch_pane_ParamLimits

0xa184,	// (0x0001d774) touch_pane

0x4470,	// (0x00017a60) button_value_adjust_pane_cp2

0x2083,	// (0x00015673) button_value_adjust_pane_cp4

0x4490,	// (0x00017a80) form_field_data_pane_cp2

0x9c2d,	// (0x0001d21d) form_field_data_wide_pane_cp2

0xdee0,	// (0x000214d0) bg_scroll_pane_ParamLimits

0x52be,	// (0x000188ae) scroll_handle_pane_ParamLimits

0x52d2,	// (0x000188c2) scroll_sc2_down_pane_ParamLimits

0x52d2,	// (0x000188c2) scroll_sc2_down_pane

0xdf11,	// (0x00021501) scroll_sc2_up_pane_ParamLimits

0xdf11,	// (0x00021501) scroll_sc2_up_pane

0xbb39,	// (0x0001f129) grid_wheel_folder_pane_g1_ParamLimits

0xbb39,	// (0x0001f129) grid_wheel_folder_pane_g1

0x5486,	// (0x00018a76) clock_nsta_pane_cp2_ParamLimits

0x5486,	// (0x00018a76) clock_nsta_pane_cp2

0xa813,	// (0x0001de03) listscroll_midp_pane_ParamLimits

0xa823,	// (0x0001de13) midp_canvas_pane

0x56ce,	// (0x00018cbe) nsta_clock_indic_pane

0xe747,	// (0x00021d37) listscroll_form_pane_vc

0xe74f,	// (0x00021d3f) listscroll_set_pane_vc_ParamLimits

0xe74f,	// (0x00021d3f) listscroll_set_pane_vc

0xb0b1,	// (0x0001e6a1) clock_nsta_pane

0xb0d4,	// (0x0001e6c4) indicator_nsta_pane

0xe95d,	// (0x00021f4d) bg_popup_sub_pane_cp2_ParamLimits

0xe971,	// (0x00021f61) find_pane_cp2_ParamLimits

0xe971,	// (0x00021f61) find_pane_cp2

0xe983,	// (0x00021f73) grid_toobar_pane_ParamLimits

0xeae1,	// (0x000220d1) list_form_gen_pane_vc_ParamLimits

0xeae1,	// (0x000220d1) list_form_gen_pane_vc

0xeaf7,	// (0x000220e7) scroll_pane_cp8_vc_ParamLimits

0xeaf7,	// (0x000220e7) scroll_pane_cp8_vc

0xeb47,	// (0x00022137) data_form_wide_pane_vc_ParamLimits

0xeb47,	// (0x00022137) data_form_wide_pane_vc

0xeb53,	// (0x00022143) form_field_data_wide_pane_vc_g1

0xeb5b,	// (0x0002214b) form_field_data_wide_pane_vc_t1_ParamLimits

0xeb5b,	// (0x0002214b) form_field_data_wide_pane_vc_t1

0xd993,	// (0x00020f83) input_focus_pane_cp6_vc_ParamLimits

0xd993,	// (0x00020f83) input_focus_pane_cp6_vc

0xb488,	// (0x0001ea78) list_midp_pane_ParamLimits

0x1175,	// (0x00014765) scroll_pane_cp16_ParamLimits

0x1175,	// (0x00014765) scroll_pane_cp16

0xedc2,	// (0x000223b2) button_value_adjust_pane_ParamLimits

0xedc2,	// (0x000223b2) button_value_adjust_pane

0xb795,	// (0x0001ed85) button_value_adjust_pane_cp6_ParamLimits

0xb795,	// (0x0001ed85) button_value_adjust_pane_cp6

0xb89f,	// (0x0001ee8f) settings_code_pane_cp_ParamLimits

0xb89f,	// (0x0001ee8f) settings_code_pane_cp

0xd30d,	// (0x000208fd) cell_touch_pane_g1

0xd30d,	// (0x000208fd) cell_touch_pane_g2

0x0001,

0xf71f,	// (0x00022d0f) cell_touch_pane_g

0xba23,	// (0x0001f013) cell_touch_pane_cp_ParamLimits

0xba23,	// (0x0001f013) cell_touch_pane_cp

0xba3f,	// (0x0001f02f) cell_touch_pane_ParamLimits

0xba3f,	// (0x0001f02f) cell_touch_pane

0xd30d,	// (0x000208fd) scroll_sc2_down_pane_g1

0xd30d,	// (0x000208fd) scroll_sc2_up_pane_g1

0xd38f,	// (0x0002097f) bg_set_opt_pane_cp4_vc

0x1afc,	// (0x000150ec) list_set_graphic_pane_vc_g1_ParamLimits

0x1afc,	// (0x000150ec) list_set_graphic_pane_vc_g1

0x1b08,	// (0x000150f8) list_set_graphic_pane_vc_g2_ParamLimits

0x1b08,	// (0x000150f8) list_set_graphic_pane_vc_g2

0x0001,

0xf9e6,	// (0x00022fd6) list_set_graphic_pane_vc_g_ParamLimits

0xf9e6,	// (0x00022fd6) list_set_graphic_pane_vc_g

0x1b14,	// (0x00015104) text_primary_small_cp13_vc_ParamLimits

0x1b14,	// (0x00015104) text_primary_small_cp13_vc

0x1148,	// (0x00014738) list_set_graphic_pane_vc_ParamLimits

0x1148,	// (0x00014738) list_set_graphic_pane_vc

0xd38f,	// (0x0002097f) input_focus_pane_cp2_vc

0xd30d,	// (0x000208fd) setting_code_pane_vc_g1

0x1b2c,	// (0x0001511c) setting_code_pane_vc_t1

0x1b3a,	// (0x0001512a) set_text_pane_vc_t1_ParamLimits

0x1b3a,	// (0x0001512a) set_text_pane_vc_t1

0xd38f,	// (0x0002097f) input_focus_pane_cp1_vc

0x1b55,	// (0x00015145) list_set_text_pane_vc

0xd30d,	// (0x000208fd) setting_text_pane_vc_g1

0xd38f,	// (0x0002097f) bg_set_opt_pane_cp2_vc

0x1b5f,	// (0x0001514f) setting_slider_graphic_pane_vc_g1

0x1b67,	// (0x00015157) setting_slider_graphic_pane_vc_t1

0x1b75,	// (0x00015165) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9eb,	// (0x00022fdb) setting_slider_graphic_pane_vc_t

0x1b83,	// (0x00015173) slider_set_pane_cp_vc

0x1b8b,	// (0x0001517b) slider_set_pane_vc_g1

0x1b94,	// (0x00015184) slider_set_pane_vc_g2

0x0006,

0xf9f0,	// (0x00022fe0) slider_set_pane_vc_g

0xd9ee,	// (0x00020fde) set_opt_bg_pane_g1_copy1

0xd9f6,	// (0x00020fe6) set_opt_bg_pane_g2_copy1

0x1bc0,	// (0x000151b0) set_opt_bg_pane_g3_copy1

0xda06,	// (0x00020ff6) set_opt_bg_pane_g4_copy1

0xda0e,	// (0x00020ffe) set_opt_bg_pane_g5_copy1

0xda16,	// (0x00021006) set_opt_bg_pane_g6_copy1

0x1bc8,	// (0x000151b8) set_opt_bg_pane_g7_copy1

0x1bd0,	// (0x000151c0) set_opt_bg_pane_g8_copy1

0x1bd8,	// (0x000151c8) set_opt_bg_pane_g9_copy1

0xd38f,	// (0x0002097f) bg_set_opt_pane_cp_vc

0x1be0,	// (0x000151d0) setting_slider_pane_vc_t1

0x1b67,	// (0x00015157) setting_slider_pane_vc_t2

0x1b75,	// (0x00015165) setting_slider_pane_vc_t3

0x0002,

0xf9ff,	// (0x00022fef) setting_slider_pane_vc_t

0x1b83,	// (0x00015173) slider_set_pane_vc

0x57e5,	// (0x00018dd5) volume_set_pane_vc_g1

0x5e3d,	// (0x0001942d) volume_set_pane_vc_g2

0x5e46,	// (0x00019436) volume_set_pane_vc_g3

0x5e4f,	// (0x0001943f) volume_set_pane_vc_g4

0x5e58,	// (0x00019448) volume_set_pane_vc_g5

0x5e61,	// (0x00019451) volume_set_pane_vc_g6

0x5e6a,	// (0x0001945a) volume_set_pane_vc_g7

0x5e73,	// (0x00019463) volume_set_pane_vc_g8

0x5e7c,	// (0x0001946c) volume_set_pane_vc_g9

0x5e85,	// (0x00019475) volume_set_pane_vc_g10

0x0009,

0xfa06,	// (0x00022ff6) volume_set_pane_vc_g

0x1c84,	// (0x00015274) volume_set_pane_vc

0x1c8c,	// (0x0001527c) button_value_adjust_pane_cp1_vc

0x1c96,	// (0x00015286) list_highlight_pane_cp2_vc

0x1c9f,	// (0x0001528f) list_set_pane_vc_ParamLimits

0x1c9f,	// (0x0001528f) list_set_pane_vc

0x1cf1,	// (0x000152e1) main_pane_set_vc_t1_ParamLimits

0x1cf1,	// (0x000152e1) main_pane_set_vc_t1

0x1d06,	// (0x000152f6) main_pane_set_vc_t2_ParamLimits

0x1d06,	// (0x000152f6) main_pane_set_vc_t2

0x1d18,	// (0x00015308) main_pane_set_vc_t3_ParamLimits

0x1d18,	// (0x00015308) main_pane_set_vc_t3

0x1d2a,	// (0x0001531a) main_pane_set_vc_t4_ParamLimits

0x1d2a,	// (0x0001531a) main_pane_set_vc_t4

0x0003,

0xfa1b,	// (0x0002300b) main_pane_set_vc_t_ParamLimits

0xfa1b,	// (0x0002300b) main_pane_set_vc_t

0x1d3c,	// (0x0001532c) setting_code_pane_vc_ParamLimits

0x1d3c,	// (0x0001532c) setting_code_pane_vc

0x1d4b,	// (0x0001533b) setting_slider_graphic_pane_vc

0x1d4b,	// (0x0001533b) setting_slider_pane_vc

0x1d4b,	// (0x0001533b) setting_text_pane_vc

0x1d4b,	// (0x0001533b) setting_volume_pane_vc

0x1d53,	// (0x00015343) scroll_pane_cp121_vc

0xd97e,	// (0x00020f6e) set_content_pane_vc

0x1f06,	// (0x000154f6) button_value_adjust_pane_g1

0x1f0f,	// (0x000154ff) button_value_adjust_pane_g2

0x0001,

0xfa6e,	// (0x0002305e) button_value_adjust_pane_g

0x1f18,	// (0x00015508) form_field_slider_wide_pane_vc_t1_ParamLimits

0x1f18,	// (0x00015508) form_field_slider_wide_pane_vc_t1

0x1f2e,	// (0x0001551e) form_field_slider_wide_pane_vc_t2_ParamLimits

0x1f2e,	// (0x0001551e) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa73,	// (0x00023063) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa73,	// (0x00023063) form_field_slider_wide_pane_vc_t

0xd3dd,	// (0x000209cd) input_focus_pane_cp10_vc_ParamLimits

0xd3dd,	// (0x000209cd) input_focus_pane_cp10_vc

0x1f43,	// (0x00015533) slider_cont_pane_cp1_vc_ParamLimits

0x1f43,	// (0x00015533) slider_cont_pane_cp1_vc

0x1b8b,	// (0x0001517b) slider_form_pane_g1_cp2

0x1b94,	// (0x00015184) slider_form_pane_g2_cp2

0x1f5e,	// (0x0001554e) form_field_slider_pane_vc_t3

0x1f6c,	// (0x0001555c) form_field_slider_pane_vc_t4

0x1f7a,	// (0x0001556a) slider_form_pane_vc_ParamLimits

0x1f7a,	// (0x0001556a) slider_form_pane_vc

0x1f87,	// (0x00015577) form_field_slider_pane_vc_t1_ParamLimits

0x1f87,	// (0x00015577) form_field_slider_pane_vc_t1

0x1f9d,	// (0x0001558d) form_field_slider_pane_vc_t2_ParamLimits

0x1f9d,	// (0x0001558d) form_field_slider_pane_vc_t2

0x0001,

0xfa83,	// (0x00023073) form_field_slider_pane_vc_t_ParamLimits

0xfa83,	// (0x00023073) form_field_slider_pane_vc_t

0xd3dd,	// (0x000209cd) input_focus_pane_cp9_vc_ParamLimits

0xd3dd,	// (0x000209cd) input_focus_pane_cp9_vc

0x1faf,	// (0x0001559f) slider_cont_pane_vc_ParamLimits

0x1faf,	// (0x0001559f) slider_cont_pane_vc

0x1fc1,	// (0x000155b1) list_form_graphic_pane_cp_vc_ParamLimits

0x1fc1,	// (0x000155b1) list_form_graphic_pane_cp_vc

0xeb53,	// (0x00022143) form_field_popup_wide_pane_vc_g1

0x1fd6,	// (0x000155c6) form_field_popup_wide_pane_vc_t1_ParamLimits

0x1fd6,	// (0x000155c6) form_field_popup_wide_pane_vc_t1

0xd993,	// (0x00020f83) input_focus_pane_cp8_vc_ParamLimits

0xd993,	// (0x00020f83) input_focus_pane_cp8_vc

0x1feb,	// (0x000155db) list_form_wide_pane_vc_ParamLimits

0x1feb,	// (0x000155db) list_form_wide_pane_vc

0x1ff7,	// (0x000155e7) list_form_graphic_pane_vc_g1

0x1fff,	// (0x000155ef) list_form_graphic_pane_vc_t1_ParamLimits

0x1fff,	// (0x000155ef) list_form_graphic_pane_vc_t1

0xd3f3,	// (0x000209e3) list_highlight_pane_cp5_vc_ParamLimits

0xd3f3,	// (0x000209e3) list_highlight_pane_cp5_vc

0x201b,	// (0x0001560b) list_form_graphic_pane_vc_ParamLimits

0x201b,	// (0x0001560b) list_form_graphic_pane_vc

0xeb53,	// (0x00022143) form_field_popup_pane_vc_g1

0x2031,	// (0x00015621) form_field_popup_pane_vc_t1_ParamLimits

0x2031,	// (0x00015621) form_field_popup_pane_vc_t1

0xd993,	// (0x00020f83) input_focus_pane_cp7_vc_ParamLimits

0xd993,	// (0x00020f83) input_focus_pane_cp7_vc

0x2046,	// (0x00015636) list_form_pane_vc_ParamLimits

0x2046,	// (0x00015636) list_form_pane_vc

0x2052,	// (0x00015642) data_form_pane_vc_t1_ParamLimits

0x2052,	// (0x00015642) data_form_pane_vc_t1

0xd9ee,	// (0x00020fde) input_focus_pane_vc_g1

0xd9f6,	// (0x00020fe6) input_focus_pane_vc_g2

0xd9fe,	// (0x00020fee) input_focus_pane_vc_g3

0xda06,	// (0x00020ff6) input_focus_pane_vc_g4

0xda0e,	// (0x00020ffe) input_focus_pane_vc_g5

0xda16,	// (0x00021006) input_focus_pane_vc_g6

0xda1e,	// (0x0002100e) input_focus_pane_vc_g7

0xda26,	// (0x00021016) input_focus_pane_vc_g8

0xda2e,	// (0x0002101e) input_focus_pane_vc_g9

0xd30d,	// (0x000208fd) input_focus_pane_vc_g10

0x0009,

0xf6a8,	// (0x00022c98) input_focus_pane_vc_g

0xeb47,	// (0x00022137) data_form_pane_vc_ParamLimits

0xeb47,	// (0x00022137) data_form_pane_vc

0xeb53,	// (0x00022143) form_field_data_pane_vc_g1

0x206d,	// (0x0001565d) form_field_data_pane_vc_t1_ParamLimits

0x206d,	// (0x0001565d) form_field_data_pane_vc_t1

0xd993,	// (0x00020f83) input_focus_pane_vc_ParamLimits

0xd993,	// (0x00020f83) input_focus_pane_vc

0xdcee,	// (0x000212de) button_value_adjust_pane_cp3_vc

0x2083,	// (0x00015673) button_value_adjust_pane_cp5_vc

0x1c6d,	// (0x0001525d) form_field_data_pane_vc_ParamLimits

0x1c6d,	// (0x0001525d) form_field_data_pane_vc

0xdcf6,	// (0x000212e6) form_field_data_pane_vc_cp2

0x208b,	// (0x0001567b) form_field_data_wide_pane_vc_ParamLimits

0x208b,	// (0x0001567b) form_field_data_wide_pane_vc

0x20a1,	// (0x00015691) form_field_data_wide_pane_vc_cp2

0x20a9,	// (0x00015699) form_field_popup_pane_vc_ParamLimits

0x20a9,	// (0x00015699) form_field_popup_pane_vc

0x20c0,	// (0x000156b0) form_field_popup_wide_pane_vc_ParamLimits

0x20c0,	// (0x000156b0) form_field_popup_wide_pane_vc

0x20d6,	// (0x000156c6) form_field_slider_pane_vc_ParamLimits

0x20d6,	// (0x000156c6) form_field_slider_pane_vc

0x20e9,	// (0x000156d9) form_field_slider_wide_pane_vc_ParamLimits

0x20e9,	// (0x000156d9) form_field_slider_wide_pane_vc

0xba5d,	// (0x0001f04d) grid_touch_1_pane_ParamLimits

0xba5d,	// (0x0001f04d) grid_touch_1_pane

0xba71,	// (0x0001f061) grid_touch_2_pane_ParamLimits

0xba71,	// (0x0001f061) grid_touch_2_pane

0x20fc,	// (0x000156ec) touch_pane_g1_ParamLimits

0x20fc,	// (0x000156ec) touch_pane_g1

0x210a,	// (0x000156fa) cell_app_pane_cp_wide_ParamLimits

0x210a,	// (0x000156fa) cell_app_pane_cp_wide

0x211a,	// (0x0001570a) grid_popup_fast_wide_pane_ParamLimits

0x211a,	// (0x0001570a) grid_popup_fast_wide_pane

0x212e,	// (0x0001571e) scroll_pane_cp19_ParamLimits

0x212e,	// (0x0001571e) scroll_pane_cp19

0xd38f,	// (0x0002097f) bg_popup_window_pane_cp20

0x2142,	// (0x00015732) listscroll_popup_fast_wide_pane

0xdcfe,	// (0x000212ee) grid_indicator_nsta_pane

0x214a,	// (0x0001573a) clock_nsta_pane_g1

0x2153,	// (0x00015743) clock_nsta_pane_t1

0xba9b,	// (0x0001f08b) cell_indicator_nsta_pane_ParamLimits

0xba9b,	// (0x0001f08b) cell_indicator_nsta_pane

0x20fc,	// (0x000156ec) cell_indicator_nsta_pane_g1

0xbab8,	// (0x0001f0a8) cell_indicator_nsta_pane_g2

0x0001,

0xfa8d,	// (0x0002307d) cell_indicator_nsta_pane_g

0x216f,	// (0x0001575f) clock_nsta_pane_cp

0x2177,	// (0x00015767) indicator_nsta_pane_cp

0x2180,	// (0x00015770) nsta_clock_indic_pane_g1

0xd45b,	// (0x00020a4b) grid_indicator_pane

0xe003,	// (0x000215f3) scroll_pane_cp29

0x53dd,	// (0x000189cd) indicator_nsta_pane_cp2_ParamLimits

0x53dd,	// (0x000189cd) indicator_nsta_pane_cp2

0xd3f3,	// (0x000209e3) main_apps_wheel_pane

0xec67,	// (0x00022257) form_midp_field_text_pane_ParamLimits

0xed94,	// (0x00022384) scroll_bar_cp050_ParamLimits

0x21e9,	// (0x000157d9) cell_indicator_pane_ParamLimits

0x21e9,	// (0x000157d9) cell_indicator_pane

0x21ff,	// (0x000157ef) cell_indicator_pane_g1

0xbacd,	// (0x0001f0bd) grid_wheel_folder_pane_ParamLimits

0xbacd,	// (0x0001f0bd) grid_wheel_folder_pane

0xbadb,	// (0x0001f0cb) list_wheel_apps_pane_ParamLimits

0xbadb,	// (0x0001f0cb) list_wheel_apps_pane

0xbae7,	// (0x0001f0d7) main_apps_wheel_pane_g1_ParamLimits

0xbae7,	// (0x0001f0d7) main_apps_wheel_pane_g1

0xbaf3,	// (0x0001f0e3) main_apps_wheel_pane_g2_ParamLimits

0xbaf3,	// (0x0001f0e3) main_apps_wheel_pane_g2

0x0001,

0xfaa9,	// (0x00023099) main_apps_wheel_pane_g_ParamLimits

0xfaa9,	// (0x00023099) main_apps_wheel_pane_g

0xbaff,	// (0x0001f0ef) main_apps_wheel_pane_t1_ParamLimits

0xbaff,	// (0x0001f0ef) main_apps_wheel_pane_t1

0xbb11,	// (0x0001f101) list_wheel_apps_pane_g1

0xbb19,	// (0x0001f109) list_wheel_apps_pane_g2

0xbb21,	// (0x0001f111) list_wheel_apps_pane_g3

0xbb29,	// (0x0001f119) list_wheel_apps_pane_g4

0xbb31,	// (0x0001f121) list_wheel_apps_pane_g5

0x0004,

0xfaae,	// (0x0002309e) list_wheel_apps_pane_g

0xd3f3,	// (0x000209e3) navi_icon_text_pane

0xafbd,	// (0x0001e5ad) aid_fill_nsta

0x2209,	// (0x000157f9) navi_icon_text_pane_g1

0x2215,	// (0x00015805) navi_icon_text_pane_t1

0xe278,	// (0x00021868) list_set_graphic_pane_t1_ParamLimits

0xe278,	// (0x00021868) list_set_graphic_pane_t1

0xf46e,	// (0x00022a5e) popup_midp_note_alarm_window_t6_ParamLimits

0xf46e,	// (0x00022a5e) popup_midp_note_alarm_window_t6

0xf480,	// (0x00022a70) popup_midp_note_alarm_window_t7_ParamLimits

0xf480,	// (0x00022a70) popup_midp_note_alarm_window_t7

0xf492,	// (0x00022a82) popup_midp_note_alarm_window_t8_ParamLimits

0xf492,	// (0x00022a82) popup_midp_note_alarm_window_t8

0xf4a4,	// (0x00022a94) popup_midp_note_alarm_window_t9_ParamLimits

0xf4a4,	// (0x00022a94) popup_midp_note_alarm_window_t9

0xf4b6,	// (0x00022aa6) popup_midp_note_alarm_window_t10_ParamLimits

0xf4b6,	// (0x00022aa6) popup_midp_note_alarm_window_t10

0xf4c8,	// (0x00022ab8) popup_midp_note_alarm_window_t11_ParamLimits

0xf4c8,	// (0x00022ab8) popup_midp_note_alarm_window_t11

0xf4da,	// (0x00022aca) scroll_pane_cp17_ParamLimits

0xf4da,	// (0x00022aca) scroll_pane_cp17

0x57e5,	// (0x00018dd5) volume_small_pane_cp_g1

0x5fa6,	// (0x00019596) volume_small_pane_cp_g2

0x5faf,	// (0x0001959f) volume_small_pane_cp_g3

0x5fb8,	// (0x000195a8) volume_small_pane_cp_g4

0x5812,	// (0x00018e02) volume_small_pane_cp_g5

0x5fc1,	// (0x000195b1) volume_small_pane_cp_g6

0x5fca,	// (0x000195ba) volume_small_pane_cp_g7

0x5fd3,	// (0x000195c3) volume_small_pane_cp_g8

0x5fdc,	// (0x000195cc) volume_small_pane_cp_g9

0x5fe5,	// (0x000195d5) volume_small_pane_cp_g10

0xe527,	// (0x00021b17) midp_ticker_pane_g1_ParamLimits

0xe533,	// (0x00021b23) midp_ticker_pane_g2_ParamLimits

0xf770,	// (0x00022d60) midp_ticker_pane_g_ParamLimits

0xe53f,	// (0x00021b2f) midp_ticker_pane_t1_ParamLimits

0xafd3,	// (0x0001e5c3) aid_fill_nsta_2

0xed80,	// (0x00022370) list_form2_midp_pane

0x1756,	// (0x00014d46) midp_editing_number_pane_ParamLimits

0x1762,	// (0x00014d52) midp_ticker_pane_ParamLimits

0x2227,	// (0x00015817) form2_midp_field_pane

0x222f,	// (0x0001581f) scroll_pane_cp51

0x224f,	// (0x0001583f) form2_midp_button_pane_ParamLimits

0x224f,	// (0x0001583f) form2_midp_button_pane

0x2261,	// (0x00015851) form2_midp_content_pane_ParamLimits

0x2261,	// (0x00015851) form2_midp_content_pane

0x227b,	// (0x0001586b) form2_midp_field_choice_group_pane

0x2283,	// (0x00015873) form2_midp_field_pane_g1

0x228b,	// (0x0001587b) form2_midp_field_pane_g2

0x2293,	// (0x00015883) form2_midp_field_pane_g3

0x229b,	// (0x0001588b) form2_midp_field_pane_g4

0x0003,

0xfad3,	// (0x000230c3) form2_midp_field_pane_g

0x22a3,	// (0x00015893) form2_midp_gauge_slider_pane

0x22ab,	// (0x0001589b) form2_midp_gauge_wait_pane

0x22b3,	// (0x000158a3) form2_midp_image_pane_ParamLimits

0x22b3,	// (0x000158a3) form2_midp_image_pane

0x22ce,	// (0x000158be) form2_midp_label_pane_ParamLimits

0x22ce,	// (0x000158be) form2_midp_label_pane

0xbb66,	// (0x0001f156) form2_midp_label_pane_cp_ParamLimits

0xbb66,	// (0x0001f156) form2_midp_label_pane_cp

0x22e7,	// (0x000158d7) form2_midp_string_pane_ParamLimits

0x22e7,	// (0x000158d7) form2_midp_string_pane

0x9e35,	// (0x0001d425) form2_midp_text_pane_ParamLimits

0x9e35,	// (0x0001d425) form2_midp_text_pane

0x22f9,	// (0x000158e9) form2_midp_time_pane

0x2309,	// (0x000158f9) input_focus_pane_cp51_ParamLimits

0x2309,	// (0x000158f9) input_focus_pane_cp51

0x2321,	// (0x00015911) form2_midp_label_pane_t1_ParamLimits

0x2321,	// (0x00015911) form2_midp_label_pane_t1

0x9e4e,	// (0x0001d43e) form2_mdip_text_pane_t1_ParamLimits

0x9e4e,	// (0x0001d43e) form2_mdip_text_pane_t1

0x4afb,	// (0x000180eb) form2_midp_time_pane_t1

0x237c,	// (0x0001596c) form2_midp_gauge_slider_pane_t1

0xbb85,	// (0x0001f175) form2_midp_gauge_slider_pane_t2

0xbb97,	// (0x0001f187) form2_midp_gauge_slider_pane_t3

0x0002,

0xfadc,	// (0x000230cc) form2_midp_gauge_slider_pane_t

0x238e,	// (0x0001597e) form2_midp_slider_pane

0x239a,	// (0x0001598a) form2_midp_gauge_wait_pane_t1

0x23a8,	// (0x00015998) form2_midp_wait_pane_ParamLimits

0x23a8,	// (0x00015998) form2_midp_wait_pane

0xb405,	// (0x0001e9f5) list_single_2graphic_pane_cp4_ParamLimits

0xb405,	// (0x0001e9f5) list_single_2graphic_pane_cp4

0xbba9,	// (0x0001f199) list_single_midp_graphic_pane_cp_ParamLimits

0xbba9,	// (0x0001f199) list_single_midp_graphic_pane_cp

0xd38f,	// (0x0002097f) list_highlight_pane_cp20

0x23d3,	// (0x000159c3) list_single_2graphic_pane_g1_cp4

0x17e2,	// (0x00014dd2) list_single_2graphic_pane_g2_cp4

0x23db,	// (0x000159cb) list_single_2graphic_pane_t1_cp4

0xd3f3,	// (0x000209e3) list_highlight_pane_cp21

0x23ea,	// (0x000159da) list_single_midp_graphic_pane_g4_cp

0x23f9,	// (0x000159e9) list_single_midp_graphic_pane_t1_cp

0xbbc7,	// (0x0001f1b7) form2_mdip_string_pane_t1_ParamLimits

0xbbc7,	// (0x0001f1b7) form2_mdip_string_pane_t1

0xd38f,	// (0x0002097f) bg_wml_button_pane_cp2

0xd30d,	// (0x000208fd) form2_midp_image_pane_g1

0x4247,	// (0x00017837) list_double_large_graphic_pane_g5_ParamLimits

0x4247,	// (0x00017837) list_double_large_graphic_pane_g5

0xa813,	// (0x0001de03) midp_form_pane_ParamLimits

0xd3f3,	// (0x000209e3) main_apps_wheel_pane_ParamLimits

0xad5f,	// (0x0001e34f) popup_preview_window_ParamLimits

0xad5f,	// (0x0001e34f) popup_preview_window

0xe817,	// (0x00021e07) popup_touch_info_window_ParamLimits

0xe817,	// (0x00021e07) popup_touch_info_window

0xe835,	// (0x00021e25) popup_touch_menu_window_ParamLimits

0xe835,	// (0x00021e25) popup_touch_menu_window

0xd303,	// (0x000208f3) bg_popup_sub_pane_cp6

0x240e,	// (0x000159fe) list_touch_menu_pane

0x2416,	// (0x00015a06) list_single_touch_menu_pane_ParamLimits

0x2416,	// (0x00015a06) list_single_touch_menu_pane

0x242d,	// (0x00015a1d) list_single_touch_menu_pane_t1

0xd3f3,	// (0x000209e3) bg_popup_sub_pane_cp7_ParamLimits

0xd3f3,	// (0x000209e3) bg_popup_sub_pane_cp7

0x243b,	// (0x00015a2b) heading_sub_pane

0x2443,	// (0x00015a33) list_touch_info_pane_ParamLimits

0x2443,	// (0x00015a33) list_touch_info_pane

0x2452,	// (0x00015a42) list_single_touch_info_pane_ParamLimits

0x2452,	// (0x00015a42) list_single_touch_info_pane

0x2463,	// (0x00015a53) list_single_touch_info_pane_t1

0x2471,	// (0x00015a61) list_single_touch_info_pane_t2

0x0001,

0xfaea,	// (0x000230da) list_single_touch_info_pane_t

0xe4fd,	// (0x00021aed) bg_popup_heading_pane_cp

0x247f,	// (0x00015a6f) heading_sub_pane_t1

0xeb0d,	// (0x000220fd) bg_popup_preview_window_pane_cp_ParamLimits

0xeb0d,	// (0x000220fd) bg_popup_preview_window_pane_cp

0x243b,	// (0x00015a2b) heading_preview_pane

0x2443,	// (0x00015a33) list_preview_pane_ParamLimits

0x2443,	// (0x00015a33) list_preview_pane

0x248d,	// (0x00015a7d) popup_preview_window_g1

0x2452,	// (0x00015a42) list_single_preview_pane_ParamLimits

0x2452,	// (0x00015a42) list_single_preview_pane

0x2495,	// (0x00015a85) list_single_preview_pane_g1

0x249d,	// (0x00015a8d) list_single_preview_pane_t1

0x2463,	// (0x00015a53) list_single_preview_pane_t2

0x0001,

0xfaef,	// (0x000230df) list_single_preview_pane_t

0x24ab,	// (0x00015a9b) bg_popup_heading_pane_cp2_ParamLimits

0x24ab,	// (0x00015a9b) bg_popup_heading_pane_cp2

0x24c1,	// (0x00015ab1) heading_preview_pane_g1

0x24c9,	// (0x00015ab9) heading_preview_pane_t1_ParamLimits

0x24c9,	// (0x00015ab9) heading_preview_pane_t1

0xd472,	// (0x00020a62) soft_indicator_pane_t1_ParamLimits

0xd916,	// (0x00020f06) scroll_pane_ParamLimits

0xdeff,	// (0x000214ef) scroll_sc2_left_pane

0xdf08,	// (0x000214f8) scroll_sc2_right_pane

0xdf27,	// (0x00021517) scroll_bg_pane_g1_ParamLimits

0xdf3c,	// (0x0002152c) scroll_bg_pane_g2_ParamLimits

0xdf54,	// (0x00021544) scroll_bg_pane_g3_ParamLimits

0xf6ff,	// (0x00022cef) scroll_bg_pane_g_ParamLimits

0xdf27,	// (0x00021517) scroll_handle_pane_g1_ParamLimits

0xdf76,	// (0x00021566) scroll_handle_pane_g2_ParamLimits

0xdf54,	// (0x00021544) scroll_handle_pane_g3_ParamLimits

0xf706,	// (0x00022cf6) scroll_handle_pane_g_ParamLimits

0xe76f,	// (0x00021d5f) popup_choice_list_window_ParamLimits

0xe76f,	// (0x00021d5f) popup_choice_list_window

0xe969,	// (0x00021f59) choice_list_pane

0xe9df,	// (0x00021fcf) cell_toolbar_pane_t1

0xea07,	// (0x00021ff7) toolbar_button_pane_ParamLimits

0x14b7,	// (0x00014aa7) ai_gene_pane_1_t2_ParamLimits

0x14b7,	// (0x00014aa7) ai_gene_pane_1_t2

0x0001,

0xf8f9,	// (0x00022ee9) ai_gene_pane_1_t_ParamLimits

0xf8f9,	// (0x00022ee9) ai_gene_pane_1_t

0x24e6,	// (0x00015ad6) scroll_sc2_left_pane_g1

0x24e6,	// (0x00015ad6) scroll_sc2_right_pane_g1

0xdea5,	// (0x00021495) bg_popup_sub_pane_cp10

0x24f0,	// (0x00015ae0) list_choice_list_pane

0x2515,	// (0x00015b05) list_single_choice_list_pane_ParamLimits

0x2515,	// (0x00015b05) list_single_choice_list_pane

0x2529,	// (0x00015b19) list_single_choice_list_pane_g1

0xdb06,	// (0x000210f6) list_single_choice_list_pane_t1_ParamLimits

0xdb06,	// (0x000210f6) list_single_choice_list_pane_t1

0x2531,	// (0x00015b21) choice_list_pane_g1

0x2539,	// (0x00015b29) choice_list_pane_t1

0xd303,	// (0x000208f3) input_focus_pane_cp11

0xdc91,	// (0x00021281) title_pane_stacon_g2_ParamLimits

0xdc91,	// (0x00021281) title_pane_stacon_g2

0x0002,

0xf6e5,	// (0x00022cd5) title_pane_stacon_g_ParamLimits

0xf6e5,	// (0x00022cd5) title_pane_stacon_g

0xe4fd,	// (0x00021aed) cursor_press_pane

0xaac6,	// (0x0001e0b6) popup_fep_hwr_window_ParamLimits

0xaac6,	// (0x0001e0b6) popup_fep_hwr_window

0xe7c1,	// (0x00021db1) popup_fep_vkb_window_ParamLimits

0xe7c1,	// (0x00021db1) popup_fep_vkb_window

0x2547,	// (0x00015b37) cursor_press_pane_g1

0x0002,

0xfb18,	// (0x00023108) fep_vkb_side_pane_g_ParamLimits

0x60ec,	// (0x000196dc) fep_hwr_candidate_pane_ParamLimits

0x60ec,	// (0x000196dc) fep_hwr_candidate_pane

0x6114,	// (0x00019704) fep_hwr_side_pane_ParamLimits

0x6114,	// (0x00019704) fep_hwr_side_pane

0x6134,	// (0x00019724) fep_hwr_top_pane_ParamLimits

0x6134,	// (0x00019724) fep_hwr_top_pane

0x614c,	// (0x0001973c) fep_hwr_write_pane_ParamLimits

0x614c,	// (0x0001973c) fep_hwr_write_pane

0xfb18,	// (0x00023108) fep_vkb_side_pane_g

0x2561,	// (0x00015b51) fep_hwr_top_pane_g1

0x254f,	// (0x00015b3f) fep_hwr_top_pane_g2

0x6178,	// (0x00019768) fep_hwr_top_pane_g3

0x0002,

0xfaf4,	// (0x000230e4) fep_hwr_top_pane_g

0x618d,	// (0x0001977d) fep_hwr_top_text_pane

0xe070,	// (0x00021660) fep_hwr_top_text_pane_g1

0x2597,	// (0x00015b87) fep_hwr_top_text_pane_t1

0x627b,	// (0x0001986b) fep_hwr_candidate_pane_g1

0x2760,	// (0x00015d50) fep_vkb_keypad_pane_g3_ParamLimits

0x2760,	// (0x00015d50) fep_vkb_keypad_pane_g3

0x2782,	// (0x00015d72) fep_vkb_keypad_pane_g4_ParamLimits

0x2782,	// (0x00015d72) fep_vkb_keypad_pane_g4

0x27f1,	// (0x00015de1) fep_vkb_bottom_pane_g2_ParamLimits

0x27f1,	// (0x00015de1) fep_vkb_bottom_pane_g2

0x0001,

0xfb1f,	// (0x0002310f) fep_vkb_bottom_pane_g_ParamLimits

0xfb1f,	// (0x0002310f) fep_vkb_bottom_pane_g

0x24e6,	// (0x00015ad6) cell_vkb_side_pane_g2

0x0001,

0xfb29,	// (0x00023119) cell_vkb_side_pane_g

0x2835,	// (0x00015e25) cell_vkb_side_pane_t1

0x2843,	// (0x00015e33) cell_vkb_side_pane_t1_copy1

0x24e6,	// (0x00015ad6) bg_fep_vkb_candidate_pane_g2

0x2911,	// (0x00015f01) cell_vkb_candidate_pane_ParamLimits

0x25a5,	// (0x00015b95) aid_size_cell_vkb_ParamLimits

0x25a5,	// (0x00015b95) aid_size_cell_vkb

0x2911,	// (0x00015f01) cell_vkb_candidate_pane

0x6379,	// (0x00019969) bg_popup_fep_shadow_pane_g1

0x260f,	// (0x00015bff) fep_vkb_bottom_pane_ParamLimits

0x260f,	// (0x00015bff) fep_vkb_bottom_pane

0x264c,	// (0x00015c3c) fep_vkb_candidate_pane_ParamLimits

0x264c,	// (0x00015c3c) fep_vkb_candidate_pane

0x2668,	// (0x00015c58) fep_vkb_keypad_pane_ParamLimits

0x2668,	// (0x00015c58) fep_vkb_keypad_pane

0x269c,	// (0x00015c8c) fep_vkb_side_pane_ParamLimits

0x269c,	// (0x00015c8c) fep_vkb_side_pane

0x26c8,	// (0x00015cb8) fep_vkb_top_pane_ParamLimits

0x26c8,	// (0x00015cb8) fep_vkb_top_pane

0x26f4,	// (0x00015ce4) fep_vkb_top_pane_g1_ParamLimits

0x26f4,	// (0x00015ce4) fep_vkb_top_pane_g1

0x2703,	// (0x00015cf3) fep_vkb_top_pane_g2_ParamLimits

0x2703,	// (0x00015cf3) fep_vkb_top_pane_g2

0x2712,	// (0x00015d02) fep_vkb_top_pane_g3_ParamLimits

0x2712,	// (0x00015d02) fep_vkb_top_pane_g3

0x0003,

0xfb0f,	// (0x000230ff) fep_vkb_top_pane_g_ParamLimits

0xfb0f,	// (0x000230ff) fep_vkb_top_pane_g

0x2730,	// (0x00015d20) fep_vkb_top_text_pane_ParamLimits

0x2730,	// (0x00015d20) fep_vkb_top_text_pane

0xbc8e,	// (0x0001f27e) fep_vkb_side_pane_g1_ParamLimits

0xbc8e,	// (0x0001f27e) fep_vkb_side_pane_g1

0x274f,	// (0x00015d3f) grid_vkb_side_pane_ParamLimits

0x274f,	// (0x00015d3f) grid_vkb_side_pane

0x6381,	// (0x00019971) bg_popup_fep_shadow_pane_g2

0x638a,	// (0x0001997a) bg_popup_fep_shadow_pane_g3

0x6392,	// (0x00019982) bg_popup_fep_shadow_pane_g4

0x639b,	// (0x0001998b) bg_popup_fep_shadow_pane_g5

0x63a3,	// (0x00019993) bg_popup_fep_shadow_pane_g6

0x63ab,	// (0x0001999b) bg_popup_fep_shadow_pane_g7

0xda0e,	// (0x00020ffe) bg_popup_fep_shadow_pane_g8

0x27a0,	// (0x00015d90) grid_vkb_keypad_number_pane_ParamLimits

0x27a0,	// (0x00015d90) grid_vkb_keypad_number_pane

0x27b0,	// (0x00015da0) grid_vkb_keypad_pane_ParamLimits

0x27b0,	// (0x00015da0) grid_vkb_keypad_pane

0x27d6,	// (0x00015dc6) fep_vkb_bottom_pane_g1_ParamLimits

0x27d6,	// (0x00015dc6) fep_vkb_bottom_pane_g1

0x27ff,	// (0x00015def) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x27ff,	// (0x00015def) grid_vkb_keypad_bottom_left_pane

0x2814,	// (0x00015e04) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x2814,	// (0x00015e04) grid_vkb_keypad_bottom_right_pane

0x2829,	// (0x00015e19) fep_vkb_top_text_pane_g1

0xbcd5,	// (0x0001f2c5) fep_vkb_top_text_pane_t1

0xbce7,	// (0x0001f2d7) cell_vkb_side_pane_ParamLimits

0xbce7,	// (0x0001f2d7) cell_vkb_side_pane

0x24e6,	// (0x00015ad6) cell_vkb_side_pane_g1

0x2851,	// (0x00015e41) cell_vkb_keypad_pane_ParamLimits

0x2851,	// (0x00015e41) cell_vkb_keypad_pane

0x28be,	// (0x00015eae) cell_vkb_keypad_pane_g1

0x0008,

0xfb3c,	// (0x0002312c) bg_popup_fep_shadow_pane_g

0x24e6,	// (0x00015ad6) cell_hwr_side_pane_g1

0x24e6,	// (0x00015ad6) cell_hwr_side_pane_g2

0x28c8,	// (0x00015eb8) cell_vkb_keypad_pane_t1

0xbcfd,	// (0x0001f2ed) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbcfd,	// (0x0001f2ed) cell_vkb_keypad_bottom_left_pane

0xbd12,	// (0x0001f302) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbd12,	// (0x0001f302) cell_vkb_keypad_bottom_right_pane

0x24e6,	// (0x00015ad6) cell_vkb_keypad_bottom_left_pane_g1

0x24e6,	// (0x00015ad6) cell_vkb_keypad_bottom_right_pane_g1

0x28d6,	// (0x00015ec6) cell_vkb_keypad_number_pane_ParamLimits

0x28d6,	// (0x00015ec6) cell_vkb_keypad_number_pane

0x28f5,	// (0x00015ee5) cell_vkb_keypad_number_pane_g1

0x28ff,	// (0x00015eef) cell_vkb_keypad_number_pane_g2

0x2908,	// (0x00015ef8) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb2e,	// (0x0002311e) cell_vkb_keypad_number_pane_g

0x28c8,	// (0x00015eb8) cell_vkb_keypad_number_pane_t1

0x292a,	// (0x00015f1a) fep_vkb_candidate_pane_g1

0x0001,

0xfb29,	// (0x00023119) cell_hwr_side_pane_g

0x2943,	// (0x00015f33) cell_hwr_side_pane_t1

0x63bb,	// (0x000199ab) cell_hwr_side_pane_t1_copy1

0x2722,	// (0x00015d12) cell_hwr_candidate_pane_g1

0x63c9,	// (0x000199b9) cell_hwr_candidate_pane_t1

0x24e6,	// (0x00015ad6) cell_vkb_candidate_pane_g2

0x2987,	// (0x00015f77) cell_vkb_candidate_pane_t1

0x2507,	// (0x00015af7) bg_popup_fep_shadow_pane_ParamLimits

0x2507,	// (0x00015af7) bg_popup_fep_shadow_pane

0x2a6d,	// (0x0001605d) bg_fep_hwr_top_pane_g4

0x2573,	// (0x00015b63) bg_hwr_side_pane_g1_ParamLimits

0x2573,	// (0x00015b63) bg_hwr_side_pane_g1

0xbc49,	// (0x0001f239) cell_hwr_side_pane_ParamLimits

0xbc49,	// (0x0001f239) cell_hwr_side_pane

0x6204,	// (0x000197f4) fep_hwr_write_pane_g1_ParamLimits

0x6204,	// (0x000197f4) fep_hwr_write_pane_g1

0x6211,	// (0x00019801) fep_hwr_write_pane_g2_ParamLimits

0x6211,	// (0x00019801) fep_hwr_write_pane_g2

0x621e,	// (0x0001980e) fep_hwr_write_pane_g3_ParamLimits

0x621e,	// (0x0001980e) fep_hwr_write_pane_g3

0xbc69,	// (0x0001f259) fep_hwr_write_pane_g4_ParamLimits

0xbc69,	// (0x0001f259) fep_hwr_write_pane_g4

0x0005,

0xfafb,	// (0x000230eb) fep_hwr_write_pane_g_ParamLimits

0xfafb,	// (0x000230eb) fep_hwr_write_pane_g

0x2a6d,	// (0x0001605d) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2a6d,	// (0x0001605d) bg_fep_hwr_candidate_pane_g2

0x6241,	// (0x00019831) cell_hwr_candidate_pane_ParamLimits

0x6241,	// (0x00019831) cell_hwr_candidate_pane

0x627b,	// (0x0001986b) fep_hwr_candidate_pane_g1_ParamLimits

0x25d3,	// (0x00015bc3) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x25d3,	// (0x00015bc3) bg_popup_fep_shadow_pane_cp2

0x2722,	// (0x00015d12) fep_vkb_top_pane_g4_ParamLimits

0x2722,	// (0x00015d12) fep_vkb_top_pane_g4

0x2741,	// (0x00015d31) fep_vkb_side_pane_g2_ParamLimits

0x2741,	// (0x00015d31) fep_vkb_side_pane_g2

0x9b43,	// (0x0001d133) list_setting_pane_t4_ParamLimits

0x9b43,	// (0x0001d133) list_setting_pane_t4

0x9bd5,	// (0x0001d1c5) list_setting_number_pane_t5_ParamLimits

0x9bd5,	// (0x0001d1c5) list_setting_number_pane_t5

0xa753,	// (0x0001dd43) list_double_heading_pane_cp2_ParamLimits

0xa753,	// (0x0001dd43) list_double_heading_pane_cp2

0xe372,	// (0x00021962) list_double_heading_pane_g1_cp2_ParamLimits

0xe372,	// (0x00021962) list_double_heading_pane_g1_cp2

0x2995,	// (0x00015f85) list_double_heading_pane_g2_cp2_ParamLimits

0x2995,	// (0x00015f85) list_double_heading_pane_g2_cp2

0x29a9,	// (0x00015f99) list_double_heading_pane_t1_cp2_ParamLimits

0x29a9,	// (0x00015f99) list_double_heading_pane_t1_cp2

0x29bf,	// (0x00015faf) list_double_heading_pane_t2_cp2_ParamLimits

0x29bf,	// (0x00015faf) list_double_heading_pane_t2_cp2

0xd2fb,	// (0x000208eb) aid_value_unit2

0x5039,	// (0x00018629) popup_preview_fixed_window

0xd552,	// (0x00020b42) bg_popup_preview_window_pane_cp02

0x29d1,	// (0x00015fc1) list_preview_fixed_pane

0x2a17,	// (0x00016007) list_empty_pane_fp_ParamLimits

0x2a17,	// (0x00016007) list_empty_pane_fp

0x2a17,	// (0x00016007) list_single_cale_day_pane_fp_ParamLimits

0x2a17,	// (0x00016007) list_single_cale_day_pane_fp

0x2a17,	// (0x00016007) list_single_graphic_heading_pane_fp_ParamLimits

0x2a17,	// (0x00016007) list_single_graphic_heading_pane_fp

0x2a17,	// (0x00016007) list_single_graphic_pane_fp_ParamLimits

0x2a17,	// (0x00016007) list_single_graphic_pane_fp

0x2a17,	// (0x00016007) list_single_heading_pane_fp_ParamLimits

0x2a17,	// (0x00016007) list_single_heading_pane_fp

0x2a17,	// (0x00016007) list_single_pane_fp_ParamLimits

0x2a17,	// (0x00016007) list_single_pane_fp

0x2a95,	// (0x00016085) list_single_pane_fp_g1_ParamLimits

0x2a95,	// (0x00016085) list_single_pane_fp_g1

0x4368,	// (0x00017958) list_single_pane_fp_g2_ParamLimits

0x4368,	// (0x00017958) list_single_pane_fp_g2

0x4b0e,	// (0x000180fe) list_single_pane_fp_g3_ParamLimits

0x4b0e,	// (0x000180fe) list_single_pane_fp_g3

0x2ab5,	// (0x000160a5) list_single_pane_fp_g4_ParamLimits

0x2ab5,	// (0x000160a5) list_single_pane_fp_g4

0x0003,

0xfb5d,	// (0x0002314d) list_single_pane_fp_g_ParamLimits

0xfb5d,	// (0x0002314d) list_single_pane_fp_g

0x4b22,	// (0x00018112) list_single_pane_fp_t1_ParamLimits

0x4b22,	// (0x00018112) list_single_pane_fp_t1

0x4b39,	// (0x00018129) list_single_graphic_pane_fp_g1_ParamLimits

0x4b39,	// (0x00018129) list_single_graphic_pane_fp_g1

0x2a95,	// (0x00016085) list_single_graphic_pane_fp_g2_ParamLimits

0x2a95,	// (0x00016085) list_single_graphic_pane_fp_g2

0x4368,	// (0x00017958) list_single_graphic_pane_fp_g3_ParamLimits

0x4368,	// (0x00017958) list_single_graphic_pane_fp_g3

0x4b0e,	// (0x000180fe) list_single_graphic_pane_fp_g4_ParamLimits

0x4b0e,	// (0x000180fe) list_single_graphic_pane_fp_g4

0x2ab5,	// (0x000160a5) list_single_graphic_pane_fp_g5_ParamLimits

0x2ab5,	// (0x000160a5) list_single_graphic_pane_fp_g5

0x0004,

0xfb66,	// (0x00023156) list_single_graphic_pane_fp_g_ParamLimits

0xfb66,	// (0x00023156) list_single_graphic_pane_fp_g

0x4b45,	// (0x00018135) list_single_graphic_pane_fp_t1_ParamLimits

0x4b45,	// (0x00018135) list_single_graphic_pane_fp_t1

0x4b39,	// (0x00018129) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4b39,	// (0x00018129) list_single_graphic_heading_pane_fp_g1

0x2a95,	// (0x00016085) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x2a95,	// (0x00016085) list_single_graphic_heading_pane_fp_g2

0x4368,	// (0x00017958) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4368,	// (0x00017958) list_single_graphic_heading_pane_fp_g3

0x4b0e,	// (0x000180fe) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4b0e,	// (0x000180fe) list_single_graphic_heading_pane_fp_g4

0x2ab5,	// (0x000160a5) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x2ab5,	// (0x000160a5) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb66,	// (0x00023156) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb66,	// (0x00023156) list_single_graphic_heading_pane_fp_g

0x4b5b,	// (0x0001814b) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4b5b,	// (0x0001814b) list_single_graphic_heading_pane_fp_t1

0x4b71,	// (0x00018161) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4b71,	// (0x00018161) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb71,	// (0x00023161) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb71,	// (0x00023161) list_single_graphic_heading_pane_fp_t

0x4b83,	// (0x00018173) list_single_cale_day_pane_fp_g1_ParamLimits

0x4b83,	// (0x00018173) list_single_cale_day_pane_fp_g1

0x2b5a,	// (0x0001614a) list_single_cale_day_pane_fp_g2_ParamLimits

0x2b5a,	// (0x0001614a) list_single_cale_day_pane_fp_g2

0x4bbb,	// (0x000181ab) list_single_cale_day_pane_fp_g3_ParamLimits

0x4bbb,	// (0x000181ab) list_single_cale_day_pane_fp_g3

0x4be3,	// (0x000181d3) list_single_cale_day_pane_fp_g4_ParamLimits

0x4be3,	// (0x000181d3) list_single_cale_day_pane_fp_g4

0x4c07,	// (0x000181f7) list_single_cale_day_pane_fp_g5_ParamLimits

0x4c07,	// (0x000181f7) list_single_cale_day_pane_fp_g5

0x0004,

0xfb76,	// (0x00023166) list_single_cale_day_pane_fp_g_ParamLimits

0xfb76,	// (0x00023166) list_single_cale_day_pane_fp_g

0x4c2b,	// (0x0001821b) list_single_cale_day_pane_fp_t1_ParamLimits

0x4c2b,	// (0x0001821b) list_single_cale_day_pane_fp_t1

0x4c51,	// (0x00018241) list_single_cale_day_pane_fp_t2_ParamLimits

0x4c51,	// (0x00018241) list_single_cale_day_pane_fp_t2

0x4c6a,	// (0x0001825a) list_single_cale_day_pane_fp_t3_ParamLimits

0x4c6a,	// (0x0001825a) list_single_cale_day_pane_fp_t3

0x0002,

0xfb81,	// (0x00023171) list_single_cale_day_pane_fp_t_ParamLimits

0xfb81,	// (0x00023171) list_single_cale_day_pane_fp_t

0x2a95,	// (0x00016085) list_empty_pane_fp_g1_ParamLimits

0x2a95,	// (0x00016085) list_empty_pane_fp_g1

0x4c83,	// (0x00018273) list_empty_pane_fp_t1

0x4c91,	// (0x00018281) list_empty_pane_fp_t2

0x0001,

0xfb88,	// (0x00023178) list_empty_pane_fp_t

0x2a95,	// (0x00016085) list_single_heading_pane_fp_g1_ParamLimits

0x2a95,	// (0x00016085) list_single_heading_pane_fp_g1

0x4368,	// (0x00017958) list_single_heading_pane_fp_g2_ParamLimits

0x4368,	// (0x00017958) list_single_heading_pane_fp_g2

0x4b0e,	// (0x000180fe) list_single_heading_pane_fp_g3_ParamLimits

0x4b0e,	// (0x000180fe) list_single_heading_pane_fp_g3

0x0002,

0xfb8d,	// (0x0002317d) list_single_heading_pane_fp_g_ParamLimits

0xfb8d,	// (0x0002317d) list_single_heading_pane_fp_g

0x4c9f,	// (0x0001828f) list_single_heading_pane_fp_t1_ParamLimits

0x4c9f,	// (0x0001828f) list_single_heading_pane_fp_t1

0x4cb1,	// (0x000182a1) list_single_heading_pane_fp_t2_ParamLimits

0x4cb1,	// (0x000182a1) list_single_heading_pane_fp_t2

0x0001,

0xfb94,	// (0x00023184) list_single_heading_pane_fp_t_ParamLimits

0xfb94,	// (0x00023184) list_single_heading_pane_fp_t

0xdb1b,	// (0x0002110b) aid_size_cell_fast

0xd535,	// (0x00020b25) soft_indicator_pane_cp1_t1

0xdb58,	// (0x00021148) cell_app_pane_cp2_ParamLimits

0xdb58,	// (0x00021148) cell_app_pane_cp2

0x60d9,	// (0x000196c9) fep_hwr_candidate_drop_down_list_pane

0x2a7b,	// (0x0001606b) fep_hwr_candidate_pane_g3_ParamLimits

0x2a7b,	// (0x0001606b) fep_hwr_candidate_pane_g3

0x2a88,	// (0x00016078) fep_hwr_candidate_pane_g4_ParamLimits

0x2a88,	// (0x00016078) fep_hwr_candidate_pane_g4

0x0002,

0xfb08,	// (0x000230f8) fep_hwr_candidate_pane_g_ParamLimits

0xfb08,	// (0x000230f8) fep_hwr_candidate_pane_g

0x263b,	// (0x00015c2b) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x263b,	// (0x00015c2b) fep_vkb_candidate_drop_down_list_pane

0x2932,	// (0x00015f22) fep_vkb_candidate_pane_g3

0x293a,	// (0x00015f2a) fep_vkb_candidate_pane_g4

0x0002,

0xfb35,	// (0x00023125) fep_vkb_candidate_pane_g

0x2722,	// (0x00015d12) cell_hwr_candidate_pane_g1_ParamLimits

0x2a2b,	// (0x0001601b) cell_hwr_candidate_pane_g3_ParamLimits

0x2a2b,	// (0x0001601b) cell_hwr_candidate_pane_g3

0x2a4c,	// (0x0001603c) cell_hwr_candidate_pane_g4_ParamLimits

0x2a4c,	// (0x0001603c) cell_hwr_candidate_pane_g4

0x0002,

0xfb4f,	// (0x0002313f) cell_hwr_candidate_pane_g_ParamLimits

0xfb4f,	// (0x0002313f) cell_hwr_candidate_pane_g

0x2951,	// (0x00015f41) cell_vkb_candidate_pane_g3_ParamLimits

0x2951,	// (0x00015f41) cell_vkb_candidate_pane_g3

0x296c,	// (0x00015f5c) cell_vkb_candidate_pane_g4_ParamLimits

0x296c,	// (0x00015f5c) cell_vkb_candidate_pane_g4

0x2c72,	// (0x00016262) cell_app_pane_cp2_g1_ParamLimits

0x2c72,	// (0x00016262) cell_app_pane_cp2_g1

0x2c90,	// (0x00016280) cell_app_pane_cp2_g2_ParamLimits

0x2c90,	// (0x00016280) cell_app_pane_cp2_g2

0x0001,

0xfb99,	// (0x00023189) cell_app_pane_cp2_g_ParamLimits

0xfb99,	// (0x00023189) cell_app_pane_cp2_g

0x2c9c,	// (0x0001628c) cell_app_pane_cp2_t1_ParamLimits

0x2c9c,	// (0x0001628c) cell_app_pane_cp2_t1

0xd993,	// (0x00020f83) grid_highlight_pane_cp1_ParamLimits

0xd993,	// (0x00020f83) grid_highlight_pane_cp1

0x63e6,	// (0x000199d6) cell_hwr_candidate_pane_cp1_ParamLimits

0x63e6,	// (0x000199d6) cell_hwr_candidate_pane_cp1

0x2722,	// (0x00015d12) fep_hwr_candidate_drop_down_list_pane_g1

0x2cae,	// (0x0001629e) fep_hwr_candidate_drop_down_list_pane_g2

0x2cbb,	// (0x000162ab) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9e,	// (0x0002318e) fep_hwr_candidate_drop_down_list_pane_g

0x6404,	// (0x000199f4) fep_hwr_candidate_drop_down_list_scroll_pane

0x640d,	// (0x000199fd) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x640d,	// (0x000199fd) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x641a,	// (0x00019a0a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x641a,	// (0x00019a0a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6427,	// (0x00019a17) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6427,	// (0x00019a17) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x2951,	// (0x00015f41) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x2951,	// (0x00015f41) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x296c,	// (0x00015f5c) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x296c,	// (0x00015f5c) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6434,	// (0x00019a24) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6434,	// (0x00019a24) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x644f,	// (0x00019a3f) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x644f,	// (0x00019a3f) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x646a,	// (0x00019a5a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x646a,	// (0x00019a5a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba5,	// (0x00023195) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba5,	// (0x00023195) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xbd2d,	// (0x0001f31d) cell_vkb_candidate_pane_cp1_ParamLimits

0xbd2d,	// (0x0001f31d) cell_vkb_candidate_pane_cp1

0x2722,	// (0x00015d12) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x2722,	// (0x00015d12) fep_vkb_candidate_drop_down_list_pane_g1

0x2cae,	// (0x0001629e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x2cae,	// (0x0001629e) fep_vkb_candidate_drop_down_list_pane_g2

0x2cbb,	// (0x000162ab) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x2cbb,	// (0x000162ab) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb9e,	// (0x0002318e) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb9e,	// (0x0002318e) fep_vkb_candidate_drop_down_list_pane_g

0x2cc8,	// (0x000162b8) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x2cc8,	// (0x000162b8) fep_vkb_candidate_drop_down_list_scroll_pane

0x2cd5,	// (0x000162c5) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2cd5,	// (0x000162c5) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x2ce2,	// (0x000162d2) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2ce2,	// (0x000162d2) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x2cee,	// (0x000162de) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2cee,	// (0x000162de) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x2a2b,	// (0x0001601b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x2a2b,	// (0x0001601b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x2a4c,	// (0x0001603c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x2a4c,	// (0x0001603c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x2cfa,	// (0x000162ea) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2cfa,	// (0x000162ea) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x2d1b,	// (0x0001630b) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2d1b,	// (0x0001630b) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x2d3c,	// (0x0001632c) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2d3c,	// (0x0001632c) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb6,	// (0x000231a6) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb6,	// (0x000231a6) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa1da,	// (0x0001d7ca) title_pane_g1_ParamLimits

0xa1f1,	// (0x0001d7e1) title_pane_g2_ParamLimits

0xf56a,	// (0x00022b5a) title_pane_g_ParamLimits

0xe060,	// (0x00021650) aid_call2_pane

0xe068,	// (0x00021658) aid_call_pane

0xe070,	// (0x00021660) popup_clock_analogue_window_g1

0xe070,	// (0x00021660) popup_clock_analogue_window_g2

0x52e7,	// (0x000188d7) popup_clock_analogue_window_g3

0x52f0,	// (0x000188e0) popup_clock_analogue_window_g4

0xd30d,	// (0x000208fd) popup_clock_analogue_window_g5

0x0004,

0xf714,	// (0x00022d04) popup_clock_analogue_window_g

0x52f8,	// (0x000188e8) popup_clock_analogue_window_t1

0x5306,	// (0x000188f6) clock_digital_number_pane_ParamLimits

0x5306,	// (0x000188f6) clock_digital_number_pane

0x5312,	// (0x00018902) clock_digital_number_pane_cp02_ParamLimits

0x5312,	// (0x00018902) clock_digital_number_pane_cp02

0x531e,	// (0x0001890e) clock_digital_number_pane_cp03_ParamLimits

0x531e,	// (0x0001890e) clock_digital_number_pane_cp03

0x532a,	// (0x0001891a) clock_digital_number_pane_cp04_ParamLimits

0x532a,	// (0x0001891a) clock_digital_number_pane_cp04

0x5336,	// (0x00018926) clock_digital_separator_pane_ParamLimits

0x5336,	// (0x00018926) clock_digital_separator_pane

0x5342,	// (0x00018932) popup_clock_digital_window_t1_ParamLimits

0x5342,	// (0x00018932) popup_clock_digital_window_t1

0xd30d,	// (0x000208fd) clock_digital_number_pane_g1

0xd30d,	// (0x000208fd) clock_digital_number_pane_g2

0x0001,

0xf71f,	// (0x00022d0f) clock_digital_number_pane_g

0xd30d,	// (0x000208fd) clock_digital_separator_pane_g1

0xd30d,	// (0x000208fd) clock_digital_separator_pane_g2

0x0001,

0xf71f,	// (0x00022d0f) clock_digital_separator_pane_g

0xafbd,	// (0x0001e5ad) aid_fill_nsta_ParamLimits

0xb0d4,	// (0x0001e6c4) indicator_nsta_pane_ParamLimits

0xe912,	// (0x00021f02) popup_clock_analogue_window

0xe912,	// (0x00021f02) popup_clock_digital_window

0xdcfe,	// (0x000212ee) grid_indicator_nsta_pane_ParamLimits

0x2161,	// (0x00015751) clock_nsta_pane_t2

0x0001,

0xfa88,	// (0x00023078) clock_nsta_pane_t

0x52ab,	// (0x0001889b) aid_size_max_handle

0xa6b7,	// (0x0001dca7) aid_size_min_handle

0xe4fd,	// (0x00021aed) editor_scroll_pane

0x2d57,	// (0x00016347) ex_editor_pane

0xdaf6,	// (0x000210e6) scroll_pane_cp13

0xd943,	// (0x00020f33) scroll_pane_cp14

0xe09a,	// (0x0002168a) scroll_pane_cp36

0xa75f,	// (0x0001dd4f) list_single_graphic_hl_pane_cp2_ParamLimits

0xa75f,	// (0x0001dd4f) list_single_graphic_hl_pane_cp2

0xb8fc,	// (0x0001eeec) list_single_graphic_hl_pane_ParamLimits

0xb8fc,	// (0x0001eeec) list_single_graphic_hl_pane

0x4cc7,	// (0x000182b7) aid_size_min_hl_cp1

0x2d68,	// (0x00016358) list_highlight_pane_cp34_ParamLimits

0x2d68,	// (0x00016358) list_highlight_pane_cp34

0x2d79,	// (0x00016369) list_single_graphic_hl_pane_g1_ParamLimits

0x2d79,	// (0x00016369) list_single_graphic_hl_pane_g1

0x9e69,	// (0x0001d459) list_single_graphic_hl_pane_g2_ParamLimits

0x9e69,	// (0x0001d459) list_single_graphic_hl_pane_g2

0x9e69,	// (0x0001d459) list_single_graphic_hl_pane_g3_ParamLimits

0x9e69,	// (0x0001d459) list_single_graphic_hl_pane_g3

0x9e75,	// (0x0001d465) list_single_graphic_hl_pane_g4_ParamLimits

0x9e75,	// (0x0001d465) list_single_graphic_hl_pane_g4

0x9e81,	// (0x0001d471) list_single_graphic_hl_pane_g5_ParamLimits

0x9e81,	// (0x0001d471) list_single_graphic_hl_pane_g5

0x0004,

0xfbc7,	// (0x000231b7) list_single_graphic_hl_pane_g_ParamLimits

0xfbc7,	// (0x000231b7) list_single_graphic_hl_pane_g

0x9e95,	// (0x0001d485) list_single_graphic_hl_pane_t1_ParamLimits

0x9e95,	// (0x0001d485) list_single_graphic_hl_pane_t1

0x2d86,	// (0x00016376) aid_size_min_hl_cp2

0x2d8f,	// (0x0001637f) list_highlight_pane_cp34_cp2_ParamLimits

0x2d8f,	// (0x0001637f) list_highlight_pane_cp34_cp2

0x2d79,	// (0x00016369) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x2d79,	// (0x00016369) list_single_graphic_hl_pane_g1_cp2

0x2d9c,	// (0x0001638c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x2d9c,	// (0x0001638c) list_single_graphic_hl_pane_g2_cp2

0x2da8,	// (0x00016398) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x2da8,	// (0x00016398) list_single_graphic_hl_pane_g3_cp2

0xe372,	// (0x00021962) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xe372,	// (0x00021962) list_single_graphic_hl_pane_g4_cp2

0x2995,	// (0x00015f85) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x2995,	// (0x00015f85) list_single_graphic_hl_pane_g5_cp2

0xa8db,	// (0x0001decb) control_pane_g4_ParamLimits

0xa8db,	// (0x0001decb) control_pane_g4

0xdea5,	// (0x00021495) bg_popup_sub_pane_cp10_ParamLimits

0x24f0,	// (0x00015ae0) list_choice_list_pane_ParamLimits

0x24ff,	// (0x00015aef) scroll_pane_cp23

0xd552,	// (0x00020b42) bg_popup_preview_window_pane_cp02_ParamLimits

0x29d1,	// (0x00015fc1) list_preview_fixed_pane_ParamLimits

0x29e7,	// (0x00015fd7) list_preview_fixed_pane_cp_ParamLimits

0x29e7,	// (0x00015fd7) list_preview_fixed_pane_cp

0x29f3,	// (0x00015fe3) popup_preview_fixed_window_g1_ParamLimits

0x29f3,	// (0x00015fe3) popup_preview_fixed_window_g1

0x29ff,	// (0x00015fef) popup_preview_fixed_window_g2_ParamLimits

0x29ff,	// (0x00015fef) popup_preview_fixed_window_g2

0x0002,

0xfb56,	// (0x00023146) popup_preview_fixed_window_g_ParamLimits

0xfb56,	// (0x00023146) popup_preview_fixed_window_g

0x523b,	// (0x0001882b) aid_navi_side_left_pane_ParamLimits

0x524b,	// (0x0001883b) aid_navi_side_right_pane_ParamLimits

0x525a,	// (0x0001884a) navi_icon_pane_stacon_ParamLimits

0x526a,	// (0x0001885a) navi_navi_pane_stacon_ParamLimits

0x525a,	// (0x0001884a) navi_text_pane_stacon_ParamLimits

0xd303,	// (0x000208f3) main_text_info_pane

0x2dca,	// (0x000163ba) listscroll_text_info_pane

0x2dd2,	// (0x000163c2) list_text_info_pane_ParamLimits

0x2dd2,	// (0x000163c2) list_text_info_pane

0x2de1,	// (0x000163d1) scroll_pane_cp24_ParamLimits

0x2de1,	// (0x000163d1) scroll_pane_cp24

0xbd4d,	// (0x0001f33d) list_text_info_pane_t1_ParamLimits

0xbd4d,	// (0x0001f33d) list_text_info_pane_t1

0xaa46,	// (0x0001e036) popup_fast_swap2_window_ParamLimits

0xaa46,	// (0x0001e036) popup_fast_swap2_window

0x2dff,	// (0x000163ef) aid_size_cell_fast2

0xd303,	// (0x000208f3) bg_popup_window_pane_cp17

0xedac,	// (0x0002239c) heading_pane_cp2

0xd742,	// (0x00020d32) listscroll_fast2_pane

0x2e09,	// (0x000163f9) grid_fast2_pane

0x2e11,	// (0x00016401) listscroll_fast2_pane_g1

0x2e19,	// (0x00016409) listscroll_fast2_pane_g2

0x0001,

0xfbd2,	// (0x000231c2) listscroll_fast2_pane_g

0xdaf6,	// (0x000210e6) scroll_pane_cp26

0x2e21,	// (0x00016411) cell_fast2_pane_ParamLimits

0x2e21,	// (0x00016411) cell_fast2_pane

0x2e37,	// (0x00016427) cell_fast2_pane_g1

0x2e40,	// (0x00016430) cell_fast2_pane_g2

0x2e49,	// (0x00016439) cell_fast2_pane_g3

0x0002,

0xfbd7,	// (0x000231c7) cell_fast2_pane_g

0xd7a4,	// (0x00020d94) grid_highlight_pane_cp9

0xd7b9,	// (0x00020da9) main_eswt_pane_ParamLimits

0xd7b9,	// (0x00020da9) main_eswt_pane

0x2df6,	// (0x000163e6) list_single_text_info_pane

0x2e51,	// (0x00016441) eswt_ctrl_button_pane

0x2e51,	// (0x00016441) eswt_ctrl_canvas_pane

0x2e59,	// (0x00016449) eswt_ctrl_combo_pane

0x2e51,	// (0x00016441) eswt_ctrl_default_pane

0x2e51,	// (0x00016441) eswt_ctrl_label_pane

0x2e61,	// (0x00016451) eswt_ctrl_wait_pane

0x2e69,	// (0x00016459) eswt_shell_pane

0xd303,	// (0x000208f3) listscroll_eswt_app_pane

0x2e85,	// (0x00016475) popup_eswt_tasktip_window_ParamLimits

0x2e85,	// (0x00016475) popup_eswt_tasktip_window

0xeb0d,	// (0x000220fd) bg_popup_window_pane_cp18

0x2e96,	// (0x00016486) eswt_control_pane_g1_ParamLimits

0x2e96,	// (0x00016486) eswt_control_pane_g1

0x2ea3,	// (0x00016493) eswt_control_pane_g2_ParamLimits

0x2ea3,	// (0x00016493) eswt_control_pane_g2

0x2eb0,	// (0x000164a0) eswt_control_pane_g3_ParamLimits

0x2eb0,	// (0x000164a0) eswt_control_pane_g3

0x2ebd,	// (0x000164ad) eswt_control_pane_g4_ParamLimits

0x2ebd,	// (0x000164ad) eswt_control_pane_g4

0x0003,

0xfbde,	// (0x000231ce) eswt_control_pane_g_ParamLimits

0xfbde,	// (0x000231ce) eswt_control_pane_g

0xd993,	// (0x00020f83) bg_button_pane_ParamLimits

0xd993,	// (0x00020f83) bg_button_pane

0xd7b9,	// (0x00020da9) common_borders_pane_copy2_ParamLimits

0xd7b9,	// (0x00020da9) common_borders_pane_copy2

0x2eca,	// (0x000164ba) control_button_pane_g1_ParamLimits

0x2eca,	// (0x000164ba) control_button_pane_g1

0x2ed6,	// (0x000164c6) control_button_pane_g2_ParamLimits

0x2ed6,	// (0x000164c6) control_button_pane_g2

0x2ee2,	// (0x000164d2) control_button_pane_g3_ParamLimits

0x2ee2,	// (0x000164d2) control_button_pane_g3

0x0002,

0xfbe7,	// (0x000231d7) control_button_pane_g_ParamLimits

0xfbe7,	// (0x000231d7) control_button_pane_g

0x2ef6,	// (0x000164e6) control_button_pane_t1

0x2f04,	// (0x000164f4) control_button_pane_t2

0x0001,

0xfbee,	// (0x000231de) control_button_pane_t

0xea13,	// (0x00022003) bg_button_pane_g1

0xea1b,	// (0x0002200b) bg_button_pane_g2

0xea23,	// (0x00022013) bg_button_pane_g3

0xea2b,	// (0x0002201b) bg_button_pane_g4

0xea33,	// (0x00022023) bg_button_pane_g5

0xea3b,	// (0x0002202b) bg_button_pane_g6

0xea43,	// (0x00022033) bg_button_pane_g7

0xea4b,	// (0x0002203b) bg_button_pane_g8

0xea53,	// (0x00022043) bg_button_pane_g9

0x0008,

0xf864,	// (0x00022e54) bg_button_pane_g

0x24ab,	// (0x00015a9b) common_borders_pane_ParamLimits

0x24ab,	// (0x00015a9b) common_borders_pane

0x2e96,	// (0x00016486) eswt_control_pane_g1_copy1_ParamLimits

0x2e96,	// (0x00016486) eswt_control_pane_g1_copy1

0x2ea3,	// (0x00016493) eswt_control_pane_g2_copy1_ParamLimits

0x2ea3,	// (0x00016493) eswt_control_pane_g2_copy1

0x2eb0,	// (0x000164a0) eswt_control_pane_g3_copy1_ParamLimits

0x2eb0,	// (0x000164a0) eswt_control_pane_g3_copy1

0x2ebd,	// (0x000164ad) eswt_control_pane_g4_copy1_ParamLimits

0x2ebd,	// (0x000164ad) eswt_control_pane_g4_copy1

0x24e6,	// (0x00015ad6) bg_eswt_ctrl_canvas_pane_g1

0x24ab,	// (0x00015a9b) common_borders_pane_cp2_ParamLimits

0x24ab,	// (0x00015a9b) common_borders_pane_cp2

0x24ab,	// (0x00015a9b) common_borders_pane_cp3_ParamLimits

0x24ab,	// (0x00015a9b) common_borders_pane_cp3

0x2f12,	// (0x00016502) separator_horizontal_pane

0xdeff,	// (0x000214ef) separator_vertical_pane

0x2e96,	// (0x00016486) eswt_control_pane_g1_copy2_ParamLimits

0x2e96,	// (0x00016486) eswt_control_pane_g1_copy2

0x2ea3,	// (0x00016493) eswt_control_pane_g2_copy2_ParamLimits

0x2ea3,	// (0x00016493) eswt_control_pane_g2_copy2

0x2eb0,	// (0x000164a0) eswt_control_pane_g3_copy2_ParamLimits

0x2eb0,	// (0x000164a0) eswt_control_pane_g3_copy2

0x2ebd,	// (0x000164ad) eswt_control_pane_g4_copy2_ParamLimits

0x2ebd,	// (0x000164ad) eswt_control_pane_g4_copy2

0xd303,	// (0x000208f3) common_borders_pane_cp4

0x2f1a,	// (0x0001650a) separator_horizontal_pane_g1

0x2f23,	// (0x00016513) separator_horizontal_pane_g2

0x2f2c,	// (0x0001651c) separator_horizontal_pane_g3

0x0002,

0xfbf3,	// (0x000231e3) separator_horizontal_pane_g

0x2e96,	// (0x00016486) eswt_control_pane_g1_copy3_ParamLimits

0x2e96,	// (0x00016486) eswt_control_pane_g1_copy3

0x2ea3,	// (0x00016493) eswt_control_pane_g2_copy3_ParamLimits

0x2ea3,	// (0x00016493) eswt_control_pane_g2_copy3

0x2eb0,	// (0x000164a0) eswt_control_pane_g3_copy3_ParamLimits

0x2eb0,	// (0x000164a0) eswt_control_pane_g3_copy3

0x2ebd,	// (0x000164ad) eswt_control_pane_g4_copy3_ParamLimits

0x2ebd,	// (0x000164ad) eswt_control_pane_g4_copy3

0xd303,	// (0x000208f3) common_borders_pane_cp5

0x2f35,	// (0x00016525) separator_vertical_pane_g1

0x2f3e,	// (0x0001652e) separator_vertical_pane_g2

0x2f47,	// (0x00016537) separator_vertical_pane_g3

0x0002,

0xfbfa,	// (0x000231ea) separator_vertical_pane_g

0x2e96,	// (0x00016486) eswt_control_pane_g1_copy4_ParamLimits

0x2e96,	// (0x00016486) eswt_control_pane_g1_copy4

0x2ea3,	// (0x00016493) eswt_control_pane_g2_copy4_ParamLimits

0x2ea3,	// (0x00016493) eswt_control_pane_g2_copy4

0x2eb0,	// (0x000164a0) eswt_control_pane_g3_copy4_ParamLimits

0x2eb0,	// (0x000164a0) eswt_control_pane_g3_copy4

0x2ebd,	// (0x000164ad) eswt_control_pane_g4_copy4_ParamLimits

0x2ebd,	// (0x000164ad) eswt_control_pane_g4_copy4

0xbd68,	// (0x0001f358) eswt_ctrl_combo_button_pane

0xbd70,	// (0x0001f360) eswt_ctrl_input_pane

0xbd78,	// (0x0001f368) popup_choice_list_window_cp70

0xbd80,	// (0x0001f370) eswt_ctrl_input_pane_t1

0xd303,	// (0x000208f3) input_focus_pane_cp70

0x24ab,	// (0x00015a9b) bg_button_pane_cp70_ParamLimits

0x24ab,	// (0x00015a9b) bg_button_pane_cp70

0xbd8e,	// (0x0001f37e) eswt_ctrl_combo_button_pane_g1

0x2f50,	// (0x00016540) wait_bar_pane_cp70

0xeb0d,	// (0x000220fd) bg_popup_window_pane_cp70_ParamLimits

0xeb0d,	// (0x000220fd) bg_popup_window_pane_cp70

0x2f58,	// (0x00016548) popup_eswt_tasktip_window_t1

0x2f6e,	// (0x0001655e) wait_bar_pane_cp71_ParamLimits

0x2f6e,	// (0x0001655e) wait_bar_pane_cp71

0x2f7a,	// (0x0001656a) grid_eswt_app_pane

0xdf08,	// (0x000214f8) scroll_pane_cp70

0xbd96,	// (0x0001f386) cell_eswt_app_pane_ParamLimits

0xbd96,	// (0x0001f386) cell_eswt_app_pane

0xbdbe,	// (0x0001f3ae) cell_eswt_app_pane_g1_ParamLimits

0xbdbe,	// (0x0001f3ae) cell_eswt_app_pane_g1

0xbded,	// (0x0001f3dd) cell_eswt_app_pane_g2_ParamLimits

0xbded,	// (0x0001f3dd) cell_eswt_app_pane_g2

0x0001,

0xfc01,	// (0x000231f1) cell_eswt_app_pane_g_ParamLimits

0xfc01,	// (0x000231f1) cell_eswt_app_pane_g

0xbe16,	// (0x0001f406) cell_eswt_app_pane_t1_ParamLimits

0xbe16,	// (0x0001f406) cell_eswt_app_pane_t1

0x2f83,	// (0x00016573) grid_highlight_pane_cp70_ParamLimits

0x2f83,	// (0x00016573) grid_highlight_pane_cp70

0xd9ad,	// (0x00020f9d) set_content_pane_g1

0xe6ec,	// (0x00021cdc) status_small_volume_pane

0x65a5,	// (0x00019b95) status_small_volume_pane_g1

0x65ad,	// (0x00019b9d) volume_small2_pane

0x65b6,	// (0x00019ba6) volume_small2_pane_g1

0x65bf,	// (0x00019baf) volume_small2_pane_g2

0x65c8,	// (0x00019bb8) volume_small2_pane_g3

0x65d1,	// (0x00019bc1) volume_small2_pane_g4

0x65da,	// (0x00019bca) volume_small2_pane_g5

0x65e3,	// (0x00019bd3) volume_small2_pane_g6

0x65ec,	// (0x00019bdc) volume_small2_pane_g7

0x65f5,	// (0x00019be5) volume_small2_pane_g8

0x65fe,	// (0x00019bee) volume_small2_pane_g9

0x6607,	// (0x00019bf7) volume_small2_pane_g10

0x0009,

0xfc06,	// (0x000231f6) volume_small2_pane_g

0x2829,	// (0x00015e19) fep_vkb_top_text_pane_g1_ParamLimits

0xbcd5,	// (0x0001f2c5) fep_vkb_top_text_pane_t1_ParamLimits

0x2a0b,	// (0x00015ffb) popup_preview_fixed_window_g3_ParamLimits

0x2a0b,	// (0x00015ffb) popup_preview_fixed_window_g3

0xaf66,	// (0x0001e556) popup_toolbar_trans_pane

0xb789,	// (0x0001ed79) aid_height_set_list_ParamLimits

0x171a,	// (0x00014d0a) aid_size_parent_ParamLimits

0xdea5,	// (0x00021495) list_highlight_pane_cp2_ParamLimits

0xd9ad,	// (0x00020f9d) set_content_pane_g1_ParamLimits

0xb90f,	// (0x0001eeff) list_single_image_pane_ParamLimits

0xb90f,	// (0x0001eeff) list_single_image_pane

0xbe48,	// (0x0001f438) aid_size_cell_image_ParamLimits

0xbe48,	// (0x0001f438) aid_size_cell_image

0xbe55,	// (0x0001f445) grid_single_image_pane_ParamLimits

0xbe55,	// (0x0001f445) grid_single_image_pane

0xd9ad,	// (0x00020f9d) list_single_image_pane_g1_ParamLimits

0xd9ad,	// (0x00020f9d) list_single_image_pane_g1

0xd9b9,	// (0x00020fa9) list_single_image_pane_g2_ParamLimits

0xd9b9,	// (0x00020fa9) list_single_image_pane_g2

0x0001,

0xfc1b,	// (0x0002320b) list_single_image_pane_g_ParamLimits

0xfc1b,	// (0x0002320b) list_single_image_pane_g

0x1bef,	// (0x000151df) list_single_image_pane_t1_ParamLimits

0x1bef,	// (0x000151df) list_single_image_pane_t1

0xbe61,	// (0x0001f451) cell_image_list_pane_ParamLimits

0xbe61,	// (0x0001f451) cell_image_list_pane

0xbe75,	// (0x0001f465) cell_image_list_pane_g1

0xbe7e,	// (0x0001f46e) cell_image_list_pane_g2

0x0001,

0xfc20,	// (0x00023210) cell_image_list_pane_g

0x2f8f,	// (0x0001657f) aid_size_cell_tb_trans_pane

0xd993,	// (0x00020f83) bg_tb_trans_pane

0x2fa1,	// (0x00016591) grid_tb_trans_pane

0xea13,	// (0x00022003) bg_tb_trans_pane_g1

0xea1b,	// (0x0002200b) bg_tb_trans_pane_g2

0xea23,	// (0x00022013) bg_tb_trans_pane_g3

0xea2b,	// (0x0002201b) bg_tb_trans_pane_g4

0xea33,	// (0x00022023) bg_tb_trans_pane_g5

0xea4b,	// (0x0002203b) bg_tb_trans_pane_g6

0xea53,	// (0x00022043) bg_tb_trans_pane_g7

0xea3b,	// (0x0002202b) bg_tb_trans_pane_g8

0xea43,	// (0x00022033) bg_tb_trans_pane_g9

0x0008,

0xfc25,	// (0x00023215) bg_tb_trans_pane_g

0x2fb5,	// (0x000165a5) cell_toolbar_trans_pane_ParamLimits

0x2fb5,	// (0x000165a5) cell_toolbar_trans_pane

0x24e6,	// (0x00015ad6) cell_toolbar_trans_pane_g1

0xbb4a,	// (0x0001f13a) list_form2_midp_pane_t1

0xbb58,	// (0x0001f148) list_form2_midp_pane_t2

0x0001,

0xface,	// (0x000230be) list_form2_midp_pane_t

0x222f,	// (0x0001581f) scroll_pane_cp51_ParamLimits

0x23b8,	// (0x000159a8) form2_midp_wait_pane_g1

0x23c1,	// (0x000159b1) form2_midp_wait_pane_g2

0x23ca,	// (0x000159ba) form2_midp_wait_pane_g3

0x0002,

0xfae3,	// (0x000230d3) form2_midp_wait_pane_g

0xd3f3,	// (0x000209e3) list_highlight_pane_cp21_ParamLimits

0x23ea,	// (0x000159da) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x23f9,	// (0x000159e9) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x4848,	// (0x00017e38) list_single_2graphic_im_pane_ParamLimits

0x4848,	// (0x00017e38) list_single_2graphic_im_pane

0xbe87,	// (0x0001f477) list_single_2graphic_im_pane_g1_ParamLimits

0xbe87,	// (0x0001f477) list_single_2graphic_im_pane_g1

0xbe98,	// (0x0001f488) list_single_2graphic_im_pane_g2_ParamLimits

0xbe98,	// (0x0001f488) list_single_2graphic_im_pane_g2

0xbea4,	// (0x0001f494) list_single_2graphic_im_pane_g3_ParamLimits

0xbea4,	// (0x0001f494) list_single_2graphic_im_pane_g3

0x0003,

0xfc38,	// (0x00023228) list_single_2graphic_im_pane_g_ParamLimits

0xfc38,	// (0x00023228) list_single_2graphic_im_pane_g

0xbeb8,	// (0x0001f4a8) list_single_2graphic_im_pane_t1_ParamLimits

0xbeb8,	// (0x0001f4a8) list_single_2graphic_im_pane_t1

0x2a17,	// (0x00016007) list_single_graphic_2heading_pane_fp_ParamLimits

0x2a17,	// (0x00016007) list_single_graphic_2heading_pane_fp

0x4b39,	// (0x00018129) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4b39,	// (0x00018129) list_single_graphic_2heading_pane_fp_g1

0x2a95,	// (0x00016085) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x2a95,	// (0x00016085) list_single_graphic_2heading_pane_fp_g2

0x4368,	// (0x00017958) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4368,	// (0x00017958) list_single_graphic_2heading_pane_fp_g3

0x4b0e,	// (0x000180fe) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4b0e,	// (0x000180fe) list_single_graphic_2heading_pane_fp_g4

0x2ab5,	// (0x000160a5) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x2ab5,	// (0x000160a5) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb66,	// (0x00023156) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb66,	// (0x00023156) list_single_graphic_2heading_pane_fp_g

0x4d06,	// (0x000182f6) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4d06,	// (0x000182f6) list_single_graphic_2heading_pane_fp_t1

0x4b71,	// (0x00018161) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4b71,	// (0x00018161) list_single_graphic_2heading_pane_fp_t2

0x4d1c,	// (0x0001830c) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4d1c,	// (0x0001830c) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc41,	// (0x00023231) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc41,	// (0x00023231) list_single_graphic_2heading_pane_fp_t

0x257f,	// (0x00015b6f) fep_hwr_write_pane_g5_ParamLimits

0x257f,	// (0x00015b6f) fep_hwr_write_pane_g5

0x258b,	// (0x00015b7b) fep_hwr_write_pane_g6_ParamLimits

0x258b,	// (0x00015b7b) fep_hwr_write_pane_g6

0x2e69,	// (0x00016459) eswt_shell_pane_ParamLimits

0xeb0d,	// (0x000220fd) bg_popup_window_pane_cp18_ParamLimits

0x16be,	// (0x00014cae) heading_pane_cp70

0x2f58,	// (0x00016548) popup_eswt_tasktip_window_t1_ParamLimits

0xb001,	// (0x0001e5f1) aid_touch_tab_arrow_left

0xb015,	// (0x0001e605) aid_touch_tab_arrow_right

0xa210,	// (0x0001d800) title_pane_g3_ParamLimits

0xa210,	// (0x0001d800) title_pane_g3

0xd963,	// (0x00020f53) set_value_pane_g1

0xaf66,	// (0x0001e556) popup_toolbar_trans_pane_ParamLimits

0x2f8f,	// (0x0001657f) aid_size_cell_tb_trans_pane_ParamLimits

0xd993,	// (0x00020f83) bg_tb_trans_pane_ParamLimits

0x2fa1,	// (0x00016591) grid_tb_trans_pane_ParamLimits

0xd552,	// (0x00020b42) cont_note_pane_ParamLimits

0xd552,	// (0x00020b42) cont_note_pane

0xd7b9,	// (0x00020da9) cont_snote2_single_text_pane_ParamLimits

0xd7b9,	// (0x00020da9) cont_snote2_single_text_pane

0xd7b9,	// (0x00020da9) cont_snote2_single_graphic_pane_ParamLimits

0xd7b9,	// (0x00020da9) cont_snote2_single_graphic_pane

0xefb6,	// (0x000225a6) cont_note_wait_pane_ParamLimits

0xefb6,	// (0x000225a6) cont_note_wait_pane

0xefb6,	// (0x000225a6) cont_note_image_pane_ParamLimits

0xefb6,	// (0x000225a6) cont_note_image_pane

0x3013,	// (0x00016603) popup_note2_window_g1_ParamLimits

0x3013,	// (0x00016603) popup_note2_window_g1

0x3044,	// (0x00016634) popup_note2_window_t1_ParamLimits

0x3044,	// (0x00016634) popup_note2_window_t1

0x3089,	// (0x00016679) popup_note2_window_t2_ParamLimits

0x3089,	// (0x00016679) popup_note2_window_t2

0x30ce,	// (0x000166be) popup_note2_window_t3_ParamLimits

0x30ce,	// (0x000166be) popup_note2_window_t3

0x3113,	// (0x00016703) popup_note2_window_t4_ParamLimits

0x3113,	// (0x00016703) popup_note2_window_t4

0xd5d6,	// (0x00020bc6) popup_note2_window_t5_ParamLimits

0xd5d6,	// (0x00020bc6) popup_note2_window_t5

0x0004,

0xfc4d,	// (0x0002323d) popup_note2_window_t_ParamLimits

0xfc4d,	// (0x0002323d) popup_note2_window_t

0x3142,	// (0x00016732) popup_note2_image_window_g1_ParamLimits

0x3142,	// (0x00016732) popup_note2_image_window_g1

0x314e,	// (0x0001673e) popup_note2_image_window_g2_ParamLimits

0x314e,	// (0x0001673e) popup_note2_image_window_g2

0x0001,

0xfc58,	// (0x00023248) popup_note2_image_window_g_ParamLimits

0xfc58,	// (0x00023248) popup_note2_image_window_g

0x3160,	// (0x00016750) popup_note2_image_window_t1_ParamLimits

0x3160,	// (0x00016750) popup_note2_image_window_t1

0x3178,	// (0x00016768) popup_note2_image_window_t2_ParamLimits

0x3178,	// (0x00016768) popup_note2_image_window_t2

0x3190,	// (0x00016780) popup_note2_image_window_t3_ParamLimits

0x3190,	// (0x00016780) popup_note2_image_window_t3

0x0002,

0xfc5d,	// (0x0002324d) popup_note2_image_window_t_ParamLimits

0xfc5d,	// (0x0002324d) popup_note2_image_window_t

0xefc4,	// (0x000225b4) popup_note2_wait_window_g1_ParamLimits

0xefc4,	// (0x000225b4) popup_note2_wait_window_g1

0xefd0,	// (0x000225c0) popup_note2_wait_window_g2_ParamLimits

0xefd0,	// (0x000225c0) popup_note2_wait_window_g2

0xefdc,	// (0x000225cc) popup_note2_wait_window_g3_ParamLimits

0xefdc,	// (0x000225cc) popup_note2_wait_window_g3

0x0002,

0xf846,	// (0x00022e36) popup_note2_wait_window_g_ParamLimits

0xf846,	// (0x00022e36) popup_note2_wait_window_g

0x31ac,	// (0x0001679c) popup_note2_wait_window_t1_ParamLimits

0x31ac,	// (0x0001679c) popup_note2_wait_window_t1

0x31ca,	// (0x000167ba) popup_note2_wait_window_t2_ParamLimits

0x31ca,	// (0x000167ba) popup_note2_wait_window_t2

0x31e8,	// (0x000167d8) popup_note2_wait_window_t3_ParamLimits

0x31e8,	// (0x000167d8) popup_note2_wait_window_t3

0x31fa,	// (0x000167ea) popup_note2_wait_window_t4_ParamLimits

0x31fa,	// (0x000167ea) popup_note2_wait_window_t4

0x0003,

0xfc64,	// (0x00023254) popup_note2_wait_window_t_ParamLimits

0xfc64,	// (0x00023254) popup_note2_wait_window_t

0x320c,	// (0x000167fc) wait_bar2_pane_ParamLimits

0x320c,	// (0x000167fc) wait_bar2_pane

0x3224,	// (0x00016814) popup_snote2_single_text_window_g1_ParamLimits

0x3224,	// (0x00016814) popup_snote2_single_text_window_g1

0x324c,	// (0x0001683c) popup_snote2_single_text_window_t1_ParamLimits

0x324c,	// (0x0001683c) popup_snote2_single_text_window_t1

0x3298,	// (0x00016888) popup_snote2_single_text_window_t2_ParamLimits

0x3298,	// (0x00016888) popup_snote2_single_text_window_t2

0x32e4,	// (0x000168d4) popup_snote2_single_text_window_t3_ParamLimits

0x32e4,	// (0x000168d4) popup_snote2_single_text_window_t3

0x3325,	// (0x00016915) popup_snote2_single_text_window_t4_ParamLimits

0x3325,	// (0x00016915) popup_snote2_single_text_window_t4

0x335b,	// (0x0001694b) popup_snote2_single_text_window_t5_ParamLimits

0x335b,	// (0x0001694b) popup_snote2_single_text_window_t5

0x0004,

0xfc6d,	// (0x0002325d) popup_snote2_single_text_window_t_ParamLimits

0xfc6d,	// (0x0002325d) popup_snote2_single_text_window_t

0x3386,	// (0x00016976) popup_snote2_single_graphic_window_g1_ParamLimits

0x3386,	// (0x00016976) popup_snote2_single_graphic_window_g1

0x33ae,	// (0x0001699e) popup_snote2_single_graphic_window_g2_ParamLimits

0x33ae,	// (0x0001699e) popup_snote2_single_graphic_window_g2

0x0001,

0xfc78,	// (0x00023268) popup_snote2_single_graphic_window_g_ParamLimits

0xfc78,	// (0x00023268) popup_snote2_single_graphic_window_g

0x33d6,	// (0x000169c6) popup_snote2_single_graphic_window_t1_ParamLimits

0x33d6,	// (0x000169c6) popup_snote2_single_graphic_window_t1

0x3422,	// (0x00016a12) popup_snote2_single_graphic_window_t2_ParamLimits

0x3422,	// (0x00016a12) popup_snote2_single_graphic_window_t2

0x32e4,	// (0x000168d4) popup_snote2_single_graphic_window_t3_ParamLimits

0x32e4,	// (0x000168d4) popup_snote2_single_graphic_window_t3

0x3325,	// (0x00016915) popup_snote2_single_graphic_window_t4_ParamLimits

0x3325,	// (0x00016915) popup_snote2_single_graphic_window_t4

0x335b,	// (0x0001694b) popup_snote2_single_graphic_window_t5_ParamLimits

0x335b,	// (0x0001694b) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7d,	// (0x0002326d) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7d,	// (0x0002326d) popup_snote2_single_graphic_window_t

0x21c8,	// (0x000157b8) clock_nsta_pane_cp2_t1

0x21c8,	// (0x000157b8) clock_nsta_pane_cp2_t2

0x0001,

0xfaa4,	// (0x00023094) clock_nsta_pane_cp2_t

0x4514,	// (0x00017b04) form_field_data_wide_pane_g1_ParamLimits

0xd9ad,	// (0x00020f9d) form_field_data_wide_pane_g2_ParamLimits

0xd9ad,	// (0x00020f9d) form_field_data_wide_pane_g2

0xd9b9,	// (0x00020fa9) form_field_data_wide_pane_g3_ParamLimits

0xd9b9,	// (0x00020fa9) form_field_data_wide_pane_g3

0x0002,

0xf697,	// (0x00022c87) form_field_data_wide_pane_g_ParamLimits

0xf697,	// (0x00022c87) form_field_data_wide_pane_g

0xba85,	// (0x0001f075) grid_touch_3_pane_ParamLimits

0xba85,	// (0x0001f075) grid_touch_3_pane

0xbee9,	// (0x0001f4d9) cell_touch_3_pane_ParamLimits

0xbee9,	// (0x0001f4d9) cell_touch_3_pane

0x24e6,	// (0x00015ad6) cell_touch_3_pane_g1

0x24e6,	// (0x00015ad6) cell_touch_3_pane_g2

0x0001,

0xfb29,	// (0x00023119) cell_touch_3_pane_g

0xd608,	// (0x00020bf8) cont_query_data_pane

0xd610,	// (0x00020c00) cont_query_data_pane_cp1

0x346e,	// (0x00016a5e) button_value_adjust_pane_cp7

0x3476,	// (0x00016a66) query_popup_pane_cp3

0xe0ab,	// (0x0002169b) bg_popup_sub_pane_cp22_ParamLimits

0x5361,	// (0x00018951) navi_navi_volume_pane_cp2

0x5379,	// (0x00018969) popup_side_volume_key_window_g2

0x5385,	// (0x00018975) popup_side_volume_key_window_g3

0x0002,

0xf729,	// (0x00022d19) popup_side_volume_key_window_g

0x539f,	// (0x0001898f) popup_side_volume_key_window_t2

0x0001,

0xf730,	// (0x00022d20) popup_side_volume_key_window_t

0xe2f5,	// (0x000218e5) popup_side_volume_key_window_ParamLimits

0x9942,	// (0x0001cf32) list_double_graphic_pane_g4_ParamLimits

0x9942,	// (0x0001cf32) list_double_graphic_pane_g4

0xb8e7,	// (0x0001eed7) list_single_2heading_msg_pane_ParamLimits

0xb8e7,	// (0x0001eed7) list_single_2heading_msg_pane

0x9eab,	// (0x0001d49b) list_single_2heading_msg_pane_g1_ParamLimits

0x9eab,	// (0x0001d49b) list_single_2heading_msg_pane_g1

0x9eb7,	// (0x0001d4a7) list_single_2heading_msg_pane_g2_ParamLimits

0x9eb7,	// (0x0001d4a7) list_single_2heading_msg_pane_g2

0x9eca,	// (0x0001d4ba) list_single_2heading_msg_pane_g3_ParamLimits

0x9eca,	// (0x0001d4ba) list_single_2heading_msg_pane_g3

0x9ed6,	// (0x0001d4c6) list_single_2heading_msg_pane_g4_ParamLimits

0x9ed6,	// (0x0001d4c6) list_single_2heading_msg_pane_g4

0x0003,

0xfc88,	// (0x00023278) list_single_2heading_msg_pane_g_ParamLimits

0xfc88,	// (0x00023278) list_single_2heading_msg_pane_g

0x9eee,	// (0x0001d4de) list_single_2heading_msg_pane_t1_ParamLimits

0x9eee,	// (0x0001d4de) list_single_2heading_msg_pane_t1

0x9f16,	// (0x0001d506) list_single_2heading_msg_pane_t2_ParamLimits

0x9f16,	// (0x0001d506) list_single_2heading_msg_pane_t2

0x9f81,	// (0x0001d571) list_single_2heading_msg_pane_t3_ParamLimits

0x9f81,	// (0x0001d571) list_single_2heading_msg_pane_t3

0x4dff,	// (0x000183ef) list_single_2heading_msg_pane_t4_ParamLimits

0x4dff,	// (0x000183ef) list_single_2heading_msg_pane_t4

0x0003,

0xfc91,	// (0x00023281) list_single_2heading_msg_pane_t_ParamLimits

0xfc91,	// (0x00023281) list_single_2heading_msg_pane_t

0xd399,	// (0x00020989) title_pane_g4_ParamLimits

0xd399,	// (0x00020989) title_pane_g4

0x51b1,	// (0x000187a1) title_pane_stacon_g3_ParamLimits

0x51b1,	// (0x000187a1) title_pane_stacon_g3

0x2fdb,	// (0x000165cb) list_single_2graphic_im_pane_g4_ParamLimits

0x2fdb,	// (0x000165cb) list_single_2graphic_im_pane_g4

0x14d4,	// (0x00014ac4) popup_side_volume_key_window_cp

0x1954,	// (0x00014f44) main_idle_act2_pane_t1

0x56fd,	// (0x00018ced) toolbar_button_pane_g10

0xa5a0,	// (0x0001db90) popup_toolbar_window_cp1

0x21b9,	// (0x000157a9) clock_nsta_pane_cp_t1

0x21b9,	// (0x000157a9) clock_nsta_pane_cp_t2

0x0001,

0xfa9f,	// (0x0002308f) clock_nsta_pane_cp_t

0x5361,	// (0x00018951) navi_navi_volume_pane_cp2_ParamLimits

0x536d,	// (0x0001895d) popup_side_volume_key_window_g1_ParamLimits

0x5379,	// (0x00018969) popup_side_volume_key_window_g2_ParamLimits

0x5385,	// (0x00018975) popup_side_volume_key_window_g3_ParamLimits

0xf729,	// (0x00022d19) popup_side_volume_key_window_g_ParamLimits

0x60c5,	// (0x000196b5) fep_hwr_aid_pane

0x2a6d,	// (0x0001605d) bg_fep_hwr_top_pane_g4_ParamLimits

0x2561,	// (0x00015b51) fep_hwr_top_pane_g1_ParamLimits

0x254f,	// (0x00015b3f) fep_hwr_top_pane_g2_ParamLimits

0x6178,	// (0x00019768) fep_hwr_top_pane_g3_ParamLimits

0xfaf4,	// (0x000230e4) fep_hwr_top_pane_g_ParamLimits

0x618d,	// (0x0001977d) fep_hwr_top_text_pane_ParamLimits

0x12dd,	// (0x000148cd) aid_touch_tab_arrow_arrow_2

0x12d4,	// (0x000148c4) aid_touch_tab_arrow_left_2

0x60d9,	// (0x000196c9) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x610c,	// (0x000196fc) fep_hwr_prediction_pane

0x2694,	// (0x00015c84) fep_vkb_prediction_pane

0xbcb5,	// (0x0001f2a5) fep_vkb_side_pane_g3_ParamLimits

0xbcb5,	// (0x0001f2a5) fep_vkb_side_pane_g3

0x2722,	// (0x00015d12) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x2cae,	// (0x0001629e) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x2cbb,	// (0x000162ab) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9e,	// (0x0002318e) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x34cc,	// (0x00016abc) fep_hwr_prediction_pane_g1

0x66f1,	// (0x00019ce1) fep_hwr_prediction_pane_g2

0x66f9,	// (0x00019ce9) fep_hwr_prediction_pane_g3

0x6701,	// (0x00019cf1) fep_hwr_prediction_pane_g4

0x0003,

0xfc9a,	// (0x0002328a) fep_hwr_prediction_pane_g

0x34cc,	// (0x00016abc) fep_vkb_prediction_pane_g1

0x34d6,	// (0x00016ac6) fep_vkb_prediction_pane_g2

0x34de,	// (0x00016ace) fep_vkb_prediction_pane_g3

0x34e6,	// (0x00016ad6) fep_vkb_prediction_pane_g4

0x0003,

0xfca3,	// (0x00023293) fep_vkb_prediction_pane_g

0x1c19,	// (0x00015209) slider_set_pane_g3

0x1c2d,	// (0x0001521d) slider_set_pane_g4

0x1c45,	// (0x00015235) slider_set_pane_g5

0x1c19,	// (0x00015209) slider_set_pane_g6

0xb753,	// (0x0001ed43) slider_set_pane_g7

0x173d,	// (0x00014d2d) slider_form_pane_g3

0x1746,	// (0x00014d36) slider_form_pane_g4

0x174e,	// (0x00014d3e) slider_form_pane_g5

0x173d,	// (0x00014d2d) slider_form_pane_g6

0xb8bb,	// (0x0001eeab) slider_form_pane_g7

0x1b9c,	// (0x0001518c) slider_set_pane_vc_g3

0x1ba5,	// (0x00015195) slider_set_pane_vc_g4

0x1bae,	// (0x0001519e) slider_set_pane_vc_g5

0x1b9c,	// (0x0001518c) slider_set_pane_vc_g6

0x1bb7,	// (0x000151a7) slider_set_pane_vc_g7

0x1b9c,	// (0x0001518c) slider_form_pane_vc_g1

0x1ba5,	// (0x00015195) slider_form_pane_vc_g2

0x1bae,	// (0x0001519e) slider_form_pane_vc_g3

0x1b9c,	// (0x0001518c) slider_form_pane_vc_g4

0x1f55,	// (0x00015545) slider_form_pane_vc_g5

0x0004,

0xfa78,	// (0x00023068) slider_form_pane_vc_g

0xd303,	// (0x000208f3) main_idle_act3_pane

0x34ee,	// (0x00016ade) ai3_links_pane

0xbf30,	// (0x0001f520) popup_ai3_data_window_ParamLimits

0xbf30,	// (0x0001f520) popup_ai3_data_window

0xd303,	// (0x000208f3) grid_ai3_links_pane

0xbf48,	// (0x0001f538) cell_ai3_links_pane_ParamLimits

0xbf48,	// (0x0001f538) cell_ai3_links_pane

0x34f7,	// (0x00016ae7) bg_popup_sub_pane_cp11

0x3504,	// (0x00016af4) cell_ai3_links_pane_g1

0xd303,	// (0x000208f3) bg_popup_sub_pane_cp12

0x3529,	// (0x00016b19) heading_ai3_data_pane

0x3531,	// (0x00016b21) list_ai3_gene_pane

0x353d,	// (0x00016b2d) popup_ai3_data_window_g1

0x3545,	// (0x00016b35) heading_ai3_data_pane_g1

0x354d,	// (0x00016b3d) heading_ai3_data_pane_t1

0x355b,	// (0x00016b4b) list_double_ai3_gene_pane_ParamLimits

0x355b,	// (0x00016b4b) list_double_ai3_gene_pane

0x3568,	// (0x00016b58) list_single_ai3_gene_pane_ParamLimits

0x3568,	// (0x00016b58) list_single_ai3_gene_pane

0x24ab,	// (0x00015a9b) list_highlight_pane_cp7_ParamLimits

0x24ab,	// (0x00015a9b) list_highlight_pane_cp7

0x3575,	// (0x00016b65) list_single_a13_gene_pane_t1_ParamLimits

0x3575,	// (0x00016b65) list_single_a13_gene_pane_t1

0x358c,	// (0x00016b7c) list_single_ai3_gene_pane_g1

0x3595,	// (0x00016b85) list_single_ai3_gene_pane_g2

0x0001,

0xfcac,	// (0x0002329c) list_single_ai3_gene_pane_g

0x359d,	// (0x00016b8d) list_double_ai3_gene_pane_g1_ParamLimits

0x359d,	// (0x00016b8d) list_double_ai3_gene_pane_g1

0x35a9,	// (0x00016b99) list_double_ai3_gene_pane_t1_ParamLimits

0x35a9,	// (0x00016b99) list_double_ai3_gene_pane_t1

0x35c5,	// (0x00016bb5) list_double_ai3_gene_pane_t2_ParamLimits

0x35c5,	// (0x00016bb5) list_double_ai3_gene_pane_t2

0x35da,	// (0x00016bca) list_double_ai3_gene_pane_t3_ParamLimits

0x35da,	// (0x00016bca) list_double_ai3_gene_pane_t3

0x0002,

0xfcb1,	// (0x000232a1) list_double_ai3_gene_pane_t_ParamLimits

0xfcb1,	// (0x000232a1) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4d32,	// (0x00018322) aid_size_min_col_2

0xbf1c,	// (0x0001f50c) aid_size_min_msg_ParamLimits

0xbf1c,	// (0x0001f50c) aid_size_min_msg

0xbcc9,	// (0x0001f2b9) fep_vkb_top_text_pane_g2_ParamLimits

0xbcc9,	// (0x0001f2b9) fep_vkb_top_text_pane_g2

0x0001,

0xfb24,	// (0x00023114) fep_vkb_top_text_pane_g_ParamLimits

0xfb24,	// (0x00023114) fep_vkb_top_text_pane_g

0xd303,	// (0x000208f3) main_hc_apps_shell_pane

0x35f7,	// (0x00016be7) grid_hc_apps_pane_ParamLimits

0x35f7,	// (0x00016be7) grid_hc_apps_pane

0x3606,	// (0x00016bf6) list_hc_apps_pane

0x360e,	// (0x00016bfe) scroll_pane_cp37_ParamLimits

0x360e,	// (0x00016bfe) scroll_pane_cp37

0xbf5e,	// (0x0001f54e) cell_hc_apps_pane_ParamLimits

0xbf5e,	// (0x0001f54e) cell_hc_apps_pane

0xbff8,	// (0x0001f5e8) cell_hc_apps_pane_g1_ParamLimits

0xbff8,	// (0x0001f5e8) cell_hc_apps_pane_g1

0x361a,	// (0x00016c0a) cell_hc_apps_pane_g2_ParamLimits

0x361a,	// (0x00016c0a) cell_hc_apps_pane_g2

0x3636,	// (0x00016c26) cell_hc_apps_pane_g3_ParamLimits

0x3636,	// (0x00016c26) cell_hc_apps_pane_g3

0x0002,

0xfcb8,	// (0x000232a8) cell_hc_apps_pane_g_ParamLimits

0xfcb8,	// (0x000232a8) cell_hc_apps_pane_g

0xc025,	// (0x0001f615) cell_hc_apps_pane_t1_ParamLimits

0xc025,	// (0x0001f615) cell_hc_apps_pane_t1

0xd552,	// (0x00020b42) grid_highlight_pane_cp10_ParamLimits

0xd552,	// (0x00020b42) grid_highlight_pane_cp10

0xc063,	// (0x0001f653) list_single_hc_apps_pane_ParamLimits

0xc063,	// (0x0001f653) list_single_hc_apps_pane

0xc08f,	// (0x0001f67f) list_single_hc_apps_pane_g1

0x9fef,	// (0x0001d5df) list_single_hc_apps_pane_g2

0x0001,

0xfcbf,	// (0x000232af) list_single_hc_apps_pane_g

0xa008,	// (0x0001d5f8) list_single_hc_apps_pane_g2_copy1

0xa024,	// (0x0001d614) list_single_hc_apps_pane_t1

0xd3f3,	// (0x000209e3) bg_set_opt_pane_cp_ParamLimits

0xd401,	// (0x000209f1) setting_slider_pane_t1_ParamLimits

0xa2dd,	// (0x0001d8cd) setting_slider_pane_t2_ParamLimits

0xa2f6,	// (0x0001d8e6) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x00022b6a) setting_slider_pane_t_ParamLimits

0xd417,	// (0x00020a07) slider_set_pane_ParamLimits

0x55e2,	// (0x00018bd2) control_pane_g5_ParamLimits

0x55e2,	// (0x00018bd2) control_pane_g5

0x1705,	// (0x00014cf5) slider_set_pane_g1_ParamLimits

0x5a7f,	// (0x0001906f) slider_set_pane_g2_ParamLimits

0x1c19,	// (0x00015209) slider_set_pane_g3_ParamLimits

0x1c2d,	// (0x0001521d) slider_set_pane_g4_ParamLimits

0x1c45,	// (0x00015235) slider_set_pane_g5_ParamLimits

0x1c19,	// (0x00015209) slider_set_pane_g6_ParamLimits

0xb753,	// (0x0001ed43) slider_set_pane_g7_ParamLimits

0xf94b,	// (0x00022f3b) slider_set_pane_g_ParamLimits

0xd3f3,	// (0x000209e3) navi_icon_text_pane_ParamLimits

0xafd3,	// (0x0001e5c3) aid_fill_nsta_2_ParamLimits

0xb001,	// (0x0001e5f1) aid_touch_tab_arrow_left_ParamLimits

0xb015,	// (0x0001e605) aid_touch_tab_arrow_right_ParamLimits

0xb0b1,	// (0x0001e6a1) clock_nsta_pane_ParamLimits

0x12b6,	// (0x000148a6) navi_icon_pane_g1_ParamLimits

0x12c2,	// (0x000148b2) navi_text_pane_t1_ParamLimits

0x2209,	// (0x000157f9) navi_icon_text_pane_g1_ParamLimits

0x2215,	// (0x00015805) navi_icon_text_pane_t1_ParamLimits

0xc08f,	// (0x0001f67f) list_single_hc_apps_pane_g1_ParamLimits

0x9fef,	// (0x0001d5df) list_single_hc_apps_pane_g2_ParamLimits

0xfcbf,	// (0x000232af) list_single_hc_apps_pane_g_ParamLimits

0xa008,	// (0x0001d5f8) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xa024,	// (0x0001d614) list_single_hc_apps_pane_t1_ParamLimits

0xa16f,	// (0x0001d75f) popup_toolbar2_fixed_window_ParamLimits

0xa16f,	// (0x0001d75f) popup_toolbar2_fixed_window

0xaf5e,	// (0x0001e54e) popup_toolbar2_float_window

0xd303,	// (0x000208f3) bg_popup_sub_pane_cp27

0x6877,	// (0x00019e67) grid_toolbar2_float_pane

0xd303,	// (0x000208f3) bg_popup_sub_pane_cp26

0x6877,	// (0x00019e67) grid_toolbar2_fixed_pane

0xc0a8,	// (0x0001f698) cell_toolbar2_fixed_pane_ParamLimits

0xc0a8,	// (0x0001f698) cell_toolbar2_fixed_pane

0xc0c3,	// (0x0001f6b3) cell_toolbar2_fixed_pane_g1

0x6899,	// (0x00019e89) toolbar2_fixed_button_pane

0xea13,	// (0x00022003) toolbar2_fixed_button_pane_g1

0xea1b,	// (0x0002200b) toolbar2_fixed_button_pane_g2

0xea23,	// (0x00022013) toolbar2_fixed_button_pane_g3

0xea2b,	// (0x0002201b) toolbar2_fixed_button_pane_g4

0xea33,	// (0x00022023) toolbar2_fixed_button_pane_g5

0xea3b,	// (0x0002202b) toolbar2_fixed_button_pane_g6

0xea43,	// (0x00022033) toolbar2_fixed_button_pane_g7

0xea4b,	// (0x0002203b) toolbar2_fixed_button_pane_g8

0xea53,	// (0x00022043) toolbar2_fixed_button_pane_g9

0x0008,

0xf864,	// (0x00022e54) toolbar2_fixed_button_pane_g

0x68a1,	// (0x00019e91) cell_toolbar2_float_pane_ParamLimits

0x68a1,	// (0x00019e91) cell_toolbar2_float_pane

0x68b2,	// (0x00019ea2) cell_toolbar2_float_pane_g1

0x6899,	// (0x00019e89) toolbar2_fixed_button_pane_cp

0xbc7e,	// (0x0001f26e) fep_vkb_accented_list_pane_ParamLimits

0xbc7e,	// (0x0001f26e) fep_vkb_accented_list_pane

0x63b3,	// (0x000199a3) bg_popup_fep_shadow_pane_g9

0xe4fd,	// (0x00021aed) bg_popup_fep_shadow_pane_cp3

0xdadd,	// (0x000210cd) list_accented_list_pane

0x68bb,	// (0x00019eab) list_single_accented_list_pane_ParamLimits

0x68bb,	// (0x00019eab) list_single_accented_list_pane

0xe4fd,	// (0x00021aed) list_highlight_pane_cp10

0x68cc,	// (0x00019ebc) list_single_accented_list_pane_t1

0xaea0,	// (0x0001e490) popup_slider_window_ParamLimits

0xaea0,	// (0x0001e490) popup_slider_window

0x347e,	// (0x00016a6e) aid_indentation_list_msg

0xc1a2,	// (0x0001f792) bg_popup_window_pane_cp19

0x69d0,	// (0x00019fc0) popup_slider_window_g1

0x69ec,	// (0x00019fdc) popup_slider_window_g2

0x6a08,	// (0x00019ff8) popup_slider_window_g3

0x0005,

0xfcc4,	// (0x000232b4) popup_slider_window_g

0x6a64,	// (0x0001a054) popup_slider_window_t1

0x6ad6,	// (0x0001a0c6) small_volume_slider_vertical_pane

0x24e6,	// (0x00015ad6) small_volume_slider_vertical_pane_g1

0x24e6,	// (0x00015ad6) small_volume_slider_vertical_pane_g2

0x6af2,	// (0x0001a0e2) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd6,	// (0x000232c6) small_volume_slider_vertical_pane_g

0xa0f3,	// (0x0001d6e3) area_side_right_pane_ParamLimits

0xa0f3,	// (0x0001d6e3) area_side_right_pane

0xc25a,	// (0x0001f84a) aid_size_side_button_ParamLimits

0xc25a,	// (0x0001f84a) aid_size_side_button

0xc273,	// (0x0001f863) grid_sctrl_middle_pane_ParamLimits

0xc273,	// (0x0001f863) grid_sctrl_middle_pane

0x6b2b,	// (0x0001a11b) sctrl_sk_bottom_pane

0x6b3c,	// (0x0001a12c) sctrl_sk_top_pane

0x6b4e,	// (0x0001a13e) aid_touch_sctrl_top

0xd552,	// (0x00020b42) bg_sctrl_sk_pane_ParamLimits

0xd552,	// (0x00020b42) bg_sctrl_sk_pane

0x6b5b,	// (0x0001a14b) sctrl_sk_top_pane_g1

0x6b68,	// (0x0001a158) sctrl_sk_top_pane_t1

0x6b4e,	// (0x0001a13e) aid_touch_sctrl_bottom

0xd552,	// (0x00020b42) bg_sctrl_sk_pane_cp_ParamLimits

0xd552,	// (0x00020b42) bg_sctrl_sk_pane_cp

0x6b83,	// (0x0001a173) sctrl_sk_bottom_pane_g1

0x6b68,	// (0x0001a158) sctrl_sk_bottom_pane_t1

0xc289,	// (0x0001f879) cell_sctrl_middle_pane_ParamLimits

0xc289,	// (0x0001f879) cell_sctrl_middle_pane

0xc29a,	// (0x0001f88a) aid_touch_sctrl_middle_ParamLimits

0xc29a,	// (0x0001f88a) aid_touch_sctrl_middle

0xc2a7,	// (0x0001f897) bg_sctrl_middle_pane_ParamLimits

0xc2a7,	// (0x0001f897) bg_sctrl_middle_pane

0x6c4a,	// (0x0001a23a) cell_sctrl_middle_pane_g1_ParamLimits

0x6c4a,	// (0x0001a23a) cell_sctrl_middle_pane_g1

0xc2b5,	// (0x0001f8a5) cell_sctrl_middle_pane_g2_ParamLimits

0xc2b5,	// (0x0001f8a5) cell_sctrl_middle_pane_g2

0x0001,

0xfce2,	// (0x000232d2) cell_sctrl_middle_pane_g_ParamLimits

0xfce2,	// (0x000232d2) cell_sctrl_middle_pane_g

0xea13,	// (0x00022003) bg_sctrl_middle_pane_g1

0xea1b,	// (0x0002200b) bg_sctrl_middle_pane_g2

0xea23,	// (0x00022013) bg_sctrl_middle_pane_g3

0xea2b,	// (0x0002201b) bg_sctrl_middle_pane_g4

0xea33,	// (0x00022023) bg_sctrl_middle_pane_g5

0xea3b,	// (0x0002202b) bg_sctrl_middle_pane_g6

0xea43,	// (0x00022033) bg_sctrl_middle_pane_g7

0xea4b,	// (0x0002203b) bg_sctrl_middle_pane_g8

0x0007,

0xfce7,	// (0x000232d7) bg_sctrl_middle_pane_g

0xea53,	// (0x00022043) bg_sctrl_middle_pane_g8_copy1

0xea13,	// (0x00022003) bg_sctrl_sk_pane_g1

0xea1b,	// (0x0002200b) bg_sctrl_sk_pane_g2

0xea23,	// (0x00022013) bg_sctrl_sk_pane_g3

0x0008,

0xf864,	// (0x00022e54) bg_sctrl_sk_pane_g

0xd8db,	// (0x00020ecb) aid_size_touch_scroll_bar

0xea2b,	// (0x0002201b) bg_sctrl_sk_pane_g4

0xea33,	// (0x00022023) bg_sctrl_sk_pane_g5

0xea3b,	// (0x0002202b) bg_sctrl_sk_pane_g6

0xea43,	// (0x00022033) bg_sctrl_sk_pane_g7

0xea4b,	// (0x0002203b) bg_sctrl_sk_pane_g8

0xea53,	// (0x00022043) bg_sctrl_sk_pane_g9

0xe789,	// (0x00021d79) popup_fep_china_hwr2_fs_candidate_window

0xaa9b,	// (0x0001e08b) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xaa9b,	// (0x0001e08b) popup_fep_china_hwr2_fs_control_window

0x2722,	// (0x00015d12) sctrl_sk_top_pane_g2

0x0001,

0xfcdd,	// (0x000232cd) sctrl_sk_top_pane_g

0xc2c2,	// (0x0001f8b2) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc2c2,	// (0x0001f8b2) aid_fep_china_hwr2_fs_cell

0xc2d6,	// (0x0001f8c6) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc2d6,	// (0x0001f8c6) bg_popup_fep_shadow_pane_cp4

0xc2ed,	// (0x0001f8dd) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xc2ed,	// (0x0001f8dd) bg_popup_fep_shadow_pane_cp5

0xc2ff,	// (0x0001f8ef) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xc2ff,	// (0x0001f8ef) popup_fep_china_hwr2_fs_control_bar_grid

0xc313,	// (0x0001f903) popup_fep_china_hwr2_fs_control_funtion_grid

0x6c20,	// (0x0001a210) aid_fep_china_hwr2_fs_candi_cell

0xd303,	// (0x000208f3) bg_popup_fep_shadow_pane_cp6

0x6c2a,	// (0x0001a21a) popup_fep_china_hwr2_fs_candidate_grid

0xc31b,	// (0x0001f90b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xc31b,	// (0x0001f90b) cell_fep_china_hwr2_fs_funtion_grid

0x24e6,	// (0x00015ad6) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6c4a,	// (0x0001a23a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6c4a,	// (0x0001a23a) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6c58,	// (0x0001a248) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6c58,	// (0x0001a248) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf8,	// (0x000232e8) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf8,	// (0x000232e8) cell_fep_china_hwr2_fs_funtion_grid_g

0xc333,	// (0x0001f923) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xc333,	// (0x0001f923) cell_fep_china_hwr2_fs_funtion_grid_t1

0xc348,	// (0x0001f938) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xc348,	// (0x0001f938) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcfd,	// (0x000232ed) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcfd,	// (0x000232ed) cell_fep_china_hwr2_fs_funtion_grid_t

0x6c9f,	// (0x0001a28f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6ca7,	// (0x0001a297) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6caf,	// (0x0001a29f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd02,	// (0x000232f2) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6cb7,	// (0x0001a2a7) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6cb7,	// (0x0001a2a7) cell_fep_china_hwr2_fs_candidate_grid

0x6cd0,	// (0x0001a2c0) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6cd8,	// (0x0001a2c8) popup_fep_china_hwr2_fs_candidate_grid_g21

0x24e6,	// (0x00015ad6) cell_fep_china_hwr2_fs_candidate_grid_g1

0x24e6,	// (0x00015ad6) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb29,	// (0x00023119) cell_fep_china_hwr2_fs_candidate_grid_g

0x6ce0,	// (0x0001a2d0) cell_fep_china_hwr2_fs_candidate_grid_t1

0xe878,	// (0x00021e68) clock_nsta_pane_cp_24_ParamLimits

0xe878,	// (0x00021e68) clock_nsta_pane_cp_24

0xe8d5,	// (0x00021ec5) indicator_nsta_pane_cp_24_ParamLimits

0xe8d5,	// (0x00021ec5) indicator_nsta_pane_cp_24

0x11c1,	// (0x000147b1) heading_pane_g1

0x0001,

0xf8b2,	// (0x00022ea2) heading_pane_g

0xb9ad,	// (0x0001ef9d) grid_sct_catagory_button_pane

0x1175,	// (0x00014765) scroll_pane_cp5_ParamLimits

0x223b,	// (0x0001582b) button_value_adjust_pane_cp5_ParamLimits

0x223b,	// (0x0001582b) button_value_adjust_pane_cp5

0x22f9,	// (0x000158e9) form2_midp_time_pane_ParamLimits

0x6cee,	// (0x0001a2de) cell_sct_catagory_button_pane_ParamLimits

0x6cee,	// (0x0001a2de) cell_sct_catagory_button_pane

0x24ab,	// (0x00015a9b) bg_button_pane_cp01_ParamLimits

0x24ab,	// (0x00015a9b) bg_button_pane_cp01

0x24e6,	// (0x00015ad6) cell_sct_catagory_button_pane_g1

0xaf0f,	// (0x0001e4ff) popup_tb_extension_window

0xc364,	// (0x0001f954) aid_size_cell_ext_ParamLimits

0xc364,	// (0x0001f954) aid_size_cell_ext

0xd7b9,	// (0x00020da9) bg_tb_trans_pane_cp1_ParamLimits

0xd7b9,	// (0x00020da9) bg_tb_trans_pane_cp1

0xc38a,	// (0x0001f97a) grid_tb_ext_pane_ParamLimits

0xc38a,	// (0x0001f97a) grid_tb_ext_pane

0xc3c0,	// (0x0001f9b0) cell_tb_ext_pane_ParamLimits

0xc3c0,	// (0x0001f9b0) cell_tb_ext_pane

0xc3e4,	// (0x0001f9d4) cell_tb_ext_pane_g1_ParamLimits

0xc3e4,	// (0x0001f9d4) cell_tb_ext_pane_g1

0x6d78,	// (0x0001a368) cell_tb_ext_pane_t1

0xd552,	// (0x00020b42) list_highlight_pane_cp11_ParamLimits

0xd552,	// (0x00020b42) list_highlight_pane_cp11

0x507c,	// (0x0001866c) popup_uni_indicator_window_ParamLimits

0x507c,	// (0x0001866c) popup_uni_indicator_window

0xd993,	// (0x00020f83) bg_popup_sub_pane_cp14

0x6d93,	// (0x0001a383) list_uniindi_pane

0x6d9f,	// (0x0001a38f) uniindi_top_pane

0xd552,	// (0x00020b42) bg_uniindi_top_pane

0x6dbe,	// (0x0001a3ae) uniindi_top_pane_g1

0x6dd4,	// (0x0001a3c4) uniindi_top_pane_g2

0x0003,

0xfd09,	// (0x000232f9) uniindi_top_pane_g

0x6dfe,	// (0x0001a3ee) uniindi_top_pane_t1

0x6e28,	// (0x0001a418) list_single_uniindi_pane_ParamLimits

0x6e28,	// (0x0001a418) list_single_uniindi_pane

0x24e6,	// (0x00015ad6) bg_uniindi_top_pane_g1

0x6e3a,	// (0x0001a42a) list_single_uniindi_pane_g1

0x6e4d,	// (0x0001a43d) list_single_uniindi_pane_t1

0xd303,	// (0x000208f3) control_bg_pane

0x6e72,	// (0x0001a462) bg_sctrl_sk_pane_cp1

0x6e7b,	// (0x0001a46b) bg_sctrl_sk_pane_cp2

0x6e84,	// (0x0001a474) control_bg_pane_g1

0x6e8d,	// (0x0001a47d) control_bg_pane_g2

0x0001,

0xfd12,	// (0x00023302) control_bg_pane_g

0x20fc,	// (0x000156ec) cell_indicator_nsta_pane_g1_ParamLimits

0xbab8,	// (0x0001f0a8) cell_indicator_nsta_pane_g2_ParamLimits

0xfa8d,	// (0x0002307d) cell_indicator_nsta_pane_g_ParamLimits

0x4afb,	// (0x000180eb) form2_midp_time_pane_t1_ParamLimits

0x2507,	// (0x00015af7) main_idle_act4_pane_ParamLimits

0x2507,	// (0x00015af7) main_idle_act4_pane

0xaf0f,	// (0x0001e4ff) popup_tb_extension_window_ParamLimits

0xc3aa,	// (0x0001f99a) tb_ext_find_pane_ParamLimits

0xc3aa,	// (0x0001f99a) tb_ext_find_pane

0x6e96,	// (0x0001a486) ai_gene_pane_1_cp1

0xe591,	// (0x00021b81) ai_gene_pane_2_cp1

0x6e9e,	// (0x0001a48e) list_single_idle_plugin_calendar_pane

0x6ea7,	// (0x0001a497) list_single_idle_plugin_notification_pane

0x6eb0,	// (0x0001a4a0) list_single_idle_plugin_player_pane

0xc401,	// (0x0001f9f1) list_single_idle_plugin_shortcut_pane_ParamLimits

0xc401,	// (0x0001f9f1) list_single_idle_plugin_shortcut_pane

0xc429,	// (0x0001fa19) main_idle_act4_pane_t1

0xc43f,	// (0x0001fa2f) main_idle_act4_pane_t2

0x0001,

0xfd17,	// (0x00023307) main_idle_act4_pane_t

0xc455,	// (0x0001fa45) middle_sk_idle_act4_pane_ParamLimits

0xc455,	// (0x0001fa45) middle_sk_idle_act4_pane

0xc471,	// (0x0001fa61) popup_clock_digital_analogue_window_cp2

0xc497,	// (0x0001fa87) shortcut_wheel_idle_act4_pane_ParamLimits

0xc497,	// (0x0001fa87) shortcut_wheel_idle_act4_pane

0x24e6,	// (0x00015ad6) shortcut_wheel_idle_act4_pane_g1

0x24e6,	// (0x00015ad6) shortcut_wheel_idle_act4_pane_g2

0x24e6,	// (0x00015ad6) shortcut_wheel_idle_act4_pane_g3

0x24e6,	// (0x00015ad6) shortcut_wheel_idle_act4_pane_g4

0x24e6,	// (0x00015ad6) shortcut_wheel_idle_act4_pane_g5

0x6f43,	// (0x0001a533) shortcut_wheel_idle_act4_pane_g6

0x6f4b,	// (0x0001a53b) shortcut_wheel_idle_act4_pane_g7

0x6f53,	// (0x0001a543) shortcut_wheel_idle_act4_pane_g8

0x6f5b,	// (0x0001a54b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1c,	// (0x0002330c) shortcut_wheel_idle_act4_pane_g

0x2a6d,	// (0x0001605d) middle_sk_idle_act4_pane_g1_ParamLimits

0x2a6d,	// (0x0001605d) middle_sk_idle_act4_pane_g1

0xc512,	// (0x0001fb02) middle_sk_idle_act4_pane_g2_ParamLimits

0xc512,	// (0x0001fb02) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3f,	// (0x0002332f) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3f,	// (0x0002332f) middle_sk_idle_act4_pane_g

0xc52a,	// (0x0001fb1a) middle_sk_idle_act4_pane_t1_ParamLimits

0xc52a,	// (0x0001fb1a) middle_sk_idle_act4_pane_t1

0xc559,	// (0x0001fb49) grid_ai_shortcut_pane_ParamLimits

0xc559,	// (0x0001fb49) grid_ai_shortcut_pane

0xc576,	// (0x0001fb66) list_highlight_pane_cp16_ParamLimits

0xc576,	// (0x0001fb66) list_highlight_pane_cp16

0xc583,	// (0x0001fb73) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xc583,	// (0x0001fb73) list_single_idle_plugin_shortcut_pane_g1

0xc58f,	// (0x0001fb7f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xc58f,	// (0x0001fb7f) list_single_idle_plugin_shortcut_pane_g2

0xc5ab,	// (0x0001fb9b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xc5ab,	// (0x0001fb9b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd44,	// (0x00023334) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd44,	// (0x00023334) list_single_idle_plugin_shortcut_pane_g

0xc5c0,	// (0x0001fbb0) cell_ai_shortcut_pane_ParamLimits

0xc5c0,	// (0x0001fbb0) cell_ai_shortcut_pane

0xc5d6,	// (0x0001fbc6) cell_ai_shortcut_pane_g1_ParamLimits

0xc5d6,	// (0x0001fbc6) cell_ai_shortcut_pane_g1

0x6e96,	// (0x0001a486) ai_gene_pane_1_cp2

0x7088,	// (0x0001a678) ai_gene_pane_2_cp2

0x7090,	// (0x0001a680) list_highlight_pane_cp15

0x7099,	// (0x0001a689) list_single_idle_plugin_calendar_pane_g1

0x7090,	// (0x0001a680) list_highlight_pane_cp17

0x70a1,	// (0x0001a691) list_single_idle_plugin_calendar_pane_g1_copy1

0x70a9,	// (0x0001a699) list_single_idle_plugin_player_pane_g1

0x19e0,	// (0x00014fd0) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4b,	// (0x0002333b) list_single_idle_plugin_player_pane_g

0x70b1,	// (0x0001a6a1) list_single_idle_plugin_player_pane_t1

0x70bf,	// (0x0001a6af) list_single_idle_plugin_player_pane_t2

0x70cd,	// (0x0001a6bd) list_single_idle_plugin_player_pane_t3

0x70db,	// (0x0001a6cb) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd50,	// (0x00023340) list_single_idle_plugin_player_pane_t

0x70e9,	// (0x0001a6d9) wait_bar_pane_cp15

0x70f1,	// (0x0001a6e1) grid_ai_notification_pane

0x19e0,	// (0x00014fd0) list_single_idle_plugin_notification_pane_g1

0xc5f8,	// (0x0001fbe8) cell_ai_notification_pane_ParamLimits

0xc5f8,	// (0x0001fbe8) cell_ai_notification_pane

0x7107,	// (0x0001a6f7) cell_ai_notification_pane_g1

0x710f,	// (0x0001a6ff) cell_ai_notification_pane_t1

0xc605,	// (0x0001fbf5) tb_ext_find_button_pane

0xc60d,	// (0x0001fbfd) tb_ext_find_pane_g1

0xc615,	// (0x0001fc05) tb_ext_find_pane_t1

0xe070,	// (0x00021660) tb_ext_find_button_pane_g1

0x713b,	// (0x0001a72b) tb_ext_find_button_pane_g2

0x0001,

0xfd59,	// (0x00023349) tb_ext_find_button_pane_g

0xc429,	// (0x0001fa19) main_idle_act4_pane_t1_ParamLimits

0xc43f,	// (0x0001fa2f) main_idle_act4_pane_t2_ParamLimits

0xfd17,	// (0x00023307) main_idle_act4_pane_t_ParamLimits

0xc471,	// (0x0001fa61) popup_clock_digital_analogue_window_cp2_ParamLimits

0xc487,	// (0x0001fa77) sat_plugin_idle_act4_pane_ParamLimits

0xc487,	// (0x0001fa77) sat_plugin_idle_act4_pane

0xc623,	// (0x0001fc13) sat_plugin_idle_act4_pane_t1_ParamLimits

0xc623,	// (0x0001fc13) sat_plugin_idle_act4_pane_t1

0xc63b,	// (0x0001fc2b) sat_plugin_idle_act4_pane_t2_ParamLimits

0xc63b,	// (0x0001fc2b) sat_plugin_idle_act4_pane_t2

0xc653,	// (0x0001fc43) sat_plugin_idle_act4_pane_t3_ParamLimits

0xc653,	// (0x0001fc43) sat_plugin_idle_act4_pane_t3

0xc66b,	// (0x0001fc5b) sat_plugin_idle_act4_pane_t4_ParamLimits

0xc66b,	// (0x0001fc5b) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5e,	// (0x0002334e) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5e,	// (0x0002334e) sat_plugin_idle_act4_pane_t

0x4fdd,	// (0x000185cd) popup_battery_window_ParamLimits

0x4fdd,	// (0x000185cd) popup_battery_window

0xd552,	// (0x00020b42) bg_popup_sub_pane_cp25_ParamLimits

0xd552,	// (0x00020b42) bg_popup_sub_pane_cp25

0x7190,	// (0x0001a780) popup_battery_window_g1_ParamLimits

0x7190,	// (0x0001a780) popup_battery_window_g1

0x719c,	// (0x0001a78c) popup_battery_window_t1_ParamLimits

0x719c,	// (0x0001a78c) popup_battery_window_t1

0x71ae,	// (0x0001a79e) popup_battery_window_t2_ParamLimits

0x71ae,	// (0x0001a79e) popup_battery_window_t2

0x0001,

0xfd67,	// (0x00023357) popup_battery_window_t_ParamLimits

0xfd67,	// (0x00023357) popup_battery_window_t

0xa823,	// (0x0001de13) midp_canvas_pane_ParamLimits

0xa878,	// (0x0001de68) midp_keypad_pane_ParamLimits

0xa878,	// (0x0001de68) midp_keypad_pane

0xdea5,	// (0x00021495) main_midp_pane_ParamLimits

0x21d7,	// (0x000157c7) signal_pane_g2_cp_ParamLimits

0xc683,	// (0x0001fc73) aid_size_cell_midp_keypad_ParamLimits

0xc683,	// (0x0001fc73) aid_size_cell_midp_keypad

0xc6a1,	// (0x0001fc91) midp_keyp_game_grid_pane_ParamLimits

0xc6a1,	// (0x0001fc91) midp_keyp_game_grid_pane

0xc6c0,	// (0x0001fcb0) midp_keyp_rocker_pane_ParamLimits

0xc6c0,	// (0x0001fcb0) midp_keyp_rocker_pane

0xc701,	// (0x0001fcf1) midp_keyp_sk_left_pane_ParamLimits

0xc701,	// (0x0001fcf1) midp_keyp_sk_left_pane

0xc753,	// (0x0001fd43) midp_keyp_sk_right_pane_ParamLimits

0xc753,	// (0x0001fd43) midp_keyp_sk_right_pane

0xd303,	// (0x000208f3) bg_button_pane_cp03

0xc79f,	// (0x0001fd8f) midp_keyp_sk_left_pane_g1

0xd303,	// (0x000208f3) bg_button_pane_cp04

0xc79f,	// (0x0001fd8f) midp_keyp_sk_right_pane_g1

0x24e6,	// (0x00015ad6) midp_keyp_rocker_pane_g1

0xc7a8,	// (0x0001fd98) keyp_game_cell_pane_ParamLimits

0xc7a8,	// (0x0001fd98) keyp_game_cell_pane

0xd303,	// (0x000208f3) bg_button_pane_cp02

0xc7ca,	// (0x0001fdba) keyp_game_cell_pane_g1

0xa135,	// (0x0001d725) popup_fep_vkb2_window_ParamLimits

0xa135,	// (0x0001d725) popup_fep_vkb2_window

0xc7d3,	// (0x0001fdc3) aid_size_cell_vkb2_ParamLimits

0xc7d3,	// (0x0001fdc3) aid_size_cell_vkb2

0xc809,	// (0x0001fdf9) popup_fep_vkb2_window_g1_ParamLimits

0xc809,	// (0x0001fdf9) popup_fep_vkb2_window_g1

0xc859,	// (0x0001fe49) vkb2_area_bottom_pane_ParamLimits

0xc859,	// (0x0001fe49) vkb2_area_bottom_pane

0xc897,	// (0x0001fe87) vkb2_area_keypad_pane_ParamLimits

0xc897,	// (0x0001fe87) vkb2_area_keypad_pane

0xc8d5,	// (0x0001fec5) vkb2_area_top_pane_ParamLimits

0xc8d5,	// (0x0001fec5) vkb2_area_top_pane

0xc951,	// (0x0001ff41) vkb2_top_entry_pane_ParamLimits

0xc951,	// (0x0001ff41) vkb2_top_entry_pane

0xc97e,	// (0x0001ff6e) vkb2_top_grid_left_pane_ParamLimits

0xc97e,	// (0x0001ff6e) vkb2_top_grid_left_pane

0xc99e,	// (0x0001ff8e) vkb2_top_grid_right_pane_ParamLimits

0xc99e,	// (0x0001ff8e) vkb2_top_grid_right_pane

0x74e9,	// (0x0001aad9) vkb2_cell_keypad_pane_ParamLimits

0x74e9,	// (0x0001aad9) vkb2_cell_keypad_pane

0xc9e4,	// (0x0001ffd4) vkb2_area_bottom_grid_pane_ParamLimits

0xc9e4,	// (0x0001ffd4) vkb2_area_bottom_grid_pane

0xca0a,	// (0x0001fffa) vkb2_area_bottom_pane_g1_ParamLimits

0xca0a,	// (0x0001fffa) vkb2_area_bottom_pane_g1

0xca30,	// (0x00020020) vkb2_area_bottom_pane_g2_ParamLimits

0xca30,	// (0x00020020) vkb2_area_bottom_pane_g2

0xca61,	// (0x00020051) vkb2_area_bottom_pane_g3_ParamLimits

0xca61,	// (0x00020051) vkb2_area_bottom_pane_g3

0x0002,

0xfd6c,	// (0x0002335c) vkb2_area_bottom_pane_g_ParamLimits

0xfd6c,	// (0x0002335c) vkb2_area_bottom_pane_g

0x7661,	// (0x0001ac51) vkb2_top_cell_left_pane_ParamLimits

0x7661,	// (0x0001ac51) vkb2_top_cell_left_pane

0xcab7,	// (0x000200a7) vkb2_top_entry_pane_g1_ParamLimits

0xcab7,	// (0x000200a7) vkb2_top_entry_pane_g1

0xcac5,	// (0x000200b5) vkb2_top_entry_pane_t1_ParamLimits

0xcac5,	// (0x000200b5) vkb2_top_entry_pane_t1

0x76c9,	// (0x0001acb9) vkb2_top_entry_pane_t2_ParamLimits

0x76c9,	// (0x0001acb9) vkb2_top_entry_pane_t2

0x76fb,	// (0x0001aceb) vkb2_top_entry_pane_t3_ParamLimits

0x76fb,	// (0x0001aceb) vkb2_top_entry_pane_t3

0x0002,

0xfd73,	// (0x00023363) vkb2_top_entry_pane_t_ParamLimits

0xfd73,	// (0x00023363) vkb2_top_entry_pane_t

0xcafe,	// (0x000200ee) vkb2_top_grid_right_pane_g1_ParamLimits

0xcafe,	// (0x000200ee) vkb2_top_grid_right_pane_g1

0x7754,	// (0x0001ad44) vkb2_top_grid_right_pane_g2_ParamLimits

0x7754,	// (0x0001ad44) vkb2_top_grid_right_pane_g2

0x776c,	// (0x0001ad5c) vkb2_top_grid_right_pane_g3_ParamLimits

0x776c,	// (0x0001ad5c) vkb2_top_grid_right_pane_g3

0xcb14,	// (0x00020104) vkb2_top_grid_right_pane_g4_ParamLimits

0xcb14,	// (0x00020104) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7a,	// (0x0002336a) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7a,	// (0x0002336a) vkb2_top_grid_right_pane_g

0x779a,	// (0x0001ad8a) vkb2_top_cell_left_pane_g1

0x77b1,	// (0x0001ada1) vkb2_cell_keypad_pane_g1_ParamLimits

0x77b1,	// (0x0001ada1) vkb2_cell_keypad_pane_g1

0x77bf,	// (0x0001adaf) vkb2_cell_keypad_pane_t1_ParamLimits

0x77bf,	// (0x0001adaf) vkb2_cell_keypad_pane_t1

0x77d6,	// (0x0001adc6) vkb2_cell_bottom_grid_pane_ParamLimits

0x77d6,	// (0x0001adc6) vkb2_cell_bottom_grid_pane

0x780f,	// (0x0001adff) vkb2_cell_bottom_grid_pane_g1

0xc4b6,	// (0x0001faa6) aid_call2_pane_cp02

0xc4be,	// (0x0001faae) aid_call_pane_cp02

0xc4c6,	// (0x0001fab6) clock_digital_number_pane_cp10

0xc4ce,	// (0x0001fabe) clock_digital_number_pane_cp11

0xc4d6,	// (0x0001fac6) clock_digital_number_pane_cp12

0xc4de,	// (0x0001face) clock_digital_number_pane_cp13

0xc4e6,	// (0x0001fad6) clock_digital_separator_pane_cp10

0xe070,	// (0x00021660) popup_clock_digital_analogue_window_cp2_g1

0xe070,	// (0x00021660) popup_clock_digital_analogue_window_cp2_g2

0xc4ee,	// (0x0001fade) popup_clock_digital_analogue_window_cp2_g3

0xe070,	// (0x00021660) popup_clock_digital_analogue_window_cp2_g4

0xc4ee,	// (0x0001fade) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2f,	// (0x0002331f) popup_clock_digital_analogue_window_cp2_g

0xc4f6,	// (0x0001fae6) popup_clock_digital_analogue_window_cp2_t1

0xc504,	// (0x0001faf4) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3a,	// (0x0002332a) popup_clock_digital_analogue_window_cp2_t

0x24e6,	// (0x00015ad6) clock_digital_number_pane_cp10_g1

0x24e6,	// (0x00015ad6) clock_digital_number_pane_cp10_g2

0x0001,

0xfb29,	// (0x00023119) clock_digital_number_pane_cp10_g

0x24e6,	// (0x00015ad6) clock_digital_separator_pane_cp10_g1

0x24e6,	// (0x00015ad6) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb29,	// (0x00023119) clock_digital_separator_pane_cp10_g

0x6de0,	// (0x0001a3d0) uniindi_top_pane_g3

0x6df1,	// (0x0001a3e1) uniindi_top_pane_g4

0x7554,	// (0x0001ab44) vkb2_row_keypad_pane_ParamLimits

0x7554,	// (0x0001ab44) vkb2_row_keypad_pane

0x782b,	// (0x0001ae1b) vkb2_cell_t_keypad_pane_ParamLimits

0x782b,	// (0x0001ae1b) vkb2_cell_t_keypad_pane

0x7838,	// (0x0001ae28) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7838,	// (0x0001ae28) vkb2_cell_t_keypad_pane_cp08

0x7848,	// (0x0001ae38) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7848,	// (0x0001ae38) vkb2_cell_t_keypad_pane_cp09

0x7859,	// (0x0001ae49) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7859,	// (0x0001ae49) vkb2_cell_t_keypad_pane_cp01

0x7869,	// (0x0001ae59) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7869,	// (0x0001ae59) vkb2_cell_t_keypad_pane_cp02

0x7879,	// (0x0001ae69) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7879,	// (0x0001ae69) vkb2_cell_t_keypad_pane_cp03

0x7889,	// (0x0001ae79) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7889,	// (0x0001ae79) vkb2_cell_t_keypad_pane_cp04

0x7899,	// (0x0001ae89) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7899,	// (0x0001ae89) vkb2_cell_t_keypad_pane_cp05

0x78a9,	// (0x0001ae99) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x78a9,	// (0x0001ae99) vkb2_cell_t_keypad_pane_cp06

0x78b9,	// (0x0001aea9) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x78b9,	// (0x0001aea9) vkb2_cell_t_keypad_pane_cp07

0x78c9,	// (0x0001aeb9) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x78c9,	// (0x0001aeb9) vkb2_cell_t_keypad_pane_cp10

0x2722,	// (0x00015d12) vkb2_cell_t_keypad_pane_g1

0x78de,	// (0x0001aece) vkb2_cell_t_keypad_pane_t1

0xd303,	// (0x000208f3) popup_grid_graphic2_window

0xcb2a,	// (0x0002011a) aid_size_cell_graphic2_ParamLimits

0xcb2a,	// (0x0002011a) aid_size_cell_graphic2

0xefb6,	// (0x000225a6) bg_popup_window_pane_cp21_ParamLimits

0xefb6,	// (0x000225a6) bg_popup_window_pane_cp21

0xcb5c,	// (0x0002014c) graphic2_pages_pane_ParamLimits

0xcb5c,	// (0x0002014c) graphic2_pages_pane

0xcba5,	// (0x00020195) grid_graphic2_control_pane_ParamLimits

0xcba5,	// (0x00020195) grid_graphic2_control_pane

0xcbd3,	// (0x000201c3) grid_graphic2_pane_ParamLimits

0xcbd3,	// (0x000201c3) grid_graphic2_pane

0xcc32,	// (0x00020222) cell_graphic2_pane

0xd303,	// (0x000208f3) main_comp_mode_pane

0x3531,	// (0x00016b21) list_ai3_gene_pane_ParamLimits

0xc1a2,	// (0x0001f792) bg_popup_window_pane_cp19_ParamLimits

0x6978,	// (0x00019f68) bg_touch_area_indi_pane_ParamLimits

0x6978,	// (0x00019f68) bg_touch_area_indi_pane

0x698e,	// (0x00019f7e) bg_touch_area_indi_pane_cp01_ParamLimits

0x698e,	// (0x00019f7e) bg_touch_area_indi_pane_cp01

0x69a4,	// (0x00019f94) bg_touch_area_indi_pane_cp02_ParamLimits

0x69a4,	// (0x00019f94) bg_touch_area_indi_pane_cp02

0x69ba,	// (0x00019faa) bg_touch_area_indi_pane_cp03_ParamLimits

0x69ba,	// (0x00019faa) bg_touch_area_indi_pane_cp03

0x69d0,	// (0x00019fc0) popup_slider_window_g1_ParamLimits

0x69ec,	// (0x00019fdc) popup_slider_window_g2_ParamLimits

0x6a08,	// (0x00019ff8) popup_slider_window_g3_ParamLimits

0xfcc4,	// (0x000232b4) popup_slider_window_g_ParamLimits

0x6a64,	// (0x0001a054) popup_slider_window_t1_ParamLimits

0x6ad6,	// (0x0001a0c6) small_volume_slider_vertical_pane_ParamLimits

0xcc32,	// (0x00020222) cell_graphic2_pane_ParamLimits

0xcc7b,	// (0x0002026b) bg_button_pane_cp10_ParamLimits

0xcc7b,	// (0x0002026b) bg_button_pane_cp10

0xcc8c,	// (0x0002027c) bg_button_pane_cp11_ParamLimits

0xcc8c,	// (0x0002027c) bg_button_pane_cp11

0xcc9d,	// (0x0002028d) graphic2_pages_pane_g1_ParamLimits

0xcc9d,	// (0x0002028d) graphic2_pages_pane_g1

0xccb8,	// (0x000202a8) graphic2_pages_pane_g2_ParamLimits

0xccb8,	// (0x000202a8) graphic2_pages_pane_g2

0x0001,

0xfd88,	// (0x00023378) graphic2_pages_pane_g_ParamLimits

0xfd88,	// (0x00023378) graphic2_pages_pane_g

0xccd0,	// (0x000202c0) graphic2_pages_pane_t1_ParamLimits

0xccd0,	// (0x000202c0) graphic2_pages_pane_t1

0xcce8,	// (0x000202d8) cell_graphic2_control_pane_ParamLimits

0xcce8,	// (0x000202d8) cell_graphic2_control_pane

0xcd02,	// (0x000202f2) cell_graphic2_pane_g1_ParamLimits

0xcd02,	// (0x000202f2) cell_graphic2_pane_g1

0x2a7b,	// (0x0001606b) cell_graphic2_pane_g2_ParamLimits

0x2a7b,	// (0x0001606b) cell_graphic2_pane_g2

0xcd0f,	// (0x000202ff) cell_graphic2_pane_g3_ParamLimits

0xcd0f,	// (0x000202ff) cell_graphic2_pane_g3

0x2a88,	// (0x00016078) cell_graphic2_pane_g4_ParamLimits

0x2a88,	// (0x00016078) cell_graphic2_pane_g4

0xcd1c,	// (0x0002030c) cell_graphic2_pane_g5_ParamLimits

0xcd1c,	// (0x0002030c) cell_graphic2_pane_g5

0x0004,

0xfd8d,	// (0x0002337d) cell_graphic2_pane_g_ParamLimits

0xfd8d,	// (0x0002337d) cell_graphic2_pane_g

0xcd3c,	// (0x0002032c) cell_graphic2_pane_t1_ParamLimits

0xcd3c,	// (0x0002032c) cell_graphic2_pane_t1

0x11b5,	// (0x000147a5) grid_highlight_pane_cp11_ParamLimits

0x11b5,	// (0x000147a5) grid_highlight_pane_cp11

0xd993,	// (0x00020f83) bg_button_pane_cp05

0xcd71,	// (0x00020361) cell_graphic2_control_pane_g1

0x24e6,	// (0x00015ad6) bg_touch_area_indi_pane_g1

0x7b0b,	// (0x0001b0fb) aid_cmod_rocker_key_size

0x7b15,	// (0x0001b105) aid_cmode_itu_key_size

0x7b1f,	// (0x0001b10f) main_cmode_video_pane

0x7b27,	// (0x0001b117) main_comp_mode_itu_pane

0x7b31,	// (0x0001b121) main_comp_mode_rocker_pane

0x7b39,	// (0x0001b129) cell_cmode_rocker_pane_ParamLimits

0x7b39,	// (0x0001b129) cell_cmode_rocker_pane

0x7b4b,	// (0x0001b13b) cell_cmode_itu_pane_ParamLimits

0x7b4b,	// (0x0001b13b) cell_cmode_itu_pane

0xd993,	// (0x00020f83) bg_button_pane_cp06_ParamLimits

0xd993,	// (0x00020f83) bg_button_pane_cp06

0x2722,	// (0x00015d12) cell_cmode_rocker_pane_g1_ParamLimits

0x2722,	// (0x00015d12) cell_cmode_rocker_pane_g1

0x6c4a,	// (0x0001a23a) cell_cmode_rocker_pane_g2_ParamLimits

0x6c4a,	// (0x0001a23a) cell_cmode_rocker_pane_g2

0x0001,

0xfd9d,	// (0x0002338d) cell_cmode_rocker_pane_g_ParamLimits

0xfd9d,	// (0x0002338d) cell_cmode_rocker_pane_g

0xd303,	// (0x000208f3) bg_button_pane_cp07

0x7b60,	// (0x0001b150) cell_cmode_itu_pane_g1

0x7b69,	// (0x0001b159) cell_cmode_itu_pane_t1

0x7b77,	// (0x0001b167) cell_cmode_itu_pane_t2

0x0001,

0xfda2,	// (0x00023392) cell_cmode_itu_pane_t

0x6e62,	// (0x0001a452) aid_touch_ctrl_left

0x6e6a,	// (0x0001a45a) aid_touch_ctrl_right

0xd303,	// (0x000208f3) compa_mode_pane

0xcd7e,	// (0x0002036e) aid_cmod_rocker_key_size_cp

0xcd88,	// (0x00020378) aid_cmode_itu_key_size_cp

0x7b99,	// (0x0001b189) compa_mode_pane_g1

0x7ba1,	// (0x0001b191) compa_mode_pane_g2

0x7ba9,	// (0x0001b199) compa_mode_pane_g3

0x0002,

0xfda7,	// (0x00023397) compa_mode_pane_g

0xcd92,	// (0x00020382) main_comp_mode_itu_pane_cp

0xcd9c,	// (0x0002038c) main_comp_mode_rocker_pane_cp

0xcda6,	// (0x00020396) cell_cmode_itu_pane_cp_ParamLimits

0xcda6,	// (0x00020396) cell_cmode_itu_pane_cp

0xcdbb,	// (0x000203ab) cell_cmode_rocker_pane_cp_ParamLimits

0xcdbb,	// (0x000203ab) cell_cmode_rocker_pane_cp

0xd993,	// (0x00020f83) bg_button_pane_cp06_cp_ParamLimits

0xd993,	// (0x00020f83) bg_button_pane_cp06_cp

0x2722,	// (0x00015d12) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x2722,	// (0x00015d12) cell_cmode_rocker_pane_g1_cp

0x24e6,	// (0x00015ad6) cell_cmode_rocker_pane_g2_cp

0xd303,	// (0x000208f3) bg_button_pane_cp07_cp

0xcdcd,	// (0x000203bd) cell_cmode_itu_pane_g1_cp

0xcdd6,	// (0x000203c6) cell_cmode_itu_pane_t1_cp

0xcde4,	// (0x000203d4) cell_cmode_itu_pane_t2_cp

0xb8b3,	// (0x0001eea3) settings_code_pane_cp2

0xd3f3,	// (0x000209e3) bg_popup_window_pane_cp3_ParamLimits

0xd72a,	// (0x00020d1a) heading_pane_cp3_ParamLimits

0xd736,	// (0x00020d26) listscroll_popup_graphic_pane_ParamLimits

0x60c5,	// (0x000196b5) fep_hwr_aid_pane_ParamLimits

0x6b4e,	// (0x0001a13e) aid_touch_sctrl_top_ParamLimits

0x6b5b,	// (0x0001a14b) sctrl_sk_top_pane_g1_ParamLimits

0x2722,	// (0x00015d12) sctrl_sk_top_pane_g2_ParamLimits

0xfcdd,	// (0x000232cd) sctrl_sk_top_pane_g_ParamLimits

0x6b68,	// (0x0001a158) sctrl_sk_top_pane_t1_ParamLimits

0x6b4e,	// (0x0001a13e) aid_touch_sctrl_bottom_ParamLimits

0x6b68,	// (0x0001a158) sctrl_sk_bottom_pane_t1_ParamLimits

0x6dac,	// (0x0001a39c) aid_area_touch_clock

0xc913,	// (0x0001ff03) aid_vkb2_area_top_pane_cell_ParamLimits

0xc913,	// (0x0001ff03) aid_vkb2_area_top_pane_cell

0xc9be,	// (0x0001ffae) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc9be,	// (0x0001ffae) aid_vkb2_area_bottom_pane_cell

0x7681,	// (0x0001ac71) popup_char_count_window

0x7c0d,	// (0x0001b1fd) popup_char_count_window_g1

0x7c16,	// (0x0001b206) popup_char_count_window_g2

0x7c1f,	// (0x0001b20f) popup_char_count_window_g3

0x0002,

0xfdae,	// (0x0002339e) popup_char_count_window_g

0x7c28,	// (0x0001b218) popup_char_count_window_t1

0x7339,	// (0x0001a929) popup_fep_char_preview_window_ParamLimits

0x7339,	// (0x0001a929) popup_fep_char_preview_window

0xc933,	// (0x0001ff23) vkb2_top_candi_pane_ParamLimits

0xc933,	// (0x0001ff23) vkb2_top_candi_pane

0xcdf2,	// (0x000203e2) cell_vkb2_top_candi_pane_ParamLimits

0xcdf2,	// (0x000203e2) cell_vkb2_top_candi_pane

0xefb6,	// (0x000225a6) bg_popup_fep_char_preview_window_ParamLimits

0xefb6,	// (0x000225a6) bg_popup_fep_char_preview_window

0x7c6f,	// (0x0001b25f) popup_fep_char_preview_window_t1_ParamLimits

0x7c6f,	// (0x0001b25f) popup_fep_char_preview_window_t1

0x7ca9,	// (0x0001b299) bg_popup_fep_char_preview_window_g1

0x7cb1,	// (0x0001b2a1) bg_popup_fep_char_preview_window_g2

0x7cb9,	// (0x0001b2a9) bg_popup_fep_char_preview_window_g3

0x7cc1,	// (0x0001b2b1) bg_popup_fep_char_preview_window_g4

0x7cc9,	// (0x0001b2b9) bg_popup_fep_char_preview_window_g5

0x7cd1,	// (0x0001b2c1) bg_popup_fep_char_preview_window_g6

0x7cd9,	// (0x0001b2c9) bg_popup_fep_char_preview_window_g7

0x7ce1,	// (0x0001b2d1) bg_popup_fep_char_preview_window_g8

0x7ce9,	// (0x0001b2d9) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdb5,	// (0x000233a5) bg_popup_fep_char_preview_window_g

0x2722,	// (0x00015d12) cell_vkb2_top_candi_pane_g1_ParamLimits

0x2722,	// (0x00015d12) cell_vkb2_top_candi_pane_g1

0x2a2b,	// (0x0001601b) cell_vkb2_top_candi_pane_g2_ParamLimits

0x2a2b,	// (0x0001601b) cell_vkb2_top_candi_pane_g2

0x2a4c,	// (0x0001603c) cell_vkb2_top_candi_pane_g3_ParamLimits

0x2a4c,	// (0x0001603c) cell_vkb2_top_candi_pane_g3

0x7cf1,	// (0x0001b2e1) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7cf1,	// (0x0001b2e1) cell_vkb2_top_candi_pane_g4

0x7d12,	// (0x0001b302) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7d12,	// (0x0001b302) cell_vkb2_top_candi_pane_g5

0x6c4a,	// (0x0001a23a) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6c4a,	// (0x0001a23a) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc8,	// (0x000233b8) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc8,	// (0x000233b8) cell_vkb2_top_candi_pane_g

0x7d33,	// (0x0001b323) cell_vkb2_top_candi_pane_t1

0x1c05,	// (0x000151f5) aid_size_touch_slider_mark_ParamLimits

0x1c05,	// (0x000151f5) aid_size_touch_slider_mark

0xcb90,	// (0x00020180) grid_graphic2_catg_pane_ParamLimits

0xcb90,	// (0x00020180) grid_graphic2_catg_pane

0xcc07,	// (0x000201f7) popup_grid_graphic2_window_t1_ParamLimits

0xcc07,	// (0x000201f7) popup_grid_graphic2_window_t1

0xcc1c,	// (0x0002020c) popup_grid_graphic2_window_t2_ParamLimits

0xcc1c,	// (0x0002020c) popup_grid_graphic2_window_t2

0x0001,

0xfd83,	// (0x00023373) popup_grid_graphic2_window_t_ParamLimits

0xfd83,	// (0x00023373) popup_grid_graphic2_window_t

0xd993,	// (0x00020f83) bg_button_pane_cp05_ParamLimits

0xcd71,	// (0x00020361) cell_graphic2_control_pane_g1_ParamLimits

0x6e28,	// (0x0001a418) cell_graphic2_catg_pane_ParamLimits

0x6e28,	// (0x0001a418) cell_graphic2_catg_pane

0xd303,	// (0x000208f3) bg_button_pane_cp12

0xce3c,	// (0x0002042c) cell_graphic2_catg_pane_g1

0x6d78,	// (0x0001a368) cell_tb_ext_pane_t1_ParamLimits

0x7711,	// (0x0001ad01) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7711,	// (0x0001ad01) vkb2_top_cell_right_narrow_pane

0x7729,	// (0x0001ad19) vkb2_top_cell_right_wide_pane_ParamLimits

0x7729,	// (0x0001ad19) vkb2_top_cell_right_wide_pane

0x2507,	// (0x00015af7) bg_vkb2_func_pane_ParamLimits

0x2507,	// (0x00015af7) bg_vkb2_func_pane

0x779a,	// (0x0001ad8a) vkb2_top_cell_left_pane_g1_ParamLimits

0x2507,	// (0x00015af7) bg_vkb2_fuc_pane_cp03_ParamLimits

0x2507,	// (0x00015af7) bg_vkb2_fuc_pane_cp03

0x780f,	// (0x0001adff) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xea1b,	// (0x0002200b) bg_vkb2_func_pane_g1

0xea23,	// (0x00022013) bg_vkb2_func_pane_g2

0xea33,	// (0x00022023) bg_vkb2_func_pane_g3

0xea2b,	// (0x0002201b) bg_vkb2_func_pane_g4

0xea3b,	// (0x0002202b) bg_vkb2_func_pane_g5

0xea43,	// (0x00022033) bg_vkb2_func_pane_g6

0xea4b,	// (0x0002203b) bg_vkb2_func_pane_g7

0xea53,	// (0x00022043) bg_vkb2_func_pane_g8

0xea13,	// (0x00022003) bg_vkb2_func_pane_g9

0x0008,

0xfdd5,	// (0x000233c5) bg_vkb2_func_pane_g

0x2507,	// (0x00015af7) bg_vkb2_fuc_pane_cp01_ParamLimits

0x2507,	// (0x00015af7) bg_vkb2_fuc_pane_cp01

0x779a,	// (0x0001ad8a) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x779a,	// (0x0001ad8a) vkb2_top_cell_right_wide_pane_g1

0x2507,	// (0x00015af7) bg_vkb2_fuc_pane_cp02_ParamLimits

0x2507,	// (0x00015af7) bg_vkb2_fuc_pane_cp02

0x780f,	// (0x0001adff) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x780f,	// (0x0001adff) vkb2_top_cell_right_narrow_pane_g1

0xc0f0,	// (0x0001f6e0) aid_touch_area_decrease_ParamLimits

0xc0f0,	// (0x0001f6e0) aid_touch_area_decrease

0xc11e,	// (0x0001f70e) aid_touch_area_increase_ParamLimits

0xc11e,	// (0x0001f70e) aid_touch_area_increase

0xc146,	// (0x0001f736) aid_touch_area_mute_ParamLimits

0xc146,	// (0x0001f736) aid_touch_area_mute

0xc16e,	// (0x0001f75e) aid_touch_area_slider_ParamLimits

0xc16e,	// (0x0001f75e) aid_touch_area_slider

0xc1ae,	// (0x0001f79e) popup_slider_window_g4_ParamLimits

0xc1ae,	// (0x0001f79e) popup_slider_window_g4

0xc1d6,	// (0x0001f7c6) popup_slider_window_g5_ParamLimits

0xc1d6,	// (0x0001f7c6) popup_slider_window_g5

0xc20a,	// (0x0001f7fa) popup_slider_window_g6_ParamLimits

0xc20a,	// (0x0001f7fa) popup_slider_window_g6

0x6a90,	// (0x0001a080) popup_slider_window_t2_ParamLimits

0x6a90,	// (0x0001a080) popup_slider_window_t2

0x0001,

0xfcd1,	// (0x000232c1) popup_slider_window_t_ParamLimits

0xfcd1,	// (0x000232c1) popup_slider_window_t

0xc226,	// (0x0001f816) slider_pane_ParamLimits

0xc226,	// (0x0001f816) slider_pane

0x7d64,	// (0x0001b354) slider_pane_g1_ParamLimits

0x7d64,	// (0x0001b354) slider_pane_g1

0x7d78,	// (0x0001b368) slider_pane_g2_ParamLimits

0x7d78,	// (0x0001b368) slider_pane_g2

0x7d8e,	// (0x0001b37e) slider_pane_g3_ParamLimits

0x7d8e,	// (0x0001b37e) slider_pane_g3

0x0003,

0xfde8,	// (0x000233d8) slider_pane_g_ParamLimits

0xfde8,	// (0x000233d8) slider_pane_g

0xaf4b,	// (0x0001e53b) popup_tb_float_extension_window_ParamLimits

0xaf4b,	// (0x0001e53b) popup_tb_float_extension_window

0x7dba,	// (0x0001b3aa) aid_size_cell_tb_float_ext

0xd303,	// (0x000208f3) bg_popup_sub_window_cp28

0x7dc5,	// (0x0001b3b5) grid_tb_float_ext_pane

0x7dcd,	// (0x0001b3bd) cell_tb_float_ext_pane_ParamLimits

0x7dcd,	// (0x0001b3bd) cell_tb_float_ext_pane

0x7de5,	// (0x0001b3d5) cell_tb_float_ext_pane_g1

0x7dee,	// (0x0001b3de) grid_highlight_pane_cp12

0xbc5c,	// (0x0001f24c) cell_last_hwr_side_pane_ParamLimits

0xbc5c,	// (0x0001f24c) cell_last_hwr_side_pane

0x24e6,	// (0x00015ad6) cell_last_hwr_side_pane_g1

0x7df7,	// (0x0001b3e7) cell_last_hwr_side_pane_g2

0x0001,

0xfdf1,	// (0x000233e1) cell_last_hwr_side_pane_g

0xca92,	// (0x00020082) vkb2_area_bottom_space_btn_pane_ParamLimits

0xca92,	// (0x00020082) vkb2_area_bottom_space_btn_pane

0x2722,	// (0x00015d12) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x78de,	// (0x0001aece) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7d33,	// (0x0001b323) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7e00,	// (0x0001b3f0) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7e00,	// (0x0001b3f0) vkb2_area_bottom_space_btn_pane_g1

0x7e36,	// (0x0001b426) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7e36,	// (0x0001b426) vkb2_area_bottom_space_btn_pane_g2

0x7e6c,	// (0x0001b45c) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7e6c,	// (0x0001b45c) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf6,	// (0x000233e6) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf6,	// (0x000233e6) vkb2_area_bottom_space_btn_pane_g

0x6166,	// (0x00019756) cel_fep_hwr_func_pane_ParamLimits

0x6166,	// (0x00019756) cel_fep_hwr_func_pane

0xbc31,	// (0x0001f221) cell_hwr_side_button_pane_ParamLimits

0xbc31,	// (0x0001f221) cell_hwr_side_button_pane

0x6dac,	// (0x0001a39c) aid_area_touch_clock_ParamLimits

0xd552,	// (0x00020b42) bg_uniindi_top_pane_ParamLimits

0x6dbe,	// (0x0001a3ae) uniindi_top_pane_g1_ParamLimits

0x6dd4,	// (0x0001a3c4) uniindi_top_pane_g2_ParamLimits

0x6de0,	// (0x0001a3d0) uniindi_top_pane_g3_ParamLimits

0x6df1,	// (0x0001a3e1) uniindi_top_pane_g4_ParamLimits

0xfd09,	// (0x000232f9) uniindi_top_pane_g_ParamLimits

0x6dfe,	// (0x0001a3ee) uniindi_top_pane_t1_ParamLimits

0xd552,	// (0x00020b42) bg_vkb2_func_pane_cp01_ParamLimits

0xd552,	// (0x00020b42) bg_vkb2_func_pane_cp01

0x7eb2,	// (0x0001b4a2) cel_fep_hwr_func_pane_g1_ParamLimits

0x7eb2,	// (0x0001b4a2) cel_fep_hwr_func_pane_g1

0xd552,	// (0x00020b42) bg_vkb2_func_pane_cp02_ParamLimits

0xd552,	// (0x00020b42) bg_vkb2_func_pane_cp02

0x7eb2,	// (0x0001b4a2) cell_hwr_side_button_pane_g1_ParamLimits

0x7eb2,	// (0x0001b4a2) cell_hwr_side_button_pane_g1

0xe937,	// (0x00021f27) status_pane_g4_ParamLimits

0xe937,	// (0x00021f27) status_pane_g4

0xe94f,	// (0x00021f3f) status_pane_t1

0x2374,	// (0x00015964) form2_midp_gauge_slider_cont_pane

0x237c,	// (0x0001596c) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbb85,	// (0x0001f175) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbb97,	// (0x0001f187) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfadc,	// (0x000230cc) form2_midp_gauge_slider_pane_t_ParamLimits

0x238e,	// (0x0001597e) form2_midp_slider_pane_ParamLimits

0x72f9,	// (0x0001a8e9) aid_size_cell_func_vkb2_ParamLimits

0x72f9,	// (0x0001a8e9) aid_size_cell_func_vkb2

0x7da6,	// (0x0001b396) slider_pane_g4_ParamLimits

0x7da6,	// (0x0001b396) slider_pane_g4

0xce45,	// (0x00020435) form2_midp_gauge_slider_pane_t2_cp01

0xce53,	// (0x00020443) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xce53,	// (0x00020443) form2_midp_gauge_slider_pane_t3_cp01

0x7eeb,	// (0x0001b4db) form2_midp_slider_pane_cp01

0xd303,	// (0x000208f3) navi_smil_pane

0x7f1f,	// (0x0001b50f) navi_smil_pane_g1

0x7f27,	// (0x0001b517) navi_smil_pane_t1

0x7ef4,	// (0x0001b4e4) form2_midp_slider_pane_g1

0x7efd,	// (0x0001b4ed) form2_midp_slider_pane_g2

0x7f05,	// (0x0001b4f5) form2_midp_slider_pane_g3

0x7ef4,	// (0x0001b4e4) form2_midp_slider_pane_g4

0xce70,	// (0x00020460) form2_midp_slider_pane_g5

0x0004,

0xfdff,	// (0x000233ef) form2_midp_slider_pane_g

0x7ea2,	// (0x0001b492) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7ea2,	// (0x0001b492) vkb2_area_bottom_space_btn_pane_g4

0xb0ed,	// (0x0001e6dd) lc0_navi_pane_ParamLimits

0xb0ed,	// (0x0001e6dd) lc0_navi_pane

0xb157,	// (0x0001e747) lc0_stat_indi_pane_ParamLimits

0xb157,	// (0x0001e747) lc0_stat_indi_pane

0xb16c,	// (0x0001e75c) ls0_title_pane_ParamLimits

0xb16c,	// (0x0001e75c) ls0_title_pane

0xd993,	// (0x00020f83) bg_popup_sub_pane_cp14_ParamLimits

0x6d93,	// (0x0001a383) list_uniindi_pane_ParamLimits

0x6d9f,	// (0x0001a38f) uniindi_top_pane_ParamLimits

0x6e3a,	// (0x0001a42a) list_single_uniindi_pane_g1_ParamLimits

0x6e4d,	// (0x0001a43d) list_single_uniindi_pane_t1_ParamLimits

0xce79,	// (0x00020469) lc0_stat_clock_pane_ParamLimits

0xce79,	// (0x00020469) lc0_stat_clock_pane

0xce86,	// (0x00020476) lc0_stat_indi_pane_g1_ParamLimits

0xce86,	// (0x00020476) lc0_stat_indi_pane_g1

0xce93,	// (0x00020483) lc0_stat_indi_pane_g2_ParamLimits

0xce93,	// (0x00020483) lc0_stat_indi_pane_g2

0x0001,

0xfe0a,	// (0x000233fa) lc0_stat_indi_pane_g_ParamLimits

0xfe0a,	// (0x000233fa) lc0_stat_indi_pane_g

0xcea0,	// (0x00020490) lc0_uni_indicator_pane_ParamLimits

0xcea0,	// (0x00020490) lc0_uni_indicator_pane

0x7f69,	// (0x0001b559) ls0_title_pane_g1_ParamLimits

0x7f69,	// (0x0001b559) ls0_title_pane_g1

0xcead,	// (0x0002049d) ls0_title_pane_t1_ParamLimits

0xcead,	// (0x0002049d) ls0_title_pane_t1

0xcedb,	// (0x000204cb) lc0_uni_indicator_pane_g1_ParamLimits

0xcedb,	// (0x000204cb) lc0_uni_indicator_pane_g1

0x7fc5,	// (0x0001b5b5) lc0_stat_clock_pane_t1

0xd303,	// (0x000208f3) main_ai5_pane

0x7fd3,	// (0x0001b5c3) ai5_sk_pane_ParamLimits

0x7fd3,	// (0x0001b5c3) ai5_sk_pane

0xcef0,	// (0x000204e0) cell_ai5_widget_pane_ParamLimits

0xcef0,	// (0x000204e0) cell_ai5_widget_pane

0x8039,	// (0x0001b629) aid_size_cell_widget_grid

0x804b,	// (0x0001b63b) bg_ai5_widget_pane_ParamLimits

0x804b,	// (0x0001b63b) bg_ai5_widget_pane

0xcf71,	// (0x00020561) cell_ai5_widget_pane_g2

0xcf81,	// (0x00020571) cell_ai5_widget_pane_g3

0xcfa0,	// (0x00020590) cell_ai5_widget_pane_g4

0xcfac,	// (0x0002059c) cell_ai5_widget_pane_g5

0xcfb8,	// (0x000205a8) cell_ai5_widget_pane_g6

0xcfc4,	// (0x000205b4) cell_ai5_widget_pane_g7

0xd00c,	// (0x000205fc) cell_ai5_widget_pane_t1_ParamLimits

0xd00c,	// (0x000205fc) cell_ai5_widget_pane_t1

0xd029,	// (0x00020619) cell_ai5_widget_pane_t2_ParamLimits

0xd029,	// (0x00020619) cell_ai5_widget_pane_t2

0xd041,	// (0x00020631) cell_ai5_widget_pane_t3_ParamLimits

0xd041,	// (0x00020631) cell_ai5_widget_pane_t3

0xd059,	// (0x00020649) cell_ai5_widget_pane_t4_ParamLimits

0xd059,	// (0x00020649) cell_ai5_widget_pane_t4

0xd073,	// (0x00020663) cell_ai5_widget_pane_t5_ParamLimits

0xd073,	// (0x00020663) cell_ai5_widget_pane_t5

0x8194,	// (0x0001b784) cell_ai5_widget_pane_t6_ParamLimits

0x8194,	// (0x0001b784) cell_ai5_widget_pane_t6

0x81a6,	// (0x0001b796) cell_ai5_widget_pane_t7_ParamLimits

0x81a6,	// (0x0001b796) cell_ai5_widget_pane_t7

0xd092,	// (0x00020682) cell_ai5_widget_pane_t8_ParamLimits

0xd092,	// (0x00020682) cell_ai5_widget_pane_t8

0x0009,

0xfe24,	// (0x00023414) cell_ai5_widget_pane_t_ParamLimits

0xfe24,	// (0x00023414) cell_ai5_widget_pane_t

0xd0dd,	// (0x000206cd) grid_ai5_widget_pane

0xd993,	// (0x00020f83) highlight_cell_ai5_widget_pane_ParamLimits

0xd993,	// (0x00020f83) highlight_cell_ai5_widget_pane

0xd0f1,	// (0x000206e1) ai5_sk_left_pane

0xd0fb,	// (0x000206eb) ai5_sk_middle_pane

0xd105,	// (0x000206f5) ai5_sk_right_pane

0x823c,	// (0x0001b82c) bg_ai5_widget_pane_g1_ParamLimits

0x823c,	// (0x0001b82c) bg_ai5_widget_pane_g1

0x8248,	// (0x0001b838) bg_ai5_widget_pane_g2_ParamLimits

0x8248,	// (0x0001b838) bg_ai5_widget_pane_g2

0x8254,	// (0x0001b844) bg_ai5_widget_pane_g3_ParamLimits

0x8254,	// (0x0001b844) bg_ai5_widget_pane_g3

0x8260,	// (0x0001b850) bg_ai5_widget_pane_g4_ParamLimits

0x8260,	// (0x0001b850) bg_ai5_widget_pane_g4

0x826c,	// (0x0001b85c) bg_ai5_widget_pane_g5_ParamLimits

0x826c,	// (0x0001b85c) bg_ai5_widget_pane_g5

0x8278,	// (0x0001b868) bg_ai5_widget_pane_g6_ParamLimits

0x8278,	// (0x0001b868) bg_ai5_widget_pane_g6

0x8284,	// (0x0001b874) bg_ai5_widget_pane_g7_ParamLimits

0x8284,	// (0x0001b874) bg_ai5_widget_pane_g7

0x8290,	// (0x0001b880) bg_ai5_widget_pane_g8_ParamLimits

0x8290,	// (0x0001b880) bg_ai5_widget_pane_g8

0x829c,	// (0x0001b88c) bg_ai5_widget_pane_g9_ParamLimits

0x829c,	// (0x0001b88c) bg_ai5_widget_pane_g9

0x0008,

0xfe39,	// (0x00023429) bg_ai5_widget_pane_g_ParamLimits

0xfe39,	// (0x00023429) bg_ai5_widget_pane_g

0x82ce,	// (0x0001b8be) cell_shortcut_ai5_widget_pane_ParamLimits

0x82ce,	// (0x0001b8be) cell_shortcut_ai5_widget_pane

0xd45b,	// (0x00020a4b) bg_cell_shortcut_ai5_widget_pane

0x82da,	// (0x0001b8ca) cell_grid_ai5_widget_pane_g1

0x82e3,	// (0x0001b8d3) highlight_cell_shortcut_ai5_widget_pane

0xea23,	// (0x00022013) ai5_sk_left_pane_g1

0x82eb,	// (0x0001b8db) ai5_sk_left_pane_g2

0x82f3,	// (0x0001b8e3) ai5_sk_left_pane_g3

0x82fb,	// (0x0001b8eb) ai5_sk_left_pane_g4

0x0003,

0xfe4c,	// (0x0002343c) ai5_sk_left_pane_g

0x8303,	// (0x0001b8f3) ai5_sk_left_pane_t1

0xea1b,	// (0x0002200b) ai5_sk_right_pane_g1

0x8311,	// (0x0001b901) ai5_sk_right_pane_g2

0x8319,	// (0x0001b909) ai5_sk_right_pane_g3

0x8321,	// (0x0001b911) ai5_sk_right_pane_g4

0x0003,

0xfe55,	// (0x00023445) ai5_sk_right_pane_g

0x8329,	// (0x0001b919) ai5_sk_right_pane_t1

0xea1b,	// (0x0002200b) ai5_sk_middle_pane_g1

0xea23,	// (0x00022013) ai5_sk_middle_pane_g2

0xea3b,	// (0x0002202b) ai5_sk_middle_pane_g3

0x8319,	// (0x0001b909) ai5_sk_middle_pane_g4

0x82f3,	// (0x0001b8e3) ai5_sk_middle_pane_g5

0x8337,	// (0x0001b927) ai5_sk_middle_pane_g6

0xd10f,	// (0x000206ff) ai5_sk_middle_pane_g7

0x0006,

0xfe5e,	// (0x0002344e) ai5_sk_middle_pane_g

0xafeb,	// (0x0001e5db) aid_touch_area_size_lc0_ParamLimits

0xafeb,	// (0x0001e5db) aid_touch_area_size_lc0

0x63c9,	// (0x000199b9) cell_hwr_candidate_pane_t1_ParamLimits

0xe86c,	// (0x00021e5c) aid_touch_navi_pane

0xb258,	// (0x0001e848) status_dt_navi_pane_ParamLimits

0xb258,	// (0x0001e848) status_dt_navi_pane

0xb270,	// (0x0001e860) status_dt_sta_pane_ParamLimits

0xb270,	// (0x0001e860) status_dt_sta_pane

0xd117,	// (0x00020707) dt_sta_controll_pane

0xd124,	// (0x00020714) dt_sta_indi_pane

0xd131,	// (0x00020721) dt_sta_title_pane

0xd552,	// (0x00020b42) bg_dt_sta_indi_pane_ParamLimits

0xd552,	// (0x00020b42) bg_dt_sta_indi_pane

0xd143,	// (0x00020733) dt_sta_battery_pane

0xd14b,	// (0x0002073b) dt_sta_indi_pane_g1

0xd154,	// (0x00020744) dt_sta_indi_pane_g2

0xd15d,	// (0x0002074d) dt_sta_indi_pane_g3

0x0002,

0xfe6d,	// (0x0002345d) dt_sta_indi_pane_g

0xd166,	// (0x00020756) dt_sta_signal_pane

0xd993,	// (0x00020f83) bg_dt_sta_title_pane_ParamLimits

0xd993,	// (0x00020f83) bg_dt_sta_title_pane

0xd16f,	// (0x0002075f) dt_sta_title_pane_g1

0xd177,	// (0x00020767) dt_sta_title_pane_t1_ParamLimits

0xd177,	// (0x00020767) dt_sta_title_pane_t1

0xd303,	// (0x000208f3) bg_dt_sta_control_pane

0xd18c,	// (0x0002077c) dt_sta_controll_pane_g1

0xd195,	// (0x00020785) bg_dt_sta_title_pane_g1

0xd19e,	// (0x0002078e) bg_dt_sta_title_pane_g2

0xd1a7,	// (0x00020797) bg_dt_sta_title_pane_g3

0x0002,

0xfe74,	// (0x00023464) bg_dt_sta_title_pane_g

0x24e6,	// (0x00015ad6) bg_dt_sta_indi_pane_g1

0xd1b0,	// (0x000207a0) dt_sta_signal_pane_g1

0xd1b8,	// (0x000207a8) dt_sta_signal_pane_g2

0x0001,

0xfe7b,	// (0x0002346b) dt_sta_signal_pane_g

0x83f5,	// (0x0001b9e5) dt_sta_battery_pane_g1

0x83fe,	// (0x0001b9ee) dt_sta_battery_pane_t1

0x24e6,	// (0x00015ad6) bg_dt_sta_control_pane_g1

0xe0cd,	// (0x000216bd) fep_china_uni_eep_pane

0xe0d5,	// (0x000216c5) fep_china_uni_entry_pane_ParamLimits

0xe0e5,	// (0x000216d5) popup_fep_china_uni_window_g1_ParamLimits

0xe0f5,	// (0x000216e5) popup_fep_china_uni_window_g2_ParamLimits

0xe0f5,	// (0x000216e5) popup_fep_china_uni_window_g2

0x0001,

0xf735,	// (0x00022d25) popup_fep_china_uni_window_g_ParamLimits

0xf735,	// (0x00022d25) popup_fep_china_uni_window_g

0x840d,	// (0x0001b9fd) fep_china_uni_eep_pane_g1

0x8415,	// (0x0001ba05) fep_china_uni_eep_pane_t1

0x7f16,	// (0x0001b506) aid_touch_area_size_smil_player

0xe90a,	// (0x00021efa) lc0_clock_pane

0xe943,	// (0x00021f33) status_pane_g5_ParamLimits

0xe943,	// (0x00021f33) status_pane_g5

0xab7f,	// (0x0001e16f) popup_keymap_window

0xe923,	// (0x00021f13) status_icon_pane

0xcf81,	// (0x00020571) cell_ai5_widget_pane_g3_ParamLimits

0xcfa0,	// (0x00020590) cell_ai5_widget_pane_g4_ParamLimits

0xcfac,	// (0x0002059c) cell_ai5_widget_pane_g5_ParamLimits

0xcfd0,	// (0x000205c0) cell_ai5_widget_pane_g8_ParamLimits

0xcfd0,	// (0x000205c0) cell_ai5_widget_pane_g8

0xcfe4,	// (0x000205d4) cell_ai5_widget_pane_g9_ParamLimits

0xcfe4,	// (0x000205d4) cell_ai5_widget_pane_g9

0xcff8,	// (0x000205e8) cell_ai5_widget_pane_g10_ParamLimits

0xcff8,	// (0x000205e8) cell_ai5_widget_pane_g10

0x8424,	// (0x0001ba14) status_icon_pane_g1

0xd303,	// (0x000208f3) bg_popup_sub_pane_cp13

0x842c,	// (0x0001ba1c) popup_keymap_window_t1

0xa8f0,	// (0x0001dee0) control_pane_g6_ParamLimits

0xa8f0,	// (0x0001dee0) control_pane_g6

0xa8fd,	// (0x0001deed) control_pane_g7_ParamLimits

0xa8fd,	// (0x0001deed) control_pane_g7

0xa90a,	// (0x0001defa) control_pane_g8_ParamLimits

0xa90a,	// (0x0001defa) control_pane_g8

0xd117,	// (0x00020707) dt_sta_controll_pane_ParamLimits

0xd124,	// (0x00020714) dt_sta_indi_pane_ParamLimits

0xd131,	// (0x00020721) dt_sta_title_pane_ParamLimits

0xd8e4,	// (0x00020ed4) aid_size_touch_scroll_bar_cale

0x4ff1,	// (0x000185e1) popup_discreet_window_ParamLimits

0x4ff1,	// (0x000185e1) popup_discreet_window

0xa167,	// (0x0001d757) popup_sk_window

0xefb6,	// (0x000225a6) bg_popup_sub_pane_cp28_ParamLimits

0xefb6,	// (0x000225a6) bg_popup_sub_pane_cp28

0x843a,	// (0x0001ba2a) popup_discreet_window_g1_ParamLimits

0x843a,	// (0x0001ba2a) popup_discreet_window_g1

0x845a,	// (0x0001ba4a) popup_discreet_window_t1_ParamLimits

0x845a,	// (0x0001ba4a) popup_discreet_window_t1

0x8478,	// (0x0001ba68) popup_discreet_window_t2_ParamLimits

0x8478,	// (0x0001ba68) popup_discreet_window_t2

0x0002,

0xfe80,	// (0x00023470) popup_discreet_window_t_ParamLimits

0xfe80,	// (0x00023470) popup_discreet_window_t

0x84ca,	// (0x0001baba) popup_sk_window_g1

0x84d3,	// (0x0001bac3) popup_sk_window_g2

0x0001,

0xfe87,	// (0x00023477) popup_sk_window_g

0x84dc,	// (0x0001bacc) popup_sk_window_t1

0x84ea,	// (0x0001bada) popup_sk_window_t1_copy1

0xcf71,	// (0x00020561) cell_ai5_widget_pane_g2_ParamLimits

0xd0a4,	// (0x00020694) cell_ai5_widget_pane_t9_ParamLimits

0xd0a4,	// (0x00020694) cell_ai5_widget_pane_t9

0xd303,	// (0x000208f3) main_fep_fshwr2_pane

0xd1c0,	// (0x000207b0) aid_fshwr2_btn_pane

0xd1c8,	// (0x000207b8) aid_fshwr2_syb_pane

0xd1d0,	// (0x000207c0) aid_fshwr2_txt_pane

0xd1d8,	// (0x000207c8) fshwr2_func_candi_pane

0xd1e0,	// (0x000207d0) fshwr2_hwr_syb_pane

0xd1e8,	// (0x000207d8) fshwr2_icf_pane

0xd303,	// (0x000208f3) fshwr2_icf_bg_pane

0xd1f0,	// (0x000207e0) fshwr2_icf_pane_t1_ParamLimits

0xd1f0,	// (0x000207e0) fshwr2_icf_pane_t1

0x24e6,	// (0x00015ad6) fshwr2_func_candi_pane_g1

0x8551,	// (0x0001bb41) fshwr2_func_candi_row_pane_ParamLimits

0x8551,	// (0x0001bb41) fshwr2_func_candi_row_pane

0xd208,	// (0x000207f8) cell_fshwr2_syb_pane_ParamLimits

0xd208,	// (0x000207f8) cell_fshwr2_syb_pane

0x2722,	// (0x00015d12) fshwr2_hwr_syb_pane_g1_ParamLimits

0x2722,	// (0x00015d12) fshwr2_hwr_syb_pane_g1

0xd303,	// (0x000208f3) bg_popup_call_pane_cp01

0x8579,	// (0x0001bb69) fshwr2_func_candi_cell_pane_ParamLimits

0x8579,	// (0x0001bb69) fshwr2_func_candi_cell_pane

0x85a4,	// (0x0001bb94) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x85a4,	// (0x0001bb94) fshwr2_func_candi_cell_bg_pane

0x85be,	// (0x0001bbae) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x85be,	// (0x0001bbae) fshwr2_func_candi_cell_pane_g1

0x85de,	// (0x0001bbce) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x85de,	// (0x0001bbce) fshwr2_func_candi_cell_pane_t1

0xd303,	// (0x000208f3) bg_button_pane_cp08

0xe4fd,	// (0x00021aed) cell_fshwr2_syb_bg_pane

0xd21f,	// (0x0002080f) cell_fshwr2_syb_bg_pane_g1

0xd227,	// (0x00020817) cell_fshwr2_syb_bg_pane_t1

0xd993,	// (0x00020f83) main_tmo_pane

0xb6c2,	// (0x0001ecb2) uni_indicator_pane_g1_ParamLimits

0xb6d7,	// (0x0001ecc7) uni_indicator_pane_g2_ParamLimits

0xb6ed,	// (0x0001ecdd) uni_indicator_pane_g3_ParamLimits

0x1559,	// (0x00014b49) uni_indicator_pane_g4_ParamLimits

0x1559,	// (0x00014b49) uni_indicator_pane_g4

0x156d,	// (0x00014b5d) uni_indicator_pane_g5_ParamLimits

0x156d,	// (0x00014b5d) uni_indicator_pane_g5

0x1581,	// (0x00014b71) uni_indicator_pane_g6_ParamLimits

0x1581,	// (0x00014b71) uni_indicator_pane_g6

0xf908,	// (0x00022ef8) uni_indicator_pane_g_ParamLimits

0xc0d4,	// (0x0001f6c4) popup_tmo_note_window_ParamLimits

0xc0d4,	// (0x0001f6c4) popup_tmo_note_window

0xd303,	// (0x000208f3) fshwr2_bg_pane

0x85cf,	// (0x0001bbbf) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x85cf,	// (0x0001bbbf) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe8c,	// (0x0002347c) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe8c,	// (0x0002347c) fshwr2_func_candi_cell_pane_g

0x24e6,	// (0x00015ad6) bg_popup_window_pane_cp01

0x8608,	// (0x0001bbf8) bg_popup_window_pane_g1_cp01

0x8611,	// (0x0001bc01) bg_popup_window_pane_cp22_ParamLimits

0x8611,	// (0x0001bc01) bg_popup_window_pane_cp22

0x861f,	// (0x0001bc0f) listscroll_tmo_link_pane_ParamLimits

0x861f,	// (0x0001bc0f) listscroll_tmo_link_pane

0x865f,	// (0x0001bc4f) popup_tmo_note_window_g1_ParamLimits

0x865f,	// (0x0001bc4f) popup_tmo_note_window_g1

0x866c,	// (0x0001bc5c) tmo_note_info_pane_ParamLimits

0x866c,	// (0x0001bc5c) tmo_note_info_pane

0xd236,	// (0x00020826) list_tmo_note_info_pane_g1_ParamLimits

0xd236,	// (0x00020826) list_tmo_note_info_pane_g1

0x869d,	// (0x0001bc8d) list_tmo_note_info_pane_g2_ParamLimits

0x869d,	// (0x0001bc8d) list_tmo_note_info_pane_g2

0x0001,

0xfe91,	// (0x00023481) list_tmo_note_info_pane_g_ParamLimits

0xfe91,	// (0x00023481) list_tmo_note_info_pane_g

0x86b9,	// (0x0001bca9) list_tmo_note_info_text_pane_ParamLimits

0x86b9,	// (0x0001bca9) list_tmo_note_info_text_pane

0x873a,	// (0x0001bd2a) list_tmo_link_pane

0x8747,	// (0x0001bd37) scroll_pane_cp20

0x8754,	// (0x0001bd44) list_single_tmo_link_pane_ParamLimits

0x8754,	// (0x0001bd44) list_single_tmo_link_pane

0x8764,	// (0x0001bd54) list_single_tmo_link_pane_t1

0x8772,	// (0x0001bd62) list_tmo_note_info_text_pane_t1_ParamLimits

0x8772,	// (0x0001bd62) list_tmo_note_info_text_pane_t1

0xda61,	// (0x00021051) aid_size_touch_scroll_bar_cp01_ParamLimits

0xda61,	// (0x00021051) aid_size_touch_scroll_bar_cp01

0x9c88,	// (0x0001d278) aid_size_touch_slider_marker

0xa15b,	// (0x0001d74b) popup_settings_window_ParamLimits

0xa15b,	// (0x0001d74b) popup_settings_window

0x4727,	// (0x00017d17) popup_candi_list_indi_window

0xe86c,	// (0x00021e5c) aid_touch_navi_pane_ParamLimits

0x6b22,	// (0x0001a112) rs_clock_indi_pane

0x6b2b,	// (0x0001a11b) sctrl_sk_bottom_pane_ParamLimits

0x6b3c,	// (0x0001a12c) sctrl_sk_top_pane_ParamLimits

0x7353,	// (0x0001a943) popup_fep_tooltip_window

0x8039,	// (0x0001b629) aid_size_cell_widget_grid_ParamLimits

0xcf65,	// (0x00020555) cell_ai5_widget_pane_g1_ParamLimits

0xcf65,	// (0x00020555) cell_ai5_widget_pane_g1

0xcfb8,	// (0x000205a8) cell_ai5_widget_pane_g6_ParamLimits

0xcfc4,	// (0x000205b4) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe0f,	// (0x000233ff) cell_ai5_widget_pane_g_ParamLimits

0xfe0f,	// (0x000233ff) cell_ai5_widget_pane_g

0xd0c8,	// (0x000206b8) cell_ai5_widget_pane_t10_ParamLimits

0xd0c8,	// (0x000206b8) cell_ai5_widget_pane_t10

0xd0dd,	// (0x000206cd) grid_ai5_widget_pane_ParamLimits

0x82a8,	// (0x0001b898) cell_contacts_ai5_widget_pane_ParamLimits

0x82a8,	// (0x0001b898) cell_contacts_ai5_widget_pane

0x848d,	// (0x0001ba7d) popup_discreet_window_t3_ParamLimits

0x848d,	// (0x0001ba7d) popup_discreet_window_t3

0x8528,	// (0x0001bb18) popup_fshwr2_char_preview_window_ParamLimits

0x8528,	// (0x0001bb18) popup_fshwr2_char_preview_window

0xd24d,	// (0x0002083d) tmo_note_info_pane_t1

0xd262,	// (0x00020852) tmo_note_info_pane_t2

0xd277,	// (0x00020867) tmo_note_info_pane_t3

0x8716,	// (0x0001bd06) tmo_note_info_pane_t4

0x8728,	// (0x0001bd18) tmo_note_info_pane_t5

0x0004,

0xfe96,	// (0x00023486) tmo_note_info_pane_t

0x873a,	// (0x0001bd2a) list_tmo_link_pane_ParamLimits

0x8747,	// (0x0001bd37) scroll_pane_cp20_ParamLimits

0xd303,	// (0x000208f3) bg_popup_fep_char_preview_window_cp01

0x878b,	// (0x0001bd7b) popup_fshwr2_char_preview_window_t1

0x8799,	// (0x0001bd89) popup_candi_list_indi_window_g1

0x87a2,	// (0x0001bd92) bg_cell_contacts_ai5_widget_pane

0x87ae,	// (0x0001bd9e) cell_contacts_ai5_widget_pane_g1

0x87c2,	// (0x0001bdb2) cell_contacts_ai5_widget_pane_g2

0x87d1,	// (0x0001bdc1) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea1,	// (0x00023491) cell_contacts_ai5_widget_pane_g

0x87e4,	// (0x0001bdd4) cell_contacts_ai5_widget_pane_t1

0xd993,	// (0x00020f83) highlight_cell_shortcut_ai5_widget_pane_cp01

0xd2ef,	// (0x000208df) settings_container_pane

0xe4fd,	// (0x00021aed) listscroll_set_pane_copy1

0x1d53,	// (0x00015343) scroll_pane_cp121_copy1

0x8868,	// (0x0001be58) set_content_pane_copy1

0x8870,	// (0x0001be60) aid_height_set_list_copy1_ParamLimits

0x8870,	// (0x0001be60) aid_height_set_list_copy1

0x171a,	// (0x00014d0a) aid_size_parent_copy1_ParamLimits

0x171a,	// (0x00014d0a) aid_size_parent_copy1

0x887c,	// (0x0001be6c) button_value_adjust_pane_cp6_copy1_ParamLimits

0x887c,	// (0x0001be6c) button_value_adjust_pane_cp6_copy1

0xdea5,	// (0x00021495) list_highlight_pane_cp2_copy1_ParamLimits

0xdea5,	// (0x00021495) list_highlight_pane_cp2_copy1

0xdd0c,	// (0x000212fc) list_set_pane_copy1_ParamLimits

0xdd0c,	// (0x000212fc) list_set_pane_copy1

0xd28c,	// (0x0002087c) main_pane_set_t1_copy1_ParamLimits

0xd28c,	// (0x0002087c) main_pane_set_t1_copy1

0xd2c6,	// (0x000208b6) main_pane_set_t2_copy1_ParamLimits

0xd2c6,	// (0x000208b6) main_pane_set_t2_copy1

0x891e,	// (0x0001bf0e) main_pane_set_t3_copy1

0x892c,	// (0x0001bf1c) main_pane_set_t4_copy1

0xd2e3,	// (0x000208d3) set_content_pane_g1_copy1_ParamLimits

0xd2e3,	// (0x000208d3) set_content_pane_g1_copy1

0x893a,	// (0x0001bf2a) setting_code_pane_copy1

0x8942,	// (0x0001bf32) setting_slider_graphic_pane_copy1

0x8942,	// (0x0001bf32) setting_slider_pane_copy1

0x8942,	// (0x0001bf32) setting_text_pane_copy1

0x8942,	// (0x0001bf32) setting_volume_pane_copy1

0x894a,	// (0x0001bf3a) settings_code_pane_cp2_copy1

0x8952,	// (0x0001bf42) settings_code_pane_cp_copy1_ParamLimits

0x8952,	// (0x0001bf42) settings_code_pane_cp_copy1

0xdd9a,	// (0x0002138a) volume_set_pane_copy1

0xdda2,	// (0x00021392) volume_set_pane_g10_copy1

0xddaa,	// (0x0002139a) volume_set_pane_g1_copy1

0xddb2,	// (0x000213a2) volume_set_pane_g2_copy1

0xddba,	// (0x000213aa) volume_set_pane_g3_copy1

0xddc2,	// (0x000213b2) volume_set_pane_g4_copy1

0xddca,	// (0x000213ba) volume_set_pane_g5_copy1

0xddd2,	// (0x000213c2) volume_set_pane_g6_copy1

0xddda,	// (0x000213ca) volume_set_pane_g7_copy1

0xdde2,	// (0x000213d2) volume_set_pane_g8_copy1

0xddea,	// (0x000213da) volume_set_pane_g9_copy1

0xd3f3,	// (0x000209e3) bg_set_opt_pane_cp_copy1_ParamLimits

0xd3f3,	// (0x000209e3) bg_set_opt_pane_cp_copy1

0xd401,	// (0x000209f1) setting_slider_pane_t1_copy1_ParamLimits

0xd401,	// (0x000209f1) setting_slider_pane_t1_copy1

0x89be,	// (0x0001bfae) setting_slider_pane_t2_copy1_ParamLimits

0x89be,	// (0x0001bfae) setting_slider_pane_t2_copy1

0x89d7,	// (0x0001bfc7) setting_slider_pane_t3_copy1_ParamLimits

0x89d7,	// (0x0001bfc7) setting_slider_pane_t3_copy1

0xd417,	// (0x00020a07) slider_set_pane_copy1_ParamLimits

0xd417,	// (0x00020a07) slider_set_pane_copy1

0xd9ee,	// (0x00020fde) set_opt_bg_pane_g1_copy2

0xd9f6,	// (0x00020fe6) set_opt_bg_pane_g2_copy2

0x89ee,	// (0x0001bfde) set_opt_bg_pane_g3_copy2

0xda06,	// (0x00020ff6) set_opt_bg_pane_g4_copy2

0xda0e,	// (0x00020ffe) set_opt_bg_pane_g5_copy2

0xda16,	// (0x00021006) set_opt_bg_pane_g6_copy2

0xddf2,	// (0x000213e2) set_opt_bg_pane_g7_copy2

0x89fe,	// (0x0001bfee) set_opt_bg_pane_g8_copy2

0x8a06,	// (0x0001bff6) set_opt_bg_pane_g9_copy2

0x1c05,	// (0x000151f5) aid_size_touch_slider_mark_copy1_ParamLimits

0x1c05,	// (0x000151f5) aid_size_touch_slider_mark_copy1

0x172c,	// (0x00014d1c) slider_set_pane_g1_copy1

0x1735,	// (0x00014d25) slider_set_pane_g2_copy1

0x1c19,	// (0x00015209) slider_set_pane_g3_copy1_ParamLimits

0x1c19,	// (0x00015209) slider_set_pane_g3_copy1

0x1c2d,	// (0x0001521d) slider_set_pane_g4_copy1_ParamLimits

0x1c2d,	// (0x0001521d) slider_set_pane_g4_copy1

0x1c45,	// (0x00015235) slider_set_pane_g5_copy1_ParamLimits

0x1c45,	// (0x00015235) slider_set_pane_g5_copy1

0x1c19,	// (0x00015209) slider_set_pane_g6_copy1_ParamLimits

0x1c19,	// (0x00015209) slider_set_pane_g6_copy1

0xddfa,	// (0x000213ea) slider_set_pane_g7_copy1_ParamLimits

0xddfa,	// (0x000213ea) slider_set_pane_g7_copy1

0xd38f,	// (0x0002097f) bg_set_opt_pane_cp2_copy1

0xd42d,	// (0x00020a1d) setting_slider_graphic_pane_g1_copy1

0xde10,	// (0x00021400) setting_slider_graphic_pane_t1_copy1

0xde1f,	// (0x0002140f) setting_slider_graphic_pane_t2_copy1

0xde2e,	// (0x0002141e) slider_set_pane_cp_copy1

0x8a52,	// (0x0001c042) input_focus_pane_cp1_copy1

0x8a5b,	// (0x0001c04b) list_set_text_pane_copy1

0x8a63,	// (0x0001c053) setting_text_pane_g1_copy1

0x4e87,	// (0x00018477) set_text_pane_t1_copy1

0x8a52,	// (0x0001c042) input_focus_pane_cp2_copy1

0x8a63,	// (0x0001c053) setting_code_pane_g1_copy1

0x8a6c,	// (0x0001c05c) setting_code_pane_t1_copy1

0xa7ff,	// (0x0001ddef) list_set_graphic_pane_copy1

0xd38f,	// (0x0002097f) bg_set_opt_pane_cp4_copy1

0x8a8e,	// (0x0001c07e) list_set_graphic_pane_g1_copy1_ParamLimits

0x8a8e,	// (0x0001c07e) list_set_graphic_pane_g1_copy1

0x8a9a,	// (0x0001c08a) list_set_graphic_pane_g2_copy1

0xe278,	// (0x00021868) list_set_graphic_pane_t1_copy1_ParamLimits

0xe278,	// (0x00021868) list_set_graphic_pane_t1_copy1

0x24e6,	// (0x00015ad6) rs_clock_indi_pane_g1

0x8aa2,	// (0x0001c092) rs_clock_indi_pane_t1

0x8ab0,	// (0x0001c0a0) rs_indi_pane

0x8ab8,	// (0x0001c0a8) rs_indi_pane_g1

0x8ac1,	// (0x0001c0b1) rs_indi_pane_g2

0x8799,	// (0x0001bd89) rs_indi_pane_g3

0x0002,

0xfea8,	// (0x00023498) rs_indi_pane_g

0xe4fd,	// (0x00021aed) bg_popup_preview_window_pane_cp03

0x8aca,	// (0x0001c0ba) popup_fep_tooltip_window_t1

0x3037,	// (0x00016627) popup_note2_window_g2_ParamLimits

0x3037,	// (0x00016627) popup_note2_window_g2

0x0001,

0xfc48,	// (0x00023238) popup_note2_window_g_ParamLimits

0xfc48,	// (0x00023238) popup_note2_window_g

0x34f7,	// (0x00016ae7) bg_popup_sub_pane_cp11_ParamLimits

0x3504,	// (0x00016af4) cell_ai3_links_pane_g1_ParamLimits

0x351b,	// (0x00016b0b) cell_ai3_links_pane_t1

0x4e87,	// (0x00018477) set_text_pane_t1_copy1_ParamLimits

0xe424,	// (0x00021a14) cell_graphic_popup_pane_cp2_ParamLimits

0xe424,	// (0x00021a14) cell_graphic_popup_pane_cp2

0x8ad8,	// (0x0001c0c8) cell_graphic_popup_pane_g1_cp2

0xd793,	// (0x00020d83) cell_graphic_popup_pane_g2_cp2

0x8ae0,	// (0x0001c0d0) cell_graphic_popup_pane_g3_cp2

0x8ae8,	// (0x0001c0d8) cell_graphic_popup_pane_t2_cp2

0xd7a4,	// (0x00020d94) grid_highlight_pane_cp3_cp2

0xdcd4,	// (0x000212c4) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xd993,	// (0x00020f83) main_tmo_pane_ParamLimits

0xc0cc,	// (0x0001f6bc) popup_tmo_big_image_note_window

0xcf55,	// (0x00020545) cell_ai5_widget_list_pane

0xcf5d,	// (0x0002054d) cell_ai5_widget_lrg_icon_pane

0xd24d,	// (0x0002083d) tmo_note_info_pane_t1_ParamLimits

0xd262,	// (0x00020852) tmo_note_info_pane_t2_ParamLimits

0xd277,	// (0x00020867) tmo_note_info_pane_t3_ParamLimits

0x8716,	// (0x0001bd06) tmo_note_info_pane_t4_ParamLimits

0x8728,	// (0x0001bd18) tmo_note_info_pane_t5_ParamLimits

0xfe96,	// (0x00023486) tmo_note_info_pane_t_ParamLimits

0xd2ef,	// (0x000208df) settings_container_pane_ParamLimits

0x8a4a,	// (0x0001c03a) indicator_popup_pane_cp5

0x8a4a,	// (0x0001c03a) indicator_popup_pane_cp6

0xa7ff,	// (0x0001ddef) list_set_graphic_pane_copy1_ParamLimits

0xd303,	// (0x000208f3) bg_popup_window_pane_cp23

0x8af6,	// (0x0001c0e6) popup_tmo_big_image_note_window_g1

0x8aff,	// (0x0001c0ef) popup_tmo_big_image_note_window_t1

0x8b0d,	// (0x0001c0fd) popup_tmo_big_image_note_window_t2

0x8b1b,	// (0x0001c10b) popup_tmo_big_image_note_window_t3

0x0002,

0xfeaf,	// (0x0002349f) popup_tmo_big_image_note_window_t

0xde36,	// (0x00021426) cell_ai5_widget_lrg_icon_pane_g1

0xde3e,	// (0x0002142e) cell_ai5_widget_lrg_icon_pane_t1

0xde4c,	// (0x0002143c) cell_ai5_widget_list_row_pane_ParamLimits

0xde4c,	// (0x0002143c) cell_ai5_widget_list_row_pane

0xde65,	// (0x00021455) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xde65,	// (0x00021455) cell_ai5_widget_list_row_pane_g1

0xde72,	// (0x00021462) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xde72,	// (0x00021462) cell_ai5_widget_list_row_pane_t1

0xde8a,	// (0x0002147a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xde8a,	// (0x0002147a) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeb6,	// (0x000234a6) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb6,	// (0x000234a6) cell_ai5_widget_list_row_pane_t

0xd303,	// (0x000208f3) main_fep_vtchi_ss_pane

0x8b8f,	// (0x0001c17f) popup_fep_char_pre_window

0x8b97,	// (0x0001c187) popup_fep_ituss_window

0x8bb4,	// (0x0001c1a4) popup_fep_vkbss_window

0x8bd3,	// (0x0001c1c3) grid_vkbss_keypad_pane_ParamLimits

0x8bd3,	// (0x0001c1c3) grid_vkbss_keypad_pane

0x8be3,	// (0x0001c1d3) ituss_keypad_pane

0x8bfc,	// (0x0001c1ec) aid_vkbss_key_offset_ParamLimits

0x8bfc,	// (0x0001c1ec) aid_vkbss_key_offset

0x8c08,	// (0x0001c1f8) cell_vkbss_key_pane_ParamLimits

0x8c08,	// (0x0001c1f8) cell_vkbss_key_pane

0x8c1e,	// (0x0001c20e) bg_cell_vkbss_key_g1_ParamLimits

0x8c1e,	// (0x0001c20e) bg_cell_vkbss_key_g1

0x8c2a,	// (0x0001c21a) cell_vkbss_key_3p_pane_ParamLimits

0x8c2a,	// (0x0001c21a) cell_vkbss_key_3p_pane

0x8c44,	// (0x0001c234) cell_vkbss_key_g1_ParamLimits

0x8c44,	// (0x0001c234) cell_vkbss_key_g1

0x8c5e,	// (0x0001c24e) cell_vkbss_key_t1_ParamLimits

0x8c5e,	// (0x0001c24e) cell_vkbss_key_t1

0x8c89,	// (0x0001c279) cell_ituss_key_pane_ParamLimits

0x8c89,	// (0x0001c279) cell_ituss_key_pane

0x8c99,	// (0x0001c289) bg_cell_ituss_key_g1_ParamLimits

0x8c99,	// (0x0001c289) bg_cell_ituss_key_g1

0x8ca5,	// (0x0001c295) cell_ituss_key_pane_g1_ParamLimits

0x8ca5,	// (0x0001c295) cell_ituss_key_pane_g1

0x8cb1,	// (0x0001c2a1) cell_ituss_key_pane_g2_ParamLimits

0x8cb1,	// (0x0001c2a1) cell_ituss_key_pane_g2

0x0001,

0xfebb,	// (0x000234ab) cell_ituss_key_pane_g_ParamLimits

0xfebb,	// (0x000234ab) cell_ituss_key_pane_g

0x8cca,	// (0x0001c2ba) cell_ituss_key_t1_ParamLimits

0x8cca,	// (0x0001c2ba) cell_ituss_key_t1

0x8cf8,	// (0x0001c2e8) cell_ituss_key_t2_ParamLimits

0x8cf8,	// (0x0001c2e8) cell_ituss_key_t2

0x8d29,	// (0x0001c319) cell_ituss_key_t3_ParamLimits

0x8d29,	// (0x0001c319) cell_ituss_key_t3

0x8d5a,	// (0x0001c34a) cell_ituss_key_t4_ParamLimits

0x8d5a,	// (0x0001c34a) cell_ituss_key_t4

0x0003,

0xfec0,	// (0x000234b0) cell_ituss_key_t_ParamLimits

0xfec0,	// (0x000234b0) cell_ituss_key_t

0x8d8b,	// (0x0001c37b) cell_vkbss_key_3p_pane_g1

0x8d93,	// (0x0001c383) cell_vkbss_key_3p_pane_g2

0x8d9b,	// (0x0001c38b) cell_vkbss_key_3p_pane_g3

0x0002,

0xfec9,	// (0x000234b9) cell_vkbss_key_3p_pane_g

0xd303,	// (0x000208f3) bg_popup_fep_char_preview_window_cp02

0x8da3,	// (0x0001c393) popup_fep_char_pre_window_t1

0xcf4b,	// (0x0002053b) main_ai5_sk_pane

0x87a2,	// (0x0001bd92) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x87ae,	// (0x0001bd9e) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x87c2,	// (0x0001bdb2) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x87d1,	// (0x0001bdc1) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea1,	// (0x00023491) cell_contacts_ai5_widget_pane_g_ParamLimits

0x87e4,	// (0x0001bdd4) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xd993,	// (0x00020f83) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xde9c,	// (0x0002148c) main_ai5_sk_pane_g1

0xee00,	// (0x000223f0) popup_query_code_window_g1

0x8ba9,	// (0x0001c199) popup_fep_vkb_icf_pane

0x8bbd,	// (0x0001c1ad) popup_fep_vtchi_icf_pane

0xd993,	// (0x00020f83) bg_icf_pane

0x8dca,	// (0x0001c3ba) list_vkb_icf_pane

0xd993,	// (0x00020f83) bg_icf_pane_cp01

0x6899,	// (0x00019e89) vtchi_icf_list_pane

0x8dea,	// (0x0001c3da) list_vkb_icf_pane_t1_ParamLimits

0x8dea,	// (0x0001c3da) list_vkb_icf_pane_t1

0x8e01,	// (0x0001c3f1) vtchi_icf_list_pane_t1_ParamLimits

0x8e01,	// (0x0001c3f1) vtchi_icf_list_pane_t1

0x8b97,	// (0x0001c187) popup_fep_ituss_window_ParamLimits

0x8bbd,	// (0x0001c1ad) popup_fep_vtchi_icf_pane_ParamLimits

0x8be3,	// (0x0001c1d3) ituss_keypad_pane_ParamLimits

0x8bf3,	// (0x0001c1e3) ituss_sks_pane

0xd993,	// (0x00020f83) bg_icf_pane_ParamLimits

0x8dbb,	// (0x0001c3ab) icf_edit_indi_pane_ParamLimits

0x8dbb,	// (0x0001c3ab) icf_edit_indi_pane

0x8dca,	// (0x0001c3ba) list_vkb_icf_pane_ParamLimits

0xd993,	// (0x00020f83) bg_icf_pane_cp01_ParamLimits

0x8dd6,	// (0x0001c3c6) icf_edit_indi_pane_cp01_ParamLimits

0x8dd6,	// (0x0001c3c6) icf_edit_indi_pane_cp01

0x8de2,	// (0x0001c3d2) vtchi_query_pane

0x2722,	// (0x00015d12) icf_edit_indi_pane_g1_ParamLimits

0x2722,	// (0x00015d12) icf_edit_indi_pane_g1

0x8e1a,	// (0x0001c40a) icf_edit_indi_pane_g2_ParamLimits

0x8e1a,	// (0x0001c40a) icf_edit_indi_pane_g2

0x0001,

0xfed0,	// (0x000234c0) icf_edit_indi_pane_g_ParamLimits

0xfed0,	// (0x000234c0) icf_edit_indi_pane_g

0x8e26,	// (0x0001c416) icf_edit_indi_pane_t1

0x8e34,	// (0x0001c424) bg_input_focus_pane_cp042

0x8e3d,	// (0x0001c42d) vtchi_button_pane

0x8e46,	// (0x0001c436) vtchi_query_pane_t1

0x8e54,	// (0x0001c444) vtchi_query_pane_t2

0x8e62,	// (0x0001c452) vtchi_query_pane_t3

0x0002,

0xfed5,	// (0x000234c5) vtchi_query_pane_t

0xd303,	// (0x000208f3) bg_button_pane_cp13

0x8e70,	// (0x0001c460) vtchi_button_pane_g1

0x6e84,	// (0x0001a474) ituss_sks_pane_g1

0x8e78,	// (0x0001c468) ituss_sks_pane_g2

0x0001,

0xfedc,	// (0x000234cc) ituss_sks_pane_g

0x8e81,	// (0x0001c471) ituss_sks_pane_t1

0x8e8f,	// (0x0001c47f) ituss_sks_pane_t2

0x0001,

0xfee1,	// (0x000234d1) ituss_sks_pane_t

0x2188,	// (0x00015778) indicator_nsta_pane_cp_g1

0x2191,	// (0x00015781) indicator_nsta_pane_cp_g2

0x2199,	// (0x00015789) indicator_nsta_pane_cp_g3

0x21a1,	// (0x00015791) indicator_nsta_pane_cp_g4

0x21a9,	// (0x00015799) indicator_nsta_pane_cp_g5

0x21b1,	// (0x000157a1) indicator_nsta_pane_cp_g6

0x0005,

0xfa92,	// (0x00023082) indicator_nsta_pane_cp_g

0xcd53,	// (0x00020343) cell_graphic2_pane_t2_ParamLimits

0xcd53,	// (0x00020343) cell_graphic2_pane_t2

0x0001,

0xfd98,	// (0x00023388) cell_graphic2_pane_t_ParamLimits

0xfd98,	// (0x00023388) cell_graphic2_pane_t
};


const AknLayoutScalable_Avkon::SCdlImpl KCdlImpl = 
	{
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&Limits,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineRVC,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&TextLineRVC,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLRVC,
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
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVRC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&WindowLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineRVC,
	&WindowLineVCR,
	&TextLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
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
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&Limits,
	&WindowLineVCR,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVRC,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&Limits,
	&WindowLineVCR,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineCVR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVRC,
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
	&ParameterLimitsV,
	&WindowLineCVR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
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
	&TextLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVRC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVRC,
	&TextLineVCR,
	&Limits,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
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
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineCVR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&TextLineRVC,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVRC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVRC,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineCVR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVRC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVRC,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&WindowLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&WindowLineRVC,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
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
	&TextLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&GetComponentTypeById,
	&GetParamLimitsById,
	&GetWindowComponentById,
	&GetTextComponentById,
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
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
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
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
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
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&Limits,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineCRV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	};

} // end of namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Small
