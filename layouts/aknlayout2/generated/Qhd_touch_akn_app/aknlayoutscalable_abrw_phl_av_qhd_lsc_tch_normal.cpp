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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000f437 };

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
0xbd8e,	// (0x0001b1c5) Screen

0xbd9a,	// (0x0001b1d1) application_window_ParamLimits

0xbd9a,	// (0x0001b1d1) application_window

0x1dba,	// (0x000111f1) screen_g1

0xb485,	// (0x0001a8bc) area_bottom_pane_ParamLimits

0xb485,	// (0x0001a8bc) area_bottom_pane

0x027c,	// (0x0000f6b3) area_top_pane_ParamLimits

0x027c,	// (0x0000f6b3) area_top_pane

0x031a,	// (0x0000f751) main_pane_ParamLimits

0x031a,	// (0x0000f751) main_pane

0x1dc4,	// (0x000111fb) misc_graphics

0xd1cc,	// (0x0001c603) battery_pane_ParamLimits

0xd1cc,	// (0x0001c603) battery_pane

0x524a,	// (0x00014681) bg_status_flat_pane_g8

0x5252,	// (0x00014689) bg_status_flat_pane_g9

0x4557,	// (0x0001398e) context_pane_ParamLimits

0x4557,	// (0x0001398e) context_pane

0xd337,	// (0x0001c76e) navi_pane_ParamLimits

0xd337,	// (0x0001c76e) navi_pane

0xd3ae,	// (0x0001c7e5) signal_pane_ParamLimits

0xd3ae,	// (0x0001c7e5) signal_pane

0x0008,

0xf880,	// (0x0001ecb7) bg_status_flat_pane_g

0xd43e,	// (0x0001c875) status_pane_g1_ParamLimits

0xd43e,	// (0x0001c875) status_pane_g1

0xd454,	// (0x0001c88b) status_pane_g2_ParamLimits

0xd454,	// (0x0001c88b) status_pane_g2

0x4777,	// (0x00013bae) status_pane_g3_ParamLimits

0x4777,	// (0x00013bae) status_pane_g3

0x0004,

0xf7b3,	// (0x0001ebea) status_pane_g_ParamLimits

0xf7b3,	// (0x0001ebea) status_pane_g

0xd460,	// (0x0001c897) title_pane_ParamLimits

0xd460,	// (0x0001c897) title_pane

0xd4c1,	// (0x0001c8f8) uni_indicator_pane_ParamLimits

0xd4c1,	// (0x0001c8f8) uni_indicator_pane

0x3e02,	// (0x00013239) bg_list_pane_ParamLimits

0x3e02,	// (0x00013239) bg_list_pane

0xcaa8,	// (0x0001bedf) find_pane

0xcab0,	// (0x0001bee7) listscroll_app_pane_ParamLimits

0xcab0,	// (0x0001bee7) listscroll_app_pane

0x3e36,	// (0x0001326d) listscroll_form_pane

0xcabc,	// (0x0001bef3) listscroll_gen_pane_ParamLimits

0xcabc,	// (0x0001bef3) listscroll_gen_pane

0x3e36,	// (0x0001326d) listscroll_set_pane

0x5e0f,	// (0x00015246) main_idle_act_pane

0x3ada,	// (0x00012f11) main_idle_trad_pane

0x3ada,	// (0x00012f11) main_list_empty_pane

0x3e64,	// (0x0001329b) main_midp_pane

0x3e70,	// (0x000132a7) main_pane_g1_ParamLimits

0x3e70,	// (0x000132a7) main_pane_g1

0xcad0,	// (0x0001bf07) popup_ai_message_window_ParamLimits

0xcad0,	// (0x0001bf07) popup_ai_message_window

0xcb61,	// (0x0001bf98) popup_fep_china_uni_window_ParamLimits

0xcb61,	// (0x0001bf98) popup_fep_china_uni_window

0x3f84,	// (0x000133bb) popup_fep_japan_candidate_window_ParamLimits

0x3f84,	// (0x000133bb) popup_fep_japan_candidate_window

0x3fa4,	// (0x000133db) popup_fep_japan_predictive_window_ParamLimits

0x3fa4,	// (0x000133db) popup_fep_japan_predictive_window

0xcbbd,	// (0x0001bff4) popup_find_window

0xcbda,	// (0x0001c011) popup_grid_graphic_window_ParamLimits

0xcbda,	// (0x0001c011) popup_grid_graphic_window

0x4009,	// (0x00013440) popup_large_graphic_colour_window

0xcc72,	// (0x0001c0a9) popup_menu_window_ParamLimits

0xcc72,	// (0x0001c0a9) popup_menu_window

0xce2c,	// (0x0001c263) popup_note_image_window

0xcdf2,	// (0x0001c229) popup_note_wait_window_ParamLimits

0xcdf2,	// (0x0001c229) popup_note_wait_window

0xce44,	// (0x0001c27b) popup_note_window_ParamLimits

0xce44,	// (0x0001c27b) popup_note_window

0xceea,	// (0x0001c321) popup_query_code_window_ParamLimits

0xceea,	// (0x0001c321) popup_query_code_window

0x4251,	// (0x00013688) popup_query_data_code_window_ParamLimits

0x4251,	// (0x00013688) popup_query_data_code_window

0xcf24,	// (0x0001c35b) popup_query_data_window_ParamLimits

0xcf24,	// (0x0001c35b) popup_query_data_window

0xcf9a,	// (0x0001c3d1) popup_query_sat_info_window_ParamLimits

0xcf9a,	// (0x0001c3d1) popup_query_sat_info_window

0xd031,	// (0x0001c468) popup_snote_single_graphic_window_ParamLimits

0xd031,	// (0x0001c468) popup_snote_single_graphic_window

0xd031,	// (0x0001c468) popup_snote_single_text_window_ParamLimits

0xd031,	// (0x0001c468) popup_snote_single_text_window

0x42d8,	// (0x0001370f) popup_sub_window_general

0x4408,	// (0x0001383f) popup_window_general_ParamLimits

0x4408,	// (0x0001383f) popup_window_general

0x441d,	// (0x00013854) power_save_pane

0xb607,	// (0x0001aa3e) control_pane_g1_ParamLimits

0xb607,	// (0x0001aa3e) control_pane_g1

0x0aa2,	// (0x0000fed9) control_pane_g2_ParamLimits

0x0aa2,	// (0x0000fed9) control_pane_g2

0x3da3,	// (0x000131da) control_pane_g3_ParamLimits

0x3da3,	// (0x000131da) control_pane_g3

0x0007,

0xf79b,	// (0x0001ebd2) control_pane_g_ParamLimits

0xf79b,	// (0x0001ebd2) control_pane_g

0xb646,	// (0x0001aa7d) control_pane_t1_ParamLimits

0xb646,	// (0x0001aa7d) control_pane_t1

0xb6a4,	// (0x0001aadb) control_pane_t2_ParamLimits

0xb6a4,	// (0x0001aadb) control_pane_t2

0x0002,

0xf7ac,	// (0x0001ebe3) control_pane_t_ParamLimits

0xf7ac,	// (0x0001ebe3) control_pane_t

0x3cc4,	// (0x000130fb) navi_navi_volume_pane_cp1

0x3ccd,	// (0x00013104) status_small_icon_pane

0x3cd5,	// (0x0001310c) status_small_pane_g1_ParamLimits

0x3cd5,	// (0x0001310c) status_small_pane_g1

0x3d09,	// (0x00013140) status_small_pane_g2_ParamLimits

0x3d09,	// (0x00013140) status_small_pane_g2

0x3d15,	// (0x0001314c) status_small_pane_g3_ParamLimits

0x3d15,	// (0x0001314c) status_small_pane_g3

0x3d21,	// (0x00013158) status_small_pane_g4_ParamLimits

0x3d21,	// (0x00013158) status_small_pane_g4

0x3d2d,	// (0x00013164) status_small_pane_g5_ParamLimits

0x3d2d,	// (0x00013164) status_small_pane_g5

0x3d3c,	// (0x00013173) status_small_pane_g6_ParamLimits

0x3d3c,	// (0x00013173) status_small_pane_g6

0x0007,

0xf78a,	// (0x0001ebc1) status_small_pane_g_ParamLimits

0xf78a,	// (0x0001ebc1) status_small_pane_g

0x3d6c,	// (0x000131a3) status_small_pane_t1

0x3d8f,	// (0x000131c6) status_small_wait_pane_ParamLimits

0x3d8f,	// (0x000131c6) status_small_wait_pane

0xc860,	// (0x0001bc97) aid_levels_signal_ParamLimits

0xc860,	// (0x0001bc97) aid_levels_signal

0xc878,	// (0x0001bcaf) signal_pane_g1_ParamLimits

0xc878,	// (0x0001bcaf) signal_pane_g1

0xc893,	// (0x0001bcca) signal_pane_g2_ParamLimits

0xc893,	// (0x0001bcca) signal_pane_g2

0x0001,

0xf71f,	// (0x0001eb56) signal_pane_g_ParamLimits

0xf71f,	// (0x0001eb56) signal_pane_g

0x352a,	// (0x00012961) context_pane_g1

0xbdaa,	// (0x0001b1e1) title_pane_g1

0xbddf,	// (0x0001b216) title_pane_t1

0x1e6c,	// (0x000112a3) title_pane_t2

0x1e92,	// (0x000112c9) title_pane_t3

0x0002,

0xf573,	// (0x0001e9aa) title_pane_t

0xd4e9,	// (0x0001c920) aid_levels_battery_ParamLimits

0xd4e9,	// (0x0001c920) aid_levels_battery

0xd505,	// (0x0001c93c) battery_pane_g1_ParamLimits

0xd505,	// (0x0001c93c) battery_pane_g1

0xd522,	// (0x0001c959) battery_pane_g2_ParamLimits

0xd522,	// (0x0001c959) battery_pane_g2

0x0001,

0xf7be,	// (0x0001ebf5) battery_pane_g_ParamLimits

0xf7be,	// (0x0001ebf5) battery_pane_g

0xd740,	// (0x0001cb77) uni_indicator_pane_g1

0xd755,	// (0x0001cb8c) uni_indicator_pane_g2

0xd76a,	// (0x0001cba1) uni_indicator_pane_g3

0x0005,

0xf928,	// (0x0001ed5f) uni_indicator_pane_g

0x394c,	// (0x00012d83) navi_icon_pane_ParamLimits

0x394c,	// (0x00012d83) navi_icon_pane

0x3895,	// (0x00012ccc) navi_midp_pane

0x3968,	// (0x00012d9f) navi_navi_pane

0x3972,	// (0x00012da9) navi_text_pane_ParamLimits

0x3972,	// (0x00012da9) navi_text_pane

0x1dba,	// (0x000111f1) status_small_wait_pane_g1

0x22db,	// (0x00011712) status_small_wait_pane_g2

0x0001,

0xf923,	// (0x0001ed5a) status_small_wait_pane_g

0x58ab,	// (0x00014ce2) navi_navi_icon_text_pane

0x58b3,	// (0x00014cea) navi_navi_pane_g1_ParamLimits

0x58b3,	// (0x00014cea) navi_navi_pane_g1

0x58c5,	// (0x00014cfc) navi_navi_pane_g2_ParamLimits

0x58c5,	// (0x00014cfc) navi_navi_pane_g2

0x0001,

0xf8f1,	// (0x0001ed28) navi_navi_pane_g_ParamLimits

0xf8f1,	// (0x0001ed28) navi_navi_pane_g

0x58d7,	// (0x00014d0e) navi_navi_tabs_pane

0x58e0,	// (0x00014d17) navi_navi_text_pane

0x58ab,	// (0x00014ce2) navi_navi_volume_pane

0xd701,	// (0x0001cb38) navi_text_pane_t1

0xd6f5,	// (0x0001cb2c) navi_icon_pane_g1

0x57c8,	// (0x00014bff) navi_navi_text_pane_t1

0xb8f1,	// (0x0001ad28) navi_navi_volume_pane_g1

0xb8f9,	// (0x0001ad30) volume_small_pane

0xd651,	// (0x0001ca88) navi_navi_icon_text_pane_g1

0xd659,	// (0x0001ca90) navi_navi_icon_text_pane_t1

0x3968,	// (0x00012d9f) navi_tabs_2_long_pane

0x3968,	// (0x00012d9f) navi_tabs_2_pane

0x3968,	// (0x00012d9f) navi_tabs_3_long_pane

0x3968,	// (0x00012d9f) navi_tabs_3_pane

0x3968,	// (0x00012d9f) navi_tabs_4_pane

0xb8d1,	// (0x0001ad08) tabs_2_active_pane_ParamLimits

0xb8d1,	// (0x0001ad08) tabs_2_active_pane

0xb8e1,	// (0x0001ad18) tabs_2_passive_pane_ParamLimits

0xb8e1,	// (0x0001ad18) tabs_2_passive_pane

0xb89f,	// (0x0001acd6) tabs_3_active_pane_ParamLimits

0xb89f,	// (0x0001acd6) tabs_3_active_pane

0xb8af,	// (0x0001ace6) tabs_3_passive_pane_ParamLimits

0xb8af,	// (0x0001ace6) tabs_3_passive_pane

0xb8c0,	// (0x0001acf7) tabs_3_passive_pane_cp_ParamLimits

0xb8c0,	// (0x0001acf7) tabs_3_passive_pane_cp

0xb85b,	// (0x0001ac92) tabs_4_active_pane_ParamLimits

0xb85b,	// (0x0001ac92) tabs_4_active_pane

0xb86c,	// (0x0001aca3) tabs_4_passive_pane_ParamLimits

0xb86c,	// (0x0001aca3) tabs_4_passive_pane

0xb87d,	// (0x0001acb4) tabs_4_passive_pane_cp_ParamLimits

0xb87d,	// (0x0001acb4) tabs_4_passive_pane_cp

0xb88e,	// (0x0001acc5) tabs_4_passive_pane_cp2_ParamLimits

0xb88e,	// (0x0001acc5) tabs_4_passive_pane_cp2

0xb83b,	// (0x0001ac72) tabs_2_long_active_pane_ParamLimits

0xb83b,	// (0x0001ac72) tabs_2_long_active_pane

0xb84b,	// (0x0001ac82) tabs_2_long_passive_pane_ParamLimits

0xb84b,	// (0x0001ac82) tabs_2_long_passive_pane

0xb808,	// (0x0001ac3f) tabs_3_long_active_pane_ParamLimits

0xb808,	// (0x0001ac3f) tabs_3_long_active_pane

0xb819,	// (0x0001ac50) tabs_3_long_passive_pane_ParamLimits

0xb819,	// (0x0001ac50) tabs_3_long_passive_pane

0xb82a,	// (0x0001ac61) tabs_3_long_passive_pane_cp_ParamLimits

0xb82a,	// (0x0001ac61) tabs_3_long_passive_pane_cp

0x0d7e,	// (0x000101b5) volume_small_pane_g1

0xb7b7,	// (0x0001abee) volume_small_pane_g2

0xb7c0,	// (0x0001abf7) volume_small_pane_g3

0xb7c9,	// (0x0001ac00) volume_small_pane_g4

0xb7d2,	// (0x0001ac09) volume_small_pane_g5

0xb7db,	// (0x0001ac12) volume_small_pane_g6

0xb7e4,	// (0x0001ac1b) volume_small_pane_g7

0xb7ed,	// (0x0001ac24) volume_small_pane_g8

0xb7f6,	// (0x0001ac2d) volume_small_pane_g9

0xb7ff,	// (0x0001ac36) volume_small_pane_g10

0x0009,

0xf8bd,	// (0x0001ecf4) volume_small_pane_g

0x2139,	// (0x00011570) bg_active_tab_pane_cp2_ParamLimits

0x2139,	// (0x00011570) bg_active_tab_pane_cp2

0xbe6b,	// (0x0001b2a2) tabs_3_active_pane_g1

0xbe73,	// (0x0001b2aa) tabs_3_active_pane_t1

0x2139,	// (0x00011570) bg_passive_tab_pane_cp2_ParamLimits

0x2139,	// (0x00011570) bg_passive_tab_pane_cp2

0xbe6b,	// (0x0001b2a2) tabs_3_passive_pane_g1

0xbe73,	// (0x0001b2aa) tabs_3_passive_pane_t1

0x2139,	// (0x00011570) bg_active_tab_pane_cp3_ParamLimits

0x2139,	// (0x00011570) bg_active_tab_pane_cp3

0xbe85,	// (0x0001b2bc) tabs_4_active_pane_g1

0xbe8d,	// (0x0001b2c4) tabs_4_active_pane_t1

0x2139,	// (0x00011570) bg_passive_tab_pane_cp3_ParamLimits

0x2139,	// (0x00011570) bg_passive_tab_pane_cp3

0xbe85,	// (0x0001b2bc) tabs_4_1_passive_pane_g1

0xbe8d,	// (0x0001b2c4) tabs_4_1_passive_pane_t1

0x3e64,	// (0x0001329b) list_highlight_pane_cp2

0xd805,	// (0x0001cc3c) list_set_pane_ParamLimits

0xd805,	// (0x0001cc3c) list_set_pane

0xd89f,	// (0x0001ccd6) main_pane_set_t1_ParamLimits

0xd89f,	// (0x0001ccd6) main_pane_set_t1

0xd8bf,	// (0x0001ccf6) main_pane_set_t2_ParamLimits

0xd8bf,	// (0x0001ccf6) main_pane_set_t2

0xd8d3,	// (0x0001cd0a) main_pane_set_t3_ParamLimits

0xd8d3,	// (0x0001cd0a) main_pane_set_t3

0xd8e5,	// (0x0001cd1c) main_pane_set_t4_ParamLimits

0xd8e5,	// (0x0001cd1c) main_pane_set_t4

0x0003,

0xf98d,	// (0x0001edc4) main_pane_set_t_ParamLimits

0xf98d,	// (0x0001edc4) main_pane_set_t

0xd8f7,	// (0x0001cd2e) setting_code_pane

0xd901,	// (0x0001cd38) setting_slider_graphic_pane

0xd901,	// (0x0001cd38) setting_slider_pane

0xd901,	// (0x0001cd38) setting_text_pane

0xd901,	// (0x0001cd38) setting_volume_pane

0x055f,	// (0x0000f996) volume_set_pane

0x1ea4,	// (0x000112db) bg_set_opt_pane_cp

0x0567,	// (0x0000f99e) setting_slider_pane_t1

0x0580,	// (0x0000f9b7) setting_slider_pane_t2

0x059a,	// (0x0000f9d1) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0001e9b1) setting_slider_pane_t

0x05b2,	// (0x0000f9e9) slider_set_pane

0x1dc4,	// (0x000111fb) bg_set_opt_pane_cp2

0x1ee6,	// (0x0001131d) setting_slider_graphic_pane_g1

0x05c8,	// (0x0000f9ff) setting_slider_graphic_pane_t1

0x05d8,	// (0x0000fa0f) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0001e9b8) setting_slider_graphic_pane_t

0x05e8,	// (0x0000fa1f) slider_set_pane_cp

0x1dc4,	// (0x000111fb) input_focus_pane_cp1

0x5df6,	// (0x0001522d) list_set_text_pane

0x1dba,	// (0x000111f1) setting_text_pane_g1

0x1dc4,	// (0x000111fb) input_focus_pane_cp2

0x1dba,	// (0x000111f1) setting_code_pane_g1

0x1eef,	// (0x00011326) setting_code_pane_t1

0x1efd,	// (0x00011334) set_text_pane_t1_ParamLimits

0x1efd,	// (0x00011334) set_text_pane_t1

0x2dc3,	// (0x000121fa) set_opt_bg_pane_g1

0x2dcb,	// (0x00012202) set_opt_bg_pane_g2

0x5dd0,	// (0x00015207) set_opt_bg_pane_g3

0x2ddb,	// (0x00012212) set_opt_bg_pane_g4

0x2de3,	// (0x0001221a) set_opt_bg_pane_g5

0x2deb,	// (0x00012222) set_opt_bg_pane_g6

0x5dda,	// (0x00015211) set_opt_bg_pane_g7

0x5de2,	// (0x00015219) set_opt_bg_pane_g8

0x5dec,	// (0x00015223) set_opt_bg_pane_g9

0x0008,

0xf97a,	// (0x0001edb1) set_opt_bg_pane_g

0x5dc3,	// (0x000151fa) slider_set_pane_g1

0x0f46,	// (0x0001037d) slider_set_pane_g2

0x0006,

0xf96b,	// (0x0001eda2) slider_set_pane_g

0x0ee2,	// (0x00010319) volume_set_pane_g1

0x0eea,	// (0x00010321) volume_set_pane_g2

0x0ef2,	// (0x00010329) volume_set_pane_g3

0x0efa,	// (0x00010331) volume_set_pane_g4

0x0f02,	// (0x00010339) volume_set_pane_g5

0x0f0a,	// (0x00010341) volume_set_pane_g6

0x0f12,	// (0x00010349) volume_set_pane_g7

0x0f1a,	// (0x00010351) volume_set_pane_g8

0x0f22,	// (0x00010359) volume_set_pane_g9

0x0f2a,	// (0x00010361) volume_set_pane_g10

0x0009,

0xf943,	// (0x0001ed7a) volume_set_pane_g

0xbe9f,	// (0x0001b2d6) indicator_pane_ParamLimits

0xbe9f,	// (0x0001b2d6) indicator_pane

0xbec7,	// (0x0001b2fe) main_idle_pane_g2_ParamLimits

0xbec7,	// (0x0001b2fe) main_idle_pane_g2

0xbeff,	// (0x0001b336) main_pane_idle_g1_ParamLimits

0xbeff,	// (0x0001b336) main_pane_idle_g1

0x1f58,	// (0x0001138f) popup_clock_digital_analogue_window_ParamLimits

0x1f58,	// (0x0001138f) popup_clock_digital_analogue_window

0xbf26,	// (0x0001b35d) soft_indicator_pane_ParamLimits

0xbf26,	// (0x0001b35d) soft_indicator_pane

0xbf40,	// (0x0001b377) wallpaper_pane_ParamLimits

0xbf40,	// (0x0001b377) wallpaper_pane

0x1dba,	// (0x000111f1) wallpaper_pane_g1

0xbf52,	// (0x0001b389) indicator_pane_g1_ParamLimits

0xbf52,	// (0x0001b389) indicator_pane_g1

0x629d,	// (0x000156d4) navi_navi_icon_text_pane_srt_g1

0x1faa,	// (0x000113e1) soft_indicator_pane_t1

0x1fc4,	// (0x000113fb) aid_ps_area_pane

0xbf68,	// (0x0001b39f) aid_ps_clock_pane

0x1fe3,	// (0x0001141a) aid_ps_indicator_pane

0x1fef,	// (0x00011426) indicator_ps_pane_ParamLimits

0x1fef,	// (0x00011426) indicator_ps_pane

0x1ffe,	// (0x00011435) power_save_pane_g1_ParamLimits

0x1ffe,	// (0x00011435) power_save_pane_g1

0x200a,	// (0x00011441) power_save_pane_g2_ParamLimits

0x200a,	// (0x00011441) power_save_pane_g2

0x0170,	// (0x0000f5a7) aid_navinavi_width_pane

0x1fc4,	// (0x000113fb) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0001e9bd) power_save_pane_g_ParamLimits

0xf586,	// (0x0001e9bd) power_save_pane_g

0x2018,	// (0x0001144f) power_save_pane_t1_ParamLimits

0x2018,	// (0x0001144f) power_save_pane_t1

0xbf68,	// (0x0001b39f) aid_ps_clock_pane_ParamLimits

0x1fe3,	// (0x0001141a) aid_ps_indicator_pane_ParamLimits

0x202a,	// (0x00011461) power_save_pane_t4_ParamLimits

0x202a,	// (0x00011461) power_save_pane_t4

0x0001,

0xf58b,	// (0x0001e9c2) power_save_pane_t_ParamLimits

0xf58b,	// (0x0001e9c2) power_save_pane_t

0x2054,	// (0x0001148b) power_save_t3_ParamLimits

0x2054,	// (0x0001148b) power_save_t3

0x203f,	// (0x00011476) power_save_t2_ParamLimits

0x203f,	// (0x00011476) power_save_t2

0x2069,	// (0x000114a0) indicator_ps_pane_g1

0xbf76,	// (0x0001b3ad) ai_gene_pane_ParamLimits

0xbf76,	// (0x0001b3ad) ai_gene_pane

0xbf8d,	// (0x0001b3c4) ai_links_pane_ParamLimits

0xbf8d,	// (0x0001b3c4) ai_links_pane

0xbfa5,	// (0x0001b3dc) indicator_pane_cp1_ParamLimits

0xbfa5,	// (0x0001b3dc) indicator_pane_cp1

0xbfb4,	// (0x0001b3eb) main_pane_idle_g1_cp_ParamLimits

0xbfb4,	// (0x0001b3eb) main_pane_idle_g1_cp

0x20a2,	// (0x000114d9) popup_ai_links_title_window

0xbfcc,	// (0x0001b403) soft_indicator_pane_cp1_ParamLimits

0xbfcc,	// (0x0001b403) soft_indicator_pane_cp1

0x5b74,	// (0x00014fab) ai_links_pane_g1

0x5b7d,	// (0x00014fb4) grid_ai_links_pane

0xd737,	// (0x0001cb6e) ai_gene_pane_1

0x5b62,	// (0x00014f99) ai_gene_pane_2

0x5b6b,	// (0x00014fa2) list_highlight_pane_cp4

0xd713,	// (0x0001cb4a) cell_ai_link_pane_ParamLimits

0xd713,	// (0x0001cb4a) cell_ai_link_pane

0x5b33,	// (0x00014f6a) cell_ai_link_pane_g1

0x22db,	// (0x00011712) cell_ai_link_pane_g2

0x0001,

0xf91e,	// (0x0001ed55) cell_ai_link_pane_g

0x1dc4,	// (0x000111fb) grid_highlight_cp2

0x1dc4,	// (0x000111fb) bg_popup_sub_pane_cp1

0x20c5,	// (0x000114fc) popup_ai_links_title_window_t1

0x5a81,	// (0x00014eb8) ai_gene_pane_1_g1_ParamLimits

0x5a81,	// (0x00014eb8) ai_gene_pane_1_g1

0x5a8d,	// (0x00014ec4) ai_gene_pane_1_g2_ParamLimits

0x5a8d,	// (0x00014ec4) ai_gene_pane_1_g2

0x0001,

0xf914,	// (0x0001ed4b) ai_gene_pane_1_g_ParamLimits

0xf914,	// (0x0001ed4b) ai_gene_pane_1_g

0x5a9a,	// (0x00014ed1) ai_gene_pane_1_t1_ParamLimits

0x5a9a,	// (0x00014ed1) ai_gene_pane_1_t1

0x5ace,	// (0x00014f05) grid_ai_soft_ind_pane

0x5a6c,	// (0x00014ea3) ai_gene_pane_2_t1_ParamLimits

0x5a6c,	// (0x00014ea3) ai_gene_pane_2_t1

0xbfe0,	// (0x0001b417) main_pane_empty_t1_ParamLimits

0xbfe0,	// (0x0001b417) main_pane_empty_t1

0xbff8,	// (0x0001b42f) main_pane_empty_t2_ParamLimits

0xbff8,	// (0x0001b42f) main_pane_empty_t2

0xc00d,	// (0x0001b444) main_pane_empty_t3_ParamLimits

0xc00d,	// (0x0001b444) main_pane_empty_t3

0xc01f,	// (0x0001b456) main_pane_empty_t4_ParamLimits

0xc01f,	// (0x0001b456) main_pane_empty_t4

0xc031,	// (0x0001b468) main_pane_empty_t5_ParamLimits

0xc031,	// (0x0001b468) main_pane_empty_t5

0x0004,

0xf590,	// (0x0001e9c7) main_pane_empty_t_ParamLimits

0xf590,	// (0x0001e9c7) main_pane_empty_t

0x2ec0,	// (0x000122f7) bg_popup_window_pane_ParamLimits

0x2ec0,	// (0x000122f7) bg_popup_window_pane

0x57d6,	// (0x00014c0d) find_popup_pane_cp2_ParamLimits

0x57d6,	// (0x00014c0d) find_popup_pane_cp2

0x57e2,	// (0x00014c19) heading_pane_ParamLimits

0x57e2,	// (0x00014c19) heading_pane

0x1dc4,	// (0x000111fb) bg_popup_sub_pane

0xd676,	// (0x0001caad) bg_popup_window_pane_g1_ParamLimits

0xd676,	// (0x0001caad) bg_popup_window_pane_g1

0xd685,	// (0x0001cabc) bg_popup_window_pane_g2_ParamLimits

0xd685,	// (0x0001cabc) bg_popup_window_pane_g2

0xd691,	// (0x0001cac8) bg_popup_window_pane_g3_ParamLimits

0xd691,	// (0x0001cac8) bg_popup_window_pane_g3

0xd69d,	// (0x0001cad4) bg_popup_window_pane_g4_ParamLimits

0xd69d,	// (0x0001cad4) bg_popup_window_pane_g4

0xd6ac,	// (0x0001cae3) bg_popup_window_pane_g5_ParamLimits

0xd6ac,	// (0x0001cae3) bg_popup_window_pane_g5

0xd6bc,	// (0x0001caf3) bg_popup_window_pane_g6_ParamLimits

0xd6bc,	// (0x0001caf3) bg_popup_window_pane_g6

0xd6c8,	// (0x0001caff) bg_popup_window_pane_g7_ParamLimits

0xd6c8,	// (0x0001caff) bg_popup_window_pane_g7

0xd6d7,	// (0x0001cb0e) bg_popup_window_pane_g8_ParamLimits

0xd6d7,	// (0x0001cb0e) bg_popup_window_pane_g8

0xd6e6,	// (0x0001cb1d) bg_popup_window_pane_g9_ParamLimits

0xd6e6,	// (0x0001cb1d) bg_popup_window_pane_g9

0x57bc,	// (0x00014bf3) bg_popup_window_pane_g10_ParamLimits

0x57bc,	// (0x00014bf3) bg_popup_window_pane_g10

0x0009,

0xf8dc,	// (0x0001ed13) bg_popup_window_pane_g_ParamLimits

0xf8dc,	// (0x0001ed13) bg_popup_window_pane_g

0x56e5,	// (0x00014b1c) bg_popup_heading_pane_ParamLimits

0x56e5,	// (0x00014b1c) bg_popup_heading_pane

0x0fce,	// (0x00010405) tabs_4_passive_pane_cp_srt_ParamLimits

0x0fce,	// (0x00010405) tabs_4_passive_pane_cp_srt

0x0fe0,	// (0x00010417) tabs_4_passive_pane_srt_ParamLimits

0x56f9,	// (0x00014b30) heading_pane_g2

0x0fe0,	// (0x00010417) tabs_4_passive_pane_srt

0x4a56,	// (0x00013e8d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4a56,	// (0x00013e8d) bg_passive_tab_pane_cp3_srt

0x5701,	// (0x00014b38) heading_pane_t1_ParamLimits

0x5701,	// (0x00014b38) heading_pane_t1

0x5718,	// (0x00014b4f) heading_pane_t2_ParamLimits

0x5718,	// (0x00014b4f) heading_pane_t2

0x0001,

0xf8d7,	// (0x0001ed0e) heading_pane_t_ParamLimits

0xf8d7,	// (0x0001ed0e) heading_pane_t

0x5212,	// (0x00014649) bg_popup_heading_pane_g1

0x52c1,	// (0x000146f8) bg_popup_heading_pane_g2

0x52cb,	// (0x00014702) bg_popup_heading_pane_g3

0x52d5,	// (0x0001470c) bg_popup_heading_pane_g4

0x52df,	// (0x00014716) bg_popup_heading_pane_g5

0x52e9,	// (0x00014720) bg_popup_heading_pane_g6

0x52f1,	// (0x00014728) bg_popup_heading_pane_g7

0x52f9,	// (0x00014730) bg_popup_heading_pane_g8

0x5303,	// (0x0001473a) bg_popup_heading_pane_g9

0x0008,

0xf893,	// (0x0001ecca) bg_popup_heading_pane_g

0x493c,	// (0x00013d73) bg_popup_sub_pane_g1

0x494c,	// (0x00013d83) bg_popup_sub_pane_g2

0x4944,	// (0x00013d7b) bg_popup_sub_pane_g3

0x495c,	// (0x00013d93) bg_popup_sub_pane_g4

0x4954,	// (0x00013d8b) bg_popup_sub_pane_g5

0x4964,	// (0x00013d9b) bg_popup_sub_pane_g6

0x496c,	// (0x00013da3) bg_popup_sub_pane_g7

0x497c,	// (0x00013db3) bg_popup_sub_pane_g8

0x4974,	// (0x00013dab) bg_popup_sub_pane_g9

0x0008,

0xf86d,	// (0x0001eca4) bg_popup_sub_pane_g

0x2139,	// (0x00011570) bg_popup_window_pane_cp5_ParamLimits

0x2139,	// (0x00011570) bg_popup_window_pane_cp5

0x2155,	// (0x0001158c) popup_note_window_g1_ParamLimits

0x2155,	// (0x0001158c) popup_note_window_g1

0x2161,	// (0x00011598) popup_note_window_t1_ParamLimits

0x2161,	// (0x00011598) popup_note_window_t1

0x2177,	// (0x000115ae) popup_note_window_t2_ParamLimits

0x2177,	// (0x000115ae) popup_note_window_t2

0x218d,	// (0x000115c4) popup_note_window_t3_ParamLimits

0x218d,	// (0x000115c4) popup_note_window_t3

0x21a3,	// (0x000115da) popup_note_window_t4_ParamLimits

0x21a3,	// (0x000115da) popup_note_window_t4

0x21cb,	// (0x00011602) popup_note_window_t5_ParamLimits

0x21cb,	// (0x00011602) popup_note_window_t5

0x0004,

0xf59b,	// (0x0001e9d2) popup_note_window_t_ParamLimits

0xf59b,	// (0x0001e9d2) popup_note_window_t

0x21ef,	// (0x00011626) bg_popup_window_pane_cp6_ParamLimits

0x21ef,	// (0x00011626) bg_popup_window_pane_cp6

0x518e,	// (0x000145c5) popup_note_image_window_g1_ParamLimits

0x518e,	// (0x000145c5) popup_note_image_window_g1

0x519a,	// (0x000145d1) popup_note_image_window_g2_ParamLimits

0x519a,	// (0x000145d1) popup_note_image_window_g2

0x0001,

0xf861,	// (0x0001ec98) popup_note_image_window_g_ParamLimits

0xf861,	// (0x0001ec98) popup_note_image_window_g

0x51b3,	// (0x000145ea) popup_note_image_window_t1_ParamLimits

0x51b3,	// (0x000145ea) popup_note_image_window_t1

0x51cc,	// (0x00014603) popup_note_image_window_t2_ParamLimits

0x51cc,	// (0x00014603) popup_note_image_window_t2

0x51e5,	// (0x0001461c) popup_note_image_window_t3_ParamLimits

0x51e5,	// (0x0001461c) popup_note_image_window_t3

0x0002,

0xf866,	// (0x0001ec9d) popup_note_image_window_t_ParamLimits

0xf866,	// (0x0001ec9d) popup_note_image_window_t

0x504f,	// (0x00014486) bg_popup_window_pane_cp7_ParamLimits

0x504f,	// (0x00014486) bg_popup_window_pane_cp7

0x507f,	// (0x000144b6) popup_note_wait_window_g1_ParamLimits

0x507f,	// (0x000144b6) popup_note_wait_window_g1

0x508b,	// (0x000144c2) popup_note_wait_window_g2_ParamLimits

0x508b,	// (0x000144c2) popup_note_wait_window_g2

0x0002,

0xf84f,	// (0x0001ec86) popup_note_wait_window_g_ParamLimits

0xf84f,	// (0x0001ec86) popup_note_wait_window_g

0x50a3,	// (0x000144da) popup_note_wait_window_t1_ParamLimits

0x50a3,	// (0x000144da) popup_note_wait_window_t1

0x50ca,	// (0x00014501) popup_note_wait_window_t2_ParamLimits

0x50ca,	// (0x00014501) popup_note_wait_window_t2

0x50e7,	// (0x0001451e) popup_note_wait_window_t3_ParamLimits

0x50e7,	// (0x0001451e) popup_note_wait_window_t3

0x50fa,	// (0x00014531) popup_note_wait_window_t4_ParamLimits

0x50fa,	// (0x00014531) popup_note_wait_window_t4

0x0004,

0xf856,	// (0x0001ec8d) popup_note_wait_window_t_ParamLimits

0xf856,	// (0x0001ec8d) popup_note_wait_window_t

0x511f,	// (0x00014556) wait_bar_pane_ParamLimits

0x511f,	// (0x00014556) wait_bar_pane

0x1dc4,	// (0x000111fb) wait_anim_pane

0x1dc4,	// (0x000111fb) wait_border_pane

0x1dba,	// (0x000111f1) wait_anim_pane_g1

0x1dba,	// (0x000111f1) wait_anim_pane_g2

0x0001,

0xf71a,	// (0x0001eb51) wait_anim_pane_g

0x4ff3,	// (0x0001442a) wait_border_pane_g1

0x4ffe,	// (0x00014435) wait_border_pane_g2

0x5007,	// (0x0001443e) wait_border_pane_g3

0x0002,

0xf848,	// (0x0001ec7f) wait_border_pane_g

0x4e5e,	// (0x00014295) bg_popup_window_pane_cp16_ParamLimits

0x4e5e,	// (0x00014295) bg_popup_window_pane_cp16

0x4f5e,	// (0x00014395) indicator_popup_pane_cp4_ParamLimits

0x4f5e,	// (0x00014395) indicator_popup_pane_cp4

0x4f72,	// (0x000143a9) popup_query_data_window_t1_ParamLimits

0x4f72,	// (0x000143a9) popup_query_data_window_t1

0x4f84,	// (0x000143bb) popup_query_data_window_t2_ParamLimits

0x4f84,	// (0x000143bb) popup_query_data_window_t2

0x4f9d,	// (0x000143d4) popup_query_data_window_t3_ParamLimits

0x4f9d,	// (0x000143d4) popup_query_data_window_t3

0x0002,

0xf841,	// (0x0001ec78) popup_query_data_window_t_ParamLimits

0xf841,	// (0x0001ec78) popup_query_data_window_t

0x4fb7,	// (0x000143ee) query_popup_data_pane_ParamLimits

0x4fb7,	// (0x000143ee) query_popup_data_pane

0x4fcb,	// (0x00014402) query_popup_data_pane_cp1_ParamLimits

0x4fcb,	// (0x00014402) query_popup_data_pane_cp1

0x4e5e,	// (0x00014295) bg_popup_window_pane_cp10_ParamLimits

0x4e5e,	// (0x00014295) bg_popup_window_pane_cp10

0x4e90,	// (0x000142c7) indicator_popup_pane_ParamLimits

0x4e90,	// (0x000142c7) indicator_popup_pane

0x4eb2,	// (0x000142e9) popup_query_code_window_t1_ParamLimits

0x4eb2,	// (0x000142e9) popup_query_code_window_t1

0x4ecc,	// (0x00014303) popup_query_code_window_t2_ParamLimits

0x4ecc,	// (0x00014303) popup_query_code_window_t2

0x4f15,	// (0x0001434c) popup_query_code_window_t3_ParamLimits

0x4f15,	// (0x0001434c) popup_query_code_window_t3

0x0002,

0xf83a,	// (0x0001ec71) popup_query_code_window_t_ParamLimits

0xf83a,	// (0x0001ec71) popup_query_code_window_t

0x4f44,	// (0x0001437b) query_popup_pane_ParamLimits

0x4f44,	// (0x0001437b) query_popup_pane

0x21ef,	// (0x00011626) bg_popup_window_pane_cp15_ParamLimits

0x21ef,	// (0x00011626) bg_popup_window_pane_cp15

0x220d,	// (0x00011644) indicator_popup_pane_cp1_ParamLimits

0x220d,	// (0x00011644) indicator_popup_pane_cp1

0x2220,	// (0x00011657) indicator_popup_pane_cp2_ParamLimits

0x2220,	// (0x00011657) indicator_popup_pane_cp2

0x2233,	// (0x0001166a) popup_query_data_code_window_g1_ParamLimits

0x2233,	// (0x0001166a) popup_query_data_code_window_g1

0x2246,	// (0x0001167d) popup_query_data_code_window_t1_ParamLimits

0x2246,	// (0x0001167d) popup_query_data_code_window_t1

0x2258,	// (0x0001168f) popup_query_data_code_window_t2_ParamLimits

0x2258,	// (0x0001168f) popup_query_data_code_window_t2

0x226a,	// (0x000116a1) popup_query_data_code_window_t3_ParamLimits

0x226a,	// (0x000116a1) popup_query_data_code_window_t3

0x2280,	// (0x000116b7) popup_query_data_code_window_t4_ParamLimits

0x2280,	// (0x000116b7) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0001e9dd) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0001e9dd) popup_query_data_code_window_t

0x0c8f,	// (0x000100c6) list_single_midp_graphic_pane_g3

0x2298,	// (0x000116cf) query_popup_data_pane_cp2_ParamLimits

0x22ab,	// (0x000116e2) query_popup_pane_cp2_ParamLimits

0x22ab,	// (0x000116e2) query_popup_pane_cp2

0x1dc4,	// (0x000111fb) bg_popup_window_pane_cp11

0x4e56,	// (0x0001428d) heading_pane_cp5

0x2393,	// (0x000117ca) listscroll_popup_info_pane

0x1dc4,	// (0x000111fb) input_focus_pane_cp3

0x22be,	// (0x000116f5) query_popup_pane_t1

0x22cc,	// (0x00011703) list_popup_info_pane_ParamLimits

0x22cc,	// (0x00011703) list_popup_info_pane

0x22db,	// (0x00011712) listscroll_popup_info_pane_g1

0x22e3,	// (0x0001171a) scroll_pane_cp7

0x22ed,	// (0x00011724) popup_info_list_pane_t1_ParamLimits

0x22ed,	// (0x00011724) popup_info_list_pane_t1

0x2307,	// (0x0001173e) popup_info_list_pane_t2_ParamLimits

0x2307,	// (0x0001173e) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0001e9e6) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0001e9e6) popup_info_list_pane_t

0x1dc4,	// (0x000111fb) bg_popup_window_pane_cp12

0x62b7,	// (0x000156ee) find_popup_pane

0x1ea4,	// (0x000112db) bg_popup_window_pane_cp3

0x2321,	// (0x00011758) heading_pane_cp3

0x232d,	// (0x00011764) listscroll_popup_graphic_pane

0x1dc4,	// (0x000111fb) bg_popup_window_pane_cp4

0xc093,	// (0x0001b4ca) heading_pane_cp4

0x2393,	// (0x000117ca) listscroll_popup_colour_pane

0xc09b,	// (0x0001b4d2) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc09b,	// (0x0001b4d2) cell_large_graphic_colour_none_popup_pane

0xc0af,	// (0x0001b4e6) grid_large_graphic_colour_popup_pane_ParamLimits

0xc0af,	// (0x0001b4e6) grid_large_graphic_colour_popup_pane

0xc0d3,	// (0x0001b50a) listscroll_popup_colour_pane_g1_ParamLimits

0xc0d3,	// (0x0001b50a) listscroll_popup_colour_pane_g1

0xc0ea,	// (0x0001b521) listscroll_popup_colour_pane_g2_ParamLimits

0xc0ea,	// (0x0001b521) listscroll_popup_colour_pane_g2

0xc101,	// (0x0001b538) listscroll_popup_colour_pane_g3_ParamLimits

0xc101,	// (0x0001b538) listscroll_popup_colour_pane_g3

0xc111,	// (0x0001b548) listscroll_popup_colour_pane_g4_ParamLimits

0xc111,	// (0x0001b548) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0001e9eb) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0001e9eb) listscroll_popup_colour_pane_g

0x242d,	// (0x00011864) scroll_pane_cp6_ParamLimits

0x242d,	// (0x00011864) scroll_pane_cp6

0xc121,	// (0x0001b558) cell_large_graphic_colour_popup_pane_ParamLimits

0xc121,	// (0x0001b558) cell_large_graphic_colour_popup_pane

0x245e,	// (0x00011895) cell_large_graphic_colour_none_popup_pane_t1

0x1dc4,	// (0x000111fb) grid_highlight_pane_cp5

0x246d,	// (0x000118a4) cell_large_graphic_colour_popup_pane_g1

0x2475,	// (0x000118ac) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0001e9f4) cell_large_graphic_colour_popup_pane_g

0x247d,	// (0x000118b4) cell_large_graphic_colour_popup_pane_g2_copy1

0x2486,	// (0x000118bd) grid_highlight_pane_cp4

0x248e,	// (0x000118c5) bg_popup_window_pane_cp8_ParamLimits

0x248e,	// (0x000118c5) bg_popup_window_pane_cp8

0x24a9,	// (0x000118e0) popup_snote_single_text_window_g1_ParamLimits

0x24a9,	// (0x000118e0) popup_snote_single_text_window_g1

0x24bb,	// (0x000118f2) popup_snote_single_text_window_t1_ParamLimits

0x24bb,	// (0x000118f2) popup_snote_single_text_window_t1

0x24ce,	// (0x00011905) popup_snote_single_text_window_t2_ParamLimits

0x24ce,	// (0x00011905) popup_snote_single_text_window_t2

0x24e1,	// (0x00011918) popup_snote_single_text_window_t3_ParamLimits

0x24e1,	// (0x00011918) popup_snote_single_text_window_t3

0x251a,	// (0x00011951) popup_snote_single_text_window_t4_ParamLimits

0x251a,	// (0x00011951) popup_snote_single_text_window_t4

0x254e,	// (0x00011985) popup_snote_single_text_window_t5_ParamLimits

0x254e,	// (0x00011985) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0001e9f9) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0001e9f9) popup_snote_single_text_window_t

0x257d,	// (0x000119b4) bg_popup_window_pane_cp9_ParamLimits

0x257d,	// (0x000119b4) bg_popup_window_pane_cp9

0x24a9,	// (0x000118e0) popup_snote_single_graphic_window_g1_ParamLimits

0x24a9,	// (0x000118e0) popup_snote_single_graphic_window_g1

0x258b,	// (0x000119c2) popup_snote_single_graphic_window_g2_ParamLimits

0x258b,	// (0x000119c2) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0001ea04) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0001ea04) popup_snote_single_graphic_window_g

0x2597,	// (0x000119ce) popup_snote_single_graphic_window_t1_ParamLimits

0x2597,	// (0x000119ce) popup_snote_single_graphic_window_t1

0x25aa,	// (0x000119e1) popup_snote_single_graphic_window_t2_ParamLimits

0x25aa,	// (0x000119e1) popup_snote_single_graphic_window_t2

0x25bd,	// (0x000119f4) popup_snote_single_graphic_window_t3_ParamLimits

0x25bd,	// (0x000119f4) popup_snote_single_graphic_window_t3

0x25f6,	// (0x00011a2d) popup_snote_single_graphic_window_t4_ParamLimits

0x25f6,	// (0x00011a2d) popup_snote_single_graphic_window_t4

0x262a,	// (0x00011a61) popup_snote_single_graphic_window_t5_ParamLimits

0x262a,	// (0x00011a61) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0001ea09) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0001ea09) popup_snote_single_graphic_window_t

0x61fb,	// (0x00015632) grid_graphic_popup_pane_ParamLimits

0x61fb,	// (0x00015632) grid_graphic_popup_pane

0x6223,	// (0x0001565a) listscroll_popup_graphic_pane_g1_ParamLimits

0x6223,	// (0x0001565a) listscroll_popup_graphic_pane_g1

0xda3a,	// (0x0001ce71) listscroll_popup_graphic_pane_g2_ParamLimits

0xda3a,	// (0x0001ce71) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b7,	// (0x0001edee) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b7,	// (0x0001edee) listscroll_popup_graphic_pane_g

0x624b,	// (0x00015682) scroll_pane_cp5

0xd9fe,	// (0x0001ce35) cell_graphic_popup_pane_ParamLimits

0xd9fe,	// (0x0001ce35) cell_graphic_popup_pane

0x6185,	// (0x000155bc) cell_graphic_popup_pane_g1

0x618d,	// (0x000155c4) cell_graphic_popup_pane_g2

0x247d,	// (0x000118b4) cell_graphic_popup_pane_g3

0x0002,

0xf9b0,	// (0x0001ede7) cell_graphic_popup_pane_g

0x6196,	// (0x000155cd) cell_graphic_popup_pane_t2

0x2486,	// (0x000118bd) grid_highlight_pane_cp3

0x266b,	// (0x00011aa2) list_gen_pane_ParamLimits

0x266b,	// (0x00011aa2) list_gen_pane

0x269d,	// (0x00011ad4) scroll_pane

0xd9b9,	// (0x0001cdf0) bg_list_pane_g1_ParamLimits

0xd9b9,	// (0x0001cdf0) bg_list_pane_g1

0x6102,	// (0x00015539) bg_list_pane_g2_ParamLimits

0x6102,	// (0x00015539) bg_list_pane_g2

0x6115,	// (0x0001554c) bg_list_pane_g3_ParamLimits

0x6115,	// (0x0001554c) bg_list_pane_g3

0x6127,	// (0x0001555e) bg_list_pane_g4_ParamLimits

0x6127,	// (0x0001555e) bg_list_pane_g4

0xd9d4,	// (0x0001ce0b) bg_list_pane_g5_ParamLimits

0xd9d4,	// (0x0001ce0b) bg_list_pane_g5

0x0004,

0xf9a5,	// (0x0001eddc) bg_list_pane_g_ParamLimits

0xf9a5,	// (0x0001eddc) bg_list_pane_g

0xd95f,	// (0x0001cd96) list_double2_graphic_large_graphic_pane_ParamLimits

0xd95f,	// (0x0001cd96) list_double2_graphic_large_graphic_pane

0xd95f,	// (0x0001cd96) list_double2_graphic_pane_ParamLimits

0xd95f,	// (0x0001cd96) list_double2_graphic_pane

0xd95f,	// (0x0001cd96) list_double2_large_graphic_pane_ParamLimits

0xd95f,	// (0x0001cd96) list_double2_large_graphic_pane

0xd95f,	// (0x0001cd96) list_double2_pane_ParamLimits

0xd95f,	// (0x0001cd96) list_double2_pane

0xd95f,	// (0x0001cd96) list_double_graphic_heading_pane_ParamLimits

0xd95f,	// (0x0001cd96) list_double_graphic_heading_pane

0xd95f,	// (0x0001cd96) list_double_graphic_pane_ParamLimits

0xd95f,	// (0x0001cd96) list_double_graphic_pane

0xd95f,	// (0x0001cd96) list_double_heading_pane_ParamLimits

0xd95f,	// (0x0001cd96) list_double_heading_pane

0xd95f,	// (0x0001cd96) list_double_large_graphic_pane_ParamLimits

0xd95f,	// (0x0001cd96) list_double_large_graphic_pane

0xd95f,	// (0x0001cd96) list_double_number_pane_ParamLimits

0xd95f,	// (0x0001cd96) list_double_number_pane

0xd95f,	// (0x0001cd96) list_double_pane_ParamLimits

0xd95f,	// (0x0001cd96) list_double_pane

0xd95f,	// (0x0001cd96) list_double_time_pane_ParamLimits

0xd95f,	// (0x0001cd96) list_double_time_pane

0xd95f,	// (0x0001cd96) list_setting_number_pane_ParamLimits

0xd95f,	// (0x0001cd96) list_setting_number_pane

0xd95f,	// (0x0001cd96) list_setting_pane_ParamLimits

0xd95f,	// (0x0001cd96) list_setting_pane

0xd971,	// (0x0001cda8) list_single_2graphic_pane_ParamLimits

0xd971,	// (0x0001cda8) list_single_2graphic_pane

0xd971,	// (0x0001cda8) list_single_graphic_heading_pane_ParamLimits

0xd971,	// (0x0001cda8) list_single_graphic_heading_pane

0xd971,	// (0x0001cda8) list_single_graphic_pane_ParamLimits

0xd971,	// (0x0001cda8) list_single_graphic_pane

0xd971,	// (0x0001cda8) list_single_heading_pane_ParamLimits

0xd971,	// (0x0001cda8) list_single_heading_pane

0xd95f,	// (0x0001cd96) list_single_large_graphic_pane_ParamLimits

0xd95f,	// (0x0001cd96) list_single_large_graphic_pane

0xd971,	// (0x0001cda8) list_single_number_heading_pane_ParamLimits

0xd971,	// (0x0001cda8) list_single_number_heading_pane

0xd971,	// (0x0001cda8) list_single_number_pane_ParamLimits

0xd971,	// (0x0001cda8) list_single_number_pane

0xd971,	// (0x0001cda8) list_single_pane_ParamLimits

0xd971,	// (0x0001cda8) list_single_pane

0x1dc4,	// (0x000111fb) list_highlight_pane_cp1

0x48b2,	// (0x00013ce9) list_single_pane_g1_ParamLimits

0x48b2,	// (0x00013ce9) list_single_pane_g1

0x48be,	// (0x00013cf5) list_single_pane_g2_ParamLimits

0x48be,	// (0x00013cf5) list_single_pane_g2

0x0001,

0xf5e4,	// (0x0001ea1b) list_single_pane_g_ParamLimits

0xf5e4,	// (0x0001ea1b) list_single_pane_g

0x686f,	// (0x00015ca6) list_single_pane_t1_ParamLimits

0x686f,	// (0x00015ca6) list_single_pane_t1

0x48b2,	// (0x00013ce9) list_single_number_pane_g1_ParamLimits

0x48b2,	// (0x00013ce9) list_single_number_pane_g1

0x48be,	// (0x00013cf5) list_single_number_pane_g2_ParamLimits

0x48be,	// (0x00013cf5) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x0001ea1b) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x0001ea1b) list_single_number_pane_g

0x48ca,	// (0x00013d01) list_single_number_pane_t1_ParamLimits

0x48ca,	// (0x00013d01) list_single_number_pane_t1

0xd7a1,	// (0x0001cbd8) list_single_number_pane_t2_ParamLimits

0xd7a1,	// (0x0001cbd8) list_single_number_pane_t2

0x0001,

0xf966,	// (0x0001ed9d) list_single_number_pane_t_ParamLimits

0xf966,	// (0x0001ed9d) list_single_number_pane_t

0x7ce9,	// (0x00017120) list_single_graphic_pane_g1_ParamLimits

0x7ce9,	// (0x00017120) list_single_graphic_pane_g1

0x48b2,	// (0x00013ce9) list_single_graphic_pane_g2_ParamLimits

0x48b2,	// (0x00013ce9) list_single_graphic_pane_g2

0x48be,	// (0x00013cf5) list_single_graphic_pane_g3_ParamLimits

0x48be,	// (0x00013cf5) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0001ea14) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0001ea14) list_single_graphic_pane_g

0xc14a,	// (0x0001b581) list_single_graphic_pane_t1_ParamLimits

0xc14a,	// (0x0001b581) list_single_graphic_pane_t1

0x48b2,	// (0x00013ce9) list_single_heading_pane_g1_ParamLimits

0x48b2,	// (0x00013ce9) list_single_heading_pane_g1

0x48be,	// (0x00013cf5) list_single_heading_pane_g2_ParamLimits

0x48be,	// (0x00013cf5) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0001ea1b) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0001ea1b) list_single_heading_pane_g

0xc160,	// (0x0001b597) list_single_heading_pane_t1_ParamLimits

0xc160,	// (0x0001b597) list_single_heading_pane_t1

0xc176,	// (0x0001b5ad) list_single_heading_pane_t2_ParamLimits

0xc176,	// (0x0001b5ad) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0001ea20) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0001ea20) list_single_heading_pane_t

0x48b2,	// (0x00013ce9) list_single_number_heading_pane_g1_ParamLimits

0x48b2,	// (0x00013ce9) list_single_number_heading_pane_g1

0x48be,	// (0x00013cf5) list_single_number_heading_pane_g2_ParamLimits

0x48be,	// (0x00013cf5) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x0001ea1b) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x0001ea1b) list_single_number_heading_pane_g

0xc160,	// (0x0001b597) list_single_number_heading_pane_t1_ParamLimits

0xc160,	// (0x0001b597) list_single_number_heading_pane_t1

0xc188,	// (0x0001b5bf) list_single_number_heading_pane_t2_ParamLimits

0xc188,	// (0x0001b5bf) list_single_number_heading_pane_t2

0x6849,	// (0x00015c80) list_single_number_heading_pane_t3_ParamLimits

0x6849,	// (0x00015c80) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x0001ea25) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x0001ea25) list_single_number_heading_pane_t

0x48a6,	// (0x00013cdd) list_single_graphic_heading_pane_g1_ParamLimits

0x48a6,	// (0x00013cdd) list_single_graphic_heading_pane_g1

0xc19a,	// (0x0001b5d1) list_single_graphic_heading_pane_g4_ParamLimits

0xc19a,	// (0x0001b5d1) list_single_graphic_heading_pane_g4

0x48be,	// (0x00013cf5) list_single_graphic_heading_pane_g5_ParamLimits

0x48be,	// (0x00013cf5) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x0001ea2c) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x0001ea2c) list_single_graphic_heading_pane_g

0xc160,	// (0x0001b597) list_single_graphic_heading_pane_t1_ParamLimits

0xc160,	// (0x0001b597) list_single_graphic_heading_pane_t1

0xc1ab,	// (0x0001b5e2) list_single_graphic_heading_pane_t2_ParamLimits

0xc1ab,	// (0x0001b5e2) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x0001ea33) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x0001ea33) list_single_graphic_heading_pane_t

0x6885,	// (0x00015cbc) list_single_large_graphic_pane_g1_ParamLimits

0x6885,	// (0x00015cbc) list_single_large_graphic_pane_g1

0x6891,	// (0x00015cc8) list_single_large_graphic_pane_g2_ParamLimits

0x6891,	// (0x00015cc8) list_single_large_graphic_pane_g2

0x689d,	// (0x00015cd4) list_single_large_graphic_pane_g3_ParamLimits

0x689d,	// (0x00015cd4) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x0001ea38) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0001ea38) list_single_large_graphic_pane_g

0x4ffe,	// (0x00014435) wait_border_pane_g2_copy1

0xc1bd,	// (0x0001b5f4) list_single_large_graphic_pane_g4_cp2

0x68a9,	// (0x00015ce0) list_single_large_graphic_pane_t1_ParamLimits

0x68a9,	// (0x00015ce0) list_single_large_graphic_pane_t1

0x38fe,	// (0x00012d35) list_double_pane_g1_ParamLimits

0x38fe,	// (0x00012d35) list_double_pane_g1

0xc1c5,	// (0x0001b5fc) list_double_pane_g2_ParamLimits

0xc1c5,	// (0x0001b5fc) list_double_pane_g2

0x0001,

0xf608,	// (0x0001ea3f) list_double_pane_g_ParamLimits

0xf608,	// (0x0001ea3f) list_double_pane_g

0xc1d1,	// (0x0001b608) list_double_pane_t1_ParamLimits

0xc1d1,	// (0x0001b608) list_double_pane_t1

0xc1e7,	// (0x0001b61e) list_double_pane_t2_ParamLimits

0xc1e7,	// (0x0001b61e) list_double_pane_t2

0x0001,

0xf60d,	// (0x0001ea44) list_double_pane_t_ParamLimits

0xf60d,	// (0x0001ea44) list_double_pane_t

0xc1f9,	// (0x0001b630) list_double2_pane_g1_ParamLimits

0xc1f9,	// (0x0001b630) list_double2_pane_g1

0x29f2,	// (0x00011e29) list_double2_pane_g2_ParamLimits

0x29f2,	// (0x00011e29) list_double2_pane_g2

0x0001,

0xf612,	// (0x0001ea49) list_double2_pane_g_ParamLimits

0xf612,	// (0x0001ea49) list_double2_pane_g

0xc20a,	// (0x0001b641) list_double2_pane_t1_ParamLimits

0xc20a,	// (0x0001b641) list_double2_pane_t1

0xc220,	// (0x0001b657) list_double2_pane_t2_ParamLimits

0xc220,	// (0x0001b657) list_double2_pane_t2

0x0001,

0xf617,	// (0x0001ea4e) list_double2_pane_t_ParamLimits

0xf617,	// (0x0001ea4e) list_double2_pane_t

0x38fe,	// (0x00012d35) list_double_number_pane_g1_ParamLimits

0x38fe,	// (0x00012d35) list_double_number_pane_g1

0xc1c5,	// (0x0001b5fc) list_double_number_pane_g2_ParamLimits

0xc1c5,	// (0x0001b5fc) list_double_number_pane_g2

0x0001,

0xf608,	// (0x0001ea3f) list_double_number_pane_g_ParamLimits

0xf608,	// (0x0001ea3f) list_double_number_pane_g

0xc232,	// (0x0001b669) list_double_number_pane_t1_ParamLimits

0xc232,	// (0x0001b669) list_double_number_pane_t1

0xc244,	// (0x0001b67b) list_double_number_pane_t2_ParamLimits

0xc244,	// (0x0001b67b) list_double_number_pane_t2

0xc25a,	// (0x0001b691) list_double_number_pane_t3_ParamLimits

0xc25a,	// (0x0001b691) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x0001ea53) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x0001ea53) list_double_number_pane_t

0xc26c,	// (0x0001b6a3) list_double_graphic_pane_g1_ParamLimits

0xc26c,	// (0x0001b6a3) list_double_graphic_pane_g1

0xc278,	// (0x0001b6af) list_double_graphic_pane_g2_ParamLimits

0xc278,	// (0x0001b6af) list_double_graphic_pane_g2

0xc287,	// (0x0001b6be) list_double_graphic_pane_g3_ParamLimits

0xc287,	// (0x0001b6be) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x0001ea5a) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x0001ea5a) list_double_graphic_pane_g

0xc29f,	// (0x0001b6d6) list_double_graphic_pane_t1_ParamLimits

0xc29f,	// (0x0001b6d6) list_double_graphic_pane_t1

0xc2b5,	// (0x0001b6ec) list_double_graphic_pane_t2_ParamLimits

0xc2b5,	// (0x0001b6ec) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001ea63) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001ea63) list_double_graphic_pane_t

0xc2c7,	// (0x0001b6fe) list_double2_graphic_pane_g1_ParamLimits

0xc2c7,	// (0x0001b6fe) list_double2_graphic_pane_g1

0xc2d3,	// (0x0001b70a) list_double2_graphic_pane_g2_ParamLimits

0xc2d3,	// (0x0001b70a) list_double2_graphic_pane_g2

0x29f2,	// (0x00011e29) list_double2_graphic_pane_g3_ParamLimits

0x29f2,	// (0x00011e29) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x0001ea68) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x0001ea68) list_double2_graphic_pane_g

0xc2df,	// (0x0001b716) list_double2_graphic_pane_t1_ParamLimits

0xc2df,	// (0x0001b716) list_double2_graphic_pane_t1

0xc2f5,	// (0x0001b72c) list_double2_graphic_pane_t2_ParamLimits

0xc2f5,	// (0x0001b72c) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x0001ea6f) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x0001ea6f) list_double2_graphic_pane_t

0xc307,	// (0x0001b73e) list_double_large_graphic_pane_g1_ParamLimits

0xc307,	// (0x0001b73e) list_double_large_graphic_pane_g1

0xc332,	// (0x0001b769) list_double_large_graphic_pane_g2_ParamLimits

0xc332,	// (0x0001b769) list_double_large_graphic_pane_g2

0xc1c5,	// (0x0001b5fc) list_double_large_graphic_pane_g3_ParamLimits

0xc1c5,	// (0x0001b5fc) list_double_large_graphic_pane_g3

0xc343,	// (0x0001b77a) list_double_large_graphic_pane_g4_ParamLimits

0xc343,	// (0x0001b77a) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0001ea74) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0001ea74) list_double_large_graphic_pane_g

0xc355,	// (0x0001b78c) list_double_large_graphic_pane_t1_ParamLimits

0xc355,	// (0x0001b78c) list_double_large_graphic_pane_t1

0xc36e,	// (0x0001b7a5) list_double_large_graphic_pane_t2_ParamLimits

0xc36e,	// (0x0001b7a5) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x0001ea7f) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x0001ea7f) list_double_large_graphic_pane_t

0xc380,	// (0x0001b7b7) list_double2_large_graphic_pane_g1_ParamLimits

0xc380,	// (0x0001b7b7) list_double2_large_graphic_pane_g1

0xc1f9,	// (0x0001b630) list_double2_large_graphic_pane_g2_ParamLimits

0xc1f9,	// (0x0001b630) list_double2_large_graphic_pane_g2

0x29f2,	// (0x00011e29) list_double2_large_graphic_pane_g3_ParamLimits

0x29f2,	// (0x00011e29) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0001ea84) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0001ea84) list_double2_large_graphic_pane_g

0xc38c,	// (0x0001b7c3) list_double2_large_graphic_pane_t1_ParamLimits

0xc38c,	// (0x0001b7c3) list_double2_large_graphic_pane_t1

0xc3a2,	// (0x0001b7d9) list_double2_large_graphic_pane_t2_ParamLimits

0xc3a2,	// (0x0001b7d9) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x0001ea8b) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x0001ea8b) list_double2_large_graphic_pane_t

0xc3b4,	// (0x0001b7eb) list_double_heading_pane_g1_ParamLimits

0xc3b4,	// (0x0001b7eb) list_double_heading_pane_g1

0xc3c5,	// (0x0001b7fc) list_double_heading_pane_g2_ParamLimits

0xc3c5,	// (0x0001b7fc) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0001ea90) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0001ea90) list_double_heading_pane_g

0xc3d1,	// (0x0001b808) list_double_heading_pane_t1_ParamLimits

0xc3d1,	// (0x0001b808) list_double_heading_pane_t1

0xc3e7,	// (0x0001b81e) list_double_heading_pane_t2_ParamLimits

0xc3e7,	// (0x0001b81e) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0001ea95) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0001ea95) list_double_heading_pane_t

0x2887,	// (0x00011cbe) list_double_graphic_heading_pane_g1_ParamLimits

0x2887,	// (0x00011cbe) list_double_graphic_heading_pane_g1

0xc3b4,	// (0x0001b7eb) list_double_graphic_heading_pane_g2_ParamLimits

0xc3b4,	// (0x0001b7eb) list_double_graphic_heading_pane_g2

0xc3c5,	// (0x0001b7fc) list_double_graphic_heading_pane_g3_ParamLimits

0xc3c5,	// (0x0001b7fc) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x0001ea9a) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x0001ea9a) list_double_graphic_heading_pane_g

0xc3f9,	// (0x0001b830) list_double_graphic_heading_pane_t1_ParamLimits

0xc3f9,	// (0x0001b830) list_double_graphic_heading_pane_t1

0xc40f,	// (0x0001b846) list_double_graphic_heading_pane_t2_ParamLimits

0xc40f,	// (0x0001b846) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0001eaa1) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0001eaa1) list_double_graphic_heading_pane_t

0xc332,	// (0x0001b769) list_double_time_pane_g1_ParamLimits

0xc332,	// (0x0001b769) list_double_time_pane_g1

0xc1c5,	// (0x0001b5fc) list_double_time_pane_g2_ParamLimits

0xc1c5,	// (0x0001b5fc) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x0001eaa6) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x0001eaa6) list_double_time_pane_g

0xc421,	// (0x0001b858) list_double_time_pane_t1_ParamLimits

0xc421,	// (0x0001b858) list_double_time_pane_t1

0xc437,	// (0x0001b86e) list_double_time_pane_t2_ParamLimits

0xc437,	// (0x0001b86e) list_double_time_pane_t2

0xc449,	// (0x0001b880) list_double_time_pane_t3_ParamLimits

0xc449,	// (0x0001b880) list_double_time_pane_t3

0xc45b,	// (0x0001b892) list_double_time_pane_t4_ParamLimits

0xc45b,	// (0x0001b892) list_double_time_pane_t4

0x0003,

0xf674,	// (0x0001eaab) list_double_time_pane_t_ParamLimits

0xf674,	// (0x0001eaab) list_double_time_pane_t

0xc2d3,	// (0x0001b70a) list_setting_pane_g1_ParamLimits

0xc2d3,	// (0x0001b70a) list_setting_pane_g1

0x29f2,	// (0x00011e29) list_setting_pane_g2_ParamLimits

0x29f2,	// (0x00011e29) list_setting_pane_g2

0x0001,

0xf67d,	// (0x0001eab4) list_setting_pane_g_ParamLimits

0xf67d,	// (0x0001eab4) list_setting_pane_g

0xc46d,	// (0x0001b8a4) list_setting_pane_t1_ParamLimits

0xc46d,	// (0x0001b8a4) list_setting_pane_t1

0xc484,	// (0x0001b8bb) list_setting_pane_t2_ParamLimits

0xc484,	// (0x0001b8bb) list_setting_pane_t2

0x0002,

0xf682,	// (0x0001eab9) list_setting_pane_t_ParamLimits

0xf682,	// (0x0001eab9) list_setting_pane_t

0xc4c3,	// (0x0001b8fa) set_value_pane_cp_ParamLimits

0xc4c3,	// (0x0001b8fa) set_value_pane_cp

0xc2d3,	// (0x0001b70a) list_setting_number_pane_g1_ParamLimits

0xc2d3,	// (0x0001b70a) list_setting_number_pane_g1

0x29f2,	// (0x00011e29) list_setting_number_pane_g2_ParamLimits

0x29f2,	// (0x00011e29) list_setting_number_pane_g2

0x0001,

0xf67d,	// (0x0001eab4) list_setting_number_pane_g_ParamLimits

0xf67d,	// (0x0001eab4) list_setting_number_pane_g

0xc4cf,	// (0x0001b906) list_setting_number_pane_t1_ParamLimits

0xc4cf,	// (0x0001b906) list_setting_number_pane_t1

0xc4e3,	// (0x0001b91a) list_setting_number_pane_t2_ParamLimits

0xc4e3,	// (0x0001b91a) list_setting_number_pane_t2

0xc4fa,	// (0x0001b931) list_setting_number_pane_t3_ParamLimits

0xc4fa,	// (0x0001b931) list_setting_number_pane_t3

0x0003,

0xf689,	// (0x0001eac0) list_setting_number_pane_t_ParamLimits

0xf689,	// (0x0001eac0) list_setting_number_pane_t

0xc4c3,	// (0x0001b8fa) set_value_pane_ParamLimits

0xc4c3,	// (0x0001b8fa) set_value_pane

0x2b52,	// (0x00011f89) bg_set_opt_pane_ParamLimits

0x2b52,	// (0x00011f89) bg_set_opt_pane

0x2b73,	// (0x00011faa) set_value_pane_t1

0x2b81,	// (0x00011fb8) slider_set_pane_cp3

0x2b8a,	// (0x00011fc1) volume_small_pane_cp

0x2b93,	// (0x00011fca) list_form_gen_pane

0x2b9c,	// (0x00011fd3) scroll_pane_cp8

0xc53d,	// (0x0001b974) form_field_data_pane_ParamLimits

0xc53d,	// (0x0001b974) form_field_data_pane

0xc554,	// (0x0001b98b) form_field_data_wide_pane_ParamLimits

0xc554,	// (0x0001b98b) form_field_data_wide_pane

0xc574,	// (0x0001b9ab) form_field_popup_pane_ParamLimits

0xc574,	// (0x0001b9ab) form_field_popup_pane

0xc58c,	// (0x0001b9c3) form_field_popup_wide_pane_ParamLimits

0xc58c,	// (0x0001b9c3) form_field_popup_wide_pane

0x2c37,	// (0x0001206e) form_field_slider_pane_ParamLimits

0x2c37,	// (0x0001206e) form_field_slider_pane

0x2c4a,	// (0x00012081) form_field_slider_wide_pane_ParamLimits

0x2c4a,	// (0x00012081) form_field_slider_wide_pane

0x2c5d,	// (0x00012094) data_form_pane

0xc5ad,	// (0x0001b9e4) form_field_data_pane_t1

0x2c8b,	// (0x000120c2) input_focus_pane

0x2c99,	// (0x000120d0) data_form_wide_pane

0x2cd1,	// (0x00012108) form_field_data_wide_pane_t1

0x249b,	// (0x000118d2) input_focus_pane_cp6

0xc5c7,	// (0x0001b9fe) form_field_popup_pane_t1

0x2c8b,	// (0x000120c2) input_focus_pane_cp7

0x2d0b,	// (0x00012142) list_form_pane

0x2d1f,	// (0x00012156) form_field_popup_wide_pane_t1

0x2c8b,	// (0x000120c2) input_focus_pane_cp8

0x2d34,	// (0x0001216b) list_form_wide_pane

0xc5e9,	// (0x0001ba20) form_field_slider_pane_t1_ParamLimits

0xc5e9,	// (0x0001ba20) form_field_slider_pane_t1

0xc601,	// (0x0001ba38) form_field_slider_pane_t2_ParamLimits

0xc601,	// (0x0001ba38) form_field_slider_pane_t2

0x0001,

0xf699,	// (0x0001ead0) form_field_slider_pane_t_ParamLimits

0xf699,	// (0x0001ead0) form_field_slider_pane_t

0x2139,	// (0x00011570) input_focus_pane_cp9_ParamLimits

0x2139,	// (0x00011570) input_focus_pane_cp9

0xc616,	// (0x0001ba4d) slider_cont_pane_ParamLimits

0xc616,	// (0x0001ba4d) slider_cont_pane

0x2d83,	// (0x000121ba) form_field_slider_wide_pane_t1_ParamLimits

0x2d83,	// (0x000121ba) form_field_slider_wide_pane_t1

0x2d95,	// (0x000121cc) form_field_slider_wide_pane_t2_ParamLimits

0x2d95,	// (0x000121cc) form_field_slider_wide_pane_t2

0x0001,

0xf69e,	// (0x0001ead5) form_field_slider_wide_pane_t_ParamLimits

0xf69e,	// (0x0001ead5) form_field_slider_wide_pane_t

0x2139,	// (0x00011570) input_focus_pane_cp10_ParamLimits

0x2139,	// (0x00011570) input_focus_pane_cp10

0xc62a,	// (0x0001ba61) slider_cont_pane_cp1_ParamLimits

0xc62a,	// (0x0001ba61) slider_cont_pane_cp1

0xc63e,	// (0x0001ba75) slider_form_pane_cp

0x2dc3,	// (0x000121fa) input_focus_pane_g1

0x2dcb,	// (0x00012202) input_focus_pane_g2

0x2dd3,	// (0x0001220a) input_focus_pane_g3

0x2ddb,	// (0x00012212) input_focus_pane_g4

0x2de3,	// (0x0001221a) input_focus_pane_g5

0x2deb,	// (0x00012222) input_focus_pane_g6

0x2df3,	// (0x0001222a) input_focus_pane_g7

0x2dfb,	// (0x00012232) input_focus_pane_g8

0x2e03,	// (0x0001223a) input_focus_pane_g9

0x1dba,	// (0x000111f1) input_focus_pane_g10

0x0009,

0xf6a3,	// (0x0001eada) input_focus_pane_g

0x5007,	// (0x0001443e) wait_border_pane_g3_copy1

0xc646,	// (0x0001ba7d) data_form_pane_t1

0x1dba,	// (0x000111f1) wait_anim_pane_g1_copy1

0xd934,	// (0x0001cd6b) data_form_wide_pane_t1

0xc660,	// (0x0001ba97) list_form_graphic_pane_cp_ParamLimits

0xc660,	// (0x0001ba97) list_form_graphic_pane_cp

0x5f6b,	// (0x000153a2) slider_form_pane_g1

0x5f74,	// (0x000153ab) slider_form_pane_g2

0x0006,

0xf996,	// (0x0001edcd) slider_form_pane_g

0xc671,	// (0x0001baa8) list_form_graphic_pane_ParamLimits

0xc671,	// (0x0001baa8) list_form_graphic_pane

0x2e5b,	// (0x00012292) list_form_graphic_pane_g1

0x2e63,	// (0x0001229a) list_form_graphic_pane_t1_ParamLimits

0x2e63,	// (0x0001229a) list_form_graphic_pane_t1

0x1ea4,	// (0x000112db) list_highlight_pane_cp5_ParamLimits

0x1ea4,	// (0x000112db) list_highlight_pane_cp5

0xc6ab,	// (0x0001bae2) find_pane_g1

0x2e81,	// (0x000122b8) input_find_pane

0xc6b4,	// (0x0001baeb) input_find_pane_g1_ParamLimits

0xc6b4,	// (0x0001baeb) input_find_pane_g1

0xc6c0,	// (0x0001baf7) input_find_pane_t1_ParamLimits

0xc6c0,	// (0x0001baf7) input_find_pane_t1

0xc6d5,	// (0x0001bb0c) input_find_pane_t2_ParamLimits

0xc6d5,	// (0x0001bb0c) input_find_pane_t2

0x0001,

0xf6b8,	// (0x0001eaef) input_find_pane_t_ParamLimits

0xf6b8,	// (0x0001eaef) input_find_pane_t

0x2ec0,	// (0x000122f7) input_focus_pane_cp5_ParamLimits

0x2ec0,	// (0x000122f7) input_focus_pane_cp5

0xc6f6,	// (0x0001bb2d) bg_popup_window_pane_cp2_ParamLimits

0xc6f6,	// (0x0001bb2d) bg_popup_window_pane_cp2

0xc703,	// (0x0001bb3a) listscroll_menu_pane_ParamLimits

0xc703,	// (0x0001bb3a) listscroll_menu_pane

0xc70f,	// (0x0001bb46) popup_submenu_window_ParamLimits

0xc70f,	// (0x0001bb46) popup_submenu_window

0x2f1d,	// (0x00012354) find_popup_pane_g1

0x2f25,	// (0x0001235c) input_popup_find_pane_cp

0x2ec0,	// (0x000122f7) input_focus_pane_cp4_ParamLimits

0x2ec0,	// (0x000122f7) input_focus_pane_cp4

0x2f3b,	// (0x00012372) input_popup_find_pane_t1_ParamLimits

0x2f3b,	// (0x00012372) input_popup_find_pane_t1

0x1dc4,	// (0x000111fb) bg_popup_sub_pane_cp

0x2f69,	// (0x000123a0) listscroll_popup_sub_pane

0x2f71,	// (0x000123a8) list_submenu_pane_ParamLimits

0x2f71,	// (0x000123a8) list_submenu_pane

0x2f82,	// (0x000123b9) scroll_pane_cp4

0x2f8a,	// (0x000123c1) list_single_popup_submenu_pane_ParamLimits

0x2f8a,	// (0x000123c1) list_single_popup_submenu_pane

0x2f9e,	// (0x000123d5) list_single_popup_submenu_pane_g1

0x2fa6,	// (0x000123dd) list_single_popup_submenu_pane_t1_ParamLimits

0x2fa6,	// (0x000123dd) list_single_popup_submenu_pane_t1

0x2139,	// (0x00011570) bg_active_tab_pane_cp1_ParamLimits

0x2139,	// (0x00011570) bg_active_tab_pane_cp1

0xc747,	// (0x0001bb7e) tabs_2_active_pane_g1

0xc74f,	// (0x0001bb86) tabs_2_active_pane_t1

0x2139,	// (0x00011570) bg_passive_tab_pane_cp1_ParamLimits

0x2139,	// (0x00011570) bg_passive_tab_pane_cp1

0xc747,	// (0x0001bb7e) tabs_2_passive_pane_g1

0xc74f,	// (0x0001bb86) tabs_2_passive_pane_t1

0x1ea4,	// (0x000112db) bg_active_tab_pane_cp4

0xc761,	// (0x0001bb98) tabs_2_long_active_pane_t1

0x3e64,	// (0x0001329b) bg_passive_tab_pane_cp4

0x0c97,	// (0x000100ce) list_single_midp_graphic_pane_g4_ParamLimits

0x1ea4,	// (0x000112db) bg_active_tab_pane_cp5

0xc774,	// (0x0001bbab) tabs_3_long_active_pane_t1

0x3e64,	// (0x0001329b) bg_passive_tab_pane_cp5

0x0c97,	// (0x000100ce) list_single_midp_graphic_pane_g4

0x1ea4,	// (0x000112db) bg_popup_window_pane_cp13_ParamLimits

0x1ea4,	// (0x000112db) bg_popup_window_pane_cp13

0x301d,	// (0x00012454) listscroll_popup_fast_pane_ParamLimits

0x301d,	// (0x00012454) listscroll_popup_fast_pane

0x302c,	// (0x00012463) grid_popup_fast_pane_ParamLimits

0x302c,	// (0x00012463) grid_popup_fast_pane

0x303e,	// (0x00012475) scroll_pane_cp9_ParamLimits

0x303e,	// (0x00012475) scroll_pane_cp9

0x7d4f,	// (0x00017186) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7d4f,	// (0x00017186) list_single_graphic_hl_pane_t1_cp2

0x3062,	// (0x00012499) input_focus_pane_cp20_ParamLimits

0x3062,	// (0x00012499) input_focus_pane_cp20

0x3070,	// (0x000124a7) query_popup_data_pane_t1_ParamLimits

0x3070,	// (0x000124a7) query_popup_data_pane_t1

0x3083,	// (0x000124ba) query_popup_data_pane_t2_ParamLimits

0x3083,	// (0x000124ba) query_popup_data_pane_t2

0x30c9,	// (0x00012500) query_popup_data_pane_t3_ParamLimits

0x30c9,	// (0x00012500) query_popup_data_pane_t3

0x310a,	// (0x00012541) query_popup_data_pane_t4_ParamLimits

0x310a,	// (0x00012541) query_popup_data_pane_t4

0x3146,	// (0x0001257d) query_popup_data_pane_t5_ParamLimits

0x3146,	// (0x0001257d) query_popup_data_pane_t5

0x0004,

0xf6bd,	// (0x0001eaf4) query_popup_data_pane_t_ParamLimits

0xf6bd,	// (0x0001eaf4) query_popup_data_pane_t

0x2dc3,	// (0x000121fa) bg_set_opt_pane_g1

0x2dcb,	// (0x00012202) bg_set_opt_pane_g2

0x2dd3,	// (0x0001220a) bg_set_opt_pane_g3

0x2ddb,	// (0x00012212) bg_set_opt_pane_g4

0x2de3,	// (0x0001221a) bg_set_opt_pane_g5

0x2deb,	// (0x00012222) bg_set_opt_pane_g6

0x2df3,	// (0x0001222a) bg_set_opt_pane_g7

0x2dfb,	// (0x00012232) bg_set_opt_pane_g8

0x2e03,	// (0x0001223a) bg_set_opt_pane_g9

0x0008,

0xf6c8,	// (0x0001eaff) bg_set_opt_pane_g

0x088f,	// (0x0000fcc6) control_top_pane_stacon_ParamLimits

0x088f,	// (0x0000fcc6) control_top_pane_stacon

0x08e2,	// (0x0000fd19) signal_pane_stacon_ParamLimits

0x08e2,	// (0x0000fd19) signal_pane_stacon

0x3773,	// (0x00012baa) stacon_top_pane_g1_ParamLimits

0x3773,	// (0x00012baa) stacon_top_pane_g1

0x0907,	// (0x0000fd3e) title_pane_stacon_ParamLimits

0x0907,	// (0x0000fd3e) title_pane_stacon

0x0931,	// (0x0000fd68) uni_indicator_pane_stacon_ParamLimits

0x0931,	// (0x0000fd68) uni_indicator_pane_stacon

0x0946,	// (0x0000fd7d) battery_pane_stacon_ParamLimits

0x0946,	// (0x0000fd7d) battery_pane_stacon

0x098a,	// (0x0000fdc1) control_bottom_pane_stacon_ParamLimits

0x098a,	// (0x0000fdc1) control_bottom_pane_stacon

0x09ad,	// (0x0000fde4) navi_pane_stacon_ParamLimits

0x09ad,	// (0x0000fde4) navi_pane_stacon

0x3795,	// (0x00012bcc) stacon_bottom_pane_g1_ParamLimits

0x3795,	// (0x00012bcc) stacon_bottom_pane_g1

0x05f0,	// (0x0000fa27) aid_levels_signal_lsc_ParamLimits

0x05f0,	// (0x0000fa27) aid_levels_signal_lsc

0x0607,	// (0x0000fa3e) signal_pane_stacon_g1_ParamLimits

0x0607,	// (0x0000fa3e) signal_pane_stacon_g1

0x061b,	// (0x0000fa52) signal_pane_stacon_g2_ParamLimits

0x061b,	// (0x0000fa52) signal_pane_stacon_g2

0x0001,

0xf6db,	// (0x0001eb12) signal_pane_stacon_g_ParamLimits

0xf6db,	// (0x0001eb12) signal_pane_stacon_g

0x0650,	// (0x0000fa87) title_pane_stacon_t1_ParamLimits

0x0650,	// (0x0000fa87) title_pane_stacon_t1

0x318a,	// (0x000125c1) uni_indicator_pane_stacon_g1

0x3194,	// (0x000125cb) uni_indicator_pane_stacon_g2

0x319e,	// (0x000125d5) uni_indicator_pane_stacon_g3

0x31a8,	// (0x000125df) uni_indicator_pane_stacon_g4

0x0003,

0xf6e7,	// (0x0001eb1e) uni_indicator_pane_stacon_g

0x0675,	// (0x0000faac) control_top_pane_stacon_g1

0x067d,	// (0x0000fab4) control_top_pane_stacon_t1_ParamLimits

0x067d,	// (0x0000fab4) control_top_pane_stacon_t1

0x06b4,	// (0x0000faeb) aid_levels_battery_lsc_ParamLimits

0x06b4,	// (0x0000faeb) aid_levels_battery_lsc

0x06cc,	// (0x0000fb03) battery_pane_stacon_g1_ParamLimits

0x06cc,	// (0x0000fb03) battery_pane_stacon_g1

0x06df,	// (0x0000fb16) battery_pane_stacon_g2_ParamLimits

0x06df,	// (0x0000fb16) battery_pane_stacon_g2

0x0001,

0xf6f0,	// (0x0001eb27) battery_pane_stacon_g_ParamLimits

0xf6f0,	// (0x0001eb27) battery_pane_stacon_g

0x071d,	// (0x0000fb54) navi_icon_pane_stacon

0x0731,	// (0x0000fb68) navi_navi_pane_stacon

0x071d,	// (0x0000fb54) navi_text_pane_stacon

0x0675,	// (0x0000faac) control_bottom_pane_stacon_g1

0x0745,	// (0x0000fb7c) control_bottom_pane_stacon_t1_ParamLimits

0x0745,	// (0x0000fb7c) control_bottom_pane_stacon_t1

0xc786,	// (0x0001bbbd) grid_app_pane_ParamLimits

0xc786,	// (0x0001bbbd) grid_app_pane

0xc7be,	// (0x0001bbf5) scroll_pane_cp15_ParamLimits

0xc7be,	// (0x0001bbf5) scroll_pane_cp15

0xc7d7,	// (0x0001bc0e) cell_app_pane_ParamLimits

0xc7d7,	// (0x0001bc0e) cell_app_pane

0xc81c,	// (0x0001bc53) cell_app_pane_g1_ParamLimits

0xc81c,	// (0x0001bc53) cell_app_pane_g1

0x324d,	// (0x00012684) cell_app_pane_g2_ParamLimits

0x324d,	// (0x00012684) cell_app_pane_g2

0x0001,

0xf6f5,	// (0x0001eb2c) cell_app_pane_g_ParamLimits

0xf6f5,	// (0x0001eb2c) cell_app_pane_g

0x3259,	// (0x00012690) cell_app_pane_t1_ParamLimits

0x3259,	// (0x00012690) cell_app_pane_t1

0x3270,	// (0x000126a7) grid_highlight_pane_ParamLimits

0x3270,	// (0x000126a7) grid_highlight_pane

0x2dc3,	// (0x000121fa) cell_highlight_pane_g1

0x2dcb,	// (0x00012202) cell_highlight_pane_g2

0x2dd3,	// (0x0001220a) cell_highlight_pane_g3

0x2ddb,	// (0x00012212) cell_highlight_pane_g4

0x2de3,	// (0x0001221a) cell_highlight_pane_g5

0x2deb,	// (0x00012222) cell_highlight_pane_g6

0x2df3,	// (0x0001222a) cell_highlight_pane_g7

0x2dfb,	// (0x00012232) cell_highlight_pane_g8

0x2e03,	// (0x0001223a) cell_highlight_pane_g9

0x1dba,	// (0x000111f1) cell_highlight_pane_g10

0x0009,

0xf6a3,	// (0x0001eada) cell_highlight_pane_g

0x3281,	// (0x000126b8) bg_scroll_pane

0x078f,	// (0x0000fbc6) scroll_handle_pane

0x32c8,	// (0x000126ff) scroll_bg_pane_g1

0x32dd,	// (0x00012714) scroll_bg_pane_g2

0x32f5,	// (0x0001272c) scroll_bg_pane_g3

0x0002,

0xf6fa,	// (0x0001eb31) scroll_bg_pane_g

0x330a,	// (0x00012741) scroll_handle_focus_pane_ParamLimits

0x330a,	// (0x00012741) scroll_handle_focus_pane

0x32c8,	// (0x000126ff) scroll_handle_pane_g1

0x3317,	// (0x0001274e) scroll_handle_pane_g2

0x32f5,	// (0x0001272c) scroll_handle_pane_g3

0x0002,

0xf701,	// (0x0001eb38) scroll_handle_pane_g

0x2ec0,	// (0x000122f7) bg_popup_sub_pane_cp21_ParamLimits

0x2ec0,	// (0x000122f7) bg_popup_sub_pane_cp21

0x332b,	// (0x00012762) popup_fep_japan_predictive_window_t1_ParamLimits

0x332b,	// (0x00012762) popup_fep_japan_predictive_window_t1

0x3345,	// (0x0001277c) popup_fep_japan_predictive_window_t2_ParamLimits

0x3345,	// (0x0001277c) popup_fep_japan_predictive_window_t2

0x3378,	// (0x000127af) popup_fep_japan_predictive_window_t3_ParamLimits

0x3378,	// (0x000127af) popup_fep_japan_predictive_window_t3

0x0002,

0xf708,	// (0x0001eb3f) popup_fep_japan_predictive_window_t_ParamLimits

0xf708,	// (0x0001eb3f) popup_fep_japan_predictive_window_t

0x1dc4,	// (0x000111fb) bg_popup_sub_pane_cp23

0x33af,	// (0x000127e6) listscroll_japin_cand_pane

0x33b7,	// (0x000127ee) popup_fep_japan_candidate_window_t1

0x33c5,	// (0x000127fc) candidate_pane_ParamLimits

0x33c5,	// (0x000127fc) candidate_pane

0x33d7,	// (0x0001280e) scroll_pane_cp30

0x33df,	// (0x00012816) list_single_popup_jap_candidate_pane_ParamLimits

0x33df,	// (0x00012816) list_single_popup_jap_candidate_pane

0x1dc4,	// (0x000111fb) list_highlight_pane_cp30

0x33f4,	// (0x0001282b) list_single_popup_jap_candidate_pane_t1

0x3403,	// (0x0001283a) level_1_signal

0x3410,	// (0x00012847) level_2_signal

0x341d,	// (0x00012854) level_3_signal

0x342a,	// (0x00012861) level_4_signal

0x3437,	// (0x0001286e) level_5_signal

0x3444,	// (0x0001287b) level_6_signal

0x3451,	// (0x00012888) level_7_signal

0x3403,	// (0x0001283a) level_1_battery

0x3410,	// (0x00012847) level_2_battery

0x341d,	// (0x00012854) level_3_battery

0x342a,	// (0x00012861) level_4_battery

0x3437,	// (0x0001286e) level_5_battery

0x3444,	// (0x0001287b) level_6_battery

0x3451,	// (0x00012888) level_7_battery

0x3476,	// (0x000128ad) list_menu_pane_ParamLimits

0x3476,	// (0x000128ad) list_menu_pane

0x3487,	// (0x000128be) scroll_pane_cp25_ParamLimits

0x3487,	// (0x000128be) scroll_pane_cp25

0x34a0,	// (0x000128d7) list_double2_graphic_pane_cp2_ParamLimits

0x34a0,	// (0x000128d7) list_double2_graphic_pane_cp2

0x34a0,	// (0x000128d7) list_double2_large_graphic_pane_cp2_ParamLimits

0x34a0,	// (0x000128d7) list_double2_large_graphic_pane_cp2

0x34a0,	// (0x000128d7) list_double2_pane_cp2_ParamLimits

0x34a0,	// (0x000128d7) list_double2_pane_cp2

0x34a0,	// (0x000128d7) list_double_graphic_pane_cp2_ParamLimits

0x34a0,	// (0x000128d7) list_double_graphic_pane_cp2

0x34a0,	// (0x000128d7) list_double_large_graphic_pane_cp2_ParamLimits

0x34a0,	// (0x000128d7) list_double_large_graphic_pane_cp2

0x34a0,	// (0x000128d7) list_double_number_pane_cp2_ParamLimits

0x34a0,	// (0x000128d7) list_double_number_pane_cp2

0x34a0,	// (0x000128d7) list_double_pane_cp2_ParamLimits

0x34a0,	// (0x000128d7) list_double_pane_cp2

0xc84f,	// (0x0001bc86) list_single_2graphic_pane_cp2_ParamLimits

0xc84f,	// (0x0001bc86) list_single_2graphic_pane_cp2

0xc84f,	// (0x0001bc86) list_single_graphic_heading_pane_cp2_ParamLimits

0xc84f,	// (0x0001bc86) list_single_graphic_heading_pane_cp2

0xc84f,	// (0x0001bc86) list_single_graphic_pane_cp2_ParamLimits

0xc84f,	// (0x0001bc86) list_single_graphic_pane_cp2

0xc84f,	// (0x0001bc86) list_single_heading_pane_cp2_ParamLimits

0xc84f,	// (0x0001bc86) list_single_heading_pane_cp2

0x34dd,	// (0x00012914) list_single_large_graphic_pane_cp2_ParamLimits

0x34dd,	// (0x00012914) list_single_large_graphic_pane_cp2

0xc84f,	// (0x0001bc86) list_single_number_heading_pane_cp2_ParamLimits

0xc84f,	// (0x0001bc86) list_single_number_heading_pane_cp2

0xc84f,	// (0x0001bc86) list_single_number_pane_cp2_ParamLimits

0xc84f,	// (0x0001bc86) list_single_number_pane_cp2

0xc84f,	// (0x0001bc86) list_single_pane_cp2_ParamLimits

0xc84f,	// (0x0001bc86) list_single_pane_cp2

0x3533,	// (0x0001296a) bg_popup_sub_pane_cp22

0x0841,	// (0x0000fc78) popup_side_volume_key_window_g1

0x086b,	// (0x0000fca2) popup_side_volume_key_window_t1

0x0887,	// (0x0000fcbe) volume_small_pane_cp1

0x2139,	// (0x00011570) bg_popup_sub_pane_cp24_ParamLimits

0x2139,	// (0x00011570) bg_popup_sub_pane_cp24

0x3549,	// (0x00012980) fep_china_uni_candidate_pane_ParamLimits

0x3549,	// (0x00012980) fep_china_uni_candidate_pane

0x355d,	// (0x00012994) fep_china_uni_entry_pane

0x356d,	// (0x000129a4) popup_fep_china_uni_window_g1

0x3589,	// (0x000129c0) fep_china_uni_entry_pane_g1

0x3591,	// (0x000129c8) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x0001eb6c) fep_china_uni_entry_pane_g

0x3599,	// (0x000129d0) fep_entry_item_pane

0x35a3,	// (0x000129da) fep_candidate_item_pane

0x35ab,	// (0x000129e2) fep_china_uni_candidate_pane_g1

0x35b3,	// (0x000129ea) fep_china_uni_candidate_pane_g2

0x35bb,	// (0x000129f2) fep_china_uni_candidate_pane_g3

0x35c3,	// (0x000129fa) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x0001eb71) fep_china_uni_candidate_pane_g

0x1dba,	// (0x000111f1) fep_entry_item_pane_g1

0x35cb,	// (0x00012a02) fep_entry_item_pane_t1_ParamLimits

0x35cb,	// (0x00012a02) fep_entry_item_pane_t1

0x35e1,	// (0x00012a18) fep_candidate_item_pane_t1_ParamLimits

0x35e1,	// (0x00012a18) fep_candidate_item_pane_t1

0x35f6,	// (0x00012a2d) fep_candidate_item_pane_t2_ParamLimits

0x35f6,	// (0x00012a2d) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x0001eb7a) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x0001eb7a) fep_candidate_item_pane_t

0x1ea4,	// (0x000112db) list_highlight_pane_cp31_ParamLimits

0x1ea4,	// (0x000112db) list_highlight_pane_cp31

0x3608,	// (0x00012a3f) level_1_signal_lsc

0x3611,	// (0x00012a48) level_2_signal_lsc

0x361a,	// (0x00012a51) level_3_signal_lsc

0x3623,	// (0x00012a5a) level_4_signal_lsc

0x362c,	// (0x00012a63) level_5_signal_lsc

0x3635,	// (0x00012a6c) level_6_signal_lsc

0x363e,	// (0x00012a75) level_7_signal_lsc

0x363e,	// (0x00012a75) level_1_battery_lsc

0x3647,	// (0x00012a7e) level_2_battery_lsc

0x3650,	// (0x00012a87) level_3_battery_lsc

0x3659,	// (0x00012a90) level_4_battery_lsc

0x3662,	// (0x00012a99) level_5_battery_lsc

0x366b,	// (0x00012aa2) level_6_battery_lsc

0x3608,	// (0x00012a3f) level_7_battery_lsc

0x3674,	// (0x00012aab) scroll_handle_focus_pane_g1

0x367d,	// (0x00012ab4) scroll_handle_focus_pane_g2

0x3686,	// (0x00012abd) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x0001eb7f) scroll_handle_focus_pane_g

0xc8af,	// (0x0001bce6) list_single_2graphic_pane_g1_ParamLimits

0xc8af,	// (0x0001bce6) list_single_2graphic_pane_g1

0xc19a,	// (0x0001b5d1) list_single_2graphic_pane_g2_ParamLimits

0xc19a,	// (0x0001b5d1) list_single_2graphic_pane_g2

0x48be,	// (0x00013cf5) list_single_2graphic_pane_g3_ParamLimits

0x48be,	// (0x00013cf5) list_single_2graphic_pane_g3

0xc8bb,	// (0x0001bcf2) list_single_2graphic_pane_g4_ParamLimits

0xc8bb,	// (0x0001bcf2) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x0001eb86) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x0001eb86) list_single_2graphic_pane_g

0xc8c7,	// (0x0001bcfe) list_single_2graphic_pane_t1_ParamLimits

0xc8c7,	// (0x0001bcfe) list_single_2graphic_pane_t1

0xc8f5,	// (0x0001bd2c) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc8f5,	// (0x0001bd2c) list_double2_graphic_large_graphic_pane_g1

0xc1f9,	// (0x0001b630) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xc1f9,	// (0x0001b630) list_double2_graphic_large_graphic_pane_g2

0x29f2,	// (0x00011e29) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x29f2,	// (0x00011e29) list_double2_graphic_large_graphic_pane_g3

0xc907,	// (0x0001bd3e) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xc907,	// (0x0001bd3e) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x0001eb8f) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x0001eb8f) list_double2_graphic_large_graphic_pane_g

0xc913,	// (0x0001bd4a) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xc913,	// (0x0001bd4a) list_double2_graphic_large_graphic_pane_t1

0xc929,	// (0x0001bd60) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xc929,	// (0x0001bd60) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x0001eb98) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x0001eb98) list_double2_graphic_large_graphic_pane_t

0x385d,	// (0x00012c94) popup_fast_swap_window_ParamLimits

0x385d,	// (0x00012c94) popup_fast_swap_window

0x3879,	// (0x00012cb0) popup_side_volume_key_window

0x3895,	// (0x00012ccc) stacon_top_pane

0x389f,	// (0x00012cd6) status_pane_ParamLimits

0x389f,	// (0x00012cd6) status_pane

0x3895,	// (0x00012ccc) status_small_pane

0x1dc4,	// (0x000111fb) control_pane

0x1dc4,	// (0x000111fb) stacon_bottom_pane

0x2b9c,	// (0x00011fd3) scroll_pane_cp121

0x2b93,	// (0x00011fca) set_content_pane

0x3739,	// (0x00012b70) bg_active_tab_pane_g1_cp1

0x3727,	// (0x00012b5e) bg_active_tab_pane_g2_cp1

0x3742,	// (0x00012b79) bg_active_tab_pane_g3_cp1

0x3739,	// (0x00012b70) bg_passive_tab_pane_g1_cp1

0x3727,	// (0x00012b5e) bg_passive_tab_pane_g2_cp1

0x3742,	// (0x00012b79) bg_passive_tab_pane_g3_cp1

0xc93b,	// (0x0001bd72) bg_active_tab_pane_g1_cp2

0x3727,	// (0x00012b5e) bg_active_tab_pane_g2_cp2

0xc944,	// (0x0001bd7b) bg_active_tab_pane_g3_cp2

0xc93b,	// (0x0001bd72) bg_passive_tab_pane_g1_cp2

0x3727,	// (0x00012b5e) bg_passive_tab_pane_g2_cp2

0xc944,	// (0x0001bd7b) bg_passive_tab_pane_g3_cp2

0xc94d,	// (0x0001bd84) bg_active_tab_pane_g1_cp3

0x3727,	// (0x00012b5e) bg_active_tab_pane_g2_cp3

0xc956,	// (0x0001bd8d) bg_active_tab_pane_g3_cp3

0xc94d,	// (0x0001bd84) bg_passive_tab_pane_g1_cp3

0x3727,	// (0x00012b5e) bg_passive_tab_pane_g2_cp3

0xc956,	// (0x0001bd8d) bg_passive_tab_pane_g3_cp3

0xc95f,	// (0x0001bd96) bg_active_tab_pane_g1_cp4

0x3727,	// (0x00012b5e) bg_active_tab_pane_g2_cp4

0xc968,	// (0x0001bd9f) bg_active_tab_pane_g3_cp4

0xc95f,	// (0x0001bd96) bg_passive_tab_pane_g1_cp4

0x3727,	// (0x00012b5e) bg_passive_tab_pane_g2_cp4

0xc968,	// (0x0001bd9f) bg_passive_tab_pane_g3_cp4

0x37b1,	// (0x00012be8) bg_active_tab_pane_g1_cp5

0x3727,	// (0x00012b5e) bg_active_tab_pane_g2_cp5

0x37ba,	// (0x00012bf1) bg_active_tab_pane_g3_cp5

0x37b1,	// (0x00012be8) bg_passive_tab_pane_g1_cp5

0x3727,	// (0x00012b5e) bg_passive_tab_pane_g2_cp5

0x37ba,	// (0x00012bf1) bg_passive_tab_pane_g3_cp5

0xc971,	// (0x0001bda8) list_set_graphic_pane_ParamLimits

0xc971,	// (0x0001bda8) list_set_graphic_pane

0x1dc4,	// (0x000111fb) bg_set_opt_pane_cp4

0xc983,	// (0x0001bdba) list_set_graphic_pane_g1_ParamLimits

0xc983,	// (0x0001bdba) list_set_graphic_pane_g1

0xc98f,	// (0x0001bdc6) list_set_graphic_pane_g2_ParamLimits

0xc98f,	// (0x0001bdc6) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x0001eb9d) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x0001eb9d) list_set_graphic_pane_g

0x0009,

0xfad9,	// (0x0001ef10) volume_small_pane_cp_g

0x3810,	// (0x00012c47) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3810,	// (0x00012c47) list_double2_large_graphic_pane_g1_cp2

0x381c,	// (0x00012c53) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x381c,	// (0x00012c53) list_double2_large_graphic_pane_g2_cp2

0x382d,	// (0x00012c64) list_double2_large_graphic_pane_g3_cp2

0x3835,	// (0x00012c6c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3835,	// (0x00012c6c) list_double2_large_graphic_pane_t1_cp2

0x384b,	// (0x00012c82) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x384b,	// (0x00012c82) list_double2_large_graphic_pane_t2_cp2

0x5ae0,	// (0x00014f17) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5ae0,	// (0x00014f17) list_double_large_graphic_pane_g1_cp2

0x5af1,	// (0x00014f28) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5af1,	// (0x00014f28) list_double_large_graphic_pane_g2_cp2

0x39bb,	// (0x00012df2) list_double_large_graphic_pane_g3_cp2

0x5b02,	// (0x00014f39) list_double_large_graphic_pane_g4_cp

0x5b0a,	// (0x00014f41) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5b0a,	// (0x00014f41) list_double_large_graphic_pane_t1_cp2

0x5b21,	// (0x00014f58) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5b21,	// (0x00014f58) list_double_large_graphic_pane_t2_cp2

0x38ad,	// (0x00012ce4) list_double2_graphic_pane_g1_cp2_ParamLimits

0x38ad,	// (0x00012ce4) list_double2_graphic_pane_g1_cp2

0x38bb,	// (0x00012cf2) list_double2_graphic_pane_g2_cp2_ParamLimits

0x38bb,	// (0x00012cf2) list_double2_graphic_pane_g2_cp2

0x38cc,	// (0x00012d03) list_double2_graphic_pane_g3_cp2

0x38d6,	// (0x00012d0d) list_double2_graphic_pane_t1_cp2_ParamLimits

0x38d6,	// (0x00012d0d) list_double2_graphic_pane_t1_cp2

0x38ec,	// (0x00012d23) list_double2_graphic_pane_t2_cp2_ParamLimits

0x38ec,	// (0x00012d23) list_double2_graphic_pane_t2_cp2

0x38fe,	// (0x00012d35) list_single_number_heading_pane_g1_cp2_ParamLimits

0x38fe,	// (0x00012d35) list_single_number_heading_pane_g1_cp2

0x390a,	// (0x00012d41) list_single_number_heading_pane_g2_cp2

0x3912,	// (0x00012d49) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3912,	// (0x00012d49) list_single_number_heading_pane_t1_cp2

0x3928,	// (0x00012d5f) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3928,	// (0x00012d5f) list_single_number_heading_pane_t2_cp2

0x393a,	// (0x00012d71) list_single_number_heading_pane_t3_cp2_ParamLimits

0x393a,	// (0x00012d71) list_single_number_heading_pane_t3_cp2

0x38fe,	// (0x00012d35) list_single_heading_pane_g1_cp2_ParamLimits

0x38fe,	// (0x00012d35) list_single_heading_pane_g1_cp2

0x390a,	// (0x00012d41) list_single_heading_pane_g2_cp2

0x3912,	// (0x00012d49) list_single_heading_pane_t1_cp2_ParamLimits

0x3912,	// (0x00012d49) list_single_heading_pane_t1_cp2

0x58e8,	// (0x00014d1f) list_single_heading_pane_t2_cp2_ParamLimits

0x58e8,	// (0x00014d1f) list_single_heading_pane_t2_cp2

0x582a,	// (0x00014c61) list_double_graphic_pane_g1_cp2_ParamLimits

0x582a,	// (0x00014c61) list_double_graphic_pane_g1_cp2

0x5836,	// (0x00014c6d) list_double_graphic_pane_g2_cp2_ParamLimits

0x5836,	// (0x00014c6d) list_double_graphic_pane_g2_cp2

0x5845,	// (0x00014c7c) list_double_graphic_pane_g3_cp2

0x584d,	// (0x00014c84) list_double_graphic_pane_t1_cp2_ParamLimits

0x584d,	// (0x00014c84) list_double_graphic_pane_t1_cp2

0x5863,	// (0x00014c9a) list_double_graphic_pane_t2_cp2_ParamLimits

0x5863,	// (0x00014c9a) list_double_graphic_pane_t2_cp2

0x39af,	// (0x00012de6) list_double_number_pane_g1_cp2_ParamLimits

0x39af,	// (0x00012de6) list_double_number_pane_g1_cp2

0x39bb,	// (0x00012df2) list_double_number_pane_g2_cp2

0x57ee,	// (0x00014c25) list_double_number_pane_t1_cp2_ParamLimits

0x57ee,	// (0x00014c25) list_double_number_pane_t1_cp2

0x5802,	// (0x00014c39) list_double_number_pane_t2_cp2_ParamLimits

0x5802,	// (0x00014c39) list_double_number_pane_t2_cp2

0x5818,	// (0x00014c4f) list_double_number_pane_t3_cp2_ParamLimits

0x5818,	// (0x00014c4f) list_double_number_pane_t3_cp2

0x56d7,	// (0x00014b0e) list_single_graphic_pane_g1_cp2_ParamLimits

0x56d7,	// (0x00014b0e) list_single_graphic_pane_g1_cp2

0x3a13,	// (0x00012e4a) list_single_graphic_pane_g2_cp2_ParamLimits

0x3a13,	// (0x00012e4a) list_single_graphic_pane_g2_cp2

0x3a1f,	// (0x00012e56) list_single_graphic_pane_g3_cp2

0x56ad,	// (0x00014ae4) list_single_graphic_pane_t1_cp2_ParamLimits

0x56ad,	// (0x00014ae4) list_single_graphic_pane_t1_cp2

0x3a13,	// (0x00012e4a) list_single_number_pane_g1_cp2_ParamLimits

0x3a13,	// (0x00012e4a) list_single_number_pane_g1_cp2

0x3a1f,	// (0x00012e56) list_single_number_pane_g2_cp2

0x56ad,	// (0x00014ae4) list_single_number_pane_t1_cp2_ParamLimits

0x56ad,	// (0x00014ae4) list_single_number_pane_t1_cp2

0x56c3,	// (0x00014afa) list_single_number_pane_t2_cp2_ParamLimits

0x56c3,	// (0x00014afa) list_single_number_pane_t2_cp2

0x381c,	// (0x00012c53) list_double2_pane_g1_cp2_ParamLimits

0x381c,	// (0x00012c53) list_double2_pane_g1_cp2

0x382d,	// (0x00012c64) list_double2_pane_g2_cp2

0x3987,	// (0x00012dbe) list_double2_pane_t1_cp2_ParamLimits

0x3987,	// (0x00012dbe) list_double2_pane_t1_cp2

0x399d,	// (0x00012dd4) list_double2_pane_t2_cp2_ParamLimits

0x399d,	// (0x00012dd4) list_double2_pane_t2_cp2

0x39af,	// (0x00012de6) list_double_pane_g1_cp2_ParamLimits

0x39af,	// (0x00012de6) list_double_pane_g1_cp2

0x39bb,	// (0x00012df2) list_double_pane_g2_cp2

0x39c3,	// (0x00012dfa) list_double_pane_t1_cp2_ParamLimits

0x39c3,	// (0x00012dfa) list_double_pane_t1_cp2

0x39d9,	// (0x00012e10) list_double_pane_t2_cp2_ParamLimits

0x39d9,	// (0x00012e10) list_double_pane_t2_cp2

0x3a03,	// (0x00012e3a) list_single_pane_cp2_g3

0x3a13,	// (0x00012e4a) list_single_pane_g1_cp2_ParamLimits

0x3a13,	// (0x00012e4a) list_single_pane_g1_cp2

0x3a1f,	// (0x00012e56) list_single_pane_g2_cp2

0x3a27,	// (0x00012e5e) list_single_pane_t1_cp2_ParamLimits

0x3a27,	// (0x00012e5e) list_single_pane_t1_cp2

0x3a3f,	// (0x00012e76) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3a3f,	// (0x00012e76) list_single_large_graphic_pane_g1_cp2

0x3a4b,	// (0x00012e82) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3a4b,	// (0x00012e82) list_single_large_graphic_pane_g2_cp2

0x3a57,	// (0x00012e8e) list_single_large_graphic_pane_g3_cp2

0x3a5f,	// (0x00012e96) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3a5f,	// (0x00012e96) list_single_large_graphic_pane_g4_cp1

0x3a79,	// (0x00012eb0) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3a79,	// (0x00012eb0) list_single_large_graphic_pane_t1_cp2

0x5679,	// (0x00014ab0) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5679,	// (0x00014ab0) list_single_graphic_heading_pane_g1_cp2

0x5646,	// (0x00014a7d) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5646,	// (0x00014a7d) list_single_graphic_heading_pane_g4_cp2

0x3a1f,	// (0x00012e56) list_single_graphic_heading_pane_g5_cp2

0x5685,	// (0x00014abc) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5685,	// (0x00014abc) list_single_graphic_heading_pane_t1_cp2

0x569b,	// (0x00014ad2) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x569b,	// (0x00014ad2) list_single_graphic_heading_pane_t2_cp2

0x563a,	// (0x00014a71) list_single_2graphic_pane_g1_cp2_ParamLimits

0x563a,	// (0x00014a71) list_single_2graphic_pane_g1_cp2

0x5646,	// (0x00014a7d) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5646,	// (0x00014a7d) list_single_2graphic_pane_g2_cp2

0x3a1f,	// (0x00012e56) list_single_2graphic_pane_g3_cp2

0x5657,	// (0x00014a8e) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5657,	// (0x00014a8e) list_single_2graphic_pane_g4_cp2

0x5663,	// (0x00014a9a) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5663,	// (0x00014a9a) list_single_2graphic_pane_t1_cp2

0x1dba,	// (0x000111f1) list_highlight_pane_g10_cp1

0x5212,	// (0x00014649) list_highlight_pane_g1_cp1

0x521a,	// (0x00014651) list_highlight_pane_g2_cp1

0x5222,	// (0x00014659) list_highlight_pane_g3_cp1

0x522a,	// (0x00014661) list_highlight_pane_g4_cp1

0x5232,	// (0x00014669) list_highlight_pane_g5_cp1

0x523a,	// (0x00014671) list_highlight_pane_g6_cp1

0x5242,	// (0x00014679) list_highlight_pane_g7_cp1

0x524a,	// (0x00014681) list_highlight_pane_g8_cp1

0x5252,	// (0x00014689) list_highlight_pane_g9_cp1

0xd617,	// (0x0001ca4e) form_field_slider_pane_t3

0xd625,	// (0x0001ca5c) form_field_slider_pane_t4

0x514e,	// (0x00014585) slider_form_pane_ParamLimits

0x514e,	// (0x00014585) slider_form_pane

0x1dc4,	// (0x000111fb) control_abbreviations

0x1dc4,	// (0x000111fb) control_conventions

0x1dc4,	// (0x000111fb) control_definitions

0x1dc4,	// (0x000111fb) format_table_attribute

0x5932,	// (0x00014d69) bg_popup_preview_window_pane_g9

0x1dc4,	// (0x000111fb) format_table_data2

0x1dc4,	// (0x000111fb) format_table_data3

0x1dc4,	// (0x000111fb) format_table_data_example

0x0008,

0x1dc4,	// (0x000111fb) intro_purpose

0xf8f6,	// (0x0001ed2d) bg_popup_preview_window_pane_g

0x1dc4,	// (0x000111fb) texts_category

0x1dc4,	// (0x000111fb) texts_graphics

0x3a8f,	// (0x00012ec6) text_digital

0x3a9e,	// (0x00012ed5) text_primary

0x3aad,	// (0x00012ee4) text_primary_small

0x3abc,	// (0x00012ef3) text_secondary

0x3acb,	// (0x00012f02) text_title

0x6159,	// (0x00015590) bg_passive_tab_pane_g1_cp3_srt

0x3727,	// (0x00012b5e) bg_passive_tab_pane_g2_cp3_srt

0x6162,	// (0x00015599) bg_passive_tab_pane_g3_cp3_srt

0x2139,	// (0x00011570) bg_active_tab_pane_cp3_srt_ParamLimits

0x2139,	// (0x00011570) bg_active_tab_pane_cp3_srt

0x616b,	// (0x000155a2) tabs_4_active_pane_srt_g1

0xd9e8,	// (0x0001ce1f) tabs_4_active_pane_srt_t1_ParamLimits

0xd9e8,	// (0x0001ce1f) tabs_4_active_pane_srt_t1

0x6159,	// (0x00015590) bg_active_tab_pane_g1_cp3_copy1

0x3727,	// (0x00012b5e) bg_active_tab_pane_g2_cp3_copy1

0x6162,	// (0x00015599) bg_active_tab_pane_g3_cp3_copy1

0x1ea4,	// (0x000112db) tabs_2_long_active_pane_srt_ParamLimits

0x1ea4,	// (0x000112db) tabs_2_long_active_pane_srt

0x1ea4,	// (0x000112db) tabs_2_long_passive_pane_srt_ParamLimits

0x1ea4,	// (0x000112db) tabs_2_long_passive_pane_srt

0x3e64,	// (0x0001329b) bg_passive_tab_pane_cp4_srt_ParamLimits

0x3e64,	// (0x0001329b) bg_passive_tab_pane_cp4_srt

0x5d9e,	// (0x000151d5) bg_passive_tab_pane_g1_cp4_srt

0x3727,	// (0x00012b5e) bg_passive_tab_pane_g2_cp4_srt

0x5da7,	// (0x000151de) bg_passive_tab_pane_g3_cp4_srt

0x1ea4,	// (0x000112db) bg_active_tab_pane_cp4_srt_ParamLimits

0x1ea4,	// (0x000112db) bg_active_tab_pane_cp4_srt

0xd7c9,	// (0x0001cc00) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd7c9,	// (0x0001cc00) tabs_2_long_active_pane_srt_t1

0x5d9e,	// (0x000151d5) bg_active_tab_pane_g1_cp4_srt

0x3727,	// (0x00012b5e) bg_active_tab_pane_g2_cp4_srt

0x5da7,	// (0x000151de) bg_active_tab_pane_g3_cp4_srt

0x2139,	// (0x00011570) tabs_3_long_active_pane_srt_ParamLimits

0x2139,	// (0x00011570) tabs_3_long_active_pane_srt

0x2139,	// (0x00011570) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2139,	// (0x00011570) tabs_3_long_passive_pane_cp_srt

0x2139,	// (0x00011570) tabs_3_long_passive_pane_srt_ParamLimits

0x2139,	// (0x00011570) tabs_3_long_passive_pane_srt

0x3e64,	// (0x0001329b) bg_passive_tab_pane_cp5_srt_ParamLimits

0x3e64,	// (0x0001329b) bg_passive_tab_pane_cp5_srt

0x37b1,	// (0x00012be8) bg_passive_tab_pane_g1_cp5_srt

0x3727,	// (0x00012b5e) bg_passive_tab_pane_g2_cp5_srt

0x37ba,	// (0x00012bf1) bg_passive_tab_pane_g3_cp5_srt

0x1ea4,	// (0x000112db) bg_active_tab_pane_cp5_srt_ParamLimits

0x1ea4,	// (0x000112db) bg_active_tab_pane_cp5_srt

0xd7b3,	// (0x0001cbea) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd7b3,	// (0x0001cbea) tabs_3_long_active_pane_srt_t1

0x37b1,	// (0x00012be8) bg_active_tab_pane_g1_cp5_srt

0x3727,	// (0x00012b5e) bg_active_tab_pane_g2_cp5_srt

0x37ba,	// (0x00012bf1) bg_active_tab_pane_g3_cp5_srt

0x5d7e,	// (0x000151b5) navi_text_pane_srt_t1

0x5d76,	// (0x000151ad) navi_icon_pane_srt_g1

0x3c9e,	// (0x000130d5) midp_editing_number_pane_srt

0x3ada,	// (0x00012f11) midp_ticker_pane_srt

0x3ca6,	// (0x000130dd) midp_ticker_pane_srt_g1

0x3cae,	// (0x000130e5) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x0001ebbc) midp_ticker_pane_srt_g

0x3cb6,	// (0x000130ed) midp_ticker_pane_srt_t1

0x5d67,	// (0x0001519e) midp_editing_number_pane_t1_copy1

0xc9b3,	// (0x0001bdea) listscroll_midp_pane

0xc9b3,	// (0x0001bdea) midp_form_pane

0x3b50,	// (0x00012f87) midp_info_popup_window_ParamLimits

0x3b50,	// (0x00012f87) midp_info_popup_window

0x2ec0,	// (0x000122f7) bg_popup_sub_pane_cp50_ParamLimits

0x2ec0,	// (0x000122f7) bg_popup_sub_pane_cp50

0x4e4a,	// (0x00014281) listscroll_midp_info_pane_ParamLimits

0x4e4a,	// (0x00014281) listscroll_midp_info_pane

0x4e32,	// (0x00014269) listscroll_form_midp_pane_ParamLimits

0x4e32,	// (0x00014269) listscroll_form_midp_pane

0x4e3e,	// (0x00014275) scroll_bar_cp050

0xd60b,	// (0x0001ca42) list_midp_pane

0x6d7a,	// (0x000161b1) signal_pane_g2_cp

0x4d4c,	// (0x00014183) listscroll_midp_info_pane_t1_ParamLimits

0x4d4c,	// (0x00014183) listscroll_midp_info_pane_t1

0x4d64,	// (0x0001419b) listscroll_midp_info_pane_t2_ParamLimits

0x4d64,	// (0x0001419b) listscroll_midp_info_pane_t2

0x4da2,	// (0x000141d9) listscroll_midp_info_pane_t3_ParamLimits

0x4da2,	// (0x000141d9) listscroll_midp_info_pane_t3

0x4ddc,	// (0x00014213) listscroll_midp_info_pane_t4_ParamLimits

0x4ddc,	// (0x00014213) listscroll_midp_info_pane_t4

0x0003,

0xf831,	// (0x0001ec68) listscroll_midp_info_pane_t_ParamLimits

0xf831,	// (0x0001ec68) listscroll_midp_info_pane_t

0x2f82,	// (0x000123b9) scroll_pane_cp21

0x4cea,	// (0x00014121) form_midp_field_choice_group_pane

0x4cf3,	// (0x0001412a) form_midp_field_text_pane

0x4d32,	// (0x00014169) form_midp_field_time_pane

0x4d3a,	// (0x00014171) form_midp_gauge_slider_pane

0x4d43,	// (0x0001417a) form_midp_gauge_wait_pane

0x1dc4,	// (0x000111fb) form_midp_image_pane

0xd5f2,	// (0x0001ca29) list_single_midp_pane_ParamLimits

0xd5f2,	// (0x0001ca29) list_single_midp_pane

0xd5d0,	// (0x0001ca07) form_midp_field_text_pane_t1

0x4a56,	// (0x00013e8d) input_focus_pane_cp050

0x4caa,	// (0x000140e1) list_midp_form_text_pane

0x4c42,	// (0x00014079) form_midp_field_choice_group_pane_t1

0x4c50,	// (0x00014087) input_focus_pane_cp051

0x4c64,	// (0x0001409b) list_midp_choice_pane

0x1dc4,	// (0x000111fb) status_idle_pane

0x4c26,	// (0x0001405d) form_midp_field_time_pane_t1

0x1dba,	// (0x000111f1) wait_anim_pane_g2_copy1

0x4c34,	// (0x0001406b) form_midp_field_time_pane_t2

0x0001,

0x3bfe,	// (0x00013035) aid_navinavi_width_2_pane

0xf82c,	// (0x0001ec63) form_midp_field_time_pane_t

0x1dc4,	// (0x000111fb) input_focus_pane_cp052

0x1dc4,	// (0x000111fb) bg_input_focus_pane_cp040

0x4be6,	// (0x0001401d) form_midp_gauge_slider_pane_t1

0x4bf4,	// (0x0001402b) form_midp_gauge_slider_pane_t2

0xd5b4,	// (0x0001c9eb) form_midp_gauge_slider_pane_t3

0xd5c2,	// (0x0001c9f9) form_midp_gauge_slider_pane_t4

0x0003,

0xf823,	// (0x0001ec5a) form_midp_gauge_slider_pane_t

0x4c1e,	// (0x00014055) form_midp_slider_pane

0x1ea4,	// (0x000112db) bg_input_focus_pane_cp041_ParamLimits

0x1ea4,	// (0x000112db) bg_input_focus_pane_cp041

0x4bb3,	// (0x00013fea) form_midp_gauge_wait_pane_t1_ParamLimits

0x4bb3,	// (0x00013fea) form_midp_gauge_wait_pane_t1

0x4bc5,	// (0x00013ffc) form_midp_gauge_wait_pane_t2_ParamLimits

0x4bc5,	// (0x00013ffc) form_midp_gauge_wait_pane_t2

0x0001,

0xf81e,	// (0x0001ec55) form_midp_gauge_wait_pane_t_ParamLimits

0xf81e,	// (0x0001ec55) form_midp_gauge_wait_pane_t

0x4bd7,	// (0x0001400e) form_midp_wait_pane_ParamLimits

0x4bd7,	// (0x0001400e) form_midp_wait_pane

0x4b7d,	// (0x00013fb4) form_midp_image_pane_g1

0x4b86,	// (0x00013fbd) form_midp_image_pane_t1

0x4b95,	// (0x00013fcc) form_midp_image_pane_t2

0x4ba4,	// (0x00013fdb) form_midp_image_pane_t3

0x0002,

0xf817,	// (0x0001ec4e) form_midp_image_pane_t

0x4b65,	// (0x00013f9c) list_single_midp_pane_g1

0x4b6e,	// (0x00013fa5) list_single_midp_pane_t1

0xd59f,	// (0x0001c9d6) list_midp_form_item_pane_ParamLimits

0xd59f,	// (0x0001c9d6) list_midp_form_item_pane

0x3ba6,	// (0x00012fdd) list_midp_form_item_pane_t1

0x3bb5,	// (0x00012fec) midp_ticker_pane_g1

0x3bc1,	// (0x00012ff8) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x0001eba2) midp_ticker_pane_g

0xca5b,	// (0x0001be92) midp_ticker_pane_t1

0xd950,	// (0x0001cd87) midp_editing_number_pane_t1

0x5fc9,	// (0x00015400) midp_editing_number_pane

0x5fd8,	// (0x0001540f) midp_ticker_pane

0x5d2f,	// (0x00015166) ai_message_heading_pane

0x1dc4,	// (0x000111fb) bg_popup_window_pane_cp14

0x5d37,	// (0x0001516e) listscroll_ai_message_pane

0x5cb9,	// (0x000150f0) ai_message_heading_pane_g1_ParamLimits

0x5cb9,	// (0x000150f0) ai_message_heading_pane_g1

0x5cc5,	// (0x000150fc) ai_message_heading_pane_g2_ParamLimits

0x5cc5,	// (0x000150fc) ai_message_heading_pane_g2

0x5cd1,	// (0x00015108) ai_message_heading_pane_g3_ParamLimits

0x5cd1,	// (0x00015108) ai_message_heading_pane_g3

0x5cdd,	// (0x00015114) ai_message_heading_pane_g4_ParamLimits

0x5cdd,	// (0x00015114) ai_message_heading_pane_g4

0x0003,

0xf958,	// (0x0001ed8f) ai_message_heading_pane_g_ParamLimits

0xf958,	// (0x0001ed8f) ai_message_heading_pane_g

0x5ce9,	// (0x00015120) ai_message_heading_pane_t1_ParamLimits

0x5ce9,	// (0x00015120) ai_message_heading_pane_t1

0x5d03,	// (0x0001513a) ai_message_heading_pane_t2_ParamLimits

0x5d03,	// (0x0001513a) ai_message_heading_pane_t2

0x0001,

0xf961,	// (0x0001ed98) ai_message_heading_pane_t_ParamLimits

0xf961,	// (0x0001ed98) ai_message_heading_pane_t

0x5d15,	// (0x0001514c) bg_popup_heading_pane_cp1_ParamLimits

0x5d15,	// (0x0001514c) bg_popup_heading_pane_cp1

0x5ca7,	// (0x000150de) list_ai_message_pane_ParamLimits

0x5ca7,	// (0x000150de) list_ai_message_pane

0x2f82,	// (0x000123b9) scroll_pane_cp10

0x5c43,	// (0x0001507a) list_ai_message_pane_g1

0x5c4b,	// (0x00015082) list_ai_message_pane_g2

0x0001,

0xf935,	// (0x0001ed6c) list_ai_message_pane_g

0x5c53,	// (0x0001508a) list_ai_message_pane_t1_ParamLimits

0x5c53,	// (0x0001508a) list_ai_message_pane_t1

0x5c68,	// (0x0001509f) list_ai_message_pane_t2_ParamLimits

0x5c68,	// (0x0001509f) list_ai_message_pane_t2

0x5c7d,	// (0x000150b4) list_ai_message_pane_t3_ParamLimits

0x5c7d,	// (0x000150b4) list_ai_message_pane_t3

0x5c92,	// (0x000150c9) list_ai_message_pane_t4_ParamLimits

0x5c92,	// (0x000150c9) list_ai_message_pane_t4

0x0003,

0xf93a,	// (0x0001ed71) list_ai_message_pane_t_ParamLimits

0xf93a,	// (0x0001ed71) list_ai_message_pane_t

0xd780,	// (0x0001cbb7) cell_ai_soft_ind_pane_ParamLimits

0xd780,	// (0x0001cbb7) cell_ai_soft_ind_pane

0x3bdf,	// (0x00013016) cell_ai_soft_ind_pane_g1_ParamLimits

0x3bdf,	// (0x00013016) cell_ai_soft_ind_pane_g1

0x1dc4,	// (0x000111fb) grid_highlight_cp1

0x3bec,	// (0x00013023) text_secondary_cp56_ParamLimits

0x3bec,	// (0x00013023) text_secondary_cp56

0x5c03,	// (0x0001503a) example_general_pane_ParamLimits

0x5c03,	// (0x0001503a) example_general_pane

0x5c0f,	// (0x00015046) example_parent_pane_g1_ParamLimits

0x5c0f,	// (0x00015046) example_parent_pane_g1

0x5c1b,	// (0x00015052) example_parent_pane_t1_ParamLimits

0x5c1b,	// (0x00015052) example_parent_pane_t1

0xce76,	// (0x0001c2ad) popup_preview_text_window_ParamLimits

0xce76,	// (0x0001c2ad) popup_preview_text_window

0x3a0b,	// (0x00012e42) list_single_pane_cp2_g4

0x21ef,	// (0x00011626) bg_popup_preview_window_pane_ParamLimits

0x21ef,	// (0x00011626) bg_popup_preview_window_pane

0x593a,	// (0x00014d71) popup_preview_text_window_t1_ParamLimits

0x593a,	// (0x00014d71) popup_preview_text_window_t1

0x5958,	// (0x00014d8f) popup_preview_text_window_t2_ParamLimits

0x5958,	// (0x00014d8f) popup_preview_text_window_t2

0x59a1,	// (0x00014dd8) popup_preview_text_window_t3_ParamLimits

0x59a1,	// (0x00014dd8) popup_preview_text_window_t3

0x59e6,	// (0x00014e1d) popup_preview_text_window_t4_ParamLimits

0x59e6,	// (0x00014e1d) popup_preview_text_window_t4

0x0004,

0xf909,	// (0x0001ed40) popup_preview_text_window_t_ParamLimits

0xf909,	// (0x0001ed40) popup_preview_text_window_t

0x5a64,	// (0x00014e9b) scroll_pane_cp11

0x493c,	// (0x00013d73) bg_popup_preview_window_pane_g1

0x58fa,	// (0x00014d31) bg_popup_preview_window_pane_g2

0x5902,	// (0x00014d39) bg_popup_preview_window_pane_g3

0x590a,	// (0x00014d41) bg_popup_preview_window_pane_g4

0x5912,	// (0x00014d49) bg_popup_preview_window_pane_g5

0x591a,	// (0x00014d51) bg_popup_preview_window_pane_g6

0x5922,	// (0x00014d59) bg_popup_preview_window_pane_g7

0x592a,	// (0x00014d61) bg_popup_preview_window_pane_g8

0x017c,	// (0x0000f5b3) aid_popup_width_pane

0xcdf2,	// (0x0001c229) popup_midp_note_alarm_window_ParamLimits

0xcdf2,	// (0x0001c229) popup_midp_note_alarm_window

0x2c5d,	// (0x00012094) data_form_pane_ParamLimits

0xc5a3,	// (0x0001b9da) form_field_data_pane_g1

0xc5ad,	// (0x0001b9e4) form_field_data_pane_t1_ParamLimits

0x2c8b,	// (0x000120c2) input_focus_pane_ParamLimits

0x2c99,	// (0x000120d0) data_form_wide_pane_ParamLimits

0x2ca5,	// (0x000120dc) form_field_data_wide_pane_g1

0x2cd1,	// (0x00012108) form_field_data_wide_pane_t1_ParamLimits

0x249b,	// (0x000118d2) input_focus_pane_cp6_ParamLimits

0xc739,	// (0x0001bb70) input_popup_find_pane_g1_ParamLimits

0xc739,	// (0x0001bb70) input_popup_find_pane_g1

0x06f0,	// (0x0000fb27) aid_navi_side_left_pane

0x0705,	// (0x0000fb3c) aid_navi_side_right_pane

0x530d,	// (0x00014744) bg_popup_window_pane_cp30_ParamLimits

0x530d,	// (0x00014744) bg_popup_window_pane_cp30

0x5387,	// (0x000147be) popup_midp_note_alarm_window_g1_ParamLimits

0x5387,	// (0x000147be) popup_midp_note_alarm_window_g1

0x53b7,	// (0x000147ee) popup_midp_note_alarm_window_t1_ParamLimits

0x53b7,	// (0x000147ee) popup_midp_note_alarm_window_t1

0x5458,	// (0x0001488f) popup_midp_note_alarm_window_t2_ParamLimits

0x5458,	// (0x0001488f) popup_midp_note_alarm_window_t2

0x5506,	// (0x0001493d) popup_midp_note_alarm_window_t3_ParamLimits

0x5506,	// (0x0001493d) popup_midp_note_alarm_window_t3

0x5538,	// (0x0001496f) popup_midp_note_alarm_window_t4_ParamLimits

0x5538,	// (0x0001496f) popup_midp_note_alarm_window_t4

0x555e,	// (0x00014995) popup_midp_note_alarm_window_t5_ParamLimits

0x555e,	// (0x00014995) popup_midp_note_alarm_window_t5

0x000a,

0xf8a6,	// (0x0001ecdd) popup_midp_note_alarm_window_t_ParamLimits

0xf8a6,	// (0x0001ecdd) popup_midp_note_alarm_window_t

0x560a,	// (0x00014a41) wait_bar_pane_cp1_ParamLimits

0x560a,	// (0x00014a41) wait_bar_pane_cp1

0x1dc4,	// (0x000111fb) wait_anim_pane_copy1

0x1dc4,	// (0x000111fb) wait_border_pane_copy1

0x4ff3,	// (0x0001442a) wait_border_pane_g1_copy1

0x2ceb,	// (0x00012122) form_field_popup_pane_g1

0xc5c7,	// (0x0001b9fe) form_field_popup_pane_t1_ParamLimits

0x2c8b,	// (0x000120c2) input_focus_pane_cp7_ParamLimits

0x2d0b,	// (0x00012142) list_form_pane_ParamLimits

0x2d17,	// (0x0001214e) form_field_popup_wide_pane_g1

0x2d1f,	// (0x00012156) form_field_popup_wide_pane_t1_ParamLimits

0x2c8b,	// (0x000120c2) input_focus_pane_cp8_ParamLimits

0x2d34,	// (0x0001216b) list_form_wide_pane_ParamLimits

0x61e5,	// (0x0001561c) aid_size_cell_graphic_pane

0xc646,	// (0x0001ba7d) data_form_pane_t1_ParamLimits

0xd934,	// (0x0001cd6b) data_form_wide_pane_t1_ParamLimits

0xd22b,	// (0x0001c662) bg_status_flat_pane

0xbddf,	// (0x0001b216) title_pane_t1_ParamLimits

0x1e6c,	// (0x000112a3) title_pane_t2_ParamLimits

0x1e92,	// (0x000112c9) title_pane_t3_ParamLimits

0xf573,	// (0x0001e9aa) title_pane_t_ParamLimits

0x3403,	// (0x0001283a) level_1_signal_ParamLimits

0x3410,	// (0x00012847) level_2_signal_ParamLimits

0x341d,	// (0x00012854) level_3_signal_ParamLimits

0x342a,	// (0x00012861) level_4_signal_ParamLimits

0x3437,	// (0x0001286e) level_5_signal_ParamLimits

0x3444,	// (0x0001287b) level_6_signal_ParamLimits

0x3451,	// (0x00012888) level_7_signal_ParamLimits

0x3403,	// (0x0001283a) level_1_battery_ParamLimits

0x3410,	// (0x00012847) level_2_battery_ParamLimits

0x341d,	// (0x00012854) level_3_battery_ParamLimits

0x342a,	// (0x00012861) level_4_battery_ParamLimits

0x3437,	// (0x0001286e) level_5_battery_ParamLimits

0x3444,	// (0x0001287b) level_6_battery_ParamLimits

0x3451,	// (0x00012888) level_7_battery_ParamLimits

0x5212,	// (0x00014649) bg_status_flat_pane_g1

0x521a,	// (0x00014651) bg_status_flat_pane_g2

0x5222,	// (0x00014659) bg_status_flat_pane_g3

0x522a,	// (0x00014661) bg_status_flat_pane_g4

0x5232,	// (0x00014669) bg_status_flat_pane_g5

0x523a,	// (0x00014671) bg_status_flat_pane_g6

0x5242,	// (0x00014679) bg_status_flat_pane_g7

0xbe73,	// (0x0001b2aa) tabs_3_active_pane_t1_ParamLimits

0xbe73,	// (0x0001b2aa) tabs_3_passive_pane_t1_ParamLimits

0xbe8d,	// (0x0001b2c4) tabs_4_active_pane_t1_ParamLimits

0xbe8d,	// (0x0001b2c4) tabs_4_1_passive_pane_t1_ParamLimits

0xc74f,	// (0x0001bb86) tabs_2_active_pane_t1_ParamLimits

0xc74f,	// (0x0001bb86) tabs_2_passive_pane_t1_ParamLimits

0x1ea4,	// (0x000112db) bg_active_tab_pane_cp4_ParamLimits

0xc761,	// (0x0001bb98) tabs_2_long_active_pane_t1_ParamLimits

0x3e64,	// (0x0001329b) bg_passive_tab_pane_cp4_ParamLimits

0x0ccb,	// (0x00010102) list_single_midp_graphic_pane_t1_ParamLimits

0x1ea4,	// (0x000112db) bg_active_tab_pane_cp5_ParamLimits

0xc774,	// (0x0001bbab) tabs_3_long_active_pane_t1_ParamLimits

0x3e64,	// (0x0001329b) bg_passive_tab_pane_cp5_ParamLimits

0x0ccb,	// (0x00010102) list_single_midp_graphic_pane_t1

0xd22b,	// (0x0001c662) bg_status_flat_pane_ParamLimits

0x4599,	// (0x000139d0) indicator_pane_cp2_ParamLimits

0x4599,	// (0x000139d0) indicator_pane_cp2

0xd3a2,	// (0x0001c7d9) navi_pane_srt_ParamLimits

0xd3a2,	// (0x0001c7d9) navi_pane_srt

0x46e1,	// (0x00013b18) popup_clock_digital_analogue_window_cp1

0x1f9b,	// (0x000113d2) indicator_pane_t1

0x3ada,	// (0x00012f11) copy_highlight_pane

0x3ada,	// (0x00012f11) cursor_graphics_pane

0x3ada,	// (0x00012f11) graphic_within_text_pane

0x3ada,	// (0x00012f11) link_highlight_pane

0x5a27,	// (0x00014e5e) popup_preview_text_window_t5_ParamLimits

0x5a27,	// (0x00014e5e) popup_preview_text_window_t5

0x3c06,	// (0x0001303d) cursor_digital_pane

0x3c06,	// (0x0001303d) cursor_primary_pane

0x3c17,	// (0x0001304e) cursor_primary_small_pane

0x3c1f,	// (0x00013056) cursor_secondary_pane

0x3c27,	// (0x0001305e) cursor_title_pane

0x3c06,	// (0x0001303d) link_highlight_digital_pane

0x3c0e,	// (0x00013045) link_highlight_primary_pane

0x3c17,	// (0x0001304e) link_highlight_primary_small_pane

0x3c1f,	// (0x00013056) link_highlight_secondary_pane

0x3c27,	// (0x0001305e) link_highlight_title_pane

0x3c06,	// (0x0001303d) copy_highlight_digital_pane

0x3c06,	// (0x0001303d) copy_highlight_primary_pane

0x3c17,	// (0x0001304e) copy_highlight_primary_small_pane

0x3c1f,	// (0x00013056) copy_highlight_secondary_pane

0x3c27,	// (0x0001305e) copy_highlight_title_pane

0x3c1f,	// (0x00013056) graphic_text_digital_pane

0x52b0,	// (0x000146e7) graphic_text_primary_pane

0x52b9,	// (0x000146f0) graphic_text_primary_small_pane

0x3c17,	// (0x0001304e) graphic_text_secondary_pane

0x3c06,	// (0x0001303d) graphic_text_title_pane

0xca6d,	// (0x0001bea4) cursor_primary_pane_g1

0x52a2,	// (0x000146d9) cursor_text_primary_t1

0xd647,	// (0x0001ca7e) cursor_primary_small_pane_g1

0x5294,	// (0x000146cb) cursor_text_primary_small_t1

0xd63d,	// (0x0001ca74) cursor_primary_small_pane_g1_copy1

0x527c,	// (0x000146b3) cursor_text_primary_small_t1_copy1

0x525a,	// (0x00014691) cursor_text_title_t1

0xd633,	// (0x0001ca6a) cursor_title_pane_g1

0xca6d,	// (0x0001bea4) cursor_digital_pane_g1

0x3c39,	// (0x00013070) cursor_text_digital_t1

0x3c5e,	// (0x00013095) link_highlight_primary_pane_g1

0x5203,	// (0x0001463a) link_highlight_primary_pane_t1

0x3c47,	// (0x0001307e) link_highlight_primary_small_pane_g1

0x3c4f,	// (0x00013086) link_highlight_primary_small_pane_t1

0x3c5e,	// (0x00013095) link_highlight_secondary_pane_g1

0x3c66,	// (0x0001309d) link_highlight_secondary_pane_t1

0x5177,	// (0x000145ae) link_highlight_title_pane_g1

0x517f,	// (0x000145b6) link_highlight_title_pane_t1

0x5160,	// (0x00014597) link_highlight_digital_pane_g1

0x5168,	// (0x0001459f) link_highlight_digital_pane_t1

0x5038,	// (0x0001446f) copy_highlight_primary_pane_g1

0x5040,	// (0x00014477) copy_highlight_primary_pane_t1

0x5012,	// (0x00014449) copy_highlight_primary_small_pane_g1

0x5029,	// (0x00014460) copy_highlight_primary_small_pane_t1

0x3c75,	// (0x000130ac) copy_highlight_secondary_pane_g1

0x3c7d,	// (0x000130b4) copy_highlight_secondary_pane_t1

0x5012,	// (0x00014449) copy_highlight_title_pane_g1

0x501a,	// (0x00014451) copy_highlight_title_pane_t1

0x5038,	// (0x0001446f) copy_highlight_digital_pane_g1

0x63af,	// (0x000157e6) copy_highlight_digital_pane_t1

0x6303,	// (0x0001573a) graphic_text_primary_pane_g1

0x6393,	// (0x000157ca) graphic_text_primary_pane_t1

0x63a1,	// (0x000157d8) graphic_text_primary_pane_t2

0x0001,

0xf9d5,	// (0x0001ee0c) graphic_text_primary_pane_t

0x636f,	// (0x000157a6) graphic_text_primary_small_pane_g1

0x6377,	// (0x000157ae) graphic_text_primary_small_pane_t1

0x6385,	// (0x000157bc) graphic_text_primary_small_pane_t2

0x0001,

0xf9d0,	// (0x0001ee07) graphic_text_primary_small_pane_t

0x634b,	// (0x00015782) graphic_text_secondary_pane_g1

0x6353,	// (0x0001578a) graphic_text_secondary_pane_t1

0x6361,	// (0x00015798) graphic_text_secondary_pane_t2

0x0001,

0xf9cb,	// (0x0001ee02) graphic_text_secondary_pane_t

0x6327,	// (0x0001575e) graphic_text_title_pane_g1

0x632f,	// (0x00015766) graphic_text_title_pane_t1

0x633d,	// (0x00015774) graphic_text_title_pane_t2

0x0001,

0xf9c6,	// (0x0001edfd) graphic_text_title_pane_t

0x6303,	// (0x0001573a) graphic_text_digital_pane_g1

0x630b,	// (0x00015742) graphic_text_digital_pane_t1

0x6319,	// (0x00015750) graphic_text_digital_pane_t2

0x0001,

0xf9c1,	// (0x0001edf8) graphic_text_digital_pane_t

0x1ea4,	// (0x000112db) navi_icon_pane_srt_ParamLimits

0x1ea4,	// (0x000112db) navi_icon_pane_srt

0x1dc4,	// (0x000111fb) navi_midp_pane_srt

0x1dc4,	// (0x000111fb) navi_navi_pane_srt

0x1ea4,	// (0x000112db) navi_text_pane_srt_ParamLimits

0x1ea4,	// (0x000112db) navi_text_pane_srt

0x62ce,	// (0x00015705) navi_navi_icon_text_pane_srt

0x62d6,	// (0x0001570d) navi_navi_pane_srt_g1_ParamLimits

0x62d6,	// (0x0001570d) navi_navi_pane_srt_g1

0x62e8,	// (0x0001571f) navi_navi_pane_srt_g2_ParamLimits

0x62e8,	// (0x0001571f) navi_navi_pane_srt_g2

0x0001,

0xf9bc,	// (0x0001edf3) navi_navi_pane_srt_g_ParamLimits

0xf9bc,	// (0x0001edf3) navi_navi_pane_srt_g

0x62fa,	// (0x00015731) navi_navi_tabs_pane_srt

0x62ce,	// (0x00015705) navi_navi_text_pane_srt

0x62ce,	// (0x00015705) navi_navi_volume_pane_srt

0x62bf,	// (0x000156f6) navi_navi_text_pane_srt_t1

0x1045,	// (0x0001047c) navi_navi_volume_pane_srt_g1

0x104d,	// (0x00010484) volume_small_pane_srt_ParamLimits

0x104d,	// (0x00010484) volume_small_pane_srt

0x09d0,	// (0x0000fe07) volume_small_pane_srt_g1_ParamLimits

0x09d0,	// (0x0000fe07) volume_small_pane_srt_g1

0x09e0,	// (0x0000fe17) volume_small_pane_srt_g2_ParamLimits

0x09e0,	// (0x0000fe17) volume_small_pane_srt_g2

0x09f1,	// (0x0000fe28) volume_small_pane_srt_g3_ParamLimits

0x09f1,	// (0x0000fe28) volume_small_pane_srt_g3

0x0a02,	// (0x0000fe39) volume_small_pane_srt_g4_ParamLimits

0x0a02,	// (0x0000fe39) volume_small_pane_srt_g4

0x0a13,	// (0x0000fe4a) volume_small_pane_srt_g5_ParamLimits

0x0a13,	// (0x0000fe4a) volume_small_pane_srt_g5

0x0a24,	// (0x0000fe5b) volume_small_pane_srt_g6_ParamLimits

0x0a24,	// (0x0000fe5b) volume_small_pane_srt_g6

0x0a35,	// (0x0000fe6c) volume_small_pane_srt_g7_ParamLimits

0x0a35,	// (0x0000fe6c) volume_small_pane_srt_g7

0x0a46,	// (0x0000fe7d) volume_small_pane_srt_g8_ParamLimits

0x0a46,	// (0x0000fe7d) volume_small_pane_srt_g8

0x0a57,	// (0x0000fe8e) volume_small_pane_srt_g9_ParamLimits

0x0a57,	// (0x0000fe8e) volume_small_pane_srt_g9

0x0a68,	// (0x0000fe9f) volume_small_pane_srt_g10_ParamLimits

0x0a68,	// (0x0000fe9f) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x0001eba7) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x0001eba7) volume_small_pane_srt_g

0x2298,	// (0x000116cf) query_popup_data_pane_cp2

0x62a5,	// (0x000156dc) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x62a5,	// (0x000156dc) navi_navi_icon_text_pane_srt_t1

0x52b0,	// (0x000146e7) navi_tabs_2_long_pane_srt

0x52b0,	// (0x000146e7) navi_tabs_2_pane_srt

0x52b0,	// (0x000146e7) navi_tabs_3_long_pane_srt

0x52b0,	// (0x000146e7) navi_tabs_3_pane_srt

0x52b0,	// (0x000146e7) navi_tabs_4_pane_srt

0x1025,	// (0x0001045c) tabs_2_active_pane_srt_ParamLimits

0x1025,	// (0x0001045c) tabs_2_active_pane_srt

0x1035,	// (0x0001046c) tabs_2_passive_pane_srt_ParamLimits

0x1035,	// (0x0001046c) tabs_2_passive_pane_srt

0x4a56,	// (0x00013e8d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4a56,	// (0x00013e8d) bg_passive_tab_pane_cp1_srt

0x6271,	// (0x000156a8) bg_passive_tab_pane_g1_cp1_srt

0x3727,	// (0x00012b5e) bg_passive_tab_pane_g2_cp1_srt

0x627a,	// (0x000156b1) bg_passive_tab_pane_g3_cp1_srt

0x2139,	// (0x00011570) bg_active_tab_pane_cp1_srt_ParamLimits

0x2139,	// (0x00011570) bg_active_tab_pane_cp1_srt

0x6283,	// (0x000156ba) tabs_2_active_pane_srt_g1

0xda64,	// (0x0001ce9b) tabs_2_active_pane_srt_t1_ParamLimits

0xda64,	// (0x0001ce9b) tabs_2_active_pane_srt_t1

0x6271,	// (0x000156a8) bg_active_tab_pane_g1_cp1_srt

0x3727,	// (0x00012b5e) bg_active_tab_pane_g2_cp1_srt

0x627a,	// (0x000156b1) bg_active_tab_pane_g3_cp1_srt

0x0ff2,	// (0x00010429) tabs_3_active_pane_srt_ParamLimits

0x0ff2,	// (0x00010429) tabs_3_active_pane_srt

0x1003,	// (0x0001043a) tabs_3_passive_pane_cp_srt_ParamLimits

0x1003,	// (0x0001043a) tabs_3_passive_pane_cp_srt

0x1014,	// (0x0001044b) tabs_3_passive_pane_srt_ParamLimits

0x1014,	// (0x0001044b) tabs_3_passive_pane_srt

0x4a56,	// (0x00013e8d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4a56,	// (0x00013e8d) bg_passive_tab_pane_cp2_srt

0x3c8c,	// (0x000130c3) bg_passive_tab_pane_g1_cp2_srt

0x3727,	// (0x00012b5e) bg_passive_tab_pane_g2_cp2_srt

0x3c95,	// (0x000130cc) bg_passive_tab_pane_g3_cp2_srt

0x2139,	// (0x00011570) bg_active_tab_pane_cp2_srt_ParamLimits

0x2139,	// (0x00011570) bg_active_tab_pane_cp2_srt

0x6257,	// (0x0001568e) tabs_3_active_pane_srt_g1

0xda4e,	// (0x0001ce85) tabs_3_active_pane_srt_t1_ParamLimits

0xda4e,	// (0x0001ce85) tabs_3_active_pane_srt_t1

0x3c8c,	// (0x000130c3) bg_active_tab_pane_g1_cp2_srt

0x3727,	// (0x00012b5e) bg_active_tab_pane_g2_cp2_srt

0x3c95,	// (0x000130cc) bg_active_tab_pane_g3_cp2_srt

0x0faa,	// (0x000103e1) tabs_4_active_pane_srt_ParamLimits

0x0faa,	// (0x000103e1) tabs_4_active_pane_srt

0x0fbc,	// (0x000103f3) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0fbc,	// (0x000103f3) tabs_4_passive_pane_cp2_srt

0x3dea,	// (0x00013221) aid_size_cell_toolbar

0x5e0f,	// (0x00015246) main_idle_act_pane_ParamLimits

0x4009,	// (0x00013440) popup_large_graphic_colour_window_ParamLimits

0xd0f6,	// (0x0001c52d) popup_toolbar_window_ParamLimits

0xd0f6,	// (0x0001c52d) popup_toolbar_window

0x6015,	// (0x0001544c) list_single_graphic_2heading_pane_ParamLimits

0x6015,	// (0x0001544c) list_single_graphic_2heading_pane

0x31b2,	// (0x000125e9) aid_size_cell_apps_grid_lsc_pane

0x31c4,	// (0x000125fb) aid_size_cell_apps_grid_prt_pane

0x3e64,	// (0x0001329b) bg_wml_button_pane_cp1_ParamLimits

0x3e64,	// (0x0001329b) bg_wml_button_pane_cp1

0xd5d0,	// (0x0001ca07) form_midp_field_text_pane_t1_ParamLimits

0x4a56,	// (0x00013e8d) input_focus_pane_cp050_ParamLimits

0x4caa,	// (0x000140e1) list_midp_form_text_pane_ParamLimits

0x4c50,	// (0x00014087) input_focus_pane_cp051_ParamLimits

0x4c64,	// (0x0001409b) list_midp_choice_pane_ParamLimits

0xd56b,	// (0x0001c9a2) list_single_2graphic_pane_cp3_ParamLimits

0xd56b,	// (0x0001c9a2) list_single_2graphic_pane_cp3

0xd57f,	// (0x0001c9b6) list_single_midp_graphic_pane_ParamLimits

0xd57f,	// (0x0001c9b6) list_single_midp_graphic_pane

0x0bce,	// (0x00010005) list_single_graphic_2heading_pane_g1_ParamLimits

0x0bce,	// (0x00010005) list_single_graphic_2heading_pane_g1

0x0bda,	// (0x00010011) list_single_graphic_2heading_pane_g4_ParamLimits

0x0bda,	// (0x00010011) list_single_graphic_2heading_pane_g4

0x0be6,	// (0x0001001d) list_single_graphic_2heading_pane_g5_ParamLimits

0x0be6,	// (0x0001001d) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x0001ebfa) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x0001ebfa) list_single_graphic_2heading_pane_g

0x0bf2,	// (0x00010029) list_single_graphic_2heading_pane_t1_ParamLimits

0x0bf2,	// (0x00010029) list_single_graphic_2heading_pane_t1

0x0c06,	// (0x0001003d) list_single_graphic_2heading_pane_t2_ParamLimits

0x0c06,	// (0x0001003d) list_single_graphic_2heading_pane_t2

0x0c22,	// (0x00010059) list_single_graphic_2heading_pane_t3_ParamLimits

0x0c22,	// (0x00010059) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x0001ec01) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x0001ec01) list_single_graphic_2heading_pane_t

0x4840,	// (0x00013c77) bg_popup_sub_pane_cp2

0x486a,	// (0x00013ca1) grid_toobar_pane

0x0c3a,	// (0x00010071) cell_toolbar_pane_ParamLimits

0x0c3a,	// (0x00010071) cell_toolbar_pane

0x48e0,	// (0x00013d17) cell_toolbar_pane_g1_ParamLimits

0x48e0,	// (0x00013d17) cell_toolbar_pane_g1

0x48f4,	// (0x00013d2b) cell_toolbar_pane_g2_ParamLimits

0x48f4,	// (0x00013d2b) cell_toolbar_pane_g2

0x0001,

0xf7d8,	// (0x0001ec0f) cell_toolbar_pane_g_ParamLimits

0xf7d8,	// (0x0001ec0f) cell_toolbar_pane_g

0x4916,	// (0x00013d4d) grid_highlight_pane_cp2_ParamLimits

0x4916,	// (0x00013d4d) grid_highlight_pane_cp2

0x4930,	// (0x00013d67) toolbar_button_pane

0x493c,	// (0x00013d73) toolbar_button_pane_g1

0x4944,	// (0x00013d7b) toolbar_button_pane_g2

0x494c,	// (0x00013d83) toolbar_button_pane_g3

0x4954,	// (0x00013d8b) toolbar_button_pane_g4

0x495c,	// (0x00013d93) toolbar_button_pane_g5

0x4964,	// (0x00013d9b) toolbar_button_pane_g6

0x496c,	// (0x00013da3) toolbar_button_pane_g7

0x4974,	// (0x00013dab) toolbar_button_pane_g8

0x497c,	// (0x00013db3) toolbar_button_pane_g9

0x0009,

0xf7dd,	// (0x0001ec14) toolbar_button_pane_g

0x0c72,	// (0x000100a9) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0c72,	// (0x000100a9) list_single_2graphic_pane_g1_cp3

0xb745,	// (0x0001ab7c) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb745,	// (0x0001ab7c) list_single_2graphic_pane_g2_cp3

0x0c8f,	// (0x000100c6) list_single_2graphic_pane_g3_cp3

0x0c97,	// (0x000100ce) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0c97,	// (0x000100ce) list_single_2graphic_pane_g4_cp3

0x0ca3,	// (0x000100da) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0ca3,	// (0x000100da) list_single_2graphic_pane_t1_cp3

0x0cbf,	// (0x000100f6) list_single_midp_graphic_pane_g2_ParamLimits

0x0cbf,	// (0x000100f6) list_single_midp_graphic_pane_g2

0x3df2,	// (0x00013229) aid_zoom_text_primary

0x3dfa,	// (0x00013231) aid_zoom_text_secondary

0x3d49,	// (0x00013180) status_small_pane_g7_ParamLimits

0x3d49,	// (0x00013180) status_small_pane_g7

0x3d6c,	// (0x000131a3) status_small_pane_t1_ParamLimits

0xbdbb,	// (0x0001b1f2) title_pane_g2

0x0003,

0xf56a,	// (0x0001e9a1) title_pane_g

0xc043,	// (0x0001b47a) aid_size_cell_colour_1_pane_ParamLimits

0xc043,	// (0x0001b47a) aid_size_cell_colour_1_pane

0xc057,	// (0x0001b48e) aid_size_cell_colour_2_pane_ParamLimits

0xc057,	// (0x0001b48e) aid_size_cell_colour_2_pane

0xc06b,	// (0x0001b4a2) aid_size_cell_colour_3_pane_ParamLimits

0xc06b,	// (0x0001b4a2) aid_size_cell_colour_3_pane

0xc07f,	// (0x0001b4b6) aid_size_cell_colour_4_pane_ParamLimits

0xc07f,	// (0x0001b4b6) aid_size_cell_colour_4_pane

0x062c,	// (0x0000fa63) title_pane_stacon_g1_ParamLimits

0x062c,	// (0x0000fa63) title_pane_stacon_g1

0x5097,	// (0x000144ce) popup_note_wait_window_g3_ParamLimits

0x5097,	// (0x000144ce) popup_note_wait_window_g3

0x510d,	// (0x00014544) popup_note_wait_window_t5_ParamLimits

0x510d,	// (0x00014544) popup_note_wait_window_t5

0x1dc4,	// (0x000111fb) main_feb_china_hwr_fs_writing_pane

0xcb28,	// (0x0001bf5f) popup_feb_china_hwr_fs_window_ParamLimits

0xcb28,	// (0x0001bf5f) popup_feb_china_hwr_fs_window

0xb756,	// (0x0001ab8d) aid_size_cell_hwr_fs_ParamLimits

0xb756,	// (0x0001ab8d) aid_size_cell_hwr_fs

0x4a56,	// (0x00013e8d) bg_popup_sub_pane_cp3_ParamLimits

0x4a56,	// (0x00013e8d) bg_popup_sub_pane_cp3

0xb76b,	// (0x0001aba2) grid_hwr_fs_pane_ParamLimits

0xb76b,	// (0x0001aba2) grid_hwr_fs_pane

0x0d0e,	// (0x00010145) linegrid_hwr_fs_pane_ParamLimits

0x0d0e,	// (0x00010145) linegrid_hwr_fs_pane

0xb783,	// (0x0001abba) cell_hwr_fs_pane_ParamLimits

0xb783,	// (0x0001abba) cell_hwr_fs_pane

0x4a62,	// (0x00013e99) linegrid_hwr_fs_pane_g1_ParamLimits

0x4a62,	// (0x00013e99) linegrid_hwr_fs_pane_g1

0xd53f,	// (0x0001c976) linegrid_hwr_fs_pane_g2_ParamLimits

0xd53f,	// (0x0001c976) linegrid_hwr_fs_pane_g2

0x4a80,	// (0x00013eb7) linegrid_hwr_fs_pane_g3_ParamLimits

0x4a80,	// (0x00013eb7) linegrid_hwr_fs_pane_g3

0x0d40,	// (0x00010177) linegrid_hwr_fs_pane_g4_ParamLimits

0x0d40,	// (0x00010177) linegrid_hwr_fs_pane_g4

0x0d5a,	// (0x00010191) linegrid_hwr_fs_pane_g5_ParamLimits

0x0d5a,	// (0x00010191) linegrid_hwr_fs_pane_g5

0x0004,

0xf803,	// (0x0001ec3a) linegrid_hwr_fs_pane_g_ParamLimits

0xf803,	// (0x0001ec3a) linegrid_hwr_fs_pane_g

0x4a8c,	// (0x00013ec3) cell_hwr_fs_pane_g1_ParamLimits

0x4a8c,	// (0x00013ec3) cell_hwr_fs_pane_g1

0x4777,	// (0x00013bae) cell_hwr_fs_pane_g2_ParamLimits

0x4777,	// (0x00013bae) cell_hwr_fs_pane_g2

0xd551,	// (0x0001c988) cell_hwr_fs_pane_g3_ParamLimits

0xd551,	// (0x0001c988) cell_hwr_fs_pane_g3

0xd55e,	// (0x0001c995) cell_hwr_fs_pane_g4_ParamLimits

0xd55e,	// (0x0001c995) cell_hwr_fs_pane_g4

0x0003,

0xf80e,	// (0x0001ec45) cell_hwr_fs_pane_g_ParamLimits

0xf80e,	// (0x0001ec45) cell_hwr_fs_pane_g

0xb7a9,	// (0x0001abe0) cell_hwr_fs_pane_t1

0x1dc4,	// (0x000111fb) grid_highlight_pane_cp6

0x1dc4,	// (0x000111fb) main_idle_act2_pane

0x2f69,	// (0x000123a0) aid_inside_area_popup_secondary

0xd667,	// (0x0001ca9e) aid_inside_area_window_primary_ParamLimits

0xd667,	// (0x0001ca9e) aid_inside_area_window_primary

0x63be,	// (0x000157f5) ai2_news_ticker_pane

0x63c6,	// (0x000157fd) aid_size_cell_ai1_link_ParamLimits

0x63c6,	// (0x000157fd) aid_size_cell_ai1_link

0xda7a,	// (0x0001ceb1) popup_ai2_data_window_ParamLimits

0xda7a,	// (0x0001ceb1) popup_ai2_data_window

0x63f6,	// (0x0001582d) popup_ai2_link_window_ParamLimits

0x63f6,	// (0x0001582d) popup_ai2_link_window

0x4a56,	// (0x00013e8d) bg_popup_sub_pane_cp4_ParamLimits

0x4a56,	// (0x00013e8d) bg_popup_sub_pane_cp4

0x640a,	// (0x00015841) grid_ai2_link_pane_ParamLimits

0x640a,	// (0x00015841) grid_ai2_link_pane

0x6421,	// (0x00015858) popup_ai2_link_window_g1_ParamLimits

0x6421,	// (0x00015858) popup_ai2_link_window_g1

0x642d,	// (0x00015864) popup_ai2_link_window_g2_ParamLimits

0x642d,	// (0x00015864) popup_ai2_link_window_g2

0x0001,

0xf9da,	// (0x0001ee11) popup_ai2_link_window_g_ParamLimits

0xf9da,	// (0x0001ee11) popup_ai2_link_window_g

0x643c,	// (0x00015873) ai2_mp_button_pane

0x6444,	// (0x0001587b) ai2_mp_volume_pane

0x4c50,	// (0x00014087) bg_popup_sub_pane_cp5_ParamLimits

0x4c50,	// (0x00014087) bg_popup_sub_pane_cp5

0x644c,	// (0x00015883) heading_ai2_gene_pane_ParamLimits

0x644c,	// (0x00015883) heading_ai2_gene_pane

0x6458,	// (0x0001588f) list_ai2_gene_pane_ParamLimits

0x6458,	// (0x0001588f) list_ai2_gene_pane

0x64a0,	// (0x000158d7) cell_ai2_link_pane_ParamLimits

0x64a0,	// (0x000158d7) cell_ai2_link_pane

0x64b6,	// (0x000158ed) cell_ai2_link_pane_g1

0x1dc4,	// (0x000111fb) grid_highlight_pane_cp7

0x1062,	// (0x00010499) ai2_mp_volume_pane_g1

0x6586,	// (0x000159bd) ai2_mp_volume_pane_g2

0xdaa4,	// (0x0001cedb) list_ai2_gene_pane_t1

0x658e,	// (0x000159c5) ai2_mp_volume_pane_g3

0x0002,

0xf9f3,	// (0x0001ee2a) ai2_mp_volume_pane_g

0x106a,	// (0x000104a1) volume_small_pane_cp3

0x6596,	// (0x000159cd) aid_size_cell_ai2_button

0x659e,	// (0x000159d5) grid_ai2_button_pane

0x65a7,	// (0x000159de) cell_ai2_button_pane_ParamLimits

0x65a7,	// (0x000159de) cell_ai2_button_pane

0x1dba,	// (0x000111f1) cell_ai2_button_pane_g1

0x1dc4,	// (0x000111fb) grid_highlight_pane_cp8

0x6546,	// (0x0001597d) ai2_gene_pane_t1_ParamLimits

0x6546,	// (0x0001597d) ai2_gene_pane_t1

0xca9e,	// (0x0001bed5) aid_height_parent_landscape

0xd7e0,	// (0x0001cc17) aid_height_set_list

0x5e0f,	// (0x00015246) aid_size_parent

0x61e5,	// (0x0001561c) aid_size_cell_graphic_pane_ParamLimits

0x6468,	// (0x0001589f) popup_ai2_data_window_g1_ParamLimits

0x6468,	// (0x0001589f) popup_ai2_data_window_g1

0x6474,	// (0x000158ab) ai2_news_ticker_pane_g1

0x647c,	// (0x000158b3) ai2_news_ticker_pane_g2

0x0001,

0xf9df,	// (0x0001ee16) ai2_news_ticker_pane_g

0x6484,	// (0x000158bb) ai2_news_ticker_pane_t1

0x6492,	// (0x000158c9) ai2_news_ticker_pane_t2

0x0001,

0xf9e4,	// (0x0001ee1b) ai2_news_ticker_pane_t

0x64bf,	// (0x000158f6) heading_ai2_gene_pane_g1

0x64c7,	// (0x000158fe) heading_ai2_gene_pane_t1_ParamLimits

0x64c7,	// (0x000158fe) heading_ai2_gene_pane_t1

0x64dc,	// (0x00015913) list_highlight_pane_cp6

0xda8e,	// (0x0001cec5) ai2_gene_pane_ParamLimits

0xda8e,	// (0x0001cec5) ai2_gene_pane

0xdab2,	// (0x0001cee9) list_ai2_gene_pane_t2

0x0001,

0xf9e9,	// (0x0001ee20) list_ai2_gene_pane_t

0x6517,	// (0x0001594e) list_highlight_pane_cp8_ParamLimits

0x6517,	// (0x0001594e) list_highlight_pane_cp8

0x6528,	// (0x0001595f) ai2_gene_pane_g1_ParamLimits

0x6528,	// (0x0001595f) ai2_gene_pane_g1

0x653a,	// (0x00015971) ai2_gene_pane_g2_ParamLimits

0x653a,	// (0x00015971) ai2_gene_pane_g2

0x0001,

0xf9ee,	// (0x0001ee25) ai2_gene_pane_g_ParamLimits

0xf9ee,	// (0x0001ee25) ai2_gene_pane_g

0x26c0,	// (0x00011af7) scroll_pane_cp12

0xb702,	// (0x0001ab39) control_pane_t3_ParamLimits

0xb702,	// (0x0001ab39) control_pane_t3

0x3d5d,	// (0x00013194) status_small_pane_g8_ParamLimits

0x3d5d,	// (0x00013194) status_small_pane_g8

0xcbbd,	// (0x0001bff4) popup_find_window_ParamLimits

0xce2c,	// (0x0001c263) popup_note_image_window_ParamLimits

0x48a6,	// (0x00013cdd) list_double2_graphic_pane_vc_g1_ParamLimits

0x48a6,	// (0x00013cdd) list_double2_graphic_pane_vc_g1

0x48b2,	// (0x00013ce9) list_double2_graphic_pane_vc_g2_ParamLimits

0x48b2,	// (0x00013ce9) list_double2_graphic_pane_vc_g2

0x48be,	// (0x00013cf5) list_double2_graphic_pane_vc_g3_ParamLimits

0x48be,	// (0x00013cf5) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d1,	// (0x0001ec08) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d1,	// (0x0001ec08) list_double2_graphic_pane_vc_g

0x48ca,	// (0x00013d01) list_double2_graphic_pane_vc_t1_ParamLimits

0x48ca,	// (0x00013d01) list_double2_graphic_pane_vc_t1

0x48b2,	// (0x00013ce9) list_single_heading_pane_vc_g1_ParamLimits

0x48b2,	// (0x00013ce9) list_single_heading_pane_vc_g1

0x48be,	// (0x00013cf5) list_single_heading_pane_vc_g2_ParamLimits

0x48be,	// (0x00013cf5) list_single_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001ea1b) list_single_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001ea1b) list_single_heading_pane_vc_g

0x4984,	// (0x00013dbb) list_single_heading_pane_vc_t1_ParamLimits

0x4984,	// (0x00013dbb) list_single_heading_pane_vc_t1

0x499a,	// (0x00013dd1) list_single_heading_pane_vc_t2_ParamLimits

0x499a,	// (0x00013dd1) list_single_heading_pane_vc_t2

0x0001,

0xf7f2,	// (0x0001ec29) list_single_heading_pane_vc_t_ParamLimits

0xf7f2,	// (0x0001ec29) list_single_heading_pane_vc_t

0x49ae,	// (0x00013de5) list_setting_number_pane_vc_g1_ParamLimits

0x49ae,	// (0x00013de5) list_setting_number_pane_vc_g1

0x49ba,	// (0x00013df1) list_setting_number_pane_vc_g2_ParamLimits

0x49ba,	// (0x00013df1) list_setting_number_pane_vc_g2

0x0001,

0xf7f7,	// (0x0001ec2e) list_setting_number_pane_vc_g_ParamLimits

0xf7f7,	// (0x0001ec2e) list_setting_number_pane_vc_g

0x49c6,	// (0x00013dfd) list_setting_number_pane_vc_t1_ParamLimits

0x49c6,	// (0x00013dfd) list_setting_number_pane_vc_t1

0x49da,	// (0x00013e11) list_setting_number_pane_vc_t2_ParamLimits

0x49da,	// (0x00013e11) list_setting_number_pane_vc_t2

0x49f6,	// (0x00013e2d) list_setting_number_pane_vc_t3_ParamLimits

0x49f6,	// (0x00013e2d) list_setting_number_pane_vc_t3

0x0002,

0xf7fc,	// (0x0001ec33) list_setting_number_pane_vc_t_ParamLimits

0xf7fc,	// (0x0001ec33) list_setting_number_pane_vc_t

0x4a1c,	// (0x00013e53) set_value_pane_vc_ParamLimits

0x4a1c,	// (0x00013e53) set_value_pane_vc

0x6015,	// (0x0001544c) list_double2_graphic_pane_vc_ParamLimits

0x6015,	// (0x0001544c) list_double2_graphic_pane_vc

0x6027,	// (0x0001545e) list_double2_large_graphic_pane_vc_ParamLimits

0x6027,	// (0x0001545e) list_double2_large_graphic_pane_vc

0x6015,	// (0x0001544c) list_double2_pane_vc_ParamLimits

0x6015,	// (0x0001544c) list_double2_pane_vc

0x6015,	// (0x0001544c) list_double_graphic_heading_pane_vc_ParamLimits

0x6015,	// (0x0001544c) list_double_graphic_heading_pane_vc

0x6015,	// (0x0001544c) list_double_graphic_pane_vc_ParamLimits

0x6015,	// (0x0001544c) list_double_graphic_pane_vc

0x6015,	// (0x0001544c) list_double_heading_pane_vc_ParamLimits

0x6015,	// (0x0001544c) list_double_heading_pane_vc

0x6027,	// (0x0001545e) list_double_large_graphic_pane_vc_ParamLimits

0x6027,	// (0x0001545e) list_double_large_graphic_pane_vc

0x6015,	// (0x0001544c) list_double_number_pane_vc_ParamLimits

0x6015,	// (0x0001544c) list_double_number_pane_vc

0x6015,	// (0x0001544c) list_double_pane_vc_ParamLimits

0x6015,	// (0x0001544c) list_double_pane_vc

0x6015,	// (0x0001544c) list_double_time_pane_vc_ParamLimits

0x6015,	// (0x0001544c) list_double_time_pane_vc

0x6015,	// (0x0001544c) list_setting_number_pane_vc_ParamLimits

0x6015,	// (0x0001544c) list_setting_number_pane_vc

0x6015,	// (0x0001544c) list_setting_pane_vc_ParamLimits

0x6015,	// (0x0001544c) list_setting_pane_vc

0x6015,	// (0x0001544c) list_single_graphic_heading_pane_vc_ParamLimits

0x6015,	// (0x0001544c) list_single_graphic_heading_pane_vc

0x6015,	// (0x0001544c) list_single_heading_pane_vc_ParamLimits

0x6015,	// (0x0001544c) list_single_heading_pane_vc

0x6015,	// (0x0001544c) list_single_number_heading_pane_vc_ParamLimits

0x6015,	// (0x0001544c) list_single_number_heading_pane_vc

0x65db,	// (0x00015a12) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x65db,	// (0x00015a12) list_double_graphic_heading_pane_vc_g1

0x48b2,	// (0x00013ce9) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x48b2,	// (0x00013ce9) list_double_graphic_heading_pane_vc_g2

0x48be,	// (0x00013cf5) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x48be,	// (0x00013cf5) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9fa,	// (0x0001ee31) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9fa,	// (0x0001ee31) list_double_graphic_heading_pane_vc_g

0x65e7,	// (0x00015a1e) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x65e7,	// (0x00015a1e) list_double_graphic_heading_pane_vc_t1

0x4984,	// (0x00013dbb) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x4984,	// (0x00013dbb) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa01,	// (0x0001ee38) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa01,	// (0x0001ee38) list_double_graphic_heading_pane_vc_t

0x49ae,	// (0x00013de5) list_setting_pane_vc_g1_ParamLimits

0x49ae,	// (0x00013de5) list_setting_pane_vc_g1

0x49ba,	// (0x00013df1) list_setting_pane_vc_g2_ParamLimits

0x49ba,	// (0x00013df1) list_setting_pane_vc_g2

0x0001,

0xf7f7,	// (0x0001ec2e) list_setting_pane_vc_g_ParamLimits

0xf7f7,	// (0x0001ec2e) list_setting_pane_vc_g

0x67ff,	// (0x00015c36) list_setting_pane_vc_t1_ParamLimits

0x67ff,	// (0x00015c36) list_setting_pane_vc_t1

0x6813,	// (0x00015c4a) list_setting_pane_vc_t2_ParamLimits

0x6813,	// (0x00015c4a) list_setting_pane_vc_t2

0x0001,

0xfa44,	// (0x0001ee7b) list_setting_pane_vc_t_ParamLimits

0xfa44,	// (0x0001ee7b) list_setting_pane_vc_t

0x4a1c,	// (0x00013e53) set_value_pane_cp_vc_ParamLimits

0x4a1c,	// (0x00013e53) set_value_pane_cp_vc

0x48b2,	// (0x00013ce9) list_single_number_heading_pane_vc_g1_ParamLimits

0x48b2,	// (0x00013ce9) list_single_number_heading_pane_vc_g1

0x48be,	// (0x00013cf5) list_single_number_heading_pane_vc_g2_ParamLimits

0x48be,	// (0x00013cf5) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001ea1b) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001ea1b) list_single_number_heading_pane_vc_g

0x4984,	// (0x00013dbb) list_single_number_heading_pane_vc_t1_ParamLimits

0x4984,	// (0x00013dbb) list_single_number_heading_pane_vc_t1

0x6835,	// (0x00015c6c) list_single_number_heading_pane_vc_t2_ParamLimits

0x6835,	// (0x00015c6c) list_single_number_heading_pane_vc_t2

0x6849,	// (0x00015c80) list_single_number_heading_pane_vc_t3_ParamLimits

0x6849,	// (0x00015c80) list_single_number_heading_pane_vc_t3

0x0002,

0xfa49,	// (0x0001ee80) list_single_number_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x0001ee80) list_single_number_heading_pane_vc_t

0x48a6,	// (0x00013cdd) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x48a6,	// (0x00013cdd) list_single_graphic_heading_pane_vc_g1

0x48b2,	// (0x00013ce9) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x48b2,	// (0x00013ce9) list_single_graphic_heading_pane_vc_g4

0x48be,	// (0x00013cf5) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x48be,	// (0x00013cf5) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7d1,	// (0x0001ec08) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7d1,	// (0x0001ec08) list_single_graphic_heading_pane_vc_g

0x4984,	// (0x00013dbb) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4984,	// (0x00013dbb) list_single_graphic_heading_pane_vc_t1

0x685b,	// (0x00015c92) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x685b,	// (0x00015c92) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa50,	// (0x0001ee87) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa50,	// (0x0001ee87) list_single_graphic_heading_pane_vc_t

0x48b2,	// (0x00013ce9) list_double2_pane_vc_g1_ParamLimits

0x48b2,	// (0x00013ce9) list_double2_pane_vc_g1

0x48be,	// (0x00013cf5) list_double2_pane_vc_g2_ParamLimits

0x48be,	// (0x00013cf5) list_double2_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001ea1b) list_double2_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001ea1b) list_double2_pane_vc_g

0x686f,	// (0x00015ca6) list_double2_pane_vc_t1_ParamLimits

0x686f,	// (0x00015ca6) list_double2_pane_vc_t1

0x6885,	// (0x00015cbc) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6885,	// (0x00015cbc) list_double2_large_graphic_pane_vc_g1

0x6891,	// (0x00015cc8) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6891,	// (0x00015cc8) list_double2_large_graphic_pane_vc_g2

0x689d,	// (0x00015cd4) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x689d,	// (0x00015cd4) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf601,	// (0x0001ea38) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf601,	// (0x0001ea38) list_double2_large_graphic_pane_vc_g

0x68a9,	// (0x00015ce0) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x68a9,	// (0x00015ce0) list_double2_large_graphic_pane_vc_t1

0x68bf,	// (0x00015cf6) list_double_time_pane_vc_g1_ParamLimits

0x68bf,	// (0x00015cf6) list_double_time_pane_vc_g1

0x68cb,	// (0x00015d02) list_double_time_pane_vc_g2_ParamLimits

0x68cb,	// (0x00015d02) list_double_time_pane_vc_g2

0x0001,

0xfa55,	// (0x0001ee8c) list_double_time_pane_vc_g_ParamLimits

0xfa55,	// (0x0001ee8c) list_double_time_pane_vc_g

0x68d7,	// (0x00015d0e) list_double_time_pane_vc_t1_ParamLimits

0x68d7,	// (0x00015d0e) list_double_time_pane_vc_t1

0x68f0,	// (0x00015d27) list_double_time_pane_vc_t2_ParamLimits

0x68f0,	// (0x00015d27) list_double_time_pane_vc_t2

0x690b,	// (0x00015d42) list_double_time_pane_vc_t3_ParamLimits

0x690b,	// (0x00015d42) list_double_time_pane_vc_t3

0x6923,	// (0x00015d5a) list_double_time_pane_vc_t4_ParamLimits

0x6923,	// (0x00015d5a) list_double_time_pane_vc_t4

0x0003,

0xfa5a,	// (0x0001ee91) list_double_time_pane_vc_t_ParamLimits

0xfa5a,	// (0x0001ee91) list_double_time_pane_vc_t

0x48b2,	// (0x00013ce9) list_double_pane_vc_g1_ParamLimits

0x48b2,	// (0x00013ce9) list_double_pane_vc_g1

0x48be,	// (0x00013cf5) list_double_pane_vc_g2_ParamLimits

0x48be,	// (0x00013cf5) list_double_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001ea1b) list_double_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001ea1b) list_double_pane_vc_g

0x6937,	// (0x00015d6e) list_double_pane_vc_t1_ParamLimits

0x6937,	// (0x00015d6e) list_double_pane_vc_t1

0x6949,	// (0x00015d80) list_double_pane_vc_t2_ParamLimits

0x6949,	// (0x00015d80) list_double_pane_vc_t2

0x0001,

0xfa63,	// (0x0001ee9a) list_double_pane_vc_t_ParamLimits

0xfa63,	// (0x0001ee9a) list_double_pane_vc_t

0x48b2,	// (0x00013ce9) list_double_number_pane_vc_g1_ParamLimits

0x48b2,	// (0x00013ce9) list_double_number_pane_vc_g1

0x48be,	// (0x00013cf5) list_double_number_pane_vc_g2_ParamLimits

0x48be,	// (0x00013cf5) list_double_number_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001ea1b) list_double_number_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001ea1b) list_double_number_pane_vc_g

0x6961,	// (0x00015d98) list_double_number_pane_vc_t1_ParamLimits

0x6961,	// (0x00015d98) list_double_number_pane_vc_t1

0x6975,	// (0x00015dac) list_double_number_pane_vc_t2_ParamLimits

0x6975,	// (0x00015dac) list_double_number_pane_vc_t2

0x6949,	// (0x00015d80) list_double_number_pane_vc_t3_ParamLimits

0x6949,	// (0x00015d80) list_double_number_pane_vc_t3

0x0002,

0xfa68,	// (0x0001ee9f) list_double_number_pane_vc_t_ParamLimits

0xfa68,	// (0x0001ee9f) list_double_number_pane_vc_t

0x6987,	// (0x00015dbe) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6987,	// (0x00015dbe) list_double_large_graphic_pane_vc_g1

0x6993,	// (0x00015dca) list_double_large_graphic_pane_vc_g2_ParamLimits

0x6993,	// (0x00015dca) list_double_large_graphic_pane_vc_g2

0x689d,	// (0x00015cd4) list_double_large_graphic_pane_vc_g3_ParamLimits

0x689d,	// (0x00015cd4) list_double_large_graphic_pane_vc_g3

0x69a2,	// (0x00015dd9) list_double_large_graphic_pane_vc_g4_ParamLimits

0x69a2,	// (0x00015dd9) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6f,	// (0x0001eea6) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x0001eea6) list_double_large_graphic_pane_vc_g

0x69ae,	// (0x00015de5) list_double_large_graphic_pane_vc_t1_ParamLimits

0x69ae,	// (0x00015de5) list_double_large_graphic_pane_vc_t1

0x69c0,	// (0x00015df7) list_double_large_graphic_pane_vc_t2_ParamLimits

0x69c0,	// (0x00015df7) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x0001eeaf) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x0001eeaf) list_double_large_graphic_pane_vc_t

0x48b2,	// (0x00013ce9) list_double_heading_pane_vc_g1_ParamLimits

0x48b2,	// (0x00013ce9) list_double_heading_pane_vc_g1

0x48be,	// (0x00013cf5) list_double_heading_pane_vc_g2_ParamLimits

0x48be,	// (0x00013cf5) list_double_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001ea1b) list_double_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001ea1b) list_double_heading_pane_vc_g

0x69d9,	// (0x00015e10) list_double_heading_pane_vc_t1_ParamLimits

0x69d9,	// (0x00015e10) list_double_heading_pane_vc_t1

0x4984,	// (0x00013dbb) list_double_heading_pane_vc_t2_ParamLimits

0x4984,	// (0x00013dbb) list_double_heading_pane_vc_t2

0x0001,

0xfa7d,	// (0x0001eeb4) list_double_heading_pane_vc_t_ParamLimits

0xfa7d,	// (0x0001eeb4) list_double_heading_pane_vc_t

0x48a6,	// (0x00013cdd) list_double_graphic_pane_vc_g1_ParamLimits

0x48a6,	// (0x00013cdd) list_double_graphic_pane_vc_g1

0x69ed,	// (0x00015e24) list_double_graphic_pane_vc_g2_ParamLimits

0x69ed,	// (0x00015e24) list_double_graphic_pane_vc_g2

0x69fc,	// (0x00015e33) list_double_graphic_pane_vc_g3_ParamLimits

0x69fc,	// (0x00015e33) list_double_graphic_pane_vc_g3

0x0002,

0xfa82,	// (0x0001eeb9) list_double_graphic_pane_vc_g_ParamLimits

0xfa82,	// (0x0001eeb9) list_double_graphic_pane_vc_g

0x6a08,	// (0x00015e3f) list_double_graphic_pane_vc_t1_ParamLimits

0x6a08,	// (0x00015e3f) list_double_graphic_pane_vc_t1

0x6949,	// (0x00015d80) list_double_graphic_pane_vc_t2_ParamLimits

0x6949,	// (0x00015d80) list_double_graphic_pane_vc_t2

0x0001,

0xfa89,	// (0x0001eec0) list_double_graphic_pane_vc_t_ParamLimits

0xfa89,	// (0x0001eec0) list_double_graphic_pane_vc_t

0x0188,	// (0x0000f5bf) aid_size_cell_fastswap

0xb45d,	// (0x0001a894) aid_size_cell_touch_ParamLimits

0xb45d,	// (0x0001a894) aid_size_cell_touch

0x03f5,	// (0x0000f82c) popup_fast_swap_wide_window_ParamLimits

0x03f5,	// (0x0000f82c) popup_fast_swap_wide_window

0xb5a8,	// (0x0001a9df) touch_pane_ParamLimits

0xb5a8,	// (0x0001a9df) touch_pane

0x2ba5,	// (0x00011fdc) button_value_adjust_pane_cp2

0x2bad,	// (0x00011fe4) button_value_adjust_pane_cp4

0x2bcf,	// (0x00012006) form_field_data_pane_cp2

0xc56a,	// (0x0001b9a1) form_field_data_wide_pane_cp2

0x3281,	// (0x000126b8) bg_scroll_pane_ParamLimits

0x078f,	// (0x0000fbc6) scroll_handle_pane_ParamLimits

0x07a3,	// (0x0000fbda) scroll_sc2_down_pane_ParamLimits

0x07a3,	// (0x0000fbda) scroll_sc2_down_pane

0x32b2,	// (0x000126e9) scroll_sc2_up_pane_ParamLimits

0x32b2,	// (0x000126e9) scroll_sc2_up_pane

0xdbdd,	// (0x0001d014) grid_wheel_folder_pane_g1_ParamLimits

0xdbdd,	// (0x0001d014) grid_wheel_folder_pane_g1

0x0968,	// (0x0000fd9f) clock_nsta_pane_cp2_ParamLimits

0x0968,	// (0x0000fd9f) clock_nsta_pane_cp2

0xc9b3,	// (0x0001bdea) listscroll_midp_pane_ParamLimits

0xc9c4,	// (0x0001bdfb) midp_canvas_pane

0x3dd8,	// (0x0001320f) nsta_clock_indic_pane

0x3e36,	// (0x0001326d) listscroll_form_pane_vc

0x3e52,	// (0x00013289) listscroll_set_pane_vc_ParamLimits

0x3e52,	// (0x00013289) listscroll_set_pane_vc

0xd253,	// (0x0001c68a) clock_nsta_pane

0xd27d,	// (0x0001c6b4) indicator_nsta_pane

0x4840,	// (0x00013c77) bg_popup_sub_pane_cp2_ParamLimits

0x4854,	// (0x00013c8b) find_pane_cp2_ParamLimits

0x4854,	// (0x00013c8b) find_pane_cp2

0x486a,	// (0x00013ca1) grid_toobar_pane_ParamLimits

0x4a2a,	// (0x00013e61) list_form_gen_pane_vc_ParamLimits

0x4a2a,	// (0x00013e61) list_form_gen_pane_vc

0x4a40,	// (0x00013e77) scroll_pane_cp8_vc_ParamLimits

0x4a40,	// (0x00013e77) scroll_pane_cp8_vc

0x4abc,	// (0x00013ef3) data_form_wide_pane_vc_ParamLimits

0x4abc,	// (0x00013ef3) data_form_wide_pane_vc

0x4ac8,	// (0x00013eff) form_field_data_wide_pane_vc_g1

0x4ad0,	// (0x00013f07) form_field_data_wide_pane_vc_t1_ParamLimits

0x4ad0,	// (0x00013f07) form_field_data_wide_pane_vc_t1

0x2c8b,	// (0x000120c2) input_focus_pane_cp6_vc_ParamLimits

0x2c8b,	// (0x000120c2) input_focus_pane_cp6_vc

0xd60b,	// (0x0001ca42) list_midp_pane_ParamLimits

0x624b,	// (0x00015682) scroll_pane_cp16_ParamLimits

0x624b,	// (0x00015682) scroll_pane_cp16

0x4e6c,	// (0x000142a3) button_value_adjust_pane_ParamLimits

0x4e6c,	// (0x000142a3) button_value_adjust_pane

0xd7f1,	// (0x0001cc28) button_value_adjust_pane_cp6_ParamLimits

0xd7f1,	// (0x0001cc28) button_value_adjust_pane_cp6

0xd90b,	// (0x0001cd42) settings_code_pane_cp_ParamLimits

0xd90b,	// (0x0001cd42) settings_code_pane_cp

0x1dba,	// (0x000111f1) cell_touch_pane_g1

0x1dba,	// (0x000111f1) cell_touch_pane_g2

0x0001,

0xf71a,	// (0x0001eb51) cell_touch_pane_g

0xdac0,	// (0x0001cef7) cell_touch_pane_cp_ParamLimits

0xdac0,	// (0x0001cef7) cell_touch_pane_cp

0xdadc,	// (0x0001cf13) cell_touch_pane_ParamLimits

0xdadc,	// (0x0001cf13) cell_touch_pane

0x1dba,	// (0x000111f1) scroll_sc2_down_pane_g1

0x1dba,	// (0x000111f1) scroll_sc2_up_pane_g1

0x1dc4,	// (0x000111fb) bg_set_opt_pane_cp4_vc

0x65fb,	// (0x00015a32) list_set_graphic_pane_vc_g1_ParamLimits

0x65fb,	// (0x00015a32) list_set_graphic_pane_vc_g1

0x6607,	// (0x00015a3e) list_set_graphic_pane_vc_g2_ParamLimits

0x6607,	// (0x00015a3e) list_set_graphic_pane_vc_g2

0x0001,

0xfa06,	// (0x0001ee3d) list_set_graphic_pane_vc_g_ParamLimits

0xfa06,	// (0x0001ee3d) list_set_graphic_pane_vc_g

0x6613,	// (0x00015a4a) text_primary_small_cp13_vc_ParamLimits

0x6613,	// (0x00015a4a) text_primary_small_cp13_vc

0x662b,	// (0x00015a62) list_set_graphic_pane_vc_ParamLimits

0x662b,	// (0x00015a62) list_set_graphic_pane_vc

0x1dc4,	// (0x000111fb) input_focus_pane_cp2_vc

0x1dba,	// (0x000111f1) setting_code_pane_vc_g1

0x663f,	// (0x00015a76) setting_code_pane_vc_t1

0x664d,	// (0x00015a84) set_text_pane_vc_t1_ParamLimits

0x664d,	// (0x00015a84) set_text_pane_vc_t1

0x1dc4,	// (0x000111fb) input_focus_pane_cp1_vc

0x6668,	// (0x00015a9f) list_set_text_pane_vc

0x1dba,	// (0x000111f1) setting_text_pane_vc_g1

0x1dc4,	// (0x000111fb) bg_set_opt_pane_cp2_vc

0x6672,	// (0x00015aa9) setting_slider_graphic_pane_vc_g1

0x667a,	// (0x00015ab1) setting_slider_graphic_pane_vc_t1

0x6688,	// (0x00015abf) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0b,	// (0x0001ee42) setting_slider_graphic_pane_vc_t

0x6696,	// (0x00015acd) slider_set_pane_cp_vc

0x669e,	// (0x00015ad5) slider_set_pane_vc_g1

0x66a7,	// (0x00015ade) slider_set_pane_vc_g2

0x0006,

0xfa10,	// (0x0001ee47) slider_set_pane_vc_g

0x2dc3,	// (0x000121fa) set_opt_bg_pane_g1_copy1

0x2dcb,	// (0x00012202) set_opt_bg_pane_g2_copy1

0x66d3,	// (0x00015b0a) set_opt_bg_pane_g3_copy1

0x2ddb,	// (0x00012212) set_opt_bg_pane_g4_copy1

0x2de3,	// (0x0001221a) set_opt_bg_pane_g5_copy1

0x2deb,	// (0x00012222) set_opt_bg_pane_g6_copy1

0x66dd,	// (0x00015b14) set_opt_bg_pane_g7_copy1

0x66e5,	// (0x00015b1c) set_opt_bg_pane_g8_copy1

0x66ef,	// (0x00015b26) set_opt_bg_pane_g9_copy1

0x1dc4,	// (0x000111fb) bg_set_opt_pane_cp_vc

0x66f9,	// (0x00015b30) setting_slider_pane_vc_t1

0x667a,	// (0x00015ab1) setting_slider_pane_vc_t2

0x6688,	// (0x00015abf) setting_slider_pane_vc_t3

0x0002,

0xfa1f,	// (0x0001ee56) setting_slider_pane_vc_t

0x6696,	// (0x00015acd) slider_set_pane_vc

0x0d7e,	// (0x000101b5) volume_set_pane_vc_g1

0x0d87,	// (0x000101be) volume_set_pane_vc_g2

0x0d90,	// (0x000101c7) volume_set_pane_vc_g3

0x0d99,	// (0x000101d0) volume_set_pane_vc_g4

0x0da2,	// (0x000101d9) volume_set_pane_vc_g5

0x0dab,	// (0x000101e2) volume_set_pane_vc_g6

0x0db4,	// (0x000101eb) volume_set_pane_vc_g7

0x0dbd,	// (0x000101f4) volume_set_pane_vc_g8

0x0dc6,	// (0x000101fd) volume_set_pane_vc_g9

0x0dcf,	// (0x00010206) volume_set_pane_vc_g10

0x0009,

0xfa26,	// (0x0001ee5d) volume_set_pane_vc_g

0x6708,	// (0x00015b3f) volume_set_pane_vc

0x6710,	// (0x00015b47) button_value_adjust_pane_cp1_vc

0x671a,	// (0x00015b51) list_highlight_pane_cp2_vc

0x6723,	// (0x00015b5a) list_set_pane_vc_ParamLimits

0x6723,	// (0x00015b5a) list_set_pane_vc

0x678d,	// (0x00015bc4) main_pane_set_vc_t1_ParamLimits

0x678d,	// (0x00015bc4) main_pane_set_vc_t1

0x67a2,	// (0x00015bd9) main_pane_set_vc_t2_ParamLimits

0x67a2,	// (0x00015bd9) main_pane_set_vc_t2

0x67b4,	// (0x00015beb) main_pane_set_vc_t3_ParamLimits

0x67b4,	// (0x00015beb) main_pane_set_vc_t3

0x67c8,	// (0x00015bff) main_pane_set_vc_t4_ParamLimits

0x67c8,	// (0x00015bff) main_pane_set_vc_t4

0x0003,

0xfa3b,	// (0x0001ee72) main_pane_set_vc_t_ParamLimits

0xfa3b,	// (0x0001ee72) main_pane_set_vc_t

0x67dc,	// (0x00015c13) setting_code_pane_vc_ParamLimits

0x67dc,	// (0x00015c13) setting_code_pane_vc

0x67ed,	// (0x00015c24) setting_slider_graphic_pane_vc

0x67ed,	// (0x00015c24) setting_slider_pane_vc

0x67ed,	// (0x00015c24) setting_text_pane_vc

0x67ed,	// (0x00015c24) setting_volume_pane_vc

0x67f7,	// (0x00015c2e) scroll_pane_cp121_vc

0x2b93,	// (0x00011fca) set_content_pane_vc

0x6a1a,	// (0x00015e51) button_value_adjust_pane_g1

0x6a23,	// (0x00015e5a) button_value_adjust_pane_g2

0x0001,

0xfa8e,	// (0x0001eec5) button_value_adjust_pane_g

0x6a2c,	// (0x00015e63) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6a2c,	// (0x00015e63) form_field_slider_wide_pane_vc_t1

0x6a40,	// (0x00015e77) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6a40,	// (0x00015e77) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa93,	// (0x0001eeca) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa93,	// (0x0001eeca) form_field_slider_wide_pane_vc_t

0x2139,	// (0x00011570) input_focus_pane_cp10_vc_ParamLimits

0x2139,	// (0x00011570) input_focus_pane_cp10_vc

0x6a52,	// (0x00015e89) slider_cont_pane_cp1_vc_ParamLimits

0x6a52,	// (0x00015e89) slider_cont_pane_cp1_vc

0x669e,	// (0x00015ad5) slider_form_pane_g1_cp2

0x66a7,	// (0x00015ade) slider_form_pane_g2_cp2

0x6a6b,	// (0x00015ea2) form_field_slider_pane_vc_t3

0x6a79,	// (0x00015eb0) form_field_slider_pane_vc_t4

0x6a87,	// (0x00015ebe) slider_form_pane_vc_ParamLimits

0x6a87,	// (0x00015ebe) slider_form_pane_vc

0x6a94,	// (0x00015ecb) form_field_slider_pane_vc_t1_ParamLimits

0x6a94,	// (0x00015ecb) form_field_slider_pane_vc_t1

0x6a40,	// (0x00015e77) form_field_slider_pane_vc_t2_ParamLimits

0x6a40,	// (0x00015e77) form_field_slider_pane_vc_t2

0x0001,

0xfaa3,	// (0x0001eeda) form_field_slider_pane_vc_t_ParamLimits

0xfaa3,	// (0x0001eeda) form_field_slider_pane_vc_t

0x2139,	// (0x00011570) input_focus_pane_cp9_vc_ParamLimits

0x2139,	// (0x00011570) input_focus_pane_cp9_vc

0x6ab0,	// (0x00015ee7) slider_cont_pane_vc_ParamLimits

0x6ab0,	// (0x00015ee7) slider_cont_pane_vc

0x6ac2,	// (0x00015ef9) list_form_graphic_pane_cp_vc_ParamLimits

0x6ac2,	// (0x00015ef9) list_form_graphic_pane_cp_vc

0x4ac8,	// (0x00013eff) form_field_popup_wide_pane_vc_g1

0x6ad7,	// (0x00015f0e) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6ad7,	// (0x00015f0e) form_field_popup_wide_pane_vc_t1

0x2c8b,	// (0x000120c2) input_focus_pane_cp8_vc_ParamLimits

0x2c8b,	// (0x000120c2) input_focus_pane_cp8_vc

0x6aee,	// (0x00015f25) list_form_wide_pane_vc_ParamLimits

0x6aee,	// (0x00015f25) list_form_wide_pane_vc

0x6afa,	// (0x00015f31) list_form_graphic_pane_vc_g1

0x6b02,	// (0x00015f39) list_form_graphic_pane_vc_t1_ParamLimits

0x6b02,	// (0x00015f39) list_form_graphic_pane_vc_t1

0x1ea4,	// (0x000112db) list_highlight_pane_cp5_vc_ParamLimits

0x1ea4,	// (0x000112db) list_highlight_pane_cp5_vc

0x6b1e,	// (0x00015f55) list_form_graphic_pane_vc_ParamLimits

0x6b1e,	// (0x00015f55) list_form_graphic_pane_vc

0x4ac8,	// (0x00013eff) form_field_popup_pane_vc_g1

0x6b34,	// (0x00015f6b) form_field_popup_pane_vc_t1_ParamLimits

0x6b34,	// (0x00015f6b) form_field_popup_pane_vc_t1

0x2c8b,	// (0x000120c2) input_focus_pane_cp7_vc_ParamLimits

0x2c8b,	// (0x000120c2) input_focus_pane_cp7_vc

0x6b4b,	// (0x00015f82) list_form_pane_vc_ParamLimits

0x6b4b,	// (0x00015f82) list_form_pane_vc

0x6b57,	// (0x00015f8e) data_form_pane_vc_t1_ParamLimits

0x6b57,	// (0x00015f8e) data_form_pane_vc_t1

0x2dc3,	// (0x000121fa) input_focus_pane_vc_g1

0x2dcb,	// (0x00012202) input_focus_pane_vc_g2

0x2dd3,	// (0x0001220a) input_focus_pane_vc_g3

0x2ddb,	// (0x00012212) input_focus_pane_vc_g4

0x2de3,	// (0x0001221a) input_focus_pane_vc_g5

0x2deb,	// (0x00012222) input_focus_pane_vc_g6

0x2df3,	// (0x0001222a) input_focus_pane_vc_g7

0x2dfb,	// (0x00012232) input_focus_pane_vc_g8

0x2e03,	// (0x0001223a) input_focus_pane_vc_g9

0x1dba,	// (0x000111f1) input_focus_pane_vc_g10

0x0009,

0xf6a3,	// (0x0001eada) input_focus_pane_vc_g

0x4abc,	// (0x00013ef3) data_form_pane_vc_ParamLimits

0x4abc,	// (0x00013ef3) data_form_pane_vc

0x4ac8,	// (0x00013eff) form_field_data_pane_vc_g1

0x6b72,	// (0x00015fa9) form_field_data_pane_vc_t1_ParamLimits

0x6b72,	// (0x00015fa9) form_field_data_pane_vc_t1

0x2c8b,	// (0x000120c2) input_focus_pane_vc_ParamLimits

0x2c8b,	// (0x000120c2) input_focus_pane_vc

0x6b8c,	// (0x00015fc3) button_value_adjust_pane_cp3_vc

0x6b94,	// (0x00015fcb) button_value_adjust_pane_cp5_vc

0x6b9c,	// (0x00015fd3) form_field_data_pane_vc_ParamLimits

0x6b9c,	// (0x00015fd3) form_field_data_pane_vc

0x6bb3,	// (0x00015fea) form_field_data_pane_vc_cp2

0x6bbb,	// (0x00015ff2) form_field_data_wide_pane_vc_ParamLimits

0x6bbb,	// (0x00015ff2) form_field_data_wide_pane_vc

0x6bd1,	// (0x00016008) form_field_data_wide_pane_vc_cp2

0x6bd9,	// (0x00016010) form_field_popup_pane_vc_ParamLimits

0x6bd9,	// (0x00016010) form_field_popup_pane_vc

0x6bf0,	// (0x00016027) form_field_popup_wide_pane_vc_ParamLimits

0x6bf0,	// (0x00016027) form_field_popup_wide_pane_vc

0x6c06,	// (0x0001603d) form_field_slider_pane_vc_ParamLimits

0x6c06,	// (0x0001603d) form_field_slider_pane_vc

0x6c19,	// (0x00016050) form_field_slider_wide_pane_vc_ParamLimits

0x6c19,	// (0x00016050) form_field_slider_wide_pane_vc

0xdafa,	// (0x0001cf31) grid_touch_1_pane_ParamLimits

0xdafa,	// (0x0001cf31) grid_touch_1_pane

0xdb0e,	// (0x0001cf45) grid_touch_2_pane_ParamLimits

0xdb0e,	// (0x0001cf45) grid_touch_2_pane

0x6cee,	// (0x00016125) touch_pane_g1_ParamLimits

0x6cee,	// (0x00016125) touch_pane_g1

0x6c50,	// (0x00016087) cell_app_pane_cp_wide_ParamLimits

0x6c50,	// (0x00016087) cell_app_pane_cp_wide

0x6c61,	// (0x00016098) grid_popup_fast_wide_pane_ParamLimits

0x6c61,	// (0x00016098) grid_popup_fast_wide_pane

0x6c75,	// (0x000160ac) scroll_pane_cp19_ParamLimits

0x6c75,	// (0x000160ac) scroll_pane_cp19

0x1dc4,	// (0x000111fb) bg_popup_window_pane_cp20

0x6c89,	// (0x000160c0) listscroll_popup_fast_wide_pane

0x2fd5,	// (0x0001240c) grid_indicator_nsta_pane

0x6c91,	// (0x000160c8) clock_nsta_pane_g1

0x6c9a,	// (0x000160d1) clock_nsta_pane_t1

0xdb38,	// (0x0001cf6f) cell_indicator_nsta_pane_ParamLimits

0xdb38,	// (0x0001cf6f) cell_indicator_nsta_pane

0x6cee,	// (0x00016125) cell_indicator_nsta_pane_g1

0xdb51,	// (0x0001cf88) cell_indicator_nsta_pane_g2

0x0001,

0xfaad,	// (0x0001eee4) cell_indicator_nsta_pane_g

0x6d12,	// (0x00016149) clock_nsta_pane_cp

0x6d1a,	// (0x00016151) indicator_nsta_pane_cp

0x6d23,	// (0x0001615a) nsta_clock_indic_pane_g1

0x1f87,	// (0x000113be) grid_indicator_pane

0x33a7,	// (0x000127de) scroll_pane_cp29

0x08b7,	// (0x0000fcee) indicator_nsta_pane_cp2_ParamLimits

0x08b7,	// (0x0000fcee) indicator_nsta_pane_cp2

0x1ea4,	// (0x000112db) main_apps_wheel_pane

0x4cf3,	// (0x0001412a) form_midp_field_text_pane_ParamLimits

0x4e3e,	// (0x00014275) scroll_bar_cp050_ParamLimits

0x6d8c,	// (0x000161c3) cell_indicator_pane_ParamLimits

0x6d8c,	// (0x000161c3) cell_indicator_pane

0x6da3,	// (0x000161da) cell_indicator_pane_g1

0xdb67,	// (0x0001cf9e) grid_wheel_folder_pane_ParamLimits

0xdb67,	// (0x0001cf9e) grid_wheel_folder_pane

0xdb75,	// (0x0001cfac) list_wheel_apps_pane_ParamLimits

0xdb75,	// (0x0001cfac) list_wheel_apps_pane

0xdb83,	// (0x0001cfba) main_apps_wheel_pane_g1_ParamLimits

0xdb83,	// (0x0001cfba) main_apps_wheel_pane_g1

0xdb8f,	// (0x0001cfc6) main_apps_wheel_pane_g2_ParamLimits

0xdb8f,	// (0x0001cfc6) main_apps_wheel_pane_g2

0x0001,

0xfac9,	// (0x0001ef00) main_apps_wheel_pane_g_ParamLimits

0xfac9,	// (0x0001ef00) main_apps_wheel_pane_g

0xdb9d,	// (0x0001cfd4) main_apps_wheel_pane_t1_ParamLimits

0xdb9d,	// (0x0001cfd4) main_apps_wheel_pane_t1

0xdbb1,	// (0x0001cfe8) list_wheel_apps_pane_g1

0xdbb9,	// (0x0001cff0) list_wheel_apps_pane_g2

0xdbc1,	// (0x0001cff8) list_wheel_apps_pane_g3

0xdbc9,	// (0x0001d000) list_wheel_apps_pane_g4

0xdbd3,	// (0x0001d00a) list_wheel_apps_pane_g5

0x0004,

0xface,	// (0x0001ef05) list_wheel_apps_pane_g

0x395a,	// (0x00012d91) navi_icon_text_pane

0xd14e,	// (0x0001c585) aid_fill_nsta

0xdbea,	// (0x0001d021) navi_icon_text_pane_g1

0xdbf6,	// (0x0001d02d) navi_icon_text_pane_t1

0xc99b,	// (0x0001bdd2) list_set_graphic_pane_t1_ParamLimits

0xc99b,	// (0x0001bdd2) list_set_graphic_pane_t1

0x558d,	// (0x000149c4) popup_midp_note_alarm_window_t6_ParamLimits

0x558d,	// (0x000149c4) popup_midp_note_alarm_window_t6

0x559f,	// (0x000149d6) popup_midp_note_alarm_window_t7_ParamLimits

0x559f,	// (0x000149d6) popup_midp_note_alarm_window_t7

0x55b1,	// (0x000149e8) popup_midp_note_alarm_window_t8_ParamLimits

0x55b1,	// (0x000149e8) popup_midp_note_alarm_window_t8

0x55c3,	// (0x000149fa) popup_midp_note_alarm_window_t9_ParamLimits

0x55c3,	// (0x000149fa) popup_midp_note_alarm_window_t9

0x55d5,	// (0x00014a0c) popup_midp_note_alarm_window_t10_ParamLimits

0x55d5,	// (0x00014a0c) popup_midp_note_alarm_window_t10

0x55e7,	// (0x00014a1e) popup_midp_note_alarm_window_t11_ParamLimits

0x55e7,	// (0x00014a1e) popup_midp_note_alarm_window_t11

0x55f9,	// (0x00014a30) scroll_pane_cp17_ParamLimits

0x55f9,	// (0x00014a30) scroll_pane_cp17

0x0d7e,	// (0x000101b5) volume_small_pane_cp_g1

0x1073,	// (0x000104aa) volume_small_pane_cp_g2

0x107c,	// (0x000104b3) volume_small_pane_cp_g3

0x1085,	// (0x000104bc) volume_small_pane_cp_g4

0x108e,	// (0x000104c5) volume_small_pane_cp_g5

0x1097,	// (0x000104ce) volume_small_pane_cp_g6

0x10a0,	// (0x000104d7) volume_small_pane_cp_g7

0x10a9,	// (0x000104e0) volume_small_pane_cp_g8

0x10b2,	// (0x000104e9) volume_small_pane_cp_g9

0x10bb,	// (0x000104f2) volume_small_pane_cp_g10

0x3bb5,	// (0x00012fec) midp_ticker_pane_g1_ParamLimits

0x3bc1,	// (0x00012ff8) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x0001eba2) midp_ticker_pane_g_ParamLimits

0xca5b,	// (0x0001be92) midp_ticker_pane_t1_ParamLimits

0xd16e,	// (0x0001c5a5) aid_fill_nsta_2

0x4e2a,	// (0x00014261) list_form2_midp_pane

0x5fc9,	// (0x00015400) midp_editing_number_pane_ParamLimits

0x5fd8,	// (0x0001540f) midp_ticker_pane_ParamLimits

0x6e8a,	// (0x000162c1) form2_midp_field_pane

0x6eae,	// (0x000162e5) scroll_pane_cp51

0x6ece,	// (0x00016305) form2_midp_button_pane_ParamLimits

0x6ece,	// (0x00016305) form2_midp_button_pane

0x6ee0,	// (0x00016317) form2_midp_content_pane_ParamLimits

0x6ee0,	// (0x00016317) form2_midp_content_pane

0x6efa,	// (0x00016331) form2_midp_field_choice_group_pane

0x6f02,	// (0x00016339) form2_midp_field_pane_g1

0x6f0a,	// (0x00016341) form2_midp_field_pane_g2

0x6f12,	// (0x00016349) form2_midp_field_pane_g3

0x6f1a,	// (0x00016351) form2_midp_field_pane_g4

0x0003,

0xfaf3,	// (0x0001ef2a) form2_midp_field_pane_g

0x6f22,	// (0x00016359) form2_midp_gauge_slider_pane

0x6f2a,	// (0x00016361) form2_midp_gauge_wait_pane

0x6f32,	// (0x00016369) form2_midp_image_pane_ParamLimits

0x6f32,	// (0x00016369) form2_midp_image_pane

0x6f4d,	// (0x00016384) form2_midp_label_pane_ParamLimits

0x6f4d,	// (0x00016384) form2_midp_label_pane

0xdc24,	// (0x0001d05b) form2_midp_label_pane_cp_ParamLimits

0xdc24,	// (0x0001d05b) form2_midp_label_pane_cp

0x6f87,	// (0x000163be) form2_midp_string_pane_ParamLimits

0x6f87,	// (0x000163be) form2_midp_string_pane

0xdc45,	// (0x0001d07c) form2_midp_text_pane_ParamLimits

0xdc45,	// (0x0001d07c) form2_midp_text_pane

0x6fb6,	// (0x000163ed) form2_midp_time_pane

0x6fc6,	// (0x000163fd) input_focus_pane_cp51_ParamLimits

0x6fc6,	// (0x000163fd) input_focus_pane_cp51

0x6fde,	// (0x00016415) form2_midp_label_pane_t1_ParamLimits

0x6fde,	// (0x00016415) form2_midp_label_pane_t1

0xdc62,	// (0x0001d099) form2_mdip_text_pane_t1_ParamLimits

0xdc62,	// (0x0001d099) form2_mdip_text_pane_t1

0x703e,	// (0x00016475) form2_midp_time_pane_t1

0x7059,	// (0x00016490) form2_midp_gauge_slider_pane_t1

0xdc7e,	// (0x0001d0b5) form2_midp_gauge_slider_pane_t2

0xdc90,	// (0x0001d0c7) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafc,	// (0x0001ef33) form2_midp_gauge_slider_pane_t

0x708f,	// (0x000164c6) form2_midp_slider_pane

0x709b,	// (0x000164d2) form2_midp_gauge_wait_pane_t1

0x70a9,	// (0x000164e0) form2_midp_wait_pane_ParamLimits

0x70a9,	// (0x000164e0) form2_midp_wait_pane

0xdca2,	// (0x0001d0d9) list_single_2graphic_pane_cp4_ParamLimits

0xdca2,	// (0x0001d0d9) list_single_2graphic_pane_cp4

0xd57f,	// (0x0001c9b6) list_single_midp_graphic_pane_cp_ParamLimits

0xd57f,	// (0x0001c9b6) list_single_midp_graphic_pane_cp

0x1dc4,	// (0x000111fb) list_highlight_pane_cp20

0x7103,	// (0x0001653a) list_single_2graphic_pane_g1_cp4

0x710b,	// (0x00016542) list_single_2graphic_pane_g2_cp4

0x7113,	// (0x0001654a) list_single_2graphic_pane_t1_cp4

0x1ea4,	// (0x000112db) list_highlight_pane_cp21

0x7122,	// (0x00016559) list_single_midp_graphic_pane_g4_cp

0x7131,	// (0x00016568) list_single_midp_graphic_pane_t1_cp

0xdcb7,	// (0x0001d0ee) form2_mdip_string_pane_t1_ParamLimits

0xdcb7,	// (0x0001d0ee) form2_mdip_string_pane_t1

0x1dc4,	// (0x000111fb) bg_wml_button_pane_cp2

0x1dba,	// (0x000111f1) form2_midp_image_pane_g1

0x296d,	// (0x00011da4) list_double_large_graphic_pane_g5_ParamLimits

0x296d,	// (0x00011da4) list_double_large_graphic_pane_g5

0xc9b3,	// (0x0001bdea) midp_form_pane_ParamLimits

0x1ea4,	// (0x000112db) main_apps_wheel_pane_ParamLimits

0xceaa,	// (0x0001c2e1) popup_preview_window_ParamLimits

0xceaa,	// (0x0001c2e1) popup_preview_window

0x43c8,	// (0x000137ff) popup_touch_info_window_ParamLimits

0x43c8,	// (0x000137ff) popup_touch_info_window

0x43e6,	// (0x0001381d) popup_touch_menu_window_ParamLimits

0x43e6,	// (0x0001381d) popup_touch_menu_window

0x1db0,	// (0x000111e7) bg_popup_sub_pane_cp6

0x723f,	// (0x00016676) list_touch_menu_pane

0x7247,	// (0x0001667e) list_single_touch_menu_pane_ParamLimits

0x7247,	// (0x0001667e) list_single_touch_menu_pane

0x725e,	// (0x00016695) list_single_touch_menu_pane_t1

0x1ea4,	// (0x000112db) bg_popup_sub_pane_cp7_ParamLimits

0x1ea4,	// (0x000112db) bg_popup_sub_pane_cp7

0x726c,	// (0x000166a3) heading_sub_pane

0x7274,	// (0x000166ab) list_touch_info_pane_ParamLimits

0x7274,	// (0x000166ab) list_touch_info_pane

0x7283,	// (0x000166ba) list_single_touch_info_pane_ParamLimits

0x7283,	// (0x000166ba) list_single_touch_info_pane

0x7295,	// (0x000166cc) list_single_touch_info_pane_t1

0x72a3,	// (0x000166da) list_single_touch_info_pane_t2

0x0001,

0xfb0a,	// (0x0001ef41) list_single_touch_info_pane_t

0x3ada,	// (0x00012f11) bg_popup_heading_pane_cp

0x72b1,	// (0x000166e8) heading_sub_pane_t1

0x4a56,	// (0x00013e8d) bg_popup_preview_window_pane_cp_ParamLimits

0x4a56,	// (0x00013e8d) bg_popup_preview_window_pane_cp

0x726c,	// (0x000166a3) heading_preview_pane

0x7274,	// (0x000166ab) list_preview_pane_ParamLimits

0x7274,	// (0x000166ab) list_preview_pane

0x72bf,	// (0x000166f6) popup_preview_window_g1

0x7283,	// (0x000166ba) list_single_preview_pane_ParamLimits

0x7283,	// (0x000166ba) list_single_preview_pane

0x72c7,	// (0x000166fe) list_single_preview_pane_g1

0x72cf,	// (0x00016706) list_single_preview_pane_t1

0x7295,	// (0x000166cc) list_single_preview_pane_t2

0x0001,

0xfb0f,	// (0x0001ef46) list_single_preview_pane_t

0x72dd,	// (0x00016714) bg_popup_heading_pane_cp2_ParamLimits

0x72dd,	// (0x00016714) bg_popup_heading_pane_cp2

0x72f3,	// (0x0001672a) heading_preview_pane_g1

0x72fb,	// (0x00016732) heading_preview_pane_t1_ParamLimits

0x72fb,	// (0x00016732) heading_preview_pane_t1

0x1faa,	// (0x000113e1) soft_indicator_pane_t1_ParamLimits

0x269d,	// (0x00011ad4) scroll_pane_ParamLimits

0x32a0,	// (0x000126d7) scroll_sc2_left_pane

0x32a9,	// (0x000126e0) scroll_sc2_right_pane

0x32c8,	// (0x000126ff) scroll_bg_pane_g1_ParamLimits

0x32dd,	// (0x00012714) scroll_bg_pane_g2_ParamLimits

0x32f5,	// (0x0001272c) scroll_bg_pane_g3_ParamLimits

0xf6fa,	// (0x0001eb31) scroll_bg_pane_g_ParamLimits

0x32c8,	// (0x000126ff) scroll_handle_pane_g1_ParamLimits

0x3317,	// (0x0001274e) scroll_handle_pane_g2_ParamLimits

0x32f5,	// (0x0001272c) scroll_handle_pane_g3_ParamLimits

0xf701,	// (0x0001eb38) scroll_handle_pane_g_ParamLimits

0x3e94,	// (0x000132cb) popup_choice_list_window_ParamLimits

0x3e94,	// (0x000132cb) popup_choice_list_window

0x484c,	// (0x00013c83) choice_list_pane

0x4908,	// (0x00013d3f) cell_toolbar_pane_t1

0x4930,	// (0x00013d67) toolbar_button_pane_ParamLimits

0x5ab9,	// (0x00014ef0) ai_gene_pane_1_t2_ParamLimits

0x5ab9,	// (0x00014ef0) ai_gene_pane_1_t2

0x0001,

0xf919,	// (0x0001ed50) ai_gene_pane_1_t_ParamLimits

0xf919,	// (0x0001ed50) ai_gene_pane_1_t

0x7318,	// (0x0001674f) scroll_sc2_left_pane_g1

0x7318,	// (0x0001674f) scroll_sc2_right_pane_g1

0x3e64,	// (0x0001329b) bg_popup_sub_pane_cp10

0x7322,	// (0x00016759) list_choice_list_pane

0x7339,	// (0x00016770) list_single_choice_list_pane_ParamLimits

0x7339,	// (0x00016770) list_single_choice_list_pane

0x734d,	// (0x00016784) list_single_choice_list_pane_g1

0x7355,	// (0x0001678c) list_single_choice_list_pane_t1_ParamLimits

0x7355,	// (0x0001678c) list_single_choice_list_pane_t1

0x736a,	// (0x000167a1) choice_list_pane_g1

0x7372,	// (0x000167a9) choice_list_pane_t1

0x1db0,	// (0x000111e7) input_focus_pane_cp11

0x317d,	// (0x000125b4) title_pane_stacon_g2_ParamLimits

0x317d,	// (0x000125b4) title_pane_stacon_g2

0x0002,

0xf6e0,	// (0x0001eb17) title_pane_stacon_g_ParamLimits

0xf6e0,	// (0x0001eb17) title_pane_stacon_g

0x3ada,	// (0x00012f11) cursor_press_pane

0xcb75,	// (0x0001bfac) popup_fep_hwr_window_ParamLimits

0xcb75,	// (0x0001bfac) popup_fep_hwr_window

0x3fb6,	// (0x000133ed) popup_fep_vkb_window_ParamLimits

0x3fb6,	// (0x000133ed) popup_fep_vkb_window

0x7380,	// (0x000167b7) cursor_press_pane_g1

0x0002,

0xfb38,	// (0x0001ef6f) fep_vkb_side_pane_g_ParamLimits

0x10fd,	// (0x00010534) fep_hwr_candidate_pane_ParamLimits

0x10fd,	// (0x00010534) fep_hwr_candidate_pane

0x1127,	// (0x0001055e) fep_hwr_side_pane_ParamLimits

0x1127,	// (0x0001055e) fep_hwr_side_pane

0x1147,	// (0x0001057e) fep_hwr_top_pane_ParamLimits

0x1147,	// (0x0001057e) fep_hwr_top_pane

0x115f,	// (0x00010596) fep_hwr_write_pane_ParamLimits

0x115f,	// (0x00010596) fep_hwr_write_pane

0xfb38,	// (0x0001ef6f) fep_vkb_side_pane_g

0x7388,	// (0x000167bf) fep_hwr_top_pane_g1

0x739a,	// (0x000167d1) fep_hwr_top_pane_g2

0x1199,	// (0x000105d0) fep_hwr_top_pane_g3

0x0002,

0xfb14,	// (0x0001ef4b) fep_hwr_top_pane_g

0x11ae,	// (0x000105e5) fep_hwr_top_text_pane

0x346e,	// (0x000128a5) fep_hwr_top_text_pane_g1

0x73d0,	// (0x00016807) fep_hwr_top_text_pane_t1

0x12a4,	// (0x000106db) fep_hwr_candidate_pane_g1

0x7623,	// (0x00016a5a) fep_vkb_keypad_pane_g3_ParamLimits

0x7623,	// (0x00016a5a) fep_vkb_keypad_pane_g3

0x764b,	// (0x00016a82) fep_vkb_keypad_pane_g4_ParamLimits

0x764b,	// (0x00016a82) fep_vkb_keypad_pane_g4

0x76ba,	// (0x00016af1) fep_vkb_bottom_pane_g2_ParamLimits

0x76ba,	// (0x00016af1) fep_vkb_bottom_pane_g2

0x0001,

0xfb3f,	// (0x0001ef76) fep_vkb_bottom_pane_g_ParamLimits

0xfb3f,	// (0x0001ef76) fep_vkb_bottom_pane_g

0x7318,	// (0x0001674f) cell_vkb_side_pane_g2

0x0001,

0xfb49,	// (0x0001ef80) cell_vkb_side_pane_g

0x7745,	// (0x00016b7c) cell_vkb_side_pane_t1

0x7753,	// (0x00016b8a) cell_vkb_side_pane_t1_copy1

0x7318,	// (0x0001674f) bg_fep_vkb_candidate_pane_g2

0x787f,	// (0x00016cb6) cell_vkb_candidate_pane_ParamLimits

0x73de,	// (0x00016815) aid_size_cell_vkb_ParamLimits

0x73de,	// (0x00016815) aid_size_cell_vkb

0x787f,	// (0x00016cb6) cell_vkb_candidate_pane

0x12cb,	// (0x00010702) bg_popup_fep_shadow_pane_g1

0xdd45,	// (0x0001d17c) fep_vkb_bottom_pane_ParamLimits

0xdd45,	// (0x0001d17c) fep_vkb_bottom_pane

0x74a2,	// (0x000168d9) fep_vkb_candidate_pane_ParamLimits

0x74a2,	// (0x000168d9) fep_vkb_candidate_pane

0xdd6a,	// (0x0001d1a1) fep_vkb_keypad_pane_ParamLimits

0xdd6a,	// (0x0001d1a1) fep_vkb_keypad_pane

0xdda6,	// (0x0001d1dd) fep_vkb_side_pane_ParamLimits

0xdda6,	// (0x0001d1dd) fep_vkb_side_pane

0xdde2,	// (0x0001d219) fep_vkb_top_pane_ParamLimits

0xdde2,	// (0x0001d219) fep_vkb_top_pane

0x757c,	// (0x000169b3) fep_vkb_top_pane_g1_ParamLimits

0x757c,	// (0x000169b3) fep_vkb_top_pane_g1

0x758b,	// (0x000169c2) fep_vkb_top_pane_g2_ParamLimits

0x758b,	// (0x000169c2) fep_vkb_top_pane_g2

0x759a,	// (0x000169d1) fep_vkb_top_pane_g3_ParamLimits

0x759a,	// (0x000169d1) fep_vkb_top_pane_g3

0x0003,

0xfb2f,	// (0x0001ef66) fep_vkb_top_pane_g_ParamLimits

0xfb2f,	// (0x0001ef66) fep_vkb_top_pane_g

0x75b8,	// (0x000169ef) fep_vkb_top_text_pane_ParamLimits

0x75b8,	// (0x000169ef) fep_vkb_top_text_pane

0xde1e,	// (0x0001d255) fep_vkb_side_pane_g1_ParamLimits

0xde1e,	// (0x0001d255) fep_vkb_side_pane_g1

0x7612,	// (0x00016a49) grid_vkb_side_pane_ParamLimits

0x7612,	// (0x00016a49) grid_vkb_side_pane

0x12d3,	// (0x0001070a) bg_popup_fep_shadow_pane_g2

0x12dc,	// (0x00010713) bg_popup_fep_shadow_pane_g3

0x12e4,	// (0x0001071b) bg_popup_fep_shadow_pane_g4

0x12ed,	// (0x00010724) bg_popup_fep_shadow_pane_g5

0x12f7,	// (0x0001072e) bg_popup_fep_shadow_pane_g6

0x12ff,	// (0x00010736) bg_popup_fep_shadow_pane_g7

0x2ddb,	// (0x00012212) bg_popup_fep_shadow_pane_g8

0x7669,	// (0x00016aa0) grid_vkb_keypad_number_pane_ParamLimits

0x7669,	// (0x00016aa0) grid_vkb_keypad_number_pane

0x7679,	// (0x00016ab0) grid_vkb_keypad_pane_ParamLimits

0x7679,	// (0x00016ab0) grid_vkb_keypad_pane

0x769f,	// (0x00016ad6) fep_vkb_bottom_pane_g1_ParamLimits

0x769f,	// (0x00016ad6) fep_vkb_bottom_pane_g1

0x76c8,	// (0x00016aff) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x76c8,	// (0x00016aff) grid_vkb_keypad_bottom_left_pane

0x76dd,	// (0x00016b14) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x76dd,	// (0x00016b14) grid_vkb_keypad_bottom_right_pane

0x76f2,	// (0x00016b29) fep_vkb_top_text_pane_g1

0xde65,	// (0x0001d29c) fep_vkb_top_text_pane_t1

0xde77,	// (0x0001d2ae) cell_vkb_side_pane_ParamLimits

0xde77,	// (0x0001d2ae) cell_vkb_side_pane

0x7318,	// (0x0001674f) cell_vkb_side_pane_g1

0x7761,	// (0x00016b98) cell_vkb_keypad_pane_ParamLimits

0x7761,	// (0x00016b98) cell_vkb_keypad_pane

0x77d6,	// (0x00016c0d) cell_vkb_keypad_pane_g1

0x0008,

0xfb5c,	// (0x0001ef93) bg_popup_fep_shadow_pane_g

0x1311,	// (0x00010748) cell_hwr_side_pane_g1

0x1311,	// (0x00010748) cell_hwr_side_pane_g2

0x77e0,	// (0x00016c17) cell_vkb_keypad_pane_t1

0xde8d,	// (0x0001d2c4) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xde8d,	// (0x0001d2c4) cell_vkb_keypad_bottom_left_pane

0xdea2,	// (0x0001d2d9) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdea2,	// (0x0001d2d9) cell_vkb_keypad_bottom_right_pane

0x7318,	// (0x0001674f) cell_vkb_keypad_bottom_left_pane_g1

0x7318,	// (0x0001674f) cell_vkb_keypad_bottom_right_pane_g1

0x7844,	// (0x00016c7b) cell_vkb_keypad_number_pane_ParamLimits

0x7844,	// (0x00016c7b) cell_vkb_keypad_number_pane

0x7863,	// (0x00016c9a) cell_vkb_keypad_number_pane_g1

0x786d,	// (0x00016ca4) cell_vkb_keypad_number_pane_g2

0x7876,	// (0x00016cad) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4e,	// (0x0001ef85) cell_vkb_keypad_number_pane_g

0x77e0,	// (0x00016c17) cell_vkb_keypad_number_pane_t1

0x789a,	// (0x00016cd1) fep_vkb_candidate_pane_g1

0x0001,

0xfb6f,	// (0x0001efa6) cell_hwr_side_pane_g

0x78b3,	// (0x00016cea) cell_hwr_side_pane_t1

0x131b,	// (0x00010752) cell_hwr_side_pane_t1_copy1

0x1329,	// (0x00010760) cell_hwr_candidate_pane_g1

0x1358,	// (0x0001078f) cell_hwr_candidate_pane_t1

0x7318,	// (0x0001674f) cell_vkb_candidate_pane_g2

0x78f7,	// (0x00016d2e) cell_vkb_candidate_pane_t1

0x10c4,	// (0x000104fb) bg_popup_fep_shadow_pane_ParamLimits

0x10c4,	// (0x000104fb) bg_popup_fep_shadow_pane

0x1179,	// (0x000105b0) bg_fep_hwr_top_pane_g4

0x73ac,	// (0x000167e3) bg_hwr_side_pane_g1_ParamLimits

0x73ac,	// (0x000167e3) bg_hwr_side_pane_g1

0xb91a,	// (0x0001ad51) cell_hwr_side_pane_ParamLimits

0xb91a,	// (0x0001ad51) cell_hwr_side_pane

0x1225,	// (0x0001065c) fep_hwr_write_pane_g1_ParamLimits

0x1225,	// (0x0001065c) fep_hwr_write_pane_g1

0x1232,	// (0x00010669) fep_hwr_write_pane_g2_ParamLimits

0x1232,	// (0x00010669) fep_hwr_write_pane_g2

0x123f,	// (0x00010676) fep_hwr_write_pane_g3_ParamLimits

0x123f,	// (0x00010676) fep_hwr_write_pane_g3

0xb93a,	// (0x0001ad71) fep_hwr_write_pane_g4_ParamLimits

0xb93a,	// (0x0001ad71) fep_hwr_write_pane_g4

0x0005,

0xfb1b,	// (0x0001ef52) fep_hwr_write_pane_g_ParamLimits

0xfb1b,	// (0x0001ef52) fep_hwr_write_pane_g

0x1179,	// (0x000105b0) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1179,	// (0x000105b0) bg_fep_hwr_candidate_pane_g2

0x1262,	// (0x00010699) cell_hwr_candidate_pane_ParamLimits

0x1262,	// (0x00010699) cell_hwr_candidate_pane

0x12a4,	// (0x000106db) fep_hwr_candidate_pane_g1_ParamLimits

0x740c,	// (0x00016843) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x740c,	// (0x00016843) bg_popup_fep_shadow_pane_cp2

0x75aa,	// (0x000169e1) fep_vkb_top_pane_g4_ParamLimits

0x75aa,	// (0x000169e1) fep_vkb_top_pane_g4

0x75f0,	// (0x00016a27) fep_vkb_side_pane_g2_ParamLimits

0x75f0,	// (0x00016a27) fep_vkb_side_pane_g2

0xc498,	// (0x0001b8cf) list_setting_pane_t4_ParamLimits

0xc498,	// (0x0001b8cf) list_setting_pane_t4

0xc512,	// (0x0001b949) list_setting_number_pane_t5_ParamLimits

0xc512,	// (0x0001b949) list_setting_number_pane_t5

0xc840,	// (0x0001bc77) list_double_heading_pane_cp2_ParamLimits

0xc840,	// (0x0001bc77) list_double_heading_pane_cp2

0x2cb1,	// (0x000120e8) list_double_heading_pane_g1_cp2_ParamLimits

0x2cb1,	// (0x000120e8) list_double_heading_pane_g1_cp2

0x2cbd,	// (0x000120f4) list_double_heading_pane_g2_cp2_ParamLimits

0x2cbd,	// (0x000120f4) list_double_heading_pane_g2_cp2

0x7905,	// (0x00016d3c) list_double_heading_pane_t1_cp2_ParamLimits

0x7905,	// (0x00016d3c) list_double_heading_pane_t1_cp2

0x791b,	// (0x00016d52) list_double_heading_pane_t2_cp2_ParamLimits

0x791b,	// (0x00016d52) list_double_heading_pane_t2_cp2

0x1d98,	// (0x000111cf) aid_value_unit2

0x044f,	// (0x0000f886) popup_preview_fixed_window

0x2147,	// (0x0001157e) bg_popup_preview_window_pane_cp02

0x792d,	// (0x00016d64) list_preview_fixed_pane

0x7973,	// (0x00016daa) list_empty_pane_fp_ParamLimits

0x7973,	// (0x00016daa) list_empty_pane_fp

0x7973,	// (0x00016daa) list_single_cale_day_pane_fp_ParamLimits

0x7973,	// (0x00016daa) list_single_cale_day_pane_fp

0x7973,	// (0x00016daa) list_single_graphic_heading_pane_fp_ParamLimits

0x7973,	// (0x00016daa) list_single_graphic_heading_pane_fp

0x7973,	// (0x00016daa) list_single_graphic_pane_fp_ParamLimits

0x7973,	// (0x00016daa) list_single_graphic_pane_fp

0x7973,	// (0x00016daa) list_single_heading_pane_fp_ParamLimits

0x7973,	// (0x00016daa) list_single_heading_pane_fp

0x7973,	// (0x00016daa) list_single_pane_fp_ParamLimits

0x7973,	// (0x00016daa) list_single_pane_fp

0x7988,	// (0x00016dbf) list_single_pane_fp_g1_ParamLimits

0x7988,	// (0x00016dbf) list_single_pane_fp_g1

0x28ee,	// (0x00011d25) list_single_pane_fp_g2_ParamLimits

0x28ee,	// (0x00011d25) list_single_pane_fp_g2

0x7994,	// (0x00016dcb) list_single_pane_fp_g3_ParamLimits

0x7994,	// (0x00016dcb) list_single_pane_fp_g3

0x79a8,	// (0x00016ddf) list_single_pane_fp_g4_ParamLimits

0x79a8,	// (0x00016ddf) list_single_pane_fp_g4

0x0003,

0xfb82,	// (0x0001efb9) list_single_pane_fp_g_ParamLimits

0xfb82,	// (0x0001efb9) list_single_pane_fp_g

0x79b4,	// (0x00016deb) list_single_pane_fp_t1_ParamLimits

0x79b4,	// (0x00016deb) list_single_pane_fp_t1

0x79cb,	// (0x00016e02) list_single_graphic_pane_fp_g1_ParamLimits

0x79cb,	// (0x00016e02) list_single_graphic_pane_fp_g1

0x7988,	// (0x00016dbf) list_single_graphic_pane_fp_g2_ParamLimits

0x7988,	// (0x00016dbf) list_single_graphic_pane_fp_g2

0x28ee,	// (0x00011d25) list_single_graphic_pane_fp_g3_ParamLimits

0x28ee,	// (0x00011d25) list_single_graphic_pane_fp_g3

0x7994,	// (0x00016dcb) list_single_graphic_pane_fp_g4_ParamLimits

0x7994,	// (0x00016dcb) list_single_graphic_pane_fp_g4

0x79a8,	// (0x00016ddf) list_single_graphic_pane_fp_g5_ParamLimits

0x79a8,	// (0x00016ddf) list_single_graphic_pane_fp_g5

0x0004,

0xfb8b,	// (0x0001efc2) list_single_graphic_pane_fp_g_ParamLimits

0xfb8b,	// (0x0001efc2) list_single_graphic_pane_fp_g

0x79d7,	// (0x00016e0e) list_single_graphic_pane_fp_t1_ParamLimits

0x79d7,	// (0x00016e0e) list_single_graphic_pane_fp_t1

0x79cb,	// (0x00016e02) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x79cb,	// (0x00016e02) list_single_graphic_heading_pane_fp_g1

0x7988,	// (0x00016dbf) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7988,	// (0x00016dbf) list_single_graphic_heading_pane_fp_g2

0x28ee,	// (0x00011d25) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x28ee,	// (0x00011d25) list_single_graphic_heading_pane_fp_g3

0x7994,	// (0x00016dcb) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7994,	// (0x00016dcb) list_single_graphic_heading_pane_fp_g4

0x79a8,	// (0x00016ddf) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x79a8,	// (0x00016ddf) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x0001efc2) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x0001efc2) list_single_graphic_heading_pane_fp_g

0x79ed,	// (0x00016e24) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x79ed,	// (0x00016e24) list_single_graphic_heading_pane_fp_t1

0x7a03,	// (0x00016e3a) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7a03,	// (0x00016e3a) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb96,	// (0x0001efcd) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb96,	// (0x0001efcd) list_single_graphic_heading_pane_fp_t

0x7a15,	// (0x00016e4c) list_single_cale_day_pane_fp_g1_ParamLimits

0x7a15,	// (0x00016e4c) list_single_cale_day_pane_fp_g1

0x7a4d,	// (0x00016e84) list_single_cale_day_pane_fp_g2_ParamLimits

0x7a4d,	// (0x00016e84) list_single_cale_day_pane_fp_g2

0x7a59,	// (0x00016e90) list_single_cale_day_pane_fp_g3_ParamLimits

0x7a59,	// (0x00016e90) list_single_cale_day_pane_fp_g3

0x7a81,	// (0x00016eb8) list_single_cale_day_pane_fp_g4_ParamLimits

0x7a81,	// (0x00016eb8) list_single_cale_day_pane_fp_g4

0x7aa5,	// (0x00016edc) list_single_cale_day_pane_fp_g5_ParamLimits

0x7aa5,	// (0x00016edc) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9b,	// (0x0001efd2) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9b,	// (0x0001efd2) list_single_cale_day_pane_fp_g

0x7ac9,	// (0x00016f00) list_single_cale_day_pane_fp_t1_ParamLimits

0x7ac9,	// (0x00016f00) list_single_cale_day_pane_fp_t1

0x7aef,	// (0x00016f26) list_single_cale_day_pane_fp_t2_ParamLimits

0x7aef,	// (0x00016f26) list_single_cale_day_pane_fp_t2

0x7b08,	// (0x00016f3f) list_single_cale_day_pane_fp_t3_ParamLimits

0x7b08,	// (0x00016f3f) list_single_cale_day_pane_fp_t3

0x0002,

0xfba6,	// (0x0001efdd) list_single_cale_day_pane_fp_t_ParamLimits

0xfba6,	// (0x0001efdd) list_single_cale_day_pane_fp_t

0x7988,	// (0x00016dbf) list_empty_pane_fp_g1_ParamLimits

0x7988,	// (0x00016dbf) list_empty_pane_fp_g1

0x7b21,	// (0x00016f58) list_empty_pane_fp_t1

0x7b2f,	// (0x00016f66) list_empty_pane_fp_t2

0x0001,

0xfbad,	// (0x0001efe4) list_empty_pane_fp_t

0x7988,	// (0x00016dbf) list_single_heading_pane_fp_g1_ParamLimits

0x7988,	// (0x00016dbf) list_single_heading_pane_fp_g1

0x28ee,	// (0x00011d25) list_single_heading_pane_fp_g2_ParamLimits

0x28ee,	// (0x00011d25) list_single_heading_pane_fp_g2

0x7994,	// (0x00016dcb) list_single_heading_pane_fp_g3_ParamLimits

0x7994,	// (0x00016dcb) list_single_heading_pane_fp_g3

0x0002,

0xfbb2,	// (0x0001efe9) list_single_heading_pane_fp_g_ParamLimits

0xfbb2,	// (0x0001efe9) list_single_heading_pane_fp_g

0x7b3d,	// (0x00016f74) list_single_heading_pane_fp_t1_ParamLimits

0x7b3d,	// (0x00016f74) list_single_heading_pane_fp_t1

0x7b4f,	// (0x00016f86) list_single_heading_pane_fp_t2_ParamLimits

0x7b4f,	// (0x00016f86) list_single_heading_pane_fp_t2

0x0001,

0xfbb9,	// (0x0001eff0) list_single_heading_pane_fp_t_ParamLimits

0xfbb9,	// (0x0001eff0) list_single_heading_pane_fp_t

0x3014,	// (0x0001244b) aid_size_cell_fast

0x20b7,	// (0x000114ee) soft_indicator_pane_cp1_t1

0x3051,	// (0x00012488) cell_app_pane_cp2_ParamLimits

0x3051,	// (0x00012488) cell_app_pane_cp2

0x10e6,	// (0x0001051d) fep_hwr_candidate_drop_down_list_pane

0x12be,	// (0x000106f5) fep_hwr_candidate_pane_g3_ParamLimits

0x12be,	// (0x000106f5) fep_hwr_candidate_pane_g3

0xed03,	// (0x0001e13a) fep_hwr_candidate_pane_g4_ParamLimits

0xed03,	// (0x0001e13a) fep_hwr_candidate_pane_g4

0x0002,

0xfb28,	// (0x0001ef5f) fep_hwr_candidate_pane_g_ParamLimits

0xfb28,	// (0x0001ef5f) fep_hwr_candidate_pane_g

0x7491,	// (0x000168c8) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7491,	// (0x000168c8) fep_vkb_candidate_drop_down_list_pane

0x78a2,	// (0x00016cd9) fep_vkb_candidate_pane_g3

0x78aa,	// (0x00016ce1) fep_vkb_candidate_pane_g4

0x0002,

0xfb55,	// (0x0001ef8c) fep_vkb_candidate_pane_g

0x1329,	// (0x00010760) cell_hwr_candidate_pane_g1_ParamLimits

0x1337,	// (0x0001076e) cell_hwr_candidate_pane_g3_ParamLimits

0x1337,	// (0x0001076e) cell_hwr_candidate_pane_g3

0x9819,	// (0x00018c50) cell_hwr_candidate_pane_g4_ParamLimits

0x9819,	// (0x00018c50) cell_hwr_candidate_pane_g4

0x0002,

0xfb74,	// (0x0001efab) cell_hwr_candidate_pane_g_ParamLimits

0xfb74,	// (0x0001efab) cell_hwr_candidate_pane_g

0x78c1,	// (0x00016cf8) cell_vkb_candidate_pane_g3_ParamLimits

0x78c1,	// (0x00016cf8) cell_vkb_candidate_pane_g3

0x78dc,	// (0x00016d13) cell_vkb_candidate_pane_g4_ParamLimits

0x78dc,	// (0x00016d13) cell_vkb_candidate_pane_g4

0x7b65,	// (0x00016f9c) cell_app_pane_cp2_g1_ParamLimits

0x7b65,	// (0x00016f9c) cell_app_pane_cp2_g1

0x7b83,	// (0x00016fba) cell_app_pane_cp2_g2_ParamLimits

0x7b83,	// (0x00016fba) cell_app_pane_cp2_g2

0x0001,

0xfbbe,	// (0x0001eff5) cell_app_pane_cp2_g_ParamLimits

0xfbbe,	// (0x0001eff5) cell_app_pane_cp2_g

0x7b8f,	// (0x00016fc6) cell_app_pane_cp2_t1_ParamLimits

0x7b8f,	// (0x00016fc6) cell_app_pane_cp2_t1

0x2c8b,	// (0x000120c2) grid_highlight_pane_cp1_ParamLimits

0x2c8b,	// (0x000120c2) grid_highlight_pane_cp1

0x1376,	// (0x000107ad) cell_hwr_candidate_pane_cp1_ParamLimits

0x1376,	// (0x000107ad) cell_hwr_candidate_pane_cp1

0x1329,	// (0x00010760) fep_hwr_candidate_drop_down_list_pane_g1

0x1395,	// (0x000107cc) fep_hwr_candidate_drop_down_list_pane_g2

0x13a2,	// (0x000107d9) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x0001effa) fep_hwr_candidate_drop_down_list_pane_g

0x13af,	// (0x000107e6) fep_hwr_candidate_drop_down_list_scroll_pane

0x13b8,	// (0x000107ef) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x13b8,	// (0x000107ef) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x13c5,	// (0x000107fc) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x13c5,	// (0x000107fc) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x13d2,	// (0x00010809) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x13d2,	// (0x00010809) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x13df,	// (0x00010816) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x13df,	// (0x00010816) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x13fa,	// (0x00010831) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x13fa,	// (0x00010831) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1415,	// (0x0001084c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1415,	// (0x0001084c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1430,	// (0x00010867) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1430,	// (0x00010867) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x144b,	// (0x00010882) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x144b,	// (0x00010882) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x0001f001) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x0001f001) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7bfe,	// (0x00017035) cell_vkb_candidate_pane_cp1_ParamLimits

0x7bfe,	// (0x00017035) cell_vkb_candidate_pane_cp1

0x75aa,	// (0x000169e1) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x75aa,	// (0x000169e1) fep_vkb_candidate_drop_down_list_pane_g1

0x7ba1,	// (0x00016fd8) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7ba1,	// (0x00016fd8) fep_vkb_candidate_drop_down_list_pane_g2

0x7c1e,	// (0x00017055) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7c1e,	// (0x00017055) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbdb,	// (0x0001f012) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbdb,	// (0x0001f012) fep_vkb_candidate_drop_down_list_pane_g

0x7c2b,	// (0x00017062) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7c2b,	// (0x00017062) fep_vkb_candidate_drop_down_list_scroll_pane

0x7c38,	// (0x0001706f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7c38,	// (0x0001706f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7c45,	// (0x0001707c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7c45,	// (0x0001707c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7c51,	// (0x00017088) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7c51,	// (0x00017088) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7bae,	// (0x00016fe5) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7bae,	// (0x00016fe5) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7bcf,	// (0x00017006) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7bcf,	// (0x00017006) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7c5d,	// (0x00017094) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7c5d,	// (0x00017094) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7c7e,	// (0x000170b5) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7c7e,	// (0x000170b5) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7c9f,	// (0x000170d6) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7c9f,	// (0x000170d6) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe2,	// (0x0001f019) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe2,	// (0x0001f019) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xbdaa,	// (0x0001b1e1) title_pane_g1_ParamLimits

0xbdbb,	// (0x0001b1f2) title_pane_g2_ParamLimits

0xf56a,	// (0x0001e9a1) title_pane_g_ParamLimits

0x345e,	// (0x00012895) aid_call2_pane

0x3466,	// (0x0001289d) aid_call_pane

0x346e,	// (0x000128a5) popup_clock_analogue_window_g1

0x346e,	// (0x000128a5) popup_clock_analogue_window_g2

0x07b8,	// (0x0000fbef) popup_clock_analogue_window_g3

0x07c1,	// (0x0000fbf8) popup_clock_analogue_window_g4

0x1dba,	// (0x000111f1) popup_clock_analogue_window_g5

0x0004,

0xf70f,	// (0x0001eb46) popup_clock_analogue_window_g

0x07c9,	// (0x0000fc00) popup_clock_analogue_window_t1

0x07d7,	// (0x0000fc0e) clock_digital_number_pane_ParamLimits

0x07d7,	// (0x0000fc0e) clock_digital_number_pane

0x07e3,	// (0x0000fc1a) clock_digital_number_pane_cp02_ParamLimits

0x07e3,	// (0x0000fc1a) clock_digital_number_pane_cp02

0x07ef,	// (0x0000fc26) clock_digital_number_pane_cp03_ParamLimits

0x07ef,	// (0x0000fc26) clock_digital_number_pane_cp03

0x07fb,	// (0x0000fc32) clock_digital_number_pane_cp04_ParamLimits

0x07fb,	// (0x0000fc32) clock_digital_number_pane_cp04

0x0807,	// (0x0000fc3e) clock_digital_separator_pane_ParamLimits

0x0807,	// (0x0000fc3e) clock_digital_separator_pane

0x0813,	// (0x0000fc4a) popup_clock_digital_window_t1_ParamLimits

0x0813,	// (0x0000fc4a) popup_clock_digital_window_t1

0x1dba,	// (0x000111f1) clock_digital_number_pane_g1

0x1dba,	// (0x000111f1) clock_digital_number_pane_g2

0x0001,

0xf71a,	// (0x0001eb51) clock_digital_number_pane_g

0x1dba,	// (0x000111f1) clock_digital_separator_pane_g1

0x1dba,	// (0x000111f1) clock_digital_separator_pane_g2

0x0001,

0xf71a,	// (0x0001eb51) clock_digital_separator_pane_g

0xd14e,	// (0x0001c585) aid_fill_nsta_ParamLimits

0xd27d,	// (0x0001c6b4) indicator_nsta_pane_ParamLimits

0x46d9,	// (0x00013b10) popup_clock_analogue_window

0x46d9,	// (0x00013b10) popup_clock_digital_window

0x2fd5,	// (0x0001240c) grid_indicator_nsta_pane_ParamLimits

0x6ca8,	// (0x000160df) clock_nsta_pane_t2

0x0001,

0xfaa8,	// (0x0001eedf) clock_nsta_pane_t

0x077c,	// (0x0000fbb3) aid_size_max_handle

0xb5fe,	// (0x0001aa35) aid_size_min_handle

0x3ada,	// (0x00012f11) editor_scroll_pane

0x7cba,	// (0x000170f1) ex_editor_pane

0x2f82,	// (0x000123b9) scroll_pane_cp13

0x26c9,	// (0x00011b00) scroll_pane_cp14

0x3498,	// (0x000128cf) scroll_pane_cp36

0xc84f,	// (0x0001bc86) list_single_graphic_hl_pane_cp2_ParamLimits

0xc84f,	// (0x0001bc86) list_single_graphic_hl_pane_cp2

0xd997,	// (0x0001cdce) list_single_graphic_hl_pane_ParamLimits

0xd997,	// (0x0001cdce) list_single_graphic_hl_pane

0x7cc2,	// (0x000170f9) aid_size_min_hl_cp1

0x7ccb,	// (0x00017102) list_highlight_pane_cp34_ParamLimits

0x7ccb,	// (0x00017102) list_highlight_pane_cp34

0x7cdc,	// (0x00017113) list_single_graphic_hl_pane_g1_ParamLimits

0x7cdc,	// (0x00017113) list_single_graphic_hl_pane_g1

0xdebd,	// (0x0001d2f4) list_single_graphic_hl_pane_g2_ParamLimits

0xdebd,	// (0x0001d2f4) list_single_graphic_hl_pane_g2

0xdebd,	// (0x0001d2f4) list_single_graphic_hl_pane_g3_ParamLimits

0xdebd,	// (0x0001d2f4) list_single_graphic_hl_pane_g3

0x3a4b,	// (0x00012e82) list_single_graphic_hl_pane_g4_ParamLimits

0x3a4b,	// (0x00012e82) list_single_graphic_hl_pane_g4

0xdec9,	// (0x0001d300) list_single_graphic_hl_pane_g5_ParamLimits

0xdec9,	// (0x0001d300) list_single_graphic_hl_pane_g5

0x0004,

0xfbf3,	// (0x0001f02a) list_single_graphic_hl_pane_g_ParamLimits

0xfbf3,	// (0x0001f02a) list_single_graphic_hl_pane_g

0xdedd,	// (0x0001d314) list_single_graphic_hl_pane_t1_ParamLimits

0xdedd,	// (0x0001d314) list_single_graphic_hl_pane_t1

0x7d1f,	// (0x00017156) aid_size_min_hl_cp2

0x7d28,	// (0x0001715f) list_highlight_pane_cp34_cp2_ParamLimits

0x7d28,	// (0x0001715f) list_highlight_pane_cp34_cp2

0x7cdc,	// (0x00017113) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7cdc,	// (0x00017113) list_single_graphic_hl_pane_g1_cp2

0x7d35,	// (0x0001716c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7d35,	// (0x0001716c) list_single_graphic_hl_pane_g2_cp2

0x7d41,	// (0x00017178) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7d41,	// (0x00017178) list_single_graphic_hl_pane_g3_cp2

0x48b2,	// (0x00013ce9) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x48b2,	// (0x00013ce9) list_single_graphic_hl_pane_g4_cp2

0x7cf5,	// (0x0001712c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7cf5,	// (0x0001712c) list_single_graphic_hl_pane_g5_cp2

0xb630,	// (0x0001aa67) control_pane_g4_ParamLimits

0xb630,	// (0x0001aa67) control_pane_g4

0x3e64,	// (0x0001329b) bg_popup_sub_pane_cp10_ParamLimits

0x7322,	// (0x00016759) list_choice_list_pane_ParamLimits

0x7331,	// (0x00016768) scroll_pane_cp23

0x2147,	// (0x0001157e) bg_popup_preview_window_pane_cp02_ParamLimits

0x792d,	// (0x00016d64) list_preview_fixed_pane_ParamLimits

0x7943,	// (0x00016d7a) list_preview_fixed_pane_cp_ParamLimits

0x7943,	// (0x00016d7a) list_preview_fixed_pane_cp

0x794f,	// (0x00016d86) popup_preview_fixed_window_g1_ParamLimits

0x794f,	// (0x00016d86) popup_preview_fixed_window_g1

0x795b,	// (0x00016d92) popup_preview_fixed_window_g2_ParamLimits

0x795b,	// (0x00016d92) popup_preview_fixed_window_g2

0x0002,

0xfb7b,	// (0x0001efb2) popup_preview_fixed_window_g_ParamLimits

0xfb7b,	// (0x0001efb2) popup_preview_fixed_window_g

0x06f0,	// (0x0000fb27) aid_navi_side_left_pane_ParamLimits

0x0705,	// (0x0000fb3c) aid_navi_side_right_pane_ParamLimits

0x071d,	// (0x0000fb54) navi_icon_pane_stacon_ParamLimits

0x0731,	// (0x0000fb68) navi_navi_pane_stacon_ParamLimits

0x071d,	// (0x0000fb54) navi_text_pane_stacon_ParamLimits

0x1db0,	// (0x000111e7) main_text_info_pane

0x7d65,	// (0x0001719c) listscroll_text_info_pane

0x7d6d,	// (0x000171a4) list_text_info_pane_ParamLimits

0x7d6d,	// (0x000171a4) list_text_info_pane

0x7d7c,	// (0x000171b3) scroll_pane_cp24_ParamLimits

0x7d7c,	// (0x000171b3) scroll_pane_cp24

0xdef3,	// (0x0001d32a) list_text_info_pane_t1_ParamLimits

0xdef3,	// (0x0001d32a) list_text_info_pane_t1

0xcae8,	// (0x0001bf1f) popup_fast_swap2_window_ParamLimits

0xcae8,	// (0x0001bf1f) popup_fast_swap2_window

0x7dcb,	// (0x00017202) aid_size_cell_fast2

0x1db0,	// (0x000111e7) bg_popup_window_pane_cp17

0x4e56,	// (0x0001428d) heading_pane_cp2

0x2393,	// (0x000117ca) listscroll_fast2_pane

0x7dd5,	// (0x0001720c) grid_fast2_pane

0x7ddf,	// (0x00017216) listscroll_fast2_pane_g1

0x7de7,	// (0x0001721e) listscroll_fast2_pane_g2

0x0001,

0xfbfe,	// (0x0001f035) listscroll_fast2_pane_g

0x2f82,	// (0x000123b9) scroll_pane_cp26

0x7df1,	// (0x00017228) cell_fast2_pane_ParamLimits

0x7df1,	// (0x00017228) cell_fast2_pane

0x7e06,	// (0x0001723d) cell_fast2_pane_g1

0x7e0f,	// (0x00017246) cell_fast2_pane_g2

0x7e18,	// (0x0001724f) cell_fast2_pane_g3

0x0002,

0xfc03,	// (0x0001f03a) cell_fast2_pane_g

0x2486,	// (0x000118bd) grid_highlight_pane_cp9

0x249b,	// (0x000118d2) main_eswt_pane_ParamLimits

0x249b,	// (0x000118d2) main_eswt_pane

0x7d91,	// (0x000171c8) list_single_text_info_pane

0x7e20,	// (0x00017257) eswt_ctrl_button_pane

0x7e20,	// (0x00017257) eswt_ctrl_canvas_pane

0x7e28,	// (0x0001725f) eswt_ctrl_combo_pane

0x7e20,	// (0x00017257) eswt_ctrl_default_pane

0x7e20,	// (0x00017257) eswt_ctrl_label_pane

0x7e30,	// (0x00017267) eswt_ctrl_wait_pane

0x7e38,	// (0x0001726f) eswt_shell_pane

0x1db0,	// (0x000111e7) listscroll_eswt_app_pane

0x7e58,	// (0x0001728f) popup_eswt_tasktip_window_ParamLimits

0x7e58,	// (0x0001728f) popup_eswt_tasktip_window

0x4a56,	// (0x00013e8d) bg_popup_window_pane_cp18

0x7e69,	// (0x000172a0) eswt_control_pane_g1_ParamLimits

0x7e69,	// (0x000172a0) eswt_control_pane_g1

0x7e76,	// (0x000172ad) eswt_control_pane_g2_ParamLimits

0x7e76,	// (0x000172ad) eswt_control_pane_g2

0x7e83,	// (0x000172ba) eswt_control_pane_g3_ParamLimits

0x7e83,	// (0x000172ba) eswt_control_pane_g3

0x7e90,	// (0x000172c7) eswt_control_pane_g4_ParamLimits

0x7e90,	// (0x000172c7) eswt_control_pane_g4

0x0003,

0xfc0a,	// (0x0001f041) eswt_control_pane_g_ParamLimits

0xfc0a,	// (0x0001f041) eswt_control_pane_g

0x2c8b,	// (0x000120c2) bg_button_pane_ParamLimits

0x2c8b,	// (0x000120c2) bg_button_pane

0x249b,	// (0x000118d2) common_borders_pane_copy2_ParamLimits

0x249b,	// (0x000118d2) common_borders_pane_copy2

0x7e9d,	// (0x000172d4) control_button_pane_g1_ParamLimits

0x7e9d,	// (0x000172d4) control_button_pane_g1

0x7ea9,	// (0x000172e0) control_button_pane_g2_ParamLimits

0x7ea9,	// (0x000172e0) control_button_pane_g2

0x7eb5,	// (0x000172ec) control_button_pane_g3_ParamLimits

0x7eb5,	// (0x000172ec) control_button_pane_g3

0x0002,

0xfc13,	// (0x0001f04a) control_button_pane_g_ParamLimits

0xfc13,	// (0x0001f04a) control_button_pane_g

0x7ec9,	// (0x00017300) control_button_pane_t1

0x7ed7,	// (0x0001730e) control_button_pane_t2

0x0001,

0xfc1a,	// (0x0001f051) control_button_pane_t

0x493c,	// (0x00013d73) bg_button_pane_g1

0x494c,	// (0x00013d83) bg_button_pane_g2

0x4944,	// (0x00013d7b) bg_button_pane_g3

0x495c,	// (0x00013d93) bg_button_pane_g4

0x4954,	// (0x00013d8b) bg_button_pane_g5

0x4964,	// (0x00013d9b) bg_button_pane_g6

0x496c,	// (0x00013da3) bg_button_pane_g7

0x497c,	// (0x00013db3) bg_button_pane_g8

0x4974,	// (0x00013dab) bg_button_pane_g9

0x0008,

0xf86d,	// (0x0001eca4) bg_button_pane_g

0x72dd,	// (0x00016714) common_borders_pane_ParamLimits

0x72dd,	// (0x00016714) common_borders_pane

0x7e69,	// (0x000172a0) eswt_control_pane_g1_copy1_ParamLimits

0x7e69,	// (0x000172a0) eswt_control_pane_g1_copy1

0x7e76,	// (0x000172ad) eswt_control_pane_g2_copy1_ParamLimits

0x7e76,	// (0x000172ad) eswt_control_pane_g2_copy1

0x7e83,	// (0x000172ba) eswt_control_pane_g3_copy1_ParamLimits

0x7e83,	// (0x000172ba) eswt_control_pane_g3_copy1

0x7e90,	// (0x000172c7) eswt_control_pane_g4_copy1_ParamLimits

0x7e90,	// (0x000172c7) eswt_control_pane_g4_copy1

0x7318,	// (0x0001674f) bg_eswt_ctrl_canvas_pane_g1

0x72dd,	// (0x00016714) common_borders_pane_cp2_ParamLimits

0x72dd,	// (0x00016714) common_borders_pane_cp2

0x72dd,	// (0x00016714) common_borders_pane_cp3_ParamLimits

0x72dd,	// (0x00016714) common_borders_pane_cp3

0x7ee5,	// (0x0001731c) separator_horizontal_pane

0x7eed,	// (0x00017324) separator_vertical_pane

0x7e69,	// (0x000172a0) eswt_control_pane_g1_copy2_ParamLimits

0x7e69,	// (0x000172a0) eswt_control_pane_g1_copy2

0x7e76,	// (0x000172ad) eswt_control_pane_g2_copy2_ParamLimits

0x7e76,	// (0x000172ad) eswt_control_pane_g2_copy2

0x7e83,	// (0x000172ba) eswt_control_pane_g3_copy2_ParamLimits

0x7e83,	// (0x000172ba) eswt_control_pane_g3_copy2

0x7e90,	// (0x000172c7) eswt_control_pane_g4_copy2_ParamLimits

0x7e90,	// (0x000172c7) eswt_control_pane_g4_copy2

0x1db0,	// (0x000111e7) common_borders_pane_cp4

0x7ef6,	// (0x0001732d) separator_horizontal_pane_g1

0x7eff,	// (0x00017336) separator_horizontal_pane_g2

0x7f08,	// (0x0001733f) separator_horizontal_pane_g3

0x0002,

0xfc1f,	// (0x0001f056) separator_horizontal_pane_g

0x7e69,	// (0x000172a0) eswt_control_pane_g1_copy3_ParamLimits

0x7e69,	// (0x000172a0) eswt_control_pane_g1_copy3

0x7e76,	// (0x000172ad) eswt_control_pane_g2_copy3_ParamLimits

0x7e76,	// (0x000172ad) eswt_control_pane_g2_copy3

0x7e83,	// (0x000172ba) eswt_control_pane_g3_copy3_ParamLimits

0x7e83,	// (0x000172ba) eswt_control_pane_g3_copy3

0x7e90,	// (0x000172c7) eswt_control_pane_g4_copy3_ParamLimits

0x7e90,	// (0x000172c7) eswt_control_pane_g4_copy3

0x1db0,	// (0x000111e7) common_borders_pane_cp5

0x7f11,	// (0x00017348) separator_vertical_pane_g1

0x7f1a,	// (0x00017351) separator_vertical_pane_g2

0x7f23,	// (0x0001735a) separator_vertical_pane_g3

0x0002,

0xfc26,	// (0x0001f05d) separator_vertical_pane_g

0x7e69,	// (0x000172a0) eswt_control_pane_g1_copy4_ParamLimits

0x7e69,	// (0x000172a0) eswt_control_pane_g1_copy4

0x7e76,	// (0x000172ad) eswt_control_pane_g2_copy4_ParamLimits

0x7e76,	// (0x000172ad) eswt_control_pane_g2_copy4

0x7e83,	// (0x000172ba) eswt_control_pane_g3_copy4_ParamLimits

0x7e83,	// (0x000172ba) eswt_control_pane_g3_copy4

0x7e90,	// (0x000172c7) eswt_control_pane_g4_copy4_ParamLimits

0x7e90,	// (0x000172c7) eswt_control_pane_g4_copy4

0xdf0e,	// (0x0001d345) eswt_ctrl_combo_button_pane

0xdf16,	// (0x0001d34d) eswt_ctrl_input_pane

0xdf1e,	// (0x0001d355) popup_choice_list_window_cp70

0xdf26,	// (0x0001d35d) eswt_ctrl_input_pane_t1

0x1db0,	// (0x000111e7) input_focus_pane_cp70

0x72dd,	// (0x00016714) bg_button_pane_cp70_ParamLimits

0x72dd,	// (0x00016714) bg_button_pane_cp70

0xdf34,	// (0x0001d36b) eswt_ctrl_combo_button_pane_g1

0x7f5a,	// (0x00017391) wait_bar_pane_cp70

0x4a56,	// (0x00013e8d) bg_popup_window_pane_cp70_ParamLimits

0x4a56,	// (0x00013e8d) bg_popup_window_pane_cp70

0x7f62,	// (0x00017399) popup_eswt_tasktip_window_t1

0x7f78,	// (0x000173af) wait_bar_pane_cp71_ParamLimits

0x7f78,	// (0x000173af) wait_bar_pane_cp71

0x7f84,	// (0x000173bb) grid_eswt_app_pane

0x32a0,	// (0x000126d7) scroll_pane_cp70

0xdf3c,	// (0x0001d373) cell_eswt_app_pane_ParamLimits

0xdf3c,	// (0x0001d373) cell_eswt_app_pane

0xdf66,	// (0x0001d39d) cell_eswt_app_pane_g1_ParamLimits

0xdf66,	// (0x0001d39d) cell_eswt_app_pane_g1

0xdf95,	// (0x0001d3cc) cell_eswt_app_pane_g2_ParamLimits

0xdf95,	// (0x0001d3cc) cell_eswt_app_pane_g2

0x0001,

0xfc2d,	// (0x0001f064) cell_eswt_app_pane_g_ParamLimits

0xfc2d,	// (0x0001f064) cell_eswt_app_pane_g

0xdfbe,	// (0x0001d3f5) cell_eswt_app_pane_t1_ParamLimits

0xdfbe,	// (0x0001d3f5) cell_eswt_app_pane_t1

0x8047,	// (0x0001747e) grid_highlight_pane_cp70_ParamLimits

0x8047,	// (0x0001747e) grid_highlight_pane_cp70

0x39af,	// (0x00012de6) set_content_pane_g1

0x3d86,	// (0x000131bd) status_small_volume_pane

0x1466,	// (0x0001089d) status_small_volume_pane_g1

0x146e,	// (0x000108a5) volume_small2_pane

0x1477,	// (0x000108ae) volume_small2_pane_g1

0x1480,	// (0x000108b7) volume_small2_pane_g2

0x1489,	// (0x000108c0) volume_small2_pane_g3

0x1492,	// (0x000108c9) volume_small2_pane_g4

0x149b,	// (0x000108d2) volume_small2_pane_g5

0x14a4,	// (0x000108db) volume_small2_pane_g6

0x14ad,	// (0x000108e4) volume_small2_pane_g7

0x14b6,	// (0x000108ed) volume_small2_pane_g8

0x14bf,	// (0x000108f6) volume_small2_pane_g9

0x14c8,	// (0x000108ff) volume_small2_pane_g10

0x0009,

0xfc32,	// (0x0001f069) volume_small2_pane_g

0x76f2,	// (0x00016b29) fep_vkb_top_text_pane_g1_ParamLimits

0xde65,	// (0x0001d29c) fep_vkb_top_text_pane_t1_ParamLimits

0x7967,	// (0x00016d9e) popup_preview_fixed_window_g3_ParamLimits

0x7967,	// (0x00016d9e) popup_preview_fixed_window_g3

0xd0e1,	// (0x0001c518) popup_toolbar_trans_pane

0xd7e0,	// (0x0001cc17) aid_height_set_list_ParamLimits

0x5e0f,	// (0x00015246) aid_size_parent_ParamLimits

0x3e64,	// (0x0001329b) list_highlight_pane_cp2_ParamLimits

0x39af,	// (0x00012de6) set_content_pane_g1_ParamLimits

0xd9a8,	// (0x0001cddf) list_single_image_pane_ParamLimits

0xd9a8,	// (0x0001cddf) list_single_image_pane

0x8053,	// (0x0001748a) aid_size_cell_image_ParamLimits

0x8053,	// (0x0001748a) aid_size_cell_image

0xdff0,	// (0x0001d427) grid_single_image_pane_ParamLimits

0xdff0,	// (0x0001d427) grid_single_image_pane

0x28ee,	// (0x00011d25) list_single_image_pane_g1_ParamLimits

0x28ee,	// (0x00011d25) list_single_image_pane_g1

0x7994,	// (0x00016dcb) list_single_image_pane_g2_ParamLimits

0x7994,	// (0x00016dcb) list_single_image_pane_g2

0x0001,

0xfc47,	// (0x0001f07e) list_single_image_pane_g_ParamLimits

0xfc47,	// (0x0001f07e) list_single_image_pane_g

0x2825,	// (0x00011c5c) list_single_image_pane_t1_ParamLimits

0x2825,	// (0x00011c5c) list_single_image_pane_t1

0xdffe,	// (0x0001d435) cell_image_list_pane_ParamLimits

0xdffe,	// (0x0001d435) cell_image_list_pane

0x8081,	// (0x000174b8) cell_image_list_pane_g1

0x808a,	// (0x000174c1) cell_image_list_pane_g2

0x0001,

0xfc4c,	// (0x0001f083) cell_image_list_pane_g

0x8093,	// (0x000174ca) aid_size_cell_tb_trans_pane

0x2c8b,	// (0x000120c2) bg_tb_trans_pane

0x80a5,	// (0x000174dc) grid_tb_trans_pane

0x493c,	// (0x00013d73) bg_tb_trans_pane_g1

0x494c,	// (0x00013d83) bg_tb_trans_pane_g2

0x4944,	// (0x00013d7b) bg_tb_trans_pane_g3

0x495c,	// (0x00013d93) bg_tb_trans_pane_g4

0x4954,	// (0x00013d8b) bg_tb_trans_pane_g5

0x497c,	// (0x00013db3) bg_tb_trans_pane_g6

0x4974,	// (0x00013dab) bg_tb_trans_pane_g7

0x4964,	// (0x00013d9b) bg_tb_trans_pane_g8

0x496c,	// (0x00013da3) bg_tb_trans_pane_g9

0x0008,

0xfc51,	// (0x0001f088) bg_tb_trans_pane_g

0x80b9,	// (0x000174f0) cell_toolbar_trans_pane_ParamLimits

0x80b9,	// (0x000174f0) cell_toolbar_trans_pane

0x7318,	// (0x0001674f) cell_toolbar_trans_pane_g1

0xdc08,	// (0x0001d03f) list_form2_midp_pane_t1

0xdc16,	// (0x0001d04d) list_form2_midp_pane_t2

0x0001,

0xfaee,	// (0x0001ef25) list_form2_midp_pane_t

0x6eae,	// (0x000162e5) scroll_pane_cp51_ParamLimits

0x70b9,	// (0x000164f0) form2_midp_wait_pane_g1

0x70c2,	// (0x000164f9) form2_midp_wait_pane_g2

0x70cb,	// (0x00016502) form2_midp_wait_pane_g3

0x0002,

0xfb03,	// (0x0001ef3a) form2_midp_wait_pane_g

0x1ea4,	// (0x000112db) list_highlight_pane_cp21_ParamLimits

0x7122,	// (0x00016559) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7131,	// (0x00016568) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6015,	// (0x0001544c) list_single_2graphic_im_pane_ParamLimits

0x6015,	// (0x0001544c) list_single_2graphic_im_pane

0xe014,	// (0x0001d44b) list_single_2graphic_im_pane_g1_ParamLimits

0xe014,	// (0x0001d44b) list_single_2graphic_im_pane_g1

0xe025,	// (0x0001d45c) list_single_2graphic_im_pane_g2_ParamLimits

0xe025,	// (0x0001d45c) list_single_2graphic_im_pane_g2

0xe031,	// (0x0001d468) list_single_2graphic_im_pane_g3_ParamLimits

0xe031,	// (0x0001d468) list_single_2graphic_im_pane_g3

0x0003,

0xfc64,	// (0x0001f09b) list_single_2graphic_im_pane_g_ParamLimits

0xfc64,	// (0x0001f09b) list_single_2graphic_im_pane_g

0xe045,	// (0x0001d47c) list_single_2graphic_im_pane_t1_ParamLimits

0xe045,	// (0x0001d47c) list_single_2graphic_im_pane_t1

0x7973,	// (0x00016daa) list_single_graphic_2heading_pane_fp_ParamLimits

0x7973,	// (0x00016daa) list_single_graphic_2heading_pane_fp

0x79cb,	// (0x00016e02) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x79cb,	// (0x00016e02) list_single_graphic_2heading_pane_fp_g1

0x7988,	// (0x00016dbf) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7988,	// (0x00016dbf) list_single_graphic_2heading_pane_fp_g2

0x28ee,	// (0x00011d25) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x28ee,	// (0x00011d25) list_single_graphic_2heading_pane_fp_g3

0x7994,	// (0x00016dcb) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7994,	// (0x00016dcb) list_single_graphic_2heading_pane_fp_g4

0x79a8,	// (0x00016ddf) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x79a8,	// (0x00016ddf) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x0001efc2) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x0001efc2) list_single_graphic_2heading_pane_fp_g

0x814d,	// (0x00017584) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x814d,	// (0x00017584) list_single_graphic_2heading_pane_fp_t1

0x7a03,	// (0x00016e3a) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7a03,	// (0x00016e3a) list_single_graphic_2heading_pane_fp_t2

0x8163,	// (0x0001759a) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x8163,	// (0x0001759a) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6d,	// (0x0001f0a4) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6d,	// (0x0001f0a4) list_single_graphic_2heading_pane_fp_t

0x73b8,	// (0x000167ef) fep_hwr_write_pane_g5_ParamLimits

0x73b8,	// (0x000167ef) fep_hwr_write_pane_g5

0x73c4,	// (0x000167fb) fep_hwr_write_pane_g6_ParamLimits

0x73c4,	// (0x000167fb) fep_hwr_write_pane_g6

0x7e38,	// (0x0001726f) eswt_shell_pane_ParamLimits

0x4a56,	// (0x00013e8d) bg_popup_window_pane_cp18_ParamLimits

0x5d2f,	// (0x00015166) heading_pane_cp70

0x7f62,	// (0x00017399) popup_eswt_tasktip_window_t1_ParamLimits

0xd1a2,	// (0x0001c5d9) aid_touch_tab_arrow_left

0xd1b8,	// (0x0001c5ef) aid_touch_tab_arrow_right

0xbdd3,	// (0x0001b20a) title_pane_g3_ParamLimits

0xbdd3,	// (0x0001b20a) title_pane_g3

0x2b6a,	// (0x00011fa1) set_value_pane_g1

0xd0e1,	// (0x0001c518) popup_toolbar_trans_pane_ParamLimits

0x8093,	// (0x000174ca) aid_size_cell_tb_trans_pane_ParamLimits

0x2c8b,	// (0x000120c2) bg_tb_trans_pane_ParamLimits

0x80a5,	// (0x000174dc) grid_tb_trans_pane_ParamLimits

0x2147,	// (0x0001157e) cont_note_pane_ParamLimits

0x2147,	// (0x0001157e) cont_note_pane

0x249b,	// (0x000118d2) cont_snote2_single_text_pane_ParamLimits

0x249b,	// (0x000118d2) cont_snote2_single_text_pane

0x249b,	// (0x000118d2) cont_snote2_single_graphic_pane_ParamLimits

0x249b,	// (0x000118d2) cont_snote2_single_graphic_pane

0x5071,	// (0x000144a8) cont_note_wait_pane_ParamLimits

0x5071,	// (0x000144a8) cont_note_wait_pane

0x5071,	// (0x000144a8) cont_note_image_pane_ParamLimits

0x5071,	// (0x000144a8) cont_note_image_pane

0x8179,	// (0x000175b0) popup_note2_window_g1_ParamLimits

0x8179,	// (0x000175b0) popup_note2_window_g1

0x81aa,	// (0x000175e1) popup_note2_window_t1_ParamLimits

0x81aa,	// (0x000175e1) popup_note2_window_t1

0x81ef,	// (0x00017626) popup_note2_window_t2_ParamLimits

0x81ef,	// (0x00017626) popup_note2_window_t2

0x8234,	// (0x0001766b) popup_note2_window_t3_ParamLimits

0x8234,	// (0x0001766b) popup_note2_window_t3

0x8279,	// (0x000176b0) popup_note2_window_t4_ParamLimits

0x8279,	// (0x000176b0) popup_note2_window_t4

0x21cb,	// (0x00011602) popup_note2_window_t5_ParamLimits

0x21cb,	// (0x00011602) popup_note2_window_t5

0x0004,

0xfc79,	// (0x0001f0b0) popup_note2_window_t_ParamLimits

0xfc79,	// (0x0001f0b0) popup_note2_window_t

0x82a8,	// (0x000176df) popup_note2_image_window_g1_ParamLimits

0x82a8,	// (0x000176df) popup_note2_image_window_g1

0x82b4,	// (0x000176eb) popup_note2_image_window_g2_ParamLimits

0x82b4,	// (0x000176eb) popup_note2_image_window_g2

0x0001,

0xfc84,	// (0x0001f0bb) popup_note2_image_window_g_ParamLimits

0xfc84,	// (0x0001f0bb) popup_note2_image_window_g

0x82c6,	// (0x000176fd) popup_note2_image_window_t1_ParamLimits

0x82c6,	// (0x000176fd) popup_note2_image_window_t1

0x82de,	// (0x00017715) popup_note2_image_window_t2_ParamLimits

0x82de,	// (0x00017715) popup_note2_image_window_t2

0x82f6,	// (0x0001772d) popup_note2_image_window_t3_ParamLimits

0x82f6,	// (0x0001772d) popup_note2_image_window_t3

0x0002,

0xfc89,	// (0x0001f0c0) popup_note2_image_window_t_ParamLimits

0xfc89,	// (0x0001f0c0) popup_note2_image_window_t

0x507f,	// (0x000144b6) popup_note2_wait_window_g1_ParamLimits

0x507f,	// (0x000144b6) popup_note2_wait_window_g1

0x8312,	// (0x00017749) popup_note2_wait_window_g2_ParamLimits

0x8312,	// (0x00017749) popup_note2_wait_window_g2

0x5097,	// (0x000144ce) popup_note2_wait_window_g3_ParamLimits

0x5097,	// (0x000144ce) popup_note2_wait_window_g3

0x0002,

0xfc90,	// (0x0001f0c7) popup_note2_wait_window_g_ParamLimits

0xfc90,	// (0x0001f0c7) popup_note2_wait_window_g

0x831e,	// (0x00017755) popup_note2_wait_window_t1_ParamLimits

0x831e,	// (0x00017755) popup_note2_wait_window_t1

0x833c,	// (0x00017773) popup_note2_wait_window_t2_ParamLimits

0x833c,	// (0x00017773) popup_note2_wait_window_t2

0x835a,	// (0x00017791) popup_note2_wait_window_t3_ParamLimits

0x835a,	// (0x00017791) popup_note2_wait_window_t3

0x836c,	// (0x000177a3) popup_note2_wait_window_t4_ParamLimits

0x836c,	// (0x000177a3) popup_note2_wait_window_t4

0x0003,

0xfc97,	// (0x0001f0ce) popup_note2_wait_window_t_ParamLimits

0xfc97,	// (0x0001f0ce) popup_note2_wait_window_t

0x837e,	// (0x000177b5) wait_bar2_pane_ParamLimits

0x837e,	// (0x000177b5) wait_bar2_pane

0x8396,	// (0x000177cd) popup_snote2_single_text_window_g1_ParamLimits

0x8396,	// (0x000177cd) popup_snote2_single_text_window_g1

0x83be,	// (0x000177f5) popup_snote2_single_text_window_t1_ParamLimits

0x83be,	// (0x000177f5) popup_snote2_single_text_window_t1

0x840a,	// (0x00017841) popup_snote2_single_text_window_t2_ParamLimits

0x840a,	// (0x00017841) popup_snote2_single_text_window_t2

0x8456,	// (0x0001788d) popup_snote2_single_text_window_t3_ParamLimits

0x8456,	// (0x0001788d) popup_snote2_single_text_window_t3

0x8497,	// (0x000178ce) popup_snote2_single_text_window_t4_ParamLimits

0x8497,	// (0x000178ce) popup_snote2_single_text_window_t4

0x84cd,	// (0x00017904) popup_snote2_single_text_window_t5_ParamLimits

0x84cd,	// (0x00017904) popup_snote2_single_text_window_t5

0x0004,

0xfca0,	// (0x0001f0d7) popup_snote2_single_text_window_t_ParamLimits

0xfca0,	// (0x0001f0d7) popup_snote2_single_text_window_t

0x84f8,	// (0x0001792f) popup_snote2_single_graphic_window_g1_ParamLimits

0x84f8,	// (0x0001792f) popup_snote2_single_graphic_window_g1

0x8520,	// (0x00017957) popup_snote2_single_graphic_window_g2_ParamLimits

0x8520,	// (0x00017957) popup_snote2_single_graphic_window_g2

0x0001,

0xfcab,	// (0x0001f0e2) popup_snote2_single_graphic_window_g_ParamLimits

0xfcab,	// (0x0001f0e2) popup_snote2_single_graphic_window_g

0x8548,	// (0x0001797f) popup_snote2_single_graphic_window_t1_ParamLimits

0x8548,	// (0x0001797f) popup_snote2_single_graphic_window_t1

0x8594,	// (0x000179cb) popup_snote2_single_graphic_window_t2_ParamLimits

0x8594,	// (0x000179cb) popup_snote2_single_graphic_window_t2

0x8456,	// (0x0001788d) popup_snote2_single_graphic_window_t3_ParamLimits

0x8456,	// (0x0001788d) popup_snote2_single_graphic_window_t3

0x8497,	// (0x000178ce) popup_snote2_single_graphic_window_t4_ParamLimits

0x8497,	// (0x000178ce) popup_snote2_single_graphic_window_t4

0x84cd,	// (0x00017904) popup_snote2_single_graphic_window_t5_ParamLimits

0x84cd,	// (0x00017904) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb0,	// (0x0001f0e7) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb0,	// (0x0001f0e7) popup_snote2_single_graphic_window_t

0x6d6b,	// (0x000161a2) clock_nsta_pane_cp2_t1

0x6d6b,	// (0x000161a2) clock_nsta_pane_cp2_t2

0x0001,

0xfac4,	// (0x0001eefb) clock_nsta_pane_cp2_t

0x2ca5,	// (0x000120dc) form_field_data_wide_pane_g1_ParamLimits

0x2cb1,	// (0x000120e8) form_field_data_wide_pane_g2_ParamLimits

0x2cb1,	// (0x000120e8) form_field_data_wide_pane_g2

0x2cbd,	// (0x000120f4) form_field_data_wide_pane_g3_ParamLimits

0x2cbd,	// (0x000120f4) form_field_data_wide_pane_g3

0x0002,

0xf692,	// (0x0001eac9) form_field_data_wide_pane_g_ParamLimits

0xf692,	// (0x0001eac9) form_field_data_wide_pane_g

0xdb22,	// (0x0001cf59) grid_touch_3_pane_ParamLimits

0xdb22,	// (0x0001cf59) grid_touch_3_pane

0xe076,	// (0x0001d4ad) cell_touch_3_pane_ParamLimits

0xe076,	// (0x0001d4ad) cell_touch_3_pane

0x7318,	// (0x0001674f) cell_touch_3_pane_g1

0x7318,	// (0x0001674f) cell_touch_3_pane_g2

0x0001,

0xfb49,	// (0x0001ef80) cell_touch_3_pane_g

0x21fd,	// (0x00011634) cont_query_data_pane

0x2205,	// (0x0001163c) cont_query_data_pane_cp1

0x860e,	// (0x00017a45) button_value_adjust_pane_cp7

0x8616,	// (0x00017a4d) query_popup_pane_cp3

0x3533,	// (0x0001296a) bg_popup_sub_pane_cp22_ParamLimits

0x0832,	// (0x0000fc69) navi_navi_volume_pane_cp2

0x084d,	// (0x0000fc84) popup_side_volume_key_window_g2

0x085c,	// (0x0000fc93) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x0001eb5b) popup_side_volume_key_window_g

0x0879,	// (0x0000fcb0) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x0001eb62) popup_side_volume_key_window_t

0x3879,	// (0x00012cb0) popup_side_volume_key_window_ParamLimits

0xc293,	// (0x0001b6ca) list_double_graphic_pane_g4_ParamLimits

0xc293,	// (0x0001b6ca) list_double_graphic_pane_g4

0xd984,	// (0x0001cdbb) list_single_2heading_msg_pane_ParamLimits

0xd984,	// (0x0001cdbb) list_single_2heading_msg_pane

0xe0bf,	// (0x0001d4f6) list_single_2heading_msg_pane_g1_ParamLimits

0xe0bf,	// (0x0001d4f6) list_single_2heading_msg_pane_g1

0xe0cb,	// (0x0001d502) list_single_2heading_msg_pane_g2_ParamLimits

0xe0cb,	// (0x0001d502) list_single_2heading_msg_pane_g2

0xe0de,	// (0x0001d515) list_single_2heading_msg_pane_g3_ParamLimits

0xe0de,	// (0x0001d515) list_single_2heading_msg_pane_g3

0xe0ea,	// (0x0001d521) list_single_2heading_msg_pane_g4_ParamLimits

0xe0ea,	// (0x0001d521) list_single_2heading_msg_pane_g4

0x0003,

0xfcbb,	// (0x0001f0f2) list_single_2heading_msg_pane_g_ParamLimits

0xfcbb,	// (0x0001f0f2) list_single_2heading_msg_pane_g

0xe102,	// (0x0001d539) list_single_2heading_msg_pane_t1_ParamLimits

0xe102,	// (0x0001d539) list_single_2heading_msg_pane_t1

0xe12a,	// (0x0001d561) list_single_2heading_msg_pane_t2_ParamLimits

0xe12a,	// (0x0001d561) list_single_2heading_msg_pane_t2

0xe195,	// (0x0001d5cc) list_single_2heading_msg_pane_t3_ParamLimits

0xe195,	// (0x0001d5cc) list_single_2heading_msg_pane_t3

0x8705,	// (0x00017b3c) list_single_2heading_msg_pane_t4_ParamLimits

0x8705,	// (0x00017b3c) list_single_2heading_msg_pane_t4

0x0003,

0xfcc4,	// (0x0001f0fb) list_single_2heading_msg_pane_t_ParamLimits

0xfcc4,	// (0x0001f0fb) list_single_2heading_msg_pane_t

0x1df8,	// (0x0001122f) title_pane_g4_ParamLimits

0x1df8,	// (0x0001122f) title_pane_g4

0x0640,	// (0x0000fa77) title_pane_stacon_g3_ParamLimits

0x0640,	// (0x0000fa77) title_pane_stacon_g3

0x8110,	// (0x00017547) list_single_2graphic_im_pane_g4_ParamLimits

0x8110,	// (0x00017547) list_single_2graphic_im_pane_g4

0x5ad6,	// (0x00014f0d) popup_side_volume_key_window_cp

0x63d2,	// (0x00015809) main_idle_act2_pane_t1

0x0c6a,	// (0x000100a1) toolbar_button_pane_g10

0xc140,	// (0x0001b577) popup_toolbar_window_cp1

0x6d5c,	// (0x00016193) clock_nsta_pane_cp_t1

0x6d5c,	// (0x00016193) clock_nsta_pane_cp_t2

0x0001,

0xfabf,	// (0x0001eef6) clock_nsta_pane_cp_t

0x0832,	// (0x0000fc69) navi_navi_volume_pane_cp2_ParamLimits

0x0841,	// (0x0000fc78) popup_side_volume_key_window_g1_ParamLimits

0x084d,	// (0x0000fc84) popup_side_volume_key_window_g2_ParamLimits

0x085c,	// (0x0000fc93) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x0001eb5b) popup_side_volume_key_window_g_ParamLimits

0x10d2,	// (0x00010509) fep_hwr_aid_pane

0x1179,	// (0x000105b0) bg_fep_hwr_top_pane_g4_ParamLimits

0x7388,	// (0x000167bf) fep_hwr_top_pane_g1_ParamLimits

0x739a,	// (0x000167d1) fep_hwr_top_pane_g2_ParamLimits

0x1199,	// (0x000105d0) fep_hwr_top_pane_g3_ParamLimits

0xfb14,	// (0x0001ef4b) fep_hwr_top_pane_g_ParamLimits

0x11ae,	// (0x000105e5) fep_hwr_top_text_pane_ParamLimits

0x5899,	// (0x00014cd0) aid_touch_tab_arrow_arrow_2

0x58a2,	// (0x00014cd9) aid_touch_tab_arrow_left_2

0x10e6,	// (0x0001051d) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x111d,	// (0x00010554) fep_hwr_prediction_pane

0x74fa,	// (0x00016931) fep_vkb_prediction_pane

0xde45,	// (0x0001d27c) fep_vkb_side_pane_g3_ParamLimits

0xde45,	// (0x0001d27c) fep_vkb_side_pane_g3

0x1329,	// (0x00010760) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1395,	// (0x000107cc) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x13a2,	// (0x000107d9) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc3,	// (0x0001effa) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x14d1,	// (0x00010908) fep_hwr_prediction_pane_g1

0x14db,	// (0x00010912) fep_hwr_prediction_pane_g2

0x14e3,	// (0x0001091a) fep_hwr_prediction_pane_g3

0x14eb,	// (0x00010922) fep_hwr_prediction_pane_g4

0x0003,

0xfccd,	// (0x0001f104) fep_hwr_prediction_pane_g

0x872a,	// (0x00017b61) fep_vkb_prediction_pane_g1

0x8734,	// (0x00017b6b) fep_vkb_prediction_pane_g2

0x873c,	// (0x00017b73) fep_vkb_prediction_pane_g3

0x8744,	// (0x00017b7b) fep_vkb_prediction_pane_g4

0x0003,

0xfcd6,	// (0x0001f10d) fep_vkb_prediction_pane_g

0x0f52,	// (0x00010389) slider_set_pane_g3

0x0f66,	// (0x0001039d) slider_set_pane_g4

0x0f7e,	// (0x000103b5) slider_set_pane_g5

0x0f52,	// (0x00010389) slider_set_pane_g6

0x0f94,	// (0x000103cb) slider_set_pane_g7

0x5f74,	// (0x000153ab) slider_form_pane_g3

0x5f7d,	// (0x000153b4) slider_form_pane_g4

0x5f85,	// (0x000153bc) slider_form_pane_g5

0x5f74,	// (0x000153ab) slider_form_pane_g6

0xd92b,	// (0x0001cd62) slider_form_pane_g7

0x66af,	// (0x00015ae6) slider_set_pane_vc_g3

0x66b8,	// (0x00015aef) slider_set_pane_vc_g4

0x66c1,	// (0x00015af8) slider_set_pane_vc_g5

0x66af,	// (0x00015ae6) slider_set_pane_vc_g6

0x66ca,	// (0x00015b01) slider_set_pane_vc_g7

0x66af,	// (0x00015ae6) slider_form_pane_vc_g1

0x66b8,	// (0x00015aef) slider_form_pane_vc_g2

0x66c1,	// (0x00015af8) slider_form_pane_vc_g3

0x66af,	// (0x00015ae6) slider_form_pane_vc_g4

0x6a62,	// (0x00015e99) slider_form_pane_vc_g5

0x0004,

0xfa98,	// (0x0001eecf) slider_form_pane_vc_g

0x1db0,	// (0x000111e7) main_idle_act3_pane

0x874c,	// (0x00017b83) ai3_links_pane

0xe203,	// (0x0001d63a) popup_ai3_data_window_ParamLimits

0xe203,	// (0x0001d63a) popup_ai3_data_window

0x1db0,	// (0x000111e7) grid_ai3_links_pane

0xe21d,	// (0x0001d654) cell_ai3_links_pane_ParamLimits

0xe21d,	// (0x0001d654) cell_ai3_links_pane

0x8787,	// (0x00017bbe) bg_popup_sub_pane_cp11

0x8794,	// (0x00017bcb) cell_ai3_links_pane_g1

0x1db0,	// (0x000111e7) bg_popup_sub_pane_cp12

0x87b9,	// (0x00017bf0) heading_ai3_data_pane

0x87c1,	// (0x00017bf8) list_ai3_gene_pane

0x87cd,	// (0x00017c04) popup_ai3_data_window_g1

0x87d5,	// (0x00017c0c) heading_ai3_data_pane_g1

0x87dd,	// (0x00017c14) heading_ai3_data_pane_t1

0x87eb,	// (0x00017c22) list_double_ai3_gene_pane_ParamLimits

0x87eb,	// (0x00017c22) list_double_ai3_gene_pane

0x87f8,	// (0x00017c2f) list_single_ai3_gene_pane_ParamLimits

0x87f8,	// (0x00017c2f) list_single_ai3_gene_pane

0x72dd,	// (0x00016714) list_highlight_pane_cp7_ParamLimits

0x72dd,	// (0x00016714) list_highlight_pane_cp7

0x8805,	// (0x00017c3c) list_single_a13_gene_pane_t1_ParamLimits

0x8805,	// (0x00017c3c) list_single_a13_gene_pane_t1

0x881c,	// (0x00017c53) list_single_ai3_gene_pane_g1

0x8825,	// (0x00017c5c) list_single_ai3_gene_pane_g2

0x0001,

0xfcdf,	// (0x0001f116) list_single_ai3_gene_pane_g

0x882d,	// (0x00017c64) list_double_ai3_gene_pane_g1_ParamLimits

0x882d,	// (0x00017c64) list_double_ai3_gene_pane_g1

0x8839,	// (0x00017c70) list_double_ai3_gene_pane_t1_ParamLimits

0x8839,	// (0x00017c70) list_double_ai3_gene_pane_t1

0x8855,	// (0x00017c8c) list_double_ai3_gene_pane_t2_ParamLimits

0x8855,	// (0x00017c8c) list_double_ai3_gene_pane_t2

0x886b,	// (0x00017ca2) list_double_ai3_gene_pane_t3_ParamLimits

0x886b,	// (0x00017ca2) list_double_ai3_gene_pane_t3

0x0002,

0xfce4,	// (0x0001f11b) list_double_ai3_gene_pane_t_ParamLimits

0xfce4,	// (0x0001f11b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x8627,	// (0x00017a5e) aid_size_min_col_2

0xe0a9,	// (0x0001d4e0) aid_size_min_msg_ParamLimits

0xe0a9,	// (0x0001d4e0) aid_size_min_msg

0xde59,	// (0x0001d290) fep_vkb_top_text_pane_g2_ParamLimits

0xde59,	// (0x0001d290) fep_vkb_top_text_pane_g2

0x0001,

0xfb44,	// (0x0001ef7b) fep_vkb_top_text_pane_g_ParamLimits

0xfb44,	// (0x0001ef7b) fep_vkb_top_text_pane_g

0x1db0,	// (0x000111e7) main_hc_apps_shell_pane

0x8888,	// (0x00017cbf) grid_hc_apps_pane_ParamLimits

0x8888,	// (0x00017cbf) grid_hc_apps_pane

0x8897,	// (0x00017cce) list_hc_apps_pane

0x889f,	// (0x00017cd6) scroll_pane_cp37_ParamLimits

0x889f,	// (0x00017cd6) scroll_pane_cp37

0xe237,	// (0x0001d66e) cell_hc_apps_pane_ParamLimits

0xe237,	// (0x0001d66e) cell_hc_apps_pane

0xe2f5,	// (0x0001d72c) cell_hc_apps_pane_g1_ParamLimits

0xe2f5,	// (0x0001d72c) cell_hc_apps_pane_g1

0x898a,	// (0x00017dc1) cell_hc_apps_pane_g2_ParamLimits

0x898a,	// (0x00017dc1) cell_hc_apps_pane_g2

0x89a6,	// (0x00017ddd) cell_hc_apps_pane_g3_ParamLimits

0x89a6,	// (0x00017ddd) cell_hc_apps_pane_g3

0x0002,

0xfceb,	// (0x0001f122) cell_hc_apps_pane_g_ParamLimits

0xfceb,	// (0x0001f122) cell_hc_apps_pane_g

0xe322,	// (0x0001d759) cell_hc_apps_pane_t1_ParamLimits

0xe322,	// (0x0001d759) cell_hc_apps_pane_t1

0x2147,	// (0x0001157e) grid_highlight_pane_cp10_ParamLimits

0x2147,	// (0x0001157e) grid_highlight_pane_cp10

0xe360,	// (0x0001d797) list_single_hc_apps_pane_ParamLimits

0xe360,	// (0x0001d797) list_single_hc_apps_pane

0xe38d,	// (0x0001d7c4) list_single_hc_apps_pane_g1

0xe3a6,	// (0x0001d7dd) list_single_hc_apps_pane_g2

0x0001,

0xfcf2,	// (0x0001f129) list_single_hc_apps_pane_g

0xe3bf,	// (0x0001d7f6) list_single_hc_apps_pane_g2_copy1

0x8ab2,	// (0x00017ee9) list_single_hc_apps_pane_t1

0x1ea4,	// (0x000112db) bg_set_opt_pane_cp_ParamLimits

0x0567,	// (0x0000f99e) setting_slider_pane_t1_ParamLimits

0x0580,	// (0x0000f9b7) setting_slider_pane_t2_ParamLimits

0x059a,	// (0x0000f9d1) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0001e9b1) setting_slider_pane_t_ParamLimits

0x05b2,	// (0x0000f9e9) slider_set_pane_ParamLimits

0x0ada,	// (0x0000ff11) control_pane_g5_ParamLimits

0x0ada,	// (0x0000ff11) control_pane_g5

0x5dc3,	// (0x000151fa) slider_set_pane_g1_ParamLimits

0x0f46,	// (0x0001037d) slider_set_pane_g2_ParamLimits

0x0f52,	// (0x00010389) slider_set_pane_g3_ParamLimits

0x0f66,	// (0x0001039d) slider_set_pane_g4_ParamLimits

0x0f7e,	// (0x000103b5) slider_set_pane_g5_ParamLimits

0x0f52,	// (0x00010389) slider_set_pane_g6_ParamLimits

0x0f94,	// (0x000103cb) slider_set_pane_g7_ParamLimits

0xf96b,	// (0x0001eda2) slider_set_pane_g_ParamLimits

0x395a,	// (0x00012d91) navi_icon_text_pane_ParamLimits

0xd16e,	// (0x0001c5a5) aid_fill_nsta_2_ParamLimits

0xd1a2,	// (0x0001c5d9) aid_touch_tab_arrow_left_ParamLimits

0xd1b8,	// (0x0001c5ef) aid_touch_tab_arrow_right_ParamLimits

0xd253,	// (0x0001c68a) clock_nsta_pane_ParamLimits

0xd6f5,	// (0x0001cb2c) navi_icon_pane_g1_ParamLimits

0xd701,	// (0x0001cb38) navi_text_pane_t1_ParamLimits

0xdbea,	// (0x0001d021) navi_icon_text_pane_g1_ParamLimits

0xdbf6,	// (0x0001d02d) navi_icon_text_pane_t1_ParamLimits

0xe38d,	// (0x0001d7c4) list_single_hc_apps_pane_g1_ParamLimits

0xe3a6,	// (0x0001d7dd) list_single_hc_apps_pane_g2_ParamLimits

0xfcf2,	// (0x0001f129) list_single_hc_apps_pane_g_ParamLimits

0xe3bf,	// (0x0001d7f6) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8ab2,	// (0x00017ee9) list_single_hc_apps_pane_t1_ParamLimits

0xb593,	// (0x0001a9ca) popup_toolbar2_fixed_window_ParamLimits

0xb593,	// (0x0001a9ca) popup_toolbar2_fixed_window

0xd0d7,	// (0x0001c50e) popup_toolbar2_float_window

0x1db0,	// (0x000111e7) bg_popup_sub_pane_cp27

0x8ae0,	// (0x00017f17) grid_toolbar2_float_pane

0x1db0,	// (0x000111e7) bg_popup_sub_pane_cp26

0x8ae0,	// (0x00017f17) grid_toolbar2_fixed_pane

0xe3db,	// (0x0001d812) cell_toolbar2_fixed_pane_ParamLimits

0xe3db,	// (0x0001d812) cell_toolbar2_fixed_pane

0xe3f6,	// (0x0001d82d) cell_toolbar2_fixed_pane_g1

0x8b01,	// (0x00017f38) toolbar2_fixed_button_pane

0x493c,	// (0x00013d73) toolbar2_fixed_button_pane_g1

0x494c,	// (0x00013d83) toolbar2_fixed_button_pane_g2

0x4944,	// (0x00013d7b) toolbar2_fixed_button_pane_g3

0x495c,	// (0x00013d93) toolbar2_fixed_button_pane_g4

0x4954,	// (0x00013d8b) toolbar2_fixed_button_pane_g5

0x4964,	// (0x00013d9b) toolbar2_fixed_button_pane_g6

0x496c,	// (0x00013da3) toolbar2_fixed_button_pane_g7

0x497c,	// (0x00013db3) toolbar2_fixed_button_pane_g8

0x4974,	// (0x00013dab) toolbar2_fixed_button_pane_g9

0x0008,

0xf86d,	// (0x0001eca4) toolbar2_fixed_button_pane_g

0x8b09,	// (0x00017f40) cell_toolbar2_float_pane_ParamLimits

0x8b09,	// (0x00017f40) cell_toolbar2_float_pane

0x8b1a,	// (0x00017f51) cell_toolbar2_float_pane_g1

0x8b01,	// (0x00017f38) toolbar2_fixed_button_pane_cp

0xdd33,	// (0x0001d16a) fep_vkb_accented_list_pane_ParamLimits

0xdd33,	// (0x0001d16a) fep_vkb_accented_list_pane

0x1309,	// (0x00010740) bg_popup_fep_shadow_pane_g9

0x3ada,	// (0x00012f11) bg_popup_fep_shadow_pane_cp3

0x2f69,	// (0x000123a0) list_accented_list_pane

0x8b23,	// (0x00017f5a) list_single_accented_list_pane_ParamLimits

0x8b23,	// (0x00017f5a) list_single_accented_list_pane

0x3ada,	// (0x00012f11) list_highlight_pane_cp10

0x8b34,	// (0x00017f6b) list_single_accented_list_pane_t1

0xd001,	// (0x0001c438) popup_slider_window_ParamLimits

0xd001,	// (0x0001c438) popup_slider_window

0x861e,	// (0x00017a55) aid_indentation_list_msg

0xe4ef,	// (0x0001d926) bg_popup_window_pane_cp19

0x8c58,	// (0x0001808f) popup_slider_window_g1

0x8c74,	// (0x000180ab) popup_slider_window_g2

0x8c90,	// (0x000180c7) popup_slider_window_g3

0x0005,

0xfcf7,	// (0x0001f12e) popup_slider_window_g

0x8cec,	// (0x00018123) popup_slider_window_t1

0x8d60,	// (0x00018197) small_volume_slider_vertical_pane

0x7318,	// (0x0001674f) small_volume_slider_vertical_pane_g1

0x7318,	// (0x0001674f) small_volume_slider_vertical_pane_g2

0x8d7c,	// (0x000181b3) small_volume_slider_vertical_pane_g3

0x0002,

0xfd09,	// (0x0001f140) small_volume_slider_vertical_pane_g

0xb501,	// (0x0001a938) area_side_right_pane_ParamLimits

0xb501,	// (0x0001a938) area_side_right_pane

0xb94f,	// (0x0001ad86) aid_size_side_button_ParamLimits

0xb94f,	// (0x0001ad86) aid_size_side_button

0xb968,	// (0x0001ad9f) grid_sctrl_middle_pane_ParamLimits

0xb968,	// (0x0001ad9f) grid_sctrl_middle_pane

0x1527,	// (0x0001095e) sctrl_sk_bottom_pane

0x1538,	// (0x0001096f) sctrl_sk_top_pane

0x154a,	// (0x00010981) aid_touch_sctrl_top

0x1557,	// (0x0001098e) bg_sctrl_sk_pane_ParamLimits

0x1557,	// (0x0001098e) bg_sctrl_sk_pane

0x1565,	// (0x0001099c) sctrl_sk_top_pane_g1

0x1572,	// (0x000109a9) sctrl_sk_top_pane_t1

0x154a,	// (0x00010981) aid_touch_sctrl_bottom

0x1557,	// (0x0001098e) bg_sctrl_sk_pane_cp_ParamLimits

0x1557,	// (0x0001098e) bg_sctrl_sk_pane_cp

0x158d,	// (0x000109c4) sctrl_sk_bottom_pane_g1

0x1572,	// (0x000109a9) sctrl_sk_bottom_pane_t1

0xb982,	// (0x0001adb9) cell_sctrl_middle_pane_ParamLimits

0xb982,	// (0x0001adb9) cell_sctrl_middle_pane

0xb993,	// (0x0001adca) aid_touch_sctrl_middle_ParamLimits

0xb993,	// (0x0001adca) aid_touch_sctrl_middle

0xb9a0,	// (0x0001add7) bg_sctrl_middle_pane_ParamLimits

0xb9a0,	// (0x0001add7) bg_sctrl_middle_pane

0x1bfd,	// (0x00011034) cell_sctrl_middle_pane_g1_ParamLimits

0x1bfd,	// (0x00011034) cell_sctrl_middle_pane_g1

0xb9ae,	// (0x0001ade5) cell_sctrl_middle_pane_g2_ParamLimits

0xb9ae,	// (0x0001ade5) cell_sctrl_middle_pane_g2

0x0001,

0xfd15,	// (0x0001f14c) cell_sctrl_middle_pane_g_ParamLimits

0xfd15,	// (0x0001f14c) cell_sctrl_middle_pane_g

0x493c,	// (0x00013d73) bg_sctrl_middle_pane_g1

0x4944,	// (0x00013d7b) bg_sctrl_middle_pane_g2

0x494c,	// (0x00013d83) bg_sctrl_middle_pane_g3

0x4954,	// (0x00013d8b) bg_sctrl_middle_pane_g4

0x495c,	// (0x00013d93) bg_sctrl_middle_pane_g5

0x4964,	// (0x00013d9b) bg_sctrl_middle_pane_g6

0x496c,	// (0x00013da3) bg_sctrl_middle_pane_g7

0x4974,	// (0x00013dab) bg_sctrl_middle_pane_g8

0x0007,

0xfd1a,	// (0x0001f151) bg_sctrl_middle_pane_g

0x497c,	// (0x00013db3) bg_sctrl_middle_pane_g8_copy1

0x493c,	// (0x00013d73) bg_sctrl_sk_pane_g1

0x494c,	// (0x00013d83) bg_sctrl_sk_pane_g2

0x4944,	// (0x00013d7b) bg_sctrl_sk_pane_g3

0x0008,

0xf86d,	// (0x0001eca4) bg_sctrl_sk_pane_g

0x2659,	// (0x00011a90) aid_size_touch_scroll_bar

0x495c,	// (0x00013d93) bg_sctrl_sk_pane_g4

0x4954,	// (0x00013d8b) bg_sctrl_sk_pane_g5

0x4964,	// (0x00013d9b) bg_sctrl_sk_pane_g6

0x496c,	// (0x00013da3) bg_sctrl_sk_pane_g7

0x497c,	// (0x00013db3) bg_sctrl_sk_pane_g8

0x4974,	// (0x00013dab) bg_sctrl_sk_pane_g9

0x3f0c,	// (0x00013343) popup_fep_china_hwr2_fs_candidate_window

0xcb45,	// (0x0001bf7c) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xcb45,	// (0x0001bf7c) popup_fep_china_hwr2_fs_control_window

0x1329,	// (0x00010760) sctrl_sk_top_pane_g2

0x0001,

0xfd10,	// (0x0001f147) sctrl_sk_top_pane_g

0xe5a7,	// (0x0001d9de) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe5a7,	// (0x0001d9de) aid_fep_china_hwr2_fs_cell

0xe5bb,	// (0x0001d9f2) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe5bb,	// (0x0001d9f2) bg_popup_fep_shadow_pane_cp4

0xe5d2,	// (0x0001da09) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe5d2,	// (0x0001da09) bg_popup_fep_shadow_pane_cp5

0xe5e4,	// (0x0001da1b) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe5e4,	// (0x0001da1b) popup_fep_china_hwr2_fs_control_bar_grid

0xe5f8,	// (0x0001da2f) popup_fep_china_hwr2_fs_control_funtion_grid

0x8dd8,	// (0x0001820f) aid_fep_china_hwr2_fs_candi_cell

0x1db0,	// (0x000111e7) bg_popup_fep_shadow_pane_cp6

0x8de2,	// (0x00018219) popup_fep_china_hwr2_fs_candidate_grid

0xe600,	// (0x0001da37) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe600,	// (0x0001da37) cell_fep_china_hwr2_fs_funtion_grid

0x7318,	// (0x0001674f) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8e04,	// (0x0001823b) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8e04,	// (0x0001823b) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8e12,	// (0x00018249) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8e12,	// (0x00018249) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2b,	// (0x0001f162) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2b,	// (0x0001f162) cell_fep_china_hwr2_fs_funtion_grid_g

0xe618,	// (0x0001da4f) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe618,	// (0x0001da4f) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe62d,	// (0x0001da64) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe62d,	// (0x0001da64) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd30,	// (0x0001f167) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd30,	// (0x0001f167) cell_fep_china_hwr2_fs_funtion_grid_t

0x8e59,	// (0x00018290) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8e61,	// (0x00018298) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8e69,	// (0x000182a0) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd35,	// (0x0001f16c) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8e71,	// (0x000182a8) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8e71,	// (0x000182a8) cell_fep_china_hwr2_fs_candidate_grid

0x8e8a,	// (0x000182c1) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8e92,	// (0x000182c9) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7318,	// (0x0001674f) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7318,	// (0x0001674f) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb49,	// (0x0001ef80) cell_fep_china_hwr2_fs_candidate_grid_g

0x8e9a,	// (0x000182d1) cell_fep_china_hwr2_fs_candidate_grid_t1

0x44ff,	// (0x00013936) clock_nsta_pane_cp_24_ParamLimits

0x44ff,	// (0x00013936) clock_nsta_pane_cp_24

0x457d,	// (0x000139b4) indicator_nsta_pane_cp_24_ParamLimits

0x457d,	// (0x000139b4) indicator_nsta_pane_cp_24

0x56f1,	// (0x00014b28) heading_pane_g1

0x0001,

0xf8d2,	// (0x0001ed09) heading_pane_g

0x621b,	// (0x00015652) grid_sct_catagory_button_pane

0x624b,	// (0x00015682) scroll_pane_cp5_ParamLimits

0x6eba,	// (0x000162f1) button_value_adjust_pane_cp5_ParamLimits

0x6eba,	// (0x000162f1) button_value_adjust_pane_cp5

0x6fb6,	// (0x000163ed) form2_midp_time_pane_ParamLimits

0x8ea8,	// (0x000182df) cell_sct_catagory_button_pane_ParamLimits

0x8ea8,	// (0x000182df) cell_sct_catagory_button_pane

0x72dd,	// (0x00016714) bg_button_pane_cp01_ParamLimits

0x72dd,	// (0x00016714) bg_button_pane_cp01

0x7318,	// (0x0001674f) cell_sct_catagory_button_pane_g1

0xd07a,	// (0x0001c4b1) popup_tb_extension_window

0xe649,	// (0x0001da80) aid_size_cell_ext_ParamLimits

0xe649,	// (0x0001da80) aid_size_cell_ext

0x249b,	// (0x000118d2) bg_tb_trans_pane_cp1_ParamLimits

0x249b,	// (0x000118d2) bg_tb_trans_pane_cp1

0xe66f,	// (0x0001daa6) grid_tb_ext_pane_ParamLimits

0xe66f,	// (0x0001daa6) grid_tb_ext_pane

0xe6aa,	// (0x0001dae1) cell_tb_ext_pane_ParamLimits

0xe6aa,	// (0x0001dae1) cell_tb_ext_pane

0xe6d2,	// (0x0001db09) cell_tb_ext_pane_g1_ParamLimits

0xe6d2,	// (0x0001db09) cell_tb_ext_pane_g1

0x8f3c,	// (0x00018373) cell_tb_ext_pane_t1

0x2147,	// (0x0001157e) list_highlight_pane_cp11_ParamLimits

0x2147,	// (0x0001157e) list_highlight_pane_cp11

0x049a,	// (0x0000f8d1) popup_uni_indicator_window_ParamLimits

0x049a,	// (0x0000f8d1) popup_uni_indicator_window

0x2c8b,	// (0x000120c2) bg_popup_sub_pane_cp14

0x8f57,	// (0x0001838e) list_uniindi_pane

0x8f63,	// (0x0001839a) uniindi_top_pane

0x2147,	// (0x0001157e) bg_uniindi_top_pane

0x8f82,	// (0x000183b9) uniindi_top_pane_g1

0x8f98,	// (0x000183cf) uniindi_top_pane_g2

0x0003,

0xfd3c,	// (0x0001f173) uniindi_top_pane_g

0x8fc2,	// (0x000183f9) uniindi_top_pane_t1

0x8fec,	// (0x00018423) list_single_uniindi_pane_ParamLimits

0x8fec,	// (0x00018423) list_single_uniindi_pane

0x7318,	// (0x0001674f) bg_uniindi_top_pane_g1

0x8fff,	// (0x00018436) list_single_uniindi_pane_g1

0x9012,	// (0x00018449) list_single_uniindi_pane_t1

0x0310,	// (0x0000f747) control_bg_pane

0x9037,	// (0x0001846e) bg_sctrl_sk_pane_cp1

0x9040,	// (0x00018477) bg_sctrl_sk_pane_cp2

0x9049,	// (0x00018480) control_bg_pane_g1

0x9052,	// (0x00018489) control_bg_pane_g2

0x0001,

0xfd45,	// (0x0001f17c) control_bg_pane_g

0x6cee,	// (0x00016125) cell_indicator_nsta_pane_g1_ParamLimits

0xdb51,	// (0x0001cf88) cell_indicator_nsta_pane_g2_ParamLimits

0xfaad,	// (0x0001eee4) cell_indicator_nsta_pane_g_ParamLimits

0x703e,	// (0x00016475) form2_midp_time_pane_t1_ParamLimits

0x7bf0,	// (0x00017027) main_idle_act4_pane_ParamLimits

0x7bf0,	// (0x00017027) main_idle_act4_pane

0xd07a,	// (0x0001c4b1) popup_tb_extension_window_ParamLimits

0xe691,	// (0x0001dac8) tb_ext_find_pane_ParamLimits

0xe691,	// (0x0001dac8) tb_ext_find_pane

0x905b,	// (0x00018492) ai_gene_pane_1_cp1

0x3c1f,	// (0x00013056) ai_gene_pane_2_cp1

0x9063,	// (0x0001849a) list_single_idle_plugin_calendar_pane

0x906c,	// (0x000184a3) list_single_idle_plugin_notification_pane

0x9075,	// (0x000184ac) list_single_idle_plugin_player_pane

0xe6ef,	// (0x0001db26) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe6ef,	// (0x0001db26) list_single_idle_plugin_shortcut_pane

0xe717,	// (0x0001db4e) main_idle_act4_pane_t1

0xe72d,	// (0x0001db64) main_idle_act4_pane_t2

0x0001,

0xfd4a,	// (0x0001f181) main_idle_act4_pane_t

0xe743,	// (0x0001db7a) middle_sk_idle_act4_pane_ParamLimits

0xe743,	// (0x0001db7a) middle_sk_idle_act4_pane

0xe75f,	// (0x0001db96) popup_clock_digital_analogue_window_cp2

0xe787,	// (0x0001dbbe) shortcut_wheel_idle_act4_pane_ParamLimits

0xe787,	// (0x0001dbbe) shortcut_wheel_idle_act4_pane

0x7318,	// (0x0001674f) shortcut_wheel_idle_act4_pane_g1

0x7318,	// (0x0001674f) shortcut_wheel_idle_act4_pane_g2

0x7318,	// (0x0001674f) shortcut_wheel_idle_act4_pane_g3

0x7318,	// (0x0001674f) shortcut_wheel_idle_act4_pane_g4

0x7318,	// (0x0001674f) shortcut_wheel_idle_act4_pane_g5

0x9108,	// (0x0001853f) shortcut_wheel_idle_act4_pane_g6

0x9110,	// (0x00018547) shortcut_wheel_idle_act4_pane_g7

0x9118,	// (0x0001854f) shortcut_wheel_idle_act4_pane_g8

0x9120,	// (0x00018557) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4f,	// (0x0001f186) shortcut_wheel_idle_act4_pane_g

0xc683,	// (0x0001baba) middle_sk_idle_act4_pane_g1_ParamLimits

0xc683,	// (0x0001baba) middle_sk_idle_act4_pane_g1

0xe804,	// (0x0001dc3b) middle_sk_idle_act4_pane_g2_ParamLimits

0xe804,	// (0x0001dc3b) middle_sk_idle_act4_pane_g2

0x0001,

0xfd72,	// (0x0001f1a9) middle_sk_idle_act4_pane_g_ParamLimits

0xfd72,	// (0x0001f1a9) middle_sk_idle_act4_pane_g

0xe81c,	// (0x0001dc53) middle_sk_idle_act4_pane_t1_ParamLimits

0xe81c,	// (0x0001dc53) middle_sk_idle_act4_pane_t1

0xe84b,	// (0x0001dc82) grid_ai_shortcut_pane_ParamLimits

0xe84b,	// (0x0001dc82) grid_ai_shortcut_pane

0xe868,	// (0x0001dc9f) list_highlight_pane_cp16_ParamLimits

0xe868,	// (0x0001dc9f) list_highlight_pane_cp16

0xe875,	// (0x0001dcac) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe875,	// (0x0001dcac) list_single_idle_plugin_shortcut_pane_g1

0xe881,	// (0x0001dcb8) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe881,	// (0x0001dcb8) list_single_idle_plugin_shortcut_pane_g2

0xe89d,	// (0x0001dcd4) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe89d,	// (0x0001dcd4) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd77,	// (0x0001f1ae) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd77,	// (0x0001f1ae) list_single_idle_plugin_shortcut_pane_g

0xe8b2,	// (0x0001dce9) cell_ai_shortcut_pane_ParamLimits

0xe8b2,	// (0x0001dce9) cell_ai_shortcut_pane

0xe8c8,	// (0x0001dcff) cell_ai_shortcut_pane_g1_ParamLimits

0xe8c8,	// (0x0001dcff) cell_ai_shortcut_pane_g1

0x905b,	// (0x00018492) ai_gene_pane_1_cp2

0x9250,	// (0x00018687) ai_gene_pane_2_cp2

0x9258,	// (0x0001868f) list_highlight_pane_cp15

0x9261,	// (0x00018698) list_single_idle_plugin_calendar_pane_g1

0x9258,	// (0x0001868f) list_highlight_pane_cp17

0x9269,	// (0x000186a0) list_single_idle_plugin_calendar_pane_g1_copy1

0x9271,	// (0x000186a8) list_single_idle_plugin_player_pane_g1

0x6474,	// (0x000158ab) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7e,	// (0x0001f1b5) list_single_idle_plugin_player_pane_g

0x9279,	// (0x000186b0) list_single_idle_plugin_player_pane_t1

0x9287,	// (0x000186be) list_single_idle_plugin_player_pane_t2

0x9295,	// (0x000186cc) list_single_idle_plugin_player_pane_t3

0x92a3,	// (0x000186da) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd83,	// (0x0001f1ba) list_single_idle_plugin_player_pane_t

0x92b1,	// (0x000186e8) wait_bar_pane_cp15

0x92b9,	// (0x000186f0) grid_ai_notification_pane

0x6474,	// (0x000158ab) list_single_idle_plugin_notification_pane_g1

0xe8ea,	// (0x0001dd21) cell_ai_notification_pane_ParamLimits

0xe8ea,	// (0x0001dd21) cell_ai_notification_pane

0x92cf,	// (0x00018706) cell_ai_notification_pane_g1

0x92d7,	// (0x0001870e) cell_ai_notification_pane_t1

0xe8f7,	// (0x0001dd2e) tb_ext_find_button_pane

0xe8ff,	// (0x0001dd36) tb_ext_find_pane_g1

0xe907,	// (0x0001dd3e) tb_ext_find_pane_t1

0x346e,	// (0x000128a5) tb_ext_find_button_pane_g1

0x9303,	// (0x0001873a) tb_ext_find_button_pane_g2

0x0001,

0xfd8c,	// (0x0001f1c3) tb_ext_find_button_pane_g

0xe717,	// (0x0001db4e) main_idle_act4_pane_t1_ParamLimits

0xe72d,	// (0x0001db64) main_idle_act4_pane_t2_ParamLimits

0xfd4a,	// (0x0001f181) main_idle_act4_pane_t_ParamLimits

0xe75f,	// (0x0001db96) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe777,	// (0x0001dbae) sat_plugin_idle_act4_pane_ParamLimits

0xe777,	// (0x0001dbae) sat_plugin_idle_act4_pane

0xe915,	// (0x0001dd4c) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe915,	// (0x0001dd4c) sat_plugin_idle_act4_pane_t1

0xe92d,	// (0x0001dd64) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe92d,	// (0x0001dd64) sat_plugin_idle_act4_pane_t2

0xe945,	// (0x0001dd7c) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe945,	// (0x0001dd7c) sat_plugin_idle_act4_pane_t3

0xe95d,	// (0x0001dd94) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe95d,	// (0x0001dd94) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd91,	// (0x0001f1c8) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd91,	// (0x0001f1c8) sat_plugin_idle_act4_pane_t

0x03d5,	// (0x0000f80c) popup_battery_window_ParamLimits

0x03d5,	// (0x0000f80c) popup_battery_window

0x2147,	// (0x0001157e) bg_popup_sub_pane_cp25_ParamLimits

0x2147,	// (0x0001157e) bg_popup_sub_pane_cp25

0x9358,	// (0x0001878f) popup_battery_window_g1_ParamLimits

0x9358,	// (0x0001878f) popup_battery_window_g1

0x9364,	// (0x0001879b) popup_battery_window_t1_ParamLimits

0x9364,	// (0x0001879b) popup_battery_window_t1

0x9376,	// (0x000187ad) popup_battery_window_t2_ParamLimits

0x9376,	// (0x000187ad) popup_battery_window_t2

0x0001,

0xfd9a,	// (0x0001f1d1) popup_battery_window_t_ParamLimits

0xfd9a,	// (0x0001f1d1) popup_battery_window_t

0xc9c4,	// (0x0001bdfb) midp_canvas_pane_ParamLimits

0xca1f,	// (0x0001be56) midp_keypad_pane_ParamLimits

0xca1f,	// (0x0001be56) midp_keypad_pane

0x3e64,	// (0x0001329b) main_midp_pane_ParamLimits

0x6d7a,	// (0x000161b1) signal_pane_g2_cp_ParamLimits

0xe975,	// (0x0001ddac) aid_size_cell_midp_keypad_ParamLimits

0xe975,	// (0x0001ddac) aid_size_cell_midp_keypad

0xe993,	// (0x0001ddca) midp_keyp_game_grid_pane_ParamLimits

0xe993,	// (0x0001ddca) midp_keyp_game_grid_pane

0xe9ba,	// (0x0001ddf1) midp_keyp_rocker_pane_ParamLimits

0xe9ba,	// (0x0001ddf1) midp_keyp_rocker_pane

0xea13,	// (0x0001de4a) midp_keyp_sk_left_pane_ParamLimits

0xea13,	// (0x0001de4a) midp_keyp_sk_left_pane

0xea67,	// (0x0001de9e) midp_keyp_sk_right_pane_ParamLimits

0xea67,	// (0x0001de9e) midp_keyp_sk_right_pane

0x1db0,	// (0x000111e7) bg_button_pane_cp03

0xeabb,	// (0x0001def2) midp_keyp_sk_left_pane_g1

0x1db0,	// (0x000111e7) bg_button_pane_cp04

0xeabb,	// (0x0001def2) midp_keyp_sk_right_pane_g1

0x7318,	// (0x0001674f) midp_keyp_rocker_pane_g1

0xeac4,	// (0x0001defb) keyp_game_cell_pane_ParamLimits

0xeac4,	// (0x0001defb) keyp_game_cell_pane

0x1db0,	// (0x000111e7) bg_button_pane_cp02

0xeae8,	// (0x0001df1f) keyp_game_cell_pane_g1

0xb543,	// (0x0001a97a) popup_fep_vkb2_window_ParamLimits

0xb543,	// (0x0001a97a) popup_fep_vkb2_window

0xb9ba,	// (0x0001adf1) aid_size_cell_vkb2_ParamLimits

0xb9ba,	// (0x0001adf1) aid_size_cell_vkb2

0xb9f0,	// (0x0001ae27) popup_fep_vkb2_window_g1_ParamLimits

0xb9f0,	// (0x0001ae27) popup_fep_vkb2_window_g1

0xba40,	// (0x0001ae77) vkb2_area_bottom_pane_ParamLimits

0xba40,	// (0x0001ae77) vkb2_area_bottom_pane

0xba94,	// (0x0001aecb) vkb2_area_keypad_pane_ParamLimits

0xba94,	// (0x0001aecb) vkb2_area_keypad_pane

0xbadc,	// (0x0001af13) vkb2_area_top_pane_ParamLimits

0xbadc,	// (0x0001af13) vkb2_area_top_pane

0xbb62,	// (0x0001af99) vkb2_top_entry_pane_ParamLimits

0xbb62,	// (0x0001af99) vkb2_top_entry_pane

0xbb8f,	// (0x0001afc6) vkb2_top_grid_left_pane_ParamLimits

0xbb8f,	// (0x0001afc6) vkb2_top_grid_left_pane

0xbbaf,	// (0x0001afe6) vkb2_top_grid_right_pane_ParamLimits

0xbbaf,	// (0x0001afe6) vkb2_top_grid_right_pane

0x17fc,	// (0x00010c33) vkb2_cell_keypad_pane_ParamLimits

0x17fc,	// (0x00010c33) vkb2_cell_keypad_pane

0xbbf5,	// (0x0001b02c) vkb2_area_bottom_grid_pane_ParamLimits

0xbbf5,	// (0x0001b02c) vkb2_area_bottom_grid_pane

0xbc1f,	// (0x0001b056) vkb2_area_bottom_pane_g1_ParamLimits

0xbc1f,	// (0x0001b056) vkb2_area_bottom_pane_g1

0xbc45,	// (0x0001b07c) vkb2_area_bottom_pane_g2_ParamLimits

0xbc45,	// (0x0001b07c) vkb2_area_bottom_pane_g2

0xbc76,	// (0x0001b0ad) vkb2_area_bottom_pane_g3_ParamLimits

0xbc76,	// (0x0001b0ad) vkb2_area_bottom_pane_g3

0x0002,

0xfd9f,	// (0x0001f1d6) vkb2_area_bottom_pane_g_ParamLimits

0xfd9f,	// (0x0001f1d6) vkb2_area_bottom_pane_g

0x19a6,	// (0x00010ddd) vkb2_top_cell_left_pane_ParamLimits

0x19a6,	// (0x00010ddd) vkb2_top_cell_left_pane

0xeaf1,	// (0x0001df28) vkb2_top_entry_pane_g1_ParamLimits

0xeaf1,	// (0x0001df28) vkb2_top_entry_pane_g1

0xeaff,	// (0x0001df36) vkb2_top_entry_pane_t1_ParamLimits

0xeaff,	// (0x0001df36) vkb2_top_entry_pane_t1

0x9527,	// (0x0001895e) vkb2_top_entry_pane_t2_ParamLimits

0x9527,	// (0x0001895e) vkb2_top_entry_pane_t2

0x9559,	// (0x00018990) vkb2_top_entry_pane_t3_ParamLimits

0x9559,	// (0x00018990) vkb2_top_entry_pane_t3

0x0002,

0xfda6,	// (0x0001f1dd) vkb2_top_entry_pane_t_ParamLimits

0xfda6,	// (0x0001f1dd) vkb2_top_entry_pane_t

0xbce0,	// (0x0001b117) vkb2_top_grid_right_pane_g1_ParamLimits

0xbce0,	// (0x0001b117) vkb2_top_grid_right_pane_g1

0x1a09,	// (0x00010e40) vkb2_top_grid_right_pane_g2_ParamLimits

0x1a09,	// (0x00010e40) vkb2_top_grid_right_pane_g2

0x1a21,	// (0x00010e58) vkb2_top_grid_right_pane_g3_ParamLimits

0x1a21,	// (0x00010e58) vkb2_top_grid_right_pane_g3

0xbcf6,	// (0x0001b12d) vkb2_top_grid_right_pane_g4_ParamLimits

0xbcf6,	// (0x0001b12d) vkb2_top_grid_right_pane_g4

0x0003,

0xfdad,	// (0x0001f1e4) vkb2_top_grid_right_pane_g_ParamLimits

0xfdad,	// (0x0001f1e4) vkb2_top_grid_right_pane_g

0x1a4f,	// (0x00010e86) vkb2_top_cell_left_pane_g1

0x1a66,	// (0x00010e9d) vkb2_cell_keypad_pane_g1_ParamLimits

0x1a66,	// (0x00010e9d) vkb2_cell_keypad_pane_g1

0x957d,	// (0x000189b4) vkb2_cell_keypad_pane_t1_ParamLimits

0x957d,	// (0x000189b4) vkb2_cell_keypad_pane_t1

0x1a74,	// (0x00010eab) vkb2_cell_bottom_grid_pane_ParamLimits

0x1a74,	// (0x00010eab) vkb2_cell_bottom_grid_pane

0x1aad,	// (0x00010ee4) vkb2_cell_bottom_grid_pane_g1

0xe7a8,	// (0x0001dbdf) aid_call2_pane_cp02

0xe7b0,	// (0x0001dbe7) aid_call_pane_cp02

0xe7b8,	// (0x0001dbef) clock_digital_number_pane_cp10

0xe7c0,	// (0x0001dbf7) clock_digital_number_pane_cp11

0xe7c8,	// (0x0001dbff) clock_digital_number_pane_cp12

0xe7d0,	// (0x0001dc07) clock_digital_number_pane_cp13

0xe7d8,	// (0x0001dc0f) clock_digital_separator_pane_cp10

0x346e,	// (0x000128a5) popup_clock_digital_analogue_window_cp2_g1

0x346e,	// (0x000128a5) popup_clock_digital_analogue_window_cp2_g2

0xe7e0,	// (0x0001dc17) popup_clock_digital_analogue_window_cp2_g3

0x346e,	// (0x000128a5) popup_clock_digital_analogue_window_cp2_g4

0xe7e0,	// (0x0001dc17) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd62,	// (0x0001f199) popup_clock_digital_analogue_window_cp2_g

0xe7e8,	// (0x0001dc1f) popup_clock_digital_analogue_window_cp2_t1

0xe7f6,	// (0x0001dc2d) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6d,	// (0x0001f1a4) popup_clock_digital_analogue_window_cp2_t

0x7318,	// (0x0001674f) clock_digital_number_pane_cp10_g1

0x7318,	// (0x0001674f) clock_digital_number_pane_cp10_g2

0x0001,

0xfb49,	// (0x0001ef80) clock_digital_number_pane_cp10_g

0x7318,	// (0x0001674f) clock_digital_separator_pane_cp10_g1

0x7318,	// (0x0001674f) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb49,	// (0x0001ef80) clock_digital_separator_pane_cp10_g

0x8fa4,	// (0x000183db) uniindi_top_pane_g3

0x8fb5,	// (0x000183ec) uniindi_top_pane_g4

0x1887,	// (0x00010cbe) vkb2_row_keypad_pane_ParamLimits

0x1887,	// (0x00010cbe) vkb2_row_keypad_pane

0x1ac9,	// (0x00010f00) vkb2_cell_t_keypad_pane_ParamLimits

0x1ac9,	// (0x00010f00) vkb2_cell_t_keypad_pane

0x1ad9,	// (0x00010f10) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1ad9,	// (0x00010f10) vkb2_cell_t_keypad_pane_cp08

0x1aec,	// (0x00010f23) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1aec,	// (0x00010f23) vkb2_cell_t_keypad_pane_cp09

0x1b00,	// (0x00010f37) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1b00,	// (0x00010f37) vkb2_cell_t_keypad_pane_cp01

0x1b11,	// (0x00010f48) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1b11,	// (0x00010f48) vkb2_cell_t_keypad_pane_cp02

0x1b22,	// (0x00010f59) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1b22,	// (0x00010f59) vkb2_cell_t_keypad_pane_cp03

0x1b33,	// (0x00010f6a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1b33,	// (0x00010f6a) vkb2_cell_t_keypad_pane_cp04

0x1b44,	// (0x00010f7b) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1b44,	// (0x00010f7b) vkb2_cell_t_keypad_pane_cp05

0x1b55,	// (0x00010f8c) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1b55,	// (0x00010f8c) vkb2_cell_t_keypad_pane_cp06

0x1b66,	// (0x00010f9d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1b66,	// (0x00010f9d) vkb2_cell_t_keypad_pane_cp07

0x1b77,	// (0x00010fae) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1b77,	// (0x00010fae) vkb2_cell_t_keypad_pane_cp10

0x1329,	// (0x00010760) vkb2_cell_t_keypad_pane_g1

0x9594,	// (0x000189cb) vkb2_cell_t_keypad_pane_t1

0x0310,	// (0x0000f747) popup_grid_graphic2_window

0xeb38,	// (0x0001df6f) aid_size_cell_graphic2_ParamLimits

0xeb38,	// (0x0001df6f) aid_size_cell_graphic2

0x5071,	// (0x000144a8) bg_popup_window_pane_cp21_ParamLimits

0x5071,	// (0x000144a8) bg_popup_window_pane_cp21

0xeb6a,	// (0x0001dfa1) graphic2_pages_pane_ParamLimits

0xeb6a,	// (0x0001dfa1) graphic2_pages_pane

0xebc0,	// (0x0001dff7) grid_graphic2_control_pane_ParamLimits

0xebc0,	// (0x0001dff7) grid_graphic2_control_pane

0xebf4,	// (0x0001e02b) grid_graphic2_pane_ParamLimits

0xebf4,	// (0x0001e02b) grid_graphic2_pane

0xec67,	// (0x0001e09e) cell_graphic2_pane

0x1db0,	// (0x000111e7) main_comp_mode_pane

0x87c1,	// (0x00017bf8) list_ai3_gene_pane_ParamLimits

0xe4ef,	// (0x0001d926) bg_popup_window_pane_cp19_ParamLimits

0x8bfa,	// (0x00018031) bg_touch_area_indi_pane_ParamLimits

0x8bfa,	// (0x00018031) bg_touch_area_indi_pane

0x8c10,	// (0x00018047) bg_touch_area_indi_pane_cp01_ParamLimits

0x8c10,	// (0x00018047) bg_touch_area_indi_pane_cp01

0x8c26,	// (0x0001805d) bg_touch_area_indi_pane_cp02_ParamLimits

0x8c26,	// (0x0001805d) bg_touch_area_indi_pane_cp02

0x8c3e,	// (0x00018075) bg_touch_area_indi_pane_cp03_ParamLimits

0x8c3e,	// (0x00018075) bg_touch_area_indi_pane_cp03

0x8c58,	// (0x0001808f) popup_slider_window_g1_ParamLimits

0x8c74,	// (0x000180ab) popup_slider_window_g2_ParamLimits

0x8c90,	// (0x000180c7) popup_slider_window_g3_ParamLimits

0xfcf7,	// (0x0001f12e) popup_slider_window_g_ParamLimits

0x8cec,	// (0x00018123) popup_slider_window_t1_ParamLimits

0x8d60,	// (0x00018197) small_volume_slider_vertical_pane_ParamLimits

0xec67,	// (0x0001e09e) cell_graphic2_pane_ParamLimits

0xecc2,	// (0x0001e0f9) bg_button_pane_cp10_ParamLimits

0xecc2,	// (0x0001e0f9) bg_button_pane_cp10

0xecd5,	// (0x0001e10c) bg_button_pane_cp11_ParamLimits

0xecd5,	// (0x0001e10c) bg_button_pane_cp11

0xece8,	// (0x0001e11f) graphic2_pages_pane_g1_ParamLimits

0xece8,	// (0x0001e11f) graphic2_pages_pane_g1

0xed10,	// (0x0001e147) graphic2_pages_pane_g2_ParamLimits

0xed10,	// (0x0001e147) graphic2_pages_pane_g2

0x0001,

0xfdbb,	// (0x0001f1f2) graphic2_pages_pane_g_ParamLimits

0xfdbb,	// (0x0001f1f2) graphic2_pages_pane_g

0xed28,	// (0x0001e15f) graphic2_pages_pane_t1_ParamLimits

0xed28,	// (0x0001e15f) graphic2_pages_pane_t1

0xed40,	// (0x0001e177) cell_graphic2_control_pane_ParamLimits

0xed40,	// (0x0001e177) cell_graphic2_control_pane

0xed5a,	// (0x0001e191) cell_graphic2_pane_g1_ParamLimits

0xed5a,	// (0x0001e191) cell_graphic2_pane_g1

0xc691,	// (0x0001bac8) cell_graphic2_pane_g2_ParamLimits

0xc691,	// (0x0001bac8) cell_graphic2_pane_g2

0xed03,	// (0x0001e13a) cell_graphic2_pane_g3_ParamLimits

0xed03,	// (0x0001e13a) cell_graphic2_pane_g3

0xc69e,	// (0x0001bad5) cell_graphic2_pane_g4_ParamLimits

0xc69e,	// (0x0001bad5) cell_graphic2_pane_g4

0xed67,	// (0x0001e19e) cell_graphic2_pane_g5_ParamLimits

0xed67,	// (0x0001e19e) cell_graphic2_pane_g5

0x0004,

0xfdc0,	// (0x0001f1f7) cell_graphic2_pane_g_ParamLimits

0xfdc0,	// (0x0001f1f7) cell_graphic2_pane_g

0xed87,	// (0x0001e1be) cell_graphic2_pane_t1_ParamLimits

0xed87,	// (0x0001e1be) cell_graphic2_pane_t1

0x56e5,	// (0x00014b1c) grid_highlight_pane_cp11_ParamLimits

0x56e5,	// (0x00014b1c) grid_highlight_pane_cp11

0x2c8b,	// (0x000120c2) bg_button_pane_cp05

0xedbc,	// (0x0001e1f3) cell_graphic2_control_pane_g1

0x7318,	// (0x0001674f) bg_touch_area_indi_pane_g1

0x9805,	// (0x00018c3c) aid_cmod_rocker_key_size

0x980f,	// (0x00018c46) aid_cmode_itu_key_size

0x983a,	// (0x00018c71) main_cmode_video_pane

0x9844,	// (0x00018c7b) main_comp_mode_itu_pane

0x9850,	// (0x00018c87) main_comp_mode_rocker_pane

0x985c,	// (0x00018c93) cell_cmode_rocker_pane_ParamLimits

0x985c,	// (0x00018c93) cell_cmode_rocker_pane

0x986e,	// (0x00018ca5) cell_cmode_itu_pane_ParamLimits

0x986e,	// (0x00018ca5) cell_cmode_itu_pane

0x2c8b,	// (0x000120c2) bg_button_pane_cp06_ParamLimits

0x2c8b,	// (0x000120c2) bg_button_pane_cp06

0x75aa,	// (0x000169e1) cell_cmode_rocker_pane_g1_ParamLimits

0x75aa,	// (0x000169e1) cell_cmode_rocker_pane_g1

0x8e04,	// (0x0001823b) cell_cmode_rocker_pane_g2_ParamLimits

0x8e04,	// (0x0001823b) cell_cmode_rocker_pane_g2

0x0001,

0xfdd0,	// (0x0001f207) cell_cmode_rocker_pane_g_ParamLimits

0xfdd0,	// (0x0001f207) cell_cmode_rocker_pane_g

0x1db0,	// (0x000111e7) bg_button_pane_cp07

0x9883,	// (0x00018cba) cell_cmode_itu_pane_g1

0x988c,	// (0x00018cc3) cell_cmode_itu_pane_t1

0x989a,	// (0x00018cd1) cell_cmode_itu_pane_t2

0x0001,

0xfdd5,	// (0x0001f20c) cell_cmode_itu_pane_t

0x9027,	// (0x0001845e) aid_touch_ctrl_left

0x902f,	// (0x00018466) aid_touch_ctrl_right

0x1db0,	// (0x000111e7) compa_mode_pane

0xedc9,	// (0x0001e200) aid_cmod_rocker_key_size_cp

0xedd3,	// (0x0001e20a) aid_cmode_itu_key_size_cp

0x98bc,	// (0x00018cf3) compa_mode_pane_g1

0x98c4,	// (0x00018cfb) compa_mode_pane_g2

0x98cc,	// (0x00018d03) compa_mode_pane_g3

0x0002,

0xfdda,	// (0x0001f211) compa_mode_pane_g

0xeddd,	// (0x0001e214) main_comp_mode_itu_pane_cp

0xede5,	// (0x0001e21c) main_comp_mode_rocker_pane_cp

0xeded,	// (0x0001e224) cell_cmode_itu_pane_cp_ParamLimits

0xeded,	// (0x0001e224) cell_cmode_itu_pane_cp

0xee02,	// (0x0001e239) cell_cmode_rocker_pane_cp_ParamLimits

0xee02,	// (0x0001e239) cell_cmode_rocker_pane_cp

0x2c8b,	// (0x000120c2) bg_button_pane_cp06_cp_ParamLimits

0x2c8b,	// (0x000120c2) bg_button_pane_cp06_cp

0x75aa,	// (0x000169e1) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x75aa,	// (0x000169e1) cell_cmode_rocker_pane_g1_cp

0x7318,	// (0x0001674f) cell_cmode_rocker_pane_g2_cp

0x1db0,	// (0x000111e7) bg_button_pane_cp07_cp

0xee14,	// (0x0001e24b) cell_cmode_itu_pane_g1_cp

0xee1d,	// (0x0001e254) cell_cmode_itu_pane_t1_cp

0xee1d,	// (0x0001e254) cell_cmode_itu_pane_t2_cp

0xd921,	// (0x0001cd58) settings_code_pane_cp2

0x1ea4,	// (0x000112db) bg_popup_window_pane_cp3_ParamLimits

0x2321,	// (0x00011758) heading_pane_cp3_ParamLimits

0x232d,	// (0x00011764) listscroll_popup_graphic_pane_ParamLimits

0x10d2,	// (0x00010509) fep_hwr_aid_pane_ParamLimits

0x154a,	// (0x00010981) aid_touch_sctrl_top_ParamLimits

0x1565,	// (0x0001099c) sctrl_sk_top_pane_g1_ParamLimits

0x1329,	// (0x00010760) sctrl_sk_top_pane_g2_ParamLimits

0xfd10,	// (0x0001f147) sctrl_sk_top_pane_g_ParamLimits

0x1572,	// (0x000109a9) sctrl_sk_top_pane_t1_ParamLimits

0x154a,	// (0x00010981) aid_touch_sctrl_bottom_ParamLimits

0x1572,	// (0x000109a9) sctrl_sk_bottom_pane_t1_ParamLimits

0x8f70,	// (0x000183a7) aid_area_touch_clock

0xbb24,	// (0x0001af5b) aid_vkb2_area_top_pane_cell_ParamLimits

0xbb24,	// (0x0001af5b) aid_vkb2_area_top_pane_cell

0xbbcf,	// (0x0001b006) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbbcf,	// (0x0001b006) aid_vkb2_area_bottom_pane_cell

0x94df,	// (0x00018916) popup_char_count_window

0x9919,	// (0x00018d50) popup_char_count_window_g1

0x9922,	// (0x00018d59) popup_char_count_window_g2

0x992b,	// (0x00018d62) popup_char_count_window_g3

0x0002,

0xfde1,	// (0x0001f218) popup_char_count_window_g

0x9934,	// (0x00018d6b) popup_char_count_window_t1

0x1624,	// (0x00010a5b) popup_fep_char_preview_window_ParamLimits

0x1624,	// (0x00010a5b) popup_fep_char_preview_window

0xbb44,	// (0x0001af7b) vkb2_top_candi_pane_ParamLimits

0xbb44,	// (0x0001af7b) vkb2_top_candi_pane

0xee2b,	// (0x0001e262) cell_vkb2_top_candi_pane_ParamLimits

0xee2b,	// (0x0001e262) cell_vkb2_top_candi_pane

0x1b8c,	// (0x00010fc3) bg_popup_fep_char_preview_window_ParamLimits

0x1b8c,	// (0x00010fc3) bg_popup_fep_char_preview_window

0x1b9a,	// (0x00010fd1) popup_fep_char_preview_window_t1_ParamLimits

0x1b9a,	// (0x00010fd1) popup_fep_char_preview_window_t1

0x998f,	// (0x00018dc6) bg_popup_fep_char_preview_window_g1

0x9997,	// (0x00018dce) bg_popup_fep_char_preview_window_g2

0x999f,	// (0x00018dd6) bg_popup_fep_char_preview_window_g3

0x99a7,	// (0x00018dde) bg_popup_fep_char_preview_window_g4

0x99af,	// (0x00018de6) bg_popup_fep_char_preview_window_g5

0x1bd4,	// (0x0001100b) bg_popup_fep_char_preview_window_g6

0x99b7,	// (0x00018dee) bg_popup_fep_char_preview_window_g7

0x99bf,	// (0x00018df6) bg_popup_fep_char_preview_window_g8

0x99c7,	// (0x00018dfe) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde8,	// (0x0001f21f) bg_popup_fep_char_preview_window_g

0x1329,	// (0x00010760) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1329,	// (0x00010760) cell_vkb2_top_candi_pane_g1

0x1337,	// (0x0001076e) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1337,	// (0x0001076e) cell_vkb2_top_candi_pane_g2

0x9819,	// (0x00018c50) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9819,	// (0x00018c50) cell_vkb2_top_candi_pane_g3

0x1bdc,	// (0x00011013) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1bdc,	// (0x00011013) cell_vkb2_top_candi_pane_g4

0x7bcf,	// (0x00017006) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7bcf,	// (0x00017006) cell_vkb2_top_candi_pane_g5

0x1bfd,	// (0x00011034) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1bfd,	// (0x00011034) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfb,	// (0x0001f232) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfb,	// (0x0001f232) cell_vkb2_top_candi_pane_g

0x1c0b,	// (0x00011042) cell_vkb2_top_candi_pane_t1

0x0f32,	// (0x00010369) aid_size_touch_slider_mark_ParamLimits

0x0f32,	// (0x00010369) aid_size_touch_slider_mark

0xeba6,	// (0x0001dfdd) grid_graphic2_catg_pane_ParamLimits

0xeba6,	// (0x0001dfdd) grid_graphic2_catg_pane

0xec3a,	// (0x0001e071) popup_grid_graphic2_window_t1_ParamLimits

0xec3a,	// (0x0001e071) popup_grid_graphic2_window_t1

0xec50,	// (0x0001e087) popup_grid_graphic2_window_t2_ParamLimits

0xec50,	// (0x0001e087) popup_grid_graphic2_window_t2

0x0001,

0xfdb6,	// (0x0001f1ed) popup_grid_graphic2_window_t_ParamLimits

0xfdb6,	// (0x0001f1ed) popup_grid_graphic2_window_t

0x2c8b,	// (0x000120c2) bg_button_pane_cp05_ParamLimits

0xedbc,	// (0x0001e1f3) cell_graphic2_control_pane_g1_ParamLimits

0xee91,	// (0x0001e2c8) cell_graphic2_catg_pane_ParamLimits

0xee91,	// (0x0001e2c8) cell_graphic2_catg_pane

0x1db0,	// (0x000111e7) bg_button_pane_cp12

0xeea3,	// (0x0001e2da) cell_graphic2_catg_pane_g1

0x8f3c,	// (0x00018373) cell_tb_ext_pane_t1_ParamLimits

0x19c6,	// (0x00010dfd) vkb2_top_cell_right_narrow_pane_ParamLimits

0x19c6,	// (0x00010dfd) vkb2_top_cell_right_narrow_pane

0x19de,	// (0x00010e15) vkb2_top_cell_right_wide_pane_ParamLimits

0x19de,	// (0x00010e15) vkb2_top_cell_right_wide_pane

0x10c4,	// (0x000104fb) bg_vkb2_func_pane_ParamLimits

0x10c4,	// (0x000104fb) bg_vkb2_func_pane

0x1a4f,	// (0x00010e86) vkb2_top_cell_left_pane_g1_ParamLimits

0x10c4,	// (0x000104fb) bg_vkb2_fuc_pane_cp03_ParamLimits

0x10c4,	// (0x000104fb) bg_vkb2_fuc_pane_cp03

0x1aad,	// (0x00010ee4) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4944,	// (0x00013d7b) bg_vkb2_func_pane_g1

0x494c,	// (0x00013d83) bg_vkb2_func_pane_g2

0x495c,	// (0x00013d93) bg_vkb2_func_pane_g3

0x4954,	// (0x00013d8b) bg_vkb2_func_pane_g4

0x4964,	// (0x00013d9b) bg_vkb2_func_pane_g5

0x496c,	// (0x00013da3) bg_vkb2_func_pane_g6

0x4974,	// (0x00013dab) bg_vkb2_func_pane_g7

0x497c,	// (0x00013db3) bg_vkb2_func_pane_g8

0x493c,	// (0x00013d73) bg_vkb2_func_pane_g9

0x0008,

0xfe08,	// (0x0001f23f) bg_vkb2_func_pane_g

0x10c4,	// (0x000104fb) bg_vkb2_fuc_pane_cp01_ParamLimits

0x10c4,	// (0x000104fb) bg_vkb2_fuc_pane_cp01

0x1a4f,	// (0x00010e86) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1a4f,	// (0x00010e86) vkb2_top_cell_right_wide_pane_g1

0x10c4,	// (0x000104fb) bg_vkb2_fuc_pane_cp02_ParamLimits

0x10c4,	// (0x000104fb) bg_vkb2_fuc_pane_cp02

0x1aad,	// (0x00010ee4) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1aad,	// (0x00010ee4) vkb2_top_cell_right_narrow_pane_g1

0xe42f,	// (0x0001d866) aid_touch_area_decrease_ParamLimits

0xe42f,	// (0x0001d866) aid_touch_area_decrease

0xe463,	// (0x0001d89a) aid_touch_area_increase_ParamLimits

0xe463,	// (0x0001d89a) aid_touch_area_increase

0xe48b,	// (0x0001d8c2) aid_touch_area_mute_ParamLimits

0xe48b,	// (0x0001d8c2) aid_touch_area_mute

0xe4bb,	// (0x0001d8f2) aid_touch_area_slider_ParamLimits

0xe4bb,	// (0x0001d8f2) aid_touch_area_slider

0xe4fb,	// (0x0001d932) popup_slider_window_g4_ParamLimits

0xe4fb,	// (0x0001d932) popup_slider_window_g4

0xe523,	// (0x0001d95a) popup_slider_window_g5_ParamLimits

0xe523,	// (0x0001d95a) popup_slider_window_g5

0xe557,	// (0x0001d98e) popup_slider_window_g6_ParamLimits

0xe557,	// (0x0001d98e) popup_slider_window_g6

0x8d1a,	// (0x00018151) popup_slider_window_t2_ParamLimits

0x8d1a,	// (0x00018151) popup_slider_window_t2

0x0001,

0xfd04,	// (0x0001f13b) popup_slider_window_t_ParamLimits

0xfd04,	// (0x0001f13b) popup_slider_window_t

0xe573,	// (0x0001d9aa) slider_pane_ParamLimits

0xe573,	// (0x0001d9aa) slider_pane

0x99ea,	// (0x00018e21) slider_pane_g1_ParamLimits

0x99ea,	// (0x00018e21) slider_pane_g1

0x99fe,	// (0x00018e35) slider_pane_g2_ParamLimits

0x99fe,	// (0x00018e35) slider_pane_g2

0x9a14,	// (0x00018e4b) slider_pane_g3_ParamLimits

0x9a14,	// (0x00018e4b) slider_pane_g3

0x0003,

0xfe1b,	// (0x0001f252) slider_pane_g_ParamLimits

0xfe1b,	// (0x0001f252) slider_pane_g

0xd0c2,	// (0x0001c4f9) popup_tb_float_extension_window_ParamLimits

0xd0c2,	// (0x0001c4f9) popup_tb_float_extension_window

0x9a40,	// (0x00018e77) aid_size_cell_tb_float_ext

0x1db0,	// (0x000111e7) bg_popup_sub_window_cp28

0x9a4c,	// (0x00018e83) grid_tb_float_ext_pane

0x9a56,	// (0x00018e8d) cell_tb_float_ext_pane_ParamLimits

0x9a56,	// (0x00018e8d) cell_tb_float_ext_pane

0x9a70,	// (0x00018ea7) cell_tb_float_ext_pane_g1

0x9a79,	// (0x00018eb0) grid_highlight_pane_cp12

0xb92d,	// (0x0001ad64) cell_last_hwr_side_pane_ParamLimits

0xb92d,	// (0x0001ad64) cell_last_hwr_side_pane

0x7318,	// (0x0001674f) cell_last_hwr_side_pane_g1

0x9a82,	// (0x00018eb9) cell_last_hwr_side_pane_g2

0x0001,

0xfe24,	// (0x0001f25b) cell_last_hwr_side_pane_g

0xbcab,	// (0x0001b0e2) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbcab,	// (0x0001b0e2) vkb2_area_bottom_space_btn_pane

0x1329,	// (0x00010760) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9594,	// (0x000189cb) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1c0b,	// (0x00011042) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1c2a,	// (0x00011061) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1c2a,	// (0x00011061) vkb2_area_bottom_space_btn_pane_g1

0x1c64,	// (0x0001109b) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1c64,	// (0x0001109b) vkb2_area_bottom_space_btn_pane_g2

0x1c9a,	// (0x000110d1) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1c9a,	// (0x000110d1) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe29,	// (0x0001f260) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe29,	// (0x0001f260) vkb2_area_bottom_space_btn_pane_g

0x1187,	// (0x000105be) cel_fep_hwr_func_pane_ParamLimits

0x1187,	// (0x000105be) cel_fep_hwr_func_pane

0xb902,	// (0x0001ad39) cell_hwr_side_button_pane_ParamLimits

0xb902,	// (0x0001ad39) cell_hwr_side_button_pane

0x8f70,	// (0x000183a7) aid_area_touch_clock_ParamLimits

0x2147,	// (0x0001157e) bg_uniindi_top_pane_ParamLimits

0x8f82,	// (0x000183b9) uniindi_top_pane_g1_ParamLimits

0x8f98,	// (0x000183cf) uniindi_top_pane_g2_ParamLimits

0x8fa4,	// (0x000183db) uniindi_top_pane_g3_ParamLimits

0x8fb5,	// (0x000183ec) uniindi_top_pane_g4_ParamLimits

0xfd3c,	// (0x0001f173) uniindi_top_pane_g_ParamLimits

0x8fc2,	// (0x000183f9) uniindi_top_pane_t1_ParamLimits

0x2147,	// (0x0001157e) bg_vkb2_func_pane_cp01_ParamLimits

0x2147,	// (0x0001157e) bg_vkb2_func_pane_cp01

0x9a8b,	// (0x00018ec2) cel_fep_hwr_func_pane_g1_ParamLimits

0x9a8b,	// (0x00018ec2) cel_fep_hwr_func_pane_g1

0x2147,	// (0x0001157e) bg_vkb2_func_pane_cp02_ParamLimits

0x2147,	// (0x0001157e) bg_vkb2_func_pane_cp02

0x9a8b,	// (0x00018ec2) cell_hwr_side_button_pane_g1_ParamLimits

0x9a8b,	// (0x00018ec2) cell_hwr_side_button_pane_g1

0x4783,	// (0x00013bba) status_pane_g4_ParamLimits

0x4783,	// (0x00013bba) status_pane_g4

0x479d,	// (0x00013bd4) status_pane_t1

0x7051,	// (0x00016488) form2_midp_gauge_slider_cont_pane

0x7059,	// (0x00016490) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdc7e,	// (0x0001d0b5) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdc90,	// (0x0001d0c7) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafc,	// (0x0001ef33) form2_midp_gauge_slider_pane_t_ParamLimits

0x708f,	// (0x000164c6) form2_midp_slider_pane_ParamLimits

0x15e4,	// (0x00010a1b) aid_size_cell_func_vkb2_ParamLimits

0x15e4,	// (0x00010a1b) aid_size_cell_func_vkb2

0x9a2c,	// (0x00018e63) slider_pane_g4_ParamLimits

0x9a2c,	// (0x00018e63) slider_pane_g4

0xbd0c,	// (0x0001b143) form2_midp_gauge_slider_pane_t2_cp01

0xbd1a,	// (0x0001b151) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbd1a,	// (0x0001b151) form2_midp_gauge_slider_pane_t3_cp01

0x1d0f,	// (0x00011146) form2_midp_slider_pane_cp01

0x1db0,	// (0x000111e7) navi_smil_pane

0x9ac4,	// (0x00018efb) navi_smil_pane_g1

0x9acc,	// (0x00018f03) navi_smil_pane_t1

0x9a99,	// (0x00018ed0) form2_midp_slider_pane_g1

0x9aa2,	// (0x00018ed9) form2_midp_slider_pane_g2

0x9aaa,	// (0x00018ee1) form2_midp_slider_pane_g3

0x9a99,	// (0x00018ed0) form2_midp_slider_pane_g4

0xeeac,	// (0x0001e2e3) form2_midp_slider_pane_g5

0x0004,

0xfe32,	// (0x0001f269) form2_midp_slider_pane_g

0x1cd4,	// (0x0001110b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1cd4,	// (0x0001110b) vkb2_area_bottom_space_btn_pane_g4

0xd29e,	// (0x0001c6d5) lc0_navi_pane_ParamLimits

0xd29e,	// (0x0001c6d5) lc0_navi_pane

0xd308,	// (0x0001c73f) lc0_stat_indi_pane_ParamLimits

0xd308,	// (0x0001c73f) lc0_stat_indi_pane

0xd31d,	// (0x0001c754) ls0_title_pane_ParamLimits

0xd31d,	// (0x0001c754) ls0_title_pane

0x2c8b,	// (0x000120c2) bg_popup_sub_pane_cp14_ParamLimits

0x8f57,	// (0x0001838e) list_uniindi_pane_ParamLimits

0x8f63,	// (0x0001839a) uniindi_top_pane_ParamLimits

0x8fff,	// (0x00018436) list_single_uniindi_pane_g1_ParamLimits

0x9012,	// (0x00018449) list_single_uniindi_pane_t1_ParamLimits

0xbd37,	// (0x0001b16e) lc0_stat_clock_pane_ParamLimits

0xbd37,	// (0x0001b16e) lc0_stat_clock_pane

0xeeb5,	// (0x0001e2ec) lc0_stat_indi_pane_g1_ParamLimits

0xeeb5,	// (0x0001e2ec) lc0_stat_indi_pane_g1

0xeec2,	// (0x0001e2f9) lc0_stat_indi_pane_g2_ParamLimits

0xeec2,	// (0x0001e2f9) lc0_stat_indi_pane_g2

0x0001,

0xfe3d,	// (0x0001f274) lc0_stat_indi_pane_g_ParamLimits

0xfe3d,	// (0x0001f274) lc0_stat_indi_pane_g

0xbd44,	// (0x0001b17b) lc0_uni_indicator_pane_ParamLimits

0xbd44,	// (0x0001b17b) lc0_uni_indicator_pane

0x9af4,	// (0x00018f2b) ls0_title_pane_g1_ParamLimits

0x9af4,	// (0x00018f2b) ls0_title_pane_g1

0xeecf,	// (0x0001e306) ls0_title_pane_t1_ParamLimits

0xeecf,	// (0x0001e306) ls0_title_pane_t1

0xbd51,	// (0x0001b188) lc0_uni_indicator_pane_g1_ParamLimits

0xbd51,	// (0x0001b188) lc0_uni_indicator_pane_g1

0x9b3e,	// (0x00018f75) lc0_stat_clock_pane_t1

0x1db0,	// (0x000111e7) main_ai5_pane

0x9b4c,	// (0x00018f83) ai5_sk_pane_ParamLimits

0x9b4c,	// (0x00018f83) ai5_sk_pane

0xeefd,	// (0x0001e334) cell_ai5_widget_pane_ParamLimits

0xeefd,	// (0x0001e334) cell_ai5_widget_pane

0x9bdb,	// (0x00019012) aid_size_cell_widget_grid

0x9bef,	// (0x00019026) bg_ai5_widget_pane_ParamLimits

0x9bef,	// (0x00019026) bg_ai5_widget_pane

0xef86,	// (0x0001e3bd) cell_ai5_widget_pane_g2

0xef96,	// (0x0001e3cd) cell_ai5_widget_pane_g3

0xefb5,	// (0x0001e3ec) cell_ai5_widget_pane_g4

0xefc1,	// (0x0001e3f8) cell_ai5_widget_pane_g5

0xefcd,	// (0x0001e404) cell_ai5_widget_pane_g6

0xefd9,	// (0x0001e410) cell_ai5_widget_pane_g7

0xf021,	// (0x0001e458) cell_ai5_widget_pane_t1_ParamLimits

0xf021,	// (0x0001e458) cell_ai5_widget_pane_t1

0xf03e,	// (0x0001e475) cell_ai5_widget_pane_t2_ParamLimits

0xf03e,	// (0x0001e475) cell_ai5_widget_pane_t2

0xf056,	// (0x0001e48d) cell_ai5_widget_pane_t3_ParamLimits

0xf056,	// (0x0001e48d) cell_ai5_widget_pane_t3

0xf06e,	// (0x0001e4a5) cell_ai5_widget_pane_t4_ParamLimits

0xf06e,	// (0x0001e4a5) cell_ai5_widget_pane_t4

0xf088,	// (0x0001e4bf) cell_ai5_widget_pane_t5_ParamLimits

0xf088,	// (0x0001e4bf) cell_ai5_widget_pane_t5

0x9d38,	// (0x0001916f) cell_ai5_widget_pane_t6_ParamLimits

0x9d38,	// (0x0001916f) cell_ai5_widget_pane_t6

0x9d4a,	// (0x00019181) cell_ai5_widget_pane_t7_ParamLimits

0x9d4a,	// (0x00019181) cell_ai5_widget_pane_t7

0xf0a7,	// (0x0001e4de) cell_ai5_widget_pane_t8_ParamLimits

0xf0a7,	// (0x0001e4de) cell_ai5_widget_pane_t8

0x0009,

0xfe57,	// (0x0001f28e) cell_ai5_widget_pane_t_ParamLimits

0xfe57,	// (0x0001f28e) cell_ai5_widget_pane_t

0xf0f3,	// (0x0001e52a) grid_ai5_widget_pane

0x2c8b,	// (0x000120c2) highlight_cell_ai5_widget_pane_ParamLimits

0x2c8b,	// (0x000120c2) highlight_cell_ai5_widget_pane

0xf10b,	// (0x0001e542) ai5_sk_left_pane

0xf115,	// (0x0001e54c) ai5_sk_middle_pane

0xf11f,	// (0x0001e556) ai5_sk_right_pane

0x9de5,	// (0x0001921c) bg_ai5_widget_pane_g1_ParamLimits

0x9de5,	// (0x0001921c) bg_ai5_widget_pane_g1

0x9df1,	// (0x00019228) bg_ai5_widget_pane_g2_ParamLimits

0x9df1,	// (0x00019228) bg_ai5_widget_pane_g2

0x9dfd,	// (0x00019234) bg_ai5_widget_pane_g3_ParamLimits

0x9dfd,	// (0x00019234) bg_ai5_widget_pane_g3

0x9e09,	// (0x00019240) bg_ai5_widget_pane_g4_ParamLimits

0x9e09,	// (0x00019240) bg_ai5_widget_pane_g4

0x9e15,	// (0x0001924c) bg_ai5_widget_pane_g5_ParamLimits

0x9e15,	// (0x0001924c) bg_ai5_widget_pane_g5

0x9e21,	// (0x00019258) bg_ai5_widget_pane_g6_ParamLimits

0x9e21,	// (0x00019258) bg_ai5_widget_pane_g6

0x9e2d,	// (0x00019264) bg_ai5_widget_pane_g7_ParamLimits

0x9e2d,	// (0x00019264) bg_ai5_widget_pane_g7

0x9e39,	// (0x00019270) bg_ai5_widget_pane_g8_ParamLimits

0x9e39,	// (0x00019270) bg_ai5_widget_pane_g8

0x9e45,	// (0x0001927c) bg_ai5_widget_pane_g9_ParamLimits

0x9e45,	// (0x0001927c) bg_ai5_widget_pane_g9

0x0008,

0xfe6c,	// (0x0001f2a3) bg_ai5_widget_pane_g_ParamLimits

0xfe6c,	// (0x0001f2a3) bg_ai5_widget_pane_g

0x9e78,	// (0x000192af) cell_shortcut_ai5_widget_pane_ParamLimits

0x9e78,	// (0x000192af) cell_shortcut_ai5_widget_pane

0x1f87,	// (0x000113be) bg_cell_shortcut_ai5_widget_pane

0x9e89,	// (0x000192c0) cell_grid_ai5_widget_pane_g1

0x9e92,	// (0x000192c9) highlight_cell_shortcut_ai5_widget_pane

0x4944,	// (0x00013d7b) ai5_sk_left_pane_g1

0x9e9a,	// (0x000192d1) ai5_sk_left_pane_g2

0x9ea2,	// (0x000192d9) ai5_sk_left_pane_g3

0x9eaa,	// (0x000192e1) ai5_sk_left_pane_g4

0x0003,

0xfe7f,	// (0x0001f2b6) ai5_sk_left_pane_g

0x9eb2,	// (0x000192e9) ai5_sk_left_pane_t1

0x494c,	// (0x00013d83) ai5_sk_right_pane_g1

0x9ec0,	// (0x000192f7) ai5_sk_right_pane_g2

0x9ec8,	// (0x000192ff) ai5_sk_right_pane_g3

0x9ed0,	// (0x00019307) ai5_sk_right_pane_g4

0x0003,

0xfe88,	// (0x0001f2bf) ai5_sk_right_pane_g

0x9ed8,	// (0x0001930f) ai5_sk_right_pane_t1

0x494c,	// (0x00013d83) ai5_sk_middle_pane_g1

0x4944,	// (0x00013d7b) ai5_sk_middle_pane_g2

0x4964,	// (0x00013d9b) ai5_sk_middle_pane_g3

0x9ec8,	// (0x000192ff) ai5_sk_middle_pane_g4

0x9ea2,	// (0x000192d9) ai5_sk_middle_pane_g5

0x9ee6,	// (0x0001931d) ai5_sk_middle_pane_g6

0xf129,	// (0x0001e560) ai5_sk_middle_pane_g7

0x0006,

0xfe91,	// (0x0001f2c8) ai5_sk_middle_pane_g

0xd18a,	// (0x0001c5c1) aid_touch_area_size_lc0_ParamLimits

0xd18a,	// (0x0001c5c1) aid_touch_area_size_lc0

0x1358,	// (0x0001078f) cell_hwr_candidate_pane_t1_ParamLimits

0x4465,	// (0x0001389c) aid_touch_navi_pane

0xd40f,	// (0x0001c846) status_dt_navi_pane_ParamLimits

0xd40f,	// (0x0001c846) status_dt_navi_pane

0xd427,	// (0x0001c85e) status_dt_sta_pane_ParamLimits

0xd427,	// (0x0001c85e) status_dt_sta_pane

0xf131,	// (0x0001e568) dt_sta_controll_pane

0xf13e,	// (0x0001e575) dt_sta_indi_pane

0xf14b,	// (0x0001e582) dt_sta_title_pane

0x2147,	// (0x0001157e) bg_dt_sta_indi_pane_ParamLimits

0x2147,	// (0x0001157e) bg_dt_sta_indi_pane

0x9f27,	// (0x0001935e) dt_sta_battery_pane

0xf15d,	// (0x0001e594) dt_sta_indi_pane_g1

0xf166,	// (0x0001e59d) dt_sta_indi_pane_g2

0xf16f,	// (0x0001e5a6) dt_sta_indi_pane_g3

0x0002,

0xfea0,	// (0x0001f2d7) dt_sta_indi_pane_g

0xf178,	// (0x0001e5af) dt_sta_signal_pane

0x2c8b,	// (0x000120c2) bg_dt_sta_title_pane_ParamLimits

0x2c8b,	// (0x000120c2) bg_dt_sta_title_pane

0x5845,	// (0x00014c7c) dt_sta_title_pane_g1

0xf181,	// (0x0001e5b8) dt_sta_title_pane_t1_ParamLimits

0xf181,	// (0x0001e5b8) dt_sta_title_pane_t1

0x1db0,	// (0x000111e7) bg_dt_sta_control_pane

0xf196,	// (0x0001e5cd) dt_sta_controll_pane_g1

0xf19f,	// (0x0001e5d6) bg_dt_sta_title_pane_g1

0xf1a8,	// (0x0001e5df) bg_dt_sta_title_pane_g2

0xf1b1,	// (0x0001e5e8) bg_dt_sta_title_pane_g3

0x0002,

0xfea7,	// (0x0001f2de) bg_dt_sta_title_pane_g

0x7318,	// (0x0001674f) bg_dt_sta_indi_pane_g1

0x9f94,	// (0x000193cb) dt_sta_signal_pane_g1

0x9f9c,	// (0x000193d3) dt_sta_signal_pane_g2

0x0001,

0xfeae,	// (0x0001f2e5) dt_sta_signal_pane_g

0x9fa4,	// (0x000193db) dt_sta_battery_pane_g1

0x9fad,	// (0x000193e4) dt_sta_battery_pane_t1

0x7318,	// (0x0001674f) bg_dt_sta_control_pane_g1

0x3555,	// (0x0001298c) fep_china_uni_eep_pane

0x355d,	// (0x00012994) fep_china_uni_entry_pane_ParamLimits

0x356d,	// (0x000129a4) popup_fep_china_uni_window_g1_ParamLimits

0x357d,	// (0x000129b4) popup_fep_china_uni_window_g2_ParamLimits

0x357d,	// (0x000129b4) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x0001eb67) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x0001eb67) popup_fep_china_uni_window_g

0x9fbc,	// (0x000193f3) fep_china_uni_eep_pane_g1

0x9fc4,	// (0x000193fb) fep_china_uni_eep_pane_t1

0x9abb,	// (0x00018ef2) aid_touch_area_size_smil_player

0x45b1,	// (0x000139e8) lc0_clock_pane

0x4791,	// (0x00013bc8) status_pane_g5_ParamLimits

0x4791,	// (0x00013bc8) status_pane_g5

0xcc68,	// (0x0001c09f) popup_keymap_window

0x474f,	// (0x00013b86) status_icon_pane

0xef96,	// (0x0001e3cd) cell_ai5_widget_pane_g3_ParamLimits

0xefb5,	// (0x0001e3ec) cell_ai5_widget_pane_g4_ParamLimits

0xefc1,	// (0x0001e3f8) cell_ai5_widget_pane_g5_ParamLimits

0xefe5,	// (0x0001e41c) cell_ai5_widget_pane_g8_ParamLimits

0xefe5,	// (0x0001e41c) cell_ai5_widget_pane_g8

0xeff9,	// (0x0001e430) cell_ai5_widget_pane_g9_ParamLimits

0xeff9,	// (0x0001e430) cell_ai5_widget_pane_g9

0xf00d,	// (0x0001e444) cell_ai5_widget_pane_g10_ParamLimits

0xf00d,	// (0x0001e444) cell_ai5_widget_pane_g10

0x9fd3,	// (0x0001940a) status_icon_pane_g1

0x1db0,	// (0x000111e7) bg_popup_sub_pane_cp13

0x9fdb,	// (0x00019412) popup_keymap_window_t1

0xca77,	// (0x0001beae) control_pane_g6_ParamLimits

0xca77,	// (0x0001beae) control_pane_g6

0xca84,	// (0x0001bebb) control_pane_g7_ParamLimits

0xca84,	// (0x0001bebb) control_pane_g7

0xca91,	// (0x0001bec8) control_pane_g8_ParamLimits

0xca91,	// (0x0001bec8) control_pane_g8

0xf131,	// (0x0001e568) dt_sta_controll_pane_ParamLimits

0xf13e,	// (0x0001e575) dt_sta_indi_pane_ParamLimits

0xf14b,	// (0x0001e582) dt_sta_title_pane_ParamLimits

0x2662,	// (0x00011a99) aid_size_touch_scroll_bar_cale

0x03e9,	// (0x0000f820) popup_discreet_window_ParamLimits

0x03e9,	// (0x0000f820) popup_discreet_window

0xb589,	// (0x0001a9c0) popup_sk_window

0x5071,	// (0x000144a8) bg_popup_sub_pane_cp28_ParamLimits

0x5071,	// (0x000144a8) bg_popup_sub_pane_cp28

0x9fe9,	// (0x00019420) popup_discreet_window_g1_ParamLimits

0x9fe9,	// (0x00019420) popup_discreet_window_g1

0xa009,	// (0x00019440) popup_discreet_window_t1_ParamLimits

0xa009,	// (0x00019440) popup_discreet_window_t1

0xa027,	// (0x0001945e) popup_discreet_window_t2_ParamLimits

0xa027,	// (0x0001945e) popup_discreet_window_t2

0x0002,

0xfeb3,	// (0x0001f2ea) popup_discreet_window_t_ParamLimits

0xfeb3,	// (0x0001f2ea) popup_discreet_window_t

0x1d46,	// (0x0001117d) popup_sk_window_g1

0x1d50,	// (0x00011187) popup_sk_window_g2

0x0001,

0xfeba,	// (0x0001f2f1) popup_sk_window_g

0xa079,	// (0x000194b0) popup_sk_window_t1

0xa087,	// (0x000194be) popup_sk_window_t1_copy1

0xef86,	// (0x0001e3bd) cell_ai5_widget_pane_g2_ParamLimits

0xf0b9,	// (0x0001e4f0) cell_ai5_widget_pane_t9_ParamLimits

0xf0b9,	// (0x0001e4f0) cell_ai5_widget_pane_t9

0x1db0,	// (0x000111e7) main_fep_fshwr2_pane

0xf1ba,	// (0x0001e5f1) aid_fshwr2_btn_pane

0xf1c2,	// (0x0001e5f9) aid_fshwr2_syb_pane

0xf1ca,	// (0x0001e601) aid_fshwr2_txt_pane

0xf1d2,	// (0x0001e609) fshwr2_func_candi_pane

0xf1dc,	// (0x0001e613) fshwr2_hwr_syb_pane

0xf1ea,	// (0x0001e621) fshwr2_icf_pane

0x1db0,	// (0x000111e7) fshwr2_icf_bg_pane

0xf1f4,	// (0x0001e62b) fshwr2_icf_pane_t1_ParamLimits

0xf1f4,	// (0x0001e62b) fshwr2_icf_pane_t1

0x7318,	// (0x0001674f) fshwr2_func_candi_pane_g1

0xa0fa,	// (0x00019531) fshwr2_func_candi_row_pane_ParamLimits

0xa0fa,	// (0x00019531) fshwr2_func_candi_row_pane

0xf20c,	// (0x0001e643) cell_fshwr2_syb_pane_ParamLimits

0xf20c,	// (0x0001e643) cell_fshwr2_syb_pane

0x75aa,	// (0x000169e1) fshwr2_hwr_syb_pane_g1_ParamLimits

0x75aa,	// (0x000169e1) fshwr2_hwr_syb_pane_g1

0x1db0,	// (0x000111e7) bg_popup_call_pane_cp01

0xa125,	// (0x0001955c) fshwr2_func_candi_cell_pane_ParamLimits

0xa125,	// (0x0001955c) fshwr2_func_candi_cell_pane

0xa156,	// (0x0001958d) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa156,	// (0x0001958d) fshwr2_func_candi_cell_bg_pane

0xa170,	// (0x000195a7) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa170,	// (0x000195a7) fshwr2_func_candi_cell_pane_g1

0xa198,	// (0x000195cf) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa198,	// (0x000195cf) fshwr2_func_candi_cell_pane_t1

0x1db0,	// (0x000111e7) bg_button_pane_cp08

0x3ada,	// (0x00012f11) cell_fshwr2_syb_bg_pane

0xf226,	// (0x0001e65d) cell_fshwr2_syb_bg_pane_g1

0xf22e,	// (0x0001e665) cell_fshwr2_syb_bg_pane_t1

0x2c8b,	// (0x000120c2) main_tmo_pane

0xd740,	// (0x0001cb77) uni_indicator_pane_g1_ParamLimits

0xd755,	// (0x0001cb8c) uni_indicator_pane_g2_ParamLimits

0xd76a,	// (0x0001cba1) uni_indicator_pane_g3_ParamLimits

0x5bc7,	// (0x00014ffe) uni_indicator_pane_g4_ParamLimits

0x5bc7,	// (0x00014ffe) uni_indicator_pane_g4

0x5bdb,	// (0x00015012) uni_indicator_pane_g5_ParamLimits

0x5bdb,	// (0x00015012) uni_indicator_pane_g5

0x5bef,	// (0x00015026) uni_indicator_pane_g6_ParamLimits

0x5bef,	// (0x00015026) uni_indicator_pane_g6

0xf928,	// (0x0001ed5f) uni_indicator_pane_g_ParamLimits

0xe40b,	// (0x0001d842) popup_tmo_note_window_ParamLimits

0xe40b,	// (0x0001d842) popup_tmo_note_window

0x1db0,	// (0x000111e7) fshwr2_bg_pane

0xa189,	// (0x000195c0) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa189,	// (0x000195c0) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebf,	// (0x0001f2f6) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebf,	// (0x0001f2f6) fshwr2_func_candi_cell_pane_g

0x7318,	// (0x0001674f) bg_popup_window_pane_cp01

0xa1c2,	// (0x000195f9) bg_popup_window_pane_g1_cp01

0xa1cb,	// (0x00019602) bg_popup_window_pane_cp22_ParamLimits

0xa1cb,	// (0x00019602) bg_popup_window_pane_cp22

0xa1d9,	// (0x00019610) listscroll_tmo_link_pane_ParamLimits

0xa1d9,	// (0x00019610) listscroll_tmo_link_pane

0xa219,	// (0x00019650) popup_tmo_note_window_g1_ParamLimits

0xa219,	// (0x00019650) popup_tmo_note_window_g1

0xa226,	// (0x0001965d) tmo_note_info_pane_ParamLimits

0xa226,	// (0x0001965d) tmo_note_info_pane

0xf23d,	// (0x0001e674) list_tmo_note_info_pane_g1_ParamLimits

0xf23d,	// (0x0001e674) list_tmo_note_info_pane_g1

0xa257,	// (0x0001968e) list_tmo_note_info_pane_g2_ParamLimits

0xa257,	// (0x0001968e) list_tmo_note_info_pane_g2

0x0001,

0xfec4,	// (0x0001f2fb) list_tmo_note_info_pane_g_ParamLimits

0xfec4,	// (0x0001f2fb) list_tmo_note_info_pane_g

0xa273,	// (0x000196aa) list_tmo_note_info_text_pane_ParamLimits

0xa273,	// (0x000196aa) list_tmo_note_info_text_pane

0xa2f4,	// (0x0001972b) list_tmo_link_pane

0xa301,	// (0x00019738) scroll_pane_cp20

0xa30e,	// (0x00019745) list_single_tmo_link_pane_ParamLimits

0xa30e,	// (0x00019745) list_single_tmo_link_pane

0xa31e,	// (0x00019755) list_single_tmo_link_pane_t1

0xa32c,	// (0x00019763) list_tmo_note_info_text_pane_t1_ParamLimits

0xa32c,	// (0x00019763) list_tmo_note_info_text_pane_t1

0xc6ea,	// (0x0001bb21) aid_size_touch_scroll_bar_cp01_ParamLimits

0xc6ea,	// (0x0001bb21) aid_size_touch_scroll_bar_cp01

0xc5e1,	// (0x0001ba18) aid_size_touch_slider_marker

0xb579,	// (0x0001a9b0) popup_settings_window_ParamLimits

0xb579,	// (0x0001a9b0) popup_settings_window

0x3e8c,	// (0x000132c3) popup_candi_list_indi_window

0x4465,	// (0x0001389c) aid_touch_navi_pane_ParamLimits

0x151e,	// (0x00010955) rs_clock_indi_pane

0x1527,	// (0x0001095e) sctrl_sk_bottom_pane_ParamLimits

0x1538,	// (0x0001096f) sctrl_sk_top_pane_ParamLimits

0x163e,	// (0x00010a75) popup_fep_tooltip_window

0x9bdb,	// (0x00019012) aid_size_cell_widget_grid_ParamLimits

0xef7a,	// (0x0001e3b1) cell_ai5_widget_pane_g1_ParamLimits

0xef7a,	// (0x0001e3b1) cell_ai5_widget_pane_g1

0xefcd,	// (0x0001e404) cell_ai5_widget_pane_g6_ParamLimits

0xefd9,	// (0x0001e410) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe42,	// (0x0001f279) cell_ai5_widget_pane_g_ParamLimits

0xfe42,	// (0x0001f279) cell_ai5_widget_pane_g

0xf0dd,	// (0x0001e514) cell_ai5_widget_pane_t10_ParamLimits

0xf0dd,	// (0x0001e514) cell_ai5_widget_pane_t10

0xf0f3,	// (0x0001e52a) grid_ai5_widget_pane_ParamLimits

0x9e51,	// (0x00019288) cell_contacts_ai5_widget_pane_ParamLimits

0x9e51,	// (0x00019288) cell_contacts_ai5_widget_pane

0xa03c,	// (0x00019473) popup_discreet_window_t3_ParamLimits

0xa03c,	// (0x00019473) popup_discreet_window_t3

0xa0cf,	// (0x00019506) popup_fshwr2_char_preview_window_ParamLimits

0xa0cf,	// (0x00019506) popup_fshwr2_char_preview_window

0xf254,	// (0x0001e68b) tmo_note_info_pane_t1

0xf269,	// (0x0001e6a0) tmo_note_info_pane_t2

0xf280,	// (0x0001e6b7) tmo_note_info_pane_t3

0xa2d0,	// (0x00019707) tmo_note_info_pane_t4

0xa2e2,	// (0x00019719) tmo_note_info_pane_t5

0x0004,

0xfec9,	// (0x0001f300) tmo_note_info_pane_t

0xa2f4,	// (0x0001972b) list_tmo_link_pane_ParamLimits

0xa301,	// (0x00019738) scroll_pane_cp20_ParamLimits

0x1db0,	// (0x000111e7) bg_popup_fep_char_preview_window_cp01

0xa345,	// (0x0001977c) popup_fshwr2_char_preview_window_t1

0xa353,	// (0x0001978a) popup_candi_list_indi_window_g1

0xa35c,	// (0x00019793) bg_cell_contacts_ai5_widget_pane

0xa368,	// (0x0001979f) cell_contacts_ai5_widget_pane_g1

0xa37c,	// (0x000197b3) cell_contacts_ai5_widget_pane_g2

0xa38b,	// (0x000197c2) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed4,	// (0x0001f30b) cell_contacts_ai5_widget_pane_g

0xa39e,	// (0x000197d5) cell_contacts_ai5_widget_pane_t1

0x2c8b,	// (0x000120c2) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf2fa,	// (0x0001e731) settings_container_pane

0x3ada,	// (0x00012f11) listscroll_set_pane_copy1

0x67f7,	// (0x00015c2e) scroll_pane_cp121_copy1

0xa424,	// (0x0001985b) set_content_pane_copy1

0xf306,	// (0x0001e73d) aid_height_set_list_copy1_ParamLimits

0xf306,	// (0x0001e73d) aid_height_set_list_copy1

0x5e0f,	// (0x00015246) aid_size_parent_copy1_ParamLimits

0x5e0f,	// (0x00015246) aid_size_parent_copy1

0xf312,	// (0x0001e749) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf312,	// (0x0001e749) button_value_adjust_pane_cp6_copy1

0x3e64,	// (0x0001329b) list_highlight_pane_cp2_copy1_ParamLimits

0x3e64,	// (0x0001329b) list_highlight_pane_cp2_copy1

0xf326,	// (0x0001e75d) list_set_pane_copy1_ParamLimits

0xf326,	// (0x0001e75d) list_set_pane_copy1

0xf295,	// (0x0001e6cc) main_pane_set_t1_copy1_ParamLimits

0xf295,	// (0x0001e6cc) main_pane_set_t1_copy1

0xf2cf,	// (0x0001e706) main_pane_set_t2_copy1_ParamLimits

0xf2cf,	// (0x0001e706) main_pane_set_t2_copy1

0xf3d3,	// (0x0001e80a) main_pane_set_t3_copy1

0xf3e1,	// (0x0001e818) main_pane_set_t4_copy1

0xf2ee,	// (0x0001e725) set_content_pane_g1_copy1_ParamLimits

0xf2ee,	// (0x0001e725) set_content_pane_g1_copy1

0xf3ef,	// (0x0001e826) setting_code_pane_copy1

0xa51f,	// (0x00019956) setting_slider_graphic_pane_copy1

0xa51f,	// (0x00019956) setting_slider_pane_copy1

0xa51f,	// (0x00019956) setting_text_pane_copy1

0xa529,	// (0x00019960) setting_volume_pane_copy1

0xf3f9,	// (0x0001e830) settings_code_pane_cp2_copy1

0xf401,	// (0x0001e838) settings_code_pane_cp_copy1_ParamLimits

0xf401,	// (0x0001e838) settings_code_pane_cp_copy1

0xf415,	// (0x0001e84c) volume_set_pane_copy1

0xf41d,	// (0x0001e854) volume_set_pane_g10_copy1

0xf425,	// (0x0001e85c) volume_set_pane_g1_copy1

0xf42d,	// (0x0001e864) volume_set_pane_g2_copy1

0xf435,	// (0x0001e86c) volume_set_pane_g3_copy1

0xf43d,	// (0x0001e874) volume_set_pane_g4_copy1

0xf445,	// (0x0001e87c) volume_set_pane_g5_copy1

0xf44d,	// (0x0001e884) volume_set_pane_g6_copy1

0xf455,	// (0x0001e88c) volume_set_pane_g7_copy1

0xf45d,	// (0x0001e894) volume_set_pane_g8_copy1

0xf465,	// (0x0001e89c) volume_set_pane_g9_copy1

0x1ea4,	// (0x000112db) bg_set_opt_pane_cp_copy1_ParamLimits

0x1ea4,	// (0x000112db) bg_set_opt_pane_cp_copy1

0xa5a6,	// (0x000199dd) setting_slider_pane_t1_copy1_ParamLimits

0xa5a6,	// (0x000199dd) setting_slider_pane_t1_copy1

0xf46d,	// (0x0001e8a4) setting_slider_pane_t2_copy1_ParamLimits

0xf46d,	// (0x0001e8a4) setting_slider_pane_t2_copy1

0xf487,	// (0x0001e8be) setting_slider_pane_t3_copy1_ParamLimits

0xf487,	// (0x0001e8be) setting_slider_pane_t3_copy1

0xf49f,	// (0x0001e8d6) slider_set_pane_copy1_ParamLimits

0xf49f,	// (0x0001e8d6) slider_set_pane_copy1

0x2dc3,	// (0x000121fa) set_opt_bg_pane_g1_copy2

0x2dcb,	// (0x00012202) set_opt_bg_pane_g2_copy2

0xa60c,	// (0x00019a43) set_opt_bg_pane_g3_copy2

0x2ddb,	// (0x00012212) set_opt_bg_pane_g4_copy2

0x2de3,	// (0x0001221a) set_opt_bg_pane_g5_copy2

0x2deb,	// (0x00012222) set_opt_bg_pane_g6_copy2

0xf4b5,	// (0x0001e8ec) set_opt_bg_pane_g7_copy2

0xa61e,	// (0x00019a55) set_opt_bg_pane_g8_copy2

0xa628,	// (0x00019a5f) set_opt_bg_pane_g9_copy2

0x1d5a,	// (0x00011191) aid_size_touch_slider_mark_copy1_ParamLimits

0x1d5a,	// (0x00011191) aid_size_touch_slider_mark_copy1

0xa632,	// (0x00019a69) slider_set_pane_g1_copy1

0x1d6e,	// (0x000111a5) slider_set_pane_g2_copy1

0x0f52,	// (0x00010389) slider_set_pane_g3_copy1_ParamLimits

0x0f52,	// (0x00010389) slider_set_pane_g3_copy1

0x0f66,	// (0x0001039d) slider_set_pane_g4_copy1_ParamLimits

0x0f66,	// (0x0001039d) slider_set_pane_g4_copy1

0x0f7e,	// (0x000103b5) slider_set_pane_g5_copy1_ParamLimits

0x0f7e,	// (0x000103b5) slider_set_pane_g5_copy1

0x0f52,	// (0x00010389) slider_set_pane_g6_copy1_ParamLimits

0x0f52,	// (0x00010389) slider_set_pane_g6_copy1

0xbd78,	// (0x0001b1af) slider_set_pane_g7_copy1_ParamLimits

0xbd78,	// (0x0001b1af) slider_set_pane_g7_copy1

0x1dc4,	// (0x000111fb) bg_set_opt_pane_cp2_copy1

0xa63b,	// (0x00019a72) setting_slider_graphic_pane_g1_copy1

0xf4bd,	// (0x0001e8f4) setting_slider_graphic_pane_t1_copy1

0xf4cd,	// (0x0001e904) setting_slider_graphic_pane_t2_copy1

0xf4dd,	// (0x0001e914) slider_set_pane_cp_copy1

0xa674,	// (0x00019aab) input_focus_pane_cp1_copy1

0xa67d,	// (0x00019ab4) list_set_text_pane_copy1

0xa685,	// (0x00019abc) setting_text_pane_g1_copy1

0x1efd,	// (0x00011334) set_text_pane_t1_copy1

0xa674,	// (0x00019aab) input_focus_pane_cp2_copy1

0xa685,	// (0x00019abc) setting_code_pane_g1_copy1

0xf4e5,	// (0x0001e91c) setting_code_pane_t1_copy1

0xc971,	// (0x0001bda8) list_set_graphic_pane_copy1

0x1dc4,	// (0x000111fb) bg_set_opt_pane_cp4_copy1

0xc983,	// (0x0001bdba) list_set_graphic_pane_g1_copy1_ParamLimits

0xc983,	// (0x0001bdba) list_set_graphic_pane_g1_copy1

0xf4f3,	// (0x0001e92a) list_set_graphic_pane_g2_copy1

0xc99b,	// (0x0001bdd2) list_set_graphic_pane_t1_copy1_ParamLimits

0xc99b,	// (0x0001bdd2) list_set_graphic_pane_t1_copy1

0x7318,	// (0x0001674f) rs_clock_indi_pane_g1

0xa6b6,	// (0x00019aed) rs_clock_indi_pane_t1

0x9f27,	// (0x0001935e) rs_indi_pane

0xa6c4,	// (0x00019afb) rs_indi_pane_g1

0xa6cd,	// (0x00019b04) rs_indi_pane_g2

0xa6d6,	// (0x00019b0d) rs_indi_pane_g3

0x0002,

0xfedb,	// (0x0001f312) rs_indi_pane_g

0x3ada,	// (0x00012f11) bg_popup_preview_window_pane_cp03

0xa6df,	// (0x00019b16) popup_fep_tooltip_window_t1

0x819d,	// (0x000175d4) popup_note2_window_g2_ParamLimits

0x819d,	// (0x000175d4) popup_note2_window_g2

0x0001,

0xfc74,	// (0x0001f0ab) popup_note2_window_g_ParamLimits

0xfc74,	// (0x0001f0ab) popup_note2_window_g

0x8787,	// (0x00017bbe) bg_popup_sub_pane_cp11_ParamLimits

0x8794,	// (0x00017bcb) cell_ai3_links_pane_g1_ParamLimits

0x87ab,	// (0x00017be2) cell_ai3_links_pane_t1

0x1efd,	// (0x00011334) set_text_pane_t1_copy1_ParamLimits

0x39eb,	// (0x00012e22) cell_graphic_popup_pane_cp2_ParamLimits

0x39eb,	// (0x00012e22) cell_graphic_popup_pane_cp2

0xa6ed,	// (0x00019b24) cell_graphic_popup_pane_g1_cp2

0x2475,	// (0x000118ac) cell_graphic_popup_pane_g2_cp2

0xa6f5,	// (0x00019b2c) cell_graphic_popup_pane_g3_cp2

0xa6fd,	// (0x00019b34) cell_graphic_popup_pane_t2_cp2

0x2486,	// (0x000118bd) grid_highlight_pane_cp3_cp2

0x31b2,	// (0x000125e9) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2c8b,	// (0x000120c2) main_tmo_pane_ParamLimits

0xe3ff,	// (0x0001d836) popup_tmo_big_image_note_window

0xef6a,	// (0x0001e3a1) cell_ai5_widget_list_pane

0xef72,	// (0x0001e3a9) cell_ai5_widget_lrg_icon_pane

0xf254,	// (0x0001e68b) tmo_note_info_pane_t1_ParamLimits

0xf269,	// (0x0001e6a0) tmo_note_info_pane_t2_ParamLimits

0xf280,	// (0x0001e6b7) tmo_note_info_pane_t3_ParamLimits

0xa2d0,	// (0x00019707) tmo_note_info_pane_t4_ParamLimits

0xa2e2,	// (0x00019719) tmo_note_info_pane_t5_ParamLimits

0xfec9,	// (0x0001f300) tmo_note_info_pane_t_ParamLimits

0xf2fa,	// (0x0001e731) settings_container_pane_ParamLimits

0xa66c,	// (0x00019aa3) indicator_popup_pane_cp5

0xa66c,	// (0x00019aa3) indicator_popup_pane_cp6

0xc971,	// (0x0001bda8) list_set_graphic_pane_copy1_ParamLimits

0x1db0,	// (0x000111e7) bg_popup_window_pane_cp23

0xa70b,	// (0x00019b42) popup_tmo_big_image_note_window_g1

0xa715,	// (0x00019b4c) popup_tmo_big_image_note_window_t1

0xa725,	// (0x00019b5c) popup_tmo_big_image_note_window_t2

0xa735,	// (0x00019b6c) popup_tmo_big_image_note_window_t3

0x0002,

0xfee2,	// (0x0001f319) popup_tmo_big_image_note_window_t

0xf4fb,	// (0x0001e932) cell_ai5_widget_lrg_icon_pane_g1

0xf503,	// (0x0001e93a) cell_ai5_widget_lrg_icon_pane_t1

0xf511,	// (0x0001e948) cell_ai5_widget_list_row_pane_ParamLimits

0xf511,	// (0x0001e948) cell_ai5_widget_list_row_pane

0xf52a,	// (0x0001e961) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf52a,	// (0x0001e961) cell_ai5_widget_list_row_pane_g1

0xf537,	// (0x0001e96e) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf537,	// (0x0001e96e) cell_ai5_widget_list_row_pane_t1

0xf54f,	// (0x0001e986) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf54f,	// (0x0001e986) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee9,	// (0x0001f320) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee9,	// (0x0001f320) cell_ai5_widget_list_row_pane_t

0x0310,	// (0x0000f747) main_fep_vtchi_ss_pane

0xa7ab,	// (0x00019be2) popup_fep_char_pre_window

0xa7b3,	// (0x00019bea) popup_fep_ituss_window

0xa7d4,	// (0x00019c0b) popup_fep_vkbss_window

0xa7f3,	// (0x00019c2a) grid_vkbss_keypad_pane_ParamLimits

0xa7f3,	// (0x00019c2a) grid_vkbss_keypad_pane

0xa803,	// (0x00019c3a) ituss_keypad_pane

0xa81c,	// (0x00019c53) aid_vkbss_key_offset_ParamLimits

0xa81c,	// (0x00019c53) aid_vkbss_key_offset

0xa828,	// (0x00019c5f) cell_vkbss_key_pane_ParamLimits

0xa828,	// (0x00019c5f) cell_vkbss_key_pane

0xa83e,	// (0x00019c75) bg_cell_vkbss_key_g1_ParamLimits

0xa83e,	// (0x00019c75) bg_cell_vkbss_key_g1

0xa84a,	// (0x00019c81) cell_vkbss_key_3p_pane_ParamLimits

0xa84a,	// (0x00019c81) cell_vkbss_key_3p_pane

0xa864,	// (0x00019c9b) cell_vkbss_key_g1_ParamLimits

0xa864,	// (0x00019c9b) cell_vkbss_key_g1

0xa87e,	// (0x00019cb5) cell_vkbss_key_t1_ParamLimits

0xa87e,	// (0x00019cb5) cell_vkbss_key_t1

0xa8a9,	// (0x00019ce0) cell_ituss_key_pane_ParamLimits

0xa8a9,	// (0x00019ce0) cell_ituss_key_pane

0xa8b9,	// (0x00019cf0) bg_cell_ituss_key_g1_ParamLimits

0xa8b9,	// (0x00019cf0) bg_cell_ituss_key_g1

0xa8c5,	// (0x00019cfc) cell_ituss_key_pane_g1_ParamLimits

0xa8c5,	// (0x00019cfc) cell_ituss_key_pane_g1

0xa8d1,	// (0x00019d08) cell_ituss_key_pane_g2_ParamLimits

0xa8d1,	// (0x00019d08) cell_ituss_key_pane_g2

0x0001,

0xfeee,	// (0x0001f325) cell_ituss_key_pane_g_ParamLimits

0xfeee,	// (0x0001f325) cell_ituss_key_pane_g

0xa8ea,	// (0x00019d21) cell_ituss_key_t1_ParamLimits

0xa8ea,	// (0x00019d21) cell_ituss_key_t1

0xa918,	// (0x00019d4f) cell_ituss_key_t2_ParamLimits

0xa918,	// (0x00019d4f) cell_ituss_key_t2

0xa949,	// (0x00019d80) cell_ituss_key_t3_ParamLimits

0xa949,	// (0x00019d80) cell_ituss_key_t3

0xa97a,	// (0x00019db1) cell_ituss_key_t4_ParamLimits

0xa97a,	// (0x00019db1) cell_ituss_key_t4

0x0003,

0xfef3,	// (0x0001f32a) cell_ituss_key_t_ParamLimits

0xfef3,	// (0x0001f32a) cell_ituss_key_t

0xa9ab,	// (0x00019de2) cell_vkbss_key_3p_pane_g1

0xa9b3,	// (0x00019dea) cell_vkbss_key_3p_pane_g2

0xa9bb,	// (0x00019df2) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefc,	// (0x0001f333) cell_vkbss_key_3p_pane_g

0x1db0,	// (0x000111e7) bg_popup_fep_char_preview_window_cp02

0xa9c3,	// (0x00019dfa) popup_fep_char_pre_window_t1

0xef60,	// (0x0001e397) main_ai5_sk_pane

0xa35c,	// (0x00019793) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa368,	// (0x0001979f) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa37c,	// (0x000197b3) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa38b,	// (0x000197c2) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed4,	// (0x0001f30b) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa39e,	// (0x000197d5) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2c8b,	// (0x000120c2) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf561,	// (0x0001e998) main_ai5_sk_pane_g1

0x4eaa,	// (0x000142e1) popup_query_code_window_g1

0xa7c9,	// (0x00019c00) popup_fep_vkb_icf_pane

0xa7dd,	// (0x00019c14) popup_fep_vtchi_icf_pane

0x2c8b,	// (0x000120c2) bg_icf_pane

0xa9ea,	// (0x00019e21) list_vkb_icf_pane

0x2c8b,	// (0x000120c2) bg_icf_pane_cp01

0x8b01,	// (0x00017f38) vtchi_icf_list_pane

0xaa0a,	// (0x00019e41) list_vkb_icf_pane_t1_ParamLimits

0xaa0a,	// (0x00019e41) list_vkb_icf_pane_t1

0xaa21,	// (0x00019e58) vtchi_icf_list_pane_t1_ParamLimits

0xaa21,	// (0x00019e58) vtchi_icf_list_pane_t1

0xa7b3,	// (0x00019bea) popup_fep_ituss_window_ParamLimits

0xa7dd,	// (0x00019c14) popup_fep_vtchi_icf_pane_ParamLimits

0xa803,	// (0x00019c3a) ituss_keypad_pane_ParamLimits

0xa813,	// (0x00019c4a) ituss_sks_pane

0x2c8b,	// (0x000120c2) bg_icf_pane_ParamLimits

0xa9db,	// (0x00019e12) icf_edit_indi_pane_ParamLimits

0xa9db,	// (0x00019e12) icf_edit_indi_pane

0xa9ea,	// (0x00019e21) list_vkb_icf_pane_ParamLimits

0x2c8b,	// (0x000120c2) bg_icf_pane_cp01_ParamLimits

0xa9f6,	// (0x00019e2d) icf_edit_indi_pane_cp01_ParamLimits

0xa9f6,	// (0x00019e2d) icf_edit_indi_pane_cp01

0xaa02,	// (0x00019e39) vtchi_query_pane

0x75aa,	// (0x000169e1) icf_edit_indi_pane_g1_ParamLimits

0x75aa,	// (0x000169e1) icf_edit_indi_pane_g1

0xaa3d,	// (0x00019e74) icf_edit_indi_pane_g2_ParamLimits

0xaa3d,	// (0x00019e74) icf_edit_indi_pane_g2

0x0001,

0xff03,	// (0x0001f33a) icf_edit_indi_pane_g_ParamLimits

0xff03,	// (0x0001f33a) icf_edit_indi_pane_g

0xaa49,	// (0x00019e80) icf_edit_indi_pane_t1

0xaa57,	// (0x00019e8e) bg_input_focus_pane_cp042

0x2659,	// (0x00011a90) vtchi_button_pane

0xaa60,	// (0x00019e97) vtchi_query_pane_t1

0xaa6e,	// (0x00019ea5) vtchi_query_pane_t2

0xaa7c,	// (0x00019eb3) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x0001f33f) vtchi_query_pane_t

0x1db0,	// (0x000111e7) bg_button_pane_cp13

0xaa8a,	// (0x00019ec1) vtchi_button_pane_g1

0x9049,	// (0x00018480) ituss_sks_pane_g1

0xaa92,	// (0x00019ec9) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x0001f346) ituss_sks_pane_g

0xaa9b,	// (0x00019ed2) ituss_sks_pane_t1

0xaaa9,	// (0x00019ee0) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x0001f34b) ituss_sks_pane_t

0x6d2b,	// (0x00016162) indicator_nsta_pane_cp_g1

0x6d34,	// (0x0001616b) indicator_nsta_pane_cp_g2

0x6d3c,	// (0x00016173) indicator_nsta_pane_cp_g3

0x6d44,	// (0x0001617b) indicator_nsta_pane_cp_g4

0x6d4c,	// (0x00016183) indicator_nsta_pane_cp_g5

0x6d54,	// (0x0001618b) indicator_nsta_pane_cp_g6

0x0005,

0xfab2,	// (0x0001eee9) indicator_nsta_pane_cp_g

0xed9e,	// (0x0001e1d5) cell_graphic2_pane_t2_ParamLimits

0xed9e,	// (0x0001e1d5) cell_graphic2_pane_t2

0x0001,

0xfdcb,	// (0x0001f202) cell_graphic2_pane_t_ParamLimits

0xfdcb,	// (0x0001f202) cell_graphic2_pane_t
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal
