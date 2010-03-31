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

#include "aknlayoutscalable_elaf_pvp4_av_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0001f0b5 };

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
0x617d,	// (0x00025232) Screen

0x6189,	// (0x0002523e) application_window_ParamLimits

0x6189,	// (0x0002523e) application_window

0x0a8c,	// (0x0001fb41) screen_g1

0x61e5,	// (0x0002529a) area_bottom_pane_ParamLimits

0x61e5,	// (0x0002529a) area_bottom_pane

0x62a5,	// (0x0002535a) area_top_pane_ParamLimits

0x62a5,	// (0x0002535a) area_top_pane

0x6339,	// (0x000253ee) main_pane_ParamLimits

0x6339,	// (0x000253ee) main_pane

0x0a96,	// (0x0001fb4b) misc_graphics

0x7ee6,	// (0x00026f9b) battery_pane_ParamLimits

0x7ee6,	// (0x00026f9b) battery_pane

0x9d6c,	// (0x00028e21) bg_status_flat_pane_g8

0x9d74,	// (0x00028e29) bg_status_flat_pane_g9

0x7fae,	// (0x00027063) context_pane_ParamLimits

0x7fae,	// (0x00027063) context_pane

0x80d2,	// (0x00027187) navi_pane_ParamLimits

0x80d2,	// (0x00027187) navi_pane

0x8162,	// (0x00027217) signal_pane_ParamLimits

0x8162,	// (0x00027217) signal_pane

0x0008,

0xf87a,	// (0x0002e92f) bg_status_flat_pane_g

0x81cf,	// (0x00027284) status_pane_g1_ParamLimits

0x81cf,	// (0x00027284) status_pane_g1

0x81e3,	// (0x00027298) status_pane_g2_ParamLimits

0x81e3,	// (0x00027298) status_pane_g2

0x81ef,	// (0x000272a4) status_pane_g3_ParamLimits

0x81ef,	// (0x000272a4) status_pane_g3

0x0004,

0xf7a1,	// (0x0002e856) status_pane_g_ParamLimits

0xf7a1,	// (0x0002e856) status_pane_g

0x8223,	// (0x000272d8) title_pane_ParamLimits

0x8223,	// (0x000272d8) title_pane

0x8260,	// (0x00027315) uni_indicator_pane_ParamLimits

0x8260,	// (0x00027315) uni_indicator_pane

0x77cf,	// (0x00026884) bg_list_pane_ParamLimits

0x77cf,	// (0x00026884) bg_list_pane

0x77ef,	// (0x000268a4) find_pane

0x77f7,	// (0x000268ac) listscroll_app_pane_ParamLimits

0x77f7,	// (0x000268ac) listscroll_app_pane

0x7803,	// (0x000268b8) listscroll_form_pane

0x780b,	// (0x000268c0) listscroll_gen_pane_ParamLimits

0x780b,	// (0x000268c0) listscroll_gen_pane

0x781f,	// (0x000268d4) listscroll_set_pane

0x698c,	// (0x00025a41) main_idle_act_pane

0x72c4,	// (0x00026379) main_idle_trad_pane

0x72c4,	// (0x00026379) main_list_empty_pane

0x7839,	// (0x000268ee) main_midp_pane

0x7845,	// (0x000268fa) main_pane_g1_ParamLimits

0x7845,	// (0x000268fa) main_pane_g1

0x7853,	// (0x00026908) popup_ai_message_window_ParamLimits

0x7853,	// (0x00026908) popup_ai_message_window

0x7907,	// (0x000269bc) popup_fep_china_uni_window_ParamLimits

0x7907,	// (0x000269bc) popup_fep_china_uni_window

0x7967,	// (0x00026a1c) popup_fep_japan_candidate_window_ParamLimits

0x7967,	// (0x00026a1c) popup_fep_japan_candidate_window

0x7991,	// (0x00026a46) popup_fep_japan_predictive_window_ParamLimits

0x7991,	// (0x00026a46) popup_fep_japan_predictive_window

0x79c7,	// (0x00026a7c) popup_find_window

0x79d4,	// (0x00026a89) popup_grid_graphic_window_ParamLimits

0x79d4,	// (0x00026a89) popup_grid_graphic_window

0x7a02,	// (0x00026ab7) popup_large_graphic_colour_window

0x7a28,	// (0x00026add) popup_menu_window_ParamLimits

0x7a28,	// (0x00026add) popup_menu_window

0x7bf2,	// (0x00026ca7) popup_note_image_window

0x7bdc,	// (0x00026c91) popup_note_wait_window_ParamLimits

0x7bdc,	// (0x00026c91) popup_note_wait_window

0x7bdc,	// (0x00026c91) popup_note_window_ParamLimits

0x7bdc,	// (0x00026c91) popup_note_window

0x7c58,	// (0x00026d0d) popup_query_code_window_ParamLimits

0x7c58,	// (0x00026d0d) popup_query_code_window

0x7c6e,	// (0x00026d23) popup_query_data_code_window_ParamLimits

0x7c6e,	// (0x00026d23) popup_query_data_code_window

0x7c91,	// (0x00026d46) popup_query_data_window_ParamLimits

0x7c91,	// (0x00026d46) popup_query_data_window

0x7cb3,	// (0x00026d68) popup_query_sat_info_window_ParamLimits

0x7cb3,	// (0x00026d68) popup_query_sat_info_window

0x7cf2,	// (0x00026da7) popup_snote_single_graphic_window_ParamLimits

0x7cf2,	// (0x00026da7) popup_snote_single_graphic_window

0x7cf2,	// (0x00026da7) popup_snote_single_text_window_ParamLimits

0x7cf2,	// (0x00026da7) popup_snote_single_text_window

0x7d09,	// (0x00026dbe) popup_sub_window_general

0x7e4f,	// (0x00026f04) popup_window_general_ParamLimits

0x7e4f,	// (0x00026f04) popup_window_general

0x7e68,	// (0x00026f1d) power_save_pane

0x762e,	// (0x000266e3) control_pane_g1_ParamLimits

0x762e,	// (0x000266e3) control_pane_g1

0x7657,	// (0x0002670c) control_pane_g2_ParamLimits

0x7657,	// (0x0002670c) control_pane_g2

0x767c,	// (0x00026731) control_pane_g3_ParamLimits

0x767c,	// (0x00026731) control_pane_g3

0x0007,

0xf789,	// (0x0002e83e) control_pane_g_ParamLimits

0xf789,	// (0x0002e83e) control_pane_g

0x76d4,	// (0x00026789) control_pane_t1_ParamLimits

0x76d4,	// (0x00026789) control_pane_t1

0x7720,	// (0x000267d5) control_pane_t2_ParamLimits

0x7720,	// (0x000267d5) control_pane_t2

0x0002,

0xf79a,	// (0x0002e84f) control_pane_t_ParamLimits

0xf79a,	// (0x0002e84f) control_pane_t

0x754f,	// (0x00026604) navi_navi_volume_pane_cp1

0x7558,	// (0x0002660d) status_small_icon_pane

0x7560,	// (0x00026615) status_small_pane_g1_ParamLimits

0x7560,	// (0x00026615) status_small_pane_g1

0x7594,	// (0x00026649) status_small_pane_g2_ParamLimits

0x7594,	// (0x00026649) status_small_pane_g2

0x75a0,	// (0x00026655) status_small_pane_g3_ParamLimits

0x75a0,	// (0x00026655) status_small_pane_g3

0x75ac,	// (0x00026661) status_small_pane_g4_ParamLimits

0x75ac,	// (0x00026661) status_small_pane_g4

0x75b8,	// (0x0002666d) status_small_pane_g5_ParamLimits

0x75b8,	// (0x0002666d) status_small_pane_g5

0x75c7,	// (0x0002667c) status_small_pane_g6_ParamLimits

0x75c7,	// (0x0002667c) status_small_pane_g6

0x0007,

0xf778,	// (0x0002e82d) status_small_pane_g_ParamLimits

0xf778,	// (0x0002e82d) status_small_pane_g

0x75f7,	// (0x000266ac) status_small_pane_t1

0x761a,	// (0x000266cf) status_small_wait_pane_ParamLimits

0x761a,	// (0x000266cf) status_small_wait_pane

0x6cff,	// (0x00025db4) aid_levels_signal_ParamLimits

0x6cff,	// (0x00025db4) aid_levels_signal

0x6d11,	// (0x00025dc6) signal_pane_g1_ParamLimits

0x6d11,	// (0x00025dc6) signal_pane_g1

0x6d26,	// (0x00025ddb) signal_pane_g2_ParamLimits

0x6d26,	// (0x00025ddb) signal_pane_g2

0x0003,

0xf709,	// (0x0002e7be) signal_pane_g_ParamLimits

0xf709,	// (0x0002e7be) signal_pane_g

0x324e,	// (0x00022303) context_pane_g1

0x6598,	// (0x0002564d) title_pane_g1

0x65b6,	// (0x0002566b) title_pane_t1

0x0ab8,	// (0x0001fb6d) title_pane_t2

0x0ade,	// (0x0001fb93) title_pane_t3

0x0002,

0xf55d,	// (0x0002e612) title_pane_t

0x8278,	// (0x0002732d) aid_levels_battery_ParamLimits

0x8278,	// (0x0002732d) aid_levels_battery

0x828c,	// (0x00027341) battery_pane_g1_ParamLimits

0x828c,	// (0x00027341) battery_pane_g1

0x82a2,	// (0x00027357) battery_pane_g2_ParamLimits

0x82a2,	// (0x00027357) battery_pane_g2

0x0001,

0xf7ac,	// (0x0002e861) battery_pane_g_ParamLimits

0xf7ac,	// (0x0002e861) battery_pane_g

0xa6b6,	// (0x0002976b) uni_indicator_pane_g1

0xa6cd,	// (0x00029782) uni_indicator_pane_g2

0xa6e3,	// (0x00029798) uni_indicator_pane_g3

0x0005,

0xf922,	// (0x0002e9d7) uni_indicator_pane_g

0x7132,	// (0x000261e7) navi_icon_pane_ParamLimits

0x7132,	// (0x000261e7) navi_icon_pane

0x7079,	// (0x0002612e) navi_midp_pane

0x714e,	// (0x00026203) navi_navi_pane

0x7158,	// (0x0002620d) navi_text_pane_ParamLimits

0x7158,	// (0x0002620d) navi_text_pane

0x0a8c,	// (0x0001fb41) status_small_wait_pane_g1

0x28b8,	// (0x0002196d) status_small_wait_pane_g2

0x0001,

0xf91d,	// (0x0002e9d2) status_small_wait_pane_g

0xa3c9,	// (0x0002947e) navi_navi_icon_text_pane

0xa3d1,	// (0x00029486) navi_navi_pane_g1_ParamLimits

0xa3d1,	// (0x00029486) navi_navi_pane_g1

0xa3e3,	// (0x00029498) navi_navi_pane_g2_ParamLimits

0xa3e3,	// (0x00029498) navi_navi_pane_g2

0x0001,

0xf8eb,	// (0x0002e9a0) navi_navi_pane_g_ParamLimits

0xf8eb,	// (0x0002e9a0) navi_navi_pane_g

0xa3f5,	// (0x000294aa) navi_navi_tabs_pane

0xa3fe,	// (0x000294b3) navi_navi_text_pane

0xa3c9,	// (0x0002947e) navi_navi_volume_pane

0xa3a5,	// (0x0002945a) navi_text_pane_t1

0xa399,	// (0x0002944e) navi_icon_pane_g1

0xa2ec,	// (0x000293a1) navi_navi_text_pane_t1

0x8652,	// (0x00027707) navi_navi_volume_pane_g1

0x865a,	// (0x0002770f) volume_small_pane

0xa252,	// (0x00029307) navi_navi_icon_text_pane_g1

0xa25a,	// (0x0002930f) navi_navi_icon_text_pane_t1

0x714e,	// (0x00026203) navi_tabs_2_long_pane

0x714e,	// (0x00026203) navi_tabs_2_pane

0x714e,	// (0x00026203) navi_tabs_3_long_pane

0x714e,	// (0x00026203) navi_tabs_3_pane

0x714e,	// (0x00026203) navi_tabs_4_pane

0x8632,	// (0x000276e7) tabs_2_active_pane_ParamLimits

0x8632,	// (0x000276e7) tabs_2_active_pane

0x8642,	// (0x000276f7) tabs_2_passive_pane_ParamLimits

0x8642,	// (0x000276f7) tabs_2_passive_pane

0x8600,	// (0x000276b5) tabs_3_active_pane_ParamLimits

0x8600,	// (0x000276b5) tabs_3_active_pane

0x8610,	// (0x000276c5) tabs_3_passive_pane_ParamLimits

0x8610,	// (0x000276c5) tabs_3_passive_pane

0x8621,	// (0x000276d6) tabs_3_passive_pane_cp_ParamLimits

0x8621,	// (0x000276d6) tabs_3_passive_pane_cp

0x85b4,	// (0x00027669) tabs_4_active_pane_ParamLimits

0x85b4,	// (0x00027669) tabs_4_active_pane

0x85c7,	// (0x0002767c) tabs_4_passive_pane_ParamLimits

0x85c7,	// (0x0002767c) tabs_4_passive_pane

0x85d8,	// (0x0002768d) tabs_4_passive_pane_cp_ParamLimits

0x85d8,	// (0x0002768d) tabs_4_passive_pane_cp

0x85e9,	// (0x0002769e) tabs_4_passive_pane_cp2_ParamLimits

0x85e9,	// (0x0002769e) tabs_4_passive_pane_cp2

0x8590,	// (0x00027645) tabs_2_long_active_pane_ParamLimits

0x8590,	// (0x00027645) tabs_2_long_active_pane

0x85a2,	// (0x00027657) tabs_2_long_passive_pane_ParamLimits

0x85a2,	// (0x00027657) tabs_2_long_passive_pane

0x8551,	// (0x00027606) tabs_3_long_active_pane_ParamLimits

0x8551,	// (0x00027606) tabs_3_long_active_pane

0x8564,	// (0x00027619) tabs_3_long_passive_pane_ParamLimits

0x8564,	// (0x00027619) tabs_3_long_passive_pane

0x857d,	// (0x00027632) tabs_3_long_passive_pane_cp_ParamLimits

0x857d,	// (0x00027632) tabs_3_long_passive_pane_cp

0x84f7,	// (0x000275ac) volume_small_pane_g1

0x8500,	// (0x000275b5) volume_small_pane_g2

0x8509,	// (0x000275be) volume_small_pane_g3

0x8512,	// (0x000275c7) volume_small_pane_g4

0x851b,	// (0x000275d0) volume_small_pane_g5

0x8524,	// (0x000275d9) volume_small_pane_g6

0x852d,	// (0x000275e2) volume_small_pane_g7

0x8536,	// (0x000275eb) volume_small_pane_g8

0x853f,	// (0x000275f4) volume_small_pane_g9

0x8548,	// (0x000275fd) volume_small_pane_g10

0x0009,

0xf8b7,	// (0x0002e96c) volume_small_pane_g

0x0afe,	// (0x0001fbb3) bg_active_tab_pane_cp2_ParamLimits

0x0afe,	// (0x0001fbb3) bg_active_tab_pane_cp2

0x661e,	// (0x000256d3) tabs_3_active_pane_g1

0x6626,	// (0x000256db) tabs_3_active_pane_t1

0x0afe,	// (0x0001fbb3) bg_passive_tab_pane_cp2_ParamLimits

0x0afe,	// (0x0001fbb3) bg_passive_tab_pane_cp2

0x661e,	// (0x000256d3) tabs_3_passive_pane_g1

0x6626,	// (0x000256db) tabs_3_passive_pane_t1

0x0afe,	// (0x0001fbb3) bg_active_tab_pane_cp3_ParamLimits

0x0afe,	// (0x0001fbb3) bg_active_tab_pane_cp3

0x6638,	// (0x000256ed) tabs_4_active_pane_g1

0x6640,	// (0x000256f5) tabs_4_active_pane_t1

0x0afe,	// (0x0001fbb3) bg_passive_tab_pane_cp3_ParamLimits

0x0afe,	// (0x0001fbb3) bg_passive_tab_pane_cp3

0x6638,	// (0x000256ed) tabs_4_1_passive_pane_g1

0x6640,	// (0x000256f5) tabs_4_1_passive_pane_t1

0x7839,	// (0x000268ee) list_highlight_pane_cp2

0xa932,	// (0x000299e7) list_set_pane_ParamLimits

0xa932,	// (0x000299e7) list_set_pane

0xa9fa,	// (0x00029aaf) main_pane_set_t1_ParamLimits

0xa9fa,	// (0x00029aaf) main_pane_set_t1

0xaa1a,	// (0x00029acf) main_pane_set_t2_ParamLimits

0xaa1a,	// (0x00029acf) main_pane_set_t2

0xaa2e,	// (0x00029ae3) main_pane_set_t3_ParamLimits

0xaa2e,	// (0x00029ae3) main_pane_set_t3

0xaa42,	// (0x00029af7) main_pane_set_t4_ParamLimits

0xaa42,	// (0x00029af7) main_pane_set_t4

0x0003,

0xf987,	// (0x0002ea3c) main_pane_set_t_ParamLimits

0xf987,	// (0x0002ea3c) main_pane_set_t

0xaa56,	// (0x00029b0b) setting_code_pane

0xaa60,	// (0x00029b15) setting_slider_graphic_pane

0xaa60,	// (0x00029b15) setting_slider_pane

0xaa60,	// (0x00029b15) setting_text_pane

0xaa60,	// (0x00029b15) setting_volume_pane

0x6652,	// (0x00025707) volume_set_pane

0x0afe,	// (0x0001fbb3) bg_set_opt_pane_cp

0x665c,	// (0x00025711) setting_slider_pane_t1

0x6675,	// (0x0002572a) setting_slider_pane_t2

0x668f,	// (0x00025744) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0002e619) setting_slider_pane_t

0x66a7,	// (0x0002575c) slider_set_pane

0x0a96,	// (0x0001fb4b) bg_set_opt_pane_cp2

0x0b0c,	// (0x0001fbc1) setting_slider_graphic_pane_g1

0x66bd,	// (0x00025772) setting_slider_graphic_pane_t1

0x66cd,	// (0x00025782) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0002e620) setting_slider_graphic_pane_t

0x66dd,	// (0x00025792) slider_set_pane_cp

0x0a96,	// (0x0001fb4b) input_focus_pane_cp1

0xa8f3,	// (0x000299a8) list_set_text_pane

0x0a8c,	// (0x0001fb41) setting_text_pane_g1

0x0a96,	// (0x0001fb4b) input_focus_pane_cp2

0x0a8c,	// (0x0001fb41) setting_code_pane_g1

0x0b15,	// (0x0001fbca) setting_code_pane_t1

0x50ca,	// (0x0002417f) set_text_pane_t1_ParamLimits

0x50ca,	// (0x0002417f) set_text_pane_t1

0x2d41,	// (0x00021df6) set_opt_bg_pane_g1

0x2d49,	// (0x00021dfe) set_opt_bg_pane_g2

0xa8cb,	// (0x00029980) set_opt_bg_pane_g3

0x2d59,	// (0x00021e0e) set_opt_bg_pane_g4

0x2d61,	// (0x00021e16) set_opt_bg_pane_g5

0x2d69,	// (0x00021e1e) set_opt_bg_pane_g6

0xa8d5,	// (0x0002998a) set_opt_bg_pane_g7

0xa8df,	// (0x00029994) set_opt_bg_pane_g8

0xa8e9,	// (0x0002999e) set_opt_bg_pane_g9

0x0008,

0xf974,	// (0x0002ea29) set_opt_bg_pane_g

0xa8be,	// (0x00029973) slider_set_pane_g1

0x86db,	// (0x00027790) slider_set_pane_g2

0x0006,

0xf965,	// (0x0002ea1a) slider_set_pane_g

0x8663,	// (0x00027718) volume_set_pane_g1

0x866d,	// (0x00027722) volume_set_pane_g2

0x8677,	// (0x0002772c) volume_set_pane_g3

0x8681,	// (0x00027736) volume_set_pane_g4

0x868b,	// (0x00027740) volume_set_pane_g5

0x8695,	// (0x0002774a) volume_set_pane_g6

0x869f,	// (0x00027754) volume_set_pane_g7

0x86a9,	// (0x0002775e) volume_set_pane_g8

0x86b3,	// (0x00027768) volume_set_pane_g9

0x86bd,	// (0x00027772) volume_set_pane_g10

0x0009,

0xf93d,	// (0x0002e9f2) volume_set_pane_g

0x66e5,	// (0x0002579a) indicator_pane_ParamLimits

0x66e5,	// (0x0002579a) indicator_pane

0x66f1,	// (0x000257a6) main_idle_pane_g2_ParamLimits

0x66f1,	// (0x000257a6) main_idle_pane_g2

0x6719,	// (0x000257ce) main_pane_idle_g1_ParamLimits

0x6719,	// (0x000257ce) main_pane_idle_g1

0x0b3d,	// (0x0001fbf2) popup_clock_digital_analogue_window_ParamLimits

0x0b3d,	// (0x0001fbf2) popup_clock_digital_analogue_window

0x6727,	// (0x000257dc) soft_indicator_pane_ParamLimits

0x6727,	// (0x000257dc) soft_indicator_pane

0x6735,	// (0x000257ea) wallpaper_pane_ParamLimits

0x6735,	// (0x000257ea) wallpaper_pane

0x0a8c,	// (0x0001fb41) wallpaper_pane_g1

0x6741,	// (0x000257f6) indicator_pane_g1_ParamLimits

0x6741,	// (0x000257f6) indicator_pane_g1

0xad1a,	// (0x00029dcf) navi_navi_icon_text_pane_srt_g1

0x0b6b,	// (0x0001fc20) soft_indicator_pane_t1

0x264a,	// (0x000216ff) aid_ps_area_pane

0x674d,	// (0x00025802) aid_ps_clock_pane

0x265b,	// (0x00021710) aid_ps_indicator_pane

0x2667,	// (0x0002171c) indicator_ps_pane_ParamLimits

0x2667,	// (0x0002171c) indicator_ps_pane

0x2676,	// (0x0002172b) power_save_pane_g1_ParamLimits

0x2676,	// (0x0002172b) power_save_pane_g1

0x2682,	// (0x00021737) power_save_pane_g2_ParamLimits

0x2682,	// (0x00021737) power_save_pane_g2

0x6199,	// (0x0002524e) aid_navinavi_width_pane

0x264a,	// (0x000216ff) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0002e625) power_save_pane_g_ParamLimits

0xf570,	// (0x0002e625) power_save_pane_g

0x2690,	// (0x00021745) power_save_pane_t1_ParamLimits

0x2690,	// (0x00021745) power_save_pane_t1

0x674d,	// (0x00025802) aid_ps_clock_pane_ParamLimits

0x265b,	// (0x00021710) aid_ps_indicator_pane_ParamLimits

0x26a2,	// (0x00021757) power_save_pane_t4_ParamLimits

0x26a2,	// (0x00021757) power_save_pane_t4

0x0001,

0xf575,	// (0x0002e62a) power_save_pane_t_ParamLimits

0xf575,	// (0x0002e62a) power_save_pane_t

0x26cc,	// (0x00021781) power_save_t3_ParamLimits

0x26cc,	// (0x00021781) power_save_t3

0x26b7,	// (0x0002176c) power_save_t2_ParamLimits

0x26b7,	// (0x0002176c) power_save_t2

0x26e1,	// (0x00021796) indicator_ps_pane_g1

0x675b,	// (0x00025810) ai_gene_pane_ParamLimits

0x675b,	// (0x00025810) ai_gene_pane

0x6767,	// (0x0002581c) ai_links_pane_ParamLimits

0x6767,	// (0x0002581c) ai_links_pane

0x6773,	// (0x00025828) indicator_pane_cp1_ParamLimits

0x6773,	// (0x00025828) indicator_pane_cp1

0x677f,	// (0x00025834) main_pane_idle_g1_cp_ParamLimits

0x677f,	// (0x00025834) main_pane_idle_g1_cp

0x26ea,	// (0x0002179f) popup_ai_links_title_window

0x678b,	// (0x00025840) soft_indicator_pane_cp1_ParamLimits

0x678b,	// (0x00025840) soft_indicator_pane_cp1

0xa6a4,	// (0x00029759) ai_links_pane_g1

0xa6ad,	// (0x00029762) grid_ai_links_pane

0xa689,	// (0x0002973e) ai_gene_pane_1

0xa692,	// (0x00029747) ai_gene_pane_2

0xa69b,	// (0x00029750) list_highlight_pane_cp4

0xa669,	// (0x0002971e) cell_ai_link_pane_ParamLimits

0xa669,	// (0x0002971e) cell_ai_link_pane

0xa661,	// (0x00029716) cell_ai_link_pane_g1

0x28b8,	// (0x0002196d) cell_ai_link_pane_g2

0x0001,

0xf918,	// (0x0002e9cd) cell_ai_link_pane_g

0x0a96,	// (0x0001fb4b) grid_highlight_cp2

0x0a96,	// (0x0001fb4b) bg_popup_sub_pane_cp1

0x2701,	// (0x000217b6) popup_ai_links_title_window_t1

0xa5ad,	// (0x00029662) ai_gene_pane_1_g1_ParamLimits

0xa5ad,	// (0x00029662) ai_gene_pane_1_g1

0xa5b9,	// (0x0002966e) ai_gene_pane_1_g2_ParamLimits

0xa5b9,	// (0x0002966e) ai_gene_pane_1_g2

0x0001,

0xf90e,	// (0x0002e9c3) ai_gene_pane_1_g_ParamLimits

0xf90e,	// (0x0002e9c3) ai_gene_pane_1_g

0xa5c6,	// (0x0002967b) ai_gene_pane_1_t1_ParamLimits

0xa5c6,	// (0x0002967b) ai_gene_pane_1_t1

0xa5fa,	// (0x000296af) grid_ai_soft_ind_pane

0xa598,	// (0x0002964d) ai_gene_pane_2_t1_ParamLimits

0xa598,	// (0x0002964d) ai_gene_pane_2_t1

0x6797,	// (0x0002584c) main_pane_empty_t1_ParamLimits

0x6797,	// (0x0002584c) main_pane_empty_t1

0x67af,	// (0x00025864) main_pane_empty_t2_ParamLimits

0x67af,	// (0x00025864) main_pane_empty_t2

0x67c4,	// (0x00025879) main_pane_empty_t3_ParamLimits

0x67c4,	// (0x00025879) main_pane_empty_t3

0x67d6,	// (0x0002588b) main_pane_empty_t4_ParamLimits

0x67d6,	// (0x0002588b) main_pane_empty_t4

0x67e8,	// (0x0002589d) main_pane_empty_t5_ParamLimits

0x67e8,	// (0x0002589d) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0002e62f) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0002e62f) main_pane_empty_t

0x2dc1,	// (0x00021e76) bg_popup_window_pane_ParamLimits

0x2dc1,	// (0x00021e76) bg_popup_window_pane

0xa2fa,	// (0x000293af) find_popup_pane_cp2_ParamLimits

0xa2fa,	// (0x000293af) find_popup_pane_cp2

0xa306,	// (0x000293bb) heading_pane_ParamLimits

0xa306,	// (0x000293bb) heading_pane

0x0a96,	// (0x0001fb4b) bg_popup_sub_pane

0xa274,	// (0x00029329) bg_popup_window_pane_g1_ParamLimits

0xa274,	// (0x00029329) bg_popup_window_pane_g1

0xa280,	// (0x00029335) bg_popup_window_pane_g2_ParamLimits

0xa280,	// (0x00029335) bg_popup_window_pane_g2

0xa28c,	// (0x00029341) bg_popup_window_pane_g3_ParamLimits

0xa28c,	// (0x00029341) bg_popup_window_pane_g3

0xa298,	// (0x0002934d) bg_popup_window_pane_g4_ParamLimits

0xa298,	// (0x0002934d) bg_popup_window_pane_g4

0xa2a4,	// (0x00029359) bg_popup_window_pane_g5_ParamLimits

0xa2a4,	// (0x00029359) bg_popup_window_pane_g5

0xa2b0,	// (0x00029365) bg_popup_window_pane_g6_ParamLimits

0xa2b0,	// (0x00029365) bg_popup_window_pane_g6

0xa2bc,	// (0x00029371) bg_popup_window_pane_g7_ParamLimits

0xa2bc,	// (0x00029371) bg_popup_window_pane_g7

0xa2c8,	// (0x0002937d) bg_popup_window_pane_g8_ParamLimits

0xa2c8,	// (0x0002937d) bg_popup_window_pane_g8

0xa2d4,	// (0x00029389) bg_popup_window_pane_g9_ParamLimits

0xa2d4,	// (0x00029389) bg_popup_window_pane_g9

0xa2e0,	// (0x00029395) bg_popup_window_pane_g10_ParamLimits

0xa2e0,	// (0x00029395) bg_popup_window_pane_g10

0x0009,

0xf8d6,	// (0x0002e98b) bg_popup_window_pane_g_ParamLimits

0xf8d6,	// (0x0002e98b) bg_popup_window_pane_g

0xa209,	// (0x000292be) bg_popup_heading_pane_ParamLimits

0xa209,	// (0x000292be) bg_popup_heading_pane

0x8721,	// (0x000277d6) tabs_4_passive_pane_cp_srt_ParamLimits

0x8721,	// (0x000277d6) tabs_4_passive_pane_cp_srt

0x8733,	// (0x000277e8) tabs_4_passive_pane_srt_ParamLimits

0xa21d,	// (0x000292d2) heading_pane_g2

0x8733,	// (0x000277e8) tabs_4_passive_pane_srt

0x7839,	// (0x000268ee) bg_passive_tab_pane_cp3_srt_ParamLimits

0x7839,	// (0x000268ee) bg_passive_tab_pane_cp3_srt

0xa225,	// (0x000292da) heading_pane_t1_ParamLimits

0xa225,	// (0x000292da) heading_pane_t1

0xa23c,	// (0x000292f1) heading_pane_t2_ParamLimits

0xa23c,	// (0x000292f1) heading_pane_t2

0x0001,

0xf8d1,	// (0x0002e986) heading_pane_t_ParamLimits

0xf8d1,	// (0x0002e986) heading_pane_t

0x9d34,	// (0x00028de9) bg_popup_heading_pane_g1

0x9de3,	// (0x00028e98) bg_popup_heading_pane_g2

0x9ded,	// (0x00028ea2) bg_popup_heading_pane_g3

0x9df7,	// (0x00028eac) bg_popup_heading_pane_g4

0x9e01,	// (0x00028eb6) bg_popup_heading_pane_g5

0x9e0b,	// (0x00028ec0) bg_popup_heading_pane_g6

0x9e13,	// (0x00028ec8) bg_popup_heading_pane_g7

0x9e1b,	// (0x00028ed0) bg_popup_heading_pane_g8

0x9e25,	// (0x00028eda) bg_popup_heading_pane_g9

0x0008,

0xf88d,	// (0x0002e942) bg_popup_heading_pane_g

0x83aa,	// (0x0002745f) bg_popup_sub_pane_g1

0x83b2,	// (0x00027467) bg_popup_sub_pane_g2

0x83ba,	// (0x0002746f) bg_popup_sub_pane_g3

0x83c2,	// (0x00027477) bg_popup_sub_pane_g4

0x83ca,	// (0x0002747f) bg_popup_sub_pane_g5

0x83d2,	// (0x00027487) bg_popup_sub_pane_g6

0x83da,	// (0x0002748f) bg_popup_sub_pane_g7

0x83e2,	// (0x00027497) bg_popup_sub_pane_g8

0x83ea,	// (0x0002749f) bg_popup_sub_pane_g9

0x0008,

0xf867,	// (0x0002e91c) bg_popup_sub_pane_g

0x0af0,	// (0x0001fba5) bg_popup_window_pane_cp5_ParamLimits

0x0af0,	// (0x0001fba5) bg_popup_window_pane_cp5

0x271e,	// (0x000217d3) popup_note_window_g1_ParamLimits

0x271e,	// (0x000217d3) popup_note_window_g1

0x272a,	// (0x000217df) popup_note_window_t1_ParamLimits

0x272a,	// (0x000217df) popup_note_window_t1

0x2740,	// (0x000217f5) popup_note_window_t2_ParamLimits

0x2740,	// (0x000217f5) popup_note_window_t2

0x2756,	// (0x0002180b) popup_note_window_t3_ParamLimits

0x2756,	// (0x0002180b) popup_note_window_t3

0x276c,	// (0x00021821) popup_note_window_t4_ParamLimits

0x276c,	// (0x00021821) popup_note_window_t4

0x2794,	// (0x00021849) popup_note_window_t5_ParamLimits

0x2794,	// (0x00021849) popup_note_window_t5

0x0004,

0xf585,	// (0x0002e63a) popup_note_window_t_ParamLimits

0xf585,	// (0x0002e63a) popup_note_window_t

0x27b8,	// (0x0002186d) bg_popup_window_pane_cp6_ParamLimits

0x27b8,	// (0x0002186d) bg_popup_window_pane_cp6

0x9cb0,	// (0x00028d65) popup_note_image_window_g1_ParamLimits

0x9cb0,	// (0x00028d65) popup_note_image_window_g1

0x9cbc,	// (0x00028d71) popup_note_image_window_g2_ParamLimits

0x9cbc,	// (0x00028d71) popup_note_image_window_g2

0x0001,

0xf85b,	// (0x0002e910) popup_note_image_window_g_ParamLimits

0xf85b,	// (0x0002e910) popup_note_image_window_g

0x9cd5,	// (0x00028d8a) popup_note_image_window_t1_ParamLimits

0x9cd5,	// (0x00028d8a) popup_note_image_window_t1

0x9cee,	// (0x00028da3) popup_note_image_window_t2_ParamLimits

0x9cee,	// (0x00028da3) popup_note_image_window_t2

0x9d07,	// (0x00028dbc) popup_note_image_window_t3_ParamLimits

0x9d07,	// (0x00028dbc) popup_note_image_window_t3

0x0002,

0xf860,	// (0x0002e915) popup_note_image_window_t_ParamLimits

0xf860,	// (0x0002e915) popup_note_image_window_t

0x9b70,	// (0x00028c25) bg_popup_window_pane_cp7_ParamLimits

0x9b70,	// (0x00028c25) bg_popup_window_pane_cp7

0x9ba0,	// (0x00028c55) popup_note_wait_window_g1_ParamLimits

0x9ba0,	// (0x00028c55) popup_note_wait_window_g1

0x9bac,	// (0x00028c61) popup_note_wait_window_g2_ParamLimits

0x9bac,	// (0x00028c61) popup_note_wait_window_g2

0x0002,

0xf849,	// (0x0002e8fe) popup_note_wait_window_g_ParamLimits

0xf849,	// (0x0002e8fe) popup_note_wait_window_g

0x9bc4,	// (0x00028c79) popup_note_wait_window_t1_ParamLimits

0x9bc4,	// (0x00028c79) popup_note_wait_window_t1

0x9beb,	// (0x00028ca0) popup_note_wait_window_t2_ParamLimits

0x9beb,	// (0x00028ca0) popup_note_wait_window_t2

0x9c09,	// (0x00028cbe) popup_note_wait_window_t3_ParamLimits

0x9c09,	// (0x00028cbe) popup_note_wait_window_t3

0x9c1c,	// (0x00028cd1) popup_note_wait_window_t4_ParamLimits

0x9c1c,	// (0x00028cd1) popup_note_wait_window_t4

0x0004,

0xf850,	// (0x0002e905) popup_note_wait_window_t_ParamLimits

0xf850,	// (0x0002e905) popup_note_wait_window_t

0x9c41,	// (0x00028cf6) wait_bar_pane_ParamLimits

0x9c41,	// (0x00028cf6) wait_bar_pane

0x0a96,	// (0x0001fb4b) wait_anim_pane

0x0a96,	// (0x0001fb4b) wait_border_pane

0x0a8c,	// (0x0001fb41) wait_anim_pane_g1

0x0a8c,	// (0x0001fb41) wait_anim_pane_g2

0x0001,

0xf704,	// (0x0002e7b9) wait_anim_pane_g

0x9b14,	// (0x00028bc9) wait_border_pane_g1

0x9b1f,	// (0x00028bd4) wait_border_pane_g2

0x9b28,	// (0x00028bdd) wait_border_pane_g3

0x0002,

0xf842,	// (0x0002e8f7) wait_border_pane_g

0x997e,	// (0x00028a33) bg_popup_window_pane_cp16_ParamLimits

0x997e,	// (0x00028a33) bg_popup_window_pane_cp16

0x9a7e,	// (0x00028b33) indicator_popup_pane_cp4_ParamLimits

0x9a7e,	// (0x00028b33) indicator_popup_pane_cp4

0x9a92,	// (0x00028b47) popup_query_data_window_t1_ParamLimits

0x9a92,	// (0x00028b47) popup_query_data_window_t1

0x9aa4,	// (0x00028b59) popup_query_data_window_t2_ParamLimits

0x9aa4,	// (0x00028b59) popup_query_data_window_t2

0x9abd,	// (0x00028b72) popup_query_data_window_t3_ParamLimits

0x9abd,	// (0x00028b72) popup_query_data_window_t3

0x0002,

0xf83b,	// (0x0002e8f0) popup_query_data_window_t_ParamLimits

0xf83b,	// (0x0002e8f0) popup_query_data_window_t

0x9ad7,	// (0x00028b8c) query_popup_data_pane_ParamLimits

0x9ad7,	// (0x00028b8c) query_popup_data_pane

0x9aeb,	// (0x00028ba0) query_popup_data_pane_cp1_ParamLimits

0x9aeb,	// (0x00028ba0) query_popup_data_pane_cp1

0x997e,	// (0x00028a33) bg_popup_window_pane_cp10_ParamLimits

0x997e,	// (0x00028a33) bg_popup_window_pane_cp10

0x99b0,	// (0x00028a65) indicator_popup_pane_ParamLimits

0x99b0,	// (0x00028a65) indicator_popup_pane

0x99d2,	// (0x00028a87) popup_query_code_window_t1_ParamLimits

0x99d2,	// (0x00028a87) popup_query_code_window_t1

0x99ec,	// (0x00028aa1) popup_query_code_window_t2_ParamLimits

0x99ec,	// (0x00028aa1) popup_query_code_window_t2

0x9a35,	// (0x00028aea) popup_query_code_window_t3_ParamLimits

0x9a35,	// (0x00028aea) popup_query_code_window_t3

0x0002,

0xf834,	// (0x0002e8e9) popup_query_code_window_t_ParamLimits

0xf834,	// (0x0002e8e9) popup_query_code_window_t

0x9a64,	// (0x00028b19) query_popup_pane_ParamLimits

0x9a64,	// (0x00028b19) query_popup_pane

0x27b8,	// (0x0002186d) bg_popup_window_pane_cp15_ParamLimits

0x27b8,	// (0x0002186d) bg_popup_window_pane_cp15

0x27d8,	// (0x0002188d) indicator_popup_pane_cp1_ParamLimits

0x27d8,	// (0x0002188d) indicator_popup_pane_cp1

0x27eb,	// (0x000218a0) indicator_popup_pane_cp2_ParamLimits

0x27eb,	// (0x000218a0) indicator_popup_pane_cp2

0x2806,	// (0x000218bb) popup_query_data_code_window_g1_ParamLimits

0x2806,	// (0x000218bb) popup_query_data_code_window_g1

0x2819,	// (0x000218ce) popup_query_data_code_window_t1_ParamLimits

0x2819,	// (0x000218ce) popup_query_data_code_window_t1

0x282b,	// (0x000218e0) popup_query_data_code_window_t2_ParamLimits

0x282b,	// (0x000218e0) popup_query_data_code_window_t2

0x283d,	// (0x000218f2) popup_query_data_code_window_t3_ParamLimits

0x283d,	// (0x000218f2) popup_query_data_code_window_t3

0x2853,	// (0x00021908) popup_query_data_code_window_t4_ParamLimits

0x2853,	// (0x00021908) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0002e645) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0002e645) popup_query_data_code_window_t

0x70ee,	// (0x000261a3) list_single_midp_graphic_pane_g3

0x286d,	// (0x00021922) query_popup_data_pane_cp2_ParamLimits

0x2880,	// (0x00021935) query_popup_pane_cp2_ParamLimits

0x2880,	// (0x00021935) query_popup_pane_cp2

0x0a96,	// (0x0001fb4b) bg_popup_window_pane_cp11

0x9976,	// (0x00028a2b) heading_pane_cp5

0x2916,	// (0x000219cb) listscroll_popup_info_pane

0x0a96,	// (0x0001fb4b) input_focus_pane_cp3

0x289b,	// (0x00021950) query_popup_pane_t1

0x28a9,	// (0x0002195e) list_popup_info_pane_ParamLimits

0x28a9,	// (0x0002195e) list_popup_info_pane

0x28b8,	// (0x0002196d) listscroll_popup_info_pane_g1

0x28c0,	// (0x00021975) scroll_pane_cp7

0x28ca,	// (0x0002197f) popup_info_list_pane_t1_ParamLimits

0x28ca,	// (0x0002197f) popup_info_list_pane_t1

0x28e4,	// (0x00021999) popup_info_list_pane_t2_ParamLimits

0x28e4,	// (0x00021999) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0002e64e) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0002e64e) popup_info_list_pane_t

0x0a96,	// (0x0001fb4b) bg_popup_window_pane_cp12

0xad34,	// (0x00029de9) find_popup_pane

0x0afe,	// (0x0001fbb3) bg_popup_window_pane_cp3

0x28fe,	// (0x000219b3) heading_pane_cp3

0x290a,	// (0x000219bf) listscroll_popup_graphic_pane

0x0a96,	// (0x0001fb4b) bg_popup_window_pane_cp4

0x684a,	// (0x000258ff) heading_pane_cp4

0x2916,	// (0x000219cb) listscroll_popup_colour_pane

0x6854,	// (0x00025909) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6854,	// (0x00025909) cell_large_graphic_colour_none_popup_pane

0x6868,	// (0x0002591d) grid_large_graphic_colour_popup_pane_ParamLimits

0x6868,	// (0x0002591d) grid_large_graphic_colour_popup_pane

0x6894,	// (0x00025949) listscroll_popup_colour_pane_g1_ParamLimits

0x6894,	// (0x00025949) listscroll_popup_colour_pane_g1

0x68ab,	// (0x00025960) listscroll_popup_colour_pane_g2_ParamLimits

0x68ab,	// (0x00025960) listscroll_popup_colour_pane_g2

0x68c2,	// (0x00025977) listscroll_popup_colour_pane_g3_ParamLimits

0x68c2,	// (0x00025977) listscroll_popup_colour_pane_g3

0x68d2,	// (0x00025987) listscroll_popup_colour_pane_g4_ParamLimits

0x68d2,	// (0x00025987) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0002e653) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0002e653) listscroll_popup_colour_pane_g

0x291e,	// (0x000219d3) scroll_pane_cp6_ParamLimits

0x291e,	// (0x000219d3) scroll_pane_cp6

0x68e6,	// (0x0002599b) cell_large_graphic_colour_popup_pane_ParamLimits

0x68e6,	// (0x0002599b) cell_large_graphic_colour_popup_pane

0x2930,	// (0x000219e5) cell_large_graphic_colour_none_popup_pane_t1

0x0a96,	// (0x0001fb4b) grid_highlight_pane_cp5

0x293f,	// (0x000219f4) cell_large_graphic_colour_popup_pane_g1

0x2947,	// (0x000219fc) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0002e65c) cell_large_graphic_colour_popup_pane_g

0x294f,	// (0x00021a04) cell_large_graphic_colour_popup_pane_g2_copy1

0x2958,	// (0x00021a0d) grid_highlight_pane_cp4

0x2960,	// (0x00021a15) bg_popup_window_pane_cp8_ParamLimits

0x2960,	// (0x00021a15) bg_popup_window_pane_cp8

0x297b,	// (0x00021a30) popup_snote_single_text_window_g1_ParamLimits

0x297b,	// (0x00021a30) popup_snote_single_text_window_g1

0x298d,	// (0x00021a42) popup_snote_single_text_window_t1_ParamLimits

0x298d,	// (0x00021a42) popup_snote_single_text_window_t1

0x29a0,	// (0x00021a55) popup_snote_single_text_window_t2_ParamLimits

0x29a0,	// (0x00021a55) popup_snote_single_text_window_t2

0x29b3,	// (0x00021a68) popup_snote_single_text_window_t3_ParamLimits

0x29b3,	// (0x00021a68) popup_snote_single_text_window_t3

0x29ec,	// (0x00021aa1) popup_snote_single_text_window_t4_ParamLimits

0x29ec,	// (0x00021aa1) popup_snote_single_text_window_t4

0x2a20,	// (0x00021ad5) popup_snote_single_text_window_t5_ParamLimits

0x2a20,	// (0x00021ad5) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0002e661) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0002e661) popup_snote_single_text_window_t

0x2a4f,	// (0x00021b04) bg_popup_window_pane_cp9_ParamLimits

0x2a4f,	// (0x00021b04) bg_popup_window_pane_cp9

0x297b,	// (0x00021a30) popup_snote_single_graphic_window_g1_ParamLimits

0x297b,	// (0x00021a30) popup_snote_single_graphic_window_g1

0x2a5d,	// (0x00021b12) popup_snote_single_graphic_window_g2_ParamLimits

0x2a5d,	// (0x00021b12) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0002e66c) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0002e66c) popup_snote_single_graphic_window_g

0x2a69,	// (0x00021b1e) popup_snote_single_graphic_window_t1_ParamLimits

0x2a69,	// (0x00021b1e) popup_snote_single_graphic_window_t1

0x2a7c,	// (0x00021b31) popup_snote_single_graphic_window_t2_ParamLimits

0x2a7c,	// (0x00021b31) popup_snote_single_graphic_window_t2

0x2a8f,	// (0x00021b44) popup_snote_single_graphic_window_t3_ParamLimits

0x2a8f,	// (0x00021b44) popup_snote_single_graphic_window_t3

0x2ac8,	// (0x00021b7d) popup_snote_single_graphic_window_t4_ParamLimits

0x2ac8,	// (0x00021b7d) popup_snote_single_graphic_window_t4

0x2afc,	// (0x00021bb1) popup_snote_single_graphic_window_t5_ParamLimits

0x2afc,	// (0x00021bb1) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0002e671) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0002e671) popup_snote_single_graphic_window_t

0xac72,	// (0x00029d27) grid_graphic_popup_pane_ParamLimits

0xac72,	// (0x00029d27) grid_graphic_popup_pane

0xaca0,	// (0x00029d55) listscroll_popup_graphic_pane_g1_ParamLimits

0xaca0,	// (0x00029d55) listscroll_popup_graphic_pane_g1

0xacb4,	// (0x00029d69) listscroll_popup_graphic_pane_g2_ParamLimits

0xacb4,	// (0x00029d69) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b1,	// (0x0002ea66) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b1,	// (0x0002ea66) listscroll_popup_graphic_pane_g

0xacc8,	// (0x00029d7d) scroll_pane_cp5

0xac1a,	// (0x00029ccf) cell_graphic_popup_pane_ParamLimits

0xac1a,	// (0x00029ccf) cell_graphic_popup_pane

0xabfb,	// (0x00029cb0) cell_graphic_popup_pane_g1

0xac03,	// (0x00029cb8) cell_graphic_popup_pane_g2

0x294f,	// (0x00021a04) cell_graphic_popup_pane_g3

0x0002,

0xf9aa,	// (0x0002ea5f) cell_graphic_popup_pane_g

0xac0c,	// (0x00029cc1) cell_graphic_popup_pane_t2

0x2958,	// (0x00021a0d) grid_highlight_pane_cp3

0x2b3d,	// (0x00021bf2) list_gen_pane_ParamLimits

0x2b3d,	// (0x00021bf2) list_gen_pane

0x2b65,	// (0x00021c1a) scroll_pane

0xab53,	// (0x00029c08) bg_list_pane_g1_ParamLimits

0xab53,	// (0x00029c08) bg_list_pane_g1

0xab70,	// (0x00029c25) bg_list_pane_g2_ParamLimits

0xab70,	// (0x00029c25) bg_list_pane_g2

0xab85,	// (0x00029c3a) bg_list_pane_g3_ParamLimits

0xab85,	// (0x00029c3a) bg_list_pane_g3

0xab99,	// (0x00029c4e) bg_list_pane_g4_ParamLimits

0xab99,	// (0x00029c4e) bg_list_pane_g4

0xabad,	// (0x00029c62) bg_list_pane_g5_ParamLimits

0xabad,	// (0x00029c62) bg_list_pane_g5

0x0004,

0xf99f,	// (0x0002ea54) bg_list_pane_g_ParamLimits

0xf99f,	// (0x0002ea54) bg_list_pane_g

0x5a4b,	// (0x00024b00) list_double2_graphic_large_graphic_pane_ParamLimits

0x5a4b,	// (0x00024b00) list_double2_graphic_large_graphic_pane

0x5a4b,	// (0x00024b00) list_double2_graphic_pane_ParamLimits

0x5a4b,	// (0x00024b00) list_double2_graphic_pane

0x5a4b,	// (0x00024b00) list_double2_large_graphic_pane_ParamLimits

0x5a4b,	// (0x00024b00) list_double2_large_graphic_pane

0x5a4b,	// (0x00024b00) list_double2_pane_ParamLimits

0x5a4b,	// (0x00024b00) list_double2_pane

0x5a4b,	// (0x00024b00) list_double_graphic_heading_pane_ParamLimits

0x5a4b,	// (0x00024b00) list_double_graphic_heading_pane

0x5a4b,	// (0x00024b00) list_double_graphic_pane_ParamLimits

0x5a4b,	// (0x00024b00) list_double_graphic_pane

0x5a4b,	// (0x00024b00) list_double_heading_pane_ParamLimits

0x5a4b,	// (0x00024b00) list_double_heading_pane

0x5a4b,	// (0x00024b00) list_double_large_graphic_pane_ParamLimits

0x5a4b,	// (0x00024b00) list_double_large_graphic_pane

0x5a4b,	// (0x00024b00) list_double_number_pane_ParamLimits

0x5a4b,	// (0x00024b00) list_double_number_pane

0x5a4b,	// (0x00024b00) list_double_pane_ParamLimits

0x5a4b,	// (0x00024b00) list_double_pane

0x5a4b,	// (0x00024b00) list_double_time_pane_ParamLimits

0x5a4b,	// (0x00024b00) list_double_time_pane

0x5a4b,	// (0x00024b00) list_setting_number_pane_ParamLimits

0x5a4b,	// (0x00024b00) list_setting_number_pane

0x5a4b,	// (0x00024b00) list_setting_pane_ParamLimits

0x5a4b,	// (0x00024b00) list_setting_pane

0xab0f,	// (0x00029bc4) list_single_2graphic_pane_ParamLimits

0xab0f,	// (0x00029bc4) list_single_2graphic_pane

0xab0f,	// (0x00029bc4) list_single_graphic_heading_pane_ParamLimits

0xab0f,	// (0x00029bc4) list_single_graphic_heading_pane

0xab0f,	// (0x00029bc4) list_single_graphic_pane_ParamLimits

0xab0f,	// (0x00029bc4) list_single_graphic_pane

0xab0f,	// (0x00029bc4) list_single_heading_pane_ParamLimits

0xab0f,	// (0x00029bc4) list_single_heading_pane

0x5a8a,	// (0x00024b3f) list_single_large_graphic_pane_ParamLimits

0x5a8a,	// (0x00024b3f) list_single_large_graphic_pane

0xab0f,	// (0x00029bc4) list_single_number_heading_pane_ParamLimits

0xab0f,	// (0x00029bc4) list_single_number_heading_pane

0xab0f,	// (0x00029bc4) list_single_number_pane_ParamLimits

0xab0f,	// (0x00029bc4) list_single_number_pane

0xab0f,	// (0x00029bc4) list_single_pane_ParamLimits

0xab0f,	// (0x00029bc4) list_single_pane

0x0a96,	// (0x0001fb4b) list_highlight_pane_cp1

0x50f1,	// (0x000241a6) list_single_pane_g1_ParamLimits

0x50f1,	// (0x000241a6) list_single_pane_g1

0x50fd,	// (0x000241b2) list_single_pane_g2_ParamLimits

0x50fd,	// (0x000241b2) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0002e683) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0002e683) list_single_pane_g

0x5a35,	// (0x00024aea) list_single_pane_t1_ParamLimits

0x5a35,	// (0x00024aea) list_single_pane_t1

0x50f1,	// (0x000241a6) list_single_number_pane_g1_ParamLimits

0x50f1,	// (0x000241a6) list_single_number_pane_g1

0x50fd,	// (0x000241b2) list_single_number_pane_g2_ParamLimits

0x50fd,	// (0x000241b2) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0002e683) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0002e683) list_single_number_pane_g

0x59df,	// (0x00024a94) list_single_number_pane_t1_ParamLimits

0x59df,	// (0x00024a94) list_single_number_pane_t1

0x59f5,	// (0x00024aaa) list_single_number_pane_t2_ParamLimits

0x59f5,	// (0x00024aaa) list_single_number_pane_t2

0x0001,

0xf960,	// (0x0002ea15) list_single_number_pane_t_ParamLimits

0xf960,	// (0x0002ea15) list_single_number_pane_t

0x50e5,	// (0x0002419a) list_single_graphic_pane_g1_ParamLimits

0x50e5,	// (0x0002419a) list_single_graphic_pane_g1

0x50f1,	// (0x000241a6) list_single_graphic_pane_g2_ParamLimits

0x50f1,	// (0x000241a6) list_single_graphic_pane_g2

0x50fd,	// (0x000241b2) list_single_graphic_pane_g3_ParamLimits

0x50fd,	// (0x000241b2) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0002e67c) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0002e67c) list_single_graphic_pane_g

0x5109,	// (0x000241be) list_single_graphic_pane_t1_ParamLimits

0x5109,	// (0x000241be) list_single_graphic_pane_t1

0x50f1,	// (0x000241a6) list_single_heading_pane_g1_ParamLimits

0x50f1,	// (0x000241a6) list_single_heading_pane_g1

0x50fd,	// (0x000241b2) list_single_heading_pane_g2_ParamLimits

0x50fd,	// (0x000241b2) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0002e683) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0002e683) list_single_heading_pane_g

0x511f,	// (0x000241d4) list_single_heading_pane_t1_ParamLimits

0x511f,	// (0x000241d4) list_single_heading_pane_t1

0x5135,	// (0x000241ea) list_single_heading_pane_t2_ParamLimits

0x5135,	// (0x000241ea) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0002e688) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0002e688) list_single_heading_pane_t

0x50f1,	// (0x000241a6) list_single_number_heading_pane_g1_ParamLimits

0x50f1,	// (0x000241a6) list_single_number_heading_pane_g1

0x50fd,	// (0x000241b2) list_single_number_heading_pane_g2_ParamLimits

0x50fd,	// (0x000241b2) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0002e683) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0002e683) list_single_number_heading_pane_g

0x511f,	// (0x000241d4) list_single_number_heading_pane_t1_ParamLimits

0x511f,	// (0x000241d4) list_single_number_heading_pane_t1

0x5147,	// (0x000241fc) list_single_number_heading_pane_t2_ParamLimits

0x5147,	// (0x000241fc) list_single_number_heading_pane_t2

0x5159,	// (0x0002420e) list_single_number_heading_pane_t3_ParamLimits

0x5159,	// (0x0002420e) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0002e68d) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0002e68d) list_single_number_heading_pane_t

0x516b,	// (0x00024220) list_single_graphic_heading_pane_g1_ParamLimits

0x516b,	// (0x00024220) list_single_graphic_heading_pane_g1

0x5177,	// (0x0002422c) list_single_graphic_heading_pane_g4_ParamLimits

0x5177,	// (0x0002422c) list_single_graphic_heading_pane_g4

0x50fd,	// (0x000241b2) list_single_graphic_heading_pane_g5_ParamLimits

0x50fd,	// (0x000241b2) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0002e694) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0002e694) list_single_graphic_heading_pane_g

0x511f,	// (0x000241d4) list_single_graphic_heading_pane_t1_ParamLimits

0x511f,	// (0x000241d4) list_single_graphic_heading_pane_t1

0x5188,	// (0x0002423d) list_single_graphic_heading_pane_t2_ParamLimits

0x5188,	// (0x0002423d) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0002e69b) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0002e69b) list_single_graphic_heading_pane_t

0x519a,	// (0x0002424f) list_single_large_graphic_pane_g1_ParamLimits

0x519a,	// (0x0002424f) list_single_large_graphic_pane_g1

0x50f1,	// (0x000241a6) list_single_large_graphic_pane_g2_ParamLimits

0x50f1,	// (0x000241a6) list_single_large_graphic_pane_g2

0x50fd,	// (0x000241b2) list_single_large_graphic_pane_g3_ParamLimits

0x50fd,	// (0x000241b2) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0002e6a0) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0002e6a0) list_single_large_graphic_pane_g

0x9b1f,	// (0x00028bd4) wait_border_pane_g2_copy1

0x51a6,	// (0x0002425b) list_single_large_graphic_pane_g4_cp2

0x511f,	// (0x000241d4) list_single_large_graphic_pane_t1_ParamLimits

0x511f,	// (0x000241d4) list_single_large_graphic_pane_t1

0x51ae,	// (0x00024263) list_double_pane_g1_ParamLimits

0x51ae,	// (0x00024263) list_double_pane_g1

0x51ba,	// (0x0002426f) list_double_pane_g2_ParamLimits

0x51ba,	// (0x0002426f) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0002e6a7) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0002e6a7) list_double_pane_g

0x51c6,	// (0x0002427b) list_double_pane_t1_ParamLimits

0x51c6,	// (0x0002427b) list_double_pane_t1

0x51dc,	// (0x00024291) list_double_pane_t2_ParamLimits

0x51dc,	// (0x00024291) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0002e6ac) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0002e6ac) list_double_pane_t

0x51ee,	// (0x000242a3) list_double2_pane_g1_ParamLimits

0x51ee,	// (0x000242a3) list_double2_pane_g1

0x51ba,	// (0x0002426f) list_double2_pane_g2_ParamLimits

0x51ba,	// (0x0002426f) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0002e6b1) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0002e6b1) list_double2_pane_g

0x51c6,	// (0x0002427b) list_double2_pane_t1_ParamLimits

0x51c6,	// (0x0002427b) list_double2_pane_t1

0x51ff,	// (0x000242b4) list_double2_pane_t2_ParamLimits

0x51ff,	// (0x000242b4) list_double2_pane_t2

0x0001,

0xf601,	// (0x0002e6b6) list_double2_pane_t_ParamLimits

0xf601,	// (0x0002e6b6) list_double2_pane_t

0x51ae,	// (0x00024263) list_double_number_pane_g1_ParamLimits

0x51ae,	// (0x00024263) list_double_number_pane_g1

0x51ba,	// (0x0002426f) list_double_number_pane_g2_ParamLimits

0x51ba,	// (0x0002426f) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0002e6a7) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0002e6a7) list_double_number_pane_g

0x5211,	// (0x000242c6) list_double_number_pane_t1_ParamLimits

0x5211,	// (0x000242c6) list_double_number_pane_t1

0x5223,	// (0x000242d8) list_double_number_pane_t2_ParamLimits

0x5223,	// (0x000242d8) list_double_number_pane_t2

0x5239,	// (0x000242ee) list_double_number_pane_t3_ParamLimits

0x5239,	// (0x000242ee) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0002e6bb) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0002e6bb) list_double_number_pane_t

0x524b,	// (0x00024300) list_double_graphic_pane_g1_ParamLimits

0x524b,	// (0x00024300) list_double_graphic_pane_g1

0x5257,	// (0x0002430c) list_double_graphic_pane_g2_ParamLimits

0x5257,	// (0x0002430c) list_double_graphic_pane_g2

0x5266,	// (0x0002431b) list_double_graphic_pane_g3_ParamLimits

0x5266,	// (0x0002431b) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0002e6c2) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0002e6c2) list_double_graphic_pane_g

0x527e,	// (0x00024333) list_double_graphic_pane_t1_ParamLimits

0x527e,	// (0x00024333) list_double_graphic_pane_t1

0x5294,	// (0x00024349) list_double_graphic_pane_t2_ParamLimits

0x5294,	// (0x00024349) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0002e6cb) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0002e6cb) list_double_graphic_pane_t

0x524b,	// (0x00024300) list_double2_graphic_pane_g1_ParamLimits

0x524b,	// (0x00024300) list_double2_graphic_pane_g1

0x52a6,	// (0x0002435b) list_double2_graphic_pane_g2_ParamLimits

0x52a6,	// (0x0002435b) list_double2_graphic_pane_g2

0x52b2,	// (0x00024367) list_double2_graphic_pane_g3_ParamLimits

0x52b2,	// (0x00024367) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0002e6d0) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0002e6d0) list_double2_graphic_pane_g

0x5223,	// (0x000242d8) list_double2_graphic_pane_t1_ParamLimits

0x5223,	// (0x000242d8) list_double2_graphic_pane_t1

0x52be,	// (0x00024373) list_double2_graphic_pane_t2_ParamLimits

0x52be,	// (0x00024373) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0002e6d7) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0002e6d7) list_double2_graphic_pane_t

0x52d0,	// (0x00024385) list_double_large_graphic_pane_g1_ParamLimits

0x52d0,	// (0x00024385) list_double_large_graphic_pane_g1

0x51ee,	// (0x000242a3) list_double_large_graphic_pane_g2_ParamLimits

0x51ee,	// (0x000242a3) list_double_large_graphic_pane_g2

0x51ba,	// (0x0002426f) list_double_large_graphic_pane_g3_ParamLimits

0x51ba,	// (0x0002426f) list_double_large_graphic_pane_g3

0x52fb,	// (0x000243b0) list_double_large_graphic_pane_g4_ParamLimits

0x52fb,	// (0x000243b0) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0002e6dc) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0002e6dc) list_double_large_graphic_pane_g

0x5323,	// (0x000243d8) list_double_large_graphic_pane_t1_ParamLimits

0x5323,	// (0x000243d8) list_double_large_graphic_pane_t1

0x533c,	// (0x000243f1) list_double_large_graphic_pane_t2_ParamLimits

0x533c,	// (0x000243f1) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0002e6e7) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0002e6e7) list_double_large_graphic_pane_t

0x534e,	// (0x00024403) list_double2_large_graphic_pane_g1_ParamLimits

0x534e,	// (0x00024403) list_double2_large_graphic_pane_g1

0x51ee,	// (0x000242a3) list_double2_large_graphic_pane_g2_ParamLimits

0x51ee,	// (0x000242a3) list_double2_large_graphic_pane_g2

0x51ba,	// (0x0002426f) list_double2_large_graphic_pane_g3_ParamLimits

0x51ba,	// (0x0002426f) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0002e6ec) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0002e6ec) list_double2_large_graphic_pane_g

0x535a,	// (0x0002440f) list_double2_large_graphic_pane_t1_ParamLimits

0x535a,	// (0x0002440f) list_double2_large_graphic_pane_t1

0x5370,	// (0x00024425) list_double2_large_graphic_pane_t2_ParamLimits

0x5370,	// (0x00024425) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0002e6f3) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0002e6f3) list_double2_large_graphic_pane_t

0x5382,	// (0x00024437) list_double_heading_pane_g1_ParamLimits

0x5382,	// (0x00024437) list_double_heading_pane_g1

0x5393,	// (0x00024448) list_double_heading_pane_g2_ParamLimits

0x5393,	// (0x00024448) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0002e6f8) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0002e6f8) list_double_heading_pane_g

0x539f,	// (0x00024454) list_double_heading_pane_t1_ParamLimits

0x539f,	// (0x00024454) list_double_heading_pane_t1

0x53b5,	// (0x0002446a) list_double_heading_pane_t2_ParamLimits

0x53b5,	// (0x0002446a) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0002e6fd) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0002e6fd) list_double_heading_pane_t

0x53c7,	// (0x0002447c) list_double_graphic_heading_pane_g1_ParamLimits

0x53c7,	// (0x0002447c) list_double_graphic_heading_pane_g1

0x5382,	// (0x00024437) list_double_graphic_heading_pane_g2_ParamLimits

0x5382,	// (0x00024437) list_double_graphic_heading_pane_g2

0x5393,	// (0x00024448) list_double_graphic_heading_pane_g3_ParamLimits

0x5393,	// (0x00024448) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0002e702) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0002e702) list_double_graphic_heading_pane_g

0x53d3,	// (0x00024488) list_double_graphic_heading_pane_t1_ParamLimits

0x53d3,	// (0x00024488) list_double_graphic_heading_pane_t1

0x53e9,	// (0x0002449e) list_double_graphic_heading_pane_t2_ParamLimits

0x53e9,	// (0x0002449e) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0002e709) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0002e709) list_double_graphic_heading_pane_t

0x51ee,	// (0x000242a3) list_double_time_pane_g1_ParamLimits

0x51ee,	// (0x000242a3) list_double_time_pane_g1

0x51ba,	// (0x0002426f) list_double_time_pane_g2_ParamLimits

0x51ba,	// (0x0002426f) list_double_time_pane_g2

0x0001,

0xf5fc,	// (0x0002e6b1) list_double_time_pane_g_ParamLimits

0xf5fc,	// (0x0002e6b1) list_double_time_pane_g

0x535a,	// (0x0002440f) list_double_time_pane_t1_ParamLimits

0x535a,	// (0x0002440f) list_double_time_pane_t1

0x53fb,	// (0x000244b0) list_double_time_pane_t2_ParamLimits

0x53fb,	// (0x000244b0) list_double_time_pane_t2

0x540d,	// (0x000244c2) list_double_time_pane_t3_ParamLimits

0x540d,	// (0x000244c2) list_double_time_pane_t3

0x541f,	// (0x000244d4) list_double_time_pane_t4_ParamLimits

0x541f,	// (0x000244d4) list_double_time_pane_t4

0x0003,

0xf659,	// (0x0002e70e) list_double_time_pane_t_ParamLimits

0xf659,	// (0x0002e70e) list_double_time_pane_t

0x5431,	// (0x000244e6) list_setting_pane_g1_ParamLimits

0x5431,	// (0x000244e6) list_setting_pane_g1

0x543d,	// (0x000244f2) list_setting_pane_g2_ParamLimits

0x543d,	// (0x000244f2) list_setting_pane_g2

0x0001,

0xf662,	// (0x0002e717) list_setting_pane_g_ParamLimits

0xf662,	// (0x0002e717) list_setting_pane_g

0x5449,	// (0x000244fe) list_setting_pane_t1_ParamLimits

0x5449,	// (0x000244fe) list_setting_pane_t1

0x5463,	// (0x00024518) list_setting_pane_t2_ParamLimits

0x5463,	// (0x00024518) list_setting_pane_t2

0x0002,

0xf667,	// (0x0002e71c) list_setting_pane_t_ParamLimits

0xf667,	// (0x0002e71c) list_setting_pane_t

0x54a2,	// (0x00024557) set_value_pane_cp_ParamLimits

0x54a2,	// (0x00024557) set_value_pane_cp

0x54b0,	// (0x00024565) list_setting_number_pane_g1_ParamLimits

0x54b0,	// (0x00024565) list_setting_number_pane_g1

0x54bc,	// (0x00024571) list_setting_number_pane_g2_ParamLimits

0x54bc,	// (0x00024571) list_setting_number_pane_g2

0x0001,

0xf66e,	// (0x0002e723) list_setting_number_pane_g_ParamLimits

0xf66e,	// (0x0002e723) list_setting_number_pane_g

0x54c8,	// (0x0002457d) list_setting_number_pane_t1_ParamLimits

0x54c8,	// (0x0002457d) list_setting_number_pane_t1

0x54e1,	// (0x00024596) list_setting_number_pane_t2_ParamLimits

0x54e1,	// (0x00024596) list_setting_number_pane_t2

0x54fb,	// (0x000245b0) list_setting_number_pane_t3_ParamLimits

0x54fb,	// (0x000245b0) list_setting_number_pane_t3

0x0003,

0xf673,	// (0x0002e728) list_setting_number_pane_t_ParamLimits

0xf673,	// (0x0002e728) list_setting_number_pane_t

0x54a2,	// (0x00024557) set_value_pane_ParamLimits

0x54a2,	// (0x00024557) set_value_pane

0x2bba,	// (0x00021c6f) bg_set_opt_pane_ParamLimits

0x2bba,	// (0x00021c6f) bg_set_opt_pane

0x553e,	// (0x000245f3) set_value_pane_t1

0x2be9,	// (0x00021c9e) slider_set_pane_cp3

0x2bf2,	// (0x00021ca7) volume_small_pane_cp

0x2bfb,	// (0x00021cb0) list_form_gen_pane

0x2c04,	// (0x00021cb9) scroll_pane_cp8

0x5554,	// (0x00024609) form_field_data_pane_ParamLimits

0x5554,	// (0x00024609) form_field_data_pane

0x557a,	// (0x0002462f) form_field_data_wide_pane_ParamLimits

0x557a,	// (0x0002462f) form_field_data_wide_pane

0x559f,	// (0x00024654) form_field_popup_pane_ParamLimits

0x559f,	// (0x00024654) form_field_popup_pane

0x55c1,	// (0x00024676) form_field_popup_wide_pane_ParamLimits

0x55c1,	// (0x00024676) form_field_popup_wide_pane

0x55e2,	// (0x00024697) form_field_slider_pane_ParamLimits

0x55e2,	// (0x00024697) form_field_slider_pane

0x55f5,	// (0x000246aa) form_field_slider_wide_pane_ParamLimits

0x55f5,	// (0x000246aa) form_field_slider_wide_pane

0x2c6c,	// (0x00021d21) data_form_pane

0x5612,	// (0x000246c7) form_field_data_pane_t1

0x2c78,	// (0x00021d2d) input_focus_pane

0x562c,	// (0x000246e1) data_form_wide_pane

0x5649,	// (0x000246fe) form_field_data_wide_pane_t1

0x296d,	// (0x00021a22) input_focus_pane_cp6

0x566b,	// (0x00024720) form_field_popup_pane_t1

0x2c78,	// (0x00021d2d) input_focus_pane_cp7

0x2ce5,	// (0x00021d9a) list_form_pane

0x568d,	// (0x00024742) form_field_popup_wide_pane_t1

0x2c78,	// (0x00021d2d) input_focus_pane_cp8

0x2d0e,	// (0x00021dc3) list_form_wide_pane

0x56aa,	// (0x0002475f) form_field_slider_pane_t1_ParamLimits

0x56aa,	// (0x0002475f) form_field_slider_pane_t1

0x56c2,	// (0x00024777) form_field_slider_pane_t2_ParamLimits

0x56c2,	// (0x00024777) form_field_slider_pane_t2

0x0001,

0xf683,	// (0x0002e738) form_field_slider_pane_t_ParamLimits

0xf683,	// (0x0002e738) form_field_slider_pane_t

0x0af0,	// (0x0001fba5) input_focus_pane_cp9_ParamLimits

0x0af0,	// (0x0001fba5) input_focus_pane_cp9

0x56d7,	// (0x0002478c) slider_cont_pane_ParamLimits

0x56d7,	// (0x0002478c) slider_cont_pane

0x2d1d,	// (0x00021dd2) form_field_slider_wide_pane_t1_ParamLimits

0x2d1d,	// (0x00021dd2) form_field_slider_wide_pane_t1

0x56eb,	// (0x000247a0) form_field_slider_wide_pane_t2_ParamLimits

0x56eb,	// (0x000247a0) form_field_slider_wide_pane_t2

0x0001,

0xf688,	// (0x0002e73d) form_field_slider_wide_pane_t_ParamLimits

0xf688,	// (0x0002e73d) form_field_slider_wide_pane_t

0x0af0,	// (0x0001fba5) input_focus_pane_cp10_ParamLimits

0x0af0,	// (0x0001fba5) input_focus_pane_cp10

0x56fd,	// (0x000247b2) slider_cont_pane_cp1_ParamLimits

0x56fd,	// (0x000247b2) slider_cont_pane_cp1

0x5711,	// (0x000247c6) slider_form_pane_cp

0x2d41,	// (0x00021df6) input_focus_pane_g1

0x2d49,	// (0x00021dfe) input_focus_pane_g2

0x2d51,	// (0x00021e06) input_focus_pane_g3

0x2d59,	// (0x00021e0e) input_focus_pane_g4

0x2d61,	// (0x00021e16) input_focus_pane_g5

0x2d69,	// (0x00021e1e) input_focus_pane_g6

0x2d71,	// (0x00021e26) input_focus_pane_g7

0x2d79,	// (0x00021e2e) input_focus_pane_g8

0x2d81,	// (0x00021e36) input_focus_pane_g9

0x0a8c,	// (0x0001fb41) input_focus_pane_g10

0x0009,

0xf68d,	// (0x0002e742) input_focus_pane_g

0x9b28,	// (0x00028bdd) wait_border_pane_g3_copy1

0x5719,	// (0x000247ce) data_form_pane_t1

0x0a8c,	// (0x0001fb41) wait_anim_pane_g1_copy1

0x5a07,	// (0x00024abc) data_form_wide_pane_t1

0x5736,	// (0x000247eb) list_form_graphic_pane_cp_ParamLimits

0x5736,	// (0x000247eb) list_form_graphic_pane_cp

0xaa88,	// (0x00029b3d) slider_form_pane_g1

0xaa91,	// (0x00029b46) slider_form_pane_g2

0x0006,

0xf990,	// (0x0002ea45) slider_form_pane_g

0x574b,	// (0x00024800) list_form_graphic_pane_ParamLimits

0x574b,	// (0x00024800) list_form_graphic_pane

0x575d,	// (0x00024812) list_form_graphic_pane_g1

0x5765,	// (0x0002481a) list_form_graphic_pane_t1_ParamLimits

0x5765,	// (0x0002481a) list_form_graphic_pane_t1

0x0afe,	// (0x0001fbb3) list_highlight_pane_cp5_ParamLimits

0x0afe,	// (0x0001fbb3) list_highlight_pane_cp5

0x577a,	// (0x0002482f) find_pane_g1

0x2db8,	// (0x00021e6d) input_find_pane

0x5783,	// (0x00024838) input_find_pane_g1_ParamLimits

0x5783,	// (0x00024838) input_find_pane_g1

0x578f,	// (0x00024844) input_find_pane_t1_ParamLimits

0x578f,	// (0x00024844) input_find_pane_t1

0x57a4,	// (0x00024859) input_find_pane_t2_ParamLimits

0x57a4,	// (0x00024859) input_find_pane_t2

0x0001,

0xf6a2,	// (0x0002e757) input_find_pane_t_ParamLimits

0xf6a2,	// (0x0002e757) input_find_pane_t

0x2dc1,	// (0x00021e76) input_focus_pane_cp5_ParamLimits

0x2dc1,	// (0x00021e76) input_focus_pane_cp5

0x2dcf,	// (0x00021e84) bg_popup_window_pane_cp2_ParamLimits

0x2dcf,	// (0x00021e84) bg_popup_window_pane_cp2

0x2ddc,	// (0x00021e91) listscroll_menu_pane_ParamLimits

0x2ddc,	// (0x00021e91) listscroll_menu_pane

0x6921,	// (0x000259d6) popup_submenu_window_ParamLimits

0x6921,	// (0x000259d6) popup_submenu_window

0x2de8,	// (0x00021e9d) find_popup_pane_g1

0x2df0,	// (0x00021ea5) input_popup_find_pane_cp

0x2dc1,	// (0x00021e76) input_focus_pane_cp4_ParamLimits

0x2dc1,	// (0x00021e76) input_focus_pane_cp4

0x2dfa,	// (0x00021eaf) input_popup_find_pane_t1_ParamLimits

0x2dfa,	// (0x00021eaf) input_popup_find_pane_t1

0x0a96,	// (0x0001fb4b) bg_popup_sub_pane_cp

0x2e28,	// (0x00021edd) listscroll_popup_sub_pane

0x2e30,	// (0x00021ee5) list_submenu_pane_ParamLimits

0x2e30,	// (0x00021ee5) list_submenu_pane

0x2e41,	// (0x00021ef6) scroll_pane_cp4

0x2e49,	// (0x00021efe) list_single_popup_submenu_pane_ParamLimits

0x2e49,	// (0x00021efe) list_single_popup_submenu_pane

0x2e5e,	// (0x00021f13) list_single_popup_submenu_pane_g1

0x2e66,	// (0x00021f1b) list_single_popup_submenu_pane_t1_ParamLimits

0x2e66,	// (0x00021f1b) list_single_popup_submenu_pane_t1

0x0afe,	// (0x0001fbb3) bg_active_tab_pane_cp1_ParamLimits

0x0afe,	// (0x0001fbb3) bg_active_tab_pane_cp1

0x695f,	// (0x00025a14) tabs_2_active_pane_g1

0x6967,	// (0x00025a1c) tabs_2_active_pane_t1

0x0afe,	// (0x0001fbb3) bg_passive_tab_pane_cp1_ParamLimits

0x0afe,	// (0x0001fbb3) bg_passive_tab_pane_cp1

0x695f,	// (0x00025a14) tabs_2_passive_pane_g1

0x6967,	// (0x00025a1c) tabs_2_passive_pane_t1

0x33c7,	// (0x0002247c) bg_active_tab_pane_cp4

0x6979,	// (0x00025a2e) tabs_2_long_active_pane_t1

0x698c,	// (0x00025a41) bg_passive_tab_pane_cp4

0x8417,	// (0x000274cc) list_single_midp_graphic_pane_g4_ParamLimits

0x33c7,	// (0x0002247c) bg_active_tab_pane_cp5

0x6998,	// (0x00025a4d) tabs_3_long_active_pane_t1

0x698c,	// (0x00025a41) bg_passive_tab_pane_cp5

0x8417,	// (0x000274cc) list_single_midp_graphic_pane_g4

0x0afe,	// (0x0001fbb3) bg_popup_window_pane_cp13_ParamLimits

0x0afe,	// (0x0001fbb3) bg_popup_window_pane_cp13

0x2e84,	// (0x00021f39) listscroll_popup_fast_pane_ParamLimits

0x2e84,	// (0x00021f39) listscroll_popup_fast_pane

0x2e93,	// (0x00021f48) grid_popup_fast_pane_ParamLimits

0x2e93,	// (0x00021f48) grid_popup_fast_pane

0x2ea5,	// (0x00021f5a) scroll_pane_cp9_ParamLimits

0x2ea5,	// (0x00021f5a) scroll_pane_cp9

0xc42f,	// (0x0002b4e4) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc42f,	// (0x0002b4e4) list_single_graphic_hl_pane_t1_cp2

0x2ec9,	// (0x00021f7e) input_focus_pane_cp20_ParamLimits

0x2ec9,	// (0x00021f7e) input_focus_pane_cp20

0x2ed7,	// (0x00021f8c) query_popup_data_pane_t1_ParamLimits

0x2ed7,	// (0x00021f8c) query_popup_data_pane_t1

0x2eea,	// (0x00021f9f) query_popup_data_pane_t2_ParamLimits

0x2eea,	// (0x00021f9f) query_popup_data_pane_t2

0x2f30,	// (0x00021fe5) query_popup_data_pane_t3_ParamLimits

0x2f30,	// (0x00021fe5) query_popup_data_pane_t3

0x2f71,	// (0x00022026) query_popup_data_pane_t4_ParamLimits

0x2f71,	// (0x00022026) query_popup_data_pane_t4

0x2fad,	// (0x00022062) query_popup_data_pane_t5_ParamLimits

0x2fad,	// (0x00022062) query_popup_data_pane_t5

0x0004,

0xf6a7,	// (0x0002e75c) query_popup_data_pane_t_ParamLimits

0xf6a7,	// (0x0002e75c) query_popup_data_pane_t

0x2d41,	// (0x00021df6) bg_set_opt_pane_g1

0x2d49,	// (0x00021dfe) bg_set_opt_pane_g2

0x2d51,	// (0x00021e06) bg_set_opt_pane_g3

0x2d59,	// (0x00021e0e) bg_set_opt_pane_g4

0x2d61,	// (0x00021e16) bg_set_opt_pane_g5

0x2d69,	// (0x00021e1e) bg_set_opt_pane_g6

0x2d71,	// (0x00021e26) bg_set_opt_pane_g7

0x2d79,	// (0x00021e2e) bg_set_opt_pane_g8

0x2d81,	// (0x00021e36) bg_set_opt_pane_g9

0x0008,

0xf6b2,	// (0x0002e767) bg_set_opt_pane_g

0x6e15,	// (0x00025eca) control_top_pane_stacon_ParamLimits

0x6e15,	// (0x00025eca) control_top_pane_stacon

0x6e68,	// (0x00025f1d) signal_pane_stacon_ParamLimits

0x6e68,	// (0x00025f1d) signal_pane_stacon

0x6e8d,	// (0x00025f42) stacon_top_pane_g1_ParamLimits

0x6e8d,	// (0x00025f42) stacon_top_pane_g1

0x6eaf,	// (0x00025f64) title_pane_stacon_ParamLimits

0x6eaf,	// (0x00025f64) title_pane_stacon

0x6ed9,	// (0x00025f8e) uni_indicator_pane_stacon_ParamLimits

0x6ed9,	// (0x00025f8e) uni_indicator_pane_stacon

0x6ef1,	// (0x00025fa6) battery_pane_stacon_ParamLimits

0x6ef1,	// (0x00025fa6) battery_pane_stacon

0x6f35,	// (0x00025fea) control_bottom_pane_stacon_ParamLimits

0x6f35,	// (0x00025fea) control_bottom_pane_stacon

0x6f58,	// (0x0002600d) navi_pane_stacon_ParamLimits

0x6f58,	// (0x0002600d) navi_pane_stacon

0x6f7b,	// (0x00026030) stacon_bottom_pane_g1_ParamLimits

0x6f7b,	// (0x00026030) stacon_bottom_pane_g1

0x69aa,	// (0x00025a5f) aid_levels_signal_lsc_ParamLimits

0x69aa,	// (0x00025a5f) aid_levels_signal_lsc

0x69c1,	// (0x00025a76) signal_pane_stacon_g1_ParamLimits

0x69c1,	// (0x00025a76) signal_pane_stacon_g1

0x69d5,	// (0x00025a8a) signal_pane_stacon_g2_ParamLimits

0x69d5,	// (0x00025a8a) signal_pane_stacon_g2

0x0001,

0xf6c5,	// (0x0002e77a) signal_pane_stacon_g_ParamLimits

0xf6c5,	// (0x0002e77a) signal_pane_stacon_g

0x6a0a,	// (0x00025abf) title_pane_stacon_t1_ParamLimits

0x6a0a,	// (0x00025abf) title_pane_stacon_t1

0x3005,	// (0x000220ba) uni_indicator_pane_stacon_g1

0x300f,	// (0x000220c4) uni_indicator_pane_stacon_g2

0x2ff1,	// (0x000220a6) uni_indicator_pane_stacon_g3

0x2ffb,	// (0x000220b0) uni_indicator_pane_stacon_g4

0x0003,

0xf6d1,	// (0x0002e786) uni_indicator_pane_stacon_g

0x6a2f,	// (0x00025ae4) control_top_pane_stacon_g1

0x6a37,	// (0x00025aec) control_top_pane_stacon_t1_ParamLimits

0x6a37,	// (0x00025aec) control_top_pane_stacon_t1

0x6a6e,	// (0x00025b23) aid_levels_battery_lsc_ParamLimits

0x6a6e,	// (0x00025b23) aid_levels_battery_lsc

0x6a86,	// (0x00025b3b) battery_pane_stacon_g1_ParamLimits

0x6a86,	// (0x00025b3b) battery_pane_stacon_g1

0x6a99,	// (0x00025b4e) battery_pane_stacon_g2_ParamLimits

0x6a99,	// (0x00025b4e) battery_pane_stacon_g2

0x0001,

0xf6da,	// (0x0002e78f) battery_pane_stacon_g_ParamLimits

0xf6da,	// (0x0002e78f) battery_pane_stacon_g

0x6ad7,	// (0x00025b8c) navi_icon_pane_stacon

0x6aeb,	// (0x00025ba0) navi_navi_pane_stacon

0x6ad7,	// (0x00025b8c) navi_text_pane_stacon

0x6a2f,	// (0x00025ae4) control_bottom_pane_stacon_g1

0x6b01,	// (0x00025bb6) control_bottom_pane_stacon_t1_ParamLimits

0x6b01,	// (0x00025bb6) control_bottom_pane_stacon_t1

0x6b38,	// (0x00025bed) grid_app_pane_ParamLimits

0x6b38,	// (0x00025bed) grid_app_pane

0x6b5c,	// (0x00025c11) scroll_pane_cp15_ParamLimits

0x6b5c,	// (0x00025c11) scroll_pane_cp15

0x6b6f,	// (0x00025c24) cell_app_pane_ParamLimits

0x6b6f,	// (0x00025c24) cell_app_pane

0x6b9b,	// (0x00025c50) cell_app_pane_g1_ParamLimits

0x6b9b,	// (0x00025c50) cell_app_pane_g1

0x3033,	// (0x000220e8) cell_app_pane_g2_ParamLimits

0x3033,	// (0x000220e8) cell_app_pane_g2

0x0001,

0xf6df,	// (0x0002e794) cell_app_pane_g_ParamLimits

0xf6df,	// (0x0002e794) cell_app_pane_g

0x303f,	// (0x000220f4) cell_app_pane_t1_ParamLimits

0x303f,	// (0x000220f4) cell_app_pane_t1

0x3056,	// (0x0002210b) grid_highlight_pane_ParamLimits

0x3056,	// (0x0002210b) grid_highlight_pane

0x2d41,	// (0x00021df6) cell_highlight_pane_g1

0x2d49,	// (0x00021dfe) cell_highlight_pane_g2

0x2d51,	// (0x00021e06) cell_highlight_pane_g3

0x2d59,	// (0x00021e0e) cell_highlight_pane_g4

0x2d61,	// (0x00021e16) cell_highlight_pane_g5

0x2d69,	// (0x00021e1e) cell_highlight_pane_g6

0x2d71,	// (0x00021e26) cell_highlight_pane_g7

0x2d79,	// (0x00021e2e) cell_highlight_pane_g8

0x2d81,	// (0x00021e36) cell_highlight_pane_g9

0x0a8c,	// (0x0001fb41) cell_highlight_pane_g10

0x0009,

0xf68d,	// (0x0002e742) cell_highlight_pane_g

0x3067,	// (0x0002211c) bg_scroll_pane

0x6bce,	// (0x00025c83) scroll_handle_pane

0x30ae,	// (0x00022163) scroll_bg_pane_g1

0x30c3,	// (0x00022178) scroll_bg_pane_g2

0x30db,	// (0x00022190) scroll_bg_pane_g3

0x0002,

0xf6e4,	// (0x0002e799) scroll_bg_pane_g

0x30f0,	// (0x000221a5) scroll_handle_focus_pane_ParamLimits

0x30f0,	// (0x000221a5) scroll_handle_focus_pane

0x30ae,	// (0x00022163) scroll_handle_pane_g1

0x30fd,	// (0x000221b2) scroll_handle_pane_g2

0x30db,	// (0x00022190) scroll_handle_pane_g3

0x0002,

0xf6eb,	// (0x0002e7a0) scroll_handle_pane_g

0x2dc1,	// (0x00021e76) bg_popup_sub_pane_cp21_ParamLimits

0x2dc1,	// (0x00021e76) bg_popup_sub_pane_cp21

0x3111,	// (0x000221c6) popup_fep_japan_predictive_window_t1_ParamLimits

0x3111,	// (0x000221c6) popup_fep_japan_predictive_window_t1

0x3128,	// (0x000221dd) popup_fep_japan_predictive_window_t2_ParamLimits

0x3128,	// (0x000221dd) popup_fep_japan_predictive_window_t2

0x315b,	// (0x00022210) popup_fep_japan_predictive_window_t3_ParamLimits

0x315b,	// (0x00022210) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f2,	// (0x0002e7a7) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f2,	// (0x0002e7a7) popup_fep_japan_predictive_window_t

0x0a96,	// (0x0001fb4b) bg_popup_sub_pane_cp23

0x3192,	// (0x00022247) listscroll_japin_cand_pane

0x319a,	// (0x0002224f) popup_fep_japan_candidate_window_t1

0x31a8,	// (0x0002225d) candidate_pane_ParamLimits

0x31a8,	// (0x0002225d) candidate_pane

0x31ba,	// (0x0002226f) scroll_pane_cp30

0x31c4,	// (0x00022279) list_single_popup_jap_candidate_pane_ParamLimits

0x31c4,	// (0x00022279) list_single_popup_jap_candidate_pane

0x0a96,	// (0x0001fb4b) list_highlight_pane_cp30

0x31d8,	// (0x0002228d) list_single_popup_jap_candidate_pane_t1

0x6bf7,	// (0x00025cac) level_1_signal

0x6c04,	// (0x00025cb9) level_2_signal

0x6c11,	// (0x00025cc6) level_3_signal

0x6c1e,	// (0x00025cd3) level_4_signal

0x6c2b,	// (0x00025ce0) level_5_signal

0x6c38,	// (0x00025ced) level_6_signal

0x6c45,	// (0x00025cfa) level_7_signal

0x6bf7,	// (0x00025cac) level_1_battery

0x6c04,	// (0x00025cb9) level_2_battery

0x6c11,	// (0x00025cc6) level_3_battery

0x6c1e,	// (0x00025cd3) level_4_battery

0x6c2b,	// (0x00025ce0) level_5_battery

0x6c38,	// (0x00025ced) level_6_battery

0x6c45,	// (0x00025cfa) level_7_battery

0x31ff,	// (0x000222b4) list_menu_pane_ParamLimits

0x31ff,	// (0x000222b4) list_menu_pane

0x3215,	// (0x000222ca) scroll_pane_cp25_ParamLimits

0x3215,	// (0x000222ca) scroll_pane_cp25

0x322e,	// (0x000222e3) list_double2_graphic_pane_cp2_ParamLimits

0x322e,	// (0x000222e3) list_double2_graphic_pane_cp2

0x322e,	// (0x000222e3) list_double2_large_graphic_pane_cp2_ParamLimits

0x322e,	// (0x000222e3) list_double2_large_graphic_pane_cp2

0x322e,	// (0x000222e3) list_double2_pane_cp2_ParamLimits

0x322e,	// (0x000222e3) list_double2_pane_cp2

0x322e,	// (0x000222e3) list_double_graphic_pane_cp2_ParamLimits

0x322e,	// (0x000222e3) list_double_graphic_pane_cp2

0x322e,	// (0x000222e3) list_double_large_graphic_pane_cp2_ParamLimits

0x322e,	// (0x000222e3) list_double_large_graphic_pane_cp2

0x322e,	// (0x000222e3) list_double_number_pane_cp2_ParamLimits

0x322e,	// (0x000222e3) list_double_number_pane_cp2

0x322e,	// (0x000222e3) list_double_pane_cp2_ParamLimits

0x322e,	// (0x000222e3) list_double_pane_cp2

0x6c87,	// (0x00025d3c) list_single_2graphic_pane_cp2_ParamLimits

0x6c87,	// (0x00025d3c) list_single_2graphic_pane_cp2

0x6c87,	// (0x00025d3c) list_single_graphic_heading_pane_cp2_ParamLimits

0x6c87,	// (0x00025d3c) list_single_graphic_heading_pane_cp2

0x6c87,	// (0x00025d3c) list_single_graphic_pane_cp2_ParamLimits

0x6c87,	// (0x00025d3c) list_single_graphic_pane_cp2

0x6c87,	// (0x00025d3c) list_single_heading_pane_cp2_ParamLimits

0x6c87,	// (0x00025d3c) list_single_heading_pane_cp2

0x323e,	// (0x000222f3) list_single_large_graphic_pane_cp2_ParamLimits

0x323e,	// (0x000222f3) list_single_large_graphic_pane_cp2

0x6c87,	// (0x00025d3c) list_single_number_heading_pane_cp2_ParamLimits

0x6c87,	// (0x00025d3c) list_single_number_heading_pane_cp2

0x6c87,	// (0x00025d3c) list_single_number_pane_cp2_ParamLimits

0x6c87,	// (0x00025d3c) list_single_number_pane_cp2

0x6c87,	// (0x00025d3c) list_single_pane_cp2_ParamLimits

0x6c87,	// (0x00025d3c) list_single_pane_cp2

0x3257,	// (0x0002230c) bg_popup_sub_pane_cp22

0x6d70,	// (0x00025e25) popup_side_volume_key_window_g1

0x6d9a,	// (0x00025e4f) popup_side_volume_key_window_t1

0x6db8,	// (0x00025e6d) volume_small_pane_cp1

0x0af0,	// (0x0001fba5) bg_popup_sub_pane_cp24_ParamLimits

0x0af0,	// (0x0001fba5) bg_popup_sub_pane_cp24

0x326d,	// (0x00022322) fep_china_uni_candidate_pane_ParamLimits

0x326d,	// (0x00022322) fep_china_uni_candidate_pane

0x3281,	// (0x00022336) fep_china_uni_entry_pane

0x3291,	// (0x00022346) popup_fep_china_uni_window_g1

0x32ad,	// (0x00022362) fep_china_uni_entry_pane_g1

0x32b7,	// (0x0002236c) fep_china_uni_entry_pane_g2

0x0001,

0xf723,	// (0x0002e7d8) fep_china_uni_entry_pane_g

0x32c1,	// (0x00022376) fep_entry_item_pane

0x32cb,	// (0x00022380) fep_candidate_item_pane

0x32d3,	// (0x00022388) fep_china_uni_candidate_pane_g1

0x32dd,	// (0x00022392) fep_china_uni_candidate_pane_g2

0x32e5,	// (0x0002239a) fep_china_uni_candidate_pane_g3

0x32ed,	// (0x000223a2) fep_china_uni_candidate_pane_g4

0x0003,

0xf728,	// (0x0002e7dd) fep_china_uni_candidate_pane_g

0x0a8c,	// (0x0001fb41) fep_entry_item_pane_g1

0x32f7,	// (0x000223ac) fep_entry_item_pane_t1_ParamLimits

0x32f7,	// (0x000223ac) fep_entry_item_pane_t1

0x330d,	// (0x000223c2) fep_candidate_item_pane_t1_ParamLimits

0x330d,	// (0x000223c2) fep_candidate_item_pane_t1

0x3322,	// (0x000223d7) fep_candidate_item_pane_t2_ParamLimits

0x3322,	// (0x000223d7) fep_candidate_item_pane_t2

0x0001,

0xf731,	// (0x0002e7e6) fep_candidate_item_pane_t_ParamLimits

0xf731,	// (0x0002e7e6) fep_candidate_item_pane_t

0x0afe,	// (0x0001fbb3) list_highlight_pane_cp31_ParamLimits

0x0afe,	// (0x0001fbb3) list_highlight_pane_cp31

0x3334,	// (0x000223e9) level_1_signal_lsc

0x333d,	// (0x000223f2) level_2_signal_lsc

0x3346,	// (0x000223fb) level_3_signal_lsc

0x334f,	// (0x00022404) level_4_signal_lsc

0x3358,	// (0x0002240d) level_5_signal_lsc

0x3361,	// (0x00022416) level_6_signal_lsc

0x336a,	// (0x0002241f) level_7_signal_lsc

0x336a,	// (0x0002241f) level_1_battery_lsc

0x3373,	// (0x00022428) level_2_battery_lsc

0x337c,	// (0x00022431) level_3_battery_lsc

0x3385,	// (0x0002243a) level_4_battery_lsc

0x338e,	// (0x00022443) level_5_battery_lsc

0x3397,	// (0x0002244c) level_6_battery_lsc

0x3334,	// (0x000223e9) level_7_battery_lsc

0x33a0,	// (0x00022455) scroll_handle_focus_pane_g1

0x33a9,	// (0x0002245e) scroll_handle_focus_pane_g2

0x33b2,	// (0x00022467) scroll_handle_focus_pane_g3

0x0002,

0xf736,	// (0x0002e7eb) scroll_handle_focus_pane_g

0x57b9,	// (0x0002486e) list_single_2graphic_pane_g1_ParamLimits

0x57b9,	// (0x0002486e) list_single_2graphic_pane_g1

0x5177,	// (0x0002422c) list_single_2graphic_pane_g2_ParamLimits

0x5177,	// (0x0002422c) list_single_2graphic_pane_g2

0x50fd,	// (0x000241b2) list_single_2graphic_pane_g3_ParamLimits

0x50fd,	// (0x000241b2) list_single_2graphic_pane_g3

0x57c5,	// (0x0002487a) list_single_2graphic_pane_g4_ParamLimits

0x57c5,	// (0x0002487a) list_single_2graphic_pane_g4

0x0003,

0xf73d,	// (0x0002e7f2) list_single_2graphic_pane_g_ParamLimits

0xf73d,	// (0x0002e7f2) list_single_2graphic_pane_g

0x57d1,	// (0x00024886) list_single_2graphic_pane_t1_ParamLimits

0x57d1,	// (0x00024886) list_single_2graphic_pane_t1

0x57ff,	// (0x000248b4) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x57ff,	// (0x000248b4) list_double2_graphic_large_graphic_pane_g1

0x51ee,	// (0x000242a3) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x51ee,	// (0x000242a3) list_double2_graphic_large_graphic_pane_g2

0x51ba,	// (0x0002426f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x51ba,	// (0x0002426f) list_double2_graphic_large_graphic_pane_g3

0x5811,	// (0x000248c6) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5811,	// (0x000248c6) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf746,	// (0x0002e7fb) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf746,	// (0x0002e7fb) list_double2_graphic_large_graphic_pane_g

0x581d,	// (0x000248d2) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x581d,	// (0x000248d2) list_double2_graphic_large_graphic_pane_t1

0x5833,	// (0x000248e8) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5833,	// (0x000248e8) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74f,	// (0x0002e804) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74f,	// (0x0002e804) list_double2_graphic_large_graphic_pane_t

0x703d,	// (0x000260f2) popup_fast_swap_window_ParamLimits

0x703d,	// (0x000260f2) popup_fast_swap_window

0x705b,	// (0x00026110) popup_side_volume_key_window

0x7079,	// (0x0002612e) stacon_top_pane

0x7083,	// (0x00026138) status_pane_ParamLimits

0x7083,	// (0x00026138) status_pane

0x7079,	// (0x0002612e) status_small_pane

0x0a96,	// (0x0001fb4b) control_pane

0x0a96,	// (0x0001fb4b) stacon_bottom_pane

0x2c04,	// (0x00021cb9) scroll_pane_cp121

0x2bfb,	// (0x00021cb0) set_content_pane

0x6dc0,	// (0x00025e75) bg_active_tab_pane_g1_cp1

0x6dc9,	// (0x00025e7e) bg_active_tab_pane_g2_cp1

0x6dd2,	// (0x00025e87) bg_active_tab_pane_g3_cp1

0x6dc0,	// (0x00025e75) bg_passive_tab_pane_g1_cp1

0x6dc9,	// (0x00025e7e) bg_passive_tab_pane_g2_cp1

0x6dd2,	// (0x00025e87) bg_passive_tab_pane_g3_cp1

0x6ddb,	// (0x00025e90) bg_active_tab_pane_g1_cp2

0x6dc9,	// (0x00025e7e) bg_active_tab_pane_g2_cp2

0x6de4,	// (0x00025e99) bg_active_tab_pane_g3_cp2

0x6ddb,	// (0x00025e90) bg_passive_tab_pane_g1_cp2

0x6dc9,	// (0x00025e7e) bg_passive_tab_pane_g2_cp2

0x6de4,	// (0x00025e99) bg_passive_tab_pane_g3_cp2

0x6ded,	// (0x00025ea2) bg_active_tab_pane_g1_cp3

0x6dc9,	// (0x00025e7e) bg_active_tab_pane_g2_cp3

0x6df6,	// (0x00025eab) bg_active_tab_pane_g3_cp3

0x6ded,	// (0x00025ea2) bg_passive_tab_pane_g1_cp3

0x6dc9,	// (0x00025e7e) bg_passive_tab_pane_g2_cp3

0x6df6,	// (0x00025eab) bg_passive_tab_pane_g3_cp3

0x6dff,	// (0x00025eb4) bg_active_tab_pane_g1_cp4

0x6dc9,	// (0x00025e7e) bg_active_tab_pane_g2_cp4

0x6e0a,	// (0x00025ebf) bg_active_tab_pane_g3_cp4

0x6dff,	// (0x00025eb4) bg_passive_tab_pane_g1_cp4

0x6dc9,	// (0x00025e7e) bg_passive_tab_pane_g2_cp4

0x6e0a,	// (0x00025ebf) bg_passive_tab_pane_g3_cp4

0x6f97,	// (0x0002604c) bg_active_tab_pane_g1_cp5

0x6dc9,	// (0x00025e7e) bg_active_tab_pane_g2_cp5

0x6fa0,	// (0x00026055) bg_active_tab_pane_g3_cp5

0x6f97,	// (0x0002604c) bg_passive_tab_pane_g1_cp5

0x6dc9,	// (0x00025e7e) bg_passive_tab_pane_g2_cp5

0x6fa0,	// (0x00026055) bg_passive_tab_pane_g3_cp5

0x6fa9,	// (0x0002605e) list_set_graphic_pane_ParamLimits

0x6fa9,	// (0x0002605e) list_set_graphic_pane

0x0a96,	// (0x0001fb4b) bg_set_opt_pane_cp4

0x6fbe,	// (0x00026073) list_set_graphic_pane_g1_ParamLimits

0x6fbe,	// (0x00026073) list_set_graphic_pane_g1

0x6fca,	// (0x0002607f) list_set_graphic_pane_g2_ParamLimits

0x6fca,	// (0x0002607f) list_set_graphic_pane_g2

0x0001,

0xf754,	// (0x0002e809) list_set_graphic_pane_g_ParamLimits

0xf754,	// (0x0002e809) list_set_graphic_pane_g

0x0009,

0xface,	// (0x0002eb83) volume_small_pane_cp_g

0x6fee,	// (0x000260a3) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x6fee,	// (0x000260a3) list_double2_large_graphic_pane_g1_cp2

0x6ffc,	// (0x000260b1) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x6ffc,	// (0x000260b1) list_double2_large_graphic_pane_g2_cp2

0x700d,	// (0x000260c2) list_double2_large_graphic_pane_g3_cp2

0x7015,	// (0x000260ca) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x7015,	// (0x000260ca) list_double2_large_graphic_pane_t1_cp2

0x702b,	// (0x000260e0) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x702b,	// (0x000260e0) list_double2_large_graphic_pane_t2_cp2

0xa60c,	// (0x000296c1) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa60c,	// (0x000296c1) list_double_large_graphic_pane_g1_cp2

0xa61f,	// (0x000296d4) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa61f,	// (0x000296d4) list_double_large_graphic_pane_g2_cp2

0x71a1,	// (0x00026256) list_double_large_graphic_pane_g3_cp2

0xa630,	// (0x000296e5) list_double_large_graphic_pane_g4_cp

0xa638,	// (0x000296ed) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa638,	// (0x000296ed) list_double_large_graphic_pane_t1_cp2

0xa64f,	// (0x00029704) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa64f,	// (0x00029704) list_double_large_graphic_pane_t2_cp2

0x7091,	// (0x00026146) list_double2_graphic_pane_g1_cp2_ParamLimits

0x7091,	// (0x00026146) list_double2_graphic_pane_g1_cp2

0x709f,	// (0x00026154) list_double2_graphic_pane_g2_cp2_ParamLimits

0x709f,	// (0x00026154) list_double2_graphic_pane_g2_cp2

0x70b0,	// (0x00026165) list_double2_graphic_pane_g3_cp2

0x70ba,	// (0x0002616f) list_double2_graphic_pane_t1_cp2_ParamLimits

0x70ba,	// (0x0002616f) list_double2_graphic_pane_t1_cp2

0x70d0,	// (0x00026185) list_double2_graphic_pane_t2_cp2_ParamLimits

0x70d0,	// (0x00026185) list_double2_graphic_pane_t2_cp2

0x70e2,	// (0x00026197) list_single_number_heading_pane_g1_cp2_ParamLimits

0x70e2,	// (0x00026197) list_single_number_heading_pane_g1_cp2

0x70ee,	// (0x000261a3) list_single_number_heading_pane_g2_cp2

0x70f6,	// (0x000261ab) list_single_number_heading_pane_t1_cp2_ParamLimits

0x70f6,	// (0x000261ab) list_single_number_heading_pane_t1_cp2

0x710c,	// (0x000261c1) list_single_number_heading_pane_t2_cp2_ParamLimits

0x710c,	// (0x000261c1) list_single_number_heading_pane_t2_cp2

0x7120,	// (0x000261d5) list_single_number_heading_pane_t3_cp2_ParamLimits

0x7120,	// (0x000261d5) list_single_number_heading_pane_t3_cp2

0x70e2,	// (0x00026197) list_single_heading_pane_g1_cp2_ParamLimits

0x70e2,	// (0x00026197) list_single_heading_pane_g1_cp2

0x70ee,	// (0x000261a3) list_single_heading_pane_g2_cp2

0x70f6,	// (0x000261ab) list_single_heading_pane_t1_cp2_ParamLimits

0x70f6,	// (0x000261ab) list_single_heading_pane_t1_cp2

0xa406,	// (0x000294bb) list_single_heading_pane_t2_cp2_ParamLimits

0xa406,	// (0x000294bb) list_single_heading_pane_t2_cp2

0xa34e,	// (0x00029403) list_double_graphic_pane_g1_cp2_ParamLimits

0xa34e,	// (0x00029403) list_double_graphic_pane_g1_cp2

0xa35a,	// (0x0002940f) list_double_graphic_pane_g2_cp2_ParamLimits

0xa35a,	// (0x0002940f) list_double_graphic_pane_g2_cp2

0xa369,	// (0x0002941e) list_double_graphic_pane_g3_cp2

0xa371,	// (0x00029426) list_double_graphic_pane_t1_cp2_ParamLimits

0xa371,	// (0x00029426) list_double_graphic_pane_t1_cp2

0xa387,	// (0x0002943c) list_double_graphic_pane_t2_cp2_ParamLimits

0xa387,	// (0x0002943c) list_double_graphic_pane_t2_cp2

0x7195,	// (0x0002624a) list_double_number_pane_g1_cp2_ParamLimits

0x7195,	// (0x0002624a) list_double_number_pane_g1_cp2

0x71a1,	// (0x00026256) list_double_number_pane_g2_cp2

0xa312,	// (0x000293c7) list_double_number_pane_t1_cp2_ParamLimits

0xa312,	// (0x000293c7) list_double_number_pane_t1_cp2

0xa326,	// (0x000293db) list_double_number_pane_t2_cp2_ParamLimits

0xa326,	// (0x000293db) list_double_number_pane_t2_cp2

0xa33c,	// (0x000293f1) list_double_number_pane_t3_cp2_ParamLimits

0xa33c,	// (0x000293f1) list_double_number_pane_t3_cp2

0xa1fb,	// (0x000292b0) list_single_graphic_pane_g1_cp2_ParamLimits

0xa1fb,	// (0x000292b0) list_single_graphic_pane_g1_cp2

0x71fb,	// (0x000262b0) list_single_graphic_pane_g2_cp2_ParamLimits

0x71fb,	// (0x000262b0) list_single_graphic_pane_g2_cp2

0x7207,	// (0x000262bc) list_single_graphic_pane_g3_cp2

0xa1d1,	// (0x00029286) list_single_graphic_pane_t1_cp2_ParamLimits

0xa1d1,	// (0x00029286) list_single_graphic_pane_t1_cp2

0x71fb,	// (0x000262b0) list_single_number_pane_g1_cp2_ParamLimits

0x71fb,	// (0x000262b0) list_single_number_pane_g1_cp2

0x7207,	// (0x000262bc) list_single_number_pane_g2_cp2

0xa1d1,	// (0x00029286) list_single_number_pane_t1_cp2_ParamLimits

0xa1d1,	// (0x00029286) list_single_number_pane_t1_cp2

0xa1e7,	// (0x0002929c) list_single_number_pane_t2_cp2_ParamLimits

0xa1e7,	// (0x0002929c) list_single_number_pane_t2_cp2

0x6ffc,	// (0x000260b1) list_double2_pane_g1_cp2_ParamLimits

0x6ffc,	// (0x000260b1) list_double2_pane_g1_cp2

0x700d,	// (0x000260c2) list_double2_pane_g2_cp2

0x716d,	// (0x00026222) list_double2_pane_t1_cp2_ParamLimits

0x716d,	// (0x00026222) list_double2_pane_t1_cp2

0x7183,	// (0x00026238) list_double2_pane_t2_cp2_ParamLimits

0x7183,	// (0x00026238) list_double2_pane_t2_cp2

0x7195,	// (0x0002624a) list_double_pane_g1_cp2_ParamLimits

0x7195,	// (0x0002624a) list_double_pane_g1_cp2

0x71a1,	// (0x00026256) list_double_pane_g2_cp2

0x71a9,	// (0x0002625e) list_double_pane_t1_cp2_ParamLimits

0x71a9,	// (0x0002625e) list_double_pane_t1_cp2

0x71bf,	// (0x00026274) list_double_pane_t2_cp2_ParamLimits

0x71bf,	// (0x00026274) list_double_pane_t2_cp2

0x71eb,	// (0x000262a0) list_single_pane_cp2_g3

0x71fb,	// (0x000262b0) list_single_pane_g1_cp2_ParamLimits

0x71fb,	// (0x000262b0) list_single_pane_g1_cp2

0x7207,	// (0x000262bc) list_single_pane_g2_cp2

0x720f,	// (0x000262c4) list_single_pane_t1_cp2_ParamLimits

0x720f,	// (0x000262c4) list_single_pane_t1_cp2

0x7227,	// (0x000262dc) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x7227,	// (0x000262dc) list_single_large_graphic_pane_g1_cp2

0x7235,	// (0x000262ea) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x7235,	// (0x000262ea) list_single_large_graphic_pane_g2_cp2

0x7241,	// (0x000262f6) list_single_large_graphic_pane_g3_cp2

0x7249,	// (0x000262fe) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x7249,	// (0x000262fe) list_single_large_graphic_pane_g4_cp1

0x7263,	// (0x00026318) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x7263,	// (0x00026318) list_single_large_graphic_pane_t1_cp2

0xa19b,	// (0x00029250) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa19b,	// (0x00029250) list_single_graphic_heading_pane_g1_cp2

0xa168,	// (0x0002921d) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa168,	// (0x0002921d) list_single_graphic_heading_pane_g4_cp2

0x7207,	// (0x000262bc) list_single_graphic_heading_pane_g5_cp2

0xa1a7,	// (0x0002925c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa1a7,	// (0x0002925c) list_single_graphic_heading_pane_t1_cp2

0xa1bd,	// (0x00029272) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa1bd,	// (0x00029272) list_single_graphic_heading_pane_t2_cp2

0xa15c,	// (0x00029211) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa15c,	// (0x00029211) list_single_2graphic_pane_g1_cp2

0xa168,	// (0x0002921d) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa168,	// (0x0002921d) list_single_2graphic_pane_g2_cp2

0x7207,	// (0x000262bc) list_single_2graphic_pane_g3_cp2

0xa179,	// (0x0002922e) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa179,	// (0x0002922e) list_single_2graphic_pane_g4_cp2

0xa185,	// (0x0002923a) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa185,	// (0x0002923a) list_single_2graphic_pane_t1_cp2

0x0a8c,	// (0x0001fb41) list_highlight_pane_g10_cp1

0x9d34,	// (0x00028de9) list_highlight_pane_g1_cp1

0x9d3c,	// (0x00028df1) list_highlight_pane_g2_cp1

0x9d44,	// (0x00028df9) list_highlight_pane_g3_cp1

0x9d4c,	// (0x00028e01) list_highlight_pane_g4_cp1

0x9d54,	// (0x00028e09) list_highlight_pane_g5_cp1

0x9d5c,	// (0x00028e11) list_highlight_pane_g6_cp1

0x9d64,	// (0x00028e19) list_highlight_pane_g7_cp1

0x9d6c,	// (0x00028e21) list_highlight_pane_g8_cp1

0x9d74,	// (0x00028e29) list_highlight_pane_g9_cp1

0x9c54,	// (0x00028d09) form_field_slider_pane_t3

0x9c62,	// (0x00028d17) form_field_slider_pane_t4

0x9c70,	// (0x00028d25) slider_form_pane_ParamLimits

0x9c70,	// (0x00028d25) slider_form_pane

0x0a96,	// (0x0001fb4b) control_abbreviations

0x0a96,	// (0x0001fb4b) control_conventions

0x0a96,	// (0x0001fb4b) control_definitions

0x0a96,	// (0x0001fb4b) format_table_attribute

0xa45c,	// (0x00029511) bg_popup_preview_window_pane_g9

0x0a96,	// (0x0001fb4b) format_table_data2

0x0a96,	// (0x0001fb4b) format_table_data3

0x0a96,	// (0x0001fb4b) format_table_data_example

0x0008,

0x0a96,	// (0x0001fb4b) intro_purpose

0xf8f0,	// (0x0002e9a5) bg_popup_preview_window_pane_g

0x0a96,	// (0x0001fb4b) texts_category

0x0a96,	// (0x0001fb4b) texts_graphics

0x7279,	// (0x0002632e) text_digital

0x7288,	// (0x0002633d) text_primary

0x7297,	// (0x0002634c) text_primary_small

0x72a6,	// (0x0002635b) text_secondary

0x72b5,	// (0x0002636a) text_title

0xabcf,	// (0x00029c84) bg_passive_tab_pane_g1_cp3_srt

0x6dc9,	// (0x00025e7e) bg_passive_tab_pane_g2_cp3_srt

0xabd8,	// (0x00029c8d) bg_passive_tab_pane_g3_cp3_srt

0x0afe,	// (0x0001fbb3) bg_active_tab_pane_cp3_srt_ParamLimits

0x0afe,	// (0x0001fbb3) bg_active_tab_pane_cp3_srt

0xabe1,	// (0x00029c96) tabs_4_active_pane_srt_g1

0xabe9,	// (0x00029c9e) tabs_4_active_pane_srt_t1_ParamLimits

0xabe9,	// (0x00029c9e) tabs_4_active_pane_srt_t1

0xabcf,	// (0x00029c84) bg_active_tab_pane_g1_cp3_copy1

0x6dc9,	// (0x00025e7e) bg_active_tab_pane_g2_cp3_copy1

0xabd8,	// (0x00029c8d) bg_active_tab_pane_g3_cp3_copy1

0x0afe,	// (0x0001fbb3) tabs_2_long_active_pane_srt_ParamLimits

0x0afe,	// (0x0001fbb3) tabs_2_long_active_pane_srt

0x0afe,	// (0x0001fbb3) tabs_2_long_passive_pane_srt_ParamLimits

0x0afe,	// (0x0001fbb3) tabs_2_long_passive_pane_srt

0x698c,	// (0x00025a41) bg_passive_tab_pane_cp4_srt_ParamLimits

0x698c,	// (0x00025a41) bg_passive_tab_pane_cp4_srt

0xa899,	// (0x0002994e) bg_passive_tab_pane_g1_cp4_srt

0x6dc9,	// (0x00025e7e) bg_passive_tab_pane_g2_cp4_srt

0xa8a2,	// (0x00029957) bg_passive_tab_pane_g3_cp4_srt

0x33c7,	// (0x0002247c) bg_active_tab_pane_cp4_srt_ParamLimits

0x33c7,	// (0x0002247c) bg_active_tab_pane_cp4_srt

0xa8ab,	// (0x00029960) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa8ab,	// (0x00029960) tabs_2_long_active_pane_srt_t1

0xa899,	// (0x0002994e) bg_active_tab_pane_g1_cp4_srt

0x6dc9,	// (0x00025e7e) bg_active_tab_pane_g2_cp4_srt

0xa8a2,	// (0x00029957) bg_active_tab_pane_g3_cp4_srt

0x0af0,	// (0x0001fba5) tabs_3_long_active_pane_srt_ParamLimits

0x0af0,	// (0x0001fba5) tabs_3_long_active_pane_srt

0x0af0,	// (0x0001fba5) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0af0,	// (0x0001fba5) tabs_3_long_passive_pane_cp_srt

0x0af0,	// (0x0001fba5) tabs_3_long_passive_pane_srt_ParamLimits

0x0af0,	// (0x0001fba5) tabs_3_long_passive_pane_srt

0x698c,	// (0x00025a41) bg_passive_tab_pane_cp5_srt_ParamLimits

0x698c,	// (0x00025a41) bg_passive_tab_pane_cp5_srt

0x6f97,	// (0x0002604c) bg_passive_tab_pane_g1_cp5_srt

0x6dc9,	// (0x00025e7e) bg_passive_tab_pane_g2_cp5_srt

0x6fa0,	// (0x00026055) bg_passive_tab_pane_g3_cp5_srt

0x33c7,	// (0x0002247c) bg_active_tab_pane_cp5_srt_ParamLimits

0x33c7,	// (0x0002247c) bg_active_tab_pane_cp5_srt

0xa887,	// (0x0002993c) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa887,	// (0x0002993c) tabs_3_long_active_pane_srt_t1

0x6f97,	// (0x0002604c) bg_active_tab_pane_g1_cp5_srt

0x6dc9,	// (0x00025e7e) bg_active_tab_pane_g2_cp5_srt

0x6fa0,	// (0x00026055) bg_active_tab_pane_g3_cp5_srt

0xa879,	// (0x0002992e) navi_text_pane_srt_t1

0xa871,	// (0x00029926) navi_icon_pane_srt_g1

0x7529,	// (0x000265de) midp_editing_number_pane_srt

0x72c4,	// (0x00026379) midp_ticker_pane_srt

0x7531,	// (0x000265e6) midp_ticker_pane_srt_g1

0x7539,	// (0x000265ee) midp_ticker_pane_srt_g2

0x0001,

0xf773,	// (0x0002e828) midp_ticker_pane_srt_g

0x7541,	// (0x000265f6) midp_ticker_pane_srt_t1

0xa862,	// (0x00029917) midp_editing_number_pane_t1_copy1

0x698c,	// (0x00025a41) listscroll_midp_pane

0x698c,	// (0x00025a41) midp_form_pane

0x732e,	// (0x000263e3) midp_info_popup_window_ParamLimits

0x732e,	// (0x000263e3) midp_info_popup_window

0x2dc1,	// (0x00021e76) bg_popup_sub_pane_cp50_ParamLimits

0x2dc1,	// (0x00021e76) bg_popup_sub_pane_cp50

0x996a,	// (0x00028a1f) listscroll_midp_info_pane_ParamLimits

0x996a,	// (0x00028a1f) listscroll_midp_info_pane

0x9952,	// (0x00028a07) listscroll_form_midp_pane_ParamLimits

0x9952,	// (0x00028a07) listscroll_form_midp_pane

0x995e,	// (0x00028a13) scroll_bar_cp050

0x9932,	// (0x000289e7) list_midp_pane

0xb66a,	// (0x0002a71f) signal_pane_g2_cp

0x986c,	// (0x00028921) listscroll_midp_info_pane_t1_ParamLimits

0x986c,	// (0x00028921) listscroll_midp_info_pane_t1

0x9884,	// (0x00028939) listscroll_midp_info_pane_t2_ParamLimits

0x9884,	// (0x00028939) listscroll_midp_info_pane_t2

0x98c2,	// (0x00028977) listscroll_midp_info_pane_t3_ParamLimits

0x98c2,	// (0x00028977) listscroll_midp_info_pane_t3

0x98fc,	// (0x000289b1) listscroll_midp_info_pane_t4_ParamLimits

0x98fc,	// (0x000289b1) listscroll_midp_info_pane_t4

0x0003,

0xf82b,	// (0x0002e8e0) listscroll_midp_info_pane_t_ParamLimits

0xf82b,	// (0x0002e8e0) listscroll_midp_info_pane_t

0x2e41,	// (0x00021ef6) scroll_pane_cp21

0x9806,	// (0x000288bb) form_midp_field_choice_group_pane

0x980f,	// (0x000288c4) form_midp_field_text_pane

0x9852,	// (0x00028907) form_midp_field_time_pane

0x985a,	// (0x0002890f) form_midp_gauge_slider_pane

0x9863,	// (0x00028918) form_midp_gauge_wait_pane

0x0a96,	// (0x0001fb4b) form_midp_image_pane

0x59bc,	// (0x00024a71) list_single_midp_pane_ParamLimits

0x59bc,	// (0x00024a71) list_single_midp_pane

0x97ca,	// (0x0002887f) form_midp_field_text_pane_t1

0x95b6,	// (0x0002866b) input_focus_pane_cp050

0x97f5,	// (0x000288aa) list_midp_form_text_pane

0x9799,	// (0x0002884e) form_midp_field_choice_group_pane_t1

0x97a7,	// (0x0002885c) input_focus_pane_cp051

0x97bb,	// (0x00028870) list_midp_choice_pane

0x0a96,	// (0x0001fb4b) status_idle_pane

0x977d,	// (0x00028832) form_midp_field_time_pane_t1

0x0a8c,	// (0x0001fb41) wait_anim_pane_g2_copy1

0x978b,	// (0x00028840) form_midp_field_time_pane_t2

0x0001,

0x73de,	// (0x00026493) aid_navinavi_width_2_pane

0xf826,	// (0x0002e8db) form_midp_field_time_pane_t

0x0a96,	// (0x0001fb4b) input_focus_pane_cp052

0x0a96,	// (0x0001fb4b) bg_input_focus_pane_cp040

0x973d,	// (0x000287f2) form_midp_gauge_slider_pane_t1

0x974b,	// (0x00028800) form_midp_gauge_slider_pane_t2

0x9759,	// (0x0002880e) form_midp_gauge_slider_pane_t3

0x9767,	// (0x0002881c) form_midp_gauge_slider_pane_t4

0x0003,

0xf81d,	// (0x0002e8d2) form_midp_gauge_slider_pane_t

0x9775,	// (0x0002882a) form_midp_slider_pane

0x0afe,	// (0x0001fbb3) bg_input_focus_pane_cp041_ParamLimits

0x0afe,	// (0x0001fbb3) bg_input_focus_pane_cp041

0x970a,	// (0x000287bf) form_midp_gauge_wait_pane_t1_ParamLimits

0x970a,	// (0x000287bf) form_midp_gauge_wait_pane_t1

0x971c,	// (0x000287d1) form_midp_gauge_wait_pane_t2_ParamLimits

0x971c,	// (0x000287d1) form_midp_gauge_wait_pane_t2

0x0001,

0xf818,	// (0x0002e8cd) form_midp_gauge_wait_pane_t_ParamLimits

0xf818,	// (0x0002e8cd) form_midp_gauge_wait_pane_t

0x972e,	// (0x000287e3) form_midp_wait_pane_ParamLimits

0x972e,	// (0x000287e3) form_midp_wait_pane

0x96d2,	// (0x00028787) form_midp_image_pane_g1

0x96db,	// (0x00028790) form_midp_image_pane_t1

0x96ea,	// (0x0002879f) form_midp_image_pane_t2

0x96f9,	// (0x000287ae) form_midp_image_pane_t3

0x0002,

0xf811,	// (0x0002e8c6) form_midp_image_pane_t

0x96c9,	// (0x0002877e) list_single_midp_pane_g1

0x59ad,	// (0x00024a62) list_single_midp_pane_t1

0x96af,	// (0x00028764) list_midp_form_item_pane_ParamLimits

0x96af,	// (0x00028764) list_midp_form_item_pane

0x7386,	// (0x0002643b) list_midp_form_item_pane_t1

0x7395,	// (0x0002644a) midp_ticker_pane_g1

0x73a1,	// (0x00026456) midp_ticker_pane_g2

0x0001,

0xf759,	// (0x0002e80e) midp_ticker_pane_g

0x73ad,	// (0x00026462) midp_ticker_pane_t1

0xaad5,	// (0x00029b8a) midp_editing_number_pane_t1

0xaab3,	// (0x00029b68) midp_editing_number_pane

0xaac2,	// (0x00029b77) midp_ticker_pane

0xa852,	// (0x00029907) ai_message_heading_pane

0x0a96,	// (0x0001fb4b) bg_popup_window_pane_cp14

0xa85a,	// (0x0002990f) listscroll_ai_message_pane

0xa7d8,	// (0x0002988d) ai_message_heading_pane_g1_ParamLimits

0xa7d8,	// (0x0002988d) ai_message_heading_pane_g1

0xa7e4,	// (0x00029899) ai_message_heading_pane_g2_ParamLimits

0xa7e4,	// (0x00029899) ai_message_heading_pane_g2

0xa7f2,	// (0x000298a7) ai_message_heading_pane_g3_ParamLimits

0xa7f2,	// (0x000298a7) ai_message_heading_pane_g3

0xa7fe,	// (0x000298b3) ai_message_heading_pane_g4_ParamLimits

0xa7fe,	// (0x000298b3) ai_message_heading_pane_g4

0x0003,

0xf952,	// (0x0002ea07) ai_message_heading_pane_g_ParamLimits

0xf952,	// (0x0002ea07) ai_message_heading_pane_g

0xa80a,	// (0x000298bf) ai_message_heading_pane_t1_ParamLimits

0xa80a,	// (0x000298bf) ai_message_heading_pane_t1

0xa824,	// (0x000298d9) ai_message_heading_pane_t2_ParamLimits

0xa824,	// (0x000298d9) ai_message_heading_pane_t2

0x0001,

0xf95b,	// (0x0002ea10) ai_message_heading_pane_t_ParamLimits

0xf95b,	// (0x0002ea10) ai_message_heading_pane_t

0xa838,	// (0x000298ed) bg_popup_heading_pane_cp1_ParamLimits

0xa838,	// (0x000298ed) bg_popup_heading_pane_cp1

0xa7c6,	// (0x0002987b) list_ai_message_pane_ParamLimits

0xa7c6,	// (0x0002987b) list_ai_message_pane

0x2e41,	// (0x00021ef6) scroll_pane_cp10

0xa762,	// (0x00029817) list_ai_message_pane_g1

0xa76a,	// (0x0002981f) list_ai_message_pane_g2

0x0001,

0xf92f,	// (0x0002e9e4) list_ai_message_pane_g

0xa772,	// (0x00029827) list_ai_message_pane_t1_ParamLimits

0xa772,	// (0x00029827) list_ai_message_pane_t1

0xa787,	// (0x0002983c) list_ai_message_pane_t2_ParamLimits

0xa787,	// (0x0002983c) list_ai_message_pane_t2

0xa79c,	// (0x00029851) list_ai_message_pane_t3_ParamLimits

0xa79c,	// (0x00029851) list_ai_message_pane_t3

0xa7b1,	// (0x00029866) list_ai_message_pane_t4_ParamLimits

0xa7b1,	// (0x00029866) list_ai_message_pane_t4

0x0003,

0xf934,	// (0x0002e9e9) list_ai_message_pane_t_ParamLimits

0xf934,	// (0x0002e9e9) list_ai_message_pane_t

0xa74b,	// (0x00029800) cell_ai_soft_ind_pane_ParamLimits

0xa74b,	// (0x00029800) cell_ai_soft_ind_pane

0x73bf,	// (0x00026474) cell_ai_soft_ind_pane_g1_ParamLimits

0x73bf,	// (0x00026474) cell_ai_soft_ind_pane_g1

0x0a96,	// (0x0001fb4b) grid_highlight_cp1

0x73cc,	// (0x00026481) text_secondary_cp56_ParamLimits

0x73cc,	// (0x00026481) text_secondary_cp56

0xa720,	// (0x000297d5) example_general_pane_ParamLimits

0xa720,	// (0x000297d5) example_general_pane

0xa72c,	// (0x000297e1) example_parent_pane_g1_ParamLimits

0xa72c,	// (0x000297e1) example_parent_pane_g1

0xa738,	// (0x000297ed) example_parent_pane_t1_ParamLimits

0xa738,	// (0x000297ed) example_parent_pane_t1

0x7c00,	// (0x00026cb5) popup_preview_text_window_ParamLimits

0x7c00,	// (0x00026cb5) popup_preview_text_window

0x71f3,	// (0x000262a8) list_single_pane_cp2_g4

0x27b8,	// (0x0002186d) bg_popup_preview_window_pane_ParamLimits

0x27b8,	// (0x0002186d) bg_popup_preview_window_pane

0xa466,	// (0x0002951b) popup_preview_text_window_t1_ParamLimits

0xa466,	// (0x0002951b) popup_preview_text_window_t1

0xa484,	// (0x00029539) popup_preview_text_window_t2_ParamLimits

0xa484,	// (0x00029539) popup_preview_text_window_t2

0xa4cd,	// (0x00029582) popup_preview_text_window_t3_ParamLimits

0xa4cd,	// (0x00029582) popup_preview_text_window_t3

0xa512,	// (0x000295c7) popup_preview_text_window_t4_ParamLimits

0xa512,	// (0x000295c7) popup_preview_text_window_t4

0x0004,

0xf903,	// (0x0002e9b8) popup_preview_text_window_t_ParamLimits

0xf903,	// (0x0002e9b8) popup_preview_text_window_t

0xa590,	// (0x00029645) scroll_pane_cp11

0x83aa,	// (0x0002745f) bg_popup_preview_window_pane_g1

0xa41a,	// (0x000294cf) bg_popup_preview_window_pane_g2

0xa424,	// (0x000294d9) bg_popup_preview_window_pane_g3

0xa42e,	// (0x000294e3) bg_popup_preview_window_pane_g4

0xa438,	// (0x000294ed) bg_popup_preview_window_pane_g5

0xa442,	// (0x000294f7) bg_popup_preview_window_pane_g6

0xa44a,	// (0x000294ff) bg_popup_preview_window_pane_g7

0xa452,	// (0x00029507) bg_popup_preview_window_pane_g8

0x61a5,	// (0x0002525a) aid_popup_width_pane

0x7bdc,	// (0x00026c91) popup_midp_note_alarm_window_ParamLimits

0x7bdc,	// (0x00026c91) popup_midp_note_alarm_window

0x2c6c,	// (0x00021d21) data_form_pane_ParamLimits

0x5608,	// (0x000246bd) form_field_data_pane_g1

0x5612,	// (0x000246c7) form_field_data_pane_t1_ParamLimits

0x2c78,	// (0x00021d2d) input_focus_pane_ParamLimits

0x562c,	// (0x000246e1) data_form_wide_pane_ParamLimits

0x563d,	// (0x000246f2) form_field_data_wide_pane_g1

0x5649,	// (0x000246fe) form_field_data_wide_pane_t1_ParamLimits

0x296d,	// (0x00021a22) input_focus_pane_cp6_ParamLimits

0x6951,	// (0x00025a06) input_popup_find_pane_g1_ParamLimits

0x6951,	// (0x00025a06) input_popup_find_pane_g1

0x6aaa,	// (0x00025b5f) aid_navi_side_left_pane

0x6abf,	// (0x00025b74) aid_navi_side_right_pane

0x9e2f,	// (0x00028ee4) bg_popup_window_pane_cp30_ParamLimits

0x9e2f,	// (0x00028ee4) bg_popup_window_pane_cp30

0x9ea9,	// (0x00028f5e) popup_midp_note_alarm_window_g1_ParamLimits

0x9ea9,	// (0x00028f5e) popup_midp_note_alarm_window_g1

0x9ed9,	// (0x00028f8e) popup_midp_note_alarm_window_t1_ParamLimits

0x9ed9,	// (0x00028f8e) popup_midp_note_alarm_window_t1

0x9f7a,	// (0x0002902f) popup_midp_note_alarm_window_t2_ParamLimits

0x9f7a,	// (0x0002902f) popup_midp_note_alarm_window_t2

0xa028,	// (0x000290dd) popup_midp_note_alarm_window_t3_ParamLimits

0xa028,	// (0x000290dd) popup_midp_note_alarm_window_t3

0xa05a,	// (0x0002910f) popup_midp_note_alarm_window_t4_ParamLimits

0xa05a,	// (0x0002910f) popup_midp_note_alarm_window_t4

0xa080,	// (0x00029135) popup_midp_note_alarm_window_t5_ParamLimits

0xa080,	// (0x00029135) popup_midp_note_alarm_window_t5

0x000a,

0xf8a0,	// (0x0002e955) popup_midp_note_alarm_window_t_ParamLimits

0xf8a0,	// (0x0002e955) popup_midp_note_alarm_window_t

0xa12c,	// (0x000291e1) wait_bar_pane_cp1_ParamLimits

0xa12c,	// (0x000291e1) wait_bar_pane_cp1

0x0a96,	// (0x0001fb4b) wait_anim_pane_copy1

0x0a96,	// (0x0001fb4b) wait_border_pane_copy1

0x9b14,	// (0x00028bc9) wait_border_pane_g1_copy1

0x5663,	// (0x00024718) form_field_popup_pane_g1

0x566b,	// (0x00024720) form_field_popup_pane_t1_ParamLimits

0x2c78,	// (0x00021d2d) input_focus_pane_cp7_ParamLimits

0x2ce5,	// (0x00021d9a) list_form_pane_ParamLimits

0x5685,	// (0x0002473a) form_field_popup_wide_pane_g1

0x568d,	// (0x00024742) form_field_popup_wide_pane_t1_ParamLimits

0x2c78,	// (0x00021d2d) input_focus_pane_cp8_ParamLimits

0x2d0e,	// (0x00021dc3) list_form_wide_pane_ParamLimits

0xac5c,	// (0x00029d11) aid_size_cell_graphic_pane

0x5719,	// (0x000247ce) data_form_pane_t1_ParamLimits

0x5a07,	// (0x00024abc) data_form_wide_pane_t1_ParamLimits

0x7f27,	// (0x00026fdc) bg_status_flat_pane

0x65b6,	// (0x0002566b) title_pane_t1_ParamLimits

0x0ab8,	// (0x0001fb6d) title_pane_t2_ParamLimits

0x0ade,	// (0x0001fb93) title_pane_t3_ParamLimits

0xf55d,	// (0x0002e612) title_pane_t_ParamLimits

0x6bf7,	// (0x00025cac) level_1_signal_ParamLimits

0x6c04,	// (0x00025cb9) level_2_signal_ParamLimits

0x6c11,	// (0x00025cc6) level_3_signal_ParamLimits

0x6c1e,	// (0x00025cd3) level_4_signal_ParamLimits

0x6c2b,	// (0x00025ce0) level_5_signal_ParamLimits

0x6c38,	// (0x00025ced) level_6_signal_ParamLimits

0x6c45,	// (0x00025cfa) level_7_signal_ParamLimits

0x6bf7,	// (0x00025cac) level_1_battery_ParamLimits

0x6c04,	// (0x00025cb9) level_2_battery_ParamLimits

0x6c11,	// (0x00025cc6) level_3_battery_ParamLimits

0x6c1e,	// (0x00025cd3) level_4_battery_ParamLimits

0x6c2b,	// (0x00025ce0) level_5_battery_ParamLimits

0x6c38,	// (0x00025ced) level_6_battery_ParamLimits

0x6c45,	// (0x00025cfa) level_7_battery_ParamLimits

0x9d34,	// (0x00028de9) bg_status_flat_pane_g1

0x9d3c,	// (0x00028df1) bg_status_flat_pane_g2

0x9d44,	// (0x00028df9) bg_status_flat_pane_g3

0x9d4c,	// (0x00028e01) bg_status_flat_pane_g4

0x9d54,	// (0x00028e09) bg_status_flat_pane_g5

0x9d5c,	// (0x00028e11) bg_status_flat_pane_g6

0x9d64,	// (0x00028e19) bg_status_flat_pane_g7

0x6626,	// (0x000256db) tabs_3_active_pane_t1_ParamLimits

0x6626,	// (0x000256db) tabs_3_passive_pane_t1_ParamLimits

0x6640,	// (0x000256f5) tabs_4_active_pane_t1_ParamLimits

0x6640,	// (0x000256f5) tabs_4_1_passive_pane_t1_ParamLimits

0x6967,	// (0x00025a1c) tabs_2_active_pane_t1_ParamLimits

0x6967,	// (0x00025a1c) tabs_2_passive_pane_t1_ParamLimits

0x33c7,	// (0x0002247c) bg_active_tab_pane_cp4_ParamLimits

0x6979,	// (0x00025a2e) tabs_2_long_active_pane_t1_ParamLimits

0x698c,	// (0x00025a41) bg_passive_tab_pane_cp4_ParamLimits

0x843e,	// (0x000274f3) list_single_midp_graphic_pane_t1_ParamLimits

0x33c7,	// (0x0002247c) bg_active_tab_pane_cp5_ParamLimits

0x6998,	// (0x00025a4d) tabs_3_long_active_pane_t1_ParamLimits

0x698c,	// (0x00025a41) bg_passive_tab_pane_cp5_ParamLimits

0x843e,	// (0x000274f3) list_single_midp_graphic_pane_t1

0x7f27,	// (0x00026fdc) bg_status_flat_pane_ParamLimits

0x7ff2,	// (0x000270a7) indicator_pane_cp2_ParamLimits

0x7ff2,	// (0x000270a7) indicator_pane_cp2

0x8135,	// (0x000271ea) navi_pane_srt_ParamLimits

0x8135,	// (0x000271ea) navi_pane_srt

0x8159,	// (0x0002720e) popup_clock_digital_analogue_window_cp1

0x0b5c,	// (0x0001fc11) indicator_pane_t1

0x72c4,	// (0x00026379) copy_highlight_pane

0x72c4,	// (0x00026379) cursor_graphics_pane

0x72c4,	// (0x00026379) graphic_within_text_pane

0x72c4,	// (0x00026379) link_highlight_pane

0xa553,	// (0x00029608) popup_preview_text_window_t5_ParamLimits

0xa553,	// (0x00029608) popup_preview_text_window_t5

0x73e8,	// (0x0002649d) cursor_digital_pane

0x73e8,	// (0x0002649d) cursor_primary_pane

0x73f9,	// (0x000264ae) cursor_primary_small_pane

0x7401,	// (0x000264b6) cursor_secondary_pane

0x7409,	// (0x000264be) cursor_title_pane

0x73e8,	// (0x0002649d) link_highlight_digital_pane

0x73f0,	// (0x000264a5) link_highlight_primary_pane

0x73f9,	// (0x000264ae) link_highlight_primary_small_pane

0x7401,	// (0x000264b6) link_highlight_secondary_pane

0x7409,	// (0x000264be) link_highlight_title_pane

0x73e8,	// (0x0002649d) copy_highlight_digital_pane

0x73e8,	// (0x0002649d) copy_highlight_primary_pane

0x73f9,	// (0x000264ae) copy_highlight_primary_small_pane

0x7401,	// (0x000264b6) copy_highlight_secondary_pane

0x7409,	// (0x000264be) copy_highlight_title_pane

0x7401,	// (0x000264b6) graphic_text_digital_pane

0x9dd2,	// (0x00028e87) graphic_text_primary_pane

0x9ddb,	// (0x00028e90) graphic_text_primary_small_pane

0x73f9,	// (0x000264ae) graphic_text_secondary_pane

0x73e8,	// (0x0002649d) graphic_text_title_pane

0x7411,	// (0x000264c6) cursor_primary_pane_g1

0x9dc4,	// (0x00028e79) cursor_text_primary_t1

0x9dac,	// (0x00028e61) cursor_primary_small_pane_g1

0x9db6,	// (0x00028e6b) cursor_text_primary_small_t1

0x9d94,	// (0x00028e49) cursor_primary_small_pane_g1_copy1

0x9d9e,	// (0x00028e53) cursor_text_primary_small_t1_copy1

0x9d7c,	// (0x00028e31) cursor_text_title_t1

0x9d8a,	// (0x00028e3f) cursor_title_pane_g1

0x7411,	// (0x000264c6) cursor_digital_pane_g1

0x741b,	// (0x000264d0) cursor_text_digital_t1

0x7429,	// (0x000264de) link_highlight_primary_pane_g1

0x9d25,	// (0x00028dda) link_highlight_primary_pane_t1

0x7429,	// (0x000264de) link_highlight_primary_small_pane_g1

0x7431,	// (0x000264e6) link_highlight_primary_small_pane_t1

0x7440,	// (0x000264f5) link_highlight_secondary_pane_g1

0x7448,	// (0x000264fd) link_highlight_secondary_pane_t1

0x9c99,	// (0x00028d4e) link_highlight_title_pane_g1

0x9ca1,	// (0x00028d56) link_highlight_title_pane_t1

0x9c82,	// (0x00028d37) link_highlight_digital_pane_g1

0x9c8a,	// (0x00028d3f) link_highlight_digital_pane_t1

0x9b4a,	// (0x00028bff) copy_highlight_primary_pane_g1

0x9b61,	// (0x00028c16) copy_highlight_primary_pane_t1

0x9b4a,	// (0x00028bff) copy_highlight_primary_small_pane_g1

0x9b52,	// (0x00028c07) copy_highlight_primary_small_pane_t1

0x7457,	// (0x0002650c) copy_highlight_secondary_pane_g1

0x745f,	// (0x00026514) copy_highlight_secondary_pane_t1

0x9b33,	// (0x00028be8) copy_highlight_title_pane_g1

0x9b3b,	// (0x00028bf0) copy_highlight_title_pane_t1

0x9b4a,	// (0x00028bff) copy_highlight_digital_pane_g1

0xae2c,	// (0x00029ee1) copy_highlight_digital_pane_t1

0xad80,	// (0x00029e35) graphic_text_primary_pane_g1

0xae10,	// (0x00029ec5) graphic_text_primary_pane_t1

0xae1e,	// (0x00029ed3) graphic_text_primary_pane_t2

0x0001,

0xf9cf,	// (0x0002ea84) graphic_text_primary_pane_t

0xadec,	// (0x00029ea1) graphic_text_primary_small_pane_g1

0xadf4,	// (0x00029ea9) graphic_text_primary_small_pane_t1

0xae02,	// (0x00029eb7) graphic_text_primary_small_pane_t2

0x0001,

0xf9ca,	// (0x0002ea7f) graphic_text_primary_small_pane_t

0xadc8,	// (0x00029e7d) graphic_text_secondary_pane_g1

0xadd0,	// (0x00029e85) graphic_text_secondary_pane_t1

0xadde,	// (0x00029e93) graphic_text_secondary_pane_t2

0x0001,

0xf9c5,	// (0x0002ea7a) graphic_text_secondary_pane_t

0xada4,	// (0x00029e59) graphic_text_title_pane_g1

0xadac,	// (0x00029e61) graphic_text_title_pane_t1

0xadba,	// (0x00029e6f) graphic_text_title_pane_t2

0x0001,

0xf9c0,	// (0x0002ea75) graphic_text_title_pane_t

0xad80,	// (0x00029e35) graphic_text_digital_pane_g1

0xad88,	// (0x00029e3d) graphic_text_digital_pane_t1

0xad96,	// (0x00029e4b) graphic_text_digital_pane_t2

0x0001,

0xf9bb,	// (0x0002ea70) graphic_text_digital_pane_t

0x0afe,	// (0x0001fbb3) navi_icon_pane_srt_ParamLimits

0x0afe,	// (0x0001fbb3) navi_icon_pane_srt

0x0a96,	// (0x0001fb4b) navi_midp_pane_srt

0x0a96,	// (0x0001fb4b) navi_navi_pane_srt

0x0afe,	// (0x0001fbb3) navi_text_pane_srt_ParamLimits

0x0afe,	// (0x0001fbb3) navi_text_pane_srt

0xad4b,	// (0x00029e00) navi_navi_icon_text_pane_srt

0xad53,	// (0x00029e08) navi_navi_pane_srt_g1_ParamLimits

0xad53,	// (0x00029e08) navi_navi_pane_srt_g1

0xad65,	// (0x00029e1a) navi_navi_pane_srt_g2_ParamLimits

0xad65,	// (0x00029e1a) navi_navi_pane_srt_g2

0x0001,

0xf9b6,	// (0x0002ea6b) navi_navi_pane_srt_g_ParamLimits

0xf9b6,	// (0x0002ea6b) navi_navi_pane_srt_g

0xad77,	// (0x00029e2c) navi_navi_tabs_pane_srt

0xad4b,	// (0x00029e00) navi_navi_text_pane_srt

0xad4b,	// (0x00029e00) navi_navi_volume_pane_srt

0xad3c,	// (0x00029df1) navi_navi_text_pane_srt_t1

0x8798,	// (0x0002784d) navi_navi_volume_pane_srt_g1

0x87a0,	// (0x00027855) volume_small_pane_srt_ParamLimits

0x87a0,	// (0x00027855) volume_small_pane_srt

0x746e,	// (0x00026523) volume_small_pane_srt_g1_ParamLimits

0x746e,	// (0x00026523) volume_small_pane_srt_g1

0x747e,	// (0x00026533) volume_small_pane_srt_g2_ParamLimits

0x747e,	// (0x00026533) volume_small_pane_srt_g2

0x748f,	// (0x00026544) volume_small_pane_srt_g3_ParamLimits

0x748f,	// (0x00026544) volume_small_pane_srt_g3

0x74a0,	// (0x00026555) volume_small_pane_srt_g4_ParamLimits

0x74a0,	// (0x00026555) volume_small_pane_srt_g4

0x74b1,	// (0x00026566) volume_small_pane_srt_g5_ParamLimits

0x74b1,	// (0x00026566) volume_small_pane_srt_g5

0x74c2,	// (0x00026577) volume_small_pane_srt_g6_ParamLimits

0x74c2,	// (0x00026577) volume_small_pane_srt_g6

0x74d3,	// (0x00026588) volume_small_pane_srt_g7_ParamLimits

0x74d3,	// (0x00026588) volume_small_pane_srt_g7

0x74e4,	// (0x00026599) volume_small_pane_srt_g8_ParamLimits

0x74e4,	// (0x00026599) volume_small_pane_srt_g8

0x74f5,	// (0x000265aa) volume_small_pane_srt_g9_ParamLimits

0x74f5,	// (0x000265aa) volume_small_pane_srt_g9

0x7506,	// (0x000265bb) volume_small_pane_srt_g10_ParamLimits

0x7506,	// (0x000265bb) volume_small_pane_srt_g10

0x0009,

0xf75e,	// (0x0002e813) volume_small_pane_srt_g_ParamLimits

0xf75e,	// (0x0002e813) volume_small_pane_srt_g

0x286d,	// (0x00021922) query_popup_data_pane_cp2

0xad22,	// (0x00029dd7) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xad22,	// (0x00029dd7) navi_navi_icon_text_pane_srt_t1

0x9dd2,	// (0x00028e87) navi_tabs_2_long_pane_srt

0x9dd2,	// (0x00028e87) navi_tabs_2_pane_srt

0x9dd2,	// (0x00028e87) navi_tabs_3_long_pane_srt

0x9dd2,	// (0x00028e87) navi_tabs_3_pane_srt

0x9dd2,	// (0x00028e87) navi_tabs_4_pane_srt

0x8778,	// (0x0002782d) tabs_2_active_pane_srt_ParamLimits

0x8778,	// (0x0002782d) tabs_2_active_pane_srt

0x8788,	// (0x0002783d) tabs_2_passive_pane_srt_ParamLimits

0x8788,	// (0x0002783d) tabs_2_passive_pane_srt

0x7839,	// (0x000268ee) bg_passive_tab_pane_cp1_srt_ParamLimits

0x7839,	// (0x000268ee) bg_passive_tab_pane_cp1_srt

0xacee,	// (0x00029da3) bg_passive_tab_pane_g1_cp1_srt

0x6dc9,	// (0x00025e7e) bg_passive_tab_pane_g2_cp1_srt

0xacf7,	// (0x00029dac) bg_passive_tab_pane_g3_cp1_srt

0x0afe,	// (0x0001fbb3) bg_active_tab_pane_cp1_srt_ParamLimits

0x0afe,	// (0x0001fbb3) bg_active_tab_pane_cp1_srt

0xad00,	// (0x00029db5) tabs_2_active_pane_srt_g1

0xad08,	// (0x00029dbd) tabs_2_active_pane_srt_t1_ParamLimits

0xad08,	// (0x00029dbd) tabs_2_active_pane_srt_t1

0xacee,	// (0x00029da3) bg_active_tab_pane_g1_cp1_srt

0x6dc9,	// (0x00025e7e) bg_active_tab_pane_g2_cp1_srt

0xacf7,	// (0x00029dac) bg_active_tab_pane_g3_cp1_srt

0x8745,	// (0x000277fa) tabs_3_active_pane_srt_ParamLimits

0x8745,	// (0x000277fa) tabs_3_active_pane_srt

0x8756,	// (0x0002780b) tabs_3_passive_pane_cp_srt_ParamLimits

0x8756,	// (0x0002780b) tabs_3_passive_pane_cp_srt

0x8767,	// (0x0002781c) tabs_3_passive_pane_srt_ParamLimits

0x8767,	// (0x0002781c) tabs_3_passive_pane_srt

0x7839,	// (0x000268ee) bg_passive_tab_pane_cp2_srt_ParamLimits

0x7839,	// (0x000268ee) bg_passive_tab_pane_cp2_srt

0x7517,	// (0x000265cc) bg_passive_tab_pane_g1_cp2_srt

0x6dc9,	// (0x00025e7e) bg_passive_tab_pane_g2_cp2_srt

0x7520,	// (0x000265d5) bg_passive_tab_pane_g3_cp2_srt

0x0afe,	// (0x0001fbb3) bg_active_tab_pane_cp2_srt_ParamLimits

0x0afe,	// (0x0001fbb3) bg_active_tab_pane_cp2_srt

0xacd4,	// (0x00029d89) tabs_3_active_pane_srt_g1

0xacdc,	// (0x00029d91) tabs_3_active_pane_srt_t1_ParamLimits

0xacdc,	// (0x00029d91) tabs_3_active_pane_srt_t1

0x7517,	// (0x000265cc) bg_active_tab_pane_g1_cp2_srt

0x6dc9,	// (0x00025e7e) bg_active_tab_pane_g2_cp2_srt

0x7520,	// (0x000265d5) bg_active_tab_pane_g3_cp2_srt

0x86fd,	// (0x000277b2) tabs_4_active_pane_srt_ParamLimits

0x86fd,	// (0x000277b2) tabs_4_active_pane_srt

0x870f,	// (0x000277c4) tabs_4_passive_pane_cp2_srt_ParamLimits

0x870f,	// (0x000277c4) tabs_4_passive_pane_cp2_srt

0x77bf,	// (0x00026874) aid_size_cell_toolbar

0x698c,	// (0x00025a41) main_idle_act_pane_ParamLimits

0x7a02,	// (0x00026ab7) popup_large_graphic_colour_window_ParamLimits

0x7da9,	// (0x00026e5e) popup_toolbar_window_ParamLimits

0x7da9,	// (0x00026e5e) popup_toolbar_window

0x5a60,	// (0x00024b15) list_single_graphic_2heading_pane_ParamLimits

0x5a60,	// (0x00024b15) list_single_graphic_2heading_pane

0x3019,	// (0x000220ce) aid_size_cell_apps_grid_lsc_pane

0x302b,	// (0x000220e0) aid_size_cell_apps_grid_prt_pane

0x7839,	// (0x000268ee) bg_wml_button_pane_cp1_ParamLimits

0x7839,	// (0x000268ee) bg_wml_button_pane_cp1

0x97ca,	// (0x0002887f) form_midp_field_text_pane_t1_ParamLimits

0x95b6,	// (0x0002866b) input_focus_pane_cp050_ParamLimits

0x97f5,	// (0x000288aa) list_midp_form_text_pane_ParamLimits

0x97a7,	// (0x0002885c) input_focus_pane_cp051_ParamLimits

0x97bb,	// (0x00028870) list_midp_choice_pane_ParamLimits

0x966f,	// (0x00028724) list_single_2graphic_pane_cp3_ParamLimits

0x966f,	// (0x00028724) list_single_2graphic_pane_cp3

0x9688,	// (0x0002873d) list_single_midp_graphic_pane_ParamLimits

0x9688,	// (0x0002873d) list_single_midp_graphic_pane

0x5855,	// (0x0002490a) list_single_graphic_2heading_pane_g1_ParamLimits

0x5855,	// (0x0002490a) list_single_graphic_2heading_pane_g1

0x5861,	// (0x00024916) list_single_graphic_2heading_pane_g4_ParamLimits

0x5861,	// (0x00024916) list_single_graphic_2heading_pane_g4

0x586d,	// (0x00024922) list_single_graphic_2heading_pane_g5_ParamLimits

0x586d,	// (0x00024922) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b1,	// (0x0002e866) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b1,	// (0x0002e866) list_single_graphic_2heading_pane_g

0x5879,	// (0x0002492e) list_single_graphic_2heading_pane_t1_ParamLimits

0x5879,	// (0x0002492e) list_single_graphic_2heading_pane_t1

0x588d,	// (0x00024942) list_single_graphic_2heading_pane_t2_ParamLimits

0x588d,	// (0x00024942) list_single_graphic_2heading_pane_t2

0x58a9,	// (0x0002495e) list_single_graphic_2heading_pane_t3_ParamLimits

0x58a9,	// (0x0002495e) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b8,	// (0x0002e86d) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b8,	// (0x0002e86d) list_single_graphic_2heading_pane_t

0x82b8,	// (0x0002736d) bg_popup_sub_pane_cp2

0x82e2,	// (0x00027397) grid_toobar_pane

0x831e,	// (0x000273d3) cell_toolbar_pane_ParamLimits

0x831e,	// (0x000273d3) cell_toolbar_pane

0x834e,	// (0x00027403) cell_toolbar_pane_g1_ParamLimits

0x834e,	// (0x00027403) cell_toolbar_pane_g1

0x8362,	// (0x00027417) cell_toolbar_pane_g2_ParamLimits

0x8362,	// (0x00027417) cell_toolbar_pane_g2

0x0001,

0xf7c6,	// (0x0002e87b) cell_toolbar_pane_g_ParamLimits

0xf7c6,	// (0x0002e87b) cell_toolbar_pane_g

0x8384,	// (0x00027439) grid_highlight_pane_cp2_ParamLimits

0x8384,	// (0x00027439) grid_highlight_pane_cp2

0x839e,	// (0x00027453) toolbar_button_pane

0x83aa,	// (0x0002745f) toolbar_button_pane_g1

0x83b2,	// (0x00027467) toolbar_button_pane_g2

0x83ba,	// (0x0002746f) toolbar_button_pane_g3

0x83c2,	// (0x00027477) toolbar_button_pane_g4

0x83ca,	// (0x0002747f) toolbar_button_pane_g5

0x83d2,	// (0x00027487) toolbar_button_pane_g6

0x83da,	// (0x0002748f) toolbar_button_pane_g7

0x83e2,	// (0x00027497) toolbar_button_pane_g8

0x83ea,	// (0x0002749f) toolbar_button_pane_g9

0x0009,

0xf7cb,	// (0x0002e880) toolbar_button_pane_g

0x83fa,	// (0x000274af) list_single_2graphic_pane_g1_cp3_ParamLimits

0x83fa,	// (0x000274af) list_single_2graphic_pane_g1_cp3

0x8406,	// (0x000274bb) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8406,	// (0x000274bb) list_single_2graphic_pane_g2_cp3

0x70ee,	// (0x000261a3) list_single_2graphic_pane_g3_cp3

0x8417,	// (0x000274cc) list_single_2graphic_pane_g4_cp3_ParamLimits

0x8417,	// (0x000274cc) list_single_2graphic_pane_g4_cp3

0x8423,	// (0x000274d8) list_single_2graphic_pane_t1_cp3_ParamLimits

0x8423,	// (0x000274d8) list_single_2graphic_pane_t1_cp3

0x70e2,	// (0x00026197) list_single_midp_graphic_pane_g2_ParamLimits

0x70e2,	// (0x00026197) list_single_midp_graphic_pane_g2

0x77c7,	// (0x0002687c) aid_zoom_text_primary

0x5845,	// (0x000248fa) aid_zoom_text_secondary

0x75d4,	// (0x00026689) status_small_pane_g7_ParamLimits

0x75d4,	// (0x00026689) status_small_pane_g7

0x75f7,	// (0x000266ac) status_small_pane_t1_ParamLimits

0x65a5,	// (0x0002565a) title_pane_g2

0x0003,

0xf554,	// (0x0002e609) title_pane_g

0x67fa,	// (0x000258af) aid_size_cell_colour_1_pane_ParamLimits

0x67fa,	// (0x000258af) aid_size_cell_colour_1_pane

0x680e,	// (0x000258c3) aid_size_cell_colour_2_pane_ParamLimits

0x680e,	// (0x000258c3) aid_size_cell_colour_2_pane

0x6822,	// (0x000258d7) aid_size_cell_colour_3_pane_ParamLimits

0x6822,	// (0x000258d7) aid_size_cell_colour_3_pane

0x6836,	// (0x000258eb) aid_size_cell_colour_4_pane_ParamLimits

0x6836,	// (0x000258eb) aid_size_cell_colour_4_pane

0x69e6,	// (0x00025a9b) title_pane_stacon_g1_ParamLimits

0x69e6,	// (0x00025a9b) title_pane_stacon_g1

0x9bb8,	// (0x00028c6d) popup_note_wait_window_g3_ParamLimits

0x9bb8,	// (0x00028c6d) popup_note_wait_window_g3

0x9c2f,	// (0x00028ce4) popup_note_wait_window_t5_ParamLimits

0x9c2f,	// (0x00028ce4) popup_note_wait_window_t5

0x0a96,	// (0x0001fb4b) main_feb_china_hwr_fs_writing_pane

0x78c9,	// (0x0002697e) popup_feb_china_hwr_fs_window_ParamLimits

0x78c9,	// (0x0002697e) popup_feb_china_hwr_fs_window

0x8454,	// (0x00027509) aid_size_cell_hwr_fs_ParamLimits

0x8454,	// (0x00027509) aid_size_cell_hwr_fs

0x95b6,	// (0x0002866b) bg_popup_sub_pane_cp3_ParamLimits

0x95b6,	// (0x0002866b) bg_popup_sub_pane_cp3

0x8469,	// (0x0002751e) grid_hwr_fs_pane_ParamLimits

0x8469,	// (0x0002751e) grid_hwr_fs_pane

0x8481,	// (0x00027536) linegrid_hwr_fs_pane_ParamLimits

0x8481,	// (0x00027536) linegrid_hwr_fs_pane

0x8491,	// (0x00027546) cell_hwr_fs_pane_ParamLimits

0x8491,	// (0x00027546) cell_hwr_fs_pane

0x95c2,	// (0x00028677) linegrid_hwr_fs_pane_g1_ParamLimits

0x95c2,	// (0x00028677) linegrid_hwr_fs_pane_g1

0x95ce,	// (0x00028683) linegrid_hwr_fs_pane_g2_ParamLimits

0x95ce,	// (0x00028683) linegrid_hwr_fs_pane_g2

0x95e0,	// (0x00028695) linegrid_hwr_fs_pane_g3_ParamLimits

0x95e0,	// (0x00028695) linegrid_hwr_fs_pane_g3

0x84b5,	// (0x0002756a) linegrid_hwr_fs_pane_g4_ParamLimits

0x84b5,	// (0x0002756a) linegrid_hwr_fs_pane_g4

0x84d3,	// (0x00027588) linegrid_hwr_fs_pane_g5_ParamLimits

0x84d3,	// (0x00027588) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f6,	// (0x0002e8ab) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0002e8ab) linegrid_hwr_fs_pane_g

0x95ec,	// (0x000286a1) cell_hwr_fs_pane_g1_ParamLimits

0x95ec,	// (0x000286a1) cell_hwr_fs_pane_g1

0x81ef,	// (0x000272a4) cell_hwr_fs_pane_g2_ParamLimits

0x81ef,	// (0x000272a4) cell_hwr_fs_pane_g2

0x9602,	// (0x000286b7) cell_hwr_fs_pane_g3_ParamLimits

0x9602,	// (0x000286b7) cell_hwr_fs_pane_g3

0x960f,	// (0x000286c4) cell_hwr_fs_pane_g4_ParamLimits

0x960f,	// (0x000286c4) cell_hwr_fs_pane_g4

0x0003,

0xf801,	// (0x0002e8b6) cell_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x0002e8b6) cell_hwr_fs_pane_g

0x84e9,	// (0x0002759e) cell_hwr_fs_pane_t1

0x0a96,	// (0x0001fb4b) grid_highlight_pane_cp6

0x0a96,	// (0x0001fb4b) main_idle_act2_pane

0x2e28,	// (0x00021edd) aid_inside_area_popup_secondary

0xa268,	// (0x0002931d) aid_inside_area_window_primary_ParamLimits

0xa268,	// (0x0002931d) aid_inside_area_window_primary

0xae3b,	// (0x00029ef0) ai2_news_ticker_pane

0xae43,	// (0x00029ef8) aid_size_cell_ai1_link_ParamLimits

0xae43,	// (0x00029ef8) aid_size_cell_ai1_link

0xae5d,	// (0x00029f12) popup_ai2_data_window_ParamLimits

0xae5d,	// (0x00029f12) popup_ai2_data_window

0xae7b,	// (0x00029f30) popup_ai2_link_window_ParamLimits

0xae7b,	// (0x00029f30) popup_ai2_link_window

0x95b6,	// (0x0002866b) bg_popup_sub_pane_cp4_ParamLimits

0x95b6,	// (0x0002866b) bg_popup_sub_pane_cp4

0xae91,	// (0x00029f46) grid_ai2_link_pane_ParamLimits

0xae91,	// (0x00029f46) grid_ai2_link_pane

0xaea8,	// (0x00029f5d) popup_ai2_link_window_g1_ParamLimits

0xaea8,	// (0x00029f5d) popup_ai2_link_window_g1

0xaeb4,	// (0x00029f69) popup_ai2_link_window_g2_ParamLimits

0xaeb4,	// (0x00029f69) popup_ai2_link_window_g2

0x0001,

0xf9d4,	// (0x0002ea89) popup_ai2_link_window_g_ParamLimits

0xf9d4,	// (0x0002ea89) popup_ai2_link_window_g

0xaec5,	// (0x00029f7a) ai2_mp_button_pane

0xaecd,	// (0x00029f82) ai2_mp_volume_pane

0x97a7,	// (0x0002885c) bg_popup_sub_pane_cp5_ParamLimits

0x97a7,	// (0x0002885c) bg_popup_sub_pane_cp5

0xaed5,	// (0x00029f8a) heading_ai2_gene_pane_ParamLimits

0xaed5,	// (0x00029f8a) heading_ai2_gene_pane

0xaee1,	// (0x00029f96) list_ai2_gene_pane_ParamLimits

0xaee1,	// (0x00029f96) list_ai2_gene_pane

0xaf29,	// (0x00029fde) cell_ai2_link_pane_ParamLimits

0xaf29,	// (0x00029fde) cell_ai2_link_pane

0xaf3f,	// (0x00029ff4) cell_ai2_link_pane_g1

0x0a96,	// (0x0001fb4b) grid_highlight_pane_cp7

0x87b5,	// (0x0002786a) ai2_mp_volume_pane_g1

0xb012,	// (0x0002a0c7) ai2_mp_volume_pane_g2

0xaf87,	// (0x0002a03c) list_ai2_gene_pane_t1

0xb01a,	// (0x0002a0cf) ai2_mp_volume_pane_g3

0x0002,

0xf9ed,	// (0x0002eaa2) ai2_mp_volume_pane_g

0x87bd,	// (0x00027872) volume_small_pane_cp3

0xb022,	// (0x0002a0d7) aid_size_cell_ai2_button

0xb02a,	// (0x0002a0df) grid_ai2_button_pane

0xb033,	// (0x0002a0e8) cell_ai2_button_pane_ParamLimits

0xb033,	// (0x0002a0e8) cell_ai2_button_pane

0x0a8c,	// (0x0001fb41) cell_ai2_button_pane_g1

0x0a96,	// (0x0001fb4b) grid_highlight_pane_cp8

0xafd2,	// (0x0002a087) ai2_gene_pane_t1_ParamLimits

0xafd2,	// (0x0002a087) ai2_gene_pane_t1

0x77b5,	// (0x0002686a) aid_height_parent_landscape

0xa8fb,	// (0x000299b0) aid_height_set_list

0xa90c,	// (0x000299c1) aid_size_parent

0xac5c,	// (0x00029d11) aid_size_cell_graphic_pane_ParamLimits

0xaef1,	// (0x00029fa6) popup_ai2_data_window_g1_ParamLimits

0xaef1,	// (0x00029fa6) popup_ai2_data_window_g1

0xaefd,	// (0x00029fb2) ai2_news_ticker_pane_g1

0xaf05,	// (0x00029fba) ai2_news_ticker_pane_g2

0x0001,

0xf9d9,	// (0x0002ea8e) ai2_news_ticker_pane_g

0xaf0d,	// (0x00029fc2) ai2_news_ticker_pane_t1

0xaf1b,	// (0x00029fd0) ai2_news_ticker_pane_t2

0x0001,

0xf9de,	// (0x0002ea93) ai2_news_ticker_pane_t

0xaf48,	// (0x00029ffd) heading_ai2_gene_pane_g1

0xaf50,	// (0x0002a005) heading_ai2_gene_pane_t1_ParamLimits

0xaf50,	// (0x0002a005) heading_ai2_gene_pane_t1

0xaf65,	// (0x0002a01a) list_highlight_pane_cp6

0xaf6d,	// (0x0002a022) ai2_gene_pane_ParamLimits

0xaf6d,	// (0x0002a022) ai2_gene_pane

0xaf95,	// (0x0002a04a) list_ai2_gene_pane_t2

0x0001,

0xf9e3,	// (0x0002ea98) list_ai2_gene_pane_t

0xafa3,	// (0x0002a058) list_highlight_pane_cp8_ParamLimits

0xafa3,	// (0x0002a058) list_highlight_pane_cp8

0xafb4,	// (0x0002a069) ai2_gene_pane_g1_ParamLimits

0xafb4,	// (0x0002a069) ai2_gene_pane_g1

0xafc6,	// (0x0002a07b) ai2_gene_pane_g2_ParamLimits

0xafc6,	// (0x0002a07b) ai2_gene_pane_g2

0x0001,

0xf9e8,	// (0x0002ea9d) ai2_gene_pane_g_ParamLimits

0xf9e8,	// (0x0002ea9d) ai2_gene_pane_g

0x2b88,	// (0x00021c3d) scroll_pane_cp12

0x776c,	// (0x00026821) control_pane_t3_ParamLimits

0x776c,	// (0x00026821) control_pane_t3

0x75e8,	// (0x0002669d) status_small_pane_g8_ParamLimits

0x75e8,	// (0x0002669d) status_small_pane_g8

0x79c7,	// (0x00026a7c) popup_find_window_ParamLimits

0x7bf2,	// (0x00026ca7) popup_note_image_window_ParamLimits

0x58c1,	// (0x00024976) list_double2_graphic_pane_vc_g1_ParamLimits

0x58c1,	// (0x00024976) list_double2_graphic_pane_vc_g1

0x58cd,	// (0x00024982) list_double2_graphic_pane_vc_g2_ParamLimits

0x58cd,	// (0x00024982) list_double2_graphic_pane_vc_g2

0x58d9,	// (0x0002498e) list_double2_graphic_pane_vc_g3_ParamLimits

0x58d9,	// (0x0002498e) list_double2_graphic_pane_vc_g3

0x0002,

0xf7bf,	// (0x0002e874) list_double2_graphic_pane_vc_g_ParamLimits

0xf7bf,	// (0x0002e874) list_double2_graphic_pane_vc_g

0x58e5,	// (0x0002499a) list_double2_graphic_pane_vc_t1_ParamLimits

0x58e5,	// (0x0002499a) list_double2_graphic_pane_vc_t1

0x5861,	// (0x00024916) list_single_heading_pane_vc_g1_ParamLimits

0x5861,	// (0x00024916) list_single_heading_pane_vc_g1

0x586d,	// (0x00024922) list_single_heading_pane_vc_g2_ParamLimits

0x586d,	// (0x00024922) list_single_heading_pane_vc_g2

0x0001,

0xf7e0,	// (0x0002e895) list_single_heading_pane_vc_g_ParamLimits

0xf7e0,	// (0x0002e895) list_single_heading_pane_vc_g

0x58fb,	// (0x000249b0) list_single_heading_pane_vc_t1_ParamLimits

0x58fb,	// (0x000249b0) list_single_heading_pane_vc_t1

0x5913,	// (0x000249c8) list_single_heading_pane_vc_t2_ParamLimits

0x5913,	// (0x000249c8) list_single_heading_pane_vc_t2

0x0001,

0xf7e5,	// (0x0002e89a) list_single_heading_pane_vc_t_ParamLimits

0xf7e5,	// (0x0002e89a) list_single_heading_pane_vc_t

0x5925,	// (0x000249da) list_setting_number_pane_vc_g1_ParamLimits

0x5925,	// (0x000249da) list_setting_number_pane_vc_g1

0x5931,	// (0x000249e6) list_setting_number_pane_vc_g2_ParamLimits

0x5931,	// (0x000249e6) list_setting_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x0002e89f) list_setting_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x0002e89f) list_setting_number_pane_vc_g

0x593d,	// (0x000249f2) list_setting_number_pane_vc_t1_ParamLimits

0x593d,	// (0x000249f2) list_setting_number_pane_vc_t1

0x5951,	// (0x00024a06) list_setting_number_pane_vc_t2_ParamLimits

0x5951,	// (0x00024a06) list_setting_number_pane_vc_t2

0x596d,	// (0x00024a22) list_setting_number_pane_vc_t3_ParamLimits

0x596d,	// (0x00024a22) list_setting_number_pane_vc_t3

0x0002,

0xf7ef,	// (0x0002e8a4) list_setting_number_pane_vc_t_ParamLimits

0xf7ef,	// (0x0002e8a4) list_setting_number_pane_vc_t

0x599b,	// (0x00024a50) set_value_pane_vc_ParamLimits

0x599b,	// (0x00024a50) set_value_pane_vc

0x5a60,	// (0x00024b15) list_double2_graphic_pane_vc_ParamLimits

0x5a60,	// (0x00024b15) list_double2_graphic_pane_vc

0xaae4,	// (0x00029b99) list_double2_large_graphic_pane_vc_ParamLimits

0xaae4,	// (0x00029b99) list_double2_large_graphic_pane_vc

0x5a60,	// (0x00024b15) list_double2_pane_vc_ParamLimits

0x5a60,	// (0x00024b15) list_double2_pane_vc

0x5a60,	// (0x00024b15) list_double_graphic_heading_pane_vc_ParamLimits

0x5a60,	// (0x00024b15) list_double_graphic_heading_pane_vc

0x5a60,	// (0x00024b15) list_double_graphic_pane_vc_ParamLimits

0x5a60,	// (0x00024b15) list_double_graphic_pane_vc

0x5a60,	// (0x00024b15) list_double_heading_pane_vc_ParamLimits

0x5a60,	// (0x00024b15) list_double_heading_pane_vc

0xaae4,	// (0x00029b99) list_double_large_graphic_pane_vc_ParamLimits

0xaae4,	// (0x00029b99) list_double_large_graphic_pane_vc

0x5a60,	// (0x00024b15) list_double_number_pane_vc_ParamLimits

0x5a60,	// (0x00024b15) list_double_number_pane_vc

0x5a60,	// (0x00024b15) list_double_pane_vc_ParamLimits

0x5a60,	// (0x00024b15) list_double_pane_vc

0x5a60,	// (0x00024b15) list_double_time_pane_vc_ParamLimits

0x5a60,	// (0x00024b15) list_double_time_pane_vc

0x5a60,	// (0x00024b15) list_setting_number_pane_vc_ParamLimits

0x5a60,	// (0x00024b15) list_setting_number_pane_vc

0x5a60,	// (0x00024b15) list_setting_pane_vc_ParamLimits

0x5a60,	// (0x00024b15) list_setting_pane_vc

0x5a60,	// (0x00024b15) list_single_graphic_heading_pane_vc_ParamLimits

0x5a60,	// (0x00024b15) list_single_graphic_heading_pane_vc

0x5a60,	// (0x00024b15) list_single_heading_pane_vc_ParamLimits

0x5a60,	// (0x00024b15) list_single_heading_pane_vc

0xaaf8,	// (0x00029bad) list_single_number_heading_pane_vc_ParamLimits

0xaaf8,	// (0x00029bad) list_single_number_heading_pane_vc

0x58c1,	// (0x00024976) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x58c1,	// (0x00024976) list_double_graphic_heading_pane_vc_g1

0x5861,	// (0x00024916) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5861,	// (0x00024916) list_double_graphic_heading_pane_vc_g2

0x586d,	// (0x00024922) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x586d,	// (0x00024922) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f4,	// (0x0002eaa9) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f4,	// (0x0002eaa9) list_double_graphic_heading_pane_vc_g

0x5aa5,	// (0x00024b5a) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5aa5,	// (0x00024b5a) list_double_graphic_heading_pane_vc_t1

0x5abb,	// (0x00024b70) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5abb,	// (0x00024b70) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fb,	// (0x0002eab0) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fb,	// (0x0002eab0) list_double_graphic_heading_pane_vc_t

0x5925,	// (0x000249da) list_setting_pane_vc_g1_ParamLimits

0x5925,	// (0x000249da) list_setting_pane_vc_g1

0x5931,	// (0x000249e6) list_setting_pane_vc_g2_ParamLimits

0x5931,	// (0x000249e6) list_setting_pane_vc_g2

0x0001,

0xf7ea,	// (0x0002e89f) list_setting_pane_vc_g_ParamLimits

0xf7ea,	// (0x0002e89f) list_setting_pane_vc_g

0x5ad9,	// (0x00024b8e) list_setting_pane_vc_t1_ParamLimits

0x5ad9,	// (0x00024b8e) list_setting_pane_vc_t1

0x5af5,	// (0x00024baa) list_setting_pane_vc_t2_ParamLimits

0x5af5,	// (0x00024baa) list_setting_pane_vc_t2

0x0001,

0xfa29,	// (0x0002eade) list_setting_pane_vc_t_ParamLimits

0xfa29,	// (0x0002eade) list_setting_pane_vc_t

0x599b,	// (0x00024a50) set_value_pane_cp_vc_ParamLimits

0x599b,	// (0x00024a50) set_value_pane_cp_vc

0x5861,	// (0x00024916) list_single_number_heading_pane_vc_g1_ParamLimits

0x5861,	// (0x00024916) list_single_number_heading_pane_vc_g1

0x586d,	// (0x00024922) list_single_number_heading_pane_vc_g2_ParamLimits

0x586d,	// (0x00024922) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e0,	// (0x0002e895) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e0,	// (0x0002e895) list_single_number_heading_pane_vc_g

0x58fb,	// (0x000249b0) list_single_number_heading_pane_vc_t1_ParamLimits

0x58fb,	// (0x000249b0) list_single_number_heading_pane_vc_t1

0x5b11,	// (0x00024bc6) list_single_number_heading_pane_vc_t2_ParamLimits

0x5b11,	// (0x00024bc6) list_single_number_heading_pane_vc_t2

0x5b23,	// (0x00024bd8) list_single_number_heading_pane_vc_t3_ParamLimits

0x5b23,	// (0x00024bd8) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2e,	// (0x0002eae3) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2e,	// (0x0002eae3) list_single_number_heading_pane_vc_t

0x58c1,	// (0x00024976) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x58c1,	// (0x00024976) list_single_graphic_heading_pane_vc_g1

0x5861,	// (0x00024916) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x5861,	// (0x00024916) list_single_graphic_heading_pane_vc_g4

0x586d,	// (0x00024922) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x586d,	// (0x00024922) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9f4,	// (0x0002eaa9) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9f4,	// (0x0002eaa9) list_single_graphic_heading_pane_vc_g

0x58fb,	// (0x000249b0) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x58fb,	// (0x000249b0) list_single_graphic_heading_pane_vc_t1

0x5b35,	// (0x00024bea) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5b35,	// (0x00024bea) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa35,	// (0x0002eaea) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa35,	// (0x0002eaea) list_single_graphic_heading_pane_vc_t

0x5861,	// (0x00024916) list_double2_pane_vc_g1_ParamLimits

0x5861,	// (0x00024916) list_double2_pane_vc_g1

0x586d,	// (0x00024922) list_double2_pane_vc_g2_ParamLimits

0x586d,	// (0x00024922) list_double2_pane_vc_g2

0x0001,

0xf7e0,	// (0x0002e895) list_double2_pane_vc_g_ParamLimits

0xf7e0,	// (0x0002e895) list_double2_pane_vc_g

0x5b47,	// (0x00024bfc) list_double2_pane_vc_t1_ParamLimits

0x5b47,	// (0x00024bfc) list_double2_pane_vc_t1

0x5b5d,	// (0x00024c12) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5b5d,	// (0x00024c12) list_double2_large_graphic_pane_vc_g1

0x5b69,	// (0x00024c1e) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5b69,	// (0x00024c1e) list_double2_large_graphic_pane_vc_g2

0x5b75,	// (0x00024c2a) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5b75,	// (0x00024c2a) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3a,	// (0x0002eaef) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3a,	// (0x0002eaef) list_double2_large_graphic_pane_vc_g

0x5b81,	// (0x00024c36) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5b81,	// (0x00024c36) list_double2_large_graphic_pane_vc_t1

0x5b97,	// (0x00024c4c) list_double_time_pane_vc_g1_ParamLimits

0x5b97,	// (0x00024c4c) list_double_time_pane_vc_g1

0x5ba3,	// (0x00024c58) list_double_time_pane_vc_g2_ParamLimits

0x5ba3,	// (0x00024c58) list_double_time_pane_vc_g2

0x0001,

0xfa41,	// (0x0002eaf6) list_double_time_pane_vc_g_ParamLimits

0xfa41,	// (0x0002eaf6) list_double_time_pane_vc_g

0x5baf,	// (0x00024c64) list_double_time_pane_vc_t1_ParamLimits

0x5baf,	// (0x00024c64) list_double_time_pane_vc_t1

0x5bd9,	// (0x00024c8e) list_double_time_pane_vc_t2_ParamLimits

0x5bd9,	// (0x00024c8e) list_double_time_pane_vc_t2

0x5c22,	// (0x00024cd7) list_double_time_pane_vc_t3_ParamLimits

0x5c22,	// (0x00024cd7) list_double_time_pane_vc_t3

0x5c34,	// (0x00024ce9) list_double_time_pane_vc_t4_ParamLimits

0x5c34,	// (0x00024ce9) list_double_time_pane_vc_t4

0x0003,

0xfa46,	// (0x0002eafb) list_double_time_pane_vc_t_ParamLimits

0xfa46,	// (0x0002eafb) list_double_time_pane_vc_t

0x5861,	// (0x00024916) list_double_pane_vc_g1_ParamLimits

0x5861,	// (0x00024916) list_double_pane_vc_g1

0x586d,	// (0x00024922) list_double_pane_vc_g2_ParamLimits

0x586d,	// (0x00024922) list_double_pane_vc_g2

0x0001,

0xf7e0,	// (0x0002e895) list_double_pane_vc_g_ParamLimits

0xf7e0,	// (0x0002e895) list_double_pane_vc_g

0x5c59,	// (0x00024d0e) list_double_pane_vc_t1_ParamLimits

0x5c59,	// (0x00024d0e) list_double_pane_vc_t1

0x5c6d,	// (0x00024d22) list_double_pane_vc_t2_ParamLimits

0x5c6d,	// (0x00024d22) list_double_pane_vc_t2

0x0001,

0xfa4f,	// (0x0002eb04) list_double_pane_vc_t_ParamLimits

0xfa4f,	// (0x0002eb04) list_double_pane_vc_t

0x5861,	// (0x00024916) list_double_number_pane_vc_g1_ParamLimits

0x5861,	// (0x00024916) list_double_number_pane_vc_g1

0x586d,	// (0x00024922) list_double_number_pane_vc_g2_ParamLimits

0x586d,	// (0x00024922) list_double_number_pane_vc_g2

0x0001,

0xf7e0,	// (0x0002e895) list_double_number_pane_vc_g_ParamLimits

0xf7e0,	// (0x0002e895) list_double_number_pane_vc_g

0x5c83,	// (0x00024d38) list_double_number_pane_vc_t1_ParamLimits

0x5c83,	// (0x00024d38) list_double_number_pane_vc_t1

0x5c97,	// (0x00024d4c) list_double_number_pane_vc_t2_ParamLimits

0x5c97,	// (0x00024d4c) list_double_number_pane_vc_t2

0x5cab,	// (0x00024d60) list_double_number_pane_vc_t3_ParamLimits

0x5cab,	// (0x00024d60) list_double_number_pane_vc_t3

0x0002,

0xfa54,	// (0x0002eb09) list_double_number_pane_vc_t_ParamLimits

0xfa54,	// (0x0002eb09) list_double_number_pane_vc_t

0x5cc1,	// (0x00024d76) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5cc1,	// (0x00024d76) list_double_large_graphic_pane_vc_g1

0x5cd2,	// (0x00024d87) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5cd2,	// (0x00024d87) list_double_large_graphic_pane_vc_g2

0x5b75,	// (0x00024c2a) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5b75,	// (0x00024c2a) list_double_large_graphic_pane_vc_g3

0x5ce1,	// (0x00024d96) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5ce1,	// (0x00024d96) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5b,	// (0x0002eb10) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5b,	// (0x0002eb10) list_double_large_graphic_pane_vc_g

0x5ced,	// (0x00024da2) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5ced,	// (0x00024da2) list_double_large_graphic_pane_vc_t1

0x5d06,	// (0x00024dbb) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5d06,	// (0x00024dbb) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa64,	// (0x0002eb19) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa64,	// (0x0002eb19) list_double_large_graphic_pane_vc_t

0x5861,	// (0x00024916) list_double_heading_pane_vc_g1_ParamLimits

0x5861,	// (0x00024916) list_double_heading_pane_vc_g1

0x586d,	// (0x00024922) list_double_heading_pane_vc_g2_ParamLimits

0x586d,	// (0x00024922) list_double_heading_pane_vc_g2

0x0001,

0xf7e0,	// (0x0002e895) list_double_heading_pane_vc_g_ParamLimits

0xf7e0,	// (0x0002e895) list_double_heading_pane_vc_g

0x5d1d,	// (0x00024dd2) list_double_heading_pane_vc_t1_ParamLimits

0x5d1d,	// (0x00024dd2) list_double_heading_pane_vc_t1

0x58fb,	// (0x000249b0) list_double_heading_pane_vc_t2_ParamLimits

0x58fb,	// (0x000249b0) list_double_heading_pane_vc_t2

0x0001,

0xfa69,	// (0x0002eb1e) list_double_heading_pane_vc_t_ParamLimits

0xfa69,	// (0x0002eb1e) list_double_heading_pane_vc_t

0x5d2f,	// (0x00024de4) list_double_graphic_pane_vc_g1_ParamLimits

0x5d2f,	// (0x00024de4) list_double_graphic_pane_vc_g1

0x5d3f,	// (0x00024df4) list_double_graphic_pane_vc_g2_ParamLimits

0x5d3f,	// (0x00024df4) list_double_graphic_pane_vc_g2

0x5d4e,	// (0x00024e03) list_double_graphic_pane_vc_g3_ParamLimits

0x5d4e,	// (0x00024e03) list_double_graphic_pane_vc_g3

0x0002,

0xfa6e,	// (0x0002eb23) list_double_graphic_pane_vc_g_ParamLimits

0xfa6e,	// (0x0002eb23) list_double_graphic_pane_vc_g

0x5d5a,	// (0x00024e0f) list_double_graphic_pane_vc_t1_ParamLimits

0x5d5a,	// (0x00024e0f) list_double_graphic_pane_vc_t1

0x5d6e,	// (0x00024e23) list_double_graphic_pane_vc_t2_ParamLimits

0x5d6e,	// (0x00024e23) list_double_graphic_pane_vc_t2

0x0001,

0xfa75,	// (0x0002eb2a) list_double_graphic_pane_vc_t_ParamLimits

0xfa75,	// (0x0002eb2a) list_double_graphic_pane_vc_t

0x61b1,	// (0x00025266) aid_size_cell_fastswap

0x61b9,	// (0x0002526e) aid_size_cell_touch_ParamLimits

0x61b9,	// (0x0002526e) aid_size_cell_touch

0x641a,	// (0x000254cf) popup_fast_swap_wide_window_ParamLimits

0x641a,	// (0x000254cf) popup_fast_swap_wide_window

0x6538,	// (0x000255ed) touch_pane_ParamLimits

0x6538,	// (0x000255ed) touch_pane

0x2c0d,	// (0x00021cc2) button_value_adjust_pane_cp2

0x554c,	// (0x00024601) button_value_adjust_pane_cp4

0x5572,	// (0x00024627) form_field_data_pane_cp2

0x5595,	// (0x0002464a) form_field_data_wide_pane_cp2

0x3067,	// (0x0002211c) bg_scroll_pane_ParamLimits

0x6bce,	// (0x00025c83) scroll_handle_pane_ParamLimits

0x6be2,	// (0x00025c97) scroll_sc2_down_pane_ParamLimits

0x6be2,	// (0x00025c97) scroll_sc2_down_pane

0x3098,	// (0x0002214d) scroll_sc2_up_pane_ParamLimits

0x3098,	// (0x0002214d) scroll_sc2_up_pane

0xb752,	// (0x0002a807) grid_wheel_folder_pane_g1_ParamLimits

0xb752,	// (0x0002a807) grid_wheel_folder_pane_g1

0x6f13,	// (0x00025fc8) clock_nsta_pane_cp2_ParamLimits

0x6f13,	// (0x00025fc8) clock_nsta_pane_cp2

0x698c,	// (0x00025a41) listscroll_midp_pane_ParamLimits

0x72cc,	// (0x00026381) midp_canvas_pane

0x77ad,	// (0x00026862) nsta_clock_indic_pane

0x7803,	// (0x000268b8) listscroll_form_pane_vc

0x7827,	// (0x000268dc) listscroll_set_pane_vc_ParamLimits

0x7827,	// (0x000268dc) listscroll_set_pane_vc

0x7f43,	// (0x00026ff8) clock_nsta_pane

0x7fc0,	// (0x00027075) indicator_nsta_pane

0x82b8,	// (0x0002736d) bg_popup_sub_pane_cp2_ParamLimits

0x82cc,	// (0x00027381) find_pane_cp2_ParamLimits

0x82cc,	// (0x00027381) find_pane_cp2

0x82e2,	// (0x00027397) grid_toobar_pane_ParamLimits

0x958a,	// (0x0002863f) list_form_gen_pane_vc_ParamLimits

0x958a,	// (0x0002863f) list_form_gen_pane_vc

0x95a0,	// (0x00028655) scroll_pane_cp8_vc_ParamLimits

0x95a0,	// (0x00028655) scroll_pane_cp8_vc

0x961c,	// (0x000286d1) data_form_wide_pane_vc_ParamLimits

0x961c,	// (0x000286d1) data_form_wide_pane_vc

0x9628,	// (0x000286dd) form_field_data_wide_pane_vc_g1

0x9630,	// (0x000286e5) form_field_data_wide_pane_vc_t1_ParamLimits

0x9630,	// (0x000286e5) form_field_data_wide_pane_vc_t1

0x2c78,	// (0x00021d2d) input_focus_pane_cp6_vc_ParamLimits

0x2c78,	// (0x00021d2d) input_focus_pane_cp6_vc

0x9932,	// (0x000289e7) list_midp_pane_ParamLimits

0x993e,	// (0x000289f3) scroll_pane_cp16_ParamLimits

0x993e,	// (0x000289f3) scroll_pane_cp16

0x998c,	// (0x00028a41) button_value_adjust_pane_ParamLimits

0x998c,	// (0x00028a41) button_value_adjust_pane

0xa91e,	// (0x000299d3) button_value_adjust_pane_cp6_ParamLimits

0xa91e,	// (0x000299d3) button_value_adjust_pane_cp6

0xaa6c,	// (0x00029b21) settings_code_pane_cp_ParamLimits

0xaa6c,	// (0x00029b21) settings_code_pane_cp

0x0a8c,	// (0x0001fb41) cell_touch_pane_g1

0x0a8c,	// (0x0001fb41) cell_touch_pane_g2

0x0001,

0xf704,	// (0x0002e7b9) cell_touch_pane_g

0xb045,	// (0x0002a0fa) cell_touch_pane_cp_ParamLimits

0xb045,	// (0x0002a0fa) cell_touch_pane_cp

0xb055,	// (0x0002a10a) cell_touch_pane_ParamLimits

0xb055,	// (0x0002a10a) cell_touch_pane

0x0a8c,	// (0x0001fb41) scroll_sc2_down_pane_g1

0x0a8c,	// (0x0001fb41) scroll_sc2_up_pane_g1

0x0a96,	// (0x0001fb4b) bg_set_opt_pane_cp4_vc

0xb066,	// (0x0002a11b) list_set_graphic_pane_vc_g1_ParamLimits

0xb066,	// (0x0002a11b) list_set_graphic_pane_vc_g1

0x33bb,	// (0x00022470) list_set_graphic_pane_vc_g2_ParamLimits

0x33bb,	// (0x00022470) list_set_graphic_pane_vc_g2

0x0001,

0xfa00,	// (0x0002eab5) list_set_graphic_pane_vc_g_ParamLimits

0xfa00,	// (0x0002eab5) list_set_graphic_pane_vc_g

0xb072,	// (0x0002a127) text_primary_small_cp13_vc_ParamLimits

0xb072,	// (0x0002a127) text_primary_small_cp13_vc

0xb08a,	// (0x0002a13f) list_set_graphic_pane_vc_ParamLimits

0xb08a,	// (0x0002a13f) list_set_graphic_pane_vc

0x0a96,	// (0x0001fb4b) input_focus_pane_cp2_vc

0x0a8c,	// (0x0001fb41) setting_code_pane_vc_g1

0x0b15,	// (0x0001fbca) setting_code_pane_vc_t1

0xb09f,	// (0x0002a154) set_text_pane_vc_t1_ParamLimits

0xb09f,	// (0x0002a154) set_text_pane_vc_t1

0x0a96,	// (0x0001fb4b) input_focus_pane_cp1_vc

0xb0bd,	// (0x0002a172) list_set_text_pane_vc

0x0a8c,	// (0x0001fb41) setting_text_pane_vc_g1

0x0a96,	// (0x0001fb4b) bg_set_opt_pane_cp2_vc

0x0b0c,	// (0x0001fbc1) setting_slider_graphic_pane_vc_g1

0xb0c7,	// (0x0002a17c) setting_slider_graphic_pane_vc_t1

0xb0d9,	// (0x0002a18e) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa05,	// (0x0002eaba) setting_slider_graphic_pane_vc_t

0xb0eb,	// (0x0002a1a0) slider_set_pane_cp_vc

0xb0f5,	// (0x0002a1aa) slider_set_pane_vc_g1

0xb0fe,	// (0x0002a1b3) slider_set_pane_vc_g2

0x0006,

0xfa0a,	// (0x0002eabf) slider_set_pane_vc_g

0x2d41,	// (0x00021df6) set_opt_bg_pane_g1_copy1

0x2d49,	// (0x00021dfe) set_opt_bg_pane_g2_copy1

0xb12a,	// (0x0002a1df) set_opt_bg_pane_g3_copy1

0x2d59,	// (0x00021e0e) set_opt_bg_pane_g4_copy1

0x2d61,	// (0x00021e16) set_opt_bg_pane_g5_copy1

0x2d69,	// (0x00021e1e) set_opt_bg_pane_g6_copy1

0xb134,	// (0x0002a1e9) set_opt_bg_pane_g7_copy1

0xb13e,	// (0x0002a1f3) set_opt_bg_pane_g8_copy1

0xb148,	// (0x0002a1fd) set_opt_bg_pane_g9_copy1

0x0a96,	// (0x0001fb4b) bg_set_opt_pane_cp_vc

0xb152,	// (0x0002a207) setting_slider_pane_vc_t1

0xb161,	// (0x0002a216) setting_slider_pane_vc_t2

0xb173,	// (0x0002a228) setting_slider_pane_vc_t3

0x0002,

0xfa19,	// (0x0002eace) setting_slider_pane_vc_t

0xb185,	// (0x0002a23a) slider_set_pane_vc

0x84f7,	// (0x000275ac) volume_set_pane_vc_g1

0x8500,	// (0x000275b5) volume_set_pane_vc_g2

0x8509,	// (0x000275be) volume_set_pane_vc_g3

0x8512,	// (0x000275c7) volume_set_pane_vc_g4

0x851b,	// (0x000275d0) volume_set_pane_vc_g5

0x8524,	// (0x000275d9) volume_set_pane_vc_g6

0x852d,	// (0x000275e2) volume_set_pane_vc_g7

0x8536,	// (0x000275eb) volume_set_pane_vc_g8

0x853f,	// (0x000275f4) volume_set_pane_vc_g9

0x8548,	// (0x000275fd) volume_set_pane_vc_g10

0x0009,

0xf8b7,	// (0x0002e96c) volume_set_pane_vc_g

0xb18f,	// (0x0002a244) volume_set_pane_vc

0xb199,	// (0x0002a24e) button_value_adjust_pane_cp1_vc

0xb1a3,	// (0x0002a258) list_highlight_pane_cp2_vc

0xb1ac,	// (0x0002a261) list_set_pane_vc_ParamLimits

0xb1ac,	// (0x0002a261) list_set_pane_vc

0xb21c,	// (0x0002a2d1) main_pane_set_vc_t1_ParamLimits

0xb21c,	// (0x0002a2d1) main_pane_set_vc_t1

0xb231,	// (0x0002a2e6) main_pane_set_vc_t2_ParamLimits

0xb231,	// (0x0002a2e6) main_pane_set_vc_t2

0xb243,	// (0x0002a2f8) main_pane_set_vc_t3_ParamLimits

0xb243,	// (0x0002a2f8) main_pane_set_vc_t3

0xb257,	// (0x0002a30c) main_pane_set_vc_t4_ParamLimits

0xb257,	// (0x0002a30c) main_pane_set_vc_t4

0x0003,

0xfa20,	// (0x0002ead5) main_pane_set_vc_t_ParamLimits

0xfa20,	// (0x0002ead5) main_pane_set_vc_t

0xb26b,	// (0x0002a320) setting_code_pane_vc_ParamLimits

0xb26b,	// (0x0002a320) setting_code_pane_vc

0xb27c,	// (0x0002a331) setting_slider_graphic_pane_vc

0xb27c,	// (0x0002a331) setting_slider_pane_vc

0xb27c,	// (0x0002a331) setting_text_pane_vc

0xb27c,	// (0x0002a331) setting_volume_pane_vc

0xb286,	// (0x0002a33b) scroll_pane_cp121_vc

0x2bfb,	// (0x00021cb0) set_content_pane_vc

0xb28e,	// (0x0002a343) button_value_adjust_pane_g1

0xb297,	// (0x0002a34c) button_value_adjust_pane_g2

0x0001,

0xfa7a,	// (0x0002eb2f) button_value_adjust_pane_g

0xb2a0,	// (0x0002a355) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb2a0,	// (0x0002a355) form_field_slider_wide_pane_vc_t1

0xb2b2,	// (0x0002a367) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb2b2,	// (0x0002a367) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7f,	// (0x0002eb34) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7f,	// (0x0002eb34) form_field_slider_wide_pane_vc_t

0x0af0,	// (0x0001fba5) input_focus_pane_cp10_vc_ParamLimits

0x0af0,	// (0x0001fba5) input_focus_pane_cp10_vc

0xb2de,	// (0x0002a393) slider_cont_pane_cp1_vc_ParamLimits

0xb2de,	// (0x0002a393) slider_cont_pane_cp1_vc

0xb2f0,	// (0x0002a3a5) slider_form_pane_g1_cp2

0xb0fe,	// (0x0002a1b3) slider_form_pane_g2_cp2

0xb31d,	// (0x0002a3d2) form_field_slider_pane_vc_t3

0xb32b,	// (0x0002a3e0) form_field_slider_pane_vc_t4

0xb339,	// (0x0002a3ee) slider_form_pane_vc_ParamLimits

0xb339,	// (0x0002a3ee) slider_form_pane_vc

0xb346,	// (0x0002a3fb) form_field_slider_pane_vc_t1_ParamLimits

0xb346,	// (0x0002a3fb) form_field_slider_pane_vc_t1

0xb2b2,	// (0x0002a367) form_field_slider_pane_vc_t2_ParamLimits

0xb2b2,	// (0x0002a367) form_field_slider_pane_vc_t2

0x0001,

0xfa91,	// (0x0002eb46) form_field_slider_pane_vc_t_ParamLimits

0xfa91,	// (0x0002eb46) form_field_slider_pane_vc_t

0x0af0,	// (0x0001fba5) input_focus_pane_cp9_vc_ParamLimits

0x0af0,	// (0x0001fba5) input_focus_pane_cp9_vc

0xb35c,	// (0x0002a411) slider_cont_pane_vc_ParamLimits

0xb35c,	// (0x0002a411) slider_cont_pane_vc

0xb370,	// (0x0002a425) list_form_graphic_pane_cp_vc_ParamLimits

0xb370,	// (0x0002a425) list_form_graphic_pane_cp_vc

0x9628,	// (0x000286dd) form_field_popup_wide_pane_vc_g1

0xb385,	// (0x0002a43a) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb385,	// (0x0002a43a) form_field_popup_wide_pane_vc_t1

0x2c78,	// (0x00021d2d) input_focus_pane_cp8_vc_ParamLimits

0x2c78,	// (0x00021d2d) input_focus_pane_cp8_vc

0xb3ca,	// (0x0002a47f) list_form_wide_pane_vc_ParamLimits

0xb3ca,	// (0x0002a47f) list_form_wide_pane_vc

0xb3d6,	// (0x0002a48b) list_form_graphic_pane_vc_g1

0xb3de,	// (0x0002a493) list_form_graphic_pane_vc_t1_ParamLimits

0xb3de,	// (0x0002a493) list_form_graphic_pane_vc_t1

0x0afe,	// (0x0001fbb3) list_highlight_pane_cp5_vc_ParamLimits

0x0afe,	// (0x0001fbb3) list_highlight_pane_cp5_vc

0xb3fa,	// (0x0002a4af) list_form_graphic_pane_vc_ParamLimits

0xb3fa,	// (0x0002a4af) list_form_graphic_pane_vc

0x9628,	// (0x000286dd) form_field_popup_pane_vc_g1

0xb410,	// (0x0002a4c5) form_field_popup_pane_vc_t1_ParamLimits

0xb410,	// (0x0002a4c5) form_field_popup_pane_vc_t1

0x2c78,	// (0x00021d2d) input_focus_pane_cp7_vc_ParamLimits

0x2c78,	// (0x00021d2d) input_focus_pane_cp7_vc

0xb427,	// (0x0002a4dc) list_form_pane_vc_ParamLimits

0xb427,	// (0x0002a4dc) list_form_pane_vc

0xb433,	// (0x0002a4e8) data_form_pane_vc_t1_ParamLimits

0xb433,	// (0x0002a4e8) data_form_pane_vc_t1

0x2d41,	// (0x00021df6) input_focus_pane_vc_g1

0x2d49,	// (0x00021dfe) input_focus_pane_vc_g2

0x2d51,	// (0x00021e06) input_focus_pane_vc_g3

0x2d59,	// (0x00021e0e) input_focus_pane_vc_g4

0x2d61,	// (0x00021e16) input_focus_pane_vc_g5

0x2d69,	// (0x00021e1e) input_focus_pane_vc_g6

0x2d71,	// (0x00021e26) input_focus_pane_vc_g7

0x2d79,	// (0x00021e2e) input_focus_pane_vc_g8

0x2d81,	// (0x00021e36) input_focus_pane_vc_g9

0x0a8c,	// (0x0001fb41) input_focus_pane_vc_g10

0x0009,

0xf68d,	// (0x0002e742) input_focus_pane_vc_g

0x961c,	// (0x000286d1) data_form_pane_vc_ParamLimits

0x961c,	// (0x000286d1) data_form_pane_vc

0x9628,	// (0x000286dd) form_field_data_pane_vc_g1

0xb450,	// (0x0002a505) form_field_data_pane_vc_t1_ParamLimits

0xb450,	// (0x0002a505) form_field_data_pane_vc_t1

0x2c78,	// (0x00021d2d) input_focus_pane_vc_ParamLimits

0x2c78,	// (0x00021d2d) input_focus_pane_vc

0xb46a,	// (0x0002a51f) button_value_adjust_pane_cp3_vc

0xb472,	// (0x0002a527) button_value_adjust_pane_cp5_vc

0xb47a,	// (0x0002a52f) form_field_data_pane_vc_ParamLimits

0xb47a,	// (0x0002a52f) form_field_data_pane_vc

0xb495,	// (0x0002a54a) form_field_data_pane_vc_cp2

0xb49d,	// (0x0002a552) form_field_data_wide_pane_vc_ParamLimits

0xb49d,	// (0x0002a552) form_field_data_wide_pane_vc

0xb4b7,	// (0x0002a56c) form_field_data_wide_pane_vc_cp2

0xb4bf,	// (0x0002a574) form_field_popup_pane_vc_ParamLimits

0xb4bf,	// (0x0002a574) form_field_popup_pane_vc

0xb4da,	// (0x0002a58f) form_field_popup_wide_pane_vc_ParamLimits

0xb4da,	// (0x0002a58f) form_field_popup_wide_pane_vc

0xb4f4,	// (0x0002a5a9) form_field_slider_pane_vc_ParamLimits

0xb4f4,	// (0x0002a5a9) form_field_slider_pane_vc

0xb507,	// (0x0002a5bc) form_field_slider_wide_pane_vc_ParamLimits

0xb507,	// (0x0002a5bc) form_field_slider_wide_pane_vc

0xb51a,	// (0x0002a5cf) grid_touch_1_pane_ParamLimits

0xb51a,	// (0x0002a5cf) grid_touch_1_pane

0xb526,	// (0x0002a5db) grid_touch_2_pane_ParamLimits

0xb526,	// (0x0002a5db) grid_touch_2_pane

0x767c,	// (0x00026731) touch_pane_g1_ParamLimits

0x767c,	// (0x00026731) touch_pane_g1

0xb540,	// (0x0002a5f5) cell_app_pane_cp_wide_ParamLimits

0xb540,	// (0x0002a5f5) cell_app_pane_cp_wide

0xb551,	// (0x0002a606) grid_popup_fast_wide_pane_ParamLimits

0xb551,	// (0x0002a606) grid_popup_fast_wide_pane

0xb565,	// (0x0002a61a) scroll_pane_cp19_ParamLimits

0xb565,	// (0x0002a61a) scroll_pane_cp19

0x0a96,	// (0x0001fb4b) bg_popup_window_pane_cp20

0xb579,	// (0x0002a62e) listscroll_popup_fast_wide_pane

0x0afe,	// (0x0001fbb3) grid_indicator_nsta_pane

0xb581,	// (0x0002a636) clock_nsta_pane_g1

0xb58a,	// (0x0002a63f) clock_nsta_pane_t1

0xb5a6,	// (0x0002a65b) cell_indicator_nsta_pane_ParamLimits

0xb5a6,	// (0x0002a65b) cell_indicator_nsta_pane

0xb5de,	// (0x0002a693) cell_indicator_nsta_pane_g1

0xb5ec,	// (0x0002a6a1) cell_indicator_nsta_pane_g2

0x0001,

0xfaa2,	// (0x0002eb57) cell_indicator_nsta_pane_g

0xb602,	// (0x0002a6b7) clock_nsta_pane_cp

0xb60a,	// (0x0002a6bf) indicator_nsta_pane_cp

0xb613,	// (0x0002a6c8) nsta_clock_indic_pane_g1

0x0b54,	// (0x0001fc09) grid_indicator_pane

0x318a,	// (0x0002223f) scroll_pane_cp29

0x6e3d,	// (0x00025ef2) indicator_nsta_pane_cp2_ParamLimits

0x6e3d,	// (0x00025ef2) indicator_nsta_pane_cp2

0x0afe,	// (0x0001fbb3) main_apps_wheel_pane

0x980f,	// (0x000288c4) form_midp_field_text_pane_ParamLimits

0x995e,	// (0x00028a13) scroll_bar_cp050_ParamLimits

0xb67c,	// (0x0002a731) cell_indicator_pane_ParamLimits

0xb67c,	// (0x0002a731) cell_indicator_pane

0xb694,	// (0x0002a749) cell_indicator_pane_g1

0xb69e,	// (0x0002a753) grid_wheel_folder_pane_ParamLimits

0xb69e,	// (0x0002a753) grid_wheel_folder_pane

0xb6b2,	// (0x0002a767) list_wheel_apps_pane_ParamLimits

0xb6b2,	// (0x0002a767) list_wheel_apps_pane

0xb6c5,	// (0x0002a77a) main_apps_wheel_pane_g1_ParamLimits

0xb6c5,	// (0x0002a77a) main_apps_wheel_pane_g1

0xb6e1,	// (0x0002a796) main_apps_wheel_pane_g2_ParamLimits

0xb6e1,	// (0x0002a796) main_apps_wheel_pane_g2

0x0001,

0xfabe,	// (0x0002eb73) main_apps_wheel_pane_g_ParamLimits

0xfabe,	// (0x0002eb73) main_apps_wheel_pane_g

0xb6fd,	// (0x0002a7b2) main_apps_wheel_pane_t1_ParamLimits

0xb6fd,	// (0x0002a7b2) main_apps_wheel_pane_t1

0xb726,	// (0x0002a7db) list_wheel_apps_pane_g1

0xb72e,	// (0x0002a7e3) list_wheel_apps_pane_g2

0xb736,	// (0x0002a7eb) list_wheel_apps_pane_g3

0xb73e,	// (0x0002a7f3) list_wheel_apps_pane_g4

0xb748,	// (0x0002a7fd) list_wheel_apps_pane_g5

0x0004,

0xfac3,	// (0x0002eb78) list_wheel_apps_pane_g

0x7140,	// (0x000261f5) navi_icon_text_pane

0x7e70,	// (0x00026f25) aid_fill_nsta

0xb769,	// (0x0002a81e) navi_icon_text_pane_g1

0xb775,	// (0x0002a82a) navi_icon_text_pane_t1

0x6fd6,	// (0x0002608b) list_set_graphic_pane_t1_ParamLimits

0x6fd6,	// (0x0002608b) list_set_graphic_pane_t1

0xa0af,	// (0x00029164) popup_midp_note_alarm_window_t6_ParamLimits

0xa0af,	// (0x00029164) popup_midp_note_alarm_window_t6

0xa0c1,	// (0x00029176) popup_midp_note_alarm_window_t7_ParamLimits

0xa0c1,	// (0x00029176) popup_midp_note_alarm_window_t7

0xa0d3,	// (0x00029188) popup_midp_note_alarm_window_t8_ParamLimits

0xa0d3,	// (0x00029188) popup_midp_note_alarm_window_t8

0xa0e5,	// (0x0002919a) popup_midp_note_alarm_window_t9_ParamLimits

0xa0e5,	// (0x0002919a) popup_midp_note_alarm_window_t9

0xa0f7,	// (0x000291ac) popup_midp_note_alarm_window_t10_ParamLimits

0xa0f7,	// (0x000291ac) popup_midp_note_alarm_window_t10

0xa109,	// (0x000291be) popup_midp_note_alarm_window_t11_ParamLimits

0xa109,	// (0x000291be) popup_midp_note_alarm_window_t11

0xa11b,	// (0x000291d0) scroll_pane_cp17_ParamLimits

0xa11b,	// (0x000291d0) scroll_pane_cp17

0x84f7,	// (0x000275ac) volume_small_pane_cp_g1

0x87c6,	// (0x0002787b) volume_small_pane_cp_g2

0x87cf,	// (0x00027884) volume_small_pane_cp_g3

0x87d8,	// (0x0002788d) volume_small_pane_cp_g4

0x87e1,	// (0x00027896) volume_small_pane_cp_g5

0x87ea,	// (0x0002789f) volume_small_pane_cp_g6

0x87f3,	// (0x000278a8) volume_small_pane_cp_g7

0x87fc,	// (0x000278b1) volume_small_pane_cp_g8

0x8805,	// (0x000278ba) volume_small_pane_cp_g9

0x880e,	// (0x000278c3) volume_small_pane_cp_g10

0x7395,	// (0x0002644a) midp_ticker_pane_g1_ParamLimits

0x73a1,	// (0x00026456) midp_ticker_pane_g2_ParamLimits

0xf759,	// (0x0002e80e) midp_ticker_pane_g_ParamLimits

0x73ad,	// (0x00026462) midp_ticker_pane_t1_ParamLimits

0x7e86,	// (0x00026f3b) aid_fill_nsta_2

0x994a,	// (0x000289ff) list_form2_midp_pane

0xaab3,	// (0x00029b68) midp_editing_number_pane_ParamLimits

0xaac2,	// (0x00029b77) midp_ticker_pane_ParamLimits

0xb787,	// (0x0002a83c) form2_midp_field_pane

0xb7ab,	// (0x0002a860) scroll_pane_cp51

0xb7cb,	// (0x0002a880) form2_midp_button_pane_ParamLimits

0xb7cb,	// (0x0002a880) form2_midp_button_pane

0xb7dd,	// (0x0002a892) form2_midp_content_pane_ParamLimits

0xb7dd,	// (0x0002a892) form2_midp_content_pane

0xb7f7,	// (0x0002a8ac) form2_midp_field_choice_group_pane

0xb7ff,	// (0x0002a8b4) form2_midp_field_pane_g1

0xb807,	// (0x0002a8bc) form2_midp_field_pane_g2

0xb80f,	// (0x0002a8c4) form2_midp_field_pane_g3

0xb817,	// (0x0002a8cc) form2_midp_field_pane_g4

0x0003,

0xfae8,	// (0x0002eb9d) form2_midp_field_pane_g

0xb81f,	// (0x0002a8d4) form2_midp_gauge_slider_pane

0xb827,	// (0x0002a8dc) form2_midp_gauge_wait_pane

0xb82f,	// (0x0002a8e4) form2_midp_image_pane_ParamLimits

0xb82f,	// (0x0002a8e4) form2_midp_image_pane

0xb84a,	// (0x0002a8ff) form2_midp_label_pane_ParamLimits

0xb84a,	// (0x0002a8ff) form2_midp_label_pane

0xb869,	// (0x0002a91e) form2_midp_label_pane_cp_ParamLimits

0xb869,	// (0x0002a91e) form2_midp_label_pane_cp

0xb88a,	// (0x0002a93f) form2_midp_string_pane_ParamLimits

0xb88a,	// (0x0002a93f) form2_midp_string_pane

0x5d84,	// (0x00024e39) form2_midp_text_pane_ParamLimits

0x5d84,	// (0x00024e39) form2_midp_text_pane

0xb89c,	// (0x0002a951) form2_midp_time_pane

0xb8ac,	// (0x0002a961) input_focus_pane_cp51_ParamLimits

0xb8ac,	// (0x0002a961) input_focus_pane_cp51

0xb8c4,	// (0x0002a979) form2_midp_label_pane_t1_ParamLimits

0xb8c4,	// (0x0002a979) form2_midp_label_pane_t1

0x5da5,	// (0x00024e5a) form2_mdip_text_pane_t1_ParamLimits

0x5da5,	// (0x00024e5a) form2_mdip_text_pane_t1

0x5dc9,	// (0x00024e7e) form2_midp_time_pane_t1

0xb912,	// (0x0002a9c7) form2_midp_gauge_slider_pane_t1

0xb924,	// (0x0002a9d9) form2_midp_gauge_slider_pane_t2

0xb936,	// (0x0002a9eb) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf1,	// (0x0002eba6) form2_midp_gauge_slider_pane_t

0xb948,	// (0x0002a9fd) form2_midp_slider_pane

0xb954,	// (0x0002aa09) form2_midp_gauge_wait_pane_t1

0xb962,	// (0x0002aa17) form2_midp_wait_pane_ParamLimits

0xb962,	// (0x0002aa17) form2_midp_wait_pane

0x966f,	// (0x00028724) list_single_2graphic_pane_cp4_ParamLimits

0x966f,	// (0x00028724) list_single_2graphic_pane_cp4

0xb98d,	// (0x0002aa42) list_single_midp_graphic_pane_cp_ParamLimits

0xb98d,	// (0x0002aa42) list_single_midp_graphic_pane_cp

0x0a96,	// (0x0001fb4b) list_highlight_pane_cp20

0xb9b1,	// (0x0002aa66) list_single_2graphic_pane_g1_cp4

0xaf48,	// (0x00029ffd) list_single_2graphic_pane_g2_cp4

0xb9b9,	// (0x0002aa6e) list_single_2graphic_pane_t1_cp4

0x0afe,	// (0x0001fbb3) list_highlight_pane_cp21

0xb9c8,	// (0x0002aa7d) list_single_midp_graphic_pane_g4_cp

0xb9d7,	// (0x0002aa8c) list_single_midp_graphic_pane_t1_cp

0xb9ec,	// (0x0002aaa1) form2_mdip_string_pane_t1_ParamLimits

0xb9ec,	// (0x0002aaa1) form2_mdip_string_pane_t1

0x0a96,	// (0x0001fb4b) bg_wml_button_pane_cp2

0x0a8c,	// (0x0001fb41) form2_midp_image_pane_g1

0x530e,	// (0x000243c3) list_double_large_graphic_pane_g5_ParamLimits

0x530e,	// (0x000243c3) list_double_large_graphic_pane_g5

0x698c,	// (0x00025a41) midp_form_pane_ParamLimits

0x0afe,	// (0x0001fbb3) main_apps_wheel_pane_ParamLimits

0x7c1a,	// (0x00026ccf) popup_preview_window_ParamLimits

0x7c1a,	// (0x00026ccf) popup_preview_window

0x7e01,	// (0x00026eb6) popup_touch_info_window_ParamLimits

0x7e01,	// (0x00026eb6) popup_touch_info_window

0x7e23,	// (0x00026ed8) popup_touch_menu_window_ParamLimits

0x7e23,	// (0x00026ed8) popup_touch_menu_window

0x0a82,	// (0x0001fb37) bg_popup_sub_pane_cp6

0xba91,	// (0x0002ab46) list_touch_menu_pane

0xba99,	// (0x0002ab4e) list_single_touch_menu_pane_ParamLimits

0xba99,	// (0x0002ab4e) list_single_touch_menu_pane

0xbab1,	// (0x0002ab66) list_single_touch_menu_pane_t1

0x0afe,	// (0x0001fbb3) bg_popup_sub_pane_cp7_ParamLimits

0x0afe,	// (0x0001fbb3) bg_popup_sub_pane_cp7

0xbabf,	// (0x0002ab74) heading_sub_pane

0xbac7,	// (0x0002ab7c) list_touch_info_pane_ParamLimits

0xbac7,	// (0x0002ab7c) list_touch_info_pane

0xbad6,	// (0x0002ab8b) list_single_touch_info_pane_ParamLimits

0xbad6,	// (0x0002ab8b) list_single_touch_info_pane

0xbae8,	// (0x0002ab9d) list_single_touch_info_pane_t1

0xbaf6,	// (0x0002abab) list_single_touch_info_pane_t2

0x0001,

0xfaff,	// (0x0002ebb4) list_single_touch_info_pane_t

0x72c4,	// (0x00026379) bg_popup_heading_pane_cp

0xbb04,	// (0x0002abb9) heading_sub_pane_t1

0x95b6,	// (0x0002866b) bg_popup_preview_window_pane_cp_ParamLimits

0x95b6,	// (0x0002866b) bg_popup_preview_window_pane_cp

0xbabf,	// (0x0002ab74) heading_preview_pane

0xbac7,	// (0x0002ab7c) list_preview_pane_ParamLimits

0xbac7,	// (0x0002ab7c) list_preview_pane

0xbb12,	// (0x0002abc7) popup_preview_window_g1

0xbad6,	// (0x0002ab8b) list_single_preview_pane_ParamLimits

0xbad6,	// (0x0002ab8b) list_single_preview_pane

0xbb1a,	// (0x0002abcf) list_single_preview_pane_g1

0xbb22,	// (0x0002abd7) list_single_preview_pane_t1

0xbae8,	// (0x0002ab9d) list_single_preview_pane_t2

0x0001,

0xfb04,	// (0x0002ebb9) list_single_preview_pane_t

0xbb30,	// (0x0002abe5) bg_popup_heading_pane_cp2_ParamLimits

0xbb30,	// (0x0002abe5) bg_popup_heading_pane_cp2

0xbb46,	// (0x0002abfb) heading_preview_pane_g1

0xbb4e,	// (0x0002ac03) heading_preview_pane_t1_ParamLimits

0xbb4e,	// (0x0002ac03) heading_preview_pane_t1

0x0b6b,	// (0x0001fc20) soft_indicator_pane_t1_ParamLimits

0x2b65,	// (0x00021c1a) scroll_pane_ParamLimits

0x308f,	// (0x00022144) scroll_sc2_left_pane

0x3086,	// (0x0002213b) scroll_sc2_right_pane

0x30ae,	// (0x00022163) scroll_bg_pane_g1_ParamLimits

0x30c3,	// (0x00022178) scroll_bg_pane_g2_ParamLimits

0x30db,	// (0x00022190) scroll_bg_pane_g3_ParamLimits

0xf6e4,	// (0x0002e799) scroll_bg_pane_g_ParamLimits

0x30ae,	// (0x00022163) scroll_handle_pane_g1_ParamLimits

0x30fd,	// (0x000221b2) scroll_handle_pane_g2_ParamLimits

0x30db,	// (0x00022190) scroll_handle_pane_g3_ParamLimits

0xf6eb,	// (0x0002e7a0) scroll_handle_pane_g_ParamLimits

0x7861,	// (0x00026916) popup_choice_list_window_ParamLimits

0x7861,	// (0x00026916) popup_choice_list_window

0x82c4,	// (0x00027379) choice_list_pane

0x8376,	// (0x0002742b) cell_toolbar_pane_t1

0x839e,	// (0x00027453) toolbar_button_pane_ParamLimits

0xa5e5,	// (0x0002969a) ai_gene_pane_1_t2_ParamLimits

0xa5e5,	// (0x0002969a) ai_gene_pane_1_t2

0x0001,

0xf913,	// (0x0002e9c8) ai_gene_pane_1_t_ParamLimits

0xf913,	// (0x0002e9c8) ai_gene_pane_1_t

0xbb6b,	// (0x0002ac20) scroll_sc2_left_pane_g1

0xbb6b,	// (0x0002ac20) scroll_sc2_right_pane_g1

0x7839,	// (0x000268ee) bg_popup_sub_pane_cp10

0xbb75,	// (0x0002ac2a) list_choice_list_pane

0xbb8e,	// (0x0002ac43) list_single_choice_list_pane_ParamLimits

0xbb8e,	// (0x0002ac43) list_single_choice_list_pane

0xbba6,	// (0x0002ac5b) list_single_choice_list_pane_g1

0x2e66,	// (0x00021f1b) list_single_choice_list_pane_t1_ParamLimits

0x2e66,	// (0x00021f1b) list_single_choice_list_pane_t1

0xbbae,	// (0x0002ac63) choice_list_pane_g1

0xbbb6,	// (0x0002ac6b) choice_list_pane_t1

0x0a82,	// (0x0001fb37) input_focus_pane_cp11

0x2fe4,	// (0x00022099) title_pane_stacon_g2_ParamLimits

0x2fe4,	// (0x00022099) title_pane_stacon_g2

0x0002,

0xf6ca,	// (0x0002e77f) title_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0002e77f) title_pane_stacon_g

0x72c4,	// (0x00026379) cursor_press_pane

0x791b,	// (0x000269d0) popup_fep_hwr_window_ParamLimits

0x791b,	// (0x000269d0) popup_fep_hwr_window

0x79a5,	// (0x00026a5a) popup_fep_vkb_window_ParamLimits

0x79a5,	// (0x00026a5a) popup_fep_vkb_window

0xbbc4,	// (0x0002ac79) cursor_press_pane_g1

0x0002,

0xfb2d,	// (0x0002ebe2) fep_vkb_side_pane_g_ParamLimits

0x8842,	// (0x000278f7) fep_hwr_candidate_pane_ParamLimits

0x8842,	// (0x000278f7) fep_hwr_candidate_pane

0x886c,	// (0x00027921) fep_hwr_side_pane_ParamLimits

0x886c,	// (0x00027921) fep_hwr_side_pane

0x888e,	// (0x00027943) fep_hwr_top_pane_ParamLimits

0x888e,	// (0x00027943) fep_hwr_top_pane

0x88a6,	// (0x0002795b) fep_hwr_write_pane_ParamLimits

0x88a6,	// (0x0002795b) fep_hwr_write_pane

0xfb2d,	// (0x0002ebe2) fep_vkb_side_pane_g

0xbbcc,	// (0x0002ac81) fep_hwr_top_pane_g1

0xbbde,	// (0x0002ac93) fep_hwr_top_pane_g2

0x88d2,	// (0x00027987) fep_hwr_top_pane_g3

0x0002,

0xfb09,	// (0x0002ebbe) fep_hwr_top_pane_g

0x88e7,	// (0x0002799c) fep_hwr_top_text_pane

0x31f7,	// (0x000222ac) fep_hwr_top_text_pane_g1

0xbc14,	// (0x0002acc9) fep_hwr_top_text_pane_t1

0x89f1,	// (0x00027aa6) fep_hwr_candidate_pane_g1

0xbe5f,	// (0x0002af14) fep_vkb_keypad_pane_g3_ParamLimits

0xbe5f,	// (0x0002af14) fep_vkb_keypad_pane_g3

0xbe8b,	// (0x0002af40) fep_vkb_keypad_pane_g4_ParamLimits

0xbe8b,	// (0x0002af40) fep_vkb_keypad_pane_g4

0xbf02,	// (0x0002afb7) fep_vkb_bottom_pane_g2_ParamLimits

0xbf02,	// (0x0002afb7) fep_vkb_bottom_pane_g2

0x0001,

0xfb34,	// (0x0002ebe9) fep_vkb_bottom_pane_g_ParamLimits

0xfb34,	// (0x0002ebe9) fep_vkb_bottom_pane_g

0xbb6b,	// (0x0002ac20) cell_vkb_side_pane_g2

0x0001,

0xfb3e,	// (0x0002ebf3) cell_vkb_side_pane_g

0xbf8d,	// (0x0002b042) cell_vkb_side_pane_t1

0xbf9b,	// (0x0002b050) cell_vkb_side_pane_t1_copy1

0xbb6b,	// (0x0002ac20) bg_fep_vkb_candidate_pane_g2

0xc0df,	// (0x0002b194) cell_vkb_candidate_pane_ParamLimits

0xbc22,	// (0x0002acd7) aid_size_cell_vkb_ParamLimits

0xbc22,	// (0x0002acd7) aid_size_cell_vkb

0xc0df,	// (0x0002b194) cell_vkb_candidate_pane

0x8a0b,	// (0x00027ac0) bg_popup_fep_shadow_pane_g1

0xbcb4,	// (0x0002ad69) fep_vkb_bottom_pane_ParamLimits

0xbcb4,	// (0x0002ad69) fep_vkb_bottom_pane

0xbcf1,	// (0x0002ada6) fep_vkb_candidate_pane_ParamLimits

0xbcf1,	// (0x0002ada6) fep_vkb_candidate_pane

0xbd0d,	// (0x0002adc2) fep_vkb_keypad_pane_ParamLimits

0xbd0d,	// (0x0002adc2) fep_vkb_keypad_pane

0xbd40,	// (0x0002adf5) fep_vkb_side_pane_ParamLimits

0xbd40,	// (0x0002adf5) fep_vkb_side_pane

0xbd7c,	// (0x0002ae31) fep_vkb_top_pane_ParamLimits

0xbd7c,	// (0x0002ae31) fep_vkb_top_pane

0xbdb8,	// (0x0002ae6d) fep_vkb_top_pane_g1_ParamLimits

0xbdb8,	// (0x0002ae6d) fep_vkb_top_pane_g1

0xbdc7,	// (0x0002ae7c) fep_vkb_top_pane_g2_ParamLimits

0xbdc7,	// (0x0002ae7c) fep_vkb_top_pane_g2

0xbdd6,	// (0x0002ae8b) fep_vkb_top_pane_g3_ParamLimits

0xbdd6,	// (0x0002ae8b) fep_vkb_top_pane_g3

0x0003,

0xfb24,	// (0x0002ebd9) fep_vkb_top_pane_g_ParamLimits

0xfb24,	// (0x0002ebd9) fep_vkb_top_pane_g

0xbdf4,	// (0x0002aea9) fep_vkb_top_text_pane_ParamLimits

0xbdf4,	// (0x0002aea9) fep_vkb_top_text_pane

0xbe05,	// (0x0002aeba) fep_vkb_side_pane_g1_ParamLimits

0xbe05,	// (0x0002aeba) fep_vkb_side_pane_g1

0xbe4e,	// (0x0002af03) grid_vkb_side_pane_ParamLimits

0xbe4e,	// (0x0002af03) grid_vkb_side_pane

0x8a13,	// (0x00027ac8) bg_popup_fep_shadow_pane_g2

0x8a1c,	// (0x00027ad1) bg_popup_fep_shadow_pane_g3

0x8a24,	// (0x00027ad9) bg_popup_fep_shadow_pane_g4

0x8a2d,	// (0x00027ae2) bg_popup_fep_shadow_pane_g5

0x8a37,	// (0x00027aec) bg_popup_fep_shadow_pane_g6

0x8a3f,	// (0x00027af4) bg_popup_fep_shadow_pane_g7

0x2d61,	// (0x00021e16) bg_popup_fep_shadow_pane_g8

0xbead,	// (0x0002af62) grid_vkb_keypad_number_pane_ParamLimits

0xbead,	// (0x0002af62) grid_vkb_keypad_number_pane

0xbec1,	// (0x0002af76) grid_vkb_keypad_pane_ParamLimits

0xbec1,	// (0x0002af76) grid_vkb_keypad_pane

0xbee7,	// (0x0002af9c) fep_vkb_bottom_pane_g1_ParamLimits

0xbee7,	// (0x0002af9c) fep_vkb_bottom_pane_g1

0xbf10,	// (0x0002afc5) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbf10,	// (0x0002afc5) grid_vkb_keypad_bottom_left_pane

0xbf25,	// (0x0002afda) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbf25,	// (0x0002afda) grid_vkb_keypad_bottom_right_pane

0xbf3a,	// (0x0002afef) fep_vkb_top_text_pane_g1

0xbf55,	// (0x0002b00a) fep_vkb_top_text_pane_t1

0xbf6a,	// (0x0002b01f) cell_vkb_side_pane_ParamLimits

0xbf6a,	// (0x0002b01f) cell_vkb_side_pane

0xbb6b,	// (0x0002ac20) cell_vkb_side_pane_g1

0xbfa9,	// (0x0002b05e) cell_vkb_keypad_pane_ParamLimits

0xbfa9,	// (0x0002b05e) cell_vkb_keypad_pane

0xc036,	// (0x0002b0eb) cell_vkb_keypad_pane_g1

0x0008,

0xfb51,	// (0x0002ec06) bg_popup_fep_shadow_pane_g

0xbb6b,	// (0x0002ac20) cell_hwr_side_pane_g1

0xbb6b,	// (0x0002ac20) cell_hwr_side_pane_g2

0xc040,	// (0x0002b0f5) cell_vkb_keypad_pane_t1

0xc04e,	// (0x0002b103) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc04e,	// (0x0002b103) cell_vkb_keypad_bottom_left_pane

0xc06b,	// (0x0002b120) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc06b,	// (0x0002b120) cell_vkb_keypad_bottom_right_pane

0xbb6b,	// (0x0002ac20) cell_vkb_keypad_bottom_left_pane_g1

0xbb6b,	// (0x0002ac20) cell_vkb_keypad_bottom_right_pane_g1

0xc0a4,	// (0x0002b159) cell_vkb_keypad_number_pane_ParamLimits

0xc0a4,	// (0x0002b159) cell_vkb_keypad_number_pane

0xc0c3,	// (0x0002b178) cell_vkb_keypad_number_pane_g1

0xc0cd,	// (0x0002b182) cell_vkb_keypad_number_pane_g2

0xc0d6,	// (0x0002b18b) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb43,	// (0x0002ebf8) cell_vkb_keypad_number_pane_g

0xc040,	// (0x0002b0f5) cell_vkb_keypad_number_pane_t1

0xc100,	// (0x0002b1b5) fep_vkb_candidate_pane_g1

0x0001,

0xfb3e,	// (0x0002ebf3) cell_hwr_side_pane_g

0xc119,	// (0x0002b1ce) cell_hwr_side_pane_t1

0x8a51,	// (0x00027b06) cell_hwr_side_pane_t1_copy1

0xbde6,	// (0x0002ae9b) cell_hwr_candidate_pane_g1

0x8a5f,	// (0x00027b14) cell_hwr_candidate_pane_t1

0xbb6b,	// (0x0002ac20) cell_vkb_candidate_pane_g2

0xc19f,	// (0x0002b254) cell_vkb_candidate_pane_t1

0xf0a2,	// (0x0002e157) bg_popup_fep_shadow_pane_ParamLimits

0xf0a2,	// (0x0002e157) bg_popup_fep_shadow_pane

0x0a52,	// (0x0001fb07) bg_fep_hwr_top_pane_g4

0xbbf0,	// (0x0002aca5) bg_hwr_side_pane_g1_ParamLimits

0xbbf0,	// (0x0002aca5) bg_hwr_side_pane_g1

0x8925,	// (0x000279da) cell_hwr_side_pane_ParamLimits

0x8925,	// (0x000279da) cell_hwr_side_pane

0x8962,	// (0x00027a17) fep_hwr_write_pane_g1_ParamLimits

0x8962,	// (0x00027a17) fep_hwr_write_pane_g1

0x896f,	// (0x00027a24) fep_hwr_write_pane_g2_ParamLimits

0x896f,	// (0x00027a24) fep_hwr_write_pane_g2

0x897c,	// (0x00027a31) fep_hwr_write_pane_g3_ParamLimits

0x897c,	// (0x00027a31) fep_hwr_write_pane_g3

0x898a,	// (0x00027a3f) fep_hwr_write_pane_g4_ParamLimits

0x898a,	// (0x00027a3f) fep_hwr_write_pane_g4

0x0005,

0xfb10,	// (0x0002ebc5) fep_hwr_write_pane_g_ParamLimits

0xfb10,	// (0x0002ebc5) fep_hwr_write_pane_g

0x0a52,	// (0x0001fb07) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0a52,	// (0x0001fb07) bg_fep_hwr_candidate_pane_g2

0x899f,	// (0x00027a54) cell_hwr_candidate_pane_ParamLimits

0x899f,	// (0x00027a54) cell_hwr_candidate_pane

0x89f1,	// (0x00027aa6) fep_hwr_candidate_pane_g1_ParamLimits

0xbc50,	// (0x0002ad05) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbc50,	// (0x0002ad05) bg_popup_fep_shadow_pane_cp2

0xbde6,	// (0x0002ae9b) fep_vkb_top_pane_g4_ParamLimits

0xbde6,	// (0x0002ae9b) fep_vkb_top_pane_g4

0xbe2c,	// (0x0002aee1) fep_vkb_side_pane_g2_ParamLimits

0xbe2c,	// (0x0002aee1) fep_vkb_side_pane_g2

0x5477,	// (0x0002452c) list_setting_pane_t4_ParamLimits

0x5477,	// (0x0002452c) list_setting_pane_t4

0x5513,	// (0x000245c8) list_setting_number_pane_t5_ParamLimits

0x5513,	// (0x000245c8) list_setting_number_pane_t5

0x6c71,	// (0x00025d26) list_double_heading_pane_cp2_ParamLimits

0x6c71,	// (0x00025d26) list_double_heading_pane_cp2

0xc1ad,	// (0x0002b262) list_double_heading_pane_g1_cp2_ParamLimits

0xc1ad,	// (0x0002b262) list_double_heading_pane_g1_cp2

0xc1b9,	// (0x0002b26e) list_double_heading_pane_g2_cp2_ParamLimits

0xc1b9,	// (0x0002b26e) list_double_heading_pane_g2_cp2

0xc1cd,	// (0x0002b282) list_double_heading_pane_t1_cp2_ParamLimits

0xc1cd,	// (0x0002b282) list_double_heading_pane_t1_cp2

0xc1e3,	// (0x0002b298) list_double_heading_pane_t2_cp2_ParamLimits

0xc1e3,	// (0x0002b298) list_double_heading_pane_t2_cp2

0x0a7a,	// (0x0001fb2f) aid_value_unit2

0x6478,	// (0x0002552d) popup_preview_fixed_window

0x2710,	// (0x000217c5) bg_popup_preview_window_pane_cp02

0xc1f5,	// (0x0002b2aa) list_preview_fixed_pane

0xc23b,	// (0x0002b2f0) list_empty_pane_fp_ParamLimits

0xc23b,	// (0x0002b2f0) list_empty_pane_fp

0xc23b,	// (0x0002b2f0) list_single_cale_day_pane_fp_ParamLimits

0xc23b,	// (0x0002b2f0) list_single_cale_day_pane_fp

0xc23b,	// (0x0002b2f0) list_single_graphic_heading_pane_fp_ParamLimits

0xc23b,	// (0x0002b2f0) list_single_graphic_heading_pane_fp

0xc23b,	// (0x0002b2f0) list_single_graphic_pane_fp_ParamLimits

0xc23b,	// (0x0002b2f0) list_single_graphic_pane_fp

0xc23b,	// (0x0002b2f0) list_single_heading_pane_fp_ParamLimits

0xc23b,	// (0x0002b2f0) list_single_heading_pane_fp

0xc23b,	// (0x0002b2f0) list_single_pane_fp_ParamLimits

0xc23b,	// (0x0002b2f0) list_single_pane_fp

0xc254,	// (0x0002b309) list_single_pane_fp_g1_ParamLimits

0xc254,	// (0x0002b309) list_single_pane_fp_g1

0x5ddc,	// (0x00024e91) list_single_pane_fp_g2_ParamLimits

0x5ddc,	// (0x00024e91) list_single_pane_fp_g2

0x5de8,	// (0x00024e9d) list_single_pane_fp_g3_ParamLimits

0x5de8,	// (0x00024e9d) list_single_pane_fp_g3

0xc260,	// (0x0002b315) list_single_pane_fp_g4_ParamLimits

0xc260,	// (0x0002b315) list_single_pane_fp_g4

0x0003,

0xfb72,	// (0x0002ec27) list_single_pane_fp_g_ParamLimits

0xfb72,	// (0x0002ec27) list_single_pane_fp_g

0x5dfc,	// (0x00024eb1) list_single_pane_fp_t1_ParamLimits

0x5dfc,	// (0x00024eb1) list_single_pane_fp_t1

0x5e13,	// (0x00024ec8) list_single_graphic_pane_fp_g1_ParamLimits

0x5e13,	// (0x00024ec8) list_single_graphic_pane_fp_g1

0xc254,	// (0x0002b309) list_single_graphic_pane_fp_g2_ParamLimits

0xc254,	// (0x0002b309) list_single_graphic_pane_fp_g2

0x5ddc,	// (0x00024e91) list_single_graphic_pane_fp_g3_ParamLimits

0x5ddc,	// (0x00024e91) list_single_graphic_pane_fp_g3

0x5de8,	// (0x00024e9d) list_single_graphic_pane_fp_g4_ParamLimits

0x5de8,	// (0x00024e9d) list_single_graphic_pane_fp_g4

0xc260,	// (0x0002b315) list_single_graphic_pane_fp_g5_ParamLimits

0xc260,	// (0x0002b315) list_single_graphic_pane_fp_g5

0x0004,

0xfb7b,	// (0x0002ec30) list_single_graphic_pane_fp_g_ParamLimits

0xfb7b,	// (0x0002ec30) list_single_graphic_pane_fp_g

0x5e1f,	// (0x00024ed4) list_single_graphic_pane_fp_t1_ParamLimits

0x5e1f,	// (0x00024ed4) list_single_graphic_pane_fp_t1

0x5e13,	// (0x00024ec8) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5e13,	// (0x00024ec8) list_single_graphic_heading_pane_fp_g1

0xc254,	// (0x0002b309) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc254,	// (0x0002b309) list_single_graphic_heading_pane_fp_g2

0x5ddc,	// (0x00024e91) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5ddc,	// (0x00024e91) list_single_graphic_heading_pane_fp_g3

0x5de8,	// (0x00024e9d) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5de8,	// (0x00024e9d) list_single_graphic_heading_pane_fp_g4

0xc260,	// (0x0002b315) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc260,	// (0x0002b315) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7b,	// (0x0002ec30) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7b,	// (0x0002ec30) list_single_graphic_heading_pane_fp_g

0x5e35,	// (0x00024eea) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5e35,	// (0x00024eea) list_single_graphic_heading_pane_fp_t1

0x5e4b,	// (0x00024f00) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5e4b,	// (0x00024f00) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb86,	// (0x0002ec3b) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb86,	// (0x0002ec3b) list_single_graphic_heading_pane_fp_t

0x5e5d,	// (0x00024f12) list_single_cale_day_pane_fp_g1_ParamLimits

0x5e5d,	// (0x00024f12) list_single_cale_day_pane_fp_g1

0xc26c,	// (0x0002b321) list_single_cale_day_pane_fp_g2_ParamLimits

0xc26c,	// (0x0002b321) list_single_cale_day_pane_fp_g2

0x5e95,	// (0x00024f4a) list_single_cale_day_pane_fp_g3_ParamLimits

0x5e95,	// (0x00024f4a) list_single_cale_day_pane_fp_g3

0x5ebd,	// (0x00024f72) list_single_cale_day_pane_fp_g4_ParamLimits

0x5ebd,	// (0x00024f72) list_single_cale_day_pane_fp_g4

0x5ee1,	// (0x00024f96) list_single_cale_day_pane_fp_g5_ParamLimits

0x5ee1,	// (0x00024f96) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8b,	// (0x0002ec40) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8b,	// (0x0002ec40) list_single_cale_day_pane_fp_g

0x5f05,	// (0x00024fba) list_single_cale_day_pane_fp_t1_ParamLimits

0x5f05,	// (0x00024fba) list_single_cale_day_pane_fp_t1

0x5f2b,	// (0x00024fe0) list_single_cale_day_pane_fp_t2_ParamLimits

0x5f2b,	// (0x00024fe0) list_single_cale_day_pane_fp_t2

0x5f44,	// (0x00024ff9) list_single_cale_day_pane_fp_t3_ParamLimits

0x5f44,	// (0x00024ff9) list_single_cale_day_pane_fp_t3

0x0002,

0xfb96,	// (0x0002ec4b) list_single_cale_day_pane_fp_t_ParamLimits

0xfb96,	// (0x0002ec4b) list_single_cale_day_pane_fp_t

0xc254,	// (0x0002b309) list_empty_pane_fp_g1_ParamLimits

0xc254,	// (0x0002b309) list_empty_pane_fp_g1

0x5f5d,	// (0x00025012) list_empty_pane_fp_t1

0x5f6b,	// (0x00025020) list_empty_pane_fp_t2

0x0001,

0xfb9d,	// (0x0002ec52) list_empty_pane_fp_t

0xc254,	// (0x0002b309) list_single_heading_pane_fp_g1_ParamLimits

0xc254,	// (0x0002b309) list_single_heading_pane_fp_g1

0x5ddc,	// (0x00024e91) list_single_heading_pane_fp_g2_ParamLimits

0x5ddc,	// (0x00024e91) list_single_heading_pane_fp_g2

0x5de8,	// (0x00024e9d) list_single_heading_pane_fp_g3_ParamLimits

0x5de8,	// (0x00024e9d) list_single_heading_pane_fp_g3

0x0002,

0xfba2,	// (0x0002ec57) list_single_heading_pane_fp_g_ParamLimits

0xfba2,	// (0x0002ec57) list_single_heading_pane_fp_g

0x5f79,	// (0x0002502e) list_single_heading_pane_fp_t1_ParamLimits

0x5f79,	// (0x0002502e) list_single_heading_pane_fp_t1

0x5f8b,	// (0x00025040) list_single_heading_pane_fp_t2_ParamLimits

0x5f8b,	// (0x00025040) list_single_heading_pane_fp_t2

0x0001,

0xfba9,	// (0x0002ec5e) list_single_heading_pane_fp_t_ParamLimits

0xfba9,	// (0x0002ec5e) list_single_heading_pane_fp_t

0x2e7b,	// (0x00021f30) aid_size_cell_fast

0x26f3,	// (0x000217a8) soft_indicator_pane_cp1_t1

0x2eb8,	// (0x00021f6d) cell_app_pane_cp2_ParamLimits

0x2eb8,	// (0x00021f6d) cell_app_pane_cp2

0x882b,	// (0x000278e0) fep_hwr_candidate_drop_down_list_pane

0x0a60,	// (0x0001fb15) fep_hwr_candidate_pane_g3_ParamLimits

0x0a60,	// (0x0001fb15) fep_hwr_candidate_pane_g3

0x0a6d,	// (0x0001fb22) fep_hwr_candidate_pane_g4_ParamLimits

0x0a6d,	// (0x0001fb22) fep_hwr_candidate_pane_g4

0x0002,

0xfb1d,	// (0x0002ebd2) fep_hwr_candidate_pane_g_ParamLimits

0xfb1d,	// (0x0002ebd2) fep_hwr_candidate_pane_g

0xbce0,	// (0x0002ad95) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbce0,	// (0x0002ad95) fep_vkb_candidate_drop_down_list_pane

0xc108,	// (0x0002b1bd) fep_vkb_candidate_pane_g3

0xc110,	// (0x0002b1c5) fep_vkb_candidate_pane_g4

0x0002,

0xfb4a,	// (0x0002ebff) fep_vkb_candidate_pane_g

0xbde6,	// (0x0002ae9b) cell_hwr_candidate_pane_g1_ParamLimits

0xc127,	// (0x0002b1dc) cell_hwr_candidate_pane_g3_ParamLimits

0xc127,	// (0x0002b1dc) cell_hwr_candidate_pane_g3

0xc148,	// (0x0002b1fd) cell_hwr_candidate_pane_g4_ParamLimits

0xc148,	// (0x0002b1fd) cell_hwr_candidate_pane_g4

0x0002,

0xfb64,	// (0x0002ec19) cell_hwr_candidate_pane_g_ParamLimits

0xfb64,	// (0x0002ec19) cell_hwr_candidate_pane_g

0xc169,	// (0x0002b21e) cell_vkb_candidate_pane_g3_ParamLimits

0xc169,	// (0x0002b21e) cell_vkb_candidate_pane_g3

0xc184,	// (0x0002b239) cell_vkb_candidate_pane_g4_ParamLimits

0xc184,	// (0x0002b239) cell_vkb_candidate_pane_g4

0xc278,	// (0x0002b32d) cell_app_pane_cp2_g1_ParamLimits

0xc278,	// (0x0002b32d) cell_app_pane_cp2_g1

0xc296,	// (0x0002b34b) cell_app_pane_cp2_g2_ParamLimits

0xc296,	// (0x0002b34b) cell_app_pane_cp2_g2

0x0001,

0xfbae,	// (0x0002ec63) cell_app_pane_cp2_g_ParamLimits

0xfbae,	// (0x0002ec63) cell_app_pane_cp2_g

0xc2a2,	// (0x0002b357) cell_app_pane_cp2_t1_ParamLimits

0xc2a2,	// (0x0002b357) cell_app_pane_cp2_t1

0x2c78,	// (0x00021d2d) grid_highlight_pane_cp1_ParamLimits

0x2c78,	// (0x00021d2d) grid_highlight_pane_cp1

0x8a7d,	// (0x00027b32) cell_hwr_candidate_pane_cp1_ParamLimits

0x8a7d,	// (0x00027b32) cell_hwr_candidate_pane_cp1

0xbde6,	// (0x0002ae9b) fep_hwr_candidate_drop_down_list_pane_g1

0xc2b4,	// (0x0002b369) fep_hwr_candidate_drop_down_list_pane_g2

0xc2c1,	// (0x0002b376) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb3,	// (0x0002ec68) fep_hwr_candidate_drop_down_list_pane_g

0x8aa1,	// (0x00027b56) fep_hwr_candidate_drop_down_list_scroll_pane

0x8aaa,	// (0x00027b5f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8aaa,	// (0x00027b5f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x8ab7,	// (0x00027b6c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8ab7,	// (0x00027b6c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x8ac4,	// (0x00027b79) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8ac4,	// (0x00027b79) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc169,	// (0x0002b21e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc169,	// (0x0002b21e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc184,	// (0x0002b239) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc184,	// (0x0002b239) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x8ad1,	// (0x00027b86) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8ad1,	// (0x00027b86) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x8aec,	// (0x00027ba1) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8aec,	// (0x00027ba1) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x8b07,	// (0x00027bbc) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8b07,	// (0x00027bbc) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbba,	// (0x0002ec6f) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbba,	// (0x0002ec6f) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc2ce,	// (0x0002b383) cell_vkb_candidate_pane_cp1_ParamLimits

0xc2ce,	// (0x0002b383) cell_vkb_candidate_pane_cp1

0xbde6,	// (0x0002ae9b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbde6,	// (0x0002ae9b) fep_vkb_candidate_drop_down_list_pane_g1

0xc2b4,	// (0x0002b369) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc2b4,	// (0x0002b369) fep_vkb_candidate_drop_down_list_pane_g2

0xc2c1,	// (0x0002b376) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc2c1,	// (0x0002b376) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb3,	// (0x0002ec68) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb3,	// (0x0002ec68) fep_vkb_candidate_drop_down_list_pane_g

0xc2f4,	// (0x0002b3a9) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc2f4,	// (0x0002b3a9) fep_vkb_candidate_drop_down_list_scroll_pane

0xc301,	// (0x0002b3b6) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc301,	// (0x0002b3b6) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc30e,	// (0x0002b3c3) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc30e,	// (0x0002b3c3) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc31a,	// (0x0002b3cf) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc31a,	// (0x0002b3cf) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc127,	// (0x0002b1dc) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc127,	// (0x0002b1dc) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc148,	// (0x0002b1fd) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc148,	// (0x0002b1fd) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc326,	// (0x0002b3db) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc326,	// (0x0002b3db) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc347,	// (0x0002b3fc) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc347,	// (0x0002b3fc) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc368,	// (0x0002b41d) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc368,	// (0x0002b41d) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcb,	// (0x0002ec80) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcb,	// (0x0002ec80) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6598,	// (0x0002564d) title_pane_g1_ParamLimits

0x65a5,	// (0x0002565a) title_pane_g2_ParamLimits

0xf554,	// (0x0002e609) title_pane_g_ParamLimits

0x31ef,	// (0x000222a4) aid_call2_pane

0x31e7,	// (0x0002229c) aid_call_pane

0x31f7,	// (0x000222ac) popup_clock_analogue_window_g1

0x31f7,	// (0x000222ac) popup_clock_analogue_window_g2

0x6c52,	// (0x00025d07) popup_clock_analogue_window_g3

0x6c5b,	// (0x00025d10) popup_clock_analogue_window_g4

0x0a8c,	// (0x0001fb41) popup_clock_analogue_window_g5

0x0004,

0xf6f9,	// (0x0002e7ae) popup_clock_analogue_window_g

0x6c63,	// (0x00025d18) popup_clock_analogue_window_t1

0x6ca4,	// (0x00025d59) clock_digital_number_pane_ParamLimits

0x6ca4,	// (0x00025d59) clock_digital_number_pane

0x6cb0,	// (0x00025d65) clock_digital_number_pane_cp02_ParamLimits

0x6cb0,	// (0x00025d65) clock_digital_number_pane_cp02

0x6cbc,	// (0x00025d71) clock_digital_number_pane_cp03_ParamLimits

0x6cbc,	// (0x00025d71) clock_digital_number_pane_cp03

0x6cc8,	// (0x00025d7d) clock_digital_number_pane_cp04_ParamLimits

0x6cc8,	// (0x00025d7d) clock_digital_number_pane_cp04

0x6cd4,	// (0x00025d89) clock_digital_separator_pane_ParamLimits

0x6cd4,	// (0x00025d89) clock_digital_separator_pane

0x6ce0,	// (0x00025d95) popup_clock_digital_window_t1_ParamLimits

0x6ce0,	// (0x00025d95) popup_clock_digital_window_t1

0x0a8c,	// (0x0001fb41) clock_digital_number_pane_g1

0x0a8c,	// (0x0001fb41) clock_digital_number_pane_g2

0x0001,

0xf704,	// (0x0002e7b9) clock_digital_number_pane_g

0x0a8c,	// (0x0001fb41) clock_digital_separator_pane_g1

0x0a8c,	// (0x0001fb41) clock_digital_separator_pane_g2

0x0001,

0xf704,	// (0x0002e7b9) clock_digital_separator_pane_g

0x7e70,	// (0x00026f25) aid_fill_nsta_ParamLimits

0x7fc0,	// (0x00027075) indicator_nsta_pane_ParamLimits

0x8151,	// (0x00027206) popup_clock_analogue_window

0x8151,	// (0x00027206) popup_clock_digital_window

0x0afe,	// (0x0001fbb3) grid_indicator_nsta_pane_ParamLimits

0xb598,	// (0x0002a64d) clock_nsta_pane_t2

0x0001,

0xfa9d,	// (0x0002eb52) clock_nsta_pane_t

0x6bbb,	// (0x00025c70) aid_size_max_handle

0x6bc5,	// (0x00025c7a) aid_size_min_handle

0x72c4,	// (0x00026379) editor_scroll_pane

0xc383,	// (0x0002b438) ex_editor_pane

0x2e41,	// (0x00021ef6) scroll_pane_cp13

0x2b91,	// (0x00021c46) scroll_pane_cp14

0x3226,	// (0x000222db) scroll_pane_cp36

0x6c87,	// (0x00025d3c) list_single_graphic_hl_pane_cp2_ParamLimits

0x6c87,	// (0x00025d3c) list_single_graphic_hl_pane_cp2

0x5a75,	// (0x00024b2a) list_single_graphic_hl_pane_ParamLimits

0x5a75,	// (0x00024b2a) list_single_graphic_hl_pane

0x5fa1,	// (0x00025056) aid_size_min_hl_cp1

0xc38b,	// (0x0002b440) list_highlight_pane_cp34_ParamLimits

0xc38b,	// (0x0002b440) list_highlight_pane_cp34

0xc39c,	// (0x0002b451) list_single_graphic_hl_pane_g1_ParamLimits

0xc39c,	// (0x0002b451) list_single_graphic_hl_pane_g1

0x5faa,	// (0x0002505f) list_single_graphic_hl_pane_g2_ParamLimits

0x5faa,	// (0x0002505f) list_single_graphic_hl_pane_g2

0x5faa,	// (0x0002505f) list_single_graphic_hl_pane_g3_ParamLimits

0x5faa,	// (0x0002505f) list_single_graphic_hl_pane_g3

0x5861,	// (0x00024916) list_single_graphic_hl_pane_g4_ParamLimits

0x5861,	// (0x00024916) list_single_graphic_hl_pane_g4

0x5fb6,	// (0x0002506b) list_single_graphic_hl_pane_g5_ParamLimits

0x5fb6,	// (0x0002506b) list_single_graphic_hl_pane_g5

0x0004,

0xfbdc,	// (0x0002ec91) list_single_graphic_hl_pane_g_ParamLimits

0xfbdc,	// (0x0002ec91) list_single_graphic_hl_pane_g

0x5fca,	// (0x0002507f) list_single_graphic_hl_pane_t1_ParamLimits

0x5fca,	// (0x0002507f) list_single_graphic_hl_pane_t1

0xc3a9,	// (0x0002b45e) aid_size_min_hl_cp2

0xc3b2,	// (0x0002b467) list_highlight_pane_cp34_cp2_ParamLimits

0xc3b2,	// (0x0002b467) list_highlight_pane_cp34_cp2

0xc39c,	// (0x0002b451) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc39c,	// (0x0002b451) list_single_graphic_hl_pane_g1_cp2

0xc3bf,	// (0x0002b474) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc3bf,	// (0x0002b474) list_single_graphic_hl_pane_g2_cp2

0xc3cb,	// (0x0002b480) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc3cb,	// (0x0002b480) list_single_graphic_hl_pane_g3_cp2

0x33e1,	// (0x00022496) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x33e1,	// (0x00022496) list_single_graphic_hl_pane_g4_cp2

0xc41b,	// (0x0002b4d0) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc41b,	// (0x0002b4d0) list_single_graphic_hl_pane_g5_cp2

0x768a,	// (0x0002673f) control_pane_g4_ParamLimits

0x768a,	// (0x0002673f) control_pane_g4

0x7839,	// (0x000268ee) bg_popup_sub_pane_cp10_ParamLimits

0xbb75,	// (0x0002ac2a) list_choice_list_pane_ParamLimits

0xbb84,	// (0x0002ac39) scroll_pane_cp23

0x2710,	// (0x000217c5) bg_popup_preview_window_pane_cp02_ParamLimits

0xc1f5,	// (0x0002b2aa) list_preview_fixed_pane_ParamLimits

0xc20b,	// (0x0002b2c0) list_preview_fixed_pane_cp_ParamLimits

0xc20b,	// (0x0002b2c0) list_preview_fixed_pane_cp

0xc217,	// (0x0002b2cc) popup_preview_fixed_window_g1_ParamLimits

0xc217,	// (0x0002b2cc) popup_preview_fixed_window_g1

0xc223,	// (0x0002b2d8) popup_preview_fixed_window_g2_ParamLimits

0xc223,	// (0x0002b2d8) popup_preview_fixed_window_g2

0x0002,

0xfb6b,	// (0x0002ec20) popup_preview_fixed_window_g_ParamLimits

0xfb6b,	// (0x0002ec20) popup_preview_fixed_window_g

0x6aaa,	// (0x00025b5f) aid_navi_side_left_pane_ParamLimits

0x6abf,	// (0x00025b74) aid_navi_side_right_pane_ParamLimits

0x6ad7,	// (0x00025b8c) navi_icon_pane_stacon_ParamLimits

0x6aeb,	// (0x00025ba0) navi_navi_pane_stacon_ParamLimits

0x6ad7,	// (0x00025b8c) navi_text_pane_stacon_ParamLimits

0x0a82,	// (0x0001fb37) main_text_info_pane

0xc445,	// (0x0002b4fa) listscroll_text_info_pane

0xc44d,	// (0x0002b502) list_text_info_pane_ParamLimits

0xc44d,	// (0x0002b502) list_text_info_pane

0xc45c,	// (0x0002b511) scroll_pane_cp24_ParamLimits

0xc45c,	// (0x0002b511) scroll_pane_cp24

0xc47a,	// (0x0002b52f) list_text_info_pane_t1_ParamLimits

0xc47a,	// (0x0002b52f) list_text_info_pane_t1

0x7883,	// (0x00026938) popup_fast_swap2_window_ParamLimits

0x7883,	// (0x00026938) popup_fast_swap2_window

0xc49f,	// (0x0002b554) aid_size_cell_fast2

0x0a82,	// (0x0001fb37) bg_popup_window_pane_cp17

0x9976,	// (0x00028a2b) heading_pane_cp2

0x2916,	// (0x000219cb) listscroll_fast2_pane

0xc4a9,	// (0x0002b55e) grid_fast2_pane

0xc4b3,	// (0x0002b568) listscroll_fast2_pane_g1

0xc4bd,	// (0x0002b572) listscroll_fast2_pane_g2

0x0001,

0xfbe7,	// (0x0002ec9c) listscroll_fast2_pane_g

0x2e41,	// (0x00021ef6) scroll_pane_cp26

0xc4c7,	// (0x0002b57c) cell_fast2_pane_ParamLimits

0xc4c7,	// (0x0002b57c) cell_fast2_pane

0xc4de,	// (0x0002b593) cell_fast2_pane_g1

0xc4e7,	// (0x0002b59c) cell_fast2_pane_g2

0xc4f0,	// (0x0002b5a5) cell_fast2_pane_g3

0x0002,

0xfbec,	// (0x0002eca1) cell_fast2_pane_g

0x2958,	// (0x00021a0d) grid_highlight_pane_cp9

0x296d,	// (0x00021a22) main_eswt_pane_ParamLimits

0x296d,	// (0x00021a22) main_eswt_pane

0xc471,	// (0x0002b526) list_single_text_info_pane

0xc4f8,	// (0x0002b5ad) eswt_ctrl_button_pane

0xc4f8,	// (0x0002b5ad) eswt_ctrl_canvas_pane

0xc500,	// (0x0002b5b5) eswt_ctrl_combo_pane

0xc4f8,	// (0x0002b5ad) eswt_ctrl_default_pane

0xc4f8,	// (0x0002b5ad) eswt_ctrl_label_pane

0xc508,	// (0x0002b5bd) eswt_ctrl_wait_pane

0xc510,	// (0x0002b5c5) eswt_shell_pane

0x0a82,	// (0x0001fb37) listscroll_eswt_app_pane

0xc530,	// (0x0002b5e5) popup_eswt_tasktip_window_ParamLimits

0xc530,	// (0x0002b5e5) popup_eswt_tasktip_window

0x95b6,	// (0x0002866b) bg_popup_window_pane_cp18

0xc541,	// (0x0002b5f6) eswt_control_pane_g1_ParamLimits

0xc541,	// (0x0002b5f6) eswt_control_pane_g1

0xc54e,	// (0x0002b603) eswt_control_pane_g2_ParamLimits

0xc54e,	// (0x0002b603) eswt_control_pane_g2

0xc55b,	// (0x0002b610) eswt_control_pane_g3_ParamLimits

0xc55b,	// (0x0002b610) eswt_control_pane_g3

0xc568,	// (0x0002b61d) eswt_control_pane_g4_ParamLimits

0xc568,	// (0x0002b61d) eswt_control_pane_g4

0x0003,

0xfbf3,	// (0x0002eca8) eswt_control_pane_g_ParamLimits

0xfbf3,	// (0x0002eca8) eswt_control_pane_g

0x2c78,	// (0x00021d2d) bg_button_pane_ParamLimits

0x2c78,	// (0x00021d2d) bg_button_pane

0x296d,	// (0x00021a22) common_borders_pane_copy2_ParamLimits

0x296d,	// (0x00021a22) common_borders_pane_copy2

0xc575,	// (0x0002b62a) control_button_pane_g1_ParamLimits

0xc575,	// (0x0002b62a) control_button_pane_g1

0xc581,	// (0x0002b636) control_button_pane_g2_ParamLimits

0xc581,	// (0x0002b636) control_button_pane_g2

0xc58d,	// (0x0002b642) control_button_pane_g3_ParamLimits

0xc58d,	// (0x0002b642) control_button_pane_g3

0x0002,

0xfbfc,	// (0x0002ecb1) control_button_pane_g_ParamLimits

0xfbfc,	// (0x0002ecb1) control_button_pane_g

0xc5a1,	// (0x0002b656) control_button_pane_t1

0xc5af,	// (0x0002b664) control_button_pane_t2

0x0001,

0xfc03,	// (0x0002ecb8) control_button_pane_t

0x83aa,	// (0x0002745f) bg_button_pane_g1

0x83b2,	// (0x00027467) bg_button_pane_g2

0x83ba,	// (0x0002746f) bg_button_pane_g3

0x83c2,	// (0x00027477) bg_button_pane_g4

0x83ca,	// (0x0002747f) bg_button_pane_g5

0x83d2,	// (0x00027487) bg_button_pane_g6

0x83da,	// (0x0002748f) bg_button_pane_g7

0x83e2,	// (0x00027497) bg_button_pane_g8

0x83ea,	// (0x0002749f) bg_button_pane_g9

0x0008,

0xf867,	// (0x0002e91c) bg_button_pane_g

0xbb30,	// (0x0002abe5) common_borders_pane_ParamLimits

0xbb30,	// (0x0002abe5) common_borders_pane

0xc541,	// (0x0002b5f6) eswt_control_pane_g1_copy1_ParamLimits

0xc541,	// (0x0002b5f6) eswt_control_pane_g1_copy1

0xc54e,	// (0x0002b603) eswt_control_pane_g2_copy1_ParamLimits

0xc54e,	// (0x0002b603) eswt_control_pane_g2_copy1

0xc55b,	// (0x0002b610) eswt_control_pane_g3_copy1_ParamLimits

0xc55b,	// (0x0002b610) eswt_control_pane_g3_copy1

0xc568,	// (0x0002b61d) eswt_control_pane_g4_copy1_ParamLimits

0xc568,	// (0x0002b61d) eswt_control_pane_g4_copy1

0xbb6b,	// (0x0002ac20) bg_eswt_ctrl_canvas_pane_g1

0xbb30,	// (0x0002abe5) common_borders_pane_cp2_ParamLimits

0xbb30,	// (0x0002abe5) common_borders_pane_cp2

0xbb30,	// (0x0002abe5) common_borders_pane_cp3_ParamLimits

0xbb30,	// (0x0002abe5) common_borders_pane_cp3

0xc5bd,	// (0x0002b672) separator_horizontal_pane

0xc5c5,	// (0x0002b67a) separator_vertical_pane

0xc541,	// (0x0002b5f6) eswt_control_pane_g1_copy2_ParamLimits

0xc541,	// (0x0002b5f6) eswt_control_pane_g1_copy2

0xc54e,	// (0x0002b603) eswt_control_pane_g2_copy2_ParamLimits

0xc54e,	// (0x0002b603) eswt_control_pane_g2_copy2

0xc55b,	// (0x0002b610) eswt_control_pane_g3_copy2_ParamLimits

0xc55b,	// (0x0002b610) eswt_control_pane_g3_copy2

0xc568,	// (0x0002b61d) eswt_control_pane_g4_copy2_ParamLimits

0xc568,	// (0x0002b61d) eswt_control_pane_g4_copy2

0x0a82,	// (0x0001fb37) common_borders_pane_cp4

0xc5ce,	// (0x0002b683) separator_horizontal_pane_g1

0xc5d7,	// (0x0002b68c) separator_horizontal_pane_g2

0xc5e0,	// (0x0002b695) separator_horizontal_pane_g3

0x0002,

0xfc08,	// (0x0002ecbd) separator_horizontal_pane_g

0xc541,	// (0x0002b5f6) eswt_control_pane_g1_copy3_ParamLimits

0xc541,	// (0x0002b5f6) eswt_control_pane_g1_copy3

0xc54e,	// (0x0002b603) eswt_control_pane_g2_copy3_ParamLimits

0xc54e,	// (0x0002b603) eswt_control_pane_g2_copy3

0xc55b,	// (0x0002b610) eswt_control_pane_g3_copy3_ParamLimits

0xc55b,	// (0x0002b610) eswt_control_pane_g3_copy3

0xc568,	// (0x0002b61d) eswt_control_pane_g4_copy3_ParamLimits

0xc568,	// (0x0002b61d) eswt_control_pane_g4_copy3

0x0a82,	// (0x0001fb37) common_borders_pane_cp5

0xc5e9,	// (0x0002b69e) separator_vertical_pane_g1

0xc5f2,	// (0x0002b6a7) separator_vertical_pane_g2

0xc5fb,	// (0x0002b6b0) separator_vertical_pane_g3

0x0002,

0xfc0f,	// (0x0002ecc4) separator_vertical_pane_g

0xc541,	// (0x0002b5f6) eswt_control_pane_g1_copy4_ParamLimits

0xc541,	// (0x0002b5f6) eswt_control_pane_g1_copy4

0xc54e,	// (0x0002b603) eswt_control_pane_g2_copy4_ParamLimits

0xc54e,	// (0x0002b603) eswt_control_pane_g2_copy4

0xc55b,	// (0x0002b610) eswt_control_pane_g3_copy4_ParamLimits

0xc55b,	// (0x0002b610) eswt_control_pane_g3_copy4

0xc568,	// (0x0002b61d) eswt_control_pane_g4_copy4_ParamLimits

0xc568,	// (0x0002b61d) eswt_control_pane_g4_copy4

0xc604,	// (0x0002b6b9) eswt_ctrl_combo_button_pane

0xc60c,	// (0x0002b6c1) eswt_ctrl_input_pane

0xc614,	// (0x0002b6c9) popup_choice_list_window_cp70

0xc61c,	// (0x0002b6d1) eswt_ctrl_input_pane_t1

0x0a82,	// (0x0001fb37) input_focus_pane_cp70

0xbb30,	// (0x0002abe5) bg_button_pane_cp70_ParamLimits

0xbb30,	// (0x0002abe5) bg_button_pane_cp70

0xc62a,	// (0x0002b6df) eswt_ctrl_combo_button_pane_g1

0xc632,	// (0x0002b6e7) wait_bar_pane_cp70

0x95b6,	// (0x0002866b) bg_popup_window_pane_cp70_ParamLimits

0x95b6,	// (0x0002866b) bg_popup_window_pane_cp70

0xc63a,	// (0x0002b6ef) popup_eswt_tasktip_window_t1

0xc650,	// (0x0002b705) wait_bar_pane_cp71_ParamLimits

0xc650,	// (0x0002b705) wait_bar_pane_cp71

0xc65c,	// (0x0002b711) grid_eswt_app_pane

0x3086,	// (0x0002213b) scroll_pane_cp70

0xc665,	// (0x0002b71a) cell_eswt_app_pane_ParamLimits

0xc665,	// (0x0002b71a) cell_eswt_app_pane

0xc697,	// (0x0002b74c) cell_eswt_app_pane_g1_ParamLimits

0xc697,	// (0x0002b74c) cell_eswt_app_pane_g1

0xc6c6,	// (0x0002b77b) cell_eswt_app_pane_g2_ParamLimits

0xc6c6,	// (0x0002b77b) cell_eswt_app_pane_g2

0x0001,

0xfc16,	// (0x0002eccb) cell_eswt_app_pane_g_ParamLimits

0xfc16,	// (0x0002eccb) cell_eswt_app_pane_g

0xc6ef,	// (0x0002b7a4) cell_eswt_app_pane_t1_ParamLimits

0xc6ef,	// (0x0002b7a4) cell_eswt_app_pane_t1

0xc721,	// (0x0002b7d6) grid_highlight_pane_cp70_ParamLimits

0xc721,	// (0x0002b7d6) grid_highlight_pane_cp70

0x7195,	// (0x0002624a) set_content_pane_g1

0x7611,	// (0x000266c6) status_small_volume_pane

0x8b22,	// (0x00027bd7) status_small_volume_pane_g1

0x8b2a,	// (0x00027bdf) volume_small2_pane

0x8b33,	// (0x00027be8) volume_small2_pane_g1

0x8b3c,	// (0x00027bf1) volume_small2_pane_g2

0x8b45,	// (0x00027bfa) volume_small2_pane_g3

0x8b4e,	// (0x00027c03) volume_small2_pane_g4

0x8b57,	// (0x00027c0c) volume_small2_pane_g5

0x8b60,	// (0x00027c15) volume_small2_pane_g6

0x8b69,	// (0x00027c1e) volume_small2_pane_g7

0x8b72,	// (0x00027c27) volume_small2_pane_g8

0x8b7b,	// (0x00027c30) volume_small2_pane_g9

0x8b84,	// (0x00027c39) volume_small2_pane_g10

0x0009,

0xfc1b,	// (0x0002ecd0) volume_small2_pane_g

0xbf3a,	// (0x0002afef) fep_vkb_top_text_pane_g1_ParamLimits

0xbf55,	// (0x0002b00a) fep_vkb_top_text_pane_t1_ParamLimits

0xc22f,	// (0x0002b2e4) popup_preview_fixed_window_g3_ParamLimits

0xc22f,	// (0x0002b2e4) popup_preview_fixed_window_g3

0x7d94,	// (0x00026e49) popup_toolbar_trans_pane

0xa8fb,	// (0x000299b0) aid_height_set_list_ParamLimits

0xa90c,	// (0x000299c1) aid_size_parent_ParamLimits

0x7839,	// (0x000268ee) list_highlight_pane_cp2_ParamLimits

0x7195,	// (0x0002624a) set_content_pane_g1_ParamLimits

0xab3f,	// (0x00029bf4) list_single_image_pane_ParamLimits

0xab3f,	// (0x00029bf4) list_single_image_pane

0xc72d,	// (0x0002b7e2) aid_size_cell_image_ParamLimits

0xc72d,	// (0x0002b7e2) aid_size_cell_image

0xc73a,	// (0x0002b7ef) grid_single_image_pane_ParamLimits

0xc73a,	// (0x0002b7ef) grid_single_image_pane

0x2ca3,	// (0x00021d58) list_single_image_pane_g1_ParamLimits

0x2ca3,	// (0x00021d58) list_single_image_pane_g1

0x2caf,	// (0x00021d64) list_single_image_pane_g2_ParamLimits

0x2caf,	// (0x00021d64) list_single_image_pane_g2

0x0001,

0xfc30,	// (0x0002ece5) list_single_image_pane_g_ParamLimits

0xfc30,	// (0x0002ece5) list_single_image_pane_g

0xc748,	// (0x0002b7fd) list_single_image_pane_t1_ParamLimits

0xc748,	// (0x0002b7fd) list_single_image_pane_t1

0xc75e,	// (0x0002b813) cell_image_list_pane_ParamLimits

0xc75e,	// (0x0002b813) cell_image_list_pane

0xc774,	// (0x0002b829) cell_image_list_pane_g1

0xc77d,	// (0x0002b832) cell_image_list_pane_g2

0x0001,

0xfc35,	// (0x0002ecea) cell_image_list_pane_g

0xc786,	// (0x0002b83b) aid_size_cell_tb_trans_pane

0x2c78,	// (0x00021d2d) bg_tb_trans_pane

0xc798,	// (0x0002b84d) grid_tb_trans_pane

0x83aa,	// (0x0002745f) bg_tb_trans_pane_g1

0x83b2,	// (0x00027467) bg_tb_trans_pane_g2

0x83ba,	// (0x0002746f) bg_tb_trans_pane_g3

0x83c2,	// (0x00027477) bg_tb_trans_pane_g4

0x83ca,	// (0x0002747f) bg_tb_trans_pane_g5

0x83e2,	// (0x00027497) bg_tb_trans_pane_g6

0x83ea,	// (0x0002749f) bg_tb_trans_pane_g7

0x83d2,	// (0x00027487) bg_tb_trans_pane_g8

0x83da,	// (0x0002748f) bg_tb_trans_pane_g9

0x0008,

0xfc3a,	// (0x0002ecef) bg_tb_trans_pane_g

0xc7ac,	// (0x0002b861) cell_toolbar_trans_pane_ParamLimits

0xc7ac,	// (0x0002b861) cell_toolbar_trans_pane

0xbb6b,	// (0x0002ac20) cell_toolbar_trans_pane_g1

0xb78f,	// (0x0002a844) list_form2_midp_pane_t1

0xb79d,	// (0x0002a852) list_form2_midp_pane_t2

0x0001,

0xfae3,	// (0x0002eb98) list_form2_midp_pane_t

0xb7ab,	// (0x0002a860) scroll_pane_cp51_ParamLimits

0xb972,	// (0x0002aa27) form2_midp_wait_pane_g1

0xb97b,	// (0x0002aa30) form2_midp_wait_pane_g2

0xb984,	// (0x0002aa39) form2_midp_wait_pane_g3

0x0002,

0xfaf8,	// (0x0002ebad) form2_midp_wait_pane_g

0x0afe,	// (0x0001fbb3) list_highlight_pane_cp21_ParamLimits

0xb9c8,	// (0x0002aa7d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb9d7,	// (0x0002aa8c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xaaf8,	// (0x00029bad) list_single_2graphic_im_pane_ParamLimits

0xaaf8,	// (0x00029bad) list_single_2graphic_im_pane

0xc7d2,	// (0x0002b887) list_single_2graphic_im_pane_g1_ParamLimits

0xc7d2,	// (0x0002b887) list_single_2graphic_im_pane_g1

0xc7e3,	// (0x0002b898) list_single_2graphic_im_pane_g2_ParamLimits

0xc7e3,	// (0x0002b898) list_single_2graphic_im_pane_g2

0xc7ef,	// (0x0002b8a4) list_single_2graphic_im_pane_g3_ParamLimits

0xc7ef,	// (0x0002b8a4) list_single_2graphic_im_pane_g3

0x0003,

0xfc4d,	// (0x0002ed02) list_single_2graphic_im_pane_g_ParamLimits

0xfc4d,	// (0x0002ed02) list_single_2graphic_im_pane_g

0xc80f,	// (0x0002b8c4) list_single_2graphic_im_pane_t1_ParamLimits

0xc80f,	// (0x0002b8c4) list_single_2graphic_im_pane_t1

0xc23b,	// (0x0002b2f0) list_single_graphic_2heading_pane_fp_ParamLimits

0xc23b,	// (0x0002b2f0) list_single_graphic_2heading_pane_fp

0x5e13,	// (0x00024ec8) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5e13,	// (0x00024ec8) list_single_graphic_2heading_pane_fp_g1

0xc254,	// (0x0002b309) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc254,	// (0x0002b309) list_single_graphic_2heading_pane_fp_g2

0x5ddc,	// (0x00024e91) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5ddc,	// (0x00024e91) list_single_graphic_2heading_pane_fp_g3

0x5de8,	// (0x00024e9d) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5de8,	// (0x00024e9d) list_single_graphic_2heading_pane_fp_g4

0xc260,	// (0x0002b315) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc260,	// (0x0002b315) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7b,	// (0x0002ec30) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7b,	// (0x0002ec30) list_single_graphic_2heading_pane_fp_g

0x5fe0,	// (0x00025095) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5fe0,	// (0x00025095) list_single_graphic_2heading_pane_fp_t1

0x5e4b,	// (0x00024f00) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5e4b,	// (0x00024f00) list_single_graphic_2heading_pane_fp_t2

0x5ff6,	// (0x000250ab) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5ff6,	// (0x000250ab) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc56,	// (0x0002ed0b) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc56,	// (0x0002ed0b) list_single_graphic_2heading_pane_fp_t

0xbbfc,	// (0x0002acb1) fep_hwr_write_pane_g5_ParamLimits

0xbbfc,	// (0x0002acb1) fep_hwr_write_pane_g5

0xbc08,	// (0x0002acbd) fep_hwr_write_pane_g6_ParamLimits

0xbc08,	// (0x0002acbd) fep_hwr_write_pane_g6

0xc510,	// (0x0002b5c5) eswt_shell_pane_ParamLimits

0x95b6,	// (0x0002866b) bg_popup_window_pane_cp18_ParamLimits

0xa852,	// (0x00029907) heading_pane_cp70

0xc63a,	// (0x0002b6ef) popup_eswt_tasktip_window_t1_ParamLimits

0x7ec7,	// (0x00026f7c) aid_touch_tab_arrow_left

0x7ed6,	// (0x00026f8b) aid_touch_tab_arrow_right

0x0aa0,	// (0x0001fb55) title_pane_g3_ParamLimits

0x0aa0,	// (0x0001fb55) title_pane_g3

0x2bd2,	// (0x00021c87) set_value_pane_g1

0x7d94,	// (0x00026e49) popup_toolbar_trans_pane_ParamLimits

0xc786,	// (0x0002b83b) aid_size_cell_tb_trans_pane_ParamLimits

0x2c78,	// (0x00021d2d) bg_tb_trans_pane_ParamLimits

0xc798,	// (0x0002b84d) grid_tb_trans_pane_ParamLimits

0x2710,	// (0x000217c5) cont_note_pane_ParamLimits

0x2710,	// (0x000217c5) cont_note_pane

0x296d,	// (0x00021a22) cont_snote2_single_text_pane_ParamLimits

0x296d,	// (0x00021a22) cont_snote2_single_text_pane

0x296d,	// (0x00021a22) cont_snote2_single_graphic_pane_ParamLimits

0x296d,	// (0x00021a22) cont_snote2_single_graphic_pane

0x9b92,	// (0x00028c47) cont_note_wait_pane_ParamLimits

0x9b92,	// (0x00028c47) cont_note_wait_pane

0x9b92,	// (0x00028c47) cont_note_image_pane_ParamLimits

0x9b92,	// (0x00028c47) cont_note_image_pane

0xc840,	// (0x0002b8f5) popup_note2_window_g1_ParamLimits

0xc840,	// (0x0002b8f5) popup_note2_window_g1

0xc871,	// (0x0002b926) popup_note2_window_t1_ParamLimits

0xc871,	// (0x0002b926) popup_note2_window_t1

0xc8b6,	// (0x0002b96b) popup_note2_window_t2_ParamLimits

0xc8b6,	// (0x0002b96b) popup_note2_window_t2

0xc8fb,	// (0x0002b9b0) popup_note2_window_t3_ParamLimits

0xc8fb,	// (0x0002b9b0) popup_note2_window_t3

0xc940,	// (0x0002b9f5) popup_note2_window_t4_ParamLimits

0xc940,	// (0x0002b9f5) popup_note2_window_t4

0x2794,	// (0x00021849) popup_note2_window_t5_ParamLimits

0x2794,	// (0x00021849) popup_note2_window_t5

0x0004,

0xfc62,	// (0x0002ed17) popup_note2_window_t_ParamLimits

0xfc62,	// (0x0002ed17) popup_note2_window_t

0xc96f,	// (0x0002ba24) popup_note2_image_window_g1_ParamLimits

0xc96f,	// (0x0002ba24) popup_note2_image_window_g1

0xc97b,	// (0x0002ba30) popup_note2_image_window_g2_ParamLimits

0xc97b,	// (0x0002ba30) popup_note2_image_window_g2

0x0001,

0xfc6d,	// (0x0002ed22) popup_note2_image_window_g_ParamLimits

0xfc6d,	// (0x0002ed22) popup_note2_image_window_g

0xc98d,	// (0x0002ba42) popup_note2_image_window_t1_ParamLimits

0xc98d,	// (0x0002ba42) popup_note2_image_window_t1

0xc9a5,	// (0x0002ba5a) popup_note2_image_window_t2_ParamLimits

0xc9a5,	// (0x0002ba5a) popup_note2_image_window_t2

0xc9bd,	// (0x0002ba72) popup_note2_image_window_t3_ParamLimits

0xc9bd,	// (0x0002ba72) popup_note2_image_window_t3

0x0002,

0xfc72,	// (0x0002ed27) popup_note2_image_window_t_ParamLimits

0xfc72,	// (0x0002ed27) popup_note2_image_window_t

0x9ba0,	// (0x00028c55) popup_note2_wait_window_g1_ParamLimits

0x9ba0,	// (0x00028c55) popup_note2_wait_window_g1

0xc9d9,	// (0x0002ba8e) popup_note2_wait_window_g2_ParamLimits

0xc9d9,	// (0x0002ba8e) popup_note2_wait_window_g2

0x9bb8,	// (0x00028c6d) popup_note2_wait_window_g3_ParamLimits

0x9bb8,	// (0x00028c6d) popup_note2_wait_window_g3

0x0002,

0xfc79,	// (0x0002ed2e) popup_note2_wait_window_g_ParamLimits

0xfc79,	// (0x0002ed2e) popup_note2_wait_window_g

0xc9e5,	// (0x0002ba9a) popup_note2_wait_window_t1_ParamLimits

0xc9e5,	// (0x0002ba9a) popup_note2_wait_window_t1

0xca03,	// (0x0002bab8) popup_note2_wait_window_t2_ParamLimits

0xca03,	// (0x0002bab8) popup_note2_wait_window_t2

0xca21,	// (0x0002bad6) popup_note2_wait_window_t3_ParamLimits

0xca21,	// (0x0002bad6) popup_note2_wait_window_t3

0xca33,	// (0x0002bae8) popup_note2_wait_window_t4_ParamLimits

0xca33,	// (0x0002bae8) popup_note2_wait_window_t4

0x0003,

0xfc80,	// (0x0002ed35) popup_note2_wait_window_t_ParamLimits

0xfc80,	// (0x0002ed35) popup_note2_wait_window_t

0xca45,	// (0x0002bafa) wait_bar2_pane_ParamLimits

0xca45,	// (0x0002bafa) wait_bar2_pane

0xca5d,	// (0x0002bb12) popup_snote2_single_text_window_g1_ParamLimits

0xca5d,	// (0x0002bb12) popup_snote2_single_text_window_g1

0xca85,	// (0x0002bb3a) popup_snote2_single_text_window_t1_ParamLimits

0xca85,	// (0x0002bb3a) popup_snote2_single_text_window_t1

0xcad1,	// (0x0002bb86) popup_snote2_single_text_window_t2_ParamLimits

0xcad1,	// (0x0002bb86) popup_snote2_single_text_window_t2

0xcb1d,	// (0x0002bbd2) popup_snote2_single_text_window_t3_ParamLimits

0xcb1d,	// (0x0002bbd2) popup_snote2_single_text_window_t3

0xcb5e,	// (0x0002bc13) popup_snote2_single_text_window_t4_ParamLimits

0xcb5e,	// (0x0002bc13) popup_snote2_single_text_window_t4

0xcb94,	// (0x0002bc49) popup_snote2_single_text_window_t5_ParamLimits

0xcb94,	// (0x0002bc49) popup_snote2_single_text_window_t5

0x0004,

0xfc89,	// (0x0002ed3e) popup_snote2_single_text_window_t_ParamLimits

0xfc89,	// (0x0002ed3e) popup_snote2_single_text_window_t

0xcbbf,	// (0x0002bc74) popup_snote2_single_graphic_window_g1_ParamLimits

0xcbbf,	// (0x0002bc74) popup_snote2_single_graphic_window_g1

0xcbe7,	// (0x0002bc9c) popup_snote2_single_graphic_window_g2_ParamLimits

0xcbe7,	// (0x0002bc9c) popup_snote2_single_graphic_window_g2

0x0001,

0xfc94,	// (0x0002ed49) popup_snote2_single_graphic_window_g_ParamLimits

0xfc94,	// (0x0002ed49) popup_snote2_single_graphic_window_g

0xcc0f,	// (0x0002bcc4) popup_snote2_single_graphic_window_t1_ParamLimits

0xcc0f,	// (0x0002bcc4) popup_snote2_single_graphic_window_t1

0xcc5b,	// (0x0002bd10) popup_snote2_single_graphic_window_t2_ParamLimits

0xcc5b,	// (0x0002bd10) popup_snote2_single_graphic_window_t2

0xcb1d,	// (0x0002bbd2) popup_snote2_single_graphic_window_t3_ParamLimits

0xcb1d,	// (0x0002bbd2) popup_snote2_single_graphic_window_t3

0xcb5e,	// (0x0002bc13) popup_snote2_single_graphic_window_t4_ParamLimits

0xcb5e,	// (0x0002bc13) popup_snote2_single_graphic_window_t4

0xcb94,	// (0x0002bc49) popup_snote2_single_graphic_window_t5_ParamLimits

0xcb94,	// (0x0002bc49) popup_snote2_single_graphic_window_t5

0x0004,

0xfc99,	// (0x0002ed4e) popup_snote2_single_graphic_window_t_ParamLimits

0xfc99,	// (0x0002ed4e) popup_snote2_single_graphic_window_t

0xb65b,	// (0x0002a710) clock_nsta_pane_cp2_t1

0xb65b,	// (0x0002a710) clock_nsta_pane_cp2_t2

0x0001,

0xfab9,	// (0x0002eb6e) clock_nsta_pane_cp2_t

0x563d,	// (0x000246f2) form_field_data_wide_pane_g1_ParamLimits

0x2ca3,	// (0x00021d58) form_field_data_wide_pane_g2_ParamLimits

0x2ca3,	// (0x00021d58) form_field_data_wide_pane_g2

0x2caf,	// (0x00021d64) form_field_data_wide_pane_g3_ParamLimits

0x2caf,	// (0x00021d64) form_field_data_wide_pane_g3

0x0002,

0xf67c,	// (0x0002e731) form_field_data_wide_pane_g_ParamLimits

0xf67c,	// (0x0002e731) form_field_data_wide_pane_g

0xb534,	// (0x0002a5e9) grid_touch_3_pane_ParamLimits

0xb534,	// (0x0002a5e9) grid_touch_3_pane

0xcca7,	// (0x0002bd5c) cell_touch_3_pane_ParamLimits

0xcca7,	// (0x0002bd5c) cell_touch_3_pane

0xbb6b,	// (0x0002ac20) cell_touch_3_pane_g1

0xbb6b,	// (0x0002ac20) cell_touch_3_pane_g2

0x0001,

0xfb3e,	// (0x0002ebf3) cell_touch_3_pane_g

0x27c6,	// (0x0002187b) cont_query_data_pane

0x27ce,	// (0x00021883) cont_query_data_pane_cp1

0xccda,	// (0x0002bd8f) button_value_adjust_pane_cp7

0xcce2,	// (0x0002bd97) query_popup_pane_cp3

0x3257,	// (0x0002230c) bg_popup_sub_pane_cp22_ParamLimits

0x6d61,	// (0x00025e16) navi_navi_volume_pane_cp2

0x6d7c,	// (0x00025e31) popup_side_volume_key_window_g2

0x6d8b,	// (0x00025e40) popup_side_volume_key_window_g3

0x0002,

0xf712,	// (0x0002e7c7) popup_side_volume_key_window_g

0x6da8,	// (0x00025e5d) popup_side_volume_key_window_t2

0x0001,

0xf719,	// (0x0002e7ce) popup_side_volume_key_window_t

0x705b,	// (0x00026110) popup_side_volume_key_window_ParamLimits

0x5272,	// (0x00024327) list_double_graphic_pane_g4_ParamLimits

0x5272,	// (0x00024327) list_double_graphic_pane_g4

0xab27,	// (0x00029bdc) list_single_2heading_msg_pane_ParamLimits

0xab27,	// (0x00029bdc) list_single_2heading_msg_pane

0x6016,	// (0x000250cb) list_single_2heading_msg_pane_g1_ParamLimits

0x6016,	// (0x000250cb) list_single_2heading_msg_pane_g1

0x50f1,	// (0x000241a6) list_single_2heading_msg_pane_g2_ParamLimits

0x50f1,	// (0x000241a6) list_single_2heading_msg_pane_g2

0x6022,	// (0x000250d7) list_single_2heading_msg_pane_g3_ParamLimits

0x6022,	// (0x000250d7) list_single_2heading_msg_pane_g3

0x602e,	// (0x000250e3) list_single_2heading_msg_pane_g4_ParamLimits

0x602e,	// (0x000250e3) list_single_2heading_msg_pane_g4

0x0003,

0xfca4,	// (0x0002ed59) list_single_2heading_msg_pane_g_ParamLimits

0xfca4,	// (0x0002ed59) list_single_2heading_msg_pane_g

0x6046,	// (0x000250fb) list_single_2heading_msg_pane_t1_ParamLimits

0x6046,	// (0x000250fb) list_single_2heading_msg_pane_t1

0x606e,	// (0x00025123) list_single_2heading_msg_pane_t2_ParamLimits

0x606e,	// (0x00025123) list_single_2heading_msg_pane_t2

0x60a2,	// (0x00025157) list_single_2heading_msg_pane_t3_ParamLimits

0x60a2,	// (0x00025157) list_single_2heading_msg_pane_t3

0x60db,	// (0x00025190) list_single_2heading_msg_pane_t4_ParamLimits

0x60db,	// (0x00025190) list_single_2heading_msg_pane_t4

0x0003,

0xfcad,	// (0x0002ed62) list_single_2heading_msg_pane_t_ParamLimits

0xfcad,	// (0x0002ed62) list_single_2heading_msg_pane_t

0x0aac,	// (0x0001fb61) title_pane_g4_ParamLimits

0x0aac,	// (0x0001fb61) title_pane_g4

0x69fa,	// (0x00025aaf) title_pane_stacon_g3_ParamLimits

0x69fa,	// (0x00025aaf) title_pane_stacon_g3

0xc803,	// (0x0002b8b8) list_single_2graphic_im_pane_g4_ParamLimits

0xc803,	// (0x0002b8b8) list_single_2graphic_im_pane_g4

0xa602,	// (0x000296b7) popup_side_volume_key_window_cp

0xae4f,	// (0x00029f04) main_idle_act2_pane_t1

0x83f2,	// (0x000274a7) toolbar_button_pane_g10

0x690b,	// (0x000259c0) popup_toolbar_window_cp1

0xb64c,	// (0x0002a701) clock_nsta_pane_cp_t1

0xb64c,	// (0x0002a701) clock_nsta_pane_cp_t2

0x0001,

0xfab4,	// (0x0002eb69) clock_nsta_pane_cp_t

0x6d61,	// (0x00025e16) navi_navi_volume_pane_cp2_ParamLimits

0x6d70,	// (0x00025e25) popup_side_volume_key_window_g1_ParamLimits

0x6d7c,	// (0x00025e31) popup_side_volume_key_window_g2_ParamLimits

0x6d8b,	// (0x00025e40) popup_side_volume_key_window_g3_ParamLimits

0xf712,	// (0x0002e7c7) popup_side_volume_key_window_g_ParamLimits

0x8817,	// (0x000278cc) fep_hwr_aid_pane

0x0a52,	// (0x0001fb07) bg_fep_hwr_top_pane_g4_ParamLimits

0xbbcc,	// (0x0002ac81) fep_hwr_top_pane_g1_ParamLimits

0xbbde,	// (0x0002ac93) fep_hwr_top_pane_g2_ParamLimits

0x88d2,	// (0x00027987) fep_hwr_top_pane_g3_ParamLimits

0xfb09,	// (0x0002ebbe) fep_hwr_top_pane_g_ParamLimits

0x88e7,	// (0x0002799c) fep_hwr_top_text_pane_ParamLimits

0xa3b7,	// (0x0002946c) aid_touch_tab_arrow_arrow_2

0xa3c0,	// (0x00029475) aid_touch_tab_arrow_left_2

0x882b,	// (0x000278e0) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x8862,	// (0x00027917) fep_hwr_prediction_pane

0xbd34,	// (0x0002ade9) fep_vkb_prediction_pane

0xbe3a,	// (0x0002aeef) fep_vkb_side_pane_g3_ParamLimits

0xbe3a,	// (0x0002aeef) fep_vkb_side_pane_g3

0xbde6,	// (0x0002ae9b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc2b4,	// (0x0002b369) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc2c1,	// (0x0002b376) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb3,	// (0x0002ec68) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xcd09,	// (0x0002bdbe) fep_hwr_prediction_pane_g1

0x8b8d,	// (0x00027c42) fep_hwr_prediction_pane_g2

0x8b95,	// (0x00027c4a) fep_hwr_prediction_pane_g3

0x8b9d,	// (0x00027c52) fep_hwr_prediction_pane_g4

0x0003,

0xfcb6,	// (0x0002ed6b) fep_hwr_prediction_pane_g

0xcd09,	// (0x0002bdbe) fep_vkb_prediction_pane_g1

0xcd13,	// (0x0002bdc8) fep_vkb_prediction_pane_g2

0xcd1b,	// (0x0002bdd0) fep_vkb_prediction_pane_g3

0xcd23,	// (0x0002bdd8) fep_vkb_prediction_pane_g4

0x0003,

0xfcbf,	// (0x0002ed74) fep_vkb_prediction_pane_g

0xc3d9,	// (0x0002b48e) slider_set_pane_g3

0xc3ed,	// (0x0002b4a2) slider_set_pane_g4

0xc405,	// (0x0002b4ba) slider_set_pane_g5

0xc3d9,	// (0x0002b48e) slider_set_pane_g6

0x86e7,	// (0x0002779c) slider_set_pane_g7

0xaa91,	// (0x00029b46) slider_form_pane_g3

0xaa9a,	// (0x00029b4f) slider_form_pane_g4

0xaaa2,	// (0x00029b57) slider_form_pane_g5

0xaa91,	// (0x00029b46) slider_form_pane_g6

0xaaaa,	// (0x00029b5f) slider_form_pane_g7

0xb106,	// (0x0002a1bb) slider_set_pane_vc_g3

0xb10f,	// (0x0002a1c4) slider_set_pane_vc_g4

0xb118,	// (0x0002a1cd) slider_set_pane_vc_g5

0xb106,	// (0x0002a1bb) slider_set_pane_vc_g6

0xb121,	// (0x0002a1d6) slider_set_pane_vc_g7

0xb2f9,	// (0x0002a3ae) slider_form_pane_vc_g1

0xb302,	// (0x0002a3b7) slider_form_pane_vc_g2

0xb30b,	// (0x0002a3c0) slider_form_pane_vc_g3

0xb2f9,	// (0x0002a3ae) slider_form_pane_vc_g4

0xb314,	// (0x0002a3c9) slider_form_pane_vc_g5

0x0004,

0xfa86,	// (0x0002eb3b) slider_form_pane_vc_g

0x0a82,	// (0x0001fb37) main_idle_act3_pane

0xcd2b,	// (0x0002bde0) ai3_links_pane

0xcd34,	// (0x0002bde9) popup_ai3_data_window_ParamLimits

0xcd34,	// (0x0002bde9) popup_ai3_data_window

0x0a82,	// (0x0001fb37) grid_ai3_links_pane

0xcd52,	// (0x0002be07) cell_ai3_links_pane_ParamLimits

0xcd52,	// (0x0002be07) cell_ai3_links_pane

0xcd6c,	// (0x0002be21) bg_popup_sub_pane_cp11

0xcd79,	// (0x0002be2e) cell_ai3_links_pane_g1

0x0a82,	// (0x0001fb37) bg_popup_sub_pane_cp12

0xcd9e,	// (0x0002be53) heading_ai3_data_pane

0xcda6,	// (0x0002be5b) list_ai3_gene_pane

0xcdb2,	// (0x0002be67) popup_ai3_data_window_g1

0xcdba,	// (0x0002be6f) heading_ai3_data_pane_g1

0xcdc2,	// (0x0002be77) heading_ai3_data_pane_t1

0xcdd0,	// (0x0002be85) list_double_ai3_gene_pane_ParamLimits

0xcdd0,	// (0x0002be85) list_double_ai3_gene_pane

0xcddd,	// (0x0002be92) list_single_ai3_gene_pane_ParamLimits

0xcddd,	// (0x0002be92) list_single_ai3_gene_pane

0xbb30,	// (0x0002abe5) list_highlight_pane_cp7_ParamLimits

0xbb30,	// (0x0002abe5) list_highlight_pane_cp7

0xcdea,	// (0x0002be9f) list_single_a13_gene_pane_t1_ParamLimits

0xcdea,	// (0x0002be9f) list_single_a13_gene_pane_t1

0xce01,	// (0x0002beb6) list_single_ai3_gene_pane_g1

0xce0a,	// (0x0002bebf) list_single_ai3_gene_pane_g2

0x0001,

0xfcc8,	// (0x0002ed7d) list_single_ai3_gene_pane_g

0xce12,	// (0x0002bec7) list_double_ai3_gene_pane_g1_ParamLimits

0xce12,	// (0x0002bec7) list_double_ai3_gene_pane_g1

0xce1e,	// (0x0002bed3) list_double_ai3_gene_pane_t1_ParamLimits

0xce1e,	// (0x0002bed3) list_double_ai3_gene_pane_t1

0xce3a,	// (0x0002beef) list_double_ai3_gene_pane_t2_ParamLimits

0xce3a,	// (0x0002beef) list_double_ai3_gene_pane_t2

0xce4f,	// (0x0002bf04) list_double_ai3_gene_pane_t3_ParamLimits

0xce4f,	// (0x0002bf04) list_double_ai3_gene_pane_t3

0x0002,

0xfccd,	// (0x0002ed82) list_double_ai3_gene_pane_t_ParamLimits

0xfccd,	// (0x0002ed82) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x600c,	// (0x000250c1) aid_size_min_col_2

0xccf3,	// (0x0002bda8) aid_size_min_msg_ParamLimits

0xccf3,	// (0x0002bda8) aid_size_min_msg

0xbf46,	// (0x0002affb) fep_vkb_top_text_pane_g2_ParamLimits

0xbf46,	// (0x0002affb) fep_vkb_top_text_pane_g2

0x0001,

0xfb39,	// (0x0002ebee) fep_vkb_top_text_pane_g_ParamLimits

0xfb39,	// (0x0002ebee) fep_vkb_top_text_pane_g

0x0a82,	// (0x0001fb37) main_hc_apps_shell_pane

0xce6c,	// (0x0002bf21) grid_hc_apps_pane_ParamLimits

0xce6c,	// (0x0002bf21) grid_hc_apps_pane

0xce7b,	// (0x0002bf30) list_hc_apps_pane

0xce83,	// (0x0002bf38) scroll_pane_cp37_ParamLimits

0xce83,	// (0x0002bf38) scroll_pane_cp37

0xce8f,	// (0x0002bf44) cell_hc_apps_pane_ParamLimits

0xce8f,	// (0x0002bf44) cell_hc_apps_pane

0xcf47,	// (0x0002bffc) cell_hc_apps_pane_g1_ParamLimits

0xcf47,	// (0x0002bffc) cell_hc_apps_pane_g1

0xcf78,	// (0x0002c02d) cell_hc_apps_pane_g2_ParamLimits

0xcf78,	// (0x0002c02d) cell_hc_apps_pane_g2

0xcf94,	// (0x0002c049) cell_hc_apps_pane_g3_ParamLimits

0xcf94,	// (0x0002c049) cell_hc_apps_pane_g3

0x0002,

0xfcd4,	// (0x0002ed89) cell_hc_apps_pane_g_ParamLimits

0xfcd4,	// (0x0002ed89) cell_hc_apps_pane_g

0xcfb6,	// (0x0002c06b) cell_hc_apps_pane_t1_ParamLimits

0xcfb6,	// (0x0002c06b) cell_hc_apps_pane_t1

0x2710,	// (0x000217c5) grid_highlight_pane_cp10_ParamLimits

0x2710,	// (0x000217c5) grid_highlight_pane_cp10

0xcff6,	// (0x0002c0ab) list_single_hc_apps_pane_ParamLimits

0xcff6,	// (0x0002c0ab) list_single_hc_apps_pane

0xd035,	// (0x0002c0ea) list_single_hc_apps_pane_g1

0x6100,	// (0x000251b5) list_single_hc_apps_pane_g2

0x0001,

0xfcdb,	// (0x0002ed90) list_single_hc_apps_pane_g

0x6119,	// (0x000251ce) list_single_hc_apps_pane_g2_copy1

0x6135,	// (0x000251ea) list_single_hc_apps_pane_t1

0x0afe,	// (0x0001fbb3) bg_set_opt_pane_cp_ParamLimits

0x665c,	// (0x00025711) setting_slider_pane_t1_ParamLimits

0x6675,	// (0x0002572a) setting_slider_pane_t2_ParamLimits

0x668f,	// (0x00025744) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0002e619) setting_slider_pane_t_ParamLimits

0x66a7,	// (0x0002575c) slider_set_pane_ParamLimits

0x769e,	// (0x00026753) control_pane_g5_ParamLimits

0x769e,	// (0x00026753) control_pane_g5

0xa8be,	// (0x00029973) slider_set_pane_g1_ParamLimits

0x86db,	// (0x00027790) slider_set_pane_g2_ParamLimits

0xc3d9,	// (0x0002b48e) slider_set_pane_g3_ParamLimits

0xc3ed,	// (0x0002b4a2) slider_set_pane_g4_ParamLimits

0xc405,	// (0x0002b4ba) slider_set_pane_g5_ParamLimits

0xc3d9,	// (0x0002b48e) slider_set_pane_g6_ParamLimits

0x86e7,	// (0x0002779c) slider_set_pane_g7_ParamLimits

0xf965,	// (0x0002ea1a) slider_set_pane_g_ParamLimits

0x7140,	// (0x000261f5) navi_icon_text_pane_ParamLimits

0x7e86,	// (0x00026f3b) aid_fill_nsta_2_ParamLimits

0x7ec7,	// (0x00026f7c) aid_touch_tab_arrow_left_ParamLimits

0x7ed6,	// (0x00026f8b) aid_touch_tab_arrow_right_ParamLimits

0x7f43,	// (0x00026ff8) clock_nsta_pane_ParamLimits

0xa399,	// (0x0002944e) navi_icon_pane_g1_ParamLimits

0xa3a5,	// (0x0002945a) navi_text_pane_t1_ParamLimits

0xb769,	// (0x0002a81e) navi_icon_text_pane_g1_ParamLimits

0xb775,	// (0x0002a82a) navi_icon_text_pane_t1_ParamLimits

0xd035,	// (0x0002c0ea) list_single_hc_apps_pane_g1_ParamLimits

0x6100,	// (0x000251b5) list_single_hc_apps_pane_g2_ParamLimits

0xfcdb,	// (0x0002ed90) list_single_hc_apps_pane_g_ParamLimits

0x6119,	// (0x000251ce) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x6135,	// (0x000251ea) list_single_hc_apps_pane_t1_ParamLimits

0x64a4,	// (0x00025559) popup_toolbar2_fixed_window_ParamLimits

0x64a4,	// (0x00025559) popup_toolbar2_fixed_window

0x7d8a,	// (0x00026e3f) popup_toolbar2_float_window

0x0a82,	// (0x0001fb37) bg_popup_sub_pane_cp27

0xd04e,	// (0x0002c103) grid_toolbar2_float_pane

0x0a82,	// (0x0001fb37) bg_popup_sub_pane_cp26

0xd04e,	// (0x0002c103) grid_toolbar2_fixed_pane

0xd056,	// (0x0002c10b) cell_toolbar2_fixed_pane_ParamLimits

0xd056,	// (0x0002c10b) cell_toolbar2_fixed_pane

0xd066,	// (0x0002c11b) cell_toolbar2_fixed_pane_g1

0xd06f,	// (0x0002c124) toolbar2_fixed_button_pane

0x83aa,	// (0x0002745f) toolbar2_fixed_button_pane_g1

0x83b2,	// (0x00027467) toolbar2_fixed_button_pane_g2

0x83ba,	// (0x0002746f) toolbar2_fixed_button_pane_g3

0x83c2,	// (0x00027477) toolbar2_fixed_button_pane_g4

0x83ca,	// (0x0002747f) toolbar2_fixed_button_pane_g5

0x83d2,	// (0x00027487) toolbar2_fixed_button_pane_g6

0x83da,	// (0x0002748f) toolbar2_fixed_button_pane_g7

0x83e2,	// (0x00027497) toolbar2_fixed_button_pane_g8

0x83ea,	// (0x0002749f) toolbar2_fixed_button_pane_g9

0x0008,

0xf867,	// (0x0002e91c) toolbar2_fixed_button_pane_g

0xd077,	// (0x0002c12c) cell_toolbar2_float_pane_ParamLimits

0xd077,	// (0x0002c12c) cell_toolbar2_float_pane

0xd088,	// (0x0002c13d) cell_toolbar2_float_pane_g1

0xd06f,	// (0x0002c124) toolbar2_fixed_button_pane_cp

0xbca2,	// (0x0002ad57) fep_vkb_accented_list_pane_ParamLimits

0xbca2,	// (0x0002ad57) fep_vkb_accented_list_pane

0x8a49,	// (0x00027afe) bg_popup_fep_shadow_pane_g9

0x72c4,	// (0x00026379) bg_popup_fep_shadow_pane_cp3

0x2e28,	// (0x00021edd) list_accented_list_pane

0xd091,	// (0x0002c146) list_single_accented_list_pane_ParamLimits

0xd091,	// (0x0002c146) list_single_accented_list_pane

0x72c4,	// (0x00026379) list_highlight_pane_cp10

0xd0a2,	// (0x0002c157) list_single_accented_list_pane_t1

0x7cd0,	// (0x00026d85) popup_slider_window_ParamLimits

0x7cd0,	// (0x00026d85) popup_slider_window

0xccea,	// (0x0002bd9f) aid_indentation_list_msg

0xd16e,	// (0x0002c223) bg_popup_window_pane_cp19

0xd1dc,	// (0x0002c291) popup_slider_window_g1

0xd1f8,	// (0x0002c2ad) popup_slider_window_g2

0xd214,	// (0x0002c2c9) popup_slider_window_g3

0x0005,

0xfce0,	// (0x0002ed95) popup_slider_window_g

0xd270,	// (0x0002c325) popup_slider_window_t1

0xd2e4,	// (0x0002c399) small_volume_slider_vertical_pane

0xbb6b,	// (0x0002ac20) small_volume_slider_vertical_pane_g1

0xbb6b,	// (0x0002ac20) small_volume_slider_vertical_pane_g2

0xd300,	// (0x0002c3b5) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf2,	// (0x0002eda7) small_volume_slider_vertical_pane_g

0x625c,	// (0x00025311) area_side_right_pane_ParamLimits

0x625c,	// (0x00025311) area_side_right_pane

0x8ba5,	// (0x00027c5a) aid_size_side_button_ParamLimits

0x8ba5,	// (0x00027c5a) aid_size_side_button

0x8bb9,	// (0x00027c6e) grid_sctrl_middle_pane_ParamLimits

0x8bb9,	// (0x00027c6e) grid_sctrl_middle_pane

0x8bd9,	// (0x00027c8e) sctrl_sk_bottom_pane

0x8bea,	// (0x00027c9f) sctrl_sk_top_pane

0x8bfc,	// (0x00027cb1) aid_touch_sctrl_top

0x2710,	// (0x000217c5) bg_sctrl_sk_pane_ParamLimits

0x2710,	// (0x000217c5) bg_sctrl_sk_pane

0x8c09,	// (0x00027cbe) sctrl_sk_top_pane_g1

0x8c16,	// (0x00027ccb) sctrl_sk_top_pane_t1

0x8bfc,	// (0x00027cb1) aid_touch_sctrl_bottom

0x2710,	// (0x000217c5) bg_sctrl_sk_pane_cp_ParamLimits

0x2710,	// (0x000217c5) bg_sctrl_sk_pane_cp

0x8c31,	// (0x00027ce6) sctrl_sk_bottom_pane_g1

0x8c16,	// (0x00027ccb) sctrl_sk_bottom_pane_t1

0x8c3a,	// (0x00027cef) cell_sctrl_middle_pane_ParamLimits

0x8c3a,	// (0x00027cef) cell_sctrl_middle_pane

0x8c57,	// (0x00027d0c) aid_touch_sctrl_middle_ParamLimits

0x8c57,	// (0x00027d0c) aid_touch_sctrl_middle

0x2c78,	// (0x00021d2d) bg_sctrl_middle_pane_ParamLimits

0x2c78,	// (0x00021d2d) bg_sctrl_middle_pane

0xbde6,	// (0x0002ae9b) cell_sctrl_middle_pane_g1_ParamLimits

0xbde6,	// (0x0002ae9b) cell_sctrl_middle_pane_g1

0x8c69,	// (0x00027d1e) cell_sctrl_middle_pane_g2_ParamLimits

0x8c69,	// (0x00027d1e) cell_sctrl_middle_pane_g2

0x0001,

0xfcfe,	// (0x0002edb3) cell_sctrl_middle_pane_g_ParamLimits

0xfcfe,	// (0x0002edb3) cell_sctrl_middle_pane_g

0x83aa,	// (0x0002745f) bg_sctrl_middle_pane_g1

0x83b2,	// (0x00027467) bg_sctrl_middle_pane_g2

0x83ba,	// (0x0002746f) bg_sctrl_middle_pane_g3

0x83c2,	// (0x00027477) bg_sctrl_middle_pane_g4

0x83ca,	// (0x0002747f) bg_sctrl_middle_pane_g5

0x83d2,	// (0x00027487) bg_sctrl_middle_pane_g6

0x83da,	// (0x0002748f) bg_sctrl_middle_pane_g7

0x83e2,	// (0x00027497) bg_sctrl_middle_pane_g8

0x0007,

0xfd03,	// (0x0002edb8) bg_sctrl_middle_pane_g

0x83ea,	// (0x0002749f) bg_sctrl_middle_pane_g8_copy1

0x83aa,	// (0x0002745f) bg_sctrl_sk_pane_g1

0x83b2,	// (0x00027467) bg_sctrl_sk_pane_g2

0x83ba,	// (0x0002746f) bg_sctrl_sk_pane_g3

0x0008,

0xf867,	// (0x0002e91c) bg_sctrl_sk_pane_g

0x2b2b,	// (0x00021be0) aid_size_touch_scroll_bar

0x83c2,	// (0x00027477) bg_sctrl_sk_pane_g4

0x83ca,	// (0x0002747f) bg_sctrl_sk_pane_g5

0x83d2,	// (0x00027487) bg_sctrl_sk_pane_g6

0x83da,	// (0x0002748f) bg_sctrl_sk_pane_g7

0x83e2,	// (0x00027497) bg_sctrl_sk_pane_g8

0x83ea,	// (0x0002749f) bg_sctrl_sk_pane_g9

0x78e7,	// (0x0002699c) popup_fep_china_hwr2_fs_candidate_window

0x78f1,	// (0x000269a6) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x78f1,	// (0x000269a6) popup_fep_china_hwr2_fs_control_window

0xbde6,	// (0x0002ae9b) sctrl_sk_top_pane_g2

0x0001,

0xfcf9,	// (0x0002edae) sctrl_sk_top_pane_g

0xd309,	// (0x0002c3be) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd309,	// (0x0002c3be) aid_fep_china_hwr2_fs_cell

0xd31c,	// (0x0002c3d1) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd31c,	// (0x0002c3d1) bg_popup_fep_shadow_pane_cp4

0xd335,	// (0x0002c3ea) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd335,	// (0x0002c3ea) bg_popup_fep_shadow_pane_cp5

0xd347,	// (0x0002c3fc) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd347,	// (0x0002c3fc) popup_fep_china_hwr2_fs_control_bar_grid

0xd357,	// (0x0002c40c) popup_fep_china_hwr2_fs_control_funtion_grid

0xd35f,	// (0x0002c414) aid_fep_china_hwr2_fs_candi_cell

0x0a82,	// (0x0001fb37) bg_popup_fep_shadow_pane_cp6

0xd369,	// (0x0002c41e) popup_fep_china_hwr2_fs_candidate_grid

0xd373,	// (0x0002c428) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd373,	// (0x0002c428) cell_fep_china_hwr2_fs_funtion_grid

0xbb6b,	// (0x0002ac20) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd38b,	// (0x0002c440) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd38b,	// (0x0002c440) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd399,	// (0x0002c44e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd399,	// (0x0002c44e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd14,	// (0x0002edc9) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd14,	// (0x0002edc9) cell_fep_china_hwr2_fs_funtion_grid_g

0xd3af,	// (0x0002c464) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd3af,	// (0x0002c464) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd3c4,	// (0x0002c479) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd3c4,	// (0x0002c479) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd19,	// (0x0002edce) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd19,	// (0x0002edce) cell_fep_china_hwr2_fs_funtion_grid_t

0xd3e0,	// (0x0002c495) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd3e8,	// (0x0002c49d) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd3f0,	// (0x0002c4a5) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1e,	// (0x0002edd3) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd3f8,	// (0x0002c4ad) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd3f8,	// (0x0002c4ad) cell_fep_china_hwr2_fs_candidate_grid

0xd417,	// (0x0002c4cc) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd41f,	// (0x0002c4d4) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbb6b,	// (0x0002ac20) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbb6b,	// (0x0002ac20) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3e,	// (0x0002ebf3) cell_fep_china_hwr2_fs_candidate_grid_g

0xd427,	// (0x0002c4dc) cell_fep_china_hwr2_fs_candidate_grid_t1

0x7f56,	// (0x0002700b) clock_nsta_pane_cp_24_ParamLimits

0x7f56,	// (0x0002700b) clock_nsta_pane_cp_24

0x7fd6,	// (0x0002708b) indicator_nsta_pane_cp_24_ParamLimits

0x7fd6,	// (0x0002708b) indicator_nsta_pane_cp_24

0xa215,	// (0x000292ca) heading_pane_g1

0x0001,

0xf8cc,	// (0x0002e981) heading_pane_g

0xac96,	// (0x00029d4b) grid_sct_catagory_button_pane

0xacc8,	// (0x00029d7d) scroll_pane_cp5_ParamLimits

0xb7b7,	// (0x0002a86c) button_value_adjust_pane_cp5_ParamLimits

0xb7b7,	// (0x0002a86c) button_value_adjust_pane_cp5

0xb89c,	// (0x0002a951) form2_midp_time_pane_ParamLimits

0xd435,	// (0x0002c4ea) cell_sct_catagory_button_pane_ParamLimits

0xd435,	// (0x0002c4ea) cell_sct_catagory_button_pane

0xbb30,	// (0x0002abe5) bg_button_pane_cp01_ParamLimits

0xbb30,	// (0x0002abe5) bg_button_pane_cp01

0xbb6b,	// (0x0002ac20) cell_sct_catagory_button_pane_g1

0x7d11,	// (0x00026dc6) popup_tb_extension_window

0xd447,	// (0x0002c4fc) aid_size_cell_ext_ParamLimits

0xd447,	// (0x0002c4fc) aid_size_cell_ext

0x2710,	// (0x000217c5) bg_tb_trans_pane_cp1_ParamLimits

0x2710,	// (0x000217c5) bg_tb_trans_pane_cp1

0xd467,	// (0x0002c51c) grid_tb_ext_pane_ParamLimits

0xd467,	// (0x0002c51c) grid_tb_ext_pane

0xd497,	// (0x0002c54c) cell_tb_ext_pane_ParamLimits

0xd497,	// (0x0002c54c) cell_tb_ext_pane

0xd4ae,	// (0x0002c563) cell_tb_ext_pane_g1_ParamLimits

0xd4ae,	// (0x0002c563) cell_tb_ext_pane_g1

0xd4cb,	// (0x0002c580) cell_tb_ext_pane_t1

0x2710,	// (0x000217c5) list_highlight_pane_cp11_ParamLimits

0x2710,	// (0x000217c5) list_highlight_pane_cp11

0x64c3,	// (0x00025578) popup_uni_indicator_window_ParamLimits

0x64c3,	// (0x00025578) popup_uni_indicator_window

0x2c78,	// (0x00021d2d) bg_popup_sub_pane_cp14

0xd4e6,	// (0x0002c59b) list_uniindi_pane

0xd4f2,	// (0x0002c5a7) uniindi_top_pane

0x2710,	// (0x000217c5) bg_uniindi_top_pane

0xd513,	// (0x0002c5c8) uniindi_top_pane_g1

0xd529,	// (0x0002c5de) uniindi_top_pane_g2

0x0003,

0xfd25,	// (0x0002edda) uniindi_top_pane_g

0xd553,	// (0x0002c608) uniindi_top_pane_t1

0xd57f,	// (0x0002c634) list_single_uniindi_pane_ParamLimits

0xd57f,	// (0x0002c634) list_single_uniindi_pane

0xbb6b,	// (0x0002ac20) bg_uniindi_top_pane_g1

0xd591,	// (0x0002c646) list_single_uniindi_pane_g1

0xd5a4,	// (0x0002c659) list_single_uniindi_pane_t1

0x0a82,	// (0x0001fb37) control_bg_pane

0xd5c9,	// (0x0002c67e) bg_sctrl_sk_pane_cp1

0xd5d2,	// (0x0002c687) bg_sctrl_sk_pane_cp2

0xd5db,	// (0x0002c690) control_bg_pane_g1

0xd5e4,	// (0x0002c699) control_bg_pane_g2

0x0001,

0xfd2e,	// (0x0002ede3) control_bg_pane_g

0xb5de,	// (0x0002a693) cell_indicator_nsta_pane_g1_ParamLimits

0xb5ec,	// (0x0002a6a1) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa2,	// (0x0002eb57) cell_indicator_nsta_pane_g_ParamLimits

0x5dc9,	// (0x00024e7e) form2_midp_time_pane_t1_ParamLimits

0x296d,	// (0x00021a22) main_idle_act4_pane_ParamLimits

0x296d,	// (0x00021a22) main_idle_act4_pane

0x7d11,	// (0x00026dc6) popup_tb_extension_window_ParamLimits

0xd489,	// (0x0002c53e) tb_ext_find_pane_ParamLimits

0xd489,	// (0x0002c53e) tb_ext_find_pane

0xd5ed,	// (0x0002c6a2) ai_gene_pane_1_cp1

0x7401,	// (0x000264b6) ai_gene_pane_2_cp1

0xd5f5,	// (0x0002c6aa) list_single_idle_plugin_calendar_pane

0xd5fe,	// (0x0002c6b3) list_single_idle_plugin_notification_pane

0xd607,	// (0x0002c6bc) list_single_idle_plugin_player_pane

0xd610,	// (0x0002c6c5) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd610,	// (0x0002c6c5) list_single_idle_plugin_shortcut_pane

0xd632,	// (0x0002c6e7) main_idle_act4_pane_t1

0xd644,	// (0x0002c6f9) main_idle_act4_pane_t2

0x0001,

0xfd33,	// (0x0002ede8) main_idle_act4_pane_t

0xd656,	// (0x0002c70b) middle_sk_idle_act4_pane_ParamLimits

0xd656,	// (0x0002c70b) middle_sk_idle_act4_pane

0xd66c,	// (0x0002c721) popup_clock_digital_analogue_window_cp2

0xd686,	// (0x0002c73b) shortcut_wheel_idle_act4_pane_ParamLimits

0xd686,	// (0x0002c73b) shortcut_wheel_idle_act4_pane

0xbb6b,	// (0x0002ac20) shortcut_wheel_idle_act4_pane_g1

0xbb6b,	// (0x0002ac20) shortcut_wheel_idle_act4_pane_g2

0xbb6b,	// (0x0002ac20) shortcut_wheel_idle_act4_pane_g3

0xbb6b,	// (0x0002ac20) shortcut_wheel_idle_act4_pane_g4

0xbb6b,	// (0x0002ac20) shortcut_wheel_idle_act4_pane_g5

0xd69a,	// (0x0002c74f) shortcut_wheel_idle_act4_pane_g6

0xd6a2,	// (0x0002c757) shortcut_wheel_idle_act4_pane_g7

0xd6aa,	// (0x0002c75f) shortcut_wheel_idle_act4_pane_g8

0xd6b2,	// (0x0002c767) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd38,	// (0x0002eded) shortcut_wheel_idle_act4_pane_g

0xbde6,	// (0x0002ae9b) middle_sk_idle_act4_pane_g1_ParamLimits

0xbde6,	// (0x0002ae9b) middle_sk_idle_act4_pane_g1

0xd716,	// (0x0002c7cb) middle_sk_idle_act4_pane_g2_ParamLimits

0xd716,	// (0x0002c7cb) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5b,	// (0x0002ee10) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5b,	// (0x0002ee10) middle_sk_idle_act4_pane_g

0xd722,	// (0x0002c7d7) middle_sk_idle_act4_pane_t1_ParamLimits

0xd722,	// (0x0002c7d7) middle_sk_idle_act4_pane_t1

0xd73f,	// (0x0002c7f4) grid_ai_shortcut_pane_ParamLimits

0xd73f,	// (0x0002c7f4) grid_ai_shortcut_pane

0xd758,	// (0x0002c80d) list_highlight_pane_cp16_ParamLimits

0xd758,	// (0x0002c80d) list_highlight_pane_cp16

0xd765,	// (0x0002c81a) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd765,	// (0x0002c81a) list_single_idle_plugin_shortcut_pane_g1

0xd771,	// (0x0002c826) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd771,	// (0x0002c826) list_single_idle_plugin_shortcut_pane_g2

0xd78b,	// (0x0002c840) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd78b,	// (0x0002c840) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd60,	// (0x0002ee15) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd60,	// (0x0002ee15) list_single_idle_plugin_shortcut_pane_g

0xd79e,	// (0x0002c853) cell_ai_shortcut_pane_ParamLimits

0xd79e,	// (0x0002c853) cell_ai_shortcut_pane

0xd7c1,	// (0x0002c876) cell_ai_shortcut_pane_g1_ParamLimits

0xd7c1,	// (0x0002c876) cell_ai_shortcut_pane_g1

0xd5ed,	// (0x0002c6a2) ai_gene_pane_1_cp2

0xd7e3,	// (0x0002c898) ai_gene_pane_2_cp2

0xd7eb,	// (0x0002c8a0) list_highlight_pane_cp15

0xd7f4,	// (0x0002c8a9) list_single_idle_plugin_calendar_pane_g1

0xd7eb,	// (0x0002c8a0) list_highlight_pane_cp17

0xd7fc,	// (0x0002c8b1) list_single_idle_plugin_calendar_pane_g1_copy1

0xd804,	// (0x0002c8b9) list_single_idle_plugin_player_pane_g1

0xaefd,	// (0x00029fb2) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd67,	// (0x0002ee1c) list_single_idle_plugin_player_pane_g

0xd80c,	// (0x0002c8c1) list_single_idle_plugin_player_pane_t1

0xd81a,	// (0x0002c8cf) list_single_idle_plugin_player_pane_t2

0xd828,	// (0x0002c8dd) list_single_idle_plugin_player_pane_t3

0xd836,	// (0x0002c8eb) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6c,	// (0x0002ee21) list_single_idle_plugin_player_pane_t

0xd844,	// (0x0002c8f9) wait_bar_pane_cp15

0xd84c,	// (0x0002c901) grid_ai_notification_pane

0xaefd,	// (0x00029fb2) list_single_idle_plugin_notification_pane_g1

0xd855,	// (0x0002c90a) cell_ai_notification_pane_ParamLimits

0xd855,	// (0x0002c90a) cell_ai_notification_pane

0xd862,	// (0x0002c917) cell_ai_notification_pane_g1

0xd86a,	// (0x0002c91f) cell_ai_notification_pane_t1

0xd878,	// (0x0002c92d) tb_ext_find_button_pane

0xd880,	// (0x0002c935) tb_ext_find_pane_g1

0xd888,	// (0x0002c93d) tb_ext_find_pane_t1

0x31f7,	// (0x000222ac) tb_ext_find_button_pane_g1

0xd896,	// (0x0002c94b) tb_ext_find_button_pane_g2

0x0001,

0xfd75,	// (0x0002ee2a) tb_ext_find_button_pane_g

0xd632,	// (0x0002c6e7) main_idle_act4_pane_t1_ParamLimits

0xd644,	// (0x0002c6f9) main_idle_act4_pane_t2_ParamLimits

0xfd33,	// (0x0002ede8) main_idle_act4_pane_t_ParamLimits

0xd66c,	// (0x0002c721) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd67a,	// (0x0002c72f) sat_plugin_idle_act4_pane_ParamLimits

0xd67a,	// (0x0002c72f) sat_plugin_idle_act4_pane

0xd89f,	// (0x0002c954) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd89f,	// (0x0002c954) sat_plugin_idle_act4_pane_t1

0xd8b2,	// (0x0002c967) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd8b2,	// (0x0002c967) sat_plugin_idle_act4_pane_t2

0xd8c5,	// (0x0002c97a) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd8c5,	// (0x0002c97a) sat_plugin_idle_act4_pane_t3

0xd8d8,	// (0x0002c98d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd8d8,	// (0x0002c98d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7a,	// (0x0002ee2f) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7a,	// (0x0002ee2f) sat_plugin_idle_act4_pane_t

0x63f4,	// (0x000254a9) popup_battery_window_ParamLimits

0x63f4,	// (0x000254a9) popup_battery_window

0x2710,	// (0x000217c5) bg_popup_sub_pane_cp25_ParamLimits

0x2710,	// (0x000217c5) bg_popup_sub_pane_cp25

0xd8eb,	// (0x0002c9a0) popup_battery_window_g1_ParamLimits

0xd8eb,	// (0x0002c9a0) popup_battery_window_g1

0xd8f7,	// (0x0002c9ac) popup_battery_window_t1_ParamLimits

0xd8f7,	// (0x0002c9ac) popup_battery_window_t1

0xd909,	// (0x0002c9be) popup_battery_window_t2_ParamLimits

0xd909,	// (0x0002c9be) popup_battery_window_t2

0x0001,

0xfd83,	// (0x0002ee38) popup_battery_window_t_ParamLimits

0xfd83,	// (0x0002ee38) popup_battery_window_t

0x72cc,	// (0x00026381) midp_canvas_pane_ParamLimits

0x7343,	// (0x000263f8) midp_keypad_pane_ParamLimits

0x7343,	// (0x000263f8) midp_keypad_pane

0x7839,	// (0x000268ee) main_midp_pane_ParamLimits

0xb66a,	// (0x0002a71f) signal_pane_g2_cp_ParamLimits

0xd926,	// (0x0002c9db) aid_size_cell_midp_keypad_ParamLimits

0xd926,	// (0x0002c9db) aid_size_cell_midp_keypad

0xd940,	// (0x0002c9f5) midp_keyp_game_grid_pane_ParamLimits

0xd940,	// (0x0002c9f5) midp_keyp_game_grid_pane

0xd960,	// (0x0002ca15) midp_keyp_rocker_pane_ParamLimits

0xd960,	// (0x0002ca15) midp_keyp_rocker_pane

0xd98b,	// (0x0002ca40) midp_keyp_sk_left_pane_ParamLimits

0xd98b,	// (0x0002ca40) midp_keyp_sk_left_pane

0xd9e5,	// (0x0002ca9a) midp_keyp_sk_right_pane_ParamLimits

0xd9e5,	// (0x0002ca9a) midp_keyp_sk_right_pane

0x0a82,	// (0x0001fb37) bg_button_pane_cp03

0xda3f,	// (0x0002caf4) midp_keyp_sk_left_pane_g1

0x0a82,	// (0x0001fb37) bg_button_pane_cp04

0xda3f,	// (0x0002caf4) midp_keyp_sk_right_pane_g1

0xbb6b,	// (0x0002ac20) midp_keyp_rocker_pane_g1

0xda48,	// (0x0002cafd) keyp_game_cell_pane_ParamLimits

0xda48,	// (0x0002cafd) keyp_game_cell_pane

0x0a82,	// (0x0001fb37) bg_button_pane_cp02

0xda5b,	// (0x0002cb10) keyp_game_cell_pane_g1

0x643e,	// (0x000254f3) popup_fep_vkb2_window_ParamLimits

0x643e,	// (0x000254f3) popup_fep_vkb2_window

0x8c87,	// (0x00027d3c) aid_size_cell_vkb2_ParamLimits

0x8c87,	// (0x00027d3c) aid_size_cell_vkb2

0x8cdb,	// (0x00027d90) popup_fep_vkb2_window_g1_ParamLimits

0x8cdb,	// (0x00027d90) popup_fep_vkb2_window_g1

0x8d23,	// (0x00027dd8) vkb2_area_bottom_pane_ParamLimits

0x8d23,	// (0x00027dd8) vkb2_area_bottom_pane

0x8d77,	// (0x00027e2c) vkb2_area_keypad_pane_ParamLimits

0x8d77,	// (0x00027e2c) vkb2_area_keypad_pane

0x8dbd,	// (0x00027e72) vkb2_area_top_pane_ParamLimits

0x8dbd,	// (0x00027e72) vkb2_area_top_pane

0x8e37,	// (0x00027eec) vkb2_top_entry_pane_ParamLimits

0x8e37,	// (0x00027eec) vkb2_top_entry_pane

0x8e61,	// (0x00027f16) vkb2_top_grid_left_pane_ParamLimits

0x8e61,	// (0x00027f16) vkb2_top_grid_left_pane

0x8e7f,	// (0x00027f34) vkb2_top_grid_right_pane_ParamLimits

0x8e7f,	// (0x00027f34) vkb2_top_grid_right_pane

0x8e9d,	// (0x00027f52) vkb2_cell_keypad_pane_ParamLimits

0x8e9d,	// (0x00027f52) vkb2_cell_keypad_pane

0x8f6e,	// (0x00028023) vkb2_area_bottom_grid_pane_ParamLimits

0x8f6e,	// (0x00028023) vkb2_area_bottom_grid_pane

0x8f94,	// (0x00028049) vkb2_area_bottom_pane_g1_ParamLimits

0x8f94,	// (0x00028049) vkb2_area_bottom_pane_g1

0x8fb8,	// (0x0002806d) vkb2_area_bottom_pane_g2_ParamLimits

0x8fb8,	// (0x0002806d) vkb2_area_bottom_pane_g2

0x8fe6,	// (0x0002809b) vkb2_area_bottom_pane_g3_ParamLimits

0x8fe6,	// (0x0002809b) vkb2_area_bottom_pane_g3

0x0002,

0xfd88,	// (0x0002ee3d) vkb2_area_bottom_pane_g_ParamLimits

0xfd88,	// (0x0002ee3d) vkb2_area_bottom_pane_g

0x9047,	// (0x000280fc) vkb2_top_cell_left_pane_ParamLimits

0x9047,	// (0x000280fc) vkb2_top_cell_left_pane

0xda6c,	// (0x0002cb21) vkb2_top_entry_pane_g1_ParamLimits

0xda6c,	// (0x0002cb21) vkb2_top_entry_pane_g1

0xda7a,	// (0x0002cb2f) vkb2_top_entry_pane_t1_ParamLimits

0xda7a,	// (0x0002cb2f) vkb2_top_entry_pane_t1

0xdaac,	// (0x0002cb61) vkb2_top_entry_pane_t2_ParamLimits

0xdaac,	// (0x0002cb61) vkb2_top_entry_pane_t2

0xdade,	// (0x0002cb93) vkb2_top_entry_pane_t3_ParamLimits

0xdade,	// (0x0002cb93) vkb2_top_entry_pane_t3

0x0002,

0xfd8f,	// (0x0002ee44) vkb2_top_entry_pane_t_ParamLimits

0xfd8f,	// (0x0002ee44) vkb2_top_entry_pane_t

0x9094,	// (0x00028149) vkb2_top_grid_right_pane_g1_ParamLimits

0x9094,	// (0x00028149) vkb2_top_grid_right_pane_g1

0x90aa,	// (0x0002815f) vkb2_top_grid_right_pane_g2_ParamLimits

0x90aa,	// (0x0002815f) vkb2_top_grid_right_pane_g2

0x90c2,	// (0x00028177) vkb2_top_grid_right_pane_g3_ParamLimits

0x90c2,	// (0x00028177) vkb2_top_grid_right_pane_g3

0x90da,	// (0x0002818f) vkb2_top_grid_right_pane_g4_ParamLimits

0x90da,	// (0x0002818f) vkb2_top_grid_right_pane_g4

0x0003,

0xfd96,	// (0x0002ee4b) vkb2_top_grid_right_pane_g_ParamLimits

0xfd96,	// (0x0002ee4b) vkb2_top_grid_right_pane_g

0x90f0,	// (0x000281a5) vkb2_top_cell_left_pane_g1

0x9107,	// (0x000281bc) vkb2_cell_keypad_pane_g1_ParamLimits

0x9107,	// (0x000281bc) vkb2_cell_keypad_pane_g1

0xdb02,	// (0x0002cbb7) vkb2_cell_keypad_pane_t1_ParamLimits

0xdb02,	// (0x0002cbb7) vkb2_cell_keypad_pane_t1

0x9115,	// (0x000281ca) vkb2_cell_bottom_grid_pane_ParamLimits

0x9115,	// (0x000281ca) vkb2_cell_bottom_grid_pane

0x914e,	// (0x00028203) vkb2_cell_bottom_grid_pane_g1

0xd6ba,	// (0x0002c76f) aid_call2_pane_cp02

0xd6c2,	// (0x0002c777) aid_call_pane_cp02

0xd6ca,	// (0x0002c77f) clock_digital_number_pane_cp10

0xd6d2,	// (0x0002c787) clock_digital_number_pane_cp11

0xd6da,	// (0x0002c78f) clock_digital_number_pane_cp12

0xd6e2,	// (0x0002c797) clock_digital_number_pane_cp13

0xd6ea,	// (0x0002c79f) clock_digital_separator_pane_cp10

0x31f7,	// (0x000222ac) popup_clock_digital_analogue_window_cp2_g1

0x31f7,	// (0x000222ac) popup_clock_digital_analogue_window_cp2_g2

0xd6f2,	// (0x0002c7a7) popup_clock_digital_analogue_window_cp2_g3

0x31f7,	// (0x000222ac) popup_clock_digital_analogue_window_cp2_g4

0xd6f2,	// (0x0002c7a7) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4b,	// (0x0002ee00) popup_clock_digital_analogue_window_cp2_g

0xd6fa,	// (0x0002c7af) popup_clock_digital_analogue_window_cp2_t1

0xd708,	// (0x0002c7bd) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd56,	// (0x0002ee0b) popup_clock_digital_analogue_window_cp2_t

0xbb6b,	// (0x0002ac20) clock_digital_number_pane_cp10_g1

0xbb6b,	// (0x0002ac20) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3e,	// (0x0002ebf3) clock_digital_number_pane_cp10_g

0xbb6b,	// (0x0002ac20) clock_digital_separator_pane_cp10_g1

0xbb6b,	// (0x0002ac20) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3e,	// (0x0002ebf3) clock_digital_separator_pane_cp10_g

0xd535,	// (0x0002c5ea) uniindi_top_pane_g3

0xd546,	// (0x0002c5fb) uniindi_top_pane_g4

0x8f28,	// (0x00027fdd) vkb2_row_keypad_pane_ParamLimits

0x8f28,	// (0x00027fdd) vkb2_row_keypad_pane

0x916a,	// (0x0002821f) vkb2_cell_t_keypad_pane_ParamLimits

0x916a,	// (0x0002821f) vkb2_cell_t_keypad_pane

0x917a,	// (0x0002822f) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x917a,	// (0x0002822f) vkb2_cell_t_keypad_pane_cp08

0x918f,	// (0x00028244) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x918f,	// (0x00028244) vkb2_cell_t_keypad_pane_cp09

0x91a3,	// (0x00028258) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x91a3,	// (0x00028258) vkb2_cell_t_keypad_pane_cp01

0x91b4,	// (0x00028269) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x91b4,	// (0x00028269) vkb2_cell_t_keypad_pane_cp02

0x91c5,	// (0x0002827a) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x91c5,	// (0x0002827a) vkb2_cell_t_keypad_pane_cp03

0x91d6,	// (0x0002828b) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x91d6,	// (0x0002828b) vkb2_cell_t_keypad_pane_cp04

0x91e7,	// (0x0002829c) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x91e7,	// (0x0002829c) vkb2_cell_t_keypad_pane_cp05

0x91f8,	// (0x000282ad) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x91f8,	// (0x000282ad) vkb2_cell_t_keypad_pane_cp06

0x920b,	// (0x000282c0) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x920b,	// (0x000282c0) vkb2_cell_t_keypad_pane_cp07

0x9220,	// (0x000282d5) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9220,	// (0x000282d5) vkb2_cell_t_keypad_pane_cp10

0xbde6,	// (0x0002ae9b) vkb2_cell_t_keypad_pane_g1

0xdb19,	// (0x0002cbce) vkb2_cell_t_keypad_pane_t1

0x0a82,	// (0x0001fb37) popup_grid_graphic2_window

0xdb2b,	// (0x0002cbe0) aid_size_cell_graphic2_ParamLimits

0xdb2b,	// (0x0002cbe0) aid_size_cell_graphic2

0xdb63,	// (0x0002cc18) bg_popup_window_pane_cp21_ParamLimits

0xdb63,	// (0x0002cc18) bg_popup_window_pane_cp21

0xdb71,	// (0x0002cc26) graphic2_pages_pane_ParamLimits

0xdb71,	// (0x0002cc26) graphic2_pages_pane

0xdbb7,	// (0x0002cc6c) grid_graphic2_control_pane_ParamLimits

0xdbb7,	// (0x0002cc6c) grid_graphic2_control_pane

0xdbf5,	// (0x0002ccaa) grid_graphic2_pane_ParamLimits

0xdbf5,	// (0x0002ccaa) grid_graphic2_pane

0xdc6b,	// (0x0002cd20) cell_graphic2_pane

0x0a82,	// (0x0001fb37) main_comp_mode_pane

0xcda6,	// (0x0002be5b) list_ai3_gene_pane_ParamLimits

0xd16e,	// (0x0002c223) bg_popup_window_pane_cp19_ParamLimits

0xd17a,	// (0x0002c22f) bg_touch_area_indi_pane_ParamLimits

0xd17a,	// (0x0002c22f) bg_touch_area_indi_pane

0xd190,	// (0x0002c245) bg_touch_area_indi_pane_cp01_ParamLimits

0xd190,	// (0x0002c245) bg_touch_area_indi_pane_cp01

0xd1a8,	// (0x0002c25d) bg_touch_area_indi_pane_cp02_ParamLimits

0xd1a8,	// (0x0002c25d) bg_touch_area_indi_pane_cp02

0xd1c2,	// (0x0002c277) bg_touch_area_indi_pane_cp03_ParamLimits

0xd1c2,	// (0x0002c277) bg_touch_area_indi_pane_cp03

0xd1dc,	// (0x0002c291) popup_slider_window_g1_ParamLimits

0xd1f8,	// (0x0002c2ad) popup_slider_window_g2_ParamLimits

0xd214,	// (0x0002c2c9) popup_slider_window_g3_ParamLimits

0xfce0,	// (0x0002ed95) popup_slider_window_g_ParamLimits

0xd270,	// (0x0002c325) popup_slider_window_t1_ParamLimits

0xd2e4,	// (0x0002c399) small_volume_slider_vertical_pane_ParamLimits

0xdc6b,	// (0x0002cd20) cell_graphic2_pane_ParamLimits

0xdcbd,	// (0x0002cd72) bg_button_pane_cp10_ParamLimits

0xdcbd,	// (0x0002cd72) bg_button_pane_cp10

0xdcd2,	// (0x0002cd87) bg_button_pane_cp11_ParamLimits

0xdcd2,	// (0x0002cd87) bg_button_pane_cp11

0xdce7,	// (0x0002cd9c) graphic2_pages_pane_g1_ParamLimits

0xdce7,	// (0x0002cd9c) graphic2_pages_pane_g1

0xdd02,	// (0x0002cdb7) graphic2_pages_pane_g2_ParamLimits

0xdd02,	// (0x0002cdb7) graphic2_pages_pane_g2

0x0001,

0xfda4,	// (0x0002ee59) graphic2_pages_pane_g_ParamLimits

0xfda4,	// (0x0002ee59) graphic2_pages_pane_g

0xdd1a,	// (0x0002cdcf) graphic2_pages_pane_t1_ParamLimits

0xdd1a,	// (0x0002cdcf) graphic2_pages_pane_t1

0xdd30,	// (0x0002cde5) cell_graphic2_control_pane_ParamLimits

0xdd30,	// (0x0002cde5) cell_graphic2_control_pane

0xdd53,	// (0x0002ce08) cell_graphic2_pane_g1_ParamLimits

0xdd53,	// (0x0002ce08) cell_graphic2_pane_g1

0xdd60,	// (0x0002ce15) cell_graphic2_pane_g2_ParamLimits

0xdd60,	// (0x0002ce15) cell_graphic2_pane_g2

0xdd6d,	// (0x0002ce22) cell_graphic2_pane_g3_ParamLimits

0xdd6d,	// (0x0002ce22) cell_graphic2_pane_g3

0xdd7a,	// (0x0002ce2f) cell_graphic2_pane_g4_ParamLimits

0xdd7a,	// (0x0002ce2f) cell_graphic2_pane_g4

0xdd87,	// (0x0002ce3c) cell_graphic2_pane_g5_ParamLimits

0xdd87,	// (0x0002ce3c) cell_graphic2_pane_g5

0x0004,

0xfda9,	// (0x0002ee5e) cell_graphic2_pane_g_ParamLimits

0xfda9,	// (0x0002ee5e) cell_graphic2_pane_g

0xdda2,	// (0x0002ce57) cell_graphic2_pane_t1_ParamLimits

0xdda2,	// (0x0002ce57) cell_graphic2_pane_t1

0x95b6,	// (0x0002866b) grid_highlight_pane_cp11_ParamLimits

0x95b6,	// (0x0002866b) grid_highlight_pane_cp11

0x2710,	// (0x000217c5) bg_button_pane_cp05

0xddcb,	// (0x0002ce80) cell_graphic2_control_pane_g1

0xbb6b,	// (0x0002ac20) bg_touch_area_indi_pane_g1

0xddf3,	// (0x0002cea8) aid_cmod_rocker_key_size

0xddfd,	// (0x0002ceb2) aid_cmode_itu_key_size

0xde07,	// (0x0002cebc) main_cmode_video_pane

0xde11,	// (0x0002cec6) main_comp_mode_itu_pane

0xde1d,	// (0x0002ced2) main_comp_mode_rocker_pane

0xde29,	// (0x0002cede) cell_cmode_rocker_pane_ParamLimits

0xde29,	// (0x0002cede) cell_cmode_rocker_pane

0xde3d,	// (0x0002cef2) cell_cmode_itu_pane_ParamLimits

0xde3d,	// (0x0002cef2) cell_cmode_itu_pane

0x2c78,	// (0x00021d2d) bg_button_pane_cp06_ParamLimits

0x2c78,	// (0x00021d2d) bg_button_pane_cp06

0xbde6,	// (0x0002ae9b) cell_cmode_rocker_pane_g1_ParamLimits

0xbde6,	// (0x0002ae9b) cell_cmode_rocker_pane_g1

0xd38b,	// (0x0002c440) cell_cmode_rocker_pane_g2_ParamLimits

0xd38b,	// (0x0002c440) cell_cmode_rocker_pane_g2

0x0001,

0xfdb9,	// (0x0002ee6e) cell_cmode_rocker_pane_g_ParamLimits

0xfdb9,	// (0x0002ee6e) cell_cmode_rocker_pane_g

0x0a82,	// (0x0001fb37) bg_button_pane_cp07

0xde54,	// (0x0002cf09) cell_cmode_itu_pane_g1

0xde5d,	// (0x0002cf12) cell_cmode_itu_pane_t1

0xde6b,	// (0x0002cf20) cell_cmode_itu_pane_t2

0x0001,

0xfdbe,	// (0x0002ee73) cell_cmode_itu_pane_t

0xd5b9,	// (0x0002c66e) aid_touch_ctrl_left

0xd5c1,	// (0x0002c676) aid_touch_ctrl_right

0x0a82,	// (0x0001fb37) compa_mode_pane

0xde79,	// (0x0002cf2e) aid_cmod_rocker_key_size_cp

0xde83,	// (0x0002cf38) aid_cmode_itu_key_size_cp

0xde8d,	// (0x0002cf42) compa_mode_pane_g1

0xde95,	// (0x0002cf4a) compa_mode_pane_g2

0xde9d,	// (0x0002cf52) compa_mode_pane_g3

0x0002,

0xfdc3,	// (0x0002ee78) compa_mode_pane_g

0xdea5,	// (0x0002cf5a) main_comp_mode_itu_pane_cp

0xdead,	// (0x0002cf62) main_comp_mode_rocker_pane_cp

0xdeb5,	// (0x0002cf6a) cell_cmode_itu_pane_cp_ParamLimits

0xdeb5,	// (0x0002cf6a) cell_cmode_itu_pane_cp

0xdeca,	// (0x0002cf7f) cell_cmode_rocker_pane_cp_ParamLimits

0xdeca,	// (0x0002cf7f) cell_cmode_rocker_pane_cp

0x2c78,	// (0x00021d2d) bg_button_pane_cp06_cp_ParamLimits

0x2c78,	// (0x00021d2d) bg_button_pane_cp06_cp

0xbde6,	// (0x0002ae9b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbde6,	// (0x0002ae9b) cell_cmode_rocker_pane_g1_cp

0xbb6b,	// (0x0002ac20) cell_cmode_rocker_pane_g2_cp

0x0a82,	// (0x0001fb37) bg_button_pane_cp07_cp

0xdedc,	// (0x0002cf91) cell_cmode_itu_pane_g1_cp

0xdee5,	// (0x0002cf9a) cell_cmode_itu_pane_t1_cp

0xdee5,	// (0x0002cf9a) cell_cmode_itu_pane_t2_cp

0xaa80,	// (0x00029b35) settings_code_pane_cp2

0x0afe,	// (0x0001fbb3) bg_popup_window_pane_cp3_ParamLimits

0x28fe,	// (0x000219b3) heading_pane_cp3_ParamLimits

0x290a,	// (0x000219bf) listscroll_popup_graphic_pane_ParamLimits

0x8817,	// (0x000278cc) fep_hwr_aid_pane_ParamLimits

0x8bfc,	// (0x00027cb1) aid_touch_sctrl_top_ParamLimits

0x8c09,	// (0x00027cbe) sctrl_sk_top_pane_g1_ParamLimits

0xbde6,	// (0x0002ae9b) sctrl_sk_top_pane_g2_ParamLimits

0xfcf9,	// (0x0002edae) sctrl_sk_top_pane_g_ParamLimits

0x8c16,	// (0x00027ccb) sctrl_sk_top_pane_t1_ParamLimits

0x8bfc,	// (0x00027cb1) aid_touch_sctrl_bottom_ParamLimits

0x8c16,	// (0x00027ccb) sctrl_sk_bottom_pane_t1_ParamLimits

0xd4ff,	// (0x0002c5b4) aid_area_touch_clock

0x8dff,	// (0x00027eb4) aid_vkb2_area_top_pane_cell_ParamLimits

0x8dff,	// (0x00027eb4) aid_vkb2_area_top_pane_cell

0x8f4a,	// (0x00027fff) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8f4a,	// (0x00027fff) aid_vkb2_area_bottom_pane_cell

0xda64,	// (0x0002cb19) popup_char_count_window

0xdef3,	// (0x0002cfa8) popup_char_count_window_g1

0xdefc,	// (0x0002cfb1) popup_char_count_window_g2

0xdf05,	// (0x0002cfba) popup_char_count_window_g3

0x0002,

0xfdca,	// (0x0002ee7f) popup_char_count_window_g

0xdf0e,	// (0x0002cfc3) popup_char_count_window_t1

0x8cb9,	// (0x00027d6e) popup_fep_char_preview_window_ParamLimits

0x8cb9,	// (0x00027d6e) popup_fep_char_preview_window

0x8e1d,	// (0x00027ed2) vkb2_top_candi_pane_ParamLimits

0x8e1d,	// (0x00027ed2) vkb2_top_candi_pane

0xdf1c,	// (0x0002cfd1) cell_vkb2_top_candi_pane_ParamLimits

0xdf1c,	// (0x0002cfd1) cell_vkb2_top_candi_pane

0x9b92,	// (0x00028c47) bg_popup_fep_char_preview_window_ParamLimits

0x9b92,	// (0x00028c47) bg_popup_fep_char_preview_window

0x9235,	// (0x000282ea) popup_fep_char_preview_window_t1_ParamLimits

0x9235,	// (0x000282ea) popup_fep_char_preview_window_t1

0xdf6d,	// (0x0002d022) bg_popup_fep_char_preview_window_g1

0xdf75,	// (0x0002d02a) bg_popup_fep_char_preview_window_g2

0xdf7d,	// (0x0002d032) bg_popup_fep_char_preview_window_g3

0xdf85,	// (0x0002d03a) bg_popup_fep_char_preview_window_g4

0xdf8d,	// (0x0002d042) bg_popup_fep_char_preview_window_g5

0x926f,	// (0x00028324) bg_popup_fep_char_preview_window_g6

0xdf95,	// (0x0002d04a) bg_popup_fep_char_preview_window_g7

0xdf9d,	// (0x0002d052) bg_popup_fep_char_preview_window_g8

0xdfa5,	// (0x0002d05a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd1,	// (0x0002ee86) bg_popup_fep_char_preview_window_g

0xbde6,	// (0x0002ae9b) cell_vkb2_top_candi_pane_g1_ParamLimits

0xbde6,	// (0x0002ae9b) cell_vkb2_top_candi_pane_g1

0xc127,	// (0x0002b1dc) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc127,	// (0x0002b1dc) cell_vkb2_top_candi_pane_g2

0xc148,	// (0x0002b1fd) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc148,	// (0x0002b1fd) cell_vkb2_top_candi_pane_g3

0x9277,	// (0x0002832c) cell_vkb2_top_candi_pane_g4_ParamLimits

0x9277,	// (0x0002832c) cell_vkb2_top_candi_pane_g4

0xdfad,	// (0x0002d062) cell_vkb2_top_candi_pane_g5_ParamLimits

0xdfad,	// (0x0002d062) cell_vkb2_top_candi_pane_g5

0xd38b,	// (0x0002c440) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd38b,	// (0x0002c440) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde4,	// (0x0002ee99) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde4,	// (0x0002ee99) cell_vkb2_top_candi_pane_g

0x9298,	// (0x0002834d) cell_vkb2_top_candi_pane_t1

0x86c7,	// (0x0002777c) aid_size_touch_slider_mark_ParamLimits

0x86c7,	// (0x0002777c) aid_size_touch_slider_mark

0xdba7,	// (0x0002cc5c) grid_graphic2_catg_pane_ParamLimits

0xdba7,	// (0x0002cc5c) grid_graphic2_catg_pane

0xdc45,	// (0x0002ccfa) popup_grid_graphic2_window_t1_ParamLimits

0xdc45,	// (0x0002ccfa) popup_grid_graphic2_window_t1

0xdc57,	// (0x0002cd0c) popup_grid_graphic2_window_t2_ParamLimits

0xdc57,	// (0x0002cd0c) popup_grid_graphic2_window_t2

0x0001,

0xfd9f,	// (0x0002ee54) popup_grid_graphic2_window_t_ParamLimits

0xfd9f,	// (0x0002ee54) popup_grid_graphic2_window_t

0x2710,	// (0x000217c5) bg_button_pane_cp05_ParamLimits

0xddcb,	// (0x0002ce80) cell_graphic2_control_pane_g1_ParamLimits

0xdfce,	// (0x0002d083) cell_graphic2_catg_pane_ParamLimits

0xdfce,	// (0x0002d083) cell_graphic2_catg_pane

0x0a82,	// (0x0001fb37) bg_button_pane_cp12

0xdfe0,	// (0x0002d095) cell_graphic2_catg_pane_g1

0xd4cb,	// (0x0002c580) cell_tb_ext_pane_t1_ParamLimits

0x9067,	// (0x0002811c) vkb2_top_cell_right_narrow_pane_ParamLimits

0x9067,	// (0x0002811c) vkb2_top_cell_right_narrow_pane

0x907f,	// (0x00028134) vkb2_top_cell_right_wide_pane_ParamLimits

0x907f,	// (0x00028134) vkb2_top_cell_right_wide_pane

0xf0a2,	// (0x0002e157) bg_vkb2_func_pane_ParamLimits

0xf0a2,	// (0x0002e157) bg_vkb2_func_pane

0x90f0,	// (0x000281a5) vkb2_top_cell_left_pane_g1_ParamLimits

0xf0a2,	// (0x0002e157) bg_vkb2_fuc_pane_cp03_ParamLimits

0xf0a2,	// (0x0002e157) bg_vkb2_fuc_pane_cp03

0x914e,	// (0x00028203) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x83b2,	// (0x00027467) bg_vkb2_func_pane_g1

0x83ba,	// (0x0002746f) bg_vkb2_func_pane_g2

0x83ca,	// (0x0002747f) bg_vkb2_func_pane_g3

0x83c2,	// (0x00027477) bg_vkb2_func_pane_g4

0x83d2,	// (0x00027487) bg_vkb2_func_pane_g5

0x83da,	// (0x0002748f) bg_vkb2_func_pane_g6

0x83e2,	// (0x00027497) bg_vkb2_func_pane_g7

0x83ea,	// (0x0002749f) bg_vkb2_func_pane_g8

0x83aa,	// (0x0002745f) bg_vkb2_func_pane_g9

0x0008,

0xfdf1,	// (0x0002eea6) bg_vkb2_func_pane_g

0xf0a2,	// (0x0002e157) bg_vkb2_fuc_pane_cp01_ParamLimits

0xf0a2,	// (0x0002e157) bg_vkb2_fuc_pane_cp01

0x90f0,	// (0x000281a5) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x90f0,	// (0x000281a5) vkb2_top_cell_right_wide_pane_g1

0xf0a2,	// (0x0002e157) bg_vkb2_fuc_pane_cp02_ParamLimits

0xf0a2,	// (0x0002e157) bg_vkb2_fuc_pane_cp02

0x914e,	// (0x00028203) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x914e,	// (0x00028203) vkb2_top_cell_right_narrow_pane_g1

0xd0ec,	// (0x0002c1a1) aid_touch_area_decrease_ParamLimits

0xd0ec,	// (0x0002c1a1) aid_touch_area_decrease

0xd110,	// (0x0002c1c5) aid_touch_area_increase_ParamLimits

0xd110,	// (0x0002c1c5) aid_touch_area_increase

0xd11c,	// (0x0002c1d1) aid_touch_area_mute_ParamLimits

0xd11c,	// (0x0002c1d1) aid_touch_area_mute

0xd140,	// (0x0002c1f5) aid_touch_area_slider_ParamLimits

0xd140,	// (0x0002c1f5) aid_touch_area_slider

0xd230,	// (0x0002c2e5) popup_slider_window_g4_ParamLimits

0xd230,	// (0x0002c2e5) popup_slider_window_g4

0xd23c,	// (0x0002c2f1) popup_slider_window_g5_ParamLimits

0xd23c,	// (0x0002c2f1) popup_slider_window_g5

0xd25e,	// (0x0002c313) popup_slider_window_g6_ParamLimits

0xd25e,	// (0x0002c313) popup_slider_window_g6

0xd29e,	// (0x0002c353) popup_slider_window_t2_ParamLimits

0xd29e,	// (0x0002c353) popup_slider_window_t2

0x0001,

0xfced,	// (0x0002eda2) popup_slider_window_t_ParamLimits

0xfced,	// (0x0002eda2) popup_slider_window_t

0xd2b6,	// (0x0002c36b) slider_pane_ParamLimits

0xd2b6,	// (0x0002c36b) slider_pane

0xdfe9,	// (0x0002d09e) slider_pane_g1_ParamLimits

0xdfe9,	// (0x0002d09e) slider_pane_g1

0xdffd,	// (0x0002d0b2) slider_pane_g2_ParamLimits

0xdffd,	// (0x0002d0b2) slider_pane_g2

0xe013,	// (0x0002d0c8) slider_pane_g3_ParamLimits

0xe013,	// (0x0002d0c8) slider_pane_g3

0x0003,

0xfe04,	// (0x0002eeb9) slider_pane_g_ParamLimits

0xfe04,	// (0x0002eeb9) slider_pane_g

0x7d73,	// (0x00026e28) popup_tb_float_extension_window_ParamLimits

0x7d73,	// (0x00026e28) popup_tb_float_extension_window

0xe03f,	// (0x0002d0f4) aid_size_cell_tb_float_ext

0x0a82,	// (0x0001fb37) bg_popup_sub_window_cp28

0xe04b,	// (0x0002d100) grid_tb_float_ext_pane

0xe057,	// (0x0002d10c) cell_tb_float_ext_pane_ParamLimits

0xe057,	// (0x0002d10c) cell_tb_float_ext_pane

0xe073,	// (0x0002d128) cell_tb_float_ext_pane_g1

0xe07c,	// (0x0002d131) grid_highlight_pane_cp12

0x8950,	// (0x00027a05) cell_last_hwr_side_pane_ParamLimits

0x8950,	// (0x00027a05) cell_last_hwr_side_pane

0xbb6b,	// (0x0002ac20) cell_last_hwr_side_pane_g1

0xe085,	// (0x0002d13a) cell_last_hwr_side_pane_g2

0x0001,

0xfe0d,	// (0x0002eec2) cell_last_hwr_side_pane_g

0x9016,	// (0x000280cb) vkb2_area_bottom_space_btn_pane_ParamLimits

0x9016,	// (0x000280cb) vkb2_area_bottom_space_btn_pane

0xbde6,	// (0x0002ae9b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdb19,	// (0x0002cbce) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9298,	// (0x0002834d) cell_vkb2_top_candi_pane_t1_ParamLimits

0x92b6,	// (0x0002836b) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x92b6,	// (0x0002836b) vkb2_area_bottom_space_btn_pane_g1

0x92f0,	// (0x000283a5) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x92f0,	// (0x000283a5) vkb2_area_bottom_space_btn_pane_g2

0x9326,	// (0x000283db) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9326,	// (0x000283db) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe12,	// (0x0002eec7) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe12,	// (0x0002eec7) vkb2_area_bottom_space_btn_pane_g

0x88c0,	// (0x00027975) cel_fep_hwr_func_pane_ParamLimits

0x88c0,	// (0x00027975) cel_fep_hwr_func_pane

0x88fc,	// (0x000279b1) cell_hwr_side_button_pane_ParamLimits

0x88fc,	// (0x000279b1) cell_hwr_side_button_pane

0xd4ff,	// (0x0002c5b4) aid_area_touch_clock_ParamLimits

0x2710,	// (0x000217c5) bg_uniindi_top_pane_ParamLimits

0xd513,	// (0x0002c5c8) uniindi_top_pane_g1_ParamLimits

0xd529,	// (0x0002c5de) uniindi_top_pane_g2_ParamLimits

0xd535,	// (0x0002c5ea) uniindi_top_pane_g3_ParamLimits

0xd546,	// (0x0002c5fb) uniindi_top_pane_g4_ParamLimits

0xfd25,	// (0x0002edda) uniindi_top_pane_g_ParamLimits

0xd553,	// (0x0002c608) uniindi_top_pane_t1_ParamLimits

0x2710,	// (0x000217c5) bg_vkb2_func_pane_cp01_ParamLimits

0x2710,	// (0x000217c5) bg_vkb2_func_pane_cp01

0xe08e,	// (0x0002d143) cel_fep_hwr_func_pane_g1_ParamLimits

0xe08e,	// (0x0002d143) cel_fep_hwr_func_pane_g1

0x2710,	// (0x000217c5) bg_vkb2_func_pane_cp02_ParamLimits

0x2710,	// (0x000217c5) bg_vkb2_func_pane_cp02

0xe08e,	// (0x0002d143) cell_hwr_side_button_pane_g1_ParamLimits

0xe08e,	// (0x0002d143) cell_hwr_side_button_pane_g1

0x81fb,	// (0x000272b0) status_pane_g4_ParamLimits

0x81fb,	// (0x000272b0) status_pane_g4

0x8215,	// (0x000272ca) status_pane_t1

0xb90a,	// (0x0002a9bf) form2_midp_gauge_slider_cont_pane

0xb912,	// (0x0002a9c7) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb924,	// (0x0002a9d9) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb936,	// (0x0002a9eb) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf1,	// (0x0002eba6) form2_midp_gauge_slider_pane_t_ParamLimits

0xb948,	// (0x0002a9fd) form2_midp_slider_pane_ParamLimits

0x8c79,	// (0x00027d2e) aid_size_cell_func_vkb2_ParamLimits

0x8c79,	// (0x00027d2e) aid_size_cell_func_vkb2

0xe02b,	// (0x0002d0e0) slider_pane_g4_ParamLimits

0xe02b,	// (0x0002d0e0) slider_pane_g4

0x9370,	// (0x00028425) form2_midp_gauge_slider_pane_t2_cp01

0x937e,	// (0x00028433) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x937e,	// (0x00028433) form2_midp_gauge_slider_pane_t3_cp01

0x939b,	// (0x00028450) form2_midp_slider_pane_cp01

0x0a82,	// (0x0001fb37) navi_smil_pane

0xe0c7,	// (0x0002d17c) navi_smil_pane_g1

0xe0cf,	// (0x0002d184) navi_smil_pane_t1

0xe09c,	// (0x0002d151) form2_midp_slider_pane_g1

0xe0a5,	// (0x0002d15a) form2_midp_slider_pane_g2

0xe0ad,	// (0x0002d162) form2_midp_slider_pane_g3

0xe09c,	// (0x0002d151) form2_midp_slider_pane_g4

0xe0b5,	// (0x0002d16a) form2_midp_slider_pane_g5

0x0004,

0xfe1b,	// (0x0002eed0) form2_midp_slider_pane_g

0x9360,	// (0x00028415) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9360,	// (0x00028415) vkb2_area_bottom_space_btn_pane_g4

0x8012,	// (0x000270c7) lc0_navi_pane_ParamLimits

0x8012,	// (0x000270c7) lc0_navi_pane

0x808e,	// (0x00027143) lc0_stat_indi_pane_ParamLimits

0x808e,	// (0x00027143) lc0_stat_indi_pane

0x80a5,	// (0x0002715a) ls0_title_pane_ParamLimits

0x80a5,	// (0x0002715a) ls0_title_pane

0x2c78,	// (0x00021d2d) bg_popup_sub_pane_cp14_ParamLimits

0xd4e6,	// (0x0002c59b) list_uniindi_pane_ParamLimits

0xd4f2,	// (0x0002c5a7) uniindi_top_pane_ParamLimits

0xd591,	// (0x0002c646) list_single_uniindi_pane_g1_ParamLimits

0xd5a4,	// (0x0002c659) list_single_uniindi_pane_t1_ParamLimits

0x93a4,	// (0x00028459) lc0_stat_clock_pane_ParamLimits

0x93a4,	// (0x00028459) lc0_stat_clock_pane

0xe0dd,	// (0x0002d192) lc0_stat_indi_pane_g1_ParamLimits

0xe0dd,	// (0x0002d192) lc0_stat_indi_pane_g1

0xe0ea,	// (0x0002d19f) lc0_stat_indi_pane_g2_ParamLimits

0xe0ea,	// (0x0002d19f) lc0_stat_indi_pane_g2

0x0001,

0xfe26,	// (0x0002eedb) lc0_stat_indi_pane_g_ParamLimits

0xfe26,	// (0x0002eedb) lc0_stat_indi_pane_g

0x93b1,	// (0x00028466) lc0_uni_indicator_pane_ParamLimits

0x93b1,	// (0x00028466) lc0_uni_indicator_pane

0xe0f7,	// (0x0002d1ac) ls0_title_pane_g1_ParamLimits

0xe0f7,	// (0x0002d1ac) ls0_title_pane_g1

0xe10b,	// (0x0002d1c0) ls0_title_pane_t1_ParamLimits

0xe10b,	// (0x0002d1c0) ls0_title_pane_t1

0x93be,	// (0x00028473) lc0_uni_indicator_pane_g1_ParamLimits

0x93be,	// (0x00028473) lc0_uni_indicator_pane_g1

0xe141,	// (0x0002d1f6) lc0_stat_clock_pane_t1

0x0a82,	// (0x0001fb37) main_ai5_pane

0xe14f,	// (0x0002d204) ai5_sk_pane_ParamLimits

0xe14f,	// (0x0002d204) ai5_sk_pane

0xe15c,	// (0x0002d211) cell_ai5_widget_pane_ParamLimits

0xe15c,	// (0x0002d211) cell_ai5_widget_pane

0xe6f8,	// (0x0002d7ad) aid_size_cell_widget_grid

0xe706,	// (0x0002d7bb) bg_ai5_widget_pane_ParamLimits

0xe706,	// (0x0002d7bb) bg_ai5_widget_pane

0xe77a,	// (0x0002d82f) cell_ai5_widget_pane_g2

0xe78a,	// (0x0002d83f) cell_ai5_widget_pane_g3

0xe7a1,	// (0x0002d856) cell_ai5_widget_pane_g4

0xe7ad,	// (0x0002d862) cell_ai5_widget_pane_g5

0xe7b9,	// (0x0002d86e) cell_ai5_widget_pane_g6

0xe7c5,	// (0x0002d87a) cell_ai5_widget_pane_g7

0xe80d,	// (0x0002d8c2) cell_ai5_widget_pane_t1_ParamLimits

0xe80d,	// (0x0002d8c2) cell_ai5_widget_pane_t1

0xe82a,	// (0x0002d8df) cell_ai5_widget_pane_t2_ParamLimits

0xe82a,	// (0x0002d8df) cell_ai5_widget_pane_t2

0xe842,	// (0x0002d8f7) cell_ai5_widget_pane_t3_ParamLimits

0xe842,	// (0x0002d8f7) cell_ai5_widget_pane_t3

0xe85a,	// (0x0002d90f) cell_ai5_widget_pane_t4_ParamLimits

0xe85a,	// (0x0002d90f) cell_ai5_widget_pane_t4

0xe877,	// (0x0002d92c) cell_ai5_widget_pane_t5_ParamLimits

0xe877,	// (0x0002d92c) cell_ai5_widget_pane_t5

0xe896,	// (0x0002d94b) cell_ai5_widget_pane_t6_ParamLimits

0xe896,	// (0x0002d94b) cell_ai5_widget_pane_t6

0xe8a8,	// (0x0002d95d) cell_ai5_widget_pane_t7_ParamLimits

0xe8a8,	// (0x0002d95d) cell_ai5_widget_pane_t7

0xe8c1,	// (0x0002d976) cell_ai5_widget_pane_t8_ParamLimits

0xe8c1,	// (0x0002d976) cell_ai5_widget_pane_t8

0x0009,

0xfe40,	// (0x0002eef5) cell_ai5_widget_pane_t_ParamLimits

0xfe40,	// (0x0002eef5) cell_ai5_widget_pane_t

0xe915,	// (0x0002d9ca) grid_ai5_widget_pane

0x2c78,	// (0x00021d2d) highlight_cell_ai5_widget_pane_ParamLimits

0x2c78,	// (0x00021d2d) highlight_cell_ai5_widget_pane

0xe929,	// (0x0002d9de) ai5_sk_left_pane

0xe933,	// (0x0002d9e8) ai5_sk_middle_pane

0xe93d,	// (0x0002d9f2) ai5_sk_right_pane

0xe947,	// (0x0002d9fc) bg_ai5_widget_pane_g1_ParamLimits

0xe947,	// (0x0002d9fc) bg_ai5_widget_pane_g1

0xe953,	// (0x0002da08) bg_ai5_widget_pane_g2_ParamLimits

0xe953,	// (0x0002da08) bg_ai5_widget_pane_g2

0xe95f,	// (0x0002da14) bg_ai5_widget_pane_g3_ParamLimits

0xe95f,	// (0x0002da14) bg_ai5_widget_pane_g3

0xe96b,	// (0x0002da20) bg_ai5_widget_pane_g4_ParamLimits

0xe96b,	// (0x0002da20) bg_ai5_widget_pane_g4

0xe977,	// (0x0002da2c) bg_ai5_widget_pane_g5_ParamLimits

0xe977,	// (0x0002da2c) bg_ai5_widget_pane_g5

0xe983,	// (0x0002da38) bg_ai5_widget_pane_g6_ParamLimits

0xe983,	// (0x0002da38) bg_ai5_widget_pane_g6

0xe98f,	// (0x0002da44) bg_ai5_widget_pane_g7_ParamLimits

0xe98f,	// (0x0002da44) bg_ai5_widget_pane_g7

0xe99b,	// (0x0002da50) bg_ai5_widget_pane_g8_ParamLimits

0xe99b,	// (0x0002da50) bg_ai5_widget_pane_g8

0xe9a7,	// (0x0002da5c) bg_ai5_widget_pane_g9_ParamLimits

0xe9a7,	// (0x0002da5c) bg_ai5_widget_pane_g9

0x0008,

0xfe55,	// (0x0002ef0a) bg_ai5_widget_pane_g_ParamLimits

0xfe55,	// (0x0002ef0a) bg_ai5_widget_pane_g

0xe9dd,	// (0x0002da92) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9dd,	// (0x0002da92) cell_shortcut_ai5_widget_pane

0x72c4,	// (0x00026379) bg_cell_shortcut_ai5_widget_pane

0xe9f0,	// (0x0002daa5) cell_grid_ai5_widget_pane_g1

0xe9f9,	// (0x0002daae) highlight_cell_shortcut_ai5_widget_pane

0x83ba,	// (0x0002746f) ai5_sk_left_pane_g1

0xea01,	// (0x0002dab6) ai5_sk_left_pane_g2

0xea09,	// (0x0002dabe) ai5_sk_left_pane_g3

0xea11,	// (0x0002dac6) ai5_sk_left_pane_g4

0x0003,

0xfe68,	// (0x0002ef1d) ai5_sk_left_pane_g

0xea19,	// (0x0002dace) ai5_sk_left_pane_t1

0x83b2,	// (0x00027467) ai5_sk_right_pane_g1

0xea27,	// (0x0002dadc) ai5_sk_right_pane_g2

0xea2f,	// (0x0002dae4) ai5_sk_right_pane_g3

0xea37,	// (0x0002daec) ai5_sk_right_pane_g4

0x0003,

0xfe71,	// (0x0002ef26) ai5_sk_right_pane_g

0xea3f,	// (0x0002daf4) ai5_sk_right_pane_t1

0x83b2,	// (0x00027467) ai5_sk_middle_pane_g1

0x83ba,	// (0x0002746f) ai5_sk_middle_pane_g2

0x83d2,	// (0x00027487) ai5_sk_middle_pane_g3

0xea2f,	// (0x0002dae4) ai5_sk_middle_pane_g4

0xea09,	// (0x0002dabe) ai5_sk_middle_pane_g5

0xea4d,	// (0x0002db02) ai5_sk_middle_pane_g6

0xea55,	// (0x0002db0a) ai5_sk_middle_pane_g7

0x0006,

0xfe7a,	// (0x0002ef2f) ai5_sk_middle_pane_g

0x7e94,	// (0x00026f49) aid_touch_area_size_lc0_ParamLimits

0x7e94,	// (0x00026f49) aid_touch_area_size_lc0

0x8a5f,	// (0x00027b14) cell_hwr_candidate_pane_t1_ParamLimits

0x7eb2,	// (0x00026f67) aid_touch_navi_pane

0x81a5,	// (0x0002725a) status_dt_navi_pane_ParamLimits

0x81a5,	// (0x0002725a) status_dt_navi_pane

0x81b2,	// (0x00027267) status_dt_sta_pane_ParamLimits

0x81b2,	// (0x00027267) status_dt_sta_pane

0xea5d,	// (0x0002db12) dt_sta_controll_pane

0xea6a,	// (0x0002db1f) dt_sta_indi_pane

0xea7b,	// (0x0002db30) dt_sta_title_pane

0x2710,	// (0x000217c5) bg_dt_sta_indi_pane_ParamLimits

0x2710,	// (0x000217c5) bg_dt_sta_indi_pane

0xea8e,	// (0x0002db43) dt_sta_battery_pane

0xea96,	// (0x0002db4b) dt_sta_indi_pane_g1

0xea9f,	// (0x0002db54) dt_sta_indi_pane_g2

0xeaa8,	// (0x0002db5d) dt_sta_indi_pane_g3

0x0002,

0xfe89,	// (0x0002ef3e) dt_sta_indi_pane_g

0xeab1,	// (0x0002db66) dt_sta_signal_pane

0x2c78,	// (0x00021d2d) bg_dt_sta_title_pane_ParamLimits

0x2c78,	// (0x00021d2d) bg_dt_sta_title_pane

0xeaba,	// (0x0002db6f) dt_sta_title_pane_g1

0xeac2,	// (0x0002db77) dt_sta_title_pane_t1_ParamLimits

0xeac2,	// (0x0002db77) dt_sta_title_pane_t1

0x0a82,	// (0x0001fb37) bg_dt_sta_control_pane

0xead7,	// (0x0002db8c) dt_sta_controll_pane_g1

0xeae0,	// (0x0002db95) bg_dt_sta_title_pane_g1

0xeae9,	// (0x0002db9e) bg_dt_sta_title_pane_g2

0xeaf2,	// (0x0002dba7) bg_dt_sta_title_pane_g3

0x0002,

0xfe90,	// (0x0002ef45) bg_dt_sta_title_pane_g

0xbb6b,	// (0x0002ac20) bg_dt_sta_indi_pane_g1

0xeafb,	// (0x0002dbb0) dt_sta_signal_pane_g1

0xeb03,	// (0x0002dbb8) dt_sta_signal_pane_g2

0x0001,

0xfe97,	// (0x0002ef4c) dt_sta_signal_pane_g

0xeb0b,	// (0x0002dbc0) dt_sta_battery_pane_g1

0xeb14,	// (0x0002dbc9) dt_sta_battery_pane_t1

0xbb6b,	// (0x0002ac20) bg_dt_sta_control_pane_g1

0x3279,	// (0x0002232e) fep_china_uni_eep_pane

0x3281,	// (0x00022336) fep_china_uni_entry_pane_ParamLimits

0x3291,	// (0x00022346) popup_fep_china_uni_window_g1_ParamLimits

0x32a1,	// (0x00022356) popup_fep_china_uni_window_g2_ParamLimits

0x32a1,	// (0x00022356) popup_fep_china_uni_window_g2

0x0001,

0xf71e,	// (0x0002e7d3) popup_fep_china_uni_window_g_ParamLimits

0xf71e,	// (0x0002e7d3) popup_fep_china_uni_window_g

0xeb23,	// (0x0002dbd8) fep_china_uni_eep_pane_g1

0xeb2b,	// (0x0002dbe0) fep_china_uni_eep_pane_t1

0xe0be,	// (0x0002d173) aid_touch_area_size_smil_player

0x800a,	// (0x000270bf) lc0_clock_pane

0x8209,	// (0x000272be) status_pane_g5_ParamLimits

0x8209,	// (0x000272be) status_pane_g5

0x79f8,	// (0x00026aad) popup_keymap_window

0x81c7,	// (0x0002727c) status_icon_pane

0xe78a,	// (0x0002d83f) cell_ai5_widget_pane_g3_ParamLimits

0xe7a1,	// (0x0002d856) cell_ai5_widget_pane_g4_ParamLimits

0xe7ad,	// (0x0002d862) cell_ai5_widget_pane_g5_ParamLimits

0xe7d1,	// (0x0002d886) cell_ai5_widget_pane_g8_ParamLimits

0xe7d1,	// (0x0002d886) cell_ai5_widget_pane_g8

0xe7e5,	// (0x0002d89a) cell_ai5_widget_pane_g9_ParamLimits

0xe7e5,	// (0x0002d89a) cell_ai5_widget_pane_g9

0xe7f9,	// (0x0002d8ae) cell_ai5_widget_pane_g10_ParamLimits

0xe7f9,	// (0x0002d8ae) cell_ai5_widget_pane_g10

0xeb3a,	// (0x0002dbef) status_icon_pane_g1

0x0a82,	// (0x0001fb37) bg_popup_sub_pane_cp13

0xeb42,	// (0x0002dbf7) popup_keymap_window_t1

0x76ad,	// (0x00026762) control_pane_g6_ParamLimits

0x76ad,	// (0x00026762) control_pane_g6

0x76ba,	// (0x0002676f) control_pane_g7_ParamLimits

0x76ba,	// (0x0002676f) control_pane_g7

0x76c7,	// (0x0002677c) control_pane_g8_ParamLimits

0x76c7,	// (0x0002677c) control_pane_g8

0xea5d,	// (0x0002db12) dt_sta_controll_pane_ParamLimits

0xea6a,	// (0x0002db1f) dt_sta_indi_pane_ParamLimits

0xea7b,	// (0x0002db30) dt_sta_title_pane_ParamLimits

0x2b34,	// (0x00021be9) aid_size_touch_scroll_bar_cale

0x640c,	// (0x000254c1) popup_discreet_window_ParamLimits

0x640c,	// (0x000254c1) popup_discreet_window

0x649a,	// (0x0002554f) popup_sk_window

0x9b92,	// (0x00028c47) bg_popup_sub_pane_cp28_ParamLimits

0x9b92,	// (0x00028c47) bg_popup_sub_pane_cp28

0xeb50,	// (0x0002dc05) popup_discreet_window_g1_ParamLimits

0xeb50,	// (0x0002dc05) popup_discreet_window_g1

0xeb70,	// (0x0002dc25) popup_discreet_window_t1_ParamLimits

0xeb70,	// (0x0002dc25) popup_discreet_window_t1

0xeb8e,	// (0x0002dc43) popup_discreet_window_t2_ParamLimits

0xeb8e,	// (0x0002dc43) popup_discreet_window_t2

0x0002,

0xfe9c,	// (0x0002ef51) popup_discreet_window_t_ParamLimits

0xfe9c,	// (0x0002ef51) popup_discreet_window_t

0x93d1,	// (0x00028486) popup_sk_window_g1

0x93db,	// (0x00028490) popup_sk_window_g2

0x0001,

0xfea3,	// (0x0002ef58) popup_sk_window_g

0x93e5,	// (0x0002849a) popup_sk_window_t1

0x93f5,	// (0x000284aa) popup_sk_window_t1_copy1

0xe77a,	// (0x0002d82f) cell_ai5_widget_pane_g2_ParamLimits

0xe8d3,	// (0x0002d988) cell_ai5_widget_pane_t9_ParamLimits

0xe8d3,	// (0x0002d988) cell_ai5_widget_pane_t9

0x0a82,	// (0x0001fb37) main_fep_fshwr2_pane

0x9403,	// (0x000284b8) aid_fshwr2_btn_pane

0x940f,	// (0x000284c4) aid_fshwr2_syb_pane

0x9420,	// (0x000284d5) aid_fshwr2_txt_pane

0x942c,	// (0x000284e1) fshwr2_func_candi_pane

0x9440,	// (0x000284f5) fshwr2_hwr_syb_pane

0x9453,	// (0x00028508) fshwr2_icf_pane

0x0a82,	// (0x0001fb37) fshwr2_icf_bg_pane

0xebe0,	// (0x0002dc95) fshwr2_icf_pane_t1_ParamLimits

0xebe0,	// (0x0002dc95) fshwr2_icf_pane_t1

0x31f7,	// (0x000222ac) fshwr2_func_candi_pane_g1

0xebf8,	// (0x0002dcad) fshwr2_func_candi_row_pane_ParamLimits

0xebf8,	// (0x0002dcad) fshwr2_func_candi_row_pane

0xec08,	// (0x0002dcbd) cell_fshwr2_syb_pane_ParamLimits

0xec08,	// (0x0002dcbd) cell_fshwr2_syb_pane

0xbde6,	// (0x0002ae9b) fshwr2_hwr_syb_pane_g1_ParamLimits

0xbde6,	// (0x0002ae9b) fshwr2_hwr_syb_pane_g1

0x0a82,	// (0x0001fb37) bg_popup_call_pane_cp01

0xec22,	// (0x0002dcd7) fshwr2_func_candi_cell_pane_ParamLimits

0xec22,	// (0x0002dcd7) fshwr2_func_candi_cell_pane

0xec4a,	// (0x0002dcff) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xec4a,	// (0x0002dcff) fshwr2_func_candi_cell_bg_pane

0xec56,	// (0x0002dd0b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xec56,	// (0x0002dd0b) fshwr2_func_candi_cell_pane_g1

0xec76,	// (0x0002dd2b) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xec76,	// (0x0002dd2b) fshwr2_func_candi_cell_pane_t1

0x0a82,	// (0x0001fb37) bg_button_pane_cp08

0x72c4,	// (0x00026379) cell_fshwr2_syb_bg_pane

0xec89,	// (0x0002dd3e) cell_fshwr2_syb_bg_pane_g1

0xec91,	// (0x0002dd46) cell_fshwr2_syb_bg_pane_t1

0x2c78,	// (0x00021d2d) main_tmo_pane

0xa6b6,	// (0x0002976b) uni_indicator_pane_g1_ParamLimits

0xa6cd,	// (0x00029782) uni_indicator_pane_g2_ParamLimits

0xa6e3,	// (0x00029798) uni_indicator_pane_g3_ParamLimits

0xa6f8,	// (0x000297ad) uni_indicator_pane_g4_ParamLimits

0xa6f8,	// (0x000297ad) uni_indicator_pane_g4

0xa70c,	// (0x000297c1) uni_indicator_pane_g5_ParamLimits

0xa70c,	// (0x000297c1) uni_indicator_pane_g5

0xa70c,	// (0x000297c1) uni_indicator_pane_g6_ParamLimits

0xa70c,	// (0x000297c1) uni_indicator_pane_g6

0xf922,	// (0x0002e9d7) uni_indicator_pane_g_ParamLimits

0xd0bc,	// (0x0002c171) popup_tmo_note_window_ParamLimits

0xd0bc,	// (0x0002c171) popup_tmo_note_window

0x2c78,	// (0x00021d2d) fshwr2_bg_pane

0xec67,	// (0x0002dd1c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xec67,	// (0x0002dd1c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea8,	// (0x0002ef5d) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea8,	// (0x0002ef5d) fshwr2_func_candi_cell_pane_g

0xbb6b,	// (0x0002ac20) bg_popup_window_pane_cp01

0xeca0,	// (0x0002dd55) bg_popup_window_pane_g1_cp01

0xeca9,	// (0x0002dd5e) bg_popup_window_pane_cp22_ParamLimits

0xeca9,	// (0x0002dd5e) bg_popup_window_pane_cp22

0xecb7,	// (0x0002dd6c) listscroll_tmo_link_pane_ParamLimits

0xecb7,	// (0x0002dd6c) listscroll_tmo_link_pane

0xecf7,	// (0x0002ddac) popup_tmo_note_window_g1_ParamLimits

0xecf7,	// (0x0002ddac) popup_tmo_note_window_g1

0xed04,	// (0x0002ddb9) tmo_note_info_pane_ParamLimits

0xed04,	// (0x0002ddb9) tmo_note_info_pane

0xed1e,	// (0x0002ddd3) list_tmo_note_info_pane_g1_ParamLimits

0xed1e,	// (0x0002ddd3) list_tmo_note_info_pane_g1

0xed35,	// (0x0002ddea) list_tmo_note_info_pane_g2_ParamLimits

0xed35,	// (0x0002ddea) list_tmo_note_info_pane_g2

0x0001,

0xfead,	// (0x0002ef62) list_tmo_note_info_pane_g_ParamLimits

0xfead,	// (0x0002ef62) list_tmo_note_info_pane_g

0xed51,	// (0x0002de06) list_tmo_note_info_text_pane_ParamLimits

0xed51,	// (0x0002de06) list_tmo_note_info_text_pane

0xedd6,	// (0x0002de8b) list_tmo_link_pane

0xede3,	// (0x0002de98) scroll_pane_cp20

0xedf0,	// (0x0002dea5) list_single_tmo_link_pane_ParamLimits

0xedf0,	// (0x0002dea5) list_single_tmo_link_pane

0xee00,	// (0x0002deb5) list_single_tmo_link_pane_t1

0xee0e,	// (0x0002dec3) list_tmo_note_info_text_pane_t1_ParamLimits

0xee0e,	// (0x0002dec3) list_tmo_note_info_text_pane_t1

0x6915,	// (0x000259ca) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6915,	// (0x000259ca) aid_size_touch_scroll_bar_cp01

0x56a2,	// (0x00024757) aid_size_touch_slider_marker

0x6482,	// (0x00025537) popup_settings_window_ParamLimits

0x6482,	// (0x00025537) popup_settings_window

0x584d,	// (0x00024902) popup_candi_list_indi_window

0x7eb2,	// (0x00026f67) aid_touch_navi_pane_ParamLimits

0x8bd0,	// (0x00027c85) rs_clock_indi_pane

0x8bd9,	// (0x00027c8e) sctrl_sk_bottom_pane_ParamLimits

0x8bea,	// (0x00027c9f) sctrl_sk_top_pane_ParamLimits

0x8cd3,	// (0x00027d88) popup_fep_tooltip_window

0xe6f8,	// (0x0002d7ad) aid_size_cell_widget_grid_ParamLimits

0xe765,	// (0x0002d81a) cell_ai5_widget_pane_g1_ParamLimits

0xe765,	// (0x0002d81a) cell_ai5_widget_pane_g1

0xe7b9,	// (0x0002d86e) cell_ai5_widget_pane_g6_ParamLimits

0xe7c5,	// (0x0002d87a) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2b,	// (0x0002eee0) cell_ai5_widget_pane_g_ParamLimits

0xfe2b,	// (0x0002eee0) cell_ai5_widget_pane_g

0xe8f7,	// (0x0002d9ac) cell_ai5_widget_pane_t10_ParamLimits

0xe8f7,	// (0x0002d9ac) cell_ai5_widget_pane_t10

0xe915,	// (0x0002d9ca) grid_ai5_widget_pane_ParamLimits

0xe9b3,	// (0x0002da68) cell_contacts_ai5_widget_pane_ParamLimits

0xe9b3,	// (0x0002da68) cell_contacts_ai5_widget_pane

0xeba3,	// (0x0002dc58) popup_discreet_window_t3_ParamLimits

0xeba3,	// (0x0002dc58) popup_discreet_window_t3

0x9468,	// (0x0002851d) popup_fshwr2_char_preview_window_ParamLimits

0x9468,	// (0x0002851d) popup_fshwr2_char_preview_window

0xed6f,	// (0x0002de24) tmo_note_info_pane_t1

0xed84,	// (0x0002de39) tmo_note_info_pane_t2

0xed9d,	// (0x0002de52) tmo_note_info_pane_t3

0xedb2,	// (0x0002de67) tmo_note_info_pane_t4

0xedc4,	// (0x0002de79) tmo_note_info_pane_t5

0x0004,

0xfeb2,	// (0x0002ef67) tmo_note_info_pane_t

0xedd6,	// (0x0002de8b) list_tmo_link_pane_ParamLimits

0xede3,	// (0x0002de98) scroll_pane_cp20_ParamLimits

0x0a82,	// (0x0001fb37) bg_popup_fep_char_preview_window_cp01

0xee27,	// (0x0002dedc) popup_fshwr2_char_preview_window_t1

0xee35,	// (0x0002deea) popup_candi_list_indi_window_g1

0xee3e,	// (0x0002def3) bg_cell_contacts_ai5_widget_pane

0xee4a,	// (0x0002deff) cell_contacts_ai5_widget_pane_g1

0xee5e,	// (0x0002df13) cell_contacts_ai5_widget_pane_g2

0xee6a,	// (0x0002df1f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebd,	// (0x0002ef72) cell_contacts_ai5_widget_pane_g

0xee7d,	// (0x0002df32) cell_contacts_ai5_widget_pane_t1

0x2c78,	// (0x00021d2d) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeef7,	// (0x0002dfac) settings_container_pane

0x72c4,	// (0x00026379) listscroll_set_pane_copy1

0xb286,	// (0x0002a33b) scroll_pane_cp121_copy1

0xef03,	// (0x0002dfb8) set_content_pane_copy1

0xef0b,	// (0x0002dfc0) aid_height_set_list_copy1_ParamLimits

0xef0b,	// (0x0002dfc0) aid_height_set_list_copy1

0xa90c,	// (0x000299c1) aid_size_parent_copy1_ParamLimits

0xa90c,	// (0x000299c1) aid_size_parent_copy1

0xef17,	// (0x0002dfcc) button_value_adjust_pane_cp6_copy1_ParamLimits

0xef17,	// (0x0002dfcc) button_value_adjust_pane_cp6_copy1

0x7839,	// (0x000268ee) list_highlight_pane_cp2_copy1_ParamLimits

0x7839,	// (0x000268ee) list_highlight_pane_cp2_copy1

0xef2b,	// (0x0002dfe0) list_set_pane_copy1_ParamLimits

0xef2b,	// (0x0002dfe0) list_set_pane_copy1

0xee92,	// (0x0002df47) main_pane_set_t1_copy1_ParamLimits

0xee92,	// (0x0002df47) main_pane_set_t1_copy1

0xeecc,	// (0x0002df81) main_pane_set_t2_copy1_ParamLimits

0xeecc,	// (0x0002df81) main_pane_set_t2_copy1

0xeff2,	// (0x0002e0a7) main_pane_set_t3_copy1

0xf000,	// (0x0002e0b5) main_pane_set_t4_copy1

0xeeeb,	// (0x0002dfa0) set_content_pane_g1_copy1_ParamLimits

0xeeeb,	// (0x0002dfa0) set_content_pane_g1_copy1

0xf00e,	// (0x0002e0c3) setting_code_pane_copy1

0xf016,	// (0x0002e0cb) setting_slider_graphic_pane_copy1

0xf016,	// (0x0002e0cb) setting_slider_pane_copy1

0xf016,	// (0x0002e0cb) setting_text_pane_copy1

0xf016,	// (0x0002e0cb) setting_volume_pane_copy1

0xf00e,	// (0x0002e0c3) settings_code_pane_cp2_copy1

0xf01e,	// (0x0002e0d3) settings_code_pane_cp_copy1_ParamLimits

0xf01e,	// (0x0002e0d3) settings_code_pane_cp_copy1

0x9480,	// (0x00028535) volume_set_pane_copy1

0xf032,	// (0x0002e0e7) volume_set_pane_g10_copy1

0xf03e,	// (0x0002e0f3) volume_set_pane_g1_copy1

0xf048,	// (0x0002e0fd) volume_set_pane_g2_copy1

0xf052,	// (0x0002e107) volume_set_pane_g3_copy1

0xf05c,	// (0x0002e111) volume_set_pane_g4_copy1

0xf066,	// (0x0002e11b) volume_set_pane_g5_copy1

0xf070,	// (0x0002e125) volume_set_pane_g6_copy1

0xf07a,	// (0x0002e12f) volume_set_pane_g7_copy1

0xf084,	// (0x0002e139) volume_set_pane_g8_copy1

0xf08e,	// (0x0002e143) volume_set_pane_g9_copy1

0x0afe,	// (0x0001fbb3) bg_set_opt_pane_cp_copy1_ParamLimits

0x0afe,	// (0x0001fbb3) bg_set_opt_pane_cp_copy1

0x948c,	// (0x00028541) setting_slider_pane_t1_copy1_ParamLimits

0x948c,	// (0x00028541) setting_slider_pane_t1_copy1

0x94aa,	// (0x0002855f) setting_slider_pane_t2_copy1_ParamLimits

0x94aa,	// (0x0002855f) setting_slider_pane_t2_copy1

0x94c4,	// (0x00028579) setting_slider_pane_t3_copy1_ParamLimits

0x94c4,	// (0x00028579) setting_slider_pane_t3_copy1

0x94dc,	// (0x00028591) slider_set_pane_copy1_ParamLimits

0x94dc,	// (0x00028591) slider_set_pane_copy1

0x2d41,	// (0x00021df6) set_opt_bg_pane_g1_copy2

0x2d49,	// (0x00021dfe) set_opt_bg_pane_g2_copy2

0xf098,	// (0x0002e14d) set_opt_bg_pane_g3_copy2

0x2d59,	// (0x00021e0e) set_opt_bg_pane_g4_copy2

0x2d61,	// (0x00021e16) set_opt_bg_pane_g5_copy2

0x2d69,	// (0x00021e1e) set_opt_bg_pane_g6_copy2

0xf0b0,	// (0x0002e165) set_opt_bg_pane_g7_copy2

0xf0ba,	// (0x0002e16f) set_opt_bg_pane_g8_copy2

0xf0c4,	// (0x0002e179) set_opt_bg_pane_g9_copy2

0xf0ce,	// (0x0002e183) aid_size_touch_slider_mark_copy1_ParamLimits

0xf0ce,	// (0x0002e183) aid_size_touch_slider_mark_copy1

0xf0e2,	// (0x0002e197) slider_set_pane_g1_copy1

0xf0eb,	// (0x0002e1a0) slider_set_pane_g2_copy1

0xc3d9,	// (0x0002b48e) slider_set_pane_g3_copy1_ParamLimits

0xc3d9,	// (0x0002b48e) slider_set_pane_g3_copy1

0xc3ed,	// (0x0002b4a2) slider_set_pane_g4_copy1_ParamLimits

0xc3ed,	// (0x0002b4a2) slider_set_pane_g4_copy1

0xc405,	// (0x0002b4ba) slider_set_pane_g5_copy1_ParamLimits

0xc405,	// (0x0002b4ba) slider_set_pane_g5_copy1

0xc3d9,	// (0x0002b48e) slider_set_pane_g6_copy1_ParamLimits

0xc3d9,	// (0x0002b48e) slider_set_pane_g6_copy1

0xf0f3,	// (0x0002e1a8) slider_set_pane_g7_copy1_ParamLimits

0xf0f3,	// (0x0002e1a8) slider_set_pane_g7_copy1

0x0a96,	// (0x0001fb4b) bg_set_opt_pane_cp2_copy1

0xf109,	// (0x0002e1be) setting_slider_graphic_pane_g1_copy1

0xf112,	// (0x0002e1c7) setting_slider_graphic_pane_t1_copy1

0xf122,	// (0x0002e1d7) setting_slider_graphic_pane_t2_copy1

0xf132,	// (0x0002e1e7) slider_set_pane_cp_copy1

0xf142,	// (0x0002e1f7) input_focus_pane_cp1_copy1

0xf14b,	// (0x0002e200) list_set_text_pane_copy1

0xf153,	// (0x0002e208) setting_text_pane_g1_copy1

0x6163,	// (0x00025218) set_text_pane_t1_copy1

0xf142,	// (0x0002e1f7) input_focus_pane_cp2_copy1

0xf153,	// (0x0002e208) setting_code_pane_g1_copy1

0xf15c,	// (0x0002e211) setting_code_pane_t1_copy1

0xf16a,	// (0x0002e21f) list_set_graphic_pane_copy1

0x0a96,	// (0x0001fb4b) bg_set_opt_pane_cp4_copy1

0x6fbe,	// (0x00026073) list_set_graphic_pane_g1_copy1_ParamLimits

0x6fbe,	// (0x00026073) list_set_graphic_pane_g1_copy1

0xf17c,	// (0x0002e231) list_set_graphic_pane_g2_copy1

0x6fd6,	// (0x0002608b) list_set_graphic_pane_t1_copy1_ParamLimits

0x6fd6,	// (0x0002608b) list_set_graphic_pane_t1_copy1

0xbb6b,	// (0x0002ac20) rs_clock_indi_pane_g1

0xf184,	// (0x0002e239) rs_clock_indi_pane_t1

0xf192,	// (0x0002e247) rs_indi_pane

0xf19a,	// (0x0002e24f) rs_indi_pane_g1

0xf1a3,	// (0x0002e258) rs_indi_pane_g2

0xf1ac,	// (0x0002e261) rs_indi_pane_g3

0x0002,

0xfec4,	// (0x0002ef79) rs_indi_pane_g

0x72c4,	// (0x00026379) bg_popup_preview_window_pane_cp03

0xf1b5,	// (0x0002e26a) popup_fep_tooltip_window_t1

0xc864,	// (0x0002b919) popup_note2_window_g2_ParamLimits

0xc864,	// (0x0002b919) popup_note2_window_g2

0x0001,

0xfc5d,	// (0x0002ed12) popup_note2_window_g_ParamLimits

0xfc5d,	// (0x0002ed12) popup_note2_window_g

0xcd6c,	// (0x0002be21) bg_popup_sub_pane_cp11_ParamLimits

0xcd79,	// (0x0002be2e) cell_ai3_links_pane_g1_ParamLimits

0xcd90,	// (0x0002be45) cell_ai3_links_pane_t1

0x6163,	// (0x00025218) set_text_pane_t1_copy1_ParamLimits

0x71d1,	// (0x00026286) cell_graphic_popup_pane_cp2_ParamLimits

0x71d1,	// (0x00026286) cell_graphic_popup_pane_cp2

0xf1c3,	// (0x0002e278) cell_graphic_popup_pane_g1_cp2

0x2947,	// (0x000219fc) cell_graphic_popup_pane_g2_cp2

0xf1cb,	// (0x0002e280) cell_graphic_popup_pane_g3_cp2

0xf1d3,	// (0x0002e288) cell_graphic_popup_pane_t2_cp2

0x2958,	// (0x00021a0d) grid_highlight_pane_cp3_cp2

0x3019,	// (0x000220ce) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2c78,	// (0x00021d2d) main_tmo_pane_ParamLimits

0xd0b0,	// (0x0002c165) popup_tmo_big_image_note_window

0xe754,	// (0x0002d809) cell_ai5_widget_list_pane

0xe75c,	// (0x0002d811) cell_ai5_widget_lrg_icon_pane

0xed6f,	// (0x0002de24) tmo_note_info_pane_t1_ParamLimits

0xed84,	// (0x0002de39) tmo_note_info_pane_t2_ParamLimits

0xed9d,	// (0x0002de52) tmo_note_info_pane_t3_ParamLimits

0xedb2,	// (0x0002de67) tmo_note_info_pane_t4_ParamLimits

0xedc4,	// (0x0002de79) tmo_note_info_pane_t5_ParamLimits

0xfeb2,	// (0x0002ef67) tmo_note_info_pane_t_ParamLimits

0xeef7,	// (0x0002dfac) settings_container_pane_ParamLimits

0xf13a,	// (0x0002e1ef) indicator_popup_pane_cp5

0xf13a,	// (0x0002e1ef) indicator_popup_pane_cp6

0xf16a,	// (0x0002e21f) list_set_graphic_pane_copy1_ParamLimits

0x0a82,	// (0x0001fb37) bg_popup_window_pane_cp23

0xf1e1,	// (0x0002e296) popup_tmo_big_image_note_window_g1

0xf1ed,	// (0x0002e2a2) popup_tmo_big_image_note_window_t1

0xf1fd,	// (0x0002e2b2) popup_tmo_big_image_note_window_t2

0xf20d,	// (0x0002e2c2) popup_tmo_big_image_note_window_t3

0x0002,

0xfecb,	// (0x0002ef80) popup_tmo_big_image_note_window_t

0xbb6b,	// (0x0002ac20) cell_ai5_widget_lrg_icon_pane_g1

0xf21d,	// (0x0002e2d2) cell_ai5_widget_lrg_icon_pane_t1

0xf22b,	// (0x0002e2e0) cell_ai5_widget_list_row_pane_ParamLimits

0xf22b,	// (0x0002e2e0) cell_ai5_widget_list_row_pane

0xf244,	// (0x0002e2f9) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf244,	// (0x0002e2f9) cell_ai5_widget_list_row_pane_g1

0xf251,	// (0x0002e306) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf251,	// (0x0002e306) cell_ai5_widget_list_row_pane_t1

0xf27c,	// (0x0002e331) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf27c,	// (0x0002e331) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed2,	// (0x0002ef87) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed2,	// (0x0002ef87) cell_ai5_widget_list_row_pane_t

0x0a82,	// (0x0001fb37) main_fep_vtchi_ss_pane

0x9501,	// (0x000285b6) popup_fep_char_pre_window

0x9509,	// (0x000285be) popup_fep_ituss_window

0x952a,	// (0x000285df) popup_fep_vkbss_window

0xf2a4,	// (0x0002e359) grid_vkbss_keypad_pane_ParamLimits

0xf2a4,	// (0x0002e359) grid_vkbss_keypad_pane

0xf2b4,	// (0x0002e369) ituss_keypad_pane

0x9557,	// (0x0002860c) aid_vkbss_key_offset_ParamLimits

0x9557,	// (0x0002860c) aid_vkbss_key_offset

0x9563,	// (0x00028618) cell_vkbss_key_pane_ParamLimits

0x9563,	// (0x00028618) cell_vkbss_key_pane

0xf2c4,	// (0x0002e379) bg_cell_vkbss_key_g1_ParamLimits

0xf2c4,	// (0x0002e379) bg_cell_vkbss_key_g1

0xf2d0,	// (0x0002e385) cell_vkbss_key_3p_pane_ParamLimits

0xf2d0,	// (0x0002e385) cell_vkbss_key_3p_pane

0xf2ea,	// (0x0002e39f) cell_vkbss_key_g1_ParamLimits

0xf2ea,	// (0x0002e39f) cell_vkbss_key_g1

0xf304,	// (0x0002e3b9) cell_vkbss_key_t1_ParamLimits

0xf304,	// (0x0002e3b9) cell_vkbss_key_t1

0x9579,	// (0x0002862e) cell_ituss_key_pane_ParamLimits

0x9579,	// (0x0002862e) cell_ituss_key_pane

0xf32f,	// (0x0002e3e4) bg_cell_ituss_key_g1_ParamLimits

0xf32f,	// (0x0002e3e4) bg_cell_ituss_key_g1

0xf33b,	// (0x0002e3f0) cell_ituss_key_pane_g1_ParamLimits

0xf33b,	// (0x0002e3f0) cell_ituss_key_pane_g1

0xf34f,	// (0x0002e404) cell_ituss_key_pane_g2_ParamLimits

0xf34f,	// (0x0002e404) cell_ituss_key_pane_g2

0x0001,

0xfed9,	// (0x0002ef8e) cell_ituss_key_pane_g_ParamLimits

0xfed9,	// (0x0002ef8e) cell_ituss_key_pane_g

0xf381,	// (0x0002e436) cell_ituss_key_t1_ParamLimits

0xf381,	// (0x0002e436) cell_ituss_key_t1

0xf3bf,	// (0x0002e474) cell_ituss_key_t2_ParamLimits

0xf3bf,	// (0x0002e474) cell_ituss_key_t2

0xf3f0,	// (0x0002e4a5) cell_ituss_key_t3_ParamLimits

0xf3f0,	// (0x0002e4a5) cell_ituss_key_t3

0xf421,	// (0x0002e4d6) cell_ituss_key_t4_ParamLimits

0xf421,	// (0x0002e4d6) cell_ituss_key_t4

0x0003,

0xfede,	// (0x0002ef93) cell_ituss_key_t_ParamLimits

0xfede,	// (0x0002ef93) cell_ituss_key_t

0xf452,	// (0x0002e507) cell_vkbss_key_3p_pane_g1

0xf45a,	// (0x0002e50f) cell_vkbss_key_3p_pane_g2

0xf462,	// (0x0002e517) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee7,	// (0x0002ef9c) cell_vkbss_key_3p_pane_g

0x0a82,	// (0x0001fb37) bg_popup_fep_char_preview_window_cp02

0xf46a,	// (0x0002e51f) popup_fep_char_pre_window_t1

0xe6ee,	// (0x0002d7a3) main_ai5_sk_pane

0xee3e,	// (0x0002def3) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee4a,	// (0x0002deff) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xee5e,	// (0x0002df13) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xee6a,	// (0x0002df1f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebd,	// (0x0002ef72) cell_contacts_ai5_widget_pane_g_ParamLimits

0xee7d,	// (0x0002df32) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2c78,	// (0x00021d2d) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf479,	// (0x0002e52e) main_ai5_sk_pane_g1

0x99ca,	// (0x00028a7f) popup_query_code_window_g1

0x951f,	// (0x000285d4) popup_fep_vkb_icf_pane

0x9535,	// (0x000285ea) popup_fep_vtchi_icf_pane

0x2c78,	// (0x00021d2d) bg_icf_pane

0xf482,	// (0x0002e537) list_vkb_icf_pane

0x2c78,	// (0x00021d2d) bg_icf_pane_cp01

0xf48e,	// (0x0002e543) vtchi_icf_list_pane

0xf49f,	// (0x0002e554) list_vkb_icf_pane_t1_ParamLimits

0xf49f,	// (0x0002e554) list_vkb_icf_pane_t1

0xf4b5,	// (0x0002e56a) vtchi_icf_list_pane_t1_ParamLimits

0xf4b5,	// (0x0002e56a) vtchi_icf_list_pane_t1

0x9509,	// (0x000285be) popup_fep_ituss_window_ParamLimits

0x9535,	// (0x000285ea) popup_fep_vtchi_icf_pane_ParamLimits

0xf2b4,	// (0x0002e369) ituss_keypad_pane_ParamLimits

0x954b,	// (0x00028600) ituss_sks_pane

0x2c78,	// (0x00021d2d) bg_icf_pane_ParamLimits

0x94f2,	// (0x000285a7) icf_edit_indi_pane_ParamLimits

0x94f2,	// (0x000285a7) icf_edit_indi_pane

0xf482,	// (0x0002e537) list_vkb_icf_pane_ParamLimits

0x2c78,	// (0x00021d2d) bg_icf_pane_cp01_ParamLimits

0x94f2,	// (0x000285a7) icf_edit_indi_pane_cp01_ParamLimits

0x94f2,	// (0x000285a7) icf_edit_indi_pane_cp01

0xf496,	// (0x0002e54b) vtchi_query_pane

0xbde6,	// (0x0002ae9b) icf_edit_indi_pane_g1_ParamLimits

0xbde6,	// (0x0002ae9b) icf_edit_indi_pane_g1

0xf537,	// (0x0002e5ec) icf_edit_indi_pane_g2_ParamLimits

0xf537,	// (0x0002e5ec) icf_edit_indi_pane_g2

0x0001,

0xfeff,	// (0x0002efb4) icf_edit_indi_pane_g_ParamLimits

0xfeff,	// (0x0002efb4) icf_edit_indi_pane_g

0xf546,	// (0x0002e5fb) icf_edit_indi_pane_t1

0xf4cd,	// (0x0002e582) bg_input_focus_pane_cp042

0x2b2b,	// (0x00021be0) vtchi_button_pane

0xf4d6,	// (0x0002e58b) vtchi_query_pane_t1

0xf4e4,	// (0x0002e599) vtchi_query_pane_t2

0xf4f2,	// (0x0002e5a7) vtchi_query_pane_t3

0x0002,

0xfeee,	// (0x0002efa3) vtchi_query_pane_t

0x0a82,	// (0x0001fb37) bg_button_pane_cp13

0xf500,	// (0x0002e5b5) vtchi_button_pane_g1

0xf508,	// (0x0002e5bd) ituss_sks_pane_g1

0xf513,	// (0x0002e5c8) ituss_sks_pane_g2

0x0001,

0xfef5,	// (0x0002efaa) ituss_sks_pane_g

0xf51b,	// (0x0002e5d0) ituss_sks_pane_t1

0xf529,	// (0x0002e5de) ituss_sks_pane_t2

0x0001,

0xfefa,	// (0x0002efaf) ituss_sks_pane_t

0xb61b,	// (0x0002a6d0) indicator_nsta_pane_cp_g1

0xb624,	// (0x0002a6d9) indicator_nsta_pane_cp_g2

0xb62c,	// (0x0002a6e1) indicator_nsta_pane_cp_g3

0xb634,	// (0x0002a6e9) indicator_nsta_pane_cp_g4

0xb63c,	// (0x0002a6f1) indicator_nsta_pane_cp_g5

0xb644,	// (0x0002a6f9) indicator_nsta_pane_cp_g6

0x0005,

0xfaa7,	// (0x0002eb5c) indicator_nsta_pane_cp_g

0xddb8,	// (0x0002ce6d) cell_graphic2_pane_t2_ParamLimits

0xddb8,	// (0x0002ce6d) cell_graphic2_pane_t2

0x0001,

0xfdb4,	// (0x0002ee69) cell_graphic2_pane_t_ParamLimits

0xfdb4,	// (0x0002ee69) cell_graphic2_pane_t

0xdde5,	// (0x0002ce9a) cell_graphic2_control_pane_t1

0x6d3b,	// (0x00025df0) signal_pane_g3_ParamLimits

0x6d3b,	// (0x00025df0) signal_pane_g3

0x6d4d,	// (0x00025e02) signal_pane_g4_ParamLimits

0x6d4d,	// (0x00025e02) signal_pane_g4

0xf28e,	// (0x0002e343) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf28e,	// (0x0002e343) cell_ai5_widget_list_row_pane_t3

0xf36f,	// (0x0002e424) cell_ituss_key_pane_t1_ParamLimits

0xf36f,	// (0x0002e424) cell_ituss_key_pane_t1

0x9647,	// (0x000286fc) form_field_data_wide_pane_vc_t2_ParamLimits

0x9647,	// (0x000286fc) form_field_data_wide_pane_vc_t2

0x965b,	// (0x00028710) form_field_data_wide_pane_vc_t3_ParamLimits

0x965b,	// (0x00028710) form_field_data_wide_pane_vc_t3

0x0002,

0xf80a,	// (0x0002e8bf) form_field_data_wide_pane_vc_t_ParamLimits

0xf80a,	// (0x0002e8bf) form_field_data_wide_pane_vc_t

0xb2c6,	// (0x0002a37b) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb2c6,	// (0x0002a37b) form_field_slider_wide_pane_vc_t3

0xb39c,	// (0x0002a451) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb39c,	// (0x0002a451) form_field_popup_wide_pane_vc_t2

0xb3b3,	// (0x0002a468) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb3b3,	// (0x0002a468) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa96,	// (0x0002eb4b) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa96,	// (0x0002eb4b) form_field_popup_wide_pane_vc_t

0x9403,	// (0x000284b8) aid_fshwr2_btn_pane_ParamLimits

0x940f,	// (0x000284c4) aid_fshwr2_syb_pane_ParamLimits

0x9420,	// (0x000284d5) aid_fshwr2_txt_pane_ParamLimits

0x2c78,	// (0x00021d2d) fshwr2_bg_pane_ParamLimits

0x942c,	// (0x000284e1) fshwr2_func_candi_pane_ParamLimits

0x9440,	// (0x000284f5) fshwr2_hwr_syb_pane_ParamLimits

0x9453,	// (0x00028508) fshwr2_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Small
