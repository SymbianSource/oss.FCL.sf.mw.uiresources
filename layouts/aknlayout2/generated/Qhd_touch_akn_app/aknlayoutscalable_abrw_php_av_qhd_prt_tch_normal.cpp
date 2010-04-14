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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000ae03 };

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
0x6e50,	// (0x00011c53) Screen

0x6e64,	// (0x00011c67) application_window_ParamLimits

0x6e64,	// (0x00011c67) application_window

0x6e7e,	// (0x00011c81) screen_g1

0x4928,	// (0x0000f72b) area_bottom_pane_ParamLimits

0x4928,	// (0x0000f72b) area_bottom_pane

0x49e8,	// (0x0000f7eb) area_top_pane_ParamLimits

0x49e8,	// (0x0000f7eb) area_top_pane

0x4a86,	// (0x0000f889) main_pane_ParamLimits

0x4a86,	// (0x0000f889) main_pane

0x6e88,	// (0x00011c8b) misc_graphics

0x8feb,	// (0x00013dee) battery_pane_ParamLimits

0x8feb,	// (0x00013dee) battery_pane

0x9dd7,	// (0x00014bda) bg_status_flat_pane_g8

0x9ddf,	// (0x00014be2) bg_status_flat_pane_g9

0x90ad,	// (0x00013eb0) context_pane_ParamLimits

0x90ad,	// (0x00013eb0) context_pane

0x91c3,	// (0x00013fc6) navi_pane_ParamLimits

0x91c3,	// (0x00013fc6) navi_pane

0x9247,	// (0x0001404a) signal_pane_ParamLimits

0x9247,	// (0x0001404a) signal_pane

0x0008,

0xf874,	// (0x0001a677) bg_status_flat_pane_g

0x92b4,	// (0x000140b7) status_pane_g1_ParamLimits

0x92b4,	// (0x000140b7) status_pane_g1

0x92c8,	// (0x000140cb) status_pane_g2_ParamLimits

0x92c8,	// (0x000140cb) status_pane_g2

0x92d4,	// (0x000140d7) status_pane_g3_ParamLimits

0x92d4,	// (0x000140d7) status_pane_g3

0x0004,

0xf79b,	// (0x0001a59e) status_pane_g_ParamLimits

0xf79b,	// (0x0001a59e) status_pane_g

0x9308,	// (0x0001410b) title_pane_ParamLimits

0x9308,	// (0x0001410b) title_pane

0x9345,	// (0x00014148) uni_indicator_pane_ParamLimits

0x9345,	// (0x00014148) uni_indicator_pane

0x8eff,	// (0x00013d02) bg_list_pane_ParamLimits

0x8eff,	// (0x00013d02) bg_list_pane

0x8f1f,	// (0x00013d22) find_pane

0x8f27,	// (0x00013d2a) listscroll_app_pane_ParamLimits

0x8f27,	// (0x00013d2a) listscroll_app_pane

0x8f33,	// (0x00013d36) listscroll_form_pane

0x5359,	// (0x0001015c) listscroll_gen_pane_ParamLimits

0x5359,	// (0x0001015c) listscroll_gen_pane

0x536d,	// (0x00010170) listscroll_set_pane

0x80ca,	// (0x00012ecd) main_idle_act_pane

0x8c07,	// (0x00013a0a) main_idle_trad_pane

0x8c07,	// (0x00013a0a) main_list_empty_pane

0x8f4d,	// (0x00013d50) main_midp_pane

0x8f59,	// (0x00013d5c) main_pane_g1_ParamLimits

0x8f59,	// (0x00013d5c) main_pane_g1

0x5383,	// (0x00010186) popup_ai_message_window_ParamLimits

0x5383,	// (0x00010186) popup_ai_message_window

0x5429,	// (0x0001022c) popup_fep_china_uni_window_ParamLimits

0x5429,	// (0x0001022c) popup_fep_china_uni_window

0x5485,	// (0x00010288) popup_fep_japan_candidate_window_ParamLimits

0x5485,	// (0x00010288) popup_fep_japan_candidate_window

0x54a5,	// (0x000102a8) popup_fep_japan_predictive_window_ParamLimits

0x54a5,	// (0x000102a8) popup_fep_japan_predictive_window

0x54d5,	// (0x000102d8) popup_find_window

0x54e2,	// (0x000102e5) popup_grid_graphic_window_ParamLimits

0x54e2,	// (0x000102e5) popup_grid_graphic_window

0x550c,	// (0x0001030f) popup_large_graphic_colour_window

0x5532,	// (0x00010335) popup_menu_window_ParamLimits

0x5532,	// (0x00010335) popup_menu_window

0x56ea,	// (0x000104ed) popup_note_image_window

0x56d6,	// (0x000104d9) popup_note_wait_window_ParamLimits

0x56d6,	// (0x000104d9) popup_note_wait_window

0x56d6,	// (0x000104d9) popup_note_window_ParamLimits

0x56d6,	// (0x000104d9) popup_note_window

0x5740,	// (0x00010543) popup_query_code_window_ParamLimits

0x5740,	// (0x00010543) popup_query_code_window

0x5754,	// (0x00010557) popup_query_data_code_window_ParamLimits

0x5754,	// (0x00010557) popup_query_data_code_window

0x5771,	// (0x00010574) popup_query_data_window_ParamLimits

0x5771,	// (0x00010574) popup_query_data_window

0x578d,	// (0x00010590) popup_query_sat_info_window_ParamLimits

0x578d,	// (0x00010590) popup_query_sat_info_window

0x57c6,	// (0x000105c9) popup_snote_single_graphic_window_ParamLimits

0x57c6,	// (0x000105c9) popup_snote_single_graphic_window

0x57c6,	// (0x000105c9) popup_snote_single_text_window_ParamLimits

0x57c6,	// (0x000105c9) popup_snote_single_text_window

0x57db,	// (0x000105de) popup_sub_window_general

0x590b,	// (0x0001070e) popup_window_general_ParamLimits

0x590b,	// (0x0001070e) popup_window_general

0x8f6f,	// (0x00013d72) power_save_pane

0x51ed,	// (0x0000fff0) control_pane_g1_ParamLimits

0x51ed,	// (0x0000fff0) control_pane_g1

0x5214,	// (0x00010017) control_pane_g2_ParamLimits

0x5214,	// (0x00010017) control_pane_g2

0x8ec2,	// (0x00013cc5) control_pane_g3_ParamLimits

0x8ec2,	// (0x00013cc5) control_pane_g3

0x0007,

0xf783,	// (0x0001a586) control_pane_g_ParamLimits

0xf783,	// (0x0001a586) control_pane_g

0x525e,	// (0x00010061) control_pane_t1_ParamLimits

0x525e,	// (0x00010061) control_pane_t1

0x52aa,	// (0x000100ad) control_pane_t2_ParamLimits

0x52aa,	// (0x000100ad) control_pane_t2

0x0002,

0xf794,	// (0x0001a597) control_pane_t_ParamLimits

0xf794,	// (0x0001a597) control_pane_t

0x8de7,	// (0x00013bea) navi_navi_volume_pane_cp1

0x8def,	// (0x00013bf2) status_small_icon_pane

0x8df7,	// (0x00013bfa) status_small_pane_g1_ParamLimits

0x8df7,	// (0x00013bfa) status_small_pane_g1

0x8e2b,	// (0x00013c2e) status_small_pane_g2_ParamLimits

0x8e2b,	// (0x00013c2e) status_small_pane_g2

0x8e37,	// (0x00013c3a) status_small_pane_g3_ParamLimits

0x8e37,	// (0x00013c3a) status_small_pane_g3

0x8e43,	// (0x00013c46) status_small_pane_g4_ParamLimits

0x8e43,	// (0x00013c46) status_small_pane_g4

0x8e4f,	// (0x00013c52) status_small_pane_g5_ParamLimits

0x8e4f,	// (0x00013c52) status_small_pane_g5

0x8e5d,	// (0x00013c60) status_small_pane_g6_ParamLimits

0x8e5d,	// (0x00013c60) status_small_pane_g6

0x0007,

0xf772,	// (0x0001a575) status_small_pane_g_ParamLimits

0xf772,	// (0x0001a575) status_small_pane_g

0x8e8c,	// (0x00013c8f) status_small_pane_t1

0x8eae,	// (0x00013cb1) status_small_wait_pane_ParamLimits

0x8eae,	// (0x00013cb1) status_small_wait_pane

0x85ea,	// (0x000133ed) aid_levels_signal_ParamLimits

0x85ea,	// (0x000133ed) aid_levels_signal

0x85fc,	// (0x000133ff) signal_pane_g1_ParamLimits

0x85fc,	// (0x000133ff) signal_pane_g1

0x8611,	// (0x00013414) signal_pane_g2_ParamLimits

0x8611,	// (0x00013414) signal_pane_g2

0x0003,

0xf703,	// (0x0001a506) signal_pane_g_ParamLimits

0xf703,	// (0x0001a506) signal_pane_g

0x864c,	// (0x0001344f) context_pane_g1

0x6e92,	// (0x00011c95) title_pane_g1

0x6ec8,	// (0x00011ccb) title_pane_t1

0x6f30,	// (0x00011d33) title_pane_t2

0x6f56,	// (0x00011d59) title_pane_t3

0x0002,

0xf557,	// (0x0001a35a) title_pane_t

0x935d,	// (0x00014160) aid_levels_battery_ParamLimits

0x935d,	// (0x00014160) aid_levels_battery

0x9371,	// (0x00014174) battery_pane_g1_ParamLimits

0x9371,	// (0x00014174) battery_pane_g1

0x9387,	// (0x0001418a) battery_pane_g2_ParamLimits

0x9387,	// (0x0001418a) battery_pane_g2

0x0001,

0xf7a6,	// (0x0001a5a9) battery_pane_g_ParamLimits

0xf7a6,	// (0x0001a5a9) battery_pane_g

0xa719,	// (0x0001551c) uni_indicator_pane_g1

0xa72f,	// (0x00015532) uni_indicator_pane_g2

0xa745,	// (0x00015548) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0001a71f) uni_indicator_pane_g

0x8a79,	// (0x0001387c) navi_icon_pane_ParamLimits

0x8a79,	// (0x0001387c) navi_icon_pane

0x89b7,	// (0x000137ba) navi_midp_pane

0x8a95,	// (0x00013898) navi_navi_pane

0x8a9f,	// (0x000138a2) navi_text_pane_ParamLimits

0x8a9f,	// (0x000138a2) navi_text_pane

0x6e7e,	// (0x00011c81) status_small_wait_pane_g1

0x739f,	// (0x000121a2) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0001a71a) status_small_wait_pane_g

0xa43e,	// (0x00015241) navi_navi_icon_text_pane

0xa446,	// (0x00015249) navi_navi_pane_g1_ParamLimits

0xa446,	// (0x00015249) navi_navi_pane_g1

0xa458,	// (0x0001525b) navi_navi_pane_g2_ParamLimits

0xa458,	// (0x0001525b) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0001a6e8) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0001a6e8) navi_navi_pane_g

0xa46a,	// (0x0001526d) navi_navi_tabs_pane

0xa473,	// (0x00015276) navi_navi_text_pane

0xa43e,	// (0x00015241) navi_navi_volume_pane

0xa41a,	// (0x0001521d) navi_text_pane_t1

0xa40e,	// (0x00015211) navi_icon_pane_g1

0xa361,	// (0x00015164) navi_navi_text_pane_t1

0x5c23,	// (0x00010a26) navi_navi_volume_pane_g1

0x5c2b,	// (0x00010a2e) volume_small_pane

0xa2c7,	// (0x000150ca) navi_navi_icon_text_pane_g1

0xa2cf,	// (0x000150d2) navi_navi_icon_text_pane_t1

0x8a95,	// (0x00013898) navi_tabs_2_long_pane

0x8a95,	// (0x00013898) navi_tabs_2_pane

0x8a95,	// (0x00013898) navi_tabs_3_long_pane

0x8a95,	// (0x00013898) navi_tabs_3_pane

0x8a95,	// (0x00013898) navi_tabs_4_pane

0x5c03,	// (0x00010a06) tabs_2_active_pane_ParamLimits

0x5c03,	// (0x00010a06) tabs_2_active_pane

0x5c13,	// (0x00010a16) tabs_2_passive_pane_ParamLimits

0x5c13,	// (0x00010a16) tabs_2_passive_pane

0x5bd1,	// (0x000109d4) tabs_3_active_pane_ParamLimits

0x5bd1,	// (0x000109d4) tabs_3_active_pane

0x5be1,	// (0x000109e4) tabs_3_passive_pane_ParamLimits

0x5be1,	// (0x000109e4) tabs_3_passive_pane

0x5bf2,	// (0x000109f5) tabs_3_passive_pane_cp_ParamLimits

0x5bf2,	// (0x000109f5) tabs_3_passive_pane_cp

0x5b8d,	// (0x00010990) tabs_4_active_pane_ParamLimits

0x5b8d,	// (0x00010990) tabs_4_active_pane

0x5b9e,	// (0x000109a1) tabs_4_passive_pane_ParamLimits

0x5b9e,	// (0x000109a1) tabs_4_passive_pane

0x5baf,	// (0x000109b2) tabs_4_passive_pane_cp_ParamLimits

0x5baf,	// (0x000109b2) tabs_4_passive_pane_cp

0x5bc0,	// (0x000109c3) tabs_4_passive_pane_cp2_ParamLimits

0x5bc0,	// (0x000109c3) tabs_4_passive_pane_cp2

0x5b69,	// (0x0001096c) tabs_2_long_active_pane_ParamLimits

0x5b69,	// (0x0001096c) tabs_2_long_active_pane

0x5b7b,	// (0x0001097e) tabs_2_long_passive_pane_ParamLimits

0x5b7b,	// (0x0001097e) tabs_2_long_passive_pane

0x5b2a,	// (0x0001092d) tabs_3_long_active_pane_ParamLimits

0x5b2a,	// (0x0001092d) tabs_3_long_active_pane

0x5b3d,	// (0x00010940) tabs_3_long_passive_pane_ParamLimits

0x5b3d,	// (0x00010940) tabs_3_long_passive_pane

0x5b56,	// (0x00010959) tabs_3_long_passive_pane_cp_ParamLimits

0x5b56,	// (0x00010959) tabs_3_long_passive_pane_cp

0x5ad0,	// (0x000108d3) volume_small_pane_g1

0x5ad9,	// (0x000108dc) volume_small_pane_g2

0x5ae2,	// (0x000108e5) volume_small_pane_g3

0x5aeb,	// (0x000108ee) volume_small_pane_g4

0x5af4,	// (0x000108f7) volume_small_pane_g5

0x5afd,	// (0x00010900) volume_small_pane_g6

0x5b06,	// (0x00010909) volume_small_pane_g7

0x5b0f,	// (0x00010912) volume_small_pane_g8

0x5b18,	// (0x0001091b) volume_small_pane_g9

0x5b21,	// (0x00010924) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0001a6b4) volume_small_pane_g

0x6f68,	// (0x00011d6b) bg_active_tab_pane_cp2_ParamLimits

0x6f68,	// (0x00011d6b) bg_active_tab_pane_cp2

0x6f76,	// (0x00011d79) tabs_3_active_pane_g1

0x6f7e,	// (0x00011d81) tabs_3_active_pane_t1

0x6f68,	// (0x00011d6b) bg_passive_tab_pane_cp2_ParamLimits

0x6f68,	// (0x00011d6b) bg_passive_tab_pane_cp2

0x6f76,	// (0x00011d79) tabs_3_passive_pane_g1

0x6f7e,	// (0x00011d81) tabs_3_passive_pane_t1

0x6f68,	// (0x00011d6b) bg_active_tab_pane_cp3_ParamLimits

0x6f68,	// (0x00011d6b) bg_active_tab_pane_cp3

0x6f90,	// (0x00011d93) tabs_4_active_pane_g1

0x6f98,	// (0x00011d9b) tabs_4_active_pane_t1

0x6f68,	// (0x00011d6b) bg_passive_tab_pane_cp3_ParamLimits

0x6f68,	// (0x00011d6b) bg_passive_tab_pane_cp3

0x6f90,	// (0x00011d93) tabs_4_1_passive_pane_g1

0x6f98,	// (0x00011d9b) tabs_4_1_passive_pane_t1

0x8f4d,	// (0x00013d50) list_highlight_pane_cp2

0xa9b5,	// (0x000157b8) list_set_pane_ParamLimits

0xa9b5,	// (0x000157b8) list_set_pane

0xaa5b,	// (0x0001585e) main_pane_set_t1_ParamLimits

0xaa5b,	// (0x0001585e) main_pane_set_t1

0xaa7b,	// (0x0001587e) main_pane_set_t2_ParamLimits

0xaa7b,	// (0x0001587e) main_pane_set_t2

0xaa8f,	// (0x00015892) main_pane_set_t3_ParamLimits

0xaa8f,	// (0x00015892) main_pane_set_t3

0xaaa1,	// (0x000158a4) main_pane_set_t4_ParamLimits

0xaaa1,	// (0x000158a4) main_pane_set_t4

0x0003,

0xf981,	// (0x0001a784) main_pane_set_t_ParamLimits

0xf981,	// (0x0001a784) main_pane_set_t

0xaab3,	// (0x000158b6) setting_code_pane

0xaabf,	// (0x000158c2) setting_slider_graphic_pane

0xaabf,	// (0x000158c2) setting_slider_pane

0xaabf,	// (0x000158c2) setting_text_pane

0xaabf,	// (0x000158c2) setting_volume_pane

0x4cd5,	// (0x0000fad8) volume_set_pane

0x6f68,	// (0x00011d6b) bg_set_opt_pane_cp

0x4cdd,	// (0x0000fae0) setting_slider_pane_t1

0x4cf6,	// (0x0000faf9) setting_slider_pane_t2

0x4d10,	// (0x0000fb13) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001a361) setting_slider_pane_t

0x4d28,	// (0x0000fb2b) slider_set_pane

0x6e88,	// (0x00011c8b) bg_set_opt_pane_cp2

0x6faa,	// (0x00011dad) setting_slider_graphic_pane_g1

0x4d3e,	// (0x0000fb41) setting_slider_graphic_pane_t1

0x4d4e,	// (0x0000fb51) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001a368) setting_slider_graphic_pane_t

0x4d5e,	// (0x0000fb61) slider_set_pane_cp

0x6e88,	// (0x00011c8b) input_focus_pane_cp1

0xa974,	// (0x00015777) list_set_text_pane

0x6e7e,	// (0x00011c81) setting_text_pane_g1

0x6e88,	// (0x00011c8b) input_focus_pane_cp2

0x6e7e,	// (0x00011c81) setting_code_pane_g1

0x6fb3,	// (0x00011db6) setting_code_pane_t1

0x6fc1,	// (0x00011dc4) set_text_pane_t1_ParamLimits

0x6fc1,	// (0x00011dc4) set_text_pane_t1

0x7e95,	// (0x00012c98) set_opt_bg_pane_g1

0x7e9d,	// (0x00012ca0) set_opt_bg_pane_g2

0xa94e,	// (0x00015751) set_opt_bg_pane_g3

0x7ead,	// (0x00012cb0) set_opt_bg_pane_g4

0x7eb5,	// (0x00012cb8) set_opt_bg_pane_g5

0x7ebd,	// (0x00012cc0) set_opt_bg_pane_g6

0xa958,	// (0x0001575b) set_opt_bg_pane_g7

0xa960,	// (0x00015763) set_opt_bg_pane_g8

0xa96a,	// (0x0001576d) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0001a771) set_opt_bg_pane_g

0xa941,	// (0x00015744) slider_set_pane_g1

0x5c98,	// (0x00010a9b) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0001a762) slider_set_pane_g

0x5c34,	// (0x00010a37) volume_set_pane_g1

0x5c3c,	// (0x00010a3f) volume_set_pane_g2

0x5c44,	// (0x00010a47) volume_set_pane_g3

0x5c4c,	// (0x00010a4f) volume_set_pane_g4

0x5c54,	// (0x00010a57) volume_set_pane_g5

0x5c5c,	// (0x00010a5f) volume_set_pane_g6

0x5c64,	// (0x00010a67) volume_set_pane_g7

0x5c6c,	// (0x00010a6f) volume_set_pane_g8

0x5c74,	// (0x00010a77) volume_set_pane_g9

0x5c7c,	// (0x00010a7f) volume_set_pane_g10

0x0009,

0xf937,	// (0x0001a73a) volume_set_pane_g

0x6fdb,	// (0x00011dde) indicator_pane_ParamLimits

0x6fdb,	// (0x00011dde) indicator_pane

0x6fe7,	// (0x00011dea) main_idle_pane_g2_ParamLimits

0x6fe7,	// (0x00011dea) main_idle_pane_g2

0x700f,	// (0x00011e12) main_pane_idle_g1_ParamLimits

0x700f,	// (0x00011e12) main_pane_idle_g1

0x701c,	// (0x00011e1f) popup_clock_digital_analogue_window_ParamLimits

0x701c,	// (0x00011e1f) popup_clock_digital_analogue_window

0x7033,	// (0x00011e36) soft_indicator_pane_ParamLimits

0x7033,	// (0x00011e36) soft_indicator_pane

0x703f,	// (0x00011e42) wallpaper_pane_ParamLimits

0x703f,	// (0x00011e42) wallpaper_pane

0x6e7e,	// (0x00011c81) wallpaper_pane_g1

0x7053,	// (0x00011e56) indicator_pane_g1_ParamLimits

0x7053,	// (0x00011e56) indicator_pane_g1

0xae42,	// (0x00015c45) navi_navi_icon_text_pane_srt_g1

0x706e,	// (0x00011e71) soft_indicator_pane_t1

0x7088,	// (0x00011e8b) aid_ps_area_pane

0x7099,	// (0x00011e9c) aid_ps_clock_pane

0x70a7,	// (0x00011eaa) aid_ps_indicator_pane

0x70b3,	// (0x00011eb6) indicator_ps_pane_ParamLimits

0x70b3,	// (0x00011eb6) indicator_ps_pane

0x70c2,	// (0x00011ec5) power_save_pane_g1_ParamLimits

0x70c2,	// (0x00011ec5) power_save_pane_g1

0x70ce,	// (0x00011ed1) power_save_pane_g2_ParamLimits

0x70ce,	// (0x00011ed1) power_save_pane_g2

0x48dc,	// (0x0000f6df) aid_navinavi_width_pane

0x7088,	// (0x00011e8b) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001a36d) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001a36d) power_save_pane_g

0x70dc,	// (0x00011edf) power_save_pane_t1_ParamLimits

0x70dc,	// (0x00011edf) power_save_pane_t1

0x7099,	// (0x00011e9c) aid_ps_clock_pane_ParamLimits

0x70a7,	// (0x00011eaa) aid_ps_indicator_pane_ParamLimits

0x70ee,	// (0x00011ef1) power_save_pane_t4_ParamLimits

0x70ee,	// (0x00011ef1) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001a372) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001a372) power_save_pane_t

0x7118,	// (0x00011f1b) power_save_t3_ParamLimits

0x7118,	// (0x00011f1b) power_save_t3

0x7103,	// (0x00011f06) power_save_t2_ParamLimits

0x7103,	// (0x00011f06) power_save_t2

0x712d,	// (0x00011f30) indicator_ps_pane_g1

0x7136,	// (0x00011f39) ai_gene_pane_ParamLimits

0x7136,	// (0x00011f39) ai_gene_pane

0x7142,	// (0x00011f45) ai_links_pane_ParamLimits

0x7142,	// (0x00011f45) ai_links_pane

0x714e,	// (0x00011f51) indicator_pane_cp1_ParamLimits

0x714e,	// (0x00011f51) indicator_pane_cp1

0x715a,	// (0x00011f5d) main_pane_idle_g1_cp_ParamLimits

0x715a,	// (0x00011f5d) main_pane_idle_g1_cp

0x7166,	// (0x00011f69) popup_ai_links_title_window

0x716f,	// (0x00011f72) soft_indicator_pane_cp1_ParamLimits

0x716f,	// (0x00011f72) soft_indicator_pane_cp1

0xa707,	// (0x0001550a) ai_links_pane_g1

0xa710,	// (0x00015513) grid_ai_links_pane

0xa6ea,	// (0x000154ed) ai_gene_pane_1

0xa6f5,	// (0x000154f8) ai_gene_pane_2

0xa6fe,	// (0x00015501) list_highlight_pane_cp4

0xa6ce,	// (0x000154d1) cell_ai_link_pane_ParamLimits

0xa6ce,	// (0x000154d1) cell_ai_link_pane

0xa6c6,	// (0x000154c9) cell_ai_link_pane_g1

0x739f,	// (0x000121a2) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0001a715) cell_ai_link_pane_g

0x6e88,	// (0x00011c8b) grid_highlight_cp2

0x6e88,	// (0x00011c8b) bg_popup_sub_pane_cp1

0x7189,	// (0x00011f8c) popup_ai_links_title_window_t1

0xa614,	// (0x00015417) ai_gene_pane_1_g1_ParamLimits

0xa614,	// (0x00015417) ai_gene_pane_1_g1

0xa620,	// (0x00015423) ai_gene_pane_1_g2_ParamLimits

0xa620,	// (0x00015423) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0001a70b) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0001a70b) ai_gene_pane_1_g

0xa62d,	// (0x00015430) ai_gene_pane_1_t1_ParamLimits

0xa62d,	// (0x00015430) ai_gene_pane_1_t1

0xa661,	// (0x00015464) grid_ai_soft_ind_pane

0xa5ff,	// (0x00015402) ai_gene_pane_2_t1_ParamLimits

0xa5ff,	// (0x00015402) ai_gene_pane_2_t1

0x7198,	// (0x00011f9b) main_pane_empty_t1_ParamLimits

0x7198,	// (0x00011f9b) main_pane_empty_t1

0x71b0,	// (0x00011fb3) main_pane_empty_t2_ParamLimits

0x71b0,	// (0x00011fb3) main_pane_empty_t2

0x71c5,	// (0x00011fc8) main_pane_empty_t3_ParamLimits

0x71c5,	// (0x00011fc8) main_pane_empty_t3

0x71d7,	// (0x00011fda) main_pane_empty_t4_ParamLimits

0x71d7,	// (0x00011fda) main_pane_empty_t4

0x71e9,	// (0x00011fec) main_pane_empty_t5_ParamLimits

0x71e9,	// (0x00011fec) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001a377) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001a377) main_pane_empty_t

0x7f92,	// (0x00012d95) bg_popup_window_pane_ParamLimits

0x7f92,	// (0x00012d95) bg_popup_window_pane

0xa36f,	// (0x00015172) find_popup_pane_cp2_ParamLimits

0xa36f,	// (0x00015172) find_popup_pane_cp2

0xa37b,	// (0x0001517e) heading_pane_ParamLimits

0xa37b,	// (0x0001517e) heading_pane

0x6e88,	// (0x00011c8b) bg_popup_sub_pane

0xa2e9,	// (0x000150ec) bg_popup_window_pane_g1_ParamLimits

0xa2e9,	// (0x000150ec) bg_popup_window_pane_g1

0xa2f5,	// (0x000150f8) bg_popup_window_pane_g2_ParamLimits

0xa2f5,	// (0x000150f8) bg_popup_window_pane_g2

0xa301,	// (0x00015104) bg_popup_window_pane_g3_ParamLimits

0xa301,	// (0x00015104) bg_popup_window_pane_g3

0xa30d,	// (0x00015110) bg_popup_window_pane_g4_ParamLimits

0xa30d,	// (0x00015110) bg_popup_window_pane_g4

0xa319,	// (0x0001511c) bg_popup_window_pane_g5_ParamLimits

0xa319,	// (0x0001511c) bg_popup_window_pane_g5

0xa325,	// (0x00015128) bg_popup_window_pane_g6_ParamLimits

0xa325,	// (0x00015128) bg_popup_window_pane_g6

0xa331,	// (0x00015134) bg_popup_window_pane_g7_ParamLimits

0xa331,	// (0x00015134) bg_popup_window_pane_g7

0xa33d,	// (0x00015140) bg_popup_window_pane_g8_ParamLimits

0xa33d,	// (0x00015140) bg_popup_window_pane_g8

0xa349,	// (0x0001514c) bg_popup_window_pane_g9_ParamLimits

0xa349,	// (0x0001514c) bg_popup_window_pane_g9

0xa355,	// (0x00015158) bg_popup_window_pane_g10_ParamLimits

0xa355,	// (0x00015158) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0001a6d3) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0001a6d3) bg_popup_window_pane_g

0xa27e,	// (0x00015081) bg_popup_heading_pane_ParamLimits

0xa27e,	// (0x00015081) bg_popup_heading_pane

0x5d20,	// (0x00010b23) tabs_4_passive_pane_cp_srt_ParamLimits

0x5d20,	// (0x00010b23) tabs_4_passive_pane_cp_srt

0x5d32,	// (0x00010b35) tabs_4_passive_pane_srt_ParamLimits

0xa292,	// (0x00015095) heading_pane_g2

0x5d32,	// (0x00010b35) tabs_4_passive_pane_srt

0x8f4d,	// (0x00013d50) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8f4d,	// (0x00013d50) bg_passive_tab_pane_cp3_srt

0xa29a,	// (0x0001509d) heading_pane_t1_ParamLimits

0xa29a,	// (0x0001509d) heading_pane_t1

0xa2b1,	// (0x000150b4) heading_pane_t2_ParamLimits

0xa2b1,	// (0x000150b4) heading_pane_t2

0x0001,

0xf8cb,	// (0x0001a6ce) heading_pane_t_ParamLimits

0xf8cb,	// (0x0001a6ce) heading_pane_t

0x9d9f,	// (0x00014ba2) bg_popup_heading_pane_g1

0x9e4e,	// (0x00014c51) bg_popup_heading_pane_g2

0x9e58,	// (0x00014c5b) bg_popup_heading_pane_g3

0x9e62,	// (0x00014c65) bg_popup_heading_pane_g4

0x9e6c,	// (0x00014c6f) bg_popup_heading_pane_g5

0x9e76,	// (0x00014c79) bg_popup_heading_pane_g6

0x9e7e,	// (0x00014c81) bg_popup_heading_pane_g7

0x9e86,	// (0x00014c89) bg_popup_heading_pane_g8

0x9e90,	// (0x00014c93) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0001a68a) bg_popup_heading_pane_g

0x948d,	// (0x00014290) bg_popup_sub_pane_g1

0x949d,	// (0x000142a0) bg_popup_sub_pane_g2

0x9495,	// (0x00014298) bg_popup_sub_pane_g3

0x94ad,	// (0x000142b0) bg_popup_sub_pane_g4

0x94a5,	// (0x000142a8) bg_popup_sub_pane_g5

0x94b5,	// (0x000142b8) bg_popup_sub_pane_g6

0x94bd,	// (0x000142c0) bg_popup_sub_pane_g7

0x94cd,	// (0x000142d0) bg_popup_sub_pane_g8

0x94c5,	// (0x000142c8) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0001a664) bg_popup_sub_pane_g

0x71fd,	// (0x00012000) bg_popup_window_pane_cp5_ParamLimits

0x71fd,	// (0x00012000) bg_popup_window_pane_cp5

0x7219,	// (0x0001201c) popup_note_window_g1_ParamLimits

0x7219,	// (0x0001201c) popup_note_window_g1

0x7225,	// (0x00012028) popup_note_window_t1_ParamLimits

0x7225,	// (0x00012028) popup_note_window_t1

0x723b,	// (0x0001203e) popup_note_window_t2_ParamLimits

0x723b,	// (0x0001203e) popup_note_window_t2

0x7251,	// (0x00012054) popup_note_window_t3_ParamLimits

0x7251,	// (0x00012054) popup_note_window_t3

0x7267,	// (0x0001206a) popup_note_window_t4_ParamLimits

0x7267,	// (0x0001206a) popup_note_window_t4

0x728f,	// (0x00012092) popup_note_window_t5_ParamLimits

0x728f,	// (0x00012092) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001a382) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001a382) popup_note_window_t

0x72b3,	// (0x000120b6) bg_popup_window_pane_cp6_ParamLimits

0x72b3,	// (0x000120b6) bg_popup_window_pane_cp6

0x9d1b,	// (0x00014b1e) popup_note_image_window_g1_ParamLimits

0x9d1b,	// (0x00014b1e) popup_note_image_window_g1

0x9d27,	// (0x00014b2a) popup_note_image_window_g2_ParamLimits

0x9d27,	// (0x00014b2a) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0001a658) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0001a658) popup_note_image_window_g

0x9d40,	// (0x00014b43) popup_note_image_window_t1_ParamLimits

0x9d40,	// (0x00014b43) popup_note_image_window_t1

0x9d59,	// (0x00014b5c) popup_note_image_window_t2_ParamLimits

0x9d59,	// (0x00014b5c) popup_note_image_window_t2

0x9d72,	// (0x00014b75) popup_note_image_window_t3_ParamLimits

0x9d72,	// (0x00014b75) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0001a65d) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0001a65d) popup_note_image_window_t

0x9bdc,	// (0x000149df) bg_popup_window_pane_cp7_ParamLimits

0x9bdc,	// (0x000149df) bg_popup_window_pane_cp7

0x9c0c,	// (0x00014a0f) popup_note_wait_window_g1_ParamLimits

0x9c0c,	// (0x00014a0f) popup_note_wait_window_g1

0x9c18,	// (0x00014a1b) popup_note_wait_window_g2_ParamLimits

0x9c18,	// (0x00014a1b) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0001a646) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0001a646) popup_note_wait_window_g

0x9c30,	// (0x00014a33) popup_note_wait_window_t1_ParamLimits

0x9c30,	// (0x00014a33) popup_note_wait_window_t1

0x9c57,	// (0x00014a5a) popup_note_wait_window_t2_ParamLimits

0x9c57,	// (0x00014a5a) popup_note_wait_window_t2

0x9c74,	// (0x00014a77) popup_note_wait_window_t3_ParamLimits

0x9c74,	// (0x00014a77) popup_note_wait_window_t3

0x9c87,	// (0x00014a8a) popup_note_wait_window_t4_ParamLimits

0x9c87,	// (0x00014a8a) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0001a64d) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0001a64d) popup_note_wait_window_t

0x9cac,	// (0x00014aaf) wait_bar_pane_ParamLimits

0x9cac,	// (0x00014aaf) wait_bar_pane

0x6e88,	// (0x00011c8b) wait_anim_pane

0x6e88,	// (0x00011c8b) wait_border_pane

0x6e7e,	// (0x00011c81) wait_anim_pane_g1

0x6e7e,	// (0x00011c81) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0001a501) wait_anim_pane_g

0x9b80,	// (0x00014983) wait_border_pane_g1

0x9b8b,	// (0x0001498e) wait_border_pane_g2

0x9b94,	// (0x00014997) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0001a63f) wait_border_pane_g

0x99eb,	// (0x000147ee) bg_popup_window_pane_cp16_ParamLimits

0x99eb,	// (0x000147ee) bg_popup_window_pane_cp16

0x9aeb,	// (0x000148ee) indicator_popup_pane_cp4_ParamLimits

0x9aeb,	// (0x000148ee) indicator_popup_pane_cp4

0x9aff,	// (0x00014902) popup_query_data_window_t1_ParamLimits

0x9aff,	// (0x00014902) popup_query_data_window_t1

0x9b11,	// (0x00014914) popup_query_data_window_t2_ParamLimits

0x9b11,	// (0x00014914) popup_query_data_window_t2

0x9b2a,	// (0x0001492d) popup_query_data_window_t3_ParamLimits

0x9b2a,	// (0x0001492d) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0001a638) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0001a638) popup_query_data_window_t

0x9b44,	// (0x00014947) query_popup_data_pane_ParamLimits

0x9b44,	// (0x00014947) query_popup_data_pane

0x9b58,	// (0x0001495b) query_popup_data_pane_cp1_ParamLimits

0x9b58,	// (0x0001495b) query_popup_data_pane_cp1

0x99eb,	// (0x000147ee) bg_popup_window_pane_cp10_ParamLimits

0x99eb,	// (0x000147ee) bg_popup_window_pane_cp10

0x9a1d,	// (0x00014820) indicator_popup_pane_ParamLimits

0x9a1d,	// (0x00014820) indicator_popup_pane

0x9a3f,	// (0x00014842) popup_query_code_window_t1_ParamLimits

0x9a3f,	// (0x00014842) popup_query_code_window_t1

0x9a59,	// (0x0001485c) popup_query_code_window_t2_ParamLimits

0x9a59,	// (0x0001485c) popup_query_code_window_t2

0x9aa2,	// (0x000148a5) popup_query_code_window_t3_ParamLimits

0x9aa2,	// (0x000148a5) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0001a631) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0001a631) popup_query_code_window_t

0x9ad1,	// (0x000148d4) query_popup_pane_ParamLimits

0x9ad1,	// (0x000148d4) query_popup_pane

0x72b3,	// (0x000120b6) bg_popup_window_pane_cp15_ParamLimits

0x72b3,	// (0x000120b6) bg_popup_window_pane_cp15

0x72d1,	// (0x000120d4) indicator_popup_pane_cp1_ParamLimits

0x72d1,	// (0x000120d4) indicator_popup_pane_cp1

0x72e4,	// (0x000120e7) indicator_popup_pane_cp2_ParamLimits

0x72e4,	// (0x000120e7) indicator_popup_pane_cp2

0x72f7,	// (0x000120fa) popup_query_data_code_window_g1_ParamLimits

0x72f7,	// (0x000120fa) popup_query_data_code_window_g1

0x730a,	// (0x0001210d) popup_query_data_code_window_t1_ParamLimits

0x730a,	// (0x0001210d) popup_query_data_code_window_t1

0x731c,	// (0x0001211f) popup_query_data_code_window_t2_ParamLimits

0x731c,	// (0x0001211f) popup_query_data_code_window_t2

0x732e,	// (0x00012131) popup_query_data_code_window_t3_ParamLimits

0x732e,	// (0x00012131) popup_query_data_code_window_t3

0x7344,	// (0x00012147) popup_query_data_code_window_t4_ParamLimits

0x7344,	// (0x00012147) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001a38d) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001a38d) popup_query_data_code_window_t

0x59e1,	// (0x000107e4) list_single_midp_graphic_pane_g3

0x735c,	// (0x0001215f) query_popup_data_pane_cp2_ParamLimits

0x736f,	// (0x00012172) query_popup_pane_cp2_ParamLimits

0x736f,	// (0x00012172) query_popup_pane_cp2

0x6e88,	// (0x00011c8b) bg_popup_window_pane_cp11

0x99e3,	// (0x000147e6) heading_pane_cp5

0x745a,	// (0x0001225d) listscroll_popup_info_pane

0x6e88,	// (0x00011c8b) input_focus_pane_cp3

0x7382,	// (0x00012185) query_popup_pane_t1

0x7390,	// (0x00012193) list_popup_info_pane_ParamLimits

0x7390,	// (0x00012193) list_popup_info_pane

0x739f,	// (0x000121a2) listscroll_popup_info_pane_g1

0x73a7,	// (0x000121aa) scroll_pane_cp7

0x73b1,	// (0x000121b4) popup_info_list_pane_t1_ParamLimits

0x73b1,	// (0x000121b4) popup_info_list_pane_t1

0x73cb,	// (0x000121ce) popup_info_list_pane_t2_ParamLimits

0x73cb,	// (0x000121ce) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001a396) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001a396) popup_info_list_pane_t

0x6e88,	// (0x00011c8b) bg_popup_window_pane_cp12

0xae5c,	// (0x00015c5f) find_popup_pane

0x6f68,	// (0x00011d6b) bg_popup_window_pane_cp3

0x73e5,	// (0x000121e8) heading_pane_cp3

0x73f1,	// (0x000121f4) listscroll_popup_graphic_pane

0x6e88,	// (0x00011c8b) bg_popup_window_pane_cp4

0x7450,	// (0x00012253) heading_pane_cp4

0x745a,	// (0x0001225d) listscroll_popup_colour_pane

0x7462,	// (0x00012265) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7462,	// (0x00012265) cell_large_graphic_colour_none_popup_pane

0x7476,	// (0x00012279) grid_large_graphic_colour_popup_pane_ParamLimits

0x7476,	// (0x00012279) grid_large_graphic_colour_popup_pane

0x74a2,	// (0x000122a5) listscroll_popup_colour_pane_g1_ParamLimits

0x74a2,	// (0x000122a5) listscroll_popup_colour_pane_g1

0x74b9,	// (0x000122bc) listscroll_popup_colour_pane_g2_ParamLimits

0x74b9,	// (0x000122bc) listscroll_popup_colour_pane_g2

0x74d0,	// (0x000122d3) listscroll_popup_colour_pane_g3_ParamLimits

0x74d0,	// (0x000122d3) listscroll_popup_colour_pane_g3

0x74e0,	// (0x000122e3) listscroll_popup_colour_pane_g4_ParamLimits

0x74e0,	// (0x000122e3) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001a39b) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001a39b) listscroll_popup_colour_pane_g

0x74f4,	// (0x000122f7) scroll_pane_cp6_ParamLimits

0x74f4,	// (0x000122f7) scroll_pane_cp6

0x7506,	// (0x00012309) cell_large_graphic_colour_popup_pane_ParamLimits

0x7506,	// (0x00012309) cell_large_graphic_colour_popup_pane

0x7525,	// (0x00012328) cell_large_graphic_colour_none_popup_pane_t1

0x6e88,	// (0x00011c8b) grid_highlight_pane_cp5

0x7534,	// (0x00012337) cell_large_graphic_colour_popup_pane_g1

0x753c,	// (0x0001233f) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001a3a4) cell_large_graphic_colour_popup_pane_g

0x7544,	// (0x00012347) cell_large_graphic_colour_popup_pane_g2_copy1

0x754d,	// (0x00012350) grid_highlight_pane_cp4

0x7555,	// (0x00012358) bg_popup_window_pane_cp8_ParamLimits

0x7555,	// (0x00012358) bg_popup_window_pane_cp8

0x7570,	// (0x00012373) popup_snote_single_text_window_g1_ParamLimits

0x7570,	// (0x00012373) popup_snote_single_text_window_g1

0x7582,	// (0x00012385) popup_snote_single_text_window_t1_ParamLimits

0x7582,	// (0x00012385) popup_snote_single_text_window_t1

0x7595,	// (0x00012398) popup_snote_single_text_window_t2_ParamLimits

0x7595,	// (0x00012398) popup_snote_single_text_window_t2

0x75a8,	// (0x000123ab) popup_snote_single_text_window_t3_ParamLimits

0x75a8,	// (0x000123ab) popup_snote_single_text_window_t3

0x75e1,	// (0x000123e4) popup_snote_single_text_window_t4_ParamLimits

0x75e1,	// (0x000123e4) popup_snote_single_text_window_t4

0x7615,	// (0x00012418) popup_snote_single_text_window_t5_ParamLimits

0x7615,	// (0x00012418) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001a3a9) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001a3a9) popup_snote_single_text_window_t

0x7644,	// (0x00012447) bg_popup_window_pane_cp9_ParamLimits

0x7644,	// (0x00012447) bg_popup_window_pane_cp9

0x7570,	// (0x00012373) popup_snote_single_graphic_window_g1_ParamLimits

0x7570,	// (0x00012373) popup_snote_single_graphic_window_g1

0x7652,	// (0x00012455) popup_snote_single_graphic_window_g2_ParamLimits

0x7652,	// (0x00012455) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001a3b4) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001a3b4) popup_snote_single_graphic_window_g

0x765e,	// (0x00012461) popup_snote_single_graphic_window_t1_ParamLimits

0x765e,	// (0x00012461) popup_snote_single_graphic_window_t1

0x7671,	// (0x00012474) popup_snote_single_graphic_window_t2_ParamLimits

0x7671,	// (0x00012474) popup_snote_single_graphic_window_t2

0x7684,	// (0x00012487) popup_snote_single_graphic_window_t3_ParamLimits

0x7684,	// (0x00012487) popup_snote_single_graphic_window_t3

0x76bd,	// (0x000124c0) popup_snote_single_graphic_window_t4_ParamLimits

0x76bd,	// (0x000124c0) popup_snote_single_graphic_window_t4

0x76f1,	// (0x000124f4) popup_snote_single_graphic_window_t5_ParamLimits

0x76f1,	// (0x000124f4) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001a3b9) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001a3b9) popup_snote_single_graphic_window_t

0xad9f,	// (0x00015ba2) grid_graphic_popup_pane_ParamLimits

0xad9f,	// (0x00015ba2) grid_graphic_popup_pane

0xadc8,	// (0x00015bcb) listscroll_popup_graphic_pane_g1_ParamLimits

0xadc8,	// (0x00015bcb) listscroll_popup_graphic_pane_g1

0xaddc,	// (0x00015bdf) listscroll_popup_graphic_pane_g2_ParamLimits

0xaddc,	// (0x00015bdf) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0001a7ae) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0001a7ae) listscroll_popup_graphic_pane_g

0xadf0,	// (0x00015bf3) scroll_pane_cp5

0xad3c,	// (0x00015b3f) cell_graphic_popup_pane_ParamLimits

0xad3c,	// (0x00015b3f) cell_graphic_popup_pane

0xad1d,	// (0x00015b20) cell_graphic_popup_pane_g1

0xad25,	// (0x00015b28) cell_graphic_popup_pane_g2

0x7544,	// (0x00012347) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0001a7a7) cell_graphic_popup_pane_g

0xad2e,	// (0x00015b31) cell_graphic_popup_pane_t2

0x754d,	// (0x00012350) grid_highlight_pane_cp3

0x7732,	// (0x00012535) list_gen_pane_ParamLimits

0x7732,	// (0x00012535) list_gen_pane

0x7764,	// (0x00012567) scroll_pane

0xac75,	// (0x00015a78) bg_list_pane_g1_ParamLimits

0xac75,	// (0x00015a78) bg_list_pane_g1

0xac92,	// (0x00015a95) bg_list_pane_g2_ParamLimits

0xac92,	// (0x00015a95) bg_list_pane_g2

0xaca7,	// (0x00015aaa) bg_list_pane_g3_ParamLimits

0xaca7,	// (0x00015aaa) bg_list_pane_g3

0xacbb,	// (0x00015abe) bg_list_pane_g4_ParamLimits

0xacbb,	// (0x00015abe) bg_list_pane_g4

0xaccf,	// (0x00015ad2) bg_list_pane_g5_ParamLimits

0xaccf,	// (0x00015ad2) bg_list_pane_g5

0x0004,

0xf999,	// (0x0001a79c) bg_list_pane_g_ParamLimits

0xf999,	// (0x0001a79c) bg_list_pane_g

0xab78,	// (0x0001597b) list_double2_graphic_large_graphic_pane_ParamLimits

0xab78,	// (0x0001597b) list_double2_graphic_large_graphic_pane

0xab78,	// (0x0001597b) list_double2_graphic_pane_ParamLimits

0xab78,	// (0x0001597b) list_double2_graphic_pane

0xab78,	// (0x0001597b) list_double2_large_graphic_pane_ParamLimits

0xab78,	// (0x0001597b) list_double2_large_graphic_pane

0xab78,	// (0x0001597b) list_double2_pane_ParamLimits

0xab78,	// (0x0001597b) list_double2_pane

0xab78,	// (0x0001597b) list_double_graphic_heading_pane_ParamLimits

0xab78,	// (0x0001597b) list_double_graphic_heading_pane

0xab78,	// (0x0001597b) list_double_graphic_pane_ParamLimits

0xab78,	// (0x0001597b) list_double_graphic_pane

0xab78,	// (0x0001597b) list_double_heading_pane_ParamLimits

0xab78,	// (0x0001597b) list_double_heading_pane

0xab78,	// (0x0001597b) list_double_large_graphic_pane_ParamLimits

0xab78,	// (0x0001597b) list_double_large_graphic_pane

0xab78,	// (0x0001597b) list_double_number_pane_ParamLimits

0xab78,	// (0x0001597b) list_double_number_pane

0xab78,	// (0x0001597b) list_double_pane_ParamLimits

0xab78,	// (0x0001597b) list_double_pane

0xab78,	// (0x0001597b) list_double_time_pane_ParamLimits

0xab78,	// (0x0001597b) list_double_time_pane

0xab78,	// (0x0001597b) list_setting_number_pane_ParamLimits

0xab78,	// (0x0001597b) list_setting_number_pane

0xab78,	// (0x0001597b) list_setting_pane_ParamLimits

0xab78,	// (0x0001597b) list_setting_pane

0xabe1,	// (0x000159e4) list_single_2graphic_pane_ParamLimits

0xabe1,	// (0x000159e4) list_single_2graphic_pane

0xabe1,	// (0x000159e4) list_single_graphic_heading_pane_ParamLimits

0xabe1,	// (0x000159e4) list_single_graphic_heading_pane

0xabe1,	// (0x000159e4) list_single_graphic_pane_ParamLimits

0xabe1,	// (0x000159e4) list_single_graphic_pane

0xabe1,	// (0x000159e4) list_single_heading_pane_ParamLimits

0xabe1,	// (0x000159e4) list_single_heading_pane

0xac56,	// (0x00015a59) list_single_large_graphic_pane_ParamLimits

0xac56,	// (0x00015a59) list_single_large_graphic_pane

0xabe1,	// (0x000159e4) list_single_number_heading_pane_ParamLimits

0xabe1,	// (0x000159e4) list_single_number_heading_pane

0xabe1,	// (0x000159e4) list_single_number_pane_ParamLimits

0xabe1,	// (0x000159e4) list_single_number_pane

0xabe1,	// (0x000159e4) list_single_pane_ParamLimits

0xabe1,	// (0x000159e4) list_single_pane

0x6e88,	// (0x00011c8b) list_highlight_pane_cp1

0x77a4,	// (0x000125a7) list_single_pane_g1_ParamLimits

0x77a4,	// (0x000125a7) list_single_pane_g1

0x77b0,	// (0x000125b3) list_single_pane_g2_ParamLimits

0x77b0,	// (0x000125b3) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001a3cb) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001a3cb) list_single_pane_g

0xab31,	// (0x00015934) list_single_pane_t1_ParamLimits

0xab31,	// (0x00015934) list_single_pane_t1

0x77a4,	// (0x000125a7) list_single_number_pane_g1_ParamLimits

0x77a4,	// (0x000125a7) list_single_number_pane_g1

0x77b0,	// (0x000125b3) list_single_number_pane_g2_ParamLimits

0x77b0,	// (0x000125b3) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001a3cb) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001a3cb) list_single_number_pane_g

0xa8bd,	// (0x000156c0) list_single_number_pane_t1_ParamLimits

0xa8bd,	// (0x000156c0) list_single_number_pane_t1

0xa8d3,	// (0x000156d6) list_single_number_pane_t2_ParamLimits

0xa8d3,	// (0x000156d6) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0001a75d) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0001a75d) list_single_number_pane_t

0x7798,	// (0x0001259b) list_single_graphic_pane_g1_ParamLimits

0x7798,	// (0x0001259b) list_single_graphic_pane_g1

0x77a4,	// (0x000125a7) list_single_graphic_pane_g2_ParamLimits

0x77a4,	// (0x000125a7) list_single_graphic_pane_g2

0x77b0,	// (0x000125b3) list_single_graphic_pane_g3_ParamLimits

0x77b0,	// (0x000125b3) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001a3c4) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001a3c4) list_single_graphic_pane_g

0x77bc,	// (0x000125bf) list_single_graphic_pane_t1_ParamLimits

0x77bc,	// (0x000125bf) list_single_graphic_pane_t1

0x77a4,	// (0x000125a7) list_single_heading_pane_g1_ParamLimits

0x77a4,	// (0x000125a7) list_single_heading_pane_g1

0x77b0,	// (0x000125b3) list_single_heading_pane_g2_ParamLimits

0x77b0,	// (0x000125b3) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001a3cb) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001a3cb) list_single_heading_pane_g

0x77d2,	// (0x000125d5) list_single_heading_pane_t1_ParamLimits

0x77d2,	// (0x000125d5) list_single_heading_pane_t1

0x77e8,	// (0x000125eb) list_single_heading_pane_t2_ParamLimits

0x77e8,	// (0x000125eb) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001a3d0) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001a3d0) list_single_heading_pane_t

0x77a4,	// (0x000125a7) list_single_number_heading_pane_g1_ParamLimits

0x77a4,	// (0x000125a7) list_single_number_heading_pane_g1

0x77b0,	// (0x000125b3) list_single_number_heading_pane_g2_ParamLimits

0x77b0,	// (0x000125b3) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001a3cb) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001a3cb) list_single_number_heading_pane_g

0x77d2,	// (0x000125d5) list_single_number_heading_pane_t1_ParamLimits

0x77d2,	// (0x000125d5) list_single_number_heading_pane_t1

0x77fa,	// (0x000125fd) list_single_number_heading_pane_t2_ParamLimits

0x77fa,	// (0x000125fd) list_single_number_heading_pane_t2

0x780c,	// (0x0001260f) list_single_number_heading_pane_t3_ParamLimits

0x780c,	// (0x0001260f) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001a3d5) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001a3d5) list_single_number_heading_pane_t

0x781e,	// (0x00012621) list_single_graphic_heading_pane_g1_ParamLimits

0x781e,	// (0x00012621) list_single_graphic_heading_pane_g1

0x782a,	// (0x0001262d) list_single_graphic_heading_pane_g4_ParamLimits

0x782a,	// (0x0001262d) list_single_graphic_heading_pane_g4

0x77b0,	// (0x000125b3) list_single_graphic_heading_pane_g5_ParamLimits

0x77b0,	// (0x000125b3) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001a3dc) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001a3dc) list_single_graphic_heading_pane_g

0x77d2,	// (0x000125d5) list_single_graphic_heading_pane_t1_ParamLimits

0x77d2,	// (0x000125d5) list_single_graphic_heading_pane_t1

0x783b,	// (0x0001263e) list_single_graphic_heading_pane_t2_ParamLimits

0x783b,	// (0x0001263e) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001a3e3) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001a3e3) list_single_graphic_heading_pane_t

0x784d,	// (0x00012650) list_single_large_graphic_pane_g1_ParamLimits

0x784d,	// (0x00012650) list_single_large_graphic_pane_g1

0x7859,	// (0x0001265c) list_single_large_graphic_pane_g2_ParamLimits

0x7859,	// (0x0001265c) list_single_large_graphic_pane_g2

0x7865,	// (0x00012668) list_single_large_graphic_pane_g3_ParamLimits

0x7865,	// (0x00012668) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001a3e8) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001a3e8) list_single_large_graphic_pane_g

0x9b8b,	// (0x0001498e) wait_border_pane_g2_copy1

0x7871,	// (0x00012674) list_single_large_graphic_pane_g4_cp2

0x7879,	// (0x0001267c) list_single_large_graphic_pane_t1_ParamLimits

0x7879,	// (0x0001267c) list_single_large_graphic_pane_t1

0x788f,	// (0x00012692) list_double_pane_g1_ParamLimits

0x788f,	// (0x00012692) list_double_pane_g1

0x789b,	// (0x0001269e) list_double_pane_g2_ParamLimits

0x789b,	// (0x0001269e) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001a3ef) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001a3ef) list_double_pane_g

0x78a7,	// (0x000126aa) list_double_pane_t1_ParamLimits

0x78a7,	// (0x000126aa) list_double_pane_t1

0x78bd,	// (0x000126c0) list_double_pane_t2_ParamLimits

0x78bd,	// (0x000126c0) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001a3f4) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001a3f4) list_double_pane_t

0x78cf,	// (0x000126d2) list_double2_pane_g1_ParamLimits

0x78cf,	// (0x000126d2) list_double2_pane_g1

0x78e0,	// (0x000126e3) list_double2_pane_g2_ParamLimits

0x78e0,	// (0x000126e3) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001a3f9) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001a3f9) list_double2_pane_g

0x78ec,	// (0x000126ef) list_double2_pane_t1_ParamLimits

0x78ec,	// (0x000126ef) list_double2_pane_t1

0x7902,	// (0x00012705) list_double2_pane_t2_ParamLimits

0x7902,	// (0x00012705) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001a3fe) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001a3fe) list_double2_pane_t

0x788f,	// (0x00012692) list_double_number_pane_g1_ParamLimits

0x788f,	// (0x00012692) list_double_number_pane_g1

0x789b,	// (0x0001269e) list_double_number_pane_g2_ParamLimits

0x789b,	// (0x0001269e) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001a3ef) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001a3ef) list_double_number_pane_g

0x7914,	// (0x00012717) list_double_number_pane_t1_ParamLimits

0x7914,	// (0x00012717) list_double_number_pane_t1

0x7926,	// (0x00012729) list_double_number_pane_t2_ParamLimits

0x7926,	// (0x00012729) list_double_number_pane_t2

0x793c,	// (0x0001273f) list_double_number_pane_t3_ParamLimits

0x793c,	// (0x0001273f) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0001a403) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0001a403) list_double_number_pane_t

0x794e,	// (0x00012751) list_double_graphic_pane_g1_ParamLimits

0x794e,	// (0x00012751) list_double_graphic_pane_g1

0x795a,	// (0x0001275d) list_double_graphic_pane_g2_ParamLimits

0x795a,	// (0x0001275d) list_double_graphic_pane_g2

0x7969,	// (0x0001276c) list_double_graphic_pane_g3_ParamLimits

0x7969,	// (0x0001276c) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001a40a) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001a40a) list_double_graphic_pane_g

0x7981,	// (0x00012784) list_double_graphic_pane_t1_ParamLimits

0x7981,	// (0x00012784) list_double_graphic_pane_t1

0x7997,	// (0x0001279a) list_double_graphic_pane_t2_ParamLimits

0x7997,	// (0x0001279a) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001a413) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001a413) list_double_graphic_pane_t

0x79a9,	// (0x000127ac) list_double2_graphic_pane_g1_ParamLimits

0x79a9,	// (0x000127ac) list_double2_graphic_pane_g1

0x79b5,	// (0x000127b8) list_double2_graphic_pane_g2_ParamLimits

0x79b5,	// (0x000127b8) list_double2_graphic_pane_g2

0x78e0,	// (0x000126e3) list_double2_graphic_pane_g3_ParamLimits

0x78e0,	// (0x000126e3) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001a418) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001a418) list_double2_graphic_pane_g

0x79c1,	// (0x000127c4) list_double2_graphic_pane_t1_ParamLimits

0x79c1,	// (0x000127c4) list_double2_graphic_pane_t1

0x79d7,	// (0x000127da) list_double2_graphic_pane_t2_ParamLimits

0x79d7,	// (0x000127da) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001a41f) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001a41f) list_double2_graphic_pane_t

0x79e9,	// (0x000127ec) list_double_large_graphic_pane_g1_ParamLimits

0x79e9,	// (0x000127ec) list_double_large_graphic_pane_g1

0x7a08,	// (0x0001280b) list_double_large_graphic_pane_g2_ParamLimits

0x7a08,	// (0x0001280b) list_double_large_graphic_pane_g2

0x789b,	// (0x0001269e) list_double_large_graphic_pane_g3_ParamLimits

0x789b,	// (0x0001269e) list_double_large_graphic_pane_g3

0x7a19,	// (0x0001281c) list_double_large_graphic_pane_g4_ParamLimits

0x7a19,	// (0x0001281c) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001a424) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001a424) list_double_large_graphic_pane_g

0x7a3f,	// (0x00012842) list_double_large_graphic_pane_t1_ParamLimits

0x7a3f,	// (0x00012842) list_double_large_graphic_pane_t1

0x7a58,	// (0x0001285b) list_double_large_graphic_pane_t2_ParamLimits

0x7a58,	// (0x0001285b) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001a42f) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001a42f) list_double_large_graphic_pane_t

0x7a6a,	// (0x0001286d) list_double2_large_graphic_pane_g1_ParamLimits

0x7a6a,	// (0x0001286d) list_double2_large_graphic_pane_g1

0x78cf,	// (0x000126d2) list_double2_large_graphic_pane_g2_ParamLimits

0x78cf,	// (0x000126d2) list_double2_large_graphic_pane_g2

0x78e0,	// (0x000126e3) list_double2_large_graphic_pane_g3_ParamLimits

0x78e0,	// (0x000126e3) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001a434) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001a434) list_double2_large_graphic_pane_g

0x7a76,	// (0x00012879) list_double2_large_graphic_pane_t1_ParamLimits

0x7a76,	// (0x00012879) list_double2_large_graphic_pane_t1

0x7a8c,	// (0x0001288f) list_double2_large_graphic_pane_t2_ParamLimits

0x7a8c,	// (0x0001288f) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0001a43b) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0001a43b) list_double2_large_graphic_pane_t

0x7a9e,	// (0x000128a1) list_double_heading_pane_g1_ParamLimits

0x7a9e,	// (0x000128a1) list_double_heading_pane_g1

0x7aaf,	// (0x000128b2) list_double_heading_pane_g2_ParamLimits

0x7aaf,	// (0x000128b2) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0001a440) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0001a440) list_double_heading_pane_g

0x7abb,	// (0x000128be) list_double_heading_pane_t1_ParamLimits

0x7abb,	// (0x000128be) list_double_heading_pane_t1

0x7ad1,	// (0x000128d4) list_double_heading_pane_t2_ParamLimits

0x7ad1,	// (0x000128d4) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0001a445) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0001a445) list_double_heading_pane_t

0x7ae3,	// (0x000128e6) list_double_graphic_heading_pane_g1_ParamLimits

0x7ae3,	// (0x000128e6) list_double_graphic_heading_pane_g1

0x7a9e,	// (0x000128a1) list_double_graphic_heading_pane_g2_ParamLimits

0x7a9e,	// (0x000128a1) list_double_graphic_heading_pane_g2

0x7aaf,	// (0x000128b2) list_double_graphic_heading_pane_g3_ParamLimits

0x7aaf,	// (0x000128b2) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0001a44a) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0001a44a) list_double_graphic_heading_pane_g

0x7aef,	// (0x000128f2) list_double_graphic_heading_pane_t1_ParamLimits

0x7aef,	// (0x000128f2) list_double_graphic_heading_pane_t1

0x7b05,	// (0x00012908) list_double_graphic_heading_pane_t2_ParamLimits

0x7b05,	// (0x00012908) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0001a451) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0001a451) list_double_graphic_heading_pane_t

0x7a08,	// (0x0001280b) list_double_time_pane_g1_ParamLimits

0x7a08,	// (0x0001280b) list_double_time_pane_g1

0x789b,	// (0x0001269e) list_double_time_pane_g2_ParamLimits

0x789b,	// (0x0001269e) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0001a456) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0001a456) list_double_time_pane_g

0x7b17,	// (0x0001291a) list_double_time_pane_t1_ParamLimits

0x7b17,	// (0x0001291a) list_double_time_pane_t1

0x7b2d,	// (0x00012930) list_double_time_pane_t2_ParamLimits

0x7b2d,	// (0x00012930) list_double_time_pane_t2

0x7b3f,	// (0x00012942) list_double_time_pane_t3_ParamLimits

0x7b3f,	// (0x00012942) list_double_time_pane_t3

0x7b51,	// (0x00012954) list_double_time_pane_t4_ParamLimits

0x7b51,	// (0x00012954) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0001a45b) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0001a45b) list_double_time_pane_t

0x79b5,	// (0x000127b8) list_setting_pane_g1_ParamLimits

0x79b5,	// (0x000127b8) list_setting_pane_g1

0x78e0,	// (0x000126e3) list_setting_pane_g2_ParamLimits

0x78e0,	// (0x000126e3) list_setting_pane_g2

0x0001,

0xf661,	// (0x0001a464) list_setting_pane_g_ParamLimits

0xf661,	// (0x0001a464) list_setting_pane_g

0x7b63,	// (0x00012966) list_setting_pane_t1_ParamLimits

0x7b63,	// (0x00012966) list_setting_pane_t1

0x7b7a,	// (0x0001297d) list_setting_pane_t2_ParamLimits

0x7b7a,	// (0x0001297d) list_setting_pane_t2

0x0002,

0xf666,	// (0x0001a469) list_setting_pane_t_ParamLimits

0xf666,	// (0x0001a469) list_setting_pane_t

0x7bb9,	// (0x000129bc) set_value_pane_cp_ParamLimits

0x7bb9,	// (0x000129bc) set_value_pane_cp

0x79b5,	// (0x000127b8) list_setting_number_pane_g1_ParamLimits

0x79b5,	// (0x000127b8) list_setting_number_pane_g1

0x78e0,	// (0x000126e3) list_setting_number_pane_g2_ParamLimits

0x78e0,	// (0x000126e3) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x0001a464) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x0001a464) list_setting_number_pane_g

0x7bc5,	// (0x000129c8) list_setting_number_pane_t1_ParamLimits

0x7bc5,	// (0x000129c8) list_setting_number_pane_t1

0x7bd9,	// (0x000129dc) list_setting_number_pane_t2_ParamLimits

0x7bd9,	// (0x000129dc) list_setting_number_pane_t2

0x7bf0,	// (0x000129f3) list_setting_number_pane_t3_ParamLimits

0x7bf0,	// (0x000129f3) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0001a470) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0001a470) list_setting_number_pane_t

0x7bb9,	// (0x000129bc) set_value_pane_ParamLimits

0x7bb9,	// (0x000129bc) set_value_pane

0x7c33,	// (0x00012a36) bg_set_opt_pane_ParamLimits

0x7c33,	// (0x00012a36) bg_set_opt_pane

0x7c54,	// (0x00012a57) set_value_pane_t1

0x7c62,	// (0x00012a65) slider_set_pane_cp3

0x7c6b,	// (0x00012a6e) volume_small_pane_cp

0x7c74,	// (0x00012a77) list_form_gen_pane

0x7c7d,	// (0x00012a80) scroll_pane_cp8

0x7c96,	// (0x00012a99) form_field_data_pane_ParamLimits

0x7c96,	// (0x00012a99) form_field_data_pane

0x7cb8,	// (0x00012abb) form_field_data_wide_pane_ParamLimits

0x7cb8,	// (0x00012abb) form_field_data_wide_pane

0x7cdb,	// (0x00012ade) form_field_popup_pane_ParamLimits

0x7cdb,	// (0x00012ade) form_field_popup_pane

0x7cfb,	// (0x00012afe) form_field_popup_wide_pane_ParamLimits

0x7cfb,	// (0x00012afe) form_field_popup_wide_pane

0x7d18,	// (0x00012b1b) form_field_slider_pane_ParamLimits

0x7d18,	// (0x00012b1b) form_field_slider_pane

0x7d2b,	// (0x00012b2e) form_field_slider_wide_pane_ParamLimits

0x7d2b,	// (0x00012b2e) form_field_slider_wide_pane

0x7d3e,	// (0x00012b41) data_form_pane

0x7d54,	// (0x00012b57) form_field_data_pane_t1

0x7d6c,	// (0x00012b6f) input_focus_pane

0x7d7a,	// (0x00012b7d) data_form_wide_pane

0x7da6,	// (0x00012ba9) form_field_data_wide_pane_t1

0x7562,	// (0x00012365) input_focus_pane_cp6

0x7dc5,	// (0x00012bc8) form_field_popup_pane_t1

0x7d6c,	// (0x00012b6f) input_focus_pane_cp7

0x7ddd,	// (0x00012be0) list_form_pane

0x7df1,	// (0x00012bf4) form_field_popup_wide_pane_t1

0x7d6c,	// (0x00012b6f) input_focus_pane_cp8

0x7e06,	// (0x00012c09) list_form_wide_pane

0x7e1d,	// (0x00012c20) form_field_slider_pane_t1_ParamLimits

0x7e1d,	// (0x00012c20) form_field_slider_pane_t1

0x7e2f,	// (0x00012c32) form_field_slider_pane_t2_ParamLimits

0x7e2f,	// (0x00012c32) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0001a480) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0001a480) form_field_slider_pane_t

0x71fd,	// (0x00012000) input_focus_pane_cp9_ParamLimits

0x71fd,	// (0x00012000) input_focus_pane_cp9

0x7e41,	// (0x00012c44) slider_cont_pane_ParamLimits

0x7e41,	// (0x00012c44) slider_cont_pane

0x7e55,	// (0x00012c58) form_field_slider_wide_pane_t1_ParamLimits

0x7e55,	// (0x00012c58) form_field_slider_wide_pane_t1

0x7e67,	// (0x00012c6a) form_field_slider_wide_pane_t2_ParamLimits

0x7e67,	// (0x00012c6a) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0001a485) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0001a485) form_field_slider_wide_pane_t

0x71fd,	// (0x00012000) input_focus_pane_cp10_ParamLimits

0x71fd,	// (0x00012000) input_focus_pane_cp10

0x7e79,	// (0x00012c7c) slider_cont_pane_cp1_ParamLimits

0x7e79,	// (0x00012c7c) slider_cont_pane_cp1

0x7e8d,	// (0x00012c90) slider_form_pane_cp

0x7e95,	// (0x00012c98) input_focus_pane_g1

0x7e9d,	// (0x00012ca0) input_focus_pane_g2

0x7ea5,	// (0x00012ca8) input_focus_pane_g3

0x7ead,	// (0x00012cb0) input_focus_pane_g4

0x7eb5,	// (0x00012cb8) input_focus_pane_g5

0x7ebd,	// (0x00012cc0) input_focus_pane_g6

0x7ec5,	// (0x00012cc8) input_focus_pane_g7

0x7ecd,	// (0x00012cd0) input_focus_pane_g8

0x7ed5,	// (0x00012cd8) input_focus_pane_g9

0x6e7e,	// (0x00011c81) input_focus_pane_g10

0x0009,

0xf687,	// (0x0001a48a) input_focus_pane_g

0x9b94,	// (0x00014997) wait_border_pane_g3_copy1

0x7edd,	// (0x00012ce0) data_form_pane_t1

0x6e7e,	// (0x00011c81) wait_anim_pane_g1_copy1

0xab14,	// (0x00015917) data_form_wide_pane_t1

0x7ef8,	// (0x00012cfb) list_form_graphic_pane_cp_ParamLimits

0x7ef8,	// (0x00012cfb) list_form_graphic_pane_cp

0xaae9,	// (0x000158ec) slider_form_pane_g1

0xaaf2,	// (0x000158f5) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0001a78d) slider_form_pane_g

0x7f11,	// (0x00012d14) list_form_graphic_pane_ParamLimits

0x7f11,	// (0x00012d14) list_form_graphic_pane

0x7f2d,	// (0x00012d30) list_form_graphic_pane_g1

0x7f35,	// (0x00012d38) list_form_graphic_pane_t1_ParamLimits

0x7f35,	// (0x00012d38) list_form_graphic_pane_t1

0x6f68,	// (0x00011d6b) list_highlight_pane_cp5_ParamLimits

0x6f68,	// (0x00011d6b) list_highlight_pane_cp5

0x7f4a,	// (0x00012d4d) find_pane_g1

0x7f53,	// (0x00012d56) input_find_pane

0x7f5c,	// (0x00012d5f) input_find_pane_g1_ParamLimits

0x7f5c,	// (0x00012d5f) input_find_pane_g1

0x7f68,	// (0x00012d6b) input_find_pane_t1_ParamLimits

0x7f68,	// (0x00012d6b) input_find_pane_t1

0x7f7d,	// (0x00012d80) input_find_pane_t2_ParamLimits

0x7f7d,	// (0x00012d80) input_find_pane_t2

0x0001,

0xf69c,	// (0x0001a49f) input_find_pane_t_ParamLimits

0xf69c,	// (0x0001a49f) input_find_pane_t

0x7f92,	// (0x00012d95) input_focus_pane_cp5_ParamLimits

0x7f92,	// (0x00012d95) input_focus_pane_cp5

0x7fac,	// (0x00012daf) bg_popup_window_pane_cp2_ParamLimits

0x7fac,	// (0x00012daf) bg_popup_window_pane_cp2

0x7fb9,	// (0x00012dbc) listscroll_menu_pane_ParamLimits

0x7fb9,	// (0x00012dbc) listscroll_menu_pane

0x7fc5,	// (0x00012dc8) popup_submenu_window_ParamLimits

0x7fc5,	// (0x00012dc8) popup_submenu_window

0x7ff1,	// (0x00012df4) find_popup_pane_g1

0x7ff9,	// (0x00012dfc) input_popup_find_pane_cp

0x7f92,	// (0x00012d95) input_focus_pane_cp4_ParamLimits

0x7f92,	// (0x00012d95) input_focus_pane_cp4

0x800f,	// (0x00012e12) input_popup_find_pane_t1_ParamLimits

0x800f,	// (0x00012e12) input_popup_find_pane_t1

0x6e88,	// (0x00011c8b) bg_popup_sub_pane_cp

0x803d,	// (0x00012e40) listscroll_popup_sub_pane

0x8045,	// (0x00012e48) list_submenu_pane_ParamLimits

0x8045,	// (0x00012e48) list_submenu_pane

0x8056,	// (0x00012e59) scroll_pane_cp4

0x805e,	// (0x00012e61) list_single_popup_submenu_pane_ParamLimits

0x805e,	// (0x00012e61) list_single_popup_submenu_pane

0x8072,	// (0x00012e75) list_single_popup_submenu_pane_g1

0x807a,	// (0x00012e7d) list_single_popup_submenu_pane_t1_ParamLimits

0x807a,	// (0x00012e7d) list_single_popup_submenu_pane_t1

0x6f68,	// (0x00011d6b) bg_active_tab_pane_cp1_ParamLimits

0x6f68,	// (0x00011d6b) bg_active_tab_pane_cp1

0x808f,	// (0x00012e92) tabs_2_active_pane_g1

0x8097,	// (0x00012e9a) tabs_2_active_pane_t1

0x6f68,	// (0x00011d6b) bg_passive_tab_pane_cp1_ParamLimits

0x6f68,	// (0x00011d6b) bg_passive_tab_pane_cp1

0x808f,	// (0x00012e92) tabs_2_passive_pane_g1

0x8097,	// (0x00012e9a) tabs_2_passive_pane_t1

0x80a9,	// (0x00012eac) bg_active_tab_pane_cp4

0x80b7,	// (0x00012eba) tabs_2_long_active_pane_t1

0x80ca,	// (0x00012ecd) bg_passive_tab_pane_cp4

0x59e9,	// (0x000107ec) list_single_midp_graphic_pane_g4_ParamLimits

0x80a9,	// (0x00012eac) bg_active_tab_pane_cp5

0x80d6,	// (0x00012ed9) tabs_3_long_active_pane_t1

0x80ca,	// (0x00012ecd) bg_passive_tab_pane_cp5

0x59e9,	// (0x000107ec) list_single_midp_graphic_pane_g4

0x6f68,	// (0x00011d6b) bg_popup_window_pane_cp13_ParamLimits

0x6f68,	// (0x00011d6b) bg_popup_window_pane_cp13

0x80f1,	// (0x00012ef4) listscroll_popup_fast_pane_ParamLimits

0x80f1,	// (0x00012ef4) listscroll_popup_fast_pane

0x8100,	// (0x00012f03) grid_popup_fast_pane_ParamLimits

0x8100,	// (0x00012f03) grid_popup_fast_pane

0x8112,	// (0x00012f15) scroll_pane_cp9_ParamLimits

0x8112,	// (0x00012f15) scroll_pane_cp9

0xc9f8,	// (0x000177fb) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc9f8,	// (0x000177fb) list_single_graphic_hl_pane_t1_cp2

0x8136,	// (0x00012f39) input_focus_pane_cp20_ParamLimits

0x8136,	// (0x00012f39) input_focus_pane_cp20

0x8144,	// (0x00012f47) query_popup_data_pane_t1_ParamLimits

0x8144,	// (0x00012f47) query_popup_data_pane_t1

0x8157,	// (0x00012f5a) query_popup_data_pane_t2_ParamLimits

0x8157,	// (0x00012f5a) query_popup_data_pane_t2

0x819d,	// (0x00012fa0) query_popup_data_pane_t3_ParamLimits

0x819d,	// (0x00012fa0) query_popup_data_pane_t3

0x81de,	// (0x00012fe1) query_popup_data_pane_t4_ParamLimits

0x81de,	// (0x00012fe1) query_popup_data_pane_t4

0x821a,	// (0x0001301d) query_popup_data_pane_t5_ParamLimits

0x821a,	// (0x0001301d) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0001a4a4) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0001a4a4) query_popup_data_pane_t

0x7e95,	// (0x00012c98) bg_set_opt_pane_g1

0x7e9d,	// (0x00012ca0) bg_set_opt_pane_g2

0x7ea5,	// (0x00012ca8) bg_set_opt_pane_g3

0x7ead,	// (0x00012cb0) bg_set_opt_pane_g4

0x7eb5,	// (0x00012cb8) bg_set_opt_pane_g5

0x7ebd,	// (0x00012cc0) bg_set_opt_pane_g6

0x7ec5,	// (0x00012cc8) bg_set_opt_pane_g7

0x7ecd,	// (0x00012cd0) bg_set_opt_pane_g8

0x7ed5,	// (0x00012cd8) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0001a4af) bg_set_opt_pane_g

0x5003,	// (0x0000fe06) control_top_pane_stacon_ParamLimits

0x5003,	// (0x0000fe06) control_top_pane_stacon

0x5056,	// (0x0000fe59) signal_pane_stacon_ParamLimits

0x5056,	// (0x0000fe59) signal_pane_stacon

0x8895,	// (0x00013698) stacon_top_pane_g1_ParamLimits

0x8895,	// (0x00013698) stacon_top_pane_g1

0x507b,	// (0x0000fe7e) title_pane_stacon_ParamLimits

0x507b,	// (0x0000fe7e) title_pane_stacon

0x50a5,	// (0x0000fea8) uni_indicator_pane_stacon_ParamLimits

0x50a5,	// (0x0000fea8) uni_indicator_pane_stacon

0x50ba,	// (0x0000febd) battery_pane_stacon_ParamLimits

0x50ba,	// (0x0000febd) battery_pane_stacon

0x50fe,	// (0x0000ff01) control_bottom_pane_stacon_ParamLimits

0x50fe,	// (0x0000ff01) control_bottom_pane_stacon

0x5121,	// (0x0000ff24) navi_pane_stacon_ParamLimits

0x5121,	// (0x0000ff24) navi_pane_stacon

0x88b7,	// (0x000136ba) stacon_bottom_pane_g1_ParamLimits

0x88b7,	// (0x000136ba) stacon_bottom_pane_g1

0x4d66,	// (0x0000fb69) aid_levels_signal_lsc_ParamLimits

0x4d66,	// (0x0000fb69) aid_levels_signal_lsc

0x4d7c,	// (0x0000fb7f) signal_pane_stacon_g1_ParamLimits

0x4d7c,	// (0x0000fb7f) signal_pane_stacon_g1

0x4d90,	// (0x0000fb93) signal_pane_stacon_g2_ParamLimits

0x4d90,	// (0x0000fb93) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0001a4c2) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0001a4c2) signal_pane_stacon_g

0x4dc5,	// (0x0000fbc8) title_pane_stacon_t1_ParamLimits

0x4dc5,	// (0x0000fbc8) title_pane_stacon_t1

0x825e,	// (0x00013061) uni_indicator_pane_stacon_g1

0x8268,	// (0x0001306b) uni_indicator_pane_stacon_g2

0x8272,	// (0x00013075) uni_indicator_pane_stacon_g3

0x827c,	// (0x0001307f) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0001a4ce) uni_indicator_pane_stacon_g

0x4dea,	// (0x0000fbed) control_top_pane_stacon_g1

0x4df2,	// (0x0000fbf5) control_top_pane_stacon_t1_ParamLimits

0x4df2,	// (0x0000fbf5) control_top_pane_stacon_t1

0x4e29,	// (0x0000fc2c) aid_levels_battery_lsc_ParamLimits

0x4e29,	// (0x0000fc2c) aid_levels_battery_lsc

0x4e40,	// (0x0000fc43) battery_pane_stacon_g1_ParamLimits

0x4e40,	// (0x0000fc43) battery_pane_stacon_g1

0x4e53,	// (0x0000fc56) battery_pane_stacon_g2_ParamLimits

0x4e53,	// (0x0000fc56) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0001a4d7) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0001a4d7) battery_pane_stacon_g

0x4e91,	// (0x0000fc94) navi_icon_pane_stacon

0x4ea5,	// (0x0000fca8) navi_navi_pane_stacon

0x4e91,	// (0x0000fc94) navi_text_pane_stacon

0x4dea,	// (0x0000fbed) control_bottom_pane_stacon_g1

0x4eb9,	// (0x0000fcbc) control_bottom_pane_stacon_t1_ParamLimits

0x4eb9,	// (0x0000fcbc) control_bottom_pane_stacon_t1

0x82a0,	// (0x000130a3) grid_app_pane_ParamLimits

0x82a0,	// (0x000130a3) grid_app_pane

0x82c4,	// (0x000130c7) scroll_pane_cp15_ParamLimits

0x82c4,	// (0x000130c7) scroll_pane_cp15

0x82d7,	// (0x000130da) cell_app_pane_ParamLimits

0x82d7,	// (0x000130da) cell_app_pane

0x82fb,	// (0x000130fe) cell_app_pane_g1_ParamLimits

0x82fb,	// (0x000130fe) cell_app_pane_g1

0x831b,	// (0x0001311e) cell_app_pane_g2_ParamLimits

0x831b,	// (0x0001311e) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0001a4dc) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0001a4dc) cell_app_pane_g

0x8327,	// (0x0001312a) cell_app_pane_t1_ParamLimits

0x8327,	// (0x0001312a) cell_app_pane_t1

0x833e,	// (0x00013141) grid_highlight_pane_ParamLimits

0x833e,	// (0x00013141) grid_highlight_pane

0x7e95,	// (0x00012c98) cell_highlight_pane_g1

0x7e9d,	// (0x00012ca0) cell_highlight_pane_g2

0x7ea5,	// (0x00012ca8) cell_highlight_pane_g3

0x7ead,	// (0x00012cb0) cell_highlight_pane_g4

0x7eb5,	// (0x00012cb8) cell_highlight_pane_g5

0x7ebd,	// (0x00012cc0) cell_highlight_pane_g6

0x7ec5,	// (0x00012cc8) cell_highlight_pane_g7

0x7ecd,	// (0x00012cd0) cell_highlight_pane_g8

0x7ed5,	// (0x00012cd8) cell_highlight_pane_g9

0x6e7e,	// (0x00011c81) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0001a48a) cell_highlight_pane_g

0x834f,	// (0x00013152) bg_scroll_pane

0x4f03,	// (0x0000fd06) scroll_handle_pane

0x8396,	// (0x00013199) scroll_bg_pane_g1

0x83ab,	// (0x000131ae) scroll_bg_pane_g2

0x83c3,	// (0x000131c6) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0001a4e1) scroll_bg_pane_g

0x83d8,	// (0x000131db) scroll_handle_focus_pane_ParamLimits

0x83d8,	// (0x000131db) scroll_handle_focus_pane

0x8396,	// (0x00013199) scroll_handle_pane_g1

0x83e5,	// (0x000131e8) scroll_handle_pane_g2

0x83c3,	// (0x000131c6) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0001a4e8) scroll_handle_pane_g

0x7f92,	// (0x00012d95) bg_popup_sub_pane_cp21_ParamLimits

0x7f92,	// (0x00012d95) bg_popup_sub_pane_cp21

0x83f9,	// (0x000131fc) popup_fep_japan_predictive_window_t1_ParamLimits

0x83f9,	// (0x000131fc) popup_fep_japan_predictive_window_t1

0x8413,	// (0x00013216) popup_fep_japan_predictive_window_t2_ParamLimits

0x8413,	// (0x00013216) popup_fep_japan_predictive_window_t2

0x8446,	// (0x00013249) popup_fep_japan_predictive_window_t3_ParamLimits

0x8446,	// (0x00013249) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0001a4ef) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0001a4ef) popup_fep_japan_predictive_window_t

0x6e88,	// (0x00011c8b) bg_popup_sub_pane_cp23

0x847d,	// (0x00013280) listscroll_japin_cand_pane

0x8485,	// (0x00013288) popup_fep_japan_candidate_window_t1

0x8493,	// (0x00013296) candidate_pane_ParamLimits

0x8493,	// (0x00013296) candidate_pane

0x84a5,	// (0x000132a8) scroll_pane_cp30

0x84ad,	// (0x000132b0) list_single_popup_jap_candidate_pane_ParamLimits

0x84ad,	// (0x000132b0) list_single_popup_jap_candidate_pane

0x6e88,	// (0x00011c8b) list_highlight_pane_cp30

0x84c2,	// (0x000132c5) list_single_popup_jap_candidate_pane_t1

0x84d1,	// (0x000132d4) level_1_signal

0x84e3,	// (0x000132e6) level_2_signal

0x84f6,	// (0x000132f9) level_3_signal

0x8509,	// (0x0001330c) level_4_signal

0x851c,	// (0x0001331f) level_5_signal

0x852f,	// (0x00013332) level_6_signal

0x8542,	// (0x00013345) level_7_signal

0x84d1,	// (0x000132d4) level_1_battery

0x84e3,	// (0x000132e6) level_2_battery

0x84f6,	// (0x000132f9) level_3_battery

0x8509,	// (0x0001330c) level_4_battery

0x851c,	// (0x0001331f) level_5_battery

0x852f,	// (0x00013332) level_6_battery

0x8542,	// (0x00013345) level_7_battery

0x856d,	// (0x00013370) list_menu_pane_ParamLimits

0x856d,	// (0x00013370) list_menu_pane

0x8583,	// (0x00013386) scroll_pane_cp25_ParamLimits

0x8583,	// (0x00013386) scroll_pane_cp25

0x859c,	// (0x0001339f) list_double2_graphic_pane_cp2_ParamLimits

0x859c,	// (0x0001339f) list_double2_graphic_pane_cp2

0x859c,	// (0x0001339f) list_double2_large_graphic_pane_cp2_ParamLimits

0x859c,	// (0x0001339f) list_double2_large_graphic_pane_cp2

0x859c,	// (0x0001339f) list_double2_pane_cp2_ParamLimits

0x859c,	// (0x0001339f) list_double2_pane_cp2

0x859c,	// (0x0001339f) list_double_graphic_pane_cp2_ParamLimits

0x859c,	// (0x0001339f) list_double_graphic_pane_cp2

0x859c,	// (0x0001339f) list_double_large_graphic_pane_cp2_ParamLimits

0x859c,	// (0x0001339f) list_double_large_graphic_pane_cp2

0x859c,	// (0x0001339f) list_double_number_pane_cp2_ParamLimits

0x859c,	// (0x0001339f) list_double_number_pane_cp2

0x859c,	// (0x0001339f) list_double_pane_cp2_ParamLimits

0x859c,	// (0x0001339f) list_double_pane_cp2

0x85c0,	// (0x000133c3) list_single_2graphic_pane_cp2_ParamLimits

0x85c0,	// (0x000133c3) list_single_2graphic_pane_cp2

0x85c0,	// (0x000133c3) list_single_graphic_heading_pane_cp2_ParamLimits

0x85c0,	// (0x000133c3) list_single_graphic_heading_pane_cp2

0x85c0,	// (0x000133c3) list_single_graphic_pane_cp2_ParamLimits

0x85c0,	// (0x000133c3) list_single_graphic_pane_cp2

0x85c0,	// (0x000133c3) list_single_heading_pane_cp2_ParamLimits

0x85c0,	// (0x000133c3) list_single_heading_pane_cp2

0x85d9,	// (0x000133dc) list_single_large_graphic_pane_cp2_ParamLimits

0x85d9,	// (0x000133dc) list_single_large_graphic_pane_cp2

0x85c0,	// (0x000133c3) list_single_number_heading_pane_cp2_ParamLimits

0x85c0,	// (0x000133c3) list_single_number_heading_pane_cp2

0x85c0,	// (0x000133c3) list_single_number_pane_cp2_ParamLimits

0x85c0,	// (0x000133c3) list_single_number_pane_cp2

0x85c0,	// (0x000133c3) list_single_pane_cp2_ParamLimits

0x85c0,	// (0x000133c3) list_single_pane_cp2

0x8655,	// (0x00013458) bg_popup_sub_pane_cp22

0x4fb5,	// (0x0000fdb8) popup_side_volume_key_window_g1

0x4fdf,	// (0x0000fde2) popup_side_volume_key_window_t1

0x4ffb,	// (0x0000fdfe) volume_small_pane_cp1

0x71fd,	// (0x00012000) bg_popup_sub_pane_cp24_ParamLimits

0x71fd,	// (0x00012000) bg_popup_sub_pane_cp24

0x866b,	// (0x0001346e) fep_china_uni_candidate_pane_ParamLimits

0x866b,	// (0x0001346e) fep_china_uni_candidate_pane

0x867f,	// (0x00013482) fep_china_uni_entry_pane

0x868f,	// (0x00013492) popup_fep_china_uni_window_g1

0x86ab,	// (0x000134ae) fep_china_uni_entry_pane_g1

0x86b3,	// (0x000134b6) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0001a520) fep_china_uni_entry_pane_g

0x86bb,	// (0x000134be) fep_entry_item_pane

0x86c5,	// (0x000134c8) fep_candidate_item_pane

0x86cd,	// (0x000134d0) fep_china_uni_candidate_pane_g1

0x86d5,	// (0x000134d8) fep_china_uni_candidate_pane_g2

0x86dd,	// (0x000134e0) fep_china_uni_candidate_pane_g3

0x86e5,	// (0x000134e8) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0001a525) fep_china_uni_candidate_pane_g

0x6e7e,	// (0x00011c81) fep_entry_item_pane_g1

0x86ed,	// (0x000134f0) fep_entry_item_pane_t1_ParamLimits

0x86ed,	// (0x000134f0) fep_entry_item_pane_t1

0x8703,	// (0x00013506) fep_candidate_item_pane_t1_ParamLimits

0x8703,	// (0x00013506) fep_candidate_item_pane_t1

0x8718,	// (0x0001351b) fep_candidate_item_pane_t2_ParamLimits

0x8718,	// (0x0001351b) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0001a52e) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0001a52e) fep_candidate_item_pane_t

0x6f68,	// (0x00011d6b) list_highlight_pane_cp31_ParamLimits

0x6f68,	// (0x00011d6b) list_highlight_pane_cp31

0x872a,	// (0x0001352d) level_1_signal_lsc

0x8733,	// (0x00013536) level_2_signal_lsc

0x873c,	// (0x0001353f) level_3_signal_lsc

0x8745,	// (0x00013548) level_4_signal_lsc

0x874e,	// (0x00013551) level_5_signal_lsc

0x8757,	// (0x0001355a) level_6_signal_lsc

0x8760,	// (0x00013563) level_7_signal_lsc

0x8760,	// (0x00013563) level_1_battery_lsc

0x8769,	// (0x0001356c) level_2_battery_lsc

0x8772,	// (0x00013575) level_3_battery_lsc

0x877b,	// (0x0001357e) level_4_battery_lsc

0x8784,	// (0x00013587) level_5_battery_lsc

0x878d,	// (0x00013590) level_6_battery_lsc

0x872a,	// (0x0001352d) level_7_battery_lsc

0x8796,	// (0x00013599) scroll_handle_focus_pane_g1

0x879f,	// (0x000135a2) scroll_handle_focus_pane_g2

0x87a8,	// (0x000135ab) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0001a533) scroll_handle_focus_pane_g

0x87b1,	// (0x000135b4) list_single_2graphic_pane_g1_ParamLimits

0x87b1,	// (0x000135b4) list_single_2graphic_pane_g1

0x782a,	// (0x0001262d) list_single_2graphic_pane_g2_ParamLimits

0x782a,	// (0x0001262d) list_single_2graphic_pane_g2

0x77b0,	// (0x000125b3) list_single_2graphic_pane_g3_ParamLimits

0x77b0,	// (0x000125b3) list_single_2graphic_pane_g3

0x87bd,	// (0x000135c0) list_single_2graphic_pane_g4_ParamLimits

0x87bd,	// (0x000135c0) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0001a53a) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0001a53a) list_single_2graphic_pane_g

0x87ce,	// (0x000135d1) list_single_2graphic_pane_t1_ParamLimits

0x87ce,	// (0x000135d1) list_single_2graphic_pane_t1

0x87fc,	// (0x000135ff) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x87fc,	// (0x000135ff) list_double2_graphic_large_graphic_pane_g1

0x78cf,	// (0x000126d2) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x78cf,	// (0x000126d2) list_double2_graphic_large_graphic_pane_g2

0x78e0,	// (0x000126e3) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x78e0,	// (0x000126e3) list_double2_graphic_large_graphic_pane_g3

0x880c,	// (0x0001360f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x880c,	// (0x0001360f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0001a543) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0001a543) list_double2_graphic_large_graphic_pane_g

0x8818,	// (0x0001361b) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8818,	// (0x0001361b) list_double2_graphic_large_graphic_pane_t1

0x882e,	// (0x00013631) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x882e,	// (0x00013631) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0001a54c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0001a54c) list_double2_graphic_large_graphic_pane_t

0x897f,	// (0x00013782) popup_fast_swap_window_ParamLimits

0x897f,	// (0x00013782) popup_fast_swap_window

0x899b,	// (0x0001379e) popup_side_volume_key_window

0x89b7,	// (0x000137ba) stacon_top_pane

0x89c1,	// (0x000137c4) status_pane_ParamLimits

0x89c1,	// (0x000137c4) status_pane

0x89cf,	// (0x000137d2) status_small_pane

0x6e88,	// (0x00011c8b) control_pane

0x6e88,	// (0x00011c8b) stacon_bottom_pane

0x7c7d,	// (0x00012a80) scroll_pane_cp121

0x7c74,	// (0x00012a77) set_content_pane

0x8840,	// (0x00013643) bg_active_tab_pane_g1_cp1

0x8849,	// (0x0001364c) bg_active_tab_pane_g2_cp1

0x8852,	// (0x00013655) bg_active_tab_pane_g3_cp1

0x8840,	// (0x00013643) bg_passive_tab_pane_g1_cp1

0x8849,	// (0x0001364c) bg_passive_tab_pane_g2_cp1

0x8852,	// (0x00013655) bg_passive_tab_pane_g3_cp1

0x885b,	// (0x0001365e) bg_active_tab_pane_g1_cp2

0x8849,	// (0x0001364c) bg_active_tab_pane_g2_cp2

0x8864,	// (0x00013667) bg_active_tab_pane_g3_cp2

0x885b,	// (0x0001365e) bg_passive_tab_pane_g1_cp2

0x8849,	// (0x0001364c) bg_passive_tab_pane_g2_cp2

0x8864,	// (0x00013667) bg_passive_tab_pane_g3_cp2

0x886d,	// (0x00013670) bg_active_tab_pane_g1_cp3

0x8849,	// (0x0001364c) bg_active_tab_pane_g2_cp3

0x8876,	// (0x00013679) bg_active_tab_pane_g3_cp3

0x886d,	// (0x00013670) bg_passive_tab_pane_g1_cp3

0x8849,	// (0x0001364c) bg_passive_tab_pane_g2_cp3

0x8876,	// (0x00013679) bg_passive_tab_pane_g3_cp3

0x887f,	// (0x00013682) bg_active_tab_pane_g1_cp4

0x8849,	// (0x0001364c) bg_active_tab_pane_g2_cp4

0x888a,	// (0x0001368d) bg_active_tab_pane_g3_cp4

0x887f,	// (0x00013682) bg_passive_tab_pane_g1_cp4

0x8849,	// (0x0001364c) bg_passive_tab_pane_g2_cp4

0x888a,	// (0x0001368d) bg_passive_tab_pane_g3_cp4

0x88d3,	// (0x000136d6) bg_active_tab_pane_g1_cp5

0x8849,	// (0x0001364c) bg_active_tab_pane_g2_cp5

0x88dc,	// (0x000136df) bg_active_tab_pane_g3_cp5

0x88d3,	// (0x000136d6) bg_passive_tab_pane_g1_cp5

0x8849,	// (0x0001364c) bg_passive_tab_pane_g2_cp5

0x88dc,	// (0x000136df) bg_passive_tab_pane_g3_cp5

0x88e5,	// (0x000136e8) list_set_graphic_pane_ParamLimits

0x88e5,	// (0x000136e8) list_set_graphic_pane

0x6e88,	// (0x00011c8b) bg_set_opt_pane_cp4

0x8902,	// (0x00013705) list_set_graphic_pane_g1_ParamLimits

0x8902,	// (0x00013705) list_set_graphic_pane_g1

0x890e,	// (0x00013711) list_set_graphic_pane_g2_ParamLimits

0x890e,	// (0x00013711) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0001a551) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0001a551) list_set_graphic_pane_g

0x0009,

0xfacf,	// (0x0001a8d2) volume_small_pane_cp_g

0x8932,	// (0x00013735) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8932,	// (0x00013735) list_double2_large_graphic_pane_g1_cp2

0x893e,	// (0x00013741) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x893e,	// (0x00013741) list_double2_large_graphic_pane_g2_cp2

0x894f,	// (0x00013752) list_double2_large_graphic_pane_g3_cp2

0x8957,	// (0x0001375a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8957,	// (0x0001375a) list_double2_large_graphic_pane_t1_cp2

0x896d,	// (0x00013770) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x896d,	// (0x00013770) list_double2_large_graphic_pane_t2_cp2

0xa673,	// (0x00015476) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa673,	// (0x00015476) list_double_large_graphic_pane_g1_cp2

0xa684,	// (0x00015487) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa684,	// (0x00015487) list_double_large_graphic_pane_g2_cp2

0x8ae8,	// (0x000138eb) list_double_large_graphic_pane_g3_cp2

0xa695,	// (0x00015498) list_double_large_graphic_pane_g4_cp

0xa69d,	// (0x000154a0) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa69d,	// (0x000154a0) list_double_large_graphic_pane_t1_cp2

0xa6b4,	// (0x000154b7) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa6b4,	// (0x000154b7) list_double_large_graphic_pane_t2_cp2

0x89da,	// (0x000137dd) list_double2_graphic_pane_g1_cp2_ParamLimits

0x89da,	// (0x000137dd) list_double2_graphic_pane_g1_cp2

0x89e8,	// (0x000137eb) list_double2_graphic_pane_g2_cp2_ParamLimits

0x89e8,	// (0x000137eb) list_double2_graphic_pane_g2_cp2

0x89f9,	// (0x000137fc) list_double2_graphic_pane_g3_cp2

0x8a03,	// (0x00013806) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8a03,	// (0x00013806) list_double2_graphic_pane_t1_cp2

0x8a19,	// (0x0001381c) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8a19,	// (0x0001381c) list_double2_graphic_pane_t2_cp2

0x8a2b,	// (0x0001382e) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8a2b,	// (0x0001382e) list_single_number_heading_pane_g1_cp2

0x8a37,	// (0x0001383a) list_single_number_heading_pane_g2_cp2

0x8a3f,	// (0x00013842) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8a3f,	// (0x00013842) list_single_number_heading_pane_t1_cp2

0x8a55,	// (0x00013858) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8a55,	// (0x00013858) list_single_number_heading_pane_t2_cp2

0x8a67,	// (0x0001386a) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8a67,	// (0x0001386a) list_single_number_heading_pane_t3_cp2

0x8a2b,	// (0x0001382e) list_single_heading_pane_g1_cp2_ParamLimits

0x8a2b,	// (0x0001382e) list_single_heading_pane_g1_cp2

0x8a37,	// (0x0001383a) list_single_heading_pane_g2_cp2

0x8a3f,	// (0x00013842) list_single_heading_pane_t1_cp2_ParamLimits

0x8a3f,	// (0x00013842) list_single_heading_pane_t1_cp2

0xa47b,	// (0x0001527e) list_single_heading_pane_t2_cp2_ParamLimits

0xa47b,	// (0x0001527e) list_single_heading_pane_t2_cp2

0xa3c3,	// (0x000151c6) list_double_graphic_pane_g1_cp2_ParamLimits

0xa3c3,	// (0x000151c6) list_double_graphic_pane_g1_cp2

0xa3cf,	// (0x000151d2) list_double_graphic_pane_g2_cp2_ParamLimits

0xa3cf,	// (0x000151d2) list_double_graphic_pane_g2_cp2

0xa3de,	// (0x000151e1) list_double_graphic_pane_g3_cp2

0xa3e6,	// (0x000151e9) list_double_graphic_pane_t1_cp2_ParamLimits

0xa3e6,	// (0x000151e9) list_double_graphic_pane_t1_cp2

0xa3fc,	// (0x000151ff) list_double_graphic_pane_t2_cp2_ParamLimits

0xa3fc,	// (0x000151ff) list_double_graphic_pane_t2_cp2

0x8adc,	// (0x000138df) list_double_number_pane_g1_cp2_ParamLimits

0x8adc,	// (0x000138df) list_double_number_pane_g1_cp2

0x8ae8,	// (0x000138eb) list_double_number_pane_g2_cp2

0xa387,	// (0x0001518a) list_double_number_pane_t1_cp2_ParamLimits

0xa387,	// (0x0001518a) list_double_number_pane_t1_cp2

0xa39b,	// (0x0001519e) list_double_number_pane_t2_cp2_ParamLimits

0xa39b,	// (0x0001519e) list_double_number_pane_t2_cp2

0xa3b1,	// (0x000151b4) list_double_number_pane_t3_cp2_ParamLimits

0xa3b1,	// (0x000151b4) list_double_number_pane_t3_cp2

0xa270,	// (0x00015073) list_single_graphic_pane_g1_cp2_ParamLimits

0xa270,	// (0x00015073) list_single_graphic_pane_g1_cp2

0x8b40,	// (0x00013943) list_single_graphic_pane_g2_cp2_ParamLimits

0x8b40,	// (0x00013943) list_single_graphic_pane_g2_cp2

0x8b4c,	// (0x0001394f) list_single_graphic_pane_g3_cp2

0xa246,	// (0x00015049) list_single_graphic_pane_t1_cp2_ParamLimits

0xa246,	// (0x00015049) list_single_graphic_pane_t1_cp2

0x8b40,	// (0x00013943) list_single_number_pane_g1_cp2_ParamLimits

0x8b40,	// (0x00013943) list_single_number_pane_g1_cp2

0x8b4c,	// (0x0001394f) list_single_number_pane_g2_cp2

0xa246,	// (0x00015049) list_single_number_pane_t1_cp2_ParamLimits

0xa246,	// (0x00015049) list_single_number_pane_t1_cp2

0xa25c,	// (0x0001505f) list_single_number_pane_t2_cp2_ParamLimits

0xa25c,	// (0x0001505f) list_single_number_pane_t2_cp2

0x893e,	// (0x00013741) list_double2_pane_g1_cp2_ParamLimits

0x893e,	// (0x00013741) list_double2_pane_g1_cp2

0x894f,	// (0x00013752) list_double2_pane_g2_cp2

0x8ab4,	// (0x000138b7) list_double2_pane_t1_cp2_ParamLimits

0x8ab4,	// (0x000138b7) list_double2_pane_t1_cp2

0x8aca,	// (0x000138cd) list_double2_pane_t2_cp2_ParamLimits

0x8aca,	// (0x000138cd) list_double2_pane_t2_cp2

0x8adc,	// (0x000138df) list_double_pane_g1_cp2_ParamLimits

0x8adc,	// (0x000138df) list_double_pane_g1_cp2

0x8ae8,	// (0x000138eb) list_double_pane_g2_cp2

0x8af0,	// (0x000138f3) list_double_pane_t1_cp2_ParamLimits

0x8af0,	// (0x000138f3) list_double_pane_t1_cp2

0x8b06,	// (0x00013909) list_double_pane_t2_cp2_ParamLimits

0x8b06,	// (0x00013909) list_double_pane_t2_cp2

0x8b30,	// (0x00013933) list_single_pane_cp2_g3

0x8b40,	// (0x00013943) list_single_pane_g1_cp2_ParamLimits

0x8b40,	// (0x00013943) list_single_pane_g1_cp2

0x8b4c,	// (0x0001394f) list_single_pane_g2_cp2

0x8b54,	// (0x00013957) list_single_pane_t1_cp2_ParamLimits

0x8b54,	// (0x00013957) list_single_pane_t1_cp2

0x8b6c,	// (0x0001396f) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8b6c,	// (0x0001396f) list_single_large_graphic_pane_g1_cp2

0x8b78,	// (0x0001397b) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8b78,	// (0x0001397b) list_single_large_graphic_pane_g2_cp2

0x8b84,	// (0x00013987) list_single_large_graphic_pane_g3_cp2

0x8b8c,	// (0x0001398f) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8b8c,	// (0x0001398f) list_single_large_graphic_pane_g4_cp1

0x8ba6,	// (0x000139a9) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8ba6,	// (0x000139a9) list_single_large_graphic_pane_t1_cp2

0xa206,	// (0x00015009) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa206,	// (0x00015009) list_single_graphic_heading_pane_g1_cp2

0xa1d3,	// (0x00014fd6) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa1d3,	// (0x00014fd6) list_single_graphic_heading_pane_g4_cp2

0x8b4c,	// (0x0001394f) list_single_graphic_heading_pane_g5_cp2

0xa212,	// (0x00015015) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa212,	// (0x00015015) list_single_graphic_heading_pane_t1_cp2

0xa228,	// (0x0001502b) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa228,	// (0x0001502b) list_single_graphic_heading_pane_t2_cp2

0xa1c7,	// (0x00014fca) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa1c7,	// (0x00014fca) list_single_2graphic_pane_g1_cp2

0xa1d3,	// (0x00014fd6) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa1d3,	// (0x00014fd6) list_single_2graphic_pane_g2_cp2

0x8b4c,	// (0x0001394f) list_single_2graphic_pane_g3_cp2

0xa1e4,	// (0x00014fe7) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa1e4,	// (0x00014fe7) list_single_2graphic_pane_g4_cp2

0xa1f0,	// (0x00014ff3) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa1f0,	// (0x00014ff3) list_single_2graphic_pane_t1_cp2

0x6e7e,	// (0x00011c81) list_highlight_pane_g10_cp1

0x9d9f,	// (0x00014ba2) list_highlight_pane_g1_cp1

0x9da7,	// (0x00014baa) list_highlight_pane_g2_cp1

0x9daf,	// (0x00014bb2) list_highlight_pane_g3_cp1

0x9db7,	// (0x00014bba) list_highlight_pane_g4_cp1

0x9dbf,	// (0x00014bc2) list_highlight_pane_g5_cp1

0x9dc7,	// (0x00014bca) list_highlight_pane_g6_cp1

0x9dcf,	// (0x00014bd2) list_highlight_pane_g7_cp1

0x9dd7,	// (0x00014bda) list_highlight_pane_g8_cp1

0x9ddf,	// (0x00014be2) list_highlight_pane_g9_cp1

0x9cbf,	// (0x00014ac2) form_field_slider_pane_t3

0x9ccd,	// (0x00014ad0) form_field_slider_pane_t4

0x9cdb,	// (0x00014ade) slider_form_pane_ParamLimits

0x9cdb,	// (0x00014ade) slider_form_pane

0x6e88,	// (0x00011c8b) control_abbreviations

0x6e88,	// (0x00011c8b) control_conventions

0x6e88,	// (0x00011c8b) control_definitions

0x6e88,	// (0x00011c8b) format_table_attribute

0xa4c5,	// (0x000152c8) bg_popup_preview_window_pane_g9

0x6e88,	// (0x00011c8b) format_table_data2

0x6e88,	// (0x00011c8b) format_table_data3

0x6e88,	// (0x00011c8b) format_table_data_example

0x0008,

0x6e88,	// (0x00011c8b) intro_purpose

0xf8ea,	// (0x0001a6ed) bg_popup_preview_window_pane_g

0x6e88,	// (0x00011c8b) texts_category

0x6e88,	// (0x00011c8b) texts_graphics

0x8bbc,	// (0x000139bf) text_digital

0x8bcb,	// (0x000139ce) text_primary

0x8bda,	// (0x000139dd) text_primary_small

0x8be9,	// (0x000139ec) text_secondary

0x8bf8,	// (0x000139fb) text_title

0xacf1,	// (0x00015af4) bg_passive_tab_pane_g1_cp3_srt

0x8849,	// (0x0001364c) bg_passive_tab_pane_g2_cp3_srt

0xacfa,	// (0x00015afd) bg_passive_tab_pane_g3_cp3_srt

0x6f68,	// (0x00011d6b) bg_active_tab_pane_cp3_srt_ParamLimits

0x6f68,	// (0x00011d6b) bg_active_tab_pane_cp3_srt

0xad03,	// (0x00015b06) tabs_4_active_pane_srt_g1

0xad0b,	// (0x00015b0e) tabs_4_active_pane_srt_t1_ParamLimits

0xad0b,	// (0x00015b0e) tabs_4_active_pane_srt_t1

0xacf1,	// (0x00015af4) bg_active_tab_pane_g1_cp3_copy1

0x8849,	// (0x0001364c) bg_active_tab_pane_g2_cp3_copy1

0xacfa,	// (0x00015afd) bg_active_tab_pane_g3_cp3_copy1

0x6f68,	// (0x00011d6b) tabs_2_long_active_pane_srt_ParamLimits

0x6f68,	// (0x00011d6b) tabs_2_long_active_pane_srt

0x6f68,	// (0x00011d6b) tabs_2_long_passive_pane_srt_ParamLimits

0x6f68,	// (0x00011d6b) tabs_2_long_passive_pane_srt

0x80ca,	// (0x00012ecd) bg_passive_tab_pane_cp4_srt_ParamLimits

0x80ca,	// (0x00012ecd) bg_passive_tab_pane_cp4_srt

0xa91c,	// (0x0001571f) bg_passive_tab_pane_g1_cp4_srt

0x8849,	// (0x0001364c) bg_passive_tab_pane_g2_cp4_srt

0xa925,	// (0x00015728) bg_passive_tab_pane_g3_cp4_srt

0x80a9,	// (0x00012eac) bg_active_tab_pane_cp4_srt_ParamLimits

0x80a9,	// (0x00012eac) bg_active_tab_pane_cp4_srt

0xa92e,	// (0x00015731) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa92e,	// (0x00015731) tabs_2_long_active_pane_srt_t1

0xa91c,	// (0x0001571f) bg_active_tab_pane_g1_cp4_srt

0x8849,	// (0x0001364c) bg_active_tab_pane_g2_cp4_srt

0xa925,	// (0x00015728) bg_active_tab_pane_g3_cp4_srt

0x71fd,	// (0x00012000) tabs_3_long_active_pane_srt_ParamLimits

0x71fd,	// (0x00012000) tabs_3_long_active_pane_srt

0x71fd,	// (0x00012000) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x71fd,	// (0x00012000) tabs_3_long_passive_pane_cp_srt

0x71fd,	// (0x00012000) tabs_3_long_passive_pane_srt_ParamLimits

0x71fd,	// (0x00012000) tabs_3_long_passive_pane_srt

0x80ca,	// (0x00012ecd) bg_passive_tab_pane_cp5_srt_ParamLimits

0x80ca,	// (0x00012ecd) bg_passive_tab_pane_cp5_srt

0x88d3,	// (0x000136d6) bg_passive_tab_pane_g1_cp5_srt

0x8849,	// (0x0001364c) bg_passive_tab_pane_g2_cp5_srt

0x88dc,	// (0x000136df) bg_passive_tab_pane_g3_cp5_srt

0x80a9,	// (0x00012eac) bg_active_tab_pane_cp5_srt_ParamLimits

0x80a9,	// (0x00012eac) bg_active_tab_pane_cp5_srt

0xa90a,	// (0x0001570d) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa90a,	// (0x0001570d) tabs_3_long_active_pane_srt_t1

0x88d3,	// (0x000136d6) bg_active_tab_pane_g1_cp5_srt

0x8849,	// (0x0001364c) bg_active_tab_pane_g2_cp5_srt

0x88dc,	// (0x000136df) bg_active_tab_pane_g3_cp5_srt

0xa8fc,	// (0x000156ff) navi_text_pane_srt_t1

0xa8f4,	// (0x000156f7) navi_icon_pane_srt_g1

0x8dc1,	// (0x00013bc4) midp_editing_number_pane_srt

0x8c07,	// (0x00013a0a) midp_ticker_pane_srt

0x8dc9,	// (0x00013bcc) midp_ticker_pane_srt_g1

0x8dd1,	// (0x00013bd4) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0001a570) midp_ticker_pane_srt_g

0x8dd9,	// (0x00013bdc) midp_ticker_pane_srt_t1

0xa8e5,	// (0x000156e8) midp_editing_number_pane_t1_copy1

0x80ca,	// (0x00012ecd) listscroll_midp_pane

0x80ca,	// (0x00012ecd) midp_form_pane

0x8c73,	// (0x00013a76) midp_info_popup_window_ParamLimits

0x8c73,	// (0x00013a76) midp_info_popup_window

0x7f92,	// (0x00012d95) bg_popup_sub_pane_cp50_ParamLimits

0x7f92,	// (0x00012d95) bg_popup_sub_pane_cp50

0x99d7,	// (0x000147da) listscroll_midp_info_pane_ParamLimits

0x99d7,	// (0x000147da) listscroll_midp_info_pane

0x99bf,	// (0x000147c2) listscroll_form_midp_pane_ParamLimits

0x99bf,	// (0x000147c2) listscroll_form_midp_pane

0x99cb,	// (0x000147ce) scroll_bar_cp050

0x999f,	// (0x000147a2) list_midp_pane

0xba5e,	// (0x00016861) signal_pane_g2_cp

0x98d9,	// (0x000146dc) listscroll_midp_info_pane_t1_ParamLimits

0x98d9,	// (0x000146dc) listscroll_midp_info_pane_t1

0x98f1,	// (0x000146f4) listscroll_midp_info_pane_t2_ParamLimits

0x98f1,	// (0x000146f4) listscroll_midp_info_pane_t2

0x992f,	// (0x00014732) listscroll_midp_info_pane_t3_ParamLimits

0x992f,	// (0x00014732) listscroll_midp_info_pane_t3

0x9969,	// (0x0001476c) listscroll_midp_info_pane_t4_ParamLimits

0x9969,	// (0x0001476c) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0001a628) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0001a628) listscroll_midp_info_pane_t

0x8056,	// (0x00012e59) scroll_pane_cp21

0x9877,	// (0x0001467a) form_midp_field_choice_group_pane

0x9880,	// (0x00014683) form_midp_field_text_pane

0x98bf,	// (0x000146c2) form_midp_field_time_pane

0x98c7,	// (0x000146ca) form_midp_gauge_slider_pane

0x98d0,	// (0x000146d3) form_midp_gauge_wait_pane

0x6e88,	// (0x00011c8b) form_midp_image_pane

0x9848,	// (0x0001464b) list_single_midp_pane_ParamLimits

0x9848,	// (0x0001464b) list_single_midp_pane

0x9800,	// (0x00014603) form_midp_field_text_pane_t1

0x95bb,	// (0x000143be) input_focus_pane_cp050

0x9837,	// (0x0001463a) list_midp_form_text_pane

0x97cf,	// (0x000145d2) form_midp_field_choice_group_pane_t1

0x97dd,	// (0x000145e0) input_focus_pane_cp051

0x97f1,	// (0x000145f4) list_midp_choice_pane

0x6e88,	// (0x00011c8b) status_idle_pane

0x97b3,	// (0x000145b6) form_midp_field_time_pane_t1

0x6e7e,	// (0x00011c81) wait_anim_pane_g2_copy1

0x97c1,	// (0x000145c4) form_midp_field_time_pane_t2

0x0001,

0x8d21,	// (0x00013b24) aid_navinavi_width_2_pane

0xf820,	// (0x0001a623) form_midp_field_time_pane_t

0x6e88,	// (0x00011c8b) input_focus_pane_cp052

0x6e88,	// (0x00011c8b) bg_input_focus_pane_cp040

0x9773,	// (0x00014576) form_midp_gauge_slider_pane_t1

0x9781,	// (0x00014584) form_midp_gauge_slider_pane_t2

0x978f,	// (0x00014592) form_midp_gauge_slider_pane_t3

0x979d,	// (0x000145a0) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0001a61a) form_midp_gauge_slider_pane_t

0x97ab,	// (0x000145ae) form_midp_slider_pane

0x6f68,	// (0x00011d6b) bg_input_focus_pane_cp041_ParamLimits

0x6f68,	// (0x00011d6b) bg_input_focus_pane_cp041

0x9740,	// (0x00014543) form_midp_gauge_wait_pane_t1_ParamLimits

0x9740,	// (0x00014543) form_midp_gauge_wait_pane_t1

0x9752,	// (0x00014555) form_midp_gauge_wait_pane_t2_ParamLimits

0x9752,	// (0x00014555) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0001a615) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0001a615) form_midp_gauge_wait_pane_t

0x9764,	// (0x00014567) form_midp_wait_pane_ParamLimits

0x9764,	// (0x00014567) form_midp_wait_pane

0x970a,	// (0x0001450d) form_midp_image_pane_g1

0x9713,	// (0x00014516) form_midp_image_pane_t1

0x9722,	// (0x00014525) form_midp_image_pane_t2

0x9731,	// (0x00014534) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0001a60e) form_midp_image_pane_t

0x96f2,	// (0x000144f5) list_single_midp_pane_g1

0x96fb,	// (0x000144fe) list_single_midp_pane_t1

0x96ca,	// (0x000144cd) list_midp_form_item_pane_ParamLimits

0x96ca,	// (0x000144cd) list_midp_form_item_pane

0x8cc9,	// (0x00013acc) list_midp_form_item_pane_t1

0x8cd8,	// (0x00013adb) midp_ticker_pane_g1

0x8ce4,	// (0x00013ae7) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0001a556) midp_ticker_pane_g

0x8cf0,	// (0x00013af3) midp_ticker_pane_t1

0xab69,	// (0x0001596c) midp_editing_number_pane_t1

0xab47,	// (0x0001594a) midp_editing_number_pane

0xab56,	// (0x00015959) midp_ticker_pane

0xa8ad,	// (0x000156b0) ai_message_heading_pane

0x6e88,	// (0x00011c8b) bg_popup_window_pane_cp14

0xa8b5,	// (0x000156b8) listscroll_ai_message_pane

0xa837,	// (0x0001563a) ai_message_heading_pane_g1_ParamLimits

0xa837,	// (0x0001563a) ai_message_heading_pane_g1

0xa843,	// (0x00015646) ai_message_heading_pane_g2_ParamLimits

0xa843,	// (0x00015646) ai_message_heading_pane_g2

0xa84f,	// (0x00015652) ai_message_heading_pane_g3_ParamLimits

0xa84f,	// (0x00015652) ai_message_heading_pane_g3

0xa85b,	// (0x0001565e) ai_message_heading_pane_g4_ParamLimits

0xa85b,	// (0x0001565e) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0001a74f) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0001a74f) ai_message_heading_pane_g

0xa867,	// (0x0001566a) ai_message_heading_pane_t1_ParamLimits

0xa867,	// (0x0001566a) ai_message_heading_pane_t1

0xa881,	// (0x00015684) ai_message_heading_pane_t2_ParamLimits

0xa881,	// (0x00015684) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0001a758) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0001a758) ai_message_heading_pane_t

0xa893,	// (0x00015696) bg_popup_heading_pane_cp1_ParamLimits

0xa893,	// (0x00015696) bg_popup_heading_pane_cp1

0xa825,	// (0x00015628) list_ai_message_pane_ParamLimits

0xa825,	// (0x00015628) list_ai_message_pane

0x8056,	// (0x00012e59) scroll_pane_cp10

0xa7c1,	// (0x000155c4) list_ai_message_pane_g1

0xa7c9,	// (0x000155cc) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0001a72c) list_ai_message_pane_g

0xa7d1,	// (0x000155d4) list_ai_message_pane_t1_ParamLimits

0xa7d1,	// (0x000155d4) list_ai_message_pane_t1

0xa7e6,	// (0x000155e9) list_ai_message_pane_t2_ParamLimits

0xa7e6,	// (0x000155e9) list_ai_message_pane_t2

0xa7fb,	// (0x000155fe) list_ai_message_pane_t3_ParamLimits

0xa7fb,	// (0x000155fe) list_ai_message_pane_t3

0xa810,	// (0x00015613) list_ai_message_pane_t4_ParamLimits

0xa810,	// (0x00015613) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0001a731) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0001a731) list_ai_message_pane_t

0xa7ac,	// (0x000155af) cell_ai_soft_ind_pane_ParamLimits

0xa7ac,	// (0x000155af) cell_ai_soft_ind_pane

0x8d02,	// (0x00013b05) cell_ai_soft_ind_pane_g1_ParamLimits

0x8d02,	// (0x00013b05) cell_ai_soft_ind_pane_g1

0x6e88,	// (0x00011c8b) grid_highlight_cp1

0x8d0f,	// (0x00013b12) text_secondary_cp56_ParamLimits

0x8d0f,	// (0x00013b12) text_secondary_cp56

0xa781,	// (0x00015584) example_general_pane_ParamLimits

0xa781,	// (0x00015584) example_general_pane

0xa78d,	// (0x00015590) example_parent_pane_g1_ParamLimits

0xa78d,	// (0x00015590) example_parent_pane_g1

0xa799,	// (0x0001559c) example_parent_pane_t1_ParamLimits

0xa799,	// (0x0001559c) example_parent_pane_t1

0x56f8,	// (0x000104fb) popup_preview_text_window_ParamLimits

0x56f8,	// (0x000104fb) popup_preview_text_window

0x8b38,	// (0x0001393b) list_single_pane_cp2_g4

0x72b3,	// (0x000120b6) bg_popup_preview_window_pane_ParamLimits

0x72b3,	// (0x000120b6) bg_popup_preview_window_pane

0xa4cd,	// (0x000152d0) popup_preview_text_window_t1_ParamLimits

0xa4cd,	// (0x000152d0) popup_preview_text_window_t1

0xa4eb,	// (0x000152ee) popup_preview_text_window_t2_ParamLimits

0xa4eb,	// (0x000152ee) popup_preview_text_window_t2

0xa534,	// (0x00015337) popup_preview_text_window_t3_ParamLimits

0xa534,	// (0x00015337) popup_preview_text_window_t3

0xa579,	// (0x0001537c) popup_preview_text_window_t4_ParamLimits

0xa579,	// (0x0001537c) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0001a700) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0001a700) popup_preview_text_window_t

0xa5f7,	// (0x000153fa) scroll_pane_cp11

0x948d,	// (0x00014290) bg_popup_preview_window_pane_g1

0xa48d,	// (0x00015290) bg_popup_preview_window_pane_g2

0xa495,	// (0x00015298) bg_popup_preview_window_pane_g3

0xa49d,	// (0x000152a0) bg_popup_preview_window_pane_g4

0xa4a5,	// (0x000152a8) bg_popup_preview_window_pane_g5

0xa4ad,	// (0x000152b0) bg_popup_preview_window_pane_g6

0xa4b5,	// (0x000152b8) bg_popup_preview_window_pane_g7

0xa4bd,	// (0x000152c0) bg_popup_preview_window_pane_g8

0x48e8,	// (0x0000f6eb) aid_popup_width_pane

0x56d6,	// (0x000104d9) popup_midp_note_alarm_window_ParamLimits

0x56d6,	// (0x000104d9) popup_midp_note_alarm_window

0x7d3e,	// (0x00012b41) data_form_pane_ParamLimits

0x7d4a,	// (0x00012b4d) form_field_data_pane_g1

0x7d54,	// (0x00012b57) form_field_data_pane_t1_ParamLimits

0x7d6c,	// (0x00012b6f) input_focus_pane_ParamLimits

0x7d7a,	// (0x00012b7d) data_form_wide_pane_ParamLimits

0x7d86,	// (0x00012b89) form_field_data_wide_pane_g1

0x7da6,	// (0x00012ba9) form_field_data_wide_pane_t1_ParamLimits

0x7562,	// (0x00012365) input_focus_pane_cp6_ParamLimits

0x8003,	// (0x00012e06) input_popup_find_pane_g1_ParamLimits

0x8003,	// (0x00012e06) input_popup_find_pane_g1

0x4e64,	// (0x0000fc67) aid_navi_side_left_pane

0x4e79,	// (0x0000fc7c) aid_navi_side_right_pane

0x9e9a,	// (0x00014c9d) bg_popup_window_pane_cp30_ParamLimits

0x9e9a,	// (0x00014c9d) bg_popup_window_pane_cp30

0x9f14,	// (0x00014d17) popup_midp_note_alarm_window_g1_ParamLimits

0x9f14,	// (0x00014d17) popup_midp_note_alarm_window_g1

0x9f44,	// (0x00014d47) popup_midp_note_alarm_window_t1_ParamLimits

0x9f44,	// (0x00014d47) popup_midp_note_alarm_window_t1

0x9fe5,	// (0x00014de8) popup_midp_note_alarm_window_t2_ParamLimits

0x9fe5,	// (0x00014de8) popup_midp_note_alarm_window_t2

0xa093,	// (0x00014e96) popup_midp_note_alarm_window_t3_ParamLimits

0xa093,	// (0x00014e96) popup_midp_note_alarm_window_t3

0xa0c5,	// (0x00014ec8) popup_midp_note_alarm_window_t4_ParamLimits

0xa0c5,	// (0x00014ec8) popup_midp_note_alarm_window_t4

0xa0eb,	// (0x00014eee) popup_midp_note_alarm_window_t5_ParamLimits

0xa0eb,	// (0x00014eee) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0001a69d) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0001a69d) popup_midp_note_alarm_window_t

0xa197,	// (0x00014f9a) wait_bar_pane_cp1_ParamLimits

0xa197,	// (0x00014f9a) wait_bar_pane_cp1

0x6e88,	// (0x00011c8b) wait_anim_pane_copy1

0x6e88,	// (0x00011c8b) wait_border_pane_copy1

0x9b80,	// (0x00014983) wait_border_pane_g1_copy1

0x7dbd,	// (0x00012bc0) form_field_popup_pane_g1

0x7dc5,	// (0x00012bc8) form_field_popup_pane_t1_ParamLimits

0x7d6c,	// (0x00012b6f) input_focus_pane_cp7_ParamLimits

0x7ddd,	// (0x00012be0) list_form_pane_ParamLimits

0x7de9,	// (0x00012bec) form_field_popup_wide_pane_g1

0x7df1,	// (0x00012bf4) form_field_popup_wide_pane_t1_ParamLimits

0x7d6c,	// (0x00012b6f) input_focus_pane_cp8_ParamLimits

0x7e06,	// (0x00012c09) list_form_wide_pane_ParamLimits

0xad89,	// (0x00015b8c) aid_size_cell_graphic_pane

0x7edd,	// (0x00012ce0) data_form_pane_t1_ParamLimits

0xab14,	// (0x00015917) data_form_wide_pane_t1_ParamLimits

0x902c,	// (0x00013e2f) bg_status_flat_pane

0x6ec8,	// (0x00011ccb) title_pane_t1_ParamLimits

0x6f30,	// (0x00011d33) title_pane_t2_ParamLimits

0x6f56,	// (0x00011d59) title_pane_t3_ParamLimits

0xf557,	// (0x0001a35a) title_pane_t_ParamLimits

0x84d1,	// (0x000132d4) level_1_signal_ParamLimits

0x84e3,	// (0x000132e6) level_2_signal_ParamLimits

0x84f6,	// (0x000132f9) level_3_signal_ParamLimits

0x8509,	// (0x0001330c) level_4_signal_ParamLimits

0x851c,	// (0x0001331f) level_5_signal_ParamLimits

0x852f,	// (0x00013332) level_6_signal_ParamLimits

0x8542,	// (0x00013345) level_7_signal_ParamLimits

0x84d1,	// (0x000132d4) level_1_battery_ParamLimits

0x84e3,	// (0x000132e6) level_2_battery_ParamLimits

0x84f6,	// (0x000132f9) level_3_battery_ParamLimits

0x8509,	// (0x0001330c) level_4_battery_ParamLimits

0x851c,	// (0x0001331f) level_5_battery_ParamLimits

0x852f,	// (0x00013332) level_6_battery_ParamLimits

0x8542,	// (0x00013345) level_7_battery_ParamLimits

0x9d9f,	// (0x00014ba2) bg_status_flat_pane_g1

0x9da7,	// (0x00014baa) bg_status_flat_pane_g2

0x9daf,	// (0x00014bb2) bg_status_flat_pane_g3

0x9db7,	// (0x00014bba) bg_status_flat_pane_g4

0x9dbf,	// (0x00014bc2) bg_status_flat_pane_g5

0x9dc7,	// (0x00014bca) bg_status_flat_pane_g6

0x9dcf,	// (0x00014bd2) bg_status_flat_pane_g7

0x6f7e,	// (0x00011d81) tabs_3_active_pane_t1_ParamLimits

0x6f7e,	// (0x00011d81) tabs_3_passive_pane_t1_ParamLimits

0x6f98,	// (0x00011d9b) tabs_4_active_pane_t1_ParamLimits

0x6f98,	// (0x00011d9b) tabs_4_1_passive_pane_t1_ParamLimits

0x8097,	// (0x00012e9a) tabs_2_active_pane_t1_ParamLimits

0x8097,	// (0x00012e9a) tabs_2_passive_pane_t1_ParamLimits

0x80a9,	// (0x00012eac) bg_active_tab_pane_cp4_ParamLimits

0x80b7,	// (0x00012eba) tabs_2_long_active_pane_t1_ParamLimits

0x80ca,	// (0x00012ecd) bg_passive_tab_pane_cp4_ParamLimits

0x5a1d,	// (0x00010820) list_single_midp_graphic_pane_t1_ParamLimits

0x80a9,	// (0x00012eac) bg_active_tab_pane_cp5_ParamLimits

0x80d6,	// (0x00012ed9) tabs_3_long_active_pane_t1_ParamLimits

0x80ca,	// (0x00012ecd) bg_passive_tab_pane_cp5_ParamLimits

0x5a1d,	// (0x00010820) list_single_midp_graphic_pane_t1

0x902c,	// (0x00013e2f) bg_status_flat_pane_ParamLimits

0x90ef,	// (0x00013ef2) indicator_pane_cp2_ParamLimits

0x90ef,	// (0x00013ef2) indicator_pane_cp2

0x921a,	// (0x0001401d) navi_pane_srt_ParamLimits

0x921a,	// (0x0001401d) navi_pane_srt

0x923e,	// (0x00014041) popup_clock_digital_analogue_window_cp1

0x705f,	// (0x00011e62) indicator_pane_t1

0x8c07,	// (0x00013a0a) copy_highlight_pane

0x8c07,	// (0x00013a0a) cursor_graphics_pane

0x8c07,	// (0x00013a0a) graphic_within_text_pane

0x8c07,	// (0x00013a0a) link_highlight_pane

0xa5ba,	// (0x000153bd) popup_preview_text_window_t5_ParamLimits

0xa5ba,	// (0x000153bd) popup_preview_text_window_t5

0x8d29,	// (0x00013b2c) cursor_digital_pane

0x8d29,	// (0x00013b2c) cursor_primary_pane

0x8d3a,	// (0x00013b3d) cursor_primary_small_pane

0x8d42,	// (0x00013b45) cursor_secondary_pane

0x8d4a,	// (0x00013b4d) cursor_title_pane

0x8d29,	// (0x00013b2c) link_highlight_digital_pane

0x8d31,	// (0x00013b34) link_highlight_primary_pane

0x8d3a,	// (0x00013b3d) link_highlight_primary_small_pane

0x8d42,	// (0x00013b45) link_highlight_secondary_pane

0x8d4a,	// (0x00013b4d) link_highlight_title_pane

0x8d29,	// (0x00013b2c) copy_highlight_digital_pane

0x8d29,	// (0x00013b2c) copy_highlight_primary_pane

0x8d3a,	// (0x00013b3d) copy_highlight_primary_small_pane

0x8d42,	// (0x00013b45) copy_highlight_secondary_pane

0x8d4a,	// (0x00013b4d) copy_highlight_title_pane

0x8d42,	// (0x00013b45) graphic_text_digital_pane

0x9e3d,	// (0x00014c40) graphic_text_primary_pane

0x9e46,	// (0x00014c49) graphic_text_primary_small_pane

0x8d3a,	// (0x00013b3d) graphic_text_secondary_pane

0x8d29,	// (0x00013b2c) graphic_text_title_pane

0x8d52,	// (0x00013b55) cursor_primary_pane_g1

0x9e2f,	// (0x00014c32) cursor_text_primary_t1

0x9e17,	// (0x00014c1a) cursor_primary_small_pane_g1

0x9e21,	// (0x00014c24) cursor_text_primary_small_t1

0x9dff,	// (0x00014c02) cursor_primary_small_pane_g1_copy1

0x9e09,	// (0x00014c0c) cursor_text_primary_small_t1_copy1

0x9de7,	// (0x00014bea) cursor_text_title_t1

0x9df5,	// (0x00014bf8) cursor_title_pane_g1

0x8d52,	// (0x00013b55) cursor_digital_pane_g1

0x8d5c,	// (0x00013b5f) cursor_text_digital_t1

0x8d81,	// (0x00013b84) link_highlight_primary_pane_g1

0x9d90,	// (0x00014b93) link_highlight_primary_pane_t1

0x8d6a,	// (0x00013b6d) link_highlight_primary_small_pane_g1

0x8d72,	// (0x00013b75) link_highlight_primary_small_pane_t1

0x8d81,	// (0x00013b84) link_highlight_secondary_pane_g1

0x8d89,	// (0x00013b8c) link_highlight_secondary_pane_t1

0x9d04,	// (0x00014b07) link_highlight_title_pane_g1

0x9d0c,	// (0x00014b0f) link_highlight_title_pane_t1

0x9ced,	// (0x00014af0) link_highlight_digital_pane_g1

0x9cf5,	// (0x00014af8) link_highlight_digital_pane_t1

0x9bc5,	// (0x000149c8) copy_highlight_primary_pane_g1

0x9bcd,	// (0x000149d0) copy_highlight_primary_pane_t1

0x9b9f,	// (0x000149a2) copy_highlight_primary_small_pane_g1

0x9bb6,	// (0x000149b9) copy_highlight_primary_small_pane_t1

0x8d98,	// (0x00013b9b) copy_highlight_secondary_pane_g1

0x8da0,	// (0x00013ba3) copy_highlight_secondary_pane_t1

0x9b9f,	// (0x000149a2) copy_highlight_title_pane_g1

0x9ba7,	// (0x000149aa) copy_highlight_title_pane_t1

0x9bc5,	// (0x000149c8) copy_highlight_digital_pane_g1

0xaf54,	// (0x00015d57) copy_highlight_digital_pane_t1

0xaea8,	// (0x00015cab) graphic_text_primary_pane_g1

0xaf38,	// (0x00015d3b) graphic_text_primary_pane_t1

0xaf46,	// (0x00015d49) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0001a7cc) graphic_text_primary_pane_t

0xaf14,	// (0x00015d17) graphic_text_primary_small_pane_g1

0xaf1c,	// (0x00015d1f) graphic_text_primary_small_pane_t1

0xaf2a,	// (0x00015d2d) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0001a7c7) graphic_text_primary_small_pane_t

0xaef0,	// (0x00015cf3) graphic_text_secondary_pane_g1

0xaef8,	// (0x00015cfb) graphic_text_secondary_pane_t1

0xaf06,	// (0x00015d09) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0001a7c2) graphic_text_secondary_pane_t

0xaecc,	// (0x00015ccf) graphic_text_title_pane_g1

0xaed4,	// (0x00015cd7) graphic_text_title_pane_t1

0xaee2,	// (0x00015ce5) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0001a7bd) graphic_text_title_pane_t

0xaea8,	// (0x00015cab) graphic_text_digital_pane_g1

0xaeb0,	// (0x00015cb3) graphic_text_digital_pane_t1

0xaebe,	// (0x00015cc1) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0001a7b8) graphic_text_digital_pane_t

0x6f68,	// (0x00011d6b) navi_icon_pane_srt_ParamLimits

0x6f68,	// (0x00011d6b) navi_icon_pane_srt

0x6e88,	// (0x00011c8b) navi_midp_pane_srt

0x6e88,	// (0x00011c8b) navi_navi_pane_srt

0x6f68,	// (0x00011d6b) navi_text_pane_srt_ParamLimits

0x6f68,	// (0x00011d6b) navi_text_pane_srt

0xae73,	// (0x00015c76) navi_navi_icon_text_pane_srt

0xae7b,	// (0x00015c7e) navi_navi_pane_srt_g1_ParamLimits

0xae7b,	// (0x00015c7e) navi_navi_pane_srt_g1

0xae8d,	// (0x00015c90) navi_navi_pane_srt_g2_ParamLimits

0xae8d,	// (0x00015c90) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0001a7b3) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0001a7b3) navi_navi_pane_srt_g

0xae9f,	// (0x00015ca2) navi_navi_tabs_pane_srt

0xae73,	// (0x00015c76) navi_navi_text_pane_srt

0xae73,	// (0x00015c76) navi_navi_volume_pane_srt

0xae64,	// (0x00015c67) navi_navi_text_pane_srt_t1

0x5d97,	// (0x00010b9a) navi_navi_volume_pane_srt_g1

0x5d9f,	// (0x00010ba2) volume_small_pane_srt_ParamLimits

0x5d9f,	// (0x00010ba2) volume_small_pane_srt

0x5144,	// (0x0000ff47) volume_small_pane_srt_g1_ParamLimits

0x5144,	// (0x0000ff47) volume_small_pane_srt_g1

0x5154,	// (0x0000ff57) volume_small_pane_srt_g2_ParamLimits

0x5154,	// (0x0000ff57) volume_small_pane_srt_g2

0x5165,	// (0x0000ff68) volume_small_pane_srt_g3_ParamLimits

0x5165,	// (0x0000ff68) volume_small_pane_srt_g3

0x5176,	// (0x0000ff79) volume_small_pane_srt_g4_ParamLimits

0x5176,	// (0x0000ff79) volume_small_pane_srt_g4

0x5187,	// (0x0000ff8a) volume_small_pane_srt_g5_ParamLimits

0x5187,	// (0x0000ff8a) volume_small_pane_srt_g5

0x5198,	// (0x0000ff9b) volume_small_pane_srt_g6_ParamLimits

0x5198,	// (0x0000ff9b) volume_small_pane_srt_g6

0x51a9,	// (0x0000ffac) volume_small_pane_srt_g7_ParamLimits

0x51a9,	// (0x0000ffac) volume_small_pane_srt_g7

0x51ba,	// (0x0000ffbd) volume_small_pane_srt_g8_ParamLimits

0x51ba,	// (0x0000ffbd) volume_small_pane_srt_g8

0x51cb,	// (0x0000ffce) volume_small_pane_srt_g9_ParamLimits

0x51cb,	// (0x0000ffce) volume_small_pane_srt_g9

0x51dc,	// (0x0000ffdf) volume_small_pane_srt_g10_ParamLimits

0x51dc,	// (0x0000ffdf) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0001a55b) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0001a55b) volume_small_pane_srt_g

0x735c,	// (0x0001215f) query_popup_data_pane_cp2

0xae4a,	// (0x00015c4d) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xae4a,	// (0x00015c4d) navi_navi_icon_text_pane_srt_t1

0x9e3d,	// (0x00014c40) navi_tabs_2_long_pane_srt

0x9e3d,	// (0x00014c40) navi_tabs_2_pane_srt

0x9e3d,	// (0x00014c40) navi_tabs_3_long_pane_srt

0x9e3d,	// (0x00014c40) navi_tabs_3_pane_srt

0x9e3d,	// (0x00014c40) navi_tabs_4_pane_srt

0x5d77,	// (0x00010b7a) tabs_2_active_pane_srt_ParamLimits

0x5d77,	// (0x00010b7a) tabs_2_active_pane_srt

0x5d87,	// (0x00010b8a) tabs_2_passive_pane_srt_ParamLimits

0x5d87,	// (0x00010b8a) tabs_2_passive_pane_srt

0x8f4d,	// (0x00013d50) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8f4d,	// (0x00013d50) bg_passive_tab_pane_cp1_srt

0xae16,	// (0x00015c19) bg_passive_tab_pane_g1_cp1_srt

0x8849,	// (0x0001364c) bg_passive_tab_pane_g2_cp1_srt

0xae1f,	// (0x00015c22) bg_passive_tab_pane_g3_cp1_srt

0x6f68,	// (0x00011d6b) bg_active_tab_pane_cp1_srt_ParamLimits

0x6f68,	// (0x00011d6b) bg_active_tab_pane_cp1_srt

0xae28,	// (0x00015c2b) tabs_2_active_pane_srt_g1

0xae30,	// (0x00015c33) tabs_2_active_pane_srt_t1_ParamLimits

0xae30,	// (0x00015c33) tabs_2_active_pane_srt_t1

0xae16,	// (0x00015c19) bg_active_tab_pane_g1_cp1_srt

0x8849,	// (0x0001364c) bg_active_tab_pane_g2_cp1_srt

0xae1f,	// (0x00015c22) bg_active_tab_pane_g3_cp1_srt

0x5d44,	// (0x00010b47) tabs_3_active_pane_srt_ParamLimits

0x5d44,	// (0x00010b47) tabs_3_active_pane_srt

0x5d55,	// (0x00010b58) tabs_3_passive_pane_cp_srt_ParamLimits

0x5d55,	// (0x00010b58) tabs_3_passive_pane_cp_srt

0x5d66,	// (0x00010b69) tabs_3_passive_pane_srt_ParamLimits

0x5d66,	// (0x00010b69) tabs_3_passive_pane_srt

0x8f4d,	// (0x00013d50) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8f4d,	// (0x00013d50) bg_passive_tab_pane_cp2_srt

0x8daf,	// (0x00013bb2) bg_passive_tab_pane_g1_cp2_srt

0x8849,	// (0x0001364c) bg_passive_tab_pane_g2_cp2_srt

0x8db8,	// (0x00013bbb) bg_passive_tab_pane_g3_cp2_srt

0x6f68,	// (0x00011d6b) bg_active_tab_pane_cp2_srt_ParamLimits

0x6f68,	// (0x00011d6b) bg_active_tab_pane_cp2_srt

0xadfc,	// (0x00015bff) tabs_3_active_pane_srt_g1

0xae04,	// (0x00015c07) tabs_3_active_pane_srt_t1_ParamLimits

0xae04,	// (0x00015c07) tabs_3_active_pane_srt_t1

0x8daf,	// (0x00013bb2) bg_active_tab_pane_g1_cp2_srt

0x8849,	// (0x0001364c) bg_active_tab_pane_g2_cp2_srt

0x8db8,	// (0x00013bbb) bg_active_tab_pane_g3_cp2_srt

0x5cfc,	// (0x00010aff) tabs_4_active_pane_srt_ParamLimits

0x5cfc,	// (0x00010aff) tabs_4_active_pane_srt

0x5d0e,	// (0x00010b11) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5d0e,	// (0x00010b11) tabs_4_passive_pane_cp2_srt

0x5341,	// (0x00010144) aid_size_cell_toolbar

0x80ca,	// (0x00012ecd) main_idle_act_pane_ParamLimits

0x550c,	// (0x0001030f) popup_large_graphic_colour_window_ParamLimits

0x5873,	// (0x00010676) popup_toolbar_window_ParamLimits

0x5873,	// (0x00010676) popup_toolbar_window

0xab93,	// (0x00015996) list_single_graphic_2heading_pane_ParamLimits

0xab93,	// (0x00015996) list_single_graphic_2heading_pane

0x8286,	// (0x00013089) aid_size_cell_apps_grid_lsc_pane

0x8298,	// (0x0001309b) aid_size_cell_apps_grid_prt_pane

0x8f4d,	// (0x00013d50) bg_wml_button_pane_cp1_ParamLimits

0x8f4d,	// (0x00013d50) bg_wml_button_pane_cp1

0x9800,	// (0x00014603) form_midp_field_text_pane_t1_ParamLimits

0x95bb,	// (0x000143be) input_focus_pane_cp050_ParamLimits

0x9837,	// (0x0001463a) list_midp_form_text_pane_ParamLimits

0x97dd,	// (0x000145e0) input_focus_pane_cp051_ParamLimits

0x97f1,	// (0x000145f4) list_midp_choice_pane_ParamLimits

0x9674,	// (0x00014477) list_single_2graphic_pane_cp3_ParamLimits

0x9674,	// (0x00014477) list_single_2graphic_pane_cp3

0x9698,	// (0x0001449b) list_single_midp_graphic_pane_ParamLimits

0x9698,	// (0x0001449b) list_single_midp_graphic_pane

0x5920,	// (0x00010723) list_single_graphic_2heading_pane_g1_ParamLimits

0x5920,	// (0x00010723) list_single_graphic_2heading_pane_g1

0x592c,	// (0x0001072f) list_single_graphic_2heading_pane_g4_ParamLimits

0x592c,	// (0x0001072f) list_single_graphic_2heading_pane_g4

0x5938,	// (0x0001073b) list_single_graphic_2heading_pane_g5_ParamLimits

0x5938,	// (0x0001073b) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0001a5ae) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0001a5ae) list_single_graphic_2heading_pane_g

0x5944,	// (0x00010747) list_single_graphic_2heading_pane_t1_ParamLimits

0x5944,	// (0x00010747) list_single_graphic_2heading_pane_t1

0x5958,	// (0x0001075b) list_single_graphic_2heading_pane_t2_ParamLimits

0x5958,	// (0x0001075b) list_single_graphic_2heading_pane_t2

0x5974,	// (0x00010777) list_single_graphic_2heading_pane_t3_ParamLimits

0x5974,	// (0x00010777) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0001a5b5) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0001a5b5) list_single_graphic_2heading_pane_t

0x939d,	// (0x000141a0) bg_popup_sub_pane_cp2

0x93c7,	// (0x000141ca) grid_toobar_pane

0x598c,	// (0x0001078f) cell_toolbar_pane_ParamLimits

0x598c,	// (0x0001078f) cell_toolbar_pane

0x9431,	// (0x00014234) cell_toolbar_pane_g1_ParamLimits

0x9431,	// (0x00014234) cell_toolbar_pane_g1

0x9445,	// (0x00014248) cell_toolbar_pane_g2_ParamLimits

0x9445,	// (0x00014248) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0001a5c3) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0001a5c3) cell_toolbar_pane_g

0x9467,	// (0x0001426a) grid_highlight_pane_cp2_ParamLimits

0x9467,	// (0x0001426a) grid_highlight_pane_cp2

0x9481,	// (0x00014284) toolbar_button_pane

0x948d,	// (0x00014290) toolbar_button_pane_g1

0x9495,	// (0x00014298) toolbar_button_pane_g2

0x949d,	// (0x000142a0) toolbar_button_pane_g3

0x94a5,	// (0x000142a8) toolbar_button_pane_g4

0x94ad,	// (0x000142b0) toolbar_button_pane_g5

0x94b5,	// (0x000142b8) toolbar_button_pane_g6

0x94bd,	// (0x000142c0) toolbar_button_pane_g7

0x94c5,	// (0x000142c8) toolbar_button_pane_g8

0x94cd,	// (0x000142d0) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0001a5c8) toolbar_button_pane_g

0x59c4,	// (0x000107c7) list_single_2graphic_pane_g1_cp3_ParamLimits

0x59c4,	// (0x000107c7) list_single_2graphic_pane_g1_cp3

0x59d0,	// (0x000107d3) list_single_2graphic_pane_g2_cp3_ParamLimits

0x59d0,	// (0x000107d3) list_single_2graphic_pane_g2_cp3

0x59e1,	// (0x000107e4) list_single_2graphic_pane_g3_cp3

0x59e9,	// (0x000107ec) list_single_2graphic_pane_g4_cp3_ParamLimits

0x59e9,	// (0x000107ec) list_single_2graphic_pane_g4_cp3

0x59f5,	// (0x000107f8) list_single_2graphic_pane_t1_cp3_ParamLimits

0x59f5,	// (0x000107f8) list_single_2graphic_pane_t1_cp3

0x5a11,	// (0x00010814) list_single_midp_graphic_pane_g2_ParamLimits

0x5a11,	// (0x00010814) list_single_midp_graphic_pane_g2

0x5349,	// (0x0001014c) aid_zoom_text_primary

0x5351,	// (0x00010154) aid_zoom_text_secondary

0x8e69,	// (0x00013c6c) status_small_pane_g7_ParamLimits

0x8e69,	// (0x00013c6c) status_small_pane_g7

0x8e8c,	// (0x00013c8f) status_small_pane_t1_ParamLimits

0x6e9f,	// (0x00011ca2) title_pane_g2

0x0003,

0xf54e,	// (0x0001a351) title_pane_g

0x7400,	// (0x00012203) aid_size_cell_colour_1_pane_ParamLimits

0x7400,	// (0x00012203) aid_size_cell_colour_1_pane

0x7414,	// (0x00012217) aid_size_cell_colour_2_pane_ParamLimits

0x7414,	// (0x00012217) aid_size_cell_colour_2_pane

0x7428,	// (0x0001222b) aid_size_cell_colour_3_pane_ParamLimits

0x7428,	// (0x0001222b) aid_size_cell_colour_3_pane

0x743c,	// (0x0001223f) aid_size_cell_colour_4_pane_ParamLimits

0x743c,	// (0x0001223f) aid_size_cell_colour_4_pane

0x4da1,	// (0x0000fba4) title_pane_stacon_g1_ParamLimits

0x4da1,	// (0x0000fba4) title_pane_stacon_g1

0x9c24,	// (0x00014a27) popup_note_wait_window_g3_ParamLimits

0x9c24,	// (0x00014a27) popup_note_wait_window_g3

0x9c9a,	// (0x00014a9d) popup_note_wait_window_t5_ParamLimits

0x9c9a,	// (0x00014a9d) popup_note_wait_window_t5

0x6e88,	// (0x00011c8b) main_feb_china_hwr_fs_writing_pane

0x53ef,	// (0x000101f2) popup_feb_china_hwr_fs_window_ParamLimits

0x53ef,	// (0x000101f2) popup_feb_china_hwr_fs_window

0x5a33,	// (0x00010836) aid_size_cell_hwr_fs_ParamLimits

0x5a33,	// (0x00010836) aid_size_cell_hwr_fs

0x95bb,	// (0x000143be) bg_popup_sub_pane_cp3_ParamLimits

0x95bb,	// (0x000143be) bg_popup_sub_pane_cp3

0x5a48,	// (0x0001084b) grid_hwr_fs_pane_ParamLimits

0x5a48,	// (0x0001084b) grid_hwr_fs_pane

0x5a60,	// (0x00010863) linegrid_hwr_fs_pane_ParamLimits

0x5a60,	// (0x00010863) linegrid_hwr_fs_pane

0x5a70,	// (0x00010873) cell_hwr_fs_pane_ParamLimits

0x5a70,	// (0x00010873) cell_hwr_fs_pane

0x95c7,	// (0x000143ca) linegrid_hwr_fs_pane_g1_ParamLimits

0x95c7,	// (0x000143ca) linegrid_hwr_fs_pane_g1

0x95d3,	// (0x000143d6) linegrid_hwr_fs_pane_g2_ParamLimits

0x95d3,	// (0x000143d6) linegrid_hwr_fs_pane_g2

0x95e5,	// (0x000143e8) linegrid_hwr_fs_pane_g3_ParamLimits

0x95e5,	// (0x000143e8) linegrid_hwr_fs_pane_g3

0x5a92,	// (0x00010895) linegrid_hwr_fs_pane_g4_ParamLimits

0x5a92,	// (0x00010895) linegrid_hwr_fs_pane_g4

0x5aac,	// (0x000108af) linegrid_hwr_fs_pane_g5_ParamLimits

0x5aac,	// (0x000108af) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0001a5f3) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0001a5f3) linegrid_hwr_fs_pane_g

0x95f1,	// (0x000143f4) cell_hwr_fs_pane_g1_ParamLimits

0x95f1,	// (0x000143f4) cell_hwr_fs_pane_g1

0x92d4,	// (0x000140d7) cell_hwr_fs_pane_g2_ParamLimits

0x92d4,	// (0x000140d7) cell_hwr_fs_pane_g2

0x9607,	// (0x0001440a) cell_hwr_fs_pane_g3_ParamLimits

0x9607,	// (0x0001440a) cell_hwr_fs_pane_g3

0x9614,	// (0x00014417) cell_hwr_fs_pane_g4_ParamLimits

0x9614,	// (0x00014417) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0001a5fe) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0001a5fe) cell_hwr_fs_pane_g

0x5ac2,	// (0x000108c5) cell_hwr_fs_pane_t1

0x6e88,	// (0x00011c8b) grid_highlight_pane_cp6

0x6e88,	// (0x00011c8b) main_idle_act2_pane

0x803d,	// (0x00012e40) aid_inside_area_popup_secondary

0xa2dd,	// (0x000150e0) aid_inside_area_window_primary_ParamLimits

0xa2dd,	// (0x000150e0) aid_inside_area_window_primary

0xaf63,	// (0x00015d66) ai2_news_ticker_pane

0xaf6b,	// (0x00015d6e) aid_size_cell_ai1_link_ParamLimits

0xaf6b,	// (0x00015d6e) aid_size_cell_ai1_link

0xaf85,	// (0x00015d88) popup_ai2_data_window_ParamLimits

0xaf85,	// (0x00015d88) popup_ai2_data_window

0xaf9b,	// (0x00015d9e) popup_ai2_link_window_ParamLimits

0xaf9b,	// (0x00015d9e) popup_ai2_link_window

0x95bb,	// (0x000143be) bg_popup_sub_pane_cp4_ParamLimits

0x95bb,	// (0x000143be) bg_popup_sub_pane_cp4

0xafaf,	// (0x00015db2) grid_ai2_link_pane_ParamLimits

0xafaf,	// (0x00015db2) grid_ai2_link_pane

0xafc6,	// (0x00015dc9) popup_ai2_link_window_g1_ParamLimits

0xafc6,	// (0x00015dc9) popup_ai2_link_window_g1

0xafd2,	// (0x00015dd5) popup_ai2_link_window_g2_ParamLimits

0xafd2,	// (0x00015dd5) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0001a7d1) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0001a7d1) popup_ai2_link_window_g

0xafe1,	// (0x00015de4) ai2_mp_button_pane

0xafe9,	// (0x00015dec) ai2_mp_volume_pane

0x97dd,	// (0x000145e0) bg_popup_sub_pane_cp5_ParamLimits

0x97dd,	// (0x000145e0) bg_popup_sub_pane_cp5

0xaff1,	// (0x00015df4) heading_ai2_gene_pane_ParamLimits

0xaff1,	// (0x00015df4) heading_ai2_gene_pane

0xaffd,	// (0x00015e00) list_ai2_gene_pane_ParamLimits

0xaffd,	// (0x00015e00) list_ai2_gene_pane

0xb045,	// (0x00015e48) cell_ai2_link_pane_ParamLimits

0xb045,	// (0x00015e48) cell_ai2_link_pane

0xb05b,	// (0x00015e5e) cell_ai2_link_pane_g1

0x6e88,	// (0x00011c8b) grid_highlight_pane_cp7

0x5db4,	// (0x00010bb7) ai2_mp_volume_pane_g1

0xb12b,	// (0x00015f2e) ai2_mp_volume_pane_g2

0xb0a0,	// (0x00015ea3) list_ai2_gene_pane_t1

0xb133,	// (0x00015f36) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0001a7ea) ai2_mp_volume_pane_g

0x5dbc,	// (0x00010bbf) volume_small_pane_cp3

0xb13b,	// (0x00015f3e) aid_size_cell_ai2_button

0xb143,	// (0x00015f46) grid_ai2_button_pane

0xb14c,	// (0x00015f4f) cell_ai2_button_pane_ParamLimits

0xb14c,	// (0x00015f4f) cell_ai2_button_pane

0x6e7e,	// (0x00011c81) cell_ai2_button_pane_g1

0x6e88,	// (0x00011c8b) grid_highlight_pane_cp8

0xb0eb,	// (0x00015eee) ai2_gene_pane_t1_ParamLimits

0xb0eb,	// (0x00015eee) ai2_gene_pane_t1

0x5337,	// (0x0001013a) aid_height_parent_landscape

0xa97c,	// (0x0001577f) aid_height_set_list

0xa98d,	// (0x00015790) aid_size_parent

0xad89,	// (0x00015b8c) aid_size_cell_graphic_pane_ParamLimits

0xb00d,	// (0x00015e10) popup_ai2_data_window_g1_ParamLimits

0xb00d,	// (0x00015e10) popup_ai2_data_window_g1

0xb019,	// (0x00015e1c) ai2_news_ticker_pane_g1

0xb021,	// (0x00015e24) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0001a7d6) ai2_news_ticker_pane_g

0xb029,	// (0x00015e2c) ai2_news_ticker_pane_t1

0xb037,	// (0x00015e3a) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0001a7db) ai2_news_ticker_pane_t

0xb064,	// (0x00015e67) heading_ai2_gene_pane_g1

0xb06c,	// (0x00015e6f) heading_ai2_gene_pane_t1_ParamLimits

0xb06c,	// (0x00015e6f) heading_ai2_gene_pane_t1

0xb081,	// (0x00015e84) list_highlight_pane_cp6

0xb089,	// (0x00015e8c) ai2_gene_pane_ParamLimits

0xb089,	// (0x00015e8c) ai2_gene_pane

0xb0ae,	// (0x00015eb1) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0001a7e0) list_ai2_gene_pane_t

0xb0bc,	// (0x00015ebf) list_highlight_pane_cp8_ParamLimits

0xb0bc,	// (0x00015ebf) list_highlight_pane_cp8

0xb0cd,	// (0x00015ed0) ai2_gene_pane_g1_ParamLimits

0xb0cd,	// (0x00015ed0) ai2_gene_pane_g1

0xb0df,	// (0x00015ee2) ai2_gene_pane_g2_ParamLimits

0xb0df,	// (0x00015ee2) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0001a7e5) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0001a7e5) ai2_gene_pane_g

0x7787,	// (0x0001258a) scroll_pane_cp12

0x52f6,	// (0x000100f9) control_pane_t3_ParamLimits

0x52f6,	// (0x000100f9) control_pane_t3

0x8e7d,	// (0x00013c80) status_small_pane_g8_ParamLimits

0x8e7d,	// (0x00013c80) status_small_pane_g8

0x54d5,	// (0x000102d8) popup_find_window_ParamLimits

0x56ea,	// (0x000104ed) popup_note_image_window_ParamLimits

0x9403,	// (0x00014206) list_double2_graphic_pane_vc_g1_ParamLimits

0x9403,	// (0x00014206) list_double2_graphic_pane_vc_g1

0x8b40,	// (0x00013943) list_double2_graphic_pane_vc_g2_ParamLimits

0x8b40,	// (0x00013943) list_double2_graphic_pane_vc_g2

0x940f,	// (0x00014212) list_double2_graphic_pane_vc_g3_ParamLimits

0x940f,	// (0x00014212) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0001a5bc) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001a5bc) list_double2_graphic_pane_vc_g

0x941b,	// (0x0001421e) list_double2_graphic_pane_vc_t1_ParamLimits

0x941b,	// (0x0001421e) list_double2_graphic_pane_vc_t1

0x8b40,	// (0x00013943) list_single_heading_pane_vc_g1_ParamLimits

0x8b40,	// (0x00013943) list_single_heading_pane_vc_g1

0x940f,	// (0x00014212) list_single_heading_pane_vc_g2_ParamLimits

0x940f,	// (0x00014212) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a5dd) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a5dd) list_single_heading_pane_vc_g

0x94d5,	// (0x000142d8) list_single_heading_pane_vc_t1_ParamLimits

0x94d5,	// (0x000142d8) list_single_heading_pane_vc_t1

0x94ed,	// (0x000142f0) list_single_heading_pane_vc_t2_ParamLimits

0x94ed,	// (0x000142f0) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0001a5e2) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0001a5e2) list_single_heading_pane_vc_t

0x9509,	// (0x0001430c) list_setting_number_pane_vc_g1_ParamLimits

0x9509,	// (0x0001430c) list_setting_number_pane_vc_g1

0x9515,	// (0x00014318) list_setting_number_pane_vc_g2_ParamLimits

0x9515,	// (0x00014318) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0001a5e7) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0001a5e7) list_setting_number_pane_vc_g

0x9521,	// (0x00014324) list_setting_number_pane_vc_t1_ParamLimits

0x9521,	// (0x00014324) list_setting_number_pane_vc_t1

0x9535,	// (0x00014338) list_setting_number_pane_vc_t2_ParamLimits

0x9535,	// (0x00014338) list_setting_number_pane_vc_t2

0x9551,	// (0x00014354) list_setting_number_pane_vc_t3_ParamLimits

0x9551,	// (0x00014354) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0001a5ec) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0001a5ec) list_setting_number_pane_vc_t

0x957f,	// (0x00014382) set_value_pane_vc_ParamLimits

0x957f,	// (0x00014382) set_value_pane_vc

0xab93,	// (0x00015996) list_double2_graphic_pane_vc_ParamLimits

0xab93,	// (0x00015996) list_double2_graphic_pane_vc

0xab93,	// (0x00015996) list_double2_large_graphic_pane_vc_ParamLimits

0xab93,	// (0x00015996) list_double2_large_graphic_pane_vc

0xab93,	// (0x00015996) list_double2_pane_vc_ParamLimits

0xab93,	// (0x00015996) list_double2_pane_vc

0xab93,	// (0x00015996) list_double_graphic_heading_pane_vc_ParamLimits

0xab93,	// (0x00015996) list_double_graphic_heading_pane_vc

0xab93,	// (0x00015996) list_double_graphic_pane_vc_ParamLimits

0xab93,	// (0x00015996) list_double_graphic_pane_vc

0xab93,	// (0x00015996) list_double_heading_pane_vc_ParamLimits

0xab93,	// (0x00015996) list_double_heading_pane_vc

0xaba5,	// (0x000159a8) list_double_large_graphic_pane_vc_ParamLimits

0xaba5,	// (0x000159a8) list_double_large_graphic_pane_vc

0xab93,	// (0x00015996) list_double_number_pane_vc_ParamLimits

0xab93,	// (0x00015996) list_double_number_pane_vc

0xab93,	// (0x00015996) list_double_pane_vc_ParamLimits

0xab93,	// (0x00015996) list_double_pane_vc

0xab93,	// (0x00015996) list_double_time_pane_vc_ParamLimits

0xab93,	// (0x00015996) list_double_time_pane_vc

0xab93,	// (0x00015996) list_setting_number_pane_vc_ParamLimits

0xab93,	// (0x00015996) list_setting_number_pane_vc

0xab93,	// (0x00015996) list_setting_pane_vc_ParamLimits

0xab93,	// (0x00015996) list_setting_pane_vc

0xab93,	// (0x00015996) list_single_graphic_heading_pane_vc_ParamLimits

0xab93,	// (0x00015996) list_single_graphic_heading_pane_vc

0xab93,	// (0x00015996) list_single_heading_pane_vc_ParamLimits

0xab93,	// (0x00015996) list_single_heading_pane_vc

0xabc3,	// (0x000159c6) list_single_number_heading_pane_vc_ParamLimits

0xabc3,	// (0x000159c6) list_single_number_heading_pane_vc

0x9403,	// (0x00014206) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x9403,	// (0x00014206) list_double_graphic_heading_pane_vc_g1

0xb180,	// (0x00015f83) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xb180,	// (0x00015f83) list_double_graphic_heading_pane_vc_g2

0xb18c,	// (0x00015f8f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xb18c,	// (0x00015f8f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x0001a7f1) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x0001a7f1) list_double_graphic_heading_pane_vc_g

0xb198,	// (0x00015f9b) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xb198,	// (0x00015f9b) list_double_graphic_heading_pane_vc_t1

0xb1b4,	// (0x00015fb7) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xb1b4,	// (0x00015fb7) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x0001a7f8) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x0001a7f8) list_double_graphic_heading_pane_vc_t

0x9509,	// (0x0001430c) list_setting_pane_vc_g1_ParamLimits

0x9509,	// (0x0001430c) list_setting_pane_vc_g1

0x9515,	// (0x00014318) list_setting_pane_vc_g2_ParamLimits

0x9515,	// (0x00014318) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0001a5e7) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0001a5e7) list_setting_pane_vc_g

0xb3e0,	// (0x000161e3) list_setting_pane_vc_t1_ParamLimits

0xb3e0,	// (0x000161e3) list_setting_pane_vc_t1

0xb3fc,	// (0x000161ff) list_setting_pane_vc_t2_ParamLimits

0xb3fc,	// (0x000161ff) list_setting_pane_vc_t2

0x0001,

0xfa23,	// (0x0001a826) list_setting_pane_vc_t_ParamLimits

0xfa23,	// (0x0001a826) list_setting_pane_vc_t

0x957f,	// (0x00014382) set_value_pane_cp_vc_ParamLimits

0x957f,	// (0x00014382) set_value_pane_cp_vc

0x8b40,	// (0x00013943) list_single_number_heading_pane_vc_g1_ParamLimits

0x8b40,	// (0x00013943) list_single_number_heading_pane_vc_g1

0x940f,	// (0x00014212) list_single_number_heading_pane_vc_g2_ParamLimits

0x940f,	// (0x00014212) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a5dd) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a5dd) list_single_number_heading_pane_vc_g

0x94d5,	// (0x000142d8) list_single_number_heading_pane_vc_t1_ParamLimits

0x94d5,	// (0x000142d8) list_single_number_heading_pane_vc_t1

0xb418,	// (0x0001621b) list_single_number_heading_pane_vc_t2_ParamLimits

0xb418,	// (0x0001621b) list_single_number_heading_pane_vc_t2

0xb42c,	// (0x0001622f) list_single_number_heading_pane_vc_t3_ParamLimits

0xb42c,	// (0x0001622f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa28,	// (0x0001a82b) list_single_number_heading_pane_vc_t_ParamLimits

0xfa28,	// (0x0001a82b) list_single_number_heading_pane_vc_t

0x9403,	// (0x00014206) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x9403,	// (0x00014206) list_single_graphic_heading_pane_vc_g1

0x8b40,	// (0x00013943) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8b40,	// (0x00013943) list_single_graphic_heading_pane_vc_g4

0x940f,	// (0x00014212) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x940f,	// (0x00014212) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x0001a5bc) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001a5bc) list_single_graphic_heading_pane_vc_g

0x94d5,	// (0x000142d8) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x94d5,	// (0x000142d8) list_single_graphic_heading_pane_vc_t1

0xb43e,	// (0x00016241) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb43e,	// (0x00016241) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2f,	// (0x0001a832) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2f,	// (0x0001a832) list_single_graphic_heading_pane_vc_t

0x8b40,	// (0x00013943) list_double2_pane_vc_g1_ParamLimits

0x8b40,	// (0x00013943) list_double2_pane_vc_g1

0x940f,	// (0x00014212) list_double2_pane_vc_g2_ParamLimits

0x940f,	// (0x00014212) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a5dd) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a5dd) list_double2_pane_vc_g

0xb452,	// (0x00016255) list_double2_pane_vc_t1_ParamLimits

0xb452,	// (0x00016255) list_double2_pane_vc_t1

0xb468,	// (0x0001626b) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb468,	// (0x0001626b) list_double2_large_graphic_pane_vc_g1

0x8b40,	// (0x00013943) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8b40,	// (0x00013943) list_double2_large_graphic_pane_vc_g2

0x940f,	// (0x00014212) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x940f,	// (0x00014212) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa34,	// (0x0001a837) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa34,	// (0x0001a837) list_double2_large_graphic_pane_vc_g

0xb474,	// (0x00016277) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb474,	// (0x00016277) list_double2_large_graphic_pane_vc_t1

0xb48a,	// (0x0001628d) list_double_time_pane_vc_g1_ParamLimits

0xb48a,	// (0x0001628d) list_double_time_pane_vc_g1

0xb496,	// (0x00016299) list_double_time_pane_vc_g2_ParamLimits

0xb496,	// (0x00016299) list_double_time_pane_vc_g2

0x0001,

0xfa3b,	// (0x0001a83e) list_double_time_pane_vc_g_ParamLimits

0xfa3b,	// (0x0001a83e) list_double_time_pane_vc_g

0xb4a2,	// (0x000162a5) list_double_time_pane_vc_t1_ParamLimits

0xb4a2,	// (0x000162a5) list_double_time_pane_vc_t1

0xb4c6,	// (0x000162c9) list_double_time_pane_vc_t2_ParamLimits

0xb4c6,	// (0x000162c9) list_double_time_pane_vc_t2

0xb4f5,	// (0x000162f8) list_double_time_pane_vc_t3_ParamLimits

0xb4f5,	// (0x000162f8) list_double_time_pane_vc_t3

0xb507,	// (0x0001630a) list_double_time_pane_vc_t4_ParamLimits

0xb507,	// (0x0001630a) list_double_time_pane_vc_t4

0x0003,

0xfa40,	// (0x0001a843) list_double_time_pane_vc_t_ParamLimits

0xfa40,	// (0x0001a843) list_double_time_pane_vc_t

0x8b40,	// (0x00013943) list_double_pane_vc_g1_ParamLimits

0x8b40,	// (0x00013943) list_double_pane_vc_g1

0x940f,	// (0x00014212) list_double_pane_vc_g2_ParamLimits

0x940f,	// (0x00014212) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a5dd) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a5dd) list_double_pane_vc_g

0xb51b,	// (0x0001631e) list_double_pane_vc_t1_ParamLimits

0xb51b,	// (0x0001631e) list_double_pane_vc_t1

0xb52f,	// (0x00016332) list_double_pane_vc_t2_ParamLimits

0xb52f,	// (0x00016332) list_double_pane_vc_t2

0x0001,

0xfa49,	// (0x0001a84c) list_double_pane_vc_t_ParamLimits

0xfa49,	// (0x0001a84c) list_double_pane_vc_t

0x8b40,	// (0x00013943) list_double_number_pane_vc_g1_ParamLimits

0x8b40,	// (0x00013943) list_double_number_pane_vc_g1

0x940f,	// (0x00014212) list_double_number_pane_vc_g2_ParamLimits

0x940f,	// (0x00014212) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a5dd) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a5dd) list_double_number_pane_vc_g

0xb547,	// (0x0001634a) list_double_number_pane_vc_t1_ParamLimits

0xb547,	// (0x0001634a) list_double_number_pane_vc_t1

0xb559,	// (0x0001635c) list_double_number_pane_vc_t2_ParamLimits

0xb559,	// (0x0001635c) list_double_number_pane_vc_t2

0xb56d,	// (0x00016370) list_double_number_pane_vc_t3_ParamLimits

0xb56d,	// (0x00016370) list_double_number_pane_vc_t3

0x0002,

0xfa4e,	// (0x0001a851) list_double_number_pane_vc_t_ParamLimits

0xfa4e,	// (0x0001a851) list_double_number_pane_vc_t

0xb585,	// (0x00016388) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb585,	// (0x00016388) list_double_large_graphic_pane_vc_g1

0xb5a7,	// (0x000163aa) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb5a7,	// (0x000163aa) list_double_large_graphic_pane_vc_g2

0xb5bb,	// (0x000163be) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb5bb,	// (0x000163be) list_double_large_graphic_pane_vc_g3

0xb5ca,	// (0x000163cd) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb5ca,	// (0x000163cd) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa55,	// (0x0001a858) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x0001a858) list_double_large_graphic_pane_vc_g

0xb5d6,	// (0x000163d9) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb5d6,	// (0x000163d9) list_double_large_graphic_pane_vc_t1

0xb5f2,	// (0x000163f5) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb5f2,	// (0x000163f5) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x0001a861) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x0001a861) list_double_large_graphic_pane_vc_t

0xb180,	// (0x00015f83) list_double_heading_pane_vc_g1_ParamLimits

0xb180,	// (0x00015f83) list_double_heading_pane_vc_g1

0xb18c,	// (0x00015f8f) list_double_heading_pane_vc_g2_ParamLimits

0xb18c,	// (0x00015f8f) list_double_heading_pane_vc_g2

0x0001,

0xfa63,	// (0x0001a866) list_double_heading_pane_vc_g_ParamLimits

0xfa63,	// (0x0001a866) list_double_heading_pane_vc_g

0xb614,	// (0x00016417) list_double_heading_pane_vc_t1_ParamLimits

0xb614,	// (0x00016417) list_double_heading_pane_vc_t1

0x94d5,	// (0x000142d8) list_double_heading_pane_vc_t2_ParamLimits

0x94d5,	// (0x000142d8) list_double_heading_pane_vc_t2

0x0001,

0xfa68,	// (0x0001a86b) list_double_heading_pane_vc_t_ParamLimits

0xfa68,	// (0x0001a86b) list_double_heading_pane_vc_t

0xb628,	// (0x0001642b) list_double_graphic_pane_vc_g1_ParamLimits

0xb628,	// (0x0001642b) list_double_graphic_pane_vc_g1

0xb634,	// (0x00016437) list_double_graphic_pane_vc_g2_ParamLimits

0xb634,	// (0x00016437) list_double_graphic_pane_vc_g2

0x8b40,	// (0x00013943) list_double_graphic_pane_vc_g3_ParamLimits

0x8b40,	// (0x00013943) list_double_graphic_pane_vc_g3

0x0003,

0xfa6d,	// (0x0001a870) list_double_graphic_pane_vc_g_ParamLimits

0xfa6d,	// (0x0001a870) list_double_graphic_pane_vc_g

0xb651,	// (0x00016454) list_double_graphic_pane_vc_t1_ParamLimits

0xb651,	// (0x00016454) list_double_graphic_pane_vc_t1

0xb67b,	// (0x0001647e) list_double_graphic_pane_vc_t2_ParamLimits

0xb67b,	// (0x0001647e) list_double_graphic_pane_vc_t2

0x0001,

0xfa76,	// (0x0001a879) list_double_graphic_pane_vc_t_ParamLimits

0xfa76,	// (0x0001a879) list_double_graphic_pane_vc_t

0x48f4,	// (0x0000f6f7) aid_size_cell_fastswap

0x48fc,	// (0x0000f6ff) aid_size_cell_touch_ParamLimits

0x48fc,	// (0x0000f6ff) aid_size_cell_touch

0x4b61,	// (0x0000f964) popup_fast_swap_wide_window_ParamLimits

0x4b61,	// (0x0000f964) popup_fast_swap_wide_window

0x4c75,	// (0x0000fa78) touch_pane_ParamLimits

0x4c75,	// (0x0000fa78) touch_pane

0x7c86,	// (0x00012a89) button_value_adjust_pane_cp2

0x7c8e,	// (0x00012a91) button_value_adjust_pane_cp4

0x7cb0,	// (0x00012ab3) form_field_data_pane_cp2

0x7cd1,	// (0x00012ad4) form_field_data_wide_pane_cp2

0x834f,	// (0x00013152) bg_scroll_pane_ParamLimits

0x4f03,	// (0x0000fd06) scroll_handle_pane_ParamLimits

0x4f17,	// (0x0000fd1a) scroll_sc2_down_pane_ParamLimits

0x4f17,	// (0x0000fd1a) scroll_sc2_down_pane

0x8380,	// (0x00013183) scroll_sc2_up_pane_ParamLimits

0x8380,	// (0x00013183) scroll_sc2_up_pane

0xbb33,	// (0x00016936) grid_wheel_folder_pane_g1_ParamLimits

0xbb33,	// (0x00016936) grid_wheel_folder_pane_g1

0x50dc,	// (0x0000fedf) clock_nsta_pane_cp2_ParamLimits

0x50dc,	// (0x0000fedf) clock_nsta_pane_cp2

0x80ca,	// (0x00012ecd) listscroll_midp_pane_ParamLimits

0x8c0f,	// (0x00013a12) midp_canvas_pane

0x8ef7,	// (0x00013cfa) nsta_clock_indic_pane

0x8f33,	// (0x00013d36) listscroll_form_pane_vc

0x8f3b,	// (0x00013d3e) listscroll_set_pane_vc_ParamLimits

0x8f3b,	// (0x00013d3e) listscroll_set_pane_vc

0x9048,	// (0x00013e4b) clock_nsta_pane

0x90bd,	// (0x00013ec0) indicator_nsta_pane

0x939d,	// (0x000141a0) bg_popup_sub_pane_cp2_ParamLimits

0x93b1,	// (0x000141b4) find_pane_cp2_ParamLimits

0x93b1,	// (0x000141b4) find_pane_cp2

0x93c7,	// (0x000141ca) grid_toobar_pane_ParamLimits

0x958f,	// (0x00014392) list_form_gen_pane_vc_ParamLimits

0x958f,	// (0x00014392) list_form_gen_pane_vc

0x95a5,	// (0x000143a8) scroll_pane_cp8_vc_ParamLimits

0x95a5,	// (0x000143a8) scroll_pane_cp8_vc

0x9621,	// (0x00014424) data_form_wide_pane_vc_ParamLimits

0x9621,	// (0x00014424) data_form_wide_pane_vc

0x962d,	// (0x00014430) form_field_data_wide_pane_vc_g1

0x9635,	// (0x00014438) form_field_data_wide_pane_vc_t1_ParamLimits

0x9635,	// (0x00014438) form_field_data_wide_pane_vc_t1

0x7d6c,	// (0x00012b6f) input_focus_pane_cp6_vc_ParamLimits

0x7d6c,	// (0x00012b6f) input_focus_pane_cp6_vc

0x999f,	// (0x000147a2) list_midp_pane_ParamLimits

0x99ab,	// (0x000147ae) scroll_pane_cp16_ParamLimits

0x99ab,	// (0x000147ae) scroll_pane_cp16

0x99f9,	// (0x000147fc) button_value_adjust_pane_ParamLimits

0x99f9,	// (0x000147fc) button_value_adjust_pane

0xa99f,	// (0x000157a2) button_value_adjust_pane_cp6_ParamLimits

0xa99f,	// (0x000157a2) button_value_adjust_pane_cp6

0xaac9,	// (0x000158cc) settings_code_pane_cp_ParamLimits

0xaac9,	// (0x000158cc) settings_code_pane_cp

0x6e7e,	// (0x00011c81) cell_touch_pane_g1

0x6e7e,	// (0x00011c81) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0001a501) cell_touch_pane_g

0xb15e,	// (0x00015f61) cell_touch_pane_cp_ParamLimits

0xb15e,	// (0x00015f61) cell_touch_pane_cp

0xb16e,	// (0x00015f71) cell_touch_pane_ParamLimits

0xb16e,	// (0x00015f71) cell_touch_pane

0x6e7e,	// (0x00011c81) scroll_sc2_down_pane_g1

0x6e7e,	// (0x00011c81) scroll_sc2_up_pane_g1

0x6e88,	// (0x00011c8b) bg_set_opt_pane_cp4_vc

0xb1d2,	// (0x00015fd5) list_set_graphic_pane_vc_g1_ParamLimits

0xb1d2,	// (0x00015fd5) list_set_graphic_pane_vc_g1

0xb1de,	// (0x00015fe1) list_set_graphic_pane_vc_g2_ParamLimits

0xb1de,	// (0x00015fe1) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x0001a7fd) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x0001a7fd) list_set_graphic_pane_vc_g

0xb1ea,	// (0x00015fed) text_primary_small_cp13_vc_ParamLimits

0xb1ea,	// (0x00015fed) text_primary_small_cp13_vc

0xb202,	// (0x00016005) list_set_graphic_pane_vc_ParamLimits

0xb202,	// (0x00016005) list_set_graphic_pane_vc

0x6e88,	// (0x00011c8b) input_focus_pane_cp2_vc

0x6e7e,	// (0x00011c81) setting_code_pane_vc_g1

0x6fb3,	// (0x00011db6) setting_code_pane_vc_t1

0xb215,	// (0x00016018) set_text_pane_vc_t1_ParamLimits

0xb215,	// (0x00016018) set_text_pane_vc_t1

0x6e88,	// (0x00011c8b) input_focus_pane_cp1_vc

0xb231,	// (0x00016034) list_set_text_pane_vc

0x6e7e,	// (0x00011c81) setting_text_pane_vc_g1

0x6e88,	// (0x00011c8b) bg_set_opt_pane_cp2_vc

0x6faa,	// (0x00011dad) setting_slider_graphic_pane_vc_g1

0xb23b,	// (0x0001603e) setting_slider_graphic_pane_vc_t1

0xb24b,	// (0x0001604e) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x0001a802) setting_slider_graphic_pane_vc_t

0xb25b,	// (0x0001605e) slider_set_pane_cp_vc

0xb263,	// (0x00016066) slider_set_pane_vc_g1

0xb26c,	// (0x0001606f) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x0001a807) slider_set_pane_vc_g

0x7e95,	// (0x00012c98) set_opt_bg_pane_g1_copy1

0x7e9d,	// (0x00012ca0) set_opt_bg_pane_g2_copy1

0xb298,	// (0x0001609b) set_opt_bg_pane_g3_copy1

0x7ead,	// (0x00012cb0) set_opt_bg_pane_g4_copy1

0x7eb5,	// (0x00012cb8) set_opt_bg_pane_g5_copy1

0x7ebd,	// (0x00012cc0) set_opt_bg_pane_g6_copy1

0xb2a2,	// (0x000160a5) set_opt_bg_pane_g7_copy1

0xb2aa,	// (0x000160ad) set_opt_bg_pane_g8_copy1

0xb2b4,	// (0x000160b7) set_opt_bg_pane_g9_copy1

0x6e88,	// (0x00011c8b) bg_set_opt_pane_cp_vc

0xb2be,	// (0x000160c1) setting_slider_pane_vc_t1

0xb2cd,	// (0x000160d0) setting_slider_pane_vc_t2

0xb2dd,	// (0x000160e0) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x0001a816) setting_slider_pane_vc_t

0xb2ed,	// (0x000160f0) slider_set_pane_vc

0x5ad0,	// (0x000108d3) volume_set_pane_vc_g1

0x5ad9,	// (0x000108dc) volume_set_pane_vc_g2

0x5ae2,	// (0x000108e5) volume_set_pane_vc_g3

0x5aeb,	// (0x000108ee) volume_set_pane_vc_g4

0x5af4,	// (0x000108f7) volume_set_pane_vc_g5

0x5afd,	// (0x00010900) volume_set_pane_vc_g6

0x5b06,	// (0x00010909) volume_set_pane_vc_g7

0x5b0f,	// (0x00010912) volume_set_pane_vc_g8

0x5b18,	// (0x0001091b) volume_set_pane_vc_g9

0x5b21,	// (0x00010924) volume_set_pane_vc_g10

0x0009,

0xf8b1,	// (0x0001a6b4) volume_set_pane_vc_g

0xb2f5,	// (0x000160f8) volume_set_pane_vc

0xb2fd,	// (0x00016100) button_value_adjust_pane_cp1_vc

0xb307,	// (0x0001610a) list_highlight_pane_cp2_vc

0xb310,	// (0x00016113) list_set_pane_vc_ParamLimits

0xb310,	// (0x00016113) list_set_pane_vc

0xb36e,	// (0x00016171) main_pane_set_vc_t1_ParamLimits

0xb36e,	// (0x00016171) main_pane_set_vc_t1

0xb383,	// (0x00016186) main_pane_set_vc_t2_ParamLimits

0xb383,	// (0x00016186) main_pane_set_vc_t2

0xb395,	// (0x00016198) main_pane_set_vc_t3_ParamLimits

0xb395,	// (0x00016198) main_pane_set_vc_t3

0xb3a9,	// (0x000161ac) main_pane_set_vc_t4_ParamLimits

0xb3a9,	// (0x000161ac) main_pane_set_vc_t4

0x0003,

0xfa1a,	// (0x0001a81d) main_pane_set_vc_t_ParamLimits

0xfa1a,	// (0x0001a81d) main_pane_set_vc_t

0xb3bd,	// (0x000161c0) setting_code_pane_vc_ParamLimits

0xb3bd,	// (0x000161c0) setting_code_pane_vc

0xb3ce,	// (0x000161d1) setting_slider_graphic_pane_vc

0xb3ce,	// (0x000161d1) setting_slider_pane_vc

0xb3ce,	// (0x000161d1) setting_text_pane_vc

0xb3ce,	// (0x000161d1) setting_volume_pane_vc

0xb3d8,	// (0x000161db) scroll_pane_cp121_vc

0x7c74,	// (0x00012a77) set_content_pane_vc

0xb6a5,	// (0x000164a8) button_value_adjust_pane_g1

0xb6ae,	// (0x000164b1) button_value_adjust_pane_g2

0x0001,

0xfa7b,	// (0x0001a87e) button_value_adjust_pane_g

0xb6b7,	// (0x000164ba) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb6b7,	// (0x000164ba) form_field_slider_wide_pane_vc_t1

0xb6cb,	// (0x000164ce) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb6cb,	// (0x000164ce) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa80,	// (0x0001a883) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa80,	// (0x0001a883) form_field_slider_wide_pane_vc_t

0x71fd,	// (0x00012000) input_focus_pane_cp10_vc_ParamLimits

0x71fd,	// (0x00012000) input_focus_pane_cp10_vc

0xb6f9,	// (0x000164fc) slider_cont_pane_cp1_vc_ParamLimits

0xb6f9,	// (0x000164fc) slider_cont_pane_cp1_vc

0xb70b,	// (0x0001650e) slider_form_pane_g1_cp2

0xb26c,	// (0x0001606f) slider_form_pane_g2_cp2

0xb738,	// (0x0001653b) form_field_slider_pane_vc_t3

0xb746,	// (0x00016549) form_field_slider_pane_vc_t4

0xb754,	// (0x00016557) slider_form_pane_vc_ParamLimits

0xb754,	// (0x00016557) slider_form_pane_vc

0xb761,	// (0x00016564) form_field_slider_pane_vc_t1_ParamLimits

0xb761,	// (0x00016564) form_field_slider_pane_vc_t1

0xb6cb,	// (0x000164ce) form_field_slider_pane_vc_t2_ParamLimits

0xb6cb,	// (0x000164ce) form_field_slider_pane_vc_t2

0x0001,

0xfa92,	// (0x0001a895) form_field_slider_pane_vc_t_ParamLimits

0xfa92,	// (0x0001a895) form_field_slider_pane_vc_t

0x71fd,	// (0x00012000) input_focus_pane_cp9_vc_ParamLimits

0x71fd,	// (0x00012000) input_focus_pane_cp9_vc

0xb77d,	// (0x00016580) slider_cont_pane_vc_ParamLimits

0xb77d,	// (0x00016580) slider_cont_pane_vc

0xb791,	// (0x00016594) list_form_graphic_pane_cp_vc_ParamLimits

0xb791,	// (0x00016594) list_form_graphic_pane_cp_vc

0x962d,	// (0x00014430) form_field_popup_wide_pane_vc_g1

0xb7a6,	// (0x000165a9) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb7a6,	// (0x000165a9) form_field_popup_wide_pane_vc_t1

0x7d6c,	// (0x00012b6f) input_focus_pane_cp8_vc_ParamLimits

0x7d6c,	// (0x00012b6f) input_focus_pane_cp8_vc

0xb7eb,	// (0x000165ee) list_form_wide_pane_vc_ParamLimits

0xb7eb,	// (0x000165ee) list_form_wide_pane_vc

0xb7f7,	// (0x000165fa) list_form_graphic_pane_vc_g1

0xb7ff,	// (0x00016602) list_form_graphic_pane_vc_t1_ParamLimits

0xb7ff,	// (0x00016602) list_form_graphic_pane_vc_t1

0x6f68,	// (0x00011d6b) list_highlight_pane_cp5_vc_ParamLimits

0x6f68,	// (0x00011d6b) list_highlight_pane_cp5_vc

0xb81b,	// (0x0001661e) list_form_graphic_pane_vc_ParamLimits

0xb81b,	// (0x0001661e) list_form_graphic_pane_vc

0x962d,	// (0x00014430) form_field_popup_pane_vc_g1

0xb831,	// (0x00016634) form_field_popup_pane_vc_t1_ParamLimits

0xb831,	// (0x00016634) form_field_popup_pane_vc_t1

0x7d6c,	// (0x00012b6f) input_focus_pane_cp7_vc_ParamLimits

0x7d6c,	// (0x00012b6f) input_focus_pane_cp7_vc

0xb848,	// (0x0001664b) list_form_pane_vc_ParamLimits

0xb848,	// (0x0001664b) list_form_pane_vc

0xb854,	// (0x00016657) data_form_pane_vc_t1_ParamLimits

0xb854,	// (0x00016657) data_form_pane_vc_t1

0x7e95,	// (0x00012c98) input_focus_pane_vc_g1

0x7e9d,	// (0x00012ca0) input_focus_pane_vc_g2

0x7ea5,	// (0x00012ca8) input_focus_pane_vc_g3

0x7ead,	// (0x00012cb0) input_focus_pane_vc_g4

0x7eb5,	// (0x00012cb8) input_focus_pane_vc_g5

0x7ebd,	// (0x00012cc0) input_focus_pane_vc_g6

0x7ec5,	// (0x00012cc8) input_focus_pane_vc_g7

0x7ecd,	// (0x00012cd0) input_focus_pane_vc_g8

0x7ed5,	// (0x00012cd8) input_focus_pane_vc_g9

0x6e7e,	// (0x00011c81) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0001a48a) input_focus_pane_vc_g

0x9621,	// (0x00014424) data_form_pane_vc_ParamLimits

0x9621,	// (0x00014424) data_form_pane_vc

0x962d,	// (0x00014430) form_field_data_pane_vc_g1

0xb86f,	// (0x00016672) form_field_data_pane_vc_t1_ParamLimits

0xb86f,	// (0x00016672) form_field_data_pane_vc_t1

0x7d6c,	// (0x00012b6f) input_focus_pane_vc_ParamLimits

0x7d6c,	// (0x00012b6f) input_focus_pane_vc

0xb889,	// (0x0001668c) button_value_adjust_pane_cp3_vc

0xb891,	// (0x00016694) button_value_adjust_pane_cp5_vc

0xb899,	// (0x0001669c) form_field_data_pane_vc_ParamLimits

0xb899,	// (0x0001669c) form_field_data_pane_vc

0xb8b0,	// (0x000166b3) form_field_data_pane_vc_cp2

0xb8b8,	// (0x000166bb) form_field_data_wide_pane_vc_ParamLimits

0xb8b8,	// (0x000166bb) form_field_data_wide_pane_vc

0xb8ce,	// (0x000166d1) form_field_data_wide_pane_vc_cp2

0xb8d6,	// (0x000166d9) form_field_popup_pane_vc_ParamLimits

0xb8d6,	// (0x000166d9) form_field_popup_pane_vc

0xb8ed,	// (0x000166f0) form_field_popup_wide_pane_vc_ParamLimits

0xb8ed,	// (0x000166f0) form_field_popup_wide_pane_vc

0xb903,	// (0x00016706) form_field_slider_pane_vc_ParamLimits

0xb903,	// (0x00016706) form_field_slider_pane_vc

0xb916,	// (0x00016719) form_field_slider_wide_pane_vc_ParamLimits

0xb916,	// (0x00016719) form_field_slider_wide_pane_vc

0xb929,	// (0x0001672c) grid_touch_1_pane_ParamLimits

0xb929,	// (0x0001672c) grid_touch_1_pane

0xb935,	// (0x00016738) grid_touch_2_pane_ParamLimits

0xb935,	// (0x00016738) grid_touch_2_pane

0x8ec2,	// (0x00013cc5) touch_pane_g1_ParamLimits

0x8ec2,	// (0x00013cc5) touch_pane_g1

0xb94d,	// (0x00016750) cell_app_pane_cp_wide_ParamLimits

0xb94d,	// (0x00016750) cell_app_pane_cp_wide

0xb95e,	// (0x00016761) grid_popup_fast_wide_pane_ParamLimits

0xb95e,	// (0x00016761) grid_popup_fast_wide_pane

0xb972,	// (0x00016775) scroll_pane_cp19_ParamLimits

0xb972,	// (0x00016775) scroll_pane_cp19

0x6e88,	// (0x00011c8b) bg_popup_window_pane_cp20

0xb986,	// (0x00016789) listscroll_popup_fast_wide_pane

0x6f68,	// (0x00011d6b) grid_indicator_nsta_pane

0xb98e,	// (0x00016791) clock_nsta_pane_g1

0xb997,	// (0x0001679a) clock_nsta_pane_t1

0xb9b3,	// (0x000167b6) cell_indicator_nsta_pane_ParamLimits

0xb9b3,	// (0x000167b6) cell_indicator_nsta_pane

0xb9e4,	// (0x000167e7) cell_indicator_nsta_pane_g1

0xb9f2,	// (0x000167f5) cell_indicator_nsta_pane_g2

0x0001,

0xfaa3,	// (0x0001a8a6) cell_indicator_nsta_pane_g

0xb9ff,	// (0x00016802) clock_nsta_pane_cp

0xba07,	// (0x0001680a) indicator_nsta_pane_cp

0xba0f,	// (0x00016812) nsta_clock_indic_pane_g1

0x704b,	// (0x00011e4e) grid_indicator_pane

0x8475,	// (0x00013278) scroll_pane_cp29

0x502b,	// (0x0000fe2e) indicator_nsta_pane_cp2_ParamLimits

0x502b,	// (0x0000fe2e) indicator_nsta_pane_cp2

0x6f68,	// (0x00011d6b) main_apps_wheel_pane

0x9880,	// (0x00014683) form_midp_field_text_pane_ParamLimits

0x99cb,	// (0x000147ce) scroll_bar_cp050_ParamLimits

0xba70,	// (0x00016873) cell_indicator_pane_ParamLimits

0xba70,	// (0x00016873) cell_indicator_pane

0xba87,	// (0x0001688a) cell_indicator_pane_g1

0xba91,	// (0x00016894) grid_wheel_folder_pane_ParamLimits

0xba91,	// (0x00016894) grid_wheel_folder_pane

0xbaa7,	// (0x000168aa) list_wheel_apps_pane_ParamLimits

0xbaa7,	// (0x000168aa) list_wheel_apps_pane

0xbab8,	// (0x000168bb) main_apps_wheel_pane_g1_ParamLimits

0xbab8,	// (0x000168bb) main_apps_wheel_pane_g1

0xbacc,	// (0x000168cf) main_apps_wheel_pane_g2_ParamLimits

0xbacc,	// (0x000168cf) main_apps_wheel_pane_g2

0x0001,

0xfabf,	// (0x0001a8c2) main_apps_wheel_pane_g_ParamLimits

0xfabf,	// (0x0001a8c2) main_apps_wheel_pane_g

0xbae4,	// (0x000168e7) main_apps_wheel_pane_t1_ParamLimits

0xbae4,	// (0x000168e7) main_apps_wheel_pane_t1

0xbb07,	// (0x0001690a) list_wheel_apps_pane_g1

0xbb0f,	// (0x00016912) list_wheel_apps_pane_g2

0xbb17,	// (0x0001691a) list_wheel_apps_pane_g3

0xbb1f,	// (0x00016922) list_wheel_apps_pane_g4

0xbb29,	// (0x0001692c) list_wheel_apps_pane_g5

0x0004,

0xfac4,	// (0x0001a8c7) list_wheel_apps_pane_g

0x8a87,	// (0x0001388a) navi_icon_text_pane

0x8f77,	// (0x00013d7a) aid_fill_nsta

0xbb4c,	// (0x0001694f) navi_icon_text_pane_g1

0xbb58,	// (0x0001695b) navi_icon_text_pane_t1

0x891a,	// (0x0001371d) list_set_graphic_pane_t1_ParamLimits

0x891a,	// (0x0001371d) list_set_graphic_pane_t1

0xa11a,	// (0x00014f1d) popup_midp_note_alarm_window_t6_ParamLimits

0xa11a,	// (0x00014f1d) popup_midp_note_alarm_window_t6

0xa12c,	// (0x00014f2f) popup_midp_note_alarm_window_t7_ParamLimits

0xa12c,	// (0x00014f2f) popup_midp_note_alarm_window_t7

0xa13e,	// (0x00014f41) popup_midp_note_alarm_window_t8_ParamLimits

0xa13e,	// (0x00014f41) popup_midp_note_alarm_window_t8

0xa150,	// (0x00014f53) popup_midp_note_alarm_window_t9_ParamLimits

0xa150,	// (0x00014f53) popup_midp_note_alarm_window_t9

0xa162,	// (0x00014f65) popup_midp_note_alarm_window_t10_ParamLimits

0xa162,	// (0x00014f65) popup_midp_note_alarm_window_t10

0xa174,	// (0x00014f77) popup_midp_note_alarm_window_t11_ParamLimits

0xa174,	// (0x00014f77) popup_midp_note_alarm_window_t11

0xa186,	// (0x00014f89) scroll_pane_cp17_ParamLimits

0xa186,	// (0x00014f89) scroll_pane_cp17

0x5ad0,	// (0x000108d3) volume_small_pane_cp_g1

0x5dc5,	// (0x00010bc8) volume_small_pane_cp_g2

0x5dce,	// (0x00010bd1) volume_small_pane_cp_g3

0x5dd7,	// (0x00010bda) volume_small_pane_cp_g4

0x5de0,	// (0x00010be3) volume_small_pane_cp_g5

0x5de9,	// (0x00010bec) volume_small_pane_cp_g6

0x5df2,	// (0x00010bf5) volume_small_pane_cp_g7

0x5dfb,	// (0x00010bfe) volume_small_pane_cp_g8

0x5e04,	// (0x00010c07) volume_small_pane_cp_g9

0x5e0d,	// (0x00010c10) volume_small_pane_cp_g10

0x8cd8,	// (0x00013adb) midp_ticker_pane_g1_ParamLimits

0x8ce4,	// (0x00013ae7) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0001a556) midp_ticker_pane_g_ParamLimits

0x8cf0,	// (0x00013af3) midp_ticker_pane_t1_ParamLimits

0x8f8d,	// (0x00013d90) aid_fill_nsta_2

0x99b7,	// (0x000147ba) list_form2_midp_pane

0xab47,	// (0x0001594a) midp_editing_number_pane_ParamLimits

0xab56,	// (0x00015959) midp_ticker_pane_ParamLimits

0xbb6a,	// (0x0001696d) form2_midp_field_pane

0xbb8e,	// (0x00016991) scroll_pane_cp51

0xbbae,	// (0x000169b1) form2_midp_button_pane_ParamLimits

0xbbae,	// (0x000169b1) form2_midp_button_pane

0xbbc0,	// (0x000169c3) form2_midp_content_pane_ParamLimits

0xbbc0,	// (0x000169c3) form2_midp_content_pane

0xbbda,	// (0x000169dd) form2_midp_field_choice_group_pane

0xbbe2,	// (0x000169e5) form2_midp_field_pane_g1

0xbbea,	// (0x000169ed) form2_midp_field_pane_g2

0xbbf2,	// (0x000169f5) form2_midp_field_pane_g3

0xbbfa,	// (0x000169fd) form2_midp_field_pane_g4

0x0003,

0xfae9,	// (0x0001a8ec) form2_midp_field_pane_g

0xbc02,	// (0x00016a05) form2_midp_gauge_slider_pane

0xbc0a,	// (0x00016a0d) form2_midp_gauge_wait_pane

0xbc12,	// (0x00016a15) form2_midp_image_pane_ParamLimits

0xbc12,	// (0x00016a15) form2_midp_image_pane

0xbc2d,	// (0x00016a30) form2_midp_label_pane_ParamLimits

0xbc2d,	// (0x00016a30) form2_midp_label_pane

0xbc46,	// (0x00016a49) form2_midp_label_pane_cp_ParamLimits

0xbc46,	// (0x00016a49) form2_midp_label_pane_cp

0xbc67,	// (0x00016a6a) form2_midp_string_pane_ParamLimits

0xbc67,	// (0x00016a6a) form2_midp_string_pane

0xbc79,	// (0x00016a7c) form2_midp_text_pane_ParamLimits

0xbc79,	// (0x00016a7c) form2_midp_text_pane

0xbc96,	// (0x00016a99) form2_midp_time_pane

0xbca6,	// (0x00016aa9) input_focus_pane_cp51_ParamLimits

0xbca6,	// (0x00016aa9) input_focus_pane_cp51

0xbcbe,	// (0x00016ac1) form2_midp_label_pane_t1_ParamLimits

0xbcbe,	// (0x00016ac1) form2_midp_label_pane_t1

0xbcff,	// (0x00016b02) form2_mdip_text_pane_t1_ParamLimits

0xbcff,	// (0x00016b02) form2_mdip_text_pane_t1

0xbd1e,	// (0x00016b21) form2_midp_time_pane_t1

0xbd39,	// (0x00016b3c) form2_midp_gauge_slider_pane_t1

0xbd4b,	// (0x00016b4e) form2_midp_gauge_slider_pane_t2

0xbd5d,	// (0x00016b60) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf2,	// (0x0001a8f5) form2_midp_gauge_slider_pane_t

0xbd6f,	// (0x00016b72) form2_midp_slider_pane

0xbd7b,	// (0x00016b7e) form2_midp_gauge_wait_pane_t1

0xbd89,	// (0x00016b8c) form2_midp_wait_pane_ParamLimits

0xbd89,	// (0x00016b8c) form2_midp_wait_pane

0x9674,	// (0x00014477) list_single_2graphic_pane_cp4_ParamLimits

0x9674,	// (0x00014477) list_single_2graphic_pane_cp4

0xbdb4,	// (0x00016bb7) list_single_midp_graphic_pane_cp_ParamLimits

0xbdb4,	// (0x00016bb7) list_single_midp_graphic_pane_cp

0x6e88,	// (0x00011c8b) list_highlight_pane_cp20

0xbde3,	// (0x00016be6) list_single_2graphic_pane_g1_cp4

0xbdeb,	// (0x00016bee) list_single_2graphic_pane_g2_cp4

0xbdf3,	// (0x00016bf6) list_single_2graphic_pane_t1_cp4

0x6f68,	// (0x00011d6b) list_highlight_pane_cp21

0xbe02,	// (0x00016c05) list_single_midp_graphic_pane_g4_cp

0xbe11,	// (0x00016c14) list_single_midp_graphic_pane_t1_cp

0xbe26,	// (0x00016c29) form2_mdip_string_pane_t1_ParamLimits

0xbe26,	// (0x00016c29) form2_mdip_string_pane_t1

0x6e88,	// (0x00011c8b) bg_wml_button_pane_cp2

0x6e7e,	// (0x00011c81) form2_midp_image_pane_g1

0x7a2a,	// (0x0001282d) list_double_large_graphic_pane_g5_ParamLimits

0x7a2a,	// (0x0001282d) list_double_large_graphic_pane_g5

0x80ca,	// (0x00012ecd) midp_form_pane_ParamLimits

0x6f68,	// (0x00011d6b) main_apps_wheel_pane_ParamLimits

0x5710,	// (0x00010513) popup_preview_window_ParamLimits

0x5710,	// (0x00010513) popup_preview_window

0x58cb,	// (0x000106ce) popup_touch_info_window_ParamLimits

0x58cb,	// (0x000106ce) popup_touch_info_window

0x58e9,	// (0x000106ec) popup_touch_menu_window_ParamLimits

0x58e9,	// (0x000106ec) popup_touch_menu_window

0x6e74,	// (0x00011c77) bg_popup_sub_pane_cp6

0xbf1f,	// (0x00016d22) list_touch_menu_pane

0xbf27,	// (0x00016d2a) list_single_touch_menu_pane_ParamLimits

0xbf27,	// (0x00016d2a) list_single_touch_menu_pane

0xbf3d,	// (0x00016d40) list_single_touch_menu_pane_t1

0x6f68,	// (0x00011d6b) bg_popup_sub_pane_cp7_ParamLimits

0x6f68,	// (0x00011d6b) bg_popup_sub_pane_cp7

0xbf4b,	// (0x00016d4e) heading_sub_pane

0xbf53,	// (0x00016d56) list_touch_info_pane_ParamLimits

0xbf53,	// (0x00016d56) list_touch_info_pane

0xbf62,	// (0x00016d65) list_single_touch_info_pane_ParamLimits

0xbf62,	// (0x00016d65) list_single_touch_info_pane

0xbf74,	// (0x00016d77) list_single_touch_info_pane_t1

0xbf82,	// (0x00016d85) list_single_touch_info_pane_t2

0x0001,

0xfb00,	// (0x0001a903) list_single_touch_info_pane_t

0x8c07,	// (0x00013a0a) bg_popup_heading_pane_cp

0xbf90,	// (0x00016d93) heading_sub_pane_t1

0x95bb,	// (0x000143be) bg_popup_preview_window_pane_cp_ParamLimits

0x95bb,	// (0x000143be) bg_popup_preview_window_pane_cp

0xbf4b,	// (0x00016d4e) heading_preview_pane

0xbf53,	// (0x00016d56) list_preview_pane_ParamLimits

0xbf53,	// (0x00016d56) list_preview_pane

0xbf9e,	// (0x00016da1) popup_preview_window_g1

0xbf62,	// (0x00016d65) list_single_preview_pane_ParamLimits

0xbf62,	// (0x00016d65) list_single_preview_pane

0xbfa6,	// (0x00016da9) list_single_preview_pane_g1

0xbfae,	// (0x00016db1) list_single_preview_pane_t1

0xbf74,	// (0x00016d77) list_single_preview_pane_t2

0x0001,

0xfb05,	// (0x0001a908) list_single_preview_pane_t

0xbfbc,	// (0x00016dbf) bg_popup_heading_pane_cp2_ParamLimits

0xbfbc,	// (0x00016dbf) bg_popup_heading_pane_cp2

0xbfd2,	// (0x00016dd5) heading_preview_pane_g1

0xbfda,	// (0x00016ddd) heading_preview_pane_t1_ParamLimits

0xbfda,	// (0x00016ddd) heading_preview_pane_t1

0x706e,	// (0x00011e71) soft_indicator_pane_t1_ParamLimits

0x7764,	// (0x00012567) scroll_pane_ParamLimits

0x836e,	// (0x00013171) scroll_sc2_left_pane

0x8377,	// (0x0001317a) scroll_sc2_right_pane

0x8396,	// (0x00013199) scroll_bg_pane_g1_ParamLimits

0x83ab,	// (0x000131ae) scroll_bg_pane_g2_ParamLimits

0x83c3,	// (0x000131c6) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0001a4e1) scroll_bg_pane_g_ParamLimits

0x8396,	// (0x00013199) scroll_handle_pane_g1_ParamLimits

0x83e5,	// (0x000131e8) scroll_handle_pane_g2_ParamLimits

0x83c3,	// (0x000131c6) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0001a4e8) scroll_handle_pane_g_ParamLimits

0x5391,	// (0x00010194) popup_choice_list_window_ParamLimits

0x5391,	// (0x00010194) popup_choice_list_window

0x93a9,	// (0x000141ac) choice_list_pane

0x9459,	// (0x0001425c) cell_toolbar_pane_t1

0x9481,	// (0x00014284) toolbar_button_pane_ParamLimits

0xa64c,	// (0x0001544f) ai_gene_pane_1_t2_ParamLimits

0xa64c,	// (0x0001544f) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0001a710) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0001a710) ai_gene_pane_1_t

0xbff7,	// (0x00016dfa) scroll_sc2_left_pane_g1

0xbff7,	// (0x00016dfa) scroll_sc2_right_pane_g1

0x8f4d,	// (0x00013d50) bg_popup_sub_pane_cp10

0xc001,	// (0x00016e04) list_choice_list_pane

0xc01a,	// (0x00016e1d) list_single_choice_list_pane_ParamLimits

0xc01a,	// (0x00016e1d) list_single_choice_list_pane

0xc02d,	// (0x00016e30) list_single_choice_list_pane_g1

0x807a,	// (0x00012e7d) list_single_choice_list_pane_t1_ParamLimits

0x807a,	// (0x00012e7d) list_single_choice_list_pane_t1

0xc035,	// (0x00016e38) choice_list_pane_g1

0xc03d,	// (0x00016e40) choice_list_pane_t1

0x6e74,	// (0x00011c77) input_focus_pane_cp11

0x8251,	// (0x00013054) title_pane_stacon_g2_ParamLimits

0x8251,	// (0x00013054) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0001a4c7) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0001a4c7) title_pane_stacon_g

0x8c07,	// (0x00013a0a) cursor_press_pane

0x543d,	// (0x00010240) popup_fep_hwr_window_ParamLimits

0x543d,	// (0x00010240) popup_fep_hwr_window

0x54b7,	// (0x000102ba) popup_fep_vkb_window_ParamLimits

0x54b7,	// (0x000102ba) popup_fep_vkb_window

0xc04b,	// (0x00016e4e) cursor_press_pane_g1

0x0002,

0xfb2e,	// (0x0001a931) fep_vkb_side_pane_g_ParamLimits

0x5e4f,	// (0x00010c52) fep_hwr_candidate_pane_ParamLimits

0x5e4f,	// (0x00010c52) fep_hwr_candidate_pane

0x5e79,	// (0x00010c7c) fep_hwr_side_pane_ParamLimits

0x5e79,	// (0x00010c7c) fep_hwr_side_pane

0x5e99,	// (0x00010c9c) fep_hwr_top_pane_ParamLimits

0x5e99,	// (0x00010c9c) fep_hwr_top_pane

0x5eb1,	// (0x00010cb4) fep_hwr_write_pane_ParamLimits

0x5eb1,	// (0x00010cb4) fep_hwr_write_pane

0xfb2e,	// (0x0001a931) fep_vkb_side_pane_g

0xc053,	// (0x00016e56) fep_hwr_top_pane_g1

0xc065,	// (0x00016e68) fep_hwr_top_pane_g2

0x5eeb,	// (0x00010cee) fep_hwr_top_pane_g3

0x0002,

0xfb0a,	// (0x0001a90d) fep_hwr_top_pane_g

0x5f00,	// (0x00010d03) fep_hwr_top_text_pane

0x8565,	// (0x00013368) fep_hwr_top_text_pane_g1

0xc09b,	// (0x00016e9e) fep_hwr_top_text_pane_t1

0x5ff6,	// (0x00010df9) fep_hwr_candidate_pane_g1

0xc2ee,	// (0x000170f1) fep_vkb_keypad_pane_g3_ParamLimits

0xc2ee,	// (0x000170f1) fep_vkb_keypad_pane_g3

0xc316,	// (0x00017119) fep_vkb_keypad_pane_g4_ParamLimits

0xc316,	// (0x00017119) fep_vkb_keypad_pane_g4

0xc385,	// (0x00017188) fep_vkb_bottom_pane_g2_ParamLimits

0xc385,	// (0x00017188) fep_vkb_bottom_pane_g2

0x0001,

0xfb35,	// (0x0001a938) fep_vkb_bottom_pane_g_ParamLimits

0xfb35,	// (0x0001a938) fep_vkb_bottom_pane_g

0xbff7,	// (0x00016dfa) cell_vkb_side_pane_g2

0x0001,

0xfb3f,	// (0x0001a942) cell_vkb_side_pane_g

0xc410,	// (0x00017213) cell_vkb_side_pane_t1

0xc41e,	// (0x00017221) cell_vkb_side_pane_t1_copy1

0xbff7,	// (0x00016dfa) bg_fep_vkb_candidate_pane_g2

0xc54a,	// (0x0001734d) cell_vkb_candidate_pane_ParamLimits

0xc0a9,	// (0x00016eac) aid_size_cell_vkb_ParamLimits

0xc0a9,	// (0x00016eac) aid_size_cell_vkb

0xc54a,	// (0x0001734d) cell_vkb_candidate_pane

0x601d,	// (0x00010e20) bg_popup_fep_shadow_pane_g1

0xc137,	// (0x00016f3a) fep_vkb_bottom_pane_ParamLimits

0xc137,	// (0x00016f3a) fep_vkb_bottom_pane

0xc16d,	// (0x00016f70) fep_vkb_candidate_pane_ParamLimits

0xc16d,	// (0x00016f70) fep_vkb_candidate_pane

0xc189,	// (0x00016f8c) fep_vkb_keypad_pane_ParamLimits

0xc189,	// (0x00016f8c) fep_vkb_keypad_pane

0xc1cf,	// (0x00016fd2) fep_vkb_side_pane_ParamLimits

0xc1cf,	// (0x00016fd2) fep_vkb_side_pane

0xc20b,	// (0x0001700e) fep_vkb_top_pane_ParamLimits

0xc20b,	// (0x0001700e) fep_vkb_top_pane

0xc247,	// (0x0001704a) fep_vkb_top_pane_g1_ParamLimits

0xc247,	// (0x0001704a) fep_vkb_top_pane_g1

0xc256,	// (0x00017059) fep_vkb_top_pane_g2_ParamLimits

0xc256,	// (0x00017059) fep_vkb_top_pane_g2

0xc265,	// (0x00017068) fep_vkb_top_pane_g3_ParamLimits

0xc265,	// (0x00017068) fep_vkb_top_pane_g3

0x0003,

0xfb25,	// (0x0001a928) fep_vkb_top_pane_g_ParamLimits

0xfb25,	// (0x0001a928) fep_vkb_top_pane_g

0xc283,	// (0x00017086) fep_vkb_top_text_pane_ParamLimits

0xc283,	// (0x00017086) fep_vkb_top_text_pane

0xc294,	// (0x00017097) fep_vkb_side_pane_g1_ParamLimits

0xc294,	// (0x00017097) fep_vkb_side_pane_g1

0xc2dd,	// (0x000170e0) grid_vkb_side_pane_ParamLimits

0xc2dd,	// (0x000170e0) grid_vkb_side_pane

0x6025,	// (0x00010e28) bg_popup_fep_shadow_pane_g2

0x602e,	// (0x00010e31) bg_popup_fep_shadow_pane_g3

0x6036,	// (0x00010e39) bg_popup_fep_shadow_pane_g4

0x603f,	// (0x00010e42) bg_popup_fep_shadow_pane_g5

0x6049,	// (0x00010e4c) bg_popup_fep_shadow_pane_g6

0x6051,	// (0x00010e54) bg_popup_fep_shadow_pane_g7

0x7ead,	// (0x00012cb0) bg_popup_fep_shadow_pane_g8

0xc334,	// (0x00017137) grid_vkb_keypad_number_pane_ParamLimits

0xc334,	// (0x00017137) grid_vkb_keypad_number_pane

0xc344,	// (0x00017147) grid_vkb_keypad_pane_ParamLimits

0xc344,	// (0x00017147) grid_vkb_keypad_pane

0xc36a,	// (0x0001716d) fep_vkb_bottom_pane_g1_ParamLimits

0xc36a,	// (0x0001716d) fep_vkb_bottom_pane_g1

0xc393,	// (0x00017196) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc393,	// (0x00017196) grid_vkb_keypad_bottom_left_pane

0xc3a8,	// (0x000171ab) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3a8,	// (0x000171ab) grid_vkb_keypad_bottom_right_pane

0xc3bd,	// (0x000171c0) fep_vkb_top_text_pane_g1

0xc3d8,	// (0x000171db) fep_vkb_top_text_pane_t1

0xc3ed,	// (0x000171f0) cell_vkb_side_pane_ParamLimits

0xc3ed,	// (0x000171f0) cell_vkb_side_pane

0xbff7,	// (0x00016dfa) cell_vkb_side_pane_g1

0xc42c,	// (0x0001722f) cell_vkb_keypad_pane_ParamLimits

0xc42c,	// (0x0001722f) cell_vkb_keypad_pane

0xc4a1,	// (0x000172a4) cell_vkb_keypad_pane_g1

0x0008,

0xfb52,	// (0x0001a955) bg_popup_fep_shadow_pane_g

0x6063,	// (0x00010e66) cell_hwr_side_pane_g1

0x6063,	// (0x00010e66) cell_hwr_side_pane_g2

0xc4ab,	// (0x000172ae) cell_vkb_keypad_pane_t1

0xc4b9,	// (0x000172bc) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4b9,	// (0x000172bc) cell_vkb_keypad_bottom_left_pane

0xc4d6,	// (0x000172d9) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc4d6,	// (0x000172d9) cell_vkb_keypad_bottom_right_pane

0xbff7,	// (0x00016dfa) cell_vkb_keypad_bottom_left_pane_g1

0xbff7,	// (0x00016dfa) cell_vkb_keypad_bottom_right_pane_g1

0xc50f,	// (0x00017312) cell_vkb_keypad_number_pane_ParamLimits

0xc50f,	// (0x00017312) cell_vkb_keypad_number_pane

0xc52e,	// (0x00017331) cell_vkb_keypad_number_pane_g1

0xc538,	// (0x0001733b) cell_vkb_keypad_number_pane_g2

0xc541,	// (0x00017344) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb44,	// (0x0001a947) cell_vkb_keypad_number_pane_g

0xc4ab,	// (0x000172ae) cell_vkb_keypad_number_pane_t1

0xc565,	// (0x00017368) fep_vkb_candidate_pane_g1

0x0001,

0xfb65,	// (0x0001a968) cell_hwr_side_pane_g

0xc57e,	// (0x00017381) cell_hwr_side_pane_t1

0x606d,	// (0x00010e70) cell_hwr_side_pane_t1_copy1

0x607b,	// (0x00010e7e) cell_hwr_candidate_pane_g1

0x60aa,	// (0x00010ead) cell_hwr_candidate_pane_t1

0xbff7,	// (0x00016dfa) cell_vkb_candidate_pane_g2

0xc5c2,	// (0x000173c5) cell_vkb_candidate_pane_t1

0x5e16,	// (0x00010c19) bg_popup_fep_shadow_pane_ParamLimits

0x5e16,	// (0x00010c19) bg_popup_fep_shadow_pane

0x5ecb,	// (0x00010cce) bg_fep_hwr_top_pane_g4

0xc077,	// (0x00016e7a) bg_hwr_side_pane_g1_ParamLimits

0xc077,	// (0x00016e7a) bg_hwr_side_pane_g1

0x5f3c,	// (0x00010d3f) cell_hwr_side_pane_ParamLimits

0x5f3c,	// (0x00010d3f) cell_hwr_side_pane

0x5f77,	// (0x00010d7a) fep_hwr_write_pane_g1_ParamLimits

0x5f77,	// (0x00010d7a) fep_hwr_write_pane_g1

0x5f84,	// (0x00010d87) fep_hwr_write_pane_g2_ParamLimits

0x5f84,	// (0x00010d87) fep_hwr_write_pane_g2

0x5f91,	// (0x00010d94) fep_hwr_write_pane_g3_ParamLimits

0x5f91,	// (0x00010d94) fep_hwr_write_pane_g3

0x5f9f,	// (0x00010da2) fep_hwr_write_pane_g4_ParamLimits

0x5f9f,	// (0x00010da2) fep_hwr_write_pane_g4

0x0005,

0xfb11,	// (0x0001a914) fep_hwr_write_pane_g_ParamLimits

0xfb11,	// (0x0001a914) fep_hwr_write_pane_g

0x5ecb,	// (0x00010cce) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5ecb,	// (0x00010cce) bg_fep_hwr_candidate_pane_g2

0x5fb4,	// (0x00010db7) cell_hwr_candidate_pane_ParamLimits

0x5fb4,	// (0x00010db7) cell_hwr_candidate_pane

0x5ff6,	// (0x00010df9) fep_hwr_candidate_pane_g1_ParamLimits

0xc0d7,	// (0x00016eda) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc0d7,	// (0x00016eda) bg_popup_fep_shadow_pane_cp2

0xc275,	// (0x00017078) fep_vkb_top_pane_g4_ParamLimits

0xc275,	// (0x00017078) fep_vkb_top_pane_g4

0xc2bb,	// (0x000170be) fep_vkb_side_pane_g2_ParamLimits

0xc2bb,	// (0x000170be) fep_vkb_side_pane_g2

0x7b8e,	// (0x00012991) list_setting_pane_t4_ParamLimits

0x7b8e,	// (0x00012991) list_setting_pane_t4

0x7c08,	// (0x00012a0b) list_setting_number_pane_t5_ParamLimits

0x7c08,	// (0x00012a0b) list_setting_number_pane_t5

0x85ac,	// (0x000133af) list_double_heading_pane_cp2_ParamLimits

0x85ac,	// (0x000133af) list_double_heading_pane_cp2

0x79b5,	// (0x000127b8) list_double_heading_pane_g1_cp2_ParamLimits

0x79b5,	// (0x000127b8) list_double_heading_pane_g1_cp2

0x7d92,	// (0x00012b95) list_double_heading_pane_g2_cp2_ParamLimits

0x7d92,	// (0x00012b95) list_double_heading_pane_g2_cp2

0xc5d0,	// (0x000173d3) list_double_heading_pane_t1_cp2_ParamLimits

0xc5d0,	// (0x000173d3) list_double_heading_pane_t1_cp2

0xc5e6,	// (0x000173e9) list_double_heading_pane_t2_cp2_ParamLimits

0xc5e6,	// (0x000173e9) list_double_heading_pane_t2_cp2

0x6e5c,	// (0x00011c5f) aid_value_unit2

0x4bbb,	// (0x0000f9be) popup_preview_fixed_window

0x720b,	// (0x0001200e) bg_popup_preview_window_pane_cp02

0xc5f8,	// (0x000173fb) list_preview_fixed_pane

0xc63e,	// (0x00017441) list_empty_pane_fp_ParamLimits

0xc63e,	// (0x00017441) list_empty_pane_fp

0xc63e,	// (0x00017441) list_single_cale_day_pane_fp_ParamLimits

0xc63e,	// (0x00017441) list_single_cale_day_pane_fp

0xc63e,	// (0x00017441) list_single_graphic_heading_pane_fp_ParamLimits

0xc63e,	// (0x00017441) list_single_graphic_heading_pane_fp

0xc63e,	// (0x00017441) list_single_graphic_pane_fp_ParamLimits

0xc63e,	// (0x00017441) list_single_graphic_pane_fp

0xc63e,	// (0x00017441) list_single_heading_pane_fp_ParamLimits

0xc63e,	// (0x00017441) list_single_heading_pane_fp

0xc63e,	// (0x00017441) list_single_pane_fp_ParamLimits

0xc63e,	// (0x00017441) list_single_pane_fp

0xc653,	// (0x00017456) list_single_pane_fp_g1_ParamLimits

0xc653,	// (0x00017456) list_single_pane_fp_g1

0x79b5,	// (0x000127b8) list_single_pane_fp_g2_ParamLimits

0x79b5,	// (0x000127b8) list_single_pane_fp_g2

0x7d92,	// (0x00012b95) list_single_pane_fp_g3_ParamLimits

0x7d92,	// (0x00012b95) list_single_pane_fp_g3

0xc65f,	// (0x00017462) list_single_pane_fp_g4_ParamLimits

0xc65f,	// (0x00017462) list_single_pane_fp_g4

0x0003,

0xfb78,	// (0x0001a97b) list_single_pane_fp_g_ParamLimits

0xfb78,	// (0x0001a97b) list_single_pane_fp_g

0xc66b,	// (0x0001746e) list_single_pane_fp_t1_ParamLimits

0xc66b,	// (0x0001746e) list_single_pane_fp_t1

0xc682,	// (0x00017485) list_single_graphic_pane_fp_g1_ParamLimits

0xc682,	// (0x00017485) list_single_graphic_pane_fp_g1

0xc653,	// (0x00017456) list_single_graphic_pane_fp_g2_ParamLimits

0xc653,	// (0x00017456) list_single_graphic_pane_fp_g2

0x79b5,	// (0x000127b8) list_single_graphic_pane_fp_g3_ParamLimits

0x79b5,	// (0x000127b8) list_single_graphic_pane_fp_g3

0x7d92,	// (0x00012b95) list_single_graphic_pane_fp_g4_ParamLimits

0x7d92,	// (0x00012b95) list_single_graphic_pane_fp_g4

0xc65f,	// (0x00017462) list_single_graphic_pane_fp_g5_ParamLimits

0xc65f,	// (0x00017462) list_single_graphic_pane_fp_g5

0x0004,

0xfb81,	// (0x0001a984) list_single_graphic_pane_fp_g_ParamLimits

0xfb81,	// (0x0001a984) list_single_graphic_pane_fp_g

0xc68e,	// (0x00017491) list_single_graphic_pane_fp_t1_ParamLimits

0xc68e,	// (0x00017491) list_single_graphic_pane_fp_t1

0xc682,	// (0x00017485) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc682,	// (0x00017485) list_single_graphic_heading_pane_fp_g1

0xc653,	// (0x00017456) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc653,	// (0x00017456) list_single_graphic_heading_pane_fp_g2

0x79b5,	// (0x000127b8) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x79b5,	// (0x000127b8) list_single_graphic_heading_pane_fp_g3

0x7d92,	// (0x00012b95) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7d92,	// (0x00012b95) list_single_graphic_heading_pane_fp_g4

0xc65f,	// (0x00017462) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc65f,	// (0x00017462) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb81,	// (0x0001a984) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb81,	// (0x0001a984) list_single_graphic_heading_pane_fp_g

0xc6a4,	// (0x000174a7) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc6a4,	// (0x000174a7) list_single_graphic_heading_pane_fp_t1

0xc6ba,	// (0x000174bd) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc6ba,	// (0x000174bd) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8c,	// (0x0001a98f) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8c,	// (0x0001a98f) list_single_graphic_heading_pane_fp_t

0xc6cc,	// (0x000174cf) list_single_cale_day_pane_fp_g1_ParamLimits

0xc6cc,	// (0x000174cf) list_single_cale_day_pane_fp_g1

0xc704,	// (0x00017507) list_single_cale_day_pane_fp_g2_ParamLimits

0xc704,	// (0x00017507) list_single_cale_day_pane_fp_g2

0xc710,	// (0x00017513) list_single_cale_day_pane_fp_g3_ParamLimits

0xc710,	// (0x00017513) list_single_cale_day_pane_fp_g3

0xc738,	// (0x0001753b) list_single_cale_day_pane_fp_g4_ParamLimits

0xc738,	// (0x0001753b) list_single_cale_day_pane_fp_g4

0xc75c,	// (0x0001755f) list_single_cale_day_pane_fp_g5_ParamLimits

0xc75c,	// (0x0001755f) list_single_cale_day_pane_fp_g5

0x0004,

0xfb91,	// (0x0001a994) list_single_cale_day_pane_fp_g_ParamLimits

0xfb91,	// (0x0001a994) list_single_cale_day_pane_fp_g

0xc780,	// (0x00017583) list_single_cale_day_pane_fp_t1_ParamLimits

0xc780,	// (0x00017583) list_single_cale_day_pane_fp_t1

0xc7a6,	// (0x000175a9) list_single_cale_day_pane_fp_t2_ParamLimits

0xc7a6,	// (0x000175a9) list_single_cale_day_pane_fp_t2

0xc7bf,	// (0x000175c2) list_single_cale_day_pane_fp_t3_ParamLimits

0xc7bf,	// (0x000175c2) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9c,	// (0x0001a99f) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9c,	// (0x0001a99f) list_single_cale_day_pane_fp_t

0xc653,	// (0x00017456) list_empty_pane_fp_g1_ParamLimits

0xc653,	// (0x00017456) list_empty_pane_fp_g1

0xc7d8,	// (0x000175db) list_empty_pane_fp_t1

0xc7e6,	// (0x000175e9) list_empty_pane_fp_t2

0x0001,

0xfba3,	// (0x0001a9a6) list_empty_pane_fp_t

0xc653,	// (0x00017456) list_single_heading_pane_fp_g1_ParamLimits

0xc653,	// (0x00017456) list_single_heading_pane_fp_g1

0x79b5,	// (0x000127b8) list_single_heading_pane_fp_g2_ParamLimits

0x79b5,	// (0x000127b8) list_single_heading_pane_fp_g2

0x7d92,	// (0x00012b95) list_single_heading_pane_fp_g3_ParamLimits

0x7d92,	// (0x00012b95) list_single_heading_pane_fp_g3

0x0002,

0xfba8,	// (0x0001a9ab) list_single_heading_pane_fp_g_ParamLimits

0xfba8,	// (0x0001a9ab) list_single_heading_pane_fp_g

0xc7f4,	// (0x000175f7) list_single_heading_pane_fp_t1_ParamLimits

0xc7f4,	// (0x000175f7) list_single_heading_pane_fp_t1

0xc806,	// (0x00017609) list_single_heading_pane_fp_t2_ParamLimits

0xc806,	// (0x00017609) list_single_heading_pane_fp_t2

0x0001,

0xfbaf,	// (0x0001a9b2) list_single_heading_pane_fp_t_ParamLimits

0xfbaf,	// (0x0001a9b2) list_single_heading_pane_fp_t

0x80e8,	// (0x00012eeb) aid_size_cell_fast

0x717b,	// (0x00011f7e) soft_indicator_pane_cp1_t1

0x8125,	// (0x00012f28) cell_app_pane_cp2_ParamLimits

0x8125,	// (0x00012f28) cell_app_pane_cp2

0x5e38,	// (0x00010c3b) fep_hwr_candidate_drop_down_list_pane

0x6010,	// (0x00010e13) fep_hwr_candidate_pane_g3_ParamLimits

0x6010,	// (0x00010e13) fep_hwr_candidate_pane_g3

0x3ecb,	// (0x0000ecce) fep_hwr_candidate_pane_g4_ParamLimits

0x3ecb,	// (0x0000ecce) fep_hwr_candidate_pane_g4

0x0002,

0xfb1e,	// (0x0001a921) fep_hwr_candidate_pane_g_ParamLimits

0xfb1e,	// (0x0001a921) fep_hwr_candidate_pane_g

0xc15c,	// (0x00016f5f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc15c,	// (0x00016f5f) fep_vkb_candidate_drop_down_list_pane

0xc56d,	// (0x00017370) fep_vkb_candidate_pane_g3

0xc575,	// (0x00017378) fep_vkb_candidate_pane_g4

0x0002,

0xfb4b,	// (0x0001a94e) fep_vkb_candidate_pane_g

0x607b,	// (0x00010e7e) cell_hwr_candidate_pane_g1_ParamLimits

0x6089,	// (0x00010e8c) cell_hwr_candidate_pane_g3_ParamLimits

0x6089,	// (0x00010e8c) cell_hwr_candidate_pane_g3

0xe126,	// (0x00018f29) cell_hwr_candidate_pane_g4_ParamLimits

0xe126,	// (0x00018f29) cell_hwr_candidate_pane_g4

0x0002,

0xfb6a,	// (0x0001a96d) cell_hwr_candidate_pane_g_ParamLimits

0xfb6a,	// (0x0001a96d) cell_hwr_candidate_pane_g

0xc58c,	// (0x0001738f) cell_vkb_candidate_pane_g3_ParamLimits

0xc58c,	// (0x0001738f) cell_vkb_candidate_pane_g3

0xc5a7,	// (0x000173aa) cell_vkb_candidate_pane_g4_ParamLimits

0xc5a7,	// (0x000173aa) cell_vkb_candidate_pane_g4

0xc81c,	// (0x0001761f) cell_app_pane_cp2_g1_ParamLimits

0xc81c,	// (0x0001761f) cell_app_pane_cp2_g1

0xc83a,	// (0x0001763d) cell_app_pane_cp2_g2_ParamLimits

0xc83a,	// (0x0001763d) cell_app_pane_cp2_g2

0x0001,

0xfbb4,	// (0x0001a9b7) cell_app_pane_cp2_g_ParamLimits

0xfbb4,	// (0x0001a9b7) cell_app_pane_cp2_g

0xc846,	// (0x00017649) cell_app_pane_cp2_t1_ParamLimits

0xc846,	// (0x00017649) cell_app_pane_cp2_t1

0x7d6c,	// (0x00012b6f) grid_highlight_pane_cp1_ParamLimits

0x7d6c,	// (0x00012b6f) grid_highlight_pane_cp1

0x60c8,	// (0x00010ecb) cell_hwr_candidate_pane_cp1_ParamLimits

0x60c8,	// (0x00010ecb) cell_hwr_candidate_pane_cp1

0x607b,	// (0x00010e7e) fep_hwr_candidate_drop_down_list_pane_g1

0x60e7,	// (0x00010eea) fep_hwr_candidate_drop_down_list_pane_g2

0x60f4,	// (0x00010ef7) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb9,	// (0x0001a9bc) fep_hwr_candidate_drop_down_list_pane_g

0x6101,	// (0x00010f04) fep_hwr_candidate_drop_down_list_scroll_pane

0x610a,	// (0x00010f0d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x610a,	// (0x00010f0d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6117,	// (0x00010f1a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6117,	// (0x00010f1a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6124,	// (0x00010f27) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6124,	// (0x00010f27) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6131,	// (0x00010f34) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6131,	// (0x00010f34) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x614c,	// (0x00010f4f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x614c,	// (0x00010f4f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6167,	// (0x00010f6a) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6167,	// (0x00010f6a) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6182,	// (0x00010f85) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6182,	// (0x00010f85) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x619d,	// (0x00010fa0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x619d,	// (0x00010fa0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc0,	// (0x0001a9c3) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc0,	// (0x0001a9c3) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc858,	// (0x0001765b) cell_vkb_candidate_pane_cp1_ParamLimits

0xc858,	// (0x0001765b) cell_vkb_candidate_pane_cp1

0xc275,	// (0x00017078) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc275,	// (0x00017078) fep_vkb_candidate_drop_down_list_pane_g1

0xc878,	// (0x0001767b) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc878,	// (0x0001767b) fep_vkb_candidate_drop_down_list_pane_g2

0xc885,	// (0x00017688) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc885,	// (0x00017688) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd1,	// (0x0001a9d4) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd1,	// (0x0001a9d4) fep_vkb_candidate_drop_down_list_pane_g

0xc892,	// (0x00017695) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc892,	// (0x00017695) fep_vkb_candidate_drop_down_list_scroll_pane

0xc89f,	// (0x000176a2) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc89f,	// (0x000176a2) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc8ac,	// (0x000176af) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc8ac,	// (0x000176af) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc8b8,	// (0x000176bb) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc8b8,	// (0x000176bb) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc8c4,	// (0x000176c7) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc8c4,	// (0x000176c7) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc8e5,	// (0x000176e8) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc8e5,	// (0x000176e8) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc906,	// (0x00017709) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc906,	// (0x00017709) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc927,	// (0x0001772a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc927,	// (0x0001772a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc948,	// (0x0001774b) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc948,	// (0x0001774b) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd8,	// (0x0001a9db) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd8,	// (0x0001a9db) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6e92,	// (0x00011c95) title_pane_g1_ParamLimits

0x6e9f,	// (0x00011ca2) title_pane_g2_ParamLimits

0xf54e,	// (0x0001a351) title_pane_g_ParamLimits

0x8555,	// (0x00013358) aid_call2_pane

0x855d,	// (0x00013360) aid_call_pane

0x8565,	// (0x00013368) popup_clock_analogue_window_g1

0x8565,	// (0x00013368) popup_clock_analogue_window_g2

0x4f2c,	// (0x0000fd2f) popup_clock_analogue_window_g3

0x4f35,	// (0x0000fd38) popup_clock_analogue_window_g4

0x6e7e,	// (0x00011c81) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0001a4f6) popup_clock_analogue_window_g

0x4f3d,	// (0x0000fd40) popup_clock_analogue_window_t1

0x4f4b,	// (0x0000fd4e) clock_digital_number_pane_ParamLimits

0x4f4b,	// (0x0000fd4e) clock_digital_number_pane

0x4f57,	// (0x0000fd5a) clock_digital_number_pane_cp02_ParamLimits

0x4f57,	// (0x0000fd5a) clock_digital_number_pane_cp02

0x4f63,	// (0x0000fd66) clock_digital_number_pane_cp03_ParamLimits

0x4f63,	// (0x0000fd66) clock_digital_number_pane_cp03

0x4f6f,	// (0x0000fd72) clock_digital_number_pane_cp04_ParamLimits

0x4f6f,	// (0x0000fd72) clock_digital_number_pane_cp04

0x4f7b,	// (0x0000fd7e) clock_digital_separator_pane_ParamLimits

0x4f7b,	// (0x0000fd7e) clock_digital_separator_pane

0x4f87,	// (0x0000fd8a) popup_clock_digital_window_t1_ParamLimits

0x4f87,	// (0x0000fd8a) popup_clock_digital_window_t1

0x6e7e,	// (0x00011c81) clock_digital_number_pane_g1

0x6e7e,	// (0x00011c81) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0001a501) clock_digital_number_pane_g

0x6e7e,	// (0x00011c81) clock_digital_separator_pane_g1

0x6e7e,	// (0x00011c81) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0001a501) clock_digital_separator_pane_g

0x8f77,	// (0x00013d7a) aid_fill_nsta_ParamLimits

0x90bd,	// (0x00013ec0) indicator_nsta_pane_ParamLimits

0x9236,	// (0x00014039) popup_clock_analogue_window

0x9236,	// (0x00014039) popup_clock_digital_window

0x6f68,	// (0x00011d6b) grid_indicator_nsta_pane_ParamLimits

0xb9a5,	// (0x000167a8) clock_nsta_pane_t2

0x0001,

0xfa9e,	// (0x0001a8a1) clock_nsta_pane_t

0x4ef0,	// (0x0000fcf3) aid_size_max_handle

0x4efa,	// (0x0000fcfd) aid_size_min_handle

0x8c07,	// (0x00013a0a) editor_scroll_pane

0xc963,	// (0x00017766) ex_editor_pane

0x8056,	// (0x00012e59) scroll_pane_cp13

0x7790,	// (0x00012593) scroll_pane_cp14

0x8594,	// (0x00013397) scroll_pane_cp36

0x85c0,	// (0x000133c3) list_single_graphic_hl_pane_cp2_ParamLimits

0x85c0,	// (0x000133c3) list_single_graphic_hl_pane_cp2

0xac1f,	// (0x00015a22) list_single_graphic_hl_pane_ParamLimits

0xac1f,	// (0x00015a22) list_single_graphic_hl_pane

0xc96b,	// (0x0001776e) aid_size_min_hl_cp1

0xc974,	// (0x00017777) list_highlight_pane_cp34_ParamLimits

0xc974,	// (0x00017777) list_highlight_pane_cp34

0xc985,	// (0x00017788) list_single_graphic_hl_pane_g1_ParamLimits

0xc985,	// (0x00017788) list_single_graphic_hl_pane_g1

0xc992,	// (0x00017795) list_single_graphic_hl_pane_g2_ParamLimits

0xc992,	// (0x00017795) list_single_graphic_hl_pane_g2

0xc992,	// (0x00017795) list_single_graphic_hl_pane_g3_ParamLimits

0xc992,	// (0x00017795) list_single_graphic_hl_pane_g3

0xb180,	// (0x00015f83) list_single_graphic_hl_pane_g4_ParamLimits

0xb180,	// (0x00015f83) list_single_graphic_hl_pane_g4

0xc99e,	// (0x000177a1) list_single_graphic_hl_pane_g5_ParamLimits

0xc99e,	// (0x000177a1) list_single_graphic_hl_pane_g5

0x0004,

0xfbe9,	// (0x0001a9ec) list_single_graphic_hl_pane_g_ParamLimits

0xfbe9,	// (0x0001a9ec) list_single_graphic_hl_pane_g

0xc9b2,	// (0x000177b5) list_single_graphic_hl_pane_t1_ParamLimits

0xc9b2,	// (0x000177b5) list_single_graphic_hl_pane_t1

0xc9c8,	// (0x000177cb) aid_size_min_hl_cp2

0xc9d1,	// (0x000177d4) list_highlight_pane_cp34_cp2_ParamLimits

0xc9d1,	// (0x000177d4) list_highlight_pane_cp34_cp2

0xc985,	// (0x00017788) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc985,	// (0x00017788) list_single_graphic_hl_pane_g1_cp2

0xc9de,	// (0x000177e1) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc9de,	// (0x000177e1) list_single_graphic_hl_pane_g2_cp2

0xc9ea,	// (0x000177ed) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc9ea,	// (0x000177ed) list_single_graphic_hl_pane_g3_cp2

0xb180,	// (0x00015f83) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xb180,	// (0x00015f83) list_single_graphic_hl_pane_g4_cp2

0xc99e,	// (0x000177a1) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc99e,	// (0x000177a1) list_single_graphic_hl_pane_g5_cp2

0x523b,	// (0x0001003e) control_pane_g4_ParamLimits

0x523b,	// (0x0001003e) control_pane_g4

0x8f4d,	// (0x00013d50) bg_popup_sub_pane_cp10_ParamLimits

0xc001,	// (0x00016e04) list_choice_list_pane_ParamLimits

0xc010,	// (0x00016e13) scroll_pane_cp23

0x720b,	// (0x0001200e) bg_popup_preview_window_pane_cp02_ParamLimits

0xc5f8,	// (0x000173fb) list_preview_fixed_pane_ParamLimits

0xc60e,	// (0x00017411) list_preview_fixed_pane_cp_ParamLimits

0xc60e,	// (0x00017411) list_preview_fixed_pane_cp

0xc61a,	// (0x0001741d) popup_preview_fixed_window_g1_ParamLimits

0xc61a,	// (0x0001741d) popup_preview_fixed_window_g1

0xc626,	// (0x00017429) popup_preview_fixed_window_g2_ParamLimits

0xc626,	// (0x00017429) popup_preview_fixed_window_g2

0x0002,

0xfb71,	// (0x0001a974) popup_preview_fixed_window_g_ParamLimits

0xfb71,	// (0x0001a974) popup_preview_fixed_window_g

0x4e64,	// (0x0000fc67) aid_navi_side_left_pane_ParamLimits

0x4e79,	// (0x0000fc7c) aid_navi_side_right_pane_ParamLimits

0x4e91,	// (0x0000fc94) navi_icon_pane_stacon_ParamLimits

0x4ea5,	// (0x0000fca8) navi_navi_pane_stacon_ParamLimits

0x4e91,	// (0x0000fc94) navi_text_pane_stacon_ParamLimits

0x4a7c,	// (0x0000f87f) main_text_info_pane

0xca0e,	// (0x00017811) listscroll_text_info_pane

0xca16,	// (0x00017819) list_text_info_pane_ParamLimits

0xca16,	// (0x00017819) list_text_info_pane

0xca25,	// (0x00017828) scroll_pane_cp24_ParamLimits

0xca25,	// (0x00017828) scroll_pane_cp24

0xca43,	// (0x00017846) list_text_info_pane_t1_ParamLimits

0xca43,	// (0x00017846) list_text_info_pane_t1

0x53af,	// (0x000101b2) popup_fast_swap2_window_ParamLimits

0x53af,	// (0x000101b2) popup_fast_swap2_window

0xca74,	// (0x00017877) aid_size_cell_fast2

0x6e74,	// (0x00011c77) bg_popup_window_pane_cp17

0x99e3,	// (0x000147e6) heading_pane_cp2

0x745a,	// (0x0001225d) listscroll_fast2_pane

0xca7e,	// (0x00017881) grid_fast2_pane

0xca88,	// (0x0001788b) listscroll_fast2_pane_g1

0xca90,	// (0x00017893) listscroll_fast2_pane_g2

0x0001,

0xfbf4,	// (0x0001a9f7) listscroll_fast2_pane_g

0x8056,	// (0x00012e59) scroll_pane_cp26

0xca9a,	// (0x0001789d) cell_fast2_pane_ParamLimits

0xca9a,	// (0x0001789d) cell_fast2_pane

0xcaaf,	// (0x000178b2) cell_fast2_pane_g1

0xcab8,	// (0x000178bb) cell_fast2_pane_g2

0xcac1,	// (0x000178c4) cell_fast2_pane_g3

0x0002,

0xfbf9,	// (0x0001a9fc) cell_fast2_pane_g

0x754d,	// (0x00012350) grid_highlight_pane_cp9

0x5375,	// (0x00010178) main_eswt_pane_ParamLimits

0x5375,	// (0x00010178) main_eswt_pane

0xca3a,	// (0x0001783d) list_single_text_info_pane

0xcac9,	// (0x000178cc) eswt_ctrl_button_pane

0xcac9,	// (0x000178cc) eswt_ctrl_canvas_pane

0xcad1,	// (0x000178d4) eswt_ctrl_combo_pane

0xcac9,	// (0x000178cc) eswt_ctrl_default_pane

0xcac9,	// (0x000178cc) eswt_ctrl_label_pane

0xcad9,	// (0x000178dc) eswt_ctrl_wait_pane

0xcae1,	// (0x000178e4) eswt_shell_pane

0x6e74,	// (0x00011c77) listscroll_eswt_app_pane

0xcb01,	// (0x00017904) popup_eswt_tasktip_window_ParamLimits

0xcb01,	// (0x00017904) popup_eswt_tasktip_window

0x95bb,	// (0x000143be) bg_popup_window_pane_cp18

0xcb12,	// (0x00017915) eswt_control_pane_g1_ParamLimits

0xcb12,	// (0x00017915) eswt_control_pane_g1

0xcb1f,	// (0x00017922) eswt_control_pane_g2_ParamLimits

0xcb1f,	// (0x00017922) eswt_control_pane_g2

0xcb2c,	// (0x0001792f) eswt_control_pane_g3_ParamLimits

0xcb2c,	// (0x0001792f) eswt_control_pane_g3

0xcb39,	// (0x0001793c) eswt_control_pane_g4_ParamLimits

0xcb39,	// (0x0001793c) eswt_control_pane_g4

0x0003,

0xfc00,	// (0x0001aa03) eswt_control_pane_g_ParamLimits

0xfc00,	// (0x0001aa03) eswt_control_pane_g

0x7d6c,	// (0x00012b6f) bg_button_pane_ParamLimits

0x7d6c,	// (0x00012b6f) bg_button_pane

0x7562,	// (0x00012365) common_borders_pane_copy2_ParamLimits

0x7562,	// (0x00012365) common_borders_pane_copy2

0xcb46,	// (0x00017949) control_button_pane_g1_ParamLimits

0xcb46,	// (0x00017949) control_button_pane_g1

0xcb52,	// (0x00017955) control_button_pane_g2_ParamLimits

0xcb52,	// (0x00017955) control_button_pane_g2

0xcb5e,	// (0x00017961) control_button_pane_g3_ParamLimits

0xcb5e,	// (0x00017961) control_button_pane_g3

0x0002,

0xfc09,	// (0x0001aa0c) control_button_pane_g_ParamLimits

0xfc09,	// (0x0001aa0c) control_button_pane_g

0xcb72,	// (0x00017975) control_button_pane_t1

0xcb80,	// (0x00017983) control_button_pane_t2

0x0001,

0xfc10,	// (0x0001aa13) control_button_pane_t

0x948d,	// (0x00014290) bg_button_pane_g1

0x949d,	// (0x000142a0) bg_button_pane_g2

0x9495,	// (0x00014298) bg_button_pane_g3

0x94ad,	// (0x000142b0) bg_button_pane_g4

0x94a5,	// (0x000142a8) bg_button_pane_g5

0x94b5,	// (0x000142b8) bg_button_pane_g6

0x94bd,	// (0x000142c0) bg_button_pane_g7

0x94cd,	// (0x000142d0) bg_button_pane_g8

0x94c5,	// (0x000142c8) bg_button_pane_g9

0x0008,

0xf861,	// (0x0001a664) bg_button_pane_g

0xbfbc,	// (0x00016dbf) common_borders_pane_ParamLimits

0xbfbc,	// (0x00016dbf) common_borders_pane

0xcb12,	// (0x00017915) eswt_control_pane_g1_copy1_ParamLimits

0xcb12,	// (0x00017915) eswt_control_pane_g1_copy1

0xcb1f,	// (0x00017922) eswt_control_pane_g2_copy1_ParamLimits

0xcb1f,	// (0x00017922) eswt_control_pane_g2_copy1

0xcb2c,	// (0x0001792f) eswt_control_pane_g3_copy1_ParamLimits

0xcb2c,	// (0x0001792f) eswt_control_pane_g3_copy1

0xcb39,	// (0x0001793c) eswt_control_pane_g4_copy1_ParamLimits

0xcb39,	// (0x0001793c) eswt_control_pane_g4_copy1

0xbff7,	// (0x00016dfa) bg_eswt_ctrl_canvas_pane_g1

0xbfbc,	// (0x00016dbf) common_borders_pane_cp2_ParamLimits

0xbfbc,	// (0x00016dbf) common_borders_pane_cp2

0xbfbc,	// (0x00016dbf) common_borders_pane_cp3_ParamLimits

0xbfbc,	// (0x00016dbf) common_borders_pane_cp3

0xcb8e,	// (0x00017991) separator_horizontal_pane

0xcb96,	// (0x00017999) separator_vertical_pane

0xcb12,	// (0x00017915) eswt_control_pane_g1_copy2_ParamLimits

0xcb12,	// (0x00017915) eswt_control_pane_g1_copy2

0xcb1f,	// (0x00017922) eswt_control_pane_g2_copy2_ParamLimits

0xcb1f,	// (0x00017922) eswt_control_pane_g2_copy2

0xcb2c,	// (0x0001792f) eswt_control_pane_g3_copy2_ParamLimits

0xcb2c,	// (0x0001792f) eswt_control_pane_g3_copy2

0xcb39,	// (0x0001793c) eswt_control_pane_g4_copy2_ParamLimits

0xcb39,	// (0x0001793c) eswt_control_pane_g4_copy2

0x6e74,	// (0x00011c77) common_borders_pane_cp4

0xcb9f,	// (0x000179a2) separator_horizontal_pane_g1

0xcba8,	// (0x000179ab) separator_horizontal_pane_g2

0xcbb1,	// (0x000179b4) separator_horizontal_pane_g3

0x0002,

0xfc15,	// (0x0001aa18) separator_horizontal_pane_g

0xcb12,	// (0x00017915) eswt_control_pane_g1_copy3_ParamLimits

0xcb12,	// (0x00017915) eswt_control_pane_g1_copy3

0xcb1f,	// (0x00017922) eswt_control_pane_g2_copy3_ParamLimits

0xcb1f,	// (0x00017922) eswt_control_pane_g2_copy3

0xcb2c,	// (0x0001792f) eswt_control_pane_g3_copy3_ParamLimits

0xcb2c,	// (0x0001792f) eswt_control_pane_g3_copy3

0xcb39,	// (0x0001793c) eswt_control_pane_g4_copy3_ParamLimits

0xcb39,	// (0x0001793c) eswt_control_pane_g4_copy3

0x6e74,	// (0x00011c77) common_borders_pane_cp5

0xcbba,	// (0x000179bd) separator_vertical_pane_g1

0xcbc3,	// (0x000179c6) separator_vertical_pane_g2

0xcbcc,	// (0x000179cf) separator_vertical_pane_g3

0x0002,

0xfc1c,	// (0x0001aa1f) separator_vertical_pane_g

0xcb12,	// (0x00017915) eswt_control_pane_g1_copy4_ParamLimits

0xcb12,	// (0x00017915) eswt_control_pane_g1_copy4

0xcb1f,	// (0x00017922) eswt_control_pane_g2_copy4_ParamLimits

0xcb1f,	// (0x00017922) eswt_control_pane_g2_copy4

0xcb2c,	// (0x0001792f) eswt_control_pane_g3_copy4_ParamLimits

0xcb2c,	// (0x0001792f) eswt_control_pane_g3_copy4

0xcb39,	// (0x0001793c) eswt_control_pane_g4_copy4_ParamLimits

0xcb39,	// (0x0001793c) eswt_control_pane_g4_copy4

0xcbd5,	// (0x000179d8) eswt_ctrl_combo_button_pane

0xcbdd,	// (0x000179e0) eswt_ctrl_input_pane

0xcbe5,	// (0x000179e8) popup_choice_list_window_cp70

0xcbed,	// (0x000179f0) eswt_ctrl_input_pane_t1

0x6e74,	// (0x00011c77) input_focus_pane_cp70

0xbfbc,	// (0x00016dbf) bg_button_pane_cp70_ParamLimits

0xbfbc,	// (0x00016dbf) bg_button_pane_cp70

0xcbfb,	// (0x000179fe) eswt_ctrl_combo_button_pane_g1

0xcc03,	// (0x00017a06) wait_bar_pane_cp70

0x95bb,	// (0x000143be) bg_popup_window_pane_cp70_ParamLimits

0x95bb,	// (0x000143be) bg_popup_window_pane_cp70

0xcc0b,	// (0x00017a0e) popup_eswt_tasktip_window_t1

0xcc21,	// (0x00017a24) wait_bar_pane_cp71_ParamLimits

0xcc21,	// (0x00017a24) wait_bar_pane_cp71

0xcc2d,	// (0x00017a30) grid_eswt_app_pane

0x836e,	// (0x00013171) scroll_pane_cp70

0xcc36,	// (0x00017a39) cell_eswt_app_pane_ParamLimits

0xcc36,	// (0x00017a39) cell_eswt_app_pane

0xcc66,	// (0x00017a69) cell_eswt_app_pane_g1_ParamLimits

0xcc66,	// (0x00017a69) cell_eswt_app_pane_g1

0xcc95,	// (0x00017a98) cell_eswt_app_pane_g2_ParamLimits

0xcc95,	// (0x00017a98) cell_eswt_app_pane_g2

0x0001,

0xfc23,	// (0x0001aa26) cell_eswt_app_pane_g_ParamLimits

0xfc23,	// (0x0001aa26) cell_eswt_app_pane_g

0xccbe,	// (0x00017ac1) cell_eswt_app_pane_t1_ParamLimits

0xccbe,	// (0x00017ac1) cell_eswt_app_pane_t1

0xccf0,	// (0x00017af3) grid_highlight_pane_cp70_ParamLimits

0xccf0,	// (0x00017af3) grid_highlight_pane_cp70

0x8adc,	// (0x000138df) set_content_pane_g1

0x8ea6,	// (0x00013ca9) status_small_volume_pane

0x61b8,	// (0x00010fbb) status_small_volume_pane_g1

0x61c0,	// (0x00010fc3) volume_small2_pane

0x61c9,	// (0x00010fcc) volume_small2_pane_g1

0x61d2,	// (0x00010fd5) volume_small2_pane_g2

0x61db,	// (0x00010fde) volume_small2_pane_g3

0x61e4,	// (0x00010fe7) volume_small2_pane_g4

0x61ed,	// (0x00010ff0) volume_small2_pane_g5

0x61f6,	// (0x00010ff9) volume_small2_pane_g6

0x61ff,	// (0x00011002) volume_small2_pane_g7

0x6208,	// (0x0001100b) volume_small2_pane_g8

0x6211,	// (0x00011014) volume_small2_pane_g9

0x621a,	// (0x0001101d) volume_small2_pane_g10

0x0009,

0xfc28,	// (0x0001aa2b) volume_small2_pane_g

0xc3bd,	// (0x000171c0) fep_vkb_top_text_pane_g1_ParamLimits

0xc3d8,	// (0x000171db) fep_vkb_top_text_pane_t1_ParamLimits

0xc632,	// (0x00017435) popup_preview_fixed_window_g3_ParamLimits

0xc632,	// (0x00017435) popup_preview_fixed_window_g3

0x585e,	// (0x00010661) popup_toolbar_trans_pane

0xa97c,	// (0x0001577f) aid_height_set_list_ParamLimits

0xa98d,	// (0x00015790) aid_size_parent_ParamLimits

0x8f4d,	// (0x00013d50) list_highlight_pane_cp2_ParamLimits

0x8adc,	// (0x000138df) set_content_pane_g1_ParamLimits

0xac3b,	// (0x00015a3e) list_single_image_pane_ParamLimits

0xac3b,	// (0x00015a3e) list_single_image_pane

0xccfc,	// (0x00017aff) aid_size_cell_image_ParamLimits

0xccfc,	// (0x00017aff) aid_size_cell_image

0xcd09,	// (0x00017b0c) grid_single_image_pane_ParamLimits

0xcd09,	// (0x00017b0c) grid_single_image_pane

0xa23a,	// (0x0001503d) list_single_image_pane_g1_ParamLimits

0xa23a,	// (0x0001503d) list_single_image_pane_g1

0xcd15,	// (0x00017b18) list_single_image_pane_g2_ParamLimits

0xcd15,	// (0x00017b18) list_single_image_pane_g2

0x0001,

0xfc3d,	// (0x0001aa40) list_single_image_pane_g_ParamLimits

0xfc3d,	// (0x0001aa40) list_single_image_pane_g

0xcd29,	// (0x00017b2c) list_single_image_pane_t1_ParamLimits

0xcd29,	// (0x00017b2c) list_single_image_pane_t1

0xcd3f,	// (0x00017b42) cell_image_list_pane_ParamLimits

0xcd3f,	// (0x00017b42) cell_image_list_pane

0xcd53,	// (0x00017b56) cell_image_list_pane_g1

0xcd5c,	// (0x00017b5f) cell_image_list_pane_g2

0x0001,

0xfc42,	// (0x0001aa45) cell_image_list_pane_g

0xcd65,	// (0x00017b68) aid_size_cell_tb_trans_pane

0x7d6c,	// (0x00012b6f) bg_tb_trans_pane

0xcd77,	// (0x00017b7a) grid_tb_trans_pane

0x948d,	// (0x00014290) bg_tb_trans_pane_g1

0x949d,	// (0x000142a0) bg_tb_trans_pane_g2

0x9495,	// (0x00014298) bg_tb_trans_pane_g3

0x94ad,	// (0x000142b0) bg_tb_trans_pane_g4

0x94a5,	// (0x000142a8) bg_tb_trans_pane_g5

0x94cd,	// (0x000142d0) bg_tb_trans_pane_g6

0x94c5,	// (0x000142c8) bg_tb_trans_pane_g7

0x94b5,	// (0x000142b8) bg_tb_trans_pane_g8

0x94bd,	// (0x000142c0) bg_tb_trans_pane_g9

0x0008,

0xfc47,	// (0x0001aa4a) bg_tb_trans_pane_g

0xcd8b,	// (0x00017b8e) cell_toolbar_trans_pane_ParamLimits

0xcd8b,	// (0x00017b8e) cell_toolbar_trans_pane

0xbff7,	// (0x00016dfa) cell_toolbar_trans_pane_g1

0xbb72,	// (0x00016975) list_form2_midp_pane_t1

0xbb80,	// (0x00016983) list_form2_midp_pane_t2

0x0001,

0xfae4,	// (0x0001a8e7) list_form2_midp_pane_t

0xbb8e,	// (0x00016991) scroll_pane_cp51_ParamLimits

0xbd99,	// (0x00016b9c) form2_midp_wait_pane_g1

0xbda2,	// (0x00016ba5) form2_midp_wait_pane_g2

0xbdab,	// (0x00016bae) form2_midp_wait_pane_g3

0x0002,

0xfaf9,	// (0x0001a8fc) form2_midp_wait_pane_g

0x6f68,	// (0x00011d6b) list_highlight_pane_cp21_ParamLimits

0xbe02,	// (0x00016c05) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe11,	// (0x00016c14) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xabc3,	// (0x000159c6) list_single_2graphic_im_pane_ParamLimits

0xabc3,	// (0x000159c6) list_single_2graphic_im_pane

0xcdb1,	// (0x00017bb4) list_single_2graphic_im_pane_g1_ParamLimits

0xcdb1,	// (0x00017bb4) list_single_2graphic_im_pane_g1

0xcdc2,	// (0x00017bc5) list_single_2graphic_im_pane_g2_ParamLimits

0xcdc2,	// (0x00017bc5) list_single_2graphic_im_pane_g2

0xcdce,	// (0x00017bd1) list_single_2graphic_im_pane_g3_ParamLimits

0xcdce,	// (0x00017bd1) list_single_2graphic_im_pane_g3

0x0003,

0xfc5a,	// (0x0001aa5d) list_single_2graphic_im_pane_g_ParamLimits

0xfc5a,	// (0x0001aa5d) list_single_2graphic_im_pane_g

0xcdee,	// (0x00017bf1) list_single_2graphic_im_pane_t1_ParamLimits

0xcdee,	// (0x00017bf1) list_single_2graphic_im_pane_t1

0xc63e,	// (0x00017441) list_single_graphic_2heading_pane_fp_ParamLimits

0xc63e,	// (0x00017441) list_single_graphic_2heading_pane_fp

0xc682,	// (0x00017485) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc682,	// (0x00017485) list_single_graphic_2heading_pane_fp_g1

0xc653,	// (0x00017456) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc653,	// (0x00017456) list_single_graphic_2heading_pane_fp_g2

0x79b5,	// (0x000127b8) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x79b5,	// (0x000127b8) list_single_graphic_2heading_pane_fp_g3

0x7d92,	// (0x00012b95) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7d92,	// (0x00012b95) list_single_graphic_2heading_pane_fp_g4

0xc65f,	// (0x00017462) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc65f,	// (0x00017462) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb81,	// (0x0001a984) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb81,	// (0x0001a984) list_single_graphic_2heading_pane_fp_g

0xce1f,	// (0x00017c22) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xce1f,	// (0x00017c22) list_single_graphic_2heading_pane_fp_t1

0xc6ba,	// (0x000174bd) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc6ba,	// (0x000174bd) list_single_graphic_2heading_pane_fp_t2

0xce35,	// (0x00017c38) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xce35,	// (0x00017c38) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc63,	// (0x0001aa66) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc63,	// (0x0001aa66) list_single_graphic_2heading_pane_fp_t

0xc083,	// (0x00016e86) fep_hwr_write_pane_g5_ParamLimits

0xc083,	// (0x00016e86) fep_hwr_write_pane_g5

0xc08f,	// (0x00016e92) fep_hwr_write_pane_g6_ParamLimits

0xc08f,	// (0x00016e92) fep_hwr_write_pane_g6

0xcae1,	// (0x000178e4) eswt_shell_pane_ParamLimits

0x95bb,	// (0x000143be) bg_popup_window_pane_cp18_ParamLimits

0xa8ad,	// (0x000156b0) heading_pane_cp70

0xcc0b,	// (0x00017a0e) popup_eswt_tasktip_window_t1_ParamLimits

0x8fcc,	// (0x00013dcf) aid_touch_tab_arrow_left

0x8fdb,	// (0x00013dde) aid_touch_tab_arrow_right

0x6eb0,	// (0x00011cb3) title_pane_g3_ParamLimits

0x6eb0,	// (0x00011cb3) title_pane_g3

0x7c4b,	// (0x00012a4e) set_value_pane_g1

0x585e,	// (0x00010661) popup_toolbar_trans_pane_ParamLimits

0xcd65,	// (0x00017b68) aid_size_cell_tb_trans_pane_ParamLimits

0x7d6c,	// (0x00012b6f) bg_tb_trans_pane_ParamLimits

0xcd77,	// (0x00017b7a) grid_tb_trans_pane_ParamLimits

0x720b,	// (0x0001200e) cont_note_pane_ParamLimits

0x720b,	// (0x0001200e) cont_note_pane

0x7562,	// (0x00012365) cont_snote2_single_text_pane_ParamLimits

0x7562,	// (0x00012365) cont_snote2_single_text_pane

0x7562,	// (0x00012365) cont_snote2_single_graphic_pane_ParamLimits

0x7562,	// (0x00012365) cont_snote2_single_graphic_pane

0x9bfe,	// (0x00014a01) cont_note_wait_pane_ParamLimits

0x9bfe,	// (0x00014a01) cont_note_wait_pane

0x9bfe,	// (0x00014a01) cont_note_image_pane_ParamLimits

0x9bfe,	// (0x00014a01) cont_note_image_pane

0xce4b,	// (0x00017c4e) popup_note2_window_g1_ParamLimits

0xce4b,	// (0x00017c4e) popup_note2_window_g1

0xce7c,	// (0x00017c7f) popup_note2_window_t1_ParamLimits

0xce7c,	// (0x00017c7f) popup_note2_window_t1

0xcec1,	// (0x00017cc4) popup_note2_window_t2_ParamLimits

0xcec1,	// (0x00017cc4) popup_note2_window_t2

0xcf06,	// (0x00017d09) popup_note2_window_t3_ParamLimits

0xcf06,	// (0x00017d09) popup_note2_window_t3

0xcf4b,	// (0x00017d4e) popup_note2_window_t4_ParamLimits

0xcf4b,	// (0x00017d4e) popup_note2_window_t4

0x728f,	// (0x00012092) popup_note2_window_t5_ParamLimits

0x728f,	// (0x00012092) popup_note2_window_t5

0x0004,

0xfc6f,	// (0x0001aa72) popup_note2_window_t_ParamLimits

0xfc6f,	// (0x0001aa72) popup_note2_window_t

0xcf7a,	// (0x00017d7d) popup_note2_image_window_g1_ParamLimits

0xcf7a,	// (0x00017d7d) popup_note2_image_window_g1

0xcf86,	// (0x00017d89) popup_note2_image_window_g2_ParamLimits

0xcf86,	// (0x00017d89) popup_note2_image_window_g2

0x0001,

0xfc7a,	// (0x0001aa7d) popup_note2_image_window_g_ParamLimits

0xfc7a,	// (0x0001aa7d) popup_note2_image_window_g

0xcf98,	// (0x00017d9b) popup_note2_image_window_t1_ParamLimits

0xcf98,	// (0x00017d9b) popup_note2_image_window_t1

0xcfb0,	// (0x00017db3) popup_note2_image_window_t2_ParamLimits

0xcfb0,	// (0x00017db3) popup_note2_image_window_t2

0xcfc8,	// (0x00017dcb) popup_note2_image_window_t3_ParamLimits

0xcfc8,	// (0x00017dcb) popup_note2_image_window_t3

0x0002,

0xfc7f,	// (0x0001aa82) popup_note2_image_window_t_ParamLimits

0xfc7f,	// (0x0001aa82) popup_note2_image_window_t

0x9c0c,	// (0x00014a0f) popup_note2_wait_window_g1_ParamLimits

0x9c0c,	// (0x00014a0f) popup_note2_wait_window_g1

0xcfe4,	// (0x00017de7) popup_note2_wait_window_g2_ParamLimits

0xcfe4,	// (0x00017de7) popup_note2_wait_window_g2

0x9c24,	// (0x00014a27) popup_note2_wait_window_g3_ParamLimits

0x9c24,	// (0x00014a27) popup_note2_wait_window_g3

0x0002,

0xfc86,	// (0x0001aa89) popup_note2_wait_window_g_ParamLimits

0xfc86,	// (0x0001aa89) popup_note2_wait_window_g

0xcff0,	// (0x00017df3) popup_note2_wait_window_t1_ParamLimits

0xcff0,	// (0x00017df3) popup_note2_wait_window_t1

0xd00e,	// (0x00017e11) popup_note2_wait_window_t2_ParamLimits

0xd00e,	// (0x00017e11) popup_note2_wait_window_t2

0xd02c,	// (0x00017e2f) popup_note2_wait_window_t3_ParamLimits

0xd02c,	// (0x00017e2f) popup_note2_wait_window_t3

0xd03e,	// (0x00017e41) popup_note2_wait_window_t4_ParamLimits

0xd03e,	// (0x00017e41) popup_note2_wait_window_t4

0x0003,

0xfc8d,	// (0x0001aa90) popup_note2_wait_window_t_ParamLimits

0xfc8d,	// (0x0001aa90) popup_note2_wait_window_t

0xd050,	// (0x00017e53) wait_bar2_pane_ParamLimits

0xd050,	// (0x00017e53) wait_bar2_pane

0xd068,	// (0x00017e6b) popup_snote2_single_text_window_g1_ParamLimits

0xd068,	// (0x00017e6b) popup_snote2_single_text_window_g1

0xd090,	// (0x00017e93) popup_snote2_single_text_window_t1_ParamLimits

0xd090,	// (0x00017e93) popup_snote2_single_text_window_t1

0xd0dc,	// (0x00017edf) popup_snote2_single_text_window_t2_ParamLimits

0xd0dc,	// (0x00017edf) popup_snote2_single_text_window_t2

0xd128,	// (0x00017f2b) popup_snote2_single_text_window_t3_ParamLimits

0xd128,	// (0x00017f2b) popup_snote2_single_text_window_t3

0xd169,	// (0x00017f6c) popup_snote2_single_text_window_t4_ParamLimits

0xd169,	// (0x00017f6c) popup_snote2_single_text_window_t4

0xd19f,	// (0x00017fa2) popup_snote2_single_text_window_t5_ParamLimits

0xd19f,	// (0x00017fa2) popup_snote2_single_text_window_t5

0x0004,

0xfc96,	// (0x0001aa99) popup_snote2_single_text_window_t_ParamLimits

0xfc96,	// (0x0001aa99) popup_snote2_single_text_window_t

0xd1ca,	// (0x00017fcd) popup_snote2_single_graphic_window_g1_ParamLimits

0xd1ca,	// (0x00017fcd) popup_snote2_single_graphic_window_g1

0xd1f2,	// (0x00017ff5) popup_snote2_single_graphic_window_g2_ParamLimits

0xd1f2,	// (0x00017ff5) popup_snote2_single_graphic_window_g2

0x0001,

0xfca1,	// (0x0001aaa4) popup_snote2_single_graphic_window_g_ParamLimits

0xfca1,	// (0x0001aaa4) popup_snote2_single_graphic_window_g

0xd21a,	// (0x0001801d) popup_snote2_single_graphic_window_t1_ParamLimits

0xd21a,	// (0x0001801d) popup_snote2_single_graphic_window_t1

0xd266,	// (0x00018069) popup_snote2_single_graphic_window_t2_ParamLimits

0xd266,	// (0x00018069) popup_snote2_single_graphic_window_t2

0xd128,	// (0x00017f2b) popup_snote2_single_graphic_window_t3_ParamLimits

0xd128,	// (0x00017f2b) popup_snote2_single_graphic_window_t3

0xd169,	// (0x00017f6c) popup_snote2_single_graphic_window_t4_ParamLimits

0xd169,	// (0x00017f6c) popup_snote2_single_graphic_window_t4

0xd19f,	// (0x00017fa2) popup_snote2_single_graphic_window_t5_ParamLimits

0xd19f,	// (0x00017fa2) popup_snote2_single_graphic_window_t5

0x0004,

0xfca6,	// (0x0001aaa9) popup_snote2_single_graphic_window_t_ParamLimits

0xfca6,	// (0x0001aaa9) popup_snote2_single_graphic_window_t

0xba4f,	// (0x00016852) clock_nsta_pane_cp2_t1

0xba4f,	// (0x00016852) clock_nsta_pane_cp2_t2

0x0001,

0xfaba,	// (0x0001a8bd) clock_nsta_pane_cp2_t

0x7d86,	// (0x00012b89) form_field_data_wide_pane_g1_ParamLimits

0x79b5,	// (0x000127b8) form_field_data_wide_pane_g2_ParamLimits

0x79b5,	// (0x000127b8) form_field_data_wide_pane_g2

0x7d92,	// (0x00012b95) form_field_data_wide_pane_g3_ParamLimits

0x7d92,	// (0x00012b95) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0001a479) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0001a479) form_field_data_wide_pane_g

0xb941,	// (0x00016744) grid_touch_3_pane_ParamLimits

0xb941,	// (0x00016744) grid_touch_3_pane

0xd2b2,	// (0x000180b5) cell_touch_3_pane_ParamLimits

0xd2b2,	// (0x000180b5) cell_touch_3_pane

0xbff7,	// (0x00016dfa) cell_touch_3_pane_g1

0xbff7,	// (0x00016dfa) cell_touch_3_pane_g2

0x0001,

0xfb3f,	// (0x0001a942) cell_touch_3_pane_g

0x72c1,	// (0x000120c4) cont_query_data_pane

0x72c9,	// (0x000120cc) cont_query_data_pane_cp1

0xd2e0,	// (0x000180e3) button_value_adjust_pane_cp7

0xd2e8,	// (0x000180eb) query_popup_pane_cp3

0x8655,	// (0x00013458) bg_popup_sub_pane_cp22_ParamLimits

0x4fa6,	// (0x0000fda9) navi_navi_volume_pane_cp2

0x4fc1,	// (0x0000fdc4) popup_side_volume_key_window_g2

0x4fd0,	// (0x0000fdd3) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0001a50f) popup_side_volume_key_window_g

0x4fed,	// (0x0000fdf0) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0001a516) popup_side_volume_key_window_t

0x899b,	// (0x0001379e) popup_side_volume_key_window_ParamLimits

0x7975,	// (0x00012778) list_double_graphic_pane_g4_ParamLimits

0x7975,	// (0x00012778) list_double_graphic_pane_g4

0xac00,	// (0x00015a03) list_single_2heading_msg_pane_ParamLimits

0xac00,	// (0x00015a03) list_single_2heading_msg_pane

0xd317,	// (0x0001811a) list_single_2heading_msg_pane_g1_ParamLimits

0xd317,	// (0x0001811a) list_single_2heading_msg_pane_g1

0x8b40,	// (0x00013943) list_single_2heading_msg_pane_g2_ParamLimits

0x8b40,	// (0x00013943) list_single_2heading_msg_pane_g2

0xb48a,	// (0x0001628d) list_single_2heading_msg_pane_g3_ParamLimits

0xb48a,	// (0x0001628d) list_single_2heading_msg_pane_g3

0xd323,	// (0x00018126) list_single_2heading_msg_pane_g4_ParamLimits

0xd323,	// (0x00018126) list_single_2heading_msg_pane_g4

0x0003,

0xfcb1,	// (0x0001aab4) list_single_2heading_msg_pane_g_ParamLimits

0xfcb1,	// (0x0001aab4) list_single_2heading_msg_pane_g

0xd33b,	// (0x0001813e) list_single_2heading_msg_pane_t1_ParamLimits

0xd33b,	// (0x0001813e) list_single_2heading_msg_pane_t1

0xd363,	// (0x00018166) list_single_2heading_msg_pane_t2_ParamLimits

0xd363,	// (0x00018166) list_single_2heading_msg_pane_t2

0xd392,	// (0x00018195) list_single_2heading_msg_pane_t3_ParamLimits

0xd392,	// (0x00018195) list_single_2heading_msg_pane_t3

0xd3cb,	// (0x000181ce) list_single_2heading_msg_pane_t4_ParamLimits

0xd3cb,	// (0x000181ce) list_single_2heading_msg_pane_t4

0x0003,

0xfcba,	// (0x0001aabd) list_single_2heading_msg_pane_t_ParamLimits

0xfcba,	// (0x0001aabd) list_single_2heading_msg_pane_t

0x6ebc,	// (0x00011cbf) title_pane_g4_ParamLimits

0x6ebc,	// (0x00011cbf) title_pane_g4

0x4db5,	// (0x0000fbb8) title_pane_stacon_g3_ParamLimits

0x4db5,	// (0x0000fbb8) title_pane_stacon_g3

0xcde2,	// (0x00017be5) list_single_2graphic_im_pane_g4_ParamLimits

0xcde2,	// (0x00017be5) list_single_2graphic_im_pane_g4

0xa669,	// (0x0001546c) popup_side_volume_key_window_cp

0xaf77,	// (0x00015d7a) main_idle_act2_pane_t1

0x59bc,	// (0x000107bf) toolbar_button_pane_g10

0x775a,	// (0x0001255d) popup_toolbar_window_cp1

0xba40,	// (0x00016843) clock_nsta_pane_cp_t1

0xba40,	// (0x00016843) clock_nsta_pane_cp_t2

0x0001,

0xfab5,	// (0x0001a8b8) clock_nsta_pane_cp_t

0x4fa6,	// (0x0000fda9) navi_navi_volume_pane_cp2_ParamLimits

0x4fb5,	// (0x0000fdb8) popup_side_volume_key_window_g1_ParamLimits

0x4fc1,	// (0x0000fdc4) popup_side_volume_key_window_g2_ParamLimits

0x4fd0,	// (0x0000fdd3) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0001a50f) popup_side_volume_key_window_g_ParamLimits

0x5e24,	// (0x00010c27) fep_hwr_aid_pane

0x5ecb,	// (0x00010cce) bg_fep_hwr_top_pane_g4_ParamLimits

0xc053,	// (0x00016e56) fep_hwr_top_pane_g1_ParamLimits

0xc065,	// (0x00016e68) fep_hwr_top_pane_g2_ParamLimits

0x5eeb,	// (0x00010cee) fep_hwr_top_pane_g3_ParamLimits

0xfb0a,	// (0x0001a90d) fep_hwr_top_pane_g_ParamLimits

0x5f00,	// (0x00010d03) fep_hwr_top_text_pane_ParamLimits

0xa42c,	// (0x0001522f) aid_touch_tab_arrow_arrow_2

0xa435,	// (0x00015238) aid_touch_tab_arrow_left_2

0x5e38,	// (0x00010c3b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5e6f,	// (0x00010c72) fep_hwr_prediction_pane

0xc1c5,	// (0x00016fc8) fep_vkb_prediction_pane

0xc2c9,	// (0x000170cc) fep_vkb_side_pane_g3_ParamLimits

0xc2c9,	// (0x000170cc) fep_vkb_side_pane_g3

0x607b,	// (0x00010e7e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x60e7,	// (0x00010eea) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x60f4,	// (0x00010ef7) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb9,	// (0x0001a9bc) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6223,	// (0x00011026) fep_hwr_prediction_pane_g1

0x622d,	// (0x00011030) fep_hwr_prediction_pane_g2

0x6235,	// (0x00011038) fep_hwr_prediction_pane_g3

0x623d,	// (0x00011040) fep_hwr_prediction_pane_g4

0x0003,

0xfcc3,	// (0x0001aac6) fep_hwr_prediction_pane_g

0xd3f0,	// (0x000181f3) fep_vkb_prediction_pane_g1

0xd3fa,	// (0x000181fd) fep_vkb_prediction_pane_g2

0xd402,	// (0x00018205) fep_vkb_prediction_pane_g3

0xd40a,	// (0x0001820d) fep_vkb_prediction_pane_g4

0x0003,

0xfccc,	// (0x0001aacf) fep_vkb_prediction_pane_g

0x5ca4,	// (0x00010aa7) slider_set_pane_g3

0x5cb8,	// (0x00010abb) slider_set_pane_g4

0x5cd0,	// (0x00010ad3) slider_set_pane_g5

0x5ca4,	// (0x00010aa7) slider_set_pane_g6

0x5ce6,	// (0x00010ae9) slider_set_pane_g7

0xaaf2,	// (0x000158f5) slider_form_pane_g3

0xaafb,	// (0x000158fe) slider_form_pane_g4

0xab03,	// (0x00015906) slider_form_pane_g5

0xaaf2,	// (0x000158f5) slider_form_pane_g6

0xab0b,	// (0x0001590e) slider_form_pane_g7

0xb274,	// (0x00016077) slider_set_pane_vc_g3

0xb27d,	// (0x00016080) slider_set_pane_vc_g4

0xb286,	// (0x00016089) slider_set_pane_vc_g5

0xb274,	// (0x00016077) slider_set_pane_vc_g6

0xb28f,	// (0x00016092) slider_set_pane_vc_g7

0xb714,	// (0x00016517) slider_form_pane_vc_g1

0xb71d,	// (0x00016520) slider_form_pane_vc_g2

0xb726,	// (0x00016529) slider_form_pane_vc_g3

0xb714,	// (0x00016517) slider_form_pane_vc_g4

0xb72f,	// (0x00016532) slider_form_pane_vc_g5

0x0004,

0xfa87,	// (0x0001a88a) slider_form_pane_vc_g

0x4a7c,	// (0x0000f87f) main_idle_act3_pane

0xd412,	// (0x00018215) ai3_links_pane

0xd41b,	// (0x0001821e) popup_ai3_data_window_ParamLimits

0xd41b,	// (0x0001821e) popup_ai3_data_window

0x6e74,	// (0x00011c77) grid_ai3_links_pane

0xd435,	// (0x00018238) cell_ai3_links_pane_ParamLimits

0xd435,	// (0x00018238) cell_ai3_links_pane

0xd44d,	// (0x00018250) bg_popup_sub_pane_cp11

0xd45a,	// (0x0001825d) cell_ai3_links_pane_g1

0x6e74,	// (0x00011c77) bg_popup_sub_pane_cp12

0xd47f,	// (0x00018282) heading_ai3_data_pane

0xd487,	// (0x0001828a) list_ai3_gene_pane

0xd493,	// (0x00018296) popup_ai3_data_window_g1

0xd49b,	// (0x0001829e) heading_ai3_data_pane_g1

0xd4a3,	// (0x000182a6) heading_ai3_data_pane_t1

0xd4b1,	// (0x000182b4) list_double_ai3_gene_pane_ParamLimits

0xd4b1,	// (0x000182b4) list_double_ai3_gene_pane

0xd4be,	// (0x000182c1) list_single_ai3_gene_pane_ParamLimits

0xd4be,	// (0x000182c1) list_single_ai3_gene_pane

0xbfbc,	// (0x00016dbf) list_highlight_pane_cp7_ParamLimits

0xbfbc,	// (0x00016dbf) list_highlight_pane_cp7

0xd4cb,	// (0x000182ce) list_single_a13_gene_pane_t1_ParamLimits

0xd4cb,	// (0x000182ce) list_single_a13_gene_pane_t1

0xd4e2,	// (0x000182e5) list_single_ai3_gene_pane_g1

0xd4eb,	// (0x000182ee) list_single_ai3_gene_pane_g2

0x0001,

0xfcd5,	// (0x0001aad8) list_single_ai3_gene_pane_g

0xd4f3,	// (0x000182f6) list_double_ai3_gene_pane_g1_ParamLimits

0xd4f3,	// (0x000182f6) list_double_ai3_gene_pane_g1

0xd4ff,	// (0x00018302) list_double_ai3_gene_pane_t1_ParamLimits

0xd4ff,	// (0x00018302) list_double_ai3_gene_pane_t1

0xd51b,	// (0x0001831e) list_double_ai3_gene_pane_t2_ParamLimits

0xd51b,	// (0x0001831e) list_double_ai3_gene_pane_t2

0xd531,	// (0x00018334) list_double_ai3_gene_pane_t3_ParamLimits

0xd531,	// (0x00018334) list_double_ai3_gene_pane_t3

0x0002,

0xfcda,	// (0x0001aadd) list_double_ai3_gene_pane_t_ParamLimits

0xfcda,	// (0x0001aadd) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd2f9,	// (0x000180fc) aid_size_min_col_2

0xd303,	// (0x00018106) aid_size_min_msg_ParamLimits

0xd303,	// (0x00018106) aid_size_min_msg

0xc3c9,	// (0x000171cc) fep_vkb_top_text_pane_g2_ParamLimits

0xc3c9,	// (0x000171cc) fep_vkb_top_text_pane_g2

0x0001,

0xfb3a,	// (0x0001a93d) fep_vkb_top_text_pane_g_ParamLimits

0xfb3a,	// (0x0001a93d) fep_vkb_top_text_pane_g

0x4a7c,	// (0x0000f87f) main_hc_apps_shell_pane

0xd54e,	// (0x00018351) grid_hc_apps_pane_ParamLimits

0xd54e,	// (0x00018351) grid_hc_apps_pane

0xd55d,	// (0x00018360) list_hc_apps_pane

0xd565,	// (0x00018368) scroll_pane_cp37_ParamLimits

0xd565,	// (0x00018368) scroll_pane_cp37

0xd571,	// (0x00018374) cell_hc_apps_pane_ParamLimits

0xd571,	// (0x00018374) cell_hc_apps_pane

0xd61f,	// (0x00018422) cell_hc_apps_pane_g1_ParamLimits

0xd61f,	// (0x00018422) cell_hc_apps_pane_g1

0xd650,	// (0x00018453) cell_hc_apps_pane_g2_ParamLimits

0xd650,	// (0x00018453) cell_hc_apps_pane_g2

0xd66c,	// (0x0001846f) cell_hc_apps_pane_g3_ParamLimits

0xd66c,	// (0x0001846f) cell_hc_apps_pane_g3

0x0002,

0xfce1,	// (0x0001aae4) cell_hc_apps_pane_g_ParamLimits

0xfce1,	// (0x0001aae4) cell_hc_apps_pane_g

0xd68e,	// (0x00018491) cell_hc_apps_pane_t1_ParamLimits

0xd68e,	// (0x00018491) cell_hc_apps_pane_t1

0x720b,	// (0x0001200e) grid_highlight_pane_cp10_ParamLimits

0x720b,	// (0x0001200e) grid_highlight_pane_cp10

0xd6ce,	// (0x000184d1) list_single_hc_apps_pane_ParamLimits

0xd6ce,	// (0x000184d1) list_single_hc_apps_pane

0xd72a,	// (0x0001852d) list_single_hc_apps_pane_g1

0xd743,	// (0x00018546) list_single_hc_apps_pane_g2

0x0001,

0xfce8,	// (0x0001aaeb) list_single_hc_apps_pane_g

0xd75c,	// (0x0001855f) list_single_hc_apps_pane_g2_copy1

0xd778,	// (0x0001857b) list_single_hc_apps_pane_t1

0x6f68,	// (0x00011d6b) bg_set_opt_pane_cp_ParamLimits

0x4cdd,	// (0x0000fae0) setting_slider_pane_t1_ParamLimits

0x4cf6,	// (0x0000faf9) setting_slider_pane_t2_ParamLimits

0x4d10,	// (0x0000fb13) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001a361) setting_slider_pane_t_ParamLimits

0x4d28,	// (0x0000fb2b) slider_set_pane_ParamLimits

0x524f,	// (0x00010052) control_pane_g5_ParamLimits

0x524f,	// (0x00010052) control_pane_g5

0xa941,	// (0x00015744) slider_set_pane_g1_ParamLimits

0x5c98,	// (0x00010a9b) slider_set_pane_g2_ParamLimits

0x5ca4,	// (0x00010aa7) slider_set_pane_g3_ParamLimits

0x5cb8,	// (0x00010abb) slider_set_pane_g4_ParamLimits

0x5cd0,	// (0x00010ad3) slider_set_pane_g5_ParamLimits

0x5ca4,	// (0x00010aa7) slider_set_pane_g6_ParamLimits

0x5ce6,	// (0x00010ae9) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0001a762) slider_set_pane_g_ParamLimits

0x8a87,	// (0x0001388a) navi_icon_text_pane_ParamLimits

0x8f8d,	// (0x00013d90) aid_fill_nsta_2_ParamLimits

0x8fcc,	// (0x00013dcf) aid_touch_tab_arrow_left_ParamLimits

0x8fdb,	// (0x00013dde) aid_touch_tab_arrow_right_ParamLimits

0x9048,	// (0x00013e4b) clock_nsta_pane_ParamLimits

0xa40e,	// (0x00015211) navi_icon_pane_g1_ParamLimits

0xa41a,	// (0x0001521d) navi_text_pane_t1_ParamLimits

0xbb4c,	// (0x0001694f) navi_icon_text_pane_g1_ParamLimits

0xbb58,	// (0x0001695b) navi_icon_text_pane_t1_ParamLimits

0xd72a,	// (0x0001852d) list_single_hc_apps_pane_g1_ParamLimits

0xd743,	// (0x00018546) list_single_hc_apps_pane_g2_ParamLimits

0xfce8,	// (0x0001aaeb) list_single_hc_apps_pane_g_ParamLimits

0xd75c,	// (0x0001855f) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd778,	// (0x0001857b) list_single_hc_apps_pane_t1_ParamLimits

0x4be7,	// (0x0000f9ea) popup_toolbar2_fixed_window_ParamLimits

0x4be7,	// (0x0000f9ea) popup_toolbar2_fixed_window

0x5854,	// (0x00010657) popup_toolbar2_float_window

0x6e74,	// (0x00011c77) bg_popup_sub_pane_cp27

0xd7a6,	// (0x000185a9) grid_toolbar2_float_pane

0x6e74,	// (0x00011c77) bg_popup_sub_pane_cp26

0xd7a6,	// (0x000185a9) grid_toolbar2_fixed_pane

0xd7ae,	// (0x000185b1) cell_toolbar2_fixed_pane_ParamLimits

0xd7ae,	// (0x000185b1) cell_toolbar2_fixed_pane

0xd7be,	// (0x000185c1) cell_toolbar2_fixed_pane_g1

0xd7c7,	// (0x000185ca) toolbar2_fixed_button_pane

0x948d,	// (0x00014290) toolbar2_fixed_button_pane_g1

0x949d,	// (0x000142a0) toolbar2_fixed_button_pane_g2

0x9495,	// (0x00014298) toolbar2_fixed_button_pane_g3

0x94ad,	// (0x000142b0) toolbar2_fixed_button_pane_g4

0x94a5,	// (0x000142a8) toolbar2_fixed_button_pane_g5

0x94b5,	// (0x000142b8) toolbar2_fixed_button_pane_g6

0x94bd,	// (0x000142c0) toolbar2_fixed_button_pane_g7

0x94cd,	// (0x000142d0) toolbar2_fixed_button_pane_g8

0x94c5,	// (0x000142c8) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0001a664) toolbar2_fixed_button_pane_g

0xd7cf,	// (0x000185d2) cell_toolbar2_float_pane_ParamLimits

0xd7cf,	// (0x000185d2) cell_toolbar2_float_pane

0xd7e0,	// (0x000185e3) cell_toolbar2_float_pane_g1

0xd7c7,	// (0x000185ca) toolbar2_fixed_button_pane_cp

0xc125,	// (0x00016f28) fep_vkb_accented_list_pane_ParamLimits

0xc125,	// (0x00016f28) fep_vkb_accented_list_pane

0x605b,	// (0x00010e5e) bg_popup_fep_shadow_pane_g9

0x8c07,	// (0x00013a0a) bg_popup_fep_shadow_pane_cp3

0x803d,	// (0x00012e40) list_accented_list_pane

0xd7e9,	// (0x000185ec) list_single_accented_list_pane_ParamLimits

0xd7e9,	// (0x000185ec) list_single_accented_list_pane

0x8c07,	// (0x00013a0a) list_highlight_pane_cp10

0xd7fa,	// (0x000185fd) list_single_accented_list_pane_t1

0x57a4,	// (0x000105a7) popup_slider_window_ParamLimits

0x57a4,	// (0x000105a7) popup_slider_window

0xd2f0,	// (0x000180f3) aid_indentation_list_msg

0xd8b4,	// (0x000186b7) bg_popup_window_pane_cp19

0xd91e,	// (0x00018721) popup_slider_window_g1

0xd93a,	// (0x0001873d) popup_slider_window_g2

0xd956,	// (0x00018759) popup_slider_window_g3

0x0005,

0xfced,	// (0x0001aaf0) popup_slider_window_g

0xd9b2,	// (0x000187b5) popup_slider_window_t1

0xda26,	// (0x00018829) small_volume_slider_vertical_pane

0xbff7,	// (0x00016dfa) small_volume_slider_vertical_pane_g1

0xbff7,	// (0x00016dfa) small_volume_slider_vertical_pane_g2

0xda42,	// (0x00018845) small_volume_slider_vertical_pane_g3

0x0002,

0xfcff,	// (0x0001ab02) small_volume_slider_vertical_pane_g

0x499f,	// (0x0000f7a2) area_side_right_pane_ParamLimits

0x499f,	// (0x0000f7a2) area_side_right_pane

0x6245,	// (0x00011048) aid_size_side_button_ParamLimits

0x6245,	// (0x00011048) aid_size_side_button

0x6259,	// (0x0001105c) grid_sctrl_middle_pane_ParamLimits

0x6259,	// (0x0001105c) grid_sctrl_middle_pane

0x6278,	// (0x0001107b) sctrl_sk_bottom_pane

0x6289,	// (0x0001108c) sctrl_sk_top_pane

0x629b,	// (0x0001109e) aid_touch_sctrl_top

0x62a8,	// (0x000110ab) bg_sctrl_sk_pane_ParamLimits

0x62a8,	// (0x000110ab) bg_sctrl_sk_pane

0x62b6,	// (0x000110b9) sctrl_sk_top_pane_g1

0x62c3,	// (0x000110c6) sctrl_sk_top_pane_t1

0x629b,	// (0x0001109e) aid_touch_sctrl_bottom

0x62a8,	// (0x000110ab) bg_sctrl_sk_pane_cp_ParamLimits

0x62a8,	// (0x000110ab) bg_sctrl_sk_pane_cp

0x62de,	// (0x000110e1) sctrl_sk_bottom_pane_g1

0x62c3,	// (0x000110c6) sctrl_sk_bottom_pane_t1

0x62e7,	// (0x000110ea) cell_sctrl_middle_pane_ParamLimits

0x62e7,	// (0x000110ea) cell_sctrl_middle_pane

0x6302,	// (0x00011105) aid_touch_sctrl_middle_ParamLimits

0x6302,	// (0x00011105) aid_touch_sctrl_middle

0x6314,	// (0x00011117) bg_sctrl_middle_pane_ParamLimits

0x6314,	// (0x00011117) bg_sctrl_middle_pane

0x607b,	// (0x00010e7e) cell_sctrl_middle_pane_g1_ParamLimits

0x607b,	// (0x00010e7e) cell_sctrl_middle_pane_g1

0x6322,	// (0x00011125) cell_sctrl_middle_pane_g2_ParamLimits

0x6322,	// (0x00011125) cell_sctrl_middle_pane_g2

0x0001,

0xfd0b,	// (0x0001ab0e) cell_sctrl_middle_pane_g_ParamLimits

0xfd0b,	// (0x0001ab0e) cell_sctrl_middle_pane_g

0x948d,	// (0x00014290) bg_sctrl_middle_pane_g1

0x9495,	// (0x00014298) bg_sctrl_middle_pane_g2

0x949d,	// (0x000142a0) bg_sctrl_middle_pane_g3

0x94a5,	// (0x000142a8) bg_sctrl_middle_pane_g4

0x94ad,	// (0x000142b0) bg_sctrl_middle_pane_g5

0x94b5,	// (0x000142b8) bg_sctrl_middle_pane_g6

0x94bd,	// (0x000142c0) bg_sctrl_middle_pane_g7

0x94c5,	// (0x000142c8) bg_sctrl_middle_pane_g8

0x0007,

0xfd10,	// (0x0001ab13) bg_sctrl_middle_pane_g

0x94cd,	// (0x000142d0) bg_sctrl_middle_pane_g8_copy1

0x948d,	// (0x00014290) bg_sctrl_sk_pane_g1

0x949d,	// (0x000142a0) bg_sctrl_sk_pane_g2

0x9495,	// (0x00014298) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0001a664) bg_sctrl_sk_pane_g

0x7720,	// (0x00012523) aid_size_touch_scroll_bar

0x94ad,	// (0x000142b0) bg_sctrl_sk_pane_g4

0x94a5,	// (0x000142a8) bg_sctrl_sk_pane_g5

0x94b5,	// (0x000142b8) bg_sctrl_sk_pane_g6

0x94bd,	// (0x000142c0) bg_sctrl_sk_pane_g7

0x94cd,	// (0x000142d0) bg_sctrl_sk_pane_g8

0x94c5,	// (0x000142c8) bg_sctrl_sk_pane_g9

0x540d,	// (0x00010210) popup_fep_china_hwr2_fs_candidate_window

0x5417,	// (0x0001021a) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5417,	// (0x0001021a) popup_fep_china_hwr2_fs_control_window

0x607b,	// (0x00010e7e) sctrl_sk_top_pane_g2

0x0001,

0xfd06,	// (0x0001ab09) sctrl_sk_top_pane_g

0xda4b,	// (0x0001884e) aid_fep_china_hwr2_fs_cell_ParamLimits

0xda4b,	// (0x0001884e) aid_fep_china_hwr2_fs_cell

0xda5d,	// (0x00018860) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xda5d,	// (0x00018860) bg_popup_fep_shadow_pane_cp4

0xda74,	// (0x00018877) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda74,	// (0x00018877) bg_popup_fep_shadow_pane_cp5

0xda86,	// (0x00018889) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda86,	// (0x00018889) popup_fep_china_hwr2_fs_control_bar_grid

0xda96,	// (0x00018899) popup_fep_china_hwr2_fs_control_funtion_grid

0xda9e,	// (0x000188a1) aid_fep_china_hwr2_fs_candi_cell

0x6e74,	// (0x00011c77) bg_popup_fep_shadow_pane_cp6

0xdaa8,	// (0x000188ab) popup_fep_china_hwr2_fs_candidate_grid

0xdab2,	// (0x000188b5) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdab2,	// (0x000188b5) cell_fep_china_hwr2_fs_funtion_grid

0xbff7,	// (0x00016dfa) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xdaca,	// (0x000188cd) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xdaca,	// (0x000188cd) cell_fep_china_hwr2_fs_funtion_grid_g1

0xdad8,	// (0x000188db) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xdad8,	// (0x000188db) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd21,	// (0x0001ab24) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd21,	// (0x0001ab24) cell_fep_china_hwr2_fs_funtion_grid_g

0xdaee,	// (0x000188f1) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdaee,	// (0x000188f1) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdb03,	// (0x00018906) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdb03,	// (0x00018906) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd26,	// (0x0001ab29) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd26,	// (0x0001ab29) cell_fep_china_hwr2_fs_funtion_grid_t

0xdb1f,	// (0x00018922) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdb27,	// (0x0001892a) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdb2f,	// (0x00018932) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2b,	// (0x0001ab2e) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdb37,	// (0x0001893a) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdb37,	// (0x0001893a) cell_fep_china_hwr2_fs_candidate_grid

0xdb50,	// (0x00018953) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdb58,	// (0x0001895b) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbff7,	// (0x00016dfa) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbff7,	// (0x00016dfa) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3f,	// (0x0001a942) cell_fep_china_hwr2_fs_candidate_grid_g

0xdb60,	// (0x00018963) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9055,	// (0x00013e58) clock_nsta_pane_cp_24_ParamLimits

0x9055,	// (0x00013e58) clock_nsta_pane_cp_24

0x90d3,	// (0x00013ed6) indicator_nsta_pane_cp_24_ParamLimits

0x90d3,	// (0x00013ed6) indicator_nsta_pane_cp_24

0xa28a,	// (0x0001508d) heading_pane_g1

0x0001,

0xf8c6,	// (0x0001a6c9) heading_pane_g

0xadc0,	// (0x00015bc3) grid_sct_catagory_button_pane

0xadf0,	// (0x00015bf3) scroll_pane_cp5_ParamLimits

0xbb9a,	// (0x0001699d) button_value_adjust_pane_cp5_ParamLimits

0xbb9a,	// (0x0001699d) button_value_adjust_pane_cp5

0xbc96,	// (0x00016a99) form2_midp_time_pane_ParamLimits

0xdb6e,	// (0x00018971) cell_sct_catagory_button_pane_ParamLimits

0xdb6e,	// (0x00018971) cell_sct_catagory_button_pane

0xbfbc,	// (0x00016dbf) bg_button_pane_cp01_ParamLimits

0xbfbc,	// (0x00016dbf) bg_button_pane_cp01

0xbff7,	// (0x00016dfa) cell_sct_catagory_button_pane_g1

0x57e3,	// (0x000105e6) popup_tb_extension_window

0xdb80,	// (0x00018983) aid_size_cell_ext_ParamLimits

0xdb80,	// (0x00018983) aid_size_cell_ext

0x720b,	// (0x0001200e) bg_tb_trans_pane_cp1_ParamLimits

0x720b,	// (0x0001200e) bg_tb_trans_pane_cp1

0xdba0,	// (0x000189a3) grid_tb_ext_pane_ParamLimits

0xdba0,	// (0x000189a3) grid_tb_ext_pane

0xdbce,	// (0x000189d1) cell_tb_ext_pane_ParamLimits

0xdbce,	// (0x000189d1) cell_tb_ext_pane

0xdbe5,	// (0x000189e8) cell_tb_ext_pane_g1_ParamLimits

0xdbe5,	// (0x000189e8) cell_tb_ext_pane_g1

0xdc02,	// (0x00018a05) cell_tb_ext_pane_t1

0x720b,	// (0x0001200e) list_highlight_pane_cp11_ParamLimits

0x720b,	// (0x0001200e) list_highlight_pane_cp11

0x4c06,	// (0x0000fa09) popup_uni_indicator_window_ParamLimits

0x4c06,	// (0x0000fa09) popup_uni_indicator_window

0x7d6c,	// (0x00012b6f) bg_popup_sub_pane_cp14

0xdc1d,	// (0x00018a20) list_uniindi_pane

0xdc29,	// (0x00018a2c) uniindi_top_pane

0x720b,	// (0x0001200e) bg_uniindi_top_pane

0xdc48,	// (0x00018a4b) uniindi_top_pane_g1

0xdc5e,	// (0x00018a61) uniindi_top_pane_g2

0x0003,

0xfd32,	// (0x0001ab35) uniindi_top_pane_g

0xdc88,	// (0x00018a8b) uniindi_top_pane_t1

0xdcb2,	// (0x00018ab5) list_single_uniindi_pane_ParamLimits

0xdcb2,	// (0x00018ab5) list_single_uniindi_pane

0xbff7,	// (0x00016dfa) bg_uniindi_top_pane_g1

0xdcc5,	// (0x00018ac8) list_single_uniindi_pane_g1

0xdcd8,	// (0x00018adb) list_single_uniindi_pane_t1

0x4a7c,	// (0x0000f87f) control_bg_pane

0xdcfd,	// (0x00018b00) bg_sctrl_sk_pane_cp1

0xdd06,	// (0x00018b09) bg_sctrl_sk_pane_cp2

0xdd0f,	// (0x00018b12) control_bg_pane_g1

0xdd18,	// (0x00018b1b) control_bg_pane_g2

0x0001,

0xfd3b,	// (0x0001ab3e) control_bg_pane_g

0xb9e4,	// (0x000167e7) cell_indicator_nsta_pane_g1_ParamLimits

0xb9f2,	// (0x000167f5) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa3,	// (0x0001a8a6) cell_indicator_nsta_pane_g_ParamLimits

0xbd1e,	// (0x00016b21) form2_midp_time_pane_t1_ParamLimits

0x5375,	// (0x00010178) main_idle_act4_pane_ParamLimits

0x5375,	// (0x00010178) main_idle_act4_pane

0x57e3,	// (0x000105e6) popup_tb_extension_window_ParamLimits

0xdbbe,	// (0x000189c1) tb_ext_find_pane_ParamLimits

0xdbbe,	// (0x000189c1) tb_ext_find_pane

0xdd21,	// (0x00018b24) ai_gene_pane_1_cp1

0x8d42,	// (0x00013b45) ai_gene_pane_2_cp1

0xdd29,	// (0x00018b2c) list_single_idle_plugin_calendar_pane

0xdd32,	// (0x00018b35) list_single_idle_plugin_notification_pane

0xdd3b,	// (0x00018b3e) list_single_idle_plugin_player_pane

0xdd44,	// (0x00018b47) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdd44,	// (0x00018b47) list_single_idle_plugin_shortcut_pane

0xdd66,	// (0x00018b69) main_idle_act4_pane_t1

0xdd78,	// (0x00018b7b) main_idle_act4_pane_t2

0x0001,

0xfd40,	// (0x0001ab43) main_idle_act4_pane_t

0xdd8a,	// (0x00018b8d) middle_sk_idle_act4_pane_ParamLimits

0xdd8a,	// (0x00018b8d) middle_sk_idle_act4_pane

0xdda0,	// (0x00018ba3) popup_clock_digital_analogue_window_cp2

0xddba,	// (0x00018bbd) shortcut_wheel_idle_act4_pane_ParamLimits

0xddba,	// (0x00018bbd) shortcut_wheel_idle_act4_pane

0xbff7,	// (0x00016dfa) shortcut_wheel_idle_act4_pane_g1

0xbff7,	// (0x00016dfa) shortcut_wheel_idle_act4_pane_g2

0xbff7,	// (0x00016dfa) shortcut_wheel_idle_act4_pane_g3

0xbff7,	// (0x00016dfa) shortcut_wheel_idle_act4_pane_g4

0xbff7,	// (0x00016dfa) shortcut_wheel_idle_act4_pane_g5

0xddce,	// (0x00018bd1) shortcut_wheel_idle_act4_pane_g6

0xddd6,	// (0x00018bd9) shortcut_wheel_idle_act4_pane_g7

0xddde,	// (0x00018be1) shortcut_wheel_idle_act4_pane_g8

0xdde6,	// (0x00018be9) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd45,	// (0x0001ab48) shortcut_wheel_idle_act4_pane_g

0xc275,	// (0x00017078) middle_sk_idle_act4_pane_g1_ParamLimits

0xc275,	// (0x00017078) middle_sk_idle_act4_pane_g1

0xde4a,	// (0x00018c4d) middle_sk_idle_act4_pane_g2_ParamLimits

0xde4a,	// (0x00018c4d) middle_sk_idle_act4_pane_g2

0x0001,

0xfd68,	// (0x0001ab6b) middle_sk_idle_act4_pane_g_ParamLimits

0xfd68,	// (0x0001ab6b) middle_sk_idle_act4_pane_g

0xde56,	// (0x00018c59) middle_sk_idle_act4_pane_t1_ParamLimits

0xde56,	// (0x00018c59) middle_sk_idle_act4_pane_t1

0xde73,	// (0x00018c76) grid_ai_shortcut_pane_ParamLimits

0xde73,	// (0x00018c76) grid_ai_shortcut_pane

0xde8c,	// (0x00018c8f) list_highlight_pane_cp16_ParamLimits

0xde8c,	// (0x00018c8f) list_highlight_pane_cp16

0xde99,	// (0x00018c9c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde99,	// (0x00018c9c) list_single_idle_plugin_shortcut_pane_g1

0xdea5,	// (0x00018ca8) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdea5,	// (0x00018ca8) list_single_idle_plugin_shortcut_pane_g2

0xdebd,	// (0x00018cc0) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdebd,	// (0x00018cc0) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6d,	// (0x0001ab70) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6d,	// (0x0001ab70) list_single_idle_plugin_shortcut_pane_g

0xded0,	// (0x00018cd3) cell_ai_shortcut_pane_ParamLimits

0xded0,	// (0x00018cd3) cell_ai_shortcut_pane

0xdef4,	// (0x00018cf7) cell_ai_shortcut_pane_g1_ParamLimits

0xdef4,	// (0x00018cf7) cell_ai_shortcut_pane_g1

0xdd21,	// (0x00018b24) ai_gene_pane_1_cp2

0xdf16,	// (0x00018d19) ai_gene_pane_2_cp2

0xdf1e,	// (0x00018d21) list_highlight_pane_cp15

0xdf27,	// (0x00018d2a) list_single_idle_plugin_calendar_pane_g1

0xdf1e,	// (0x00018d21) list_highlight_pane_cp17

0xdf2f,	// (0x00018d32) list_single_idle_plugin_calendar_pane_g1_copy1

0xdf37,	// (0x00018d3a) list_single_idle_plugin_player_pane_g1

0xb019,	// (0x00015e1c) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd74,	// (0x0001ab77) list_single_idle_plugin_player_pane_g

0xdf3f,	// (0x00018d42) list_single_idle_plugin_player_pane_t1

0xdf4d,	// (0x00018d50) list_single_idle_plugin_player_pane_t2

0xdf5b,	// (0x00018d5e) list_single_idle_plugin_player_pane_t3

0xdf69,	// (0x00018d6c) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd79,	// (0x0001ab7c) list_single_idle_plugin_player_pane_t

0xdf77,	// (0x00018d7a) wait_bar_pane_cp15

0xdf7f,	// (0x00018d82) grid_ai_notification_pane

0xb019,	// (0x00015e1c) list_single_idle_plugin_notification_pane_g1

0xdf88,	// (0x00018d8b) cell_ai_notification_pane_ParamLimits

0xdf88,	// (0x00018d8b) cell_ai_notification_pane

0xdf95,	// (0x00018d98) cell_ai_notification_pane_g1

0xdf9d,	// (0x00018da0) cell_ai_notification_pane_t1

0xdfab,	// (0x00018dae) tb_ext_find_button_pane

0xdfb3,	// (0x00018db6) tb_ext_find_pane_g1

0xdfbb,	// (0x00018dbe) tb_ext_find_pane_t1

0x8565,	// (0x00013368) tb_ext_find_button_pane_g1

0xdfc9,	// (0x00018dcc) tb_ext_find_button_pane_g2

0x0001,

0xfd82,	// (0x0001ab85) tb_ext_find_button_pane_g

0xdd66,	// (0x00018b69) main_idle_act4_pane_t1_ParamLimits

0xdd78,	// (0x00018b7b) main_idle_act4_pane_t2_ParamLimits

0xfd40,	// (0x0001ab43) main_idle_act4_pane_t_ParamLimits

0xdda0,	// (0x00018ba3) popup_clock_digital_analogue_window_cp2_ParamLimits

0xddae,	// (0x00018bb1) sat_plugin_idle_act4_pane_ParamLimits

0xddae,	// (0x00018bb1) sat_plugin_idle_act4_pane

0xdfd2,	// (0x00018dd5) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdfd2,	// (0x00018dd5) sat_plugin_idle_act4_pane_t1

0xdfe5,	// (0x00018de8) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdfe5,	// (0x00018de8) sat_plugin_idle_act4_pane_t2

0xdff8,	// (0x00018dfb) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdff8,	// (0x00018dfb) sat_plugin_idle_act4_pane_t3

0xe00b,	// (0x00018e0e) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe00b,	// (0x00018e0e) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd87,	// (0x0001ab8a) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd87,	// (0x0001ab8a) sat_plugin_idle_act4_pane_t

0x4b41,	// (0x0000f944) popup_battery_window_ParamLimits

0x4b41,	// (0x0000f944) popup_battery_window

0x720b,	// (0x0001200e) bg_popup_sub_pane_cp25_ParamLimits

0x720b,	// (0x0001200e) bg_popup_sub_pane_cp25

0xe01e,	// (0x00018e21) popup_battery_window_g1_ParamLimits

0xe01e,	// (0x00018e21) popup_battery_window_g1

0xe02a,	// (0x00018e2d) popup_battery_window_t1_ParamLimits

0xe02a,	// (0x00018e2d) popup_battery_window_t1

0xe03c,	// (0x00018e3f) popup_battery_window_t2_ParamLimits

0xe03c,	// (0x00018e3f) popup_battery_window_t2

0x0001,

0xfd90,	// (0x0001ab93) popup_battery_window_t_ParamLimits

0xfd90,	// (0x0001ab93) popup_battery_window_t

0x8c0f,	// (0x00013a12) midp_canvas_pane_ParamLimits

0x8c86,	// (0x00013a89) midp_keypad_pane_ParamLimits

0x8c86,	// (0x00013a89) midp_keypad_pane

0x8f4d,	// (0x00013d50) main_midp_pane_ParamLimits

0xba5e,	// (0x00016861) signal_pane_g2_cp_ParamLimits

0xe059,	// (0x00018e5c) aid_size_cell_midp_keypad_ParamLimits

0xe059,	// (0x00018e5c) aid_size_cell_midp_keypad

0xe073,	// (0x00018e76) midp_keyp_game_grid_pane_ParamLimits

0xe073,	// (0x00018e76) midp_keyp_game_grid_pane

0xe093,	// (0x00018e96) midp_keyp_rocker_pane_ParamLimits

0xe093,	// (0x00018e96) midp_keyp_rocker_pane

0xe0cc,	// (0x00018ecf) midp_keyp_sk_left_pane_ParamLimits

0xe0cc,	// (0x00018ecf) midp_keyp_sk_left_pane

0xe147,	// (0x00018f4a) midp_keyp_sk_right_pane_ParamLimits

0xe147,	// (0x00018f4a) midp_keyp_sk_right_pane

0x6e74,	// (0x00011c77) bg_button_pane_cp03

0xe1a1,	// (0x00018fa4) midp_keyp_sk_left_pane_g1

0x6e74,	// (0x00011c77) bg_button_pane_cp04

0xe1a1,	// (0x00018fa4) midp_keyp_sk_right_pane_g1

0xbff7,	// (0x00016dfa) midp_keyp_rocker_pane_g1

0xe1aa,	// (0x00018fad) keyp_game_cell_pane_ParamLimits

0xe1aa,	// (0x00018fad) keyp_game_cell_pane

0x6e74,	// (0x00011c77) bg_button_pane_cp02

0xe1bd,	// (0x00018fc0) keyp_game_cell_pane_g1

0x4b85,	// (0x0000f988) popup_fep_vkb2_window_ParamLimits

0x4b85,	// (0x0000f988) popup_fep_vkb2_window

0x6340,	// (0x00011143) aid_size_cell_vkb2_ParamLimits

0x6340,	// (0x00011143) aid_size_cell_vkb2

0x6394,	// (0x00011197) popup_fep_vkb2_window_g1_ParamLimits

0x6394,	// (0x00011197) popup_fep_vkb2_window_g1

0x63dc,	// (0x000111df) vkb2_area_bottom_pane_ParamLimits

0x63dc,	// (0x000111df) vkb2_area_bottom_pane

0x6428,	// (0x0001122b) vkb2_area_keypad_pane_ParamLimits

0x6428,	// (0x0001122b) vkb2_area_keypad_pane

0x646a,	// (0x0001126d) vkb2_area_top_pane_ParamLimits

0x646a,	// (0x0001126d) vkb2_area_top_pane

0x64e4,	// (0x000112e7) vkb2_top_entry_pane_ParamLimits

0x64e4,	// (0x000112e7) vkb2_top_entry_pane

0x650e,	// (0x00011311) vkb2_top_grid_left_pane_ParamLimits

0x650e,	// (0x00011311) vkb2_top_grid_left_pane

0x652c,	// (0x0001132f) vkb2_top_grid_right_pane_ParamLimits

0x652c,	// (0x0001132f) vkb2_top_grid_right_pane

0x654a,	// (0x0001134d) vkb2_cell_keypad_pane_ParamLimits

0x654a,	// (0x0001134d) vkb2_cell_keypad_pane

0x661b,	// (0x0001141e) vkb2_area_bottom_grid_pane_ParamLimits

0x661b,	// (0x0001141e) vkb2_area_bottom_grid_pane

0x6641,	// (0x00011444) vkb2_area_bottom_pane_g1_ParamLimits

0x6641,	// (0x00011444) vkb2_area_bottom_pane_g1

0x6665,	// (0x00011468) vkb2_area_bottom_pane_g2_ParamLimits

0x6665,	// (0x00011468) vkb2_area_bottom_pane_g2

0x6693,	// (0x00011496) vkb2_area_bottom_pane_g3_ParamLimits

0x6693,	// (0x00011496) vkb2_area_bottom_pane_g3

0x0002,

0xfd95,	// (0x0001ab98) vkb2_area_bottom_pane_g_ParamLimits

0xfd95,	// (0x0001ab98) vkb2_area_bottom_pane_g

0x66f4,	// (0x000114f7) vkb2_top_cell_left_pane_ParamLimits

0x66f4,	// (0x000114f7) vkb2_top_cell_left_pane

0xe1ce,	// (0x00018fd1) vkb2_top_entry_pane_g1_ParamLimits

0xe1ce,	// (0x00018fd1) vkb2_top_entry_pane_g1

0xe1dc,	// (0x00018fdf) vkb2_top_entry_pane_t1_ParamLimits

0xe1dc,	// (0x00018fdf) vkb2_top_entry_pane_t1

0xe20e,	// (0x00019011) vkb2_top_entry_pane_t2_ParamLimits

0xe20e,	// (0x00019011) vkb2_top_entry_pane_t2

0xe240,	// (0x00019043) vkb2_top_entry_pane_t3_ParamLimits

0xe240,	// (0x00019043) vkb2_top_entry_pane_t3

0x0002,

0xfd9c,	// (0x0001ab9f) vkb2_top_entry_pane_t_ParamLimits

0xfd9c,	// (0x0001ab9f) vkb2_top_entry_pane_t

0x6741,	// (0x00011544) vkb2_top_grid_right_pane_g1_ParamLimits

0x6741,	// (0x00011544) vkb2_top_grid_right_pane_g1

0x6757,	// (0x0001155a) vkb2_top_grid_right_pane_g2_ParamLimits

0x6757,	// (0x0001155a) vkb2_top_grid_right_pane_g2

0x676f,	// (0x00011572) vkb2_top_grid_right_pane_g3_ParamLimits

0x676f,	// (0x00011572) vkb2_top_grid_right_pane_g3

0x6787,	// (0x0001158a) vkb2_top_grid_right_pane_g4_ParamLimits

0x6787,	// (0x0001158a) vkb2_top_grid_right_pane_g4

0x0003,

0xfda3,	// (0x0001aba6) vkb2_top_grid_right_pane_g_ParamLimits

0xfda3,	// (0x0001aba6) vkb2_top_grid_right_pane_g

0x679d,	// (0x000115a0) vkb2_top_cell_left_pane_g1

0x67b4,	// (0x000115b7) vkb2_cell_keypad_pane_g1_ParamLimits

0x67b4,	// (0x000115b7) vkb2_cell_keypad_pane_g1

0xe264,	// (0x00019067) vkb2_cell_keypad_pane_t1_ParamLimits

0xe264,	// (0x00019067) vkb2_cell_keypad_pane_t1

0x67c2,	// (0x000115c5) vkb2_cell_bottom_grid_pane_ParamLimits

0x67c2,	// (0x000115c5) vkb2_cell_bottom_grid_pane

0x67fb,	// (0x000115fe) vkb2_cell_bottom_grid_pane_g1

0xddee,	// (0x00018bf1) aid_call2_pane_cp02

0xddf6,	// (0x00018bf9) aid_call_pane_cp02

0xddfe,	// (0x00018c01) clock_digital_number_pane_cp10

0xde06,	// (0x00018c09) clock_digital_number_pane_cp11

0xde0e,	// (0x00018c11) clock_digital_number_pane_cp12

0xde16,	// (0x00018c19) clock_digital_number_pane_cp13

0xde1e,	// (0x00018c21) clock_digital_separator_pane_cp10

0x8565,	// (0x00013368) popup_clock_digital_analogue_window_cp2_g1

0x8565,	// (0x00013368) popup_clock_digital_analogue_window_cp2_g2

0xde26,	// (0x00018c29) popup_clock_digital_analogue_window_cp2_g3

0x8565,	// (0x00013368) popup_clock_digital_analogue_window_cp2_g4

0xde26,	// (0x00018c29) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd58,	// (0x0001ab5b) popup_clock_digital_analogue_window_cp2_g

0xde2e,	// (0x00018c31) popup_clock_digital_analogue_window_cp2_t1

0xde3c,	// (0x00018c3f) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd63,	// (0x0001ab66) popup_clock_digital_analogue_window_cp2_t

0xbff7,	// (0x00016dfa) clock_digital_number_pane_cp10_g1

0xbff7,	// (0x00016dfa) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3f,	// (0x0001a942) clock_digital_number_pane_cp10_g

0xbff7,	// (0x00016dfa) clock_digital_separator_pane_cp10_g1

0xbff7,	// (0x00016dfa) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3f,	// (0x0001a942) clock_digital_separator_pane_cp10_g

0xdc6a,	// (0x00018a6d) uniindi_top_pane_g3

0xdc7b,	// (0x00018a7e) uniindi_top_pane_g4

0x65d5,	// (0x000113d8) vkb2_row_keypad_pane_ParamLimits

0x65d5,	// (0x000113d8) vkb2_row_keypad_pane

0x6817,	// (0x0001161a) vkb2_cell_t_keypad_pane_ParamLimits

0x6817,	// (0x0001161a) vkb2_cell_t_keypad_pane

0x6827,	// (0x0001162a) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6827,	// (0x0001162a) vkb2_cell_t_keypad_pane_cp08

0x683a,	// (0x0001163d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x683a,	// (0x0001163d) vkb2_cell_t_keypad_pane_cp09

0x684e,	// (0x00011651) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x684e,	// (0x00011651) vkb2_cell_t_keypad_pane_cp01

0x685f,	// (0x00011662) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x685f,	// (0x00011662) vkb2_cell_t_keypad_pane_cp02

0x6870,	// (0x00011673) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6870,	// (0x00011673) vkb2_cell_t_keypad_pane_cp03

0x6881,	// (0x00011684) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6881,	// (0x00011684) vkb2_cell_t_keypad_pane_cp04

0x6892,	// (0x00011695) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6892,	// (0x00011695) vkb2_cell_t_keypad_pane_cp05

0x68a3,	// (0x000116a6) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x68a3,	// (0x000116a6) vkb2_cell_t_keypad_pane_cp06

0x68b4,	// (0x000116b7) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x68b4,	// (0x000116b7) vkb2_cell_t_keypad_pane_cp07

0x68c5,	// (0x000116c8) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x68c5,	// (0x000116c8) vkb2_cell_t_keypad_pane_cp10

0x607b,	// (0x00010e7e) vkb2_cell_t_keypad_pane_g1

0xe27b,	// (0x0001907e) vkb2_cell_t_keypad_pane_t1

0x4a7c,	// (0x0000f87f) popup_grid_graphic2_window

0xe28d,	// (0x00019090) aid_size_cell_graphic2_ParamLimits

0xe28d,	// (0x00019090) aid_size_cell_graphic2

0xe2c5,	// (0x000190c8) bg_popup_window_pane_cp21_ParamLimits

0xe2c5,	// (0x000190c8) bg_popup_window_pane_cp21

0xe2d3,	// (0x000190d6) graphic2_pages_pane_ParamLimits

0xe2d3,	// (0x000190d6) graphic2_pages_pane

0xe319,	// (0x0001911c) grid_graphic2_control_pane_ParamLimits

0xe319,	// (0x0001911c) grid_graphic2_control_pane

0xe357,	// (0x0001915a) grid_graphic2_pane_ParamLimits

0xe357,	// (0x0001915a) grid_graphic2_pane

0xe3cb,	// (0x000191ce) cell_graphic2_pane

0x4a7c,	// (0x0000f87f) main_comp_mode_pane

0xd487,	// (0x0001828a) list_ai3_gene_pane_ParamLimits

0xd8b4,	// (0x000186b7) bg_popup_window_pane_cp19_ParamLimits

0xd8c0,	// (0x000186c3) bg_touch_area_indi_pane_ParamLimits

0xd8c0,	// (0x000186c3) bg_touch_area_indi_pane

0xd8d6,	// (0x000186d9) bg_touch_area_indi_pane_cp01_ParamLimits

0xd8d6,	// (0x000186d9) bg_touch_area_indi_pane_cp01

0xd8ec,	// (0x000186ef) bg_touch_area_indi_pane_cp02_ParamLimits

0xd8ec,	// (0x000186ef) bg_touch_area_indi_pane_cp02

0xd904,	// (0x00018707) bg_touch_area_indi_pane_cp03_ParamLimits

0xd904,	// (0x00018707) bg_touch_area_indi_pane_cp03

0xd91e,	// (0x00018721) popup_slider_window_g1_ParamLimits

0xd93a,	// (0x0001873d) popup_slider_window_g2_ParamLimits

0xd956,	// (0x00018759) popup_slider_window_g3_ParamLimits

0xfced,	// (0x0001aaf0) popup_slider_window_g_ParamLimits

0xd9b2,	// (0x000187b5) popup_slider_window_t1_ParamLimits

0xda26,	// (0x00018829) small_volume_slider_vertical_pane_ParamLimits

0xe3cb,	// (0x000191ce) cell_graphic2_pane_ParamLimits

0xe419,	// (0x0001921c) bg_button_pane_cp10_ParamLimits

0xe419,	// (0x0001921c) bg_button_pane_cp10

0xe42c,	// (0x0001922f) bg_button_pane_cp11_ParamLimits

0xe42c,	// (0x0001922f) bg_button_pane_cp11

0xe43f,	// (0x00019242) graphic2_pages_pane_g1_ParamLimits

0xe43f,	// (0x00019242) graphic2_pages_pane_g1

0xe45a,	// (0x0001925d) graphic2_pages_pane_g2_ParamLimits

0xe45a,	// (0x0001925d) graphic2_pages_pane_g2

0x0001,

0xfdb1,	// (0x0001abb4) graphic2_pages_pane_g_ParamLimits

0xfdb1,	// (0x0001abb4) graphic2_pages_pane_g

0xe472,	// (0x00019275) graphic2_pages_pane_t1_ParamLimits

0xe472,	// (0x00019275) graphic2_pages_pane_t1

0xe48a,	// (0x0001928d) cell_graphic2_control_pane_ParamLimits

0xe48a,	// (0x0001928d) cell_graphic2_control_pane

0xe4ab,	// (0x000192ae) cell_graphic2_pane_g1_ParamLimits

0xe4ab,	// (0x000192ae) cell_graphic2_pane_g1

0xe4b8,	// (0x000192bb) cell_graphic2_pane_g2_ParamLimits

0xe4b8,	// (0x000192bb) cell_graphic2_pane_g2

0xe4c5,	// (0x000192c8) cell_graphic2_pane_g3_ParamLimits

0xe4c5,	// (0x000192c8) cell_graphic2_pane_g3

0xe4d2,	// (0x000192d5) cell_graphic2_pane_g4_ParamLimits

0xe4d2,	// (0x000192d5) cell_graphic2_pane_g4

0xe4df,	// (0x000192e2) cell_graphic2_pane_g5_ParamLimits

0xe4df,	// (0x000192e2) cell_graphic2_pane_g5

0x0004,

0xfdb6,	// (0x0001abb9) cell_graphic2_pane_g_ParamLimits

0xfdb6,	// (0x0001abb9) cell_graphic2_pane_g

0xe4fa,	// (0x000192fd) cell_graphic2_pane_t1_ParamLimits

0xe4fa,	// (0x000192fd) cell_graphic2_pane_t1

0x95bb,	// (0x000143be) grid_highlight_pane_cp11_ParamLimits

0x95bb,	// (0x000143be) grid_highlight_pane_cp11

0x720b,	// (0x0001200e) bg_button_pane_cp05

0xe523,	// (0x00019326) cell_graphic2_control_pane_g1

0xbff7,	// (0x00016dfa) bg_touch_area_indi_pane_g1

0xe54b,	// (0x0001934e) aid_cmod_rocker_key_size

0xe555,	// (0x00019358) aid_cmode_itu_key_size

0xe55f,	// (0x00019362) main_cmode_video_pane

0xe569,	// (0x0001936c) main_comp_mode_itu_pane

0xe575,	// (0x00019378) main_comp_mode_rocker_pane

0xe581,	// (0x00019384) cell_cmode_rocker_pane_ParamLimits

0xe581,	// (0x00019384) cell_cmode_rocker_pane

0xe593,	// (0x00019396) cell_cmode_itu_pane_ParamLimits

0xe593,	// (0x00019396) cell_cmode_itu_pane

0x7d6c,	// (0x00012b6f) bg_button_pane_cp06_ParamLimits

0x7d6c,	// (0x00012b6f) bg_button_pane_cp06

0xc275,	// (0x00017078) cell_cmode_rocker_pane_g1_ParamLimits

0xc275,	// (0x00017078) cell_cmode_rocker_pane_g1

0xdaca,	// (0x000188cd) cell_cmode_rocker_pane_g2_ParamLimits

0xdaca,	// (0x000188cd) cell_cmode_rocker_pane_g2

0x0001,

0xfdc6,	// (0x0001abc9) cell_cmode_rocker_pane_g_ParamLimits

0xfdc6,	// (0x0001abc9) cell_cmode_rocker_pane_g

0x6e74,	// (0x00011c77) bg_button_pane_cp07

0xe5a8,	// (0x000193ab) cell_cmode_itu_pane_g1

0xe5b1,	// (0x000193b4) cell_cmode_itu_pane_t1

0xe5bf,	// (0x000193c2) cell_cmode_itu_pane_t2

0x0001,

0xfdcb,	// (0x0001abce) cell_cmode_itu_pane_t

0xdced,	// (0x00018af0) aid_touch_ctrl_left

0xdcf5,	// (0x00018af8) aid_touch_ctrl_right

0x6e74,	// (0x00011c77) compa_mode_pane

0xe5cd,	// (0x000193d0) aid_cmod_rocker_key_size_cp

0xe5d7,	// (0x000193da) aid_cmode_itu_key_size_cp

0xe5e1,	// (0x000193e4) compa_mode_pane_g1

0xe5e9,	// (0x000193ec) compa_mode_pane_g2

0xe5f1,	// (0x000193f4) compa_mode_pane_g3

0x0002,

0xfdd0,	// (0x0001abd3) compa_mode_pane_g

0xe5f9,	// (0x000193fc) main_comp_mode_itu_pane_cp

0xe601,	// (0x00019404) main_comp_mode_rocker_pane_cp

0xe609,	// (0x0001940c) cell_cmode_itu_pane_cp_ParamLimits

0xe609,	// (0x0001940c) cell_cmode_itu_pane_cp

0xe61e,	// (0x00019421) cell_cmode_rocker_pane_cp_ParamLimits

0xe61e,	// (0x00019421) cell_cmode_rocker_pane_cp

0x7d6c,	// (0x00012b6f) bg_button_pane_cp06_cp_ParamLimits

0x7d6c,	// (0x00012b6f) bg_button_pane_cp06_cp

0xc275,	// (0x00017078) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc275,	// (0x00017078) cell_cmode_rocker_pane_g1_cp

0xbff7,	// (0x00016dfa) cell_cmode_rocker_pane_g2_cp

0x6e74,	// (0x00011c77) bg_button_pane_cp07_cp

0xaaf2,	// (0x000158f5) cell_cmode_itu_pane_g1_cp

0xe630,	// (0x00019433) cell_cmode_itu_pane_t1_cp

0xe630,	// (0x00019433) cell_cmode_itu_pane_t2_cp

0xaadf,	// (0x000158e2) settings_code_pane_cp2

0x6f68,	// (0x00011d6b) bg_popup_window_pane_cp3_ParamLimits

0x73e5,	// (0x000121e8) heading_pane_cp3_ParamLimits

0x73f1,	// (0x000121f4) listscroll_popup_graphic_pane_ParamLimits

0x5e24,	// (0x00010c27) fep_hwr_aid_pane_ParamLimits

0x629b,	// (0x0001109e) aid_touch_sctrl_top_ParamLimits

0x62b6,	// (0x000110b9) sctrl_sk_top_pane_g1_ParamLimits

0x607b,	// (0x00010e7e) sctrl_sk_top_pane_g2_ParamLimits

0xfd06,	// (0x0001ab09) sctrl_sk_top_pane_g_ParamLimits

0x62c3,	// (0x000110c6) sctrl_sk_top_pane_t1_ParamLimits

0x629b,	// (0x0001109e) aid_touch_sctrl_bottom_ParamLimits

0x62c3,	// (0x000110c6) sctrl_sk_bottom_pane_t1_ParamLimits

0xdc36,	// (0x00018a39) aid_area_touch_clock

0x64ac,	// (0x000112af) aid_vkb2_area_top_pane_cell_ParamLimits

0x64ac,	// (0x000112af) aid_vkb2_area_top_pane_cell

0x65f7,	// (0x000113fa) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x65f7,	// (0x000113fa) aid_vkb2_area_bottom_pane_cell

0xe1c6,	// (0x00018fc9) popup_char_count_window

0xe63e,	// (0x00019441) popup_char_count_window_g1

0xe647,	// (0x0001944a) popup_char_count_window_g2

0xe650,	// (0x00019453) popup_char_count_window_g3

0x0002,

0xfdd7,	// (0x0001abda) popup_char_count_window_g

0xe659,	// (0x0001945c) popup_char_count_window_t1

0x6372,	// (0x00011175) popup_fep_char_preview_window_ParamLimits

0x6372,	// (0x00011175) popup_fep_char_preview_window

0x64ca,	// (0x000112cd) vkb2_top_candi_pane_ParamLimits

0x64ca,	// (0x000112cd) vkb2_top_candi_pane

0xe667,	// (0x0001946a) cell_vkb2_top_candi_pane_ParamLimits

0xe667,	// (0x0001946a) cell_vkb2_top_candi_pane

0x68da,	// (0x000116dd) bg_popup_fep_char_preview_window_ParamLimits

0x68da,	// (0x000116dd) bg_popup_fep_char_preview_window

0x68e8,	// (0x000116eb) popup_fep_char_preview_window_t1_ParamLimits

0x68e8,	// (0x000116eb) popup_fep_char_preview_window_t1

0xe6b4,	// (0x000194b7) bg_popup_fep_char_preview_window_g1

0xe6bc,	// (0x000194bf) bg_popup_fep_char_preview_window_g2

0xe6c4,	// (0x000194c7) bg_popup_fep_char_preview_window_g3

0xe6cc,	// (0x000194cf) bg_popup_fep_char_preview_window_g4

0xe6d4,	// (0x000194d7) bg_popup_fep_char_preview_window_g5

0x6922,	// (0x00011725) bg_popup_fep_char_preview_window_g6

0xe6dc,	// (0x000194df) bg_popup_fep_char_preview_window_g7

0xe6e4,	// (0x000194e7) bg_popup_fep_char_preview_window_g8

0xe6ec,	// (0x000194ef) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdde,	// (0x0001abe1) bg_popup_fep_char_preview_window_g

0x607b,	// (0x00010e7e) cell_vkb2_top_candi_pane_g1_ParamLimits

0x607b,	// (0x00010e7e) cell_vkb2_top_candi_pane_g1

0x6089,	// (0x00010e8c) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6089,	// (0x00010e8c) cell_vkb2_top_candi_pane_g2

0xe126,	// (0x00018f29) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe126,	// (0x00018f29) cell_vkb2_top_candi_pane_g3

0x692a,	// (0x0001172d) cell_vkb2_top_candi_pane_g4_ParamLimits

0x692a,	// (0x0001172d) cell_vkb2_top_candi_pane_g4

0xc8e5,	// (0x000176e8) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc8e5,	// (0x000176e8) cell_vkb2_top_candi_pane_g5

0x694b,	// (0x0001174e) cell_vkb2_top_candi_pane_g6_ParamLimits

0x694b,	// (0x0001174e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf1,	// (0x0001abf4) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf1,	// (0x0001abf4) cell_vkb2_top_candi_pane_g

0x6959,	// (0x0001175c) cell_vkb2_top_candi_pane_t1

0x5c84,	// (0x00010a87) aid_size_touch_slider_mark_ParamLimits

0x5c84,	// (0x00010a87) aid_size_touch_slider_mark

0xe309,	// (0x0001910c) grid_graphic2_catg_pane_ParamLimits

0xe309,	// (0x0001910c) grid_graphic2_catg_pane

0xe3a7,	// (0x000191aa) popup_grid_graphic2_window_t1_ParamLimits

0xe3a7,	// (0x000191aa) popup_grid_graphic2_window_t1

0xe3b9,	// (0x000191bc) popup_grid_graphic2_window_t2_ParamLimits

0xe3b9,	// (0x000191bc) popup_grid_graphic2_window_t2

0x0001,

0xfdac,	// (0x0001abaf) popup_grid_graphic2_window_t_ParamLimits

0xfdac,	// (0x0001abaf) popup_grid_graphic2_window_t

0x720b,	// (0x0001200e) bg_button_pane_cp05_ParamLimits

0xe523,	// (0x00019326) cell_graphic2_control_pane_g1_ParamLimits

0xe6f4,	// (0x000194f7) cell_graphic2_catg_pane_ParamLimits

0xe6f4,	// (0x000194f7) cell_graphic2_catg_pane

0x6e74,	// (0x00011c77) bg_button_pane_cp12

0xe706,	// (0x00019509) cell_graphic2_catg_pane_g1

0xdc02,	// (0x00018a05) cell_tb_ext_pane_t1_ParamLimits

0x6714,	// (0x00011517) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6714,	// (0x00011517) vkb2_top_cell_right_narrow_pane

0x672c,	// (0x0001152f) vkb2_top_cell_right_wide_pane_ParamLimits

0x672c,	// (0x0001152f) vkb2_top_cell_right_wide_pane

0x5e16,	// (0x00010c19) bg_vkb2_func_pane_ParamLimits

0x5e16,	// (0x00010c19) bg_vkb2_func_pane

0x679d,	// (0x000115a0) vkb2_top_cell_left_pane_g1_ParamLimits

0x5e16,	// (0x00010c19) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5e16,	// (0x00010c19) bg_vkb2_fuc_pane_cp03

0x67fb,	// (0x000115fe) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9495,	// (0x00014298) bg_vkb2_func_pane_g1

0x949d,	// (0x000142a0) bg_vkb2_func_pane_g2

0x94ad,	// (0x000142b0) bg_vkb2_func_pane_g3

0x94a5,	// (0x000142a8) bg_vkb2_func_pane_g4

0x94b5,	// (0x000142b8) bg_vkb2_func_pane_g5

0x94bd,	// (0x000142c0) bg_vkb2_func_pane_g6

0x94c5,	// (0x000142c8) bg_vkb2_func_pane_g7

0x94cd,	// (0x000142d0) bg_vkb2_func_pane_g8

0x948d,	// (0x00014290) bg_vkb2_func_pane_g9

0x0008,

0xfdfe,	// (0x0001ac01) bg_vkb2_func_pane_g

0x5e16,	// (0x00010c19) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5e16,	// (0x00010c19) bg_vkb2_fuc_pane_cp01

0x679d,	// (0x000115a0) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x679d,	// (0x000115a0) vkb2_top_cell_right_wide_pane_g1

0x5e16,	// (0x00010c19) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5e16,	// (0x00010c19) bg_vkb2_fuc_pane_cp02

0x67fb,	// (0x000115fe) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x67fb,	// (0x000115fe) vkb2_top_cell_right_narrow_pane_g1

0xd838,	// (0x0001863b) aid_touch_area_decrease_ParamLimits

0xd838,	// (0x0001863b) aid_touch_area_decrease

0xd856,	// (0x00018659) aid_touch_area_increase_ParamLimits

0xd856,	// (0x00018659) aid_touch_area_increase

0xd862,	// (0x00018665) aid_touch_area_mute_ParamLimits

0xd862,	// (0x00018665) aid_touch_area_mute

0xd886,	// (0x00018689) aid_touch_area_slider_ParamLimits

0xd886,	// (0x00018689) aid_touch_area_slider

0xd972,	// (0x00018775) popup_slider_window_g4_ParamLimits

0xd972,	// (0x00018775) popup_slider_window_g4

0xd97e,	// (0x00018781) popup_slider_window_g5_ParamLimits

0xd97e,	// (0x00018781) popup_slider_window_g5

0xd9a0,	// (0x000187a3) popup_slider_window_g6_ParamLimits

0xd9a0,	// (0x000187a3) popup_slider_window_g6

0xd9e0,	// (0x000187e3) popup_slider_window_t2_ParamLimits

0xd9e0,	// (0x000187e3) popup_slider_window_t2

0x0001,

0xfcfa,	// (0x0001aafd) popup_slider_window_t_ParamLimits

0xfcfa,	// (0x0001aafd) popup_slider_window_t

0xd9f8,	// (0x000187fb) slider_pane_ParamLimits

0xd9f8,	// (0x000187fb) slider_pane

0xe70f,	// (0x00019512) slider_pane_g1_ParamLimits

0xe70f,	// (0x00019512) slider_pane_g1

0xe723,	// (0x00019526) slider_pane_g2_ParamLimits

0xe723,	// (0x00019526) slider_pane_g2

0xe739,	// (0x0001953c) slider_pane_g3_ParamLimits

0xe739,	// (0x0001953c) slider_pane_g3

0x0003,

0xfe11,	// (0x0001ac14) slider_pane_g_ParamLimits

0xfe11,	// (0x0001ac14) slider_pane_g

0x583f,	// (0x00010642) popup_tb_float_extension_window_ParamLimits

0x583f,	// (0x00010642) popup_tb_float_extension_window

0xe765,	// (0x00019568) aid_size_cell_tb_float_ext

0x6e74,	// (0x00011c77) bg_popup_sub_window_cp28

0xe771,	// (0x00019574) grid_tb_float_ext_pane

0xe77b,	// (0x0001957e) cell_tb_float_ext_pane_ParamLimits

0xe77b,	// (0x0001957e) cell_tb_float_ext_pane

0xe795,	// (0x00019598) cell_tb_float_ext_pane_g1

0xe79e,	// (0x000195a1) grid_highlight_pane_cp12

0x5f65,	// (0x00010d68) cell_last_hwr_side_pane_ParamLimits

0x5f65,	// (0x00010d68) cell_last_hwr_side_pane

0xbff7,	// (0x00016dfa) cell_last_hwr_side_pane_g1

0xe7a7,	// (0x000195aa) cell_last_hwr_side_pane_g2

0x0001,

0xfe1a,	// (0x0001ac1d) cell_last_hwr_side_pane_g

0x66c3,	// (0x000114c6) vkb2_area_bottom_space_btn_pane_ParamLimits

0x66c3,	// (0x000114c6) vkb2_area_bottom_space_btn_pane

0x607b,	// (0x00010e7e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe27b,	// (0x0001907e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6959,	// (0x0001175c) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6978,	// (0x0001177b) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6978,	// (0x0001177b) vkb2_area_bottom_space_btn_pane_g1

0x69b2,	// (0x000117b5) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x69b2,	// (0x000117b5) vkb2_area_bottom_space_btn_pane_g2

0x69e8,	// (0x000117eb) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x69e8,	// (0x000117eb) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1f,	// (0x0001ac22) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1f,	// (0x0001ac22) vkb2_area_bottom_space_btn_pane_g

0x5ed9,	// (0x00010cdc) cel_fep_hwr_func_pane_ParamLimits

0x5ed9,	// (0x00010cdc) cel_fep_hwr_func_pane

0x5f15,	// (0x00010d18) cell_hwr_side_button_pane_ParamLimits

0x5f15,	// (0x00010d18) cell_hwr_side_button_pane

0xdc36,	// (0x00018a39) aid_area_touch_clock_ParamLimits

0x720b,	// (0x0001200e) bg_uniindi_top_pane_ParamLimits

0xdc48,	// (0x00018a4b) uniindi_top_pane_g1_ParamLimits

0xdc5e,	// (0x00018a61) uniindi_top_pane_g2_ParamLimits

0xdc6a,	// (0x00018a6d) uniindi_top_pane_g3_ParamLimits

0xdc7b,	// (0x00018a7e) uniindi_top_pane_g4_ParamLimits

0xfd32,	// (0x0001ab35) uniindi_top_pane_g_ParamLimits

0xdc88,	// (0x00018a8b) uniindi_top_pane_t1_ParamLimits

0x720b,	// (0x0001200e) bg_vkb2_func_pane_cp01_ParamLimits

0x720b,	// (0x0001200e) bg_vkb2_func_pane_cp01

0xe7b0,	// (0x000195b3) cel_fep_hwr_func_pane_g1_ParamLimits

0xe7b0,	// (0x000195b3) cel_fep_hwr_func_pane_g1

0x720b,	// (0x0001200e) bg_vkb2_func_pane_cp02_ParamLimits

0x720b,	// (0x0001200e) bg_vkb2_func_pane_cp02

0xe7b0,	// (0x000195b3) cell_hwr_side_button_pane_g1_ParamLimits

0xe7b0,	// (0x000195b3) cell_hwr_side_button_pane_g1

0x92e0,	// (0x000140e3) status_pane_g4_ParamLimits

0x92e0,	// (0x000140e3) status_pane_g4

0x92fa,	// (0x000140fd) status_pane_t1

0xbd31,	// (0x00016b34) form2_midp_gauge_slider_cont_pane

0xbd39,	// (0x00016b3c) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd4b,	// (0x00016b4e) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbd5d,	// (0x00016b60) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf2,	// (0x0001a8f5) form2_midp_gauge_slider_pane_t_ParamLimits

0xbd6f,	// (0x00016b72) form2_midp_slider_pane_ParamLimits

0x6332,	// (0x00011135) aid_size_cell_func_vkb2_ParamLimits

0x6332,	// (0x00011135) aid_size_cell_func_vkb2

0xe751,	// (0x00019554) slider_pane_g4_ParamLimits

0xe751,	// (0x00019554) slider_pane_g4

0x6a32,	// (0x00011835) form2_midp_gauge_slider_pane_t2_cp01

0x6a40,	// (0x00011843) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x6a40,	// (0x00011843) form2_midp_gauge_slider_pane_t3_cp01

0x6a5d,	// (0x00011860) form2_midp_slider_pane_cp01

0x6e74,	// (0x00011c77) navi_smil_pane

0xe7e9,	// (0x000195ec) navi_smil_pane_g1

0xe7f1,	// (0x000195f4) navi_smil_pane_t1

0xe7be,	// (0x000195c1) form2_midp_slider_pane_g1

0xe7c7,	// (0x000195ca) form2_midp_slider_pane_g2

0xe7cf,	// (0x000195d2) form2_midp_slider_pane_g3

0xe7be,	// (0x000195c1) form2_midp_slider_pane_g4

0xe7d7,	// (0x000195da) form2_midp_slider_pane_g5

0x0004,

0xfe28,	// (0x0001ac2b) form2_midp_slider_pane_g

0x6a22,	// (0x00011825) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6a22,	// (0x00011825) vkb2_area_bottom_space_btn_pane_g4

0x910f,	// (0x00013f12) lc0_navi_pane_ParamLimits

0x910f,	// (0x00013f12) lc0_navi_pane

0x9185,	// (0x00013f88) lc0_stat_indi_pane_ParamLimits

0x9185,	// (0x00013f88) lc0_stat_indi_pane

0x919c,	// (0x00013f9f) ls0_title_pane_ParamLimits

0x919c,	// (0x00013f9f) ls0_title_pane

0x7d6c,	// (0x00012b6f) bg_popup_sub_pane_cp14_ParamLimits

0xdc1d,	// (0x00018a20) list_uniindi_pane_ParamLimits

0xdc29,	// (0x00018a2c) uniindi_top_pane_ParamLimits

0xdcc5,	// (0x00018ac8) list_single_uniindi_pane_g1_ParamLimits

0xdcd8,	// (0x00018adb) list_single_uniindi_pane_t1_ParamLimits

0x6a66,	// (0x00011869) lc0_stat_clock_pane_ParamLimits

0x6a66,	// (0x00011869) lc0_stat_clock_pane

0xe7ff,	// (0x00019602) lc0_stat_indi_pane_g1_ParamLimits

0xe7ff,	// (0x00019602) lc0_stat_indi_pane_g1

0xe80c,	// (0x0001960f) lc0_stat_indi_pane_g2_ParamLimits

0xe80c,	// (0x0001960f) lc0_stat_indi_pane_g2

0x0001,

0xfe33,	// (0x0001ac36) lc0_stat_indi_pane_g_ParamLimits

0xfe33,	// (0x0001ac36) lc0_stat_indi_pane_g

0x6a73,	// (0x00011876) lc0_uni_indicator_pane_ParamLimits

0x6a73,	// (0x00011876) lc0_uni_indicator_pane

0xe819,	// (0x0001961c) ls0_title_pane_g1_ParamLimits

0xe819,	// (0x0001961c) ls0_title_pane_g1

0xe82d,	// (0x00019630) ls0_title_pane_t1_ParamLimits

0xe82d,	// (0x00019630) ls0_title_pane_t1

0x6a80,	// (0x00011883) lc0_uni_indicator_pane_g1_ParamLimits

0x6a80,	// (0x00011883) lc0_uni_indicator_pane_g1

0xe863,	// (0x00019666) lc0_stat_clock_pane_t1

0x4a7c,	// (0x0000f87f) main_ai5_pane

0xe871,	// (0x00019674) ai5_sk_pane_ParamLimits

0xe871,	// (0x00019674) ai5_sk_pane

0xe87e,	// (0x00019681) cell_ai5_widget_pane_ParamLimits

0xe87e,	// (0x00019681) cell_ai5_widget_pane

0xe934,	// (0x00019737) aid_size_cell_widget_grid

0xe94a,	// (0x0001974d) bg_ai5_widget_pane_ParamLimits

0xe94a,	// (0x0001974d) bg_ai5_widget_pane

0xe9be,	// (0x000197c1) cell_ai5_widget_pane_g2

0xe9ce,	// (0x000197d1) cell_ai5_widget_pane_g3

0xe9e5,	// (0x000197e8) cell_ai5_widget_pane_g4

0xe9f1,	// (0x000197f4) cell_ai5_widget_pane_g5

0xe9fd,	// (0x00019800) cell_ai5_widget_pane_g6

0xea09,	// (0x0001980c) cell_ai5_widget_pane_g7

0xea51,	// (0x00019854) cell_ai5_widget_pane_t1_ParamLimits

0xea51,	// (0x00019854) cell_ai5_widget_pane_t1

0xea6e,	// (0x00019871) cell_ai5_widget_pane_t2_ParamLimits

0xea6e,	// (0x00019871) cell_ai5_widget_pane_t2

0xea86,	// (0x00019889) cell_ai5_widget_pane_t3_ParamLimits

0xea86,	// (0x00019889) cell_ai5_widget_pane_t3

0xea9e,	// (0x000198a1) cell_ai5_widget_pane_t4_ParamLimits

0xea9e,	// (0x000198a1) cell_ai5_widget_pane_t4

0xeabb,	// (0x000198be) cell_ai5_widget_pane_t5_ParamLimits

0xeabb,	// (0x000198be) cell_ai5_widget_pane_t5

0xeada,	// (0x000198dd) cell_ai5_widget_pane_t6_ParamLimits

0xeada,	// (0x000198dd) cell_ai5_widget_pane_t6

0xeaec,	// (0x000198ef) cell_ai5_widget_pane_t7_ParamLimits

0xeaec,	// (0x000198ef) cell_ai5_widget_pane_t7

0xeb05,	// (0x00019908) cell_ai5_widget_pane_t8_ParamLimits

0xeb05,	// (0x00019908) cell_ai5_widget_pane_t8

0x0009,

0xfe4d,	// (0x0001ac50) cell_ai5_widget_pane_t_ParamLimits

0xfe4d,	// (0x0001ac50) cell_ai5_widget_pane_t

0xeb59,	// (0x0001995c) grid_ai5_widget_pane

0x7d6c,	// (0x00012b6f) highlight_cell_ai5_widget_pane_ParamLimits

0x7d6c,	// (0x00012b6f) highlight_cell_ai5_widget_pane

0xeb70,	// (0x00019973) ai5_sk_left_pane

0xeb7a,	// (0x0001997d) ai5_sk_middle_pane

0xeb84,	// (0x00019987) ai5_sk_right_pane

0xeb8e,	// (0x00019991) bg_ai5_widget_pane_g1_ParamLimits

0xeb8e,	// (0x00019991) bg_ai5_widget_pane_g1

0xeb9a,	// (0x0001999d) bg_ai5_widget_pane_g2_ParamLimits

0xeb9a,	// (0x0001999d) bg_ai5_widget_pane_g2

0xeba6,	// (0x000199a9) bg_ai5_widget_pane_g3_ParamLimits

0xeba6,	// (0x000199a9) bg_ai5_widget_pane_g3

0xebb2,	// (0x000199b5) bg_ai5_widget_pane_g4_ParamLimits

0xebb2,	// (0x000199b5) bg_ai5_widget_pane_g4

0xebbe,	// (0x000199c1) bg_ai5_widget_pane_g5_ParamLimits

0xebbe,	// (0x000199c1) bg_ai5_widget_pane_g5

0xebca,	// (0x000199cd) bg_ai5_widget_pane_g6_ParamLimits

0xebca,	// (0x000199cd) bg_ai5_widget_pane_g6

0xebd6,	// (0x000199d9) bg_ai5_widget_pane_g7_ParamLimits

0xebd6,	// (0x000199d9) bg_ai5_widget_pane_g7

0xebe2,	// (0x000199e5) bg_ai5_widget_pane_g8_ParamLimits

0xebe2,	// (0x000199e5) bg_ai5_widget_pane_g8

0xebee,	// (0x000199f1) bg_ai5_widget_pane_g9_ParamLimits

0xebee,	// (0x000199f1) bg_ai5_widget_pane_g9

0x0008,

0xfe62,	// (0x0001ac65) bg_ai5_widget_pane_g_ParamLimits

0xfe62,	// (0x0001ac65) bg_ai5_widget_pane_g

0xec20,	// (0x00019a23) cell_shortcut_ai5_widget_pane_ParamLimits

0xec20,	// (0x00019a23) cell_shortcut_ai5_widget_pane

0x8c07,	// (0x00013a0a) bg_cell_shortcut_ai5_widget_pane

0xec31,	// (0x00019a34) cell_grid_ai5_widget_pane_g1

0x8c07,	// (0x00013a0a) highlight_cell_shortcut_ai5_widget_pane

0x9495,	// (0x00014298) ai5_sk_left_pane_g1

0xec3a,	// (0x00019a3d) ai5_sk_left_pane_g2

0xec42,	// (0x00019a45) ai5_sk_left_pane_g3

0xec4a,	// (0x00019a4d) ai5_sk_left_pane_g4

0x0003,

0xfe75,	// (0x0001ac78) ai5_sk_left_pane_g

0xec52,	// (0x00019a55) ai5_sk_left_pane_t1

0x949d,	// (0x000142a0) ai5_sk_right_pane_g1

0xec60,	// (0x00019a63) ai5_sk_right_pane_g2

0xec68,	// (0x00019a6b) ai5_sk_right_pane_g3

0xec70,	// (0x00019a73) ai5_sk_right_pane_g4

0x0003,

0xfe7e,	// (0x0001ac81) ai5_sk_right_pane_g

0xec78,	// (0x00019a7b) ai5_sk_right_pane_t1

0x949d,	// (0x000142a0) ai5_sk_middle_pane_g1

0x9495,	// (0x00014298) ai5_sk_middle_pane_g2

0x94b5,	// (0x000142b8) ai5_sk_middle_pane_g3

0xec68,	// (0x00019a6b) ai5_sk_middle_pane_g4

0xec42,	// (0x00019a45) ai5_sk_middle_pane_g5

0xec86,	// (0x00019a89) ai5_sk_middle_pane_g6

0xec8e,	// (0x00019a91) ai5_sk_middle_pane_g7

0x0006,

0xfe87,	// (0x0001ac8a) ai5_sk_middle_pane_g

0x8f9b,	// (0x00013d9e) aid_touch_area_size_lc0_ParamLimits

0x8f9b,	// (0x00013d9e) aid_touch_area_size_lc0

0x60aa,	// (0x00010ead) cell_hwr_candidate_pane_t1_ParamLimits

0x8fb7,	// (0x00013dba) aid_touch_navi_pane

0x928a,	// (0x0001408d) status_dt_navi_pane_ParamLimits

0x928a,	// (0x0001408d) status_dt_navi_pane

0x9297,	// (0x0001409a) status_dt_sta_pane_ParamLimits

0x9297,	// (0x0001409a) status_dt_sta_pane

0xec96,	// (0x00019a99) dt_sta_controll_pane

0xeca3,	// (0x00019aa6) dt_sta_indi_pane

0xecb4,	// (0x00019ab7) dt_sta_title_pane

0x720b,	// (0x0001200e) bg_dt_sta_indi_pane_ParamLimits

0x720b,	// (0x0001200e) bg_dt_sta_indi_pane

0xecc7,	// (0x00019aca) dt_sta_battery_pane

0xeccf,	// (0x00019ad2) dt_sta_indi_pane_g1

0xecd8,	// (0x00019adb) dt_sta_indi_pane_g2

0xece1,	// (0x00019ae4) dt_sta_indi_pane_g3

0x0002,

0xfe96,	// (0x0001ac99) dt_sta_indi_pane_g

0xecea,	// (0x00019aed) dt_sta_signal_pane

0x7d6c,	// (0x00012b6f) bg_dt_sta_title_pane_ParamLimits

0x7d6c,	// (0x00012b6f) bg_dt_sta_title_pane

0xecf3,	// (0x00019af6) dt_sta_title_pane_g1

0xecfb,	// (0x00019afe) dt_sta_title_pane_t1_ParamLimits

0xecfb,	// (0x00019afe) dt_sta_title_pane_t1

0x6e74,	// (0x00011c77) bg_dt_sta_control_pane

0xed10,	// (0x00019b13) dt_sta_controll_pane_g1

0xed19,	// (0x00019b1c) bg_dt_sta_title_pane_g1

0xed22,	// (0x00019b25) bg_dt_sta_title_pane_g2

0xed2b,	// (0x00019b2e) bg_dt_sta_title_pane_g3

0x0002,

0xfe9d,	// (0x0001aca0) bg_dt_sta_title_pane_g

0xbff7,	// (0x00016dfa) bg_dt_sta_indi_pane_g1

0xed34,	// (0x00019b37) dt_sta_signal_pane_g1

0xed3c,	// (0x00019b3f) dt_sta_signal_pane_g2

0x0001,

0xfea4,	// (0x0001aca7) dt_sta_signal_pane_g

0xed44,	// (0x00019b47) dt_sta_battery_pane_g1

0xed4d,	// (0x00019b50) dt_sta_battery_pane_t1

0xbff7,	// (0x00016dfa) bg_dt_sta_control_pane_g1

0x8677,	// (0x0001347a) fep_china_uni_eep_pane

0x867f,	// (0x00013482) fep_china_uni_entry_pane_ParamLimits

0x868f,	// (0x00013492) popup_fep_china_uni_window_g1_ParamLimits

0x869f,	// (0x000134a2) popup_fep_china_uni_window_g2_ParamLimits

0x869f,	// (0x000134a2) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0001a51b) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0001a51b) popup_fep_china_uni_window_g

0xed5c,	// (0x00019b5f) fep_china_uni_eep_pane_g1

0xed64,	// (0x00019b67) fep_china_uni_eep_pane_t1

0xe7e0,	// (0x000195e3) aid_touch_area_size_smil_player

0x9107,	// (0x00013f0a) lc0_clock_pane

0x92ee,	// (0x000140f1) status_pane_g5_ParamLimits

0x92ee,	// (0x000140f1) status_pane_g5

0x5504,	// (0x00010307) popup_keymap_window

0x92ac,	// (0x000140af) status_icon_pane

0xe9ce,	// (0x000197d1) cell_ai5_widget_pane_g3_ParamLimits

0xe9e5,	// (0x000197e8) cell_ai5_widget_pane_g4_ParamLimits

0xe9f1,	// (0x000197f4) cell_ai5_widget_pane_g5_ParamLimits

0xea15,	// (0x00019818) cell_ai5_widget_pane_g8_ParamLimits

0xea15,	// (0x00019818) cell_ai5_widget_pane_g8

0xea29,	// (0x0001982c) cell_ai5_widget_pane_g9_ParamLimits

0xea29,	// (0x0001982c) cell_ai5_widget_pane_g9

0xea3d,	// (0x00019840) cell_ai5_widget_pane_g10_ParamLimits

0xea3d,	// (0x00019840) cell_ai5_widget_pane_g10

0xed73,	// (0x00019b76) status_icon_pane_g1

0x6e74,	// (0x00011c77) bg_popup_sub_pane_cp13

0xed7b,	// (0x00019b7e) popup_keymap_window_t1

0x8ed0,	// (0x00013cd3) control_pane_g6_ParamLimits

0x8ed0,	// (0x00013cd3) control_pane_g6

0x8edd,	// (0x00013ce0) control_pane_g7_ParamLimits

0x8edd,	// (0x00013ce0) control_pane_g7

0x8eea,	// (0x00013ced) control_pane_g8_ParamLimits

0x8eea,	// (0x00013ced) control_pane_g8

0xec96,	// (0x00019a99) dt_sta_controll_pane_ParamLimits

0xeca3,	// (0x00019aa6) dt_sta_indi_pane_ParamLimits

0xecb4,	// (0x00019ab7) dt_sta_title_pane_ParamLimits

0x7729,	// (0x0001252c) aid_size_touch_scroll_bar_cale

0x4b55,	// (0x0000f958) popup_discreet_window_ParamLimits

0x4b55,	// (0x0000f958) popup_discreet_window

0x4bdd,	// (0x0000f9e0) popup_sk_window

0x9bfe,	// (0x00014a01) bg_popup_sub_pane_cp28_ParamLimits

0x9bfe,	// (0x00014a01) bg_popup_sub_pane_cp28

0xed89,	// (0x00019b8c) popup_discreet_window_g1_ParamLimits

0xed89,	// (0x00019b8c) popup_discreet_window_g1

0xeda9,	// (0x00019bac) popup_discreet_window_t1_ParamLimits

0xeda9,	// (0x00019bac) popup_discreet_window_t1

0xedc7,	// (0x00019bca) popup_discreet_window_t2_ParamLimits

0xedc7,	// (0x00019bca) popup_discreet_window_t2

0x0002,

0xfea9,	// (0x0001acac) popup_discreet_window_t_ParamLimits

0xfea9,	// (0x0001acac) popup_discreet_window_t

0x6a94,	// (0x00011897) popup_sk_window_g1

0x6a9e,	// (0x000118a1) popup_sk_window_g2

0x0001,

0xfeb0,	// (0x0001acb3) popup_sk_window_g

0x6aa8,	// (0x000118ab) popup_sk_window_t1

0x6ab6,	// (0x000118b9) popup_sk_window_t1_copy1

0xe9be,	// (0x000197c1) cell_ai5_widget_pane_g2_ParamLimits

0xeb17,	// (0x0001991a) cell_ai5_widget_pane_t9_ParamLimits

0xeb17,	// (0x0001991a) cell_ai5_widget_pane_t9

0x6e74,	// (0x00011c77) main_fep_fshwr2_pane

0x6ac4,	// (0x000118c7) aid_fshwr2_btn_pane

0x6ad0,	// (0x000118d3) aid_fshwr2_syb_pane

0x6adc,	// (0x000118df) aid_fshwr2_txt_pane

0x6ae8,	// (0x000118eb) fshwr2_func_candi_pane

0x6afd,	// (0x00011900) fshwr2_hwr_syb_pane

0x6b0d,	// (0x00011910) fshwr2_icf_pane

0x4a7c,	// (0x0000f87f) fshwr2_icf_bg_pane

0x6b36,	// (0x00011939) fshwr2_icf_pane_t1_ParamLimits

0x6b36,	// (0x00011939) fshwr2_icf_pane_t1

0x8565,	// (0x00013368) fshwr2_func_candi_pane_g1

0xee19,	// (0x00019c1c) fshwr2_func_candi_row_pane_ParamLimits

0xee19,	// (0x00019c1c) fshwr2_func_candi_row_pane

0x6b4e,	// (0x00011951) cell_fshwr2_syb_pane_ParamLimits

0x6b4e,	// (0x00011951) cell_fshwr2_syb_pane

0x607b,	// (0x00010e7e) fshwr2_hwr_syb_pane_g1_ParamLimits

0x607b,	// (0x00010e7e) fshwr2_hwr_syb_pane_g1

0x4a7c,	// (0x0000f87f) bg_popup_call_pane_cp01

0x6b64,	// (0x00011967) fshwr2_func_candi_cell_pane_ParamLimits

0x6b64,	// (0x00011967) fshwr2_func_candi_cell_pane

0xee29,	// (0x00019c2c) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xee29,	// (0x00019c2c) fshwr2_func_candi_cell_bg_pane

0x6b99,	// (0x0001199c) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x6b99,	// (0x0001199c) fshwr2_func_candi_cell_pane_g1

0x6bc1,	// (0x000119c4) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x6bc1,	// (0x000119c4) fshwr2_func_candi_cell_pane_t1

0x4a7c,	// (0x0000f87f) bg_button_pane_cp08

0xee35,	// (0x00019c38) cell_fshwr2_syb_bg_pane

0x6bd4,	// (0x000119d7) cell_fshwr2_syb_bg_pane_g1

0x6bdc,	// (0x000119df) cell_fshwr2_syb_bg_pane_t1

0x7d6c,	// (0x00012b6f) main_tmo_pane

0xa719,	// (0x0001551c) uni_indicator_pane_g1_ParamLimits

0xa72f,	// (0x00015532) uni_indicator_pane_g2_ParamLimits

0xa745,	// (0x00015548) uni_indicator_pane_g3_ParamLimits

0xa759,	// (0x0001555c) uni_indicator_pane_g4_ParamLimits

0xa759,	// (0x0001555c) uni_indicator_pane_g4

0xa76d,	// (0x00015570) uni_indicator_pane_g5_ParamLimits

0xa76d,	// (0x00015570) uni_indicator_pane_g5

0xa76d,	// (0x00015570) uni_indicator_pane_g6_ParamLimits

0xa76d,	// (0x00015570) uni_indicator_pane_g6

0xf91c,	// (0x0001a71f) uni_indicator_pane_g_ParamLimits

0xd814,	// (0x00018617) popup_tmo_note_window_ParamLimits

0xd814,	// (0x00018617) popup_tmo_note_window

0x6314,	// (0x00011117) fshwr2_bg_pane

0x6bb2,	// (0x000119b5) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x6bb2,	// (0x000119b5) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb5,	// (0x0001acb8) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb5,	// (0x0001acb8) fshwr2_func_candi_cell_pane_g

0x6063,	// (0x00010e66) bg_popup_window_pane_cp01

0x6beb,	// (0x000119ee) bg_popup_window_pane_g1_cp01

0xee3d,	// (0x00019c40) bg_popup_window_pane_cp22_ParamLimits

0xee3d,	// (0x00019c40) bg_popup_window_pane_cp22

0xee4b,	// (0x00019c4e) listscroll_tmo_link_pane_ParamLimits

0xee4b,	// (0x00019c4e) listscroll_tmo_link_pane

0xee8b,	// (0x00019c8e) popup_tmo_note_window_g1_ParamLimits

0xee8b,	// (0x00019c8e) popup_tmo_note_window_g1

0xee98,	// (0x00019c9b) tmo_note_info_pane_ParamLimits

0xee98,	// (0x00019c9b) tmo_note_info_pane

0xeeb2,	// (0x00019cb5) list_tmo_note_info_pane_g1_ParamLimits

0xeeb2,	// (0x00019cb5) list_tmo_note_info_pane_g1

0xeec9,	// (0x00019ccc) list_tmo_note_info_pane_g2_ParamLimits

0xeec9,	// (0x00019ccc) list_tmo_note_info_pane_g2

0x0001,

0xfeba,	// (0x0001acbd) list_tmo_note_info_pane_g_ParamLimits

0xfeba,	// (0x0001acbd) list_tmo_note_info_pane_g

0xeee5,	// (0x00019ce8) list_tmo_note_info_text_pane_ParamLimits

0xeee5,	// (0x00019ce8) list_tmo_note_info_text_pane

0xef66,	// (0x00019d69) list_tmo_link_pane

0xef73,	// (0x00019d76) scroll_pane_cp20

0xef80,	// (0x00019d83) list_single_tmo_link_pane_ParamLimits

0xef80,	// (0x00019d83) list_single_tmo_link_pane

0xef90,	// (0x00019d93) list_single_tmo_link_pane_t1

0xef9e,	// (0x00019da1) list_tmo_note_info_text_pane_t1_ParamLimits

0xef9e,	// (0x00019da1) list_tmo_note_info_text_pane_t1

0x7fa0,	// (0x00012da3) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7fa0,	// (0x00012da3) aid_size_touch_scroll_bar_cp01

0x7e15,	// (0x00012c18) aid_size_touch_slider_marker

0x4bc5,	// (0x0000f9c8) popup_settings_window_ParamLimits

0x4bc5,	// (0x0000f9c8) popup_settings_window

0x8f67,	// (0x00013d6a) popup_candi_list_indi_window

0x8fb7,	// (0x00013dba) aid_touch_navi_pane_ParamLimits

0x626f,	// (0x00011072) rs_clock_indi_pane

0x6278,	// (0x0001107b) sctrl_sk_bottom_pane_ParamLimits

0x6289,	// (0x0001108c) sctrl_sk_top_pane_ParamLimits

0x638c,	// (0x0001118f) popup_fep_tooltip_window

0xe934,	// (0x00019737) aid_size_cell_widget_grid_ParamLimits

0xe9a9,	// (0x000197ac) cell_ai5_widget_pane_g1_ParamLimits

0xe9a9,	// (0x000197ac) cell_ai5_widget_pane_g1

0xe9fd,	// (0x00019800) cell_ai5_widget_pane_g6_ParamLimits

0xea09,	// (0x0001980c) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe38,	// (0x0001ac3b) cell_ai5_widget_pane_g_ParamLimits

0xfe38,	// (0x0001ac3b) cell_ai5_widget_pane_g

0xeb3b,	// (0x0001993e) cell_ai5_widget_pane_t10_ParamLimits

0xeb3b,	// (0x0001993e) cell_ai5_widget_pane_t10

0xeb59,	// (0x0001995c) grid_ai5_widget_pane_ParamLimits

0xebfa,	// (0x000199fd) cell_contacts_ai5_widget_pane_ParamLimits

0xebfa,	// (0x000199fd) cell_contacts_ai5_widget_pane

0xeddc,	// (0x00019bdf) popup_discreet_window_t3_ParamLimits

0xeddc,	// (0x00019bdf) popup_discreet_window_t3

0x6b22,	// (0x00011925) popup_fshwr2_char_preview_window_ParamLimits

0x6b22,	// (0x00011925) popup_fshwr2_char_preview_window

0xef03,	// (0x00019d06) tmo_note_info_pane_t1

0xef18,	// (0x00019d1b) tmo_note_info_pane_t2

0xef2d,	// (0x00019d30) tmo_note_info_pane_t3

0xef42,	// (0x00019d45) tmo_note_info_pane_t4

0xef54,	// (0x00019d57) tmo_note_info_pane_t5

0x0004,

0xfebf,	// (0x0001acc2) tmo_note_info_pane_t

0xef66,	// (0x00019d69) list_tmo_link_pane_ParamLimits

0xef73,	// (0x00019d76) scroll_pane_cp20_ParamLimits

0x4a7c,	// (0x0000f87f) bg_popup_fep_char_preview_window_cp01

0xefb7,	// (0x00019dba) popup_fshwr2_char_preview_window_t1

0xefc5,	// (0x00019dc8) popup_candi_list_indi_window_g1

0xefce,	// (0x00019dd1) bg_cell_contacts_ai5_widget_pane

0xefda,	// (0x00019ddd) cell_contacts_ai5_widget_pane_g1

0xc83a,	// (0x0001763d) cell_contacts_ai5_widget_pane_g2

0xefef,	// (0x00019df2) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeca,	// (0x0001accd) cell_contacts_ai5_widget_pane_g

0xeffb,	// (0x00019dfe) cell_contacts_ai5_widget_pane_t1

0x7d6c,	// (0x00012b6f) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf072,	// (0x00019e75) settings_container_pane

0x8c07,	// (0x00013a0a) listscroll_set_pane_copy1

0xb3d8,	// (0x000161db) scroll_pane_cp121_copy1

0xf07e,	// (0x00019e81) set_content_pane_copy1

0xf086,	// (0x00019e89) aid_height_set_list_copy1_ParamLimits

0xf086,	// (0x00019e89) aid_height_set_list_copy1

0xa98d,	// (0x00015790) aid_size_parent_copy1_ParamLimits

0xa98d,	// (0x00015790) aid_size_parent_copy1

0xf092,	// (0x00019e95) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf092,	// (0x00019e95) button_value_adjust_pane_cp6_copy1

0x8f4d,	// (0x00013d50) list_highlight_pane_cp2_copy1_ParamLimits

0x8f4d,	// (0x00013d50) list_highlight_pane_cp2_copy1

0xf0a6,	// (0x00019ea9) list_set_pane_copy1_ParamLimits

0xf0a6,	// (0x00019ea9) list_set_pane_copy1

0xf00d,	// (0x00019e10) main_pane_set_t1_copy1_ParamLimits

0xf00d,	// (0x00019e10) main_pane_set_t1_copy1

0xf047,	// (0x00019e4a) main_pane_set_t2_copy1_ParamLimits

0xf047,	// (0x00019e4a) main_pane_set_t2_copy1

0xf153,	// (0x00019f56) main_pane_set_t3_copy1

0xf161,	// (0x00019f64) main_pane_set_t4_copy1

0xf066,	// (0x00019e69) set_content_pane_g1_copy1_ParamLimits

0xf066,	// (0x00019e69) set_content_pane_g1_copy1

0xf16f,	// (0x00019f72) setting_code_pane_copy1

0xf177,	// (0x00019f7a) setting_slider_graphic_pane_copy1

0xf177,	// (0x00019f7a) setting_slider_pane_copy1

0xf177,	// (0x00019f7a) setting_text_pane_copy1

0xf177,	// (0x00019f7a) setting_volume_pane_copy1

0xf16f,	// (0x00019f72) settings_code_pane_cp2_copy1

0xf17f,	// (0x00019f82) settings_code_pane_cp_copy1_ParamLimits

0xf17f,	// (0x00019f82) settings_code_pane_cp_copy1

0x6bf4,	// (0x000119f7) volume_set_pane_copy1

0xf193,	// (0x00019f96) volume_set_pane_g10_copy1

0xf19b,	// (0x00019f9e) volume_set_pane_g1_copy1

0xf1a3,	// (0x00019fa6) volume_set_pane_g2_copy1

0xf1ab,	// (0x00019fae) volume_set_pane_g3_copy1

0xf1b3,	// (0x00019fb6) volume_set_pane_g4_copy1

0xf1bb,	// (0x00019fbe) volume_set_pane_g5_copy1

0xf1c3,	// (0x00019fc6) volume_set_pane_g6_copy1

0xf1cb,	// (0x00019fce) volume_set_pane_g7_copy1

0xf1d3,	// (0x00019fd6) volume_set_pane_g8_copy1

0xf1db,	// (0x00019fde) volume_set_pane_g9_copy1

0x6f68,	// (0x00011d6b) bg_set_opt_pane_cp_copy1_ParamLimits

0x6f68,	// (0x00011d6b) bg_set_opt_pane_cp_copy1

0x6bfc,	// (0x000119ff) setting_slider_pane_t1_copy1_ParamLimits

0x6bfc,	// (0x000119ff) setting_slider_pane_t1_copy1

0x6c1a,	// (0x00011a1d) setting_slider_pane_t2_copy1_ParamLimits

0x6c1a,	// (0x00011a1d) setting_slider_pane_t2_copy1

0x6c34,	// (0x00011a37) setting_slider_pane_t3_copy1_ParamLimits

0x6c34,	// (0x00011a37) setting_slider_pane_t3_copy1

0x6c4c,	// (0x00011a4f) slider_set_pane_copy1_ParamLimits

0x6c4c,	// (0x00011a4f) slider_set_pane_copy1

0x7e95,	// (0x00012c98) set_opt_bg_pane_g1_copy2

0x7e9d,	// (0x00012ca0) set_opt_bg_pane_g2_copy2

0xf1e3,	// (0x00019fe6) set_opt_bg_pane_g3_copy2

0x7ead,	// (0x00012cb0) set_opt_bg_pane_g4_copy2

0x7eb5,	// (0x00012cb8) set_opt_bg_pane_g5_copy2

0x7ebd,	// (0x00012cc0) set_opt_bg_pane_g6_copy2

0xf1ed,	// (0x00019ff0) set_opt_bg_pane_g7_copy2

0xf1f5,	// (0x00019ff8) set_opt_bg_pane_g8_copy2

0xf1ff,	// (0x0001a002) set_opt_bg_pane_g9_copy2

0x6c62,	// (0x00011a65) aid_size_touch_slider_mark_copy1_ParamLimits

0x6c62,	// (0x00011a65) aid_size_touch_slider_mark_copy1

0xf209,	// (0x0001a00c) slider_set_pane_g1_copy1

0x6c76,	// (0x00011a79) slider_set_pane_g2_copy1

0x5ca4,	// (0x00010aa7) slider_set_pane_g3_copy1_ParamLimits

0x5ca4,	// (0x00010aa7) slider_set_pane_g3_copy1

0x5cb8,	// (0x00010abb) slider_set_pane_g4_copy1_ParamLimits

0x5cb8,	// (0x00010abb) slider_set_pane_g4_copy1

0x5cd0,	// (0x00010ad3) slider_set_pane_g5_copy1_ParamLimits

0x5cd0,	// (0x00010ad3) slider_set_pane_g5_copy1

0x5ca4,	// (0x00010aa7) slider_set_pane_g6_copy1_ParamLimits

0x5ca4,	// (0x00010aa7) slider_set_pane_g6_copy1

0x6c7e,	// (0x00011a81) slider_set_pane_g7_copy1_ParamLimits

0x6c7e,	// (0x00011a81) slider_set_pane_g7_copy1

0x6e88,	// (0x00011c8b) bg_set_opt_pane_cp2_copy1

0xf212,	// (0x0001a015) setting_slider_graphic_pane_g1_copy1

0xf21b,	// (0x0001a01e) setting_slider_graphic_pane_t1_copy1

0xf22b,	// (0x0001a02e) setting_slider_graphic_pane_t2_copy1

0xf23b,	// (0x0001a03e) slider_set_pane_cp_copy1

0xf24b,	// (0x0001a04e) input_focus_pane_cp1_copy1

0xf254,	// (0x0001a057) list_set_text_pane_copy1

0xf25c,	// (0x0001a05f) setting_text_pane_g1_copy1

0x6fc1,	// (0x00011dc4) set_text_pane_t1_copy1

0xf24b,	// (0x0001a04e) input_focus_pane_cp2_copy1

0xf25c,	// (0x0001a05f) setting_code_pane_g1_copy1

0xf265,	// (0x0001a068) setting_code_pane_t1_copy1

0xf273,	// (0x0001a076) list_set_graphic_pane_copy1

0x6e88,	// (0x00011c8b) bg_set_opt_pane_cp4_copy1

0x8902,	// (0x00013705) list_set_graphic_pane_g1_copy1_ParamLimits

0x8902,	// (0x00013705) list_set_graphic_pane_g1_copy1

0xf285,	// (0x0001a088) list_set_graphic_pane_g2_copy1

0x891a,	// (0x0001371d) list_set_graphic_pane_t1_copy1_ParamLimits

0x891a,	// (0x0001371d) list_set_graphic_pane_t1_copy1

0xbff7,	// (0x00016dfa) rs_clock_indi_pane_g1

0xf28d,	// (0x0001a090) rs_clock_indi_pane_t1

0xf29b,	// (0x0001a09e) rs_indi_pane

0xf2a3,	// (0x0001a0a6) rs_indi_pane_g1

0xf2ac,	// (0x0001a0af) rs_indi_pane_g2

0xf2b5,	// (0x0001a0b8) rs_indi_pane_g3

0x0002,

0xfed1,	// (0x0001acd4) rs_indi_pane_g

0x8c07,	// (0x00013a0a) bg_popup_preview_window_pane_cp03

0xf2be,	// (0x0001a0c1) popup_fep_tooltip_window_t1

0xce6f,	// (0x00017c72) popup_note2_window_g2_ParamLimits

0xce6f,	// (0x00017c72) popup_note2_window_g2

0x0001,

0xfc6a,	// (0x0001aa6d) popup_note2_window_g_ParamLimits

0xfc6a,	// (0x0001aa6d) popup_note2_window_g

0xd44d,	// (0x00018250) bg_popup_sub_pane_cp11_ParamLimits

0xd45a,	// (0x0001825d) cell_ai3_links_pane_g1_ParamLimits

0xd471,	// (0x00018274) cell_ai3_links_pane_t1

0x6fc1,	// (0x00011dc4) set_text_pane_t1_copy1_ParamLimits

0x8b18,	// (0x0001391b) cell_graphic_popup_pane_cp2_ParamLimits

0x8b18,	// (0x0001391b) cell_graphic_popup_pane_cp2

0xf2cc,	// (0x0001a0cf) cell_graphic_popup_pane_g1_cp2

0x753c,	// (0x0001233f) cell_graphic_popup_pane_g2_cp2

0xf2d4,	// (0x0001a0d7) cell_graphic_popup_pane_g3_cp2

0xf2dc,	// (0x0001a0df) cell_graphic_popup_pane_t2_cp2

0x754d,	// (0x00012350) grid_highlight_pane_cp3_cp2

0x8286,	// (0x00013089) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7d6c,	// (0x00012b6f) main_tmo_pane_ParamLimits

0xd808,	// (0x0001860b) popup_tmo_big_image_note_window

0xe998,	// (0x0001979b) cell_ai5_widget_list_pane

0xe9a0,	// (0x000197a3) cell_ai5_widget_lrg_icon_pane

0xef03,	// (0x00019d06) tmo_note_info_pane_t1_ParamLimits

0xef18,	// (0x00019d1b) tmo_note_info_pane_t2_ParamLimits

0xef2d,	// (0x00019d30) tmo_note_info_pane_t3_ParamLimits

0xef42,	// (0x00019d45) tmo_note_info_pane_t4_ParamLimits

0xef54,	// (0x00019d57) tmo_note_info_pane_t5_ParamLimits

0xfebf,	// (0x0001acc2) tmo_note_info_pane_t_ParamLimits

0xf072,	// (0x00019e75) settings_container_pane_ParamLimits

0xf243,	// (0x0001a046) indicator_popup_pane_cp5

0xf243,	// (0x0001a046) indicator_popup_pane_cp6

0xf273,	// (0x0001a076) list_set_graphic_pane_copy1_ParamLimits

0x6e74,	// (0x00011c77) bg_popup_window_pane_cp23

0xf2ea,	// (0x0001a0ed) popup_tmo_big_image_note_window_g1

0xf2f4,	// (0x0001a0f7) popup_tmo_big_image_note_window_t1

0xf304,	// (0x0001a107) popup_tmo_big_image_note_window_t2

0xf314,	// (0x0001a117) popup_tmo_big_image_note_window_t3

0x0002,

0xfed8,	// (0x0001acdb) popup_tmo_big_image_note_window_t

0xbff7,	// (0x00016dfa) cell_ai5_widget_lrg_icon_pane_g1

0xf324,	// (0x0001a127) cell_ai5_widget_lrg_icon_pane_t1

0xf332,	// (0x0001a135) cell_ai5_widget_list_row_pane_ParamLimits

0xf332,	// (0x0001a135) cell_ai5_widget_list_row_pane

0xf349,	// (0x0001a14c) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf349,	// (0x0001a14c) cell_ai5_widget_list_row_pane_g1

0xf356,	// (0x0001a159) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf356,	// (0x0001a159) cell_ai5_widget_list_row_pane_t1

0xf387,	// (0x0001a18a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf387,	// (0x0001a18a) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedf,	// (0x0001ace2) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedf,	// (0x0001ace2) cell_ai5_widget_list_row_pane_t

0x4a7c,	// (0x0000f87f) main_fep_vtchi_ss_pane

0x6cb0,	// (0x00011ab3) popup_fep_char_pre_window

0x6cb8,	// (0x00011abb) popup_fep_ituss_window

0x6cd9,	// (0x00011adc) popup_fep_vkbss_window

0xf3af,	// (0x0001a1b2) grid_vkbss_keypad_pane_ParamLimits

0xf3af,	// (0x0001a1b2) grid_vkbss_keypad_pane

0xf3bf,	// (0x0001a1c2) ituss_keypad_pane

0x6d04,	// (0x00011b07) aid_vkbss_key_offset_ParamLimits

0x6d04,	// (0x00011b07) aid_vkbss_key_offset

0x6d10,	// (0x00011b13) cell_vkbss_key_pane_ParamLimits

0x6d10,	// (0x00011b13) cell_vkbss_key_pane

0xf3ce,	// (0x0001a1d1) bg_cell_vkbss_key_g1_ParamLimits

0xf3ce,	// (0x0001a1d1) bg_cell_vkbss_key_g1

0xf3da,	// (0x0001a1dd) cell_vkbss_key_3p_pane_ParamLimits

0xf3da,	// (0x0001a1dd) cell_vkbss_key_3p_pane

0xf3f4,	// (0x0001a1f7) cell_vkbss_key_g1_ParamLimits

0xf3f4,	// (0x0001a1f7) cell_vkbss_key_g1

0xf40e,	// (0x0001a211) cell_vkbss_key_t1_ParamLimits

0xf40e,	// (0x0001a211) cell_vkbss_key_t1

0x6d26,	// (0x00011b29) cell_ituss_key_pane_ParamLimits

0x6d26,	// (0x00011b29) cell_ituss_key_pane

0xf439,	// (0x0001a23c) bg_cell_ituss_key_g1_ParamLimits

0xf439,	// (0x0001a23c) bg_cell_ituss_key_g1

0xf445,	// (0x0001a248) cell_ituss_key_pane_g1_ParamLimits

0xf445,	// (0x0001a248) cell_ituss_key_pane_g1

0x6d37,	// (0x00011b3a) cell_ituss_key_pane_g2_ParamLimits

0x6d37,	// (0x00011b3a) cell_ituss_key_pane_g2

0x0002,

0xfee6,	// (0x0001ace9) cell_ituss_key_pane_g_ParamLimits

0xfee6,	// (0x0001ace9) cell_ituss_key_pane_g

0x6d63,	// (0x00011b66) cell_ituss_key_t1_ParamLimits

0x6d63,	// (0x00011b66) cell_ituss_key_t1

0x6d9d,	// (0x00011ba0) cell_ituss_key_t2_ParamLimits

0x6d9d,	// (0x00011ba0) cell_ituss_key_t2

0x6dce,	// (0x00011bd1) cell_ituss_key_t3_ParamLimits

0x6dce,	// (0x00011bd1) cell_ituss_key_t3

0x6d9d,	// (0x00011ba0) cell_ituss_key_t4_ParamLimits

0x6d9d,	// (0x00011ba0) cell_ituss_key_t4

0x0004,

0xfeed,	// (0x0001acf0) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x0001acf0) cell_ituss_key_t

0xf471,	// (0x0001a274) cell_vkbss_key_3p_pane_g1

0xf479,	// (0x0001a27c) cell_vkbss_key_3p_pane_g2

0xf481,	// (0x0001a284) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x0001acfb) cell_vkbss_key_3p_pane_g

0x4a7c,	// (0x0000f87f) bg_popup_fep_char_preview_window_cp02

0x6e11,	// (0x00011c14) popup_fep_char_pre_window_t1

0xe92a,	// (0x0001972d) main_ai5_sk_pane

0xefce,	// (0x00019dd1) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xefda,	// (0x00019ddd) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc83a,	// (0x0001763d) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xefef,	// (0x00019df2) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeca,	// (0x0001accd) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeffb,	// (0x00019dfe) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7d6c,	// (0x00012b6f) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf489,	// (0x0001a28c) main_ai5_sk_pane_g1

0x9a37,	// (0x0001483a) popup_query_code_window_g1

0x6cce,	// (0x00011ad1) popup_fep_vkb_icf_pane

0x6ce2,	// (0x00011ae5) popup_fep_vtchi_icf_pane

0xf492,	// (0x0001a295) bg_icf_pane

0xf49e,	// (0x0001a2a1) list_vkb_icf_pane

0xf4aa,	// (0x0001a2ad) bg_icf_pane_cp01

0xf4b6,	// (0x0001a2b9) vtchi_icf_list_pane

0xf4c7,	// (0x0001a2ca) list_vkb_icf_pane_t1_ParamLimits

0xf4c7,	// (0x0001a2ca) list_vkb_icf_pane_t1

0xf4dd,	// (0x0001a2e0) vtchi_icf_list_pane_t1_ParamLimits

0xf4dd,	// (0x0001a2e0) vtchi_icf_list_pane_t1

0x6cb8,	// (0x00011abb) popup_fep_ituss_window_ParamLimits

0x6ce2,	// (0x00011ae5) popup_fep_vtchi_icf_pane_ParamLimits

0xf3bf,	// (0x0001a1c2) ituss_keypad_pane_ParamLimits

0x6cf8,	// (0x00011afb) ituss_sks_pane

0xf492,	// (0x0001a295) bg_icf_pane_ParamLimits

0x6c94,	// (0x00011a97) icf_edit_indi_pane_ParamLimits

0x6c94,	// (0x00011a97) icf_edit_indi_pane

0xf49e,	// (0x0001a2a1) list_vkb_icf_pane_ParamLimits

0xf4aa,	// (0x0001a2ad) bg_icf_pane_cp01_ParamLimits

0x6ca3,	// (0x00011aa6) icf_edit_indi_pane_cp01_ParamLimits

0x6ca3,	// (0x00011aa6) icf_edit_indi_pane_cp01

0xf4be,	// (0x0001a2c1) vtchi_query_pane

0x607b,	// (0x00010e7e) icf_edit_indi_pane_g1_ParamLimits

0x607b,	// (0x00010e7e) icf_edit_indi_pane_g1

0x6e33,	// (0x00011c36) icf_edit_indi_pane_g2_ParamLimits

0x6e33,	// (0x00011c36) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0001ad13) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0001ad13) icf_edit_indi_pane_g

0x6e42,	// (0x00011c45) icf_edit_indi_pane_t1

0xf4f7,	// (0x0001a2fa) bg_input_focus_pane_cp042

0x7720,	// (0x00012523) vtchi_button_pane

0xf500,	// (0x0001a303) vtchi_query_pane_t1

0xf50e,	// (0x0001a311) vtchi_query_pane_t2

0xf51c,	// (0x0001a31f) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0001ad02) vtchi_query_pane_t

0x4a7c,	// (0x0000f87f) bg_button_pane_cp13

0xf52a,	// (0x0001a32d) vtchi_button_pane_g1

0x6e20,	// (0x00011c23) ituss_sks_pane_g1

0x6e2b,	// (0x00011c2e) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0001ad09) ituss_sks_pane_g

0xf532,	// (0x0001a335) ituss_sks_pane_t1

0xf540,	// (0x0001a343) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0001ad0e) ituss_sks_pane_t

0xba17,	// (0x0001681a) indicator_nsta_pane_cp_g1

0xba20,	// (0x00016823) indicator_nsta_pane_cp_g2

0xba28,	// (0x0001682b) indicator_nsta_pane_cp_g3

0xba30,	// (0x00016833) indicator_nsta_pane_cp_g4

0xba38,	// (0x0001683b) indicator_nsta_pane_cp_g5

0xba38,	// (0x0001683b) indicator_nsta_pane_cp_g6

0x0005,

0xfaa8,	// (0x0001a8ab) indicator_nsta_pane_cp_g

0xe510,	// (0x00019313) cell_graphic2_pane_t2_ParamLimits

0xe510,	// (0x00019313) cell_graphic2_pane_t2

0x0001,

0xfdc1,	// (0x0001abc4) cell_graphic2_pane_t_ParamLimits

0xfdc1,	// (0x0001abc4) cell_graphic2_pane_t

0xe53d,	// (0x00019340) cell_graphic2_control_pane_t1

0x8626,	// (0x00013429) signal_pane_g3_ParamLimits

0x8626,	// (0x00013429) signal_pane_g3

0x8638,	// (0x0001343b) signal_pane_g4_ParamLimits

0x8638,	// (0x0001343b) signal_pane_g4

0xf399,	// (0x0001a19c) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf399,	// (0x0001a19c) cell_ai5_widget_list_row_pane_t3

0xf45f,	// (0x0001a262) cell_ituss_key_pane_t1_ParamLimits

0xf45f,	// (0x0001a262) cell_ituss_key_pane_t1

0x964c,	// (0x0001444f) form_field_data_wide_pane_vc_t2_ParamLimits

0x964c,	// (0x0001444f) form_field_data_wide_pane_vc_t2

0x9660,	// (0x00014463) form_field_data_wide_pane_vc_t3_ParamLimits

0x9660,	// (0x00014463) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0001a607) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0001a607) form_field_data_wide_pane_vc_t

0xb6df,	// (0x000164e2) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb6df,	// (0x000164e2) form_field_slider_wide_pane_vc_t3

0xb7bd,	// (0x000165c0) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb7bd,	// (0x000165c0) form_field_popup_wide_pane_vc_t2

0xb7d4,	// (0x000165d7) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb7d4,	// (0x000165d7) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa97,	// (0x0001a89a) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x0001a89a) form_field_popup_wide_pane_vc_t

0x6ac4,	// (0x000118c7) aid_fshwr2_btn_pane_ParamLimits

0x6ad0,	// (0x000118d3) aid_fshwr2_syb_pane_ParamLimits

0x6adc,	// (0x000118df) aid_fshwr2_txt_pane_ParamLimits

0x6314,	// (0x00011117) fshwr2_bg_pane_ParamLimits

0x6ae8,	// (0x000118eb) fshwr2_func_candi_pane_ParamLimits

0x6afd,	// (0x00011900) fshwr2_hwr_syb_pane_ParamLimits

0x6b0d,	// (0x00011910) fshwr2_icf_pane_ParamLimits

0xb645,	// (0x00016448) list_double_graphic_pane_vc_g4_ParamLimits

0xb645,	// (0x00016448) list_double_graphic_pane_vc_g4

0x6d57,	// (0x00011b5a) cell_ituss_key_pane_g3_ParamLimits

0x6d57,	// (0x00011b5a) cell_ituss_key_pane_g3

0x6dff,	// (0x00011c02) cell_ituss_key_t5_ParamLimits

0x6dff,	// (0x00011c02) cell_ituss_key_t5
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Normal
