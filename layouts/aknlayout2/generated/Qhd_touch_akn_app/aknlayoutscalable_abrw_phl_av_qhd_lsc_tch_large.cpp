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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0004e929 };

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
0xb4a2,	// (0x00059dcb) Screen

0xb4ae,	// (0x00059dd7) application_window_ParamLimits

0xb4ae,	// (0x00059dd7) application_window

0x2d46,	// (0x0005166f) screen_g1

0xb4e6,	// (0x00059e0f) area_bottom_pane_ParamLimits

0xb4e6,	// (0x00059e0f) area_bottom_pane

0x026a,	// (0x0004eb93) area_top_pane_ParamLimits

0x026a,	// (0x0004eb93) area_top_pane

0x0308,	// (0x0004ec31) main_pane_ParamLimits

0x0308,	// (0x0004ec31) main_pane

0x2d50,	// (0x00051679) misc_graphics

0xd3e4,	// (0x0005bd0d) battery_pane_ParamLimits

0xd3e4,	// (0x0005bd0d) battery_pane

0x59a7,	// (0x000542d0) bg_status_flat_pane_g8

0x59af,	// (0x000542d8) bg_status_flat_pane_g9

0x4d4a,	// (0x00053673) context_pane_ParamLimits

0x4d4a,	// (0x00053673) context_pane

0xd54f,	// (0x0005be78) navi_pane_ParamLimits

0xd54f,	// (0x0005be78) navi_pane

0xd5c6,	// (0x0005beef) signal_pane_ParamLimits

0xd5c6,	// (0x0005beef) signal_pane

0x0008,

0xf879,	// (0x0005e1a2) bg_status_flat_pane_g

0xd656,	// (0x0005bf7f) status_pane_g1_ParamLimits

0xd656,	// (0x0005bf7f) status_pane_g1

0xd66c,	// (0x0005bf95) status_pane_g2_ParamLimits

0xd66c,	// (0x0005bf95) status_pane_g2

0x4f6a,	// (0x00053893) status_pane_g3_ParamLimits

0x4f6a,	// (0x00053893) status_pane_g3

0x0004,

0xf7b3,	// (0x0005e0dc) status_pane_g_ParamLimits

0xf7b3,	// (0x0005e0dc) status_pane_g

0xd678,	// (0x0005bfa1) title_pane_ParamLimits

0xd678,	// (0x0005bfa1) title_pane

0xd6d9,	// (0x0005c002) uni_indicator_pane_ParamLimits

0xd6d9,	// (0x0005c002) uni_indicator_pane

0x4619,	// (0x00052f42) bg_list_pane_ParamLimits

0x4619,	// (0x00052f42) bg_list_pane

0xcc37,	// (0x0005b560) find_pane

0xcc3f,	// (0x0005b568) listscroll_app_pane_ParamLimits

0xcc3f,	// (0x0005b568) listscroll_app_pane

0x4645,	// (0x00052f6e) listscroll_form_pane

0xcc4b,	// (0x0005b574) listscroll_gen_pane_ParamLimits

0xcc4b,	// (0x0005b574) listscroll_gen_pane

0x4645,	// (0x00052f6e) listscroll_set_pane

0x6544,	// (0x00054e6d) main_idle_act_pane

0x42df,	// (0x00052c08) main_idle_trad_pane

0x42df,	// (0x00052c08) main_list_empty_pane

0x465f,	// (0x00052f88) main_midp_pane

0x466b,	// (0x00052f94) main_pane_g1_ParamLimits

0x466b,	// (0x00052f94) main_pane_g1

0xcc5f,	// (0x0005b588) popup_ai_message_window_ParamLimits

0xcc5f,	// (0x0005b588) popup_ai_message_window

0xcd79,	// (0x0005b6a2) popup_fep_china_uni_window_ParamLimits

0xcd79,	// (0x0005b6a2) popup_fep_china_uni_window

0x4777,	// (0x000530a0) popup_fep_japan_candidate_window_ParamLimits

0x4777,	// (0x000530a0) popup_fep_japan_candidate_window

0x4797,	// (0x000530c0) popup_fep_japan_predictive_window_ParamLimits

0x4797,	// (0x000530c0) popup_fep_japan_predictive_window

0xcdd5,	// (0x0005b6fe) popup_find_window

0xcdf2,	// (0x0005b71b) popup_grid_graphic_window_ParamLimits

0xcdf2,	// (0x0005b71b) popup_grid_graphic_window

0x47fc,	// (0x00053125) popup_large_graphic_colour_window

0xce8a,	// (0x0005b7b3) popup_menu_window_ParamLimits

0xce8a,	// (0x0005b7b3) popup_menu_window

0xd044,	// (0x0005b96d) popup_note_image_window

0xd00a,	// (0x0005b933) popup_note_wait_window_ParamLimits

0xd00a,	// (0x0005b933) popup_note_wait_window

0xd05c,	// (0x0005b985) popup_note_window_ParamLimits

0xd05c,	// (0x0005b985) popup_note_window

0xd102,	// (0x0005ba2b) popup_query_code_window_ParamLimits

0xd102,	// (0x0005ba2b) popup_query_code_window

0x4a44,	// (0x0005336d) popup_query_data_code_window_ParamLimits

0x4a44,	// (0x0005336d) popup_query_data_code_window

0xd13c,	// (0x0005ba65) popup_query_data_window_ParamLimits

0xd13c,	// (0x0005ba65) popup_query_data_window

0xd1b2,	// (0x0005badb) popup_query_sat_info_window_ParamLimits

0xd1b2,	// (0x0005badb) popup_query_sat_info_window

0xd249,	// (0x0005bb72) popup_snote_single_graphic_window_ParamLimits

0xd249,	// (0x0005bb72) popup_snote_single_graphic_window

0xd249,	// (0x0005bb72) popup_snote_single_text_window_ParamLimits

0xd249,	// (0x0005bb72) popup_snote_single_text_window

0x4acb,	// (0x000533f4) popup_sub_window_general

0x4bfb,	// (0x00053524) popup_window_general_ParamLimits

0x4bfb,	// (0x00053524) popup_window_general

0x4c10,	// (0x00053539) power_save_pane

0xbbfa,	// (0x0005a523) control_pane_g1_ParamLimits

0xbbfa,	// (0x0005a523) control_pane_g1

0x11b4,	// (0x0004fadd) control_pane_g2_ParamLimits

0x11b4,	// (0x0004fadd) control_pane_g2

0x45ca,	// (0x00052ef3) control_pane_g3_ParamLimits

0x45ca,	// (0x00052ef3) control_pane_g3

0x0007,

0xf79b,	// (0x0005e0c4) control_pane_g_ParamLimits

0xf79b,	// (0x0005e0c4) control_pane_g

0xbc39,	// (0x0005a562) control_pane_t1_ParamLimits

0xbc39,	// (0x0005a562) control_pane_t1

0xbc97,	// (0x0005a5c0) control_pane_t2_ParamLimits

0xbc97,	// (0x0005a5c0) control_pane_t2

0x0002,

0xf7ac,	// (0x0005e0d5) control_pane_t_ParamLimits

0xf7ac,	// (0x0005e0d5) control_pane_t

0x44eb,	// (0x00052e14) navi_navi_volume_pane_cp1

0x44f4,	// (0x00052e1d) status_small_icon_pane

0x44fc,	// (0x00052e25) status_small_pane_g1_ParamLimits

0x44fc,	// (0x00052e25) status_small_pane_g1

0x4530,	// (0x00052e59) status_small_pane_g2_ParamLimits

0x4530,	// (0x00052e59) status_small_pane_g2

0x453c,	// (0x00052e65) status_small_pane_g3_ParamLimits

0x453c,	// (0x00052e65) status_small_pane_g3

0x4548,	// (0x00052e71) status_small_pane_g4_ParamLimits

0x4548,	// (0x00052e71) status_small_pane_g4

0x4554,	// (0x00052e7d) status_small_pane_g5_ParamLimits

0x4554,	// (0x00052e7d) status_small_pane_g5

0x4563,	// (0x00052e8c) status_small_pane_g6_ParamLimits

0x4563,	// (0x00052e8c) status_small_pane_g6

0x0007,

0xf78a,	// (0x0005e0b3) status_small_pane_g_ParamLimits

0xf78a,	// (0x0005e0b3) status_small_pane_g

0x4593,	// (0x00052ebc) status_small_pane_t1

0x45b6,	// (0x00052edf) status_small_wait_pane_ParamLimits

0x45b6,	// (0x00052edf) status_small_wait_pane

0xca6f,	// (0x0005b398) aid_levels_signal_ParamLimits

0xca6f,	// (0x0005b398) aid_levels_signal

0xca87,	// (0x0005b3b0) signal_pane_g1_ParamLimits

0xca87,	// (0x0005b3b0) signal_pane_g1

0xcaa2,	// (0x0005b3cb) signal_pane_g2_ParamLimits

0xcaa2,	// (0x0005b3cb) signal_pane_g2

0x0001,

0xf71f,	// (0x0005e048) signal_pane_g_ParamLimits

0xf71f,	// (0x0005e048) signal_pane_g

0x3dca,	// (0x000526f3) context_pane_g1

0xc522,	// (0x0005ae4b) title_pane_g1

0xc557,	// (0x0005ae80) title_pane_t1

0x2df8,	// (0x00051721) title_pane_t2

0x2e1e,	// (0x00051747) title_pane_t3

0x0002,

0xf573,	// (0x0005de9c) title_pane_t

0xd701,	// (0x0005c02a) aid_levels_battery_ParamLimits

0xd701,	// (0x0005c02a) aid_levels_battery

0xd71d,	// (0x0005c046) battery_pane_g1_ParamLimits

0xd71d,	// (0x0005c046) battery_pane_g1

0xd73a,	// (0x0005c063) battery_pane_g2_ParamLimits

0xd73a,	// (0x0005c063) battery_pane_g2

0x0001,

0xf7be,	// (0x0005e0e7) battery_pane_g_ParamLimits

0xf7be,	// (0x0005e0e7) battery_pane_g

0xd93f,	// (0x0005c268) uni_indicator_pane_g1

0xd954,	// (0x0005c27d) uni_indicator_pane_g2

0xd969,	// (0x0005c292) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0005e24a) uni_indicator_pane_g

0x415d,	// (0x00052a86) navi_icon_pane_ParamLimits

0x415d,	// (0x00052a86) navi_icon_pane

0x40a6,	// (0x000529cf) navi_midp_pane

0x4179,	// (0x00052aa2) navi_navi_pane

0x4183,	// (0x00052aac) navi_text_pane_ParamLimits

0x4183,	// (0x00052aac) navi_text_pane

0x2d46,	// (0x0005166f) status_small_wait_pane_g1

0x324d,	// (0x00051b76) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0005e245) status_small_wait_pane_g

0x6008,	// (0x00054931) navi_navi_icon_text_pane

0x6010,	// (0x00054939) navi_navi_pane_g1_ParamLimits

0x6010,	// (0x00054939) navi_navi_pane_g1

0x6022,	// (0x0005494b) navi_navi_pane_g2_ParamLimits

0x6022,	// (0x0005494b) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0005e213) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0005e213) navi_navi_pane_g

0x6034,	// (0x0005495d) navi_navi_tabs_pane

0x603d,	// (0x00054966) navi_navi_text_pane

0x6008,	// (0x00054931) navi_navi_volume_pane

0xd900,	// (0x0005c229) navi_text_pane_t1

0xd8f4,	// (0x0005c21d) navi_icon_pane_g1

0x5f34,	// (0x0005485d) navi_navi_text_pane_t1

0xbefc,	// (0x0005a825) navi_navi_volume_pane_g1

0xbf04,	// (0x0005a82d) volume_small_pane

0xd850,	// (0x0005c179) navi_navi_icon_text_pane_g1

0xd858,	// (0x0005c181) navi_navi_icon_text_pane_t1

0x4179,	// (0x00052aa2) navi_tabs_2_long_pane

0x4179,	// (0x00052aa2) navi_tabs_2_pane

0x4179,	// (0x00052aa2) navi_tabs_3_long_pane

0x4179,	// (0x00052aa2) navi_tabs_3_pane

0x4179,	// (0x00052aa2) navi_tabs_4_pane

0xbedc,	// (0x0005a805) tabs_2_active_pane_ParamLimits

0xbedc,	// (0x0005a805) tabs_2_active_pane

0xbeec,	// (0x0005a815) tabs_2_passive_pane_ParamLimits

0xbeec,	// (0x0005a815) tabs_2_passive_pane

0xbeaa,	// (0x0005a7d3) tabs_3_active_pane_ParamLimits

0xbeaa,	// (0x0005a7d3) tabs_3_active_pane

0xbeba,	// (0x0005a7e3) tabs_3_passive_pane_ParamLimits

0xbeba,	// (0x0005a7e3) tabs_3_passive_pane

0xbecb,	// (0x0005a7f4) tabs_3_passive_pane_cp_ParamLimits

0xbecb,	// (0x0005a7f4) tabs_3_passive_pane_cp

0xbe66,	// (0x0005a78f) tabs_4_active_pane_ParamLimits

0xbe66,	// (0x0005a78f) tabs_4_active_pane

0xbe77,	// (0x0005a7a0) tabs_4_passive_pane_ParamLimits

0xbe77,	// (0x0005a7a0) tabs_4_passive_pane

0xbe88,	// (0x0005a7b1) tabs_4_passive_pane_cp_ParamLimits

0xbe88,	// (0x0005a7b1) tabs_4_passive_pane_cp

0xbe99,	// (0x0005a7c2) tabs_4_passive_pane_cp2_ParamLimits

0xbe99,	// (0x0005a7c2) tabs_4_passive_pane_cp2

0xbe46,	// (0x0005a76f) tabs_2_long_active_pane_ParamLimits

0xbe46,	// (0x0005a76f) tabs_2_long_active_pane

0xbe56,	// (0x0005a77f) tabs_2_long_passive_pane_ParamLimits

0xbe56,	// (0x0005a77f) tabs_2_long_passive_pane

0xbe13,	// (0x0005a73c) tabs_3_long_active_pane_ParamLimits

0xbe13,	// (0x0005a73c) tabs_3_long_active_pane

0xbe24,	// (0x0005a74d) tabs_3_long_passive_pane_ParamLimits

0xbe24,	// (0x0005a74d) tabs_3_long_passive_pane

0xbe35,	// (0x0005a75e) tabs_3_long_passive_pane_cp_ParamLimits

0xbe35,	// (0x0005a75e) tabs_3_long_passive_pane_cp

0x1424,	// (0x0004fd4d) volume_small_pane_g1

0xbdc2,	// (0x0005a6eb) volume_small_pane_g2

0xbdcb,	// (0x0005a6f4) volume_small_pane_g3

0xbdd4,	// (0x0005a6fd) volume_small_pane_g4

0xbddd,	// (0x0005a706) volume_small_pane_g5

0xbde6,	// (0x0005a70f) volume_small_pane_g6

0xbdef,	// (0x0005a718) volume_small_pane_g7

0xbdf8,	// (0x0005a721) volume_small_pane_g8

0xbe01,	// (0x0005a72a) volume_small_pane_g9

0xbe0a,	// (0x0005a733) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0005e1df) volume_small_pane_g

0x30ab,	// (0x000519d4) bg_active_tab_pane_cp2_ParamLimits

0x30ab,	// (0x000519d4) bg_active_tab_pane_cp2

0xc5e3,	// (0x0005af0c) tabs_3_active_pane_g1

0xc5eb,	// (0x0005af14) tabs_3_active_pane_t1

0x30ab,	// (0x000519d4) bg_passive_tab_pane_cp2_ParamLimits

0x30ab,	// (0x000519d4) bg_passive_tab_pane_cp2

0xc5e3,	// (0x0005af0c) tabs_3_passive_pane_g1

0xc5eb,	// (0x0005af14) tabs_3_passive_pane_t1

0x30ab,	// (0x000519d4) bg_active_tab_pane_cp3_ParamLimits

0x30ab,	// (0x000519d4) bg_active_tab_pane_cp3

0xc5fd,	// (0x0005af26) tabs_4_active_pane_g1

0xc605,	// (0x0005af2e) tabs_4_active_pane_t1

0x30ab,	// (0x000519d4) bg_passive_tab_pane_cp3_ParamLimits

0x30ab,	// (0x000519d4) bg_passive_tab_pane_cp3

0xc5fd,	// (0x0005af26) tabs_4_1_passive_pane_g1

0xc605,	// (0x0005af2e) tabs_4_1_passive_pane_t1

0x465f,	// (0x00052f88) list_highlight_pane_cp2

0xd9f2,	// (0x0005c31b) list_set_pane_ParamLimits

0xd9f2,	// (0x0005c31b) list_set_pane

0xda8c,	// (0x0005c3b5) main_pane_set_t1_ParamLimits

0xda8c,	// (0x0005c3b5) main_pane_set_t1

0xdaac,	// (0x0005c3d5) main_pane_set_t2_ParamLimits

0xdaac,	// (0x0005c3d5) main_pane_set_t2

0xdac0,	// (0x0005c3e9) main_pane_set_t3_ParamLimits

0xdac0,	// (0x0005c3e9) main_pane_set_t3

0xdad2,	// (0x0005c3fb) main_pane_set_t4_ParamLimits

0xdad2,	// (0x0005c3fb) main_pane_set_t4

0x0003,

0xf986,	// (0x0005e2af) main_pane_set_t_ParamLimits

0xf986,	// (0x0005e2af) main_pane_set_t

0xdae4,	// (0x0005c40d) setting_code_pane

0xdaee,	// (0x0005c417) setting_slider_graphic_pane

0xdaee,	// (0x0005c417) setting_slider_pane

0xdaee,	// (0x0005c417) setting_text_pane

0xdaee,	// (0x0005c417) setting_volume_pane

0x054d,	// (0x0004ee76) volume_set_pane

0x2e30,	// (0x00051759) bg_set_opt_pane_cp

0x0555,	// (0x0004ee7e) setting_slider_pane_t1

0x056e,	// (0x0004ee97) setting_slider_pane_t2

0x0588,	// (0x0004eeb1) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0005dea3) setting_slider_pane_t

0x05a0,	// (0x0004eec9) slider_set_pane

0x2d50,	// (0x00051679) bg_set_opt_pane_cp2

0x2e72,	// (0x0005179b) setting_slider_graphic_pane_g1

0x05b6,	// (0x0004eedf) setting_slider_graphic_pane_t1

0x05c6,	// (0x0004eeef) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0005deaa) setting_slider_graphic_pane_t

0x05d6,	// (0x0004eeff) slider_set_pane_cp

0x2d50,	// (0x00051679) input_focus_pane_cp1

0x652b,	// (0x00054e54) list_set_text_pane

0x2d46,	// (0x0005166f) setting_text_pane_g1

0x2d50,	// (0x00051679) input_focus_pane_cp2

0x2d46,	// (0x0005166f) setting_code_pane_g1

0x2e7b,	// (0x000517a4) setting_code_pane_t1

0x05de,	// (0x0004ef07) set_text_pane_t1_ParamLimits

0x05de,	// (0x0004ef07) set_text_pane_t1

0x3703,	// (0x0005202c) set_opt_bg_pane_g1

0x370b,	// (0x00052034) set_opt_bg_pane_g2

0x6505,	// (0x00054e2e) set_opt_bg_pane_g3

0x371b,	// (0x00052044) set_opt_bg_pane_g4

0x3723,	// (0x0005204c) set_opt_bg_pane_g5

0x372b,	// (0x00052054) set_opt_bg_pane_g6

0x650f,	// (0x00054e38) set_opt_bg_pane_g7

0x6517,	// (0x00054e40) set_opt_bg_pane_g8

0x6521,	// (0x00054e4a) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0005e29c) set_opt_bg_pane_g

0x64f8,	// (0x00054e21) slider_set_pane_g1

0x15ec,	// (0x0004ff15) slider_set_pane_g2

0x0006,

0xf964,	// (0x0005e28d) slider_set_pane_g

0x1588,	// (0x0004feb1) volume_set_pane_g1

0x1590,	// (0x0004feb9) volume_set_pane_g2

0x1598,	// (0x0004fec1) volume_set_pane_g3

0x15a0,	// (0x0004fec9) volume_set_pane_g4

0x15a8,	// (0x0004fed1) volume_set_pane_g5

0x15b0,	// (0x0004fed9) volume_set_pane_g6

0x15b8,	// (0x0004fee1) volume_set_pane_g7

0x15c0,	// (0x0004fee9) volume_set_pane_g8

0x15c8,	// (0x0004fef1) volume_set_pane_g9

0x15d0,	// (0x0004fef9) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0005e265) volume_set_pane_g

0xc617,	// (0x0005af40) indicator_pane_ParamLimits

0xc617,	// (0x0005af40) indicator_pane

0xc63f,	// (0x0005af68) main_idle_pane_g2_ParamLimits

0xc63f,	// (0x0005af68) main_idle_pane_g2

0xc677,	// (0x0005afa0) main_pane_idle_g1_ParamLimits

0xc677,	// (0x0005afa0) main_pane_idle_g1

0x2eca,	// (0x000517f3) popup_clock_digital_analogue_window_ParamLimits

0x2eca,	// (0x000517f3) popup_clock_digital_analogue_window

0xc69e,	// (0x0005afc7) soft_indicator_pane_ParamLimits

0xc69e,	// (0x0005afc7) soft_indicator_pane

0xc6b8,	// (0x0005afe1) wallpaper_pane_ParamLimits

0xc6b8,	// (0x0005afe1) wallpaper_pane

0x2d46,	// (0x0005166f) wallpaper_pane_g1

0xc6ca,	// (0x0005aff3) indicator_pane_g1_ParamLimits

0xc6ca,	// (0x0005aff3) indicator_pane_g1

0x68df,	// (0x00055208) navi_navi_icon_text_pane_srt_g1

0x2f1c,	// (0x00051845) soft_indicator_pane_t1

0x2f36,	// (0x0005185f) aid_ps_area_pane

0xc6e0,	// (0x0005b009) aid_ps_clock_pane

0x2f55,	// (0x0005187e) aid_ps_indicator_pane

0x2f61,	// (0x0005188a) indicator_ps_pane_ParamLimits

0x2f61,	// (0x0005188a) indicator_ps_pane

0x2f70,	// (0x00051899) power_save_pane_g1_ParamLimits

0x2f70,	// (0x00051899) power_save_pane_g1

0x2f7c,	// (0x000518a5) power_save_pane_g2_ParamLimits

0x2f7c,	// (0x000518a5) power_save_pane_g2

0x015e,	// (0x0004ea87) aid_navinavi_width_pane

0x2f36,	// (0x0005185f) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0005deaf) power_save_pane_g_ParamLimits

0xf586,	// (0x0005deaf) power_save_pane_g

0x2f8a,	// (0x000518b3) power_save_pane_t1_ParamLimits

0x2f8a,	// (0x000518b3) power_save_pane_t1

0xc6e0,	// (0x0005b009) aid_ps_clock_pane_ParamLimits

0x2f55,	// (0x0005187e) aid_ps_indicator_pane_ParamLimits

0x2f9c,	// (0x000518c5) power_save_pane_t4_ParamLimits

0x2f9c,	// (0x000518c5) power_save_pane_t4

0x0001,

0xf58b,	// (0x0005deb4) power_save_pane_t_ParamLimits

0xf58b,	// (0x0005deb4) power_save_pane_t

0x2fc6,	// (0x000518ef) power_save_t3_ParamLimits

0x2fc6,	// (0x000518ef) power_save_t3

0x2fb1,	// (0x000518da) power_save_t2_ParamLimits

0x2fb1,	// (0x000518da) power_save_t2

0x2fdb,	// (0x00051904) indicator_ps_pane_g1

0xc6ee,	// (0x0005b017) ai_gene_pane_ParamLimits

0xc6ee,	// (0x0005b017) ai_gene_pane

0xc705,	// (0x0005b02e) ai_links_pane_ParamLimits

0xc705,	// (0x0005b02e) ai_links_pane

0xc71d,	// (0x0005b046) indicator_pane_cp1_ParamLimits

0xc71d,	// (0x0005b046) indicator_pane_cp1

0xc72c,	// (0x0005b055) main_pane_idle_g1_cp_ParamLimits

0xc72c,	// (0x0005b055) main_pane_idle_g1_cp

0x3014,	// (0x0005193d) popup_ai_links_title_window

0xc744,	// (0x0005b06d) soft_indicator_pane_cp1_ParamLimits

0xc744,	// (0x0005b06d) soft_indicator_pane_cp1

0x62d1,	// (0x00054bfa) ai_links_pane_g1

0x62da,	// (0x00054c03) grid_ai_links_pane

0xd936,	// (0x0005c25f) ai_gene_pane_1

0x62bf,	// (0x00054be8) ai_gene_pane_2

0x62c8,	// (0x00054bf1) list_highlight_pane_cp4

0xd912,	// (0x0005c23b) cell_ai_link_pane_ParamLimits

0xd912,	// (0x0005c23b) cell_ai_link_pane

0x6290,	// (0x00054bb9) cell_ai_link_pane_g1

0x324d,	// (0x00051b76) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0005e240) cell_ai_link_pane_g

0x2d50,	// (0x00051679) grid_highlight_cp2

0x2d50,	// (0x00051679) bg_popup_sub_pane_cp1

0x3037,	// (0x00051960) popup_ai_links_title_window_t1

0x61de,	// (0x00054b07) ai_gene_pane_1_g1_ParamLimits

0x61de,	// (0x00054b07) ai_gene_pane_1_g1

0x61ea,	// (0x00054b13) ai_gene_pane_1_g2_ParamLimits

0x61ea,	// (0x00054b13) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0005e236) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0005e236) ai_gene_pane_1_g

0x61f7,	// (0x00054b20) ai_gene_pane_1_t1_ParamLimits

0x61f7,	// (0x00054b20) ai_gene_pane_1_t1

0x622b,	// (0x00054b54) grid_ai_soft_ind_pane

0x61c9,	// (0x00054af2) ai_gene_pane_2_t1_ParamLimits

0x61c9,	// (0x00054af2) ai_gene_pane_2_t1

0xc758,	// (0x0005b081) main_pane_empty_t1_ParamLimits

0xc758,	// (0x0005b081) main_pane_empty_t1

0xc770,	// (0x0005b099) main_pane_empty_t2_ParamLimits

0xc770,	// (0x0005b099) main_pane_empty_t2

0xc785,	// (0x0005b0ae) main_pane_empty_t3_ParamLimits

0xc785,	// (0x0005b0ae) main_pane_empty_t3

0xc797,	// (0x0005b0c0) main_pane_empty_t4_ParamLimits

0xc797,	// (0x0005b0c0) main_pane_empty_t4

0xc7a9,	// (0x0005b0d2) main_pane_empty_t5_ParamLimits

0xc7a9,	// (0x0005b0d2) main_pane_empty_t5

0x0004,

0xf590,	// (0x0005deb9) main_pane_empty_t_ParamLimits

0xf590,	// (0x0005deb9) main_pane_empty_t

0x3754,	// (0x0005207d) bg_popup_window_pane_ParamLimits

0x3754,	// (0x0005207d) bg_popup_window_pane

0x5f42,	// (0x0005486b) find_popup_pane_cp2_ParamLimits

0x5f42,	// (0x0005486b) find_popup_pane_cp2

0x5f4e,	// (0x00054877) heading_pane_ParamLimits

0x5f4e,	// (0x00054877) heading_pane

0x2d50,	// (0x00051679) bg_popup_sub_pane

0xd875,	// (0x0005c19e) bg_popup_window_pane_g1_ParamLimits

0xd875,	// (0x0005c19e) bg_popup_window_pane_g1

0xd884,	// (0x0005c1ad) bg_popup_window_pane_g2_ParamLimits

0xd884,	// (0x0005c1ad) bg_popup_window_pane_g2

0xd890,	// (0x0005c1b9) bg_popup_window_pane_g3_ParamLimits

0xd890,	// (0x0005c1b9) bg_popup_window_pane_g3

0xd89c,	// (0x0005c1c5) bg_popup_window_pane_g4_ParamLimits

0xd89c,	// (0x0005c1c5) bg_popup_window_pane_g4

0xd8ab,	// (0x0005c1d4) bg_popup_window_pane_g5_ParamLimits

0xd8ab,	// (0x0005c1d4) bg_popup_window_pane_g5

0xd8bb,	// (0x0005c1e4) bg_popup_window_pane_g6_ParamLimits

0xd8bb,	// (0x0005c1e4) bg_popup_window_pane_g6

0xd8c7,	// (0x0005c1f0) bg_popup_window_pane_g7_ParamLimits

0xd8c7,	// (0x0005c1f0) bg_popup_window_pane_g7

0xd8d6,	// (0x0005c1ff) bg_popup_window_pane_g8_ParamLimits

0xd8d6,	// (0x0005c1ff) bg_popup_window_pane_g8

0xd8e5,	// (0x0005c20e) bg_popup_window_pane_g9_ParamLimits

0xd8e5,	// (0x0005c20e) bg_popup_window_pane_g9

0x5f28,	// (0x00054851) bg_popup_window_pane_g10_ParamLimits

0x5f28,	// (0x00054851) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0005e1fe) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0005e1fe) bg_popup_window_pane_g

0x5e51,	// (0x0005477a) bg_popup_heading_pane_ParamLimits

0x5e51,	// (0x0005477a) bg_popup_heading_pane

0x1674,	// (0x0004ff9d) tabs_4_passive_pane_cp_srt_ParamLimits

0x1674,	// (0x0004ff9d) tabs_4_passive_pane_cp_srt

0x1686,	// (0x0004ffaf) tabs_4_passive_pane_srt_ParamLimits

0x5e65,	// (0x0005478e) heading_pane_g2

0x1686,	// (0x0004ffaf) tabs_4_passive_pane_srt

0x51e5,	// (0x00053b0e) bg_passive_tab_pane_cp3_srt_ParamLimits

0x51e5,	// (0x00053b0e) bg_passive_tab_pane_cp3_srt

0x5e6d,	// (0x00054796) heading_pane_t1_ParamLimits

0x5e6d,	// (0x00054796) heading_pane_t1

0x5e84,	// (0x000547ad) heading_pane_t2_ParamLimits

0x5e84,	// (0x000547ad) heading_pane_t2

0x0001,

0xf8d0,	// (0x0005e1f9) heading_pane_t_ParamLimits

0xf8d0,	// (0x0005e1f9) heading_pane_t

0x596f,	// (0x00054298) bg_popup_heading_pane_g1

0x5a1e,	// (0x00054347) bg_popup_heading_pane_g2

0x5a28,	// (0x00054351) bg_popup_heading_pane_g3

0x5a32,	// (0x0005435b) bg_popup_heading_pane_g4

0x5a3c,	// (0x00054365) bg_popup_heading_pane_g5

0x5a46,	// (0x0005436f) bg_popup_heading_pane_g6

0x5a4e,	// (0x00054377) bg_popup_heading_pane_g7

0x5a56,	// (0x0005437f) bg_popup_heading_pane_g8

0x5a60,	// (0x00054389) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0005e1b5) bg_popup_heading_pane_g

0x50f5,	// (0x00053a1e) bg_popup_sub_pane_g1

0x5105,	// (0x00053a2e) bg_popup_sub_pane_g2

0x50fd,	// (0x00053a26) bg_popup_sub_pane_g3

0x5115,	// (0x00053a3e) bg_popup_sub_pane_g4

0x510d,	// (0x00053a36) bg_popup_sub_pane_g5

0x511d,	// (0x00053a46) bg_popup_sub_pane_g6

0x5125,	// (0x00053a4e) bg_popup_sub_pane_g7

0x5135,	// (0x00053a5e) bg_popup_sub_pane_g8

0x512d,	// (0x00053a56) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0005e18f) bg_popup_sub_pane_g

0x30ab,	// (0x000519d4) bg_popup_window_pane_cp5_ParamLimits

0x30ab,	// (0x000519d4) bg_popup_window_pane_cp5

0x30c7,	// (0x000519f0) popup_note_window_g1_ParamLimits

0x30c7,	// (0x000519f0) popup_note_window_g1

0x30d3,	// (0x000519fc) popup_note_window_t1_ParamLimits

0x30d3,	// (0x000519fc) popup_note_window_t1

0x30e9,	// (0x00051a12) popup_note_window_t2_ParamLimits

0x30e9,	// (0x00051a12) popup_note_window_t2

0x30ff,	// (0x00051a28) popup_note_window_t3_ParamLimits

0x30ff,	// (0x00051a28) popup_note_window_t3

0x3115,	// (0x00051a3e) popup_note_window_t4_ParamLimits

0x3115,	// (0x00051a3e) popup_note_window_t4

0x313d,	// (0x00051a66) popup_note_window_t5_ParamLimits

0x313d,	// (0x00051a66) popup_note_window_t5

0x0004,

0xf59b,	// (0x0005dec4) popup_note_window_t_ParamLimits

0xf59b,	// (0x0005dec4) popup_note_window_t

0x3161,	// (0x00051a8a) bg_popup_window_pane_cp6_ParamLimits

0x3161,	// (0x00051a8a) bg_popup_window_pane_cp6

0x58eb,	// (0x00054214) popup_note_image_window_g1_ParamLimits

0x58eb,	// (0x00054214) popup_note_image_window_g1

0x58f7,	// (0x00054220) popup_note_image_window_g2_ParamLimits

0x58f7,	// (0x00054220) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0005e183) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0005e183) popup_note_image_window_g

0x5910,	// (0x00054239) popup_note_image_window_t1_ParamLimits

0x5910,	// (0x00054239) popup_note_image_window_t1

0x5929,	// (0x00054252) popup_note_image_window_t2_ParamLimits

0x5929,	// (0x00054252) popup_note_image_window_t2

0x5942,	// (0x0005426b) popup_note_image_window_t3_ParamLimits

0x5942,	// (0x0005426b) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0005e188) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0005e188) popup_note_image_window_t

0x57ac,	// (0x000540d5) bg_popup_window_pane_cp7_ParamLimits

0x57ac,	// (0x000540d5) bg_popup_window_pane_cp7

0x57dc,	// (0x00054105) popup_note_wait_window_g1_ParamLimits

0x57dc,	// (0x00054105) popup_note_wait_window_g1

0x57e8,	// (0x00054111) popup_note_wait_window_g2_ParamLimits

0x57e8,	// (0x00054111) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0005e171) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0005e171) popup_note_wait_window_g

0x5800,	// (0x00054129) popup_note_wait_window_t1_ParamLimits

0x5800,	// (0x00054129) popup_note_wait_window_t1

0x5827,	// (0x00054150) popup_note_wait_window_t2_ParamLimits

0x5827,	// (0x00054150) popup_note_wait_window_t2

0x5844,	// (0x0005416d) popup_note_wait_window_t3_ParamLimits

0x5844,	// (0x0005416d) popup_note_wait_window_t3

0x5857,	// (0x00054180) popup_note_wait_window_t4_ParamLimits

0x5857,	// (0x00054180) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0005e178) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0005e178) popup_note_wait_window_t

0x587c,	// (0x000541a5) wait_bar_pane_ParamLimits

0x587c,	// (0x000541a5) wait_bar_pane

0x2d50,	// (0x00051679) wait_anim_pane

0x2d50,	// (0x00051679) wait_border_pane

0x2d46,	// (0x0005166f) wait_anim_pane_g1

0x2d46,	// (0x0005166f) wait_anim_pane_g2

0x0001,

0xf71a,	// (0x0005e043) wait_anim_pane_g

0x5750,	// (0x00054079) wait_border_pane_g1

0x575b,	// (0x00054084) wait_border_pane_g2

0x5764,	// (0x0005408d) wait_border_pane_g3

0x0002,

0xf841,	// (0x0005e16a) wait_border_pane_g

0x55bb,	// (0x00053ee4) bg_popup_window_pane_cp16_ParamLimits

0x55bb,	// (0x00053ee4) bg_popup_window_pane_cp16

0x56bb,	// (0x00053fe4) indicator_popup_pane_cp4_ParamLimits

0x56bb,	// (0x00053fe4) indicator_popup_pane_cp4

0x56cf,	// (0x00053ff8) popup_query_data_window_t1_ParamLimits

0x56cf,	// (0x00053ff8) popup_query_data_window_t1

0x56e1,	// (0x0005400a) popup_query_data_window_t2_ParamLimits

0x56e1,	// (0x0005400a) popup_query_data_window_t2

0x56fa,	// (0x00054023) popup_query_data_window_t3_ParamLimits

0x56fa,	// (0x00054023) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0005e163) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0005e163) popup_query_data_window_t

0x5714,	// (0x0005403d) query_popup_data_pane_ParamLimits

0x5714,	// (0x0005403d) query_popup_data_pane

0x5728,	// (0x00054051) query_popup_data_pane_cp1_ParamLimits

0x5728,	// (0x00054051) query_popup_data_pane_cp1

0x55bb,	// (0x00053ee4) bg_popup_window_pane_cp10_ParamLimits

0x55bb,	// (0x00053ee4) bg_popup_window_pane_cp10

0x55ed,	// (0x00053f16) indicator_popup_pane_ParamLimits

0x55ed,	// (0x00053f16) indicator_popup_pane

0x560f,	// (0x00053f38) popup_query_code_window_t1_ParamLimits

0x560f,	// (0x00053f38) popup_query_code_window_t1

0x5629,	// (0x00053f52) popup_query_code_window_t2_ParamLimits

0x5629,	// (0x00053f52) popup_query_code_window_t2

0x5672,	// (0x00053f9b) popup_query_code_window_t3_ParamLimits

0x5672,	// (0x00053f9b) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0005e15c) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0005e15c) popup_query_code_window_t

0x56a1,	// (0x00053fca) query_popup_pane_ParamLimits

0x56a1,	// (0x00053fca) query_popup_pane

0x3161,	// (0x00051a8a) bg_popup_window_pane_cp15_ParamLimits

0x3161,	// (0x00051a8a) bg_popup_window_pane_cp15

0x317f,	// (0x00051aa8) indicator_popup_pane_cp1_ParamLimits

0x317f,	// (0x00051aa8) indicator_popup_pane_cp1

0x3192,	// (0x00051abb) indicator_popup_pane_cp2_ParamLimits

0x3192,	// (0x00051abb) indicator_popup_pane_cp2

0x31a5,	// (0x00051ace) popup_query_data_code_window_g1_ParamLimits

0x31a5,	// (0x00051ace) popup_query_data_code_window_g1

0x31b8,	// (0x00051ae1) popup_query_data_code_window_t1_ParamLimits

0x31b8,	// (0x00051ae1) popup_query_data_code_window_t1

0x31ca,	// (0x00051af3) popup_query_data_code_window_t2_ParamLimits

0x31ca,	// (0x00051af3) popup_query_data_code_window_t2

0x31dc,	// (0x00051b05) popup_query_data_code_window_t3_ParamLimits

0x31dc,	// (0x00051b05) popup_query_data_code_window_t3

0x31f2,	// (0x00051b1b) popup_query_data_code_window_t4_ParamLimits

0x31f2,	// (0x00051b1b) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0005decf) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0005decf) popup_query_data_code_window_t

0x1335,	// (0x0004fc5e) list_single_midp_graphic_pane_g3

0x320a,	// (0x00051b33) query_popup_data_pane_cp2_ParamLimits

0x321d,	// (0x00051b46) query_popup_pane_cp2_ParamLimits

0x321d,	// (0x00051b46) query_popup_pane_cp2

0x2d50,	// (0x00051679) bg_popup_window_pane_cp11

0x55b3,	// (0x00053edc) heading_pane_cp5

0x3305,	// (0x00051c2e) listscroll_popup_info_pane

0x2d50,	// (0x00051679) input_focus_pane_cp3

0x3230,	// (0x00051b59) query_popup_pane_t1

0x323e,	// (0x00051b67) list_popup_info_pane_ParamLimits

0x323e,	// (0x00051b67) list_popup_info_pane

0x324d,	// (0x00051b76) listscroll_popup_info_pane_g1

0x3255,	// (0x00051b7e) scroll_pane_cp7

0x325f,	// (0x00051b88) popup_info_list_pane_t1_ParamLimits

0x325f,	// (0x00051b88) popup_info_list_pane_t1

0x3279,	// (0x00051ba2) popup_info_list_pane_t2_ParamLimits

0x3279,	// (0x00051ba2) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0005ded8) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0005ded8) popup_info_list_pane_t

0x2d50,	// (0x00051679) bg_popup_window_pane_cp12

0x68f9,	// (0x00055222) find_popup_pane

0x2e30,	// (0x00051759) bg_popup_window_pane_cp3

0x3293,	// (0x00051bbc) heading_pane_cp3

0x329f,	// (0x00051bc8) listscroll_popup_graphic_pane

0x2d50,	// (0x00051679) bg_popup_window_pane_cp4

0xc80b,	// (0x0005b134) heading_pane_cp4

0x3305,	// (0x00051c2e) listscroll_popup_colour_pane

0xc813,	// (0x0005b13c) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc813,	// (0x0005b13c) cell_large_graphic_colour_none_popup_pane

0xc827,	// (0x0005b150) grid_large_graphic_colour_popup_pane_ParamLimits

0xc827,	// (0x0005b150) grid_large_graphic_colour_popup_pane

0xc84b,	// (0x0005b174) listscroll_popup_colour_pane_g1_ParamLimits

0xc84b,	// (0x0005b174) listscroll_popup_colour_pane_g1

0xc862,	// (0x0005b18b) listscroll_popup_colour_pane_g2_ParamLimits

0xc862,	// (0x0005b18b) listscroll_popup_colour_pane_g2

0xc879,	// (0x0005b1a2) listscroll_popup_colour_pane_g3_ParamLimits

0xc879,	// (0x0005b1a2) listscroll_popup_colour_pane_g3

0xc889,	// (0x0005b1b2) listscroll_popup_colour_pane_g4_ParamLimits

0xc889,	// (0x0005b1b2) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0005dedd) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0005dedd) listscroll_popup_colour_pane_g

0x339f,	// (0x00051cc8) scroll_pane_cp6_ParamLimits

0x339f,	// (0x00051cc8) scroll_pane_cp6

0xc899,	// (0x0005b1c2) cell_large_graphic_colour_popup_pane_ParamLimits

0xc899,	// (0x0005b1c2) cell_large_graphic_colour_popup_pane

0x33d0,	// (0x00051cf9) cell_large_graphic_colour_none_popup_pane_t1

0x2d50,	// (0x00051679) grid_highlight_pane_cp5

0x33df,	// (0x00051d08) cell_large_graphic_colour_popup_pane_g1

0x33e7,	// (0x00051d10) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0005dee6) cell_large_graphic_colour_popup_pane_g

0x33ef,	// (0x00051d18) cell_large_graphic_colour_popup_pane_g2_copy1

0x33f8,	// (0x00051d21) grid_highlight_pane_cp4

0x3400,	// (0x00051d29) bg_popup_window_pane_cp8_ParamLimits

0x3400,	// (0x00051d29) bg_popup_window_pane_cp8

0x341b,	// (0x00051d44) popup_snote_single_text_window_g1_ParamLimits

0x341b,	// (0x00051d44) popup_snote_single_text_window_g1

0x342d,	// (0x00051d56) popup_snote_single_text_window_t1_ParamLimits

0x342d,	// (0x00051d56) popup_snote_single_text_window_t1

0x3440,	// (0x00051d69) popup_snote_single_text_window_t2_ParamLimits

0x3440,	// (0x00051d69) popup_snote_single_text_window_t2

0x3453,	// (0x00051d7c) popup_snote_single_text_window_t3_ParamLimits

0x3453,	// (0x00051d7c) popup_snote_single_text_window_t3

0x348c,	// (0x00051db5) popup_snote_single_text_window_t4_ParamLimits

0x348c,	// (0x00051db5) popup_snote_single_text_window_t4

0x34c0,	// (0x00051de9) popup_snote_single_text_window_t5_ParamLimits

0x34c0,	// (0x00051de9) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0005deeb) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0005deeb) popup_snote_single_text_window_t

0x34ef,	// (0x00051e18) bg_popup_window_pane_cp9_ParamLimits

0x34ef,	// (0x00051e18) bg_popup_window_pane_cp9

0x341b,	// (0x00051d44) popup_snote_single_graphic_window_g1_ParamLimits

0x341b,	// (0x00051d44) popup_snote_single_graphic_window_g1

0x34fd,	// (0x00051e26) popup_snote_single_graphic_window_g2_ParamLimits

0x34fd,	// (0x00051e26) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0005def6) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0005def6) popup_snote_single_graphic_window_g

0x3509,	// (0x00051e32) popup_snote_single_graphic_window_t1_ParamLimits

0x3509,	// (0x00051e32) popup_snote_single_graphic_window_t1

0x351c,	// (0x00051e45) popup_snote_single_graphic_window_t2_ParamLimits

0x351c,	// (0x00051e45) popup_snote_single_graphic_window_t2

0x352f,	// (0x00051e58) popup_snote_single_graphic_window_t3_ParamLimits

0x352f,	// (0x00051e58) popup_snote_single_graphic_window_t3

0x3568,	// (0x00051e91) popup_snote_single_graphic_window_t4_ParamLimits

0x3568,	// (0x00051e91) popup_snote_single_graphic_window_t4

0x359c,	// (0x00051ec5) popup_snote_single_graphic_window_t5_ParamLimits

0x359c,	// (0x00051ec5) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0005defb) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0005defb) popup_snote_single_graphic_window_t

0x683d,	// (0x00055166) grid_graphic_popup_pane_ParamLimits

0x683d,	// (0x00055166) grid_graphic_popup_pane

0x6865,	// (0x0005518e) listscroll_popup_graphic_pane_g1_ParamLimits

0x6865,	// (0x0005518e) listscroll_popup_graphic_pane_g1

0xdbfa,	// (0x0005c523) listscroll_popup_graphic_pane_g2_ParamLimits

0xdbfa,	// (0x0005c523) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0005e2d9) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0005e2d9) listscroll_popup_graphic_pane_g

0x688d,	// (0x000551b6) scroll_pane_cp5

0xdbbe,	// (0x0005c4e7) cell_graphic_popup_pane_ParamLimits

0xdbbe,	// (0x0005c4e7) cell_graphic_popup_pane

0x67c7,	// (0x000550f0) cell_graphic_popup_pane_g1

0x67cf,	// (0x000550f8) cell_graphic_popup_pane_g2

0x33ef,	// (0x00051d18) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0005e2d2) cell_graphic_popup_pane_g

0x67d8,	// (0x00055101) cell_graphic_popup_pane_t2

0x33f8,	// (0x00051d21) grid_highlight_pane_cp3

0x35dd,	// (0x00051f06) list_gen_pane_ParamLimits

0x35dd,	// (0x00051f06) list_gen_pane

0x360f,	// (0x00051f38) scroll_pane

0xdb79,	// (0x0005c4a2) bg_list_pane_g1_ParamLimits

0xdb79,	// (0x0005c4a2) bg_list_pane_g1

0x6744,	// (0x0005506d) bg_list_pane_g2_ParamLimits

0x6744,	// (0x0005506d) bg_list_pane_g2

0x6757,	// (0x00055080) bg_list_pane_g3_ParamLimits

0x6757,	// (0x00055080) bg_list_pane_g3

0x6769,	// (0x00055092) bg_list_pane_g4_ParamLimits

0x6769,	// (0x00055092) bg_list_pane_g4

0xdb94,	// (0x0005c4bd) bg_list_pane_g5_ParamLimits

0xdb94,	// (0x0005c4bd) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0005e2c7) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0005e2c7) bg_list_pane_g

0xbf4b,	// (0x0005a874) list_double2_graphic_large_graphic_pane_ParamLimits

0xbf4b,	// (0x0005a874) list_double2_graphic_large_graphic_pane

0xbf4b,	// (0x0005a874) list_double2_graphic_pane_ParamLimits

0xbf4b,	// (0x0005a874) list_double2_graphic_pane

0xbf4b,	// (0x0005a874) list_double2_large_graphic_pane_ParamLimits

0xbf4b,	// (0x0005a874) list_double2_large_graphic_pane

0xbf4b,	// (0x0005a874) list_double2_pane_ParamLimits

0xbf4b,	// (0x0005a874) list_double2_pane

0xbf4b,	// (0x0005a874) list_double_graphic_heading_pane_ParamLimits

0xbf4b,	// (0x0005a874) list_double_graphic_heading_pane

0xbf4b,	// (0x0005a874) list_double_graphic_pane_ParamLimits

0xbf4b,	// (0x0005a874) list_double_graphic_pane

0xbf4b,	// (0x0005a874) list_double_heading_pane_ParamLimits

0xbf4b,	// (0x0005a874) list_double_heading_pane

0xbf4b,	// (0x0005a874) list_double_large_graphic_pane_ParamLimits

0xbf4b,	// (0x0005a874) list_double_large_graphic_pane

0xbf4b,	// (0x0005a874) list_double_number_pane_ParamLimits

0xbf4b,	// (0x0005a874) list_double_number_pane

0xbf4b,	// (0x0005a874) list_double_pane_ParamLimits

0xbf4b,	// (0x0005a874) list_double_pane

0xbf4b,	// (0x0005a874) list_double_time_pane_ParamLimits

0xbf4b,	// (0x0005a874) list_double_time_pane

0xbf4b,	// (0x0005a874) list_setting_number_pane_ParamLimits

0xbf4b,	// (0x0005a874) list_setting_number_pane

0xbf4b,	// (0x0005a874) list_setting_pane_ParamLimits

0xbf4b,	// (0x0005a874) list_setting_pane

0xdb30,	// (0x0005c459) list_single_2graphic_pane_ParamLimits

0xdb30,	// (0x0005c459) list_single_2graphic_pane

0xdb30,	// (0x0005c459) list_single_graphic_heading_pane_ParamLimits

0xdb30,	// (0x0005c459) list_single_graphic_heading_pane

0xdb30,	// (0x0005c459) list_single_graphic_pane_ParamLimits

0xdb30,	// (0x0005c459) list_single_graphic_pane

0xdb30,	// (0x0005c459) list_single_heading_pane_ParamLimits

0xdb30,	// (0x0005c459) list_single_heading_pane

0xdb67,	// (0x0005c490) list_single_large_graphic_pane_ParamLimits

0xdb67,	// (0x0005c490) list_single_large_graphic_pane

0xdb30,	// (0x0005c459) list_single_number_heading_pane_ParamLimits

0xdb30,	// (0x0005c459) list_single_number_heading_pane

0xdb30,	// (0x0005c459) list_single_number_pane_ParamLimits

0xdb30,	// (0x0005c459) list_single_number_pane

0xdb30,	// (0x0005c459) list_single_pane_ParamLimits

0xdb30,	// (0x0005c459) list_single_pane

0x2d50,	// (0x00051679) list_highlight_pane_cp1

0x542a,	// (0x00053d53) list_single_pane_g1_ParamLimits

0x542a,	// (0x00053d53) list_single_pane_g1

0x2578,	// (0x00050ea1) list_single_pane_g2_ParamLimits

0x2578,	// (0x00050ea1) list_single_pane_g2

0x0001,

0xf5ee,	// (0x0005df17) list_single_pane_g_ParamLimits

0xf5ee,	// (0x0005df17) list_single_pane_g

0x2791,	// (0x000510ba) list_single_pane_t1_ParamLimits

0x2791,	// (0x000510ba) list_single_pane_t1

0x542a,	// (0x00053d53) list_single_number_pane_g1_ParamLimits

0x542a,	// (0x00053d53) list_single_number_pane_g1

0x2578,	// (0x00050ea1) list_single_number_pane_g2_ParamLimits

0x2578,	// (0x00050ea1) list_single_number_pane_g2

0x0001,

0xf5ee,	// (0x0005df17) list_single_number_pane_g_ParamLimits

0xf5ee,	// (0x0005df17) list_single_number_pane_g

0x2584,	// (0x00050ead) list_single_number_pane_t1_ParamLimits

0x2584,	// (0x00050ead) list_single_number_pane_t1

0xbf0d,	// (0x0005a836) list_single_number_pane_t2_ParamLimits

0xbf0d,	// (0x0005a836) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0005e288) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0005e288) list_single_number_pane_t

0xb65f,	// (0x00059f88) list_single_graphic_pane_g1_ParamLimits

0xb65f,	// (0x00059f88) list_single_graphic_pane_g1

0x542a,	// (0x00053d53) list_single_graphic_pane_g2_ParamLimits

0x542a,	// (0x00053d53) list_single_graphic_pane_g2

0x2578,	// (0x00050ea1) list_single_graphic_pane_g3_ParamLimits

0x2578,	// (0x00050ea1) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0005df06) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0005df06) list_single_graphic_pane_g

0xb66b,	// (0x00059f94) list_single_graphic_pane_t1_ParamLimits

0xb66b,	// (0x00059f94) list_single_graphic_pane_t1

0xb681,	// (0x00059faa) list_single_heading_pane_g1_ParamLimits

0xb681,	// (0x00059faa) list_single_heading_pane_g1

0x2578,	// (0x00050ea1) list_single_heading_pane_g2_ParamLimits

0x2578,	// (0x00050ea1) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0005df0d) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0005df0d) list_single_heading_pane_g

0xb694,	// (0x00059fbd) list_single_heading_pane_t1_ParamLimits

0xb694,	// (0x00059fbd) list_single_heading_pane_t1

0xc8c2,	// (0x0005b1eb) list_single_heading_pane_t2_ParamLimits

0xc8c2,	// (0x0005b1eb) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0005df12) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0005df12) list_single_heading_pane_t

0x542a,	// (0x00053d53) list_single_number_heading_pane_g1_ParamLimits

0x542a,	// (0x00053d53) list_single_number_heading_pane_g1

0x2578,	// (0x00050ea1) list_single_number_heading_pane_g2_ParamLimits

0x2578,	// (0x00050ea1) list_single_number_heading_pane_g2

0x0001,

0xf5ee,	// (0x0005df17) list_single_number_heading_pane_g_ParamLimits

0xf5ee,	// (0x0005df17) list_single_number_heading_pane_g

0xb6aa,	// (0x00059fd3) list_single_number_heading_pane_t1_ParamLimits

0xb6aa,	// (0x00059fd3) list_single_number_heading_pane_t1

0xb6c0,	// (0x00059fe9) list_single_number_heading_pane_t2_ParamLimits

0xb6c0,	// (0x00059fe9) list_single_number_heading_pane_t2

0x276b,	// (0x00051094) list_single_number_heading_pane_t3_ParamLimits

0x276b,	// (0x00051094) list_single_number_heading_pane_t3

0x0002,

0xf5f3,	// (0x0005df1c) list_single_number_heading_pane_t_ParamLimits

0xf5f3,	// (0x0005df1c) list_single_number_heading_pane_t

0xb6d2,	// (0x00059ffb) list_single_graphic_heading_pane_g1_ParamLimits

0xb6d2,	// (0x00059ffb) list_single_graphic_heading_pane_g1

0xc8d4,	// (0x0005b1fd) list_single_graphic_heading_pane_g4_ParamLimits

0xc8d4,	// (0x0005b1fd) list_single_graphic_heading_pane_g4

0x2578,	// (0x00050ea1) list_single_graphic_heading_pane_g5_ParamLimits

0x2578,	// (0x00050ea1) list_single_graphic_heading_pane_g5

0x0002,

0xf5fa,	// (0x0005df23) list_single_graphic_heading_pane_g_ParamLimits

0xf5fa,	// (0x0005df23) list_single_graphic_heading_pane_g

0xb6aa,	// (0x00059fd3) list_single_graphic_heading_pane_t1_ParamLimits

0xb6aa,	// (0x00059fd3) list_single_graphic_heading_pane_t1

0xb6e8,	// (0x0005a011) list_single_graphic_heading_pane_t2_ParamLimits

0xb6e8,	// (0x0005a011) list_single_graphic_heading_pane_t2

0x0001,

0xf601,	// (0x0005df2a) list_single_graphic_heading_pane_t_ParamLimits

0xf601,	// (0x0005df2a) list_single_graphic_heading_pane_t

0x27a7,	// (0x000510d0) list_single_large_graphic_pane_g1_ParamLimits

0x27a7,	// (0x000510d0) list_single_large_graphic_pane_g1

0x27b3,	// (0x000510dc) list_single_large_graphic_pane_g2_ParamLimits

0x27b3,	// (0x000510dc) list_single_large_graphic_pane_g2

0x27bf,	// (0x000510e8) list_single_large_graphic_pane_g3_ParamLimits

0x27bf,	// (0x000510e8) list_single_large_graphic_pane_g3

0x0002,

0xf606,	// (0x0005df2f) list_single_large_graphic_pane_g_ParamLimits

0xf606,	// (0x0005df2f) list_single_large_graphic_pane_g

0x575b,	// (0x00054084) wait_border_pane_g2_copy1

0xc8e5,	// (0x0005b20e) list_single_large_graphic_pane_g4_cp2

0x27cb,	// (0x000510f4) list_single_large_graphic_pane_t1_ParamLimits

0x27cb,	// (0x000510f4) list_single_large_graphic_pane_t1

0x542a,	// (0x00053d53) list_double_pane_g1_ParamLimits

0x542a,	// (0x00053d53) list_double_pane_g1

0x2578,	// (0x00050ea1) list_double_pane_g2_ParamLimits

0x2578,	// (0x00050ea1) list_double_pane_g2

0x0001,

0xf5ee,	// (0x0005df17) list_double_pane_g_ParamLimits

0xf5ee,	// (0x0005df17) list_double_pane_g

0x2791,	// (0x000510ba) list_double_pane_t1_ParamLimits

0x2791,	// (0x000510ba) list_double_pane_t1

0xb6fe,	// (0x0005a027) list_double_pane_t2_ParamLimits

0xb6fe,	// (0x0005a027) list_double_pane_t2

0x0001,

0xf60d,	// (0x0005df36) list_double_pane_t_ParamLimits

0xf60d,	// (0x0005df36) list_double_pane_t

0xb710,	// (0x0005a039) list_double2_pane_g1_ParamLimits

0xb710,	// (0x0005a039) list_double2_pane_g1

0xb721,	// (0x0005a04a) list_double2_pane_g2_ParamLimits

0xb721,	// (0x0005a04a) list_double2_pane_g2

0x0001,

0xf612,	// (0x0005df3b) list_double2_pane_g_ParamLimits

0xf612,	// (0x0005df3b) list_double2_pane_g

0xb72d,	// (0x0005a056) list_double2_pane_t1_ParamLimits

0xb72d,	// (0x0005a056) list_double2_pane_t1

0xb743,	// (0x0005a06c) list_double2_pane_t2_ParamLimits

0xb743,	// (0x0005a06c) list_double2_pane_t2

0x0001,

0xf617,	// (0x0005df40) list_double2_pane_t_ParamLimits

0xf617,	// (0x0005df40) list_double2_pane_t

0x542a,	// (0x00053d53) list_double_number_pane_g1_ParamLimits

0x542a,	// (0x00053d53) list_double_number_pane_g1

0x2578,	// (0x00050ea1) list_double_number_pane_g2_ParamLimits

0x2578,	// (0x00050ea1) list_double_number_pane_g2

0x0001,

0xf5ee,	// (0x0005df17) list_double_number_pane_g_ParamLimits

0xf5ee,	// (0x0005df17) list_double_number_pane_g

0xb755,	// (0x0005a07e) list_double_number_pane_t1_ParamLimits

0xb755,	// (0x0005a07e) list_double_number_pane_t1

0x2584,	// (0x00050ead) list_double_number_pane_t2_ParamLimits

0x2584,	// (0x00050ead) list_double_number_pane_t2

0xb767,	// (0x0005a090) list_double_number_pane_t3_ParamLimits

0xb767,	// (0x0005a090) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x0005df45) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x0005df45) list_double_number_pane_t

0x256c,	// (0x00050e95) list_double_graphic_pane_g1_ParamLimits

0x256c,	// (0x00050e95) list_double_graphic_pane_g1

0x2934,	// (0x0005125d) list_double_graphic_pane_g2_ParamLimits

0x2934,	// (0x0005125d) list_double_graphic_pane_g2

0x2943,	// (0x0005126c) list_double_graphic_pane_g3_ParamLimits

0x2943,	// (0x0005126c) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x0005df4c) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x0005df4c) list_double_graphic_pane_g

0xb66b,	// (0x00059f94) list_double_graphic_pane_t1_ParamLimits

0xb66b,	// (0x00059f94) list_double_graphic_pane_t1

0xb785,	// (0x0005a0ae) list_double_graphic_pane_t2_ParamLimits

0xb785,	// (0x0005a0ae) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x0005df55) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x0005df55) list_double_graphic_pane_t

0x256c,	// (0x00050e95) list_double2_graphic_pane_g1_ParamLimits

0x256c,	// (0x00050e95) list_double2_graphic_pane_g1

0x542a,	// (0x00053d53) list_double2_graphic_pane_g2_ParamLimits

0x542a,	// (0x00053d53) list_double2_graphic_pane_g2

0x2578,	// (0x00050ea1) list_double2_graphic_pane_g3_ParamLimits

0x2578,	// (0x00050ea1) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x0005df5a) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x0005df5a) list_double2_graphic_pane_g

0x2584,	// (0x00050ead) list_double2_graphic_pane_t1_ParamLimits

0x2584,	// (0x00050ead) list_double2_graphic_pane_t1

0xb797,	// (0x0005a0c0) list_double2_graphic_pane_t2_ParamLimits

0xb797,	// (0x0005a0c0) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x0005df61) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x0005df61) list_double2_graphic_pane_t

0xb7a9,	// (0x0005a0d2) list_double_large_graphic_pane_g1_ParamLimits

0xb7a9,	// (0x0005a0d2) list_double_large_graphic_pane_g1

0xb7cf,	// (0x0005a0f8) list_double_large_graphic_pane_g2_ParamLimits

0xb7cf,	// (0x0005a0f8) list_double_large_graphic_pane_g2

0x2578,	// (0x00050ea1) list_double_large_graphic_pane_g3_ParamLimits

0x2578,	// (0x00050ea1) list_double_large_graphic_pane_g3

0xb7e5,	// (0x0005a10e) list_double_large_graphic_pane_g4_ParamLimits

0xb7e5,	// (0x0005a10e) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0005df66) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0005df66) list_double_large_graphic_pane_g

0xb7f8,	// (0x0005a121) list_double_large_graphic_pane_t1_ParamLimits

0xb7f8,	// (0x0005a121) list_double_large_graphic_pane_t1

0xb811,	// (0x0005a13a) list_double_large_graphic_pane_t2_ParamLimits

0xb811,	// (0x0005a13a) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x0005df71) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x0005df71) list_double_large_graphic_pane_t

0xb823,	// (0x0005a14c) list_double2_large_graphic_pane_g1_ParamLimits

0xb823,	// (0x0005a14c) list_double2_large_graphic_pane_g1

0xc8d4,	// (0x0005b1fd) list_double2_large_graphic_pane_g2_ParamLimits

0xc8d4,	// (0x0005b1fd) list_double2_large_graphic_pane_g2

0x2578,	// (0x00050ea1) list_double2_large_graphic_pane_g3_ParamLimits

0x2578,	// (0x00050ea1) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0005df76) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0005df76) list_double2_large_graphic_pane_g

0xb6aa,	// (0x00059fd3) list_double2_large_graphic_pane_t1_ParamLimits

0xb6aa,	// (0x00059fd3) list_double2_large_graphic_pane_t1

0xb82f,	// (0x0005a158) list_double2_large_graphic_pane_t2_ParamLimits

0xb82f,	// (0x0005a158) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x0005df7d) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x0005df7d) list_double2_large_graphic_pane_t

0xb841,	// (0x0005a16a) list_double_heading_pane_g1_ParamLimits

0xb841,	// (0x0005a16a) list_double_heading_pane_g1

0xc8ed,	// (0x0005b216) list_double_heading_pane_g2_ParamLimits

0xc8ed,	// (0x0005b216) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0005df82) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0005df82) list_double_heading_pane_g

0xb852,	// (0x0005a17b) list_double_heading_pane_t1_ParamLimits

0xb852,	// (0x0005a17b) list_double_heading_pane_t1

0xb868,	// (0x0005a191) list_double_heading_pane_t2_ParamLimits

0xb868,	// (0x0005a191) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0005df87) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0005df87) list_double_heading_pane_t

0x07bf,	// (0x0004f0e8) list_double_graphic_heading_pane_g1_ParamLimits

0x07bf,	// (0x0004f0e8) list_double_graphic_heading_pane_g1

0xb841,	// (0x0005a16a) list_double_graphic_heading_pane_g2_ParamLimits

0xb841,	// (0x0005a16a) list_double_graphic_heading_pane_g2

0xc8ed,	// (0x0005b216) list_double_graphic_heading_pane_g3_ParamLimits

0xc8ed,	// (0x0005b216) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x0005df8c) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x0005df8c) list_double_graphic_heading_pane_g

0xb87a,	// (0x0005a1a3) list_double_graphic_heading_pane_t1_ParamLimits

0xb87a,	// (0x0005a1a3) list_double_graphic_heading_pane_t1

0xb890,	// (0x0005a1b9) list_double_graphic_heading_pane_t2_ParamLimits

0xb890,	// (0x0005a1b9) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0005df93) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0005df93) list_double_graphic_heading_pane_t

0xb710,	// (0x0005a039) list_double_time_pane_g1_ParamLimits

0xb710,	// (0x0005a039) list_double_time_pane_g1

0xb721,	// (0x0005a04a) list_double_time_pane_g2_ParamLimits

0xb721,	// (0x0005a04a) list_double_time_pane_g2

0x0001,

0xf612,	// (0x0005df3b) list_double_time_pane_g_ParamLimits

0xf612,	// (0x0005df3b) list_double_time_pane_g

0xb8a2,	// (0x0005a1cb) list_double_time_pane_t1_ParamLimits

0xb8a2,	// (0x0005a1cb) list_double_time_pane_t1

0xb8b8,	// (0x0005a1e1) list_double_time_pane_t2_ParamLimits

0xb8b8,	// (0x0005a1e1) list_double_time_pane_t2

0xb8ca,	// (0x0005a1f3) list_double_time_pane_t3_ParamLimits

0xb8ca,	// (0x0005a1f3) list_double_time_pane_t3

0xb8dc,	// (0x0005a205) list_double_time_pane_t4_ParamLimits

0xb8dc,	// (0x0005a205) list_double_time_pane_t4

0x0003,

0xf66f,	// (0x0005df98) list_double_time_pane_t_ParamLimits

0xf66f,	// (0x0005df98) list_double_time_pane_t

0xb8ee,	// (0x0005a217) list_setting_pane_g1_ParamLimits

0xb8ee,	// (0x0005a217) list_setting_pane_g1

0x0937,	// (0x0004f260) list_setting_pane_g2_ParamLimits

0x0937,	// (0x0004f260) list_setting_pane_g2

0x0001,

0xf678,	// (0x0005dfa1) list_setting_pane_g_ParamLimits

0xf678,	// (0x0005dfa1) list_setting_pane_g

0xb8fa,	// (0x0005a223) list_setting_pane_t1_ParamLimits

0xb8fa,	// (0x0005a223) list_setting_pane_t1

0xb914,	// (0x0005a23d) list_setting_pane_t2_ParamLimits

0xb914,	// (0x0005a23d) list_setting_pane_t2

0x0002,

0xf67d,	// (0x0005dfa6) list_setting_pane_t_ParamLimits

0xf67d,	// (0x0005dfa6) list_setting_pane_t

0xb953,	// (0x0005a27c) set_value_pane_cp_ParamLimits

0xb953,	// (0x0005a27c) set_value_pane_cp

0xb95f,	// (0x0005a288) list_setting_number_pane_g1_ParamLimits

0xb95f,	// (0x0005a288) list_setting_number_pane_g1

0xb96b,	// (0x0005a294) list_setting_number_pane_g2_ParamLimits

0xb96b,	// (0x0005a294) list_setting_number_pane_g2

0x0001,

0xf684,	// (0x0005dfad) list_setting_number_pane_g_ParamLimits

0xf684,	// (0x0005dfad) list_setting_number_pane_g

0xb977,	// (0x0005a2a0) list_setting_number_pane_t1_ParamLimits

0xb977,	// (0x0005a2a0) list_setting_number_pane_t1

0xb990,	// (0x0005a2b9) list_setting_number_pane_t2_ParamLimits

0xb990,	// (0x0005a2b9) list_setting_number_pane_t2

0xb9aa,	// (0x0005a2d3) list_setting_number_pane_t3_ParamLimits

0xb9aa,	// (0x0005a2d3) list_setting_number_pane_t3

0x0003,

0xf689,	// (0x0005dfb2) list_setting_number_pane_t_ParamLimits

0xf689,	// (0x0005dfb2) list_setting_number_pane_t

0xb953,	// (0x0005a27c) set_value_pane_ParamLimits

0xb953,	// (0x0005a27c) set_value_pane

0x3643,	// (0x00051f6c) bg_set_opt_pane_ParamLimits

0x3643,	// (0x00051f6c) bg_set_opt_pane

0x0a9a,	// (0x0004f3c3) set_value_pane_t1

0x3664,	// (0x00051f8d) slider_set_pane_cp3

0x366d,	// (0x00051f96) volume_small_pane_cp

0x3676,	// (0x00051f9f) list_form_gen_pane

0x367f,	// (0x00051fa8) scroll_pane_cp8

0xb9ed,	// (0x0005a316) form_field_data_pane_ParamLimits

0xb9ed,	// (0x0005a316) form_field_data_pane

0xba04,	// (0x0005a32d) form_field_data_wide_pane_ParamLimits

0xba04,	// (0x0005a32d) form_field_data_wide_pane

0xba24,	// (0x0005a34d) form_field_popup_pane_ParamLimits

0xba24,	// (0x0005a34d) form_field_popup_pane

0xba3c,	// (0x0005a365) form_field_popup_wide_pane_ParamLimits

0xba3c,	// (0x0005a365) form_field_popup_wide_pane

0x0b36,	// (0x0004f45f) form_field_slider_pane_ParamLimits

0x0b36,	// (0x0004f45f) form_field_slider_pane

0x0b49,	// (0x0004f472) form_field_slider_wide_pane_ParamLimits

0x0b49,	// (0x0004f472) form_field_slider_wide_pane

0x3690,	// (0x00051fb9) data_form_pane

0xba5d,	// (0x0005a386) form_field_data_pane_t1

0x369c,	// (0x00051fc5) input_focus_pane

0x36aa,	// (0x00051fd3) data_form_wide_pane

0x0b8a,	// (0x0004f4b3) form_field_data_wide_pane_t1

0x340d,	// (0x00051d36) input_focus_pane_cp6

0xba77,	// (0x0005a3a0) form_field_popup_pane_t1

0x369c,	// (0x00051fc5) input_focus_pane_cp7

0x36d6,	// (0x00051fff) list_form_pane

0x0bcc,	// (0x0004f4f5) form_field_popup_wide_pane_t1

0x369c,	// (0x00051fc5) input_focus_pane_cp8

0x36e2,	// (0x0005200b) list_form_wide_pane

0xba99,	// (0x0005a3c2) form_field_slider_pane_t1_ParamLimits

0xba99,	// (0x0005a3c2) form_field_slider_pane_t1

0xbab1,	// (0x0005a3da) form_field_slider_pane_t2_ParamLimits

0xbab1,	// (0x0005a3da) form_field_slider_pane_t2

0x0001,

0xf699,	// (0x0005dfc2) form_field_slider_pane_t_ParamLimits

0xf699,	// (0x0005dfc2) form_field_slider_pane_t

0x30ab,	// (0x000519d4) input_focus_pane_cp9_ParamLimits

0x30ab,	// (0x000519d4) input_focus_pane_cp9

0xbac6,	// (0x0005a3ef) slider_cont_pane_ParamLimits

0xbac6,	// (0x0005a3ef) slider_cont_pane

0x36f1,	// (0x0005201a) form_field_slider_wide_pane_t1_ParamLimits

0x36f1,	// (0x0005201a) form_field_slider_wide_pane_t1

0x0c28,	// (0x0004f551) form_field_slider_wide_pane_t2_ParamLimits

0x0c28,	// (0x0004f551) form_field_slider_wide_pane_t2

0x0001,

0xf69e,	// (0x0005dfc7) form_field_slider_wide_pane_t_ParamLimits

0xf69e,	// (0x0005dfc7) form_field_slider_wide_pane_t

0x30ab,	// (0x000519d4) input_focus_pane_cp10_ParamLimits

0x30ab,	// (0x000519d4) input_focus_pane_cp10

0xbada,	// (0x0005a403) slider_cont_pane_cp1_ParamLimits

0xbada,	// (0x0005a403) slider_cont_pane_cp1

0xbaee,	// (0x0005a417) slider_form_pane_cp

0x3703,	// (0x0005202c) input_focus_pane_g1

0x370b,	// (0x00052034) input_focus_pane_g2

0x3713,	// (0x0005203c) input_focus_pane_g3

0x371b,	// (0x00052044) input_focus_pane_g4

0x3723,	// (0x0005204c) input_focus_pane_g5

0x372b,	// (0x00052054) input_focus_pane_g6

0x3733,	// (0x0005205c) input_focus_pane_g7

0x373b,	// (0x00052064) input_focus_pane_g8

0x3743,	// (0x0005206c) input_focus_pane_g9

0x2d46,	// (0x0005166f) input_focus_pane_g10

0x0009,

0xf6a3,	// (0x0005dfcc) input_focus_pane_g

0x5764,	// (0x0005408d) wait_border_pane_g3_copy1

0xbaf6,	// (0x0005a41f) data_form_pane_t1

0x2d46,	// (0x0005166f) wait_anim_pane_g1_copy1

0xbf1f,	// (0x0005a848) data_form_wide_pane_t1

0xbb0f,	// (0x0005a438) list_form_graphic_pane_cp_ParamLimits

0xbb0f,	// (0x0005a438) list_form_graphic_pane_cp

0x66a0,	// (0x00054fc9) slider_form_pane_g1

0x66a9,	// (0x00054fd2) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0005e2b8) slider_form_pane_g

0xbb20,	// (0x0005a449) list_form_graphic_pane_ParamLimits

0xbb20,	// (0x0005a449) list_form_graphic_pane

0x0ca6,	// (0x0004f5cf) list_form_graphic_pane_g1

0x0cae,	// (0x0004f5d7) list_form_graphic_pane_t1_ParamLimits

0x0cae,	// (0x0004f5d7) list_form_graphic_pane_t1

0x2e30,	// (0x00051759) list_highlight_pane_cp5_ParamLimits

0x2e30,	// (0x00051759) list_highlight_pane_cp5

0xbb32,	// (0x0005a45b) find_pane_g1

0x374b,	// (0x00052074) input_find_pane

0xbb3b,	// (0x0005a464) input_find_pane_g1_ParamLimits

0xbb3b,	// (0x0005a464) input_find_pane_g1

0xbb47,	// (0x0005a470) input_find_pane_t1_ParamLimits

0xbb47,	// (0x0005a470) input_find_pane_t1

0xbb5c,	// (0x0005a485) input_find_pane_t2_ParamLimits

0xbb5c,	// (0x0005a485) input_find_pane_t2

0x0001,

0xf6b8,	// (0x0005dfe1) input_find_pane_t_ParamLimits

0xf6b8,	// (0x0005dfe1) input_find_pane_t

0x3754,	// (0x0005207d) input_focus_pane_cp5_ParamLimits

0x3754,	// (0x0005207d) input_focus_pane_cp5

0xc905,	// (0x0005b22e) bg_popup_window_pane_cp2_ParamLimits

0xc905,	// (0x0005b22e) bg_popup_window_pane_cp2

0xc912,	// (0x0005b23b) listscroll_menu_pane_ParamLimits

0xc912,	// (0x0005b23b) listscroll_menu_pane

0xc91e,	// (0x0005b247) popup_submenu_window_ParamLimits

0xc91e,	// (0x0005b247) popup_submenu_window

0x37b1,	// (0x000520da) find_popup_pane_g1

0x37b9,	// (0x000520e2) input_popup_find_pane_cp

0x3754,	// (0x0005207d) input_focus_pane_cp4_ParamLimits

0x3754,	// (0x0005207d) input_focus_pane_cp4

0x37cf,	// (0x000520f8) input_popup_find_pane_t1_ParamLimits

0x37cf,	// (0x000520f8) input_popup_find_pane_t1

0x2d50,	// (0x00051679) bg_popup_sub_pane_cp

0x37fd,	// (0x00052126) listscroll_popup_sub_pane

0x3805,	// (0x0005212e) list_submenu_pane_ParamLimits

0x3805,	// (0x0005212e) list_submenu_pane

0x3816,	// (0x0005213f) scroll_pane_cp4

0x381e,	// (0x00052147) list_single_popup_submenu_pane_ParamLimits

0x381e,	// (0x00052147) list_single_popup_submenu_pane

0x3832,	// (0x0005215b) list_single_popup_submenu_pane_g1

0x383a,	// (0x00052163) list_single_popup_submenu_pane_t1_ParamLimits

0x383a,	// (0x00052163) list_single_popup_submenu_pane_t1

0x30ab,	// (0x000519d4) bg_active_tab_pane_cp1_ParamLimits

0x30ab,	// (0x000519d4) bg_active_tab_pane_cp1

0xc956,	// (0x0005b27f) tabs_2_active_pane_g1

0xc95e,	// (0x0005b287) tabs_2_active_pane_t1

0x30ab,	// (0x000519d4) bg_passive_tab_pane_cp1_ParamLimits

0x30ab,	// (0x000519d4) bg_passive_tab_pane_cp1

0xc956,	// (0x0005b27f) tabs_2_passive_pane_g1

0xc95e,	// (0x0005b287) tabs_2_passive_pane_t1

0x2e30,	// (0x00051759) bg_active_tab_pane_cp4

0xc970,	// (0x0005b299) tabs_2_long_active_pane_t1

0x465f,	// (0x00052f88) bg_passive_tab_pane_cp4

0x133d,	// (0x0004fc66) list_single_midp_graphic_pane_g4_ParamLimits

0x2e30,	// (0x00051759) bg_active_tab_pane_cp5

0xc983,	// (0x0005b2ac) tabs_3_long_active_pane_t1

0x465f,	// (0x00052f88) bg_passive_tab_pane_cp5

0x133d,	// (0x0004fc66) list_single_midp_graphic_pane_g4

0x2e30,	// (0x00051759) bg_popup_window_pane_cp13_ParamLimits

0x2e30,	// (0x00051759) bg_popup_window_pane_cp13

0x38b1,	// (0x000521da) listscroll_popup_fast_pane_ParamLimits

0x38b1,	// (0x000521da) listscroll_popup_fast_pane

0x38c0,	// (0x000521e9) grid_popup_fast_pane_ParamLimits

0x38c0,	// (0x000521e9) grid_popup_fast_pane

0x38d2,	// (0x000521fb) scroll_pane_cp9_ParamLimits

0x38d2,	// (0x000521fb) scroll_pane_cp9

0x7f5f,	// (0x00056888) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7f5f,	// (0x00056888) list_single_graphic_hl_pane_t1_cp2

0x38f6,	// (0x0005221f) input_focus_pane_cp20_ParamLimits

0x38f6,	// (0x0005221f) input_focus_pane_cp20

0x3904,	// (0x0005222d) query_popup_data_pane_t1_ParamLimits

0x3904,	// (0x0005222d) query_popup_data_pane_t1

0x3917,	// (0x00052240) query_popup_data_pane_t2_ParamLimits

0x3917,	// (0x00052240) query_popup_data_pane_t2

0x395d,	// (0x00052286) query_popup_data_pane_t3_ParamLimits

0x395d,	// (0x00052286) query_popup_data_pane_t3

0x399e,	// (0x000522c7) query_popup_data_pane_t4_ParamLimits

0x399e,	// (0x000522c7) query_popup_data_pane_t4

0x39da,	// (0x00052303) query_popup_data_pane_t5_ParamLimits

0x39da,	// (0x00052303) query_popup_data_pane_t5

0x0004,

0xf6bd,	// (0x0005dfe6) query_popup_data_pane_t_ParamLimits

0xf6bd,	// (0x0005dfe6) query_popup_data_pane_t

0x3703,	// (0x0005202c) bg_set_opt_pane_g1

0x370b,	// (0x00052034) bg_set_opt_pane_g2

0x3713,	// (0x0005203c) bg_set_opt_pane_g3

0x371b,	// (0x00052044) bg_set_opt_pane_g4

0x3723,	// (0x0005204c) bg_set_opt_pane_g5

0x372b,	// (0x00052054) bg_set_opt_pane_g6

0x3733,	// (0x0005205c) bg_set_opt_pane_g7

0x373b,	// (0x00052064) bg_set_opt_pane_g8

0x3743,	// (0x0005206c) bg_set_opt_pane_g9

0x0008,

0xf6c8,	// (0x0005dff1) bg_set_opt_pane_g

0x0fa1,	// (0x0004f8ca) control_top_pane_stacon_ParamLimits

0x0fa1,	// (0x0004f8ca) control_top_pane_stacon

0x0ff4,	// (0x0004f91d) signal_pane_stacon_ParamLimits

0x0ff4,	// (0x0004f91d) signal_pane_stacon

0x3f84,	// (0x000528ad) stacon_top_pane_g1_ParamLimits

0x3f84,	// (0x000528ad) stacon_top_pane_g1

0x1019,	// (0x0004f942) title_pane_stacon_ParamLimits

0x1019,	// (0x0004f942) title_pane_stacon

0x1043,	// (0x0004f96c) uni_indicator_pane_stacon_ParamLimits

0x1043,	// (0x0004f96c) uni_indicator_pane_stacon

0x1058,	// (0x0004f981) battery_pane_stacon_ParamLimits

0x1058,	// (0x0004f981) battery_pane_stacon

0x109c,	// (0x0004f9c5) control_bottom_pane_stacon_ParamLimits

0x109c,	// (0x0004f9c5) control_bottom_pane_stacon

0x10bf,	// (0x0004f9e8) navi_pane_stacon_ParamLimits

0x10bf,	// (0x0004f9e8) navi_pane_stacon

0x3fa6,	// (0x000528cf) stacon_bottom_pane_g1_ParamLimits

0x3fa6,	// (0x000528cf) stacon_bottom_pane_g1

0x0d02,	// (0x0004f62b) aid_levels_signal_lsc_ParamLimits

0x0d02,	// (0x0004f62b) aid_levels_signal_lsc

0x0d19,	// (0x0004f642) signal_pane_stacon_g1_ParamLimits

0x0d19,	// (0x0004f642) signal_pane_stacon_g1

0x0d2d,	// (0x0004f656) signal_pane_stacon_g2_ParamLimits

0x0d2d,	// (0x0004f656) signal_pane_stacon_g2

0x0001,

0xf6db,	// (0x0005e004) signal_pane_stacon_g_ParamLimits

0xf6db,	// (0x0005e004) signal_pane_stacon_g

0x0d62,	// (0x0004f68b) title_pane_stacon_t1_ParamLimits

0x0d62,	// (0x0004f68b) title_pane_stacon_t1

0x3a1e,	// (0x00052347) uni_indicator_pane_stacon_g1

0x3a28,	// (0x00052351) uni_indicator_pane_stacon_g2

0x3a32,	// (0x0005235b) uni_indicator_pane_stacon_g3

0x3a3c,	// (0x00052365) uni_indicator_pane_stacon_g4

0x0003,

0xf6e7,	// (0x0005e010) uni_indicator_pane_stacon_g

0x0d87,	// (0x0004f6b0) control_top_pane_stacon_g1

0x0d8f,	// (0x0004f6b8) control_top_pane_stacon_t1_ParamLimits

0x0d8f,	// (0x0004f6b8) control_top_pane_stacon_t1

0x0dc6,	// (0x0004f6ef) aid_levels_battery_lsc_ParamLimits

0x0dc6,	// (0x0004f6ef) aid_levels_battery_lsc

0x0dde,	// (0x0004f707) battery_pane_stacon_g1_ParamLimits

0x0dde,	// (0x0004f707) battery_pane_stacon_g1

0x0df1,	// (0x0004f71a) battery_pane_stacon_g2_ParamLimits

0x0df1,	// (0x0004f71a) battery_pane_stacon_g2

0x0001,

0xf6f0,	// (0x0005e019) battery_pane_stacon_g_ParamLimits

0xf6f0,	// (0x0005e019) battery_pane_stacon_g

0x0e2f,	// (0x0004f758) navi_icon_pane_stacon

0x0e43,	// (0x0004f76c) navi_navi_pane_stacon

0x0e2f,	// (0x0004f758) navi_text_pane_stacon

0x0d87,	// (0x0004f6b0) control_bottom_pane_stacon_g1

0x0e57,	// (0x0004f780) control_bottom_pane_stacon_t1_ParamLimits

0x0e57,	// (0x0004f780) control_bottom_pane_stacon_t1

0xc995,	// (0x0005b2be) grid_app_pane_ParamLimits

0xc995,	// (0x0005b2be) grid_app_pane

0xc9cd,	// (0x0005b2f6) scroll_pane_cp15_ParamLimits

0xc9cd,	// (0x0005b2f6) scroll_pane_cp15

0xc9e6,	// (0x0005b30f) cell_app_pane_ParamLimits

0xc9e6,	// (0x0005b30f) cell_app_pane

0xca2b,	// (0x0005b354) cell_app_pane_g1_ParamLimits

0xca2b,	// (0x0005b354) cell_app_pane_g1

0x3ae1,	// (0x0005240a) cell_app_pane_g2_ParamLimits

0x3ae1,	// (0x0005240a) cell_app_pane_g2

0x0001,

0xf6f5,	// (0x0005e01e) cell_app_pane_g_ParamLimits

0xf6f5,	// (0x0005e01e) cell_app_pane_g

0x3aed,	// (0x00052416) cell_app_pane_t1_ParamLimits

0x3aed,	// (0x00052416) cell_app_pane_t1

0x3b04,	// (0x0005242d) grid_highlight_pane_ParamLimits

0x3b04,	// (0x0005242d) grid_highlight_pane

0x3703,	// (0x0005202c) cell_highlight_pane_g1

0x370b,	// (0x00052034) cell_highlight_pane_g2

0x3713,	// (0x0005203c) cell_highlight_pane_g3

0x371b,	// (0x00052044) cell_highlight_pane_g4

0x3723,	// (0x0005204c) cell_highlight_pane_g5

0x372b,	// (0x00052054) cell_highlight_pane_g6

0x3733,	// (0x0005205c) cell_highlight_pane_g7

0x373b,	// (0x00052064) cell_highlight_pane_g8

0x3743,	// (0x0005206c) cell_highlight_pane_g9

0x2d46,	// (0x0005166f) cell_highlight_pane_g10

0x0009,

0xf6a3,	// (0x0005dfcc) cell_highlight_pane_g

0x3b15,	// (0x0005243e) bg_scroll_pane

0x0ea1,	// (0x0004f7ca) scroll_handle_pane

0x3b5c,	// (0x00052485) scroll_bg_pane_g1

0x3b71,	// (0x0005249a) scroll_bg_pane_g2

0x3b89,	// (0x000524b2) scroll_bg_pane_g3

0x0002,

0xf6fa,	// (0x0005e023) scroll_bg_pane_g

0x3b9e,	// (0x000524c7) scroll_handle_focus_pane_ParamLimits

0x3b9e,	// (0x000524c7) scroll_handle_focus_pane

0x3b5c,	// (0x00052485) scroll_handle_pane_g1

0x3bab,	// (0x000524d4) scroll_handle_pane_g2

0x3b89,	// (0x000524b2) scroll_handle_pane_g3

0x0002,

0xf701,	// (0x0005e02a) scroll_handle_pane_g

0x3754,	// (0x0005207d) bg_popup_sub_pane_cp21_ParamLimits

0x3754,	// (0x0005207d) bg_popup_sub_pane_cp21

0x3bbf,	// (0x000524e8) popup_fep_japan_predictive_window_t1_ParamLimits

0x3bbf,	// (0x000524e8) popup_fep_japan_predictive_window_t1

0x3bd9,	// (0x00052502) popup_fep_japan_predictive_window_t2_ParamLimits

0x3bd9,	// (0x00052502) popup_fep_japan_predictive_window_t2

0x3c0c,	// (0x00052535) popup_fep_japan_predictive_window_t3_ParamLimits

0x3c0c,	// (0x00052535) popup_fep_japan_predictive_window_t3

0x0002,

0xf708,	// (0x0005e031) popup_fep_japan_predictive_window_t_ParamLimits

0xf708,	// (0x0005e031) popup_fep_japan_predictive_window_t

0x2d50,	// (0x00051679) bg_popup_sub_pane_cp23

0x3c43,	// (0x0005256c) listscroll_japin_cand_pane

0x3c4b,	// (0x00052574) popup_fep_japan_candidate_window_t1

0x3c59,	// (0x00052582) candidate_pane_ParamLimits

0x3c59,	// (0x00052582) candidate_pane

0x3c6b,	// (0x00052594) scroll_pane_cp30

0x3c73,	// (0x0005259c) list_single_popup_jap_candidate_pane_ParamLimits

0x3c73,	// (0x0005259c) list_single_popup_jap_candidate_pane

0x2d50,	// (0x00051679) list_highlight_pane_cp30

0x3c88,	// (0x000525b1) list_single_popup_jap_candidate_pane_t1

0x3c97,	// (0x000525c0) level_1_signal

0x3ca4,	// (0x000525cd) level_2_signal

0x3cbd,	// (0x000525e6) level_3_signal

0x3cca,	// (0x000525f3) level_4_signal

0x3cd7,	// (0x00052600) level_5_signal

0x3ce4,	// (0x0005260d) level_6_signal

0x3cf1,	// (0x0005261a) level_7_signal

0x3c97,	// (0x000525c0) level_1_battery

0x3ca4,	// (0x000525cd) level_2_battery

0x3cbd,	// (0x000525e6) level_3_battery

0x3cca,	// (0x000525f3) level_4_battery

0x3cd7,	// (0x00052600) level_5_battery

0x3ce4,	// (0x0005260d) level_6_battery

0x3cf1,	// (0x0005261a) level_7_battery

0x3d16,	// (0x0005263f) list_menu_pane_ParamLimits

0x3d16,	// (0x0005263f) list_menu_pane

0x3d27,	// (0x00052650) scroll_pane_cp25_ParamLimits

0x3d27,	// (0x00052650) scroll_pane_cp25

0x3d40,	// (0x00052669) list_double2_graphic_pane_cp2_ParamLimits

0x3d40,	// (0x00052669) list_double2_graphic_pane_cp2

0x3d40,	// (0x00052669) list_double2_large_graphic_pane_cp2_ParamLimits

0x3d40,	// (0x00052669) list_double2_large_graphic_pane_cp2

0x3d40,	// (0x00052669) list_double2_pane_cp2_ParamLimits

0x3d40,	// (0x00052669) list_double2_pane_cp2

0x3d40,	// (0x00052669) list_double_graphic_pane_cp2_ParamLimits

0x3d40,	// (0x00052669) list_double_graphic_pane_cp2

0x3d40,	// (0x00052669) list_double_large_graphic_pane_cp2_ParamLimits

0x3d40,	// (0x00052669) list_double_large_graphic_pane_cp2

0x3d40,	// (0x00052669) list_double_number_pane_cp2_ParamLimits

0x3d40,	// (0x00052669) list_double_number_pane_cp2

0x3d40,	// (0x00052669) list_double_pane_cp2_ParamLimits

0x3d40,	// (0x00052669) list_double_pane_cp2

0xca5e,	// (0x0005b387) list_single_2graphic_pane_cp2_ParamLimits

0xca5e,	// (0x0005b387) list_single_2graphic_pane_cp2

0xca5e,	// (0x0005b387) list_single_graphic_heading_pane_cp2_ParamLimits

0xca5e,	// (0x0005b387) list_single_graphic_heading_pane_cp2

0xca5e,	// (0x0005b387) list_single_graphic_pane_cp2_ParamLimits

0xca5e,	// (0x0005b387) list_single_graphic_pane_cp2

0xca5e,	// (0x0005b387) list_single_heading_pane_cp2_ParamLimits

0xca5e,	// (0x0005b387) list_single_heading_pane_cp2

0x3d7d,	// (0x000526a6) list_single_large_graphic_pane_cp2_ParamLimits

0x3d7d,	// (0x000526a6) list_single_large_graphic_pane_cp2

0xca5e,	// (0x0005b387) list_single_number_heading_pane_cp2_ParamLimits

0xca5e,	// (0x0005b387) list_single_number_heading_pane_cp2

0xca5e,	// (0x0005b387) list_single_number_pane_cp2_ParamLimits

0xca5e,	// (0x0005b387) list_single_number_pane_cp2

0xca5e,	// (0x0005b387) list_single_pane_cp2_ParamLimits

0xca5e,	// (0x0005b387) list_single_pane_cp2

0x3dd3,	// (0x000526fc) bg_popup_sub_pane_cp22

0x0f53,	// (0x0004f87c) popup_side_volume_key_window_g1

0x0f7d,	// (0x0004f8a6) popup_side_volume_key_window_t1

0x0f99,	// (0x0004f8c2) volume_small_pane_cp1

0x30ab,	// (0x000519d4) bg_popup_sub_pane_cp24_ParamLimits

0x30ab,	// (0x000519d4) bg_popup_sub_pane_cp24

0x3de9,	// (0x00052712) fep_china_uni_candidate_pane_ParamLimits

0x3de9,	// (0x00052712) fep_china_uni_candidate_pane

0x3dfd,	// (0x00052726) fep_china_uni_entry_pane

0x3e0d,	// (0x00052736) popup_fep_china_uni_window_g1

0x3e29,	// (0x00052752) fep_china_uni_entry_pane_g1

0x3e31,	// (0x0005275a) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x0005e05e) fep_china_uni_entry_pane_g

0x3e39,	// (0x00052762) fep_entry_item_pane

0x3e43,	// (0x0005276c) fep_candidate_item_pane

0x3e4b,	// (0x00052774) fep_china_uni_candidate_pane_g1

0x3e53,	// (0x0005277c) fep_china_uni_candidate_pane_g2

0x3e5b,	// (0x00052784) fep_china_uni_candidate_pane_g3

0x3e63,	// (0x0005278c) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x0005e063) fep_china_uni_candidate_pane_g

0x2d46,	// (0x0005166f) fep_entry_item_pane_g1

0x3e6b,	// (0x00052794) fep_entry_item_pane_t1_ParamLimits

0x3e6b,	// (0x00052794) fep_entry_item_pane_t1

0x3e81,	// (0x000527aa) fep_candidate_item_pane_t1_ParamLimits

0x3e81,	// (0x000527aa) fep_candidate_item_pane_t1

0x3e96,	// (0x000527bf) fep_candidate_item_pane_t2_ParamLimits

0x3e96,	// (0x000527bf) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x0005e06c) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x0005e06c) fep_candidate_item_pane_t

0x2e30,	// (0x00051759) list_highlight_pane_cp31_ParamLimits

0x2e30,	// (0x00051759) list_highlight_pane_cp31

0x3ea8,	// (0x000527d1) level_1_signal_lsc

0x3eb1,	// (0x000527da) level_2_signal_lsc

0x3eba,	// (0x000527e3) level_3_signal_lsc

0x3ec3,	// (0x000527ec) level_4_signal_lsc

0x3ecc,	// (0x000527f5) level_5_signal_lsc

0x3ed5,	// (0x000527fe) level_6_signal_lsc

0x3ede,	// (0x00052807) level_7_signal_lsc

0x3ede,	// (0x00052807) level_1_battery_lsc

0x3ee7,	// (0x00052810) level_2_battery_lsc

0x3ef0,	// (0x00052819) level_3_battery_lsc

0x3ef9,	// (0x00052822) level_4_battery_lsc

0x3f02,	// (0x0005282b) level_5_battery_lsc

0x3f0b,	// (0x00052834) level_6_battery_lsc

0x3ea8,	// (0x000527d1) level_7_battery_lsc

0x3f14,	// (0x0005283d) scroll_handle_focus_pane_g1

0x3f1d,	// (0x00052846) scroll_handle_focus_pane_g2

0x3f26,	// (0x0005284f) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x0005e071) scroll_handle_focus_pane_g

0xbb7a,	// (0x0005a4a3) list_single_2graphic_pane_g1_ParamLimits

0xbb7a,	// (0x0005a4a3) list_single_2graphic_pane_g1

0xc8d4,	// (0x0005b1fd) list_single_2graphic_pane_g2_ParamLimits

0xc8d4,	// (0x0005b1fd) list_single_2graphic_pane_g2

0x2578,	// (0x00050ea1) list_single_2graphic_pane_g3_ParamLimits

0x2578,	// (0x00050ea1) list_single_2graphic_pane_g3

0xcabe,	// (0x0005b3e7) list_single_2graphic_pane_g4_ParamLimits

0xcabe,	// (0x0005b3e7) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x0005e078) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x0005e078) list_single_2graphic_pane_g

0xbb86,	// (0x0005a4af) list_single_2graphic_pane_t1_ParamLimits

0xbb86,	// (0x0005a4af) list_single_2graphic_pane_t1

0xbbb4,	// (0x0005a4dd) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbbb4,	// (0x0005a4dd) list_double2_graphic_large_graphic_pane_g1

0xc8d4,	// (0x0005b1fd) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xc8d4,	// (0x0005b1fd) list_double2_graphic_large_graphic_pane_g2

0x2578,	// (0x00050ea1) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x2578,	// (0x00050ea1) list_double2_graphic_large_graphic_pane_g3

0xbbc6,	// (0x0005a4ef) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbbc6,	// (0x0005a4ef) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x0005e081) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x0005e081) list_double2_graphic_large_graphic_pane_g

0xbbd2,	// (0x0005a4fb) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbbd2,	// (0x0005a4fb) list_double2_graphic_large_graphic_pane_t1

0xbbe8,	// (0x0005a511) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbbe8,	// (0x0005a511) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x0005e08a) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x0005e08a) list_double2_graphic_large_graphic_pane_t

0x406e,	// (0x00052997) popup_fast_swap_window_ParamLimits

0x406e,	// (0x00052997) popup_fast_swap_window

0x408a,	// (0x000529b3) popup_side_volume_key_window

0x40a6,	// (0x000529cf) stacon_top_pane

0x40b0,	// (0x000529d9) status_pane_ParamLimits

0x40b0,	// (0x000529d9) status_pane

0x40a6,	// (0x000529cf) status_small_pane

0x2d50,	// (0x00051679) control_pane

0x2d50,	// (0x00051679) stacon_bottom_pane

0x367f,	// (0x00051fa8) scroll_pane_cp121

0x3676,	// (0x00051f9f) set_content_pane

0x3f4a,	// (0x00052873) bg_active_tab_pane_g1_cp1

0x3f38,	// (0x00052861) bg_active_tab_pane_g2_cp1

0x3f53,	// (0x0005287c) bg_active_tab_pane_g3_cp1

0x3f4a,	// (0x00052873) bg_passive_tab_pane_g1_cp1

0x3f38,	// (0x00052861) bg_passive_tab_pane_g2_cp1

0x3f53,	// (0x0005287c) bg_passive_tab_pane_g3_cp1

0xcaca,	// (0x0005b3f3) bg_active_tab_pane_g1_cp2

0x3f38,	// (0x00052861) bg_active_tab_pane_g2_cp2

0xcad3,	// (0x0005b3fc) bg_active_tab_pane_g3_cp2

0xcaca,	// (0x0005b3f3) bg_passive_tab_pane_g1_cp2

0x3f38,	// (0x00052861) bg_passive_tab_pane_g2_cp2

0xcad3,	// (0x0005b3fc) bg_passive_tab_pane_g3_cp2

0xcadc,	// (0x0005b405) bg_active_tab_pane_g1_cp3

0x3f38,	// (0x00052861) bg_active_tab_pane_g2_cp3

0xcae5,	// (0x0005b40e) bg_active_tab_pane_g3_cp3

0xcadc,	// (0x0005b405) bg_passive_tab_pane_g1_cp3

0x3f38,	// (0x00052861) bg_passive_tab_pane_g2_cp3

0xcae5,	// (0x0005b40e) bg_passive_tab_pane_g3_cp3

0xcaee,	// (0x0005b417) bg_active_tab_pane_g1_cp4

0x3f38,	// (0x00052861) bg_active_tab_pane_g2_cp4

0xcaf7,	// (0x0005b420) bg_active_tab_pane_g3_cp4

0xcaee,	// (0x0005b417) bg_passive_tab_pane_g1_cp4

0x3f38,	// (0x00052861) bg_passive_tab_pane_g2_cp4

0xcaf7,	// (0x0005b420) bg_passive_tab_pane_g3_cp4

0x3fc2,	// (0x000528eb) bg_active_tab_pane_g1_cp5

0x3f38,	// (0x00052861) bg_active_tab_pane_g2_cp5

0x3fcb,	// (0x000528f4) bg_active_tab_pane_g3_cp5

0x3fc2,	// (0x000528eb) bg_passive_tab_pane_g1_cp5

0x3f38,	// (0x00052861) bg_passive_tab_pane_g2_cp5

0x3fcb,	// (0x000528f4) bg_passive_tab_pane_g3_cp5

0xcb00,	// (0x0005b429) list_set_graphic_pane_ParamLimits

0xcb00,	// (0x0005b429) list_set_graphic_pane

0x2d50,	// (0x00051679) bg_set_opt_pane_cp4

0xcb12,	// (0x0005b43b) list_set_graphic_pane_g1_ParamLimits

0xcb12,	// (0x0005b43b) list_set_graphic_pane_g1

0xcb1e,	// (0x0005b447) list_set_graphic_pane_g2_ParamLimits

0xcb1e,	// (0x0005b447) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x0005e08f) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x0005e08f) list_set_graphic_pane_g

0x0009,

0xfacb,	// (0x0005e3f4) volume_small_pane_cp_g

0x4021,	// (0x0005294a) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4021,	// (0x0005294a) list_double2_large_graphic_pane_g1_cp2

0x402d,	// (0x00052956) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x402d,	// (0x00052956) list_double2_large_graphic_pane_g2_cp2

0x403e,	// (0x00052967) list_double2_large_graphic_pane_g3_cp2

0x4046,	// (0x0005296f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4046,	// (0x0005296f) list_double2_large_graphic_pane_t1_cp2

0x405c,	// (0x00052985) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x405c,	// (0x00052985) list_double2_large_graphic_pane_t2_cp2

0x623d,	// (0x00054b66) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x623d,	// (0x00054b66) list_double_large_graphic_pane_g1_cp2

0x624e,	// (0x00054b77) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x624e,	// (0x00054b77) list_double_large_graphic_pane_g2_cp2

0x41c0,	// (0x00052ae9) list_double_large_graphic_pane_g3_cp2

0x625f,	// (0x00054b88) list_double_large_graphic_pane_g4_cp

0x6267,	// (0x00054b90) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6267,	// (0x00054b90) list_double_large_graphic_pane_t1_cp2

0x627e,	// (0x00054ba7) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x627e,	// (0x00054ba7) list_double_large_graphic_pane_t2_cp2

0x40be,	// (0x000529e7) list_double2_graphic_pane_g1_cp2_ParamLimits

0x40be,	// (0x000529e7) list_double2_graphic_pane_g1_cp2

0x40cc,	// (0x000529f5) list_double2_graphic_pane_g2_cp2_ParamLimits

0x40cc,	// (0x000529f5) list_double2_graphic_pane_g2_cp2

0x40dd,	// (0x00052a06) list_double2_graphic_pane_g3_cp2

0x40e7,	// (0x00052a10) list_double2_graphic_pane_t1_cp2_ParamLimits

0x40e7,	// (0x00052a10) list_double2_graphic_pane_t1_cp2

0x40fd,	// (0x00052a26) list_double2_graphic_pane_t2_cp2_ParamLimits

0x40fd,	// (0x00052a26) list_double2_graphic_pane_t2_cp2

0x410f,	// (0x00052a38) list_single_number_heading_pane_g1_cp2_ParamLimits

0x410f,	// (0x00052a38) list_single_number_heading_pane_g1_cp2

0x411b,	// (0x00052a44) list_single_number_heading_pane_g2_cp2

0x4123,	// (0x00052a4c) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4123,	// (0x00052a4c) list_single_number_heading_pane_t1_cp2

0x4139,	// (0x00052a62) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4139,	// (0x00052a62) list_single_number_heading_pane_t2_cp2

0x414b,	// (0x00052a74) list_single_number_heading_pane_t3_cp2_ParamLimits

0x414b,	// (0x00052a74) list_single_number_heading_pane_t3_cp2

0x410f,	// (0x00052a38) list_single_heading_pane_g1_cp2_ParamLimits

0x410f,	// (0x00052a38) list_single_heading_pane_g1_cp2

0x411b,	// (0x00052a44) list_single_heading_pane_g2_cp2

0x4123,	// (0x00052a4c) list_single_heading_pane_t1_cp2_ParamLimits

0x4123,	// (0x00052a4c) list_single_heading_pane_t1_cp2

0x6045,	// (0x0005496e) list_single_heading_pane_t2_cp2_ParamLimits

0x6045,	// (0x0005496e) list_single_heading_pane_t2_cp2

0x5f96,	// (0x000548bf) list_double_graphic_pane_g1_cp2_ParamLimits

0x5f96,	// (0x000548bf) list_double_graphic_pane_g1_cp2

0x5c63,	// (0x0005458c) list_double_graphic_pane_g2_cp2_ParamLimits

0x5c63,	// (0x0005458c) list_double_graphic_pane_g2_cp2

0x5fa2,	// (0x000548cb) list_double_graphic_pane_g3_cp2

0x5faa,	// (0x000548d3) list_double_graphic_pane_t1_cp2_ParamLimits

0x5faa,	// (0x000548d3) list_double_graphic_pane_t1_cp2

0x5fc0,	// (0x000548e9) list_double_graphic_pane_t2_cp2_ParamLimits

0x5fc0,	// (0x000548e9) list_double_graphic_pane_t2_cp2

0x3cb1,	// (0x000525da) list_double_number_pane_g1_cp2_ParamLimits

0x3cb1,	// (0x000525da) list_double_number_pane_g1_cp2

0x41c0,	// (0x00052ae9) list_double_number_pane_g2_cp2

0x5f5a,	// (0x00054883) list_double_number_pane_t1_cp2_ParamLimits

0x5f5a,	// (0x00054883) list_double_number_pane_t1_cp2

0x5f6e,	// (0x00054897) list_double_number_pane_t2_cp2_ParamLimits

0x5f6e,	// (0x00054897) list_double_number_pane_t2_cp2

0x5f84,	// (0x000548ad) list_double_number_pane_t3_cp2_ParamLimits

0x5f84,	// (0x000548ad) list_double_number_pane_t3_cp2

0x5e43,	// (0x0005476c) list_single_graphic_pane_g1_cp2_ParamLimits

0x5e43,	// (0x0005476c) list_single_graphic_pane_g1_cp2

0x4218,	// (0x00052b41) list_single_graphic_pane_g2_cp2_ParamLimits

0x4218,	// (0x00052b41) list_single_graphic_pane_g2_cp2

0x4224,	// (0x00052b4d) list_single_graphic_pane_g3_cp2

0x5e19,	// (0x00054742) list_single_graphic_pane_t1_cp2_ParamLimits

0x5e19,	// (0x00054742) list_single_graphic_pane_t1_cp2

0x4218,	// (0x00052b41) list_single_number_pane_g1_cp2_ParamLimits

0x4218,	// (0x00052b41) list_single_number_pane_g1_cp2

0x4224,	// (0x00052b4d) list_single_number_pane_g2_cp2

0x5e19,	// (0x00054742) list_single_number_pane_t1_cp2_ParamLimits

0x5e19,	// (0x00054742) list_single_number_pane_t1_cp2

0x5e2f,	// (0x00054758) list_single_number_pane_t2_cp2_ParamLimits

0x5e2f,	// (0x00054758) list_single_number_pane_t2_cp2

0x402d,	// (0x00052956) list_double2_pane_g1_cp2_ParamLimits

0x402d,	// (0x00052956) list_double2_pane_g1_cp2

0x403e,	// (0x00052967) list_double2_pane_g2_cp2

0x4198,	// (0x00052ac1) list_double2_pane_t1_cp2_ParamLimits

0x4198,	// (0x00052ac1) list_double2_pane_t1_cp2

0x41ae,	// (0x00052ad7) list_double2_pane_t2_cp2_ParamLimits

0x41ae,	// (0x00052ad7) list_double2_pane_t2_cp2

0x3cb1,	// (0x000525da) list_double_pane_g1_cp2_ParamLimits

0x3cb1,	// (0x000525da) list_double_pane_g1_cp2

0x41c0,	// (0x00052ae9) list_double_pane_g2_cp2

0x41c8,	// (0x00052af1) list_double_pane_t1_cp2_ParamLimits

0x41c8,	// (0x00052af1) list_double_pane_t1_cp2

0x41de,	// (0x00052b07) list_double_pane_t2_cp2_ParamLimits

0x41de,	// (0x00052b07) list_double_pane_t2_cp2

0x4208,	// (0x00052b31) list_single_pane_cp2_g3

0x4218,	// (0x00052b41) list_single_pane_g1_cp2_ParamLimits

0x4218,	// (0x00052b41) list_single_pane_g1_cp2

0x4224,	// (0x00052b4d) list_single_pane_g2_cp2

0x422c,	// (0x00052b55) list_single_pane_t1_cp2_ParamLimits

0x422c,	// (0x00052b55) list_single_pane_t1_cp2

0x4244,	// (0x00052b6d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4244,	// (0x00052b6d) list_single_large_graphic_pane_g1_cp2

0x4250,	// (0x00052b79) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4250,	// (0x00052b79) list_single_large_graphic_pane_g2_cp2

0x425c,	// (0x00052b85) list_single_large_graphic_pane_g3_cp2

0x4264,	// (0x00052b8d) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4264,	// (0x00052b8d) list_single_large_graphic_pane_g4_cp1

0x427e,	// (0x00052ba7) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x427e,	// (0x00052ba7) list_single_large_graphic_pane_t1_cp2

0x5de5,	// (0x0005470e) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5de5,	// (0x0005470e) list_single_graphic_heading_pane_g1_cp2

0x5db2,	// (0x000546db) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5db2,	// (0x000546db) list_single_graphic_heading_pane_g4_cp2

0x4224,	// (0x00052b4d) list_single_graphic_heading_pane_g5_cp2

0x5df1,	// (0x0005471a) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5df1,	// (0x0005471a) list_single_graphic_heading_pane_t1_cp2

0x5e07,	// (0x00054730) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5e07,	// (0x00054730) list_single_graphic_heading_pane_t2_cp2

0x5da6,	// (0x000546cf) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5da6,	// (0x000546cf) list_single_2graphic_pane_g1_cp2

0x5db2,	// (0x000546db) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5db2,	// (0x000546db) list_single_2graphic_pane_g2_cp2

0x4224,	// (0x00052b4d) list_single_2graphic_pane_g3_cp2

0x5dc3,	// (0x000546ec) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5dc3,	// (0x000546ec) list_single_2graphic_pane_g4_cp2

0x5dcf,	// (0x000546f8) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5dcf,	// (0x000546f8) list_single_2graphic_pane_t1_cp2

0x2d46,	// (0x0005166f) list_highlight_pane_g10_cp1

0x596f,	// (0x00054298) list_highlight_pane_g1_cp1

0x5977,	// (0x000542a0) list_highlight_pane_g2_cp1

0x597f,	// (0x000542a8) list_highlight_pane_g3_cp1

0x5987,	// (0x000542b0) list_highlight_pane_g4_cp1

0x598f,	// (0x000542b8) list_highlight_pane_g5_cp1

0x5997,	// (0x000542c0) list_highlight_pane_g6_cp1

0x599f,	// (0x000542c8) list_highlight_pane_g7_cp1

0x59a7,	// (0x000542d0) list_highlight_pane_g8_cp1

0x59af,	// (0x000542d8) list_highlight_pane_g9_cp1

0xd816,	// (0x0005c13f) form_field_slider_pane_t3

0xd824,	// (0x0005c14d) form_field_slider_pane_t4

0x58ab,	// (0x000541d4) slider_form_pane_ParamLimits

0x58ab,	// (0x000541d4) slider_form_pane

0x2d50,	// (0x00051679) control_abbreviations

0x2d50,	// (0x00051679) control_conventions

0x2d50,	// (0x00051679) control_definitions

0x2d50,	// (0x00051679) format_table_attribute

0x608f,	// (0x000549b8) bg_popup_preview_window_pane_g9

0x2d50,	// (0x00051679) format_table_data2

0x2d50,	// (0x00051679) format_table_data3

0x2d50,	// (0x00051679) format_table_data_example

0x0008,

0x2d50,	// (0x00051679) intro_purpose

0xf8ef,	// (0x0005e218) bg_popup_preview_window_pane_g

0x2d50,	// (0x00051679) texts_category

0x2d50,	// (0x00051679) texts_graphics

0x4294,	// (0x00052bbd) text_digital

0x42a3,	// (0x00052bcc) text_primary

0x42b2,	// (0x00052bdb) text_primary_small

0x42c1,	// (0x00052bea) text_secondary

0x42d0,	// (0x00052bf9) text_title

0x679b,	// (0x000550c4) bg_passive_tab_pane_g1_cp3_srt

0x3f38,	// (0x00052861) bg_passive_tab_pane_g2_cp3_srt

0x67a4,	// (0x000550cd) bg_passive_tab_pane_g3_cp3_srt

0x30ab,	// (0x000519d4) bg_active_tab_pane_cp3_srt_ParamLimits

0x30ab,	// (0x000519d4) bg_active_tab_pane_cp3_srt

0x67ad,	// (0x000550d6) tabs_4_active_pane_srt_g1

0xdba8,	// (0x0005c4d1) tabs_4_active_pane_srt_t1_ParamLimits

0xdba8,	// (0x0005c4d1) tabs_4_active_pane_srt_t1

0x679b,	// (0x000550c4) bg_active_tab_pane_g1_cp3_copy1

0x3f38,	// (0x00052861) bg_active_tab_pane_g2_cp3_copy1

0x67a4,	// (0x000550cd) bg_active_tab_pane_g3_cp3_copy1

0x2e30,	// (0x00051759) tabs_2_long_active_pane_srt_ParamLimits

0x2e30,	// (0x00051759) tabs_2_long_active_pane_srt

0x2e30,	// (0x00051759) tabs_2_long_passive_pane_srt_ParamLimits

0x2e30,	// (0x00051759) tabs_2_long_passive_pane_srt

0x465f,	// (0x00052f88) bg_passive_tab_pane_cp4_srt_ParamLimits

0x465f,	// (0x00052f88) bg_passive_tab_pane_cp4_srt

0x64d3,	// (0x00054dfc) bg_passive_tab_pane_g1_cp4_srt

0x3f38,	// (0x00052861) bg_passive_tab_pane_g2_cp4_srt

0x64dc,	// (0x00054e05) bg_passive_tab_pane_g3_cp4_srt

0x2e30,	// (0x00051759) bg_active_tab_pane_cp4_srt_ParamLimits

0x2e30,	// (0x00051759) bg_active_tab_pane_cp4_srt

0xd9b6,	// (0x0005c2df) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd9b6,	// (0x0005c2df) tabs_2_long_active_pane_srt_t1

0x64d3,	// (0x00054dfc) bg_active_tab_pane_g1_cp4_srt

0x3f38,	// (0x00052861) bg_active_tab_pane_g2_cp4_srt

0x64dc,	// (0x00054e05) bg_active_tab_pane_g3_cp4_srt

0x30ab,	// (0x000519d4) tabs_3_long_active_pane_srt_ParamLimits

0x30ab,	// (0x000519d4) tabs_3_long_active_pane_srt

0x30ab,	// (0x000519d4) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x30ab,	// (0x000519d4) tabs_3_long_passive_pane_cp_srt

0x30ab,	// (0x000519d4) tabs_3_long_passive_pane_srt_ParamLimits

0x30ab,	// (0x000519d4) tabs_3_long_passive_pane_srt

0x465f,	// (0x00052f88) bg_passive_tab_pane_cp5_srt_ParamLimits

0x465f,	// (0x00052f88) bg_passive_tab_pane_cp5_srt

0x3fc2,	// (0x000528eb) bg_passive_tab_pane_g1_cp5_srt

0x3f38,	// (0x00052861) bg_passive_tab_pane_g2_cp5_srt

0x3fcb,	// (0x000528f4) bg_passive_tab_pane_g3_cp5_srt

0x2e30,	// (0x00051759) bg_active_tab_pane_cp5_srt_ParamLimits

0x2e30,	// (0x00051759) bg_active_tab_pane_cp5_srt

0xd9a0,	// (0x0005c2c9) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd9a0,	// (0x0005c2c9) tabs_3_long_active_pane_srt_t1

0x3fc2,	// (0x000528eb) bg_active_tab_pane_g1_cp5_srt

0x3f38,	// (0x00052861) bg_active_tab_pane_g2_cp5_srt

0x3fcb,	// (0x000528f4) bg_active_tab_pane_g3_cp5_srt

0x64b3,	// (0x00054ddc) navi_text_pane_srt_t1

0x64ab,	// (0x00054dd4) navi_icon_pane_srt_g1

0x44c5,	// (0x00052dee) midp_editing_number_pane_srt

0x42df,	// (0x00052c08) midp_ticker_pane_srt

0x44cd,	// (0x00052df6) midp_ticker_pane_srt_g1

0x44d5,	// (0x00052dfe) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x0005e0ae) midp_ticker_pane_srt_g

0x44dd,	// (0x00052e06) midp_ticker_pane_srt_t1

0x649c,	// (0x00054dc5) midp_editing_number_pane_t1_copy1

0xcb42,	// (0x0005b46b) listscroll_midp_pane

0xcb42,	// (0x0005b46b) midp_form_pane

0x4355,	// (0x00052c7e) midp_info_popup_window_ParamLimits

0x4355,	// (0x00052c7e) midp_info_popup_window

0x3754,	// (0x0005207d) bg_popup_sub_pane_cp50_ParamLimits

0x3754,	// (0x0005207d) bg_popup_sub_pane_cp50

0x55a7,	// (0x00053ed0) listscroll_midp_info_pane_ParamLimits

0x55a7,	// (0x00053ed0) listscroll_midp_info_pane

0x558f,	// (0x00053eb8) listscroll_form_midp_pane_ParamLimits

0x558f,	// (0x00053eb8) listscroll_form_midp_pane

0x559b,	// (0x00053ec4) scroll_bar_cp050

0xd80a,	// (0x0005c133) list_midp_pane

0x71b7,	// (0x00055ae0) signal_pane_g2_cp

0x54a9,	// (0x00053dd2) listscroll_midp_info_pane_t1_ParamLimits

0x54a9,	// (0x00053dd2) listscroll_midp_info_pane_t1

0x54c1,	// (0x00053dea) listscroll_midp_info_pane_t2_ParamLimits

0x54c1,	// (0x00053dea) listscroll_midp_info_pane_t2

0x54ff,	// (0x00053e28) listscroll_midp_info_pane_t3_ParamLimits

0x54ff,	// (0x00053e28) listscroll_midp_info_pane_t3

0x5539,	// (0x00053e62) listscroll_midp_info_pane_t4_ParamLimits

0x5539,	// (0x00053e62) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0005e153) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0005e153) listscroll_midp_info_pane_t

0x3816,	// (0x0005213f) scroll_pane_cp21

0x5447,	// (0x00053d70) form_midp_field_choice_group_pane

0x5450,	// (0x00053d79) form_midp_field_text_pane

0x548f,	// (0x00053db8) form_midp_field_time_pane

0x5497,	// (0x00053dc0) form_midp_gauge_slider_pane

0x54a0,	// (0x00053dc9) form_midp_gauge_wait_pane

0x2d50,	// (0x00051679) form_midp_image_pane

0xbdaa,	// (0x0005a6d3) list_single_midp_pane_ParamLimits

0xbdaa,	// (0x0005a6d3) list_single_midp_pane

0xd7e8,	// (0x0005c111) form_midp_field_text_pane_t1

0x51e5,	// (0x00053b0e) input_focus_pane_cp050

0x5436,	// (0x00053d5f) list_midp_form_text_pane

0x53c2,	// (0x00053ceb) form_midp_field_choice_group_pane_t1

0x53d0,	// (0x00053cf9) input_focus_pane_cp051

0x53e4,	// (0x00053d0d) list_midp_choice_pane

0x2d50,	// (0x00051679) status_idle_pane

0x53a6,	// (0x00053ccf) form_midp_field_time_pane_t1

0x2d46,	// (0x0005166f) wait_anim_pane_g2_copy1

0x53b4,	// (0x00053cdd) form_midp_field_time_pane_t2

0x0001,

0x4403,	// (0x00052d2c) aid_navinavi_width_2_pane

0xf825,	// (0x0005e14e) form_midp_field_time_pane_t

0x2d50,	// (0x00051679) input_focus_pane_cp052

0x2d50,	// (0x00051679) bg_input_focus_pane_cp040

0x5366,	// (0x00053c8f) form_midp_gauge_slider_pane_t1

0x5374,	// (0x00053c9d) form_midp_gauge_slider_pane_t2

0xd7cc,	// (0x0005c0f5) form_midp_gauge_slider_pane_t3

0xd7da,	// (0x0005c103) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0005e145) form_midp_gauge_slider_pane_t

0x539e,	// (0x00053cc7) form_midp_slider_pane

0x2e30,	// (0x00051759) bg_input_focus_pane_cp041_ParamLimits

0x2e30,	// (0x00051759) bg_input_focus_pane_cp041

0x5333,	// (0x00053c5c) form_midp_gauge_wait_pane_t1_ParamLimits

0x5333,	// (0x00053c5c) form_midp_gauge_wait_pane_t1

0x5345,	// (0x00053c6e) form_midp_gauge_wait_pane_t2_ParamLimits

0x5345,	// (0x00053c6e) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0005e140) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0005e140) form_midp_gauge_wait_pane_t

0x5357,	// (0x00053c80) form_midp_wait_pane_ParamLimits

0x5357,	// (0x00053c80) form_midp_wait_pane

0x52fd,	// (0x00053c26) form_midp_image_pane_g1

0x5306,	// (0x00053c2f) form_midp_image_pane_t1

0x5315,	// (0x00053c3e) form_midp_image_pane_t2

0x5324,	// (0x00053c4d) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0005e139) form_midp_image_pane_t

0x52f4,	// (0x00053c1d) list_single_midp_pane_g1

0x25c4,	// (0x00050eed) list_single_midp_pane_t1

0xd7b7,	// (0x0005c0e0) list_midp_form_item_pane_ParamLimits

0xd7b7,	// (0x0005c0e0) list_midp_form_item_pane

0x43ab,	// (0x00052cd4) list_midp_form_item_pane_t1

0x43ba,	// (0x00052ce3) midp_ticker_pane_g1

0x43c6,	// (0x00052cef) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x0005e094) midp_ticker_pane_g

0xcbea,	// (0x0005b513) midp_ticker_pane_t1

0xdb21,	// (0x0005c44a) midp_editing_number_pane_t1

0x66cb,	// (0x00054ff4) midp_editing_number_pane

0x66da,	// (0x00055003) midp_ticker_pane

0x648c,	// (0x00054db5) ai_message_heading_pane

0x2d50,	// (0x00051679) bg_popup_window_pane_cp14

0x6494,	// (0x00054dbd) listscroll_ai_message_pane

0x6416,	// (0x00054d3f) ai_message_heading_pane_g1_ParamLimits

0x6416,	// (0x00054d3f) ai_message_heading_pane_g1

0x6422,	// (0x00054d4b) ai_message_heading_pane_g2_ParamLimits

0x6422,	// (0x00054d4b) ai_message_heading_pane_g2

0x642e,	// (0x00054d57) ai_message_heading_pane_g3_ParamLimits

0x642e,	// (0x00054d57) ai_message_heading_pane_g3

0x643a,	// (0x00054d63) ai_message_heading_pane_g4_ParamLimits

0x643a,	// (0x00054d63) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0005e27a) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0005e27a) ai_message_heading_pane_g

0x6446,	// (0x00054d6f) ai_message_heading_pane_t1_ParamLimits

0x6446,	// (0x00054d6f) ai_message_heading_pane_t1

0x6460,	// (0x00054d89) ai_message_heading_pane_t2_ParamLimits

0x6460,	// (0x00054d89) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0005e283) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0005e283) ai_message_heading_pane_t

0x6472,	// (0x00054d9b) bg_popup_heading_pane_cp1_ParamLimits

0x6472,	// (0x00054d9b) bg_popup_heading_pane_cp1

0x6404,	// (0x00054d2d) list_ai_message_pane_ParamLimits

0x6404,	// (0x00054d2d) list_ai_message_pane

0x3816,	// (0x0005213f) scroll_pane_cp10

0x63a0,	// (0x00054cc9) list_ai_message_pane_g1

0x63a8,	// (0x00054cd1) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0005e257) list_ai_message_pane_g

0x63b0,	// (0x00054cd9) list_ai_message_pane_t1_ParamLimits

0x63b0,	// (0x00054cd9) list_ai_message_pane_t1

0x63c5,	// (0x00054cee) list_ai_message_pane_t2_ParamLimits

0x63c5,	// (0x00054cee) list_ai_message_pane_t2

0x63da,	// (0x00054d03) list_ai_message_pane_t3_ParamLimits

0x63da,	// (0x00054d03) list_ai_message_pane_t3

0x63ef,	// (0x00054d18) list_ai_message_pane_t4_ParamLimits

0x63ef,	// (0x00054d18) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0005e25c) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0005e25c) list_ai_message_pane_t

0xd97f,	// (0x0005c2a8) cell_ai_soft_ind_pane_ParamLimits

0xd97f,	// (0x0005c2a8) cell_ai_soft_ind_pane

0x43e4,	// (0x00052d0d) cell_ai_soft_ind_pane_g1_ParamLimits

0x43e4,	// (0x00052d0d) cell_ai_soft_ind_pane_g1

0x2d50,	// (0x00051679) grid_highlight_cp1

0x43f1,	// (0x00052d1a) text_secondary_cp56_ParamLimits

0x43f1,	// (0x00052d1a) text_secondary_cp56

0x6360,	// (0x00054c89) example_general_pane_ParamLimits

0x6360,	// (0x00054c89) example_general_pane

0x636c,	// (0x00054c95) example_parent_pane_g1_ParamLimits

0x636c,	// (0x00054c95) example_parent_pane_g1

0x6378,	// (0x00054ca1) example_parent_pane_t1_ParamLimits

0x6378,	// (0x00054ca1) example_parent_pane_t1

0xd08e,	// (0x0005b9b7) popup_preview_text_window_ParamLimits

0xd08e,	// (0x0005b9b7) popup_preview_text_window

0x4210,	// (0x00052b39) list_single_pane_cp2_g4

0x3161,	// (0x00051a8a) bg_popup_preview_window_pane_ParamLimits

0x3161,	// (0x00051a8a) bg_popup_preview_window_pane

0x6097,	// (0x000549c0) popup_preview_text_window_t1_ParamLimits

0x6097,	// (0x000549c0) popup_preview_text_window_t1

0x60b5,	// (0x000549de) popup_preview_text_window_t2_ParamLimits

0x60b5,	// (0x000549de) popup_preview_text_window_t2

0x60fe,	// (0x00054a27) popup_preview_text_window_t3_ParamLimits

0x60fe,	// (0x00054a27) popup_preview_text_window_t3

0x6143,	// (0x00054a6c) popup_preview_text_window_t4_ParamLimits

0x6143,	// (0x00054a6c) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0005e22b) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0005e22b) popup_preview_text_window_t

0x61c1,	// (0x00054aea) scroll_pane_cp11

0x50f5,	// (0x00053a1e) bg_popup_preview_window_pane_g1

0x6057,	// (0x00054980) bg_popup_preview_window_pane_g2

0x605f,	// (0x00054988) bg_popup_preview_window_pane_g3

0x6067,	// (0x00054990) bg_popup_preview_window_pane_g4

0x606f,	// (0x00054998) bg_popup_preview_window_pane_g5

0x6077,	// (0x000549a0) bg_popup_preview_window_pane_g6

0x607f,	// (0x000549a8) bg_popup_preview_window_pane_g7

0x6087,	// (0x000549b0) bg_popup_preview_window_pane_g8

0x016a,	// (0x0004ea93) aid_popup_width_pane

0xd00a,	// (0x0005b933) popup_midp_note_alarm_window_ParamLimits

0xd00a,	// (0x0005b933) popup_midp_note_alarm_window

0x3690,	// (0x00051fb9) data_form_pane_ParamLimits

0xba53,	// (0x0005a37c) form_field_data_pane_g1

0xba5d,	// (0x0005a386) form_field_data_pane_t1_ParamLimits

0x369c,	// (0x00051fc5) input_focus_pane_ParamLimits

0x36aa,	// (0x00051fd3) data_form_wide_pane_ParamLimits

0x0b7e,	// (0x0004f4a7) form_field_data_wide_pane_g1

0x0b8a,	// (0x0004f4b3) form_field_data_wide_pane_t1_ParamLimits

0x340d,	// (0x00051d36) input_focus_pane_cp6_ParamLimits

0xc948,	// (0x0005b271) input_popup_find_pane_g1_ParamLimits

0xc948,	// (0x0005b271) input_popup_find_pane_g1

0x0e02,	// (0x0004f72b) aid_navi_side_left_pane

0x0e17,	// (0x0004f740) aid_navi_side_right_pane

0x5a6a,	// (0x00054393) bg_popup_window_pane_cp30_ParamLimits

0x5a6a,	// (0x00054393) bg_popup_window_pane_cp30

0x5ae4,	// (0x0005440d) popup_midp_note_alarm_window_g1_ParamLimits

0x5ae4,	// (0x0005440d) popup_midp_note_alarm_window_g1

0x5b14,	// (0x0005443d) popup_midp_note_alarm_window_t1_ParamLimits

0x5b14,	// (0x0005443d) popup_midp_note_alarm_window_t1

0x5bb5,	// (0x000544de) popup_midp_note_alarm_window_t2_ParamLimits

0x5bb5,	// (0x000544de) popup_midp_note_alarm_window_t2

0x5c72,	// (0x0005459b) popup_midp_note_alarm_window_t3_ParamLimits

0x5c72,	// (0x0005459b) popup_midp_note_alarm_window_t3

0x5ca4,	// (0x000545cd) popup_midp_note_alarm_window_t4_ParamLimits

0x5ca4,	// (0x000545cd) popup_midp_note_alarm_window_t4

0x5cca,	// (0x000545f3) popup_midp_note_alarm_window_t5_ParamLimits

0x5cca,	// (0x000545f3) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0005e1c8) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0005e1c8) popup_midp_note_alarm_window_t

0x5d76,	// (0x0005469f) wait_bar_pane_cp1_ParamLimits

0x5d76,	// (0x0005469f) wait_bar_pane_cp1

0x2d50,	// (0x00051679) wait_anim_pane_copy1

0x2d50,	// (0x00051679) wait_border_pane_copy1

0x5750,	// (0x00054079) wait_border_pane_g1_copy1

0x0ba4,	// (0x0004f4cd) form_field_popup_pane_g1

0xba77,	// (0x0005a3a0) form_field_popup_pane_t1_ParamLimits

0x369c,	// (0x00051fc5) input_focus_pane_cp7_ParamLimits

0x36d6,	// (0x00051fff) list_form_pane_ParamLimits

0x0bc4,	// (0x0004f4ed) form_field_popup_wide_pane_g1

0x0bcc,	// (0x0004f4f5) form_field_popup_wide_pane_t1_ParamLimits

0x369c,	// (0x00051fc5) input_focus_pane_cp8_ParamLimits

0x36e2,	// (0x0005200b) list_form_wide_pane_ParamLimits

0x6827,	// (0x00055150) aid_size_cell_graphic_pane

0xbaf6,	// (0x0005a41f) data_form_pane_t1_ParamLimits

0xbf1f,	// (0x0005a848) data_form_wide_pane_t1_ParamLimits

0xd443,	// (0x0005bd6c) bg_status_flat_pane

0xc557,	// (0x0005ae80) title_pane_t1_ParamLimits

0x2df8,	// (0x00051721) title_pane_t2_ParamLimits

0x2e1e,	// (0x00051747) title_pane_t3_ParamLimits

0xf573,	// (0x0005de9c) title_pane_t_ParamLimits

0x3c97,	// (0x000525c0) level_1_signal_ParamLimits

0x3ca4,	// (0x000525cd) level_2_signal_ParamLimits

0x3cbd,	// (0x000525e6) level_3_signal_ParamLimits

0x3cca,	// (0x000525f3) level_4_signal_ParamLimits

0x3cd7,	// (0x00052600) level_5_signal_ParamLimits

0x3ce4,	// (0x0005260d) level_6_signal_ParamLimits

0x3cf1,	// (0x0005261a) level_7_signal_ParamLimits

0x3c97,	// (0x000525c0) level_1_battery_ParamLimits

0x3ca4,	// (0x000525cd) level_2_battery_ParamLimits

0x3cbd,	// (0x000525e6) level_3_battery_ParamLimits

0x3cca,	// (0x000525f3) level_4_battery_ParamLimits

0x3cd7,	// (0x00052600) level_5_battery_ParamLimits

0x3ce4,	// (0x0005260d) level_6_battery_ParamLimits

0x3cf1,	// (0x0005261a) level_7_battery_ParamLimits

0x596f,	// (0x00054298) bg_status_flat_pane_g1

0x5977,	// (0x000542a0) bg_status_flat_pane_g2

0x597f,	// (0x000542a8) bg_status_flat_pane_g3

0x5987,	// (0x000542b0) bg_status_flat_pane_g4

0x598f,	// (0x000542b8) bg_status_flat_pane_g5

0x5997,	// (0x000542c0) bg_status_flat_pane_g6

0x599f,	// (0x000542c8) bg_status_flat_pane_g7

0xc5eb,	// (0x0005af14) tabs_3_active_pane_t1_ParamLimits

0xc5eb,	// (0x0005af14) tabs_3_passive_pane_t1_ParamLimits

0xc605,	// (0x0005af2e) tabs_4_active_pane_t1_ParamLimits

0xc605,	// (0x0005af2e) tabs_4_1_passive_pane_t1_ParamLimits

0xc95e,	// (0x0005b287) tabs_2_active_pane_t1_ParamLimits

0xc95e,	// (0x0005b287) tabs_2_passive_pane_t1_ParamLimits

0x2e30,	// (0x00051759) bg_active_tab_pane_cp4_ParamLimits

0xc970,	// (0x0005b299) tabs_2_long_active_pane_t1_ParamLimits

0x465f,	// (0x00052f88) bg_passive_tab_pane_cp4_ParamLimits

0x1371,	// (0x0004fc9a) list_single_midp_graphic_pane_t1_ParamLimits

0x2e30,	// (0x00051759) bg_active_tab_pane_cp5_ParamLimits

0xc983,	// (0x0005b2ac) tabs_3_long_active_pane_t1_ParamLimits

0x465f,	// (0x00052f88) bg_passive_tab_pane_cp5_ParamLimits

0x1371,	// (0x0004fc9a) list_single_midp_graphic_pane_t1

0xd443,	// (0x0005bd6c) bg_status_flat_pane_ParamLimits

0x4d8c,	// (0x000536b5) indicator_pane_cp2_ParamLimits

0x4d8c,	// (0x000536b5) indicator_pane_cp2

0xd5ba,	// (0x0005bee3) navi_pane_srt_ParamLimits

0xd5ba,	// (0x0005bee3) navi_pane_srt

0x4ed4,	// (0x000537fd) popup_clock_digital_analogue_window_cp1

0x2f0d,	// (0x00051836) indicator_pane_t1

0x42df,	// (0x00052c08) copy_highlight_pane

0x42df,	// (0x00052c08) cursor_graphics_pane

0x42df,	// (0x00052c08) graphic_within_text_pane

0x42df,	// (0x00052c08) link_highlight_pane

0x6184,	// (0x00054aad) popup_preview_text_window_t5_ParamLimits

0x6184,	// (0x00054aad) popup_preview_text_window_t5

0x440b,	// (0x00052d34) cursor_digital_pane

0x440b,	// (0x00052d34) cursor_primary_pane

0x441c,	// (0x00052d45) cursor_primary_small_pane

0x4424,	// (0x00052d4d) cursor_secondary_pane

0x442c,	// (0x00052d55) cursor_title_pane

0x440b,	// (0x00052d34) link_highlight_digital_pane

0x4413,	// (0x00052d3c) link_highlight_primary_pane

0x441c,	// (0x00052d45) link_highlight_primary_small_pane

0x4424,	// (0x00052d4d) link_highlight_secondary_pane

0x442c,	// (0x00052d55) link_highlight_title_pane

0x440b,	// (0x00052d34) copy_highlight_digital_pane

0x440b,	// (0x00052d34) copy_highlight_primary_pane

0x441c,	// (0x00052d45) copy_highlight_primary_small_pane

0x4424,	// (0x00052d4d) copy_highlight_secondary_pane

0x442c,	// (0x00052d55) copy_highlight_title_pane

0x4424,	// (0x00052d4d) graphic_text_digital_pane

0x5a0d,	// (0x00054336) graphic_text_primary_pane

0x5a16,	// (0x0005433f) graphic_text_primary_small_pane

0x441c,	// (0x00052d45) graphic_text_secondary_pane

0x440b,	// (0x00052d34) graphic_text_title_pane

0xcbfc,	// (0x0005b525) cursor_primary_pane_g1

0x59ff,	// (0x00054328) cursor_text_primary_t1

0xd846,	// (0x0005c16f) cursor_primary_small_pane_g1

0x59f1,	// (0x0005431a) cursor_text_primary_small_t1

0xd83c,	// (0x0005c165) cursor_primary_small_pane_g1_copy1

0x59d9,	// (0x00054302) cursor_text_primary_small_t1_copy1

0x59b7,	// (0x000542e0) cursor_text_title_t1

0xd832,	// (0x0005c15b) cursor_title_pane_g1

0xcbfc,	// (0x0005b525) cursor_digital_pane_g1

0x443e,	// (0x00052d67) cursor_text_digital_t1

0x4485,	// (0x00052dae) link_highlight_primary_pane_g1

0x5960,	// (0x00054289) link_highlight_primary_pane_t1

0x444c,	// (0x00052d75) link_highlight_primary_small_pane_g1

0x4476,	// (0x00052d9f) link_highlight_primary_small_pane_t1

0x4485,	// (0x00052dae) link_highlight_secondary_pane_g1

0x448d,	// (0x00052db6) link_highlight_secondary_pane_t1

0x58d4,	// (0x000541fd) link_highlight_title_pane_g1

0x58dc,	// (0x00054205) link_highlight_title_pane_t1

0x58bd,	// (0x000541e6) link_highlight_digital_pane_g1

0x58c5,	// (0x000541ee) link_highlight_digital_pane_t1

0x5795,	// (0x000540be) copy_highlight_primary_pane_g1

0x579d,	// (0x000540c6) copy_highlight_primary_pane_t1

0x576f,	// (0x00054098) copy_highlight_primary_small_pane_g1

0x5786,	// (0x000540af) copy_highlight_primary_small_pane_t1

0x449c,	// (0x00052dc5) copy_highlight_secondary_pane_g1

0x44a4,	// (0x00052dcd) copy_highlight_secondary_pane_t1

0x576f,	// (0x00054098) copy_highlight_title_pane_g1

0x5777,	// (0x000540a0) copy_highlight_title_pane_t1

0x5795,	// (0x000540be) copy_highlight_digital_pane_g1

0x69f1,	// (0x0005531a) copy_highlight_digital_pane_t1

0x6945,	// (0x0005526e) graphic_text_primary_pane_g1

0x69d5,	// (0x000552fe) graphic_text_primary_pane_t1

0x69e3,	// (0x0005530c) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0005e2f7) graphic_text_primary_pane_t

0x69b1,	// (0x000552da) graphic_text_primary_small_pane_g1

0x69b9,	// (0x000552e2) graphic_text_primary_small_pane_t1

0x69c7,	// (0x000552f0) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0005e2f2) graphic_text_primary_small_pane_t

0x698d,	// (0x000552b6) graphic_text_secondary_pane_g1

0x6995,	// (0x000552be) graphic_text_secondary_pane_t1

0x69a3,	// (0x000552cc) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0005e2ed) graphic_text_secondary_pane_t

0x6969,	// (0x00055292) graphic_text_title_pane_g1

0x6971,	// (0x0005529a) graphic_text_title_pane_t1

0x697f,	// (0x000552a8) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0005e2e8) graphic_text_title_pane_t

0x6945,	// (0x0005526e) graphic_text_digital_pane_g1

0x694d,	// (0x00055276) graphic_text_digital_pane_t1

0x695b,	// (0x00055284) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0005e2e3) graphic_text_digital_pane_t

0x2e30,	// (0x00051759) navi_icon_pane_srt_ParamLimits

0x2e30,	// (0x00051759) navi_icon_pane_srt

0x2d50,	// (0x00051679) navi_midp_pane_srt

0x2d50,	// (0x00051679) navi_navi_pane_srt

0x2e30,	// (0x00051759) navi_text_pane_srt_ParamLimits

0x2e30,	// (0x00051759) navi_text_pane_srt

0x6910,	// (0x00055239) navi_navi_icon_text_pane_srt

0x6918,	// (0x00055241) navi_navi_pane_srt_g1_ParamLimits

0x6918,	// (0x00055241) navi_navi_pane_srt_g1

0x692a,	// (0x00055253) navi_navi_pane_srt_g2_ParamLimits

0x692a,	// (0x00055253) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0005e2de) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0005e2de) navi_navi_pane_srt_g

0x693c,	// (0x00055265) navi_navi_tabs_pane_srt

0x6910,	// (0x00055239) navi_navi_text_pane_srt

0x6910,	// (0x00055239) navi_navi_volume_pane_srt

0x6901,	// (0x0005522a) navi_navi_text_pane_srt_t1

0x16eb,	// (0x00050014) navi_navi_volume_pane_srt_g1

0x16f3,	// (0x0005001c) volume_small_pane_srt_ParamLimits

0x16f3,	// (0x0005001c) volume_small_pane_srt

0x10e2,	// (0x0004fa0b) volume_small_pane_srt_g1_ParamLimits

0x10e2,	// (0x0004fa0b) volume_small_pane_srt_g1

0x10f2,	// (0x0004fa1b) volume_small_pane_srt_g2_ParamLimits

0x10f2,	// (0x0004fa1b) volume_small_pane_srt_g2

0x1103,	// (0x0004fa2c) volume_small_pane_srt_g3_ParamLimits

0x1103,	// (0x0004fa2c) volume_small_pane_srt_g3

0x1114,	// (0x0004fa3d) volume_small_pane_srt_g4_ParamLimits

0x1114,	// (0x0004fa3d) volume_small_pane_srt_g4

0x1125,	// (0x0004fa4e) volume_small_pane_srt_g5_ParamLimits

0x1125,	// (0x0004fa4e) volume_small_pane_srt_g5

0x1136,	// (0x0004fa5f) volume_small_pane_srt_g6_ParamLimits

0x1136,	// (0x0004fa5f) volume_small_pane_srt_g6

0x1147,	// (0x0004fa70) volume_small_pane_srt_g7_ParamLimits

0x1147,	// (0x0004fa70) volume_small_pane_srt_g7

0x1158,	// (0x0004fa81) volume_small_pane_srt_g8_ParamLimits

0x1158,	// (0x0004fa81) volume_small_pane_srt_g8

0x1169,	// (0x0004fa92) volume_small_pane_srt_g9_ParamLimits

0x1169,	// (0x0004fa92) volume_small_pane_srt_g9

0x117a,	// (0x0004faa3) volume_small_pane_srt_g10_ParamLimits

0x117a,	// (0x0004faa3) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x0005e099) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x0005e099) volume_small_pane_srt_g

0x320a,	// (0x00051b33) query_popup_data_pane_cp2

0x68e7,	// (0x00055210) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x68e7,	// (0x00055210) navi_navi_icon_text_pane_srt_t1

0x5a0d,	// (0x00054336) navi_tabs_2_long_pane_srt

0x5a0d,	// (0x00054336) navi_tabs_2_pane_srt

0x5a0d,	// (0x00054336) navi_tabs_3_long_pane_srt

0x5a0d,	// (0x00054336) navi_tabs_3_pane_srt

0x5a0d,	// (0x00054336) navi_tabs_4_pane_srt

0x16cb,	// (0x0004fff4) tabs_2_active_pane_srt_ParamLimits

0x16cb,	// (0x0004fff4) tabs_2_active_pane_srt

0x16db,	// (0x00050004) tabs_2_passive_pane_srt_ParamLimits

0x16db,	// (0x00050004) tabs_2_passive_pane_srt

0x51e5,	// (0x00053b0e) bg_passive_tab_pane_cp1_srt_ParamLimits

0x51e5,	// (0x00053b0e) bg_passive_tab_pane_cp1_srt

0x68b3,	// (0x000551dc) bg_passive_tab_pane_g1_cp1_srt

0x3f38,	// (0x00052861) bg_passive_tab_pane_g2_cp1_srt

0x68bc,	// (0x000551e5) bg_passive_tab_pane_g3_cp1_srt

0x30ab,	// (0x000519d4) bg_active_tab_pane_cp1_srt_ParamLimits

0x30ab,	// (0x000519d4) bg_active_tab_pane_cp1_srt

0x68c5,	// (0x000551ee) tabs_2_active_pane_srt_g1

0xdc24,	// (0x0005c54d) tabs_2_active_pane_srt_t1_ParamLimits

0xdc24,	// (0x0005c54d) tabs_2_active_pane_srt_t1

0x68b3,	// (0x000551dc) bg_active_tab_pane_g1_cp1_srt

0x3f38,	// (0x00052861) bg_active_tab_pane_g2_cp1_srt

0x68bc,	// (0x000551e5) bg_active_tab_pane_g3_cp1_srt

0x1698,	// (0x0004ffc1) tabs_3_active_pane_srt_ParamLimits

0x1698,	// (0x0004ffc1) tabs_3_active_pane_srt

0x16a9,	// (0x0004ffd2) tabs_3_passive_pane_cp_srt_ParamLimits

0x16a9,	// (0x0004ffd2) tabs_3_passive_pane_cp_srt

0x16ba,	// (0x0004ffe3) tabs_3_passive_pane_srt_ParamLimits

0x16ba,	// (0x0004ffe3) tabs_3_passive_pane_srt

0x51e5,	// (0x00053b0e) bg_passive_tab_pane_cp2_srt_ParamLimits

0x51e5,	// (0x00053b0e) bg_passive_tab_pane_cp2_srt

0x44b3,	// (0x00052ddc) bg_passive_tab_pane_g1_cp2_srt

0x3f38,	// (0x00052861) bg_passive_tab_pane_g2_cp2_srt

0x44bc,	// (0x00052de5) bg_passive_tab_pane_g3_cp2_srt

0x30ab,	// (0x000519d4) bg_active_tab_pane_cp2_srt_ParamLimits

0x30ab,	// (0x000519d4) bg_active_tab_pane_cp2_srt

0x6899,	// (0x000551c2) tabs_3_active_pane_srt_g1

0xdc0e,	// (0x0005c537) tabs_3_active_pane_srt_t1_ParamLimits

0xdc0e,	// (0x0005c537) tabs_3_active_pane_srt_t1

0x44b3,	// (0x00052ddc) bg_active_tab_pane_g1_cp2_srt

0x3f38,	// (0x00052861) bg_active_tab_pane_g2_cp2_srt

0x44bc,	// (0x00052de5) bg_active_tab_pane_g3_cp2_srt

0x1650,	// (0x0004ff79) tabs_4_active_pane_srt_ParamLimits

0x1650,	// (0x0004ff79) tabs_4_active_pane_srt

0x1662,	// (0x0004ff8b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1662,	// (0x0004ff8b) tabs_4_passive_pane_cp2_srt

0x4611,	// (0x00052f3a) aid_size_cell_toolbar

0x6544,	// (0x00054e6d) main_idle_act_pane_ParamLimits

0x47fc,	// (0x00053125) popup_large_graphic_colour_window_ParamLimits

0xd30e,	// (0x0005bc37) popup_toolbar_window_ParamLimits

0xd30e,	// (0x0005bc37) popup_toolbar_window

0x66fc,	// (0x00055025) list_single_graphic_2heading_pane_ParamLimits

0x66fc,	// (0x00055025) list_single_graphic_2heading_pane

0x3a46,	// (0x0005236f) aid_size_cell_apps_grid_lsc_pane

0x3a58,	// (0x00052381) aid_size_cell_apps_grid_prt_pane

0x465f,	// (0x00052f88) bg_wml_button_pane_cp1_ParamLimits

0x465f,	// (0x00052f88) bg_wml_button_pane_cp1

0xd7e8,	// (0x0005c111) form_midp_field_text_pane_t1_ParamLimits

0x51e5,	// (0x00053b0e) input_focus_pane_cp050_ParamLimits

0x5436,	// (0x00053d5f) list_midp_form_text_pane_ParamLimits

0x53d0,	// (0x00053cf9) input_focus_pane_cp051_ParamLimits

0x53e4,	// (0x00053d0d) list_midp_choice_pane_ParamLimits

0xd783,	// (0x0005c0ac) list_single_2graphic_pane_cp3_ParamLimits

0xd783,	// (0x0005c0ac) list_single_2graphic_pane_cp3

0xd797,	// (0x0005c0c0) list_single_midp_graphic_pane_ParamLimits

0xd797,	// (0x0005c0c0) list_single_midp_graphic_pane

0x00f2,	// (0x0004ea1b) list_single_graphic_2heading_pane_g1_ParamLimits

0x00f2,	// (0x0004ea1b) list_single_graphic_2heading_pane_g1

0x00fe,	// (0x0004ea27) list_single_graphic_2heading_pane_g4_ParamLimits

0x00fe,	// (0x0004ea27) list_single_graphic_2heading_pane_g4

0x010a,	// (0x0004ea33) list_single_graphic_2heading_pane_g5_ParamLimits

0x010a,	// (0x0004ea33) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x0005e0ec) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x0005e0ec) list_single_graphic_2heading_pane_g

0x0116,	// (0x0004ea3f) list_single_graphic_2heading_pane_t1_ParamLimits

0x0116,	// (0x0004ea3f) list_single_graphic_2heading_pane_t1

0x012a,	// (0x0004ea53) list_single_graphic_2heading_pane_t2_ParamLimits

0x012a,	// (0x0004ea53) list_single_graphic_2heading_pane_t2

0x0146,	// (0x0004ea6f) list_single_graphic_2heading_pane_t3_ParamLimits

0x0146,	// (0x0004ea6f) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x0005e0f3) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x0005e0f3) list_single_graphic_2heading_pane_t

0x5033,	// (0x0005395c) bg_popup_sub_pane_cp2

0x505d,	// (0x00053986) grid_toobar_pane

0x12e0,	// (0x0004fc09) cell_toolbar_pane_ParamLimits

0x12e0,	// (0x0004fc09) cell_toolbar_pane

0x5099,	// (0x000539c2) cell_toolbar_pane_g1_ParamLimits

0x5099,	// (0x000539c2) cell_toolbar_pane_g1

0x50ad,	// (0x000539d6) cell_toolbar_pane_g2_ParamLimits

0x50ad,	// (0x000539d6) cell_toolbar_pane_g2

0x0001,

0xf7d1,	// (0x0005e0fa) cell_toolbar_pane_g_ParamLimits

0xf7d1,	// (0x0005e0fa) cell_toolbar_pane_g

0x50cf,	// (0x000539f8) grid_highlight_pane_cp2_ParamLimits

0x50cf,	// (0x000539f8) grid_highlight_pane_cp2

0x50e9,	// (0x00053a12) toolbar_button_pane

0x50f5,	// (0x00053a1e) toolbar_button_pane_g1

0x50fd,	// (0x00053a26) toolbar_button_pane_g2

0x5105,	// (0x00053a2e) toolbar_button_pane_g3

0x510d,	// (0x00053a36) toolbar_button_pane_g4

0x5115,	// (0x00053a3e) toolbar_button_pane_g5

0x511d,	// (0x00053a46) toolbar_button_pane_g6

0x5125,	// (0x00053a4e) toolbar_button_pane_g7

0x512d,	// (0x00053a56) toolbar_button_pane_g8

0x5135,	// (0x00053a5e) toolbar_button_pane_g9

0x0009,

0xf7d6,	// (0x0005e0ff) toolbar_button_pane_g

0x1318,	// (0x0004fc41) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1318,	// (0x0004fc41) list_single_2graphic_pane_g1_cp3

0xbd38,	// (0x0005a661) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbd38,	// (0x0005a661) list_single_2graphic_pane_g2_cp3

0x1335,	// (0x0004fc5e) list_single_2graphic_pane_g3_cp3

0x133d,	// (0x0004fc66) list_single_2graphic_pane_g4_cp3_ParamLimits

0x133d,	// (0x0004fc66) list_single_2graphic_pane_g4_cp3

0x1349,	// (0x0004fc72) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1349,	// (0x0004fc72) list_single_2graphic_pane_t1_cp3

0x1365,	// (0x0004fc8e) list_single_midp_graphic_pane_g2_ParamLimits

0x1365,	// (0x0004fc8e) list_single_midp_graphic_pane_g2

0x2538,	// (0x00050e61) aid_zoom_text_primary

0x2540,	// (0x00050e69) aid_zoom_text_secondary

0x4570,	// (0x00052e99) status_small_pane_g7_ParamLimits

0x4570,	// (0x00052e99) status_small_pane_g7

0x4593,	// (0x00052ebc) status_small_pane_t1_ParamLimits

0xc533,	// (0x0005ae5c) title_pane_g2

0x0003,

0xf56a,	// (0x0005de93) title_pane_g

0xc7bb,	// (0x0005b0e4) aid_size_cell_colour_1_pane_ParamLimits

0xc7bb,	// (0x0005b0e4) aid_size_cell_colour_1_pane

0xc7cf,	// (0x0005b0f8) aid_size_cell_colour_2_pane_ParamLimits

0xc7cf,	// (0x0005b0f8) aid_size_cell_colour_2_pane

0xc7e3,	// (0x0005b10c) aid_size_cell_colour_3_pane_ParamLimits

0xc7e3,	// (0x0005b10c) aid_size_cell_colour_3_pane

0xc7f7,	// (0x0005b120) aid_size_cell_colour_4_pane_ParamLimits

0xc7f7,	// (0x0005b120) aid_size_cell_colour_4_pane

0x0d3e,	// (0x0004f667) title_pane_stacon_g1_ParamLimits

0x0d3e,	// (0x0004f667) title_pane_stacon_g1

0x57f4,	// (0x0005411d) popup_note_wait_window_g3_ParamLimits

0x57f4,	// (0x0005411d) popup_note_wait_window_g3

0x586a,	// (0x00054193) popup_note_wait_window_t5_ParamLimits

0x586a,	// (0x00054193) popup_note_wait_window_t5

0x2d50,	// (0x00051679) main_feb_china_hwr_fs_writing_pane

0xccb7,	// (0x0005b5e0) popup_feb_china_hwr_fs_window_ParamLimits

0xccb7,	// (0x0005b5e0) popup_feb_china_hwr_fs_window

0xbd49,	// (0x0005a672) aid_size_cell_hwr_fs_ParamLimits

0xbd49,	// (0x0005a672) aid_size_cell_hwr_fs

0x51e5,	// (0x00053b0e) bg_popup_sub_pane_cp3_ParamLimits

0x51e5,	// (0x00053b0e) bg_popup_sub_pane_cp3

0xbd5e,	// (0x0005a687) grid_hwr_fs_pane_ParamLimits

0xbd5e,	// (0x0005a687) grid_hwr_fs_pane

0x13b4,	// (0x0004fcdd) linegrid_hwr_fs_pane_ParamLimits

0x13b4,	// (0x0004fcdd) linegrid_hwr_fs_pane

0xbd76,	// (0x0005a69f) cell_hwr_fs_pane_ParamLimits

0xbd76,	// (0x0005a69f) cell_hwr_fs_pane

0x51f1,	// (0x00053b1a) linegrid_hwr_fs_pane_g1_ParamLimits

0x51f1,	// (0x00053b1a) linegrid_hwr_fs_pane_g1

0xd757,	// (0x0005c080) linegrid_hwr_fs_pane_g2_ParamLimits

0xd757,	// (0x0005c080) linegrid_hwr_fs_pane_g2

0x520f,	// (0x00053b38) linegrid_hwr_fs_pane_g3_ParamLimits

0x520f,	// (0x00053b38) linegrid_hwr_fs_pane_g3

0x13e6,	// (0x0004fd0f) linegrid_hwr_fs_pane_g4_ParamLimits

0x13e6,	// (0x0004fd0f) linegrid_hwr_fs_pane_g4

0x1400,	// (0x0004fd29) linegrid_hwr_fs_pane_g5_ParamLimits

0x1400,	// (0x0004fd29) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fc,	// (0x0005e125) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fc,	// (0x0005e125) linegrid_hwr_fs_pane_g

0x521b,	// (0x00053b44) cell_hwr_fs_pane_g1_ParamLimits

0x521b,	// (0x00053b44) cell_hwr_fs_pane_g1

0x4f6a,	// (0x00053893) cell_hwr_fs_pane_g2_ParamLimits

0x4f6a,	// (0x00053893) cell_hwr_fs_pane_g2

0xd769,	// (0x0005c092) cell_hwr_fs_pane_g3_ParamLimits

0xd769,	// (0x0005c092) cell_hwr_fs_pane_g3

0xd776,	// (0x0005c09f) cell_hwr_fs_pane_g4_ParamLimits

0xd776,	// (0x0005c09f) cell_hwr_fs_pane_g4

0x0003,

0xf807,	// (0x0005e130) cell_hwr_fs_pane_g_ParamLimits

0xf807,	// (0x0005e130) cell_hwr_fs_pane_g

0xbd9c,	// (0x0005a6c5) cell_hwr_fs_pane_t1

0x2d50,	// (0x00051679) grid_highlight_pane_cp6

0x2d50,	// (0x00051679) main_idle_act2_pane

0x37fd,	// (0x00052126) aid_inside_area_popup_secondary

0xd866,	// (0x0005c18f) aid_inside_area_window_primary_ParamLimits

0xd866,	// (0x0005c18f) aid_inside_area_window_primary

0x6a00,	// (0x00055329) ai2_news_ticker_pane

0x6a08,	// (0x00055331) aid_size_cell_ai1_link_ParamLimits

0x6a08,	// (0x00055331) aid_size_cell_ai1_link

0xdc3a,	// (0x0005c563) popup_ai2_data_window_ParamLimits

0xdc3a,	// (0x0005c563) popup_ai2_data_window

0x6a38,	// (0x00055361) popup_ai2_link_window_ParamLimits

0x6a38,	// (0x00055361) popup_ai2_link_window

0x51e5,	// (0x00053b0e) bg_popup_sub_pane_cp4_ParamLimits

0x51e5,	// (0x00053b0e) bg_popup_sub_pane_cp4

0x6a4c,	// (0x00055375) grid_ai2_link_pane_ParamLimits

0x6a4c,	// (0x00055375) grid_ai2_link_pane

0x6a63,	// (0x0005538c) popup_ai2_link_window_g1_ParamLimits

0x6a63,	// (0x0005538c) popup_ai2_link_window_g1

0x6a6f,	// (0x00055398) popup_ai2_link_window_g2_ParamLimits

0x6a6f,	// (0x00055398) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0005e2fc) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0005e2fc) popup_ai2_link_window_g

0x6a7e,	// (0x000553a7) ai2_mp_button_pane

0x6a86,	// (0x000553af) ai2_mp_volume_pane

0x53d0,	// (0x00053cf9) bg_popup_sub_pane_cp5_ParamLimits

0x53d0,	// (0x00053cf9) bg_popup_sub_pane_cp5

0x6a8e,	// (0x000553b7) heading_ai2_gene_pane_ParamLimits

0x6a8e,	// (0x000553b7) heading_ai2_gene_pane

0x6a9a,	// (0x000553c3) list_ai2_gene_pane_ParamLimits

0x6a9a,	// (0x000553c3) list_ai2_gene_pane

0x6ae2,	// (0x0005540b) cell_ai2_link_pane_ParamLimits

0x6ae2,	// (0x0005540b) cell_ai2_link_pane

0x6af8,	// (0x00055421) cell_ai2_link_pane_g1

0x2d50,	// (0x00051679) grid_highlight_pane_cp7

0x1708,	// (0x00050031) ai2_mp_volume_pane_g1

0x6bc8,	// (0x000554f1) ai2_mp_volume_pane_g2

0xdc64,	// (0x0005c58d) list_ai2_gene_pane_t1

0x6bd0,	// (0x000554f9) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0005e315) ai2_mp_volume_pane_g

0x1710,	// (0x00050039) volume_small_pane_cp3

0x6bd8,	// (0x00055501) aid_size_cell_ai2_button

0x6be0,	// (0x00055509) grid_ai2_button_pane

0x6be9,	// (0x00055512) cell_ai2_button_pane_ParamLimits

0x6be9,	// (0x00055512) cell_ai2_button_pane

0x2d46,	// (0x0005166f) cell_ai2_button_pane_g1

0x2d50,	// (0x00051679) grid_highlight_pane_cp8

0x6b88,	// (0x000554b1) ai2_gene_pane_t1_ParamLimits

0x6b88,	// (0x000554b1) ai2_gene_pane_t1

0xcc2d,	// (0x0005b556) aid_height_parent_landscape

0xd9cd,	// (0x0005c2f6) aid_height_set_list

0x6544,	// (0x00054e6d) aid_size_parent

0x6827,	// (0x00055150) aid_size_cell_graphic_pane_ParamLimits

0x6aaa,	// (0x000553d3) popup_ai2_data_window_g1_ParamLimits

0x6aaa,	// (0x000553d3) popup_ai2_data_window_g1

0x6ab6,	// (0x000553df) ai2_news_ticker_pane_g1

0x6abe,	// (0x000553e7) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0005e301) ai2_news_ticker_pane_g

0x6ac6,	// (0x000553ef) ai2_news_ticker_pane_t1

0x6ad4,	// (0x000553fd) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0005e306) ai2_news_ticker_pane_t

0x6b01,	// (0x0005542a) heading_ai2_gene_pane_g1

0x6b09,	// (0x00055432) heading_ai2_gene_pane_t1_ParamLimits

0x6b09,	// (0x00055432) heading_ai2_gene_pane_t1

0x6b1e,	// (0x00055447) list_highlight_pane_cp6

0xdc4e,	// (0x0005c577) ai2_gene_pane_ParamLimits

0xdc4e,	// (0x0005c577) ai2_gene_pane

0xdc72,	// (0x0005c59b) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0005e30b) list_ai2_gene_pane_t

0x6b59,	// (0x00055482) list_highlight_pane_cp8_ParamLimits

0x6b59,	// (0x00055482) list_highlight_pane_cp8

0x6b6a,	// (0x00055493) ai2_gene_pane_g1_ParamLimits

0x6b6a,	// (0x00055493) ai2_gene_pane_g1

0x6b7c,	// (0x000554a5) ai2_gene_pane_g2_ParamLimits

0x6b7c,	// (0x000554a5) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0005e310) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0005e310) ai2_gene_pane_g

0x3632,	// (0x00051f5b) scroll_pane_cp12

0xbcf5,	// (0x0005a61e) control_pane_t3_ParamLimits

0xbcf5,	// (0x0005a61e) control_pane_t3

0x4584,	// (0x00052ead) status_small_pane_g8_ParamLimits

0x4584,	// (0x00052ead) status_small_pane_g8

0xcdd5,	// (0x0005b6fe) popup_find_window_ParamLimits

0xd044,	// (0x0005b96d) popup_note_image_window_ParamLimits

0x256c,	// (0x00050e95) list_double2_graphic_pane_vc_g1_ParamLimits

0x256c,	// (0x00050e95) list_double2_graphic_pane_vc_g1

0x542a,	// (0x00053d53) list_double2_graphic_pane_vc_g2_ParamLimits

0x542a,	// (0x00053d53) list_double2_graphic_pane_vc_g2

0x2578,	// (0x00050ea1) list_double2_graphic_pane_vc_g3_ParamLimits

0x2578,	// (0x00050ea1) list_double2_graphic_pane_vc_g3

0x0002,

0xf631,	// (0x0005df5a) list_double2_graphic_pane_vc_g_ParamLimits

0xf631,	// (0x0005df5a) list_double2_graphic_pane_vc_g

0x2584,	// (0x00050ead) list_double2_graphic_pane_vc_t1_ParamLimits

0x2584,	// (0x00050ead) list_double2_graphic_pane_vc_t1

0x542a,	// (0x00053d53) list_single_heading_pane_vc_g1_ParamLimits

0x542a,	// (0x00053d53) list_single_heading_pane_vc_g1

0x2578,	// (0x00050ea1) list_single_heading_pane_vc_g2_ParamLimits

0x2578,	// (0x00050ea1) list_single_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x0005df17) list_single_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x0005df17) list_single_heading_pane_vc_g

0x259a,	// (0x00050ec3) list_single_heading_pane_vc_t1_ParamLimits

0x259a,	// (0x00050ec3) list_single_heading_pane_vc_t1

0x25b0,	// (0x00050ed9) list_single_heading_pane_vc_t2_ParamLimits

0x25b0,	// (0x00050ed9) list_single_heading_pane_vc_t2

0x0001,

0xf7eb,	// (0x0005e114) list_single_heading_pane_vc_t_ParamLimits

0xf7eb,	// (0x0005e114) list_single_heading_pane_vc_t

0x513d,	// (0x00053a66) list_setting_number_pane_vc_g1_ParamLimits

0x513d,	// (0x00053a66) list_setting_number_pane_vc_g1

0x5149,	// (0x00053a72) list_setting_number_pane_vc_g2_ParamLimits

0x5149,	// (0x00053a72) list_setting_number_pane_vc_g2

0x0001,

0xf7f0,	// (0x0005e119) list_setting_number_pane_vc_g_ParamLimits

0xf7f0,	// (0x0005e119) list_setting_number_pane_vc_g

0x5155,	// (0x00053a7e) list_setting_number_pane_vc_t1_ParamLimits

0x5155,	// (0x00053a7e) list_setting_number_pane_vc_t1

0x5169,	// (0x00053a92) list_setting_number_pane_vc_t2_ParamLimits

0x5169,	// (0x00053a92) list_setting_number_pane_vc_t2

0x5185,	// (0x00053aae) list_setting_number_pane_vc_t3_ParamLimits

0x5185,	// (0x00053aae) list_setting_number_pane_vc_t3

0x0002,

0xf7f5,	// (0x0005e11e) list_setting_number_pane_vc_t_ParamLimits

0xf7f5,	// (0x0005e11e) list_setting_number_pane_vc_t

0x51ab,	// (0x00053ad4) set_value_pane_vc_ParamLimits

0x51ab,	// (0x00053ad4) set_value_pane_vc

0x66fc,	// (0x00055025) list_double2_graphic_pane_vc_ParamLimits

0x66fc,	// (0x00055025) list_double2_graphic_pane_vc

0x2684,	// (0x00050fad) list_double2_large_graphic_pane_vc_ParamLimits

0x2684,	// (0x00050fad) list_double2_large_graphic_pane_vc

0x66fc,	// (0x00055025) list_double2_pane_vc_ParamLimits

0x66fc,	// (0x00055025) list_double2_pane_vc

0x66fc,	// (0x00055025) list_double_graphic_heading_pane_vc_ParamLimits

0x66fc,	// (0x00055025) list_double_graphic_heading_pane_vc

0x66fc,	// (0x00055025) list_double_graphic_pane_vc_ParamLimits

0x66fc,	// (0x00055025) list_double_graphic_pane_vc

0x66fc,	// (0x00055025) list_double_heading_pane_vc_ParamLimits

0x66fc,	// (0x00055025) list_double_heading_pane_vc

0x2684,	// (0x00050fad) list_double_large_graphic_pane_vc_ParamLimits

0x2684,	// (0x00050fad) list_double_large_graphic_pane_vc

0x66fc,	// (0x00055025) list_double_number_pane_vc_ParamLimits

0x66fc,	// (0x00055025) list_double_number_pane_vc

0x66fc,	// (0x00055025) list_double_pane_vc_ParamLimits

0x66fc,	// (0x00055025) list_double_pane_vc

0x66fc,	// (0x00055025) list_double_time_pane_vc_ParamLimits

0x66fc,	// (0x00055025) list_double_time_pane_vc

0x66fc,	// (0x00055025) list_setting_number_pane_vc_ParamLimits

0x66fc,	// (0x00055025) list_setting_number_pane_vc

0x66fc,	// (0x00055025) list_setting_pane_vc_ParamLimits

0x66fc,	// (0x00055025) list_setting_pane_vc

0x66fc,	// (0x00055025) list_single_graphic_heading_pane_vc_ParamLimits

0x66fc,	// (0x00055025) list_single_graphic_heading_pane_vc

0x66fc,	// (0x00055025) list_single_heading_pane_vc_ParamLimits

0x66fc,	// (0x00055025) list_single_heading_pane_vc

0x66fc,	// (0x00055025) list_single_number_heading_pane_vc_ParamLimits

0x66fc,	// (0x00055025) list_single_number_heading_pane_vc

0x256c,	// (0x00050e95) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x256c,	// (0x00050e95) list_double_graphic_heading_pane_vc_g1

0x542a,	// (0x00053d53) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x542a,	// (0x00053d53) list_double_graphic_heading_pane_vc_g2

0x2578,	// (0x00050ea1) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x2578,	// (0x00050ea1) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf631,	// (0x0005df5a) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf631,	// (0x0005df5a) list_double_graphic_heading_pane_vc_g

0x2743,	// (0x0005106c) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x2743,	// (0x0005106c) list_double_graphic_heading_pane_vc_t1

0x259a,	// (0x00050ec3) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x259a,	// (0x00050ec3) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0005e31c) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0005e31c) list_double_graphic_heading_pane_vc_t

0x513d,	// (0x00053a66) list_setting_pane_vc_g1_ParamLimits

0x513d,	// (0x00053a66) list_setting_pane_vc_g1

0x5149,	// (0x00053a72) list_setting_pane_vc_g2_ParamLimits

0x5149,	// (0x00053a72) list_setting_pane_vc_g2

0x0001,

0xf7f0,	// (0x0005e119) list_setting_pane_vc_g_ParamLimits

0xf7f0,	// (0x0005e119) list_setting_pane_vc_g

0x6e21,	// (0x0005574a) list_setting_pane_vc_t1_ParamLimits

0x6e21,	// (0x0005574a) list_setting_pane_vc_t1

0x6e35,	// (0x0005575e) list_setting_pane_vc_t2_ParamLimits

0x6e35,	// (0x0005575e) list_setting_pane_vc_t2

0x0001,

0xfa36,	// (0x0005e35f) list_setting_pane_vc_t_ParamLimits

0xfa36,	// (0x0005e35f) list_setting_pane_vc_t

0x51ab,	// (0x00053ad4) set_value_pane_cp_vc_ParamLimits

0x51ab,	// (0x00053ad4) set_value_pane_cp_vc

0x542a,	// (0x00053d53) list_single_number_heading_pane_vc_g1_ParamLimits

0x542a,	// (0x00053d53) list_single_number_heading_pane_vc_g1

0x2578,	// (0x00050ea1) list_single_number_heading_pane_vc_g2_ParamLimits

0x2578,	// (0x00050ea1) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x0005df17) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x0005df17) list_single_number_heading_pane_vc_g

0x259a,	// (0x00050ec3) list_single_number_heading_pane_vc_t1_ParamLimits

0x259a,	// (0x00050ec3) list_single_number_heading_pane_vc_t1

0x2757,	// (0x00051080) list_single_number_heading_pane_vc_t2_ParamLimits

0x2757,	// (0x00051080) list_single_number_heading_pane_vc_t2

0x276b,	// (0x00051094) list_single_number_heading_pane_vc_t3_ParamLimits

0x276b,	// (0x00051094) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3b,	// (0x0005e364) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3b,	// (0x0005e364) list_single_number_heading_pane_vc_t

0x256c,	// (0x00050e95) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x256c,	// (0x00050e95) list_single_graphic_heading_pane_vc_g1

0x542a,	// (0x00053d53) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x542a,	// (0x00053d53) list_single_graphic_heading_pane_vc_g4

0x2578,	// (0x00050ea1) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2578,	// (0x00050ea1) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf631,	// (0x0005df5a) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf631,	// (0x0005df5a) list_single_graphic_heading_pane_vc_g

0x259a,	// (0x00050ec3) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x259a,	// (0x00050ec3) list_single_graphic_heading_pane_vc_t1

0x277d,	// (0x000510a6) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x277d,	// (0x000510a6) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa42,	// (0x0005e36b) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0005e36b) list_single_graphic_heading_pane_vc_t

0x542a,	// (0x00053d53) list_double2_pane_vc_g1_ParamLimits

0x542a,	// (0x00053d53) list_double2_pane_vc_g1

0x2578,	// (0x00050ea1) list_double2_pane_vc_g2_ParamLimits

0x2578,	// (0x00050ea1) list_double2_pane_vc_g2

0x0001,

0xf5ee,	// (0x0005df17) list_double2_pane_vc_g_ParamLimits

0xf5ee,	// (0x0005df17) list_double2_pane_vc_g

0x2791,	// (0x000510ba) list_double2_pane_vc_t1_ParamLimits

0x2791,	// (0x000510ba) list_double2_pane_vc_t1

0x27a7,	// (0x000510d0) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x27a7,	// (0x000510d0) list_double2_large_graphic_pane_vc_g1

0x27b3,	// (0x000510dc) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x27b3,	// (0x000510dc) list_double2_large_graphic_pane_vc_g2

0x27bf,	// (0x000510e8) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x27bf,	// (0x000510e8) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf606,	// (0x0005df2f) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf606,	// (0x0005df2f) list_double2_large_graphic_pane_vc_g

0x27cb,	// (0x000510f4) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x27cb,	// (0x000510f4) list_double2_large_graphic_pane_vc_t1

0x27e1,	// (0x0005110a) list_double_time_pane_vc_g1_ParamLimits

0x27e1,	// (0x0005110a) list_double_time_pane_vc_g1

0x27ed,	// (0x00051116) list_double_time_pane_vc_g2_ParamLimits

0x27ed,	// (0x00051116) list_double_time_pane_vc_g2

0x0001,

0xfa47,	// (0x0005e370) list_double_time_pane_vc_g_ParamLimits

0xfa47,	// (0x0005e370) list_double_time_pane_vc_g

0x27f9,	// (0x00051122) list_double_time_pane_vc_t1_ParamLimits

0x27f9,	// (0x00051122) list_double_time_pane_vc_t1

0x2812,	// (0x0005113b) list_double_time_pane_vc_t2_ParamLimits

0x2812,	// (0x0005113b) list_double_time_pane_vc_t2

0x2852,	// (0x0005117b) list_double_time_pane_vc_t3_ParamLimits

0x2852,	// (0x0005117b) list_double_time_pane_vc_t3

0x286a,	// (0x00051193) list_double_time_pane_vc_t4_ParamLimits

0x286a,	// (0x00051193) list_double_time_pane_vc_t4

0x0003,

0xfa4c,	// (0x0005e375) list_double_time_pane_vc_t_ParamLimits

0xfa4c,	// (0x0005e375) list_double_time_pane_vc_t

0x542a,	// (0x00053d53) list_double_pane_vc_g1_ParamLimits

0x542a,	// (0x00053d53) list_double_pane_vc_g1

0x2578,	// (0x00050ea1) list_double_pane_vc_g2_ParamLimits

0x2578,	// (0x00050ea1) list_double_pane_vc_g2

0x0001,

0xf5ee,	// (0x0005df17) list_double_pane_vc_g_ParamLimits

0xf5ee,	// (0x0005df17) list_double_pane_vc_g

0x287e,	// (0x000511a7) list_double_pane_vc_t1_ParamLimits

0x287e,	// (0x000511a7) list_double_pane_vc_t1

0x2890,	// (0x000511b9) list_double_pane_vc_t2_ParamLimits

0x2890,	// (0x000511b9) list_double_pane_vc_t2

0x0001,

0xfa55,	// (0x0005e37e) list_double_pane_vc_t_ParamLimits

0xfa55,	// (0x0005e37e) list_double_pane_vc_t

0x542a,	// (0x00053d53) list_double_number_pane_vc_g1_ParamLimits

0x542a,	// (0x00053d53) list_double_number_pane_vc_g1

0x2578,	// (0x00050ea1) list_double_number_pane_vc_g2_ParamLimits

0x2578,	// (0x00050ea1) list_double_number_pane_vc_g2

0x0001,

0xf5ee,	// (0x0005df17) list_double_number_pane_vc_g_ParamLimits

0xf5ee,	// (0x0005df17) list_double_number_pane_vc_g

0x28a8,	// (0x000511d1) list_double_number_pane_vc_t1_ParamLimits

0x28a8,	// (0x000511d1) list_double_number_pane_vc_t1

0x28bc,	// (0x000511e5) list_double_number_pane_vc_t2_ParamLimits

0x28bc,	// (0x000511e5) list_double_number_pane_vc_t2

0x2890,	// (0x000511b9) list_double_number_pane_vc_t3_ParamLimits

0x2890,	// (0x000511b9) list_double_number_pane_vc_t3

0x0002,

0xfa5a,	// (0x0005e383) list_double_number_pane_vc_t_ParamLimits

0xfa5a,	// (0x0005e383) list_double_number_pane_vc_t

0x28ce,	// (0x000511f7) list_double_large_graphic_pane_vc_g1_ParamLimits

0x28ce,	// (0x000511f7) list_double_large_graphic_pane_vc_g1

0x28da,	// (0x00051203) list_double_large_graphic_pane_vc_g2_ParamLimits

0x28da,	// (0x00051203) list_double_large_graphic_pane_vc_g2

0x27bf,	// (0x000510e8) list_double_large_graphic_pane_vc_g3_ParamLimits

0x27bf,	// (0x000510e8) list_double_large_graphic_pane_vc_g3

0x28e9,	// (0x00051212) list_double_large_graphic_pane_vc_g4_ParamLimits

0x28e9,	// (0x00051212) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa61,	// (0x0005e38a) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa61,	// (0x0005e38a) list_double_large_graphic_pane_vc_g

0x28f5,	// (0x0005121e) list_double_large_graphic_pane_vc_t1_ParamLimits

0x28f5,	// (0x0005121e) list_double_large_graphic_pane_vc_t1

0x2907,	// (0x00051230) list_double_large_graphic_pane_vc_t2_ParamLimits

0x2907,	// (0x00051230) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6a,	// (0x0005e393) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6a,	// (0x0005e393) list_double_large_graphic_pane_vc_t

0x542a,	// (0x00053d53) list_double_heading_pane_vc_g1_ParamLimits

0x542a,	// (0x00053d53) list_double_heading_pane_vc_g1

0x2578,	// (0x00050ea1) list_double_heading_pane_vc_g2_ParamLimits

0x2578,	// (0x00050ea1) list_double_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x0005df17) list_double_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x0005df17) list_double_heading_pane_vc_g

0x2920,	// (0x00051249) list_double_heading_pane_vc_t1_ParamLimits

0x2920,	// (0x00051249) list_double_heading_pane_vc_t1

0x259a,	// (0x00050ec3) list_double_heading_pane_vc_t2_ParamLimits

0x259a,	// (0x00050ec3) list_double_heading_pane_vc_t2

0x0001,

0xfa6f,	// (0x0005e398) list_double_heading_pane_vc_t_ParamLimits

0xfa6f,	// (0x0005e398) list_double_heading_pane_vc_t

0x256c,	// (0x00050e95) list_double_graphic_pane_vc_g1_ParamLimits

0x256c,	// (0x00050e95) list_double_graphic_pane_vc_g1

0x2934,	// (0x0005125d) list_double_graphic_pane_vc_g2_ParamLimits

0x2934,	// (0x0005125d) list_double_graphic_pane_vc_g2

0x2943,	// (0x0005126c) list_double_graphic_pane_vc_g3_ParamLimits

0x2943,	// (0x0005126c) list_double_graphic_pane_vc_g3

0x0002,

0xfa74,	// (0x0005e39d) list_double_graphic_pane_vc_g_ParamLimits

0xfa74,	// (0x0005e39d) list_double_graphic_pane_vc_g

0x294f,	// (0x00051278) list_double_graphic_pane_vc_t1_ParamLimits

0x294f,	// (0x00051278) list_double_graphic_pane_vc_t1

0x2890,	// (0x000511b9) list_double_graphic_pane_vc_t2_ParamLimits

0x2890,	// (0x000511b9) list_double_graphic_pane_vc_t2

0x0001,

0xfa7b,	// (0x0005e3a4) list_double_graphic_pane_vc_t_ParamLimits

0xfa7b,	// (0x0005e3a4) list_double_graphic_pane_vc_t

0x0176,	// (0x0004ea9f) aid_size_cell_fastswap

0xb4be,	// (0x00059de7) aid_size_cell_touch_ParamLimits

0xb4be,	// (0x00059de7) aid_size_cell_touch

0x03e3,	// (0x0004ed0c) popup_fast_swap_wide_window_ParamLimits

0x03e3,	// (0x0004ed0c) popup_fast_swap_wide_window

0xb609,	// (0x00059f32) touch_pane_ParamLimits

0xb609,	// (0x00059f32) touch_pane

0x3688,	// (0x00051fb1) button_value_adjust_pane_cp2

0x0aa8,	// (0x0004f3d1) button_value_adjust_pane_cp4

0x0acc,	// (0x0004f3f5) form_field_data_pane_cp2

0xba1a,	// (0x0005a343) form_field_data_wide_pane_cp2

0x3b15,	// (0x0005243e) bg_scroll_pane_ParamLimits

0x0ea1,	// (0x0004f7ca) scroll_handle_pane_ParamLimits

0x0eb5,	// (0x0004f7de) scroll_sc2_down_pane_ParamLimits

0x0eb5,	// (0x0004f7de) scroll_sc2_down_pane

0x3b46,	// (0x0005246f) scroll_sc2_up_pane_ParamLimits

0x3b46,	// (0x0005246f) scroll_sc2_up_pane

0xdd9d,	// (0x0005c6c6) grid_wheel_folder_pane_g1_ParamLimits

0xdd9d,	// (0x0005c6c6) grid_wheel_folder_pane_g1

0x107a,	// (0x0004f9a3) clock_nsta_pane_cp2_ParamLimits

0x107a,	// (0x0004f9a3) clock_nsta_pane_cp2

0xcb42,	// (0x0005b46b) listscroll_midp_pane_ParamLimits

0xcb53,	// (0x0005b47c) midp_canvas_pane

0x45ff,	// (0x00052f28) nsta_clock_indic_pane

0x4645,	// (0x00052f6e) listscroll_form_pane_vc

0x464d,	// (0x00052f76) listscroll_set_pane_vc_ParamLimits

0x464d,	// (0x00052f76) listscroll_set_pane_vc

0xd46b,	// (0x0005bd94) clock_nsta_pane

0xd495,	// (0x0005bdbe) indicator_nsta_pane

0x5033,	// (0x0005395c) bg_popup_sub_pane_cp2_ParamLimits

0x5047,	// (0x00053970) find_pane_cp2_ParamLimits

0x5047,	// (0x00053970) find_pane_cp2

0x505d,	// (0x00053986) grid_toobar_pane_ParamLimits

0x51b9,	// (0x00053ae2) list_form_gen_pane_vc_ParamLimits

0x51b9,	// (0x00053ae2) list_form_gen_pane_vc

0x51cf,	// (0x00053af8) scroll_pane_cp8_vc_ParamLimits

0x51cf,	// (0x00053af8) scroll_pane_cp8_vc

0x524b,	// (0x00053b74) data_form_wide_pane_vc_ParamLimits

0x524b,	// (0x00053b74) data_form_wide_pane_vc

0x5257,	// (0x00053b80) form_field_data_wide_pane_vc_g1

0x525f,	// (0x00053b88) form_field_data_wide_pane_vc_t1_ParamLimits

0x525f,	// (0x00053b88) form_field_data_wide_pane_vc_t1

0x369c,	// (0x00051fc5) input_focus_pane_cp6_vc_ParamLimits

0x369c,	// (0x00051fc5) input_focus_pane_cp6_vc

0xd80a,	// (0x0005c133) list_midp_pane_ParamLimits

0x688d,	// (0x000551b6) scroll_pane_cp16_ParamLimits

0x688d,	// (0x000551b6) scroll_pane_cp16

0x55c9,	// (0x00053ef2) button_value_adjust_pane_ParamLimits

0x55c9,	// (0x00053ef2) button_value_adjust_pane

0xd9de,	// (0x0005c307) button_value_adjust_pane_cp6_ParamLimits

0xd9de,	// (0x0005c307) button_value_adjust_pane_cp6

0xdaf8,	// (0x0005c421) settings_code_pane_cp_ParamLimits

0xdaf8,	// (0x0005c421) settings_code_pane_cp

0x2d46,	// (0x0005166f) cell_touch_pane_g1

0x2d46,	// (0x0005166f) cell_touch_pane_g2

0x0001,

0xf71a,	// (0x0005e043) cell_touch_pane_g

0xdc80,	// (0x0005c5a9) cell_touch_pane_cp_ParamLimits

0xdc80,	// (0x0005c5a9) cell_touch_pane_cp

0xdc9c,	// (0x0005c5c5) cell_touch_pane_ParamLimits

0xdc9c,	// (0x0005c5c5) cell_touch_pane

0x2d46,	// (0x0005166f) scroll_sc2_down_pane_g1

0x2d46,	// (0x0005166f) scroll_sc2_up_pane_g1

0x2d50,	// (0x00051679) bg_set_opt_pane_cp4_vc

0x6c1d,	// (0x00055546) list_set_graphic_pane_vc_g1_ParamLimits

0x6c1d,	// (0x00055546) list_set_graphic_pane_vc_g1

0x6c29,	// (0x00055552) list_set_graphic_pane_vc_g2_ParamLimits

0x6c29,	// (0x00055552) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0005e321) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0005e321) list_set_graphic_pane_vc_g

0x6c35,	// (0x0005555e) text_primary_small_cp13_vc_ParamLimits

0x6c35,	// (0x0005555e) text_primary_small_cp13_vc

0x6c4d,	// (0x00055576) list_set_graphic_pane_vc_ParamLimits

0x6c4d,	// (0x00055576) list_set_graphic_pane_vc

0x2d50,	// (0x00051679) input_focus_pane_cp2_vc

0x2d46,	// (0x0005166f) setting_code_pane_vc_g1

0x6c61,	// (0x0005558a) setting_code_pane_vc_t1

0x6c6f,	// (0x00055598) set_text_pane_vc_t1_ParamLimits

0x6c6f,	// (0x00055598) set_text_pane_vc_t1

0x2d50,	// (0x00051679) input_focus_pane_cp1_vc

0x6c8a,	// (0x000555b3) list_set_text_pane_vc

0x2d46,	// (0x0005166f) setting_text_pane_vc_g1

0x2d50,	// (0x00051679) bg_set_opt_pane_cp2_vc

0x6c94,	// (0x000555bd) setting_slider_graphic_pane_vc_g1

0x6c9c,	// (0x000555c5) setting_slider_graphic_pane_vc_t1

0x6caa,	// (0x000555d3) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0005e326) setting_slider_graphic_pane_vc_t

0x6cb8,	// (0x000555e1) slider_set_pane_cp_vc

0x6cc0,	// (0x000555e9) slider_set_pane_vc_g1

0x6cc9,	// (0x000555f2) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0005e32b) slider_set_pane_vc_g

0x3703,	// (0x0005202c) set_opt_bg_pane_g1_copy1

0x370b,	// (0x00052034) set_opt_bg_pane_g2_copy1

0x6cf5,	// (0x0005561e) set_opt_bg_pane_g3_copy1

0x371b,	// (0x00052044) set_opt_bg_pane_g4_copy1

0x3723,	// (0x0005204c) set_opt_bg_pane_g5_copy1

0x372b,	// (0x00052054) set_opt_bg_pane_g6_copy1

0x6cff,	// (0x00055628) set_opt_bg_pane_g7_copy1

0x6d07,	// (0x00055630) set_opt_bg_pane_g8_copy1

0x6d11,	// (0x0005563a) set_opt_bg_pane_g9_copy1

0x2d50,	// (0x00051679) bg_set_opt_pane_cp_vc

0x6d1b,	// (0x00055644) setting_slider_pane_vc_t1

0x6c9c,	// (0x000555c5) setting_slider_pane_vc_t2

0x6caa,	// (0x000555d3) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0005e33a) setting_slider_pane_vc_t

0x6cb8,	// (0x000555e1) slider_set_pane_vc

0x1424,	// (0x0004fd4d) volume_set_pane_vc_g1

0x142d,	// (0x0004fd56) volume_set_pane_vc_g2

0x1436,	// (0x0004fd5f) volume_set_pane_vc_g3

0x143f,	// (0x0004fd68) volume_set_pane_vc_g4

0x1448,	// (0x0004fd71) volume_set_pane_vc_g5

0x1451,	// (0x0004fd7a) volume_set_pane_vc_g6

0x145a,	// (0x0004fd83) volume_set_pane_vc_g7

0x1463,	// (0x0004fd8c) volume_set_pane_vc_g8

0x146c,	// (0x0004fd95) volume_set_pane_vc_g9

0x1475,	// (0x0004fd9e) volume_set_pane_vc_g10

0x0009,

0xfa18,	// (0x0005e341) volume_set_pane_vc_g

0x6d2a,	// (0x00055653) volume_set_pane_vc

0x6d32,	// (0x0005565b) button_value_adjust_pane_cp1_vc

0x6d3c,	// (0x00055665) list_highlight_pane_cp2_vc

0x6d45,	// (0x0005566e) list_set_pane_vc_ParamLimits

0x6d45,	// (0x0005566e) list_set_pane_vc

0x6daf,	// (0x000556d8) main_pane_set_vc_t1_ParamLimits

0x6daf,	// (0x000556d8) main_pane_set_vc_t1

0x6dc4,	// (0x000556ed) main_pane_set_vc_t2_ParamLimits

0x6dc4,	// (0x000556ed) main_pane_set_vc_t2

0x6dd6,	// (0x000556ff) main_pane_set_vc_t3_ParamLimits

0x6dd6,	// (0x000556ff) main_pane_set_vc_t3

0x6dea,	// (0x00055713) main_pane_set_vc_t4_ParamLimits

0x6dea,	// (0x00055713) main_pane_set_vc_t4

0x0003,

0xfa2d,	// (0x0005e356) main_pane_set_vc_t_ParamLimits

0xfa2d,	// (0x0005e356) main_pane_set_vc_t

0x6dfe,	// (0x00055727) setting_code_pane_vc_ParamLimits

0x6dfe,	// (0x00055727) setting_code_pane_vc

0x6e0f,	// (0x00055738) setting_slider_graphic_pane_vc

0x6e0f,	// (0x00055738) setting_slider_pane_vc

0x6e0f,	// (0x00055738) setting_text_pane_vc

0x6e0f,	// (0x00055738) setting_volume_pane_vc

0x6e19,	// (0x00055742) scroll_pane_cp121_vc

0x3676,	// (0x00051f9f) set_content_pane_vc

0x6e57,	// (0x00055780) button_value_adjust_pane_g1

0x6e60,	// (0x00055789) button_value_adjust_pane_g2

0x0001,

0xfa80,	// (0x0005e3a9) button_value_adjust_pane_g

0x6e69,	// (0x00055792) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6e69,	// (0x00055792) form_field_slider_wide_pane_vc_t1

0x6e7d,	// (0x000557a6) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6e7d,	// (0x000557a6) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa85,	// (0x0005e3ae) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa85,	// (0x0005e3ae) form_field_slider_wide_pane_vc_t

0x30ab,	// (0x000519d4) input_focus_pane_cp10_vc_ParamLimits

0x30ab,	// (0x000519d4) input_focus_pane_cp10_vc

0x6e8f,	// (0x000557b8) slider_cont_pane_cp1_vc_ParamLimits

0x6e8f,	// (0x000557b8) slider_cont_pane_cp1_vc

0x6cc0,	// (0x000555e9) slider_form_pane_g1_cp2

0x6cc9,	// (0x000555f2) slider_form_pane_g2_cp2

0x6ea8,	// (0x000557d1) form_field_slider_pane_vc_t3

0x6eb6,	// (0x000557df) form_field_slider_pane_vc_t4

0x6ec4,	// (0x000557ed) slider_form_pane_vc_ParamLimits

0x6ec4,	// (0x000557ed) slider_form_pane_vc

0x6ed1,	// (0x000557fa) form_field_slider_pane_vc_t1_ParamLimits

0x6ed1,	// (0x000557fa) form_field_slider_pane_vc_t1

0x6e7d,	// (0x000557a6) form_field_slider_pane_vc_t2_ParamLimits

0x6e7d,	// (0x000557a6) form_field_slider_pane_vc_t2

0x0001,

0xfa95,	// (0x0005e3be) form_field_slider_pane_vc_t_ParamLimits

0xfa95,	// (0x0005e3be) form_field_slider_pane_vc_t

0x30ab,	// (0x000519d4) input_focus_pane_cp9_vc_ParamLimits

0x30ab,	// (0x000519d4) input_focus_pane_cp9_vc

0x6eed,	// (0x00055816) slider_cont_pane_vc_ParamLimits

0x6eed,	// (0x00055816) slider_cont_pane_vc

0x6eff,	// (0x00055828) list_form_graphic_pane_cp_vc_ParamLimits

0x6eff,	// (0x00055828) list_form_graphic_pane_cp_vc

0x5257,	// (0x00053b80) form_field_popup_wide_pane_vc_g1

0x6f14,	// (0x0005583d) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6f14,	// (0x0005583d) form_field_popup_wide_pane_vc_t1

0x369c,	// (0x00051fc5) input_focus_pane_cp8_vc_ParamLimits

0x369c,	// (0x00051fc5) input_focus_pane_cp8_vc

0x6f2b,	// (0x00055854) list_form_wide_pane_vc_ParamLimits

0x6f2b,	// (0x00055854) list_form_wide_pane_vc

0x6f37,	// (0x00055860) list_form_graphic_pane_vc_g1

0x6f3f,	// (0x00055868) list_form_graphic_pane_vc_t1_ParamLimits

0x6f3f,	// (0x00055868) list_form_graphic_pane_vc_t1

0x2e30,	// (0x00051759) list_highlight_pane_cp5_vc_ParamLimits

0x2e30,	// (0x00051759) list_highlight_pane_cp5_vc

0x6f5b,	// (0x00055884) list_form_graphic_pane_vc_ParamLimits

0x6f5b,	// (0x00055884) list_form_graphic_pane_vc

0x5257,	// (0x00053b80) form_field_popup_pane_vc_g1

0x6f71,	// (0x0005589a) form_field_popup_pane_vc_t1_ParamLimits

0x6f71,	// (0x0005589a) form_field_popup_pane_vc_t1

0x369c,	// (0x00051fc5) input_focus_pane_cp7_vc_ParamLimits

0x369c,	// (0x00051fc5) input_focus_pane_cp7_vc

0x6f88,	// (0x000558b1) list_form_pane_vc_ParamLimits

0x6f88,	// (0x000558b1) list_form_pane_vc

0x6f94,	// (0x000558bd) data_form_pane_vc_t1_ParamLimits

0x6f94,	// (0x000558bd) data_form_pane_vc_t1

0x3703,	// (0x0005202c) input_focus_pane_vc_g1

0x370b,	// (0x00052034) input_focus_pane_vc_g2

0x3713,	// (0x0005203c) input_focus_pane_vc_g3

0x371b,	// (0x00052044) input_focus_pane_vc_g4

0x3723,	// (0x0005204c) input_focus_pane_vc_g5

0x372b,	// (0x00052054) input_focus_pane_vc_g6

0x3733,	// (0x0005205c) input_focus_pane_vc_g7

0x373b,	// (0x00052064) input_focus_pane_vc_g8

0x3743,	// (0x0005206c) input_focus_pane_vc_g9

0x2d46,	// (0x0005166f) input_focus_pane_vc_g10

0x0009,

0xf6a3,	// (0x0005dfcc) input_focus_pane_vc_g

0x524b,	// (0x00053b74) data_form_pane_vc_ParamLimits

0x524b,	// (0x00053b74) data_form_pane_vc

0x5257,	// (0x00053b80) form_field_data_pane_vc_g1

0x6faf,	// (0x000558d8) form_field_data_pane_vc_t1_ParamLimits

0x6faf,	// (0x000558d8) form_field_data_pane_vc_t1

0x369c,	// (0x00051fc5) input_focus_pane_vc_ParamLimits

0x369c,	// (0x00051fc5) input_focus_pane_vc

0x6fc9,	// (0x000558f2) button_value_adjust_pane_cp3_vc

0x6fd1,	// (0x000558fa) button_value_adjust_pane_cp5_vc

0x6fd9,	// (0x00055902) form_field_data_pane_vc_ParamLimits

0x6fd9,	// (0x00055902) form_field_data_pane_vc

0x6ff0,	// (0x00055919) form_field_data_pane_vc_cp2

0x6ff8,	// (0x00055921) form_field_data_wide_pane_vc_ParamLimits

0x6ff8,	// (0x00055921) form_field_data_wide_pane_vc

0x700e,	// (0x00055937) form_field_data_wide_pane_vc_cp2

0x7016,	// (0x0005593f) form_field_popup_pane_vc_ParamLimits

0x7016,	// (0x0005593f) form_field_popup_pane_vc

0x702d,	// (0x00055956) form_field_popup_wide_pane_vc_ParamLimits

0x702d,	// (0x00055956) form_field_popup_wide_pane_vc

0x7043,	// (0x0005596c) form_field_slider_pane_vc_ParamLimits

0x7043,	// (0x0005596c) form_field_slider_pane_vc

0x7056,	// (0x0005597f) form_field_slider_wide_pane_vc_ParamLimits

0x7056,	// (0x0005597f) form_field_slider_wide_pane_vc

0xdcba,	// (0x0005c5e3) grid_touch_1_pane_ParamLimits

0xdcba,	// (0x0005c5e3) grid_touch_1_pane

0xdcce,	// (0x0005c5f7) grid_touch_2_pane_ParamLimits

0xdcce,	// (0x0005c5f7) grid_touch_2_pane

0x712b,	// (0x00055a54) touch_pane_g1_ParamLimits

0x712b,	// (0x00055a54) touch_pane_g1

0x708d,	// (0x000559b6) cell_app_pane_cp_wide_ParamLimits

0x708d,	// (0x000559b6) cell_app_pane_cp_wide

0x709e,	// (0x000559c7) grid_popup_fast_wide_pane_ParamLimits

0x709e,	// (0x000559c7) grid_popup_fast_wide_pane

0x70b2,	// (0x000559db) scroll_pane_cp19_ParamLimits

0x70b2,	// (0x000559db) scroll_pane_cp19

0x2d50,	// (0x00051679) bg_popup_window_pane_cp20

0x70c6,	// (0x000559ef) listscroll_popup_fast_wide_pane

0x3869,	// (0x00052192) grid_indicator_nsta_pane

0x70ce,	// (0x000559f7) clock_nsta_pane_g1

0x70d7,	// (0x00055a00) clock_nsta_pane_t1

0xdcf8,	// (0x0005c621) cell_indicator_nsta_pane_ParamLimits

0xdcf8,	// (0x0005c621) cell_indicator_nsta_pane

0x712b,	// (0x00055a54) cell_indicator_nsta_pane_g1

0xdd11,	// (0x0005c63a) cell_indicator_nsta_pane_g2

0x0001,

0xfa9f,	// (0x0005e3c8) cell_indicator_nsta_pane_g

0x714f,	// (0x00055a78) clock_nsta_pane_cp

0x7157,	// (0x00055a80) indicator_nsta_pane_cp

0x7160,	// (0x00055a89) nsta_clock_indic_pane_g1

0x2ef9,	// (0x00051822) grid_indicator_pane

0x3c3b,	// (0x00052564) scroll_pane_cp29

0x0fc9,	// (0x0004f8f2) indicator_nsta_pane_cp2_ParamLimits

0x0fc9,	// (0x0004f8f2) indicator_nsta_pane_cp2

0x2e30,	// (0x00051759) main_apps_wheel_pane

0x5450,	// (0x00053d79) form_midp_field_text_pane_ParamLimits

0x559b,	// (0x00053ec4) scroll_bar_cp050_ParamLimits

0x71c9,	// (0x00055af2) cell_indicator_pane_ParamLimits

0x71c9,	// (0x00055af2) cell_indicator_pane

0x71e0,	// (0x00055b09) cell_indicator_pane_g1

0xdd27,	// (0x0005c650) grid_wheel_folder_pane_ParamLimits

0xdd27,	// (0x0005c650) grid_wheel_folder_pane

0xdd35,	// (0x0005c65e) list_wheel_apps_pane_ParamLimits

0xdd35,	// (0x0005c65e) list_wheel_apps_pane

0xdd43,	// (0x0005c66c) main_apps_wheel_pane_g1_ParamLimits

0xdd43,	// (0x0005c66c) main_apps_wheel_pane_g1

0xdd4f,	// (0x0005c678) main_apps_wheel_pane_g2_ParamLimits

0xdd4f,	// (0x0005c678) main_apps_wheel_pane_g2

0x0001,

0xfabb,	// (0x0005e3e4) main_apps_wheel_pane_g_ParamLimits

0xfabb,	// (0x0005e3e4) main_apps_wheel_pane_g

0xdd5d,	// (0x0005c686) main_apps_wheel_pane_t1_ParamLimits

0xdd5d,	// (0x0005c686) main_apps_wheel_pane_t1

0xdd71,	// (0x0005c69a) list_wheel_apps_pane_g1

0xdd79,	// (0x0005c6a2) list_wheel_apps_pane_g2

0xdd81,	// (0x0005c6aa) list_wheel_apps_pane_g3

0xdd89,	// (0x0005c6b2) list_wheel_apps_pane_g4

0xdd93,	// (0x0005c6bc) list_wheel_apps_pane_g5

0x0004,

0xfac0,	// (0x0005e3e9) list_wheel_apps_pane_g

0x416b,	// (0x00052a94) navi_icon_text_pane

0xd366,	// (0x0005bc8f) aid_fill_nsta

0xddaa,	// (0x0005c6d3) navi_icon_text_pane_g1

0xddb6,	// (0x0005c6df) navi_icon_text_pane_t1

0xcb2a,	// (0x0005b453) list_set_graphic_pane_t1_ParamLimits

0xcb2a,	// (0x0005b453) list_set_graphic_pane_t1

0x5cf9,	// (0x00054622) popup_midp_note_alarm_window_t6_ParamLimits

0x5cf9,	// (0x00054622) popup_midp_note_alarm_window_t6

0x5d0b,	// (0x00054634) popup_midp_note_alarm_window_t7_ParamLimits

0x5d0b,	// (0x00054634) popup_midp_note_alarm_window_t7

0x5d1d,	// (0x00054646) popup_midp_note_alarm_window_t8_ParamLimits

0x5d1d,	// (0x00054646) popup_midp_note_alarm_window_t8

0x5d2f,	// (0x00054658) popup_midp_note_alarm_window_t9_ParamLimits

0x5d2f,	// (0x00054658) popup_midp_note_alarm_window_t9

0x5d41,	// (0x0005466a) popup_midp_note_alarm_window_t10_ParamLimits

0x5d41,	// (0x0005466a) popup_midp_note_alarm_window_t10

0x5d53,	// (0x0005467c) popup_midp_note_alarm_window_t11_ParamLimits

0x5d53,	// (0x0005467c) popup_midp_note_alarm_window_t11

0x5d65,	// (0x0005468e) scroll_pane_cp17_ParamLimits

0x5d65,	// (0x0005468e) scroll_pane_cp17

0x1424,	// (0x0004fd4d) volume_small_pane_cp_g1

0x1719,	// (0x00050042) volume_small_pane_cp_g2

0x1722,	// (0x0005004b) volume_small_pane_cp_g3

0x172b,	// (0x00050054) volume_small_pane_cp_g4

0x1734,	// (0x0005005d) volume_small_pane_cp_g5

0x173d,	// (0x00050066) volume_small_pane_cp_g6

0x1746,	// (0x0005006f) volume_small_pane_cp_g7

0x174f,	// (0x00050078) volume_small_pane_cp_g8

0x1758,	// (0x00050081) volume_small_pane_cp_g9

0x1761,	// (0x0005008a) volume_small_pane_cp_g10

0x43ba,	// (0x00052ce3) midp_ticker_pane_g1_ParamLimits

0x43c6,	// (0x00052cef) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x0005e094) midp_ticker_pane_g_ParamLimits

0xcbea,	// (0x0005b513) midp_ticker_pane_t1_ParamLimits

0xd386,	// (0x0005bcaf) aid_fill_nsta_2

0x5587,	// (0x00053eb0) list_form2_midp_pane

0x66cb,	// (0x00054ff4) midp_editing_number_pane_ParamLimits

0x66da,	// (0x00055003) midp_ticker_pane_ParamLimits

0x72c7,	// (0x00055bf0) form2_midp_field_pane

0x72eb,	// (0x00055c14) scroll_pane_cp51

0x730b,	// (0x00055c34) form2_midp_button_pane_ParamLimits

0x730b,	// (0x00055c34) form2_midp_button_pane

0x731d,	// (0x00055c46) form2_midp_content_pane_ParamLimits

0x731d,	// (0x00055c46) form2_midp_content_pane

0x7337,	// (0x00055c60) form2_midp_field_choice_group_pane

0x733f,	// (0x00055c68) form2_midp_field_pane_g1

0x7347,	// (0x00055c70) form2_midp_field_pane_g2

0x734f,	// (0x00055c78) form2_midp_field_pane_g3

0x7357,	// (0x00055c80) form2_midp_field_pane_g4

0x0003,

0xfae5,	// (0x0005e40e) form2_midp_field_pane_g

0x735f,	// (0x00055c88) form2_midp_gauge_slider_pane

0x7367,	// (0x00055c90) form2_midp_gauge_wait_pane

0x736f,	// (0x00055c98) form2_midp_image_pane_ParamLimits

0x736f,	// (0x00055c98) form2_midp_image_pane

0x738a,	// (0x00055cb3) form2_midp_label_pane_ParamLimits

0x738a,	// (0x00055cb3) form2_midp_label_pane

0xdde4,	// (0x0005c70d) form2_midp_label_pane_cp_ParamLimits

0xdde4,	// (0x0005c70d) form2_midp_label_pane_cp

0x73c4,	// (0x00055ced) form2_midp_string_pane_ParamLimits

0x73c4,	// (0x00055ced) form2_midp_string_pane

0xbf5c,	// (0x0005a885) form2_midp_text_pane_ParamLimits

0xbf5c,	// (0x0005a885) form2_midp_text_pane

0x73d6,	// (0x00055cff) form2_midp_time_pane

0x73e6,	// (0x00055d0f) input_focus_pane_cp51_ParamLimits

0x73e6,	// (0x00055d0f) input_focus_pane_cp51

0x73fe,	// (0x00055d27) form2_midp_label_pane_t1_ParamLimits

0x73fe,	// (0x00055d27) form2_midp_label_pane_t1

0xbf7b,	// (0x0005a8a4) form2_mdip_text_pane_t1_ParamLimits

0xbf7b,	// (0x0005a8a4) form2_mdip_text_pane_t1

0x299e,	// (0x000512c7) form2_midp_time_pane_t1

0x7447,	// (0x00055d70) form2_midp_gauge_slider_pane_t1

0xde05,	// (0x0005c72e) form2_midp_gauge_slider_pane_t2

0xde17,	// (0x0005c740) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaee,	// (0x0005e417) form2_midp_gauge_slider_pane_t

0x747d,	// (0x00055da6) form2_midp_slider_pane

0x7489,	// (0x00055db2) form2_midp_gauge_wait_pane_t1

0x7497,	// (0x00055dc0) form2_midp_wait_pane_ParamLimits

0x7497,	// (0x00055dc0) form2_midp_wait_pane

0xde29,	// (0x0005c752) list_single_2graphic_pane_cp4_ParamLimits

0xde29,	// (0x0005c752) list_single_2graphic_pane_cp4

0xd797,	// (0x0005c0c0) list_single_midp_graphic_pane_cp_ParamLimits

0xd797,	// (0x0005c0c0) list_single_midp_graphic_pane_cp

0x2d50,	// (0x00051679) list_highlight_pane_cp20

0x74f1,	// (0x00055e1a) list_single_2graphic_pane_g1_cp4

0x74f9,	// (0x00055e22) list_single_2graphic_pane_g2_cp4

0x7501,	// (0x00055e2a) list_single_2graphic_pane_t1_cp4

0x2e30,	// (0x00051759) list_highlight_pane_cp21

0x7510,	// (0x00055e39) list_single_midp_graphic_pane_g4_cp

0x751f,	// (0x00055e48) list_single_midp_graphic_pane_t1_cp

0xde3e,	// (0x0005c767) form2_mdip_string_pane_t1_ParamLimits

0xde3e,	// (0x0005c767) form2_mdip_string_pane_t1

0x2d50,	// (0x00051679) bg_wml_button_pane_cp2

0x2d46,	// (0x0005166f) form2_midp_image_pane_g1

0x2499,	// (0x00050dc2) list_double_large_graphic_pane_g5_ParamLimits

0x2499,	// (0x00050dc2) list_double_large_graphic_pane_g5

0xcb42,	// (0x0005b46b) midp_form_pane_ParamLimits

0x2e30,	// (0x00051759) main_apps_wheel_pane_ParamLimits

0xd0c2,	// (0x0005b9eb) popup_preview_window_ParamLimits

0xd0c2,	// (0x0005b9eb) popup_preview_window

0x4bbb,	// (0x000534e4) popup_touch_info_window_ParamLimits

0x4bbb,	// (0x000534e4) popup_touch_info_window

0x4bd9,	// (0x00053502) popup_touch_menu_window_ParamLimits

0x4bd9,	// (0x00053502) popup_touch_menu_window

0x2d3c,	// (0x00051665) bg_popup_sub_pane_cp6

0x762d,	// (0x00055f56) list_touch_menu_pane

0x7635,	// (0x00055f5e) list_single_touch_menu_pane_ParamLimits

0x7635,	// (0x00055f5e) list_single_touch_menu_pane

0x764c,	// (0x00055f75) list_single_touch_menu_pane_t1

0x2e30,	// (0x00051759) bg_popup_sub_pane_cp7_ParamLimits

0x2e30,	// (0x00051759) bg_popup_sub_pane_cp7

0x765a,	// (0x00055f83) heading_sub_pane

0x7662,	// (0x00055f8b) list_touch_info_pane_ParamLimits

0x7662,	// (0x00055f8b) list_touch_info_pane

0x7671,	// (0x00055f9a) list_single_touch_info_pane_ParamLimits

0x7671,	// (0x00055f9a) list_single_touch_info_pane

0x7683,	// (0x00055fac) list_single_touch_info_pane_t1

0x7691,	// (0x00055fba) list_single_touch_info_pane_t2

0x0001,

0xfafc,	// (0x0005e425) list_single_touch_info_pane_t

0x42df,	// (0x00052c08) bg_popup_heading_pane_cp

0x769f,	// (0x00055fc8) heading_sub_pane_t1

0x51e5,	// (0x00053b0e) bg_popup_preview_window_pane_cp_ParamLimits

0x51e5,	// (0x00053b0e) bg_popup_preview_window_pane_cp

0x765a,	// (0x00055f83) heading_preview_pane

0x7662,	// (0x00055f8b) list_preview_pane_ParamLimits

0x7662,	// (0x00055f8b) list_preview_pane

0x76ad,	// (0x00055fd6) popup_preview_window_g1

0x7671,	// (0x00055f9a) list_single_preview_pane_ParamLimits

0x7671,	// (0x00055f9a) list_single_preview_pane

0x76b5,	// (0x00055fde) list_single_preview_pane_g1

0x76bd,	// (0x00055fe6) list_single_preview_pane_t1

0x7683,	// (0x00055fac) list_single_preview_pane_t2

0x0001,

0xfb01,	// (0x0005e42a) list_single_preview_pane_t

0x76cb,	// (0x00055ff4) bg_popup_heading_pane_cp2_ParamLimits

0x76cb,	// (0x00055ff4) bg_popup_heading_pane_cp2

0x76e1,	// (0x0005600a) heading_preview_pane_g1

0x76e9,	// (0x00056012) heading_preview_pane_t1_ParamLimits

0x76e9,	// (0x00056012) heading_preview_pane_t1

0x2f1c,	// (0x00051845) soft_indicator_pane_t1_ParamLimits

0x360f,	// (0x00051f38) scroll_pane_ParamLimits

0x3b34,	// (0x0005245d) scroll_sc2_left_pane

0x3b3d,	// (0x00052466) scroll_sc2_right_pane

0x3b5c,	// (0x00052485) scroll_bg_pane_g1_ParamLimits

0x3b71,	// (0x0005249a) scroll_bg_pane_g2_ParamLimits

0x3b89,	// (0x000524b2) scroll_bg_pane_g3_ParamLimits

0xf6fa,	// (0x0005e023) scroll_bg_pane_g_ParamLimits

0x3b5c,	// (0x00052485) scroll_handle_pane_g1_ParamLimits

0x3bab,	// (0x000524d4) scroll_handle_pane_g2_ParamLimits

0x3b89,	// (0x000524b2) scroll_handle_pane_g3_ParamLimits

0xf701,	// (0x0005e02a) scroll_handle_pane_g_ParamLimits

0x4687,	// (0x00052fb0) popup_choice_list_window_ParamLimits

0x4687,	// (0x00052fb0) popup_choice_list_window

0x503f,	// (0x00053968) choice_list_pane

0x50c1,	// (0x000539ea) cell_toolbar_pane_t1

0x50e9,	// (0x00053a12) toolbar_button_pane_ParamLimits

0x6216,	// (0x00054b3f) ai_gene_pane_1_t2_ParamLimits

0x6216,	// (0x00054b3f) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0005e23b) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0005e23b) ai_gene_pane_1_t

0x7706,	// (0x0005602f) scroll_sc2_left_pane_g1

0x7706,	// (0x0005602f) scroll_sc2_right_pane_g1

0x465f,	// (0x00052f88) bg_popup_sub_pane_cp10

0x7710,	// (0x00056039) list_choice_list_pane

0x7727,	// (0x00056050) list_single_choice_list_pane_ParamLimits

0x7727,	// (0x00056050) list_single_choice_list_pane

0x773b,	// (0x00056064) list_single_choice_list_pane_g1

0x7743,	// (0x0005606c) list_single_choice_list_pane_t1_ParamLimits

0x7743,	// (0x0005606c) list_single_choice_list_pane_t1

0x7758,	// (0x00056081) choice_list_pane_g1

0x7760,	// (0x00056089) choice_list_pane_t1

0x2d3c,	// (0x00051665) input_focus_pane_cp11

0x3a11,	// (0x0005233a) title_pane_stacon_g2_ParamLimits

0x3a11,	// (0x0005233a) title_pane_stacon_g2

0x0002,

0xf6e0,	// (0x0005e009) title_pane_stacon_g_ParamLimits

0xf6e0,	// (0x0005e009) title_pane_stacon_g

0x42df,	// (0x00052c08) cursor_press_pane

0xcd8d,	// (0x0005b6b6) popup_fep_hwr_window_ParamLimits

0xcd8d,	// (0x0005b6b6) popup_fep_hwr_window

0x47a9,	// (0x000530d2) popup_fep_vkb_window_ParamLimits

0x47a9,	// (0x000530d2) popup_fep_vkb_window

0x776e,	// (0x00056097) cursor_press_pane_g1

0x0002,

0xfb2a,	// (0x0005e453) fep_vkb_side_pane_g_ParamLimits

0x17a3,	// (0x000500cc) fep_hwr_candidate_pane_ParamLimits

0x17a3,	// (0x000500cc) fep_hwr_candidate_pane

0x17cd,	// (0x000500f6) fep_hwr_side_pane_ParamLimits

0x17cd,	// (0x000500f6) fep_hwr_side_pane

0x17ed,	// (0x00050116) fep_hwr_top_pane_ParamLimits

0x17ed,	// (0x00050116) fep_hwr_top_pane

0x1805,	// (0x0005012e) fep_hwr_write_pane_ParamLimits

0x1805,	// (0x0005012e) fep_hwr_write_pane

0xfb2a,	// (0x0005e453) fep_vkb_side_pane_g

0x7776,	// (0x0005609f) fep_hwr_top_pane_g1

0x7788,	// (0x000560b1) fep_hwr_top_pane_g2

0x183f,	// (0x00050168) fep_hwr_top_pane_g3

0x0002,

0xfb06,	// (0x0005e42f) fep_hwr_top_pane_g

0x1854,	// (0x0005017d) fep_hwr_top_text_pane

0x3d0e,	// (0x00052637) fep_hwr_top_text_pane_g1

0x77be,	// (0x000560e7) fep_hwr_top_text_pane_t1

0x194a,	// (0x00050273) fep_hwr_candidate_pane_g1

0x7a11,	// (0x0005633a) fep_vkb_keypad_pane_g3_ParamLimits

0x7a11,	// (0x0005633a) fep_vkb_keypad_pane_g3

0x7a39,	// (0x00056362) fep_vkb_keypad_pane_g4_ParamLimits

0x7a39,	// (0x00056362) fep_vkb_keypad_pane_g4

0x7aa8,	// (0x000563d1) fep_vkb_bottom_pane_g2_ParamLimits

0x7aa8,	// (0x000563d1) fep_vkb_bottom_pane_g2

0x0001,

0xfb31,	// (0x0005e45a) fep_vkb_bottom_pane_g_ParamLimits

0xfb31,	// (0x0005e45a) fep_vkb_bottom_pane_g

0x7706,	// (0x0005602f) cell_vkb_side_pane_g2

0x0001,

0xfb3b,	// (0x0005e464) cell_vkb_side_pane_g

0x7b33,	// (0x0005645c) cell_vkb_side_pane_t1

0x7b41,	// (0x0005646a) cell_vkb_side_pane_t1_copy1

0x7706,	// (0x0005602f) bg_fep_vkb_candidate_pane_g2

0x7c6d,	// (0x00056596) cell_vkb_candidate_pane_ParamLimits

0x77cc,	// (0x000560f5) aid_size_cell_vkb_ParamLimits

0x77cc,	// (0x000560f5) aid_size_cell_vkb

0x7c6d,	// (0x00056596) cell_vkb_candidate_pane

0x1971,	// (0x0005029a) bg_popup_fep_shadow_pane_g1

0xdef4,	// (0x0005c81d) fep_vkb_bottom_pane_ParamLimits

0xdef4,	// (0x0005c81d) fep_vkb_bottom_pane

0x7890,	// (0x000561b9) fep_vkb_candidate_pane_ParamLimits

0x7890,	// (0x000561b9) fep_vkb_candidate_pane

0xdf19,	// (0x0005c842) fep_vkb_keypad_pane_ParamLimits

0xdf19,	// (0x0005c842) fep_vkb_keypad_pane

0xdf55,	// (0x0005c87e) fep_vkb_side_pane_ParamLimits

0xdf55,	// (0x0005c87e) fep_vkb_side_pane

0xdf91,	// (0x0005c8ba) fep_vkb_top_pane_ParamLimits

0xdf91,	// (0x0005c8ba) fep_vkb_top_pane

0x796a,	// (0x00056293) fep_vkb_top_pane_g1_ParamLimits

0x796a,	// (0x00056293) fep_vkb_top_pane_g1

0x7979,	// (0x000562a2) fep_vkb_top_pane_g2_ParamLimits

0x7979,	// (0x000562a2) fep_vkb_top_pane_g2

0x7988,	// (0x000562b1) fep_vkb_top_pane_g3_ParamLimits

0x7988,	// (0x000562b1) fep_vkb_top_pane_g3

0x0003,

0xfb21,	// (0x0005e44a) fep_vkb_top_pane_g_ParamLimits

0xfb21,	// (0x0005e44a) fep_vkb_top_pane_g

0x79a6,	// (0x000562cf) fep_vkb_top_text_pane_ParamLimits

0x79a6,	// (0x000562cf) fep_vkb_top_text_pane

0xdfcd,	// (0x0005c8f6) fep_vkb_side_pane_g1_ParamLimits

0xdfcd,	// (0x0005c8f6) fep_vkb_side_pane_g1

0x7a00,	// (0x00056329) grid_vkb_side_pane_ParamLimits

0x7a00,	// (0x00056329) grid_vkb_side_pane

0x1979,	// (0x000502a2) bg_popup_fep_shadow_pane_g2

0x1982,	// (0x000502ab) bg_popup_fep_shadow_pane_g3

0x198a,	// (0x000502b3) bg_popup_fep_shadow_pane_g4

0x1993,	// (0x000502bc) bg_popup_fep_shadow_pane_g5

0x199d,	// (0x000502c6) bg_popup_fep_shadow_pane_g6

0x19a5,	// (0x000502ce) bg_popup_fep_shadow_pane_g7

0x371b,	// (0x00052044) bg_popup_fep_shadow_pane_g8

0x7a57,	// (0x00056380) grid_vkb_keypad_number_pane_ParamLimits

0x7a57,	// (0x00056380) grid_vkb_keypad_number_pane

0x7a67,	// (0x00056390) grid_vkb_keypad_pane_ParamLimits

0x7a67,	// (0x00056390) grid_vkb_keypad_pane

0x7a8d,	// (0x000563b6) fep_vkb_bottom_pane_g1_ParamLimits

0x7a8d,	// (0x000563b6) fep_vkb_bottom_pane_g1

0x7ab6,	// (0x000563df) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7ab6,	// (0x000563df) grid_vkb_keypad_bottom_left_pane

0x7acb,	// (0x000563f4) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7acb,	// (0x000563f4) grid_vkb_keypad_bottom_right_pane

0x7ae0,	// (0x00056409) fep_vkb_top_text_pane_g1

0xe014,	// (0x0005c93d) fep_vkb_top_text_pane_t1

0xe026,	// (0x0005c94f) cell_vkb_side_pane_ParamLimits

0xe026,	// (0x0005c94f) cell_vkb_side_pane

0x7706,	// (0x0005602f) cell_vkb_side_pane_g1

0x7b4f,	// (0x00056478) cell_vkb_keypad_pane_ParamLimits

0x7b4f,	// (0x00056478) cell_vkb_keypad_pane

0x7bc4,	// (0x000564ed) cell_vkb_keypad_pane_g1

0x0008,

0xfb4e,	// (0x0005e477) bg_popup_fep_shadow_pane_g

0x19b7,	// (0x000502e0) cell_hwr_side_pane_g1

0x19b7,	// (0x000502e0) cell_hwr_side_pane_g2

0x7bce,	// (0x000564f7) cell_vkb_keypad_pane_t1

0xe03c,	// (0x0005c965) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe03c,	// (0x0005c965) cell_vkb_keypad_bottom_left_pane

0xe051,	// (0x0005c97a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe051,	// (0x0005c97a) cell_vkb_keypad_bottom_right_pane

0x7706,	// (0x0005602f) cell_vkb_keypad_bottom_left_pane_g1

0x7706,	// (0x0005602f) cell_vkb_keypad_bottom_right_pane_g1

0x7c32,	// (0x0005655b) cell_vkb_keypad_number_pane_ParamLimits

0x7c32,	// (0x0005655b) cell_vkb_keypad_number_pane

0x7c51,	// (0x0005657a) cell_vkb_keypad_number_pane_g1

0x7c5b,	// (0x00056584) cell_vkb_keypad_number_pane_g2

0x7c64,	// (0x0005658d) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb40,	// (0x0005e469) cell_vkb_keypad_number_pane_g

0x7bce,	// (0x000564f7) cell_vkb_keypad_number_pane_t1

0x7c88,	// (0x000565b1) fep_vkb_candidate_pane_g1

0x0001,

0xfb61,	// (0x0005e48a) cell_hwr_side_pane_g

0x7ca1,	// (0x000565ca) cell_hwr_side_pane_t1

0x19c1,	// (0x000502ea) cell_hwr_side_pane_t1_copy1

0x19cf,	// (0x000502f8) cell_hwr_candidate_pane_g1

0x19fe,	// (0x00050327) cell_hwr_candidate_pane_t1

0x7706,	// (0x0005602f) cell_vkb_candidate_pane_g2

0x7ce5,	// (0x0005660e) cell_vkb_candidate_pane_t1

0x176a,	// (0x00050093) bg_popup_fep_shadow_pane_ParamLimits

0x176a,	// (0x00050093) bg_popup_fep_shadow_pane

0x181f,	// (0x00050148) bg_fep_hwr_top_pane_g4

0x779a,	// (0x000560c3) bg_hwr_side_pane_g1_ParamLimits

0x779a,	// (0x000560c3) bg_hwr_side_pane_g1

0xbfad,	// (0x0005a8d6) cell_hwr_side_pane_ParamLimits

0xbfad,	// (0x0005a8d6) cell_hwr_side_pane

0x18cb,	// (0x000501f4) fep_hwr_write_pane_g1_ParamLimits

0x18cb,	// (0x000501f4) fep_hwr_write_pane_g1

0x18d8,	// (0x00050201) fep_hwr_write_pane_g2_ParamLimits

0x18d8,	// (0x00050201) fep_hwr_write_pane_g2

0x18e5,	// (0x0005020e) fep_hwr_write_pane_g3_ParamLimits

0x18e5,	// (0x0005020e) fep_hwr_write_pane_g3

0xbfcd,	// (0x0005a8f6) fep_hwr_write_pane_g4_ParamLimits

0xbfcd,	// (0x0005a8f6) fep_hwr_write_pane_g4

0x0005,

0xfb0d,	// (0x0005e436) fep_hwr_write_pane_g_ParamLimits

0xfb0d,	// (0x0005e436) fep_hwr_write_pane_g

0x181f,	// (0x00050148) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x181f,	// (0x00050148) bg_fep_hwr_candidate_pane_g2

0x1908,	// (0x00050231) cell_hwr_candidate_pane_ParamLimits

0x1908,	// (0x00050231) cell_hwr_candidate_pane

0x194a,	// (0x00050273) fep_hwr_candidate_pane_g1_ParamLimits

0x77fa,	// (0x00056123) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x77fa,	// (0x00056123) bg_popup_fep_shadow_pane_cp2

0x7998,	// (0x000562c1) fep_vkb_top_pane_g4_ParamLimits

0x7998,	// (0x000562c1) fep_vkb_top_pane_g4

0x79de,	// (0x00056307) fep_vkb_side_pane_g2_ParamLimits

0x79de,	// (0x00056307) fep_vkb_side_pane_g2

0xb928,	// (0x0005a251) list_setting_pane_t4_ParamLimits

0xb928,	// (0x0005a251) list_setting_pane_t4

0xb9c2,	// (0x0005a2eb) list_setting_number_pane_t5_ParamLimits

0xb9c2,	// (0x0005a2eb) list_setting_number_pane_t5

0xca4f,	// (0x0005b378) list_double_heading_pane_cp2_ParamLimits

0xca4f,	// (0x0005b378) list_double_heading_pane_cp2

0x36b6,	// (0x00051fdf) list_double_heading_pane_g1_cp2_ParamLimits

0x36b6,	// (0x00051fdf) list_double_heading_pane_g1_cp2

0x36c2,	// (0x00051feb) list_double_heading_pane_g2_cp2_ParamLimits

0x36c2,	// (0x00051feb) list_double_heading_pane_g2_cp2

0x7cf3,	// (0x0005661c) list_double_heading_pane_t1_cp2_ParamLimits

0x7cf3,	// (0x0005661c) list_double_heading_pane_t1_cp2

0x7d09,	// (0x00056632) list_double_heading_pane_t2_cp2_ParamLimits

0x7d09,	// (0x00056632) list_double_heading_pane_t2_cp2

0x2d24,	// (0x0005164d) aid_value_unit2

0x043d,	// (0x0004ed66) popup_preview_fixed_window

0x30b9,	// (0x000519e2) bg_popup_preview_window_pane_cp02

0x7d1b,	// (0x00056644) list_preview_fixed_pane

0x7d61,	// (0x0005668a) list_empty_pane_fp_ParamLimits

0x7d61,	// (0x0005668a) list_empty_pane_fp

0x7d61,	// (0x0005668a) list_single_cale_day_pane_fp_ParamLimits

0x7d61,	// (0x0005668a) list_single_cale_day_pane_fp

0x7d61,	// (0x0005668a) list_single_graphic_heading_pane_fp_ParamLimits

0x7d61,	// (0x0005668a) list_single_graphic_heading_pane_fp

0x7d61,	// (0x0005668a) list_single_graphic_pane_fp_ParamLimits

0x7d61,	// (0x0005668a) list_single_graphic_pane_fp

0x7d61,	// (0x0005668a) list_single_heading_pane_fp_ParamLimits

0x7d61,	// (0x0005668a) list_single_heading_pane_fp

0x7d61,	// (0x0005668a) list_single_pane_fp_ParamLimits

0x7d61,	// (0x0005668a) list_single_pane_fp

0x7d76,	// (0x0005669f) list_single_pane_fp_g1_ParamLimits

0x7d76,	// (0x0005669f) list_single_pane_fp_g1

0x4454,	// (0x00052d7d) list_single_pane_fp_g2_ParamLimits

0x4454,	// (0x00052d7d) list_single_pane_fp_g2

0x7d82,	// (0x000566ab) list_single_pane_fp_g3_ParamLimits

0x7d82,	// (0x000566ab) list_single_pane_fp_g3

0x7d96,	// (0x000566bf) list_single_pane_fp_g4_ParamLimits

0x7d96,	// (0x000566bf) list_single_pane_fp_g4

0x0003,

0xfb74,	// (0x0005e49d) list_single_pane_fp_g_ParamLimits

0xfb74,	// (0x0005e49d) list_single_pane_fp_g

0x29b1,	// (0x000512da) list_single_pane_fp_t1_ParamLimits

0x29b1,	// (0x000512da) list_single_pane_fp_t1

0x29c8,	// (0x000512f1) list_single_graphic_pane_fp_g1_ParamLimits

0x29c8,	// (0x000512f1) list_single_graphic_pane_fp_g1

0x7d76,	// (0x0005669f) list_single_graphic_pane_fp_g2_ParamLimits

0x7d76,	// (0x0005669f) list_single_graphic_pane_fp_g2

0x4454,	// (0x00052d7d) list_single_graphic_pane_fp_g3_ParamLimits

0x4454,	// (0x00052d7d) list_single_graphic_pane_fp_g3

0x7d82,	// (0x000566ab) list_single_graphic_pane_fp_g4_ParamLimits

0x7d82,	// (0x000566ab) list_single_graphic_pane_fp_g4

0x7d96,	// (0x000566bf) list_single_graphic_pane_fp_g5_ParamLimits

0x7d96,	// (0x000566bf) list_single_graphic_pane_fp_g5

0x0004,

0xfb7d,	// (0x0005e4a6) list_single_graphic_pane_fp_g_ParamLimits

0xfb7d,	// (0x0005e4a6) list_single_graphic_pane_fp_g

0x29d4,	// (0x000512fd) list_single_graphic_pane_fp_t1_ParamLimits

0x29d4,	// (0x000512fd) list_single_graphic_pane_fp_t1

0x29c8,	// (0x000512f1) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x29c8,	// (0x000512f1) list_single_graphic_heading_pane_fp_g1

0x7d76,	// (0x0005669f) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7d76,	// (0x0005669f) list_single_graphic_heading_pane_fp_g2

0x4454,	// (0x00052d7d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4454,	// (0x00052d7d) list_single_graphic_heading_pane_fp_g3

0x7d82,	// (0x000566ab) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7d82,	// (0x000566ab) list_single_graphic_heading_pane_fp_g4

0x7d96,	// (0x000566bf) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7d96,	// (0x000566bf) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7d,	// (0x0005e4a6) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7d,	// (0x0005e4a6) list_single_graphic_heading_pane_fp_g

0x29ea,	// (0x00051313) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x29ea,	// (0x00051313) list_single_graphic_heading_pane_fp_t1

0x2a00,	// (0x00051329) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x2a00,	// (0x00051329) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb88,	// (0x0005e4b1) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb88,	// (0x0005e4b1) list_single_graphic_heading_pane_fp_t

0x2a12,	// (0x0005133b) list_single_cale_day_pane_fp_g1_ParamLimits

0x2a12,	// (0x0005133b) list_single_cale_day_pane_fp_g1

0x7da2,	// (0x000566cb) list_single_cale_day_pane_fp_g2_ParamLimits

0x7da2,	// (0x000566cb) list_single_cale_day_pane_fp_g2

0x2a4a,	// (0x00051373) list_single_cale_day_pane_fp_g3_ParamLimits

0x2a4a,	// (0x00051373) list_single_cale_day_pane_fp_g3

0x2a72,	// (0x0005139b) list_single_cale_day_pane_fp_g4_ParamLimits

0x2a72,	// (0x0005139b) list_single_cale_day_pane_fp_g4

0x2a96,	// (0x000513bf) list_single_cale_day_pane_fp_g5_ParamLimits

0x2a96,	// (0x000513bf) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8d,	// (0x0005e4b6) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8d,	// (0x0005e4b6) list_single_cale_day_pane_fp_g

0x2aba,	// (0x000513e3) list_single_cale_day_pane_fp_t1_ParamLimits

0x2aba,	// (0x000513e3) list_single_cale_day_pane_fp_t1

0x2ae0,	// (0x00051409) list_single_cale_day_pane_fp_t2_ParamLimits

0x2ae0,	// (0x00051409) list_single_cale_day_pane_fp_t2

0x2af9,	// (0x00051422) list_single_cale_day_pane_fp_t3_ParamLimits

0x2af9,	// (0x00051422) list_single_cale_day_pane_fp_t3

0x0002,

0xfb98,	// (0x0005e4c1) list_single_cale_day_pane_fp_t_ParamLimits

0xfb98,	// (0x0005e4c1) list_single_cale_day_pane_fp_t

0x7d76,	// (0x0005669f) list_empty_pane_fp_g1_ParamLimits

0x7d76,	// (0x0005669f) list_empty_pane_fp_g1

0x2b12,	// (0x0005143b) list_empty_pane_fp_t1

0x2b20,	// (0x00051449) list_empty_pane_fp_t2

0x0001,

0xfb9f,	// (0x0005e4c8) list_empty_pane_fp_t

0x7d76,	// (0x0005669f) list_single_heading_pane_fp_g1_ParamLimits

0x7d76,	// (0x0005669f) list_single_heading_pane_fp_g1

0x4454,	// (0x00052d7d) list_single_heading_pane_fp_g2_ParamLimits

0x4454,	// (0x00052d7d) list_single_heading_pane_fp_g2

0x7d82,	// (0x000566ab) list_single_heading_pane_fp_g3_ParamLimits

0x7d82,	// (0x000566ab) list_single_heading_pane_fp_g3

0x0002,

0xfba4,	// (0x0005e4cd) list_single_heading_pane_fp_g_ParamLimits

0xfba4,	// (0x0005e4cd) list_single_heading_pane_fp_g

0x2b2e,	// (0x00051457) list_single_heading_pane_fp_t1_ParamLimits

0x2b2e,	// (0x00051457) list_single_heading_pane_fp_t1

0x2b40,	// (0x00051469) list_single_heading_pane_fp_t2_ParamLimits

0x2b40,	// (0x00051469) list_single_heading_pane_fp_t2

0x0001,

0xfbab,	// (0x0005e4d4) list_single_heading_pane_fp_t_ParamLimits

0xfbab,	// (0x0005e4d4) list_single_heading_pane_fp_t

0x38a8,	// (0x000521d1) aid_size_cell_fast

0x3029,	// (0x00051952) soft_indicator_pane_cp1_t1

0x38e5,	// (0x0005220e) cell_app_pane_cp2_ParamLimits

0x38e5,	// (0x0005220e) cell_app_pane_cp2

0x178c,	// (0x000500b5) fep_hwr_candidate_drop_down_list_pane

0x1964,	// (0x0005028d) fep_hwr_candidate_pane_g3_ParamLimits

0x1964,	// (0x0005028d) fep_hwr_candidate_pane_g3

0xe743,	// (0x0005d06c) fep_hwr_candidate_pane_g4_ParamLimits

0xe743,	// (0x0005d06c) fep_hwr_candidate_pane_g4

0x0002,

0xfb1a,	// (0x0005e443) fep_hwr_candidate_pane_g_ParamLimits

0xfb1a,	// (0x0005e443) fep_hwr_candidate_pane_g

0x787f,	// (0x000561a8) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x787f,	// (0x000561a8) fep_vkb_candidate_drop_down_list_pane

0x7c90,	// (0x000565b9) fep_vkb_candidate_pane_g3

0x7c98,	// (0x000565c1) fep_vkb_candidate_pane_g4

0x0002,

0xfb47,	// (0x0005e470) fep_vkb_candidate_pane_g

0x19cf,	// (0x000502f8) cell_hwr_candidate_pane_g1_ParamLimits

0x19dd,	// (0x00050306) cell_hwr_candidate_pane_g3_ParamLimits

0x19dd,	// (0x00050306) cell_hwr_candidate_pane_g3

0x9327,	// (0x00057c50) cell_hwr_candidate_pane_g4_ParamLimits

0x9327,	// (0x00057c50) cell_hwr_candidate_pane_g4

0x0002,

0xfb66,	// (0x0005e48f) cell_hwr_candidate_pane_g_ParamLimits

0xfb66,	// (0x0005e48f) cell_hwr_candidate_pane_g

0x7caf,	// (0x000565d8) cell_vkb_candidate_pane_g3_ParamLimits

0x7caf,	// (0x000565d8) cell_vkb_candidate_pane_g3

0x7cca,	// (0x000565f3) cell_vkb_candidate_pane_g4_ParamLimits

0x7cca,	// (0x000565f3) cell_vkb_candidate_pane_g4

0x7dae,	// (0x000566d7) cell_app_pane_cp2_g1_ParamLimits

0x7dae,	// (0x000566d7) cell_app_pane_cp2_g1

0x7dcc,	// (0x000566f5) cell_app_pane_cp2_g2_ParamLimits

0x7dcc,	// (0x000566f5) cell_app_pane_cp2_g2

0x0001,

0xfbb0,	// (0x0005e4d9) cell_app_pane_cp2_g_ParamLimits

0xfbb0,	// (0x0005e4d9) cell_app_pane_cp2_g

0x7dd8,	// (0x00056701) cell_app_pane_cp2_t1_ParamLimits

0x7dd8,	// (0x00056701) cell_app_pane_cp2_t1

0x369c,	// (0x00051fc5) grid_highlight_pane_cp1_ParamLimits

0x369c,	// (0x00051fc5) grid_highlight_pane_cp1

0x1a1c,	// (0x00050345) cell_hwr_candidate_pane_cp1_ParamLimits

0x1a1c,	// (0x00050345) cell_hwr_candidate_pane_cp1

0x19cf,	// (0x000502f8) fep_hwr_candidate_drop_down_list_pane_g1

0x1a3b,	// (0x00050364) fep_hwr_candidate_drop_down_list_pane_g2

0x1a48,	// (0x00050371) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb5,	// (0x0005e4de) fep_hwr_candidate_drop_down_list_pane_g

0x1a55,	// (0x0005037e) fep_hwr_candidate_drop_down_list_scroll_pane

0x1a5e,	// (0x00050387) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1a5e,	// (0x00050387) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1a6b,	// (0x00050394) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1a6b,	// (0x00050394) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1a78,	// (0x000503a1) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1a78,	// (0x000503a1) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1a85,	// (0x000503ae) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1a85,	// (0x000503ae) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1aa0,	// (0x000503c9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1aa0,	// (0x000503c9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1abb,	// (0x000503e4) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1abb,	// (0x000503e4) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1ad6,	// (0x000503ff) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1ad6,	// (0x000503ff) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1af1,	// (0x0005041a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1af1,	// (0x0005041a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbc,	// (0x0005e4e5) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbc,	// (0x0005e4e5) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7dea,	// (0x00056713) cell_vkb_candidate_pane_cp1_ParamLimits

0x7dea,	// (0x00056713) cell_vkb_candidate_pane_cp1

0x7998,	// (0x000562c1) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7998,	// (0x000562c1) fep_vkb_candidate_drop_down_list_pane_g1

0x7e0a,	// (0x00056733) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7e0a,	// (0x00056733) fep_vkb_candidate_drop_down_list_pane_g2

0x7e17,	// (0x00056740) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7e17,	// (0x00056740) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcd,	// (0x0005e4f6) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcd,	// (0x0005e4f6) fep_vkb_candidate_drop_down_list_pane_g

0x7e24,	// (0x0005674d) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7e24,	// (0x0005674d) fep_vkb_candidate_drop_down_list_scroll_pane

0x7e31,	// (0x0005675a) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7e31,	// (0x0005675a) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7e3e,	// (0x00056767) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7e3e,	// (0x00056767) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7e4a,	// (0x00056773) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7e4a,	// (0x00056773) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7e56,	// (0x0005677f) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7e56,	// (0x0005677f) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7e77,	// (0x000567a0) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7e77,	// (0x000567a0) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7e98,	// (0x000567c1) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7e98,	// (0x000567c1) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7eb9,	// (0x000567e2) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7eb9,	// (0x000567e2) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7eda,	// (0x00056803) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7eda,	// (0x00056803) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd4,	// (0x0005e4fd) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd4,	// (0x0005e4fd) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xc522,	// (0x0005ae4b) title_pane_g1_ParamLimits

0xc533,	// (0x0005ae5c) title_pane_g2_ParamLimits

0xf56a,	// (0x0005de93) title_pane_g_ParamLimits

0x3cfe,	// (0x00052627) aid_call2_pane

0x3d06,	// (0x0005262f) aid_call_pane

0x3d0e,	// (0x00052637) popup_clock_analogue_window_g1

0x3d0e,	// (0x00052637) popup_clock_analogue_window_g2

0x0eca,	// (0x0004f7f3) popup_clock_analogue_window_g3

0x0ed3,	// (0x0004f7fc) popup_clock_analogue_window_g4

0x2d46,	// (0x0005166f) popup_clock_analogue_window_g5

0x0004,

0xf70f,	// (0x0005e038) popup_clock_analogue_window_g

0x0edb,	// (0x0004f804) popup_clock_analogue_window_t1

0x0ee9,	// (0x0004f812) clock_digital_number_pane_ParamLimits

0x0ee9,	// (0x0004f812) clock_digital_number_pane

0x0ef5,	// (0x0004f81e) clock_digital_number_pane_cp02_ParamLimits

0x0ef5,	// (0x0004f81e) clock_digital_number_pane_cp02

0x0f01,	// (0x0004f82a) clock_digital_number_pane_cp03_ParamLimits

0x0f01,	// (0x0004f82a) clock_digital_number_pane_cp03

0x0f0d,	// (0x0004f836) clock_digital_number_pane_cp04_ParamLimits

0x0f0d,	// (0x0004f836) clock_digital_number_pane_cp04

0x0f19,	// (0x0004f842) clock_digital_separator_pane_ParamLimits

0x0f19,	// (0x0004f842) clock_digital_separator_pane

0x0f25,	// (0x0004f84e) popup_clock_digital_window_t1_ParamLimits

0x0f25,	// (0x0004f84e) popup_clock_digital_window_t1

0x2d46,	// (0x0005166f) clock_digital_number_pane_g1

0x2d46,	// (0x0005166f) clock_digital_number_pane_g2

0x0001,

0xf71a,	// (0x0005e043) clock_digital_number_pane_g

0x2d46,	// (0x0005166f) clock_digital_separator_pane_g1

0x2d46,	// (0x0005166f) clock_digital_separator_pane_g2

0x0001,

0xf71a,	// (0x0005e043) clock_digital_separator_pane_g

0xd366,	// (0x0005bc8f) aid_fill_nsta_ParamLimits

0xd495,	// (0x0005bdbe) indicator_nsta_pane_ParamLimits

0x4ecc,	// (0x000537f5) popup_clock_analogue_window

0x4ecc,	// (0x000537f5) popup_clock_digital_window

0x3869,	// (0x00052192) grid_indicator_nsta_pane_ParamLimits

0x70e5,	// (0x00055a0e) clock_nsta_pane_t2

0x0001,

0xfa9a,	// (0x0005e3c3) clock_nsta_pane_t

0x0e8e,	// (0x0004f7b7) aid_size_max_handle

0xbb71,	// (0x0005a49a) aid_size_min_handle

0x42df,	// (0x00052c08) editor_scroll_pane

0x7ef5,	// (0x0005681e) ex_editor_pane

0x3816,	// (0x0005213f) scroll_pane_cp13

0x363b,	// (0x00051f64) scroll_pane_cp14

0x3d38,	// (0x00052661) scroll_pane_cp36

0xca5e,	// (0x0005b387) list_single_graphic_hl_pane_cp2_ParamLimits

0xca5e,	// (0x0005b387) list_single_graphic_hl_pane_cp2

0xccf0,	// (0x0005b619) list_single_graphic_hl_pane_ParamLimits

0xccf0,	// (0x0005b619) list_single_graphic_hl_pane

0x2b56,	// (0x0005147f) aid_size_min_hl_cp1

0x7efd,	// (0x00056826) list_highlight_pane_cp34_ParamLimits

0x7efd,	// (0x00056826) list_highlight_pane_cp34

0x7f0e,	// (0x00056837) list_single_graphic_hl_pane_g1_ParamLimits

0x7f0e,	// (0x00056837) list_single_graphic_hl_pane_g1

0x2b5f,	// (0x00051488) list_single_graphic_hl_pane_g2_ParamLimits

0x2b5f,	// (0x00051488) list_single_graphic_hl_pane_g2

0x2b5f,	// (0x00051488) list_single_graphic_hl_pane_g3_ParamLimits

0x2b5f,	// (0x00051488) list_single_graphic_hl_pane_g3

0x4250,	// (0x00052b79) list_single_graphic_hl_pane_g4_ParamLimits

0x4250,	// (0x00052b79) list_single_graphic_hl_pane_g4

0x2b6b,	// (0x00051494) list_single_graphic_hl_pane_g5_ParamLimits

0x2b6b,	// (0x00051494) list_single_graphic_hl_pane_g5

0x0004,

0xfbe5,	// (0x0005e50e) list_single_graphic_hl_pane_g_ParamLimits

0xfbe5,	// (0x0005e50e) list_single_graphic_hl_pane_g

0x2b7f,	// (0x000514a8) list_single_graphic_hl_pane_t1_ParamLimits

0x2b7f,	// (0x000514a8) list_single_graphic_hl_pane_t1

0x7f1b,	// (0x00056844) aid_size_min_hl_cp2

0x7f24,	// (0x0005684d) list_highlight_pane_cp34_cp2_ParamLimits

0x7f24,	// (0x0005684d) list_highlight_pane_cp34_cp2

0x7f0e,	// (0x00056837) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7f0e,	// (0x00056837) list_single_graphic_hl_pane_g1_cp2

0x7f31,	// (0x0005685a) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7f31,	// (0x0005685a) list_single_graphic_hl_pane_g2_cp2

0x7f3d,	// (0x00056866) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7f3d,	// (0x00056866) list_single_graphic_hl_pane_g3_cp2

0x542a,	// (0x00053d53) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x542a,	// (0x00053d53) list_single_graphic_hl_pane_g4_cp2

0x7f4b,	// (0x00056874) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7f4b,	// (0x00056874) list_single_graphic_hl_pane_g5_cp2

0xbc23,	// (0x0005a54c) control_pane_g4_ParamLimits

0xbc23,	// (0x0005a54c) control_pane_g4

0x465f,	// (0x00052f88) bg_popup_sub_pane_cp10_ParamLimits

0x7710,	// (0x00056039) list_choice_list_pane_ParamLimits

0x771f,	// (0x00056048) scroll_pane_cp23

0x30b9,	// (0x000519e2) bg_popup_preview_window_pane_cp02_ParamLimits

0x7d1b,	// (0x00056644) list_preview_fixed_pane_ParamLimits

0x7d31,	// (0x0005665a) list_preview_fixed_pane_cp_ParamLimits

0x7d31,	// (0x0005665a) list_preview_fixed_pane_cp

0x7d3d,	// (0x00056666) popup_preview_fixed_window_g1_ParamLimits

0x7d3d,	// (0x00056666) popup_preview_fixed_window_g1

0x7d49,	// (0x00056672) popup_preview_fixed_window_g2_ParamLimits

0x7d49,	// (0x00056672) popup_preview_fixed_window_g2

0x0002,

0xfb6d,	// (0x0005e496) popup_preview_fixed_window_g_ParamLimits

0xfb6d,	// (0x0005e496) popup_preview_fixed_window_g

0x0e02,	// (0x0004f72b) aid_navi_side_left_pane_ParamLimits

0x0e17,	// (0x0004f740) aid_navi_side_right_pane_ParamLimits

0x0e2f,	// (0x0004f758) navi_icon_pane_stacon_ParamLimits

0x0e43,	// (0x0004f76c) navi_navi_pane_stacon_ParamLimits

0x0e2f,	// (0x0004f758) navi_text_pane_stacon_ParamLimits

0x2d3c,	// (0x00051665) main_text_info_pane

0x7f75,	// (0x0005689e) listscroll_text_info_pane

0x7f7d,	// (0x000568a6) list_text_info_pane_ParamLimits

0x7f7d,	// (0x000568a6) list_text_info_pane

0x7f8c,	// (0x000568b5) scroll_pane_cp24_ParamLimits

0x7f8c,	// (0x000568b5) scroll_pane_cp24

0xe06c,	// (0x0005c995) list_text_info_pane_t1_ParamLimits

0xe06c,	// (0x0005c995) list_text_info_pane_t1

0xcc77,	// (0x0005b5a0) popup_fast_swap2_window_ParamLimits

0xcc77,	// (0x0005b5a0) popup_fast_swap2_window

0x7fdb,	// (0x00056904) aid_size_cell_fast2

0x2d3c,	// (0x00051665) bg_popup_window_pane_cp17

0x55b3,	// (0x00053edc) heading_pane_cp2

0x3305,	// (0x00051c2e) listscroll_fast2_pane

0x7fe5,	// (0x0005690e) grid_fast2_pane

0x7fef,	// (0x00056918) listscroll_fast2_pane_g1

0x7ff7,	// (0x00056920) listscroll_fast2_pane_g2

0x0001,

0xfbf0,	// (0x0005e519) listscroll_fast2_pane_g

0x3816,	// (0x0005213f) scroll_pane_cp26

0x8001,	// (0x0005692a) cell_fast2_pane_ParamLimits

0x8001,	// (0x0005692a) cell_fast2_pane

0x8016,	// (0x0005693f) cell_fast2_pane_g1

0x801f,	// (0x00056948) cell_fast2_pane_g2

0x8028,	// (0x00056951) cell_fast2_pane_g3

0x0002,

0xfbf5,	// (0x0005e51e) cell_fast2_pane_g

0x33f8,	// (0x00051d21) grid_highlight_pane_cp9

0x340d,	// (0x00051d36) main_eswt_pane_ParamLimits

0x340d,	// (0x00051d36) main_eswt_pane

0x7fa1,	// (0x000568ca) list_single_text_info_pane

0x8030,	// (0x00056959) eswt_ctrl_button_pane

0x8030,	// (0x00056959) eswt_ctrl_canvas_pane

0x8038,	// (0x00056961) eswt_ctrl_combo_pane

0x8030,	// (0x00056959) eswt_ctrl_default_pane

0x8030,	// (0x00056959) eswt_ctrl_label_pane

0x8040,	// (0x00056969) eswt_ctrl_wait_pane

0x8048,	// (0x00056971) eswt_shell_pane

0x2d3c,	// (0x00051665) listscroll_eswt_app_pane

0x8068,	// (0x00056991) popup_eswt_tasktip_window_ParamLimits

0x8068,	// (0x00056991) popup_eswt_tasktip_window

0x51e5,	// (0x00053b0e) bg_popup_window_pane_cp18

0x8079,	// (0x000569a2) eswt_control_pane_g1_ParamLimits

0x8079,	// (0x000569a2) eswt_control_pane_g1

0x8086,	// (0x000569af) eswt_control_pane_g2_ParamLimits

0x8086,	// (0x000569af) eswt_control_pane_g2

0x8093,	// (0x000569bc) eswt_control_pane_g3_ParamLimits

0x8093,	// (0x000569bc) eswt_control_pane_g3

0x80a0,	// (0x000569c9) eswt_control_pane_g4_ParamLimits

0x80a0,	// (0x000569c9) eswt_control_pane_g4

0x0003,

0xfbfc,	// (0x0005e525) eswt_control_pane_g_ParamLimits

0xfbfc,	// (0x0005e525) eswt_control_pane_g

0x369c,	// (0x00051fc5) bg_button_pane_ParamLimits

0x369c,	// (0x00051fc5) bg_button_pane

0x340d,	// (0x00051d36) common_borders_pane_copy2_ParamLimits

0x340d,	// (0x00051d36) common_borders_pane_copy2

0x80ad,	// (0x000569d6) control_button_pane_g1_ParamLimits

0x80ad,	// (0x000569d6) control_button_pane_g1

0x80b9,	// (0x000569e2) control_button_pane_g2_ParamLimits

0x80b9,	// (0x000569e2) control_button_pane_g2

0x80c5,	// (0x000569ee) control_button_pane_g3_ParamLimits

0x80c5,	// (0x000569ee) control_button_pane_g3

0x0002,

0xfc05,	// (0x0005e52e) control_button_pane_g_ParamLimits

0xfc05,	// (0x0005e52e) control_button_pane_g

0x80d9,	// (0x00056a02) control_button_pane_t1

0x80e7,	// (0x00056a10) control_button_pane_t2

0x0001,

0xfc0c,	// (0x0005e535) control_button_pane_t

0x50f5,	// (0x00053a1e) bg_button_pane_g1

0x5105,	// (0x00053a2e) bg_button_pane_g2

0x50fd,	// (0x00053a26) bg_button_pane_g3

0x5115,	// (0x00053a3e) bg_button_pane_g4

0x510d,	// (0x00053a36) bg_button_pane_g5

0x511d,	// (0x00053a46) bg_button_pane_g6

0x5125,	// (0x00053a4e) bg_button_pane_g7

0x5135,	// (0x00053a5e) bg_button_pane_g8

0x512d,	// (0x00053a56) bg_button_pane_g9

0x0008,

0xf866,	// (0x0005e18f) bg_button_pane_g

0x76cb,	// (0x00055ff4) common_borders_pane_ParamLimits

0x76cb,	// (0x00055ff4) common_borders_pane

0x8079,	// (0x000569a2) eswt_control_pane_g1_copy1_ParamLimits

0x8079,	// (0x000569a2) eswt_control_pane_g1_copy1

0x8086,	// (0x000569af) eswt_control_pane_g2_copy1_ParamLimits

0x8086,	// (0x000569af) eswt_control_pane_g2_copy1

0x8093,	// (0x000569bc) eswt_control_pane_g3_copy1_ParamLimits

0x8093,	// (0x000569bc) eswt_control_pane_g3_copy1

0x80a0,	// (0x000569c9) eswt_control_pane_g4_copy1_ParamLimits

0x80a0,	// (0x000569c9) eswt_control_pane_g4_copy1

0x7706,	// (0x0005602f) bg_eswt_ctrl_canvas_pane_g1

0x76cb,	// (0x00055ff4) common_borders_pane_cp2_ParamLimits

0x76cb,	// (0x00055ff4) common_borders_pane_cp2

0x76cb,	// (0x00055ff4) common_borders_pane_cp3_ParamLimits

0x76cb,	// (0x00055ff4) common_borders_pane_cp3

0x80f5,	// (0x00056a1e) separator_horizontal_pane

0x80fd,	// (0x00056a26) separator_vertical_pane

0x8079,	// (0x000569a2) eswt_control_pane_g1_copy2_ParamLimits

0x8079,	// (0x000569a2) eswt_control_pane_g1_copy2

0x8086,	// (0x000569af) eswt_control_pane_g2_copy2_ParamLimits

0x8086,	// (0x000569af) eswt_control_pane_g2_copy2

0x8093,	// (0x000569bc) eswt_control_pane_g3_copy2_ParamLimits

0x8093,	// (0x000569bc) eswt_control_pane_g3_copy2

0x80a0,	// (0x000569c9) eswt_control_pane_g4_copy2_ParamLimits

0x80a0,	// (0x000569c9) eswt_control_pane_g4_copy2

0x2d3c,	// (0x00051665) common_borders_pane_cp4

0x8106,	// (0x00056a2f) separator_horizontal_pane_g1

0x810f,	// (0x00056a38) separator_horizontal_pane_g2

0x8118,	// (0x00056a41) separator_horizontal_pane_g3

0x0002,

0xfc11,	// (0x0005e53a) separator_horizontal_pane_g

0x8079,	// (0x000569a2) eswt_control_pane_g1_copy3_ParamLimits

0x8079,	// (0x000569a2) eswt_control_pane_g1_copy3

0x8086,	// (0x000569af) eswt_control_pane_g2_copy3_ParamLimits

0x8086,	// (0x000569af) eswt_control_pane_g2_copy3

0x8093,	// (0x000569bc) eswt_control_pane_g3_copy3_ParamLimits

0x8093,	// (0x000569bc) eswt_control_pane_g3_copy3

0x80a0,	// (0x000569c9) eswt_control_pane_g4_copy3_ParamLimits

0x80a0,	// (0x000569c9) eswt_control_pane_g4_copy3

0x2d3c,	// (0x00051665) common_borders_pane_cp5

0x8121,	// (0x00056a4a) separator_vertical_pane_g1

0x812a,	// (0x00056a53) separator_vertical_pane_g2

0x8133,	// (0x00056a5c) separator_vertical_pane_g3

0x0002,

0xfc18,	// (0x0005e541) separator_vertical_pane_g

0x8079,	// (0x000569a2) eswt_control_pane_g1_copy4_ParamLimits

0x8079,	// (0x000569a2) eswt_control_pane_g1_copy4

0x8086,	// (0x000569af) eswt_control_pane_g2_copy4_ParamLimits

0x8086,	// (0x000569af) eswt_control_pane_g2_copy4

0x8093,	// (0x000569bc) eswt_control_pane_g3_copy4_ParamLimits

0x8093,	// (0x000569bc) eswt_control_pane_g3_copy4

0x80a0,	// (0x000569c9) eswt_control_pane_g4_copy4_ParamLimits

0x80a0,	// (0x000569c9) eswt_control_pane_g4_copy4

0xe087,	// (0x0005c9b0) eswt_ctrl_combo_button_pane

0xe08f,	// (0x0005c9b8) eswt_ctrl_input_pane

0xe097,	// (0x0005c9c0) popup_choice_list_window_cp70

0xe09f,	// (0x0005c9c8) eswt_ctrl_input_pane_t1

0x2d3c,	// (0x00051665) input_focus_pane_cp70

0x76cb,	// (0x00055ff4) bg_button_pane_cp70_ParamLimits

0x76cb,	// (0x00055ff4) bg_button_pane_cp70

0xe0ad,	// (0x0005c9d6) eswt_ctrl_combo_button_pane_g1

0x816a,	// (0x00056a93) wait_bar_pane_cp70

0x51e5,	// (0x00053b0e) bg_popup_window_pane_cp70_ParamLimits

0x51e5,	// (0x00053b0e) bg_popup_window_pane_cp70

0x8172,	// (0x00056a9b) popup_eswt_tasktip_window_t1

0x8188,	// (0x00056ab1) wait_bar_pane_cp71_ParamLimits

0x8188,	// (0x00056ab1) wait_bar_pane_cp71

0x8194,	// (0x00056abd) grid_eswt_app_pane

0x3b34,	// (0x0005245d) scroll_pane_cp70

0xe0b5,	// (0x0005c9de) cell_eswt_app_pane_ParamLimits

0xe0b5,	// (0x0005c9de) cell_eswt_app_pane

0xe0df,	// (0x0005ca08) cell_eswt_app_pane_g1_ParamLimits

0xe0df,	// (0x0005ca08) cell_eswt_app_pane_g1

0xe10e,	// (0x0005ca37) cell_eswt_app_pane_g2_ParamLimits

0xe10e,	// (0x0005ca37) cell_eswt_app_pane_g2

0x0001,

0xfc1f,	// (0x0005e548) cell_eswt_app_pane_g_ParamLimits

0xfc1f,	// (0x0005e548) cell_eswt_app_pane_g

0xe137,	// (0x0005ca60) cell_eswt_app_pane_t1_ParamLimits

0xe137,	// (0x0005ca60) cell_eswt_app_pane_t1

0x8257,	// (0x00056b80) grid_highlight_pane_cp70_ParamLimits

0x8257,	// (0x00056b80) grid_highlight_pane_cp70

0x3cb1,	// (0x000525da) set_content_pane_g1

0x45ad,	// (0x00052ed6) status_small_volume_pane

0x1b0c,	// (0x00050435) status_small_volume_pane_g1

0x1b14,	// (0x0005043d) volume_small2_pane

0x1b1d,	// (0x00050446) volume_small2_pane_g1

0x1b26,	// (0x0005044f) volume_small2_pane_g2

0x1b2f,	// (0x00050458) volume_small2_pane_g3

0x1b38,	// (0x00050461) volume_small2_pane_g4

0x1b41,	// (0x0005046a) volume_small2_pane_g5

0x1b4a,	// (0x00050473) volume_small2_pane_g6

0x1b53,	// (0x0005047c) volume_small2_pane_g7

0x1b5c,	// (0x00050485) volume_small2_pane_g8

0x1b65,	// (0x0005048e) volume_small2_pane_g9

0x1b6e,	// (0x00050497) volume_small2_pane_g10

0x0009,

0xfc24,	// (0x0005e54d) volume_small2_pane_g

0x7ae0,	// (0x00056409) fep_vkb_top_text_pane_g1_ParamLimits

0xe014,	// (0x0005c93d) fep_vkb_top_text_pane_t1_ParamLimits

0x7d55,	// (0x0005667e) popup_preview_fixed_window_g3_ParamLimits

0x7d55,	// (0x0005667e) popup_preview_fixed_window_g3

0xd2f9,	// (0x0005bc22) popup_toolbar_trans_pane

0xd9cd,	// (0x0005c2f6) aid_height_set_list_ParamLimits

0x6544,	// (0x00054e6d) aid_size_parent_ParamLimits

0x465f,	// (0x00052f88) list_highlight_pane_cp2_ParamLimits

0x3cb1,	// (0x000525da) set_content_pane_g1_ParamLimits

0xdb56,	// (0x0005c47f) list_single_image_pane_ParamLimits

0xdb56,	// (0x0005c47f) list_single_image_pane

0x8263,	// (0x00056b8c) aid_size_cell_image_ParamLimits

0x8263,	// (0x00056b8c) aid_size_cell_image

0xe169,	// (0x0005ca92) grid_single_image_pane_ParamLimits

0xe169,	// (0x0005ca92) grid_single_image_pane

0x4454,	// (0x00052d7d) list_single_image_pane_g1_ParamLimits

0x4454,	// (0x00052d7d) list_single_image_pane_g1

0x7d82,	// (0x000566ab) list_single_image_pane_g2_ParamLimits

0x7d82,	// (0x000566ab) list_single_image_pane_g2

0x0001,

0xfc39,	// (0x0005e562) list_single_image_pane_g_ParamLimits

0xfc39,	// (0x0005e562) list_single_image_pane_g

0x4460,	// (0x00052d89) list_single_image_pane_t1_ParamLimits

0x4460,	// (0x00052d89) list_single_image_pane_t1

0xe177,	// (0x0005caa0) cell_image_list_pane_ParamLimits

0xe177,	// (0x0005caa0) cell_image_list_pane

0x8291,	// (0x00056bba) cell_image_list_pane_g1

0x829a,	// (0x00056bc3) cell_image_list_pane_g2

0x0001,

0xfc3e,	// (0x0005e567) cell_image_list_pane_g

0x82a3,	// (0x00056bcc) aid_size_cell_tb_trans_pane

0x369c,	// (0x00051fc5) bg_tb_trans_pane

0x82b5,	// (0x00056bde) grid_tb_trans_pane

0x50f5,	// (0x00053a1e) bg_tb_trans_pane_g1

0x5105,	// (0x00053a2e) bg_tb_trans_pane_g2

0x50fd,	// (0x00053a26) bg_tb_trans_pane_g3

0x5115,	// (0x00053a3e) bg_tb_trans_pane_g4

0x510d,	// (0x00053a36) bg_tb_trans_pane_g5

0x5135,	// (0x00053a5e) bg_tb_trans_pane_g6

0x512d,	// (0x00053a56) bg_tb_trans_pane_g7

0x511d,	// (0x00053a46) bg_tb_trans_pane_g8

0x5125,	// (0x00053a4e) bg_tb_trans_pane_g9

0x0008,

0xfc43,	// (0x0005e56c) bg_tb_trans_pane_g

0x82c9,	// (0x00056bf2) cell_toolbar_trans_pane_ParamLimits

0x82c9,	// (0x00056bf2) cell_toolbar_trans_pane

0x7706,	// (0x0005602f) cell_toolbar_trans_pane_g1

0xddc8,	// (0x0005c6f1) list_form2_midp_pane_t1

0xddd6,	// (0x0005c6ff) list_form2_midp_pane_t2

0x0001,

0xfae0,	// (0x0005e409) list_form2_midp_pane_t

0x72eb,	// (0x00055c14) scroll_pane_cp51_ParamLimits

0x74a7,	// (0x00055dd0) form2_midp_wait_pane_g1

0x74b0,	// (0x00055dd9) form2_midp_wait_pane_g2

0x74b9,	// (0x00055de2) form2_midp_wait_pane_g3

0x0002,

0xfaf5,	// (0x0005e41e) form2_midp_wait_pane_g

0x2e30,	// (0x00051759) list_highlight_pane_cp21_ParamLimits

0x7510,	// (0x00055e39) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x751f,	// (0x00055e48) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x66fc,	// (0x00055025) list_single_2graphic_im_pane_ParamLimits

0x66fc,	// (0x00055025) list_single_2graphic_im_pane

0xe18d,	// (0x0005cab6) list_single_2graphic_im_pane_g1_ParamLimits

0xe18d,	// (0x0005cab6) list_single_2graphic_im_pane_g1

0xe19e,	// (0x0005cac7) list_single_2graphic_im_pane_g2_ParamLimits

0xe19e,	// (0x0005cac7) list_single_2graphic_im_pane_g2

0xe1aa,	// (0x0005cad3) list_single_2graphic_im_pane_g3_ParamLimits

0xe1aa,	// (0x0005cad3) list_single_2graphic_im_pane_g3

0x0003,

0xfc56,	// (0x0005e57f) list_single_2graphic_im_pane_g_ParamLimits

0xfc56,	// (0x0005e57f) list_single_2graphic_im_pane_g

0xe1be,	// (0x0005cae7) list_single_2graphic_im_pane_t1_ParamLimits

0xe1be,	// (0x0005cae7) list_single_2graphic_im_pane_t1

0x7d61,	// (0x0005668a) list_single_graphic_2heading_pane_fp_ParamLimits

0x7d61,	// (0x0005668a) list_single_graphic_2heading_pane_fp

0x29c8,	// (0x000512f1) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x29c8,	// (0x000512f1) list_single_graphic_2heading_pane_fp_g1

0x7d76,	// (0x0005669f) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7d76,	// (0x0005669f) list_single_graphic_2heading_pane_fp_g2

0x4454,	// (0x00052d7d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4454,	// (0x00052d7d) list_single_graphic_2heading_pane_fp_g3

0x7d82,	// (0x000566ab) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7d82,	// (0x000566ab) list_single_graphic_2heading_pane_fp_g4

0x7d96,	// (0x000566bf) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7d96,	// (0x000566bf) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7d,	// (0x0005e4a6) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7d,	// (0x0005e4a6) list_single_graphic_2heading_pane_fp_g

0x2b95,	// (0x000514be) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x2b95,	// (0x000514be) list_single_graphic_2heading_pane_fp_t1

0x2a00,	// (0x00051329) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x2a00,	// (0x00051329) list_single_graphic_2heading_pane_fp_t2

0x2bab,	// (0x000514d4) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x2bab,	// (0x000514d4) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5f,	// (0x0005e588) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5f,	// (0x0005e588) list_single_graphic_2heading_pane_fp_t

0x77a6,	// (0x000560cf) fep_hwr_write_pane_g5_ParamLimits

0x77a6,	// (0x000560cf) fep_hwr_write_pane_g5

0x77b2,	// (0x000560db) fep_hwr_write_pane_g6_ParamLimits

0x77b2,	// (0x000560db) fep_hwr_write_pane_g6

0x8048,	// (0x00056971) eswt_shell_pane_ParamLimits

0x51e5,	// (0x00053b0e) bg_popup_window_pane_cp18_ParamLimits

0x648c,	// (0x00054db5) heading_pane_cp70

0x8172,	// (0x00056a9b) popup_eswt_tasktip_window_t1_ParamLimits

0xd3ba,	// (0x0005bce3) aid_touch_tab_arrow_left

0xd3d0,	// (0x0005bcf9) aid_touch_tab_arrow_right

0xc54b,	// (0x0005ae74) title_pane_g3_ParamLimits

0xc54b,	// (0x0005ae74) title_pane_g3

0x365b,	// (0x00051f84) set_value_pane_g1

0xd2f9,	// (0x0005bc22) popup_toolbar_trans_pane_ParamLimits

0x82a3,	// (0x00056bcc) aid_size_cell_tb_trans_pane_ParamLimits

0x369c,	// (0x00051fc5) bg_tb_trans_pane_ParamLimits

0x82b5,	// (0x00056bde) grid_tb_trans_pane_ParamLimits

0x30b9,	// (0x000519e2) cont_note_pane_ParamLimits

0x30b9,	// (0x000519e2) cont_note_pane

0x340d,	// (0x00051d36) cont_snote2_single_text_pane_ParamLimits

0x340d,	// (0x00051d36) cont_snote2_single_text_pane

0x340d,	// (0x00051d36) cont_snote2_single_graphic_pane_ParamLimits

0x340d,	// (0x00051d36) cont_snote2_single_graphic_pane

0x57ce,	// (0x000540f7) cont_note_wait_pane_ParamLimits

0x57ce,	// (0x000540f7) cont_note_wait_pane

0x57ce,	// (0x000540f7) cont_note_image_pane_ParamLimits

0x57ce,	// (0x000540f7) cont_note_image_pane

0x835d,	// (0x00056c86) popup_note2_window_g1_ParamLimits

0x835d,	// (0x00056c86) popup_note2_window_g1

0x839c,	// (0x00056cc5) popup_note2_window_t1_ParamLimits

0x839c,	// (0x00056cc5) popup_note2_window_t1

0x83e1,	// (0x00056d0a) popup_note2_window_t2_ParamLimits

0x83e1,	// (0x00056d0a) popup_note2_window_t2

0x8426,	// (0x00056d4f) popup_note2_window_t3_ParamLimits

0x8426,	// (0x00056d4f) popup_note2_window_t3

0x846b,	// (0x00056d94) popup_note2_window_t4_ParamLimits

0x846b,	// (0x00056d94) popup_note2_window_t4

0x313d,	// (0x00051a66) popup_note2_window_t5_ParamLimits

0x313d,	// (0x00051a66) popup_note2_window_t5

0x0004,

0xfc6b,	// (0x0005e594) popup_note2_window_t_ParamLimits

0xfc6b,	// (0x0005e594) popup_note2_window_t

0x849a,	// (0x00056dc3) popup_note2_image_window_g1_ParamLimits

0x849a,	// (0x00056dc3) popup_note2_image_window_g1

0x84a6,	// (0x00056dcf) popup_note2_image_window_g2_ParamLimits

0x84a6,	// (0x00056dcf) popup_note2_image_window_g2

0x0001,

0xfc76,	// (0x0005e59f) popup_note2_image_window_g_ParamLimits

0xfc76,	// (0x0005e59f) popup_note2_image_window_g

0x84b8,	// (0x00056de1) popup_note2_image_window_t1_ParamLimits

0x84b8,	// (0x00056de1) popup_note2_image_window_t1

0x84d0,	// (0x00056df9) popup_note2_image_window_t2_ParamLimits

0x84d0,	// (0x00056df9) popup_note2_image_window_t2

0x84e8,	// (0x00056e11) popup_note2_image_window_t3_ParamLimits

0x84e8,	// (0x00056e11) popup_note2_image_window_t3

0x0002,

0xfc7b,	// (0x0005e5a4) popup_note2_image_window_t_ParamLimits

0xfc7b,	// (0x0005e5a4) popup_note2_image_window_t

0x57dc,	// (0x00054105) popup_note2_wait_window_g1_ParamLimits

0x57dc,	// (0x00054105) popup_note2_wait_window_g1

0x8504,	// (0x00056e2d) popup_note2_wait_window_g2_ParamLimits

0x8504,	// (0x00056e2d) popup_note2_wait_window_g2

0x57f4,	// (0x0005411d) popup_note2_wait_window_g3_ParamLimits

0x57f4,	// (0x0005411d) popup_note2_wait_window_g3

0x0002,

0xfc82,	// (0x0005e5ab) popup_note2_wait_window_g_ParamLimits

0xfc82,	// (0x0005e5ab) popup_note2_wait_window_g

0x8510,	// (0x00056e39) popup_note2_wait_window_t1_ParamLimits

0x8510,	// (0x00056e39) popup_note2_wait_window_t1

0x852e,	// (0x00056e57) popup_note2_wait_window_t2_ParamLimits

0x852e,	// (0x00056e57) popup_note2_wait_window_t2

0x854c,	// (0x00056e75) popup_note2_wait_window_t3_ParamLimits

0x854c,	// (0x00056e75) popup_note2_wait_window_t3

0x855e,	// (0x00056e87) popup_note2_wait_window_t4_ParamLimits

0x855e,	// (0x00056e87) popup_note2_wait_window_t4

0x0003,

0xfc89,	// (0x0005e5b2) popup_note2_wait_window_t_ParamLimits

0xfc89,	// (0x0005e5b2) popup_note2_wait_window_t

0x8570,	// (0x00056e99) wait_bar2_pane_ParamLimits

0x8570,	// (0x00056e99) wait_bar2_pane

0x8588,	// (0x00056eb1) popup_snote2_single_text_window_g1_ParamLimits

0x8588,	// (0x00056eb1) popup_snote2_single_text_window_g1

0x85b0,	// (0x00056ed9) popup_snote2_single_text_window_t1_ParamLimits

0x85b0,	// (0x00056ed9) popup_snote2_single_text_window_t1

0x85fc,	// (0x00056f25) popup_snote2_single_text_window_t2_ParamLimits

0x85fc,	// (0x00056f25) popup_snote2_single_text_window_t2

0x8648,	// (0x00056f71) popup_snote2_single_text_window_t3_ParamLimits

0x8648,	// (0x00056f71) popup_snote2_single_text_window_t3

0x8689,	// (0x00056fb2) popup_snote2_single_text_window_t4_ParamLimits

0x8689,	// (0x00056fb2) popup_snote2_single_text_window_t4

0x86bf,	// (0x00056fe8) popup_snote2_single_text_window_t5_ParamLimits

0x86bf,	// (0x00056fe8) popup_snote2_single_text_window_t5

0x0004,

0xfc92,	// (0x0005e5bb) popup_snote2_single_text_window_t_ParamLimits

0xfc92,	// (0x0005e5bb) popup_snote2_single_text_window_t

0x86ea,	// (0x00057013) popup_snote2_single_graphic_window_g1_ParamLimits

0x86ea,	// (0x00057013) popup_snote2_single_graphic_window_g1

0x8712,	// (0x0005703b) popup_snote2_single_graphic_window_g2_ParamLimits

0x8712,	// (0x0005703b) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9d,	// (0x0005e5c6) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9d,	// (0x0005e5c6) popup_snote2_single_graphic_window_g

0x873a,	// (0x00057063) popup_snote2_single_graphic_window_t1_ParamLimits

0x873a,	// (0x00057063) popup_snote2_single_graphic_window_t1

0x8786,	// (0x000570af) popup_snote2_single_graphic_window_t2_ParamLimits

0x8786,	// (0x000570af) popup_snote2_single_graphic_window_t2

0x8648,	// (0x00056f71) popup_snote2_single_graphic_window_t3_ParamLimits

0x8648,	// (0x00056f71) popup_snote2_single_graphic_window_t3

0x8689,	// (0x00056fb2) popup_snote2_single_graphic_window_t4_ParamLimits

0x8689,	// (0x00056fb2) popup_snote2_single_graphic_window_t4

0x86bf,	// (0x00056fe8) popup_snote2_single_graphic_window_t5_ParamLimits

0x86bf,	// (0x00056fe8) popup_snote2_single_graphic_window_t5

0x0004,

0xfca2,	// (0x0005e5cb) popup_snote2_single_graphic_window_t_ParamLimits

0xfca2,	// (0x0005e5cb) popup_snote2_single_graphic_window_t

0x71a8,	// (0x00055ad1) clock_nsta_pane_cp2_t1

0x71a8,	// (0x00055ad1) clock_nsta_pane_cp2_t2

0x0001,

0xfab6,	// (0x0005e3df) clock_nsta_pane_cp2_t

0x0b7e,	// (0x0004f4a7) form_field_data_wide_pane_g1_ParamLimits

0x36b6,	// (0x00051fdf) form_field_data_wide_pane_g2_ParamLimits

0x36b6,	// (0x00051fdf) form_field_data_wide_pane_g2

0x36c2,	// (0x00051feb) form_field_data_wide_pane_g3_ParamLimits

0x36c2,	// (0x00051feb) form_field_data_wide_pane_g3

0x0002,

0xf692,	// (0x0005dfbb) form_field_data_wide_pane_g_ParamLimits

0xf692,	// (0x0005dfbb) form_field_data_wide_pane_g

0xdce2,	// (0x0005c60b) grid_touch_3_pane_ParamLimits

0xdce2,	// (0x0005c60b) grid_touch_3_pane

0xe1ef,	// (0x0005cb18) cell_touch_3_pane_ParamLimits

0xe1ef,	// (0x0005cb18) cell_touch_3_pane

0x7706,	// (0x0005602f) cell_touch_3_pane_g1

0x7706,	// (0x0005602f) cell_touch_3_pane_g2

0x0001,

0xfb3b,	// (0x0005e464) cell_touch_3_pane_g

0x316f,	// (0x00051a98) cont_query_data_pane

0x3177,	// (0x00051aa0) cont_query_data_pane_cp1

0x8800,	// (0x00057129) button_value_adjust_pane_cp7

0x8808,	// (0x00057131) query_popup_pane_cp3

0x3dd3,	// (0x000526fc) bg_popup_sub_pane_cp22_ParamLimits

0x0f44,	// (0x0004f86d) navi_navi_volume_pane_cp2

0x0f5f,	// (0x0004f888) popup_side_volume_key_window_g2

0x0f6e,	// (0x0004f897) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x0005e04d) popup_side_volume_key_window_g

0x0f8b,	// (0x0004f8b4) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x0005e054) popup_side_volume_key_window_t

0x408a,	// (0x000529b3) popup_side_volume_key_window_ParamLimits

0xb779,	// (0x0005a0a2) list_double_graphic_pane_g4_ParamLimits

0xb779,	// (0x0005a0a2) list_double_graphic_pane_g4

0xdb43,	// (0x0005c46c) list_single_2heading_msg_pane_ParamLimits

0xdb43,	// (0x0005c46c) list_single_2heading_msg_pane

0xcd01,	// (0x0005b62a) list_single_2heading_msg_pane_g1_ParamLimits

0xcd01,	// (0x0005b62a) list_single_2heading_msg_pane_g1

0xcd0d,	// (0x0005b636) list_single_2heading_msg_pane_g2_ParamLimits

0xcd0d,	// (0x0005b636) list_single_2heading_msg_pane_g2

0xcd20,	// (0x0005b649) list_single_2heading_msg_pane_g3_ParamLimits

0xcd20,	// (0x0005b649) list_single_2heading_msg_pane_g3

0xcd2c,	// (0x0005b655) list_single_2heading_msg_pane_g4_ParamLimits

0xcd2c,	// (0x0005b655) list_single_2heading_msg_pane_g4

0x0003,

0xfcad,	// (0x0005e5d6) list_single_2heading_msg_pane_g_ParamLimits

0xfcad,	// (0x0005e5d6) list_single_2heading_msg_pane_g

0xbfe2,	// (0x0005a90b) list_single_2heading_msg_pane_t1_ParamLimits

0xbfe2,	// (0x0005a90b) list_single_2heading_msg_pane_t1

0xc00a,	// (0x0005a933) list_single_2heading_msg_pane_t2_ParamLimits

0xc00a,	// (0x0005a933) list_single_2heading_msg_pane_t2

0xc075,	// (0x0005a99e) list_single_2heading_msg_pane_t3_ParamLimits

0xc075,	// (0x0005a99e) list_single_2heading_msg_pane_t3

0x2c90,	// (0x000515b9) list_single_2heading_msg_pane_t4_ParamLimits

0x2c90,	// (0x000515b9) list_single_2heading_msg_pane_t4

0x0003,

0xfcb6,	// (0x0005e5df) list_single_2heading_msg_pane_t_ParamLimits

0xfcb6,	// (0x0005e5df) list_single_2heading_msg_pane_t

0x2d84,	// (0x000516ad) title_pane_g4_ParamLimits

0x2d84,	// (0x000516ad) title_pane_g4

0x0d52,	// (0x0004f67b) title_pane_stacon_g3_ParamLimits

0x0d52,	// (0x0004f67b) title_pane_stacon_g3

0x8320,	// (0x00056c49) list_single_2graphic_im_pane_g4_ParamLimits

0x8320,	// (0x00056c49) list_single_2graphic_im_pane_g4

0x6233,	// (0x00054b5c) popup_side_volume_key_window_cp

0x6a14,	// (0x0005533d) main_idle_act2_pane_t1

0x1310,	// (0x0004fc39) toolbar_button_pane_g10

0xc8b8,	// (0x0005b1e1) popup_toolbar_window_cp1

0x7199,	// (0x00055ac2) clock_nsta_pane_cp_t1

0x7199,	// (0x00055ac2) clock_nsta_pane_cp_t2

0x0001,

0xfab1,	// (0x0005e3da) clock_nsta_pane_cp_t

0x0f44,	// (0x0004f86d) navi_navi_volume_pane_cp2_ParamLimits

0x0f53,	// (0x0004f87c) popup_side_volume_key_window_g1_ParamLimits

0x0f5f,	// (0x0004f888) popup_side_volume_key_window_g2_ParamLimits

0x0f6e,	// (0x0004f897) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x0005e04d) popup_side_volume_key_window_g_ParamLimits

0x1778,	// (0x000500a1) fep_hwr_aid_pane

0x181f,	// (0x00050148) bg_fep_hwr_top_pane_g4_ParamLimits

0x7776,	// (0x0005609f) fep_hwr_top_pane_g1_ParamLimits

0x7788,	// (0x000560b1) fep_hwr_top_pane_g2_ParamLimits

0x183f,	// (0x00050168) fep_hwr_top_pane_g3_ParamLimits

0xfb06,	// (0x0005e42f) fep_hwr_top_pane_g_ParamLimits

0x1854,	// (0x0005017d) fep_hwr_top_text_pane_ParamLimits

0x5ff6,	// (0x0005491f) aid_touch_tab_arrow_arrow_2

0x5fff,	// (0x00054928) aid_touch_tab_arrow_left_2

0x178c,	// (0x000500b5) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x17c3,	// (0x000500ec) fep_hwr_prediction_pane

0x78e8,	// (0x00056211) fep_vkb_prediction_pane

0xdff4,	// (0x0005c91d) fep_vkb_side_pane_g3_ParamLimits

0xdff4,	// (0x0005c91d) fep_vkb_side_pane_g3

0x19cf,	// (0x000502f8) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1a3b,	// (0x00050364) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1a48,	// (0x00050371) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb5,	// (0x0005e4de) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1b77,	// (0x000504a0) fep_hwr_prediction_pane_g1

0x1b81,	// (0x000504aa) fep_hwr_prediction_pane_g2

0x1b89,	// (0x000504b2) fep_hwr_prediction_pane_g3

0x1b91,	// (0x000504ba) fep_hwr_prediction_pane_g4

0x0003,

0xfcbf,	// (0x0005e5e8) fep_hwr_prediction_pane_g

0x882d,	// (0x00057156) fep_vkb_prediction_pane_g1

0x8837,	// (0x00057160) fep_vkb_prediction_pane_g2

0x883f,	// (0x00057168) fep_vkb_prediction_pane_g3

0x8847,	// (0x00057170) fep_vkb_prediction_pane_g4

0x0003,

0xfcc8,	// (0x0005e5f1) fep_vkb_prediction_pane_g

0x15f8,	// (0x0004ff21) slider_set_pane_g3

0x160c,	// (0x0004ff35) slider_set_pane_g4

0x1624,	// (0x0004ff4d) slider_set_pane_g5

0x15f8,	// (0x0004ff21) slider_set_pane_g6

0x163a,	// (0x0004ff63) slider_set_pane_g7

0x66a9,	// (0x00054fd2) slider_form_pane_g3

0x66b2,	// (0x00054fdb) slider_form_pane_g4

0x66ba,	// (0x00054fe3) slider_form_pane_g5

0x66a9,	// (0x00054fd2) slider_form_pane_g6

0xdb18,	// (0x0005c441) slider_form_pane_g7

0x6cd1,	// (0x000555fa) slider_set_pane_vc_g3

0x6cda,	// (0x00055603) slider_set_pane_vc_g4

0x6ce3,	// (0x0005560c) slider_set_pane_vc_g5

0x6cd1,	// (0x000555fa) slider_set_pane_vc_g6

0x6cec,	// (0x00055615) slider_set_pane_vc_g7

0x6cd1,	// (0x000555fa) slider_form_pane_vc_g1

0x6cda,	// (0x00055603) slider_form_pane_vc_g2

0x6ce3,	// (0x0005560c) slider_form_pane_vc_g3

0x6cd1,	// (0x000555fa) slider_form_pane_vc_g4

0x6e9f,	// (0x000557c8) slider_form_pane_vc_g5

0x0004,

0xfa8a,	// (0x0005e3b3) slider_form_pane_vc_g

0x2d3c,	// (0x00051665) main_idle_act3_pane

0x884f,	// (0x00057178) ai3_links_pane

0xe238,	// (0x0005cb61) popup_ai3_data_window_ParamLimits

0xe238,	// (0x0005cb61) popup_ai3_data_window

0x2d3c,	// (0x00051665) grid_ai3_links_pane

0xe252,	// (0x0005cb7b) cell_ai3_links_pane_ParamLimits

0xe252,	// (0x0005cb7b) cell_ai3_links_pane

0x888a,	// (0x000571b3) bg_popup_sub_pane_cp11

0x8897,	// (0x000571c0) cell_ai3_links_pane_g1

0x2d3c,	// (0x00051665) bg_popup_sub_pane_cp12

0x88bc,	// (0x000571e5) heading_ai3_data_pane

0x88c4,	// (0x000571ed) list_ai3_gene_pane

0x88d0,	// (0x000571f9) popup_ai3_data_window_g1

0x88d8,	// (0x00057201) heading_ai3_data_pane_g1

0x88e0,	// (0x00057209) heading_ai3_data_pane_t1

0x88ee,	// (0x00057217) list_double_ai3_gene_pane_ParamLimits

0x88ee,	// (0x00057217) list_double_ai3_gene_pane

0x88fb,	// (0x00057224) list_single_ai3_gene_pane_ParamLimits

0x88fb,	// (0x00057224) list_single_ai3_gene_pane

0x76cb,	// (0x00055ff4) list_highlight_pane_cp7_ParamLimits

0x76cb,	// (0x00055ff4) list_highlight_pane_cp7

0x8908,	// (0x00057231) list_single_a13_gene_pane_t1_ParamLimits

0x8908,	// (0x00057231) list_single_a13_gene_pane_t1

0x891f,	// (0x00057248) list_single_ai3_gene_pane_g1

0x8928,	// (0x00057251) list_single_ai3_gene_pane_g2

0x0001,

0xfcd1,	// (0x0005e5fa) list_single_ai3_gene_pane_g

0x8930,	// (0x00057259) list_double_ai3_gene_pane_g1_ParamLimits

0x8930,	// (0x00057259) list_double_ai3_gene_pane_g1

0x893c,	// (0x00057265) list_double_ai3_gene_pane_t1_ParamLimits

0x893c,	// (0x00057265) list_double_ai3_gene_pane_t1

0x8958,	// (0x00057281) list_double_ai3_gene_pane_t2_ParamLimits

0x8958,	// (0x00057281) list_double_ai3_gene_pane_t2

0x896e,	// (0x00057297) list_double_ai3_gene_pane_t3_ParamLimits

0x896e,	// (0x00057297) list_double_ai3_gene_pane_t3

0x0002,

0xfcd6,	// (0x0005e5ff) list_double_ai3_gene_pane_t_ParamLimits

0xfcd6,	// (0x0005e5ff) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x2bc1,	// (0x000514ea) aid_size_min_col_2

0xe222,	// (0x0005cb4b) aid_size_min_msg_ParamLimits

0xe222,	// (0x0005cb4b) aid_size_min_msg

0xe008,	// (0x0005c931) fep_vkb_top_text_pane_g2_ParamLimits

0xe008,	// (0x0005c931) fep_vkb_top_text_pane_g2

0x0001,

0xfb36,	// (0x0005e45f) fep_vkb_top_text_pane_g_ParamLimits

0xfb36,	// (0x0005e45f) fep_vkb_top_text_pane_g

0x2d3c,	// (0x00051665) main_hc_apps_shell_pane

0x898b,	// (0x000572b4) grid_hc_apps_pane_ParamLimits

0x898b,	// (0x000572b4) grid_hc_apps_pane

0x899a,	// (0x000572c3) list_hc_apps_pane

0x89a2,	// (0x000572cb) scroll_pane_cp37_ParamLimits

0x89a2,	// (0x000572cb) scroll_pane_cp37

0xe26c,	// (0x0005cb95) cell_hc_apps_pane_ParamLimits

0xe26c,	// (0x0005cb95) cell_hc_apps_pane

0xe32a,	// (0x0005cc53) cell_hc_apps_pane_g1_ParamLimits

0xe32a,	// (0x0005cc53) cell_hc_apps_pane_g1

0x8a8d,	// (0x000573b6) cell_hc_apps_pane_g2_ParamLimits

0x8a8d,	// (0x000573b6) cell_hc_apps_pane_g2

0x8aa9,	// (0x000573d2) cell_hc_apps_pane_g3_ParamLimits

0x8aa9,	// (0x000573d2) cell_hc_apps_pane_g3

0x0002,

0xfcdd,	// (0x0005e606) cell_hc_apps_pane_g_ParamLimits

0xfcdd,	// (0x0005e606) cell_hc_apps_pane_g

0xe357,	// (0x0005cc80) cell_hc_apps_pane_t1_ParamLimits

0xe357,	// (0x0005cc80) cell_hc_apps_pane_t1

0x30b9,	// (0x000519e2) grid_highlight_pane_cp10_ParamLimits

0x30b9,	// (0x000519e2) grid_highlight_pane_cp10

0xe395,	// (0x0005ccbe) list_single_hc_apps_pane_ParamLimits

0xe395,	// (0x0005ccbe) list_single_hc_apps_pane

0xe3c2,	// (0x0005cceb) list_single_hc_apps_pane_g1

0xcd44,	// (0x0005b66d) list_single_hc_apps_pane_g2

0x0001,

0xfce4,	// (0x0005e60d) list_single_hc_apps_pane_g

0xcd5d,	// (0x0005b686) list_single_hc_apps_pane_g2_copy1

0x2cea,	// (0x00051613) list_single_hc_apps_pane_t1

0x2e30,	// (0x00051759) bg_set_opt_pane_cp_ParamLimits

0x0555,	// (0x0004ee7e) setting_slider_pane_t1_ParamLimits

0x056e,	// (0x0004ee97) setting_slider_pane_t2_ParamLimits

0x0588,	// (0x0004eeb1) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0005dea3) setting_slider_pane_t_ParamLimits

0x05a0,	// (0x0004eec9) slider_set_pane_ParamLimits

0x11ec,	// (0x0004fb15) control_pane_g5_ParamLimits

0x11ec,	// (0x0004fb15) control_pane_g5

0x64f8,	// (0x00054e21) slider_set_pane_g1_ParamLimits

0x15ec,	// (0x0004ff15) slider_set_pane_g2_ParamLimits

0x15f8,	// (0x0004ff21) slider_set_pane_g3_ParamLimits

0x160c,	// (0x0004ff35) slider_set_pane_g4_ParamLimits

0x1624,	// (0x0004ff4d) slider_set_pane_g5_ParamLimits

0x15f8,	// (0x0004ff21) slider_set_pane_g6_ParamLimits

0x163a,	// (0x0004ff63) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0005e28d) slider_set_pane_g_ParamLimits

0x416b,	// (0x00052a94) navi_icon_text_pane_ParamLimits

0xd386,	// (0x0005bcaf) aid_fill_nsta_2_ParamLimits

0xd3ba,	// (0x0005bce3) aid_touch_tab_arrow_left_ParamLimits

0xd3d0,	// (0x0005bcf9) aid_touch_tab_arrow_right_ParamLimits

0xd46b,	// (0x0005bd94) clock_nsta_pane_ParamLimits

0xd8f4,	// (0x0005c21d) navi_icon_pane_g1_ParamLimits

0xd900,	// (0x0005c229) navi_text_pane_t1_ParamLimits

0xddaa,	// (0x0005c6d3) navi_icon_text_pane_g1_ParamLimits

0xddb6,	// (0x0005c6df) navi_icon_text_pane_t1_ParamLimits

0xe3c2,	// (0x0005cceb) list_single_hc_apps_pane_g1_ParamLimits

0xcd44,	// (0x0005b66d) list_single_hc_apps_pane_g2_ParamLimits

0xfce4,	// (0x0005e60d) list_single_hc_apps_pane_g_ParamLimits

0xcd5d,	// (0x0005b686) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x2cea,	// (0x00051613) list_single_hc_apps_pane_t1_ParamLimits

0xb5f4,	// (0x00059f1d) popup_toolbar2_fixed_window_ParamLimits

0xb5f4,	// (0x00059f1d) popup_toolbar2_fixed_window

0xd2ef,	// (0x0005bc18) popup_toolbar2_float_window

0x2d3c,	// (0x00051665) bg_popup_sub_pane_cp27

0x8b80,	// (0x000574a9) grid_toolbar2_float_pane

0x2d3c,	// (0x00051665) bg_popup_sub_pane_cp26

0x8b80,	// (0x000574a9) grid_toolbar2_fixed_pane

0xe3db,	// (0x0005cd04) cell_toolbar2_fixed_pane_ParamLimits

0xe3db,	// (0x0005cd04) cell_toolbar2_fixed_pane

0xe3f6,	// (0x0005cd1f) cell_toolbar2_fixed_pane_g1

0x8ba1,	// (0x000574ca) toolbar2_fixed_button_pane

0x50f5,	// (0x00053a1e) toolbar2_fixed_button_pane_g1

0x5105,	// (0x00053a2e) toolbar2_fixed_button_pane_g2

0x50fd,	// (0x00053a26) toolbar2_fixed_button_pane_g3

0x5115,	// (0x00053a3e) toolbar2_fixed_button_pane_g4

0x510d,	// (0x00053a36) toolbar2_fixed_button_pane_g5

0x511d,	// (0x00053a46) toolbar2_fixed_button_pane_g6

0x5125,	// (0x00053a4e) toolbar2_fixed_button_pane_g7

0x5135,	// (0x00053a5e) toolbar2_fixed_button_pane_g8

0x512d,	// (0x00053a56) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0005e18f) toolbar2_fixed_button_pane_g

0x8ba9,	// (0x000574d2) cell_toolbar2_float_pane_ParamLimits

0x8ba9,	// (0x000574d2) cell_toolbar2_float_pane

0x8bba,	// (0x000574e3) cell_toolbar2_float_pane_g1

0x8ba1,	// (0x000574ca) toolbar2_fixed_button_pane_cp

0xdee2,	// (0x0005c80b) fep_vkb_accented_list_pane_ParamLimits

0xdee2,	// (0x0005c80b) fep_vkb_accented_list_pane

0x19af,	// (0x000502d8) bg_popup_fep_shadow_pane_g9

0x42df,	// (0x00052c08) bg_popup_fep_shadow_pane_cp3

0x37fd,	// (0x00052126) list_accented_list_pane

0x8bc3,	// (0x000574ec) list_single_accented_list_pane_ParamLimits

0x8bc3,	// (0x000574ec) list_single_accented_list_pane

0x42df,	// (0x00052c08) list_highlight_pane_cp10

0x8bd4,	// (0x000574fd) list_single_accented_list_pane_t1

0xd219,	// (0x0005bb42) popup_slider_window_ParamLimits

0xd219,	// (0x0005bb42) popup_slider_window

0x8810,	// (0x00057139) aid_indentation_list_msg

0xe4ef,	// (0x0005ce18) bg_popup_window_pane_cp19

0x8cf8,	// (0x00057621) popup_slider_window_g1

0x8d14,	// (0x0005763d) popup_slider_window_g2

0x8d30,	// (0x00057659) popup_slider_window_g3

0x0005,

0xfce9,	// (0x0005e612) popup_slider_window_g

0x8d8c,	// (0x000576b5) popup_slider_window_t1

0x8e00,	// (0x00057729) small_volume_slider_vertical_pane

0x7706,	// (0x0005602f) small_volume_slider_vertical_pane_g1

0x7706,	// (0x0005602f) small_volume_slider_vertical_pane_g2

0x8e1c,	// (0x00057745) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfb,	// (0x0005e624) small_volume_slider_vertical_pane_g

0xb562,	// (0x00059e8b) area_side_right_pane_ParamLimits

0xb562,	// (0x00059e8b) area_side_right_pane

0xc0e3,	// (0x0005aa0c) aid_size_side_button_ParamLimits

0xc0e3,	// (0x0005aa0c) aid_size_side_button

0xc0fc,	// (0x0005aa25) grid_sctrl_middle_pane_ParamLimits

0xc0fc,	// (0x0005aa25) grid_sctrl_middle_pane

0x1bcd,	// (0x000504f6) sctrl_sk_bottom_pane

0x1bde,	// (0x00050507) sctrl_sk_top_pane

0x1bf0,	// (0x00050519) aid_touch_sctrl_top

0x1bfd,	// (0x00050526) bg_sctrl_sk_pane_ParamLimits

0x1bfd,	// (0x00050526) bg_sctrl_sk_pane

0x1c0b,	// (0x00050534) sctrl_sk_top_pane_g1

0x1c18,	// (0x00050541) sctrl_sk_top_pane_t1

0x1bf0,	// (0x00050519) aid_touch_sctrl_bottom

0x1bfd,	// (0x00050526) bg_sctrl_sk_pane_cp_ParamLimits

0x1bfd,	// (0x00050526) bg_sctrl_sk_pane_cp

0x1c33,	// (0x0005055c) sctrl_sk_bottom_pane_g1

0x1c18,	// (0x00050541) sctrl_sk_bottom_pane_t1

0xc116,	// (0x0005aa3f) cell_sctrl_middle_pane_ParamLimits

0xc116,	// (0x0005aa3f) cell_sctrl_middle_pane

0xc127,	// (0x0005aa50) aid_touch_sctrl_middle_ParamLimits

0xc127,	// (0x0005aa50) aid_touch_sctrl_middle

0xc134,	// (0x0005aa5d) bg_sctrl_middle_pane_ParamLimits

0xc134,	// (0x0005aa5d) bg_sctrl_middle_pane

0x22a3,	// (0x00050bcc) cell_sctrl_middle_pane_g1_ParamLimits

0x22a3,	// (0x00050bcc) cell_sctrl_middle_pane_g1

0xc142,	// (0x0005aa6b) cell_sctrl_middle_pane_g2_ParamLimits

0xc142,	// (0x0005aa6b) cell_sctrl_middle_pane_g2

0x0001,

0xfd07,	// (0x0005e630) cell_sctrl_middle_pane_g_ParamLimits

0xfd07,	// (0x0005e630) cell_sctrl_middle_pane_g

0x50f5,	// (0x00053a1e) bg_sctrl_middle_pane_g1

0x50fd,	// (0x00053a26) bg_sctrl_middle_pane_g2

0x5105,	// (0x00053a2e) bg_sctrl_middle_pane_g3

0x510d,	// (0x00053a36) bg_sctrl_middle_pane_g4

0x5115,	// (0x00053a3e) bg_sctrl_middle_pane_g5

0x511d,	// (0x00053a46) bg_sctrl_middle_pane_g6

0x5125,	// (0x00053a4e) bg_sctrl_middle_pane_g7

0x512d,	// (0x00053a56) bg_sctrl_middle_pane_g8

0x0007,

0xfd0c,	// (0x0005e635) bg_sctrl_middle_pane_g

0x5135,	// (0x00053a5e) bg_sctrl_middle_pane_g8_copy1

0x50f5,	// (0x00053a1e) bg_sctrl_sk_pane_g1

0x5105,	// (0x00053a2e) bg_sctrl_sk_pane_g2

0x50fd,	// (0x00053a26) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0005e18f) bg_sctrl_sk_pane_g

0x35cb,	// (0x00051ef4) aid_size_touch_scroll_bar

0x5115,	// (0x00053a3e) bg_sctrl_sk_pane_g4

0x510d,	// (0x00053a36) bg_sctrl_sk_pane_g5

0x511d,	// (0x00053a46) bg_sctrl_sk_pane_g6

0x5125,	// (0x00053a4e) bg_sctrl_sk_pane_g7

0x5135,	// (0x00053a5e) bg_sctrl_sk_pane_g8

0x512d,	// (0x00053a56) bg_sctrl_sk_pane_g9

0x46ff,	// (0x00053028) popup_fep_china_hwr2_fs_candidate_window

0xccd4,	// (0x0005b5fd) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xccd4,	// (0x0005b5fd) popup_fep_china_hwr2_fs_control_window

0x19cf,	// (0x000502f8) sctrl_sk_top_pane_g2

0x0001,

0xfd02,	// (0x0005e62b) sctrl_sk_top_pane_g

0xe5a7,	// (0x0005ced0) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe5a7,	// (0x0005ced0) aid_fep_china_hwr2_fs_cell

0xe5bb,	// (0x0005cee4) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe5bb,	// (0x0005cee4) bg_popup_fep_shadow_pane_cp4

0xe5d2,	// (0x0005cefb) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe5d2,	// (0x0005cefb) bg_popup_fep_shadow_pane_cp5

0xe5e4,	// (0x0005cf0d) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe5e4,	// (0x0005cf0d) popup_fep_china_hwr2_fs_control_bar_grid

0xe5f8,	// (0x0005cf21) popup_fep_china_hwr2_fs_control_funtion_grid

0x8e78,	// (0x000577a1) aid_fep_china_hwr2_fs_candi_cell

0x2d3c,	// (0x00051665) bg_popup_fep_shadow_pane_cp6

0x8e82,	// (0x000577ab) popup_fep_china_hwr2_fs_candidate_grid

0xe600,	// (0x0005cf29) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe600,	// (0x0005cf29) cell_fep_china_hwr2_fs_funtion_grid

0x7706,	// (0x0005602f) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8ea4,	// (0x000577cd) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8ea4,	// (0x000577cd) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8eb2,	// (0x000577db) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8eb2,	// (0x000577db) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1d,	// (0x0005e646) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1d,	// (0x0005e646) cell_fep_china_hwr2_fs_funtion_grid_g

0xe618,	// (0x0005cf41) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe618,	// (0x0005cf41) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe62d,	// (0x0005cf56) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe62d,	// (0x0005cf56) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd22,	// (0x0005e64b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd22,	// (0x0005e64b) cell_fep_china_hwr2_fs_funtion_grid_t

0x8ef9,	// (0x00057822) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8f01,	// (0x0005782a) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8f09,	// (0x00057832) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd27,	// (0x0005e650) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8f11,	// (0x0005783a) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8f11,	// (0x0005783a) cell_fep_china_hwr2_fs_candidate_grid

0x8f2a,	// (0x00057853) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8f32,	// (0x0005785b) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7706,	// (0x0005602f) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7706,	// (0x0005602f) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3b,	// (0x0005e464) cell_fep_china_hwr2_fs_candidate_grid_g

0x8f3a,	// (0x00057863) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4cf2,	// (0x0005361b) clock_nsta_pane_cp_24_ParamLimits

0x4cf2,	// (0x0005361b) clock_nsta_pane_cp_24

0x4d70,	// (0x00053699) indicator_nsta_pane_cp_24_ParamLimits

0x4d70,	// (0x00053699) indicator_nsta_pane_cp_24

0x5e5d,	// (0x00054786) heading_pane_g1

0x0001,

0xf8cb,	// (0x0005e1f4) heading_pane_g

0x685d,	// (0x00055186) grid_sct_catagory_button_pane

0x688d,	// (0x000551b6) scroll_pane_cp5_ParamLimits

0x72f7,	// (0x00055c20) button_value_adjust_pane_cp5_ParamLimits

0x72f7,	// (0x00055c20) button_value_adjust_pane_cp5

0x73d6,	// (0x00055cff) form2_midp_time_pane_ParamLimits

0x8f48,	// (0x00057871) cell_sct_catagory_button_pane_ParamLimits

0x8f48,	// (0x00057871) cell_sct_catagory_button_pane

0x76cb,	// (0x00055ff4) bg_button_pane_cp01_ParamLimits

0x76cb,	// (0x00055ff4) bg_button_pane_cp01

0x7706,	// (0x0005602f) cell_sct_catagory_button_pane_g1

0xd292,	// (0x0005bbbb) popup_tb_extension_window

0xe649,	// (0x0005cf72) aid_size_cell_ext_ParamLimits

0xe649,	// (0x0005cf72) aid_size_cell_ext

0x340d,	// (0x00051d36) bg_tb_trans_pane_cp1_ParamLimits

0x340d,	// (0x00051d36) bg_tb_trans_pane_cp1

0xe66f,	// (0x0005cf98) grid_tb_ext_pane_ParamLimits

0xe66f,	// (0x0005cf98) grid_tb_ext_pane

0xe6aa,	// (0x0005cfd3) cell_tb_ext_pane_ParamLimits

0xe6aa,	// (0x0005cfd3) cell_tb_ext_pane

0xe6d2,	// (0x0005cffb) cell_tb_ext_pane_g1_ParamLimits

0xe6d2,	// (0x0005cffb) cell_tb_ext_pane_g1

0x8fdc,	// (0x00057905) cell_tb_ext_pane_t1

0x30b9,	// (0x000519e2) list_highlight_pane_cp11_ParamLimits

0x30b9,	// (0x000519e2) list_highlight_pane_cp11

0x0488,	// (0x0004edb1) popup_uni_indicator_window_ParamLimits

0x0488,	// (0x0004edb1) popup_uni_indicator_window

0x369c,	// (0x00051fc5) bg_popup_sub_pane_cp14

0x8ff7,	// (0x00057920) list_uniindi_pane

0x9003,	// (0x0005792c) uniindi_top_pane

0x30b9,	// (0x000519e2) bg_uniindi_top_pane

0x9022,	// (0x0005794b) uniindi_top_pane_g1

0x9038,	// (0x00057961) uniindi_top_pane_g2

0x0003,

0xfd2e,	// (0x0005e657) uniindi_top_pane_g

0x9062,	// (0x0005798b) uniindi_top_pane_t1

0x908c,	// (0x000579b5) list_single_uniindi_pane_ParamLimits

0x908c,	// (0x000579b5) list_single_uniindi_pane

0x7706,	// (0x0005602f) bg_uniindi_top_pane_g1

0x909f,	// (0x000579c8) list_single_uniindi_pane_g1

0x90b2,	// (0x000579db) list_single_uniindi_pane_t1

0x02fe,	// (0x0004ec27) control_bg_pane

0x90d7,	// (0x00057a00) bg_sctrl_sk_pane_cp1

0x90e0,	// (0x00057a09) bg_sctrl_sk_pane_cp2

0x90e9,	// (0x00057a12) control_bg_pane_g1

0x90f2,	// (0x00057a1b) control_bg_pane_g2

0x0001,

0xfd37,	// (0x0005e660) control_bg_pane_g

0x712b,	// (0x00055a54) cell_indicator_nsta_pane_g1_ParamLimits

0xdd11,	// (0x0005c63a) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9f,	// (0x0005e3c8) cell_indicator_nsta_pane_g_ParamLimits

0x299e,	// (0x000512c7) form2_midp_time_pane_t1_ParamLimits

0x8381,	// (0x00056caa) main_idle_act4_pane_ParamLimits

0x8381,	// (0x00056caa) main_idle_act4_pane

0xd292,	// (0x0005bbbb) popup_tb_extension_window_ParamLimits

0xe691,	// (0x0005cfba) tb_ext_find_pane_ParamLimits

0xe691,	// (0x0005cfba) tb_ext_find_pane

0x90fb,	// (0x00057a24) ai_gene_pane_1_cp1

0x4424,	// (0x00052d4d) ai_gene_pane_2_cp1

0x9103,	// (0x00057a2c) list_single_idle_plugin_calendar_pane

0x910c,	// (0x00057a35) list_single_idle_plugin_notification_pane

0x9115,	// (0x00057a3e) list_single_idle_plugin_player_pane

0xe6ef,	// (0x0005d018) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe6ef,	// (0x0005d018) list_single_idle_plugin_shortcut_pane

0xe717,	// (0x0005d040) main_idle_act4_pane_t1

0xe72d,	// (0x0005d056) main_idle_act4_pane_t2

0x0001,

0xfd3c,	// (0x0005e665) main_idle_act4_pane_t

0xe750,	// (0x0005d079) middle_sk_idle_act4_pane_ParamLimits

0xe750,	// (0x0005d079) middle_sk_idle_act4_pane

0xe76c,	// (0x0005d095) popup_clock_digital_analogue_window_cp2

0xe794,	// (0x0005d0bd) shortcut_wheel_idle_act4_pane_ParamLimits

0xe794,	// (0x0005d0bd) shortcut_wheel_idle_act4_pane

0x7706,	// (0x0005602f) shortcut_wheel_idle_act4_pane_g1

0x7706,	// (0x0005602f) shortcut_wheel_idle_act4_pane_g2

0x7706,	// (0x0005602f) shortcut_wheel_idle_act4_pane_g3

0x7706,	// (0x0005602f) shortcut_wheel_idle_act4_pane_g4

0x7706,	// (0x0005602f) shortcut_wheel_idle_act4_pane_g5

0x91a8,	// (0x00057ad1) shortcut_wheel_idle_act4_pane_g6

0x91b0,	// (0x00057ad9) shortcut_wheel_idle_act4_pane_g7

0x91b8,	// (0x00057ae1) shortcut_wheel_idle_act4_pane_g8

0x91c0,	// (0x00057ae9) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd41,	// (0x0005e66a) shortcut_wheel_idle_act4_pane_g

0xdeba,	// (0x0005c7e3) middle_sk_idle_act4_pane_g1_ParamLimits

0xdeba,	// (0x0005c7e3) middle_sk_idle_act4_pane_g1

0xe811,	// (0x0005d13a) middle_sk_idle_act4_pane_g2_ParamLimits

0xe811,	// (0x0005d13a) middle_sk_idle_act4_pane_g2

0x0001,

0xfd64,	// (0x0005e68d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd64,	// (0x0005e68d) middle_sk_idle_act4_pane_g

0xe829,	// (0x0005d152) middle_sk_idle_act4_pane_t1_ParamLimits

0xe829,	// (0x0005d152) middle_sk_idle_act4_pane_t1

0xe858,	// (0x0005d181) grid_ai_shortcut_pane_ParamLimits

0xe858,	// (0x0005d181) grid_ai_shortcut_pane

0xe875,	// (0x0005d19e) list_highlight_pane_cp16_ParamLimits

0xe875,	// (0x0005d19e) list_highlight_pane_cp16

0xe882,	// (0x0005d1ab) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe882,	// (0x0005d1ab) list_single_idle_plugin_shortcut_pane_g1

0xe88e,	// (0x0005d1b7) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe88e,	// (0x0005d1b7) list_single_idle_plugin_shortcut_pane_g2

0xe8aa,	// (0x0005d1d3) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe8aa,	// (0x0005d1d3) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd69,	// (0x0005e692) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd69,	// (0x0005e692) list_single_idle_plugin_shortcut_pane_g

0xe8bf,	// (0x0005d1e8) cell_ai_shortcut_pane_ParamLimits

0xe8bf,	// (0x0005d1e8) cell_ai_shortcut_pane

0xe8d5,	// (0x0005d1fe) cell_ai_shortcut_pane_g1_ParamLimits

0xe8d5,	// (0x0005d1fe) cell_ai_shortcut_pane_g1

0x90fb,	// (0x00057a24) ai_gene_pane_1_cp2

0x92f0,	// (0x00057c19) ai_gene_pane_2_cp2

0x92f8,	// (0x00057c21) list_highlight_pane_cp15

0x9301,	// (0x00057c2a) list_single_idle_plugin_calendar_pane_g1

0x92f8,	// (0x00057c21) list_highlight_pane_cp17

0x9309,	// (0x00057c32) list_single_idle_plugin_calendar_pane_g1_copy1

0x9311,	// (0x00057c3a) list_single_idle_plugin_player_pane_g1

0x6ab6,	// (0x000553df) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd70,	// (0x0005e699) list_single_idle_plugin_player_pane_g

0x9319,	// (0x00057c42) list_single_idle_plugin_player_pane_t1

0x9348,	// (0x00057c71) list_single_idle_plugin_player_pane_t2

0x9356,	// (0x00057c7f) list_single_idle_plugin_player_pane_t3

0x9364,	// (0x00057c8d) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd75,	// (0x0005e69e) list_single_idle_plugin_player_pane_t

0x9372,	// (0x00057c9b) wait_bar_pane_cp15

0x937a,	// (0x00057ca3) grid_ai_notification_pane

0x6ab6,	// (0x000553df) list_single_idle_plugin_notification_pane_g1

0xe8f7,	// (0x0005d220) cell_ai_notification_pane_ParamLimits

0xe8f7,	// (0x0005d220) cell_ai_notification_pane

0x9390,	// (0x00057cb9) cell_ai_notification_pane_g1

0x9398,	// (0x00057cc1) cell_ai_notification_pane_t1

0xe904,	// (0x0005d22d) tb_ext_find_button_pane

0xe90c,	// (0x0005d235) tb_ext_find_pane_g1

0xe914,	// (0x0005d23d) tb_ext_find_pane_t1

0x3d0e,	// (0x00052637) tb_ext_find_button_pane_g1

0x93c4,	// (0x00057ced) tb_ext_find_button_pane_g2

0x0001,

0xfd7e,	// (0x0005e6a7) tb_ext_find_button_pane_g

0xe717,	// (0x0005d040) main_idle_act4_pane_t1_ParamLimits

0xe72d,	// (0x0005d056) main_idle_act4_pane_t2_ParamLimits

0xfd3c,	// (0x0005e665) main_idle_act4_pane_t_ParamLimits

0xe76c,	// (0x0005d095) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe784,	// (0x0005d0ad) sat_plugin_idle_act4_pane_ParamLimits

0xe784,	// (0x0005d0ad) sat_plugin_idle_act4_pane

0xe922,	// (0x0005d24b) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe922,	// (0x0005d24b) sat_plugin_idle_act4_pane_t1

0xe93a,	// (0x0005d263) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe93a,	// (0x0005d263) sat_plugin_idle_act4_pane_t2

0xe952,	// (0x0005d27b) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe952,	// (0x0005d27b) sat_plugin_idle_act4_pane_t3

0xe96a,	// (0x0005d293) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe96a,	// (0x0005d293) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd83,	// (0x0005e6ac) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd83,	// (0x0005e6ac) sat_plugin_idle_act4_pane_t

0x03c3,	// (0x0004ecec) popup_battery_window_ParamLimits

0x03c3,	// (0x0004ecec) popup_battery_window

0x30b9,	// (0x000519e2) bg_popup_sub_pane_cp25_ParamLimits

0x30b9,	// (0x000519e2) bg_popup_sub_pane_cp25

0x9419,	// (0x00057d42) popup_battery_window_g1_ParamLimits

0x9419,	// (0x00057d42) popup_battery_window_g1

0x9425,	// (0x00057d4e) popup_battery_window_t1_ParamLimits

0x9425,	// (0x00057d4e) popup_battery_window_t1

0x9437,	// (0x00057d60) popup_battery_window_t2_ParamLimits

0x9437,	// (0x00057d60) popup_battery_window_t2

0x0001,

0xfd8c,	// (0x0005e6b5) popup_battery_window_t_ParamLimits

0xfd8c,	// (0x0005e6b5) popup_battery_window_t

0xcb53,	// (0x0005b47c) midp_canvas_pane_ParamLimits

0xcbae,	// (0x0005b4d7) midp_keypad_pane_ParamLimits

0xcbae,	// (0x0005b4d7) midp_keypad_pane

0x465f,	// (0x00052f88) main_midp_pane_ParamLimits

0x71b7,	// (0x00055ae0) signal_pane_g2_cp_ParamLimits

0xe982,	// (0x0005d2ab) aid_size_cell_midp_keypad_ParamLimits

0xe982,	// (0x0005d2ab) aid_size_cell_midp_keypad

0xe9a0,	// (0x0005d2c9) midp_keyp_game_grid_pane_ParamLimits

0xe9a0,	// (0x0005d2c9) midp_keyp_game_grid_pane

0xe9c7,	// (0x0005d2f0) midp_keyp_rocker_pane_ParamLimits

0xe9c7,	// (0x0005d2f0) midp_keyp_rocker_pane

0xea20,	// (0x0005d349) midp_keyp_sk_left_pane_ParamLimits

0xea20,	// (0x0005d349) midp_keyp_sk_left_pane

0xea74,	// (0x0005d39d) midp_keyp_sk_right_pane_ParamLimits

0xea74,	// (0x0005d39d) midp_keyp_sk_right_pane

0x2d3c,	// (0x00051665) bg_button_pane_cp03

0xeac8,	// (0x0005d3f1) midp_keyp_sk_left_pane_g1

0x2d3c,	// (0x00051665) bg_button_pane_cp04

0xeac8,	// (0x0005d3f1) midp_keyp_sk_right_pane_g1

0x7706,	// (0x0005602f) midp_keyp_rocker_pane_g1

0xead1,	// (0x0005d3fa) keyp_game_cell_pane_ParamLimits

0xead1,	// (0x0005d3fa) keyp_game_cell_pane

0x2d3c,	// (0x00051665) bg_button_pane_cp02

0xeaf5,	// (0x0005d41e) keyp_game_cell_pane_g1

0xb5a4,	// (0x00059ecd) popup_fep_vkb2_window_ParamLimits

0xb5a4,	// (0x00059ecd) popup_fep_vkb2_window

0xc14e,	// (0x0005aa77) aid_size_cell_vkb2_ParamLimits

0xc14e,	// (0x0005aa77) aid_size_cell_vkb2

0xc184,	// (0x0005aaad) popup_fep_vkb2_window_g1_ParamLimits

0xc184,	// (0x0005aaad) popup_fep_vkb2_window_g1

0xc1d4,	// (0x0005aafd) vkb2_area_bottom_pane_ParamLimits

0xc1d4,	// (0x0005aafd) vkb2_area_bottom_pane

0xc228,	// (0x0005ab51) vkb2_area_keypad_pane_ParamLimits

0xc228,	// (0x0005ab51) vkb2_area_keypad_pane

0xc270,	// (0x0005ab99) vkb2_area_top_pane_ParamLimits

0xc270,	// (0x0005ab99) vkb2_area_top_pane

0xc2f6,	// (0x0005ac1f) vkb2_top_entry_pane_ParamLimits

0xc2f6,	// (0x0005ac1f) vkb2_top_entry_pane

0xc323,	// (0x0005ac4c) vkb2_top_grid_left_pane_ParamLimits

0xc323,	// (0x0005ac4c) vkb2_top_grid_left_pane

0xc343,	// (0x0005ac6c) vkb2_top_grid_right_pane_ParamLimits

0xc343,	// (0x0005ac6c) vkb2_top_grid_right_pane

0x1ea2,	// (0x000507cb) vkb2_cell_keypad_pane_ParamLimits

0x1ea2,	// (0x000507cb) vkb2_cell_keypad_pane

0xc389,	// (0x0005acb2) vkb2_area_bottom_grid_pane_ParamLimits

0xc389,	// (0x0005acb2) vkb2_area_bottom_grid_pane

0xc3b3,	// (0x0005acdc) vkb2_area_bottom_pane_g1_ParamLimits

0xc3b3,	// (0x0005acdc) vkb2_area_bottom_pane_g1

0xc3d9,	// (0x0005ad02) vkb2_area_bottom_pane_g2_ParamLimits

0xc3d9,	// (0x0005ad02) vkb2_area_bottom_pane_g2

0xc40a,	// (0x0005ad33) vkb2_area_bottom_pane_g3_ParamLimits

0xc40a,	// (0x0005ad33) vkb2_area_bottom_pane_g3

0x0002,

0xfd91,	// (0x0005e6ba) vkb2_area_bottom_pane_g_ParamLimits

0xfd91,	// (0x0005e6ba) vkb2_area_bottom_pane_g

0x204c,	// (0x00050975) vkb2_top_cell_left_pane_ParamLimits

0x204c,	// (0x00050975) vkb2_top_cell_left_pane

0xeafe,	// (0x0005d427) vkb2_top_entry_pane_g1_ParamLimits

0xeafe,	// (0x0005d427) vkb2_top_entry_pane_g1

0xeb0c,	// (0x0005d435) vkb2_top_entry_pane_t1_ParamLimits

0xeb0c,	// (0x0005d435) vkb2_top_entry_pane_t1

0x95e8,	// (0x00057f11) vkb2_top_entry_pane_t2_ParamLimits

0x95e8,	// (0x00057f11) vkb2_top_entry_pane_t2

0x961a,	// (0x00057f43) vkb2_top_entry_pane_t3_ParamLimits

0x961a,	// (0x00057f43) vkb2_top_entry_pane_t3

0x0002,

0xfd98,	// (0x0005e6c1) vkb2_top_entry_pane_t_ParamLimits

0xfd98,	// (0x0005e6c1) vkb2_top_entry_pane_t

0xc474,	// (0x0005ad9d) vkb2_top_grid_right_pane_g1_ParamLimits

0xc474,	// (0x0005ad9d) vkb2_top_grid_right_pane_g1

0x20af,	// (0x000509d8) vkb2_top_grid_right_pane_g2_ParamLimits

0x20af,	// (0x000509d8) vkb2_top_grid_right_pane_g2

0x20c7,	// (0x000509f0) vkb2_top_grid_right_pane_g3_ParamLimits

0x20c7,	// (0x000509f0) vkb2_top_grid_right_pane_g3

0xc48a,	// (0x0005adb3) vkb2_top_grid_right_pane_g4_ParamLimits

0xc48a,	// (0x0005adb3) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9f,	// (0x0005e6c8) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9f,	// (0x0005e6c8) vkb2_top_grid_right_pane_g

0x20f5,	// (0x00050a1e) vkb2_top_cell_left_pane_g1

0x210c,	// (0x00050a35) vkb2_cell_keypad_pane_g1_ParamLimits

0x210c,	// (0x00050a35) vkb2_cell_keypad_pane_g1

0x963e,	// (0x00057f67) vkb2_cell_keypad_pane_t1_ParamLimits

0x963e,	// (0x00057f67) vkb2_cell_keypad_pane_t1

0x211a,	// (0x00050a43) vkb2_cell_bottom_grid_pane_ParamLimits

0x211a,	// (0x00050a43) vkb2_cell_bottom_grid_pane

0x2153,	// (0x00050a7c) vkb2_cell_bottom_grid_pane_g1

0xe7b5,	// (0x0005d0de) aid_call2_pane_cp02

0xe7bd,	// (0x0005d0e6) aid_call_pane_cp02

0xe7c5,	// (0x0005d0ee) clock_digital_number_pane_cp10

0xe7cd,	// (0x0005d0f6) clock_digital_number_pane_cp11

0xe7d5,	// (0x0005d0fe) clock_digital_number_pane_cp12

0xe7dd,	// (0x0005d106) clock_digital_number_pane_cp13

0xe7e5,	// (0x0005d10e) clock_digital_separator_pane_cp10

0x3d0e,	// (0x00052637) popup_clock_digital_analogue_window_cp2_g1

0x3d0e,	// (0x00052637) popup_clock_digital_analogue_window_cp2_g2

0xe7ed,	// (0x0005d116) popup_clock_digital_analogue_window_cp2_g3

0x3d0e,	// (0x00052637) popup_clock_digital_analogue_window_cp2_g4

0xe7ed,	// (0x0005d116) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd54,	// (0x0005e67d) popup_clock_digital_analogue_window_cp2_g

0xe7f5,	// (0x0005d11e) popup_clock_digital_analogue_window_cp2_t1

0xe803,	// (0x0005d12c) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5f,	// (0x0005e688) popup_clock_digital_analogue_window_cp2_t

0x7706,	// (0x0005602f) clock_digital_number_pane_cp10_g1

0x7706,	// (0x0005602f) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3b,	// (0x0005e464) clock_digital_number_pane_cp10_g

0x7706,	// (0x0005602f) clock_digital_separator_pane_cp10_g1

0x7706,	// (0x0005602f) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3b,	// (0x0005e464) clock_digital_separator_pane_cp10_g

0x9044,	// (0x0005796d) uniindi_top_pane_g3

0x9055,	// (0x0005797e) uniindi_top_pane_g4

0x1f2d,	// (0x00050856) vkb2_row_keypad_pane_ParamLimits

0x1f2d,	// (0x00050856) vkb2_row_keypad_pane

0x216f,	// (0x00050a98) vkb2_cell_t_keypad_pane_ParamLimits

0x216f,	// (0x00050a98) vkb2_cell_t_keypad_pane

0x217f,	// (0x00050aa8) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x217f,	// (0x00050aa8) vkb2_cell_t_keypad_pane_cp08

0x2192,	// (0x00050abb) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2192,	// (0x00050abb) vkb2_cell_t_keypad_pane_cp09

0x21a6,	// (0x00050acf) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x21a6,	// (0x00050acf) vkb2_cell_t_keypad_pane_cp01

0x21b7,	// (0x00050ae0) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x21b7,	// (0x00050ae0) vkb2_cell_t_keypad_pane_cp02

0x21c8,	// (0x00050af1) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x21c8,	// (0x00050af1) vkb2_cell_t_keypad_pane_cp03

0x21d9,	// (0x00050b02) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x21d9,	// (0x00050b02) vkb2_cell_t_keypad_pane_cp04

0x21ea,	// (0x00050b13) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x21ea,	// (0x00050b13) vkb2_cell_t_keypad_pane_cp05

0x21fb,	// (0x00050b24) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x21fb,	// (0x00050b24) vkb2_cell_t_keypad_pane_cp06

0x220c,	// (0x00050b35) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x220c,	// (0x00050b35) vkb2_cell_t_keypad_pane_cp07

0x221d,	// (0x00050b46) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x221d,	// (0x00050b46) vkb2_cell_t_keypad_pane_cp10

0x19cf,	// (0x000502f8) vkb2_cell_t_keypad_pane_g1

0x9655,	// (0x00057f7e) vkb2_cell_t_keypad_pane_t1

0x02fe,	// (0x0004ec27) popup_grid_graphic2_window

0xeb45,	// (0x0005d46e) aid_size_cell_graphic2_ParamLimits

0xeb45,	// (0x0005d46e) aid_size_cell_graphic2

0x57ce,	// (0x000540f7) bg_popup_window_pane_cp21_ParamLimits

0x57ce,	// (0x000540f7) bg_popup_window_pane_cp21

0xeb77,	// (0x0005d4a0) graphic2_pages_pane_ParamLimits

0xeb77,	// (0x0005d4a0) graphic2_pages_pane

0xebcd,	// (0x0005d4f6) grid_graphic2_control_pane_ParamLimits

0xebcd,	// (0x0005d4f6) grid_graphic2_control_pane

0xec01,	// (0x0005d52a) grid_graphic2_pane_ParamLimits

0xec01,	// (0x0005d52a) grid_graphic2_pane

0xec74,	// (0x0005d59d) cell_graphic2_pane

0x2d3c,	// (0x00051665) main_comp_mode_pane

0x88c4,	// (0x000571ed) list_ai3_gene_pane_ParamLimits

0xe4ef,	// (0x0005ce18) bg_popup_window_pane_cp19_ParamLimits

0x8c9a,	// (0x000575c3) bg_touch_area_indi_pane_ParamLimits

0x8c9a,	// (0x000575c3) bg_touch_area_indi_pane

0x8cb0,	// (0x000575d9) bg_touch_area_indi_pane_cp01_ParamLimits

0x8cb0,	// (0x000575d9) bg_touch_area_indi_pane_cp01

0x8cc6,	// (0x000575ef) bg_touch_area_indi_pane_cp02_ParamLimits

0x8cc6,	// (0x000575ef) bg_touch_area_indi_pane_cp02

0x8cde,	// (0x00057607) bg_touch_area_indi_pane_cp03_ParamLimits

0x8cde,	// (0x00057607) bg_touch_area_indi_pane_cp03

0x8cf8,	// (0x00057621) popup_slider_window_g1_ParamLimits

0x8d14,	// (0x0005763d) popup_slider_window_g2_ParamLimits

0x8d30,	// (0x00057659) popup_slider_window_g3_ParamLimits

0xfce9,	// (0x0005e612) popup_slider_window_g_ParamLimits

0x8d8c,	// (0x000576b5) popup_slider_window_t1_ParamLimits

0x8e00,	// (0x00057729) small_volume_slider_vertical_pane_ParamLimits

0xec74,	// (0x0005d59d) cell_graphic2_pane_ParamLimits

0xeccf,	// (0x0005d5f8) bg_button_pane_cp10_ParamLimits

0xeccf,	// (0x0005d5f8) bg_button_pane_cp10

0xece2,	// (0x0005d60b) bg_button_pane_cp11_ParamLimits

0xece2,	// (0x0005d60b) bg_button_pane_cp11

0xecf5,	// (0x0005d61e) graphic2_pages_pane_g1_ParamLimits

0xecf5,	// (0x0005d61e) graphic2_pages_pane_g1

0xed10,	// (0x0005d639) graphic2_pages_pane_g2_ParamLimits

0xed10,	// (0x0005d639) graphic2_pages_pane_g2

0x0001,

0xfdad,	// (0x0005e6d6) graphic2_pages_pane_g_ParamLimits

0xfdad,	// (0x0005e6d6) graphic2_pages_pane_g

0xed28,	// (0x0005d651) graphic2_pages_pane_t1_ParamLimits

0xed28,	// (0x0005d651) graphic2_pages_pane_t1

0xed40,	// (0x0005d669) cell_graphic2_control_pane_ParamLimits

0xed40,	// (0x0005d669) cell_graphic2_control_pane

0xed5a,	// (0x0005d683) cell_graphic2_pane_g1_ParamLimits

0xed5a,	// (0x0005d683) cell_graphic2_pane_g1

0xdec8,	// (0x0005c7f1) cell_graphic2_pane_g2_ParamLimits

0xdec8,	// (0x0005c7f1) cell_graphic2_pane_g2

0xe743,	// (0x0005d06c) cell_graphic2_pane_g3_ParamLimits

0xe743,	// (0x0005d06c) cell_graphic2_pane_g3

0xded5,	// (0x0005c7fe) cell_graphic2_pane_g4_ParamLimits

0xded5,	// (0x0005c7fe) cell_graphic2_pane_g4

0xed67,	// (0x0005d690) cell_graphic2_pane_g5_ParamLimits

0xed67,	// (0x0005d690) cell_graphic2_pane_g5

0x0004,

0xfdb2,	// (0x0005e6db) cell_graphic2_pane_g_ParamLimits

0xfdb2,	// (0x0005e6db) cell_graphic2_pane_g

0xed87,	// (0x0005d6b0) cell_graphic2_pane_t1_ParamLimits

0xed87,	// (0x0005d6b0) cell_graphic2_pane_t1

0x5e51,	// (0x0005477a) grid_highlight_pane_cp11_ParamLimits

0x5e51,	// (0x0005477a) grid_highlight_pane_cp11

0x369c,	// (0x00051fc5) bg_button_pane_cp05

0xedbc,	// (0x0005d6e5) cell_graphic2_control_pane_g1

0x7706,	// (0x0005602f) bg_touch_area_indi_pane_g1

0x98c6,	// (0x000581ef) aid_cmod_rocker_key_size

0x98d0,	// (0x000581f9) aid_cmode_itu_key_size

0x98da,	// (0x00058203) main_cmode_video_pane

0x98e4,	// (0x0005820d) main_comp_mode_itu_pane

0x98f0,	// (0x00058219) main_comp_mode_rocker_pane

0x98fc,	// (0x00058225) cell_cmode_rocker_pane_ParamLimits

0x98fc,	// (0x00058225) cell_cmode_rocker_pane

0x990e,	// (0x00058237) cell_cmode_itu_pane_ParamLimits

0x990e,	// (0x00058237) cell_cmode_itu_pane

0x369c,	// (0x00051fc5) bg_button_pane_cp06_ParamLimits

0x369c,	// (0x00051fc5) bg_button_pane_cp06

0x7998,	// (0x000562c1) cell_cmode_rocker_pane_g1_ParamLimits

0x7998,	// (0x000562c1) cell_cmode_rocker_pane_g1

0x8ea4,	// (0x000577cd) cell_cmode_rocker_pane_g2_ParamLimits

0x8ea4,	// (0x000577cd) cell_cmode_rocker_pane_g2

0x0001,

0xfdc2,	// (0x0005e6eb) cell_cmode_rocker_pane_g_ParamLimits

0xfdc2,	// (0x0005e6eb) cell_cmode_rocker_pane_g

0x2d3c,	// (0x00051665) bg_button_pane_cp07

0x9923,	// (0x0005824c) cell_cmode_itu_pane_g1

0x992c,	// (0x00058255) cell_cmode_itu_pane_t1

0x993a,	// (0x00058263) cell_cmode_itu_pane_t2

0x0001,

0xfdc7,	// (0x0005e6f0) cell_cmode_itu_pane_t

0x90c7,	// (0x000579f0) aid_touch_ctrl_left

0x90cf,	// (0x000579f8) aid_touch_ctrl_right

0x2d3c,	// (0x00051665) compa_mode_pane

0xedc9,	// (0x0005d6f2) aid_cmod_rocker_key_size_cp

0xedd3,	// (0x0005d6fc) aid_cmode_itu_key_size_cp

0x995c,	// (0x00058285) compa_mode_pane_g1

0x9964,	// (0x0005828d) compa_mode_pane_g2

0x996c,	// (0x00058295) compa_mode_pane_g3

0x0002,

0xfdcc,	// (0x0005e6f5) compa_mode_pane_g

0xeddd,	// (0x0005d706) main_comp_mode_itu_pane_cp

0xede5,	// (0x0005d70e) main_comp_mode_rocker_pane_cp

0xeded,	// (0x0005d716) cell_cmode_itu_pane_cp_ParamLimits

0xeded,	// (0x0005d716) cell_cmode_itu_pane_cp

0xee02,	// (0x0005d72b) cell_cmode_rocker_pane_cp_ParamLimits

0xee02,	// (0x0005d72b) cell_cmode_rocker_pane_cp

0x369c,	// (0x00051fc5) bg_button_pane_cp06_cp_ParamLimits

0x369c,	// (0x00051fc5) bg_button_pane_cp06_cp

0x7998,	// (0x000562c1) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7998,	// (0x000562c1) cell_cmode_rocker_pane_g1_cp

0x7706,	// (0x0005602f) cell_cmode_rocker_pane_g2_cp

0x2d3c,	// (0x00051665) bg_button_pane_cp07_cp

0xee14,	// (0x0005d73d) cell_cmode_itu_pane_g1_cp

0xee1d,	// (0x0005d746) cell_cmode_itu_pane_t1_cp

0xee1d,	// (0x0005d746) cell_cmode_itu_pane_t2_cp

0xdb0e,	// (0x0005c437) settings_code_pane_cp2

0x2e30,	// (0x00051759) bg_popup_window_pane_cp3_ParamLimits

0x3293,	// (0x00051bbc) heading_pane_cp3_ParamLimits

0x329f,	// (0x00051bc8) listscroll_popup_graphic_pane_ParamLimits

0x1778,	// (0x000500a1) fep_hwr_aid_pane_ParamLimits

0x1bf0,	// (0x00050519) aid_touch_sctrl_top_ParamLimits

0x1c0b,	// (0x00050534) sctrl_sk_top_pane_g1_ParamLimits

0x19cf,	// (0x000502f8) sctrl_sk_top_pane_g2_ParamLimits

0xfd02,	// (0x0005e62b) sctrl_sk_top_pane_g_ParamLimits

0x1c18,	// (0x00050541) sctrl_sk_top_pane_t1_ParamLimits

0x1bf0,	// (0x00050519) aid_touch_sctrl_bottom_ParamLimits

0x1c18,	// (0x00050541) sctrl_sk_bottom_pane_t1_ParamLimits

0x9010,	// (0x00057939) aid_area_touch_clock

0xc2b8,	// (0x0005abe1) aid_vkb2_area_top_pane_cell_ParamLimits

0xc2b8,	// (0x0005abe1) aid_vkb2_area_top_pane_cell

0xc363,	// (0x0005ac8c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc363,	// (0x0005ac8c) aid_vkb2_area_bottom_pane_cell

0x95a0,	// (0x00057ec9) popup_char_count_window

0x99b9,	// (0x000582e2) popup_char_count_window_g1

0x99c2,	// (0x000582eb) popup_char_count_window_g2

0x99cb,	// (0x000582f4) popup_char_count_window_g3

0x0002,

0xfdd3,	// (0x0005e6fc) popup_char_count_window_g

0x99d4,	// (0x000582fd) popup_char_count_window_t1

0x1cca,	// (0x000505f3) popup_fep_char_preview_window_ParamLimits

0x1cca,	// (0x000505f3) popup_fep_char_preview_window

0xc2d8,	// (0x0005ac01) vkb2_top_candi_pane_ParamLimits

0xc2d8,	// (0x0005ac01) vkb2_top_candi_pane

0xee2b,	// (0x0005d754) cell_vkb2_top_candi_pane_ParamLimits

0xee2b,	// (0x0005d754) cell_vkb2_top_candi_pane

0x2232,	// (0x00050b5b) bg_popup_fep_char_preview_window_ParamLimits

0x2232,	// (0x00050b5b) bg_popup_fep_char_preview_window

0x2240,	// (0x00050b69) popup_fep_char_preview_window_t1_ParamLimits

0x2240,	// (0x00050b69) popup_fep_char_preview_window_t1

0x9a2f,	// (0x00058358) bg_popup_fep_char_preview_window_g1

0x9a37,	// (0x00058360) bg_popup_fep_char_preview_window_g2

0x9a3f,	// (0x00058368) bg_popup_fep_char_preview_window_g3

0x9a47,	// (0x00058370) bg_popup_fep_char_preview_window_g4

0x9a4f,	// (0x00058378) bg_popup_fep_char_preview_window_g5

0x227a,	// (0x00050ba3) bg_popup_fep_char_preview_window_g6

0x9a57,	// (0x00058380) bg_popup_fep_char_preview_window_g7

0x9a5f,	// (0x00058388) bg_popup_fep_char_preview_window_g8

0x9a67,	// (0x00058390) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdda,	// (0x0005e703) bg_popup_fep_char_preview_window_g

0x19cf,	// (0x000502f8) cell_vkb2_top_candi_pane_g1_ParamLimits

0x19cf,	// (0x000502f8) cell_vkb2_top_candi_pane_g1

0x19dd,	// (0x00050306) cell_vkb2_top_candi_pane_g2_ParamLimits

0x19dd,	// (0x00050306) cell_vkb2_top_candi_pane_g2

0x9327,	// (0x00057c50) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9327,	// (0x00057c50) cell_vkb2_top_candi_pane_g3

0x2282,	// (0x00050bab) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2282,	// (0x00050bab) cell_vkb2_top_candi_pane_g4

0x7e77,	// (0x000567a0) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7e77,	// (0x000567a0) cell_vkb2_top_candi_pane_g5

0x22a3,	// (0x00050bcc) cell_vkb2_top_candi_pane_g6_ParamLimits

0x22a3,	// (0x00050bcc) cell_vkb2_top_candi_pane_g6

0x0005,

0xfded,	// (0x0005e716) cell_vkb2_top_candi_pane_g_ParamLimits

0xfded,	// (0x0005e716) cell_vkb2_top_candi_pane_g

0x22b1,	// (0x00050bda) cell_vkb2_top_candi_pane_t1

0x15d8,	// (0x0004ff01) aid_size_touch_slider_mark_ParamLimits

0x15d8,	// (0x0004ff01) aid_size_touch_slider_mark

0xebb3,	// (0x0005d4dc) grid_graphic2_catg_pane_ParamLimits

0xebb3,	// (0x0005d4dc) grid_graphic2_catg_pane

0xec47,	// (0x0005d570) popup_grid_graphic2_window_t1_ParamLimits

0xec47,	// (0x0005d570) popup_grid_graphic2_window_t1

0xec5d,	// (0x0005d586) popup_grid_graphic2_window_t2_ParamLimits

0xec5d,	// (0x0005d586) popup_grid_graphic2_window_t2

0x0001,

0xfda8,	// (0x0005e6d1) popup_grid_graphic2_window_t_ParamLimits

0xfda8,	// (0x0005e6d1) popup_grid_graphic2_window_t

0x369c,	// (0x00051fc5) bg_button_pane_cp05_ParamLimits

0xedbc,	// (0x0005d6e5) cell_graphic2_control_pane_g1_ParamLimits

0xee91,	// (0x0005d7ba) cell_graphic2_catg_pane_ParamLimits

0xee91,	// (0x0005d7ba) cell_graphic2_catg_pane

0x2d3c,	// (0x00051665) bg_button_pane_cp12

0xeea3,	// (0x0005d7cc) cell_graphic2_catg_pane_g1

0x8fdc,	// (0x00057905) cell_tb_ext_pane_t1_ParamLimits

0x206c,	// (0x00050995) vkb2_top_cell_right_narrow_pane_ParamLimits

0x206c,	// (0x00050995) vkb2_top_cell_right_narrow_pane

0x2084,	// (0x000509ad) vkb2_top_cell_right_wide_pane_ParamLimits

0x2084,	// (0x000509ad) vkb2_top_cell_right_wide_pane

0x176a,	// (0x00050093) bg_vkb2_func_pane_ParamLimits

0x176a,	// (0x00050093) bg_vkb2_func_pane

0x20f5,	// (0x00050a1e) vkb2_top_cell_left_pane_g1_ParamLimits

0x176a,	// (0x00050093) bg_vkb2_fuc_pane_cp03_ParamLimits

0x176a,	// (0x00050093) bg_vkb2_fuc_pane_cp03

0x2153,	// (0x00050a7c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x50fd,	// (0x00053a26) bg_vkb2_func_pane_g1

0x5105,	// (0x00053a2e) bg_vkb2_func_pane_g2

0x5115,	// (0x00053a3e) bg_vkb2_func_pane_g3

0x510d,	// (0x00053a36) bg_vkb2_func_pane_g4

0x511d,	// (0x00053a46) bg_vkb2_func_pane_g5

0x5125,	// (0x00053a4e) bg_vkb2_func_pane_g6

0x512d,	// (0x00053a56) bg_vkb2_func_pane_g7

0x5135,	// (0x00053a5e) bg_vkb2_func_pane_g8

0x50f5,	// (0x00053a1e) bg_vkb2_func_pane_g9

0x0008,

0xfdfa,	// (0x0005e723) bg_vkb2_func_pane_g

0x176a,	// (0x00050093) bg_vkb2_fuc_pane_cp01_ParamLimits

0x176a,	// (0x00050093) bg_vkb2_fuc_pane_cp01

0x20f5,	// (0x00050a1e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x20f5,	// (0x00050a1e) vkb2_top_cell_right_wide_pane_g1

0x176a,	// (0x00050093) bg_vkb2_fuc_pane_cp02_ParamLimits

0x176a,	// (0x00050093) bg_vkb2_fuc_pane_cp02

0x2153,	// (0x00050a7c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2153,	// (0x00050a7c) vkb2_top_cell_right_narrow_pane_g1

0xe42f,	// (0x0005cd58) aid_touch_area_decrease_ParamLimits

0xe42f,	// (0x0005cd58) aid_touch_area_decrease

0xe463,	// (0x0005cd8c) aid_touch_area_increase_ParamLimits

0xe463,	// (0x0005cd8c) aid_touch_area_increase

0xe48b,	// (0x0005cdb4) aid_touch_area_mute_ParamLimits

0xe48b,	// (0x0005cdb4) aid_touch_area_mute

0xe4bb,	// (0x0005cde4) aid_touch_area_slider_ParamLimits

0xe4bb,	// (0x0005cde4) aid_touch_area_slider

0xe4fb,	// (0x0005ce24) popup_slider_window_g4_ParamLimits

0xe4fb,	// (0x0005ce24) popup_slider_window_g4

0xe523,	// (0x0005ce4c) popup_slider_window_g5_ParamLimits

0xe523,	// (0x0005ce4c) popup_slider_window_g5

0xe557,	// (0x0005ce80) popup_slider_window_g6_ParamLimits

0xe557,	// (0x0005ce80) popup_slider_window_g6

0x8dba,	// (0x000576e3) popup_slider_window_t2_ParamLimits

0x8dba,	// (0x000576e3) popup_slider_window_t2

0x0001,

0xfcf6,	// (0x0005e61f) popup_slider_window_t_ParamLimits

0xfcf6,	// (0x0005e61f) popup_slider_window_t

0xe573,	// (0x0005ce9c) slider_pane_ParamLimits

0xe573,	// (0x0005ce9c) slider_pane

0x9a8a,	// (0x000583b3) slider_pane_g1_ParamLimits

0x9a8a,	// (0x000583b3) slider_pane_g1

0x9a9e,	// (0x000583c7) slider_pane_g2_ParamLimits

0x9a9e,	// (0x000583c7) slider_pane_g2

0x9ab4,	// (0x000583dd) slider_pane_g3_ParamLimits

0x9ab4,	// (0x000583dd) slider_pane_g3

0x0003,

0xfe0d,	// (0x0005e736) slider_pane_g_ParamLimits

0xfe0d,	// (0x0005e736) slider_pane_g

0xd2da,	// (0x0005bc03) popup_tb_float_extension_window_ParamLimits

0xd2da,	// (0x0005bc03) popup_tb_float_extension_window

0x9ae0,	// (0x00058409) aid_size_cell_tb_float_ext

0x2d3c,	// (0x00051665) bg_popup_sub_window_cp28

0x9aec,	// (0x00058415) grid_tb_float_ext_pane

0x9af6,	// (0x0005841f) cell_tb_float_ext_pane_ParamLimits

0x9af6,	// (0x0005841f) cell_tb_float_ext_pane

0x9b10,	// (0x00058439) cell_tb_float_ext_pane_g1

0x9b19,	// (0x00058442) grid_highlight_pane_cp12

0xbfc0,	// (0x0005a8e9) cell_last_hwr_side_pane_ParamLimits

0xbfc0,	// (0x0005a8e9) cell_last_hwr_side_pane

0x7706,	// (0x0005602f) cell_last_hwr_side_pane_g1

0x9b22,	// (0x0005844b) cell_last_hwr_side_pane_g2

0x0001,

0xfe16,	// (0x0005e73f) cell_last_hwr_side_pane_g

0xc43f,	// (0x0005ad68) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc43f,	// (0x0005ad68) vkb2_area_bottom_space_btn_pane

0x19cf,	// (0x000502f8) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9655,	// (0x00057f7e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x22b1,	// (0x00050bda) cell_vkb2_top_candi_pane_t1_ParamLimits

0x22d0,	// (0x00050bf9) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x22d0,	// (0x00050bf9) vkb2_area_bottom_space_btn_pane_g1

0x230a,	// (0x00050c33) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x230a,	// (0x00050c33) vkb2_area_bottom_space_btn_pane_g2

0x2340,	// (0x00050c69) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2340,	// (0x00050c69) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1b,	// (0x0005e744) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1b,	// (0x0005e744) vkb2_area_bottom_space_btn_pane_g

0x182d,	// (0x00050156) cel_fep_hwr_func_pane_ParamLimits

0x182d,	// (0x00050156) cel_fep_hwr_func_pane

0xbf95,	// (0x0005a8be) cell_hwr_side_button_pane_ParamLimits

0xbf95,	// (0x0005a8be) cell_hwr_side_button_pane

0x9010,	// (0x00057939) aid_area_touch_clock_ParamLimits

0x30b9,	// (0x000519e2) bg_uniindi_top_pane_ParamLimits

0x9022,	// (0x0005794b) uniindi_top_pane_g1_ParamLimits

0x9038,	// (0x00057961) uniindi_top_pane_g2_ParamLimits

0x9044,	// (0x0005796d) uniindi_top_pane_g3_ParamLimits

0x9055,	// (0x0005797e) uniindi_top_pane_g4_ParamLimits

0xfd2e,	// (0x0005e657) uniindi_top_pane_g_ParamLimits

0x9062,	// (0x0005798b) uniindi_top_pane_t1_ParamLimits

0x30b9,	// (0x000519e2) bg_vkb2_func_pane_cp01_ParamLimits

0x30b9,	// (0x000519e2) bg_vkb2_func_pane_cp01

0x9b2b,	// (0x00058454) cel_fep_hwr_func_pane_g1_ParamLimits

0x9b2b,	// (0x00058454) cel_fep_hwr_func_pane_g1

0x30b9,	// (0x000519e2) bg_vkb2_func_pane_cp02_ParamLimits

0x30b9,	// (0x000519e2) bg_vkb2_func_pane_cp02

0x9b2b,	// (0x00058454) cell_hwr_side_button_pane_g1_ParamLimits

0x9b2b,	// (0x00058454) cell_hwr_side_button_pane_g1

0x4f76,	// (0x0005389f) status_pane_g4_ParamLimits

0x4f76,	// (0x0005389f) status_pane_g4

0x4f90,	// (0x000538b9) status_pane_t1

0x743f,	// (0x00055d68) form2_midp_gauge_slider_cont_pane

0x7447,	// (0x00055d70) form2_midp_gauge_slider_pane_t1_ParamLimits

0xde05,	// (0x0005c72e) form2_midp_gauge_slider_pane_t2_ParamLimits

0xde17,	// (0x0005c740) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaee,	// (0x0005e417) form2_midp_gauge_slider_pane_t_ParamLimits

0x747d,	// (0x00055da6) form2_midp_slider_pane_ParamLimits

0x1c8a,	// (0x000505b3) aid_size_cell_func_vkb2_ParamLimits

0x1c8a,	// (0x000505b3) aid_size_cell_func_vkb2

0x9acc,	// (0x000583f5) slider_pane_g4_ParamLimits

0x9acc,	// (0x000583f5) slider_pane_g4

0xc4a0,	// (0x0005adc9) form2_midp_gauge_slider_pane_t2_cp01

0xc4ae,	// (0x0005add7) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc4ae,	// (0x0005add7) form2_midp_gauge_slider_pane_t3_cp01

0x23b5,	// (0x00050cde) form2_midp_slider_pane_cp01

0x2d3c,	// (0x00051665) navi_smil_pane

0x9b64,	// (0x0005848d) navi_smil_pane_g1

0x9b6c,	// (0x00058495) navi_smil_pane_t1

0x9b39,	// (0x00058462) form2_midp_slider_pane_g1

0x9b42,	// (0x0005846b) form2_midp_slider_pane_g2

0x9b4a,	// (0x00058473) form2_midp_slider_pane_g3

0x9b39,	// (0x00058462) form2_midp_slider_pane_g4

0xeeac,	// (0x0005d7d5) form2_midp_slider_pane_g5

0x0004,

0xfe24,	// (0x0005e74d) form2_midp_slider_pane_g

0x237a,	// (0x00050ca3) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x237a,	// (0x00050ca3) vkb2_area_bottom_space_btn_pane_g4

0xd4b6,	// (0x0005bddf) lc0_navi_pane_ParamLimits

0xd4b6,	// (0x0005bddf) lc0_navi_pane

0xd520,	// (0x0005be49) lc0_stat_indi_pane_ParamLimits

0xd520,	// (0x0005be49) lc0_stat_indi_pane

0xd535,	// (0x0005be5e) ls0_title_pane_ParamLimits

0xd535,	// (0x0005be5e) ls0_title_pane

0x369c,	// (0x00051fc5) bg_popup_sub_pane_cp14_ParamLimits

0x8ff7,	// (0x00057920) list_uniindi_pane_ParamLimits

0x9003,	// (0x0005792c) uniindi_top_pane_ParamLimits

0x909f,	// (0x000579c8) list_single_uniindi_pane_g1_ParamLimits

0x90b2,	// (0x000579db) list_single_uniindi_pane_t1_ParamLimits

0xc4cb,	// (0x0005adf4) lc0_stat_clock_pane_ParamLimits

0xc4cb,	// (0x0005adf4) lc0_stat_clock_pane

0xeeb5,	// (0x0005d7de) lc0_stat_indi_pane_g1_ParamLimits

0xeeb5,	// (0x0005d7de) lc0_stat_indi_pane_g1

0xeec2,	// (0x0005d7eb) lc0_stat_indi_pane_g2_ParamLimits

0xeec2,	// (0x0005d7eb) lc0_stat_indi_pane_g2

0x0001,

0xfe2f,	// (0x0005e758) lc0_stat_indi_pane_g_ParamLimits

0xfe2f,	// (0x0005e758) lc0_stat_indi_pane_g

0xc4d8,	// (0x0005ae01) lc0_uni_indicator_pane_ParamLimits

0xc4d8,	// (0x0005ae01) lc0_uni_indicator_pane

0x9b94,	// (0x000584bd) ls0_title_pane_g1_ParamLimits

0x9b94,	// (0x000584bd) ls0_title_pane_g1

0xeecf,	// (0x0005d7f8) ls0_title_pane_t1_ParamLimits

0xeecf,	// (0x0005d7f8) ls0_title_pane_t1

0xc4e5,	// (0x0005ae0e) lc0_uni_indicator_pane_g1_ParamLimits

0xc4e5,	// (0x0005ae0e) lc0_uni_indicator_pane_g1

0x9bde,	// (0x00058507) lc0_stat_clock_pane_t1

0x2d3c,	// (0x00051665) main_ai5_pane

0x9bec,	// (0x00058515) ai5_sk_pane_ParamLimits

0x9bec,	// (0x00058515) ai5_sk_pane

0xeefd,	// (0x0005d826) cell_ai5_widget_pane_ParamLimits

0xeefd,	// (0x0005d826) cell_ai5_widget_pane

0x9c7b,	// (0x000585a4) aid_size_cell_widget_grid

0x9c8f,	// (0x000585b8) bg_ai5_widget_pane_ParamLimits

0x9c8f,	// (0x000585b8) bg_ai5_widget_pane

0xef86,	// (0x0005d8af) cell_ai5_widget_pane_g2

0xef96,	// (0x0005d8bf) cell_ai5_widget_pane_g3

0xefb5,	// (0x0005d8de) cell_ai5_widget_pane_g4

0xefc1,	// (0x0005d8ea) cell_ai5_widget_pane_g5

0xefcd,	// (0x0005d8f6) cell_ai5_widget_pane_g6

0xefd9,	// (0x0005d902) cell_ai5_widget_pane_g7

0xf021,	// (0x0005d94a) cell_ai5_widget_pane_t1_ParamLimits

0xf021,	// (0x0005d94a) cell_ai5_widget_pane_t1

0xf03e,	// (0x0005d967) cell_ai5_widget_pane_t2_ParamLimits

0xf03e,	// (0x0005d967) cell_ai5_widget_pane_t2

0xf056,	// (0x0005d97f) cell_ai5_widget_pane_t3_ParamLimits

0xf056,	// (0x0005d97f) cell_ai5_widget_pane_t3

0xf06e,	// (0x0005d997) cell_ai5_widget_pane_t4_ParamLimits

0xf06e,	// (0x0005d997) cell_ai5_widget_pane_t4

0xf088,	// (0x0005d9b1) cell_ai5_widget_pane_t5_ParamLimits

0xf088,	// (0x0005d9b1) cell_ai5_widget_pane_t5

0x9dd8,	// (0x00058701) cell_ai5_widget_pane_t6_ParamLimits

0x9dd8,	// (0x00058701) cell_ai5_widget_pane_t6

0x9dea,	// (0x00058713) cell_ai5_widget_pane_t7_ParamLimits

0x9dea,	// (0x00058713) cell_ai5_widget_pane_t7

0xf0a7,	// (0x0005d9d0) cell_ai5_widget_pane_t8_ParamLimits

0xf0a7,	// (0x0005d9d0) cell_ai5_widget_pane_t8

0x0009,

0xfe49,	// (0x0005e772) cell_ai5_widget_pane_t_ParamLimits

0xfe49,	// (0x0005e772) cell_ai5_widget_pane_t

0xf0f3,	// (0x0005da1c) grid_ai5_widget_pane

0x369c,	// (0x00051fc5) highlight_cell_ai5_widget_pane_ParamLimits

0x369c,	// (0x00051fc5) highlight_cell_ai5_widget_pane

0xf10b,	// (0x0005da34) ai5_sk_left_pane

0xf115,	// (0x0005da3e) ai5_sk_middle_pane

0xf11f,	// (0x0005da48) ai5_sk_right_pane

0x9e85,	// (0x000587ae) bg_ai5_widget_pane_g1_ParamLimits

0x9e85,	// (0x000587ae) bg_ai5_widget_pane_g1

0x9e91,	// (0x000587ba) bg_ai5_widget_pane_g2_ParamLimits

0x9e91,	// (0x000587ba) bg_ai5_widget_pane_g2

0x9e9d,	// (0x000587c6) bg_ai5_widget_pane_g3_ParamLimits

0x9e9d,	// (0x000587c6) bg_ai5_widget_pane_g3

0x9ea9,	// (0x000587d2) bg_ai5_widget_pane_g4_ParamLimits

0x9ea9,	// (0x000587d2) bg_ai5_widget_pane_g4

0x9eb5,	// (0x000587de) bg_ai5_widget_pane_g5_ParamLimits

0x9eb5,	// (0x000587de) bg_ai5_widget_pane_g5

0x9ec1,	// (0x000587ea) bg_ai5_widget_pane_g6_ParamLimits

0x9ec1,	// (0x000587ea) bg_ai5_widget_pane_g6

0x9ecd,	// (0x000587f6) bg_ai5_widget_pane_g7_ParamLimits

0x9ecd,	// (0x000587f6) bg_ai5_widget_pane_g7

0x9ed9,	// (0x00058802) bg_ai5_widget_pane_g8_ParamLimits

0x9ed9,	// (0x00058802) bg_ai5_widget_pane_g8

0x9ee5,	// (0x0005880e) bg_ai5_widget_pane_g9_ParamLimits

0x9ee5,	// (0x0005880e) bg_ai5_widget_pane_g9

0x0008,

0xfe5e,	// (0x0005e787) bg_ai5_widget_pane_g_ParamLimits

0xfe5e,	// (0x0005e787) bg_ai5_widget_pane_g

0x9f18,	// (0x00058841) cell_shortcut_ai5_widget_pane_ParamLimits

0x9f18,	// (0x00058841) cell_shortcut_ai5_widget_pane

0x2ef9,	// (0x00051822) bg_cell_shortcut_ai5_widget_pane

0x9f29,	// (0x00058852) cell_grid_ai5_widget_pane_g1

0x9f32,	// (0x0005885b) highlight_cell_shortcut_ai5_widget_pane

0x50fd,	// (0x00053a26) ai5_sk_left_pane_g1

0x9f3a,	// (0x00058863) ai5_sk_left_pane_g2

0x9f42,	// (0x0005886b) ai5_sk_left_pane_g3

0x9f4a,	// (0x00058873) ai5_sk_left_pane_g4

0x0003,

0xfe71,	// (0x0005e79a) ai5_sk_left_pane_g

0x9f52,	// (0x0005887b) ai5_sk_left_pane_t1

0x5105,	// (0x00053a2e) ai5_sk_right_pane_g1

0x9f60,	// (0x00058889) ai5_sk_right_pane_g2

0x9f68,	// (0x00058891) ai5_sk_right_pane_g3

0x9f70,	// (0x00058899) ai5_sk_right_pane_g4

0x0003,

0xfe7a,	// (0x0005e7a3) ai5_sk_right_pane_g

0x9f78,	// (0x000588a1) ai5_sk_right_pane_t1

0x5105,	// (0x00053a2e) ai5_sk_middle_pane_g1

0x50fd,	// (0x00053a26) ai5_sk_middle_pane_g2

0x511d,	// (0x00053a46) ai5_sk_middle_pane_g3

0x9f68,	// (0x00058891) ai5_sk_middle_pane_g4

0x9f42,	// (0x0005886b) ai5_sk_middle_pane_g5

0x9f86,	// (0x000588af) ai5_sk_middle_pane_g6

0xf129,	// (0x0005da52) ai5_sk_middle_pane_g7

0x0006,

0xfe83,	// (0x0005e7ac) ai5_sk_middle_pane_g

0xd3a2,	// (0x0005bccb) aid_touch_area_size_lc0_ParamLimits

0xd3a2,	// (0x0005bccb) aid_touch_area_size_lc0

0x19fe,	// (0x00050327) cell_hwr_candidate_pane_t1_ParamLimits

0x4c58,	// (0x00053581) aid_touch_navi_pane

0xd627,	// (0x0005bf50) status_dt_navi_pane_ParamLimits

0xd627,	// (0x0005bf50) status_dt_navi_pane

0xd63f,	// (0x0005bf68) status_dt_sta_pane_ParamLimits

0xd63f,	// (0x0005bf68) status_dt_sta_pane

0xf131,	// (0x0005da5a) dt_sta_controll_pane

0xf13e,	// (0x0005da67) dt_sta_indi_pane

0xf14b,	// (0x0005da74) dt_sta_title_pane

0x30b9,	// (0x000519e2) bg_dt_sta_indi_pane_ParamLimits

0x30b9,	// (0x000519e2) bg_dt_sta_indi_pane

0x9fc7,	// (0x000588f0) dt_sta_battery_pane

0xf15d,	// (0x0005da86) dt_sta_indi_pane_g1

0xf166,	// (0x0005da8f) dt_sta_indi_pane_g2

0xf16f,	// (0x0005da98) dt_sta_indi_pane_g3

0x0002,

0xfe92,	// (0x0005e7bb) dt_sta_indi_pane_g

0xf178,	// (0x0005daa1) dt_sta_signal_pane

0x369c,	// (0x00051fc5) bg_dt_sta_title_pane_ParamLimits

0x369c,	// (0x00051fc5) bg_dt_sta_title_pane

0x5fa2,	// (0x000548cb) dt_sta_title_pane_g1

0xf181,	// (0x0005daaa) dt_sta_title_pane_t1_ParamLimits

0xf181,	// (0x0005daaa) dt_sta_title_pane_t1

0x2d3c,	// (0x00051665) bg_dt_sta_control_pane

0xf196,	// (0x0005dabf) dt_sta_controll_pane_g1

0xf19f,	// (0x0005dac8) bg_dt_sta_title_pane_g1

0xf1a8,	// (0x0005dad1) bg_dt_sta_title_pane_g2

0xf1b1,	// (0x0005dada) bg_dt_sta_title_pane_g3

0x0002,

0xfe99,	// (0x0005e7c2) bg_dt_sta_title_pane_g

0x7706,	// (0x0005602f) bg_dt_sta_indi_pane_g1

0xa034,	// (0x0005895d) dt_sta_signal_pane_g1

0xa03c,	// (0x00058965) dt_sta_signal_pane_g2

0x0001,

0xfea0,	// (0x0005e7c9) dt_sta_signal_pane_g

0xa044,	// (0x0005896d) dt_sta_battery_pane_g1

0xa04d,	// (0x00058976) dt_sta_battery_pane_t1

0x7706,	// (0x0005602f) bg_dt_sta_control_pane_g1

0x3df5,	// (0x0005271e) fep_china_uni_eep_pane

0x3dfd,	// (0x00052726) fep_china_uni_entry_pane_ParamLimits

0x3e0d,	// (0x00052736) popup_fep_china_uni_window_g1_ParamLimits

0x3e1d,	// (0x00052746) popup_fep_china_uni_window_g2_ParamLimits

0x3e1d,	// (0x00052746) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x0005e059) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x0005e059) popup_fep_china_uni_window_g

0xa05c,	// (0x00058985) fep_china_uni_eep_pane_g1

0xa064,	// (0x0005898d) fep_china_uni_eep_pane_t1

0x9b5b,	// (0x00058484) aid_touch_area_size_smil_player

0x4da4,	// (0x000536cd) lc0_clock_pane

0x4f84,	// (0x000538ad) status_pane_g5_ParamLimits

0x4f84,	// (0x000538ad) status_pane_g5

0xce80,	// (0x0005b7a9) popup_keymap_window

0x4f42,	// (0x0005386b) status_icon_pane

0xef96,	// (0x0005d8bf) cell_ai5_widget_pane_g3_ParamLimits

0xefb5,	// (0x0005d8de) cell_ai5_widget_pane_g4_ParamLimits

0xefc1,	// (0x0005d8ea) cell_ai5_widget_pane_g5_ParamLimits

0xefe5,	// (0x0005d90e) cell_ai5_widget_pane_g8_ParamLimits

0xefe5,	// (0x0005d90e) cell_ai5_widget_pane_g8

0xeff9,	// (0x0005d922) cell_ai5_widget_pane_g9_ParamLimits

0xeff9,	// (0x0005d922) cell_ai5_widget_pane_g9

0xf00d,	// (0x0005d936) cell_ai5_widget_pane_g10_ParamLimits

0xf00d,	// (0x0005d936) cell_ai5_widget_pane_g10

0xa073,	// (0x0005899c) status_icon_pane_g1

0x2d3c,	// (0x00051665) bg_popup_sub_pane_cp13

0xa07b,	// (0x000589a4) popup_keymap_window_t1

0xcc06,	// (0x0005b52f) control_pane_g6_ParamLimits

0xcc06,	// (0x0005b52f) control_pane_g6

0xcc13,	// (0x0005b53c) control_pane_g7_ParamLimits

0xcc13,	// (0x0005b53c) control_pane_g7

0xcc20,	// (0x0005b549) control_pane_g8_ParamLimits

0xcc20,	// (0x0005b549) control_pane_g8

0xf131,	// (0x0005da5a) dt_sta_controll_pane_ParamLimits

0xf13e,	// (0x0005da67) dt_sta_indi_pane_ParamLimits

0xf14b,	// (0x0005da74) dt_sta_title_pane_ParamLimits

0x35d4,	// (0x00051efd) aid_size_touch_scroll_bar_cale

0x03d7,	// (0x0004ed00) popup_discreet_window_ParamLimits

0x03d7,	// (0x0004ed00) popup_discreet_window

0xb5ea,	// (0x00059f13) popup_sk_window

0x57ce,	// (0x000540f7) bg_popup_sub_pane_cp28_ParamLimits

0x57ce,	// (0x000540f7) bg_popup_sub_pane_cp28

0xa089,	// (0x000589b2) popup_discreet_window_g1_ParamLimits

0xa089,	// (0x000589b2) popup_discreet_window_g1

0xa0a9,	// (0x000589d2) popup_discreet_window_t1_ParamLimits

0xa0a9,	// (0x000589d2) popup_discreet_window_t1

0xa0c7,	// (0x000589f0) popup_discreet_window_t2_ParamLimits

0xa0c7,	// (0x000589f0) popup_discreet_window_t2

0x0002,

0xfea5,	// (0x0005e7ce) popup_discreet_window_t_ParamLimits

0xfea5,	// (0x0005e7ce) popup_discreet_window_t

0x23ec,	// (0x00050d15) popup_sk_window_g1

0x23f6,	// (0x00050d1f) popup_sk_window_g2

0x0001,

0xfeac,	// (0x0005e7d5) popup_sk_window_g

0xa119,	// (0x00058a42) popup_sk_window_t1

0xa127,	// (0x00058a50) popup_sk_window_t1_copy1

0xef86,	// (0x0005d8af) cell_ai5_widget_pane_g2_ParamLimits

0xf0b9,	// (0x0005d9e2) cell_ai5_widget_pane_t9_ParamLimits

0xf0b9,	// (0x0005d9e2) cell_ai5_widget_pane_t9

0x2d3c,	// (0x00051665) main_fep_fshwr2_pane

0xf1ba,	// (0x0005dae3) aid_fshwr2_btn_pane

0xf1c2,	// (0x0005daeb) aid_fshwr2_syb_pane

0xf1ca,	// (0x0005daf3) aid_fshwr2_txt_pane

0xf1d2,	// (0x0005dafb) fshwr2_func_candi_pane

0xf1dc,	// (0x0005db05) fshwr2_hwr_syb_pane

0xf1ea,	// (0x0005db13) fshwr2_icf_pane

0x2d3c,	// (0x00051665) fshwr2_icf_bg_pane

0xf1f4,	// (0x0005db1d) fshwr2_icf_pane_t1_ParamLimits

0xf1f4,	// (0x0005db1d) fshwr2_icf_pane_t1

0x7706,	// (0x0005602f) fshwr2_func_candi_pane_g1

0xa19a,	// (0x00058ac3) fshwr2_func_candi_row_pane_ParamLimits

0xa19a,	// (0x00058ac3) fshwr2_func_candi_row_pane

0xf20c,	// (0x0005db35) cell_fshwr2_syb_pane_ParamLimits

0xf20c,	// (0x0005db35) cell_fshwr2_syb_pane

0x7998,	// (0x000562c1) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7998,	// (0x000562c1) fshwr2_hwr_syb_pane_g1

0x2d3c,	// (0x00051665) bg_popup_call_pane_cp01

0xa1c5,	// (0x00058aee) fshwr2_func_candi_cell_pane_ParamLimits

0xa1c5,	// (0x00058aee) fshwr2_func_candi_cell_pane

0xa1f6,	// (0x00058b1f) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa1f6,	// (0x00058b1f) fshwr2_func_candi_cell_bg_pane

0xa210,	// (0x00058b39) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa210,	// (0x00058b39) fshwr2_func_candi_cell_pane_g1

0xa238,	// (0x00058b61) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa238,	// (0x00058b61) fshwr2_func_candi_cell_pane_t1

0x2d3c,	// (0x00051665) bg_button_pane_cp08

0x42df,	// (0x00052c08) cell_fshwr2_syb_bg_pane

0xf226,	// (0x0005db4f) cell_fshwr2_syb_bg_pane_g1

0xf22e,	// (0x0005db57) cell_fshwr2_syb_bg_pane_t1

0x369c,	// (0x00051fc5) main_tmo_pane

0xd93f,	// (0x0005c268) uni_indicator_pane_g1_ParamLimits

0xd954,	// (0x0005c27d) uni_indicator_pane_g2_ParamLimits

0xd969,	// (0x0005c292) uni_indicator_pane_g3_ParamLimits

0x6324,	// (0x00054c4d) uni_indicator_pane_g4_ParamLimits

0x6324,	// (0x00054c4d) uni_indicator_pane_g4

0x6338,	// (0x00054c61) uni_indicator_pane_g5_ParamLimits

0x6338,	// (0x00054c61) uni_indicator_pane_g5

0x634c,	// (0x00054c75) uni_indicator_pane_g6_ParamLimits

0x634c,	// (0x00054c75) uni_indicator_pane_g6

0xf921,	// (0x0005e24a) uni_indicator_pane_g_ParamLimits

0xe40b,	// (0x0005cd34) popup_tmo_note_window_ParamLimits

0xe40b,	// (0x0005cd34) popup_tmo_note_window

0x2d3c,	// (0x00051665) fshwr2_bg_pane

0xa229,	// (0x00058b52) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa229,	// (0x00058b52) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb1,	// (0x0005e7da) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb1,	// (0x0005e7da) fshwr2_func_candi_cell_pane_g

0x7706,	// (0x0005602f) bg_popup_window_pane_cp01

0xa262,	// (0x00058b8b) bg_popup_window_pane_g1_cp01

0xa26b,	// (0x00058b94) bg_popup_window_pane_cp22_ParamLimits

0xa26b,	// (0x00058b94) bg_popup_window_pane_cp22

0xa279,	// (0x00058ba2) listscroll_tmo_link_pane_ParamLimits

0xa279,	// (0x00058ba2) listscroll_tmo_link_pane

0xa2b9,	// (0x00058be2) popup_tmo_note_window_g1_ParamLimits

0xa2b9,	// (0x00058be2) popup_tmo_note_window_g1

0xa2c6,	// (0x00058bef) tmo_note_info_pane_ParamLimits

0xa2c6,	// (0x00058bef) tmo_note_info_pane

0xf23d,	// (0x0005db66) list_tmo_note_info_pane_g1_ParamLimits

0xf23d,	// (0x0005db66) list_tmo_note_info_pane_g1

0xa2f7,	// (0x00058c20) list_tmo_note_info_pane_g2_ParamLimits

0xa2f7,	// (0x00058c20) list_tmo_note_info_pane_g2

0x0001,

0xfeb6,	// (0x0005e7df) list_tmo_note_info_pane_g_ParamLimits

0xfeb6,	// (0x0005e7df) list_tmo_note_info_pane_g

0xa313,	// (0x00058c3c) list_tmo_note_info_text_pane_ParamLimits

0xa313,	// (0x00058c3c) list_tmo_note_info_text_pane

0xa394,	// (0x00058cbd) list_tmo_link_pane

0xa3a1,	// (0x00058cca) scroll_pane_cp20

0xa3ae,	// (0x00058cd7) list_single_tmo_link_pane_ParamLimits

0xa3ae,	// (0x00058cd7) list_single_tmo_link_pane

0xa3be,	// (0x00058ce7) list_single_tmo_link_pane_t1

0xa3cc,	// (0x00058cf5) list_tmo_note_info_text_pane_t1_ParamLimits

0xa3cc,	// (0x00058cf5) list_tmo_note_info_text_pane_t1

0xc8f9,	// (0x0005b222) aid_size_touch_scroll_bar_cp01_ParamLimits

0xc8f9,	// (0x0005b222) aid_size_touch_scroll_bar_cp01

0xba91,	// (0x0005a3ba) aid_size_touch_slider_marker

0xb5da,	// (0x00059f03) popup_settings_window_ParamLimits

0xb5da,	// (0x00059f03) popup_settings_window

0x2564,	// (0x00050e8d) popup_candi_list_indi_window

0x4c58,	// (0x00053581) aid_touch_navi_pane_ParamLimits

0x1bc4,	// (0x000504ed) rs_clock_indi_pane

0x1bcd,	// (0x000504f6) sctrl_sk_bottom_pane_ParamLimits

0x1bde,	// (0x00050507) sctrl_sk_top_pane_ParamLimits

0x1ce4,	// (0x0005060d) popup_fep_tooltip_window

0x9c7b,	// (0x000585a4) aid_size_cell_widget_grid_ParamLimits

0xef7a,	// (0x0005d8a3) cell_ai5_widget_pane_g1_ParamLimits

0xef7a,	// (0x0005d8a3) cell_ai5_widget_pane_g1

0xefcd,	// (0x0005d8f6) cell_ai5_widget_pane_g6_ParamLimits

0xefd9,	// (0x0005d902) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe34,	// (0x0005e75d) cell_ai5_widget_pane_g_ParamLimits

0xfe34,	// (0x0005e75d) cell_ai5_widget_pane_g

0xf0dd,	// (0x0005da06) cell_ai5_widget_pane_t10_ParamLimits

0xf0dd,	// (0x0005da06) cell_ai5_widget_pane_t10

0xf0f3,	// (0x0005da1c) grid_ai5_widget_pane_ParamLimits

0x9ef1,	// (0x0005881a) cell_contacts_ai5_widget_pane_ParamLimits

0x9ef1,	// (0x0005881a) cell_contacts_ai5_widget_pane

0xa0dc,	// (0x00058a05) popup_discreet_window_t3_ParamLimits

0xa0dc,	// (0x00058a05) popup_discreet_window_t3

0xa16f,	// (0x00058a98) popup_fshwr2_char_preview_window_ParamLimits

0xa16f,	// (0x00058a98) popup_fshwr2_char_preview_window

0xf254,	// (0x0005db7d) tmo_note_info_pane_t1

0xf269,	// (0x0005db92) tmo_note_info_pane_t2

0xf280,	// (0x0005dba9) tmo_note_info_pane_t3

0xa370,	// (0x00058c99) tmo_note_info_pane_t4

0xa382,	// (0x00058cab) tmo_note_info_pane_t5

0x0004,

0xfebb,	// (0x0005e7e4) tmo_note_info_pane_t

0xa394,	// (0x00058cbd) list_tmo_link_pane_ParamLimits

0xa3a1,	// (0x00058cca) scroll_pane_cp20_ParamLimits

0x2d3c,	// (0x00051665) bg_popup_fep_char_preview_window_cp01

0xa3e5,	// (0x00058d0e) popup_fshwr2_char_preview_window_t1

0xa3f3,	// (0x00058d1c) popup_candi_list_indi_window_g1

0xa3fc,	// (0x00058d25) bg_cell_contacts_ai5_widget_pane

0xa408,	// (0x00058d31) cell_contacts_ai5_widget_pane_g1

0xa41c,	// (0x00058d45) cell_contacts_ai5_widget_pane_g2

0xa42b,	// (0x00058d54) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec6,	// (0x0005e7ef) cell_contacts_ai5_widget_pane_g

0xa43e,	// (0x00058d67) cell_contacts_ai5_widget_pane_t1

0x369c,	// (0x00051fc5) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf2fa,	// (0x0005dc23) settings_container_pane

0x42df,	// (0x00052c08) listscroll_set_pane_copy1

0x6e19,	// (0x00055742) scroll_pane_cp121_copy1

0xa4c4,	// (0x00058ded) set_content_pane_copy1

0xf306,	// (0x0005dc2f) aid_height_set_list_copy1_ParamLimits

0xf306,	// (0x0005dc2f) aid_height_set_list_copy1

0x6544,	// (0x00054e6d) aid_size_parent_copy1_ParamLimits

0x6544,	// (0x00054e6d) aid_size_parent_copy1

0xf312,	// (0x0005dc3b) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf312,	// (0x0005dc3b) button_value_adjust_pane_cp6_copy1

0x465f,	// (0x00052f88) list_highlight_pane_cp2_copy1_ParamLimits

0x465f,	// (0x00052f88) list_highlight_pane_cp2_copy1

0xf326,	// (0x0005dc4f) list_set_pane_copy1_ParamLimits

0xf326,	// (0x0005dc4f) list_set_pane_copy1

0xf295,	// (0x0005dbbe) main_pane_set_t1_copy1_ParamLimits

0xf295,	// (0x0005dbbe) main_pane_set_t1_copy1

0xf2cf,	// (0x0005dbf8) main_pane_set_t2_copy1_ParamLimits

0xf2cf,	// (0x0005dbf8) main_pane_set_t2_copy1

0xf3d3,	// (0x0005dcfc) main_pane_set_t3_copy1

0xf3e1,	// (0x0005dd0a) main_pane_set_t4_copy1

0xf2ee,	// (0x0005dc17) set_content_pane_g1_copy1_ParamLimits

0xf2ee,	// (0x0005dc17) set_content_pane_g1_copy1

0xf3ef,	// (0x0005dd18) setting_code_pane_copy1

0xa5bf,	// (0x00058ee8) setting_slider_graphic_pane_copy1

0xa5bf,	// (0x00058ee8) setting_slider_pane_copy1

0xa5bf,	// (0x00058ee8) setting_text_pane_copy1

0xa5c9,	// (0x00058ef2) setting_volume_pane_copy1

0xf3f9,	// (0x0005dd22) settings_code_pane_cp2_copy1

0xf401,	// (0x0005dd2a) settings_code_pane_cp_copy1_ParamLimits

0xf401,	// (0x0005dd2a) settings_code_pane_cp_copy1

0xf415,	// (0x0005dd3e) volume_set_pane_copy1

0xf41d,	// (0x0005dd46) volume_set_pane_g10_copy1

0xf425,	// (0x0005dd4e) volume_set_pane_g1_copy1

0xf42d,	// (0x0005dd56) volume_set_pane_g2_copy1

0xf435,	// (0x0005dd5e) volume_set_pane_g3_copy1

0xf43d,	// (0x0005dd66) volume_set_pane_g4_copy1

0xf445,	// (0x0005dd6e) volume_set_pane_g5_copy1

0xf44d,	// (0x0005dd76) volume_set_pane_g6_copy1

0xf455,	// (0x0005dd7e) volume_set_pane_g7_copy1

0xf45d,	// (0x0005dd86) volume_set_pane_g8_copy1

0xf465,	// (0x0005dd8e) volume_set_pane_g9_copy1

0x2e30,	// (0x00051759) bg_set_opt_pane_cp_copy1_ParamLimits

0x2e30,	// (0x00051759) bg_set_opt_pane_cp_copy1

0xa646,	// (0x00058f6f) setting_slider_pane_t1_copy1_ParamLimits

0xa646,	// (0x00058f6f) setting_slider_pane_t1_copy1

0xf46d,	// (0x0005dd96) setting_slider_pane_t2_copy1_ParamLimits

0xf46d,	// (0x0005dd96) setting_slider_pane_t2_copy1

0xf487,	// (0x0005ddb0) setting_slider_pane_t3_copy1_ParamLimits

0xf487,	// (0x0005ddb0) setting_slider_pane_t3_copy1

0xf49f,	// (0x0005ddc8) slider_set_pane_copy1_ParamLimits

0xf49f,	// (0x0005ddc8) slider_set_pane_copy1

0x3703,	// (0x0005202c) set_opt_bg_pane_g1_copy2

0x370b,	// (0x00052034) set_opt_bg_pane_g2_copy2

0xa6ac,	// (0x00058fd5) set_opt_bg_pane_g3_copy2

0x371b,	// (0x00052044) set_opt_bg_pane_g4_copy2

0x3723,	// (0x0005204c) set_opt_bg_pane_g5_copy2

0x372b,	// (0x00052054) set_opt_bg_pane_g6_copy2

0xf4b5,	// (0x0005ddde) set_opt_bg_pane_g7_copy2

0xa6be,	// (0x00058fe7) set_opt_bg_pane_g8_copy2

0xa6c8,	// (0x00058ff1) set_opt_bg_pane_g9_copy2

0x2400,	// (0x00050d29) aid_size_touch_slider_mark_copy1_ParamLimits

0x2400,	// (0x00050d29) aid_size_touch_slider_mark_copy1

0xa6d2,	// (0x00058ffb) slider_set_pane_g1_copy1

0x2414,	// (0x00050d3d) slider_set_pane_g2_copy1

0x15f8,	// (0x0004ff21) slider_set_pane_g3_copy1_ParamLimits

0x15f8,	// (0x0004ff21) slider_set_pane_g3_copy1

0x160c,	// (0x0004ff35) slider_set_pane_g4_copy1_ParamLimits

0x160c,	// (0x0004ff35) slider_set_pane_g4_copy1

0x1624,	// (0x0004ff4d) slider_set_pane_g5_copy1_ParamLimits

0x1624,	// (0x0004ff4d) slider_set_pane_g5_copy1

0x15f8,	// (0x0004ff21) slider_set_pane_g6_copy1_ParamLimits

0x15f8,	// (0x0004ff21) slider_set_pane_g6_copy1

0xc50c,	// (0x0005ae35) slider_set_pane_g7_copy1_ParamLimits

0xc50c,	// (0x0005ae35) slider_set_pane_g7_copy1

0x2d50,	// (0x00051679) bg_set_opt_pane_cp2_copy1

0xa6db,	// (0x00059004) setting_slider_graphic_pane_g1_copy1

0xf4bd,	// (0x0005dde6) setting_slider_graphic_pane_t1_copy1

0xf4cd,	// (0x0005ddf6) setting_slider_graphic_pane_t2_copy1

0xf4dd,	// (0x0005de06) slider_set_pane_cp_copy1

0xa714,	// (0x0005903d) input_focus_pane_cp1_copy1

0xa71d,	// (0x00059046) list_set_text_pane_copy1

0xa725,	// (0x0005904e) setting_text_pane_g1_copy1

0x05de,	// (0x0004ef07) set_text_pane_t1_copy1

0xa714,	// (0x0005903d) input_focus_pane_cp2_copy1

0xa725,	// (0x0005904e) setting_code_pane_g1_copy1

0xf4e5,	// (0x0005de0e) setting_code_pane_t1_copy1

0xcb00,	// (0x0005b429) list_set_graphic_pane_copy1

0x2d50,	// (0x00051679) bg_set_opt_pane_cp4_copy1

0xcb12,	// (0x0005b43b) list_set_graphic_pane_g1_copy1_ParamLimits

0xcb12,	// (0x0005b43b) list_set_graphic_pane_g1_copy1

0xf4f3,	// (0x0005de1c) list_set_graphic_pane_g2_copy1

0xcb2a,	// (0x0005b453) list_set_graphic_pane_t1_copy1_ParamLimits

0xcb2a,	// (0x0005b453) list_set_graphic_pane_t1_copy1

0x7706,	// (0x0005602f) rs_clock_indi_pane_g1

0xa756,	// (0x0005907f) rs_clock_indi_pane_t1

0x9fc7,	// (0x000588f0) rs_indi_pane

0xa764,	// (0x0005908d) rs_indi_pane_g1

0xa76d,	// (0x00059096) rs_indi_pane_g2

0xa776,	// (0x0005909f) rs_indi_pane_g3

0x0002,

0xfecd,	// (0x0005e7f6) rs_indi_pane_g

0x42df,	// (0x00052c08) bg_popup_preview_window_pane_cp03

0xa77f,	// (0x000590a8) popup_fep_tooltip_window_t1

0x838f,	// (0x00056cb8) popup_note2_window_g2_ParamLimits

0x838f,	// (0x00056cb8) popup_note2_window_g2

0x0001,

0xfc66,	// (0x0005e58f) popup_note2_window_g_ParamLimits

0xfc66,	// (0x0005e58f) popup_note2_window_g

0x888a,	// (0x000571b3) bg_popup_sub_pane_cp11_ParamLimits

0x8897,	// (0x000571c0) cell_ai3_links_pane_g1_ParamLimits

0x88ae,	// (0x000571d7) cell_ai3_links_pane_t1

0x05de,	// (0x0004ef07) set_text_pane_t1_copy1_ParamLimits

0x41f0,	// (0x00052b19) cell_graphic_popup_pane_cp2_ParamLimits

0x41f0,	// (0x00052b19) cell_graphic_popup_pane_cp2

0xa78d,	// (0x000590b6) cell_graphic_popup_pane_g1_cp2

0x33e7,	// (0x00051d10) cell_graphic_popup_pane_g2_cp2

0xa795,	// (0x000590be) cell_graphic_popup_pane_g3_cp2

0xa79d,	// (0x000590c6) cell_graphic_popup_pane_t2_cp2

0x33f8,	// (0x00051d21) grid_highlight_pane_cp3_cp2

0x3a46,	// (0x0005236f) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x369c,	// (0x00051fc5) main_tmo_pane_ParamLimits

0xe3ff,	// (0x0005cd28) popup_tmo_big_image_note_window

0xef6a,	// (0x0005d893) cell_ai5_widget_list_pane

0xef72,	// (0x0005d89b) cell_ai5_widget_lrg_icon_pane

0xf254,	// (0x0005db7d) tmo_note_info_pane_t1_ParamLimits

0xf269,	// (0x0005db92) tmo_note_info_pane_t2_ParamLimits

0xf280,	// (0x0005dba9) tmo_note_info_pane_t3_ParamLimits

0xa370,	// (0x00058c99) tmo_note_info_pane_t4_ParamLimits

0xa382,	// (0x00058cab) tmo_note_info_pane_t5_ParamLimits

0xfebb,	// (0x0005e7e4) tmo_note_info_pane_t_ParamLimits

0xf2fa,	// (0x0005dc23) settings_container_pane_ParamLimits

0xa70c,	// (0x00059035) indicator_popup_pane_cp5

0xa70c,	// (0x00059035) indicator_popup_pane_cp6

0xcb00,	// (0x0005b429) list_set_graphic_pane_copy1_ParamLimits

0x2d3c,	// (0x00051665) bg_popup_window_pane_cp23

0xa7ab,	// (0x000590d4) popup_tmo_big_image_note_window_g1

0xa7b5,	// (0x000590de) popup_tmo_big_image_note_window_t1

0xa7c5,	// (0x000590ee) popup_tmo_big_image_note_window_t2

0xa7d5,	// (0x000590fe) popup_tmo_big_image_note_window_t3

0x0002,

0xfed4,	// (0x0005e7fd) popup_tmo_big_image_note_window_t

0xf4fb,	// (0x0005de24) cell_ai5_widget_lrg_icon_pane_g1

0xf503,	// (0x0005de2c) cell_ai5_widget_lrg_icon_pane_t1

0xf511,	// (0x0005de3a) cell_ai5_widget_list_row_pane_ParamLimits

0xf511,	// (0x0005de3a) cell_ai5_widget_list_row_pane

0xf52a,	// (0x0005de53) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf52a,	// (0x0005de53) cell_ai5_widget_list_row_pane_g1

0xf537,	// (0x0005de60) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf537,	// (0x0005de60) cell_ai5_widget_list_row_pane_t1

0xf54f,	// (0x0005de78) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf54f,	// (0x0005de78) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfedb,	// (0x0005e804) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedb,	// (0x0005e804) cell_ai5_widget_list_row_pane_t

0x02fe,	// (0x0004ec27) main_fep_vtchi_ss_pane

0xa84b,	// (0x00059174) popup_fep_char_pre_window

0xa853,	// (0x0005917c) popup_fep_ituss_window

0xa874,	// (0x0005919d) popup_fep_vkbss_window

0xa893,	// (0x000591bc) grid_vkbss_keypad_pane_ParamLimits

0xa893,	// (0x000591bc) grid_vkbss_keypad_pane

0xa8a3,	// (0x000591cc) ituss_keypad_pane

0xa8bc,	// (0x000591e5) aid_vkbss_key_offset_ParamLimits

0xa8bc,	// (0x000591e5) aid_vkbss_key_offset

0xa8c8,	// (0x000591f1) cell_vkbss_key_pane_ParamLimits

0xa8c8,	// (0x000591f1) cell_vkbss_key_pane

0xa8de,	// (0x00059207) bg_cell_vkbss_key_g1_ParamLimits

0xa8de,	// (0x00059207) bg_cell_vkbss_key_g1

0xa8ea,	// (0x00059213) cell_vkbss_key_3p_pane_ParamLimits

0xa8ea,	// (0x00059213) cell_vkbss_key_3p_pane

0xa904,	// (0x0005922d) cell_vkbss_key_g1_ParamLimits

0xa904,	// (0x0005922d) cell_vkbss_key_g1

0xa91e,	// (0x00059247) cell_vkbss_key_t1_ParamLimits

0xa91e,	// (0x00059247) cell_vkbss_key_t1

0xa949,	// (0x00059272) cell_ituss_key_pane_ParamLimits

0xa949,	// (0x00059272) cell_ituss_key_pane

0xa959,	// (0x00059282) bg_cell_ituss_key_g1_ParamLimits

0xa959,	// (0x00059282) bg_cell_ituss_key_g1

0xa965,	// (0x0005928e) cell_ituss_key_pane_g1_ParamLimits

0xa965,	// (0x0005928e) cell_ituss_key_pane_g1

0xa971,	// (0x0005929a) cell_ituss_key_pane_g2_ParamLimits

0xa971,	// (0x0005929a) cell_ituss_key_pane_g2

0x0001,

0xfee0,	// (0x0005e809) cell_ituss_key_pane_g_ParamLimits

0xfee0,	// (0x0005e809) cell_ituss_key_pane_g

0xa98a,	// (0x000592b3) cell_ituss_key_t1_ParamLimits

0xa98a,	// (0x000592b3) cell_ituss_key_t1

0xa9b8,	// (0x000592e1) cell_ituss_key_t2_ParamLimits

0xa9b8,	// (0x000592e1) cell_ituss_key_t2

0xa9e9,	// (0x00059312) cell_ituss_key_t3_ParamLimits

0xa9e9,	// (0x00059312) cell_ituss_key_t3

0xaa1a,	// (0x00059343) cell_ituss_key_t4_ParamLimits

0xaa1a,	// (0x00059343) cell_ituss_key_t4

0x0003,

0xfee5,	// (0x0005e80e) cell_ituss_key_t_ParamLimits

0xfee5,	// (0x0005e80e) cell_ituss_key_t

0xaa4b,	// (0x00059374) cell_vkbss_key_3p_pane_g1

0xaa53,	// (0x0005937c) cell_vkbss_key_3p_pane_g2

0xaa5b,	// (0x00059384) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x0005e817) cell_vkbss_key_3p_pane_g

0x2d3c,	// (0x00051665) bg_popup_fep_char_preview_window_cp02

0xaa63,	// (0x0005938c) popup_fep_char_pre_window_t1

0xef60,	// (0x0005d889) main_ai5_sk_pane

0xa3fc,	// (0x00058d25) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa408,	// (0x00058d31) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa41c,	// (0x00058d45) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa42b,	// (0x00058d54) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec6,	// (0x0005e7ef) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa43e,	// (0x00058d67) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x369c,	// (0x00051fc5) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf561,	// (0x0005de8a) main_ai5_sk_pane_g1

0x5607,	// (0x00053f30) popup_query_code_window_g1

0xa869,	// (0x00059192) popup_fep_vkb_icf_pane

0xa87d,	// (0x000591a6) popup_fep_vtchi_icf_pane

0x369c,	// (0x00051fc5) bg_icf_pane

0xaa8a,	// (0x000593b3) list_vkb_icf_pane

0x369c,	// (0x00051fc5) bg_icf_pane_cp01

0x8ba1,	// (0x000574ca) vtchi_icf_list_pane

0xaaaa,	// (0x000593d3) list_vkb_icf_pane_t1_ParamLimits

0xaaaa,	// (0x000593d3) list_vkb_icf_pane_t1

0xaac1,	// (0x000593ea) vtchi_icf_list_pane_t1_ParamLimits

0xaac1,	// (0x000593ea) vtchi_icf_list_pane_t1

0xa853,	// (0x0005917c) popup_fep_ituss_window_ParamLimits

0xa87d,	// (0x000591a6) popup_fep_vtchi_icf_pane_ParamLimits

0xa8a3,	// (0x000591cc) ituss_keypad_pane_ParamLimits

0xa8b3,	// (0x000591dc) ituss_sks_pane

0x369c,	// (0x00051fc5) bg_icf_pane_ParamLimits

0xaa7b,	// (0x000593a4) icf_edit_indi_pane_ParamLimits

0xaa7b,	// (0x000593a4) icf_edit_indi_pane

0xaa8a,	// (0x000593b3) list_vkb_icf_pane_ParamLimits

0x369c,	// (0x00051fc5) bg_icf_pane_cp01_ParamLimits

0xaa96,	// (0x000593bf) icf_edit_indi_pane_cp01_ParamLimits

0xaa96,	// (0x000593bf) icf_edit_indi_pane_cp01

0xaaa2,	// (0x000593cb) vtchi_query_pane

0x7998,	// (0x000562c1) icf_edit_indi_pane_g1_ParamLimits

0x7998,	// (0x000562c1) icf_edit_indi_pane_g1

0xaadd,	// (0x00059406) icf_edit_indi_pane_g2_ParamLimits

0xaadd,	// (0x00059406) icf_edit_indi_pane_g2

0x0001,

0xfef5,	// (0x0005e81e) icf_edit_indi_pane_g_ParamLimits

0xfef5,	// (0x0005e81e) icf_edit_indi_pane_g

0xaae9,	// (0x00059412) icf_edit_indi_pane_t1

0xaaf7,	// (0x00059420) bg_input_focus_pane_cp042

0x35cb,	// (0x00051ef4) vtchi_button_pane

0xab00,	// (0x00059429) vtchi_query_pane_t1

0xab0e,	// (0x00059437) vtchi_query_pane_t2

0xab1c,	// (0x00059445) vtchi_query_pane_t3

0x0002,

0xfefa,	// (0x0005e823) vtchi_query_pane_t

0x2d3c,	// (0x00051665) bg_button_pane_cp13

0xab2a,	// (0x00059453) vtchi_button_pane_g1

0x90e9,	// (0x00057a12) ituss_sks_pane_g1

0xab32,	// (0x0005945b) ituss_sks_pane_g2

0x0001,

0xff01,	// (0x0005e82a) ituss_sks_pane_g

0xab3b,	// (0x00059464) ituss_sks_pane_t1

0xab49,	// (0x00059472) ituss_sks_pane_t2

0x0001,

0xff06,	// (0x0005e82f) ituss_sks_pane_t

0x7168,	// (0x00055a91) indicator_nsta_pane_cp_g1

0x7171,	// (0x00055a9a) indicator_nsta_pane_cp_g2

0x7179,	// (0x00055aa2) indicator_nsta_pane_cp_g3

0x7181,	// (0x00055aaa) indicator_nsta_pane_cp_g4

0x7189,	// (0x00055ab2) indicator_nsta_pane_cp_g5

0x7191,	// (0x00055aba) indicator_nsta_pane_cp_g6

0x0005,

0xfaa4,	// (0x0005e3cd) indicator_nsta_pane_cp_g

0xed9e,	// (0x0005d6c7) cell_graphic2_pane_t2_ParamLimits

0xed9e,	// (0x0005d6c7) cell_graphic2_pane_t2

0x0001,

0xfdbd,	// (0x0005e6e6) cell_graphic2_pane_t_ParamLimits

0xfdbd,	// (0x0005e6e6) cell_graphic2_pane_t
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large
