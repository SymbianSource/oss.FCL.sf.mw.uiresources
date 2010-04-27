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

#include "aknlayoutscalable_elaf_php_av_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003abbb };

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
0x7e7c,	// (0x00042a37) Screen

0x7e90,	// (0x00042a4b) application_window_ParamLimits

0x7e90,	// (0x00042a4b) application_window

0x7eaa,	// (0x00042a65) screen_g1

0x58c3,	// (0x0004047e) area_bottom_pane_ParamLimits

0x58c3,	// (0x0004047e) area_bottom_pane

0x5983,	// (0x0004053e) area_top_pane_ParamLimits

0x5983,	// (0x0004053e) area_top_pane

0x5a17,	// (0x000405d2) main_pane_ParamLimits

0x5a17,	// (0x000405d2) main_pane

0x7eb4,	// (0x00042a6f) misc_graphics

0x986d,	// (0x00044428) battery_pane_ParamLimits

0x986d,	// (0x00044428) battery_pane

0xa533,	// (0x000450ee) bg_status_flat_pane_g8

0xa53b,	// (0x000450f6) bg_status_flat_pane_g9

0x992f,	// (0x000444ea) context_pane_ParamLimits

0x992f,	// (0x000444ea) context_pane

0x9a45,	// (0x00044600) navi_pane_ParamLimits

0x9a45,	// (0x00044600) navi_pane

0x9ac9,	// (0x00044684) signal_pane_ParamLimits

0x9ac9,	// (0x00044684) signal_pane

0x0008,

0xf87e,	// (0x0004a439) bg_status_flat_pane_g

0x9b36,	// (0x000446f1) status_pane_g1_ParamLimits

0x9b36,	// (0x000446f1) status_pane_g1

0x9b4a,	// (0x00044705) status_pane_g2_ParamLimits

0x9b4a,	// (0x00044705) status_pane_g2

0x9b56,	// (0x00044711) status_pane_g3_ParamLimits

0x9b56,	// (0x00044711) status_pane_g3

0x0004,

0xf7a5,	// (0x0004a360) status_pane_g_ParamLimits

0xf7a5,	// (0x0004a360) status_pane_g

0x9b8a,	// (0x00044745) title_pane_ParamLimits

0x9b8a,	// (0x00044745) title_pane

0x9bc7,	// (0x00044782) uni_indicator_pane_ParamLimits

0x9bc7,	// (0x00044782) uni_indicator_pane

0x9791,	// (0x0004434c) bg_list_pane_ParamLimits

0x9791,	// (0x0004434c) bg_list_pane

0x63aa,	// (0x00040f65) find_pane

0x97b1,	// (0x0004436c) listscroll_app_pane_ParamLimits

0x97b1,	// (0x0004436c) listscroll_app_pane

0x97bd,	// (0x00044378) listscroll_form_pane

0x63b2,	// (0x00040f6d) listscroll_gen_pane_ParamLimits

0x63b2,	// (0x00040f6d) listscroll_gen_pane

0x63c6,	// (0x00040f81) listscroll_set_pane

0x89e7,	// (0x000435a2) main_idle_act_pane

0x9499,	// (0x00044054) main_idle_trad_pane

0x9499,	// (0x00044054) main_list_empty_pane

0x97d7,	// (0x00044392) main_midp_pane

0x97e3,	// (0x0004439e) main_pane_g1_ParamLimits

0x97e3,	// (0x0004439e) main_pane_g1

0x63ce,	// (0x00040f89) popup_ai_message_window_ParamLimits

0x63ce,	// (0x00040f89) popup_ai_message_window

0x6474,	// (0x0004102f) popup_fep_china_uni_window_ParamLimits

0x6474,	// (0x0004102f) popup_fep_china_uni_window

0x64d0,	// (0x0004108b) popup_fep_japan_candidate_window_ParamLimits

0x64d0,	// (0x0004108b) popup_fep_japan_candidate_window

0x64f0,	// (0x000410ab) popup_fep_japan_predictive_window_ParamLimits

0x64f0,	// (0x000410ab) popup_fep_japan_predictive_window

0x6520,	// (0x000410db) popup_find_window

0x652d,	// (0x000410e8) popup_grid_graphic_window_ParamLimits

0x652d,	// (0x000410e8) popup_grid_graphic_window

0x6557,	// (0x00041112) popup_large_graphic_colour_window

0x657d,	// (0x00041138) popup_menu_window_ParamLimits

0x657d,	// (0x00041138) popup_menu_window

0x6735,	// (0x000412f0) popup_note_image_window

0x6721,	// (0x000412dc) popup_note_wait_window_ParamLimits

0x6721,	// (0x000412dc) popup_note_wait_window

0x6721,	// (0x000412dc) popup_note_window_ParamLimits

0x6721,	// (0x000412dc) popup_note_window

0x678b,	// (0x00041346) popup_query_code_window_ParamLimits

0x678b,	// (0x00041346) popup_query_code_window

0x679f,	// (0x0004135a) popup_query_data_code_window_ParamLimits

0x679f,	// (0x0004135a) popup_query_data_code_window

0x67bc,	// (0x00041377) popup_query_data_window_ParamLimits

0x67bc,	// (0x00041377) popup_query_data_window

0x67d8,	// (0x00041393) popup_query_sat_info_window_ParamLimits

0x67d8,	// (0x00041393) popup_query_sat_info_window

0x6811,	// (0x000413cc) popup_snote_single_graphic_window_ParamLimits

0x6811,	// (0x000413cc) popup_snote_single_graphic_window

0x6811,	// (0x000413cc) popup_snote_single_text_window_ParamLimits

0x6811,	// (0x000413cc) popup_snote_single_text_window

0x6826,	// (0x000413e1) popup_sub_window_general

0x6956,	// (0x00041511) popup_window_general_ParamLimits

0x6956,	// (0x00041511) popup_window_general

0x97f1,	// (0x000443ac) power_save_pane

0x6246,	// (0x00040e01) control_pane_g1_ParamLimits

0x6246,	// (0x00040e01) control_pane_g1

0x626d,	// (0x00040e28) control_pane_g2_ParamLimits

0x626d,	// (0x00040e28) control_pane_g2

0x9754,	// (0x0004430f) control_pane_g3_ParamLimits

0x9754,	// (0x0004430f) control_pane_g3

0x0007,

0xf78d,	// (0x0004a348) control_pane_g_ParamLimits

0xf78d,	// (0x0004a348) control_pane_g

0x62b7,	// (0x00040e72) control_pane_t1_ParamLimits

0x62b7,	// (0x00040e72) control_pane_t1

0x6303,	// (0x00040ebe) control_pane_t2_ParamLimits

0x6303,	// (0x00040ebe) control_pane_t2

0x0002,

0xf79e,	// (0x0004a359) control_pane_t_ParamLimits

0xf79e,	// (0x0004a359) control_pane_t

0x9679,	// (0x00044234) navi_navi_volume_pane_cp1

0x9681,	// (0x0004423c) status_small_icon_pane

0x9689,	// (0x00044244) status_small_pane_g1_ParamLimits

0x9689,	// (0x00044244) status_small_pane_g1

0x96bd,	// (0x00044278) status_small_pane_g2_ParamLimits

0x96bd,	// (0x00044278) status_small_pane_g2

0x96c9,	// (0x00044284) status_small_pane_g3_ParamLimits

0x96c9,	// (0x00044284) status_small_pane_g3

0x96d5,	// (0x00044290) status_small_pane_g4_ParamLimits

0x96d5,	// (0x00044290) status_small_pane_g4

0x96e1,	// (0x0004429c) status_small_pane_g5_ParamLimits

0x96e1,	// (0x0004429c) status_small_pane_g5

0x96ef,	// (0x000442aa) status_small_pane_g6_ParamLimits

0x96ef,	// (0x000442aa) status_small_pane_g6

0x0007,

0xf77c,	// (0x0004a337) status_small_pane_g_ParamLimits

0xf77c,	// (0x0004a337) status_small_pane_g

0x971e,	// (0x000442d9) status_small_pane_t1

0x9740,	// (0x000442fb) status_small_wait_pane_ParamLimits

0x9740,	// (0x000442fb) status_small_wait_pane

0x8f0b,	// (0x00043ac6) aid_levels_signal_ParamLimits

0x8f0b,	// (0x00043ac6) aid_levels_signal

0x8f1d,	// (0x00043ad8) signal_pane_g1_ParamLimits

0x8f1d,	// (0x00043ad8) signal_pane_g1

0x8f32,	// (0x00043aed) signal_pane_g2_ParamLimits

0x8f32,	// (0x00043aed) signal_pane_g2

0x0003,

0xf70d,	// (0x0004a2c8) signal_pane_g_ParamLimits

0xf70d,	// (0x0004a2c8) signal_pane_g

0x8f6d,	// (0x00043b28) context_pane_g1

0x7ebe,	// (0x00042a79) title_pane_g1

0x7ef4,	// (0x00042aaf) title_pane_t1

0x7f5c,	// (0x00042b17) title_pane_t2

0x7f82,	// (0x00042b3d) title_pane_t3

0x0002,

0xf557,	// (0x0004a112) title_pane_t

0x9bdf,	// (0x0004479a) aid_levels_battery_ParamLimits

0x9bdf,	// (0x0004479a) aid_levels_battery

0x9bf3,	// (0x000447ae) battery_pane_g1_ParamLimits

0x9bf3,	// (0x000447ae) battery_pane_g1

0x9c09,	// (0x000447c4) battery_pane_g2_ParamLimits

0x9c09,	// (0x000447c4) battery_pane_g2

0x0001,

0xf7b0,	// (0x0004a36b) battery_pane_g_ParamLimits

0xf7b0,	// (0x0004a36b) battery_pane_g

0xae75,	// (0x00045a30) uni_indicator_pane_g1

0xae8b,	// (0x00045a46) uni_indicator_pane_g2

0xaea1,	// (0x00045a5c) uni_indicator_pane_g3

0x0005,

0xf926,	// (0x0004a4e1) uni_indicator_pane_g

0x930b,	// (0x00043ec6) navi_icon_pane_ParamLimits

0x930b,	// (0x00043ec6) navi_icon_pane

0x9249,	// (0x00043e04) navi_midp_pane

0x9327,	// (0x00043ee2) navi_navi_pane

0x9331,	// (0x00043eec) navi_text_pane_ParamLimits

0x9331,	// (0x00043eec) navi_text_pane

0x7eaa,	// (0x00042a65) status_small_wait_pane_g1

0x83b1,	// (0x00042f6c) status_small_wait_pane_g2

0x0001,

0xf921,	// (0x0004a4dc) status_small_wait_pane_g

0xab9a,	// (0x00045755) navi_navi_icon_text_pane

0xaba2,	// (0x0004575d) navi_navi_pane_g1_ParamLimits

0xaba2,	// (0x0004575d) navi_navi_pane_g1

0xabb4,	// (0x0004576f) navi_navi_pane_g2_ParamLimits

0xabb4,	// (0x0004576f) navi_navi_pane_g2

0x0001,

0xf8ef,	// (0x0004a4aa) navi_navi_pane_g_ParamLimits

0xf8ef,	// (0x0004a4aa) navi_navi_pane_g

0xabc6,	// (0x00045781) navi_navi_tabs_pane

0xabcf,	// (0x0004578a) navi_navi_text_pane

0xab9a,	// (0x00045755) navi_navi_volume_pane

0xab76,	// (0x00045731) navi_text_pane_t1

0xab6a,	// (0x00045725) navi_icon_pane_g1

0xaabd,	// (0x00045678) navi_navi_text_pane_t1

0x6c0e,	// (0x000417c9) navi_navi_volume_pane_g1

0x6c16,	// (0x000417d1) volume_small_pane

0xaa23,	// (0x000455de) navi_navi_icon_text_pane_g1

0xaa2b,	// (0x000455e6) navi_navi_icon_text_pane_t1

0x9327,	// (0x00043ee2) navi_tabs_2_long_pane

0x9327,	// (0x00043ee2) navi_tabs_2_pane

0x9327,	// (0x00043ee2) navi_tabs_3_long_pane

0x9327,	// (0x00043ee2) navi_tabs_3_pane

0x9327,	// (0x00043ee2) navi_tabs_4_pane

0x6bee,	// (0x000417a9) tabs_2_active_pane_ParamLimits

0x6bee,	// (0x000417a9) tabs_2_active_pane

0x6bfe,	// (0x000417b9) tabs_2_passive_pane_ParamLimits

0x6bfe,	// (0x000417b9) tabs_2_passive_pane

0x6bbc,	// (0x00041777) tabs_3_active_pane_ParamLimits

0x6bbc,	// (0x00041777) tabs_3_active_pane

0x6bcc,	// (0x00041787) tabs_3_passive_pane_ParamLimits

0x6bcc,	// (0x00041787) tabs_3_passive_pane

0x6bdd,	// (0x00041798) tabs_3_passive_pane_cp_ParamLimits

0x6bdd,	// (0x00041798) tabs_3_passive_pane_cp

0x6b78,	// (0x00041733) tabs_4_active_pane_ParamLimits

0x6b78,	// (0x00041733) tabs_4_active_pane

0x6b89,	// (0x00041744) tabs_4_passive_pane_ParamLimits

0x6b89,	// (0x00041744) tabs_4_passive_pane

0x6b9a,	// (0x00041755) tabs_4_passive_pane_cp_ParamLimits

0x6b9a,	// (0x00041755) tabs_4_passive_pane_cp

0x6bab,	// (0x00041766) tabs_4_passive_pane_cp2_ParamLimits

0x6bab,	// (0x00041766) tabs_4_passive_pane_cp2

0x6b54,	// (0x0004170f) tabs_2_long_active_pane_ParamLimits

0x6b54,	// (0x0004170f) tabs_2_long_active_pane

0x6b66,	// (0x00041721) tabs_2_long_passive_pane_ParamLimits

0x6b66,	// (0x00041721) tabs_2_long_passive_pane

0x6b15,	// (0x000416d0) tabs_3_long_active_pane_ParamLimits

0x6b15,	// (0x000416d0) tabs_3_long_active_pane

0x6b28,	// (0x000416e3) tabs_3_long_passive_pane_ParamLimits

0x6b28,	// (0x000416e3) tabs_3_long_passive_pane

0x6b41,	// (0x000416fc) tabs_3_long_passive_pane_cp_ParamLimits

0x6b41,	// (0x000416fc) tabs_3_long_passive_pane_cp

0x6abb,	// (0x00041676) volume_small_pane_g1

0x6ac4,	// (0x0004167f) volume_small_pane_g2

0x6acd,	// (0x00041688) volume_small_pane_g3

0x6ad6,	// (0x00041691) volume_small_pane_g4

0x6adf,	// (0x0004169a) volume_small_pane_g5

0x6ae8,	// (0x000416a3) volume_small_pane_g6

0x6af1,	// (0x000416ac) volume_small_pane_g7

0x6afa,	// (0x000416b5) volume_small_pane_g8

0x6b03,	// (0x000416be) volume_small_pane_g9

0x6b0c,	// (0x000416c7) volume_small_pane_g10

0x0009,

0xf8bb,	// (0x0004a476) volume_small_pane_g

0x7f94,	// (0x00042b4f) bg_active_tab_pane_cp2_ParamLimits

0x7f94,	// (0x00042b4f) bg_active_tab_pane_cp2

0x7fa2,	// (0x00042b5d) tabs_3_active_pane_g1

0x7faa,	// (0x00042b65) tabs_3_active_pane_t1

0x7f94,	// (0x00042b4f) bg_passive_tab_pane_cp2_ParamLimits

0x7f94,	// (0x00042b4f) bg_passive_tab_pane_cp2

0x7fa2,	// (0x00042b5d) tabs_3_passive_pane_g1

0x7faa,	// (0x00042b65) tabs_3_passive_pane_t1

0x7f94,	// (0x00042b4f) bg_active_tab_pane_cp3_ParamLimits

0x7f94,	// (0x00042b4f) bg_active_tab_pane_cp3

0x7fbc,	// (0x00042b77) tabs_4_active_pane_g1

0x7fc4,	// (0x00042b7f) tabs_4_active_pane_t1

0x7f94,	// (0x00042b4f) bg_passive_tab_pane_cp3_ParamLimits

0x7f94,	// (0x00042b4f) bg_passive_tab_pane_cp3

0x7fbc,	// (0x00042b77) tabs_4_1_passive_pane_g1

0x7fc4,	// (0x00042b7f) tabs_4_1_passive_pane_t1

0x97d7,	// (0x00044392) list_highlight_pane_cp2

0xb0e9,	// (0x00045ca4) list_set_pane_ParamLimits

0xb0e9,	// (0x00045ca4) list_set_pane

0xb18f,	// (0x00045d4a) main_pane_set_t1_ParamLimits

0xb18f,	// (0x00045d4a) main_pane_set_t1

0xb1af,	// (0x00045d6a) main_pane_set_t2_ParamLimits

0xb1af,	// (0x00045d6a) main_pane_set_t2

0xb1c3,	// (0x00045d7e) main_pane_set_t3_ParamLimits

0xb1c3,	// (0x00045d7e) main_pane_set_t3

0xb1d5,	// (0x00045d90) main_pane_set_t4_ParamLimits

0xb1d5,	// (0x00045d90) main_pane_set_t4

0x0003,

0xf98b,	// (0x0004a546) main_pane_set_t_ParamLimits

0xf98b,	// (0x0004a546) main_pane_set_t

0xb1e7,	// (0x00045da2) setting_code_pane

0xb1f3,	// (0x00045dae) setting_slider_graphic_pane

0xb1f3,	// (0x00045dae) setting_slider_pane

0xb1f3,	// (0x00045dae) setting_text_pane

0xb1f3,	// (0x00045dae) setting_volume_pane

0x5c66,	// (0x00040821) volume_set_pane

0x7f94,	// (0x00042b4f) bg_set_opt_pane_cp

0x5c6e,	// (0x00040829) setting_slider_pane_t1

0x5c87,	// (0x00040842) setting_slider_pane_t2

0x5ca1,	// (0x0004085c) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0004a119) setting_slider_pane_t

0x5cb9,	// (0x00040874) slider_set_pane

0x7eb4,	// (0x00042a6f) bg_set_opt_pane_cp2

0x7fd6,	// (0x00042b91) setting_slider_graphic_pane_g1

0x5ccf,	// (0x0004088a) setting_slider_graphic_pane_t1

0x5cdf,	// (0x0004089a) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0004a120) setting_slider_graphic_pane_t

0x5cef,	// (0x000408aa) slider_set_pane_cp

0x7eb4,	// (0x00042a6f) input_focus_pane_cp1

0xb0a8,	// (0x00045c63) list_set_text_pane

0x7eaa,	// (0x00042a65) setting_text_pane_g1

0x7eb4,	// (0x00042a6f) input_focus_pane_cp2

0x7eaa,	// (0x00042a65) setting_code_pane_g1

0x7fdf,	// (0x00042b9a) setting_code_pane_t1

0x4907,	// (0x0003f4c2) set_text_pane_t1_ParamLimits

0x4907,	// (0x0003f4c2) set_text_pane_t1

0x885e,	// (0x00043419) set_opt_bg_pane_g1

0x8866,	// (0x00043421) set_opt_bg_pane_g2

0xb082,	// (0x00045c3d) set_opt_bg_pane_g3

0x8876,	// (0x00043431) set_opt_bg_pane_g4

0x887e,	// (0x00043439) set_opt_bg_pane_g5

0x8886,	// (0x00043441) set_opt_bg_pane_g6

0xb08c,	// (0x00045c47) set_opt_bg_pane_g7

0xb094,	// (0x00045c4f) set_opt_bg_pane_g8

0xb09e,	// (0x00045c59) set_opt_bg_pane_g9

0x0008,

0xf978,	// (0x0004a533) set_opt_bg_pane_g

0xb075,	// (0x00045c30) slider_set_pane_g1

0x6c83,	// (0x0004183e) slider_set_pane_g2

0x0006,

0xf969,	// (0x0004a524) slider_set_pane_g

0x6c1f,	// (0x000417da) volume_set_pane_g1

0x6c27,	// (0x000417e2) volume_set_pane_g2

0x6c2f,	// (0x000417ea) volume_set_pane_g3

0x6c37,	// (0x000417f2) volume_set_pane_g4

0x6c3f,	// (0x000417fa) volume_set_pane_g5

0x6c47,	// (0x00041802) volume_set_pane_g6

0x6c4f,	// (0x0004180a) volume_set_pane_g7

0x6c57,	// (0x00041812) volume_set_pane_g8

0x6c5f,	// (0x0004181a) volume_set_pane_g9

0x6c67,	// (0x00041822) volume_set_pane_g10

0x0009,

0xf941,	// (0x0004a4fc) volume_set_pane_g

0x7fed,	// (0x00042ba8) indicator_pane_ParamLimits

0x7fed,	// (0x00042ba8) indicator_pane

0x7ff9,	// (0x00042bb4) main_idle_pane_g2_ParamLimits

0x7ff9,	// (0x00042bb4) main_idle_pane_g2

0x8021,	// (0x00042bdc) main_pane_idle_g1_ParamLimits

0x8021,	// (0x00042bdc) main_pane_idle_g1

0x802e,	// (0x00042be9) popup_clock_digital_analogue_window_ParamLimits

0x802e,	// (0x00042be9) popup_clock_digital_analogue_window

0x8045,	// (0x00042c00) soft_indicator_pane_ParamLimits

0x8045,	// (0x00042c00) soft_indicator_pane

0x8051,	// (0x00042c0c) wallpaper_pane_ParamLimits

0x8051,	// (0x00042c0c) wallpaper_pane

0x7eaa,	// (0x00042a65) wallpaper_pane_g1

0x8065,	// (0x00042c20) indicator_pane_g1_ParamLimits

0x8065,	// (0x00042c20) indicator_pane_g1

0xb457,	// (0x00046012) navi_navi_icon_text_pane_srt_g1

0x8080,	// (0x00042c3b) soft_indicator_pane_t1

0x809a,	// (0x00042c55) aid_ps_area_pane

0x80ab,	// (0x00042c66) aid_ps_clock_pane

0x80b9,	// (0x00042c74) aid_ps_indicator_pane

0x80c5,	// (0x00042c80) indicator_ps_pane_ParamLimits

0x80c5,	// (0x00042c80) indicator_ps_pane

0x80d4,	// (0x00042c8f) power_save_pane_g1_ParamLimits

0x80d4,	// (0x00042c8f) power_save_pane_g1

0x80e0,	// (0x00042c9b) power_save_pane_g2_ParamLimits

0x80e0,	// (0x00042c9b) power_save_pane_g2

0x5877,	// (0x00040432) aid_navinavi_width_pane

0x809a,	// (0x00042c55) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0004a125) power_save_pane_g_ParamLimits

0xf56a,	// (0x0004a125) power_save_pane_g

0x80ee,	// (0x00042ca9) power_save_pane_t1_ParamLimits

0x80ee,	// (0x00042ca9) power_save_pane_t1

0x80ab,	// (0x00042c66) aid_ps_clock_pane_ParamLimits

0x80b9,	// (0x00042c74) aid_ps_indicator_pane_ParamLimits

0x8100,	// (0x00042cbb) power_save_pane_t4_ParamLimits

0x8100,	// (0x00042cbb) power_save_pane_t4

0x0001,

0xf56f,	// (0x0004a12a) power_save_pane_t_ParamLimits

0xf56f,	// (0x0004a12a) power_save_pane_t

0x812a,	// (0x00042ce5) power_save_t3_ParamLimits

0x812a,	// (0x00042ce5) power_save_t3

0x8115,	// (0x00042cd0) power_save_t2_ParamLimits

0x8115,	// (0x00042cd0) power_save_t2

0x813f,	// (0x00042cfa) indicator_ps_pane_g1

0x8148,	// (0x00042d03) ai_gene_pane_ParamLimits

0x8148,	// (0x00042d03) ai_gene_pane

0x8154,	// (0x00042d0f) ai_links_pane_ParamLimits

0x8154,	// (0x00042d0f) ai_links_pane

0x8160,	// (0x00042d1b) indicator_pane_cp1_ParamLimits

0x8160,	// (0x00042d1b) indicator_pane_cp1

0x816c,	// (0x00042d27) main_pane_idle_g1_cp_ParamLimits

0x816c,	// (0x00042d27) main_pane_idle_g1_cp

0x8178,	// (0x00042d33) popup_ai_links_title_window

0x8181,	// (0x00042d3c) soft_indicator_pane_cp1_ParamLimits

0x8181,	// (0x00042d3c) soft_indicator_pane_cp1

0xae63,	// (0x00045a1e) ai_links_pane_g1

0xae6c,	// (0x00045a27) grid_ai_links_pane

0xae46,	// (0x00045a01) ai_gene_pane_1

0xae51,	// (0x00045a0c) ai_gene_pane_2

0xae5a,	// (0x00045a15) list_highlight_pane_cp4

0xae2a,	// (0x000459e5) cell_ai_link_pane_ParamLimits

0xae2a,	// (0x000459e5) cell_ai_link_pane

0xae22,	// (0x000459dd) cell_ai_link_pane_g1

0x83b1,	// (0x00042f6c) cell_ai_link_pane_g2

0x0001,

0xf91c,	// (0x0004a4d7) cell_ai_link_pane_g

0x7eb4,	// (0x00042a6f) grid_highlight_cp2

0x7eb4,	// (0x00042a6f) bg_popup_sub_pane_cp1

0x819b,	// (0x00042d56) popup_ai_links_title_window_t1

0xad70,	// (0x0004592b) ai_gene_pane_1_g1_ParamLimits

0xad70,	// (0x0004592b) ai_gene_pane_1_g1

0xad7c,	// (0x00045937) ai_gene_pane_1_g2_ParamLimits

0xad7c,	// (0x00045937) ai_gene_pane_1_g2

0x0001,

0xf912,	// (0x0004a4cd) ai_gene_pane_1_g_ParamLimits

0xf912,	// (0x0004a4cd) ai_gene_pane_1_g

0xad89,	// (0x00045944) ai_gene_pane_1_t1_ParamLimits

0xad89,	// (0x00045944) ai_gene_pane_1_t1

0xadbd,	// (0x00045978) grid_ai_soft_ind_pane

0xad5b,	// (0x00045916) ai_gene_pane_2_t1_ParamLimits

0xad5b,	// (0x00045916) ai_gene_pane_2_t1

0x81aa,	// (0x00042d65) main_pane_empty_t1_ParamLimits

0x81aa,	// (0x00042d65) main_pane_empty_t1

0x81c2,	// (0x00042d7d) main_pane_empty_t2_ParamLimits

0x81c2,	// (0x00042d7d) main_pane_empty_t2

0x81d7,	// (0x00042d92) main_pane_empty_t3_ParamLimits

0x81d7,	// (0x00042d92) main_pane_empty_t3

0x81e9,	// (0x00042da4) main_pane_empty_t4_ParamLimits

0x81e9,	// (0x00042da4) main_pane_empty_t4

0x81fb,	// (0x00042db6) main_pane_empty_t5_ParamLimits

0x81fb,	// (0x00042db6) main_pane_empty_t5

0x0004,

0xf574,	// (0x0004a12f) main_pane_empty_t_ParamLimits

0xf574,	// (0x0004a12f) main_pane_empty_t

0x88af,	// (0x0004346a) bg_popup_window_pane_ParamLimits

0x88af,	// (0x0004346a) bg_popup_window_pane

0xaacb,	// (0x00045686) find_popup_pane_cp2_ParamLimits

0xaacb,	// (0x00045686) find_popup_pane_cp2

0xaad7,	// (0x00045692) heading_pane_ParamLimits

0xaad7,	// (0x00045692) heading_pane

0x7eb4,	// (0x00042a6f) bg_popup_sub_pane

0xaa45,	// (0x00045600) bg_popup_window_pane_g1_ParamLimits

0xaa45,	// (0x00045600) bg_popup_window_pane_g1

0xaa51,	// (0x0004560c) bg_popup_window_pane_g2_ParamLimits

0xaa51,	// (0x0004560c) bg_popup_window_pane_g2

0xaa5d,	// (0x00045618) bg_popup_window_pane_g3_ParamLimits

0xaa5d,	// (0x00045618) bg_popup_window_pane_g3

0xaa69,	// (0x00045624) bg_popup_window_pane_g4_ParamLimits

0xaa69,	// (0x00045624) bg_popup_window_pane_g4

0xaa75,	// (0x00045630) bg_popup_window_pane_g5_ParamLimits

0xaa75,	// (0x00045630) bg_popup_window_pane_g5

0xaa81,	// (0x0004563c) bg_popup_window_pane_g6_ParamLimits

0xaa81,	// (0x0004563c) bg_popup_window_pane_g6

0xaa8d,	// (0x00045648) bg_popup_window_pane_g7_ParamLimits

0xaa8d,	// (0x00045648) bg_popup_window_pane_g7

0xaa99,	// (0x00045654) bg_popup_window_pane_g8_ParamLimits

0xaa99,	// (0x00045654) bg_popup_window_pane_g8

0xaaa5,	// (0x00045660) bg_popup_window_pane_g9_ParamLimits

0xaaa5,	// (0x00045660) bg_popup_window_pane_g9

0xaab1,	// (0x0004566c) bg_popup_window_pane_g10_ParamLimits

0xaab1,	// (0x0004566c) bg_popup_window_pane_g10

0x0009,

0xf8da,	// (0x0004a495) bg_popup_window_pane_g_ParamLimits

0xf8da,	// (0x0004a495) bg_popup_window_pane_g

0xa9ce,	// (0x00045589) bg_popup_heading_pane_ParamLimits

0xa9ce,	// (0x00045589) bg_popup_heading_pane

0x6da1,	// (0x0004195c) tabs_4_passive_pane_cp_srt_ParamLimits

0x6da1,	// (0x0004195c) tabs_4_passive_pane_cp_srt

0x6db3,	// (0x0004196e) tabs_4_passive_pane_srt_ParamLimits

0xa9ee,	// (0x000455a9) heading_pane_g2

0x6db3,	// (0x0004196e) tabs_4_passive_pane_srt

0x97d7,	// (0x00044392) bg_passive_tab_pane_cp3_srt_ParamLimits

0x97d7,	// (0x00044392) bg_passive_tab_pane_cp3_srt

0xa9f6,	// (0x000455b1) heading_pane_t1_ParamLimits

0xa9f6,	// (0x000455b1) heading_pane_t1

0xaa0d,	// (0x000455c8) heading_pane_t2_ParamLimits

0xaa0d,	// (0x000455c8) heading_pane_t2

0x0001,

0xf8d5,	// (0x0004a490) heading_pane_t_ParamLimits

0xf8d5,	// (0x0004a490) heading_pane_t

0xa4fb,	// (0x000450b6) bg_popup_heading_pane_g1

0xa5aa,	// (0x00045165) bg_popup_heading_pane_g2

0xa5b4,	// (0x0004516f) bg_popup_heading_pane_g3

0xa5be,	// (0x00045179) bg_popup_heading_pane_g4

0xa5c8,	// (0x00045183) bg_popup_heading_pane_g5

0xa5d2,	// (0x0004518d) bg_popup_heading_pane_g6

0xa5da,	// (0x00045195) bg_popup_heading_pane_g7

0xa5e2,	// (0x0004519d) bg_popup_heading_pane_g8

0xa5ec,	// (0x000451a7) bg_popup_heading_pane_g9

0x0008,

0xf891,	// (0x0004a44c) bg_popup_heading_pane_g

0x9ce1,	// (0x0004489c) bg_popup_sub_pane_g1

0x9ce9,	// (0x000448a4) bg_popup_sub_pane_g2

0x9cf1,	// (0x000448ac) bg_popup_sub_pane_g3

0x9cf9,	// (0x000448b4) bg_popup_sub_pane_g4

0x9d01,	// (0x000448bc) bg_popup_sub_pane_g5

0x9d09,	// (0x000448c4) bg_popup_sub_pane_g6

0x9d11,	// (0x000448cc) bg_popup_sub_pane_g7

0x9d19,	// (0x000448d4) bg_popup_sub_pane_g8

0x9d21,	// (0x000448dc) bg_popup_sub_pane_g9

0x0008,

0xf86b,	// (0x0004a426) bg_popup_sub_pane_g

0x820f,	// (0x00042dca) bg_popup_window_pane_cp5_ParamLimits

0x820f,	// (0x00042dca) bg_popup_window_pane_cp5

0x822b,	// (0x00042de6) popup_note_window_g1_ParamLimits

0x822b,	// (0x00042de6) popup_note_window_g1

0x8237,	// (0x00042df2) popup_note_window_t1_ParamLimits

0x8237,	// (0x00042df2) popup_note_window_t1

0x824d,	// (0x00042e08) popup_note_window_t2_ParamLimits

0x824d,	// (0x00042e08) popup_note_window_t2

0x8263,	// (0x00042e1e) popup_note_window_t3_ParamLimits

0x8263,	// (0x00042e1e) popup_note_window_t3

0x8279,	// (0x00042e34) popup_note_window_t4_ParamLimits

0x8279,	// (0x00042e34) popup_note_window_t4

0x82a1,	// (0x00042e5c) popup_note_window_t5_ParamLimits

0x82a1,	// (0x00042e5c) popup_note_window_t5

0x0004,

0xf57f,	// (0x0004a13a) popup_note_window_t_ParamLimits

0xf57f,	// (0x0004a13a) popup_note_window_t

0x82c5,	// (0x00042e80) bg_popup_window_pane_cp6_ParamLimits

0x82c5,	// (0x00042e80) bg_popup_window_pane_cp6

0xa477,	// (0x00045032) popup_note_image_window_g1_ParamLimits

0xa477,	// (0x00045032) popup_note_image_window_g1

0xa483,	// (0x0004503e) popup_note_image_window_g2_ParamLimits

0xa483,	// (0x0004503e) popup_note_image_window_g2

0x0001,

0xf85f,	// (0x0004a41a) popup_note_image_window_g_ParamLimits

0xf85f,	// (0x0004a41a) popup_note_image_window_g

0xa49c,	// (0x00045057) popup_note_image_window_t1_ParamLimits

0xa49c,	// (0x00045057) popup_note_image_window_t1

0xa4b5,	// (0x00045070) popup_note_image_window_t2_ParamLimits

0xa4b5,	// (0x00045070) popup_note_image_window_t2

0xa4ce,	// (0x00045089) popup_note_image_window_t3_ParamLimits

0xa4ce,	// (0x00045089) popup_note_image_window_t3

0x0002,

0xf864,	// (0x0004a41f) popup_note_image_window_t_ParamLimits

0xf864,	// (0x0004a41f) popup_note_image_window_t

0xa338,	// (0x00044ef3) bg_popup_window_pane_cp7_ParamLimits

0xa338,	// (0x00044ef3) bg_popup_window_pane_cp7

0xa368,	// (0x00044f23) popup_note_wait_window_g1_ParamLimits

0xa368,	// (0x00044f23) popup_note_wait_window_g1

0xa374,	// (0x00044f2f) popup_note_wait_window_g2_ParamLimits

0xa374,	// (0x00044f2f) popup_note_wait_window_g2

0x0002,

0xf84d,	// (0x0004a408) popup_note_wait_window_g_ParamLimits

0xf84d,	// (0x0004a408) popup_note_wait_window_g

0xa38c,	// (0x00044f47) popup_note_wait_window_t1_ParamLimits

0xa38c,	// (0x00044f47) popup_note_wait_window_t1

0xa3b3,	// (0x00044f6e) popup_note_wait_window_t2_ParamLimits

0xa3b3,	// (0x00044f6e) popup_note_wait_window_t2

0xa3d0,	// (0x00044f8b) popup_note_wait_window_t3_ParamLimits

0xa3d0,	// (0x00044f8b) popup_note_wait_window_t3

0xa3e3,	// (0x00044f9e) popup_note_wait_window_t4_ParamLimits

0xa3e3,	// (0x00044f9e) popup_note_wait_window_t4

0x0004,

0xf854,	// (0x0004a40f) popup_note_wait_window_t_ParamLimits

0xf854,	// (0x0004a40f) popup_note_wait_window_t

0xa408,	// (0x00044fc3) wait_bar_pane_ParamLimits

0xa408,	// (0x00044fc3) wait_bar_pane

0x7eb4,	// (0x00042a6f) wait_anim_pane

0x7eb4,	// (0x00042a6f) wait_border_pane

0x7eaa,	// (0x00042a65) wait_anim_pane_g1

0x7eaa,	// (0x00042a65) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0004a2c3) wait_anim_pane_g

0xa2dc,	// (0x00044e97) wait_border_pane_g1

0xa2e7,	// (0x00044ea2) wait_border_pane_g2

0xa2f0,	// (0x00044eab) wait_border_pane_g3

0x0002,

0xf846,	// (0x0004a401) wait_border_pane_g

0xa147,	// (0x00044d02) bg_popup_window_pane_cp16_ParamLimits

0xa147,	// (0x00044d02) bg_popup_window_pane_cp16

0xa247,	// (0x00044e02) indicator_popup_pane_cp4_ParamLimits

0xa247,	// (0x00044e02) indicator_popup_pane_cp4

0xa25b,	// (0x00044e16) popup_query_data_window_t1_ParamLimits

0xa25b,	// (0x00044e16) popup_query_data_window_t1

0xa26d,	// (0x00044e28) popup_query_data_window_t2_ParamLimits

0xa26d,	// (0x00044e28) popup_query_data_window_t2

0xa286,	// (0x00044e41) popup_query_data_window_t3_ParamLimits

0xa286,	// (0x00044e41) popup_query_data_window_t3

0x0002,

0xf83f,	// (0x0004a3fa) popup_query_data_window_t_ParamLimits

0xf83f,	// (0x0004a3fa) popup_query_data_window_t

0xa2a0,	// (0x00044e5b) query_popup_data_pane_ParamLimits

0xa2a0,	// (0x00044e5b) query_popup_data_pane

0xa2b4,	// (0x00044e6f) query_popup_data_pane_cp1_ParamLimits

0xa2b4,	// (0x00044e6f) query_popup_data_pane_cp1

0xa147,	// (0x00044d02) bg_popup_window_pane_cp10_ParamLimits

0xa147,	// (0x00044d02) bg_popup_window_pane_cp10

0xa179,	// (0x00044d34) indicator_popup_pane_ParamLimits

0xa179,	// (0x00044d34) indicator_popup_pane

0xa19b,	// (0x00044d56) popup_query_code_window_t1_ParamLimits

0xa19b,	// (0x00044d56) popup_query_code_window_t1

0xa1b5,	// (0x00044d70) popup_query_code_window_t2_ParamLimits

0xa1b5,	// (0x00044d70) popup_query_code_window_t2

0xa1fe,	// (0x00044db9) popup_query_code_window_t3_ParamLimits

0xa1fe,	// (0x00044db9) popup_query_code_window_t3

0x0002,

0xf838,	// (0x0004a3f3) popup_query_code_window_t_ParamLimits

0xf838,	// (0x0004a3f3) popup_query_code_window_t

0xa22d,	// (0x00044de8) query_popup_pane_ParamLimits

0xa22d,	// (0x00044de8) query_popup_pane

0x82c5,	// (0x00042e80) bg_popup_window_pane_cp15_ParamLimits

0x82c5,	// (0x00042e80) bg_popup_window_pane_cp15

0x82e3,	// (0x00042e9e) indicator_popup_pane_cp1_ParamLimits

0x82e3,	// (0x00042e9e) indicator_popup_pane_cp1

0x82f6,	// (0x00042eb1) indicator_popup_pane_cp2_ParamLimits

0x82f6,	// (0x00042eb1) indicator_popup_pane_cp2

0x8309,	// (0x00042ec4) popup_query_data_code_window_g1_ParamLimits

0x8309,	// (0x00042ec4) popup_query_data_code_window_g1

0x831c,	// (0x00042ed7) popup_query_data_code_window_t1_ParamLimits

0x831c,	// (0x00042ed7) popup_query_data_code_window_t1

0x832e,	// (0x00042ee9) popup_query_data_code_window_t2_ParamLimits

0x832e,	// (0x00042ee9) popup_query_data_code_window_t2

0x8340,	// (0x00042efb) popup_query_data_code_window_t3_ParamLimits

0x8340,	// (0x00042efb) popup_query_data_code_window_t3

0x8356,	// (0x00042f11) popup_query_data_code_window_t4_ParamLimits

0x8356,	// (0x00042f11) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0004a145) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0004a145) popup_query_data_code_window_t

0x69cc,	// (0x00041587) list_single_midp_graphic_pane_g3

0x836e,	// (0x00042f29) query_popup_data_pane_cp2_ParamLimits

0x8381,	// (0x00042f3c) query_popup_pane_cp2_ParamLimits

0x8381,	// (0x00042f3c) query_popup_pane_cp2

0x7eb4,	// (0x00042a6f) bg_popup_window_pane_cp11

0xa13f,	// (0x00044cfa) heading_pane_cp5

0x846c,	// (0x00043027) listscroll_popup_info_pane

0x7eb4,	// (0x00042a6f) input_focus_pane_cp3

0x8394,	// (0x00042f4f) query_popup_pane_t1

0x83a2,	// (0x00042f5d) list_popup_info_pane_ParamLimits

0x83a2,	// (0x00042f5d) list_popup_info_pane

0x83b1,	// (0x00042f6c) listscroll_popup_info_pane_g1

0x83b9,	// (0x00042f74) scroll_pane_cp7

0x83c3,	// (0x00042f7e) popup_info_list_pane_t1_ParamLimits

0x83c3,	// (0x00042f7e) popup_info_list_pane_t1

0x83dd,	// (0x00042f98) popup_info_list_pane_t2_ParamLimits

0x83dd,	// (0x00042f98) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0004a14e) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0004a14e) popup_info_list_pane_t

0x7eb4,	// (0x00042a6f) bg_popup_window_pane_cp12

0xb471,	// (0x0004602c) find_popup_pane

0x7f94,	// (0x00042b4f) bg_popup_window_pane_cp3

0x83f7,	// (0x00042fb2) heading_pane_cp3

0x8403,	// (0x00042fbe) listscroll_popup_graphic_pane

0x7eb4,	// (0x00042a6f) bg_popup_window_pane_cp4

0x8462,	// (0x0004301d) heading_pane_cp4

0x846c,	// (0x00043027) listscroll_popup_colour_pane

0x8474,	// (0x0004302f) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8474,	// (0x0004302f) cell_large_graphic_colour_none_popup_pane

0x8488,	// (0x00043043) grid_large_graphic_colour_popup_pane_ParamLimits

0x8488,	// (0x00043043) grid_large_graphic_colour_popup_pane

0x84b4,	// (0x0004306f) listscroll_popup_colour_pane_g1_ParamLimits

0x84b4,	// (0x0004306f) listscroll_popup_colour_pane_g1

0x84cb,	// (0x00043086) listscroll_popup_colour_pane_g2_ParamLimits

0x84cb,	// (0x00043086) listscroll_popup_colour_pane_g2

0x84e2,	// (0x0004309d) listscroll_popup_colour_pane_g3_ParamLimits

0x84e2,	// (0x0004309d) listscroll_popup_colour_pane_g3

0x84f2,	// (0x000430ad) listscroll_popup_colour_pane_g4_ParamLimits

0x84f2,	// (0x000430ad) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0004a153) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0004a153) listscroll_popup_colour_pane_g

0x8506,	// (0x000430c1) scroll_pane_cp6_ParamLimits

0x8506,	// (0x000430c1) scroll_pane_cp6

0x8518,	// (0x000430d3) cell_large_graphic_colour_popup_pane_ParamLimits

0x8518,	// (0x000430d3) cell_large_graphic_colour_popup_pane

0x8537,	// (0x000430f2) cell_large_graphic_colour_none_popup_pane_t1

0x7eb4,	// (0x00042a6f) grid_highlight_pane_cp5

0x8546,	// (0x00043101) cell_large_graphic_colour_popup_pane_g1

0x854e,	// (0x00043109) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0004a15c) cell_large_graphic_colour_popup_pane_g

0x8556,	// (0x00043111) cell_large_graphic_colour_popup_pane_g2_copy1

0x855f,	// (0x0004311a) grid_highlight_pane_cp4

0x8567,	// (0x00043122) bg_popup_window_pane_cp8_ParamLimits

0x8567,	// (0x00043122) bg_popup_window_pane_cp8

0x8582,	// (0x0004313d) popup_snote_single_text_window_g1_ParamLimits

0x8582,	// (0x0004313d) popup_snote_single_text_window_g1

0x8594,	// (0x0004314f) popup_snote_single_text_window_t1_ParamLimits

0x8594,	// (0x0004314f) popup_snote_single_text_window_t1

0x85a7,	// (0x00043162) popup_snote_single_text_window_t2_ParamLimits

0x85a7,	// (0x00043162) popup_snote_single_text_window_t2

0x85ba,	// (0x00043175) popup_snote_single_text_window_t3_ParamLimits

0x85ba,	// (0x00043175) popup_snote_single_text_window_t3

0x85f3,	// (0x000431ae) popup_snote_single_text_window_t4_ParamLimits

0x85f3,	// (0x000431ae) popup_snote_single_text_window_t4

0x8627,	// (0x000431e2) popup_snote_single_text_window_t5_ParamLimits

0x8627,	// (0x000431e2) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0004a161) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0004a161) popup_snote_single_text_window_t

0x8656,	// (0x00043211) bg_popup_window_pane_cp9_ParamLimits

0x8656,	// (0x00043211) bg_popup_window_pane_cp9

0x8582,	// (0x0004313d) popup_snote_single_graphic_window_g1_ParamLimits

0x8582,	// (0x0004313d) popup_snote_single_graphic_window_g1

0x8664,	// (0x0004321f) popup_snote_single_graphic_window_g2_ParamLimits

0x8664,	// (0x0004321f) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0004a16c) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0004a16c) popup_snote_single_graphic_window_g

0x8670,	// (0x0004322b) popup_snote_single_graphic_window_t1_ParamLimits

0x8670,	// (0x0004322b) popup_snote_single_graphic_window_t1

0x8683,	// (0x0004323e) popup_snote_single_graphic_window_t2_ParamLimits

0x8683,	// (0x0004323e) popup_snote_single_graphic_window_t2

0x8696,	// (0x00043251) popup_snote_single_graphic_window_t3_ParamLimits

0x8696,	// (0x00043251) popup_snote_single_graphic_window_t3

0x86cf,	// (0x0004328a) popup_snote_single_graphic_window_t4_ParamLimits

0x86cf,	// (0x0004328a) popup_snote_single_graphic_window_t4

0x8703,	// (0x000432be) popup_snote_single_graphic_window_t5_ParamLimits

0x8703,	// (0x000432be) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0004a171) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0004a171) popup_snote_single_graphic_window_t

0xb3b5,	// (0x00045f70) grid_graphic_popup_pane_ParamLimits

0xb3b5,	// (0x00045f70) grid_graphic_popup_pane

0xb3dd,	// (0x00045f98) listscroll_popup_graphic_pane_g1_ParamLimits

0xb3dd,	// (0x00045f98) listscroll_popup_graphic_pane_g1

0xb3f1,	// (0x00045fac) listscroll_popup_graphic_pane_g2_ParamLimits

0xb3f1,	// (0x00045fac) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b5,	// (0x0004a570) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b5,	// (0x0004a570) listscroll_popup_graphic_pane_g

0xb405,	// (0x00045fc0) scroll_pane_cp5

0xb352,	// (0x00045f0d) cell_graphic_popup_pane_ParamLimits

0xb352,	// (0x00045f0d) cell_graphic_popup_pane

0xb333,	// (0x00045eee) cell_graphic_popup_pane_g1

0xb33b,	// (0x00045ef6) cell_graphic_popup_pane_g2

0x8556,	// (0x00043111) cell_graphic_popup_pane_g3

0x0002,

0xf9ae,	// (0x0004a569) cell_graphic_popup_pane_g

0xb344,	// (0x00045eff) cell_graphic_popup_pane_t2

0x855f,	// (0x0004311a) grid_highlight_pane_cp3

0x8744,	// (0x000432ff) list_gen_pane_ParamLimits

0x8744,	// (0x000432ff) list_gen_pane

0x8776,	// (0x00043331) scroll_pane

0xb28b,	// (0x00045e46) bg_list_pane_g1_ParamLimits

0xb28b,	// (0x00045e46) bg_list_pane_g1

0xb2a8,	// (0x00045e63) bg_list_pane_g2_ParamLimits

0xb2a8,	// (0x00045e63) bg_list_pane_g2

0xb2bd,	// (0x00045e78) bg_list_pane_g3_ParamLimits

0xb2bd,	// (0x00045e78) bg_list_pane_g3

0xb2d1,	// (0x00045e8c) bg_list_pane_g4_ParamLimits

0xb2d1,	// (0x00045e8c) bg_list_pane_g4

0xb2e5,	// (0x00045ea0) bg_list_pane_g5_ParamLimits

0xb2e5,	// (0x00045ea0) bg_list_pane_g5

0x0004,

0xf9a3,	// (0x0004a55e) bg_list_pane_g_ParamLimits

0xf9a3,	// (0x0004a55e) bg_list_pane_g

0x6ce7,	// (0x000418a2) list_double2_graphic_large_graphic_pane_ParamLimits

0x6ce7,	// (0x000418a2) list_double2_graphic_large_graphic_pane

0x6ce7,	// (0x000418a2) list_double2_graphic_pane_ParamLimits

0x6ce7,	// (0x000418a2) list_double2_graphic_pane

0x6ce7,	// (0x000418a2) list_double2_large_graphic_pane_ParamLimits

0x6ce7,	// (0x000418a2) list_double2_large_graphic_pane

0x6ce7,	// (0x000418a2) list_double2_pane_ParamLimits

0x6ce7,	// (0x000418a2) list_double2_pane

0x6ce7,	// (0x000418a2) list_double_graphic_heading_pane_ParamLimits

0x6ce7,	// (0x000418a2) list_double_graphic_heading_pane

0x6ce7,	// (0x000418a2) list_double_graphic_pane_ParamLimits

0x6ce7,	// (0x000418a2) list_double_graphic_pane

0x6ce7,	// (0x000418a2) list_double_heading_pane_ParamLimits

0x6ce7,	// (0x000418a2) list_double_heading_pane

0x6ce7,	// (0x000418a2) list_double_large_graphic_pane_ParamLimits

0x6ce7,	// (0x000418a2) list_double_large_graphic_pane

0x6ce7,	// (0x000418a2) list_double_number_pane_ParamLimits

0x6ce7,	// (0x000418a2) list_double_number_pane

0x6ce7,	// (0x000418a2) list_double_pane_ParamLimits

0x6ce7,	// (0x000418a2) list_double_pane

0x6ce7,	// (0x000418a2) list_double_time_pane_ParamLimits

0x6ce7,	// (0x000418a2) list_double_time_pane

0x6ce7,	// (0x000418a2) list_setting_number_pane_ParamLimits

0x6ce7,	// (0x000418a2) list_setting_number_pane

0x6ce7,	// (0x000418a2) list_setting_pane_ParamLimits

0x6ce7,	// (0x000418a2) list_setting_pane

0x6d20,	// (0x000418db) list_single_2graphic_pane_ParamLimits

0x6d20,	// (0x000418db) list_single_2graphic_pane

0x6d20,	// (0x000418db) list_single_graphic_heading_pane_ParamLimits

0x6d20,	// (0x000418db) list_single_graphic_heading_pane

0x6d20,	// (0x000418db) list_single_graphic_pane_ParamLimits

0x6d20,	// (0x000418db) list_single_graphic_pane

0x6d20,	// (0x000418db) list_single_heading_pane_ParamLimits

0x6d20,	// (0x000418db) list_single_heading_pane

0x6d5e,	// (0x00041919) list_single_large_graphic_pane_ParamLimits

0x6d5e,	// (0x00041919) list_single_large_graphic_pane

0x6d20,	// (0x000418db) list_single_number_heading_pane_ParamLimits

0x6d20,	// (0x000418db) list_single_number_heading_pane

0x6d20,	// (0x000418db) list_single_number_pane_ParamLimits

0x6d20,	// (0x000418db) list_single_number_pane

0x6d20,	// (0x000418db) list_single_pane_ParamLimits

0x6d20,	// (0x000418db) list_single_pane

0x7eb4,	// (0x00042a6f) list_highlight_pane_cp1

0x5cf7,	// (0x000408b2) list_single_pane_g1_ParamLimits

0x5cf7,	// (0x000408b2) list_single_pane_g1

0x5d03,	// (0x000408be) list_single_pane_g2_ParamLimits

0x5d03,	// (0x000408be) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0004a18d) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0004a18d) list_single_pane_g

0x5231,	// (0x0003fdec) list_single_pane_t1_ParamLimits

0x5231,	// (0x0003fdec) list_single_pane_t1

0x5cf7,	// (0x000408b2) list_single_number_pane_g1_ParamLimits

0x5cf7,	// (0x000408b2) list_single_number_pane_g1

0x5d03,	// (0x000408be) list_single_number_pane_g2_ParamLimits

0x5d03,	// (0x000408be) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0004a18d) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0004a18d) list_single_number_pane_g

0x51d9,	// (0x0003fd94) list_single_number_pane_t1_ParamLimits

0x51d9,	// (0x0003fd94) list_single_number_pane_t1

0x51ef,	// (0x0003fdaa) list_single_number_pane_t2_ParamLimits

0x51ef,	// (0x0003fdaa) list_single_number_pane_t2

0x0001,

0xf964,	// (0x0004a51f) list_single_number_pane_t_ParamLimits

0xf964,	// (0x0004a51f) list_single_number_pane_t

0x4920,	// (0x0003f4db) list_single_graphic_pane_g1_ParamLimits

0x4920,	// (0x0003f4db) list_single_graphic_pane_g1

0x5cf7,	// (0x000408b2) list_single_graphic_pane_g2_ParamLimits

0x5cf7,	// (0x000408b2) list_single_graphic_pane_g2

0x5d03,	// (0x000408be) list_single_graphic_pane_g3_ParamLimits

0x5d03,	// (0x000408be) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0004a17c) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0004a17c) list_single_graphic_pane_g

0x492c,	// (0x0003f4e7) list_single_graphic_pane_t1_ParamLimits

0x492c,	// (0x0003f4e7) list_single_graphic_pane_t1

0x4942,	// (0x0003f4fd) list_single_heading_pane_g1_ParamLimits

0x4942,	// (0x0003f4fd) list_single_heading_pane_g1

0x5d03,	// (0x000408be) list_single_heading_pane_g2_ParamLimits

0x5d03,	// (0x000408be) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0004a183) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0004a183) list_single_heading_pane_g

0x4955,	// (0x0003f510) list_single_heading_pane_t1_ParamLimits

0x4955,	// (0x0003f510) list_single_heading_pane_t1

0x5d0f,	// (0x000408ca) list_single_heading_pane_t2_ParamLimits

0x5d0f,	// (0x000408ca) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0004a188) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0004a188) list_single_heading_pane_t

0x5cf7,	// (0x000408b2) list_single_number_heading_pane_g1_ParamLimits

0x5cf7,	// (0x000408b2) list_single_number_heading_pane_g1

0x5d03,	// (0x000408be) list_single_number_heading_pane_g2_ParamLimits

0x5d03,	// (0x000408be) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0004a18d) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0004a18d) list_single_number_heading_pane_g

0x496b,	// (0x0003f526) list_single_number_heading_pane_t1_ParamLimits

0x496b,	// (0x0003f526) list_single_number_heading_pane_t1

0x4981,	// (0x0003f53c) list_single_number_heading_pane_t2_ParamLimits

0x4981,	// (0x0003f53c) list_single_number_heading_pane_t2

0x4993,	// (0x0003f54e) list_single_number_heading_pane_t3_ParamLimits

0x4993,	// (0x0003f54e) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0004a192) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0004a192) list_single_number_heading_pane_t

0x49a5,	// (0x0003f560) list_single_graphic_heading_pane_g1_ParamLimits

0x49a5,	// (0x0003f560) list_single_graphic_heading_pane_g1

0x5d21,	// (0x000408dc) list_single_graphic_heading_pane_g4_ParamLimits

0x5d21,	// (0x000408dc) list_single_graphic_heading_pane_g4

0x5d03,	// (0x000408be) list_single_graphic_heading_pane_g5_ParamLimits

0x5d03,	// (0x000408be) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0004a199) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0004a199) list_single_graphic_heading_pane_g

0x496b,	// (0x0003f526) list_single_graphic_heading_pane_t1_ParamLimits

0x496b,	// (0x0003f526) list_single_graphic_heading_pane_t1

0x49bd,	// (0x0003f578) list_single_graphic_heading_pane_t2_ParamLimits

0x49bd,	// (0x0003f578) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0004a1a0) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0004a1a0) list_single_graphic_heading_pane_t

0x5d32,	// (0x000408ed) list_single_large_graphic_pane_g1_ParamLimits

0x5d32,	// (0x000408ed) list_single_large_graphic_pane_g1

0x5d3e,	// (0x000408f9) list_single_large_graphic_pane_g2_ParamLimits

0x5d3e,	// (0x000408f9) list_single_large_graphic_pane_g2

0x5d4a,	// (0x00040905) list_single_large_graphic_pane_g3_ParamLimits

0x5d4a,	// (0x00040905) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0004a1a5) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0004a1a5) list_single_large_graphic_pane_g

0xa2e7,	// (0x00044ea2) wait_border_pane_g2_copy1

0x5d56,	// (0x00040911) list_single_large_graphic_pane_g4_cp2

0x49d3,	// (0x0003f58e) list_single_large_graphic_pane_t1_ParamLimits

0x49d3,	// (0x0003f58e) list_single_large_graphic_pane_t1

0x87aa,	// (0x00043365) list_double_pane_g1_ParamLimits

0x87aa,	// (0x00043365) list_double_pane_g1

0x5d5e,	// (0x00040919) list_double_pane_g2_ParamLimits

0x5d5e,	// (0x00040919) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0004a1ac) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0004a1ac) list_double_pane_g

0x49e9,	// (0x0003f5a4) list_double_pane_t1_ParamLimits

0x49e9,	// (0x0003f5a4) list_double_pane_t1

0x49ff,	// (0x0003f5ba) list_double_pane_t2_ParamLimits

0x49ff,	// (0x0003f5ba) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0004a1b1) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0004a1b1) list_double_pane_t

0x4a11,	// (0x0003f5cc) list_double2_pane_g1_ParamLimits

0x4a11,	// (0x0003f5cc) list_double2_pane_g1

0x4a22,	// (0x0003f5dd) list_double2_pane_g2_ParamLimits

0x4a22,	// (0x0003f5dd) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0004a1b6) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0004a1b6) list_double2_pane_g

0x4a2e,	// (0x0003f5e9) list_double2_pane_t1_ParamLimits

0x4a2e,	// (0x0003f5e9) list_double2_pane_t1

0x4a44,	// (0x0003f5ff) list_double2_pane_t2_ParamLimits

0x4a44,	// (0x0003f5ff) list_double2_pane_t2

0x0001,

0xf600,	// (0x0004a1bb) list_double2_pane_t_ParamLimits

0xf600,	// (0x0004a1bb) list_double2_pane_t

0x87aa,	// (0x00043365) list_double_number_pane_g1_ParamLimits

0x87aa,	// (0x00043365) list_double_number_pane_g1

0x5d5e,	// (0x00040919) list_double_number_pane_g2_ParamLimits

0x5d5e,	// (0x00040919) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0004a1ac) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0004a1ac) list_double_number_pane_g

0x4a56,	// (0x0003f611) list_double_number_pane_t1_ParamLimits

0x4a56,	// (0x0003f611) list_double_number_pane_t1

0x4a68,	// (0x0003f623) list_double_number_pane_t2_ParamLimits

0x4a68,	// (0x0003f623) list_double_number_pane_t2

0x4a7e,	// (0x0003f639) list_double_number_pane_t3_ParamLimits

0x4a7e,	// (0x0003f639) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0004a1c0) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0004a1c0) list_double_number_pane_t

0x4a90,	// (0x0003f64b) list_double_graphic_pane_g1_ParamLimits

0x4a90,	// (0x0003f64b) list_double_graphic_pane_g1

0x4a9c,	// (0x0003f657) list_double_graphic_pane_g2_ParamLimits

0x4a9c,	// (0x0003f657) list_double_graphic_pane_g2

0x4aab,	// (0x0003f666) list_double_graphic_pane_g3_ParamLimits

0x4aab,	// (0x0003f666) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0004a1c7) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0004a1c7) list_double_graphic_pane_g

0x4ac3,	// (0x0003f67e) list_double_graphic_pane_t1_ParamLimits

0x4ac3,	// (0x0003f67e) list_double_graphic_pane_t1

0x4ad9,	// (0x0003f694) list_double_graphic_pane_t2_ParamLimits

0x4ad9,	// (0x0003f694) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0004a1d0) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0004a1d0) list_double_graphic_pane_t

0x4aeb,	// (0x0003f6a6) list_double2_graphic_pane_g1_ParamLimits

0x4aeb,	// (0x0003f6a6) list_double2_graphic_pane_g1

0xa9e2,	// (0x0004559d) list_double2_graphic_pane_g2_ParamLimits

0xa9e2,	// (0x0004559d) list_double2_graphic_pane_g2

0x5d6a,	// (0x00040925) list_double2_graphic_pane_g3_ParamLimits

0x5d6a,	// (0x00040925) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0004a1d5) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0004a1d5) list_double2_graphic_pane_g

0x4af7,	// (0x0003f6b2) list_double2_graphic_pane_t1_ParamLimits

0x4af7,	// (0x0003f6b2) list_double2_graphic_pane_t1

0x4b0d,	// (0x0003f6c8) list_double2_graphic_pane_t2_ParamLimits

0x4b0d,	// (0x0003f6c8) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0004a1dc) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0004a1dc) list_double2_graphic_pane_t

0x4b1f,	// (0x0003f6da) list_double_large_graphic_pane_g1_ParamLimits

0x4b1f,	// (0x0003f6da) list_double_large_graphic_pane_g1

0x4b3e,	// (0x0003f6f9) list_double_large_graphic_pane_g2_ParamLimits

0x4b3e,	// (0x0003f6f9) list_double_large_graphic_pane_g2

0x5d5e,	// (0x00040919) list_double_large_graphic_pane_g3_ParamLimits

0x5d5e,	// (0x00040919) list_double_large_graphic_pane_g3

0x4b54,	// (0x0003f70f) list_double_large_graphic_pane_g4_ParamLimits

0x4b54,	// (0x0003f70f) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0004a1e1) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0004a1e1) list_double_large_graphic_pane_g

0x4b65,	// (0x0003f720) list_double_large_graphic_pane_t1_ParamLimits

0x4b65,	// (0x0003f720) list_double_large_graphic_pane_t1

0x4b7e,	// (0x0003f739) list_double_large_graphic_pane_t2_ParamLimits

0x4b7e,	// (0x0003f739) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0004a1ec) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0004a1ec) list_double_large_graphic_pane_t

0x5d8b,	// (0x00040946) list_double2_large_graphic_pane_g1_ParamLimits

0x5d8b,	// (0x00040946) list_double2_large_graphic_pane_g1

0x4b90,	// (0x0003f74b) list_double2_large_graphic_pane_g2_ParamLimits

0x4b90,	// (0x0003f74b) list_double2_large_graphic_pane_g2

0x5d6a,	// (0x00040925) list_double2_large_graphic_pane_g3_ParamLimits

0x5d6a,	// (0x00040925) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0004a1f1) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0004a1f1) list_double2_large_graphic_pane_g

0x4ba1,	// (0x0003f75c) list_double2_large_graphic_pane_t1_ParamLimits

0x4ba1,	// (0x0003f75c) list_double2_large_graphic_pane_t1

0x4bb7,	// (0x0003f772) list_double2_large_graphic_pane_t2_ParamLimits

0x4bb7,	// (0x0003f772) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0004a1f8) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0004a1f8) list_double2_large_graphic_pane_t

0x4bc9,	// (0x0003f784) list_double_heading_pane_g1_ParamLimits

0x4bc9,	// (0x0003f784) list_double_heading_pane_g1

0x5d97,	// (0x00040952) list_double_heading_pane_g2_ParamLimits

0x5d97,	// (0x00040952) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0004a1fd) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0004a1fd) list_double_heading_pane_g

0x4bda,	// (0x0003f795) list_double_heading_pane_t1_ParamLimits

0x4bda,	// (0x0003f795) list_double_heading_pane_t1

0x4a44,	// (0x0003f5ff) list_double_heading_pane_t2_ParamLimits

0x4a44,	// (0x0003f5ff) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0004a202) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0004a202) list_double_heading_pane_t

0x4bf0,	// (0x0003f7ab) list_double_graphic_heading_pane_g1_ParamLimits

0x4bf0,	// (0x0003f7ab) list_double_graphic_heading_pane_g1

0x4bc9,	// (0x0003f784) list_double_graphic_heading_pane_g2_ParamLimits

0x4bc9,	// (0x0003f784) list_double_graphic_heading_pane_g2

0x5d97,	// (0x00040952) list_double_graphic_heading_pane_g3_ParamLimits

0x5d97,	// (0x00040952) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0004a207) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0004a207) list_double_graphic_heading_pane_g

0x4bfc,	// (0x0003f7b7) list_double_graphic_heading_pane_t1_ParamLimits

0x4bfc,	// (0x0003f7b7) list_double_graphic_heading_pane_t1

0x4b0d,	// (0x0003f6c8) list_double_graphic_heading_pane_t2_ParamLimits

0x4b0d,	// (0x0003f6c8) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0004a20e) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0004a20e) list_double_graphic_heading_pane_t

0x4c12,	// (0x0003f7cd) list_double_time_pane_g1_ParamLimits

0x4c12,	// (0x0003f7cd) list_double_time_pane_g1

0x4c23,	// (0x0003f7de) list_double_time_pane_g2_ParamLimits

0x4c23,	// (0x0003f7de) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0004a213) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0004a213) list_double_time_pane_g

0x4c2f,	// (0x0003f7ea) list_double_time_pane_t1_ParamLimits

0x4c2f,	// (0x0003f7ea) list_double_time_pane_t1

0x4c45,	// (0x0003f800) list_double_time_pane_t2_ParamLimits

0x4c45,	// (0x0003f800) list_double_time_pane_t2

0x4c57,	// (0x0003f812) list_double_time_pane_t3_ParamLimits

0x4c57,	// (0x0003f812) list_double_time_pane_t3

0x4c69,	// (0x0003f824) list_double_time_pane_t4_ParamLimits

0x4c69,	// (0x0003f824) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0004a218) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0004a218) list_double_time_pane_t

0x4c7b,	// (0x0003f836) list_setting_pane_g1_ParamLimits

0x4c7b,	// (0x0003f836) list_setting_pane_g1

0x4a22,	// (0x0003f5dd) list_setting_pane_g2_ParamLimits

0x4a22,	// (0x0003f5dd) list_setting_pane_g2

0x0001,

0xf666,	// (0x0004a221) list_setting_pane_g_ParamLimits

0xf666,	// (0x0004a221) list_setting_pane_g

0x4c87,	// (0x0003f842) list_setting_pane_t1_ParamLimits

0x4c87,	// (0x0003f842) list_setting_pane_t1

0x4ca1,	// (0x0003f85c) list_setting_pane_t2_ParamLimits

0x4ca1,	// (0x0003f85c) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0004a226) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0004a226) list_setting_pane_t

0x4ce0,	// (0x0003f89b) set_value_pane_cp_ParamLimits

0x4ce0,	// (0x0003f89b) set_value_pane_cp

0x4cec,	// (0x0003f8a7) list_setting_number_pane_g1_ParamLimits

0x4cec,	// (0x0003f8a7) list_setting_number_pane_g1

0x4cf8,	// (0x0003f8b3) list_setting_number_pane_g2_ParamLimits

0x4cf8,	// (0x0003f8b3) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0004a22d) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0004a22d) list_setting_number_pane_g

0x4d04,	// (0x0003f8bf) list_setting_number_pane_t1_ParamLimits

0x4d04,	// (0x0003f8bf) list_setting_number_pane_t1

0x4d1d,	// (0x0003f8d8) list_setting_number_pane_t2_ParamLimits

0x4d1d,	// (0x0003f8d8) list_setting_number_pane_t2

0x4d37,	// (0x0003f8f2) list_setting_number_pane_t3_ParamLimits

0x4d37,	// (0x0003f8f2) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0004a232) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0004a232) list_setting_number_pane_t

0x4ce0,	// (0x0003f89b) set_value_pane_ParamLimits

0x4ce0,	// (0x0003f89b) set_value_pane

0x87b6,	// (0x00043371) bg_set_opt_pane_ParamLimits

0x87b6,	// (0x00043371) bg_set_opt_pane

0x4d7a,	// (0x0003f935) set_value_pane_t1

0x87d7,	// (0x00043392) slider_set_pane_cp3

0x87e0,	// (0x0004339b) volume_small_pane_cp

0x87e9,	// (0x000433a4) list_form_gen_pane

0x87f2,	// (0x000433ad) scroll_pane_cp8

0x4d90,	// (0x0003f94b) form_field_data_pane_ParamLimits

0x4d90,	// (0x0003f94b) form_field_data_pane

0x4db4,	// (0x0003f96f) form_field_data_wide_pane_ParamLimits

0x4db4,	// (0x0003f96f) form_field_data_wide_pane

0x4dd7,	// (0x0003f992) form_field_popup_pane_ParamLimits

0x4dd7,	// (0x0003f992) form_field_popup_pane

0x4df7,	// (0x0003f9b2) form_field_popup_wide_pane_ParamLimits

0x4df7,	// (0x0003f9b2) form_field_popup_wide_pane

0x4e16,	// (0x0003f9d1) form_field_slider_pane_ParamLimits

0x4e16,	// (0x0003f9d1) form_field_slider_pane

0x4e29,	// (0x0003f9e4) form_field_slider_wide_pane_ParamLimits

0x4e29,	// (0x0003f9e4) form_field_slider_wide_pane

0x8803,	// (0x000433be) data_form_pane

0x4e46,	// (0x0003fa01) form_field_data_pane_t1

0x880f,	// (0x000433ca) input_focus_pane

0x4e5e,	// (0x0003fa19) data_form_wide_pane

0x4e7b,	// (0x0003fa36) form_field_data_wide_pane_t1

0x8574,	// (0x0004312f) input_focus_pane_cp6

0x4e9d,	// (0x0003fa58) form_field_popup_pane_t1

0x880f,	// (0x000433ca) input_focus_pane_cp7

0x8831,	// (0x000433ec) list_form_pane

0x4ebd,	// (0x0003fa78) form_field_popup_wide_pane_t1

0x880f,	// (0x000433ca) input_focus_pane_cp8

0x883d,	// (0x000433f8) list_form_wide_pane

0x4eda,	// (0x0003fa95) form_field_slider_pane_t1_ParamLimits

0x4eda,	// (0x0003fa95) form_field_slider_pane_t1

0x4ef0,	// (0x0003faab) form_field_slider_pane_t2_ParamLimits

0x4ef0,	// (0x0003faab) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0004a242) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0004a242) form_field_slider_pane_t

0x820f,	// (0x00042dca) input_focus_pane_cp9_ParamLimits

0x820f,	// (0x00042dca) input_focus_pane_cp9

0x4f05,	// (0x0003fac0) slider_cont_pane_ParamLimits

0x4f05,	// (0x0003fac0) slider_cont_pane

0x884c,	// (0x00043407) form_field_slider_wide_pane_t1_ParamLimits

0x884c,	// (0x00043407) form_field_slider_wide_pane_t1

0x4f19,	// (0x0003fad4) form_field_slider_wide_pane_t2_ParamLimits

0x4f19,	// (0x0003fad4) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0004a247) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0004a247) form_field_slider_wide_pane_t

0x820f,	// (0x00042dca) input_focus_pane_cp10_ParamLimits

0x820f,	// (0x00042dca) input_focus_pane_cp10

0x4f2b,	// (0x0003fae6) slider_cont_pane_cp1_ParamLimits

0x4f2b,	// (0x0003fae6) slider_cont_pane_cp1

0x4f3f,	// (0x0003fafa) slider_form_pane_cp

0x885e,	// (0x00043419) input_focus_pane_g1

0x8866,	// (0x00043421) input_focus_pane_g2

0x886e,	// (0x00043429) input_focus_pane_g3

0x8876,	// (0x00043431) input_focus_pane_g4

0x887e,	// (0x00043439) input_focus_pane_g5

0x8886,	// (0x00043441) input_focus_pane_g6

0x888e,	// (0x00043449) input_focus_pane_g7

0x8896,	// (0x00043451) input_focus_pane_g8

0x889e,	// (0x00043459) input_focus_pane_g9

0x7eaa,	// (0x00042a65) input_focus_pane_g10

0x0009,

0xf691,	// (0x0004a24c) input_focus_pane_g

0xa2f0,	// (0x00044eab) wait_border_pane_g3_copy1

0x4f47,	// (0x0003fb02) data_form_pane_t1

0x7eaa,	// (0x00042a65) wait_anim_pane_g1_copy1

0x5201,	// (0x0003fdbc) data_form_wide_pane_t1

0x4f62,	// (0x0003fb1d) list_form_graphic_pane_cp_ParamLimits

0x4f62,	// (0x0003fb1d) list_form_graphic_pane_cp

0xb21d,	// (0x00045dd8) slider_form_pane_g1

0xb226,	// (0x00045de1) slider_form_pane_g2

0x0006,

0xf994,	// (0x0004a54f) slider_form_pane_g

0x4f7b,	// (0x0003fb36) list_form_graphic_pane_ParamLimits

0x4f7b,	// (0x0003fb36) list_form_graphic_pane

0x4f97,	// (0x0003fb52) list_form_graphic_pane_g1

0x4f9f,	// (0x0003fb5a) list_form_graphic_pane_t1_ParamLimits

0x4f9f,	// (0x0003fb5a) list_form_graphic_pane_t1

0x7f94,	// (0x00042b4f) list_highlight_pane_cp5_ParamLimits

0x7f94,	// (0x00042b4f) list_highlight_pane_cp5

0x4fb4,	// (0x0003fb6f) find_pane_g1

0x88a6,	// (0x00043461) input_find_pane

0x4fbd,	// (0x0003fb78) input_find_pane_g1_ParamLimits

0x4fbd,	// (0x0003fb78) input_find_pane_g1

0x4fc9,	// (0x0003fb84) input_find_pane_t1_ParamLimits

0x4fc9,	// (0x0003fb84) input_find_pane_t1

0x4fde,	// (0x0003fb99) input_find_pane_t2_ParamLimits

0x4fde,	// (0x0003fb99) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0004a261) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0004a261) input_find_pane_t

0x88af,	// (0x0004346a) input_focus_pane_cp5_ParamLimits

0x88af,	// (0x0004346a) input_focus_pane_cp5

0x88c9,	// (0x00043484) bg_popup_window_pane_cp2_ParamLimits

0x88c9,	// (0x00043484) bg_popup_window_pane_cp2

0x88d6,	// (0x00043491) listscroll_menu_pane_ParamLimits

0x88d6,	// (0x00043491) listscroll_menu_pane

0x88e2,	// (0x0004349d) popup_submenu_window_ParamLimits

0x88e2,	// (0x0004349d) popup_submenu_window

0x890e,	// (0x000434c9) find_popup_pane_g1

0x8916,	// (0x000434d1) input_popup_find_pane_cp

0x88af,	// (0x0004346a) input_focus_pane_cp4_ParamLimits

0x88af,	// (0x0004346a) input_focus_pane_cp4

0x892c,	// (0x000434e7) input_popup_find_pane_t1_ParamLimits

0x892c,	// (0x000434e7) input_popup_find_pane_t1

0x7eb4,	// (0x00042a6f) bg_popup_sub_pane_cp

0x895a,	// (0x00043515) listscroll_popup_sub_pane

0x8962,	// (0x0004351d) list_submenu_pane_ParamLimits

0x8962,	// (0x0004351d) list_submenu_pane

0x8973,	// (0x0004352e) scroll_pane_cp4

0x897b,	// (0x00043536) list_single_popup_submenu_pane_ParamLimits

0x897b,	// (0x00043536) list_single_popup_submenu_pane

0x898f,	// (0x0004354a) list_single_popup_submenu_pane_g1

0x8997,	// (0x00043552) list_single_popup_submenu_pane_t1_ParamLimits

0x8997,	// (0x00043552) list_single_popup_submenu_pane_t1

0x7f94,	// (0x00042b4f) bg_active_tab_pane_cp1_ParamLimits

0x7f94,	// (0x00042b4f) bg_active_tab_pane_cp1

0x89ac,	// (0x00043567) tabs_2_active_pane_g1

0x89b4,	// (0x0004356f) tabs_2_active_pane_t1

0x7f94,	// (0x00042b4f) bg_passive_tab_pane_cp1_ParamLimits

0x7f94,	// (0x00042b4f) bg_passive_tab_pane_cp1

0x89ac,	// (0x00043567) tabs_2_passive_pane_g1

0x89b4,	// (0x0004356f) tabs_2_passive_pane_t1

0x89c6,	// (0x00043581) bg_active_tab_pane_cp4

0x89d4,	// (0x0004358f) tabs_2_long_active_pane_t1

0x89e7,	// (0x000435a2) bg_passive_tab_pane_cp4

0x6050,	// (0x00040c0b) list_single_midp_graphic_pane_g4_ParamLimits

0x89c6,	// (0x00043581) bg_active_tab_pane_cp5

0x89f3,	// (0x000435ae) tabs_3_long_active_pane_t1

0x89e7,	// (0x000435a2) bg_passive_tab_pane_cp5

0x6050,	// (0x00040c0b) list_single_midp_graphic_pane_g4

0x7f94,	// (0x00042b4f) bg_popup_window_pane_cp13_ParamLimits

0x7f94,	// (0x00042b4f) bg_popup_window_pane_cp13

0x8a0e,	// (0x000435c9) listscroll_popup_fast_pane_ParamLimits

0x8a0e,	// (0x000435c9) listscroll_popup_fast_pane

0x8a1d,	// (0x000435d8) grid_popup_fast_pane_ParamLimits

0x8a1d,	// (0x000435d8) grid_popup_fast_pane

0x8a2f,	// (0x000435ea) scroll_pane_cp9_ParamLimits

0x8a2f,	// (0x000435ea) scroll_pane_cp9

0xcae3,	// (0x0004769e) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcae3,	// (0x0004769e) list_single_graphic_hl_pane_t1_cp2

0x8a53,	// (0x0004360e) input_focus_pane_cp20_ParamLimits

0x8a53,	// (0x0004360e) input_focus_pane_cp20

0x8a61,	// (0x0004361c) query_popup_data_pane_t1_ParamLimits

0x8a61,	// (0x0004361c) query_popup_data_pane_t1

0x8a74,	// (0x0004362f) query_popup_data_pane_t2_ParamLimits

0x8a74,	// (0x0004362f) query_popup_data_pane_t2

0x8aba,	// (0x00043675) query_popup_data_pane_t3_ParamLimits

0x8aba,	// (0x00043675) query_popup_data_pane_t3

0x8afb,	// (0x000436b6) query_popup_data_pane_t4_ParamLimits

0x8afb,	// (0x000436b6) query_popup_data_pane_t4

0x8b37,	// (0x000436f2) query_popup_data_pane_t5_ParamLimits

0x8b37,	// (0x000436f2) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0004a266) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0004a266) query_popup_data_pane_t

0x885e,	// (0x00043419) bg_set_opt_pane_g1

0x8866,	// (0x00043421) bg_set_opt_pane_g2

0x886e,	// (0x00043429) bg_set_opt_pane_g3

0x8876,	// (0x00043431) bg_set_opt_pane_g4

0x887e,	// (0x00043439) bg_set_opt_pane_g5

0x8886,	// (0x00043441) bg_set_opt_pane_g6

0x888e,	// (0x00043449) bg_set_opt_pane_g7

0x8896,	// (0x00043451) bg_set_opt_pane_g8

0x889e,	// (0x00043459) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0004a271) bg_set_opt_pane_g

0x605c,	// (0x00040c17) control_top_pane_stacon_ParamLimits

0x605c,	// (0x00040c17) control_top_pane_stacon

0x60af,	// (0x00040c6a) signal_pane_stacon_ParamLimits

0x60af,	// (0x00040c6a) signal_pane_stacon

0x9127,	// (0x00043ce2) stacon_top_pane_g1_ParamLimits

0x9127,	// (0x00043ce2) stacon_top_pane_g1

0x60d4,	// (0x00040c8f) title_pane_stacon_ParamLimits

0x60d4,	// (0x00040c8f) title_pane_stacon

0x60fe,	// (0x00040cb9) uni_indicator_pane_stacon_ParamLimits

0x60fe,	// (0x00040cb9) uni_indicator_pane_stacon

0x6113,	// (0x00040cce) battery_pane_stacon_ParamLimits

0x6113,	// (0x00040cce) battery_pane_stacon

0x6157,	// (0x00040d12) control_bottom_pane_stacon_ParamLimits

0x6157,	// (0x00040d12) control_bottom_pane_stacon

0x617a,	// (0x00040d35) navi_pane_stacon_ParamLimits

0x617a,	// (0x00040d35) navi_pane_stacon

0x9149,	// (0x00043d04) stacon_bottom_pane_g1_ParamLimits

0x9149,	// (0x00043d04) stacon_bottom_pane_g1

0x5da3,	// (0x0004095e) aid_levels_signal_lsc_ParamLimits

0x5da3,	// (0x0004095e) aid_levels_signal_lsc

0x5db9,	// (0x00040974) signal_pane_stacon_g1_ParamLimits

0x5db9,	// (0x00040974) signal_pane_stacon_g1

0x5dcd,	// (0x00040988) signal_pane_stacon_g2_ParamLimits

0x5dcd,	// (0x00040988) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0004a284) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0004a284) signal_pane_stacon_g

0x5e02,	// (0x000409bd) title_pane_stacon_t1_ParamLimits

0x5e02,	// (0x000409bd) title_pane_stacon_t1

0x8b7b,	// (0x00043736) uni_indicator_pane_stacon_g1

0x8b85,	// (0x00043740) uni_indicator_pane_stacon_g2

0x8b8f,	// (0x0004374a) uni_indicator_pane_stacon_g3

0x8b99,	// (0x00043754) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0004a290) uni_indicator_pane_stacon_g

0x5e27,	// (0x000409e2) control_top_pane_stacon_g1

0x5e2f,	// (0x000409ea) control_top_pane_stacon_t1_ParamLimits

0x5e2f,	// (0x000409ea) control_top_pane_stacon_t1

0x5e66,	// (0x00040a21) aid_levels_battery_lsc_ParamLimits

0x5e66,	// (0x00040a21) aid_levels_battery_lsc

0x5e7d,	// (0x00040a38) battery_pane_stacon_g1_ParamLimits

0x5e7d,	// (0x00040a38) battery_pane_stacon_g1

0x5e90,	// (0x00040a4b) battery_pane_stacon_g2_ParamLimits

0x5e90,	// (0x00040a4b) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0004a299) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0004a299) battery_pane_stacon_g

0x5ece,	// (0x00040a89) navi_icon_pane_stacon

0x5ee2,	// (0x00040a9d) navi_navi_pane_stacon

0x5ece,	// (0x00040a89) navi_text_pane_stacon

0x5e27,	// (0x000409e2) control_bottom_pane_stacon_g1

0x5ef6,	// (0x00040ab1) control_bottom_pane_stacon_t1_ParamLimits

0x5ef6,	// (0x00040ab1) control_bottom_pane_stacon_t1

0x8bbd,	// (0x00043778) grid_app_pane_ParamLimits

0x8bbd,	// (0x00043778) grid_app_pane

0x8be1,	// (0x0004379c) scroll_pane_cp15_ParamLimits

0x8be1,	// (0x0004379c) scroll_pane_cp15

0x8bf4,	// (0x000437af) cell_app_pane_ParamLimits

0x8bf4,	// (0x000437af) cell_app_pane

0x8c18,	// (0x000437d3) cell_app_pane_g1_ParamLimits

0x8c18,	// (0x000437d3) cell_app_pane_g1

0x8c3c,	// (0x000437f7) cell_app_pane_g2_ParamLimits

0x8c3c,	// (0x000437f7) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0004a29e) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0004a29e) cell_app_pane_g

0x8c48,	// (0x00043803) cell_app_pane_t1_ParamLimits

0x8c48,	// (0x00043803) cell_app_pane_t1

0x8c5f,	// (0x0004381a) grid_highlight_pane_ParamLimits

0x8c5f,	// (0x0004381a) grid_highlight_pane

0x885e,	// (0x00043419) cell_highlight_pane_g1

0x8866,	// (0x00043421) cell_highlight_pane_g2

0x886e,	// (0x00043429) cell_highlight_pane_g3

0x8876,	// (0x00043431) cell_highlight_pane_g4

0x887e,	// (0x00043439) cell_highlight_pane_g5

0x8886,	// (0x00043441) cell_highlight_pane_g6

0x888e,	// (0x00043449) cell_highlight_pane_g7

0x8896,	// (0x00043451) cell_highlight_pane_g8

0x889e,	// (0x00043459) cell_highlight_pane_g9

0x7eaa,	// (0x00042a65) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0004a24c) cell_highlight_pane_g

0x8c70,	// (0x0004382b) bg_scroll_pane

0x5f40,	// (0x00040afb) scroll_handle_pane

0x8cb7,	// (0x00043872) scroll_bg_pane_g1

0x8ccc,	// (0x00043887) scroll_bg_pane_g2

0x8ce4,	// (0x0004389f) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0004a2a3) scroll_bg_pane_g

0x8cf9,	// (0x000438b4) scroll_handle_focus_pane_ParamLimits

0x8cf9,	// (0x000438b4) scroll_handle_focus_pane

0x8cb7,	// (0x00043872) scroll_handle_pane_g1

0x8d06,	// (0x000438c1) scroll_handle_pane_g2

0x8ce4,	// (0x0004389f) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0004a2aa) scroll_handle_pane_g

0x88af,	// (0x0004346a) bg_popup_sub_pane_cp21_ParamLimits

0x88af,	// (0x0004346a) bg_popup_sub_pane_cp21

0x8d1a,	// (0x000438d5) popup_fep_japan_predictive_window_t1_ParamLimits

0x8d1a,	// (0x000438d5) popup_fep_japan_predictive_window_t1

0x8d34,	// (0x000438ef) popup_fep_japan_predictive_window_t2_ParamLimits

0x8d34,	// (0x000438ef) popup_fep_japan_predictive_window_t2

0x8d67,	// (0x00043922) popup_fep_japan_predictive_window_t3_ParamLimits

0x8d67,	// (0x00043922) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0004a2b1) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0004a2b1) popup_fep_japan_predictive_window_t

0x7eb4,	// (0x00042a6f) bg_popup_sub_pane_cp23

0x8d9e,	// (0x00043959) listscroll_japin_cand_pane

0x8da6,	// (0x00043961) popup_fep_japan_candidate_window_t1

0x8db4,	// (0x0004396f) candidate_pane_ParamLimits

0x8db4,	// (0x0004396f) candidate_pane

0x8dc6,	// (0x00043981) scroll_pane_cp30

0x8dce,	// (0x00043989) list_single_popup_jap_candidate_pane_ParamLimits

0x8dce,	// (0x00043989) list_single_popup_jap_candidate_pane

0x7eb4,	// (0x00042a6f) list_highlight_pane_cp30

0x8de3,	// (0x0004399e) list_single_popup_jap_candidate_pane_t1

0x8df2,	// (0x000439ad) level_1_signal

0x8e04,	// (0x000439bf) level_2_signal

0x8e17,	// (0x000439d2) level_3_signal

0x8e2a,	// (0x000439e5) level_4_signal

0x8e3d,	// (0x000439f8) level_5_signal

0x8e50,	// (0x00043a0b) level_6_signal

0x8e63,	// (0x00043a1e) level_7_signal

0x8df2,	// (0x000439ad) level_1_battery

0x8e04,	// (0x000439bf) level_2_battery

0x8e17,	// (0x000439d2) level_3_battery

0x8e2a,	// (0x000439e5) level_4_battery

0x8e3d,	// (0x000439f8) level_5_battery

0x8e50,	// (0x00043a0b) level_6_battery

0x8e63,	// (0x00043a1e) level_7_battery

0x8e8e,	// (0x00043a49) list_menu_pane_ParamLimits

0x8e8e,	// (0x00043a49) list_menu_pane

0x8ea4,	// (0x00043a5f) scroll_pane_cp25_ParamLimits

0x8ea4,	// (0x00043a5f) scroll_pane_cp25

0x8ebd,	// (0x00043a78) list_double2_graphic_pane_cp2_ParamLimits

0x8ebd,	// (0x00043a78) list_double2_graphic_pane_cp2

0x8ebd,	// (0x00043a78) list_double2_large_graphic_pane_cp2_ParamLimits

0x8ebd,	// (0x00043a78) list_double2_large_graphic_pane_cp2

0x8ebd,	// (0x00043a78) list_double2_pane_cp2_ParamLimits

0x8ebd,	// (0x00043a78) list_double2_pane_cp2

0x8ebd,	// (0x00043a78) list_double_graphic_pane_cp2_ParamLimits

0x8ebd,	// (0x00043a78) list_double_graphic_pane_cp2

0x8ebd,	// (0x00043a78) list_double_large_graphic_pane_cp2_ParamLimits

0x8ebd,	// (0x00043a78) list_double_large_graphic_pane_cp2

0x8ebd,	// (0x00043a78) list_double_number_pane_cp2_ParamLimits

0x8ebd,	// (0x00043a78) list_double_number_pane_cp2

0x8ebd,	// (0x00043a78) list_double_pane_cp2_ParamLimits

0x8ebd,	// (0x00043a78) list_double_pane_cp2

0x8ee1,	// (0x00043a9c) list_single_2graphic_pane_cp2_ParamLimits

0x8ee1,	// (0x00043a9c) list_single_2graphic_pane_cp2

0x8ee1,	// (0x00043a9c) list_single_graphic_heading_pane_cp2_ParamLimits

0x8ee1,	// (0x00043a9c) list_single_graphic_heading_pane_cp2

0x8ee1,	// (0x00043a9c) list_single_graphic_pane_cp2_ParamLimits

0x8ee1,	// (0x00043a9c) list_single_graphic_pane_cp2

0x8ee1,	// (0x00043a9c) list_single_heading_pane_cp2_ParamLimits

0x8ee1,	// (0x00043a9c) list_single_heading_pane_cp2

0x8efa,	// (0x00043ab5) list_single_large_graphic_pane_cp2_ParamLimits

0x8efa,	// (0x00043ab5) list_single_large_graphic_pane_cp2

0x8ee1,	// (0x00043a9c) list_single_number_heading_pane_cp2_ParamLimits

0x8ee1,	// (0x00043a9c) list_single_number_heading_pane_cp2

0x8ee1,	// (0x00043a9c) list_single_number_pane_cp2_ParamLimits

0x8ee1,	// (0x00043a9c) list_single_number_pane_cp2

0x8ee1,	// (0x00043a9c) list_single_pane_cp2_ParamLimits

0x8ee1,	// (0x00043a9c) list_single_pane_cp2

0x8f76,	// (0x00043b31) bg_popup_sub_pane_cp22

0x5ff2,	// (0x00040bad) popup_side_volume_key_window_g1

0x601c,	// (0x00040bd7) popup_side_volume_key_window_t1

0x6038,	// (0x00040bf3) volume_small_pane_cp1

0x820f,	// (0x00042dca) bg_popup_sub_pane_cp24_ParamLimits

0x820f,	// (0x00042dca) bg_popup_sub_pane_cp24

0x8f8c,	// (0x00043b47) fep_china_uni_candidate_pane_ParamLimits

0x8f8c,	// (0x00043b47) fep_china_uni_candidate_pane

0x8fa0,	// (0x00043b5b) fep_china_uni_entry_pane

0x8fb0,	// (0x00043b6b) popup_fep_china_uni_window_g1

0x8fcc,	// (0x00043b87) fep_china_uni_entry_pane_g1

0x8fd4,	// (0x00043b8f) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0004a2e2) fep_china_uni_entry_pane_g

0x8fdc,	// (0x00043b97) fep_entry_item_pane

0x8fe6,	// (0x00043ba1) fep_candidate_item_pane

0x8fee,	// (0x00043ba9) fep_china_uni_candidate_pane_g1

0x8ff6,	// (0x00043bb1) fep_china_uni_candidate_pane_g2

0x8ffe,	// (0x00043bb9) fep_china_uni_candidate_pane_g3

0x9006,	// (0x00043bc1) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0004a2e7) fep_china_uni_candidate_pane_g

0x7eaa,	// (0x00042a65) fep_entry_item_pane_g1

0x900e,	// (0x00043bc9) fep_entry_item_pane_t1_ParamLimits

0x900e,	// (0x00043bc9) fep_entry_item_pane_t1

0x9024,	// (0x00043bdf) fep_candidate_item_pane_t1_ParamLimits

0x9024,	// (0x00043bdf) fep_candidate_item_pane_t1

0x9039,	// (0x00043bf4) fep_candidate_item_pane_t2_ParamLimits

0x9039,	// (0x00043bf4) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0004a2f0) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0004a2f0) fep_candidate_item_pane_t

0x7f94,	// (0x00042b4f) list_highlight_pane_cp31_ParamLimits

0x7f94,	// (0x00042b4f) list_highlight_pane_cp31

0x904b,	// (0x00043c06) level_1_signal_lsc

0x9054,	// (0x00043c0f) level_2_signal_lsc

0x905d,	// (0x00043c18) level_3_signal_lsc

0x9066,	// (0x00043c21) level_4_signal_lsc

0x906f,	// (0x00043c2a) level_5_signal_lsc

0x9078,	// (0x00043c33) level_6_signal_lsc

0x9081,	// (0x00043c3c) level_7_signal_lsc

0x9081,	// (0x00043c3c) level_1_battery_lsc

0x908a,	// (0x00043c45) level_2_battery_lsc

0x9093,	// (0x00043c4e) level_3_battery_lsc

0x909c,	// (0x00043c57) level_4_battery_lsc

0x90a5,	// (0x00043c60) level_5_battery_lsc

0x90ae,	// (0x00043c69) level_6_battery_lsc

0x904b,	// (0x00043c06) level_7_battery_lsc

0x90b7,	// (0x00043c72) scroll_handle_focus_pane_g1

0x90c0,	// (0x00043c7b) scroll_handle_focus_pane_g2

0x90c9,	// (0x00043c84) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0004a2f5) scroll_handle_focus_pane_g

0x4ff3,	// (0x0003fbae) list_single_2graphic_pane_g1_ParamLimits

0x4ff3,	// (0x0003fbae) list_single_2graphic_pane_g1

0x5d21,	// (0x000408dc) list_single_2graphic_pane_g2_ParamLimits

0x5d21,	// (0x000408dc) list_single_2graphic_pane_g2

0x5d03,	// (0x000408be) list_single_2graphic_pane_g3_ParamLimits

0x5d03,	// (0x000408be) list_single_2graphic_pane_g3

0x4fff,	// (0x0003fbba) list_single_2graphic_pane_g4_ParamLimits

0x4fff,	// (0x0003fbba) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0004a2fc) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0004a2fc) list_single_2graphic_pane_g

0x500b,	// (0x0003fbc6) list_single_2graphic_pane_t1_ParamLimits

0x500b,	// (0x0003fbc6) list_single_2graphic_pane_t1

0x6040,	// (0x00040bfb) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6040,	// (0x00040bfb) list_double2_graphic_large_graphic_pane_g1

0x4b90,	// (0x0003f74b) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4b90,	// (0x0003f74b) list_double2_graphic_large_graphic_pane_g2

0x5d6a,	// (0x00040925) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5d6a,	// (0x00040925) list_double2_graphic_large_graphic_pane_g3

0x6050,	// (0x00040c0b) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6050,	// (0x00040c0b) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0004a305) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0004a305) list_double2_graphic_large_graphic_pane_g

0x5039,	// (0x0003fbf4) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5039,	// (0x0003fbf4) list_double2_graphic_large_graphic_pane_t1

0x504f,	// (0x0003fc0a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x504f,	// (0x0003fc0a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0004a30e) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0004a30e) list_double2_graphic_large_graphic_pane_t

0x9211,	// (0x00043dcc) popup_fast_swap_window_ParamLimits

0x9211,	// (0x00043dcc) popup_fast_swap_window

0x922d,	// (0x00043de8) popup_side_volume_key_window

0x9249,	// (0x00043e04) stacon_top_pane

0x9253,	// (0x00043e0e) status_pane_ParamLimits

0x9253,	// (0x00043e0e) status_pane

0x9261,	// (0x00043e1c) status_small_pane

0x7eb4,	// (0x00042a6f) control_pane

0x7eb4,	// (0x00042a6f) stacon_bottom_pane

0x87f2,	// (0x000433ad) scroll_pane_cp121

0x87e9,	// (0x000433a4) set_content_pane

0x90d2,	// (0x00043c8d) bg_active_tab_pane_g1_cp1

0x90db,	// (0x00043c96) bg_active_tab_pane_g2_cp1

0x90e4,	// (0x00043c9f) bg_active_tab_pane_g3_cp1

0x90d2,	// (0x00043c8d) bg_passive_tab_pane_g1_cp1

0x90db,	// (0x00043c96) bg_passive_tab_pane_g2_cp1

0x90e4,	// (0x00043c9f) bg_passive_tab_pane_g3_cp1

0x90ed,	// (0x00043ca8) bg_active_tab_pane_g1_cp2

0x90db,	// (0x00043c96) bg_active_tab_pane_g2_cp2

0x90f6,	// (0x00043cb1) bg_active_tab_pane_g3_cp2

0x90ed,	// (0x00043ca8) bg_passive_tab_pane_g1_cp2

0x90db,	// (0x00043c96) bg_passive_tab_pane_g2_cp2

0x90f6,	// (0x00043cb1) bg_passive_tab_pane_g3_cp2

0x90ff,	// (0x00043cba) bg_active_tab_pane_g1_cp3

0x90db,	// (0x00043c96) bg_active_tab_pane_g2_cp3

0x9108,	// (0x00043cc3) bg_active_tab_pane_g3_cp3

0x90ff,	// (0x00043cba) bg_passive_tab_pane_g1_cp3

0x90db,	// (0x00043c96) bg_passive_tab_pane_g2_cp3

0x9108,	// (0x00043cc3) bg_passive_tab_pane_g3_cp3

0x9111,	// (0x00043ccc) bg_active_tab_pane_g1_cp4

0x90db,	// (0x00043c96) bg_active_tab_pane_g2_cp4

0x911c,	// (0x00043cd7) bg_active_tab_pane_g3_cp4

0x9111,	// (0x00043ccc) bg_passive_tab_pane_g1_cp4

0x90db,	// (0x00043c96) bg_passive_tab_pane_g2_cp4

0x911c,	// (0x00043cd7) bg_passive_tab_pane_g3_cp4

0x9165,	// (0x00043d20) bg_active_tab_pane_g1_cp5

0x90db,	// (0x00043c96) bg_active_tab_pane_g2_cp5

0x916e,	// (0x00043d29) bg_active_tab_pane_g3_cp5

0x9165,	// (0x00043d20) bg_passive_tab_pane_g1_cp5

0x90db,	// (0x00043c96) bg_passive_tab_pane_g2_cp5

0x916e,	// (0x00043d29) bg_passive_tab_pane_g3_cp5

0x9177,	// (0x00043d32) list_set_graphic_pane_ParamLimits

0x9177,	// (0x00043d32) list_set_graphic_pane

0x7eb4,	// (0x00042a6f) bg_set_opt_pane_cp4

0x9194,	// (0x00043d4f) list_set_graphic_pane_g1_ParamLimits

0x9194,	// (0x00043d4f) list_set_graphic_pane_g1

0x91a0,	// (0x00043d5b) list_set_graphic_pane_g2_ParamLimits

0x91a0,	// (0x00043d5b) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0004a313) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0004a313) list_set_graphic_pane_g

0x0009,

0xfacd,	// (0x0004a688) volume_small_pane_cp_g

0x91c4,	// (0x00043d7f) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x91c4,	// (0x00043d7f) list_double2_large_graphic_pane_g1_cp2

0x91d0,	// (0x00043d8b) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x91d0,	// (0x00043d8b) list_double2_large_graphic_pane_g2_cp2

0x91e1,	// (0x00043d9c) list_double2_large_graphic_pane_g3_cp2

0x91e9,	// (0x00043da4) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x91e9,	// (0x00043da4) list_double2_large_graphic_pane_t1_cp2

0x91ff,	// (0x00043dba) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x91ff,	// (0x00043dba) list_double2_large_graphic_pane_t2_cp2

0xadcf,	// (0x0004598a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xadcf,	// (0x0004598a) list_double_large_graphic_pane_g1_cp2

0xade0,	// (0x0004599b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xade0,	// (0x0004599b) list_double_large_graphic_pane_g2_cp2

0x937a,	// (0x00043f35) list_double_large_graphic_pane_g3_cp2

0xadf1,	// (0x000459ac) list_double_large_graphic_pane_g4_cp

0xadf9,	// (0x000459b4) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xadf9,	// (0x000459b4) list_double_large_graphic_pane_t1_cp2

0xae10,	// (0x000459cb) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xae10,	// (0x000459cb) list_double_large_graphic_pane_t2_cp2

0x926c,	// (0x00043e27) list_double2_graphic_pane_g1_cp2_ParamLimits

0x926c,	// (0x00043e27) list_double2_graphic_pane_g1_cp2

0x927a,	// (0x00043e35) list_double2_graphic_pane_g2_cp2_ParamLimits

0x927a,	// (0x00043e35) list_double2_graphic_pane_g2_cp2

0x928b,	// (0x00043e46) list_double2_graphic_pane_g3_cp2

0x9295,	// (0x00043e50) list_double2_graphic_pane_t1_cp2_ParamLimits

0x9295,	// (0x00043e50) list_double2_graphic_pane_t1_cp2

0x92ab,	// (0x00043e66) list_double2_graphic_pane_t2_cp2_ParamLimits

0x92ab,	// (0x00043e66) list_double2_graphic_pane_t2_cp2

0x92bd,	// (0x00043e78) list_single_number_heading_pane_g1_cp2_ParamLimits

0x92bd,	// (0x00043e78) list_single_number_heading_pane_g1_cp2

0x92c9,	// (0x00043e84) list_single_number_heading_pane_g2_cp2

0x92d1,	// (0x00043e8c) list_single_number_heading_pane_t1_cp2_ParamLimits

0x92d1,	// (0x00043e8c) list_single_number_heading_pane_t1_cp2

0x92e7,	// (0x00043ea2) list_single_number_heading_pane_t2_cp2_ParamLimits

0x92e7,	// (0x00043ea2) list_single_number_heading_pane_t2_cp2

0x92f9,	// (0x00043eb4) list_single_number_heading_pane_t3_cp2_ParamLimits

0x92f9,	// (0x00043eb4) list_single_number_heading_pane_t3_cp2

0x92bd,	// (0x00043e78) list_single_heading_pane_g1_cp2_ParamLimits

0x92bd,	// (0x00043e78) list_single_heading_pane_g1_cp2

0x92c9,	// (0x00043e84) list_single_heading_pane_g2_cp2

0x92d1,	// (0x00043e8c) list_single_heading_pane_t1_cp2_ParamLimits

0x92d1,	// (0x00043e8c) list_single_heading_pane_t1_cp2

0xabd7,	// (0x00045792) list_single_heading_pane_t2_cp2_ParamLimits

0xabd7,	// (0x00045792) list_single_heading_pane_t2_cp2

0xab1f,	// (0x000456da) list_double_graphic_pane_g1_cp2_ParamLimits

0xab1f,	// (0x000456da) list_double_graphic_pane_g1_cp2

0xab2b,	// (0x000456e6) list_double_graphic_pane_g2_cp2_ParamLimits

0xab2b,	// (0x000456e6) list_double_graphic_pane_g2_cp2

0xab3a,	// (0x000456f5) list_double_graphic_pane_g3_cp2

0xab42,	// (0x000456fd) list_double_graphic_pane_t1_cp2_ParamLimits

0xab42,	// (0x000456fd) list_double_graphic_pane_t1_cp2

0xab58,	// (0x00045713) list_double_graphic_pane_t2_cp2_ParamLimits

0xab58,	// (0x00045713) list_double_graphic_pane_t2_cp2

0x936e,	// (0x00043f29) list_double_number_pane_g1_cp2_ParamLimits

0x936e,	// (0x00043f29) list_double_number_pane_g1_cp2

0x937a,	// (0x00043f35) list_double_number_pane_g2_cp2

0xaae3,	// (0x0004569e) list_double_number_pane_t1_cp2_ParamLimits

0xaae3,	// (0x0004569e) list_double_number_pane_t1_cp2

0xaaf7,	// (0x000456b2) list_double_number_pane_t2_cp2_ParamLimits

0xaaf7,	// (0x000456b2) list_double_number_pane_t2_cp2

0xab0d,	// (0x000456c8) list_double_number_pane_t3_cp2_ParamLimits

0xab0d,	// (0x000456c8) list_double_number_pane_t3_cp2

0xa9c0,	// (0x0004557b) list_single_graphic_pane_g1_cp2_ParamLimits

0xa9c0,	// (0x0004557b) list_single_graphic_pane_g1_cp2

0x93d2,	// (0x00043f8d) list_single_graphic_pane_g2_cp2_ParamLimits

0x93d2,	// (0x00043f8d) list_single_graphic_pane_g2_cp2

0x93de,	// (0x00043f99) list_single_graphic_pane_g3_cp2

0xa996,	// (0x00045551) list_single_graphic_pane_t1_cp2_ParamLimits

0xa996,	// (0x00045551) list_single_graphic_pane_t1_cp2

0x93d2,	// (0x00043f8d) list_single_number_pane_g1_cp2_ParamLimits

0x93d2,	// (0x00043f8d) list_single_number_pane_g1_cp2

0x93de,	// (0x00043f99) list_single_number_pane_g2_cp2

0xa996,	// (0x00045551) list_single_number_pane_t1_cp2_ParamLimits

0xa996,	// (0x00045551) list_single_number_pane_t1_cp2

0xa9ac,	// (0x00045567) list_single_number_pane_t2_cp2_ParamLimits

0xa9ac,	// (0x00045567) list_single_number_pane_t2_cp2

0x91d0,	// (0x00043d8b) list_double2_pane_g1_cp2_ParamLimits

0x91d0,	// (0x00043d8b) list_double2_pane_g1_cp2

0x91e1,	// (0x00043d9c) list_double2_pane_g2_cp2

0x9346,	// (0x00043f01) list_double2_pane_t1_cp2_ParamLimits

0x9346,	// (0x00043f01) list_double2_pane_t1_cp2

0x935c,	// (0x00043f17) list_double2_pane_t2_cp2_ParamLimits

0x935c,	// (0x00043f17) list_double2_pane_t2_cp2

0x936e,	// (0x00043f29) list_double_pane_g1_cp2_ParamLimits

0x936e,	// (0x00043f29) list_double_pane_g1_cp2

0x937a,	// (0x00043f35) list_double_pane_g2_cp2

0x9382,	// (0x00043f3d) list_double_pane_t1_cp2_ParamLimits

0x9382,	// (0x00043f3d) list_double_pane_t1_cp2

0x9398,	// (0x00043f53) list_double_pane_t2_cp2_ParamLimits

0x9398,	// (0x00043f53) list_double_pane_t2_cp2

0x93c2,	// (0x00043f7d) list_single_pane_cp2_g3

0x93d2,	// (0x00043f8d) list_single_pane_g1_cp2_ParamLimits

0x93d2,	// (0x00043f8d) list_single_pane_g1_cp2

0x93de,	// (0x00043f99) list_single_pane_g2_cp2

0x93e6,	// (0x00043fa1) list_single_pane_t1_cp2_ParamLimits

0x93e6,	// (0x00043fa1) list_single_pane_t1_cp2

0x93fe,	// (0x00043fb9) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x93fe,	// (0x00043fb9) list_single_large_graphic_pane_g1_cp2

0x940a,	// (0x00043fc5) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x940a,	// (0x00043fc5) list_single_large_graphic_pane_g2_cp2

0x9416,	// (0x00043fd1) list_single_large_graphic_pane_g3_cp2

0x941e,	// (0x00043fd9) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x941e,	// (0x00043fd9) list_single_large_graphic_pane_g4_cp1

0x9438,	// (0x00043ff3) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9438,	// (0x00043ff3) list_single_large_graphic_pane_t1_cp2

0xa962,	// (0x0004551d) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa962,	// (0x0004551d) list_single_graphic_heading_pane_g1_cp2

0xa92f,	// (0x000454ea) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa92f,	// (0x000454ea) list_single_graphic_heading_pane_g4_cp2

0x93de,	// (0x00043f99) list_single_graphic_heading_pane_g5_cp2

0xa96e,	// (0x00045529) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa96e,	// (0x00045529) list_single_graphic_heading_pane_t1_cp2

0xa984,	// (0x0004553f) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa984,	// (0x0004553f) list_single_graphic_heading_pane_t2_cp2

0xa923,	// (0x000454de) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa923,	// (0x000454de) list_single_2graphic_pane_g1_cp2

0xa92f,	// (0x000454ea) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa92f,	// (0x000454ea) list_single_2graphic_pane_g2_cp2

0x93de,	// (0x00043f99) list_single_2graphic_pane_g3_cp2

0xa940,	// (0x000454fb) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa940,	// (0x000454fb) list_single_2graphic_pane_g4_cp2

0xa94c,	// (0x00045507) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa94c,	// (0x00045507) list_single_2graphic_pane_t1_cp2

0x7eaa,	// (0x00042a65) list_highlight_pane_g10_cp1

0xa4fb,	// (0x000450b6) list_highlight_pane_g1_cp1

0xa503,	// (0x000450be) list_highlight_pane_g2_cp1

0xa50b,	// (0x000450c6) list_highlight_pane_g3_cp1

0xa513,	// (0x000450ce) list_highlight_pane_g4_cp1

0xa51b,	// (0x000450d6) list_highlight_pane_g5_cp1

0xa523,	// (0x000450de) list_highlight_pane_g6_cp1

0xa52b,	// (0x000450e6) list_highlight_pane_g7_cp1

0xa533,	// (0x000450ee) list_highlight_pane_g8_cp1

0xa53b,	// (0x000450f6) list_highlight_pane_g9_cp1

0xa41b,	// (0x00044fd6) form_field_slider_pane_t3

0xa429,	// (0x00044fe4) form_field_slider_pane_t4

0xa437,	// (0x00044ff2) slider_form_pane_ParamLimits

0xa437,	// (0x00044ff2) slider_form_pane

0x7eb4,	// (0x00042a6f) control_abbreviations

0x7eb4,	// (0x00042a6f) control_conventions

0x7eb4,	// (0x00042a6f) control_definitions

0x7eb4,	// (0x00042a6f) format_table_attribute

0xac21,	// (0x000457dc) bg_popup_preview_window_pane_g9

0x7eb4,	// (0x00042a6f) format_table_data2

0x7eb4,	// (0x00042a6f) format_table_data3

0x7eb4,	// (0x00042a6f) format_table_data_example

0x0008,

0x7eb4,	// (0x00042a6f) intro_purpose

0xf8f4,	// (0x0004a4af) bg_popup_preview_window_pane_g

0x7eb4,	// (0x00042a6f) texts_category

0x7eb4,	// (0x00042a6f) texts_graphics

0x944e,	// (0x00044009) text_digital

0x945d,	// (0x00044018) text_primary

0x946c,	// (0x00044027) text_primary_small

0x947b,	// (0x00044036) text_secondary

0x948a,	// (0x00044045) text_title

0xb307,	// (0x00045ec2) bg_passive_tab_pane_g1_cp3_srt

0x90db,	// (0x00043c96) bg_passive_tab_pane_g2_cp3_srt

0xb310,	// (0x00045ecb) bg_passive_tab_pane_g3_cp3_srt

0x7f94,	// (0x00042b4f) bg_active_tab_pane_cp3_srt_ParamLimits

0x7f94,	// (0x00042b4f) bg_active_tab_pane_cp3_srt

0xb319,	// (0x00045ed4) tabs_4_active_pane_srt_g1

0xb321,	// (0x00045edc) tabs_4_active_pane_srt_t1_ParamLimits

0xb321,	// (0x00045edc) tabs_4_active_pane_srt_t1

0xb307,	// (0x00045ec2) bg_active_tab_pane_g1_cp3_copy1

0x90db,	// (0x00043c96) bg_active_tab_pane_g2_cp3_copy1

0xb310,	// (0x00045ecb) bg_active_tab_pane_g3_cp3_copy1

0x7f94,	// (0x00042b4f) tabs_2_long_active_pane_srt_ParamLimits

0x7f94,	// (0x00042b4f) tabs_2_long_active_pane_srt

0x7f94,	// (0x00042b4f) tabs_2_long_passive_pane_srt_ParamLimits

0x7f94,	// (0x00042b4f) tabs_2_long_passive_pane_srt

0x89e7,	// (0x000435a2) bg_passive_tab_pane_cp4_srt_ParamLimits

0x89e7,	// (0x000435a2) bg_passive_tab_pane_cp4_srt

0xb050,	// (0x00045c0b) bg_passive_tab_pane_g1_cp4_srt

0x90db,	// (0x00043c96) bg_passive_tab_pane_g2_cp4_srt

0xb059,	// (0x00045c14) bg_passive_tab_pane_g3_cp4_srt

0x89c6,	// (0x00043581) bg_active_tab_pane_cp4_srt_ParamLimits

0x89c6,	// (0x00043581) bg_active_tab_pane_cp4_srt

0xb062,	// (0x00045c1d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb062,	// (0x00045c1d) tabs_2_long_active_pane_srt_t1

0xb050,	// (0x00045c0b) bg_active_tab_pane_g1_cp4_srt

0x90db,	// (0x00043c96) bg_active_tab_pane_g2_cp4_srt

0xb059,	// (0x00045c14) bg_active_tab_pane_g3_cp4_srt

0x820f,	// (0x00042dca) tabs_3_long_active_pane_srt_ParamLimits

0x820f,	// (0x00042dca) tabs_3_long_active_pane_srt

0x820f,	// (0x00042dca) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x820f,	// (0x00042dca) tabs_3_long_passive_pane_cp_srt

0x820f,	// (0x00042dca) tabs_3_long_passive_pane_srt_ParamLimits

0x820f,	// (0x00042dca) tabs_3_long_passive_pane_srt

0x89e7,	// (0x000435a2) bg_passive_tab_pane_cp5_srt_ParamLimits

0x89e7,	// (0x000435a2) bg_passive_tab_pane_cp5_srt

0x9165,	// (0x00043d20) bg_passive_tab_pane_g1_cp5_srt

0x90db,	// (0x00043c96) bg_passive_tab_pane_g2_cp5_srt

0x916e,	// (0x00043d29) bg_passive_tab_pane_g3_cp5_srt

0x89c6,	// (0x00043581) bg_active_tab_pane_cp5_srt_ParamLimits

0x89c6,	// (0x00043581) bg_active_tab_pane_cp5_srt

0xb03e,	// (0x00045bf9) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb03e,	// (0x00045bf9) tabs_3_long_active_pane_srt_t1

0x9165,	// (0x00043d20) bg_active_tab_pane_g1_cp5_srt

0x90db,	// (0x00043c96) bg_active_tab_pane_g2_cp5_srt

0x916e,	// (0x00043d29) bg_active_tab_pane_g3_cp5_srt

0xb030,	// (0x00045beb) navi_text_pane_srt_t1

0xb028,	// (0x00045be3) navi_icon_pane_srt_g1

0x9653,	// (0x0004420e) midp_editing_number_pane_srt

0x9499,	// (0x00044054) midp_ticker_pane_srt

0x965b,	// (0x00044216) midp_ticker_pane_srt_g1

0x9663,	// (0x0004421e) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0004a332) midp_ticker_pane_srt_g

0x966b,	// (0x00044226) midp_ticker_pane_srt_t1

0xb019,	// (0x00045bd4) midp_editing_number_pane_t1_copy1

0x89e7,	// (0x000435a2) listscroll_midp_pane

0x89e7,	// (0x000435a2) midp_form_pane

0x9505,	// (0x000440c0) midp_info_popup_window_ParamLimits

0x9505,	// (0x000440c0) midp_info_popup_window

0x88af,	// (0x0004346a) bg_popup_sub_pane_cp50_ParamLimits

0x88af,	// (0x0004346a) bg_popup_sub_pane_cp50

0xa133,	// (0x00044cee) listscroll_midp_info_pane_ParamLimits

0xa133,	// (0x00044cee) listscroll_midp_info_pane

0xa11b,	// (0x00044cd6) listscroll_form_midp_pane_ParamLimits

0xa11b,	// (0x00044cd6) listscroll_form_midp_pane

0xa127,	// (0x00044ce2) scroll_bar_cp050

0xa0fb,	// (0x00044cb6) list_midp_pane

0xbd5c,	// (0x00046917) signal_pane_g2_cp

0xa035,	// (0x00044bf0) listscroll_midp_info_pane_t1_ParamLimits

0xa035,	// (0x00044bf0) listscroll_midp_info_pane_t1

0xa04d,	// (0x00044c08) listscroll_midp_info_pane_t2_ParamLimits

0xa04d,	// (0x00044c08) listscroll_midp_info_pane_t2

0xa08b,	// (0x00044c46) listscroll_midp_info_pane_t3_ParamLimits

0xa08b,	// (0x00044c46) listscroll_midp_info_pane_t3

0xa0c5,	// (0x00044c80) listscroll_midp_info_pane_t4_ParamLimits

0xa0c5,	// (0x00044c80) listscroll_midp_info_pane_t4

0x0003,

0xf82f,	// (0x0004a3ea) listscroll_midp_info_pane_t_ParamLimits

0xf82f,	// (0x0004a3ea) listscroll_midp_info_pane_t

0x8973,	// (0x0004352e) scroll_pane_cp21

0x9fd3,	// (0x00044b8e) form_midp_field_choice_group_pane

0x9fdc,	// (0x00044b97) form_midp_field_text_pane

0xa01b,	// (0x00044bd6) form_midp_field_time_pane

0xa023,	// (0x00044bde) form_midp_gauge_slider_pane

0xa02c,	// (0x00044be7) form_midp_gauge_wait_pane

0x7eb4,	// (0x00042a6f) form_midp_image_pane

0x51ae,	// (0x0003fd69) list_single_midp_pane_ParamLimits

0x51ae,	// (0x0003fd69) list_single_midp_pane

0x9f8b,	// (0x00044b46) form_midp_field_text_pane_t1

0x9d55,	// (0x00044910) input_focus_pane_cp050

0x9fc2,	// (0x00044b7d) list_midp_form_text_pane

0x9f5a,	// (0x00044b15) form_midp_field_choice_group_pane_t1

0x9f68,	// (0x00044b23) input_focus_pane_cp051

0x9f7c,	// (0x00044b37) list_midp_choice_pane

0x7eb4,	// (0x00042a6f) status_idle_pane

0x9f3e,	// (0x00044af9) form_midp_field_time_pane_t1

0x7eaa,	// (0x00042a65) wait_anim_pane_g2_copy1

0x9f4c,	// (0x00044b07) form_midp_field_time_pane_t2

0x0001,

0x95b3,	// (0x0004416e) aid_navinavi_width_2_pane

0xf82a,	// (0x0004a3e5) form_midp_field_time_pane_t

0x7eb4,	// (0x00042a6f) input_focus_pane_cp052

0x7eb4,	// (0x00042a6f) bg_input_focus_pane_cp040

0x9efe,	// (0x00044ab9) form_midp_gauge_slider_pane_t1

0x9f0c,	// (0x00044ac7) form_midp_gauge_slider_pane_t2

0x9f1a,	// (0x00044ad5) form_midp_gauge_slider_pane_t3

0x9f28,	// (0x00044ae3) form_midp_gauge_slider_pane_t4

0x0003,

0xf821,	// (0x0004a3dc) form_midp_gauge_slider_pane_t

0x9f36,	// (0x00044af1) form_midp_slider_pane

0x7f94,	// (0x00042b4f) bg_input_focus_pane_cp041_ParamLimits

0x7f94,	// (0x00042b4f) bg_input_focus_pane_cp041

0x9ecb,	// (0x00044a86) form_midp_gauge_wait_pane_t1_ParamLimits

0x9ecb,	// (0x00044a86) form_midp_gauge_wait_pane_t1

0x9edd,	// (0x00044a98) form_midp_gauge_wait_pane_t2_ParamLimits

0x9edd,	// (0x00044a98) form_midp_gauge_wait_pane_t2

0x0001,

0xf81c,	// (0x0004a3d7) form_midp_gauge_wait_pane_t_ParamLimits

0xf81c,	// (0x0004a3d7) form_midp_gauge_wait_pane_t

0x9eef,	// (0x00044aaa) form_midp_wait_pane_ParamLimits

0x9eef,	// (0x00044aaa) form_midp_wait_pane

0x9e95,	// (0x00044a50) form_midp_image_pane_g1

0x9e9e,	// (0x00044a59) form_midp_image_pane_t1

0x9ead,	// (0x00044a68) form_midp_image_pane_t2

0x9ebc,	// (0x00044a77) form_midp_image_pane_t3

0x0002,

0xf815,	// (0x0004a3d0) form_midp_image_pane_t

0x9e8c,	// (0x00044a47) list_single_midp_pane_g1

0x519f,	// (0x0003fd5a) list_single_midp_pane_t1

0x9e64,	// (0x00044a1f) list_midp_form_item_pane_ParamLimits

0x9e64,	// (0x00044a1f) list_midp_form_item_pane

0x955b,	// (0x00044116) list_midp_form_item_pane_t1

0x956a,	// (0x00044125) midp_ticker_pane_g1

0x9576,	// (0x00044131) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0004a318) midp_ticker_pane_g

0x9582,	// (0x0004413d) midp_ticker_pane_t1

0xb26a,	// (0x00045e25) midp_editing_number_pane_t1

0xb248,	// (0x00045e03) midp_editing_number_pane

0xb257,	// (0x00045e12) midp_ticker_pane

0xb009,	// (0x00045bc4) ai_message_heading_pane

0x7eb4,	// (0x00042a6f) bg_popup_window_pane_cp14

0xb011,	// (0x00045bcc) listscroll_ai_message_pane

0xaf93,	// (0x00045b4e) ai_message_heading_pane_g1_ParamLimits

0xaf93,	// (0x00045b4e) ai_message_heading_pane_g1

0xaf9f,	// (0x00045b5a) ai_message_heading_pane_g2_ParamLimits

0xaf9f,	// (0x00045b5a) ai_message_heading_pane_g2

0xafab,	// (0x00045b66) ai_message_heading_pane_g3_ParamLimits

0xafab,	// (0x00045b66) ai_message_heading_pane_g3

0xafb7,	// (0x00045b72) ai_message_heading_pane_g4_ParamLimits

0xafb7,	// (0x00045b72) ai_message_heading_pane_g4

0x0003,

0xf956,	// (0x0004a511) ai_message_heading_pane_g_ParamLimits

0xf956,	// (0x0004a511) ai_message_heading_pane_g

0xafc3,	// (0x00045b7e) ai_message_heading_pane_t1_ParamLimits

0xafc3,	// (0x00045b7e) ai_message_heading_pane_t1

0xafdd,	// (0x00045b98) ai_message_heading_pane_t2_ParamLimits

0xafdd,	// (0x00045b98) ai_message_heading_pane_t2

0x0001,

0xf95f,	// (0x0004a51a) ai_message_heading_pane_t_ParamLimits

0xf95f,	// (0x0004a51a) ai_message_heading_pane_t

0xafef,	// (0x00045baa) bg_popup_heading_pane_cp1_ParamLimits

0xafef,	// (0x00045baa) bg_popup_heading_pane_cp1

0xaf81,	// (0x00045b3c) list_ai_message_pane_ParamLimits

0xaf81,	// (0x00045b3c) list_ai_message_pane

0x8973,	// (0x0004352e) scroll_pane_cp10

0xaf1d,	// (0x00045ad8) list_ai_message_pane_g1

0xaf25,	// (0x00045ae0) list_ai_message_pane_g2

0x0001,

0xf933,	// (0x0004a4ee) list_ai_message_pane_g

0xaf2d,	// (0x00045ae8) list_ai_message_pane_t1_ParamLimits

0xaf2d,	// (0x00045ae8) list_ai_message_pane_t1

0xaf42,	// (0x00045afd) list_ai_message_pane_t2_ParamLimits

0xaf42,	// (0x00045afd) list_ai_message_pane_t2

0xaf57,	// (0x00045b12) list_ai_message_pane_t3_ParamLimits

0xaf57,	// (0x00045b12) list_ai_message_pane_t3

0xaf6c,	// (0x00045b27) list_ai_message_pane_t4_ParamLimits

0xaf6c,	// (0x00045b27) list_ai_message_pane_t4

0x0003,

0xf938,	// (0x0004a4f3) list_ai_message_pane_t_ParamLimits

0xf938,	// (0x0004a4f3) list_ai_message_pane_t

0xaf08,	// (0x00045ac3) cell_ai_soft_ind_pane_ParamLimits

0xaf08,	// (0x00045ac3) cell_ai_soft_ind_pane

0x9594,	// (0x0004414f) cell_ai_soft_ind_pane_g1_ParamLimits

0x9594,	// (0x0004414f) cell_ai_soft_ind_pane_g1

0x7eb4,	// (0x00042a6f) grid_highlight_cp1

0x95a1,	// (0x0004415c) text_secondary_cp56_ParamLimits

0x95a1,	// (0x0004415c) text_secondary_cp56

0xaedd,	// (0x00045a98) example_general_pane_ParamLimits

0xaedd,	// (0x00045a98) example_general_pane

0xaee9,	// (0x00045aa4) example_parent_pane_g1_ParamLimits

0xaee9,	// (0x00045aa4) example_parent_pane_g1

0xaef5,	// (0x00045ab0) example_parent_pane_t1_ParamLimits

0xaef5,	// (0x00045ab0) example_parent_pane_t1

0x6743,	// (0x000412fe) popup_preview_text_window_ParamLimits

0x6743,	// (0x000412fe) popup_preview_text_window

0x93ca,	// (0x00043f85) list_single_pane_cp2_g4

0x82c5,	// (0x00042e80) bg_popup_preview_window_pane_ParamLimits

0x82c5,	// (0x00042e80) bg_popup_preview_window_pane

0xac29,	// (0x000457e4) popup_preview_text_window_t1_ParamLimits

0xac29,	// (0x000457e4) popup_preview_text_window_t1

0xac47,	// (0x00045802) popup_preview_text_window_t2_ParamLimits

0xac47,	// (0x00045802) popup_preview_text_window_t2

0xac90,	// (0x0004584b) popup_preview_text_window_t3_ParamLimits

0xac90,	// (0x0004584b) popup_preview_text_window_t3

0xacd5,	// (0x00045890) popup_preview_text_window_t4_ParamLimits

0xacd5,	// (0x00045890) popup_preview_text_window_t4

0x0004,

0xf907,	// (0x0004a4c2) popup_preview_text_window_t_ParamLimits

0xf907,	// (0x0004a4c2) popup_preview_text_window_t

0xad53,	// (0x0004590e) scroll_pane_cp11

0x9ce1,	// (0x0004489c) bg_popup_preview_window_pane_g1

0xabe9,	// (0x000457a4) bg_popup_preview_window_pane_g2

0xabf1,	// (0x000457ac) bg_popup_preview_window_pane_g3

0xabf9,	// (0x000457b4) bg_popup_preview_window_pane_g4

0xac01,	// (0x000457bc) bg_popup_preview_window_pane_g5

0xac09,	// (0x000457c4) bg_popup_preview_window_pane_g6

0xac11,	// (0x000457cc) bg_popup_preview_window_pane_g7

0xac19,	// (0x000457d4) bg_popup_preview_window_pane_g8

0x5883,	// (0x0004043e) aid_popup_width_pane

0x6721,	// (0x000412dc) popup_midp_note_alarm_window_ParamLimits

0x6721,	// (0x000412dc) popup_midp_note_alarm_window

0x8803,	// (0x000433be) data_form_pane_ParamLimits

0x4e3c,	// (0x0003f9f7) form_field_data_pane_g1

0x4e46,	// (0x0003fa01) form_field_data_pane_t1_ParamLimits

0x880f,	// (0x000433ca) input_focus_pane_ParamLimits

0x4e5e,	// (0x0003fa19) data_form_wide_pane_ParamLimits

0x4e6f,	// (0x0003fa2a) form_field_data_wide_pane_g1

0x4e7b,	// (0x0003fa36) form_field_data_wide_pane_t1_ParamLimits

0x8574,	// (0x0004312f) input_focus_pane_cp6_ParamLimits

0x8920,	// (0x000434db) input_popup_find_pane_g1_ParamLimits

0x8920,	// (0x000434db) input_popup_find_pane_g1

0x5ea1,	// (0x00040a5c) aid_navi_side_left_pane

0x5eb6,	// (0x00040a71) aid_navi_side_right_pane

0xa5f6,	// (0x000451b1) bg_popup_window_pane_cp30_ParamLimits

0xa5f6,	// (0x000451b1) bg_popup_window_pane_cp30

0xa670,	// (0x0004522b) popup_midp_note_alarm_window_g1_ParamLimits

0xa670,	// (0x0004522b) popup_midp_note_alarm_window_g1

0xa6a0,	// (0x0004525b) popup_midp_note_alarm_window_t1_ParamLimits

0xa6a0,	// (0x0004525b) popup_midp_note_alarm_window_t1

0xa741,	// (0x000452fc) popup_midp_note_alarm_window_t2_ParamLimits

0xa741,	// (0x000452fc) popup_midp_note_alarm_window_t2

0xa7ef,	// (0x000453aa) popup_midp_note_alarm_window_t3_ParamLimits

0xa7ef,	// (0x000453aa) popup_midp_note_alarm_window_t3

0xa821,	// (0x000453dc) popup_midp_note_alarm_window_t4_ParamLimits

0xa821,	// (0x000453dc) popup_midp_note_alarm_window_t4

0xa847,	// (0x00045402) popup_midp_note_alarm_window_t5_ParamLimits

0xa847,	// (0x00045402) popup_midp_note_alarm_window_t5

0x000a,

0xf8a4,	// (0x0004a45f) popup_midp_note_alarm_window_t_ParamLimits

0xf8a4,	// (0x0004a45f) popup_midp_note_alarm_window_t

0xa8f3,	// (0x000454ae) wait_bar_pane_cp1_ParamLimits

0xa8f3,	// (0x000454ae) wait_bar_pane_cp1

0x7eb4,	// (0x00042a6f) wait_anim_pane_copy1

0x7eb4,	// (0x00042a6f) wait_border_pane_copy1

0xa2dc,	// (0x00044e97) wait_border_pane_g1_copy1

0x4e95,	// (0x0003fa50) form_field_popup_pane_g1

0x4e9d,	// (0x0003fa58) form_field_popup_pane_t1_ParamLimits

0x880f,	// (0x000433ca) input_focus_pane_cp7_ParamLimits

0x8831,	// (0x000433ec) list_form_pane_ParamLimits

0x4eb5,	// (0x0003fa70) form_field_popup_wide_pane_g1

0x4ebd,	// (0x0003fa78) form_field_popup_wide_pane_t1_ParamLimits

0x880f,	// (0x000433ca) input_focus_pane_cp8_ParamLimits

0x883d,	// (0x000433f8) list_form_wide_pane_ParamLimits

0xb39f,	// (0x00045f5a) aid_size_cell_graphic_pane

0x4f47,	// (0x0003fb02) data_form_pane_t1_ParamLimits

0x5201,	// (0x0003fdbc) data_form_wide_pane_t1_ParamLimits

0x98ae,	// (0x00044469) bg_status_flat_pane

0x7ef4,	// (0x00042aaf) title_pane_t1_ParamLimits

0x7f5c,	// (0x00042b17) title_pane_t2_ParamLimits

0x7f82,	// (0x00042b3d) title_pane_t3_ParamLimits

0xf557,	// (0x0004a112) title_pane_t_ParamLimits

0x8df2,	// (0x000439ad) level_1_signal_ParamLimits

0x8e04,	// (0x000439bf) level_2_signal_ParamLimits

0x8e17,	// (0x000439d2) level_3_signal_ParamLimits

0x8e2a,	// (0x000439e5) level_4_signal_ParamLimits

0x8e3d,	// (0x000439f8) level_5_signal_ParamLimits

0x8e50,	// (0x00043a0b) level_6_signal_ParamLimits

0x8e63,	// (0x00043a1e) level_7_signal_ParamLimits

0x8df2,	// (0x000439ad) level_1_battery_ParamLimits

0x8e04,	// (0x000439bf) level_2_battery_ParamLimits

0x8e17,	// (0x000439d2) level_3_battery_ParamLimits

0x8e2a,	// (0x000439e5) level_4_battery_ParamLimits

0x8e3d,	// (0x000439f8) level_5_battery_ParamLimits

0x8e50,	// (0x00043a0b) level_6_battery_ParamLimits

0x8e63,	// (0x00043a1e) level_7_battery_ParamLimits

0xa4fb,	// (0x000450b6) bg_status_flat_pane_g1

0xa503,	// (0x000450be) bg_status_flat_pane_g2

0xa50b,	// (0x000450c6) bg_status_flat_pane_g3

0xa513,	// (0x000450ce) bg_status_flat_pane_g4

0xa51b,	// (0x000450d6) bg_status_flat_pane_g5

0xa523,	// (0x000450de) bg_status_flat_pane_g6

0xa52b,	// (0x000450e6) bg_status_flat_pane_g7

0x7faa,	// (0x00042b65) tabs_3_active_pane_t1_ParamLimits

0x7faa,	// (0x00042b65) tabs_3_passive_pane_t1_ParamLimits

0x7fc4,	// (0x00042b7f) tabs_4_active_pane_t1_ParamLimits

0x7fc4,	// (0x00042b7f) tabs_4_1_passive_pane_t1_ParamLimits

0x89b4,	// (0x0004356f) tabs_2_active_pane_t1_ParamLimits

0x89b4,	// (0x0004356f) tabs_2_passive_pane_t1_ParamLimits

0x89c6,	// (0x00043581) bg_active_tab_pane_cp4_ParamLimits

0x89d4,	// (0x0004358f) tabs_2_long_active_pane_t1_ParamLimits

0x89e7,	// (0x000435a2) bg_passive_tab_pane_cp4_ParamLimits

0x69f0,	// (0x000415ab) list_single_midp_graphic_pane_t1_ParamLimits

0x89c6,	// (0x00043581) bg_active_tab_pane_cp5_ParamLimits

0x89f3,	// (0x000435ae) tabs_3_long_active_pane_t1_ParamLimits

0x89e7,	// (0x000435a2) bg_passive_tab_pane_cp5_ParamLimits

0x69f0,	// (0x000415ab) list_single_midp_graphic_pane_t1

0x98ae,	// (0x00044469) bg_status_flat_pane_ParamLimits

0x9971,	// (0x0004452c) indicator_pane_cp2_ParamLimits

0x9971,	// (0x0004452c) indicator_pane_cp2

0x9a9c,	// (0x00044657) navi_pane_srt_ParamLimits

0x9a9c,	// (0x00044657) navi_pane_srt

0x9ac0,	// (0x0004467b) popup_clock_digital_analogue_window_cp1

0x8071,	// (0x00042c2c) indicator_pane_t1

0x9499,	// (0x00044054) copy_highlight_pane

0x9499,	// (0x00044054) cursor_graphics_pane

0x9499,	// (0x00044054) graphic_within_text_pane

0x9499,	// (0x00044054) link_highlight_pane

0xad16,	// (0x000458d1) popup_preview_text_window_t5_ParamLimits

0xad16,	// (0x000458d1) popup_preview_text_window_t5

0x95bb,	// (0x00044176) cursor_digital_pane

0x95bb,	// (0x00044176) cursor_primary_pane

0x95cc,	// (0x00044187) cursor_primary_small_pane

0x95d4,	// (0x0004418f) cursor_secondary_pane

0x95dc,	// (0x00044197) cursor_title_pane

0x95bb,	// (0x00044176) link_highlight_digital_pane

0x95c3,	// (0x0004417e) link_highlight_primary_pane

0x95cc,	// (0x00044187) link_highlight_primary_small_pane

0x95d4,	// (0x0004418f) link_highlight_secondary_pane

0x95dc,	// (0x00044197) link_highlight_title_pane

0x95bb,	// (0x00044176) copy_highlight_digital_pane

0x95bb,	// (0x00044176) copy_highlight_primary_pane

0x95cc,	// (0x00044187) copy_highlight_primary_small_pane

0x95d4,	// (0x0004418f) copy_highlight_secondary_pane

0x95dc,	// (0x00044197) copy_highlight_title_pane

0x95d4,	// (0x0004418f) graphic_text_digital_pane

0xa599,	// (0x00045154) graphic_text_primary_pane

0xa5a2,	// (0x0004515d) graphic_text_primary_small_pane

0x95cc,	// (0x00044187) graphic_text_secondary_pane

0x95bb,	// (0x00044176) graphic_text_title_pane

0x95e4,	// (0x0004419f) cursor_primary_pane_g1

0xa58b,	// (0x00045146) cursor_text_primary_t1

0xa573,	// (0x0004512e) cursor_primary_small_pane_g1

0xa57d,	// (0x00045138) cursor_text_primary_small_t1

0xa55b,	// (0x00045116) cursor_primary_small_pane_g1_copy1

0xa565,	// (0x00045120) cursor_text_primary_small_t1_copy1

0xa543,	// (0x000450fe) cursor_text_title_t1

0xa551,	// (0x0004510c) cursor_title_pane_g1

0x95e4,	// (0x0004419f) cursor_digital_pane_g1

0x95ee,	// (0x000441a9) cursor_text_digital_t1

0x9613,	// (0x000441ce) link_highlight_primary_pane_g1

0xa4ec,	// (0x000450a7) link_highlight_primary_pane_t1

0x95fc,	// (0x000441b7) link_highlight_primary_small_pane_g1

0x9604,	// (0x000441bf) link_highlight_primary_small_pane_t1

0x9613,	// (0x000441ce) link_highlight_secondary_pane_g1

0x961b,	// (0x000441d6) link_highlight_secondary_pane_t1

0xa460,	// (0x0004501b) link_highlight_title_pane_g1

0xa468,	// (0x00045023) link_highlight_title_pane_t1

0xa449,	// (0x00045004) link_highlight_digital_pane_g1

0xa451,	// (0x0004500c) link_highlight_digital_pane_t1

0xa321,	// (0x00044edc) copy_highlight_primary_pane_g1

0xa329,	// (0x00044ee4) copy_highlight_primary_pane_t1

0xa2fb,	// (0x00044eb6) copy_highlight_primary_small_pane_g1

0xa312,	// (0x00044ecd) copy_highlight_primary_small_pane_t1

0x962a,	// (0x000441e5) copy_highlight_secondary_pane_g1

0x9632,	// (0x000441ed) copy_highlight_secondary_pane_t1

0xa2fb,	// (0x00044eb6) copy_highlight_title_pane_g1

0xa303,	// (0x00044ebe) copy_highlight_title_pane_t1

0xa321,	// (0x00044edc) copy_highlight_digital_pane_g1

0xb569,	// (0x00046124) copy_highlight_digital_pane_t1

0xb4bd,	// (0x00046078) graphic_text_primary_pane_g1

0xb54d,	// (0x00046108) graphic_text_primary_pane_t1

0xb55b,	// (0x00046116) graphic_text_primary_pane_t2

0x0001,

0xf9d3,	// (0x0004a58e) graphic_text_primary_pane_t

0xb529,	// (0x000460e4) graphic_text_primary_small_pane_g1

0xb531,	// (0x000460ec) graphic_text_primary_small_pane_t1

0xb53f,	// (0x000460fa) graphic_text_primary_small_pane_t2

0x0001,

0xf9ce,	// (0x0004a589) graphic_text_primary_small_pane_t

0xb505,	// (0x000460c0) graphic_text_secondary_pane_g1

0xb50d,	// (0x000460c8) graphic_text_secondary_pane_t1

0xb51b,	// (0x000460d6) graphic_text_secondary_pane_t2

0x0001,

0xf9c9,	// (0x0004a584) graphic_text_secondary_pane_t

0xb4e1,	// (0x0004609c) graphic_text_title_pane_g1

0xb4e9,	// (0x000460a4) graphic_text_title_pane_t1

0xb4f7,	// (0x000460b2) graphic_text_title_pane_t2

0x0001,

0xf9c4,	// (0x0004a57f) graphic_text_title_pane_t

0xb4bd,	// (0x00046078) graphic_text_digital_pane_g1

0xb4c5,	// (0x00046080) graphic_text_digital_pane_t1

0xb4d3,	// (0x0004608e) graphic_text_digital_pane_t2

0x0001,

0xf9bf,	// (0x0004a57a) graphic_text_digital_pane_t

0x7f94,	// (0x00042b4f) navi_icon_pane_srt_ParamLimits

0x7f94,	// (0x00042b4f) navi_icon_pane_srt

0x7eb4,	// (0x00042a6f) navi_midp_pane_srt

0x7eb4,	// (0x00042a6f) navi_navi_pane_srt

0x7f94,	// (0x00042b4f) navi_text_pane_srt_ParamLimits

0x7f94,	// (0x00042b4f) navi_text_pane_srt

0xb488,	// (0x00046043) navi_navi_icon_text_pane_srt

0xb490,	// (0x0004604b) navi_navi_pane_srt_g1_ParamLimits

0xb490,	// (0x0004604b) navi_navi_pane_srt_g1

0xb4a2,	// (0x0004605d) navi_navi_pane_srt_g2_ParamLimits

0xb4a2,	// (0x0004605d) navi_navi_pane_srt_g2

0x0001,

0xf9ba,	// (0x0004a575) navi_navi_pane_srt_g_ParamLimits

0xf9ba,	// (0x0004a575) navi_navi_pane_srt_g

0xb4b4,	// (0x0004606f) navi_navi_tabs_pane_srt

0xb488,	// (0x00046043) navi_navi_text_pane_srt

0xb488,	// (0x00046043) navi_navi_volume_pane_srt

0xb479,	// (0x00046034) navi_navi_text_pane_srt_t1

0x6e18,	// (0x000419d3) navi_navi_volume_pane_srt_g1

0x6e20,	// (0x000419db) volume_small_pane_srt_ParamLimits

0x6e20,	// (0x000419db) volume_small_pane_srt

0x619d,	// (0x00040d58) volume_small_pane_srt_g1_ParamLimits

0x619d,	// (0x00040d58) volume_small_pane_srt_g1

0x61ad,	// (0x00040d68) volume_small_pane_srt_g2_ParamLimits

0x61ad,	// (0x00040d68) volume_small_pane_srt_g2

0x61be,	// (0x00040d79) volume_small_pane_srt_g3_ParamLimits

0x61be,	// (0x00040d79) volume_small_pane_srt_g3

0x61cf,	// (0x00040d8a) volume_small_pane_srt_g4_ParamLimits

0x61cf,	// (0x00040d8a) volume_small_pane_srt_g4

0x61e0,	// (0x00040d9b) volume_small_pane_srt_g5_ParamLimits

0x61e0,	// (0x00040d9b) volume_small_pane_srt_g5

0x61f1,	// (0x00040dac) volume_small_pane_srt_g6_ParamLimits

0x61f1,	// (0x00040dac) volume_small_pane_srt_g6

0x6202,	// (0x00040dbd) volume_small_pane_srt_g7_ParamLimits

0x6202,	// (0x00040dbd) volume_small_pane_srt_g7

0x6213,	// (0x00040dce) volume_small_pane_srt_g8_ParamLimits

0x6213,	// (0x00040dce) volume_small_pane_srt_g8

0x6224,	// (0x00040ddf) volume_small_pane_srt_g9_ParamLimits

0x6224,	// (0x00040ddf) volume_small_pane_srt_g9

0x6235,	// (0x00040df0) volume_small_pane_srt_g10_ParamLimits

0x6235,	// (0x00040df0) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0004a31d) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0004a31d) volume_small_pane_srt_g

0x836e,	// (0x00042f29) query_popup_data_pane_cp2

0xb45f,	// (0x0004601a) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb45f,	// (0x0004601a) navi_navi_icon_text_pane_srt_t1

0xa599,	// (0x00045154) navi_tabs_2_long_pane_srt

0xa599,	// (0x00045154) navi_tabs_2_pane_srt

0xa599,	// (0x00045154) navi_tabs_3_long_pane_srt

0xa599,	// (0x00045154) navi_tabs_3_pane_srt

0xa599,	// (0x00045154) navi_tabs_4_pane_srt

0x6df8,	// (0x000419b3) tabs_2_active_pane_srt_ParamLimits

0x6df8,	// (0x000419b3) tabs_2_active_pane_srt

0x6e08,	// (0x000419c3) tabs_2_passive_pane_srt_ParamLimits

0x6e08,	// (0x000419c3) tabs_2_passive_pane_srt

0x97d7,	// (0x00044392) bg_passive_tab_pane_cp1_srt_ParamLimits

0x97d7,	// (0x00044392) bg_passive_tab_pane_cp1_srt

0xb42b,	// (0x00045fe6) bg_passive_tab_pane_g1_cp1_srt

0x90db,	// (0x00043c96) bg_passive_tab_pane_g2_cp1_srt

0xb434,	// (0x00045fef) bg_passive_tab_pane_g3_cp1_srt

0x7f94,	// (0x00042b4f) bg_active_tab_pane_cp1_srt_ParamLimits

0x7f94,	// (0x00042b4f) bg_active_tab_pane_cp1_srt

0xb43d,	// (0x00045ff8) tabs_2_active_pane_srt_g1

0xb445,	// (0x00046000) tabs_2_active_pane_srt_t1_ParamLimits

0xb445,	// (0x00046000) tabs_2_active_pane_srt_t1

0xb42b,	// (0x00045fe6) bg_active_tab_pane_g1_cp1_srt

0x90db,	// (0x00043c96) bg_active_tab_pane_g2_cp1_srt

0xb434,	// (0x00045fef) bg_active_tab_pane_g3_cp1_srt

0x6dc5,	// (0x00041980) tabs_3_active_pane_srt_ParamLimits

0x6dc5,	// (0x00041980) tabs_3_active_pane_srt

0x6dd6,	// (0x00041991) tabs_3_passive_pane_cp_srt_ParamLimits

0x6dd6,	// (0x00041991) tabs_3_passive_pane_cp_srt

0x6de7,	// (0x000419a2) tabs_3_passive_pane_srt_ParamLimits

0x6de7,	// (0x000419a2) tabs_3_passive_pane_srt

0x97d7,	// (0x00044392) bg_passive_tab_pane_cp2_srt_ParamLimits

0x97d7,	// (0x00044392) bg_passive_tab_pane_cp2_srt

0x9641,	// (0x000441fc) bg_passive_tab_pane_g1_cp2_srt

0x90db,	// (0x00043c96) bg_passive_tab_pane_g2_cp2_srt

0x964a,	// (0x00044205) bg_passive_tab_pane_g3_cp2_srt

0x7f94,	// (0x00042b4f) bg_active_tab_pane_cp2_srt_ParamLimits

0x7f94,	// (0x00042b4f) bg_active_tab_pane_cp2_srt

0xb411,	// (0x00045fcc) tabs_3_active_pane_srt_g1

0xb419,	// (0x00045fd4) tabs_3_active_pane_srt_t1_ParamLimits

0xb419,	// (0x00045fd4) tabs_3_active_pane_srt_t1

0x9641,	// (0x000441fc) bg_active_tab_pane_g1_cp2_srt

0x90db,	// (0x00043c96) bg_active_tab_pane_g2_cp2_srt

0x964a,	// (0x00044205) bg_active_tab_pane_g3_cp2_srt

0x6d7d,	// (0x00041938) tabs_4_active_pane_srt_ParamLimits

0x6d7d,	// (0x00041938) tabs_4_active_pane_srt

0x6d8f,	// (0x0004194a) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6d8f,	// (0x0004194a) tabs_4_passive_pane_cp2_srt

0x639a,	// (0x00040f55) aid_size_cell_toolbar

0x89e7,	// (0x000435a2) main_idle_act_pane_ParamLimits

0x6557,	// (0x00041112) popup_large_graphic_colour_window_ParamLimits

0x68be,	// (0x00041479) popup_toolbar_window_ParamLimits

0x68be,	// (0x00041479) popup_toolbar_window

0xb279,	// (0x00045e34) list_single_graphic_2heading_pane_ParamLimits

0xb279,	// (0x00045e34) list_single_graphic_2heading_pane

0x8ba3,	// (0x0004375e) aid_size_cell_apps_grid_lsc_pane

0x8bb5,	// (0x00043770) aid_size_cell_apps_grid_prt_pane

0x97d7,	// (0x00044392) bg_wml_button_pane_cp1_ParamLimits

0x97d7,	// (0x00044392) bg_wml_button_pane_cp1

0x9f8b,	// (0x00044b46) form_midp_field_text_pane_t1_ParamLimits

0x9d55,	// (0x00044910) input_focus_pane_cp050_ParamLimits

0x9fc2,	// (0x00044b7d) list_midp_form_text_pane_ParamLimits

0x9f68,	// (0x00044b23) input_focus_pane_cp051_ParamLimits

0x9f7c,	// (0x00044b37) list_midp_choice_pane_ParamLimits

0x9e0e,	// (0x000449c9) list_single_2graphic_pane_cp3_ParamLimits

0x9e0e,	// (0x000449c9) list_single_2graphic_pane_cp3

0x9e32,	// (0x000449ed) list_single_midp_graphic_pane_ParamLimits

0x9e32,	// (0x000449ed) list_single_midp_graphic_pane

0x5071,	// (0x0003fc2c) list_single_graphic_2heading_pane_g1_ParamLimits

0x5071,	// (0x0003fc2c) list_single_graphic_2heading_pane_g1

0x507d,	// (0x0003fc38) list_single_graphic_2heading_pane_g4_ParamLimits

0x507d,	// (0x0003fc38) list_single_graphic_2heading_pane_g4

0x5089,	// (0x0003fc44) list_single_graphic_2heading_pane_g5_ParamLimits

0x5089,	// (0x0003fc44) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0004a370) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0004a370) list_single_graphic_2heading_pane_g

0x5095,	// (0x0003fc50) list_single_graphic_2heading_pane_t1_ParamLimits

0x5095,	// (0x0003fc50) list_single_graphic_2heading_pane_t1

0x50a9,	// (0x0003fc64) list_single_graphic_2heading_pane_t2_ParamLimits

0x50a9,	// (0x0003fc64) list_single_graphic_2heading_pane_t2

0x50c5,	// (0x0003fc80) list_single_graphic_2heading_pane_t3_ParamLimits

0x50c5,	// (0x0003fc80) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0004a377) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0004a377) list_single_graphic_2heading_pane_t

0x9c1f,	// (0x000447da) bg_popup_sub_pane_cp2

0x9c49,	// (0x00044804) grid_toobar_pane

0x696b,	// (0x00041526) cell_toolbar_pane_ParamLimits

0x696b,	// (0x00041526) cell_toolbar_pane

0x9c85,	// (0x00044840) cell_toolbar_pane_g1_ParamLimits

0x9c85,	// (0x00044840) cell_toolbar_pane_g1

0x9c99,	// (0x00044854) cell_toolbar_pane_g2_ParamLimits

0x9c99,	// (0x00044854) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x0004a385) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x0004a385) cell_toolbar_pane_g

0x9cbb,	// (0x00044876) grid_highlight_pane_cp2_ParamLimits

0x9cbb,	// (0x00044876) grid_highlight_pane_cp2

0x9cd5,	// (0x00044890) toolbar_button_pane

0x9ce1,	// (0x0004489c) toolbar_button_pane_g1

0x9ce9,	// (0x000448a4) toolbar_button_pane_g2

0x9cf1,	// (0x000448ac) toolbar_button_pane_g3

0x9cf9,	// (0x000448b4) toolbar_button_pane_g4

0x9d01,	// (0x000448bc) toolbar_button_pane_g5

0x9d09,	// (0x000448c4) toolbar_button_pane_g6

0x9d11,	// (0x000448cc) toolbar_button_pane_g7

0x9d19,	// (0x000448d4) toolbar_button_pane_g8

0x9d21,	// (0x000448dc) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x0004a38a) toolbar_button_pane_g

0x69af,	// (0x0004156a) list_single_2graphic_pane_g1_cp3_ParamLimits

0x69af,	// (0x0004156a) list_single_2graphic_pane_g1_cp3

0x69bb,	// (0x00041576) list_single_2graphic_pane_g2_cp3_ParamLimits

0x69bb,	// (0x00041576) list_single_2graphic_pane_g2_cp3

0x69cc,	// (0x00041587) list_single_2graphic_pane_g3_cp3

0x6050,	// (0x00040c0b) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6050,	// (0x00040c0b) list_single_2graphic_pane_g4_cp3

0x69d4,	// (0x0004158f) list_single_2graphic_pane_t1_cp3_ParamLimits

0x69d4,	// (0x0004158f) list_single_2graphic_pane_t1_cp3

0xa9e2,	// (0x0004559d) list_single_midp_graphic_pane_g2_ParamLimits

0xa9e2,	// (0x0004559d) list_single_midp_graphic_pane_g2

0x5061,	// (0x0003fc1c) aid_zoom_text_primary

0x63a2,	// (0x00040f5d) aid_zoom_text_secondary

0x96fb,	// (0x000442b6) status_small_pane_g7_ParamLimits

0x96fb,	// (0x000442b6) status_small_pane_g7

0x971e,	// (0x000442d9) status_small_pane_t1_ParamLimits

0x7ecb,	// (0x00042a86) title_pane_g2

0x0003,

0xf54e,	// (0x0004a109) title_pane_g

0x8412,	// (0x00042fcd) aid_size_cell_colour_1_pane_ParamLimits

0x8412,	// (0x00042fcd) aid_size_cell_colour_1_pane

0x8426,	// (0x00042fe1) aid_size_cell_colour_2_pane_ParamLimits

0x8426,	// (0x00042fe1) aid_size_cell_colour_2_pane

0x843a,	// (0x00042ff5) aid_size_cell_colour_3_pane_ParamLimits

0x843a,	// (0x00042ff5) aid_size_cell_colour_3_pane

0x844e,	// (0x00043009) aid_size_cell_colour_4_pane_ParamLimits

0x844e,	// (0x00043009) aid_size_cell_colour_4_pane

0x5dde,	// (0x00040999) title_pane_stacon_g1_ParamLimits

0x5dde,	// (0x00040999) title_pane_stacon_g1

0xa380,	// (0x00044f3b) popup_note_wait_window_g3_ParamLimits

0xa380,	// (0x00044f3b) popup_note_wait_window_g3

0xa3f6,	// (0x00044fb1) popup_note_wait_window_t5_ParamLimits

0xa3f6,	// (0x00044fb1) popup_note_wait_window_t5

0x7eb4,	// (0x00042a6f) main_feb_china_hwr_fs_writing_pane

0x643a,	// (0x00040ff5) popup_feb_china_hwr_fs_window_ParamLimits

0x643a,	// (0x00040ff5) popup_feb_china_hwr_fs_window

0x6a1e,	// (0x000415d9) aid_size_cell_hwr_fs_ParamLimits

0x6a1e,	// (0x000415d9) aid_size_cell_hwr_fs

0x9d55,	// (0x00044910) bg_popup_sub_pane_cp3_ParamLimits

0x9d55,	// (0x00044910) bg_popup_sub_pane_cp3

0x6a33,	// (0x000415ee) grid_hwr_fs_pane_ParamLimits

0x6a33,	// (0x000415ee) grid_hwr_fs_pane

0x6a4b,	// (0x00041606) linegrid_hwr_fs_pane_ParamLimits

0x6a4b,	// (0x00041606) linegrid_hwr_fs_pane

0x6a5b,	// (0x00041616) cell_hwr_fs_pane_ParamLimits

0x6a5b,	// (0x00041616) cell_hwr_fs_pane

0x9d61,	// (0x0004491c) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d61,	// (0x0004491c) linegrid_hwr_fs_pane_g1

0x9d6d,	// (0x00044928) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d6d,	// (0x00044928) linegrid_hwr_fs_pane_g2

0x9d7f,	// (0x0004493a) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d7f,	// (0x0004493a) linegrid_hwr_fs_pane_g3

0x6a7d,	// (0x00041638) linegrid_hwr_fs_pane_g4_ParamLimits

0x6a7d,	// (0x00041638) linegrid_hwr_fs_pane_g4

0x6a97,	// (0x00041652) linegrid_hwr_fs_pane_g5_ParamLimits

0x6a97,	// (0x00041652) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fa,	// (0x0004a3b5) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x0004a3b5) linegrid_hwr_fs_pane_g

0x9d8b,	// (0x00044946) cell_hwr_fs_pane_g1_ParamLimits

0x9d8b,	// (0x00044946) cell_hwr_fs_pane_g1

0x9b56,	// (0x00044711) cell_hwr_fs_pane_g2_ParamLimits

0x9b56,	// (0x00044711) cell_hwr_fs_pane_g2

0x9da1,	// (0x0004495c) cell_hwr_fs_pane_g3_ParamLimits

0x9da1,	// (0x0004495c) cell_hwr_fs_pane_g3

0x9dae,	// (0x00044969) cell_hwr_fs_pane_g4_ParamLimits

0x9dae,	// (0x00044969) cell_hwr_fs_pane_g4

0x0003,

0xf805,	// (0x0004a3c0) cell_hwr_fs_pane_g_ParamLimits

0xf805,	// (0x0004a3c0) cell_hwr_fs_pane_g

0x6aad,	// (0x00041668) cell_hwr_fs_pane_t1

0x7eb4,	// (0x00042a6f) grid_highlight_pane_cp6

0x7eb4,	// (0x00042a6f) main_idle_act2_pane

0x895a,	// (0x00043515) aid_inside_area_popup_secondary

0xaa39,	// (0x000455f4) aid_inside_area_window_primary_ParamLimits

0xaa39,	// (0x000455f4) aid_inside_area_window_primary

0xb578,	// (0x00046133) ai2_news_ticker_pane

0xb580,	// (0x0004613b) aid_size_cell_ai1_link_ParamLimits

0xb580,	// (0x0004613b) aid_size_cell_ai1_link

0xb59a,	// (0x00046155) popup_ai2_data_window_ParamLimits

0xb59a,	// (0x00046155) popup_ai2_data_window

0xb5b0,	// (0x0004616b) popup_ai2_link_window_ParamLimits

0xb5b0,	// (0x0004616b) popup_ai2_link_window

0x9d55,	// (0x00044910) bg_popup_sub_pane_cp4_ParamLimits

0x9d55,	// (0x00044910) bg_popup_sub_pane_cp4

0xb5c4,	// (0x0004617f) grid_ai2_link_pane_ParamLimits

0xb5c4,	// (0x0004617f) grid_ai2_link_pane

0xb5db,	// (0x00046196) popup_ai2_link_window_g1_ParamLimits

0xb5db,	// (0x00046196) popup_ai2_link_window_g1

0xb5e7,	// (0x000461a2) popup_ai2_link_window_g2_ParamLimits

0xb5e7,	// (0x000461a2) popup_ai2_link_window_g2

0x0001,

0xf9d8,	// (0x0004a593) popup_ai2_link_window_g_ParamLimits

0xf9d8,	// (0x0004a593) popup_ai2_link_window_g

0xb5f6,	// (0x000461b1) ai2_mp_button_pane

0xb5fe,	// (0x000461b9) ai2_mp_volume_pane

0x9f68,	// (0x00044b23) bg_popup_sub_pane_cp5_ParamLimits

0x9f68,	// (0x00044b23) bg_popup_sub_pane_cp5

0xb606,	// (0x000461c1) heading_ai2_gene_pane_ParamLimits

0xb606,	// (0x000461c1) heading_ai2_gene_pane

0xb612,	// (0x000461cd) list_ai2_gene_pane_ParamLimits

0xb612,	// (0x000461cd) list_ai2_gene_pane

0xb65a,	// (0x00046215) cell_ai2_link_pane_ParamLimits

0xb65a,	// (0x00046215) cell_ai2_link_pane

0xb670,	// (0x0004622b) cell_ai2_link_pane_g1

0x7eb4,	// (0x00042a6f) grid_highlight_pane_cp7

0x6e35,	// (0x000419f0) ai2_mp_volume_pane_g1

0xb740,	// (0x000462fb) ai2_mp_volume_pane_g2

0xb6b5,	// (0x00046270) list_ai2_gene_pane_t1

0xb748,	// (0x00046303) ai2_mp_volume_pane_g3

0x0002,

0xf9f1,	// (0x0004a5ac) ai2_mp_volume_pane_g

0x6e3d,	// (0x000419f8) volume_small_pane_cp3

0xb750,	// (0x0004630b) aid_size_cell_ai2_button

0xb758,	// (0x00046313) grid_ai2_button_pane

0xb761,	// (0x0004631c) cell_ai2_button_pane_ParamLimits

0xb761,	// (0x0004631c) cell_ai2_button_pane

0x7eaa,	// (0x00042a65) cell_ai2_button_pane_g1

0x7eb4,	// (0x00042a6f) grid_highlight_pane_cp8

0xb700,	// (0x000462bb) ai2_gene_pane_t1_ParamLimits

0xb700,	// (0x000462bb) ai2_gene_pane_t1

0x6390,	// (0x00040f4b) aid_height_parent_landscape

0xb0b0,	// (0x00045c6b) aid_height_set_list

0xb0c1,	// (0x00045c7c) aid_size_parent

0xb39f,	// (0x00045f5a) aid_size_cell_graphic_pane_ParamLimits

0xb622,	// (0x000461dd) popup_ai2_data_window_g1_ParamLimits

0xb622,	// (0x000461dd) popup_ai2_data_window_g1

0xb62e,	// (0x000461e9) ai2_news_ticker_pane_g1

0xb636,	// (0x000461f1) ai2_news_ticker_pane_g2

0x0001,

0xf9dd,	// (0x0004a598) ai2_news_ticker_pane_g

0xb63e,	// (0x000461f9) ai2_news_ticker_pane_t1

0xb64c,	// (0x00046207) ai2_news_ticker_pane_t2

0x0001,

0xf9e2,	// (0x0004a59d) ai2_news_ticker_pane_t

0xb679,	// (0x00046234) heading_ai2_gene_pane_g1

0xb681,	// (0x0004623c) heading_ai2_gene_pane_t1_ParamLimits

0xb681,	// (0x0004623c) heading_ai2_gene_pane_t1

0xb696,	// (0x00046251) list_highlight_pane_cp6

0xb69e,	// (0x00046259) ai2_gene_pane_ParamLimits

0xb69e,	// (0x00046259) ai2_gene_pane

0xb6c3,	// (0x0004627e) list_ai2_gene_pane_t2

0x0001,

0xf9e7,	// (0x0004a5a2) list_ai2_gene_pane_t

0xb6d1,	// (0x0004628c) list_highlight_pane_cp8_ParamLimits

0xb6d1,	// (0x0004628c) list_highlight_pane_cp8

0xb6e2,	// (0x0004629d) ai2_gene_pane_g1_ParamLimits

0xb6e2,	// (0x0004629d) ai2_gene_pane_g1

0xb6f4,	// (0x000462af) ai2_gene_pane_g2_ParamLimits

0xb6f4,	// (0x000462af) ai2_gene_pane_g2

0x0001,

0xf9ec,	// (0x0004a5a7) ai2_gene_pane_g_ParamLimits

0xf9ec,	// (0x0004a5a7) ai2_gene_pane_g

0x8799,	// (0x00043354) scroll_pane_cp12

0x634f,	// (0x00040f0a) control_pane_t3_ParamLimits

0x634f,	// (0x00040f0a) control_pane_t3

0x970f,	// (0x000442ca) status_small_pane_g8_ParamLimits

0x970f,	// (0x000442ca) status_small_pane_g8

0x6520,	// (0x000410db) popup_find_window_ParamLimits

0x6735,	// (0x000412f0) popup_note_image_window_ParamLimits

0x50dd,	// (0x0003fc98) list_double2_graphic_pane_vc_g1_ParamLimits

0x50dd,	// (0x0003fc98) list_double2_graphic_pane_vc_g1

0x93d2,	// (0x00043f8d) list_double2_graphic_pane_vc_g2_ParamLimits

0x93d2,	// (0x00043f8d) list_double2_graphic_pane_vc_g2

0x699b,	// (0x00041556) list_double2_graphic_pane_vc_g3_ParamLimits

0x699b,	// (0x00041556) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0004a37e) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004a37e) list_double2_graphic_pane_vc_g

0x50e9,	// (0x0003fca4) list_double2_graphic_pane_vc_t1_ParamLimits

0x50e9,	// (0x0003fca4) list_double2_graphic_pane_vc_t1

0x93d2,	// (0x00043f8d) list_single_heading_pane_vc_g1_ParamLimits

0x93d2,	// (0x00043f8d) list_single_heading_pane_vc_g1

0x699b,	// (0x00041556) list_single_heading_pane_vc_g2_ParamLimits

0x699b,	// (0x00041556) list_single_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0004a39f) list_single_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0004a39f) list_single_heading_pane_vc_g

0x50ff,	// (0x0003fcba) list_single_heading_pane_vc_t1_ParamLimits

0x50ff,	// (0x0003fcba) list_single_heading_pane_vc_t1

0x5117,	// (0x0003fcd2) list_single_heading_pane_vc_t2_ParamLimits

0x5117,	// (0x0003fcd2) list_single_heading_pane_vc_t2

0x0001,

0xf7e9,	// (0x0004a3a4) list_single_heading_pane_vc_t_ParamLimits

0xf7e9,	// (0x0004a3a4) list_single_heading_pane_vc_t

0x6a06,	// (0x000415c1) list_setting_number_pane_vc_g1_ParamLimits

0x6a06,	// (0x000415c1) list_setting_number_pane_vc_g1

0x6a12,	// (0x000415cd) list_setting_number_pane_vc_g2_ParamLimits

0x6a12,	// (0x000415cd) list_setting_number_pane_vc_g2

0x0001,

0xf7ee,	// (0x0004a3a9) list_setting_number_pane_vc_g_ParamLimits

0xf7ee,	// (0x0004a3a9) list_setting_number_pane_vc_g

0x5133,	// (0x0003fcee) list_setting_number_pane_vc_t1_ParamLimits

0x5133,	// (0x0003fcee) list_setting_number_pane_vc_t1

0x5147,	// (0x0003fd02) list_setting_number_pane_vc_t2_ParamLimits

0x5147,	// (0x0003fd02) list_setting_number_pane_vc_t2

0x5163,	// (0x0003fd1e) list_setting_number_pane_vc_t3_ParamLimits

0x5163,	// (0x0003fd1e) list_setting_number_pane_vc_t3

0x0002,

0xf7f3,	// (0x0004a3ae) list_setting_number_pane_vc_t_ParamLimits

0xf7f3,	// (0x0004a3ae) list_setting_number_pane_vc_t

0x518f,	// (0x0003fd4a) set_value_pane_vc_ParamLimits

0x518f,	// (0x0003fd4a) set_value_pane_vc

0xb279,	// (0x00045e34) list_double2_graphic_pane_vc_ParamLimits

0xb279,	// (0x00045e34) list_double2_graphic_pane_vc

0x5247,	// (0x0003fe02) list_double2_large_graphic_pane_vc_ParamLimits

0x5247,	// (0x0003fe02) list_double2_large_graphic_pane_vc

0xb279,	// (0x00045e34) list_double2_pane_vc_ParamLimits

0xb279,	// (0x00045e34) list_double2_pane_vc

0xb279,	// (0x00045e34) list_double_graphic_heading_pane_vc_ParamLimits

0xb279,	// (0x00045e34) list_double_graphic_heading_pane_vc

0xb279,	// (0x00045e34) list_double_graphic_pane_vc_ParamLimits

0xb279,	// (0x00045e34) list_double_graphic_pane_vc

0xb279,	// (0x00045e34) list_double_heading_pane_vc_ParamLimits

0xb279,	// (0x00045e34) list_double_heading_pane_vc

0x5258,	// (0x0003fe13) list_double_large_graphic_pane_vc_ParamLimits

0x5258,	// (0x0003fe13) list_double_large_graphic_pane_vc

0xb279,	// (0x00045e34) list_double_number_pane_vc_ParamLimits

0xb279,	// (0x00045e34) list_double_number_pane_vc

0xb279,	// (0x00045e34) list_double_pane_vc_ParamLimits

0xb279,	// (0x00045e34) list_double_pane_vc

0xb279,	// (0x00045e34) list_double_time_pane_vc_ParamLimits

0xb279,	// (0x00045e34) list_double_time_pane_vc

0xb279,	// (0x00045e34) list_setting_number_pane_vc_ParamLimits

0xb279,	// (0x00045e34) list_setting_number_pane_vc

0xb279,	// (0x00045e34) list_setting_pane_vc_ParamLimits

0xb279,	// (0x00045e34) list_setting_pane_vc

0xb279,	// (0x00045e34) list_single_graphic_heading_pane_vc_ParamLimits

0xb279,	// (0x00045e34) list_single_graphic_heading_pane_vc

0xb279,	// (0x00045e34) list_single_heading_pane_vc_ParamLimits

0xb279,	// (0x00045e34) list_single_heading_pane_vc

0x6d02,	// (0x000418bd) list_single_number_heading_pane_vc_ParamLimits

0x6d02,	// (0x000418bd) list_single_number_heading_pane_vc

0x50dd,	// (0x0003fc98) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x50dd,	// (0x0003fc98) list_double_graphic_heading_pane_vc_g1

0x93d2,	// (0x00043f8d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x93d2,	// (0x00043f8d) list_double_graphic_heading_pane_vc_g2

0x699b,	// (0x00041556) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x699b,	// (0x00041556) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x0004a37e) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004a37e) list_double_graphic_heading_pane_vc_g

0x52a7,	// (0x0003fe62) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x52a7,	// (0x0003fe62) list_double_graphic_heading_pane_vc_t1

0x52c3,	// (0x0003fe7e) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x52c3,	// (0x0003fe7e) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f8,	// (0x0004a5b3) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f8,	// (0x0004a5b3) list_double_graphic_heading_pane_vc_t

0x6a06,	// (0x000415c1) list_setting_pane_vc_g1_ParamLimits

0x6a06,	// (0x000415c1) list_setting_pane_vc_g1

0x6a12,	// (0x000415cd) list_setting_pane_vc_g2_ParamLimits

0x6a12,	// (0x000415cd) list_setting_pane_vc_g2

0x0001,

0xf7ee,	// (0x0004a3a9) list_setting_pane_vc_g_ParamLimits

0xf7ee,	// (0x0004a3a9) list_setting_pane_vc_g

0x52e1,	// (0x0003fe9c) list_setting_pane_vc_t1_ParamLimits

0x52e1,	// (0x0003fe9c) list_setting_pane_vc_t1

0x52fd,	// (0x0003feb8) list_setting_pane_vc_t2_ParamLimits

0x52fd,	// (0x0003feb8) list_setting_pane_vc_t2

0x0001,

0xfa26,	// (0x0004a5e1) list_setting_pane_vc_t_ParamLimits

0xfa26,	// (0x0004a5e1) list_setting_pane_vc_t

0x518f,	// (0x0003fd4a) set_value_pane_cp_vc_ParamLimits

0x518f,	// (0x0003fd4a) set_value_pane_cp_vc

0x93d2,	// (0x00043f8d) list_single_number_heading_pane_vc_g1_ParamLimits

0x93d2,	// (0x00043f8d) list_single_number_heading_pane_vc_g1

0x699b,	// (0x00041556) list_single_number_heading_pane_vc_g2_ParamLimits

0x699b,	// (0x00041556) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0004a39f) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0004a39f) list_single_number_heading_pane_vc_g

0x50ff,	// (0x0003fcba) list_single_number_heading_pane_vc_t1_ParamLimits

0x50ff,	// (0x0003fcba) list_single_number_heading_pane_vc_t1

0x5319,	// (0x0003fed4) list_single_number_heading_pane_vc_t2_ParamLimits

0x5319,	// (0x0003fed4) list_single_number_heading_pane_vc_t2

0x532d,	// (0x0003fee8) list_single_number_heading_pane_vc_t3_ParamLimits

0x532d,	// (0x0003fee8) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2b,	// (0x0004a5e6) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2b,	// (0x0004a5e6) list_single_number_heading_pane_vc_t

0x50dd,	// (0x0003fc98) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x50dd,	// (0x0003fc98) list_single_graphic_heading_pane_vc_g1

0x93d2,	// (0x00043f8d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x93d2,	// (0x00043f8d) list_single_graphic_heading_pane_vc_g4

0x699b,	// (0x00041556) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x699b,	// (0x00041556) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0004a37e) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004a37e) list_single_graphic_heading_pane_vc_g

0x50ff,	// (0x0003fcba) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x50ff,	// (0x0003fcba) list_single_graphic_heading_pane_vc_t1

0x533f,	// (0x0003fefa) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x533f,	// (0x0003fefa) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa32,	// (0x0004a5ed) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa32,	// (0x0004a5ed) list_single_graphic_heading_pane_vc_t

0x93d2,	// (0x00043f8d) list_double2_pane_vc_g1_ParamLimits

0x93d2,	// (0x00043f8d) list_double2_pane_vc_g1

0x699b,	// (0x00041556) list_double2_pane_vc_g2_ParamLimits

0x699b,	// (0x00041556) list_double2_pane_vc_g2

0x0001,

0xf7e4,	// (0x0004a39f) list_double2_pane_vc_g_ParamLimits

0xf7e4,	// (0x0004a39f) list_double2_pane_vc_g

0x5353,	// (0x0003ff0e) list_double2_pane_vc_t1_ParamLimits

0x5353,	// (0x0003ff0e) list_double2_pane_vc_t1

0x5369,	// (0x0003ff24) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5369,	// (0x0003ff24) list_double2_large_graphic_pane_vc_g1

0x5375,	// (0x0003ff30) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5375,	// (0x0003ff30) list_double2_large_graphic_pane_vc_g2

0x5381,	// (0x0003ff3c) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5381,	// (0x0003ff3c) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa37,	// (0x0004a5f2) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa37,	// (0x0004a5f2) list_double2_large_graphic_pane_vc_g

0x538d,	// (0x0003ff48) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x538d,	// (0x0003ff48) list_double2_large_graphic_pane_vc_t1

0x6e46,	// (0x00041a01) list_double_time_pane_vc_g1_ParamLimits

0x6e46,	// (0x00041a01) list_double_time_pane_vc_g1

0x6e52,	// (0x00041a0d) list_double_time_pane_vc_g2_ParamLimits

0x6e52,	// (0x00041a0d) list_double_time_pane_vc_g2

0x0001,

0xfa3e,	// (0x0004a5f9) list_double_time_pane_vc_g_ParamLimits

0xfa3e,	// (0x0004a5f9) list_double_time_pane_vc_g

0x53a3,	// (0x0003ff5e) list_double_time_pane_vc_t1_ParamLimits

0x53a3,	// (0x0003ff5e) list_double_time_pane_vc_t1

0x53c7,	// (0x0003ff82) list_double_time_pane_vc_t2_ParamLimits

0x53c7,	// (0x0003ff82) list_double_time_pane_vc_t2

0x5416,	// (0x0003ffd1) list_double_time_pane_vc_t3_ParamLimits

0x5416,	// (0x0003ffd1) list_double_time_pane_vc_t3

0x5428,	// (0x0003ffe3) list_double_time_pane_vc_t4_ParamLimits

0x5428,	// (0x0003ffe3) list_double_time_pane_vc_t4

0x0003,

0xfa43,	// (0x0004a5fe) list_double_time_pane_vc_t_ParamLimits

0xfa43,	// (0x0004a5fe) list_double_time_pane_vc_t

0x93d2,	// (0x00043f8d) list_double_pane_vc_g1_ParamLimits

0x93d2,	// (0x00043f8d) list_double_pane_vc_g1

0x699b,	// (0x00041556) list_double_pane_vc_g2_ParamLimits

0x699b,	// (0x00041556) list_double_pane_vc_g2

0x0001,

0xf7e4,	// (0x0004a39f) list_double_pane_vc_g_ParamLimits

0xf7e4,	// (0x0004a39f) list_double_pane_vc_g

0x543c,	// (0x0003fff7) list_double_pane_vc_t1_ParamLimits

0x543c,	// (0x0003fff7) list_double_pane_vc_t1

0x5450,	// (0x0004000b) list_double_pane_vc_t2_ParamLimits

0x5450,	// (0x0004000b) list_double_pane_vc_t2

0x0001,

0xfa4c,	// (0x0004a607) list_double_pane_vc_t_ParamLimits

0xfa4c,	// (0x0004a607) list_double_pane_vc_t

0x93d2,	// (0x00043f8d) list_double_number_pane_vc_g1_ParamLimits

0x93d2,	// (0x00043f8d) list_double_number_pane_vc_g1

0x699b,	// (0x00041556) list_double_number_pane_vc_g2_ParamLimits

0x699b,	// (0x00041556) list_double_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0004a39f) list_double_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0004a39f) list_double_number_pane_vc_g

0x5468,	// (0x00040023) list_double_number_pane_vc_t1_ParamLimits

0x5468,	// (0x00040023) list_double_number_pane_vc_t1

0x547a,	// (0x00040035) list_double_number_pane_vc_t2_ParamLimits

0x547a,	// (0x00040035) list_double_number_pane_vc_t2

0x548e,	// (0x00040049) list_double_number_pane_vc_t3_ParamLimits

0x548e,	// (0x00040049) list_double_number_pane_vc_t3

0x0002,

0xfa51,	// (0x0004a60c) list_double_number_pane_vc_t_ParamLimits

0xfa51,	// (0x0004a60c) list_double_number_pane_vc_t

0x54a6,	// (0x00040061) list_double_large_graphic_pane_vc_g1_ParamLimits

0x54a6,	// (0x00040061) list_double_large_graphic_pane_vc_g1

0x54c8,	// (0x00040083) list_double_large_graphic_pane_vc_g2_ParamLimits

0x54c8,	// (0x00040083) list_double_large_graphic_pane_vc_g2

0x54dc,	// (0x00040097) list_double_large_graphic_pane_vc_g3_ParamLimits

0x54dc,	// (0x00040097) list_double_large_graphic_pane_vc_g3

0x54eb,	// (0x000400a6) list_double_large_graphic_pane_vc_g4_ParamLimits

0x54eb,	// (0x000400a6) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa58,	// (0x0004a613) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa58,	// (0x0004a613) list_double_large_graphic_pane_vc_g

0x54f7,	// (0x000400b2) list_double_large_graphic_pane_vc_t1_ParamLimits

0x54f7,	// (0x000400b2) list_double_large_graphic_pane_vc_t1

0x5513,	// (0x000400ce) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5513,	// (0x000400ce) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa61,	// (0x0004a61c) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa61,	// (0x0004a61c) list_double_large_graphic_pane_vc_t

0x93d2,	// (0x00043f8d) list_double_heading_pane_vc_g1_ParamLimits

0x93d2,	// (0x00043f8d) list_double_heading_pane_vc_g1

0x699b,	// (0x00041556) list_double_heading_pane_vc_g2_ParamLimits

0x699b,	// (0x00041556) list_double_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0004a39f) list_double_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0004a39f) list_double_heading_pane_vc_g

0x5535,	// (0x000400f0) list_double_heading_pane_vc_t1_ParamLimits

0x5535,	// (0x000400f0) list_double_heading_pane_vc_t1

0x50ff,	// (0x0003fcba) list_double_heading_pane_vc_t2_ParamLimits

0x50ff,	// (0x0003fcba) list_double_heading_pane_vc_t2

0x0001,

0xfa66,	// (0x0004a621) list_double_heading_pane_vc_t_ParamLimits

0xfa66,	// (0x0004a621) list_double_heading_pane_vc_t

0x5549,	// (0x00040104) list_double_graphic_pane_vc_g1_ParamLimits

0x5549,	// (0x00040104) list_double_graphic_pane_vc_g1

0x6e5e,	// (0x00041a19) list_double_graphic_pane_vc_g2_ParamLimits

0x6e5e,	// (0x00041a19) list_double_graphic_pane_vc_g2

0x93d2,	// (0x00043f8d) list_double_graphic_pane_vc_g3_ParamLimits

0x93d2,	// (0x00043f8d) list_double_graphic_pane_vc_g3

0x0003,

0xfa6b,	// (0x0004a626) list_double_graphic_pane_vc_g_ParamLimits

0xfa6b,	// (0x0004a626) list_double_graphic_pane_vc_g

0x5555,	// (0x00040110) list_double_graphic_pane_vc_t1_ParamLimits

0x5555,	// (0x00040110) list_double_graphic_pane_vc_t1

0x557f,	// (0x0004013a) list_double_graphic_pane_vc_t2_ParamLimits

0x557f,	// (0x0004013a) list_double_graphic_pane_vc_t2

0x0001,

0xfa74,	// (0x0004a62f) list_double_graphic_pane_vc_t_ParamLimits

0xfa74,	// (0x0004a62f) list_double_graphic_pane_vc_t

0x588f,	// (0x0004044a) aid_size_cell_fastswap

0x5897,	// (0x00040452) aid_size_cell_touch_ParamLimits

0x5897,	// (0x00040452) aid_size_cell_touch

0x5af2,	// (0x000406ad) popup_fast_swap_wide_window_ParamLimits

0x5af2,	// (0x000406ad) popup_fast_swap_wide_window

0x5c06,	// (0x000407c1) touch_pane_ParamLimits

0x5c06,	// (0x000407c1) touch_pane

0x87fb,	// (0x000433b6) button_value_adjust_pane_cp2

0x4d88,	// (0x0003f943) button_value_adjust_pane_cp4

0x4dac,	// (0x0003f967) form_field_data_pane_cp2

0x4dcd,	// (0x0003f988) form_field_data_wide_pane_cp2

0x8c70,	// (0x0004382b) bg_scroll_pane_ParamLimits

0x5f40,	// (0x00040afb) scroll_handle_pane_ParamLimits

0x5f54,	// (0x00040b0f) scroll_sc2_down_pane_ParamLimits

0x5f54,	// (0x00040b0f) scroll_sc2_down_pane

0x8ca1,	// (0x0004385c) scroll_sc2_up_pane_ParamLimits

0x8ca1,	// (0x0004385c) scroll_sc2_up_pane

0xbe31,	// (0x000469ec) grid_wheel_folder_pane_g1_ParamLimits

0xbe31,	// (0x000469ec) grid_wheel_folder_pane_g1

0x6135,	// (0x00040cf0) clock_nsta_pane_cp2_ParamLimits

0x6135,	// (0x00040cf0) clock_nsta_pane_cp2

0x89e7,	// (0x000435a2) listscroll_midp_pane_ParamLimits

0x94a1,	// (0x0004405c) midp_canvas_pane

0x9789,	// (0x00044344) nsta_clock_indic_pane

0x97bd,	// (0x00044378) listscroll_form_pane_vc

0x97c5,	// (0x00044380) listscroll_set_pane_vc_ParamLimits

0x97c5,	// (0x00044380) listscroll_set_pane_vc

0x98ca,	// (0x00044485) clock_nsta_pane

0x993f,	// (0x000444fa) indicator_nsta_pane

0x9c1f,	// (0x000447da) bg_popup_sub_pane_cp2_ParamLimits

0x9c33,	// (0x000447ee) find_pane_cp2_ParamLimits

0x9c33,	// (0x000447ee) find_pane_cp2

0x9c49,	// (0x00044804) grid_toobar_pane_ParamLimits

0x9d29,	// (0x000448e4) list_form_gen_pane_vc_ParamLimits

0x9d29,	// (0x000448e4) list_form_gen_pane_vc

0x9d3f,	// (0x000448fa) scroll_pane_cp8_vc_ParamLimits

0x9d3f,	// (0x000448fa) scroll_pane_cp8_vc

0x9dbb,	// (0x00044976) data_form_wide_pane_vc_ParamLimits

0x9dbb,	// (0x00044976) data_form_wide_pane_vc

0x9dc7,	// (0x00044982) form_field_data_wide_pane_vc_g1

0x9dcf,	// (0x0004498a) form_field_data_wide_pane_vc_t1_ParamLimits

0x9dcf,	// (0x0004498a) form_field_data_wide_pane_vc_t1

0x880f,	// (0x000433ca) input_focus_pane_cp6_vc_ParamLimits

0x880f,	// (0x000433ca) input_focus_pane_cp6_vc

0xa0fb,	// (0x00044cb6) list_midp_pane_ParamLimits

0xa107,	// (0x00044cc2) scroll_pane_cp16_ParamLimits

0xa107,	// (0x00044cc2) scroll_pane_cp16

0xa155,	// (0x00044d10) button_value_adjust_pane_ParamLimits

0xa155,	// (0x00044d10) button_value_adjust_pane

0xb0d3,	// (0x00045c8e) button_value_adjust_pane_cp6_ParamLimits

0xb0d3,	// (0x00045c8e) button_value_adjust_pane_cp6

0xb1fd,	// (0x00045db8) settings_code_pane_cp_ParamLimits

0xb1fd,	// (0x00045db8) settings_code_pane_cp

0x7eaa,	// (0x00042a65) cell_touch_pane_g1

0x7eaa,	// (0x00042a65) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0004a2c3) cell_touch_pane_g

0xb773,	// (0x0004632e) cell_touch_pane_cp_ParamLimits

0xb773,	// (0x0004632e) cell_touch_pane_cp

0xb783,	// (0x0004633e) cell_touch_pane_ParamLimits

0xb783,	// (0x0004633e) cell_touch_pane

0x7eaa,	// (0x00042a65) scroll_sc2_down_pane_g1

0x7eaa,	// (0x00042a65) scroll_sc2_up_pane_g1

0x7eb4,	// (0x00042a6f) bg_set_opt_pane_cp4_vc

0xb795,	// (0x00046350) list_set_graphic_pane_vc_g1_ParamLimits

0xb795,	// (0x00046350) list_set_graphic_pane_vc_g1

0xb7a1,	// (0x0004635c) list_set_graphic_pane_vc_g2_ParamLimits

0xb7a1,	// (0x0004635c) list_set_graphic_pane_vc_g2

0x0001,

0xf9fd,	// (0x0004a5b8) list_set_graphic_pane_vc_g_ParamLimits

0xf9fd,	// (0x0004a5b8) list_set_graphic_pane_vc_g

0xb7ad,	// (0x00046368) text_primary_small_cp13_vc_ParamLimits

0xb7ad,	// (0x00046368) text_primary_small_cp13_vc

0xb7c5,	// (0x00046380) list_set_graphic_pane_vc_ParamLimits

0xb7c5,	// (0x00046380) list_set_graphic_pane_vc

0x7eb4,	// (0x00042a6f) input_focus_pane_cp2_vc

0x7eaa,	// (0x00042a65) setting_code_pane_vc_g1

0x7fdf,	// (0x00042b9a) setting_code_pane_vc_t1

0xb7d8,	// (0x00046393) set_text_pane_vc_t1_ParamLimits

0xb7d8,	// (0x00046393) set_text_pane_vc_t1

0x7eb4,	// (0x00042a6f) input_focus_pane_cp1_vc

0xb7f4,	// (0x000463af) list_set_text_pane_vc

0x7eaa,	// (0x00042a65) setting_text_pane_vc_g1

0x7eb4,	// (0x00042a6f) bg_set_opt_pane_cp2_vc

0x7fd6,	// (0x00042b91) setting_slider_graphic_pane_vc_g1

0xb7fe,	// (0x000463b9) setting_slider_graphic_pane_vc_t1

0xb80e,	// (0x000463c9) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa02,	// (0x0004a5bd) setting_slider_graphic_pane_vc_t

0xb81e,	// (0x000463d9) slider_set_pane_cp_vc

0xb826,	// (0x000463e1) slider_set_pane_vc_g1

0xb82f,	// (0x000463ea) slider_set_pane_vc_g2

0x0006,

0xfa07,	// (0x0004a5c2) slider_set_pane_vc_g

0x885e,	// (0x00043419) set_opt_bg_pane_g1_copy1

0x8866,	// (0x00043421) set_opt_bg_pane_g2_copy1

0xb85b,	// (0x00046416) set_opt_bg_pane_g3_copy1

0x8876,	// (0x00043431) set_opt_bg_pane_g4_copy1

0x887e,	// (0x00043439) set_opt_bg_pane_g5_copy1

0x8886,	// (0x00043441) set_opt_bg_pane_g6_copy1

0xb865,	// (0x00046420) set_opt_bg_pane_g7_copy1

0xb86d,	// (0x00046428) set_opt_bg_pane_g8_copy1

0xb877,	// (0x00046432) set_opt_bg_pane_g9_copy1

0x7eb4,	// (0x00042a6f) bg_set_opt_pane_cp_vc

0xb881,	// (0x0004643c) setting_slider_pane_vc_t1

0xb890,	// (0x0004644b) setting_slider_pane_vc_t2

0xb8a0,	// (0x0004645b) setting_slider_pane_vc_t3

0x0002,

0xfa16,	// (0x0004a5d1) setting_slider_pane_vc_t

0xb8b0,	// (0x0004646b) slider_set_pane_vc

0x6abb,	// (0x00041676) volume_set_pane_vc_g1

0x6ac4,	// (0x0004167f) volume_set_pane_vc_g2

0x6acd,	// (0x00041688) volume_set_pane_vc_g3

0x6ad6,	// (0x00041691) volume_set_pane_vc_g4

0x6adf,	// (0x0004169a) volume_set_pane_vc_g5

0x6ae8,	// (0x000416a3) volume_set_pane_vc_g6

0x6af1,	// (0x000416ac) volume_set_pane_vc_g7

0x6afa,	// (0x000416b5) volume_set_pane_vc_g8

0x6b03,	// (0x000416be) volume_set_pane_vc_g9

0x6b0c,	// (0x000416c7) volume_set_pane_vc_g10

0x0009,

0xf8bb,	// (0x0004a476) volume_set_pane_vc_g

0xb8b8,	// (0x00046473) volume_set_pane_vc

0xb8c0,	// (0x0004647b) button_value_adjust_pane_cp1_vc

0xb8ca,	// (0x00046485) list_highlight_pane_cp2_vc

0xb8d3,	// (0x0004648e) list_set_pane_vc_ParamLimits

0xb8d3,	// (0x0004648e) list_set_pane_vc

0xb931,	// (0x000464ec) main_pane_set_vc_t1_ParamLimits

0xb931,	// (0x000464ec) main_pane_set_vc_t1

0xb946,	// (0x00046501) main_pane_set_vc_t2_ParamLimits

0xb946,	// (0x00046501) main_pane_set_vc_t2

0xb958,	// (0x00046513) main_pane_set_vc_t3_ParamLimits

0xb958,	// (0x00046513) main_pane_set_vc_t3

0xb96c,	// (0x00046527) main_pane_set_vc_t4_ParamLimits

0xb96c,	// (0x00046527) main_pane_set_vc_t4

0x0003,

0xfa1d,	// (0x0004a5d8) main_pane_set_vc_t_ParamLimits

0xfa1d,	// (0x0004a5d8) main_pane_set_vc_t

0xb980,	// (0x0004653b) setting_code_pane_vc_ParamLimits

0xb980,	// (0x0004653b) setting_code_pane_vc

0xb991,	// (0x0004654c) setting_slider_graphic_pane_vc

0xb991,	// (0x0004654c) setting_slider_pane_vc

0xb991,	// (0x0004654c) setting_text_pane_vc

0xb991,	// (0x0004654c) setting_volume_pane_vc

0xb99b,	// (0x00046556) scroll_pane_cp121_vc

0x87e9,	// (0x000433a4) set_content_pane_vc

0xb9a3,	// (0x0004655e) button_value_adjust_pane_g1

0xb9ac,	// (0x00046567) button_value_adjust_pane_g2

0x0001,

0xfa79,	// (0x0004a634) button_value_adjust_pane_g

0xb9b5,	// (0x00046570) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb9b5,	// (0x00046570) form_field_slider_wide_pane_vc_t1

0xb9c9,	// (0x00046584) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb9c9,	// (0x00046584) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7e,	// (0x0004a639) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7e,	// (0x0004a639) form_field_slider_wide_pane_vc_t

0x820f,	// (0x00042dca) input_focus_pane_cp10_vc_ParamLimits

0x820f,	// (0x00042dca) input_focus_pane_cp10_vc

0xb9f7,	// (0x000465b2) slider_cont_pane_cp1_vc_ParamLimits

0xb9f7,	// (0x000465b2) slider_cont_pane_cp1_vc

0xba09,	// (0x000465c4) slider_form_pane_g1_cp2

0xb82f,	// (0x000463ea) slider_form_pane_g2_cp2

0xba36,	// (0x000465f1) form_field_slider_pane_vc_t3

0xba44,	// (0x000465ff) form_field_slider_pane_vc_t4

0xba52,	// (0x0004660d) slider_form_pane_vc_ParamLimits

0xba52,	// (0x0004660d) slider_form_pane_vc

0xba5f,	// (0x0004661a) form_field_slider_pane_vc_t1_ParamLimits

0xba5f,	// (0x0004661a) form_field_slider_pane_vc_t1

0xb9c9,	// (0x00046584) form_field_slider_pane_vc_t2_ParamLimits

0xb9c9,	// (0x00046584) form_field_slider_pane_vc_t2

0x0001,

0xfa90,	// (0x0004a64b) form_field_slider_pane_vc_t_ParamLimits

0xfa90,	// (0x0004a64b) form_field_slider_pane_vc_t

0x820f,	// (0x00042dca) input_focus_pane_cp9_vc_ParamLimits

0x820f,	// (0x00042dca) input_focus_pane_cp9_vc

0xba7b,	// (0x00046636) slider_cont_pane_vc_ParamLimits

0xba7b,	// (0x00046636) slider_cont_pane_vc

0xba8f,	// (0x0004664a) list_form_graphic_pane_cp_vc_ParamLimits

0xba8f,	// (0x0004664a) list_form_graphic_pane_cp_vc

0x9dc7,	// (0x00044982) form_field_popup_wide_pane_vc_g1

0xbaa4,	// (0x0004665f) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbaa4,	// (0x0004665f) form_field_popup_wide_pane_vc_t1

0x880f,	// (0x000433ca) input_focus_pane_cp8_vc_ParamLimits

0x880f,	// (0x000433ca) input_focus_pane_cp8_vc

0xbae9,	// (0x000466a4) list_form_wide_pane_vc_ParamLimits

0xbae9,	// (0x000466a4) list_form_wide_pane_vc

0xbaf5,	// (0x000466b0) list_form_graphic_pane_vc_g1

0xbafd,	// (0x000466b8) list_form_graphic_pane_vc_t1_ParamLimits

0xbafd,	// (0x000466b8) list_form_graphic_pane_vc_t1

0x7f94,	// (0x00042b4f) list_highlight_pane_cp5_vc_ParamLimits

0x7f94,	// (0x00042b4f) list_highlight_pane_cp5_vc

0xbb19,	// (0x000466d4) list_form_graphic_pane_vc_ParamLimits

0xbb19,	// (0x000466d4) list_form_graphic_pane_vc

0x9dc7,	// (0x00044982) form_field_popup_pane_vc_g1

0xbb2f,	// (0x000466ea) form_field_popup_pane_vc_t1_ParamLimits

0xbb2f,	// (0x000466ea) form_field_popup_pane_vc_t1

0x880f,	// (0x000433ca) input_focus_pane_cp7_vc_ParamLimits

0x880f,	// (0x000433ca) input_focus_pane_cp7_vc

0xbb46,	// (0x00046701) list_form_pane_vc_ParamLimits

0xbb46,	// (0x00046701) list_form_pane_vc

0xbb52,	// (0x0004670d) data_form_pane_vc_t1_ParamLimits

0xbb52,	// (0x0004670d) data_form_pane_vc_t1

0x885e,	// (0x00043419) input_focus_pane_vc_g1

0x8866,	// (0x00043421) input_focus_pane_vc_g2

0x886e,	// (0x00043429) input_focus_pane_vc_g3

0x8876,	// (0x00043431) input_focus_pane_vc_g4

0x887e,	// (0x00043439) input_focus_pane_vc_g5

0x8886,	// (0x00043441) input_focus_pane_vc_g6

0x888e,	// (0x00043449) input_focus_pane_vc_g7

0x8896,	// (0x00043451) input_focus_pane_vc_g8

0x889e,	// (0x00043459) input_focus_pane_vc_g9

0x7eaa,	// (0x00042a65) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0004a24c) input_focus_pane_vc_g

0x9dbb,	// (0x00044976) data_form_pane_vc_ParamLimits

0x9dbb,	// (0x00044976) data_form_pane_vc

0x9dc7,	// (0x00044982) form_field_data_pane_vc_g1

0xbb6d,	// (0x00046728) form_field_data_pane_vc_t1_ParamLimits

0xbb6d,	// (0x00046728) form_field_data_pane_vc_t1

0x880f,	// (0x000433ca) input_focus_pane_vc_ParamLimits

0x880f,	// (0x000433ca) input_focus_pane_vc

0xbb87,	// (0x00046742) button_value_adjust_pane_cp3_vc

0xbb8f,	// (0x0004674a) button_value_adjust_pane_cp5_vc

0xbb97,	// (0x00046752) form_field_data_pane_vc_ParamLimits

0xbb97,	// (0x00046752) form_field_data_pane_vc

0xbbae,	// (0x00046769) form_field_data_pane_vc_cp2

0xbbb6,	// (0x00046771) form_field_data_wide_pane_vc_ParamLimits

0xbbb6,	// (0x00046771) form_field_data_wide_pane_vc

0xbbcc,	// (0x00046787) form_field_data_wide_pane_vc_cp2

0xbbd4,	// (0x0004678f) form_field_popup_pane_vc_ParamLimits

0xbbd4,	// (0x0004678f) form_field_popup_pane_vc

0xbbeb,	// (0x000467a6) form_field_popup_wide_pane_vc_ParamLimits

0xbbeb,	// (0x000467a6) form_field_popup_wide_pane_vc

0xbc01,	// (0x000467bc) form_field_slider_pane_vc_ParamLimits

0xbc01,	// (0x000467bc) form_field_slider_pane_vc

0xbc14,	// (0x000467cf) form_field_slider_wide_pane_vc_ParamLimits

0xbc14,	// (0x000467cf) form_field_slider_wide_pane_vc

0xbc27,	// (0x000467e2) grid_touch_1_pane_ParamLimits

0xbc27,	// (0x000467e2) grid_touch_1_pane

0xbc33,	// (0x000467ee) grid_touch_2_pane_ParamLimits

0xbc33,	// (0x000467ee) grid_touch_2_pane

0x9754,	// (0x0004430f) touch_pane_g1_ParamLimits

0x9754,	// (0x0004430f) touch_pane_g1

0xbc4b,	// (0x00046806) cell_app_pane_cp_wide_ParamLimits

0xbc4b,	// (0x00046806) cell_app_pane_cp_wide

0xbc5c,	// (0x00046817) grid_popup_fast_wide_pane_ParamLimits

0xbc5c,	// (0x00046817) grid_popup_fast_wide_pane

0xbc70,	// (0x0004682b) scroll_pane_cp19_ParamLimits

0xbc70,	// (0x0004682b) scroll_pane_cp19

0x7eb4,	// (0x00042a6f) bg_popup_window_pane_cp20

0xbc84,	// (0x0004683f) listscroll_popup_fast_wide_pane

0x7f94,	// (0x00042b4f) grid_indicator_nsta_pane

0xbc8c,	// (0x00046847) clock_nsta_pane_g1

0xbc95,	// (0x00046850) clock_nsta_pane_t1

0xbcb1,	// (0x0004686c) cell_indicator_nsta_pane_ParamLimits

0xbcb1,	// (0x0004686c) cell_indicator_nsta_pane

0xbce2,	// (0x0004689d) cell_indicator_nsta_pane_g1

0xbcf0,	// (0x000468ab) cell_indicator_nsta_pane_g2

0x0001,

0xfaa1,	// (0x0004a65c) cell_indicator_nsta_pane_g

0xbcfd,	// (0x000468b8) clock_nsta_pane_cp

0xbd05,	// (0x000468c0) indicator_nsta_pane_cp

0xbd0d,	// (0x000468c8) nsta_clock_indic_pane_g1

0x805d,	// (0x00042c18) grid_indicator_pane

0x8d96,	// (0x00043951) scroll_pane_cp29

0x6084,	// (0x00040c3f) indicator_nsta_pane_cp2_ParamLimits

0x6084,	// (0x00040c3f) indicator_nsta_pane_cp2

0x7f94,	// (0x00042b4f) main_apps_wheel_pane

0x9fdc,	// (0x00044b97) form_midp_field_text_pane_ParamLimits

0xa127,	// (0x00044ce2) scroll_bar_cp050_ParamLimits

0xbd6e,	// (0x00046929) cell_indicator_pane_ParamLimits

0xbd6e,	// (0x00046929) cell_indicator_pane

0xbd85,	// (0x00046940) cell_indicator_pane_g1

0xbd8f,	// (0x0004694a) grid_wheel_folder_pane_ParamLimits

0xbd8f,	// (0x0004694a) grid_wheel_folder_pane

0xbda5,	// (0x00046960) list_wheel_apps_pane_ParamLimits

0xbda5,	// (0x00046960) list_wheel_apps_pane

0xbdb6,	// (0x00046971) main_apps_wheel_pane_g1_ParamLimits

0xbdb6,	// (0x00046971) main_apps_wheel_pane_g1

0xbdca,	// (0x00046985) main_apps_wheel_pane_g2_ParamLimits

0xbdca,	// (0x00046985) main_apps_wheel_pane_g2

0x0001,

0xfabd,	// (0x0004a678) main_apps_wheel_pane_g_ParamLimits

0xfabd,	// (0x0004a678) main_apps_wheel_pane_g

0xbde2,	// (0x0004699d) main_apps_wheel_pane_t1_ParamLimits

0xbde2,	// (0x0004699d) main_apps_wheel_pane_t1

0xbe05,	// (0x000469c0) list_wheel_apps_pane_g1

0xbe0d,	// (0x000469c8) list_wheel_apps_pane_g2

0xbe15,	// (0x000469d0) list_wheel_apps_pane_g3

0xbe1d,	// (0x000469d8) list_wheel_apps_pane_g4

0xbe27,	// (0x000469e2) list_wheel_apps_pane_g5

0x0004,

0xfac2,	// (0x0004a67d) list_wheel_apps_pane_g

0x9319,	// (0x00043ed4) navi_icon_text_pane

0x97f9,	// (0x000443b4) aid_fill_nsta

0xbe4a,	// (0x00046a05) navi_icon_text_pane_g1

0xbe56,	// (0x00046a11) navi_icon_text_pane_t1

0x91ac,	// (0x00043d67) list_set_graphic_pane_t1_ParamLimits

0x91ac,	// (0x00043d67) list_set_graphic_pane_t1

0xa876,	// (0x00045431) popup_midp_note_alarm_window_t6_ParamLimits

0xa876,	// (0x00045431) popup_midp_note_alarm_window_t6

0xa888,	// (0x00045443) popup_midp_note_alarm_window_t7_ParamLimits

0xa888,	// (0x00045443) popup_midp_note_alarm_window_t7

0xa89a,	// (0x00045455) popup_midp_note_alarm_window_t8_ParamLimits

0xa89a,	// (0x00045455) popup_midp_note_alarm_window_t8

0xa8ac,	// (0x00045467) popup_midp_note_alarm_window_t9_ParamLimits

0xa8ac,	// (0x00045467) popup_midp_note_alarm_window_t9

0xa8be,	// (0x00045479) popup_midp_note_alarm_window_t10_ParamLimits

0xa8be,	// (0x00045479) popup_midp_note_alarm_window_t10

0xa8d0,	// (0x0004548b) popup_midp_note_alarm_window_t11_ParamLimits

0xa8d0,	// (0x0004548b) popup_midp_note_alarm_window_t11

0xa8e2,	// (0x0004549d) scroll_pane_cp17_ParamLimits

0xa8e2,	// (0x0004549d) scroll_pane_cp17

0x6abb,	// (0x00041676) volume_small_pane_cp_g1

0x6e7b,	// (0x00041a36) volume_small_pane_cp_g2

0x6e84,	// (0x00041a3f) volume_small_pane_cp_g3

0x6e8d,	// (0x00041a48) volume_small_pane_cp_g4

0x6e96,	// (0x00041a51) volume_small_pane_cp_g5

0x6e9f,	// (0x00041a5a) volume_small_pane_cp_g6

0x6ea8,	// (0x00041a63) volume_small_pane_cp_g7

0x6eb1,	// (0x00041a6c) volume_small_pane_cp_g8

0x6eba,	// (0x00041a75) volume_small_pane_cp_g9

0x6ec3,	// (0x00041a7e) volume_small_pane_cp_g10

0x956a,	// (0x00044125) midp_ticker_pane_g1_ParamLimits

0x9576,	// (0x00044131) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0004a318) midp_ticker_pane_g_ParamLimits

0x9582,	// (0x0004413d) midp_ticker_pane_t1_ParamLimits

0x980f,	// (0x000443ca) aid_fill_nsta_2

0xa113,	// (0x00044cce) list_form2_midp_pane

0xb248,	// (0x00045e03) midp_editing_number_pane_ParamLimits

0xb257,	// (0x00045e12) midp_ticker_pane_ParamLimits

0xbe68,	// (0x00046a23) form2_midp_field_pane

0xbe8c,	// (0x00046a47) scroll_pane_cp51

0xbeac,	// (0x00046a67) form2_midp_button_pane_ParamLimits

0xbeac,	// (0x00046a67) form2_midp_button_pane

0xbebe,	// (0x00046a79) form2_midp_content_pane_ParamLimits

0xbebe,	// (0x00046a79) form2_midp_content_pane

0xbed8,	// (0x00046a93) form2_midp_field_choice_group_pane

0xbee0,	// (0x00046a9b) form2_midp_field_pane_g1

0xbef4,	// (0x00046aaf) form2_midp_field_pane_g2

0xbefc,	// (0x00046ab7) form2_midp_field_pane_g3

0xbf04,	// (0x00046abf) form2_midp_field_pane_g4

0x0003,

0xfae7,	// (0x0004a6a2) form2_midp_field_pane_g

0xbf0c,	// (0x00046ac7) form2_midp_gauge_slider_pane

0xbf14,	// (0x00046acf) form2_midp_gauge_wait_pane

0xbf1c,	// (0x00046ad7) form2_midp_image_pane_ParamLimits

0xbf1c,	// (0x00046ad7) form2_midp_image_pane

0xbf37,	// (0x00046af2) form2_midp_label_pane_ParamLimits

0xbf37,	// (0x00046af2) form2_midp_label_pane

0xbf50,	// (0x00046b0b) form2_midp_label_pane_cp_ParamLimits

0xbf50,	// (0x00046b0b) form2_midp_label_pane_cp

0xbf71,	// (0x00046b2c) form2_midp_string_pane_ParamLimits

0xbf71,	// (0x00046b2c) form2_midp_string_pane

0x55a9,	// (0x00040164) form2_midp_text_pane_ParamLimits

0x55a9,	// (0x00040164) form2_midp_text_pane

0xbf83,	// (0x00046b3e) form2_midp_time_pane

0xbf93,	// (0x00046b4e) input_focus_pane_cp51_ParamLimits

0xbf93,	// (0x00046b4e) input_focus_pane_cp51

0xbfab,	// (0x00046b66) form2_midp_label_pane_t1_ParamLimits

0xbfab,	// (0x00046b66) form2_midp_label_pane_t1

0x55c8,	// (0x00040183) form2_mdip_text_pane_t1_ParamLimits

0x55c8,	// (0x00040183) form2_mdip_text_pane_t1

0x55e6,	// (0x000401a1) form2_midp_time_pane_t1

0xbff4,	// (0x00046baf) form2_midp_gauge_slider_pane_t1

0xc006,	// (0x00046bc1) form2_midp_gauge_slider_pane_t2

0xc018,	// (0x00046bd3) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf0,	// (0x0004a6ab) form2_midp_gauge_slider_pane_t

0xc02a,	// (0x00046be5) form2_midp_slider_pane

0xc036,	// (0x00046bf1) form2_midp_gauge_wait_pane_t1

0xc044,	// (0x00046bff) form2_midp_wait_pane_ParamLimits

0xc044,	// (0x00046bff) form2_midp_wait_pane

0x9e0e,	// (0x000449c9) list_single_2graphic_pane_cp4_ParamLimits

0x9e0e,	// (0x000449c9) list_single_2graphic_pane_cp4

0xc06f,	// (0x00046c2a) list_single_midp_graphic_pane_cp_ParamLimits

0xc06f,	// (0x00046c2a) list_single_midp_graphic_pane_cp

0x7eb4,	// (0x00042a6f) list_highlight_pane_cp20

0xc09e,	// (0x00046c59) list_single_2graphic_pane_g1_cp4

0xc0a6,	// (0x00046c61) list_single_2graphic_pane_g2_cp4

0xc0ae,	// (0x00046c69) list_single_2graphic_pane_t1_cp4

0x7f94,	// (0x00042b4f) list_highlight_pane_cp21

0xc0bd,	// (0x00046c78) list_single_midp_graphic_pane_g4_cp

0xc0cc,	// (0x00046c87) list_single_midp_graphic_pane_t1_cp

0xc0e1,	// (0x00046c9c) form2_mdip_string_pane_t1_ParamLimits

0xc0e1,	// (0x00046c9c) form2_mdip_string_pane_t1

0x7eb4,	// (0x00042a6f) bg_wml_button_pane_cp2

0x7eaa,	// (0x00042a65) form2_midp_image_pane_g1

0x5d76,	// (0x00040931) list_double_large_graphic_pane_g5_ParamLimits

0x5d76,	// (0x00040931) list_double_large_graphic_pane_g5

0x89e7,	// (0x000435a2) midp_form_pane_ParamLimits

0x7f94,	// (0x00042b4f) main_apps_wheel_pane_ParamLimits

0x675b,	// (0x00041316) popup_preview_window_ParamLimits

0x675b,	// (0x00041316) popup_preview_window

0x6916,	// (0x000414d1) popup_touch_info_window_ParamLimits

0x6916,	// (0x000414d1) popup_touch_info_window

0x6934,	// (0x000414ef) popup_touch_menu_window_ParamLimits

0x6934,	// (0x000414ef) popup_touch_menu_window

0x7ea0,	// (0x00042a5b) bg_popup_sub_pane_cp6

0xc1da,	// (0x00046d95) list_touch_menu_pane

0xc1e2,	// (0x00046d9d) list_single_touch_menu_pane_ParamLimits

0xc1e2,	// (0x00046d9d) list_single_touch_menu_pane

0xc1f8,	// (0x00046db3) list_single_touch_menu_pane_t1

0x7f94,	// (0x00042b4f) bg_popup_sub_pane_cp7_ParamLimits

0x7f94,	// (0x00042b4f) bg_popup_sub_pane_cp7

0xc206,	// (0x00046dc1) heading_sub_pane

0xc20e,	// (0x00046dc9) list_touch_info_pane_ParamLimits

0xc20e,	// (0x00046dc9) list_touch_info_pane

0xc21d,	// (0x00046dd8) list_single_touch_info_pane_ParamLimits

0xc21d,	// (0x00046dd8) list_single_touch_info_pane

0xc22f,	// (0x00046dea) list_single_touch_info_pane_t1

0xc23d,	// (0x00046df8) list_single_touch_info_pane_t2

0x0001,

0xfafe,	// (0x0004a6b9) list_single_touch_info_pane_t

0x9499,	// (0x00044054) bg_popup_heading_pane_cp

0xc24b,	// (0x00046e06) heading_sub_pane_t1

0x9d55,	// (0x00044910) bg_popup_preview_window_pane_cp_ParamLimits

0x9d55,	// (0x00044910) bg_popup_preview_window_pane_cp

0xc206,	// (0x00046dc1) heading_preview_pane

0xc20e,	// (0x00046dc9) list_preview_pane_ParamLimits

0xc20e,	// (0x00046dc9) list_preview_pane

0xc259,	// (0x00046e14) popup_preview_window_g1

0xc21d,	// (0x00046dd8) list_single_preview_pane_ParamLimits

0xc21d,	// (0x00046dd8) list_single_preview_pane

0xc261,	// (0x00046e1c) list_single_preview_pane_g1

0xc269,	// (0x00046e24) list_single_preview_pane_t1

0xc22f,	// (0x00046dea) list_single_preview_pane_t2

0x0001,

0xfb03,	// (0x0004a6be) list_single_preview_pane_t

0xc277,	// (0x00046e32) bg_popup_heading_pane_cp2_ParamLimits

0xc277,	// (0x00046e32) bg_popup_heading_pane_cp2

0xc28d,	// (0x00046e48) heading_preview_pane_g1

0xc295,	// (0x00046e50) heading_preview_pane_t1_ParamLimits

0xc295,	// (0x00046e50) heading_preview_pane_t1

0x8080,	// (0x00042c3b) soft_indicator_pane_t1_ParamLimits

0x8776,	// (0x00043331) scroll_pane_ParamLimits

0x8c8f,	// (0x0004384a) scroll_sc2_left_pane

0x8c98,	// (0x00043853) scroll_sc2_right_pane

0x8cb7,	// (0x00043872) scroll_bg_pane_g1_ParamLimits

0x8ccc,	// (0x00043887) scroll_bg_pane_g2_ParamLimits

0x8ce4,	// (0x0004389f) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0004a2a3) scroll_bg_pane_g_ParamLimits

0x8cb7,	// (0x00043872) scroll_handle_pane_g1_ParamLimits

0x8d06,	// (0x000438c1) scroll_handle_pane_g2_ParamLimits

0x8ce4,	// (0x0004389f) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0004a2aa) scroll_handle_pane_g_ParamLimits

0x63dc,	// (0x00040f97) popup_choice_list_window_ParamLimits

0x63dc,	// (0x00040f97) popup_choice_list_window

0x9c2b,	// (0x000447e6) choice_list_pane

0x9cad,	// (0x00044868) cell_toolbar_pane_t1

0x9cd5,	// (0x00044890) toolbar_button_pane_ParamLimits

0xada8,	// (0x00045963) ai_gene_pane_1_t2_ParamLimits

0xada8,	// (0x00045963) ai_gene_pane_1_t2

0x0001,

0xf917,	// (0x0004a4d2) ai_gene_pane_1_t_ParamLimits

0xf917,	// (0x0004a4d2) ai_gene_pane_1_t

0xc2b2,	// (0x00046e6d) scroll_sc2_left_pane_g1

0xc2b2,	// (0x00046e6d) scroll_sc2_right_pane_g1

0x97d7,	// (0x00044392) bg_popup_sub_pane_cp10

0xc2bc,	// (0x00046e77) list_choice_list_pane

0xc2d5,	// (0x00046e90) list_single_choice_list_pane_ParamLimits

0xc2d5,	// (0x00046e90) list_single_choice_list_pane

0xc2e8,	// (0x00046ea3) list_single_choice_list_pane_g1

0x8997,	// (0x00043552) list_single_choice_list_pane_t1_ParamLimits

0x8997,	// (0x00043552) list_single_choice_list_pane_t1

0xc2f0,	// (0x00046eab) choice_list_pane_g1

0xc2f8,	// (0x00046eb3) choice_list_pane_t1

0x7ea0,	// (0x00042a5b) input_focus_pane_cp11

0x8b6e,	// (0x00043729) title_pane_stacon_g2_ParamLimits

0x8b6e,	// (0x00043729) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0004a289) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0004a289) title_pane_stacon_g

0x9499,	// (0x00044054) cursor_press_pane

0x6488,	// (0x00041043) popup_fep_hwr_window_ParamLimits

0x6488,	// (0x00041043) popup_fep_hwr_window

0x6502,	// (0x000410bd) popup_fep_vkb_window_ParamLimits

0x6502,	// (0x000410bd) popup_fep_vkb_window

0xc306,	// (0x00046ec1) cursor_press_pane_g1

0x0002,

0xfb2c,	// (0x0004a6e7) fep_vkb_side_pane_g_ParamLimits

0x6f05,	// (0x00041ac0) fep_hwr_candidate_pane_ParamLimits

0x6f05,	// (0x00041ac0) fep_hwr_candidate_pane

0x6f2f,	// (0x00041aea) fep_hwr_side_pane_ParamLimits

0x6f2f,	// (0x00041aea) fep_hwr_side_pane

0x6f4f,	// (0x00041b0a) fep_hwr_top_pane_ParamLimits

0x6f4f,	// (0x00041b0a) fep_hwr_top_pane

0x6f67,	// (0x00041b22) fep_hwr_write_pane_ParamLimits

0x6f67,	// (0x00041b22) fep_hwr_write_pane

0xfb2c,	// (0x0004a6e7) fep_vkb_side_pane_g

0xc30e,	// (0x00046ec9) fep_hwr_top_pane_g1

0xc320,	// (0x00046edb) fep_hwr_top_pane_g2

0x6f93,	// (0x00041b4e) fep_hwr_top_pane_g3

0x0002,

0xfb08,	// (0x0004a6c3) fep_hwr_top_pane_g

0x6fa8,	// (0x00041b63) fep_hwr_top_text_pane

0x8e86,	// (0x00043a41) fep_hwr_top_text_pane_g1

0xc356,	// (0x00046f11) fep_hwr_top_text_pane_t1

0x709e,	// (0x00041c59) fep_hwr_candidate_pane_g1

0xc5a9,	// (0x00047164) fep_vkb_keypad_pane_g3_ParamLimits

0xc5a9,	// (0x00047164) fep_vkb_keypad_pane_g3

0xc5d1,	// (0x0004718c) fep_vkb_keypad_pane_g4_ParamLimits

0xc5d1,	// (0x0004718c) fep_vkb_keypad_pane_g4

0xc640,	// (0x000471fb) fep_vkb_bottom_pane_g2_ParamLimits

0xc640,	// (0x000471fb) fep_vkb_bottom_pane_g2

0x0001,

0xfb33,	// (0x0004a6ee) fep_vkb_bottom_pane_g_ParamLimits

0xfb33,	// (0x0004a6ee) fep_vkb_bottom_pane_g

0xc2b2,	// (0x00046e6d) cell_vkb_side_pane_g2

0x0001,

0xfb3d,	// (0x0004a6f8) cell_vkb_side_pane_g

0xc6cb,	// (0x00047286) cell_vkb_side_pane_t1

0xc6d9,	// (0x00047294) cell_vkb_side_pane_t1_copy1

0xc2b2,	// (0x00046e6d) bg_fep_vkb_candidate_pane_g2

0xc805,	// (0x000473c0) cell_vkb_candidate_pane_ParamLimits

0xc364,	// (0x00046f1f) aid_size_cell_vkb_ParamLimits

0xc364,	// (0x00046f1f) aid_size_cell_vkb

0xc805,	// (0x000473c0) cell_vkb_candidate_pane

0x70b8,	// (0x00041c73) bg_popup_fep_shadow_pane_g1

0xc3f2,	// (0x00046fad) fep_vkb_bottom_pane_ParamLimits

0xc3f2,	// (0x00046fad) fep_vkb_bottom_pane

0xc428,	// (0x00046fe3) fep_vkb_candidate_pane_ParamLimits

0xc428,	// (0x00046fe3) fep_vkb_candidate_pane

0xc444,	// (0x00046fff) fep_vkb_keypad_pane_ParamLimits

0xc444,	// (0x00046fff) fep_vkb_keypad_pane

0xc48a,	// (0x00047045) fep_vkb_side_pane_ParamLimits

0xc48a,	// (0x00047045) fep_vkb_side_pane

0xc4c6,	// (0x00047081) fep_vkb_top_pane_ParamLimits

0xc4c6,	// (0x00047081) fep_vkb_top_pane

0xc502,	// (0x000470bd) fep_vkb_top_pane_g1_ParamLimits

0xc502,	// (0x000470bd) fep_vkb_top_pane_g1

0xc511,	// (0x000470cc) fep_vkb_top_pane_g2_ParamLimits

0xc511,	// (0x000470cc) fep_vkb_top_pane_g2

0xc520,	// (0x000470db) fep_vkb_top_pane_g3_ParamLimits

0xc520,	// (0x000470db) fep_vkb_top_pane_g3

0x0003,

0xfb23,	// (0x0004a6de) fep_vkb_top_pane_g_ParamLimits

0xfb23,	// (0x0004a6de) fep_vkb_top_pane_g

0xc53e,	// (0x000470f9) fep_vkb_top_text_pane_ParamLimits

0xc53e,	// (0x000470f9) fep_vkb_top_text_pane

0xc54f,	// (0x0004710a) fep_vkb_side_pane_g1_ParamLimits

0xc54f,	// (0x0004710a) fep_vkb_side_pane_g1

0xc598,	// (0x00047153) grid_vkb_side_pane_ParamLimits

0xc598,	// (0x00047153) grid_vkb_side_pane

0x70c0,	// (0x00041c7b) bg_popup_fep_shadow_pane_g2

0x70c9,	// (0x00041c84) bg_popup_fep_shadow_pane_g3

0x70d1,	// (0x00041c8c) bg_popup_fep_shadow_pane_g4

0x70da,	// (0x00041c95) bg_popup_fep_shadow_pane_g5

0x70e4,	// (0x00041c9f) bg_popup_fep_shadow_pane_g6

0x70ec,	// (0x00041ca7) bg_popup_fep_shadow_pane_g7

0x887e,	// (0x00043439) bg_popup_fep_shadow_pane_g8

0xc5ef,	// (0x000471aa) grid_vkb_keypad_number_pane_ParamLimits

0xc5ef,	// (0x000471aa) grid_vkb_keypad_number_pane

0xc5ff,	// (0x000471ba) grid_vkb_keypad_pane_ParamLimits

0xc5ff,	// (0x000471ba) grid_vkb_keypad_pane

0xc625,	// (0x000471e0) fep_vkb_bottom_pane_g1_ParamLimits

0xc625,	// (0x000471e0) fep_vkb_bottom_pane_g1

0xc64e,	// (0x00047209) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc64e,	// (0x00047209) grid_vkb_keypad_bottom_left_pane

0xc663,	// (0x0004721e) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc663,	// (0x0004721e) grid_vkb_keypad_bottom_right_pane

0xc678,	// (0x00047233) fep_vkb_top_text_pane_g1

0xc693,	// (0x0004724e) fep_vkb_top_text_pane_t1

0xc6a8,	// (0x00047263) cell_vkb_side_pane_ParamLimits

0xc6a8,	// (0x00047263) cell_vkb_side_pane

0xc2b2,	// (0x00046e6d) cell_vkb_side_pane_g1

0xc6e7,	// (0x000472a2) cell_vkb_keypad_pane_ParamLimits

0xc6e7,	// (0x000472a2) cell_vkb_keypad_pane

0xc75c,	// (0x00047317) cell_vkb_keypad_pane_g1

0x0008,

0xfb50,	// (0x0004a70b) bg_popup_fep_shadow_pane_g

0xc2b2,	// (0x00046e6d) cell_hwr_side_pane_g1

0xc2b2,	// (0x00046e6d) cell_hwr_side_pane_g2

0xc766,	// (0x00047321) cell_vkb_keypad_pane_t1

0xc774,	// (0x0004732f) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc774,	// (0x0004732f) cell_vkb_keypad_bottom_left_pane

0xc791,	// (0x0004734c) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc791,	// (0x0004734c) cell_vkb_keypad_bottom_right_pane

0xc2b2,	// (0x00046e6d) cell_vkb_keypad_bottom_left_pane_g1

0xc2b2,	// (0x00046e6d) cell_vkb_keypad_bottom_right_pane_g1

0xc7ca,	// (0x00047385) cell_vkb_keypad_number_pane_ParamLimits

0xc7ca,	// (0x00047385) cell_vkb_keypad_number_pane

0xc7e9,	// (0x000473a4) cell_vkb_keypad_number_pane_g1

0xc7f3,	// (0x000473ae) cell_vkb_keypad_number_pane_g2

0xc7fc,	// (0x000473b7) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb42,	// (0x0004a6fd) cell_vkb_keypad_number_pane_g

0xc766,	// (0x00047321) cell_vkb_keypad_number_pane_t1

0xc820,	// (0x000473db) fep_vkb_candidate_pane_g1

0x0001,

0xfb3d,	// (0x0004a6f8) cell_hwr_side_pane_g

0xc839,	// (0x000473f4) cell_hwr_side_pane_t1

0x70fe,	// (0x00041cb9) cell_hwr_side_pane_t1_copy1

0xc530,	// (0x000470eb) cell_hwr_candidate_pane_g1

0x710c,	// (0x00041cc7) cell_hwr_candidate_pane_t1

0xc2b2,	// (0x00046e6d) cell_vkb_candidate_pane_g2

0xc87d,	// (0x00047438) cell_vkb_candidate_pane_t1

0x6ecc,	// (0x00041a87) bg_popup_fep_shadow_pane_ParamLimits

0x6ecc,	// (0x00041a87) bg_popup_fep_shadow_pane

0x2deb,	// (0x0003d9a6) bg_fep_hwr_top_pane_g4

0xc332,	// (0x00046eed) bg_hwr_side_pane_g1_ParamLimits

0xc332,	// (0x00046eed) bg_hwr_side_pane_g1

0x6fe4,	// (0x00041b9f) cell_hwr_side_pane_ParamLimits

0x6fe4,	// (0x00041b9f) cell_hwr_side_pane

0x701f,	// (0x00041bda) fep_hwr_write_pane_g1_ParamLimits

0x701f,	// (0x00041bda) fep_hwr_write_pane_g1

0x702c,	// (0x00041be7) fep_hwr_write_pane_g2_ParamLimits

0x702c,	// (0x00041be7) fep_hwr_write_pane_g2

0x7039,	// (0x00041bf4) fep_hwr_write_pane_g3_ParamLimits

0x7039,	// (0x00041bf4) fep_hwr_write_pane_g3

0x7047,	// (0x00041c02) fep_hwr_write_pane_g4_ParamLimits

0x7047,	// (0x00041c02) fep_hwr_write_pane_g4

0x0005,

0xfb0f,	// (0x0004a6ca) fep_hwr_write_pane_g_ParamLimits

0xfb0f,	// (0x0004a6ca) fep_hwr_write_pane_g

0x2deb,	// (0x0003d9a6) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2deb,	// (0x0003d9a6) bg_fep_hwr_candidate_pane_g2

0x705c,	// (0x00041c17) cell_hwr_candidate_pane_ParamLimits

0x705c,	// (0x00041c17) cell_hwr_candidate_pane

0x709e,	// (0x00041c59) fep_hwr_candidate_pane_g1_ParamLimits

0xc392,	// (0x00046f4d) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc392,	// (0x00046f4d) bg_popup_fep_shadow_pane_cp2

0xc530,	// (0x000470eb) fep_vkb_top_pane_g4_ParamLimits

0xc530,	// (0x000470eb) fep_vkb_top_pane_g4

0xc576,	// (0x00047131) fep_vkb_side_pane_g2_ParamLimits

0xc576,	// (0x00047131) fep_vkb_side_pane_g2

0x4cb5,	// (0x0003f870) list_setting_pane_t4_ParamLimits

0x4cb5,	// (0x0003f870) list_setting_pane_t4

0x4d4f,	// (0x0003f90a) list_setting_number_pane_t5_ParamLimits

0x4d4f,	// (0x0003f90a) list_setting_number_pane_t5

0x8ecd,	// (0x00043a88) list_double_heading_pane_cp2_ParamLimits

0x8ecd,	// (0x00043a88) list_double_heading_pane_cp2

0x87aa,	// (0x00043365) list_double_heading_pane_g1_cp2_ParamLimits

0x87aa,	// (0x00043365) list_double_heading_pane_g1_cp2

0x881d,	// (0x000433d8) list_double_heading_pane_g2_cp2_ParamLimits

0x881d,	// (0x000433d8) list_double_heading_pane_g2_cp2

0xc88b,	// (0x00047446) list_double_heading_pane_t1_cp2_ParamLimits

0xc88b,	// (0x00047446) list_double_heading_pane_t1_cp2

0xc8a1,	// (0x0004745c) list_double_heading_pane_t2_cp2_ParamLimits

0xc8a1,	// (0x0004745c) list_double_heading_pane_t2_cp2

0x7e88,	// (0x00042a43) aid_value_unit2

0x5b4c,	// (0x00040707) popup_preview_fixed_window

0x821d,	// (0x00042dd8) bg_popup_preview_window_pane_cp02

0xc8b3,	// (0x0004746e) list_preview_fixed_pane

0xc8f9,	// (0x000474b4) list_empty_pane_fp_ParamLimits

0xc8f9,	// (0x000474b4) list_empty_pane_fp

0xc8f9,	// (0x000474b4) list_single_cale_day_pane_fp_ParamLimits

0xc8f9,	// (0x000474b4) list_single_cale_day_pane_fp

0xc8f9,	// (0x000474b4) list_single_graphic_heading_pane_fp_ParamLimits

0xc8f9,	// (0x000474b4) list_single_graphic_heading_pane_fp

0xc8f9,	// (0x000474b4) list_single_graphic_pane_fp_ParamLimits

0xc8f9,	// (0x000474b4) list_single_graphic_pane_fp

0xc8f9,	// (0x000474b4) list_single_heading_pane_fp_ParamLimits

0xc8f9,	// (0x000474b4) list_single_heading_pane_fp

0xc8f9,	// (0x000474b4) list_single_pane_fp_ParamLimits

0xc8f9,	// (0x000474b4) list_single_pane_fp

0xc90e,	// (0x000474c9) list_single_pane_fp_g1_ParamLimits

0xc90e,	// (0x000474c9) list_single_pane_fp_g1

0x87aa,	// (0x00043365) list_single_pane_fp_g2_ParamLimits

0x87aa,	// (0x00043365) list_single_pane_fp_g2

0x881d,	// (0x000433d8) list_single_pane_fp_g3_ParamLimits

0x881d,	// (0x000433d8) list_single_pane_fp_g3

0xc91a,	// (0x000474d5) list_single_pane_fp_g4_ParamLimits

0xc91a,	// (0x000474d5) list_single_pane_fp_g4

0x0003,

0xfb71,	// (0x0004a72c) list_single_pane_fp_g_ParamLimits

0xfb71,	// (0x0004a72c) list_single_pane_fp_g

0x55f9,	// (0x000401b4) list_single_pane_fp_t1_ParamLimits

0x55f9,	// (0x000401b4) list_single_pane_fp_t1

0x5610,	// (0x000401cb) list_single_graphic_pane_fp_g1_ParamLimits

0x5610,	// (0x000401cb) list_single_graphic_pane_fp_g1

0xc90e,	// (0x000474c9) list_single_graphic_pane_fp_g2_ParamLimits

0xc90e,	// (0x000474c9) list_single_graphic_pane_fp_g2

0x87aa,	// (0x00043365) list_single_graphic_pane_fp_g3_ParamLimits

0x87aa,	// (0x00043365) list_single_graphic_pane_fp_g3

0x881d,	// (0x000433d8) list_single_graphic_pane_fp_g4_ParamLimits

0x881d,	// (0x000433d8) list_single_graphic_pane_fp_g4

0xc91a,	// (0x000474d5) list_single_graphic_pane_fp_g5_ParamLimits

0xc91a,	// (0x000474d5) list_single_graphic_pane_fp_g5

0x0004,

0xfb7a,	// (0x0004a735) list_single_graphic_pane_fp_g_ParamLimits

0xfb7a,	// (0x0004a735) list_single_graphic_pane_fp_g

0x561c,	// (0x000401d7) list_single_graphic_pane_fp_t1_ParamLimits

0x561c,	// (0x000401d7) list_single_graphic_pane_fp_t1

0x5610,	// (0x000401cb) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5610,	// (0x000401cb) list_single_graphic_heading_pane_fp_g1

0xc90e,	// (0x000474c9) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc90e,	// (0x000474c9) list_single_graphic_heading_pane_fp_g2

0x87aa,	// (0x00043365) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x87aa,	// (0x00043365) list_single_graphic_heading_pane_fp_g3

0x881d,	// (0x000433d8) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x881d,	// (0x000433d8) list_single_graphic_heading_pane_fp_g4

0xc91a,	// (0x000474d5) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc91a,	// (0x000474d5) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7a,	// (0x0004a735) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7a,	// (0x0004a735) list_single_graphic_heading_pane_fp_g

0x5632,	// (0x000401ed) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5632,	// (0x000401ed) list_single_graphic_heading_pane_fp_t1

0x5648,	// (0x00040203) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5648,	// (0x00040203) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x0004a740) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x0004a740) list_single_graphic_heading_pane_fp_t

0x565a,	// (0x00040215) list_single_cale_day_pane_fp_g1_ParamLimits

0x565a,	// (0x00040215) list_single_cale_day_pane_fp_g1

0xc926,	// (0x000474e1) list_single_cale_day_pane_fp_g2_ParamLimits

0xc926,	// (0x000474e1) list_single_cale_day_pane_fp_g2

0x712a,	// (0x00041ce5) list_single_cale_day_pane_fp_g3_ParamLimits

0x712a,	// (0x00041ce5) list_single_cale_day_pane_fp_g3

0x7152,	// (0x00041d0d) list_single_cale_day_pane_fp_g4_ParamLimits

0x7152,	// (0x00041d0d) list_single_cale_day_pane_fp_g4

0x7176,	// (0x00041d31) list_single_cale_day_pane_fp_g5_ParamLimits

0x7176,	// (0x00041d31) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8a,	// (0x0004a745) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8a,	// (0x0004a745) list_single_cale_day_pane_fp_g

0x5692,	// (0x0004024d) list_single_cale_day_pane_fp_t1_ParamLimits

0x5692,	// (0x0004024d) list_single_cale_day_pane_fp_t1

0x56b8,	// (0x00040273) list_single_cale_day_pane_fp_t2_ParamLimits

0x56b8,	// (0x00040273) list_single_cale_day_pane_fp_t2

0x56d1,	// (0x0004028c) list_single_cale_day_pane_fp_t3_ParamLimits

0x56d1,	// (0x0004028c) list_single_cale_day_pane_fp_t3

0x0002,

0xfb95,	// (0x0004a750) list_single_cale_day_pane_fp_t_ParamLimits

0xfb95,	// (0x0004a750) list_single_cale_day_pane_fp_t

0xc90e,	// (0x000474c9) list_empty_pane_fp_g1_ParamLimits

0xc90e,	// (0x000474c9) list_empty_pane_fp_g1

0x56ea,	// (0x000402a5) list_empty_pane_fp_t1

0x56f8,	// (0x000402b3) list_empty_pane_fp_t2

0x0001,

0xfb9c,	// (0x0004a757) list_empty_pane_fp_t

0xc90e,	// (0x000474c9) list_single_heading_pane_fp_g1_ParamLimits

0xc90e,	// (0x000474c9) list_single_heading_pane_fp_g1

0x87aa,	// (0x00043365) list_single_heading_pane_fp_g2_ParamLimits

0x87aa,	// (0x00043365) list_single_heading_pane_fp_g2

0x881d,	// (0x000433d8) list_single_heading_pane_fp_g3_ParamLimits

0x881d,	// (0x000433d8) list_single_heading_pane_fp_g3

0x0002,

0xfba1,	// (0x0004a75c) list_single_heading_pane_fp_g_ParamLimits

0xfba1,	// (0x0004a75c) list_single_heading_pane_fp_g

0x5706,	// (0x000402c1) list_single_heading_pane_fp_t1_ParamLimits

0x5706,	// (0x000402c1) list_single_heading_pane_fp_t1

0x5718,	// (0x000402d3) list_single_heading_pane_fp_t2_ParamLimits

0x5718,	// (0x000402d3) list_single_heading_pane_fp_t2

0x0001,

0xfba8,	// (0x0004a763) list_single_heading_pane_fp_t_ParamLimits

0xfba8,	// (0x0004a763) list_single_heading_pane_fp_t

0x8a05,	// (0x000435c0) aid_size_cell_fast

0x818d,	// (0x00042d48) soft_indicator_pane_cp1_t1

0x8a42,	// (0x000435fd) cell_app_pane_cp2_ParamLimits

0x8a42,	// (0x000435fd) cell_app_pane_cp2

0x6eee,	// (0x00041aa9) fep_hwr_candidate_drop_down_list_pane

0x2df9,	// (0x0003d9b4) fep_hwr_candidate_pane_g3_ParamLimits

0x2df9,	// (0x0003d9b4) fep_hwr_candidate_pane_g3

0x2e06,	// (0x0003d9c1) fep_hwr_candidate_pane_g4_ParamLimits

0x2e06,	// (0x0003d9c1) fep_hwr_candidate_pane_g4

0x0002,

0xfb1c,	// (0x0004a6d7) fep_hwr_candidate_pane_g_ParamLimits

0xfb1c,	// (0x0004a6d7) fep_hwr_candidate_pane_g

0xc417,	// (0x00046fd2) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc417,	// (0x00046fd2) fep_vkb_candidate_drop_down_list_pane

0xc828,	// (0x000473e3) fep_vkb_candidate_pane_g3

0xc830,	// (0x000473eb) fep_vkb_candidate_pane_g4

0x0002,

0xfb49,	// (0x0004a704) fep_vkb_candidate_pane_g

0xc530,	// (0x000470eb) cell_hwr_candidate_pane_g1_ParamLimits

0xc98e,	// (0x00047549) cell_hwr_candidate_pane_g3_ParamLimits

0xc98e,	// (0x00047549) cell_hwr_candidate_pane_g3

0xc9af,	// (0x0004756a) cell_hwr_candidate_pane_g4_ParamLimits

0xc9af,	// (0x0004756a) cell_hwr_candidate_pane_g4

0x0002,

0xfb63,	// (0x0004a71e) cell_hwr_candidate_pane_g_ParamLimits

0xfb63,	// (0x0004a71e) cell_hwr_candidate_pane_g

0xc847,	// (0x00047402) cell_vkb_candidate_pane_g3_ParamLimits

0xc847,	// (0x00047402) cell_vkb_candidate_pane_g3

0xc862,	// (0x0004741d) cell_vkb_candidate_pane_g4_ParamLimits

0xc862,	// (0x0004741d) cell_vkb_candidate_pane_g4

0xc932,	// (0x000474ed) cell_app_pane_cp2_g1_ParamLimits

0xc932,	// (0x000474ed) cell_app_pane_cp2_g1

0xc950,	// (0x0004750b) cell_app_pane_cp2_g2_ParamLimits

0xc950,	// (0x0004750b) cell_app_pane_cp2_g2

0x0001,

0xfbad,	// (0x0004a768) cell_app_pane_cp2_g_ParamLimits

0xfbad,	// (0x0004a768) cell_app_pane_cp2_g

0xc95c,	// (0x00047517) cell_app_pane_cp2_t1_ParamLimits

0xc95c,	// (0x00047517) cell_app_pane_cp2_t1

0x880f,	// (0x000433ca) grid_highlight_pane_cp1_ParamLimits

0x880f,	// (0x000433ca) grid_highlight_pane_cp1

0x719a,	// (0x00041d55) cell_hwr_candidate_pane_cp1_ParamLimits

0x719a,	// (0x00041d55) cell_hwr_candidate_pane_cp1

0xc530,	// (0x000470eb) fep_hwr_candidate_drop_down_list_pane_g1

0xc9d0,	// (0x0004758b) fep_hwr_candidate_drop_down_list_pane_g2

0xc9dd,	// (0x00047598) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb2,	// (0x0004a76d) fep_hwr_candidate_drop_down_list_pane_g

0x71b9,	// (0x00041d74) fep_hwr_candidate_drop_down_list_scroll_pane

0x71c2,	// (0x00041d7d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x71c2,	// (0x00041d7d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x71cf,	// (0x00041d8a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x71cf,	// (0x00041d8a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x71dc,	// (0x00041d97) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x71dc,	// (0x00041d97) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc847,	// (0x00047402) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc847,	// (0x00047402) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc862,	// (0x0004741d) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc862,	// (0x0004741d) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x71e9,	// (0x00041da4) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x71e9,	// (0x00041da4) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7204,	// (0x00041dbf) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7204,	// (0x00041dbf) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x721f,	// (0x00041dda) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x721f,	// (0x00041dda) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb9,	// (0x0004a774) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb9,	// (0x0004a774) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc96e,	// (0x00047529) cell_vkb_candidate_pane_cp1_ParamLimits

0xc96e,	// (0x00047529) cell_vkb_candidate_pane_cp1

0xc530,	// (0x000470eb) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc530,	// (0x000470eb) fep_vkb_candidate_drop_down_list_pane_g1

0xc9d0,	// (0x0004758b) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc9d0,	// (0x0004758b) fep_vkb_candidate_drop_down_list_pane_g2

0xc9dd,	// (0x00047598) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc9dd,	// (0x00047598) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb2,	// (0x0004a76d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb2,	// (0x0004a76d) fep_vkb_candidate_drop_down_list_pane_g

0xc9ea,	// (0x000475a5) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc9ea,	// (0x000475a5) fep_vkb_candidate_drop_down_list_scroll_pane

0xc9f7,	// (0x000475b2) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc9f7,	// (0x000475b2) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xca04,	// (0x000475bf) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xca04,	// (0x000475bf) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xca10,	// (0x000475cb) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xca10,	// (0x000475cb) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc98e,	// (0x00047549) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc98e,	// (0x00047549) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc9af,	// (0x0004756a) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc9af,	// (0x0004756a) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xca1c,	// (0x000475d7) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xca1c,	// (0x000475d7) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca3d,	// (0x000475f8) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca3d,	// (0x000475f8) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca5e,	// (0x00047619) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca5e,	// (0x00047619) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x0004a785) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x0004a785) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7ebe,	// (0x00042a79) title_pane_g1_ParamLimits

0x7ecb,	// (0x00042a86) title_pane_g2_ParamLimits

0xf54e,	// (0x0004a109) title_pane_g_ParamLimits

0x8e76,	// (0x00043a31) aid_call2_pane

0x8e7e,	// (0x00043a39) aid_call_pane

0x8e86,	// (0x00043a41) popup_clock_analogue_window_g1

0x8e86,	// (0x00043a41) popup_clock_analogue_window_g2

0x5f69,	// (0x00040b24) popup_clock_analogue_window_g3

0x5f72,	// (0x00040b2d) popup_clock_analogue_window_g4

0x7eaa,	// (0x00042a65) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0004a2b8) popup_clock_analogue_window_g

0x5f7a,	// (0x00040b35) popup_clock_analogue_window_t1

0x5f88,	// (0x00040b43) clock_digital_number_pane_ParamLimits

0x5f88,	// (0x00040b43) clock_digital_number_pane

0x5f94,	// (0x00040b4f) clock_digital_number_pane_cp02_ParamLimits

0x5f94,	// (0x00040b4f) clock_digital_number_pane_cp02

0x5fa0,	// (0x00040b5b) clock_digital_number_pane_cp03_ParamLimits

0x5fa0,	// (0x00040b5b) clock_digital_number_pane_cp03

0x5fac,	// (0x00040b67) clock_digital_number_pane_cp04_ParamLimits

0x5fac,	// (0x00040b67) clock_digital_number_pane_cp04

0x5fb8,	// (0x00040b73) clock_digital_separator_pane_ParamLimits

0x5fb8,	// (0x00040b73) clock_digital_separator_pane

0x5fc4,	// (0x00040b7f) popup_clock_digital_window_t1_ParamLimits

0x5fc4,	// (0x00040b7f) popup_clock_digital_window_t1

0x7eaa,	// (0x00042a65) clock_digital_number_pane_g1

0x7eaa,	// (0x00042a65) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0004a2c3) clock_digital_number_pane_g

0x7eaa,	// (0x00042a65) clock_digital_separator_pane_g1

0x7eaa,	// (0x00042a65) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0004a2c3) clock_digital_separator_pane_g

0x97f9,	// (0x000443b4) aid_fill_nsta_ParamLimits

0x993f,	// (0x000444fa) indicator_nsta_pane_ParamLimits

0x9ab8,	// (0x00044673) popup_clock_analogue_window

0x9ab8,	// (0x00044673) popup_clock_digital_window

0x7f94,	// (0x00042b4f) grid_indicator_nsta_pane_ParamLimits

0xbca3,	// (0x0004685e) clock_nsta_pane_t2

0x0001,

0xfa9c,	// (0x0004a657) clock_nsta_pane_t

0x5f2d,	// (0x00040ae8) aid_size_max_handle

0x5f37,	// (0x00040af2) aid_size_min_handle

0x9499,	// (0x00044054) editor_scroll_pane

0xca79,	// (0x00047634) ex_editor_pane

0x8973,	// (0x0004352e) scroll_pane_cp13

0x87a2,	// (0x0004335d) scroll_pane_cp14

0x8eb5,	// (0x00043a70) scroll_pane_cp36

0x8ee1,	// (0x00043a9c) list_single_graphic_hl_pane_cp2_ParamLimits

0x8ee1,	// (0x00043a9c) list_single_graphic_hl_pane_cp2

0x5274,	// (0x0003fe2f) list_single_graphic_hl_pane_ParamLimits

0x5274,	// (0x0003fe2f) list_single_graphic_hl_pane

0x572e,	// (0x000402e9) aid_size_min_hl_cp1

0xca81,	// (0x0004763c) list_highlight_pane_cp34_ParamLimits

0xca81,	// (0x0004763c) list_highlight_pane_cp34

0xca92,	// (0x0004764d) list_single_graphic_hl_pane_g1_ParamLimits

0xca92,	// (0x0004764d) list_single_graphic_hl_pane_g1

0x5737,	// (0x000402f2) list_single_graphic_hl_pane_g2_ParamLimits

0x5737,	// (0x000402f2) list_single_graphic_hl_pane_g2

0x5737,	// (0x000402f2) list_single_graphic_hl_pane_g3_ParamLimits

0x5737,	// (0x000402f2) list_single_graphic_hl_pane_g3

0x940a,	// (0x00043fc5) list_single_graphic_hl_pane_g4_ParamLimits

0x940a,	// (0x00043fc5) list_single_graphic_hl_pane_g4

0x723a,	// (0x00041df5) list_single_graphic_hl_pane_g5_ParamLimits

0x723a,	// (0x00041df5) list_single_graphic_hl_pane_g5

0x0004,

0xfbdb,	// (0x0004a796) list_single_graphic_hl_pane_g_ParamLimits

0xfbdb,	// (0x0004a796) list_single_graphic_hl_pane_g

0x5743,	// (0x000402fe) list_single_graphic_hl_pane_t1_ParamLimits

0x5743,	// (0x000402fe) list_single_graphic_hl_pane_t1

0xca9f,	// (0x0004765a) aid_size_min_hl_cp2

0xcaa8,	// (0x00047663) list_highlight_pane_cp34_cp2_ParamLimits

0xcaa8,	// (0x00047663) list_highlight_pane_cp34_cp2

0xca92,	// (0x0004764d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca92,	// (0x0004764d) list_single_graphic_hl_pane_g1_cp2

0xcab5,	// (0x00047670) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcab5,	// (0x00047670) list_single_graphic_hl_pane_g2_cp2

0xcac1,	// (0x0004767c) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcac1,	// (0x0004767c) list_single_graphic_hl_pane_g3_cp2

0xbee8,	// (0x00046aa3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbee8,	// (0x00046aa3) list_single_graphic_hl_pane_g4_cp2

0xcacf,	// (0x0004768a) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcacf,	// (0x0004768a) list_single_graphic_hl_pane_g5_cp2

0x6294,	// (0x00040e4f) control_pane_g4_ParamLimits

0x6294,	// (0x00040e4f) control_pane_g4

0x97d7,	// (0x00044392) bg_popup_sub_pane_cp10_ParamLimits

0xc2bc,	// (0x00046e77) list_choice_list_pane_ParamLimits

0xc2cb,	// (0x00046e86) scroll_pane_cp23

0x821d,	// (0x00042dd8) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8b3,	// (0x0004746e) list_preview_fixed_pane_ParamLimits

0xc8c9,	// (0x00047484) list_preview_fixed_pane_cp_ParamLimits

0xc8c9,	// (0x00047484) list_preview_fixed_pane_cp

0xc8d5,	// (0x00047490) popup_preview_fixed_window_g1_ParamLimits

0xc8d5,	// (0x00047490) popup_preview_fixed_window_g1

0xc8e1,	// (0x0004749c) popup_preview_fixed_window_g2_ParamLimits

0xc8e1,	// (0x0004749c) popup_preview_fixed_window_g2

0x0002,

0xfb6a,	// (0x0004a725) popup_preview_fixed_window_g_ParamLimits

0xfb6a,	// (0x0004a725) popup_preview_fixed_window_g

0x5ea1,	// (0x00040a5c) aid_navi_side_left_pane_ParamLimits

0x5eb6,	// (0x00040a71) aid_navi_side_right_pane_ParamLimits

0x5ece,	// (0x00040a89) navi_icon_pane_stacon_ParamLimits

0x5ee2,	// (0x00040a9d) navi_navi_pane_stacon_ParamLimits

0x5ece,	// (0x00040a89) navi_text_pane_stacon_ParamLimits

0x7ea0,	// (0x00042a5b) main_text_info_pane

0xcaf9,	// (0x000476b4) listscroll_text_info_pane

0xcb01,	// (0x000476bc) list_text_info_pane_ParamLimits

0xcb01,	// (0x000476bc) list_text_info_pane

0xcb10,	// (0x000476cb) scroll_pane_cp24_ParamLimits

0xcb10,	// (0x000476cb) scroll_pane_cp24

0xcb2e,	// (0x000476e9) list_text_info_pane_t1_ParamLimits

0xcb2e,	// (0x000476e9) list_text_info_pane_t1

0x63fa,	// (0x00040fb5) popup_fast_swap2_window_ParamLimits

0x63fa,	// (0x00040fb5) popup_fast_swap2_window

0xcb5f,	// (0x0004771a) aid_size_cell_fast2

0x7ea0,	// (0x00042a5b) bg_popup_window_pane_cp17

0xa13f,	// (0x00044cfa) heading_pane_cp2

0x846c,	// (0x00043027) listscroll_fast2_pane

0xcb69,	// (0x00047724) grid_fast2_pane

0xcb73,	// (0x0004772e) listscroll_fast2_pane_g1

0xcb7b,	// (0x00047736) listscroll_fast2_pane_g2

0x0001,

0xfbe6,	// (0x0004a7a1) listscroll_fast2_pane_g

0x8973,	// (0x0004352e) scroll_pane_cp26

0xcb85,	// (0x00047740) cell_fast2_pane_ParamLimits

0xcb85,	// (0x00047740) cell_fast2_pane

0xcb9a,	// (0x00047755) cell_fast2_pane_g1

0xcba3,	// (0x0004775e) cell_fast2_pane_g2

0xcbac,	// (0x00047767) cell_fast2_pane_g3

0x0002,

0xfbeb,	// (0x0004a7a6) cell_fast2_pane_g

0x855f,	// (0x0004311a) grid_highlight_pane_cp9

0x8574,	// (0x0004312f) main_eswt_pane_ParamLimits

0x8574,	// (0x0004312f) main_eswt_pane

0xcb25,	// (0x000476e0) list_single_text_info_pane

0xcbb4,	// (0x0004776f) eswt_ctrl_button_pane

0xcbb4,	// (0x0004776f) eswt_ctrl_canvas_pane

0xcbbc,	// (0x00047777) eswt_ctrl_combo_pane

0xcbb4,	// (0x0004776f) eswt_ctrl_default_pane

0xcbb4,	// (0x0004776f) eswt_ctrl_label_pane

0xcbc4,	// (0x0004777f) eswt_ctrl_wait_pane

0xcbcc,	// (0x00047787) eswt_shell_pane

0x7ea0,	// (0x00042a5b) listscroll_eswt_app_pane

0xcbec,	// (0x000477a7) popup_eswt_tasktip_window_ParamLimits

0xcbec,	// (0x000477a7) popup_eswt_tasktip_window

0x9d55,	// (0x00044910) bg_popup_window_pane_cp18

0xcbfd,	// (0x000477b8) eswt_control_pane_g1_ParamLimits

0xcbfd,	// (0x000477b8) eswt_control_pane_g1

0xcc0a,	// (0x000477c5) eswt_control_pane_g2_ParamLimits

0xcc0a,	// (0x000477c5) eswt_control_pane_g2

0xcc17,	// (0x000477d2) eswt_control_pane_g3_ParamLimits

0xcc17,	// (0x000477d2) eswt_control_pane_g3

0xcc24,	// (0x000477df) eswt_control_pane_g4_ParamLimits

0xcc24,	// (0x000477df) eswt_control_pane_g4

0x0003,

0xfbf2,	// (0x0004a7ad) eswt_control_pane_g_ParamLimits

0xfbf2,	// (0x0004a7ad) eswt_control_pane_g

0x880f,	// (0x000433ca) bg_button_pane_ParamLimits

0x880f,	// (0x000433ca) bg_button_pane

0x8574,	// (0x0004312f) common_borders_pane_copy2_ParamLimits

0x8574,	// (0x0004312f) common_borders_pane_copy2

0xcc31,	// (0x000477ec) control_button_pane_g1_ParamLimits

0xcc31,	// (0x000477ec) control_button_pane_g1

0xcc3d,	// (0x000477f8) control_button_pane_g2_ParamLimits

0xcc3d,	// (0x000477f8) control_button_pane_g2

0xcc49,	// (0x00047804) control_button_pane_g3_ParamLimits

0xcc49,	// (0x00047804) control_button_pane_g3

0x0002,

0xfbfb,	// (0x0004a7b6) control_button_pane_g_ParamLimits

0xfbfb,	// (0x0004a7b6) control_button_pane_g

0xcc5d,	// (0x00047818) control_button_pane_t1

0xcc6b,	// (0x00047826) control_button_pane_t2

0x0001,

0xfc02,	// (0x0004a7bd) control_button_pane_t

0x9ce1,	// (0x0004489c) bg_button_pane_g1

0x9ce9,	// (0x000448a4) bg_button_pane_g2

0x9cf1,	// (0x000448ac) bg_button_pane_g3

0x9cf9,	// (0x000448b4) bg_button_pane_g4

0x9d01,	// (0x000448bc) bg_button_pane_g5

0x9d09,	// (0x000448c4) bg_button_pane_g6

0x9d11,	// (0x000448cc) bg_button_pane_g7

0x9d19,	// (0x000448d4) bg_button_pane_g8

0x9d21,	// (0x000448dc) bg_button_pane_g9

0x0008,

0xf86b,	// (0x0004a426) bg_button_pane_g

0xc277,	// (0x00046e32) common_borders_pane_ParamLimits

0xc277,	// (0x00046e32) common_borders_pane

0xcbfd,	// (0x000477b8) eswt_control_pane_g1_copy1_ParamLimits

0xcbfd,	// (0x000477b8) eswt_control_pane_g1_copy1

0xcc0a,	// (0x000477c5) eswt_control_pane_g2_copy1_ParamLimits

0xcc0a,	// (0x000477c5) eswt_control_pane_g2_copy1

0xcc17,	// (0x000477d2) eswt_control_pane_g3_copy1_ParamLimits

0xcc17,	// (0x000477d2) eswt_control_pane_g3_copy1

0xcc24,	// (0x000477df) eswt_control_pane_g4_copy1_ParamLimits

0xcc24,	// (0x000477df) eswt_control_pane_g4_copy1

0xc2b2,	// (0x00046e6d) bg_eswt_ctrl_canvas_pane_g1

0xc277,	// (0x00046e32) common_borders_pane_cp2_ParamLimits

0xc277,	// (0x00046e32) common_borders_pane_cp2

0xc277,	// (0x00046e32) common_borders_pane_cp3_ParamLimits

0xc277,	// (0x00046e32) common_borders_pane_cp3

0xcc79,	// (0x00047834) separator_horizontal_pane

0xcc81,	// (0x0004783c) separator_vertical_pane

0xcbfd,	// (0x000477b8) eswt_control_pane_g1_copy2_ParamLimits

0xcbfd,	// (0x000477b8) eswt_control_pane_g1_copy2

0xcc0a,	// (0x000477c5) eswt_control_pane_g2_copy2_ParamLimits

0xcc0a,	// (0x000477c5) eswt_control_pane_g2_copy2

0xcc17,	// (0x000477d2) eswt_control_pane_g3_copy2_ParamLimits

0xcc17,	// (0x000477d2) eswt_control_pane_g3_copy2

0xcc24,	// (0x000477df) eswt_control_pane_g4_copy2_ParamLimits

0xcc24,	// (0x000477df) eswt_control_pane_g4_copy2

0x7ea0,	// (0x00042a5b) common_borders_pane_cp4

0xcc8a,	// (0x00047845) separator_horizontal_pane_g1

0xcc93,	// (0x0004784e) separator_horizontal_pane_g2

0xcc9c,	// (0x00047857) separator_horizontal_pane_g3

0x0002,

0xfc07,	// (0x0004a7c2) separator_horizontal_pane_g

0xcbfd,	// (0x000477b8) eswt_control_pane_g1_copy3_ParamLimits

0xcbfd,	// (0x000477b8) eswt_control_pane_g1_copy3

0xcc0a,	// (0x000477c5) eswt_control_pane_g2_copy3_ParamLimits

0xcc0a,	// (0x000477c5) eswt_control_pane_g2_copy3

0xcc17,	// (0x000477d2) eswt_control_pane_g3_copy3_ParamLimits

0xcc17,	// (0x000477d2) eswt_control_pane_g3_copy3

0xcc24,	// (0x000477df) eswt_control_pane_g4_copy3_ParamLimits

0xcc24,	// (0x000477df) eswt_control_pane_g4_copy3

0x7ea0,	// (0x00042a5b) common_borders_pane_cp5

0xcca5,	// (0x00047860) separator_vertical_pane_g1

0xccae,	// (0x00047869) separator_vertical_pane_g2

0xccb7,	// (0x00047872) separator_vertical_pane_g3

0x0002,

0xfc0e,	// (0x0004a7c9) separator_vertical_pane_g

0xcbfd,	// (0x000477b8) eswt_control_pane_g1_copy4_ParamLimits

0xcbfd,	// (0x000477b8) eswt_control_pane_g1_copy4

0xcc0a,	// (0x000477c5) eswt_control_pane_g2_copy4_ParamLimits

0xcc0a,	// (0x000477c5) eswt_control_pane_g2_copy4

0xcc17,	// (0x000477d2) eswt_control_pane_g3_copy4_ParamLimits

0xcc17,	// (0x000477d2) eswt_control_pane_g3_copy4

0xcc24,	// (0x000477df) eswt_control_pane_g4_copy4_ParamLimits

0xcc24,	// (0x000477df) eswt_control_pane_g4_copy4

0xccc0,	// (0x0004787b) eswt_ctrl_combo_button_pane

0xccc8,	// (0x00047883) eswt_ctrl_input_pane

0xccd0,	// (0x0004788b) popup_choice_list_window_cp70

0xccd8,	// (0x00047893) eswt_ctrl_input_pane_t1

0x7ea0,	// (0x00042a5b) input_focus_pane_cp70

0xc277,	// (0x00046e32) bg_button_pane_cp70_ParamLimits

0xc277,	// (0x00046e32) bg_button_pane_cp70

0xcce6,	// (0x000478a1) eswt_ctrl_combo_button_pane_g1

0xccee,	// (0x000478a9) wait_bar_pane_cp70

0x9d55,	// (0x00044910) bg_popup_window_pane_cp70_ParamLimits

0x9d55,	// (0x00044910) bg_popup_window_pane_cp70

0xccf6,	// (0x000478b1) popup_eswt_tasktip_window_t1

0xcd0c,	// (0x000478c7) wait_bar_pane_cp71_ParamLimits

0xcd0c,	// (0x000478c7) wait_bar_pane_cp71

0xcd18,	// (0x000478d3) grid_eswt_app_pane

0x8c98,	// (0x00043853) scroll_pane_cp70

0xcd21,	// (0x000478dc) cell_eswt_app_pane_ParamLimits

0xcd21,	// (0x000478dc) cell_eswt_app_pane

0xcd51,	// (0x0004790c) cell_eswt_app_pane_g1_ParamLimits

0xcd51,	// (0x0004790c) cell_eswt_app_pane_g1

0xcd80,	// (0x0004793b) cell_eswt_app_pane_g2_ParamLimits

0xcd80,	// (0x0004793b) cell_eswt_app_pane_g2

0x0001,

0xfc15,	// (0x0004a7d0) cell_eswt_app_pane_g_ParamLimits

0xfc15,	// (0x0004a7d0) cell_eswt_app_pane_g

0xcda9,	// (0x00047964) cell_eswt_app_pane_t1_ParamLimits

0xcda9,	// (0x00047964) cell_eswt_app_pane_t1

0xcddb,	// (0x00047996) grid_highlight_pane_cp70_ParamLimits

0xcddb,	// (0x00047996) grid_highlight_pane_cp70

0x936e,	// (0x00043f29) set_content_pane_g1

0x9738,	// (0x000442f3) status_small_volume_pane

0x724e,	// (0x00041e09) status_small_volume_pane_g1

0x7256,	// (0x00041e11) volume_small2_pane

0x725f,	// (0x00041e1a) volume_small2_pane_g1

0x7268,	// (0x00041e23) volume_small2_pane_g2

0x7271,	// (0x00041e2c) volume_small2_pane_g3

0x727a,	// (0x00041e35) volume_small2_pane_g4

0x7283,	// (0x00041e3e) volume_small2_pane_g5

0x728c,	// (0x00041e47) volume_small2_pane_g6

0x7295,	// (0x00041e50) volume_small2_pane_g7

0x729e,	// (0x00041e59) volume_small2_pane_g8

0x72a7,	// (0x00041e62) volume_small2_pane_g9

0x72b0,	// (0x00041e6b) volume_small2_pane_g10

0x0009,

0xfc1a,	// (0x0004a7d5) volume_small2_pane_g

0xc678,	// (0x00047233) fep_vkb_top_text_pane_g1_ParamLimits

0xc693,	// (0x0004724e) fep_vkb_top_text_pane_t1_ParamLimits

0xc8ed,	// (0x000474a8) popup_preview_fixed_window_g3_ParamLimits

0xc8ed,	// (0x000474a8) popup_preview_fixed_window_g3

0x68a9,	// (0x00041464) popup_toolbar_trans_pane

0xb0b0,	// (0x00045c6b) aid_height_set_list_ParamLimits

0xb0c1,	// (0x00045c7c) aid_size_parent_ParamLimits

0x97d7,	// (0x00044392) list_highlight_pane_cp2_ParamLimits

0x936e,	// (0x00043f29) set_content_pane_g1_ParamLimits

0x528f,	// (0x0003fe4a) list_single_image_pane_ParamLimits

0x528f,	// (0x0003fe4a) list_single_image_pane

0xcde7,	// (0x000479a2) aid_size_cell_image_ParamLimits

0xcde7,	// (0x000479a2) aid_size_cell_image

0xcdf4,	// (0x000479af) grid_single_image_pane_ParamLimits

0xcdf4,	// (0x000479af) grid_single_image_pane

0xa9e2,	// (0x0004559d) list_single_image_pane_g1_ParamLimits

0xa9e2,	// (0x0004559d) list_single_image_pane_g1

0xce00,	// (0x000479bb) list_single_image_pane_g2_ParamLimits

0xce00,	// (0x000479bb) list_single_image_pane_g2

0x0001,

0xfc2f,	// (0x0004a7ea) list_single_image_pane_g_ParamLimits

0xfc2f,	// (0x0004a7ea) list_single_image_pane_g

0xce14,	// (0x000479cf) list_single_image_pane_t1_ParamLimits

0xce14,	// (0x000479cf) list_single_image_pane_t1

0xce2a,	// (0x000479e5) cell_image_list_pane_ParamLimits

0xce2a,	// (0x000479e5) cell_image_list_pane

0xce3e,	// (0x000479f9) cell_image_list_pane_g1

0xce47,	// (0x00047a02) cell_image_list_pane_g2

0x0001,

0xfc34,	// (0x0004a7ef) cell_image_list_pane_g

0xce50,	// (0x00047a0b) aid_size_cell_tb_trans_pane

0x880f,	// (0x000433ca) bg_tb_trans_pane

0xce62,	// (0x00047a1d) grid_tb_trans_pane

0x9ce1,	// (0x0004489c) bg_tb_trans_pane_g1

0x9ce9,	// (0x000448a4) bg_tb_trans_pane_g2

0x9cf1,	// (0x000448ac) bg_tb_trans_pane_g3

0x9cf9,	// (0x000448b4) bg_tb_trans_pane_g4

0x9d01,	// (0x000448bc) bg_tb_trans_pane_g5

0x9d19,	// (0x000448d4) bg_tb_trans_pane_g6

0x9d21,	// (0x000448dc) bg_tb_trans_pane_g7

0x9d09,	// (0x000448c4) bg_tb_trans_pane_g8

0x9d11,	// (0x000448cc) bg_tb_trans_pane_g9

0x0008,

0xfc39,	// (0x0004a7f4) bg_tb_trans_pane_g

0xce76,	// (0x00047a31) cell_toolbar_trans_pane_ParamLimits

0xce76,	// (0x00047a31) cell_toolbar_trans_pane

0xc2b2,	// (0x00046e6d) cell_toolbar_trans_pane_g1

0xbe70,	// (0x00046a2b) list_form2_midp_pane_t1

0xbe7e,	// (0x00046a39) list_form2_midp_pane_t2

0x0001,

0xfae2,	// (0x0004a69d) list_form2_midp_pane_t

0xbe8c,	// (0x00046a47) scroll_pane_cp51_ParamLimits

0xc054,	// (0x00046c0f) form2_midp_wait_pane_g1

0xc05d,	// (0x00046c18) form2_midp_wait_pane_g2

0xc066,	// (0x00046c21) form2_midp_wait_pane_g3

0x0002,

0xfaf7,	// (0x0004a6b2) form2_midp_wait_pane_g

0x7f94,	// (0x00042b4f) list_highlight_pane_cp21_ParamLimits

0xc0bd,	// (0x00046c78) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0cc,	// (0x00046c87) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6d02,	// (0x000418bd) list_single_2graphic_im_pane_ParamLimits

0x6d02,	// (0x000418bd) list_single_2graphic_im_pane

0xce9c,	// (0x00047a57) list_single_2graphic_im_pane_g1_ParamLimits

0xce9c,	// (0x00047a57) list_single_2graphic_im_pane_g1

0xcead,	// (0x00047a68) list_single_2graphic_im_pane_g2_ParamLimits

0xcead,	// (0x00047a68) list_single_2graphic_im_pane_g2

0xceb9,	// (0x00047a74) list_single_2graphic_im_pane_g3_ParamLimits

0xceb9,	// (0x00047a74) list_single_2graphic_im_pane_g3

0x0003,

0xfc4c,	// (0x0004a807) list_single_2graphic_im_pane_g_ParamLimits

0xfc4c,	// (0x0004a807) list_single_2graphic_im_pane_g

0xced9,	// (0x00047a94) list_single_2graphic_im_pane_t1_ParamLimits

0xced9,	// (0x00047a94) list_single_2graphic_im_pane_t1

0xc8f9,	// (0x000474b4) list_single_graphic_2heading_pane_fp_ParamLimits

0xc8f9,	// (0x000474b4) list_single_graphic_2heading_pane_fp

0x5610,	// (0x000401cb) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5610,	// (0x000401cb) list_single_graphic_2heading_pane_fp_g1

0xc90e,	// (0x000474c9) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc90e,	// (0x000474c9) list_single_graphic_2heading_pane_fp_g2

0x87aa,	// (0x00043365) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x87aa,	// (0x00043365) list_single_graphic_2heading_pane_fp_g3

0x881d,	// (0x000433d8) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x881d,	// (0x000433d8) list_single_graphic_2heading_pane_fp_g4

0xc91a,	// (0x000474d5) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc91a,	// (0x000474d5) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7a,	// (0x0004a735) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7a,	// (0x0004a735) list_single_graphic_2heading_pane_fp_g

0x5759,	// (0x00040314) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5759,	// (0x00040314) list_single_graphic_2heading_pane_fp_t1

0x5648,	// (0x00040203) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5648,	// (0x00040203) list_single_graphic_2heading_pane_fp_t2

0x576f,	// (0x0004032a) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x576f,	// (0x0004032a) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc55,	// (0x0004a810) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc55,	// (0x0004a810) list_single_graphic_2heading_pane_fp_t

0xc33e,	// (0x00046ef9) fep_hwr_write_pane_g5_ParamLimits

0xc33e,	// (0x00046ef9) fep_hwr_write_pane_g5

0xc34a,	// (0x00046f05) fep_hwr_write_pane_g6_ParamLimits

0xc34a,	// (0x00046f05) fep_hwr_write_pane_g6

0xcbcc,	// (0x00047787) eswt_shell_pane_ParamLimits

0x9d55,	// (0x00044910) bg_popup_window_pane_cp18_ParamLimits

0xb009,	// (0x00045bc4) heading_pane_cp70

0xccf6,	// (0x000478b1) popup_eswt_tasktip_window_t1_ParamLimits

0x984e,	// (0x00044409) aid_touch_tab_arrow_left

0x985d,	// (0x00044418) aid_touch_tab_arrow_right

0x7edc,	// (0x00042a97) title_pane_g3_ParamLimits

0x7edc,	// (0x00042a97) title_pane_g3

0x87ce,	// (0x00043389) set_value_pane_g1

0x68a9,	// (0x00041464) popup_toolbar_trans_pane_ParamLimits

0xce50,	// (0x00047a0b) aid_size_cell_tb_trans_pane_ParamLimits

0x880f,	// (0x000433ca) bg_tb_trans_pane_ParamLimits

0xce62,	// (0x00047a1d) grid_tb_trans_pane_ParamLimits

0x821d,	// (0x00042dd8) cont_note_pane_ParamLimits

0x821d,	// (0x00042dd8) cont_note_pane

0x8574,	// (0x0004312f) cont_snote2_single_text_pane_ParamLimits

0x8574,	// (0x0004312f) cont_snote2_single_text_pane

0x8574,	// (0x0004312f) cont_snote2_single_graphic_pane_ParamLimits

0x8574,	// (0x0004312f) cont_snote2_single_graphic_pane

0xa35a,	// (0x00044f15) cont_note_wait_pane_ParamLimits

0xa35a,	// (0x00044f15) cont_note_wait_pane

0xa35a,	// (0x00044f15) cont_note_image_pane_ParamLimits

0xa35a,	// (0x00044f15) cont_note_image_pane

0xcf0a,	// (0x00047ac5) popup_note2_window_g1_ParamLimits

0xcf0a,	// (0x00047ac5) popup_note2_window_g1

0xcf3b,	// (0x00047af6) popup_note2_window_t1_ParamLimits

0xcf3b,	// (0x00047af6) popup_note2_window_t1

0xcf80,	// (0x00047b3b) popup_note2_window_t2_ParamLimits

0xcf80,	// (0x00047b3b) popup_note2_window_t2

0xcfc5,	// (0x00047b80) popup_note2_window_t3_ParamLimits

0xcfc5,	// (0x00047b80) popup_note2_window_t3

0xd00a,	// (0x00047bc5) popup_note2_window_t4_ParamLimits

0xd00a,	// (0x00047bc5) popup_note2_window_t4

0x82a1,	// (0x00042e5c) popup_note2_window_t5_ParamLimits

0x82a1,	// (0x00042e5c) popup_note2_window_t5

0x0004,

0xfc61,	// (0x0004a81c) popup_note2_window_t_ParamLimits

0xfc61,	// (0x0004a81c) popup_note2_window_t

0xd039,	// (0x00047bf4) popup_note2_image_window_g1_ParamLimits

0xd039,	// (0x00047bf4) popup_note2_image_window_g1

0xd045,	// (0x00047c00) popup_note2_image_window_g2_ParamLimits

0xd045,	// (0x00047c00) popup_note2_image_window_g2

0x0001,

0xfc6c,	// (0x0004a827) popup_note2_image_window_g_ParamLimits

0xfc6c,	// (0x0004a827) popup_note2_image_window_g

0xd057,	// (0x00047c12) popup_note2_image_window_t1_ParamLimits

0xd057,	// (0x00047c12) popup_note2_image_window_t1

0xd06f,	// (0x00047c2a) popup_note2_image_window_t2_ParamLimits

0xd06f,	// (0x00047c2a) popup_note2_image_window_t2

0xd087,	// (0x00047c42) popup_note2_image_window_t3_ParamLimits

0xd087,	// (0x00047c42) popup_note2_image_window_t3

0x0002,

0xfc71,	// (0x0004a82c) popup_note2_image_window_t_ParamLimits

0xfc71,	// (0x0004a82c) popup_note2_image_window_t

0xa368,	// (0x00044f23) popup_note2_wait_window_g1_ParamLimits

0xa368,	// (0x00044f23) popup_note2_wait_window_g1

0xd0a3,	// (0x00047c5e) popup_note2_wait_window_g2_ParamLimits

0xd0a3,	// (0x00047c5e) popup_note2_wait_window_g2

0xa380,	// (0x00044f3b) popup_note2_wait_window_g3_ParamLimits

0xa380,	// (0x00044f3b) popup_note2_wait_window_g3

0x0002,

0xfc78,	// (0x0004a833) popup_note2_wait_window_g_ParamLimits

0xfc78,	// (0x0004a833) popup_note2_wait_window_g

0xd0af,	// (0x00047c6a) popup_note2_wait_window_t1_ParamLimits

0xd0af,	// (0x00047c6a) popup_note2_wait_window_t1

0xd0cd,	// (0x00047c88) popup_note2_wait_window_t2_ParamLimits

0xd0cd,	// (0x00047c88) popup_note2_wait_window_t2

0xd0eb,	// (0x00047ca6) popup_note2_wait_window_t3_ParamLimits

0xd0eb,	// (0x00047ca6) popup_note2_wait_window_t3

0xd0fd,	// (0x00047cb8) popup_note2_wait_window_t4_ParamLimits

0xd0fd,	// (0x00047cb8) popup_note2_wait_window_t4

0x0003,

0xfc7f,	// (0x0004a83a) popup_note2_wait_window_t_ParamLimits

0xfc7f,	// (0x0004a83a) popup_note2_wait_window_t

0xd10f,	// (0x00047cca) wait_bar2_pane_ParamLimits

0xd10f,	// (0x00047cca) wait_bar2_pane

0xd127,	// (0x00047ce2) popup_snote2_single_text_window_g1_ParamLimits

0xd127,	// (0x00047ce2) popup_snote2_single_text_window_g1

0xd14f,	// (0x00047d0a) popup_snote2_single_text_window_t1_ParamLimits

0xd14f,	// (0x00047d0a) popup_snote2_single_text_window_t1

0xd19b,	// (0x00047d56) popup_snote2_single_text_window_t2_ParamLimits

0xd19b,	// (0x00047d56) popup_snote2_single_text_window_t2

0xd1e7,	// (0x00047da2) popup_snote2_single_text_window_t3_ParamLimits

0xd1e7,	// (0x00047da2) popup_snote2_single_text_window_t3

0xd228,	// (0x00047de3) popup_snote2_single_text_window_t4_ParamLimits

0xd228,	// (0x00047de3) popup_snote2_single_text_window_t4

0xd25e,	// (0x00047e19) popup_snote2_single_text_window_t5_ParamLimits

0xd25e,	// (0x00047e19) popup_snote2_single_text_window_t5

0x0004,

0xfc88,	// (0x0004a843) popup_snote2_single_text_window_t_ParamLimits

0xfc88,	// (0x0004a843) popup_snote2_single_text_window_t

0xd289,	// (0x00047e44) popup_snote2_single_graphic_window_g1_ParamLimits

0xd289,	// (0x00047e44) popup_snote2_single_graphic_window_g1

0xd2b1,	// (0x00047e6c) popup_snote2_single_graphic_window_g2_ParamLimits

0xd2b1,	// (0x00047e6c) popup_snote2_single_graphic_window_g2

0x0001,

0xfc93,	// (0x0004a84e) popup_snote2_single_graphic_window_g_ParamLimits

0xfc93,	// (0x0004a84e) popup_snote2_single_graphic_window_g

0xd2d9,	// (0x00047e94) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2d9,	// (0x00047e94) popup_snote2_single_graphic_window_t1

0xd325,	// (0x00047ee0) popup_snote2_single_graphic_window_t2_ParamLimits

0xd325,	// (0x00047ee0) popup_snote2_single_graphic_window_t2

0xd1e7,	// (0x00047da2) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1e7,	// (0x00047da2) popup_snote2_single_graphic_window_t3

0xd228,	// (0x00047de3) popup_snote2_single_graphic_window_t4_ParamLimits

0xd228,	// (0x00047de3) popup_snote2_single_graphic_window_t4

0xd25e,	// (0x00047e19) popup_snote2_single_graphic_window_t5_ParamLimits

0xd25e,	// (0x00047e19) popup_snote2_single_graphic_window_t5

0x0004,

0xfc98,	// (0x0004a853) popup_snote2_single_graphic_window_t_ParamLimits

0xfc98,	// (0x0004a853) popup_snote2_single_graphic_window_t

0xbd4d,	// (0x00046908) clock_nsta_pane_cp2_t1

0xbd4d,	// (0x00046908) clock_nsta_pane_cp2_t2

0x0001,

0xfab8,	// (0x0004a673) clock_nsta_pane_cp2_t

0x4e6f,	// (0x0003fa2a) form_field_data_wide_pane_g1_ParamLimits

0x87aa,	// (0x00043365) form_field_data_wide_pane_g2_ParamLimits

0x87aa,	// (0x00043365) form_field_data_wide_pane_g2

0x881d,	// (0x000433d8) form_field_data_wide_pane_g3_ParamLimits

0x881d,	// (0x000433d8) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0004a23b) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0004a23b) form_field_data_wide_pane_g

0xbc3f,	// (0x000467fa) grid_touch_3_pane_ParamLimits

0xbc3f,	// (0x000467fa) grid_touch_3_pane

0xd371,	// (0x00047f2c) cell_touch_3_pane_ParamLimits

0xd371,	// (0x00047f2c) cell_touch_3_pane

0xc2b2,	// (0x00046e6d) cell_touch_3_pane_g1

0xc2b2,	// (0x00046e6d) cell_touch_3_pane_g2

0x0001,

0xfb3d,	// (0x0004a6f8) cell_touch_3_pane_g

0x82d3,	// (0x00042e8e) cont_query_data_pane

0x82db,	// (0x00042e96) cont_query_data_pane_cp1

0xd39f,	// (0x00047f5a) button_value_adjust_pane_cp7

0xd3a7,	// (0x00047f62) query_popup_pane_cp3

0x8f76,	// (0x00043b31) bg_popup_sub_pane_cp22_ParamLimits

0x5fe3,	// (0x00040b9e) navi_navi_volume_pane_cp2

0x5ffe,	// (0x00040bb9) popup_side_volume_key_window_g2

0x600d,	// (0x00040bc8) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0004a2d1) popup_side_volume_key_window_g

0x602a,	// (0x00040be5) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0004a2d8) popup_side_volume_key_window_t

0x922d,	// (0x00043de8) popup_side_volume_key_window_ParamLimits

0x4ab7,	// (0x0003f672) list_double_graphic_pane_g4_ParamLimits

0x4ab7,	// (0x0003f672) list_double_graphic_pane_g4

0x6d3f,	// (0x000418fa) list_single_2heading_msg_pane_ParamLimits

0x6d3f,	// (0x000418fa) list_single_2heading_msg_pane

0x72b9,	// (0x00041e74) list_single_2heading_msg_pane_g1_ParamLimits

0x72b9,	// (0x00041e74) list_single_2heading_msg_pane_g1

0x93d2,	// (0x00043f8d) list_single_2heading_msg_pane_g2_ParamLimits

0x93d2,	// (0x00043f8d) list_single_2heading_msg_pane_g2

0x6e46,	// (0x00041a01) list_single_2heading_msg_pane_g3_ParamLimits

0x6e46,	// (0x00041a01) list_single_2heading_msg_pane_g3

0x72c5,	// (0x00041e80) list_single_2heading_msg_pane_g4_ParamLimits

0x72c5,	// (0x00041e80) list_single_2heading_msg_pane_g4

0x0003,

0xfca3,	// (0x0004a85e) list_single_2heading_msg_pane_g_ParamLimits

0xfca3,	// (0x0004a85e) list_single_2heading_msg_pane_g

0x578f,	// (0x0004034a) list_single_2heading_msg_pane_t1_ParamLimits

0x578f,	// (0x0004034a) list_single_2heading_msg_pane_t1

0x57b7,	// (0x00040372) list_single_2heading_msg_pane_t2_ParamLimits

0x57b7,	// (0x00040372) list_single_2heading_msg_pane_t2

0x57eb,	// (0x000403a6) list_single_2heading_msg_pane_t3_ParamLimits

0x57eb,	// (0x000403a6) list_single_2heading_msg_pane_t3

0x5824,	// (0x000403df) list_single_2heading_msg_pane_t4_ParamLimits

0x5824,	// (0x000403df) list_single_2heading_msg_pane_t4

0x0003,

0xfcac,	// (0x0004a867) list_single_2heading_msg_pane_t_ParamLimits

0xfcac,	// (0x0004a867) list_single_2heading_msg_pane_t

0x7ee8,	// (0x00042aa3) title_pane_g4_ParamLimits

0x7ee8,	// (0x00042aa3) title_pane_g4

0x5df2,	// (0x000409ad) title_pane_stacon_g3_ParamLimits

0x5df2,	// (0x000409ad) title_pane_stacon_g3

0xcecd,	// (0x00047a88) list_single_2graphic_im_pane_g4_ParamLimits

0xcecd,	// (0x00047a88) list_single_2graphic_im_pane_g4

0xadc5,	// (0x00045980) popup_side_volume_key_window_cp

0xb58c,	// (0x00046147) main_idle_act2_pane_t1

0x69a7,	// (0x00041562) toolbar_button_pane_g10

0x876c,	// (0x00043327) popup_toolbar_window_cp1

0xbd3e,	// (0x000468f9) clock_nsta_pane_cp_t1

0xbd3e,	// (0x000468f9) clock_nsta_pane_cp_t2

0x0001,

0xfab3,	// (0x0004a66e) clock_nsta_pane_cp_t

0x5fe3,	// (0x00040b9e) navi_navi_volume_pane_cp2_ParamLimits

0x5ff2,	// (0x00040bad) popup_side_volume_key_window_g1_ParamLimits

0x5ffe,	// (0x00040bb9) popup_side_volume_key_window_g2_ParamLimits

0x600d,	// (0x00040bc8) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0004a2d1) popup_side_volume_key_window_g_ParamLimits

0x6eda,	// (0x00041a95) fep_hwr_aid_pane

0x2deb,	// (0x0003d9a6) bg_fep_hwr_top_pane_g4_ParamLimits

0xc30e,	// (0x00046ec9) fep_hwr_top_pane_g1_ParamLimits

0xc320,	// (0x00046edb) fep_hwr_top_pane_g2_ParamLimits

0x6f93,	// (0x00041b4e) fep_hwr_top_pane_g3_ParamLimits

0xfb08,	// (0x0004a6c3) fep_hwr_top_pane_g_ParamLimits

0x6fa8,	// (0x00041b63) fep_hwr_top_text_pane_ParamLimits

0xab88,	// (0x00045743) aid_touch_tab_arrow_arrow_2

0xab91,	// (0x0004574c) aid_touch_tab_arrow_left_2

0x6eee,	// (0x00041aa9) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6f25,	// (0x00041ae0) fep_hwr_prediction_pane

0xc480,	// (0x0004703b) fep_vkb_prediction_pane

0xc584,	// (0x0004713f) fep_vkb_side_pane_g3_ParamLimits

0xc584,	// (0x0004713f) fep_vkb_side_pane_g3

0xc530,	// (0x000470eb) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc9d0,	// (0x0004758b) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc9dd,	// (0x00047598) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb2,	// (0x0004a76d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd3cc,	// (0x00047f87) fep_hwr_prediction_pane_g1

0x72dd,	// (0x00041e98) fep_hwr_prediction_pane_g2

0x72e5,	// (0x00041ea0) fep_hwr_prediction_pane_g3

0x72ed,	// (0x00041ea8) fep_hwr_prediction_pane_g4

0x0003,

0xfcb5,	// (0x0004a870) fep_hwr_prediction_pane_g

0xd3cc,	// (0x00047f87) fep_vkb_prediction_pane_g1

0xd3d6,	// (0x00047f91) fep_vkb_prediction_pane_g2

0xd3de,	// (0x00047f99) fep_vkb_prediction_pane_g3

0xd3e6,	// (0x00047fa1) fep_vkb_prediction_pane_g4

0x0003,

0xfcbe,	// (0x0004a879) fep_vkb_prediction_pane_g

0x6c8f,	// (0x0004184a) slider_set_pane_g3

0x6ca3,	// (0x0004185e) slider_set_pane_g4

0x6cbb,	// (0x00041876) slider_set_pane_g5

0x6c8f,	// (0x0004184a) slider_set_pane_g6

0x6cd1,	// (0x0004188c) slider_set_pane_g7

0xb226,	// (0x00045de1) slider_form_pane_g3

0xb22f,	// (0x00045dea) slider_form_pane_g4

0xb237,	// (0x00045df2) slider_form_pane_g5

0xb226,	// (0x00045de1) slider_form_pane_g6

0xb23f,	// (0x00045dfa) slider_form_pane_g7

0xb837,	// (0x000463f2) slider_set_pane_vc_g3

0xb840,	// (0x000463fb) slider_set_pane_vc_g4

0xb849,	// (0x00046404) slider_set_pane_vc_g5

0xb837,	// (0x000463f2) slider_set_pane_vc_g6

0xb852,	// (0x0004640d) slider_set_pane_vc_g7

0xba12,	// (0x000465cd) slider_form_pane_vc_g1

0xba1b,	// (0x000465d6) slider_form_pane_vc_g2

0xba24,	// (0x000465df) slider_form_pane_vc_g3

0xba12,	// (0x000465cd) slider_form_pane_vc_g4

0xba2d,	// (0x000465e8) slider_form_pane_vc_g5

0x0004,

0xfa85,	// (0x0004a640) slider_form_pane_vc_g

0x7ea0,	// (0x00042a5b) main_idle_act3_pane

0xd3ee,	// (0x00047fa9) ai3_links_pane

0xd3f7,	// (0x00047fb2) popup_ai3_data_window_ParamLimits

0xd3f7,	// (0x00047fb2) popup_ai3_data_window

0x7ea0,	// (0x00042a5b) grid_ai3_links_pane

0xd411,	// (0x00047fcc) cell_ai3_links_pane_ParamLimits

0xd411,	// (0x00047fcc) cell_ai3_links_pane

0xd429,	// (0x00047fe4) bg_popup_sub_pane_cp11

0xd436,	// (0x00047ff1) cell_ai3_links_pane_g1

0x7ea0,	// (0x00042a5b) bg_popup_sub_pane_cp12

0xd45b,	// (0x00048016) heading_ai3_data_pane

0xd463,	// (0x0004801e) list_ai3_gene_pane

0xd46f,	// (0x0004802a) popup_ai3_data_window_g1

0xd477,	// (0x00048032) heading_ai3_data_pane_g1

0xd47f,	// (0x0004803a) heading_ai3_data_pane_t1

0xd48d,	// (0x00048048) list_double_ai3_gene_pane_ParamLimits

0xd48d,	// (0x00048048) list_double_ai3_gene_pane

0xd49a,	// (0x00048055) list_single_ai3_gene_pane_ParamLimits

0xd49a,	// (0x00048055) list_single_ai3_gene_pane

0xc277,	// (0x00046e32) list_highlight_pane_cp7_ParamLimits

0xc277,	// (0x00046e32) list_highlight_pane_cp7

0xd4a7,	// (0x00048062) list_single_a13_gene_pane_t1_ParamLimits

0xd4a7,	// (0x00048062) list_single_a13_gene_pane_t1

0xd4be,	// (0x00048079) list_single_ai3_gene_pane_g1

0xd4c7,	// (0x00048082) list_single_ai3_gene_pane_g2

0x0001,

0xfcc7,	// (0x0004a882) list_single_ai3_gene_pane_g

0xd4cf,	// (0x0004808a) list_double_ai3_gene_pane_g1_ParamLimits

0xd4cf,	// (0x0004808a) list_double_ai3_gene_pane_g1

0xd4db,	// (0x00048096) list_double_ai3_gene_pane_t1_ParamLimits

0xd4db,	// (0x00048096) list_double_ai3_gene_pane_t1

0xd4f7,	// (0x000480b2) list_double_ai3_gene_pane_t2_ParamLimits

0xd4f7,	// (0x000480b2) list_double_ai3_gene_pane_t2

0xd50d,	// (0x000480c8) list_double_ai3_gene_pane_t3_ParamLimits

0xd50d,	// (0x000480c8) list_double_ai3_gene_pane_t3

0x0002,

0xfccc,	// (0x0004a887) list_double_ai3_gene_pane_t_ParamLimits

0xfccc,	// (0x0004a887) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5785,	// (0x00040340) aid_size_min_col_2

0xd3b8,	// (0x00047f73) aid_size_min_msg_ParamLimits

0xd3b8,	// (0x00047f73) aid_size_min_msg

0xc684,	// (0x0004723f) fep_vkb_top_text_pane_g2_ParamLimits

0xc684,	// (0x0004723f) fep_vkb_top_text_pane_g2

0x0001,

0xfb38,	// (0x0004a6f3) fep_vkb_top_text_pane_g_ParamLimits

0xfb38,	// (0x0004a6f3) fep_vkb_top_text_pane_g

0x7ea0,	// (0x00042a5b) main_hc_apps_shell_pane

0xd52a,	// (0x000480e5) grid_hc_apps_pane_ParamLimits

0xd52a,	// (0x000480e5) grid_hc_apps_pane

0xd539,	// (0x000480f4) list_hc_apps_pane

0xd541,	// (0x000480fc) scroll_pane_cp37_ParamLimits

0xd541,	// (0x000480fc) scroll_pane_cp37

0xd54d,	// (0x00048108) cell_hc_apps_pane_ParamLimits

0xd54d,	// (0x00048108) cell_hc_apps_pane

0xd5fb,	// (0x000481b6) cell_hc_apps_pane_g1_ParamLimits

0xd5fb,	// (0x000481b6) cell_hc_apps_pane_g1

0xd62c,	// (0x000481e7) cell_hc_apps_pane_g2_ParamLimits

0xd62c,	// (0x000481e7) cell_hc_apps_pane_g2

0xd648,	// (0x00048203) cell_hc_apps_pane_g3_ParamLimits

0xd648,	// (0x00048203) cell_hc_apps_pane_g3

0x0002,

0xfcd3,	// (0x0004a88e) cell_hc_apps_pane_g_ParamLimits

0xfcd3,	// (0x0004a88e) cell_hc_apps_pane_g

0xd66a,	// (0x00048225) cell_hc_apps_pane_t1_ParamLimits

0xd66a,	// (0x00048225) cell_hc_apps_pane_t1

0x821d,	// (0x00042dd8) grid_highlight_pane_cp10_ParamLimits

0x821d,	// (0x00042dd8) grid_highlight_pane_cp10

0xd6aa,	// (0x00048265) list_single_hc_apps_pane_ParamLimits

0xd6aa,	// (0x00048265) list_single_hc_apps_pane

0xd706,	// (0x000482c1) list_single_hc_apps_pane_g1

0x72f5,	// (0x00041eb0) list_single_hc_apps_pane_g2

0x0001,

0xfcda,	// (0x0004a895) list_single_hc_apps_pane_g

0x730e,	// (0x00041ec9) list_single_hc_apps_pane_g2_copy1

0x5849,	// (0x00040404) list_single_hc_apps_pane_t1

0x7f94,	// (0x00042b4f) bg_set_opt_pane_cp_ParamLimits

0x5c6e,	// (0x00040829) setting_slider_pane_t1_ParamLimits

0x5c87,	// (0x00040842) setting_slider_pane_t2_ParamLimits

0x5ca1,	// (0x0004085c) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0004a119) setting_slider_pane_t_ParamLimits

0x5cb9,	// (0x00040874) slider_set_pane_ParamLimits

0x62a8,	// (0x00040e63) control_pane_g5_ParamLimits

0x62a8,	// (0x00040e63) control_pane_g5

0xb075,	// (0x00045c30) slider_set_pane_g1_ParamLimits

0x6c83,	// (0x0004183e) slider_set_pane_g2_ParamLimits

0x6c8f,	// (0x0004184a) slider_set_pane_g3_ParamLimits

0x6ca3,	// (0x0004185e) slider_set_pane_g4_ParamLimits

0x6cbb,	// (0x00041876) slider_set_pane_g5_ParamLimits

0x6c8f,	// (0x0004184a) slider_set_pane_g6_ParamLimits

0x6cd1,	// (0x0004188c) slider_set_pane_g7_ParamLimits

0xf969,	// (0x0004a524) slider_set_pane_g_ParamLimits

0x9319,	// (0x00043ed4) navi_icon_text_pane_ParamLimits

0x980f,	// (0x000443ca) aid_fill_nsta_2_ParamLimits

0x984e,	// (0x00044409) aid_touch_tab_arrow_left_ParamLimits

0x985d,	// (0x00044418) aid_touch_tab_arrow_right_ParamLimits

0x98ca,	// (0x00044485) clock_nsta_pane_ParamLimits

0xab6a,	// (0x00045725) navi_icon_pane_g1_ParamLimits

0xab76,	// (0x00045731) navi_text_pane_t1_ParamLimits

0xbe4a,	// (0x00046a05) navi_icon_text_pane_g1_ParamLimits

0xbe56,	// (0x00046a11) navi_icon_text_pane_t1_ParamLimits

0xd706,	// (0x000482c1) list_single_hc_apps_pane_g1_ParamLimits

0x72f5,	// (0x00041eb0) list_single_hc_apps_pane_g2_ParamLimits

0xfcda,	// (0x0004a895) list_single_hc_apps_pane_g_ParamLimits

0x730e,	// (0x00041ec9) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5849,	// (0x00040404) list_single_hc_apps_pane_t1_ParamLimits

0x5b78,	// (0x00040733) popup_toolbar2_fixed_window_ParamLimits

0x5b78,	// (0x00040733) popup_toolbar2_fixed_window

0x689f,	// (0x0004145a) popup_toolbar2_float_window

0x7ea0,	// (0x00042a5b) bg_popup_sub_pane_cp27

0xd71f,	// (0x000482da) grid_toolbar2_float_pane

0x7ea0,	// (0x00042a5b) bg_popup_sub_pane_cp26

0xd71f,	// (0x000482da) grid_toolbar2_fixed_pane

0xd727,	// (0x000482e2) cell_toolbar2_fixed_pane_ParamLimits

0xd727,	// (0x000482e2) cell_toolbar2_fixed_pane

0xd737,	// (0x000482f2) cell_toolbar2_fixed_pane_g1

0xd740,	// (0x000482fb) toolbar2_fixed_button_pane

0x9ce1,	// (0x0004489c) toolbar2_fixed_button_pane_g1

0x9ce9,	// (0x000448a4) toolbar2_fixed_button_pane_g2

0x9cf1,	// (0x000448ac) toolbar2_fixed_button_pane_g3

0x9cf9,	// (0x000448b4) toolbar2_fixed_button_pane_g4

0x9d01,	// (0x000448bc) toolbar2_fixed_button_pane_g5

0x9d09,	// (0x000448c4) toolbar2_fixed_button_pane_g6

0x9d11,	// (0x000448cc) toolbar2_fixed_button_pane_g7

0x9d19,	// (0x000448d4) toolbar2_fixed_button_pane_g8

0x9d21,	// (0x000448dc) toolbar2_fixed_button_pane_g9

0x0008,

0xf86b,	// (0x0004a426) toolbar2_fixed_button_pane_g

0xd748,	// (0x00048303) cell_toolbar2_float_pane_ParamLimits

0xd748,	// (0x00048303) cell_toolbar2_float_pane

0xd759,	// (0x00048314) cell_toolbar2_float_pane_g1

0xd740,	// (0x000482fb) toolbar2_fixed_button_pane_cp

0xc3e0,	// (0x00046f9b) fep_vkb_accented_list_pane_ParamLimits

0xc3e0,	// (0x00046f9b) fep_vkb_accented_list_pane

0x70f6,	// (0x00041cb1) bg_popup_fep_shadow_pane_g9

0x9499,	// (0x00044054) bg_popup_fep_shadow_pane_cp3

0x895a,	// (0x00043515) list_accented_list_pane

0xd762,	// (0x0004831d) list_single_accented_list_pane_ParamLimits

0xd762,	// (0x0004831d) list_single_accented_list_pane

0x9499,	// (0x00044054) list_highlight_pane_cp10

0xd773,	// (0x0004832e) list_single_accented_list_pane_t1

0x67ef,	// (0x000413aa) popup_slider_window_ParamLimits

0x67ef,	// (0x000413aa) popup_slider_window

0xd3af,	// (0x00047f6a) aid_indentation_list_msg

0xd82d,	// (0x000483e8) bg_popup_window_pane_cp19

0xd897,	// (0x00048452) popup_slider_window_g1

0xd8b3,	// (0x0004846e) popup_slider_window_g2

0xd8cf,	// (0x0004848a) popup_slider_window_g3

0x0005,

0xfcdf,	// (0x0004a89a) popup_slider_window_g

0xd92b,	// (0x000484e6) popup_slider_window_t1

0xd99f,	// (0x0004855a) small_volume_slider_vertical_pane

0xc2b2,	// (0x00046e6d) small_volume_slider_vertical_pane_g1

0xc2b2,	// (0x00046e6d) small_volume_slider_vertical_pane_g2

0xd9bb,	// (0x00048576) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf1,	// (0x0004a8ac) small_volume_slider_vertical_pane_g

0x593a,	// (0x000404f5) area_side_right_pane_ParamLimits

0x593a,	// (0x000404f5) area_side_right_pane

0x732a,	// (0x00041ee5) aid_size_side_button_ParamLimits

0x732a,	// (0x00041ee5) aid_size_side_button

0x733e,	// (0x00041ef9) grid_sctrl_middle_pane_ParamLimits

0x733e,	// (0x00041ef9) grid_sctrl_middle_pane

0x735d,	// (0x00041f18) sctrl_sk_bottom_pane

0x736e,	// (0x00041f29) sctrl_sk_top_pane

0x7380,	// (0x00041f3b) aid_touch_sctrl_top

0x821d,	// (0x00042dd8) bg_sctrl_sk_pane_ParamLimits

0x821d,	// (0x00042dd8) bg_sctrl_sk_pane

0x738d,	// (0x00041f48) sctrl_sk_top_pane_g1

0x739a,	// (0x00041f55) sctrl_sk_top_pane_t1

0x7380,	// (0x00041f3b) aid_touch_sctrl_bottom

0x821d,	// (0x00042dd8) bg_sctrl_sk_pane_cp_ParamLimits

0x821d,	// (0x00042dd8) bg_sctrl_sk_pane_cp

0x73b5,	// (0x00041f70) sctrl_sk_bottom_pane_g1

0x739a,	// (0x00041f55) sctrl_sk_bottom_pane_t1

0x73be,	// (0x00041f79) cell_sctrl_middle_pane_ParamLimits

0x73be,	// (0x00041f79) cell_sctrl_middle_pane

0x73d9,	// (0x00041f94) aid_touch_sctrl_middle_ParamLimits

0x73d9,	// (0x00041f94) aid_touch_sctrl_middle

0x880f,	// (0x000433ca) bg_sctrl_middle_pane_ParamLimits

0x880f,	// (0x000433ca) bg_sctrl_middle_pane

0xc530,	// (0x000470eb) cell_sctrl_middle_pane_g1_ParamLimits

0xc530,	// (0x000470eb) cell_sctrl_middle_pane_g1

0x73eb,	// (0x00041fa6) cell_sctrl_middle_pane_g2_ParamLimits

0x73eb,	// (0x00041fa6) cell_sctrl_middle_pane_g2

0x0001,

0xfcfd,	// (0x0004a8b8) cell_sctrl_middle_pane_g_ParamLimits

0xfcfd,	// (0x0004a8b8) cell_sctrl_middle_pane_g

0x9ce1,	// (0x0004489c) bg_sctrl_middle_pane_g1

0x9ce9,	// (0x000448a4) bg_sctrl_middle_pane_g2

0x9cf1,	// (0x000448ac) bg_sctrl_middle_pane_g3

0x9cf9,	// (0x000448b4) bg_sctrl_middle_pane_g4

0x9d01,	// (0x000448bc) bg_sctrl_middle_pane_g5

0x9d09,	// (0x000448c4) bg_sctrl_middle_pane_g6

0x9d11,	// (0x000448cc) bg_sctrl_middle_pane_g7

0x9d19,	// (0x000448d4) bg_sctrl_middle_pane_g8

0x0007,

0xfd02,	// (0x0004a8bd) bg_sctrl_middle_pane_g

0x9d21,	// (0x000448dc) bg_sctrl_middle_pane_g8_copy1

0x9ce1,	// (0x0004489c) bg_sctrl_sk_pane_g1

0x9ce9,	// (0x000448a4) bg_sctrl_sk_pane_g2

0x9cf1,	// (0x000448ac) bg_sctrl_sk_pane_g3

0x0008,

0xf86b,	// (0x0004a426) bg_sctrl_sk_pane_g

0x8732,	// (0x000432ed) aid_size_touch_scroll_bar

0x9cf9,	// (0x000448b4) bg_sctrl_sk_pane_g4

0x9d01,	// (0x000448bc) bg_sctrl_sk_pane_g5

0x9d09,	// (0x000448c4) bg_sctrl_sk_pane_g6

0x9d11,	// (0x000448cc) bg_sctrl_sk_pane_g7

0x9d19,	// (0x000448d4) bg_sctrl_sk_pane_g8

0x9d21,	// (0x000448dc) bg_sctrl_sk_pane_g9

0x6458,	// (0x00041013) popup_fep_china_hwr2_fs_candidate_window

0x6462,	// (0x0004101d) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6462,	// (0x0004101d) popup_fep_china_hwr2_fs_control_window

0xc530,	// (0x000470eb) sctrl_sk_top_pane_g2

0x0001,

0xfcf8,	// (0x0004a8b3) sctrl_sk_top_pane_g

0xd9c4,	// (0x0004857f) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9c4,	// (0x0004857f) aid_fep_china_hwr2_fs_cell

0xd9d6,	// (0x00048591) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9d6,	// (0x00048591) bg_popup_fep_shadow_pane_cp4

0xd9ed,	// (0x000485a8) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9ed,	// (0x000485a8) bg_popup_fep_shadow_pane_cp5

0xd9ff,	// (0x000485ba) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9ff,	// (0x000485ba) popup_fep_china_hwr2_fs_control_bar_grid

0xda0f,	// (0x000485ca) popup_fep_china_hwr2_fs_control_funtion_grid

0xda17,	// (0x000485d2) aid_fep_china_hwr2_fs_candi_cell

0x7ea0,	// (0x00042a5b) bg_popup_fep_shadow_pane_cp6

0xda21,	// (0x000485dc) popup_fep_china_hwr2_fs_candidate_grid

0xda2b,	// (0x000485e6) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda2b,	// (0x000485e6) cell_fep_china_hwr2_fs_funtion_grid

0xc2b2,	// (0x00046e6d) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda43,	// (0x000485fe) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda43,	// (0x000485fe) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda51,	// (0x0004860c) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda51,	// (0x0004860c) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd13,	// (0x0004a8ce) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd13,	// (0x0004a8ce) cell_fep_china_hwr2_fs_funtion_grid_g

0xda67,	// (0x00048622) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda67,	// (0x00048622) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda7c,	// (0x00048637) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda7c,	// (0x00048637) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd18,	// (0x0004a8d3) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd18,	// (0x0004a8d3) cell_fep_china_hwr2_fs_funtion_grid_t

0xda98,	// (0x00048653) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdaa0,	// (0x0004865b) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdaa8,	// (0x00048663) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1d,	// (0x0004a8d8) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdab0,	// (0x0004866b) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdab0,	// (0x0004866b) cell_fep_china_hwr2_fs_candidate_grid

0xdac9,	// (0x00048684) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdad1,	// (0x0004868c) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc2b2,	// (0x00046e6d) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc2b2,	// (0x00046e6d) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3d,	// (0x0004a6f8) cell_fep_china_hwr2_fs_candidate_grid_g

0xdad9,	// (0x00048694) cell_fep_china_hwr2_fs_candidate_grid_t1

0x98d7,	// (0x00044492) clock_nsta_pane_cp_24_ParamLimits

0x98d7,	// (0x00044492) clock_nsta_pane_cp_24

0x9955,	// (0x00044510) indicator_nsta_pane_cp_24_ParamLimits

0x9955,	// (0x00044510) indicator_nsta_pane_cp_24

0xa9da,	// (0x00045595) heading_pane_g1

0x0001,

0xf8d0,	// (0x0004a48b) heading_pane_g

0xb3d5,	// (0x00045f90) grid_sct_catagory_button_pane

0xb405,	// (0x00045fc0) scroll_pane_cp5_ParamLimits

0xbe98,	// (0x00046a53) button_value_adjust_pane_cp5_ParamLimits

0xbe98,	// (0x00046a53) button_value_adjust_pane_cp5

0xbf83,	// (0x00046b3e) form2_midp_time_pane_ParamLimits

0xdae7,	// (0x000486a2) cell_sct_catagory_button_pane_ParamLimits

0xdae7,	// (0x000486a2) cell_sct_catagory_button_pane

0xc277,	// (0x00046e32) bg_button_pane_cp01_ParamLimits

0xc277,	// (0x00046e32) bg_button_pane_cp01

0xc2b2,	// (0x00046e6d) cell_sct_catagory_button_pane_g1

0x682e,	// (0x000413e9) popup_tb_extension_window

0xdaf9,	// (0x000486b4) aid_size_cell_ext_ParamLimits

0xdaf9,	// (0x000486b4) aid_size_cell_ext

0x821d,	// (0x00042dd8) bg_tb_trans_pane_cp1_ParamLimits

0x821d,	// (0x00042dd8) bg_tb_trans_pane_cp1

0xdb19,	// (0x000486d4) grid_tb_ext_pane_ParamLimits

0xdb19,	// (0x000486d4) grid_tb_ext_pane

0xdb47,	// (0x00048702) cell_tb_ext_pane_ParamLimits

0xdb47,	// (0x00048702) cell_tb_ext_pane

0xdb5e,	// (0x00048719) cell_tb_ext_pane_g1_ParamLimits

0xdb5e,	// (0x00048719) cell_tb_ext_pane_g1

0xdb7b,	// (0x00048736) cell_tb_ext_pane_t1

0x821d,	// (0x00042dd8) list_highlight_pane_cp11_ParamLimits

0x821d,	// (0x00042dd8) list_highlight_pane_cp11

0x5b97,	// (0x00040752) popup_uni_indicator_window_ParamLimits

0x5b97,	// (0x00040752) popup_uni_indicator_window

0x880f,	// (0x000433ca) bg_popup_sub_pane_cp14

0xdb96,	// (0x00048751) list_uniindi_pane

0xdba2,	// (0x0004875d) uniindi_top_pane

0x821d,	// (0x00042dd8) bg_uniindi_top_pane

0xdbc1,	// (0x0004877c) uniindi_top_pane_g1

0xdbd7,	// (0x00048792) uniindi_top_pane_g2

0x0003,

0xfd24,	// (0x0004a8df) uniindi_top_pane_g

0xdc01,	// (0x000487bc) uniindi_top_pane_t1

0xdc2b,	// (0x000487e6) list_single_uniindi_pane_ParamLimits

0xdc2b,	// (0x000487e6) list_single_uniindi_pane

0xc2b2,	// (0x00046e6d) bg_uniindi_top_pane_g1

0xdc3e,	// (0x000487f9) list_single_uniindi_pane_g1

0xdc51,	// (0x0004880c) list_single_uniindi_pane_t1

0x7ea0,	// (0x00042a5b) control_bg_pane

0xdc76,	// (0x00048831) bg_sctrl_sk_pane_cp1

0xdc7f,	// (0x0004883a) bg_sctrl_sk_pane_cp2

0xdc88,	// (0x00048843) control_bg_pane_g1

0xdc91,	// (0x0004884c) control_bg_pane_g2

0x0001,

0xfd2d,	// (0x0004a8e8) control_bg_pane_g

0xbce2,	// (0x0004689d) cell_indicator_nsta_pane_g1_ParamLimits

0xbcf0,	// (0x000468ab) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa1,	// (0x0004a65c) cell_indicator_nsta_pane_g_ParamLimits

0x55e6,	// (0x000401a1) form2_midp_time_pane_t1_ParamLimits

0x8574,	// (0x0004312f) main_idle_act4_pane_ParamLimits

0x8574,	// (0x0004312f) main_idle_act4_pane

0x682e,	// (0x000413e9) popup_tb_extension_window_ParamLimits

0xdb37,	// (0x000486f2) tb_ext_find_pane_ParamLimits

0xdb37,	// (0x000486f2) tb_ext_find_pane

0xdc9a,	// (0x00048855) ai_gene_pane_1_cp1

0x95d4,	// (0x0004418f) ai_gene_pane_2_cp1

0xdca2,	// (0x0004885d) list_single_idle_plugin_calendar_pane

0xdcab,	// (0x00048866) list_single_idle_plugin_notification_pane

0xdcb4,	// (0x0004886f) list_single_idle_plugin_player_pane

0xdcbd,	// (0x00048878) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcbd,	// (0x00048878) list_single_idle_plugin_shortcut_pane

0xdcdf,	// (0x0004889a) main_idle_act4_pane_t1

0xdcf1,	// (0x000488ac) main_idle_act4_pane_t2

0x0001,

0xfd32,	// (0x0004a8ed) main_idle_act4_pane_t

0xdd03,	// (0x000488be) middle_sk_idle_act4_pane_ParamLimits

0xdd03,	// (0x000488be) middle_sk_idle_act4_pane

0xdd19,	// (0x000488d4) popup_clock_digital_analogue_window_cp2

0xdd33,	// (0x000488ee) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd33,	// (0x000488ee) shortcut_wheel_idle_act4_pane

0xc2b2,	// (0x00046e6d) shortcut_wheel_idle_act4_pane_g1

0xc2b2,	// (0x00046e6d) shortcut_wheel_idle_act4_pane_g2

0xc2b2,	// (0x00046e6d) shortcut_wheel_idle_act4_pane_g3

0xc2b2,	// (0x00046e6d) shortcut_wheel_idle_act4_pane_g4

0xc2b2,	// (0x00046e6d) shortcut_wheel_idle_act4_pane_g5

0xdd47,	// (0x00048902) shortcut_wheel_idle_act4_pane_g6

0xdd4f,	// (0x0004890a) shortcut_wheel_idle_act4_pane_g7

0xdd57,	// (0x00048912) shortcut_wheel_idle_act4_pane_g8

0xdd5f,	// (0x0004891a) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd37,	// (0x0004a8f2) shortcut_wheel_idle_act4_pane_g

0xc530,	// (0x000470eb) middle_sk_idle_act4_pane_g1_ParamLimits

0xc530,	// (0x000470eb) middle_sk_idle_act4_pane_g1

0xddc3,	// (0x0004897e) middle_sk_idle_act4_pane_g2_ParamLimits

0xddc3,	// (0x0004897e) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5a,	// (0x0004a915) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5a,	// (0x0004a915) middle_sk_idle_act4_pane_g

0xddcf,	// (0x0004898a) middle_sk_idle_act4_pane_t1_ParamLimits

0xddcf,	// (0x0004898a) middle_sk_idle_act4_pane_t1

0xddec,	// (0x000489a7) grid_ai_shortcut_pane_ParamLimits

0xddec,	// (0x000489a7) grid_ai_shortcut_pane

0xde05,	// (0x000489c0) list_highlight_pane_cp16_ParamLimits

0xde05,	// (0x000489c0) list_highlight_pane_cp16

0xde12,	// (0x000489cd) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde12,	// (0x000489cd) list_single_idle_plugin_shortcut_pane_g1

0xde1e,	// (0x000489d9) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde1e,	// (0x000489d9) list_single_idle_plugin_shortcut_pane_g2

0xde36,	// (0x000489f1) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde36,	// (0x000489f1) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5f,	// (0x0004a91a) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5f,	// (0x0004a91a) list_single_idle_plugin_shortcut_pane_g

0xde49,	// (0x00048a04) cell_ai_shortcut_pane_ParamLimits

0xde49,	// (0x00048a04) cell_ai_shortcut_pane

0xde6d,	// (0x00048a28) cell_ai_shortcut_pane_g1_ParamLimits

0xde6d,	// (0x00048a28) cell_ai_shortcut_pane_g1

0xdc9a,	// (0x00048855) ai_gene_pane_1_cp2

0xdeb0,	// (0x00048a6b) ai_gene_pane_2_cp2

0xdeb8,	// (0x00048a73) list_highlight_pane_cp15

0xdec1,	// (0x00048a7c) list_single_idle_plugin_calendar_pane_g1

0xdeb8,	// (0x00048a73) list_highlight_pane_cp17

0xdec9,	// (0x00048a84) list_single_idle_plugin_calendar_pane_g1_copy1

0xded1,	// (0x00048a8c) list_single_idle_plugin_player_pane_g1

0xb62e,	// (0x000461e9) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd66,	// (0x0004a921) list_single_idle_plugin_player_pane_g

0xded9,	// (0x00048a94) list_single_idle_plugin_player_pane_t1

0xdee7,	// (0x00048aa2) list_single_idle_plugin_player_pane_t2

0xdef5,	// (0x00048ab0) list_single_idle_plugin_player_pane_t3

0xdf03,	// (0x00048abe) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6b,	// (0x0004a926) list_single_idle_plugin_player_pane_t

0xdf11,	// (0x00048acc) wait_bar_pane_cp15

0xdf19,	// (0x00048ad4) grid_ai_notification_pane

0xb62e,	// (0x000461e9) list_single_idle_plugin_notification_pane_g1

0xdf22,	// (0x00048add) cell_ai_notification_pane_ParamLimits

0xdf22,	// (0x00048add) cell_ai_notification_pane

0xdf2f,	// (0x00048aea) cell_ai_notification_pane_g1

0xdf37,	// (0x00048af2) cell_ai_notification_pane_t1

0xdf45,	// (0x00048b00) tb_ext_find_button_pane

0xdf4d,	// (0x00048b08) tb_ext_find_pane_g1

0xdf55,	// (0x00048b10) tb_ext_find_pane_t1

0x8e86,	// (0x00043a41) tb_ext_find_button_pane_g1

0xdf63,	// (0x00048b1e) tb_ext_find_button_pane_g2

0x0001,

0xfd74,	// (0x0004a92f) tb_ext_find_button_pane_g

0xdcdf,	// (0x0004889a) main_idle_act4_pane_t1_ParamLimits

0xdcf1,	// (0x000488ac) main_idle_act4_pane_t2_ParamLimits

0xfd32,	// (0x0004a8ed) main_idle_act4_pane_t_ParamLimits

0xdd19,	// (0x000488d4) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd27,	// (0x000488e2) sat_plugin_idle_act4_pane_ParamLimits

0xdd27,	// (0x000488e2) sat_plugin_idle_act4_pane

0xdf6c,	// (0x00048b27) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf6c,	// (0x00048b27) sat_plugin_idle_act4_pane_t1

0xdf7f,	// (0x00048b3a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf7f,	// (0x00048b3a) sat_plugin_idle_act4_pane_t2

0xdf92,	// (0x00048b4d) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf92,	// (0x00048b4d) sat_plugin_idle_act4_pane_t3

0xdfa5,	// (0x00048b60) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdfa5,	// (0x00048b60) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd79,	// (0x0004a934) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd79,	// (0x0004a934) sat_plugin_idle_act4_pane_t

0x5ad2,	// (0x0004068d) popup_battery_window_ParamLimits

0x5ad2,	// (0x0004068d) popup_battery_window

0x821d,	// (0x00042dd8) bg_popup_sub_pane_cp25_ParamLimits

0x821d,	// (0x00042dd8) bg_popup_sub_pane_cp25

0xdfb8,	// (0x00048b73) popup_battery_window_g1_ParamLimits

0xdfb8,	// (0x00048b73) popup_battery_window_g1

0xdfc4,	// (0x00048b7f) popup_battery_window_t1_ParamLimits

0xdfc4,	// (0x00048b7f) popup_battery_window_t1

0xdfd6,	// (0x00048b91) popup_battery_window_t2_ParamLimits

0xdfd6,	// (0x00048b91) popup_battery_window_t2

0x0001,

0xfd82,	// (0x0004a93d) popup_battery_window_t_ParamLimits

0xfd82,	// (0x0004a93d) popup_battery_window_t

0x94a1,	// (0x0004405c) midp_canvas_pane_ParamLimits

0x9518,	// (0x000440d3) midp_keypad_pane_ParamLimits

0x9518,	// (0x000440d3) midp_keypad_pane

0x97d7,	// (0x00044392) main_midp_pane_ParamLimits

0xbd5c,	// (0x00046917) signal_pane_g2_cp_ParamLimits

0xdff3,	// (0x00048bae) aid_size_cell_midp_keypad_ParamLimits

0xdff3,	// (0x00048bae) aid_size_cell_midp_keypad

0xe00d,	// (0x00048bc8) midp_keyp_game_grid_pane_ParamLimits

0xe00d,	// (0x00048bc8) midp_keyp_game_grid_pane

0xe02d,	// (0x00048be8) midp_keyp_rocker_pane_ParamLimits

0xe02d,	// (0x00048be8) midp_keyp_rocker_pane

0xe066,	// (0x00048c21) midp_keyp_sk_left_pane_ParamLimits

0xe066,	// (0x00048c21) midp_keyp_sk_left_pane

0xe0c0,	// (0x00048c7b) midp_keyp_sk_right_pane_ParamLimits

0xe0c0,	// (0x00048c7b) midp_keyp_sk_right_pane

0x7ea0,	// (0x00042a5b) bg_button_pane_cp03

0xe11a,	// (0x00048cd5) midp_keyp_sk_left_pane_g1

0x7ea0,	// (0x00042a5b) bg_button_pane_cp04

0xe11a,	// (0x00048cd5) midp_keyp_sk_right_pane_g1

0xc2b2,	// (0x00046e6d) midp_keyp_rocker_pane_g1

0xe123,	// (0x00048cde) keyp_game_cell_pane_ParamLimits

0xe123,	// (0x00048cde) keyp_game_cell_pane

0x7ea0,	// (0x00042a5b) bg_button_pane_cp02

0xe136,	// (0x00048cf1) keyp_game_cell_pane_g1

0x5b16,	// (0x000406d1) popup_fep_vkb2_window_ParamLimits

0x5b16,	// (0x000406d1) popup_fep_vkb2_window

0x7409,	// (0x00041fc4) aid_size_cell_vkb2_ParamLimits

0x7409,	// (0x00041fc4) aid_size_cell_vkb2

0x745d,	// (0x00042018) popup_fep_vkb2_window_g1_ParamLimits

0x745d,	// (0x00042018) popup_fep_vkb2_window_g1

0x74a5,	// (0x00042060) vkb2_area_bottom_pane_ParamLimits

0x74a5,	// (0x00042060) vkb2_area_bottom_pane

0x74f1,	// (0x000420ac) vkb2_area_keypad_pane_ParamLimits

0x74f1,	// (0x000420ac) vkb2_area_keypad_pane

0x7533,	// (0x000420ee) vkb2_area_top_pane_ParamLimits

0x7533,	// (0x000420ee) vkb2_area_top_pane

0x75ad,	// (0x00042168) vkb2_top_entry_pane_ParamLimits

0x75ad,	// (0x00042168) vkb2_top_entry_pane

0x75d7,	// (0x00042192) vkb2_top_grid_left_pane_ParamLimits

0x75d7,	// (0x00042192) vkb2_top_grid_left_pane

0x75f5,	// (0x000421b0) vkb2_top_grid_right_pane_ParamLimits

0x75f5,	// (0x000421b0) vkb2_top_grid_right_pane

0x7613,	// (0x000421ce) vkb2_cell_keypad_pane_ParamLimits

0x7613,	// (0x000421ce) vkb2_cell_keypad_pane

0x76e4,	// (0x0004229f) vkb2_area_bottom_grid_pane_ParamLimits

0x76e4,	// (0x0004229f) vkb2_area_bottom_grid_pane

0x770a,	// (0x000422c5) vkb2_area_bottom_pane_g1_ParamLimits

0x770a,	// (0x000422c5) vkb2_area_bottom_pane_g1

0x772e,	// (0x000422e9) vkb2_area_bottom_pane_g2_ParamLimits

0x772e,	// (0x000422e9) vkb2_area_bottom_pane_g2

0x775c,	// (0x00042317) vkb2_area_bottom_pane_g3_ParamLimits

0x775c,	// (0x00042317) vkb2_area_bottom_pane_g3

0x0002,

0xfd87,	// (0x0004a942) vkb2_area_bottom_pane_g_ParamLimits

0xfd87,	// (0x0004a942) vkb2_area_bottom_pane_g

0x77bd,	// (0x00042378) vkb2_top_cell_left_pane_ParamLimits

0x77bd,	// (0x00042378) vkb2_top_cell_left_pane

0xe147,	// (0x00048d02) vkb2_top_entry_pane_g1_ParamLimits

0xe147,	// (0x00048d02) vkb2_top_entry_pane_g1

0xe155,	// (0x00048d10) vkb2_top_entry_pane_t1_ParamLimits

0xe155,	// (0x00048d10) vkb2_top_entry_pane_t1

0xe187,	// (0x00048d42) vkb2_top_entry_pane_t2_ParamLimits

0xe187,	// (0x00048d42) vkb2_top_entry_pane_t2

0xe1b9,	// (0x00048d74) vkb2_top_entry_pane_t3_ParamLimits

0xe1b9,	// (0x00048d74) vkb2_top_entry_pane_t3

0x0002,

0xfd8e,	// (0x0004a949) vkb2_top_entry_pane_t_ParamLimits

0xfd8e,	// (0x0004a949) vkb2_top_entry_pane_t

0x780a,	// (0x000423c5) vkb2_top_grid_right_pane_g1_ParamLimits

0x780a,	// (0x000423c5) vkb2_top_grid_right_pane_g1

0x7820,	// (0x000423db) vkb2_top_grid_right_pane_g2_ParamLimits

0x7820,	// (0x000423db) vkb2_top_grid_right_pane_g2

0x7838,	// (0x000423f3) vkb2_top_grid_right_pane_g3_ParamLimits

0x7838,	// (0x000423f3) vkb2_top_grid_right_pane_g3

0x7850,	// (0x0004240b) vkb2_top_grid_right_pane_g4_ParamLimits

0x7850,	// (0x0004240b) vkb2_top_grid_right_pane_g4

0x0003,

0xfd95,	// (0x0004a950) vkb2_top_grid_right_pane_g_ParamLimits

0xfd95,	// (0x0004a950) vkb2_top_grid_right_pane_g

0x7866,	// (0x00042421) vkb2_top_cell_left_pane_g1

0x787d,	// (0x00042438) vkb2_cell_keypad_pane_g1_ParamLimits

0x787d,	// (0x00042438) vkb2_cell_keypad_pane_g1

0xe1dd,	// (0x00048d98) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1dd,	// (0x00048d98) vkb2_cell_keypad_pane_t1

0x788b,	// (0x00042446) vkb2_cell_bottom_grid_pane_ParamLimits

0x788b,	// (0x00042446) vkb2_cell_bottom_grid_pane

0x78c4,	// (0x0004247f) vkb2_cell_bottom_grid_pane_g1

0xdd67,	// (0x00048922) aid_call2_pane_cp02

0xdd6f,	// (0x0004892a) aid_call_pane_cp02

0xdd77,	// (0x00048932) clock_digital_number_pane_cp10

0xdd7f,	// (0x0004893a) clock_digital_number_pane_cp11

0xdd87,	// (0x00048942) clock_digital_number_pane_cp12

0xdd8f,	// (0x0004894a) clock_digital_number_pane_cp13

0xdd97,	// (0x00048952) clock_digital_separator_pane_cp10

0x8e86,	// (0x00043a41) popup_clock_digital_analogue_window_cp2_g1

0x8e86,	// (0x00043a41) popup_clock_digital_analogue_window_cp2_g2

0xdd9f,	// (0x0004895a) popup_clock_digital_analogue_window_cp2_g3

0x8e86,	// (0x00043a41) popup_clock_digital_analogue_window_cp2_g4

0xdd9f,	// (0x0004895a) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4a,	// (0x0004a905) popup_clock_digital_analogue_window_cp2_g

0xdda7,	// (0x00048962) popup_clock_digital_analogue_window_cp2_t1

0xddb5,	// (0x00048970) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd55,	// (0x0004a910) popup_clock_digital_analogue_window_cp2_t

0xc2b2,	// (0x00046e6d) clock_digital_number_pane_cp10_g1

0xc2b2,	// (0x00046e6d) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3d,	// (0x0004a6f8) clock_digital_number_pane_cp10_g

0xc2b2,	// (0x00046e6d) clock_digital_separator_pane_cp10_g1

0xc2b2,	// (0x00046e6d) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3d,	// (0x0004a6f8) clock_digital_separator_pane_cp10_g

0xdbe3,	// (0x0004879e) uniindi_top_pane_g3

0xdbf4,	// (0x000487af) uniindi_top_pane_g4

0x769e,	// (0x00042259) vkb2_row_keypad_pane_ParamLimits

0x769e,	// (0x00042259) vkb2_row_keypad_pane

0x78e0,	// (0x0004249b) vkb2_cell_t_keypad_pane_ParamLimits

0x78e0,	// (0x0004249b) vkb2_cell_t_keypad_pane

0x78f0,	// (0x000424ab) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x78f0,	// (0x000424ab) vkb2_cell_t_keypad_pane_cp08

0x7903,	// (0x000424be) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7903,	// (0x000424be) vkb2_cell_t_keypad_pane_cp09

0x7917,	// (0x000424d2) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7917,	// (0x000424d2) vkb2_cell_t_keypad_pane_cp01

0x7928,	// (0x000424e3) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7928,	// (0x000424e3) vkb2_cell_t_keypad_pane_cp02

0x7939,	// (0x000424f4) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7939,	// (0x000424f4) vkb2_cell_t_keypad_pane_cp03

0x794a,	// (0x00042505) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x794a,	// (0x00042505) vkb2_cell_t_keypad_pane_cp04

0x795b,	// (0x00042516) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x795b,	// (0x00042516) vkb2_cell_t_keypad_pane_cp05

0x796c,	// (0x00042527) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x796c,	// (0x00042527) vkb2_cell_t_keypad_pane_cp06

0x797d,	// (0x00042538) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x797d,	// (0x00042538) vkb2_cell_t_keypad_pane_cp07

0x798e,	// (0x00042549) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x798e,	// (0x00042549) vkb2_cell_t_keypad_pane_cp10

0xc530,	// (0x000470eb) vkb2_cell_t_keypad_pane_g1

0xe1f4,	// (0x00048daf) vkb2_cell_t_keypad_pane_t1

0x7ea0,	// (0x00042a5b) popup_grid_graphic2_window

0xe206,	// (0x00048dc1) aid_size_cell_graphic2_ParamLimits

0xe206,	// (0x00048dc1) aid_size_cell_graphic2

0xe23e,	// (0x00048df9) bg_popup_window_pane_cp21_ParamLimits

0xe23e,	// (0x00048df9) bg_popup_window_pane_cp21

0xe24c,	// (0x00048e07) graphic2_pages_pane_ParamLimits

0xe24c,	// (0x00048e07) graphic2_pages_pane

0xe292,	// (0x00048e4d) grid_graphic2_control_pane_ParamLimits

0xe292,	// (0x00048e4d) grid_graphic2_control_pane

0xe2d0,	// (0x00048e8b) grid_graphic2_pane_ParamLimits

0xe2d0,	// (0x00048e8b) grid_graphic2_pane

0xe344,	// (0x00048eff) cell_graphic2_pane

0x7ea0,	// (0x00042a5b) main_comp_mode_pane

0xd463,	// (0x0004801e) list_ai3_gene_pane_ParamLimits

0xd82d,	// (0x000483e8) bg_popup_window_pane_cp19_ParamLimits

0xd839,	// (0x000483f4) bg_touch_area_indi_pane_ParamLimits

0xd839,	// (0x000483f4) bg_touch_area_indi_pane

0xd84f,	// (0x0004840a) bg_touch_area_indi_pane_cp01_ParamLimits

0xd84f,	// (0x0004840a) bg_touch_area_indi_pane_cp01

0xd865,	// (0x00048420) bg_touch_area_indi_pane_cp02_ParamLimits

0xd865,	// (0x00048420) bg_touch_area_indi_pane_cp02

0xd87d,	// (0x00048438) bg_touch_area_indi_pane_cp03_ParamLimits

0xd87d,	// (0x00048438) bg_touch_area_indi_pane_cp03

0xd897,	// (0x00048452) popup_slider_window_g1_ParamLimits

0xd8b3,	// (0x0004846e) popup_slider_window_g2_ParamLimits

0xd8cf,	// (0x0004848a) popup_slider_window_g3_ParamLimits

0xfcdf,	// (0x0004a89a) popup_slider_window_g_ParamLimits

0xd92b,	// (0x000484e6) popup_slider_window_t1_ParamLimits

0xd99f,	// (0x0004855a) small_volume_slider_vertical_pane_ParamLimits

0xe344,	// (0x00048eff) cell_graphic2_pane_ParamLimits

0xe392,	// (0x00048f4d) bg_button_pane_cp10_ParamLimits

0xe392,	// (0x00048f4d) bg_button_pane_cp10

0xe3a5,	// (0x00048f60) bg_button_pane_cp11_ParamLimits

0xe3a5,	// (0x00048f60) bg_button_pane_cp11

0xe3b8,	// (0x00048f73) graphic2_pages_pane_g1_ParamLimits

0xe3b8,	// (0x00048f73) graphic2_pages_pane_g1

0xe3d3,	// (0x00048f8e) graphic2_pages_pane_g2_ParamLimits

0xe3d3,	// (0x00048f8e) graphic2_pages_pane_g2

0x0001,

0xfda3,	// (0x0004a95e) graphic2_pages_pane_g_ParamLimits

0xfda3,	// (0x0004a95e) graphic2_pages_pane_g

0xe3eb,	// (0x00048fa6) graphic2_pages_pane_t1_ParamLimits

0xe3eb,	// (0x00048fa6) graphic2_pages_pane_t1

0xe403,	// (0x00048fbe) cell_graphic2_control_pane_ParamLimits

0xe403,	// (0x00048fbe) cell_graphic2_control_pane

0xe424,	// (0x00048fdf) cell_graphic2_pane_g1_ParamLimits

0xe424,	// (0x00048fdf) cell_graphic2_pane_g1

0xe431,	// (0x00048fec) cell_graphic2_pane_g2_ParamLimits

0xe431,	// (0x00048fec) cell_graphic2_pane_g2

0xe43e,	// (0x00048ff9) cell_graphic2_pane_g3_ParamLimits

0xe43e,	// (0x00048ff9) cell_graphic2_pane_g3

0xe44b,	// (0x00049006) cell_graphic2_pane_g4_ParamLimits

0xe44b,	// (0x00049006) cell_graphic2_pane_g4

0xe458,	// (0x00049013) cell_graphic2_pane_g5_ParamLimits

0xe458,	// (0x00049013) cell_graphic2_pane_g5

0x0004,

0xfda8,	// (0x0004a963) cell_graphic2_pane_g_ParamLimits

0xfda8,	// (0x0004a963) cell_graphic2_pane_g

0xe473,	// (0x0004902e) cell_graphic2_pane_t1_ParamLimits

0xe473,	// (0x0004902e) cell_graphic2_pane_t1

0x9d55,	// (0x00044910) grid_highlight_pane_cp11_ParamLimits

0x9d55,	// (0x00044910) grid_highlight_pane_cp11

0x821d,	// (0x00042dd8) bg_button_pane_cp05

0xe49c,	// (0x00049057) cell_graphic2_control_pane_g1

0xc2b2,	// (0x00046e6d) bg_touch_area_indi_pane_g1

0xe4c4,	// (0x0004907f) aid_cmod_rocker_key_size

0xe4ce,	// (0x00049089) aid_cmode_itu_key_size

0xe4d8,	// (0x00049093) main_cmode_video_pane

0xe4e2,	// (0x0004909d) main_comp_mode_itu_pane

0xe4ee,	// (0x000490a9) main_comp_mode_rocker_pane

0xe4fa,	// (0x000490b5) cell_cmode_rocker_pane_ParamLimits

0xe4fa,	// (0x000490b5) cell_cmode_rocker_pane

0xe50c,	// (0x000490c7) cell_cmode_itu_pane_ParamLimits

0xe50c,	// (0x000490c7) cell_cmode_itu_pane

0x880f,	// (0x000433ca) bg_button_pane_cp06_ParamLimits

0x880f,	// (0x000433ca) bg_button_pane_cp06

0xc530,	// (0x000470eb) cell_cmode_rocker_pane_g1_ParamLimits

0xc530,	// (0x000470eb) cell_cmode_rocker_pane_g1

0xda43,	// (0x000485fe) cell_cmode_rocker_pane_g2_ParamLimits

0xda43,	// (0x000485fe) cell_cmode_rocker_pane_g2

0x0001,

0xfdb8,	// (0x0004a973) cell_cmode_rocker_pane_g_ParamLimits

0xfdb8,	// (0x0004a973) cell_cmode_rocker_pane_g

0x7ea0,	// (0x00042a5b) bg_button_pane_cp07

0xe521,	// (0x000490dc) cell_cmode_itu_pane_g1

0xe52a,	// (0x000490e5) cell_cmode_itu_pane_t1

0xe538,	// (0x000490f3) cell_cmode_itu_pane_t2

0x0001,

0xfdbd,	// (0x0004a978) cell_cmode_itu_pane_t

0xdc66,	// (0x00048821) aid_touch_ctrl_left

0xdc6e,	// (0x00048829) aid_touch_ctrl_right

0x7ea0,	// (0x00042a5b) compa_mode_pane

0xe546,	// (0x00049101) aid_cmod_rocker_key_size_cp

0xe550,	// (0x0004910b) aid_cmode_itu_key_size_cp

0xe55a,	// (0x00049115) compa_mode_pane_g1

0xe562,	// (0x0004911d) compa_mode_pane_g2

0xe56a,	// (0x00049125) compa_mode_pane_g3

0x0002,

0xfdc2,	// (0x0004a97d) compa_mode_pane_g

0xe572,	// (0x0004912d) main_comp_mode_itu_pane_cp

0xe57a,	// (0x00049135) main_comp_mode_rocker_pane_cp

0xe582,	// (0x0004913d) cell_cmode_itu_pane_cp_ParamLimits

0xe582,	// (0x0004913d) cell_cmode_itu_pane_cp

0xe597,	// (0x00049152) cell_cmode_rocker_pane_cp_ParamLimits

0xe597,	// (0x00049152) cell_cmode_rocker_pane_cp

0x880f,	// (0x000433ca) bg_button_pane_cp06_cp_ParamLimits

0x880f,	// (0x000433ca) bg_button_pane_cp06_cp

0xc530,	// (0x000470eb) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc530,	// (0x000470eb) cell_cmode_rocker_pane_g1_cp

0xc2b2,	// (0x00046e6d) cell_cmode_rocker_pane_g2_cp

0x7ea0,	// (0x00042a5b) bg_button_pane_cp07_cp

0xb226,	// (0x00045de1) cell_cmode_itu_pane_g1_cp

0xe5a9,	// (0x00049164) cell_cmode_itu_pane_t1_cp

0xe5a9,	// (0x00049164) cell_cmode_itu_pane_t2_cp

0xb213,	// (0x00045dce) settings_code_pane_cp2

0x7f94,	// (0x00042b4f) bg_popup_window_pane_cp3_ParamLimits

0x83f7,	// (0x00042fb2) heading_pane_cp3_ParamLimits

0x8403,	// (0x00042fbe) listscroll_popup_graphic_pane_ParamLimits

0x6eda,	// (0x00041a95) fep_hwr_aid_pane_ParamLimits

0x7380,	// (0x00041f3b) aid_touch_sctrl_top_ParamLimits

0x738d,	// (0x00041f48) sctrl_sk_top_pane_g1_ParamLimits

0xc530,	// (0x000470eb) sctrl_sk_top_pane_g2_ParamLimits

0xfcf8,	// (0x0004a8b3) sctrl_sk_top_pane_g_ParamLimits

0x739a,	// (0x00041f55) sctrl_sk_top_pane_t1_ParamLimits

0x7380,	// (0x00041f3b) aid_touch_sctrl_bottom_ParamLimits

0x739a,	// (0x00041f55) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbaf,	// (0x0004876a) aid_area_touch_clock

0x7575,	// (0x00042130) aid_vkb2_area_top_pane_cell_ParamLimits

0x7575,	// (0x00042130) aid_vkb2_area_top_pane_cell

0x76c0,	// (0x0004227b) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x76c0,	// (0x0004227b) aid_vkb2_area_bottom_pane_cell

0xe13f,	// (0x00048cfa) popup_char_count_window

0xe5b7,	// (0x00049172) popup_char_count_window_g1

0xe5c0,	// (0x0004917b) popup_char_count_window_g2

0xe5c9,	// (0x00049184) popup_char_count_window_g3

0x0002,

0xfdc9,	// (0x0004a984) popup_char_count_window_g

0xe5d2,	// (0x0004918d) popup_char_count_window_t1

0x743b,	// (0x00041ff6) popup_fep_char_preview_window_ParamLimits

0x743b,	// (0x00041ff6) popup_fep_char_preview_window

0x7593,	// (0x0004214e) vkb2_top_candi_pane_ParamLimits

0x7593,	// (0x0004214e) vkb2_top_candi_pane

0xe5e0,	// (0x0004919b) cell_vkb2_top_candi_pane_ParamLimits

0xe5e0,	// (0x0004919b) cell_vkb2_top_candi_pane

0xa35a,	// (0x00044f15) bg_popup_fep_char_preview_window_ParamLimits

0xa35a,	// (0x00044f15) bg_popup_fep_char_preview_window

0x79a3,	// (0x0004255e) popup_fep_char_preview_window_t1_ParamLimits

0x79a3,	// (0x0004255e) popup_fep_char_preview_window_t1

0xe62d,	// (0x000491e8) bg_popup_fep_char_preview_window_g1

0xe635,	// (0x000491f0) bg_popup_fep_char_preview_window_g2

0xe63d,	// (0x000491f8) bg_popup_fep_char_preview_window_g3

0xe645,	// (0x00049200) bg_popup_fep_char_preview_window_g4

0xe64d,	// (0x00049208) bg_popup_fep_char_preview_window_g5

0x79dd,	// (0x00042598) bg_popup_fep_char_preview_window_g6

0xe655,	// (0x00049210) bg_popup_fep_char_preview_window_g7

0xe65d,	// (0x00049218) bg_popup_fep_char_preview_window_g8

0xe665,	// (0x00049220) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd0,	// (0x0004a98b) bg_popup_fep_char_preview_window_g

0xc530,	// (0x000470eb) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc530,	// (0x000470eb) cell_vkb2_top_candi_pane_g1

0xc98e,	// (0x00047549) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc98e,	// (0x00047549) cell_vkb2_top_candi_pane_g2

0xc9af,	// (0x0004756a) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc9af,	// (0x0004756a) cell_vkb2_top_candi_pane_g3

0x79e5,	// (0x000425a0) cell_vkb2_top_candi_pane_g4_ParamLimits

0x79e5,	// (0x000425a0) cell_vkb2_top_candi_pane_g4

0xde8f,	// (0x00048a4a) cell_vkb2_top_candi_pane_g5_ParamLimits

0xde8f,	// (0x00048a4a) cell_vkb2_top_candi_pane_g5

0xda43,	// (0x000485fe) cell_vkb2_top_candi_pane_g6_ParamLimits

0xda43,	// (0x000485fe) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde3,	// (0x0004a99e) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde3,	// (0x0004a99e) cell_vkb2_top_candi_pane_g

0x7a06,	// (0x000425c1) cell_vkb2_top_candi_pane_t1

0x6c6f,	// (0x0004182a) aid_size_touch_slider_mark_ParamLimits

0x6c6f,	// (0x0004182a) aid_size_touch_slider_mark

0xe282,	// (0x00048e3d) grid_graphic2_catg_pane_ParamLimits

0xe282,	// (0x00048e3d) grid_graphic2_catg_pane

0xe320,	// (0x00048edb) popup_grid_graphic2_window_t1_ParamLimits

0xe320,	// (0x00048edb) popup_grid_graphic2_window_t1

0xe332,	// (0x00048eed) popup_grid_graphic2_window_t2_ParamLimits

0xe332,	// (0x00048eed) popup_grid_graphic2_window_t2

0x0001,

0xfd9e,	// (0x0004a959) popup_grid_graphic2_window_t_ParamLimits

0xfd9e,	// (0x0004a959) popup_grid_graphic2_window_t

0x821d,	// (0x00042dd8) bg_button_pane_cp05_ParamLimits

0xe49c,	// (0x00049057) cell_graphic2_control_pane_g1_ParamLimits

0xe66d,	// (0x00049228) cell_graphic2_catg_pane_ParamLimits

0xe66d,	// (0x00049228) cell_graphic2_catg_pane

0x7ea0,	// (0x00042a5b) bg_button_pane_cp12

0xe67f,	// (0x0004923a) cell_graphic2_catg_pane_g1

0xdb7b,	// (0x00048736) cell_tb_ext_pane_t1_ParamLimits

0x77dd,	// (0x00042398) vkb2_top_cell_right_narrow_pane_ParamLimits

0x77dd,	// (0x00042398) vkb2_top_cell_right_narrow_pane

0x77f5,	// (0x000423b0) vkb2_top_cell_right_wide_pane_ParamLimits

0x77f5,	// (0x000423b0) vkb2_top_cell_right_wide_pane

0x6ecc,	// (0x00041a87) bg_vkb2_func_pane_ParamLimits

0x6ecc,	// (0x00041a87) bg_vkb2_func_pane

0x7866,	// (0x00042421) vkb2_top_cell_left_pane_g1_ParamLimits

0x6ecc,	// (0x00041a87) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6ecc,	// (0x00041a87) bg_vkb2_fuc_pane_cp03

0x78c4,	// (0x0004247f) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9ce9,	// (0x000448a4) bg_vkb2_func_pane_g1

0x9cf1,	// (0x000448ac) bg_vkb2_func_pane_g2

0x9d01,	// (0x000448bc) bg_vkb2_func_pane_g3

0x9cf9,	// (0x000448b4) bg_vkb2_func_pane_g4

0x9d09,	// (0x000448c4) bg_vkb2_func_pane_g5

0x9d11,	// (0x000448cc) bg_vkb2_func_pane_g6

0x9d19,	// (0x000448d4) bg_vkb2_func_pane_g7

0x9d21,	// (0x000448dc) bg_vkb2_func_pane_g8

0x9ce1,	// (0x0004489c) bg_vkb2_func_pane_g9

0x0008,

0xfdf0,	// (0x0004a9ab) bg_vkb2_func_pane_g

0x6ecc,	// (0x00041a87) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6ecc,	// (0x00041a87) bg_vkb2_fuc_pane_cp01

0x7866,	// (0x00042421) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7866,	// (0x00042421) vkb2_top_cell_right_wide_pane_g1

0x6ecc,	// (0x00041a87) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6ecc,	// (0x00041a87) bg_vkb2_fuc_pane_cp02

0x78c4,	// (0x0004247f) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x78c4,	// (0x0004247f) vkb2_top_cell_right_narrow_pane_g1

0xd7b1,	// (0x0004836c) aid_touch_area_decrease_ParamLimits

0xd7b1,	// (0x0004836c) aid_touch_area_decrease

0xd7cf,	// (0x0004838a) aid_touch_area_increase_ParamLimits

0xd7cf,	// (0x0004838a) aid_touch_area_increase

0xd7db,	// (0x00048396) aid_touch_area_mute_ParamLimits

0xd7db,	// (0x00048396) aid_touch_area_mute

0xd7ff,	// (0x000483ba) aid_touch_area_slider_ParamLimits

0xd7ff,	// (0x000483ba) aid_touch_area_slider

0xd8eb,	// (0x000484a6) popup_slider_window_g4_ParamLimits

0xd8eb,	// (0x000484a6) popup_slider_window_g4

0xd8f7,	// (0x000484b2) popup_slider_window_g5_ParamLimits

0xd8f7,	// (0x000484b2) popup_slider_window_g5

0xd919,	// (0x000484d4) popup_slider_window_g6_ParamLimits

0xd919,	// (0x000484d4) popup_slider_window_g6

0xd959,	// (0x00048514) popup_slider_window_t2_ParamLimits

0xd959,	// (0x00048514) popup_slider_window_t2

0x0001,

0xfcec,	// (0x0004a8a7) popup_slider_window_t_ParamLimits

0xfcec,	// (0x0004a8a7) popup_slider_window_t

0xd971,	// (0x0004852c) slider_pane_ParamLimits

0xd971,	// (0x0004852c) slider_pane

0xe688,	// (0x00049243) slider_pane_g1_ParamLimits

0xe688,	// (0x00049243) slider_pane_g1

0xe69c,	// (0x00049257) slider_pane_g2_ParamLimits

0xe69c,	// (0x00049257) slider_pane_g2

0xe6b2,	// (0x0004926d) slider_pane_g3_ParamLimits

0xe6b2,	// (0x0004926d) slider_pane_g3

0x0003,

0xfe03,	// (0x0004a9be) slider_pane_g_ParamLimits

0xfe03,	// (0x0004a9be) slider_pane_g

0x688a,	// (0x00041445) popup_tb_float_extension_window_ParamLimits

0x688a,	// (0x00041445) popup_tb_float_extension_window

0xe6de,	// (0x00049299) aid_size_cell_tb_float_ext

0x7ea0,	// (0x00042a5b) bg_popup_sub_window_cp28

0xe6ea,	// (0x000492a5) grid_tb_float_ext_pane

0xe6f4,	// (0x000492af) cell_tb_float_ext_pane_ParamLimits

0xe6f4,	// (0x000492af) cell_tb_float_ext_pane

0xe70e,	// (0x000492c9) cell_tb_float_ext_pane_g1

0xe717,	// (0x000492d2) grid_highlight_pane_cp12

0x700d,	// (0x00041bc8) cell_last_hwr_side_pane_ParamLimits

0x700d,	// (0x00041bc8) cell_last_hwr_side_pane

0xc2b2,	// (0x00046e6d) cell_last_hwr_side_pane_g1

0xe720,	// (0x000492db) cell_last_hwr_side_pane_g2

0x0001,

0xfe0c,	// (0x0004a9c7) cell_last_hwr_side_pane_g

0x778c,	// (0x00042347) vkb2_area_bottom_space_btn_pane_ParamLimits

0x778c,	// (0x00042347) vkb2_area_bottom_space_btn_pane

0xc530,	// (0x000470eb) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1f4,	// (0x00048daf) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7a06,	// (0x000425c1) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7a25,	// (0x000425e0) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7a25,	// (0x000425e0) vkb2_area_bottom_space_btn_pane_g1

0x7a5f,	// (0x0004261a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7a5f,	// (0x0004261a) vkb2_area_bottom_space_btn_pane_g2

0x7a95,	// (0x00042650) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7a95,	// (0x00042650) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe11,	// (0x0004a9cc) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe11,	// (0x0004a9cc) vkb2_area_bottom_space_btn_pane_g

0x6f81,	// (0x00041b3c) cel_fep_hwr_func_pane_ParamLimits

0x6f81,	// (0x00041b3c) cel_fep_hwr_func_pane

0x6fbd,	// (0x00041b78) cell_hwr_side_button_pane_ParamLimits

0x6fbd,	// (0x00041b78) cell_hwr_side_button_pane

0xdbaf,	// (0x0004876a) aid_area_touch_clock_ParamLimits

0x821d,	// (0x00042dd8) bg_uniindi_top_pane_ParamLimits

0xdbc1,	// (0x0004877c) uniindi_top_pane_g1_ParamLimits

0xdbd7,	// (0x00048792) uniindi_top_pane_g2_ParamLimits

0xdbe3,	// (0x0004879e) uniindi_top_pane_g3_ParamLimits

0xdbf4,	// (0x000487af) uniindi_top_pane_g4_ParamLimits

0xfd24,	// (0x0004a8df) uniindi_top_pane_g_ParamLimits

0xdc01,	// (0x000487bc) uniindi_top_pane_t1_ParamLimits

0x821d,	// (0x00042dd8) bg_vkb2_func_pane_cp01_ParamLimits

0x821d,	// (0x00042dd8) bg_vkb2_func_pane_cp01

0xe729,	// (0x000492e4) cel_fep_hwr_func_pane_g1_ParamLimits

0xe729,	// (0x000492e4) cel_fep_hwr_func_pane_g1

0x821d,	// (0x00042dd8) bg_vkb2_func_pane_cp02_ParamLimits

0x821d,	// (0x00042dd8) bg_vkb2_func_pane_cp02

0xe729,	// (0x000492e4) cell_hwr_side_button_pane_g1_ParamLimits

0xe729,	// (0x000492e4) cell_hwr_side_button_pane_g1

0x9b62,	// (0x0004471d) status_pane_g4_ParamLimits

0x9b62,	// (0x0004471d) status_pane_g4

0x9b7c,	// (0x00044737) status_pane_t1

0xbfec,	// (0x00046ba7) form2_midp_gauge_slider_cont_pane

0xbff4,	// (0x00046baf) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc006,	// (0x00046bc1) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc018,	// (0x00046bd3) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf0,	// (0x0004a6ab) form2_midp_gauge_slider_pane_t_ParamLimits

0xc02a,	// (0x00046be5) form2_midp_slider_pane_ParamLimits

0x73fb,	// (0x00041fb6) aid_size_cell_func_vkb2_ParamLimits

0x73fb,	// (0x00041fb6) aid_size_cell_func_vkb2

0xe6ca,	// (0x00049285) slider_pane_g4_ParamLimits

0xe6ca,	// (0x00049285) slider_pane_g4

0x7adf,	// (0x0004269a) form2_midp_gauge_slider_pane_t2_cp01

0x7aed,	// (0x000426a8) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7aed,	// (0x000426a8) form2_midp_gauge_slider_pane_t3_cp01

0x7b0a,	// (0x000426c5) form2_midp_slider_pane_cp01

0x7ea0,	// (0x00042a5b) navi_smil_pane

0xe762,	// (0x0004931d) navi_smil_pane_g1

0xe76a,	// (0x00049325) navi_smil_pane_t1

0xe737,	// (0x000492f2) form2_midp_slider_pane_g1

0xe740,	// (0x000492fb) form2_midp_slider_pane_g2

0xe748,	// (0x00049303) form2_midp_slider_pane_g3

0xe737,	// (0x000492f2) form2_midp_slider_pane_g4

0xe750,	// (0x0004930b) form2_midp_slider_pane_g5

0x0004,

0xfe1a,	// (0x0004a9d5) form2_midp_slider_pane_g

0x7acf,	// (0x0004268a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7acf,	// (0x0004268a) vkb2_area_bottom_space_btn_pane_g4

0x9991,	// (0x0004454c) lc0_navi_pane_ParamLimits

0x9991,	// (0x0004454c) lc0_navi_pane

0x9a07,	// (0x000445c2) lc0_stat_indi_pane_ParamLimits

0x9a07,	// (0x000445c2) lc0_stat_indi_pane

0x9a1e,	// (0x000445d9) ls0_title_pane_ParamLimits

0x9a1e,	// (0x000445d9) ls0_title_pane

0x880f,	// (0x000433ca) bg_popup_sub_pane_cp14_ParamLimits

0xdb96,	// (0x00048751) list_uniindi_pane_ParamLimits

0xdba2,	// (0x0004875d) uniindi_top_pane_ParamLimits

0xdc3e,	// (0x000487f9) list_single_uniindi_pane_g1_ParamLimits

0xdc51,	// (0x0004880c) list_single_uniindi_pane_t1_ParamLimits

0x7b13,	// (0x000426ce) lc0_stat_clock_pane_ParamLimits

0x7b13,	// (0x000426ce) lc0_stat_clock_pane

0xe778,	// (0x00049333) lc0_stat_indi_pane_g1_ParamLimits

0xe778,	// (0x00049333) lc0_stat_indi_pane_g1

0xe785,	// (0x00049340) lc0_stat_indi_pane_g2_ParamLimits

0xe785,	// (0x00049340) lc0_stat_indi_pane_g2

0x0001,

0xfe25,	// (0x0004a9e0) lc0_stat_indi_pane_g_ParamLimits

0xfe25,	// (0x0004a9e0) lc0_stat_indi_pane_g

0x7b20,	// (0x000426db) lc0_uni_indicator_pane_ParamLimits

0x7b20,	// (0x000426db) lc0_uni_indicator_pane

0xe792,	// (0x0004934d) ls0_title_pane_g1_ParamLimits

0xe792,	// (0x0004934d) ls0_title_pane_g1

0xe7a6,	// (0x00049361) ls0_title_pane_t1_ParamLimits

0xe7a6,	// (0x00049361) ls0_title_pane_t1

0x7b2d,	// (0x000426e8) lc0_uni_indicator_pane_g1_ParamLimits

0x7b2d,	// (0x000426e8) lc0_uni_indicator_pane_g1

0xe7dc,	// (0x00049397) lc0_stat_clock_pane_t1

0x7ea0,	// (0x00042a5b) main_ai5_pane

0xe7ea,	// (0x000493a5) ai5_sk_pane_ParamLimits

0xe7ea,	// (0x000493a5) ai5_sk_pane

0xe7f7,	// (0x000493b2) cell_ai5_widget_pane_ParamLimits

0xe7f7,	// (0x000493b2) cell_ai5_widget_pane

0xe8ad,	// (0x00049468) aid_size_cell_widget_grid

0xe8c3,	// (0x0004947e) bg_ai5_widget_pane_ParamLimits

0xe8c3,	// (0x0004947e) bg_ai5_widget_pane

0xe937,	// (0x000494f2) cell_ai5_widget_pane_g2

0xe947,	// (0x00049502) cell_ai5_widget_pane_g3

0xe95e,	// (0x00049519) cell_ai5_widget_pane_g4

0xe96a,	// (0x00049525) cell_ai5_widget_pane_g5

0xe976,	// (0x00049531) cell_ai5_widget_pane_g6

0xe982,	// (0x0004953d) cell_ai5_widget_pane_g7

0xe9ca,	// (0x00049585) cell_ai5_widget_pane_t1_ParamLimits

0xe9ca,	// (0x00049585) cell_ai5_widget_pane_t1

0xe9e7,	// (0x000495a2) cell_ai5_widget_pane_t2_ParamLimits

0xe9e7,	// (0x000495a2) cell_ai5_widget_pane_t2

0xe9ff,	// (0x000495ba) cell_ai5_widget_pane_t3_ParamLimits

0xe9ff,	// (0x000495ba) cell_ai5_widget_pane_t3

0xea17,	// (0x000495d2) cell_ai5_widget_pane_t4_ParamLimits

0xea17,	// (0x000495d2) cell_ai5_widget_pane_t4

0xea34,	// (0x000495ef) cell_ai5_widget_pane_t5_ParamLimits

0xea34,	// (0x000495ef) cell_ai5_widget_pane_t5

0xea53,	// (0x0004960e) cell_ai5_widget_pane_t6_ParamLimits

0xea53,	// (0x0004960e) cell_ai5_widget_pane_t6

0xea65,	// (0x00049620) cell_ai5_widget_pane_t7_ParamLimits

0xea65,	// (0x00049620) cell_ai5_widget_pane_t7

0xea7e,	// (0x00049639) cell_ai5_widget_pane_t8_ParamLimits

0xea7e,	// (0x00049639) cell_ai5_widget_pane_t8

0x0009,

0xfe3f,	// (0x0004a9fa) cell_ai5_widget_pane_t_ParamLimits

0xfe3f,	// (0x0004a9fa) cell_ai5_widget_pane_t

0xead2,	// (0x0004968d) grid_ai5_widget_pane

0x880f,	// (0x000433ca) highlight_cell_ai5_widget_pane_ParamLimits

0x880f,	// (0x000433ca) highlight_cell_ai5_widget_pane

0xeae9,	// (0x000496a4) ai5_sk_left_pane

0xeaf3,	// (0x000496ae) ai5_sk_middle_pane

0xeafd,	// (0x000496b8) ai5_sk_right_pane

0xeb07,	// (0x000496c2) bg_ai5_widget_pane_g1_ParamLimits

0xeb07,	// (0x000496c2) bg_ai5_widget_pane_g1

0xeb13,	// (0x000496ce) bg_ai5_widget_pane_g2_ParamLimits

0xeb13,	// (0x000496ce) bg_ai5_widget_pane_g2

0xeb1f,	// (0x000496da) bg_ai5_widget_pane_g3_ParamLimits

0xeb1f,	// (0x000496da) bg_ai5_widget_pane_g3

0xeb2b,	// (0x000496e6) bg_ai5_widget_pane_g4_ParamLimits

0xeb2b,	// (0x000496e6) bg_ai5_widget_pane_g4

0xeb37,	// (0x000496f2) bg_ai5_widget_pane_g5_ParamLimits

0xeb37,	// (0x000496f2) bg_ai5_widget_pane_g5

0xeb43,	// (0x000496fe) bg_ai5_widget_pane_g6_ParamLimits

0xeb43,	// (0x000496fe) bg_ai5_widget_pane_g6

0xeb4f,	// (0x0004970a) bg_ai5_widget_pane_g7_ParamLimits

0xeb4f,	// (0x0004970a) bg_ai5_widget_pane_g7

0xeb5b,	// (0x00049716) bg_ai5_widget_pane_g8_ParamLimits

0xeb5b,	// (0x00049716) bg_ai5_widget_pane_g8

0xeb67,	// (0x00049722) bg_ai5_widget_pane_g9_ParamLimits

0xeb67,	// (0x00049722) bg_ai5_widget_pane_g9

0x0008,

0xfe54,	// (0x0004aa0f) bg_ai5_widget_pane_g_ParamLimits

0xfe54,	// (0x0004aa0f) bg_ai5_widget_pane_g

0xeb99,	// (0x00049754) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb99,	// (0x00049754) cell_shortcut_ai5_widget_pane

0x9499,	// (0x00044054) bg_cell_shortcut_ai5_widget_pane

0xebaa,	// (0x00049765) cell_grid_ai5_widget_pane_g1

0x9499,	// (0x00044054) highlight_cell_shortcut_ai5_widget_pane

0x9cf1,	// (0x000448ac) ai5_sk_left_pane_g1

0xebb3,	// (0x0004976e) ai5_sk_left_pane_g2

0xebbb,	// (0x00049776) ai5_sk_left_pane_g3

0xebc3,	// (0x0004977e) ai5_sk_left_pane_g4

0x0003,

0xfe67,	// (0x0004aa22) ai5_sk_left_pane_g

0xebcb,	// (0x00049786) ai5_sk_left_pane_t1

0x9ce9,	// (0x000448a4) ai5_sk_right_pane_g1

0xebd9,	// (0x00049794) ai5_sk_right_pane_g2

0xebe1,	// (0x0004979c) ai5_sk_right_pane_g3

0xebe9,	// (0x000497a4) ai5_sk_right_pane_g4

0x0003,

0xfe70,	// (0x0004aa2b) ai5_sk_right_pane_g

0xebf1,	// (0x000497ac) ai5_sk_right_pane_t1

0x9ce9,	// (0x000448a4) ai5_sk_middle_pane_g1

0x9cf1,	// (0x000448ac) ai5_sk_middle_pane_g2

0x9d09,	// (0x000448c4) ai5_sk_middle_pane_g3

0xebe1,	// (0x0004979c) ai5_sk_middle_pane_g4

0xebbb,	// (0x00049776) ai5_sk_middle_pane_g5

0xebff,	// (0x000497ba) ai5_sk_middle_pane_g6

0xec07,	// (0x000497c2) ai5_sk_middle_pane_g7

0x0006,

0xfe79,	// (0x0004aa34) ai5_sk_middle_pane_g

0x981d,	// (0x000443d8) aid_touch_area_size_lc0_ParamLimits

0x981d,	// (0x000443d8) aid_touch_area_size_lc0

0x710c,	// (0x00041cc7) cell_hwr_candidate_pane_t1_ParamLimits

0x9839,	// (0x000443f4) aid_touch_navi_pane

0x9b0c,	// (0x000446c7) status_dt_navi_pane_ParamLimits

0x9b0c,	// (0x000446c7) status_dt_navi_pane

0x9b19,	// (0x000446d4) status_dt_sta_pane_ParamLimits

0x9b19,	// (0x000446d4) status_dt_sta_pane

0xec0f,	// (0x000497ca) dt_sta_controll_pane

0xec1c,	// (0x000497d7) dt_sta_indi_pane

0xec2d,	// (0x000497e8) dt_sta_title_pane

0x821d,	// (0x00042dd8) bg_dt_sta_indi_pane_ParamLimits

0x821d,	// (0x00042dd8) bg_dt_sta_indi_pane

0xec40,	// (0x000497fb) dt_sta_battery_pane

0xec48,	// (0x00049803) dt_sta_indi_pane_g1

0xec51,	// (0x0004980c) dt_sta_indi_pane_g2

0xec5a,	// (0x00049815) dt_sta_indi_pane_g3

0x0002,

0xfe88,	// (0x0004aa43) dt_sta_indi_pane_g

0xec63,	// (0x0004981e) dt_sta_signal_pane

0x880f,	// (0x000433ca) bg_dt_sta_title_pane_ParamLimits

0x880f,	// (0x000433ca) bg_dt_sta_title_pane

0xec6c,	// (0x00049827) dt_sta_title_pane_g1

0xec74,	// (0x0004982f) dt_sta_title_pane_t1_ParamLimits

0xec74,	// (0x0004982f) dt_sta_title_pane_t1

0x7ea0,	// (0x00042a5b) bg_dt_sta_control_pane

0xec89,	// (0x00049844) dt_sta_controll_pane_g1

0xec92,	// (0x0004984d) bg_dt_sta_title_pane_g1

0xec9b,	// (0x00049856) bg_dt_sta_title_pane_g2

0xeca4,	// (0x0004985f) bg_dt_sta_title_pane_g3

0x0002,

0xfe8f,	// (0x0004aa4a) bg_dt_sta_title_pane_g

0xc2b2,	// (0x00046e6d) bg_dt_sta_indi_pane_g1

0xecad,	// (0x00049868) dt_sta_signal_pane_g1

0xecb5,	// (0x00049870) dt_sta_signal_pane_g2

0x0001,

0xfe96,	// (0x0004aa51) dt_sta_signal_pane_g

0xecbd,	// (0x00049878) dt_sta_battery_pane_g1

0xecc6,	// (0x00049881) dt_sta_battery_pane_t1

0xc2b2,	// (0x00046e6d) bg_dt_sta_control_pane_g1

0x8f98,	// (0x00043b53) fep_china_uni_eep_pane

0x8fa0,	// (0x00043b5b) fep_china_uni_entry_pane_ParamLimits

0x8fb0,	// (0x00043b6b) popup_fep_china_uni_window_g1_ParamLimits

0x8fc0,	// (0x00043b7b) popup_fep_china_uni_window_g2_ParamLimits

0x8fc0,	// (0x00043b7b) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0004a2dd) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0004a2dd) popup_fep_china_uni_window_g

0xecd5,	// (0x00049890) fep_china_uni_eep_pane_g1

0xecdd,	// (0x00049898) fep_china_uni_eep_pane_t1

0xe759,	// (0x00049314) aid_touch_area_size_smil_player

0x9989,	// (0x00044544) lc0_clock_pane

0x9b70,	// (0x0004472b) status_pane_g5_ParamLimits

0x9b70,	// (0x0004472b) status_pane_g5

0x654f,	// (0x0004110a) popup_keymap_window

0x9b2e,	// (0x000446e9) status_icon_pane

0xe947,	// (0x00049502) cell_ai5_widget_pane_g3_ParamLimits

0xe95e,	// (0x00049519) cell_ai5_widget_pane_g4_ParamLimits

0xe96a,	// (0x00049525) cell_ai5_widget_pane_g5_ParamLimits

0xe98e,	// (0x00049549) cell_ai5_widget_pane_g8_ParamLimits

0xe98e,	// (0x00049549) cell_ai5_widget_pane_g8

0xe9a2,	// (0x0004955d) cell_ai5_widget_pane_g9_ParamLimits

0xe9a2,	// (0x0004955d) cell_ai5_widget_pane_g9

0xe9b6,	// (0x00049571) cell_ai5_widget_pane_g10_ParamLimits

0xe9b6,	// (0x00049571) cell_ai5_widget_pane_g10

0xecec,	// (0x000498a7) status_icon_pane_g1

0x7ea0,	// (0x00042a5b) bg_popup_sub_pane_cp13

0xecf4,	// (0x000498af) popup_keymap_window_t1

0x9762,	// (0x0004431d) control_pane_g6_ParamLimits

0x9762,	// (0x0004431d) control_pane_g6

0x976f,	// (0x0004432a) control_pane_g7_ParamLimits

0x976f,	// (0x0004432a) control_pane_g7

0x977c,	// (0x00044337) control_pane_g8_ParamLimits

0x977c,	// (0x00044337) control_pane_g8

0xec0f,	// (0x000497ca) dt_sta_controll_pane_ParamLimits

0xec1c,	// (0x000497d7) dt_sta_indi_pane_ParamLimits

0xec2d,	// (0x000497e8) dt_sta_title_pane_ParamLimits

0x873b,	// (0x000432f6) aid_size_touch_scroll_bar_cale

0x5ae6,	// (0x000406a1) popup_discreet_window_ParamLimits

0x5ae6,	// (0x000406a1) popup_discreet_window

0x5b6e,	// (0x00040729) popup_sk_window

0xa35a,	// (0x00044f15) bg_popup_sub_pane_cp28_ParamLimits

0xa35a,	// (0x00044f15) bg_popup_sub_pane_cp28

0xed02,	// (0x000498bd) popup_discreet_window_g1_ParamLimits

0xed02,	// (0x000498bd) popup_discreet_window_g1

0xed22,	// (0x000498dd) popup_discreet_window_t1_ParamLimits

0xed22,	// (0x000498dd) popup_discreet_window_t1

0xed40,	// (0x000498fb) popup_discreet_window_t2_ParamLimits

0xed40,	// (0x000498fb) popup_discreet_window_t2

0x0002,

0xfe9b,	// (0x0004aa56) popup_discreet_window_t_ParamLimits

0xfe9b,	// (0x0004aa56) popup_discreet_window_t

0x7b41,	// (0x000426fc) popup_sk_window_g1

0x7b4b,	// (0x00042706) popup_sk_window_g2

0x0001,

0xfea2,	// (0x0004aa5d) popup_sk_window_g

0x7b55,	// (0x00042710) popup_sk_window_t1

0x7b63,	// (0x0004271e) popup_sk_window_t1_copy1

0xe937,	// (0x000494f2) cell_ai5_widget_pane_g2_ParamLimits

0xea90,	// (0x0004964b) cell_ai5_widget_pane_t9_ParamLimits

0xea90,	// (0x0004964b) cell_ai5_widget_pane_t9

0x7ea0,	// (0x00042a5b) main_fep_fshwr2_pane

0x7b71,	// (0x0004272c) aid_fshwr2_btn_pane

0x7b7d,	// (0x00042738) aid_fshwr2_syb_pane

0x7b89,	// (0x00042744) aid_fshwr2_txt_pane

0x7b95,	// (0x00042750) fshwr2_func_candi_pane

0x7baa,	// (0x00042765) fshwr2_hwr_syb_pane

0x7bba,	// (0x00042775) fshwr2_icf_pane

0x7ea0,	// (0x00042a5b) fshwr2_icf_bg_pane

0x7be3,	// (0x0004279e) fshwr2_icf_pane_t1_ParamLimits

0x7be3,	// (0x0004279e) fshwr2_icf_pane_t1

0x8e86,	// (0x00043a41) fshwr2_func_candi_pane_g1

0xed92,	// (0x0004994d) fshwr2_func_candi_row_pane_ParamLimits

0xed92,	// (0x0004994d) fshwr2_func_candi_row_pane

0x7bfb,	// (0x000427b6) cell_fshwr2_syb_pane_ParamLimits

0x7bfb,	// (0x000427b6) cell_fshwr2_syb_pane

0xc530,	// (0x000470eb) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc530,	// (0x000470eb) fshwr2_hwr_syb_pane_g1

0x7ea0,	// (0x00042a5b) bg_popup_call_pane_cp01

0x7c11,	// (0x000427cc) fshwr2_func_candi_cell_pane_ParamLimits

0x7c11,	// (0x000427cc) fshwr2_func_candi_cell_pane

0xeda2,	// (0x0004995d) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeda2,	// (0x0004995d) fshwr2_func_candi_cell_bg_pane

0x7c46,	// (0x00042801) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7c46,	// (0x00042801) fshwr2_func_candi_cell_pane_g1

0x7c6e,	// (0x00042829) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7c6e,	// (0x00042829) fshwr2_func_candi_cell_pane_t1

0x7ea0,	// (0x00042a5b) bg_button_pane_cp08

0xedae,	// (0x00049969) cell_fshwr2_syb_bg_pane

0x7c81,	// (0x0004283c) cell_fshwr2_syb_bg_pane_g1

0x7c89,	// (0x00042844) cell_fshwr2_syb_bg_pane_t1

0x880f,	// (0x000433ca) main_tmo_pane

0xae75,	// (0x00045a30) uni_indicator_pane_g1_ParamLimits

0xae8b,	// (0x00045a46) uni_indicator_pane_g2_ParamLimits

0xaea1,	// (0x00045a5c) uni_indicator_pane_g3_ParamLimits

0xaeb5,	// (0x00045a70) uni_indicator_pane_g4_ParamLimits

0xaeb5,	// (0x00045a70) uni_indicator_pane_g4

0xaec9,	// (0x00045a84) uni_indicator_pane_g5_ParamLimits

0xaec9,	// (0x00045a84) uni_indicator_pane_g5

0xaec9,	// (0x00045a84) uni_indicator_pane_g6_ParamLimits

0xaec9,	// (0x00045a84) uni_indicator_pane_g6

0xf926,	// (0x0004a4e1) uni_indicator_pane_g_ParamLimits

0xd78d,	// (0x00048348) popup_tmo_note_window_ParamLimits

0xd78d,	// (0x00048348) popup_tmo_note_window

0x880f,	// (0x000433ca) fshwr2_bg_pane

0x7c5f,	// (0x0004281a) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7c5f,	// (0x0004281a) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea7,	// (0x0004aa62) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea7,	// (0x0004aa62) fshwr2_func_candi_cell_pane_g

0xc2b2,	// (0x00046e6d) bg_popup_window_pane_cp01

0x7c98,	// (0x00042853) bg_popup_window_pane_g1_cp01

0xedb6,	// (0x00049971) bg_popup_window_pane_cp22_ParamLimits

0xedb6,	// (0x00049971) bg_popup_window_pane_cp22

0xedc4,	// (0x0004997f) listscroll_tmo_link_pane_ParamLimits

0xedc4,	// (0x0004997f) listscroll_tmo_link_pane

0xee04,	// (0x000499bf) popup_tmo_note_window_g1_ParamLimits

0xee04,	// (0x000499bf) popup_tmo_note_window_g1

0xee11,	// (0x000499cc) tmo_note_info_pane_ParamLimits

0xee11,	// (0x000499cc) tmo_note_info_pane

0xee2b,	// (0x000499e6) list_tmo_note_info_pane_g1_ParamLimits

0xee2b,	// (0x000499e6) list_tmo_note_info_pane_g1

0xee42,	// (0x000499fd) list_tmo_note_info_pane_g2_ParamLimits

0xee42,	// (0x000499fd) list_tmo_note_info_pane_g2

0x0001,

0xfeac,	// (0x0004aa67) list_tmo_note_info_pane_g_ParamLimits

0xfeac,	// (0x0004aa67) list_tmo_note_info_pane_g

0xee5e,	// (0x00049a19) list_tmo_note_info_text_pane_ParamLimits

0xee5e,	// (0x00049a19) list_tmo_note_info_text_pane

0xeedf,	// (0x00049a9a) list_tmo_link_pane

0xeeec,	// (0x00049aa7) scroll_pane_cp20

0xeef9,	// (0x00049ab4) list_single_tmo_link_pane_ParamLimits

0xeef9,	// (0x00049ab4) list_single_tmo_link_pane

0xef09,	// (0x00049ac4) list_single_tmo_link_pane_t1

0xef17,	// (0x00049ad2) list_tmo_note_info_text_pane_t1_ParamLimits

0xef17,	// (0x00049ad2) list_tmo_note_info_text_pane_t1

0x88bd,	// (0x00043478) aid_size_touch_scroll_bar_cp01_ParamLimits

0x88bd,	// (0x00043478) aid_size_touch_scroll_bar_cp01

0x4ed2,	// (0x0003fa8d) aid_size_touch_slider_marker

0x5b56,	// (0x00040711) popup_settings_window_ParamLimits

0x5b56,	// (0x00040711) popup_settings_window

0x5069,	// (0x0003fc24) popup_candi_list_indi_window

0x9839,	// (0x000443f4) aid_touch_navi_pane_ParamLimits

0x7354,	// (0x00041f0f) rs_clock_indi_pane

0x735d,	// (0x00041f18) sctrl_sk_bottom_pane_ParamLimits

0x736e,	// (0x00041f29) sctrl_sk_top_pane_ParamLimits

0x7455,	// (0x00042010) popup_fep_tooltip_window

0xe8ad,	// (0x00049468) aid_size_cell_widget_grid_ParamLimits

0xe922,	// (0x000494dd) cell_ai5_widget_pane_g1_ParamLimits

0xe922,	// (0x000494dd) cell_ai5_widget_pane_g1

0xe976,	// (0x00049531) cell_ai5_widget_pane_g6_ParamLimits

0xe982,	// (0x0004953d) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2a,	// (0x0004a9e5) cell_ai5_widget_pane_g_ParamLimits

0xfe2a,	// (0x0004a9e5) cell_ai5_widget_pane_g

0xeab4,	// (0x0004966f) cell_ai5_widget_pane_t10_ParamLimits

0xeab4,	// (0x0004966f) cell_ai5_widget_pane_t10

0xead2,	// (0x0004968d) grid_ai5_widget_pane_ParamLimits

0xeb73,	// (0x0004972e) cell_contacts_ai5_widget_pane_ParamLimits

0xeb73,	// (0x0004972e) cell_contacts_ai5_widget_pane

0xed55,	// (0x00049910) popup_discreet_window_t3_ParamLimits

0xed55,	// (0x00049910) popup_discreet_window_t3

0x7bcf,	// (0x0004278a) popup_fshwr2_char_preview_window_ParamLimits

0x7bcf,	// (0x0004278a) popup_fshwr2_char_preview_window

0xee7c,	// (0x00049a37) tmo_note_info_pane_t1

0xee91,	// (0x00049a4c) tmo_note_info_pane_t2

0xeea6,	// (0x00049a61) tmo_note_info_pane_t3

0xeebb,	// (0x00049a76) tmo_note_info_pane_t4

0xeecd,	// (0x00049a88) tmo_note_info_pane_t5

0x0004,

0xfeb1,	// (0x0004aa6c) tmo_note_info_pane_t

0xeedf,	// (0x00049a9a) list_tmo_link_pane_ParamLimits

0xeeec,	// (0x00049aa7) scroll_pane_cp20_ParamLimits

0x7ea0,	// (0x00042a5b) bg_popup_fep_char_preview_window_cp01

0xef30,	// (0x00049aeb) popup_fshwr2_char_preview_window_t1

0xef3e,	// (0x00049af9) popup_candi_list_indi_window_g1

0xef47,	// (0x00049b02) bg_cell_contacts_ai5_widget_pane

0xef53,	// (0x00049b0e) cell_contacts_ai5_widget_pane_g1

0xc950,	// (0x0004750b) cell_contacts_ai5_widget_pane_g2

0xef68,	// (0x00049b23) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebc,	// (0x0004aa77) cell_contacts_ai5_widget_pane_g

0xef74,	// (0x00049b2f) cell_contacts_ai5_widget_pane_t1

0x880f,	// (0x000433ca) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefeb,	// (0x00049ba6) settings_container_pane

0x9499,	// (0x00044054) listscroll_set_pane_copy1

0xb99b,	// (0x00046556) scroll_pane_cp121_copy1

0xeff7,	// (0x00049bb2) set_content_pane_copy1

0xefff,	// (0x00049bba) aid_height_set_list_copy1_ParamLimits

0xefff,	// (0x00049bba) aid_height_set_list_copy1

0xb0c1,	// (0x00045c7c) aid_size_parent_copy1_ParamLimits

0xb0c1,	// (0x00045c7c) aid_size_parent_copy1

0xf00b,	// (0x00049bc6) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf00b,	// (0x00049bc6) button_value_adjust_pane_cp6_copy1

0x97d7,	// (0x00044392) list_highlight_pane_cp2_copy1_ParamLimits

0x97d7,	// (0x00044392) list_highlight_pane_cp2_copy1

0xf01f,	// (0x00049bda) list_set_pane_copy1_ParamLimits

0xf01f,	// (0x00049bda) list_set_pane_copy1

0xef86,	// (0x00049b41) main_pane_set_t1_copy1_ParamLimits

0xef86,	// (0x00049b41) main_pane_set_t1_copy1

0xefc0,	// (0x00049b7b) main_pane_set_t2_copy1_ParamLimits

0xefc0,	// (0x00049b7b) main_pane_set_t2_copy1

0xf0cc,	// (0x00049c87) main_pane_set_t3_copy1

0xf0da,	// (0x00049c95) main_pane_set_t4_copy1

0xefdf,	// (0x00049b9a) set_content_pane_g1_copy1_ParamLimits

0xefdf,	// (0x00049b9a) set_content_pane_g1_copy1

0xf0e8,	// (0x00049ca3) setting_code_pane_copy1

0xf0f0,	// (0x00049cab) setting_slider_graphic_pane_copy1

0xf0f0,	// (0x00049cab) setting_slider_pane_copy1

0xf0f0,	// (0x00049cab) setting_text_pane_copy1

0xf0f0,	// (0x00049cab) setting_volume_pane_copy1

0xf0e8,	// (0x00049ca3) settings_code_pane_cp2_copy1

0xf0f8,	// (0x00049cb3) settings_code_pane_cp_copy1_ParamLimits

0xf0f8,	// (0x00049cb3) settings_code_pane_cp_copy1

0x7ca1,	// (0x0004285c) volume_set_pane_copy1

0xf10c,	// (0x00049cc7) volume_set_pane_g10_copy1

0xf114,	// (0x00049ccf) volume_set_pane_g1_copy1

0xf11c,	// (0x00049cd7) volume_set_pane_g2_copy1

0xf124,	// (0x00049cdf) volume_set_pane_g3_copy1

0xf12c,	// (0x00049ce7) volume_set_pane_g4_copy1

0xf134,	// (0x00049cef) volume_set_pane_g5_copy1

0xf13c,	// (0x00049cf7) volume_set_pane_g6_copy1

0xf144,	// (0x00049cff) volume_set_pane_g7_copy1

0xf14c,	// (0x00049d07) volume_set_pane_g8_copy1

0xf154,	// (0x00049d0f) volume_set_pane_g9_copy1

0x7f94,	// (0x00042b4f) bg_set_opt_pane_cp_copy1_ParamLimits

0x7f94,	// (0x00042b4f) bg_set_opt_pane_cp_copy1

0x7ca9,	// (0x00042864) setting_slider_pane_t1_copy1_ParamLimits

0x7ca9,	// (0x00042864) setting_slider_pane_t1_copy1

0x7cc7,	// (0x00042882) setting_slider_pane_t2_copy1_ParamLimits

0x7cc7,	// (0x00042882) setting_slider_pane_t2_copy1

0x7ce1,	// (0x0004289c) setting_slider_pane_t3_copy1_ParamLimits

0x7ce1,	// (0x0004289c) setting_slider_pane_t3_copy1

0x7cf9,	// (0x000428b4) slider_set_pane_copy1_ParamLimits

0x7cf9,	// (0x000428b4) slider_set_pane_copy1

0x885e,	// (0x00043419) set_opt_bg_pane_g1_copy2

0x8866,	// (0x00043421) set_opt_bg_pane_g2_copy2

0xf15c,	// (0x00049d17) set_opt_bg_pane_g3_copy2

0x8876,	// (0x00043431) set_opt_bg_pane_g4_copy2

0x887e,	// (0x00043439) set_opt_bg_pane_g5_copy2

0x8886,	// (0x00043441) set_opt_bg_pane_g6_copy2

0xf166,	// (0x00049d21) set_opt_bg_pane_g7_copy2

0xf16e,	// (0x00049d29) set_opt_bg_pane_g8_copy2

0xf178,	// (0x00049d33) set_opt_bg_pane_g9_copy2

0x7d0f,	// (0x000428ca) aid_size_touch_slider_mark_copy1_ParamLimits

0x7d0f,	// (0x000428ca) aid_size_touch_slider_mark_copy1

0xf182,	// (0x00049d3d) slider_set_pane_g1_copy1

0x7d23,	// (0x000428de) slider_set_pane_g2_copy1

0x6c8f,	// (0x0004184a) slider_set_pane_g3_copy1_ParamLimits

0x6c8f,	// (0x0004184a) slider_set_pane_g3_copy1

0x6ca3,	// (0x0004185e) slider_set_pane_g4_copy1_ParamLimits

0x6ca3,	// (0x0004185e) slider_set_pane_g4_copy1

0x6cbb,	// (0x00041876) slider_set_pane_g5_copy1_ParamLimits

0x6cbb,	// (0x00041876) slider_set_pane_g5_copy1

0x6c8f,	// (0x0004184a) slider_set_pane_g6_copy1_ParamLimits

0x6c8f,	// (0x0004184a) slider_set_pane_g6_copy1

0x7d2b,	// (0x000428e6) slider_set_pane_g7_copy1_ParamLimits

0x7d2b,	// (0x000428e6) slider_set_pane_g7_copy1

0x7eb4,	// (0x00042a6f) bg_set_opt_pane_cp2_copy1

0xf18b,	// (0x00049d46) setting_slider_graphic_pane_g1_copy1

0xf194,	// (0x00049d4f) setting_slider_graphic_pane_t1_copy1

0xf1a4,	// (0x00049d5f) setting_slider_graphic_pane_t2_copy1

0xf1b4,	// (0x00049d6f) slider_set_pane_cp_copy1

0xf1c4,	// (0x00049d7f) input_focus_pane_cp1_copy1

0xf1cd,	// (0x00049d88) list_set_text_pane_copy1

0xf1d5,	// (0x00049d90) setting_text_pane_g1_copy1

0x4907,	// (0x0003f4c2) set_text_pane_t1_copy1

0xf1c4,	// (0x00049d7f) input_focus_pane_cp2_copy1

0xf1d5,	// (0x00049d90) setting_code_pane_g1_copy1

0xf1de,	// (0x00049d99) setting_code_pane_t1_copy1

0xf1ec,	// (0x00049da7) list_set_graphic_pane_copy1

0x7eb4,	// (0x00042a6f) bg_set_opt_pane_cp4_copy1

0x9194,	// (0x00043d4f) list_set_graphic_pane_g1_copy1_ParamLimits

0x9194,	// (0x00043d4f) list_set_graphic_pane_g1_copy1

0xf1fe,	// (0x00049db9) list_set_graphic_pane_g2_copy1

0x91ac,	// (0x00043d67) list_set_graphic_pane_t1_copy1_ParamLimits

0x91ac,	// (0x00043d67) list_set_graphic_pane_t1_copy1

0xc2b2,	// (0x00046e6d) rs_clock_indi_pane_g1

0xf206,	// (0x00049dc1) rs_clock_indi_pane_t1

0xf214,	// (0x00049dcf) rs_indi_pane

0xf21c,	// (0x00049dd7) rs_indi_pane_g1

0xf225,	// (0x00049de0) rs_indi_pane_g2

0xf22e,	// (0x00049de9) rs_indi_pane_g3

0x0002,

0xfec3,	// (0x0004aa7e) rs_indi_pane_g

0x9499,	// (0x00044054) bg_popup_preview_window_pane_cp03

0xf237,	// (0x00049df2) popup_fep_tooltip_window_t1

0xcf2e,	// (0x00047ae9) popup_note2_window_g2_ParamLimits

0xcf2e,	// (0x00047ae9) popup_note2_window_g2

0x0001,

0xfc5c,	// (0x0004a817) popup_note2_window_g_ParamLimits

0xfc5c,	// (0x0004a817) popup_note2_window_g

0xd429,	// (0x00047fe4) bg_popup_sub_pane_cp11_ParamLimits

0xd436,	// (0x00047ff1) cell_ai3_links_pane_g1_ParamLimits

0xd44d,	// (0x00048008) cell_ai3_links_pane_t1

0x4907,	// (0x0003f4c2) set_text_pane_t1_copy1_ParamLimits

0x93aa,	// (0x00043f65) cell_graphic_popup_pane_cp2_ParamLimits

0x93aa,	// (0x00043f65) cell_graphic_popup_pane_cp2

0xf245,	// (0x00049e00) cell_graphic_popup_pane_g1_cp2

0x854e,	// (0x00043109) cell_graphic_popup_pane_g2_cp2

0xf24d,	// (0x00049e08) cell_graphic_popup_pane_g3_cp2

0xf255,	// (0x00049e10) cell_graphic_popup_pane_t2_cp2

0x855f,	// (0x0004311a) grid_highlight_pane_cp3_cp2

0x8ba3,	// (0x0004375e) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x880f,	// (0x000433ca) main_tmo_pane_ParamLimits

0xd781,	// (0x0004833c) popup_tmo_big_image_note_window

0xe911,	// (0x000494cc) cell_ai5_widget_list_pane

0xe919,	// (0x000494d4) cell_ai5_widget_lrg_icon_pane

0xee7c,	// (0x00049a37) tmo_note_info_pane_t1_ParamLimits

0xee91,	// (0x00049a4c) tmo_note_info_pane_t2_ParamLimits

0xeea6,	// (0x00049a61) tmo_note_info_pane_t3_ParamLimits

0xeebb,	// (0x00049a76) tmo_note_info_pane_t4_ParamLimits

0xeecd,	// (0x00049a88) tmo_note_info_pane_t5_ParamLimits

0xfeb1,	// (0x0004aa6c) tmo_note_info_pane_t_ParamLimits

0xefeb,	// (0x00049ba6) settings_container_pane_ParamLimits

0xf1bc,	// (0x00049d77) indicator_popup_pane_cp5

0xf1bc,	// (0x00049d77) indicator_popup_pane_cp6

0xf1ec,	// (0x00049da7) list_set_graphic_pane_copy1_ParamLimits

0x7ea0,	// (0x00042a5b) bg_popup_window_pane_cp23

0xf263,	// (0x00049e1e) popup_tmo_big_image_note_window_g1

0xf26d,	// (0x00049e28) popup_tmo_big_image_note_window_t1

0xf27d,	// (0x00049e38) popup_tmo_big_image_note_window_t2

0xf28d,	// (0x00049e48) popup_tmo_big_image_note_window_t3

0x0002,

0xfeca,	// (0x0004aa85) popup_tmo_big_image_note_window_t

0xc2b2,	// (0x00046e6d) cell_ai5_widget_lrg_icon_pane_g1

0xf29d,	// (0x00049e58) cell_ai5_widget_lrg_icon_pane_t1

0xf2ab,	// (0x00049e66) cell_ai5_widget_list_row_pane_ParamLimits

0xf2ab,	// (0x00049e66) cell_ai5_widget_list_row_pane

0xf2c2,	// (0x00049e7d) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2c2,	// (0x00049e7d) cell_ai5_widget_list_row_pane_g1

0xf2cf,	// (0x00049e8a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2cf,	// (0x00049e8a) cell_ai5_widget_list_row_pane_t1

0xf300,	// (0x00049ebb) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf300,	// (0x00049ebb) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed1,	// (0x0004aa8c) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed1,	// (0x0004aa8c) cell_ai5_widget_list_row_pane_t

0x7ea0,	// (0x00042a5b) main_fep_vtchi_ss_pane

0xf344,	// (0x00049eff) popup_fep_char_pre_window

0xf34c,	// (0x00049f07) popup_fep_ituss_window

0xf36d,	// (0x00049f28) popup_fep_vkbss_window

0xf38c,	// (0x00049f47) grid_vkbss_keypad_pane_ParamLimits

0xf38c,	// (0x00049f47) grid_vkbss_keypad_pane

0xf39c,	// (0x00049f57) ituss_keypad_pane

0x7d4d,	// (0x00042908) aid_vkbss_key_offset_ParamLimits

0x7d4d,	// (0x00042908) aid_vkbss_key_offset

0x7d59,	// (0x00042914) cell_vkbss_key_pane_ParamLimits

0x7d59,	// (0x00042914) cell_vkbss_key_pane

0xf3ab,	// (0x00049f66) bg_cell_vkbss_key_g1_ParamLimits

0xf3ab,	// (0x00049f66) bg_cell_vkbss_key_g1

0xf3b7,	// (0x00049f72) cell_vkbss_key_3p_pane_ParamLimits

0xf3b7,	// (0x00049f72) cell_vkbss_key_3p_pane

0xf3d1,	// (0x00049f8c) cell_vkbss_key_g1_ParamLimits

0xf3d1,	// (0x00049f8c) cell_vkbss_key_g1

0xf3eb,	// (0x00049fa6) cell_vkbss_key_t1_ParamLimits

0xf3eb,	// (0x00049fa6) cell_vkbss_key_t1

0x7d6f,	// (0x0004292a) cell_ituss_key_pane_ParamLimits

0x7d6f,	// (0x0004292a) cell_ituss_key_pane

0xf416,	// (0x00049fd1) bg_cell_ituss_key_g1_ParamLimits

0xf416,	// (0x00049fd1) bg_cell_ituss_key_g1

0xf422,	// (0x00049fdd) cell_ituss_key_pane_g1_ParamLimits

0xf422,	// (0x00049fdd) cell_ituss_key_pane_g1

0x7d80,	// (0x0004293b) cell_ituss_key_pane_g2_ParamLimits

0x7d80,	// (0x0004293b) cell_ituss_key_pane_g2

0x0002,

0xfed8,	// (0x0004aa93) cell_ituss_key_pane_g_ParamLimits

0xfed8,	// (0x0004aa93) cell_ituss_key_pane_g

0x7dac,	// (0x00042967) cell_ituss_key_t1_ParamLimits

0x7dac,	// (0x00042967) cell_ituss_key_t1

0x7de6,	// (0x000429a1) cell_ituss_key_t2_ParamLimits

0x7de6,	// (0x000429a1) cell_ituss_key_t2

0x7e17,	// (0x000429d2) cell_ituss_key_t3_ParamLimits

0x7e17,	// (0x000429d2) cell_ituss_key_t3

0x7de6,	// (0x000429a1) cell_ituss_key_t4_ParamLimits

0x7de6,	// (0x000429a1) cell_ituss_key_t4

0x0004,

0xfedf,	// (0x0004aa9a) cell_ituss_key_t_ParamLimits

0xfedf,	// (0x0004aa9a) cell_ituss_key_t

0xf44e,	// (0x0004a009) cell_vkbss_key_3p_pane_g1

0xf456,	// (0x0004a011) cell_vkbss_key_3p_pane_g2

0xf45e,	// (0x0004a019) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeea,	// (0x0004aaa5) cell_vkbss_key_3p_pane_g

0x7ea0,	// (0x00042a5b) bg_popup_fep_char_preview_window_cp02

0x7e5a,	// (0x00042a15) popup_fep_char_pre_window_t1

0xe8a3,	// (0x0004945e) main_ai5_sk_pane

0xef47,	// (0x00049b02) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef53,	// (0x00049b0e) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc950,	// (0x0004750b) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef68,	// (0x00049b23) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebc,	// (0x0004aa77) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef74,	// (0x00049b2f) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x880f,	// (0x000433ca) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf466,	// (0x0004a021) main_ai5_sk_pane_g1

0xa193,	// (0x00044d4e) popup_query_code_window_g1

0xf362,	// (0x00049f1d) popup_fep_vkb_icf_pane

0xf376,	// (0x00049f31) popup_fep_vtchi_icf_pane

0xf46f,	// (0x0004a02a) bg_icf_pane

0xf47b,	// (0x0004a036) list_vkb_icf_pane

0xf487,	// (0x0004a042) bg_icf_pane_cp01

0xf49a,	// (0x0004a055) vtchi_icf_list_pane

0xf4aa,	// (0x0004a065) list_vkb_icf_pane_t1_ParamLimits

0xf4aa,	// (0x0004a065) list_vkb_icf_pane_t1

0xf4c0,	// (0x0004a07b) vtchi_icf_list_pane_t1_ParamLimits

0xf4c0,	// (0x0004a07b) vtchi_icf_list_pane_t1

0xf34c,	// (0x00049f07) popup_fep_ituss_window_ParamLimits

0xf376,	// (0x00049f31) popup_fep_vtchi_icf_pane_ParamLimits

0xf39c,	// (0x00049f57) ituss_keypad_pane_ParamLimits

0x7d41,	// (0x000428fc) ituss_sks_pane

0xf46f,	// (0x0004a02a) bg_icf_pane_ParamLimits

0xf328,	// (0x00049ee3) icf_edit_indi_pane_ParamLimits

0xf328,	// (0x00049ee3) icf_edit_indi_pane

0xf47b,	// (0x0004a036) list_vkb_icf_pane_ParamLimits

0xf487,	// (0x0004a042) bg_icf_pane_cp01_ParamLimits

0xf337,	// (0x00049ef2) icf_edit_indi_pane_cp01_ParamLimits

0xf337,	// (0x00049ef2) icf_edit_indi_pane_cp01

0xf4a2,	// (0x0004a05d) vtchi_query_pane

0xc530,	// (0x000470eb) icf_edit_indi_pane_g1_ParamLimits

0xc530,	// (0x000470eb) icf_edit_indi_pane_g1

0xf531,	// (0x0004a0ec) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x0004a0ec) icf_edit_indi_pane_g2

0x0001,

0xff02,	// (0x0004aabd) icf_edit_indi_pane_g_ParamLimits

0xff02,	// (0x0004aabd) icf_edit_indi_pane_g

0xf540,	// (0x0004a0fb) icf_edit_indi_pane_t1

0xf4da,	// (0x0004a095) bg_input_focus_pane_cp042

0x8732,	// (0x000432ed) vtchi_button_pane

0xf4e3,	// (0x0004a09e) vtchi_query_pane_t1

0xf4f1,	// (0x0004a0ac) vtchi_query_pane_t2

0xf4ff,	// (0x0004a0ba) vtchi_query_pane_t3

0x0002,

0xfef1,	// (0x0004aaac) vtchi_query_pane_t

0x7ea0,	// (0x00042a5b) bg_button_pane_cp13

0xf50d,	// (0x0004a0c8) vtchi_button_pane_g1

0x7e69,	// (0x00042a24) ituss_sks_pane_g1

0x7e74,	// (0x00042a2f) ituss_sks_pane_g2

0x0001,

0xfef8,	// (0x0004aab3) ituss_sks_pane_g

0xf515,	// (0x0004a0d0) ituss_sks_pane_t1

0xf523,	// (0x0004a0de) ituss_sks_pane_t2

0x0001,

0xfefd,	// (0x0004aab8) ituss_sks_pane_t

0xbd15,	// (0x000468d0) indicator_nsta_pane_cp_g1

0xbd1e,	// (0x000468d9) indicator_nsta_pane_cp_g2

0xbd26,	// (0x000468e1) indicator_nsta_pane_cp_g3

0xbd2e,	// (0x000468e9) indicator_nsta_pane_cp_g4

0xbd36,	// (0x000468f1) indicator_nsta_pane_cp_g5

0xbd36,	// (0x000468f1) indicator_nsta_pane_cp_g6

0x0005,

0xfaa6,	// (0x0004a661) indicator_nsta_pane_cp_g

0xe489,	// (0x00049044) cell_graphic2_pane_t2_ParamLimits

0xe489,	// (0x00049044) cell_graphic2_pane_t2

0x0001,

0xfdb3,	// (0x0004a96e) cell_graphic2_pane_t_ParamLimits

0xfdb3,	// (0x0004a96e) cell_graphic2_pane_t

0xe4b6,	// (0x00049071) cell_graphic2_control_pane_t1

0x8f47,	// (0x00043b02) signal_pane_g3_ParamLimits

0x8f47,	// (0x00043b02) signal_pane_g3

0x8f59,	// (0x00043b14) signal_pane_g4_ParamLimits

0x8f59,	// (0x00043b14) signal_pane_g4

0xf312,	// (0x00049ecd) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf312,	// (0x00049ecd) cell_ai5_widget_list_row_pane_t3

0xf43c,	// (0x00049ff7) cell_ituss_key_pane_t1_ParamLimits

0xf43c,	// (0x00049ff7) cell_ituss_key_pane_t1

0x9de6,	// (0x000449a1) form_field_data_wide_pane_vc_t2_ParamLimits

0x9de6,	// (0x000449a1) form_field_data_wide_pane_vc_t2

0x9dfa,	// (0x000449b5) form_field_data_wide_pane_vc_t3_ParamLimits

0x9dfa,	// (0x000449b5) form_field_data_wide_pane_vc_t3

0x0002,

0xf80e,	// (0x0004a3c9) form_field_data_wide_pane_vc_t_ParamLimits

0xf80e,	// (0x0004a3c9) form_field_data_wide_pane_vc_t

0xb9dd,	// (0x00046598) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb9dd,	// (0x00046598) form_field_slider_wide_pane_vc_t3

0xbabb,	// (0x00046676) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbabb,	// (0x00046676) form_field_popup_wide_pane_vc_t2

0xbad2,	// (0x0004668d) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbad2,	// (0x0004668d) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa95,	// (0x0004a650) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa95,	// (0x0004a650) form_field_popup_wide_pane_vc_t

0x7b71,	// (0x0004272c) aid_fshwr2_btn_pane_ParamLimits

0x7b7d,	// (0x00042738) aid_fshwr2_syb_pane_ParamLimits

0x7b89,	// (0x00042744) aid_fshwr2_txt_pane_ParamLimits

0x880f,	// (0x000433ca) fshwr2_bg_pane_ParamLimits

0x7b95,	// (0x00042750) fshwr2_func_candi_pane_ParamLimits

0x7baa,	// (0x00042765) fshwr2_hwr_syb_pane_ParamLimits

0x7bba,	// (0x00042775) fshwr2_icf_pane_ParamLimits

0x6e6f,	// (0x00041a2a) list_double_graphic_pane_vc_g4_ParamLimits

0x6e6f,	// (0x00041a2a) list_double_graphic_pane_vc_g4

0x7da0,	// (0x0004295b) cell_ituss_key_pane_g3_ParamLimits

0x7da0,	// (0x0004295b) cell_ituss_key_pane_g3

0x7e48,	// (0x00042a03) cell_ituss_key_t5_ParamLimits

0x7e48,	// (0x00042a03) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Large
