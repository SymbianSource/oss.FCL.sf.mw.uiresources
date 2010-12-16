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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x00052104 };

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
0xb3a9,	// (0x0005d4ad) Screen

0xb3b5,	// (0x0005d4b9) application_window_ParamLimits

0xb3b5,	// (0x0005d4b9) application_window

0xd0ea,	// (0x0005f1ee) screen_g1

0xb3ed,	// (0x0005d4f1) area_bottom_pane_ParamLimits

0xb3ed,	// (0x0005d4f1) area_bottom_pane

0xf27b,	// (0x0006137f) area_top_pane_ParamLimits

0xf27b,	// (0x0006137f) area_top_pane

0xf319,	// (0x0006141d) main_pane_ParamLimits

0xf319,	// (0x0006141d) main_pane

0xd0f4,	// (0x0005f1f8) misc_graphics

0xd2d9,	// (0x0005f3dd) battery_pane_ParamLimits

0xd2d9,	// (0x0005f3dd) battery_pane

0x56f6,	// (0x000577fa) bg_status_flat_pane_g8

0x56fe,	// (0x00057802) bg_status_flat_pane_g9

0x4adc,	// (0x00056be0) context_pane_ParamLimits

0x4adc,	// (0x00056be0) context_pane

0xd444,	// (0x0005f548) navi_pane_ParamLimits

0xd444,	// (0x0005f548) navi_pane

0xd4c2,	// (0x0005f5c6) signal_pane_ParamLimits

0xd4c2,	// (0x0005f5c6) signal_pane

0x0008,

0xf852,	// (0x00061956) bg_status_flat_pane_g

0xd552,	// (0x0005f656) status_pane_g1_ParamLimits

0xd552,	// (0x0005f656) status_pane_g1

0xd568,	// (0x0005f66c) status_pane_g2_ParamLimits

0xd568,	// (0x0005f66c) status_pane_g2

0x4d03,	// (0x00056e07) status_pane_g3_ParamLimits

0x4d03,	// (0x00056e07) status_pane_g3

0x0004,

0xf77e,	// (0x00061882) status_pane_g_ParamLimits

0xf77e,	// (0x00061882) status_pane_g

0xd574,	// (0x0005f678) title_pane_ParamLimits

0xd574,	// (0x0005f678) title_pane

0xd5d5,	// (0x0005f6d9) uni_indicator_pane_ParamLimits

0xd5d5,	// (0x0005f6d9) uni_indicator_pane

0x4944,	// (0x00056a48) bg_list_pane_ParamLimits

0x4944,	// (0x00056a48) bg_list_pane

0x3750,	// (0x00055854) find_pane

0x4f02,	// (0x00057006) listscroll_app_pane_ParamLimits

0x4f02,	// (0x00057006) listscroll_app_pane

0x4970,	// (0x00056a74) listscroll_form_pane

0x0a4c,	// (0x00052b50) listscroll_gen_pane_ParamLimits

0x0a4c,	// (0x00052b50) listscroll_gen_pane

0x0a60,	// (0x00052b64) listscroll_set_pane

0x6267,	// (0x0005836b) main_idle_act_pane

0x4640,	// (0x00056744) main_idle_trad_pane

0x4640,	// (0x00056744) main_list_empty_pane

0x4964,	// (0x00056a68) main_midp_pane

0x498a,	// (0x00056a8e) main_pane_g1_ParamLimits

0x498a,	// (0x00056a8e) main_pane_g1

0xc125,	// (0x0005e229) popup_ai_message_window_ParamLimits

0xc125,	// (0x0005e229) popup_ai_message_window

0xc1b6,	// (0x0005e2ba) popup_fep_china_uni_window_ParamLimits

0xc1b6,	// (0x0005e2ba) popup_fep_china_uni_window

0x0b80,	// (0x00052c84) popup_fep_japan_candidate_window_ParamLimits

0x0b80,	// (0x00052c84) popup_fep_japan_candidate_window

0x0ba0,	// (0x00052ca4) popup_fep_japan_predictive_window_ParamLimits

0x0ba0,	// (0x00052ca4) popup_fep_japan_predictive_window

0xc212,	// (0x0005e316) popup_find_window

0xc22f,	// (0x0005e333) popup_grid_graphic_window_ParamLimits

0xc22f,	// (0x0005e333) popup_grid_graphic_window

0x0c09,	// (0x00052d0d) popup_large_graphic_colour_window

0xc2d3,	// (0x0005e3d7) popup_menu_window_ParamLimits

0xc2d3,	// (0x0005e3d7) popup_menu_window

0xc4a5,	// (0x0005e5a9) popup_note_image_window

0xc46b,	// (0x0005e56f) popup_note_wait_window_ParamLimits

0xc46b,	// (0x0005e56f) popup_note_wait_window

0xc4bd,	// (0x0005e5c1) popup_note_window_ParamLimits

0xc4bd,	// (0x0005e5c1) popup_note_window

0xc563,	// (0x0005e667) popup_query_code_window_ParamLimits

0xc563,	// (0x0005e667) popup_query_code_window

0x0e51,	// (0x00052f55) popup_query_data_code_window_ParamLimits

0x0e51,	// (0x00052f55) popup_query_data_code_window

0xc59d,	// (0x0005e6a1) popup_query_data_window_ParamLimits

0xc59d,	// (0x0005e6a1) popup_query_data_window

0xc61f,	// (0x0005e723) popup_query_sat_info_window_ParamLimits

0xc61f,	// (0x0005e723) popup_query_sat_info_window

0xc6b6,	// (0x0005e7ba) popup_snote_single_graphic_window_ParamLimits

0xc6b6,	// (0x0005e7ba) popup_snote_single_graphic_window

0xc6b6,	// (0x0005e7ba) popup_snote_single_text_window_ParamLimits

0xc6b6,	// (0x0005e7ba) popup_snote_single_text_window

0x0ed8,	// (0x00052fdc) popup_sub_window_general

0x1008,	// (0x0005310c) popup_window_general_ParamLimits

0x1008,	// (0x0005310c) popup_window_general

0x4998,	// (0x00056a9c) power_save_pane

0xbfa6,	// (0x0005e0aa) control_pane_g1_ParamLimits

0xbfa6,	// (0x0005e0aa) control_pane_g1

0xbfcf,	// (0x0005e0d3) control_pane_g2_ParamLimits

0xbfcf,	// (0x0005e0d3) control_pane_g2

0x4907,	// (0x00056a0b) control_pane_g3_ParamLimits

0x4907,	// (0x00056a0b) control_pane_g3

0x0007,

0xf766,	// (0x0006186a) control_pane_g_ParamLimits

0xf766,	// (0x0006186a) control_pane_g

0xc010,	// (0x0005e114) control_pane_t1_ParamLimits

0xc010,	// (0x0005e114) control_pane_t1

0xc078,	// (0x0005e17c) control_pane_t2_ParamLimits

0xc078,	// (0x0005e17c) control_pane_t2

0x0002,

0xf777,	// (0x0006187b) control_pane_t_ParamLimits

0xf777,	// (0x0006187b) control_pane_t

0x482c,	// (0x00056930) navi_navi_volume_pane_cp1

0x4834,	// (0x00056938) status_small_icon_pane

0x483c,	// (0x00056940) status_small_pane_g1_ParamLimits

0x483c,	// (0x00056940) status_small_pane_g1

0x4870,	// (0x00056974) status_small_pane_g2_ParamLimits

0x4870,	// (0x00056974) status_small_pane_g2

0x487c,	// (0x00056980) status_small_pane_g3_ParamLimits

0x487c,	// (0x00056980) status_small_pane_g3

0xd1f5,	// (0x0005f2f9) status_small_pane_g4_ParamLimits

0xd1f5,	// (0x0005f2f9) status_small_pane_g4

0xd203,	// (0x0005f307) status_small_pane_g5_ParamLimits

0xd203,	// (0x0005f307) status_small_pane_g5

0x48a2,	// (0x000569a6) status_small_pane_g6_ParamLimits

0x48a2,	// (0x000569a6) status_small_pane_g6

0x0007,

0xf755,	// (0x00061859) status_small_pane_g_ParamLimits

0xf755,	// (0x00061859) status_small_pane_g

0x48d1,	// (0x000569d5) status_small_pane_t1

0xd219,	// (0x0005f31d) status_small_wait_pane_ParamLimits

0xd219,	// (0x0005f31d) status_small_wait_pane

0xbf2d,	// (0x0005e031) aid_levels_signal_ParamLimits

0xbf2d,	// (0x0005e031) aid_levels_signal

0xbf45,	// (0x0005e049) signal_pane_g1_ParamLimits

0xbf45,	// (0x0005e049) signal_pane_g1

0xd0fe,	// (0x0005f202) signal_pane_g2_ParamLimits

0xd0fe,	// (0x0005f202) signal_pane_g2

0x0003,

0xf6e6,	// (0x000617ea) signal_pane_g_ParamLimits

0xf6e6,	// (0x000617ea) signal_pane_g

0x411b,	// (0x0005621f) context_pane_g1

0xb589,	// (0x0005d68d) title_pane_g1

0xb5c0,	// (0x0005d6c4) title_pane_t1

0x2d1e,	// (0x00054e22) title_pane_t2

0x2d44,	// (0x00054e48) title_pane_t3

0x0002,

0xf530,	// (0x00061634) title_pane_t

0xd5fd,	// (0x0005f701) aid_levels_battery_ParamLimits

0xd5fd,	// (0x0005f701) aid_levels_battery

0xd619,	// (0x0005f71d) battery_pane_g1_ParamLimits

0xd619,	// (0x0005f71d) battery_pane_g1

0xd636,	// (0x0005f73a) battery_pane_g2_ParamLimits

0xd636,	// (0x0005f73a) battery_pane_g2

0x0001,

0xf789,	// (0x0006188d) battery_pane_g_ParamLimits

0xf789,	// (0x0006188d) battery_pane_g

0xd7f7,	// (0x0005f8fb) uni_indicator_pane_g1

0xd80d,	// (0x0005f911) uni_indicator_pane_g2

0xd823,	// (0x0005f927) uni_indicator_pane_g3

0x0005,

0xf8fa,	// (0x000619fe) uni_indicator_pane_g

0x44b1,	// (0x000565b5) navi_icon_pane_ParamLimits

0x44b1,	// (0x000565b5) navi_icon_pane

0x43fa,	// (0x000564fe) navi_midp_pane

0x44cd,	// (0x000565d1) navi_navi_pane

0x44d7,	// (0x000565db) navi_text_pane_ParamLimits

0x44d7,	// (0x000565db) navi_text_pane

0xd0ea,	// (0x0005f1ee) status_small_wait_pane_g1

0x3199,	// (0x0005529d) status_small_wait_pane_g2

0x0001,

0xf8f5,	// (0x000619f9) status_small_wait_pane_g

0x5d51,	// (0x00057e55) navi_navi_icon_text_pane

0x5d59,	// (0x00057e5d) navi_navi_pane_g1_ParamLimits

0x5d59,	// (0x00057e5d) navi_navi_pane_g1

0x5d6b,	// (0x00057e6f) navi_navi_pane_g2_ParamLimits

0x5d6b,	// (0x00057e6f) navi_navi_pane_g2

0x0001,

0xf8c3,	// (0x000619c7) navi_navi_pane_g_ParamLimits

0xf8c3,	// (0x000619c7) navi_navi_pane_g

0x5d7d,	// (0x00057e81) navi_navi_tabs_pane

0x5d86,	// (0x00057e8a) navi_navi_text_pane

0x5d51,	// (0x00057e55) navi_navi_volume_pane

0x5d2d,	// (0x00057e31) navi_text_pane_t1

0x5d21,	// (0x00057e25) navi_icon_pane_g1

0x5c74,	// (0x00057d78) navi_navi_text_pane_t1

0x139b,	// (0x0005349f) navi_navi_volume_pane_g1

0x13a3,	// (0x000534a7) volume_small_pane

0x5bda,	// (0x00057cde) navi_navi_icon_text_pane_g1

0x5be2,	// (0x00057ce6) navi_navi_icon_text_pane_t1

0x44cd,	// (0x000565d1) navi_tabs_2_long_pane

0x44cd,	// (0x000565d1) navi_tabs_2_pane

0x44cd,	// (0x000565d1) navi_tabs_3_long_pane

0x44cd,	// (0x000565d1) navi_tabs_3_pane

0x44cd,	// (0x000565d1) navi_tabs_4_pane

0x137b,	// (0x0005347f) tabs_2_active_pane_ParamLimits

0x137b,	// (0x0005347f) tabs_2_active_pane

0x138b,	// (0x0005348f) tabs_2_passive_pane_ParamLimits

0x138b,	// (0x0005348f) tabs_2_passive_pane

0x1349,	// (0x0005344d) tabs_3_active_pane_ParamLimits

0x1349,	// (0x0005344d) tabs_3_active_pane

0x1359,	// (0x0005345d) tabs_3_passive_pane_ParamLimits

0x1359,	// (0x0005345d) tabs_3_passive_pane

0x136a,	// (0x0005346e) tabs_3_passive_pane_cp_ParamLimits

0x136a,	// (0x0005346e) tabs_3_passive_pane_cp

0x1305,	// (0x00053409) tabs_4_active_pane_ParamLimits

0x1305,	// (0x00053409) tabs_4_active_pane

0x1316,	// (0x0005341a) tabs_4_passive_pane_ParamLimits

0x1316,	// (0x0005341a) tabs_4_passive_pane

0x1327,	// (0x0005342b) tabs_4_passive_pane_cp_ParamLimits

0x1327,	// (0x0005342b) tabs_4_passive_pane_cp

0x1338,	// (0x0005343c) tabs_4_passive_pane_cp2_ParamLimits

0x1338,	// (0x0005343c) tabs_4_passive_pane_cp2

0x12e1,	// (0x000533e5) tabs_2_long_active_pane_ParamLimits

0x12e1,	// (0x000533e5) tabs_2_long_active_pane

0x12f3,	// (0x000533f7) tabs_2_long_passive_pane_ParamLimits

0x12f3,	// (0x000533f7) tabs_2_long_passive_pane

0x12a2,	// (0x000533a6) tabs_3_long_active_pane_ParamLimits

0x12a2,	// (0x000533a6) tabs_3_long_active_pane

0x12b5,	// (0x000533b9) tabs_3_long_passive_pane_ParamLimits

0x12b5,	// (0x000533b9) tabs_3_long_passive_pane

0x12ce,	// (0x000533d2) tabs_3_long_passive_pane_cp_ParamLimits

0x12ce,	// (0x000533d2) tabs_3_long_passive_pane_cp

0x1248,	// (0x0005334c) volume_small_pane_g1

0x1251,	// (0x00053355) volume_small_pane_g2

0x125a,	// (0x0005335e) volume_small_pane_g3

0x1263,	// (0x00053367) volume_small_pane_g4

0x126c,	// (0x00053370) volume_small_pane_g5

0x1275,	// (0x00053379) volume_small_pane_g6

0x127e,	// (0x00053382) volume_small_pane_g7

0x1287,	// (0x0005338b) volume_small_pane_g8

0x1290,	// (0x00053394) volume_small_pane_g9

0x1299,	// (0x0005339d) volume_small_pane_g10

0x0009,

0xf88f,	// (0x00061993) volume_small_pane_g

0x2fd1,	// (0x000550d5) bg_active_tab_pane_cp2_ParamLimits

0x2fd1,	// (0x000550d5) bg_active_tab_pane_cp2

0x2d64,	// (0x00054e68) tabs_3_active_pane_g1

0xb64c,	// (0x0005d750) tabs_3_active_pane_t1

0x2fd1,	// (0x000550d5) bg_passive_tab_pane_cp2_ParamLimits

0x2fd1,	// (0x000550d5) bg_passive_tab_pane_cp2

0x2d64,	// (0x00054e68) tabs_3_passive_pane_g1

0xb64c,	// (0x0005d750) tabs_3_passive_pane_t1

0x2fd1,	// (0x000550d5) bg_active_tab_pane_cp3_ParamLimits

0x2fd1,	// (0x000550d5) bg_active_tab_pane_cp3

0x2d7e,	// (0x00054e82) tabs_4_active_pane_g1

0xb65e,	// (0x0005d762) tabs_4_active_pane_t1

0x2fd1,	// (0x000550d5) bg_passive_tab_pane_cp3_ParamLimits

0x2fd1,	// (0x000550d5) bg_passive_tab_pane_cp3

0x2d7e,	// (0x00054e82) tabs_4_1_passive_pane_g1

0xb65e,	// (0x0005d762) tabs_4_1_passive_pane_t1

0x4964,	// (0x00056a68) list_highlight_pane_cp2

0xd8a9,	// (0x0005f9ad) list_set_pane_ParamLimits

0xd8a9,	// (0x0005f9ad) list_set_pane

0xd943,	// (0x0005fa47) main_pane_set_t1_ParamLimits

0xd943,	// (0x0005fa47) main_pane_set_t1

0xd963,	// (0x0005fa67) main_pane_set_t2_ParamLimits

0xd963,	// (0x0005fa67) main_pane_set_t2

0xd977,	// (0x0005fa7b) main_pane_set_t3_ParamLimits

0xd977,	// (0x0005fa7b) main_pane_set_t3

0xd989,	// (0x0005fa8d) main_pane_set_t4_ParamLimits

0xd989,	// (0x0005fa8d) main_pane_set_t4

0x0003,

0xf95f,	// (0x00061a63) main_pane_set_t_ParamLimits

0xf95f,	// (0x00061a63) main_pane_set_t

0xd99b,	// (0x0005fa9f) setting_code_pane

0xd9a5,	// (0x0005faa9) setting_slider_graphic_pane

0xd9a5,	// (0x0005faa9) setting_slider_pane

0xd9a5,	// (0x0005faa9) setting_text_pane

0xd9a5,	// (0x0005faa9) setting_volume_pane

0xf496,	// (0x0006159a) volume_set_pane

0x2d56,	// (0x00054e5a) bg_set_opt_pane_cp

0xf49e,	// (0x000615a2) setting_slider_pane_t1

0xf4b7,	// (0x000615bb) setting_slider_pane_t2

0xf4d1,	// (0x000615d5) setting_slider_pane_t3

0x0002,

0xf537,	// (0x0006163b) setting_slider_pane_t

0xf4e9,	// (0x000615ed) slider_set_pane

0xd0f4,	// (0x0005f1f8) bg_set_opt_pane_cp2

0x2d98,	// (0x00054e9c) setting_slider_graphic_pane_g1

0xf4ff,	// (0x00061603) setting_slider_graphic_pane_t1

0xf50f,	// (0x00061613) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x00061642) setting_slider_graphic_pane_t

0xf51f,	// (0x00061623) slider_set_pane_cp

0xd0f4,	// (0x0005f1f8) input_focus_pane_cp1

0x624e,	// (0x00058352) list_set_text_pane

0xd0ea,	// (0x0005f1ee) setting_text_pane_g1

0xd0f4,	// (0x0005f1f8) input_focus_pane_cp2

0xd0ea,	// (0x0005f1ee) setting_code_pane_g1

0x2da1,	// (0x00054ea5) setting_code_pane_t1

0xecbe,	// (0x00060dc2) set_text_pane_t1_ParamLimits

0xecbe,	// (0x00060dc2) set_text_pane_t1

0x36d0,	// (0x000557d4) set_opt_bg_pane_g1

0x36d8,	// (0x000557dc) set_opt_bg_pane_g2

0x6228,	// (0x0005832c) set_opt_bg_pane_g3

0x36e8,	// (0x000557ec) set_opt_bg_pane_g4

0x36f0,	// (0x000557f4) set_opt_bg_pane_g5

0x36f8,	// (0x000557fc) set_opt_bg_pane_g6

0x6232,	// (0x00058336) set_opt_bg_pane_g7

0x623a,	// (0x0005833e) set_opt_bg_pane_g8

0x6244,	// (0x00058348) set_opt_bg_pane_g9

0x0008,

0xf94c,	// (0x00061a50) set_opt_bg_pane_g

0x621b,	// (0x0005831f) slider_set_pane_g1

0x1422,	// (0x00053526) slider_set_pane_g2

0x0006,

0xf93d,	// (0x00061a41) slider_set_pane_g

0x13ac,	// (0x000534b0) volume_set_pane_g1

0x13b4,	// (0x000534b8) volume_set_pane_g2

0x13bc,	// (0x000534c0) volume_set_pane_g3

0x13c4,	// (0x000534c8) volume_set_pane_g4

0x13cc,	// (0x000534d0) volume_set_pane_g5

0x13d4,	// (0x000534d8) volume_set_pane_g6

0x13dc,	// (0x000534e0) volume_set_pane_g7

0x13e4,	// (0x000534e8) volume_set_pane_g8

0x13ec,	// (0x000534f0) volume_set_pane_g9

0x13f4,	// (0x000534f8) volume_set_pane_g10

0x0009,

0xf915,	// (0x00061a19) volume_set_pane_g

0xb670,	// (0x0005d774) indicator_pane_ParamLimits

0xb670,	// (0x0005d774) indicator_pane

0xb698,	// (0x0005d79c) main_idle_pane_g2_ParamLimits

0xb698,	// (0x0005d79c) main_idle_pane_g2

0xb6d0,	// (0x0005d7d4) main_pane_idle_g1_ParamLimits

0xb6d0,	// (0x0005d7d4) main_pane_idle_g1

0x2df0,	// (0x00054ef4) popup_clock_digital_analogue_window_ParamLimits

0x2df0,	// (0x00054ef4) popup_clock_digital_analogue_window

0xb6f7,	// (0x0005d7fb) soft_indicator_pane_ParamLimits

0xb6f7,	// (0x0005d7fb) soft_indicator_pane

0xb711,	// (0x0005d815) wallpaper_pane_ParamLimits

0xb711,	// (0x0005d815) wallpaper_pane

0xd0ea,	// (0x0005f1ee) wallpaper_pane_g1

0xb723,	// (0x0005d827) indicator_pane_g1_ParamLimits

0xb723,	// (0x0005d827) indicator_pane_g1

0x664a,	// (0x0005874e) navi_navi_icon_text_pane_srt_g1

0x2e42,	// (0x00054f46) soft_indicator_pane_t1

0x2e5c,	// (0x00054f60) aid_ps_area_pane

0xb739,	// (0x0005d83d) aid_ps_clock_pane

0x2e7b,	// (0x00054f7f) aid_ps_indicator_pane

0x2e87,	// (0x00054f8b) indicator_ps_pane_ParamLimits

0x2e87,	// (0x00054f8b) indicator_ps_pane

0x2e96,	// (0x00054f9a) power_save_pane_g1_ParamLimits

0x2e96,	// (0x00054f9a) power_save_pane_g1

0x2ea2,	// (0x00054fa6) power_save_pane_g2_ParamLimits

0x2ea2,	// (0x00054fa6) power_save_pane_g2

0xf20c,	// (0x00061310) aid_navinavi_width_pane

0x2e5c,	// (0x00054f60) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x00061647) power_save_pane_g_ParamLimits

0xf543,	// (0x00061647) power_save_pane_g

0x2eb0,	// (0x00054fb4) power_save_pane_t1_ParamLimits

0x2eb0,	// (0x00054fb4) power_save_pane_t1

0xb739,	// (0x0005d83d) aid_ps_clock_pane_ParamLimits

0x2e7b,	// (0x00054f7f) aid_ps_indicator_pane_ParamLimits

0x2ec2,	// (0x00054fc6) power_save_pane_t4_ParamLimits

0x2ec2,	// (0x00054fc6) power_save_pane_t4

0x0001,

0xf548,	// (0x0006164c) power_save_pane_t_ParamLimits

0xf548,	// (0x0006164c) power_save_pane_t

0x2eec,	// (0x00054ff0) power_save_t3_ParamLimits

0x2eec,	// (0x00054ff0) power_save_t3

0x2ed7,	// (0x00054fdb) power_save_t2_ParamLimits

0x2ed7,	// (0x00054fdb) power_save_t2

0x2f01,	// (0x00055005) indicator_ps_pane_g1

0xb747,	// (0x0005d84b) ai_gene_pane_ParamLimits

0xb747,	// (0x0005d84b) ai_gene_pane

0xb75e,	// (0x0005d862) ai_links_pane_ParamLimits

0xb75e,	// (0x0005d862) ai_links_pane

0xb776,	// (0x0005d87a) indicator_pane_cp1_ParamLimits

0xb776,	// (0x0005d87a) indicator_pane_cp1

0xb785,	// (0x0005d889) main_pane_idle_g1_cp_ParamLimits

0xb785,	// (0x0005d889) main_pane_idle_g1_cp

0x2f3a,	// (0x0005503e) popup_ai_links_title_window

0xb79d,	// (0x0005d8a1) soft_indicator_pane_cp1_ParamLimits

0xb79d,	// (0x0005d8a1) soft_indicator_pane_cp1

0x601a,	// (0x0005811e) ai_links_pane_g1

0x6023,	// (0x00058127) grid_ai_links_pane

0xd7ee,	// (0x0005f8f2) ai_gene_pane_1

0x6008,	// (0x0005810c) ai_gene_pane_2

0x6011,	// (0x00058115) list_highlight_pane_cp4

0xd7ca,	// (0x0005f8ce) cell_ai_link_pane_ParamLimits

0xd7ca,	// (0x0005f8ce) cell_ai_link_pane

0x5fd9,	// (0x000580dd) cell_ai_link_pane_g1

0x3199,	// (0x0005529d) cell_ai_link_pane_g2

0x0001,

0xf8f0,	// (0x000619f4) cell_ai_link_pane_g

0xd0f4,	// (0x0005f1f8) grid_highlight_cp2

0xd0f4,	// (0x0005f1f8) bg_popup_sub_pane_cp1

0x2f5d,	// (0x00055061) popup_ai_links_title_window_t1

0x5f27,	// (0x0005802b) ai_gene_pane_1_g1_ParamLimits

0x5f27,	// (0x0005802b) ai_gene_pane_1_g1

0x5f33,	// (0x00058037) ai_gene_pane_1_g2_ParamLimits

0x5f33,	// (0x00058037) ai_gene_pane_1_g2

0x0001,

0xf8e6,	// (0x000619ea) ai_gene_pane_1_g_ParamLimits

0xf8e6,	// (0x000619ea) ai_gene_pane_1_g

0x5f40,	// (0x00058044) ai_gene_pane_1_t1_ParamLimits

0x5f40,	// (0x00058044) ai_gene_pane_1_t1

0x5f74,	// (0x00058078) grid_ai_soft_ind_pane

0x5f12,	// (0x00058016) ai_gene_pane_2_t1_ParamLimits

0x5f12,	// (0x00058016) ai_gene_pane_2_t1

0xb7b1,	// (0x0005d8b5) main_pane_empty_t1_ParamLimits

0xb7b1,	// (0x0005d8b5) main_pane_empty_t1

0xb7c9,	// (0x0005d8cd) main_pane_empty_t2_ParamLimits

0xb7c9,	// (0x0005d8cd) main_pane_empty_t2

0xb7de,	// (0x0005d8e2) main_pane_empty_t3_ParamLimits

0xb7de,	// (0x0005d8e2) main_pane_empty_t3

0xb7f0,	// (0x0005d8f4) main_pane_empty_t4_ParamLimits

0xb7f0,	// (0x0005d8f4) main_pane_empty_t4

0xb802,	// (0x0005d906) main_pane_empty_t5_ParamLimits

0xb802,	// (0x0005d906) main_pane_empty_t5

0x0004,

0xf54d,	// (0x00061651) main_pane_empty_t_ParamLimits

0xf54d,	// (0x00061651) main_pane_empty_t

0x3aa5,	// (0x00055ba9) bg_popup_window_pane_ParamLimits

0x3aa5,	// (0x00055ba9) bg_popup_window_pane

0x5c82,	// (0x00057d86) find_popup_pane_cp2_ParamLimits

0x5c82,	// (0x00057d86) find_popup_pane_cp2

0x5c8e,	// (0x00057d92) heading_pane_ParamLimits

0x5c8e,	// (0x00057d92) heading_pane

0xd0f4,	// (0x0005f1f8) bg_popup_sub_pane

0xd74b,	// (0x0005f84f) bg_popup_window_pane_g1_ParamLimits

0xd74b,	// (0x0005f84f) bg_popup_window_pane_g1

0xd75a,	// (0x0005f85e) bg_popup_window_pane_g2_ParamLimits

0xd75a,	// (0x0005f85e) bg_popup_window_pane_g2

0xd766,	// (0x0005f86a) bg_popup_window_pane_g3_ParamLimits

0xd766,	// (0x0005f86a) bg_popup_window_pane_g3

0xd772,	// (0x0005f876) bg_popup_window_pane_g4_ParamLimits

0xd772,	// (0x0005f876) bg_popup_window_pane_g4

0xd781,	// (0x0005f885) bg_popup_window_pane_g5_ParamLimits

0xd781,	// (0x0005f885) bg_popup_window_pane_g5

0xd791,	// (0x0005f895) bg_popup_window_pane_g6_ParamLimits

0xd791,	// (0x0005f895) bg_popup_window_pane_g6

0xd79d,	// (0x0005f8a1) bg_popup_window_pane_g7_ParamLimits

0xd79d,	// (0x0005f8a1) bg_popup_window_pane_g7

0xd7ac,	// (0x0005f8b0) bg_popup_window_pane_g8_ParamLimits

0xd7ac,	// (0x0005f8b0) bg_popup_window_pane_g8

0xd7bb,	// (0x0005f8bf) bg_popup_window_pane_g9_ParamLimits

0xd7bb,	// (0x0005f8bf) bg_popup_window_pane_g9

0x5c68,	// (0x00057d6c) bg_popup_window_pane_g10_ParamLimits

0x5c68,	// (0x00057d6c) bg_popup_window_pane_g10

0x0009,

0xf8ae,	// (0x000619b2) bg_popup_window_pane_g_ParamLimits

0xf8ae,	// (0x000619b2) bg_popup_window_pane_g

0x5b91,	// (0x00057c95) bg_popup_heading_pane_ParamLimits

0x5b91,	// (0x00057c95) bg_popup_heading_pane

0x1527,	// (0x0005362b) tabs_4_passive_pane_cp_srt_ParamLimits

0x1527,	// (0x0005362b) tabs_4_passive_pane_cp_srt

0x1539,	// (0x0005363d) tabs_4_passive_pane_srt_ParamLimits

0x5ba5,	// (0x00057ca9) heading_pane_g2

0x1539,	// (0x0005363d) tabs_4_passive_pane_srt

0x4f02,	// (0x00057006) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4f02,	// (0x00057006) bg_passive_tab_pane_cp3_srt

0x5bad,	// (0x00057cb1) heading_pane_t1_ParamLimits

0x5bad,	// (0x00057cb1) heading_pane_t1

0x5bc4,	// (0x00057cc8) heading_pane_t2_ParamLimits

0x5bc4,	// (0x00057cc8) heading_pane_t2

0x0001,

0xf8a9,	// (0x000619ad) heading_pane_t_ParamLimits

0xf8a9,	// (0x000619ad) heading_pane_t

0x56be,	// (0x000577c2) bg_popup_heading_pane_g1

0x576d,	// (0x00057871) bg_popup_heading_pane_g2

0x5777,	// (0x0005787b) bg_popup_heading_pane_g3

0x5781,	// (0x00057885) bg_popup_heading_pane_g4

0x578b,	// (0x0005788f) bg_popup_heading_pane_g5

0x5795,	// (0x00057899) bg_popup_heading_pane_g6

0x579d,	// (0x000578a1) bg_popup_heading_pane_g7

0x57a5,	// (0x000578a9) bg_popup_heading_pane_g8

0x57af,	// (0x000578b3) bg_popup_heading_pane_g9

0x0008,

0xf865,	// (0x00061969) bg_popup_heading_pane_g

0x4e8e,	// (0x00056f92) bg_popup_sub_pane_g1

0x4e9e,	// (0x00056fa2) bg_popup_sub_pane_g2

0x4e96,	// (0x00056f9a) bg_popup_sub_pane_g3

0x4eae,	// (0x00056fb2) bg_popup_sub_pane_g4

0x4ea6,	// (0x00056faa) bg_popup_sub_pane_g5

0x4eb6,	// (0x00056fba) bg_popup_sub_pane_g6

0x4ebe,	// (0x00056fc2) bg_popup_sub_pane_g7

0x4ece,	// (0x00056fd2) bg_popup_sub_pane_g8

0x4ec6,	// (0x00056fca) bg_popup_sub_pane_g9

0x0008,

0xf83f,	// (0x00061943) bg_popup_sub_pane_g

0x2fd1,	// (0x000550d5) bg_popup_window_pane_cp5_ParamLimits

0x2fd1,	// (0x000550d5) bg_popup_window_pane_cp5

0x2fed,	// (0x000550f1) popup_note_window_g1_ParamLimits

0x2fed,	// (0x000550f1) popup_note_window_g1

0x2ff9,	// (0x000550fd) popup_note_window_t1_ParamLimits

0x2ff9,	// (0x000550fd) popup_note_window_t1

0x300f,	// (0x00055113) popup_note_window_t2_ParamLimits

0x300f,	// (0x00055113) popup_note_window_t2

0x3025,	// (0x00055129) popup_note_window_t3_ParamLimits

0x3025,	// (0x00055129) popup_note_window_t3

0x303b,	// (0x0005513f) popup_note_window_t4_ParamLimits

0x303b,	// (0x0005513f) popup_note_window_t4

0x3063,	// (0x00055167) popup_note_window_t5_ParamLimits

0x3063,	// (0x00055167) popup_note_window_t5

0x0004,

0xf558,	// (0x0006165c) popup_note_window_t_ParamLimits

0xf558,	// (0x0006165c) popup_note_window_t

0x30ad,	// (0x000551b1) bg_popup_window_pane_cp6_ParamLimits

0x30ad,	// (0x000551b1) bg_popup_window_pane_cp6

0x563a,	// (0x0005773e) popup_note_image_window_g1_ParamLimits

0x563a,	// (0x0005773e) popup_note_image_window_g1

0x5646,	// (0x0005774a) popup_note_image_window_g2_ParamLimits

0x5646,	// (0x0005774a) popup_note_image_window_g2

0x0001,

0xf833,	// (0x00061937) popup_note_image_window_g_ParamLimits

0xf833,	// (0x00061937) popup_note_image_window_g

0x565f,	// (0x00057763) popup_note_image_window_t1_ParamLimits

0x565f,	// (0x00057763) popup_note_image_window_t1

0x5678,	// (0x0005777c) popup_note_image_window_t2_ParamLimits

0x5678,	// (0x0005777c) popup_note_image_window_t2

0x5691,	// (0x00057795) popup_note_image_window_t3_ParamLimits

0x5691,	// (0x00057795) popup_note_image_window_t3

0x0002,

0xf838,	// (0x0006193c) popup_note_image_window_t_ParamLimits

0xf838,	// (0x0006193c) popup_note_image_window_t

0x54fb,	// (0x000575ff) bg_popup_window_pane_cp7_ParamLimits

0x54fb,	// (0x000575ff) bg_popup_window_pane_cp7

0x552b,	// (0x0005762f) popup_note_wait_window_g1_ParamLimits

0x552b,	// (0x0005762f) popup_note_wait_window_g1

0x5537,	// (0x0005763b) popup_note_wait_window_g2_ParamLimits

0x5537,	// (0x0005763b) popup_note_wait_window_g2

0x0002,

0xf821,	// (0x00061925) popup_note_wait_window_g_ParamLimits

0xf821,	// (0x00061925) popup_note_wait_window_g

0x554f,	// (0x00057653) popup_note_wait_window_t1_ParamLimits

0x554f,	// (0x00057653) popup_note_wait_window_t1

0x5576,	// (0x0005767a) popup_note_wait_window_t2_ParamLimits

0x5576,	// (0x0005767a) popup_note_wait_window_t2

0x5593,	// (0x00057697) popup_note_wait_window_t3_ParamLimits

0x5593,	// (0x00057697) popup_note_wait_window_t3

0x55a6,	// (0x000576aa) popup_note_wait_window_t4_ParamLimits

0x55a6,	// (0x000576aa) popup_note_wait_window_t4

0x0004,

0xf828,	// (0x0006192c) popup_note_wait_window_t_ParamLimits

0xf828,	// (0x0006192c) popup_note_wait_window_t

0x55cb,	// (0x000576cf) wait_bar_pane_ParamLimits

0x55cb,	// (0x000576cf) wait_bar_pane

0xd0f4,	// (0x0005f1f8) wait_anim_pane

0xd0f4,	// (0x0005f1f8) wait_border_pane

0xd0ea,	// (0x0005f1ee) wait_anim_pane_g1

0xd0ea,	// (0x0005f1ee) wait_anim_pane_g2

0x0001,

0xf6e1,	// (0x000617e5) wait_anim_pane_g

0x549f,	// (0x000575a3) wait_border_pane_g1

0x54aa,	// (0x000575ae) wait_border_pane_g2

0x54b3,	// (0x000575b7) wait_border_pane_g3

0x0002,

0xf81a,	// (0x0006191e) wait_border_pane_g

0x530a,	// (0x0005740e) bg_popup_window_pane_cp16_ParamLimits

0x530a,	// (0x0005740e) bg_popup_window_pane_cp16

0x540a,	// (0x0005750e) indicator_popup_pane_cp4_ParamLimits

0x540a,	// (0x0005750e) indicator_popup_pane_cp4

0x541e,	// (0x00057522) popup_query_data_window_t1_ParamLimits

0x541e,	// (0x00057522) popup_query_data_window_t1

0x5430,	// (0x00057534) popup_query_data_window_t2_ParamLimits

0x5430,	// (0x00057534) popup_query_data_window_t2

0x5449,	// (0x0005754d) popup_query_data_window_t3_ParamLimits

0x5449,	// (0x0005754d) popup_query_data_window_t3

0x0002,

0xf813,	// (0x00061917) popup_query_data_window_t_ParamLimits

0xf813,	// (0x00061917) popup_query_data_window_t

0x5463,	// (0x00057567) query_popup_data_pane_ParamLimits

0x5463,	// (0x00057567) query_popup_data_pane

0x5477,	// (0x0005757b) query_popup_data_pane_cp1_ParamLimits

0x5477,	// (0x0005757b) query_popup_data_pane_cp1

0x530a,	// (0x0005740e) bg_popup_window_pane_cp10_ParamLimits

0x530a,	// (0x0005740e) bg_popup_window_pane_cp10

0x533c,	// (0x00057440) indicator_popup_pane_ParamLimits

0x533c,	// (0x00057440) indicator_popup_pane

0x535e,	// (0x00057462) popup_query_code_window_t1_ParamLimits

0x535e,	// (0x00057462) popup_query_code_window_t1

0x5378,	// (0x0005747c) popup_query_code_window_t2_ParamLimits

0x5378,	// (0x0005747c) popup_query_code_window_t2

0x53c1,	// (0x000574c5) popup_query_code_window_t3_ParamLimits

0x53c1,	// (0x000574c5) popup_query_code_window_t3

0x0002,

0xf80c,	// (0x00061910) popup_query_code_window_t_ParamLimits

0xf80c,	// (0x00061910) popup_query_code_window_t

0x53f0,	// (0x000574f4) query_popup_pane_ParamLimits

0x53f0,	// (0x000574f4) query_popup_pane

0x30ad,	// (0x000551b1) bg_popup_window_pane_cp15_ParamLimits

0x30ad,	// (0x000551b1) bg_popup_window_pane_cp15

0x30cb,	// (0x000551cf) indicator_popup_pane_cp1_ParamLimits

0x30cb,	// (0x000551cf) indicator_popup_pane_cp1

0x30de,	// (0x000551e2) indicator_popup_pane_cp2_ParamLimits

0x30de,	// (0x000551e2) indicator_popup_pane_cp2

0x30f1,	// (0x000551f5) popup_query_data_code_window_g1_ParamLimits

0x30f1,	// (0x000551f5) popup_query_data_code_window_g1

0x3104,	// (0x00055208) popup_query_data_code_window_t1_ParamLimits

0x3104,	// (0x00055208) popup_query_data_code_window_t1

0x3116,	// (0x0005521a) popup_query_data_code_window_t2_ParamLimits

0x3116,	// (0x0005521a) popup_query_data_code_window_t2

0x3128,	// (0x0005522c) popup_query_data_code_window_t3_ParamLimits

0x3128,	// (0x0005522c) popup_query_data_code_window_t3

0x313e,	// (0x00055242) popup_query_data_code_window_t4_ParamLimits

0x313e,	// (0x00055242) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x00061667) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x00061667) popup_query_data_code_window_t

0x1088,	// (0x0005318c) list_single_midp_graphic_pane_g3

0x3156,	// (0x0005525a) query_popup_data_pane_cp2_ParamLimits

0x3169,	// (0x0005526d) query_popup_pane_cp2_ParamLimits

0x3169,	// (0x0005526d) query_popup_pane_cp2

0xd0f4,	// (0x0005f1f8) bg_popup_window_pane_cp11

0x52ee,	// (0x000573f2) heading_pane_cp5

0x52f6,	// (0x000573fa) listscroll_popup_info_pane

0xd0f4,	// (0x0005f1f8) input_focus_pane_cp3

0x317c,	// (0x00055280) query_popup_pane_t1

0x318a,	// (0x0005528e) list_popup_info_pane_ParamLimits

0x318a,	// (0x0005528e) list_popup_info_pane

0x3199,	// (0x0005529d) listscroll_popup_info_pane_g1

0x31a1,	// (0x000552a5) scroll_pane_cp7

0x31ab,	// (0x000552af) popup_info_list_pane_t1_ParamLimits

0x31ab,	// (0x000552af) popup_info_list_pane_t1

0x31c5,	// (0x000552c9) popup_info_list_pane_t2_ParamLimits

0x31c5,	// (0x000552c9) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x00061670) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x00061670) popup_info_list_pane_t

0xd0f4,	// (0x0005f1f8) bg_popup_window_pane_cp12

0x6664,	// (0x00058768) find_popup_pane

0x2d56,	// (0x00054e5a) bg_popup_window_pane_cp3

0x31df,	// (0x000552e3) heading_pane_cp3

0x31ee,	// (0x000552f2) listscroll_popup_graphic_pane

0xd0f4,	// (0x0005f1f8) bg_popup_window_pane_cp4

0xb864,	// (0x0005d968) heading_pane_cp4

0x3258,	// (0x0005535c) listscroll_popup_colour_pane

0xb86e,	// (0x0005d972) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb86e,	// (0x0005d972) cell_large_graphic_colour_none_popup_pane

0xb882,	// (0x0005d986) grid_large_graphic_colour_popup_pane_ParamLimits

0xb882,	// (0x0005d986) grid_large_graphic_colour_popup_pane

0xb8a6,	// (0x0005d9aa) listscroll_popup_colour_pane_g1_ParamLimits

0xb8a6,	// (0x0005d9aa) listscroll_popup_colour_pane_g1

0xb8bd,	// (0x0005d9c1) listscroll_popup_colour_pane_g2_ParamLimits

0xb8bd,	// (0x0005d9c1) listscroll_popup_colour_pane_g2

0xb8d1,	// (0x0005d9d5) listscroll_popup_colour_pane_g3_ParamLimits

0xb8d1,	// (0x0005d9d5) listscroll_popup_colour_pane_g3

0xb8e1,	// (0x0005d9e5) listscroll_popup_colour_pane_g4_ParamLimits

0xb8e1,	// (0x0005d9e5) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x00061675) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x00061675) listscroll_popup_colour_pane_g

0x32e6,	// (0x000553ea) scroll_pane_cp6_ParamLimits

0x32e6,	// (0x000553ea) scroll_pane_cp6

0xb8f1,	// (0x0005d9f5) cell_large_graphic_colour_popup_pane_ParamLimits

0xb8f1,	// (0x0005d9f5) cell_large_graphic_colour_popup_pane

0x3317,	// (0x0005541b) cell_large_graphic_colour_none_popup_pane_t1

0xd0f4,	// (0x0005f1f8) grid_highlight_pane_cp5

0x3326,	// (0x0005542a) cell_large_graphic_colour_popup_pane_g1

0x332e,	// (0x00055432) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x0006167e) cell_large_graphic_colour_popup_pane_g

0x3336,	// (0x0005543a) cell_large_graphic_colour_popup_pane_g2_copy1

0x333f,	// (0x00055443) grid_highlight_pane_cp4

0x3347,	// (0x0005544b) bg_popup_window_pane_cp8_ParamLimits

0x3347,	// (0x0005544b) bg_popup_window_pane_cp8

0x3362,	// (0x00055466) popup_snote_single_text_window_g1_ParamLimits

0x3362,	// (0x00055466) popup_snote_single_text_window_g1

0x3374,	// (0x00055478) popup_snote_single_text_window_t1_ParamLimits

0x3374,	// (0x00055478) popup_snote_single_text_window_t1

0x3387,	// (0x0005548b) popup_snote_single_text_window_t2_ParamLimits

0x3387,	// (0x0005548b) popup_snote_single_text_window_t2

0x339a,	// (0x0005549e) popup_snote_single_text_window_t3_ParamLimits

0x339a,	// (0x0005549e) popup_snote_single_text_window_t3

0x33d3,	// (0x000554d7) popup_snote_single_text_window_t4_ParamLimits

0x33d3,	// (0x000554d7) popup_snote_single_text_window_t4

0x3407,	// (0x0005550b) popup_snote_single_text_window_t5_ParamLimits

0x3407,	// (0x0005550b) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x00061683) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x00061683) popup_snote_single_text_window_t

0x3436,	// (0x0005553a) bg_popup_window_pane_cp9_ParamLimits

0x3436,	// (0x0005553a) bg_popup_window_pane_cp9

0x3362,	// (0x00055466) popup_snote_single_graphic_window_g1_ParamLimits

0x3362,	// (0x00055466) popup_snote_single_graphic_window_g1

0x3444,	// (0x00055548) popup_snote_single_graphic_window_g2_ParamLimits

0x3444,	// (0x00055548) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x0006168e) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x0006168e) popup_snote_single_graphic_window_g

0x3450,	// (0x00055554) popup_snote_single_graphic_window_t1_ParamLimits

0x3450,	// (0x00055554) popup_snote_single_graphic_window_t1

0x3463,	// (0x00055567) popup_snote_single_graphic_window_t2_ParamLimits

0x3463,	// (0x00055567) popup_snote_single_graphic_window_t2

0x3476,	// (0x0005557a) popup_snote_single_graphic_window_t3_ParamLimits

0x3476,	// (0x0005557a) popup_snote_single_graphic_window_t3

0x34af,	// (0x000555b3) popup_snote_single_graphic_window_t4_ParamLimits

0x34af,	// (0x000555b3) popup_snote_single_graphic_window_t4

0x34e3,	// (0x000555e7) popup_snote_single_graphic_window_t5_ParamLimits

0x34e3,	// (0x000555e7) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x00061693) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x00061693) popup_snote_single_graphic_window_t

0x65a6,	// (0x000586aa) grid_graphic_popup_pane_ParamLimits

0x65a6,	// (0x000586aa) grid_graphic_popup_pane

0x65d0,	// (0x000586d4) listscroll_popup_graphic_pane_g1_ParamLimits

0x65d0,	// (0x000586d4) listscroll_popup_graphic_pane_g1

0xdab0,	// (0x0005fbb4) listscroll_popup_graphic_pane_g2_ParamLimits

0xdab0,	// (0x0005fbb4) listscroll_popup_graphic_pane_g2

0x0001,

0xf989,	// (0x00061a8d) listscroll_popup_graphic_pane_g_ParamLimits

0xf989,	// (0x00061a8d) listscroll_popup_graphic_pane_g

0x65f8,	// (0x000586fc) scroll_pane_cp5

0xda6b,	// (0x0005fb6f) cell_graphic_popup_pane_ParamLimits

0xda6b,	// (0x0005fb6f) cell_graphic_popup_pane

0x6515,	// (0x00058619) cell_graphic_popup_pane_g1

0x651d,	// (0x00058621) cell_graphic_popup_pane_g2

0x3336,	// (0x0005543a) cell_graphic_popup_pane_g3

0x0002,

0xf982,	// (0x00061a86) cell_graphic_popup_pane_g

0x6526,	// (0x0005862a) cell_graphic_popup_pane_t2

0x333f,	// (0x00055443) grid_highlight_pane_cp3

0x3524,	// (0x00055628) list_gen_pane_ParamLimits

0x3524,	// (0x00055628) list_gen_pane

0x3556,	// (0x0005565a) scroll_pane

0xda22,	// (0x0005fb26) bg_list_pane_g1_ParamLimits

0xda22,	// (0x0005fb26) bg_list_pane_g1

0x648a,	// (0x0005858e) bg_list_pane_g2_ParamLimits

0x648a,	// (0x0005858e) bg_list_pane_g2

0x649f,	// (0x000585a3) bg_list_pane_g3_ParamLimits

0x649f,	// (0x000585a3) bg_list_pane_g3

0x64b3,	// (0x000585b7) bg_list_pane_g4_ParamLimits

0x64b3,	// (0x000585b7) bg_list_pane_g4

0xda3f,	// (0x0005fb43) bg_list_pane_g5_ParamLimits

0xda3f,	// (0x0005fb43) bg_list_pane_g5

0x0004,

0xf977,	// (0x00061a7b) bg_list_pane_g_ParamLimits

0xf977,	// (0x00061a7b) bg_list_pane_g

0xd9d8,	// (0x0005fadc) list_double2_graphic_large_graphic_pane_ParamLimits

0xd9d8,	// (0x0005fadc) list_double2_graphic_large_graphic_pane

0xd9d8,	// (0x0005fadc) list_double2_graphic_pane_ParamLimits

0xd9d8,	// (0x0005fadc) list_double2_graphic_pane

0xd9d8,	// (0x0005fadc) list_double2_large_graphic_pane_ParamLimits

0xd9d8,	// (0x0005fadc) list_double2_large_graphic_pane

0xd9d8,	// (0x0005fadc) list_double2_pane_ParamLimits

0xd9d8,	// (0x0005fadc) list_double2_pane

0xd9d8,	// (0x0005fadc) list_double_graphic_heading_pane_ParamLimits

0xd9d8,	// (0x0005fadc) list_double_graphic_heading_pane

0xd9d8,	// (0x0005fadc) list_double_graphic_pane_ParamLimits

0xd9d8,	// (0x0005fadc) list_double_graphic_pane

0xd9d8,	// (0x0005fadc) list_double_heading_pane_ParamLimits

0xd9d8,	// (0x0005fadc) list_double_heading_pane

0xd9d8,	// (0x0005fadc) list_double_large_graphic_pane_ParamLimits

0xd9d8,	// (0x0005fadc) list_double_large_graphic_pane

0xd9d8,	// (0x0005fadc) list_double_number_pane_ParamLimits

0xd9d8,	// (0x0005fadc) list_double_number_pane

0xd9d8,	// (0x0005fadc) list_double_pane_ParamLimits

0xd9d8,	// (0x0005fadc) list_double_pane

0xd9d8,	// (0x0005fadc) list_double_time_pane_ParamLimits

0xd9d8,	// (0x0005fadc) list_double_time_pane

0xd9d8,	// (0x0005fadc) list_setting_number_pane_ParamLimits

0xd9d8,	// (0x0005fadc) list_setting_number_pane

0xd9d8,	// (0x0005fadc) list_setting_pane_ParamLimits

0xd9d8,	// (0x0005fadc) list_setting_pane

0xd9ea,	// (0x0005faee) list_single_2graphic_pane_ParamLimits

0xd9ea,	// (0x0005faee) list_single_2graphic_pane

0xd9ea,	// (0x0005faee) list_single_graphic_heading_pane_ParamLimits

0xd9ea,	// (0x0005faee) list_single_graphic_heading_pane

0xd9ea,	// (0x0005faee) list_single_graphic_pane_ParamLimits

0xd9ea,	// (0x0005faee) list_single_graphic_pane

0xd9ea,	// (0x0005faee) list_single_heading_pane_ParamLimits

0xd9ea,	// (0x0005faee) list_single_heading_pane

0xd9ea,	// (0x0005faee) list_single_large_graphic_pane_ParamLimits

0xd9ea,	// (0x0005faee) list_single_large_graphic_pane

0xd9ea,	// (0x0005faee) list_single_number_heading_pane_ParamLimits

0xd9ea,	// (0x0005faee) list_single_number_heading_pane

0xd9ea,	// (0x0005faee) list_single_number_pane_ParamLimits

0xd9ea,	// (0x0005faee) list_single_number_pane

0xd9ea,	// (0x0005faee) list_single_pane_ParamLimits

0xd9ea,	// (0x0005faee) list_single_pane

0xd0f4,	// (0x0005f1f8) list_highlight_pane_cp1

0x3a36,	// (0x00055b3a) list_single_pane_g1_ParamLimits

0x3a36,	// (0x00055b3a) list_single_pane_g1

0x358a,	// (0x0005568e) list_single_pane_g2_ParamLimits

0x358a,	// (0x0005568e) list_single_pane_g2

0x0001,

0xf5ab,	// (0x000616af) list_single_pane_g_ParamLimits

0xf5ab,	// (0x000616af) list_single_pane_g

0x14b6,	// (0x000535ba) list_single_pane_t1_ParamLimits

0x14b6,	// (0x000535ba) list_single_pane_t1

0x3a36,	// (0x00055b3a) list_single_number_pane_g1_ParamLimits

0x3a36,	// (0x00055b3a) list_single_number_pane_g1

0x358a,	// (0x0005568e) list_single_number_pane_g2_ParamLimits

0x358a,	// (0x0005568e) list_single_number_pane_g2

0x0001,

0xf5ab,	// (0x000616af) list_single_number_pane_g_ParamLimits

0xf5ab,	// (0x000616af) list_single_number_pane_g

0x104d,	// (0x00053151) list_single_number_pane_t1_ParamLimits

0x104d,	// (0x00053151) list_single_number_pane_t1

0x13fc,	// (0x00053500) list_single_number_pane_t2_ParamLimits

0x13fc,	// (0x00053500) list_single_number_pane_t2

0x0001,

0xf938,	// (0x00061a3c) list_single_number_pane_t_ParamLimits

0xf938,	// (0x00061a3c) list_single_number_pane_t

0xecd7,	// (0x00060ddb) list_single_graphic_pane_g1_ParamLimits

0xecd7,	// (0x00060ddb) list_single_graphic_pane_g1

0x3a36,	// (0x00055b3a) list_single_graphic_pane_g2_ParamLimits

0x3a36,	// (0x00055b3a) list_single_graphic_pane_g2

0x358a,	// (0x0005568e) list_single_graphic_pane_g3_ParamLimits

0x358a,	// (0x0005568e) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x0006169e) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x0006169e) list_single_graphic_pane_g

0xece3,	// (0x00060de7) list_single_graphic_pane_t1_ParamLimits

0xece3,	// (0x00060de7) list_single_graphic_pane_t1

0xecf9,	// (0x00060dfd) list_single_heading_pane_g1_ParamLimits

0xecf9,	// (0x00060dfd) list_single_heading_pane_g1

0x358a,	// (0x0005568e) list_single_heading_pane_g2_ParamLimits

0x358a,	// (0x0005568e) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x000616a5) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x000616a5) list_single_heading_pane_g

0xed0c,	// (0x00060e10) list_single_heading_pane_t1_ParamLimits

0xed0c,	// (0x00060e10) list_single_heading_pane_t1

0x3596,	// (0x0005569a) list_single_heading_pane_t2_ParamLimits

0x3596,	// (0x0005569a) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x000616aa) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x000616aa) list_single_heading_pane_t

0x3a36,	// (0x00055b3a) list_single_number_heading_pane_g1_ParamLimits

0x3a36,	// (0x00055b3a) list_single_number_heading_pane_g1

0x358a,	// (0x0005568e) list_single_number_heading_pane_g2_ParamLimits

0x358a,	// (0x0005568e) list_single_number_heading_pane_g2

0x0001,

0xf5ab,	// (0x000616af) list_single_number_heading_pane_g_ParamLimits

0xf5ab,	// (0x000616af) list_single_number_heading_pane_g

0xed22,	// (0x00060e26) list_single_number_heading_pane_t1_ParamLimits

0xed22,	// (0x00060e26) list_single_number_heading_pane_t1

0xed38,	// (0x00060e3c) list_single_number_heading_pane_t2_ParamLimits

0xed38,	// (0x00060e3c) list_single_number_heading_pane_t2

0xed4a,	// (0x00060e4e) list_single_number_heading_pane_t3_ParamLimits

0xed4a,	// (0x00060e4e) list_single_number_heading_pane_t3

0x0002,

0xf5b0,	// (0x000616b4) list_single_number_heading_pane_t_ParamLimits

0xf5b0,	// (0x000616b4) list_single_number_heading_pane_t

0xed5c,	// (0x00060e60) list_single_graphic_heading_pane_g1_ParamLimits

0xed5c,	// (0x00060e60) list_single_graphic_heading_pane_g1

0xb91a,	// (0x0005da1e) list_single_graphic_heading_pane_g4_ParamLimits

0xb91a,	// (0x0005da1e) list_single_graphic_heading_pane_g4

0x358a,	// (0x0005568e) list_single_graphic_heading_pane_g5_ParamLimits

0x358a,	// (0x0005568e) list_single_graphic_heading_pane_g5

0x0002,

0xf5b7,	// (0x000616bb) list_single_graphic_heading_pane_g_ParamLimits

0xf5b7,	// (0x000616bb) list_single_graphic_heading_pane_g

0xed22,	// (0x00060e26) list_single_graphic_heading_pane_t1_ParamLimits

0xed22,	// (0x00060e26) list_single_graphic_heading_pane_t1

0x35b9,	// (0x000556bd) list_single_graphic_heading_pane_t2_ParamLimits

0x35b9,	// (0x000556bd) list_single_graphic_heading_pane_t2

0x0001,

0xf5be,	// (0x000616c2) list_single_graphic_heading_pane_t_ParamLimits

0xf5be,	// (0x000616c2) list_single_graphic_heading_pane_t

0x37e7,	// (0x000558eb) list_single_large_graphic_pane_g1_ParamLimits

0x37e7,	// (0x000558eb) list_single_large_graphic_pane_g1

0x3a36,	// (0x00055b3a) list_single_large_graphic_pane_g2_ParamLimits

0x3a36,	// (0x00055b3a) list_single_large_graphic_pane_g2

0x358a,	// (0x0005568e) list_single_large_graphic_pane_g3_ParamLimits

0x358a,	// (0x0005568e) list_single_large_graphic_pane_g3

0x0002,

0xf5c3,	// (0x000616c7) list_single_large_graphic_pane_g_ParamLimits

0xf5c3,	// (0x000616c7) list_single_large_graphic_pane_g

0x54aa,	// (0x000575ae) wait_border_pane_g2_copy1

0xb92b,	// (0x0005da2f) list_single_large_graphic_pane_g4_cp2

0x169c,	// (0x000537a0) list_single_large_graphic_pane_t1_ParamLimits

0x169c,	// (0x000537a0) list_single_large_graphic_pane_t1

0x35fe,	// (0x00055702) list_double_pane_g1_ParamLimits

0x35fe,	// (0x00055702) list_double_pane_g1

0x360a,	// (0x0005570e) list_double_pane_g2_ParamLimits

0x360a,	// (0x0005570e) list_double_pane_g2

0x0001,

0xf5ca,	// (0x000616ce) list_double_pane_g_ParamLimits

0xf5ca,	// (0x000616ce) list_double_pane_g

0xb933,	// (0x0005da37) list_double_pane_t1_ParamLimits

0xb933,	// (0x0005da37) list_double_pane_t1

0xb949,	// (0x0005da4d) list_double_pane_t2_ParamLimits

0xb949,	// (0x0005da4d) list_double_pane_t2

0x0001,

0xf5cf,	// (0x000616d3) list_double_pane_t_ParamLimits

0xf5cf,	// (0x000616d3) list_double_pane_t

0xb95b,	// (0x0005da5f) list_double2_pane_g1_ParamLimits

0xb95b,	// (0x0005da5f) list_double2_pane_g1

0xed68,	// (0x00060e6c) list_double2_pane_g2_ParamLimits

0xed68,	// (0x00060e6c) list_double2_pane_g2

0x0001,

0xf5d4,	// (0x000616d8) list_double2_pane_g_ParamLimits

0xf5d4,	// (0x000616d8) list_double2_pane_g

0xb96c,	// (0x0005da70) list_double2_pane_t1_ParamLimits

0xb96c,	// (0x0005da70) list_double2_pane_t1

0xb982,	// (0x0005da86) list_double2_pane_t2_ParamLimits

0xb982,	// (0x0005da86) list_double2_pane_t2

0x0001,

0xf5d9,	// (0x000616dd) list_double2_pane_t_ParamLimits

0xf5d9,	// (0x000616dd) list_double2_pane_t

0x35fe,	// (0x00055702) list_double_number_pane_g1_ParamLimits

0x35fe,	// (0x00055702) list_double_number_pane_g1

0x360a,	// (0x0005570e) list_double_number_pane_g2_ParamLimits

0x360a,	// (0x0005570e) list_double_number_pane_g2

0x0001,

0xf5ca,	// (0x000616ce) list_double_number_pane_g_ParamLimits

0xf5ca,	// (0x000616ce) list_double_number_pane_g

0xb994,	// (0x0005da98) list_double_number_pane_t1_ParamLimits

0xb994,	// (0x0005da98) list_double_number_pane_t1

0xed74,	// (0x00060e78) list_double_number_pane_t2_ParamLimits

0xed74,	// (0x00060e78) list_double_number_pane_t2

0xb9a6,	// (0x0005daaa) list_double_number_pane_t3_ParamLimits

0xb9a6,	// (0x0005daaa) list_double_number_pane_t3

0x0002,

0xf5de,	// (0x000616e2) list_double_number_pane_t_ParamLimits

0xf5de,	// (0x000616e2) list_double_number_pane_t

0xed8a,	// (0x00060e8e) list_double_graphic_pane_g1_ParamLimits

0xed8a,	// (0x00060e8e) list_double_graphic_pane_g1

0xb9b8,	// (0x0005dabc) list_double_graphic_pane_g2_ParamLimits

0xb9b8,	// (0x0005dabc) list_double_graphic_pane_g2

0xb9c7,	// (0x0005dacb) list_double_graphic_pane_g3_ParamLimits

0xb9c7,	// (0x0005dacb) list_double_graphic_pane_g3

0x0003,

0xf5e5,	// (0x000616e9) list_double_graphic_pane_g_ParamLimits

0xf5e5,	// (0x000616e9) list_double_graphic_pane_g

0xb9df,	// (0x0005dae3) list_double_graphic_pane_t1_ParamLimits

0xb9df,	// (0x0005dae3) list_double_graphic_pane_t1

0xb9f5,	// (0x0005daf9) list_double_graphic_pane_t2_ParamLimits

0xb9f5,	// (0x0005daf9) list_double_graphic_pane_t2

0x0001,

0xf5ee,	// (0x000616f2) list_double_graphic_pane_t_ParamLimits

0xf5ee,	// (0x000616f2) list_double_graphic_pane_t

0xba07,	// (0x0005db0b) list_double2_graphic_pane_g1_ParamLimits

0xba07,	// (0x0005db0b) list_double2_graphic_pane_g1

0x7170,	// (0x00059274) list_double2_graphic_pane_g2_ParamLimits

0x7170,	// (0x00059274) list_double2_graphic_pane_g2

0xba13,	// (0x0005db17) list_double2_graphic_pane_g3_ParamLimits

0xba13,	// (0x0005db17) list_double2_graphic_pane_g3

0x0002,

0xf5f3,	// (0x000616f7) list_double2_graphic_pane_g_ParamLimits

0xf5f3,	// (0x000616f7) list_double2_graphic_pane_g

0xba1f,	// (0x0005db23) list_double2_graphic_pane_t1_ParamLimits

0xba1f,	// (0x0005db23) list_double2_graphic_pane_t1

0xba35,	// (0x0005db39) list_double2_graphic_pane_t2_ParamLimits

0xba35,	// (0x0005db39) list_double2_graphic_pane_t2

0x0001,

0xf5fa,	// (0x000616fe) list_double2_graphic_pane_t_ParamLimits

0xf5fa,	// (0x000616fe) list_double2_graphic_pane_t

0xba47,	// (0x0005db4b) list_double_large_graphic_pane_g1_ParamLimits

0xba47,	// (0x0005db4b) list_double_large_graphic_pane_g1

0xba66,	// (0x0005db6a) list_double_large_graphic_pane_g2_ParamLimits

0xba66,	// (0x0005db6a) list_double_large_graphic_pane_g2

0x360a,	// (0x0005570e) list_double_large_graphic_pane_g3_ParamLimits

0x360a,	// (0x0005570e) list_double_large_graphic_pane_g3

0xba7c,	// (0x0005db80) list_double_large_graphic_pane_g4_ParamLimits

0xba7c,	// (0x0005db80) list_double_large_graphic_pane_g4

0x0004,

0xf5ff,	// (0x00061703) list_double_large_graphic_pane_g_ParamLimits

0xf5ff,	// (0x00061703) list_double_large_graphic_pane_g

0xba8f,	// (0x0005db93) list_double_large_graphic_pane_t1_ParamLimits

0xba8f,	// (0x0005db93) list_double_large_graphic_pane_t1

0xbaa8,	// (0x0005dbac) list_double_large_graphic_pane_t2_ParamLimits

0xbaa8,	// (0x0005dbac) list_double_large_graphic_pane_t2

0x0001,

0xf60a,	// (0x0006170e) list_double_large_graphic_pane_t_ParamLimits

0xf60a,	// (0x0006170e) list_double_large_graphic_pane_t

0xbaba,	// (0x0005dbbe) list_double2_large_graphic_pane_g1_ParamLimits

0xbaba,	// (0x0005dbbe) list_double2_large_graphic_pane_g1

0xbac6,	// (0x0005dbca) list_double2_large_graphic_pane_g2_ParamLimits

0xbac6,	// (0x0005dbca) list_double2_large_graphic_pane_g2

0xba13,	// (0x0005db17) list_double2_large_graphic_pane_g3_ParamLimits

0xba13,	// (0x0005db17) list_double2_large_graphic_pane_g3

0x0002,

0xf60f,	// (0x00061713) list_double2_large_graphic_pane_g_ParamLimits

0xf60f,	// (0x00061713) list_double2_large_graphic_pane_g

0xbad7,	// (0x0005dbdb) list_double2_large_graphic_pane_t1_ParamLimits

0xbad7,	// (0x0005dbdb) list_double2_large_graphic_pane_t1

0xbaed,	// (0x0005dbf1) list_double2_large_graphic_pane_t2_ParamLimits

0xbaed,	// (0x0005dbf1) list_double2_large_graphic_pane_t2

0x0001,

0xf616,	// (0x0006171a) list_double2_large_graphic_pane_t_ParamLimits

0xf616,	// (0x0006171a) list_double2_large_graphic_pane_t

0xbaff,	// (0x0005dc03) list_double_heading_pane_g1_ParamLimits

0xbaff,	// (0x0005dc03) list_double_heading_pane_g1

0xbb10,	// (0x0005dc14) list_double_heading_pane_g2_ParamLimits

0xbb10,	// (0x0005dc14) list_double_heading_pane_g2

0x0001,

0xf61b,	// (0x0006171f) list_double_heading_pane_g_ParamLimits

0xf61b,	// (0x0006171f) list_double_heading_pane_g

0xbb1c,	// (0x0005dc20) list_double_heading_pane_t1_ParamLimits

0xbb1c,	// (0x0005dc20) list_double_heading_pane_t1

0xb982,	// (0x0005da86) list_double_heading_pane_t2_ParamLimits

0xb982,	// (0x0005da86) list_double_heading_pane_t2

0x0001,

0xf620,	// (0x00061724) list_double_heading_pane_t_ParamLimits

0xf620,	// (0x00061724) list_double_heading_pane_t

0xed96,	// (0x00060e9a) list_double_graphic_heading_pane_g1_ParamLimits

0xed96,	// (0x00060e9a) list_double_graphic_heading_pane_g1

0xbaff,	// (0x0005dc03) list_double_graphic_heading_pane_g2_ParamLimits

0xbaff,	// (0x0005dc03) list_double_graphic_heading_pane_g2

0xbb10,	// (0x0005dc14) list_double_graphic_heading_pane_g3_ParamLimits

0xbb10,	// (0x0005dc14) list_double_graphic_heading_pane_g3

0x0002,

0xf625,	// (0x00061729) list_double_graphic_heading_pane_g_ParamLimits

0xf625,	// (0x00061729) list_double_graphic_heading_pane_g

0xbb32,	// (0x0005dc36) list_double_graphic_heading_pane_t1_ParamLimits

0xbb32,	// (0x0005dc36) list_double_graphic_heading_pane_t1

0xba35,	// (0x0005db39) list_double_graphic_heading_pane_t2_ParamLimits

0xba35,	// (0x0005db39) list_double_graphic_heading_pane_t2

0x0001,

0xf62c,	// (0x00061730) list_double_graphic_heading_pane_t_ParamLimits

0xf62c,	// (0x00061730) list_double_graphic_heading_pane_t

0xbb48,	// (0x0005dc4c) list_double_time_pane_g1_ParamLimits

0xbb48,	// (0x0005dc4c) list_double_time_pane_g1

0xeda2,	// (0x00060ea6) list_double_time_pane_g2_ParamLimits

0xeda2,	// (0x00060ea6) list_double_time_pane_g2

0x0001,

0xf631,	// (0x00061735) list_double_time_pane_g_ParamLimits

0xf631,	// (0x00061735) list_double_time_pane_g

0xbb59,	// (0x0005dc5d) list_double_time_pane_t1_ParamLimits

0xbb59,	// (0x0005dc5d) list_double_time_pane_t1

0xbb6f,	// (0x0005dc73) list_double_time_pane_t2_ParamLimits

0xbb6f,	// (0x0005dc73) list_double_time_pane_t2

0xbb81,	// (0x0005dc85) list_double_time_pane_t3_ParamLimits

0xbb81,	// (0x0005dc85) list_double_time_pane_t3

0xbb93,	// (0x0005dc97) list_double_time_pane_t4_ParamLimits

0xbb93,	// (0x0005dc97) list_double_time_pane_t4

0x0003,

0xf636,	// (0x0006173a) list_double_time_pane_t_ParamLimits

0xf636,	// (0x0006173a) list_double_time_pane_t

0xedae,	// (0x00060eb2) list_setting_pane_g1_ParamLimits

0xedae,	// (0x00060eb2) list_setting_pane_g1

0xed68,	// (0x00060e6c) list_setting_pane_g2_ParamLimits

0xed68,	// (0x00060e6c) list_setting_pane_g2

0x0001,

0xf63f,	// (0x00061743) list_setting_pane_g_ParamLimits

0xf63f,	// (0x00061743) list_setting_pane_g

0xbba5,	// (0x0005dca9) list_setting_pane_t1_ParamLimits

0xbba5,	// (0x0005dca9) list_setting_pane_t1

0xbbbf,	// (0x0005dcc3) list_setting_pane_t2_ParamLimits

0xbbbf,	// (0x0005dcc3) list_setting_pane_t2

0x0002,

0xf644,	// (0x00061748) list_setting_pane_t_ParamLimits

0xf644,	// (0x00061748) list_setting_pane_t

0xbbfe,	// (0x0005dd02) set_value_pane_cp_ParamLimits

0xbbfe,	// (0x0005dd02) set_value_pane_cp

0x00de,	// (0x000521e2) list_setting_number_pane_g1_ParamLimits

0x00de,	// (0x000521e2) list_setting_number_pane_g1

0x00ea,	// (0x000521ee) list_setting_number_pane_g2_ParamLimits

0x00ea,	// (0x000521ee) list_setting_number_pane_g2

0x0001,

0xf64b,	// (0x0006174f) list_setting_number_pane_g_ParamLimits

0xf64b,	// (0x0006174f) list_setting_number_pane_g

0xbc0a,	// (0x0005dd0e) list_setting_number_pane_t1_ParamLimits

0xbc0a,	// (0x0005dd0e) list_setting_number_pane_t1

0xbc23,	// (0x0005dd27) list_setting_number_pane_t2_ParamLimits

0xbc23,	// (0x0005dd27) list_setting_number_pane_t2

0xbc3d,	// (0x0005dd41) list_setting_number_pane_t3_ParamLimits

0xbc3d,	// (0x0005dd41) list_setting_number_pane_t3

0x0003,

0xf650,	// (0x00061754) list_setting_number_pane_t_ParamLimits

0xf650,	// (0x00061754) list_setting_number_pane_t

0xbbfe,	// (0x0005dd02) set_value_pane_ParamLimits

0xbbfe,	// (0x0005dd02) set_value_pane

0x362b,	// (0x0005572f) bg_set_opt_pane_ParamLimits

0x362b,	// (0x0005572f) bg_set_opt_pane

0x016c,	// (0x00052270) set_value_pane_t1

0x364c,	// (0x00055750) slider_set_pane_cp3

0x3655,	// (0x00055759) volume_small_pane_cp

0x365e,	// (0x00055762) list_form_gen_pane

0x3667,	// (0x0005576b) scroll_pane_cp8

0xbc80,	// (0x0005dd84) form_field_data_pane_ParamLimits

0xbc80,	// (0x0005dd84) form_field_data_pane

0xbc99,	// (0x0005dd9d) form_field_data_wide_pane_ParamLimits

0xbc99,	// (0x0005dd9d) form_field_data_wide_pane

0xbcb9,	// (0x0005ddbd) form_field_popup_pane_ParamLimits

0xbcb9,	// (0x0005ddbd) form_field_popup_pane

0xbcd1,	// (0x0005ddd5) form_field_popup_wide_pane_ParamLimits

0xbcd1,	// (0x0005ddd5) form_field_popup_wide_pane

0x0208,	// (0x0005230c) form_field_slider_pane_ParamLimits

0x0208,	// (0x0005230c) form_field_slider_pane

0x021b,	// (0x0005231f) form_field_slider_wide_pane_ParamLimits

0x021b,	// (0x0005231f) form_field_slider_wide_pane

0x3678,	// (0x0005577c) data_form_pane

0xbcfa,	// (0x0005ddfe) form_field_data_pane_t1

0x3684,	// (0x00055788) input_focus_pane

0x0250,	// (0x00052354) data_form_wide_pane

0x026d,	// (0x00052371) form_field_data_wide_pane_t1

0x3354,	// (0x00055458) input_focus_pane_cp6

0xbd14,	// (0x0005de18) form_field_popup_pane_t1

0x3684,	// (0x00055788) input_focus_pane_cp7

0x36a6,	// (0x000557aa) list_form_pane

0x02af,	// (0x000523b3) form_field_popup_wide_pane_t1

0x3684,	// (0x00055788) input_focus_pane_cp8

0x36b2,	// (0x000557b6) list_form_wide_pane

0xbd36,	// (0x0005de3a) form_field_slider_pane_t1_ParamLimits

0xbd36,	// (0x0005de3a) form_field_slider_pane_t1

0xbd4e,	// (0x0005de52) form_field_slider_pane_t2_ParamLimits

0xbd4e,	// (0x0005de52) form_field_slider_pane_t2

0x0001,

0xf660,	// (0x00061764) form_field_slider_pane_t_ParamLimits

0xf660,	// (0x00061764) form_field_slider_pane_t

0x2fd1,	// (0x000550d5) input_focus_pane_cp9_ParamLimits

0x2fd1,	// (0x000550d5) input_focus_pane_cp9

0xbd63,	// (0x0005de67) slider_cont_pane_ParamLimits

0xbd63,	// (0x0005de67) slider_cont_pane

0x36be,	// (0x000557c2) form_field_slider_wide_pane_t1_ParamLimits

0x36be,	// (0x000557c2) form_field_slider_wide_pane_t1

0x030b,	// (0x0005240f) form_field_slider_wide_pane_t2_ParamLimits

0x030b,	// (0x0005240f) form_field_slider_wide_pane_t2

0x0001,

0xf665,	// (0x00061769) form_field_slider_wide_pane_t_ParamLimits

0xf665,	// (0x00061769) form_field_slider_wide_pane_t

0x2fd1,	// (0x000550d5) input_focus_pane_cp10_ParamLimits

0x2fd1,	// (0x000550d5) input_focus_pane_cp10

0xbd77,	// (0x0005de7b) slider_cont_pane_cp1_ParamLimits

0xbd77,	// (0x0005de7b) slider_cont_pane_cp1

0xbd8b,	// (0x0005de8f) slider_form_pane_cp

0x36d0,	// (0x000557d4) input_focus_pane_g1

0x36d8,	// (0x000557dc) input_focus_pane_g2

0x36e0,	// (0x000557e4) input_focus_pane_g3

0x36e8,	// (0x000557ec) input_focus_pane_g4

0x36f0,	// (0x000557f4) input_focus_pane_g5

0x36f8,	// (0x000557fc) input_focus_pane_g6

0x3700,	// (0x00055804) input_focus_pane_g7

0x3708,	// (0x0005580c) input_focus_pane_g8

0x3710,	// (0x00055814) input_focus_pane_g9

0xd0ea,	// (0x0005f1ee) input_focus_pane_g10

0x0009,

0xf66a,	// (0x0006176e) input_focus_pane_g

0x54b3,	// (0x000575b7) wait_border_pane_g3_copy1

0xbd93,	// (0x0005de97) data_form_pane_t1

0xd0ea,	// (0x0005f1ee) wait_anim_pane_g1_copy1

0xc85a,	// (0x0005e95e) data_form_wide_pane_t1

0xbdad,	// (0x0005deb1) list_form_graphic_pane_cp_ParamLimits

0xbdad,	// (0x0005deb1) list_form_graphic_pane_cp

0x63c3,	// (0x000584c7) slider_form_pane_g1

0x63cc,	// (0x000584d0) slider_form_pane_g2

0x0006,

0xf968,	// (0x00061a6c) slider_form_pane_g

0xbdad,	// (0x0005deb1) list_form_graphic_pane_ParamLimits

0xbdad,	// (0x0005deb1) list_form_graphic_pane

0x0389,	// (0x0005248d) list_form_graphic_pane_g1

0x0391,	// (0x00052495) list_form_graphic_pane_t1_ParamLimits

0x0391,	// (0x00052495) list_form_graphic_pane_t1

0x2d56,	// (0x00054e5a) list_highlight_pane_cp5_ParamLimits

0x2d56,	// (0x00054e5a) list_highlight_pane_cp5

0x03a6,	// (0x000524aa) find_pane_g1

0x3718,	// (0x0005581c) input_find_pane

0x03af,	// (0x000524b3) input_find_pane_g1_ParamLimits

0x03af,	// (0x000524b3) input_find_pane_g1

0x03bb,	// (0x000524bf) input_find_pane_t1_ParamLimits

0x03bb,	// (0x000524bf) input_find_pane_t1

0x03d0,	// (0x000524d4) input_find_pane_t2_ParamLimits

0x03d0,	// (0x000524d4) input_find_pane_t2

0x0001,

0xf67f,	// (0x00061783) input_find_pane_t_ParamLimits

0xf67f,	// (0x00061783) input_find_pane_t

0x3721,	// (0x00055825) input_focus_pane_cp5_ParamLimits

0x3721,	// (0x00055825) input_focus_pane_cp5

0x3a4e,	// (0x00055b52) bg_popup_window_pane_cp2_ParamLimits

0x3a4e,	// (0x00055b52) bg_popup_window_pane_cp2

0x3a5b,	// (0x00055b5f) listscroll_menu_pane_ParamLimits

0x3a5b,	// (0x00055b5f) listscroll_menu_pane

0xbdcb,	// (0x0005decf) popup_submenu_window_ParamLimits

0xbdcb,	// (0x0005decf) popup_submenu_window

0x3a93,	// (0x00055b97) find_popup_pane_g1

0x3a9b,	// (0x00055b9f) input_popup_find_pane_cp

0x3aa5,	// (0x00055ba9) input_focus_pane_cp4_ParamLimits

0x3aa5,	// (0x00055ba9) input_focus_pane_cp4

0x3abf,	// (0x00055bc3) input_popup_find_pane_t1_ParamLimits

0x3abf,	// (0x00055bc3) input_popup_find_pane_t1

0xd0f4,	// (0x0005f1f8) bg_popup_sub_pane_cp

0x3aed,	// (0x00055bf1) listscroll_popup_sub_pane

0x3af5,	// (0x00055bf9) list_submenu_pane_ParamLimits

0x3af5,	// (0x00055bf9) list_submenu_pane

0x3b06,	// (0x00055c0a) scroll_pane_cp4

0x3b0e,	// (0x00055c12) list_single_popup_submenu_pane_ParamLimits

0x3b0e,	// (0x00055c12) list_single_popup_submenu_pane

0x3b22,	// (0x00055c26) list_single_popup_submenu_pane_g1

0x3b2a,	// (0x00055c2e) list_single_popup_submenu_pane_t1_ParamLimits

0x3b2a,	// (0x00055c2e) list_single_popup_submenu_pane_t1

0x2fd1,	// (0x000550d5) bg_active_tab_pane_cp1_ParamLimits

0x2fd1,	// (0x000550d5) bg_active_tab_pane_cp1

0x3b3f,	// (0x00055c43) tabs_2_active_pane_g1

0xbe05,	// (0x0005df09) tabs_2_active_pane_t1

0x2fd1,	// (0x000550d5) bg_passive_tab_pane_cp1_ParamLimits

0x2fd1,	// (0x000550d5) bg_passive_tab_pane_cp1

0x3b3f,	// (0x00055c43) tabs_2_passive_pane_g1

0xbe05,	// (0x0005df09) tabs_2_passive_pane_t1

0x2d56,	// (0x00054e5a) bg_active_tab_pane_cp4

0xbe17,	// (0x0005df1b) tabs_2_long_active_pane_t1

0x4964,	// (0x00056a68) bg_passive_tab_pane_cp4

0x1090,	// (0x00053194) list_single_midp_graphic_pane_g4_ParamLimits

0x2d56,	// (0x00054e5a) bg_active_tab_pane_cp5

0xbe2a,	// (0x0005df2e) tabs_3_long_active_pane_t1

0x4964,	// (0x00056a68) bg_passive_tab_pane_cp5

0x1090,	// (0x00053194) list_single_midp_graphic_pane_g4

0x2d56,	// (0x00054e5a) bg_popup_window_pane_cp13_ParamLimits

0x2d56,	// (0x00054e5a) bg_popup_window_pane_cp13

0x3ba1,	// (0x00055ca5) listscroll_popup_fast_pane_ParamLimits

0x3ba1,	// (0x00055ca5) listscroll_popup_fast_pane

0x3bb0,	// (0x00055cb4) grid_popup_fast_pane_ParamLimits

0x3bb0,	// (0x00055cb4) grid_popup_fast_pane

0x3bc2,	// (0x00055cc6) scroll_pane_cp9_ParamLimits

0x3bc2,	// (0x00055cc6) scroll_pane_cp9

0x7ce8,	// (0x00059dec) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7ce8,	// (0x00059dec) list_single_graphic_hl_pane_t1_cp2

0x3be6,	// (0x00055cea) input_focus_pane_cp20_ParamLimits

0x3be6,	// (0x00055cea) input_focus_pane_cp20

0x3bf4,	// (0x00055cf8) query_popup_data_pane_t1_ParamLimits

0x3bf4,	// (0x00055cf8) query_popup_data_pane_t1

0x3c07,	// (0x00055d0b) query_popup_data_pane_t2_ParamLimits

0x3c07,	// (0x00055d0b) query_popup_data_pane_t2

0x3c4d,	// (0x00055d51) query_popup_data_pane_t3_ParamLimits

0x3c4d,	// (0x00055d51) query_popup_data_pane_t3

0x3c8e,	// (0x00055d92) query_popup_data_pane_t4_ParamLimits

0x3c8e,	// (0x00055d92) query_popup_data_pane_t4

0x3cca,	// (0x00055dce) query_popup_data_pane_t5_ParamLimits

0x3cca,	// (0x00055dce) query_popup_data_pane_t5

0x0004,

0xf684,	// (0x00061788) query_popup_data_pane_t_ParamLimits

0xf684,	// (0x00061788) query_popup_data_pane_t

0x36d0,	// (0x000557d4) bg_set_opt_pane_g1

0x36d8,	// (0x000557dc) bg_set_opt_pane_g2

0x36e0,	// (0x000557e4) bg_set_opt_pane_g3

0x36e8,	// (0x000557ec) bg_set_opt_pane_g4

0x36f0,	// (0x000557f4) bg_set_opt_pane_g5

0x36f8,	// (0x000557fc) bg_set_opt_pane_g6

0x3700,	// (0x00055804) bg_set_opt_pane_g7

0x3708,	// (0x0005580c) bg_set_opt_pane_g8

0x3710,	// (0x00055814) bg_set_opt_pane_g9

0x0008,

0xf68f,	// (0x00061793) bg_set_opt_pane_g

0x06f0,	// (0x000527f4) control_top_pane_stacon_ParamLimits

0x06f0,	// (0x000527f4) control_top_pane_stacon

0x0743,	// (0x00052847) signal_pane_stacon_ParamLimits

0x0743,	// (0x00052847) signal_pane_stacon

0x42d5,	// (0x000563d9) stacon_top_pane_g1_ParamLimits

0x42d5,	// (0x000563d9) stacon_top_pane_g1

0x0768,	// (0x0005286c) title_pane_stacon_ParamLimits

0x0768,	// (0x0005286c) title_pane_stacon

0x0792,	// (0x00052896) uni_indicator_pane_stacon_ParamLimits

0x0792,	// (0x00052896) uni_indicator_pane_stacon

0x07a7,	// (0x000528ab) battery_pane_stacon_ParamLimits

0x07a7,	// (0x000528ab) battery_pane_stacon

0x07eb,	// (0x000528ef) control_bottom_pane_stacon_ParamLimits

0x07eb,	// (0x000528ef) control_bottom_pane_stacon

0x080e,	// (0x00052912) navi_pane_stacon_ParamLimits

0x080e,	// (0x00052912) navi_pane_stacon

0x42f7,	// (0x000563fb) stacon_bottom_pane_g1_ParamLimits

0x42f7,	// (0x000563fb) stacon_bottom_pane_g1

0x03e5,	// (0x000524e9) aid_levels_signal_lsc_ParamLimits

0x03e5,	// (0x000524e9) aid_levels_signal_lsc

0x03fb,	// (0x000524ff) signal_pane_stacon_g1_ParamLimits

0x03fb,	// (0x000524ff) signal_pane_stacon_g1

0x040f,	// (0x00052513) signal_pane_stacon_g2_ParamLimits

0x040f,	// (0x00052513) signal_pane_stacon_g2

0x0001,

0xf6a2,	// (0x000617a6) signal_pane_stacon_g_ParamLimits

0xf6a2,	// (0x000617a6) signal_pane_stacon_g

0x0444,	// (0x00052548) title_pane_stacon_t1_ParamLimits

0x0444,	// (0x00052548) title_pane_stacon_t1

0x3d0e,	// (0x00055e12) uni_indicator_pane_stacon_g1

0x3d18,	// (0x00055e1c) uni_indicator_pane_stacon_g2

0x3d22,	// (0x00055e26) uni_indicator_pane_stacon_g3

0x3d2c,	// (0x00055e30) uni_indicator_pane_stacon_g4

0x0003,

0xf6ae,	// (0x000617b2) uni_indicator_pane_stacon_g

0x0469,	// (0x0005256d) control_top_pane_stacon_g1

0x0471,	// (0x00052575) control_top_pane_stacon_t1_ParamLimits

0x0471,	// (0x00052575) control_top_pane_stacon_t1

0x04a8,	// (0x000525ac) aid_levels_battery_lsc_ParamLimits

0x04a8,	// (0x000525ac) aid_levels_battery_lsc

0x04bf,	// (0x000525c3) battery_pane_stacon_g1_ParamLimits

0x04bf,	// (0x000525c3) battery_pane_stacon_g1

0x04d2,	// (0x000525d6) battery_pane_stacon_g2_ParamLimits

0x04d2,	// (0x000525d6) battery_pane_stacon_g2

0x0001,

0xf6b7,	// (0x000617bb) battery_pane_stacon_g_ParamLimits

0xf6b7,	// (0x000617bb) battery_pane_stacon_g

0x0510,	// (0x00052614) navi_icon_pane_stacon

0x0524,	// (0x00052628) navi_navi_pane_stacon

0x0510,	// (0x00052614) navi_text_pane_stacon

0x0469,	// (0x0005256d) control_bottom_pane_stacon_g1

0x0538,	// (0x0005263c) control_bottom_pane_stacon_t1_ParamLimits

0x0538,	// (0x0005263c) control_bottom_pane_stacon_t1

0xbe3c,	// (0x0005df40) grid_app_pane_ParamLimits

0xbe3c,	// (0x0005df40) grid_app_pane

0xbe74,	// (0x0005df78) scroll_pane_cp15_ParamLimits

0xbe74,	// (0x0005df78) scroll_pane_cp15

0xbe89,	// (0x0005df8d) cell_app_pane_ParamLimits

0xbe89,	// (0x0005df8d) cell_app_pane

0xbece,	// (0x0005dfd2) cell_app_pane_g1_ParamLimits

0xbece,	// (0x0005dfd2) cell_app_pane_g1

0x3dd1,	// (0x00055ed5) cell_app_pane_g2_ParamLimits

0x3dd1,	// (0x00055ed5) cell_app_pane_g2

0x0001,

0xf6bc,	// (0x000617c0) cell_app_pane_g_ParamLimits

0xf6bc,	// (0x000617c0) cell_app_pane_g

0xbef2,	// (0x0005dff6) cell_app_pane_t1_ParamLimits

0xbef2,	// (0x0005dff6) cell_app_pane_t1

0x3df4,	// (0x00055ef8) grid_highlight_pane_ParamLimits

0x3df4,	// (0x00055ef8) grid_highlight_pane

0x36d0,	// (0x000557d4) cell_highlight_pane_g1

0x36d8,	// (0x000557dc) cell_highlight_pane_g2

0x36e0,	// (0x000557e4) cell_highlight_pane_g3

0x36e8,	// (0x000557ec) cell_highlight_pane_g4

0x36f0,	// (0x000557f4) cell_highlight_pane_g5

0x36f8,	// (0x000557fc) cell_highlight_pane_g6

0x3700,	// (0x00055804) cell_highlight_pane_g7

0x3708,	// (0x0005580c) cell_highlight_pane_g8

0x3710,	// (0x00055814) cell_highlight_pane_g9

0xd0ea,	// (0x0005f1ee) cell_highlight_pane_g10

0x0009,

0xf66a,	// (0x0006176e) cell_highlight_pane_g

0x3e05,	// (0x00055f09) bg_scroll_pane

0x0582,	// (0x00052686) scroll_handle_pane

0x3e4c,	// (0x00055f50) scroll_bg_pane_g1

0x3e61,	// (0x00055f65) scroll_bg_pane_g2

0x3e79,	// (0x00055f7d) scroll_bg_pane_g3

0x0002,

0xf6c1,	// (0x000617c5) scroll_bg_pane_g

0x3e8e,	// (0x00055f92) scroll_handle_focus_pane_ParamLimits

0x3e8e,	// (0x00055f92) scroll_handle_focus_pane

0x3e4c,	// (0x00055f50) scroll_handle_pane_g1

0x3e9b,	// (0x00055f9f) scroll_handle_pane_g2

0x3e79,	// (0x00055f7d) scroll_handle_pane_g3

0x0002,

0xf6c8,	// (0x000617cc) scroll_handle_pane_g

0x3aa5,	// (0x00055ba9) bg_popup_sub_pane_cp21_ParamLimits

0x3aa5,	// (0x00055ba9) bg_popup_sub_pane_cp21

0x3eaf,	// (0x00055fb3) popup_fep_japan_predictive_window_t1_ParamLimits

0x3eaf,	// (0x00055fb3) popup_fep_japan_predictive_window_t1

0x3ec9,	// (0x00055fcd) popup_fep_japan_predictive_window_t2_ParamLimits

0x3ec9,	// (0x00055fcd) popup_fep_japan_predictive_window_t2

0x3efc,	// (0x00056000) popup_fep_japan_predictive_window_t3_ParamLimits

0x3efc,	// (0x00056000) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cf,	// (0x000617d3) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cf,	// (0x000617d3) popup_fep_japan_predictive_window_t

0xd0f4,	// (0x0005f1f8) bg_popup_sub_pane_cp23

0x3f33,	// (0x00056037) listscroll_japin_cand_pane

0x3f3b,	// (0x0005603f) popup_fep_japan_candidate_window_t1

0x3f49,	// (0x0005604d) candidate_pane_ParamLimits

0x3f49,	// (0x0005604d) candidate_pane

0x3f5b,	// (0x0005605f) scroll_pane_cp30

0x3f63,	// (0x00056067) list_single_popup_jap_candidate_pane_ParamLimits

0x3f63,	// (0x00056067) list_single_popup_jap_candidate_pane

0xd0f4,	// (0x0005f1f8) list_highlight_pane_cp30

0x3f78,	// (0x0005607c) list_single_popup_jap_candidate_pane_t1

0x3f87,	// (0x0005608b) level_1_signal

0x3f99,	// (0x0005609d) level_2_signal

0x3fac,	// (0x000560b0) level_3_signal

0x3fbf,	// (0x000560c3) level_4_signal

0x3fd2,	// (0x000560d6) level_5_signal

0x3fe5,	// (0x000560e9) level_6_signal

0x3ff8,	// (0x000560fc) level_7_signal

0x3f87,	// (0x0005608b) level_1_battery

0x3f99,	// (0x0005609d) level_2_battery

0x3fac,	// (0x000560b0) level_3_battery

0x3fbf,	// (0x000560c3) level_4_battery

0x3fd2,	// (0x000560d6) level_5_battery

0x3fe5,	// (0x000560e9) level_6_battery

0x3ff8,	// (0x000560fc) level_7_battery

0x4023,	// (0x00056127) list_menu_pane_ParamLimits

0x4023,	// (0x00056127) list_menu_pane

0x4039,	// (0x0005613d) scroll_pane_cp25_ParamLimits

0x4039,	// (0x0005613d) scroll_pane_cp25

0x4052,	// (0x00056156) list_double2_graphic_pane_cp2_ParamLimits

0x4052,	// (0x00056156) list_double2_graphic_pane_cp2

0x4052,	// (0x00056156) list_double2_large_graphic_pane_cp2_ParamLimits

0x4052,	// (0x00056156) list_double2_large_graphic_pane_cp2

0x4052,	// (0x00056156) list_double2_pane_cp2_ParamLimits

0x4052,	// (0x00056156) list_double2_pane_cp2

0x4052,	// (0x00056156) list_double_graphic_pane_cp2_ParamLimits

0x4052,	// (0x00056156) list_double_graphic_pane_cp2

0x4052,	// (0x00056156) list_double_large_graphic_pane_cp2_ParamLimits

0x4052,	// (0x00056156) list_double_large_graphic_pane_cp2

0x4052,	// (0x00056156) list_double_number_pane_cp2_ParamLimits

0x4052,	// (0x00056156) list_double_number_pane_cp2

0x4052,	// (0x00056156) list_double_pane_cp2_ParamLimits

0x4052,	// (0x00056156) list_double_pane_cp2

0xbf09,	// (0x0005e00d) list_single_2graphic_pane_cp2_ParamLimits

0xbf09,	// (0x0005e00d) list_single_2graphic_pane_cp2

0xbf09,	// (0x0005e00d) list_single_graphic_heading_pane_cp2_ParamLimits

0xbf09,	// (0x0005e00d) list_single_graphic_heading_pane_cp2

0xbf09,	// (0x0005e00d) list_single_graphic_pane_cp2_ParamLimits

0xbf09,	// (0x0005e00d) list_single_graphic_pane_cp2

0xbf09,	// (0x0005e00d) list_single_heading_pane_cp2_ParamLimits

0xbf09,	// (0x0005e00d) list_single_heading_pane_cp2

0x408f,	// (0x00056193) list_single_large_graphic_pane_cp2_ParamLimits

0x408f,	// (0x00056193) list_single_large_graphic_pane_cp2

0xbf09,	// (0x0005e00d) list_single_number_heading_pane_cp2_ParamLimits

0xbf09,	// (0x0005e00d) list_single_number_heading_pane_cp2

0xbf09,	// (0x0005e00d) list_single_number_pane_cp2_ParamLimits

0xbf09,	// (0x0005e00d) list_single_number_pane_cp2

0xbf1b,	// (0x0005e01f) list_single_pane_cp2_ParamLimits

0xbf1b,	// (0x0005e01f) list_single_pane_cp2

0x4124,	// (0x00056228) bg_popup_sub_pane_cp22

0x0634,	// (0x00052738) popup_side_volume_key_window_g1

0x065e,	// (0x00052762) popup_side_volume_key_window_t1

0x067a,	// (0x0005277e) volume_small_pane_cp1

0x2fd1,	// (0x000550d5) bg_popup_sub_pane_cp24_ParamLimits

0x2fd1,	// (0x000550d5) bg_popup_sub_pane_cp24

0x413a,	// (0x0005623e) fep_china_uni_candidate_pane_ParamLimits

0x413a,	// (0x0005623e) fep_china_uni_candidate_pane

0x414e,	// (0x00056252) fep_china_uni_entry_pane

0x415e,	// (0x00056262) popup_fep_china_uni_window_g1

0x417a,	// (0x0005627e) fep_china_uni_entry_pane_g1

0x4182,	// (0x00056286) fep_china_uni_entry_pane_g2

0x0001,

0xf700,	// (0x00061804) fep_china_uni_entry_pane_g

0x418a,	// (0x0005628e) fep_entry_item_pane

0x4194,	// (0x00056298) fep_candidate_item_pane

0x419c,	// (0x000562a0) fep_china_uni_candidate_pane_g1

0x41a4,	// (0x000562a8) fep_china_uni_candidate_pane_g2

0x41ac,	// (0x000562b0) fep_china_uni_candidate_pane_g3

0x41b4,	// (0x000562b8) fep_china_uni_candidate_pane_g4

0x0003,

0xf705,	// (0x00061809) fep_china_uni_candidate_pane_g

0xd0ea,	// (0x0005f1ee) fep_entry_item_pane_g1

0x41bc,	// (0x000562c0) fep_entry_item_pane_t1_ParamLimits

0x41bc,	// (0x000562c0) fep_entry_item_pane_t1

0x41d2,	// (0x000562d6) fep_candidate_item_pane_t1_ParamLimits

0x41d2,	// (0x000562d6) fep_candidate_item_pane_t1

0x41e7,	// (0x000562eb) fep_candidate_item_pane_t2_ParamLimits

0x41e7,	// (0x000562eb) fep_candidate_item_pane_t2

0x0001,

0xf70e,	// (0x00061812) fep_candidate_item_pane_t_ParamLimits

0xf70e,	// (0x00061812) fep_candidate_item_pane_t

0x2d56,	// (0x00054e5a) list_highlight_pane_cp31_ParamLimits

0x2d56,	// (0x00054e5a) list_highlight_pane_cp31

0x41f9,	// (0x000562fd) level_1_signal_lsc

0x4202,	// (0x00056306) level_2_signal_lsc

0x420b,	// (0x0005630f) level_3_signal_lsc

0x4214,	// (0x00056318) level_4_signal_lsc

0x421d,	// (0x00056321) level_5_signal_lsc

0x4226,	// (0x0005632a) level_6_signal_lsc

0x422f,	// (0x00056333) level_7_signal_lsc

0x422f,	// (0x00056333) level_1_battery_lsc

0x4238,	// (0x0005633c) level_2_battery_lsc

0x4241,	// (0x00056345) level_3_battery_lsc

0x424a,	// (0x0005634e) level_4_battery_lsc

0x4253,	// (0x00056357) level_5_battery_lsc

0x425c,	// (0x00056360) level_6_battery_lsc

0x41f9,	// (0x000562fd) level_7_battery_lsc

0x4265,	// (0x00056369) scroll_handle_focus_pane_g1

0x426e,	// (0x00056372) scroll_handle_focus_pane_g2

0x4277,	// (0x0005637b) scroll_handle_focus_pane_g3

0x0002,

0xf713,	// (0x00061817) scroll_handle_focus_pane_g

0x0682,	// (0x00052786) list_single_2graphic_pane_g1_ParamLimits

0x0682,	// (0x00052786) list_single_2graphic_pane_g1

0xb91a,	// (0x0005da1e) list_single_2graphic_pane_g2_ParamLimits

0xb91a,	// (0x0005da1e) list_single_2graphic_pane_g2

0x358a,	// (0x0005568e) list_single_2graphic_pane_g3_ParamLimits

0x358a,	// (0x0005568e) list_single_2graphic_pane_g3

0x068e,	// (0x00052792) list_single_2graphic_pane_g4_ParamLimits

0x068e,	// (0x00052792) list_single_2graphic_pane_g4

0x0003,

0xf71a,	// (0x0006181e) list_single_2graphic_pane_g_ParamLimits

0xf71a,	// (0x0006181e) list_single_2graphic_pane_g

0x069a,	// (0x0005279e) list_single_2graphic_pane_t1_ParamLimits

0x069a,	// (0x0005279e) list_single_2graphic_pane_t1

0xbf60,	// (0x0005e064) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbf60,	// (0x0005e064) list_double2_graphic_large_graphic_pane_g1

0xbac6,	// (0x0005dbca) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xbac6,	// (0x0005dbca) list_double2_graphic_large_graphic_pane_g2

0xba13,	// (0x0005db17) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xba13,	// (0x0005db17) list_double2_graphic_large_graphic_pane_g3

0xbf72,	// (0x0005e076) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbf72,	// (0x0005e076) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf723,	// (0x00061827) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf723,	// (0x00061827) list_double2_graphic_large_graphic_pane_g

0xbf7e,	// (0x0005e082) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbf7e,	// (0x0005e082) list_double2_graphic_large_graphic_pane_t1

0xbf94,	// (0x0005e098) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbf94,	// (0x0005e098) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72c,	// (0x00061830) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72c,	// (0x00061830) list_double2_graphic_large_graphic_pane_t

0x43c2,	// (0x000564c6) popup_fast_swap_window_ParamLimits

0x43c2,	// (0x000564c6) popup_fast_swap_window

0x43de,	// (0x000564e2) popup_side_volume_key_window

0x43fa,	// (0x000564fe) stacon_top_pane

0x4404,	// (0x00056508) status_pane_ParamLimits

0x4404,	// (0x00056508) status_pane

0xd0e0,	// (0x0005f1e4) status_small_pane

0xd0f4,	// (0x0005f1f8) control_pane

0xd0f4,	// (0x0005f1f8) stacon_bottom_pane

0x3667,	// (0x0005576b) scroll_pane_cp121

0x365e,	// (0x00055762) set_content_pane

0x4280,	// (0x00056384) bg_active_tab_pane_g1_cp1

0x4289,	// (0x0005638d) bg_active_tab_pane_g2_cp1

0x4292,	// (0x00056396) bg_active_tab_pane_g3_cp1

0x4280,	// (0x00056384) bg_passive_tab_pane_g1_cp1

0x4289,	// (0x0005638d) bg_passive_tab_pane_g2_cp1

0x4292,	// (0x00056396) bg_passive_tab_pane_g3_cp1

0x429b,	// (0x0005639f) bg_active_tab_pane_g1_cp2

0x4289,	// (0x0005638d) bg_active_tab_pane_g2_cp2

0x42a4,	// (0x000563a8) bg_active_tab_pane_g3_cp2

0x429b,	// (0x0005639f) bg_passive_tab_pane_g1_cp2

0x4289,	// (0x0005638d) bg_passive_tab_pane_g2_cp2

0x42a4,	// (0x000563a8) bg_passive_tab_pane_g3_cp2

0x42ad,	// (0x000563b1) bg_active_tab_pane_g1_cp3

0x4289,	// (0x0005638d) bg_active_tab_pane_g2_cp3

0x42b6,	// (0x000563ba) bg_active_tab_pane_g3_cp3

0x42ad,	// (0x000563b1) bg_passive_tab_pane_g1_cp3

0x4289,	// (0x0005638d) bg_passive_tab_pane_g2_cp3

0x42b6,	// (0x000563ba) bg_passive_tab_pane_g3_cp3

0x42bf,	// (0x000563c3) bg_active_tab_pane_g1_cp4

0x4289,	// (0x0005638d) bg_active_tab_pane_g2_cp4

0x42ca,	// (0x000563ce) bg_active_tab_pane_g3_cp4

0x42bf,	// (0x000563c3) bg_passive_tab_pane_g1_cp4

0x4289,	// (0x0005638d) bg_passive_tab_pane_g2_cp4

0x42ca,	// (0x000563ce) bg_passive_tab_pane_g3_cp4

0x4313,	// (0x00056417) bg_active_tab_pane_g1_cp5

0x4289,	// (0x0005638d) bg_active_tab_pane_g2_cp5

0x431c,	// (0x00056420) bg_active_tab_pane_g3_cp5

0x4313,	// (0x00056417) bg_passive_tab_pane_g1_cp5

0x4289,	// (0x0005638d) bg_passive_tab_pane_g2_cp5

0x431c,	// (0x00056420) bg_passive_tab_pane_g3_cp5

0x69b8,	// (0x00058abc) list_set_graphic_pane_ParamLimits

0x69b8,	// (0x00058abc) list_set_graphic_pane

0xd0f4,	// (0x0005f1f8) bg_set_opt_pane_cp4

0x4345,	// (0x00056449) list_set_graphic_pane_g1_ParamLimits

0x4345,	// (0x00056449) list_set_graphic_pane_g1

0x4351,	// (0x00056455) list_set_graphic_pane_g2_ParamLimits

0x4351,	// (0x00056455) list_set_graphic_pane_g2

0x0001,

0xf731,	// (0x00061835) list_set_graphic_pane_g_ParamLimits

0xf731,	// (0x00061835) list_set_graphic_pane_g

0x0009,

0xfaa6,	// (0x00061baa) volume_small_pane_cp_g

0x4375,	// (0x00056479) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4375,	// (0x00056479) list_double2_large_graphic_pane_g1_cp2

0x4381,	// (0x00056485) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4381,	// (0x00056485) list_double2_large_graphic_pane_g2_cp2

0x4392,	// (0x00056496) list_double2_large_graphic_pane_g3_cp2

0x439a,	// (0x0005649e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x439a,	// (0x0005649e) list_double2_large_graphic_pane_t1_cp2

0x43b0,	// (0x000564b4) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x43b0,	// (0x000564b4) list_double2_large_graphic_pane_t2_cp2

0x5f86,	// (0x0005808a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5f86,	// (0x0005808a) list_double_large_graphic_pane_g1_cp2

0x5f97,	// (0x0005809b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5f97,	// (0x0005809b) list_double_large_graphic_pane_g2_cp2

0x4520,	// (0x00056624) list_double_large_graphic_pane_g3_cp2

0x5fa8,	// (0x000580ac) list_double_large_graphic_pane_g4_cp

0x5fb0,	// (0x000580b4) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5fb0,	// (0x000580b4) list_double_large_graphic_pane_t1_cp2

0x5fc7,	// (0x000580cb) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5fc7,	// (0x000580cb) list_double_large_graphic_pane_t2_cp2

0x4412,	// (0x00056516) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4412,	// (0x00056516) list_double2_graphic_pane_g1_cp2

0x4420,	// (0x00056524) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4420,	// (0x00056524) list_double2_graphic_pane_g2_cp2

0x4431,	// (0x00056535) list_double2_graphic_pane_g3_cp2

0x443b,	// (0x0005653f) list_double2_graphic_pane_t1_cp2_ParamLimits

0x443b,	// (0x0005653f) list_double2_graphic_pane_t1_cp2

0x4451,	// (0x00056555) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4451,	// (0x00056555) list_double2_graphic_pane_t2_cp2

0x4463,	// (0x00056567) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4463,	// (0x00056567) list_single_number_heading_pane_g1_cp2

0x446f,	// (0x00056573) list_single_number_heading_pane_g2_cp2

0x4477,	// (0x0005657b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4477,	// (0x0005657b) list_single_number_heading_pane_t1_cp2

0x448d,	// (0x00056591) list_single_number_heading_pane_t2_cp2_ParamLimits

0x448d,	// (0x00056591) list_single_number_heading_pane_t2_cp2

0x449f,	// (0x000565a3) list_single_number_heading_pane_t3_cp2_ParamLimits

0x449f,	// (0x000565a3) list_single_number_heading_pane_t3_cp2

0x4463,	// (0x00056567) list_single_heading_pane_g1_cp2_ParamLimits

0x4463,	// (0x00056567) list_single_heading_pane_g1_cp2

0x446f,	// (0x00056573) list_single_heading_pane_g2_cp2

0x4477,	// (0x0005657b) list_single_heading_pane_t1_cp2_ParamLimits

0x4477,	// (0x0005657b) list_single_heading_pane_t1_cp2

0x5d8e,	// (0x00057e92) list_single_heading_pane_t2_cp2_ParamLimits

0x5d8e,	// (0x00057e92) list_single_heading_pane_t2_cp2

0x5cd6,	// (0x00057dda) list_double_graphic_pane_g1_cp2_ParamLimits

0x5cd6,	// (0x00057dda) list_double_graphic_pane_g1_cp2

0x5ce2,	// (0x00057de6) list_double_graphic_pane_g2_cp2_ParamLimits

0x5ce2,	// (0x00057de6) list_double_graphic_pane_g2_cp2

0x5cf1,	// (0x00057df5) list_double_graphic_pane_g3_cp2

0x5cf9,	// (0x00057dfd) list_double_graphic_pane_t1_cp2_ParamLimits

0x5cf9,	// (0x00057dfd) list_double_graphic_pane_t1_cp2

0x5d0f,	// (0x00057e13) list_double_graphic_pane_t2_cp2_ParamLimits

0x5d0f,	// (0x00057e13) list_double_graphic_pane_t2_cp2

0x4514,	// (0x00056618) list_double_number_pane_g1_cp2_ParamLimits

0x4514,	// (0x00056618) list_double_number_pane_g1_cp2

0x4520,	// (0x00056624) list_double_number_pane_g2_cp2

0x5c9a,	// (0x00057d9e) list_double_number_pane_t1_cp2_ParamLimits

0x5c9a,	// (0x00057d9e) list_double_number_pane_t1_cp2

0x5cae,	// (0x00057db2) list_double_number_pane_t2_cp2_ParamLimits

0x5cae,	// (0x00057db2) list_double_number_pane_t2_cp2

0x5cc4,	// (0x00057dc8) list_double_number_pane_t3_cp2_ParamLimits

0x5cc4,	// (0x00057dc8) list_double_number_pane_t3_cp2

0x5b83,	// (0x00057c87) list_single_graphic_pane_g1_cp2_ParamLimits

0x5b83,	// (0x00057c87) list_single_graphic_pane_g1_cp2

0x4585,	// (0x00056689) list_single_graphic_pane_g2_cp2_ParamLimits

0x4585,	// (0x00056689) list_single_graphic_pane_g2_cp2

0x4591,	// (0x00056695) list_single_graphic_pane_g3_cp2

0x5b59,	// (0x00057c5d) list_single_graphic_pane_t1_cp2_ParamLimits

0x5b59,	// (0x00057c5d) list_single_graphic_pane_t1_cp2

0x4585,	// (0x00056689) list_single_number_pane_g1_cp2_ParamLimits

0x4585,	// (0x00056689) list_single_number_pane_g1_cp2

0x4591,	// (0x00056695) list_single_number_pane_g2_cp2

0x5b59,	// (0x00057c5d) list_single_number_pane_t1_cp2_ParamLimits

0x5b59,	// (0x00057c5d) list_single_number_pane_t1_cp2

0x5b6f,	// (0x00057c73) list_single_number_pane_t2_cp2_ParamLimits

0x5b6f,	// (0x00057c73) list_single_number_pane_t2_cp2

0x4381,	// (0x00056485) list_double2_pane_g1_cp2_ParamLimits

0x4381,	// (0x00056485) list_double2_pane_g1_cp2

0x4392,	// (0x00056496) list_double2_pane_g2_cp2

0x44ec,	// (0x000565f0) list_double2_pane_t1_cp2_ParamLimits

0x44ec,	// (0x000565f0) list_double2_pane_t1_cp2

0x4502,	// (0x00056606) list_double2_pane_t2_cp2_ParamLimits

0x4502,	// (0x00056606) list_double2_pane_t2_cp2

0x4514,	// (0x00056618) list_double_pane_g1_cp2_ParamLimits

0x4514,	// (0x00056618) list_double_pane_g1_cp2

0x4520,	// (0x00056624) list_double_pane_g2_cp2

0x4528,	// (0x0005662c) list_double_pane_t1_cp2_ParamLimits

0x4528,	// (0x0005662c) list_double_pane_t1_cp2

0x453e,	// (0x00056642) list_double_pane_t2_cp2_ParamLimits

0x453e,	// (0x00056642) list_double_pane_t2_cp2

0x4575,	// (0x00056679) list_single_pane_cp2_g3

0x4585,	// (0x00056689) list_single_pane_g1_cp2_ParamLimits

0x4585,	// (0x00056689) list_single_pane_g1_cp2

0x4591,	// (0x00056695) list_single_pane_g2_cp2

0x4599,	// (0x0005669d) list_single_pane_t1_cp2_ParamLimits

0x4599,	// (0x0005669d) list_single_pane_t1_cp2

0x45b1,	// (0x000566b5) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x45b1,	// (0x000566b5) list_single_large_graphic_pane_g1_cp2

0x3a36,	// (0x00055b3a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3a36,	// (0x00055b3a) list_single_large_graphic_pane_g2_cp2

0x45bd,	// (0x000566c1) list_single_large_graphic_pane_g3_cp2

0x45c5,	// (0x000566c9) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x45c5,	// (0x000566c9) list_single_large_graphic_pane_g4_cp1

0x45df,	// (0x000566e3) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x45df,	// (0x000566e3) list_single_large_graphic_pane_t1_cp2

0x5b25,	// (0x00057c29) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5b25,	// (0x00057c29) list_single_graphic_heading_pane_g1_cp2

0x5af2,	// (0x00057bf6) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5af2,	// (0x00057bf6) list_single_graphic_heading_pane_g4_cp2

0x4591,	// (0x00056695) list_single_graphic_heading_pane_g5_cp2

0x5b31,	// (0x00057c35) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5b31,	// (0x00057c35) list_single_graphic_heading_pane_t1_cp2

0x5b47,	// (0x00057c4b) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5b47,	// (0x00057c4b) list_single_graphic_heading_pane_t2_cp2

0x5ae6,	// (0x00057bea) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5ae6,	// (0x00057bea) list_single_2graphic_pane_g1_cp2

0x5af2,	// (0x00057bf6) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5af2,	// (0x00057bf6) list_single_2graphic_pane_g2_cp2

0x4591,	// (0x00056695) list_single_2graphic_pane_g3_cp2

0x5b03,	// (0x00057c07) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5b03,	// (0x00057c07) list_single_2graphic_pane_g4_cp2

0x5b0f,	// (0x00057c13) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5b0f,	// (0x00057c13) list_single_2graphic_pane_t1_cp2

0xd0ea,	// (0x0005f1ee) list_highlight_pane_g10_cp1

0x56be,	// (0x000577c2) list_highlight_pane_g1_cp1

0x56c6,	// (0x000577ca) list_highlight_pane_g2_cp1

0x56ce,	// (0x000577d2) list_highlight_pane_g3_cp1

0x56d6,	// (0x000577da) list_highlight_pane_g4_cp1

0x56de,	// (0x000577e2) list_highlight_pane_g5_cp1

0x56e6,	// (0x000577ea) list_highlight_pane_g6_cp1

0x56ee,	// (0x000577f2) list_highlight_pane_g7_cp1

0x56f6,	// (0x000577fa) list_highlight_pane_g8_cp1

0x56fe,	// (0x00057802) list_highlight_pane_g9_cp1

0xd702,	// (0x0005f806) form_field_slider_pane_t3

0xd710,	// (0x0005f814) form_field_slider_pane_t4

0x55fa,	// (0x000576fe) slider_form_pane_ParamLimits

0x55fa,	// (0x000576fe) slider_form_pane

0xd0f4,	// (0x0005f1f8) control_abbreviations

0xd0f4,	// (0x0005f1f8) control_conventions

0xd0f4,	// (0x0005f1f8) control_definitions

0xd0f4,	// (0x0005f1f8) format_table_attribute

0x5dd8,	// (0x00057edc) bg_popup_preview_window_pane_g9

0xd0f4,	// (0x0005f1f8) format_table_data2

0xd0f4,	// (0x0005f1f8) format_table_data3

0xd0f4,	// (0x0005f1f8) format_table_data_example

0x0008,

0xd0f4,	// (0x0005f1f8) intro_purpose

0xf8c8,	// (0x000619cc) bg_popup_preview_window_pane_g

0xd0f4,	// (0x0005f1f8) texts_category

0xd0f4,	// (0x0005f1f8) texts_graphics

0x45f5,	// (0x000566f9) text_digital

0x4604,	// (0x00056708) text_primary

0x4613,	// (0x00056717) text_primary_small

0x4622,	// (0x00056726) text_secondary

0x4631,	// (0x00056735) text_title

0x64e9,	// (0x000585ed) bg_passive_tab_pane_g1_cp3_srt

0x4289,	// (0x0005638d) bg_passive_tab_pane_g2_cp3_srt

0x64f2,	// (0x000585f6) bg_passive_tab_pane_g3_cp3_srt

0x2fd1,	// (0x000550d5) bg_active_tab_pane_cp3_srt_ParamLimits

0x2fd1,	// (0x000550d5) bg_active_tab_pane_cp3_srt

0x64fb,	// (0x000585ff) tabs_4_active_pane_srt_g1

0xda55,	// (0x0005fb59) tabs_4_active_pane_srt_t1_ParamLimits

0xda55,	// (0x0005fb59) tabs_4_active_pane_srt_t1

0x64e9,	// (0x000585ed) bg_active_tab_pane_g1_cp3_copy1

0x4289,	// (0x0005638d) bg_active_tab_pane_g2_cp3_copy1

0x64f2,	// (0x000585f6) bg_active_tab_pane_g3_cp3_copy1

0x2d56,	// (0x00054e5a) tabs_2_long_active_pane_srt_ParamLimits

0x2d56,	// (0x00054e5a) tabs_2_long_active_pane_srt

0x2d56,	// (0x00054e5a) tabs_2_long_passive_pane_srt_ParamLimits

0x2d56,	// (0x00054e5a) tabs_2_long_passive_pane_srt

0x4964,	// (0x00056a68) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4964,	// (0x00056a68) bg_passive_tab_pane_cp4_srt

0x61f6,	// (0x000582fa) bg_passive_tab_pane_g1_cp4_srt

0x4289,	// (0x0005638d) bg_passive_tab_pane_g2_cp4_srt

0x61ff,	// (0x00058303) bg_passive_tab_pane_g3_cp4_srt

0x2d56,	// (0x00054e5a) bg_active_tab_pane_cp4_srt_ParamLimits

0x2d56,	// (0x00054e5a) bg_active_tab_pane_cp4_srt

0xd86d,	// (0x0005f971) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd86d,	// (0x0005f971) tabs_2_long_active_pane_srt_t1

0x61f6,	// (0x000582fa) bg_active_tab_pane_g1_cp4_srt

0x4289,	// (0x0005638d) bg_active_tab_pane_g2_cp4_srt

0x61ff,	// (0x00058303) bg_active_tab_pane_g3_cp4_srt

0x2fd1,	// (0x000550d5) tabs_3_long_active_pane_srt_ParamLimits

0x2fd1,	// (0x000550d5) tabs_3_long_active_pane_srt

0x2fd1,	// (0x000550d5) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2fd1,	// (0x000550d5) tabs_3_long_passive_pane_cp_srt

0x2fd1,	// (0x000550d5) tabs_3_long_passive_pane_srt_ParamLimits

0x2fd1,	// (0x000550d5) tabs_3_long_passive_pane_srt

0x4964,	// (0x00056a68) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4964,	// (0x00056a68) bg_passive_tab_pane_cp5_srt

0x4313,	// (0x00056417) bg_passive_tab_pane_g1_cp5_srt

0x4289,	// (0x0005638d) bg_passive_tab_pane_g2_cp5_srt

0x431c,	// (0x00056420) bg_passive_tab_pane_g3_cp5_srt

0x2d56,	// (0x00054e5a) bg_active_tab_pane_cp5_srt_ParamLimits

0x2d56,	// (0x00054e5a) bg_active_tab_pane_cp5_srt

0xd857,	// (0x0005f95b) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd857,	// (0x0005f95b) tabs_3_long_active_pane_srt_t1

0x4313,	// (0x00056417) bg_active_tab_pane_g1_cp5_srt

0x4289,	// (0x0005638d) bg_active_tab_pane_g2_cp5_srt

0x431c,	// (0x00056420) bg_active_tab_pane_g3_cp5_srt

0x61d6,	// (0x000582da) navi_text_pane_srt_t1

0x61ce,	// (0x000582d2) navi_icon_pane_srt_g1

0x4806,	// (0x0005690a) midp_editing_number_pane_srt

0x4640,	// (0x00056744) midp_ticker_pane_srt

0x480e,	// (0x00056912) midp_ticker_pane_srt_g1

0x4816,	// (0x0005691a) midp_ticker_pane_srt_g2

0x0001,

0xf750,	// (0x00061854) midp_ticker_pane_srt_g

0x481e,	// (0x00056922) midp_ticker_pane_srt_t1

0x61bf,	// (0x000582c3) midp_editing_number_pane_t1_copy1

0xd146,	// (0x0005f24a) listscroll_midp_pane

0xd146,	// (0x0005f24a) midp_form_pane

0x46b8,	// (0x000567bc) midp_info_popup_window_ParamLimits

0x46b8,	// (0x000567bc) midp_info_popup_window

0x3aa5,	// (0x00055ba9) bg_popup_sub_pane_cp50_ParamLimits

0x3aa5,	// (0x00055ba9) bg_popup_sub_pane_cp50

0x52e2,	// (0x000573e6) listscroll_midp_info_pane_ParamLimits

0x52e2,	// (0x000573e6) listscroll_midp_info_pane

0x52c2,	// (0x000573c6) listscroll_form_midp_pane_ParamLimits

0x52c2,	// (0x000573c6) listscroll_form_midp_pane

0x52ce,	// (0x000573d2) scroll_bar_cp050

0x52c2,	// (0x000573c6) list_midp_pane

0x6f67,	// (0x0005906b) signal_pane_g2_cp

0x51dc,	// (0x000572e0) listscroll_midp_info_pane_t1_ParamLimits

0x51dc,	// (0x000572e0) listscroll_midp_info_pane_t1

0x51f4,	// (0x000572f8) listscroll_midp_info_pane_t2_ParamLimits

0x51f4,	// (0x000572f8) listscroll_midp_info_pane_t2

0x5232,	// (0x00057336) listscroll_midp_info_pane_t3_ParamLimits

0x5232,	// (0x00057336) listscroll_midp_info_pane_t3

0x526c,	// (0x00057370) listscroll_midp_info_pane_t4_ParamLimits

0x526c,	// (0x00057370) listscroll_midp_info_pane_t4

0x0003,

0xf803,	// (0x00061907) listscroll_midp_info_pane_t_ParamLimits

0xf803,	// (0x00061907) listscroll_midp_info_pane_t

0x3b06,	// (0x00055c0a) scroll_pane_cp21

0x517a,	// (0x0005727e) form_midp_field_choice_group_pane

0x5183,	// (0x00057287) form_midp_field_text_pane

0x51c2,	// (0x000572c6) form_midp_field_time_pane

0x51ca,	// (0x000572ce) form_midp_gauge_slider_pane

0x51d3,	// (0x000572d7) form_midp_gauge_wait_pane

0xd0f4,	// (0x0005f1f8) form_midp_image_pane

0xc845,	// (0x0005e949) list_single_midp_pane_ParamLimits

0xc845,	// (0x0005e949) list_single_midp_pane

0xd6e1,	// (0x0005f7e5) form_midp_field_text_pane_t1

0x4f02,	// (0x00057006) input_focus_pane_cp050

0x5169,	// (0x0005726d) list_midp_form_text_pane

0x5101,	// (0x00057205) form_midp_field_choice_group_pane_t1

0x510f,	// (0x00057213) input_focus_pane_cp051

0x5123,	// (0x00057227) list_midp_choice_pane

0xd0f4,	// (0x0005f1f8) status_idle_pane

0x50e5,	// (0x000571e9) form_midp_field_time_pane_t1

0xd0ea,	// (0x0005f1ee) wait_anim_pane_g2_copy1

0x50f3,	// (0x000571f7) form_midp_field_time_pane_t2

0x0001,

0x4766,	// (0x0005686a) aid_navinavi_width_2_pane

0xf7fe,	// (0x00061902) form_midp_field_time_pane_t

0xd0f4,	// (0x0005f1f8) input_focus_pane_cp052

0xd0f4,	// (0x0005f1f8) bg_input_focus_pane_cp040

0x50a5,	// (0x000571a9) form_midp_gauge_slider_pane_t1

0x50b3,	// (0x000571b7) form_midp_gauge_slider_pane_t2

0xd6c5,	// (0x0005f7c9) form_midp_gauge_slider_pane_t3

0xd6d3,	// (0x0005f7d7) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f5,	// (0x000618f9) form_midp_gauge_slider_pane_t

0x50dd,	// (0x000571e1) form_midp_slider_pane

0x2d56,	// (0x00054e5a) bg_input_focus_pane_cp041_ParamLimits

0x2d56,	// (0x00054e5a) bg_input_focus_pane_cp041

0x5072,	// (0x00057176) form_midp_gauge_wait_pane_t1_ParamLimits

0x5072,	// (0x00057176) form_midp_gauge_wait_pane_t1

0x5084,	// (0x00057188) form_midp_gauge_wait_pane_t2_ParamLimits

0x5084,	// (0x00057188) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f0,	// (0x000618f4) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f0,	// (0x000618f4) form_midp_gauge_wait_pane_t

0x5096,	// (0x0005719a) form_midp_wait_pane_ParamLimits

0x5096,	// (0x0005719a) form_midp_wait_pane

0x503c,	// (0x00057140) form_midp_image_pane_g1

0x5045,	// (0x00057149) form_midp_image_pane_t1

0x5054,	// (0x00057158) form_midp_image_pane_t2

0x5063,	// (0x00057167) form_midp_image_pane_t3

0x0002,

0xf7e9,	// (0x000618ed) form_midp_image_pane_t

0x5033,	// (0x00057137) list_single_midp_pane_g1

0x120f,	// (0x00053313) list_single_midp_pane_t1

0xd6b1,	// (0x0005f7b5) list_midp_form_item_pane_ParamLimits

0xd6b1,	// (0x0005f7b5) list_midp_form_item_pane

0x470e,	// (0x00056812) list_midp_form_item_pane_t1

0x471d,	// (0x00056821) midp_ticker_pane_g1

0x4729,	// (0x0005682d) midp_ticker_pane_g2

0x0001,

0xf736,	// (0x0006183a) midp_ticker_pane_g

0x4735,	// (0x00056839) midp_ticker_pane_t1

0x6410,	// (0x00058514) midp_editing_number_pane_t1

0x63ee,	// (0x000584f2) midp_editing_number_pane

0x63fd,	// (0x00058501) midp_ticker_pane

0x52ee,	// (0x000573f2) ai_message_heading_pane

0xd0f4,	// (0x0005f1f8) bg_popup_window_pane_cp14

0x52f6,	// (0x000573fa) listscroll_ai_message_pane

0x6149,	// (0x0005824d) ai_message_heading_pane_g1_ParamLimits

0x6149,	// (0x0005824d) ai_message_heading_pane_g1

0x6155,	// (0x00058259) ai_message_heading_pane_g2_ParamLimits

0x6155,	// (0x00058259) ai_message_heading_pane_g2

0x6161,	// (0x00058265) ai_message_heading_pane_g3_ParamLimits

0x6161,	// (0x00058265) ai_message_heading_pane_g3

0x616d,	// (0x00058271) ai_message_heading_pane_g4_ParamLimits

0x616d,	// (0x00058271) ai_message_heading_pane_g4

0x0003,

0xf92a,	// (0x00061a2e) ai_message_heading_pane_g_ParamLimits

0xf92a,	// (0x00061a2e) ai_message_heading_pane_g

0x6179,	// (0x0005827d) ai_message_heading_pane_t1_ParamLimits

0x6179,	// (0x0005827d) ai_message_heading_pane_t1

0x6193,	// (0x00058297) ai_message_heading_pane_t2_ParamLimits

0x6193,	// (0x00058297) ai_message_heading_pane_t2

0x0001,

0xf933,	// (0x00061a37) ai_message_heading_pane_t_ParamLimits

0xf933,	// (0x00061a37) ai_message_heading_pane_t

0x61a5,	// (0x000582a9) bg_popup_heading_pane_cp1_ParamLimits

0x61a5,	// (0x000582a9) bg_popup_heading_pane_cp1

0x6137,	// (0x0005823b) list_ai_message_pane_ParamLimits

0x6137,	// (0x0005823b) list_ai_message_pane

0x3b06,	// (0x00055c0a) scroll_pane_cp10

0x60d3,	// (0x000581d7) list_ai_message_pane_g1

0x60db,	// (0x000581df) list_ai_message_pane_g2

0x0001,

0xf907,	// (0x00061a0b) list_ai_message_pane_g

0x60e3,	// (0x000581e7) list_ai_message_pane_t1_ParamLimits

0x60e3,	// (0x000581e7) list_ai_message_pane_t1

0x60f8,	// (0x000581fc) list_ai_message_pane_t2_ParamLimits

0x60f8,	// (0x000581fc) list_ai_message_pane_t2

0x610d,	// (0x00058211) list_ai_message_pane_t3_ParamLimits

0x610d,	// (0x00058211) list_ai_message_pane_t3

0x6122,	// (0x00058226) list_ai_message_pane_t4_ParamLimits

0x6122,	// (0x00058226) list_ai_message_pane_t4

0x0003,

0xf90c,	// (0x00061a10) list_ai_message_pane_t_ParamLimits

0xf90c,	// (0x00061a10) list_ai_message_pane_t

0xd836,	// (0x0005f93a) cell_ai_soft_ind_pane_ParamLimits

0xd836,	// (0x0005f93a) cell_ai_soft_ind_pane

0x4747,	// (0x0005684b) cell_ai_soft_ind_pane_g1_ParamLimits

0x4747,	// (0x0005684b) cell_ai_soft_ind_pane_g1

0xd0f4,	// (0x0005f1f8) grid_highlight_cp1

0x4754,	// (0x00056858) text_secondary_cp56_ParamLimits

0x4754,	// (0x00056858) text_secondary_cp56

0x6093,	// (0x00058197) example_general_pane_ParamLimits

0x6093,	// (0x00058197) example_general_pane

0x609f,	// (0x000581a3) example_parent_pane_g1_ParamLimits

0x609f,	// (0x000581a3) example_parent_pane_g1

0x60ab,	// (0x000581af) example_parent_pane_t1_ParamLimits

0x60ab,	// (0x000581af) example_parent_pane_t1

0xc4ef,	// (0x0005e5f3) popup_preview_text_window_ParamLimits

0xc4ef,	// (0x0005e5f3) popup_preview_text_window

0x457d,	// (0x00056681) list_single_pane_cp2_g4

0x30ad,	// (0x000551b1) bg_popup_preview_window_pane_ParamLimits

0x30ad,	// (0x000551b1) bg_popup_preview_window_pane

0x5de0,	// (0x00057ee4) popup_preview_text_window_t1_ParamLimits

0x5de0,	// (0x00057ee4) popup_preview_text_window_t1

0x5dfe,	// (0x00057f02) popup_preview_text_window_t2_ParamLimits

0x5dfe,	// (0x00057f02) popup_preview_text_window_t2

0x5e47,	// (0x00057f4b) popup_preview_text_window_t3_ParamLimits

0x5e47,	// (0x00057f4b) popup_preview_text_window_t3

0x5e8c,	// (0x00057f90) popup_preview_text_window_t4_ParamLimits

0x5e8c,	// (0x00057f90) popup_preview_text_window_t4

0x0004,

0xf8db,	// (0x000619df) popup_preview_text_window_t_ParamLimits

0xf8db,	// (0x000619df) popup_preview_text_window_t

0x5f0a,	// (0x0005800e) scroll_pane_cp11

0x4e8e,	// (0x00056f92) bg_popup_preview_window_pane_g1

0x5da0,	// (0x00057ea4) bg_popup_preview_window_pane_g2

0x5da8,	// (0x00057eac) bg_popup_preview_window_pane_g3

0x5db0,	// (0x00057eb4) bg_popup_preview_window_pane_g4

0x5db8,	// (0x00057ebc) bg_popup_preview_window_pane_g5

0x5dc0,	// (0x00057ec4) bg_popup_preview_window_pane_g6

0x5dc8,	// (0x00057ecc) bg_popup_preview_window_pane_g7

0x5dd0,	// (0x00057ed4) bg_popup_preview_window_pane_g8

0xf218,	// (0x0006131c) aid_popup_width_pane

0xc46b,	// (0x0005e56f) popup_midp_note_alarm_window_ParamLimits

0xc46b,	// (0x0005e56f) popup_midp_note_alarm_window

0x3678,	// (0x0005577c) data_form_pane_ParamLimits

0xbcf0,	// (0x0005ddf4) form_field_data_pane_g1

0xbcfa,	// (0x0005ddfe) form_field_data_pane_t1_ParamLimits

0x3684,	// (0x00055788) input_focus_pane_ParamLimits

0x0250,	// (0x00052354) data_form_wide_pane_ParamLimits

0x0261,	// (0x00052365) form_field_data_wide_pane_g1

0x026d,	// (0x00052371) form_field_data_wide_pane_t1_ParamLimits

0x3354,	// (0x00055458) input_focus_pane_cp6_ParamLimits

0xbdf7,	// (0x0005defb) input_popup_find_pane_g1_ParamLimits

0xbdf7,	// (0x0005defb) input_popup_find_pane_g1

0x04e3,	// (0x000525e7) aid_navi_side_left_pane

0x04f8,	// (0x000525fc) aid_navi_side_right_pane

0x57b9,	// (0x000578bd) bg_popup_window_pane_cp30_ParamLimits

0x57b9,	// (0x000578bd) bg_popup_window_pane_cp30

0x5833,	// (0x00057937) popup_midp_note_alarm_window_g1_ParamLimits

0x5833,	// (0x00057937) popup_midp_note_alarm_window_g1

0x5863,	// (0x00057967) popup_midp_note_alarm_window_t1_ParamLimits

0x5863,	// (0x00057967) popup_midp_note_alarm_window_t1

0x5904,	// (0x00057a08) popup_midp_note_alarm_window_t2_ParamLimits

0x5904,	// (0x00057a08) popup_midp_note_alarm_window_t2

0x59b2,	// (0x00057ab6) popup_midp_note_alarm_window_t3_ParamLimits

0x59b2,	// (0x00057ab6) popup_midp_note_alarm_window_t3

0x59e4,	// (0x00057ae8) popup_midp_note_alarm_window_t4_ParamLimits

0x59e4,	// (0x00057ae8) popup_midp_note_alarm_window_t4

0x5a0a,	// (0x00057b0e) popup_midp_note_alarm_window_t5_ParamLimits

0x5a0a,	// (0x00057b0e) popup_midp_note_alarm_window_t5

0x000a,

0xf878,	// (0x0006197c) popup_midp_note_alarm_window_t_ParamLimits

0xf878,	// (0x0006197c) popup_midp_note_alarm_window_t

0x5ab6,	// (0x00057bba) wait_bar_pane_cp1_ParamLimits

0x5ab6,	// (0x00057bba) wait_bar_pane_cp1

0xd0f4,	// (0x0005f1f8) wait_anim_pane_copy1

0xd0f4,	// (0x0005f1f8) wait_border_pane_copy1

0x549f,	// (0x000575a3) wait_border_pane_g1_copy1

0x0287,	// (0x0005238b) form_field_popup_pane_g1

0xbd14,	// (0x0005de18) form_field_popup_pane_t1_ParamLimits

0x3684,	// (0x00055788) input_focus_pane_cp7_ParamLimits

0x36a6,	// (0x000557aa) list_form_pane_ParamLimits

0x02a7,	// (0x000523ab) form_field_popup_wide_pane_g1

0x02af,	// (0x000523b3) form_field_popup_wide_pane_t1_ParamLimits

0x3684,	// (0x00055788) input_focus_pane_cp8_ParamLimits

0x36b2,	// (0x000557b6) list_form_wide_pane_ParamLimits

0x658e,	// (0x00058692) aid_size_cell_graphic_pane

0xbd93,	// (0x0005de97) data_form_pane_t1_ParamLimits

0xc85a,	// (0x0005e95e) data_form_wide_pane_t1_ParamLimits

0xd338,	// (0x0005f43c) bg_status_flat_pane

0xb5c0,	// (0x0005d6c4) title_pane_t1_ParamLimits

0x2d1e,	// (0x00054e22) title_pane_t2_ParamLimits

0x2d44,	// (0x00054e48) title_pane_t3_ParamLimits

0xf530,	// (0x00061634) title_pane_t_ParamLimits

0x3f87,	// (0x0005608b) level_1_signal_ParamLimits

0x3f99,	// (0x0005609d) level_2_signal_ParamLimits

0x3fac,	// (0x000560b0) level_3_signal_ParamLimits

0x3fbf,	// (0x000560c3) level_4_signal_ParamLimits

0x3fd2,	// (0x000560d6) level_5_signal_ParamLimits

0x3fe5,	// (0x000560e9) level_6_signal_ParamLimits

0x3ff8,	// (0x000560fc) level_7_signal_ParamLimits

0x3f87,	// (0x0005608b) level_1_battery_ParamLimits

0x3f99,	// (0x0005609d) level_2_battery_ParamLimits

0x3fac,	// (0x000560b0) level_3_battery_ParamLimits

0x3fbf,	// (0x000560c3) level_4_battery_ParamLimits

0x3fd2,	// (0x000560d6) level_5_battery_ParamLimits

0x3fe5,	// (0x000560e9) level_6_battery_ParamLimits

0x3ff8,	// (0x000560fc) level_7_battery_ParamLimits

0x56be,	// (0x000577c2) bg_status_flat_pane_g1

0x56c6,	// (0x000577ca) bg_status_flat_pane_g2

0x56ce,	// (0x000577d2) bg_status_flat_pane_g3

0x56d6,	// (0x000577da) bg_status_flat_pane_g4

0x56de,	// (0x000577e2) bg_status_flat_pane_g5

0x56e6,	// (0x000577ea) bg_status_flat_pane_g6

0x56ee,	// (0x000577f2) bg_status_flat_pane_g7

0xb64c,	// (0x0005d750) tabs_3_active_pane_t1_ParamLimits

0xb64c,	// (0x0005d750) tabs_3_passive_pane_t1_ParamLimits

0xb65e,	// (0x0005d762) tabs_4_active_pane_t1_ParamLimits

0xb65e,	// (0x0005d762) tabs_4_1_passive_pane_t1_ParamLimits

0xbe05,	// (0x0005df09) tabs_2_active_pane_t1_ParamLimits

0xbe05,	// (0x0005df09) tabs_2_passive_pane_t1_ParamLimits

0x2d56,	// (0x00054e5a) bg_active_tab_pane_cp4_ParamLimits

0xbe17,	// (0x0005df1b) tabs_2_long_active_pane_t1_ParamLimits

0x4964,	// (0x00056a68) bg_passive_tab_pane_cp4_ParamLimits

0x10f0,	// (0x000531f4) list_single_midp_graphic_pane_t1_ParamLimits

0x2d56,	// (0x00054e5a) bg_active_tab_pane_cp5_ParamLimits

0xbe2a,	// (0x0005df2e) tabs_3_long_active_pane_t1_ParamLimits

0x4964,	// (0x00056a68) bg_passive_tab_pane_cp5_ParamLimits

0x10f0,	// (0x000531f4) list_single_midp_graphic_pane_t1

0xd338,	// (0x0005f43c) bg_status_flat_pane_ParamLimits

0x4b1e,	// (0x00056c22) indicator_pane_cp2_ParamLimits

0x4b1e,	// (0x00056c22) indicator_pane_cp2

0xd4b6,	// (0x0005f5ba) navi_pane_srt_ParamLimits

0xd4b6,	// (0x0005f5ba) navi_pane_srt

0x4c6d,	// (0x00056d71) popup_clock_digital_analogue_window_cp1

0x2e33,	// (0x00054f37) indicator_pane_t1

0x4640,	// (0x00056744) copy_highlight_pane

0x4640,	// (0x00056744) cursor_graphics_pane

0x4640,	// (0x00056744) graphic_within_text_pane

0x4640,	// (0x00056744) link_highlight_pane

0x5ecd,	// (0x00057fd1) popup_preview_text_window_t5_ParamLimits

0x5ecd,	// (0x00057fd1) popup_preview_text_window_t5

0x476e,	// (0x00056872) cursor_digital_pane

0x476e,	// (0x00056872) cursor_primary_pane

0x477f,	// (0x00056883) cursor_primary_small_pane

0x4787,	// (0x0005688b) cursor_secondary_pane

0x478f,	// (0x00056893) cursor_title_pane

0x476e,	// (0x00056872) link_highlight_digital_pane

0x4776,	// (0x0005687a) link_highlight_primary_pane

0x477f,	// (0x00056883) link_highlight_primary_small_pane

0x4787,	// (0x0005688b) link_highlight_secondary_pane

0x478f,	// (0x00056893) link_highlight_title_pane

0x476e,	// (0x00056872) copy_highlight_digital_pane

0x476e,	// (0x00056872) copy_highlight_primary_pane

0x477f,	// (0x00056883) copy_highlight_primary_small_pane

0x4787,	// (0x0005688b) copy_highlight_secondary_pane

0x478f,	// (0x00056893) copy_highlight_title_pane

0x4787,	// (0x0005688b) graphic_text_digital_pane

0x575c,	// (0x00057860) graphic_text_primary_pane

0x5765,	// (0x00057869) graphic_text_primary_small_pane

0x477f,	// (0x00056883) graphic_text_secondary_pane

0x476e,	// (0x00056872) graphic_text_title_pane

0xd1eb,	// (0x0005f2ef) cursor_primary_pane_g1

0x574e,	// (0x00057852) cursor_text_primary_t1

0xd732,	// (0x0005f836) cursor_primary_small_pane_g1

0x5740,	// (0x00057844) cursor_text_primary_small_t1

0xd728,	// (0x0005f82c) cursor_primary_small_pane_g1_copy1

0x5728,	// (0x0005782c) cursor_text_primary_small_t1_copy1

0x5706,	// (0x0005780a) cursor_text_title_t1

0xd71e,	// (0x0005f822) cursor_title_pane_g1

0xd1eb,	// (0x0005f2ef) cursor_digital_pane_g1

0x47a1,	// (0x000568a5) cursor_text_digital_t1

0x47c6,	// (0x000568ca) link_highlight_primary_pane_g1

0x56af,	// (0x000577b3) link_highlight_primary_pane_t1

0x47af,	// (0x000568b3) link_highlight_primary_small_pane_g1

0x47b7,	// (0x000568bb) link_highlight_primary_small_pane_t1

0x47c6,	// (0x000568ca) link_highlight_secondary_pane_g1

0x47ce,	// (0x000568d2) link_highlight_secondary_pane_t1

0x5623,	// (0x00057727) link_highlight_title_pane_g1

0x562b,	// (0x0005772f) link_highlight_title_pane_t1

0x560c,	// (0x00057710) link_highlight_digital_pane_g1

0x5614,	// (0x00057718) link_highlight_digital_pane_t1

0x54e4,	// (0x000575e8) copy_highlight_primary_pane_g1

0x54ec,	// (0x000575f0) copy_highlight_primary_pane_t1

0x54be,	// (0x000575c2) copy_highlight_primary_small_pane_g1

0x54d5,	// (0x000575d9) copy_highlight_primary_small_pane_t1

0x47dd,	// (0x000568e1) copy_highlight_secondary_pane_g1

0x47e5,	// (0x000568e9) copy_highlight_secondary_pane_t1

0x54be,	// (0x000575c2) copy_highlight_title_pane_g1

0x54c6,	// (0x000575ca) copy_highlight_title_pane_t1

0x54e4,	// (0x000575e8) copy_highlight_digital_pane_g1

0x675c,	// (0x00058860) copy_highlight_digital_pane_t1

0x66b0,	// (0x000587b4) graphic_text_primary_pane_g1

0x6740,	// (0x00058844) graphic_text_primary_pane_t1

0x674e,	// (0x00058852) graphic_text_primary_pane_t2

0x0001,

0xf9a7,	// (0x00061aab) graphic_text_primary_pane_t

0x671c,	// (0x00058820) graphic_text_primary_small_pane_g1

0x6724,	// (0x00058828) graphic_text_primary_small_pane_t1

0x6732,	// (0x00058836) graphic_text_primary_small_pane_t2

0x0001,

0xf9a2,	// (0x00061aa6) graphic_text_primary_small_pane_t

0x66f8,	// (0x000587fc) graphic_text_secondary_pane_g1

0x6700,	// (0x00058804) graphic_text_secondary_pane_t1

0x670e,	// (0x00058812) graphic_text_secondary_pane_t2

0x0001,

0xf99d,	// (0x00061aa1) graphic_text_secondary_pane_t

0x66d4,	// (0x000587d8) graphic_text_title_pane_g1

0x66dc,	// (0x000587e0) graphic_text_title_pane_t1

0x66ea,	// (0x000587ee) graphic_text_title_pane_t2

0x0001,

0xf998,	// (0x00061a9c) graphic_text_title_pane_t

0x66b0,	// (0x000587b4) graphic_text_digital_pane_g1

0x66b8,	// (0x000587bc) graphic_text_digital_pane_t1

0x66c6,	// (0x000587ca) graphic_text_digital_pane_t2

0x0001,

0xf993,	// (0x00061a97) graphic_text_digital_pane_t

0x2d56,	// (0x00054e5a) navi_icon_pane_srt_ParamLimits

0x2d56,	// (0x00054e5a) navi_icon_pane_srt

0xd0f4,	// (0x0005f1f8) navi_midp_pane_srt

0xd0f4,	// (0x0005f1f8) navi_navi_pane_srt

0x2d56,	// (0x00054e5a) navi_text_pane_srt_ParamLimits

0x2d56,	// (0x00054e5a) navi_text_pane_srt

0x667b,	// (0x0005877f) navi_navi_icon_text_pane_srt

0x6683,	// (0x00058787) navi_navi_pane_srt_g1_ParamLimits

0x6683,	// (0x00058787) navi_navi_pane_srt_g1

0x6695,	// (0x00058799) navi_navi_pane_srt_g2_ParamLimits

0x6695,	// (0x00058799) navi_navi_pane_srt_g2

0x0001,

0xf98e,	// (0x00061a92) navi_navi_pane_srt_g_ParamLimits

0xf98e,	// (0x00061a92) navi_navi_pane_srt_g

0x66a7,	// (0x000587ab) navi_navi_tabs_pane_srt

0x667b,	// (0x0005877f) navi_navi_text_pane_srt

0x667b,	// (0x0005877f) navi_navi_volume_pane_srt

0x666c,	// (0x00058770) navi_navi_text_pane_srt_t1

0x159e,	// (0x000536a2) navi_navi_volume_pane_srt_g1

0x15a6,	// (0x000536aa) volume_small_pane_srt_ParamLimits

0x15a6,	// (0x000536aa) volume_small_pane_srt

0x0831,	// (0x00052935) volume_small_pane_srt_g1_ParamLimits

0x0831,	// (0x00052935) volume_small_pane_srt_g1

0x0841,	// (0x00052945) volume_small_pane_srt_g2_ParamLimits

0x0841,	// (0x00052945) volume_small_pane_srt_g2

0x0852,	// (0x00052956) volume_small_pane_srt_g3_ParamLimits

0x0852,	// (0x00052956) volume_small_pane_srt_g3

0x0863,	// (0x00052967) volume_small_pane_srt_g4_ParamLimits

0x0863,	// (0x00052967) volume_small_pane_srt_g4

0x0874,	// (0x00052978) volume_small_pane_srt_g5_ParamLimits

0x0874,	// (0x00052978) volume_small_pane_srt_g5

0x0885,	// (0x00052989) volume_small_pane_srt_g6_ParamLimits

0x0885,	// (0x00052989) volume_small_pane_srt_g6

0x0896,	// (0x0005299a) volume_small_pane_srt_g7_ParamLimits

0x0896,	// (0x0005299a) volume_small_pane_srt_g7

0x08a7,	// (0x000529ab) volume_small_pane_srt_g8_ParamLimits

0x08a7,	// (0x000529ab) volume_small_pane_srt_g8

0x08b8,	// (0x000529bc) volume_small_pane_srt_g9_ParamLimits

0x08b8,	// (0x000529bc) volume_small_pane_srt_g9

0x08c9,	// (0x000529cd) volume_small_pane_srt_g10_ParamLimits

0x08c9,	// (0x000529cd) volume_small_pane_srt_g10

0x0009,

0xf73b,	// (0x0006183f) volume_small_pane_srt_g_ParamLimits

0xf73b,	// (0x0006183f) volume_small_pane_srt_g

0x3156,	// (0x0005525a) query_popup_data_pane_cp2

0x6652,	// (0x00058756) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6652,	// (0x00058756) navi_navi_icon_text_pane_srt_t1

0x575c,	// (0x00057860) navi_tabs_2_long_pane_srt

0x575c,	// (0x00057860) navi_tabs_2_pane_srt

0x575c,	// (0x00057860) navi_tabs_3_long_pane_srt

0x575c,	// (0x00057860) navi_tabs_3_pane_srt

0x575c,	// (0x00057860) navi_tabs_4_pane_srt

0x157e,	// (0x00053682) tabs_2_active_pane_srt_ParamLimits

0x157e,	// (0x00053682) tabs_2_active_pane_srt

0x158e,	// (0x00053692) tabs_2_passive_pane_srt_ParamLimits

0x158e,	// (0x00053692) tabs_2_passive_pane_srt

0x4f02,	// (0x00057006) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4f02,	// (0x00057006) bg_passive_tab_pane_cp1_srt

0x661e,	// (0x00058722) bg_passive_tab_pane_g1_cp1_srt

0x4289,	// (0x0005638d) bg_passive_tab_pane_g2_cp1_srt

0x6627,	// (0x0005872b) bg_passive_tab_pane_g3_cp1_srt

0x2fd1,	// (0x000550d5) bg_active_tab_pane_cp1_srt_ParamLimits

0x2fd1,	// (0x000550d5) bg_active_tab_pane_cp1_srt

0x6630,	// (0x00058734) tabs_2_active_pane_srt_g1

0xdada,	// (0x0005fbde) tabs_2_active_pane_srt_t1_ParamLimits

0xdada,	// (0x0005fbde) tabs_2_active_pane_srt_t1

0x661e,	// (0x00058722) bg_active_tab_pane_g1_cp1_srt

0x4289,	// (0x0005638d) bg_active_tab_pane_g2_cp1_srt

0x6627,	// (0x0005872b) bg_active_tab_pane_g3_cp1_srt

0x154b,	// (0x0005364f) tabs_3_active_pane_srt_ParamLimits

0x154b,	// (0x0005364f) tabs_3_active_pane_srt

0x155c,	// (0x00053660) tabs_3_passive_pane_cp_srt_ParamLimits

0x155c,	// (0x00053660) tabs_3_passive_pane_cp_srt

0x156d,	// (0x00053671) tabs_3_passive_pane_srt_ParamLimits

0x156d,	// (0x00053671) tabs_3_passive_pane_srt

0x4f02,	// (0x00057006) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4f02,	// (0x00057006) bg_passive_tab_pane_cp2_srt

0x47fd,	// (0x00056901) bg_passive_tab_pane_g1_cp2_srt

0x4289,	// (0x0005638d) bg_passive_tab_pane_g2_cp2_srt

0x47f4,	// (0x000568f8) bg_passive_tab_pane_g3_cp2_srt

0x2fd1,	// (0x000550d5) bg_active_tab_pane_cp2_srt_ParamLimits

0x2fd1,	// (0x000550d5) bg_active_tab_pane_cp2_srt

0x6604,	// (0x00058708) tabs_3_active_pane_srt_g1

0xdac4,	// (0x0005fbc8) tabs_3_active_pane_srt_t1_ParamLimits

0xdac4,	// (0x0005fbc8) tabs_3_active_pane_srt_t1

0x47fd,	// (0x00056901) bg_active_tab_pane_g1_cp2_srt

0x4289,	// (0x0005638d) bg_active_tab_pane_g2_cp2_srt

0x47f4,	// (0x000568f8) bg_active_tab_pane_g3_cp2_srt

0x1503,	// (0x00053607) tabs_4_active_pane_srt_ParamLimits

0x1503,	// (0x00053607) tabs_4_active_pane_srt

0x1515,	// (0x00053619) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1515,	// (0x00053619) tabs_4_passive_pane_cp2_srt

0x0a3c,	// (0x00052b40) aid_size_cell_toolbar

0x6267,	// (0x0005836b) main_idle_act_pane_ParamLimits

0x0c09,	// (0x00052d0d) popup_large_graphic_colour_window_ParamLimits

0xc77b,	// (0x0005e87f) popup_toolbar_window_ParamLimits

0xc77b,	// (0x0005e87f) popup_toolbar_window

0x641f,	// (0x00058523) list_single_graphic_2heading_pane_ParamLimits

0x641f,	// (0x00058523) list_single_graphic_2heading_pane

0x3d36,	// (0x00055e3a) aid_size_cell_apps_grid_lsc_pane

0x3d48,	// (0x00055e4c) aid_size_cell_apps_grid_prt_pane

0x4964,	// (0x00056a68) bg_wml_button_pane_cp1_ParamLimits

0x4964,	// (0x00056a68) bg_wml_button_pane_cp1

0xd6e1,	// (0x0005f7e5) form_midp_field_text_pane_t1_ParamLimits

0x4f02,	// (0x00057006) input_focus_pane_cp050_ParamLimits

0x5169,	// (0x0005726d) list_midp_form_text_pane_ParamLimits

0x510f,	// (0x00057213) input_focus_pane_cp051_ParamLimits

0x5123,	// (0x00057227) list_midp_choice_pane_ParamLimits

0xd67f,	// (0x0005f783) list_single_2graphic_pane_cp3_ParamLimits

0xd67f,	// (0x0005f783) list_single_2graphic_pane_cp3

0xd692,	// (0x0005f796) list_single_midp_graphic_pane_ParamLimits

0xd692,	// (0x0005f796) list_single_midp_graphic_pane

0xf42a,	// (0x0006152e) list_single_graphic_2heading_pane_g1_ParamLimits

0xf42a,	// (0x0006152e) list_single_graphic_2heading_pane_g1

0xf436,	// (0x0006153a) list_single_graphic_2heading_pane_g4_ParamLimits

0xf436,	// (0x0006153a) list_single_graphic_2heading_pane_g4

0xf442,	// (0x00061546) list_single_graphic_2heading_pane_g5_ParamLimits

0xf442,	// (0x00061546) list_single_graphic_2heading_pane_g5

0x0002,

0xf78e,	// (0x00061892) list_single_graphic_2heading_pane_g_ParamLimits

0xf78e,	// (0x00061892) list_single_graphic_2heading_pane_g

0xf44e,	// (0x00061552) list_single_graphic_2heading_pane_t1_ParamLimits

0xf44e,	// (0x00061552) list_single_graphic_2heading_pane_t1

0xf462,	// (0x00061566) list_single_graphic_2heading_pane_t2_ParamLimits

0xf462,	// (0x00061566) list_single_graphic_2heading_pane_t2

0xf47e,	// (0x00061582) list_single_graphic_2heading_pane_t3_ParamLimits

0xf47e,	// (0x00061582) list_single_graphic_2heading_pane_t3

0x0002,

0xf795,	// (0x00061899) list_single_graphic_2heading_pane_t_ParamLimits

0xf795,	// (0x00061899) list_single_graphic_2heading_pane_t

0x4dcc,	// (0x00056ed0) bg_popup_sub_pane_cp2

0x4df6,	// (0x00056efa) grid_toobar_pane

0x101d,	// (0x00053121) cell_toolbar_pane_ParamLimits

0x101d,	// (0x00053121) cell_toolbar_pane

0x4e32,	// (0x00056f36) cell_toolbar_pane_g1_ParamLimits

0x4e32,	// (0x00056f36) cell_toolbar_pane_g1

0x4e46,	// (0x00056f4a) cell_toolbar_pane_g2_ParamLimits

0x4e46,	// (0x00056f4a) cell_toolbar_pane_g2

0x0001,

0xf7a3,	// (0x000618a7) cell_toolbar_pane_g_ParamLimits

0xf7a3,	// (0x000618a7) cell_toolbar_pane_g

0x4e68,	// (0x00056f6c) grid_highlight_pane_cp2_ParamLimits

0x4e68,	// (0x00056f6c) grid_highlight_pane_cp2

0x4e82,	// (0x00056f86) toolbar_button_pane

0x4e8e,	// (0x00056f92) toolbar_button_pane_g1

0x4e96,	// (0x00056f9a) toolbar_button_pane_g2

0x4e9e,	// (0x00056fa2) toolbar_button_pane_g3

0x4ea6,	// (0x00056faa) toolbar_button_pane_g4

0x4eae,	// (0x00056fb2) toolbar_button_pane_g5

0x4eb6,	// (0x00056fba) toolbar_button_pane_g6

0x4ebe,	// (0x00056fc2) toolbar_button_pane_g7

0x4ec6,	// (0x00056fca) toolbar_button_pane_g8

0x4ece,	// (0x00056fd2) toolbar_button_pane_g9

0x0009,

0xf7a8,	// (0x000618ac) toolbar_button_pane_g

0x106b,	// (0x0005316f) list_single_2graphic_pane_g1_cp3_ParamLimits

0x106b,	// (0x0005316f) list_single_2graphic_pane_g1_cp3

0xc7d3,	// (0x0005e8d7) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc7d3,	// (0x0005e8d7) list_single_2graphic_pane_g2_cp3

0x1088,	// (0x0005318c) list_single_2graphic_pane_g3_cp3

0x1090,	// (0x00053194) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1090,	// (0x00053194) list_single_2graphic_pane_g4_cp3

0x109c,	// (0x000531a0) list_single_2graphic_pane_t1_cp3_ParamLimits

0x109c,	// (0x000531a0) list_single_2graphic_pane_t1_cp3

0x10e4,	// (0x000531e8) list_single_midp_graphic_pane_g2_ParamLimits

0x10e4,	// (0x000531e8) list_single_midp_graphic_pane_g2

0xf422,	// (0x00061526) aid_zoom_text_primary

0x0a44,	// (0x00052b48) aid_zoom_text_secondary

0x48ae,	// (0x000569b2) status_small_pane_g7_ParamLimits

0x48ae,	// (0x000569b2) status_small_pane_g7

0x48d1,	// (0x000569d5) status_small_pane_t1_ParamLimits

0xb59c,	// (0x0005d6a0) title_pane_g2

0x0003,

0xf527,	// (0x0006162b) title_pane_g

0xb814,	// (0x0005d918) aid_size_cell_colour_1_pane_ParamLimits

0xb814,	// (0x0005d918) aid_size_cell_colour_1_pane

0xb828,	// (0x0005d92c) aid_size_cell_colour_2_pane_ParamLimits

0xb828,	// (0x0005d92c) aid_size_cell_colour_2_pane

0xb83c,	// (0x0005d940) aid_size_cell_colour_3_pane_ParamLimits

0xb83c,	// (0x0005d940) aid_size_cell_colour_3_pane

0xb850,	// (0x0005d954) aid_size_cell_colour_4_pane_ParamLimits

0xb850,	// (0x0005d954) aid_size_cell_colour_4_pane

0x0420,	// (0x00052524) title_pane_stacon_g1_ParamLimits

0x0420,	// (0x00052524) title_pane_stacon_g1

0x5543,	// (0x00057647) popup_note_wait_window_g3_ParamLimits

0x5543,	// (0x00057647) popup_note_wait_window_g3

0x55b9,	// (0x000576bd) popup_note_wait_window_t5_ParamLimits

0x55b9,	// (0x000576bd) popup_note_wait_window_t5

0xd0f4,	// (0x0005f1f8) main_feb_china_hwr_fs_writing_pane

0xc17d,	// (0x0005e281) popup_feb_china_hwr_fs_window_ParamLimits

0xc17d,	// (0x0005e281) popup_feb_china_hwr_fs_window

0xc7e4,	// (0x0005e8e8) aid_size_cell_hwr_fs_ParamLimits

0xc7e4,	// (0x0005e8e8) aid_size_cell_hwr_fs

0x4f02,	// (0x00057006) bg_popup_sub_pane_cp3_ParamLimits

0x4f02,	// (0x00057006) bg_popup_sub_pane_cp3

0xc7f9,	// (0x0005e8fd) grid_hwr_fs_pane_ParamLimits

0xc7f9,	// (0x0005e8fd) grid_hwr_fs_pane

0x119f,	// (0x000532a3) linegrid_hwr_fs_pane_ParamLimits

0x119f,	// (0x000532a3) linegrid_hwr_fs_pane

0xc811,	// (0x0005e915) cell_hwr_fs_pane_ParamLimits

0xc811,	// (0x0005e915) cell_hwr_fs_pane

0x4f0e,	// (0x00057012) linegrid_hwr_fs_pane_g1_ParamLimits

0x4f0e,	// (0x00057012) linegrid_hwr_fs_pane_g1

0xd653,	// (0x0005f757) linegrid_hwr_fs_pane_g2_ParamLimits

0xd653,	// (0x0005f757) linegrid_hwr_fs_pane_g2

0x4f2c,	// (0x00057030) linegrid_hwr_fs_pane_g3_ParamLimits

0x4f2c,	// (0x00057030) linegrid_hwr_fs_pane_g3

0x11d1,	// (0x000532d5) linegrid_hwr_fs_pane_g4_ParamLimits

0x11d1,	// (0x000532d5) linegrid_hwr_fs_pane_g4

0x11eb,	// (0x000532ef) linegrid_hwr_fs_pane_g5_ParamLimits

0x11eb,	// (0x000532ef) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ce,	// (0x000618d2) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ce,	// (0x000618d2) linegrid_hwr_fs_pane_g

0x4f38,	// (0x0005703c) cell_hwr_fs_pane_g1_ParamLimits

0x4f38,	// (0x0005703c) cell_hwr_fs_pane_g1

0x4d03,	// (0x00056e07) cell_hwr_fs_pane_g2_ParamLimits

0x4d03,	// (0x00056e07) cell_hwr_fs_pane_g2

0xd665,	// (0x0005f769) cell_hwr_fs_pane_g3_ParamLimits

0xd665,	// (0x0005f769) cell_hwr_fs_pane_g3

0xd672,	// (0x0005f776) cell_hwr_fs_pane_g4_ParamLimits

0xd672,	// (0x0005f776) cell_hwr_fs_pane_g4

0x0003,

0xf7d9,	// (0x000618dd) cell_hwr_fs_pane_g_ParamLimits

0xf7d9,	// (0x000618dd) cell_hwr_fs_pane_g

0xc837,	// (0x0005e93b) cell_hwr_fs_pane_t1

0xd0f4,	// (0x0005f1f8) grid_highlight_pane_cp6

0xd0f4,	// (0x0005f1f8) main_idle_act2_pane

0x3aed,	// (0x00055bf1) aid_inside_area_popup_secondary

0xd73c,	// (0x0005f840) aid_inside_area_window_primary_ParamLimits

0xd73c,	// (0x0005f840) aid_inside_area_window_primary

0x676b,	// (0x0005886f) ai2_news_ticker_pane

0x6773,	// (0x00058877) aid_size_cell_ai1_link_ParamLimits

0x6773,	// (0x00058877) aid_size_cell_ai1_link

0xdaf0,	// (0x0005fbf4) popup_ai2_data_window_ParamLimits

0xdaf0,	// (0x0005fbf4) popup_ai2_data_window

0x67a3,	// (0x000588a7) popup_ai2_link_window_ParamLimits

0x67a3,	// (0x000588a7) popup_ai2_link_window

0x4f02,	// (0x00057006) bg_popup_sub_pane_cp4_ParamLimits

0x4f02,	// (0x00057006) bg_popup_sub_pane_cp4

0x67b7,	// (0x000588bb) grid_ai2_link_pane_ParamLimits

0x67b7,	// (0x000588bb) grid_ai2_link_pane

0x67ce,	// (0x000588d2) popup_ai2_link_window_g1_ParamLimits

0x67ce,	// (0x000588d2) popup_ai2_link_window_g1

0x67da,	// (0x000588de) popup_ai2_link_window_g2_ParamLimits

0x67da,	// (0x000588de) popup_ai2_link_window_g2

0x0001,

0xf9ac,	// (0x00061ab0) popup_ai2_link_window_g_ParamLimits

0xf9ac,	// (0x00061ab0) popup_ai2_link_window_g

0x67e9,	// (0x000588ed) ai2_mp_button_pane

0x67f1,	// (0x000588f5) ai2_mp_volume_pane

0x510f,	// (0x00057213) bg_popup_sub_pane_cp5_ParamLimits

0x510f,	// (0x00057213) bg_popup_sub_pane_cp5

0x67f9,	// (0x000588fd) heading_ai2_gene_pane_ParamLimits

0x67f9,	// (0x000588fd) heading_ai2_gene_pane

0x6805,	// (0x00058909) list_ai2_gene_pane_ParamLimits

0x6805,	// (0x00058909) list_ai2_gene_pane

0x684d,	// (0x00058951) cell_ai2_link_pane_ParamLimits

0x684d,	// (0x00058951) cell_ai2_link_pane

0x6863,	// (0x00058967) cell_ai2_link_pane_g1

0xd0f4,	// (0x0005f1f8) grid_highlight_pane_cp7

0x15bb,	// (0x000536bf) ai2_mp_volume_pane_g1

0x6933,	// (0x00058a37) ai2_mp_volume_pane_g2

0xdb1a,	// (0x0005fc1e) list_ai2_gene_pane_t1

0x693b,	// (0x00058a3f) ai2_mp_volume_pane_g3

0x0002,

0xf9c5,	// (0x00061ac9) ai2_mp_volume_pane_g

0x15c3,	// (0x000536c7) volume_small_pane_cp3

0x6943,	// (0x00058a47) aid_size_cell_ai2_button

0x694b,	// (0x00058a4f) grid_ai2_button_pane

0x6954,	// (0x00058a58) cell_ai2_button_pane_ParamLimits

0x6954,	// (0x00058a58) cell_ai2_button_pane

0xd0ea,	// (0x0005f1ee) cell_ai2_button_pane_g1

0xd0f4,	// (0x0005f1f8) grid_highlight_pane_cp8

0x68f3,	// (0x000589f7) ai2_gene_pane_t1_ParamLimits

0x68f3,	// (0x000589f7) ai2_gene_pane_t1

0xc11b,	// (0x0005e21f) aid_height_parent_landscape

0xd884,	// (0x0005f988) aid_height_set_list

0x6267,	// (0x0005836b) aid_size_parent

0x658e,	// (0x00058692) aid_size_cell_graphic_pane_ParamLimits

0x6815,	// (0x00058919) popup_ai2_data_window_g1_ParamLimits

0x6815,	// (0x00058919) popup_ai2_data_window_g1

0x6821,	// (0x00058925) ai2_news_ticker_pane_g1

0x6829,	// (0x0005892d) ai2_news_ticker_pane_g2

0x0001,

0xf9b1,	// (0x00061ab5) ai2_news_ticker_pane_g

0x6831,	// (0x00058935) ai2_news_ticker_pane_t1

0x683f,	// (0x00058943) ai2_news_ticker_pane_t2

0x0001,

0xf9b6,	// (0x00061aba) ai2_news_ticker_pane_t

0x686c,	// (0x00058970) heading_ai2_gene_pane_g1

0x6874,	// (0x00058978) heading_ai2_gene_pane_t1_ParamLimits

0x6874,	// (0x00058978) heading_ai2_gene_pane_t1

0x6889,	// (0x0005898d) list_highlight_pane_cp6

0xdb04,	// (0x0005fc08) ai2_gene_pane_ParamLimits

0xdb04,	// (0x0005fc08) ai2_gene_pane

0xdb28,	// (0x0005fc2c) list_ai2_gene_pane_t2

0x0001,

0xf9bb,	// (0x00061abf) list_ai2_gene_pane_t

0x68c4,	// (0x000589c8) list_highlight_pane_cp8_ParamLimits

0x68c4,	// (0x000589c8) list_highlight_pane_cp8

0x68d5,	// (0x000589d9) ai2_gene_pane_g1_ParamLimits

0x68d5,	// (0x000589d9) ai2_gene_pane_g1

0x68e7,	// (0x000589eb) ai2_gene_pane_g2_ParamLimits

0x68e7,	// (0x000589eb) ai2_gene_pane_g2

0x0001,

0xf9c0,	// (0x00061ac4) ai2_gene_pane_g_ParamLimits

0xf9c0,	// (0x00061ac4) ai2_gene_pane_g

0x3579,	// (0x0005567d) scroll_pane_cp12

0xc0d8,	// (0x0005e1dc) control_pane_t3_ParamLimits

0xc0d8,	// (0x0005e1dc) control_pane_t3

0x48c2,	// (0x000569c6) status_small_pane_g8_ParamLimits

0x48c2,	// (0x000569c6) status_small_pane_g8

0xc212,	// (0x0005e316) popup_find_window_ParamLimits

0xc4a5,	// (0x0005e5a9) popup_note_image_window_ParamLimits

0xed5c,	// (0x00060e60) list_double2_graphic_pane_vc_g1_ParamLimits

0xed5c,	// (0x00060e60) list_double2_graphic_pane_vc_g1

0x3a36,	// (0x00055b3a) list_double2_graphic_pane_vc_g2_ParamLimits

0x3a36,	// (0x00055b3a) list_double2_graphic_pane_vc_g2

0x358a,	// (0x0005568e) list_double2_graphic_pane_vc_g3_ParamLimits

0x358a,	// (0x0005568e) list_double2_graphic_pane_vc_g3

0x0002,

0xf79c,	// (0x000618a0) list_double2_graphic_pane_vc_g_ParamLimits

0xf79c,	// (0x000618a0) list_double2_graphic_pane_vc_g

0x104d,	// (0x00053151) list_double2_graphic_pane_vc_t1_ParamLimits

0x104d,	// (0x00053151) list_double2_graphic_pane_vc_t1

0x3a36,	// (0x00055b3a) list_single_heading_pane_vc_g1_ParamLimits

0x3a36,	// (0x00055b3a) list_single_heading_pane_vc_g1

0x358a,	// (0x0005568e) list_single_heading_pane_vc_g2_ParamLimits

0x358a,	// (0x0005568e) list_single_heading_pane_vc_g2

0x0001,

0xf5ab,	// (0x000616af) list_single_heading_pane_vc_g_ParamLimits

0xf5ab,	// (0x000616af) list_single_heading_pane_vc_g

0x10b8,	// (0x000531bc) list_single_heading_pane_vc_t1_ParamLimits

0x10b8,	// (0x000531bc) list_single_heading_pane_vc_t1

0x10ce,	// (0x000531d2) list_single_heading_pane_vc_t2_ParamLimits

0x10ce,	// (0x000531d2) list_single_heading_pane_vc_t2

0x0001,

0xf7bd,	// (0x000618c1) list_single_heading_pane_vc_t_ParamLimits

0xf7bd,	// (0x000618c1) list_single_heading_pane_vc_t

0x3758,	// (0x0005585c) list_setting_number_pane_vc_g1_ParamLimits

0x3758,	// (0x0005585c) list_setting_number_pane_vc_g1

0x3764,	// (0x00055868) list_setting_number_pane_vc_g2_ParamLimits

0x3764,	// (0x00055868) list_setting_number_pane_vc_g2

0x0001,

0xf7c2,	// (0x000618c6) list_setting_number_pane_vc_g_ParamLimits

0xf7c2,	// (0x000618c6) list_setting_number_pane_vc_g

0x1106,	// (0x0005320a) list_setting_number_pane_vc_t1_ParamLimits

0x1106,	// (0x0005320a) list_setting_number_pane_vc_t1

0x111a,	// (0x0005321e) list_setting_number_pane_vc_t2_ParamLimits

0x111a,	// (0x0005321e) list_setting_number_pane_vc_t2

0x1136,	// (0x0005323a) list_setting_number_pane_vc_t3_ParamLimits

0x1136,	// (0x0005323a) list_setting_number_pane_vc_t3

0x0002,

0xf7c7,	// (0x000618cb) list_setting_number_pane_vc_t_ParamLimits

0xf7c7,	// (0x000618cb) list_setting_number_pane_vc_t

0x1162,	// (0x00053266) set_value_pane_vc_ParamLimits

0x1162,	// (0x00053266) set_value_pane_vc

0x641f,	// (0x00058523) list_double2_graphic_pane_vc_ParamLimits

0x641f,	// (0x00058523) list_double2_graphic_pane_vc

0x641f,	// (0x00058523) list_double2_large_graphic_pane_vc_ParamLimits

0x641f,	// (0x00058523) list_double2_large_graphic_pane_vc

0x641f,	// (0x00058523) list_double2_pane_vc_ParamLimits

0x641f,	// (0x00058523) list_double2_pane_vc

0x641f,	// (0x00058523) list_double_graphic_heading_pane_vc_ParamLimits

0x641f,	// (0x00058523) list_double_graphic_heading_pane_vc

0x641f,	// (0x00058523) list_double_graphic_pane_vc_ParamLimits

0x641f,	// (0x00058523) list_double_graphic_pane_vc

0x641f,	// (0x00058523) list_double_heading_pane_vc_ParamLimits

0x641f,	// (0x00058523) list_double_heading_pane_vc

0x6431,	// (0x00058535) list_double_large_graphic_pane_vc_ParamLimits

0x6431,	// (0x00058535) list_double_large_graphic_pane_vc

0x641f,	// (0x00058523) list_double_number_pane_vc_ParamLimits

0x641f,	// (0x00058523) list_double_number_pane_vc

0x641f,	// (0x00058523) list_double_pane_vc_ParamLimits

0x641f,	// (0x00058523) list_double_pane_vc

0x641f,	// (0x00058523) list_double_time_pane_vc_ParamLimits

0x641f,	// (0x00058523) list_double_time_pane_vc

0x641f,	// (0x00058523) list_setting_number_pane_vc_ParamLimits

0x641f,	// (0x00058523) list_setting_number_pane_vc

0x641f,	// (0x00058523) list_setting_pane_vc_ParamLimits

0x641f,	// (0x00058523) list_setting_pane_vc

0x641f,	// (0x00058523) list_single_graphic_heading_pane_vc_ParamLimits

0x641f,	// (0x00058523) list_single_graphic_heading_pane_vc

0x641f,	// (0x00058523) list_single_heading_pane_vc_ParamLimits

0x641f,	// (0x00058523) list_single_heading_pane_vc

0x641f,	// (0x00058523) list_single_number_heading_pane_vc_ParamLimits

0x641f,	// (0x00058523) list_single_number_heading_pane_vc

0x15cc,	// (0x000536d0) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x15cc,	// (0x000536d0) list_double_graphic_heading_pane_vc_g1

0x15d8,	// (0x000536dc) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x15d8,	// (0x000536dc) list_double_graphic_heading_pane_vc_g2

0x15e4,	// (0x000536e8) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x15e4,	// (0x000536e8) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9cc,	// (0x00061ad0) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9cc,	// (0x00061ad0) list_double_graphic_heading_pane_vc_g

0x15f0,	// (0x000536f4) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x15f0,	// (0x000536f4) list_double_graphic_heading_pane_vc_t1

0x160c,	// (0x00053710) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x160c,	// (0x00053710) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d3,	// (0x00061ad7) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d3,	// (0x00061ad7) list_double_graphic_heading_pane_vc_t

0x3758,	// (0x0005585c) list_setting_pane_vc_g1_ParamLimits

0x3758,	// (0x0005585c) list_setting_pane_vc_g1

0x3764,	// (0x00055868) list_setting_pane_vc_g2_ParamLimits

0x3764,	// (0x00055868) list_setting_pane_vc_g2

0x0001,

0xf7c2,	// (0x000618c6) list_setting_pane_vc_g_ParamLimits

0xf7c2,	// (0x000618c6) list_setting_pane_vc_g

0x162a,	// (0x0005372e) list_setting_pane_vc_t1_ParamLimits

0x162a,	// (0x0005372e) list_setting_pane_vc_t1

0x1646,	// (0x0005374a) list_setting_pane_vc_t2_ParamLimits

0x1646,	// (0x0005374a) list_setting_pane_vc_t2

0x0001,

0xfa01,	// (0x00061b05) list_setting_pane_vc_t_ParamLimits

0xfa01,	// (0x00061b05) list_setting_pane_vc_t

0x1162,	// (0x00053266) set_value_pane_cp_vc_ParamLimits

0x1162,	// (0x00053266) set_value_pane_cp_vc

0x3a36,	// (0x00055b3a) list_single_number_heading_pane_vc_g1_ParamLimits

0x3a36,	// (0x00055b3a) list_single_number_heading_pane_vc_g1

0x358a,	// (0x0005568e) list_single_number_heading_pane_vc_g2_ParamLimits

0x358a,	// (0x0005568e) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ab,	// (0x000616af) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ab,	// (0x000616af) list_single_number_heading_pane_vc_g

0xed22,	// (0x00060e26) list_single_number_heading_pane_vc_t1_ParamLimits

0xed22,	// (0x00060e26) list_single_number_heading_pane_vc_t1

0x1662,	// (0x00053766) list_single_number_heading_pane_vc_t2_ParamLimits

0x1662,	// (0x00053766) list_single_number_heading_pane_vc_t2

0x1678,	// (0x0005377c) list_single_number_heading_pane_vc_t3_ParamLimits

0x1678,	// (0x0005377c) list_single_number_heading_pane_vc_t3

0x0002,

0xfa06,	// (0x00061b0a) list_single_number_heading_pane_vc_t_ParamLimits

0xfa06,	// (0x00061b0a) list_single_number_heading_pane_vc_t

0xed5c,	// (0x00060e60) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xed5c,	// (0x00060e60) list_single_graphic_heading_pane_vc_g1

0x3a36,	// (0x00055b3a) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3a36,	// (0x00055b3a) list_single_graphic_heading_pane_vc_g4

0x358a,	// (0x0005568e) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x358a,	// (0x0005568e) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79c,	// (0x000618a0) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79c,	// (0x000618a0) list_single_graphic_heading_pane_vc_g

0xed22,	// (0x00060e26) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xed22,	// (0x00060e26) list_single_graphic_heading_pane_vc_t1

0x168a,	// (0x0005378e) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x168a,	// (0x0005378e) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0d,	// (0x00061b11) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0d,	// (0x00061b11) list_single_graphic_heading_pane_vc_t

0x3a36,	// (0x00055b3a) list_double2_pane_vc_g1_ParamLimits

0x3a36,	// (0x00055b3a) list_double2_pane_vc_g1

0x358a,	// (0x0005568e) list_double2_pane_vc_g2_ParamLimits

0x358a,	// (0x0005568e) list_double2_pane_vc_g2

0x0001,

0xf5ab,	// (0x000616af) list_double2_pane_vc_g_ParamLimits

0xf5ab,	// (0x000616af) list_double2_pane_vc_g

0x14b6,	// (0x000535ba) list_double2_pane_vc_t1_ParamLimits

0x14b6,	// (0x000535ba) list_double2_pane_vc_t1

0x37e7,	// (0x000558eb) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x37e7,	// (0x000558eb) list_double2_large_graphic_pane_vc_g1

0x3a36,	// (0x00055b3a) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3a36,	// (0x00055b3a) list_double2_large_graphic_pane_vc_g2

0x358a,	// (0x0005568e) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x358a,	// (0x0005568e) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c3,	// (0x000616c7) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c3,	// (0x000616c7) list_double2_large_graphic_pane_vc_g

0x169c,	// (0x000537a0) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x169c,	// (0x000537a0) list_double2_large_graphic_pane_vc_t1

0x37f3,	// (0x000558f7) list_double_time_pane_vc_g1_ParamLimits

0x37f3,	// (0x000558f7) list_double_time_pane_vc_g1

0x37ff,	// (0x00055903) list_double_time_pane_vc_g2_ParamLimits

0x37ff,	// (0x00055903) list_double_time_pane_vc_g2

0x0001,

0xfa12,	// (0x00061b16) list_double_time_pane_vc_g_ParamLimits

0xfa12,	// (0x00061b16) list_double_time_pane_vc_g

0x16b2,	// (0x000537b6) list_double_time_pane_vc_t1_ParamLimits

0x16b2,	// (0x000537b6) list_double_time_pane_vc_t1

0x16d6,	// (0x000537da) list_double_time_pane_vc_t2_ParamLimits

0x16d6,	// (0x000537da) list_double_time_pane_vc_t2

0x1725,	// (0x00053829) list_double_time_pane_vc_t3_ParamLimits

0x1725,	// (0x00053829) list_double_time_pane_vc_t3

0x1737,	// (0x0005383b) list_double_time_pane_vc_t4_ParamLimits

0x1737,	// (0x0005383b) list_double_time_pane_vc_t4

0x0003,

0xfa17,	// (0x00061b1b) list_double_time_pane_vc_t_ParamLimits

0xfa17,	// (0x00061b1b) list_double_time_pane_vc_t

0x3a36,	// (0x00055b3a) list_double_pane_vc_g1_ParamLimits

0x3a36,	// (0x00055b3a) list_double_pane_vc_g1

0x358a,	// (0x0005568e) list_double_pane_vc_g2_ParamLimits

0x358a,	// (0x0005568e) list_double_pane_vc_g2

0x0001,

0xf5ab,	// (0x000616af) list_double_pane_vc_g_ParamLimits

0xf5ab,	// (0x000616af) list_double_pane_vc_g

0x174b,	// (0x0005384f) list_double_pane_vc_t1_ParamLimits

0x174b,	// (0x0005384f) list_double_pane_vc_t1

0x175f,	// (0x00053863) list_double_pane_vc_t2_ParamLimits

0x175f,	// (0x00053863) list_double_pane_vc_t2

0x0001,

0xfa20,	// (0x00061b24) list_double_pane_vc_t_ParamLimits

0xfa20,	// (0x00061b24) list_double_pane_vc_t

0x3a36,	// (0x00055b3a) list_double_number_pane_vc_g1_ParamLimits

0x3a36,	// (0x00055b3a) list_double_number_pane_vc_g1

0x358a,	// (0x0005568e) list_double_number_pane_vc_g2_ParamLimits

0x358a,	// (0x0005568e) list_double_number_pane_vc_g2

0x0001,

0xf5ab,	// (0x000616af) list_double_number_pane_vc_g_ParamLimits

0xf5ab,	// (0x000616af) list_double_number_pane_vc_g

0x1777,	// (0x0005387b) list_double_number_pane_vc_t1_ParamLimits

0x1777,	// (0x0005387b) list_double_number_pane_vc_t1

0x1789,	// (0x0005388d) list_double_number_pane_vc_t2_ParamLimits

0x1789,	// (0x0005388d) list_double_number_pane_vc_t2

0x179d,	// (0x000538a1) list_double_number_pane_vc_t3_ParamLimits

0x179d,	// (0x000538a1) list_double_number_pane_vc_t3

0x0002,

0xfa25,	// (0x00061b29) list_double_number_pane_vc_t_ParamLimits

0xfa25,	// (0x00061b29) list_double_number_pane_vc_t

0x380b,	// (0x0005590f) list_double_large_graphic_pane_vc_g1_ParamLimits

0x380b,	// (0x0005590f) list_double_large_graphic_pane_vc_g1

0x3827,	// (0x0005592b) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3827,	// (0x0005592b) list_double_large_graphic_pane_vc_g2

0x383b,	// (0x0005593f) list_double_large_graphic_pane_vc_g3_ParamLimits

0x383b,	// (0x0005593f) list_double_large_graphic_pane_vc_g3

0x17b7,	// (0x000538bb) list_double_large_graphic_pane_vc_g4_ParamLimits

0x17b7,	// (0x000538bb) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa2c,	// (0x00061b30) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa2c,	// (0x00061b30) list_double_large_graphic_pane_vc_g

0x17c6,	// (0x000538ca) list_double_large_graphic_pane_vc_t1_ParamLimits

0x17c6,	// (0x000538ca) list_double_large_graphic_pane_vc_t1

0x17e2,	// (0x000538e6) list_double_large_graphic_pane_vc_t2_ParamLimits

0x17e2,	// (0x000538e6) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa35,	// (0x00061b39) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa35,	// (0x00061b39) list_double_large_graphic_pane_vc_t

0x15d8,	// (0x000536dc) list_double_heading_pane_vc_g1_ParamLimits

0x15d8,	// (0x000536dc) list_double_heading_pane_vc_g1

0x15e4,	// (0x000536e8) list_double_heading_pane_vc_g2_ParamLimits

0x15e4,	// (0x000536e8) list_double_heading_pane_vc_g2

0x0001,

0xfa3a,	// (0x00061b3e) list_double_heading_pane_vc_g_ParamLimits

0xfa3a,	// (0x00061b3e) list_double_heading_pane_vc_g

0x1804,	// (0x00053908) list_double_heading_pane_vc_t1_ParamLimits

0x1804,	// (0x00053908) list_double_heading_pane_vc_t1

0x1818,	// (0x0005391c) list_double_heading_pane_vc_t2_ParamLimits

0x1818,	// (0x0005391c) list_double_heading_pane_vc_t2

0x0001,

0xfa3f,	// (0x00061b43) list_double_heading_pane_vc_t_ParamLimits

0xfa3f,	// (0x00061b43) list_double_heading_pane_vc_t

0x1830,	// (0x00053934) list_double_graphic_pane_vc_g1_ParamLimits

0x1830,	// (0x00053934) list_double_graphic_pane_vc_g1

0x384a,	// (0x0005594e) list_double_graphic_pane_vc_g2_ParamLimits

0x384a,	// (0x0005594e) list_double_graphic_pane_vc_g2

0x3a36,	// (0x00055b3a) list_double_graphic_pane_vc_g3_ParamLimits

0x3a36,	// (0x00055b3a) list_double_graphic_pane_vc_g3

0x0003,

0xfa44,	// (0x00061b48) list_double_graphic_pane_vc_g_ParamLimits

0xfa44,	// (0x00061b48) list_double_graphic_pane_vc_g

0x183c,	// (0x00053940) list_double_graphic_pane_vc_t1_ParamLimits

0x183c,	// (0x00053940) list_double_graphic_pane_vc_t1

0x1866,	// (0x0005396a) list_double_graphic_pane_vc_t2_ParamLimits

0x1866,	// (0x0005396a) list_double_graphic_pane_vc_t2

0x0001,

0xfa4d,	// (0x00061b51) list_double_graphic_pane_vc_t_ParamLimits

0xfa4d,	// (0x00061b51) list_double_graphic_pane_vc_t

0xf224,	// (0x00061328) aid_size_cell_fastswap

0xb3c5,	// (0x0005d4c9) aid_size_cell_touch_ParamLimits

0xb3c5,	// (0x0005d4c9) aid_size_cell_touch

0xf3f4,	// (0x000614f8) popup_fast_swap_wide_window_ParamLimits

0xf3f4,	// (0x000614f8) popup_fast_swap_wide_window

0xb533,	// (0x0005d637) touch_pane_ParamLimits

0xb533,	// (0x0005d637) touch_pane

0x3670,	// (0x00055774) button_value_adjust_pane_cp2

0x017a,	// (0x0005227e) button_value_adjust_pane_cp4

0x019e,	// (0x000522a2) form_field_data_pane_cp2

0xbcaf,	// (0x0005ddb3) form_field_data_wide_pane_cp2

0x3e05,	// (0x00055f09) bg_scroll_pane_ParamLimits

0x0582,	// (0x00052686) scroll_handle_pane_ParamLimits

0x0596,	// (0x0005269a) scroll_sc2_down_pane_ParamLimits

0x0596,	// (0x0005269a) scroll_sc2_down_pane

0x3e36,	// (0x00055f3a) scroll_sc2_up_pane_ParamLimits

0x3e36,	// (0x00055f3a) scroll_sc2_up_pane

0xdc58,	// (0x0005fd5c) grid_wheel_folder_pane_g1_ParamLimits

0xdc58,	// (0x0005fd5c) grid_wheel_folder_pane_g1

0x07c9,	// (0x000528cd) clock_nsta_pane_cp2_ParamLimits

0x07c9,	// (0x000528cd) clock_nsta_pane_cp2

0xd146,	// (0x0005f24a) listscroll_midp_pane_ParamLimits

0xd152,	// (0x0005f256) midp_canvas_pane

0x493c,	// (0x00056a40) nsta_clock_indic_pane

0x4970,	// (0x00056a74) listscroll_form_pane_vc

0x4978,	// (0x00056a7c) listscroll_set_pane_vc_ParamLimits

0x4978,	// (0x00056a7c) listscroll_set_pane_vc

0xd360,	// (0x0005f464) clock_nsta_pane

0xd38a,	// (0x0005f48e) indicator_nsta_pane

0x4dcc,	// (0x00056ed0) bg_popup_sub_pane_cp2_ParamLimits

0x4de0,	// (0x00056ee4) find_pane_cp2_ParamLimits

0x4de0,	// (0x00056ee4) find_pane_cp2

0x4df6,	// (0x00056efa) grid_toobar_pane_ParamLimits

0x4ed6,	// (0x00056fda) list_form_gen_pane_vc_ParamLimits

0x4ed6,	// (0x00056fda) list_form_gen_pane_vc

0x4eec,	// (0x00056ff0) scroll_pane_cp8_vc_ParamLimits

0x4eec,	// (0x00056ff0) scroll_pane_cp8_vc

0x4f68,	// (0x0005706c) data_form_wide_pane_vc_ParamLimits

0x4f68,	// (0x0005706c) data_form_wide_pane_vc

0x4f74,	// (0x00057078) form_field_data_wide_pane_vc_g1

0x4f7c,	// (0x00057080) form_field_data_wide_pane_vc_t1_ParamLimits

0x4f7c,	// (0x00057080) form_field_data_wide_pane_vc_t1

0x3684,	// (0x00055788) input_focus_pane_cp6_vc_ParamLimits

0x3684,	// (0x00055788) input_focus_pane_cp6_vc

0x52c2,	// (0x000573c6) list_midp_pane_ParamLimits

0x65f8,	// (0x000586fc) scroll_pane_cp16_ParamLimits

0x65f8,	// (0x000586fc) scroll_pane_cp16

0x5318,	// (0x0005741c) button_value_adjust_pane_ParamLimits

0x5318,	// (0x0005741c) button_value_adjust_pane

0xd895,	// (0x0005f999) button_value_adjust_pane_cp6_ParamLimits

0xd895,	// (0x0005f999) button_value_adjust_pane_cp6

0xd9af,	// (0x0005fab3) settings_code_pane_cp_ParamLimits

0xd9af,	// (0x0005fab3) settings_code_pane_cp

0xd0ea,	// (0x0005f1ee) cell_touch_pane_g1

0xd0ea,	// (0x0005f1ee) cell_touch_pane_g2

0x0001,

0xf6e1,	// (0x000617e5) cell_touch_pane_g

0xdb36,	// (0x0005fc3a) cell_touch_pane_cp_ParamLimits

0xdb36,	// (0x0005fc3a) cell_touch_pane_cp

0xdb52,	// (0x0005fc56) cell_touch_pane_ParamLimits

0xdb52,	// (0x0005fc56) cell_touch_pane

0xd0ea,	// (0x0005f1ee) scroll_sc2_down_pane_g1

0xd0ea,	// (0x0005f1ee) scroll_sc2_up_pane_g1

0xd0f4,	// (0x0005f1f8) bg_set_opt_pane_cp4_vc

0x6988,	// (0x00058a8c) list_set_graphic_pane_vc_g1_ParamLimits

0x6988,	// (0x00058a8c) list_set_graphic_pane_vc_g1

0x6994,	// (0x00058a98) list_set_graphic_pane_vc_g2_ParamLimits

0x6994,	// (0x00058a98) list_set_graphic_pane_vc_g2

0x0001,

0xf9d8,	// (0x00061adc) list_set_graphic_pane_vc_g_ParamLimits

0xf9d8,	// (0x00061adc) list_set_graphic_pane_vc_g

0x69a0,	// (0x00058aa4) text_primary_small_cp13_vc_ParamLimits

0x69a0,	// (0x00058aa4) text_primary_small_cp13_vc

0x69b8,	// (0x00058abc) list_set_graphic_pane_vc_ParamLimits

0x69b8,	// (0x00058abc) list_set_graphic_pane_vc

0xd0f4,	// (0x0005f1f8) input_focus_pane_cp2_vc

0xd0ea,	// (0x0005f1ee) setting_code_pane_vc_g1

0x2da1,	// (0x00054ea5) setting_code_pane_vc_t1

0x69cb,	// (0x00058acf) set_text_pane_vc_t1_ParamLimits

0x69cb,	// (0x00058acf) set_text_pane_vc_t1

0xd0f4,	// (0x0005f1f8) input_focus_pane_cp1_vc

0x69e7,	// (0x00058aeb) list_set_text_pane_vc

0xd0ea,	// (0x0005f1ee) setting_text_pane_vc_g1

0xd0f4,	// (0x0005f1f8) bg_set_opt_pane_cp2_vc

0x2d98,	// (0x00054e9c) setting_slider_graphic_pane_vc_g1

0x69f1,	// (0x00058af5) setting_slider_graphic_pane_vc_t1

0x6a01,	// (0x00058b05) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9dd,	// (0x00061ae1) setting_slider_graphic_pane_vc_t

0x6a11,	// (0x00058b15) slider_set_pane_cp_vc

0x6a19,	// (0x00058b1d) slider_set_pane_vc_g1

0x6a22,	// (0x00058b26) slider_set_pane_vc_g2

0x0006,

0xf9e2,	// (0x00061ae6) slider_set_pane_vc_g

0x36d0,	// (0x000557d4) set_opt_bg_pane_g1_copy1

0x36d8,	// (0x000557dc) set_opt_bg_pane_g2_copy1

0x6a4e,	// (0x00058b52) set_opt_bg_pane_g3_copy1

0x36e8,	// (0x000557ec) set_opt_bg_pane_g4_copy1

0x36f0,	// (0x000557f4) set_opt_bg_pane_g5_copy1

0x36f8,	// (0x000557fc) set_opt_bg_pane_g6_copy1

0x6a58,	// (0x00058b5c) set_opt_bg_pane_g7_copy1

0x6a62,	// (0x00058b66) set_opt_bg_pane_g8_copy1

0x6a6c,	// (0x00058b70) set_opt_bg_pane_g9_copy1

0xd0f4,	// (0x0005f1f8) bg_set_opt_pane_cp_vc

0x6a76,	// (0x00058b7a) setting_slider_pane_vc_t1

0x6a85,	// (0x00058b89) setting_slider_pane_vc_t2

0x6a95,	// (0x00058b99) setting_slider_pane_vc_t3

0x0002,

0xf9f1,	// (0x00061af5) setting_slider_pane_vc_t

0x6aa5,	// (0x00058ba9) slider_set_pane_vc

0x1248,	// (0x0005334c) volume_set_pane_vc_g1

0x1251,	// (0x00053355) volume_set_pane_vc_g2

0x125a,	// (0x0005335e) volume_set_pane_vc_g3

0x1263,	// (0x00053367) volume_set_pane_vc_g4

0x126c,	// (0x00053370) volume_set_pane_vc_g5

0x1275,	// (0x00053379) volume_set_pane_vc_g6

0x127e,	// (0x00053382) volume_set_pane_vc_g7

0x1287,	// (0x0005338b) volume_set_pane_vc_g8

0x1290,	// (0x00053394) volume_set_pane_vc_g9

0x1299,	// (0x0005339d) volume_set_pane_vc_g10

0x0009,

0xf88f,	// (0x00061993) volume_set_pane_vc_g

0x6aad,	// (0x00058bb1) volume_set_pane_vc

0x6ab5,	// (0x00058bb9) button_value_adjust_pane_cp1_vc

0x6abf,	// (0x00058bc3) list_highlight_pane_cp2_vc

0x6ac8,	// (0x00058bcc) list_set_pane_vc_ParamLimits

0x6ac8,	// (0x00058bcc) list_set_pane_vc

0x6b26,	// (0x00058c2a) main_pane_set_vc_t1_ParamLimits

0x6b26,	// (0x00058c2a) main_pane_set_vc_t1

0x6b3b,	// (0x00058c3f) main_pane_set_vc_t2_ParamLimits

0x6b3b,	// (0x00058c3f) main_pane_set_vc_t2

0x6b4d,	// (0x00058c51) main_pane_set_vc_t3_ParamLimits

0x6b4d,	// (0x00058c51) main_pane_set_vc_t3

0x6b61,	// (0x00058c65) main_pane_set_vc_t4_ParamLimits

0x6b61,	// (0x00058c65) main_pane_set_vc_t4

0x0003,

0xf9f8,	// (0x00061afc) main_pane_set_vc_t_ParamLimits

0xf9f8,	// (0x00061afc) main_pane_set_vc_t

0x6b75,	// (0x00058c79) setting_code_pane_vc_ParamLimits

0x6b75,	// (0x00058c79) setting_code_pane_vc

0x6b86,	// (0x00058c8a) setting_slider_graphic_pane_vc

0x6b86,	// (0x00058c8a) setting_slider_pane_vc

0x6b86,	// (0x00058c8a) setting_text_pane_vc

0x6b86,	// (0x00058c8a) setting_volume_pane_vc

0x6b90,	// (0x00058c94) scroll_pane_cp121_vc

0x365e,	// (0x00055762) set_content_pane_vc

0x6b98,	// (0x00058c9c) button_value_adjust_pane_g1

0x6ba1,	// (0x00058ca5) button_value_adjust_pane_g2

0x0001,

0xfa52,	// (0x00061b56) button_value_adjust_pane_g

0x6baa,	// (0x00058cae) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6baa,	// (0x00058cae) form_field_slider_wide_pane_vc_t1

0x6bbe,	// (0x00058cc2) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6bbe,	// (0x00058cc2) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa57,	// (0x00061b5b) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa57,	// (0x00061b5b) form_field_slider_wide_pane_vc_t

0x2fd1,	// (0x000550d5) input_focus_pane_cp10_vc_ParamLimits

0x2fd1,	// (0x000550d5) input_focus_pane_cp10_vc

0x6bec,	// (0x00058cf0) slider_cont_pane_cp1_vc_ParamLimits

0x6bec,	// (0x00058cf0) slider_cont_pane_cp1_vc

0x6bfe,	// (0x00058d02) slider_form_pane_g1_cp2

0x6a22,	// (0x00058b26) slider_form_pane_g2_cp2

0x6c2b,	// (0x00058d2f) form_field_slider_pane_vc_t3

0x6c39,	// (0x00058d3d) form_field_slider_pane_vc_t4

0x6c47,	// (0x00058d4b) slider_form_pane_vc_ParamLimits

0x6c47,	// (0x00058d4b) slider_form_pane_vc

0x6c54,	// (0x00058d58) form_field_slider_pane_vc_t1_ParamLimits

0x6c54,	// (0x00058d58) form_field_slider_pane_vc_t1

0x6bbe,	// (0x00058cc2) form_field_slider_pane_vc_t2_ParamLimits

0x6bbe,	// (0x00058cc2) form_field_slider_pane_vc_t2

0x0001,

0xfa69,	// (0x00061b6d) form_field_slider_pane_vc_t_ParamLimits

0xfa69,	// (0x00061b6d) form_field_slider_pane_vc_t

0x2fd1,	// (0x000550d5) input_focus_pane_cp9_vc_ParamLimits

0x2fd1,	// (0x000550d5) input_focus_pane_cp9_vc

0x6c70,	// (0x00058d74) slider_cont_pane_vc_ParamLimits

0x6c70,	// (0x00058d74) slider_cont_pane_vc

0x6c84,	// (0x00058d88) list_form_graphic_pane_cp_vc_ParamLimits

0x6c84,	// (0x00058d88) list_form_graphic_pane_cp_vc

0x4f74,	// (0x00057078) form_field_popup_wide_pane_vc_g1

0x6c99,	// (0x00058d9d) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6c99,	// (0x00058d9d) form_field_popup_wide_pane_vc_t1

0x3684,	// (0x00055788) input_focus_pane_cp8_vc_ParamLimits

0x3684,	// (0x00055788) input_focus_pane_cp8_vc

0x6cde,	// (0x00058de2) list_form_wide_pane_vc_ParamLimits

0x6cde,	// (0x00058de2) list_form_wide_pane_vc

0x6cea,	// (0x00058dee) list_form_graphic_pane_vc_g1

0x6cf2,	// (0x00058df6) list_form_graphic_pane_vc_t1_ParamLimits

0x6cf2,	// (0x00058df6) list_form_graphic_pane_vc_t1

0x2d56,	// (0x00054e5a) list_highlight_pane_cp5_vc_ParamLimits

0x2d56,	// (0x00054e5a) list_highlight_pane_cp5_vc

0x6d0e,	// (0x00058e12) list_form_graphic_pane_vc_ParamLimits

0x6d0e,	// (0x00058e12) list_form_graphic_pane_vc

0x4f74,	// (0x00057078) form_field_popup_pane_vc_g1

0x6d24,	// (0x00058e28) form_field_popup_pane_vc_t1_ParamLimits

0x6d24,	// (0x00058e28) form_field_popup_pane_vc_t1

0x3684,	// (0x00055788) input_focus_pane_cp7_vc_ParamLimits

0x3684,	// (0x00055788) input_focus_pane_cp7_vc

0x6d3b,	// (0x00058e3f) list_form_pane_vc_ParamLimits

0x6d3b,	// (0x00058e3f) list_form_pane_vc

0x6d47,	// (0x00058e4b) data_form_pane_vc_t1_ParamLimits

0x6d47,	// (0x00058e4b) data_form_pane_vc_t1

0x36d0,	// (0x000557d4) input_focus_pane_vc_g1

0x36d8,	// (0x000557dc) input_focus_pane_vc_g2

0x36e0,	// (0x000557e4) input_focus_pane_vc_g3

0x36e8,	// (0x000557ec) input_focus_pane_vc_g4

0x36f0,	// (0x000557f4) input_focus_pane_vc_g5

0x36f8,	// (0x000557fc) input_focus_pane_vc_g6

0x3700,	// (0x00055804) input_focus_pane_vc_g7

0x3708,	// (0x0005580c) input_focus_pane_vc_g8

0x3710,	// (0x00055814) input_focus_pane_vc_g9

0xd0ea,	// (0x0005f1ee) input_focus_pane_vc_g10

0x0009,

0xf66a,	// (0x0006176e) input_focus_pane_vc_g

0x4f68,	// (0x0005706c) data_form_pane_vc_ParamLimits

0x4f68,	// (0x0005706c) data_form_pane_vc

0x4f74,	// (0x00057078) form_field_data_pane_vc_g1

0x6d62,	// (0x00058e66) form_field_data_pane_vc_t1_ParamLimits

0x6d62,	// (0x00058e66) form_field_data_pane_vc_t1

0x3684,	// (0x00055788) input_focus_pane_vc_ParamLimits

0x3684,	// (0x00055788) input_focus_pane_vc

0x6d7c,	// (0x00058e80) button_value_adjust_pane_cp3_vc

0x6d84,	// (0x00058e88) button_value_adjust_pane_cp5_vc

0x6d8c,	// (0x00058e90) form_field_data_pane_vc_ParamLimits

0x6d8c,	// (0x00058e90) form_field_data_pane_vc

0x6da3,	// (0x00058ea7) form_field_data_pane_vc_cp2

0x6dab,	// (0x00058eaf) form_field_data_wide_pane_vc_ParamLimits

0x6dab,	// (0x00058eaf) form_field_data_wide_pane_vc

0x6dc1,	// (0x00058ec5) form_field_data_wide_pane_vc_cp2

0x6dc9,	// (0x00058ecd) form_field_popup_pane_vc_ParamLimits

0x6dc9,	// (0x00058ecd) form_field_popup_pane_vc

0x6de0,	// (0x00058ee4) form_field_popup_wide_pane_vc_ParamLimits

0x6de0,	// (0x00058ee4) form_field_popup_wide_pane_vc

0x6df6,	// (0x00058efa) form_field_slider_pane_vc_ParamLimits

0x6df6,	// (0x00058efa) form_field_slider_pane_vc

0x6e09,	// (0x00058f0d) form_field_slider_wide_pane_vc_ParamLimits

0x6e09,	// (0x00058f0d) form_field_slider_wide_pane_vc

0xdb70,	// (0x0005fc74) grid_touch_1_pane_ParamLimits

0xdb70,	// (0x0005fc74) grid_touch_1_pane

0xdb84,	// (0x0005fc88) grid_touch_2_pane_ParamLimits

0xdb84,	// (0x0005fc88) grid_touch_2_pane

0x6eed,	// (0x00058ff1) touch_pane_g1_ParamLimits

0x6eed,	// (0x00058ff1) touch_pane_g1

0x6e40,	// (0x00058f44) cell_app_pane_cp_wide_ParamLimits

0x6e40,	// (0x00058f44) cell_app_pane_cp_wide

0x6e51,	// (0x00058f55) grid_popup_fast_wide_pane_ParamLimits

0x6e51,	// (0x00058f55) grid_popup_fast_wide_pane

0x6e65,	// (0x00058f69) scroll_pane_cp19_ParamLimits

0x6e65,	// (0x00058f69) scroll_pane_cp19

0xd0f4,	// (0x0005f1f8) bg_popup_window_pane_cp20

0x6e79,	// (0x00058f7d) listscroll_popup_fast_wide_pane

0xdbae,	// (0x0005fcb2) grid_indicator_nsta_pane

0x6e93,	// (0x00058f97) clock_nsta_pane_g1

0x6e9c,	// (0x00058fa0) clock_nsta_pane_t1

0xdbba,	// (0x0005fcbe) cell_indicator_nsta_pane_ParamLimits

0xdbba,	// (0x0005fcbe) cell_indicator_nsta_pane

0x6eed,	// (0x00058ff1) cell_indicator_nsta_pane_g1

0xdbd5,	// (0x0005fcd9) cell_indicator_nsta_pane_g2

0x0001,

0xfa7a,	// (0x00061b7e) cell_indicator_nsta_pane_g

0x6f0d,	// (0x00059011) clock_nsta_pane_cp

0x6f16,	// (0x0005901a) indicator_nsta_pane_cp

0x6f20,	// (0x00059024) nsta_clock_indic_pane_g1

0x2e1f,	// (0x00054f23) grid_indicator_pane

0x3f2b,	// (0x0005602f) scroll_pane_cp29

0x0718,	// (0x0005281c) indicator_nsta_pane_cp2_ParamLimits

0x0718,	// (0x0005281c) indicator_nsta_pane_cp2

0x2d56,	// (0x00054e5a) main_apps_wheel_pane

0x5183,	// (0x00057287) form_midp_field_text_pane_ParamLimits

0x52ce,	// (0x000573d2) scroll_bar_cp050_ParamLimits

0x6f79,	// (0x0005907d) cell_indicator_pane_ParamLimits

0x6f79,	// (0x0005907d) cell_indicator_pane

0x6f90,	// (0x00059094) cell_indicator_pane_g1

0xdbe2,	// (0x0005fce6) grid_wheel_folder_pane_ParamLimits

0xdbe2,	// (0x0005fce6) grid_wheel_folder_pane

0xdbf0,	// (0x0005fcf4) list_wheel_apps_pane_ParamLimits

0xdbf0,	// (0x0005fcf4) list_wheel_apps_pane

0xdbfe,	// (0x0005fd02) main_apps_wheel_pane_g1_ParamLimits

0xdbfe,	// (0x0005fd02) main_apps_wheel_pane_g1

0xdc0a,	// (0x0005fd0e) main_apps_wheel_pane_g2_ParamLimits

0xdc0a,	// (0x0005fd0e) main_apps_wheel_pane_g2

0x0001,

0xfa96,	// (0x00061b9a) main_apps_wheel_pane_g_ParamLimits

0xfa96,	// (0x00061b9a) main_apps_wheel_pane_g

0xdc18,	// (0x0005fd1c) main_apps_wheel_pane_t1_ParamLimits

0xdc18,	// (0x0005fd1c) main_apps_wheel_pane_t1

0xdc2c,	// (0x0005fd30) list_wheel_apps_pane_g1

0xdc34,	// (0x0005fd38) list_wheel_apps_pane_g2

0xdc3c,	// (0x0005fd40) list_wheel_apps_pane_g3

0xdc44,	// (0x0005fd48) list_wheel_apps_pane_g4

0xdc4e,	// (0x0005fd52) list_wheel_apps_pane_g5

0x0004,

0xfa9b,	// (0x00061b9f) list_wheel_apps_pane_g

0x44bf,	// (0x000565c3) navi_icon_text_pane

0xd254,	// (0x0005f358) aid_fill_nsta

0x7055,	// (0x00059159) navi_icon_text_pane_g1

0x7061,	// (0x00059165) navi_icon_text_pane_t1

0x435d,	// (0x00056461) list_set_graphic_pane_t1_ParamLimits

0x435d,	// (0x00056461) list_set_graphic_pane_t1

0x5a39,	// (0x00057b3d) popup_midp_note_alarm_window_t6_ParamLimits

0x5a39,	// (0x00057b3d) popup_midp_note_alarm_window_t6

0x5a4b,	// (0x00057b4f) popup_midp_note_alarm_window_t7_ParamLimits

0x5a4b,	// (0x00057b4f) popup_midp_note_alarm_window_t7

0x5a5d,	// (0x00057b61) popup_midp_note_alarm_window_t8_ParamLimits

0x5a5d,	// (0x00057b61) popup_midp_note_alarm_window_t8

0x5a6f,	// (0x00057b73) popup_midp_note_alarm_window_t9_ParamLimits

0x5a6f,	// (0x00057b73) popup_midp_note_alarm_window_t9

0x5a81,	// (0x00057b85) popup_midp_note_alarm_window_t10_ParamLimits

0x5a81,	// (0x00057b85) popup_midp_note_alarm_window_t10

0x5a93,	// (0x00057b97) popup_midp_note_alarm_window_t11_ParamLimits

0x5a93,	// (0x00057b97) popup_midp_note_alarm_window_t11

0x5aa5,	// (0x00057ba9) scroll_pane_cp17_ParamLimits

0x5aa5,	// (0x00057ba9) scroll_pane_cp17

0x1248,	// (0x0005334c) volume_small_pane_cp_g1

0x1895,	// (0x00053999) volume_small_pane_cp_g2

0x189e,	// (0x000539a2) volume_small_pane_cp_g3

0x18a7,	// (0x000539ab) volume_small_pane_cp_g4

0x18b0,	// (0x000539b4) volume_small_pane_cp_g5

0x18b9,	// (0x000539bd) volume_small_pane_cp_g6

0x18c2,	// (0x000539c6) volume_small_pane_cp_g7

0x18cb,	// (0x000539cf) volume_small_pane_cp_g8

0x18d4,	// (0x000539d8) volume_small_pane_cp_g9

0x18dd,	// (0x000539e1) volume_small_pane_cp_g10

0x471d,	// (0x00056821) midp_ticker_pane_g1_ParamLimits

0x4729,	// (0x0005682d) midp_ticker_pane_g2_ParamLimits

0xf736,	// (0x0006183a) midp_ticker_pane_g_ParamLimits

0x4735,	// (0x00056839) midp_ticker_pane_t1_ParamLimits

0xd278,	// (0x0005f37c) aid_fill_nsta_2

0x52ba,	// (0x000573be) list_form2_midp_pane

0x63ee,	// (0x000584f2) midp_editing_number_pane_ParamLimits

0x63fd,	// (0x00058501) midp_ticker_pane_ParamLimits

0x7073,	// (0x00059177) form2_midp_field_pane

0x7097,	// (0x0005919b) scroll_pane_cp51

0x70b7,	// (0x000591bb) form2_midp_button_pane_ParamLimits

0x70b7,	// (0x000591bb) form2_midp_button_pane

0x70c9,	// (0x000591cd) form2_midp_content_pane_ParamLimits

0x70c9,	// (0x000591cd) form2_midp_content_pane

0x70e3,	// (0x000591e7) form2_midp_field_choice_group_pane

0x70eb,	// (0x000591ef) form2_midp_field_pane_g1

0x70f3,	// (0x000591f7) form2_midp_field_pane_g2

0x70fb,	// (0x000591ff) form2_midp_field_pane_g3

0x7103,	// (0x00059207) form2_midp_field_pane_g4

0x0003,

0xfac0,	// (0x00061bc4) form2_midp_field_pane_g

0x710b,	// (0x0005920f) form2_midp_gauge_slider_pane

0x7113,	// (0x00059217) form2_midp_gauge_wait_pane

0x711b,	// (0x0005921f) form2_midp_image_pane_ParamLimits

0x711b,	// (0x0005921f) form2_midp_image_pane

0x7136,	// (0x0005923a) form2_midp_label_pane_ParamLimits

0x7136,	// (0x0005923a) form2_midp_label_pane

0xdc81,	// (0x0005fd85) form2_midp_label_pane_cp_ParamLimits

0xdc81,	// (0x0005fd85) form2_midp_label_pane_cp

0x717c,	// (0x00059280) form2_midp_string_pane_ParamLimits

0x717c,	// (0x00059280) form2_midp_string_pane

0xc897,	// (0x0005e99b) form2_midp_text_pane_ParamLimits

0xc897,	// (0x0005e99b) form2_midp_text_pane

0x718e,	// (0x00059292) form2_midp_time_pane

0x719e,	// (0x000592a2) input_focus_pane_cp51_ParamLimits

0x719e,	// (0x000592a2) input_focus_pane_cp51

0x71b6,	// (0x000592ba) form2_midp_label_pane_t1_ParamLimits

0x71b6,	// (0x000592ba) form2_midp_label_pane_t1

0xc8b0,	// (0x0005e9b4) form2_mdip_text_pane_t1_ParamLimits

0xc8b0,	// (0x0005e9b4) form2_mdip_text_pane_t1

0x1923,	// (0x00053a27) form2_midp_time_pane_t1

0x71ff,	// (0x00059303) form2_midp_gauge_slider_pane_t1

0xdca0,	// (0x0005fda4) form2_midp_gauge_slider_pane_t2

0xdcb2,	// (0x0005fdb6) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac9,	// (0x00061bcd) form2_midp_gauge_slider_pane_t

0x7235,	// (0x00059339) form2_midp_slider_pane

0x7241,	// (0x00059345) form2_midp_gauge_wait_pane_t1

0x724f,	// (0x00059353) form2_midp_wait_pane_ParamLimits

0x724f,	// (0x00059353) form2_midp_wait_pane

0xdcc4,	// (0x0005fdc8) list_single_2graphic_pane_cp4_ParamLimits

0xdcc4,	// (0x0005fdc8) list_single_2graphic_pane_cp4

0xd692,	// (0x0005f796) list_single_midp_graphic_pane_cp_ParamLimits

0xd692,	// (0x0005f796) list_single_midp_graphic_pane_cp

0xd0f4,	// (0x0005f1f8) list_highlight_pane_cp20

0x729e,	// (0x000593a2) list_single_2graphic_pane_g1_cp4

0x72a6,	// (0x000593aa) list_single_2graphic_pane_g2_cp4

0x72ae,	// (0x000593b2) list_single_2graphic_pane_t1_cp4

0x2d56,	// (0x00054e5a) list_highlight_pane_cp21

0x72bd,	// (0x000593c1) list_single_midp_graphic_pane_g4_cp

0x72cc,	// (0x000593d0) list_single_midp_graphic_pane_t1_cp

0xdcd8,	// (0x0005fddc) form2_mdip_string_pane_t1_ParamLimits

0xdcd8,	// (0x0005fddc) form2_mdip_string_pane_t1

0xd0f4,	// (0x0005f1f8) bg_wml_button_pane_cp2

0xd0ea,	// (0x0005f1ee) form2_midp_image_pane_g1

0x3616,	// (0x0005571a) list_double_large_graphic_pane_g5_ParamLimits

0x3616,	// (0x0005571a) list_double_large_graphic_pane_g5

0xd146,	// (0x0005f24a) midp_form_pane_ParamLimits

0x2d56,	// (0x00054e5a) main_apps_wheel_pane_ParamLimits

0xc523,	// (0x0005e627) popup_preview_window_ParamLimits

0xc523,	// (0x0005e627) popup_preview_window

0x0fc8,	// (0x000530cc) popup_touch_info_window_ParamLimits

0x0fc8,	// (0x000530cc) popup_touch_info_window

0x0fe6,	// (0x000530ea) popup_touch_menu_window_ParamLimits

0x0fe6,	// (0x000530ea) popup_touch_menu_window

0xd0e0,	// (0x0005f1e4) bg_popup_sub_pane_cp6

0x73da,	// (0x000594de) list_touch_menu_pane

0x73e2,	// (0x000594e6) list_single_touch_menu_pane_ParamLimits

0x73e2,	// (0x000594e6) list_single_touch_menu_pane

0x73f8,	// (0x000594fc) list_single_touch_menu_pane_t1

0x2d56,	// (0x00054e5a) bg_popup_sub_pane_cp7_ParamLimits

0x2d56,	// (0x00054e5a) bg_popup_sub_pane_cp7

0x52ee,	// (0x000573f2) heading_sub_pane

0x7406,	// (0x0005950a) list_touch_info_pane_ParamLimits

0x7406,	// (0x0005950a) list_touch_info_pane

0x7416,	// (0x0005951a) list_single_touch_info_pane_ParamLimits

0x7416,	// (0x0005951a) list_single_touch_info_pane

0x7428,	// (0x0005952c) list_single_touch_info_pane_t1

0x7436,	// (0x0005953a) list_single_touch_info_pane_t2

0x0001,

0xfad7,	// (0x00061bdb) list_single_touch_info_pane_t

0x4640,	// (0x00056744) bg_popup_heading_pane_cp

0x7444,	// (0x00059548) heading_sub_pane_t1

0x4f02,	// (0x00057006) bg_popup_preview_window_pane_cp_ParamLimits

0x4f02,	// (0x00057006) bg_popup_preview_window_pane_cp

0x52ee,	// (0x000573f2) heading_preview_pane

0x7406,	// (0x0005950a) list_preview_pane_ParamLimits

0x7406,	// (0x0005950a) list_preview_pane

0x7452,	// (0x00059556) popup_preview_window_g1

0x7416,	// (0x0005951a) list_single_preview_pane_ParamLimits

0x7416,	// (0x0005951a) list_single_preview_pane

0x745a,	// (0x0005955e) list_single_preview_pane_g1

0x7462,	// (0x00059566) list_single_preview_pane_t1

0x7428,	// (0x0005952c) list_single_preview_pane_t2

0x0001,

0xfadc,	// (0x00061be0) list_single_preview_pane_t

0x7470,	// (0x00059574) bg_popup_heading_pane_cp2_ParamLimits

0x7470,	// (0x00059574) bg_popup_heading_pane_cp2

0x7486,	// (0x0005958a) heading_preview_pane_g1

0x748e,	// (0x00059592) heading_preview_pane_t1_ParamLimits

0x748e,	// (0x00059592) heading_preview_pane_t1

0x2e42,	// (0x00054f46) soft_indicator_pane_t1_ParamLimits

0x3556,	// (0x0005565a) scroll_pane_ParamLimits

0x3e24,	// (0x00055f28) scroll_sc2_left_pane

0x3e2d,	// (0x00055f31) scroll_sc2_right_pane

0x3e4c,	// (0x00055f50) scroll_bg_pane_g1_ParamLimits

0x3e61,	// (0x00055f65) scroll_bg_pane_g2_ParamLimits

0x3e79,	// (0x00055f7d) scroll_bg_pane_g3_ParamLimits

0xf6c1,	// (0x000617c5) scroll_bg_pane_g_ParamLimits

0x3e4c,	// (0x00055f50) scroll_handle_pane_g1_ParamLimits

0x3e9b,	// (0x00055f9f) scroll_handle_pane_g2_ParamLimits

0x3e79,	// (0x00055f7d) scroll_handle_pane_g3_ParamLimits

0xf6c8,	// (0x000617cc) scroll_handle_pane_g_ParamLimits

0x0a8c,	// (0x00052b90) popup_choice_list_window_ParamLimits

0x0a8c,	// (0x00052b90) popup_choice_list_window

0x4dd8,	// (0x00056edc) choice_list_pane

0x4e5a,	// (0x00056f5e) cell_toolbar_pane_t1

0x4e82,	// (0x00056f86) toolbar_button_pane_ParamLimits

0x5f5f,	// (0x00058063) ai_gene_pane_1_t2_ParamLimits

0x5f5f,	// (0x00058063) ai_gene_pane_1_t2

0x0001,

0xf8eb,	// (0x000619ef) ai_gene_pane_1_t_ParamLimits

0xf8eb,	// (0x000619ef) ai_gene_pane_1_t

0x74ab,	// (0x000595af) scroll_sc2_left_pane_g1

0x74ab,	// (0x000595af) scroll_sc2_right_pane_g1

0x4964,	// (0x00056a68) bg_popup_sub_pane_cp10

0x74b5,	// (0x000595b9) list_choice_list_pane

0x74ce,	// (0x000595d2) list_single_choice_list_pane_ParamLimits

0x74ce,	// (0x000595d2) list_single_choice_list_pane

0x74e1,	// (0x000595e5) list_single_choice_list_pane_g1

0x3b2a,	// (0x00055c2e) list_single_choice_list_pane_t1_ParamLimits

0x3b2a,	// (0x00055c2e) list_single_choice_list_pane_t1

0x74e9,	// (0x000595ed) choice_list_pane_g1

0x74f1,	// (0x000595f5) choice_list_pane_t1

0xd0e0,	// (0x0005f1e4) input_focus_pane_cp11

0x3d01,	// (0x00055e05) title_pane_stacon_g2_ParamLimits

0x3d01,	// (0x00055e05) title_pane_stacon_g2

0x0002,

0xf6a7,	// (0x000617ab) title_pane_stacon_g_ParamLimits

0xf6a7,	// (0x000617ab) title_pane_stacon_g

0x4640,	// (0x00056744) cursor_press_pane

0xc1ca,	// (0x0005e2ce) popup_fep_hwr_window_ParamLimits

0xc1ca,	// (0x0005e2ce) popup_fep_hwr_window

0x0bb2,	// (0x00052cb6) popup_fep_vkb_window_ParamLimits

0x0bb2,	// (0x00052cb6) popup_fep_vkb_window

0x74ff,	// (0x00059603) cursor_press_pane_g1

0x0002,

0xfb05,	// (0x00061c09) fep_vkb_side_pane_g_ParamLimits

0x196f,	// (0x00053a73) fep_hwr_candidate_pane_ParamLimits

0x196f,	// (0x00053a73) fep_hwr_candidate_pane

0x1999,	// (0x00053a9d) fep_hwr_side_pane_ParamLimits

0x1999,	// (0x00053a9d) fep_hwr_side_pane

0x19b9,	// (0x00053abd) fep_hwr_top_pane_ParamLimits

0x19b9,	// (0x00053abd) fep_hwr_top_pane

0x19d1,	// (0x00053ad5) fep_hwr_write_pane_ParamLimits

0x19d1,	// (0x00053ad5) fep_hwr_write_pane

0xfb05,	// (0x00061c09) fep_vkb_side_pane_g

0x7507,	// (0x0005960b) fep_hwr_top_pane_g1

0x7519,	// (0x0005961d) fep_hwr_top_pane_g2

0x1a0b,	// (0x00053b0f) fep_hwr_top_pane_g3

0x0002,

0xfae1,	// (0x00061be5) fep_hwr_top_pane_g

0x1a20,	// (0x00053b24) fep_hwr_top_text_pane

0x401b,	// (0x0005611f) fep_hwr_top_text_pane_g1

0x754f,	// (0x00059653) fep_hwr_top_text_pane_t1

0x1b16,	// (0x00053c1a) fep_hwr_candidate_pane_g1

0x77a2,	// (0x000598a6) fep_vkb_keypad_pane_g3_ParamLimits

0x77a2,	// (0x000598a6) fep_vkb_keypad_pane_g3

0x77ca,	// (0x000598ce) fep_vkb_keypad_pane_g4_ParamLimits

0x77ca,	// (0x000598ce) fep_vkb_keypad_pane_g4

0x7839,	// (0x0005993d) fep_vkb_bottom_pane_g2_ParamLimits

0x7839,	// (0x0005993d) fep_vkb_bottom_pane_g2

0x0001,

0xfb0c,	// (0x00061c10) fep_vkb_bottom_pane_g_ParamLimits

0xfb0c,	// (0x00061c10) fep_vkb_bottom_pane_g

0x74ab,	// (0x000595af) cell_vkb_side_pane_g2

0x0001,

0xfb16,	// (0x00061c1a) cell_vkb_side_pane_g

0x78c4,	// (0x000599c8) cell_vkb_side_pane_t1

0x78d2,	// (0x000599d6) cell_vkb_side_pane_t1_copy1

0x74ab,	// (0x000595af) bg_fep_vkb_candidate_pane_g2

0x79fe,	// (0x00059b02) cell_vkb_candidate_pane_ParamLimits

0x755d,	// (0x00059661) aid_size_cell_vkb_ParamLimits

0x755d,	// (0x00059661) aid_size_cell_vkb

0x79fe,	// (0x00059b02) cell_vkb_candidate_pane

0x1b3d,	// (0x00053c41) bg_popup_fep_shadow_pane_g1

0xdd5a,	// (0x0005fe5e) fep_vkb_bottom_pane_ParamLimits

0xdd5a,	// (0x0005fe5e) fep_vkb_bottom_pane

0x7621,	// (0x00059725) fep_vkb_candidate_pane_ParamLimits

0x7621,	// (0x00059725) fep_vkb_candidate_pane

0xdd7f,	// (0x0005fe83) fep_vkb_keypad_pane_ParamLimits

0xdd7f,	// (0x0005fe83) fep_vkb_keypad_pane

0xddbb,	// (0x0005febf) fep_vkb_side_pane_ParamLimits

0xddbb,	// (0x0005febf) fep_vkb_side_pane

0xddf7,	// (0x0005fefb) fep_vkb_top_pane_ParamLimits

0xddf7,	// (0x0005fefb) fep_vkb_top_pane

0x76fb,	// (0x000597ff) fep_vkb_top_pane_g1_ParamLimits

0x76fb,	// (0x000597ff) fep_vkb_top_pane_g1

0x770a,	// (0x0005980e) fep_vkb_top_pane_g2_ParamLimits

0x770a,	// (0x0005980e) fep_vkb_top_pane_g2

0x7719,	// (0x0005981d) fep_vkb_top_pane_g3_ParamLimits

0x7719,	// (0x0005981d) fep_vkb_top_pane_g3

0x0003,

0xfafc,	// (0x00061c00) fep_vkb_top_pane_g_ParamLimits

0xfafc,	// (0x00061c00) fep_vkb_top_pane_g

0x7737,	// (0x0005983b) fep_vkb_top_text_pane_ParamLimits

0x7737,	// (0x0005983b) fep_vkb_top_text_pane

0xdedc,	// (0x0005ffe0) fep_vkb_side_pane_g1_ParamLimits

0xdedc,	// (0x0005ffe0) fep_vkb_side_pane_g1

0x7791,	// (0x00059895) grid_vkb_side_pane_ParamLimits

0x7791,	// (0x00059895) grid_vkb_side_pane

0x1b45,	// (0x00053c49) bg_popup_fep_shadow_pane_g2

0x1b4e,	// (0x00053c52) bg_popup_fep_shadow_pane_g3

0x1b56,	// (0x00053c5a) bg_popup_fep_shadow_pane_g4

0x1b5f,	// (0x00053c63) bg_popup_fep_shadow_pane_g5

0x1b69,	// (0x00053c6d) bg_popup_fep_shadow_pane_g6

0x1b71,	// (0x00053c75) bg_popup_fep_shadow_pane_g7

0x36e8,	// (0x000557ec) bg_popup_fep_shadow_pane_g8

0x77e8,	// (0x000598ec) grid_vkb_keypad_number_pane_ParamLimits

0x77e8,	// (0x000598ec) grid_vkb_keypad_number_pane

0x77f8,	// (0x000598fc) grid_vkb_keypad_pane_ParamLimits

0x77f8,	// (0x000598fc) grid_vkb_keypad_pane

0x781e,	// (0x00059922) fep_vkb_bottom_pane_g1_ParamLimits

0x781e,	// (0x00059922) fep_vkb_bottom_pane_g1

0x7847,	// (0x0005994b) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7847,	// (0x0005994b) grid_vkb_keypad_bottom_left_pane

0x785c,	// (0x00059960) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x785c,	// (0x00059960) grid_vkb_keypad_bottom_right_pane

0x7871,	// (0x00059975) fep_vkb_top_text_pane_g1

0xdf23,	// (0x00060027) fep_vkb_top_text_pane_t1

0xdf35,	// (0x00060039) cell_vkb_side_pane_ParamLimits

0xdf35,	// (0x00060039) cell_vkb_side_pane

0x74ab,	// (0x000595af) cell_vkb_side_pane_g1

0x78e0,	// (0x000599e4) cell_vkb_keypad_pane_ParamLimits

0x78e0,	// (0x000599e4) cell_vkb_keypad_pane

0x7955,	// (0x00059a59) cell_vkb_keypad_pane_g1

0x0008,

0xfb29,	// (0x00061c2d) bg_popup_fep_shadow_pane_g

0x1b83,	// (0x00053c87) cell_hwr_side_pane_g1

0x1b83,	// (0x00053c87) cell_hwr_side_pane_g2

0x795f,	// (0x00059a63) cell_vkb_keypad_pane_t1

0xdf4b,	// (0x0006004f) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdf4b,	// (0x0006004f) cell_vkb_keypad_bottom_left_pane

0xdf60,	// (0x00060064) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdf60,	// (0x00060064) cell_vkb_keypad_bottom_right_pane

0x74ab,	// (0x000595af) cell_vkb_keypad_bottom_left_pane_g1

0x74ab,	// (0x000595af) cell_vkb_keypad_bottom_right_pane_g1

0x79c3,	// (0x00059ac7) cell_vkb_keypad_number_pane_ParamLimits

0x79c3,	// (0x00059ac7) cell_vkb_keypad_number_pane

0x79e2,	// (0x00059ae6) cell_vkb_keypad_number_pane_g1

0x79ec,	// (0x00059af0) cell_vkb_keypad_number_pane_g2

0x79f5,	// (0x00059af9) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1b,	// (0x00061c1f) cell_vkb_keypad_number_pane_g

0x795f,	// (0x00059a63) cell_vkb_keypad_number_pane_t1

0x7a19,	// (0x00059b1d) fep_vkb_candidate_pane_g1

0x0001,

0xfb3c,	// (0x00061c40) cell_hwr_side_pane_g

0x7a32,	// (0x00059b36) cell_hwr_side_pane_t1

0x1b8d,	// (0x00053c91) cell_hwr_side_pane_t1_copy1

0x1b9b,	// (0x00053c9f) cell_hwr_candidate_pane_g1

0x1bca,	// (0x00053cce) cell_hwr_candidate_pane_t1

0x74ab,	// (0x000595af) cell_vkb_candidate_pane_g2

0x7a76,	// (0x00059b7a) cell_vkb_candidate_pane_t1

0x1936,	// (0x00053a3a) bg_popup_fep_shadow_pane_ParamLimits

0x1936,	// (0x00053a3a) bg_popup_fep_shadow_pane

0x19eb,	// (0x00053aef) bg_fep_hwr_top_pane_g4

0x752b,	// (0x0005962f) bg_hwr_side_pane_g1_ParamLimits

0x752b,	// (0x0005962f) bg_hwr_side_pane_g1

0xc8e1,	// (0x0005e9e5) cell_hwr_side_pane_ParamLimits

0xc8e1,	// (0x0005e9e5) cell_hwr_side_pane

0x1a97,	// (0x00053b9b) fep_hwr_write_pane_g1_ParamLimits

0x1a97,	// (0x00053b9b) fep_hwr_write_pane_g1

0x1aa4,	// (0x00053ba8) fep_hwr_write_pane_g2_ParamLimits

0x1aa4,	// (0x00053ba8) fep_hwr_write_pane_g2

0x1ab1,	// (0x00053bb5) fep_hwr_write_pane_g3_ParamLimits

0x1ab1,	// (0x00053bb5) fep_hwr_write_pane_g3

0xc901,	// (0x0005ea05) fep_hwr_write_pane_g4_ParamLimits

0xc901,	// (0x0005ea05) fep_hwr_write_pane_g4

0x0005,

0xfae8,	// (0x00061bec) fep_hwr_write_pane_g_ParamLimits

0xfae8,	// (0x00061bec) fep_hwr_write_pane_g

0x19eb,	// (0x00053aef) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x19eb,	// (0x00053aef) bg_fep_hwr_candidate_pane_g2

0x1ad4,	// (0x00053bd8) cell_hwr_candidate_pane_ParamLimits

0x1ad4,	// (0x00053bd8) cell_hwr_candidate_pane

0x1b16,	// (0x00053c1a) fep_hwr_candidate_pane_g1_ParamLimits

0x758b,	// (0x0005968f) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x758b,	// (0x0005968f) bg_popup_fep_shadow_pane_cp2

0x7729,	// (0x0005982d) fep_vkb_top_pane_g4_ParamLimits

0x7729,	// (0x0005982d) fep_vkb_top_pane_g4

0x776f,	// (0x00059873) fep_vkb_side_pane_g2_ParamLimits

0x776f,	// (0x00059873) fep_vkb_side_pane_g2

0xbbd3,	// (0x0005dcd7) list_setting_pane_t4_ParamLimits

0xbbd3,	// (0x0005dcd7) list_setting_pane_t4

0xbc55,	// (0x0005dd59) list_setting_number_pane_t5_ParamLimits

0xbc55,	// (0x0005dd59) list_setting_number_pane_t5

0x4052,	// (0x00056156) list_double_heading_pane_cp2_ParamLimits

0x4052,	// (0x00056156) list_double_heading_pane_cp2

0x35fe,	// (0x00055702) list_double_heading_pane_g1_cp2_ParamLimits

0x35fe,	// (0x00055702) list_double_heading_pane_g1_cp2

0x3692,	// (0x00055796) list_double_heading_pane_g2_cp2_ParamLimits

0x3692,	// (0x00055796) list_double_heading_pane_g2_cp2

0x7a84,	// (0x00059b88) list_double_heading_pane_t1_cp2_ParamLimits

0x7a84,	// (0x00059b88) list_double_heading_pane_t1_cp2

0x7a9a,	// (0x00059b9e) list_double_heading_pane_t2_cp2_ParamLimits

0x7a9a,	// (0x00059b9e) list_double_heading_pane_t2_cp2

0xd0d8,	// (0x0005f1dc) aid_value_unit2

0xf418,	// (0x0006151c) popup_preview_fixed_window

0x2fdf,	// (0x000550e3) bg_popup_preview_window_pane_cp02

0x7aac,	// (0x00059bb0) list_preview_fixed_pane

0x7af2,	// (0x00059bf6) list_empty_pane_fp_ParamLimits

0x7af2,	// (0x00059bf6) list_empty_pane_fp

0x7af2,	// (0x00059bf6) list_single_cale_day_pane_fp_ParamLimits

0x7af2,	// (0x00059bf6) list_single_cale_day_pane_fp

0x7af2,	// (0x00059bf6) list_single_graphic_heading_pane_fp_ParamLimits

0x7af2,	// (0x00059bf6) list_single_graphic_heading_pane_fp

0x7af2,	// (0x00059bf6) list_single_graphic_pane_fp_ParamLimits

0x7af2,	// (0x00059bf6) list_single_graphic_pane_fp

0x7af2,	// (0x00059bf6) list_single_heading_pane_fp_ParamLimits

0x7af2,	// (0x00059bf6) list_single_heading_pane_fp

0x7af2,	// (0x00059bf6) list_single_pane_fp_ParamLimits

0x7af2,	// (0x00059bf6) list_single_pane_fp

0x7b07,	// (0x00059c0b) list_single_pane_fp_g1_ParamLimits

0x7b07,	// (0x00059c0b) list_single_pane_fp_g1

0x35fe,	// (0x00055702) list_single_pane_fp_g2_ParamLimits

0x35fe,	// (0x00055702) list_single_pane_fp_g2

0x3692,	// (0x00055796) list_single_pane_fp_g3_ParamLimits

0x3692,	// (0x00055796) list_single_pane_fp_g3

0x7b13,	// (0x00059c17) list_single_pane_fp_g4_ParamLimits

0x7b13,	// (0x00059c17) list_single_pane_fp_g4

0x0003,

0xfb4f,	// (0x00061c53) list_single_pane_fp_g_ParamLimits

0xfb4f,	// (0x00061c53) list_single_pane_fp_g

0x1be8,	// (0x00053cec) list_single_pane_fp_t1_ParamLimits

0x1be8,	// (0x00053cec) list_single_pane_fp_t1

0x1bff,	// (0x00053d03) list_single_graphic_pane_fp_g1_ParamLimits

0x1bff,	// (0x00053d03) list_single_graphic_pane_fp_g1

0x7b07,	// (0x00059c0b) list_single_graphic_pane_fp_g2_ParamLimits

0x7b07,	// (0x00059c0b) list_single_graphic_pane_fp_g2

0x35fe,	// (0x00055702) list_single_graphic_pane_fp_g3_ParamLimits

0x35fe,	// (0x00055702) list_single_graphic_pane_fp_g3

0x3692,	// (0x00055796) list_single_graphic_pane_fp_g4_ParamLimits

0x3692,	// (0x00055796) list_single_graphic_pane_fp_g4

0x7b13,	// (0x00059c17) list_single_graphic_pane_fp_g5_ParamLimits

0x7b13,	// (0x00059c17) list_single_graphic_pane_fp_g5

0x0004,

0xfb58,	// (0x00061c5c) list_single_graphic_pane_fp_g_ParamLimits

0xfb58,	// (0x00061c5c) list_single_graphic_pane_fp_g

0x1c0b,	// (0x00053d0f) list_single_graphic_pane_fp_t1_ParamLimits

0x1c0b,	// (0x00053d0f) list_single_graphic_pane_fp_t1

0x1bff,	// (0x00053d03) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x1bff,	// (0x00053d03) list_single_graphic_heading_pane_fp_g1

0x7b07,	// (0x00059c0b) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7b07,	// (0x00059c0b) list_single_graphic_heading_pane_fp_g2

0x35fe,	// (0x00055702) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x35fe,	// (0x00055702) list_single_graphic_heading_pane_fp_g3

0x3692,	// (0x00055796) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3692,	// (0x00055796) list_single_graphic_heading_pane_fp_g4

0x7b13,	// (0x00059c17) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7b13,	// (0x00059c17) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb58,	// (0x00061c5c) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb58,	// (0x00061c5c) list_single_graphic_heading_pane_fp_g

0x1c21,	// (0x00053d25) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x1c21,	// (0x00053d25) list_single_graphic_heading_pane_fp_t1

0x1c37,	// (0x00053d3b) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x1c37,	// (0x00053d3b) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb63,	// (0x00061c67) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb63,	// (0x00061c67) list_single_graphic_heading_pane_fp_t

0x1c49,	// (0x00053d4d) list_single_cale_day_pane_fp_g1_ParamLimits

0x1c49,	// (0x00053d4d) list_single_cale_day_pane_fp_g1

0x7b1f,	// (0x00059c23) list_single_cale_day_pane_fp_g2_ParamLimits

0x7b1f,	// (0x00059c23) list_single_cale_day_pane_fp_g2

0x3867,	// (0x0005596b) list_single_cale_day_pane_fp_g3_ParamLimits

0x3867,	// (0x0005596b) list_single_cale_day_pane_fp_g3

0x388f,	// (0x00055993) list_single_cale_day_pane_fp_g4_ParamLimits

0x388f,	// (0x00055993) list_single_cale_day_pane_fp_g4

0x38b3,	// (0x000559b7) list_single_cale_day_pane_fp_g5_ParamLimits

0x38b3,	// (0x000559b7) list_single_cale_day_pane_fp_g5

0x0004,

0xfb68,	// (0x00061c6c) list_single_cale_day_pane_fp_g_ParamLimits

0xfb68,	// (0x00061c6c) list_single_cale_day_pane_fp_g

0x1c81,	// (0x00053d85) list_single_cale_day_pane_fp_t1_ParamLimits

0x1c81,	// (0x00053d85) list_single_cale_day_pane_fp_t1

0x1ca7,	// (0x00053dab) list_single_cale_day_pane_fp_t2_ParamLimits

0x1ca7,	// (0x00053dab) list_single_cale_day_pane_fp_t2

0x1cc0,	// (0x00053dc4) list_single_cale_day_pane_fp_t3_ParamLimits

0x1cc0,	// (0x00053dc4) list_single_cale_day_pane_fp_t3

0x0002,

0xfb73,	// (0x00061c77) list_single_cale_day_pane_fp_t_ParamLimits

0xfb73,	// (0x00061c77) list_single_cale_day_pane_fp_t

0x7b07,	// (0x00059c0b) list_empty_pane_fp_g1_ParamLimits

0x7b07,	// (0x00059c0b) list_empty_pane_fp_g1

0x1cd9,	// (0x00053ddd) list_empty_pane_fp_t1

0x1ce7,	// (0x00053deb) list_empty_pane_fp_t2

0x0001,

0xfb7a,	// (0x00061c7e) list_empty_pane_fp_t

0x7b07,	// (0x00059c0b) list_single_heading_pane_fp_g1_ParamLimits

0x7b07,	// (0x00059c0b) list_single_heading_pane_fp_g1

0x35fe,	// (0x00055702) list_single_heading_pane_fp_g2_ParamLimits

0x35fe,	// (0x00055702) list_single_heading_pane_fp_g2

0x3692,	// (0x00055796) list_single_heading_pane_fp_g3_ParamLimits

0x3692,	// (0x00055796) list_single_heading_pane_fp_g3

0x0002,

0xfb7f,	// (0x00061c83) list_single_heading_pane_fp_g_ParamLimits

0xfb7f,	// (0x00061c83) list_single_heading_pane_fp_g

0x1cf5,	// (0x00053df9) list_single_heading_pane_fp_t1_ParamLimits

0x1cf5,	// (0x00053df9) list_single_heading_pane_fp_t1

0x1d07,	// (0x00053e0b) list_single_heading_pane_fp_t2_ParamLimits

0x1d07,	// (0x00053e0b) list_single_heading_pane_fp_t2

0x0001,

0xfb86,	// (0x00061c8a) list_single_heading_pane_fp_t_ParamLimits

0xfb86,	// (0x00061c8a) list_single_heading_pane_fp_t

0x3b98,	// (0x00055c9c) aid_size_cell_fast

0x2f4f,	// (0x00055053) soft_indicator_pane_cp1_t1

0x3bd5,	// (0x00055cd9) cell_app_pane_cp2_ParamLimits

0x3bd5,	// (0x00055cd9) cell_app_pane_cp2

0x1958,	// (0x00053a5c) fep_hwr_candidate_drop_down_list_pane

0x1b30,	// (0x00053c34) fep_hwr_candidate_pane_g3_ParamLimits

0x1b30,	// (0x00053c34) fep_hwr_candidate_pane_g3

0xdecf,	// (0x0005ffd3) fep_hwr_candidate_pane_g4_ParamLimits

0xdecf,	// (0x0005ffd3) fep_hwr_candidate_pane_g4

0x0002,

0xfaf5,	// (0x00061bf9) fep_hwr_candidate_pane_g_ParamLimits

0xfaf5,	// (0x00061bf9) fep_hwr_candidate_pane_g

0x7610,	// (0x00059714) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7610,	// (0x00059714) fep_vkb_candidate_drop_down_list_pane

0x7a21,	// (0x00059b25) fep_vkb_candidate_pane_g3

0x7a29,	// (0x00059b2d) fep_vkb_candidate_pane_g4

0x0002,

0xfb22,	// (0x00061c26) fep_vkb_candidate_pane_g

0x1b9b,	// (0x00053c9f) cell_hwr_candidate_pane_g1_ParamLimits

0x1ba9,	// (0x00053cad) cell_hwr_candidate_pane_g3_ParamLimits

0x1ba9,	// (0x00053cad) cell_hwr_candidate_pane_g3

0x7f5e,	// (0x0005a062) cell_hwr_candidate_pane_g4_ParamLimits

0x7f5e,	// (0x0005a062) cell_hwr_candidate_pane_g4

0x0002,

0xfb41,	// (0x00061c45) cell_hwr_candidate_pane_g_ParamLimits

0xfb41,	// (0x00061c45) cell_hwr_candidate_pane_g

0x7a40,	// (0x00059b44) cell_vkb_candidate_pane_g3_ParamLimits

0x7a40,	// (0x00059b44) cell_vkb_candidate_pane_g3

0x7a5b,	// (0x00059b5f) cell_vkb_candidate_pane_g4_ParamLimits

0x7a5b,	// (0x00059b5f) cell_vkb_candidate_pane_g4

0x7b2b,	// (0x00059c2f) cell_app_pane_cp2_g1_ParamLimits

0x7b2b,	// (0x00059c2f) cell_app_pane_cp2_g1

0x7b49,	// (0x00059c4d) cell_app_pane_cp2_g2_ParamLimits

0x7b49,	// (0x00059c4d) cell_app_pane_cp2_g2

0x0001,

0xfb8b,	// (0x00061c8f) cell_app_pane_cp2_g_ParamLimits

0xfb8b,	// (0x00061c8f) cell_app_pane_cp2_g

0x7b55,	// (0x00059c59) cell_app_pane_cp2_t1_ParamLimits

0x7b55,	// (0x00059c59) cell_app_pane_cp2_t1

0x3684,	// (0x00055788) grid_highlight_pane_cp1_ParamLimits

0x3684,	// (0x00055788) grid_highlight_pane_cp1

0x1d1d,	// (0x00053e21) cell_hwr_candidate_pane_cp1_ParamLimits

0x1d1d,	// (0x00053e21) cell_hwr_candidate_pane_cp1

0x1b9b,	// (0x00053c9f) fep_hwr_candidate_drop_down_list_pane_g1

0x1d3c,	// (0x00053e40) fep_hwr_candidate_drop_down_list_pane_g2

0x1d49,	// (0x00053e4d) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb90,	// (0x00061c94) fep_hwr_candidate_drop_down_list_pane_g

0x1d56,	// (0x00053e5a) fep_hwr_candidate_drop_down_list_scroll_pane

0x1d5f,	// (0x00053e63) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1d5f,	// (0x00053e63) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1d6c,	// (0x00053e70) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1d6c,	// (0x00053e70) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1d79,	// (0x00053e7d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1d79,	// (0x00053e7d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1d86,	// (0x00053e8a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1d86,	// (0x00053e8a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1da1,	// (0x00053ea5) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1da1,	// (0x00053ea5) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1dbc,	// (0x00053ec0) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1dbc,	// (0x00053ec0) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1dd7,	// (0x00053edb) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1dd7,	// (0x00053edb) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1df2,	// (0x00053ef6) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1df2,	// (0x00053ef6) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb97,	// (0x00061c9b) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb97,	// (0x00061c9b) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7b67,	// (0x00059c6b) cell_vkb_candidate_pane_cp1_ParamLimits

0x7b67,	// (0x00059c6b) cell_vkb_candidate_pane_cp1

0x7729,	// (0x0005982d) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7729,	// (0x0005982d) fep_vkb_candidate_drop_down_list_pane_g1

0x7b87,	// (0x00059c8b) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7b87,	// (0x00059c8b) fep_vkb_candidate_drop_down_list_pane_g2

0x7b94,	// (0x00059c98) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7b94,	// (0x00059c98) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba8,	// (0x00061cac) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba8,	// (0x00061cac) fep_vkb_candidate_drop_down_list_pane_g

0x7ba1,	// (0x00059ca5) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7ba1,	// (0x00059ca5) fep_vkb_candidate_drop_down_list_scroll_pane

0x7bae,	// (0x00059cb2) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7bae,	// (0x00059cb2) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7bbb,	// (0x00059cbf) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7bbb,	// (0x00059cbf) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7bc7,	// (0x00059ccb) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7bc7,	// (0x00059ccb) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7bd3,	// (0x00059cd7) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7bd3,	// (0x00059cd7) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7bf4,	// (0x00059cf8) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7bf4,	// (0x00059cf8) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7c15,	// (0x00059d19) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7c15,	// (0x00059d19) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7c36,	// (0x00059d3a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7c36,	// (0x00059d3a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7c57,	// (0x00059d5b) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7c57,	// (0x00059d5b) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbaf,	// (0x00061cb3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbaf,	// (0x00061cb3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb589,	// (0x0005d68d) title_pane_g1_ParamLimits

0xb59c,	// (0x0005d6a0) title_pane_g2_ParamLimits

0xf527,	// (0x0006162b) title_pane_g_ParamLimits

0x400b,	// (0x0005610f) aid_call2_pane

0x4013,	// (0x00056117) aid_call_pane

0x401b,	// (0x0005611f) popup_clock_analogue_window_g1

0x401b,	// (0x0005611f) popup_clock_analogue_window_g2

0x05ab,	// (0x000526af) popup_clock_analogue_window_g3

0x05b4,	// (0x000526b8) popup_clock_analogue_window_g4

0xd0ea,	// (0x0005f1ee) popup_clock_analogue_window_g5

0x0004,

0xf6d6,	// (0x000617da) popup_clock_analogue_window_g

0x05bc,	// (0x000526c0) popup_clock_analogue_window_t1

0x05ca,	// (0x000526ce) clock_digital_number_pane_ParamLimits

0x05ca,	// (0x000526ce) clock_digital_number_pane

0x05d6,	// (0x000526da) clock_digital_number_pane_cp02_ParamLimits

0x05d6,	// (0x000526da) clock_digital_number_pane_cp02

0x05e2,	// (0x000526e6) clock_digital_number_pane_cp03_ParamLimits

0x05e2,	// (0x000526e6) clock_digital_number_pane_cp03

0x05ee,	// (0x000526f2) clock_digital_number_pane_cp04_ParamLimits

0x05ee,	// (0x000526f2) clock_digital_number_pane_cp04

0x05fa,	// (0x000526fe) clock_digital_separator_pane_ParamLimits

0x05fa,	// (0x000526fe) clock_digital_separator_pane

0x0606,	// (0x0005270a) popup_clock_digital_window_t1_ParamLimits

0x0606,	// (0x0005270a) popup_clock_digital_window_t1

0xd0ea,	// (0x0005f1ee) clock_digital_number_pane_g1

0xd0ea,	// (0x0005f1ee) clock_digital_number_pane_g2

0x0001,

0xf6e1,	// (0x000617e5) clock_digital_number_pane_g

0xd0ea,	// (0x0005f1ee) clock_digital_separator_pane_g1

0xd0ea,	// (0x0005f1ee) clock_digital_separator_pane_g2

0x0001,

0xf6e1,	// (0x000617e5) clock_digital_separator_pane_g

0xd254,	// (0x0005f358) aid_fill_nsta_ParamLimits

0xd38a,	// (0x0005f48e) indicator_nsta_pane_ParamLimits

0x4c65,	// (0x00056d69) popup_clock_analogue_window

0x4c65,	// (0x00056d69) popup_clock_digital_window

0xdbae,	// (0x0005fcb2) grid_indicator_nsta_pane_ParamLimits

0x6eaa,	// (0x00058fae) clock_nsta_pane_t2

0x0001,

0xfa75,	// (0x00061b79) clock_nsta_pane_t

0x056f,	// (0x00052673) aid_size_max_handle

0x0579,	// (0x0005267d) aid_size_min_handle

0x4640,	// (0x00056744) editor_scroll_pane

0x7c72,	// (0x00059d76) ex_editor_pane

0x3b06,	// (0x00055c0a) scroll_pane_cp13

0x3582,	// (0x00055686) scroll_pane_cp14

0x404a,	// (0x0005614e) scroll_pane_cp36

0xbf09,	// (0x0005e00d) list_single_graphic_hl_pane_cp2_ParamLimits

0xbf09,	// (0x0005e00d) list_single_graphic_hl_pane_cp2

0xda10,	// (0x0005fb14) list_single_graphic_hl_pane_ParamLimits

0xda10,	// (0x0005fb14) list_single_graphic_hl_pane

0x1e0d,	// (0x00053f11) aid_size_min_hl_cp1

0x7c7a,	// (0x00059d7e) list_highlight_pane_cp34_ParamLimits

0x7c7a,	// (0x00059d7e) list_highlight_pane_cp34

0x7c8b,	// (0x00059d8f) list_single_graphic_hl_pane_g1_ParamLimits

0x7c8b,	// (0x00059d8f) list_single_graphic_hl_pane_g1

0xc916,	// (0x0005ea1a) list_single_graphic_hl_pane_g2_ParamLimits

0xc916,	// (0x0005ea1a) list_single_graphic_hl_pane_g2

0xc916,	// (0x0005ea1a) list_single_graphic_hl_pane_g3_ParamLimits

0xc916,	// (0x0005ea1a) list_single_graphic_hl_pane_g3

0x4514,	// (0x00056618) list_single_graphic_hl_pane_g4_ParamLimits

0x4514,	// (0x00056618) list_single_graphic_hl_pane_g4

0xde33,	// (0x0005ff37) list_single_graphic_hl_pane_g5_ParamLimits

0xde33,	// (0x0005ff37) list_single_graphic_hl_pane_g5

0x0004,

0xfbc0,	// (0x00061cc4) list_single_graphic_hl_pane_g_ParamLimits

0xfbc0,	// (0x00061cc4) list_single_graphic_hl_pane_g

0xc922,	// (0x0005ea26) list_single_graphic_hl_pane_t1_ParamLimits

0xc922,	// (0x0005ea26) list_single_graphic_hl_pane_t1

0x7c98,	// (0x00059d9c) aid_size_min_hl_cp2

0x7ca1,	// (0x00059da5) list_highlight_pane_cp34_cp2_ParamLimits

0x7ca1,	// (0x00059da5) list_highlight_pane_cp34_cp2

0x7c8b,	// (0x00059d8f) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7c8b,	// (0x00059d8f) list_single_graphic_hl_pane_g1_cp2

0x7cae,	// (0x00059db2) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7cae,	// (0x00059db2) list_single_graphic_hl_pane_g2_cp2

0x7cba,	// (0x00059dbe) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7cba,	// (0x00059dbe) list_single_graphic_hl_pane_g3_cp2

0x7cc8,	// (0x00059dcc) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7cc8,	// (0x00059dcc) list_single_graphic_hl_pane_g4_cp2

0x7cd4,	// (0x00059dd8) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7cd4,	// (0x00059dd8) list_single_graphic_hl_pane_g5_cp2

0xbff8,	// (0x0005e0fc) control_pane_g4_ParamLimits

0xbff8,	// (0x0005e0fc) control_pane_g4

0x4964,	// (0x00056a68) bg_popup_sub_pane_cp10_ParamLimits

0x74b5,	// (0x000595b9) list_choice_list_pane_ParamLimits

0x74c4,	// (0x000595c8) scroll_pane_cp23

0x2fdf,	// (0x000550e3) bg_popup_preview_window_pane_cp02_ParamLimits

0x7aac,	// (0x00059bb0) list_preview_fixed_pane_ParamLimits

0x7ac2,	// (0x00059bc6) list_preview_fixed_pane_cp_ParamLimits

0x7ac2,	// (0x00059bc6) list_preview_fixed_pane_cp

0x7ace,	// (0x00059bd2) popup_preview_fixed_window_g1_ParamLimits

0x7ace,	// (0x00059bd2) popup_preview_fixed_window_g1

0x7ada,	// (0x00059bde) popup_preview_fixed_window_g2_ParamLimits

0x7ada,	// (0x00059bde) popup_preview_fixed_window_g2

0x0002,

0xfb48,	// (0x00061c4c) popup_preview_fixed_window_g_ParamLimits

0xfb48,	// (0x00061c4c) popup_preview_fixed_window_g

0x04e3,	// (0x000525e7) aid_navi_side_left_pane_ParamLimits

0x04f8,	// (0x000525fc) aid_navi_side_right_pane_ParamLimits

0x0510,	// (0x00052614) navi_icon_pane_stacon_ParamLimits

0x0524,	// (0x00052628) navi_navi_pane_stacon_ParamLimits

0x0510,	// (0x00052614) navi_text_pane_stacon_ParamLimits

0xf30f,	// (0x00061413) main_text_info_pane

0x7cfe,	// (0x00059e02) listscroll_text_info_pane

0x7d06,	// (0x00059e0a) list_text_info_pane_ParamLimits

0x7d06,	// (0x00059e0a) list_text_info_pane

0x7d15,	// (0x00059e19) scroll_pane_cp24_ParamLimits

0x7d15,	// (0x00059e19) scroll_pane_cp24

0xdf7b,	// (0x0006007f) list_text_info_pane_t1_ParamLimits

0xdf7b,	// (0x0006007f) list_text_info_pane_t1

0xc13d,	// (0x0005e241) popup_fast_swap2_window_ParamLimits

0xc13d,	// (0x0005e241) popup_fast_swap2_window

0x7d64,	// (0x00059e68) aid_size_cell_fast2

0xd0e0,	// (0x0005f1e4) bg_popup_window_pane_cp17

0x52ee,	// (0x000573f2) heading_pane_cp2

0x7d6e,	// (0x00059e72) listscroll_fast2_pane

0x7d76,	// (0x00059e7a) grid_fast2_pane

0x7d80,	// (0x00059e84) listscroll_fast2_pane_g1

0x7d88,	// (0x00059e8c) listscroll_fast2_pane_g2

0x0001,

0xfbcb,	// (0x00061ccf) listscroll_fast2_pane_g

0x3b06,	// (0x00055c0a) scroll_pane_cp26

0x7d92,	// (0x00059e96) cell_fast2_pane_ParamLimits

0x7d92,	// (0x00059e96) cell_fast2_pane

0x7da7,	// (0x00059eab) cell_fast2_pane_g1

0x7db0,	// (0x00059eb4) cell_fast2_pane_g2

0x7db9,	// (0x00059ebd) cell_fast2_pane_g3

0x0002,

0xfbd0,	// (0x00061cd4) cell_fast2_pane_g

0x333f,	// (0x00055443) grid_highlight_pane_cp9

0x0a68,	// (0x00052b6c) main_eswt_pane_ParamLimits

0x0a68,	// (0x00052b6c) main_eswt_pane

0x7d2a,	// (0x00059e2e) list_single_text_info_pane

0x7dc1,	// (0x00059ec5) eswt_ctrl_button_pane

0x7dc1,	// (0x00059ec5) eswt_ctrl_canvas_pane

0x7dc9,	// (0x00059ecd) eswt_ctrl_combo_pane

0x7dc1,	// (0x00059ec5) eswt_ctrl_default_pane

0x7dc1,	// (0x00059ec5) eswt_ctrl_label_pane

0x7dd1,	// (0x00059ed5) eswt_ctrl_wait_pane

0x7dd9,	// (0x00059edd) eswt_shell_pane

0xd0e0,	// (0x0005f1e4) listscroll_eswt_app_pane

0x7df9,	// (0x00059efd) popup_eswt_tasktip_window_ParamLimits

0x7df9,	// (0x00059efd) popup_eswt_tasktip_window

0x4f02,	// (0x00057006) bg_popup_window_pane_cp18

0x7e0a,	// (0x00059f0e) eswt_control_pane_g1_ParamLimits

0x7e0a,	// (0x00059f0e) eswt_control_pane_g1

0x7e17,	// (0x00059f1b) eswt_control_pane_g2_ParamLimits

0x7e17,	// (0x00059f1b) eswt_control_pane_g2

0x7e24,	// (0x00059f28) eswt_control_pane_g3_ParamLimits

0x7e24,	// (0x00059f28) eswt_control_pane_g3

0x7e31,	// (0x00059f35) eswt_control_pane_g4_ParamLimits

0x7e31,	// (0x00059f35) eswt_control_pane_g4

0x0003,

0xfbd7,	// (0x00061cdb) eswt_control_pane_g_ParamLimits

0xfbd7,	// (0x00061cdb) eswt_control_pane_g

0x3684,	// (0x00055788) bg_button_pane_ParamLimits

0x3684,	// (0x00055788) bg_button_pane

0x3354,	// (0x00055458) common_borders_pane_copy2_ParamLimits

0x3354,	// (0x00055458) common_borders_pane_copy2

0x7e3e,	// (0x00059f42) control_button_pane_g1_ParamLimits

0x7e3e,	// (0x00059f42) control_button_pane_g1

0x7e4a,	// (0x00059f4e) control_button_pane_g2_ParamLimits

0x7e4a,	// (0x00059f4e) control_button_pane_g2

0x7e56,	// (0x00059f5a) control_button_pane_g3_ParamLimits

0x7e56,	// (0x00059f5a) control_button_pane_g3

0x0002,

0xfbe0,	// (0x00061ce4) control_button_pane_g_ParamLimits

0xfbe0,	// (0x00061ce4) control_button_pane_g

0x7e6a,	// (0x00059f6e) control_button_pane_t1

0x7e78,	// (0x00059f7c) control_button_pane_t2

0x0001,

0xfbe7,	// (0x00061ceb) control_button_pane_t

0x4e8e,	// (0x00056f92) bg_button_pane_g1

0x4e9e,	// (0x00056fa2) bg_button_pane_g2

0x4e96,	// (0x00056f9a) bg_button_pane_g3

0x4eae,	// (0x00056fb2) bg_button_pane_g4

0x4ea6,	// (0x00056faa) bg_button_pane_g5

0x4eb6,	// (0x00056fba) bg_button_pane_g6

0x4ebe,	// (0x00056fc2) bg_button_pane_g7

0x4ece,	// (0x00056fd2) bg_button_pane_g8

0x4ec6,	// (0x00056fca) bg_button_pane_g9

0x0008,

0xf83f,	// (0x00061943) bg_button_pane_g

0x7470,	// (0x00059574) common_borders_pane_ParamLimits

0x7470,	// (0x00059574) common_borders_pane

0x7e0a,	// (0x00059f0e) eswt_control_pane_g1_copy1_ParamLimits

0x7e0a,	// (0x00059f0e) eswt_control_pane_g1_copy1

0x7e17,	// (0x00059f1b) eswt_control_pane_g2_copy1_ParamLimits

0x7e17,	// (0x00059f1b) eswt_control_pane_g2_copy1

0x7e24,	// (0x00059f28) eswt_control_pane_g3_copy1_ParamLimits

0x7e24,	// (0x00059f28) eswt_control_pane_g3_copy1

0x7e31,	// (0x00059f35) eswt_control_pane_g4_copy1_ParamLimits

0x7e31,	// (0x00059f35) eswt_control_pane_g4_copy1

0x74ab,	// (0x000595af) bg_eswt_ctrl_canvas_pane_g1

0x7470,	// (0x00059574) common_borders_pane_cp2_ParamLimits

0x7470,	// (0x00059574) common_borders_pane_cp2

0x7470,	// (0x00059574) common_borders_pane_cp3_ParamLimits

0x7470,	// (0x00059574) common_borders_pane_cp3

0x7e86,	// (0x00059f8a) separator_horizontal_pane

0x7e8e,	// (0x00059f92) separator_vertical_pane

0x7e0a,	// (0x00059f0e) eswt_control_pane_g1_copy2_ParamLimits

0x7e0a,	// (0x00059f0e) eswt_control_pane_g1_copy2

0x7e17,	// (0x00059f1b) eswt_control_pane_g2_copy2_ParamLimits

0x7e17,	// (0x00059f1b) eswt_control_pane_g2_copy2

0x7e24,	// (0x00059f28) eswt_control_pane_g3_copy2_ParamLimits

0x7e24,	// (0x00059f28) eswt_control_pane_g3_copy2

0x7e31,	// (0x00059f35) eswt_control_pane_g4_copy2_ParamLimits

0x7e31,	// (0x00059f35) eswt_control_pane_g4_copy2

0xd0e0,	// (0x0005f1e4) common_borders_pane_cp4

0x7e97,	// (0x00059f9b) separator_horizontal_pane_g1

0x7ea0,	// (0x00059fa4) separator_horizontal_pane_g2

0x7ea9,	// (0x00059fad) separator_horizontal_pane_g3

0x0002,

0xfbec,	// (0x00061cf0) separator_horizontal_pane_g

0x7e0a,	// (0x00059f0e) eswt_control_pane_g1_copy3_ParamLimits

0x7e0a,	// (0x00059f0e) eswt_control_pane_g1_copy3

0x7e17,	// (0x00059f1b) eswt_control_pane_g2_copy3_ParamLimits

0x7e17,	// (0x00059f1b) eswt_control_pane_g2_copy3

0x7e24,	// (0x00059f28) eswt_control_pane_g3_copy3_ParamLimits

0x7e24,	// (0x00059f28) eswt_control_pane_g3_copy3

0x7e31,	// (0x00059f35) eswt_control_pane_g4_copy3_ParamLimits

0x7e31,	// (0x00059f35) eswt_control_pane_g4_copy3

0xd0e0,	// (0x0005f1e4) common_borders_pane_cp5

0x7eb2,	// (0x00059fb6) separator_vertical_pane_g1

0x7ebb,	// (0x00059fbf) separator_vertical_pane_g2

0x7ec4,	// (0x00059fc8) separator_vertical_pane_g3

0x0002,

0xfbf3,	// (0x00061cf7) separator_vertical_pane_g

0x7e0a,	// (0x00059f0e) eswt_control_pane_g1_copy4_ParamLimits

0x7e0a,	// (0x00059f0e) eswt_control_pane_g1_copy4

0x7e17,	// (0x00059f1b) eswt_control_pane_g2_copy4_ParamLimits

0x7e17,	// (0x00059f1b) eswt_control_pane_g2_copy4

0x7e24,	// (0x00059f28) eswt_control_pane_g3_copy4_ParamLimits

0x7e24,	// (0x00059f28) eswt_control_pane_g3_copy4

0x7e31,	// (0x00059f35) eswt_control_pane_g4_copy4_ParamLimits

0x7e31,	// (0x00059f35) eswt_control_pane_g4_copy4

0x7ecd,	// (0x00059fd1) eswt_ctrl_combo_button_pane

0x7ed5,	// (0x00059fd9) eswt_ctrl_input_pane

0x7edd,	// (0x00059fe1) popup_choice_list_window_cp70

0x7ee5,	// (0x00059fe9) eswt_ctrl_input_pane_t1

0xd0e0,	// (0x0005f1e4) input_focus_pane_cp70

0x7470,	// (0x00059574) bg_button_pane_cp70_ParamLimits

0x7470,	// (0x00059574) bg_button_pane_cp70

0x7ef3,	// (0x00059ff7) eswt_ctrl_combo_button_pane_g1

0x7efb,	// (0x00059fff) wait_bar_pane_cp70

0x4f02,	// (0x00057006) bg_popup_window_pane_cp70_ParamLimits

0x4f02,	// (0x00057006) bg_popup_window_pane_cp70

0x7f03,	// (0x0005a007) popup_eswt_tasktip_window_t1

0x7f19,	// (0x0005a01d) wait_bar_pane_cp71_ParamLimits

0x7f19,	// (0x0005a01d) wait_bar_pane_cp71

0x7f25,	// (0x0005a029) grid_eswt_app_pane

0x3e24,	// (0x00055f28) scroll_pane_cp70

0xdf96,	// (0x0006009a) cell_eswt_app_pane_ParamLimits

0xdf96,	// (0x0006009a) cell_eswt_app_pane

0xdfc0,	// (0x000600c4) cell_eswt_app_pane_g1_ParamLimits

0xdfc0,	// (0x000600c4) cell_eswt_app_pane_g1

0xdfef,	// (0x000600f3) cell_eswt_app_pane_g2_ParamLimits

0xdfef,	// (0x000600f3) cell_eswt_app_pane_g2

0x0001,

0xfbfa,	// (0x00061cfe) cell_eswt_app_pane_g_ParamLimits

0xfbfa,	// (0x00061cfe) cell_eswt_app_pane_g

0xe018,	// (0x0006011c) cell_eswt_app_pane_t1_ParamLimits

0xe018,	// (0x0006011c) cell_eswt_app_pane_t1

0x8009,	// (0x0005a10d) grid_highlight_pane_cp70_ParamLimits

0x8009,	// (0x0005a10d) grid_highlight_pane_cp70

0x4514,	// (0x00056618) set_content_pane_g1

0xd211,	// (0x0005f315) status_small_volume_pane

0xc938,	// (0x0005ea3c) status_small_volume_pane_g1

0xc940,	// (0x0005ea44) volume_small2_pane

0xc949,	// (0x0005ea4d) volume_small2_pane_g1

0xc952,	// (0x0005ea56) volume_small2_pane_g2

0xc95b,	// (0x0005ea5f) volume_small2_pane_g3

0xc964,	// (0x0005ea68) volume_small2_pane_g4

0xc96d,	// (0x0005ea71) volume_small2_pane_g5

0xc976,	// (0x0005ea7a) volume_small2_pane_g6

0xc97f,	// (0x0005ea83) volume_small2_pane_g7

0xc988,	// (0x0005ea8c) volume_small2_pane_g8

0xc991,	// (0x0005ea95) volume_small2_pane_g9

0xc99a,	// (0x0005ea9e) volume_small2_pane_g10

0x0009,

0xfbff,	// (0x00061d03) volume_small2_pane_g

0x7871,	// (0x00059975) fep_vkb_top_text_pane_g1_ParamLimits

0xdf23,	// (0x00060027) fep_vkb_top_text_pane_t1_ParamLimits

0x7ae6,	// (0x00059bea) popup_preview_fixed_window_g3_ParamLimits

0x7ae6,	// (0x00059bea) popup_preview_fixed_window_g3

0xc766,	// (0x0005e86a) popup_toolbar_trans_pane

0xd884,	// (0x0005f988) aid_height_set_list_ParamLimits

0x6267,	// (0x0005836b) aid_size_parent_ParamLimits

0x4964,	// (0x00056a68) list_highlight_pane_cp2_ParamLimits

0x4514,	// (0x00056618) set_content_pane_g1_ParamLimits

0xc886,	// (0x0005e98a) list_single_image_pane_ParamLimits

0xc886,	// (0x0005e98a) list_single_image_pane

0xe04a,	// (0x0006014e) aid_size_cell_image_ParamLimits

0xe04a,	// (0x0006014e) aid_size_cell_image

0xe057,	// (0x0006015b) grid_single_image_pane_ParamLimits

0xe057,	// (0x0006015b) grid_single_image_pane

0x7170,	// (0x00059274) list_single_image_pane_g1_ParamLimits

0x7170,	// (0x00059274) list_single_image_pane_g1

0x802e,	// (0x0005a132) list_single_image_pane_g2_ParamLimits

0x802e,	// (0x0005a132) list_single_image_pane_g2

0x0001,

0xfc14,	// (0x00061d18) list_single_image_pane_g_ParamLimits

0xfc14,	// (0x00061d18) list_single_image_pane_g

0x8042,	// (0x0005a146) list_single_image_pane_t1_ParamLimits

0x8042,	// (0x0005a146) list_single_image_pane_t1

0xe063,	// (0x00060167) cell_image_list_pane_ParamLimits

0xe063,	// (0x00060167) cell_image_list_pane

0xe077,	// (0x0006017b) cell_image_list_pane_g1

0xe080,	// (0x00060184) cell_image_list_pane_g2

0x0001,

0xfc19,	// (0x00061d1d) cell_image_list_pane_g

0x807e,	// (0x0005a182) aid_size_cell_tb_trans_pane

0x3684,	// (0x00055788) bg_tb_trans_pane

0x8090,	// (0x0005a194) grid_tb_trans_pane

0x4e8e,	// (0x00056f92) bg_tb_trans_pane_g1

0x4e9e,	// (0x00056fa2) bg_tb_trans_pane_g2

0x4e96,	// (0x00056f9a) bg_tb_trans_pane_g3

0x4eae,	// (0x00056fb2) bg_tb_trans_pane_g4

0x4ea6,	// (0x00056faa) bg_tb_trans_pane_g5

0x4ece,	// (0x00056fd2) bg_tb_trans_pane_g6

0x4ec6,	// (0x00056fca) bg_tb_trans_pane_g7

0x4eb6,	// (0x00056fba) bg_tb_trans_pane_g8

0x4ebe,	// (0x00056fc2) bg_tb_trans_pane_g9

0x0008,

0xfc1e,	// (0x00061d22) bg_tb_trans_pane_g

0x80a4,	// (0x0005a1a8) cell_toolbar_trans_pane_ParamLimits

0x80a4,	// (0x0005a1a8) cell_toolbar_trans_pane

0x74ab,	// (0x000595af) cell_toolbar_trans_pane_g1

0xdc65,	// (0x0005fd69) list_form2_midp_pane_t1

0xdc73,	// (0x0005fd77) list_form2_midp_pane_t2

0x0001,

0xfabb,	// (0x00061bbf) list_form2_midp_pane_t

0x7097,	// (0x0005919b) scroll_pane_cp51_ParamLimits

0x725f,	// (0x00059363) form2_midp_wait_pane_g1

0x7268,	// (0x0005936c) form2_midp_wait_pane_g2

0x7271,	// (0x00059375) form2_midp_wait_pane_g3

0x0002,

0xfad0,	// (0x00061bd4) form2_midp_wait_pane_g

0x2d56,	// (0x00054e5a) list_highlight_pane_cp21_ParamLimits

0x72bd,	// (0x000593c1) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x72cc,	// (0x000593d0) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x641f,	// (0x00058523) list_single_2graphic_im_pane_ParamLimits

0x641f,	// (0x00058523) list_single_2graphic_im_pane

0x80ca,	// (0x0005a1ce) list_single_2graphic_im_pane_g1_ParamLimits

0x80ca,	// (0x0005a1ce) list_single_2graphic_im_pane_g1

0x80db,	// (0x0005a1df) list_single_2graphic_im_pane_g2_ParamLimits

0x80db,	// (0x0005a1df) list_single_2graphic_im_pane_g2

0x80e7,	// (0x0005a1eb) list_single_2graphic_im_pane_g3_ParamLimits

0x80e7,	// (0x0005a1eb) list_single_2graphic_im_pane_g3

0x0003,

0xfc31,	// (0x00061d35) list_single_2graphic_im_pane_g_ParamLimits

0xfc31,	// (0x00061d35) list_single_2graphic_im_pane_g

0x8107,	// (0x0005a20b) list_single_2graphic_im_pane_t1_ParamLimits

0x8107,	// (0x0005a20b) list_single_2graphic_im_pane_t1

0x7af2,	// (0x00059bf6) list_single_graphic_2heading_pane_fp_ParamLimits

0x7af2,	// (0x00059bf6) list_single_graphic_2heading_pane_fp

0x1bff,	// (0x00053d03) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x1bff,	// (0x00053d03) list_single_graphic_2heading_pane_fp_g1

0x7b07,	// (0x00059c0b) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7b07,	// (0x00059c0b) list_single_graphic_2heading_pane_fp_g2

0x35fe,	// (0x00055702) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x35fe,	// (0x00055702) list_single_graphic_2heading_pane_fp_g3

0x3692,	// (0x00055796) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3692,	// (0x00055796) list_single_graphic_2heading_pane_fp_g4

0x7b13,	// (0x00059c17) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7b13,	// (0x00059c17) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb58,	// (0x00061c5c) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb58,	// (0x00061c5c) list_single_graphic_2heading_pane_fp_g

0x1ea3,	// (0x00053fa7) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x1ea3,	// (0x00053fa7) list_single_graphic_2heading_pane_fp_t1

0x1c37,	// (0x00053d3b) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x1c37,	// (0x00053d3b) list_single_graphic_2heading_pane_fp_t2

0x1eb9,	// (0x00053fbd) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x1eb9,	// (0x00053fbd) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3a,	// (0x00061d3e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3a,	// (0x00061d3e) list_single_graphic_2heading_pane_fp_t

0x7537,	// (0x0005963b) fep_hwr_write_pane_g5_ParamLimits

0x7537,	// (0x0005963b) fep_hwr_write_pane_g5

0x7543,	// (0x00059647) fep_hwr_write_pane_g6_ParamLimits

0x7543,	// (0x00059647) fep_hwr_write_pane_g6

0x7dd9,	// (0x00059edd) eswt_shell_pane_ParamLimits

0x4f02,	// (0x00057006) bg_popup_window_pane_cp18_ParamLimits

0x52ee,	// (0x000573f2) heading_pane_cp70

0x7f03,	// (0x0005a007) popup_eswt_tasktip_window_t1_ParamLimits

0xd2af,	// (0x0005f3b3) aid_touch_tab_arrow_left

0xd2c5,	// (0x0005f3c9) aid_touch_tab_arrow_right

0xb5b4,	// (0x0005d6b8) title_pane_g3_ParamLimits

0xb5b4,	// (0x0005d6b8) title_pane_g3

0x3643,	// (0x00055747) set_value_pane_g1

0xc766,	// (0x0005e86a) popup_toolbar_trans_pane_ParamLimits

0x807e,	// (0x0005a182) aid_size_cell_tb_trans_pane_ParamLimits

0x3684,	// (0x00055788) bg_tb_trans_pane_ParamLimits

0x8090,	// (0x0005a194) grid_tb_trans_pane_ParamLimits

0x2fdf,	// (0x000550e3) cont_note_pane_ParamLimits

0x2fdf,	// (0x000550e3) cont_note_pane

0x3354,	// (0x00055458) cont_snote2_single_text_pane_ParamLimits

0x3354,	// (0x00055458) cont_snote2_single_text_pane

0x3354,	// (0x00055458) cont_snote2_single_graphic_pane_ParamLimits

0x3354,	// (0x00055458) cont_snote2_single_graphic_pane

0x551d,	// (0x00057621) cont_note_wait_pane_ParamLimits

0x551d,	// (0x00057621) cont_note_wait_pane

0x551d,	// (0x00057621) cont_note_image_pane_ParamLimits

0x551d,	// (0x00057621) cont_note_image_pane

0x8138,	// (0x0005a23c) popup_note2_window_g1_ParamLimits

0x8138,	// (0x0005a23c) popup_note2_window_g1

0x8169,	// (0x0005a26d) popup_note2_window_t1_ParamLimits

0x8169,	// (0x0005a26d) popup_note2_window_t1

0x81ae,	// (0x0005a2b2) popup_note2_window_t2_ParamLimits

0x81ae,	// (0x0005a2b2) popup_note2_window_t2

0x81f3,	// (0x0005a2f7) popup_note2_window_t3_ParamLimits

0x81f3,	// (0x0005a2f7) popup_note2_window_t3

0x8238,	// (0x0005a33c) popup_note2_window_t4_ParamLimits

0x8238,	// (0x0005a33c) popup_note2_window_t4

0x3063,	// (0x00055167) popup_note2_window_t5_ParamLimits

0x3063,	// (0x00055167) popup_note2_window_t5

0x0004,

0xfc46,	// (0x00061d4a) popup_note2_window_t_ParamLimits

0xfc46,	// (0x00061d4a) popup_note2_window_t

0x8267,	// (0x0005a36b) popup_note2_image_window_g1_ParamLimits

0x8267,	// (0x0005a36b) popup_note2_image_window_g1

0x8273,	// (0x0005a377) popup_note2_image_window_g2_ParamLimits

0x8273,	// (0x0005a377) popup_note2_image_window_g2

0x0001,

0xfc51,	// (0x00061d55) popup_note2_image_window_g_ParamLimits

0xfc51,	// (0x00061d55) popup_note2_image_window_g

0x8285,	// (0x0005a389) popup_note2_image_window_t1_ParamLimits

0x8285,	// (0x0005a389) popup_note2_image_window_t1

0x829d,	// (0x0005a3a1) popup_note2_image_window_t2_ParamLimits

0x829d,	// (0x0005a3a1) popup_note2_image_window_t2

0x82b5,	// (0x0005a3b9) popup_note2_image_window_t3_ParamLimits

0x82b5,	// (0x0005a3b9) popup_note2_image_window_t3

0x0002,

0xfc56,	// (0x00061d5a) popup_note2_image_window_t_ParamLimits

0xfc56,	// (0x00061d5a) popup_note2_image_window_t

0x552b,	// (0x0005762f) popup_note2_wait_window_g1_ParamLimits

0x552b,	// (0x0005762f) popup_note2_wait_window_g1

0x82d1,	// (0x0005a3d5) popup_note2_wait_window_g2_ParamLimits

0x82d1,	// (0x0005a3d5) popup_note2_wait_window_g2

0x5543,	// (0x00057647) popup_note2_wait_window_g3_ParamLimits

0x5543,	// (0x00057647) popup_note2_wait_window_g3

0x0002,

0xfc5d,	// (0x00061d61) popup_note2_wait_window_g_ParamLimits

0xfc5d,	// (0x00061d61) popup_note2_wait_window_g

0x82dd,	// (0x0005a3e1) popup_note2_wait_window_t1_ParamLimits

0x82dd,	// (0x0005a3e1) popup_note2_wait_window_t1

0x82fb,	// (0x0005a3ff) popup_note2_wait_window_t2_ParamLimits

0x82fb,	// (0x0005a3ff) popup_note2_wait_window_t2

0x8319,	// (0x0005a41d) popup_note2_wait_window_t3_ParamLimits

0x8319,	// (0x0005a41d) popup_note2_wait_window_t3

0x832b,	// (0x0005a42f) popup_note2_wait_window_t4_ParamLimits

0x832b,	// (0x0005a42f) popup_note2_wait_window_t4

0x0003,

0xfc64,	// (0x00061d68) popup_note2_wait_window_t_ParamLimits

0xfc64,	// (0x00061d68) popup_note2_wait_window_t

0x833d,	// (0x0005a441) wait_bar2_pane_ParamLimits

0x833d,	// (0x0005a441) wait_bar2_pane

0x8355,	// (0x0005a459) popup_snote2_single_text_window_g1_ParamLimits

0x8355,	// (0x0005a459) popup_snote2_single_text_window_g1

0x837d,	// (0x0005a481) popup_snote2_single_text_window_t1_ParamLimits

0x837d,	// (0x0005a481) popup_snote2_single_text_window_t1

0x83c9,	// (0x0005a4cd) popup_snote2_single_text_window_t2_ParamLimits

0x83c9,	// (0x0005a4cd) popup_snote2_single_text_window_t2

0x8415,	// (0x0005a519) popup_snote2_single_text_window_t3_ParamLimits

0x8415,	// (0x0005a519) popup_snote2_single_text_window_t3

0x8456,	// (0x0005a55a) popup_snote2_single_text_window_t4_ParamLimits

0x8456,	// (0x0005a55a) popup_snote2_single_text_window_t4

0x848c,	// (0x0005a590) popup_snote2_single_text_window_t5_ParamLimits

0x848c,	// (0x0005a590) popup_snote2_single_text_window_t5

0x0004,

0xfc6d,	// (0x00061d71) popup_snote2_single_text_window_t_ParamLimits

0xfc6d,	// (0x00061d71) popup_snote2_single_text_window_t

0x84b7,	// (0x0005a5bb) popup_snote2_single_graphic_window_g1_ParamLimits

0x84b7,	// (0x0005a5bb) popup_snote2_single_graphic_window_g1

0x84df,	// (0x0005a5e3) popup_snote2_single_graphic_window_g2_ParamLimits

0x84df,	// (0x0005a5e3) popup_snote2_single_graphic_window_g2

0x0001,

0xfc78,	// (0x00061d7c) popup_snote2_single_graphic_window_g_ParamLimits

0xfc78,	// (0x00061d7c) popup_snote2_single_graphic_window_g

0x8507,	// (0x0005a60b) popup_snote2_single_graphic_window_t1_ParamLimits

0x8507,	// (0x0005a60b) popup_snote2_single_graphic_window_t1

0x8553,	// (0x0005a657) popup_snote2_single_graphic_window_t2_ParamLimits

0x8553,	// (0x0005a657) popup_snote2_single_graphic_window_t2

0x8415,	// (0x0005a519) popup_snote2_single_graphic_window_t3_ParamLimits

0x8415,	// (0x0005a519) popup_snote2_single_graphic_window_t3

0x8456,	// (0x0005a55a) popup_snote2_single_graphic_window_t4_ParamLimits

0x8456,	// (0x0005a55a) popup_snote2_single_graphic_window_t4

0x848c,	// (0x0005a590) popup_snote2_single_graphic_window_t5_ParamLimits

0x848c,	// (0x0005a590) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7d,	// (0x00061d81) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7d,	// (0x00061d81) popup_snote2_single_graphic_window_t

0x6f58,	// (0x0005905c) clock_nsta_pane_cp2_t1

0x6f58,	// (0x0005905c) clock_nsta_pane_cp2_t2

0x0001,

0xfa91,	// (0x00061b95) clock_nsta_pane_cp2_t

0x0261,	// (0x00052365) form_field_data_wide_pane_g1_ParamLimits

0x35fe,	// (0x00055702) form_field_data_wide_pane_g2_ParamLimits

0x35fe,	// (0x00055702) form_field_data_wide_pane_g2

0x3692,	// (0x00055796) form_field_data_wide_pane_g3_ParamLimits

0x3692,	// (0x00055796) form_field_data_wide_pane_g3

0x0002,

0xf659,	// (0x0006175d) form_field_data_wide_pane_g_ParamLimits

0xf659,	// (0x0006175d) form_field_data_wide_pane_g

0xdb98,	// (0x0005fc9c) grid_touch_3_pane_ParamLimits

0xdb98,	// (0x0005fc9c) grid_touch_3_pane

0xe089,	// (0x0006018d) cell_touch_3_pane_ParamLimits

0xe089,	// (0x0006018d) cell_touch_3_pane

0x74ab,	// (0x000595af) cell_touch_3_pane_g1

0x74ab,	// (0x000595af) cell_touch_3_pane_g2

0x0001,

0xfb16,	// (0x00061c1a) cell_touch_3_pane_g

0x30bb,	// (0x000551bf) cont_query_data_pane

0x30c3,	// (0x000551c7) cont_query_data_pane_cp1

0x85cd,	// (0x0005a6d1) button_value_adjust_pane_cp7

0x85d5,	// (0x0005a6d9) query_popup_pane_cp3

0x4124,	// (0x00056228) bg_popup_sub_pane_cp22_ParamLimits

0x0625,	// (0x00052729) navi_navi_volume_pane_cp2

0x0640,	// (0x00052744) popup_side_volume_key_window_g2

0x064f,	// (0x00052753) popup_side_volume_key_window_g3

0x0002,

0xf6ef,	// (0x000617f3) popup_side_volume_key_window_g

0x066c,	// (0x00052770) popup_side_volume_key_window_t2

0x0001,

0xf6f6,	// (0x000617fa) popup_side_volume_key_window_t

0x43de,	// (0x000564e2) popup_side_volume_key_window_ParamLimits

0xb9d3,	// (0x0005dad7) list_double_graphic_pane_g4_ParamLimits

0xb9d3,	// (0x0005dad7) list_double_graphic_pane_g4

0xd9fd,	// (0x0005fb01) list_single_2heading_msg_pane_ParamLimits

0xd9fd,	// (0x0005fb01) list_single_2heading_msg_pane

0xde47,	// (0x0005ff4b) list_single_2heading_msg_pane_g1_ParamLimits

0xde47,	// (0x0005ff4b) list_single_2heading_msg_pane_g1

0xde53,	// (0x0005ff57) list_single_2heading_msg_pane_g2_ParamLimits

0xde53,	// (0x0005ff57) list_single_2heading_msg_pane_g2

0xde66,	// (0x0005ff6a) list_single_2heading_msg_pane_g3_ParamLimits

0xde66,	// (0x0005ff6a) list_single_2heading_msg_pane_g3

0x390f,	// (0x00055a13) list_single_2heading_msg_pane_g4_ParamLimits

0x390f,	// (0x00055a13) list_single_2heading_msg_pane_g4

0x0003,

0xfc88,	// (0x00061d8c) list_single_2heading_msg_pane_g_ParamLimits

0xfc88,	// (0x00061d8c) list_single_2heading_msg_pane_g

0x1ed9,	// (0x00053fdd) list_single_2heading_msg_pane_t1_ParamLimits

0x1ed9,	// (0x00053fdd) list_single_2heading_msg_pane_t1

0xc9a3,	// (0x0005eaa7) list_single_2heading_msg_pane_t2_ParamLimits

0xc9a3,	// (0x0005eaa7) list_single_2heading_msg_pane_t2

0xca0e,	// (0x0005eb12) list_single_2heading_msg_pane_t3_ParamLimits

0xca0e,	// (0x0005eb12) list_single_2heading_msg_pane_t3

0x3994,	// (0x00055a98) list_single_2heading_msg_pane_t4_ParamLimits

0x3994,	// (0x00055a98) list_single_2heading_msg_pane_t4

0x0003,

0xfc91,	// (0x00061d95) list_single_2heading_msg_pane_t_ParamLimits

0xfc91,	// (0x00061d95) list_single_2heading_msg_pane_t

0x2caa,	// (0x00054dae) title_pane_g4_ParamLimits

0x2caa,	// (0x00054dae) title_pane_g4

0x0434,	// (0x00052538) title_pane_stacon_g3_ParamLimits

0x0434,	// (0x00052538) title_pane_stacon_g3

0x80fb,	// (0x0005a1ff) list_single_2graphic_im_pane_g4_ParamLimits

0x80fb,	// (0x0005a1ff) list_single_2graphic_im_pane_g4

0x5f7c,	// (0x00058080) popup_side_volume_key_window_cp

0x677f,	// (0x00058883) main_idle_act2_pane_t1

0x1063,	// (0x00053167) toolbar_button_pane_g10

0xb910,	// (0x0005da14) popup_toolbar_window_cp1

0x6f49,	// (0x0005904d) clock_nsta_pane_cp_t1

0x6f49,	// (0x0005904d) clock_nsta_pane_cp_t2

0x0001,

0xfa8c,	// (0x00061b90) clock_nsta_pane_cp_t

0x0625,	// (0x00052729) navi_navi_volume_pane_cp2_ParamLimits

0x0634,	// (0x00052738) popup_side_volume_key_window_g1_ParamLimits

0x0640,	// (0x00052744) popup_side_volume_key_window_g2_ParamLimits

0x064f,	// (0x00052753) popup_side_volume_key_window_g3_ParamLimits

0xf6ef,	// (0x000617f3) popup_side_volume_key_window_g_ParamLimits

0x1944,	// (0x00053a48) fep_hwr_aid_pane

0x19eb,	// (0x00053aef) bg_fep_hwr_top_pane_g4_ParamLimits

0x7507,	// (0x0005960b) fep_hwr_top_pane_g1_ParamLimits

0x7519,	// (0x0005961d) fep_hwr_top_pane_g2_ParamLimits

0x1a0b,	// (0x00053b0f) fep_hwr_top_pane_g3_ParamLimits

0xfae1,	// (0x00061be5) fep_hwr_top_pane_g_ParamLimits

0x1a20,	// (0x00053b24) fep_hwr_top_text_pane_ParamLimits

0x5d3f,	// (0x00057e43) aid_touch_tab_arrow_arrow_2

0x5d48,	// (0x00057e4c) aid_touch_tab_arrow_left_2

0x1958,	// (0x00053a5c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x198f,	// (0x00053a93) fep_hwr_prediction_pane

0x7679,	// (0x0005977d) fep_vkb_prediction_pane

0xdf03,	// (0x00060007) fep_vkb_side_pane_g3_ParamLimits

0xdf03,	// (0x00060007) fep_vkb_side_pane_g3

0x1b9b,	// (0x00053c9f) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1d3c,	// (0x00053e40) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1d49,	// (0x00053e4d) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb90,	// (0x00061c94) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1f01,	// (0x00054005) fep_hwr_prediction_pane_g1

0x1f0b,	// (0x0005400f) fep_hwr_prediction_pane_g2

0x1f13,	// (0x00054017) fep_hwr_prediction_pane_g3

0x1f1b,	// (0x0005401f) fep_hwr_prediction_pane_g4

0x0003,

0xfc9a,	// (0x00061d9e) fep_hwr_prediction_pane_g

0x85fa,	// (0x0005a6fe) fep_vkb_prediction_pane_g1

0x8604,	// (0x0005a708) fep_vkb_prediction_pane_g2

0x860c,	// (0x0005a710) fep_vkb_prediction_pane_g3

0x8614,	// (0x0005a718) fep_vkb_prediction_pane_g4

0x0003,

0xfca3,	// (0x00061da7) fep_vkb_prediction_pane_g

0x142e,	// (0x00053532) slider_set_pane_g3

0x1442,	// (0x00053546) slider_set_pane_g4

0x145a,	// (0x0005355e) slider_set_pane_g5

0x142e,	// (0x00053532) slider_set_pane_g6

0x1470,	// (0x00053574) slider_set_pane_g7

0x63cc,	// (0x000584d0) slider_form_pane_g3

0x63d5,	// (0x000584d9) slider_form_pane_g4

0x63dd,	// (0x000584e1) slider_form_pane_g5

0x63cc,	// (0x000584d0) slider_form_pane_g6

0xd9cf,	// (0x0005fad3) slider_form_pane_g7

0x6a2a,	// (0x00058b2e) slider_set_pane_vc_g3

0x6a33,	// (0x00058b37) slider_set_pane_vc_g4

0x6a3c,	// (0x00058b40) slider_set_pane_vc_g5

0x6a2a,	// (0x00058b2e) slider_set_pane_vc_g6

0x6a45,	// (0x00058b49) slider_set_pane_vc_g7

0x6c07,	// (0x00058d0b) slider_form_pane_vc_g1

0x6c10,	// (0x00058d14) slider_form_pane_vc_g2

0x6c19,	// (0x00058d1d) slider_form_pane_vc_g3

0x6c07,	// (0x00058d0b) slider_form_pane_vc_g4

0x6c22,	// (0x00058d26) slider_form_pane_vc_g5

0x0004,

0xfa5e,	// (0x00061b62) slider_form_pane_vc_g

0xf30f,	// (0x00061413) main_idle_act3_pane

0x861c,	// (0x0005a720) ai3_links_pane

0xe0d1,	// (0x000601d5) popup_ai3_data_window_ParamLimits

0xe0d1,	// (0x000601d5) popup_ai3_data_window

0xd0e0,	// (0x0005f1e4) grid_ai3_links_pane

0xe0eb,	// (0x000601ef) cell_ai3_links_pane_ParamLimits

0xe0eb,	// (0x000601ef) cell_ai3_links_pane

0x8657,	// (0x0005a75b) bg_popup_sub_pane_cp11

0x8664,	// (0x0005a768) cell_ai3_links_pane_g1

0xd0e0,	// (0x0005f1e4) bg_popup_sub_pane_cp12

0x8689,	// (0x0005a78d) heading_ai3_data_pane

0x8691,	// (0x0005a795) list_ai3_gene_pane

0x869d,	// (0x0005a7a1) popup_ai3_data_window_g1

0x86a5,	// (0x0005a7a9) heading_ai3_data_pane_g1

0x86ad,	// (0x0005a7b1) heading_ai3_data_pane_t1

0x86bb,	// (0x0005a7bf) list_double_ai3_gene_pane_ParamLimits

0x86bb,	// (0x0005a7bf) list_double_ai3_gene_pane

0x86c8,	// (0x0005a7cc) list_single_ai3_gene_pane_ParamLimits

0x86c8,	// (0x0005a7cc) list_single_ai3_gene_pane

0x7470,	// (0x00059574) list_highlight_pane_cp7_ParamLimits

0x7470,	// (0x00059574) list_highlight_pane_cp7

0x86d5,	// (0x0005a7d9) list_single_a13_gene_pane_t1_ParamLimits

0x86d5,	// (0x0005a7d9) list_single_a13_gene_pane_t1

0x86ec,	// (0x0005a7f0) list_single_ai3_gene_pane_g1

0x86f5,	// (0x0005a7f9) list_single_ai3_gene_pane_g2

0x0001,

0xfcac,	// (0x00061db0) list_single_ai3_gene_pane_g

0x86fd,	// (0x0005a801) list_double_ai3_gene_pane_g1_ParamLimits

0x86fd,	// (0x0005a801) list_double_ai3_gene_pane_g1

0x8709,	// (0x0005a80d) list_double_ai3_gene_pane_t1_ParamLimits

0x8709,	// (0x0005a80d) list_double_ai3_gene_pane_t1

0x8725,	// (0x0005a829) list_double_ai3_gene_pane_t2_ParamLimits

0x8725,	// (0x0005a829) list_double_ai3_gene_pane_t2

0x873b,	// (0x0005a83f) list_double_ai3_gene_pane_t3_ParamLimits

0x873b,	// (0x0005a83f) list_double_ai3_gene_pane_t3

0x0002,

0xfcb1,	// (0x00061db5) list_double_ai3_gene_pane_t_ParamLimits

0xfcb1,	// (0x00061db5) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1ecf,	// (0x00053fd3) aid_size_min_col_2

0xe0bb,	// (0x000601bf) aid_size_min_msg_ParamLimits

0xe0bb,	// (0x000601bf) aid_size_min_msg

0xdf17,	// (0x0006001b) fep_vkb_top_text_pane_g2_ParamLimits

0xdf17,	// (0x0006001b) fep_vkb_top_text_pane_g2

0x0001,

0xfb11,	// (0x00061c15) fep_vkb_top_text_pane_g_ParamLimits

0xfb11,	// (0x00061c15) fep_vkb_top_text_pane_g

0xf30f,	// (0x00061413) main_hc_apps_shell_pane

0x8758,	// (0x0005a85c) grid_hc_apps_pane_ParamLimits

0x8758,	// (0x0005a85c) grid_hc_apps_pane

0x876a,	// (0x0005a86e) list_hc_apps_pane

0x8772,	// (0x0005a876) scroll_pane_cp37_ParamLimits

0x8772,	// (0x0005a876) scroll_pane_cp37

0xe105,	// (0x00060209) cell_hc_apps_pane_ParamLimits

0xe105,	// (0x00060209) cell_hc_apps_pane

0xe1c3,	// (0x000602c7) cell_hc_apps_pane_g1_ParamLimits

0xe1c3,	// (0x000602c7) cell_hc_apps_pane_g1

0x885c,	// (0x0005a960) cell_hc_apps_pane_g2_ParamLimits

0x885c,	// (0x0005a960) cell_hc_apps_pane_g2

0x8878,	// (0x0005a97c) cell_hc_apps_pane_g3_ParamLimits

0x8878,	// (0x0005a97c) cell_hc_apps_pane_g3

0x0002,

0xfcb8,	// (0x00061dbc) cell_hc_apps_pane_g_ParamLimits

0xfcb8,	// (0x00061dbc) cell_hc_apps_pane_g

0xe1ef,	// (0x000602f3) cell_hc_apps_pane_t1_ParamLimits

0xe1ef,	// (0x000602f3) cell_hc_apps_pane_t1

0x2fdf,	// (0x000550e3) grid_highlight_pane_cp10_ParamLimits

0x2fdf,	// (0x000550e3) grid_highlight_pane_cp10

0xe22d,	// (0x00060331) list_single_hc_apps_pane_ParamLimits

0xe22d,	// (0x00060331) list_single_hc_apps_pane

0xe25a,	// (0x0006035e) list_single_hc_apps_pane_g1

0xde72,	// (0x0005ff76) list_single_hc_apps_pane_g2

0x0001,

0xfcbf,	// (0x00061dc3) list_single_hc_apps_pane_g

0xde8b,	// (0x0005ff8f) list_single_hc_apps_pane_g2_copy1

0x39ee,	// (0x00055af2) list_single_hc_apps_pane_t1

0x2d56,	// (0x00054e5a) bg_set_opt_pane_cp_ParamLimits

0xf49e,	// (0x000615a2) setting_slider_pane_t1_ParamLimits

0xf4b7,	// (0x000615bb) setting_slider_pane_t2_ParamLimits

0xf4d1,	// (0x000615d5) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x0006163b) setting_slider_pane_t_ParamLimits

0xf4e9,	// (0x000615ed) slider_set_pane_ParamLimits

0x093c,	// (0x00052a40) control_pane_g5_ParamLimits

0x093c,	// (0x00052a40) control_pane_g5

0x621b,	// (0x0005831f) slider_set_pane_g1_ParamLimits

0x1422,	// (0x00053526) slider_set_pane_g2_ParamLimits

0x142e,	// (0x00053532) slider_set_pane_g3_ParamLimits

0x1442,	// (0x00053546) slider_set_pane_g4_ParamLimits

0x145a,	// (0x0005355e) slider_set_pane_g5_ParamLimits

0x142e,	// (0x00053532) slider_set_pane_g6_ParamLimits

0x1470,	// (0x00053574) slider_set_pane_g7_ParamLimits

0xf93d,	// (0x00061a41) slider_set_pane_g_ParamLimits

0x44bf,	// (0x000565c3) navi_icon_text_pane_ParamLimits

0xd278,	// (0x0005f37c) aid_fill_nsta_2_ParamLimits

0xd2af,	// (0x0005f3b3) aid_touch_tab_arrow_left_ParamLimits

0xd2c5,	// (0x0005f3c9) aid_touch_tab_arrow_right_ParamLimits

0xd360,	// (0x0005f464) clock_nsta_pane_ParamLimits

0x5d21,	// (0x00057e25) navi_icon_pane_g1_ParamLimits

0x5d2d,	// (0x00057e31) navi_text_pane_t1_ParamLimits

0x7055,	// (0x00059159) navi_icon_text_pane_g1_ParamLimits

0x7061,	// (0x00059165) navi_icon_text_pane_t1_ParamLimits

0xe25a,	// (0x0006035e) list_single_hc_apps_pane_g1_ParamLimits

0xde72,	// (0x0005ff76) list_single_hc_apps_pane_g2_ParamLimits

0xfcbf,	// (0x00061dc3) list_single_hc_apps_pane_g_ParamLimits

0xde8b,	// (0x0005ff8f) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x39ee,	// (0x00055af2) list_single_hc_apps_pane_t1_ParamLimits

0xb4b9,	// (0x0005d5bd) popup_toolbar2_fixed_window_ParamLimits

0xb4b9,	// (0x0005d5bd) popup_toolbar2_fixed_window

0xc75c,	// (0x0005e860) popup_toolbar2_float_window

0xd0e0,	// (0x0005f1e4) bg_popup_sub_pane_cp27

0x894f,	// (0x0005aa53) grid_toolbar2_float_pane

0xd0e0,	// (0x0005f1e4) bg_popup_sub_pane_cp26

0x894f,	// (0x0005aa53) grid_toolbar2_fixed_pane

0xe273,	// (0x00060377) cell_toolbar2_fixed_pane_ParamLimits

0xe273,	// (0x00060377) cell_toolbar2_fixed_pane

0xe28d,	// (0x00060391) cell_toolbar2_fixed_pane_g1

0x8970,	// (0x0005aa74) toolbar2_fixed_button_pane

0x4e8e,	// (0x00056f92) toolbar2_fixed_button_pane_g1

0x4e9e,	// (0x00056fa2) toolbar2_fixed_button_pane_g2

0x4e96,	// (0x00056f9a) toolbar2_fixed_button_pane_g3

0x4eae,	// (0x00056fb2) toolbar2_fixed_button_pane_g4

0x4ea6,	// (0x00056faa) toolbar2_fixed_button_pane_g5

0x4eb6,	// (0x00056fba) toolbar2_fixed_button_pane_g6

0x4ebe,	// (0x00056fc2) toolbar2_fixed_button_pane_g7

0x4ece,	// (0x00056fd2) toolbar2_fixed_button_pane_g8

0x4ec6,	// (0x00056fca) toolbar2_fixed_button_pane_g9

0x0008,

0xf83f,	// (0x00061943) toolbar2_fixed_button_pane_g

0x8978,	// (0x0005aa7c) cell_toolbar2_float_pane_ParamLimits

0x8978,	// (0x0005aa7c) cell_toolbar2_float_pane

0x8989,	// (0x0005aa8d) cell_toolbar2_float_pane_g1

0x8970,	// (0x0005aa74) toolbar2_fixed_button_pane_cp

0xdd48,	// (0x0005fe4c) fep_vkb_accented_list_pane_ParamLimits

0xdd48,	// (0x0005fe4c) fep_vkb_accented_list_pane

0x1b7b,	// (0x00053c7f) bg_popup_fep_shadow_pane_g9

0x4640,	// (0x00056744) bg_popup_fep_shadow_pane_cp3

0x3aed,	// (0x00055bf1) list_accented_list_pane

0x8992,	// (0x0005aa96) list_single_accented_list_pane_ParamLimits

0x8992,	// (0x0005aa96) list_single_accented_list_pane

0x4640,	// (0x00056744) list_highlight_pane_cp10

0x89a3,	// (0x0005aaa7) list_single_accented_list_pane_t1

0xc686,	// (0x0005e78a) popup_slider_window_ParamLimits

0xc686,	// (0x0005e78a) popup_slider_window

0x85dd,	// (0x0005a6e1) aid_indentation_list_msg

0xe384,	// (0x00060488) bg_popup_window_pane_cp19

0x8acf,	// (0x0005abd3) popup_slider_window_g1

0x8aeb,	// (0x0005abef) popup_slider_window_g2

0x8b07,	// (0x0005ac0b) popup_slider_window_g3

0x0005,

0xfcc4,	// (0x00061dc8) popup_slider_window_g

0x8b6d,	// (0x0005ac71) popup_slider_window_t1

0x8be1,	// (0x0005ace5) small_volume_slider_vertical_pane

0x74ab,	// (0x000595af) small_volume_slider_vertical_pane_g1

0x74ab,	// (0x000595af) small_volume_slider_vertical_pane_g2

0x8bfd,	// (0x0005ad01) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd6,	// (0x00061dda) small_volume_slider_vertical_pane_g

0xf22c,	// (0x00061330) area_side_right_pane_ParamLimits

0xf22c,	// (0x00061330) area_side_right_pane

0xca7c,	// (0x0005eb80) aid_size_side_button_ParamLimits

0xca7c,	// (0x0005eb80) aid_size_side_button

0xca95,	// (0x0005eb99) grid_sctrl_middle_pane_ParamLimits

0xca95,	// (0x0005eb99) grid_sctrl_middle_pane

0x1f56,	// (0x0005405a) sctrl_sk_bottom_pane

0x1f67,	// (0x0005406b) sctrl_sk_top_pane

0x1f79,	// (0x0005407d) aid_touch_sctrl_top

0x1f86,	// (0x0005408a) bg_sctrl_sk_pane_ParamLimits

0x1f86,	// (0x0005408a) bg_sctrl_sk_pane

0x1f94,	// (0x00054098) sctrl_sk_top_pane_g1

0x1fa1,	// (0x000540a5) sctrl_sk_top_pane_t1

0x1f79,	// (0x0005407d) aid_touch_sctrl_bottom

0x1f86,	// (0x0005408a) bg_sctrl_sk_pane_cp_ParamLimits

0x1f86,	// (0x0005408a) bg_sctrl_sk_pane_cp

0x1fbc,	// (0x000540c0) sctrl_sk_bottom_pane_g1

0x1fa1,	// (0x000540a5) sctrl_sk_bottom_pane_t1

0xcab4,	// (0x0005ebb8) cell_sctrl_middle_pane_ParamLimits

0xcab4,	// (0x0005ebb8) cell_sctrl_middle_pane

0xcad7,	// (0x0005ebdb) aid_touch_sctrl_middle_ParamLimits

0xcad7,	// (0x0005ebdb) aid_touch_sctrl_middle

0x1f86,	// (0x0005408a) bg_sctrl_middle_pane_ParamLimits

0x1f86,	// (0x0005408a) bg_sctrl_middle_pane

0x289e,	// (0x000549a2) cell_sctrl_middle_pane_g1_ParamLimits

0x289e,	// (0x000549a2) cell_sctrl_middle_pane_g1

0xcaeb,	// (0x0005ebef) cell_sctrl_middle_pane_g2_ParamLimits

0xcaeb,	// (0x0005ebef) cell_sctrl_middle_pane_g2

0x0001,

0xfce2,	// (0x00061de6) cell_sctrl_middle_pane_g_ParamLimits

0xfce2,	// (0x00061de6) cell_sctrl_middle_pane_g

0x4e8e,	// (0x00056f92) bg_sctrl_middle_pane_g1

0x4e96,	// (0x00056f9a) bg_sctrl_middle_pane_g2

0x4e9e,	// (0x00056fa2) bg_sctrl_middle_pane_g3

0x4ea6,	// (0x00056faa) bg_sctrl_middle_pane_g4

0x4eae,	// (0x00056fb2) bg_sctrl_middle_pane_g5

0x4eb6,	// (0x00056fba) bg_sctrl_middle_pane_g6

0x4ebe,	// (0x00056fc2) bg_sctrl_middle_pane_g7

0x4ec6,	// (0x00056fca) bg_sctrl_middle_pane_g8

0x0007,

0xfce7,	// (0x00061deb) bg_sctrl_middle_pane_g

0x4ece,	// (0x00056fd2) bg_sctrl_middle_pane_g8_copy1

0x4e8e,	// (0x00056f92) bg_sctrl_sk_pane_g1

0x4e9e,	// (0x00056fa2) bg_sctrl_sk_pane_g2

0x4e96,	// (0x00056f9a) bg_sctrl_sk_pane_g3

0x0008,

0xf83f,	// (0x00061943) bg_sctrl_sk_pane_g

0x3512,	// (0x00055616) aid_size_touch_scroll_bar

0x4eae,	// (0x00056fb2) bg_sctrl_sk_pane_g4

0x4ea6,	// (0x00056faa) bg_sctrl_sk_pane_g5

0x4eb6,	// (0x00056fba) bg_sctrl_sk_pane_g6

0x4ebe,	// (0x00056fc2) bg_sctrl_sk_pane_g7

0x4ece,	// (0x00056fd2) bg_sctrl_sk_pane_g8

0x4ec6,	// (0x00056fca) bg_sctrl_sk_pane_g9

0x0b08,	// (0x00052c0c) popup_fep_china_hwr2_fs_candidate_window

0xc19a,	// (0x0005e29e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc19a,	// (0x0005e29e) popup_fep_china_hwr2_fs_control_window

0x1b9b,	// (0x00053c9f) sctrl_sk_top_pane_g2

0x0001,

0xfcdd,	// (0x00061de1) sctrl_sk_top_pane_g

0xe43c,	// (0x00060540) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe43c,	// (0x00060540) aid_fep_china_hwr2_fs_cell

0xe450,	// (0x00060554) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe450,	// (0x00060554) bg_popup_fep_shadow_pane_cp4

0xe467,	// (0x0006056b) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe467,	// (0x0006056b) bg_popup_fep_shadow_pane_cp5

0xe479,	// (0x0006057d) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe479,	// (0x0006057d) popup_fep_china_hwr2_fs_control_bar_grid

0xe48d,	// (0x00060591) popup_fep_china_hwr2_fs_control_funtion_grid

0x8c59,	// (0x0005ad5d) aid_fep_china_hwr2_fs_candi_cell

0xd0e0,	// (0x0005f1e4) bg_popup_fep_shadow_pane_cp6

0x8c63,	// (0x0005ad67) popup_fep_china_hwr2_fs_candidate_grid

0xe495,	// (0x00060599) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe495,	// (0x00060599) cell_fep_china_hwr2_fs_funtion_grid

0x74ab,	// (0x000595af) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8c85,	// (0x0005ad89) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8c85,	// (0x0005ad89) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8c93,	// (0x0005ad97) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8c93,	// (0x0005ad97) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf8,	// (0x00061dfc) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf8,	// (0x00061dfc) cell_fep_china_hwr2_fs_funtion_grid_g

0xe4ad,	// (0x000605b1) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe4ad,	// (0x000605b1) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe4c2,	// (0x000605c6) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe4c2,	// (0x000605c6) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcfd,	// (0x00061e01) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcfd,	// (0x00061e01) cell_fep_china_hwr2_fs_funtion_grid_t

0x8cda,	// (0x0005adde) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8ce2,	// (0x0005ade6) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8cea,	// (0x0005adee) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd02,	// (0x00061e06) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8cf2,	// (0x0005adf6) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8cf2,	// (0x0005adf6) cell_fep_china_hwr2_fs_candidate_grid

0x8d0b,	// (0x0005ae0f) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8d13,	// (0x0005ae17) popup_fep_china_hwr2_fs_candidate_grid_g21

0x74ab,	// (0x000595af) cell_fep_china_hwr2_fs_candidate_grid_g1

0x74ab,	// (0x000595af) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb16,	// (0x00061c1a) cell_fep_china_hwr2_fs_candidate_grid_g

0x8d1b,	// (0x0005ae1f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4a84,	// (0x00056b88) clock_nsta_pane_cp_24_ParamLimits

0x4a84,	// (0x00056b88) clock_nsta_pane_cp_24

0x4b02,	// (0x00056c06) indicator_nsta_pane_cp_24_ParamLimits

0x4b02,	// (0x00056c06) indicator_nsta_pane_cp_24

0x5b9d,	// (0x00057ca1) heading_pane_g1

0x0001,

0xf8a4,	// (0x000619a8) heading_pane_g

0x65c8,	// (0x000586cc) grid_sct_catagory_button_pane

0x65f8,	// (0x000586fc) scroll_pane_cp5_ParamLimits

0x70a3,	// (0x000591a7) button_value_adjust_pane_cp5_ParamLimits

0x70a3,	// (0x000591a7) button_value_adjust_pane_cp5

0x718e,	// (0x00059292) form2_midp_time_pane_ParamLimits

0x8d29,	// (0x0005ae2d) cell_sct_catagory_button_pane_ParamLimits

0x8d29,	// (0x0005ae2d) cell_sct_catagory_button_pane

0x7470,	// (0x00059574) bg_button_pane_cp01_ParamLimits

0x7470,	// (0x00059574) bg_button_pane_cp01

0x74ab,	// (0x000595af) cell_sct_catagory_button_pane_g1

0xc6ff,	// (0x0005e803) popup_tb_extension_window

0xe4de,	// (0x000605e2) aid_size_cell_ext_ParamLimits

0xe4de,	// (0x000605e2) aid_size_cell_ext

0x3354,	// (0x00055458) bg_tb_trans_pane_cp1_ParamLimits

0x3354,	// (0x00055458) bg_tb_trans_pane_cp1

0xe504,	// (0x00060608) grid_tb_ext_pane_ParamLimits

0xe504,	// (0x00060608) grid_tb_ext_pane

0xe53f,	// (0x00060643) cell_tb_ext_pane_ParamLimits

0xe53f,	// (0x00060643) cell_tb_ext_pane

0xe567,	// (0x0006066b) cell_tb_ext_pane_g1_ParamLimits

0xe567,	// (0x0006066b) cell_tb_ext_pane_g1

0x8dbd,	// (0x0005aec1) cell_tb_ext_pane_t1

0x2fdf,	// (0x000550e3) list_highlight_pane_cp11_ParamLimits

0x2fdf,	// (0x000550e3) list_highlight_pane_cp11

0xb4ce,	// (0x0005d5d2) popup_uni_indicator_window_ParamLimits

0xb4ce,	// (0x0005d5d2) popup_uni_indicator_window

0x3684,	// (0x00055788) bg_popup_sub_pane_cp14

0x8dd8,	// (0x0005aedc) list_uniindi_pane

0x8de4,	// (0x0005aee8) uniindi_top_pane

0x2fdf,	// (0x000550e3) bg_uniindi_top_pane

0x8e03,	// (0x0005af07) uniindi_top_pane_g1

0x8e19,	// (0x0005af1d) uniindi_top_pane_g2

0x0003,

0xfd09,	// (0x00061e0d) uniindi_top_pane_g

0x8e43,	// (0x0005af47) uniindi_top_pane_t1

0x8e6d,	// (0x0005af71) list_single_uniindi_pane_ParamLimits

0x8e6d,	// (0x0005af71) list_single_uniindi_pane

0x74ab,	// (0x000595af) bg_uniindi_top_pane_g1

0x8e80,	// (0x0005af84) list_single_uniindi_pane_g1

0x8e93,	// (0x0005af97) list_single_uniindi_pane_t1

0xf30f,	// (0x00061413) control_bg_pane

0x8eb8,	// (0x0005afbc) bg_sctrl_sk_pane_cp1

0x8ec1,	// (0x0005afc5) bg_sctrl_sk_pane_cp2

0x8eca,	// (0x0005afce) control_bg_pane_g1

0x8ed3,	// (0x0005afd7) control_bg_pane_g2

0x0001,

0xfd12,	// (0x00061e16) control_bg_pane_g

0x6eed,	// (0x00058ff1) cell_indicator_nsta_pane_g1_ParamLimits

0xdbd5,	// (0x0005fcd9) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7a,	// (0x00061b7e) cell_indicator_nsta_pane_g_ParamLimits

0x1923,	// (0x00053a27) form2_midp_time_pane_t1_ParamLimits

0x1936,	// (0x00053a3a) main_idle_act4_pane_ParamLimits

0x1936,	// (0x00053a3a) main_idle_act4_pane

0xc6ff,	// (0x0005e803) popup_tb_extension_window_ParamLimits

0xe526,	// (0x0006062a) tb_ext_find_pane_ParamLimits

0xe526,	// (0x0006062a) tb_ext_find_pane

0x8edc,	// (0x0005afe0) ai_gene_pane_1_cp1

0x4787,	// (0x0005688b) ai_gene_pane_2_cp1

0x8ee4,	// (0x0005afe8) list_single_idle_plugin_calendar_pane

0x8eed,	// (0x0005aff1) list_single_idle_plugin_notification_pane

0x8ef6,	// (0x0005affa) list_single_idle_plugin_player_pane

0xe584,	// (0x00060688) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe584,	// (0x00060688) list_single_idle_plugin_shortcut_pane

0xe5ac,	// (0x000606b0) main_idle_act4_pane_t1

0xe5c2,	// (0x000606c6) main_idle_act4_pane_t2

0x0001,

0xfd17,	// (0x00061e1b) main_idle_act4_pane_t

0xe5d8,	// (0x000606dc) middle_sk_idle_act4_pane_ParamLimits

0xe5d8,	// (0x000606dc) middle_sk_idle_act4_pane

0xe5f4,	// (0x000606f8) popup_clock_digital_analogue_window_cp2

0xe61c,	// (0x00060720) shortcut_wheel_idle_act4_pane_ParamLimits

0xe61c,	// (0x00060720) shortcut_wheel_idle_act4_pane

0x74ab,	// (0x000595af) shortcut_wheel_idle_act4_pane_g1

0x74ab,	// (0x000595af) shortcut_wheel_idle_act4_pane_g2

0x74ab,	// (0x000595af) shortcut_wheel_idle_act4_pane_g3

0x74ab,	// (0x000595af) shortcut_wheel_idle_act4_pane_g4

0x74ab,	// (0x000595af) shortcut_wheel_idle_act4_pane_g5

0x8f89,	// (0x0005b08d) shortcut_wheel_idle_act4_pane_g6

0x8f91,	// (0x0005b095) shortcut_wheel_idle_act4_pane_g7

0x8f99,	// (0x0005b09d) shortcut_wheel_idle_act4_pane_g8

0x8fa1,	// (0x0005b0a5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1c,	// (0x00061e20) shortcut_wheel_idle_act4_pane_g

0xdea7,	// (0x0005ffab) middle_sk_idle_act4_pane_g1_ParamLimits

0xdea7,	// (0x0005ffab) middle_sk_idle_act4_pane_g1

0xe699,	// (0x0006079d) middle_sk_idle_act4_pane_g2_ParamLimits

0xe699,	// (0x0006079d) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3f,	// (0x00061e43) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3f,	// (0x00061e43) middle_sk_idle_act4_pane_g

0xe6b1,	// (0x000607b5) middle_sk_idle_act4_pane_t1_ParamLimits

0xe6b1,	// (0x000607b5) middle_sk_idle_act4_pane_t1

0xe6e0,	// (0x000607e4) grid_ai_shortcut_pane_ParamLimits

0xe6e0,	// (0x000607e4) grid_ai_shortcut_pane

0xe6fd,	// (0x00060801) list_highlight_pane_cp16_ParamLimits

0xe6fd,	// (0x00060801) list_highlight_pane_cp16

0xe70a,	// (0x0006080e) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe70a,	// (0x0006080e) list_single_idle_plugin_shortcut_pane_g1

0xe716,	// (0x0006081a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe716,	// (0x0006081a) list_single_idle_plugin_shortcut_pane_g2

0xe732,	// (0x00060836) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe732,	// (0x00060836) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd44,	// (0x00061e48) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd44,	// (0x00061e48) list_single_idle_plugin_shortcut_pane_g

0xe747,	// (0x0006084b) cell_ai_shortcut_pane_ParamLimits

0xe747,	// (0x0006084b) cell_ai_shortcut_pane

0xe75d,	// (0x00060861) cell_ai_shortcut_pane_g1_ParamLimits

0xe75d,	// (0x00060861) cell_ai_shortcut_pane_g1

0x8edc,	// (0x0005afe0) ai_gene_pane_1_cp2

0x90d1,	// (0x0005b1d5) ai_gene_pane_2_cp2

0x90d9,	// (0x0005b1dd) list_highlight_pane_cp15

0x90e2,	// (0x0005b1e6) list_single_idle_plugin_calendar_pane_g1

0x90d9,	// (0x0005b1dd) list_highlight_pane_cp17

0x90ea,	// (0x0005b1ee) list_single_idle_plugin_calendar_pane_g1_copy1

0x90f2,	// (0x0005b1f6) list_single_idle_plugin_player_pane_g1

0x6821,	// (0x00058925) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4b,	// (0x00061e4f) list_single_idle_plugin_player_pane_g

0x90fa,	// (0x0005b1fe) list_single_idle_plugin_player_pane_t1

0x9108,	// (0x0005b20c) list_single_idle_plugin_player_pane_t2

0x9116,	// (0x0005b21a) list_single_idle_plugin_player_pane_t3

0x9124,	// (0x0005b228) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd50,	// (0x00061e54) list_single_idle_plugin_player_pane_t

0x9132,	// (0x0005b236) wait_bar_pane_cp15

0x913a,	// (0x0005b23e) grid_ai_notification_pane

0x6821,	// (0x00058925) list_single_idle_plugin_notification_pane_g1

0xe77f,	// (0x00060883) cell_ai_notification_pane_ParamLimits

0xe77f,	// (0x00060883) cell_ai_notification_pane

0x9150,	// (0x0005b254) cell_ai_notification_pane_g1

0x9158,	// (0x0005b25c) cell_ai_notification_pane_t1

0xe78c,	// (0x00060890) tb_ext_find_button_pane

0xe794,	// (0x00060898) tb_ext_find_pane_g1

0xe79c,	// (0x000608a0) tb_ext_find_pane_t1

0x401b,	// (0x0005611f) tb_ext_find_button_pane_g1

0x9184,	// (0x0005b288) tb_ext_find_button_pane_g2

0x0001,

0xfd59,	// (0x00061e5d) tb_ext_find_button_pane_g

0xe5ac,	// (0x000606b0) main_idle_act4_pane_t1_ParamLimits

0xe5c2,	// (0x000606c6) main_idle_act4_pane_t2_ParamLimits

0xfd17,	// (0x00061e1b) main_idle_act4_pane_t_ParamLimits

0xe5f4,	// (0x000606f8) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe60c,	// (0x00060710) sat_plugin_idle_act4_pane_ParamLimits

0xe60c,	// (0x00060710) sat_plugin_idle_act4_pane

0xe7aa,	// (0x000608ae) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe7aa,	// (0x000608ae) sat_plugin_idle_act4_pane_t1

0xe7c2,	// (0x000608c6) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe7c2,	// (0x000608c6) sat_plugin_idle_act4_pane_t2

0xe7da,	// (0x000608de) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe7da,	// (0x000608de) sat_plugin_idle_act4_pane_t3

0xe7f2,	// (0x000608f6) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe7f2,	// (0x000608f6) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5e,	// (0x00061e62) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5e,	// (0x00061e62) sat_plugin_idle_act4_pane_t

0xf3d4,	// (0x000614d8) popup_battery_window_ParamLimits

0xf3d4,	// (0x000614d8) popup_battery_window

0x2fdf,	// (0x000550e3) bg_popup_sub_pane_cp25_ParamLimits

0x2fdf,	// (0x000550e3) bg_popup_sub_pane_cp25

0x91d9,	// (0x0005b2dd) popup_battery_window_g1_ParamLimits

0x91d9,	// (0x0005b2dd) popup_battery_window_g1

0x91e5,	// (0x0005b2e9) popup_battery_window_t1_ParamLimits

0x91e5,	// (0x0005b2e9) popup_battery_window_t1

0x91f7,	// (0x0005b2fb) popup_battery_window_t2_ParamLimits

0x91f7,	// (0x0005b2fb) popup_battery_window_t2

0x0001,

0xfd67,	// (0x00061e6b) popup_battery_window_t_ParamLimits

0xfd67,	// (0x00061e6b) popup_battery_window_t

0xd152,	// (0x0005f256) midp_canvas_pane_ParamLimits

0xd1af,	// (0x0005f2b3) midp_keypad_pane_ParamLimits

0xd1af,	// (0x0005f2b3) midp_keypad_pane

0x4964,	// (0x00056a68) main_midp_pane_ParamLimits

0x6f67,	// (0x0005906b) signal_pane_g2_cp_ParamLimits

0xe80a,	// (0x0006090e) aid_size_cell_midp_keypad_ParamLimits

0xe80a,	// (0x0006090e) aid_size_cell_midp_keypad

0xe828,	// (0x0006092c) midp_keyp_game_grid_pane_ParamLimits

0xe828,	// (0x0006092c) midp_keyp_game_grid_pane

0xe84f,	// (0x00060953) midp_keyp_rocker_pane_ParamLimits

0xe84f,	// (0x00060953) midp_keyp_rocker_pane

0xe8a0,	// (0x000609a4) midp_keyp_sk_left_pane_ParamLimits

0xe8a0,	// (0x000609a4) midp_keyp_sk_left_pane

0xe8f4,	// (0x000609f8) midp_keyp_sk_right_pane_ParamLimits

0xe8f4,	// (0x000609f8) midp_keyp_sk_right_pane

0xd0e0,	// (0x0005f1e4) bg_button_pane_cp03

0xe948,	// (0x00060a4c) midp_keyp_sk_left_pane_g1

0xd0e0,	// (0x0005f1e4) bg_button_pane_cp04

0xe948,	// (0x00060a4c) midp_keyp_sk_right_pane_g1

0x74ab,	// (0x000595af) midp_keyp_rocker_pane_g1

0xe951,	// (0x00060a55) keyp_game_cell_pane_ParamLimits

0xe951,	// (0x00060a55) keyp_game_cell_pane

0xd0e0,	// (0x0005f1e4) bg_button_pane_cp02

0xe975,	// (0x00060a79) keyp_game_cell_pane_g1

0xb469,	// (0x0005d56d) popup_fep_vkb2_window_ParamLimits

0xb469,	// (0x0005d56d) popup_fep_vkb2_window

0xcafd,	// (0x0005ec01) aid_size_cell_vkb2_ParamLimits

0xcafd,	// (0x0005ec01) aid_size_cell_vkb2

0xcb29,	// (0x0005ec2d) popup_fep_vkb2_window_g1_ParamLimits

0xcb29,	// (0x0005ec2d) popup_fep_vkb2_window_g1

0xcb79,	// (0x0005ec7d) vkb2_area_bottom_pane_ParamLimits

0xcb79,	// (0x0005ec7d) vkb2_area_bottom_pane

0xcbcd,	// (0x0005ecd1) vkb2_area_keypad_pane_ParamLimits

0xcbcd,	// (0x0005ecd1) vkb2_area_keypad_pane

0xcc15,	// (0x0005ed19) vkb2_area_top_pane_ParamLimits

0xcc15,	// (0x0005ed19) vkb2_area_top_pane

0xcca1,	// (0x0005eda5) vkb2_top_entry_pane_ParamLimits

0xcca1,	// (0x0005eda5) vkb2_top_entry_pane

0xccce,	// (0x0005edd2) vkb2_top_grid_left_pane_ParamLimits

0xccce,	// (0x0005edd2) vkb2_top_grid_left_pane

0xccef,	// (0x0005edf3) vkb2_top_grid_right_pane_ParamLimits

0xccef,	// (0x0005edf3) vkb2_top_grid_right_pane

0x2227,	// (0x0005432b) vkb2_cell_keypad_pane_ParamLimits

0x2227,	// (0x0005432b) vkb2_cell_keypad_pane

0xcd37,	// (0x0005ee3b) vkb2_area_bottom_grid_pane_ParamLimits

0xcd37,	// (0x0005ee3b) vkb2_area_bottom_grid_pane

0xcd61,	// (0x0005ee65) vkb2_area_bottom_pane_g1_ParamLimits

0xcd61,	// (0x0005ee65) vkb2_area_bottom_pane_g1

0xcd87,	// (0x0005ee8b) vkb2_area_bottom_pane_g2_ParamLimits

0xcd87,	// (0x0005ee8b) vkb2_area_bottom_pane_g2

0xcdb8,	// (0x0005eebc) vkb2_area_bottom_pane_g3_ParamLimits

0xcdb8,	// (0x0005eebc) vkb2_area_bottom_pane_g3

0x0002,

0xfd6c,	// (0x00061e70) vkb2_area_bottom_pane_g_ParamLimits

0xfd6c,	// (0x00061e70) vkb2_area_bottom_pane_g

0x23d1,	// (0x000544d5) vkb2_top_cell_left_pane_ParamLimits

0x23d1,	// (0x000544d5) vkb2_top_cell_left_pane

0xe97e,	// (0x00060a82) vkb2_top_entry_pane_g1_ParamLimits

0xe97e,	// (0x00060a82) vkb2_top_entry_pane_g1

0xe98c,	// (0x00060a90) vkb2_top_entry_pane_t1_ParamLimits

0xe98c,	// (0x00060a90) vkb2_top_entry_pane_t1

0x93a8,	// (0x0005b4ac) vkb2_top_entry_pane_t2_ParamLimits

0x93a8,	// (0x0005b4ac) vkb2_top_entry_pane_t2

0x93da,	// (0x0005b4de) vkb2_top_entry_pane_t3_ParamLimits

0x93da,	// (0x0005b4de) vkb2_top_entry_pane_t3

0x0002,

0xfd73,	// (0x00061e77) vkb2_top_entry_pane_t_ParamLimits

0xfd73,	// (0x00061e77) vkb2_top_entry_pane_t

0xce22,	// (0x0005ef26) vkb2_top_grid_right_pane_g1_ParamLimits

0xce22,	// (0x0005ef26) vkb2_top_grid_right_pane_g1

0x2434,	// (0x00054538) vkb2_top_grid_right_pane_g2_ParamLimits

0x2434,	// (0x00054538) vkb2_top_grid_right_pane_g2

0x244c,	// (0x00054550) vkb2_top_grid_right_pane_g3_ParamLimits

0x244c,	// (0x00054550) vkb2_top_grid_right_pane_g3

0xce38,	// (0x0005ef3c) vkb2_top_grid_right_pane_g4_ParamLimits

0xce38,	// (0x0005ef3c) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7a,	// (0x00061e7e) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7a,	// (0x00061e7e) vkb2_top_grid_right_pane_g

0x247a,	// (0x0005457e) vkb2_top_cell_left_pane_g1

0x2491,	// (0x00054595) vkb2_cell_keypad_pane_g1_ParamLimits

0x2491,	// (0x00054595) vkb2_cell_keypad_pane_g1

0x93fe,	// (0x0005b502) vkb2_cell_keypad_pane_t1_ParamLimits

0x93fe,	// (0x0005b502) vkb2_cell_keypad_pane_t1

0x249f,	// (0x000545a3) vkb2_cell_bottom_grid_pane_ParamLimits

0x249f,	// (0x000545a3) vkb2_cell_bottom_grid_pane

0x24d8,	// (0x000545dc) vkb2_cell_bottom_grid_pane_g1

0xe63d,	// (0x00060741) aid_call2_pane_cp02

0xe645,	// (0x00060749) aid_call_pane_cp02

0xe64d,	// (0x00060751) clock_digital_number_pane_cp10

0xe655,	// (0x00060759) clock_digital_number_pane_cp11

0xe65d,	// (0x00060761) clock_digital_number_pane_cp12

0xe665,	// (0x00060769) clock_digital_number_pane_cp13

0xe66d,	// (0x00060771) clock_digital_separator_pane_cp10

0x401b,	// (0x0005611f) popup_clock_digital_analogue_window_cp2_g1

0x401b,	// (0x0005611f) popup_clock_digital_analogue_window_cp2_g2

0xe675,	// (0x00060779) popup_clock_digital_analogue_window_cp2_g3

0x401b,	// (0x0005611f) popup_clock_digital_analogue_window_cp2_g4

0xe675,	// (0x00060779) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2f,	// (0x00061e33) popup_clock_digital_analogue_window_cp2_g

0xe67d,	// (0x00060781) popup_clock_digital_analogue_window_cp2_t1

0xe68b,	// (0x0006078f) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3a,	// (0x00061e3e) popup_clock_digital_analogue_window_cp2_t

0x74ab,	// (0x000595af) clock_digital_number_pane_cp10_g1

0x74ab,	// (0x000595af) clock_digital_number_pane_cp10_g2

0x0001,

0xfb16,	// (0x00061c1a) clock_digital_number_pane_cp10_g

0x74ab,	// (0x000595af) clock_digital_separator_pane_cp10_g1

0x74ab,	// (0x000595af) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb16,	// (0x00061c1a) clock_digital_separator_pane_cp10_g

0x8e25,	// (0x0005af29) uniindi_top_pane_g3

0x8e36,	// (0x0005af3a) uniindi_top_pane_g4

0x22b2,	// (0x000543b6) vkb2_row_keypad_pane_ParamLimits

0x22b2,	// (0x000543b6) vkb2_row_keypad_pane

0x24f8,	// (0x000545fc) vkb2_cell_t_keypad_pane_ParamLimits

0x24f8,	// (0x000545fc) vkb2_cell_t_keypad_pane

0x2508,	// (0x0005460c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2508,	// (0x0005460c) vkb2_cell_t_keypad_pane_cp08

0x251b,	// (0x0005461f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x251b,	// (0x0005461f) vkb2_cell_t_keypad_pane_cp09

0x252f,	// (0x00054633) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x252f,	// (0x00054633) vkb2_cell_t_keypad_pane_cp01

0x2540,	// (0x00054644) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2540,	// (0x00054644) vkb2_cell_t_keypad_pane_cp02

0x2551,	// (0x00054655) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2551,	// (0x00054655) vkb2_cell_t_keypad_pane_cp03

0x2562,	// (0x00054666) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2562,	// (0x00054666) vkb2_cell_t_keypad_pane_cp04

0x2573,	// (0x00054677) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2573,	// (0x00054677) vkb2_cell_t_keypad_pane_cp05

0x2584,	// (0x00054688) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2584,	// (0x00054688) vkb2_cell_t_keypad_pane_cp06

0x2595,	// (0x00054699) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2595,	// (0x00054699) vkb2_cell_t_keypad_pane_cp07

0x25a6,	// (0x000546aa) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x25a6,	// (0x000546aa) vkb2_cell_t_keypad_pane_cp10

0x1b9b,	// (0x00053c9f) vkb2_cell_t_keypad_pane_g1

0x9415,	// (0x0005b519) vkb2_cell_t_keypad_pane_t1

0xf30f,	// (0x00061413) popup_grid_graphic2_window

0xe9c5,	// (0x00060ac9) aid_size_cell_graphic2_ParamLimits

0xe9c5,	// (0x00060ac9) aid_size_cell_graphic2

0xea03,	// (0x00060b07) bg_popup_window_pane_cp21_ParamLimits

0xea03,	// (0x00060b07) bg_popup_window_pane_cp21

0xea11,	// (0x00060b15) graphic2_pages_pane_ParamLimits

0xea11,	// (0x00060b15) graphic2_pages_pane

0xea67,	// (0x00060b6b) grid_graphic2_control_pane_ParamLimits

0xea67,	// (0x00060b6b) grid_graphic2_control_pane

0xeaaf,	// (0x00060bb3) grid_graphic2_pane_ParamLimits

0xeaaf,	// (0x00060bb3) grid_graphic2_pane

0xeb36,	// (0x00060c3a) cell_graphic2_pane

0xf30f,	// (0x00061413) main_comp_mode_pane

0x8691,	// (0x0005a795) list_ai3_gene_pane_ParamLimits

0xe384,	// (0x00060488) bg_popup_window_pane_cp19_ParamLimits

0x8a73,	// (0x0005ab77) bg_touch_area_indi_pane_ParamLimits

0x8a73,	// (0x0005ab77) bg_touch_area_indi_pane

0x8a89,	// (0x0005ab8d) bg_touch_area_indi_pane_cp01_ParamLimits

0x8a89,	// (0x0005ab8d) bg_touch_area_indi_pane_cp01

0x8a9f,	// (0x0005aba3) bg_touch_area_indi_pane_cp02_ParamLimits

0x8a9f,	// (0x0005aba3) bg_touch_area_indi_pane_cp02

0x8ab5,	// (0x0005abb9) bg_touch_area_indi_pane_cp03_ParamLimits

0x8ab5,	// (0x0005abb9) bg_touch_area_indi_pane_cp03

0x8acf,	// (0x0005abd3) popup_slider_window_g1_ParamLimits

0x8aeb,	// (0x0005abef) popup_slider_window_g2_ParamLimits

0x8b07,	// (0x0005ac0b) popup_slider_window_g3_ParamLimits

0xfcc4,	// (0x00061dc8) popup_slider_window_g_ParamLimits

0x8b6d,	// (0x0005ac71) popup_slider_window_t1_ParamLimits

0x8be1,	// (0x0005ace5) small_volume_slider_vertical_pane_ParamLimits

0xeb36,	// (0x00060c3a) cell_graphic2_pane_ParamLimits

0xeb91,	// (0x00060c95) bg_button_pane_cp10_ParamLimits

0xeb91,	// (0x00060c95) bg_button_pane_cp10

0xeba4,	// (0x00060ca8) bg_button_pane_cp11_ParamLimits

0xeba4,	// (0x00060ca8) bg_button_pane_cp11

0xebb7,	// (0x00060cbb) graphic2_pages_pane_g1_ParamLimits

0xebb7,	// (0x00060cbb) graphic2_pages_pane_g1

0xebd2,	// (0x00060cd6) graphic2_pages_pane_g2_ParamLimits

0xebd2,	// (0x00060cd6) graphic2_pages_pane_g2

0x0001,

0xfd88,	// (0x00061e8c) graphic2_pages_pane_g_ParamLimits

0xfd88,	// (0x00061e8c) graphic2_pages_pane_g

0xebea,	// (0x00060cee) graphic2_pages_pane_t1_ParamLimits

0xebea,	// (0x00060cee) graphic2_pages_pane_t1

0xec02,	// (0x00060d06) cell_graphic2_control_pane_ParamLimits

0xec02,	// (0x00060d06) cell_graphic2_control_pane

0xec34,	// (0x00060d38) cell_graphic2_pane_g1_ParamLimits

0xec34,	// (0x00060d38) cell_graphic2_pane_g1

0xdeb5,	// (0x0005ffb9) cell_graphic2_pane_g2_ParamLimits

0xdeb5,	// (0x0005ffb9) cell_graphic2_pane_g2

0xdecf,	// (0x0005ffd3) cell_graphic2_pane_g3_ParamLimits

0xdecf,	// (0x0005ffd3) cell_graphic2_pane_g3

0xdec2,	// (0x0005ffc6) cell_graphic2_pane_g4_ParamLimits

0xdec2,	// (0x0005ffc6) cell_graphic2_pane_g4

0xec41,	// (0x00060d45) cell_graphic2_pane_g5_ParamLimits

0xec41,	// (0x00060d45) cell_graphic2_pane_g5

0x0004,

0xfd8d,	// (0x00061e91) cell_graphic2_pane_g_ParamLimits

0xfd8d,	// (0x00061e91) cell_graphic2_pane_g

0xec5e,	// (0x00060d62) cell_graphic2_pane_t1_ParamLimits

0xec5e,	// (0x00060d62) cell_graphic2_pane_t1

0x5b91,	// (0x00057c95) grid_highlight_pane_cp11_ParamLimits

0x5b91,	// (0x00057c95) grid_highlight_pane_cp11

0x2fdf,	// (0x000550e3) bg_button_pane_cp05

0xeca8,	// (0x00060dac) cell_graphic2_control_pane_g1

0x74ab,	// (0x000595af) bg_touch_area_indi_pane_g1

0x96ee,	// (0x0005b7f2) aid_cmod_rocker_key_size

0x96f8,	// (0x0005b7fc) aid_cmode_itu_key_size

0x9702,	// (0x0005b806) main_cmode_video_pane

0x970c,	// (0x0005b810) main_comp_mode_itu_pane

0x9718,	// (0x0005b81c) main_comp_mode_rocker_pane

0x9724,	// (0x0005b828) cell_cmode_rocker_pane_ParamLimits

0x9724,	// (0x0005b828) cell_cmode_rocker_pane

0x9736,	// (0x0005b83a) cell_cmode_itu_pane_ParamLimits

0x9736,	// (0x0005b83a) cell_cmode_itu_pane

0x3684,	// (0x00055788) bg_button_pane_cp06_ParamLimits

0x3684,	// (0x00055788) bg_button_pane_cp06

0x7729,	// (0x0005982d) cell_cmode_rocker_pane_g1_ParamLimits

0x7729,	// (0x0005982d) cell_cmode_rocker_pane_g1

0x8c85,	// (0x0005ad89) cell_cmode_rocker_pane_g2_ParamLimits

0x8c85,	// (0x0005ad89) cell_cmode_rocker_pane_g2

0x0001,

0xfd9d,	// (0x00061ea1) cell_cmode_rocker_pane_g_ParamLimits

0xfd9d,	// (0x00061ea1) cell_cmode_rocker_pane_g

0xd0e0,	// (0x0005f1e4) bg_button_pane_cp07

0x974b,	// (0x0005b84f) cell_cmode_itu_pane_g1

0x9754,	// (0x0005b858) cell_cmode_itu_pane_t1

0x9762,	// (0x0005b866) cell_cmode_itu_pane_t2

0x0001,

0xfda2,	// (0x00061ea6) cell_cmode_itu_pane_t

0x8ea8,	// (0x0005afac) aid_touch_ctrl_left

0x8eb0,	// (0x0005afb4) aid_touch_ctrl_right

0xd0e0,	// (0x0005f1e4) compa_mode_pane

0xedc8,	// (0x00060ecc) aid_cmod_rocker_key_size_cp

0xedd2,	// (0x00060ed6) aid_cmode_itu_key_size_cp

0x9784,	// (0x0005b888) compa_mode_pane_g1

0x978c,	// (0x0005b890) compa_mode_pane_g2

0x9794,	// (0x0005b898) compa_mode_pane_g3

0x0002,

0xfda7,	// (0x00061eab) compa_mode_pane_g

0xeddc,	// (0x00060ee0) main_comp_mode_itu_pane_cp

0xede4,	// (0x00060ee8) main_comp_mode_rocker_pane_cp

0xedec,	// (0x00060ef0) cell_cmode_itu_pane_cp_ParamLimits

0xedec,	// (0x00060ef0) cell_cmode_itu_pane_cp

0xee01,	// (0x00060f05) cell_cmode_rocker_pane_cp_ParamLimits

0xee01,	// (0x00060f05) cell_cmode_rocker_pane_cp

0x3684,	// (0x00055788) bg_button_pane_cp06_cp_ParamLimits

0x3684,	// (0x00055788) bg_button_pane_cp06_cp

0x7729,	// (0x0005982d) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7729,	// (0x0005982d) cell_cmode_rocker_pane_g1_cp

0x74ab,	// (0x000595af) cell_cmode_rocker_pane_g2_cp

0xd0e0,	// (0x0005f1e4) bg_button_pane_cp07_cp

0xee13,	// (0x00060f17) cell_cmode_itu_pane_g1_cp

0xee1c,	// (0x00060f20) cell_cmode_itu_pane_t1_cp

0xee1c,	// (0x00060f20) cell_cmode_itu_pane_t2_cp

0xd9c5,	// (0x0005fac9) settings_code_pane_cp2

0x2d56,	// (0x00054e5a) bg_popup_window_pane_cp3_ParamLimits

0x31df,	// (0x000552e3) heading_pane_cp3_ParamLimits

0x31ee,	// (0x000552f2) listscroll_popup_graphic_pane_ParamLimits

0x1944,	// (0x00053a48) fep_hwr_aid_pane_ParamLimits

0x1f79,	// (0x0005407d) aid_touch_sctrl_top_ParamLimits

0x1f94,	// (0x00054098) sctrl_sk_top_pane_g1_ParamLimits

0x1b9b,	// (0x00053c9f) sctrl_sk_top_pane_g2_ParamLimits

0xfcdd,	// (0x00061de1) sctrl_sk_top_pane_g_ParamLimits

0x1fa1,	// (0x000540a5) sctrl_sk_top_pane_t1_ParamLimits

0x1f79,	// (0x0005407d) aid_touch_sctrl_bottom_ParamLimits

0x1fa1,	// (0x000540a5) sctrl_sk_bottom_pane_t1_ParamLimits

0x8df1,	// (0x0005aef5) aid_area_touch_clock

0xcc61,	// (0x0005ed65) aid_vkb2_area_top_pane_cell_ParamLimits

0xcc61,	// (0x0005ed65) aid_vkb2_area_top_pane_cell

0xcd10,	// (0x0005ee14) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcd10,	// (0x0005ee14) aid_vkb2_area_bottom_pane_cell

0x9360,	// (0x0005b464) popup_char_count_window

0x97e1,	// (0x0005b8e5) popup_char_count_window_g1

0x97ea,	// (0x0005b8ee) popup_char_count_window_g2

0x97f3,	// (0x0005b8f7) popup_char_count_window_g3

0x0002,

0xfdae,	// (0x00061eb2) popup_char_count_window_g

0x97fc,	// (0x0005b900) popup_char_count_window_t1

0x2048,	// (0x0005414c) popup_fep_char_preview_window_ParamLimits

0x2048,	// (0x0005414c) popup_fep_char_preview_window

0xcc81,	// (0x0005ed85) vkb2_top_candi_pane_ParamLimits

0xcc81,	// (0x0005ed85) vkb2_top_candi_pane

0xee2a,	// (0x00060f2e) cell_vkb2_top_candi_pane_ParamLimits

0xee2a,	// (0x00060f2e) cell_vkb2_top_candi_pane

0x25bb,	// (0x000546bf) bg_popup_fep_char_preview_window_ParamLimits

0x25bb,	// (0x000546bf) bg_popup_fep_char_preview_window

0x25c9,	// (0x000546cd) popup_fep_char_preview_window_t1_ParamLimits

0x25c9,	// (0x000546cd) popup_fep_char_preview_window_t1

0x9854,	// (0x0005b958) bg_popup_fep_char_preview_window_g1

0x985c,	// (0x0005b960) bg_popup_fep_char_preview_window_g2

0x9864,	// (0x0005b968) bg_popup_fep_char_preview_window_g3

0x986c,	// (0x0005b970) bg_popup_fep_char_preview_window_g4

0x9874,	// (0x0005b978) bg_popup_fep_char_preview_window_g5

0x987c,	// (0x0005b980) bg_popup_fep_char_preview_window_g6

0x9884,	// (0x0005b988) bg_popup_fep_char_preview_window_g7

0x988c,	// (0x0005b990) bg_popup_fep_char_preview_window_g8

0x9894,	// (0x0005b998) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb5,	// (0x00061eb9) bg_popup_fep_char_preview_window_g

0x1b9b,	// (0x00053c9f) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1b9b,	// (0x00053c9f) cell_vkb2_top_candi_pane_g1

0x1ba9,	// (0x00053cad) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1ba9,	// (0x00053cad) cell_vkb2_top_candi_pane_g2

0x7f5e,	// (0x0005a062) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7f5e,	// (0x0005a062) cell_vkb2_top_candi_pane_g3

0x260b,	// (0x0005470f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x260b,	// (0x0005470f) cell_vkb2_top_candi_pane_g4

0x7bf4,	// (0x00059cf8) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7bf4,	// (0x00059cf8) cell_vkb2_top_candi_pane_g5

0x262c,	// (0x00054730) cell_vkb2_top_candi_pane_g6_ParamLimits

0x262c,	// (0x00054730) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdca,	// (0x00061ece) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdca,	// (0x00061ece) cell_vkb2_top_candi_pane_g

0x263a,	// (0x0005473e) cell_vkb2_top_candi_pane_t1

0x140e,	// (0x00053512) aid_size_touch_slider_mark_ParamLimits

0x140e,	// (0x00053512) aid_size_touch_slider_mark

0xea4d,	// (0x00060b51) grid_graphic2_catg_pane_ParamLimits

0xea4d,	// (0x00060b51) grid_graphic2_catg_pane

0xeb09,	// (0x00060c0d) popup_grid_graphic2_window_t1_ParamLimits

0xeb09,	// (0x00060c0d) popup_grid_graphic2_window_t1

0xeb1f,	// (0x00060c23) popup_grid_graphic2_window_t2_ParamLimits

0xeb1f,	// (0x00060c23) popup_grid_graphic2_window_t2

0x0001,

0xfd83,	// (0x00061e87) popup_grid_graphic2_window_t_ParamLimits

0xfd83,	// (0x00061e87) popup_grid_graphic2_window_t

0x2fdf,	// (0x000550e3) bg_button_pane_cp05_ParamLimits

0xeca8,	// (0x00060dac) cell_graphic2_control_pane_g1_ParamLimits

0xee8a,	// (0x00060f8e) cell_graphic2_catg_pane_ParamLimits

0xee8a,	// (0x00060f8e) cell_graphic2_catg_pane

0xd0e0,	// (0x0005f1e4) bg_button_pane_cp12

0xee9c,	// (0x00060fa0) cell_graphic2_catg_pane_g1

0x8dbd,	// (0x0005aec1) cell_tb_ext_pane_t1_ParamLimits

0x23f1,	// (0x000544f5) vkb2_top_cell_right_narrow_pane_ParamLimits

0x23f1,	// (0x000544f5) vkb2_top_cell_right_narrow_pane

0x2409,	// (0x0005450d) vkb2_top_cell_right_wide_pane_ParamLimits

0x2409,	// (0x0005450d) vkb2_top_cell_right_wide_pane

0x1936,	// (0x00053a3a) bg_vkb2_func_pane_ParamLimits

0x1936,	// (0x00053a3a) bg_vkb2_func_pane

0x247a,	// (0x0005457e) vkb2_top_cell_left_pane_g1_ParamLimits

0x1936,	// (0x00053a3a) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1936,	// (0x00053a3a) bg_vkb2_fuc_pane_cp03

0x24d8,	// (0x000545dc) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4e96,	// (0x00056f9a) bg_vkb2_func_pane_g1

0x4e9e,	// (0x00056fa2) bg_vkb2_func_pane_g2

0x4eae,	// (0x00056fb2) bg_vkb2_func_pane_g3

0x4ea6,	// (0x00056faa) bg_vkb2_func_pane_g4

0x4eb6,	// (0x00056fba) bg_vkb2_func_pane_g5

0x4ebe,	// (0x00056fc2) bg_vkb2_func_pane_g6

0x4ec6,	// (0x00056fca) bg_vkb2_func_pane_g7

0x4ece,	// (0x00056fd2) bg_vkb2_func_pane_g8

0x4e8e,	// (0x00056f92) bg_vkb2_func_pane_g9

0x0008,

0xfdd7,	// (0x00061edb) bg_vkb2_func_pane_g

0x1936,	// (0x00053a3a) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1936,	// (0x00053a3a) bg_vkb2_fuc_pane_cp01

0x247a,	// (0x0005457e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x247a,	// (0x0005457e) vkb2_top_cell_right_wide_pane_g1

0x1936,	// (0x00053a3a) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1936,	// (0x00053a3a) bg_vkb2_fuc_pane_cp02

0x2659,	// (0x0005475d) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2659,	// (0x0005475d) vkb2_top_cell_right_narrow_pane_g1

0xe2c6,	// (0x000603ca) aid_touch_area_decrease_ParamLimits

0xe2c6,	// (0x000603ca) aid_touch_area_decrease

0xe300,	// (0x00060404) aid_touch_area_increase_ParamLimits

0xe300,	// (0x00060404) aid_touch_area_increase

0xe328,	// (0x0006042c) aid_touch_area_mute_ParamLimits

0xe328,	// (0x0006042c) aid_touch_area_mute

0xe350,	// (0x00060454) aid_touch_area_slider_ParamLimits

0xe350,	// (0x00060454) aid_touch_area_slider

0xe390,	// (0x00060494) popup_slider_window_g4_ParamLimits

0xe390,	// (0x00060494) popup_slider_window_g4

0xe3b8,	// (0x000604bc) popup_slider_window_g5_ParamLimits

0xe3b8,	// (0x000604bc) popup_slider_window_g5

0xe3ec,	// (0x000604f0) popup_slider_window_g6_ParamLimits

0xe3ec,	// (0x000604f0) popup_slider_window_g6

0x8b9b,	// (0x0005ac9f) popup_slider_window_t2_ParamLimits

0x8b9b,	// (0x0005ac9f) popup_slider_window_t2

0x0001,

0xfcd1,	// (0x00061dd5) popup_slider_window_t_ParamLimits

0xfcd1,	// (0x00061dd5) popup_slider_window_t

0xe408,	// (0x0006050c) slider_pane_ParamLimits

0xe408,	// (0x0006050c) slider_pane

0x98b7,	// (0x0005b9bb) slider_pane_g1_ParamLimits

0x98b7,	// (0x0005b9bb) slider_pane_g1

0x98cb,	// (0x0005b9cf) slider_pane_g2_ParamLimits

0x98cb,	// (0x0005b9cf) slider_pane_g2

0x98e1,	// (0x0005b9e5) slider_pane_g3_ParamLimits

0x98e1,	// (0x0005b9e5) slider_pane_g3

0x0003,

0xfdea,	// (0x00061eee) slider_pane_g_ParamLimits

0xfdea,	// (0x00061eee) slider_pane_g

0xc747,	// (0x0005e84b) popup_tb_float_extension_window_ParamLimits

0xc747,	// (0x0005e84b) popup_tb_float_extension_window

0x990d,	// (0x0005ba11) aid_size_cell_tb_float_ext

0xd0e0,	// (0x0005f1e4) bg_popup_sub_window_cp28

0x9919,	// (0x0005ba1d) grid_tb_float_ext_pane

0x9923,	// (0x0005ba27) cell_tb_float_ext_pane_ParamLimits

0x9923,	// (0x0005ba27) cell_tb_float_ext_pane

0x993d,	// (0x0005ba41) cell_tb_float_ext_pane_g1

0x9946,	// (0x0005ba4a) grid_highlight_pane_cp12

0xc8f4,	// (0x0005e9f8) cell_last_hwr_side_pane_ParamLimits

0xc8f4,	// (0x0005e9f8) cell_last_hwr_side_pane

0x74ab,	// (0x000595af) cell_last_hwr_side_pane_g1

0x994f,	// (0x0005ba53) cell_last_hwr_side_pane_g2

0x0001,

0xfdf3,	// (0x00061ef7) cell_last_hwr_side_pane_g

0xcded,	// (0x0005eef1) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcded,	// (0x0005eef1) vkb2_area_bottom_space_btn_pane

0x1b9b,	// (0x00053c9f) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9415,	// (0x0005b519) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x263a,	// (0x0005473e) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2679,	// (0x0005477d) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2679,	// (0x0005477d) vkb2_area_bottom_space_btn_pane_g1

0x26b3,	// (0x000547b7) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x26b3,	// (0x000547b7) vkb2_area_bottom_space_btn_pane_g2

0x26e9,	// (0x000547ed) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x26e9,	// (0x000547ed) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf8,	// (0x00061efc) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf8,	// (0x00061efc) vkb2_area_bottom_space_btn_pane_g

0x19f9,	// (0x00053afd) cel_fep_hwr_func_pane_ParamLimits

0x19f9,	// (0x00053afd) cel_fep_hwr_func_pane

0xc8c9,	// (0x0005e9cd) cell_hwr_side_button_pane_ParamLimits

0xc8c9,	// (0x0005e9cd) cell_hwr_side_button_pane

0x8df1,	// (0x0005aef5) aid_area_touch_clock_ParamLimits

0x2fdf,	// (0x000550e3) bg_uniindi_top_pane_ParamLimits

0x8e03,	// (0x0005af07) uniindi_top_pane_g1_ParamLimits

0x8e19,	// (0x0005af1d) uniindi_top_pane_g2_ParamLimits

0x8e25,	// (0x0005af29) uniindi_top_pane_g3_ParamLimits

0x8e36,	// (0x0005af3a) uniindi_top_pane_g4_ParamLimits

0xfd09,	// (0x00061e0d) uniindi_top_pane_g_ParamLimits

0x8e43,	// (0x0005af47) uniindi_top_pane_t1_ParamLimits

0x2fdf,	// (0x000550e3) bg_vkb2_func_pane_cp01_ParamLimits

0x2fdf,	// (0x000550e3) bg_vkb2_func_pane_cp01

0x9958,	// (0x0005ba5c) cel_fep_hwr_func_pane_g1_ParamLimits

0x9958,	// (0x0005ba5c) cel_fep_hwr_func_pane_g1

0x2fdf,	// (0x000550e3) bg_vkb2_func_pane_cp02_ParamLimits

0x2fdf,	// (0x000550e3) bg_vkb2_func_pane_cp02

0x9958,	// (0x0005ba5c) cell_hwr_side_button_pane_g1_ParamLimits

0x9958,	// (0x0005ba5c) cell_hwr_side_button_pane_g1

0x4d0f,	// (0x00056e13) status_pane_g4_ParamLimits

0x4d0f,	// (0x00056e13) status_pane_g4

0x4d29,	// (0x00056e2d) status_pane_t1

0x71f7,	// (0x000592fb) form2_midp_gauge_slider_cont_pane

0x71ff,	// (0x00059303) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdca0,	// (0x0005fda4) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdcb2,	// (0x0005fdb6) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac9,	// (0x00061bcd) form2_midp_gauge_slider_pane_t_ParamLimits

0x7235,	// (0x00059339) form2_midp_slider_pane_ParamLimits

0x2010,	// (0x00054114) aid_size_cell_func_vkb2_ParamLimits

0x2010,	// (0x00054114) aid_size_cell_func_vkb2

0x98f9,	// (0x0005b9fd) slider_pane_g4_ParamLimits

0x98f9,	// (0x0005b9fd) slider_pane_g4

0xce56,	// (0x0005ef5a) form2_midp_gauge_slider_pane_t2_cp01

0xce64,	// (0x0005ef68) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xce64,	// (0x0005ef68) form2_midp_gauge_slider_pane_t3_cp01

0x275e,	// (0x00054862) form2_midp_slider_pane_cp01

0xd0e0,	// (0x0005f1e4) navi_smil_pane

0x9991,	// (0x0005ba95) navi_smil_pane_g1

0x9999,	// (0x0005ba9d) navi_smil_pane_t1

0x9966,	// (0x0005ba6a) form2_midp_slider_pane_g1

0x996f,	// (0x0005ba73) form2_midp_slider_pane_g2

0x9977,	// (0x0005ba7b) form2_midp_slider_pane_g3

0x9966,	// (0x0005ba6a) form2_midp_slider_pane_g4

0xeea5,	// (0x00060fa9) form2_midp_slider_pane_g5

0x0004,

0xfe01,	// (0x00061f05) form2_midp_slider_pane_g

0x2723,	// (0x00054827) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2723,	// (0x00054827) vkb2_area_bottom_space_btn_pane_g4

0xd3ab,	// (0x0005f4af) lc0_navi_pane_ParamLimits

0xd3ab,	// (0x0005f4af) lc0_navi_pane

0xd415,	// (0x0005f519) lc0_stat_indi_pane_ParamLimits

0xd415,	// (0x0005f519) lc0_stat_indi_pane

0xd42a,	// (0x0005f52e) ls0_title_pane_ParamLimits

0xd42a,	// (0x0005f52e) ls0_title_pane

0x3684,	// (0x00055788) bg_popup_sub_pane_cp14_ParamLimits

0x8dd8,	// (0x0005aedc) list_uniindi_pane_ParamLimits

0x8de4,	// (0x0005aee8) uniindi_top_pane_ParamLimits

0x8e80,	// (0x0005af84) list_single_uniindi_pane_g1_ParamLimits

0x8e93,	// (0x0005af97) list_single_uniindi_pane_t1_ParamLimits

0xce81,	// (0x0005ef85) lc0_stat_clock_pane_ParamLimits

0xce81,	// (0x0005ef85) lc0_stat_clock_pane

0xeeb0,	// (0x00060fb4) lc0_stat_indi_pane_g1_ParamLimits

0xeeb0,	// (0x00060fb4) lc0_stat_indi_pane_g1

0xeebd,	// (0x00060fc1) lc0_stat_indi_pane_g2_ParamLimits

0xeebd,	// (0x00060fc1) lc0_stat_indi_pane_g2

0x0001,

0xfe0c,	// (0x00061f10) lc0_stat_indi_pane_g_ParamLimits

0xfe0c,	// (0x00061f10) lc0_stat_indi_pane_g

0xce8e,	// (0x0005ef92) lc0_uni_indicator_pane_ParamLimits

0xce8e,	// (0x0005ef92) lc0_uni_indicator_pane

0xeeca,	// (0x00060fce) ls0_title_pane_g1_ParamLimits

0xeeca,	// (0x00060fce) ls0_title_pane_g1

0xeede,	// (0x00060fe2) ls0_title_pane_t1_ParamLimits

0xeede,	// (0x00060fe2) ls0_title_pane_t1

0xce9b,	// (0x0005ef9f) lc0_uni_indicator_pane_g1_ParamLimits

0xce9b,	// (0x0005ef9f) lc0_uni_indicator_pane_g1

0x9a0b,	// (0x0005bb0f) lc0_stat_clock_pane_t1

0xf30f,	// (0x00061413) main_ai5_pane

0x9a21,	// (0x0005bb25) ai5_sk_pane_ParamLimits

0x9a21,	// (0x0005bb25) ai5_sk_pane

0xef16,	// (0x0006101a) cell_ai5_widget_pane_ParamLimits

0xef16,	// (0x0006101a) cell_ai5_widget_pane

0x9af7,	// (0x0005bbfb) aid_size_cell_widget_grid

0x9b05,	// (0x0005bc09) bg_ai5_widget_pane_ParamLimits

0x9b05,	// (0x0005bc09) bg_ai5_widget_pane

0x9b81,	// (0x0005bc85) cell_ai5_widget_pane_g2

0x9b95,	// (0x0005bc99) cell_ai5_widget_pane_g3

0x9baf,	// (0x0005bcb3) cell_ai5_widget_pane_g4

0x9bbf,	// (0x0005bcc3) cell_ai5_widget_pane_g5

0x9bcf,	// (0x0005bcd3) cell_ai5_widget_pane_g6

0x9bdb,	// (0x0005bcdf) cell_ai5_widget_pane_g7

0x9c47,	// (0x0005bd4b) cell_ai5_widget_pane_t1_ParamLimits

0x9c47,	// (0x0005bd4b) cell_ai5_widget_pane_t1

0x9c64,	// (0x0005bd68) cell_ai5_widget_pane_t2_ParamLimits

0x9c64,	// (0x0005bd68) cell_ai5_widget_pane_t2

0x9c7c,	// (0x0005bd80) cell_ai5_widget_pane_t3_ParamLimits

0x9c7c,	// (0x0005bd80) cell_ai5_widget_pane_t3

0x9c94,	// (0x0005bd98) cell_ai5_widget_pane_t4_ParamLimits

0x9c94,	// (0x0005bd98) cell_ai5_widget_pane_t4

0x9cba,	// (0x0005bdbe) cell_ai5_widget_pane_t5_ParamLimits

0x9cba,	// (0x0005bdbe) cell_ai5_widget_pane_t5

0x9cd9,	// (0x0005bddd) cell_ai5_widget_pane_t6_ParamLimits

0x9cd9,	// (0x0005bddd) cell_ai5_widget_pane_t6

0x9ceb,	// (0x0005bdef) cell_ai5_widget_pane_t7_ParamLimits

0x9ceb,	// (0x0005bdef) cell_ai5_widget_pane_t7

0x9d0a,	// (0x0005be0e) cell_ai5_widget_pane_t8_ParamLimits

0x9d0a,	// (0x0005be0e) cell_ai5_widget_pane_t8

0x000b,

0xfe2c,	// (0x00061f30) cell_ai5_widget_pane_t_ParamLimits

0xfe2c,	// (0x00061f30) cell_ai5_widget_pane_t

0x9d8e,	// (0x0005be92) grid_ai5_widget_pane

0x3684,	// (0x00055788) highlight_cell_ai5_widget_pane_ParamLimits

0x3684,	// (0x00055788) highlight_cell_ai5_widget_pane

0xef82,	// (0x00061086) ai5_sk_left_pane

0xef8c,	// (0x00061090) ai5_sk_middle_pane

0xef96,	// (0x0006109a) ai5_sk_right_pane

0x9dc0,	// (0x0005bec4) bg_ai5_widget_pane_g1_ParamLimits

0x9dc0,	// (0x0005bec4) bg_ai5_widget_pane_g1

0x9dcc,	// (0x0005bed0) bg_ai5_widget_pane_g2_ParamLimits

0x9dcc,	// (0x0005bed0) bg_ai5_widget_pane_g2

0x9dd8,	// (0x0005bedc) bg_ai5_widget_pane_g3_ParamLimits

0x9dd8,	// (0x0005bedc) bg_ai5_widget_pane_g3

0x9de4,	// (0x0005bee8) bg_ai5_widget_pane_g4_ParamLimits

0x9de4,	// (0x0005bee8) bg_ai5_widget_pane_g4

0x9df0,	// (0x0005bef4) bg_ai5_widget_pane_g5_ParamLimits

0x9df0,	// (0x0005bef4) bg_ai5_widget_pane_g5

0x9dfc,	// (0x0005bf00) bg_ai5_widget_pane_g6_ParamLimits

0x9dfc,	// (0x0005bf00) bg_ai5_widget_pane_g6

0x9e08,	// (0x0005bf0c) bg_ai5_widget_pane_g7_ParamLimits

0x9e08,	// (0x0005bf0c) bg_ai5_widget_pane_g7

0x9e14,	// (0x0005bf18) bg_ai5_widget_pane_g8_ParamLimits

0x9e14,	// (0x0005bf18) bg_ai5_widget_pane_g8

0x9e20,	// (0x0005bf24) bg_ai5_widget_pane_g9_ParamLimits

0x9e20,	// (0x0005bf24) bg_ai5_widget_pane_g9

0x0008,

0xfe45,	// (0x00061f49) bg_ai5_widget_pane_g_ParamLimits

0xfe45,	// (0x00061f49) bg_ai5_widget_pane_g

0x9e52,	// (0x0005bf56) cell_shortcut_ai5_widget_pane_ParamLimits

0x9e52,	// (0x0005bf56) cell_shortcut_ai5_widget_pane

0x4640,	// (0x00056744) bg_cell_shortcut_ai5_widget_pane

0x9e63,	// (0x0005bf67) cell_grid_ai5_widget_pane_g1

0x4640,	// (0x00056744) highlight_cell_shortcut_ai5_widget_pane

0x4e96,	// (0x00056f9a) ai5_sk_left_pane_g1

0x9e6c,	// (0x0005bf70) ai5_sk_left_pane_g2

0x9e74,	// (0x0005bf78) ai5_sk_left_pane_g3

0x9e7c,	// (0x0005bf80) ai5_sk_left_pane_g4

0x0003,

0xfe58,	// (0x00061f5c) ai5_sk_left_pane_g

0x9e84,	// (0x0005bf88) ai5_sk_left_pane_t1

0x4e9e,	// (0x00056fa2) ai5_sk_right_pane_g1

0x9e92,	// (0x0005bf96) ai5_sk_right_pane_g2

0x9e9a,	// (0x0005bf9e) ai5_sk_right_pane_g3

0x9ea2,	// (0x0005bfa6) ai5_sk_right_pane_g4

0x0003,

0xfe61,	// (0x00061f65) ai5_sk_right_pane_g

0x9eaa,	// (0x0005bfae) ai5_sk_right_pane_t1

0x4e9e,	// (0x00056fa2) ai5_sk_middle_pane_g1

0x4e96,	// (0x00056f9a) ai5_sk_middle_pane_g2

0x4eb6,	// (0x00056fba) ai5_sk_middle_pane_g3

0x9e9a,	// (0x0005bf9e) ai5_sk_middle_pane_g4

0x9e74,	// (0x0005bf78) ai5_sk_middle_pane_g5

0x9eb8,	// (0x0005bfbc) ai5_sk_middle_pane_g6

0xefa0,	// (0x000610a4) ai5_sk_middle_pane_g7

0x0006,

0xfe6a,	// (0x00061f6e) ai5_sk_middle_pane_g

0xd297,	// (0x0005f39b) aid_touch_area_size_lc0_ParamLimits

0xd297,	// (0x0005f39b) aid_touch_area_size_lc0

0x1bca,	// (0x00053cce) cell_hwr_candidate_pane_t1_ParamLimits

0x49e0,	// (0x00056ae4) aid_touch_navi_pane

0xd523,	// (0x0005f627) status_dt_navi_pane_ParamLimits

0xd523,	// (0x0005f627) status_dt_navi_pane

0xd53b,	// (0x0005f63f) status_dt_sta_pane_ParamLimits

0xd53b,	// (0x0005f63f) status_dt_sta_pane

0xefa8,	// (0x000610ac) dt_sta_controll_pane

0xefb5,	// (0x000610b9) dt_sta_indi_pane

0xefc2,	// (0x000610c6) dt_sta_title_pane

0x2fdf,	// (0x000550e3) bg_dt_sta_indi_pane_ParamLimits

0x2fdf,	// (0x000550e3) bg_dt_sta_indi_pane

0xefd4,	// (0x000610d8) dt_sta_battery_pane

0xefdc,	// (0x000610e0) dt_sta_indi_pane_g1

0x9f0a,	// (0x0005c00e) dt_sta_indi_pane_g2

0x9f13,	// (0x0005c017) dt_sta_indi_pane_g3

0x0002,

0xfe79,	// (0x00061f7d) dt_sta_indi_pane_g

0x9f1c,	// (0x0005c020) dt_sta_signal_pane

0x3684,	// (0x00055788) bg_dt_sta_title_pane_ParamLimits

0x3684,	// (0x00055788) bg_dt_sta_title_pane

0x9f25,	// (0x0005c029) dt_sta_title_pane_g1

0x9f2d,	// (0x0005c031) dt_sta_title_pane_t1_ParamLimits

0x9f2d,	// (0x0005c031) dt_sta_title_pane_t1

0xd0e0,	// (0x0005f1e4) bg_dt_sta_control_pane

0xefe5,	// (0x000610e9) dt_sta_controll_pane_g1

0x9f4b,	// (0x0005c04f) bg_dt_sta_title_pane_g1

0x9f54,	// (0x0005c058) bg_dt_sta_title_pane_g2

0x9f5d,	// (0x0005c061) bg_dt_sta_title_pane_g3

0x0002,

0xfe80,	// (0x00061f84) bg_dt_sta_title_pane_g

0x74ab,	// (0x000595af) bg_dt_sta_indi_pane_g1

0x9f66,	// (0x0005c06a) dt_sta_signal_pane_g1

0x9f6e,	// (0x0005c072) dt_sta_signal_pane_g2

0x0001,

0xfe87,	// (0x00061f8b) dt_sta_signal_pane_g

0x9f76,	// (0x0005c07a) dt_sta_battery_pane_g1

0x9f7f,	// (0x0005c083) dt_sta_battery_pane_t1

0x74ab,	// (0x000595af) bg_dt_sta_control_pane_g1

0x4146,	// (0x0005624a) fep_china_uni_eep_pane

0x414e,	// (0x00056252) fep_china_uni_entry_pane_ParamLimits

0x415e,	// (0x00056262) popup_fep_china_uni_window_g1_ParamLimits

0x416e,	// (0x00056272) popup_fep_china_uni_window_g2_ParamLimits

0x416e,	// (0x00056272) popup_fep_china_uni_window_g2

0x0001,

0xf6fb,	// (0x000617ff) popup_fep_china_uni_window_g_ParamLimits

0xf6fb,	// (0x000617ff) popup_fep_china_uni_window_g

0x9f8e,	// (0x0005c092) fep_china_uni_eep_pane_g1

0x9f96,	// (0x0005c09a) fep_china_uni_eep_pane_t1

0x9988,	// (0x0005ba8c) aid_touch_area_size_smil_player

0x4b36,	// (0x00056c3a) lc0_clock_pane

0x4d1d,	// (0x00056e21) status_pane_g5_ParamLimits

0x4d1d,	// (0x00056e21) status_pane_g5

0xc2c9,	// (0x0005e3cd) popup_keymap_window

0x4cdb,	// (0x00056ddf) status_icon_pane

0x9b95,	// (0x0005bc99) cell_ai5_widget_pane_g3_ParamLimits

0x9baf,	// (0x0005bcb3) cell_ai5_widget_pane_g4_ParamLimits

0x9bbf,	// (0x0005bcc3) cell_ai5_widget_pane_g5_ParamLimits

0x9be7,	// (0x0005bceb) cell_ai5_widget_pane_g8_ParamLimits

0x9be7,	// (0x0005bceb) cell_ai5_widget_pane_g8

0x9bfb,	// (0x0005bcff) cell_ai5_widget_pane_g9_ParamLimits

0x9bfb,	// (0x0005bcff) cell_ai5_widget_pane_g9

0x9c0f,	// (0x0005bd13) cell_ai5_widget_pane_g10_ParamLimits

0x9c0f,	// (0x0005bd13) cell_ai5_widget_pane_g10

0x9fa5,	// (0x0005c0a9) status_icon_pane_g1

0xd0e0,	// (0x0005f1e4) bg_popup_sub_pane_cp13

0x9fad,	// (0x0005c0b1) popup_keymap_window_t1

0xd22d,	// (0x0005f331) control_pane_g6_ParamLimits

0xd22d,	// (0x0005f331) control_pane_g6

0xd23a,	// (0x0005f33e) control_pane_g7_ParamLimits

0xd23a,	// (0x0005f33e) control_pane_g7

0xd247,	// (0x0005f34b) control_pane_g8_ParamLimits

0xd247,	// (0x0005f34b) control_pane_g8

0xefa8,	// (0x000610ac) dt_sta_controll_pane_ParamLimits

0xefb5,	// (0x000610b9) dt_sta_indi_pane_ParamLimits

0xefc2,	// (0x000610c6) dt_sta_title_pane_ParamLimits

0x351b,	// (0x0005561f) aid_size_touch_scroll_bar_cale

0xf3e8,	// (0x000614ec) popup_discreet_window_ParamLimits

0xf3e8,	// (0x000614ec) popup_discreet_window

0xb4af,	// (0x0005d5b3) popup_sk_window

0x551d,	// (0x00057621) bg_popup_sub_pane_cp28_ParamLimits

0x551d,	// (0x00057621) bg_popup_sub_pane_cp28

0x9fbb,	// (0x0005c0bf) popup_discreet_window_g1_ParamLimits

0x9fbb,	// (0x0005c0bf) popup_discreet_window_g1

0x9fdb,	// (0x0005c0df) popup_discreet_window_t1_ParamLimits

0x9fdb,	// (0x0005c0df) popup_discreet_window_t1

0x9ff9,	// (0x0005c0fd) popup_discreet_window_t2_ParamLimits

0x9ff9,	// (0x0005c0fd) popup_discreet_window_t2

0x0002,

0xfe8c,	// (0x00061f90) popup_discreet_window_t_ParamLimits

0xfe8c,	// (0x00061f90) popup_discreet_window_t

0x2795,	// (0x00054899) popup_sk_window_g1

0x279f,	// (0x000548a3) popup_sk_window_g2

0x0001,

0xfe93,	// (0x00061f97) popup_sk_window_g

0x27a7,	// (0x000548ab) popup_sk_window_t1

0x27b5,	// (0x000548b9) popup_sk_window_t1_copy1

0x9b81,	// (0x0005bc85) cell_ai5_widget_pane_g2_ParamLimits

0x9d1c,	// (0x0005be20) cell_ai5_widget_pane_t9_ParamLimits

0x9d1c,	// (0x0005be20) cell_ai5_widget_pane_t9

0xd0e0,	// (0x0005f1e4) main_fep_fshwr2_pane

0xcec2,	// (0x0005efc6) aid_fshwr2_btn_pane

0xced2,	// (0x0005efd6) aid_fshwr2_syb_pane

0xcee6,	// (0x0005efea) aid_fshwr2_txt_pane

0xcef6,	// (0x0005effa) fshwr2_func_candi_pane

0xcf16,	// (0x0005f01a) fshwr2_hwr_syb_pane

0xcf38,	// (0x0005f03c) fshwr2_icf_pane

0xf30f,	// (0x00061413) fshwr2_icf_bg_pane

0xcf68,	// (0x0005f06c) fshwr2_icf_pane_t1_ParamLimits

0xcf68,	// (0x0005f06c) fshwr2_icf_pane_t1

0x401b,	// (0x0005611f) fshwr2_func_candi_pane_g1

0xefee,	// (0x000610f2) fshwr2_func_candi_row_pane_ParamLimits

0xefee,	// (0x000610f2) fshwr2_func_candi_row_pane

0xcf81,	// (0x0005f085) cell_fshwr2_syb_pane_ParamLimits

0xcf81,	// (0x0005f085) cell_fshwr2_syb_pane

0x289e,	// (0x000549a2) fshwr2_hwr_syb_pane_g1_ParamLimits

0x289e,	// (0x000549a2) fshwr2_hwr_syb_pane_g1

0xf30f,	// (0x00061413) bg_popup_call_pane_cp01

0xcfa7,	// (0x0005f0ab) fshwr2_func_candi_cell_pane_ParamLimits

0xcfa7,	// (0x0005f0ab) fshwr2_func_candi_cell_pane

0x52fe,	// (0x00057402) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x52fe,	// (0x00057402) fshwr2_func_candi_cell_bg_pane

0xcff2,	// (0x0005f0f6) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcff2,	// (0x0005f0f6) fshwr2_func_candi_cell_pane_g1

0xd029,	// (0x0005f12d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd029,	// (0x0005f12d) fshwr2_func_candi_cell_pane_t1

0xf30f,	// (0x00061413) bg_button_pane_cp08

0x4964,	// (0x00056a68) cell_fshwr2_syb_bg_pane

0xd044,	// (0x0005f148) cell_fshwr2_syb_bg_pane_g1

0xd057,	// (0x0005f15b) cell_fshwr2_syb_bg_pane_t1

0x3684,	// (0x00055788) main_tmo_pane

0xd7f7,	// (0x0005f8fb) uni_indicator_pane_g1_ParamLimits

0xd80d,	// (0x0005f911) uni_indicator_pane_g2_ParamLimits

0xd823,	// (0x0005f927) uni_indicator_pane_g3_ParamLimits

0x606b,	// (0x0005816f) uni_indicator_pane_g4_ParamLimits

0x606b,	// (0x0005816f) uni_indicator_pane_g4

0x607f,	// (0x00058183) uni_indicator_pane_g5_ParamLimits

0x607f,	// (0x00058183) uni_indicator_pane_g5

0x607f,	// (0x00058183) uni_indicator_pane_g6_ParamLimits

0x607f,	// (0x00058183) uni_indicator_pane_g6

0xf8fa,	// (0x000619fe) uni_indicator_pane_g_ParamLimits

0xe2a2,	// (0x000603a6) popup_tmo_note_window_ParamLimits

0xe2a2,	// (0x000603a6) popup_tmo_note_window

0x1ff2,	// (0x000540f6) fshwr2_bg_pane

0xd01a,	// (0x0005f11e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd01a,	// (0x0005f11e) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe98,	// (0x00061f9c) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe98,	// (0x00061f9c) fshwr2_func_candi_cell_pane_g

0x1b83,	// (0x00053c87) bg_popup_window_pane_cp01

0x295f,	// (0x00054a63) bg_popup_window_pane_g1_cp01

0xa072,	// (0x0005c176) bg_popup_window_pane_cp22_ParamLimits

0xa072,	// (0x0005c176) bg_popup_window_pane_cp22

0xa080,	// (0x0005c184) listscroll_tmo_link_pane_ParamLimits

0xa080,	// (0x0005c184) listscroll_tmo_link_pane

0xa0c0,	// (0x0005c1c4) popup_tmo_note_window_g1_ParamLimits

0xa0c0,	// (0x0005c1c4) popup_tmo_note_window_g1

0xa0cd,	// (0x0005c1d1) tmo_note_info_pane_ParamLimits

0xa0cd,	// (0x0005c1d1) tmo_note_info_pane

0xf011,	// (0x00061115) list_tmo_note_info_pane_g1_ParamLimits

0xf011,	// (0x00061115) list_tmo_note_info_pane_g1

0xa0fe,	// (0x0005c202) list_tmo_note_info_pane_g2_ParamLimits

0xa0fe,	// (0x0005c202) list_tmo_note_info_pane_g2

0x0001,

0xfe9d,	// (0x00061fa1) list_tmo_note_info_pane_g_ParamLimits

0xfe9d,	// (0x00061fa1) list_tmo_note_info_pane_g

0xa11a,	// (0x0005c21e) list_tmo_note_info_text_pane_ParamLimits

0xa11a,	// (0x0005c21e) list_tmo_note_info_text_pane

0xa19b,	// (0x0005c29f) list_tmo_link_pane

0xa1a8,	// (0x0005c2ac) scroll_pane_cp20

0xa1b5,	// (0x0005c2b9) list_single_tmo_link_pane_ParamLimits

0xa1b5,	// (0x0005c2b9) list_single_tmo_link_pane

0xa1c5,	// (0x0005c2c9) list_single_tmo_link_pane_t1

0xa1d3,	// (0x0005c2d7) list_tmo_note_info_text_pane_t1_ParamLimits

0xa1d3,	// (0x0005c2d7) list_tmo_note_info_text_pane_t1

0xbdbf,	// (0x0005dec3) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbdbf,	// (0x0005dec3) aid_size_touch_scroll_bar_cp01

0xbd2e,	// (0x0005de32) aid_size_touch_slider_marker

0xb49f,	// (0x0005d5a3) popup_settings_window_ParamLimits

0xb49f,	// (0x0005d5a3) popup_settings_window

0x0a84,	// (0x00052b88) popup_candi_list_indi_window

0x49e0,	// (0x00056ae4) aid_touch_navi_pane_ParamLimits

0x1f4d,	// (0x00054051) rs_clock_indi_pane

0x1f56,	// (0x0005405a) sctrl_sk_bottom_pane_ParamLimits

0x1f67,	// (0x0005406b) sctrl_sk_top_pane_ParamLimits

0x2062,	// (0x00054166) popup_fep_tooltip_window

0x9af7,	// (0x0005bbfb) aid_size_cell_widget_grid_ParamLimits

0x9b6c,	// (0x0005bc70) cell_ai5_widget_pane_g1_ParamLimits

0x9b6c,	// (0x0005bc70) cell_ai5_widget_pane_g1

0x9bcf,	// (0x0005bcd3) cell_ai5_widget_pane_g6_ParamLimits

0x9bdb,	// (0x0005bcdf) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe11,	// (0x00061f15) cell_ai5_widget_pane_g_ParamLimits

0xfe11,	// (0x00061f15) cell_ai5_widget_pane_g

0x9d4b,	// (0x0005be4f) cell_ai5_widget_pane_t10_ParamLimits

0x9d4b,	// (0x0005be4f) cell_ai5_widget_pane_t10

0x9d8e,	// (0x0005be92) grid_ai5_widget_pane_ParamLimits

0x9e2c,	// (0x0005bf30) cell_contacts_ai5_widget_pane_ParamLimits

0x9e2c,	// (0x0005bf30) cell_contacts_ai5_widget_pane

0xa00e,	// (0x0005c112) popup_discreet_window_t3_ParamLimits

0xa00e,	// (0x0005c112) popup_discreet_window_t3

0xcf54,	// (0x0005f058) popup_fshwr2_char_preview_window_ParamLimits

0xcf54,	// (0x0005f058) popup_fshwr2_char_preview_window

0xf028,	// (0x0006112c) tmo_note_info_pane_t1

0xf03d,	// (0x00061141) tmo_note_info_pane_t2

0xf054,	// (0x00061158) tmo_note_info_pane_t3

0xa177,	// (0x0005c27b) tmo_note_info_pane_t4

0xa189,	// (0x0005c28d) tmo_note_info_pane_t5

0x0004,

0xfea2,	// (0x00061fa6) tmo_note_info_pane_t

0xa19b,	// (0x0005c29f) list_tmo_link_pane_ParamLimits

0xa1a8,	// (0x0005c2ac) scroll_pane_cp20_ParamLimits

0xf30f,	// (0x00061413) bg_popup_fep_char_preview_window_cp01

0xf069,	// (0x0006116d) popup_fshwr2_char_preview_window_t1

0xa1fa,	// (0x0005c2fe) popup_candi_list_indi_window_g1

0xa203,	// (0x0005c307) bg_cell_contacts_ai5_widget_pane

0xa20f,	// (0x0005c313) cell_contacts_ai5_widget_pane_g1

0x7b49,	// (0x00059c4d) cell_contacts_ai5_widget_pane_g2

0xa224,	// (0x0005c328) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfead,	// (0x00061fb1) cell_contacts_ai5_widget_pane_g

0xa230,	// (0x0005c334) cell_contacts_ai5_widget_pane_t1

0x3684,	// (0x00055788) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa2a7,	// (0x0005c3ab) settings_container_pane

0x4640,	// (0x00056744) listscroll_set_pane_copy1

0x6b90,	// (0x00058c94) scroll_pane_cp121_copy1

0x52ba,	// (0x000573be) set_content_pane_copy1

0xa2b3,	// (0x0005c3b7) aid_height_set_list_copy1_ParamLimits

0xa2b3,	// (0x0005c3b7) aid_height_set_list_copy1

0x6267,	// (0x0005836b) aid_size_parent_copy1_ParamLimits

0x6267,	// (0x0005836b) aid_size_parent_copy1

0xa2bf,	// (0x0005c3c3) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa2bf,	// (0x0005c3c3) button_value_adjust_pane_cp6_copy1

0x4964,	// (0x00056a68) list_highlight_pane_cp2_copy1_ParamLimits

0x4964,	// (0x00056a68) list_highlight_pane_cp2_copy1

0xa2d3,	// (0x0005c3d7) list_set_pane_copy1_ParamLimits

0xa2d3,	// (0x0005c3d7) list_set_pane_copy1

0xa242,	// (0x0005c346) main_pane_set_t1_copy1_ParamLimits

0xa242,	// (0x0005c346) main_pane_set_t1_copy1

0xa27c,	// (0x0005c380) main_pane_set_t2_copy1_ParamLimits

0xa27c,	// (0x0005c380) main_pane_set_t2_copy1

0xa380,	// (0x0005c484) main_pane_set_t3_copy1

0xa38e,	// (0x0005c492) main_pane_set_t4_copy1

0xa29b,	// (0x0005c39f) set_content_pane_g1_copy1_ParamLimits

0xa29b,	// (0x0005c39f) set_content_pane_g1_copy1

0xa39c,	// (0x0005c4a0) setting_code_pane_copy1

0xa3a4,	// (0x0005c4a8) setting_slider_graphic_pane_copy1

0xa3a4,	// (0x0005c4a8) setting_slider_pane_copy1

0xa3ac,	// (0x0005c4b0) setting_text_pane_copy1

0xa3ac,	// (0x0005c4b0) setting_volume_pane_copy1

0xa39c,	// (0x0005c4a0) settings_code_pane_cp2_copy1

0xa3b4,	// (0x0005c4b8) settings_code_pane_cp_copy1_ParamLimits

0xa3b4,	// (0x0005c4b8) settings_code_pane_cp_copy1

0x2968,	// (0x00054a6c) volume_set_pane_copy1

0xa3c8,	// (0x0005c4cc) volume_set_pane_g10_copy1

0xa3d0,	// (0x0005c4d4) volume_set_pane_g1_copy1

0xa3d8,	// (0x0005c4dc) volume_set_pane_g2_copy1

0xa3e0,	// (0x0005c4e4) volume_set_pane_g3_copy1

0xa3e8,	// (0x0005c4ec) volume_set_pane_g4_copy1

0xa3f0,	// (0x0005c4f4) volume_set_pane_g5_copy1

0xa3f8,	// (0x0005c4fc) volume_set_pane_g6_copy1

0xa400,	// (0x0005c504) volume_set_pane_g7_copy1

0xa408,	// (0x0005c50c) volume_set_pane_g8_copy1

0xa410,	// (0x0005c514) volume_set_pane_g9_copy1

0x2d56,	// (0x00054e5a) bg_set_opt_pane_cp_copy1_ParamLimits

0x2d56,	// (0x00054e5a) bg_set_opt_pane_cp_copy1

0x2970,	// (0x00054a74) setting_slider_pane_t1_copy1_ParamLimits

0x2970,	// (0x00054a74) setting_slider_pane_t1_copy1

0x298f,	// (0x00054a93) setting_slider_pane_t2_copy1_ParamLimits

0x298f,	// (0x00054a93) setting_slider_pane_t2_copy1

0x29a9,	// (0x00054aad) setting_slider_pane_t3_copy1_ParamLimits

0x29a9,	// (0x00054aad) setting_slider_pane_t3_copy1

0x29c1,	// (0x00054ac5) slider_set_pane_copy1_ParamLimits

0x29c1,	// (0x00054ac5) slider_set_pane_copy1

0x36d0,	// (0x000557d4) set_opt_bg_pane_g1_copy2

0x36d8,	// (0x000557dc) set_opt_bg_pane_g2_copy2

0xa418,	// (0x0005c51c) set_opt_bg_pane_g3_copy2

0x36e8,	// (0x000557ec) set_opt_bg_pane_g4_copy2

0x36f0,	// (0x000557f4) set_opt_bg_pane_g5_copy2

0x36f8,	// (0x000557fc) set_opt_bg_pane_g6_copy2

0xa422,	// (0x0005c526) set_opt_bg_pane_g7_copy2

0xa42a,	// (0x0005c52e) set_opt_bg_pane_g8_copy2

0xa434,	// (0x0005c538) set_opt_bg_pane_g9_copy2

0x29d7,	// (0x00054adb) aid_size_touch_slider_mark_copy1_ParamLimits

0x29d7,	// (0x00054adb) aid_size_touch_slider_mark_copy1

0xa43e,	// (0x0005c542) slider_set_pane_g1_copy1

0x29eb,	// (0x00054aef) slider_set_pane_g2_copy1

0x142e,	// (0x00053532) slider_set_pane_g3_copy1_ParamLimits

0x142e,	// (0x00053532) slider_set_pane_g3_copy1

0x1442,	// (0x00053546) slider_set_pane_g4_copy1_ParamLimits

0x1442,	// (0x00053546) slider_set_pane_g4_copy1

0x145a,	// (0x0005355e) slider_set_pane_g5_copy1_ParamLimits

0x145a,	// (0x0005355e) slider_set_pane_g5_copy1

0x142e,	// (0x00053532) slider_set_pane_g6_copy1_ParamLimits

0x142e,	// (0x00053532) slider_set_pane_g6_copy1

0x29f3,	// (0x00054af7) slider_set_pane_g7_copy1_ParamLimits

0x29f3,	// (0x00054af7) slider_set_pane_g7_copy1

0xd0f4,	// (0x0005f1f8) bg_set_opt_pane_cp2_copy1

0xa447,	// (0x0005c54b) setting_slider_graphic_pane_g1_copy1

0xa450,	// (0x0005c554) setting_slider_graphic_pane_t1_copy1

0xa460,	// (0x0005c564) setting_slider_graphic_pane_t2_copy1

0xa470,	// (0x0005c574) slider_set_pane_cp_copy1

0xa480,	// (0x0005c584) input_focus_pane_cp1_copy1

0xa489,	// (0x0005c58d) list_set_text_pane_copy1

0xa491,	// (0x0005c595) setting_text_pane_g1_copy1

0x3a1c,	// (0x00055b20) set_text_pane_t1_copy1

0xa480,	// (0x0005c584) input_focus_pane_cp2_copy1

0xa491,	// (0x0005c595) setting_code_pane_g1_copy1

0xa49a,	// (0x0005c59e) setting_code_pane_t1_copy1

0x69b8,	// (0x00058abc) list_set_graphic_pane_copy1

0xd0f4,	// (0x0005f1f8) bg_set_opt_pane_cp4_copy1

0x4345,	// (0x00056449) list_set_graphic_pane_g1_copy1_ParamLimits

0x4345,	// (0x00056449) list_set_graphic_pane_g1_copy1

0xa4a8,	// (0x0005c5ac) list_set_graphic_pane_g2_copy1

0x435d,	// (0x00056461) list_set_graphic_pane_t1_copy1_ParamLimits

0x435d,	// (0x00056461) list_set_graphic_pane_t1_copy1

0x74ab,	// (0x000595af) rs_clock_indi_pane_g1

0xa4b0,	// (0x0005c5b4) rs_clock_indi_pane_t1

0xa4be,	// (0x0005c5c2) rs_indi_pane

0xa4c6,	// (0x0005c5ca) rs_indi_pane_g1

0xa4cf,	// (0x0005c5d3) rs_indi_pane_g2

0xa4d8,	// (0x0005c5dc) rs_indi_pane_g3

0x0002,

0xfeb4,	// (0x00061fb8) rs_indi_pane_g

0x4640,	// (0x00056744) bg_popup_preview_window_pane_cp03

0xa4e1,	// (0x0005c5e5) popup_fep_tooltip_window_t1

0x815c,	// (0x0005a260) popup_note2_window_g2_ParamLimits

0x815c,	// (0x0005a260) popup_note2_window_g2

0x0001,

0xfc41,	// (0x00061d45) popup_note2_window_g_ParamLimits

0xfc41,	// (0x00061d45) popup_note2_window_g

0x8657,	// (0x0005a75b) bg_popup_sub_pane_cp11_ParamLimits

0x8664,	// (0x0005a768) cell_ai3_links_pane_g1_ParamLimits

0x867b,	// (0x0005a77f) cell_ai3_links_pane_t1

0x3a1c,	// (0x00055b20) set_text_pane_t1_copy1_ParamLimits

0x4550,	// (0x00056654) cell_graphic_popup_pane_cp2_ParamLimits

0x4550,	// (0x00056654) cell_graphic_popup_pane_cp2

0xa4ef,	// (0x0005c5f3) cell_graphic_popup_pane_g1_cp2

0x332e,	// (0x00055432) cell_graphic_popup_pane_g2_cp2

0xa4f7,	// (0x0005c5fb) cell_graphic_popup_pane_g3_cp2

0xa4ff,	// (0x0005c603) cell_graphic_popup_pane_t2_cp2

0x333f,	// (0x00055443) grid_highlight_pane_cp3_cp2

0x3d36,	// (0x00055e3a) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3684,	// (0x00055788) main_tmo_pane_ParamLimits

0xe296,	// (0x0006039a) popup_tmo_big_image_note_window

0x9b5b,	// (0x0005bc5f) cell_ai5_widget_list_pane

0x9b63,	// (0x0005bc67) cell_ai5_widget_lrg_icon_pane

0xf028,	// (0x0006112c) tmo_note_info_pane_t1_ParamLimits

0xf03d,	// (0x00061141) tmo_note_info_pane_t2_ParamLimits

0xf054,	// (0x00061158) tmo_note_info_pane_t3_ParamLimits

0xa177,	// (0x0005c27b) tmo_note_info_pane_t4_ParamLimits

0xa189,	// (0x0005c28d) tmo_note_info_pane_t5_ParamLimits

0xfea2,	// (0x00061fa6) tmo_note_info_pane_t_ParamLimits

0xa2a7,	// (0x0005c3ab) settings_container_pane_ParamLimits

0xa478,	// (0x0005c57c) indicator_popup_pane_cp5

0xa478,	// (0x0005c57c) indicator_popup_pane_cp6

0x69b8,	// (0x00058abc) list_set_graphic_pane_copy1_ParamLimits

0xd0e0,	// (0x0005f1e4) bg_popup_window_pane_cp23

0xa50d,	// (0x0005c611) popup_tmo_big_image_note_window_g1

0xa517,	// (0x0005c61b) popup_tmo_big_image_note_window_t1

0xa527,	// (0x0005c62b) popup_tmo_big_image_note_window_t2

0xa537,	// (0x0005c63b) popup_tmo_big_image_note_window_t3

0x0002,

0xfebb,	// (0x00061fbf) popup_tmo_big_image_note_window_t

0x74ab,	// (0x000595af) cell_ai5_widget_lrg_icon_pane_g1

0xa547,	// (0x0005c64b) cell_ai5_widget_lrg_icon_pane_t1

0xa555,	// (0x0005c659) cell_ai5_widget_list_row_pane_ParamLimits

0xa555,	// (0x0005c659) cell_ai5_widget_list_row_pane

0xa56c,	// (0x0005c670) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa56c,	// (0x0005c670) cell_ai5_widget_list_row_pane_g1

0xa579,	// (0x0005c67d) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa579,	// (0x0005c67d) cell_ai5_widget_list_row_pane_t1

0xa5a4,	// (0x0005c6a8) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa5a4,	// (0x0005c6a8) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec2,	// (0x00061fc6) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec2,	// (0x00061fc6) cell_ai5_widget_list_row_pane_t

0xf30f,	// (0x00061413) main_fep_vtchi_ss_pane

0xa5f4,	// (0x0005c6f8) popup_fep_char_pre_window

0xa5fc,	// (0x0005c700) popup_fep_ituss_window

0xf086,	// (0x0006118a) popup_fep_vkbss_window

0x4964,	// (0x00056a68) grid_vkbss_keypad_pane_ParamLimits

0x4964,	// (0x00056a68) grid_vkbss_keypad_pane

0xa674,	// (0x0005c778) ituss_keypad_pane

0x2a34,	// (0x00054b38) aid_vkbss_key_offset_ParamLimits

0x2a34,	// (0x00054b38) aid_vkbss_key_offset

0xd081,	// (0x0005f185) cell_vkbss_key_pane_ParamLimits

0xd081,	// (0x0005f185) cell_vkbss_key_pane

0xa680,	// (0x0005c784) bg_cell_vkbss_key_g1_ParamLimits

0xa680,	// (0x0005c784) bg_cell_vkbss_key_g1

0xf093,	// (0x00061197) cell_vkbss_key_3p_pane_ParamLimits

0xf093,	// (0x00061197) cell_vkbss_key_3p_pane

0xf0c9,	// (0x000611cd) cell_vkbss_key_g1_ParamLimits

0xf0c9,	// (0x000611cd) cell_vkbss_key_g1

0xf0ff,	// (0x00061203) cell_vkbss_key_t1_ParamLimits

0xf0ff,	// (0x00061203) cell_vkbss_key_t1

0x2a9e,	// (0x00054ba2) cell_ituss_key_pane_ParamLimits

0x2a9e,	// (0x00054ba2) cell_ituss_key_pane

0xa754,	// (0x0005c858) bg_cell_ituss_key_g1_ParamLimits

0xa754,	// (0x0005c858) bg_cell_ituss_key_g1

0xa760,	// (0x0005c864) cell_ituss_key_pane_g1_ParamLimits

0xa760,	// (0x0005c864) cell_ituss_key_pane_g1

0x2aaf,	// (0x00054bb3) cell_ituss_key_pane_g2_ParamLimits

0x2aaf,	// (0x00054bb3) cell_ituss_key_pane_g2

0x0005,

0xfec9,	// (0x00061fcd) cell_ituss_key_pane_g_ParamLimits

0xfec9,	// (0x00061fcd) cell_ituss_key_pane_g

0x2b33,	// (0x00054c37) cell_ituss_key_t1_ParamLimits

0x2b33,	// (0x00054c37) cell_ituss_key_t1

0x2b6d,	// (0x00054c71) cell_ituss_key_t2_ParamLimits

0x2b6d,	// (0x00054c71) cell_ituss_key_t2

0x2b9f,	// (0x00054ca3) cell_ituss_key_t3_ParamLimits

0x2b9f,	// (0x00054ca3) cell_ituss_key_t3

0x2bd0,	// (0x00054cd4) cell_ituss_key_t4_ParamLimits

0x2bd0,	// (0x00054cd4) cell_ituss_key_t4

0x0005,

0xfed6,	// (0x00061fda) cell_ituss_key_t_ParamLimits

0xfed6,	// (0x00061fda) cell_ituss_key_t

0xf15b,	// (0x0006125f) cell_vkbss_key_3p_pane_g1

0xf163,	// (0x00061267) cell_vkbss_key_3p_pane_g2

0xf16b,	// (0x0006126f) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee3,	// (0x00061fe7) cell_vkbss_key_3p_pane_g

0x4640,	// (0x00056744) bg_popup_fep_char_preview_window_cp02

0xa79e,	// (0x0005c8a2) popup_fep_char_pre_window_t1

0xef78,	// (0x0006107c) main_ai5_sk_pane

0xa203,	// (0x0005c307) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa20f,	// (0x0005c313) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7b49,	// (0x00059c4d) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa224,	// (0x0005c328) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfead,	// (0x00061fb1) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa230,	// (0x0005c334) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3684,	// (0x00055788) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf173,	// (0x00061277) main_ai5_sk_pane_g1

0x5356,	// (0x0005745a) popup_query_code_window_g1

0xf077,	// (0x0006117b) popup_fep_vkb_icf_pane

0xa648,	// (0x0005c74c) popup_fep_vtchi_icf_pane

0xa7b5,	// (0x0005c8b9) bg_icf_pane

0xa7b5,	// (0x0005c8b9) list_vkb_icf_pane

0xa7c1,	// (0x0005c8c5) bg_icf_pane_cp01

0xa7d4,	// (0x0005c8d8) vtchi_icf_list_pane

0xf1c8,	// (0x000612cc) list_vkb_icf_pane_t1_ParamLimits

0xf1c8,	// (0x000612cc) list_vkb_icf_pane_t1

0xa852,	// (0x0005c956) vtchi_icf_list_pane_t1_ParamLimits

0xa852,	// (0x0005c956) vtchi_icf_list_pane_t1

0xa5fc,	// (0x0005c700) popup_fep_ituss_window_ParamLimits

0xa648,	// (0x0005c74c) popup_fep_vtchi_icf_pane_ParamLimits

0xa674,	// (0x0005c778) ituss_keypad_pane_ParamLimits

0x2a2a,	// (0x00054b2e) ituss_sks_pane

0xa7b5,	// (0x0005c8b9) bg_icf_pane_ParamLimits

0xa5cc,	// (0x0005c6d0) icf_edit_indi_pane_ParamLimits

0xa5cc,	// (0x0005c6d0) icf_edit_indi_pane

0xa7b5,	// (0x0005c8b9) list_vkb_icf_pane_ParamLimits

0xa7c1,	// (0x0005c8c5) bg_icf_pane_cp01_ParamLimits

0xa5e7,	// (0x0005c6eb) icf_edit_indi_pane_cp01_ParamLimits

0xa5e7,	// (0x0005c6eb) icf_edit_indi_pane_cp01

0xa7d4,	// (0x0005c8d8) vtchi_query_pane

0x9958,	// (0x0005ba5c) icf_edit_indi_pane_g1_ParamLimits

0x9958,	// (0x0005ba5c) icf_edit_indi_pane_g1

0xf1df,	// (0x000612e3) icf_edit_indi_pane_g2_ParamLimits

0xf1df,	// (0x000612e3) icf_edit_indi_pane_g2

0x0001,

0xff0e,	// (0x00062012) icf_edit_indi_pane_g_ParamLimits

0xff0e,	// (0x00062012) icf_edit_indi_pane_g

0xf1f3,	// (0x000612f7) icf_edit_indi_pane_t1

0xa870,	// (0x0005c974) bg_input_focus_pane_cp042

0x3512,	// (0x00055616) vtchi_button_pane

0xa879,	// (0x0005c97d) vtchi_query_pane_t1

0xa887,	// (0x0005c98b) vtchi_query_pane_t2

0xa895,	// (0x0005c999) vtchi_query_pane_t3

0x0002,

0xfefd,	// (0x00062001) vtchi_query_pane_t

0xf30f,	// (0x00061413) bg_button_pane_cp13

0xa8a3,	// (0x0005c9a7) vtchi_button_pane_g1

0x2c51,	// (0x00054d55) ituss_sks_pane_g1

0x2c5c,	// (0x00054d60) ituss_sks_pane_g2

0x0001,

0xff04,	// (0x00062008) ituss_sks_pane_g

0xa8b9,	// (0x0005c9bd) ituss_sks_pane_t1

0xa8ab,	// (0x0005c9af) ituss_sks_pane_t2

0x0001,

0xff09,	// (0x0006200d) ituss_sks_pane_t

0x6f28,	// (0x0005902c) indicator_nsta_pane_cp_g1

0x6f31,	// (0x00059035) indicator_nsta_pane_cp_g2

0x6f39,	// (0x0005903d) indicator_nsta_pane_cp_g3

0x6f41,	// (0x00059045) indicator_nsta_pane_cp_g4

0x6f31,	// (0x00059035) indicator_nsta_pane_cp_g5

0x6f39,	// (0x0005903d) indicator_nsta_pane_cp_g6

0x0005,

0xfa7f,	// (0x00061b83) indicator_nsta_pane_cp_g

0xec89,	// (0x00060d8d) cell_graphic2_pane_t2_ParamLimits

0xec89,	// (0x00060d8d) cell_graphic2_pane_t2

0x0001,

0xfd98,	// (0x00061e9c) cell_graphic2_pane_t_ParamLimits

0xfd98,	// (0x00061e9c) cell_graphic2_pane_t

0xedba,	// (0x00060ebe) cell_graphic2_control_pane_t1

0xd11a,	// (0x0005f21e) signal_pane_g3_ParamLimits

0xd11a,	// (0x0005f21e) signal_pane_g3

0xd12e,	// (0x0005f232) signal_pane_g4_ParamLimits

0xd12e,	// (0x0005f232) signal_pane_g4

0xa5b6,	// (0x0005c6ba) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa5b6,	// (0x0005c6ba) cell_ai5_widget_list_row_pane_t3

0xa774,	// (0x0005c878) cell_ituss_key_pane_t1_ParamLimits

0xa774,	// (0x0005c878) cell_ituss_key_pane_t1

0x4f93,	// (0x00057097) form_field_data_wide_pane_vc_t2_ParamLimits

0x4f93,	// (0x00057097) form_field_data_wide_pane_vc_t2

0x4fa7,	// (0x000570ab) form_field_data_wide_pane_vc_t3_ParamLimits

0x4fa7,	// (0x000570ab) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e2,	// (0x000618e6) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e2,	// (0x000618e6) form_field_data_wide_pane_vc_t

0x6bd2,	// (0x00058cd6) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6bd2,	// (0x00058cd6) form_field_slider_wide_pane_vc_t3

0x6cb0,	// (0x00058db4) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6cb0,	// (0x00058db4) form_field_popup_wide_pane_vc_t2

0x6cc7,	// (0x00058dcb) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6cc7,	// (0x00058dcb) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa6e,	// (0x00061b72) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa6e,	// (0x00061b72) form_field_popup_wide_pane_vc_t

0xcec2,	// (0x0005efc6) aid_fshwr2_btn_pane_ParamLimits

0xced2,	// (0x0005efd6) aid_fshwr2_syb_pane_ParamLimits

0xcee6,	// (0x0005efea) aid_fshwr2_txt_pane_ParamLimits

0x1ff2,	// (0x000540f6) fshwr2_bg_pane_ParamLimits

0xcef6,	// (0x0005effa) fshwr2_func_candi_pane_ParamLimits

0xcf16,	// (0x0005f01a) fshwr2_hwr_syb_pane_ParamLimits

0xcf38,	// (0x0005f03c) fshwr2_icf_pane_ParamLimits

0x385b,	// (0x0005595f) list_double_graphic_pane_vc_g4_ParamLimits

0x385b,	// (0x0005595f) list_double_graphic_pane_vc_g4

0x2acf,	// (0x00054bd3) cell_ituss_key_pane_g3_ParamLimits

0x2acf,	// (0x00054bd3) cell_ituss_key_pane_g3

0x2c01,	// (0x00054d05) cell_ituss_key_t5_ParamLimits

0x2c01,	// (0x00054d05) cell_ituss_key_t5

0xf086,	// (0x0006118a) popup_fep_vkbss_window_ParamLimits

0x9aee,	// (0x0005bbf2) aid_cell_ai5_quarter

0xf1f3,	// (0x000612f7) icf_edit_indi_pane_t1_ParamLimits

0x3087,	// (0x0005518b) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x3087,	// (0x0005518b) aid_tch_indicator_popup_pane_cp2

0x309a,	// (0x0005519e) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x309a,	// (0x0005519e) aid_tch_query_popup_data_pane_cp2

0x52fe,	// (0x00057402) aid_tch_query_popup_pane_ParamLimits

0x52fe,	// (0x00057402) aid_tch_query_popup_pane

0x52fe,	// (0x00057402) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x52fe,	// (0x00057402) aid_tch_query_popup_data_pane_cp1

0x4964,	// (0x00056a68) cell_fshwr2_syb_bg_pane_ParamLimits

0xd044,	// (0x0005f148) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xd057,	// (0x0005f15b) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf077,	// (0x0006117b) popup_fep_vkb_icf_pane_ParamLimits

0xce4e,	// (0x0005ef52) bg_popup_fep_char_preview_window_g10

0x9c23,	// (0x0005bd27) cell_ai5_widget_pane_g11_ParamLimits

0x9c23,	// (0x0005bd27) cell_ai5_widget_pane_g11

0x9c2f,	// (0x0005bd33) cell_ai5_widget_pane_g12_ParamLimits

0x9c2f,	// (0x0005bd33) cell_ai5_widget_pane_g12

0x9c3b,	// (0x0005bd3f) cell_ai5_widget_pane_g13_ParamLimits

0x9c3b,	// (0x0005bd3f) cell_ai5_widget_pane_g13

0x9d6a,	// (0x0005be6e) cell_ai5_widget_pane_t11_ParamLimits

0x9d6a,	// (0x0005be6e) cell_ai5_widget_pane_t11

0x9d7c,	// (0x0005be80) cell_ai5_widget_pane_t12_ParamLimits

0x9d7c,	// (0x0005be80) cell_ai5_widget_pane_t12

0x2adb,	// (0x00054bdf) cell_ituss_key_pane_g4_ParamLimits

0x2adb,	// (0x00054bdf) cell_ituss_key_pane_g4

0x2af7,	// (0x00054bfb) cell_ituss_key_pane_g5_ParamLimits

0x2af7,	// (0x00054bfb) cell_ituss_key_pane_g5

0x2b13,	// (0x00054c17) cell_ituss_key_pane_g6_ParamLimits

0x2b13,	// (0x00054c17) cell_ituss_key_pane_g6

0x4e8e,	// (0x00056f92) bg_icf_pane_g1

0xf17c,	// (0x00061280) bg_icf_pane_g2

0xf186,	// (0x0006128a) bg_icf_pane_g3

0xf18e,	// (0x00061292) bg_icf_pane_g4

0xf198,	// (0x0006129c) bg_icf_pane_g5

0xf1a2,	// (0x000612a6) bg_icf_pane_g6

0xf1ac,	// (0x000612b0) bg_icf_pane_g7

0xf1b4,	// (0x000612b8) bg_icf_pane_g8

0xf1be,	// (0x000612c2) bg_icf_pane_g9

0x0008,

0xfeea,	// (0x00061fee) bg_icf_pane_g

0xa661,	// (0x0005c765) popup_hyb_candi_window_ParamLimits

0xa661,	// (0x0005c765) popup_hyb_candi_window

0x4f02,	// (0x00057006) bg_popup_sub_pane_cp01_ParamLimits

0x4f02,	// (0x00057006) bg_popup_sub_pane_cp01

0xa8f4,	// (0x0005c9f8) entry_hyb_candi_pane_ParamLimits

0xa8f4,	// (0x0005c9f8) entry_hyb_candi_pane

0xa903,	// (0x0005ca07) grid_hyb_candi_pane_ParamLimits

0xa903,	// (0x0005ca07) grid_hyb_candi_pane

0xa918,	// (0x0005ca1c) grid_hyb_phrase_pane_ParamLimits

0xa918,	// (0x0005ca1c) grid_hyb_phrase_pane

0xa927,	// (0x0005ca2b) cell_hyb_candi_pane_ParamLimits

0xa927,	// (0x0005ca2b) cell_hyb_candi_pane

0xa94a,	// (0x0005ca4e) cell_hyb_candi_scroll_pane

0x401b,	// (0x0005611f) cell_hyb_candi_pane_g1

0xa953,	// (0x0005ca57) cell_hyb_candi_pane_t1

0xa961,	// (0x0005ca65) cell_hyb_phrase_pane

0x401b,	// (0x0005611f) cell_hyb_phrase_pane_g1

0xa96a,	// (0x0005ca6e) cell_hyb_phrase_pane_t1

0xa978,	// (0x0005ca7c) entry_hyb_candi_pane_t1

0x4640,	// (0x00056744) input_focus_pane_cp06

0xa986,	// (0x0005ca8a) cell_hyb_candi_scroll_pane_g1

0xa98e,	// (0x0005ca92) cell_hyb_candi_scroll_pane_g1_aid

0xa996,	// (0x0005ca9a) cell_hyb_candi_scroll_pane_g2

0xa99e,	// (0x0005caa2) cell_hyb_candi_scroll_pane_g2_aid

0xa9a6,	// (0x0005caaa) cell_hyb_candi_scroll_pane_g3

0xa9ae,	// (0x0005cab2) cell_hyb_candi_scroll_pane_g4

0xef0c,	// (0x00061010) ai5_page_g1

0x2c13,	// (0x00054d17) cell_ituss_key_t6_ParamLimits

0x2c13,	// (0x00054d17) cell_ituss_key_t6

0xd06d,	// (0x0005f171) icf_edit_indi_pane_cp02_ParamLimits

0xd06d,	// (0x0005f171) icf_edit_indi_pane_cp02

0x2a1d,	// (0x00054b21) icf_edit_indi_pane_cp03_ParamLimits

0x2a1d,	// (0x00054b21) icf_edit_indi_pane_cp03
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large
