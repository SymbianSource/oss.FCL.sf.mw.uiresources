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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0000c9e3 };

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
0x7911,	// (0x000142f4) Screen

0x791d,	// (0x00014300) application_window_ParamLimits

0x791d,	// (0x00014300) application_window

0x3c31,	// (0x00010614) screen_g1

0x5409,	// (0x00011dec) area_bottom_pane_ParamLimits

0x5409,	// (0x00011dec) area_bottom_pane

0x54c9,	// (0x00011eac) area_top_pane_ParamLimits

0x54c9,	// (0x00011eac) area_top_pane

0x5567,	// (0x00011f4a) main_pane_ParamLimits

0x5567,	// (0x00011f4a) main_pane

0x3daa,	// (0x0001078d) misc_graphics

0x8fb5,	// (0x00015998) battery_pane_ParamLimits

0x8fb5,	// (0x00015998) battery_pane

0x9d86,	// (0x00016769) bg_status_flat_pane_g8

0x9d8e,	// (0x00016771) bg_status_flat_pane_g9

0x907d,	// (0x00015a60) context_pane_ParamLimits

0x907d,	// (0x00015a60) context_pane

0x9193,	// (0x00015b76) navi_pane_ParamLimits

0x9193,	// (0x00015b76) navi_pane

0x9217,	// (0x00015bfa) signal_pane_ParamLimits

0x9217,	// (0x00015bfa) signal_pane

0x0008,

0xf86a,	// (0x0001c24d) bg_status_flat_pane_g

0x9284,	// (0x00015c67) status_pane_g1_ParamLimits

0x9284,	// (0x00015c67) status_pane_g1

0x9298,	// (0x00015c7b) status_pane_g2_ParamLimits

0x9298,	// (0x00015c7b) status_pane_g2

0x92a4,	// (0x00015c87) status_pane_g3_ParamLimits

0x92a4,	// (0x00015c87) status_pane_g3

0x0004,

0xf791,	// (0x0001c174) status_pane_g_ParamLimits

0xf791,	// (0x0001c174) status_pane_g

0x92d8,	// (0x00015cbb) title_pane_ParamLimits

0x92d8,	// (0x00015cbb) title_pane

0x9315,	// (0x00015cf8) uni_indicator_pane_ParamLimits

0x9315,	// (0x00015cf8) uni_indicator_pane

0x8ec4,	// (0x000158a7) bg_list_pane_ParamLimits

0x8ec4,	// (0x000158a7) bg_list_pane

0x8ee4,	// (0x000158c7) find_pane

0x8eec,	// (0x000158cf) listscroll_app_pane_ParamLimits

0x8eec,	// (0x000158cf) listscroll_app_pane

0x8efd,	// (0x000158e0) listscroll_form_pane

0x5e2d,	// (0x00012810) listscroll_gen_pane_ParamLimits

0x5e2d,	// (0x00012810) listscroll_gen_pane

0x5e41,	// (0x00012824) listscroll_set_pane

0x848c,	// (0x00014e6f) main_idle_act_pane

0x8bc4,	// (0x000155a7) main_idle_trad_pane

0x8bc4,	// (0x000155a7) main_list_empty_pane

0x8f17,	// (0x000158fa) main_midp_pane

0x8f23,	// (0x00015906) main_pane_g1_ParamLimits

0x8f23,	// (0x00015906) main_pane_g1

0x5e57,	// (0x0001283a) popup_ai_message_window_ParamLimits

0x5e57,	// (0x0001283a) popup_ai_message_window

0x5efb,	// (0x000128de) popup_fep_china_uni_window_ParamLimits

0x5efb,	// (0x000128de) popup_fep_china_uni_window

0x5f55,	// (0x00012938) popup_fep_japan_candidate_window_ParamLimits

0x5f55,	// (0x00012938) popup_fep_japan_candidate_window

0x5f73,	// (0x00012956) popup_fep_japan_predictive_window_ParamLimits

0x5f73,	// (0x00012956) popup_fep_japan_predictive_window

0x5fa3,	// (0x00012986) popup_find_window

0x5fb0,	// (0x00012993) popup_grid_graphic_window_ParamLimits

0x5fb0,	// (0x00012993) popup_grid_graphic_window

0x5fda,	// (0x000129bd) popup_large_graphic_colour_window

0x6000,	// (0x000129e3) popup_menu_window_ParamLimits

0x6000,	// (0x000129e3) popup_menu_window

0x61bc,	// (0x00012b9f) popup_note_image_window

0x61a8,	// (0x00012b8b) popup_note_wait_window_ParamLimits

0x61a8,	// (0x00012b8b) popup_note_wait_window

0x61a8,	// (0x00012b8b) popup_note_window_ParamLimits

0x61a8,	// (0x00012b8b) popup_note_window

0x6212,	// (0x00012bf5) popup_query_code_window_ParamLimits

0x6212,	// (0x00012bf5) popup_query_code_window

0x6226,	// (0x00012c09) popup_query_data_code_window_ParamLimits

0x6226,	// (0x00012c09) popup_query_data_code_window

0x6243,	// (0x00012c26) popup_query_data_window_ParamLimits

0x6243,	// (0x00012c26) popup_query_data_window

0x625f,	// (0x00012c42) popup_query_sat_info_window_ParamLimits

0x625f,	// (0x00012c42) popup_query_sat_info_window

0x6298,	// (0x00012c7b) popup_snote_single_graphic_window_ParamLimits

0x6298,	// (0x00012c7b) popup_snote_single_graphic_window

0x6298,	// (0x00012c7b) popup_snote_single_text_window_ParamLimits

0x6298,	// (0x00012c7b) popup_snote_single_text_window

0x62ad,	// (0x00012c90) popup_sub_window_general

0x63dd,	// (0x00012dc0) popup_window_general_ParamLimits

0x63dd,	// (0x00012dc0) popup_window_general

0x8f39,	// (0x0001591c) power_save_pane

0x5cb7,	// (0x0001269a) control_pane_g1_ParamLimits

0x5cb7,	// (0x0001269a) control_pane_g1

0x5cde,	// (0x000126c1) control_pane_g2_ParamLimits

0x5cde,	// (0x000126c1) control_pane_g2

0x8e87,	// (0x0001586a) control_pane_g3_ParamLimits

0x8e87,	// (0x0001586a) control_pane_g3

0x0007,

0xf779,	// (0x0001c15c) control_pane_g_ParamLimits

0xf779,	// (0x0001c15c) control_pane_g

0x5d28,	// (0x0001270b) control_pane_t1_ParamLimits

0x5d28,	// (0x0001270b) control_pane_t1

0x5d7c,	// (0x0001275f) control_pane_t2_ParamLimits

0x5d7c,	// (0x0001275f) control_pane_t2

0x0002,

0xf78a,	// (0x0001c16d) control_pane_t_ParamLimits

0xf78a,	// (0x0001c16d) control_pane_t

0x8dac,	// (0x0001578f) navi_navi_volume_pane_cp1

0x8db4,	// (0x00015797) status_small_icon_pane

0x8dbc,	// (0x0001579f) status_small_pane_g1_ParamLimits

0x8dbc,	// (0x0001579f) status_small_pane_g1

0x8df0,	// (0x000157d3) status_small_pane_g2_ParamLimits

0x8df0,	// (0x000157d3) status_small_pane_g2

0x8dfc,	// (0x000157df) status_small_pane_g3_ParamLimits

0x8dfc,	// (0x000157df) status_small_pane_g3

0x8e08,	// (0x000157eb) status_small_pane_g4_ParamLimits

0x8e08,	// (0x000157eb) status_small_pane_g4

0x8e14,	// (0x000157f7) status_small_pane_g5_ParamLimits

0x8e14,	// (0x000157f7) status_small_pane_g5

0x8e22,	// (0x00015805) status_small_pane_g6_ParamLimits

0x8e22,	// (0x00015805) status_small_pane_g6

0x0007,

0xf768,	// (0x0001c14b) status_small_pane_g_ParamLimits

0xf768,	// (0x0001c14b) status_small_pane_g

0x8e51,	// (0x00015834) status_small_pane_t1

0x8e73,	// (0x00015856) status_small_wait_pane_ParamLimits

0x8e73,	// (0x00015856) status_small_wait_pane

0x8621,	// (0x00015004) aid_levels_signal_ParamLimits

0x8621,	// (0x00015004) aid_levels_signal

0x8633,	// (0x00015016) signal_pane_g1_ParamLimits

0x8633,	// (0x00015016) signal_pane_g1

0x8648,	// (0x0001502b) signal_pane_g2_ParamLimits

0x8648,	// (0x0001502b) signal_pane_g2

0x0003,

0xf6f9,	// (0x0001c0dc) signal_pane_g_ParamLimits

0xf6f9,	// (0x0001c0dc) signal_pane_g

0x4996,	// (0x00011379) context_pane_g1

0x792d,	// (0x00014310) title_pane_g1

0x7957,	// (0x0001433a) title_pane_t1

0x3de0,	// (0x000107c3) title_pane_t2

0x3e06,	// (0x000107e9) title_pane_t3

0x0002,

0xf557,	// (0x0001bf3a) title_pane_t

0x932d,	// (0x00015d10) aid_levels_battery_ParamLimits

0x932d,	// (0x00015d10) aid_levels_battery

0x9341,	// (0x00015d24) battery_pane_g1_ParamLimits

0x9341,	// (0x00015d24) battery_pane_g1

0x9357,	// (0x00015d3a) battery_pane_g2_ParamLimits

0x9357,	// (0x00015d3a) battery_pane_g2

0x0001,

0xf79c,	// (0x0001c17f) battery_pane_g_ParamLimits

0xf79c,	// (0x0001c17f) battery_pane_g

0xa6aa,	// (0x0001708d) uni_indicator_pane_g1

0xa6bd,	// (0x000170a0) uni_indicator_pane_g2

0xa6cf,	// (0x000170b2) uni_indicator_pane_g3

0x0005,

0xf912,	// (0x0001c2f5) uni_indicator_pane_g

0x8a36,	// (0x00015419) navi_icon_pane_ParamLimits

0x8a36,	// (0x00015419) navi_icon_pane

0x8980,	// (0x00015363) navi_midp_pane

0x8a52,	// (0x00015435) navi_navi_pane

0x8a5c,	// (0x0001543f) navi_text_pane_ParamLimits

0x8a5c,	// (0x0001543f) navi_text_pane

0x3c31,	// (0x00010614) status_small_wait_pane_g1

0x4071,	// (0x00010a54) status_small_wait_pane_g2

0x0001,

0xf90d,	// (0x0001c2f0) status_small_wait_pane_g

0xa3d1,	// (0x00016db4) navi_navi_icon_text_pane

0xa3d9,	// (0x00016dbc) navi_navi_pane_g1_ParamLimits

0xa3d9,	// (0x00016dbc) navi_navi_pane_g1

0xa3eb,	// (0x00016dce) navi_navi_pane_g2_ParamLimits

0xa3eb,	// (0x00016dce) navi_navi_pane_g2

0x0001,

0xf8db,	// (0x0001c2be) navi_navi_pane_g_ParamLimits

0xf8db,	// (0x0001c2be) navi_navi_pane_g

0xa3fd,	// (0x00016de0) navi_navi_tabs_pane

0xa406,	// (0x00016de9) navi_navi_text_pane

0xa3d1,	// (0x00016db4) navi_navi_volume_pane

0xa3ad,	// (0x00016d90) navi_text_pane_t1

0xa3a1,	// (0x00016d84) navi_icon_pane_g1

0xa2f4,	// (0x00016cd7) navi_navi_text_pane_t1

0x66f9,	// (0x000130dc) navi_navi_volume_pane_g1

0x6701,	// (0x000130e4) volume_small_pane

0xa25a,	// (0x00016c3d) navi_navi_icon_text_pane_g1

0xa262,	// (0x00016c45) navi_navi_icon_text_pane_t1

0x8a52,	// (0x00015435) navi_tabs_2_long_pane

0x8a52,	// (0x00015435) navi_tabs_2_pane

0x8a52,	// (0x00015435) navi_tabs_3_long_pane

0x8a52,	// (0x00015435) navi_tabs_3_pane

0x8a52,	// (0x00015435) navi_tabs_4_pane

0x66d9,	// (0x000130bc) tabs_2_active_pane_ParamLimits

0x66d9,	// (0x000130bc) tabs_2_active_pane

0x66e9,	// (0x000130cc) tabs_2_passive_pane_ParamLimits

0x66e9,	// (0x000130cc) tabs_2_passive_pane

0x66a7,	// (0x0001308a) tabs_3_active_pane_ParamLimits

0x66a7,	// (0x0001308a) tabs_3_active_pane

0x66b7,	// (0x0001309a) tabs_3_passive_pane_ParamLimits

0x66b7,	// (0x0001309a) tabs_3_passive_pane

0x66c8,	// (0x000130ab) tabs_3_passive_pane_cp_ParamLimits

0x66c8,	// (0x000130ab) tabs_3_passive_pane_cp

0x6663,	// (0x00013046) tabs_4_active_pane_ParamLimits

0x6663,	// (0x00013046) tabs_4_active_pane

0x6674,	// (0x00013057) tabs_4_passive_pane_ParamLimits

0x6674,	// (0x00013057) tabs_4_passive_pane

0x6685,	// (0x00013068) tabs_4_passive_pane_cp_ParamLimits

0x6685,	// (0x00013068) tabs_4_passive_pane_cp

0x6696,	// (0x00013079) tabs_4_passive_pane_cp2_ParamLimits

0x6696,	// (0x00013079) tabs_4_passive_pane_cp2

0x663f,	// (0x00013022) tabs_2_long_active_pane_ParamLimits

0x663f,	// (0x00013022) tabs_2_long_active_pane

0x6651,	// (0x00013034) tabs_2_long_passive_pane_ParamLimits

0x6651,	// (0x00013034) tabs_2_long_passive_pane

0x65fa,	// (0x00012fdd) tabs_3_long_active_pane_ParamLimits

0x65fa,	// (0x00012fdd) tabs_3_long_active_pane

0x6613,	// (0x00012ff6) tabs_3_long_passive_pane_ParamLimits

0x6613,	// (0x00012ff6) tabs_3_long_passive_pane

0x6626,	// (0x00013009) tabs_3_long_passive_pane_cp_ParamLimits

0x6626,	// (0x00013009) tabs_3_long_passive_pane_cp

0x65a0,	// (0x00012f83) volume_small_pane_g1

0x65a9,	// (0x00012f8c) volume_small_pane_g2

0x65b2,	// (0x00012f95) volume_small_pane_g3

0x65bb,	// (0x00012f9e) volume_small_pane_g4

0x65c4,	// (0x00012fa7) volume_small_pane_g5

0x65cd,	// (0x00012fb0) volume_small_pane_g6

0x65d6,	// (0x00012fb9) volume_small_pane_g7

0x65df,	// (0x00012fc2) volume_small_pane_g8

0x65e8,	// (0x00012fcb) volume_small_pane_g9

0x65f1,	// (0x00012fd4) volume_small_pane_g10

0x0009,

0xf8a7,	// (0x0001c28a) volume_small_pane_g

0x3e26,	// (0x00010809) bg_active_tab_pane_cp2_ParamLimits

0x3e26,	// (0x00010809) bg_active_tab_pane_cp2

0x79bf,	// (0x000143a2) tabs_3_active_pane_g1

0x79c7,	// (0x000143aa) tabs_3_active_pane_t1

0x3e26,	// (0x00010809) bg_passive_tab_pane_cp2_ParamLimits

0x3e26,	// (0x00010809) bg_passive_tab_pane_cp2

0x79bf,	// (0x000143a2) tabs_3_passive_pane_g1

0x79c7,	// (0x000143aa) tabs_3_passive_pane_t1

0x3e26,	// (0x00010809) bg_active_tab_pane_cp3_ParamLimits

0x3e26,	// (0x00010809) bg_active_tab_pane_cp3

0x79d9,	// (0x000143bc) tabs_4_active_pane_g1

0x79e1,	// (0x000143c4) tabs_4_active_pane_t1

0x3e26,	// (0x00010809) bg_passive_tab_pane_cp3_ParamLimits

0x3e26,	// (0x00010809) bg_passive_tab_pane_cp3

0x79d9,	// (0x000143bc) tabs_4_1_passive_pane_g1

0x79e1,	// (0x000143c4) tabs_4_1_passive_pane_t1

0x8f17,	// (0x000158fa) list_highlight_pane_cp2

0xa924,	// (0x00017307) list_set_pane_ParamLimits

0xa924,	// (0x00017307) list_set_pane

0xa9c6,	// (0x000173a9) main_pane_set_t1_ParamLimits

0xa9c6,	// (0x000173a9) main_pane_set_t1

0xa9e6,	// (0x000173c9) main_pane_set_t2_ParamLimits

0xa9e6,	// (0x000173c9) main_pane_set_t2

0xa9fa,	// (0x000173dd) main_pane_set_t3_ParamLimits

0xa9fa,	// (0x000173dd) main_pane_set_t3

0xaa0c,	// (0x000173ef) main_pane_set_t4_ParamLimits

0xaa0c,	// (0x000173ef) main_pane_set_t4

0x0003,

0xf977,	// (0x0001c35a) main_pane_set_t_ParamLimits

0xf977,	// (0x0001c35a) main_pane_set_t

0xaa1e,	// (0x00017401) setting_code_pane

0xaa2a,	// (0x0001740d) setting_slider_graphic_pane

0xaa2a,	// (0x0001740d) setting_slider_pane

0xaa2a,	// (0x0001740d) setting_text_pane

0xaa2a,	// (0x0001740d) setting_volume_pane

0x57a8,	// (0x0001218b) volume_set_pane

0x3e26,	// (0x00010809) bg_set_opt_pane_cp

0x57b0,	// (0x00012193) setting_slider_pane_t1

0x57c9,	// (0x000121ac) setting_slider_pane_t2

0x57e3,	// (0x000121c6) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001bf41) setting_slider_pane_t

0x57fb,	// (0x000121de) slider_set_pane

0x3daa,	// (0x0001078d) bg_set_opt_pane_cp2

0x3e34,	// (0x00010817) setting_slider_graphic_pane_g1

0x5811,	// (0x000121f4) setting_slider_graphic_pane_t1

0x5821,	// (0x00012204) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001bf48) setting_slider_graphic_pane_t

0x5831,	// (0x00012214) slider_set_pane_cp

0x3daa,	// (0x0001078d) input_focus_pane_cp1

0xa8e3,	// (0x000172c6) list_set_text_pane

0x3c31,	// (0x00010614) setting_text_pane_g1

0x3daa,	// (0x0001078d) input_focus_pane_cp2

0x3c31,	// (0x00010614) setting_code_pane_g1

0x3e3d,	// (0x00010820) setting_code_pane_t1

0x3e4b,	// (0x0001082e) set_text_pane_t1_ParamLimits

0x3e4b,	// (0x0001082e) set_text_pane_t1

0x4322,	// (0x00010d05) set_opt_bg_pane_g1

0x432a,	// (0x00010d0d) set_opt_bg_pane_g2

0xa8bd,	// (0x000172a0) set_opt_bg_pane_g3

0x433a,	// (0x00010d1d) set_opt_bg_pane_g4

0x4342,	// (0x00010d25) set_opt_bg_pane_g5

0x434a,	// (0x00010d2d) set_opt_bg_pane_g6

0xa8c7,	// (0x000172aa) set_opt_bg_pane_g7

0xa8cf,	// (0x000172b2) set_opt_bg_pane_g8

0xa8d9,	// (0x000172bc) set_opt_bg_pane_g9

0x0008,

0xf964,	// (0x0001c347) set_opt_bg_pane_g

0xa8b0,	// (0x00017293) slider_set_pane_g1

0x676e,	// (0x00013151) slider_set_pane_g2

0x0006,

0xf955,	// (0x0001c338) slider_set_pane_g

0x670a,	// (0x000130ed) volume_set_pane_g1

0x6712,	// (0x000130f5) volume_set_pane_g2

0x671a,	// (0x000130fd) volume_set_pane_g3

0x6722,	// (0x00013105) volume_set_pane_g4

0x672a,	// (0x0001310d) volume_set_pane_g5

0x6732,	// (0x00013115) volume_set_pane_g6

0x673a,	// (0x0001311d) volume_set_pane_g7

0x6742,	// (0x00013125) volume_set_pane_g8

0x674a,	// (0x0001312d) volume_set_pane_g9

0x6752,	// (0x00013135) volume_set_pane_g10

0x0009,

0xf92d,	// (0x0001c310) volume_set_pane_g

0x79f3,	// (0x000143d6) indicator_pane_ParamLimits

0x79f3,	// (0x000143d6) indicator_pane

0x79ff,	// (0x000143e2) main_idle_pane_g2_ParamLimits

0x79ff,	// (0x000143e2) main_idle_pane_g2

0x7a27,	// (0x0001440a) main_pane_idle_g1_ParamLimits

0x7a27,	// (0x0001440a) main_pane_idle_g1

0x3e65,	// (0x00010848) popup_clock_digital_analogue_window_ParamLimits

0x3e65,	// (0x00010848) popup_clock_digital_analogue_window

0x7a34,	// (0x00014417) soft_indicator_pane_ParamLimits

0x7a34,	// (0x00014417) soft_indicator_pane

0x7a40,	// (0x00014423) wallpaper_pane_ParamLimits

0x7a40,	// (0x00014423) wallpaper_pane

0x3c31,	// (0x00010614) wallpaper_pane_g1

0x7a4c,	// (0x0001442f) indicator_pane_g1_ParamLimits

0x7a4c,	// (0x0001442f) indicator_pane_g1

0xadb6,	// (0x00017799) navi_navi_icon_text_pane_srt_g1

0x3e93,	// (0x00010876) soft_indicator_pane_t1

0x3ead,	// (0x00010890) aid_ps_area_pane

0x7a58,	// (0x0001443b) aid_ps_clock_pane

0x3ebe,	// (0x000108a1) aid_ps_indicator_pane

0x3eca,	// (0x000108ad) indicator_ps_pane_ParamLimits

0x3eca,	// (0x000108ad) indicator_ps_pane

0x3ed9,	// (0x000108bc) power_save_pane_g1_ParamLimits

0x3ed9,	// (0x000108bc) power_save_pane_g1

0x3ee5,	// (0x000108c8) power_save_pane_g2_ParamLimits

0x3ee5,	// (0x000108c8) power_save_pane_g2

0x53bd,	// (0x00011da0) aid_navinavi_width_pane

0x3ead,	// (0x00010890) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001bf4d) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001bf4d) power_save_pane_g

0x3ef3,	// (0x000108d6) power_save_pane_t1_ParamLimits

0x3ef3,	// (0x000108d6) power_save_pane_t1

0x7a58,	// (0x0001443b) aid_ps_clock_pane_ParamLimits

0x3ebe,	// (0x000108a1) aid_ps_indicator_pane_ParamLimits

0x3f05,	// (0x000108e8) power_save_pane_t4_ParamLimits

0x3f05,	// (0x000108e8) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001bf52) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001bf52) power_save_pane_t

0x3f2f,	// (0x00010912) power_save_t3_ParamLimits

0x3f2f,	// (0x00010912) power_save_t3

0x3f1a,	// (0x000108fd) power_save_t2_ParamLimits

0x3f1a,	// (0x000108fd) power_save_t2

0x3f44,	// (0x00010927) indicator_ps_pane_g1

0x7a66,	// (0x00014449) ai_gene_pane_ParamLimits

0x7a66,	// (0x00014449) ai_gene_pane

0x7a72,	// (0x00014455) ai_links_pane_ParamLimits

0x7a72,	// (0x00014455) ai_links_pane

0x7a7e,	// (0x00014461) indicator_pane_cp1_ParamLimits

0x7a7e,	// (0x00014461) indicator_pane_cp1

0x7a8a,	// (0x0001446d) main_pane_idle_g1_cp_ParamLimits

0x7a8a,	// (0x0001446d) main_pane_idle_g1_cp

0x7a96,	// (0x00014479) popup_ai_links_title_window

0x7a9f,	// (0x00014482) soft_indicator_pane_cp1_ParamLimits

0x7a9f,	// (0x00014482) soft_indicator_pane_cp1

0xa698,	// (0x0001707b) ai_links_pane_g1

0xa6a1,	// (0x00017084) grid_ai_links_pane

0xa67b,	// (0x0001705e) ai_gene_pane_1

0xa686,	// (0x00017069) ai_gene_pane_2

0xa68f,	// (0x00017072) list_highlight_pane_cp4

0xa65f,	// (0x00017042) cell_ai_link_pane_ParamLimits

0xa65f,	// (0x00017042) cell_ai_link_pane

0xa657,	// (0x0001703a) cell_ai_link_pane_g1

0x4071,	// (0x00010a54) cell_ai_link_pane_g2

0x0001,

0xf908,	// (0x0001c2eb) cell_ai_link_pane_g

0x3daa,	// (0x0001078d) grid_highlight_cp2

0x3daa,	// (0x0001078d) bg_popup_sub_pane_cp1

0x3f5b,	// (0x0001093e) popup_ai_links_title_window_t1

0xa5a7,	// (0x00016f8a) ai_gene_pane_1_g1_ParamLimits

0xa5a7,	// (0x00016f8a) ai_gene_pane_1_g1

0xa5b3,	// (0x00016f96) ai_gene_pane_1_g2_ParamLimits

0xa5b3,	// (0x00016f96) ai_gene_pane_1_g2

0x0001,

0xf8fe,	// (0x0001c2e1) ai_gene_pane_1_g_ParamLimits

0xf8fe,	// (0x0001c2e1) ai_gene_pane_1_g

0xa5c0,	// (0x00016fa3) ai_gene_pane_1_t1_ParamLimits

0xa5c0,	// (0x00016fa3) ai_gene_pane_1_t1

0xa5f4,	// (0x00016fd7) grid_ai_soft_ind_pane

0xa592,	// (0x00016f75) ai_gene_pane_2_t1_ParamLimits

0xa592,	// (0x00016f75) ai_gene_pane_2_t1

0x7aab,	// (0x0001448e) main_pane_empty_t1_ParamLimits

0x7aab,	// (0x0001448e) main_pane_empty_t1

0x7ac3,	// (0x000144a6) main_pane_empty_t2_ParamLimits

0x7ac3,	// (0x000144a6) main_pane_empty_t2

0x7ad8,	// (0x000144bb) main_pane_empty_t3_ParamLimits

0x7ad8,	// (0x000144bb) main_pane_empty_t3

0x7aea,	// (0x000144cd) main_pane_empty_t4_ParamLimits

0x7aea,	// (0x000144cd) main_pane_empty_t4

0x7afc,	// (0x000144df) main_pane_empty_t5_ParamLimits

0x7afc,	// (0x000144df) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001bf57) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001bf57) main_pane_empty_t

0x4373,	// (0x00010d56) bg_popup_window_pane_ParamLimits

0x4373,	// (0x00010d56) bg_popup_window_pane

0xa302,	// (0x00016ce5) find_popup_pane_cp2_ParamLimits

0xa302,	// (0x00016ce5) find_popup_pane_cp2

0xa30e,	// (0x00016cf1) heading_pane_ParamLimits

0xa30e,	// (0x00016cf1) heading_pane

0x3daa,	// (0x0001078d) bg_popup_sub_pane

0xa27c,	// (0x00016c5f) bg_popup_window_pane_g1_ParamLimits

0xa27c,	// (0x00016c5f) bg_popup_window_pane_g1

0xa288,	// (0x00016c6b) bg_popup_window_pane_g2_ParamLimits

0xa288,	// (0x00016c6b) bg_popup_window_pane_g2

0xa294,	// (0x00016c77) bg_popup_window_pane_g3_ParamLimits

0xa294,	// (0x00016c77) bg_popup_window_pane_g3

0xa2a0,	// (0x00016c83) bg_popup_window_pane_g4_ParamLimits

0xa2a0,	// (0x00016c83) bg_popup_window_pane_g4

0xa2ac,	// (0x00016c8f) bg_popup_window_pane_g5_ParamLimits

0xa2ac,	// (0x00016c8f) bg_popup_window_pane_g5

0xa2b8,	// (0x00016c9b) bg_popup_window_pane_g6_ParamLimits

0xa2b8,	// (0x00016c9b) bg_popup_window_pane_g6

0xa2c4,	// (0x00016ca7) bg_popup_window_pane_g7_ParamLimits

0xa2c4,	// (0x00016ca7) bg_popup_window_pane_g7

0xa2d0,	// (0x00016cb3) bg_popup_window_pane_g8_ParamLimits

0xa2d0,	// (0x00016cb3) bg_popup_window_pane_g8

0xa2dc,	// (0x00016cbf) bg_popup_window_pane_g9_ParamLimits

0xa2dc,	// (0x00016cbf) bg_popup_window_pane_g9

0xa2e8,	// (0x00016ccb) bg_popup_window_pane_g10_ParamLimits

0xa2e8,	// (0x00016ccb) bg_popup_window_pane_g10

0x0009,

0xf8c6,	// (0x0001c2a9) bg_popup_window_pane_g_ParamLimits

0xf8c6,	// (0x0001c2a9) bg_popup_window_pane_g

0xa211,	// (0x00016bf4) bg_popup_heading_pane_ParamLimits

0xa211,	// (0x00016bf4) bg_popup_heading_pane

0x67f6,	// (0x000131d9) tabs_4_passive_pane_cp_srt_ParamLimits

0x67f6,	// (0x000131d9) tabs_4_passive_pane_cp_srt

0x6808,	// (0x000131eb) tabs_4_passive_pane_srt_ParamLimits

0xa225,	// (0x00016c08) heading_pane_g2

0x6808,	// (0x000131eb) tabs_4_passive_pane_srt

0x8f17,	// (0x000158fa) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8f17,	// (0x000158fa) bg_passive_tab_pane_cp3_srt

0xa22d,	// (0x00016c10) heading_pane_t1_ParamLimits

0xa22d,	// (0x00016c10) heading_pane_t1

0xa244,	// (0x00016c27) heading_pane_t2_ParamLimits

0xa244,	// (0x00016c27) heading_pane_t2

0x0001,

0xf8c1,	// (0x0001c2a4) heading_pane_t_ParamLimits

0xf8c1,	// (0x0001c2a4) heading_pane_t

0x9d4e,	// (0x00016731) bg_popup_heading_pane_g1

0x9dfd,	// (0x000167e0) bg_popup_heading_pane_g2

0x9e07,	// (0x000167ea) bg_popup_heading_pane_g3

0x9e11,	// (0x000167f4) bg_popup_heading_pane_g4

0x9e1b,	// (0x000167fe) bg_popup_heading_pane_g5

0x9e25,	// (0x00016808) bg_popup_heading_pane_g6

0x9e2d,	// (0x00016810) bg_popup_heading_pane_g7

0x9e35,	// (0x00016818) bg_popup_heading_pane_g8

0x9e3f,	// (0x00016822) bg_popup_heading_pane_g9

0x0008,

0xf87d,	// (0x0001c260) bg_popup_heading_pane_g

0x944e,	// (0x00015e31) bg_popup_sub_pane_g1

0x945e,	// (0x00015e41) bg_popup_sub_pane_g2

0x9456,	// (0x00015e39) bg_popup_sub_pane_g3

0x946e,	// (0x00015e51) bg_popup_sub_pane_g4

0x9466,	// (0x00015e49) bg_popup_sub_pane_g5

0x9476,	// (0x00015e59) bg_popup_sub_pane_g6

0x947e,	// (0x00015e61) bg_popup_sub_pane_g7

0x948e,	// (0x00015e71) bg_popup_sub_pane_g8

0x9486,	// (0x00015e69) bg_popup_sub_pane_g9

0x0008,

0xf857,	// (0x0001c23a) bg_popup_sub_pane_g

0x3e18,	// (0x000107fb) bg_popup_window_pane_cp5_ParamLimits

0x3e18,	// (0x000107fb) bg_popup_window_pane_cp5

0x3f78,	// (0x0001095b) popup_note_window_g1_ParamLimits

0x3f78,	// (0x0001095b) popup_note_window_g1

0x3f84,	// (0x00010967) popup_note_window_t1_ParamLimits

0x3f84,	// (0x00010967) popup_note_window_t1

0x3f9a,	// (0x0001097d) popup_note_window_t2_ParamLimits

0x3f9a,	// (0x0001097d) popup_note_window_t2

0x3fb0,	// (0x00010993) popup_note_window_t3_ParamLimits

0x3fb0,	// (0x00010993) popup_note_window_t3

0x3fc6,	// (0x000109a9) popup_note_window_t4_ParamLimits

0x3fc6,	// (0x000109a9) popup_note_window_t4

0x3fee,	// (0x000109d1) popup_note_window_t5_ParamLimits

0x3fee,	// (0x000109d1) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001bf62) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001bf62) popup_note_window_t

0x4012,	// (0x000109f5) bg_popup_window_pane_cp6_ParamLimits

0x4012,	// (0x000109f5) bg_popup_window_pane_cp6

0x9cca,	// (0x000166ad) popup_note_image_window_g1_ParamLimits

0x9cca,	// (0x000166ad) popup_note_image_window_g1

0x9cd6,	// (0x000166b9) popup_note_image_window_g2_ParamLimits

0x9cd6,	// (0x000166b9) popup_note_image_window_g2

0x0001,

0xf84b,	// (0x0001c22e) popup_note_image_window_g_ParamLimits

0xf84b,	// (0x0001c22e) popup_note_image_window_g

0x9cef,	// (0x000166d2) popup_note_image_window_t1_ParamLimits

0x9cef,	// (0x000166d2) popup_note_image_window_t1

0x9d08,	// (0x000166eb) popup_note_image_window_t2_ParamLimits

0x9d08,	// (0x000166eb) popup_note_image_window_t2

0x9d21,	// (0x00016704) popup_note_image_window_t3_ParamLimits

0x9d21,	// (0x00016704) popup_note_image_window_t3

0x0002,

0xf850,	// (0x0001c233) popup_note_image_window_t_ParamLimits

0xf850,	// (0x0001c233) popup_note_image_window_t

0x9b93,	// (0x00016576) bg_popup_window_pane_cp7_ParamLimits

0x9b93,	// (0x00016576) bg_popup_window_pane_cp7

0x9bc3,	// (0x000165a6) popup_note_wait_window_g1_ParamLimits

0x9bc3,	// (0x000165a6) popup_note_wait_window_g1

0x9bcf,	// (0x000165b2) popup_note_wait_window_g2_ParamLimits

0x9bcf,	// (0x000165b2) popup_note_wait_window_g2

0x0002,

0xf839,	// (0x0001c21c) popup_note_wait_window_g_ParamLimits

0xf839,	// (0x0001c21c) popup_note_wait_window_g

0x9be7,	// (0x000165ca) popup_note_wait_window_t1_ParamLimits

0x9be7,	// (0x000165ca) popup_note_wait_window_t1

0x9c0e,	// (0x000165f1) popup_note_wait_window_t2_ParamLimits

0x9c0e,	// (0x000165f1) popup_note_wait_window_t2

0x9c2b,	// (0x0001660e) popup_note_wait_window_t3_ParamLimits

0x9c2b,	// (0x0001660e) popup_note_wait_window_t3

0x9c3e,	// (0x00016621) popup_note_wait_window_t4_ParamLimits

0x9c3e,	// (0x00016621) popup_note_wait_window_t4

0x0004,

0xf840,	// (0x0001c223) popup_note_wait_window_t_ParamLimits

0xf840,	// (0x0001c223) popup_note_wait_window_t

0x9c63,	// (0x00016646) wait_bar_pane_ParamLimits

0x9c63,	// (0x00016646) wait_bar_pane

0x3daa,	// (0x0001078d) wait_anim_pane

0x3daa,	// (0x0001078d) wait_border_pane

0x3c31,	// (0x00010614) wait_anim_pane_g1

0x3c31,	// (0x00010614) wait_anim_pane_g2

0x0001,

0xf6f4,	// (0x0001c0d7) wait_anim_pane_g

0x9b3f,	// (0x00016522) wait_border_pane_g1

0x9b4a,	// (0x0001652d) wait_border_pane_g2

0x9b53,	// (0x00016536) wait_border_pane_g3

0x0002,

0xf832,	// (0x0001c215) wait_border_pane_g

0x99aa,	// (0x0001638d) bg_popup_window_pane_cp16_ParamLimits

0x99aa,	// (0x0001638d) bg_popup_window_pane_cp16

0x9aaa,	// (0x0001648d) indicator_popup_pane_cp4_ParamLimits

0x9aaa,	// (0x0001648d) indicator_popup_pane_cp4

0x9abe,	// (0x000164a1) popup_query_data_window_t1_ParamLimits

0x9abe,	// (0x000164a1) popup_query_data_window_t1

0x9ad0,	// (0x000164b3) popup_query_data_window_t2_ParamLimits

0x9ad0,	// (0x000164b3) popup_query_data_window_t2

0x9ae9,	// (0x000164cc) popup_query_data_window_t3_ParamLimits

0x9ae9,	// (0x000164cc) popup_query_data_window_t3

0x0002,

0xf82b,	// (0x0001c20e) popup_query_data_window_t_ParamLimits

0xf82b,	// (0x0001c20e) popup_query_data_window_t

0x9b03,	// (0x000164e6) query_popup_data_pane_ParamLimits

0x9b03,	// (0x000164e6) query_popup_data_pane

0x9b17,	// (0x000164fa) query_popup_data_pane_cp1_ParamLimits

0x9b17,	// (0x000164fa) query_popup_data_pane_cp1

0x99aa,	// (0x0001638d) bg_popup_window_pane_cp10_ParamLimits

0x99aa,	// (0x0001638d) bg_popup_window_pane_cp10

0x99dc,	// (0x000163bf) indicator_popup_pane_ParamLimits

0x99dc,	// (0x000163bf) indicator_popup_pane

0x99fe,	// (0x000163e1) popup_query_code_window_t1_ParamLimits

0x99fe,	// (0x000163e1) popup_query_code_window_t1

0x9a18,	// (0x000163fb) popup_query_code_window_t2_ParamLimits

0x9a18,	// (0x000163fb) popup_query_code_window_t2

0x9a61,	// (0x00016444) popup_query_code_window_t3_ParamLimits

0x9a61,	// (0x00016444) popup_query_code_window_t3

0x0002,

0xf824,	// (0x0001c207) popup_query_code_window_t_ParamLimits

0xf824,	// (0x0001c207) popup_query_code_window_t

0x9a90,	// (0x00016473) query_popup_pane_ParamLimits

0x9a90,	// (0x00016473) query_popup_pane

0x4012,	// (0x000109f5) bg_popup_window_pane_cp15_ParamLimits

0x4012,	// (0x000109f5) bg_popup_window_pane_cp15

0x7b10,	// (0x000144f3) indicator_popup_pane_cp1_ParamLimits

0x7b10,	// (0x000144f3) indicator_popup_pane_cp1

0x7b23,	// (0x00014506) indicator_popup_pane_cp2_ParamLimits

0x7b23,	// (0x00014506) indicator_popup_pane_cp2

0x7b36,	// (0x00014519) popup_query_data_code_window_g1_ParamLimits

0x7b36,	// (0x00014519) popup_query_data_code_window_g1

0x4030,	// (0x00010a13) popup_query_data_code_window_t1_ParamLimits

0x4030,	// (0x00010a13) popup_query_data_code_window_t1

0x4042,	// (0x00010a25) popup_query_data_code_window_t2_ParamLimits

0x4042,	// (0x00010a25) popup_query_data_code_window_t2

0x7b49,	// (0x0001452c) popup_query_data_code_window_t3_ParamLimits

0x7b49,	// (0x0001452c) popup_query_data_code_window_t3

0x7b5f,	// (0x00014542) popup_query_data_code_window_t4_ParamLimits

0x7b5f,	// (0x00014542) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001bf6d) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001bf6d) popup_query_data_code_window_t

0x64b1,	// (0x00012e94) list_single_midp_graphic_pane_g3

0x7b77,	// (0x0001455a) query_popup_data_pane_cp2_ParamLimits

0x7b8a,	// (0x0001456d) query_popup_pane_cp2_ParamLimits

0x7b8a,	// (0x0001456d) query_popup_pane_cp2

0x3daa,	// (0x0001078d) bg_popup_window_pane_cp11

0x99a2,	// (0x00016385) heading_pane_cp5

0x409e,	// (0x00010a81) listscroll_popup_info_pane

0x3daa,	// (0x0001078d) input_focus_pane_cp3

0x4054,	// (0x00010a37) query_popup_pane_t1

0x4062,	// (0x00010a45) list_popup_info_pane_ParamLimits

0x4062,	// (0x00010a45) list_popup_info_pane

0x4071,	// (0x00010a54) listscroll_popup_info_pane_g1

0x4079,	// (0x00010a5c) scroll_pane_cp7

0x7b9d,	// (0x00014580) popup_info_list_pane_t1_ParamLimits

0x7b9d,	// (0x00014580) popup_info_list_pane_t1

0x7bb7,	// (0x0001459a) popup_info_list_pane_t2_ParamLimits

0x7bb7,	// (0x0001459a) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001bf76) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001bf76) popup_info_list_pane_t

0x3daa,	// (0x0001078d) bg_popup_window_pane_cp12

0xadd0,	// (0x000177b3) find_popup_pane

0x3e26,	// (0x00010809) bg_popup_window_pane_cp3

0x4083,	// (0x00010a66) heading_pane_cp3

0x408f,	// (0x00010a72) listscroll_popup_graphic_pane

0x3daa,	// (0x0001078d) bg_popup_window_pane_cp4

0x7c21,	// (0x00014604) heading_pane_cp4

0x409e,	// (0x00010a81) listscroll_popup_colour_pane

0x7c2b,	// (0x0001460e) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7c2b,	// (0x0001460e) cell_large_graphic_colour_none_popup_pane

0x7c3f,	// (0x00014622) grid_large_graphic_colour_popup_pane_ParamLimits

0x7c3f,	// (0x00014622) grid_large_graphic_colour_popup_pane

0x7c67,	// (0x0001464a) listscroll_popup_colour_pane_g1_ParamLimits

0x7c67,	// (0x0001464a) listscroll_popup_colour_pane_g1

0x7c7e,	// (0x00014661) listscroll_popup_colour_pane_g2_ParamLimits

0x7c7e,	// (0x00014661) listscroll_popup_colour_pane_g2

0x7c95,	// (0x00014678) listscroll_popup_colour_pane_g3_ParamLimits

0x7c95,	// (0x00014678) listscroll_popup_colour_pane_g3

0x7ca5,	// (0x00014688) listscroll_popup_colour_pane_g4_ParamLimits

0x7ca5,	// (0x00014688) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001bf7b) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001bf7b) listscroll_popup_colour_pane_g

0x40a6,	// (0x00010a89) scroll_pane_cp6_ParamLimits

0x40a6,	// (0x00010a89) scroll_pane_cp6

0x7cb5,	// (0x00014698) cell_large_graphic_colour_popup_pane_ParamLimits

0x7cb5,	// (0x00014698) cell_large_graphic_colour_popup_pane

0x7cd4,	// (0x000146b7) cell_large_graphic_colour_none_popup_pane_t1

0x3daa,	// (0x0001078d) grid_highlight_pane_cp5

0x40b8,	// (0x00010a9b) cell_large_graphic_colour_popup_pane_g1

0x40c0,	// (0x00010aa3) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001bf84) cell_large_graphic_colour_popup_pane_g

0x40c8,	// (0x00010aab) cell_large_graphic_colour_popup_pane_g2_copy1

0x40d1,	// (0x00010ab4) grid_highlight_pane_cp4

0x40d9,	// (0x00010abc) bg_popup_window_pane_cp8_ParamLimits

0x40d9,	// (0x00010abc) bg_popup_window_pane_cp8

0x7ce3,	// (0x000146c6) popup_snote_single_text_window_g1_ParamLimits

0x7ce3,	// (0x000146c6) popup_snote_single_text_window_g1

0x7cf5,	// (0x000146d8) popup_snote_single_text_window_t1_ParamLimits

0x7cf5,	// (0x000146d8) popup_snote_single_text_window_t1

0x7d08,	// (0x000146eb) popup_snote_single_text_window_t2_ParamLimits

0x7d08,	// (0x000146eb) popup_snote_single_text_window_t2

0x7d1b,	// (0x000146fe) popup_snote_single_text_window_t3_ParamLimits

0x7d1b,	// (0x000146fe) popup_snote_single_text_window_t3

0x7d54,	// (0x00014737) popup_snote_single_text_window_t4_ParamLimits

0x7d54,	// (0x00014737) popup_snote_single_text_window_t4

0x7d88,	// (0x0001476b) popup_snote_single_text_window_t5_ParamLimits

0x7d88,	// (0x0001476b) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001bf89) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001bf89) popup_snote_single_text_window_t

0x40f4,	// (0x00010ad7) bg_popup_window_pane_cp9_ParamLimits

0x40f4,	// (0x00010ad7) bg_popup_window_pane_cp9

0x7ce3,	// (0x000146c6) popup_snote_single_graphic_window_g1_ParamLimits

0x7ce3,	// (0x000146c6) popup_snote_single_graphic_window_g1

0x4102,	// (0x00010ae5) popup_snote_single_graphic_window_g2_ParamLimits

0x4102,	// (0x00010ae5) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001bf94) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001bf94) popup_snote_single_graphic_window_g

0x410e,	// (0x00010af1) popup_snote_single_graphic_window_t1_ParamLimits

0x410e,	// (0x00010af1) popup_snote_single_graphic_window_t1

0x4121,	// (0x00010b04) popup_snote_single_graphic_window_t2_ParamLimits

0x4121,	// (0x00010b04) popup_snote_single_graphic_window_t2

0x7db7,	// (0x0001479a) popup_snote_single_graphic_window_t3_ParamLimits

0x7db7,	// (0x0001479a) popup_snote_single_graphic_window_t3

0x7df0,	// (0x000147d3) popup_snote_single_graphic_window_t4_ParamLimits

0x7df0,	// (0x000147d3) popup_snote_single_graphic_window_t4

0x7e24,	// (0x00014807) popup_snote_single_graphic_window_t5_ParamLimits

0x7e24,	// (0x00014807) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001bf99) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001bf99) popup_snote_single_graphic_window_t

0xad12,	// (0x000176f5) grid_graphic_popup_pane_ParamLimits

0xad12,	// (0x000176f5) grid_graphic_popup_pane

0xad3c,	// (0x0001771f) listscroll_popup_graphic_pane_g1_ParamLimits

0xad3c,	// (0x0001771f) listscroll_popup_graphic_pane_g1

0xad50,	// (0x00017733) listscroll_popup_graphic_pane_g2_ParamLimits

0xad50,	// (0x00017733) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a1,	// (0x0001c384) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a1,	// (0x0001c384) listscroll_popup_graphic_pane_g

0xad64,	// (0x00017747) scroll_pane_cp5

0xacb1,	// (0x00017694) cell_graphic_popup_pane_ParamLimits

0xacb1,	// (0x00017694) cell_graphic_popup_pane

0xac92,	// (0x00017675) cell_graphic_popup_pane_g1

0xac9a,	// (0x0001767d) cell_graphic_popup_pane_g2

0x40c8,	// (0x00010aab) cell_graphic_popup_pane_g3

0x0002,

0xf99a,	// (0x0001c37d) cell_graphic_popup_pane_g

0xaca3,	// (0x00017686) cell_graphic_popup_pane_t2

0x40d1,	// (0x00010ab4) grid_highlight_pane_cp3

0x4146,	// (0x00010b29) list_gen_pane_ParamLimits

0x4146,	// (0x00010b29) list_gen_pane

0x416e,	// (0x00010b51) scroll_pane

0xabea,	// (0x000175cd) bg_list_pane_g1_ParamLimits

0xabea,	// (0x000175cd) bg_list_pane_g1

0xac07,	// (0x000175ea) bg_list_pane_g2_ParamLimits

0xac07,	// (0x000175ea) bg_list_pane_g2

0xac1c,	// (0x000175ff) bg_list_pane_g3_ParamLimits

0xac1c,	// (0x000175ff) bg_list_pane_g3

0xac30,	// (0x00017613) bg_list_pane_g4_ParamLimits

0xac30,	// (0x00017613) bg_list_pane_g4

0xac44,	// (0x00017627) bg_list_pane_g5_ParamLimits

0xac44,	// (0x00017627) bg_list_pane_g5

0x0004,

0xf98f,	// (0x0001c372) bg_list_pane_g_ParamLimits

0xf98f,	// (0x0001c372) bg_list_pane_g

0xaae3,	// (0x000174c6) list_double2_graphic_large_graphic_pane_ParamLimits

0xaae3,	// (0x000174c6) list_double2_graphic_large_graphic_pane

0xaae3,	// (0x000174c6) list_double2_graphic_pane_ParamLimits

0xaae3,	// (0x000174c6) list_double2_graphic_pane

0xaae3,	// (0x000174c6) list_double2_large_graphic_pane_ParamLimits

0xaae3,	// (0x000174c6) list_double2_large_graphic_pane

0xaae3,	// (0x000174c6) list_double2_pane_ParamLimits

0xaae3,	// (0x000174c6) list_double2_pane

0xaae3,	// (0x000174c6) list_double_graphic_heading_pane_ParamLimits

0xaae3,	// (0x000174c6) list_double_graphic_heading_pane

0xaae3,	// (0x000174c6) list_double_graphic_pane_ParamLimits

0xaae3,	// (0x000174c6) list_double_graphic_pane

0xaae3,	// (0x000174c6) list_double_heading_pane_ParamLimits

0xaae3,	// (0x000174c6) list_double_heading_pane

0xaae3,	// (0x000174c6) list_double_large_graphic_pane_ParamLimits

0xaae3,	// (0x000174c6) list_double_large_graphic_pane

0xaae3,	// (0x000174c6) list_double_number_pane_ParamLimits

0xaae3,	// (0x000174c6) list_double_number_pane

0xaae3,	// (0x000174c6) list_double_pane_ParamLimits

0xaae3,	// (0x000174c6) list_double_pane

0xaae3,	// (0x000174c6) list_double_time_pane_ParamLimits

0xaae3,	// (0x000174c6) list_double_time_pane

0xaae3,	// (0x000174c6) list_setting_number_pane_ParamLimits

0xaae3,	// (0x000174c6) list_setting_number_pane

0xaae3,	// (0x000174c6) list_setting_pane_ParamLimits

0xaae3,	// (0x000174c6) list_setting_pane

0xab4e,	// (0x00017531) list_single_2graphic_pane_ParamLimits

0xab4e,	// (0x00017531) list_single_2graphic_pane

0xab4e,	// (0x00017531) list_single_graphic_heading_pane_ParamLimits

0xab4e,	// (0x00017531) list_single_graphic_heading_pane

0xab4e,	// (0x00017531) list_single_graphic_pane_ParamLimits

0xab4e,	// (0x00017531) list_single_graphic_pane

0xab4e,	// (0x00017531) list_single_heading_pane_ParamLimits

0xab4e,	// (0x00017531) list_single_heading_pane

0xabc8,	// (0x000175ab) list_single_large_graphic_pane_ParamLimits

0xabc8,	// (0x000175ab) list_single_large_graphic_pane

0xab4e,	// (0x00017531) list_single_number_heading_pane_ParamLimits

0xab4e,	// (0x00017531) list_single_number_heading_pane

0xab4e,	// (0x00017531) list_single_number_pane_ParamLimits

0xab4e,	// (0x00017531) list_single_number_pane

0xab4e,	// (0x00017531) list_single_pane_ParamLimits

0xab4e,	// (0x00017531) list_single_pane

0x3daa,	// (0x0001078d) list_highlight_pane_cp1

0x7e69,	// (0x0001484c) list_single_pane_g1_ParamLimits

0x7e69,	// (0x0001484c) list_single_pane_g1

0x7e75,	// (0x00014858) list_single_pane_g2_ParamLimits

0x7e75,	// (0x00014858) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001bfab) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001bfab) list_single_pane_g

0xaa9c,	// (0x0001747f) list_single_pane_t1_ParamLimits

0xaa9c,	// (0x0001747f) list_single_pane_t1

0x7e69,	// (0x0001484c) list_single_number_pane_g1_ParamLimits

0x7e69,	// (0x0001484c) list_single_number_pane_g1

0x7e75,	// (0x00014858) list_single_number_pane_g2_ParamLimits

0x7e75,	// (0x00014858) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001bfab) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001bfab) list_single_number_pane_g

0x7e81,	// (0x00014864) list_single_number_pane_t1_ParamLimits

0x7e81,	// (0x00014864) list_single_number_pane_t1

0xa842,	// (0x00017225) list_single_number_pane_t2_ParamLimits

0xa842,	// (0x00017225) list_single_number_pane_t2

0x0001,

0xf950,	// (0x0001c333) list_single_number_pane_t_ParamLimits

0xf950,	// (0x0001c333) list_single_number_pane_t

0x7e5d,	// (0x00014840) list_single_graphic_pane_g1_ParamLimits

0x7e5d,	// (0x00014840) list_single_graphic_pane_g1

0x7e69,	// (0x0001484c) list_single_graphic_pane_g2_ParamLimits

0x7e69,	// (0x0001484c) list_single_graphic_pane_g2

0x7e75,	// (0x00014858) list_single_graphic_pane_g3_ParamLimits

0x7e75,	// (0x00014858) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001bfa4) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001bfa4) list_single_graphic_pane_g

0x7e81,	// (0x00014864) list_single_graphic_pane_t1_ParamLimits

0x7e81,	// (0x00014864) list_single_graphic_pane_t1

0x7e69,	// (0x0001484c) list_single_heading_pane_g1_ParamLimits

0x7e69,	// (0x0001484c) list_single_heading_pane_g1

0x7e75,	// (0x00014858) list_single_heading_pane_g2_ParamLimits

0x7e75,	// (0x00014858) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001bfab) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001bfab) list_single_heading_pane_g

0x7e97,	// (0x0001487a) list_single_heading_pane_t1_ParamLimits

0x7e97,	// (0x0001487a) list_single_heading_pane_t1

0x7ead,	// (0x00014890) list_single_heading_pane_t2_ParamLimits

0x7ead,	// (0x00014890) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001bfb0) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001bfb0) list_single_heading_pane_t

0x7e69,	// (0x0001484c) list_single_number_heading_pane_g1_ParamLimits

0x7e69,	// (0x0001484c) list_single_number_heading_pane_g1

0x7e75,	// (0x00014858) list_single_number_heading_pane_g2_ParamLimits

0x7e75,	// (0x00014858) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001bfab) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001bfab) list_single_number_heading_pane_g

0x7e97,	// (0x0001487a) list_single_number_heading_pane_t1_ParamLimits

0x7e97,	// (0x0001487a) list_single_number_heading_pane_t1

0x7ebf,	// (0x000148a2) list_single_number_heading_pane_t2_ParamLimits

0x7ebf,	// (0x000148a2) list_single_number_heading_pane_t2

0x7ed1,	// (0x000148b4) list_single_number_heading_pane_t3_ParamLimits

0x7ed1,	// (0x000148b4) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001bfb5) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001bfb5) list_single_number_heading_pane_t

0x7ee3,	// (0x000148c6) list_single_graphic_heading_pane_g1_ParamLimits

0x7ee3,	// (0x000148c6) list_single_graphic_heading_pane_g1

0x7eef,	// (0x000148d2) list_single_graphic_heading_pane_g4_ParamLimits

0x7eef,	// (0x000148d2) list_single_graphic_heading_pane_g4

0x7e75,	// (0x00014858) list_single_graphic_heading_pane_g5_ParamLimits

0x7e75,	// (0x00014858) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001bfbc) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001bfbc) list_single_graphic_heading_pane_g

0x7e97,	// (0x0001487a) list_single_graphic_heading_pane_t1_ParamLimits

0x7e97,	// (0x0001487a) list_single_graphic_heading_pane_t1

0x7f00,	// (0x000148e3) list_single_graphic_heading_pane_t2_ParamLimits

0x7f00,	// (0x000148e3) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001bfc3) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001bfc3) list_single_graphic_heading_pane_t

0x7f12,	// (0x000148f5) list_single_large_graphic_pane_g1_ParamLimits

0x7f12,	// (0x000148f5) list_single_large_graphic_pane_g1

0x41a2,	// (0x00010b85) list_single_large_graphic_pane_g2_ParamLimits

0x41a2,	// (0x00010b85) list_single_large_graphic_pane_g2

0x41ae,	// (0x00010b91) list_single_large_graphic_pane_g3_ParamLimits

0x41ae,	// (0x00010b91) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001bfc8) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001bfc8) list_single_large_graphic_pane_g

0x9b4a,	// (0x0001652d) wait_border_pane_g2_copy1

0x7f1e,	// (0x00014901) list_single_large_graphic_pane_g4_cp2

0x7f26,	// (0x00014909) list_single_large_graphic_pane_t1_ParamLimits

0x7f26,	// (0x00014909) list_single_large_graphic_pane_t1

0x41cf,	// (0x00010bb2) list_double_pane_g1_ParamLimits

0x41cf,	// (0x00010bb2) list_double_pane_g1

0x7f3c,	// (0x0001491f) list_double_pane_g2_ParamLimits

0x7f3c,	// (0x0001491f) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001bfcf) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001bfcf) list_double_pane_g

0x7f48,	// (0x0001492b) list_double_pane_t1_ParamLimits

0x7f48,	// (0x0001492b) list_double_pane_t1

0x7f5e,	// (0x00014941) list_double_pane_t2_ParamLimits

0x7f5e,	// (0x00014941) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001bfd4) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001bfd4) list_double_pane_t

0x7f70,	// (0x00014953) list_double2_pane_g1_ParamLimits

0x7f70,	// (0x00014953) list_double2_pane_g1

0x7f81,	// (0x00014964) list_double2_pane_g2_ParamLimits

0x7f81,	// (0x00014964) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001bfd9) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001bfd9) list_double2_pane_g

0x7f8d,	// (0x00014970) list_double2_pane_t1_ParamLimits

0x7f8d,	// (0x00014970) list_double2_pane_t1

0x7fa3,	// (0x00014986) list_double2_pane_t2_ParamLimits

0x7fa3,	// (0x00014986) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001bfde) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001bfde) list_double2_pane_t

0x41cf,	// (0x00010bb2) list_double_number_pane_g1_ParamLimits

0x41cf,	// (0x00010bb2) list_double_number_pane_g1

0x7f3c,	// (0x0001491f) list_double_number_pane_g2_ParamLimits

0x7f3c,	// (0x0001491f) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001bfcf) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001bfcf) list_double_number_pane_g

0x7fb5,	// (0x00014998) list_double_number_pane_t1_ParamLimits

0x7fb5,	// (0x00014998) list_double_number_pane_t1

0x7fc7,	// (0x000149aa) list_double_number_pane_t2_ParamLimits

0x7fc7,	// (0x000149aa) list_double_number_pane_t2

0x7fdd,	// (0x000149c0) list_double_number_pane_t3_ParamLimits

0x7fdd,	// (0x000149c0) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0001bfe3) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0001bfe3) list_double_number_pane_t

0x7fef,	// (0x000149d2) list_double_graphic_pane_g1_ParamLimits

0x7fef,	// (0x000149d2) list_double_graphic_pane_g1

0x7ffb,	// (0x000149de) list_double_graphic_pane_g2_ParamLimits

0x7ffb,	// (0x000149de) list_double_graphic_pane_g2

0x800a,	// (0x000149ed) list_double_graphic_pane_g3_ParamLimits

0x800a,	// (0x000149ed) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001bfea) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001bfea) list_double_graphic_pane_g

0x7fc7,	// (0x000149aa) list_double_graphic_pane_t1_ParamLimits

0x7fc7,	// (0x000149aa) list_double_graphic_pane_t1

0x7fdd,	// (0x000149c0) list_double_graphic_pane_t2_ParamLimits

0x7fdd,	// (0x000149c0) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001bff3) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001bff3) list_double_graphic_pane_t

0x8022,	// (0x00014a05) list_double2_graphic_pane_g1_ParamLimits

0x8022,	// (0x00014a05) list_double2_graphic_pane_g1

0x41db,	// (0x00010bbe) list_double2_graphic_pane_g2_ParamLimits

0x41db,	// (0x00010bbe) list_double2_graphic_pane_g2

0x7f81,	// (0x00014964) list_double2_graphic_pane_g3_ParamLimits

0x7f81,	// (0x00014964) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001bff8) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001bff8) list_double2_graphic_pane_g

0x802e,	// (0x00014a11) list_double2_graphic_pane_t1_ParamLimits

0x802e,	// (0x00014a11) list_double2_graphic_pane_t1

0x8044,	// (0x00014a27) list_double2_graphic_pane_t2_ParamLimits

0x8044,	// (0x00014a27) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001bfff) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001bfff) list_double2_graphic_pane_t

0x8056,	// (0x00014a39) list_double_large_graphic_pane_g1_ParamLimits

0x8056,	// (0x00014a39) list_double_large_graphic_pane_g1

0x8075,	// (0x00014a58) list_double_large_graphic_pane_g2_ParamLimits

0x8075,	// (0x00014a58) list_double_large_graphic_pane_g2

0x7f3c,	// (0x0001491f) list_double_large_graphic_pane_g3_ParamLimits

0x7f3c,	// (0x0001491f) list_double_large_graphic_pane_g3

0x8086,	// (0x00014a69) list_double_large_graphic_pane_g4_ParamLimits

0x8086,	// (0x00014a69) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001c004) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001c004) list_double_large_graphic_pane_g

0x8098,	// (0x00014a7b) list_double_large_graphic_pane_t1_ParamLimits

0x8098,	// (0x00014a7b) list_double_large_graphic_pane_t1

0x80b1,	// (0x00014a94) list_double_large_graphic_pane_t2_ParamLimits

0x80b1,	// (0x00014a94) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001c00f) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001c00f) list_double_large_graphic_pane_t

0x80c3,	// (0x00014aa6) list_double2_large_graphic_pane_g1_ParamLimits

0x80c3,	// (0x00014aa6) list_double2_large_graphic_pane_g1

0x7f70,	// (0x00014953) list_double2_large_graphic_pane_g2_ParamLimits

0x7f70,	// (0x00014953) list_double2_large_graphic_pane_g2

0x7f81,	// (0x00014964) list_double2_large_graphic_pane_g3_ParamLimits

0x7f81,	// (0x00014964) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001c014) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001c014) list_double2_large_graphic_pane_g

0x802e,	// (0x00014a11) list_double2_large_graphic_pane_t1_ParamLimits

0x802e,	// (0x00014a11) list_double2_large_graphic_pane_t1

0x8044,	// (0x00014a27) list_double2_large_graphic_pane_t2_ParamLimits

0x8044,	// (0x00014a27) list_double2_large_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001bfff) list_double2_large_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001bfff) list_double2_large_graphic_pane_t

0x80cf,	// (0x00014ab2) list_double_heading_pane_g1_ParamLimits

0x80cf,	// (0x00014ab2) list_double_heading_pane_g1

0x80e0,	// (0x00014ac3) list_double_heading_pane_g2_ParamLimits

0x80e0,	// (0x00014ac3) list_double_heading_pane_g2

0x0001,

0xf638,	// (0x0001c01b) list_double_heading_pane_g_ParamLimits

0xf638,	// (0x0001c01b) list_double_heading_pane_g

0x80ec,	// (0x00014acf) list_double_heading_pane_t1_ParamLimits

0x80ec,	// (0x00014acf) list_double_heading_pane_t1

0x8044,	// (0x00014a27) list_double_heading_pane_t2_ParamLimits

0x8044,	// (0x00014a27) list_double_heading_pane_t2

0x0001,

0xf63d,	// (0x0001c020) list_double_heading_pane_t_ParamLimits

0xf63d,	// (0x0001c020) list_double_heading_pane_t

0x8102,	// (0x00014ae5) list_double_graphic_heading_pane_g1_ParamLimits

0x8102,	// (0x00014ae5) list_double_graphic_heading_pane_g1

0x80cf,	// (0x00014ab2) list_double_graphic_heading_pane_g2_ParamLimits

0x80cf,	// (0x00014ab2) list_double_graphic_heading_pane_g2

0x80e0,	// (0x00014ac3) list_double_graphic_heading_pane_g3_ParamLimits

0x80e0,	// (0x00014ac3) list_double_graphic_heading_pane_g3

0x0002,

0xf642,	// (0x0001c025) list_double_graphic_heading_pane_g_ParamLimits

0xf642,	// (0x0001c025) list_double_graphic_heading_pane_g

0x80ec,	// (0x00014acf) list_double_graphic_heading_pane_t1_ParamLimits

0x80ec,	// (0x00014acf) list_double_graphic_heading_pane_t1

0x8044,	// (0x00014a27) list_double_graphic_heading_pane_t2_ParamLimits

0x8044,	// (0x00014a27) list_double_graphic_heading_pane_t2

0x0001,

0xf63d,	// (0x0001c020) list_double_graphic_heading_pane_t_ParamLimits

0xf63d,	// (0x0001c020) list_double_graphic_heading_pane_t

0x8075,	// (0x00014a58) list_double_time_pane_g1_ParamLimits

0x8075,	// (0x00014a58) list_double_time_pane_g1

0x7f3c,	// (0x0001491f) list_double_time_pane_g2_ParamLimits

0x7f3c,	// (0x0001491f) list_double_time_pane_g2

0x0001,

0xf649,	// (0x0001c02c) list_double_time_pane_g_ParamLimits

0xf649,	// (0x0001c02c) list_double_time_pane_g

0x810e,	// (0x00014af1) list_double_time_pane_t1_ParamLimits

0x810e,	// (0x00014af1) list_double_time_pane_t1

0x8124,	// (0x00014b07) list_double_time_pane_t2_ParamLimits

0x8124,	// (0x00014b07) list_double_time_pane_t2

0x8136,	// (0x00014b19) list_double_time_pane_t3_ParamLimits

0x8136,	// (0x00014b19) list_double_time_pane_t3

0x8148,	// (0x00014b2b) list_double_time_pane_t4_ParamLimits

0x8148,	// (0x00014b2b) list_double_time_pane_t4

0x0003,

0xf64e,	// (0x0001c031) list_double_time_pane_t_ParamLimits

0xf64e,	// (0x0001c031) list_double_time_pane_t

0x41db,	// (0x00010bbe) list_setting_pane_g1_ParamLimits

0x41db,	// (0x00010bbe) list_setting_pane_g1

0x7f81,	// (0x00014964) list_setting_pane_g2_ParamLimits

0x7f81,	// (0x00014964) list_setting_pane_g2

0x0001,

0xf657,	// (0x0001c03a) list_setting_pane_g_ParamLimits

0xf657,	// (0x0001c03a) list_setting_pane_g

0x815a,	// (0x00014b3d) list_setting_pane_t1_ParamLimits

0x815a,	// (0x00014b3d) list_setting_pane_t1

0x8171,	// (0x00014b54) list_setting_pane_t2_ParamLimits

0x8171,	// (0x00014b54) list_setting_pane_t2

0x0002,

0xf65c,	// (0x0001c03f) list_setting_pane_t_ParamLimits

0xf65c,	// (0x0001c03f) list_setting_pane_t

0x81ae,	// (0x00014b91) set_value_pane_cp_ParamLimits

0x81ae,	// (0x00014b91) set_value_pane_cp

0x41db,	// (0x00010bbe) list_setting_number_pane_g1_ParamLimits

0x41db,	// (0x00010bbe) list_setting_number_pane_g1

0x7f81,	// (0x00014964) list_setting_number_pane_g2_ParamLimits

0x7f81,	// (0x00014964) list_setting_number_pane_g2

0x0001,

0xf657,	// (0x0001c03a) list_setting_number_pane_g_ParamLimits

0xf657,	// (0x0001c03a) list_setting_number_pane_g

0x81ba,	// (0x00014b9d) list_setting_number_pane_t1_ParamLimits

0x81ba,	// (0x00014b9d) list_setting_number_pane_t1

0x81ce,	// (0x00014bb1) list_setting_number_pane_t2_ParamLimits

0x81ce,	// (0x00014bb1) list_setting_number_pane_t2

0x81e5,	// (0x00014bc8) list_setting_number_pane_t3_ParamLimits

0x81e5,	// (0x00014bc8) list_setting_number_pane_t3

0x0003,

0xf663,	// (0x0001c046) list_setting_number_pane_t_ParamLimits

0xf663,	// (0x0001c046) list_setting_number_pane_t

0x81ae,	// (0x00014b91) set_value_pane_ParamLimits

0x81ae,	// (0x00014b91) set_value_pane

0x41e7,	// (0x00010bca) bg_set_opt_pane_ParamLimits

0x41e7,	// (0x00010bca) bg_set_opt_pane

0x4208,	// (0x00010beb) set_value_pane_t1

0x4216,	// (0x00010bf9) slider_set_pane_cp3

0x8228,	// (0x00014c0b) volume_small_pane_cp

0x421f,	// (0x00010c02) list_form_gen_pane

0x4228,	// (0x00010c0b) scroll_pane_cp8

0x8231,	// (0x00014c14) form_field_data_pane_ParamLimits

0x8231,	// (0x00014c14) form_field_data_pane

0x8249,	// (0x00014c2c) form_field_data_wide_pane_ParamLimits

0x8249,	// (0x00014c2c) form_field_data_wide_pane

0x826a,	// (0x00014c4d) form_field_popup_pane_ParamLimits

0x826a,	// (0x00014c4d) form_field_popup_pane

0x828a,	// (0x00014c6d) form_field_popup_wide_pane_ParamLimits

0x828a,	// (0x00014c6d) form_field_popup_wide_pane

0x4249,	// (0x00010c2c) form_field_slider_pane_ParamLimits

0x4249,	// (0x00010c2c) form_field_slider_pane

0x82a7,	// (0x00014c8a) form_field_slider_wide_pane_ParamLimits

0x82a7,	// (0x00014c8a) form_field_slider_wide_pane

0x425c,	// (0x00010c3f) data_form_pane

0x82c4,	// (0x00014ca7) form_field_data_pane_t1

0x4268,	// (0x00010c4b) input_focus_pane

0x4276,	// (0x00010c59) data_form_wide_pane

0x42a7,	// (0x00010c8a) form_field_data_wide_pane_t1

0x40e6,	// (0x00010ac9) input_focus_pane_cp6

0x82dc,	// (0x00014cbf) form_field_popup_pane_t1

0x4268,	// (0x00010c4b) input_focus_pane_cp7

0x42c9,	// (0x00010cac) list_form_pane

0x42dd,	// (0x00010cc0) form_field_popup_wide_pane_t1

0x4268,	// (0x00010c4b) input_focus_pane_cp8

0x42f2,	// (0x00010cd5) list_form_wide_pane

0x82fc,	// (0x00014cdf) form_field_slider_pane_t1_ParamLimits

0x82fc,	// (0x00014cdf) form_field_slider_pane_t1

0x830e,	// (0x00014cf1) form_field_slider_pane_t2_ParamLimits

0x830e,	// (0x00014cf1) form_field_slider_pane_t2

0x0001,

0xf673,	// (0x0001c056) form_field_slider_pane_t_ParamLimits

0xf673,	// (0x0001c056) form_field_slider_pane_t

0x3e18,	// (0x000107fb) input_focus_pane_cp9_ParamLimits

0x3e18,	// (0x000107fb) input_focus_pane_cp9

0x8320,	// (0x00014d03) slider_cont_pane_ParamLimits

0x8320,	// (0x00014d03) slider_cont_pane

0x42fe,	// (0x00010ce1) form_field_slider_wide_pane_t1_ParamLimits

0x42fe,	// (0x00010ce1) form_field_slider_wide_pane_t1

0x4310,	// (0x00010cf3) form_field_slider_wide_pane_t2_ParamLimits

0x4310,	// (0x00010cf3) form_field_slider_wide_pane_t2

0x0001,

0xf678,	// (0x0001c05b) form_field_slider_wide_pane_t_ParamLimits

0xf678,	// (0x0001c05b) form_field_slider_wide_pane_t

0x3e18,	// (0x000107fb) input_focus_pane_cp10_ParamLimits

0x3e18,	// (0x000107fb) input_focus_pane_cp10

0x8334,	// (0x00014d17) slider_cont_pane_cp1_ParamLimits

0x8334,	// (0x00014d17) slider_cont_pane_cp1

0x8348,	// (0x00014d2b) slider_form_pane_cp

0x4322,	// (0x00010d05) input_focus_pane_g1

0x432a,	// (0x00010d0d) input_focus_pane_g2

0x4332,	// (0x00010d15) input_focus_pane_g3

0x433a,	// (0x00010d1d) input_focus_pane_g4

0x4342,	// (0x00010d25) input_focus_pane_g5

0x434a,	// (0x00010d2d) input_focus_pane_g6

0x4352,	// (0x00010d35) input_focus_pane_g7

0x435a,	// (0x00010d3d) input_focus_pane_g8

0x4362,	// (0x00010d45) input_focus_pane_g9

0x3c31,	// (0x00010614) input_focus_pane_g10

0x0009,

0xf67d,	// (0x0001c060) input_focus_pane_g

0x9b53,	// (0x00016536) wait_border_pane_g3_copy1

0x8350,	// (0x00014d33) data_form_pane_t1

0x3c31,	// (0x00010614) wait_anim_pane_g1_copy1

0xaa7f,	// (0x00017462) data_form_wide_pane_t1

0x836b,	// (0x00014d4e) list_form_graphic_pane_cp_ParamLimits

0x836b,	// (0x00014d4e) list_form_graphic_pane_cp

0xaa54,	// (0x00017437) slider_form_pane_g1

0xaa5d,	// (0x00017440) slider_form_pane_g2

0x0006,

0xf980,	// (0x0001c363) slider_form_pane_g

0x837f,	// (0x00014d62) list_form_graphic_pane_ParamLimits

0x837f,	// (0x00014d62) list_form_graphic_pane

0x8396,	// (0x00014d79) list_form_graphic_pane_g1

0x839e,	// (0x00014d81) list_form_graphic_pane_t1_ParamLimits

0x839e,	// (0x00014d81) list_form_graphic_pane_t1

0x3e26,	// (0x00010809) list_highlight_pane_cp5_ParamLimits

0x3e26,	// (0x00010809) list_highlight_pane_cp5

0x83b3,	// (0x00014d96) find_pane_g1

0x436a,	// (0x00010d4d) input_find_pane

0x83bc,	// (0x00014d9f) input_find_pane_g1_ParamLimits

0x83bc,	// (0x00014d9f) input_find_pane_g1

0x83c8,	// (0x00014dab) input_find_pane_t1_ParamLimits

0x83c8,	// (0x00014dab) input_find_pane_t1

0x83dd,	// (0x00014dc0) input_find_pane_t2_ParamLimits

0x83dd,	// (0x00014dc0) input_find_pane_t2

0x0001,

0xf692,	// (0x0001c075) input_find_pane_t_ParamLimits

0xf692,	// (0x0001c075) input_find_pane_t

0x4373,	// (0x00010d56) input_focus_pane_cp5_ParamLimits

0x4373,	// (0x00010d56) input_focus_pane_cp5

0x4381,	// (0x00010d64) bg_popup_window_pane_cp2_ParamLimits

0x4381,	// (0x00010d64) bg_popup_window_pane_cp2

0x438e,	// (0x00010d71) listscroll_menu_pane_ParamLimits

0x438e,	// (0x00010d71) listscroll_menu_pane

0x83fe,	// (0x00014de1) popup_submenu_window_ParamLimits

0x83fe,	// (0x00014de1) popup_submenu_window

0x439a,	// (0x00010d7d) find_popup_pane_g1

0x8426,	// (0x00014e09) input_popup_find_pane_cp

0x4373,	// (0x00010d56) input_focus_pane_cp4_ParamLimits

0x4373,	// (0x00010d56) input_focus_pane_cp4

0x43a2,	// (0x00010d85) input_popup_find_pane_t1_ParamLimits

0x43a2,	// (0x00010d85) input_popup_find_pane_t1

0x3daa,	// (0x0001078d) bg_popup_sub_pane_cp

0x43d0,	// (0x00010db3) listscroll_popup_sub_pane

0x43d8,	// (0x00010dbb) list_submenu_pane_ParamLimits

0x43d8,	// (0x00010dbb) list_submenu_pane

0x43e9,	// (0x00010dcc) scroll_pane_cp4

0x843e,	// (0x00014e21) list_single_popup_submenu_pane_ParamLimits

0x843e,	// (0x00014e21) list_single_popup_submenu_pane

0x4413,	// (0x00010df6) list_single_popup_submenu_pane_g1

0x8452,	// (0x00014e35) list_single_popup_submenu_pane_t1_ParamLimits

0x8452,	// (0x00014e35) list_single_popup_submenu_pane_t1

0x3e26,	// (0x00010809) bg_active_tab_pane_cp1_ParamLimits

0x3e26,	// (0x00010809) bg_active_tab_pane_cp1

0x43f1,	// (0x00010dd4) tabs_2_active_pane_g1

0x8467,	// (0x00014e4a) tabs_2_active_pane_t1

0x3e26,	// (0x00010809) bg_passive_tab_pane_cp1_ParamLimits

0x3e26,	// (0x00010809) bg_passive_tab_pane_cp1

0x43f1,	// (0x00010dd4) tabs_2_passive_pane_g1

0x8467,	// (0x00014e4a) tabs_2_passive_pane_t1

0x4405,	// (0x00010de8) bg_active_tab_pane_cp4

0x8479,	// (0x00014e5c) tabs_2_long_active_pane_t1

0x848c,	// (0x00014e6f) bg_passive_tab_pane_cp4

0x64b9,	// (0x00012e9c) list_single_midp_graphic_pane_g4_ParamLimits

0x4405,	// (0x00010de8) bg_active_tab_pane_cp5

0x8498,	// (0x00014e7b) tabs_3_long_active_pane_t1

0x848c,	// (0x00014e6f) bg_passive_tab_pane_cp5

0x64b9,	// (0x00012e9c) list_single_midp_graphic_pane_g4

0x3e26,	// (0x00010809) bg_popup_window_pane_cp13_ParamLimits

0x3e26,	// (0x00010809) bg_popup_window_pane_cp13

0x43f9,	// (0x00010ddc) listscroll_popup_fast_pane_ParamLimits

0x43f9,	// (0x00010ddc) listscroll_popup_fast_pane

0x441b,	// (0x00010dfe) grid_popup_fast_pane_ParamLimits

0x441b,	// (0x00010dfe) grid_popup_fast_pane

0x442d,	// (0x00010e10) scroll_pane_cp9_ParamLimits

0x442d,	// (0x00010e10) scroll_pane_cp9

0xc9a5,	// (0x00019388) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc9a5,	// (0x00019388) list_single_graphic_hl_pane_t1_cp2

0x4440,	// (0x00010e23) input_focus_pane_cp20_ParamLimits

0x4440,	// (0x00010e23) input_focus_pane_cp20

0x444e,	// (0x00010e31) query_popup_data_pane_t1_ParamLimits

0x444e,	// (0x00010e31) query_popup_data_pane_t1

0x4461,	// (0x00010e44) query_popup_data_pane_t2_ParamLimits

0x4461,	// (0x00010e44) query_popup_data_pane_t2

0x44a7,	// (0x00010e8a) query_popup_data_pane_t3_ParamLimits

0x44a7,	// (0x00010e8a) query_popup_data_pane_t3

0x44e8,	// (0x00010ecb) query_popup_data_pane_t4_ParamLimits

0x44e8,	// (0x00010ecb) query_popup_data_pane_t4

0x4524,	// (0x00010f07) query_popup_data_pane_t5_ParamLimits

0x4524,	// (0x00010f07) query_popup_data_pane_t5

0x0004,

0xf697,	// (0x0001c07a) query_popup_data_pane_t_ParamLimits

0xf697,	// (0x0001c07a) query_popup_data_pane_t

0x4322,	// (0x00010d05) bg_set_opt_pane_g1

0x432a,	// (0x00010d0d) bg_set_opt_pane_g2

0x4332,	// (0x00010d15) bg_set_opt_pane_g3

0x433a,	// (0x00010d1d) bg_set_opt_pane_g4

0x4342,	// (0x00010d25) bg_set_opt_pane_g5

0x434a,	// (0x00010d2d) bg_set_opt_pane_g6

0x4352,	// (0x00010d35) bg_set_opt_pane_g7

0x435a,	// (0x00010d3d) bg_set_opt_pane_g8

0x4362,	// (0x00010d45) bg_set_opt_pane_g9

0x0008,

0xf6a2,	// (0x0001c085) bg_set_opt_pane_g

0x5acd,	// (0x000124b0) control_top_pane_stacon_ParamLimits

0x5acd,	// (0x000124b0) control_top_pane_stacon

0x5b20,	// (0x00012503) signal_pane_stacon_ParamLimits

0x5b20,	// (0x00012503) signal_pane_stacon

0x8861,	// (0x00015244) stacon_top_pane_g1_ParamLimits

0x8861,	// (0x00015244) stacon_top_pane_g1

0x5b45,	// (0x00012528) title_pane_stacon_ParamLimits

0x5b45,	// (0x00012528) title_pane_stacon

0x5b6f,	// (0x00012552) uni_indicator_pane_stacon_ParamLimits

0x5b6f,	// (0x00012552) uni_indicator_pane_stacon

0x5b84,	// (0x00012567) battery_pane_stacon_ParamLimits

0x5b84,	// (0x00012567) battery_pane_stacon

0x5bc8,	// (0x000125ab) control_bottom_pane_stacon_ParamLimits

0x5bc8,	// (0x000125ab) control_bottom_pane_stacon

0x5beb,	// (0x000125ce) navi_pane_stacon_ParamLimits

0x5beb,	// (0x000125ce) navi_pane_stacon

0x8883,	// (0x00015266) stacon_bottom_pane_g1_ParamLimits

0x8883,	// (0x00015266) stacon_bottom_pane_g1

0x5839,	// (0x0001221c) aid_levels_signal_lsc_ParamLimits

0x5839,	// (0x0001221c) aid_levels_signal_lsc

0x584f,	// (0x00012232) signal_pane_stacon_g1_ParamLimits

0x584f,	// (0x00012232) signal_pane_stacon_g1

0x5863,	// (0x00012246) signal_pane_stacon_g2_ParamLimits

0x5863,	// (0x00012246) signal_pane_stacon_g2

0x0001,

0xf6b5,	// (0x0001c098) signal_pane_stacon_g_ParamLimits

0xf6b5,	// (0x0001c098) signal_pane_stacon_g

0x5898,	// (0x0001227b) title_pane_stacon_t1_ParamLimits

0x5898,	// (0x0001227b) title_pane_stacon_t1

0x4600,	// (0x00010fe3) uni_indicator_pane_stacon_g1

0x460a,	// (0x00010fed) uni_indicator_pane_stacon_g2

0x45ec,	// (0x00010fcf) uni_indicator_pane_stacon_g3

0x45f6,	// (0x00010fd9) uni_indicator_pane_stacon_g4

0x0003,

0xf6c1,	// (0x0001c0a4) uni_indicator_pane_stacon_g

0x58bd,	// (0x000122a0) control_top_pane_stacon_g1

0x58c5,	// (0x000122a8) control_top_pane_stacon_t1_ParamLimits

0x58c5,	// (0x000122a8) control_top_pane_stacon_t1

0x58fc,	// (0x000122df) aid_levels_battery_lsc_ParamLimits

0x58fc,	// (0x000122df) aid_levels_battery_lsc

0x5913,	// (0x000122f6) battery_pane_stacon_g1_ParamLimits

0x5913,	// (0x000122f6) battery_pane_stacon_g1

0x5926,	// (0x00012309) battery_pane_stacon_g2_ParamLimits

0x5926,	// (0x00012309) battery_pane_stacon_g2

0x0001,

0xf6ca,	// (0x0001c0ad) battery_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0001c0ad) battery_pane_stacon_g

0x5964,	// (0x00012347) navi_icon_pane_stacon

0x5978,	// (0x0001235b) navi_navi_pane_stacon

0x5964,	// (0x00012347) navi_text_pane_stacon

0x58bd,	// (0x000122a0) control_bottom_pane_stacon_g1

0x598c,	// (0x0001236f) control_bottom_pane_stacon_t1_ParamLimits

0x598c,	// (0x0001236f) control_bottom_pane_stacon_t1

0x84c4,	// (0x00014ea7) grid_app_pane_ParamLimits

0x84c4,	// (0x00014ea7) grid_app_pane

0x84e8,	// (0x00014ecb) scroll_pane_cp15_ParamLimits

0x84e8,	// (0x00014ecb) scroll_pane_cp15

0x84fb,	// (0x00014ede) cell_app_pane_ParamLimits

0x84fb,	// (0x00014ede) cell_app_pane

0x8523,	// (0x00014f06) cell_app_pane_g1_ParamLimits

0x8523,	// (0x00014f06) cell_app_pane_g1

0x4734,	// (0x00011117) cell_app_pane_g2_ParamLimits

0x4734,	// (0x00011117) cell_app_pane_g2

0x0001,

0xf6cf,	// (0x0001c0b2) cell_app_pane_g_ParamLimits

0xf6cf,	// (0x0001c0b2) cell_app_pane_g

0x8547,	// (0x00014f2a) cell_app_pane_t1_ParamLimits

0x8547,	// (0x00014f2a) cell_app_pane_t1

0x4740,	// (0x00011123) grid_highlight_pane_ParamLimits

0x4740,	// (0x00011123) grid_highlight_pane

0x4322,	// (0x00010d05) cell_highlight_pane_g1

0x432a,	// (0x00010d0d) cell_highlight_pane_g2

0x4332,	// (0x00010d15) cell_highlight_pane_g3

0x433a,	// (0x00010d1d) cell_highlight_pane_g4

0x4342,	// (0x00010d25) cell_highlight_pane_g5

0x434a,	// (0x00010d2d) cell_highlight_pane_g6

0x4352,	// (0x00010d35) cell_highlight_pane_g7

0x435a,	// (0x00010d3d) cell_highlight_pane_g8

0x4362,	// (0x00010d45) cell_highlight_pane_g9

0x3c31,	// (0x00010614) cell_highlight_pane_g10

0x0009,

0xf67d,	// (0x0001c060) cell_highlight_pane_g

0x475b,	// (0x0001113e) bg_scroll_pane

0x59d6,	// (0x000123b9) scroll_handle_pane

0x47b7,	// (0x0001119a) scroll_bg_pane_g1

0x47cc,	// (0x000111af) scroll_bg_pane_g2

0x47e4,	// (0x000111c7) scroll_bg_pane_g3

0x0002,

0xf6d4,	// (0x0001c0b7) scroll_bg_pane_g

0x855e,	// (0x00014f41) scroll_handle_focus_pane_ParamLimits

0x855e,	// (0x00014f41) scroll_handle_focus_pane

0x47b7,	// (0x0001119a) scroll_handle_pane_g1

0x47f9,	// (0x000111dc) scroll_handle_pane_g2

0x47e4,	// (0x000111c7) scroll_handle_pane_g3

0x0002,

0xf6db,	// (0x0001c0be) scroll_handle_pane_g

0x4373,	// (0x00010d56) bg_popup_sub_pane_cp21_ParamLimits

0x4373,	// (0x00010d56) bg_popup_sub_pane_cp21

0x856b,	// (0x00014f4e) popup_fep_japan_predictive_window_t1_ParamLimits

0x856b,	// (0x00014f4e) popup_fep_japan_predictive_window_t1

0x8585,	// (0x00014f68) popup_fep_japan_predictive_window_t2_ParamLimits

0x8585,	// (0x00014f68) popup_fep_japan_predictive_window_t2

0x85b8,	// (0x00014f9b) popup_fep_japan_predictive_window_t3_ParamLimits

0x85b8,	// (0x00014f9b) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e2,	// (0x0001c0c5) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e2,	// (0x0001c0c5) popup_fep_japan_predictive_window_t

0x3daa,	// (0x0001078d) bg_popup_sub_pane_cp23

0x4892,	// (0x00011275) listscroll_japin_cand_pane

0x480d,	// (0x000111f0) popup_fep_japan_candidate_window_t1

0x481b,	// (0x000111fe) candidate_pane_ParamLimits

0x481b,	// (0x000111fe) candidate_pane

0x85ef,	// (0x00014fd2) scroll_pane_cp30

0x482d,	// (0x00011210) list_single_popup_jap_candidate_pane_ParamLimits

0x482d,	// (0x00011210) list_single_popup_jap_candidate_pane

0x3daa,	// (0x0001078d) list_highlight_pane_cp30

0x4842,	// (0x00011225) list_single_popup_jap_candidate_pane_t1

0x4851,	// (0x00011234) level_1_signal

0x485e,	// (0x00011241) level_2_signal

0x486b,	// (0x0001124e) level_3_signal

0x4878,	// (0x0001125b) level_4_signal

0x4885,	// (0x00011268) level_5_signal

0x489a,	// (0x0001127d) level_6_signal

0x48a7,	// (0x0001128a) level_7_signal

0x4851,	// (0x00011234) level_1_battery

0x485e,	// (0x00011241) level_2_battery

0x486b,	// (0x0001124e) level_3_battery

0x4878,	// (0x0001125b) level_4_battery

0x4885,	// (0x00011268) level_5_battery

0x489a,	// (0x0001127d) level_6_battery

0x48a7,	// (0x0001128a) level_7_battery

0x48eb,	// (0x000112ce) list_menu_pane_ParamLimits

0x48eb,	// (0x000112ce) list_menu_pane

0x4901,	// (0x000112e4) scroll_pane_cp25_ParamLimits

0x4901,	// (0x000112e4) scroll_pane_cp25

0x491a,	// (0x000112fd) list_double2_graphic_pane_cp2_ParamLimits

0x491a,	// (0x000112fd) list_double2_graphic_pane_cp2

0x491a,	// (0x000112fd) list_double2_large_graphic_pane_cp2_ParamLimits

0x491a,	// (0x000112fd) list_double2_large_graphic_pane_cp2

0x491a,	// (0x000112fd) list_double2_pane_cp2_ParamLimits

0x491a,	// (0x000112fd) list_double2_pane_cp2

0x491a,	// (0x000112fd) list_double_graphic_pane_cp2_ParamLimits

0x491a,	// (0x000112fd) list_double_graphic_pane_cp2

0x491a,	// (0x000112fd) list_double_large_graphic_pane_cp2_ParamLimits

0x491a,	// (0x000112fd) list_double_large_graphic_pane_cp2

0x491a,	// (0x000112fd) list_double_number_pane_cp2_ParamLimits

0x491a,	// (0x000112fd) list_double_number_pane_cp2

0x491a,	// (0x000112fd) list_double_pane_cp2_ParamLimits

0x491a,	// (0x000112fd) list_double_pane_cp2

0x860b,	// (0x00014fee) list_single_2graphic_pane_cp2_ParamLimits

0x860b,	// (0x00014fee) list_single_2graphic_pane_cp2

0x860b,	// (0x00014fee) list_single_graphic_heading_pane_cp2_ParamLimits

0x860b,	// (0x00014fee) list_single_graphic_heading_pane_cp2

0x860b,	// (0x00014fee) list_single_graphic_pane_cp2_ParamLimits

0x860b,	// (0x00014fee) list_single_graphic_pane_cp2

0x860b,	// (0x00014fee) list_single_heading_pane_cp2_ParamLimits

0x860b,	// (0x00014fee) list_single_heading_pane_cp2

0x492a,	// (0x0001130d) list_single_large_graphic_pane_cp2_ParamLimits

0x492a,	// (0x0001130d) list_single_large_graphic_pane_cp2

0x860b,	// (0x00014fee) list_single_number_heading_pane_cp2_ParamLimits

0x860b,	// (0x00014fee) list_single_number_heading_pane_cp2

0x860b,	// (0x00014fee) list_single_number_pane_cp2_ParamLimits

0x860b,	// (0x00014fee) list_single_number_pane_cp2

0x860b,	// (0x00014fee) list_single_pane_cp2_ParamLimits

0x860b,	// (0x00014fee) list_single_pane_cp2

0x499f,	// (0x00011382) bg_popup_sub_pane_cp22

0x5a85,	// (0x00012468) popup_side_volume_key_window_g1

0x5aa9,	// (0x0001248c) popup_side_volume_key_window_t1

0x5ac5,	// (0x000124a8) volume_small_pane_cp1

0x3e18,	// (0x000107fb) bg_popup_sub_pane_cp24_ParamLimits

0x3e18,	// (0x000107fb) bg_popup_sub_pane_cp24

0x49cf,	// (0x000113b2) fep_china_uni_candidate_pane_ParamLimits

0x49cf,	// (0x000113b2) fep_china_uni_candidate_pane

0x49e3,	// (0x000113c6) fep_china_uni_entry_pane

0x49f3,	// (0x000113d6) popup_fep_china_uni_window_g1

0x867c,	// (0x0001505f) fep_china_uni_entry_pane_g1

0x8684,	// (0x00015067) fep_china_uni_entry_pane_g2

0x0001,

0xf713,	// (0x0001c0f6) fep_china_uni_entry_pane_g

0x868c,	// (0x0001506f) fep_entry_item_pane

0x8696,	// (0x00015079) fep_candidate_item_pane

0x869e,	// (0x00015081) fep_china_uni_candidate_pane_g1

0x86a6,	// (0x00015089) fep_china_uni_candidate_pane_g2

0x86ae,	// (0x00015091) fep_china_uni_candidate_pane_g3

0x86b6,	// (0x00015099) fep_china_uni_candidate_pane_g4

0x0003,

0xf718,	// (0x0001c0fb) fep_china_uni_candidate_pane_g

0x3c31,	// (0x00010614) fep_entry_item_pane_g1

0x86be,	// (0x000150a1) fep_entry_item_pane_t1_ParamLimits

0x86be,	// (0x000150a1) fep_entry_item_pane_t1

0x86d4,	// (0x000150b7) fep_candidate_item_pane_t1_ParamLimits

0x86d4,	// (0x000150b7) fep_candidate_item_pane_t1

0x86e9,	// (0x000150cc) fep_candidate_item_pane_t2_ParamLimits

0x86e9,	// (0x000150cc) fep_candidate_item_pane_t2

0x0001,

0xf721,	// (0x0001c104) fep_candidate_item_pane_t_ParamLimits

0xf721,	// (0x0001c104) fep_candidate_item_pane_t

0x3e26,	// (0x00010809) list_highlight_pane_cp31_ParamLimits

0x3e26,	// (0x00010809) list_highlight_pane_cp31

0x86fb,	// (0x000150de) level_1_signal_lsc

0x8704,	// (0x000150e7) level_2_signal_lsc

0x870d,	// (0x000150f0) level_3_signal_lsc

0x8716,	// (0x000150f9) level_4_signal_lsc

0x871f,	// (0x00015102) level_5_signal_lsc

0x8728,	// (0x0001510b) level_6_signal_lsc

0x8731,	// (0x00015114) level_7_signal_lsc

0x8731,	// (0x00015114) level_1_battery_lsc

0x873a,	// (0x0001511d) level_2_battery_lsc

0x8743,	// (0x00015126) level_3_battery_lsc

0x874c,	// (0x0001512f) level_4_battery_lsc

0x8755,	// (0x00015138) level_5_battery_lsc

0x875e,	// (0x00015141) level_6_battery_lsc

0x86fb,	// (0x000150de) level_7_battery_lsc

0x8767,	// (0x0001514a) scroll_handle_focus_pane_g1

0x8770,	// (0x00015153) scroll_handle_focus_pane_g2

0x8779,	// (0x0001515c) scroll_handle_focus_pane_g3

0x0002,

0xf726,	// (0x0001c109) scroll_handle_focus_pane_g

0x8782,	// (0x00015165) list_single_2graphic_pane_g1_ParamLimits

0x8782,	// (0x00015165) list_single_2graphic_pane_g1

0x7eef,	// (0x000148d2) list_single_2graphic_pane_g2_ParamLimits

0x7eef,	// (0x000148d2) list_single_2graphic_pane_g2

0x7e75,	// (0x00014858) list_single_2graphic_pane_g3_ParamLimits

0x7e75,	// (0x00014858) list_single_2graphic_pane_g3

0x878e,	// (0x00015171) list_single_2graphic_pane_g4_ParamLimits

0x878e,	// (0x00015171) list_single_2graphic_pane_g4

0x0003,

0xf72d,	// (0x0001c110) list_single_2graphic_pane_g_ParamLimits

0xf72d,	// (0x0001c110) list_single_2graphic_pane_g

0x879a,	// (0x0001517d) list_single_2graphic_pane_t1_ParamLimits

0x879a,	// (0x0001517d) list_single_2graphic_pane_t1

0x87c8,	// (0x000151ab) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x87c8,	// (0x000151ab) list_double2_graphic_large_graphic_pane_g1

0x7f70,	// (0x00014953) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x7f70,	// (0x00014953) list_double2_graphic_large_graphic_pane_g2

0x7f81,	// (0x00014964) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7f81,	// (0x00014964) list_double2_graphic_large_graphic_pane_g3

0x87d8,	// (0x000151bb) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x87d8,	// (0x000151bb) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf736,	// (0x0001c119) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf736,	// (0x0001c119) list_double2_graphic_large_graphic_pane_g

0x87e4,	// (0x000151c7) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x87e4,	// (0x000151c7) list_double2_graphic_large_graphic_pane_t1

0x87fa,	// (0x000151dd) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x87fa,	// (0x000151dd) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf73f,	// (0x0001c122) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf73f,	// (0x0001c122) list_double2_graphic_large_graphic_pane_t

0x894a,	// (0x0001532d) popup_fast_swap_window_ParamLimits

0x894a,	// (0x0001532d) popup_fast_swap_window

0x8966,	// (0x00015349) popup_side_volume_key_window

0x8980,	// (0x00015363) stacon_top_pane

0x898a,	// (0x0001536d) status_pane_ParamLimits

0x898a,	// (0x0001536d) status_pane

0x8998,	// (0x0001537b) status_small_pane

0x3daa,	// (0x0001078d) control_pane

0x3daa,	// (0x0001078d) stacon_bottom_pane

0x4228,	// (0x00010c0b) scroll_pane_cp121

0x421f,	// (0x00010c02) set_content_pane

0x880c,	// (0x000151ef) bg_active_tab_pane_g1_cp1

0x8815,	// (0x000151f8) bg_active_tab_pane_g2_cp1

0x881e,	// (0x00015201) bg_active_tab_pane_g3_cp1

0x880c,	// (0x000151ef) bg_passive_tab_pane_g1_cp1

0x8815,	// (0x000151f8) bg_passive_tab_pane_g2_cp1

0x881e,	// (0x00015201) bg_passive_tab_pane_g3_cp1

0x8827,	// (0x0001520a) bg_active_tab_pane_g1_cp2

0x8815,	// (0x000151f8) bg_active_tab_pane_g2_cp2

0x8830,	// (0x00015213) bg_active_tab_pane_g3_cp2

0x8827,	// (0x0001520a) bg_passive_tab_pane_g1_cp2

0x8815,	// (0x000151f8) bg_passive_tab_pane_g2_cp2

0x8830,	// (0x00015213) bg_passive_tab_pane_g3_cp2

0x8839,	// (0x0001521c) bg_active_tab_pane_g1_cp3

0x8815,	// (0x000151f8) bg_active_tab_pane_g2_cp3

0x8842,	// (0x00015225) bg_active_tab_pane_g3_cp3

0x8839,	// (0x0001521c) bg_passive_tab_pane_g1_cp3

0x8815,	// (0x000151f8) bg_passive_tab_pane_g2_cp3

0x8842,	// (0x00015225) bg_passive_tab_pane_g3_cp3

0x884b,	// (0x0001522e) bg_active_tab_pane_g1_cp4

0x8815,	// (0x000151f8) bg_active_tab_pane_g2_cp4

0x8856,	// (0x00015239) bg_active_tab_pane_g3_cp4

0x884b,	// (0x0001522e) bg_passive_tab_pane_g1_cp4

0x8815,	// (0x000151f8) bg_passive_tab_pane_g2_cp4

0x8856,	// (0x00015239) bg_passive_tab_pane_g3_cp4

0x889f,	// (0x00015282) bg_active_tab_pane_g1_cp5

0x8815,	// (0x000151f8) bg_active_tab_pane_g2_cp5

0x88a8,	// (0x0001528b) bg_active_tab_pane_g3_cp5

0x889f,	// (0x00015282) bg_passive_tab_pane_g1_cp5

0x8815,	// (0x000151f8) bg_passive_tab_pane_g2_cp5

0x88a8,	// (0x0001528b) bg_passive_tab_pane_g3_cp5

0x88b1,	// (0x00015294) list_set_graphic_pane_ParamLimits

0x88b1,	// (0x00015294) list_set_graphic_pane

0x3daa,	// (0x0001078d) bg_set_opt_pane_cp4

0x88cf,	// (0x000152b2) list_set_graphic_pane_g1_ParamLimits

0x88cf,	// (0x000152b2) list_set_graphic_pane_g1

0x88db,	// (0x000152be) list_set_graphic_pane_g2_ParamLimits

0x88db,	// (0x000152be) list_set_graphic_pane_g2

0x0001,

0xf744,	// (0x0001c127) list_set_graphic_pane_g_ParamLimits

0xf744,	// (0x0001c127) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x0001c4bf) volume_small_pane_cp_g

0x88fd,	// (0x000152e0) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x88fd,	// (0x000152e0) list_double2_large_graphic_pane_g1_cp2

0x8909,	// (0x000152ec) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8909,	// (0x000152ec) list_double2_large_graphic_pane_g2_cp2

0x891a,	// (0x000152fd) list_double2_large_graphic_pane_g3_cp2

0x8922,	// (0x00015305) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8922,	// (0x00015305) list_double2_large_graphic_pane_t1_cp2

0x8938,	// (0x0001531b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8938,	// (0x0001531b) list_double2_large_graphic_pane_t2_cp2

0xa604,	// (0x00016fe7) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa604,	// (0x00016fe7) list_double_large_graphic_pane_g1_cp2

0xa615,	// (0x00016ff8) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa615,	// (0x00016ff8) list_double_large_graphic_pane_g2_cp2

0x8aa5,	// (0x00015488) list_double_large_graphic_pane_g3_cp2

0xa626,	// (0x00017009) list_double_large_graphic_pane_g4_cp

0xa62e,	// (0x00017011) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa62e,	// (0x00017011) list_double_large_graphic_pane_t1_cp2

0xa645,	// (0x00017028) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa645,	// (0x00017028) list_double_large_graphic_pane_t2_cp2

0x89a3,	// (0x00015386) list_double2_graphic_pane_g1_cp2_ParamLimits

0x89a3,	// (0x00015386) list_double2_graphic_pane_g1_cp2

0x89b1,	// (0x00015394) list_double2_graphic_pane_g2_cp2_ParamLimits

0x89b1,	// (0x00015394) list_double2_graphic_pane_g2_cp2

0x89c2,	// (0x000153a5) list_double2_graphic_pane_g3_cp2

0x89cc,	// (0x000153af) list_double2_graphic_pane_t1_cp2_ParamLimits

0x89cc,	// (0x000153af) list_double2_graphic_pane_t1_cp2

0x89e2,	// (0x000153c5) list_double2_graphic_pane_t2_cp2_ParamLimits

0x89e2,	// (0x000153c5) list_double2_graphic_pane_t2_cp2

0x41db,	// (0x00010bbe) list_single_number_heading_pane_g1_cp2_ParamLimits

0x41db,	// (0x00010bbe) list_single_number_heading_pane_g1_cp2

0x89f4,	// (0x000153d7) list_single_number_heading_pane_g2_cp2

0x89fc,	// (0x000153df) list_single_number_heading_pane_t1_cp2_ParamLimits

0x89fc,	// (0x000153df) list_single_number_heading_pane_t1_cp2

0x8a12,	// (0x000153f5) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8a12,	// (0x000153f5) list_single_number_heading_pane_t2_cp2

0x8a24,	// (0x00015407) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8a24,	// (0x00015407) list_single_number_heading_pane_t3_cp2

0x41db,	// (0x00010bbe) list_single_heading_pane_g1_cp2_ParamLimits

0x41db,	// (0x00010bbe) list_single_heading_pane_g1_cp2

0x89f4,	// (0x000153d7) list_single_heading_pane_g2_cp2

0x89fc,	// (0x000153df) list_single_heading_pane_t1_cp2_ParamLimits

0x89fc,	// (0x000153df) list_single_heading_pane_t1_cp2

0xa40e,	// (0x00016df1) list_single_heading_pane_t2_cp2_ParamLimits

0xa40e,	// (0x00016df1) list_single_heading_pane_t2_cp2

0xa356,	// (0x00016d39) list_double_graphic_pane_g1_cp2_ParamLimits

0xa356,	// (0x00016d39) list_double_graphic_pane_g1_cp2

0xa362,	// (0x00016d45) list_double_graphic_pane_g2_cp2_ParamLimits

0xa362,	// (0x00016d45) list_double_graphic_pane_g2_cp2

0xa371,	// (0x00016d54) list_double_graphic_pane_g3_cp2

0xa379,	// (0x00016d5c) list_double_graphic_pane_t1_cp2_ParamLimits

0xa379,	// (0x00016d5c) list_double_graphic_pane_t1_cp2

0xa38f,	// (0x00016d72) list_double_graphic_pane_t2_cp2_ParamLimits

0xa38f,	// (0x00016d72) list_double_graphic_pane_t2_cp2

0x8a99,	// (0x0001547c) list_double_number_pane_g1_cp2_ParamLimits

0x8a99,	// (0x0001547c) list_double_number_pane_g1_cp2

0x8aa5,	// (0x00015488) list_double_number_pane_g2_cp2

0xa31a,	// (0x00016cfd) list_double_number_pane_t1_cp2_ParamLimits

0xa31a,	// (0x00016cfd) list_double_number_pane_t1_cp2

0xa32e,	// (0x00016d11) list_double_number_pane_t2_cp2_ParamLimits

0xa32e,	// (0x00016d11) list_double_number_pane_t2_cp2

0xa344,	// (0x00016d27) list_double_number_pane_t3_cp2_ParamLimits

0xa344,	// (0x00016d27) list_double_number_pane_t3_cp2

0xa203,	// (0x00016be6) list_single_graphic_pane_g1_cp2_ParamLimits

0xa203,	// (0x00016be6) list_single_graphic_pane_g1_cp2

0x8afd,	// (0x000154e0) list_single_graphic_pane_g2_cp2_ParamLimits

0x8afd,	// (0x000154e0) list_single_graphic_pane_g2_cp2

0x8b09,	// (0x000154ec) list_single_graphic_pane_g3_cp2

0xa1d9,	// (0x00016bbc) list_single_graphic_pane_t1_cp2_ParamLimits

0xa1d9,	// (0x00016bbc) list_single_graphic_pane_t1_cp2

0x8afd,	// (0x000154e0) list_single_number_pane_g1_cp2_ParamLimits

0x8afd,	// (0x000154e0) list_single_number_pane_g1_cp2

0x8b09,	// (0x000154ec) list_single_number_pane_g2_cp2

0xa1d9,	// (0x00016bbc) list_single_number_pane_t1_cp2_ParamLimits

0xa1d9,	// (0x00016bbc) list_single_number_pane_t1_cp2

0xa1ef,	// (0x00016bd2) list_single_number_pane_t2_cp2_ParamLimits

0xa1ef,	// (0x00016bd2) list_single_number_pane_t2_cp2

0x8909,	// (0x000152ec) list_double2_pane_g1_cp2_ParamLimits

0x8909,	// (0x000152ec) list_double2_pane_g1_cp2

0x891a,	// (0x000152fd) list_double2_pane_g2_cp2

0x8a71,	// (0x00015454) list_double2_pane_t1_cp2_ParamLimits

0x8a71,	// (0x00015454) list_double2_pane_t1_cp2

0x8a87,	// (0x0001546a) list_double2_pane_t2_cp2_ParamLimits

0x8a87,	// (0x0001546a) list_double2_pane_t2_cp2

0x8a99,	// (0x0001547c) list_double_pane_g1_cp2_ParamLimits

0x8a99,	// (0x0001547c) list_double_pane_g1_cp2

0x8aa5,	// (0x00015488) list_double_pane_g2_cp2

0x8aad,	// (0x00015490) list_double_pane_t1_cp2_ParamLimits

0x8aad,	// (0x00015490) list_double_pane_t1_cp2

0x8ac3,	// (0x000154a6) list_double_pane_t2_cp2_ParamLimits

0x8ac3,	// (0x000154a6) list_double_pane_t2_cp2

0x8aed,	// (0x000154d0) list_single_pane_cp2_g3

0x8afd,	// (0x000154e0) list_single_pane_g1_cp2_ParamLimits

0x8afd,	// (0x000154e0) list_single_pane_g1_cp2

0x8b09,	// (0x000154ec) list_single_pane_g2_cp2

0x8b11,	// (0x000154f4) list_single_pane_t1_cp2_ParamLimits

0x8b11,	// (0x000154f4) list_single_pane_t1_cp2

0x8b29,	// (0x0001550c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8b29,	// (0x0001550c) list_single_large_graphic_pane_g1_cp2

0x8b35,	// (0x00015518) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8b35,	// (0x00015518) list_single_large_graphic_pane_g2_cp2

0x8b41,	// (0x00015524) list_single_large_graphic_pane_g3_cp2

0x8b49,	// (0x0001552c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8b49,	// (0x0001552c) list_single_large_graphic_pane_g4_cp1

0x8b63,	// (0x00015546) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8b63,	// (0x00015546) list_single_large_graphic_pane_t1_cp2

0xa1a5,	// (0x00016b88) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa1a5,	// (0x00016b88) list_single_graphic_heading_pane_g1_cp2

0xa172,	// (0x00016b55) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa172,	// (0x00016b55) list_single_graphic_heading_pane_g4_cp2

0x8b09,	// (0x000154ec) list_single_graphic_heading_pane_g5_cp2

0xa1b1,	// (0x00016b94) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa1b1,	// (0x00016b94) list_single_graphic_heading_pane_t1_cp2

0xa1c7,	// (0x00016baa) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa1c7,	// (0x00016baa) list_single_graphic_heading_pane_t2_cp2

0xa166,	// (0x00016b49) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa166,	// (0x00016b49) list_single_2graphic_pane_g1_cp2

0xa172,	// (0x00016b55) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa172,	// (0x00016b55) list_single_2graphic_pane_g2_cp2

0x8b09,	// (0x000154ec) list_single_2graphic_pane_g3_cp2

0xa183,	// (0x00016b66) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa183,	// (0x00016b66) list_single_2graphic_pane_g4_cp2

0xa18f,	// (0x00016b72) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa18f,	// (0x00016b72) list_single_2graphic_pane_t1_cp2

0x3c31,	// (0x00010614) list_highlight_pane_g10_cp1

0x9d4e,	// (0x00016731) list_highlight_pane_g1_cp1

0x9d56,	// (0x00016739) list_highlight_pane_g2_cp1

0x9d5e,	// (0x00016741) list_highlight_pane_g3_cp1

0x9d66,	// (0x00016749) list_highlight_pane_g4_cp1

0x9d6e,	// (0x00016751) list_highlight_pane_g5_cp1

0x9d76,	// (0x00016759) list_highlight_pane_g6_cp1

0x9d7e,	// (0x00016761) list_highlight_pane_g7_cp1

0x9d86,	// (0x00016769) list_highlight_pane_g8_cp1

0x9d8e,	// (0x00016771) list_highlight_pane_g9_cp1

0x9c76,	// (0x00016659) form_field_slider_pane_t3

0x9c84,	// (0x00016667) form_field_slider_pane_t4

0x9c92,	// (0x00016675) slider_form_pane_ParamLimits

0x9c92,	// (0x00016675) slider_form_pane

0x3daa,	// (0x0001078d) control_abbreviations

0x3daa,	// (0x0001078d) control_conventions

0x3daa,	// (0x0001078d) control_definitions

0x3daa,	// (0x0001078d) format_table_attribute

0xa458,	// (0x00016e3b) bg_popup_preview_window_pane_g9

0x3daa,	// (0x0001078d) format_table_data2

0x3daa,	// (0x0001078d) format_table_data3

0x3daa,	// (0x0001078d) format_table_data_example

0x0008,

0x3daa,	// (0x0001078d) intro_purpose

0xf8e0,	// (0x0001c2c3) bg_popup_preview_window_pane_g

0x3daa,	// (0x0001078d) texts_category

0x3daa,	// (0x0001078d) texts_graphics

0x8b79,	// (0x0001555c) text_digital

0x8b88,	// (0x0001556b) text_primary

0x8b97,	// (0x0001557a) text_primary_small

0x8ba6,	// (0x00015589) text_secondary

0x8bb5,	// (0x00015598) text_title

0xac66,	// (0x00017649) bg_passive_tab_pane_g1_cp3_srt

0x8815,	// (0x000151f8) bg_passive_tab_pane_g2_cp3_srt

0xac6f,	// (0x00017652) bg_passive_tab_pane_g3_cp3_srt

0x3e26,	// (0x00010809) bg_active_tab_pane_cp3_srt_ParamLimits

0x3e26,	// (0x00010809) bg_active_tab_pane_cp3_srt

0xac78,	// (0x0001765b) tabs_4_active_pane_srt_g1

0xac80,	// (0x00017663) tabs_4_active_pane_srt_t1_ParamLimits

0xac80,	// (0x00017663) tabs_4_active_pane_srt_t1

0xac66,	// (0x00017649) bg_active_tab_pane_g1_cp3_copy1

0x8815,	// (0x000151f8) bg_active_tab_pane_g2_cp3_copy1

0xac6f,	// (0x00017652) bg_active_tab_pane_g3_cp3_copy1

0x3e26,	// (0x00010809) tabs_2_long_active_pane_srt_ParamLimits

0x3e26,	// (0x00010809) tabs_2_long_active_pane_srt

0x3e26,	// (0x00010809) tabs_2_long_passive_pane_srt_ParamLimits

0x3e26,	// (0x00010809) tabs_2_long_passive_pane_srt

0x848c,	// (0x00014e6f) bg_passive_tab_pane_cp4_srt_ParamLimits

0x848c,	// (0x00014e6f) bg_passive_tab_pane_cp4_srt

0xa88b,	// (0x0001726e) bg_passive_tab_pane_g1_cp4_srt

0x8815,	// (0x000151f8) bg_passive_tab_pane_g2_cp4_srt

0xa894,	// (0x00017277) bg_passive_tab_pane_g3_cp4_srt

0x4405,	// (0x00010de8) bg_active_tab_pane_cp4_srt_ParamLimits

0x4405,	// (0x00010de8) bg_active_tab_pane_cp4_srt

0xa89d,	// (0x00017280) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa89d,	// (0x00017280) tabs_2_long_active_pane_srt_t1

0xa88b,	// (0x0001726e) bg_active_tab_pane_g1_cp4_srt

0x8815,	// (0x000151f8) bg_active_tab_pane_g2_cp4_srt

0xa894,	// (0x00017277) bg_active_tab_pane_g3_cp4_srt

0x3e18,	// (0x000107fb) tabs_3_long_active_pane_srt_ParamLimits

0x3e18,	// (0x000107fb) tabs_3_long_active_pane_srt

0x3e18,	// (0x000107fb) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3e18,	// (0x000107fb) tabs_3_long_passive_pane_cp_srt

0x3e18,	// (0x000107fb) tabs_3_long_passive_pane_srt_ParamLimits

0x3e18,	// (0x000107fb) tabs_3_long_passive_pane_srt

0x848c,	// (0x00014e6f) bg_passive_tab_pane_cp5_srt_ParamLimits

0x848c,	// (0x00014e6f) bg_passive_tab_pane_cp5_srt

0x889f,	// (0x00015282) bg_passive_tab_pane_g1_cp5_srt

0x8815,	// (0x000151f8) bg_passive_tab_pane_g2_cp5_srt

0x88a8,	// (0x0001528b) bg_passive_tab_pane_g3_cp5_srt

0x4405,	// (0x00010de8) bg_active_tab_pane_cp5_srt_ParamLimits

0x4405,	// (0x00010de8) bg_active_tab_pane_cp5_srt

0xa879,	// (0x0001725c) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa879,	// (0x0001725c) tabs_3_long_active_pane_srt_t1

0x889f,	// (0x00015282) bg_active_tab_pane_g1_cp5_srt

0x8815,	// (0x000151f8) bg_active_tab_pane_g2_cp5_srt

0x88a8,	// (0x0001528b) bg_active_tab_pane_g3_cp5_srt

0xa86b,	// (0x0001724e) navi_text_pane_srt_t1

0xa863,	// (0x00017246) navi_icon_pane_srt_g1

0x8d86,	// (0x00015769) midp_editing_number_pane_srt

0x8bc4,	// (0x000155a7) midp_ticker_pane_srt

0x8d8e,	// (0x00015771) midp_ticker_pane_srt_g1

0x8d96,	// (0x00015779) midp_ticker_pane_srt_g2

0x0001,

0xf763,	// (0x0001c146) midp_ticker_pane_srt_g

0x8d9e,	// (0x00015781) midp_ticker_pane_srt_t1

0xa854,	// (0x00017237) midp_editing_number_pane_t1_copy1

0x8bcc,	// (0x000155af) listscroll_midp_pane

0x8bcc,	// (0x000155af) midp_form_pane

0x8c3e,	// (0x00015621) midp_info_popup_window_ParamLimits

0x8c3e,	// (0x00015621) midp_info_popup_window

0x4373,	// (0x00010d56) bg_popup_sub_pane_cp50_ParamLimits

0x4373,	// (0x00010d56) bg_popup_sub_pane_cp50

0x9996,	// (0x00016379) listscroll_midp_info_pane_ParamLimits

0x9996,	// (0x00016379) listscroll_midp_info_pane

0x9976,	// (0x00016359) listscroll_form_midp_pane_ParamLimits

0x9976,	// (0x00016359) listscroll_form_midp_pane

0x9982,	// (0x00016365) scroll_bar_cp050

0x9956,	// (0x00016339) list_midp_pane

0xb9b7,	// (0x0001839a) signal_pane_g2_cp

0x9890,	// (0x00016273) listscroll_midp_info_pane_t1_ParamLimits

0x9890,	// (0x00016273) listscroll_midp_info_pane_t1

0x98a8,	// (0x0001628b) listscroll_midp_info_pane_t2_ParamLimits

0x98a8,	// (0x0001628b) listscroll_midp_info_pane_t2

0x98e6,	// (0x000162c9) listscroll_midp_info_pane_t3_ParamLimits

0x98e6,	// (0x000162c9) listscroll_midp_info_pane_t3

0x9920,	// (0x00016303) listscroll_midp_info_pane_t4_ParamLimits

0x9920,	// (0x00016303) listscroll_midp_info_pane_t4

0x0003,

0xf81b,	// (0x0001c1fe) listscroll_midp_info_pane_t_ParamLimits

0xf81b,	// (0x0001c1fe) listscroll_midp_info_pane_t

0x43e9,	// (0x00010dcc) scroll_pane_cp21

0x9830,	// (0x00016213) form_midp_field_choice_group_pane

0x9839,	// (0x0001621c) form_midp_field_text_pane

0x9876,	// (0x00016259) form_midp_field_time_pane

0x987e,	// (0x00016261) form_midp_gauge_slider_pane

0x9887,	// (0x0001626a) form_midp_gauge_wait_pane

0x3daa,	// (0x0001078d) form_midp_image_pane

0x97fe,	// (0x000161e1) list_single_midp_pane_ParamLimits

0x97fe,	// (0x000161e1) list_single_midp_pane

0x97b3,	// (0x00016196) form_midp_field_text_pane_t1

0x956e,	// (0x00015f51) input_focus_pane_cp050

0x97ed,	// (0x000161d0) list_midp_form_text_pane

0x9782,	// (0x00016165) form_midp_field_choice_group_pane_t1

0x9790,	// (0x00016173) input_focus_pane_cp051

0x97a4,	// (0x00016187) list_midp_choice_pane

0x3daa,	// (0x0001078d) status_idle_pane

0x9766,	// (0x00016149) form_midp_field_time_pane_t1

0x3c31,	// (0x00010614) wait_anim_pane_g2_copy1

0x9774,	// (0x00016157) form_midp_field_time_pane_t2

0x0001,

0x8cee,	// (0x000156d1) aid_navinavi_width_2_pane

0xf816,	// (0x0001c1f9) form_midp_field_time_pane_t

0x3daa,	// (0x0001078d) input_focus_pane_cp052

0x3daa,	// (0x0001078d) bg_input_focus_pane_cp040

0x9726,	// (0x00016109) form_midp_gauge_slider_pane_t1

0x9734,	// (0x00016117) form_midp_gauge_slider_pane_t2

0x9742,	// (0x00016125) form_midp_gauge_slider_pane_t3

0x9750,	// (0x00016133) form_midp_gauge_slider_pane_t4

0x0003,

0xf80d,	// (0x0001c1f0) form_midp_gauge_slider_pane_t

0x975e,	// (0x00016141) form_midp_slider_pane

0x3e26,	// (0x00010809) bg_input_focus_pane_cp041_ParamLimits

0x3e26,	// (0x00010809) bg_input_focus_pane_cp041

0x96f3,	// (0x000160d6) form_midp_gauge_wait_pane_t1_ParamLimits

0x96f3,	// (0x000160d6) form_midp_gauge_wait_pane_t1

0x9705,	// (0x000160e8) form_midp_gauge_wait_pane_t2_ParamLimits

0x9705,	// (0x000160e8) form_midp_gauge_wait_pane_t2

0x0001,

0xf808,	// (0x0001c1eb) form_midp_gauge_wait_pane_t_ParamLimits

0xf808,	// (0x0001c1eb) form_midp_gauge_wait_pane_t

0x9717,	// (0x000160fa) form_midp_wait_pane_ParamLimits

0x9717,	// (0x000160fa) form_midp_wait_pane

0x96bd,	// (0x000160a0) form_midp_image_pane_g1

0x96c6,	// (0x000160a9) form_midp_image_pane_t1

0x96d5,	// (0x000160b8) form_midp_image_pane_t2

0x96e4,	// (0x000160c7) form_midp_image_pane_t3

0x0002,

0xf801,	// (0x0001c1e4) form_midp_image_pane_t

0x96a5,	// (0x00016088) list_single_midp_pane_g1

0x96ae,	// (0x00016091) list_single_midp_pane_t1

0x967c,	// (0x0001605f) list_midp_form_item_pane_ParamLimits

0x967c,	// (0x0001605f) list_midp_form_item_pane

0x8c96,	// (0x00015679) list_midp_form_item_pane_t1

0x8ca5,	// (0x00015688) midp_ticker_pane_g1

0x8cb1,	// (0x00015694) midp_ticker_pane_g2

0x0001,

0xf749,	// (0x0001c12c) midp_ticker_pane_g

0x8cbd,	// (0x000156a0) midp_ticker_pane_t1

0xaad4,	// (0x000174b7) midp_editing_number_pane_t1

0xaab2,	// (0x00017495) midp_editing_number_pane

0xaac1,	// (0x000174a4) midp_ticker_pane

0xa832,	// (0x00017215) ai_message_heading_pane

0x3daa,	// (0x0001078d) bg_popup_window_pane_cp14

0xa83a,	// (0x0001721d) listscroll_ai_message_pane

0xa7bc,	// (0x0001719f) ai_message_heading_pane_g1_ParamLimits

0xa7bc,	// (0x0001719f) ai_message_heading_pane_g1

0xa7c8,	// (0x000171ab) ai_message_heading_pane_g2_ParamLimits

0xa7c8,	// (0x000171ab) ai_message_heading_pane_g2

0xa7d4,	// (0x000171b7) ai_message_heading_pane_g3_ParamLimits

0xa7d4,	// (0x000171b7) ai_message_heading_pane_g3

0xa7e0,	// (0x000171c3) ai_message_heading_pane_g4_ParamLimits

0xa7e0,	// (0x000171c3) ai_message_heading_pane_g4

0x0003,

0xf942,	// (0x0001c325) ai_message_heading_pane_g_ParamLimits

0xf942,	// (0x0001c325) ai_message_heading_pane_g

0xa7ec,	// (0x000171cf) ai_message_heading_pane_t1_ParamLimits

0xa7ec,	// (0x000171cf) ai_message_heading_pane_t1

0xa806,	// (0x000171e9) ai_message_heading_pane_t2_ParamLimits

0xa806,	// (0x000171e9) ai_message_heading_pane_t2

0x0001,

0xf94b,	// (0x0001c32e) ai_message_heading_pane_t_ParamLimits

0xf94b,	// (0x0001c32e) ai_message_heading_pane_t

0xa818,	// (0x000171fb) bg_popup_heading_pane_cp1_ParamLimits

0xa818,	// (0x000171fb) bg_popup_heading_pane_cp1

0xa7aa,	// (0x0001718d) list_ai_message_pane_ParamLimits

0xa7aa,	// (0x0001718d) list_ai_message_pane

0x43e9,	// (0x00010dcc) scroll_pane_cp10

0xa746,	// (0x00017129) list_ai_message_pane_g1

0xa74e,	// (0x00017131) list_ai_message_pane_g2

0x0001,

0xf91f,	// (0x0001c302) list_ai_message_pane_g

0xa756,	// (0x00017139) list_ai_message_pane_t1_ParamLimits

0xa756,	// (0x00017139) list_ai_message_pane_t1

0xa76b,	// (0x0001714e) list_ai_message_pane_t2_ParamLimits

0xa76b,	// (0x0001714e) list_ai_message_pane_t2

0xa780,	// (0x00017163) list_ai_message_pane_t3_ParamLimits

0xa780,	// (0x00017163) list_ai_message_pane_t3

0xa795,	// (0x00017178) list_ai_message_pane_t4_ParamLimits

0xa795,	// (0x00017178) list_ai_message_pane_t4

0x0003,

0xf924,	// (0x0001c307) list_ai_message_pane_t_ParamLimits

0xf924,	// (0x0001c307) list_ai_message_pane_t

0xa731,	// (0x00017114) cell_ai_soft_ind_pane_ParamLimits

0xa731,	// (0x00017114) cell_ai_soft_ind_pane

0x8ccf,	// (0x000156b2) cell_ai_soft_ind_pane_g1_ParamLimits

0x8ccf,	// (0x000156b2) cell_ai_soft_ind_pane_g1

0x3daa,	// (0x0001078d) grid_highlight_cp1

0x8cdc,	// (0x000156bf) text_secondary_cp56_ParamLimits

0x8cdc,	// (0x000156bf) text_secondary_cp56

0xa706,	// (0x000170e9) example_general_pane_ParamLimits

0xa706,	// (0x000170e9) example_general_pane

0xa712,	// (0x000170f5) example_parent_pane_g1_ParamLimits

0xa712,	// (0x000170f5) example_parent_pane_g1

0xa71e,	// (0x00017101) example_parent_pane_t1_ParamLimits

0xa71e,	// (0x00017101) example_parent_pane_t1

0x61ca,	// (0x00012bad) popup_preview_text_window_ParamLimits

0x61ca,	// (0x00012bad) popup_preview_text_window

0x8af5,	// (0x000154d8) list_single_pane_cp2_g4

0x4012,	// (0x000109f5) bg_popup_preview_window_pane_ParamLimits

0x4012,	// (0x000109f5) bg_popup_preview_window_pane

0xa460,	// (0x00016e43) popup_preview_text_window_t1_ParamLimits

0xa460,	// (0x00016e43) popup_preview_text_window_t1

0xa47e,	// (0x00016e61) popup_preview_text_window_t2_ParamLimits

0xa47e,	// (0x00016e61) popup_preview_text_window_t2

0xa4c7,	// (0x00016eaa) popup_preview_text_window_t3_ParamLimits

0xa4c7,	// (0x00016eaa) popup_preview_text_window_t3

0xa50c,	// (0x00016eef) popup_preview_text_window_t4_ParamLimits

0xa50c,	// (0x00016eef) popup_preview_text_window_t4

0x0004,

0xf8f3,	// (0x0001c2d6) popup_preview_text_window_t_ParamLimits

0xf8f3,	// (0x0001c2d6) popup_preview_text_window_t

0xa58a,	// (0x00016f6d) scroll_pane_cp11

0x944e,	// (0x00015e31) bg_popup_preview_window_pane_g1

0xa420,	// (0x00016e03) bg_popup_preview_window_pane_g2

0xa428,	// (0x00016e0b) bg_popup_preview_window_pane_g3

0xa430,	// (0x00016e13) bg_popup_preview_window_pane_g4

0xa438,	// (0x00016e1b) bg_popup_preview_window_pane_g5

0xa440,	// (0x00016e23) bg_popup_preview_window_pane_g6

0xa448,	// (0x00016e2b) bg_popup_preview_window_pane_g7

0xa450,	// (0x00016e33) bg_popup_preview_window_pane_g8

0x53c9,	// (0x00011dac) aid_popup_width_pane

0x61a8,	// (0x00012b8b) popup_midp_note_alarm_window_ParamLimits

0x61a8,	// (0x00012b8b) popup_midp_note_alarm_window

0x425c,	// (0x00010c3f) data_form_pane_ParamLimits

0x82ba,	// (0x00014c9d) form_field_data_pane_g1

0x82c4,	// (0x00014ca7) form_field_data_pane_t1_ParamLimits

0x4268,	// (0x00010c4b) input_focus_pane_ParamLimits

0x4276,	// (0x00010c59) data_form_wide_pane_ParamLimits

0x4287,	// (0x00010c6a) form_field_data_wide_pane_g1

0x42a7,	// (0x00010c8a) form_field_data_wide_pane_t1_ParamLimits

0x40e6,	// (0x00010ac9) input_focus_pane_cp6_ParamLimits

0x8430,	// (0x00014e13) input_popup_find_pane_g1_ParamLimits

0x8430,	// (0x00014e13) input_popup_find_pane_g1

0x5937,	// (0x0001231a) aid_navi_side_left_pane

0x594c,	// (0x0001232f) aid_navi_side_right_pane

0x9e49,	// (0x0001682c) bg_popup_window_pane_cp30_ParamLimits

0x9e49,	// (0x0001682c) bg_popup_window_pane_cp30

0x9ec3,	// (0x000168a6) popup_midp_note_alarm_window_g1_ParamLimits

0x9ec3,	// (0x000168a6) popup_midp_note_alarm_window_g1

0x9ef3,	// (0x000168d6) popup_midp_note_alarm_window_t1_ParamLimits

0x9ef3,	// (0x000168d6) popup_midp_note_alarm_window_t1

0x9f94,	// (0x00016977) popup_midp_note_alarm_window_t2_ParamLimits

0x9f94,	// (0x00016977) popup_midp_note_alarm_window_t2

0xa042,	// (0x00016a25) popup_midp_note_alarm_window_t3_ParamLimits

0xa042,	// (0x00016a25) popup_midp_note_alarm_window_t3

0xa06a,	// (0x00016a4d) popup_midp_note_alarm_window_t4_ParamLimits

0xa06a,	// (0x00016a4d) popup_midp_note_alarm_window_t4

0xa08a,	// (0x00016a6d) popup_midp_note_alarm_window_t5_ParamLimits

0xa08a,	// (0x00016a6d) popup_midp_note_alarm_window_t5

0x000a,

0xf890,	// (0x0001c273) popup_midp_note_alarm_window_t_ParamLimits

0xf890,	// (0x0001c273) popup_midp_note_alarm_window_t

0xa136,	// (0x00016b19) wait_bar_pane_cp1_ParamLimits

0xa136,	// (0x00016b19) wait_bar_pane_cp1

0x3daa,	// (0x0001078d) wait_anim_pane_copy1

0x3daa,	// (0x0001078d) wait_border_pane_copy1

0x9b3f,	// (0x00016522) wait_border_pane_g1_copy1

0x42c1,	// (0x00010ca4) form_field_popup_pane_g1

0x82dc,	// (0x00014cbf) form_field_popup_pane_t1_ParamLimits

0x4268,	// (0x00010c4b) input_focus_pane_cp7_ParamLimits

0x42c9,	// (0x00010cac) list_form_pane_ParamLimits

0x42d5,	// (0x00010cb8) form_field_popup_wide_pane_g1

0x42dd,	// (0x00010cc0) form_field_popup_wide_pane_t1_ParamLimits

0x4268,	// (0x00010c4b) input_focus_pane_cp8_ParamLimits

0x42f2,	// (0x00010cd5) list_form_wide_pane_ParamLimits

0xacfa,	// (0x000176dd) aid_size_cell_graphic_pane

0x8350,	// (0x00014d33) data_form_pane_t1_ParamLimits

0xaa7f,	// (0x00017462) data_form_wide_pane_t1_ParamLimits

0x8ff6,	// (0x000159d9) bg_status_flat_pane

0x7957,	// (0x0001433a) title_pane_t1_ParamLimits

0x3de0,	// (0x000107c3) title_pane_t2_ParamLimits

0x3e06,	// (0x000107e9) title_pane_t3_ParamLimits

0xf557,	// (0x0001bf3a) title_pane_t_ParamLimits

0x4851,	// (0x00011234) level_1_signal_ParamLimits

0x485e,	// (0x00011241) level_2_signal_ParamLimits

0x486b,	// (0x0001124e) level_3_signal_ParamLimits

0x4878,	// (0x0001125b) level_4_signal_ParamLimits

0x4885,	// (0x00011268) level_5_signal_ParamLimits

0x489a,	// (0x0001127d) level_6_signal_ParamLimits

0x48a7,	// (0x0001128a) level_7_signal_ParamLimits

0x4851,	// (0x00011234) level_1_battery_ParamLimits

0x485e,	// (0x00011241) level_2_battery_ParamLimits

0x486b,	// (0x0001124e) level_3_battery_ParamLimits

0x4878,	// (0x0001125b) level_4_battery_ParamLimits

0x4885,	// (0x00011268) level_5_battery_ParamLimits

0x489a,	// (0x0001127d) level_6_battery_ParamLimits

0x48a7,	// (0x0001128a) level_7_battery_ParamLimits

0x9d4e,	// (0x00016731) bg_status_flat_pane_g1

0x9d56,	// (0x00016739) bg_status_flat_pane_g2

0x9d5e,	// (0x00016741) bg_status_flat_pane_g3

0x9d66,	// (0x00016749) bg_status_flat_pane_g4

0x9d6e,	// (0x00016751) bg_status_flat_pane_g5

0x9d76,	// (0x00016759) bg_status_flat_pane_g6

0x9d7e,	// (0x00016761) bg_status_flat_pane_g7

0x79c7,	// (0x000143aa) tabs_3_active_pane_t1_ParamLimits

0x79c7,	// (0x000143aa) tabs_3_passive_pane_t1_ParamLimits

0x79e1,	// (0x000143c4) tabs_4_active_pane_t1_ParamLimits

0x79e1,	// (0x000143c4) tabs_4_1_passive_pane_t1_ParamLimits

0x8467,	// (0x00014e4a) tabs_2_active_pane_t1_ParamLimits

0x8467,	// (0x00014e4a) tabs_2_passive_pane_t1_ParamLimits

0x4405,	// (0x00010de8) bg_active_tab_pane_cp4_ParamLimits

0x8479,	// (0x00014e5c) tabs_2_long_active_pane_t1_ParamLimits

0x848c,	// (0x00014e6f) bg_passive_tab_pane_cp4_ParamLimits

0x64ed,	// (0x00012ed0) list_single_midp_graphic_pane_t1_ParamLimits

0x4405,	// (0x00010de8) bg_active_tab_pane_cp5_ParamLimits

0x8498,	// (0x00014e7b) tabs_3_long_active_pane_t1_ParamLimits

0x848c,	// (0x00014e6f) bg_passive_tab_pane_cp5_ParamLimits

0x64ed,	// (0x00012ed0) list_single_midp_graphic_pane_t1

0x8ff6,	// (0x000159d9) bg_status_flat_pane_ParamLimits

0x90bf,	// (0x00015aa2) indicator_pane_cp2_ParamLimits

0x90bf,	// (0x00015aa2) indicator_pane_cp2

0x91ea,	// (0x00015bcd) navi_pane_srt_ParamLimits

0x91ea,	// (0x00015bcd) navi_pane_srt

0x920e,	// (0x00015bf1) popup_clock_digital_analogue_window_cp1

0x3e84,	// (0x00010867) indicator_pane_t1

0x8bc4,	// (0x000155a7) copy_highlight_pane

0x8bc4,	// (0x000155a7) cursor_graphics_pane

0x8bc4,	// (0x000155a7) graphic_within_text_pane

0x8bc4,	// (0x000155a7) link_highlight_pane

0xa54d,	// (0x00016f30) popup_preview_text_window_t5_ParamLimits

0xa54d,	// (0x00016f30) popup_preview_text_window_t5

0x8cf6,	// (0x000156d9) cursor_digital_pane

0x8cf6,	// (0x000156d9) cursor_primary_pane

0x8d07,	// (0x000156ea) cursor_primary_small_pane

0x8d0f,	// (0x000156f2) cursor_secondary_pane

0x8d17,	// (0x000156fa) cursor_title_pane

0x8cf6,	// (0x000156d9) link_highlight_digital_pane

0x8cfe,	// (0x000156e1) link_highlight_primary_pane

0x8d07,	// (0x000156ea) link_highlight_primary_small_pane

0x8d0f,	// (0x000156f2) link_highlight_secondary_pane

0x8d17,	// (0x000156fa) link_highlight_title_pane

0x8cf6,	// (0x000156d9) copy_highlight_digital_pane

0x8cf6,	// (0x000156d9) copy_highlight_primary_pane

0x8d07,	// (0x000156ea) copy_highlight_primary_small_pane

0x8d0f,	// (0x000156f2) copy_highlight_secondary_pane

0x8d17,	// (0x000156fa) copy_highlight_title_pane

0x8d0f,	// (0x000156f2) graphic_text_digital_pane

0x9dec,	// (0x000167cf) graphic_text_primary_pane

0x9df5,	// (0x000167d8) graphic_text_primary_small_pane

0x8d07,	// (0x000156ea) graphic_text_secondary_pane

0x8cf6,	// (0x000156d9) graphic_text_title_pane

0x8d1f,	// (0x00015702) cursor_primary_pane_g1

0x9dde,	// (0x000167c1) cursor_text_primary_t1

0x9dc6,	// (0x000167a9) cursor_primary_small_pane_g1

0x9dd0,	// (0x000167b3) cursor_text_primary_small_t1

0x9dae,	// (0x00016791) cursor_primary_small_pane_g1_copy1

0x9db8,	// (0x0001679b) cursor_text_primary_small_t1_copy1

0x9d96,	// (0x00016779) cursor_text_title_t1

0x9da4,	// (0x00016787) cursor_title_pane_g1

0x8d1f,	// (0x00015702) cursor_digital_pane_g1

0x8d29,	// (0x0001570c) cursor_text_digital_t1

0x8d37,	// (0x0001571a) link_highlight_primary_pane_g1

0x9d3f,	// (0x00016722) link_highlight_primary_pane_t1

0x8d37,	// (0x0001571a) link_highlight_primary_small_pane_g1

0x8d3f,	// (0x00015722) link_highlight_primary_small_pane_t1

0x8d37,	// (0x0001571a) link_highlight_secondary_pane_g1

0x8d4e,	// (0x00015731) link_highlight_secondary_pane_t1

0x9ca4,	// (0x00016687) link_highlight_title_pane_g1

0x9cbb,	// (0x0001669e) link_highlight_title_pane_t1

0x9ca4,	// (0x00016687) link_highlight_digital_pane_g1

0x9cac,	// (0x0001668f) link_highlight_digital_pane_t1

0x9b5e,	// (0x00016541) copy_highlight_primary_pane_g1

0x9b84,	// (0x00016567) copy_highlight_primary_pane_t1

0x9b5e,	// (0x00016541) copy_highlight_primary_small_pane_g1

0x9b75,	// (0x00016558) copy_highlight_primary_small_pane_t1

0x8d5d,	// (0x00015740) copy_highlight_secondary_pane_g1

0x8d65,	// (0x00015748) copy_highlight_secondary_pane_t1

0x9b5e,	// (0x00016541) copy_highlight_title_pane_g1

0x9b66,	// (0x00016549) copy_highlight_title_pane_t1

0x9b5e,	// (0x00016541) copy_highlight_digital_pane_g1

0xaec8,	// (0x000178ab) copy_highlight_digital_pane_t1

0xae1c,	// (0x000177ff) graphic_text_primary_pane_g1

0xaeac,	// (0x0001788f) graphic_text_primary_pane_t1

0xaeba,	// (0x0001789d) graphic_text_primary_pane_t2

0x0001,

0xf9bf,	// (0x0001c3a2) graphic_text_primary_pane_t

0xae88,	// (0x0001786b) graphic_text_primary_small_pane_g1

0xae90,	// (0x00017873) graphic_text_primary_small_pane_t1

0xae9e,	// (0x00017881) graphic_text_primary_small_pane_t2

0x0001,

0xf9ba,	// (0x0001c39d) graphic_text_primary_small_pane_t

0xae64,	// (0x00017847) graphic_text_secondary_pane_g1

0xae6c,	// (0x0001784f) graphic_text_secondary_pane_t1

0xae7a,	// (0x0001785d) graphic_text_secondary_pane_t2

0x0001,

0xf9b5,	// (0x0001c398) graphic_text_secondary_pane_t

0xae40,	// (0x00017823) graphic_text_title_pane_g1

0xae48,	// (0x0001782b) graphic_text_title_pane_t1

0xae56,	// (0x00017839) graphic_text_title_pane_t2

0x0001,

0xf9b0,	// (0x0001c393) graphic_text_title_pane_t

0xae1c,	// (0x000177ff) graphic_text_digital_pane_g1

0xae24,	// (0x00017807) graphic_text_digital_pane_t1

0xae32,	// (0x00017815) graphic_text_digital_pane_t2

0x0001,

0xf9ab,	// (0x0001c38e) graphic_text_digital_pane_t

0x3e26,	// (0x00010809) navi_icon_pane_srt_ParamLimits

0x3e26,	// (0x00010809) navi_icon_pane_srt

0x3daa,	// (0x0001078d) navi_midp_pane_srt

0x3daa,	// (0x0001078d) navi_navi_pane_srt

0x3e26,	// (0x00010809) navi_text_pane_srt_ParamLimits

0x3e26,	// (0x00010809) navi_text_pane_srt

0xade7,	// (0x000177ca) navi_navi_icon_text_pane_srt

0xadef,	// (0x000177d2) navi_navi_pane_srt_g1_ParamLimits

0xadef,	// (0x000177d2) navi_navi_pane_srt_g1

0xae01,	// (0x000177e4) navi_navi_pane_srt_g2_ParamLimits

0xae01,	// (0x000177e4) navi_navi_pane_srt_g2

0x0001,

0xf9a6,	// (0x0001c389) navi_navi_pane_srt_g_ParamLimits

0xf9a6,	// (0x0001c389) navi_navi_pane_srt_g

0xae13,	// (0x000177f6) navi_navi_tabs_pane_srt

0xade7,	// (0x000177ca) navi_navi_text_pane_srt

0xade7,	// (0x000177ca) navi_navi_volume_pane_srt

0xadd8,	// (0x000177bb) navi_navi_text_pane_srt_t1

0x686d,	// (0x00013250) navi_navi_volume_pane_srt_g1

0x6875,	// (0x00013258) volume_small_pane_srt_ParamLimits

0x6875,	// (0x00013258) volume_small_pane_srt

0x5c0e,	// (0x000125f1) volume_small_pane_srt_g1_ParamLimits

0x5c0e,	// (0x000125f1) volume_small_pane_srt_g1

0x5c1e,	// (0x00012601) volume_small_pane_srt_g2_ParamLimits

0x5c1e,	// (0x00012601) volume_small_pane_srt_g2

0x5c2f,	// (0x00012612) volume_small_pane_srt_g3_ParamLimits

0x5c2f,	// (0x00012612) volume_small_pane_srt_g3

0x5c40,	// (0x00012623) volume_small_pane_srt_g4_ParamLimits

0x5c40,	// (0x00012623) volume_small_pane_srt_g4

0x5c51,	// (0x00012634) volume_small_pane_srt_g5_ParamLimits

0x5c51,	// (0x00012634) volume_small_pane_srt_g5

0x5c62,	// (0x00012645) volume_small_pane_srt_g6_ParamLimits

0x5c62,	// (0x00012645) volume_small_pane_srt_g6

0x5c73,	// (0x00012656) volume_small_pane_srt_g7_ParamLimits

0x5c73,	// (0x00012656) volume_small_pane_srt_g7

0x5c84,	// (0x00012667) volume_small_pane_srt_g8_ParamLimits

0x5c84,	// (0x00012667) volume_small_pane_srt_g8

0x5c95,	// (0x00012678) volume_small_pane_srt_g9_ParamLimits

0x5c95,	// (0x00012678) volume_small_pane_srt_g9

0x5ca6,	// (0x00012689) volume_small_pane_srt_g10_ParamLimits

0x5ca6,	// (0x00012689) volume_small_pane_srt_g10

0x0009,

0xf74e,	// (0x0001c131) volume_small_pane_srt_g_ParamLimits

0xf74e,	// (0x0001c131) volume_small_pane_srt_g

0x7b77,	// (0x0001455a) query_popup_data_pane_cp2

0xadbe,	// (0x000177a1) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xadbe,	// (0x000177a1) navi_navi_icon_text_pane_srt_t1

0x9dec,	// (0x000167cf) navi_tabs_2_long_pane_srt

0x9dec,	// (0x000167cf) navi_tabs_2_pane_srt

0x9dec,	// (0x000167cf) navi_tabs_3_long_pane_srt

0x9dec,	// (0x000167cf) navi_tabs_3_pane_srt

0x9dec,	// (0x000167cf) navi_tabs_4_pane_srt

0x684d,	// (0x00013230) tabs_2_active_pane_srt_ParamLimits

0x684d,	// (0x00013230) tabs_2_active_pane_srt

0x685d,	// (0x00013240) tabs_2_passive_pane_srt_ParamLimits

0x685d,	// (0x00013240) tabs_2_passive_pane_srt

0x8f17,	// (0x000158fa) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8f17,	// (0x000158fa) bg_passive_tab_pane_cp1_srt

0xad8a,	// (0x0001776d) bg_passive_tab_pane_g1_cp1_srt

0x8815,	// (0x000151f8) bg_passive_tab_pane_g2_cp1_srt

0xad93,	// (0x00017776) bg_passive_tab_pane_g3_cp1_srt

0x3e26,	// (0x00010809) bg_active_tab_pane_cp1_srt_ParamLimits

0x3e26,	// (0x00010809) bg_active_tab_pane_cp1_srt

0xad9c,	// (0x0001777f) tabs_2_active_pane_srt_g1

0xada4,	// (0x00017787) tabs_2_active_pane_srt_t1_ParamLimits

0xada4,	// (0x00017787) tabs_2_active_pane_srt_t1

0xad8a,	// (0x0001776d) bg_active_tab_pane_g1_cp1_srt

0x8815,	// (0x000151f8) bg_active_tab_pane_g2_cp1_srt

0xad93,	// (0x00017776) bg_active_tab_pane_g3_cp1_srt

0x681a,	// (0x000131fd) tabs_3_active_pane_srt_ParamLimits

0x681a,	// (0x000131fd) tabs_3_active_pane_srt

0x682b,	// (0x0001320e) tabs_3_passive_pane_cp_srt_ParamLimits

0x682b,	// (0x0001320e) tabs_3_passive_pane_cp_srt

0x683c,	// (0x0001321f) tabs_3_passive_pane_srt_ParamLimits

0x683c,	// (0x0001321f) tabs_3_passive_pane_srt

0x8f17,	// (0x000158fa) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8f17,	// (0x000158fa) bg_passive_tab_pane_cp2_srt

0x8d74,	// (0x00015757) bg_passive_tab_pane_g1_cp2_srt

0x8815,	// (0x000151f8) bg_passive_tab_pane_g2_cp2_srt

0x8d7d,	// (0x00015760) bg_passive_tab_pane_g3_cp2_srt

0x3e26,	// (0x00010809) bg_active_tab_pane_cp2_srt_ParamLimits

0x3e26,	// (0x00010809) bg_active_tab_pane_cp2_srt

0xad70,	// (0x00017753) tabs_3_active_pane_srt_g1

0xad78,	// (0x0001775b) tabs_3_active_pane_srt_t1_ParamLimits

0xad78,	// (0x0001775b) tabs_3_active_pane_srt_t1

0x8d74,	// (0x00015757) bg_active_tab_pane_g1_cp2_srt

0x8815,	// (0x000151f8) bg_active_tab_pane_g2_cp2_srt

0x8d7d,	// (0x00015760) bg_active_tab_pane_g3_cp2_srt

0x67d2,	// (0x000131b5) tabs_4_active_pane_srt_ParamLimits

0x67d2,	// (0x000131b5) tabs_4_active_pane_srt

0x67e4,	// (0x000131c7) tabs_4_passive_pane_cp2_srt_ParamLimits

0x67e4,	// (0x000131c7) tabs_4_passive_pane_cp2_srt

0x5e15,	// (0x000127f8) aid_size_cell_toolbar

0x848c,	// (0x00014e6f) main_idle_act_pane_ParamLimits

0x5fda,	// (0x000129bd) popup_large_graphic_colour_window_ParamLimits

0x6345,	// (0x00012d28) popup_toolbar_window_ParamLimits

0x6345,	// (0x00012d28) popup_toolbar_window

0xaaff,	// (0x000174e2) list_single_graphic_2heading_pane_ParamLimits

0xaaff,	// (0x000174e2) list_single_graphic_2heading_pane

0x471a,	// (0x000110fd) aid_size_cell_apps_grid_lsc_pane

0x472c,	// (0x0001110f) aid_size_cell_apps_grid_prt_pane

0x8f17,	// (0x000158fa) bg_wml_button_pane_cp1_ParamLimits

0x8f17,	// (0x000158fa) bg_wml_button_pane_cp1

0x97b3,	// (0x00016196) form_midp_field_text_pane_t1_ParamLimits

0x956e,	// (0x00015f51) input_focus_pane_cp050_ParamLimits

0x97ed,	// (0x000161d0) list_midp_form_text_pane_ParamLimits

0x9790,	// (0x00016173) input_focus_pane_cp051_ParamLimits

0x97a4,	// (0x00016187) list_midp_choice_pane_ParamLimits

0x9624,	// (0x00016007) list_single_2graphic_pane_cp3_ParamLimits

0x9624,	// (0x00016007) list_single_2graphic_pane_cp3

0x9649,	// (0x0001602c) list_single_midp_graphic_pane_ParamLimits

0x9649,	// (0x0001602c) list_single_midp_graphic_pane

0x63f2,	// (0x00012dd5) list_single_graphic_2heading_pane_g1_ParamLimits

0x63f2,	// (0x00012dd5) list_single_graphic_2heading_pane_g1

0x63fe,	// (0x00012de1) list_single_graphic_2heading_pane_g4_ParamLimits

0x63fe,	// (0x00012de1) list_single_graphic_2heading_pane_g4

0x640a,	// (0x00012ded) list_single_graphic_2heading_pane_g5_ParamLimits

0x640a,	// (0x00012ded) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a1,	// (0x0001c184) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a1,	// (0x0001c184) list_single_graphic_2heading_pane_g

0x6416,	// (0x00012df9) list_single_graphic_2heading_pane_t1_ParamLimits

0x6416,	// (0x00012df9) list_single_graphic_2heading_pane_t1

0x642a,	// (0x00012e0d) list_single_graphic_2heading_pane_t2_ParamLimits

0x642a,	// (0x00012e0d) list_single_graphic_2heading_pane_t2

0x6444,	// (0x00012e27) list_single_graphic_2heading_pane_t3_ParamLimits

0x6444,	// (0x00012e27) list_single_graphic_2heading_pane_t3

0x0002,

0xf7a8,	// (0x0001c18b) list_single_graphic_2heading_pane_t_ParamLimits

0xf7a8,	// (0x0001c18b) list_single_graphic_2heading_pane_t

0x936a,	// (0x00015d4d) bg_popup_sub_pane_cp2

0x9394,	// (0x00015d77) grid_toobar_pane

0x645c,	// (0x00012e3f) cell_toolbar_pane_ParamLimits

0x645c,	// (0x00012e3f) cell_toolbar_pane

0x93f2,	// (0x00015dd5) cell_toolbar_pane_g1_ParamLimits

0x93f2,	// (0x00015dd5) cell_toolbar_pane_g1

0x9406,	// (0x00015de9) cell_toolbar_pane_g2_ParamLimits

0x9406,	// (0x00015de9) cell_toolbar_pane_g2

0x0001,

0xf7b6,	// (0x0001c199) cell_toolbar_pane_g_ParamLimits

0xf7b6,	// (0x0001c199) cell_toolbar_pane_g

0x9428,	// (0x00015e0b) grid_highlight_pane_cp2_ParamLimits

0x9428,	// (0x00015e0b) grid_highlight_pane_cp2

0x9442,	// (0x00015e25) toolbar_button_pane

0x944e,	// (0x00015e31) toolbar_button_pane_g1

0x9456,	// (0x00015e39) toolbar_button_pane_g2

0x945e,	// (0x00015e41) toolbar_button_pane_g3

0x9466,	// (0x00015e49) toolbar_button_pane_g4

0x946e,	// (0x00015e51) toolbar_button_pane_g5

0x9476,	// (0x00015e59) toolbar_button_pane_g6

0x947e,	// (0x00015e61) toolbar_button_pane_g7

0x9486,	// (0x00015e69) toolbar_button_pane_g8

0x948e,	// (0x00015e71) toolbar_button_pane_g9

0x0009,

0xf7bb,	// (0x0001c19e) toolbar_button_pane_g

0x6494,	// (0x00012e77) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6494,	// (0x00012e77) list_single_2graphic_pane_g1_cp3

0x64a0,	// (0x00012e83) list_single_2graphic_pane_g2_cp3_ParamLimits

0x64a0,	// (0x00012e83) list_single_2graphic_pane_g2_cp3

0x64b1,	// (0x00012e94) list_single_2graphic_pane_g3_cp3

0x64b9,	// (0x00012e9c) list_single_2graphic_pane_g4_cp3_ParamLimits

0x64b9,	// (0x00012e9c) list_single_2graphic_pane_g4_cp3

0x64c5,	// (0x00012ea8) list_single_2graphic_pane_t1_cp3_ParamLimits

0x64c5,	// (0x00012ea8) list_single_2graphic_pane_t1_cp3

0x64e1,	// (0x00012ec4) list_single_midp_graphic_pane_g2_ParamLimits

0x64e1,	// (0x00012ec4) list_single_midp_graphic_pane_g2

0x5e1d,	// (0x00012800) aid_zoom_text_primary

0x5e25,	// (0x00012808) aid_zoom_text_secondary

0x8e2e,	// (0x00015811) status_small_pane_g7_ParamLimits

0x8e2e,	// (0x00015811) status_small_pane_g7

0x8e51,	// (0x00015834) status_small_pane_t1_ParamLimits

0x793a,	// (0x0001431d) title_pane_g2

0x0003,

0xf54e,	// (0x0001bf31) title_pane_g

0x7bd1,	// (0x000145b4) aid_size_cell_colour_1_pane_ParamLimits

0x7bd1,	// (0x000145b4) aid_size_cell_colour_1_pane

0x7be5,	// (0x000145c8) aid_size_cell_colour_2_pane_ParamLimits

0x7be5,	// (0x000145c8) aid_size_cell_colour_2_pane

0x7bf9,	// (0x000145dc) aid_size_cell_colour_3_pane_ParamLimits

0x7bf9,	// (0x000145dc) aid_size_cell_colour_3_pane

0x7c0d,	// (0x000145f0) aid_size_cell_colour_4_pane_ParamLimits

0x7c0d,	// (0x000145f0) aid_size_cell_colour_4_pane

0x5874,	// (0x00012257) title_pane_stacon_g1_ParamLimits

0x5874,	// (0x00012257) title_pane_stacon_g1

0x9bdb,	// (0x000165be) popup_note_wait_window_g3_ParamLimits

0x9bdb,	// (0x000165be) popup_note_wait_window_g3

0x9c51,	// (0x00016634) popup_note_wait_window_t5_ParamLimits

0x9c51,	// (0x00016634) popup_note_wait_window_t5

0x3daa,	// (0x0001078d) main_feb_china_hwr_fs_writing_pane

0x5ec1,	// (0x000128a4) popup_feb_china_hwr_fs_window_ParamLimits

0x5ec1,	// (0x000128a4) popup_feb_china_hwr_fs_window

0x6503,	// (0x00012ee6) aid_size_cell_hwr_fs_ParamLimits

0x6503,	// (0x00012ee6) aid_size_cell_hwr_fs

0x956e,	// (0x00015f51) bg_popup_sub_pane_cp3_ParamLimits

0x956e,	// (0x00015f51) bg_popup_sub_pane_cp3

0x6518,	// (0x00012efb) grid_hwr_fs_pane_ParamLimits

0x6518,	// (0x00012efb) grid_hwr_fs_pane

0x6530,	// (0x00012f13) linegrid_hwr_fs_pane_ParamLimits

0x6530,	// (0x00012f13) linegrid_hwr_fs_pane

0x6540,	// (0x00012f23) cell_hwr_fs_pane_ParamLimits

0x6540,	// (0x00012f23) cell_hwr_fs_pane

0x957a,	// (0x00015f5d) linegrid_hwr_fs_pane_g1_ParamLimits

0x957a,	// (0x00015f5d) linegrid_hwr_fs_pane_g1

0x9586,	// (0x00015f69) linegrid_hwr_fs_pane_g2_ParamLimits

0x9586,	// (0x00015f69) linegrid_hwr_fs_pane_g2

0x9598,	// (0x00015f7b) linegrid_hwr_fs_pane_g3_ParamLimits

0x9598,	// (0x00015f7b) linegrid_hwr_fs_pane_g3

0x6562,	// (0x00012f45) linegrid_hwr_fs_pane_g4_ParamLimits

0x6562,	// (0x00012f45) linegrid_hwr_fs_pane_g4

0x657c,	// (0x00012f5f) linegrid_hwr_fs_pane_g5_ParamLimits

0x657c,	// (0x00012f5f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e6,	// (0x0001c1c9) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e6,	// (0x0001c1c9) linegrid_hwr_fs_pane_g

0x95a4,	// (0x00015f87) cell_hwr_fs_pane_g1_ParamLimits

0x95a4,	// (0x00015f87) cell_hwr_fs_pane_g1

0x92a4,	// (0x00015c87) cell_hwr_fs_pane_g2_ParamLimits

0x92a4,	// (0x00015c87) cell_hwr_fs_pane_g2

0x95ba,	// (0x00015f9d) cell_hwr_fs_pane_g3_ParamLimits

0x95ba,	// (0x00015f9d) cell_hwr_fs_pane_g3

0x95c7,	// (0x00015faa) cell_hwr_fs_pane_g4_ParamLimits

0x95c7,	// (0x00015faa) cell_hwr_fs_pane_g4

0x0003,

0xf7f1,	// (0x0001c1d4) cell_hwr_fs_pane_g_ParamLimits

0xf7f1,	// (0x0001c1d4) cell_hwr_fs_pane_g

0x6592,	// (0x00012f75) cell_hwr_fs_pane_t1

0x3daa,	// (0x0001078d) grid_highlight_pane_cp6

0x3daa,	// (0x0001078d) main_idle_act2_pane

0x43d0,	// (0x00010db3) aid_inside_area_popup_secondary

0xa270,	// (0x00016c53) aid_inside_area_window_primary_ParamLimits

0xa270,	// (0x00016c53) aid_inside_area_window_primary

0xaed7,	// (0x000178ba) ai2_news_ticker_pane

0xaedf,	// (0x000178c2) aid_size_cell_ai1_link_ParamLimits

0xaedf,	// (0x000178c2) aid_size_cell_ai1_link

0xaef9,	// (0x000178dc) popup_ai2_data_window_ParamLimits

0xaef9,	// (0x000178dc) popup_ai2_data_window

0xaf0f,	// (0x000178f2) popup_ai2_link_window_ParamLimits

0xaf0f,	// (0x000178f2) popup_ai2_link_window

0x956e,	// (0x00015f51) bg_popup_sub_pane_cp4_ParamLimits

0x956e,	// (0x00015f51) bg_popup_sub_pane_cp4

0xaf23,	// (0x00017906) grid_ai2_link_pane_ParamLimits

0xaf23,	// (0x00017906) grid_ai2_link_pane

0xaf3a,	// (0x0001791d) popup_ai2_link_window_g1_ParamLimits

0xaf3a,	// (0x0001791d) popup_ai2_link_window_g1

0xaf46,	// (0x00017929) popup_ai2_link_window_g2_ParamLimits

0xaf46,	// (0x00017929) popup_ai2_link_window_g2

0x0001,

0xf9c4,	// (0x0001c3a7) popup_ai2_link_window_g_ParamLimits

0xf9c4,	// (0x0001c3a7) popup_ai2_link_window_g

0xaf55,	// (0x00017938) ai2_mp_button_pane

0xaf5d,	// (0x00017940) ai2_mp_volume_pane

0x9790,	// (0x00016173) bg_popup_sub_pane_cp5_ParamLimits

0x9790,	// (0x00016173) bg_popup_sub_pane_cp5

0xaf65,	// (0x00017948) heading_ai2_gene_pane_ParamLimits

0xaf65,	// (0x00017948) heading_ai2_gene_pane

0xaf71,	// (0x00017954) list_ai2_gene_pane_ParamLimits

0xaf71,	// (0x00017954) list_ai2_gene_pane

0xafb9,	// (0x0001799c) cell_ai2_link_pane_ParamLimits

0xafb9,	// (0x0001799c) cell_ai2_link_pane

0xafcf,	// (0x000179b2) cell_ai2_link_pane_g1

0x3daa,	// (0x0001078d) grid_highlight_pane_cp7

0x688a,	// (0x0001326d) ai2_mp_volume_pane_g1

0xb09f,	// (0x00017a82) ai2_mp_volume_pane_g2

0xb014,	// (0x000179f7) list_ai2_gene_pane_t1

0xb0a7,	// (0x00017a8a) ai2_mp_volume_pane_g3

0x0002,

0xf9dd,	// (0x0001c3c0) ai2_mp_volume_pane_g

0x6892,	// (0x00013275) volume_small_pane_cp3

0xb0af,	// (0x00017a92) aid_size_cell_ai2_button

0xb0b7,	// (0x00017a9a) grid_ai2_button_pane

0xb0c0,	// (0x00017aa3) cell_ai2_button_pane_ParamLimits

0xb0c0,	// (0x00017aa3) cell_ai2_button_pane

0x3c31,	// (0x00010614) cell_ai2_button_pane_g1

0x3daa,	// (0x0001078d) grid_highlight_pane_cp8

0xb05f,	// (0x00017a42) ai2_gene_pane_t1_ParamLimits

0xb05f,	// (0x00017a42) ai2_gene_pane_t1

0x5e0b,	// (0x000127ee) aid_height_parent_landscape

0xa8eb,	// (0x000172ce) aid_height_set_list

0xa8fc,	// (0x000172df) aid_size_parent

0xacfa,	// (0x000176dd) aid_size_cell_graphic_pane_ParamLimits

0xaf81,	// (0x00017964) popup_ai2_data_window_g1_ParamLimits

0xaf81,	// (0x00017964) popup_ai2_data_window_g1

0xaf8d,	// (0x00017970) ai2_news_ticker_pane_g1

0xaf95,	// (0x00017978) ai2_news_ticker_pane_g2

0x0001,

0xf9c9,	// (0x0001c3ac) ai2_news_ticker_pane_g

0xaf9d,	// (0x00017980) ai2_news_ticker_pane_t1

0xafab,	// (0x0001798e) ai2_news_ticker_pane_t2

0x0001,

0xf9ce,	// (0x0001c3b1) ai2_news_ticker_pane_t

0xafd8,	// (0x000179bb) heading_ai2_gene_pane_g1

0xafe0,	// (0x000179c3) heading_ai2_gene_pane_t1_ParamLimits

0xafe0,	// (0x000179c3) heading_ai2_gene_pane_t1

0xaff5,	// (0x000179d8) list_highlight_pane_cp6

0xaffd,	// (0x000179e0) ai2_gene_pane_ParamLimits

0xaffd,	// (0x000179e0) ai2_gene_pane

0xb022,	// (0x00017a05) list_ai2_gene_pane_t2

0x0001,

0xf9d3,	// (0x0001c3b6) list_ai2_gene_pane_t

0xb030,	// (0x00017a13) list_highlight_pane_cp8_ParamLimits

0xb030,	// (0x00017a13) list_highlight_pane_cp8

0xb041,	// (0x00017a24) ai2_gene_pane_g1_ParamLimits

0xb041,	// (0x00017a24) ai2_gene_pane_g1

0xb053,	// (0x00017a36) ai2_gene_pane_g2_ParamLimits

0xb053,	// (0x00017a36) ai2_gene_pane_g2

0x0001,

0xf9d8,	// (0x0001c3bb) ai2_gene_pane_g_ParamLimits

0xf9d8,	// (0x0001c3bb) ai2_gene_pane_g

0x4191,	// (0x00010b74) scroll_pane_cp12

0x5dc8,	// (0x000127ab) control_pane_t3_ParamLimits

0x5dc8,	// (0x000127ab) control_pane_t3

0x8e42,	// (0x00015825) status_small_pane_g8_ParamLimits

0x8e42,	// (0x00015825) status_small_pane_g8

0x5fa3,	// (0x00012986) popup_find_window_ParamLimits

0x61bc,	// (0x00012b9f) popup_note_image_window_ParamLimits

0x93d0,	// (0x00015db3) list_double2_graphic_pane_vc_g1_ParamLimits

0x93d0,	// (0x00015db3) list_double2_graphic_pane_vc_g1

0x41a2,	// (0x00010b85) list_double2_graphic_pane_vc_g2_ParamLimits

0x41a2,	// (0x00010b85) list_double2_graphic_pane_vc_g2

0x41ae,	// (0x00010b91) list_double2_graphic_pane_vc_g3_ParamLimits

0x41ae,	// (0x00010b91) list_double2_graphic_pane_vc_g3

0x0002,

0xf7af,	// (0x0001c192) list_double2_graphic_pane_vc_g_ParamLimits

0xf7af,	// (0x0001c192) list_double2_graphic_pane_vc_g

0x93dc,	// (0x00015dbf) list_double2_graphic_pane_vc_t1_ParamLimits

0x93dc,	// (0x00015dbf) list_double2_graphic_pane_vc_t1

0x41a2,	// (0x00010b85) list_single_heading_pane_vc_g1_ParamLimits

0x41a2,	// (0x00010b85) list_single_heading_pane_vc_g1

0x41ae,	// (0x00010b91) list_single_heading_pane_vc_g2_ParamLimits

0x41ae,	// (0x00010b91) list_single_heading_pane_vc_g2

0x0001,

0xf7d0,	// (0x0001c1b3) list_single_heading_pane_vc_g_ParamLimits

0xf7d0,	// (0x0001c1b3) list_single_heading_pane_vc_g

0x9496,	// (0x00015e79) list_single_heading_pane_vc_t1_ParamLimits

0x9496,	// (0x00015e79) list_single_heading_pane_vc_t1

0x94ac,	// (0x00015e8f) list_single_heading_pane_vc_t2_ParamLimits

0x94ac,	// (0x00015e8f) list_single_heading_pane_vc_t2

0x0001,

0xf7d5,	// (0x0001c1b8) list_single_heading_pane_vc_t_ParamLimits

0xf7d5,	// (0x0001c1b8) list_single_heading_pane_vc_t

0x94be,	// (0x00015ea1) list_setting_number_pane_vc_g1_ParamLimits

0x94be,	// (0x00015ea1) list_setting_number_pane_vc_g1

0x94ca,	// (0x00015ead) list_setting_number_pane_vc_g2_ParamLimits

0x94ca,	// (0x00015ead) list_setting_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c1bd) list_setting_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c1bd) list_setting_number_pane_vc_g

0x94d6,	// (0x00015eb9) list_setting_number_pane_vc_t1_ParamLimits

0x94d6,	// (0x00015eb9) list_setting_number_pane_vc_t1

0x94ea,	// (0x00015ecd) list_setting_number_pane_vc_t2_ParamLimits

0x94ea,	// (0x00015ecd) list_setting_number_pane_vc_t2

0x9506,	// (0x00015ee9) list_setting_number_pane_vc_t3_ParamLimits

0x9506,	// (0x00015ee9) list_setting_number_pane_vc_t3

0x0002,

0xf7df,	// (0x0001c1c2) list_setting_number_pane_vc_t_ParamLimits

0xf7df,	// (0x0001c1c2) list_setting_number_pane_vc_t

0x9532,	// (0x00015f15) set_value_pane_vc_ParamLimits

0x9532,	// (0x00015f15) set_value_pane_vc

0xaaff,	// (0x000174e2) list_double2_graphic_pane_vc_ParamLimits

0xaaff,	// (0x000174e2) list_double2_graphic_pane_vc

0xaaff,	// (0x000174e2) list_double2_large_graphic_pane_vc_ParamLimits

0xaaff,	// (0x000174e2) list_double2_large_graphic_pane_vc

0xaaff,	// (0x000174e2) list_double2_pane_vc_ParamLimits

0xaaff,	// (0x000174e2) list_double2_pane_vc

0xaaff,	// (0x000174e2) list_double_graphic_heading_pane_vc_ParamLimits

0xaaff,	// (0x000174e2) list_double_graphic_heading_pane_vc

0xaaff,	// (0x000174e2) list_double_graphic_pane_vc_ParamLimits

0xaaff,	// (0x000174e2) list_double_graphic_pane_vc

0xaaff,	// (0x000174e2) list_double_heading_pane_vc_ParamLimits

0xaaff,	// (0x000174e2) list_double_heading_pane_vc

0xab11,	// (0x000174f4) list_double_large_graphic_pane_vc_ParamLimits

0xab11,	// (0x000174f4) list_double_large_graphic_pane_vc

0xaaff,	// (0x000174e2) list_double_number_pane_vc_ParamLimits

0xaaff,	// (0x000174e2) list_double_number_pane_vc

0xaaff,	// (0x000174e2) list_double_pane_vc_ParamLimits

0xaaff,	// (0x000174e2) list_double_pane_vc

0xaaff,	// (0x000174e2) list_double_time_pane_vc_ParamLimits

0xaaff,	// (0x000174e2) list_double_time_pane_vc

0xaaff,	// (0x000174e2) list_setting_number_pane_vc_ParamLimits

0xaaff,	// (0x000174e2) list_setting_number_pane_vc

0xaaff,	// (0x000174e2) list_setting_pane_vc_ParamLimits

0xaaff,	// (0x000174e2) list_setting_pane_vc

0xaaff,	// (0x000174e2) list_single_graphic_heading_pane_vc_ParamLimits

0xaaff,	// (0x000174e2) list_single_graphic_heading_pane_vc

0xaaff,	// (0x000174e2) list_single_heading_pane_vc_ParamLimits

0xaaff,	// (0x000174e2) list_single_heading_pane_vc

0xab2f,	// (0x00017512) list_single_number_heading_pane_vc_ParamLimits

0xab2f,	// (0x00017512) list_single_number_heading_pane_vc

0xb0f4,	// (0x00017ad7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xb0f4,	// (0x00017ad7) list_double_graphic_heading_pane_vc_g1

0x41a2,	// (0x00010b85) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x41a2,	// (0x00010b85) list_double_graphic_heading_pane_vc_g2

0x41ae,	// (0x00010b91) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x41ae,	// (0x00010b91) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e4,	// (0x0001c3c7) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e4,	// (0x0001c3c7) list_double_graphic_heading_pane_vc_g

0xb100,	// (0x00017ae3) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xb100,	// (0x00017ae3) list_double_graphic_heading_pane_vc_t1

0xb114,	// (0x00017af7) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xb114,	// (0x00017af7) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9eb,	// (0x0001c3ce) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9eb,	// (0x0001c3ce) list_double_graphic_heading_pane_vc_t

0x94be,	// (0x00015ea1) list_setting_pane_vc_g1_ParamLimits

0x94be,	// (0x00015ea1) list_setting_pane_vc_g1

0x94ca,	// (0x00015ead) list_setting_pane_vc_g2_ParamLimits

0x94ca,	// (0x00015ead) list_setting_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c1bd) list_setting_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c1bd) list_setting_pane_vc_g

0xb32c,	// (0x00017d0f) list_setting_pane_vc_t1_ParamLimits

0xb32c,	// (0x00017d0f) list_setting_pane_vc_t1

0xb348,	// (0x00017d2b) list_setting_pane_vc_t2_ParamLimits

0xb348,	// (0x00017d2b) list_setting_pane_vc_t2

0x0001,

0xfa2e,	// (0x0001c411) list_setting_pane_vc_t_ParamLimits

0xfa2e,	// (0x0001c411) list_setting_pane_vc_t

0x9532,	// (0x00015f15) set_value_pane_cp_vc_ParamLimits

0x9532,	// (0x00015f15) set_value_pane_cp_vc

0x41a2,	// (0x00010b85) list_single_number_heading_pane_vc_g1_ParamLimits

0x41a2,	// (0x00010b85) list_single_number_heading_pane_vc_g1

0x41ae,	// (0x00010b91) list_single_number_heading_pane_vc_g2_ParamLimits

0x41ae,	// (0x00010b91) list_single_number_heading_pane_vc_g2

0x0001,

0xf7d0,	// (0x0001c1b3) list_single_number_heading_pane_vc_g_ParamLimits

0xf7d0,	// (0x0001c1b3) list_single_number_heading_pane_vc_g

0xb362,	// (0x00017d45) list_single_number_heading_pane_vc_t1_ParamLimits

0xb362,	// (0x00017d45) list_single_number_heading_pane_vc_t1

0xb378,	// (0x00017d5b) list_single_number_heading_pane_vc_t2_ParamLimits

0xb378,	// (0x00017d5b) list_single_number_heading_pane_vc_t2

0xb38a,	// (0x00017d6d) list_single_number_heading_pane_vc_t3_ParamLimits

0xb38a,	// (0x00017d6d) list_single_number_heading_pane_vc_t3

0x0002,

0xfa33,	// (0x0001c416) list_single_number_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x0001c416) list_single_number_heading_pane_vc_t

0xb39c,	// (0x00017d7f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xb39c,	// (0x00017d7f) list_single_graphic_heading_pane_vc_g1

0x41a2,	// (0x00010b85) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x41a2,	// (0x00010b85) list_single_graphic_heading_pane_vc_g4

0x41ae,	// (0x00010b91) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x41ae,	// (0x00010b91) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa3a,	// (0x0001c41d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa3a,	// (0x0001c41d) list_single_graphic_heading_pane_vc_g

0xb3a8,	// (0x00017d8b) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xb3a8,	// (0x00017d8b) list_single_graphic_heading_pane_vc_t1

0xb3be,	// (0x00017da1) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb3be,	// (0x00017da1) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa41,	// (0x0001c424) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa41,	// (0x0001c424) list_single_graphic_heading_pane_vc_t

0x41a2,	// (0x00010b85) list_double2_pane_vc_g1_ParamLimits

0x41a2,	// (0x00010b85) list_double2_pane_vc_g1

0x41ae,	// (0x00010b91) list_double2_pane_vc_g2_ParamLimits

0x41ae,	// (0x00010b91) list_double2_pane_vc_g2

0x0001,

0xf7d0,	// (0x0001c1b3) list_double2_pane_vc_g_ParamLimits

0xf7d0,	// (0x0001c1b3) list_double2_pane_vc_g

0xb3d0,	// (0x00017db3) list_double2_pane_vc_t1_ParamLimits

0xb3d0,	// (0x00017db3) list_double2_pane_vc_t1

0xb3e8,	// (0x00017dcb) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb3e8,	// (0x00017dcb) list_double2_large_graphic_pane_vc_g1

0x41a2,	// (0x00010b85) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x41a2,	// (0x00010b85) list_double2_large_graphic_pane_vc_g2

0x41ae,	// (0x00010b91) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x41ae,	// (0x00010b91) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa46,	// (0x0001c429) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa46,	// (0x0001c429) list_double2_large_graphic_pane_vc_g

0x93dc,	// (0x00015dbf) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x93dc,	// (0x00015dbf) list_double2_large_graphic_pane_vc_t1

0xb3f4,	// (0x00017dd7) list_double_time_pane_vc_g1_ParamLimits

0xb3f4,	// (0x00017dd7) list_double_time_pane_vc_g1

0xb400,	// (0x00017de3) list_double_time_pane_vc_g2_ParamLimits

0xb400,	// (0x00017de3) list_double_time_pane_vc_g2

0x0001,

0xfa4d,	// (0x0001c430) list_double_time_pane_vc_g_ParamLimits

0xfa4d,	// (0x0001c430) list_double_time_pane_vc_g

0xb40c,	// (0x00017def) list_double_time_pane_vc_t1_ParamLimits

0xb40c,	// (0x00017def) list_double_time_pane_vc_t1

0xb430,	// (0x00017e13) list_double_time_pane_vc_t2_ParamLimits

0xb430,	// (0x00017e13) list_double_time_pane_vc_t2

0xb45f,	// (0x00017e42) list_double_time_pane_vc_t3_ParamLimits

0xb45f,	// (0x00017e42) list_double_time_pane_vc_t3

0xb471,	// (0x00017e54) list_double_time_pane_vc_t4_ParamLimits

0xb471,	// (0x00017e54) list_double_time_pane_vc_t4

0x0003,

0xfa52,	// (0x0001c435) list_double_time_pane_vc_t_ParamLimits

0xfa52,	// (0x0001c435) list_double_time_pane_vc_t

0x41a2,	// (0x00010b85) list_double_pane_vc_g1_ParamLimits

0x41a2,	// (0x00010b85) list_double_pane_vc_g1

0x41ae,	// (0x00010b91) list_double_pane_vc_g2_ParamLimits

0x41ae,	// (0x00010b91) list_double_pane_vc_g2

0x0001,

0xf7d0,	// (0x0001c1b3) list_double_pane_vc_g_ParamLimits

0xf7d0,	// (0x0001c1b3) list_double_pane_vc_g

0xb485,	// (0x00017e68) list_double_pane_vc_t1_ParamLimits

0xb485,	// (0x00017e68) list_double_pane_vc_t1

0xb499,	// (0x00017e7c) list_double_pane_vc_t2_ParamLimits

0xb499,	// (0x00017e7c) list_double_pane_vc_t2

0x0001,

0xfa5b,	// (0x0001c43e) list_double_pane_vc_t_ParamLimits

0xfa5b,	// (0x0001c43e) list_double_pane_vc_t

0x41a2,	// (0x00010b85) list_double_number_pane_vc_g1_ParamLimits

0x41a2,	// (0x00010b85) list_double_number_pane_vc_g1

0x41ae,	// (0x00010b91) list_double_number_pane_vc_g2_ParamLimits

0x41ae,	// (0x00010b91) list_double_number_pane_vc_g2

0x0001,

0xf7d0,	// (0x0001c1b3) list_double_number_pane_vc_g_ParamLimits

0xf7d0,	// (0x0001c1b3) list_double_number_pane_vc_g

0xb4b1,	// (0x00017e94) list_double_number_pane_vc_t1_ParamLimits

0xb4b1,	// (0x00017e94) list_double_number_pane_vc_t1

0xb485,	// (0x00017e68) list_double_number_pane_vc_t2_ParamLimits

0xb485,	// (0x00017e68) list_double_number_pane_vc_t2

0xb4c3,	// (0x00017ea6) list_double_number_pane_vc_t3_ParamLimits

0xb4c3,	// (0x00017ea6) list_double_number_pane_vc_t3

0x0002,

0xfa60,	// (0x0001c443) list_double_number_pane_vc_t_ParamLimits

0xfa60,	// (0x0001c443) list_double_number_pane_vc_t

0xb4db,	// (0x00017ebe) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb4db,	// (0x00017ebe) list_double_large_graphic_pane_vc_g1

0xb4fd,	// (0x00017ee0) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb4fd,	// (0x00017ee0) list_double_large_graphic_pane_vc_g2

0xb511,	// (0x00017ef4) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb511,	// (0x00017ef4) list_double_large_graphic_pane_vc_g3

0xb520,	// (0x00017f03) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb520,	// (0x00017f03) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa67,	// (0x0001c44a) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa67,	// (0x0001c44a) list_double_large_graphic_pane_vc_g

0xb52c,	// (0x00017f0f) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb52c,	// (0x00017f0f) list_double_large_graphic_pane_vc_t1

0xb548,	// (0x00017f2b) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb548,	// (0x00017f2b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa70,	// (0x0001c453) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa70,	// (0x0001c453) list_double_large_graphic_pane_vc_t

0x41a2,	// (0x00010b85) list_double_heading_pane_vc_g1_ParamLimits

0x41a2,	// (0x00010b85) list_double_heading_pane_vc_g1

0x41ae,	// (0x00010b91) list_double_heading_pane_vc_g2_ParamLimits

0x41ae,	// (0x00010b91) list_double_heading_pane_vc_g2

0x0001,

0xf7d0,	// (0x0001c1b3) list_double_heading_pane_vc_g_ParamLimits

0xf7d0,	// (0x0001c1b3) list_double_heading_pane_vc_g

0xb56a,	// (0x00017f4d) list_double_heading_pane_vc_t1_ParamLimits

0xb56a,	// (0x00017f4d) list_double_heading_pane_vc_t1

0xb57e,	// (0x00017f61) list_double_heading_pane_vc_t2_ParamLimits

0xb57e,	// (0x00017f61) list_double_heading_pane_vc_t2

0x0001,

0xfa75,	// (0x0001c458) list_double_heading_pane_vc_t_ParamLimits

0xfa75,	// (0x0001c458) list_double_heading_pane_vc_t

0xb596,	// (0x00017f79) list_double_graphic_pane_vc_g1_ParamLimits

0xb596,	// (0x00017f79) list_double_graphic_pane_vc_g1

0xb5a9,	// (0x00017f8c) list_double_graphic_pane_vc_g2_ParamLimits

0xb5a9,	// (0x00017f8c) list_double_graphic_pane_vc_g2

0x41a2,	// (0x00010b85) list_double_graphic_pane_vc_g3_ParamLimits

0x41a2,	// (0x00010b85) list_double_graphic_pane_vc_g3

0x0003,

0xfa7a,	// (0x0001c45d) list_double_graphic_pane_vc_g_ParamLimits

0xfa7a,	// (0x0001c45d) list_double_graphic_pane_vc_g

0xb5c6,	// (0x00017fa9) list_double_graphic_pane_vc_t1_ParamLimits

0xb5c6,	// (0x00017fa9) list_double_graphic_pane_vc_t1

0xb5e5,	// (0x00017fc8) list_double_graphic_pane_vc_t2_ParamLimits

0xb5e5,	// (0x00017fc8) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x0001c466) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x0001c466) list_double_graphic_pane_vc_t

0x53d5,	// (0x00011db8) aid_size_cell_fastswap

0x53dd,	// (0x00011dc0) aid_size_cell_touch_ParamLimits

0x53dd,	// (0x00011dc0) aid_size_cell_touch

0x5642,	// (0x00012025) popup_fast_swap_wide_window_ParamLimits

0x5642,	// (0x00012025) popup_fast_swap_wide_window

0x5748,	// (0x0001212b) touch_pane_ParamLimits

0x5748,	// (0x0001212b) touch_pane

0x4231,	// (0x00010c14) button_value_adjust_pane_cp2

0x4239,	// (0x00010c1c) button_value_adjust_pane_cp4

0x4241,	// (0x00010c24) form_field_data_pane_cp2

0x8260,	// (0x00014c43) form_field_data_wide_pane_cp2

0x475b,	// (0x0001113e) bg_scroll_pane_ParamLimits

0x59d6,	// (0x000123b9) scroll_handle_pane_ParamLimits

0x59ea,	// (0x000123cd) scroll_sc2_down_pane_ParamLimits

0x59ea,	// (0x000123cd) scroll_sc2_down_pane

0x47a1,	// (0x00011184) scroll_sc2_up_pane_ParamLimits

0x47a1,	// (0x00011184) scroll_sc2_up_pane

0xba90,	// (0x00018473) grid_wheel_folder_pane_g1_ParamLimits

0xba90,	// (0x00018473) grid_wheel_folder_pane_g1

0x5ba6,	// (0x00012589) clock_nsta_pane_cp2_ParamLimits

0x5ba6,	// (0x00012589) clock_nsta_pane_cp2

0x8bcc,	// (0x000155af) listscroll_midp_pane_ParamLimits

0x8bd8,	// (0x000155bb) midp_canvas_pane

0x8ebc,	// (0x0001589f) nsta_clock_indic_pane

0x8efd,	// (0x000158e0) listscroll_form_pane_vc

0x8f05,	// (0x000158e8) listscroll_set_pane_vc_ParamLimits

0x8f05,	// (0x000158e8) listscroll_set_pane_vc

0x9012,	// (0x000159f5) clock_nsta_pane

0x908d,	// (0x00015a70) indicator_nsta_pane

0x936a,	// (0x00015d4d) bg_popup_sub_pane_cp2_ParamLimits

0x937e,	// (0x00015d61) find_pane_cp2_ParamLimits

0x937e,	// (0x00015d61) find_pane_cp2

0x9394,	// (0x00015d77) grid_toobar_pane_ParamLimits

0x9542,	// (0x00015f25) list_form_gen_pane_vc_ParamLimits

0x9542,	// (0x00015f25) list_form_gen_pane_vc

0x9558,	// (0x00015f3b) scroll_pane_cp8_vc_ParamLimits

0x9558,	// (0x00015f3b) scroll_pane_cp8_vc

0x95d4,	// (0x00015fb7) data_form_wide_pane_vc_ParamLimits

0x95d4,	// (0x00015fb7) data_form_wide_pane_vc

0x95e0,	// (0x00015fc3) form_field_data_wide_pane_vc_g1

0x95e8,	// (0x00015fcb) form_field_data_wide_pane_vc_t1_ParamLimits

0x95e8,	// (0x00015fcb) form_field_data_wide_pane_vc_t1

0x4268,	// (0x00010c4b) input_focus_pane_cp6_vc_ParamLimits

0x4268,	// (0x00010c4b) input_focus_pane_cp6_vc

0x9956,	// (0x00016339) list_midp_pane_ParamLimits

0x9962,	// (0x00016345) scroll_pane_cp16_ParamLimits

0x9962,	// (0x00016345) scroll_pane_cp16

0x99b8,	// (0x0001639b) button_value_adjust_pane_ParamLimits

0x99b8,	// (0x0001639b) button_value_adjust_pane

0xa90e,	// (0x000172f1) button_value_adjust_pane_cp6_ParamLimits

0xa90e,	// (0x000172f1) button_value_adjust_pane_cp6

0xaa34,	// (0x00017417) settings_code_pane_cp_ParamLimits

0xaa34,	// (0x00017417) settings_code_pane_cp

0x3c31,	// (0x00010614) cell_touch_pane_g1

0x3c31,	// (0x00010614) cell_touch_pane_g2

0x0001,

0xf6f4,	// (0x0001c0d7) cell_touch_pane_g

0xb0d2,	// (0x00017ab5) cell_touch_pane_cp_ParamLimits

0xb0d2,	// (0x00017ab5) cell_touch_pane_cp

0xb0e2,	// (0x00017ac5) cell_touch_pane_ParamLimits

0xb0e2,	// (0x00017ac5) cell_touch_pane

0x3c31,	// (0x00010614) scroll_sc2_down_pane_g1

0x3c31,	// (0x00010614) scroll_sc2_up_pane_g1

0x3daa,	// (0x0001078d) bg_set_opt_pane_cp4_vc

0xb12c,	// (0x00017b0f) list_set_graphic_pane_vc_g1_ParamLimits

0xb12c,	// (0x00017b0f) list_set_graphic_pane_vc_g1

0xb138,	// (0x00017b1b) list_set_graphic_pane_vc_g2_ParamLimits

0xb138,	// (0x00017b1b) list_set_graphic_pane_vc_g2

0x0001,

0xf9f0,	// (0x0001c3d3) list_set_graphic_pane_vc_g_ParamLimits

0xf9f0,	// (0x0001c3d3) list_set_graphic_pane_vc_g

0xb144,	// (0x00017b27) text_primary_small_cp13_vc_ParamLimits

0xb144,	// (0x00017b27) text_primary_small_cp13_vc

0xb15c,	// (0x00017b3f) list_set_graphic_pane_vc_ParamLimits

0xb15c,	// (0x00017b3f) list_set_graphic_pane_vc

0x3daa,	// (0x0001078d) input_focus_pane_cp2_vc

0x3c31,	// (0x00010614) setting_code_pane_vc_g1

0x3e3d,	// (0x00010820) setting_code_pane_vc_t1

0xb16f,	// (0x00017b52) set_text_pane_vc_t1_ParamLimits

0xb16f,	// (0x00017b52) set_text_pane_vc_t1

0x3daa,	// (0x0001078d) input_focus_pane_cp1_vc

0xb18b,	// (0x00017b6e) list_set_text_pane_vc

0x3c31,	// (0x00010614) setting_text_pane_vc_g1

0x3daa,	// (0x0001078d) bg_set_opt_pane_cp2_vc

0x3e34,	// (0x00010817) setting_slider_graphic_pane_vc_g1

0xb195,	// (0x00017b78) setting_slider_graphic_pane_vc_t1

0xb1a5,	// (0x00017b88) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f5,	// (0x0001c3d8) setting_slider_graphic_pane_vc_t

0xb1b5,	// (0x00017b98) slider_set_pane_cp_vc

0xb1bd,	// (0x00017ba0) slider_set_pane_vc_g1

0xb1c6,	// (0x00017ba9) slider_set_pane_vc_g2

0x0006,

0xf9fa,	// (0x0001c3dd) slider_set_pane_vc_g

0x4322,	// (0x00010d05) set_opt_bg_pane_g1_copy1

0x432a,	// (0x00010d0d) set_opt_bg_pane_g2_copy1

0xb1f2,	// (0x00017bd5) set_opt_bg_pane_g3_copy1

0x433a,	// (0x00010d1d) set_opt_bg_pane_g4_copy1

0x4342,	// (0x00010d25) set_opt_bg_pane_g5_copy1

0x434a,	// (0x00010d2d) set_opt_bg_pane_g6_copy1

0xb1fa,	// (0x00017bdd) set_opt_bg_pane_g7_copy1

0xb202,	// (0x00017be5) set_opt_bg_pane_g8_copy1

0xb20a,	// (0x00017bed) set_opt_bg_pane_g9_copy1

0x3daa,	// (0x0001078d) bg_set_opt_pane_cp_vc

0xb212,	// (0x00017bf5) setting_slider_pane_vc_t1

0xb221,	// (0x00017c04) setting_slider_pane_vc_t2

0xb231,	// (0x00017c14) setting_slider_pane_vc_t3

0x0002,

0xfa09,	// (0x0001c3ec) setting_slider_pane_vc_t

0xb241,	// (0x00017c24) slider_set_pane_vc

0x65a0,	// (0x00012f83) volume_set_pane_vc_g1

0x689b,	// (0x0001327e) volume_set_pane_vc_g2

0x68a4,	// (0x00013287) volume_set_pane_vc_g3

0x68ad,	// (0x00013290) volume_set_pane_vc_g4

0x68b6,	// (0x00013299) volume_set_pane_vc_g5

0x68bf,	// (0x000132a2) volume_set_pane_vc_g6

0x68c8,	// (0x000132ab) volume_set_pane_vc_g7

0x68d1,	// (0x000132b4) volume_set_pane_vc_g8

0x68da,	// (0x000132bd) volume_set_pane_vc_g9

0x68e3,	// (0x000132c6) volume_set_pane_vc_g10

0x0009,

0xfa10,	// (0x0001c3f3) volume_set_pane_vc_g

0xb249,	// (0x00017c2c) volume_set_pane_vc

0xb251,	// (0x00017c34) button_value_adjust_pane_cp1_vc

0xb25b,	// (0x00017c3e) list_highlight_pane_cp2_vc

0xb264,	// (0x00017c47) list_set_pane_vc_ParamLimits

0xb264,	// (0x00017c47) list_set_pane_vc

0xb2c2,	// (0x00017ca5) main_pane_set_vc_t1_ParamLimits

0xb2c2,	// (0x00017ca5) main_pane_set_vc_t1

0xb2d7,	// (0x00017cba) main_pane_set_vc_t2_ParamLimits

0xb2d7,	// (0x00017cba) main_pane_set_vc_t2

0xb2e9,	// (0x00017ccc) main_pane_set_vc_t3_ParamLimits

0xb2e9,	// (0x00017ccc) main_pane_set_vc_t3

0xb2fb,	// (0x00017cde) main_pane_set_vc_t4_ParamLimits

0xb2fb,	// (0x00017cde) main_pane_set_vc_t4

0x0003,

0xfa25,	// (0x0001c408) main_pane_set_vc_t_ParamLimits

0xfa25,	// (0x0001c408) main_pane_set_vc_t

0xb30d,	// (0x00017cf0) setting_code_pane_vc_ParamLimits

0xb30d,	// (0x00017cf0) setting_code_pane_vc

0xb31c,	// (0x00017cff) setting_slider_graphic_pane_vc

0xb31c,	// (0x00017cff) setting_slider_pane_vc

0xb31c,	// (0x00017cff) setting_text_pane_vc

0xb31c,	// (0x00017cff) setting_volume_pane_vc

0xb324,	// (0x00017d07) scroll_pane_cp121_vc

0x421f,	// (0x00010c02) set_content_pane_vc

0xb60f,	// (0x00017ff2) button_value_adjust_pane_g1

0xb618,	// (0x00017ffb) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x0001c46b) button_value_adjust_pane_g

0xb621,	// (0x00018004) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb621,	// (0x00018004) form_field_slider_wide_pane_vc_t1

0xb635,	// (0x00018018) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb635,	// (0x00018018) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8d,	// (0x0001c470) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x0001c470) form_field_slider_wide_pane_vc_t

0x3e18,	// (0x000107fb) input_focus_pane_cp10_vc_ParamLimits

0x3e18,	// (0x000107fb) input_focus_pane_cp10_vc

0xb663,	// (0x00018046) slider_cont_pane_cp1_vc_ParamLimits

0xb663,	// (0x00018046) slider_cont_pane_cp1_vc

0xb675,	// (0x00018058) slider_form_pane_g1_cp2

0xb1c6,	// (0x00017ba9) slider_form_pane_g2_cp2

0xb6a2,	// (0x00018085) form_field_slider_pane_vc_t3

0xb6b0,	// (0x00018093) form_field_slider_pane_vc_t4

0xb6be,	// (0x000180a1) slider_form_pane_vc_ParamLimits

0xb6be,	// (0x000180a1) slider_form_pane_vc

0xb6cb,	// (0x000180ae) form_field_slider_pane_vc_t1_ParamLimits

0xb6cb,	// (0x000180ae) form_field_slider_pane_vc_t1

0xb635,	// (0x00018018) form_field_slider_pane_vc_t2_ParamLimits

0xb635,	// (0x00018018) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x0001c482) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x0001c482) form_field_slider_pane_vc_t

0x3e18,	// (0x000107fb) input_focus_pane_cp9_vc_ParamLimits

0x3e18,	// (0x000107fb) input_focus_pane_cp9_vc

0xb6e7,	// (0x000180ca) slider_cont_pane_vc_ParamLimits

0xb6e7,	// (0x000180ca) slider_cont_pane_vc

0xb6fb,	// (0x000180de) list_form_graphic_pane_cp_vc_ParamLimits

0xb6fb,	// (0x000180de) list_form_graphic_pane_cp_vc

0x95e0,	// (0x00015fc3) form_field_popup_wide_pane_vc_g1

0xb710,	// (0x000180f3) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb710,	// (0x000180f3) form_field_popup_wide_pane_vc_t1

0x4268,	// (0x00010c4b) input_focus_pane_cp8_vc_ParamLimits

0x4268,	// (0x00010c4b) input_focus_pane_cp8_vc

0xb755,	// (0x00018138) list_form_wide_pane_vc_ParamLimits

0xb755,	// (0x00018138) list_form_wide_pane_vc

0xb761,	// (0x00018144) list_form_graphic_pane_vc_g1

0xb769,	// (0x0001814c) list_form_graphic_pane_vc_t1_ParamLimits

0xb769,	// (0x0001814c) list_form_graphic_pane_vc_t1

0x3e26,	// (0x00010809) list_highlight_pane_cp5_vc_ParamLimits

0x3e26,	// (0x00010809) list_highlight_pane_cp5_vc

0xb785,	// (0x00018168) list_form_graphic_pane_vc_ParamLimits

0xb785,	// (0x00018168) list_form_graphic_pane_vc

0x95e0,	// (0x00015fc3) form_field_popup_pane_vc_g1

0xb79b,	// (0x0001817e) form_field_popup_pane_vc_t1_ParamLimits

0xb79b,	// (0x0001817e) form_field_popup_pane_vc_t1

0x4268,	// (0x00010c4b) input_focus_pane_cp7_vc_ParamLimits

0x4268,	// (0x00010c4b) input_focus_pane_cp7_vc

0xb7b2,	// (0x00018195) list_form_pane_vc_ParamLimits

0xb7b2,	// (0x00018195) list_form_pane_vc

0xb7be,	// (0x000181a1) data_form_pane_vc_t1_ParamLimits

0xb7be,	// (0x000181a1) data_form_pane_vc_t1

0x4322,	// (0x00010d05) input_focus_pane_vc_g1

0x432a,	// (0x00010d0d) input_focus_pane_vc_g2

0x4332,	// (0x00010d15) input_focus_pane_vc_g3

0x433a,	// (0x00010d1d) input_focus_pane_vc_g4

0x4342,	// (0x00010d25) input_focus_pane_vc_g5

0x434a,	// (0x00010d2d) input_focus_pane_vc_g6

0x4352,	// (0x00010d35) input_focus_pane_vc_g7

0x435a,	// (0x00010d3d) input_focus_pane_vc_g8

0x4362,	// (0x00010d45) input_focus_pane_vc_g9

0x3c31,	// (0x00010614) input_focus_pane_vc_g10

0x0009,

0xf67d,	// (0x0001c060) input_focus_pane_vc_g

0x95d4,	// (0x00015fb7) data_form_pane_vc_ParamLimits

0x95d4,	// (0x00015fb7) data_form_pane_vc

0x95e0,	// (0x00015fc3) form_field_data_pane_vc_g1

0xb7d9,	// (0x000181bc) form_field_data_pane_vc_t1_ParamLimits

0xb7d9,	// (0x000181bc) form_field_data_pane_vc_t1

0x4268,	// (0x00010c4b) input_focus_pane_vc_ParamLimits

0x4268,	// (0x00010c4b) input_focus_pane_vc

0xb7f3,	// (0x000181d6) button_value_adjust_pane_cp3_vc

0xb7fb,	// (0x000181de) button_value_adjust_pane_cp5_vc

0xb803,	// (0x000181e6) form_field_data_pane_vc_ParamLimits

0xb803,	// (0x000181e6) form_field_data_pane_vc

0xb81a,	// (0x000181fd) form_field_data_pane_vc_cp2

0xb822,	// (0x00018205) form_field_data_wide_pane_vc_ParamLimits

0xb822,	// (0x00018205) form_field_data_wide_pane_vc

0xb838,	// (0x0001821b) form_field_data_wide_pane_vc_cp2

0xb840,	// (0x00018223) form_field_popup_pane_vc_ParamLimits

0xb840,	// (0x00018223) form_field_popup_pane_vc

0xb857,	// (0x0001823a) form_field_popup_wide_pane_vc_ParamLimits

0xb857,	// (0x0001823a) form_field_popup_wide_pane_vc

0xb86d,	// (0x00018250) form_field_slider_pane_vc_ParamLimits

0xb86d,	// (0x00018250) form_field_slider_pane_vc

0xb880,	// (0x00018263) form_field_slider_wide_pane_vc_ParamLimits

0xb880,	// (0x00018263) form_field_slider_wide_pane_vc

0xb893,	// (0x00018276) grid_touch_1_pane_ParamLimits

0xb893,	// (0x00018276) grid_touch_1_pane

0xb89f,	// (0x00018282) grid_touch_2_pane_ParamLimits

0xb89f,	// (0x00018282) grid_touch_2_pane

0x8e87,	// (0x0001586a) touch_pane_g1_ParamLimits

0x8e87,	// (0x0001586a) touch_pane_g1

0xb8b7,	// (0x0001829a) cell_app_pane_cp_wide_ParamLimits

0xb8b7,	// (0x0001829a) cell_app_pane_cp_wide

0xb8c8,	// (0x000182ab) grid_popup_fast_wide_pane_ParamLimits

0xb8c8,	// (0x000182ab) grid_popup_fast_wide_pane

0xb8dc,	// (0x000182bf) scroll_pane_cp19_ParamLimits

0xb8dc,	// (0x000182bf) scroll_pane_cp19

0x3daa,	// (0x0001078d) bg_popup_window_pane_cp20

0xb8f0,	// (0x000182d3) listscroll_popup_fast_wide_pane

0x3e26,	// (0x00010809) grid_indicator_nsta_pane

0xb8f8,	// (0x000182db) clock_nsta_pane_g1

0xb901,	// (0x000182e4) clock_nsta_pane_t1

0xb91d,	// (0x00018300) cell_indicator_nsta_pane_ParamLimits

0xb91d,	// (0x00018300) cell_indicator_nsta_pane

0xb94e,	// (0x00018331) cell_indicator_nsta_pane_g1

0xb95c,	// (0x0001833f) cell_indicator_nsta_pane_g2

0x0001,

0xfab0,	// (0x0001c493) cell_indicator_nsta_pane_g

0xb969,	// (0x0001834c) clock_nsta_pane_cp

0xb971,	// (0x00018354) indicator_nsta_pane_cp

0xb979,	// (0x0001835c) nsta_clock_indic_pane_g1

0x3e7c,	// (0x0001085f) grid_indicator_pane

0x85e7,	// (0x00014fca) scroll_pane_cp29

0x5af5,	// (0x000124d8) indicator_nsta_pane_cp2_ParamLimits

0x5af5,	// (0x000124d8) indicator_nsta_pane_cp2

0x3e26,	// (0x00010809) main_apps_wheel_pane

0x9839,	// (0x0001621c) form_midp_field_text_pane_ParamLimits

0x9982,	// (0x00016365) scroll_bar_cp050_ParamLimits

0xb9c9,	// (0x000183ac) cell_indicator_pane_ParamLimits

0xb9c9,	// (0x000183ac) cell_indicator_pane

0xb9e2,	// (0x000183c5) cell_indicator_pane_g1

0xb9ec,	// (0x000183cf) grid_wheel_folder_pane_ParamLimits

0xb9ec,	// (0x000183cf) grid_wheel_folder_pane

0xba02,	// (0x000183e5) list_wheel_apps_pane_ParamLimits

0xba02,	// (0x000183e5) list_wheel_apps_pane

0xba13,	// (0x000183f6) main_apps_wheel_pane_g1_ParamLimits

0xba13,	// (0x000183f6) main_apps_wheel_pane_g1

0xba27,	// (0x0001840a) main_apps_wheel_pane_g2_ParamLimits

0xba27,	// (0x0001840a) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x0001c4af) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x0001c4af) main_apps_wheel_pane_g

0xba3f,	// (0x00018422) main_apps_wheel_pane_t1_ParamLimits

0xba3f,	// (0x00018422) main_apps_wheel_pane_t1

0xba62,	// (0x00018445) list_wheel_apps_pane_g1

0xba6a,	// (0x0001844d) list_wheel_apps_pane_g2

0xba72,	// (0x00018455) list_wheel_apps_pane_g3

0xba7c,	// (0x0001845f) list_wheel_apps_pane_g4

0xba86,	// (0x00018469) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x0001c4b4) list_wheel_apps_pane_g

0x8a44,	// (0x00015427) navi_icon_text_pane

0x8f41,	// (0x00015924) aid_fill_nsta

0xbaa9,	// (0x0001848c) navi_icon_text_pane_g1

0xbab5,	// (0x00018498) navi_icon_text_pane_t1

0x88e7,	// (0x000152ca) list_set_graphic_pane_t1_ParamLimits

0x88e7,	// (0x000152ca) list_set_graphic_pane_t1

0xa0b9,	// (0x00016a9c) popup_midp_note_alarm_window_t6_ParamLimits

0xa0b9,	// (0x00016a9c) popup_midp_note_alarm_window_t6

0xa0cb,	// (0x00016aae) popup_midp_note_alarm_window_t7_ParamLimits

0xa0cb,	// (0x00016aae) popup_midp_note_alarm_window_t7

0xa0dd,	// (0x00016ac0) popup_midp_note_alarm_window_t8_ParamLimits

0xa0dd,	// (0x00016ac0) popup_midp_note_alarm_window_t8

0xa0ef,	// (0x00016ad2) popup_midp_note_alarm_window_t9_ParamLimits

0xa0ef,	// (0x00016ad2) popup_midp_note_alarm_window_t9

0xa101,	// (0x00016ae4) popup_midp_note_alarm_window_t10_ParamLimits

0xa101,	// (0x00016ae4) popup_midp_note_alarm_window_t10

0xa113,	// (0x00016af6) popup_midp_note_alarm_window_t11_ParamLimits

0xa113,	// (0x00016af6) popup_midp_note_alarm_window_t11

0xa125,	// (0x00016b08) scroll_pane_cp17_ParamLimits

0xa125,	// (0x00016b08) scroll_pane_cp17

0x65a0,	// (0x00012f83) volume_small_pane_cp_g1

0x68ec,	// (0x000132cf) volume_small_pane_cp_g2

0x68f5,	// (0x000132d8) volume_small_pane_cp_g3

0x68fe,	// (0x000132e1) volume_small_pane_cp_g4

0x6907,	// (0x000132ea) volume_small_pane_cp_g5

0x68b6,	// (0x00013299) volume_small_pane_cp_g6

0x6910,	// (0x000132f3) volume_small_pane_cp_g7

0x6919,	// (0x000132fc) volume_small_pane_cp_g8

0x6922,	// (0x00013305) volume_small_pane_cp_g9

0x692b,	// (0x0001330e) volume_small_pane_cp_g10

0x8ca5,	// (0x00015688) midp_ticker_pane_g1_ParamLimits

0x8cb1,	// (0x00015694) midp_ticker_pane_g2_ParamLimits

0xf749,	// (0x0001c12c) midp_ticker_pane_g_ParamLimits

0x8cbd,	// (0x000156a0) midp_ticker_pane_t1_ParamLimits

0x8f57,	// (0x0001593a) aid_fill_nsta_2

0x996e,	// (0x00016351) list_form2_midp_pane

0xaab2,	// (0x00017495) midp_editing_number_pane_ParamLimits

0xaac1,	// (0x000174a4) midp_ticker_pane_ParamLimits

0xbac7,	// (0x000184aa) form2_midp_field_pane

0xbaeb,	// (0x000184ce) scroll_pane_cp51

0xbb0b,	// (0x000184ee) form2_midp_button_pane_ParamLimits

0xbb0b,	// (0x000184ee) form2_midp_button_pane

0xbb1d,	// (0x00018500) form2_midp_content_pane_ParamLimits

0xbb1d,	// (0x00018500) form2_midp_content_pane

0xbb37,	// (0x0001851a) form2_midp_field_choice_group_pane

0xbb3f,	// (0x00018522) form2_midp_field_pane_g1

0xbb47,	// (0x0001852a) form2_midp_field_pane_g2

0xbb4f,	// (0x00018532) form2_midp_field_pane_g3

0xbb57,	// (0x0001853a) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x0001c4d9) form2_midp_field_pane_g

0xbb5f,	// (0x00018542) form2_midp_gauge_slider_pane

0xbb67,	// (0x0001854a) form2_midp_gauge_wait_pane

0xbb6f,	// (0x00018552) form2_midp_image_pane_ParamLimits

0xbb6f,	// (0x00018552) form2_midp_image_pane

0xbb8a,	// (0x0001856d) form2_midp_label_pane_ParamLimits

0xbb8a,	// (0x0001856d) form2_midp_label_pane

0xbba3,	// (0x00018586) form2_midp_label_pane_cp_ParamLimits

0xbba3,	// (0x00018586) form2_midp_label_pane_cp

0xbbc4,	// (0x000185a7) form2_midp_string_pane_ParamLimits

0xbbc4,	// (0x000185a7) form2_midp_string_pane

0xbbd6,	// (0x000185b9) form2_midp_text_pane_ParamLimits

0xbbd6,	// (0x000185b9) form2_midp_text_pane

0xbbf1,	// (0x000185d4) form2_midp_time_pane

0xbc01,	// (0x000185e4) input_focus_pane_cp51_ParamLimits

0xbc01,	// (0x000185e4) input_focus_pane_cp51

0xbc19,	// (0x000185fc) form2_midp_label_pane_t1_ParamLimits

0xbc19,	// (0x000185fc) form2_midp_label_pane_t1

0xbc5a,	// (0x0001863d) form2_mdip_text_pane_t1_ParamLimits

0xbc5a,	// (0x0001863d) form2_mdip_text_pane_t1

0xbc79,	// (0x0001865c) form2_midp_time_pane_t1

0xbc94,	// (0x00018677) form2_midp_gauge_slider_pane_t1

0xbca6,	// (0x00018689) form2_midp_gauge_slider_pane_t2

0xbcb8,	// (0x0001869b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x0001c4e2) form2_midp_gauge_slider_pane_t

0xbcca,	// (0x000186ad) form2_midp_slider_pane

0xbcd6,	// (0x000186b9) form2_midp_gauge_wait_pane_t1

0xbce4,	// (0x000186c7) form2_midp_wait_pane_ParamLimits

0xbce4,	// (0x000186c7) form2_midp_wait_pane

0xbd0f,	// (0x000186f2) list_single_2graphic_pane_cp4_ParamLimits

0xbd0f,	// (0x000186f2) list_single_2graphic_pane_cp4

0x9649,	// (0x0001602c) list_single_midp_graphic_pane_cp_ParamLimits

0x9649,	// (0x0001602c) list_single_midp_graphic_pane_cp

0x3daa,	// (0x0001078d) list_highlight_pane_cp20

0xbd37,	// (0x0001871a) list_single_2graphic_pane_g1_cp4

0xafd8,	// (0x000179bb) list_single_2graphic_pane_g2_cp4

0xbd3f,	// (0x00018722) list_single_2graphic_pane_t1_cp4

0x3e26,	// (0x00010809) list_highlight_pane_cp21

0xbd4e,	// (0x00018731) list_single_midp_graphic_pane_g4_cp

0xbd5d,	// (0x00018740) list_single_midp_graphic_pane_t1_cp

0xbd72,	// (0x00018755) form2_mdip_string_pane_t1_ParamLimits

0xbd72,	// (0x00018755) form2_mdip_string_pane_t1

0x3daa,	// (0x0001078d) bg_wml_button_pane_cp2

0x3c31,	// (0x00010614) form2_midp_image_pane_g1

0x41ba,	// (0x00010b9d) list_double_large_graphic_pane_g5_ParamLimits

0x41ba,	// (0x00010b9d) list_double_large_graphic_pane_g5

0x8bcc,	// (0x000155af) midp_form_pane_ParamLimits

0x3e26,	// (0x00010809) main_apps_wheel_pane_ParamLimits

0x61e2,	// (0x00012bc5) popup_preview_window_ParamLimits

0x61e2,	// (0x00012bc5) popup_preview_window

0x639d,	// (0x00012d80) popup_touch_info_window_ParamLimits

0x639d,	// (0x00012d80) popup_touch_info_window

0x63bb,	// (0x00012d9e) popup_touch_menu_window_ParamLimits

0x63bb,	// (0x00012d9e) popup_touch_menu_window

0x3c27,	// (0x0001060a) bg_popup_sub_pane_cp6

0xbe79,	// (0x0001885c) list_touch_menu_pane

0xbe81,	// (0x00018864) list_single_touch_menu_pane_ParamLimits

0xbe81,	// (0x00018864) list_single_touch_menu_pane

0xbe97,	// (0x0001887a) list_single_touch_menu_pane_t1

0x3e26,	// (0x00010809) bg_popup_sub_pane_cp7_ParamLimits

0x3e26,	// (0x00010809) bg_popup_sub_pane_cp7

0xbea5,	// (0x00018888) heading_sub_pane

0xbead,	// (0x00018890) list_touch_info_pane_ParamLimits

0xbead,	// (0x00018890) list_touch_info_pane

0xbebc,	// (0x0001889f) list_single_touch_info_pane_ParamLimits

0xbebc,	// (0x0001889f) list_single_touch_info_pane

0xbece,	// (0x000188b1) list_single_touch_info_pane_t1

0xbedc,	// (0x000188bf) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x0001c4f0) list_single_touch_info_pane_t

0x8bc4,	// (0x000155a7) bg_popup_heading_pane_cp

0xbeea,	// (0x000188cd) heading_sub_pane_t1

0x956e,	// (0x00015f51) bg_popup_preview_window_pane_cp_ParamLimits

0x956e,	// (0x00015f51) bg_popup_preview_window_pane_cp

0xbea5,	// (0x00018888) heading_preview_pane

0xbead,	// (0x00018890) list_preview_pane_ParamLimits

0xbead,	// (0x00018890) list_preview_pane

0xbef8,	// (0x000188db) popup_preview_window_g1

0xbebc,	// (0x0001889f) list_single_preview_pane_ParamLimits

0xbebc,	// (0x0001889f) list_single_preview_pane

0xbf00,	// (0x000188e3) list_single_preview_pane_g1

0xbf08,	// (0x000188eb) list_single_preview_pane_t1

0xbece,	// (0x000188b1) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x0001c4f5) list_single_preview_pane_t

0xbf16,	// (0x000188f9) bg_popup_heading_pane_cp2_ParamLimits

0xbf16,	// (0x000188f9) bg_popup_heading_pane_cp2

0xbf2c,	// (0x0001890f) heading_preview_pane_g1

0xbf34,	// (0x00018917) heading_preview_pane_t1_ParamLimits

0xbf34,	// (0x00018917) heading_preview_pane_t1

0x3e93,	// (0x00010876) soft_indicator_pane_t1_ParamLimits

0x416e,	// (0x00010b51) scroll_pane_ParamLimits

0x4798,	// (0x0001117b) scroll_sc2_left_pane

0x478f,	// (0x00011172) scroll_sc2_right_pane

0x47b7,	// (0x0001119a) scroll_bg_pane_g1_ParamLimits

0x47cc,	// (0x000111af) scroll_bg_pane_g2_ParamLimits

0x47e4,	// (0x000111c7) scroll_bg_pane_g3_ParamLimits

0xf6d4,	// (0x0001c0b7) scroll_bg_pane_g_ParamLimits

0x47b7,	// (0x0001119a) scroll_handle_pane_g1_ParamLimits

0x47f9,	// (0x000111dc) scroll_handle_pane_g2_ParamLimits

0x47e4,	// (0x000111c7) scroll_handle_pane_g3_ParamLimits

0xf6db,	// (0x0001c0be) scroll_handle_pane_g_ParamLimits

0x5e65,	// (0x00012848) popup_choice_list_window_ParamLimits

0x5e65,	// (0x00012848) popup_choice_list_window

0x9376,	// (0x00015d59) choice_list_pane

0x941a,	// (0x00015dfd) cell_toolbar_pane_t1

0x9442,	// (0x00015e25) toolbar_button_pane_ParamLimits

0xa5df,	// (0x00016fc2) ai_gene_pane_1_t2_ParamLimits

0xa5df,	// (0x00016fc2) ai_gene_pane_1_t2

0x0001,

0xf903,	// (0x0001c2e6) ai_gene_pane_1_t_ParamLimits

0xf903,	// (0x0001c2e6) ai_gene_pane_1_t

0xbf51,	// (0x00018934) scroll_sc2_left_pane_g1

0xbf51,	// (0x00018934) scroll_sc2_right_pane_g1

0x8f17,	// (0x000158fa) bg_popup_sub_pane_cp10

0xbf5b,	// (0x0001893e) list_choice_list_pane

0xbf74,	// (0x00018957) list_single_choice_list_pane_ParamLimits

0xbf74,	// (0x00018957) list_single_choice_list_pane

0xbf87,	// (0x0001896a) list_single_choice_list_pane_g1

0x8452,	// (0x00014e35) list_single_choice_list_pane_t1_ParamLimits

0x8452,	// (0x00014e35) list_single_choice_list_pane_t1

0xbf8f,	// (0x00018972) choice_list_pane_g1

0xbf97,	// (0x0001897a) choice_list_pane_t1

0x3c27,	// (0x0001060a) input_focus_pane_cp11

0x45aa,	// (0x00010f8d) title_pane_stacon_g2_ParamLimits

0x45aa,	// (0x00010f8d) title_pane_stacon_g2

0x0002,

0xf6ba,	// (0x0001c09d) title_pane_stacon_g_ParamLimits

0xf6ba,	// (0x0001c09d) title_pane_stacon_g

0x8bc4,	// (0x000155a7) cursor_press_pane

0x5f0d,	// (0x000128f0) popup_fep_hwr_window_ParamLimits

0x5f0d,	// (0x000128f0) popup_fep_hwr_window

0x5f85,	// (0x00012968) popup_fep_vkb_window_ParamLimits

0x5f85,	// (0x00012968) popup_fep_vkb_window

0xbfa5,	// (0x00018988) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x0001c51e) fep_vkb_side_pane_g_ParamLimits

0x696d,	// (0x00013350) fep_hwr_candidate_pane_ParamLimits

0x696d,	// (0x00013350) fep_hwr_candidate_pane

0x6997,	// (0x0001337a) fep_hwr_side_pane_ParamLimits

0x6997,	// (0x0001337a) fep_hwr_side_pane

0x69b7,	// (0x0001339a) fep_hwr_top_pane_ParamLimits

0x69b7,	// (0x0001339a) fep_hwr_top_pane

0x69cf,	// (0x000133b2) fep_hwr_write_pane_ParamLimits

0x69cf,	// (0x000133b2) fep_hwr_write_pane

0xfb3b,	// (0x0001c51e) fep_vkb_side_pane_g

0xbfad,	// (0x00018990) fep_hwr_top_pane_g1

0xbfbf,	// (0x000189a2) fep_hwr_top_pane_g2

0x6a09,	// (0x000133ec) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x0001c4fa) fep_hwr_top_pane_g

0x6a1e,	// (0x00013401) fep_hwr_top_text_pane

0x48c4,	// (0x000112a7) fep_hwr_top_text_pane_g1

0xbff5,	// (0x000189d8) fep_hwr_top_text_pane_t1

0x6b14,	// (0x000134f7) fep_hwr_candidate_pane_g1

0xc23a,	// (0x00018c1d) fep_vkb_keypad_pane_g3_ParamLimits

0xc23a,	// (0x00018c1d) fep_vkb_keypad_pane_g3

0xc262,	// (0x00018c45) fep_vkb_keypad_pane_g4_ParamLimits

0xc262,	// (0x00018c45) fep_vkb_keypad_pane_g4

0xc2d1,	// (0x00018cb4) fep_vkb_bottom_pane_g2_ParamLimits

0xc2d1,	// (0x00018cb4) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x0001c525) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x0001c525) fep_vkb_bottom_pane_g

0xbf51,	// (0x00018934) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x0001c52f) cell_vkb_side_pane_g

0xc35c,	// (0x00018d3f) cell_vkb_side_pane_t1

0xc36a,	// (0x00018d4d) cell_vkb_side_pane_t1_copy1

0xbf51,	// (0x00018934) bg_fep_vkb_candidate_pane_g2

0xc496,	// (0x00018e79) cell_vkb_candidate_pane_ParamLimits

0xc003,	// (0x000189e6) aid_size_cell_vkb_ParamLimits

0xc003,	// (0x000189e6) aid_size_cell_vkb

0xc496,	// (0x00018e79) cell_vkb_candidate_pane

0x6b3b,	// (0x0001351e) bg_popup_fep_shadow_pane_g1

0xc091,	// (0x00018a74) fep_vkb_bottom_pane_ParamLimits

0xc091,	// (0x00018a74) fep_vkb_bottom_pane

0xc0c7,	// (0x00018aaa) fep_vkb_candidate_pane_ParamLimits

0xc0c7,	// (0x00018aaa) fep_vkb_candidate_pane

0xc0e3,	// (0x00018ac6) fep_vkb_keypad_pane_ParamLimits

0xc0e3,	// (0x00018ac6) fep_vkb_keypad_pane

0xc122,	// (0x00018b05) fep_vkb_side_pane_ParamLimits

0xc122,	// (0x00018b05) fep_vkb_side_pane

0xc15e,	// (0x00018b41) fep_vkb_top_pane_ParamLimits

0xc15e,	// (0x00018b41) fep_vkb_top_pane

0xc193,	// (0x00018b76) fep_vkb_top_pane_g1_ParamLimits

0xc193,	// (0x00018b76) fep_vkb_top_pane_g1

0xc1a2,	// (0x00018b85) fep_vkb_top_pane_g2_ParamLimits

0xc1a2,	// (0x00018b85) fep_vkb_top_pane_g2

0xc1b1,	// (0x00018b94) fep_vkb_top_pane_g3_ParamLimits

0xc1b1,	// (0x00018b94) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x0001c515) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x0001c515) fep_vkb_top_pane_g

0xc1cf,	// (0x00018bb2) fep_vkb_top_text_pane_ParamLimits

0xc1cf,	// (0x00018bb2) fep_vkb_top_text_pane

0xc1e0,	// (0x00018bc3) fep_vkb_side_pane_g1_ParamLimits

0xc1e0,	// (0x00018bc3) fep_vkb_side_pane_g1

0xc229,	// (0x00018c0c) grid_vkb_side_pane_ParamLimits

0xc229,	// (0x00018c0c) grid_vkb_side_pane

0x6b43,	// (0x00013526) bg_popup_fep_shadow_pane_g2

0x6b4c,	// (0x0001352f) bg_popup_fep_shadow_pane_g3

0x6b54,	// (0x00013537) bg_popup_fep_shadow_pane_g4

0x6b5d,	// (0x00013540) bg_popup_fep_shadow_pane_g5

0x6b67,	// (0x0001354a) bg_popup_fep_shadow_pane_g6

0x6b6f,	// (0x00013552) bg_popup_fep_shadow_pane_g7

0x433a,	// (0x00010d1d) bg_popup_fep_shadow_pane_g8

0xc280,	// (0x00018c63) grid_vkb_keypad_number_pane_ParamLimits

0xc280,	// (0x00018c63) grid_vkb_keypad_number_pane

0xc290,	// (0x00018c73) grid_vkb_keypad_pane_ParamLimits

0xc290,	// (0x00018c73) grid_vkb_keypad_pane

0xc2b6,	// (0x00018c99) fep_vkb_bottom_pane_g1_ParamLimits

0xc2b6,	// (0x00018c99) fep_vkb_bottom_pane_g1

0xc2df,	// (0x00018cc2) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc2df,	// (0x00018cc2) grid_vkb_keypad_bottom_left_pane

0xc2f4,	// (0x00018cd7) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc2f4,	// (0x00018cd7) grid_vkb_keypad_bottom_right_pane

0xc309,	// (0x00018cec) fep_vkb_top_text_pane_g1

0xc324,	// (0x00018d07) fep_vkb_top_text_pane_t1

0xc339,	// (0x00018d1c) cell_vkb_side_pane_ParamLimits

0xc339,	// (0x00018d1c) cell_vkb_side_pane

0xbf51,	// (0x00018934) cell_vkb_side_pane_g1

0xc378,	// (0x00018d5b) cell_vkb_keypad_pane_ParamLimits

0xc378,	// (0x00018d5b) cell_vkb_keypad_pane

0xc3ed,	// (0x00018dd0) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x0001c542) bg_popup_fep_shadow_pane_g

0x6b81,	// (0x00013564) cell_hwr_side_pane_g1

0x6b81,	// (0x00013564) cell_hwr_side_pane_g2

0xc3f7,	// (0x00018dda) cell_vkb_keypad_pane_t1

0xc405,	// (0x00018de8) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc405,	// (0x00018de8) cell_vkb_keypad_bottom_left_pane

0xc422,	// (0x00018e05) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc422,	// (0x00018e05) cell_vkb_keypad_bottom_right_pane

0xbf51,	// (0x00018934) cell_vkb_keypad_bottom_left_pane_g1

0xbf51,	// (0x00018934) cell_vkb_keypad_bottom_right_pane_g1

0xc45b,	// (0x00018e3e) cell_vkb_keypad_number_pane_ParamLimits

0xc45b,	// (0x00018e3e) cell_vkb_keypad_number_pane

0xc47a,	// (0x00018e5d) cell_vkb_keypad_number_pane_g1

0xc484,	// (0x00018e67) cell_vkb_keypad_number_pane_g2

0xc48d,	// (0x00018e70) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x0001c534) cell_vkb_keypad_number_pane_g

0xc3f7,	// (0x00018dda) cell_vkb_keypad_number_pane_t1

0xc4b1,	// (0x00018e94) fep_vkb_candidate_pane_g1

0x0001,

0xfb72,	// (0x0001c555) cell_hwr_side_pane_g

0xc4ca,	// (0x00018ead) cell_hwr_side_pane_t1

0x6b8b,	// (0x0001356e) cell_hwr_side_pane_t1_copy1

0x6b99,	// (0x0001357c) cell_hwr_candidate_pane_g1

0x6bc8,	// (0x000135ab) cell_hwr_candidate_pane_t1

0xbf51,	// (0x00018934) cell_vkb_candidate_pane_g2

0xc50e,	// (0x00018ef1) cell_vkb_candidate_pane_t1

0x6934,	// (0x00013317) bg_popup_fep_shadow_pane_ParamLimits

0x6934,	// (0x00013317) bg_popup_fep_shadow_pane

0x69e9,	// (0x000133cc) bg_fep_hwr_top_pane_g4

0xbfd1,	// (0x000189b4) bg_hwr_side_pane_g1_ParamLimits

0xbfd1,	// (0x000189b4) bg_hwr_side_pane_g1

0x6a5a,	// (0x0001343d) cell_hwr_side_pane_ParamLimits

0x6a5a,	// (0x0001343d) cell_hwr_side_pane

0x6a95,	// (0x00013478) fep_hwr_write_pane_g1_ParamLimits

0x6a95,	// (0x00013478) fep_hwr_write_pane_g1

0x6aa2,	// (0x00013485) fep_hwr_write_pane_g2_ParamLimits

0x6aa2,	// (0x00013485) fep_hwr_write_pane_g2

0x6aaf,	// (0x00013492) fep_hwr_write_pane_g3_ParamLimits

0x6aaf,	// (0x00013492) fep_hwr_write_pane_g3

0x6abd,	// (0x000134a0) fep_hwr_write_pane_g4_ParamLimits

0x6abd,	// (0x000134a0) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x0001c501) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x0001c501) fep_hwr_write_pane_g

0x69e9,	// (0x000133cc) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x69e9,	// (0x000133cc) bg_fep_hwr_candidate_pane_g2

0x6ad2,	// (0x000134b5) cell_hwr_candidate_pane_ParamLimits

0x6ad2,	// (0x000134b5) cell_hwr_candidate_pane

0x6b14,	// (0x000134f7) fep_hwr_candidate_pane_g1_ParamLimits

0xc031,	// (0x00018a14) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc031,	// (0x00018a14) bg_popup_fep_shadow_pane_cp2

0xc1c1,	// (0x00018ba4) fep_vkb_top_pane_g4_ParamLimits

0xc1c1,	// (0x00018ba4) fep_vkb_top_pane_g4

0xc207,	// (0x00018bea) fep_vkb_side_pane_g2_ParamLimits

0xc207,	// (0x00018bea) fep_vkb_side_pane_g2

0x8183,	// (0x00014b66) list_setting_pane_t4_ParamLimits

0x8183,	// (0x00014b66) list_setting_pane_t4

0x81fd,	// (0x00014be0) list_setting_number_pane_t5_ParamLimits

0x81fd,	// (0x00014be0) list_setting_number_pane_t5

0x85f7,	// (0x00014fda) list_double_heading_pane_cp2_ParamLimits

0x85f7,	// (0x00014fda) list_double_heading_pane_cp2

0xc51c,	// (0x00018eff) list_double_heading_pane_g1_cp2_ParamLimits

0xc51c,	// (0x00018eff) list_double_heading_pane_g1_cp2

0xc528,	// (0x00018f0b) list_double_heading_pane_g2_cp2_ParamLimits

0xc528,	// (0x00018f0b) list_double_heading_pane_g2_cp2

0xc53c,	// (0x00018f1f) list_double_heading_pane_t1_cp2_ParamLimits

0xc53c,	// (0x00018f1f) list_double_heading_pane_t1_cp2

0xc552,	// (0x00018f35) list_double_heading_pane_t2_cp2_ParamLimits

0xc552,	// (0x00018f35) list_double_heading_pane_t2_cp2

0x3c1f,	// (0x00010602) aid_value_unit2

0x568e,	// (0x00012071) popup_preview_fixed_window

0x3f6a,	// (0x0001094d) bg_popup_preview_window_pane_cp02

0xc564,	// (0x00018f47) list_preview_fixed_pane

0xc5aa,	// (0x00018f8d) list_empty_pane_fp_ParamLimits

0xc5aa,	// (0x00018f8d) list_empty_pane_fp

0xc5aa,	// (0x00018f8d) list_single_cale_day_pane_fp_ParamLimits

0xc5aa,	// (0x00018f8d) list_single_cale_day_pane_fp

0xc5aa,	// (0x00018f8d) list_single_graphic_heading_pane_fp_ParamLimits

0xc5aa,	// (0x00018f8d) list_single_graphic_heading_pane_fp

0xc5aa,	// (0x00018f8d) list_single_graphic_pane_fp_ParamLimits

0xc5aa,	// (0x00018f8d) list_single_graphic_pane_fp

0xc5aa,	// (0x00018f8d) list_single_heading_pane_fp_ParamLimits

0xc5aa,	// (0x00018f8d) list_single_heading_pane_fp

0xc5aa,	// (0x00018f8d) list_single_pane_fp_ParamLimits

0xc5aa,	// (0x00018f8d) list_single_pane_fp

0xc5c0,	// (0x00018fa3) list_single_pane_fp_g1_ParamLimits

0xc5c0,	// (0x00018fa3) list_single_pane_fp_g1

0xc5cc,	// (0x00018faf) list_single_pane_fp_g2_ParamLimits

0xc5cc,	// (0x00018faf) list_single_pane_fp_g2

0xc5d8,	// (0x00018fbb) list_single_pane_fp_g3_ParamLimits

0xc5d8,	// (0x00018fbb) list_single_pane_fp_g3

0xc5ec,	// (0x00018fcf) list_single_pane_fp_g4_ParamLimits

0xc5ec,	// (0x00018fcf) list_single_pane_fp_g4

0x0003,

0xfb85,	// (0x0001c568) list_single_pane_fp_g_ParamLimits

0xfb85,	// (0x0001c568) list_single_pane_fp_g

0xc5f8,	// (0x00018fdb) list_single_pane_fp_t1_ParamLimits

0xc5f8,	// (0x00018fdb) list_single_pane_fp_t1

0xc60f,	// (0x00018ff2) list_single_graphic_pane_fp_g1_ParamLimits

0xc60f,	// (0x00018ff2) list_single_graphic_pane_fp_g1

0xc5c0,	// (0x00018fa3) list_single_graphic_pane_fp_g2_ParamLimits

0xc5c0,	// (0x00018fa3) list_single_graphic_pane_fp_g2

0xc5cc,	// (0x00018faf) list_single_graphic_pane_fp_g3_ParamLimits

0xc5cc,	// (0x00018faf) list_single_graphic_pane_fp_g3

0xc5d8,	// (0x00018fbb) list_single_graphic_pane_fp_g4_ParamLimits

0xc5d8,	// (0x00018fbb) list_single_graphic_pane_fp_g4

0xc5ec,	// (0x00018fcf) list_single_graphic_pane_fp_g5_ParamLimits

0xc5ec,	// (0x00018fcf) list_single_graphic_pane_fp_g5

0x0004,

0xfb8e,	// (0x0001c571) list_single_graphic_pane_fp_g_ParamLimits

0xfb8e,	// (0x0001c571) list_single_graphic_pane_fp_g

0xc61b,	// (0x00018ffe) list_single_graphic_pane_fp_t1_ParamLimits

0xc61b,	// (0x00018ffe) list_single_graphic_pane_fp_t1

0xc60f,	// (0x00018ff2) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc60f,	// (0x00018ff2) list_single_graphic_heading_pane_fp_g1

0xc5c0,	// (0x00018fa3) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc5c0,	// (0x00018fa3) list_single_graphic_heading_pane_fp_g2

0xc5cc,	// (0x00018faf) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc5cc,	// (0x00018faf) list_single_graphic_heading_pane_fp_g3

0xc5d8,	// (0x00018fbb) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc5d8,	// (0x00018fbb) list_single_graphic_heading_pane_fp_g4

0xc5ec,	// (0x00018fcf) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc5ec,	// (0x00018fcf) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x0001c571) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0001c571) list_single_graphic_heading_pane_fp_g

0xc631,	// (0x00019014) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc631,	// (0x00019014) list_single_graphic_heading_pane_fp_t1

0xc647,	// (0x0001902a) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc647,	// (0x0001902a) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb99,	// (0x0001c57c) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb99,	// (0x0001c57c) list_single_graphic_heading_pane_fp_t

0xc659,	// (0x0001903c) list_single_cale_day_pane_fp_g1_ParamLimits

0xc659,	// (0x0001903c) list_single_cale_day_pane_fp_g1

0xc691,	// (0x00019074) list_single_cale_day_pane_fp_g2_ParamLimits

0xc691,	// (0x00019074) list_single_cale_day_pane_fp_g2

0xc69d,	// (0x00019080) list_single_cale_day_pane_fp_g3_ParamLimits

0xc69d,	// (0x00019080) list_single_cale_day_pane_fp_g3

0xc6c5,	// (0x000190a8) list_single_cale_day_pane_fp_g4_ParamLimits

0xc6c5,	// (0x000190a8) list_single_cale_day_pane_fp_g4

0xc6e9,	// (0x000190cc) list_single_cale_day_pane_fp_g5_ParamLimits

0xc6e9,	// (0x000190cc) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9e,	// (0x0001c581) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9e,	// (0x0001c581) list_single_cale_day_pane_fp_g

0xc70d,	// (0x000190f0) list_single_cale_day_pane_fp_t1_ParamLimits

0xc70d,	// (0x000190f0) list_single_cale_day_pane_fp_t1

0xc733,	// (0x00019116) list_single_cale_day_pane_fp_t2_ParamLimits

0xc733,	// (0x00019116) list_single_cale_day_pane_fp_t2

0xc74c,	// (0x0001912f) list_single_cale_day_pane_fp_t3_ParamLimits

0xc74c,	// (0x0001912f) list_single_cale_day_pane_fp_t3

0x0002,

0xfba9,	// (0x0001c58c) list_single_cale_day_pane_fp_t_ParamLimits

0xfba9,	// (0x0001c58c) list_single_cale_day_pane_fp_t

0xc5c0,	// (0x00018fa3) list_empty_pane_fp_g1_ParamLimits

0xc5c0,	// (0x00018fa3) list_empty_pane_fp_g1

0xc765,	// (0x00019148) list_empty_pane_fp_t1

0xc773,	// (0x00019156) list_empty_pane_fp_t2

0x0001,

0xfbb0,	// (0x0001c593) list_empty_pane_fp_t

0xc5c0,	// (0x00018fa3) list_single_heading_pane_fp_g1_ParamLimits

0xc5c0,	// (0x00018fa3) list_single_heading_pane_fp_g1

0xc5cc,	// (0x00018faf) list_single_heading_pane_fp_g2_ParamLimits

0xc5cc,	// (0x00018faf) list_single_heading_pane_fp_g2

0xc5d8,	// (0x00018fbb) list_single_heading_pane_fp_g3_ParamLimits

0xc5d8,	// (0x00018fbb) list_single_heading_pane_fp_g3

0x0002,

0xfbb5,	// (0x0001c598) list_single_heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x0001c598) list_single_heading_pane_fp_g

0xc781,	// (0x00019164) list_single_heading_pane_fp_t1_ParamLimits

0xc781,	// (0x00019164) list_single_heading_pane_fp_t1

0xc793,	// (0x00019176) list_single_heading_pane_fp_t2_ParamLimits

0xc793,	// (0x00019176) list_single_heading_pane_fp_t2

0x0001,

0xfbbc,	// (0x0001c59f) list_single_heading_pane_fp_t_ParamLimits

0xfbbc,	// (0x0001c59f) list_single_heading_pane_fp_t

0x84aa,	// (0x00014e8d) aid_size_cell_fast

0x3f4d,	// (0x00010930) soft_indicator_pane_cp1_t1

0x84b3,	// (0x00014e96) cell_app_pane_cp2_ParamLimits

0x84b3,	// (0x00014e96) cell_app_pane_cp2

0x6956,	// (0x00013339) fep_hwr_candidate_drop_down_list_pane

0x6b2e,	// (0x00013511) fep_hwr_candidate_pane_g3_ParamLimits

0x6b2e,	// (0x00013511) fep_hwr_candidate_pane_g3

0x326f,	// (0x0000fc52) fep_hwr_candidate_pane_g4_ParamLimits

0x326f,	// (0x0000fc52) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x0001c50e) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x0001c50e) fep_hwr_candidate_pane_g

0xc0b6,	// (0x00018a99) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc0b6,	// (0x00018a99) fep_vkb_candidate_drop_down_list_pane

0xc4b9,	// (0x00018e9c) fep_vkb_candidate_pane_g3

0xc4c1,	// (0x00018ea4) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x0001c53b) fep_vkb_candidate_pane_g

0x6b99,	// (0x0001357c) cell_hwr_candidate_pane_g1_ParamLimits

0x6ba7,	// (0x0001358a) cell_hwr_candidate_pane_g3_ParamLimits

0x6ba7,	// (0x0001358a) cell_hwr_candidate_pane_g3

0xd393,	// (0x00019d76) cell_hwr_candidate_pane_g4_ParamLimits

0xd393,	// (0x00019d76) cell_hwr_candidate_pane_g4

0x0002,

0xfb77,	// (0x0001c55a) cell_hwr_candidate_pane_g_ParamLimits

0xfb77,	// (0x0001c55a) cell_hwr_candidate_pane_g

0xc4d8,	// (0x00018ebb) cell_vkb_candidate_pane_g3_ParamLimits

0xc4d8,	// (0x00018ebb) cell_vkb_candidate_pane_g3

0xc4f3,	// (0x00018ed6) cell_vkb_candidate_pane_g4_ParamLimits

0xc4f3,	// (0x00018ed6) cell_vkb_candidate_pane_g4

0xc7a9,	// (0x0001918c) cell_app_pane_cp2_g1_ParamLimits

0xc7a9,	// (0x0001918c) cell_app_pane_cp2_g1

0xc7c7,	// (0x000191aa) cell_app_pane_cp2_g2_ParamLimits

0xc7c7,	// (0x000191aa) cell_app_pane_cp2_g2

0x0001,

0xfbc1,	// (0x0001c5a4) cell_app_pane_cp2_g_ParamLimits

0xfbc1,	// (0x0001c5a4) cell_app_pane_cp2_g

0xc7d3,	// (0x000191b6) cell_app_pane_cp2_t1_ParamLimits

0xc7d3,	// (0x000191b6) cell_app_pane_cp2_t1

0x4268,	// (0x00010c4b) grid_highlight_pane_cp1_ParamLimits

0x4268,	// (0x00010c4b) grid_highlight_pane_cp1

0x6be6,	// (0x000135c9) cell_hwr_candidate_pane_cp1_ParamLimits

0x6be6,	// (0x000135c9) cell_hwr_candidate_pane_cp1

0x6b99,	// (0x0001357c) fep_hwr_candidate_drop_down_list_pane_g1

0x6c05,	// (0x000135e8) fep_hwr_candidate_drop_down_list_pane_g2

0x6c12,	// (0x000135f5) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x0001c5a9) fep_hwr_candidate_drop_down_list_pane_g

0x6c1f,	// (0x00013602) fep_hwr_candidate_drop_down_list_scroll_pane

0x6c28,	// (0x0001360b) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6c28,	// (0x0001360b) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6c35,	// (0x00013618) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6c35,	// (0x00013618) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6c42,	// (0x00013625) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6c42,	// (0x00013625) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6c4f,	// (0x00013632) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6c4f,	// (0x00013632) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6c6a,	// (0x0001364d) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6c6a,	// (0x0001364d) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6c85,	// (0x00013668) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6c85,	// (0x00013668) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6ca0,	// (0x00013683) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6ca0,	// (0x00013683) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6cbb,	// (0x0001369e) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6cbb,	// (0x0001369e) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x0001c5b0) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x0001c5b0) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc7e5,	// (0x000191c8) cell_vkb_candidate_pane_cp1_ParamLimits

0xc7e5,	// (0x000191c8) cell_vkb_candidate_pane_cp1

0xc1c1,	// (0x00018ba4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc1c1,	// (0x00018ba4) fep_vkb_candidate_drop_down_list_pane_g1

0xc805,	// (0x000191e8) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc805,	// (0x000191e8) fep_vkb_candidate_drop_down_list_pane_g2

0xc812,	// (0x000191f5) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc812,	// (0x000191f5) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x0001c5c1) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbde,	// (0x0001c5c1) fep_vkb_candidate_drop_down_list_pane_g

0xc81f,	// (0x00019202) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc81f,	// (0x00019202) fep_vkb_candidate_drop_down_list_scroll_pane

0xc82c,	// (0x0001920f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc82c,	// (0x0001920f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc839,	// (0x0001921c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc839,	// (0x0001921c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc845,	// (0x00019228) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc845,	// (0x00019228) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc851,	// (0x00019234) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc851,	// (0x00019234) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc872,	// (0x00019255) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc872,	// (0x00019255) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc893,	// (0x00019276) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc893,	// (0x00019276) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc8b4,	// (0x00019297) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc8b4,	// (0x00019297) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc8d5,	// (0x000192b8) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc8d5,	// (0x000192b8) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x0001c5c8) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x0001c5c8) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x792d,	// (0x00014310) title_pane_g1_ParamLimits

0x793a,	// (0x0001431d) title_pane_g2_ParamLimits

0xf54e,	// (0x0001bf31) title_pane_g_ParamLimits

0x48bc,	// (0x0001129f) aid_call2_pane

0x48b4,	// (0x00011297) aid_call_pane

0x48c4,	// (0x000112a7) popup_clock_analogue_window_g1

0x48c4,	// (0x000112a7) popup_clock_analogue_window_g2

0x59ff,	// (0x000123e2) popup_clock_analogue_window_g3

0x5a08,	// (0x000123eb) popup_clock_analogue_window_g4

0x3c31,	// (0x00010614) popup_clock_analogue_window_g5

0x0004,

0xf6e9,	// (0x0001c0cc) popup_clock_analogue_window_g

0x5a10,	// (0x000123f3) popup_clock_analogue_window_t1

0x5a1e,	// (0x00012401) clock_digital_number_pane_ParamLimits

0x5a1e,	// (0x00012401) clock_digital_number_pane

0x5a2a,	// (0x0001240d) clock_digital_number_pane_cp02_ParamLimits

0x5a2a,	// (0x0001240d) clock_digital_number_pane_cp02

0x5a36,	// (0x00012419) clock_digital_number_pane_cp03_ParamLimits

0x5a36,	// (0x00012419) clock_digital_number_pane_cp03

0x5a42,	// (0x00012425) clock_digital_number_pane_cp04_ParamLimits

0x5a42,	// (0x00012425) clock_digital_number_pane_cp04

0x5a4e,	// (0x00012431) clock_digital_separator_pane_ParamLimits

0x5a4e,	// (0x00012431) clock_digital_separator_pane

0x5a5a,	// (0x0001243d) popup_clock_digital_window_t1_ParamLimits

0x5a5a,	// (0x0001243d) popup_clock_digital_window_t1

0x3c31,	// (0x00010614) clock_digital_number_pane_g1

0x3c31,	// (0x00010614) clock_digital_number_pane_g2

0x0001,

0xf6f4,	// (0x0001c0d7) clock_digital_number_pane_g

0x3c31,	// (0x00010614) clock_digital_separator_pane_g1

0x3c31,	// (0x00010614) clock_digital_separator_pane_g2

0x0001,

0xf6f4,	// (0x0001c0d7) clock_digital_separator_pane_g

0x8f41,	// (0x00015924) aid_fill_nsta_ParamLimits

0x908d,	// (0x00015a70) indicator_nsta_pane_ParamLimits

0x9206,	// (0x00015be9) popup_clock_analogue_window

0x9206,	// (0x00015be9) popup_clock_digital_window

0x3e26,	// (0x00010809) grid_indicator_nsta_pane_ParamLimits

0xb90f,	// (0x000182f2) clock_nsta_pane_t2

0x0001,

0xfaab,	// (0x0001c48e) clock_nsta_pane_t

0x59c3,	// (0x000123a6) aid_size_max_handle

0x59cd,	// (0x000123b0) aid_size_min_handle

0x8bc4,	// (0x000155a7) editor_scroll_pane

0xc8f0,	// (0x000192d3) ex_editor_pane

0x43e9,	// (0x00010dcc) scroll_pane_cp13

0x419a,	// (0x00010b7d) scroll_pane_cp14

0x4912,	// (0x000112f5) scroll_pane_cp36

0x860b,	// (0x00014fee) list_single_graphic_hl_pane_cp2_ParamLimits

0x860b,	// (0x00014fee) list_single_graphic_hl_pane_cp2

0xab8e,	// (0x00017571) list_single_graphic_hl_pane_ParamLimits

0xab8e,	// (0x00017571) list_single_graphic_hl_pane

0xc8f8,	// (0x000192db) aid_size_min_hl_cp1

0xc901,	// (0x000192e4) list_highlight_pane_cp34_ParamLimits

0xc901,	// (0x000192e4) list_highlight_pane_cp34

0xc912,	// (0x000192f5) list_single_graphic_hl_pane_g1_ParamLimits

0xc912,	// (0x000192f5) list_single_graphic_hl_pane_g1

0xc91f,	// (0x00019302) list_single_graphic_hl_pane_g2_ParamLimits

0xc91f,	// (0x00019302) list_single_graphic_hl_pane_g2

0xc91f,	// (0x00019302) list_single_graphic_hl_pane_g3_ParamLimits

0xc91f,	// (0x00019302) list_single_graphic_hl_pane_g3

0xc92b,	// (0x0001930e) list_single_graphic_hl_pane_g4_ParamLimits

0xc92b,	// (0x0001930e) list_single_graphic_hl_pane_g4

0xc937,	// (0x0001931a) list_single_graphic_hl_pane_g5_ParamLimits

0xc937,	// (0x0001931a) list_single_graphic_hl_pane_g5

0x0004,

0xfbf6,	// (0x0001c5d9) list_single_graphic_hl_pane_g_ParamLimits

0xfbf6,	// (0x0001c5d9) list_single_graphic_hl_pane_g

0xc94b,	// (0x0001932e) list_single_graphic_hl_pane_t1_ParamLimits

0xc94b,	// (0x0001932e) list_single_graphic_hl_pane_t1

0xc961,	// (0x00019344) aid_size_min_hl_cp2

0xc96a,	// (0x0001934d) list_highlight_pane_cp34_cp2_ParamLimits

0xc96a,	// (0x0001934d) list_highlight_pane_cp34_cp2

0xc912,	// (0x000192f5) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc912,	// (0x000192f5) list_single_graphic_hl_pane_g1_cp2

0xc977,	// (0x0001935a) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc977,	// (0x0001935a) list_single_graphic_hl_pane_g2_cp2

0xc983,	// (0x00019366) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc983,	// (0x00019366) list_single_graphic_hl_pane_g3_cp2

0x8afd,	// (0x000154e0) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x8afd,	// (0x000154e0) list_single_graphic_hl_pane_g4_cp2

0xc991,	// (0x00019374) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc991,	// (0x00019374) list_single_graphic_hl_pane_g5_cp2

0x5d05,	// (0x000126e8) control_pane_g4_ParamLimits

0x5d05,	// (0x000126e8) control_pane_g4

0x8f17,	// (0x000158fa) bg_popup_sub_pane_cp10_ParamLimits

0xbf5b,	// (0x0001893e) list_choice_list_pane_ParamLimits

0xbf6a,	// (0x0001894d) scroll_pane_cp23

0x3f6a,	// (0x0001094d) bg_popup_preview_window_pane_cp02_ParamLimits

0xc564,	// (0x00018f47) list_preview_fixed_pane_ParamLimits

0xc57a,	// (0x00018f5d) list_preview_fixed_pane_cp_ParamLimits

0xc57a,	// (0x00018f5d) list_preview_fixed_pane_cp

0xc586,	// (0x00018f69) popup_preview_fixed_window_g1_ParamLimits

0xc586,	// (0x00018f69) popup_preview_fixed_window_g1

0xc592,	// (0x00018f75) popup_preview_fixed_window_g2_ParamLimits

0xc592,	// (0x00018f75) popup_preview_fixed_window_g2

0x0002,

0xfb7e,	// (0x0001c561) popup_preview_fixed_window_g_ParamLimits

0xfb7e,	// (0x0001c561) popup_preview_fixed_window_g

0x5937,	// (0x0001231a) aid_navi_side_left_pane_ParamLimits

0x594c,	// (0x0001232f) aid_navi_side_right_pane_ParamLimits

0x5964,	// (0x00012347) navi_icon_pane_stacon_ParamLimits

0x5978,	// (0x0001235b) navi_navi_pane_stacon_ParamLimits

0x5964,	// (0x00012347) navi_text_pane_stacon_ParamLimits

0x555d,	// (0x00011f40) main_text_info_pane

0xc9bb,	// (0x0001939e) listscroll_text_info_pane

0xc9c3,	// (0x000193a6) list_text_info_pane_ParamLimits

0xc9c3,	// (0x000193a6) list_text_info_pane

0xc9d2,	// (0x000193b5) scroll_pane_cp24_ParamLimits

0xc9d2,	// (0x000193b5) scroll_pane_cp24

0xc9f0,	// (0x000193d3) list_text_info_pane_t1_ParamLimits

0xc9f0,	// (0x000193d3) list_text_info_pane_t1

0x5e81,	// (0x00012864) popup_fast_swap2_window_ParamLimits

0x5e81,	// (0x00012864) popup_fast_swap2_window

0xca24,	// (0x00019407) aid_size_cell_fast2

0x3c27,	// (0x0001060a) bg_popup_window_pane_cp17

0x99a2,	// (0x00016385) heading_pane_cp2

0x409e,	// (0x00010a81) listscroll_fast2_pane

0xca2e,	// (0x00019411) grid_fast2_pane

0xca38,	// (0x0001941b) listscroll_fast2_pane_g1

0xca40,	// (0x00019423) listscroll_fast2_pane_g2

0x0001,

0xfc01,	// (0x0001c5e4) listscroll_fast2_pane_g

0x43e9,	// (0x00010dcc) scroll_pane_cp26

0xca4a,	// (0x0001942d) cell_fast2_pane_ParamLimits

0xca4a,	// (0x0001942d) cell_fast2_pane

0xca5f,	// (0x00019442) cell_fast2_pane_g1

0xca68,	// (0x0001944b) cell_fast2_pane_g2

0xca71,	// (0x00019454) cell_fast2_pane_g3

0x0002,

0xfc06,	// (0x0001c5e9) cell_fast2_pane_g

0x40d1,	// (0x00010ab4) grid_highlight_pane_cp9

0x5e49,	// (0x0001282c) main_eswt_pane_ParamLimits

0x5e49,	// (0x0001282c) main_eswt_pane

0xc9e7,	// (0x000193ca) list_single_text_info_pane

0xca79,	// (0x0001945c) eswt_ctrl_button_pane

0xca79,	// (0x0001945c) eswt_ctrl_canvas_pane

0xca81,	// (0x00019464) eswt_ctrl_combo_pane

0xca79,	// (0x0001945c) eswt_ctrl_default_pane

0xca79,	// (0x0001945c) eswt_ctrl_label_pane

0xca89,	// (0x0001946c) eswt_ctrl_wait_pane

0xca91,	// (0x00019474) eswt_shell_pane

0x3c27,	// (0x0001060a) listscroll_eswt_app_pane

0xcab1,	// (0x00019494) popup_eswt_tasktip_window_ParamLimits

0xcab1,	// (0x00019494) popup_eswt_tasktip_window

0x956e,	// (0x00015f51) bg_popup_window_pane_cp18

0xcac2,	// (0x000194a5) eswt_control_pane_g1_ParamLimits

0xcac2,	// (0x000194a5) eswt_control_pane_g1

0xcacf,	// (0x000194b2) eswt_control_pane_g2_ParamLimits

0xcacf,	// (0x000194b2) eswt_control_pane_g2

0xcadc,	// (0x000194bf) eswt_control_pane_g3_ParamLimits

0xcadc,	// (0x000194bf) eswt_control_pane_g3

0xcae9,	// (0x000194cc) eswt_control_pane_g4_ParamLimits

0xcae9,	// (0x000194cc) eswt_control_pane_g4

0x0003,

0xfc0d,	// (0x0001c5f0) eswt_control_pane_g_ParamLimits

0xfc0d,	// (0x0001c5f0) eswt_control_pane_g

0x4268,	// (0x00010c4b) bg_button_pane_ParamLimits

0x4268,	// (0x00010c4b) bg_button_pane

0x40e6,	// (0x00010ac9) common_borders_pane_copy2_ParamLimits

0x40e6,	// (0x00010ac9) common_borders_pane_copy2

0xcaf6,	// (0x000194d9) control_button_pane_g1_ParamLimits

0xcaf6,	// (0x000194d9) control_button_pane_g1

0xcb02,	// (0x000194e5) control_button_pane_g2_ParamLimits

0xcb02,	// (0x000194e5) control_button_pane_g2

0xcb0e,	// (0x000194f1) control_button_pane_g3_ParamLimits

0xcb0e,	// (0x000194f1) control_button_pane_g3

0x0002,

0xfc16,	// (0x0001c5f9) control_button_pane_g_ParamLimits

0xfc16,	// (0x0001c5f9) control_button_pane_g

0xcb22,	// (0x00019505) control_button_pane_t1

0xcb30,	// (0x00019513) control_button_pane_t2

0x0001,

0xfc1d,	// (0x0001c600) control_button_pane_t

0x944e,	// (0x00015e31) bg_button_pane_g1

0x945e,	// (0x00015e41) bg_button_pane_g2

0x9456,	// (0x00015e39) bg_button_pane_g3

0x946e,	// (0x00015e51) bg_button_pane_g4

0x9466,	// (0x00015e49) bg_button_pane_g5

0x9476,	// (0x00015e59) bg_button_pane_g6

0x947e,	// (0x00015e61) bg_button_pane_g7

0x948e,	// (0x00015e71) bg_button_pane_g8

0x9486,	// (0x00015e69) bg_button_pane_g9

0x0008,

0xf857,	// (0x0001c23a) bg_button_pane_g

0xbf16,	// (0x000188f9) common_borders_pane_ParamLimits

0xbf16,	// (0x000188f9) common_borders_pane

0xcac2,	// (0x000194a5) eswt_control_pane_g1_copy1_ParamLimits

0xcac2,	// (0x000194a5) eswt_control_pane_g1_copy1

0xcacf,	// (0x000194b2) eswt_control_pane_g2_copy1_ParamLimits

0xcacf,	// (0x000194b2) eswt_control_pane_g2_copy1

0xcadc,	// (0x000194bf) eswt_control_pane_g3_copy1_ParamLimits

0xcadc,	// (0x000194bf) eswt_control_pane_g3_copy1

0xcae9,	// (0x000194cc) eswt_control_pane_g4_copy1_ParamLimits

0xcae9,	// (0x000194cc) eswt_control_pane_g4_copy1

0xbf51,	// (0x00018934) bg_eswt_ctrl_canvas_pane_g1

0xbf16,	// (0x000188f9) common_borders_pane_cp2_ParamLimits

0xbf16,	// (0x000188f9) common_borders_pane_cp2

0xbf16,	// (0x000188f9) common_borders_pane_cp3_ParamLimits

0xbf16,	// (0x000188f9) common_borders_pane_cp3

0xcb3e,	// (0x00019521) separator_horizontal_pane

0xcb46,	// (0x00019529) separator_vertical_pane

0xcac2,	// (0x000194a5) eswt_control_pane_g1_copy2_ParamLimits

0xcac2,	// (0x000194a5) eswt_control_pane_g1_copy2

0xcacf,	// (0x000194b2) eswt_control_pane_g2_copy2_ParamLimits

0xcacf,	// (0x000194b2) eswt_control_pane_g2_copy2

0xcadc,	// (0x000194bf) eswt_control_pane_g3_copy2_ParamLimits

0xcadc,	// (0x000194bf) eswt_control_pane_g3_copy2

0xcae9,	// (0x000194cc) eswt_control_pane_g4_copy2_ParamLimits

0xcae9,	// (0x000194cc) eswt_control_pane_g4_copy2

0x3c27,	// (0x0001060a) common_borders_pane_cp4

0xcb4f,	// (0x00019532) separator_horizontal_pane_g1

0xcb58,	// (0x0001953b) separator_horizontal_pane_g2

0xcb61,	// (0x00019544) separator_horizontal_pane_g3

0x0002,

0xfc22,	// (0x0001c605) separator_horizontal_pane_g

0xcac2,	// (0x000194a5) eswt_control_pane_g1_copy3_ParamLimits

0xcac2,	// (0x000194a5) eswt_control_pane_g1_copy3

0xcacf,	// (0x000194b2) eswt_control_pane_g2_copy3_ParamLimits

0xcacf,	// (0x000194b2) eswt_control_pane_g2_copy3

0xcadc,	// (0x000194bf) eswt_control_pane_g3_copy3_ParamLimits

0xcadc,	// (0x000194bf) eswt_control_pane_g3_copy3

0xcae9,	// (0x000194cc) eswt_control_pane_g4_copy3_ParamLimits

0xcae9,	// (0x000194cc) eswt_control_pane_g4_copy3

0x3c27,	// (0x0001060a) common_borders_pane_cp5

0xcb6a,	// (0x0001954d) separator_vertical_pane_g1

0xcb73,	// (0x00019556) separator_vertical_pane_g2

0xcb7c,	// (0x0001955f) separator_vertical_pane_g3

0x0002,

0xfc29,	// (0x0001c60c) separator_vertical_pane_g

0xcac2,	// (0x000194a5) eswt_control_pane_g1_copy4_ParamLimits

0xcac2,	// (0x000194a5) eswt_control_pane_g1_copy4

0xcacf,	// (0x000194b2) eswt_control_pane_g2_copy4_ParamLimits

0xcacf,	// (0x000194b2) eswt_control_pane_g2_copy4

0xcadc,	// (0x000194bf) eswt_control_pane_g3_copy4_ParamLimits

0xcadc,	// (0x000194bf) eswt_control_pane_g3_copy4

0xcae9,	// (0x000194cc) eswt_control_pane_g4_copy4_ParamLimits

0xcae9,	// (0x000194cc) eswt_control_pane_g4_copy4

0xcb85,	// (0x00019568) eswt_ctrl_combo_button_pane

0xcb8d,	// (0x00019570) eswt_ctrl_input_pane

0xcb95,	// (0x00019578) popup_choice_list_window_cp70

0xcb9d,	// (0x00019580) eswt_ctrl_input_pane_t1

0x3c27,	// (0x0001060a) input_focus_pane_cp70

0xbf16,	// (0x000188f9) bg_button_pane_cp70_ParamLimits

0xbf16,	// (0x000188f9) bg_button_pane_cp70

0xcbab,	// (0x0001958e) eswt_ctrl_combo_button_pane_g1

0xcbb3,	// (0x00019596) wait_bar_pane_cp70

0x956e,	// (0x00015f51) bg_popup_window_pane_cp70_ParamLimits

0x956e,	// (0x00015f51) bg_popup_window_pane_cp70

0xcbbb,	// (0x0001959e) popup_eswt_tasktip_window_t1

0xcbd1,	// (0x000195b4) wait_bar_pane_cp71_ParamLimits

0xcbd1,	// (0x000195b4) wait_bar_pane_cp71

0xcbdd,	// (0x000195c0) grid_eswt_app_pane

0x4798,	// (0x0001117b) scroll_pane_cp70

0xcbe6,	// (0x000195c9) cell_eswt_app_pane_ParamLimits

0xcbe6,	// (0x000195c9) cell_eswt_app_pane

0xcc16,	// (0x000195f9) cell_eswt_app_pane_g1_ParamLimits

0xcc16,	// (0x000195f9) cell_eswt_app_pane_g1

0xcc45,	// (0x00019628) cell_eswt_app_pane_g2_ParamLimits

0xcc45,	// (0x00019628) cell_eswt_app_pane_g2

0x0001,

0xfc30,	// (0x0001c613) cell_eswt_app_pane_g_ParamLimits

0xfc30,	// (0x0001c613) cell_eswt_app_pane_g

0xcc69,	// (0x0001964c) cell_eswt_app_pane_t1_ParamLimits

0xcc69,	// (0x0001964c) cell_eswt_app_pane_t1

0xcc9b,	// (0x0001967e) grid_highlight_pane_cp70_ParamLimits

0xcc9b,	// (0x0001967e) grid_highlight_pane_cp70

0x8a99,	// (0x0001547c) set_content_pane_g1

0x8e6b,	// (0x0001584e) status_small_volume_pane

0x6cd6,	// (0x000136b9) status_small_volume_pane_g1

0x6cde,	// (0x000136c1) volume_small2_pane

0x6ce7,	// (0x000136ca) volume_small2_pane_g1

0x6cf0,	// (0x000136d3) volume_small2_pane_g2

0x6cf9,	// (0x000136dc) volume_small2_pane_g3

0x6d02,	// (0x000136e5) volume_small2_pane_g4

0x6d0b,	// (0x000136ee) volume_small2_pane_g5

0x6d14,	// (0x000136f7) volume_small2_pane_g6

0x6d1d,	// (0x00013700) volume_small2_pane_g7

0x6d26,	// (0x00013709) volume_small2_pane_g8

0x6d2f,	// (0x00013712) volume_small2_pane_g9

0x6d38,	// (0x0001371b) volume_small2_pane_g10

0x0009,

0xfc35,	// (0x0001c618) volume_small2_pane_g

0xc309,	// (0x00018cec) fep_vkb_top_text_pane_g1_ParamLimits

0xc324,	// (0x00018d07) fep_vkb_top_text_pane_t1_ParamLimits

0xc59e,	// (0x00018f81) popup_preview_fixed_window_g3_ParamLimits

0xc59e,	// (0x00018f81) popup_preview_fixed_window_g3

0x6330,	// (0x00012d13) popup_toolbar_trans_pane

0xa8eb,	// (0x000172ce) aid_height_set_list_ParamLimits

0xa8fc,	// (0x000172df) aid_size_parent_ParamLimits

0x8f17,	// (0x000158fa) list_highlight_pane_cp2_ParamLimits

0x8a99,	// (0x0001547c) set_content_pane_g1_ParamLimits

0xabad,	// (0x00017590) list_single_image_pane_ParamLimits

0xabad,	// (0x00017590) list_single_image_pane

0xcca7,	// (0x0001968a) aid_size_cell_image_ParamLimits

0xcca7,	// (0x0001968a) aid_size_cell_image

0xccb4,	// (0x00019697) grid_single_image_pane_ParamLimits

0xccb4,	// (0x00019697) grid_single_image_pane

0xc5cc,	// (0x00018faf) list_single_image_pane_g1_ParamLimits

0xc5cc,	// (0x00018faf) list_single_image_pane_g1

0xc5d8,	// (0x00018fbb) list_single_image_pane_g2_ParamLimits

0xc5d8,	// (0x00018fbb) list_single_image_pane_g2

0x0001,

0xfc4a,	// (0x0001c62d) list_single_image_pane_g_ParamLimits

0xfc4a,	// (0x0001c62d) list_single_image_pane_g

0xccc2,	// (0x000196a5) list_single_image_pane_t1_ParamLimits

0xccc2,	// (0x000196a5) list_single_image_pane_t1

0xccd8,	// (0x000196bb) cell_image_list_pane_ParamLimits

0xccd8,	// (0x000196bb) cell_image_list_pane

0xccec,	// (0x000196cf) cell_image_list_pane_g1

0xccf5,	// (0x000196d8) cell_image_list_pane_g2

0x0001,

0xfc4f,	// (0x0001c632) cell_image_list_pane_g

0xccfe,	// (0x000196e1) aid_size_cell_tb_trans_pane

0x4268,	// (0x00010c4b) bg_tb_trans_pane

0xcd10,	// (0x000196f3) grid_tb_trans_pane

0x944e,	// (0x00015e31) bg_tb_trans_pane_g1

0x945e,	// (0x00015e41) bg_tb_trans_pane_g2

0x9456,	// (0x00015e39) bg_tb_trans_pane_g3

0x946e,	// (0x00015e51) bg_tb_trans_pane_g4

0x9466,	// (0x00015e49) bg_tb_trans_pane_g5

0x948e,	// (0x00015e71) bg_tb_trans_pane_g6

0x9486,	// (0x00015e69) bg_tb_trans_pane_g7

0x9476,	// (0x00015e59) bg_tb_trans_pane_g8

0x947e,	// (0x00015e61) bg_tb_trans_pane_g9

0x0008,

0xfc54,	// (0x0001c637) bg_tb_trans_pane_g

0xcd24,	// (0x00019707) cell_toolbar_trans_pane_ParamLimits

0xcd24,	// (0x00019707) cell_toolbar_trans_pane

0xbf51,	// (0x00018934) cell_toolbar_trans_pane_g1

0xbacf,	// (0x000184b2) list_form2_midp_pane_t1

0xbadd,	// (0x000184c0) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x0001c4d4) list_form2_midp_pane_t

0xbaeb,	// (0x000184ce) scroll_pane_cp51_ParamLimits

0xbcf4,	// (0x000186d7) form2_midp_wait_pane_g1

0xbcfd,	// (0x000186e0) form2_midp_wait_pane_g2

0xbd06,	// (0x000186e9) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x0001c4e9) form2_midp_wait_pane_g

0x3e26,	// (0x00010809) list_highlight_pane_cp21_ParamLimits

0xbd4e,	// (0x00018731) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbd5d,	// (0x00018740) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xab2f,	// (0x00017512) list_single_2graphic_im_pane_ParamLimits

0xab2f,	// (0x00017512) list_single_2graphic_im_pane

0xcd4a,	// (0x0001972d) list_single_2graphic_im_pane_g1_ParamLimits

0xcd4a,	// (0x0001972d) list_single_2graphic_im_pane_g1

0xcd5b,	// (0x0001973e) list_single_2graphic_im_pane_g2_ParamLimits

0xcd5b,	// (0x0001973e) list_single_2graphic_im_pane_g2

0xcd67,	// (0x0001974a) list_single_2graphic_im_pane_g3_ParamLimits

0xcd67,	// (0x0001974a) list_single_2graphic_im_pane_g3

0x0003,

0xfc67,	// (0x0001c64a) list_single_2graphic_im_pane_g_ParamLimits

0xfc67,	// (0x0001c64a) list_single_2graphic_im_pane_g

0xcd87,	// (0x0001976a) list_single_2graphic_im_pane_t1_ParamLimits

0xcd87,	// (0x0001976a) list_single_2graphic_im_pane_t1

0xc5aa,	// (0x00018f8d) list_single_graphic_2heading_pane_fp_ParamLimits

0xc5aa,	// (0x00018f8d) list_single_graphic_2heading_pane_fp

0xc60f,	// (0x00018ff2) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc60f,	// (0x00018ff2) list_single_graphic_2heading_pane_fp_g1

0xc5c0,	// (0x00018fa3) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc5c0,	// (0x00018fa3) list_single_graphic_2heading_pane_fp_g2

0xc5cc,	// (0x00018faf) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc5cc,	// (0x00018faf) list_single_graphic_2heading_pane_fp_g3

0xc5d8,	// (0x00018fbb) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc5d8,	// (0x00018fbb) list_single_graphic_2heading_pane_fp_g4

0xc5ec,	// (0x00018fcf) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc5ec,	// (0x00018fcf) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x0001c571) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0001c571) list_single_graphic_2heading_pane_fp_g

0xcdb8,	// (0x0001979b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcdb8,	// (0x0001979b) list_single_graphic_2heading_pane_fp_t1

0xc647,	// (0x0001902a) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc647,	// (0x0001902a) list_single_graphic_2heading_pane_fp_t2

0xcdce,	// (0x000197b1) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcdce,	// (0x000197b1) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc70,	// (0x0001c653) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc70,	// (0x0001c653) list_single_graphic_2heading_pane_fp_t

0xbfdd,	// (0x000189c0) fep_hwr_write_pane_g5_ParamLimits

0xbfdd,	// (0x000189c0) fep_hwr_write_pane_g5

0xbfe9,	// (0x000189cc) fep_hwr_write_pane_g6_ParamLimits

0xbfe9,	// (0x000189cc) fep_hwr_write_pane_g6

0xca91,	// (0x00019474) eswt_shell_pane_ParamLimits

0x956e,	// (0x00015f51) bg_popup_window_pane_cp18_ParamLimits

0xa832,	// (0x00017215) heading_pane_cp70

0xcbbb,	// (0x0001959e) popup_eswt_tasktip_window_t1_ParamLimits

0x8f96,	// (0x00015979) aid_touch_tab_arrow_left

0x8fa5,	// (0x00015988) aid_touch_tab_arrow_right

0x794b,	// (0x0001432e) title_pane_g3_ParamLimits

0x794b,	// (0x0001432e) title_pane_g3

0x41ff,	// (0x00010be2) set_value_pane_g1

0x6330,	// (0x00012d13) popup_toolbar_trans_pane_ParamLimits

0xccfe,	// (0x000196e1) aid_size_cell_tb_trans_pane_ParamLimits

0x4268,	// (0x00010c4b) bg_tb_trans_pane_ParamLimits

0xcd10,	// (0x000196f3) grid_tb_trans_pane_ParamLimits

0x3f6a,	// (0x0001094d) cont_note_pane_ParamLimits

0x3f6a,	// (0x0001094d) cont_note_pane

0x40e6,	// (0x00010ac9) cont_snote2_single_text_pane_ParamLimits

0x40e6,	// (0x00010ac9) cont_snote2_single_text_pane

0x40e6,	// (0x00010ac9) cont_snote2_single_graphic_pane_ParamLimits

0x40e6,	// (0x00010ac9) cont_snote2_single_graphic_pane

0x9bb5,	// (0x00016598) cont_note_wait_pane_ParamLimits

0x9bb5,	// (0x00016598) cont_note_wait_pane

0x9bb5,	// (0x00016598) cont_note_image_pane_ParamLimits

0x9bb5,	// (0x00016598) cont_note_image_pane

0xcde4,	// (0x000197c7) popup_note2_window_g1_ParamLimits

0xcde4,	// (0x000197c7) popup_note2_window_g1

0xce15,	// (0x000197f8) popup_note2_window_t1_ParamLimits

0xce15,	// (0x000197f8) popup_note2_window_t1

0xce5a,	// (0x0001983d) popup_note2_window_t2_ParamLimits

0xce5a,	// (0x0001983d) popup_note2_window_t2

0xce9f,	// (0x00019882) popup_note2_window_t3_ParamLimits

0xce9f,	// (0x00019882) popup_note2_window_t3

0xcee4,	// (0x000198c7) popup_note2_window_t4_ParamLimits

0xcee4,	// (0x000198c7) popup_note2_window_t4

0x3fee,	// (0x000109d1) popup_note2_window_t5_ParamLimits

0x3fee,	// (0x000109d1) popup_note2_window_t5

0x0004,

0xfc7c,	// (0x0001c65f) popup_note2_window_t_ParamLimits

0xfc7c,	// (0x0001c65f) popup_note2_window_t

0xcf13,	// (0x000198f6) popup_note2_image_window_g1_ParamLimits

0xcf13,	// (0x000198f6) popup_note2_image_window_g1

0xcf1f,	// (0x00019902) popup_note2_image_window_g2_ParamLimits

0xcf1f,	// (0x00019902) popup_note2_image_window_g2

0x0001,

0xfc87,	// (0x0001c66a) popup_note2_image_window_g_ParamLimits

0xfc87,	// (0x0001c66a) popup_note2_image_window_g

0xcf31,	// (0x00019914) popup_note2_image_window_t1_ParamLimits

0xcf31,	// (0x00019914) popup_note2_image_window_t1

0xcf49,	// (0x0001992c) popup_note2_image_window_t2_ParamLimits

0xcf49,	// (0x0001992c) popup_note2_image_window_t2

0xcf61,	// (0x00019944) popup_note2_image_window_t3_ParamLimits

0xcf61,	// (0x00019944) popup_note2_image_window_t3

0x0002,

0xfc8c,	// (0x0001c66f) popup_note2_image_window_t_ParamLimits

0xfc8c,	// (0x0001c66f) popup_note2_image_window_t

0x9bc3,	// (0x000165a6) popup_note2_wait_window_g1_ParamLimits

0x9bc3,	// (0x000165a6) popup_note2_wait_window_g1

0x9bcf,	// (0x000165b2) popup_note2_wait_window_g2_ParamLimits

0x9bcf,	// (0x000165b2) popup_note2_wait_window_g2

0x9bdb,	// (0x000165be) popup_note2_wait_window_g3_ParamLimits

0x9bdb,	// (0x000165be) popup_note2_wait_window_g3

0x0002,

0xf839,	// (0x0001c21c) popup_note2_wait_window_g_ParamLimits

0xf839,	// (0x0001c21c) popup_note2_wait_window_g

0xcf7d,	// (0x00019960) popup_note2_wait_window_t1_ParamLimits

0xcf7d,	// (0x00019960) popup_note2_wait_window_t1

0xcf9b,	// (0x0001997e) popup_note2_wait_window_t2_ParamLimits

0xcf9b,	// (0x0001997e) popup_note2_wait_window_t2

0xcfb9,	// (0x0001999c) popup_note2_wait_window_t3_ParamLimits

0xcfb9,	// (0x0001999c) popup_note2_wait_window_t3

0xcfcb,	// (0x000199ae) popup_note2_wait_window_t4_ParamLimits

0xcfcb,	// (0x000199ae) popup_note2_wait_window_t4

0x0003,

0xfc93,	// (0x0001c676) popup_note2_wait_window_t_ParamLimits

0xfc93,	// (0x0001c676) popup_note2_wait_window_t

0xcfdd,	// (0x000199c0) wait_bar2_pane_ParamLimits

0xcfdd,	// (0x000199c0) wait_bar2_pane

0xcff5,	// (0x000199d8) popup_snote2_single_text_window_g1_ParamLimits

0xcff5,	// (0x000199d8) popup_snote2_single_text_window_g1

0xd01d,	// (0x00019a00) popup_snote2_single_text_window_t1_ParamLimits

0xd01d,	// (0x00019a00) popup_snote2_single_text_window_t1

0xd069,	// (0x00019a4c) popup_snote2_single_text_window_t2_ParamLimits

0xd069,	// (0x00019a4c) popup_snote2_single_text_window_t2

0xd0b5,	// (0x00019a98) popup_snote2_single_text_window_t3_ParamLimits

0xd0b5,	// (0x00019a98) popup_snote2_single_text_window_t3

0xd0f6,	// (0x00019ad9) popup_snote2_single_text_window_t4_ParamLimits

0xd0f6,	// (0x00019ad9) popup_snote2_single_text_window_t4

0xd12c,	// (0x00019b0f) popup_snote2_single_text_window_t5_ParamLimits

0xd12c,	// (0x00019b0f) popup_snote2_single_text_window_t5

0x0004,

0xfc9c,	// (0x0001c67f) popup_snote2_single_text_window_t_ParamLimits

0xfc9c,	// (0x0001c67f) popup_snote2_single_text_window_t

0xd157,	// (0x00019b3a) popup_snote2_single_graphic_window_g1_ParamLimits

0xd157,	// (0x00019b3a) popup_snote2_single_graphic_window_g1

0xd17f,	// (0x00019b62) popup_snote2_single_graphic_window_g2_ParamLimits

0xd17f,	// (0x00019b62) popup_snote2_single_graphic_window_g2

0x0001,

0xfca7,	// (0x0001c68a) popup_snote2_single_graphic_window_g_ParamLimits

0xfca7,	// (0x0001c68a) popup_snote2_single_graphic_window_g

0xd1a7,	// (0x00019b8a) popup_snote2_single_graphic_window_t1_ParamLimits

0xd1a7,	// (0x00019b8a) popup_snote2_single_graphic_window_t1

0xd1f3,	// (0x00019bd6) popup_snote2_single_graphic_window_t2_ParamLimits

0xd1f3,	// (0x00019bd6) popup_snote2_single_graphic_window_t2

0xd0b5,	// (0x00019a98) popup_snote2_single_graphic_window_t3_ParamLimits

0xd0b5,	// (0x00019a98) popup_snote2_single_graphic_window_t3

0xd0f6,	// (0x00019ad9) popup_snote2_single_graphic_window_t4_ParamLimits

0xd0f6,	// (0x00019ad9) popup_snote2_single_graphic_window_t4

0xd12c,	// (0x00019b0f) popup_snote2_single_graphic_window_t5_ParamLimits

0xd12c,	// (0x00019b0f) popup_snote2_single_graphic_window_t5

0x0004,

0xfcac,	// (0x0001c68f) popup_snote2_single_graphic_window_t_ParamLimits

0xfcac,	// (0x0001c68f) popup_snote2_single_graphic_window_t

0xb9a8,	// (0x0001838b) clock_nsta_pane_cp2_t1

0xb9a8,	// (0x0001838b) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x0001c4aa) clock_nsta_pane_cp2_t

0x4287,	// (0x00010c6a) form_field_data_wide_pane_g1_ParamLimits

0x41cf,	// (0x00010bb2) form_field_data_wide_pane_g2_ParamLimits

0x41cf,	// (0x00010bb2) form_field_data_wide_pane_g2

0x4293,	// (0x00010c76) form_field_data_wide_pane_g3_ParamLimits

0x4293,	// (0x00010c76) form_field_data_wide_pane_g3

0x0002,

0xf66c,	// (0x0001c04f) form_field_data_wide_pane_g_ParamLimits

0xf66c,	// (0x0001c04f) form_field_data_wide_pane_g

0xb8ab,	// (0x0001828e) grid_touch_3_pane_ParamLimits

0xb8ab,	// (0x0001828e) grid_touch_3_pane

0xd23f,	// (0x00019c22) cell_touch_3_pane_ParamLimits

0xd23f,	// (0x00019c22) cell_touch_3_pane

0xbf51,	// (0x00018934) cell_touch_3_pane_g1

0xbf51,	// (0x00018934) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x0001c52f) cell_touch_3_pane_g

0x4020,	// (0x00010a03) cont_query_data_pane

0x4028,	// (0x00010a0b) cont_query_data_pane_cp1

0xd26d,	// (0x00019c50) button_value_adjust_pane_cp7

0xd275,	// (0x00019c58) query_popup_pane_cp3

0x499f,	// (0x00011382) bg_popup_sub_pane_cp22_ParamLimits

0x5a79,	// (0x0001245c) navi_navi_volume_pane_cp2

0x5a91,	// (0x00012474) popup_side_volume_key_window_g2

0x5a9d,	// (0x00012480) popup_side_volume_key_window_g3

0x0002,

0xf702,	// (0x0001c0e5) popup_side_volume_key_window_g

0x5ab7,	// (0x0001249a) popup_side_volume_key_window_t2

0x0001,

0xf709,	// (0x0001c0ec) popup_side_volume_key_window_t

0x8966,	// (0x00015349) popup_side_volume_key_window_ParamLimits

0x8016,	// (0x000149f9) list_double_graphic_pane_g4_ParamLimits

0x8016,	// (0x000149f9) list_double_graphic_pane_g4

0xab6e,	// (0x00017551) list_single_2heading_msg_pane_ParamLimits

0xab6e,	// (0x00017551) list_single_2heading_msg_pane

0xd2a4,	// (0x00019c87) list_single_2heading_msg_pane_g1_ParamLimits

0xd2a4,	// (0x00019c87) list_single_2heading_msg_pane_g1

0x7e69,	// (0x0001484c) list_single_2heading_msg_pane_g2_ParamLimits

0x7e69,	// (0x0001484c) list_single_2heading_msg_pane_g2

0xd2b0,	// (0x00019c93) list_single_2heading_msg_pane_g3_ParamLimits

0xd2b0,	// (0x00019c93) list_single_2heading_msg_pane_g3

0xd2bc,	// (0x00019c9f) list_single_2heading_msg_pane_g4_ParamLimits

0xd2bc,	// (0x00019c9f) list_single_2heading_msg_pane_g4

0x0003,

0xfcb7,	// (0x0001c69a) list_single_2heading_msg_pane_g_ParamLimits

0xfcb7,	// (0x0001c69a) list_single_2heading_msg_pane_g

0xd2d4,	// (0x00019cb7) list_single_2heading_msg_pane_t1_ParamLimits

0xd2d4,	// (0x00019cb7) list_single_2heading_msg_pane_t1

0xd2fc,	// (0x00019cdf) list_single_2heading_msg_pane_t2_ParamLimits

0xd2fc,	// (0x00019cdf) list_single_2heading_msg_pane_t2

0xd32b,	// (0x00019d0e) list_single_2heading_msg_pane_t3_ParamLimits

0xd32b,	// (0x00019d0e) list_single_2heading_msg_pane_t3

0xd364,	// (0x00019d47) list_single_2heading_msg_pane_t4_ParamLimits

0xd364,	// (0x00019d47) list_single_2heading_msg_pane_t4

0x0003,

0xfcc0,	// (0x0001c6a3) list_single_2heading_msg_pane_t_ParamLimits

0xfcc0,	// (0x0001c6a3) list_single_2heading_msg_pane_t

0x3dd4,	// (0x000107b7) title_pane_g4_ParamLimits

0x3dd4,	// (0x000107b7) title_pane_g4

0x5888,	// (0x0001226b) title_pane_stacon_g3_ParamLimits

0x5888,	// (0x0001226b) title_pane_stacon_g3

0xcd7b,	// (0x0001975e) list_single_2graphic_im_pane_g4_ParamLimits

0xcd7b,	// (0x0001975e) list_single_2graphic_im_pane_g4

0xa5fc,	// (0x00016fdf) popup_side_volume_key_window_cp

0xaeeb,	// (0x000178ce) main_idle_act2_pane_t1

0x648c,	// (0x00012e6f) toolbar_button_pane_g10

0x7e53,	// (0x00014836) popup_toolbar_window_cp1

0xb999,	// (0x0001837c) clock_nsta_pane_cp_t1

0xb999,	// (0x0001837c) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x0001c4a5) clock_nsta_pane_cp_t

0x5a79,	// (0x0001245c) navi_navi_volume_pane_cp2_ParamLimits

0x5a85,	// (0x00012468) popup_side_volume_key_window_g1_ParamLimits

0x5a91,	// (0x00012474) popup_side_volume_key_window_g2_ParamLimits

0x5a9d,	// (0x00012480) popup_side_volume_key_window_g3_ParamLimits

0xf702,	// (0x0001c0e5) popup_side_volume_key_window_g_ParamLimits

0x6942,	// (0x00013325) fep_hwr_aid_pane

0x69e9,	// (0x000133cc) bg_fep_hwr_top_pane_g4_ParamLimits

0xbfad,	// (0x00018990) fep_hwr_top_pane_g1_ParamLimits

0xbfbf,	// (0x000189a2) fep_hwr_top_pane_g2_ParamLimits

0x6a09,	// (0x000133ec) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x0001c4fa) fep_hwr_top_pane_g_ParamLimits

0x6a1e,	// (0x00013401) fep_hwr_top_text_pane_ParamLimits

0xa3bf,	// (0x00016da2) aid_touch_tab_arrow_arrow_2

0xa3c8,	// (0x00016dab) aid_touch_tab_arrow_left_2

0x6956,	// (0x00013339) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x698d,	// (0x00013370) fep_hwr_prediction_pane

0xc118,	// (0x00018afb) fep_vkb_prediction_pane

0xc215,	// (0x00018bf8) fep_vkb_side_pane_g3_ParamLimits

0xc215,	// (0x00018bf8) fep_vkb_side_pane_g3

0x6b99,	// (0x0001357c) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6c05,	// (0x000135e8) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6c12,	// (0x000135f5) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc6,	// (0x0001c5a9) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6d41,	// (0x00013724) fep_hwr_prediction_pane_g1

0x6d4b,	// (0x0001372e) fep_hwr_prediction_pane_g2

0x6d53,	// (0x00013736) fep_hwr_prediction_pane_g3

0x6d5b,	// (0x0001373e) fep_hwr_prediction_pane_g4

0x0003,

0xfcc9,	// (0x0001c6ac) fep_hwr_prediction_pane_g

0xd389,	// (0x00019d6c) fep_vkb_prediction_pane_g1

0xd3b4,	// (0x00019d97) fep_vkb_prediction_pane_g2

0xd3bc,	// (0x00019d9f) fep_vkb_prediction_pane_g3

0xd3c4,	// (0x00019da7) fep_vkb_prediction_pane_g4

0x0003,

0xfcd2,	// (0x0001c6b5) fep_vkb_prediction_pane_g

0x677a,	// (0x0001315d) slider_set_pane_g3

0x678e,	// (0x00013171) slider_set_pane_g4

0x67a6,	// (0x00013189) slider_set_pane_g5

0x677a,	// (0x0001315d) slider_set_pane_g6

0x67bc,	// (0x0001319f) slider_set_pane_g7

0xaa5d,	// (0x00017440) slider_form_pane_g3

0xaa66,	// (0x00017449) slider_form_pane_g4

0xaa6e,	// (0x00017451) slider_form_pane_g5

0xaa5d,	// (0x00017440) slider_form_pane_g6

0xaa76,	// (0x00017459) slider_form_pane_g7

0xb1ce,	// (0x00017bb1) slider_set_pane_vc_g3

0xb1d7,	// (0x00017bba) slider_set_pane_vc_g4

0xb1e0,	// (0x00017bc3) slider_set_pane_vc_g5

0xb1ce,	// (0x00017bb1) slider_set_pane_vc_g6

0xb1e9,	// (0x00017bcc) slider_set_pane_vc_g7

0xb67e,	// (0x00018061) slider_form_pane_vc_g1

0xb687,	// (0x0001806a) slider_form_pane_vc_g2

0xb690,	// (0x00018073) slider_form_pane_vc_g3

0xb67e,	// (0x00018061) slider_form_pane_vc_g4

0xb699,	// (0x0001807c) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x0001c477) slider_form_pane_vc_g

0x555d,	// (0x00011f40) main_idle_act3_pane

0xd3cc,	// (0x00019daf) ai3_links_pane

0xd3d5,	// (0x00019db8) popup_ai3_data_window_ParamLimits

0xd3d5,	// (0x00019db8) popup_ai3_data_window

0x3c27,	// (0x0001060a) grid_ai3_links_pane

0xd3ed,	// (0x00019dd0) cell_ai3_links_pane_ParamLimits

0xd3ed,	// (0x00019dd0) cell_ai3_links_pane

0xd405,	// (0x00019de8) bg_popup_sub_pane_cp11

0xd412,	// (0x00019df5) cell_ai3_links_pane_g1

0x3c27,	// (0x0001060a) bg_popup_sub_pane_cp12

0xd437,	// (0x00019e1a) heading_ai3_data_pane

0xd43f,	// (0x00019e22) list_ai3_gene_pane

0xd44b,	// (0x00019e2e) popup_ai3_data_window_g1

0xd453,	// (0x00019e36) heading_ai3_data_pane_g1

0xd45b,	// (0x00019e3e) heading_ai3_data_pane_t1

0xd469,	// (0x00019e4c) list_double_ai3_gene_pane_ParamLimits

0xd469,	// (0x00019e4c) list_double_ai3_gene_pane

0xd476,	// (0x00019e59) list_single_ai3_gene_pane_ParamLimits

0xd476,	// (0x00019e59) list_single_ai3_gene_pane

0xbf16,	// (0x000188f9) list_highlight_pane_cp7_ParamLimits

0xbf16,	// (0x000188f9) list_highlight_pane_cp7

0xd483,	// (0x00019e66) list_single_a13_gene_pane_t1_ParamLimits

0xd483,	// (0x00019e66) list_single_a13_gene_pane_t1

0xd49a,	// (0x00019e7d) list_single_ai3_gene_pane_g1

0xd4a3,	// (0x00019e86) list_single_ai3_gene_pane_g2

0x0001,

0xfcdb,	// (0x0001c6be) list_single_ai3_gene_pane_g

0xd4ab,	// (0x00019e8e) list_double_ai3_gene_pane_g1_ParamLimits

0xd4ab,	// (0x00019e8e) list_double_ai3_gene_pane_g1

0xd4b7,	// (0x00019e9a) list_double_ai3_gene_pane_t1_ParamLimits

0xd4b7,	// (0x00019e9a) list_double_ai3_gene_pane_t1

0xd4d3,	// (0x00019eb6) list_double_ai3_gene_pane_t2_ParamLimits

0xd4d3,	// (0x00019eb6) list_double_ai3_gene_pane_t2

0xd4e8,	// (0x00019ecb) list_double_ai3_gene_pane_t3_ParamLimits

0xd4e8,	// (0x00019ecb) list_double_ai3_gene_pane_t3

0x0002,

0xfce0,	// (0x0001c6c3) list_double_ai3_gene_pane_t_ParamLimits

0xfce0,	// (0x0001c6c3) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd286,	// (0x00019c69) aid_size_min_col_2

0xd290,	// (0x00019c73) aid_size_min_msg_ParamLimits

0xd290,	// (0x00019c73) aid_size_min_msg

0xc315,	// (0x00018cf8) fep_vkb_top_text_pane_g2_ParamLimits

0xc315,	// (0x00018cf8) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x0001c52a) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x0001c52a) fep_vkb_top_text_pane_g

0x555d,	// (0x00011f40) main_hc_apps_shell_pane

0xd505,	// (0x00019ee8) grid_hc_apps_pane_ParamLimits

0xd505,	// (0x00019ee8) grid_hc_apps_pane

0xd514,	// (0x00019ef7) list_hc_apps_pane

0xd51c,	// (0x00019eff) scroll_pane_cp37_ParamLimits

0xd51c,	// (0x00019eff) scroll_pane_cp37

0xd528,	// (0x00019f0b) cell_hc_apps_pane_ParamLimits

0xd528,	// (0x00019f0b) cell_hc_apps_pane

0xd5d6,	// (0x00019fb9) cell_hc_apps_pane_g1_ParamLimits

0xd5d6,	// (0x00019fb9) cell_hc_apps_pane_g1

0xd607,	// (0x00019fea) cell_hc_apps_pane_g2_ParamLimits

0xd607,	// (0x00019fea) cell_hc_apps_pane_g2

0xd623,	// (0x0001a006) cell_hc_apps_pane_g3_ParamLimits

0xd623,	// (0x0001a006) cell_hc_apps_pane_g3

0x0002,

0xfce7,	// (0x0001c6ca) cell_hc_apps_pane_g_ParamLimits

0xfce7,	// (0x0001c6ca) cell_hc_apps_pane_g

0xd645,	// (0x0001a028) cell_hc_apps_pane_t1_ParamLimits

0xd645,	// (0x0001a028) cell_hc_apps_pane_t1

0x3f6a,	// (0x0001094d) grid_highlight_pane_cp10_ParamLimits

0x3f6a,	// (0x0001094d) grid_highlight_pane_cp10

0xd685,	// (0x0001a068) list_single_hc_apps_pane_ParamLimits

0xd685,	// (0x0001a068) list_single_hc_apps_pane

0xd6e8,	// (0x0001a0cb) list_single_hc_apps_pane_g1

0xd701,	// (0x0001a0e4) list_single_hc_apps_pane_g2

0x0001,

0xfcee,	// (0x0001c6d1) list_single_hc_apps_pane_g

0xd71a,	// (0x0001a0fd) list_single_hc_apps_pane_g2_copy1

0xd736,	// (0x0001a119) list_single_hc_apps_pane_t1

0x3e26,	// (0x00010809) bg_set_opt_pane_cp_ParamLimits

0x57b0,	// (0x00012193) setting_slider_pane_t1_ParamLimits

0x57c9,	// (0x000121ac) setting_slider_pane_t2_ParamLimits

0x57e3,	// (0x000121c6) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001bf41) setting_slider_pane_t_ParamLimits

0x57fb,	// (0x000121de) slider_set_pane_ParamLimits

0x5d19,	// (0x000126fc) control_pane_g5_ParamLimits

0x5d19,	// (0x000126fc) control_pane_g5

0xa8b0,	// (0x00017293) slider_set_pane_g1_ParamLimits

0x676e,	// (0x00013151) slider_set_pane_g2_ParamLimits

0x677a,	// (0x0001315d) slider_set_pane_g3_ParamLimits

0x678e,	// (0x00013171) slider_set_pane_g4_ParamLimits

0x67a6,	// (0x00013189) slider_set_pane_g5_ParamLimits

0x677a,	// (0x0001315d) slider_set_pane_g6_ParamLimits

0x67bc,	// (0x0001319f) slider_set_pane_g7_ParamLimits

0xf955,	// (0x0001c338) slider_set_pane_g_ParamLimits

0x8a44,	// (0x00015427) navi_icon_text_pane_ParamLimits

0x8f57,	// (0x0001593a) aid_fill_nsta_2_ParamLimits

0x8f96,	// (0x00015979) aid_touch_tab_arrow_left_ParamLimits

0x8fa5,	// (0x00015988) aid_touch_tab_arrow_right_ParamLimits

0x9012,	// (0x000159f5) clock_nsta_pane_ParamLimits

0xa3a1,	// (0x00016d84) navi_icon_pane_g1_ParamLimits

0xa3ad,	// (0x00016d90) navi_text_pane_t1_ParamLimits

0xbaa9,	// (0x0001848c) navi_icon_text_pane_g1_ParamLimits

0xbab5,	// (0x00018498) navi_icon_text_pane_t1_ParamLimits

0xd6e8,	// (0x0001a0cb) list_single_hc_apps_pane_g1_ParamLimits

0xd701,	// (0x0001a0e4) list_single_hc_apps_pane_g2_ParamLimits

0xfcee,	// (0x0001c6d1) list_single_hc_apps_pane_g_ParamLimits

0xd71a,	// (0x0001a0fd) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd736,	// (0x0001a119) list_single_hc_apps_pane_t1_ParamLimits

0x56ba,	// (0x0001209d) popup_toolbar2_fixed_window_ParamLimits

0x56ba,	// (0x0001209d) popup_toolbar2_fixed_window

0x6326,	// (0x00012d09) popup_toolbar2_float_window

0x3c27,	// (0x0001060a) bg_popup_sub_pane_cp27

0xd764,	// (0x0001a147) grid_toolbar2_float_pane

0x3c27,	// (0x0001060a) bg_popup_sub_pane_cp26

0xd764,	// (0x0001a147) grid_toolbar2_fixed_pane

0xd76c,	// (0x0001a14f) cell_toolbar2_fixed_pane_ParamLimits

0xd76c,	// (0x0001a14f) cell_toolbar2_fixed_pane

0xd77c,	// (0x0001a15f) cell_toolbar2_fixed_pane_g1

0x61f8,	// (0x00012bdb) toolbar2_fixed_button_pane

0x944e,	// (0x00015e31) toolbar2_fixed_button_pane_g1

0x945e,	// (0x00015e41) toolbar2_fixed_button_pane_g2

0x9456,	// (0x00015e39) toolbar2_fixed_button_pane_g3

0x946e,	// (0x00015e51) toolbar2_fixed_button_pane_g4

0x9466,	// (0x00015e49) toolbar2_fixed_button_pane_g5

0x9476,	// (0x00015e59) toolbar2_fixed_button_pane_g6

0x947e,	// (0x00015e61) toolbar2_fixed_button_pane_g7

0x948e,	// (0x00015e71) toolbar2_fixed_button_pane_g8

0x9486,	// (0x00015e69) toolbar2_fixed_button_pane_g9

0x0008,

0xf857,	// (0x0001c23a) toolbar2_fixed_button_pane_g

0xd785,	// (0x0001a168) cell_toolbar2_float_pane_ParamLimits

0xd785,	// (0x0001a168) cell_toolbar2_float_pane

0xd796,	// (0x0001a179) cell_toolbar2_float_pane_g1

0x61f8,	// (0x00012bdb) toolbar2_fixed_button_pane_cp

0xc07f,	// (0x00018a62) fep_vkb_accented_list_pane_ParamLimits

0xc07f,	// (0x00018a62) fep_vkb_accented_list_pane

0x6b79,	// (0x0001355c) bg_popup_fep_shadow_pane_g9

0x8bc4,	// (0x000155a7) bg_popup_fep_shadow_pane_cp3

0x43d0,	// (0x00010db3) list_accented_list_pane

0xd79f,	// (0x0001a182) list_single_accented_list_pane_ParamLimits

0xd79f,	// (0x0001a182) list_single_accented_list_pane

0x8bc4,	// (0x000155a7) list_highlight_pane_cp10

0xd7b0,	// (0x0001a193) list_single_accented_list_pane_t1

0x6276,	// (0x00012c59) popup_slider_window_ParamLimits

0x6276,	// (0x00012c59) popup_slider_window

0xd27d,	// (0x00019c60) aid_indentation_list_msg

0xd866,	// (0x0001a249) bg_popup_window_pane_cp19

0xd8d0,	// (0x0001a2b3) popup_slider_window_g1

0xd8ec,	// (0x0001a2cf) popup_slider_window_g2

0xd908,	// (0x0001a2eb) popup_slider_window_g3

0x0005,

0xfcf3,	// (0x0001c6d6) popup_slider_window_g

0xd964,	// (0x0001a347) popup_slider_window_t1

0xd9d8,	// (0x0001a3bb) small_volume_slider_vertical_pane

0xbf51,	// (0x00018934) small_volume_slider_vertical_pane_g1

0xbf51,	// (0x00018934) small_volume_slider_vertical_pane_g2

0xd9f4,	// (0x0001a3d7) small_volume_slider_vertical_pane_g3

0x0002,

0xfd05,	// (0x0001c6e8) small_volume_slider_vertical_pane_g

0x5480,	// (0x00011e63) area_side_right_pane_ParamLimits

0x5480,	// (0x00011e63) area_side_right_pane

0x6d63,	// (0x00013746) aid_size_side_button_ParamLimits

0x6d63,	// (0x00013746) aid_size_side_button

0x6d77,	// (0x0001375a) grid_sctrl_middle_pane_ParamLimits

0x6d77,	// (0x0001375a) grid_sctrl_middle_pane

0x6d96,	// (0x00013779) sctrl_sk_bottom_pane

0x6da7,	// (0x0001378a) sctrl_sk_top_pane

0x6db9,	// (0x0001379c) aid_touch_sctrl_top

0x6dc6,	// (0x000137a9) bg_sctrl_sk_pane_ParamLimits

0x6dc6,	// (0x000137a9) bg_sctrl_sk_pane

0x6dd4,	// (0x000137b7) sctrl_sk_top_pane_g1

0x6de1,	// (0x000137c4) sctrl_sk_top_pane_t1

0x6db9,	// (0x0001379c) aid_touch_sctrl_bottom

0x6dc6,	// (0x000137a9) bg_sctrl_sk_pane_cp_ParamLimits

0x6dc6,	// (0x000137a9) bg_sctrl_sk_pane_cp

0x6dfc,	// (0x000137df) sctrl_sk_bottom_pane_g1

0x6de1,	// (0x000137c4) sctrl_sk_bottom_pane_t1

0x6e05,	// (0x000137e8) cell_sctrl_middle_pane_ParamLimits

0x6e05,	// (0x000137e8) cell_sctrl_middle_pane

0x6e20,	// (0x00013803) aid_touch_sctrl_middle_ParamLimits

0x6e20,	// (0x00013803) aid_touch_sctrl_middle

0x6e32,	// (0x00013815) bg_sctrl_middle_pane_ParamLimits

0x6e32,	// (0x00013815) bg_sctrl_middle_pane

0x6b99,	// (0x0001357c) cell_sctrl_middle_pane_g1_ParamLimits

0x6b99,	// (0x0001357c) cell_sctrl_middle_pane_g1

0x6e40,	// (0x00013823) cell_sctrl_middle_pane_g2_ParamLimits

0x6e40,	// (0x00013823) cell_sctrl_middle_pane_g2

0x0001,

0xfd11,	// (0x0001c6f4) cell_sctrl_middle_pane_g_ParamLimits

0xfd11,	// (0x0001c6f4) cell_sctrl_middle_pane_g

0x944e,	// (0x00015e31) bg_sctrl_middle_pane_g1

0x9456,	// (0x00015e39) bg_sctrl_middle_pane_g2

0x945e,	// (0x00015e41) bg_sctrl_middle_pane_g3

0x9466,	// (0x00015e49) bg_sctrl_middle_pane_g4

0x946e,	// (0x00015e51) bg_sctrl_middle_pane_g5

0x9476,	// (0x00015e59) bg_sctrl_middle_pane_g6

0x947e,	// (0x00015e61) bg_sctrl_middle_pane_g7

0x9486,	// (0x00015e69) bg_sctrl_middle_pane_g8

0x0007,

0xfd16,	// (0x0001c6f9) bg_sctrl_middle_pane_g

0x948e,	// (0x00015e71) bg_sctrl_middle_pane_g8_copy1

0x944e,	// (0x00015e31) bg_sctrl_sk_pane_g1

0x945e,	// (0x00015e41) bg_sctrl_sk_pane_g2

0x9456,	// (0x00015e39) bg_sctrl_sk_pane_g3

0x0008,

0xf857,	// (0x0001c23a) bg_sctrl_sk_pane_g

0x4134,	// (0x00010b17) aid_size_touch_scroll_bar

0x946e,	// (0x00015e51) bg_sctrl_sk_pane_g4

0x9466,	// (0x00015e49) bg_sctrl_sk_pane_g5

0x9476,	// (0x00015e59) bg_sctrl_sk_pane_g6

0x947e,	// (0x00015e61) bg_sctrl_sk_pane_g7

0x948e,	// (0x00015e71) bg_sctrl_sk_pane_g8

0x9486,	// (0x00015e69) bg_sctrl_sk_pane_g9

0x5edf,	// (0x000128c2) popup_fep_china_hwr2_fs_candidate_window

0x5ee9,	// (0x000128cc) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5ee9,	// (0x000128cc) popup_fep_china_hwr2_fs_control_window

0x6b99,	// (0x0001357c) sctrl_sk_top_pane_g2

0x0001,

0xfd0c,	// (0x0001c6ef) sctrl_sk_top_pane_g

0xd9fd,	// (0x0001a3e0) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9fd,	// (0x0001a3e0) aid_fep_china_hwr2_fs_cell

0xda0f,	// (0x0001a3f2) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xda0f,	// (0x0001a3f2) bg_popup_fep_shadow_pane_cp4

0xda26,	// (0x0001a409) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda26,	// (0x0001a409) bg_popup_fep_shadow_pane_cp5

0xda38,	// (0x0001a41b) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda38,	// (0x0001a41b) popup_fep_china_hwr2_fs_control_bar_grid

0xda48,	// (0x0001a42b) popup_fep_china_hwr2_fs_control_funtion_grid

0xda50,	// (0x0001a433) aid_fep_china_hwr2_fs_candi_cell

0x3c27,	// (0x0001060a) bg_popup_fep_shadow_pane_cp6

0xda5a,	// (0x0001a43d) popup_fep_china_hwr2_fs_candidate_grid

0xda64,	// (0x0001a447) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda64,	// (0x0001a447) cell_fep_china_hwr2_fs_funtion_grid

0xbf51,	// (0x00018934) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda7c,	// (0x0001a45f) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda7c,	// (0x0001a45f) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda8a,	// (0x0001a46d) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda8a,	// (0x0001a46d) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd27,	// (0x0001c70a) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd27,	// (0x0001c70a) cell_fep_china_hwr2_fs_funtion_grid_g

0xdaa0,	// (0x0001a483) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdaa0,	// (0x0001a483) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdab5,	// (0x0001a498) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdab5,	// (0x0001a498) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2c,	// (0x0001c70f) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2c,	// (0x0001c70f) cell_fep_china_hwr2_fs_funtion_grid_t

0xdad1,	// (0x0001a4b4) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdad9,	// (0x0001a4bc) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdae1,	// (0x0001a4c4) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd31,	// (0x0001c714) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdae9,	// (0x0001a4cc) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdae9,	// (0x0001a4cc) cell_fep_china_hwr2_fs_candidate_grid

0xdb02,	// (0x0001a4e5) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdb0a,	// (0x0001a4ed) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbf51,	// (0x00018934) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbf51,	// (0x00018934) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x0001c52f) cell_fep_china_hwr2_fs_candidate_grid_g

0xdb12,	// (0x0001a4f5) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9025,	// (0x00015a08) clock_nsta_pane_cp_24_ParamLimits

0x9025,	// (0x00015a08) clock_nsta_pane_cp_24

0x90a3,	// (0x00015a86) indicator_nsta_pane_cp_24_ParamLimits

0x90a3,	// (0x00015a86) indicator_nsta_pane_cp_24

0xa21d,	// (0x00016c00) heading_pane_g1

0x0001,

0xf8bc,	// (0x0001c29f) heading_pane_g

0xad34,	// (0x00017717) grid_sct_catagory_button_pane

0xad64,	// (0x00017747) scroll_pane_cp5_ParamLimits

0xbaf7,	// (0x000184da) button_value_adjust_pane_cp5_ParamLimits

0xbaf7,	// (0x000184da) button_value_adjust_pane_cp5

0xbbf1,	// (0x000185d4) form2_midp_time_pane_ParamLimits

0xdb20,	// (0x0001a503) cell_sct_catagory_button_pane_ParamLimits

0xdb20,	// (0x0001a503) cell_sct_catagory_button_pane

0xbf16,	// (0x000188f9) bg_button_pane_cp01_ParamLimits

0xbf16,	// (0x000188f9) bg_button_pane_cp01

0xbf51,	// (0x00018934) cell_sct_catagory_button_pane_g1

0x62b5,	// (0x00012c98) popup_tb_extension_window

0xdb32,	// (0x0001a515) aid_size_cell_ext_ParamLimits

0xdb32,	// (0x0001a515) aid_size_cell_ext

0x3f6a,	// (0x0001094d) bg_tb_trans_pane_cp1_ParamLimits

0x3f6a,	// (0x0001094d) bg_tb_trans_pane_cp1

0xdb52,	// (0x0001a535) grid_tb_ext_pane_ParamLimits

0xdb52,	// (0x0001a535) grid_tb_ext_pane

0xdb82,	// (0x0001a565) cell_tb_ext_pane_ParamLimits

0xdb82,	// (0x0001a565) cell_tb_ext_pane

0xdb99,	// (0x0001a57c) cell_tb_ext_pane_g1_ParamLimits

0xdb99,	// (0x0001a57c) cell_tb_ext_pane_g1

0xdbb6,	// (0x0001a599) cell_tb_ext_pane_t1

0x3f6a,	// (0x0001094d) list_highlight_pane_cp11_ParamLimits

0x3f6a,	// (0x0001094d) list_highlight_pane_cp11

0x56d9,	// (0x000120bc) popup_uni_indicator_window_ParamLimits

0x56d9,	// (0x000120bc) popup_uni_indicator_window

0x4268,	// (0x00010c4b) bg_popup_sub_pane_cp14

0xdbd2,	// (0x0001a5b5) list_uniindi_pane

0xdbde,	// (0x0001a5c1) uniindi_top_pane

0x3f6a,	// (0x0001094d) bg_uniindi_top_pane

0xdbfd,	// (0x0001a5e0) uniindi_top_pane_g1

0xdc13,	// (0x0001a5f6) uniindi_top_pane_g2

0x0003,

0xfd38,	// (0x0001c71b) uniindi_top_pane_g

0xdc3d,	// (0x0001a620) uniindi_top_pane_t1

0xdc67,	// (0x0001a64a) list_single_uniindi_pane_ParamLimits

0xdc67,	// (0x0001a64a) list_single_uniindi_pane

0xbf51,	// (0x00018934) bg_uniindi_top_pane_g1

0xdc79,	// (0x0001a65c) list_single_uniindi_pane_g1

0xdc8c,	// (0x0001a66f) list_single_uniindi_pane_t1

0x555d,	// (0x00011f40) control_bg_pane

0xdcb1,	// (0x0001a694) bg_sctrl_sk_pane_cp1

0xdcba,	// (0x0001a69d) bg_sctrl_sk_pane_cp2

0xdcc3,	// (0x0001a6a6) control_bg_pane_g1

0xdccc,	// (0x0001a6af) control_bg_pane_g2

0x0001,

0xfd41,	// (0x0001c724) control_bg_pane_g

0xb94e,	// (0x00018331) cell_indicator_nsta_pane_g1_ParamLimits

0xb95c,	// (0x0001833f) cell_indicator_nsta_pane_g2_ParamLimits

0xfab0,	// (0x0001c493) cell_indicator_nsta_pane_g_ParamLimits

0xbc79,	// (0x0001865c) form2_midp_time_pane_t1_ParamLimits

0x5e49,	// (0x0001282c) main_idle_act4_pane_ParamLimits

0x5e49,	// (0x0001282c) main_idle_act4_pane

0x62b5,	// (0x00012c98) popup_tb_extension_window_ParamLimits

0xdb72,	// (0x0001a555) tb_ext_find_pane_ParamLimits

0xdb72,	// (0x0001a555) tb_ext_find_pane

0xdcd5,	// (0x0001a6b8) ai_gene_pane_1_cp1

0x8d0f,	// (0x000156f2) ai_gene_pane_2_cp1

0xdcdd,	// (0x0001a6c0) list_single_idle_plugin_calendar_pane

0xdce6,	// (0x0001a6c9) list_single_idle_plugin_notification_pane

0xdcef,	// (0x0001a6d2) list_single_idle_plugin_player_pane

0xdcf8,	// (0x0001a6db) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcf8,	// (0x0001a6db) list_single_idle_plugin_shortcut_pane

0xdd1a,	// (0x0001a6fd) main_idle_act4_pane_t1

0xdd2c,	// (0x0001a70f) main_idle_act4_pane_t2

0x0001,

0xfd46,	// (0x0001c729) main_idle_act4_pane_t

0xdd3e,	// (0x0001a721) middle_sk_idle_act4_pane_ParamLimits

0xdd3e,	// (0x0001a721) middle_sk_idle_act4_pane

0xdd54,	// (0x0001a737) popup_clock_digital_analogue_window_cp2

0xdd6e,	// (0x0001a751) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd6e,	// (0x0001a751) shortcut_wheel_idle_act4_pane

0xbf51,	// (0x00018934) shortcut_wheel_idle_act4_pane_g1

0xbf51,	// (0x00018934) shortcut_wheel_idle_act4_pane_g2

0xbf51,	// (0x00018934) shortcut_wheel_idle_act4_pane_g3

0xbf51,	// (0x00018934) shortcut_wheel_idle_act4_pane_g4

0xbf51,	// (0x00018934) shortcut_wheel_idle_act4_pane_g5

0xdd82,	// (0x0001a765) shortcut_wheel_idle_act4_pane_g6

0xdd8a,	// (0x0001a76d) shortcut_wheel_idle_act4_pane_g7

0xdd92,	// (0x0001a775) shortcut_wheel_idle_act4_pane_g8

0xdd9a,	// (0x0001a77d) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4b,	// (0x0001c72e) shortcut_wheel_idle_act4_pane_g

0xc1c1,	// (0x00018ba4) middle_sk_idle_act4_pane_g1_ParamLimits

0xc1c1,	// (0x00018ba4) middle_sk_idle_act4_pane_g1

0xddfe,	// (0x0001a7e1) middle_sk_idle_act4_pane_g2_ParamLimits

0xddfe,	// (0x0001a7e1) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6e,	// (0x0001c751) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6e,	// (0x0001c751) middle_sk_idle_act4_pane_g

0xde0a,	// (0x0001a7ed) middle_sk_idle_act4_pane_t1_ParamLimits

0xde0a,	// (0x0001a7ed) middle_sk_idle_act4_pane_t1

0xde27,	// (0x0001a80a) grid_ai_shortcut_pane_ParamLimits

0xde27,	// (0x0001a80a) grid_ai_shortcut_pane

0xde40,	// (0x0001a823) list_highlight_pane_cp16_ParamLimits

0xde40,	// (0x0001a823) list_highlight_pane_cp16

0xde4d,	// (0x0001a830) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde4d,	// (0x0001a830) list_single_idle_plugin_shortcut_pane_g1

0xde59,	// (0x0001a83c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde59,	// (0x0001a83c) list_single_idle_plugin_shortcut_pane_g2

0xde71,	// (0x0001a854) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde71,	// (0x0001a854) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd73,	// (0x0001c756) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd73,	// (0x0001c756) list_single_idle_plugin_shortcut_pane_g

0xde84,	// (0x0001a867) cell_ai_shortcut_pane_ParamLimits

0xde84,	// (0x0001a867) cell_ai_shortcut_pane

0xdea8,	// (0x0001a88b) cell_ai_shortcut_pane_g1_ParamLimits

0xdea8,	// (0x0001a88b) cell_ai_shortcut_pane_g1

0xdcd5,	// (0x0001a6b8) ai_gene_pane_1_cp2

0xdeca,	// (0x0001a8ad) ai_gene_pane_2_cp2

0xded2,	// (0x0001a8b5) list_highlight_pane_cp15

0xdedb,	// (0x0001a8be) list_single_idle_plugin_calendar_pane_g1

0xded2,	// (0x0001a8b5) list_highlight_pane_cp17

0xdee3,	// (0x0001a8c6) list_single_idle_plugin_calendar_pane_g1_copy1

0xdeeb,	// (0x0001a8ce) list_single_idle_plugin_player_pane_g1

0xaf8d,	// (0x00017970) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7a,	// (0x0001c75d) list_single_idle_plugin_player_pane_g

0xdef3,	// (0x0001a8d6) list_single_idle_plugin_player_pane_t1

0xdf01,	// (0x0001a8e4) list_single_idle_plugin_player_pane_t2

0xdf0f,	// (0x0001a8f2) list_single_idle_plugin_player_pane_t3

0xdf1d,	// (0x0001a900) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7f,	// (0x0001c762) list_single_idle_plugin_player_pane_t

0xdf2b,	// (0x0001a90e) wait_bar_pane_cp15

0xdf33,	// (0x0001a916) grid_ai_notification_pane

0xaf8d,	// (0x00017970) list_single_idle_plugin_notification_pane_g1

0xdf3c,	// (0x0001a91f) cell_ai_notification_pane_ParamLimits

0xdf3c,	// (0x0001a91f) cell_ai_notification_pane

0xdf49,	// (0x0001a92c) cell_ai_notification_pane_g1

0xdf51,	// (0x0001a934) cell_ai_notification_pane_t1

0xdf5f,	// (0x0001a942) tb_ext_find_button_pane

0xdf67,	// (0x0001a94a) tb_ext_find_pane_g1

0xdf6f,	// (0x0001a952) tb_ext_find_pane_t1

0x48c4,	// (0x000112a7) tb_ext_find_button_pane_g1

0xdf7d,	// (0x0001a960) tb_ext_find_button_pane_g2

0x0001,

0xfd88,	// (0x0001c76b) tb_ext_find_button_pane_g

0xdd1a,	// (0x0001a6fd) main_idle_act4_pane_t1_ParamLimits

0xdd2c,	// (0x0001a70f) main_idle_act4_pane_t2_ParamLimits

0xfd46,	// (0x0001c729) main_idle_act4_pane_t_ParamLimits

0xdd54,	// (0x0001a737) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd62,	// (0x0001a745) sat_plugin_idle_act4_pane_ParamLimits

0xdd62,	// (0x0001a745) sat_plugin_idle_act4_pane

0xdf86,	// (0x0001a969) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf86,	// (0x0001a969) sat_plugin_idle_act4_pane_t1

0xdf99,	// (0x0001a97c) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf99,	// (0x0001a97c) sat_plugin_idle_act4_pane_t2

0xdfac,	// (0x0001a98f) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdfac,	// (0x0001a98f) sat_plugin_idle_act4_pane_t3

0xdfbf,	// (0x0001a9a2) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdfbf,	// (0x0001a9a2) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8d,	// (0x0001c770) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8d,	// (0x0001c770) sat_plugin_idle_act4_pane_t

0x5622,	// (0x00012005) popup_battery_window_ParamLimits

0x5622,	// (0x00012005) popup_battery_window

0x3f6a,	// (0x0001094d) bg_popup_sub_pane_cp25_ParamLimits

0x3f6a,	// (0x0001094d) bg_popup_sub_pane_cp25

0xdfd2,	// (0x0001a9b5) popup_battery_window_g1_ParamLimits

0xdfd2,	// (0x0001a9b5) popup_battery_window_g1

0xdfde,	// (0x0001a9c1) popup_battery_window_t1_ParamLimits

0xdfde,	// (0x0001a9c1) popup_battery_window_t1

0xdff0,	// (0x0001a9d3) popup_battery_window_t2_ParamLimits

0xdff0,	// (0x0001a9d3) popup_battery_window_t2

0x0001,

0xfd96,	// (0x0001c779) popup_battery_window_t_ParamLimits

0xfd96,	// (0x0001c779) popup_battery_window_t

0x8bd8,	// (0x000155bb) midp_canvas_pane_ParamLimits

0x8c51,	// (0x00015634) midp_keypad_pane_ParamLimits

0x8c51,	// (0x00015634) midp_keypad_pane

0x8f17,	// (0x000158fa) main_midp_pane_ParamLimits

0xb9b7,	// (0x0001839a) signal_pane_g2_cp_ParamLimits

0xe00d,	// (0x0001a9f0) aid_size_cell_midp_keypad_ParamLimits

0xe00d,	// (0x0001a9f0) aid_size_cell_midp_keypad

0xe027,	// (0x0001aa0a) midp_keyp_game_grid_pane_ParamLimits

0xe027,	// (0x0001aa0a) midp_keyp_game_grid_pane

0xe047,	// (0x0001aa2a) midp_keyp_rocker_pane_ParamLimits

0xe047,	// (0x0001aa2a) midp_keyp_rocker_pane

0xe080,	// (0x0001aa63) midp_keyp_sk_left_pane_ParamLimits

0xe080,	// (0x0001aa63) midp_keyp_sk_left_pane

0xe0da,	// (0x0001aabd) midp_keyp_sk_right_pane_ParamLimits

0xe0da,	// (0x0001aabd) midp_keyp_sk_right_pane

0x3c27,	// (0x0001060a) bg_button_pane_cp03

0xe134,	// (0x0001ab17) midp_keyp_sk_left_pane_g1

0x3c27,	// (0x0001060a) bg_button_pane_cp04

0xe134,	// (0x0001ab17) midp_keyp_sk_right_pane_g1

0xbf51,	// (0x00018934) midp_keyp_rocker_pane_g1

0xe13d,	// (0x0001ab20) keyp_game_cell_pane_ParamLimits

0xe13d,	// (0x0001ab20) keyp_game_cell_pane

0x3c27,	// (0x0001060a) bg_button_pane_cp02

0xe150,	// (0x0001ab33) keyp_game_cell_pane_g1

0x5658,	// (0x0001203b) popup_fep_vkb2_window_ParamLimits

0x5658,	// (0x0001203b) popup_fep_vkb2_window

0x6e5e,	// (0x00013841) aid_size_cell_vkb2_ParamLimits

0x6e5e,	// (0x00013841) aid_size_cell_vkb2

0x6eb2,	// (0x00013895) popup_fep_vkb2_window_g1_ParamLimits

0x6eb2,	// (0x00013895) popup_fep_vkb2_window_g1

0x6efa,	// (0x000138dd) vkb2_area_bottom_pane_ParamLimits

0x6efa,	// (0x000138dd) vkb2_area_bottom_pane

0x6f46,	// (0x00013929) vkb2_area_keypad_pane_ParamLimits

0x6f46,	// (0x00013929) vkb2_area_keypad_pane

0x6f88,	// (0x0001396b) vkb2_area_top_pane_ParamLimits

0x6f88,	// (0x0001396b) vkb2_area_top_pane

0x7002,	// (0x000139e5) vkb2_top_entry_pane_ParamLimits

0x7002,	// (0x000139e5) vkb2_top_entry_pane

0x702c,	// (0x00013a0f) vkb2_top_grid_left_pane_ParamLimits

0x702c,	// (0x00013a0f) vkb2_top_grid_left_pane

0x704a,	// (0x00013a2d) vkb2_top_grid_right_pane_ParamLimits

0x704a,	// (0x00013a2d) vkb2_top_grid_right_pane

0x7068,	// (0x00013a4b) vkb2_cell_keypad_pane_ParamLimits

0x7068,	// (0x00013a4b) vkb2_cell_keypad_pane

0x7139,	// (0x00013b1c) vkb2_area_bottom_grid_pane_ParamLimits

0x7139,	// (0x00013b1c) vkb2_area_bottom_grid_pane

0x715f,	// (0x00013b42) vkb2_area_bottom_pane_g1_ParamLimits

0x715f,	// (0x00013b42) vkb2_area_bottom_pane_g1

0x7183,	// (0x00013b66) vkb2_area_bottom_pane_g2_ParamLimits

0x7183,	// (0x00013b66) vkb2_area_bottom_pane_g2

0x71b1,	// (0x00013b94) vkb2_area_bottom_pane_g3_ParamLimits

0x71b1,	// (0x00013b94) vkb2_area_bottom_pane_g3

0x0002,

0xfd9b,	// (0x0001c77e) vkb2_area_bottom_pane_g_ParamLimits

0xfd9b,	// (0x0001c77e) vkb2_area_bottom_pane_g

0x7212,	// (0x00013bf5) vkb2_top_cell_left_pane_ParamLimits

0x7212,	// (0x00013bf5) vkb2_top_cell_left_pane

0xe161,	// (0x0001ab44) vkb2_top_entry_pane_g1_ParamLimits

0xe161,	// (0x0001ab44) vkb2_top_entry_pane_g1

0xe16f,	// (0x0001ab52) vkb2_top_entry_pane_t1_ParamLimits

0xe16f,	// (0x0001ab52) vkb2_top_entry_pane_t1

0xe1a1,	// (0x0001ab84) vkb2_top_entry_pane_t2_ParamLimits

0xe1a1,	// (0x0001ab84) vkb2_top_entry_pane_t2

0xe1d3,	// (0x0001abb6) vkb2_top_entry_pane_t3_ParamLimits

0xe1d3,	// (0x0001abb6) vkb2_top_entry_pane_t3

0x0002,

0xfda2,	// (0x0001c785) vkb2_top_entry_pane_t_ParamLimits

0xfda2,	// (0x0001c785) vkb2_top_entry_pane_t

0x725f,	// (0x00013c42) vkb2_top_grid_right_pane_g1_ParamLimits

0x725f,	// (0x00013c42) vkb2_top_grid_right_pane_g1

0x7275,	// (0x00013c58) vkb2_top_grid_right_pane_g2_ParamLimits

0x7275,	// (0x00013c58) vkb2_top_grid_right_pane_g2

0x728d,	// (0x00013c70) vkb2_top_grid_right_pane_g3_ParamLimits

0x728d,	// (0x00013c70) vkb2_top_grid_right_pane_g3

0x72a5,	// (0x00013c88) vkb2_top_grid_right_pane_g4_ParamLimits

0x72a5,	// (0x00013c88) vkb2_top_grid_right_pane_g4

0x0003,

0xfda9,	// (0x0001c78c) vkb2_top_grid_right_pane_g_ParamLimits

0xfda9,	// (0x0001c78c) vkb2_top_grid_right_pane_g

0x72bb,	// (0x00013c9e) vkb2_top_cell_left_pane_g1

0x72d2,	// (0x00013cb5) vkb2_cell_keypad_pane_g1_ParamLimits

0x72d2,	// (0x00013cb5) vkb2_cell_keypad_pane_g1

0xe1f7,	// (0x0001abda) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1f7,	// (0x0001abda) vkb2_cell_keypad_pane_t1

0x72e0,	// (0x00013cc3) vkb2_cell_bottom_grid_pane_ParamLimits

0x72e0,	// (0x00013cc3) vkb2_cell_bottom_grid_pane

0x7319,	// (0x00013cfc) vkb2_cell_bottom_grid_pane_g1

0xdda2,	// (0x0001a785) aid_call2_pane_cp02

0xddaa,	// (0x0001a78d) aid_call_pane_cp02

0xddb2,	// (0x0001a795) clock_digital_number_pane_cp10

0xddba,	// (0x0001a79d) clock_digital_number_pane_cp11

0xddc2,	// (0x0001a7a5) clock_digital_number_pane_cp12

0xddca,	// (0x0001a7ad) clock_digital_number_pane_cp13

0xddd2,	// (0x0001a7b5) clock_digital_separator_pane_cp10

0x48c4,	// (0x000112a7) popup_clock_digital_analogue_window_cp2_g1

0x48c4,	// (0x000112a7) popup_clock_digital_analogue_window_cp2_g2

0xddda,	// (0x0001a7bd) popup_clock_digital_analogue_window_cp2_g3

0x48c4,	// (0x000112a7) popup_clock_digital_analogue_window_cp2_g4

0xddda,	// (0x0001a7bd) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5e,	// (0x0001c741) popup_clock_digital_analogue_window_cp2_g

0xdde2,	// (0x0001a7c5) popup_clock_digital_analogue_window_cp2_t1

0xddf0,	// (0x0001a7d3) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd69,	// (0x0001c74c) popup_clock_digital_analogue_window_cp2_t

0xbf51,	// (0x00018934) clock_digital_number_pane_cp10_g1

0xbf51,	// (0x00018934) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0001c52f) clock_digital_number_pane_cp10_g

0xbf51,	// (0x00018934) clock_digital_separator_pane_cp10_g1

0xbf51,	// (0x00018934) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0001c52f) clock_digital_separator_pane_cp10_g

0xdc1f,	// (0x0001a602) uniindi_top_pane_g3

0xdc30,	// (0x0001a613) uniindi_top_pane_g4

0x70f3,	// (0x00013ad6) vkb2_row_keypad_pane_ParamLimits

0x70f3,	// (0x00013ad6) vkb2_row_keypad_pane

0x7335,	// (0x00013d18) vkb2_cell_t_keypad_pane_ParamLimits

0x7335,	// (0x00013d18) vkb2_cell_t_keypad_pane

0x7345,	// (0x00013d28) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7345,	// (0x00013d28) vkb2_cell_t_keypad_pane_cp08

0x7358,	// (0x00013d3b) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7358,	// (0x00013d3b) vkb2_cell_t_keypad_pane_cp09

0x736c,	// (0x00013d4f) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x736c,	// (0x00013d4f) vkb2_cell_t_keypad_pane_cp01

0x737d,	// (0x00013d60) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x737d,	// (0x00013d60) vkb2_cell_t_keypad_pane_cp02

0x738e,	// (0x00013d71) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x738e,	// (0x00013d71) vkb2_cell_t_keypad_pane_cp03

0x739f,	// (0x00013d82) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x739f,	// (0x00013d82) vkb2_cell_t_keypad_pane_cp04

0x73b0,	// (0x00013d93) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x73b0,	// (0x00013d93) vkb2_cell_t_keypad_pane_cp05

0x73c1,	// (0x00013da4) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x73c1,	// (0x00013da4) vkb2_cell_t_keypad_pane_cp06

0x73d2,	// (0x00013db5) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x73d2,	// (0x00013db5) vkb2_cell_t_keypad_pane_cp07

0x73e3,	// (0x00013dc6) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x73e3,	// (0x00013dc6) vkb2_cell_t_keypad_pane_cp10

0x6b99,	// (0x0001357c) vkb2_cell_t_keypad_pane_g1

0xe20e,	// (0x0001abf1) vkb2_cell_t_keypad_pane_t1

0x555d,	// (0x00011f40) popup_grid_graphic2_window

0xe220,	// (0x0001ac03) aid_size_cell_graphic2_ParamLimits

0xe220,	// (0x0001ac03) aid_size_cell_graphic2

0xe258,	// (0x0001ac3b) bg_popup_window_pane_cp21_ParamLimits

0xe258,	// (0x0001ac3b) bg_popup_window_pane_cp21

0xe266,	// (0x0001ac49) graphic2_pages_pane_ParamLimits

0xe266,	// (0x0001ac49) graphic2_pages_pane

0xe2ac,	// (0x0001ac8f) grid_graphic2_control_pane_ParamLimits

0xe2ac,	// (0x0001ac8f) grid_graphic2_control_pane

0xe2ea,	// (0x0001accd) grid_graphic2_pane_ParamLimits

0xe2ea,	// (0x0001accd) grid_graphic2_pane

0xe35e,	// (0x0001ad41) cell_graphic2_pane

0x555d,	// (0x00011f40) main_comp_mode_pane

0xd43f,	// (0x00019e22) list_ai3_gene_pane_ParamLimits

0xd866,	// (0x0001a249) bg_popup_window_pane_cp19_ParamLimits

0xd872,	// (0x0001a255) bg_touch_area_indi_pane_ParamLimits

0xd872,	// (0x0001a255) bg_touch_area_indi_pane

0xd888,	// (0x0001a26b) bg_touch_area_indi_pane_cp01_ParamLimits

0xd888,	// (0x0001a26b) bg_touch_area_indi_pane_cp01

0xd89e,	// (0x0001a281) bg_touch_area_indi_pane_cp02_ParamLimits

0xd89e,	// (0x0001a281) bg_touch_area_indi_pane_cp02

0xd8b6,	// (0x0001a299) bg_touch_area_indi_pane_cp03_ParamLimits

0xd8b6,	// (0x0001a299) bg_touch_area_indi_pane_cp03

0xd8d0,	// (0x0001a2b3) popup_slider_window_g1_ParamLimits

0xd8ec,	// (0x0001a2cf) popup_slider_window_g2_ParamLimits

0xd908,	// (0x0001a2eb) popup_slider_window_g3_ParamLimits

0xfcf3,	// (0x0001c6d6) popup_slider_window_g_ParamLimits

0xd964,	// (0x0001a347) popup_slider_window_t1_ParamLimits

0xd9d8,	// (0x0001a3bb) small_volume_slider_vertical_pane_ParamLimits

0xe35e,	// (0x0001ad41) cell_graphic2_pane_ParamLimits

0xe3ad,	// (0x0001ad90) bg_button_pane_cp10_ParamLimits

0xe3ad,	// (0x0001ad90) bg_button_pane_cp10

0xe3c0,	// (0x0001ada3) bg_button_pane_cp11_ParamLimits

0xe3c0,	// (0x0001ada3) bg_button_pane_cp11

0xe3d3,	// (0x0001adb6) graphic2_pages_pane_g1_ParamLimits

0xe3d3,	// (0x0001adb6) graphic2_pages_pane_g1

0xe3ee,	// (0x0001add1) graphic2_pages_pane_g2_ParamLimits

0xe3ee,	// (0x0001add1) graphic2_pages_pane_g2

0x0001,

0xfdb7,	// (0x0001c79a) graphic2_pages_pane_g_ParamLimits

0xfdb7,	// (0x0001c79a) graphic2_pages_pane_g

0xe406,	// (0x0001ade9) graphic2_pages_pane_t1_ParamLimits

0xe406,	// (0x0001ade9) graphic2_pages_pane_t1

0xe41e,	// (0x0001ae01) cell_graphic2_control_pane_ParamLimits

0xe41e,	// (0x0001ae01) cell_graphic2_control_pane

0xe43c,	// (0x0001ae1f) cell_graphic2_pane_g1_ParamLimits

0xe43c,	// (0x0001ae1f) cell_graphic2_pane_g1

0xe449,	// (0x0001ae2c) cell_graphic2_pane_g2_ParamLimits

0xe449,	// (0x0001ae2c) cell_graphic2_pane_g2

0xe456,	// (0x0001ae39) cell_graphic2_pane_g3_ParamLimits

0xe456,	// (0x0001ae39) cell_graphic2_pane_g3

0xe463,	// (0x0001ae46) cell_graphic2_pane_g4_ParamLimits

0xe463,	// (0x0001ae46) cell_graphic2_pane_g4

0xe470,	// (0x0001ae53) cell_graphic2_pane_g5_ParamLimits

0xe470,	// (0x0001ae53) cell_graphic2_pane_g5

0x0004,

0xfdbc,	// (0x0001c79f) cell_graphic2_pane_g_ParamLimits

0xfdbc,	// (0x0001c79f) cell_graphic2_pane_g

0xe48b,	// (0x0001ae6e) cell_graphic2_pane_t1_ParamLimits

0xe48b,	// (0x0001ae6e) cell_graphic2_pane_t1

0x956e,	// (0x00015f51) grid_highlight_pane_cp11_ParamLimits

0x956e,	// (0x00015f51) grid_highlight_pane_cp11

0x3f6a,	// (0x0001094d) bg_button_pane_cp05

0xe4c2,	// (0x0001aea5) cell_graphic2_control_pane_g1

0xbf51,	// (0x00018934) bg_touch_area_indi_pane_g1

0xe4ea,	// (0x0001aecd) aid_cmod_rocker_key_size

0xe4f4,	// (0x0001aed7) aid_cmode_itu_key_size

0xe4fe,	// (0x0001aee1) main_cmode_video_pane

0xe508,	// (0x0001aeeb) main_comp_mode_itu_pane

0xe514,	// (0x0001aef7) main_comp_mode_rocker_pane

0xe520,	// (0x0001af03) cell_cmode_rocker_pane_ParamLimits

0xe520,	// (0x0001af03) cell_cmode_rocker_pane

0xe532,	// (0x0001af15) cell_cmode_itu_pane_ParamLimits

0xe532,	// (0x0001af15) cell_cmode_itu_pane

0x4268,	// (0x00010c4b) bg_button_pane_cp06_ParamLimits

0x4268,	// (0x00010c4b) bg_button_pane_cp06

0xc1c1,	// (0x00018ba4) cell_cmode_rocker_pane_g1_ParamLimits

0xc1c1,	// (0x00018ba4) cell_cmode_rocker_pane_g1

0xda7c,	// (0x0001a45f) cell_cmode_rocker_pane_g2_ParamLimits

0xda7c,	// (0x0001a45f) cell_cmode_rocker_pane_g2

0x0001,

0xfdcc,	// (0x0001c7af) cell_cmode_rocker_pane_g_ParamLimits

0xfdcc,	// (0x0001c7af) cell_cmode_rocker_pane_g

0x3c27,	// (0x0001060a) bg_button_pane_cp07

0xe547,	// (0x0001af2a) cell_cmode_itu_pane_g1

0xe550,	// (0x0001af33) cell_cmode_itu_pane_t1

0xe55e,	// (0x0001af41) cell_cmode_itu_pane_t2

0x0001,

0xfdd1,	// (0x0001c7b4) cell_cmode_itu_pane_t

0xdca1,	// (0x0001a684) aid_touch_ctrl_left

0xdca9,	// (0x0001a68c) aid_touch_ctrl_right

0x3c27,	// (0x0001060a) compa_mode_pane

0xe56c,	// (0x0001af4f) aid_cmod_rocker_key_size_cp

0xe576,	// (0x0001af59) aid_cmode_itu_key_size_cp

0xe580,	// (0x0001af63) compa_mode_pane_g1

0xe588,	// (0x0001af6b) compa_mode_pane_g2

0xe590,	// (0x0001af73) compa_mode_pane_g3

0x0002,

0xfdd6,	// (0x0001c7b9) compa_mode_pane_g

0xe598,	// (0x0001af7b) main_comp_mode_itu_pane_cp

0xe5a0,	// (0x0001af83) main_comp_mode_rocker_pane_cp

0xe5a8,	// (0x0001af8b) cell_cmode_itu_pane_cp_ParamLimits

0xe5a8,	// (0x0001af8b) cell_cmode_itu_pane_cp

0xe5bd,	// (0x0001afa0) cell_cmode_rocker_pane_cp_ParamLimits

0xe5bd,	// (0x0001afa0) cell_cmode_rocker_pane_cp

0x4268,	// (0x00010c4b) bg_button_pane_cp06_cp_ParamLimits

0x4268,	// (0x00010c4b) bg_button_pane_cp06_cp

0xc1c1,	// (0x00018ba4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc1c1,	// (0x00018ba4) cell_cmode_rocker_pane_g1_cp

0xbf51,	// (0x00018934) cell_cmode_rocker_pane_g2_cp

0x3c27,	// (0x0001060a) bg_button_pane_cp07_cp

0xe5cf,	// (0x0001afb2) cell_cmode_itu_pane_g1_cp

0xe5d8,	// (0x0001afbb) cell_cmode_itu_pane_t1_cp

0xe5d8,	// (0x0001afbb) cell_cmode_itu_pane_t2_cp

0xaa4a,	// (0x0001742d) settings_code_pane_cp2

0x3e26,	// (0x00010809) bg_popup_window_pane_cp3_ParamLimits

0x4083,	// (0x00010a66) heading_pane_cp3_ParamLimits

0x408f,	// (0x00010a72) listscroll_popup_graphic_pane_ParamLimits

0x6942,	// (0x00013325) fep_hwr_aid_pane_ParamLimits

0x6db9,	// (0x0001379c) aid_touch_sctrl_top_ParamLimits

0x6dd4,	// (0x000137b7) sctrl_sk_top_pane_g1_ParamLimits

0x6b99,	// (0x0001357c) sctrl_sk_top_pane_g2_ParamLimits

0xfd0c,	// (0x0001c6ef) sctrl_sk_top_pane_g_ParamLimits

0x6de1,	// (0x000137c4) sctrl_sk_top_pane_t1_ParamLimits

0x6db9,	// (0x0001379c) aid_touch_sctrl_bottom_ParamLimits

0x6de1,	// (0x000137c4) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbeb,	// (0x0001a5ce) aid_area_touch_clock

0x6fca,	// (0x000139ad) aid_vkb2_area_top_pane_cell_ParamLimits

0x6fca,	// (0x000139ad) aid_vkb2_area_top_pane_cell

0x7115,	// (0x00013af8) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7115,	// (0x00013af8) aid_vkb2_area_bottom_pane_cell

0xe159,	// (0x0001ab3c) popup_char_count_window

0xe5e6,	// (0x0001afc9) popup_char_count_window_g1

0xe5ef,	// (0x0001afd2) popup_char_count_window_g2

0xe5f8,	// (0x0001afdb) popup_char_count_window_g3

0x0002,

0xfddd,	// (0x0001c7c0) popup_char_count_window_g

0xe601,	// (0x0001afe4) popup_char_count_window_t1

0x6e90,	// (0x00013873) popup_fep_char_preview_window_ParamLimits

0x6e90,	// (0x00013873) popup_fep_char_preview_window

0x6fe8,	// (0x000139cb) vkb2_top_candi_pane_ParamLimits

0x6fe8,	// (0x000139cb) vkb2_top_candi_pane

0xe60f,	// (0x0001aff2) cell_vkb2_top_candi_pane_ParamLimits

0xe60f,	// (0x0001aff2) cell_vkb2_top_candi_pane

0x73f8,	// (0x00013ddb) bg_popup_fep_char_preview_window_ParamLimits

0x73f8,	// (0x00013ddb) bg_popup_fep_char_preview_window

0x7406,	// (0x00013de9) popup_fep_char_preview_window_t1_ParamLimits

0x7406,	// (0x00013de9) popup_fep_char_preview_window_t1

0xe65c,	// (0x0001b03f) bg_popup_fep_char_preview_window_g1

0xe664,	// (0x0001b047) bg_popup_fep_char_preview_window_g2

0xe66c,	// (0x0001b04f) bg_popup_fep_char_preview_window_g3

0xe674,	// (0x0001b057) bg_popup_fep_char_preview_window_g4

0xe67c,	// (0x0001b05f) bg_popup_fep_char_preview_window_g5

0x7440,	// (0x00013e23) bg_popup_fep_char_preview_window_g6

0xe684,	// (0x0001b067) bg_popup_fep_char_preview_window_g7

0xe68c,	// (0x0001b06f) bg_popup_fep_char_preview_window_g8

0xe694,	// (0x0001b077) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde4,	// (0x0001c7c7) bg_popup_fep_char_preview_window_g

0x6b99,	// (0x0001357c) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6b99,	// (0x0001357c) cell_vkb2_top_candi_pane_g1

0x6ba7,	// (0x0001358a) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6ba7,	// (0x0001358a) cell_vkb2_top_candi_pane_g2

0xd393,	// (0x00019d76) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd393,	// (0x00019d76) cell_vkb2_top_candi_pane_g3

0x7448,	// (0x00013e2b) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7448,	// (0x00013e2b) cell_vkb2_top_candi_pane_g4

0xc872,	// (0x00019255) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc872,	// (0x00019255) cell_vkb2_top_candi_pane_g5

0x7469,	// (0x00013e4c) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7469,	// (0x00013e4c) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf7,	// (0x0001c7da) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf7,	// (0x0001c7da) cell_vkb2_top_candi_pane_g

0x7477,	// (0x00013e5a) cell_vkb2_top_candi_pane_t1

0x675a,	// (0x0001313d) aid_size_touch_slider_mark_ParamLimits

0x675a,	// (0x0001313d) aid_size_touch_slider_mark

0xe29c,	// (0x0001ac7f) grid_graphic2_catg_pane_ParamLimits

0xe29c,	// (0x0001ac7f) grid_graphic2_catg_pane

0xe33a,	// (0x0001ad1d) popup_grid_graphic2_window_t1_ParamLimits

0xe33a,	// (0x0001ad1d) popup_grid_graphic2_window_t1

0xe34c,	// (0x0001ad2f) popup_grid_graphic2_window_t2_ParamLimits

0xe34c,	// (0x0001ad2f) popup_grid_graphic2_window_t2

0x0001,

0xfdb2,	// (0x0001c795) popup_grid_graphic2_window_t_ParamLimits

0xfdb2,	// (0x0001c795) popup_grid_graphic2_window_t

0x3f6a,	// (0x0001094d) bg_button_pane_cp05_ParamLimits

0xe4c2,	// (0x0001aea5) cell_graphic2_control_pane_g1_ParamLimits

0xe69c,	// (0x0001b07f) cell_graphic2_catg_pane_ParamLimits

0xe69c,	// (0x0001b07f) cell_graphic2_catg_pane

0x3c27,	// (0x0001060a) bg_button_pane_cp12

0xe6ae,	// (0x0001b091) cell_graphic2_catg_pane_g1

0xdbb6,	// (0x0001a599) cell_tb_ext_pane_t1_ParamLimits

0x7232,	// (0x00013c15) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7232,	// (0x00013c15) vkb2_top_cell_right_narrow_pane

0x724a,	// (0x00013c2d) vkb2_top_cell_right_wide_pane_ParamLimits

0x724a,	// (0x00013c2d) vkb2_top_cell_right_wide_pane

0x6934,	// (0x00013317) bg_vkb2_func_pane_ParamLimits

0x6934,	// (0x00013317) bg_vkb2_func_pane

0x72bb,	// (0x00013c9e) vkb2_top_cell_left_pane_g1_ParamLimits

0x6934,	// (0x00013317) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6934,	// (0x00013317) bg_vkb2_fuc_pane_cp03

0x7319,	// (0x00013cfc) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9456,	// (0x00015e39) bg_vkb2_func_pane_g1

0x945e,	// (0x00015e41) bg_vkb2_func_pane_g2

0x946e,	// (0x00015e51) bg_vkb2_func_pane_g3

0x9466,	// (0x00015e49) bg_vkb2_func_pane_g4

0x9476,	// (0x00015e59) bg_vkb2_func_pane_g5

0x947e,	// (0x00015e61) bg_vkb2_func_pane_g6

0x9486,	// (0x00015e69) bg_vkb2_func_pane_g7

0x948e,	// (0x00015e71) bg_vkb2_func_pane_g8

0x944e,	// (0x00015e31) bg_vkb2_func_pane_g9

0x0008,

0xfe04,	// (0x0001c7e7) bg_vkb2_func_pane_g

0x6934,	// (0x00013317) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6934,	// (0x00013317) bg_vkb2_fuc_pane_cp01

0x72bb,	// (0x00013c9e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x72bb,	// (0x00013c9e) vkb2_top_cell_right_wide_pane_g1

0x6934,	// (0x00013317) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6934,	// (0x00013317) bg_vkb2_fuc_pane_cp02

0x7319,	// (0x00013cfc) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7319,	// (0x00013cfc) vkb2_top_cell_right_narrow_pane_g1

0xd7e8,	// (0x0001a1cb) aid_touch_area_decrease_ParamLimits

0xd7e8,	// (0x0001a1cb) aid_touch_area_decrease

0xd808,	// (0x0001a1eb) aid_touch_area_increase_ParamLimits

0xd808,	// (0x0001a1eb) aid_touch_area_increase

0xd814,	// (0x0001a1f7) aid_touch_area_mute_ParamLimits

0xd814,	// (0x0001a1f7) aid_touch_area_mute

0xd838,	// (0x0001a21b) aid_touch_area_slider_ParamLimits

0xd838,	// (0x0001a21b) aid_touch_area_slider

0xd924,	// (0x0001a307) popup_slider_window_g4_ParamLimits

0xd924,	// (0x0001a307) popup_slider_window_g4

0xd930,	// (0x0001a313) popup_slider_window_g5_ParamLimits

0xd930,	// (0x0001a313) popup_slider_window_g5

0xd952,	// (0x0001a335) popup_slider_window_g6_ParamLimits

0xd952,	// (0x0001a335) popup_slider_window_g6

0xd992,	// (0x0001a375) popup_slider_window_t2_ParamLimits

0xd992,	// (0x0001a375) popup_slider_window_t2

0x0001,

0xfd00,	// (0x0001c6e3) popup_slider_window_t_ParamLimits

0xfd00,	// (0x0001c6e3) popup_slider_window_t

0xd9aa,	// (0x0001a38d) slider_pane_ParamLimits

0xd9aa,	// (0x0001a38d) slider_pane

0xe6b7,	// (0x0001b09a) slider_pane_g1_ParamLimits

0xe6b7,	// (0x0001b09a) slider_pane_g1

0xe6cb,	// (0x0001b0ae) slider_pane_g2_ParamLimits

0xe6cb,	// (0x0001b0ae) slider_pane_g2

0xe6e1,	// (0x0001b0c4) slider_pane_g3_ParamLimits

0xe6e1,	// (0x0001b0c4) slider_pane_g3

0x0003,

0xfe17,	// (0x0001c7fa) slider_pane_g_ParamLimits

0xfe17,	// (0x0001c7fa) slider_pane_g

0x6311,	// (0x00012cf4) popup_tb_float_extension_window_ParamLimits

0x6311,	// (0x00012cf4) popup_tb_float_extension_window

0xe70d,	// (0x0001b0f0) aid_size_cell_tb_float_ext

0x3c27,	// (0x0001060a) bg_popup_sub_window_cp28

0xe719,	// (0x0001b0fc) grid_tb_float_ext_pane

0xe723,	// (0x0001b106) cell_tb_float_ext_pane_ParamLimits

0xe723,	// (0x0001b106) cell_tb_float_ext_pane

0xe73d,	// (0x0001b120) cell_tb_float_ext_pane_g1

0xe746,	// (0x0001b129) grid_highlight_pane_cp12

0x6a83,	// (0x00013466) cell_last_hwr_side_pane_ParamLimits

0x6a83,	// (0x00013466) cell_last_hwr_side_pane

0xbf51,	// (0x00018934) cell_last_hwr_side_pane_g1

0xe74f,	// (0x0001b132) cell_last_hwr_side_pane_g2

0x0001,

0xfe20,	// (0x0001c803) cell_last_hwr_side_pane_g

0x71e1,	// (0x00013bc4) vkb2_area_bottom_space_btn_pane_ParamLimits

0x71e1,	// (0x00013bc4) vkb2_area_bottom_space_btn_pane

0x6b99,	// (0x0001357c) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe20e,	// (0x0001abf1) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7477,	// (0x00013e5a) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7496,	// (0x00013e79) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7496,	// (0x00013e79) vkb2_area_bottom_space_btn_pane_g1

0x74d0,	// (0x00013eb3) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x74d0,	// (0x00013eb3) vkb2_area_bottom_space_btn_pane_g2

0x7506,	// (0x00013ee9) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7506,	// (0x00013ee9) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe25,	// (0x0001c808) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe25,	// (0x0001c808) vkb2_area_bottom_space_btn_pane_g

0x69f7,	// (0x000133da) cel_fep_hwr_func_pane_ParamLimits

0x69f7,	// (0x000133da) cel_fep_hwr_func_pane

0x6a33,	// (0x00013416) cell_hwr_side_button_pane_ParamLimits

0x6a33,	// (0x00013416) cell_hwr_side_button_pane

0xdbeb,	// (0x0001a5ce) aid_area_touch_clock_ParamLimits

0x3f6a,	// (0x0001094d) bg_uniindi_top_pane_ParamLimits

0xdbfd,	// (0x0001a5e0) uniindi_top_pane_g1_ParamLimits

0xdc13,	// (0x0001a5f6) uniindi_top_pane_g2_ParamLimits

0xdc1f,	// (0x0001a602) uniindi_top_pane_g3_ParamLimits

0xdc30,	// (0x0001a613) uniindi_top_pane_g4_ParamLimits

0xfd38,	// (0x0001c71b) uniindi_top_pane_g_ParamLimits

0xdc3d,	// (0x0001a620) uniindi_top_pane_t1_ParamLimits

0x3f6a,	// (0x0001094d) bg_vkb2_func_pane_cp01_ParamLimits

0x3f6a,	// (0x0001094d) bg_vkb2_func_pane_cp01

0xe758,	// (0x0001b13b) cel_fep_hwr_func_pane_g1_ParamLimits

0xe758,	// (0x0001b13b) cel_fep_hwr_func_pane_g1

0x3f6a,	// (0x0001094d) bg_vkb2_func_pane_cp02_ParamLimits

0x3f6a,	// (0x0001094d) bg_vkb2_func_pane_cp02

0xe758,	// (0x0001b13b) cell_hwr_side_button_pane_g1_ParamLimits

0xe758,	// (0x0001b13b) cell_hwr_side_button_pane_g1

0x92b0,	// (0x00015c93) status_pane_g4_ParamLimits

0x92b0,	// (0x00015c93) status_pane_g4

0x92ca,	// (0x00015cad) status_pane_t1

0xbc8c,	// (0x0001866f) form2_midp_gauge_slider_cont_pane

0xbc94,	// (0x00018677) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbca6,	// (0x00018689) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbcb8,	// (0x0001869b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x0001c4e2) form2_midp_gauge_slider_pane_t_ParamLimits

0xbcca,	// (0x000186ad) form2_midp_slider_pane_ParamLimits

0x6e50,	// (0x00013833) aid_size_cell_func_vkb2_ParamLimits

0x6e50,	// (0x00013833) aid_size_cell_func_vkb2

0xe6f9,	// (0x0001b0dc) slider_pane_g4_ParamLimits

0xe6f9,	// (0x0001b0dc) slider_pane_g4

0x7550,	// (0x00013f33) form2_midp_gauge_slider_pane_t2_cp01

0x755e,	// (0x00013f41) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x755e,	// (0x00013f41) form2_midp_gauge_slider_pane_t3_cp01

0x757b,	// (0x00013f5e) form2_midp_slider_pane_cp01

0x3c27,	// (0x0001060a) navi_smil_pane

0xe791,	// (0x0001b174) navi_smil_pane_g1

0xe799,	// (0x0001b17c) navi_smil_pane_t1

0xe766,	// (0x0001b149) form2_midp_slider_pane_g1

0xe76f,	// (0x0001b152) form2_midp_slider_pane_g2

0xe777,	// (0x0001b15a) form2_midp_slider_pane_g3

0xe766,	// (0x0001b149) form2_midp_slider_pane_g4

0xe77f,	// (0x0001b162) form2_midp_slider_pane_g5

0x0004,

0xfe2e,	// (0x0001c811) form2_midp_slider_pane_g

0x7540,	// (0x00013f23) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7540,	// (0x00013f23) vkb2_area_bottom_space_btn_pane_g4

0x90df,	// (0x00015ac2) lc0_navi_pane_ParamLimits

0x90df,	// (0x00015ac2) lc0_navi_pane

0x9155,	// (0x00015b38) lc0_stat_indi_pane_ParamLimits

0x9155,	// (0x00015b38) lc0_stat_indi_pane

0x916c,	// (0x00015b4f) ls0_title_pane_ParamLimits

0x916c,	// (0x00015b4f) ls0_title_pane

0x4268,	// (0x00010c4b) bg_popup_sub_pane_cp14_ParamLimits

0xdbd2,	// (0x0001a5b5) list_uniindi_pane_ParamLimits

0xdbde,	// (0x0001a5c1) uniindi_top_pane_ParamLimits

0xdc79,	// (0x0001a65c) list_single_uniindi_pane_g1_ParamLimits

0xdc8c,	// (0x0001a66f) list_single_uniindi_pane_t1_ParamLimits

0x7584,	// (0x00013f67) lc0_stat_clock_pane_ParamLimits

0x7584,	// (0x00013f67) lc0_stat_clock_pane

0xe7a7,	// (0x0001b18a) lc0_stat_indi_pane_g1_ParamLimits

0xe7a7,	// (0x0001b18a) lc0_stat_indi_pane_g1

0xe7b4,	// (0x0001b197) lc0_stat_indi_pane_g2_ParamLimits

0xe7b4,	// (0x0001b197) lc0_stat_indi_pane_g2

0x0001,

0xfe39,	// (0x0001c81c) lc0_stat_indi_pane_g_ParamLimits

0xfe39,	// (0x0001c81c) lc0_stat_indi_pane_g

0x7591,	// (0x00013f74) lc0_uni_indicator_pane_ParamLimits

0x7591,	// (0x00013f74) lc0_uni_indicator_pane

0xe7c1,	// (0x0001b1a4) ls0_title_pane_g1_ParamLimits

0xe7c1,	// (0x0001b1a4) ls0_title_pane_g1

0xe7d5,	// (0x0001b1b8) ls0_title_pane_t1_ParamLimits

0xe7d5,	// (0x0001b1b8) ls0_title_pane_t1

0x759e,	// (0x00013f81) lc0_uni_indicator_pane_g1_ParamLimits

0x759e,	// (0x00013f81) lc0_uni_indicator_pane_g1

0xe80b,	// (0x0001b1ee) lc0_stat_clock_pane_t1

0x555d,	// (0x00011f40) main_ai5_pane

0xe819,	// (0x0001b1fc) ai5_sk_pane_ParamLimits

0xe819,	// (0x0001b1fc) ai5_sk_pane

0xe826,	// (0x0001b209) cell_ai5_widget_pane_ParamLimits

0xe826,	// (0x0001b209) cell_ai5_widget_pane

0xe8d8,	// (0x0001b2bb) aid_size_cell_widget_grid

0xe8e6,	// (0x0001b2c9) bg_ai5_widget_pane_ParamLimits

0xe8e6,	// (0x0001b2c9) bg_ai5_widget_pane

0xe95a,	// (0x0001b33d) cell_ai5_widget_pane_g2

0xe96a,	// (0x0001b34d) cell_ai5_widget_pane_g3

0xe981,	// (0x0001b364) cell_ai5_widget_pane_g4

0xe98d,	// (0x0001b370) cell_ai5_widget_pane_g5

0xe999,	// (0x0001b37c) cell_ai5_widget_pane_g6

0xe9a5,	// (0x0001b388) cell_ai5_widget_pane_g7

0xe9ed,	// (0x0001b3d0) cell_ai5_widget_pane_t1_ParamLimits

0xe9ed,	// (0x0001b3d0) cell_ai5_widget_pane_t1

0xea0a,	// (0x0001b3ed) cell_ai5_widget_pane_t2_ParamLimits

0xea0a,	// (0x0001b3ed) cell_ai5_widget_pane_t2

0xea22,	// (0x0001b405) cell_ai5_widget_pane_t3_ParamLimits

0xea22,	// (0x0001b405) cell_ai5_widget_pane_t3

0xea3a,	// (0x0001b41d) cell_ai5_widget_pane_t4_ParamLimits

0xea3a,	// (0x0001b41d) cell_ai5_widget_pane_t4

0xea57,	// (0x0001b43a) cell_ai5_widget_pane_t5_ParamLimits

0xea57,	// (0x0001b43a) cell_ai5_widget_pane_t5

0xea76,	// (0x0001b459) cell_ai5_widget_pane_t6_ParamLimits

0xea76,	// (0x0001b459) cell_ai5_widget_pane_t6

0xea88,	// (0x0001b46b) cell_ai5_widget_pane_t7_ParamLimits

0xea88,	// (0x0001b46b) cell_ai5_widget_pane_t7

0xeaa1,	// (0x0001b484) cell_ai5_widget_pane_t8_ParamLimits

0xeaa1,	// (0x0001b484) cell_ai5_widget_pane_t8

0x0009,

0xfe53,	// (0x0001c836) cell_ai5_widget_pane_t_ParamLimits

0xfe53,	// (0x0001c836) cell_ai5_widget_pane_t

0xeaf5,	// (0x0001b4d8) grid_ai5_widget_pane

0x4268,	// (0x00010c4b) highlight_cell_ai5_widget_pane_ParamLimits

0x4268,	// (0x00010c4b) highlight_cell_ai5_widget_pane

0xeb03,	// (0x0001b4e6) ai5_sk_left_pane

0xeb0d,	// (0x0001b4f0) ai5_sk_middle_pane

0xeb17,	// (0x0001b4fa) ai5_sk_right_pane

0xeb21,	// (0x0001b504) bg_ai5_widget_pane_g1_ParamLimits

0xeb21,	// (0x0001b504) bg_ai5_widget_pane_g1

0xeb2d,	// (0x0001b510) bg_ai5_widget_pane_g2_ParamLimits

0xeb2d,	// (0x0001b510) bg_ai5_widget_pane_g2

0xeb39,	// (0x0001b51c) bg_ai5_widget_pane_g3_ParamLimits

0xeb39,	// (0x0001b51c) bg_ai5_widget_pane_g3

0xeb45,	// (0x0001b528) bg_ai5_widget_pane_g4_ParamLimits

0xeb45,	// (0x0001b528) bg_ai5_widget_pane_g4

0xeb51,	// (0x0001b534) bg_ai5_widget_pane_g5_ParamLimits

0xeb51,	// (0x0001b534) bg_ai5_widget_pane_g5

0xeb5d,	// (0x0001b540) bg_ai5_widget_pane_g6_ParamLimits

0xeb5d,	// (0x0001b540) bg_ai5_widget_pane_g6

0xeb69,	// (0x0001b54c) bg_ai5_widget_pane_g7_ParamLimits

0xeb69,	// (0x0001b54c) bg_ai5_widget_pane_g7

0xeb75,	// (0x0001b558) bg_ai5_widget_pane_g8_ParamLimits

0xeb75,	// (0x0001b558) bg_ai5_widget_pane_g8

0xeb81,	// (0x0001b564) bg_ai5_widget_pane_g9_ParamLimits

0xeb81,	// (0x0001b564) bg_ai5_widget_pane_g9

0x0008,

0xfe68,	// (0x0001c84b) bg_ai5_widget_pane_g_ParamLimits

0xfe68,	// (0x0001c84b) bg_ai5_widget_pane_g

0xebb3,	// (0x0001b596) cell_shortcut_ai5_widget_pane_ParamLimits

0xebb3,	// (0x0001b596) cell_shortcut_ai5_widget_pane

0x8bc4,	// (0x000155a7) bg_cell_shortcut_ai5_widget_pane

0xebc4,	// (0x0001b5a7) cell_grid_ai5_widget_pane_g1

0x8bc4,	// (0x000155a7) highlight_cell_shortcut_ai5_widget_pane

0x9456,	// (0x00015e39) ai5_sk_left_pane_g1

0xebcd,	// (0x0001b5b0) ai5_sk_left_pane_g2

0xebd5,	// (0x0001b5b8) ai5_sk_left_pane_g3

0xebdd,	// (0x0001b5c0) ai5_sk_left_pane_g4

0x0003,

0xfe7b,	// (0x0001c85e) ai5_sk_left_pane_g

0xebe5,	// (0x0001b5c8) ai5_sk_left_pane_t1

0x945e,	// (0x00015e41) ai5_sk_right_pane_g1

0xebf3,	// (0x0001b5d6) ai5_sk_right_pane_g2

0xebfb,	// (0x0001b5de) ai5_sk_right_pane_g3

0xec03,	// (0x0001b5e6) ai5_sk_right_pane_g4

0x0003,

0xfe84,	// (0x0001c867) ai5_sk_right_pane_g

0xec0b,	// (0x0001b5ee) ai5_sk_right_pane_t1

0x945e,	// (0x00015e41) ai5_sk_middle_pane_g1

0x9456,	// (0x00015e39) ai5_sk_middle_pane_g2

0x9476,	// (0x00015e59) ai5_sk_middle_pane_g3

0xebfb,	// (0x0001b5de) ai5_sk_middle_pane_g4

0xebd5,	// (0x0001b5b8) ai5_sk_middle_pane_g5

0xec19,	// (0x0001b5fc) ai5_sk_middle_pane_g6

0xec21,	// (0x0001b604) ai5_sk_middle_pane_g7

0x0006,

0xfe8d,	// (0x0001c870) ai5_sk_middle_pane_g

0x8f65,	// (0x00015948) aid_touch_area_size_lc0_ParamLimits

0x8f65,	// (0x00015948) aid_touch_area_size_lc0

0x6bc8,	// (0x000135ab) cell_hwr_candidate_pane_t1_ParamLimits

0x8f81,	// (0x00015964) aid_touch_navi_pane

0x925a,	// (0x00015c3d) status_dt_navi_pane_ParamLimits

0x925a,	// (0x00015c3d) status_dt_navi_pane

0x9267,	// (0x00015c4a) status_dt_sta_pane_ParamLimits

0x9267,	// (0x00015c4a) status_dt_sta_pane

0xec29,	// (0x0001b60c) dt_sta_controll_pane

0xec36,	// (0x0001b619) dt_sta_indi_pane

0xec47,	// (0x0001b62a) dt_sta_title_pane

0x3f6a,	// (0x0001094d) bg_dt_sta_indi_pane_ParamLimits

0x3f6a,	// (0x0001094d) bg_dt_sta_indi_pane

0xec5a,	// (0x0001b63d) dt_sta_battery_pane

0xec62,	// (0x0001b645) dt_sta_indi_pane_g1

0xec6b,	// (0x0001b64e) dt_sta_indi_pane_g2

0xec74,	// (0x0001b657) dt_sta_indi_pane_g3

0x0002,

0xfe9c,	// (0x0001c87f) dt_sta_indi_pane_g

0xec7d,	// (0x0001b660) dt_sta_signal_pane

0x4268,	// (0x00010c4b) bg_dt_sta_title_pane_ParamLimits

0x4268,	// (0x00010c4b) bg_dt_sta_title_pane

0xa371,	// (0x00016d54) dt_sta_title_pane_g1

0xec86,	// (0x0001b669) dt_sta_title_pane_t1_ParamLimits

0xec86,	// (0x0001b669) dt_sta_title_pane_t1

0x3c27,	// (0x0001060a) bg_dt_sta_control_pane

0xec9b,	// (0x0001b67e) dt_sta_controll_pane_g1

0xeca4,	// (0x0001b687) bg_dt_sta_title_pane_g1

0xecad,	// (0x0001b690) bg_dt_sta_title_pane_g2

0xecb6,	// (0x0001b699) bg_dt_sta_title_pane_g3

0x0002,

0xfea3,	// (0x0001c886) bg_dt_sta_title_pane_g

0xbf51,	// (0x00018934) bg_dt_sta_indi_pane_g1

0xecbf,	// (0x0001b6a2) dt_sta_signal_pane_g1

0xecc7,	// (0x0001b6aa) dt_sta_signal_pane_g2

0x0001,

0xfeaa,	// (0x0001c88d) dt_sta_signal_pane_g

0xeccf,	// (0x0001b6b2) dt_sta_battery_pane_g1

0xecd8,	// (0x0001b6bb) dt_sta_battery_pane_t1

0xbf51,	// (0x00018934) bg_dt_sta_control_pane_g1

0x49db,	// (0x000113be) fep_china_uni_eep_pane

0x49e3,	// (0x000113c6) fep_china_uni_entry_pane_ParamLimits

0x49f3,	// (0x000113d6) popup_fep_china_uni_window_g1_ParamLimits

0x4a03,	// (0x000113e6) popup_fep_china_uni_window_g2_ParamLimits

0x4a03,	// (0x000113e6) popup_fep_china_uni_window_g2

0x0001,

0xf70e,	// (0x0001c0f1) popup_fep_china_uni_window_g_ParamLimits

0xf70e,	// (0x0001c0f1) popup_fep_china_uni_window_g

0xece7,	// (0x0001b6ca) fep_china_uni_eep_pane_g1

0xecef,	// (0x0001b6d2) fep_china_uni_eep_pane_t1

0xe788,	// (0x0001b16b) aid_touch_area_size_smil_player

0x90d7,	// (0x00015aba) lc0_clock_pane

0x92be,	// (0x00015ca1) status_pane_g5_ParamLimits

0x92be,	// (0x00015ca1) status_pane_g5

0x5fd2,	// (0x000129b5) popup_keymap_window

0x927c,	// (0x00015c5f) status_icon_pane

0xe96a,	// (0x0001b34d) cell_ai5_widget_pane_g3_ParamLimits

0xe981,	// (0x0001b364) cell_ai5_widget_pane_g4_ParamLimits

0xe98d,	// (0x0001b370) cell_ai5_widget_pane_g5_ParamLimits

0xe9b1,	// (0x0001b394) cell_ai5_widget_pane_g8_ParamLimits

0xe9b1,	// (0x0001b394) cell_ai5_widget_pane_g8

0xe9c5,	// (0x0001b3a8) cell_ai5_widget_pane_g9_ParamLimits

0xe9c5,	// (0x0001b3a8) cell_ai5_widget_pane_g9

0xe9d9,	// (0x0001b3bc) cell_ai5_widget_pane_g10_ParamLimits

0xe9d9,	// (0x0001b3bc) cell_ai5_widget_pane_g10

0xecfe,	// (0x0001b6e1) status_icon_pane_g1

0x3c27,	// (0x0001060a) bg_popup_sub_pane_cp13

0xed06,	// (0x0001b6e9) popup_keymap_window_t1

0x8e95,	// (0x00015878) control_pane_g6_ParamLimits

0x8e95,	// (0x00015878) control_pane_g6

0x8ea2,	// (0x00015885) control_pane_g7_ParamLimits

0x8ea2,	// (0x00015885) control_pane_g7

0x8eaf,	// (0x00015892) control_pane_g8_ParamLimits

0x8eaf,	// (0x00015892) control_pane_g8

0xec29,	// (0x0001b60c) dt_sta_controll_pane_ParamLimits

0xec36,	// (0x0001b619) dt_sta_indi_pane_ParamLimits

0xec47,	// (0x0001b62a) dt_sta_title_pane_ParamLimits

0x413d,	// (0x00010b20) aid_size_touch_scroll_bar_cale

0x5636,	// (0x00012019) popup_discreet_window_ParamLimits

0x5636,	// (0x00012019) popup_discreet_window

0x56b0,	// (0x00012093) popup_sk_window

0x9bb5,	// (0x00016598) bg_popup_sub_pane_cp28_ParamLimits

0x9bb5,	// (0x00016598) bg_popup_sub_pane_cp28

0xed14,	// (0x0001b6f7) popup_discreet_window_g1_ParamLimits

0xed14,	// (0x0001b6f7) popup_discreet_window_g1

0xed34,	// (0x0001b717) popup_discreet_window_t1_ParamLimits

0xed34,	// (0x0001b717) popup_discreet_window_t1

0xed52,	// (0x0001b735) popup_discreet_window_t2_ParamLimits

0xed52,	// (0x0001b735) popup_discreet_window_t2

0x0002,

0xfeaf,	// (0x0001c892) popup_discreet_window_t_ParamLimits

0xfeaf,	// (0x0001c892) popup_discreet_window_t

0x75b2,	// (0x00013f95) popup_sk_window_g1

0x75bc,	// (0x00013f9f) popup_sk_window_g2

0x0001,

0xfeb6,	// (0x0001c899) popup_sk_window_g

0x75c4,	// (0x00013fa7) popup_sk_window_t1

0x75d2,	// (0x00013fb5) popup_sk_window_t1_copy1

0xe95a,	// (0x0001b33d) cell_ai5_widget_pane_g2_ParamLimits

0xeab3,	// (0x0001b496) cell_ai5_widget_pane_t9_ParamLimits

0xeab3,	// (0x0001b496) cell_ai5_widget_pane_t9

0x3c27,	// (0x0001060a) main_fep_fshwr2_pane

0x75e0,	// (0x00013fc3) aid_fshwr2_btn_pane

0x75ec,	// (0x00013fcf) aid_fshwr2_syb_pane

0x75fd,	// (0x00013fe0) aid_fshwr2_txt_pane

0x7609,	// (0x00013fec) fshwr2_func_candi_pane

0x7621,	// (0x00014004) fshwr2_hwr_syb_pane

0x7638,	// (0x0001401b) fshwr2_icf_pane

0x555d,	// (0x00011f40) fshwr2_icf_bg_pane

0x7661,	// (0x00014044) fshwr2_icf_pane_t1_ParamLimits

0x7661,	// (0x00014044) fshwr2_icf_pane_t1

0x48c4,	// (0x000112a7) fshwr2_func_candi_pane_g1

0xeda4,	// (0x0001b787) fshwr2_func_candi_row_pane_ParamLimits

0xeda4,	// (0x0001b787) fshwr2_func_candi_row_pane

0x767a,	// (0x0001405d) cell_fshwr2_syb_pane_ParamLimits

0x767a,	// (0x0001405d) cell_fshwr2_syb_pane

0x6b99,	// (0x0001357c) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6b99,	// (0x0001357c) fshwr2_hwr_syb_pane_g1

0x555d,	// (0x00011f40) bg_popup_call_pane_cp01

0x7690,	// (0x00014073) fshwr2_func_candi_cell_pane_ParamLimits

0x7690,	// (0x00014073) fshwr2_func_candi_cell_pane

0xa211,	// (0x00016bf4) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa211,	// (0x00016bf4) fshwr2_func_candi_cell_bg_pane

0x76db,	// (0x000140be) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x76db,	// (0x000140be) fshwr2_func_candi_cell_pane_g1

0x7703,	// (0x000140e6) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7703,	// (0x000140e6) fshwr2_func_candi_cell_pane_t1

0x555d,	// (0x00011f40) bg_button_pane_cp08

0xedb4,	// (0x0001b797) cell_fshwr2_syb_bg_pane

0x7716,	// (0x000140f9) cell_fshwr2_syb_bg_pane_g1

0x771e,	// (0x00014101) cell_fshwr2_syb_bg_pane_t1

0x4268,	// (0x00010c4b) main_tmo_pane

0xa6aa,	// (0x0001708d) uni_indicator_pane_g1_ParamLimits

0xa6bd,	// (0x000170a0) uni_indicator_pane_g2_ParamLimits

0xa6cf,	// (0x000170b2) uni_indicator_pane_g3_ParamLimits

0xa6de,	// (0x000170c1) uni_indicator_pane_g4_ParamLimits

0xa6de,	// (0x000170c1) uni_indicator_pane_g4

0xa6f2,	// (0x000170d5) uni_indicator_pane_g5_ParamLimits

0xa6f2,	// (0x000170d5) uni_indicator_pane_g5

0xa6f2,	// (0x000170d5) uni_indicator_pane_g6_ParamLimits

0xa6f2,	// (0x000170d5) uni_indicator_pane_g6

0xf912,	// (0x0001c2f5) uni_indicator_pane_g_ParamLimits

0xd7ca,	// (0x0001a1ad) popup_tmo_note_window_ParamLimits

0xd7ca,	// (0x0001a1ad) popup_tmo_note_window

0x6e32,	// (0x00013815) fshwr2_bg_pane

0x76f4,	// (0x000140d7) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x76f4,	// (0x000140d7) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebb,	// (0x0001c89e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebb,	// (0x0001c89e) fshwr2_func_candi_cell_pane_g

0x6b81,	// (0x00013564) bg_popup_window_pane_cp01

0x772d,	// (0x00014110) bg_popup_window_pane_g1_cp01

0xedbc,	// (0x0001b79f) bg_popup_window_pane_cp22_ParamLimits

0xedbc,	// (0x0001b79f) bg_popup_window_pane_cp22

0xedca,	// (0x0001b7ad) listscroll_tmo_link_pane_ParamLimits

0xedca,	// (0x0001b7ad) listscroll_tmo_link_pane

0xee0a,	// (0x0001b7ed) popup_tmo_note_window_g1_ParamLimits

0xee0a,	// (0x0001b7ed) popup_tmo_note_window_g1

0xee17,	// (0x0001b7fa) tmo_note_info_pane_ParamLimits

0xee17,	// (0x0001b7fa) tmo_note_info_pane

0xee31,	// (0x0001b814) list_tmo_note_info_pane_g1_ParamLimits

0xee31,	// (0x0001b814) list_tmo_note_info_pane_g1

0xee48,	// (0x0001b82b) list_tmo_note_info_pane_g2_ParamLimits

0xee48,	// (0x0001b82b) list_tmo_note_info_pane_g2

0x0001,

0xfec0,	// (0x0001c8a3) list_tmo_note_info_pane_g_ParamLimits

0xfec0,	// (0x0001c8a3) list_tmo_note_info_pane_g

0xee64,	// (0x0001b847) list_tmo_note_info_text_pane_ParamLimits

0xee64,	// (0x0001b847) list_tmo_note_info_text_pane

0xeee5,	// (0x0001b8c8) list_tmo_link_pane

0xeef2,	// (0x0001b8d5) scroll_pane_cp20

0xeeff,	// (0x0001b8e2) list_single_tmo_link_pane_ParamLimits

0xeeff,	// (0x0001b8e2) list_single_tmo_link_pane

0xef0f,	// (0x0001b8f2) list_single_tmo_link_pane_t1

0xef1d,	// (0x0001b900) list_tmo_note_info_text_pane_t1_ParamLimits

0xef1d,	// (0x0001b900) list_tmo_note_info_text_pane_t1

0x83f2,	// (0x00014dd5) aid_size_touch_scroll_bar_cp01_ParamLimits

0x83f2,	// (0x00014dd5) aid_size_touch_scroll_bar_cp01

0x82f4,	// (0x00014cd7) aid_size_touch_slider_marker

0x5698,	// (0x0001207b) popup_settings_window_ParamLimits

0x5698,	// (0x0001207b) popup_settings_window

0x8f31,	// (0x00015914) popup_candi_list_indi_window

0x8f81,	// (0x00015964) aid_touch_navi_pane_ParamLimits

0x6d8d,	// (0x00013770) rs_clock_indi_pane

0x6d96,	// (0x00013779) sctrl_sk_bottom_pane_ParamLimits

0x6da7,	// (0x0001378a) sctrl_sk_top_pane_ParamLimits

0x6eaa,	// (0x0001388d) popup_fep_tooltip_window

0xe8d8,	// (0x0001b2bb) aid_size_cell_widget_grid_ParamLimits

0xe945,	// (0x0001b328) cell_ai5_widget_pane_g1_ParamLimits

0xe945,	// (0x0001b328) cell_ai5_widget_pane_g1

0xe999,	// (0x0001b37c) cell_ai5_widget_pane_g6_ParamLimits

0xe9a5,	// (0x0001b388) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3e,	// (0x0001c821) cell_ai5_widget_pane_g_ParamLimits

0xfe3e,	// (0x0001c821) cell_ai5_widget_pane_g

0xead7,	// (0x0001b4ba) cell_ai5_widget_pane_t10_ParamLimits

0xead7,	// (0x0001b4ba) cell_ai5_widget_pane_t10

0xeaf5,	// (0x0001b4d8) grid_ai5_widget_pane_ParamLimits

0xeb8d,	// (0x0001b570) cell_contacts_ai5_widget_pane_ParamLimits

0xeb8d,	// (0x0001b570) cell_contacts_ai5_widget_pane

0xed67,	// (0x0001b74a) popup_discreet_window_t3_ParamLimits

0xed67,	// (0x0001b74a) popup_discreet_window_t3

0x764d,	// (0x00014030) popup_fshwr2_char_preview_window_ParamLimits

0x764d,	// (0x00014030) popup_fshwr2_char_preview_window

0xee82,	// (0x0001b865) tmo_note_info_pane_t1

0xee97,	// (0x0001b87a) tmo_note_info_pane_t2

0xeeac,	// (0x0001b88f) tmo_note_info_pane_t3

0xeec1,	// (0x0001b8a4) tmo_note_info_pane_t4

0xeed3,	// (0x0001b8b6) tmo_note_info_pane_t5

0x0004,

0xfec5,	// (0x0001c8a8) tmo_note_info_pane_t

0xeee5,	// (0x0001b8c8) list_tmo_link_pane_ParamLimits

0xeef2,	// (0x0001b8d5) scroll_pane_cp20_ParamLimits

0x555d,	// (0x00011f40) bg_popup_fep_char_preview_window_cp01

0xef36,	// (0x0001b919) popup_fshwr2_char_preview_window_t1

0xef44,	// (0x0001b927) popup_candi_list_indi_window_g1

0xef4d,	// (0x0001b930) bg_cell_contacts_ai5_widget_pane

0xef59,	// (0x0001b93c) cell_contacts_ai5_widget_pane_g1

0xc7c7,	// (0x000191aa) cell_contacts_ai5_widget_pane_g2

0xef6e,	// (0x0001b951) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed0,	// (0x0001c8b3) cell_contacts_ai5_widget_pane_g

0xef7a,	// (0x0001b95d) cell_contacts_ai5_widget_pane_t1

0x4268,	// (0x00010c4b) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeff1,	// (0x0001b9d4) settings_container_pane

0x8bc4,	// (0x000155a7) listscroll_set_pane_copy1

0xb324,	// (0x00017d07) scroll_pane_cp121_copy1

0x996e,	// (0x00016351) set_content_pane_copy1

0xeffd,	// (0x0001b9e0) aid_height_set_list_copy1_ParamLimits

0xeffd,	// (0x0001b9e0) aid_height_set_list_copy1

0xa8fc,	// (0x000172df) aid_size_parent_copy1_ParamLimits

0xa8fc,	// (0x000172df) aid_size_parent_copy1

0xf009,	// (0x0001b9ec) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf009,	// (0x0001b9ec) button_value_adjust_pane_cp6_copy1

0x8f17,	// (0x000158fa) list_highlight_pane_cp2_copy1_ParamLimits

0x8f17,	// (0x000158fa) list_highlight_pane_cp2_copy1

0xf01d,	// (0x0001ba00) list_set_pane_copy1_ParamLimits

0xf01d,	// (0x0001ba00) list_set_pane_copy1

0xef8c,	// (0x0001b96f) main_pane_set_t1_copy1_ParamLimits

0xef8c,	// (0x0001b96f) main_pane_set_t1_copy1

0xefc6,	// (0x0001b9a9) main_pane_set_t2_copy1_ParamLimits

0xefc6,	// (0x0001b9a9) main_pane_set_t2_copy1

0xf0ca,	// (0x0001baad) main_pane_set_t3_copy1

0xf0d8,	// (0x0001babb) main_pane_set_t4_copy1

0xefe5,	// (0x0001b9c8) set_content_pane_g1_copy1_ParamLimits

0xefe5,	// (0x0001b9c8) set_content_pane_g1_copy1

0xf0e6,	// (0x0001bac9) setting_code_pane_copy1

0xf0ee,	// (0x0001bad1) setting_slider_graphic_pane_copy1

0xf0ee,	// (0x0001bad1) setting_slider_pane_copy1

0xf0ee,	// (0x0001bad1) setting_text_pane_copy1

0xf0ee,	// (0x0001bad1) setting_volume_pane_copy1

0xf0e6,	// (0x0001bac9) settings_code_pane_cp2_copy1

0xf0f6,	// (0x0001bad9) settings_code_pane_cp_copy1_ParamLimits

0xf0f6,	// (0x0001bad9) settings_code_pane_cp_copy1

0x7736,	// (0x00014119) volume_set_pane_copy1

0xf10a,	// (0x0001baed) volume_set_pane_g10_copy1

0xf112,	// (0x0001baf5) volume_set_pane_g1_copy1

0xf11a,	// (0x0001bafd) volume_set_pane_g2_copy1

0xf122,	// (0x0001bb05) volume_set_pane_g3_copy1

0xf12a,	// (0x0001bb0d) volume_set_pane_g4_copy1

0xf132,	// (0x0001bb15) volume_set_pane_g5_copy1

0xf13a,	// (0x0001bb1d) volume_set_pane_g6_copy1

0xf142,	// (0x0001bb25) volume_set_pane_g7_copy1

0xf14a,	// (0x0001bb2d) volume_set_pane_g8_copy1

0xf152,	// (0x0001bb35) volume_set_pane_g9_copy1

0x3e26,	// (0x00010809) bg_set_opt_pane_cp_copy1_ParamLimits

0x3e26,	// (0x00010809) bg_set_opt_pane_cp_copy1

0x773e,	// (0x00014121) setting_slider_pane_t1_copy1_ParamLimits

0x773e,	// (0x00014121) setting_slider_pane_t1_copy1

0x775c,	// (0x0001413f) setting_slider_pane_t2_copy1_ParamLimits

0x775c,	// (0x0001413f) setting_slider_pane_t2_copy1

0x7776,	// (0x00014159) setting_slider_pane_t3_copy1_ParamLimits

0x7776,	// (0x00014159) setting_slider_pane_t3_copy1

0x778e,	// (0x00014171) slider_set_pane_copy1_ParamLimits

0x778e,	// (0x00014171) slider_set_pane_copy1

0x4322,	// (0x00010d05) set_opt_bg_pane_g1_copy2

0x432a,	// (0x00010d0d) set_opt_bg_pane_g2_copy2

0xf15a,	// (0x0001bb3d) set_opt_bg_pane_g3_copy2

0x433a,	// (0x00010d1d) set_opt_bg_pane_g4_copy2

0x4342,	// (0x00010d25) set_opt_bg_pane_g5_copy2

0x434a,	// (0x00010d2d) set_opt_bg_pane_g6_copy2

0xf164,	// (0x0001bb47) set_opt_bg_pane_g7_copy2

0xf16c,	// (0x0001bb4f) set_opt_bg_pane_g8_copy2

0xf176,	// (0x0001bb59) set_opt_bg_pane_g9_copy2

0x77a4,	// (0x00014187) aid_size_touch_slider_mark_copy1_ParamLimits

0x77a4,	// (0x00014187) aid_size_touch_slider_mark_copy1

0xf180,	// (0x0001bb63) slider_set_pane_g1_copy1

0x77b8,	// (0x0001419b) slider_set_pane_g2_copy1

0x677a,	// (0x0001315d) slider_set_pane_g3_copy1_ParamLimits

0x677a,	// (0x0001315d) slider_set_pane_g3_copy1

0x678e,	// (0x00013171) slider_set_pane_g4_copy1_ParamLimits

0x678e,	// (0x00013171) slider_set_pane_g4_copy1

0x67a6,	// (0x00013189) slider_set_pane_g5_copy1_ParamLimits

0x67a6,	// (0x00013189) slider_set_pane_g5_copy1

0x677a,	// (0x0001315d) slider_set_pane_g6_copy1_ParamLimits

0x677a,	// (0x0001315d) slider_set_pane_g6_copy1

0x77c0,	// (0x000141a3) slider_set_pane_g7_copy1_ParamLimits

0x77c0,	// (0x000141a3) slider_set_pane_g7_copy1

0x3daa,	// (0x0001078d) bg_set_opt_pane_cp2_copy1

0xf189,	// (0x0001bb6c) setting_slider_graphic_pane_g1_copy1

0xf192,	// (0x0001bb75) setting_slider_graphic_pane_t1_copy1

0xf1a2,	// (0x0001bb85) setting_slider_graphic_pane_t2_copy1

0xf1b2,	// (0x0001bb95) slider_set_pane_cp_copy1

0xf1c2,	// (0x0001bba5) input_focus_pane_cp1_copy1

0xf1cb,	// (0x0001bbae) list_set_text_pane_copy1

0xf1d3,	// (0x0001bbb6) setting_text_pane_g1_copy1

0xf1dc,	// (0x0001bbbf) set_text_pane_t1_copy1

0xf1c2,	// (0x0001bba5) input_focus_pane_cp2_copy1

0xf1d3,	// (0x0001bbb6) setting_code_pane_g1_copy1

0xf1f7,	// (0x0001bbda) setting_code_pane_t1_copy1

0xf205,	// (0x0001bbe8) list_set_graphic_pane_copy1

0x3daa,	// (0x0001078d) bg_set_opt_pane_cp4_copy1

0x88cf,	// (0x000152b2) list_set_graphic_pane_g1_copy1_ParamLimits

0x88cf,	// (0x000152b2) list_set_graphic_pane_g1_copy1

0xf219,	// (0x0001bbfc) list_set_graphic_pane_g2_copy1

0x88e7,	// (0x000152ca) list_set_graphic_pane_t1_copy1_ParamLimits

0x88e7,	// (0x000152ca) list_set_graphic_pane_t1_copy1

0xbf51,	// (0x00018934) rs_clock_indi_pane_g1

0xf221,	// (0x0001bc04) rs_clock_indi_pane_t1

0xf22f,	// (0x0001bc12) rs_indi_pane

0xf237,	// (0x0001bc1a) rs_indi_pane_g1

0xf240,	// (0x0001bc23) rs_indi_pane_g2

0xef44,	// (0x0001b927) rs_indi_pane_g3

0x0002,

0xfed7,	// (0x0001c8ba) rs_indi_pane_g

0x8bc4,	// (0x000155a7) bg_popup_preview_window_pane_cp03

0xf249,	// (0x0001bc2c) popup_fep_tooltip_window_t1

0xce08,	// (0x000197eb) popup_note2_window_g2_ParamLimits

0xce08,	// (0x000197eb) popup_note2_window_g2

0x0001,

0xfc77,	// (0x0001c65a) popup_note2_window_g_ParamLimits

0xfc77,	// (0x0001c65a) popup_note2_window_g

0xd405,	// (0x00019de8) bg_popup_sub_pane_cp11_ParamLimits

0xd412,	// (0x00019df5) cell_ai3_links_pane_g1_ParamLimits

0xd429,	// (0x00019e0c) cell_ai3_links_pane_t1

0xf1dc,	// (0x0001bbbf) set_text_pane_t1_copy1_ParamLimits

0x8ad5,	// (0x000154b8) cell_graphic_popup_pane_cp2_ParamLimits

0x8ad5,	// (0x000154b8) cell_graphic_popup_pane_cp2

0xf257,	// (0x0001bc3a) cell_graphic_popup_pane_g1_cp2

0x40c0,	// (0x00010aa3) cell_graphic_popup_pane_g2_cp2

0xf25f,	// (0x0001bc42) cell_graphic_popup_pane_g3_cp2

0xf267,	// (0x0001bc4a) cell_graphic_popup_pane_t2_cp2

0x40d1,	// (0x00010ab4) grid_highlight_pane_cp3_cp2

0x471a,	// (0x000110fd) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x4268,	// (0x00010c4b) main_tmo_pane_ParamLimits

0xd7be,	// (0x0001a1a1) popup_tmo_big_image_note_window

0xe934,	// (0x0001b317) cell_ai5_widget_list_pane

0xe93c,	// (0x0001b31f) cell_ai5_widget_lrg_icon_pane

0xee82,	// (0x0001b865) tmo_note_info_pane_t1_ParamLimits

0xee97,	// (0x0001b87a) tmo_note_info_pane_t2_ParamLimits

0xeeac,	// (0x0001b88f) tmo_note_info_pane_t3_ParamLimits

0xeec1,	// (0x0001b8a4) tmo_note_info_pane_t4_ParamLimits

0xeed3,	// (0x0001b8b6) tmo_note_info_pane_t5_ParamLimits

0xfec5,	// (0x0001c8a8) tmo_note_info_pane_t_ParamLimits

0xeff1,	// (0x0001b9d4) settings_container_pane_ParamLimits

0xf1ba,	// (0x0001bb9d) indicator_popup_pane_cp5

0xf1ba,	// (0x0001bb9d) indicator_popup_pane_cp6

0xf205,	// (0x0001bbe8) list_set_graphic_pane_copy1_ParamLimits

0x3c27,	// (0x0001060a) bg_popup_window_pane_cp23

0xf275,	// (0x0001bc58) popup_tmo_big_image_note_window_g1

0xf27e,	// (0x0001bc61) popup_tmo_big_image_note_window_t1

0xf28e,	// (0x0001bc71) popup_tmo_big_image_note_window_t2

0xf29e,	// (0x0001bc81) popup_tmo_big_image_note_window_t3

0x0002,

0xfede,	// (0x0001c8c1) popup_tmo_big_image_note_window_t

0xbf51,	// (0x00018934) cell_ai5_widget_lrg_icon_pane_g1

0xf2ae,	// (0x0001bc91) cell_ai5_widget_lrg_icon_pane_t1

0xf2bc,	// (0x0001bc9f) cell_ai5_widget_list_row_pane_ParamLimits

0xf2bc,	// (0x0001bc9f) cell_ai5_widget_list_row_pane

0xf2d3,	// (0x0001bcb6) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2d3,	// (0x0001bcb6) cell_ai5_widget_list_row_pane_g1

0xf2e0,	// (0x0001bcc3) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2e0,	// (0x0001bcc3) cell_ai5_widget_list_row_pane_t1

0xf30b,	// (0x0001bcee) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf30b,	// (0x0001bcee) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee5,	// (0x0001c8c8) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee5,	// (0x0001c8c8) cell_ai5_widget_list_row_pane_t

0x555d,	// (0x00011f40) main_fep_vtchi_ss_pane

0xf34f,	// (0x0001bd32) popup_fep_char_pre_window

0xf357,	// (0x0001bd3a) popup_fep_ituss_window

0xf378,	// (0x0001bd5b) popup_fep_vkbss_window

0xf3a2,	// (0x0001bd85) grid_vkbss_keypad_pane_ParamLimits

0xf3a2,	// (0x0001bd85) grid_vkbss_keypad_pane

0xf3b2,	// (0x0001bd95) ituss_keypad_pane

0x77e2,	// (0x000141c5) aid_vkbss_key_offset_ParamLimits

0x77e2,	// (0x000141c5) aid_vkbss_key_offset

0x77ee,	// (0x000141d1) cell_vkbss_key_pane_ParamLimits

0x77ee,	// (0x000141d1) cell_vkbss_key_pane

0x9298,	// (0x00015c7b) bg_cell_vkbss_key_g1_ParamLimits

0x9298,	// (0x00015c7b) bg_cell_vkbss_key_g1

0xf3c1,	// (0x0001bda4) cell_vkbss_key_3p_pane_ParamLimits

0xf3c1,	// (0x0001bda4) cell_vkbss_key_3p_pane

0xf3d5,	// (0x0001bdb8) cell_vkbss_key_g1_ParamLimits

0xf3d5,	// (0x0001bdb8) cell_vkbss_key_g1

0xf3e9,	// (0x0001bdcc) cell_vkbss_key_t1_ParamLimits

0xf3e9,	// (0x0001bdcc) cell_vkbss_key_t1

0x7804,	// (0x000141e7) cell_ituss_key_pane_ParamLimits

0x7804,	// (0x000141e7) cell_ituss_key_pane

0xf414,	// (0x0001bdf7) bg_cell_ituss_key_g1_ParamLimits

0xf414,	// (0x0001bdf7) bg_cell_ituss_key_g1

0xf420,	// (0x0001be03) cell_ituss_key_pane_g1_ParamLimits

0xf420,	// (0x0001be03) cell_ituss_key_pane_g1

0x7815,	// (0x000141f8) cell_ituss_key_pane_g2_ParamLimits

0x7815,	// (0x000141f8) cell_ituss_key_pane_g2

0x0002,

0xfeec,	// (0x0001c8cf) cell_ituss_key_pane_g_ParamLimits

0xfeec,	// (0x0001c8cf) cell_ituss_key_pane_g

0x7841,	// (0x00014224) cell_ituss_key_t1_ParamLimits

0x7841,	// (0x00014224) cell_ituss_key_t1

0x787b,	// (0x0001425e) cell_ituss_key_t2_ParamLimits

0x787b,	// (0x0001425e) cell_ituss_key_t2

0x78ac,	// (0x0001428f) cell_ituss_key_t3_ParamLimits

0x78ac,	// (0x0001428f) cell_ituss_key_t3

0x787b,	// (0x0001425e) cell_ituss_key_t4_ParamLimits

0x787b,	// (0x0001425e) cell_ituss_key_t4

0x0004,

0xfef3,	// (0x0001c8d6) cell_ituss_key_t_ParamLimits

0xfef3,	// (0x0001c8d6) cell_ituss_key_t

0xf446,	// (0x0001be29) cell_vkbss_key_3p_pane_g1

0xf44e,	// (0x0001be31) cell_vkbss_key_3p_pane_g2

0xf456,	// (0x0001be39) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefe,	// (0x0001c8e1) cell_vkbss_key_3p_pane_g

0x555d,	// (0x00011f40) bg_popup_fep_char_preview_window_cp02

0x78ef,	// (0x000142d2) popup_fep_char_pre_window_t1

0xe8ce,	// (0x0001b2b1) main_ai5_sk_pane

0xef4d,	// (0x0001b930) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef59,	// (0x0001b93c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc7c7,	// (0x000191aa) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef6e,	// (0x0001b951) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed0,	// (0x0001c8b3) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef7a,	// (0x0001b95d) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x4268,	// (0x00010c4b) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf45e,	// (0x0001be41) main_ai5_sk_pane_g1

0x99f6,	// (0x000163d9) popup_query_code_window_g1

0xf36d,	// (0x0001bd50) popup_fep_vkb_icf_pane

0xf38c,	// (0x0001bd6f) popup_fep_vtchi_icf_pane

0xf467,	// (0x0001be4a) bg_icf_pane

0xf473,	// (0x0001be56) list_vkb_icf_pane

0xf482,	// (0x0001be65) bg_icf_pane_cp01

0xf495,	// (0x0001be78) vtchi_icf_list_pane

0xf4a5,	// (0x0001be88) list_vkb_icf_pane_t1_ParamLimits

0xf4a5,	// (0x0001be88) list_vkb_icf_pane_t1

0xf4bc,	// (0x0001be9f) vtchi_icf_list_pane_t1_ParamLimits

0xf4bc,	// (0x0001be9f) vtchi_icf_list_pane_t1

0xf357,	// (0x0001bd3a) popup_fep_ituss_window_ParamLimits

0xf38c,	// (0x0001bd6f) popup_fep_vtchi_icf_pane_ParamLimits

0xf3b2,	// (0x0001bd95) ituss_keypad_pane_ParamLimits

0x77d6,	// (0x000141b9) ituss_sks_pane

0xf467,	// (0x0001be4a) bg_icf_pane_ParamLimits

0xf333,	// (0x0001bd16) icf_edit_indi_pane_ParamLimits

0xf333,	// (0x0001bd16) icf_edit_indi_pane

0xf473,	// (0x0001be56) list_vkb_icf_pane_ParamLimits

0xf482,	// (0x0001be65) bg_icf_pane_cp01_ParamLimits

0xf342,	// (0x0001bd25) icf_edit_indi_pane_cp01_ParamLimits

0xf342,	// (0x0001bd25) icf_edit_indi_pane_cp01

0xf49d,	// (0x0001be80) vtchi_query_pane

0xc1c1,	// (0x00018ba4) icf_edit_indi_pane_g1_ParamLimits

0xc1c1,	// (0x00018ba4) icf_edit_indi_pane_g1

0xf531,	// (0x0001bf14) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x0001bf14) icf_edit_indi_pane_g2

0x0001,

0xff16,	// (0x0001c8f9) icf_edit_indi_pane_g_ParamLimits

0xff16,	// (0x0001c8f9) icf_edit_indi_pane_g

0xf540,	// (0x0001bf23) icf_edit_indi_pane_t1

0xf4da,	// (0x0001bebd) bg_input_focus_pane_cp042

0x4134,	// (0x00010b17) vtchi_button_pane

0xf4e3,	// (0x0001bec6) vtchi_query_pane_t1

0xf4f1,	// (0x0001bed4) vtchi_query_pane_t2

0xf4ff,	// (0x0001bee2) vtchi_query_pane_t3

0x0002,

0xff05,	// (0x0001c8e8) vtchi_query_pane_t

0x555d,	// (0x00011f40) bg_button_pane_cp13

0xf50d,	// (0x0001bef0) vtchi_button_pane_g1

0x78fe,	// (0x000142e1) ituss_sks_pane_g1

0x7909,	// (0x000142ec) ituss_sks_pane_g2

0x0001,

0xff0c,	// (0x0001c8ef) ituss_sks_pane_g

0xf515,	// (0x0001bef8) ituss_sks_pane_t1

0xf523,	// (0x0001bf06) ituss_sks_pane_t2

0x0001,

0xff11,	// (0x0001c8f4) ituss_sks_pane_t

0xb981,	// (0x00018364) indicator_nsta_pane_cp_g1

0xb989,	// (0x0001836c) indicator_nsta_pane_cp_g2

0xb991,	// (0x00018374) indicator_nsta_pane_cp_g3

0xb981,	// (0x00018364) indicator_nsta_pane_cp_g4

0xb989,	// (0x0001836c) indicator_nsta_pane_cp_g5

0xb991,	// (0x00018374) indicator_nsta_pane_cp_g6

0x0005,

0xfab5,	// (0x0001c498) indicator_nsta_pane_cp_g

0xe4af,	// (0x0001ae92) cell_graphic2_pane_t2_ParamLimits

0xe4af,	// (0x0001ae92) cell_graphic2_pane_t2

0x0001,

0xfdc7,	// (0x0001c7aa) cell_graphic2_pane_t_ParamLimits

0xfdc7,	// (0x0001c7aa) cell_graphic2_pane_t

0xe4dc,	// (0x0001aebf) cell_graphic2_control_pane_t1

0x865a,	// (0x0001503d) signal_pane_g3_ParamLimits

0x865a,	// (0x0001503d) signal_pane_g3

0x866c,	// (0x0001504f) signal_pane_g4_ParamLimits

0x866c,	// (0x0001504f) signal_pane_g4

0xf31d,	// (0x0001bd00) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf31d,	// (0x0001bd00) cell_ai5_widget_list_row_pane_t3

0xf434,	// (0x0001be17) cell_ituss_key_pane_t1_ParamLimits

0xf434,	// (0x0001be17) cell_ituss_key_pane_t1

0x95fc,	// (0x00015fdf) form_field_data_wide_pane_vc_t2_ParamLimits

0x95fc,	// (0x00015fdf) form_field_data_wide_pane_vc_t2

0x9610,	// (0x00015ff3) form_field_data_wide_pane_vc_t3_ParamLimits

0x9610,	// (0x00015ff3) form_field_data_wide_pane_vc_t3

0x0002,

0xf7fa,	// (0x0001c1dd) form_field_data_wide_pane_vc_t_ParamLimits

0xf7fa,	// (0x0001c1dd) form_field_data_wide_pane_vc_t

0xb649,	// (0x0001802c) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb649,	// (0x0001802c) form_field_slider_wide_pane_vc_t3

0xb727,	// (0x0001810a) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb727,	// (0x0001810a) form_field_popup_wide_pane_vc_t2

0xb73e,	// (0x00018121) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb73e,	// (0x00018121) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa4,	// (0x0001c487) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa4,	// (0x0001c487) form_field_popup_wide_pane_vc_t

0x75e0,	// (0x00013fc3) aid_fshwr2_btn_pane_ParamLimits

0x75ec,	// (0x00013fcf) aid_fshwr2_syb_pane_ParamLimits

0x75fd,	// (0x00013fe0) aid_fshwr2_txt_pane_ParamLimits

0x6e32,	// (0x00013815) fshwr2_bg_pane_ParamLimits

0x7609,	// (0x00013fec) fshwr2_func_candi_pane_ParamLimits

0x7621,	// (0x00014004) fshwr2_hwr_syb_pane_ParamLimits

0x7638,	// (0x0001401b) fshwr2_icf_pane_ParamLimits

0xb5ba,	// (0x00017f9d) list_double_graphic_pane_vc_g4_ParamLimits

0xb5ba,	// (0x00017f9d) list_double_graphic_pane_vc_g4

0x7835,	// (0x00014218) cell_ituss_key_pane_g3_ParamLimits

0x7835,	// (0x00014218) cell_ituss_key_pane_g3

0x78dd,	// (0x000142c0) cell_ituss_key_t5_ParamLimits

0x78dd,	// (0x000142c0) cell_ituss_key_t5

0xf378,	// (0x0001bd5b) popup_fep_vkbss_window_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal
