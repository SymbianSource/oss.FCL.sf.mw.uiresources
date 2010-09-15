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

#include "aknlayoutscalable_elaf_php_av_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001be3d };

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
0x7b36,	// (0x00023973) Screen

0x7b42,	// (0x0002397f) application_window_ParamLimits

0x7b42,	// (0x0002397f) application_window

0x3179,	// (0x0001efb6) screen_g1

0x56c7,	// (0x00021504) area_bottom_pane_ParamLimits

0x56c7,	// (0x00021504) area_bottom_pane

0x5787,	// (0x000215c4) area_top_pane_ParamLimits

0x5787,	// (0x000215c4) area_top_pane

0x581b,	// (0x00021658) main_pane_ParamLimits

0x581b,	// (0x00021658) main_pane

0x7b52,	// (0x0002398f) misc_graphics

0x9555,	// (0x00025392) battery_pane_ParamLimits

0x9555,	// (0x00025392) battery_pane

0xa237,	// (0x00026074) bg_status_flat_pane_g8

0xa23f,	// (0x0002607c) bg_status_flat_pane_g9

0x961d,	// (0x0002545a) context_pane_ParamLimits

0x961d,	// (0x0002545a) context_pane

0x9733,	// (0x00025570) navi_pane_ParamLimits

0x9733,	// (0x00025570) navi_pane

0x97b7,	// (0x000255f4) signal_pane_ParamLimits

0x97b7,	// (0x000255f4) signal_pane

0x0008,

0xf854,	// (0x0002b691) bg_status_flat_pane_g

0x9824,	// (0x00025661) status_pane_g1_ParamLimits

0x9824,	// (0x00025661) status_pane_g1

0x9838,	// (0x00025675) status_pane_g2_ParamLimits

0x9838,	// (0x00025675) status_pane_g2

0x9844,	// (0x00025681) status_pane_g3_ParamLimits

0x9844,	// (0x00025681) status_pane_g3

0x0004,

0xf77b,	// (0x0002b5b8) status_pane_g_ParamLimits

0xf77b,	// (0x0002b5b8) status_pane_g

0x9878,	// (0x000256b5) title_pane_ParamLimits

0x9878,	// (0x000256b5) title_pane

0x98b5,	// (0x000256f2) uni_indicator_pane_ParamLimits

0x98b5,	// (0x000256f2) uni_indicator_pane

0x9485,	// (0x000252c2) bg_list_pane_ParamLimits

0x9485,	// (0x000252c2) bg_list_pane

0x4c93,	// (0x00020ad0) find_pane

0x94a5,	// (0x000252e2) listscroll_app_pane_ParamLimits

0x94a5,	// (0x000252e2) listscroll_app_pane

0x94b1,	// (0x000252ee) listscroll_form_pane

0x4c9b,	// (0x00020ad8) listscroll_gen_pane_ParamLimits

0x4c9b,	// (0x00020ad8) listscroll_gen_pane

0x60f4,	// (0x00021f31) listscroll_set_pane

0x86b3,	// (0x000244f0) main_idle_act_pane

0x9181,	// (0x00024fbe) main_idle_trad_pane

0x9181,	// (0x00024fbe) main_list_empty_pane

0x94a5,	// (0x000252e2) main_midp_pane

0x94cb,	// (0x00025308) main_pane_g1_ParamLimits

0x94cb,	// (0x00025308) main_pane_g1

0x60fc,	// (0x00021f39) popup_ai_message_window_ParamLimits

0x60fc,	// (0x00021f39) popup_ai_message_window

0x61a2,	// (0x00021fdf) popup_fep_china_uni_window_ParamLimits

0x61a2,	// (0x00021fdf) popup_fep_china_uni_window

0x61fe,	// (0x0002203b) popup_fep_japan_candidate_window_ParamLimits

0x61fe,	// (0x0002203b) popup_fep_japan_candidate_window

0x621e,	// (0x0002205b) popup_fep_japan_predictive_window_ParamLimits

0x621e,	// (0x0002205b) popup_fep_japan_predictive_window

0x624e,	// (0x0002208b) popup_find_window

0x625b,	// (0x00022098) popup_grid_graphic_window_ParamLimits

0x625b,	// (0x00022098) popup_grid_graphic_window

0x6287,	// (0x000220c4) popup_large_graphic_colour_window

0x62ad,	// (0x000220ea) popup_menu_window_ParamLimits

0x62ad,	// (0x000220ea) popup_menu_window

0x6465,	// (0x000222a2) popup_note_image_window

0x6451,	// (0x0002228e) popup_note_wait_window_ParamLimits

0x6451,	// (0x0002228e) popup_note_wait_window

0x6451,	// (0x0002228e) popup_note_window_ParamLimits

0x6451,	// (0x0002228e) popup_note_window

0x64bb,	// (0x000222f8) popup_query_code_window_ParamLimits

0x64bb,	// (0x000222f8) popup_query_code_window

0x64cf,	// (0x0002230c) popup_query_data_code_window_ParamLimits

0x64cf,	// (0x0002230c) popup_query_data_code_window

0x64ec,	// (0x00022329) popup_query_data_window_ParamLimits

0x64ec,	// (0x00022329) popup_query_data_window

0x6508,	// (0x00022345) popup_query_sat_info_window_ParamLimits

0x6508,	// (0x00022345) popup_query_sat_info_window

0x6541,	// (0x0002237e) popup_snote_single_graphic_window_ParamLimits

0x6541,	// (0x0002237e) popup_snote_single_graphic_window

0x6541,	// (0x0002237e) popup_snote_single_text_window_ParamLimits

0x6541,	// (0x0002237e) popup_snote_single_text_window

0x6556,	// (0x00022393) popup_sub_window_general

0x6686,	// (0x000224c3) popup_window_general_ParamLimits

0x6686,	// (0x000224c3) popup_window_general

0x94d9,	// (0x00025316) power_save_pane

0x5f82,	// (0x00021dbf) control_pane_g1_ParamLimits

0x5f82,	// (0x00021dbf) control_pane_g1

0x5fa9,	// (0x00021de6) control_pane_g2_ParamLimits

0x5fa9,	// (0x00021de6) control_pane_g2

0x9448,	// (0x00025285) control_pane_g3_ParamLimits

0x9448,	// (0x00025285) control_pane_g3

0x0007,

0xf763,	// (0x0002b5a0) control_pane_g_ParamLimits

0xf763,	// (0x0002b5a0) control_pane_g

0x5ff3,	// (0x00021e30) control_pane_t1_ParamLimits

0x5ff3,	// (0x00021e30) control_pane_t1

0x6049,	// (0x00021e86) control_pane_t2_ParamLimits

0x6049,	// (0x00021e86) control_pane_t2

0x0002,

0xf774,	// (0x0002b5b1) control_pane_t_ParamLimits

0xf774,	// (0x0002b5b1) control_pane_t

0x936d,	// (0x000251aa) navi_navi_volume_pane_cp1

0x9375,	// (0x000251b2) status_small_icon_pane

0x937d,	// (0x000251ba) status_small_pane_g1_ParamLimits

0x937d,	// (0x000251ba) status_small_pane_g1

0x93b1,	// (0x000251ee) status_small_pane_g2_ParamLimits

0x93b1,	// (0x000251ee) status_small_pane_g2

0x93bd,	// (0x000251fa) status_small_pane_g3_ParamLimits

0x93bd,	// (0x000251fa) status_small_pane_g3

0x93c9,	// (0x00025206) status_small_pane_g4_ParamLimits

0x93c9,	// (0x00025206) status_small_pane_g4

0x93d5,	// (0x00025212) status_small_pane_g5_ParamLimits

0x93d5,	// (0x00025212) status_small_pane_g5

0x93e3,	// (0x00025220) status_small_pane_g6_ParamLimits

0x93e3,	// (0x00025220) status_small_pane_g6

0x0007,

0xf752,	// (0x0002b58f) status_small_pane_g_ParamLimits

0xf752,	// (0x0002b58f) status_small_pane_g

0x9412,	// (0x0002524f) status_small_pane_t1

0x9434,	// (0x00025271) status_small_wait_pane_ParamLimits

0x9434,	// (0x00025271) status_small_wait_pane

0x8bf2,	// (0x00024a2f) aid_levels_signal_ParamLimits

0x8bf2,	// (0x00024a2f) aid_levels_signal

0x8c04,	// (0x00024a41) signal_pane_g1_ParamLimits

0x8c04,	// (0x00024a41) signal_pane_g1

0x8c19,	// (0x00024a56) signal_pane_g2_ParamLimits

0x8c19,	// (0x00024a56) signal_pane_g2

0x0003,

0xf6e3,	// (0x0002b520) signal_pane_g_ParamLimits

0xf6e3,	// (0x0002b520) signal_pane_g

0x8c54,	// (0x00024a91) context_pane_g1

0x7b5c,	// (0x00023999) title_pane_g1

0x7b92,	// (0x000239cf) title_pane_t1

0x7bfa,	// (0x00023a37) title_pane_t2

0x7c20,	// (0x00023a5d) title_pane_t3

0x0002,

0xf532,	// (0x0002b36f) title_pane_t

0x98cd,	// (0x0002570a) aid_levels_battery_ParamLimits

0x98cd,	// (0x0002570a) aid_levels_battery

0x98e1,	// (0x0002571e) battery_pane_g1_ParamLimits

0x98e1,	// (0x0002571e) battery_pane_g1

0x98f7,	// (0x00025734) battery_pane_g2_ParamLimits

0x98f7,	// (0x00025734) battery_pane_g2

0x0001,

0xf786,	// (0x0002b5c3) battery_pane_g_ParamLimits

0xf786,	// (0x0002b5c3) battery_pane_g

0xab79,	// (0x000269b6) uni_indicator_pane_g1

0xab8f,	// (0x000269cc) uni_indicator_pane_g2

0xaba5,	// (0x000269e2) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x0002b739) uni_indicator_pane_g

0x8fea,	// (0x00024e27) navi_icon_pane_ParamLimits

0x8fea,	// (0x00024e27) navi_icon_pane

0x8f33,	// (0x00024d70) navi_midp_pane

0x9006,	// (0x00024e43) navi_navi_pane

0x9010,	// (0x00024e4d) navi_text_pane_ParamLimits

0x9010,	// (0x00024e4d) navi_text_pane

0x3179,	// (0x0001efb6) status_small_wait_pane_g1

0x8075,	// (0x00023eb2) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x0002b734) status_small_wait_pane_g

0xa89e,	// (0x000266db) navi_navi_icon_text_pane

0xa8a6,	// (0x000266e3) navi_navi_pane_g1_ParamLimits

0xa8a6,	// (0x000266e3) navi_navi_pane_g1

0xa8b8,	// (0x000266f5) navi_navi_pane_g2_ParamLimits

0xa8b8,	// (0x000266f5) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x0002b702) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x0002b702) navi_navi_pane_g

0xa8ca,	// (0x00026707) navi_navi_tabs_pane

0xa8d3,	// (0x00026710) navi_navi_text_pane

0xa89e,	// (0x000266db) navi_navi_volume_pane

0xa87a,	// (0x000266b7) navi_text_pane_t1

0xa86e,	// (0x000266ab) navi_icon_pane_g1

0xa7c1,	// (0x000265fe) navi_navi_text_pane_t1

0x6926,	// (0x00022763) navi_navi_volume_pane_g1

0x692e,	// (0x0002276b) volume_small_pane

0xa71b,	// (0x00026558) navi_navi_icon_text_pane_g1

0xa723,	// (0x00026560) navi_navi_icon_text_pane_t1

0x9006,	// (0x00024e43) navi_tabs_2_long_pane

0x9006,	// (0x00024e43) navi_tabs_2_pane

0x9006,	// (0x00024e43) navi_tabs_3_long_pane

0x9006,	// (0x00024e43) navi_tabs_3_pane

0x9006,	// (0x00024e43) navi_tabs_4_pane

0x6906,	// (0x00022743) tabs_2_active_pane_ParamLimits

0x6906,	// (0x00022743) tabs_2_active_pane

0x6916,	// (0x00022753) tabs_2_passive_pane_ParamLimits

0x6916,	// (0x00022753) tabs_2_passive_pane

0x68d4,	// (0x00022711) tabs_3_active_pane_ParamLimits

0x68d4,	// (0x00022711) tabs_3_active_pane

0x68e4,	// (0x00022721) tabs_3_passive_pane_ParamLimits

0x68e4,	// (0x00022721) tabs_3_passive_pane

0x68f5,	// (0x00022732) tabs_3_passive_pane_cp_ParamLimits

0x68f5,	// (0x00022732) tabs_3_passive_pane_cp

0x6890,	// (0x000226cd) tabs_4_active_pane_ParamLimits

0x6890,	// (0x000226cd) tabs_4_active_pane

0x68a1,	// (0x000226de) tabs_4_passive_pane_ParamLimits

0x68a1,	// (0x000226de) tabs_4_passive_pane

0x68b2,	// (0x000226ef) tabs_4_passive_pane_cp_ParamLimits

0x68b2,	// (0x000226ef) tabs_4_passive_pane_cp

0x68c3,	// (0x00022700) tabs_4_passive_pane_cp2_ParamLimits

0x68c3,	// (0x00022700) tabs_4_passive_pane_cp2

0x686c,	// (0x000226a9) tabs_2_long_active_pane_ParamLimits

0x686c,	// (0x000226a9) tabs_2_long_active_pane

0x687e,	// (0x000226bb) tabs_2_long_passive_pane_ParamLimits

0x687e,	// (0x000226bb) tabs_2_long_passive_pane

0x682d,	// (0x0002266a) tabs_3_long_active_pane_ParamLimits

0x682d,	// (0x0002266a) tabs_3_long_active_pane

0x6840,	// (0x0002267d) tabs_3_long_passive_pane_ParamLimits

0x6840,	// (0x0002267d) tabs_3_long_passive_pane

0x6859,	// (0x00022696) tabs_3_long_passive_pane_cp_ParamLimits

0x6859,	// (0x00022696) tabs_3_long_passive_pane_cp

0x67d3,	// (0x00022610) volume_small_pane_g1

0x67dc,	// (0x00022619) volume_small_pane_g2

0x67e5,	// (0x00022622) volume_small_pane_g3

0x67ee,	// (0x0002262b) volume_small_pane_g4

0x67f7,	// (0x00022634) volume_small_pane_g5

0x6800,	// (0x0002263d) volume_small_pane_g6

0x6809,	// (0x00022646) volume_small_pane_g7

0x6812,	// (0x0002264f) volume_small_pane_g8

0x681b,	// (0x00022658) volume_small_pane_g9

0x6824,	// (0x00022661) volume_small_pane_g10

0x0009,

0xf891,	// (0x0002b6ce) volume_small_pane_g

0x7c32,	// (0x00023a6f) bg_active_tab_pane_cp2_ParamLimits

0x7c32,	// (0x00023a6f) bg_active_tab_pane_cp2

0x7c40,	// (0x00023a7d) tabs_3_active_pane_g1

0x7c48,	// (0x00023a85) tabs_3_active_pane_t1

0x7c32,	// (0x00023a6f) bg_passive_tab_pane_cp2_ParamLimits

0x7c32,	// (0x00023a6f) bg_passive_tab_pane_cp2

0x7c40,	// (0x00023a7d) tabs_3_passive_pane_g1

0x7c48,	// (0x00023a85) tabs_3_passive_pane_t1

0x7c32,	// (0x00023a6f) bg_active_tab_pane_cp3_ParamLimits

0x7c32,	// (0x00023a6f) bg_active_tab_pane_cp3

0x7c5a,	// (0x00023a97) tabs_4_active_pane_g1

0x7c62,	// (0x00023a9f) tabs_4_active_pane_t1

0x7c32,	// (0x00023a6f) bg_passive_tab_pane_cp3_ParamLimits

0x7c32,	// (0x00023a6f) bg_passive_tab_pane_cp3

0x7c5a,	// (0x00023a97) tabs_4_1_passive_pane_g1

0x7c62,	// (0x00023a9f) tabs_4_1_passive_pane_t1

0x94a5,	// (0x000252e2) list_highlight_pane_cp2

0xadec,	// (0x00026c29) list_set_pane_ParamLimits

0xadec,	// (0x00026c29) list_set_pane

0xae92,	// (0x00026ccf) main_pane_set_t1_ParamLimits

0xae92,	// (0x00026ccf) main_pane_set_t1

0xaeb2,	// (0x00026cef) main_pane_set_t2_ParamLimits

0xaeb2,	// (0x00026cef) main_pane_set_t2

0xaec6,	// (0x00026d03) main_pane_set_t3_ParamLimits

0xaec6,	// (0x00026d03) main_pane_set_t3

0xaed8,	// (0x00026d15) main_pane_set_t4_ParamLimits

0xaed8,	// (0x00026d15) main_pane_set_t4

0x0003,

0xf961,	// (0x0002b79e) main_pane_set_t_ParamLimits

0xf961,	// (0x0002b79e) main_pane_set_t

0xaeea,	// (0x00026d27) setting_code_pane

0xaef6,	// (0x00026d33) setting_slider_graphic_pane

0xaef6,	// (0x00026d33) setting_slider_pane

0xaef6,	// (0x00026d33) setting_text_pane

0xaef6,	// (0x00026d33) setting_volume_pane

0x5a6a,	// (0x000218a7) volume_set_pane

0x7c32,	// (0x00023a6f) bg_set_opt_pane_cp

0x5a72,	// (0x000218af) setting_slider_pane_t1

0x5a8b,	// (0x000218c8) setting_slider_pane_t2

0x5aa5,	// (0x000218e2) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0002b376) setting_slider_pane_t

0x5abd,	// (0x000218fa) slider_set_pane

0x7b52,	// (0x0002398f) bg_set_opt_pane_cp2

0x7c74,	// (0x00023ab1) setting_slider_graphic_pane_g1

0x5ad3,	// (0x00021910) setting_slider_graphic_pane_t1

0x5ae3,	// (0x00021920) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0002b37d) setting_slider_graphic_pane_t

0x5af3,	// (0x00021930) slider_set_pane_cp

0x7b52,	// (0x0002398f) input_focus_pane_cp1

0xadab,	// (0x00026be8) list_set_text_pane

0x3179,	// (0x0001efb6) setting_text_pane_g1

0x7b52,	// (0x0002398f) input_focus_pane_cp2

0x3179,	// (0x0001efb6) setting_code_pane_g1

0x7c7d,	// (0x00023aba) setting_code_pane_t1

0x44da,	// (0x00020317) set_text_pane_t1_ParamLimits

0x44da,	// (0x00020317) set_text_pane_t1

0x8517,	// (0x00024354) set_opt_bg_pane_g1

0x851f,	// (0x0002435c) set_opt_bg_pane_g2

0xad85,	// (0x00026bc2) set_opt_bg_pane_g3

0x852f,	// (0x0002436c) set_opt_bg_pane_g4

0x8537,	// (0x00024374) set_opt_bg_pane_g5

0x853f,	// (0x0002437c) set_opt_bg_pane_g6

0xad8f,	// (0x00026bcc) set_opt_bg_pane_g7

0xad97,	// (0x00026bd4) set_opt_bg_pane_g8

0xada1,	// (0x00026bde) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x0002b78b) set_opt_bg_pane_g

0xad78,	// (0x00026bb5) slider_set_pane_g1

0x699b,	// (0x000227d8) slider_set_pane_g2

0x0006,

0xf93f,	// (0x0002b77c) slider_set_pane_g

0x6937,	// (0x00022774) volume_set_pane_g1

0x693f,	// (0x0002277c) volume_set_pane_g2

0x6947,	// (0x00022784) volume_set_pane_g3

0x694f,	// (0x0002278c) volume_set_pane_g4

0x6957,	// (0x00022794) volume_set_pane_g5

0x695f,	// (0x0002279c) volume_set_pane_g6

0x6967,	// (0x000227a4) volume_set_pane_g7

0x696f,	// (0x000227ac) volume_set_pane_g8

0x6977,	// (0x000227b4) volume_set_pane_g9

0x697f,	// (0x000227bc) volume_set_pane_g10

0x0009,

0xf917,	// (0x0002b754) volume_set_pane_g

0x7c8b,	// (0x00023ac8) indicator_pane_ParamLimits

0x7c8b,	// (0x00023ac8) indicator_pane

0x7c97,	// (0x00023ad4) main_idle_pane_g2_ParamLimits

0x7c97,	// (0x00023ad4) main_idle_pane_g2

0x7cbf,	// (0x00023afc) main_pane_idle_g1_ParamLimits

0x7cbf,	// (0x00023afc) main_pane_idle_g1

0x7ccc,	// (0x00023b09) popup_clock_digital_analogue_window_ParamLimits

0x7ccc,	// (0x00023b09) popup_clock_digital_analogue_window

0x7ce3,	// (0x00023b20) soft_indicator_pane_ParamLimits

0x7ce3,	// (0x00023b20) soft_indicator_pane

0x7cef,	// (0x00023b2c) wallpaper_pane_ParamLimits

0x7cef,	// (0x00023b2c) wallpaper_pane

0x3179,	// (0x0001efb6) wallpaper_pane_g1

0x7d03,	// (0x00023b40) indicator_pane_g1_ParamLimits

0x7d03,	// (0x00023b40) indicator_pane_g1

0xb1c6,	// (0x00027003) navi_navi_icon_text_pane_srt_g1

0x7d1e,	// (0x00023b5b) soft_indicator_pane_t1

0x7d38,	// (0x00023b75) aid_ps_area_pane

0x7d49,	// (0x00023b86) aid_ps_clock_pane

0x7d57,	// (0x00023b94) aid_ps_indicator_pane

0x7d63,	// (0x00023ba0) indicator_ps_pane_ParamLimits

0x7d63,	// (0x00023ba0) indicator_ps_pane

0x7d72,	// (0x00023baf) power_save_pane_g1_ParamLimits

0x7d72,	// (0x00023baf) power_save_pane_g1

0x7d7e,	// (0x00023bbb) power_save_pane_g2_ParamLimits

0x7d7e,	// (0x00023bbb) power_save_pane_g2

0x567b,	// (0x000214b8) aid_navinavi_width_pane

0x7d38,	// (0x00023b75) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0002b382) power_save_pane_g_ParamLimits

0xf545,	// (0x0002b382) power_save_pane_g

0x7d8c,	// (0x00023bc9) power_save_pane_t1_ParamLimits

0x7d8c,	// (0x00023bc9) power_save_pane_t1

0x7d49,	// (0x00023b86) aid_ps_clock_pane_ParamLimits

0x7d57,	// (0x00023b94) aid_ps_indicator_pane_ParamLimits

0x7d9e,	// (0x00023bdb) power_save_pane_t4_ParamLimits

0x7d9e,	// (0x00023bdb) power_save_pane_t4

0x0001,

0xf54a,	// (0x0002b387) power_save_pane_t_ParamLimits

0xf54a,	// (0x0002b387) power_save_pane_t

0x7dc8,	// (0x00023c05) power_save_t3_ParamLimits

0x7dc8,	// (0x00023c05) power_save_t3

0x7db3,	// (0x00023bf0) power_save_t2_ParamLimits

0x7db3,	// (0x00023bf0) power_save_t2

0x7ddd,	// (0x00023c1a) indicator_ps_pane_g1

0x7de6,	// (0x00023c23) ai_gene_pane_ParamLimits

0x7de6,	// (0x00023c23) ai_gene_pane

0x7df2,	// (0x00023c2f) ai_links_pane_ParamLimits

0x7df2,	// (0x00023c2f) ai_links_pane

0x7dfe,	// (0x00023c3b) indicator_pane_cp1_ParamLimits

0x7dfe,	// (0x00023c3b) indicator_pane_cp1

0x7e0a,	// (0x00023c47) main_pane_idle_g1_cp_ParamLimits

0x7e0a,	// (0x00023c47) main_pane_idle_g1_cp

0x7e16,	// (0x00023c53) popup_ai_links_title_window

0x7e1f,	// (0x00023c5c) soft_indicator_pane_cp1_ParamLimits

0x7e1f,	// (0x00023c5c) soft_indicator_pane_cp1

0xab67,	// (0x000269a4) ai_links_pane_g1

0xab70,	// (0x000269ad) grid_ai_links_pane

0xab4a,	// (0x00026987) ai_gene_pane_1

0xab55,	// (0x00026992) ai_gene_pane_2

0xab5e,	// (0x0002699b) list_highlight_pane_cp4

0xab2e,	// (0x0002696b) cell_ai_link_pane_ParamLimits

0xab2e,	// (0x0002696b) cell_ai_link_pane

0xab26,	// (0x00026963) cell_ai_link_pane_g1

0x8075,	// (0x00023eb2) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x0002b72f) cell_ai_link_pane_g

0x7b52,	// (0x0002398f) grid_highlight_cp2

0x7b52,	// (0x0002398f) bg_popup_sub_pane_cp1

0x7e39,	// (0x00023c76) popup_ai_links_title_window_t1

0xaa74,	// (0x000268b1) ai_gene_pane_1_g1_ParamLimits

0xaa74,	// (0x000268b1) ai_gene_pane_1_g1

0xaa80,	// (0x000268bd) ai_gene_pane_1_g2_ParamLimits

0xaa80,	// (0x000268bd) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x0002b725) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x0002b725) ai_gene_pane_1_g

0xaa8d,	// (0x000268ca) ai_gene_pane_1_t1_ParamLimits

0xaa8d,	// (0x000268ca) ai_gene_pane_1_t1

0xaac1,	// (0x000268fe) grid_ai_soft_ind_pane

0xaa5f,	// (0x0002689c) ai_gene_pane_2_t1_ParamLimits

0xaa5f,	// (0x0002689c) ai_gene_pane_2_t1

0x7e48,	// (0x00023c85) main_pane_empty_t1_ParamLimits

0x7e48,	// (0x00023c85) main_pane_empty_t1

0x7e60,	// (0x00023c9d) main_pane_empty_t2_ParamLimits

0x7e60,	// (0x00023c9d) main_pane_empty_t2

0x7e75,	// (0x00023cb2) main_pane_empty_t3_ParamLimits

0x7e75,	// (0x00023cb2) main_pane_empty_t3

0x7e87,	// (0x00023cc4) main_pane_empty_t4_ParamLimits

0x7e87,	// (0x00023cc4) main_pane_empty_t4

0x7e99,	// (0x00023cd6) main_pane_empty_t5_ParamLimits

0x7e99,	// (0x00023cd6) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0002b38c) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0002b38c) main_pane_empty_t

0x85de,	// (0x0002441b) bg_popup_window_pane_ParamLimits

0x85de,	// (0x0002441b) bg_popup_window_pane

0xa7cf,	// (0x0002660c) find_popup_pane_cp2_ParamLimits

0xa7cf,	// (0x0002660c) find_popup_pane_cp2

0xa7db,	// (0x00026618) heading_pane_ParamLimits

0xa7db,	// (0x00026618) heading_pane

0x7b52,	// (0x0002398f) bg_popup_sub_pane

0xa73d,	// (0x0002657a) bg_popup_window_pane_g1_ParamLimits

0xa73d,	// (0x0002657a) bg_popup_window_pane_g1

0xa749,	// (0x00026586) bg_popup_window_pane_g2_ParamLimits

0xa749,	// (0x00026586) bg_popup_window_pane_g2

0xa761,	// (0x0002659e) bg_popup_window_pane_g3_ParamLimits

0xa761,	// (0x0002659e) bg_popup_window_pane_g3

0xa76d,	// (0x000265aa) bg_popup_window_pane_g4_ParamLimits

0xa76d,	// (0x000265aa) bg_popup_window_pane_g4

0xa779,	// (0x000265b6) bg_popup_window_pane_g5_ParamLimits

0xa779,	// (0x000265b6) bg_popup_window_pane_g5

0xa785,	// (0x000265c2) bg_popup_window_pane_g6_ParamLimits

0xa785,	// (0x000265c2) bg_popup_window_pane_g6

0xa791,	// (0x000265ce) bg_popup_window_pane_g7_ParamLimits

0xa791,	// (0x000265ce) bg_popup_window_pane_g7

0xa79d,	// (0x000265da) bg_popup_window_pane_g8_ParamLimits

0xa79d,	// (0x000265da) bg_popup_window_pane_g8

0xa7a9,	// (0x000265e6) bg_popup_window_pane_g9_ParamLimits

0xa7a9,	// (0x000265e6) bg_popup_window_pane_g9

0xa7b5,	// (0x000265f2) bg_popup_window_pane_g10_ParamLimits

0xa7b5,	// (0x000265f2) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x0002b6ed) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x0002b6ed) bg_popup_window_pane_g

0xa6d2,	// (0x0002650f) bg_popup_heading_pane_ParamLimits

0xa6d2,	// (0x0002650f) bg_popup_heading_pane

0x6a23,	// (0x00022860) tabs_4_passive_pane_cp_srt_ParamLimits

0x6a23,	// (0x00022860) tabs_4_passive_pane_cp_srt

0x6a35,	// (0x00022872) tabs_4_passive_pane_srt_ParamLimits

0xa6e6,	// (0x00026523) heading_pane_g2

0x6a35,	// (0x00022872) tabs_4_passive_pane_srt

0x94a5,	// (0x000252e2) bg_passive_tab_pane_cp3_srt_ParamLimits

0x94a5,	// (0x000252e2) bg_passive_tab_pane_cp3_srt

0xa6ee,	// (0x0002652b) heading_pane_t1_ParamLimits

0xa6ee,	// (0x0002652b) heading_pane_t1

0xa705,	// (0x00026542) heading_pane_t2_ParamLimits

0xa705,	// (0x00026542) heading_pane_t2

0x0001,

0xf8ab,	// (0x0002b6e8) heading_pane_t_ParamLimits

0xf8ab,	// (0x0002b6e8) heading_pane_t

0xa1ff,	// (0x0002603c) bg_popup_heading_pane_g1

0xa2ae,	// (0x000260eb) bg_popup_heading_pane_g2

0xa2b8,	// (0x000260f5) bg_popup_heading_pane_g3

0xa2c2,	// (0x000260ff) bg_popup_heading_pane_g4

0xa2cc,	// (0x00026109) bg_popup_heading_pane_g5

0xa2d6,	// (0x00026113) bg_popup_heading_pane_g6

0xa2de,	// (0x0002611b) bg_popup_heading_pane_g7

0xa2e6,	// (0x00026123) bg_popup_heading_pane_g8

0xa2f0,	// (0x0002612d) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x0002b6a4) bg_popup_heading_pane_g

0x99cf,	// (0x0002580c) bg_popup_sub_pane_g1

0x99d7,	// (0x00025814) bg_popup_sub_pane_g2

0x99df,	// (0x0002581c) bg_popup_sub_pane_g3

0x99e7,	// (0x00025824) bg_popup_sub_pane_g4

0x99ef,	// (0x0002582c) bg_popup_sub_pane_g5

0x99f7,	// (0x00025834) bg_popup_sub_pane_g6

0x99ff,	// (0x0002583c) bg_popup_sub_pane_g7

0x9a07,	// (0x00025844) bg_popup_sub_pane_g8

0x9a0f,	// (0x0002584c) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x0002b67e) bg_popup_sub_pane_g

0x7ead,	// (0x00023cea) bg_popup_window_pane_cp5_ParamLimits

0x7ead,	// (0x00023cea) bg_popup_window_pane_cp5

0x7ec9,	// (0x00023d06) popup_note_window_g1_ParamLimits

0x7ec9,	// (0x00023d06) popup_note_window_g1

0x7ed5,	// (0x00023d12) popup_note_window_t1_ParamLimits

0x7ed5,	// (0x00023d12) popup_note_window_t1

0x7eeb,	// (0x00023d28) popup_note_window_t2_ParamLimits

0x7eeb,	// (0x00023d28) popup_note_window_t2

0x7f01,	// (0x00023d3e) popup_note_window_t3_ParamLimits

0x7f01,	// (0x00023d3e) popup_note_window_t3

0x7f17,	// (0x00023d54) popup_note_window_t4_ParamLimits

0x7f17,	// (0x00023d54) popup_note_window_t4

0x7f3f,	// (0x00023d7c) popup_note_window_t5_ParamLimits

0x7f3f,	// (0x00023d7c) popup_note_window_t5

0x0004,

0xf55a,	// (0x0002b397) popup_note_window_t_ParamLimits

0xf55a,	// (0x0002b397) popup_note_window_t

0x7f89,	// (0x00023dc6) bg_popup_window_pane_cp6_ParamLimits

0x7f89,	// (0x00023dc6) bg_popup_window_pane_cp6

0xa17b,	// (0x00025fb8) popup_note_image_window_g1_ParamLimits

0xa17b,	// (0x00025fb8) popup_note_image_window_g1

0xa187,	// (0x00025fc4) popup_note_image_window_g2_ParamLimits

0xa187,	// (0x00025fc4) popup_note_image_window_g2

0x0001,

0xf835,	// (0x0002b672) popup_note_image_window_g_ParamLimits

0xf835,	// (0x0002b672) popup_note_image_window_g

0xa1a0,	// (0x00025fdd) popup_note_image_window_t1_ParamLimits

0xa1a0,	// (0x00025fdd) popup_note_image_window_t1

0xa1b9,	// (0x00025ff6) popup_note_image_window_t2_ParamLimits

0xa1b9,	// (0x00025ff6) popup_note_image_window_t2

0xa1d2,	// (0x0002600f) popup_note_image_window_t3_ParamLimits

0xa1d2,	// (0x0002600f) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x0002b677) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x0002b677) popup_note_image_window_t

0xa03c,	// (0x00025e79) bg_popup_window_pane_cp7_ParamLimits

0xa03c,	// (0x00025e79) bg_popup_window_pane_cp7

0xa06c,	// (0x00025ea9) popup_note_wait_window_g1_ParamLimits

0xa06c,	// (0x00025ea9) popup_note_wait_window_g1

0xa078,	// (0x00025eb5) popup_note_wait_window_g2_ParamLimits

0xa078,	// (0x00025eb5) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x0002b660) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x0002b660) popup_note_wait_window_g

0xa090,	// (0x00025ecd) popup_note_wait_window_t1_ParamLimits

0xa090,	// (0x00025ecd) popup_note_wait_window_t1

0xa0b7,	// (0x00025ef4) popup_note_wait_window_t2_ParamLimits

0xa0b7,	// (0x00025ef4) popup_note_wait_window_t2

0xa0d4,	// (0x00025f11) popup_note_wait_window_t3_ParamLimits

0xa0d4,	// (0x00025f11) popup_note_wait_window_t3

0xa0e7,	// (0x00025f24) popup_note_wait_window_t4_ParamLimits

0xa0e7,	// (0x00025f24) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x0002b667) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x0002b667) popup_note_wait_window_t

0xa10c,	// (0x00025f49) wait_bar_pane_ParamLimits

0xa10c,	// (0x00025f49) wait_bar_pane

0x7b52,	// (0x0002398f) wait_anim_pane

0x7b52,	// (0x0002398f) wait_border_pane

0x3179,	// (0x0001efb6) wait_anim_pane_g1

0x3179,	// (0x0001efb6) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x0002b51b) wait_anim_pane_g

0x9fe0,	// (0x00025e1d) wait_border_pane_g1

0x9feb,	// (0x00025e28) wait_border_pane_g2

0x9ff4,	// (0x00025e31) wait_border_pane_g3

0x0002,

0xf81c,	// (0x0002b659) wait_border_pane_g

0x9e4b,	// (0x00025c88) bg_popup_window_pane_cp16_ParamLimits

0x9e4b,	// (0x00025c88) bg_popup_window_pane_cp16

0x9f4b,	// (0x00025d88) indicator_popup_pane_cp4_ParamLimits

0x9f4b,	// (0x00025d88) indicator_popup_pane_cp4

0x9f5f,	// (0x00025d9c) popup_query_data_window_t1_ParamLimits

0x9f5f,	// (0x00025d9c) popup_query_data_window_t1

0x9f71,	// (0x00025dae) popup_query_data_window_t2_ParamLimits

0x9f71,	// (0x00025dae) popup_query_data_window_t2

0x9f8a,	// (0x00025dc7) popup_query_data_window_t3_ParamLimits

0x9f8a,	// (0x00025dc7) popup_query_data_window_t3

0x0002,

0xf815,	// (0x0002b652) popup_query_data_window_t_ParamLimits

0xf815,	// (0x0002b652) popup_query_data_window_t

0x9fa4,	// (0x00025de1) query_popup_data_pane_ParamLimits

0x9fa4,	// (0x00025de1) query_popup_data_pane

0x9fb8,	// (0x00025df5) query_popup_data_pane_cp1_ParamLimits

0x9fb8,	// (0x00025df5) query_popup_data_pane_cp1

0x9e4b,	// (0x00025c88) bg_popup_window_pane_cp10_ParamLimits

0x9e4b,	// (0x00025c88) bg_popup_window_pane_cp10

0x9e7d,	// (0x00025cba) indicator_popup_pane_ParamLimits

0x9e7d,	// (0x00025cba) indicator_popup_pane

0x9e9f,	// (0x00025cdc) popup_query_code_window_t1_ParamLimits

0x9e9f,	// (0x00025cdc) popup_query_code_window_t1

0x9eb9,	// (0x00025cf6) popup_query_code_window_t2_ParamLimits

0x9eb9,	// (0x00025cf6) popup_query_code_window_t2

0x9f02,	// (0x00025d3f) popup_query_code_window_t3_ParamLimits

0x9f02,	// (0x00025d3f) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x0002b64b) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x0002b64b) popup_query_code_window_t

0x9f31,	// (0x00025d6e) query_popup_pane_ParamLimits

0x9f31,	// (0x00025d6e) query_popup_pane

0x7f89,	// (0x00023dc6) bg_popup_window_pane_cp15_ParamLimits

0x7f89,	// (0x00023dc6) bg_popup_window_pane_cp15

0x7fa7,	// (0x00023de4) indicator_popup_pane_cp1_ParamLimits

0x7fa7,	// (0x00023de4) indicator_popup_pane_cp1

0x7fba,	// (0x00023df7) indicator_popup_pane_cp2_ParamLimits

0x7fba,	// (0x00023df7) indicator_popup_pane_cp2

0x7fcd,	// (0x00023e0a) popup_query_data_code_window_g1_ParamLimits

0x7fcd,	// (0x00023e0a) popup_query_data_code_window_g1

0x7fe0,	// (0x00023e1d) popup_query_data_code_window_t1_ParamLimits

0x7fe0,	// (0x00023e1d) popup_query_data_code_window_t1

0x7ff2,	// (0x00023e2f) popup_query_data_code_window_t2_ParamLimits

0x7ff2,	// (0x00023e2f) popup_query_data_code_window_t2

0x8004,	// (0x00023e41) popup_query_data_code_window_t3_ParamLimits

0x8004,	// (0x00023e41) popup_query_data_code_window_t3

0x801a,	// (0x00023e57) popup_query_data_code_window_t4_ParamLimits

0x801a,	// (0x00023e57) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0002b3a2) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0002b3a2) popup_query_data_code_window_t

0x66f0,	// (0x0002252d) list_single_midp_graphic_pane_g3

0x8032,	// (0x00023e6f) query_popup_data_pane_cp2_ParamLimits

0x8045,	// (0x00023e82) query_popup_pane_cp2_ParamLimits

0x8045,	// (0x00023e82) query_popup_pane_cp2

0x7b52,	// (0x0002398f) bg_popup_window_pane_cp11

0x9e2f,	// (0x00025c6c) heading_pane_cp5

0x9e37,	// (0x00025c74) listscroll_popup_info_pane

0x7b52,	// (0x0002398f) input_focus_pane_cp3

0x8058,	// (0x00023e95) query_popup_pane_t1

0x8066,	// (0x00023ea3) list_popup_info_pane_ParamLimits

0x8066,	// (0x00023ea3) list_popup_info_pane

0x8075,	// (0x00023eb2) listscroll_popup_info_pane_g1

0x807d,	// (0x00023eba) scroll_pane_cp7

0x8087,	// (0x00023ec4) popup_info_list_pane_t1_ParamLimits

0x8087,	// (0x00023ec4) popup_info_list_pane_t1

0x80a1,	// (0x00023ede) popup_info_list_pane_t2_ParamLimits

0x80a1,	// (0x00023ede) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0002b3ab) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0002b3ab) popup_info_list_pane_t

0x7b52,	// (0x0002398f) bg_popup_window_pane_cp12

0xb1e0,	// (0x0002701d) find_popup_pane

0x7c32,	// (0x00023a6f) bg_popup_window_pane_cp3

0x80bb,	// (0x00023ef8) heading_pane_cp3

0x80ca,	// (0x00023f07) listscroll_popup_graphic_pane

0x7b52,	// (0x0002398f) bg_popup_window_pane_cp4

0x812a,	// (0x00023f67) heading_pane_cp4

0x8134,	// (0x00023f71) listscroll_popup_colour_pane

0x813c,	// (0x00023f79) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x813c,	// (0x00023f79) cell_large_graphic_colour_none_popup_pane

0x8150,	// (0x00023f8d) grid_large_graphic_colour_popup_pane_ParamLimits

0x8150,	// (0x00023f8d) grid_large_graphic_colour_popup_pane

0x8174,	// (0x00023fb1) listscroll_popup_colour_pane_g1_ParamLimits

0x8174,	// (0x00023fb1) listscroll_popup_colour_pane_g1

0x818b,	// (0x00023fc8) listscroll_popup_colour_pane_g2_ParamLimits

0x818b,	// (0x00023fc8) listscroll_popup_colour_pane_g2

0x81a2,	// (0x00023fdf) listscroll_popup_colour_pane_g3_ParamLimits

0x81a2,	// (0x00023fdf) listscroll_popup_colour_pane_g3

0x81b2,	// (0x00023fef) listscroll_popup_colour_pane_g4_ParamLimits

0x81b2,	// (0x00023fef) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0002b3b0) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0002b3b0) listscroll_popup_colour_pane_g

0x81c2,	// (0x00023fff) scroll_pane_cp6_ParamLimits

0x81c2,	// (0x00023fff) scroll_pane_cp6

0x81d4,	// (0x00024011) cell_large_graphic_colour_popup_pane_ParamLimits

0x81d4,	// (0x00024011) cell_large_graphic_colour_popup_pane

0x81f3,	// (0x00024030) cell_large_graphic_colour_none_popup_pane_t1

0x7b52,	// (0x0002398f) grid_highlight_pane_cp5

0x8202,	// (0x0002403f) cell_large_graphic_colour_popup_pane_g1

0x820a,	// (0x00024047) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0002b3b9) cell_large_graphic_colour_popup_pane_g

0x8212,	// (0x0002404f) cell_large_graphic_colour_popup_pane_g2_copy1

0x821b,	// (0x00024058) grid_highlight_pane_cp4

0x8223,	// (0x00024060) bg_popup_window_pane_cp8_ParamLimits

0x8223,	// (0x00024060) bg_popup_window_pane_cp8

0x823e,	// (0x0002407b) popup_snote_single_text_window_g1_ParamLimits

0x823e,	// (0x0002407b) popup_snote_single_text_window_g1

0x8250,	// (0x0002408d) popup_snote_single_text_window_t1_ParamLimits

0x8250,	// (0x0002408d) popup_snote_single_text_window_t1

0x8263,	// (0x000240a0) popup_snote_single_text_window_t2_ParamLimits

0x8263,	// (0x000240a0) popup_snote_single_text_window_t2

0x8276,	// (0x000240b3) popup_snote_single_text_window_t3_ParamLimits

0x8276,	// (0x000240b3) popup_snote_single_text_window_t3

0x82af,	// (0x000240ec) popup_snote_single_text_window_t4_ParamLimits

0x82af,	// (0x000240ec) popup_snote_single_text_window_t4

0x82e3,	// (0x00024120) popup_snote_single_text_window_t5_ParamLimits

0x82e3,	// (0x00024120) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0002b3be) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0002b3be) popup_snote_single_text_window_t

0x8312,	// (0x0002414f) bg_popup_window_pane_cp9_ParamLimits

0x8312,	// (0x0002414f) bg_popup_window_pane_cp9

0x823e,	// (0x0002407b) popup_snote_single_graphic_window_g1_ParamLimits

0x823e,	// (0x0002407b) popup_snote_single_graphic_window_g1

0x8320,	// (0x0002415d) popup_snote_single_graphic_window_g2_ParamLimits

0x8320,	// (0x0002415d) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0002b3c9) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0002b3c9) popup_snote_single_graphic_window_g

0x832c,	// (0x00024169) popup_snote_single_graphic_window_t1_ParamLimits

0x832c,	// (0x00024169) popup_snote_single_graphic_window_t1

0x833f,	// (0x0002417c) popup_snote_single_graphic_window_t2_ParamLimits

0x833f,	// (0x0002417c) popup_snote_single_graphic_window_t2

0x8352,	// (0x0002418f) popup_snote_single_graphic_window_t3_ParamLimits

0x8352,	// (0x0002418f) popup_snote_single_graphic_window_t3

0x838b,	// (0x000241c8) popup_snote_single_graphic_window_t4_ParamLimits

0x838b,	// (0x000241c8) popup_snote_single_graphic_window_t4

0x83bf,	// (0x000241fc) popup_snote_single_graphic_window_t5_ParamLimits

0x83bf,	// (0x000241fc) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0002b3ce) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0002b3ce) popup_snote_single_graphic_window_t

0xb122,	// (0x00026f5f) grid_graphic_popup_pane_ParamLimits

0xb122,	// (0x00026f5f) grid_graphic_popup_pane

0xb14c,	// (0x00026f89) listscroll_popup_graphic_pane_g1_ParamLimits

0xb14c,	// (0x00026f89) listscroll_popup_graphic_pane_g1

0xb160,	// (0x00026f9d) listscroll_popup_graphic_pane_g2_ParamLimits

0xb160,	// (0x00026f9d) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x0002b7c8) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x0002b7c8) listscroll_popup_graphic_pane_g

0xb174,	// (0x00026fb1) scroll_pane_cp5

0xb0b3,	// (0x00026ef0) cell_graphic_popup_pane_ParamLimits

0xb0b3,	// (0x00026ef0) cell_graphic_popup_pane

0xb094,	// (0x00026ed1) cell_graphic_popup_pane_g1

0xb09c,	// (0x00026ed9) cell_graphic_popup_pane_g2

0x8212,	// (0x0002404f) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x0002b7c1) cell_graphic_popup_pane_g

0xb0a5,	// (0x00026ee2) cell_graphic_popup_pane_t2

0x821b,	// (0x00024058) grid_highlight_pane_cp3

0x8400,	// (0x0002423d) list_gen_pane_ParamLimits

0x8400,	// (0x0002423d) list_gen_pane

0x8432,	// (0x0002426f) scroll_pane

0xafec,	// (0x00026e29) bg_list_pane_g1_ParamLimits

0xafec,	// (0x00026e29) bg_list_pane_g1

0xb009,	// (0x00026e46) bg_list_pane_g2_ParamLimits

0xb009,	// (0x00026e46) bg_list_pane_g2

0xb01e,	// (0x00026e5b) bg_list_pane_g3_ParamLimits

0xb01e,	// (0x00026e5b) bg_list_pane_g3

0xb032,	// (0x00026e6f) bg_list_pane_g4_ParamLimits

0xb032,	// (0x00026e6f) bg_list_pane_g4

0xb046,	// (0x00026e83) bg_list_pane_g5_ParamLimits

0xb046,	// (0x00026e83) bg_list_pane_g5

0x0004,

0xf979,	// (0x0002b7b6) bg_list_pane_g_ParamLimits

0xf979,	// (0x0002b7b6) bg_list_pane_g

0x4e9a,	// (0x00020cd7) list_double2_graphic_large_graphic_pane_ParamLimits

0x4e9a,	// (0x00020cd7) list_double2_graphic_large_graphic_pane

0x4e9a,	// (0x00020cd7) list_double2_graphic_pane_ParamLimits

0x4e9a,	// (0x00020cd7) list_double2_graphic_pane

0x4e9a,	// (0x00020cd7) list_double2_large_graphic_pane_ParamLimits

0x4e9a,	// (0x00020cd7) list_double2_large_graphic_pane

0x4e9a,	// (0x00020cd7) list_double2_pane_ParamLimits

0x4e9a,	// (0x00020cd7) list_double2_pane

0x4e9a,	// (0x00020cd7) list_double_graphic_heading_pane_ParamLimits

0x4e9a,	// (0x00020cd7) list_double_graphic_heading_pane

0x4e9a,	// (0x00020cd7) list_double_graphic_pane_ParamLimits

0x4e9a,	// (0x00020cd7) list_double_graphic_pane

0x4e9a,	// (0x00020cd7) list_double_heading_pane_ParamLimits

0x4e9a,	// (0x00020cd7) list_double_heading_pane

0x4e9a,	// (0x00020cd7) list_double_large_graphic_pane_ParamLimits

0x4e9a,	// (0x00020cd7) list_double_large_graphic_pane

0x4e9a,	// (0x00020cd7) list_double_number_pane_ParamLimits

0x4e9a,	// (0x00020cd7) list_double_number_pane

0x4e9a,	// (0x00020cd7) list_double_pane_ParamLimits

0x4e9a,	// (0x00020cd7) list_double_pane

0x4e9a,	// (0x00020cd7) list_double_time_pane_ParamLimits

0x4e9a,	// (0x00020cd7) list_double_time_pane

0x4e9a,	// (0x00020cd7) list_setting_number_pane_ParamLimits

0x4e9a,	// (0x00020cd7) list_setting_number_pane

0x4e9a,	// (0x00020cd7) list_setting_pane_ParamLimits

0x4e9a,	// (0x00020cd7) list_setting_pane

0x4ee8,	// (0x00020d25) list_single_2graphic_pane_ParamLimits

0x4ee8,	// (0x00020d25) list_single_2graphic_pane

0x4ee8,	// (0x00020d25) list_single_graphic_heading_pane_ParamLimits

0x4ee8,	// (0x00020d25) list_single_graphic_heading_pane

0x4ee8,	// (0x00020d25) list_single_graphic_pane_ParamLimits

0x4ee8,	// (0x00020d25) list_single_graphic_pane

0x4ee8,	// (0x00020d25) list_single_heading_pane_ParamLimits

0x4ee8,	// (0x00020d25) list_single_heading_pane

0xafca,	// (0x00026e07) list_single_large_graphic_pane_ParamLimits

0xafca,	// (0x00026e07) list_single_large_graphic_pane

0x4ee8,	// (0x00020d25) list_single_number_heading_pane_ParamLimits

0x4ee8,	// (0x00020d25) list_single_number_heading_pane

0x4ee8,	// (0x00020d25) list_single_number_pane_ParamLimits

0x4ee8,	// (0x00020d25) list_single_number_pane

0x4ee8,	// (0x00020d25) list_single_pane_ParamLimits

0x4ee8,	// (0x00020d25) list_single_pane

0x7b52,	// (0x0002398f) list_highlight_pane_cp1

0x4501,	// (0x0002033e) list_single_pane_g1_ParamLimits

0x4501,	// (0x0002033e) list_single_pane_g1

0x450d,	// (0x0002034a) list_single_pane_g2_ParamLimits

0x450d,	// (0x0002034a) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0002b3e0) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0002b3e0) list_single_pane_g

0x4e84,	// (0x00020cc1) list_single_pane_t1_ParamLimits

0x4e84,	// (0x00020cc1) list_single_pane_t1

0x4501,	// (0x0002033e) list_single_number_pane_g1_ParamLimits

0x4501,	// (0x0002033e) list_single_number_pane_g1

0x450d,	// (0x0002034a) list_single_number_pane_g2_ParamLimits

0x450d,	// (0x0002034a) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0002b3e0) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0002b3e0) list_single_number_pane_g

0x4e2e,	// (0x00020c6b) list_single_number_pane_t1_ParamLimits

0x4e2e,	// (0x00020c6b) list_single_number_pane_t1

0x4e44,	// (0x00020c81) list_single_number_pane_t2_ParamLimits

0x4e44,	// (0x00020c81) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x0002b777) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x0002b777) list_single_number_pane_t

0x44f5,	// (0x00020332) list_single_graphic_pane_g1_ParamLimits

0x44f5,	// (0x00020332) list_single_graphic_pane_g1

0x4501,	// (0x0002033e) list_single_graphic_pane_g2_ParamLimits

0x4501,	// (0x0002033e) list_single_graphic_pane_g2

0x450d,	// (0x0002034a) list_single_graphic_pane_g3_ParamLimits

0x450d,	// (0x0002034a) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0002b3d9) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0002b3d9) list_single_graphic_pane_g

0x4519,	// (0x00020356) list_single_graphic_pane_t1_ParamLimits

0x4519,	// (0x00020356) list_single_graphic_pane_t1

0x4501,	// (0x0002033e) list_single_heading_pane_g1_ParamLimits

0x4501,	// (0x0002033e) list_single_heading_pane_g1

0x450d,	// (0x0002034a) list_single_heading_pane_g2_ParamLimits

0x450d,	// (0x0002034a) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002b3e0) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002b3e0) list_single_heading_pane_g

0x452f,	// (0x0002036c) list_single_heading_pane_t1_ParamLimits

0x452f,	// (0x0002036c) list_single_heading_pane_t1

0x4545,	// (0x00020382) list_single_heading_pane_t2_ParamLimits

0x4545,	// (0x00020382) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0002b3e5) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0002b3e5) list_single_heading_pane_t

0x4501,	// (0x0002033e) list_single_number_heading_pane_g1_ParamLimits

0x4501,	// (0x0002033e) list_single_number_heading_pane_g1

0x450d,	// (0x0002034a) list_single_number_heading_pane_g2_ParamLimits

0x450d,	// (0x0002034a) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002b3e0) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002b3e0) list_single_number_heading_pane_g

0x452f,	// (0x0002036c) list_single_number_heading_pane_t1_ParamLimits

0x452f,	// (0x0002036c) list_single_number_heading_pane_t1

0x4557,	// (0x00020394) list_single_number_heading_pane_t2_ParamLimits

0x4557,	// (0x00020394) list_single_number_heading_pane_t2

0x4569,	// (0x000203a6) list_single_number_heading_pane_t3_ParamLimits

0x4569,	// (0x000203a6) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0002b3ea) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0002b3ea) list_single_number_heading_pane_t

0x457b,	// (0x000203b8) list_single_graphic_heading_pane_g1_ParamLimits

0x457b,	// (0x000203b8) list_single_graphic_heading_pane_g1

0x4587,	// (0x000203c4) list_single_graphic_heading_pane_g4_ParamLimits

0x4587,	// (0x000203c4) list_single_graphic_heading_pane_g4

0x450d,	// (0x0002034a) list_single_graphic_heading_pane_g5_ParamLimits

0x450d,	// (0x0002034a) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0002b3f1) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0002b3f1) list_single_graphic_heading_pane_g

0x452f,	// (0x0002036c) list_single_graphic_heading_pane_t1_ParamLimits

0x452f,	// (0x0002036c) list_single_graphic_heading_pane_t1

0x4598,	// (0x000203d5) list_single_graphic_heading_pane_t2_ParamLimits

0x4598,	// (0x000203d5) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0002b3f8) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0002b3f8) list_single_graphic_heading_pane_t

0x45aa,	// (0x000203e7) list_single_large_graphic_pane_g1_ParamLimits

0x45aa,	// (0x000203e7) list_single_large_graphic_pane_g1

0x45b6,	// (0x000203f3) list_single_large_graphic_pane_g2_ParamLimits

0x45b6,	// (0x000203f3) list_single_large_graphic_pane_g2

0x45c2,	// (0x000203ff) list_single_large_graphic_pane_g3_ParamLimits

0x45c2,	// (0x000203ff) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0002b3fd) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0002b3fd) list_single_large_graphic_pane_g

0x9feb,	// (0x00025e28) wait_border_pane_g2_copy1

0x45ce,	// (0x0002040b) list_single_large_graphic_pane_g4_cp2

0x45d6,	// (0x00020413) list_single_large_graphic_pane_t1_ParamLimits

0x45d6,	// (0x00020413) list_single_large_graphic_pane_t1

0x45ec,	// (0x00020429) list_double_pane_g1_ParamLimits

0x45ec,	// (0x00020429) list_double_pane_g1

0x45f8,	// (0x00020435) list_double_pane_g2_ParamLimits

0x45f8,	// (0x00020435) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0002b404) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0002b404) list_double_pane_g

0x4604,	// (0x00020441) list_double_pane_t1_ParamLimits

0x4604,	// (0x00020441) list_double_pane_t1

0x461a,	// (0x00020457) list_double_pane_t2_ParamLimits

0x461a,	// (0x00020457) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0002b409) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0002b409) list_double_pane_t

0x462c,	// (0x00020469) list_double2_pane_g1_ParamLimits

0x462c,	// (0x00020469) list_double2_pane_g1

0x463d,	// (0x0002047a) list_double2_pane_g2_ParamLimits

0x463d,	// (0x0002047a) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0002b40e) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0002b40e) list_double2_pane_g

0x4649,	// (0x00020486) list_double2_pane_t1_ParamLimits

0x4649,	// (0x00020486) list_double2_pane_t1

0x465f,	// (0x0002049c) list_double2_pane_t2_ParamLimits

0x465f,	// (0x0002049c) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0002b413) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0002b413) list_double2_pane_t

0x45ec,	// (0x00020429) list_double_number_pane_g1_ParamLimits

0x45ec,	// (0x00020429) list_double_number_pane_g1

0x45f8,	// (0x00020435) list_double_number_pane_g2_ParamLimits

0x45f8,	// (0x00020435) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0002b404) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0002b404) list_double_number_pane_g

0x4671,	// (0x000204ae) list_double_number_pane_t1_ParamLimits

0x4671,	// (0x000204ae) list_double_number_pane_t1

0x4683,	// (0x000204c0) list_double_number_pane_t2_ParamLimits

0x4683,	// (0x000204c0) list_double_number_pane_t2

0x4699,	// (0x000204d6) list_double_number_pane_t3_ParamLimits

0x4699,	// (0x000204d6) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0002b418) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0002b418) list_double_number_pane_t

0x46ab,	// (0x000204e8) list_double_graphic_pane_g1_ParamLimits

0x46ab,	// (0x000204e8) list_double_graphic_pane_g1

0x46b7,	// (0x000204f4) list_double_graphic_pane_g2_ParamLimits

0x46b7,	// (0x000204f4) list_double_graphic_pane_g2

0x46c6,	// (0x00020503) list_double_graphic_pane_g3_ParamLimits

0x46c6,	// (0x00020503) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0002b41f) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0002b41f) list_double_graphic_pane_g

0x46de,	// (0x0002051b) list_double_graphic_pane_t1_ParamLimits

0x46de,	// (0x0002051b) list_double_graphic_pane_t1

0x46f4,	// (0x00020531) list_double_graphic_pane_t2_ParamLimits

0x46f4,	// (0x00020531) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0002b428) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0002b428) list_double_graphic_pane_t

0x4706,	// (0x00020543) list_double2_graphic_pane_g1_ParamLimits

0x4706,	// (0x00020543) list_double2_graphic_pane_g1

0x4712,	// (0x0002054f) list_double2_graphic_pane_g2_ParamLimits

0x4712,	// (0x0002054f) list_double2_graphic_pane_g2

0x463d,	// (0x0002047a) list_double2_graphic_pane_g3_ParamLimits

0x463d,	// (0x0002047a) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0002b42d) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0002b42d) list_double2_graphic_pane_g

0x471e,	// (0x0002055b) list_double2_graphic_pane_t1_ParamLimits

0x471e,	// (0x0002055b) list_double2_graphic_pane_t1

0x4734,	// (0x00020571) list_double2_graphic_pane_t2_ParamLimits

0x4734,	// (0x00020571) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0002b434) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0002b434) list_double2_graphic_pane_t

0x4746,	// (0x00020583) list_double_large_graphic_pane_g1_ParamLimits

0x4746,	// (0x00020583) list_double_large_graphic_pane_g1

0x4765,	// (0x000205a2) list_double_large_graphic_pane_g2_ParamLimits

0x4765,	// (0x000205a2) list_double_large_graphic_pane_g2

0x45f8,	// (0x00020435) list_double_large_graphic_pane_g3_ParamLimits

0x45f8,	// (0x00020435) list_double_large_graphic_pane_g3

0x4776,	// (0x000205b3) list_double_large_graphic_pane_g4_ParamLimits

0x4776,	// (0x000205b3) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0002b439) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0002b439) list_double_large_graphic_pane_g

0x479d,	// (0x000205da) list_double_large_graphic_pane_t1_ParamLimits

0x479d,	// (0x000205da) list_double_large_graphic_pane_t1

0x47b6,	// (0x000205f3) list_double_large_graphic_pane_t2_ParamLimits

0x47b6,	// (0x000205f3) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0002b444) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0002b444) list_double_large_graphic_pane_t

0x47c8,	// (0x00020605) list_double2_large_graphic_pane_g1_ParamLimits

0x47c8,	// (0x00020605) list_double2_large_graphic_pane_g1

0x462c,	// (0x00020469) list_double2_large_graphic_pane_g2_ParamLimits

0x462c,	// (0x00020469) list_double2_large_graphic_pane_g2

0x463d,	// (0x0002047a) list_double2_large_graphic_pane_g3_ParamLimits

0x463d,	// (0x0002047a) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0002b449) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0002b449) list_double2_large_graphic_pane_g

0x47d4,	// (0x00020611) list_double2_large_graphic_pane_t1_ParamLimits

0x47d4,	// (0x00020611) list_double2_large_graphic_pane_t1

0x47ea,	// (0x00020627) list_double2_large_graphic_pane_t2_ParamLimits

0x47ea,	// (0x00020627) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0002b450) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0002b450) list_double2_large_graphic_pane_t

0x47fc,	// (0x00020639) list_double_heading_pane_g1_ParamLimits

0x47fc,	// (0x00020639) list_double_heading_pane_g1

0x480d,	// (0x0002064a) list_double_heading_pane_g2_ParamLimits

0x480d,	// (0x0002064a) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0002b455) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0002b455) list_double_heading_pane_g

0x4819,	// (0x00020656) list_double_heading_pane_t1_ParamLimits

0x4819,	// (0x00020656) list_double_heading_pane_t1

0x465f,	// (0x0002049c) list_double_heading_pane_t2_ParamLimits

0x465f,	// (0x0002049c) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0002b45a) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0002b45a) list_double_heading_pane_t

0x482f,	// (0x0002066c) list_double_graphic_heading_pane_g1_ParamLimits

0x482f,	// (0x0002066c) list_double_graphic_heading_pane_g1

0x47fc,	// (0x00020639) list_double_graphic_heading_pane_g2_ParamLimits

0x47fc,	// (0x00020639) list_double_graphic_heading_pane_g2

0x480d,	// (0x0002064a) list_double_graphic_heading_pane_g3_ParamLimits

0x480d,	// (0x0002064a) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0002b45f) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0002b45f) list_double_graphic_heading_pane_g

0x483b,	// (0x00020678) list_double_graphic_heading_pane_t1_ParamLimits

0x483b,	// (0x00020678) list_double_graphic_heading_pane_t1

0x4734,	// (0x00020571) list_double_graphic_heading_pane_t2_ParamLimits

0x4734,	// (0x00020571) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0002b466) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0002b466) list_double_graphic_heading_pane_t

0x4765,	// (0x000205a2) list_double_time_pane_g1_ParamLimits

0x4765,	// (0x000205a2) list_double_time_pane_g1

0x45f8,	// (0x00020435) list_double_time_pane_g2_ParamLimits

0x45f8,	// (0x00020435) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0002b46b) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0002b46b) list_double_time_pane_g

0x4851,	// (0x0002068e) list_double_time_pane_t1_ParamLimits

0x4851,	// (0x0002068e) list_double_time_pane_t1

0x4867,	// (0x000206a4) list_double_time_pane_t2_ParamLimits

0x4867,	// (0x000206a4) list_double_time_pane_t2

0x4879,	// (0x000206b6) list_double_time_pane_t3_ParamLimits

0x4879,	// (0x000206b6) list_double_time_pane_t3

0x488b,	// (0x000206c8) list_double_time_pane_t4_ParamLimits

0x488b,	// (0x000206c8) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0002b470) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0002b470) list_double_time_pane_t

0x4712,	// (0x0002054f) list_setting_pane_g1_ParamLimits

0x4712,	// (0x0002054f) list_setting_pane_g1

0x463d,	// (0x0002047a) list_setting_pane_g2_ParamLimits

0x463d,	// (0x0002047a) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0002b479) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0002b479) list_setting_pane_g

0x489d,	// (0x000206da) list_setting_pane_t1_ParamLimits

0x489d,	// (0x000206da) list_setting_pane_t1

0x48b7,	// (0x000206f4) list_setting_pane_t2_ParamLimits

0x48b7,	// (0x000206f4) list_setting_pane_t2

0x0002,

0xf641,	// (0x0002b47e) list_setting_pane_t_ParamLimits

0xf641,	// (0x0002b47e) list_setting_pane_t

0x48f6,	// (0x00020733) set_value_pane_cp_ParamLimits

0x48f6,	// (0x00020733) set_value_pane_cp

0x4902,	// (0x0002073f) list_setting_number_pane_g1_ParamLimits

0x4902,	// (0x0002073f) list_setting_number_pane_g1

0x490e,	// (0x0002074b) list_setting_number_pane_g2_ParamLimits

0x490e,	// (0x0002074b) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x0002b485) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x0002b485) list_setting_number_pane_g

0x491a,	// (0x00020757) list_setting_number_pane_t1_ParamLimits

0x491a,	// (0x00020757) list_setting_number_pane_t1

0x4933,	// (0x00020770) list_setting_number_pane_t2_ParamLimits

0x4933,	// (0x00020770) list_setting_number_pane_t2

0x494d,	// (0x0002078a) list_setting_number_pane_t3_ParamLimits

0x494d,	// (0x0002078a) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x0002b48a) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x0002b48a) list_setting_number_pane_t

0x48f6,	// (0x00020733) set_value_pane_ParamLimits

0x48f6,	// (0x00020733) set_value_pane

0x8466,	// (0x000242a3) bg_set_opt_pane_ParamLimits

0x8466,	// (0x000242a3) bg_set_opt_pane

0x4990,	// (0x000207cd) set_value_pane_t1

0x8487,	// (0x000242c4) slider_set_pane_cp3

0x8490,	// (0x000242cd) volume_small_pane_cp

0x8499,	// (0x000242d6) list_form_gen_pane

0x84a2,	// (0x000242df) scroll_pane_cp8

0x49a6,	// (0x000207e3) form_field_data_pane_ParamLimits

0x49a6,	// (0x000207e3) form_field_data_pane

0x49c6,	// (0x00020803) form_field_data_wide_pane_ParamLimits

0x49c6,	// (0x00020803) form_field_data_wide_pane

0x49e7,	// (0x00020824) form_field_popup_pane_ParamLimits

0x49e7,	// (0x00020824) form_field_popup_pane

0x4a07,	// (0x00020844) form_field_popup_wide_pane_ParamLimits

0x4a07,	// (0x00020844) form_field_popup_wide_pane

0x4a24,	// (0x00020861) form_field_slider_pane_ParamLimits

0x4a24,	// (0x00020861) form_field_slider_pane

0x4a37,	// (0x00020874) form_field_slider_wide_pane_ParamLimits

0x4a37,	// (0x00020874) form_field_slider_wide_pane

0x84b3,	// (0x000242f0) data_form_pane

0x4a54,	// (0x00020891) form_field_data_pane_t1

0x84bf,	// (0x000242fc) input_focus_pane

0x4a6c,	// (0x000208a9) data_form_wide_pane

0x4a89,	// (0x000208c6) form_field_data_wide_pane_t1

0x8230,	// (0x0002406d) input_focus_pane_cp6

0x4aab,	// (0x000208e8) form_field_popup_pane_t1

0x84bf,	// (0x000242fc) input_focus_pane_cp7

0x84ed,	// (0x0002432a) list_form_pane

0x4acb,	// (0x00020908) form_field_popup_wide_pane_t1

0x84bf,	// (0x000242fc) input_focus_pane_cp8

0x84f9,	// (0x00024336) list_form_wide_pane

0x4ae8,	// (0x00020925) form_field_slider_pane_t1_ParamLimits

0x4ae8,	// (0x00020925) form_field_slider_pane_t1

0x4afe,	// (0x0002093b) form_field_slider_pane_t2_ParamLimits

0x4afe,	// (0x0002093b) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x0002b49a) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x0002b49a) form_field_slider_pane_t

0x7ead,	// (0x00023cea) input_focus_pane_cp9_ParamLimits

0x7ead,	// (0x00023cea) input_focus_pane_cp9

0x4b13,	// (0x00020950) slider_cont_pane_ParamLimits

0x4b13,	// (0x00020950) slider_cont_pane

0x8505,	// (0x00024342) form_field_slider_wide_pane_t1_ParamLimits

0x8505,	// (0x00024342) form_field_slider_wide_pane_t1

0x4b27,	// (0x00020964) form_field_slider_wide_pane_t2_ParamLimits

0x4b27,	// (0x00020964) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x0002b49f) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x0002b49f) form_field_slider_wide_pane_t

0x7ead,	// (0x00023cea) input_focus_pane_cp10_ParamLimits

0x7ead,	// (0x00023cea) input_focus_pane_cp10

0x4b39,	// (0x00020976) slider_cont_pane_cp1_ParamLimits

0x4b39,	// (0x00020976) slider_cont_pane_cp1

0x4b4d,	// (0x0002098a) slider_form_pane_cp

0x8517,	// (0x00024354) input_focus_pane_g1

0x851f,	// (0x0002435c) input_focus_pane_g2

0x8527,	// (0x00024364) input_focus_pane_g3

0x852f,	// (0x0002436c) input_focus_pane_g4

0x8537,	// (0x00024374) input_focus_pane_g5

0x853f,	// (0x0002437c) input_focus_pane_g6

0x8547,	// (0x00024384) input_focus_pane_g7

0x854f,	// (0x0002438c) input_focus_pane_g8

0x8557,	// (0x00024394) input_focus_pane_g9

0x3179,	// (0x0001efb6) input_focus_pane_g10

0x0009,

0xf667,	// (0x0002b4a4) input_focus_pane_g

0x9ff4,	// (0x00025e31) wait_border_pane_g3_copy1

0x4b55,	// (0x00020992) data_form_pane_t1

0x3179,	// (0x0001efb6) wait_anim_pane_g1_copy1

0x4e56,	// (0x00020c93) data_form_wide_pane_t1

0x4b70,	// (0x000209ad) list_form_graphic_pane_cp_ParamLimits

0x4b70,	// (0x000209ad) list_form_graphic_pane_cp

0xaf20,	// (0x00026d5d) slider_form_pane_g1

0xaf29,	// (0x00026d66) slider_form_pane_g2

0x0006,

0xf96a,	// (0x0002b7a7) slider_form_pane_g

0x4b89,	// (0x000209c6) list_form_graphic_pane_ParamLimits

0x4b89,	// (0x000209c6) list_form_graphic_pane

0x4ba5,	// (0x000209e2) list_form_graphic_pane_g1

0x4bad,	// (0x000209ea) list_form_graphic_pane_t1_ParamLimits

0x4bad,	// (0x000209ea) list_form_graphic_pane_t1

0x7c32,	// (0x00023a6f) list_highlight_pane_cp5_ParamLimits

0x7c32,	// (0x00023a6f) list_highlight_pane_cp5

0x4bc2,	// (0x000209ff) find_pane_g1

0x855f,	// (0x0002439c) input_find_pane

0x4bcb,	// (0x00020a08) input_find_pane_g1_ParamLimits

0x4bcb,	// (0x00020a08) input_find_pane_g1

0x4bd7,	// (0x00020a14) input_find_pane_t1_ParamLimits

0x4bd7,	// (0x00020a14) input_find_pane_t1

0x4bec,	// (0x00020a29) input_find_pane_t2_ParamLimits

0x4bec,	// (0x00020a29) input_find_pane_t2

0x0001,

0xf67c,	// (0x0002b4b9) input_find_pane_t_ParamLimits

0xf67c,	// (0x0002b4b9) input_find_pane_t

0x8568,	// (0x000243a5) input_focus_pane_cp5_ParamLimits

0x8568,	// (0x000243a5) input_focus_pane_cp5

0x8587,	// (0x000243c4) bg_popup_window_pane_cp2_ParamLimits

0x8587,	// (0x000243c4) bg_popup_window_pane_cp2

0x8594,	// (0x000243d1) listscroll_menu_pane_ParamLimits

0x8594,	// (0x000243d1) listscroll_menu_pane

0x85a0,	// (0x000243dd) popup_submenu_window_ParamLimits

0x85a0,	// (0x000243dd) popup_submenu_window

0x85cc,	// (0x00024409) find_popup_pane_g1

0x85d4,	// (0x00024411) input_popup_find_pane_cp

0x85de,	// (0x0002441b) input_focus_pane_cp4_ParamLimits

0x85de,	// (0x0002441b) input_focus_pane_cp4

0x85f8,	// (0x00024435) input_popup_find_pane_t1_ParamLimits

0x85f8,	// (0x00024435) input_popup_find_pane_t1

0x7b52,	// (0x0002398f) bg_popup_sub_pane_cp

0x8626,	// (0x00024463) listscroll_popup_sub_pane

0x862e,	// (0x0002446b) list_submenu_pane_ParamLimits

0x862e,	// (0x0002446b) list_submenu_pane

0x863f,	// (0x0002447c) scroll_pane_cp4

0x8647,	// (0x00024484) list_single_popup_submenu_pane_ParamLimits

0x8647,	// (0x00024484) list_single_popup_submenu_pane

0x865b,	// (0x00024498) list_single_popup_submenu_pane_g1

0x8663,	// (0x000244a0) list_single_popup_submenu_pane_t1_ParamLimits

0x8663,	// (0x000244a0) list_single_popup_submenu_pane_t1

0x7c32,	// (0x00023a6f) bg_active_tab_pane_cp1_ParamLimits

0x7c32,	// (0x00023a6f) bg_active_tab_pane_cp1

0x8678,	// (0x000244b5) tabs_2_active_pane_g1

0x8680,	// (0x000244bd) tabs_2_active_pane_t1

0x7c32,	// (0x00023a6f) bg_passive_tab_pane_cp1_ParamLimits

0x7c32,	// (0x00023a6f) bg_passive_tab_pane_cp1

0x8678,	// (0x000244b5) tabs_2_passive_pane_g1

0x8680,	// (0x000244bd) tabs_2_passive_pane_t1

0x8692,	// (0x000244cf) bg_active_tab_pane_cp4

0x86a0,	// (0x000244dd) tabs_2_long_active_pane_t1

0x86b3,	// (0x000244f0) bg_passive_tab_pane_cp4

0x66f8,	// (0x00022535) list_single_midp_graphic_pane_g4_ParamLimits

0x8692,	// (0x000244cf) bg_active_tab_pane_cp5

0x86bf,	// (0x000244fc) tabs_3_long_active_pane_t1

0x86b3,	// (0x000244f0) bg_passive_tab_pane_cp5

0x66f8,	// (0x00022535) list_single_midp_graphic_pane_g4

0x7c32,	// (0x00023a6f) bg_popup_window_pane_cp13_ParamLimits

0x7c32,	// (0x00023a6f) bg_popup_window_pane_cp13

0x86da,	// (0x00024517) listscroll_popup_fast_pane_ParamLimits

0x86da,	// (0x00024517) listscroll_popup_fast_pane

0x86e9,	// (0x00024526) grid_popup_fast_pane_ParamLimits

0x86e9,	// (0x00024526) grid_popup_fast_pane

0x86fb,	// (0x00024538) scroll_pane_cp9_ParamLimits

0x86fb,	// (0x00024538) scroll_pane_cp9

0xc85f,	// (0x0002869c) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc85f,	// (0x0002869c) list_single_graphic_hl_pane_t1_cp2

0x871f,	// (0x0002455c) input_focus_pane_cp20_ParamLimits

0x871f,	// (0x0002455c) input_focus_pane_cp20

0x872d,	// (0x0002456a) query_popup_data_pane_t1_ParamLimits

0x872d,	// (0x0002456a) query_popup_data_pane_t1

0x8740,	// (0x0002457d) query_popup_data_pane_t2_ParamLimits

0x8740,	// (0x0002457d) query_popup_data_pane_t2

0x8786,	// (0x000245c3) query_popup_data_pane_t3_ParamLimits

0x8786,	// (0x000245c3) query_popup_data_pane_t3

0x87c7,	// (0x00024604) query_popup_data_pane_t4_ParamLimits

0x87c7,	// (0x00024604) query_popup_data_pane_t4

0x8803,	// (0x00024640) query_popup_data_pane_t5_ParamLimits

0x8803,	// (0x00024640) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x0002b4be) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x0002b4be) query_popup_data_pane_t

0x8517,	// (0x00024354) bg_set_opt_pane_g1

0x851f,	// (0x0002435c) bg_set_opt_pane_g2

0x8527,	// (0x00024364) bg_set_opt_pane_g3

0x852f,	// (0x0002436c) bg_set_opt_pane_g4

0x8537,	// (0x00024374) bg_set_opt_pane_g5

0x853f,	// (0x0002437c) bg_set_opt_pane_g6

0x8547,	// (0x00024384) bg_set_opt_pane_g7

0x854f,	// (0x0002438c) bg_set_opt_pane_g8

0x8557,	// (0x00024394) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x0002b4c9) bg_set_opt_pane_g

0x5d98,	// (0x00021bd5) control_top_pane_stacon_ParamLimits

0x5d98,	// (0x00021bd5) control_top_pane_stacon

0x5deb,	// (0x00021c28) signal_pane_stacon_ParamLimits

0x5deb,	// (0x00021c28) signal_pane_stacon

0x8e0e,	// (0x00024c4b) stacon_top_pane_g1_ParamLimits

0x8e0e,	// (0x00024c4b) stacon_top_pane_g1

0x5e10,	// (0x00021c4d) title_pane_stacon_ParamLimits

0x5e10,	// (0x00021c4d) title_pane_stacon

0x5e3a,	// (0x00021c77) uni_indicator_pane_stacon_ParamLimits

0x5e3a,	// (0x00021c77) uni_indicator_pane_stacon

0x5e4f,	// (0x00021c8c) battery_pane_stacon_ParamLimits

0x5e4f,	// (0x00021c8c) battery_pane_stacon

0x5e93,	// (0x00021cd0) control_bottom_pane_stacon_ParamLimits

0x5e93,	// (0x00021cd0) control_bottom_pane_stacon

0x5eb6,	// (0x00021cf3) navi_pane_stacon_ParamLimits

0x5eb6,	// (0x00021cf3) navi_pane_stacon

0x8e30,	// (0x00024c6d) stacon_bottom_pane_g1_ParamLimits

0x8e30,	// (0x00024c6d) stacon_bottom_pane_g1

0x5afb,	// (0x00021938) aid_levels_signal_lsc_ParamLimits

0x5afb,	// (0x00021938) aid_levels_signal_lsc

0x5b11,	// (0x0002194e) signal_pane_stacon_g1_ParamLimits

0x5b11,	// (0x0002194e) signal_pane_stacon_g1

0x5b25,	// (0x00021962) signal_pane_stacon_g2_ParamLimits

0x5b25,	// (0x00021962) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x0002b4dc) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x0002b4dc) signal_pane_stacon_g

0x5b5a,	// (0x00021997) title_pane_stacon_t1_ParamLimits

0x5b5a,	// (0x00021997) title_pane_stacon_t1

0x8847,	// (0x00024684) uni_indicator_pane_stacon_g1

0x8851,	// (0x0002468e) uni_indicator_pane_stacon_g2

0x885b,	// (0x00024698) uni_indicator_pane_stacon_g3

0x8865,	// (0x000246a2) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x0002b4e8) uni_indicator_pane_stacon_g

0x5b7f,	// (0x000219bc) control_top_pane_stacon_g1

0x5b87,	// (0x000219c4) control_top_pane_stacon_t1_ParamLimits

0x5b87,	// (0x000219c4) control_top_pane_stacon_t1

0x5bbe,	// (0x000219fb) aid_levels_battery_lsc_ParamLimits

0x5bbe,	// (0x000219fb) aid_levels_battery_lsc

0x5bd5,	// (0x00021a12) battery_pane_stacon_g1_ParamLimits

0x5bd5,	// (0x00021a12) battery_pane_stacon_g1

0x5be8,	// (0x00021a25) battery_pane_stacon_g2_ParamLimits

0x5be8,	// (0x00021a25) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x0002b4f1) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x0002b4f1) battery_pane_stacon_g

0x5c26,	// (0x00021a63) navi_icon_pane_stacon

0x5c3a,	// (0x00021a77) navi_navi_pane_stacon

0x5c26,	// (0x00021a63) navi_text_pane_stacon

0x5b7f,	// (0x000219bc) control_bottom_pane_stacon_g1

0x5c4e,	// (0x00021a8b) control_bottom_pane_stacon_t1_ParamLimits

0x5c4e,	// (0x00021a8b) control_bottom_pane_stacon_t1

0x8889,	// (0x000246c6) grid_app_pane_ParamLimits

0x8889,	// (0x000246c6) grid_app_pane

0x88ab,	// (0x000246e8) scroll_pane_cp15_ParamLimits

0x88ab,	// (0x000246e8) scroll_pane_cp15

0x88be,	// (0x000246fb) cell_app_pane_ParamLimits

0x88be,	// (0x000246fb) cell_app_pane

0x88e6,	// (0x00024723) cell_app_pane_g1_ParamLimits

0x88e6,	// (0x00024723) cell_app_pane_g1

0x890a,	// (0x00024747) cell_app_pane_g2_ParamLimits

0x890a,	// (0x00024747) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x0002b4f6) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x0002b4f6) cell_app_pane_g

0x8916,	// (0x00024753) cell_app_pane_t1_ParamLimits

0x8916,	// (0x00024753) cell_app_pane_t1

0x892d,	// (0x0002476a) grid_highlight_pane_ParamLimits

0x892d,	// (0x0002476a) grid_highlight_pane

0x8517,	// (0x00024354) cell_highlight_pane_g1

0x851f,	// (0x0002435c) cell_highlight_pane_g2

0x8527,	// (0x00024364) cell_highlight_pane_g3

0x852f,	// (0x0002436c) cell_highlight_pane_g4

0x8537,	// (0x00024374) cell_highlight_pane_g5

0x853f,	// (0x0002437c) cell_highlight_pane_g6

0x8547,	// (0x00024384) cell_highlight_pane_g7

0x854f,	// (0x0002438c) cell_highlight_pane_g8

0x8557,	// (0x00024394) cell_highlight_pane_g9

0x3179,	// (0x0001efb6) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x0002b4a4) cell_highlight_pane_g

0x893e,	// (0x0002477b) bg_scroll_pane

0x5c98,	// (0x00021ad5) scroll_handle_pane

0x8985,	// (0x000247c2) scroll_bg_pane_g1

0x899a,	// (0x000247d7) scroll_bg_pane_g2

0x89b2,	// (0x000247ef) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x0002b4fb) scroll_bg_pane_g

0x89c7,	// (0x00024804) scroll_handle_focus_pane_ParamLimits

0x89c7,	// (0x00024804) scroll_handle_focus_pane

0x8985,	// (0x000247c2) scroll_handle_pane_g1

0x89d4,	// (0x00024811) scroll_handle_pane_g2

0x89b2,	// (0x000247ef) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x0002b502) scroll_handle_pane_g

0x85de,	// (0x0002441b) bg_popup_sub_pane_cp21_ParamLimits

0x85de,	// (0x0002441b) bg_popup_sub_pane_cp21

0x89e8,	// (0x00024825) popup_fep_japan_predictive_window_t1_ParamLimits

0x89e8,	// (0x00024825) popup_fep_japan_predictive_window_t1

0x8a02,	// (0x0002483f) popup_fep_japan_predictive_window_t2_ParamLimits

0x8a02,	// (0x0002483f) popup_fep_japan_predictive_window_t2

0x8a35,	// (0x00024872) popup_fep_japan_predictive_window_t3_ParamLimits

0x8a35,	// (0x00024872) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x0002b509) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x0002b509) popup_fep_japan_predictive_window_t

0x7b52,	// (0x0002398f) bg_popup_sub_pane_cp23

0x8a6c,	// (0x000248a9) listscroll_japin_cand_pane

0x8a74,	// (0x000248b1) popup_fep_japan_candidate_window_t1

0x8a82,	// (0x000248bf) candidate_pane_ParamLimits

0x8a82,	// (0x000248bf) candidate_pane

0x8a94,	// (0x000248d1) scroll_pane_cp30

0x8a9c,	// (0x000248d9) list_single_popup_jap_candidate_pane_ParamLimits

0x8a9c,	// (0x000248d9) list_single_popup_jap_candidate_pane

0x7b52,	// (0x0002398f) list_highlight_pane_cp30

0x8ab1,	// (0x000248ee) list_single_popup_jap_candidate_pane_t1

0x8ac0,	// (0x000248fd) level_1_signal

0x8ad2,	// (0x0002490f) level_2_signal

0x8ae5,	// (0x00024922) level_3_signal

0x8af8,	// (0x00024935) level_4_signal

0x8b0b,	// (0x00024948) level_5_signal

0x8b1e,	// (0x0002495b) level_6_signal

0x8b31,	// (0x0002496e) level_7_signal

0x8ac0,	// (0x000248fd) level_1_battery

0x8ad2,	// (0x0002490f) level_2_battery

0x8ae5,	// (0x00024922) level_3_battery

0x8af8,	// (0x00024935) level_4_battery

0x8b0b,	// (0x00024948) level_5_battery

0x8b1e,	// (0x0002495b) level_6_battery

0x8b31,	// (0x0002496e) level_7_battery

0x8b5c,	// (0x00024999) list_menu_pane_ParamLimits

0x8b5c,	// (0x00024999) list_menu_pane

0x8b72,	// (0x000249af) scroll_pane_cp25_ParamLimits

0x8b72,	// (0x000249af) scroll_pane_cp25

0x8b8b,	// (0x000249c8) list_double2_graphic_pane_cp2_ParamLimits

0x8b8b,	// (0x000249c8) list_double2_graphic_pane_cp2

0x8b8b,	// (0x000249c8) list_double2_large_graphic_pane_cp2_ParamLimits

0x8b8b,	// (0x000249c8) list_double2_large_graphic_pane_cp2

0x8b8b,	// (0x000249c8) list_double2_pane_cp2_ParamLimits

0x8b8b,	// (0x000249c8) list_double2_pane_cp2

0x8b8b,	// (0x000249c8) list_double_graphic_pane_cp2_ParamLimits

0x8b8b,	// (0x000249c8) list_double_graphic_pane_cp2

0x8b8b,	// (0x000249c8) list_double_large_graphic_pane_cp2_ParamLimits

0x8b8b,	// (0x000249c8) list_double_large_graphic_pane_cp2

0x8b8b,	// (0x000249c8) list_double_number_pane_cp2_ParamLimits

0x8b8b,	// (0x000249c8) list_double_number_pane_cp2

0x8b8b,	// (0x000249c8) list_double_pane_cp2_ParamLimits

0x8b8b,	// (0x000249c8) list_double_pane_cp2

0x8baf,	// (0x000249ec) list_single_2graphic_pane_cp2_ParamLimits

0x8baf,	// (0x000249ec) list_single_2graphic_pane_cp2

0x8baf,	// (0x000249ec) list_single_graphic_heading_pane_cp2_ParamLimits

0x8baf,	// (0x000249ec) list_single_graphic_heading_pane_cp2

0x8baf,	// (0x000249ec) list_single_graphic_pane_cp2_ParamLimits

0x8baf,	// (0x000249ec) list_single_graphic_pane_cp2

0x8baf,	// (0x000249ec) list_single_heading_pane_cp2_ParamLimits

0x8baf,	// (0x000249ec) list_single_heading_pane_cp2

0x8bc8,	// (0x00024a05) list_single_large_graphic_pane_cp2_ParamLimits

0x8bc8,	// (0x00024a05) list_single_large_graphic_pane_cp2

0x8baf,	// (0x000249ec) list_single_number_heading_pane_cp2_ParamLimits

0x8baf,	// (0x000249ec) list_single_number_heading_pane_cp2

0x8baf,	// (0x000249ec) list_single_number_pane_cp2_ParamLimits

0x8baf,	// (0x000249ec) list_single_number_pane_cp2

0x8bd9,	// (0x00024a16) list_single_pane_cp2_ParamLimits

0x8bd9,	// (0x00024a16) list_single_pane_cp2

0x8c5d,	// (0x00024a9a) bg_popup_sub_pane_cp22

0x5d4a,	// (0x00021b87) popup_side_volume_key_window_g1

0x5d74,	// (0x00021bb1) popup_side_volume_key_window_t1

0x5d90,	// (0x00021bcd) volume_small_pane_cp1

0x7ead,	// (0x00023cea) bg_popup_sub_pane_cp24_ParamLimits

0x7ead,	// (0x00023cea) bg_popup_sub_pane_cp24

0x8c73,	// (0x00024ab0) fep_china_uni_candidate_pane_ParamLimits

0x8c73,	// (0x00024ab0) fep_china_uni_candidate_pane

0x8c87,	// (0x00024ac4) fep_china_uni_entry_pane

0x8c97,	// (0x00024ad4) popup_fep_china_uni_window_g1

0x8cb3,	// (0x00024af0) fep_china_uni_entry_pane_g1

0x8cbb,	// (0x00024af8) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x0002b53a) fep_china_uni_entry_pane_g

0x8cc3,	// (0x00024b00) fep_entry_item_pane

0x8ccd,	// (0x00024b0a) fep_candidate_item_pane

0x8cd5,	// (0x00024b12) fep_china_uni_candidate_pane_g1

0x8cdd,	// (0x00024b1a) fep_china_uni_candidate_pane_g2

0x8ce5,	// (0x00024b22) fep_china_uni_candidate_pane_g3

0x8ced,	// (0x00024b2a) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x0002b53f) fep_china_uni_candidate_pane_g

0x3179,	// (0x0001efb6) fep_entry_item_pane_g1

0x8cf5,	// (0x00024b32) fep_entry_item_pane_t1_ParamLimits

0x8cf5,	// (0x00024b32) fep_entry_item_pane_t1

0x8d0b,	// (0x00024b48) fep_candidate_item_pane_t1_ParamLimits

0x8d0b,	// (0x00024b48) fep_candidate_item_pane_t1

0x8d20,	// (0x00024b5d) fep_candidate_item_pane_t2_ParamLimits

0x8d20,	// (0x00024b5d) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x0002b548) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x0002b548) fep_candidate_item_pane_t

0x7c32,	// (0x00023a6f) list_highlight_pane_cp31_ParamLimits

0x7c32,	// (0x00023a6f) list_highlight_pane_cp31

0x8d32,	// (0x00024b6f) level_1_signal_lsc

0x8d3b,	// (0x00024b78) level_2_signal_lsc

0x8d44,	// (0x00024b81) level_3_signal_lsc

0x8d4d,	// (0x00024b8a) level_4_signal_lsc

0x8d56,	// (0x00024b93) level_5_signal_lsc

0x8d5f,	// (0x00024b9c) level_6_signal_lsc

0x8d68,	// (0x00024ba5) level_7_signal_lsc

0x8d68,	// (0x00024ba5) level_1_battery_lsc

0x8d71,	// (0x00024bae) level_2_battery_lsc

0x8d7a,	// (0x00024bb7) level_3_battery_lsc

0x8d83,	// (0x00024bc0) level_4_battery_lsc

0x8d8c,	// (0x00024bc9) level_5_battery_lsc

0x8d95,	// (0x00024bd2) level_6_battery_lsc

0x8d32,	// (0x00024b6f) level_7_battery_lsc

0x8d9e,	// (0x00024bdb) scroll_handle_focus_pane_g1

0x8da7,	// (0x00024be4) scroll_handle_focus_pane_g2

0x8db0,	// (0x00024bed) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x0002b54d) scroll_handle_focus_pane_g

0x4c01,	// (0x00020a3e) list_single_2graphic_pane_g1_ParamLimits

0x4c01,	// (0x00020a3e) list_single_2graphic_pane_g1

0x4587,	// (0x000203c4) list_single_2graphic_pane_g2_ParamLimits

0x4587,	// (0x000203c4) list_single_2graphic_pane_g2

0x450d,	// (0x0002034a) list_single_2graphic_pane_g3_ParamLimits

0x450d,	// (0x0002034a) list_single_2graphic_pane_g3

0x4c0d,	// (0x00020a4a) list_single_2graphic_pane_g4_ParamLimits

0x4c0d,	// (0x00020a4a) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x0002b554) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x0002b554) list_single_2graphic_pane_g

0x4c19,	// (0x00020a56) list_single_2graphic_pane_t1_ParamLimits

0x4c19,	// (0x00020a56) list_single_2graphic_pane_t1

0x4c47,	// (0x00020a84) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x4c47,	// (0x00020a84) list_double2_graphic_large_graphic_pane_g1

0x462c,	// (0x00020469) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x462c,	// (0x00020469) list_double2_graphic_large_graphic_pane_g2

0x463d,	// (0x0002047a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x463d,	// (0x0002047a) list_double2_graphic_large_graphic_pane_g3

0x4c57,	// (0x00020a94) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x4c57,	// (0x00020a94) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x0002b55d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x0002b55d) list_double2_graphic_large_graphic_pane_g

0x4c63,	// (0x00020aa0) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x4c63,	// (0x00020aa0) list_double2_graphic_large_graphic_pane_t1

0x4c79,	// (0x00020ab6) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x4c79,	// (0x00020ab6) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x0002b566) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x0002b566) list_double2_graphic_large_graphic_pane_t

0x8efb,	// (0x00024d38) popup_fast_swap_window_ParamLimits

0x8efb,	// (0x00024d38) popup_fast_swap_window

0x8f17,	// (0x00024d54) popup_side_volume_key_window

0x8f33,	// (0x00024d70) stacon_top_pane

0x8f3d,	// (0x00024d7a) status_pane_ParamLimits

0x8f3d,	// (0x00024d7a) status_pane

0x316f,	// (0x0001efac) status_small_pane

0x7b52,	// (0x0002398f) control_pane

0x7b52,	// (0x0002398f) stacon_bottom_pane

0x84a2,	// (0x000242df) scroll_pane_cp121

0x8499,	// (0x000242d6) set_content_pane

0x8db9,	// (0x00024bf6) bg_active_tab_pane_g1_cp1

0x8dc2,	// (0x00024bff) bg_active_tab_pane_g2_cp1

0x8dcb,	// (0x00024c08) bg_active_tab_pane_g3_cp1

0x8db9,	// (0x00024bf6) bg_passive_tab_pane_g1_cp1

0x8dc2,	// (0x00024bff) bg_passive_tab_pane_g2_cp1

0x8dcb,	// (0x00024c08) bg_passive_tab_pane_g3_cp1

0x8dd4,	// (0x00024c11) bg_active_tab_pane_g1_cp2

0x8dc2,	// (0x00024bff) bg_active_tab_pane_g2_cp2

0x8ddd,	// (0x00024c1a) bg_active_tab_pane_g3_cp2

0x8dd4,	// (0x00024c11) bg_passive_tab_pane_g1_cp2

0x8dc2,	// (0x00024bff) bg_passive_tab_pane_g2_cp2

0x8ddd,	// (0x00024c1a) bg_passive_tab_pane_g3_cp2

0x8de6,	// (0x00024c23) bg_active_tab_pane_g1_cp3

0x8dc2,	// (0x00024bff) bg_active_tab_pane_g2_cp3

0x8def,	// (0x00024c2c) bg_active_tab_pane_g3_cp3

0x8de6,	// (0x00024c23) bg_passive_tab_pane_g1_cp3

0x8dc2,	// (0x00024bff) bg_passive_tab_pane_g2_cp3

0x8def,	// (0x00024c2c) bg_passive_tab_pane_g3_cp3

0x8df8,	// (0x00024c35) bg_active_tab_pane_g1_cp4

0x8dc2,	// (0x00024bff) bg_active_tab_pane_g2_cp4

0x8e03,	// (0x00024c40) bg_active_tab_pane_g3_cp4

0x8df8,	// (0x00024c35) bg_passive_tab_pane_g1_cp4

0x8dc2,	// (0x00024bff) bg_passive_tab_pane_g2_cp4

0x8e03,	// (0x00024c40) bg_passive_tab_pane_g3_cp4

0x8e4c,	// (0x00024c89) bg_active_tab_pane_g1_cp5

0x8dc2,	// (0x00024bff) bg_active_tab_pane_g2_cp5

0x8e55,	// (0x00024c92) bg_active_tab_pane_g3_cp5

0x8e4c,	// (0x00024c89) bg_passive_tab_pane_g1_cp5

0x8dc2,	// (0x00024bff) bg_passive_tab_pane_g2_cp5

0x8e55,	// (0x00024c92) bg_passive_tab_pane_g3_cp5

0x8e5e,	// (0x00024c9b) list_set_graphic_pane_ParamLimits

0x8e5e,	// (0x00024c9b) list_set_graphic_pane

0x7b52,	// (0x0002398f) bg_set_opt_pane_cp4

0x8e7e,	// (0x00024cbb) list_set_graphic_pane_g1_ParamLimits

0x8e7e,	// (0x00024cbb) list_set_graphic_pane_g1

0x8e8a,	// (0x00024cc7) list_set_graphic_pane_g2_ParamLimits

0x8e8a,	// (0x00024cc7) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x0002b56b) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x0002b56b) list_set_graphic_pane_g

0x0009,

0xfaaa,	// (0x0002b8e7) volume_small_pane_cp_g

0x8eae,	// (0x00024ceb) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8eae,	// (0x00024ceb) list_double2_large_graphic_pane_g1_cp2

0x8eba,	// (0x00024cf7) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8eba,	// (0x00024cf7) list_double2_large_graphic_pane_g2_cp2

0x8ecb,	// (0x00024d08) list_double2_large_graphic_pane_g3_cp2

0x8ed3,	// (0x00024d10) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8ed3,	// (0x00024d10) list_double2_large_graphic_pane_t1_cp2

0x8ee9,	// (0x00024d26) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8ee9,	// (0x00024d26) list_double2_large_graphic_pane_t2_cp2

0xaad3,	// (0x00026910) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaad3,	// (0x00026910) list_double_large_graphic_pane_g1_cp2

0xaae4,	// (0x00026921) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaae4,	// (0x00026921) list_double_large_graphic_pane_g2_cp2

0x9059,	// (0x00024e96) list_double_large_graphic_pane_g3_cp2

0xaaf5,	// (0x00026932) list_double_large_graphic_pane_g4_cp

0xaafd,	// (0x0002693a) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xaafd,	// (0x0002693a) list_double_large_graphic_pane_t1_cp2

0xab14,	// (0x00026951) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab14,	// (0x00026951) list_double_large_graphic_pane_t2_cp2

0x8f4b,	// (0x00024d88) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8f4b,	// (0x00024d88) list_double2_graphic_pane_g1_cp2

0x8f59,	// (0x00024d96) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8f59,	// (0x00024d96) list_double2_graphic_pane_g2_cp2

0x8f6a,	// (0x00024da7) list_double2_graphic_pane_g3_cp2

0x8f74,	// (0x00024db1) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8f74,	// (0x00024db1) list_double2_graphic_pane_t1_cp2

0x8f8a,	// (0x00024dc7) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8f8a,	// (0x00024dc7) list_double2_graphic_pane_t2_cp2

0x8f9c,	// (0x00024dd9) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8f9c,	// (0x00024dd9) list_single_number_heading_pane_g1_cp2

0x8fa8,	// (0x00024de5) list_single_number_heading_pane_g2_cp2

0x8fb0,	// (0x00024ded) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8fb0,	// (0x00024ded) list_single_number_heading_pane_t1_cp2

0x8fc6,	// (0x00024e03) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8fc6,	// (0x00024e03) list_single_number_heading_pane_t2_cp2

0x8fd8,	// (0x00024e15) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8fd8,	// (0x00024e15) list_single_number_heading_pane_t3_cp2

0x8f9c,	// (0x00024dd9) list_single_heading_pane_g1_cp2_ParamLimits

0x8f9c,	// (0x00024dd9) list_single_heading_pane_g1_cp2

0x8fa8,	// (0x00024de5) list_single_heading_pane_g2_cp2

0x8fb0,	// (0x00024ded) list_single_heading_pane_t1_cp2_ParamLimits

0x8fb0,	// (0x00024ded) list_single_heading_pane_t1_cp2

0xa8db,	// (0x00026718) list_single_heading_pane_t2_cp2_ParamLimits

0xa8db,	// (0x00026718) list_single_heading_pane_t2_cp2

0xa823,	// (0x00026660) list_double_graphic_pane_g1_cp2_ParamLimits

0xa823,	// (0x00026660) list_double_graphic_pane_g1_cp2

0xa82f,	// (0x0002666c) list_double_graphic_pane_g2_cp2_ParamLimits

0xa82f,	// (0x0002666c) list_double_graphic_pane_g2_cp2

0xa83e,	// (0x0002667b) list_double_graphic_pane_g3_cp2

0xa846,	// (0x00026683) list_double_graphic_pane_t1_cp2_ParamLimits

0xa846,	// (0x00026683) list_double_graphic_pane_t1_cp2

0xa85c,	// (0x00026699) list_double_graphic_pane_t2_cp2_ParamLimits

0xa85c,	// (0x00026699) list_double_graphic_pane_t2_cp2

0x904d,	// (0x00024e8a) list_double_number_pane_g1_cp2_ParamLimits

0x904d,	// (0x00024e8a) list_double_number_pane_g1_cp2

0x9059,	// (0x00024e96) list_double_number_pane_g2_cp2

0xa7e7,	// (0x00026624) list_double_number_pane_t1_cp2_ParamLimits

0xa7e7,	// (0x00026624) list_double_number_pane_t1_cp2

0xa7fb,	// (0x00026638) list_double_number_pane_t2_cp2_ParamLimits

0xa7fb,	// (0x00026638) list_double_number_pane_t2_cp2

0xa811,	// (0x0002664e) list_double_number_pane_t3_cp2_ParamLimits

0xa811,	// (0x0002664e) list_double_number_pane_t3_cp2

0xa6c4,	// (0x00026501) list_single_graphic_pane_g1_cp2_ParamLimits

0xa6c4,	// (0x00026501) list_single_graphic_pane_g1_cp2

0x90ba,	// (0x00024ef7) list_single_graphic_pane_g2_cp2_ParamLimits

0x90ba,	// (0x00024ef7) list_single_graphic_pane_g2_cp2

0x90c6,	// (0x00024f03) list_single_graphic_pane_g3_cp2

0xa69a,	// (0x000264d7) list_single_graphic_pane_t1_cp2_ParamLimits

0xa69a,	// (0x000264d7) list_single_graphic_pane_t1_cp2

0x90ba,	// (0x00024ef7) list_single_number_pane_g1_cp2_ParamLimits

0x90ba,	// (0x00024ef7) list_single_number_pane_g1_cp2

0x90c6,	// (0x00024f03) list_single_number_pane_g2_cp2

0xa69a,	// (0x000264d7) list_single_number_pane_t1_cp2_ParamLimits

0xa69a,	// (0x000264d7) list_single_number_pane_t1_cp2

0xa6b0,	// (0x000264ed) list_single_number_pane_t2_cp2_ParamLimits

0xa6b0,	// (0x000264ed) list_single_number_pane_t2_cp2

0x8eba,	// (0x00024cf7) list_double2_pane_g1_cp2_ParamLimits

0x8eba,	// (0x00024cf7) list_double2_pane_g1_cp2

0x8ecb,	// (0x00024d08) list_double2_pane_g2_cp2

0x9025,	// (0x00024e62) list_double2_pane_t1_cp2_ParamLimits

0x9025,	// (0x00024e62) list_double2_pane_t1_cp2

0x903b,	// (0x00024e78) list_double2_pane_t2_cp2_ParamLimits

0x903b,	// (0x00024e78) list_double2_pane_t2_cp2

0x904d,	// (0x00024e8a) list_double_pane_g1_cp2_ParamLimits

0x904d,	// (0x00024e8a) list_double_pane_g1_cp2

0x9059,	// (0x00024e96) list_double_pane_g2_cp2

0x9061,	// (0x00024e9e) list_double_pane_t1_cp2_ParamLimits

0x9061,	// (0x00024e9e) list_double_pane_t1_cp2

0x9077,	// (0x00024eb4) list_double_pane_t2_cp2_ParamLimits

0x9077,	// (0x00024eb4) list_double_pane_t2_cp2

0x90aa,	// (0x00024ee7) list_single_pane_cp2_g3

0x90ba,	// (0x00024ef7) list_single_pane_g1_cp2_ParamLimits

0x90ba,	// (0x00024ef7) list_single_pane_g1_cp2

0x90c6,	// (0x00024f03) list_single_pane_g2_cp2

0x90ce,	// (0x00024f0b) list_single_pane_t1_cp2_ParamLimits

0x90ce,	// (0x00024f0b) list_single_pane_t1_cp2

0x90e6,	// (0x00024f23) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x90e6,	// (0x00024f23) list_single_large_graphic_pane_g1_cp2

0x90f2,	// (0x00024f2f) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x90f2,	// (0x00024f2f) list_single_large_graphic_pane_g2_cp2

0x90fe,	// (0x00024f3b) list_single_large_graphic_pane_g3_cp2

0x9106,	// (0x00024f43) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9106,	// (0x00024f43) list_single_large_graphic_pane_g4_cp1

0x9120,	// (0x00024f5d) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9120,	// (0x00024f5d) list_single_large_graphic_pane_t1_cp2

0xa666,	// (0x000264a3) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa666,	// (0x000264a3) list_single_graphic_heading_pane_g1_cp2

0xa633,	// (0x00026470) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa633,	// (0x00026470) list_single_graphic_heading_pane_g4_cp2

0x90c6,	// (0x00024f03) list_single_graphic_heading_pane_g5_cp2

0xa672,	// (0x000264af) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa672,	// (0x000264af) list_single_graphic_heading_pane_t1_cp2

0xa688,	// (0x000264c5) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa688,	// (0x000264c5) list_single_graphic_heading_pane_t2_cp2

0xa627,	// (0x00026464) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa627,	// (0x00026464) list_single_2graphic_pane_g1_cp2

0xa633,	// (0x00026470) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa633,	// (0x00026470) list_single_2graphic_pane_g2_cp2

0x90c6,	// (0x00024f03) list_single_2graphic_pane_g3_cp2

0xa644,	// (0x00026481) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa644,	// (0x00026481) list_single_2graphic_pane_g4_cp2

0xa650,	// (0x0002648d) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa650,	// (0x0002648d) list_single_2graphic_pane_t1_cp2

0x3179,	// (0x0001efb6) list_highlight_pane_g10_cp1

0xa1ff,	// (0x0002603c) list_highlight_pane_g1_cp1

0xa207,	// (0x00026044) list_highlight_pane_g2_cp1

0xa20f,	// (0x0002604c) list_highlight_pane_g3_cp1

0xa217,	// (0x00026054) list_highlight_pane_g4_cp1

0xa21f,	// (0x0002605c) list_highlight_pane_g5_cp1

0xa227,	// (0x00026064) list_highlight_pane_g6_cp1

0xa22f,	// (0x0002606c) list_highlight_pane_g7_cp1

0xa237,	// (0x00026074) list_highlight_pane_g8_cp1

0xa23f,	// (0x0002607c) list_highlight_pane_g9_cp1

0xa11f,	// (0x00025f5c) form_field_slider_pane_t3

0xa12d,	// (0x00025f6a) form_field_slider_pane_t4

0xa13b,	// (0x00025f78) slider_form_pane_ParamLimits

0xa13b,	// (0x00025f78) slider_form_pane

0x7b52,	// (0x0002398f) control_abbreviations

0x7b52,	// (0x0002398f) control_conventions

0x7b52,	// (0x0002398f) control_definitions

0x7b52,	// (0x0002398f) format_table_attribute

0xa925,	// (0x00026762) bg_popup_preview_window_pane_g9

0x7b52,	// (0x0002398f) format_table_data2

0x7b52,	// (0x0002398f) format_table_data3

0x7b52,	// (0x0002398f) format_table_data_example

0x0008,

0x7b52,	// (0x0002398f) intro_purpose

0xf8ca,	// (0x0002b707) bg_popup_preview_window_pane_g

0x7b52,	// (0x0002398f) texts_category

0x7b52,	// (0x0002398f) texts_graphics

0x9136,	// (0x00024f73) text_digital

0x9145,	// (0x00024f82) text_primary

0x9154,	// (0x00024f91) text_primary_small

0x9163,	// (0x00024fa0) text_secondary

0x9172,	// (0x00024faf) text_title

0xb068,	// (0x00026ea5) bg_passive_tab_pane_g1_cp3_srt

0x8dc2,	// (0x00024bff) bg_passive_tab_pane_g2_cp3_srt

0xb071,	// (0x00026eae) bg_passive_tab_pane_g3_cp3_srt

0x7c32,	// (0x00023a6f) bg_active_tab_pane_cp3_srt_ParamLimits

0x7c32,	// (0x00023a6f) bg_active_tab_pane_cp3_srt

0xb07a,	// (0x00026eb7) tabs_4_active_pane_srt_g1

0xb082,	// (0x00026ebf) tabs_4_active_pane_srt_t1_ParamLimits

0xb082,	// (0x00026ebf) tabs_4_active_pane_srt_t1

0xb068,	// (0x00026ea5) bg_active_tab_pane_g1_cp3_copy1

0x8dc2,	// (0x00024bff) bg_active_tab_pane_g2_cp3_copy1

0xb071,	// (0x00026eae) bg_active_tab_pane_g3_cp3_copy1

0x7c32,	// (0x00023a6f) tabs_2_long_active_pane_srt_ParamLimits

0x7c32,	// (0x00023a6f) tabs_2_long_active_pane_srt

0x7c32,	// (0x00023a6f) tabs_2_long_passive_pane_srt_ParamLimits

0x7c32,	// (0x00023a6f) tabs_2_long_passive_pane_srt

0x86b3,	// (0x000244f0) bg_passive_tab_pane_cp4_srt_ParamLimits

0x86b3,	// (0x000244f0) bg_passive_tab_pane_cp4_srt

0xad53,	// (0x00026b90) bg_passive_tab_pane_g1_cp4_srt

0x8dc2,	// (0x00024bff) bg_passive_tab_pane_g2_cp4_srt

0xad5c,	// (0x00026b99) bg_passive_tab_pane_g3_cp4_srt

0x8692,	// (0x000244cf) bg_active_tab_pane_cp4_srt_ParamLimits

0x8692,	// (0x000244cf) bg_active_tab_pane_cp4_srt

0xad65,	// (0x00026ba2) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad65,	// (0x00026ba2) tabs_2_long_active_pane_srt_t1

0xad53,	// (0x00026b90) bg_active_tab_pane_g1_cp4_srt

0x8dc2,	// (0x00024bff) bg_active_tab_pane_g2_cp4_srt

0xad5c,	// (0x00026b99) bg_active_tab_pane_g3_cp4_srt

0x7ead,	// (0x00023cea) tabs_3_long_active_pane_srt_ParamLimits

0x7ead,	// (0x00023cea) tabs_3_long_active_pane_srt

0x7ead,	// (0x00023cea) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7ead,	// (0x00023cea) tabs_3_long_passive_pane_cp_srt

0x7ead,	// (0x00023cea) tabs_3_long_passive_pane_srt_ParamLimits

0x7ead,	// (0x00023cea) tabs_3_long_passive_pane_srt

0x86b3,	// (0x000244f0) bg_passive_tab_pane_cp5_srt_ParamLimits

0x86b3,	// (0x000244f0) bg_passive_tab_pane_cp5_srt

0x8e4c,	// (0x00024c89) bg_passive_tab_pane_g1_cp5_srt

0x8dc2,	// (0x00024bff) bg_passive_tab_pane_g2_cp5_srt

0x8e55,	// (0x00024c92) bg_passive_tab_pane_g3_cp5_srt

0x8692,	// (0x000244cf) bg_active_tab_pane_cp5_srt_ParamLimits

0x8692,	// (0x000244cf) bg_active_tab_pane_cp5_srt

0xad41,	// (0x00026b7e) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad41,	// (0x00026b7e) tabs_3_long_active_pane_srt_t1

0x8e4c,	// (0x00024c89) bg_active_tab_pane_g1_cp5_srt

0x8dc2,	// (0x00024bff) bg_active_tab_pane_g2_cp5_srt

0x8e55,	// (0x00024c92) bg_active_tab_pane_g3_cp5_srt

0xad33,	// (0x00026b70) navi_text_pane_srt_t1

0xad2b,	// (0x00026b68) navi_icon_pane_srt_g1

0x9347,	// (0x00025184) midp_editing_number_pane_srt

0x9181,	// (0x00024fbe) midp_ticker_pane_srt

0x934f,	// (0x0002518c) midp_ticker_pane_srt_g1

0x9357,	// (0x00025194) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x0002b58a) midp_ticker_pane_srt_g

0x935f,	// (0x0002519c) midp_ticker_pane_srt_t1

0xad1c,	// (0x00026b59) midp_editing_number_pane_t1_copy1

0x9189,	// (0x00024fc6) listscroll_midp_pane

0x9189,	// (0x00024fc6) midp_form_pane

0x91f9,	// (0x00025036) midp_info_popup_window_ParamLimits

0x91f9,	// (0x00025036) midp_info_popup_window

0x85de,	// (0x0002441b) bg_popup_sub_pane_cp50_ParamLimits

0x85de,	// (0x0002441b) bg_popup_sub_pane_cp50

0x9e23,	// (0x00025c60) listscroll_midp_info_pane_ParamLimits

0x9e23,	// (0x00025c60) listscroll_midp_info_pane

0x9e03,	// (0x00025c40) listscroll_form_midp_pane_ParamLimits

0x9e03,	// (0x00025c40) listscroll_form_midp_pane

0x9e0f,	// (0x00025c4c) scroll_bar_cp050

0x9de3,	// (0x00025c20) list_midp_pane

0xbae3,	// (0x00027920) signal_pane_g2_cp

0x9d1d,	// (0x00025b5a) listscroll_midp_info_pane_t1_ParamLimits

0x9d1d,	// (0x00025b5a) listscroll_midp_info_pane_t1

0x9d35,	// (0x00025b72) listscroll_midp_info_pane_t2_ParamLimits

0x9d35,	// (0x00025b72) listscroll_midp_info_pane_t2

0x9d73,	// (0x00025bb0) listscroll_midp_info_pane_t3_ParamLimits

0x9d73,	// (0x00025bb0) listscroll_midp_info_pane_t3

0x9dad,	// (0x00025bea) listscroll_midp_info_pane_t4_ParamLimits

0x9dad,	// (0x00025bea) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x0002b642) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x0002b642) listscroll_midp_info_pane_t

0x863f,	// (0x0002447c) scroll_pane_cp21

0x9cbb,	// (0x00025af8) form_midp_field_choice_group_pane

0x9cc4,	// (0x00025b01) form_midp_field_text_pane

0x9d03,	// (0x00025b40) form_midp_field_time_pane

0x9d0b,	// (0x00025b48) form_midp_gauge_slider_pane

0x9d14,	// (0x00025b51) form_midp_gauge_wait_pane

0x7b52,	// (0x0002398f) form_midp_image_pane

0x4dfc,	// (0x00020c39) list_single_midp_pane_ParamLimits

0x4dfc,	// (0x00020c39) list_single_midp_pane

0x9c73,	// (0x00025ab0) form_midp_field_text_pane_t1

0x9a43,	// (0x00025880) input_focus_pane_cp050

0x9caa,	// (0x00025ae7) list_midp_form_text_pane

0x9c42,	// (0x00025a7f) form_midp_field_choice_group_pane_t1

0x9c50,	// (0x00025a8d) input_focus_pane_cp051

0x9c64,	// (0x00025aa1) list_midp_choice_pane

0x7b52,	// (0x0002398f) status_idle_pane

0x9c26,	// (0x00025a63) form_midp_field_time_pane_t1

0x3179,	// (0x0001efb6) wait_anim_pane_g2_copy1

0x9c34,	// (0x00025a71) form_midp_field_time_pane_t2

0x0001,

0x92a7,	// (0x000250e4) aid_navinavi_width_2_pane

0xf800,	// (0x0002b63d) form_midp_field_time_pane_t

0x7b52,	// (0x0002398f) input_focus_pane_cp052

0x7b52,	// (0x0002398f) bg_input_focus_pane_cp040

0x9be6,	// (0x00025a23) form_midp_gauge_slider_pane_t1

0x9bf4,	// (0x00025a31) form_midp_gauge_slider_pane_t2

0x9c02,	// (0x00025a3f) form_midp_gauge_slider_pane_t3

0x9c10,	// (0x00025a4d) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x0002b634) form_midp_gauge_slider_pane_t

0x9c1e,	// (0x00025a5b) form_midp_slider_pane

0x7c32,	// (0x00023a6f) bg_input_focus_pane_cp041_ParamLimits

0x7c32,	// (0x00023a6f) bg_input_focus_pane_cp041

0x9bb3,	// (0x000259f0) form_midp_gauge_wait_pane_t1_ParamLimits

0x9bb3,	// (0x000259f0) form_midp_gauge_wait_pane_t1

0x9bc5,	// (0x00025a02) form_midp_gauge_wait_pane_t2_ParamLimits

0x9bc5,	// (0x00025a02) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x0002b62f) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x0002b62f) form_midp_gauge_wait_pane_t

0x9bd7,	// (0x00025a14) form_midp_wait_pane_ParamLimits

0x9bd7,	// (0x00025a14) form_midp_wait_pane

0x9b7d,	// (0x000259ba) form_midp_image_pane_g1

0x9b86,	// (0x000259c3) form_midp_image_pane_t1

0x9b95,	// (0x000259d2) form_midp_image_pane_t2

0x9ba4,	// (0x000259e1) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x0002b628) form_midp_image_pane_t

0x9b74,	// (0x000259b1) list_single_midp_pane_g1

0x4ded,	// (0x00020c2a) list_single_midp_pane_t1

0x9b4c,	// (0x00025989) list_midp_form_item_pane_ParamLimits

0x9b4c,	// (0x00025989) list_midp_form_item_pane

0x924f,	// (0x0002508c) list_midp_form_item_pane_t1

0x925e,	// (0x0002509b) midp_ticker_pane_g1

0x926a,	// (0x000250a7) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x0002b570) midp_ticker_pane_g

0x9276,	// (0x000250b3) midp_ticker_pane_t1

0xaf6d,	// (0x00026daa) midp_editing_number_pane_t1

0xaf4b,	// (0x00026d88) midp_editing_number_pane

0xaf5a,	// (0x00026d97) midp_ticker_pane

0xad0c,	// (0x00026b49) ai_message_heading_pane

0x7b52,	// (0x0002398f) bg_popup_window_pane_cp14

0xad14,	// (0x00026b51) listscroll_ai_message_pane

0xac96,	// (0x00026ad3) ai_message_heading_pane_g1_ParamLimits

0xac96,	// (0x00026ad3) ai_message_heading_pane_g1

0xaca2,	// (0x00026adf) ai_message_heading_pane_g2_ParamLimits

0xaca2,	// (0x00026adf) ai_message_heading_pane_g2

0xacae,	// (0x00026aeb) ai_message_heading_pane_g3_ParamLimits

0xacae,	// (0x00026aeb) ai_message_heading_pane_g3

0xacba,	// (0x00026af7) ai_message_heading_pane_g4_ParamLimits

0xacba,	// (0x00026af7) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x0002b769) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x0002b769) ai_message_heading_pane_g

0xacc6,	// (0x00026b03) ai_message_heading_pane_t1_ParamLimits

0xacc6,	// (0x00026b03) ai_message_heading_pane_t1

0xace0,	// (0x00026b1d) ai_message_heading_pane_t2_ParamLimits

0xace0,	// (0x00026b1d) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x0002b772) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x0002b772) ai_message_heading_pane_t

0xacf2,	// (0x00026b2f) bg_popup_heading_pane_cp1_ParamLimits

0xacf2,	// (0x00026b2f) bg_popup_heading_pane_cp1

0xac84,	// (0x00026ac1) list_ai_message_pane_ParamLimits

0xac84,	// (0x00026ac1) list_ai_message_pane

0x863f,	// (0x0002447c) scroll_pane_cp10

0xac20,	// (0x00026a5d) list_ai_message_pane_g1

0xac28,	// (0x00026a65) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x0002b746) list_ai_message_pane_g

0xac30,	// (0x00026a6d) list_ai_message_pane_t1_ParamLimits

0xac30,	// (0x00026a6d) list_ai_message_pane_t1

0xac45,	// (0x00026a82) list_ai_message_pane_t2_ParamLimits

0xac45,	// (0x00026a82) list_ai_message_pane_t2

0xac5a,	// (0x00026a97) list_ai_message_pane_t3_ParamLimits

0xac5a,	// (0x00026a97) list_ai_message_pane_t3

0xac6f,	// (0x00026aac) list_ai_message_pane_t4_ParamLimits

0xac6f,	// (0x00026aac) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x0002b74b) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x0002b74b) list_ai_message_pane_t

0xac0b,	// (0x00026a48) cell_ai_soft_ind_pane_ParamLimits

0xac0b,	// (0x00026a48) cell_ai_soft_ind_pane

0x9288,	// (0x000250c5) cell_ai_soft_ind_pane_g1_ParamLimits

0x9288,	// (0x000250c5) cell_ai_soft_ind_pane_g1

0x7b52,	// (0x0002398f) grid_highlight_cp1

0x9295,	// (0x000250d2) text_secondary_cp56_ParamLimits

0x9295,	// (0x000250d2) text_secondary_cp56

0xabe0,	// (0x00026a1d) example_general_pane_ParamLimits

0xabe0,	// (0x00026a1d) example_general_pane

0xabec,	// (0x00026a29) example_parent_pane_g1_ParamLimits

0xabec,	// (0x00026a29) example_parent_pane_g1

0xabf8,	// (0x00026a35) example_parent_pane_t1_ParamLimits

0xabf8,	// (0x00026a35) example_parent_pane_t1

0x6473,	// (0x000222b0) popup_preview_text_window_ParamLimits

0x6473,	// (0x000222b0) popup_preview_text_window

0x90b2,	// (0x00024eef) list_single_pane_cp2_g4

0x7f89,	// (0x00023dc6) bg_popup_preview_window_pane_ParamLimits

0x7f89,	// (0x00023dc6) bg_popup_preview_window_pane

0xa92d,	// (0x0002676a) popup_preview_text_window_t1_ParamLimits

0xa92d,	// (0x0002676a) popup_preview_text_window_t1

0xa94b,	// (0x00026788) popup_preview_text_window_t2_ParamLimits

0xa94b,	// (0x00026788) popup_preview_text_window_t2

0xa994,	// (0x000267d1) popup_preview_text_window_t3_ParamLimits

0xa994,	// (0x000267d1) popup_preview_text_window_t3

0xa9d9,	// (0x00026816) popup_preview_text_window_t4_ParamLimits

0xa9d9,	// (0x00026816) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x0002b71a) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x0002b71a) popup_preview_text_window_t

0xaa57,	// (0x00026894) scroll_pane_cp11

0x99cf,	// (0x0002580c) bg_popup_preview_window_pane_g1

0xa8ed,	// (0x0002672a) bg_popup_preview_window_pane_g2

0xa8f5,	// (0x00026732) bg_popup_preview_window_pane_g3

0xa8fd,	// (0x0002673a) bg_popup_preview_window_pane_g4

0xa905,	// (0x00026742) bg_popup_preview_window_pane_g5

0xa90d,	// (0x0002674a) bg_popup_preview_window_pane_g6

0xa915,	// (0x00026752) bg_popup_preview_window_pane_g7

0xa91d,	// (0x0002675a) bg_popup_preview_window_pane_g8

0x5687,	// (0x000214c4) aid_popup_width_pane

0x6451,	// (0x0002228e) popup_midp_note_alarm_window_ParamLimits

0x6451,	// (0x0002228e) popup_midp_note_alarm_window

0x84b3,	// (0x000242f0) data_form_pane_ParamLimits

0x4a4a,	// (0x00020887) form_field_data_pane_g1

0x4a54,	// (0x00020891) form_field_data_pane_t1_ParamLimits

0x84bf,	// (0x000242fc) input_focus_pane_ParamLimits

0x4a6c,	// (0x000208a9) data_form_wide_pane_ParamLimits

0x4a7d,	// (0x000208ba) form_field_data_wide_pane_g1

0x4a89,	// (0x000208c6) form_field_data_wide_pane_t1_ParamLimits

0x8230,	// (0x0002406d) input_focus_pane_cp6_ParamLimits

0x85ec,	// (0x00024429) input_popup_find_pane_g1_ParamLimits

0x85ec,	// (0x00024429) input_popup_find_pane_g1

0x5bf9,	// (0x00021a36) aid_navi_side_left_pane

0x5c0e,	// (0x00021a4b) aid_navi_side_right_pane

0xa2fa,	// (0x00026137) bg_popup_window_pane_cp30_ParamLimits

0xa2fa,	// (0x00026137) bg_popup_window_pane_cp30

0xa374,	// (0x000261b1) popup_midp_note_alarm_window_g1_ParamLimits

0xa374,	// (0x000261b1) popup_midp_note_alarm_window_g1

0xa3a4,	// (0x000261e1) popup_midp_note_alarm_window_t1_ParamLimits

0xa3a4,	// (0x000261e1) popup_midp_note_alarm_window_t1

0xa445,	// (0x00026282) popup_midp_note_alarm_window_t2_ParamLimits

0xa445,	// (0x00026282) popup_midp_note_alarm_window_t2

0xa4f3,	// (0x00026330) popup_midp_note_alarm_window_t3_ParamLimits

0xa4f3,	// (0x00026330) popup_midp_note_alarm_window_t3

0xa525,	// (0x00026362) popup_midp_note_alarm_window_t4_ParamLimits

0xa525,	// (0x00026362) popup_midp_note_alarm_window_t4

0xa54b,	// (0x00026388) popup_midp_note_alarm_window_t5_ParamLimits

0xa54b,	// (0x00026388) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x0002b6b7) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x0002b6b7) popup_midp_note_alarm_window_t

0xa5f7,	// (0x00026434) wait_bar_pane_cp1_ParamLimits

0xa5f7,	// (0x00026434) wait_bar_pane_cp1

0x7b52,	// (0x0002398f) wait_anim_pane_copy1

0x7b52,	// (0x0002398f) wait_border_pane_copy1

0x9fe0,	// (0x00025e1d) wait_border_pane_g1_copy1

0x4aa3,	// (0x000208e0) form_field_popup_pane_g1

0x4aab,	// (0x000208e8) form_field_popup_pane_t1_ParamLimits

0x84bf,	// (0x000242fc) input_focus_pane_cp7_ParamLimits

0x84ed,	// (0x0002432a) list_form_pane_ParamLimits

0x4ac3,	// (0x00020900) form_field_popup_wide_pane_g1

0x4acb,	// (0x00020908) form_field_popup_wide_pane_t1_ParamLimits

0x84bf,	// (0x000242fc) input_focus_pane_cp8_ParamLimits

0x84f9,	// (0x00024336) list_form_wide_pane_ParamLimits

0xb10a,	// (0x00026f47) aid_size_cell_graphic_pane

0x4b55,	// (0x00020992) data_form_pane_t1_ParamLimits

0x4e56,	// (0x00020c93) data_form_wide_pane_t1_ParamLimits

0x9596,	// (0x000253d3) bg_status_flat_pane

0x7b92,	// (0x000239cf) title_pane_t1_ParamLimits

0x7bfa,	// (0x00023a37) title_pane_t2_ParamLimits

0x7c20,	// (0x00023a5d) title_pane_t3_ParamLimits

0xf532,	// (0x0002b36f) title_pane_t_ParamLimits

0x8ac0,	// (0x000248fd) level_1_signal_ParamLimits

0x8ad2,	// (0x0002490f) level_2_signal_ParamLimits

0x8ae5,	// (0x00024922) level_3_signal_ParamLimits

0x8af8,	// (0x00024935) level_4_signal_ParamLimits

0x8b0b,	// (0x00024948) level_5_signal_ParamLimits

0x8b1e,	// (0x0002495b) level_6_signal_ParamLimits

0x8b31,	// (0x0002496e) level_7_signal_ParamLimits

0x8ac0,	// (0x000248fd) level_1_battery_ParamLimits

0x8ad2,	// (0x0002490f) level_2_battery_ParamLimits

0x8ae5,	// (0x00024922) level_3_battery_ParamLimits

0x8af8,	// (0x00024935) level_4_battery_ParamLimits

0x8b0b,	// (0x00024948) level_5_battery_ParamLimits

0x8b1e,	// (0x0002495b) level_6_battery_ParamLimits

0x8b31,	// (0x0002496e) level_7_battery_ParamLimits

0xa1ff,	// (0x0002603c) bg_status_flat_pane_g1

0xa207,	// (0x00026044) bg_status_flat_pane_g2

0xa20f,	// (0x0002604c) bg_status_flat_pane_g3

0xa217,	// (0x00026054) bg_status_flat_pane_g4

0xa21f,	// (0x0002605c) bg_status_flat_pane_g5

0xa227,	// (0x00026064) bg_status_flat_pane_g6

0xa22f,	// (0x0002606c) bg_status_flat_pane_g7

0x7c48,	// (0x00023a85) tabs_3_active_pane_t1_ParamLimits

0x7c48,	// (0x00023a85) tabs_3_passive_pane_t1_ParamLimits

0x7c62,	// (0x00023a9f) tabs_4_active_pane_t1_ParamLimits

0x7c62,	// (0x00023a9f) tabs_4_1_passive_pane_t1_ParamLimits

0x8680,	// (0x000244bd) tabs_2_active_pane_t1_ParamLimits

0x8680,	// (0x000244bd) tabs_2_passive_pane_t1_ParamLimits

0x8692,	// (0x000244cf) bg_active_tab_pane_cp4_ParamLimits

0x86a0,	// (0x000244dd) tabs_2_long_active_pane_t1_ParamLimits

0x86b3,	// (0x000244f0) bg_passive_tab_pane_cp4_ParamLimits

0x6720,	// (0x0002255d) list_single_midp_graphic_pane_t1_ParamLimits

0x8692,	// (0x000244cf) bg_active_tab_pane_cp5_ParamLimits

0x86bf,	// (0x000244fc) tabs_3_long_active_pane_t1_ParamLimits

0x86b3,	// (0x000244f0) bg_passive_tab_pane_cp5_ParamLimits

0x6720,	// (0x0002255d) list_single_midp_graphic_pane_t1

0x9596,	// (0x000253d3) bg_status_flat_pane_ParamLimits

0x965f,	// (0x0002549c) indicator_pane_cp2_ParamLimits

0x965f,	// (0x0002549c) indicator_pane_cp2

0x978a,	// (0x000255c7) navi_pane_srt_ParamLimits

0x978a,	// (0x000255c7) navi_pane_srt

0x97ae,	// (0x000255eb) popup_clock_digital_analogue_window_cp1

0x7d0f,	// (0x00023b4c) indicator_pane_t1

0x9181,	// (0x00024fbe) copy_highlight_pane

0x9181,	// (0x00024fbe) cursor_graphics_pane

0x9181,	// (0x00024fbe) graphic_within_text_pane

0x9181,	// (0x00024fbe) link_highlight_pane

0xaa1a,	// (0x00026857) popup_preview_text_window_t5_ParamLimits

0xaa1a,	// (0x00026857) popup_preview_text_window_t5

0x92af,	// (0x000250ec) cursor_digital_pane

0x92af,	// (0x000250ec) cursor_primary_pane

0x92c0,	// (0x000250fd) cursor_primary_small_pane

0x92c8,	// (0x00025105) cursor_secondary_pane

0x92d0,	// (0x0002510d) cursor_title_pane

0x92af,	// (0x000250ec) link_highlight_digital_pane

0x92b7,	// (0x000250f4) link_highlight_primary_pane

0x92c0,	// (0x000250fd) link_highlight_primary_small_pane

0x92c8,	// (0x00025105) link_highlight_secondary_pane

0x92d0,	// (0x0002510d) link_highlight_title_pane

0x92af,	// (0x000250ec) copy_highlight_digital_pane

0x92af,	// (0x000250ec) copy_highlight_primary_pane

0x92c0,	// (0x000250fd) copy_highlight_primary_small_pane

0x92c8,	// (0x00025105) copy_highlight_secondary_pane

0x92d0,	// (0x0002510d) copy_highlight_title_pane

0x92c8,	// (0x00025105) graphic_text_digital_pane

0xa29d,	// (0x000260da) graphic_text_primary_pane

0xa2a6,	// (0x000260e3) graphic_text_primary_small_pane

0x92c0,	// (0x000250fd) graphic_text_secondary_pane

0x92af,	// (0x000250ec) graphic_text_title_pane

0x92d8,	// (0x00025115) cursor_primary_pane_g1

0xa28f,	// (0x000260cc) cursor_text_primary_t1

0xa277,	// (0x000260b4) cursor_primary_small_pane_g1

0xa281,	// (0x000260be) cursor_text_primary_small_t1

0xa25f,	// (0x0002609c) cursor_primary_small_pane_g1_copy1

0xa269,	// (0x000260a6) cursor_text_primary_small_t1_copy1

0xa247,	// (0x00026084) cursor_text_title_t1

0xa255,	// (0x00026092) cursor_title_pane_g1

0x92d8,	// (0x00025115) cursor_digital_pane_g1

0x92e2,	// (0x0002511f) cursor_text_digital_t1

0x9307,	// (0x00025144) link_highlight_primary_pane_g1

0xa1f0,	// (0x0002602d) link_highlight_primary_pane_t1

0x92f0,	// (0x0002512d) link_highlight_primary_small_pane_g1

0x92f8,	// (0x00025135) link_highlight_primary_small_pane_t1

0x9307,	// (0x00025144) link_highlight_secondary_pane_g1

0x930f,	// (0x0002514c) link_highlight_secondary_pane_t1

0xa164,	// (0x00025fa1) link_highlight_title_pane_g1

0xa16c,	// (0x00025fa9) link_highlight_title_pane_t1

0xa14d,	// (0x00025f8a) link_highlight_digital_pane_g1

0xa155,	// (0x00025f92) link_highlight_digital_pane_t1

0xa025,	// (0x00025e62) copy_highlight_primary_pane_g1

0xa02d,	// (0x00025e6a) copy_highlight_primary_pane_t1

0x9fff,	// (0x00025e3c) copy_highlight_primary_small_pane_g1

0xa016,	// (0x00025e53) copy_highlight_primary_small_pane_t1

0x931e,	// (0x0002515b) copy_highlight_secondary_pane_g1

0x9326,	// (0x00025163) copy_highlight_secondary_pane_t1

0x9fff,	// (0x00025e3c) copy_highlight_title_pane_g1

0xa007,	// (0x00025e44) copy_highlight_title_pane_t1

0xa025,	// (0x00025e62) copy_highlight_digital_pane_g1

0xb2d8,	// (0x00027115) copy_highlight_digital_pane_t1

0xb22c,	// (0x00027069) graphic_text_primary_pane_g1

0xb2bc,	// (0x000270f9) graphic_text_primary_pane_t1

0xb2ca,	// (0x00027107) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x0002b7e6) graphic_text_primary_pane_t

0xb298,	// (0x000270d5) graphic_text_primary_small_pane_g1

0xb2a0,	// (0x000270dd) graphic_text_primary_small_pane_t1

0xb2ae,	// (0x000270eb) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x0002b7e1) graphic_text_primary_small_pane_t

0xb274,	// (0x000270b1) graphic_text_secondary_pane_g1

0xb27c,	// (0x000270b9) graphic_text_secondary_pane_t1

0xb28a,	// (0x000270c7) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x0002b7dc) graphic_text_secondary_pane_t

0xb250,	// (0x0002708d) graphic_text_title_pane_g1

0xb258,	// (0x00027095) graphic_text_title_pane_t1

0xb266,	// (0x000270a3) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x0002b7d7) graphic_text_title_pane_t

0xb22c,	// (0x00027069) graphic_text_digital_pane_g1

0xb234,	// (0x00027071) graphic_text_digital_pane_t1

0xb242,	// (0x0002707f) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x0002b7d2) graphic_text_digital_pane_t

0x7c32,	// (0x00023a6f) navi_icon_pane_srt_ParamLimits

0x7c32,	// (0x00023a6f) navi_icon_pane_srt

0x7b52,	// (0x0002398f) navi_midp_pane_srt

0x7b52,	// (0x0002398f) navi_navi_pane_srt

0x7c32,	// (0x00023a6f) navi_text_pane_srt_ParamLimits

0x7c32,	// (0x00023a6f) navi_text_pane_srt

0xb1f7,	// (0x00027034) navi_navi_icon_text_pane_srt

0xb1ff,	// (0x0002703c) navi_navi_pane_srt_g1_ParamLimits

0xb1ff,	// (0x0002703c) navi_navi_pane_srt_g1

0xb211,	// (0x0002704e) navi_navi_pane_srt_g2_ParamLimits

0xb211,	// (0x0002704e) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x0002b7cd) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x0002b7cd) navi_navi_pane_srt_g

0xb223,	// (0x00027060) navi_navi_tabs_pane_srt

0xb1f7,	// (0x00027034) navi_navi_text_pane_srt

0xb1f7,	// (0x00027034) navi_navi_volume_pane_srt

0xb1e8,	// (0x00027025) navi_navi_text_pane_srt_t1

0x6a9a,	// (0x000228d7) navi_navi_volume_pane_srt_g1

0x6aa2,	// (0x000228df) volume_small_pane_srt_ParamLimits

0x6aa2,	// (0x000228df) volume_small_pane_srt

0x5ed9,	// (0x00021d16) volume_small_pane_srt_g1_ParamLimits

0x5ed9,	// (0x00021d16) volume_small_pane_srt_g1

0x5ee9,	// (0x00021d26) volume_small_pane_srt_g2_ParamLimits

0x5ee9,	// (0x00021d26) volume_small_pane_srt_g2

0x5efa,	// (0x00021d37) volume_small_pane_srt_g3_ParamLimits

0x5efa,	// (0x00021d37) volume_small_pane_srt_g3

0x5f0b,	// (0x00021d48) volume_small_pane_srt_g4_ParamLimits

0x5f0b,	// (0x00021d48) volume_small_pane_srt_g4

0x5f1c,	// (0x00021d59) volume_small_pane_srt_g5_ParamLimits

0x5f1c,	// (0x00021d59) volume_small_pane_srt_g5

0x5f2d,	// (0x00021d6a) volume_small_pane_srt_g6_ParamLimits

0x5f2d,	// (0x00021d6a) volume_small_pane_srt_g6

0x5f3e,	// (0x00021d7b) volume_small_pane_srt_g7_ParamLimits

0x5f3e,	// (0x00021d7b) volume_small_pane_srt_g7

0x5f4f,	// (0x00021d8c) volume_small_pane_srt_g8_ParamLimits

0x5f4f,	// (0x00021d8c) volume_small_pane_srt_g8

0x5f60,	// (0x00021d9d) volume_small_pane_srt_g9_ParamLimits

0x5f60,	// (0x00021d9d) volume_small_pane_srt_g9

0x5f71,	// (0x00021dae) volume_small_pane_srt_g10_ParamLimits

0x5f71,	// (0x00021dae) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x0002b575) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x0002b575) volume_small_pane_srt_g

0x8032,	// (0x00023e6f) query_popup_data_pane_cp2

0xb1ce,	// (0x0002700b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1ce,	// (0x0002700b) navi_navi_icon_text_pane_srt_t1

0xa29d,	// (0x000260da) navi_tabs_2_long_pane_srt

0xa29d,	// (0x000260da) navi_tabs_2_pane_srt

0xa29d,	// (0x000260da) navi_tabs_3_long_pane_srt

0xa29d,	// (0x000260da) navi_tabs_3_pane_srt

0xa29d,	// (0x000260da) navi_tabs_4_pane_srt

0x6a7a,	// (0x000228b7) tabs_2_active_pane_srt_ParamLimits

0x6a7a,	// (0x000228b7) tabs_2_active_pane_srt

0x6a8a,	// (0x000228c7) tabs_2_passive_pane_srt_ParamLimits

0x6a8a,	// (0x000228c7) tabs_2_passive_pane_srt

0x94a5,	// (0x000252e2) bg_passive_tab_pane_cp1_srt_ParamLimits

0x94a5,	// (0x000252e2) bg_passive_tab_pane_cp1_srt

0xb19a,	// (0x00026fd7) bg_passive_tab_pane_g1_cp1_srt

0x8dc2,	// (0x00024bff) bg_passive_tab_pane_g2_cp1_srt

0xb1a3,	// (0x00026fe0) bg_passive_tab_pane_g3_cp1_srt

0x7c32,	// (0x00023a6f) bg_active_tab_pane_cp1_srt_ParamLimits

0x7c32,	// (0x00023a6f) bg_active_tab_pane_cp1_srt

0xb1ac,	// (0x00026fe9) tabs_2_active_pane_srt_g1

0xb1b4,	// (0x00026ff1) tabs_2_active_pane_srt_t1_ParamLimits

0xb1b4,	// (0x00026ff1) tabs_2_active_pane_srt_t1

0xb19a,	// (0x00026fd7) bg_active_tab_pane_g1_cp1_srt

0x8dc2,	// (0x00024bff) bg_active_tab_pane_g2_cp1_srt

0xb1a3,	// (0x00026fe0) bg_active_tab_pane_g3_cp1_srt

0x6a47,	// (0x00022884) tabs_3_active_pane_srt_ParamLimits

0x6a47,	// (0x00022884) tabs_3_active_pane_srt

0x6a58,	// (0x00022895) tabs_3_passive_pane_cp_srt_ParamLimits

0x6a58,	// (0x00022895) tabs_3_passive_pane_cp_srt

0x6a69,	// (0x000228a6) tabs_3_passive_pane_srt_ParamLimits

0x6a69,	// (0x000228a6) tabs_3_passive_pane_srt

0x94a5,	// (0x000252e2) bg_passive_tab_pane_cp2_srt_ParamLimits

0x94a5,	// (0x000252e2) bg_passive_tab_pane_cp2_srt

0x9335,	// (0x00025172) bg_passive_tab_pane_g1_cp2_srt

0x8dc2,	// (0x00024bff) bg_passive_tab_pane_g2_cp2_srt

0x933e,	// (0x0002517b) bg_passive_tab_pane_g3_cp2_srt

0x7c32,	// (0x00023a6f) bg_active_tab_pane_cp2_srt_ParamLimits

0x7c32,	// (0x00023a6f) bg_active_tab_pane_cp2_srt

0xb180,	// (0x00026fbd) tabs_3_active_pane_srt_g1

0xb188,	// (0x00026fc5) tabs_3_active_pane_srt_t1_ParamLimits

0xb188,	// (0x00026fc5) tabs_3_active_pane_srt_t1

0x9335,	// (0x00025172) bg_active_tab_pane_g1_cp2_srt

0x8dc2,	// (0x00024bff) bg_active_tab_pane_g2_cp2_srt

0x933e,	// (0x0002517b) bg_active_tab_pane_g3_cp2_srt

0x69ff,	// (0x0002283c) tabs_4_active_pane_srt_ParamLimits

0x69ff,	// (0x0002283c) tabs_4_active_pane_srt

0x6a11,	// (0x0002284e) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6a11,	// (0x0002284e) tabs_4_passive_pane_cp2_srt

0x60e4,	// (0x00021f21) aid_size_cell_toolbar

0x86b3,	// (0x000244f0) main_idle_act_pane_ParamLimits

0x6287,	// (0x000220c4) popup_large_graphic_colour_window_ParamLimits

0x65ee,	// (0x0002242b) popup_toolbar_window_ParamLimits

0x65ee,	// (0x0002242b) popup_toolbar_window

0x4eb6,	// (0x00020cf3) list_single_graphic_2heading_pane_ParamLimits

0x4eb6,	// (0x00020cf3) list_single_graphic_2heading_pane

0x886f,	// (0x000246ac) aid_size_cell_apps_grid_lsc_pane

0x8881,	// (0x000246be) aid_size_cell_apps_grid_prt_pane

0x94a5,	// (0x000252e2) bg_wml_button_pane_cp1_ParamLimits

0x94a5,	// (0x000252e2) bg_wml_button_pane_cp1

0x9c73,	// (0x00025ab0) form_midp_field_text_pane_t1_ParamLimits

0x9a43,	// (0x00025880) input_focus_pane_cp050_ParamLimits

0x9caa,	// (0x00025ae7) list_midp_form_text_pane_ParamLimits

0x9c50,	// (0x00025a8d) input_focus_pane_cp051_ParamLimits

0x9c64,	// (0x00025aa1) list_midp_choice_pane_ParamLimits

0x9afc,	// (0x00025939) list_single_2graphic_pane_cp3_ParamLimits

0x9afc,	// (0x00025939) list_single_2graphic_pane_cp3

0x9b1d,	// (0x0002595a) list_single_midp_graphic_pane_ParamLimits

0x9b1d,	// (0x0002595a) list_single_midp_graphic_pane

0x4cb7,	// (0x00020af4) list_single_graphic_2heading_pane_g1_ParamLimits

0x4cb7,	// (0x00020af4) list_single_graphic_2heading_pane_g1

0x4cc3,	// (0x00020b00) list_single_graphic_2heading_pane_g4_ParamLimits

0x4cc3,	// (0x00020b00) list_single_graphic_2heading_pane_g4

0x4ccf,	// (0x00020b0c) list_single_graphic_2heading_pane_g5_ParamLimits

0x4ccf,	// (0x00020b0c) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x0002b5c8) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x0002b5c8) list_single_graphic_2heading_pane_g

0x4cdb,	// (0x00020b18) list_single_graphic_2heading_pane_t1_ParamLimits

0x4cdb,	// (0x00020b18) list_single_graphic_2heading_pane_t1

0x4cef,	// (0x00020b2c) list_single_graphic_2heading_pane_t2_ParamLimits

0x4cef,	// (0x00020b2c) list_single_graphic_2heading_pane_t2

0x4d09,	// (0x00020b46) list_single_graphic_2heading_pane_t3_ParamLimits

0x4d09,	// (0x00020b46) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x0002b5cf) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x0002b5cf) list_single_graphic_2heading_pane_t

0x990d,	// (0x0002574a) bg_popup_sub_pane_cp2

0x9937,	// (0x00025774) grid_toobar_pane

0x669b,	// (0x000224d8) cell_toolbar_pane_ParamLimits

0x669b,	// (0x000224d8) cell_toolbar_pane

0x9973,	// (0x000257b0) cell_toolbar_pane_g1_ParamLimits

0x9973,	// (0x000257b0) cell_toolbar_pane_g1

0x9987,	// (0x000257c4) cell_toolbar_pane_g2_ParamLimits

0x9987,	// (0x000257c4) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x0002b5dd) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x0002b5dd) cell_toolbar_pane_g

0x99a9,	// (0x000257e6) grid_highlight_pane_cp2_ParamLimits

0x99a9,	// (0x000257e6) grid_highlight_pane_cp2

0x99c3,	// (0x00025800) toolbar_button_pane

0x99cf,	// (0x0002580c) toolbar_button_pane_g1

0x99d7,	// (0x00025814) toolbar_button_pane_g2

0x99df,	// (0x0002581c) toolbar_button_pane_g3

0x99e7,	// (0x00025824) toolbar_button_pane_g4

0x99ef,	// (0x0002582c) toolbar_button_pane_g5

0x99f7,	// (0x00025834) toolbar_button_pane_g6

0x99ff,	// (0x0002583c) toolbar_button_pane_g7

0x9a07,	// (0x00025844) toolbar_button_pane_g8

0x9a0f,	// (0x0002584c) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x0002b5e2) toolbar_button_pane_g

0x66d3,	// (0x00022510) list_single_2graphic_pane_g1_cp3_ParamLimits

0x66d3,	// (0x00022510) list_single_2graphic_pane_g1_cp3

0x66df,	// (0x0002251c) list_single_2graphic_pane_g2_cp3_ParamLimits

0x66df,	// (0x0002251c) list_single_2graphic_pane_g2_cp3

0x66f0,	// (0x0002252d) list_single_2graphic_pane_g3_cp3

0x66f8,	// (0x00022535) list_single_2graphic_pane_g4_cp3_ParamLimits

0x66f8,	// (0x00022535) list_single_2graphic_pane_g4_cp3

0x6704,	// (0x00022541) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6704,	// (0x00022541) list_single_2graphic_pane_t1_cp3

0xa755,	// (0x00026592) list_single_midp_graphic_pane_g2_ParamLimits

0xa755,	// (0x00026592) list_single_midp_graphic_pane_g2

0x60ec,	// (0x00021f29) aid_zoom_text_primary

0x4c8b,	// (0x00020ac8) aid_zoom_text_secondary

0x93ef,	// (0x0002522c) status_small_pane_g7_ParamLimits

0x93ef,	// (0x0002522c) status_small_pane_g7

0x9412,	// (0x0002524f) status_small_pane_t1_ParamLimits

0x7b69,	// (0x000239a6) title_pane_g2

0x0003,

0xf529,	// (0x0002b366) title_pane_g

0x80da,	// (0x00023f17) aid_size_cell_colour_1_pane_ParamLimits

0x80da,	// (0x00023f17) aid_size_cell_colour_1_pane

0x80ee,	// (0x00023f2b) aid_size_cell_colour_2_pane_ParamLimits

0x80ee,	// (0x00023f2b) aid_size_cell_colour_2_pane

0x8102,	// (0x00023f3f) aid_size_cell_colour_3_pane_ParamLimits

0x8102,	// (0x00023f3f) aid_size_cell_colour_3_pane

0x8116,	// (0x00023f53) aid_size_cell_colour_4_pane_ParamLimits

0x8116,	// (0x00023f53) aid_size_cell_colour_4_pane

0x5b36,	// (0x00021973) title_pane_stacon_g1_ParamLimits

0x5b36,	// (0x00021973) title_pane_stacon_g1

0xa084,	// (0x00025ec1) popup_note_wait_window_g3_ParamLimits

0xa084,	// (0x00025ec1) popup_note_wait_window_g3

0xa0fa,	// (0x00025f37) popup_note_wait_window_t5_ParamLimits

0xa0fa,	// (0x00025f37) popup_note_wait_window_t5

0x7b52,	// (0x0002398f) main_feb_china_hwr_fs_writing_pane

0x6168,	// (0x00021fa5) popup_feb_china_hwr_fs_window_ParamLimits

0x6168,	// (0x00021fa5) popup_feb_china_hwr_fs_window

0x6736,	// (0x00022573) aid_size_cell_hwr_fs_ParamLimits

0x6736,	// (0x00022573) aid_size_cell_hwr_fs

0x9a43,	// (0x00025880) bg_popup_sub_pane_cp3_ParamLimits

0x9a43,	// (0x00025880) bg_popup_sub_pane_cp3

0x674b,	// (0x00022588) grid_hwr_fs_pane_ParamLimits

0x674b,	// (0x00022588) grid_hwr_fs_pane

0x6763,	// (0x000225a0) linegrid_hwr_fs_pane_ParamLimits

0x6763,	// (0x000225a0) linegrid_hwr_fs_pane

0x6773,	// (0x000225b0) cell_hwr_fs_pane_ParamLimits

0x6773,	// (0x000225b0) cell_hwr_fs_pane

0x9a4f,	// (0x0002588c) linegrid_hwr_fs_pane_g1_ParamLimits

0x9a4f,	// (0x0002588c) linegrid_hwr_fs_pane_g1

0x9a5b,	// (0x00025898) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a5b,	// (0x00025898) linegrid_hwr_fs_pane_g2

0x9a6d,	// (0x000258aa) linegrid_hwr_fs_pane_g3_ParamLimits

0x9a6d,	// (0x000258aa) linegrid_hwr_fs_pane_g3

0x6795,	// (0x000225d2) linegrid_hwr_fs_pane_g4_ParamLimits

0x6795,	// (0x000225d2) linegrid_hwr_fs_pane_g4

0x67af,	// (0x000225ec) linegrid_hwr_fs_pane_g5_ParamLimits

0x67af,	// (0x000225ec) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x0002b60d) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x0002b60d) linegrid_hwr_fs_pane_g

0x9a79,	// (0x000258b6) cell_hwr_fs_pane_g1_ParamLimits

0x9a79,	// (0x000258b6) cell_hwr_fs_pane_g1

0x9844,	// (0x00025681) cell_hwr_fs_pane_g2_ParamLimits

0x9844,	// (0x00025681) cell_hwr_fs_pane_g2

0x9a8f,	// (0x000258cc) cell_hwr_fs_pane_g3_ParamLimits

0x9a8f,	// (0x000258cc) cell_hwr_fs_pane_g3

0x9a9c,	// (0x000258d9) cell_hwr_fs_pane_g4_ParamLimits

0x9a9c,	// (0x000258d9) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x0002b618) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x0002b618) cell_hwr_fs_pane_g

0x67c5,	// (0x00022602) cell_hwr_fs_pane_t1

0x7b52,	// (0x0002398f) grid_highlight_pane_cp6

0x7b52,	// (0x0002398f) main_idle_act2_pane

0x8626,	// (0x00024463) aid_inside_area_popup_secondary

0xa731,	// (0x0002656e) aid_inside_area_window_primary_ParamLimits

0xa731,	// (0x0002656e) aid_inside_area_window_primary

0xb2e7,	// (0x00027124) ai2_news_ticker_pane

0xb2ef,	// (0x0002712c) aid_size_cell_ai1_link_ParamLimits

0xb2ef,	// (0x0002712c) aid_size_cell_ai1_link

0xb309,	// (0x00027146) popup_ai2_data_window_ParamLimits

0xb309,	// (0x00027146) popup_ai2_data_window

0xb31f,	// (0x0002715c) popup_ai2_link_window_ParamLimits

0xb31f,	// (0x0002715c) popup_ai2_link_window

0x9a43,	// (0x00025880) bg_popup_sub_pane_cp4_ParamLimits

0x9a43,	// (0x00025880) bg_popup_sub_pane_cp4

0xb333,	// (0x00027170) grid_ai2_link_pane_ParamLimits

0xb333,	// (0x00027170) grid_ai2_link_pane

0xb34a,	// (0x00027187) popup_ai2_link_window_g1_ParamLimits

0xb34a,	// (0x00027187) popup_ai2_link_window_g1

0xb356,	// (0x00027193) popup_ai2_link_window_g2_ParamLimits

0xb356,	// (0x00027193) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x0002b7eb) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x0002b7eb) popup_ai2_link_window_g

0xb365,	// (0x000271a2) ai2_mp_button_pane

0xb36d,	// (0x000271aa) ai2_mp_volume_pane

0x9c50,	// (0x00025a8d) bg_popup_sub_pane_cp5_ParamLimits

0x9c50,	// (0x00025a8d) bg_popup_sub_pane_cp5

0xb375,	// (0x000271b2) heading_ai2_gene_pane_ParamLimits

0xb375,	// (0x000271b2) heading_ai2_gene_pane

0xb381,	// (0x000271be) list_ai2_gene_pane_ParamLimits

0xb381,	// (0x000271be) list_ai2_gene_pane

0xb3c9,	// (0x00027206) cell_ai2_link_pane_ParamLimits

0xb3c9,	// (0x00027206) cell_ai2_link_pane

0xb3df,	// (0x0002721c) cell_ai2_link_pane_g1

0x7b52,	// (0x0002398f) grid_highlight_pane_cp7

0x6ab7,	// (0x000228f4) ai2_mp_volume_pane_g1

0xb4af,	// (0x000272ec) ai2_mp_volume_pane_g2

0xb424,	// (0x00027261) list_ai2_gene_pane_t1

0xb4b7,	// (0x000272f4) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x0002b804) ai2_mp_volume_pane_g

0x6abf,	// (0x000228fc) volume_small_pane_cp3

0xb4bf,	// (0x000272fc) aid_size_cell_ai2_button

0xb4c7,	// (0x00027304) grid_ai2_button_pane

0xb4d0,	// (0x0002730d) cell_ai2_button_pane_ParamLimits

0xb4d0,	// (0x0002730d) cell_ai2_button_pane

0x3179,	// (0x0001efb6) cell_ai2_button_pane_g1

0x7b52,	// (0x0002398f) grid_highlight_pane_cp8

0xb46f,	// (0x000272ac) ai2_gene_pane_t1_ParamLimits

0xb46f,	// (0x000272ac) ai2_gene_pane_t1

0x60da,	// (0x00021f17) aid_height_parent_landscape

0xadb3,	// (0x00026bf0) aid_height_set_list

0xadc4,	// (0x00026c01) aid_size_parent

0xb10a,	// (0x00026f47) aid_size_cell_graphic_pane_ParamLimits

0xb391,	// (0x000271ce) popup_ai2_data_window_g1_ParamLimits

0xb391,	// (0x000271ce) popup_ai2_data_window_g1

0xb39d,	// (0x000271da) ai2_news_ticker_pane_g1

0xb3a5,	// (0x000271e2) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x0002b7f0) ai2_news_ticker_pane_g

0xb3ad,	// (0x000271ea) ai2_news_ticker_pane_t1

0xb3bb,	// (0x000271f8) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x0002b7f5) ai2_news_ticker_pane_t

0xb3e8,	// (0x00027225) heading_ai2_gene_pane_g1

0xb3f0,	// (0x0002722d) heading_ai2_gene_pane_t1_ParamLimits

0xb3f0,	// (0x0002722d) heading_ai2_gene_pane_t1

0xb405,	// (0x00027242) list_highlight_pane_cp6

0xb40d,	// (0x0002724a) ai2_gene_pane_ParamLimits

0xb40d,	// (0x0002724a) ai2_gene_pane

0xb432,	// (0x0002726f) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x0002b7fa) list_ai2_gene_pane_t

0xb440,	// (0x0002727d) list_highlight_pane_cp8_ParamLimits

0xb440,	// (0x0002727d) list_highlight_pane_cp8

0xb451,	// (0x0002728e) ai2_gene_pane_g1_ParamLimits

0xb451,	// (0x0002728e) ai2_gene_pane_g1

0xb463,	// (0x000272a0) ai2_gene_pane_g2_ParamLimits

0xb463,	// (0x000272a0) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x0002b7ff) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x0002b7ff) ai2_gene_pane_g

0x8455,	// (0x00024292) scroll_pane_cp12

0x6097,	// (0x00021ed4) control_pane_t3_ParamLimits

0x6097,	// (0x00021ed4) control_pane_t3

0x9403,	// (0x00025240) status_small_pane_g8_ParamLimits

0x9403,	// (0x00025240) status_small_pane_g8

0x624e,	// (0x0002208b) popup_find_window_ParamLimits

0x6465,	// (0x000222a2) popup_note_image_window_ParamLimits

0x4cb7,	// (0x00020af4) list_double2_graphic_pane_vc_g1_ParamLimits

0x4cb7,	// (0x00020af4) list_double2_graphic_pane_vc_g1

0x4d21,	// (0x00020b5e) list_double2_graphic_pane_vc_g2_ParamLimits

0x4d21,	// (0x00020b5e) list_double2_graphic_pane_vc_g2

0x4d2d,	// (0x00020b6a) list_double2_graphic_pane_vc_g3_ParamLimits

0x4d2d,	// (0x00020b6a) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x0002b5d6) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x0002b5d6) list_double2_graphic_pane_vc_g

0x4d39,	// (0x00020b76) list_double2_graphic_pane_vc_t1_ParamLimits

0x4d39,	// (0x00020b76) list_double2_graphic_pane_vc_t1

0x4cc3,	// (0x00020b00) list_single_heading_pane_vc_g1_ParamLimits

0x4cc3,	// (0x00020b00) list_single_heading_pane_vc_g1

0x4ccf,	// (0x00020b0c) list_single_heading_pane_vc_g2_ParamLimits

0x4ccf,	// (0x00020b0c) list_single_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002b5f7) list_single_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002b5f7) list_single_heading_pane_vc_g

0x4d4f,	// (0x00020b8c) list_single_heading_pane_vc_t1_ParamLimits

0x4d4f,	// (0x00020b8c) list_single_heading_pane_vc_t1

0x4d65,	// (0x00020ba2) list_single_heading_pane_vc_t2_ParamLimits

0x4d65,	// (0x00020ba2) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x0002b5fc) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x0002b5fc) list_single_heading_pane_vc_t

0x4d77,	// (0x00020bb4) list_setting_number_pane_vc_g1_ParamLimits

0x4d77,	// (0x00020bb4) list_setting_number_pane_vc_g1

0x4d83,	// (0x00020bc0) list_setting_number_pane_vc_g2_ParamLimits

0x4d83,	// (0x00020bc0) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x0002b601) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x0002b601) list_setting_number_pane_vc_g

0x4d8f,	// (0x00020bcc) list_setting_number_pane_vc_t1_ParamLimits

0x4d8f,	// (0x00020bcc) list_setting_number_pane_vc_t1

0x4da3,	// (0x00020be0) list_setting_number_pane_vc_t2_ParamLimits

0x4da3,	// (0x00020be0) list_setting_number_pane_vc_t2

0x4dbf,	// (0x00020bfc) list_setting_number_pane_vc_t3_ParamLimits

0x4dbf,	// (0x00020bfc) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x0002b606) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x0002b606) list_setting_number_pane_vc_t

0x4ddd,	// (0x00020c1a) set_value_pane_vc_ParamLimits

0x4ddd,	// (0x00020c1a) set_value_pane_vc

0x4eb6,	// (0x00020cf3) list_double2_graphic_pane_vc_ParamLimits

0x4eb6,	// (0x00020cf3) list_double2_graphic_pane_vc

0xaf7c,	// (0x00026db9) list_double2_large_graphic_pane_vc_ParamLimits

0xaf7c,	// (0x00026db9) list_double2_large_graphic_pane_vc

0x4eb6,	// (0x00020cf3) list_double2_pane_vc_ParamLimits

0x4eb6,	// (0x00020cf3) list_double2_pane_vc

0x4eb6,	// (0x00020cf3) list_double_graphic_heading_pane_vc_ParamLimits

0x4eb6,	// (0x00020cf3) list_double_graphic_heading_pane_vc

0x4eb6,	// (0x00020cf3) list_double_graphic_pane_vc_ParamLimits

0x4eb6,	// (0x00020cf3) list_double_graphic_pane_vc

0x4eb6,	// (0x00020cf3) list_double_heading_pane_vc_ParamLimits

0x4eb6,	// (0x00020cf3) list_double_heading_pane_vc

0xaf8e,	// (0x00026dcb) list_double_large_graphic_pane_vc_ParamLimits

0xaf8e,	// (0x00026dcb) list_double_large_graphic_pane_vc

0x4eb6,	// (0x00020cf3) list_double_number_pane_vc_ParamLimits

0x4eb6,	// (0x00020cf3) list_double_number_pane_vc

0x4eb6,	// (0x00020cf3) list_double_pane_vc_ParamLimits

0x4eb6,	// (0x00020cf3) list_double_pane_vc

0x4eb6,	// (0x00020cf3) list_double_time_pane_vc_ParamLimits

0x4eb6,	// (0x00020cf3) list_double_time_pane_vc

0x4eb6,	// (0x00020cf3) list_setting_number_pane_vc_ParamLimits

0x4eb6,	// (0x00020cf3) list_setting_number_pane_vc

0x4eb6,	// (0x00020cf3) list_setting_pane_vc_ParamLimits

0x4eb6,	// (0x00020cf3) list_setting_pane_vc

0x4eb6,	// (0x00020cf3) list_single_graphic_heading_pane_vc_ParamLimits

0x4eb6,	// (0x00020cf3) list_single_graphic_heading_pane_vc

0x4eb6,	// (0x00020cf3) list_single_heading_pane_vc_ParamLimits

0x4eb6,	// (0x00020cf3) list_single_heading_pane_vc

0x4ec9,	// (0x00020d06) list_single_number_heading_pane_vc_ParamLimits

0x4ec9,	// (0x00020d06) list_single_number_heading_pane_vc

0x4f44,	// (0x00020d81) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4f44,	// (0x00020d81) list_double_graphic_heading_pane_vc_g1

0x4cc3,	// (0x00020b00) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4cc3,	// (0x00020b00) list_double_graphic_heading_pane_vc_g2

0x4ccf,	// (0x00020b0c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4ccf,	// (0x00020b0c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ce,	// (0x0002b80b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ce,	// (0x0002b80b) list_double_graphic_heading_pane_vc_g

0x4f50,	// (0x00020d8d) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x4f50,	// (0x00020d8d) list_double_graphic_heading_pane_vc_t1

0x4f6c,	// (0x00020da9) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x4f6c,	// (0x00020da9) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d5,	// (0x0002b812) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d5,	// (0x0002b812) list_double_graphic_heading_pane_vc_t

0x4d77,	// (0x00020bb4) list_setting_pane_vc_g1_ParamLimits

0x4d77,	// (0x00020bb4) list_setting_pane_vc_g1

0x4d83,	// (0x00020bc0) list_setting_pane_vc_g2_ParamLimits

0x4d83,	// (0x00020bc0) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x0002b601) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x0002b601) list_setting_pane_vc_g

0x4f8a,	// (0x00020dc7) list_setting_pane_vc_t1_ParamLimits

0x4f8a,	// (0x00020dc7) list_setting_pane_vc_t1

0x4fa6,	// (0x00020de3) list_setting_pane_vc_t2_ParamLimits

0x4fa6,	// (0x00020de3) list_setting_pane_vc_t2

0x0001,

0xfa03,	// (0x0002b840) list_setting_pane_vc_t_ParamLimits

0xfa03,	// (0x0002b840) list_setting_pane_vc_t

0x4ddd,	// (0x00020c1a) set_value_pane_cp_vc_ParamLimits

0x4ddd,	// (0x00020c1a) set_value_pane_cp_vc

0x4cc3,	// (0x00020b00) list_single_number_heading_pane_vc_g1_ParamLimits

0x4cc3,	// (0x00020b00) list_single_number_heading_pane_vc_g1

0x4ccf,	// (0x00020b0c) list_single_number_heading_pane_vc_g2_ParamLimits

0x4ccf,	// (0x00020b0c) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002b5f7) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002b5f7) list_single_number_heading_pane_vc_g

0x4fc2,	// (0x00020dff) list_single_number_heading_pane_vc_t1_ParamLimits

0x4fc2,	// (0x00020dff) list_single_number_heading_pane_vc_t1

0x4fd8,	// (0x00020e15) list_single_number_heading_pane_vc_t2_ParamLimits

0x4fd8,	// (0x00020e15) list_single_number_heading_pane_vc_t2

0x4fee,	// (0x00020e2b) list_single_number_heading_pane_vc_t3_ParamLimits

0x4fee,	// (0x00020e2b) list_single_number_heading_pane_vc_t3

0x0002,

0xfa08,	// (0x0002b845) list_single_number_heading_pane_vc_t_ParamLimits

0xfa08,	// (0x0002b845) list_single_number_heading_pane_vc_t

0x4cb7,	// (0x00020af4) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4cb7,	// (0x00020af4) list_single_graphic_heading_pane_vc_g1

0x4cc3,	// (0x00020b00) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4cc3,	// (0x00020b00) list_single_graphic_heading_pane_vc_g4

0x4ccf,	// (0x00020b0c) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4ccf,	// (0x00020b0c) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf78b,	// (0x0002b5c8) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf78b,	// (0x0002b5c8) list_single_graphic_heading_pane_vc_g

0x4fc2,	// (0x00020dff) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4fc2,	// (0x00020dff) list_single_graphic_heading_pane_vc_t1

0x5000,	// (0x00020e3d) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5000,	// (0x00020e3d) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0f,	// (0x0002b84c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0f,	// (0x0002b84c) list_single_graphic_heading_pane_vc_t

0x4cc3,	// (0x00020b00) list_double2_pane_vc_g1_ParamLimits

0x4cc3,	// (0x00020b00) list_double2_pane_vc_g1

0x4ccf,	// (0x00020b0c) list_double2_pane_vc_g2_ParamLimits

0x4ccf,	// (0x00020b0c) list_double2_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002b5f7) list_double2_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002b5f7) list_double2_pane_vc_g

0x5012,	// (0x00020e4f) list_double2_pane_vc_t1_ParamLimits

0x5012,	// (0x00020e4f) list_double2_pane_vc_t1

0x5028,	// (0x00020e65) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5028,	// (0x00020e65) list_double2_large_graphic_pane_vc_g1

0x45b6,	// (0x000203f3) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x45b6,	// (0x000203f3) list_double2_large_graphic_pane_vc_g2

0x45c2,	// (0x000203ff) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x45c2,	// (0x000203ff) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa14,	// (0x0002b851) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa14,	// (0x0002b851) list_double2_large_graphic_pane_vc_g

0x5034,	// (0x00020e71) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5034,	// (0x00020e71) list_double2_large_graphic_pane_vc_t1

0x504a,	// (0x00020e87) list_double_time_pane_vc_g1_ParamLimits

0x504a,	// (0x00020e87) list_double_time_pane_vc_g1

0x5056,	// (0x00020e93) list_double_time_pane_vc_g2_ParamLimits

0x5056,	// (0x00020e93) list_double_time_pane_vc_g2

0x0001,

0xfa1b,	// (0x0002b858) list_double_time_pane_vc_g_ParamLimits

0xfa1b,	// (0x0002b858) list_double_time_pane_vc_g

0x5062,	// (0x00020e9f) list_double_time_pane_vc_t1_ParamLimits

0x5062,	// (0x00020e9f) list_double_time_pane_vc_t1

0x5086,	// (0x00020ec3) list_double_time_pane_vc_t2_ParamLimits

0x5086,	// (0x00020ec3) list_double_time_pane_vc_t2

0x50d0,	// (0x00020f0d) list_double_time_pane_vc_t3_ParamLimits

0x50d0,	// (0x00020f0d) list_double_time_pane_vc_t3

0x50e2,	// (0x00020f1f) list_double_time_pane_vc_t4_ParamLimits

0x50e2,	// (0x00020f1f) list_double_time_pane_vc_t4

0x0003,

0xfa20,	// (0x0002b85d) list_double_time_pane_vc_t_ParamLimits

0xfa20,	// (0x0002b85d) list_double_time_pane_vc_t

0x4cc3,	// (0x00020b00) list_double_pane_vc_g1_ParamLimits

0x4cc3,	// (0x00020b00) list_double_pane_vc_g1

0x4ccf,	// (0x00020b0c) list_double_pane_vc_g2_ParamLimits

0x4ccf,	// (0x00020b0c) list_double_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002b5f7) list_double_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002b5f7) list_double_pane_vc_g

0x50f6,	// (0x00020f33) list_double_pane_vc_t1_ParamLimits

0x50f6,	// (0x00020f33) list_double_pane_vc_t1

0x510a,	// (0x00020f47) list_double_pane_vc_t2_ParamLimits

0x510a,	// (0x00020f47) list_double_pane_vc_t2

0x0001,

0xfa29,	// (0x0002b866) list_double_pane_vc_t_ParamLimits

0xfa29,	// (0x0002b866) list_double_pane_vc_t

0x4cc3,	// (0x00020b00) list_double_number_pane_vc_g1_ParamLimits

0x4cc3,	// (0x00020b00) list_double_number_pane_vc_g1

0x4ccf,	// (0x00020b0c) list_double_number_pane_vc_g2_ParamLimits

0x4ccf,	// (0x00020b0c) list_double_number_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002b5f7) list_double_number_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002b5f7) list_double_number_pane_vc_g

0x5122,	// (0x00020f5f) list_double_number_pane_vc_t1_ParamLimits

0x5122,	// (0x00020f5f) list_double_number_pane_vc_t1

0x5134,	// (0x00020f71) list_double_number_pane_vc_t2_ParamLimits

0x5134,	// (0x00020f71) list_double_number_pane_vc_t2

0x5148,	// (0x00020f85) list_double_number_pane_vc_t3_ParamLimits

0x5148,	// (0x00020f85) list_double_number_pane_vc_t3

0x0002,

0xfa2e,	// (0x0002b86b) list_double_number_pane_vc_t_ParamLimits

0xfa2e,	// (0x0002b86b) list_double_number_pane_vc_t

0x5160,	// (0x00020f9d) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5160,	// (0x00020f9d) list_double_large_graphic_pane_vc_g1

0x517c,	// (0x00020fb9) list_double_large_graphic_pane_vc_g2_ParamLimits

0x517c,	// (0x00020fb9) list_double_large_graphic_pane_vc_g2

0x5190,	// (0x00020fcd) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5190,	// (0x00020fcd) list_double_large_graphic_pane_vc_g3

0x519f,	// (0x00020fdc) list_double_large_graphic_pane_vc_g4_ParamLimits

0x519f,	// (0x00020fdc) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa35,	// (0x0002b872) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa35,	// (0x0002b872) list_double_large_graphic_pane_vc_g

0x51ae,	// (0x00020feb) list_double_large_graphic_pane_vc_t1_ParamLimits

0x51ae,	// (0x00020feb) list_double_large_graphic_pane_vc_t1

0x51ca,	// (0x00021007) list_double_large_graphic_pane_vc_t2_ParamLimits

0x51ca,	// (0x00021007) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3e,	// (0x0002b87b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3e,	// (0x0002b87b) list_double_large_graphic_pane_vc_t

0x4cc3,	// (0x00020b00) list_double_heading_pane_vc_g1_ParamLimits

0x4cc3,	// (0x00020b00) list_double_heading_pane_vc_g1

0x4ccf,	// (0x00020b0c) list_double_heading_pane_vc_g2_ParamLimits

0x4ccf,	// (0x00020b0c) list_double_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002b5f7) list_double_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002b5f7) list_double_heading_pane_vc_g

0x51ec,	// (0x00021029) list_double_heading_pane_vc_t1_ParamLimits

0x51ec,	// (0x00021029) list_double_heading_pane_vc_t1

0x5200,	// (0x0002103d) list_double_heading_pane_vc_t2_ParamLimits

0x5200,	// (0x0002103d) list_double_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x0002b880) list_double_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0002b880) list_double_heading_pane_vc_t

0x5218,	// (0x00021055) list_double_graphic_pane_vc_g1_ParamLimits

0x5218,	// (0x00021055) list_double_graphic_pane_vc_g1

0x522b,	// (0x00021068) list_double_graphic_pane_vc_g2_ParamLimits

0x522b,	// (0x00021068) list_double_graphic_pane_vc_g2

0x4cc3,	// (0x00020b00) list_double_graphic_pane_vc_g3_ParamLimits

0x4cc3,	// (0x00020b00) list_double_graphic_pane_vc_g3

0x0003,

0xfa48,	// (0x0002b885) list_double_graphic_pane_vc_g_ParamLimits

0xfa48,	// (0x0002b885) list_double_graphic_pane_vc_g

0x5248,	// (0x00021085) list_double_graphic_pane_vc_t1_ParamLimits

0x5248,	// (0x00021085) list_double_graphic_pane_vc_t1

0x5272,	// (0x000210af) list_double_graphic_pane_vc_t2_ParamLimits

0x5272,	// (0x000210af) list_double_graphic_pane_vc_t2

0x0001,

0xfa51,	// (0x0002b88e) list_double_graphic_pane_vc_t_ParamLimits

0xfa51,	// (0x0002b88e) list_double_graphic_pane_vc_t

0x5693,	// (0x000214d0) aid_size_cell_fastswap

0x569b,	// (0x000214d8) aid_size_cell_touch_ParamLimits

0x569b,	// (0x000214d8) aid_size_cell_touch

0x58f6,	// (0x00021733) popup_fast_swap_wide_window_ParamLimits

0x58f6,	// (0x00021733) popup_fast_swap_wide_window

0x5a0a,	// (0x00021847) touch_pane_ParamLimits

0x5a0a,	// (0x00021847) touch_pane

0x84ab,	// (0x000242e8) button_value_adjust_pane_cp2

0x499e,	// (0x000207db) button_value_adjust_pane_cp4

0x49be,	// (0x000207fb) form_field_data_pane_cp2

0x49dd,	// (0x0002081a) form_field_data_wide_pane_cp2

0x893e,	// (0x0002477b) bg_scroll_pane_ParamLimits

0x5c98,	// (0x00021ad5) scroll_handle_pane_ParamLimits

0x5cac,	// (0x00021ae9) scroll_sc2_down_pane_ParamLimits

0x5cac,	// (0x00021ae9) scroll_sc2_down_pane

0x896f,	// (0x000247ac) scroll_sc2_up_pane_ParamLimits

0x896f,	// (0x000247ac) scroll_sc2_up_pane

0xbbb8,	// (0x000279f5) grid_wheel_folder_pane_g1_ParamLimits

0xbbb8,	// (0x000279f5) grid_wheel_folder_pane_g1

0x5e71,	// (0x00021cae) clock_nsta_pane_cp2_ParamLimits

0x5e71,	// (0x00021cae) clock_nsta_pane_cp2

0x9189,	// (0x00024fc6) listscroll_midp_pane_ParamLimits

0x9195,	// (0x00024fd2) midp_canvas_pane

0x947d,	// (0x000252ba) nsta_clock_indic_pane

0x94b1,	// (0x000252ee) listscroll_form_pane_vc

0x94b9,	// (0x000252f6) listscroll_set_pane_vc_ParamLimits

0x94b9,	// (0x000252f6) listscroll_set_pane_vc

0x95b2,	// (0x000253ef) clock_nsta_pane

0x962d,	// (0x0002546a) indicator_nsta_pane

0x990d,	// (0x0002574a) bg_popup_sub_pane_cp2_ParamLimits

0x9921,	// (0x0002575e) find_pane_cp2_ParamLimits

0x9921,	// (0x0002575e) find_pane_cp2

0x9937,	// (0x00025774) grid_toobar_pane_ParamLimits

0x9a17,	// (0x00025854) list_form_gen_pane_vc_ParamLimits

0x9a17,	// (0x00025854) list_form_gen_pane_vc

0x9a2d,	// (0x0002586a) scroll_pane_cp8_vc_ParamLimits

0x9a2d,	// (0x0002586a) scroll_pane_cp8_vc

0x9aa9,	// (0x000258e6) data_form_wide_pane_vc_ParamLimits

0x9aa9,	// (0x000258e6) data_form_wide_pane_vc

0x9ab5,	// (0x000258f2) form_field_data_wide_pane_vc_g1

0x9abd,	// (0x000258fa) form_field_data_wide_pane_vc_t1_ParamLimits

0x9abd,	// (0x000258fa) form_field_data_wide_pane_vc_t1

0x84bf,	// (0x000242fc) input_focus_pane_cp6_vc_ParamLimits

0x84bf,	// (0x000242fc) input_focus_pane_cp6_vc

0x9de3,	// (0x00025c20) list_midp_pane_ParamLimits

0x9def,	// (0x00025c2c) scroll_pane_cp16_ParamLimits

0x9def,	// (0x00025c2c) scroll_pane_cp16

0x9e59,	// (0x00025c96) button_value_adjust_pane_ParamLimits

0x9e59,	// (0x00025c96) button_value_adjust_pane

0xadd6,	// (0x00026c13) button_value_adjust_pane_cp6_ParamLimits

0xadd6,	// (0x00026c13) button_value_adjust_pane_cp6

0xaf00,	// (0x00026d3d) settings_code_pane_cp_ParamLimits

0xaf00,	// (0x00026d3d) settings_code_pane_cp

0x3179,	// (0x0001efb6) cell_touch_pane_g1

0x3179,	// (0x0001efb6) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x0002b51b) cell_touch_pane_g

0xb4e2,	// (0x0002731f) cell_touch_pane_cp_ParamLimits

0xb4e2,	// (0x0002731f) cell_touch_pane_cp

0xb4f2,	// (0x0002732f) cell_touch_pane_ParamLimits

0xb4f2,	// (0x0002732f) cell_touch_pane

0x3179,	// (0x0001efb6) scroll_sc2_down_pane_g1

0x3179,	// (0x0001efb6) scroll_sc2_up_pane_g1

0x7b52,	// (0x0002398f) bg_set_opt_pane_cp4_vc

0xb504,	// (0x00027341) list_set_graphic_pane_vc_g1_ParamLimits

0xb504,	// (0x00027341) list_set_graphic_pane_vc_g1

0xb510,	// (0x0002734d) list_set_graphic_pane_vc_g2_ParamLimits

0xb510,	// (0x0002734d) list_set_graphic_pane_vc_g2

0x0001,

0xf9da,	// (0x0002b817) list_set_graphic_pane_vc_g_ParamLimits

0xf9da,	// (0x0002b817) list_set_graphic_pane_vc_g

0xb51c,	// (0x00027359) text_primary_small_cp13_vc_ParamLimits

0xb51c,	// (0x00027359) text_primary_small_cp13_vc

0xb534,	// (0x00027371) list_set_graphic_pane_vc_ParamLimits

0xb534,	// (0x00027371) list_set_graphic_pane_vc

0x7b52,	// (0x0002398f) input_focus_pane_cp2_vc

0x3179,	// (0x0001efb6) setting_code_pane_vc_g1

0x7c7d,	// (0x00023aba) setting_code_pane_vc_t1

0xb547,	// (0x00027384) set_text_pane_vc_t1_ParamLimits

0xb547,	// (0x00027384) set_text_pane_vc_t1

0x7b52,	// (0x0002398f) input_focus_pane_cp1_vc

0xb563,	// (0x000273a0) list_set_text_pane_vc

0x3179,	// (0x0001efb6) setting_text_pane_vc_g1

0x7b52,	// (0x0002398f) bg_set_opt_pane_cp2_vc

0x7c74,	// (0x00023ab1) setting_slider_graphic_pane_vc_g1

0xb56d,	// (0x000273aa) setting_slider_graphic_pane_vc_t1

0xb57d,	// (0x000273ba) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9df,	// (0x0002b81c) setting_slider_graphic_pane_vc_t

0xb58d,	// (0x000273ca) slider_set_pane_cp_vc

0xb595,	// (0x000273d2) slider_set_pane_vc_g1

0xb59e,	// (0x000273db) slider_set_pane_vc_g2

0x0006,

0xf9e4,	// (0x0002b821) slider_set_pane_vc_g

0x8517,	// (0x00024354) set_opt_bg_pane_g1_copy1

0x851f,	// (0x0002435c) set_opt_bg_pane_g2_copy1

0xb5ca,	// (0x00027407) set_opt_bg_pane_g3_copy1

0x852f,	// (0x0002436c) set_opt_bg_pane_g4_copy1

0x8537,	// (0x00024374) set_opt_bg_pane_g5_copy1

0x853f,	// (0x0002437c) set_opt_bg_pane_g6_copy1

0xb5d4,	// (0x00027411) set_opt_bg_pane_g7_copy1

0xb5de,	// (0x0002741b) set_opt_bg_pane_g8_copy1

0xb5e8,	// (0x00027425) set_opt_bg_pane_g9_copy1

0x7b52,	// (0x0002398f) bg_set_opt_pane_cp_vc

0xb5f2,	// (0x0002742f) setting_slider_pane_vc_t1

0xb601,	// (0x0002743e) setting_slider_pane_vc_t2

0xb611,	// (0x0002744e) setting_slider_pane_vc_t3

0x0002,

0xf9f3,	// (0x0002b830) setting_slider_pane_vc_t

0xb621,	// (0x0002745e) slider_set_pane_vc

0x67d3,	// (0x00022610) volume_set_pane_vc_g1

0x67dc,	// (0x00022619) volume_set_pane_vc_g2

0x67e5,	// (0x00022622) volume_set_pane_vc_g3

0x67ee,	// (0x0002262b) volume_set_pane_vc_g4

0x67f7,	// (0x00022634) volume_set_pane_vc_g5

0x6800,	// (0x0002263d) volume_set_pane_vc_g6

0x6809,	// (0x00022646) volume_set_pane_vc_g7

0x6812,	// (0x0002264f) volume_set_pane_vc_g8

0x681b,	// (0x00022658) volume_set_pane_vc_g9

0x6824,	// (0x00022661) volume_set_pane_vc_g10

0x0009,

0xf891,	// (0x0002b6ce) volume_set_pane_vc_g

0xb629,	// (0x00027466) volume_set_pane_vc

0xb631,	// (0x0002746e) button_value_adjust_pane_cp1_vc

0xb63b,	// (0x00027478) list_highlight_pane_cp2_vc

0xb644,	// (0x00027481) list_set_pane_vc_ParamLimits

0xb644,	// (0x00027481) list_set_pane_vc

0xb6a2,	// (0x000274df) main_pane_set_vc_t1_ParamLimits

0xb6a2,	// (0x000274df) main_pane_set_vc_t1

0xb6b7,	// (0x000274f4) main_pane_set_vc_t2_ParamLimits

0xb6b7,	// (0x000274f4) main_pane_set_vc_t2

0xb6c9,	// (0x00027506) main_pane_set_vc_t3_ParamLimits

0xb6c9,	// (0x00027506) main_pane_set_vc_t3

0xb6dd,	// (0x0002751a) main_pane_set_vc_t4_ParamLimits

0xb6dd,	// (0x0002751a) main_pane_set_vc_t4

0x0003,

0xf9fa,	// (0x0002b837) main_pane_set_vc_t_ParamLimits

0xf9fa,	// (0x0002b837) main_pane_set_vc_t

0xb6f1,	// (0x0002752e) setting_code_pane_vc_ParamLimits

0xb6f1,	// (0x0002752e) setting_code_pane_vc

0xb702,	// (0x0002753f) setting_slider_graphic_pane_vc

0xb702,	// (0x0002753f) setting_slider_pane_vc

0xb702,	// (0x0002753f) setting_text_pane_vc

0xb702,	// (0x0002753f) setting_volume_pane_vc

0xb70c,	// (0x00027549) scroll_pane_cp121_vc

0x8499,	// (0x000242d6) set_content_pane_vc

0xb714,	// (0x00027551) button_value_adjust_pane_g1

0xb71d,	// (0x0002755a) button_value_adjust_pane_g2

0x0001,

0xfa56,	// (0x0002b893) button_value_adjust_pane_g

0xb726,	// (0x00027563) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb726,	// (0x00027563) form_field_slider_wide_pane_vc_t1

0xb73a,	// (0x00027577) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb73a,	// (0x00027577) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5b,	// (0x0002b898) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5b,	// (0x0002b898) form_field_slider_wide_pane_vc_t

0x7ead,	// (0x00023cea) input_focus_pane_cp10_vc_ParamLimits

0x7ead,	// (0x00023cea) input_focus_pane_cp10_vc

0xb768,	// (0x000275a5) slider_cont_pane_cp1_vc_ParamLimits

0xb768,	// (0x000275a5) slider_cont_pane_cp1_vc

0xb77a,	// (0x000275b7) slider_form_pane_g1_cp2

0xb59e,	// (0x000273db) slider_form_pane_g2_cp2

0xb7a7,	// (0x000275e4) form_field_slider_pane_vc_t3

0xb7b5,	// (0x000275f2) form_field_slider_pane_vc_t4

0xb7c3,	// (0x00027600) slider_form_pane_vc_ParamLimits

0xb7c3,	// (0x00027600) slider_form_pane_vc

0xb7d0,	// (0x0002760d) form_field_slider_pane_vc_t1_ParamLimits

0xb7d0,	// (0x0002760d) form_field_slider_pane_vc_t1

0xb73a,	// (0x00027577) form_field_slider_pane_vc_t2_ParamLimits

0xb73a,	// (0x00027577) form_field_slider_pane_vc_t2

0x0001,

0xfa6d,	// (0x0002b8aa) form_field_slider_pane_vc_t_ParamLimits

0xfa6d,	// (0x0002b8aa) form_field_slider_pane_vc_t

0x7ead,	// (0x00023cea) input_focus_pane_cp9_vc_ParamLimits

0x7ead,	// (0x00023cea) input_focus_pane_cp9_vc

0xb7ec,	// (0x00027629) slider_cont_pane_vc_ParamLimits

0xb7ec,	// (0x00027629) slider_cont_pane_vc

0xb800,	// (0x0002763d) list_form_graphic_pane_cp_vc_ParamLimits

0xb800,	// (0x0002763d) list_form_graphic_pane_cp_vc

0x9ab5,	// (0x000258f2) form_field_popup_wide_pane_vc_g1

0xb815,	// (0x00027652) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb815,	// (0x00027652) form_field_popup_wide_pane_vc_t1

0x84bf,	// (0x000242fc) input_focus_pane_cp8_vc_ParamLimits

0x84bf,	// (0x000242fc) input_focus_pane_cp8_vc

0xb85a,	// (0x00027697) list_form_wide_pane_vc_ParamLimits

0xb85a,	// (0x00027697) list_form_wide_pane_vc

0xb866,	// (0x000276a3) list_form_graphic_pane_vc_g1

0xb86e,	// (0x000276ab) list_form_graphic_pane_vc_t1_ParamLimits

0xb86e,	// (0x000276ab) list_form_graphic_pane_vc_t1

0x7c32,	// (0x00023a6f) list_highlight_pane_cp5_vc_ParamLimits

0x7c32,	// (0x00023a6f) list_highlight_pane_cp5_vc

0xb88a,	// (0x000276c7) list_form_graphic_pane_vc_ParamLimits

0xb88a,	// (0x000276c7) list_form_graphic_pane_vc

0x9ab5,	// (0x000258f2) form_field_popup_pane_vc_g1

0xb8a0,	// (0x000276dd) form_field_popup_pane_vc_t1_ParamLimits

0xb8a0,	// (0x000276dd) form_field_popup_pane_vc_t1

0x84bf,	// (0x000242fc) input_focus_pane_cp7_vc_ParamLimits

0x84bf,	// (0x000242fc) input_focus_pane_cp7_vc

0xb8b7,	// (0x000276f4) list_form_pane_vc_ParamLimits

0xb8b7,	// (0x000276f4) list_form_pane_vc

0xb8c3,	// (0x00027700) data_form_pane_vc_t1_ParamLimits

0xb8c3,	// (0x00027700) data_form_pane_vc_t1

0x8517,	// (0x00024354) input_focus_pane_vc_g1

0x851f,	// (0x0002435c) input_focus_pane_vc_g2

0x8527,	// (0x00024364) input_focus_pane_vc_g3

0x852f,	// (0x0002436c) input_focus_pane_vc_g4

0x8537,	// (0x00024374) input_focus_pane_vc_g5

0x853f,	// (0x0002437c) input_focus_pane_vc_g6

0x8547,	// (0x00024384) input_focus_pane_vc_g7

0x854f,	// (0x0002438c) input_focus_pane_vc_g8

0x8557,	// (0x00024394) input_focus_pane_vc_g9

0x3179,	// (0x0001efb6) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x0002b4a4) input_focus_pane_vc_g

0x9aa9,	// (0x000258e6) data_form_pane_vc_ParamLimits

0x9aa9,	// (0x000258e6) data_form_pane_vc

0x9ab5,	// (0x000258f2) form_field_data_pane_vc_g1

0xb8de,	// (0x0002771b) form_field_data_pane_vc_t1_ParamLimits

0xb8de,	// (0x0002771b) form_field_data_pane_vc_t1

0x84bf,	// (0x000242fc) input_focus_pane_vc_ParamLimits

0x84bf,	// (0x000242fc) input_focus_pane_vc

0xb8f8,	// (0x00027735) button_value_adjust_pane_cp3_vc

0xb900,	// (0x0002773d) button_value_adjust_pane_cp5_vc

0xb908,	// (0x00027745) form_field_data_pane_vc_ParamLimits

0xb908,	// (0x00027745) form_field_data_pane_vc

0xb91f,	// (0x0002775c) form_field_data_pane_vc_cp2

0xb927,	// (0x00027764) form_field_data_wide_pane_vc_ParamLimits

0xb927,	// (0x00027764) form_field_data_wide_pane_vc

0xb93d,	// (0x0002777a) form_field_data_wide_pane_vc_cp2

0xb945,	// (0x00027782) form_field_popup_pane_vc_ParamLimits

0xb945,	// (0x00027782) form_field_popup_pane_vc

0xb95c,	// (0x00027799) form_field_popup_wide_pane_vc_ParamLimits

0xb95c,	// (0x00027799) form_field_popup_wide_pane_vc

0xb972,	// (0x000277af) form_field_slider_pane_vc_ParamLimits

0xb972,	// (0x000277af) form_field_slider_pane_vc

0xb985,	// (0x000277c2) form_field_slider_wide_pane_vc_ParamLimits

0xb985,	// (0x000277c2) form_field_slider_wide_pane_vc

0xb998,	// (0x000277d5) grid_touch_1_pane_ParamLimits

0xb998,	// (0x000277d5) grid_touch_1_pane

0xb9a4,	// (0x000277e1) grid_touch_2_pane_ParamLimits

0xb9a4,	// (0x000277e1) grid_touch_2_pane

0x9448,	// (0x00025285) touch_pane_g1_ParamLimits

0x9448,	// (0x00025285) touch_pane_g1

0xb9bc,	// (0x000277f9) cell_app_pane_cp_wide_ParamLimits

0xb9bc,	// (0x000277f9) cell_app_pane_cp_wide

0xb9cd,	// (0x0002780a) grid_popup_fast_wide_pane_ParamLimits

0xb9cd,	// (0x0002780a) grid_popup_fast_wide_pane

0xb9e1,	// (0x0002781e) scroll_pane_cp19_ParamLimits

0xb9e1,	// (0x0002781e) scroll_pane_cp19

0x7b52,	// (0x0002398f) bg_popup_window_pane_cp20

0xb9f5,	// (0x00027832) listscroll_popup_fast_wide_pane

0xb9fd,	// (0x0002783a) grid_indicator_nsta_pane

0xba0f,	// (0x0002784c) clock_nsta_pane_g1

0xba18,	// (0x00027855) clock_nsta_pane_t1

0xba34,	// (0x00027871) cell_indicator_nsta_pane_ParamLimits

0xba34,	// (0x00027871) cell_indicator_nsta_pane

0xba69,	// (0x000278a6) cell_indicator_nsta_pane_g1

0xba77,	// (0x000278b4) cell_indicator_nsta_pane_g2

0x0001,

0xfa7e,	// (0x0002b8bb) cell_indicator_nsta_pane_g

0xba89,	// (0x000278c6) clock_nsta_pane_cp

0xba92,	// (0x000278cf) indicator_nsta_pane_cp

0xba9c,	// (0x000278d9) nsta_clock_indic_pane_g1

0x7cfb,	// (0x00023b38) grid_indicator_pane

0x8a64,	// (0x000248a1) scroll_pane_cp29

0x5dc0,	// (0x00021bfd) indicator_nsta_pane_cp2_ParamLimits

0x5dc0,	// (0x00021bfd) indicator_nsta_pane_cp2

0x7c32,	// (0x00023a6f) main_apps_wheel_pane

0x9cc4,	// (0x00025b01) form_midp_field_text_pane_ParamLimits

0x9e0f,	// (0x00025c4c) scroll_bar_cp050_ParamLimits

0xbaf5,	// (0x00027932) cell_indicator_pane_ParamLimits

0xbaf5,	// (0x00027932) cell_indicator_pane

0xbb0c,	// (0x00027949) cell_indicator_pane_g1

0xbb16,	// (0x00027953) grid_wheel_folder_pane_ParamLimits

0xbb16,	// (0x00027953) grid_wheel_folder_pane

0xbb2c,	// (0x00027969) list_wheel_apps_pane_ParamLimits

0xbb2c,	// (0x00027969) list_wheel_apps_pane

0xbb3d,	// (0x0002797a) main_apps_wheel_pane_g1_ParamLimits

0xbb3d,	// (0x0002797a) main_apps_wheel_pane_g1

0xbb51,	// (0x0002798e) main_apps_wheel_pane_g2_ParamLimits

0xbb51,	// (0x0002798e) main_apps_wheel_pane_g2

0x0001,

0xfa9a,	// (0x0002b8d7) main_apps_wheel_pane_g_ParamLimits

0xfa9a,	// (0x0002b8d7) main_apps_wheel_pane_g

0xbb69,	// (0x000279a6) main_apps_wheel_pane_t1_ParamLimits

0xbb69,	// (0x000279a6) main_apps_wheel_pane_t1

0xbb8c,	// (0x000279c9) list_wheel_apps_pane_g1

0xbb94,	// (0x000279d1) list_wheel_apps_pane_g2

0xbb9c,	// (0x000279d9) list_wheel_apps_pane_g3

0xbba4,	// (0x000279e1) list_wheel_apps_pane_g4

0xbbae,	// (0x000279eb) list_wheel_apps_pane_g5

0x0004,

0xfa9f,	// (0x0002b8dc) list_wheel_apps_pane_g

0x8ff8,	// (0x00024e35) navi_icon_text_pane

0x94e1,	// (0x0002531e) aid_fill_nsta

0xbbd1,	// (0x00027a0e) navi_icon_text_pane_g1

0xbbdd,	// (0x00027a1a) navi_icon_text_pane_t1

0x8e96,	// (0x00024cd3) list_set_graphic_pane_t1_ParamLimits

0x8e96,	// (0x00024cd3) list_set_graphic_pane_t1

0xa57a,	// (0x000263b7) popup_midp_note_alarm_window_t6_ParamLimits

0xa57a,	// (0x000263b7) popup_midp_note_alarm_window_t6

0xa58c,	// (0x000263c9) popup_midp_note_alarm_window_t7_ParamLimits

0xa58c,	// (0x000263c9) popup_midp_note_alarm_window_t7

0xa59e,	// (0x000263db) popup_midp_note_alarm_window_t8_ParamLimits

0xa59e,	// (0x000263db) popup_midp_note_alarm_window_t8

0xa5b0,	// (0x000263ed) popup_midp_note_alarm_window_t9_ParamLimits

0xa5b0,	// (0x000263ed) popup_midp_note_alarm_window_t9

0xa5c2,	// (0x000263ff) popup_midp_note_alarm_window_t10_ParamLimits

0xa5c2,	// (0x000263ff) popup_midp_note_alarm_window_t10

0xa5d4,	// (0x00026411) popup_midp_note_alarm_window_t11_ParamLimits

0xa5d4,	// (0x00026411) popup_midp_note_alarm_window_t11

0xa5e6,	// (0x00026423) scroll_pane_cp17_ParamLimits

0xa5e6,	// (0x00026423) scroll_pane_cp17

0x67d3,	// (0x00022610) volume_small_pane_cp_g1

0x6ac8,	// (0x00022905) volume_small_pane_cp_g2

0x6ad1,	// (0x0002290e) volume_small_pane_cp_g3

0x6ada,	// (0x00022917) volume_small_pane_cp_g4

0x6ae3,	// (0x00022920) volume_small_pane_cp_g5

0x6aec,	// (0x00022929) volume_small_pane_cp_g6

0x6af5,	// (0x00022932) volume_small_pane_cp_g7

0x6afe,	// (0x0002293b) volume_small_pane_cp_g8

0x6b07,	// (0x00022944) volume_small_pane_cp_g9

0x6b10,	// (0x0002294d) volume_small_pane_cp_g10

0x925e,	// (0x0002509b) midp_ticker_pane_g1_ParamLimits

0x926a,	// (0x000250a7) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x0002b570) midp_ticker_pane_g_ParamLimits

0x9276,	// (0x000250b3) midp_ticker_pane_t1_ParamLimits

0x94f7,	// (0x00025334) aid_fill_nsta_2

0x9dfb,	// (0x00025c38) list_form2_midp_pane

0xaf4b,	// (0x00026d88) midp_editing_number_pane_ParamLimits

0xaf5a,	// (0x00026d97) midp_ticker_pane_ParamLimits

0xbbef,	// (0x00027a2c) form2_midp_field_pane

0xbc13,	// (0x00027a50) scroll_pane_cp51

0xbc33,	// (0x00027a70) form2_midp_button_pane_ParamLimits

0xbc33,	// (0x00027a70) form2_midp_button_pane

0xbc45,	// (0x00027a82) form2_midp_content_pane_ParamLimits

0xbc45,	// (0x00027a82) form2_midp_content_pane

0xbc5f,	// (0x00027a9c) form2_midp_field_choice_group_pane

0xbc67,	// (0x00027aa4) form2_midp_field_pane_g1

0xbc6f,	// (0x00027aac) form2_midp_field_pane_g2

0xbc77,	// (0x00027ab4) form2_midp_field_pane_g3

0xbc7f,	// (0x00027abc) form2_midp_field_pane_g4

0x0003,

0xfac4,	// (0x0002b901) form2_midp_field_pane_g

0xbc87,	// (0x00027ac4) form2_midp_gauge_slider_pane

0xbc8f,	// (0x00027acc) form2_midp_gauge_wait_pane

0xbc97,	// (0x00027ad4) form2_midp_image_pane_ParamLimits

0xbc97,	// (0x00027ad4) form2_midp_image_pane

0xbcb2,	// (0x00027aef) form2_midp_label_pane_ParamLimits

0xbcb2,	// (0x00027aef) form2_midp_label_pane

0xbccb,	// (0x00027b08) form2_midp_label_pane_cp_ParamLimits

0xbccb,	// (0x00027b08) form2_midp_label_pane_cp

0xbcec,	// (0x00027b29) form2_midp_string_pane_ParamLimits

0xbcec,	// (0x00027b29) form2_midp_string_pane

0x529c,	// (0x000210d9) form2_midp_text_pane_ParamLimits

0x529c,	// (0x000210d9) form2_midp_text_pane

0xbcfe,	// (0x00027b3b) form2_midp_time_pane

0xbd0e,	// (0x00027b4b) input_focus_pane_cp51_ParamLimits

0xbd0e,	// (0x00027b4b) input_focus_pane_cp51

0xbd26,	// (0x00027b63) form2_midp_label_pane_t1_ParamLimits

0xbd26,	// (0x00027b63) form2_midp_label_pane_t1

0x52b7,	// (0x000210f4) form2_mdip_text_pane_t1_ParamLimits

0x52b7,	// (0x000210f4) form2_mdip_text_pane_t1

0x52d5,	// (0x00021112) form2_midp_time_pane_t1

0xbd6f,	// (0x00027bac) form2_midp_gauge_slider_pane_t1

0xbd81,	// (0x00027bbe) form2_midp_gauge_slider_pane_t2

0xbd93,	// (0x00027bd0) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacd,	// (0x0002b90a) form2_midp_gauge_slider_pane_t

0xbda5,	// (0x00027be2) form2_midp_slider_pane

0xbdb1,	// (0x00027bee) form2_midp_gauge_wait_pane_t1

0xbdbf,	// (0x00027bfc) form2_midp_wait_pane_ParamLimits

0xbdbf,	// (0x00027bfc) form2_midp_wait_pane

0xbdea,	// (0x00027c27) list_single_2graphic_pane_cp4_ParamLimits

0xbdea,	// (0x00027c27) list_single_2graphic_pane_cp4

0x9b1d,	// (0x0002595a) list_single_midp_graphic_pane_cp_ParamLimits

0x9b1d,	// (0x0002595a) list_single_midp_graphic_pane_cp

0x7b52,	// (0x0002398f) list_highlight_pane_cp20

0xbe0e,	// (0x00027c4b) list_single_2graphic_pane_g1_cp4

0xbe16,	// (0x00027c53) list_single_2graphic_pane_g2_cp4

0xbe1e,	// (0x00027c5b) list_single_2graphic_pane_t1_cp4

0x7c32,	// (0x00023a6f) list_highlight_pane_cp21

0xbe2d,	// (0x00027c6a) list_single_midp_graphic_pane_g4_cp

0xbe3c,	// (0x00027c79) list_single_midp_graphic_pane_t1_cp

0xbe51,	// (0x00027c8e) form2_mdip_string_pane_t1_ParamLimits

0xbe51,	// (0x00027c8e) form2_mdip_string_pane_t1

0x7b52,	// (0x0002398f) bg_wml_button_pane_cp2

0x3179,	// (0x0001efb6) form2_midp_image_pane_g1

0x4788,	// (0x000205c5) list_double_large_graphic_pane_g5_ParamLimits

0x4788,	// (0x000205c5) list_double_large_graphic_pane_g5

0x9189,	// (0x00024fc6) midp_form_pane_ParamLimits

0x7c32,	// (0x00023a6f) main_apps_wheel_pane_ParamLimits

0x648b,	// (0x000222c8) popup_preview_window_ParamLimits

0x648b,	// (0x000222c8) popup_preview_window

0x6646,	// (0x00022483) popup_touch_info_window_ParamLimits

0x6646,	// (0x00022483) popup_touch_info_window

0x6664,	// (0x000224a1) popup_touch_menu_window_ParamLimits

0x6664,	// (0x000224a1) popup_touch_menu_window

0x316f,	// (0x0001efac) bg_popup_sub_pane_cp6

0xbf4a,	// (0x00027d87) list_touch_menu_pane

0xbf52,	// (0x00027d8f) list_single_touch_menu_pane_ParamLimits

0xbf52,	// (0x00027d8f) list_single_touch_menu_pane

0xbf68,	// (0x00027da5) list_single_touch_menu_pane_t1

0x7c32,	// (0x00023a6f) bg_popup_sub_pane_cp7_ParamLimits

0x7c32,	// (0x00023a6f) bg_popup_sub_pane_cp7

0xbf76,	// (0x00027db3) heading_sub_pane

0xbf7e,	// (0x00027dbb) list_touch_info_pane_ParamLimits

0xbf7e,	// (0x00027dbb) list_touch_info_pane

0xbf8d,	// (0x00027dca) list_single_touch_info_pane_ParamLimits

0xbf8d,	// (0x00027dca) list_single_touch_info_pane

0xbf9f,	// (0x00027ddc) list_single_touch_info_pane_t1

0xbfad,	// (0x00027dea) list_single_touch_info_pane_t2

0x0001,

0xfadb,	// (0x0002b918) list_single_touch_info_pane_t

0x9181,	// (0x00024fbe) bg_popup_heading_pane_cp

0xbfbb,	// (0x00027df8) heading_sub_pane_t1

0x9a43,	// (0x00025880) bg_popup_preview_window_pane_cp_ParamLimits

0x9a43,	// (0x00025880) bg_popup_preview_window_pane_cp

0xbf76,	// (0x00027db3) heading_preview_pane

0xbf7e,	// (0x00027dbb) list_preview_pane_ParamLimits

0xbf7e,	// (0x00027dbb) list_preview_pane

0xbfc9,	// (0x00027e06) popup_preview_window_g1

0xbf8d,	// (0x00027dca) list_single_preview_pane_ParamLimits

0xbf8d,	// (0x00027dca) list_single_preview_pane

0xbfd1,	// (0x00027e0e) list_single_preview_pane_g1

0xbfd9,	// (0x00027e16) list_single_preview_pane_t1

0xbf9f,	// (0x00027ddc) list_single_preview_pane_t2

0x0001,

0xfae0,	// (0x0002b91d) list_single_preview_pane_t

0xbfe7,	// (0x00027e24) bg_popup_heading_pane_cp2_ParamLimits

0xbfe7,	// (0x00027e24) bg_popup_heading_pane_cp2

0xbffd,	// (0x00027e3a) heading_preview_pane_g1

0xc005,	// (0x00027e42) heading_preview_pane_t1_ParamLimits

0xc005,	// (0x00027e42) heading_preview_pane_t1

0x7d1e,	// (0x00023b5b) soft_indicator_pane_t1_ParamLimits

0x8432,	// (0x0002426f) scroll_pane_ParamLimits

0x895d,	// (0x0002479a) scroll_sc2_left_pane

0x8966,	// (0x000247a3) scroll_sc2_right_pane

0x8985,	// (0x000247c2) scroll_bg_pane_g1_ParamLimits

0x899a,	// (0x000247d7) scroll_bg_pane_g2_ParamLimits

0x89b2,	// (0x000247ef) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x0002b4fb) scroll_bg_pane_g_ParamLimits

0x8985,	// (0x000247c2) scroll_handle_pane_g1_ParamLimits

0x89d4,	// (0x00024811) scroll_handle_pane_g2_ParamLimits

0x89b2,	// (0x000247ef) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x0002b502) scroll_handle_pane_g_ParamLimits

0x610a,	// (0x00021f47) popup_choice_list_window_ParamLimits

0x610a,	// (0x00021f47) popup_choice_list_window

0x9919,	// (0x00025756) choice_list_pane

0x999b,	// (0x000257d8) cell_toolbar_pane_t1

0x99c3,	// (0x00025800) toolbar_button_pane_ParamLimits

0xaaac,	// (0x000268e9) ai_gene_pane_1_t2_ParamLimits

0xaaac,	// (0x000268e9) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x0002b72a) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x0002b72a) ai_gene_pane_1_t

0xc022,	// (0x00027e5f) scroll_sc2_left_pane_g1

0xc022,	// (0x00027e5f) scroll_sc2_right_pane_g1

0x94a5,	// (0x000252e2) bg_popup_sub_pane_cp10

0xc02c,	// (0x00027e69) list_choice_list_pane

0xc045,	// (0x00027e82) list_single_choice_list_pane_ParamLimits

0xc045,	// (0x00027e82) list_single_choice_list_pane

0xc058,	// (0x00027e95) list_single_choice_list_pane_g1

0x8663,	// (0x000244a0) list_single_choice_list_pane_t1_ParamLimits

0x8663,	// (0x000244a0) list_single_choice_list_pane_t1

0xc060,	// (0x00027e9d) choice_list_pane_g1

0xc068,	// (0x00027ea5) choice_list_pane_t1

0x316f,	// (0x0001efac) input_focus_pane_cp11

0x883a,	// (0x00024677) title_pane_stacon_g2_ParamLimits

0x883a,	// (0x00024677) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x0002b4e1) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0002b4e1) title_pane_stacon_g

0x9181,	// (0x00024fbe) cursor_press_pane

0x61b6,	// (0x00021ff3) popup_fep_hwr_window_ParamLimits

0x61b6,	// (0x00021ff3) popup_fep_hwr_window

0x6230,	// (0x0002206d) popup_fep_vkb_window_ParamLimits

0x6230,	// (0x0002206d) popup_fep_vkb_window

0xc076,	// (0x00027eb3) cursor_press_pane_g1

0x0002,

0xfb09,	// (0x0002b946) fep_vkb_side_pane_g_ParamLimits

0x6b52,	// (0x0002298f) fep_hwr_candidate_pane_ParamLimits

0x6b52,	// (0x0002298f) fep_hwr_candidate_pane

0x6b7c,	// (0x000229b9) fep_hwr_side_pane_ParamLimits

0x6b7c,	// (0x000229b9) fep_hwr_side_pane

0x6b9c,	// (0x000229d9) fep_hwr_top_pane_ParamLimits

0x6b9c,	// (0x000229d9) fep_hwr_top_pane

0x6bb4,	// (0x000229f1) fep_hwr_write_pane_ParamLimits

0x6bb4,	// (0x000229f1) fep_hwr_write_pane

0xfb09,	// (0x0002b946) fep_vkb_side_pane_g

0xc07e,	// (0x00027ebb) fep_hwr_top_pane_g1

0xc090,	// (0x00027ecd) fep_hwr_top_pane_g2

0x6be0,	// (0x00022a1d) fep_hwr_top_pane_g3

0x0002,

0xfae5,	// (0x0002b922) fep_hwr_top_pane_g

0x6bf5,	// (0x00022a32) fep_hwr_top_text_pane

0x8b54,	// (0x00024991) fep_hwr_top_text_pane_g1

0xc0c6,	// (0x00027f03) fep_hwr_top_text_pane_t1

0x6ceb,	// (0x00022b28) fep_hwr_candidate_pane_g1

0xc319,	// (0x00028156) fep_vkb_keypad_pane_g3_ParamLimits

0xc319,	// (0x00028156) fep_vkb_keypad_pane_g3

0xc341,	// (0x0002817e) fep_vkb_keypad_pane_g4_ParamLimits

0xc341,	// (0x0002817e) fep_vkb_keypad_pane_g4

0xc3b0,	// (0x000281ed) fep_vkb_bottom_pane_g2_ParamLimits

0xc3b0,	// (0x000281ed) fep_vkb_bottom_pane_g2

0x0001,

0xfb10,	// (0x0002b94d) fep_vkb_bottom_pane_g_ParamLimits

0xfb10,	// (0x0002b94d) fep_vkb_bottom_pane_g

0xc022,	// (0x00027e5f) cell_vkb_side_pane_g2

0x0001,

0xfb1a,	// (0x0002b957) cell_vkb_side_pane_g

0xc43b,	// (0x00028278) cell_vkb_side_pane_t1

0xc449,	// (0x00028286) cell_vkb_side_pane_t1_copy1

0xc022,	// (0x00027e5f) bg_fep_vkb_candidate_pane_g2

0xc575,	// (0x000283b2) cell_vkb_candidate_pane_ParamLimits

0xc0d4,	// (0x00027f11) aid_size_cell_vkb_ParamLimits

0xc0d4,	// (0x00027f11) aid_size_cell_vkb

0xc575,	// (0x000283b2) cell_vkb_candidate_pane

0x6d05,	// (0x00022b42) bg_popup_fep_shadow_pane_g1

0xc162,	// (0x00027f9f) fep_vkb_bottom_pane_ParamLimits

0xc162,	// (0x00027f9f) fep_vkb_bottom_pane

0xc198,	// (0x00027fd5) fep_vkb_candidate_pane_ParamLimits

0xc198,	// (0x00027fd5) fep_vkb_candidate_pane

0xc1b4,	// (0x00027ff1) fep_vkb_keypad_pane_ParamLimits

0xc1b4,	// (0x00027ff1) fep_vkb_keypad_pane

0xc1fa,	// (0x00028037) fep_vkb_side_pane_ParamLimits

0xc1fa,	// (0x00028037) fep_vkb_side_pane

0xc236,	// (0x00028073) fep_vkb_top_pane_ParamLimits

0xc236,	// (0x00028073) fep_vkb_top_pane

0xc272,	// (0x000280af) fep_vkb_top_pane_g1_ParamLimits

0xc272,	// (0x000280af) fep_vkb_top_pane_g1

0xc281,	// (0x000280be) fep_vkb_top_pane_g2_ParamLimits

0xc281,	// (0x000280be) fep_vkb_top_pane_g2

0xc290,	// (0x000280cd) fep_vkb_top_pane_g3_ParamLimits

0xc290,	// (0x000280cd) fep_vkb_top_pane_g3

0x0003,

0xfb00,	// (0x0002b93d) fep_vkb_top_pane_g_ParamLimits

0xfb00,	// (0x0002b93d) fep_vkb_top_pane_g

0xc2ae,	// (0x000280eb) fep_vkb_top_text_pane_ParamLimits

0xc2ae,	// (0x000280eb) fep_vkb_top_text_pane

0xc2bf,	// (0x000280fc) fep_vkb_side_pane_g1_ParamLimits

0xc2bf,	// (0x000280fc) fep_vkb_side_pane_g1

0xc308,	// (0x00028145) grid_vkb_side_pane_ParamLimits

0xc308,	// (0x00028145) grid_vkb_side_pane

0x6d0d,	// (0x00022b4a) bg_popup_fep_shadow_pane_g2

0x6d16,	// (0x00022b53) bg_popup_fep_shadow_pane_g3

0x6d1e,	// (0x00022b5b) bg_popup_fep_shadow_pane_g4

0x6d27,	// (0x00022b64) bg_popup_fep_shadow_pane_g5

0x6d31,	// (0x00022b6e) bg_popup_fep_shadow_pane_g6

0x6d39,	// (0x00022b76) bg_popup_fep_shadow_pane_g7

0x8537,	// (0x00024374) bg_popup_fep_shadow_pane_g8

0xc35f,	// (0x0002819c) grid_vkb_keypad_number_pane_ParamLimits

0xc35f,	// (0x0002819c) grid_vkb_keypad_number_pane

0xc36f,	// (0x000281ac) grid_vkb_keypad_pane_ParamLimits

0xc36f,	// (0x000281ac) grid_vkb_keypad_pane

0xc395,	// (0x000281d2) fep_vkb_bottom_pane_g1_ParamLimits

0xc395,	// (0x000281d2) fep_vkb_bottom_pane_g1

0xc3be,	// (0x000281fb) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc3be,	// (0x000281fb) grid_vkb_keypad_bottom_left_pane

0xc3d3,	// (0x00028210) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3d3,	// (0x00028210) grid_vkb_keypad_bottom_right_pane

0xc3e8,	// (0x00028225) fep_vkb_top_text_pane_g1

0xc403,	// (0x00028240) fep_vkb_top_text_pane_t1

0xc418,	// (0x00028255) cell_vkb_side_pane_ParamLimits

0xc418,	// (0x00028255) cell_vkb_side_pane

0xc022,	// (0x00027e5f) cell_vkb_side_pane_g1

0xc457,	// (0x00028294) cell_vkb_keypad_pane_ParamLimits

0xc457,	// (0x00028294) cell_vkb_keypad_pane

0xc4cc,	// (0x00028309) cell_vkb_keypad_pane_g1

0x0008,

0xfb2d,	// (0x0002b96a) bg_popup_fep_shadow_pane_g

0xc022,	// (0x00027e5f) cell_hwr_side_pane_g1

0xc022,	// (0x00027e5f) cell_hwr_side_pane_g2

0xc4d6,	// (0x00028313) cell_vkb_keypad_pane_t1

0xc4e4,	// (0x00028321) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4e4,	// (0x00028321) cell_vkb_keypad_bottom_left_pane

0xc501,	// (0x0002833e) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc501,	// (0x0002833e) cell_vkb_keypad_bottom_right_pane

0xc022,	// (0x00027e5f) cell_vkb_keypad_bottom_left_pane_g1

0xc022,	// (0x00027e5f) cell_vkb_keypad_bottom_right_pane_g1

0xc53a,	// (0x00028377) cell_vkb_keypad_number_pane_ParamLimits

0xc53a,	// (0x00028377) cell_vkb_keypad_number_pane

0xc559,	// (0x00028396) cell_vkb_keypad_number_pane_g1

0xc563,	// (0x000283a0) cell_vkb_keypad_number_pane_g2

0xc56c,	// (0x000283a9) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1f,	// (0x0002b95c) cell_vkb_keypad_number_pane_g

0xc4d6,	// (0x00028313) cell_vkb_keypad_number_pane_t1

0xc590,	// (0x000283cd) fep_vkb_candidate_pane_g1

0x0001,

0xfb1a,	// (0x0002b957) cell_hwr_side_pane_g

0xc5a9,	// (0x000283e6) cell_hwr_side_pane_t1

0x6d4b,	// (0x00022b88) cell_hwr_side_pane_t1_copy1

0xc2a0,	// (0x000280dd) cell_hwr_candidate_pane_g1

0x6d59,	// (0x00022b96) cell_hwr_candidate_pane_t1

0xc022,	// (0x00027e5f) cell_vkb_candidate_pane_g2

0xc62f,	// (0x0002846c) cell_vkb_candidate_pane_t1

0x6b19,	// (0x00022956) bg_popup_fep_shadow_pane_ParamLimits

0x6b19,	// (0x00022956) bg_popup_fep_shadow_pane

0x208f,	// (0x0001decc) bg_fep_hwr_top_pane_g4

0xc0a2,	// (0x00027edf) bg_hwr_side_pane_g1_ParamLimits

0xc0a2,	// (0x00027edf) bg_hwr_side_pane_g1

0x6c31,	// (0x00022a6e) cell_hwr_side_pane_ParamLimits

0x6c31,	// (0x00022a6e) cell_hwr_side_pane

0x6c6c,	// (0x00022aa9) fep_hwr_write_pane_g1_ParamLimits

0x6c6c,	// (0x00022aa9) fep_hwr_write_pane_g1

0x6c79,	// (0x00022ab6) fep_hwr_write_pane_g2_ParamLimits

0x6c79,	// (0x00022ab6) fep_hwr_write_pane_g2

0x6c86,	// (0x00022ac3) fep_hwr_write_pane_g3_ParamLimits

0x6c86,	// (0x00022ac3) fep_hwr_write_pane_g3

0x6c94,	// (0x00022ad1) fep_hwr_write_pane_g4_ParamLimits

0x6c94,	// (0x00022ad1) fep_hwr_write_pane_g4

0x0005,

0xfaec,	// (0x0002b929) fep_hwr_write_pane_g_ParamLimits

0xfaec,	// (0x0002b929) fep_hwr_write_pane_g

0x208f,	// (0x0001decc) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x208f,	// (0x0001decc) bg_fep_hwr_candidate_pane_g2

0x6ca9,	// (0x00022ae6) cell_hwr_candidate_pane_ParamLimits

0x6ca9,	// (0x00022ae6) cell_hwr_candidate_pane

0x6ceb,	// (0x00022b28) fep_hwr_candidate_pane_g1_ParamLimits

0xc102,	// (0x00027f3f) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc102,	// (0x00027f3f) bg_popup_fep_shadow_pane_cp2

0xc2a0,	// (0x000280dd) fep_vkb_top_pane_g4_ParamLimits

0xc2a0,	// (0x000280dd) fep_vkb_top_pane_g4

0xc2e6,	// (0x00028123) fep_vkb_side_pane_g2_ParamLimits

0xc2e6,	// (0x00028123) fep_vkb_side_pane_g2

0x48cb,	// (0x00020708) list_setting_pane_t4_ParamLimits

0x48cb,	// (0x00020708) list_setting_pane_t4

0x4965,	// (0x000207a2) list_setting_number_pane_t5_ParamLimits

0x4965,	// (0x000207a2) list_setting_number_pane_t5

0x8b9b,	// (0x000249d8) list_double_heading_pane_cp2_ParamLimits

0x8b9b,	// (0x000249d8) list_double_heading_pane_cp2

0x84cd,	// (0x0002430a) list_double_heading_pane_g1_cp2_ParamLimits

0x84cd,	// (0x0002430a) list_double_heading_pane_g1_cp2

0x84d9,	// (0x00024316) list_double_heading_pane_g2_cp2_ParamLimits

0x84d9,	// (0x00024316) list_double_heading_pane_g2_cp2

0xc63d,	// (0x0002847a) list_double_heading_pane_t1_cp2_ParamLimits

0xc63d,	// (0x0002847a) list_double_heading_pane_t1_cp2

0xc653,	// (0x00028490) list_double_heading_pane_t2_cp2_ParamLimits

0xc653,	// (0x00028490) list_double_heading_pane_t2_cp2

0x3167,	// (0x0001efa4) aid_value_unit2

0x5950,	// (0x0002178d) popup_preview_fixed_window

0x7ebb,	// (0x00023cf8) bg_popup_preview_window_pane_cp02

0xc665,	// (0x000284a2) list_preview_fixed_pane

0xc6ab,	// (0x000284e8) list_empty_pane_fp_ParamLimits

0xc6ab,	// (0x000284e8) list_empty_pane_fp

0xc6ab,	// (0x000284e8) list_single_cale_day_pane_fp_ParamLimits

0xc6ab,	// (0x000284e8) list_single_cale_day_pane_fp

0xc6ab,	// (0x000284e8) list_single_graphic_heading_pane_fp_ParamLimits

0xc6ab,	// (0x000284e8) list_single_graphic_heading_pane_fp

0xc6ab,	// (0x000284e8) list_single_graphic_pane_fp_ParamLimits

0xc6ab,	// (0x000284e8) list_single_graphic_pane_fp

0xc6ab,	// (0x000284e8) list_single_heading_pane_fp_ParamLimits

0xc6ab,	// (0x000284e8) list_single_heading_pane_fp

0xc6ab,	// (0x000284e8) list_single_pane_fp_ParamLimits

0xc6ab,	// (0x000284e8) list_single_pane_fp

0xc6c0,	// (0x000284fd) list_single_pane_fp_g1_ParamLimits

0xc6c0,	// (0x000284fd) list_single_pane_fp_g1

0x52e8,	// (0x00021125) list_single_pane_fp_g2_ParamLimits

0x52e8,	// (0x00021125) list_single_pane_fp_g2

0x52f4,	// (0x00021131) list_single_pane_fp_g3_ParamLimits

0x52f4,	// (0x00021131) list_single_pane_fp_g3

0xc6cc,	// (0x00028509) list_single_pane_fp_g4_ParamLimits

0xc6cc,	// (0x00028509) list_single_pane_fp_g4

0x0003,

0xfb4e,	// (0x0002b98b) list_single_pane_fp_g_ParamLimits

0xfb4e,	// (0x0002b98b) list_single_pane_fp_g

0x5308,	// (0x00021145) list_single_pane_fp_t1_ParamLimits

0x5308,	// (0x00021145) list_single_pane_fp_t1

0x531f,	// (0x0002115c) list_single_graphic_pane_fp_g1_ParamLimits

0x531f,	// (0x0002115c) list_single_graphic_pane_fp_g1

0xc6c0,	// (0x000284fd) list_single_graphic_pane_fp_g2_ParamLimits

0xc6c0,	// (0x000284fd) list_single_graphic_pane_fp_g2

0x52e8,	// (0x00021125) list_single_graphic_pane_fp_g3_ParamLimits

0x52e8,	// (0x00021125) list_single_graphic_pane_fp_g3

0x52f4,	// (0x00021131) list_single_graphic_pane_fp_g4_ParamLimits

0x52f4,	// (0x00021131) list_single_graphic_pane_fp_g4

0xc6cc,	// (0x00028509) list_single_graphic_pane_fp_g5_ParamLimits

0xc6cc,	// (0x00028509) list_single_graphic_pane_fp_g5

0x0004,

0xfb57,	// (0x0002b994) list_single_graphic_pane_fp_g_ParamLimits

0xfb57,	// (0x0002b994) list_single_graphic_pane_fp_g

0x532b,	// (0x00021168) list_single_graphic_pane_fp_t1_ParamLimits

0x532b,	// (0x00021168) list_single_graphic_pane_fp_t1

0x531f,	// (0x0002115c) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x531f,	// (0x0002115c) list_single_graphic_heading_pane_fp_g1

0xc6c0,	// (0x000284fd) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6c0,	// (0x000284fd) list_single_graphic_heading_pane_fp_g2

0x52e8,	// (0x00021125) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x52e8,	// (0x00021125) list_single_graphic_heading_pane_fp_g3

0x52f4,	// (0x00021131) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x52f4,	// (0x00021131) list_single_graphic_heading_pane_fp_g4

0xc6cc,	// (0x00028509) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6cc,	// (0x00028509) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb57,	// (0x0002b994) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb57,	// (0x0002b994) list_single_graphic_heading_pane_fp_g

0x5341,	// (0x0002117e) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5341,	// (0x0002117e) list_single_graphic_heading_pane_fp_t1

0x5357,	// (0x00021194) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5357,	// (0x00021194) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb62,	// (0x0002b99f) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb62,	// (0x0002b99f) list_single_graphic_heading_pane_fp_t

0x5369,	// (0x000211a6) list_single_cale_day_pane_fp_g1_ParamLimits

0x5369,	// (0x000211a6) list_single_cale_day_pane_fp_g1

0xc6d8,	// (0x00028515) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6d8,	// (0x00028515) list_single_cale_day_pane_fp_g2

0x53a1,	// (0x000211de) list_single_cale_day_pane_fp_g3_ParamLimits

0x53a1,	// (0x000211de) list_single_cale_day_pane_fp_g3

0x53c9,	// (0x00021206) list_single_cale_day_pane_fp_g4_ParamLimits

0x53c9,	// (0x00021206) list_single_cale_day_pane_fp_g4

0x53ed,	// (0x0002122a) list_single_cale_day_pane_fp_g5_ParamLimits

0x53ed,	// (0x0002122a) list_single_cale_day_pane_fp_g5

0x0004,

0xfb67,	// (0x0002b9a4) list_single_cale_day_pane_fp_g_ParamLimits

0xfb67,	// (0x0002b9a4) list_single_cale_day_pane_fp_g

0x5411,	// (0x0002124e) list_single_cale_day_pane_fp_t1_ParamLimits

0x5411,	// (0x0002124e) list_single_cale_day_pane_fp_t1

0x5437,	// (0x00021274) list_single_cale_day_pane_fp_t2_ParamLimits

0x5437,	// (0x00021274) list_single_cale_day_pane_fp_t2

0x5450,	// (0x0002128d) list_single_cale_day_pane_fp_t3_ParamLimits

0x5450,	// (0x0002128d) list_single_cale_day_pane_fp_t3

0x0002,

0xfb72,	// (0x0002b9af) list_single_cale_day_pane_fp_t_ParamLimits

0xfb72,	// (0x0002b9af) list_single_cale_day_pane_fp_t

0xc6c0,	// (0x000284fd) list_empty_pane_fp_g1_ParamLimits

0xc6c0,	// (0x000284fd) list_empty_pane_fp_g1

0x5469,	// (0x000212a6) list_empty_pane_fp_t1

0x5477,	// (0x000212b4) list_empty_pane_fp_t2

0x0001,

0xfb79,	// (0x0002b9b6) list_empty_pane_fp_t

0xc6c0,	// (0x000284fd) list_single_heading_pane_fp_g1_ParamLimits

0xc6c0,	// (0x000284fd) list_single_heading_pane_fp_g1

0x52e8,	// (0x00021125) list_single_heading_pane_fp_g2_ParamLimits

0x52e8,	// (0x00021125) list_single_heading_pane_fp_g2

0x52f4,	// (0x00021131) list_single_heading_pane_fp_g3_ParamLimits

0x52f4,	// (0x00021131) list_single_heading_pane_fp_g3

0x0002,

0xfb7e,	// (0x0002b9bb) list_single_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0002b9bb) list_single_heading_pane_fp_g

0x5485,	// (0x000212c2) list_single_heading_pane_fp_t1_ParamLimits

0x5485,	// (0x000212c2) list_single_heading_pane_fp_t1

0x5497,	// (0x000212d4) list_single_heading_pane_fp_t2_ParamLimits

0x5497,	// (0x000212d4) list_single_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x0002b9c2) list_single_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x0002b9c2) list_single_heading_pane_fp_t

0x86d1,	// (0x0002450e) aid_size_cell_fast

0x7e2b,	// (0x00023c68) soft_indicator_pane_cp1_t1

0x870e,	// (0x0002454b) cell_app_pane_cp2_ParamLimits

0x870e,	// (0x0002454b) cell_app_pane_cp2

0x6b3b,	// (0x00022978) fep_hwr_candidate_drop_down_list_pane

0x209d,	// (0x0001deda) fep_hwr_candidate_pane_g3_ParamLimits

0x209d,	// (0x0001deda) fep_hwr_candidate_pane_g3

0x20aa,	// (0x0001dee7) fep_hwr_candidate_pane_g4_ParamLimits

0x20aa,	// (0x0001dee7) fep_hwr_candidate_pane_g4

0x0002,

0xfaf9,	// (0x0002b936) fep_hwr_candidate_pane_g_ParamLimits

0xfaf9,	// (0x0002b936) fep_hwr_candidate_pane_g

0xc187,	// (0x00027fc4) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc187,	// (0x00027fc4) fep_vkb_candidate_drop_down_list_pane

0xc598,	// (0x000283d5) fep_vkb_candidate_pane_g3

0xc5a0,	// (0x000283dd) fep_vkb_candidate_pane_g4

0x0002,

0xfb26,	// (0x0002b963) fep_vkb_candidate_pane_g

0xc2a0,	// (0x000280dd) cell_hwr_candidate_pane_g1_ParamLimits

0xc5b7,	// (0x000283f4) cell_hwr_candidate_pane_g3_ParamLimits

0xc5b7,	// (0x000283f4) cell_hwr_candidate_pane_g3

0xc5d8,	// (0x00028415) cell_hwr_candidate_pane_g4_ParamLimits

0xc5d8,	// (0x00028415) cell_hwr_candidate_pane_g4

0x0002,

0xfb40,	// (0x0002b97d) cell_hwr_candidate_pane_g_ParamLimits

0xfb40,	// (0x0002b97d) cell_hwr_candidate_pane_g

0xc5f9,	// (0x00028436) cell_vkb_candidate_pane_g3_ParamLimits

0xc5f9,	// (0x00028436) cell_vkb_candidate_pane_g3

0xc614,	// (0x00028451) cell_vkb_candidate_pane_g4_ParamLimits

0xc614,	// (0x00028451) cell_vkb_candidate_pane_g4

0xc6e4,	// (0x00028521) cell_app_pane_cp2_g1_ParamLimits

0xc6e4,	// (0x00028521) cell_app_pane_cp2_g1

0xc702,	// (0x0002853f) cell_app_pane_cp2_g2_ParamLimits

0xc702,	// (0x0002853f) cell_app_pane_cp2_g2

0x0001,

0xfb8a,	// (0x0002b9c7) cell_app_pane_cp2_g_ParamLimits

0xfb8a,	// (0x0002b9c7) cell_app_pane_cp2_g

0xc70e,	// (0x0002854b) cell_app_pane_cp2_t1_ParamLimits

0xc70e,	// (0x0002854b) cell_app_pane_cp2_t1

0x84bf,	// (0x000242fc) grid_highlight_pane_cp1_ParamLimits

0x84bf,	// (0x000242fc) grid_highlight_pane_cp1

0x6d77,	// (0x00022bb4) cell_hwr_candidate_pane_cp1_ParamLimits

0x6d77,	// (0x00022bb4) cell_hwr_candidate_pane_cp1

0xc2a0,	// (0x000280dd) fep_hwr_candidate_drop_down_list_pane_g1

0xc720,	// (0x0002855d) fep_hwr_candidate_drop_down_list_pane_g2

0xc72d,	// (0x0002856a) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8f,	// (0x0002b9cc) fep_hwr_candidate_drop_down_list_pane_g

0x6d96,	// (0x00022bd3) fep_hwr_candidate_drop_down_list_scroll_pane

0x6d9f,	// (0x00022bdc) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6d9f,	// (0x00022bdc) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6dac,	// (0x00022be9) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6dac,	// (0x00022be9) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6db9,	// (0x00022bf6) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6db9,	// (0x00022bf6) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc5f9,	// (0x00028436) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5f9,	// (0x00028436) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc614,	// (0x00028451) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc614,	// (0x00028451) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6dc6,	// (0x00022c03) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6dc6,	// (0x00022c03) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6de1,	// (0x00022c1e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6de1,	// (0x00022c1e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6dfc,	// (0x00022c39) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6dfc,	// (0x00022c39) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb96,	// (0x0002b9d3) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb96,	// (0x0002b9d3) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc73a,	// (0x00028577) cell_vkb_candidate_pane_cp1_ParamLimits

0xc73a,	// (0x00028577) cell_vkb_candidate_pane_cp1

0xc2a0,	// (0x000280dd) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc2a0,	// (0x000280dd) fep_vkb_candidate_drop_down_list_pane_g1

0xc720,	// (0x0002855d) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc720,	// (0x0002855d) fep_vkb_candidate_drop_down_list_pane_g2

0xc72d,	// (0x0002856a) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc72d,	// (0x0002856a) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb8f,	// (0x0002b9cc) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb8f,	// (0x0002b9cc) fep_vkb_candidate_drop_down_list_pane_g

0xc75a,	// (0x00028597) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc75a,	// (0x00028597) fep_vkb_candidate_drop_down_list_scroll_pane

0xc767,	// (0x000285a4) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc767,	// (0x000285a4) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc774,	// (0x000285b1) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc774,	// (0x000285b1) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc780,	// (0x000285bd) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc780,	// (0x000285bd) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc5b7,	// (0x000283f4) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5b7,	// (0x000283f4) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc5d8,	// (0x00028415) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5d8,	// (0x00028415) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc78c,	// (0x000285c9) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc78c,	// (0x000285c9) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7ad,	// (0x000285ea) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7ad,	// (0x000285ea) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7ce,	// (0x0002860b) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7ce,	// (0x0002860b) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba7,	// (0x0002b9e4) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba7,	// (0x0002b9e4) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7b5c,	// (0x00023999) title_pane_g1_ParamLimits

0x7b69,	// (0x000239a6) title_pane_g2_ParamLimits

0xf529,	// (0x0002b366) title_pane_g_ParamLimits

0x8b44,	// (0x00024981) aid_call2_pane

0x8b4c,	// (0x00024989) aid_call_pane

0x8b54,	// (0x00024991) popup_clock_analogue_window_g1

0x8b54,	// (0x00024991) popup_clock_analogue_window_g2

0x5cc1,	// (0x00021afe) popup_clock_analogue_window_g3

0x5cca,	// (0x00021b07) popup_clock_analogue_window_g4

0x3179,	// (0x0001efb6) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x0002b510) popup_clock_analogue_window_g

0x5cd2,	// (0x00021b0f) popup_clock_analogue_window_t1

0x5ce0,	// (0x00021b1d) clock_digital_number_pane_ParamLimits

0x5ce0,	// (0x00021b1d) clock_digital_number_pane

0x5cec,	// (0x00021b29) clock_digital_number_pane_cp02_ParamLimits

0x5cec,	// (0x00021b29) clock_digital_number_pane_cp02

0x5cf8,	// (0x00021b35) clock_digital_number_pane_cp03_ParamLimits

0x5cf8,	// (0x00021b35) clock_digital_number_pane_cp03

0x5d04,	// (0x00021b41) clock_digital_number_pane_cp04_ParamLimits

0x5d04,	// (0x00021b41) clock_digital_number_pane_cp04

0x5d10,	// (0x00021b4d) clock_digital_separator_pane_ParamLimits

0x5d10,	// (0x00021b4d) clock_digital_separator_pane

0x5d1c,	// (0x00021b59) popup_clock_digital_window_t1_ParamLimits

0x5d1c,	// (0x00021b59) popup_clock_digital_window_t1

0x3179,	// (0x0001efb6) clock_digital_number_pane_g1

0x3179,	// (0x0001efb6) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x0002b51b) clock_digital_number_pane_g

0x3179,	// (0x0001efb6) clock_digital_separator_pane_g1

0x3179,	// (0x0001efb6) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x0002b51b) clock_digital_separator_pane_g

0x94e1,	// (0x0002531e) aid_fill_nsta_ParamLimits

0x962d,	// (0x0002546a) indicator_nsta_pane_ParamLimits

0x97a6,	// (0x000255e3) popup_clock_analogue_window

0x97a6,	// (0x000255e3) popup_clock_digital_window

0xb9fd,	// (0x0002783a) grid_indicator_nsta_pane_ParamLimits

0xba26,	// (0x00027863) clock_nsta_pane_t2

0x0001,

0xfa79,	// (0x0002b8b6) clock_nsta_pane_t

0x5c85,	// (0x00021ac2) aid_size_max_handle

0x5c8f,	// (0x00021acc) aid_size_min_handle

0x9181,	// (0x00024fbe) editor_scroll_pane

0xc7e9,	// (0x00028626) ex_editor_pane

0x863f,	// (0x0002447c) scroll_pane_cp13

0x845e,	// (0x0002429b) scroll_pane_cp14

0x8b83,	// (0x000249c0) scroll_pane_cp36

0x8baf,	// (0x000249ec) list_single_graphic_hl_pane_cp2_ParamLimits

0x8baf,	// (0x000249ec) list_single_graphic_hl_pane_cp2

0xafac,	// (0x00026de9) list_single_graphic_hl_pane_ParamLimits

0xafac,	// (0x00026de9) list_single_graphic_hl_pane

0x54ad,	// (0x000212ea) aid_size_min_hl_cp1

0xc7f1,	// (0x0002862e) list_highlight_pane_cp34_ParamLimits

0xc7f1,	// (0x0002862e) list_highlight_pane_cp34

0xc802,	// (0x0002863f) list_single_graphic_hl_pane_g1_ParamLimits

0xc802,	// (0x0002863f) list_single_graphic_hl_pane_g1

0x54b6,	// (0x000212f3) list_single_graphic_hl_pane_g2_ParamLimits

0x54b6,	// (0x000212f3) list_single_graphic_hl_pane_g2

0x54b6,	// (0x000212f3) list_single_graphic_hl_pane_g3_ParamLimits

0x54b6,	// (0x000212f3) list_single_graphic_hl_pane_g3

0x54c2,	// (0x000212ff) list_single_graphic_hl_pane_g4_ParamLimits

0x54c2,	// (0x000212ff) list_single_graphic_hl_pane_g4

0x54ce,	// (0x0002130b) list_single_graphic_hl_pane_g5_ParamLimits

0x54ce,	// (0x0002130b) list_single_graphic_hl_pane_g5

0x0004,

0xfbb8,	// (0x0002b9f5) list_single_graphic_hl_pane_g_ParamLimits

0xfbb8,	// (0x0002b9f5) list_single_graphic_hl_pane_g

0x54e2,	// (0x0002131f) list_single_graphic_hl_pane_t1_ParamLimits

0x54e2,	// (0x0002131f) list_single_graphic_hl_pane_t1

0xc80f,	// (0x0002864c) aid_size_min_hl_cp2

0xc818,	// (0x00028655) list_highlight_pane_cp34_cp2_ParamLimits

0xc818,	// (0x00028655) list_highlight_pane_cp34_cp2

0xc802,	// (0x0002863f) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc802,	// (0x0002863f) list_single_graphic_hl_pane_g1_cp2

0xc825,	// (0x00028662) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc825,	// (0x00028662) list_single_graphic_hl_pane_g2_cp2

0xc831,	// (0x0002866e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc831,	// (0x0002866e) list_single_graphic_hl_pane_g3_cp2

0xc83f,	// (0x0002867c) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc83f,	// (0x0002867c) list_single_graphic_hl_pane_g4_cp2

0xc84b,	// (0x00028688) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc84b,	// (0x00028688) list_single_graphic_hl_pane_g5_cp2

0x5fd0,	// (0x00021e0d) control_pane_g4_ParamLimits

0x5fd0,	// (0x00021e0d) control_pane_g4

0x94a5,	// (0x000252e2) bg_popup_sub_pane_cp10_ParamLimits

0xc02c,	// (0x00027e69) list_choice_list_pane_ParamLimits

0xc03b,	// (0x00027e78) scroll_pane_cp23

0x7ebb,	// (0x00023cf8) bg_popup_preview_window_pane_cp02_ParamLimits

0xc665,	// (0x000284a2) list_preview_fixed_pane_ParamLimits

0xc67b,	// (0x000284b8) list_preview_fixed_pane_cp_ParamLimits

0xc67b,	// (0x000284b8) list_preview_fixed_pane_cp

0xc687,	// (0x000284c4) popup_preview_fixed_window_g1_ParamLimits

0xc687,	// (0x000284c4) popup_preview_fixed_window_g1

0xc693,	// (0x000284d0) popup_preview_fixed_window_g2_ParamLimits

0xc693,	// (0x000284d0) popup_preview_fixed_window_g2

0x0002,

0xfb47,	// (0x0002b984) popup_preview_fixed_window_g_ParamLimits

0xfb47,	// (0x0002b984) popup_preview_fixed_window_g

0x5bf9,	// (0x00021a36) aid_navi_side_left_pane_ParamLimits

0x5c0e,	// (0x00021a4b) aid_navi_side_right_pane_ParamLimits

0x5c26,	// (0x00021a63) navi_icon_pane_stacon_ParamLimits

0x5c3a,	// (0x00021a77) navi_navi_pane_stacon_ParamLimits

0x5c26,	// (0x00021a63) navi_text_pane_stacon_ParamLimits

0x316f,	// (0x0001efac) main_text_info_pane

0xc875,	// (0x000286b2) listscroll_text_info_pane

0xc87d,	// (0x000286ba) list_text_info_pane_ParamLimits

0xc87d,	// (0x000286ba) list_text_info_pane

0xc88c,	// (0x000286c9) scroll_pane_cp24_ParamLimits

0xc88c,	// (0x000286c9) scroll_pane_cp24

0xc8aa,	// (0x000286e7) list_text_info_pane_t1_ParamLimits

0xc8aa,	// (0x000286e7) list_text_info_pane_t1

0x6128,	// (0x00021f65) popup_fast_swap2_window_ParamLimits

0x6128,	// (0x00021f65) popup_fast_swap2_window

0xc8db,	// (0x00028718) aid_size_cell_fast2

0x316f,	// (0x0001efac) bg_popup_window_pane_cp17

0xc8e5,	// (0x00028722) heading_pane_cp2

0xc8ed,	// (0x0002872a) listscroll_fast2_pane

0xc8f5,	// (0x00028732) grid_fast2_pane

0xc8ff,	// (0x0002873c) listscroll_fast2_pane_g1

0xc907,	// (0x00028744) listscroll_fast2_pane_g2

0x0001,

0xfbc3,	// (0x0002ba00) listscroll_fast2_pane_g

0x863f,	// (0x0002447c) scroll_pane_cp26

0xc911,	// (0x0002874e) cell_fast2_pane_ParamLimits

0xc911,	// (0x0002874e) cell_fast2_pane

0xc926,	// (0x00028763) cell_fast2_pane_g1

0xc92f,	// (0x0002876c) cell_fast2_pane_g2

0xc938,	// (0x00028775) cell_fast2_pane_g3

0x0002,

0xfbc8,	// (0x0002ba05) cell_fast2_pane_g

0x821b,	// (0x00024058) grid_highlight_pane_cp9

0x8230,	// (0x0002406d) main_eswt_pane_ParamLimits

0x8230,	// (0x0002406d) main_eswt_pane

0xc8a1,	// (0x000286de) list_single_text_info_pane

0xc940,	// (0x0002877d) eswt_ctrl_button_pane

0xc940,	// (0x0002877d) eswt_ctrl_canvas_pane

0xc948,	// (0x00028785) eswt_ctrl_combo_pane

0xc940,	// (0x0002877d) eswt_ctrl_default_pane

0xc940,	// (0x0002877d) eswt_ctrl_label_pane

0xc950,	// (0x0002878d) eswt_ctrl_wait_pane

0xc958,	// (0x00028795) eswt_shell_pane

0x316f,	// (0x0001efac) listscroll_eswt_app_pane

0xc978,	// (0x000287b5) popup_eswt_tasktip_window_ParamLimits

0xc978,	// (0x000287b5) popup_eswt_tasktip_window

0x9a43,	// (0x00025880) bg_popup_window_pane_cp18

0xc991,	// (0x000287ce) eswt_control_pane_g1_ParamLimits

0xc991,	// (0x000287ce) eswt_control_pane_g1

0xc99e,	// (0x000287db) eswt_control_pane_g2_ParamLimits

0xc99e,	// (0x000287db) eswt_control_pane_g2

0xc9ab,	// (0x000287e8) eswt_control_pane_g3_ParamLimits

0xc9ab,	// (0x000287e8) eswt_control_pane_g3

0xc9b8,	// (0x000287f5) eswt_control_pane_g4_ParamLimits

0xc9b8,	// (0x000287f5) eswt_control_pane_g4

0x0003,

0xfbcf,	// (0x0002ba0c) eswt_control_pane_g_ParamLimits

0xfbcf,	// (0x0002ba0c) eswt_control_pane_g

0x84bf,	// (0x000242fc) bg_button_pane_ParamLimits

0x84bf,	// (0x000242fc) bg_button_pane

0x8230,	// (0x0002406d) common_borders_pane_copy2_ParamLimits

0x8230,	// (0x0002406d) common_borders_pane_copy2

0xc9c5,	// (0x00028802) control_button_pane_g1_ParamLimits

0xc9c5,	// (0x00028802) control_button_pane_g1

0xc9d1,	// (0x0002880e) control_button_pane_g2_ParamLimits

0xc9d1,	// (0x0002880e) control_button_pane_g2

0xc9dd,	// (0x0002881a) control_button_pane_g3_ParamLimits

0xc9dd,	// (0x0002881a) control_button_pane_g3

0x0002,

0xfbd8,	// (0x0002ba15) control_button_pane_g_ParamLimits

0xfbd8,	// (0x0002ba15) control_button_pane_g

0xc9f1,	// (0x0002882e) control_button_pane_t1

0xc9ff,	// (0x0002883c) control_button_pane_t2

0x0001,

0xfbdf,	// (0x0002ba1c) control_button_pane_t

0x99cf,	// (0x0002580c) bg_button_pane_g1

0x99d7,	// (0x00025814) bg_button_pane_g2

0x99df,	// (0x0002581c) bg_button_pane_g3

0x99e7,	// (0x00025824) bg_button_pane_g4

0x99ef,	// (0x0002582c) bg_button_pane_g5

0x99f7,	// (0x00025834) bg_button_pane_g6

0x99ff,	// (0x0002583c) bg_button_pane_g7

0x9a07,	// (0x00025844) bg_button_pane_g8

0x9a0f,	// (0x0002584c) bg_button_pane_g9

0x0008,

0xf841,	// (0x0002b67e) bg_button_pane_g

0xbfe7,	// (0x00027e24) common_borders_pane_ParamLimits

0xbfe7,	// (0x00027e24) common_borders_pane

0xc991,	// (0x000287ce) eswt_control_pane_g1_copy1_ParamLimits

0xc991,	// (0x000287ce) eswt_control_pane_g1_copy1

0xc99e,	// (0x000287db) eswt_control_pane_g2_copy1_ParamLimits

0xc99e,	// (0x000287db) eswt_control_pane_g2_copy1

0xc9ab,	// (0x000287e8) eswt_control_pane_g3_copy1_ParamLimits

0xc9ab,	// (0x000287e8) eswt_control_pane_g3_copy1

0xc9b8,	// (0x000287f5) eswt_control_pane_g4_copy1_ParamLimits

0xc9b8,	// (0x000287f5) eswt_control_pane_g4_copy1

0xc022,	// (0x00027e5f) bg_eswt_ctrl_canvas_pane_g1

0xbfe7,	// (0x00027e24) common_borders_pane_cp2_ParamLimits

0xbfe7,	// (0x00027e24) common_borders_pane_cp2

0xbfe7,	// (0x00027e24) common_borders_pane_cp3_ParamLimits

0xbfe7,	// (0x00027e24) common_borders_pane_cp3

0xca0d,	// (0x0002884a) separator_horizontal_pane

0xca15,	// (0x00028852) separator_vertical_pane

0xc991,	// (0x000287ce) eswt_control_pane_g1_copy2_ParamLimits

0xc991,	// (0x000287ce) eswt_control_pane_g1_copy2

0xc99e,	// (0x000287db) eswt_control_pane_g2_copy2_ParamLimits

0xc99e,	// (0x000287db) eswt_control_pane_g2_copy2

0xc9ab,	// (0x000287e8) eswt_control_pane_g3_copy2_ParamLimits

0xc9ab,	// (0x000287e8) eswt_control_pane_g3_copy2

0xc9b8,	// (0x000287f5) eswt_control_pane_g4_copy2_ParamLimits

0xc9b8,	// (0x000287f5) eswt_control_pane_g4_copy2

0x316f,	// (0x0001efac) common_borders_pane_cp4

0xca1e,	// (0x0002885b) separator_horizontal_pane_g1

0xca27,	// (0x00028864) separator_horizontal_pane_g2

0xca30,	// (0x0002886d) separator_horizontal_pane_g3

0x0002,

0xfbe4,	// (0x0002ba21) separator_horizontal_pane_g

0xc991,	// (0x000287ce) eswt_control_pane_g1_copy3_ParamLimits

0xc991,	// (0x000287ce) eswt_control_pane_g1_copy3

0xc99e,	// (0x000287db) eswt_control_pane_g2_copy3_ParamLimits

0xc99e,	// (0x000287db) eswt_control_pane_g2_copy3

0xc9ab,	// (0x000287e8) eswt_control_pane_g3_copy3_ParamLimits

0xc9ab,	// (0x000287e8) eswt_control_pane_g3_copy3

0xc9b8,	// (0x000287f5) eswt_control_pane_g4_copy3_ParamLimits

0xc9b8,	// (0x000287f5) eswt_control_pane_g4_copy3

0x316f,	// (0x0001efac) common_borders_pane_cp5

0xca39,	// (0x00028876) separator_vertical_pane_g1

0xca42,	// (0x0002887f) separator_vertical_pane_g2

0xca4b,	// (0x00028888) separator_vertical_pane_g3

0x0002,

0xfbeb,	// (0x0002ba28) separator_vertical_pane_g

0xc991,	// (0x000287ce) eswt_control_pane_g1_copy4_ParamLimits

0xc991,	// (0x000287ce) eswt_control_pane_g1_copy4

0xc99e,	// (0x000287db) eswt_control_pane_g2_copy4_ParamLimits

0xc99e,	// (0x000287db) eswt_control_pane_g2_copy4

0xc9ab,	// (0x000287e8) eswt_control_pane_g3_copy4_ParamLimits

0xc9ab,	// (0x000287e8) eswt_control_pane_g3_copy4

0xc9b8,	// (0x000287f5) eswt_control_pane_g4_copy4_ParamLimits

0xc9b8,	// (0x000287f5) eswt_control_pane_g4_copy4

0xca54,	// (0x00028891) eswt_ctrl_combo_button_pane

0xca5c,	// (0x00028899) eswt_ctrl_input_pane

0xca64,	// (0x000288a1) popup_choice_list_window_cp70

0xca6c,	// (0x000288a9) eswt_ctrl_input_pane_t1

0x316f,	// (0x0001efac) input_focus_pane_cp70

0xbfe7,	// (0x00027e24) bg_button_pane_cp70_ParamLimits

0xbfe7,	// (0x00027e24) bg_button_pane_cp70

0xca7a,	// (0x000288b7) eswt_ctrl_combo_button_pane_g1

0xca82,	// (0x000288bf) wait_bar_pane_cp70

0x9a43,	// (0x00025880) bg_popup_window_pane_cp70_ParamLimits

0x9a43,	// (0x00025880) bg_popup_window_pane_cp70

0xca8a,	// (0x000288c7) popup_eswt_tasktip_window_t1

0xcaa0,	// (0x000288dd) wait_bar_pane_cp71_ParamLimits

0xcaa0,	// (0x000288dd) wait_bar_pane_cp71

0xcaac,	// (0x000288e9) grid_eswt_app_pane

0x8966,	// (0x000247a3) scroll_pane_cp70

0xcab5,	// (0x000288f2) cell_eswt_app_pane_ParamLimits

0xcab5,	// (0x000288f2) cell_eswt_app_pane

0xcae5,	// (0x00028922) cell_eswt_app_pane_g1_ParamLimits

0xcae5,	// (0x00028922) cell_eswt_app_pane_g1

0xcb14,	// (0x00028951) cell_eswt_app_pane_g2_ParamLimits

0xcb14,	// (0x00028951) cell_eswt_app_pane_g2

0x0001,

0xfbf2,	// (0x0002ba2f) cell_eswt_app_pane_g_ParamLimits

0xfbf2,	// (0x0002ba2f) cell_eswt_app_pane_g

0xcb3d,	// (0x0002897a) cell_eswt_app_pane_t1_ParamLimits

0xcb3d,	// (0x0002897a) cell_eswt_app_pane_t1

0xcb6f,	// (0x000289ac) grid_highlight_pane_cp70_ParamLimits

0xcb6f,	// (0x000289ac) grid_highlight_pane_cp70

0x904d,	// (0x00024e8a) set_content_pane_g1

0x942c,	// (0x00025269) status_small_volume_pane

0x6e17,	// (0x00022c54) status_small_volume_pane_g1

0x6e1f,	// (0x00022c5c) volume_small2_pane

0x6e28,	// (0x00022c65) volume_small2_pane_g1

0x6e31,	// (0x00022c6e) volume_small2_pane_g2

0x6e3a,	// (0x00022c77) volume_small2_pane_g3

0x6e43,	// (0x00022c80) volume_small2_pane_g4

0x6e4c,	// (0x00022c89) volume_small2_pane_g5

0x6e55,	// (0x00022c92) volume_small2_pane_g6

0x6e5e,	// (0x00022c9b) volume_small2_pane_g7

0x6e67,	// (0x00022ca4) volume_small2_pane_g8

0x6e70,	// (0x00022cad) volume_small2_pane_g9

0x6e79,	// (0x00022cb6) volume_small2_pane_g10

0x0009,

0xfbf7,	// (0x0002ba34) volume_small2_pane_g

0xc3e8,	// (0x00028225) fep_vkb_top_text_pane_g1_ParamLimits

0xc403,	// (0x00028240) fep_vkb_top_text_pane_t1_ParamLimits

0xc69f,	// (0x000284dc) popup_preview_fixed_window_g3_ParamLimits

0xc69f,	// (0x000284dc) popup_preview_fixed_window_g3

0x65d9,	// (0x00022416) popup_toolbar_trans_pane

0xadb3,	// (0x00026bf0) aid_height_set_list_ParamLimits

0xadc4,	// (0x00026c01) aid_size_parent_ParamLimits

0x94a5,	// (0x000252e2) list_highlight_pane_cp2_ParamLimits

0x904d,	// (0x00024e8a) set_content_pane_g1_ParamLimits

0x4f28,	// (0x00020d65) list_single_image_pane_ParamLimits

0x4f28,	// (0x00020d65) list_single_image_pane

0xcb7b,	// (0x000289b8) aid_size_cell_image_ParamLimits

0xcb7b,	// (0x000289b8) aid_size_cell_image

0xcb88,	// (0x000289c5) grid_single_image_pane_ParamLimits

0xcb88,	// (0x000289c5) grid_single_image_pane

0xa755,	// (0x00026592) list_single_image_pane_g1_ParamLimits

0xa755,	// (0x00026592) list_single_image_pane_g1

0xcb94,	// (0x000289d1) list_single_image_pane_g2_ParamLimits

0xcb94,	// (0x000289d1) list_single_image_pane_g2

0x0001,

0xfc0c,	// (0x0002ba49) list_single_image_pane_g_ParamLimits

0xfc0c,	// (0x0002ba49) list_single_image_pane_g

0xcba8,	// (0x000289e5) list_single_image_pane_t1_ParamLimits

0xcba8,	// (0x000289e5) list_single_image_pane_t1

0xcbbe,	// (0x000289fb) cell_image_list_pane_ParamLimits

0xcbbe,	// (0x000289fb) cell_image_list_pane

0xcbd2,	// (0x00028a0f) cell_image_list_pane_g1

0xcbdb,	// (0x00028a18) cell_image_list_pane_g2

0x0001,

0xfc11,	// (0x0002ba4e) cell_image_list_pane_g

0xcbe4,	// (0x00028a21) aid_size_cell_tb_trans_pane

0x84bf,	// (0x000242fc) bg_tb_trans_pane

0xcbf6,	// (0x00028a33) grid_tb_trans_pane

0x99cf,	// (0x0002580c) bg_tb_trans_pane_g1

0x99d7,	// (0x00025814) bg_tb_trans_pane_g2

0x99df,	// (0x0002581c) bg_tb_trans_pane_g3

0x99e7,	// (0x00025824) bg_tb_trans_pane_g4

0x99ef,	// (0x0002582c) bg_tb_trans_pane_g5

0x9a07,	// (0x00025844) bg_tb_trans_pane_g6

0x9a0f,	// (0x0002584c) bg_tb_trans_pane_g7

0x99f7,	// (0x00025834) bg_tb_trans_pane_g8

0x99ff,	// (0x0002583c) bg_tb_trans_pane_g9

0x0008,

0xfc16,	// (0x0002ba53) bg_tb_trans_pane_g

0xcc0a,	// (0x00028a47) cell_toolbar_trans_pane_ParamLimits

0xcc0a,	// (0x00028a47) cell_toolbar_trans_pane

0xc022,	// (0x00027e5f) cell_toolbar_trans_pane_g1

0xbbf7,	// (0x00027a34) list_form2_midp_pane_t1

0xbc05,	// (0x00027a42) list_form2_midp_pane_t2

0x0001,

0xfabf,	// (0x0002b8fc) list_form2_midp_pane_t

0xbc13,	// (0x00027a50) scroll_pane_cp51_ParamLimits

0xbdcf,	// (0x00027c0c) form2_midp_wait_pane_g1

0xbdd8,	// (0x00027c15) form2_midp_wait_pane_g2

0xbde1,	// (0x00027c1e) form2_midp_wait_pane_g3

0x0002,

0xfad4,	// (0x0002b911) form2_midp_wait_pane_g

0x7c32,	// (0x00023a6f) list_highlight_pane_cp21_ParamLimits

0xbe2d,	// (0x00027c6a) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe3c,	// (0x00027c79) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x4ec9,	// (0x00020d06) list_single_2graphic_im_pane_ParamLimits

0x4ec9,	// (0x00020d06) list_single_2graphic_im_pane

0xcc30,	// (0x00028a6d) list_single_2graphic_im_pane_g1_ParamLimits

0xcc30,	// (0x00028a6d) list_single_2graphic_im_pane_g1

0xcc41,	// (0x00028a7e) list_single_2graphic_im_pane_g2_ParamLimits

0xcc41,	// (0x00028a7e) list_single_2graphic_im_pane_g2

0xcc4d,	// (0x00028a8a) list_single_2graphic_im_pane_g3_ParamLimits

0xcc4d,	// (0x00028a8a) list_single_2graphic_im_pane_g3

0x0003,

0xfc29,	// (0x0002ba66) list_single_2graphic_im_pane_g_ParamLimits

0xfc29,	// (0x0002ba66) list_single_2graphic_im_pane_g

0xcc6d,	// (0x00028aaa) list_single_2graphic_im_pane_t1_ParamLimits

0xcc6d,	// (0x00028aaa) list_single_2graphic_im_pane_t1

0xc6ab,	// (0x000284e8) list_single_graphic_2heading_pane_fp_ParamLimits

0xc6ab,	// (0x000284e8) list_single_graphic_2heading_pane_fp

0x531f,	// (0x0002115c) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x531f,	// (0x0002115c) list_single_graphic_2heading_pane_fp_g1

0xc6c0,	// (0x000284fd) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6c0,	// (0x000284fd) list_single_graphic_2heading_pane_fp_g2

0x52e8,	// (0x00021125) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x52e8,	// (0x00021125) list_single_graphic_2heading_pane_fp_g3

0x52f4,	// (0x00021131) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x52f4,	// (0x00021131) list_single_graphic_2heading_pane_fp_g4

0xc6cc,	// (0x00028509) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6cc,	// (0x00028509) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb57,	// (0x0002b994) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb57,	// (0x0002b994) list_single_graphic_2heading_pane_fp_g

0x54f8,	// (0x00021335) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x54f8,	// (0x00021335) list_single_graphic_2heading_pane_fp_t1

0x5357,	// (0x00021194) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5357,	// (0x00021194) list_single_graphic_2heading_pane_fp_t2

0x550e,	// (0x0002134b) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x550e,	// (0x0002134b) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc32,	// (0x0002ba6f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc32,	// (0x0002ba6f) list_single_graphic_2heading_pane_fp_t

0xc0ae,	// (0x00027eeb) fep_hwr_write_pane_g5_ParamLimits

0xc0ae,	// (0x00027eeb) fep_hwr_write_pane_g5

0xc0ba,	// (0x00027ef7) fep_hwr_write_pane_g6_ParamLimits

0xc0ba,	// (0x00027ef7) fep_hwr_write_pane_g6

0xc958,	// (0x00028795) eswt_shell_pane_ParamLimits

0x9a43,	// (0x00025880) bg_popup_window_pane_cp18_ParamLimits

0xc989,	// (0x000287c6) heading_pane_cp70

0xca8a,	// (0x000288c7) popup_eswt_tasktip_window_t1_ParamLimits

0x9536,	// (0x00025373) aid_touch_tab_arrow_left

0x9545,	// (0x00025382) aid_touch_tab_arrow_right

0x7b7a,	// (0x000239b7) title_pane_g3_ParamLimits

0x7b7a,	// (0x000239b7) title_pane_g3

0x847e,	// (0x000242bb) set_value_pane_g1

0x65d9,	// (0x00022416) popup_toolbar_trans_pane_ParamLimits

0xcbe4,	// (0x00028a21) aid_size_cell_tb_trans_pane_ParamLimits

0x84bf,	// (0x000242fc) bg_tb_trans_pane_ParamLimits

0xcbf6,	// (0x00028a33) grid_tb_trans_pane_ParamLimits

0x7ebb,	// (0x00023cf8) cont_note_pane_ParamLimits

0x7ebb,	// (0x00023cf8) cont_note_pane

0x8230,	// (0x0002406d) cont_snote2_single_text_pane_ParamLimits

0x8230,	// (0x0002406d) cont_snote2_single_text_pane

0x8230,	// (0x0002406d) cont_snote2_single_graphic_pane_ParamLimits

0x8230,	// (0x0002406d) cont_snote2_single_graphic_pane

0xa05e,	// (0x00025e9b) cont_note_wait_pane_ParamLimits

0xa05e,	// (0x00025e9b) cont_note_wait_pane

0xa05e,	// (0x00025e9b) cont_note_image_pane_ParamLimits

0xa05e,	// (0x00025e9b) cont_note_image_pane

0xcc9e,	// (0x00028adb) popup_note2_window_g1_ParamLimits

0xcc9e,	// (0x00028adb) popup_note2_window_g1

0xcccf,	// (0x00028b0c) popup_note2_window_t1_ParamLimits

0xcccf,	// (0x00028b0c) popup_note2_window_t1

0xcd14,	// (0x00028b51) popup_note2_window_t2_ParamLimits

0xcd14,	// (0x00028b51) popup_note2_window_t2

0xcd59,	// (0x00028b96) popup_note2_window_t3_ParamLimits

0xcd59,	// (0x00028b96) popup_note2_window_t3

0xcd9e,	// (0x00028bdb) popup_note2_window_t4_ParamLimits

0xcd9e,	// (0x00028bdb) popup_note2_window_t4

0x7f3f,	// (0x00023d7c) popup_note2_window_t5_ParamLimits

0x7f3f,	// (0x00023d7c) popup_note2_window_t5

0x0004,

0xfc3e,	// (0x0002ba7b) popup_note2_window_t_ParamLimits

0xfc3e,	// (0x0002ba7b) popup_note2_window_t

0xcdcd,	// (0x00028c0a) popup_note2_image_window_g1_ParamLimits

0xcdcd,	// (0x00028c0a) popup_note2_image_window_g1

0xcdd9,	// (0x00028c16) popup_note2_image_window_g2_ParamLimits

0xcdd9,	// (0x00028c16) popup_note2_image_window_g2

0x0001,

0xfc49,	// (0x0002ba86) popup_note2_image_window_g_ParamLimits

0xfc49,	// (0x0002ba86) popup_note2_image_window_g

0xcdeb,	// (0x00028c28) popup_note2_image_window_t1_ParamLimits

0xcdeb,	// (0x00028c28) popup_note2_image_window_t1

0xce03,	// (0x00028c40) popup_note2_image_window_t2_ParamLimits

0xce03,	// (0x00028c40) popup_note2_image_window_t2

0xce1b,	// (0x00028c58) popup_note2_image_window_t3_ParamLimits

0xce1b,	// (0x00028c58) popup_note2_image_window_t3

0x0002,

0xfc4e,	// (0x0002ba8b) popup_note2_image_window_t_ParamLimits

0xfc4e,	// (0x0002ba8b) popup_note2_image_window_t

0xa06c,	// (0x00025ea9) popup_note2_wait_window_g1_ParamLimits

0xa06c,	// (0x00025ea9) popup_note2_wait_window_g1

0xce37,	// (0x00028c74) popup_note2_wait_window_g2_ParamLimits

0xce37,	// (0x00028c74) popup_note2_wait_window_g2

0xa084,	// (0x00025ec1) popup_note2_wait_window_g3_ParamLimits

0xa084,	// (0x00025ec1) popup_note2_wait_window_g3

0x0002,

0xfc55,	// (0x0002ba92) popup_note2_wait_window_g_ParamLimits

0xfc55,	// (0x0002ba92) popup_note2_wait_window_g

0xce43,	// (0x00028c80) popup_note2_wait_window_t1_ParamLimits

0xce43,	// (0x00028c80) popup_note2_wait_window_t1

0xce61,	// (0x00028c9e) popup_note2_wait_window_t2_ParamLimits

0xce61,	// (0x00028c9e) popup_note2_wait_window_t2

0xce7f,	// (0x00028cbc) popup_note2_wait_window_t3_ParamLimits

0xce7f,	// (0x00028cbc) popup_note2_wait_window_t3

0xce91,	// (0x00028cce) popup_note2_wait_window_t4_ParamLimits

0xce91,	// (0x00028cce) popup_note2_wait_window_t4

0x0003,

0xfc5c,	// (0x0002ba99) popup_note2_wait_window_t_ParamLimits

0xfc5c,	// (0x0002ba99) popup_note2_wait_window_t

0xcea3,	// (0x00028ce0) wait_bar2_pane_ParamLimits

0xcea3,	// (0x00028ce0) wait_bar2_pane

0xcebb,	// (0x00028cf8) popup_snote2_single_text_window_g1_ParamLimits

0xcebb,	// (0x00028cf8) popup_snote2_single_text_window_g1

0xcee3,	// (0x00028d20) popup_snote2_single_text_window_t1_ParamLimits

0xcee3,	// (0x00028d20) popup_snote2_single_text_window_t1

0xcf2f,	// (0x00028d6c) popup_snote2_single_text_window_t2_ParamLimits

0xcf2f,	// (0x00028d6c) popup_snote2_single_text_window_t2

0xcf7b,	// (0x00028db8) popup_snote2_single_text_window_t3_ParamLimits

0xcf7b,	// (0x00028db8) popup_snote2_single_text_window_t3

0xcfbc,	// (0x00028df9) popup_snote2_single_text_window_t4_ParamLimits

0xcfbc,	// (0x00028df9) popup_snote2_single_text_window_t4

0xcff2,	// (0x00028e2f) popup_snote2_single_text_window_t5_ParamLimits

0xcff2,	// (0x00028e2f) popup_snote2_single_text_window_t5

0x0004,

0xfc65,	// (0x0002baa2) popup_snote2_single_text_window_t_ParamLimits

0xfc65,	// (0x0002baa2) popup_snote2_single_text_window_t

0xd01d,	// (0x00028e5a) popup_snote2_single_graphic_window_g1_ParamLimits

0xd01d,	// (0x00028e5a) popup_snote2_single_graphic_window_g1

0xd045,	// (0x00028e82) popup_snote2_single_graphic_window_g2_ParamLimits

0xd045,	// (0x00028e82) popup_snote2_single_graphic_window_g2

0x0001,

0xfc70,	// (0x0002baad) popup_snote2_single_graphic_window_g_ParamLimits

0xfc70,	// (0x0002baad) popup_snote2_single_graphic_window_g

0xd06d,	// (0x00028eaa) popup_snote2_single_graphic_window_t1_ParamLimits

0xd06d,	// (0x00028eaa) popup_snote2_single_graphic_window_t1

0xd0b9,	// (0x00028ef6) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0b9,	// (0x00028ef6) popup_snote2_single_graphic_window_t2

0xcf7b,	// (0x00028db8) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf7b,	// (0x00028db8) popup_snote2_single_graphic_window_t3

0xcfbc,	// (0x00028df9) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfbc,	// (0x00028df9) popup_snote2_single_graphic_window_t4

0xcff2,	// (0x00028e2f) popup_snote2_single_graphic_window_t5_ParamLimits

0xcff2,	// (0x00028e2f) popup_snote2_single_graphic_window_t5

0x0004,

0xfc75,	// (0x0002bab2) popup_snote2_single_graphic_window_t_ParamLimits

0xfc75,	// (0x0002bab2) popup_snote2_single_graphic_window_t

0xbad4,	// (0x00027911) clock_nsta_pane_cp2_t1

0xbad4,	// (0x00027911) clock_nsta_pane_cp2_t2

0x0001,

0xfa95,	// (0x0002b8d2) clock_nsta_pane_cp2_t

0x4a7d,	// (0x000208ba) form_field_data_wide_pane_g1_ParamLimits

0x84cd,	// (0x0002430a) form_field_data_wide_pane_g2_ParamLimits

0x84cd,	// (0x0002430a) form_field_data_wide_pane_g2

0x84d9,	// (0x00024316) form_field_data_wide_pane_g3_ParamLimits

0x84d9,	// (0x00024316) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x0002b493) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x0002b493) form_field_data_wide_pane_g

0xb9b0,	// (0x000277ed) grid_touch_3_pane_ParamLimits

0xb9b0,	// (0x000277ed) grid_touch_3_pane

0xd105,	// (0x00028f42) cell_touch_3_pane_ParamLimits

0xd105,	// (0x00028f42) cell_touch_3_pane

0xc022,	// (0x00027e5f) cell_touch_3_pane_g1

0xc022,	// (0x00027e5f) cell_touch_3_pane_g2

0x0001,

0xfb1a,	// (0x0002b957) cell_touch_3_pane_g

0x7f97,	// (0x00023dd4) cont_query_data_pane

0x7f9f,	// (0x00023ddc) cont_query_data_pane_cp1

0xd133,	// (0x00028f70) button_value_adjust_pane_cp7

0xd13b,	// (0x00028f78) query_popup_pane_cp3

0x8c5d,	// (0x00024a9a) bg_popup_sub_pane_cp22_ParamLimits

0x5d3b,	// (0x00021b78) navi_navi_volume_pane_cp2

0x5d56,	// (0x00021b93) popup_side_volume_key_window_g2

0x5d65,	// (0x00021ba2) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x0002b529) popup_side_volume_key_window_g

0x5d82,	// (0x00021bbf) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x0002b530) popup_side_volume_key_window_t

0x8f17,	// (0x00024d54) popup_side_volume_key_window_ParamLimits

0x46d2,	// (0x0002050f) list_double_graphic_pane_g4_ParamLimits

0x46d2,	// (0x0002050f) list_double_graphic_pane_g4

0x4f08,	// (0x00020d45) list_single_2heading_msg_pane_ParamLimits

0x4f08,	// (0x00020d45) list_single_2heading_msg_pane

0x552e,	// (0x0002136b) list_single_2heading_msg_pane_g1_ParamLimits

0x552e,	// (0x0002136b) list_single_2heading_msg_pane_g1

0x4501,	// (0x0002033e) list_single_2heading_msg_pane_g2_ParamLimits

0x4501,	// (0x0002033e) list_single_2heading_msg_pane_g2

0x553a,	// (0x00021377) list_single_2heading_msg_pane_g3_ParamLimits

0x553a,	// (0x00021377) list_single_2heading_msg_pane_g3

0x5546,	// (0x00021383) list_single_2heading_msg_pane_g4_ParamLimits

0x5546,	// (0x00021383) list_single_2heading_msg_pane_g4

0x0003,

0xfc80,	// (0x0002babd) list_single_2heading_msg_pane_g_ParamLimits

0xfc80,	// (0x0002babd) list_single_2heading_msg_pane_g

0x555e,	// (0x0002139b) list_single_2heading_msg_pane_t1_ParamLimits

0x555e,	// (0x0002139b) list_single_2heading_msg_pane_t1

0x5586,	// (0x000213c3) list_single_2heading_msg_pane_t2_ParamLimits

0x5586,	// (0x000213c3) list_single_2heading_msg_pane_t2

0x55ba,	// (0x000213f7) list_single_2heading_msg_pane_t3_ParamLimits

0x55ba,	// (0x000213f7) list_single_2heading_msg_pane_t3

0x55f3,	// (0x00021430) list_single_2heading_msg_pane_t4_ParamLimits

0x55f3,	// (0x00021430) list_single_2heading_msg_pane_t4

0x0003,

0xfc89,	// (0x0002bac6) list_single_2heading_msg_pane_t_ParamLimits

0xfc89,	// (0x0002bac6) list_single_2heading_msg_pane_t

0x7b86,	// (0x000239c3) title_pane_g4_ParamLimits

0x7b86,	// (0x000239c3) title_pane_g4

0x5b4a,	// (0x00021987) title_pane_stacon_g3_ParamLimits

0x5b4a,	// (0x00021987) title_pane_stacon_g3

0xcc61,	// (0x00028a9e) list_single_2graphic_im_pane_g4_ParamLimits

0xcc61,	// (0x00028a9e) list_single_2graphic_im_pane_g4

0xaac9,	// (0x00026906) popup_side_volume_key_window_cp

0xb2fb,	// (0x00027138) main_idle_act2_pane_t1

0x66cb,	// (0x00022508) toolbar_button_pane_g10

0x8428,	// (0x00024265) popup_toolbar_window_cp1

0xbac5,	// (0x00027902) clock_nsta_pane_cp_t1

0xbac5,	// (0x00027902) clock_nsta_pane_cp_t2

0x0001,

0xfa90,	// (0x0002b8cd) clock_nsta_pane_cp_t

0x5d3b,	// (0x00021b78) navi_navi_volume_pane_cp2_ParamLimits

0x5d4a,	// (0x00021b87) popup_side_volume_key_window_g1_ParamLimits

0x5d56,	// (0x00021b93) popup_side_volume_key_window_g2_ParamLimits

0x5d65,	// (0x00021ba2) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x0002b529) popup_side_volume_key_window_g_ParamLimits

0x6b27,	// (0x00022964) fep_hwr_aid_pane

0x208f,	// (0x0001decc) bg_fep_hwr_top_pane_g4_ParamLimits

0xc07e,	// (0x00027ebb) fep_hwr_top_pane_g1_ParamLimits

0xc090,	// (0x00027ecd) fep_hwr_top_pane_g2_ParamLimits

0x6be0,	// (0x00022a1d) fep_hwr_top_pane_g3_ParamLimits

0xfae5,	// (0x0002b922) fep_hwr_top_pane_g_ParamLimits

0x6bf5,	// (0x00022a32) fep_hwr_top_text_pane_ParamLimits

0xa88c,	// (0x000266c9) aid_touch_tab_arrow_arrow_2

0xa895,	// (0x000266d2) aid_touch_tab_arrow_left_2

0x6b3b,	// (0x00022978) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6b72,	// (0x000229af) fep_hwr_prediction_pane

0xc1f0,	// (0x0002802d) fep_vkb_prediction_pane

0xc2f4,	// (0x00028131) fep_vkb_side_pane_g3_ParamLimits

0xc2f4,	// (0x00028131) fep_vkb_side_pane_g3

0xc2a0,	// (0x000280dd) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc720,	// (0x0002855d) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc72d,	// (0x0002856a) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8f,	// (0x0002b9cc) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd160,	// (0x00028f9d) fep_hwr_prediction_pane_g1

0x6e82,	// (0x00022cbf) fep_hwr_prediction_pane_g2

0x6e8a,	// (0x00022cc7) fep_hwr_prediction_pane_g3

0x6e92,	// (0x00022ccf) fep_hwr_prediction_pane_g4

0x0003,

0xfc92,	// (0x0002bacf) fep_hwr_prediction_pane_g

0xd160,	// (0x00028f9d) fep_vkb_prediction_pane_g1

0xd16a,	// (0x00028fa7) fep_vkb_prediction_pane_g2

0xd172,	// (0x00028faf) fep_vkb_prediction_pane_g3

0xd17a,	// (0x00028fb7) fep_vkb_prediction_pane_g4

0x0003,

0xfc9b,	// (0x0002bad8) fep_vkb_prediction_pane_g

0x69a7,	// (0x000227e4) slider_set_pane_g3

0x69bb,	// (0x000227f8) slider_set_pane_g4

0x69d3,	// (0x00022810) slider_set_pane_g5

0x69a7,	// (0x000227e4) slider_set_pane_g6

0x69e9,	// (0x00022826) slider_set_pane_g7

0xaf29,	// (0x00026d66) slider_form_pane_g3

0xaf32,	// (0x00026d6f) slider_form_pane_g4

0xaf3a,	// (0x00026d77) slider_form_pane_g5

0xaf29,	// (0x00026d66) slider_form_pane_g6

0xaf42,	// (0x00026d7f) slider_form_pane_g7

0xb5a6,	// (0x000273e3) slider_set_pane_vc_g3

0xb5af,	// (0x000273ec) slider_set_pane_vc_g4

0xb5b8,	// (0x000273f5) slider_set_pane_vc_g5

0xb5a6,	// (0x000273e3) slider_set_pane_vc_g6

0xb5c1,	// (0x000273fe) slider_set_pane_vc_g7

0xb783,	// (0x000275c0) slider_form_pane_vc_g1

0xb78c,	// (0x000275c9) slider_form_pane_vc_g2

0xb795,	// (0x000275d2) slider_form_pane_vc_g3

0xb783,	// (0x000275c0) slider_form_pane_vc_g4

0xb79e,	// (0x000275db) slider_form_pane_vc_g5

0x0004,

0xfa62,	// (0x0002b89f) slider_form_pane_vc_g

0x316f,	// (0x0001efac) main_idle_act3_pane

0xd182,	// (0x00028fbf) ai3_links_pane

0xd18b,	// (0x00028fc8) popup_ai3_data_window_ParamLimits

0xd18b,	// (0x00028fc8) popup_ai3_data_window

0x316f,	// (0x0001efac) grid_ai3_links_pane

0xd1a5,	// (0x00028fe2) cell_ai3_links_pane_ParamLimits

0xd1a5,	// (0x00028fe2) cell_ai3_links_pane

0xd1bd,	// (0x00028ffa) bg_popup_sub_pane_cp11

0xd1ca,	// (0x00029007) cell_ai3_links_pane_g1

0x316f,	// (0x0001efac) bg_popup_sub_pane_cp12

0xd1ef,	// (0x0002902c) heading_ai3_data_pane

0xd1f7,	// (0x00029034) list_ai3_gene_pane

0xd203,	// (0x00029040) popup_ai3_data_window_g1

0xd20b,	// (0x00029048) heading_ai3_data_pane_g1

0xd213,	// (0x00029050) heading_ai3_data_pane_t1

0xd221,	// (0x0002905e) list_double_ai3_gene_pane_ParamLimits

0xd221,	// (0x0002905e) list_double_ai3_gene_pane

0xd22e,	// (0x0002906b) list_single_ai3_gene_pane_ParamLimits

0xd22e,	// (0x0002906b) list_single_ai3_gene_pane

0xbfe7,	// (0x00027e24) list_highlight_pane_cp7_ParamLimits

0xbfe7,	// (0x00027e24) list_highlight_pane_cp7

0xd23b,	// (0x00029078) list_single_a13_gene_pane_t1_ParamLimits

0xd23b,	// (0x00029078) list_single_a13_gene_pane_t1

0xd252,	// (0x0002908f) list_single_ai3_gene_pane_g1

0xd25b,	// (0x00029098) list_single_ai3_gene_pane_g2

0x0001,

0xfca4,	// (0x0002bae1) list_single_ai3_gene_pane_g

0xd263,	// (0x000290a0) list_double_ai3_gene_pane_g1_ParamLimits

0xd263,	// (0x000290a0) list_double_ai3_gene_pane_g1

0xd26f,	// (0x000290ac) list_double_ai3_gene_pane_t1_ParamLimits

0xd26f,	// (0x000290ac) list_double_ai3_gene_pane_t1

0xd28b,	// (0x000290c8) list_double_ai3_gene_pane_t2_ParamLimits

0xd28b,	// (0x000290c8) list_double_ai3_gene_pane_t2

0xd2a1,	// (0x000290de) list_double_ai3_gene_pane_t3_ParamLimits

0xd2a1,	// (0x000290de) list_double_ai3_gene_pane_t3

0x0002,

0xfca9,	// (0x0002bae6) list_double_ai3_gene_pane_t_ParamLimits

0xfca9,	// (0x0002bae6) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5524,	// (0x00021361) aid_size_min_col_2

0xd14c,	// (0x00028f89) aid_size_min_msg_ParamLimits

0xd14c,	// (0x00028f89) aid_size_min_msg

0xc3f4,	// (0x00028231) fep_vkb_top_text_pane_g2_ParamLimits

0xc3f4,	// (0x00028231) fep_vkb_top_text_pane_g2

0x0001,

0xfb15,	// (0x0002b952) fep_vkb_top_text_pane_g_ParamLimits

0xfb15,	// (0x0002b952) fep_vkb_top_text_pane_g

0x316f,	// (0x0001efac) main_hc_apps_shell_pane

0xd2be,	// (0x000290fb) grid_hc_apps_pane_ParamLimits

0xd2be,	// (0x000290fb) grid_hc_apps_pane

0xd2d0,	// (0x0002910d) list_hc_apps_pane

0xd2d8,	// (0x00029115) scroll_pane_cp37_ParamLimits

0xd2d8,	// (0x00029115) scroll_pane_cp37

0xd2e4,	// (0x00029121) cell_hc_apps_pane_ParamLimits

0xd2e4,	// (0x00029121) cell_hc_apps_pane

0xd392,	// (0x000291cf) cell_hc_apps_pane_g1_ParamLimits

0xd392,	// (0x000291cf) cell_hc_apps_pane_g1

0xd3c2,	// (0x000291ff) cell_hc_apps_pane_g2_ParamLimits

0xd3c2,	// (0x000291ff) cell_hc_apps_pane_g2

0xd3de,	// (0x0002921b) cell_hc_apps_pane_g3_ParamLimits

0xd3de,	// (0x0002921b) cell_hc_apps_pane_g3

0x0002,

0xfcb0,	// (0x0002baed) cell_hc_apps_pane_g_ParamLimits

0xfcb0,	// (0x0002baed) cell_hc_apps_pane_g

0xd400,	// (0x0002923d) cell_hc_apps_pane_t1_ParamLimits

0xd400,	// (0x0002923d) cell_hc_apps_pane_t1

0x7ebb,	// (0x00023cf8) grid_highlight_pane_cp10_ParamLimits

0x7ebb,	// (0x00023cf8) grid_highlight_pane_cp10

0xd440,	// (0x0002927d) list_single_hc_apps_pane_ParamLimits

0xd440,	// (0x0002927d) list_single_hc_apps_pane

0xd49c,	// (0x000292d9) list_single_hc_apps_pane_g1

0x5618,	// (0x00021455) list_single_hc_apps_pane_g2

0x0001,

0xfcb7,	// (0x0002baf4) list_single_hc_apps_pane_g

0x5631,	// (0x0002146e) list_single_hc_apps_pane_g2_copy1

0x564d,	// (0x0002148a) list_single_hc_apps_pane_t1

0x7c32,	// (0x00023a6f) bg_set_opt_pane_cp_ParamLimits

0x5a72,	// (0x000218af) setting_slider_pane_t1_ParamLimits

0x5a8b,	// (0x000218c8) setting_slider_pane_t2_ParamLimits

0x5aa5,	// (0x000218e2) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0002b376) setting_slider_pane_t_ParamLimits

0x5abd,	// (0x000218fa) slider_set_pane_ParamLimits

0x5fe4,	// (0x00021e21) control_pane_g5_ParamLimits

0x5fe4,	// (0x00021e21) control_pane_g5

0xad78,	// (0x00026bb5) slider_set_pane_g1_ParamLimits

0x699b,	// (0x000227d8) slider_set_pane_g2_ParamLimits

0x69a7,	// (0x000227e4) slider_set_pane_g3_ParamLimits

0x69bb,	// (0x000227f8) slider_set_pane_g4_ParamLimits

0x69d3,	// (0x00022810) slider_set_pane_g5_ParamLimits

0x69a7,	// (0x000227e4) slider_set_pane_g6_ParamLimits

0x69e9,	// (0x00022826) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x0002b77c) slider_set_pane_g_ParamLimits

0x8ff8,	// (0x00024e35) navi_icon_text_pane_ParamLimits

0x94f7,	// (0x00025334) aid_fill_nsta_2_ParamLimits

0x9536,	// (0x00025373) aid_touch_tab_arrow_left_ParamLimits

0x9545,	// (0x00025382) aid_touch_tab_arrow_right_ParamLimits

0x95b2,	// (0x000253ef) clock_nsta_pane_ParamLimits

0xa86e,	// (0x000266ab) navi_icon_pane_g1_ParamLimits

0xa87a,	// (0x000266b7) navi_text_pane_t1_ParamLimits

0xbbd1,	// (0x00027a0e) navi_icon_text_pane_g1_ParamLimits

0xbbdd,	// (0x00027a1a) navi_icon_text_pane_t1_ParamLimits

0xd49c,	// (0x000292d9) list_single_hc_apps_pane_g1_ParamLimits

0x5618,	// (0x00021455) list_single_hc_apps_pane_g2_ParamLimits

0xfcb7,	// (0x0002baf4) list_single_hc_apps_pane_g_ParamLimits

0x5631,	// (0x0002146e) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x564d,	// (0x0002148a) list_single_hc_apps_pane_t1_ParamLimits

0x597c,	// (0x000217b9) popup_toolbar2_fixed_window_ParamLimits

0x597c,	// (0x000217b9) popup_toolbar2_fixed_window

0x65cf,	// (0x0002240c) popup_toolbar2_float_window

0x316f,	// (0x0001efac) bg_popup_sub_pane_cp27

0xd4b5,	// (0x000292f2) grid_toolbar2_float_pane

0x316f,	// (0x0001efac) bg_popup_sub_pane_cp26

0xd4b5,	// (0x000292f2) grid_toolbar2_fixed_pane

0xd4bd,	// (0x000292fa) cell_toolbar2_fixed_pane_ParamLimits

0xd4bd,	// (0x000292fa) cell_toolbar2_fixed_pane

0xd4cd,	// (0x0002930a) cell_toolbar2_fixed_pane_g1

0xd4d6,	// (0x00029313) toolbar2_fixed_button_pane

0x99cf,	// (0x0002580c) toolbar2_fixed_button_pane_g1

0x99d7,	// (0x00025814) toolbar2_fixed_button_pane_g2

0x99df,	// (0x0002581c) toolbar2_fixed_button_pane_g3

0x99e7,	// (0x00025824) toolbar2_fixed_button_pane_g4

0x99ef,	// (0x0002582c) toolbar2_fixed_button_pane_g5

0x99f7,	// (0x00025834) toolbar2_fixed_button_pane_g6

0x99ff,	// (0x0002583c) toolbar2_fixed_button_pane_g7

0x9a07,	// (0x00025844) toolbar2_fixed_button_pane_g8

0x9a0f,	// (0x0002584c) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x0002b67e) toolbar2_fixed_button_pane_g

0xd4de,	// (0x0002931b) cell_toolbar2_float_pane_ParamLimits

0xd4de,	// (0x0002931b) cell_toolbar2_float_pane

0xd4ef,	// (0x0002932c) cell_toolbar2_float_pane_g1

0xd4d6,	// (0x00029313) toolbar2_fixed_button_pane_cp

0xc150,	// (0x00027f8d) fep_vkb_accented_list_pane_ParamLimits

0xc150,	// (0x00027f8d) fep_vkb_accented_list_pane

0x6d43,	// (0x00022b80) bg_popup_fep_shadow_pane_g9

0x9181,	// (0x00024fbe) bg_popup_fep_shadow_pane_cp3

0x8626,	// (0x00024463) list_accented_list_pane

0xd4f8,	// (0x00029335) list_single_accented_list_pane_ParamLimits

0xd4f8,	// (0x00029335) list_single_accented_list_pane

0x9181,	// (0x00024fbe) list_highlight_pane_cp10

0xd509,	// (0x00029346) list_single_accented_list_pane_t1

0x651f,	// (0x0002235c) popup_slider_window_ParamLimits

0x651f,	// (0x0002235c) popup_slider_window

0xd143,	// (0x00028f80) aid_indentation_list_msg

0xd5cd,	// (0x0002940a) bg_popup_window_pane_cp19

0xd635,	// (0x00029472) popup_slider_window_g1

0xd651,	// (0x0002948e) popup_slider_window_g2

0xd66d,	// (0x000294aa) popup_slider_window_g3

0x0005,

0xfcbc,	// (0x0002baf9) popup_slider_window_g

0xd6d3,	// (0x00029510) popup_slider_window_t1

0xd747,	// (0x00029584) small_volume_slider_vertical_pane

0xc022,	// (0x00027e5f) small_volume_slider_vertical_pane_g1

0xc022,	// (0x00027e5f) small_volume_slider_vertical_pane_g2

0xd763,	// (0x000295a0) small_volume_slider_vertical_pane_g3

0x0002,

0xfcce,	// (0x0002bb0b) small_volume_slider_vertical_pane_g

0x573e,	// (0x0002157b) area_side_right_pane_ParamLimits

0x573e,	// (0x0002157b) area_side_right_pane

0x6e9a,	// (0x00022cd7) aid_size_side_button_ParamLimits

0x6e9a,	// (0x00022cd7) aid_size_side_button

0x6eae,	// (0x00022ceb) grid_sctrl_middle_pane_ParamLimits

0x6eae,	// (0x00022ceb) grid_sctrl_middle_pane

0x6ecd,	// (0x00022d0a) sctrl_sk_bottom_pane

0x6ede,	// (0x00022d1b) sctrl_sk_top_pane

0x6ef0,	// (0x00022d2d) aid_touch_sctrl_top

0x7ebb,	// (0x00023cf8) bg_sctrl_sk_pane_ParamLimits

0x7ebb,	// (0x00023cf8) bg_sctrl_sk_pane

0x6efd,	// (0x00022d3a) sctrl_sk_top_pane_g1

0x6f0a,	// (0x00022d47) sctrl_sk_top_pane_t1

0x6ef0,	// (0x00022d2d) aid_touch_sctrl_bottom

0x7ebb,	// (0x00023cf8) bg_sctrl_sk_pane_cp_ParamLimits

0x7ebb,	// (0x00023cf8) bg_sctrl_sk_pane_cp

0x6f25,	// (0x00022d62) sctrl_sk_bottom_pane_g1

0x6f0a,	// (0x00022d47) sctrl_sk_bottom_pane_t1

0x6f2e,	// (0x00022d6b) cell_sctrl_middle_pane_ParamLimits

0x6f2e,	// (0x00022d6b) cell_sctrl_middle_pane

0x6f49,	// (0x00022d86) aid_touch_sctrl_middle_ParamLimits

0x6f49,	// (0x00022d86) aid_touch_sctrl_middle

0x84bf,	// (0x000242fc) bg_sctrl_middle_pane_ParamLimits

0x84bf,	// (0x000242fc) bg_sctrl_middle_pane

0xc2a0,	// (0x000280dd) cell_sctrl_middle_pane_g1_ParamLimits

0xc2a0,	// (0x000280dd) cell_sctrl_middle_pane_g1

0x6f5b,	// (0x00022d98) cell_sctrl_middle_pane_g2_ParamLimits

0x6f5b,	// (0x00022d98) cell_sctrl_middle_pane_g2

0x0001,

0xfcda,	// (0x0002bb17) cell_sctrl_middle_pane_g_ParamLimits

0xfcda,	// (0x0002bb17) cell_sctrl_middle_pane_g

0x99cf,	// (0x0002580c) bg_sctrl_middle_pane_g1

0x99d7,	// (0x00025814) bg_sctrl_middle_pane_g2

0x99df,	// (0x0002581c) bg_sctrl_middle_pane_g3

0x99e7,	// (0x00025824) bg_sctrl_middle_pane_g4

0x99ef,	// (0x0002582c) bg_sctrl_middle_pane_g5

0x99f7,	// (0x00025834) bg_sctrl_middle_pane_g6

0x99ff,	// (0x0002583c) bg_sctrl_middle_pane_g7

0x9a07,	// (0x00025844) bg_sctrl_middle_pane_g8

0x0007,

0xfcdf,	// (0x0002bb1c) bg_sctrl_middle_pane_g

0x9a0f,	// (0x0002584c) bg_sctrl_middle_pane_g8_copy1

0x99cf,	// (0x0002580c) bg_sctrl_sk_pane_g1

0x99d7,	// (0x00025814) bg_sctrl_sk_pane_g2

0x99df,	// (0x0002581c) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x0002b67e) bg_sctrl_sk_pane_g

0x83ee,	// (0x0002422b) aid_size_touch_scroll_bar

0x99e7,	// (0x00025824) bg_sctrl_sk_pane_g4

0x99ef,	// (0x0002582c) bg_sctrl_sk_pane_g5

0x99f7,	// (0x00025834) bg_sctrl_sk_pane_g6

0x99ff,	// (0x0002583c) bg_sctrl_sk_pane_g7

0x9a07,	// (0x00025844) bg_sctrl_sk_pane_g8

0x9a0f,	// (0x0002584c) bg_sctrl_sk_pane_g9

0x6186,	// (0x00021fc3) popup_fep_china_hwr2_fs_candidate_window

0x6190,	// (0x00021fcd) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6190,	// (0x00021fcd) popup_fep_china_hwr2_fs_control_window

0xc2a0,	// (0x000280dd) sctrl_sk_top_pane_g2

0x0001,

0xfcd5,	// (0x0002bb12) sctrl_sk_top_pane_g

0xd76c,	// (0x000295a9) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd76c,	// (0x000295a9) aid_fep_china_hwr2_fs_cell

0xd77e,	// (0x000295bb) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd77e,	// (0x000295bb) bg_popup_fep_shadow_pane_cp4

0xd795,	// (0x000295d2) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd795,	// (0x000295d2) bg_popup_fep_shadow_pane_cp5

0xd7a7,	// (0x000295e4) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd7a7,	// (0x000295e4) popup_fep_china_hwr2_fs_control_bar_grid

0xd7b7,	// (0x000295f4) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7bf,	// (0x000295fc) aid_fep_china_hwr2_fs_candi_cell

0x316f,	// (0x0001efac) bg_popup_fep_shadow_pane_cp6

0xd7c9,	// (0x00029606) popup_fep_china_hwr2_fs_candidate_grid

0xd7d3,	// (0x00029610) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7d3,	// (0x00029610) cell_fep_china_hwr2_fs_funtion_grid

0xc022,	// (0x00027e5f) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7eb,	// (0x00029628) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7eb,	// (0x00029628) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7f9,	// (0x00029636) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7f9,	// (0x00029636) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf0,	// (0x0002bb2d) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf0,	// (0x0002bb2d) cell_fep_china_hwr2_fs_funtion_grid_g

0xd80f,	// (0x0002964c) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd80f,	// (0x0002964c) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd824,	// (0x00029661) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd824,	// (0x00029661) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf5,	// (0x0002bb32) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf5,	// (0x0002bb32) cell_fep_china_hwr2_fs_funtion_grid_t

0xd840,	// (0x0002967d) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd848,	// (0x00029685) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd850,	// (0x0002968d) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcfa,	// (0x0002bb37) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd858,	// (0x00029695) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd858,	// (0x00029695) cell_fep_china_hwr2_fs_candidate_grid

0xd871,	// (0x000296ae) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd879,	// (0x000296b6) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc022,	// (0x00027e5f) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc022,	// (0x00027e5f) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1a,	// (0x0002b957) cell_fep_china_hwr2_fs_candidate_grid_g

0xd881,	// (0x000296be) cell_fep_china_hwr2_fs_candidate_grid_t1

0x95c5,	// (0x00025402) clock_nsta_pane_cp_24_ParamLimits

0x95c5,	// (0x00025402) clock_nsta_pane_cp_24

0x9643,	// (0x00025480) indicator_nsta_pane_cp_24_ParamLimits

0x9643,	// (0x00025480) indicator_nsta_pane_cp_24

0xa6de,	// (0x0002651b) heading_pane_g1

0x0001,

0xf8a6,	// (0x0002b6e3) heading_pane_g

0xb144,	// (0x00026f81) grid_sct_catagory_button_pane

0xb174,	// (0x00026fb1) scroll_pane_cp5_ParamLimits

0xbc1f,	// (0x00027a5c) button_value_adjust_pane_cp5_ParamLimits

0xbc1f,	// (0x00027a5c) button_value_adjust_pane_cp5

0xbcfe,	// (0x00027b3b) form2_midp_time_pane_ParamLimits

0xd88f,	// (0x000296cc) cell_sct_catagory_button_pane_ParamLimits

0xd88f,	// (0x000296cc) cell_sct_catagory_button_pane

0xbfe7,	// (0x00027e24) bg_button_pane_cp01_ParamLimits

0xbfe7,	// (0x00027e24) bg_button_pane_cp01

0xc022,	// (0x00027e5f) cell_sct_catagory_button_pane_g1

0x655e,	// (0x0002239b) popup_tb_extension_window

0xd8a1,	// (0x000296de) aid_size_cell_ext_ParamLimits

0xd8a1,	// (0x000296de) aid_size_cell_ext

0x7ebb,	// (0x00023cf8) bg_tb_trans_pane_cp1_ParamLimits

0x7ebb,	// (0x00023cf8) bg_tb_trans_pane_cp1

0xd8c1,	// (0x000296fe) grid_tb_ext_pane_ParamLimits

0xd8c1,	// (0x000296fe) grid_tb_ext_pane

0xd8ef,	// (0x0002972c) cell_tb_ext_pane_ParamLimits

0xd8ef,	// (0x0002972c) cell_tb_ext_pane

0xd906,	// (0x00029743) cell_tb_ext_pane_g1_ParamLimits

0xd906,	// (0x00029743) cell_tb_ext_pane_g1

0xd923,	// (0x00029760) cell_tb_ext_pane_t1

0x7ebb,	// (0x00023cf8) list_highlight_pane_cp11_ParamLimits

0x7ebb,	// (0x00023cf8) list_highlight_pane_cp11

0x599b,	// (0x000217d8) popup_uni_indicator_window_ParamLimits

0x599b,	// (0x000217d8) popup_uni_indicator_window

0x84bf,	// (0x000242fc) bg_popup_sub_pane_cp14

0xd93e,	// (0x0002977b) list_uniindi_pane

0xd94a,	// (0x00029787) uniindi_top_pane

0x7ebb,	// (0x00023cf8) bg_uniindi_top_pane

0xd969,	// (0x000297a6) uniindi_top_pane_g1

0xd97f,	// (0x000297bc) uniindi_top_pane_g2

0x0003,

0xfd01,	// (0x0002bb3e) uniindi_top_pane_g

0xd9a9,	// (0x000297e6) uniindi_top_pane_t1

0xd9d3,	// (0x00029810) list_single_uniindi_pane_ParamLimits

0xd9d3,	// (0x00029810) list_single_uniindi_pane

0xc022,	// (0x00027e5f) bg_uniindi_top_pane_g1

0xd9e6,	// (0x00029823) list_single_uniindi_pane_g1

0xd9f9,	// (0x00029836) list_single_uniindi_pane_t1

0x316f,	// (0x0001efac) control_bg_pane

0xda1e,	// (0x0002985b) bg_sctrl_sk_pane_cp1

0xda27,	// (0x00029864) bg_sctrl_sk_pane_cp2

0xda30,	// (0x0002986d) control_bg_pane_g1

0xda39,	// (0x00029876) control_bg_pane_g2

0x0001,

0xfd0a,	// (0x0002bb47) control_bg_pane_g

0xba69,	// (0x000278a6) cell_indicator_nsta_pane_g1_ParamLimits

0xba77,	// (0x000278b4) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7e,	// (0x0002b8bb) cell_indicator_nsta_pane_g_ParamLimits

0x52d5,	// (0x00021112) form2_midp_time_pane_t1_ParamLimits

0x8230,	// (0x0002406d) main_idle_act4_pane_ParamLimits

0x8230,	// (0x0002406d) main_idle_act4_pane

0x655e,	// (0x0002239b) popup_tb_extension_window_ParamLimits

0xd8df,	// (0x0002971c) tb_ext_find_pane_ParamLimits

0xd8df,	// (0x0002971c) tb_ext_find_pane

0xda42,	// (0x0002987f) ai_gene_pane_1_cp1

0x92c8,	// (0x00025105) ai_gene_pane_2_cp1

0xda4a,	// (0x00029887) list_single_idle_plugin_calendar_pane

0xda53,	// (0x00029890) list_single_idle_plugin_notification_pane

0xda5c,	// (0x00029899) list_single_idle_plugin_player_pane

0xda65,	// (0x000298a2) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda65,	// (0x000298a2) list_single_idle_plugin_shortcut_pane

0xda87,	// (0x000298c4) main_idle_act4_pane_t1

0xda99,	// (0x000298d6) main_idle_act4_pane_t2

0x0001,

0xfd0f,	// (0x0002bb4c) main_idle_act4_pane_t

0xdaab,	// (0x000298e8) middle_sk_idle_act4_pane_ParamLimits

0xdaab,	// (0x000298e8) middle_sk_idle_act4_pane

0xdac1,	// (0x000298fe) popup_clock_digital_analogue_window_cp2

0xdadb,	// (0x00029918) shortcut_wheel_idle_act4_pane_ParamLimits

0xdadb,	// (0x00029918) shortcut_wheel_idle_act4_pane

0xc022,	// (0x00027e5f) shortcut_wheel_idle_act4_pane_g1

0xc022,	// (0x00027e5f) shortcut_wheel_idle_act4_pane_g2

0xc022,	// (0x00027e5f) shortcut_wheel_idle_act4_pane_g3

0xc022,	// (0x00027e5f) shortcut_wheel_idle_act4_pane_g4

0xc022,	// (0x00027e5f) shortcut_wheel_idle_act4_pane_g5

0xdaef,	// (0x0002992c) shortcut_wheel_idle_act4_pane_g6

0xdaf7,	// (0x00029934) shortcut_wheel_idle_act4_pane_g7

0xdaff,	// (0x0002993c) shortcut_wheel_idle_act4_pane_g8

0xdb07,	// (0x00029944) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd14,	// (0x0002bb51) shortcut_wheel_idle_act4_pane_g

0xc2a0,	// (0x000280dd) middle_sk_idle_act4_pane_g1_ParamLimits

0xc2a0,	// (0x000280dd) middle_sk_idle_act4_pane_g1

0xdb6b,	// (0x000299a8) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb6b,	// (0x000299a8) middle_sk_idle_act4_pane_g2

0x0001,

0xfd37,	// (0x0002bb74) middle_sk_idle_act4_pane_g_ParamLimits

0xfd37,	// (0x0002bb74) middle_sk_idle_act4_pane_g

0xdb77,	// (0x000299b4) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb77,	// (0x000299b4) middle_sk_idle_act4_pane_t1

0xdb94,	// (0x000299d1) grid_ai_shortcut_pane_ParamLimits

0xdb94,	// (0x000299d1) grid_ai_shortcut_pane

0xdbad,	// (0x000299ea) list_highlight_pane_cp16_ParamLimits

0xdbad,	// (0x000299ea) list_highlight_pane_cp16

0xdbba,	// (0x000299f7) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbba,	// (0x000299f7) list_single_idle_plugin_shortcut_pane_g1

0xdbc6,	// (0x00029a03) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbc6,	// (0x00029a03) list_single_idle_plugin_shortcut_pane_g2

0xdbde,	// (0x00029a1b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbde,	// (0x00029a1b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd3c,	// (0x0002bb79) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd3c,	// (0x0002bb79) list_single_idle_plugin_shortcut_pane_g

0xdbf1,	// (0x00029a2e) cell_ai_shortcut_pane_ParamLimits

0xdbf1,	// (0x00029a2e) cell_ai_shortcut_pane

0xdc15,	// (0x00029a52) cell_ai_shortcut_pane_g1_ParamLimits

0xdc15,	// (0x00029a52) cell_ai_shortcut_pane_g1

0xda42,	// (0x0002987f) ai_gene_pane_1_cp2

0xdc37,	// (0x00029a74) ai_gene_pane_2_cp2

0xdc3f,	// (0x00029a7c) list_highlight_pane_cp15

0xdc48,	// (0x00029a85) list_single_idle_plugin_calendar_pane_g1

0xdc3f,	// (0x00029a7c) list_highlight_pane_cp17

0xdc50,	// (0x00029a8d) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc58,	// (0x00029a95) list_single_idle_plugin_player_pane_g1

0xb39d,	// (0x000271da) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd43,	// (0x0002bb80) list_single_idle_plugin_player_pane_g

0xdc60,	// (0x00029a9d) list_single_idle_plugin_player_pane_t1

0xdc6e,	// (0x00029aab) list_single_idle_plugin_player_pane_t2

0xdc7c,	// (0x00029ab9) list_single_idle_plugin_player_pane_t3

0xdc8a,	// (0x00029ac7) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd48,	// (0x0002bb85) list_single_idle_plugin_player_pane_t

0xdc98,	// (0x00029ad5) wait_bar_pane_cp15

0xdca0,	// (0x00029add) grid_ai_notification_pane

0xb39d,	// (0x000271da) list_single_idle_plugin_notification_pane_g1

0xdca9,	// (0x00029ae6) cell_ai_notification_pane_ParamLimits

0xdca9,	// (0x00029ae6) cell_ai_notification_pane

0xdcb6,	// (0x00029af3) cell_ai_notification_pane_g1

0xdcbe,	// (0x00029afb) cell_ai_notification_pane_t1

0xdccc,	// (0x00029b09) tb_ext_find_button_pane

0xdcd4,	// (0x00029b11) tb_ext_find_pane_g1

0xdcdc,	// (0x00029b19) tb_ext_find_pane_t1

0x8b54,	// (0x00024991) tb_ext_find_button_pane_g1

0xdcea,	// (0x00029b27) tb_ext_find_button_pane_g2

0x0001,

0xfd51,	// (0x0002bb8e) tb_ext_find_button_pane_g

0xda87,	// (0x000298c4) main_idle_act4_pane_t1_ParamLimits

0xda99,	// (0x000298d6) main_idle_act4_pane_t2_ParamLimits

0xfd0f,	// (0x0002bb4c) main_idle_act4_pane_t_ParamLimits

0xdac1,	// (0x000298fe) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdacf,	// (0x0002990c) sat_plugin_idle_act4_pane_ParamLimits

0xdacf,	// (0x0002990c) sat_plugin_idle_act4_pane

0xdcf3,	// (0x00029b30) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcf3,	// (0x00029b30) sat_plugin_idle_act4_pane_t1

0xdd06,	// (0x00029b43) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd06,	// (0x00029b43) sat_plugin_idle_act4_pane_t2

0xdd19,	// (0x00029b56) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd19,	// (0x00029b56) sat_plugin_idle_act4_pane_t3

0xdd2c,	// (0x00029b69) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd2c,	// (0x00029b69) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd56,	// (0x0002bb93) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd56,	// (0x0002bb93) sat_plugin_idle_act4_pane_t

0x58d6,	// (0x00021713) popup_battery_window_ParamLimits

0x58d6,	// (0x00021713) popup_battery_window

0x7ebb,	// (0x00023cf8) bg_popup_sub_pane_cp25_ParamLimits

0x7ebb,	// (0x00023cf8) bg_popup_sub_pane_cp25

0xdd3f,	// (0x00029b7c) popup_battery_window_g1_ParamLimits

0xdd3f,	// (0x00029b7c) popup_battery_window_g1

0xdd4b,	// (0x00029b88) popup_battery_window_t1_ParamLimits

0xdd4b,	// (0x00029b88) popup_battery_window_t1

0xdd5d,	// (0x00029b9a) popup_battery_window_t2_ParamLimits

0xdd5d,	// (0x00029b9a) popup_battery_window_t2

0x0001,

0xfd5f,	// (0x0002bb9c) popup_battery_window_t_ParamLimits

0xfd5f,	// (0x0002bb9c) popup_battery_window_t

0x9195,	// (0x00024fd2) midp_canvas_pane_ParamLimits

0x920c,	// (0x00025049) midp_keypad_pane_ParamLimits

0x920c,	// (0x00025049) midp_keypad_pane

0x94a5,	// (0x000252e2) main_midp_pane_ParamLimits

0xbae3,	// (0x00027920) signal_pane_g2_cp_ParamLimits

0xdd7a,	// (0x00029bb7) aid_size_cell_midp_keypad_ParamLimits

0xdd7a,	// (0x00029bb7) aid_size_cell_midp_keypad

0xdd94,	// (0x00029bd1) midp_keyp_game_grid_pane_ParamLimits

0xdd94,	// (0x00029bd1) midp_keyp_game_grid_pane

0xddb4,	// (0x00029bf1) midp_keyp_rocker_pane_ParamLimits

0xddb4,	// (0x00029bf1) midp_keyp_rocker_pane

0xdded,	// (0x00029c2a) midp_keyp_sk_left_pane_ParamLimits

0xdded,	// (0x00029c2a) midp_keyp_sk_left_pane

0xde47,	// (0x00029c84) midp_keyp_sk_right_pane_ParamLimits

0xde47,	// (0x00029c84) midp_keyp_sk_right_pane

0x316f,	// (0x0001efac) bg_button_pane_cp03

0xdea1,	// (0x00029cde) midp_keyp_sk_left_pane_g1

0x316f,	// (0x0001efac) bg_button_pane_cp04

0xdea1,	// (0x00029cde) midp_keyp_sk_right_pane_g1

0xc022,	// (0x00027e5f) midp_keyp_rocker_pane_g1

0xdeaa,	// (0x00029ce7) keyp_game_cell_pane_ParamLimits

0xdeaa,	// (0x00029ce7) keyp_game_cell_pane

0x316f,	// (0x0001efac) bg_button_pane_cp02

0xdebd,	// (0x00029cfa) keyp_game_cell_pane_g1

0x591a,	// (0x00021757) popup_fep_vkb2_window_ParamLimits

0x591a,	// (0x00021757) popup_fep_vkb2_window

0x6f79,	// (0x00022db6) aid_size_cell_vkb2_ParamLimits

0x6f79,	// (0x00022db6) aid_size_cell_vkb2

0x6fc5,	// (0x00022e02) popup_fep_vkb2_window_g1_ParamLimits

0x6fc5,	// (0x00022e02) popup_fep_vkb2_window_g1

0x700d,	// (0x00022e4a) vkb2_area_bottom_pane_ParamLimits

0x700d,	// (0x00022e4a) vkb2_area_bottom_pane

0x7059,	// (0x00022e96) vkb2_area_keypad_pane_ParamLimits

0x7059,	// (0x00022e96) vkb2_area_keypad_pane

0x709b,	// (0x00022ed8) vkb2_area_top_pane_ParamLimits

0x709b,	// (0x00022ed8) vkb2_area_top_pane

0x711a,	// (0x00022f57) vkb2_top_entry_pane_ParamLimits

0x711a,	// (0x00022f57) vkb2_top_entry_pane

0x7144,	// (0x00022f81) vkb2_top_grid_left_pane_ParamLimits

0x7144,	// (0x00022f81) vkb2_top_grid_left_pane

0x7163,	// (0x00022fa0) vkb2_top_grid_right_pane_ParamLimits

0x7163,	// (0x00022fa0) vkb2_top_grid_right_pane

0x7182,	// (0x00022fbf) vkb2_cell_keypad_pane_ParamLimits

0x7182,	// (0x00022fbf) vkb2_cell_keypad_pane

0x7253,	// (0x00023090) vkb2_area_bottom_grid_pane_ParamLimits

0x7253,	// (0x00023090) vkb2_area_bottom_grid_pane

0x7279,	// (0x000230b6) vkb2_area_bottom_pane_g1_ParamLimits

0x7279,	// (0x000230b6) vkb2_area_bottom_pane_g1

0x729d,	// (0x000230da) vkb2_area_bottom_pane_g2_ParamLimits

0x729d,	// (0x000230da) vkb2_area_bottom_pane_g2

0x72cb,	// (0x00023108) vkb2_area_bottom_pane_g3_ParamLimits

0x72cb,	// (0x00023108) vkb2_area_bottom_pane_g3

0x0002,

0xfd64,	// (0x0002bba1) vkb2_area_bottom_pane_g_ParamLimits

0xfd64,	// (0x0002bba1) vkb2_area_bottom_pane_g

0x732c,	// (0x00023169) vkb2_top_cell_left_pane_ParamLimits

0x732c,	// (0x00023169) vkb2_top_cell_left_pane

0xdece,	// (0x00029d0b) vkb2_top_entry_pane_g1_ParamLimits

0xdece,	// (0x00029d0b) vkb2_top_entry_pane_g1

0xdedc,	// (0x00029d19) vkb2_top_entry_pane_t1_ParamLimits

0xdedc,	// (0x00029d19) vkb2_top_entry_pane_t1

0xdf0e,	// (0x00029d4b) vkb2_top_entry_pane_t2_ParamLimits

0xdf0e,	// (0x00029d4b) vkb2_top_entry_pane_t2

0xdf40,	// (0x00029d7d) vkb2_top_entry_pane_t3_ParamLimits

0xdf40,	// (0x00029d7d) vkb2_top_entry_pane_t3

0x0002,

0xfd6b,	// (0x0002bba8) vkb2_top_entry_pane_t_ParamLimits

0xfd6b,	// (0x0002bba8) vkb2_top_entry_pane_t

0x7379,	// (0x000231b6) vkb2_top_grid_right_pane_g1_ParamLimits

0x7379,	// (0x000231b6) vkb2_top_grid_right_pane_g1

0x738f,	// (0x000231cc) vkb2_top_grid_right_pane_g2_ParamLimits

0x738f,	// (0x000231cc) vkb2_top_grid_right_pane_g2

0x73a7,	// (0x000231e4) vkb2_top_grid_right_pane_g3_ParamLimits

0x73a7,	// (0x000231e4) vkb2_top_grid_right_pane_g3

0x73bf,	// (0x000231fc) vkb2_top_grid_right_pane_g4_ParamLimits

0x73bf,	// (0x000231fc) vkb2_top_grid_right_pane_g4

0x0003,

0xfd72,	// (0x0002bbaf) vkb2_top_grid_right_pane_g_ParamLimits

0xfd72,	// (0x0002bbaf) vkb2_top_grid_right_pane_g

0x73d5,	// (0x00023212) vkb2_top_cell_left_pane_g1

0x73ec,	// (0x00023229) vkb2_cell_keypad_pane_g1_ParamLimits

0x73ec,	// (0x00023229) vkb2_cell_keypad_pane_g1

0xdf64,	// (0x00029da1) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf64,	// (0x00029da1) vkb2_cell_keypad_pane_t1

0x73fa,	// (0x00023237) vkb2_cell_bottom_grid_pane_ParamLimits

0x73fa,	// (0x00023237) vkb2_cell_bottom_grid_pane

0x7433,	// (0x00023270) vkb2_cell_bottom_grid_pane_g1

0xdb0f,	// (0x0002994c) aid_call2_pane_cp02

0xdb17,	// (0x00029954) aid_call_pane_cp02

0xdb1f,	// (0x0002995c) clock_digital_number_pane_cp10

0xdb27,	// (0x00029964) clock_digital_number_pane_cp11

0xdb2f,	// (0x0002996c) clock_digital_number_pane_cp12

0xdb37,	// (0x00029974) clock_digital_number_pane_cp13

0xdb3f,	// (0x0002997c) clock_digital_separator_pane_cp10

0x8b54,	// (0x00024991) popup_clock_digital_analogue_window_cp2_g1

0x8b54,	// (0x00024991) popup_clock_digital_analogue_window_cp2_g2

0xdb47,	// (0x00029984) popup_clock_digital_analogue_window_cp2_g3

0x8b54,	// (0x00024991) popup_clock_digital_analogue_window_cp2_g4

0xdb47,	// (0x00029984) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd27,	// (0x0002bb64) popup_clock_digital_analogue_window_cp2_g

0xdb4f,	// (0x0002998c) popup_clock_digital_analogue_window_cp2_t1

0xdb5d,	// (0x0002999a) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd32,	// (0x0002bb6f) popup_clock_digital_analogue_window_cp2_t

0xc022,	// (0x00027e5f) clock_digital_number_pane_cp10_g1

0xc022,	// (0x00027e5f) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0002b957) clock_digital_number_pane_cp10_g

0xc022,	// (0x00027e5f) clock_digital_separator_pane_cp10_g1

0xc022,	// (0x00027e5f) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0002b957) clock_digital_separator_pane_cp10_g

0xd98b,	// (0x000297c8) uniindi_top_pane_g3

0xd99c,	// (0x000297d9) uniindi_top_pane_g4

0x720d,	// (0x0002304a) vkb2_row_keypad_pane_ParamLimits

0x720d,	// (0x0002304a) vkb2_row_keypad_pane

0x7453,	// (0x00023290) vkb2_cell_t_keypad_pane_ParamLimits

0x7453,	// (0x00023290) vkb2_cell_t_keypad_pane

0x7463,	// (0x000232a0) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7463,	// (0x000232a0) vkb2_cell_t_keypad_pane_cp08

0x7476,	// (0x000232b3) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7476,	// (0x000232b3) vkb2_cell_t_keypad_pane_cp09

0x748a,	// (0x000232c7) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x748a,	// (0x000232c7) vkb2_cell_t_keypad_pane_cp01

0x749b,	// (0x000232d8) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x749b,	// (0x000232d8) vkb2_cell_t_keypad_pane_cp02

0x74ac,	// (0x000232e9) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x74ac,	// (0x000232e9) vkb2_cell_t_keypad_pane_cp03

0x74bd,	// (0x000232fa) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x74bd,	// (0x000232fa) vkb2_cell_t_keypad_pane_cp04

0x74ce,	// (0x0002330b) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x74ce,	// (0x0002330b) vkb2_cell_t_keypad_pane_cp05

0x74df,	// (0x0002331c) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x74df,	// (0x0002331c) vkb2_cell_t_keypad_pane_cp06

0x74f0,	// (0x0002332d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x74f0,	// (0x0002332d) vkb2_cell_t_keypad_pane_cp07

0x7501,	// (0x0002333e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7501,	// (0x0002333e) vkb2_cell_t_keypad_pane_cp10

0xc2a0,	// (0x000280dd) vkb2_cell_t_keypad_pane_g1

0xdf7b,	// (0x00029db8) vkb2_cell_t_keypad_pane_t1

0x316f,	// (0x0001efac) popup_grid_graphic2_window

0xdf8d,	// (0x00029dca) aid_size_cell_graphic2_ParamLimits

0xdf8d,	// (0x00029dca) aid_size_cell_graphic2

0xdfc5,	// (0x00029e02) bg_popup_window_pane_cp21_ParamLimits

0xdfc5,	// (0x00029e02) bg_popup_window_pane_cp21

0xdfd3,	// (0x00029e10) graphic2_pages_pane_ParamLimits

0xdfd3,	// (0x00029e10) graphic2_pages_pane

0xe019,	// (0x00029e56) grid_graphic2_control_pane_ParamLimits

0xe019,	// (0x00029e56) grid_graphic2_control_pane

0xe057,	// (0x00029e94) grid_graphic2_pane_ParamLimits

0xe057,	// (0x00029e94) grid_graphic2_pane

0xe0cb,	// (0x00029f08) cell_graphic2_pane

0x316f,	// (0x0001efac) main_comp_mode_pane

0xd1f7,	// (0x00029034) list_ai3_gene_pane_ParamLimits

0xd5cd,	// (0x0002940a) bg_popup_window_pane_cp19_ParamLimits

0xd5d9,	// (0x00029416) bg_touch_area_indi_pane_ParamLimits

0xd5d9,	// (0x00029416) bg_touch_area_indi_pane

0xd5ef,	// (0x0002942c) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5ef,	// (0x0002942c) bg_touch_area_indi_pane_cp01

0xd605,	// (0x00029442) bg_touch_area_indi_pane_cp02_ParamLimits

0xd605,	// (0x00029442) bg_touch_area_indi_pane_cp02

0xd61b,	// (0x00029458) bg_touch_area_indi_pane_cp03_ParamLimits

0xd61b,	// (0x00029458) bg_touch_area_indi_pane_cp03

0xd635,	// (0x00029472) popup_slider_window_g1_ParamLimits

0xd651,	// (0x0002948e) popup_slider_window_g2_ParamLimits

0xd66d,	// (0x000294aa) popup_slider_window_g3_ParamLimits

0xfcbc,	// (0x0002baf9) popup_slider_window_g_ParamLimits

0xd6d3,	// (0x00029510) popup_slider_window_t1_ParamLimits

0xd747,	// (0x00029584) small_volume_slider_vertical_pane_ParamLimits

0xe0cb,	// (0x00029f08) cell_graphic2_pane_ParamLimits

0xe11a,	// (0x00029f57) bg_button_pane_cp10_ParamLimits

0xe11a,	// (0x00029f57) bg_button_pane_cp10

0xe12d,	// (0x00029f6a) bg_button_pane_cp11_ParamLimits

0xe12d,	// (0x00029f6a) bg_button_pane_cp11

0xe140,	// (0x00029f7d) graphic2_pages_pane_g1_ParamLimits

0xe140,	// (0x00029f7d) graphic2_pages_pane_g1

0xe15b,	// (0x00029f98) graphic2_pages_pane_g2_ParamLimits

0xe15b,	// (0x00029f98) graphic2_pages_pane_g2

0x0001,

0xfd80,	// (0x0002bbbd) graphic2_pages_pane_g_ParamLimits

0xfd80,	// (0x0002bbbd) graphic2_pages_pane_g

0xe173,	// (0x00029fb0) graphic2_pages_pane_t1_ParamLimits

0xe173,	// (0x00029fb0) graphic2_pages_pane_t1

0xe18b,	// (0x00029fc8) cell_graphic2_control_pane_ParamLimits

0xe18b,	// (0x00029fc8) cell_graphic2_control_pane

0xe1a9,	// (0x00029fe6) cell_graphic2_pane_g1_ParamLimits

0xe1a9,	// (0x00029fe6) cell_graphic2_pane_g1

0xe1b6,	// (0x00029ff3) cell_graphic2_pane_g2_ParamLimits

0xe1b6,	// (0x00029ff3) cell_graphic2_pane_g2

0xe1c3,	// (0x0002a000) cell_graphic2_pane_g3_ParamLimits

0xe1c3,	// (0x0002a000) cell_graphic2_pane_g3

0xe1d0,	// (0x0002a00d) cell_graphic2_pane_g4_ParamLimits

0xe1d0,	// (0x0002a00d) cell_graphic2_pane_g4

0xe1dd,	// (0x0002a01a) cell_graphic2_pane_g5_ParamLimits

0xe1dd,	// (0x0002a01a) cell_graphic2_pane_g5

0x0004,

0xfd85,	// (0x0002bbc2) cell_graphic2_pane_g_ParamLimits

0xfd85,	// (0x0002bbc2) cell_graphic2_pane_g

0xe1f6,	// (0x0002a033) cell_graphic2_pane_t1_ParamLimits

0xe1f6,	// (0x0002a033) cell_graphic2_pane_t1

0x9a43,	// (0x00025880) grid_highlight_pane_cp11_ParamLimits

0x9a43,	// (0x00025880) grid_highlight_pane_cp11

0x7ebb,	// (0x00023cf8) bg_button_pane_cp05

0xe22c,	// (0x0002a069) cell_graphic2_control_pane_g1

0xc022,	// (0x00027e5f) bg_touch_area_indi_pane_g1

0xe254,	// (0x0002a091) aid_cmod_rocker_key_size

0xe25e,	// (0x0002a09b) aid_cmode_itu_key_size

0xe268,	// (0x0002a0a5) main_cmode_video_pane

0xe272,	// (0x0002a0af) main_comp_mode_itu_pane

0xe27e,	// (0x0002a0bb) main_comp_mode_rocker_pane

0xe28a,	// (0x0002a0c7) cell_cmode_rocker_pane_ParamLimits

0xe28a,	// (0x0002a0c7) cell_cmode_rocker_pane

0xe29c,	// (0x0002a0d9) cell_cmode_itu_pane_ParamLimits

0xe29c,	// (0x0002a0d9) cell_cmode_itu_pane

0x84bf,	// (0x000242fc) bg_button_pane_cp06_ParamLimits

0x84bf,	// (0x000242fc) bg_button_pane_cp06

0xc2a0,	// (0x000280dd) cell_cmode_rocker_pane_g1_ParamLimits

0xc2a0,	// (0x000280dd) cell_cmode_rocker_pane_g1

0xd7eb,	// (0x00029628) cell_cmode_rocker_pane_g2_ParamLimits

0xd7eb,	// (0x00029628) cell_cmode_rocker_pane_g2

0x0001,

0xfd95,	// (0x0002bbd2) cell_cmode_rocker_pane_g_ParamLimits

0xfd95,	// (0x0002bbd2) cell_cmode_rocker_pane_g

0x316f,	// (0x0001efac) bg_button_pane_cp07

0xe2b1,	// (0x0002a0ee) cell_cmode_itu_pane_g1

0xe2ba,	// (0x0002a0f7) cell_cmode_itu_pane_t1

0xe2c8,	// (0x0002a105) cell_cmode_itu_pane_t2

0x0001,

0xfd9a,	// (0x0002bbd7) cell_cmode_itu_pane_t

0xda0e,	// (0x0002984b) aid_touch_ctrl_left

0xda16,	// (0x00029853) aid_touch_ctrl_right

0x316f,	// (0x0001efac) compa_mode_pane

0xe2d6,	// (0x0002a113) aid_cmod_rocker_key_size_cp

0xe2e0,	// (0x0002a11d) aid_cmode_itu_key_size_cp

0xe2ea,	// (0x0002a127) compa_mode_pane_g1

0xe2f2,	// (0x0002a12f) compa_mode_pane_g2

0xe2fa,	// (0x0002a137) compa_mode_pane_g3

0x0002,

0xfd9f,	// (0x0002bbdc) compa_mode_pane_g

0xe302,	// (0x0002a13f) main_comp_mode_itu_pane_cp

0xe30a,	// (0x0002a147) main_comp_mode_rocker_pane_cp

0xe312,	// (0x0002a14f) cell_cmode_itu_pane_cp_ParamLimits

0xe312,	// (0x0002a14f) cell_cmode_itu_pane_cp

0xe327,	// (0x0002a164) cell_cmode_rocker_pane_cp_ParamLimits

0xe327,	// (0x0002a164) cell_cmode_rocker_pane_cp

0x84bf,	// (0x000242fc) bg_button_pane_cp06_cp_ParamLimits

0x84bf,	// (0x000242fc) bg_button_pane_cp06_cp

0xc2a0,	// (0x000280dd) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc2a0,	// (0x000280dd) cell_cmode_rocker_pane_g1_cp

0xc022,	// (0x00027e5f) cell_cmode_rocker_pane_g2_cp

0x316f,	// (0x0001efac) bg_button_pane_cp07_cp

0xaf29,	// (0x00026d66) cell_cmode_itu_pane_g1_cp

0xe339,	// (0x0002a176) cell_cmode_itu_pane_t1_cp

0xe339,	// (0x0002a176) cell_cmode_itu_pane_t2_cp

0xaf16,	// (0x00026d53) settings_code_pane_cp2

0x7c32,	// (0x00023a6f) bg_popup_window_pane_cp3_ParamLimits

0x80bb,	// (0x00023ef8) heading_pane_cp3_ParamLimits

0x80ca,	// (0x00023f07) listscroll_popup_graphic_pane_ParamLimits

0x6b27,	// (0x00022964) fep_hwr_aid_pane_ParamLimits

0x6ef0,	// (0x00022d2d) aid_touch_sctrl_top_ParamLimits

0x6efd,	// (0x00022d3a) sctrl_sk_top_pane_g1_ParamLimits

0xc2a0,	// (0x000280dd) sctrl_sk_top_pane_g2_ParamLimits

0xfcd5,	// (0x0002bb12) sctrl_sk_top_pane_g_ParamLimits

0x6f0a,	// (0x00022d47) sctrl_sk_top_pane_t1_ParamLimits

0x6ef0,	// (0x00022d2d) aid_touch_sctrl_bottom_ParamLimits

0x6f0a,	// (0x00022d47) sctrl_sk_bottom_pane_t1_ParamLimits

0xd957,	// (0x00029794) aid_area_touch_clock

0x70e1,	// (0x00022f1e) aid_vkb2_area_top_pane_cell_ParamLimits

0x70e1,	// (0x00022f1e) aid_vkb2_area_top_pane_cell

0x722f,	// (0x0002306c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x722f,	// (0x0002306c) aid_vkb2_area_bottom_pane_cell

0xdec6,	// (0x00029d03) popup_char_count_window

0xe347,	// (0x0002a184) popup_char_count_window_g1

0xe350,	// (0x0002a18d) popup_char_count_window_g2

0xe359,	// (0x0002a196) popup_char_count_window_g3

0x0002,

0xfda6,	// (0x0002bbe3) popup_char_count_window_g

0xe362,	// (0x0002a19f) popup_char_count_window_t1

0x6fa3,	// (0x00022de0) popup_fep_char_preview_window_ParamLimits

0x6fa3,	// (0x00022de0) popup_fep_char_preview_window

0x70ff,	// (0x00022f3c) vkb2_top_candi_pane_ParamLimits

0x70ff,	// (0x00022f3c) vkb2_top_candi_pane

0xe370,	// (0x0002a1ad) cell_vkb2_top_candi_pane_ParamLimits

0xe370,	// (0x0002a1ad) cell_vkb2_top_candi_pane

0xa05e,	// (0x00025e9b) bg_popup_fep_char_preview_window_ParamLimits

0xa05e,	// (0x00025e9b) bg_popup_fep_char_preview_window

0x7516,	// (0x00023353) popup_fep_char_preview_window_t1_ParamLimits

0x7516,	// (0x00023353) popup_fep_char_preview_window_t1

0xe3ba,	// (0x0002a1f7) bg_popup_fep_char_preview_window_g1

0xe3c2,	// (0x0002a1ff) bg_popup_fep_char_preview_window_g2

0xe3ca,	// (0x0002a207) bg_popup_fep_char_preview_window_g3

0xe3fb,	// (0x0002a238) bg_popup_fep_char_preview_window_g4

0xe403,	// (0x0002a240) bg_popup_fep_char_preview_window_g5

0xe40b,	// (0x0002a248) bg_popup_fep_char_preview_window_g6

0xe413,	// (0x0002a250) bg_popup_fep_char_preview_window_g7

0xe3d2,	// (0x0002a20f) bg_popup_fep_char_preview_window_g8

0xe41b,	// (0x0002a258) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdad,	// (0x0002bbea) bg_popup_fep_char_preview_window_g

0xc2a0,	// (0x000280dd) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc2a0,	// (0x000280dd) cell_vkb2_top_candi_pane_g1

0xc5b7,	// (0x000283f4) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc5b7,	// (0x000283f4) cell_vkb2_top_candi_pane_g2

0xc5d8,	// (0x00028415) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc5d8,	// (0x00028415) cell_vkb2_top_candi_pane_g3

0x7558,	// (0x00023395) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7558,	// (0x00023395) cell_vkb2_top_candi_pane_g4

0xe3da,	// (0x0002a217) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe3da,	// (0x0002a217) cell_vkb2_top_candi_pane_g5

0xd7eb,	// (0x00029628) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd7eb,	// (0x00029628) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc2,	// (0x0002bbff) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc2,	// (0x0002bbff) cell_vkb2_top_candi_pane_g

0x7579,	// (0x000233b6) cell_vkb2_top_candi_pane_t1

0x6987,	// (0x000227c4) aid_size_touch_slider_mark_ParamLimits

0x6987,	// (0x000227c4) aid_size_touch_slider_mark

0xe009,	// (0x00029e46) grid_graphic2_catg_pane_ParamLimits

0xe009,	// (0x00029e46) grid_graphic2_catg_pane

0xe0a7,	// (0x00029ee4) popup_grid_graphic2_window_t1_ParamLimits

0xe0a7,	// (0x00029ee4) popup_grid_graphic2_window_t1

0xe0b9,	// (0x00029ef6) popup_grid_graphic2_window_t2_ParamLimits

0xe0b9,	// (0x00029ef6) popup_grid_graphic2_window_t2

0x0001,

0xfd7b,	// (0x0002bbb8) popup_grid_graphic2_window_t_ParamLimits

0xfd7b,	// (0x0002bbb8) popup_grid_graphic2_window_t

0x7ebb,	// (0x00023cf8) bg_button_pane_cp05_ParamLimits

0xe22c,	// (0x0002a069) cell_graphic2_control_pane_g1_ParamLimits

0xe423,	// (0x0002a260) cell_graphic2_catg_pane_ParamLimits

0xe423,	// (0x0002a260) cell_graphic2_catg_pane

0x316f,	// (0x0001efac) bg_button_pane_cp12

0xe435,	// (0x0002a272) cell_graphic2_catg_pane_g1

0xd923,	// (0x00029760) cell_tb_ext_pane_t1_ParamLimits

0x734c,	// (0x00023189) vkb2_top_cell_right_narrow_pane_ParamLimits

0x734c,	// (0x00023189) vkb2_top_cell_right_narrow_pane

0x7364,	// (0x000231a1) vkb2_top_cell_right_wide_pane_ParamLimits

0x7364,	// (0x000231a1) vkb2_top_cell_right_wide_pane

0x6b19,	// (0x00022956) bg_vkb2_func_pane_ParamLimits

0x6b19,	// (0x00022956) bg_vkb2_func_pane

0x73d5,	// (0x00023212) vkb2_top_cell_left_pane_g1_ParamLimits

0x6b19,	// (0x00022956) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6b19,	// (0x00022956) bg_vkb2_fuc_pane_cp03

0x7433,	// (0x00023270) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x99d7,	// (0x00025814) bg_vkb2_func_pane_g1

0x99df,	// (0x0002581c) bg_vkb2_func_pane_g2

0x99ef,	// (0x0002582c) bg_vkb2_func_pane_g3

0x99e7,	// (0x00025824) bg_vkb2_func_pane_g4

0x99f7,	// (0x00025834) bg_vkb2_func_pane_g5

0x99ff,	// (0x0002583c) bg_vkb2_func_pane_g6

0x9a07,	// (0x00025844) bg_vkb2_func_pane_g7

0x9a0f,	// (0x0002584c) bg_vkb2_func_pane_g8

0x99cf,	// (0x0002580c) bg_vkb2_func_pane_g9

0x0008,

0xfdcf,	// (0x0002bc0c) bg_vkb2_func_pane_g

0x6b19,	// (0x00022956) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6b19,	// (0x00022956) bg_vkb2_fuc_pane_cp01

0x73d5,	// (0x00023212) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x73d5,	// (0x00023212) vkb2_top_cell_right_wide_pane_g1

0x6b19,	// (0x00022956) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6b19,	// (0x00022956) bg_vkb2_fuc_pane_cp02

0x7598,	// (0x000233d5) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7598,	// (0x000233d5) vkb2_top_cell_right_narrow_pane_g1

0xd547,	// (0x00029384) aid_touch_area_decrease_ParamLimits

0xd547,	// (0x00029384) aid_touch_area_decrease

0xd56b,	// (0x000293a8) aid_touch_area_increase_ParamLimits

0xd56b,	// (0x000293a8) aid_touch_area_increase

0xd583,	// (0x000293c0) aid_touch_area_mute_ParamLimits

0xd583,	// (0x000293c0) aid_touch_area_mute

0xd59f,	// (0x000293dc) aid_touch_area_slider_ParamLimits

0xd59f,	// (0x000293dc) aid_touch_area_slider

0xd689,	// (0x000294c6) popup_slider_window_g4_ParamLimits

0xd689,	// (0x000294c6) popup_slider_window_g4

0xd6a1,	// (0x000294de) popup_slider_window_g5_ParamLimits

0xd6a1,	// (0x000294de) popup_slider_window_g5

0xd6c3,	// (0x00029500) popup_slider_window_g6_ParamLimits

0xd6c3,	// (0x00029500) popup_slider_window_g6

0xd701,	// (0x0002953e) popup_slider_window_t2_ParamLimits

0xd701,	// (0x0002953e) popup_slider_window_t2

0x0001,

0xfcc9,	// (0x0002bb06) popup_slider_window_t_ParamLimits

0xfcc9,	// (0x0002bb06) popup_slider_window_t

0xd719,	// (0x00029556) slider_pane_ParamLimits

0xd719,	// (0x00029556) slider_pane

0xe43e,	// (0x0002a27b) slider_pane_g1_ParamLimits

0xe43e,	// (0x0002a27b) slider_pane_g1

0xe452,	// (0x0002a28f) slider_pane_g2_ParamLimits

0xe452,	// (0x0002a28f) slider_pane_g2

0xe468,	// (0x0002a2a5) slider_pane_g3_ParamLimits

0xe468,	// (0x0002a2a5) slider_pane_g3

0x0003,

0xfde2,	// (0x0002bc1f) slider_pane_g_ParamLimits

0xfde2,	// (0x0002bc1f) slider_pane_g

0x65ba,	// (0x000223f7) popup_tb_float_extension_window_ParamLimits

0x65ba,	// (0x000223f7) popup_tb_float_extension_window

0xe494,	// (0x0002a2d1) aid_size_cell_tb_float_ext

0x316f,	// (0x0001efac) bg_popup_sub_window_cp28

0xe4a0,	// (0x0002a2dd) grid_tb_float_ext_pane

0xe4aa,	// (0x0002a2e7) cell_tb_float_ext_pane_ParamLimits

0xe4aa,	// (0x0002a2e7) cell_tb_float_ext_pane

0xe4c4,	// (0x0002a301) cell_tb_float_ext_pane_g1

0xe4cd,	// (0x0002a30a) grid_highlight_pane_cp12

0x6c5a,	// (0x00022a97) cell_last_hwr_side_pane_ParamLimits

0x6c5a,	// (0x00022a97) cell_last_hwr_side_pane

0xc022,	// (0x00027e5f) cell_last_hwr_side_pane_g1

0xe4d6,	// (0x0002a313) cell_last_hwr_side_pane_g2

0x0001,

0xfdeb,	// (0x0002bc28) cell_last_hwr_side_pane_g

0x72fb,	// (0x00023138) vkb2_area_bottom_space_btn_pane_ParamLimits

0x72fb,	// (0x00023138) vkb2_area_bottom_space_btn_pane

0xc2a0,	// (0x000280dd) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf7b,	// (0x00029db8) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7579,	// (0x000233b6) cell_vkb2_top_candi_pane_t1_ParamLimits

0x75b8,	// (0x000233f5) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x75b8,	// (0x000233f5) vkb2_area_bottom_space_btn_pane_g1

0x75f2,	// (0x0002342f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x75f2,	// (0x0002342f) vkb2_area_bottom_space_btn_pane_g2

0x7628,	// (0x00023465) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7628,	// (0x00023465) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf0,	// (0x0002bc2d) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf0,	// (0x0002bc2d) vkb2_area_bottom_space_btn_pane_g

0x6bce,	// (0x00022a0b) cel_fep_hwr_func_pane_ParamLimits

0x6bce,	// (0x00022a0b) cel_fep_hwr_func_pane

0x6c0a,	// (0x00022a47) cell_hwr_side_button_pane_ParamLimits

0x6c0a,	// (0x00022a47) cell_hwr_side_button_pane

0xd957,	// (0x00029794) aid_area_touch_clock_ParamLimits

0x7ebb,	// (0x00023cf8) bg_uniindi_top_pane_ParamLimits

0xd969,	// (0x000297a6) uniindi_top_pane_g1_ParamLimits

0xd97f,	// (0x000297bc) uniindi_top_pane_g2_ParamLimits

0xd98b,	// (0x000297c8) uniindi_top_pane_g3_ParamLimits

0xd99c,	// (0x000297d9) uniindi_top_pane_g4_ParamLimits

0xfd01,	// (0x0002bb3e) uniindi_top_pane_g_ParamLimits

0xd9a9,	// (0x000297e6) uniindi_top_pane_t1_ParamLimits

0x7ebb,	// (0x00023cf8) bg_vkb2_func_pane_cp01_ParamLimits

0x7ebb,	// (0x00023cf8) bg_vkb2_func_pane_cp01

0xe4df,	// (0x0002a31c) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4df,	// (0x0002a31c) cel_fep_hwr_func_pane_g1

0x7ebb,	// (0x00023cf8) bg_vkb2_func_pane_cp02_ParamLimits

0x7ebb,	// (0x00023cf8) bg_vkb2_func_pane_cp02

0xe4df,	// (0x0002a31c) cell_hwr_side_button_pane_g1_ParamLimits

0xe4df,	// (0x0002a31c) cell_hwr_side_button_pane_g1

0x9850,	// (0x0002568d) status_pane_g4_ParamLimits

0x9850,	// (0x0002568d) status_pane_g4

0x986a,	// (0x000256a7) status_pane_t1

0xbd67,	// (0x00027ba4) form2_midp_gauge_slider_cont_pane

0xbd6f,	// (0x00027bac) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd81,	// (0x00027bbe) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbd93,	// (0x00027bd0) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacd,	// (0x0002b90a) form2_midp_gauge_slider_pane_t_ParamLimits

0xbda5,	// (0x00027be2) form2_midp_slider_pane_ParamLimits

0x6f6b,	// (0x00022da8) aid_size_cell_func_vkb2_ParamLimits

0x6f6b,	// (0x00022da8) aid_size_cell_func_vkb2

0xe480,	// (0x0002a2bd) slider_pane_g4_ParamLimits

0xe480,	// (0x0002a2bd) slider_pane_g4

0x7672,	// (0x000234af) form2_midp_gauge_slider_pane_t2_cp01

0x7680,	// (0x000234bd) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7680,	// (0x000234bd) form2_midp_gauge_slider_pane_t3_cp01

0x769d,	// (0x000234da) form2_midp_slider_pane_cp01

0x316f,	// (0x0001efac) navi_smil_pane

0xe518,	// (0x0002a355) navi_smil_pane_g1

0xe520,	// (0x0002a35d) navi_smil_pane_t1

0xe4ed,	// (0x0002a32a) form2_midp_slider_pane_g1

0xe4f6,	// (0x0002a333) form2_midp_slider_pane_g2

0xe4fe,	// (0x0002a33b) form2_midp_slider_pane_g3

0xe4ed,	// (0x0002a32a) form2_midp_slider_pane_g4

0xe506,	// (0x0002a343) form2_midp_slider_pane_g5

0x0004,

0xfdf9,	// (0x0002bc36) form2_midp_slider_pane_g

0x7662,	// (0x0002349f) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7662,	// (0x0002349f) vkb2_area_bottom_space_btn_pane_g4

0x967f,	// (0x000254bc) lc0_navi_pane_ParamLimits

0x967f,	// (0x000254bc) lc0_navi_pane

0x96f5,	// (0x00025532) lc0_stat_indi_pane_ParamLimits

0x96f5,	// (0x00025532) lc0_stat_indi_pane

0x970c,	// (0x00025549) ls0_title_pane_ParamLimits

0x970c,	// (0x00025549) ls0_title_pane

0x84bf,	// (0x000242fc) bg_popup_sub_pane_cp14_ParamLimits

0xd93e,	// (0x0002977b) list_uniindi_pane_ParamLimits

0xd94a,	// (0x00029787) uniindi_top_pane_ParamLimits

0xd9e6,	// (0x00029823) list_single_uniindi_pane_g1_ParamLimits

0xd9f9,	// (0x00029836) list_single_uniindi_pane_t1_ParamLimits

0x76a6,	// (0x000234e3) lc0_stat_clock_pane_ParamLimits

0x76a6,	// (0x000234e3) lc0_stat_clock_pane

0xe52e,	// (0x0002a36b) lc0_stat_indi_pane_g1_ParamLimits

0xe52e,	// (0x0002a36b) lc0_stat_indi_pane_g1

0xe53b,	// (0x0002a378) lc0_stat_indi_pane_g2_ParamLimits

0xe53b,	// (0x0002a378) lc0_stat_indi_pane_g2

0x0001,

0xfe04,	// (0x0002bc41) lc0_stat_indi_pane_g_ParamLimits

0xfe04,	// (0x0002bc41) lc0_stat_indi_pane_g

0x76b3,	// (0x000234f0) lc0_uni_indicator_pane_ParamLimits

0x76b3,	// (0x000234f0) lc0_uni_indicator_pane

0xe548,	// (0x0002a385) ls0_title_pane_g1_ParamLimits

0xe548,	// (0x0002a385) ls0_title_pane_g1

0xe55c,	// (0x0002a399) ls0_title_pane_t1_ParamLimits

0xe55c,	// (0x0002a399) ls0_title_pane_t1

0x76c0,	// (0x000234fd) lc0_uni_indicator_pane_g1_ParamLimits

0x76c0,	// (0x000234fd) lc0_uni_indicator_pane_g1

0xe592,	// (0x0002a3cf) lc0_stat_clock_pane_t1

0x316f,	// (0x0001efac) main_ai5_pane

0xe5a0,	// (0x0002a3dd) ai5_sk_pane_ParamLimits

0xe5a0,	// (0x0002a3dd) ai5_sk_pane

0xe5ad,	// (0x0002a3ea) cell_ai5_widget_pane_ParamLimits

0xe5ad,	// (0x0002a3ea) cell_ai5_widget_pane

0xe676,	// (0x0002a4b3) aid_size_cell_widget_grid

0xe684,	// (0x0002a4c1) bg_ai5_widget_pane_ParamLimits

0xe684,	// (0x0002a4c1) bg_ai5_widget_pane

0xe700,	// (0x0002a53d) cell_ai5_widget_pane_g2

0xe714,	// (0x0002a551) cell_ai5_widget_pane_g3

0xe72e,	// (0x0002a56b) cell_ai5_widget_pane_g4

0xe73e,	// (0x0002a57b) cell_ai5_widget_pane_g5

0xe74e,	// (0x0002a58b) cell_ai5_widget_pane_g6

0xe75a,	// (0x0002a597) cell_ai5_widget_pane_g7

0xe7c6,	// (0x0002a603) cell_ai5_widget_pane_t1_ParamLimits

0xe7c6,	// (0x0002a603) cell_ai5_widget_pane_t1

0xe7e3,	// (0x0002a620) cell_ai5_widget_pane_t2_ParamLimits

0xe7e3,	// (0x0002a620) cell_ai5_widget_pane_t2

0xe7fb,	// (0x0002a638) cell_ai5_widget_pane_t3_ParamLimits

0xe7fb,	// (0x0002a638) cell_ai5_widget_pane_t3

0xe813,	// (0x0002a650) cell_ai5_widget_pane_t4_ParamLimits

0xe813,	// (0x0002a650) cell_ai5_widget_pane_t4

0xe839,	// (0x0002a676) cell_ai5_widget_pane_t5_ParamLimits

0xe839,	// (0x0002a676) cell_ai5_widget_pane_t5

0xe858,	// (0x0002a695) cell_ai5_widget_pane_t6_ParamLimits

0xe858,	// (0x0002a695) cell_ai5_widget_pane_t6

0xe86a,	// (0x0002a6a7) cell_ai5_widget_pane_t7_ParamLimits

0xe86a,	// (0x0002a6a7) cell_ai5_widget_pane_t7

0xe889,	// (0x0002a6c6) cell_ai5_widget_pane_t8_ParamLimits

0xe889,	// (0x0002a6c6) cell_ai5_widget_pane_t8

0x000b,

0xfe24,	// (0x0002bc61) cell_ai5_widget_pane_t_ParamLimits

0xfe24,	// (0x0002bc61) cell_ai5_widget_pane_t

0xe90d,	// (0x0002a74a) grid_ai5_widget_pane

0x84bf,	// (0x000242fc) highlight_cell_ai5_widget_pane_ParamLimits

0x84bf,	// (0x000242fc) highlight_cell_ai5_widget_pane

0xe91b,	// (0x0002a758) ai5_sk_left_pane

0xe925,	// (0x0002a762) ai5_sk_middle_pane

0xe92f,	// (0x0002a76c) ai5_sk_right_pane

0xe939,	// (0x0002a776) bg_ai5_widget_pane_g1_ParamLimits

0xe939,	// (0x0002a776) bg_ai5_widget_pane_g1

0xe945,	// (0x0002a782) bg_ai5_widget_pane_g2_ParamLimits

0xe945,	// (0x0002a782) bg_ai5_widget_pane_g2

0xe951,	// (0x0002a78e) bg_ai5_widget_pane_g3_ParamLimits

0xe951,	// (0x0002a78e) bg_ai5_widget_pane_g3

0xe95d,	// (0x0002a79a) bg_ai5_widget_pane_g4_ParamLimits

0xe95d,	// (0x0002a79a) bg_ai5_widget_pane_g4

0xe969,	// (0x0002a7a6) bg_ai5_widget_pane_g5_ParamLimits

0xe969,	// (0x0002a7a6) bg_ai5_widget_pane_g5

0xe975,	// (0x0002a7b2) bg_ai5_widget_pane_g6_ParamLimits

0xe975,	// (0x0002a7b2) bg_ai5_widget_pane_g6

0xe981,	// (0x0002a7be) bg_ai5_widget_pane_g7_ParamLimits

0xe981,	// (0x0002a7be) bg_ai5_widget_pane_g7

0xe98d,	// (0x0002a7ca) bg_ai5_widget_pane_g8_ParamLimits

0xe98d,	// (0x0002a7ca) bg_ai5_widget_pane_g8

0xe999,	// (0x0002a7d6) bg_ai5_widget_pane_g9_ParamLimits

0xe999,	// (0x0002a7d6) bg_ai5_widget_pane_g9

0x0008,

0xfe3d,	// (0x0002bc7a) bg_ai5_widget_pane_g_ParamLimits

0xfe3d,	// (0x0002bc7a) bg_ai5_widget_pane_g

0xe9cb,	// (0x0002a808) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9cb,	// (0x0002a808) cell_shortcut_ai5_widget_pane

0x9181,	// (0x00024fbe) bg_cell_shortcut_ai5_widget_pane

0xe9dc,	// (0x0002a819) cell_grid_ai5_widget_pane_g1

0x9181,	// (0x00024fbe) highlight_cell_shortcut_ai5_widget_pane

0x99df,	// (0x0002581c) ai5_sk_left_pane_g1

0xe9e5,	// (0x0002a822) ai5_sk_left_pane_g2

0xe9ed,	// (0x0002a82a) ai5_sk_left_pane_g3

0xe9f5,	// (0x0002a832) ai5_sk_left_pane_g4

0x0003,

0xfe50,	// (0x0002bc8d) ai5_sk_left_pane_g

0xe9fd,	// (0x0002a83a) ai5_sk_left_pane_t1

0x99d7,	// (0x00025814) ai5_sk_right_pane_g1

0xea0b,	// (0x0002a848) ai5_sk_right_pane_g2

0xea13,	// (0x0002a850) ai5_sk_right_pane_g3

0xea1b,	// (0x0002a858) ai5_sk_right_pane_g4

0x0003,

0xfe59,	// (0x0002bc96) ai5_sk_right_pane_g

0xea23,	// (0x0002a860) ai5_sk_right_pane_t1

0x99d7,	// (0x00025814) ai5_sk_middle_pane_g1

0x99df,	// (0x0002581c) ai5_sk_middle_pane_g2

0x99f7,	// (0x00025834) ai5_sk_middle_pane_g3

0xea13,	// (0x0002a850) ai5_sk_middle_pane_g4

0xe9ed,	// (0x0002a82a) ai5_sk_middle_pane_g5

0xea31,	// (0x0002a86e) ai5_sk_middle_pane_g6

0xea39,	// (0x0002a876) ai5_sk_middle_pane_g7

0x0006,

0xfe62,	// (0x0002bc9f) ai5_sk_middle_pane_g

0x9505,	// (0x00025342) aid_touch_area_size_lc0_ParamLimits

0x9505,	// (0x00025342) aid_touch_area_size_lc0

0x6d59,	// (0x00022b96) cell_hwr_candidate_pane_t1_ParamLimits

0x9521,	// (0x0002535e) aid_touch_navi_pane

0x97fa,	// (0x00025637) status_dt_navi_pane_ParamLimits

0x97fa,	// (0x00025637) status_dt_navi_pane

0x9807,	// (0x00025644) status_dt_sta_pane_ParamLimits

0x9807,	// (0x00025644) status_dt_sta_pane

0xea41,	// (0x0002a87e) dt_sta_controll_pane

0xea4e,	// (0x0002a88b) dt_sta_indi_pane

0xea5f,	// (0x0002a89c) dt_sta_title_pane

0x7ebb,	// (0x00023cf8) bg_dt_sta_indi_pane_ParamLimits

0x7ebb,	// (0x00023cf8) bg_dt_sta_indi_pane

0xea72,	// (0x0002a8af) dt_sta_battery_pane

0xea7a,	// (0x0002a8b7) dt_sta_indi_pane_g1

0xea83,	// (0x0002a8c0) dt_sta_indi_pane_g2

0xea8c,	// (0x0002a8c9) dt_sta_indi_pane_g3

0x0002,

0xfe71,	// (0x0002bcae) dt_sta_indi_pane_g

0xea95,	// (0x0002a8d2) dt_sta_signal_pane

0x84bf,	// (0x000242fc) bg_dt_sta_title_pane_ParamLimits

0x84bf,	// (0x000242fc) bg_dt_sta_title_pane

0xea9e,	// (0x0002a8db) dt_sta_title_pane_g1

0xeaa6,	// (0x0002a8e3) dt_sta_title_pane_t1_ParamLimits

0xeaa6,	// (0x0002a8e3) dt_sta_title_pane_t1

0x316f,	// (0x0001efac) bg_dt_sta_control_pane

0xeabb,	// (0x0002a8f8) dt_sta_controll_pane_g1

0xeac4,	// (0x0002a901) bg_dt_sta_title_pane_g1

0xeacd,	// (0x0002a90a) bg_dt_sta_title_pane_g2

0xead6,	// (0x0002a913) bg_dt_sta_title_pane_g3

0x0002,

0xfe78,	// (0x0002bcb5) bg_dt_sta_title_pane_g

0xc022,	// (0x00027e5f) bg_dt_sta_indi_pane_g1

0xeadf,	// (0x0002a91c) dt_sta_signal_pane_g1

0xeae7,	// (0x0002a924) dt_sta_signal_pane_g2

0x0001,

0xfe7f,	// (0x0002bcbc) dt_sta_signal_pane_g

0xeaef,	// (0x0002a92c) dt_sta_battery_pane_g1

0xeaf8,	// (0x0002a935) dt_sta_battery_pane_t1

0xc022,	// (0x00027e5f) bg_dt_sta_control_pane_g1

0x8c7f,	// (0x00024abc) fep_china_uni_eep_pane

0x8c87,	// (0x00024ac4) fep_china_uni_entry_pane_ParamLimits

0x8c97,	// (0x00024ad4) popup_fep_china_uni_window_g1_ParamLimits

0x8ca7,	// (0x00024ae4) popup_fep_china_uni_window_g2_ParamLimits

0x8ca7,	// (0x00024ae4) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x0002b535) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x0002b535) popup_fep_china_uni_window_g

0xeb07,	// (0x0002a944) fep_china_uni_eep_pane_g1

0xeb0f,	// (0x0002a94c) fep_china_uni_eep_pane_t1

0xe50f,	// (0x0002a34c) aid_touch_area_size_smil_player

0x9677,	// (0x000254b4) lc0_clock_pane

0x985e,	// (0x0002569b) status_pane_g5_ParamLimits

0x985e,	// (0x0002569b) status_pane_g5

0x627f,	// (0x000220bc) popup_keymap_window

0x981c,	// (0x00025659) status_icon_pane

0xe714,	// (0x0002a551) cell_ai5_widget_pane_g3_ParamLimits

0xe72e,	// (0x0002a56b) cell_ai5_widget_pane_g4_ParamLimits

0xe73e,	// (0x0002a57b) cell_ai5_widget_pane_g5_ParamLimits

0xe766,	// (0x0002a5a3) cell_ai5_widget_pane_g8_ParamLimits

0xe766,	// (0x0002a5a3) cell_ai5_widget_pane_g8

0xe77a,	// (0x0002a5b7) cell_ai5_widget_pane_g9_ParamLimits

0xe77a,	// (0x0002a5b7) cell_ai5_widget_pane_g9

0xe78e,	// (0x0002a5cb) cell_ai5_widget_pane_g10_ParamLimits

0xe78e,	// (0x0002a5cb) cell_ai5_widget_pane_g10

0xeb1e,	// (0x0002a95b) status_icon_pane_g1

0x316f,	// (0x0001efac) bg_popup_sub_pane_cp13

0xeb26,	// (0x0002a963) popup_keymap_window_t1

0x9456,	// (0x00025293) control_pane_g6_ParamLimits

0x9456,	// (0x00025293) control_pane_g6

0x9463,	// (0x000252a0) control_pane_g7_ParamLimits

0x9463,	// (0x000252a0) control_pane_g7

0x9470,	// (0x000252ad) control_pane_g8_ParamLimits

0x9470,	// (0x000252ad) control_pane_g8

0xea41,	// (0x0002a87e) dt_sta_controll_pane_ParamLimits

0xea4e,	// (0x0002a88b) dt_sta_indi_pane_ParamLimits

0xea5f,	// (0x0002a89c) dt_sta_title_pane_ParamLimits

0x83f7,	// (0x00024234) aid_size_touch_scroll_bar_cale

0x58ea,	// (0x00021727) popup_discreet_window_ParamLimits

0x58ea,	// (0x00021727) popup_discreet_window

0x5972,	// (0x000217af) popup_sk_window

0xa05e,	// (0x00025e9b) bg_popup_sub_pane_cp28_ParamLimits

0xa05e,	// (0x00025e9b) bg_popup_sub_pane_cp28

0xeb34,	// (0x0002a971) popup_discreet_window_g1_ParamLimits

0xeb34,	// (0x0002a971) popup_discreet_window_g1

0xeb54,	// (0x0002a991) popup_discreet_window_t1_ParamLimits

0xeb54,	// (0x0002a991) popup_discreet_window_t1

0xeb72,	// (0x0002a9af) popup_discreet_window_t2_ParamLimits

0xeb72,	// (0x0002a9af) popup_discreet_window_t2

0x0002,

0xfe84,	// (0x0002bcc1) popup_discreet_window_t_ParamLimits

0xfe84,	// (0x0002bcc1) popup_discreet_window_t

0x76d4,	// (0x00023511) popup_sk_window_g1

0x76de,	// (0x0002351b) popup_sk_window_g2

0x0001,

0xfe8b,	// (0x0002bcc8) popup_sk_window_g

0x76e6,	// (0x00023523) popup_sk_window_t1

0x76f4,	// (0x00023531) popup_sk_window_t1_copy1

0xe700,	// (0x0002a53d) cell_ai5_widget_pane_g2_ParamLimits

0xe89b,	// (0x0002a6d8) cell_ai5_widget_pane_t9_ParamLimits

0xe89b,	// (0x0002a6d8) cell_ai5_widget_pane_t9

0x316f,	// (0x0001efac) main_fep_fshwr2_pane

0x7702,	// (0x0002353f) aid_fshwr2_btn_pane

0x7712,	// (0x0002354f) aid_fshwr2_syb_pane

0x7726,	// (0x00023563) aid_fshwr2_txt_pane

0x7736,	// (0x00023573) fshwr2_func_candi_pane

0x775a,	// (0x00023597) fshwr2_hwr_syb_pane

0x7774,	// (0x000235b1) fshwr2_icf_pane

0x316f,	// (0x0001efac) fshwr2_icf_bg_pane

0x77a2,	// (0x000235df) fshwr2_icf_pane_t1_ParamLimits

0x77a2,	// (0x000235df) fshwr2_icf_pane_t1

0x8b54,	// (0x00024991) fshwr2_func_candi_pane_g1

0xebc4,	// (0x0002aa01) fshwr2_func_candi_row_pane_ParamLimits

0xebc4,	// (0x0002aa01) fshwr2_func_candi_row_pane

0x77ba,	// (0x000235f7) cell_fshwr2_syb_pane_ParamLimits

0x77ba,	// (0x000235f7) cell_fshwr2_syb_pane

0xe4df,	// (0x0002a31c) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe4df,	// (0x0002a31c) fshwr2_hwr_syb_pane_g1

0x316f,	// (0x0001efac) bg_popup_call_pane_cp01

0x77dd,	// (0x0002361a) fshwr2_func_candi_cell_pane_ParamLimits

0x77dd,	// (0x0002361a) fshwr2_func_candi_cell_pane

0xa6d2,	// (0x0002650f) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa6d2,	// (0x0002650f) fshwr2_func_candi_cell_bg_pane

0x7828,	// (0x00023665) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7828,	// (0x00023665) fshwr2_func_candi_cell_pane_g1

0x7853,	// (0x00023690) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7853,	// (0x00023690) fshwr2_func_candi_cell_pane_t1

0x316f,	// (0x0001efac) bg_button_pane_cp08

0x94a5,	// (0x000252e2) cell_fshwr2_syb_bg_pane

0x7866,	// (0x000236a3) cell_fshwr2_syb_bg_pane_g1

0x787a,	// (0x000236b7) cell_fshwr2_syb_bg_pane_t1

0x84bf,	// (0x000242fc) main_tmo_pane

0xab79,	// (0x000269b6) uni_indicator_pane_g1_ParamLimits

0xab8f,	// (0x000269cc) uni_indicator_pane_g2_ParamLimits

0xaba5,	// (0x000269e2) uni_indicator_pane_g3_ParamLimits

0xabb8,	// (0x000269f5) uni_indicator_pane_g4_ParamLimits

0xabb8,	// (0x000269f5) uni_indicator_pane_g4

0xabcc,	// (0x00026a09) uni_indicator_pane_g5_ParamLimits

0xabcc,	// (0x00026a09) uni_indicator_pane_g5

0xabcc,	// (0x00026a09) uni_indicator_pane_g6_ParamLimits

0xabcc,	// (0x00026a09) uni_indicator_pane_g6

0xf8fc,	// (0x0002b739) uni_indicator_pane_g_ParamLimits

0xd523,	// (0x00029360) popup_tmo_note_window_ParamLimits

0xd523,	// (0x00029360) popup_tmo_note_window

0x84bf,	// (0x000242fc) fshwr2_bg_pane

0x7844,	// (0x00023681) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7844,	// (0x00023681) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe90,	// (0x0002bccd) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe90,	// (0x0002bccd) fshwr2_func_candi_cell_pane_g

0xc022,	// (0x00027e5f) bg_popup_window_pane_cp01

0x7890,	// (0x000236cd) bg_popup_window_pane_g1_cp01

0xebeb,	// (0x0002aa28) bg_popup_window_pane_cp22_ParamLimits

0xebeb,	// (0x0002aa28) bg_popup_window_pane_cp22

0xebf9,	// (0x0002aa36) listscroll_tmo_link_pane_ParamLimits

0xebf9,	// (0x0002aa36) listscroll_tmo_link_pane

0xec39,	// (0x0002aa76) popup_tmo_note_window_g1_ParamLimits

0xec39,	// (0x0002aa76) popup_tmo_note_window_g1

0xec46,	// (0x0002aa83) tmo_note_info_pane_ParamLimits

0xec46,	// (0x0002aa83) tmo_note_info_pane

0xec60,	// (0x0002aa9d) list_tmo_note_info_pane_g1_ParamLimits

0xec60,	// (0x0002aa9d) list_tmo_note_info_pane_g1

0xec77,	// (0x0002aab4) list_tmo_note_info_pane_g2_ParamLimits

0xec77,	// (0x0002aab4) list_tmo_note_info_pane_g2

0x0001,

0xfe95,	// (0x0002bcd2) list_tmo_note_info_pane_g_ParamLimits

0xfe95,	// (0x0002bcd2) list_tmo_note_info_pane_g

0xec93,	// (0x0002aad0) list_tmo_note_info_text_pane_ParamLimits

0xec93,	// (0x0002aad0) list_tmo_note_info_text_pane

0xed14,	// (0x0002ab51) list_tmo_link_pane

0xed21,	// (0x0002ab5e) scroll_pane_cp20

0xed2e,	// (0x0002ab6b) list_single_tmo_link_pane_ParamLimits

0xed2e,	// (0x0002ab6b) list_single_tmo_link_pane

0xed3e,	// (0x0002ab7b) list_single_tmo_link_pane_t1

0xed4c,	// (0x0002ab89) list_tmo_note_info_text_pane_t1_ParamLimits

0xed4c,	// (0x0002ab89) list_tmo_note_info_text_pane_t1

0x857b,	// (0x000243b8) aid_size_touch_scroll_bar_cp01_ParamLimits

0x857b,	// (0x000243b8) aid_size_touch_scroll_bar_cp01

0x4ae0,	// (0x0002091d) aid_size_touch_slider_marker

0x595a,	// (0x00021797) popup_settings_window_ParamLimits

0x595a,	// (0x00021797) popup_settings_window

0x4caf,	// (0x00020aec) popup_candi_list_indi_window

0x9521,	// (0x0002535e) aid_touch_navi_pane_ParamLimits

0x6ec4,	// (0x00022d01) rs_clock_indi_pane

0x6ecd,	// (0x00022d0a) sctrl_sk_bottom_pane_ParamLimits

0x6ede,	// (0x00022d1b) sctrl_sk_top_pane_ParamLimits

0x6fbd,	// (0x00022dfa) popup_fep_tooltip_window

0xe676,	// (0x0002a4b3) aid_size_cell_widget_grid_ParamLimits

0xe6eb,	// (0x0002a528) cell_ai5_widget_pane_g1_ParamLimits

0xe6eb,	// (0x0002a528) cell_ai5_widget_pane_g1

0xe74e,	// (0x0002a58b) cell_ai5_widget_pane_g6_ParamLimits

0xe75a,	// (0x0002a597) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe09,	// (0x0002bc46) cell_ai5_widget_pane_g_ParamLimits

0xfe09,	// (0x0002bc46) cell_ai5_widget_pane_g

0xe8ca,	// (0x0002a707) cell_ai5_widget_pane_t10_ParamLimits

0xe8ca,	// (0x0002a707) cell_ai5_widget_pane_t10

0xe90d,	// (0x0002a74a) grid_ai5_widget_pane_ParamLimits

0xe9a5,	// (0x0002a7e2) cell_contacts_ai5_widget_pane_ParamLimits

0xe9a5,	// (0x0002a7e2) cell_contacts_ai5_widget_pane

0xeb87,	// (0x0002a9c4) popup_discreet_window_t3_ParamLimits

0xeb87,	// (0x0002a9c4) popup_discreet_window_t3

0x778c,	// (0x000235c9) popup_fshwr2_char_preview_window_ParamLimits

0x778c,	// (0x000235c9) popup_fshwr2_char_preview_window

0xecb1,	// (0x0002aaee) tmo_note_info_pane_t1

0xecc6,	// (0x0002ab03) tmo_note_info_pane_t2

0xecdb,	// (0x0002ab18) tmo_note_info_pane_t3

0xecf0,	// (0x0002ab2d) tmo_note_info_pane_t4

0xed02,	// (0x0002ab3f) tmo_note_info_pane_t5

0x0004,

0xfe9a,	// (0x0002bcd7) tmo_note_info_pane_t

0xed14,	// (0x0002ab51) list_tmo_link_pane_ParamLimits

0xed21,	// (0x0002ab5e) scroll_pane_cp20_ParamLimits

0x316f,	// (0x0001efac) bg_popup_fep_char_preview_window_cp01

0xed65,	// (0x0002aba2) popup_fshwr2_char_preview_window_t1

0xed73,	// (0x0002abb0) popup_candi_list_indi_window_g1

0xed7c,	// (0x0002abb9) bg_cell_contacts_ai5_widget_pane

0xed88,	// (0x0002abc5) cell_contacts_ai5_widget_pane_g1

0xc702,	// (0x0002853f) cell_contacts_ai5_widget_pane_g2

0xed9d,	// (0x0002abda) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea5,	// (0x0002bce2) cell_contacts_ai5_widget_pane_g

0xeda9,	// (0x0002abe6) cell_contacts_ai5_widget_pane_t1

0x84bf,	// (0x000242fc) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee20,	// (0x0002ac5d) settings_container_pane

0x9181,	// (0x00024fbe) listscroll_set_pane_copy1

0xb70c,	// (0x00027549) scroll_pane_cp121_copy1

0x9dfb,	// (0x00025c38) set_content_pane_copy1

0xee2c,	// (0x0002ac69) aid_height_set_list_copy1_ParamLimits

0xee2c,	// (0x0002ac69) aid_height_set_list_copy1

0xadc4,	// (0x00026c01) aid_size_parent_copy1_ParamLimits

0xadc4,	// (0x00026c01) aid_size_parent_copy1

0xee38,	// (0x0002ac75) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee38,	// (0x0002ac75) button_value_adjust_pane_cp6_copy1

0x94a5,	// (0x000252e2) list_highlight_pane_cp2_copy1_ParamLimits

0x94a5,	// (0x000252e2) list_highlight_pane_cp2_copy1

0xee4c,	// (0x0002ac89) list_set_pane_copy1_ParamLimits

0xee4c,	// (0x0002ac89) list_set_pane_copy1

0xedbb,	// (0x0002abf8) main_pane_set_t1_copy1_ParamLimits

0xedbb,	// (0x0002abf8) main_pane_set_t1_copy1

0xedf5,	// (0x0002ac32) main_pane_set_t2_copy1_ParamLimits

0xedf5,	// (0x0002ac32) main_pane_set_t2_copy1

0xeef9,	// (0x0002ad36) main_pane_set_t3_copy1

0xef07,	// (0x0002ad44) main_pane_set_t4_copy1

0xee14,	// (0x0002ac51) set_content_pane_g1_copy1_ParamLimits

0xee14,	// (0x0002ac51) set_content_pane_g1_copy1

0xef15,	// (0x0002ad52) setting_code_pane_copy1

0xef1d,	// (0x0002ad5a) setting_slider_graphic_pane_copy1

0xef1d,	// (0x0002ad5a) setting_slider_pane_copy1

0xef25,	// (0x0002ad62) setting_text_pane_copy1

0xef25,	// (0x0002ad62) setting_volume_pane_copy1

0xef15,	// (0x0002ad52) settings_code_pane_cp2_copy1

0xef2d,	// (0x0002ad6a) settings_code_pane_cp_copy1_ParamLimits

0xef2d,	// (0x0002ad6a) settings_code_pane_cp_copy1

0x7899,	// (0x000236d6) volume_set_pane_copy1

0xef41,	// (0x0002ad7e) volume_set_pane_g10_copy1

0xef49,	// (0x0002ad86) volume_set_pane_g1_copy1

0xef51,	// (0x0002ad8e) volume_set_pane_g2_copy1

0xef59,	// (0x0002ad96) volume_set_pane_g3_copy1

0xef61,	// (0x0002ad9e) volume_set_pane_g4_copy1

0xef69,	// (0x0002ada6) volume_set_pane_g5_copy1

0xef71,	// (0x0002adae) volume_set_pane_g6_copy1

0xef79,	// (0x0002adb6) volume_set_pane_g7_copy1

0xef81,	// (0x0002adbe) volume_set_pane_g8_copy1

0xef89,	// (0x0002adc6) volume_set_pane_g9_copy1

0x7c32,	// (0x00023a6f) bg_set_opt_pane_cp_copy1_ParamLimits

0x7c32,	// (0x00023a6f) bg_set_opt_pane_cp_copy1

0x78a1,	// (0x000236de) setting_slider_pane_t1_copy1_ParamLimits

0x78a1,	// (0x000236de) setting_slider_pane_t1_copy1

0x78c0,	// (0x000236fd) setting_slider_pane_t2_copy1_ParamLimits

0x78c0,	// (0x000236fd) setting_slider_pane_t2_copy1

0x78da,	// (0x00023717) setting_slider_pane_t3_copy1_ParamLimits

0x78da,	// (0x00023717) setting_slider_pane_t3_copy1

0x78f2,	// (0x0002372f) slider_set_pane_copy1_ParamLimits

0x78f2,	// (0x0002372f) slider_set_pane_copy1

0x8517,	// (0x00024354) set_opt_bg_pane_g1_copy2

0x851f,	// (0x0002435c) set_opt_bg_pane_g2_copy2

0xef91,	// (0x0002adce) set_opt_bg_pane_g3_copy2

0x852f,	// (0x0002436c) set_opt_bg_pane_g4_copy2

0x8537,	// (0x00024374) set_opt_bg_pane_g5_copy2

0x853f,	// (0x0002437c) set_opt_bg_pane_g6_copy2

0xef9b,	// (0x0002add8) set_opt_bg_pane_g7_copy2

0xefa3,	// (0x0002ade0) set_opt_bg_pane_g8_copy2

0xefad,	// (0x0002adea) set_opt_bg_pane_g9_copy2

0x7908,	// (0x00023745) aid_size_touch_slider_mark_copy1_ParamLimits

0x7908,	// (0x00023745) aid_size_touch_slider_mark_copy1

0xefb7,	// (0x0002adf4) slider_set_pane_g1_copy1

0x791c,	// (0x00023759) slider_set_pane_g2_copy1

0x69a7,	// (0x000227e4) slider_set_pane_g3_copy1_ParamLimits

0x69a7,	// (0x000227e4) slider_set_pane_g3_copy1

0x69bb,	// (0x000227f8) slider_set_pane_g4_copy1_ParamLimits

0x69bb,	// (0x000227f8) slider_set_pane_g4_copy1

0x69d3,	// (0x00022810) slider_set_pane_g5_copy1_ParamLimits

0x69d3,	// (0x00022810) slider_set_pane_g5_copy1

0x69a7,	// (0x000227e4) slider_set_pane_g6_copy1_ParamLimits

0x69a7,	// (0x000227e4) slider_set_pane_g6_copy1

0x7924,	// (0x00023761) slider_set_pane_g7_copy1_ParamLimits

0x7924,	// (0x00023761) slider_set_pane_g7_copy1

0x7b52,	// (0x0002398f) bg_set_opt_pane_cp2_copy1

0xefc0,	// (0x0002adfd) setting_slider_graphic_pane_g1_copy1

0xefc9,	// (0x0002ae06) setting_slider_graphic_pane_t1_copy1

0xefd9,	// (0x0002ae16) setting_slider_graphic_pane_t2_copy1

0xefe9,	// (0x0002ae26) slider_set_pane_cp_copy1

0xeff9,	// (0x0002ae36) input_focus_pane_cp1_copy1

0xf002,	// (0x0002ae3f) list_set_text_pane_copy1

0xf00a,	// (0x0002ae47) setting_text_pane_g1_copy1

0x44da,	// (0x00020317) set_text_pane_t1_copy1

0xeff9,	// (0x0002ae36) input_focus_pane_cp2_copy1

0xf00a,	// (0x0002ae47) setting_code_pane_g1_copy1

0xf013,	// (0x0002ae50) setting_code_pane_t1_copy1

0xb534,	// (0x00027371) list_set_graphic_pane_copy1

0x7b52,	// (0x0002398f) bg_set_opt_pane_cp4_copy1

0x8e7e,	// (0x00024cbb) list_set_graphic_pane_g1_copy1_ParamLimits

0x8e7e,	// (0x00024cbb) list_set_graphic_pane_g1_copy1

0xf021,	// (0x0002ae5e) list_set_graphic_pane_g2_copy1

0x8e96,	// (0x00024cd3) list_set_graphic_pane_t1_copy1_ParamLimits

0x8e96,	// (0x00024cd3) list_set_graphic_pane_t1_copy1

0xc022,	// (0x00027e5f) rs_clock_indi_pane_g1

0xf029,	// (0x0002ae66) rs_clock_indi_pane_t1

0xf037,	// (0x0002ae74) rs_indi_pane

0xf03f,	// (0x0002ae7c) rs_indi_pane_g1

0xf048,	// (0x0002ae85) rs_indi_pane_g2

0xf051,	// (0x0002ae8e) rs_indi_pane_g3

0x0002,

0xfeac,	// (0x0002bce9) rs_indi_pane_g

0x9181,	// (0x00024fbe) bg_popup_preview_window_pane_cp03

0xf05a,	// (0x0002ae97) popup_fep_tooltip_window_t1

0xccc2,	// (0x00028aff) popup_note2_window_g2_ParamLimits

0xccc2,	// (0x00028aff) popup_note2_window_g2

0x0001,

0xfc39,	// (0x0002ba76) popup_note2_window_g_ParamLimits

0xfc39,	// (0x0002ba76) popup_note2_window_g

0xd1bd,	// (0x00028ffa) bg_popup_sub_pane_cp11_ParamLimits

0xd1ca,	// (0x00029007) cell_ai3_links_pane_g1_ParamLimits

0xd1e1,	// (0x0002901e) cell_ai3_links_pane_t1

0x44da,	// (0x00020317) set_text_pane_t1_copy1_ParamLimits

0x9089,	// (0x00024ec6) cell_graphic_popup_pane_cp2_ParamLimits

0x9089,	// (0x00024ec6) cell_graphic_popup_pane_cp2

0xf068,	// (0x0002aea5) cell_graphic_popup_pane_g1_cp2

0x820a,	// (0x00024047) cell_graphic_popup_pane_g2_cp2

0xf070,	// (0x0002aead) cell_graphic_popup_pane_g3_cp2

0xf078,	// (0x0002aeb5) cell_graphic_popup_pane_t2_cp2

0x821b,	// (0x00024058) grid_highlight_pane_cp3_cp2

0x886f,	// (0x000246ac) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x84bf,	// (0x000242fc) main_tmo_pane_ParamLimits

0xd517,	// (0x00029354) popup_tmo_big_image_note_window

0xe6da,	// (0x0002a517) cell_ai5_widget_list_pane

0xe6e2,	// (0x0002a51f) cell_ai5_widget_lrg_icon_pane

0xecb1,	// (0x0002aaee) tmo_note_info_pane_t1_ParamLimits

0xecc6,	// (0x0002ab03) tmo_note_info_pane_t2_ParamLimits

0xecdb,	// (0x0002ab18) tmo_note_info_pane_t3_ParamLimits

0xecf0,	// (0x0002ab2d) tmo_note_info_pane_t4_ParamLimits

0xed02,	// (0x0002ab3f) tmo_note_info_pane_t5_ParamLimits

0xfe9a,	// (0x0002bcd7) tmo_note_info_pane_t_ParamLimits

0xee20,	// (0x0002ac5d) settings_container_pane_ParamLimits

0xeff1,	// (0x0002ae2e) indicator_popup_pane_cp5

0xeff1,	// (0x0002ae2e) indicator_popup_pane_cp6

0xb534,	// (0x00027371) list_set_graphic_pane_copy1_ParamLimits

0x316f,	// (0x0001efac) bg_popup_window_pane_cp23

0xf086,	// (0x0002aec3) popup_tmo_big_image_note_window_g1

0xf090,	// (0x0002aecd) popup_tmo_big_image_note_window_t1

0xf0a0,	// (0x0002aedd) popup_tmo_big_image_note_window_t2

0xf0b0,	// (0x0002aeed) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb3,	// (0x0002bcf0) popup_tmo_big_image_note_window_t

0xc022,	// (0x00027e5f) cell_ai5_widget_lrg_icon_pane_g1

0xf0c0,	// (0x0002aefd) cell_ai5_widget_lrg_icon_pane_t1

0xf0ce,	// (0x0002af0b) cell_ai5_widget_list_row_pane_ParamLimits

0xf0ce,	// (0x0002af0b) cell_ai5_widget_list_row_pane

0xf0e5,	// (0x0002af22) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0e5,	// (0x0002af22) cell_ai5_widget_list_row_pane_g1

0xf0f2,	// (0x0002af2f) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0f2,	// (0x0002af2f) cell_ai5_widget_list_row_pane_t1

0xf123,	// (0x0002af60) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf123,	// (0x0002af60) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeba,	// (0x0002bcf7) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeba,	// (0x0002bcf7) cell_ai5_widget_list_row_pane_t

0x316f,	// (0x0001efac) main_fep_vtchi_ss_pane

0xf173,	// (0x0002afb0) popup_fep_char_pre_window

0xf17b,	// (0x0002afb8) popup_fep_ituss_window

0xf1a7,	// (0x0002afe4) popup_fep_vkbss_window

0x94a5,	// (0x000252e2) grid_vkbss_keypad_pane_ParamLimits

0x94a5,	// (0x000252e2) grid_vkbss_keypad_pane

0xf1e7,	// (0x0002b024) ituss_keypad_pane

0x7944,	// (0x00023781) aid_vkbss_key_offset_ParamLimits

0x7944,	// (0x00023781) aid_vkbss_key_offset

0x7950,	// (0x0002378d) cell_vkbss_key_pane_ParamLimits

0x7950,	// (0x0002378d) cell_vkbss_key_pane

0xf1f3,	// (0x0002b030) bg_cell_vkbss_key_g1_ParamLimits

0xf1f3,	// (0x0002b030) bg_cell_vkbss_key_g1

0xf1ff,	// (0x0002b03c) cell_vkbss_key_3p_pane_ParamLimits

0xf1ff,	// (0x0002b03c) cell_vkbss_key_3p_pane

0xf235,	// (0x0002b072) cell_vkbss_key_g1_ParamLimits

0xf235,	// (0x0002b072) cell_vkbss_key_g1

0xf26b,	// (0x0002b0a8) cell_vkbss_key_t1_ParamLimits

0xf26b,	// (0x0002b0a8) cell_vkbss_key_t1

0x79ae,	// (0x000237eb) cell_ituss_key_pane_ParamLimits

0x79ae,	// (0x000237eb) cell_ituss_key_pane

0xf2c7,	// (0x0002b104) bg_cell_ituss_key_g1_ParamLimits

0xf2c7,	// (0x0002b104) bg_cell_ituss_key_g1

0xf2d3,	// (0x0002b110) cell_ituss_key_pane_g1_ParamLimits

0xf2d3,	// (0x0002b110) cell_ituss_key_pane_g1

0x79bf,	// (0x000237fc) cell_ituss_key_pane_g2_ParamLimits

0x79bf,	// (0x000237fc) cell_ituss_key_pane_g2

0x0005,

0xfec1,	// (0x0002bcfe) cell_ituss_key_pane_g_ParamLimits

0xfec1,	// (0x0002bcfe) cell_ituss_key_pane_g

0x7a43,	// (0x00023880) cell_ituss_key_t1_ParamLimits

0x7a43,	// (0x00023880) cell_ituss_key_t1

0x7a7d,	// (0x000238ba) cell_ituss_key_t2_ParamLimits

0x7a7d,	// (0x000238ba) cell_ituss_key_t2

0x7aaf,	// (0x000238ec) cell_ituss_key_t3_ParamLimits

0x7aaf,	// (0x000238ec) cell_ituss_key_t3

0x7ae0,	// (0x0002391d) cell_ituss_key_t4_ParamLimits

0x7ae0,	// (0x0002391d) cell_ituss_key_t4

0x0004,

0xfece,	// (0x0002bd0b) cell_ituss_key_t_ParamLimits

0xfece,	// (0x0002bd0b) cell_ituss_key_t

0xf2f9,	// (0x0002b136) cell_vkbss_key_3p_pane_g1

0xf301,	// (0x0002b13e) cell_vkbss_key_3p_pane_g2

0xf309,	// (0x0002b146) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed9,	// (0x0002bd16) cell_vkbss_key_3p_pane_g

0x9181,	// (0x00024fbe) bg_popup_fep_char_preview_window_cp02

0xf311,	// (0x0002b14e) popup_fep_char_pre_window_t1

0xe663,	// (0x0002a4a0) main_ai5_sk_pane

0xed7c,	// (0x0002abb9) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed88,	// (0x0002abc5) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc702,	// (0x0002853f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed9d,	// (0x0002abda) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea5,	// (0x0002bce2) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeda9,	// (0x0002abe6) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x84bf,	// (0x000242fc) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf31f,	// (0x0002b15c) main_ai5_sk_pane_g1

0x9e97,	// (0x00025cd4) popup_query_code_window_g1

0xf191,	// (0x0002afce) popup_fep_vkb_icf_pane

0xf1be,	// (0x0002affb) popup_fep_vtchi_icf_pane

0xf328,	// (0x0002b165) bg_icf_pane

0xf328,	// (0x0002b165) list_vkb_icf_pane

0xf334,	// (0x0002b171) bg_icf_pane_cp01

0xf347,	// (0x0002b184) vtchi_icf_list_pane

0xf3a7,	// (0x0002b1e4) list_vkb_icf_pane_t1_ParamLimits

0xf3a7,	// (0x0002b1e4) list_vkb_icf_pane_t1

0xf3c5,	// (0x0002b202) vtchi_icf_list_pane_t1_ParamLimits

0xf3c5,	// (0x0002b202) vtchi_icf_list_pane_t1

0xf17b,	// (0x0002afb8) popup_fep_ituss_window_ParamLimits

0xf1be,	// (0x0002affb) popup_fep_vtchi_icf_pane_ParamLimits

0xf1e7,	// (0x0002b024) ituss_keypad_pane_ParamLimits

0x793a,	// (0x00023777) ituss_sks_pane

0xf328,	// (0x0002b165) bg_icf_pane_ParamLimits

0xf14b,	// (0x0002af88) icf_edit_indi_pane_ParamLimits

0xf14b,	// (0x0002af88) icf_edit_indi_pane

0xf328,	// (0x0002b165) list_vkb_icf_pane_ParamLimits

0xf334,	// (0x0002b171) bg_icf_pane_cp01_ParamLimits

0xf166,	// (0x0002afa3) icf_edit_indi_pane_cp01_ParamLimits

0xf166,	// (0x0002afa3) icf_edit_indi_pane_cp01

0xf347,	// (0x0002b184) vtchi_query_pane

0xe4df,	// (0x0002a31c) icf_edit_indi_pane_g1_ParamLimits

0xe4df,	// (0x0002a31c) icf_edit_indi_pane_g1

0xf43a,	// (0x0002b277) icf_edit_indi_pane_g2_ParamLimits

0xf43a,	// (0x0002b277) icf_edit_indi_pane_g2

0x0001,

0xff04,	// (0x0002bd41) icf_edit_indi_pane_g_ParamLimits

0xff04,	// (0x0002bd41) icf_edit_indi_pane_g

0xf44e,	// (0x0002b28b) icf_edit_indi_pane_t1

0xf3e3,	// (0x0002b220) bg_input_focus_pane_cp042

0x83ee,	// (0x0002422b) vtchi_button_pane

0xf3ec,	// (0x0002b229) vtchi_query_pane_t1

0xf3fa,	// (0x0002b237) vtchi_query_pane_t2

0xf408,	// (0x0002b245) vtchi_query_pane_t3

0x0002,

0xfef3,	// (0x0002bd30) vtchi_query_pane_t

0x316f,	// (0x0001efac) bg_button_pane_cp13

0xf416,	// (0x0002b253) vtchi_button_pane_g1

0x7b23,	// (0x00023960) ituss_sks_pane_g1

0x7b2e,	// (0x0002396b) ituss_sks_pane_g2

0x0001,

0xfefa,	// (0x0002bd37) ituss_sks_pane_g

0xf41e,	// (0x0002b25b) ituss_sks_pane_t1

0xf42c,	// (0x0002b269) ituss_sks_pane_t2

0x0001,

0xfeff,	// (0x0002bd3c) ituss_sks_pane_t

0xbaa4,	// (0x000278e1) indicator_nsta_pane_cp_g1

0xbaad,	// (0x000278ea) indicator_nsta_pane_cp_g2

0xbab5,	// (0x000278f2) indicator_nsta_pane_cp_g3

0xbabd,	// (0x000278fa) indicator_nsta_pane_cp_g4

0xbaad,	// (0x000278ea) indicator_nsta_pane_cp_g5

0xbab5,	// (0x000278f2) indicator_nsta_pane_cp_g6

0x0005,

0xfa83,	// (0x0002b8c0) indicator_nsta_pane_cp_g

0xe21a,	// (0x0002a057) cell_graphic2_pane_t2_ParamLimits

0xe21a,	// (0x0002a057) cell_graphic2_pane_t2

0x0001,

0xfd90,	// (0x0002bbcd) cell_graphic2_pane_t_ParamLimits

0xfd90,	// (0x0002bbcd) cell_graphic2_pane_t

0xe246,	// (0x0002a083) cell_graphic2_control_pane_t1

0x8c2e,	// (0x00024a6b) signal_pane_g3_ParamLimits

0x8c2e,	// (0x00024a6b) signal_pane_g3

0x8c40,	// (0x00024a7d) signal_pane_g4_ParamLimits

0x8c40,	// (0x00024a7d) signal_pane_g4

0xf135,	// (0x0002af72) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf135,	// (0x0002af72) cell_ai5_widget_list_row_pane_t3

0xf2e7,	// (0x0002b124) cell_ituss_key_pane_t1_ParamLimits

0xf2e7,	// (0x0002b124) cell_ituss_key_pane_t1

0x9ad4,	// (0x00025911) form_field_data_wide_pane_vc_t2_ParamLimits

0x9ad4,	// (0x00025911) form_field_data_wide_pane_vc_t2

0x9ae8,	// (0x00025925) form_field_data_wide_pane_vc_t3_ParamLimits

0x9ae8,	// (0x00025925) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x0002b621) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x0002b621) form_field_data_wide_pane_vc_t

0xb74e,	// (0x0002758b) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb74e,	// (0x0002758b) form_field_slider_wide_pane_vc_t3

0xb82c,	// (0x00027669) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb82c,	// (0x00027669) form_field_popup_wide_pane_vc_t2

0xb843,	// (0x00027680) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb843,	// (0x00027680) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa72,	// (0x0002b8af) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0002b8af) form_field_popup_wide_pane_vc_t

0x7702,	// (0x0002353f) aid_fshwr2_btn_pane_ParamLimits

0x7712,	// (0x0002354f) aid_fshwr2_syb_pane_ParamLimits

0x7726,	// (0x00023563) aid_fshwr2_txt_pane_ParamLimits

0x84bf,	// (0x000242fc) fshwr2_bg_pane_ParamLimits

0x7736,	// (0x00023573) fshwr2_func_candi_pane_ParamLimits

0x775a,	// (0x00023597) fshwr2_hwr_syb_pane_ParamLimits

0x7774,	// (0x000235b1) fshwr2_icf_pane_ParamLimits

0x523c,	// (0x00021079) list_double_graphic_pane_vc_g4_ParamLimits

0x523c,	// (0x00021079) list_double_graphic_pane_vc_g4

0x79df,	// (0x0002381c) cell_ituss_key_pane_g3_ParamLimits

0x79df,	// (0x0002381c) cell_ituss_key_pane_g3

0x7b11,	// (0x0002394e) cell_ituss_key_t5_ParamLimits

0x7b11,	// (0x0002394e) cell_ituss_key_t5

0xf1a7,	// (0x0002afe4) popup_fep_vkbss_window_ParamLimits

0xe66d,	// (0x0002a4aa) aid_cell_ai5_quarter

0xf44e,	// (0x0002b28b) icf_edit_indi_pane_t1_ParamLimits

0x7f63,	// (0x00023da0) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x7f63,	// (0x00023da0) aid_tch_indicator_popup_pane_cp2

0x7f76,	// (0x00023db3) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x7f76,	// (0x00023db3) aid_tch_query_popup_data_pane_cp2

0x9e3f,	// (0x00025c7c) aid_tch_query_popup_pane_ParamLimits

0x9e3f,	// (0x00025c7c) aid_tch_query_popup_pane

0x9e3f,	// (0x00025c7c) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9e3f,	// (0x00025c7c) aid_tch_query_popup_data_pane_cp1

0x94a5,	// (0x000252e2) cell_fshwr2_syb_bg_pane_ParamLimits

0x7866,	// (0x000236a3) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x787a,	// (0x000236b7) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf191,	// (0x0002afce) popup_fep_vkb_icf_pane_ParamLimits

0x7550,	// (0x0002338d) bg_popup_fep_char_preview_window_g10

0xe7a2,	// (0x0002a5df) cell_ai5_widget_pane_g11_ParamLimits

0xe7a2,	// (0x0002a5df) cell_ai5_widget_pane_g11

0xe7ae,	// (0x0002a5eb) cell_ai5_widget_pane_g12_ParamLimits

0xe7ae,	// (0x0002a5eb) cell_ai5_widget_pane_g12

0xe7ba,	// (0x0002a5f7) cell_ai5_widget_pane_g13_ParamLimits

0xe7ba,	// (0x0002a5f7) cell_ai5_widget_pane_g13

0xe8e9,	// (0x0002a726) cell_ai5_widget_pane_t11_ParamLimits

0xe8e9,	// (0x0002a726) cell_ai5_widget_pane_t11

0xe8fb,	// (0x0002a738) cell_ai5_widget_pane_t12_ParamLimits

0xe8fb,	// (0x0002a738) cell_ai5_widget_pane_t12

0x79eb,	// (0x00023828) cell_ituss_key_pane_g4_ParamLimits

0x79eb,	// (0x00023828) cell_ituss_key_pane_g4

0x7a07,	// (0x00023844) cell_ituss_key_pane_g5_ParamLimits

0x7a07,	// (0x00023844) cell_ituss_key_pane_g5

0x7a23,	// (0x00023860) cell_ituss_key_pane_g6_ParamLimits

0x7a23,	// (0x00023860) cell_ituss_key_pane_g6

0x99cf,	// (0x0002580c) bg_icf_pane_g1

0xf34f,	// (0x0002b18c) bg_icf_pane_g2

0xf35b,	// (0x0002b198) bg_icf_pane_g3

0xf365,	// (0x0002b1a2) bg_icf_pane_g4

0xf371,	// (0x0002b1ae) bg_icf_pane_g5

0xf37b,	// (0x0002b1b8) bg_icf_pane_g6

0xf387,	// (0x0002b1c4) bg_icf_pane_g7

0xf391,	// (0x0002b1ce) bg_icf_pane_g8

0xf39d,	// (0x0002b1da) bg_icf_pane_g9

0x0008,

0xfee0,	// (0x0002bd1d) bg_icf_pane_g

0xf1d4,	// (0x0002b011) popup_hyb_candi_window_ParamLimits

0xf1d4,	// (0x0002b011) popup_hyb_candi_window

0x9a43,	// (0x00025880) bg_popup_sub_pane_cp01_ParamLimits

0x9a43,	// (0x00025880) bg_popup_sub_pane_cp01

0xf467,	// (0x0002b2a4) entry_hyb_candi_pane_ParamLimits

0xf467,	// (0x0002b2a4) entry_hyb_candi_pane

0xf476,	// (0x0002b2b3) grid_hyb_candi_pane_ParamLimits

0xf476,	// (0x0002b2b3) grid_hyb_candi_pane

0xf48b,	// (0x0002b2c8) grid_hyb_phrase_pane_ParamLimits

0xf48b,	// (0x0002b2c8) grid_hyb_phrase_pane

0xf49a,	// (0x0002b2d7) cell_hyb_candi_pane_ParamLimits

0xf49a,	// (0x0002b2d7) cell_hyb_candi_pane

0xf4bd,	// (0x0002b2fa) cell_hyb_candi_scroll_pane

0x8b54,	// (0x00024991) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0002b303) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0002b311) cell_hyb_phrase_pane

0x8b54,	// (0x00024991) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0002b31a) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0002b328) entry_hyb_candi_pane_t1

0x9181,	// (0x00024fbe) input_focus_pane_cp06

0xf4f9,	// (0x0002b336) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0002b33e) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0002b346) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0002b34e) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0002b356) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0002b35e) cell_hyb_candi_scroll_pane_g4
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
	&TextLineVCR,
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
	&ParameterLimitsV,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small
