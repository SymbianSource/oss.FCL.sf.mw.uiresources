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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x00000000 };

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
0xb5d7,	// (0x0000b5d7) Screen

0xb5e3,	// (0x0000b5e3) application_window_ParamLimits

0xb5e3,	// (0x0000b5e3) application_window

0x002e,	// (0x0000002e) screen_g1

0xb61b,	// (0x0000b61b) area_bottom_pane_ParamLimits

0xb61b,	// (0x0000b61b) area_bottom_pane

0x0144,	// (0x00000144) area_top_pane_ParamLimits

0x0144,	// (0x00000144) area_top_pane

0x01d8,	// (0x000001d8) main_pane_ParamLimits

0x01d8,	// (0x000001d8) main_pane

0x0293,	// (0x00000293) misc_graphics

0xcd1f,	// (0x0000cd1f) battery_pane_ParamLimits

0xcd1f,	// (0x0000cd1f) battery_pane

0x4170,	// (0x00004170) bg_status_flat_pane_g8

0x4178,	// (0x00004178) bg_status_flat_pane_g9

0x32b9,	// (0x000032b9) context_pane_ParamLimits

0x32b9,	// (0x000032b9) context_pane

0xce8a,	// (0x0000ce8a) navi_pane_ParamLimits

0xce8a,	// (0x0000ce8a) navi_pane

0xcf08,	// (0x0000cf08) signal_pane_ParamLimits

0xcf08,	// (0x0000cf08) signal_pane

0x0008,

0xaf42,	// (0x0000af42) bg_status_flat_pane_g

0xcf98,	// (0x0000cf98) status_pane_g1_ParamLimits

0xcf98,	// (0x0000cf98) status_pane_g1

0xcfae,	// (0x0000cfae) status_pane_g2_ParamLimits

0xcfae,	// (0x0000cfae) status_pane_g2

0x34e0,	// (0x000034e0) status_pane_g3_ParamLimits

0x34e0,	// (0x000034e0) status_pane_g3

0x0004,

0xf41d,	// (0x0000f41d) status_pane_g_ParamLimits

0xf41d,	// (0x0000f41d) status_pane_g

0xcfba,	// (0x0000cfba) title_pane_ParamLimits

0xcfba,	// (0x0000cfba) title_pane

0xd01d,	// (0x0000d01d) uni_indicator_pane_ParamLimits

0xd01d,	// (0x0000d01d) uni_indicator_pane

0x2b5e,	// (0x00002b5e) bg_list_pane_ParamLimits

0x2b5e,	// (0x00002b5e) bg_list_pane

0xc5d6,	// (0x0000c5d6) find_pane

0x38bf,	// (0x000038bf) listscroll_app_pane_ParamLimits

0x38bf,	// (0x000038bf) listscroll_app_pane

0x2b92,	// (0x00002b92) listscroll_form_pane

0xc5de,	// (0x0000c5de) listscroll_gen_pane_ParamLimits

0xc5de,	// (0x0000c5de) listscroll_gen_pane

0x2bae,	// (0x00002bae) listscroll_set_pane

0x4f3a,	// (0x00004f3a) main_idle_act_pane

0x263b,	// (0x0000263b) main_idle_trad_pane

0x263b,	// (0x0000263b) main_list_empty_pane

0x2b86,	// (0x00002b86) main_midp_pane

0x2bc8,	// (0x00002bc8) main_pane_g1_ParamLimits

0x2bc8,	// (0x00002bc8) main_pane_g1

0xc5f2,	// (0x0000c5f2) popup_ai_message_window_ParamLimits

0xc5f2,	// (0x0000c5f2) popup_ai_message_window

0xc683,	// (0x0000c683) popup_fep_china_uni_window_ParamLimits

0xc683,	// (0x0000c683) popup_fep_china_uni_window

0x2ce0,	// (0x00002ce0) popup_fep_japan_candidate_window_ParamLimits

0x2ce0,	// (0x00002ce0) popup_fep_japan_candidate_window

0x2d00,	// (0x00002d00) popup_fep_japan_predictive_window_ParamLimits

0x2d00,	// (0x00002d00) popup_fep_japan_predictive_window

0xc6df,	// (0x0000c6df) popup_find_window

0xc6fc,	// (0x0000c6fc) popup_grid_graphic_window_ParamLimits

0xc6fc,	// (0x0000c6fc) popup_grid_graphic_window

0x2d67,	// (0x00002d67) popup_large_graphic_colour_window

0xc79a,	// (0x0000c79a) popup_menu_window_ParamLimits

0xc79a,	// (0x0000c79a) popup_menu_window

0xc96c,	// (0x0000c96c) popup_note_image_window

0xc932,	// (0x0000c932) popup_note_wait_window_ParamLimits

0xc932,	// (0x0000c932) popup_note_wait_window

0xc984,	// (0x0000c984) popup_note_window_ParamLimits

0xc984,	// (0x0000c984) popup_note_window

0xca2a,	// (0x0000ca2a) popup_query_code_window_ParamLimits

0xca2a,	// (0x0000ca2a) popup_query_code_window

0x2faf,	// (0x00002faf) popup_query_data_code_window_ParamLimits

0x2faf,	// (0x00002faf) popup_query_data_code_window

0xca64,	// (0x0000ca64) popup_query_data_window_ParamLimits

0xca64,	// (0x0000ca64) popup_query_data_window

0xcae6,	// (0x0000cae6) popup_query_sat_info_window_ParamLimits

0xcae6,	// (0x0000cae6) popup_query_sat_info_window

0xcb7d,	// (0x0000cb7d) popup_snote_single_graphic_window_ParamLimits

0xcb7d,	// (0x0000cb7d) popup_snote_single_graphic_window

0xcb7d,	// (0x0000cb7d) popup_snote_single_text_window_ParamLimits

0xcb7d,	// (0x0000cb7d) popup_snote_single_text_window

0x3036,	// (0x00003036) popup_sub_window_general

0x3166,	// (0x00003166) popup_window_general_ParamLimits

0x3166,	// (0x00003166) popup_window_general

0x317b,	// (0x0000317b) power_save_pane

0xc434,	// (0x0000c434) control_pane_g1_ParamLimits

0xc434,	// (0x0000c434) control_pane_g1

0xc45d,	// (0x0000c45d) control_pane_g2_ParamLimits

0xc45d,	// (0x0000c45d) control_pane_g2

0x29f9,	// (0x000029f9) control_pane_g3_ParamLimits

0x29f9,	// (0x000029f9) control_pane_g3

0x0007,

0xf405,	// (0x0000f405) control_pane_g_ParamLimits

0xf405,	// (0x0000f405) control_pane_g

0xc4c5,	// (0x0000c4c5) control_pane_t1_ParamLimits

0xc4c5,	// (0x0000c4c5) control_pane_t1

0xc52b,	// (0x0000c52b) control_pane_t2_ParamLimits

0xc52b,	// (0x0000c52b) control_pane_t2

0x0002,

0xf416,	// (0x0000f416) control_pane_t_ParamLimits

0xf416,	// (0x0000f416) control_pane_t

0xc38d,	// (0x0000c38d) navi_navi_volume_pane_cp1

0xc395,	// (0x0000c395) status_small_icon_pane

0x28e0,	// (0x000028e0) status_small_pane_g1_ParamLimits

0x28e0,	// (0x000028e0) status_small_pane_g1

0xc39d,	// (0x0000c39d) status_small_pane_g2_ParamLimits

0xc39d,	// (0x0000c39d) status_small_pane_g2

0xc3a9,	// (0x0000c3a9) status_small_pane_g3_ParamLimits

0xc3a9,	// (0x0000c3a9) status_small_pane_g3

0xc3b5,	// (0x0000c3b5) status_small_pane_g4_ParamLimits

0xc3b5,	// (0x0000c3b5) status_small_pane_g4

0xc3c1,	// (0x0000c3c1) status_small_pane_g5_ParamLimits

0xc3c1,	// (0x0000c3c1) status_small_pane_g5

0xc3cf,	// (0x0000c3cf) status_small_pane_g6_ParamLimits

0xc3cf,	// (0x0000c3cf) status_small_pane_g6

0x0007,

0xf3f4,	// (0x0000f3f4) status_small_pane_g_ParamLimits

0xf3f4,	// (0x0000f3f4) status_small_pane_g

0xc3fe,	// (0x0000c3fe) status_small_pane_t1

0xc420,	// (0x0000c420) status_small_wait_pane_ParamLimits

0xc420,	// (0x0000c420) status_small_wait_pane

0xc1c7,	// (0x0000c1c7) aid_levels_signal_ParamLimits

0xc1c7,	// (0x0000c1c7) aid_levels_signal

0xc1df,	// (0x0000c1df) signal_pane_g1_ParamLimits

0xc1df,	// (0x0000c1df) signal_pane_g1

0xc1fa,	// (0x0000c1fa) signal_pane_g2_ParamLimits

0xc1fa,	// (0x0000c1fa) signal_pane_g2

0x0003,

0xf3d4,	// (0x0000f3d4) signal_pane_g_ParamLimits

0xf3d4,	// (0x0000f3d4) signal_pane_g

0x1ee2,	// (0x00001ee2) context_pane_g1

0xb7f9,	// (0x0000b7f9) title_pane_g1

0xb830,	// (0x0000b830) title_pane_t1

0x04cf,	// (0x000004cf) title_pane_t2

0x04f5,	// (0x000004f5) title_pane_t3

0x0002,

0xf301,	// (0x0000f301) title_pane_t

0xd045,	// (0x0000d045) aid_levels_battery_ParamLimits

0xd045,	// (0x0000d045) aid_levels_battery

0xd061,	// (0x0000d061) battery_pane_g1_ParamLimits

0xd061,	// (0x0000d061) battery_pane_g1

0xd07e,	// (0x0000d07e) battery_pane_g2_ParamLimits

0xd07e,	// (0x0000d07e) battery_pane_g2

0x0001,

0xf428,	// (0x0000f428) battery_pane_g_ParamLimits

0xf428,	// (0x0000f428) battery_pane_g

0xd2c7,	// (0x0000d2c7) uni_indicator_pane_g1

0xd2dc,	// (0x0000d2dc) uni_indicator_pane_g2

0xd2f2,	// (0x0000d2f2) uni_indicator_pane_g3

0x0005,

0xf45f,	// (0x0000f45f) uni_indicator_pane_g

0x24ad,	// (0x000024ad) navi_icon_pane_ParamLimits

0x24ad,	// (0x000024ad) navi_icon_pane

0x23eb,	// (0x000023eb) navi_midp_pane

0x24c9,	// (0x000024c9) navi_navi_pane

0x24d3,	// (0x000024d3) navi_text_pane_ParamLimits

0x24d3,	// (0x000024d3) navi_text_pane

0x002e,	// (0x0000002e) status_small_wait_pane_g1

0x09f5,	// (0x000009f5) status_small_wait_pane_g2

0x0001,

0xafe5,	// (0x0000afe5) status_small_wait_pane_g

0x492f,	// (0x0000492f) navi_navi_icon_text_pane

0x4937,	// (0x00004937) navi_navi_pane_g1_ParamLimits

0x4937,	// (0x00004937) navi_navi_pane_g1

0x4949,	// (0x00004949) navi_navi_pane_g2_ParamLimits

0x4949,	// (0x00004949) navi_navi_pane_g2

0x0001,

0xafb3,	// (0x0000afb3) navi_navi_pane_g_ParamLimits

0xafb3,	// (0x0000afb3) navi_navi_pane_g

0x495b,	// (0x0000495b) navi_navi_tabs_pane

0x4964,	// (0x00004964) navi_navi_text_pane

0x492f,	// (0x0000492f) navi_navi_volume_pane

0x490b,	// (0x0000490b) navi_text_pane_t1

0x48ff,	// (0x000048ff) navi_icon_pane_g1

0x4852,	// (0x00004852) navi_navi_text_pane_t1

0x4841,	// (0x00004841) navi_navi_volume_pane_g1

0x4849,	// (0x00004849) volume_small_pane

0x47a7,	// (0x000047a7) navi_navi_icon_text_pane_g1

0x47af,	// (0x000047af) navi_navi_icon_text_pane_t1

0x24c9,	// (0x000024c9) navi_tabs_2_long_pane

0x24c9,	// (0x000024c9) navi_tabs_2_pane

0x24c9,	// (0x000024c9) navi_tabs_3_long_pane

0x24c9,	// (0x000024c9) navi_tabs_3_pane

0x24c9,	// (0x000024c9) navi_tabs_4_pane

0x4706,	// (0x00004706) tabs_2_active_pane_ParamLimits

0x4706,	// (0x00004706) tabs_2_active_pane

0x4716,	// (0x00004716) tabs_2_passive_pane_ParamLimits

0x4716,	// (0x00004716) tabs_2_passive_pane

0x46d4,	// (0x000046d4) tabs_3_active_pane_ParamLimits

0x46d4,	// (0x000046d4) tabs_3_active_pane

0x46e4,	// (0x000046e4) tabs_3_passive_pane_ParamLimits

0x46e4,	// (0x000046e4) tabs_3_passive_pane

0x46f5,	// (0x000046f5) tabs_3_passive_pane_cp_ParamLimits

0x46f5,	// (0x000046f5) tabs_3_passive_pane_cp

0x4690,	// (0x00004690) tabs_4_active_pane_ParamLimits

0x4690,	// (0x00004690) tabs_4_active_pane

0x46a1,	// (0x000046a1) tabs_4_passive_pane_ParamLimits

0x46a1,	// (0x000046a1) tabs_4_passive_pane

0x46b2,	// (0x000046b2) tabs_4_passive_pane_cp_ParamLimits

0x46b2,	// (0x000046b2) tabs_4_passive_pane_cp

0x46c3,	// (0x000046c3) tabs_4_passive_pane_cp2_ParamLimits

0x46c3,	// (0x000046c3) tabs_4_passive_pane_cp2

0x466c,	// (0x0000466c) tabs_2_long_active_pane_ParamLimits

0x466c,	// (0x0000466c) tabs_2_long_active_pane

0x467e,	// (0x0000467e) tabs_2_long_passive_pane_ParamLimits

0x467e,	// (0x0000467e) tabs_2_long_passive_pane

0x462d,	// (0x0000462d) tabs_3_long_active_pane_ParamLimits

0x462d,	// (0x0000462d) tabs_3_long_active_pane

0x4640,	// (0x00004640) tabs_3_long_passive_pane_ParamLimits

0x4640,	// (0x00004640) tabs_3_long_passive_pane

0x4659,	// (0x00004659) tabs_3_long_passive_pane_cp_ParamLimits

0x4659,	// (0x00004659) tabs_3_long_passive_pane_cp

0x45d3,	// (0x000045d3) volume_small_pane_g1

0x45dc,	// (0x000045dc) volume_small_pane_g2

0x45e5,	// (0x000045e5) volume_small_pane_g3

0x45ee,	// (0x000045ee) volume_small_pane_g4

0x45f7,	// (0x000045f7) volume_small_pane_g5

0x4600,	// (0x00004600) volume_small_pane_g6

0x4609,	// (0x00004609) volume_small_pane_g7

0x4612,	// (0x00004612) volume_small_pane_g8

0x461b,	// (0x0000461b) volume_small_pane_g9

0x4624,	// (0x00004624) volume_small_pane_g10

0x0009,

0xaf7f,	// (0x0000af7f) volume_small_pane_g

0x082d,	// (0x0000082d) bg_active_tab_pane_cp2_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp2

0x0515,	// (0x00000515) tabs_3_active_pane_g1

0xb8bc,	// (0x0000b8bc) tabs_3_active_pane_t1

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp2_ParamLimits

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp2

0x0515,	// (0x00000515) tabs_3_passive_pane_g1

0xb8bc,	// (0x0000b8bc) tabs_3_passive_pane_t1

0x082d,	// (0x0000082d) bg_active_tab_pane_cp3_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp3

0x052f,	// (0x0000052f) tabs_4_active_pane_g1

0xb8ce,	// (0x0000b8ce) tabs_4_active_pane_t1

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp3_ParamLimits

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp3

0x052f,	// (0x0000052f) tabs_4_1_passive_pane_g1

0xb8ce,	// (0x0000b8ce) tabs_4_1_passive_pane_t1

0x2b86,	// (0x00002b86) list_highlight_pane_cp2

0xd38a,	// (0x0000d38a) list_set_pane_ParamLimits

0xd38a,	// (0x0000d38a) list_set_pane

0xd424,	// (0x0000d424) main_pane_set_t1_ParamLimits

0xd424,	// (0x0000d424) main_pane_set_t1

0xd444,	// (0x0000d444) main_pane_set_t2_ParamLimits

0xd444,	// (0x0000d444) main_pane_set_t2

0xd458,	// (0x0000d458) main_pane_set_t3_ParamLimits

0xd458,	// (0x0000d458) main_pane_set_t3

0xd46a,	// (0x0000d46a) main_pane_set_t4_ParamLimits

0xd46a,	// (0x0000d46a) main_pane_set_t4

0x0003,

0xf471,	// (0x0000f471) main_pane_set_t_ParamLimits

0xf471,	// (0x0000f471) main_pane_set_t

0xd47c,	// (0x0000d47c) setting_code_pane

0xd486,	// (0x0000d486) setting_slider_graphic_pane

0xd486,	// (0x0000d486) setting_slider_pane

0xd486,	// (0x0000d486) setting_text_pane

0xd486,	// (0x0000d486) setting_volume_pane

0x0549,	// (0x00000549) volume_set_pane

0x0507,	// (0x00000507) bg_set_opt_pane_cp

0x0551,	// (0x00000551) setting_slider_pane_t1

0x056a,	// (0x0000056a) setting_slider_pane_t2

0x0584,	// (0x00000584) setting_slider_pane_t3

0x0002,

0xac33,	// (0x0000ac33) setting_slider_pane_t

0x059c,	// (0x0000059c) slider_set_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp2

0x05b2,	// (0x000005b2) setting_slider_graphic_pane_g1

0x05bb,	// (0x000005bb) setting_slider_graphic_pane_t1

0x05cb,	// (0x000005cb) setting_slider_graphic_pane_t2

0x0001,

0xac3a,	// (0x0000ac3a) setting_slider_graphic_pane_t

0x05db,	// (0x000005db) slider_set_pane_cp

0x0293,	// (0x00000293) input_focus_pane_cp1

0x4f21,	// (0x00004f21) list_set_text_pane

0x002e,	// (0x0000002e) setting_text_pane_g1

0x0293,	// (0x00000293) input_focus_pane_cp2

0x002e,	// (0x0000002e) setting_code_pane_g1

0x05e3,	// (0x000005e3) setting_code_pane_t1

0x05f1,	// (0x000005f1) set_text_pane_t1_ParamLimits

0x05f1,	// (0x000005f1) set_text_pane_t1

0x14e5,	// (0x000014e5) set_opt_bg_pane_g1

0x14ed,	// (0x000014ed) set_opt_bg_pane_g2

0x4efb,	// (0x00004efb) set_opt_bg_pane_g3

0x14fd,	// (0x000014fd) set_opt_bg_pane_g4

0x1505,	// (0x00001505) set_opt_bg_pane_g5

0x150d,	// (0x0000150d) set_opt_bg_pane_g6

0x4f05,	// (0x00004f05) set_opt_bg_pane_g7

0x4f0d,	// (0x00004f0d) set_opt_bg_pane_g8

0x4f17,	// (0x00004f17) set_opt_bg_pane_g9

0x0008,

0xb03c,	// (0x0000b03c) set_opt_bg_pane_g

0x4e8a,	// (0x00004e8a) slider_set_pane_g1

0x4e97,	// (0x00004e97) slider_set_pane_g2

0x0006,

0xb02d,	// (0x0000b02d) slider_set_pane_g

0x4d0a,	// (0x00004d0a) volume_set_pane_g1

0x4d12,	// (0x00004d12) volume_set_pane_g2

0x4d1a,	// (0x00004d1a) volume_set_pane_g3

0x4d22,	// (0x00004d22) volume_set_pane_g4

0x4d2a,	// (0x00004d2a) volume_set_pane_g5

0x4d32,	// (0x00004d32) volume_set_pane_g6

0x4d3a,	// (0x00004d3a) volume_set_pane_g7

0x4d42,	// (0x00004d42) volume_set_pane_g8

0x4d4a,	// (0x00004d4a) volume_set_pane_g9

0x4d52,	// (0x00004d52) volume_set_pane_g10

0x0009,

0xb005,	// (0x0000b005) volume_set_pane_g

0xb8e0,	// (0x0000b8e0) indicator_pane_ParamLimits

0xb8e0,	// (0x0000b8e0) indicator_pane

0xb908,	// (0x0000b908) main_idle_pane_g2_ParamLimits

0xb908,	// (0x0000b908) main_idle_pane_g2

0xb940,	// (0x0000b940) main_pane_idle_g1_ParamLimits

0xb940,	// (0x0000b940) main_pane_idle_g1

0x064c,	// (0x0000064c) popup_clock_digital_analogue_window_ParamLimits

0x064c,	// (0x0000064c) popup_clock_digital_analogue_window

0xb967,	// (0x0000b967) soft_indicator_pane_ParamLimits

0xb967,	// (0x0000b967) soft_indicator_pane

0xb981,	// (0x0000b981) wallpaper_pane_ParamLimits

0xb981,	// (0x0000b981) wallpaper_pane

0x002e,	// (0x0000002e) wallpaper_pane_g1

0xb993,	// (0x0000b993) indicator_pane_g1_ParamLimits

0xb993,	// (0x0000b993) indicator_pane_g1

0x5489,	// (0x00005489) navi_navi_icon_text_pane_srt_g1

0x069e,	// (0x0000069e) soft_indicator_pane_t1

0x06b8,	// (0x000006b8) aid_ps_area_pane

0xb9a9,	// (0x0000b9a9) aid_ps_clock_pane

0x06d7,	// (0x000006d7) aid_ps_indicator_pane

0x06e3,	// (0x000006e3) indicator_ps_pane_ParamLimits

0x06e3,	// (0x000006e3) indicator_ps_pane

0x06f2,	// (0x000006f2) power_save_pane_g1_ParamLimits

0x06f2,	// (0x000006f2) power_save_pane_g1

0x06fe,	// (0x000006fe) power_save_pane_g2_ParamLimits

0x06fe,	// (0x000006fe) power_save_pane_g2

0x0038,	// (0x00000038) aid_navinavi_width_pane

0x06b8,	// (0x000006b8) aid_ps_area_pane_ParamLimits

0x0001,

0xac3f,	// (0x0000ac3f) power_save_pane_g_ParamLimits

0xac3f,	// (0x0000ac3f) power_save_pane_g

0x070c,	// (0x0000070c) power_save_pane_t1_ParamLimits

0x070c,	// (0x0000070c) power_save_pane_t1

0xb9a9,	// (0x0000b9a9) aid_ps_clock_pane_ParamLimits

0x06d7,	// (0x000006d7) aid_ps_indicator_pane_ParamLimits

0x071e,	// (0x0000071e) power_save_pane_t4_ParamLimits

0x071e,	// (0x0000071e) power_save_pane_t4

0x0001,

0xac44,	// (0x0000ac44) power_save_pane_t_ParamLimits

0xac44,	// (0x0000ac44) power_save_pane_t

0x0748,	// (0x00000748) power_save_t3_ParamLimits

0x0748,	// (0x00000748) power_save_t3

0x0733,	// (0x00000733) power_save_t2_ParamLimits

0x0733,	// (0x00000733) power_save_t2

0x075d,	// (0x0000075d) indicator_ps_pane_g1

0xb9b7,	// (0x0000b9b7) ai_gene_pane_ParamLimits

0xb9b7,	// (0x0000b9b7) ai_gene_pane

0xb9ce,	// (0x0000b9ce) ai_links_pane_ParamLimits

0xb9ce,	// (0x0000b9ce) ai_links_pane

0xb9e6,	// (0x0000b9e6) indicator_pane_cp1_ParamLimits

0xb9e6,	// (0x0000b9e6) indicator_pane_cp1

0xb9f5,	// (0x0000b9f5) main_pane_idle_g1_cp_ParamLimits

0xb9f5,	// (0x0000b9f5) main_pane_idle_g1_cp

0x0796,	// (0x00000796) popup_ai_links_title_window

0xba0d,	// (0x0000ba0d) soft_indicator_pane_cp1_ParamLimits

0xba0d,	// (0x0000ba0d) soft_indicator_pane_cp1

0x4bf8,	// (0x00004bf8) ai_links_pane_g1

0x4c01,	// (0x00004c01) grid_ai_links_pane

0xd2be,	// (0x0000d2be) ai_gene_pane_1

0x4be6,	// (0x00004be6) ai_gene_pane_2

0x4bef,	// (0x00004bef) list_highlight_pane_cp4

0xd29a,	// (0x0000d29a) cell_ai_link_pane_ParamLimits

0xd29a,	// (0x0000d29a) cell_ai_link_pane

0x4bb7,	// (0x00004bb7) cell_ai_link_pane_g1

0x09f5,	// (0x000009f5) cell_ai_link_pane_g2

0x0001,

0xafe0,	// (0x0000afe0) cell_ai_link_pane_g

0x0293,	// (0x00000293) grid_highlight_cp2

0x0293,	// (0x00000293) bg_popup_sub_pane_cp1

0x07b9,	// (0x000007b9) popup_ai_links_title_window_t1

0x4b05,	// (0x00004b05) ai_gene_pane_1_g1_ParamLimits

0x4b05,	// (0x00004b05) ai_gene_pane_1_g1

0x4b11,	// (0x00004b11) ai_gene_pane_1_g2_ParamLimits

0x4b11,	// (0x00004b11) ai_gene_pane_1_g2

0x0001,

0xafd6,	// (0x0000afd6) ai_gene_pane_1_g_ParamLimits

0xafd6,	// (0x0000afd6) ai_gene_pane_1_g

0x4b1e,	// (0x00004b1e) ai_gene_pane_1_t1_ParamLimits

0x4b1e,	// (0x00004b1e) ai_gene_pane_1_t1

0x4b52,	// (0x00004b52) grid_ai_soft_ind_pane

0x4af0,	// (0x00004af0) ai_gene_pane_2_t1_ParamLimits

0x4af0,	// (0x00004af0) ai_gene_pane_2_t1

0xba21,	// (0x0000ba21) main_pane_empty_t1_ParamLimits

0xba21,	// (0x0000ba21) main_pane_empty_t1

0xba39,	// (0x0000ba39) main_pane_empty_t2_ParamLimits

0xba39,	// (0x0000ba39) main_pane_empty_t2

0xba4e,	// (0x0000ba4e) main_pane_empty_t3_ParamLimits

0xba4e,	// (0x0000ba4e) main_pane_empty_t3

0xba60,	// (0x0000ba60) main_pane_empty_t4_ParamLimits

0xba60,	// (0x0000ba60) main_pane_empty_t4

0xba72,	// (0x0000ba72) main_pane_empty_t5_ParamLimits

0xba72,	// (0x0000ba72) main_pane_empty_t5

0x0004,

0xf308,	// (0x0000f308) main_pane_empty_t_ParamLimits

0xf308,	// (0x0000f308) main_pane_empty_t

0x15e2,	// (0x000015e2) bg_popup_window_pane_ParamLimits

0x15e2,	// (0x000015e2) bg_popup_window_pane

0x4860,	// (0x00004860) find_popup_pane_cp2_ParamLimits

0x4860,	// (0x00004860) find_popup_pane_cp2

0x486c,	// (0x0000486c) heading_pane_ParamLimits

0x486c,	// (0x0000486c) heading_pane

0x0293,	// (0x00000293) bg_popup_sub_pane

0xd21b,	// (0x0000d21b) bg_popup_window_pane_g1_ParamLimits

0xd21b,	// (0x0000d21b) bg_popup_window_pane_g1

0xd22a,	// (0x0000d22a) bg_popup_window_pane_g2_ParamLimits

0xd22a,	// (0x0000d22a) bg_popup_window_pane_g2

0xd236,	// (0x0000d236) bg_popup_window_pane_g3_ParamLimits

0xd236,	// (0x0000d236) bg_popup_window_pane_g3

0xd242,	// (0x0000d242) bg_popup_window_pane_g4_ParamLimits

0xd242,	// (0x0000d242) bg_popup_window_pane_g4

0xd251,	// (0x0000d251) bg_popup_window_pane_g5_ParamLimits

0xd251,	// (0x0000d251) bg_popup_window_pane_g5

0xd261,	// (0x0000d261) bg_popup_window_pane_g6_ParamLimits

0xd261,	// (0x0000d261) bg_popup_window_pane_g6

0xd26d,	// (0x0000d26d) bg_popup_window_pane_g7_ParamLimits

0xd26d,	// (0x0000d26d) bg_popup_window_pane_g7

0xd27c,	// (0x0000d27c) bg_popup_window_pane_g8_ParamLimits

0xd27c,	// (0x0000d27c) bg_popup_window_pane_g8

0xd28b,	// (0x0000d28b) bg_popup_window_pane_g9_ParamLimits

0xd28b,	// (0x0000d28b) bg_popup_window_pane_g9

0x4835,	// (0x00004835) bg_popup_window_pane_g10_ParamLimits

0x4835,	// (0x00004835) bg_popup_window_pane_g10

0x0009,

0xf44a,	// (0x0000f44a) bg_popup_window_pane_g_ParamLimits

0xf44a,	// (0x0000f44a) bg_popup_window_pane_g

0x475e,	// (0x0000475e) bg_popup_heading_pane_ParamLimits

0x475e,	// (0x0000475e) bg_popup_heading_pane

0x53cc,	// (0x000053cc) tabs_4_passive_pane_cp_srt_ParamLimits

0x53cc,	// (0x000053cc) tabs_4_passive_pane_cp_srt

0x53de,	// (0x000053de) tabs_4_passive_pane_srt_ParamLimits

0x4772,	// (0x00004772) heading_pane_g2

0x53de,	// (0x000053de) tabs_4_passive_pane_srt

0x38bf,	// (0x000038bf) bg_passive_tab_pane_cp3_srt_ParamLimits

0x38bf,	// (0x000038bf) bg_passive_tab_pane_cp3_srt

0x477a,	// (0x0000477a) heading_pane_t1_ParamLimits

0x477a,	// (0x0000477a) heading_pane_t1

0x4791,	// (0x00004791) heading_pane_t2_ParamLimits

0x4791,	// (0x00004791) heading_pane_t2

0x0001,

0xaf99,	// (0x0000af99) heading_pane_t_ParamLimits

0xaf99,	// (0x0000af99) heading_pane_t

0x4138,	// (0x00004138) bg_popup_heading_pane_g1

0x41e7,	// (0x000041e7) bg_popup_heading_pane_g2

0x41f1,	// (0x000041f1) bg_popup_heading_pane_g3

0x41fb,	// (0x000041fb) bg_popup_heading_pane_g4

0x4205,	// (0x00004205) bg_popup_heading_pane_g5

0x420f,	// (0x0000420f) bg_popup_heading_pane_g6

0x4217,	// (0x00004217) bg_popup_heading_pane_g7

0x421f,	// (0x0000421f) bg_popup_heading_pane_g8

0x4229,	// (0x00004229) bg_popup_heading_pane_g9

0x0008,

0xaf55,	// (0x0000af55) bg_popup_heading_pane_g

0x3711,	// (0x00003711) bg_popup_sub_pane_g1

0x3719,	// (0x00003719) bg_popup_sub_pane_g2

0x3721,	// (0x00003721) bg_popup_sub_pane_g3

0x3729,	// (0x00003729) bg_popup_sub_pane_g4

0x3731,	// (0x00003731) bg_popup_sub_pane_g5

0x3739,	// (0x00003739) bg_popup_sub_pane_g6

0x3741,	// (0x00003741) bg_popup_sub_pane_g7

0x3749,	// (0x00003749) bg_popup_sub_pane_g8

0x3751,	// (0x00003751) bg_popup_sub_pane_g9

0x0008,

0xaf2f,	// (0x0000af2f) bg_popup_sub_pane_g

0x082d,	// (0x0000082d) bg_popup_window_pane_cp5_ParamLimits

0x082d,	// (0x0000082d) bg_popup_window_pane_cp5

0x0849,	// (0x00000849) popup_note_window_g1_ParamLimits

0x0849,	// (0x00000849) popup_note_window_g1

0x0855,	// (0x00000855) popup_note_window_t1_ParamLimits

0x0855,	// (0x00000855) popup_note_window_t1

0x086b,	// (0x0000086b) popup_note_window_t2_ParamLimits

0x086b,	// (0x0000086b) popup_note_window_t2

0x0881,	// (0x00000881) popup_note_window_t3_ParamLimits

0x0881,	// (0x00000881) popup_note_window_t3

0x0897,	// (0x00000897) popup_note_window_t4_ParamLimits

0x0897,	// (0x00000897) popup_note_window_t4

0x08bf,	// (0x000008bf) popup_note_window_t5_ParamLimits

0x08bf,	// (0x000008bf) popup_note_window_t5

0x0004,

0xac54,	// (0x0000ac54) popup_note_window_t_ParamLimits

0xac54,	// (0x0000ac54) popup_note_window_t

0x0909,	// (0x00000909) bg_popup_window_pane_cp6_ParamLimits

0x0909,	// (0x00000909) bg_popup_window_pane_cp6

0x40b4,	// (0x000040b4) popup_note_image_window_g1_ParamLimits

0x40b4,	// (0x000040b4) popup_note_image_window_g1

0x40c0,	// (0x000040c0) popup_note_image_window_g2_ParamLimits

0x40c0,	// (0x000040c0) popup_note_image_window_g2

0x0001,

0xaf23,	// (0x0000af23) popup_note_image_window_g_ParamLimits

0xaf23,	// (0x0000af23) popup_note_image_window_g

0x40d9,	// (0x000040d9) popup_note_image_window_t1_ParamLimits

0x40d9,	// (0x000040d9) popup_note_image_window_t1

0x40f2,	// (0x000040f2) popup_note_image_window_t2_ParamLimits

0x40f2,	// (0x000040f2) popup_note_image_window_t2

0x410b,	// (0x0000410b) popup_note_image_window_t3_ParamLimits

0x410b,	// (0x0000410b) popup_note_image_window_t3

0x0002,

0xaf28,	// (0x0000af28) popup_note_image_window_t_ParamLimits

0xaf28,	// (0x0000af28) popup_note_image_window_t

0x3f75,	// (0x00003f75) bg_popup_window_pane_cp7_ParamLimits

0x3f75,	// (0x00003f75) bg_popup_window_pane_cp7

0x3fa5,	// (0x00003fa5) popup_note_wait_window_g1_ParamLimits

0x3fa5,	// (0x00003fa5) popup_note_wait_window_g1

0x3fb1,	// (0x00003fb1) popup_note_wait_window_g2_ParamLimits

0x3fb1,	// (0x00003fb1) popup_note_wait_window_g2

0x0002,

0xaf11,	// (0x0000af11) popup_note_wait_window_g_ParamLimits

0xaf11,	// (0x0000af11) popup_note_wait_window_g

0x3fc9,	// (0x00003fc9) popup_note_wait_window_t1_ParamLimits

0x3fc9,	// (0x00003fc9) popup_note_wait_window_t1

0x3ff0,	// (0x00003ff0) popup_note_wait_window_t2_ParamLimits

0x3ff0,	// (0x00003ff0) popup_note_wait_window_t2

0x400d,	// (0x0000400d) popup_note_wait_window_t3_ParamLimits

0x400d,	// (0x0000400d) popup_note_wait_window_t3

0x4020,	// (0x00004020) popup_note_wait_window_t4_ParamLimits

0x4020,	// (0x00004020) popup_note_wait_window_t4

0x0004,

0xaf18,	// (0x0000af18) popup_note_wait_window_t_ParamLimits

0xaf18,	// (0x0000af18) popup_note_wait_window_t

0x4045,	// (0x00004045) wait_bar_pane_ParamLimits

0x4045,	// (0x00004045) wait_bar_pane

0x0293,	// (0x00000293) wait_anim_pane

0x0293,	// (0x00000293) wait_border_pane

0x002e,	// (0x0000002e) wait_anim_pane_g1

0x002e,	// (0x0000002e) wait_anim_pane_g2

0x0001,

0xadd3,	// (0x0000add3) wait_anim_pane_g

0x3f19,	// (0x00003f19) wait_border_pane_g1

0x3f24,	// (0x00003f24) wait_border_pane_g2

0x3f2d,	// (0x00003f2d) wait_border_pane_g3

0x0002,

0xaf0a,	// (0x0000af0a) wait_border_pane_g

0x3d84,	// (0x00003d84) bg_popup_window_pane_cp16_ParamLimits

0x3d84,	// (0x00003d84) bg_popup_window_pane_cp16

0x3e84,	// (0x00003e84) indicator_popup_pane_cp4_ParamLimits

0x3e84,	// (0x00003e84) indicator_popup_pane_cp4

0x3e98,	// (0x00003e98) popup_query_data_window_t1_ParamLimits

0x3e98,	// (0x00003e98) popup_query_data_window_t1

0x3eaa,	// (0x00003eaa) popup_query_data_window_t2_ParamLimits

0x3eaa,	// (0x00003eaa) popup_query_data_window_t2

0x3ec3,	// (0x00003ec3) popup_query_data_window_t3_ParamLimits

0x3ec3,	// (0x00003ec3) popup_query_data_window_t3

0x0002,

0xaf03,	// (0x0000af03) popup_query_data_window_t_ParamLimits

0xaf03,	// (0x0000af03) popup_query_data_window_t

0x3edd,	// (0x00003edd) query_popup_data_pane_ParamLimits

0x3edd,	// (0x00003edd) query_popup_data_pane

0x3ef1,	// (0x00003ef1) query_popup_data_pane_cp1_ParamLimits

0x3ef1,	// (0x00003ef1) query_popup_data_pane_cp1

0x3d84,	// (0x00003d84) bg_popup_window_pane_cp10_ParamLimits

0x3d84,	// (0x00003d84) bg_popup_window_pane_cp10

0x3db6,	// (0x00003db6) indicator_popup_pane_ParamLimits

0x3db6,	// (0x00003db6) indicator_popup_pane

0x3dd8,	// (0x00003dd8) popup_query_code_window_t1_ParamLimits

0x3dd8,	// (0x00003dd8) popup_query_code_window_t1

0x3df2,	// (0x00003df2) popup_query_code_window_t2_ParamLimits

0x3df2,	// (0x00003df2) popup_query_code_window_t2

0x3e3b,	// (0x00003e3b) popup_query_code_window_t3_ParamLimits

0x3e3b,	// (0x00003e3b) popup_query_code_window_t3

0x0002,

0xaefc,	// (0x0000aefc) popup_query_code_window_t_ParamLimits

0xaefc,	// (0x0000aefc) popup_query_code_window_t

0x3e6a,	// (0x00003e6a) query_popup_pane_ParamLimits

0x3e6a,	// (0x00003e6a) query_popup_pane

0x0909,	// (0x00000909) bg_popup_window_pane_cp15_ParamLimits

0x0909,	// (0x00000909) bg_popup_window_pane_cp15

0x0927,	// (0x00000927) indicator_popup_pane_cp1_ParamLimits

0x0927,	// (0x00000927) indicator_popup_pane_cp1

0x093a,	// (0x0000093a) indicator_popup_pane_cp2_ParamLimits

0x093a,	// (0x0000093a) indicator_popup_pane_cp2

0x094d,	// (0x0000094d) popup_query_data_code_window_g1_ParamLimits

0x094d,	// (0x0000094d) popup_query_data_code_window_g1

0x0960,	// (0x00000960) popup_query_data_code_window_t1_ParamLimits

0x0960,	// (0x00000960) popup_query_data_code_window_t1

0x0972,	// (0x00000972) popup_query_data_code_window_t2_ParamLimits

0x0972,	// (0x00000972) popup_query_data_code_window_t2

0x0984,	// (0x00000984) popup_query_data_code_window_t3_ParamLimits

0x0984,	// (0x00000984) popup_query_data_code_window_t3

0x099a,	// (0x0000099a) popup_query_data_code_window_t4_ParamLimits

0x099a,	// (0x0000099a) popup_query_data_code_window_t4

0x0003,

0xac5f,	// (0x0000ac5f) popup_query_data_code_window_t_ParamLimits

0xac5f,	// (0x0000ac5f) popup_query_data_code_window_t

0x377e,	// (0x0000377e) list_single_midp_graphic_pane_g3

0x09b2,	// (0x000009b2) query_popup_data_pane_cp2_ParamLimits

0x09c5,	// (0x000009c5) query_popup_pane_cp2_ParamLimits

0x09c5,	// (0x000009c5) query_popup_pane_cp2

0x0293,	// (0x00000293) bg_popup_window_pane_cp11

0x3d70,	// (0x00003d70) heading_pane_cp5

0x0ab0,	// (0x00000ab0) listscroll_popup_info_pane

0x0293,	// (0x00000293) input_focus_pane_cp3

0x09d8,	// (0x000009d8) query_popup_pane_t1

0x09e6,	// (0x000009e6) list_popup_info_pane_ParamLimits

0x09e6,	// (0x000009e6) list_popup_info_pane

0x09f5,	// (0x000009f5) listscroll_popup_info_pane_g1

0x09fd,	// (0x000009fd) scroll_pane_cp7

0x0a07,	// (0x00000a07) popup_info_list_pane_t1_ParamLimits

0x0a07,	// (0x00000a07) popup_info_list_pane_t1

0x0a21,	// (0x00000a21) popup_info_list_pane_t2_ParamLimits

0x0a21,	// (0x00000a21) popup_info_list_pane_t2

0x0001,

0xac68,	// (0x0000ac68) popup_info_list_pane_t_ParamLimits

0xac68,	// (0x0000ac68) popup_info_list_pane_t

0x0293,	// (0x00000293) bg_popup_window_pane_cp12

0x54c0,	// (0x000054c0) find_popup_pane

0x0507,	// (0x00000507) bg_popup_window_pane_cp3

0x0a3b,	// (0x00000a3b) heading_pane_cp3

0x0a47,	// (0x00000a47) listscroll_popup_graphic_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp4

0xbad4,	// (0x0000bad4) heading_pane_cp4

0x0ab0,	// (0x00000ab0) listscroll_popup_colour_pane

0x0ab8,	// (0x00000ab8) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x0ab8,	// (0x00000ab8) cell_large_graphic_colour_none_popup_pane

0xbadc,	// (0x0000badc) grid_large_graphic_colour_popup_pane_ParamLimits

0xbadc,	// (0x0000badc) grid_large_graphic_colour_popup_pane

0x0af8,	// (0x00000af8) listscroll_popup_colour_pane_g1_ParamLimits

0x0af8,	// (0x00000af8) listscroll_popup_colour_pane_g1

0x0b0f,	// (0x00000b0f) listscroll_popup_colour_pane_g2_ParamLimits

0x0b0f,	// (0x00000b0f) listscroll_popup_colour_pane_g2

0x0b26,	// (0x00000b26) listscroll_popup_colour_pane_g3_ParamLimits

0x0b26,	// (0x00000b26) listscroll_popup_colour_pane_g3

0xbb00,	// (0x0000bb00) listscroll_popup_colour_pane_g4_ParamLimits

0xbb00,	// (0x0000bb00) listscroll_popup_colour_pane_g4

0x0003,

0xf313,	// (0x0000f313) listscroll_popup_colour_pane_g_ParamLimits

0xf313,	// (0x0000f313) listscroll_popup_colour_pane_g

0x0b4a,	// (0x00000b4a) scroll_pane_cp6_ParamLimits

0x0b4a,	// (0x00000b4a) scroll_pane_cp6

0xbb10,	// (0x0000bb10) cell_large_graphic_colour_popup_pane_ParamLimits

0xbb10,	// (0x0000bb10) cell_large_graphic_colour_popup_pane

0x0b7b,	// (0x00000b7b) cell_large_graphic_colour_none_popup_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp5

0x0b8a,	// (0x00000b8a) cell_large_graphic_colour_popup_pane_g1

0x0b92,	// (0x00000b92) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xac76,	// (0x0000ac76) cell_large_graphic_colour_popup_pane_g

0x0b9a,	// (0x00000b9a) cell_large_graphic_colour_popup_pane_g2_copy1

0x0ba3,	// (0x00000ba3) grid_highlight_pane_cp4

0x0bab,	// (0x00000bab) bg_popup_window_pane_cp8_ParamLimits

0x0bab,	// (0x00000bab) bg_popup_window_pane_cp8

0x0bc6,	// (0x00000bc6) popup_snote_single_text_window_g1_ParamLimits

0x0bc6,	// (0x00000bc6) popup_snote_single_text_window_g1

0x0bd8,	// (0x00000bd8) popup_snote_single_text_window_t1_ParamLimits

0x0bd8,	// (0x00000bd8) popup_snote_single_text_window_t1

0x0beb,	// (0x00000beb) popup_snote_single_text_window_t2_ParamLimits

0x0beb,	// (0x00000beb) popup_snote_single_text_window_t2

0x0bfe,	// (0x00000bfe) popup_snote_single_text_window_t3_ParamLimits

0x0bfe,	// (0x00000bfe) popup_snote_single_text_window_t3

0x0c37,	// (0x00000c37) popup_snote_single_text_window_t4_ParamLimits

0x0c37,	// (0x00000c37) popup_snote_single_text_window_t4

0x0c6b,	// (0x00000c6b) popup_snote_single_text_window_t5_ParamLimits

0x0c6b,	// (0x00000c6b) popup_snote_single_text_window_t5

0x0004,

0xac7b,	// (0x0000ac7b) popup_snote_single_text_window_t_ParamLimits

0xac7b,	// (0x0000ac7b) popup_snote_single_text_window_t

0x0c9a,	// (0x00000c9a) bg_popup_window_pane_cp9_ParamLimits

0x0c9a,	// (0x00000c9a) bg_popup_window_pane_cp9

0x0bc6,	// (0x00000bc6) popup_snote_single_graphic_window_g1_ParamLimits

0x0bc6,	// (0x00000bc6) popup_snote_single_graphic_window_g1

0x0ca8,	// (0x00000ca8) popup_snote_single_graphic_window_g2_ParamLimits

0x0ca8,	// (0x00000ca8) popup_snote_single_graphic_window_g2

0x0001,

0xac86,	// (0x0000ac86) popup_snote_single_graphic_window_g_ParamLimits

0xac86,	// (0x0000ac86) popup_snote_single_graphic_window_g

0x0cb4,	// (0x00000cb4) popup_snote_single_graphic_window_t1_ParamLimits

0x0cb4,	// (0x00000cb4) popup_snote_single_graphic_window_t1

0x0cc7,	// (0x00000cc7) popup_snote_single_graphic_window_t2_ParamLimits

0x0cc7,	// (0x00000cc7) popup_snote_single_graphic_window_t2

0x0cda,	// (0x00000cda) popup_snote_single_graphic_window_t3_ParamLimits

0x0cda,	// (0x00000cda) popup_snote_single_graphic_window_t3

0x0d13,	// (0x00000d13) popup_snote_single_graphic_window_t4_ParamLimits

0x0d13,	// (0x00000d13) popup_snote_single_graphic_window_t4

0x0d47,	// (0x00000d47) popup_snote_single_graphic_window_t5_ParamLimits

0x0d47,	// (0x00000d47) popup_snote_single_graphic_window_t5

0x0004,

0xac8b,	// (0x0000ac8b) popup_snote_single_graphic_window_t_ParamLimits

0xac8b,	// (0x0000ac8b) popup_snote_single_graphic_window_t

0x534a,	// (0x0000534a) grid_graphic_popup_pane_ParamLimits

0x534a,	// (0x0000534a) grid_graphic_popup_pane

0x5374,	// (0x00005374) listscroll_popup_graphic_pane_g1_ParamLimits

0x5374,	// (0x00005374) listscroll_popup_graphic_pane_g1

0xd5d3,	// (0x0000d5d3) listscroll_popup_graphic_pane_g2_ParamLimits

0xd5d3,	// (0x0000d5d3) listscroll_popup_graphic_pane_g2

0x0001,

0xf494,	// (0x0000f494) listscroll_popup_graphic_pane_g_ParamLimits

0xf494,	// (0x0000f494) listscroll_popup_graphic_pane_g

0x539c,	// (0x0000539c) scroll_pane_cp5

0xd578,	// (0x0000d578) cell_graphic_popup_pane_ParamLimits

0xd578,	// (0x0000d578) cell_graphic_popup_pane

0x52ca,	// (0x000052ca) cell_graphic_popup_pane_g1

0x52d2,	// (0x000052d2) cell_graphic_popup_pane_g2

0x0b9a,	// (0x00000b9a) cell_graphic_popup_pane_g3

0x0002,

0xb072,	// (0x0000b072) cell_graphic_popup_pane_g

0x52db,	// (0x000052db) cell_graphic_popup_pane_t2

0x0ba3,	// (0x00000ba3) grid_highlight_pane_cp3

0x0d88,	// (0x00000d88) list_gen_pane_ParamLimits

0x0d88,	// (0x00000d88) list_gen_pane

0x0dba,	// (0x00000dba) scroll_pane

0xd52f,	// (0x0000d52f) bg_list_pane_g1_ParamLimits

0xd52f,	// (0x0000d52f) bg_list_pane_g1

0x523f,	// (0x0000523f) bg_list_pane_g2_ParamLimits

0x523f,	// (0x0000523f) bg_list_pane_g2

0x5254,	// (0x00005254) bg_list_pane_g3_ParamLimits

0x5254,	// (0x00005254) bg_list_pane_g3

0x5268,	// (0x00005268) bg_list_pane_g4_ParamLimits

0x5268,	// (0x00005268) bg_list_pane_g4

0xd54c,	// (0x0000d54c) bg_list_pane_g5_ParamLimits

0xd54c,	// (0x0000d54c) bg_list_pane_g5

0x0004,

0xf489,	// (0x0000f489) bg_list_pane_g_ParamLimits

0xf489,	// (0x0000f489) bg_list_pane_g

0xd4d5,	// (0x0000d4d5) list_double2_graphic_large_graphic_pane_ParamLimits

0xd4d5,	// (0x0000d4d5) list_double2_graphic_large_graphic_pane

0xd4d5,	// (0x0000d4d5) list_double2_graphic_pane_ParamLimits

0xd4d5,	// (0x0000d4d5) list_double2_graphic_pane

0xd4d5,	// (0x0000d4d5) list_double2_large_graphic_pane_ParamLimits

0xd4d5,	// (0x0000d4d5) list_double2_large_graphic_pane

0xd4d5,	// (0x0000d4d5) list_double2_pane_ParamLimits

0xd4d5,	// (0x0000d4d5) list_double2_pane

0xd4d5,	// (0x0000d4d5) list_double_graphic_heading_pane_ParamLimits

0xd4d5,	// (0x0000d4d5) list_double_graphic_heading_pane

0xd4d5,	// (0x0000d4d5) list_double_graphic_pane_ParamLimits

0xd4d5,	// (0x0000d4d5) list_double_graphic_pane

0xd4d5,	// (0x0000d4d5) list_double_heading_pane_ParamLimits

0xd4d5,	// (0x0000d4d5) list_double_heading_pane

0xd4d5,	// (0x0000d4d5) list_double_large_graphic_pane_ParamLimits

0xd4d5,	// (0x0000d4d5) list_double_large_graphic_pane

0xd4d5,	// (0x0000d4d5) list_double_number_pane_ParamLimits

0xd4d5,	// (0x0000d4d5) list_double_number_pane

0xd4d5,	// (0x0000d4d5) list_double_pane_ParamLimits

0xd4d5,	// (0x0000d4d5) list_double_pane

0xd4d5,	// (0x0000d4d5) list_double_time_pane_ParamLimits

0xd4d5,	// (0x0000d4d5) list_double_time_pane

0xd4d5,	// (0x0000d4d5) list_setting_number_pane_ParamLimits

0xd4d5,	// (0x0000d4d5) list_setting_number_pane

0xd4d5,	// (0x0000d4d5) list_setting_pane_ParamLimits

0xd4d5,	// (0x0000d4d5) list_setting_pane

0xd4e7,	// (0x0000d4e7) list_single_2graphic_pane_ParamLimits

0xd4e7,	// (0x0000d4e7) list_single_2graphic_pane

0xd4e7,	// (0x0000d4e7) list_single_graphic_heading_pane_ParamLimits

0xd4e7,	// (0x0000d4e7) list_single_graphic_heading_pane

0xd4e7,	// (0x0000d4e7) list_single_graphic_pane_ParamLimits

0xd4e7,	// (0x0000d4e7) list_single_graphic_pane

0xd4e7,	// (0x0000d4e7) list_single_heading_pane_ParamLimits

0xd4e7,	// (0x0000d4e7) list_single_heading_pane

0xd4e7,	// (0x0000d4e7) list_single_large_graphic_pane_ParamLimits

0xd4e7,	// (0x0000d4e7) list_single_large_graphic_pane

0xd4e7,	// (0x0000d4e7) list_single_number_heading_pane_ParamLimits

0xd4e7,	// (0x0000d4e7) list_single_number_heading_pane

0xd4e7,	// (0x0000d4e7) list_single_number_pane_ParamLimits

0xd4e7,	// (0x0000d4e7) list_single_number_pane

0xd4e7,	// (0x0000d4e7) list_single_pane_ParamLimits

0xd4e7,	// (0x0000d4e7) list_single_pane

0x0293,	// (0x00000293) list_highlight_pane_cp1

0x2574,	// (0x00002574) list_single_pane_g1_ParamLimits

0x2574,	// (0x00002574) list_single_pane_g1

0x35b5,	// (0x000035b5) list_single_pane_g2_ParamLimits

0x35b5,	// (0x000035b5) list_single_pane_g2

0x0001,

0xaea8,	// (0x0000aea8) list_single_pane_g_ParamLimits

0xaea8,	// (0x0000aea8) list_single_pane_g

0x5aee,	// (0x00005aee) list_single_pane_t1_ParamLimits

0x5aee,	// (0x00005aee) list_single_pane_t1

0x2574,	// (0x00002574) list_single_number_pane_g1_ParamLimits

0x2574,	// (0x00002574) list_single_number_pane_g1

0x35b5,	// (0x000035b5) list_single_number_pane_g2_ParamLimits

0x35b5,	// (0x000035b5) list_single_number_pane_g2

0x0001,

0xaea8,	// (0x0000aea8) list_single_number_pane_g_ParamLimits

0xaea8,	// (0x0000aea8) list_single_number_pane_g

0x369f,	// (0x0000369f) list_single_number_pane_t1_ParamLimits

0x369f,	// (0x0000369f) list_single_number_pane_t1

0xd326,	// (0x0000d326) list_single_number_pane_t2_ParamLimits

0xd326,	// (0x0000d326) list_single_number_pane_t2

0x0001,

0xf46c,	// (0x0000f46c) list_single_number_pane_t_ParamLimits

0xf46c,	// (0x0000f46c) list_single_number_pane_t

0xbb39,	// (0x0000bb39) list_single_graphic_pane_g1_ParamLimits

0xbb39,	// (0x0000bb39) list_single_graphic_pane_g1

0x2574,	// (0x00002574) list_single_graphic_pane_g2_ParamLimits

0x2574,	// (0x00002574) list_single_graphic_pane_g2

0x35b5,	// (0x000035b5) list_single_graphic_pane_g3_ParamLimits

0x35b5,	// (0x000035b5) list_single_graphic_pane_g3

0x0002,

0xf31c,	// (0x0000f31c) list_single_graphic_pane_g_ParamLimits

0xf31c,	// (0x0000f31c) list_single_graphic_pane_g

0xbb45,	// (0x0000bb45) list_single_graphic_pane_t1_ParamLimits

0xbb45,	// (0x0000bb45) list_single_graphic_pane_t1

0x2574,	// (0x00002574) list_single_heading_pane_g1_ParamLimits

0x2574,	// (0x00002574) list_single_heading_pane_g1

0x35b5,	// (0x000035b5) list_single_heading_pane_g2_ParamLimits

0x35b5,	// (0x000035b5) list_single_heading_pane_g2

0x0001,

0xaea8,	// (0x0000aea8) list_single_heading_pane_g_ParamLimits

0xaea8,	// (0x0000aea8) list_single_heading_pane_g

0xbb5b,	// (0x0000bb5b) list_single_heading_pane_t1_ParamLimits

0xbb5b,	// (0x0000bb5b) list_single_heading_pane_t1

0xbb71,	// (0x0000bb71) list_single_heading_pane_t2_ParamLimits

0xbb71,	// (0x0000bb71) list_single_heading_pane_t2

0x0001,

0xf323,	// (0x0000f323) list_single_heading_pane_t_ParamLimits

0xf323,	// (0x0000f323) list_single_heading_pane_t

0x2574,	// (0x00002574) list_single_number_heading_pane_g1_ParamLimits

0x2574,	// (0x00002574) list_single_number_heading_pane_g1

0x35b5,	// (0x000035b5) list_single_number_heading_pane_g2_ParamLimits

0x35b5,	// (0x000035b5) list_single_number_heading_pane_g2

0x0001,

0xaea8,	// (0x0000aea8) list_single_number_heading_pane_g_ParamLimits

0xaea8,	// (0x0000aea8) list_single_number_heading_pane_g

0xbb5b,	// (0x0000bb5b) list_single_number_heading_pane_t1_ParamLimits

0xbb5b,	// (0x0000bb5b) list_single_number_heading_pane_t1

0x5aa2,	// (0x00005aa2) list_single_number_heading_pane_t2_ParamLimits

0x5aa2,	// (0x00005aa2) list_single_number_heading_pane_t2

0x5ab4,	// (0x00005ab4) list_single_number_heading_pane_t3_ParamLimits

0x5ab4,	// (0x00005ab4) list_single_number_heading_pane_t3

0x0002,

0xf328,	// (0x0000f328) list_single_number_heading_pane_t_ParamLimits

0xf328,	// (0x0000f328) list_single_number_heading_pane_t

0x35a9,	// (0x000035a9) list_single_graphic_heading_pane_g1_ParamLimits

0x35a9,	// (0x000035a9) list_single_graphic_heading_pane_g1

0xbb83,	// (0x0000bb83) list_single_graphic_heading_pane_g4_ParamLimits

0xbb83,	// (0x0000bb83) list_single_graphic_heading_pane_g4

0x35b5,	// (0x000035b5) list_single_graphic_heading_pane_g5_ParamLimits

0x35b5,	// (0x000035b5) list_single_graphic_heading_pane_g5

0x0002,

0xf32f,	// (0x0000f32f) list_single_graphic_heading_pane_g_ParamLimits

0xf32f,	// (0x0000f32f) list_single_graphic_heading_pane_g

0xbb5b,	// (0x0000bb5b) list_single_graphic_heading_pane_t1_ParamLimits

0xbb5b,	// (0x0000bb5b) list_single_graphic_heading_pane_t1

0xbb94,	// (0x0000bb94) list_single_graphic_heading_pane_t2_ParamLimits

0xbb94,	// (0x0000bb94) list_single_graphic_heading_pane_t2

0x0001,

0xf336,	// (0x0000f336) list_single_graphic_heading_pane_t_ParamLimits

0xf336,	// (0x0000f336) list_single_graphic_heading_pane_t

0x5b04,	// (0x00005b04) list_single_large_graphic_pane_g1_ParamLimits

0x5b04,	// (0x00005b04) list_single_large_graphic_pane_g1

0x2574,	// (0x00002574) list_single_large_graphic_pane_g2_ParamLimits

0x2574,	// (0x00002574) list_single_large_graphic_pane_g2

0x35b5,	// (0x000035b5) list_single_large_graphic_pane_g3_ParamLimits

0x35b5,	// (0x000035b5) list_single_large_graphic_pane_g3

0x0002,

0xb102,	// (0x0000b102) list_single_large_graphic_pane_g_ParamLimits

0xb102,	// (0x0000b102) list_single_large_graphic_pane_g

0x3f24,	// (0x00003f24) wait_border_pane_g2_copy1

0xbba6,	// (0x0000bba6) list_single_large_graphic_pane_g4_cp2

0x5b10,	// (0x00005b10) list_single_large_graphic_pane_t1_ParamLimits

0x5b10,	// (0x00005b10) list_single_large_graphic_pane_t1

0x37d6,	// (0x000037d6) list_double_pane_g1_ParamLimits

0x37d6,	// (0x000037d6) list_double_pane_g1

0xbbae,	// (0x0000bbae) list_double_pane_g2_ParamLimits

0xbbae,	// (0x0000bbae) list_double_pane_g2

0x0001,

0xf33b,	// (0x0000f33b) list_double_pane_g_ParamLimits

0xf33b,	// (0x0000f33b) list_double_pane_g

0x77a4,	// (0x000077a4) list_double_pane_t1_ParamLimits

0x77a4,	// (0x000077a4) list_double_pane_t1

0xbbba,	// (0x0000bbba) list_double_pane_t2_ParamLimits

0xbbba,	// (0x0000bbba) list_double_pane_t2

0x0001,

0xf340,	// (0x0000f340) list_double_pane_t_ParamLimits

0xf340,	// (0x0000f340) list_double_pane_t

0xbbcc,	// (0x0000bbcc) list_double2_pane_g1_ParamLimits

0xbbcc,	// (0x0000bbcc) list_double2_pane_g1

0xbbdd,	// (0x0000bbdd) list_double2_pane_g2_ParamLimits

0xbbdd,	// (0x0000bbdd) list_double2_pane_g2

0x0001,

0xf345,	// (0x0000f345) list_double2_pane_g_ParamLimits

0xf345,	// (0x0000f345) list_double2_pane_g

0xbbe9,	// (0x0000bbe9) list_double2_pane_t1_ParamLimits

0xbbe9,	// (0x0000bbe9) list_double2_pane_t1

0xbbff,	// (0x0000bbff) list_double2_pane_t2_ParamLimits

0xbbff,	// (0x0000bbff) list_double2_pane_t2

0x0001,

0xf34a,	// (0x0000f34a) list_double2_pane_t_ParamLimits

0xf34a,	// (0x0000f34a) list_double2_pane_t

0x37d6,	// (0x000037d6) list_double_number_pane_g1_ParamLimits

0x37d6,	// (0x000037d6) list_double_number_pane_g1

0xbbae,	// (0x0000bbae) list_double_number_pane_g2_ParamLimits

0xbbae,	// (0x0000bbae) list_double_number_pane_g2

0x0001,

0xf33b,	// (0x0000f33b) list_double_number_pane_g_ParamLimits

0xf33b,	// (0x0000f33b) list_double_number_pane_g

0xbc11,	// (0x0000bc11) list_double_number_pane_t1_ParamLimits

0xbc11,	// (0x0000bc11) list_double_number_pane_t1

0xbc23,	// (0x0000bc23) list_double_number_pane_t2_ParamLimits

0xbc23,	// (0x0000bc23) list_double_number_pane_t2

0xbc39,	// (0x0000bc39) list_double_number_pane_t3_ParamLimits

0xbc39,	// (0x0000bc39) list_double_number_pane_t3

0x0002,

0xf34f,	// (0x0000f34f) list_double_number_pane_t_ParamLimits

0xf34f,	// (0x0000f34f) list_double_number_pane_t

0xbc4b,	// (0x0000bc4b) list_double_graphic_pane_g1_ParamLimits

0xbc4b,	// (0x0000bc4b) list_double_graphic_pane_g1

0xbc57,	// (0x0000bc57) list_double_graphic_pane_g2_ParamLimits

0xbc57,	// (0x0000bc57) list_double_graphic_pane_g2

0xbc66,	// (0x0000bc66) list_double_graphic_pane_g3_ParamLimits

0xbc66,	// (0x0000bc66) list_double_graphic_pane_g3

0x0003,

0xf356,	// (0x0000f356) list_double_graphic_pane_g_ParamLimits

0xf356,	// (0x0000f356) list_double_graphic_pane_g

0x37e2,	// (0x000037e2) list_double_graphic_pane_t1_ParamLimits

0x37e2,	// (0x000037e2) list_double_graphic_pane_t1

0xbc7e,	// (0x0000bc7e) list_double_graphic_pane_t2_ParamLimits

0xbc7e,	// (0x0000bc7e) list_double_graphic_pane_t2

0x0001,

0xf35f,	// (0x0000f35f) list_double_graphic_pane_t_ParamLimits

0xf35f,	// (0x0000f35f) list_double_graphic_pane_t

0xbc90,	// (0x0000bc90) list_double2_graphic_pane_g1_ParamLimits

0xbc90,	// (0x0000bc90) list_double2_graphic_pane_g1

0x245f,	// (0x0000245f) list_double2_graphic_pane_g2_ParamLimits

0x245f,	// (0x0000245f) list_double2_graphic_pane_g2

0xbbdd,	// (0x0000bbdd) list_double2_graphic_pane_g3_ParamLimits

0xbbdd,	// (0x0000bbdd) list_double2_graphic_pane_g3

0x0002,

0xf364,	// (0x0000f364) list_double2_graphic_pane_g_ParamLimits

0xf364,	// (0x0000f364) list_double2_graphic_pane_g

0xbc9c,	// (0x0000bc9c) list_double2_graphic_pane_t1_ParamLimits

0xbc9c,	// (0x0000bc9c) list_double2_graphic_pane_t1

0xbcb2,	// (0x0000bcb2) list_double2_graphic_pane_t2_ParamLimits

0xbcb2,	// (0x0000bcb2) list_double2_graphic_pane_t2

0x0001,

0xf36b,	// (0x0000f36b) list_double2_graphic_pane_t_ParamLimits

0xf36b,	// (0x0000f36b) list_double2_graphic_pane_t

0xbcc4,	// (0x0000bcc4) list_double_large_graphic_pane_g1_ParamLimits

0xbcc4,	// (0x0000bcc4) list_double_large_graphic_pane_g1

0xbce3,	// (0x0000bce3) list_double_large_graphic_pane_g2_ParamLimits

0xbce3,	// (0x0000bce3) list_double_large_graphic_pane_g2

0xbbae,	// (0x0000bbae) list_double_large_graphic_pane_g3_ParamLimits

0xbbae,	// (0x0000bbae) list_double_large_graphic_pane_g3

0xbcf4,	// (0x0000bcf4) list_double_large_graphic_pane_g4_ParamLimits

0xbcf4,	// (0x0000bcf4) list_double_large_graphic_pane_g4

0x0004,

0xf370,	// (0x0000f370) list_double_large_graphic_pane_g_ParamLimits

0xf370,	// (0x0000f370) list_double_large_graphic_pane_g

0xbd06,	// (0x0000bd06) list_double_large_graphic_pane_t1_ParamLimits

0xbd06,	// (0x0000bd06) list_double_large_graphic_pane_t1

0xbd1f,	// (0x0000bd1f) list_double_large_graphic_pane_t2_ParamLimits

0xbd1f,	// (0x0000bd1f) list_double_large_graphic_pane_t2

0x0001,

0xf37b,	// (0x0000f37b) list_double_large_graphic_pane_t_ParamLimits

0xf37b,	// (0x0000f37b) list_double_large_graphic_pane_t

0xbd31,	// (0x0000bd31) list_double2_large_graphic_pane_g1_ParamLimits

0xbd31,	// (0x0000bd31) list_double2_large_graphic_pane_g1

0xbbcc,	// (0x0000bbcc) list_double2_large_graphic_pane_g2_ParamLimits

0xbbcc,	// (0x0000bbcc) list_double2_large_graphic_pane_g2

0xbbdd,	// (0x0000bbdd) list_double2_large_graphic_pane_g3_ParamLimits

0xbbdd,	// (0x0000bbdd) list_double2_large_graphic_pane_g3

0x0002,

0xf380,	// (0x0000f380) list_double2_large_graphic_pane_g_ParamLimits

0xf380,	// (0x0000f380) list_double2_large_graphic_pane_g

0xbd3d,	// (0x0000bd3d) list_double2_large_graphic_pane_t1_ParamLimits

0xbd3d,	// (0x0000bd3d) list_double2_large_graphic_pane_t1

0xbd53,	// (0x0000bd53) list_double2_large_graphic_pane_t2_ParamLimits

0xbd53,	// (0x0000bd53) list_double2_large_graphic_pane_t2

0x0001,

0xf387,	// (0x0000f387) list_double2_large_graphic_pane_t_ParamLimits

0xf387,	// (0x0000f387) list_double2_large_graphic_pane_t

0xbd65,	// (0x0000bd65) list_double_heading_pane_g1_ParamLimits

0xbd65,	// (0x0000bd65) list_double_heading_pane_g1

0xbd76,	// (0x0000bd76) list_double_heading_pane_g2_ParamLimits

0xbd76,	// (0x0000bd76) list_double_heading_pane_g2

0x0001,

0xf38c,	// (0x0000f38c) list_double_heading_pane_g_ParamLimits

0xf38c,	// (0x0000f38c) list_double_heading_pane_g

0xbd82,	// (0x0000bd82) list_double_heading_pane_t1_ParamLimits

0xbd82,	// (0x0000bd82) list_double_heading_pane_t1

0xbd98,	// (0x0000bd98) list_double_heading_pane_t2_ParamLimits

0xbd98,	// (0x0000bd98) list_double_heading_pane_t2

0x0001,

0xf391,	// (0x0000f391) list_double_heading_pane_t_ParamLimits

0xf391,	// (0x0000f391) list_double_heading_pane_t

0x0fa4,	// (0x00000fa4) list_double_graphic_heading_pane_g1_ParamLimits

0x0fa4,	// (0x00000fa4) list_double_graphic_heading_pane_g1

0xbd65,	// (0x0000bd65) list_double_graphic_heading_pane_g2_ParamLimits

0xbd65,	// (0x0000bd65) list_double_graphic_heading_pane_g2

0xbd76,	// (0x0000bd76) list_double_graphic_heading_pane_g3_ParamLimits

0xbd76,	// (0x0000bd76) list_double_graphic_heading_pane_g3

0x0002,

0xf396,	// (0x0000f396) list_double_graphic_heading_pane_g_ParamLimits

0xf396,	// (0x0000f396) list_double_graphic_heading_pane_g

0xbdaa,	// (0x0000bdaa) list_double_graphic_heading_pane_t1_ParamLimits

0xbdaa,	// (0x0000bdaa) list_double_graphic_heading_pane_t1

0xbdc0,	// (0x0000bdc0) list_double_graphic_heading_pane_t2_ParamLimits

0xbdc0,	// (0x0000bdc0) list_double_graphic_heading_pane_t2

0x0001,

0xf39d,	// (0x0000f39d) list_double_graphic_heading_pane_t_ParamLimits

0xf39d,	// (0x0000f39d) list_double_graphic_heading_pane_t

0xbce3,	// (0x0000bce3) list_double_time_pane_g1_ParamLimits

0xbce3,	// (0x0000bce3) list_double_time_pane_g1

0xbbae,	// (0x0000bbae) list_double_time_pane_g2_ParamLimits

0xbbae,	// (0x0000bbae) list_double_time_pane_g2

0x0001,

0xf3a2,	// (0x0000f3a2) list_double_time_pane_g_ParamLimits

0xf3a2,	// (0x0000f3a2) list_double_time_pane_g

0xbdd2,	// (0x0000bdd2) list_double_time_pane_t1_ParamLimits

0xbdd2,	// (0x0000bdd2) list_double_time_pane_t1

0xbde8,	// (0x0000bde8) list_double_time_pane_t2_ParamLimits

0xbde8,	// (0x0000bde8) list_double_time_pane_t2

0xbdfa,	// (0x0000bdfa) list_double_time_pane_t3_ParamLimits

0xbdfa,	// (0x0000bdfa) list_double_time_pane_t3

0xbe0c,	// (0x0000be0c) list_double_time_pane_t4_ParamLimits

0xbe0c,	// (0x0000be0c) list_double_time_pane_t4

0x0003,

0xf3a7,	// (0x0000f3a7) list_double_time_pane_t_ParamLimits

0xf3a7,	// (0x0000f3a7) list_double_time_pane_t

0x245f,	// (0x0000245f) list_setting_pane_g1_ParamLimits

0x245f,	// (0x0000245f) list_setting_pane_g1

0xbbdd,	// (0x0000bbdd) list_setting_pane_g2_ParamLimits

0xbbdd,	// (0x0000bbdd) list_setting_pane_g2

0x0001,

0xf3b0,	// (0x0000f3b0) list_setting_pane_g_ParamLimits

0xf3b0,	// (0x0000f3b0) list_setting_pane_g

0xbe1e,	// (0x0000be1e) list_setting_pane_t1_ParamLimits

0xbe1e,	// (0x0000be1e) list_setting_pane_t1

0xbe35,	// (0x0000be35) list_setting_pane_t2_ParamLimits

0xbe35,	// (0x0000be35) list_setting_pane_t2

0x0002,

0xf3b5,	// (0x0000f3b5) list_setting_pane_t_ParamLimits

0xf3b5,	// (0x0000f3b5) list_setting_pane_t

0xbe74,	// (0x0000be74) set_value_pane_cp_ParamLimits

0xbe74,	// (0x0000be74) set_value_pane_cp

0x245f,	// (0x0000245f) list_setting_number_pane_g1_ParamLimits

0x245f,	// (0x0000245f) list_setting_number_pane_g1

0xbbdd,	// (0x0000bbdd) list_setting_number_pane_g2_ParamLimits

0xbbdd,	// (0x0000bbdd) list_setting_number_pane_g2

0x0001,

0xf3b0,	// (0x0000f3b0) list_setting_number_pane_g_ParamLimits

0xf3b0,	// (0x0000f3b0) list_setting_number_pane_g

0xbe80,	// (0x0000be80) list_setting_number_pane_t1_ParamLimits

0xbe80,	// (0x0000be80) list_setting_number_pane_t1

0xbe94,	// (0x0000be94) list_setting_number_pane_t2_ParamLimits

0xbe94,	// (0x0000be94) list_setting_number_pane_t2

0xbeab,	// (0x0000beab) list_setting_number_pane_t3_ParamLimits

0xbeab,	// (0x0000beab) list_setting_number_pane_t3

0x0003,

0xf3bc,	// (0x0000f3bc) list_setting_number_pane_t_ParamLimits

0xf3bc,	// (0x0000f3bc) list_setting_number_pane_t

0xbe74,	// (0x0000be74) set_value_pane_ParamLimits

0xbe74,	// (0x0000be74) set_value_pane

0x1289,	// (0x00001289) bg_set_opt_pane_ParamLimits

0x1289,	// (0x00001289) bg_set_opt_pane

0x12aa,	// (0x000012aa) set_value_pane_t1

0x12b8,	// (0x000012b8) slider_set_pane_cp3

0x12c1,	// (0x000012c1) volume_small_pane_cp

0x12ca,	// (0x000012ca) list_form_gen_pane

0x12d3,	// (0x000012d3) scroll_pane_cp8

0xbeee,	// (0x0000beee) form_field_data_pane_ParamLimits

0xbeee,	// (0x0000beee) form_field_data_pane

0xbf05,	// (0x0000bf05) form_field_data_wide_pane_ParamLimits

0xbf05,	// (0x0000bf05) form_field_data_wide_pane

0xbf25,	// (0x0000bf25) form_field_popup_pane_ParamLimits

0xbf25,	// (0x0000bf25) form_field_popup_pane

0xbf3d,	// (0x0000bf3d) form_field_popup_wide_pane_ParamLimits

0xbf3d,	// (0x0000bf3d) form_field_popup_wide_pane

0x136e,	// (0x0000136e) form_field_slider_pane_ParamLimits

0x136e,	// (0x0000136e) form_field_slider_pane

0x1381,	// (0x00001381) form_field_slider_wide_pane_ParamLimits

0x1381,	// (0x00001381) form_field_slider_wide_pane

0x1394,	// (0x00001394) data_form_pane

0xbf5e,	// (0x0000bf5e) form_field_data_pane_t1

0x13c2,	// (0x000013c2) input_focus_pane

0x13d0,	// (0x000013d0) data_form_wide_pane

0x13fc,	// (0x000013fc) form_field_data_wide_pane_t1

0x0bb8,	// (0x00000bb8) input_focus_pane_cp6

0xbf78,	// (0x0000bf78) form_field_popup_pane_t1

0x13c2,	// (0x000013c2) input_focus_pane_cp7

0x1433,	// (0x00001433) list_form_pane

0x1447,	// (0x00001447) form_field_popup_wide_pane_t1

0x13c2,	// (0x000013c2) input_focus_pane_cp8

0x1459,	// (0x00001459) list_form_wide_pane

0xbf9a,	// (0x0000bf9a) form_field_slider_pane_t1_ParamLimits

0xbf9a,	// (0x0000bf9a) form_field_slider_pane_t1

0xbfb2,	// (0x0000bfb2) form_field_slider_pane_t2_ParamLimits

0xbfb2,	// (0x0000bfb2) form_field_slider_pane_t2

0x0001,

0xf3c5,	// (0x0000f3c5) form_field_slider_pane_t_ParamLimits

0xf3c5,	// (0x0000f3c5) form_field_slider_pane_t

0x082d,	// (0x0000082d) input_focus_pane_cp9_ParamLimits

0x082d,	// (0x0000082d) input_focus_pane_cp9

0xbfc7,	// (0x0000bfc7) slider_cont_pane_ParamLimits

0xbfc7,	// (0x0000bfc7) slider_cont_pane

0x14a5,	// (0x000014a5) form_field_slider_wide_pane_t1_ParamLimits

0x14a5,	// (0x000014a5) form_field_slider_wide_pane_t1

0x14b7,	// (0x000014b7) form_field_slider_wide_pane_t2_ParamLimits

0x14b7,	// (0x000014b7) form_field_slider_wide_pane_t2

0x0001,

0xad57,	// (0x0000ad57) form_field_slider_wide_pane_t_ParamLimits

0xad57,	// (0x0000ad57) form_field_slider_wide_pane_t

0x082d,	// (0x0000082d) input_focus_pane_cp10_ParamLimits

0x082d,	// (0x0000082d) input_focus_pane_cp10

0xbfdb,	// (0x0000bfdb) slider_cont_pane_cp1_ParamLimits

0xbfdb,	// (0x0000bfdb) slider_cont_pane_cp1

0xbfef,	// (0x0000bfef) slider_form_pane_cp

0x14e5,	// (0x000014e5) input_focus_pane_g1

0x14ed,	// (0x000014ed) input_focus_pane_g2

0x14f5,	// (0x000014f5) input_focus_pane_g3

0x14fd,	// (0x000014fd) input_focus_pane_g4

0x1505,	// (0x00001505) input_focus_pane_g5

0x150d,	// (0x0000150d) input_focus_pane_g6

0x1515,	// (0x00001515) input_focus_pane_g7

0x151d,	// (0x0000151d) input_focus_pane_g8

0x1525,	// (0x00001525) input_focus_pane_g9

0x002e,	// (0x0000002e) input_focus_pane_g10

0x0009,

0xad5c,	// (0x0000ad5c) input_focus_pane_g

0x3f2d,	// (0x00003f2d) wait_border_pane_g3_copy1

0xbff7,	// (0x0000bff7) data_form_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g1_copy1

0xd4b9,	// (0x0000d4b9) data_form_wide_pane_t1

0xc011,	// (0x0000c011) list_form_graphic_pane_cp_ParamLimits

0xc011,	// (0x0000c011) list_form_graphic_pane_cp

0x5096,	// (0x00005096) slider_form_pane_g1

0x509f,	// (0x0000509f) slider_form_pane_g2

0x0006,

0xf47a,	// (0x0000f47a) slider_form_pane_g

0xc011,	// (0x0000c011) list_form_graphic_pane_ParamLimits

0xc011,	// (0x0000c011) list_form_graphic_pane

0x157d,	// (0x0000157d) list_form_graphic_pane_g1

0x1585,	// (0x00001585) list_form_graphic_pane_t1_ParamLimits

0x1585,	// (0x00001585) list_form_graphic_pane_t1

0x0507,	// (0x00000507) list_highlight_pane_cp5_ParamLimits

0x0507,	// (0x00000507) list_highlight_pane_cp5

0xc023,	// (0x0000c023) find_pane_g1

0x15a3,	// (0x000015a3) input_find_pane

0xc02c,	// (0x0000c02c) input_find_pane_g1_ParamLimits

0xc02c,	// (0x0000c02c) input_find_pane_g1

0xc038,	// (0x0000c038) input_find_pane_t1_ParamLimits

0xc038,	// (0x0000c038) input_find_pane_t1

0xc04d,	// (0x0000c04d) input_find_pane_t2_ParamLimits

0xc04d,	// (0x0000c04d) input_find_pane_t2

0x0001,

0xf3ca,	// (0x0000f3ca) input_find_pane_t_ParamLimits

0xf3ca,	// (0x0000f3ca) input_find_pane_t

0x15e2,	// (0x000015e2) input_focus_pane_cp5_ParamLimits

0x15e2,	// (0x000015e2) input_focus_pane_cp5

0x15fc,	// (0x000015fc) bg_popup_window_pane_cp2_ParamLimits

0x15fc,	// (0x000015fc) bg_popup_window_pane_cp2

0x1609,	// (0x00001609) listscroll_menu_pane_ParamLimits

0x1609,	// (0x00001609) listscroll_menu_pane

0xc06e,	// (0x0000c06e) popup_submenu_window_ParamLimits

0xc06e,	// (0x0000c06e) popup_submenu_window

0x1641,	// (0x00001641) find_popup_pane_g1

0x1649,	// (0x00001649) input_popup_find_pane_cp

0x15e2,	// (0x000015e2) input_focus_pane_cp4_ParamLimits

0x15e2,	// (0x000015e2) input_focus_pane_cp4

0x165f,	// (0x0000165f) input_popup_find_pane_t1_ParamLimits

0x165f,	// (0x0000165f) input_popup_find_pane_t1

0x0293,	// (0x00000293) bg_popup_sub_pane_cp

0x168d,	// (0x0000168d) listscroll_popup_sub_pane

0x1695,	// (0x00001695) list_submenu_pane_ParamLimits

0x1695,	// (0x00001695) list_submenu_pane

0x16a6,	// (0x000016a6) scroll_pane_cp4

0x16ae,	// (0x000016ae) list_single_popup_submenu_pane_ParamLimits

0x16ae,	// (0x000016ae) list_single_popup_submenu_pane

0x16c2,	// (0x000016c2) list_single_popup_submenu_pane_g1

0x16ca,	// (0x000016ca) list_single_popup_submenu_pane_t1_ParamLimits

0x16ca,	// (0x000016ca) list_single_popup_submenu_pane_t1

0x082d,	// (0x0000082d) bg_active_tab_pane_cp1_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp1

0x16df,	// (0x000016df) tabs_2_active_pane_g1

0xc0a8,	// (0x0000c0a8) tabs_2_active_pane_t1

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp1_ParamLimits

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp1

0x16df,	// (0x000016df) tabs_2_passive_pane_g1

0xc0a8,	// (0x0000c0a8) tabs_2_passive_pane_t1

0x0507,	// (0x00000507) bg_active_tab_pane_cp4

0xc0ba,	// (0x0000c0ba) tabs_2_long_active_pane_t1

0x2b86,	// (0x00002b86) bg_passive_tab_pane_cp4

0x3786,	// (0x00003786) list_single_midp_graphic_pane_g4_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp5

0xc0cd,	// (0x0000c0cd) tabs_3_long_active_pane_t1

0x2b86,	// (0x00002b86) bg_passive_tab_pane_cp5

0x3786,	// (0x00003786) list_single_midp_graphic_pane_g4

0x0507,	// (0x00000507) bg_popup_window_pane_cp13_ParamLimits

0x0507,	// (0x00000507) bg_popup_window_pane_cp13

0x1741,	// (0x00001741) listscroll_popup_fast_pane_ParamLimits

0x1741,	// (0x00001741) listscroll_popup_fast_pane

0x1750,	// (0x00001750) grid_popup_fast_pane_ParamLimits

0x1750,	// (0x00001750) grid_popup_fast_pane

0x1762,	// (0x00001762) scroll_pane_cp9_ParamLimits

0x1762,	// (0x00001762) scroll_pane_cp9

0x7408,	// (0x00007408) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7408,	// (0x00007408) list_single_graphic_hl_pane_t1_cp2

0x1786,	// (0x00001786) input_focus_pane_cp20_ParamLimits

0x1786,	// (0x00001786) input_focus_pane_cp20

0x1794,	// (0x00001794) query_popup_data_pane_t1_ParamLimits

0x1794,	// (0x00001794) query_popup_data_pane_t1

0x17a7,	// (0x000017a7) query_popup_data_pane_t2_ParamLimits

0x17a7,	// (0x000017a7) query_popup_data_pane_t2

0x17ed,	// (0x000017ed) query_popup_data_pane_t3_ParamLimits

0x17ed,	// (0x000017ed) query_popup_data_pane_t3

0x182e,	// (0x0000182e) query_popup_data_pane_t4_ParamLimits

0x182e,	// (0x0000182e) query_popup_data_pane_t4

0x186a,	// (0x0000186a) query_popup_data_pane_t5_ParamLimits

0x186a,	// (0x0000186a) query_popup_data_pane_t5

0x0004,

0xad76,	// (0x0000ad76) query_popup_data_pane_t_ParamLimits

0xad76,	// (0x0000ad76) query_popup_data_pane_t

0x14e5,	// (0x000014e5) bg_set_opt_pane_g1

0x14ed,	// (0x000014ed) bg_set_opt_pane_g2

0x14f5,	// (0x000014f5) bg_set_opt_pane_g3

0x14fd,	// (0x000014fd) bg_set_opt_pane_g4

0x1505,	// (0x00001505) bg_set_opt_pane_g5

0x150d,	// (0x0000150d) bg_set_opt_pane_g6

0x1515,	// (0x00001515) bg_set_opt_pane_g7

0x151d,	// (0x0000151d) bg_set_opt_pane_g8

0x1525,	// (0x00001525) bg_set_opt_pane_g9

0x0008,

0xad81,	// (0x0000ad81) bg_set_opt_pane_g

0x2188,	// (0x00002188) control_top_pane_stacon_ParamLimits

0x2188,	// (0x00002188) control_top_pane_stacon

0x21db,	// (0x000021db) signal_pane_stacon_ParamLimits

0x21db,	// (0x000021db) signal_pane_stacon

0x2200,	// (0x00002200) stacon_top_pane_g1_ParamLimits

0x2200,	// (0x00002200) stacon_top_pane_g1

0x2222,	// (0x00002222) title_pane_stacon_ParamLimits

0x2222,	// (0x00002222) title_pane_stacon

0x224c,	// (0x0000224c) uni_indicator_pane_stacon_ParamLimits

0x224c,	// (0x0000224c) uni_indicator_pane_stacon

0x2261,	// (0x00002261) battery_pane_stacon_ParamLimits

0x2261,	// (0x00002261) battery_pane_stacon

0x22a5,	// (0x000022a5) control_bottom_pane_stacon_ParamLimits

0x22a5,	// (0x000022a5) control_bottom_pane_stacon

0x22c8,	// (0x000022c8) navi_pane_stacon_ParamLimits

0x22c8,	// (0x000022c8) navi_pane_stacon

0x22eb,	// (0x000022eb) stacon_bottom_pane_g1_ParamLimits

0x22eb,	// (0x000022eb) stacon_bottom_pane_g1

0x18a1,	// (0x000018a1) aid_levels_signal_lsc_ParamLimits

0x18a1,	// (0x000018a1) aid_levels_signal_lsc

0x18b7,	// (0x000018b7) signal_pane_stacon_g1_ParamLimits

0x18b7,	// (0x000018b7) signal_pane_stacon_g1

0x18cb,	// (0x000018cb) signal_pane_stacon_g2_ParamLimits

0x18cb,	// (0x000018cb) signal_pane_stacon_g2

0x0001,

0xad94,	// (0x0000ad94) signal_pane_stacon_g_ParamLimits

0xad94,	// (0x0000ad94) signal_pane_stacon_g

0x190d,	// (0x0000190d) title_pane_stacon_t1_ParamLimits

0x190d,	// (0x0000190d) title_pane_stacon_t1

0x1932,	// (0x00001932) uni_indicator_pane_stacon_g1

0x193c,	// (0x0000193c) uni_indicator_pane_stacon_g2

0x1946,	// (0x00001946) uni_indicator_pane_stacon_g3

0x1950,	// (0x00001950) uni_indicator_pane_stacon_g4

0x0003,

0xada0,	// (0x0000ada0) uni_indicator_pane_stacon_g

0x195a,	// (0x0000195a) control_top_pane_stacon_g1

0x1962,	// (0x00001962) control_top_pane_stacon_t1_ParamLimits

0x1962,	// (0x00001962) control_top_pane_stacon_t1

0x1999,	// (0x00001999) aid_levels_battery_lsc_ParamLimits

0x1999,	// (0x00001999) aid_levels_battery_lsc

0x19b0,	// (0x000019b0) battery_pane_stacon_g1_ParamLimits

0x19b0,	// (0x000019b0) battery_pane_stacon_g1

0x19c3,	// (0x000019c3) battery_pane_stacon_g2_ParamLimits

0x19c3,	// (0x000019c3) battery_pane_stacon_g2

0x0001,

0xada9,	// (0x0000ada9) battery_pane_stacon_g_ParamLimits

0xada9,	// (0x0000ada9) battery_pane_stacon_g

0x1a01,	// (0x00001a01) navi_icon_pane_stacon

0x1a15,	// (0x00001a15) navi_navi_pane_stacon

0x1a01,	// (0x00001a01) navi_text_pane_stacon

0x195a,	// (0x0000195a) control_bottom_pane_stacon_g1

0x1a29,	// (0x00001a29) control_bottom_pane_stacon_t1_ParamLimits

0x1a29,	// (0x00001a29) control_bottom_pane_stacon_t1

0xc0df,	// (0x0000c0df) grid_app_pane_ParamLimits

0xc0df,	// (0x0000c0df) grid_app_pane

0xc117,	// (0x0000c117) scroll_pane_cp15_ParamLimits

0xc117,	// (0x0000c117) scroll_pane_cp15

0xc12c,	// (0x0000c12c) cell_app_pane_ParamLimits

0xc12c,	// (0x0000c12c) cell_app_pane

0xc171,	// (0x0000c171) cell_app_pane_g1_ParamLimits

0xc171,	// (0x0000c171) cell_app_pane_g1

0x1afb,	// (0x00001afb) cell_app_pane_g2_ParamLimits

0x1afb,	// (0x00001afb) cell_app_pane_g2

0x0001,

0xf3cf,	// (0x0000f3cf) cell_app_pane_g_ParamLimits

0xf3cf,	// (0x0000f3cf) cell_app_pane_g

0xc195,	// (0x0000c195) cell_app_pane_t1_ParamLimits

0xc195,	// (0x0000c195) cell_app_pane_t1

0x1b1e,	// (0x00001b1e) grid_highlight_pane_ParamLimits

0x1b1e,	// (0x00001b1e) grid_highlight_pane

0x14e5,	// (0x000014e5) cell_highlight_pane_g1

0x14ed,	// (0x000014ed) cell_highlight_pane_g2

0x14f5,	// (0x000014f5) cell_highlight_pane_g3

0x14fd,	// (0x000014fd) cell_highlight_pane_g4

0x1505,	// (0x00001505) cell_highlight_pane_g5

0x150d,	// (0x0000150d) cell_highlight_pane_g6

0x1515,	// (0x00001515) cell_highlight_pane_g7

0x151d,	// (0x0000151d) cell_highlight_pane_g8

0x1525,	// (0x00001525) cell_highlight_pane_g9

0x002e,	// (0x0000002e) cell_highlight_pane_g10

0x0009,

0xad5c,	// (0x0000ad5c) cell_highlight_pane_g

0x1b42,	// (0x00001b42) bg_scroll_pane

0x1b61,	// (0x00001b61) scroll_handle_pane

0x1bb2,	// (0x00001bb2) scroll_bg_pane_g1

0x1bc7,	// (0x00001bc7) scroll_bg_pane_g2

0x1bdf,	// (0x00001bdf) scroll_bg_pane_g3

0x0002,

0xadb3,	// (0x0000adb3) scroll_bg_pane_g

0x1bf4,	// (0x00001bf4) scroll_handle_focus_pane_ParamLimits

0x1bf4,	// (0x00001bf4) scroll_handle_focus_pane

0x1bb2,	// (0x00001bb2) scroll_handle_pane_g1

0x1c01,	// (0x00001c01) scroll_handle_pane_g2

0x1bdf,	// (0x00001bdf) scroll_handle_pane_g3

0x0002,

0xadba,	// (0x0000adba) scroll_handle_pane_g

0x15e2,	// (0x000015e2) bg_popup_sub_pane_cp21_ParamLimits

0x15e2,	// (0x000015e2) bg_popup_sub_pane_cp21

0x1c15,	// (0x00001c15) popup_fep_japan_predictive_window_t1_ParamLimits

0x1c15,	// (0x00001c15) popup_fep_japan_predictive_window_t1

0x1c2f,	// (0x00001c2f) popup_fep_japan_predictive_window_t2_ParamLimits

0x1c2f,	// (0x00001c2f) popup_fep_japan_predictive_window_t2

0x1c62,	// (0x00001c62) popup_fep_japan_predictive_window_t3_ParamLimits

0x1c62,	// (0x00001c62) popup_fep_japan_predictive_window_t3

0x0002,

0xadc1,	// (0x0000adc1) popup_fep_japan_predictive_window_t_ParamLimits

0xadc1,	// (0x0000adc1) popup_fep_japan_predictive_window_t

0x0293,	// (0x00000293) bg_popup_sub_pane_cp23

0x1c99,	// (0x00001c99) listscroll_japin_cand_pane

0x1ca1,	// (0x00001ca1) popup_fep_japan_candidate_window_t1

0x1caf,	// (0x00001caf) candidate_pane_ParamLimits

0x1caf,	// (0x00001caf) candidate_pane

0x1cc1,	// (0x00001cc1) scroll_pane_cp30

0x1cc9,	// (0x00001cc9) list_single_popup_jap_candidate_pane_ParamLimits

0x1cc9,	// (0x00001cc9) list_single_popup_jap_candidate_pane

0x0293,	// (0x00000293) list_highlight_pane_cp30

0x1cde,	// (0x00001cde) list_single_popup_jap_candidate_pane_t1

0x1ced,	// (0x00001ced) level_1_signal

0x1cff,	// (0x00001cff) level_2_signal

0x1d12,	// (0x00001d12) level_3_signal

0x1d25,	// (0x00001d25) level_4_signal

0x1d38,	// (0x00001d38) level_5_signal

0x1d4b,	// (0x00001d4b) level_6_signal

0x1d5e,	// (0x00001d5e) level_7_signal

0x1ced,	// (0x00001ced) level_1_battery

0x1cff,	// (0x00001cff) level_2_battery

0x1d12,	// (0x00001d12) level_3_battery

0x1d25,	// (0x00001d25) level_4_battery

0x1d38,	// (0x00001d38) level_5_battery

0x1d4b,	// (0x00001d4b) level_6_battery

0x1d5e,	// (0x00001d5e) level_7_battery

0x1da8,	// (0x00001da8) list_menu_pane_ParamLimits

0x1da8,	// (0x00001da8) list_menu_pane

0x1dbe,	// (0x00001dbe) scroll_pane_cp25_ParamLimits

0x1dbe,	// (0x00001dbe) scroll_pane_cp25

0x1dd7,	// (0x00001dd7) list_double2_graphic_pane_cp2_ParamLimits

0x1dd7,	// (0x00001dd7) list_double2_graphic_pane_cp2

0x1dd7,	// (0x00001dd7) list_double2_large_graphic_pane_cp2_ParamLimits

0x1dd7,	// (0x00001dd7) list_double2_large_graphic_pane_cp2

0x1dd7,	// (0x00001dd7) list_double2_pane_cp2_ParamLimits

0x1dd7,	// (0x00001dd7) list_double2_pane_cp2

0x1dd7,	// (0x00001dd7) list_double_graphic_pane_cp2_ParamLimits

0x1dd7,	// (0x00001dd7) list_double_graphic_pane_cp2

0x1dd7,	// (0x00001dd7) list_double_large_graphic_pane_cp2_ParamLimits

0x1dd7,	// (0x00001dd7) list_double_large_graphic_pane_cp2

0x1dd7,	// (0x00001dd7) list_double_number_pane_cp2_ParamLimits

0x1dd7,	// (0x00001dd7) list_double_number_pane_cp2

0x1dd7,	// (0x00001dd7) list_double_pane_cp2_ParamLimits

0x1dd7,	// (0x00001dd7) list_double_pane_cp2

0xc1b5,	// (0x0000c1b5) list_single_2graphic_pane_cp2_ParamLimits

0xc1b5,	// (0x0000c1b5) list_single_2graphic_pane_cp2

0xc1b5,	// (0x0000c1b5) list_single_graphic_heading_pane_cp2_ParamLimits

0xc1b5,	// (0x0000c1b5) list_single_graphic_heading_pane_cp2

0xc1b5,	// (0x0000c1b5) list_single_graphic_pane_cp2_ParamLimits

0xc1b5,	// (0x0000c1b5) list_single_graphic_pane_cp2

0xc1b5,	// (0x0000c1b5) list_single_heading_pane_cp2_ParamLimits

0xc1b5,	// (0x0000c1b5) list_single_heading_pane_cp2

0x1e14,	// (0x00001e14) list_single_large_graphic_pane_cp2_ParamLimits

0x1e14,	// (0x00001e14) list_single_large_graphic_pane_cp2

0xc1b5,	// (0x0000c1b5) list_single_number_heading_pane_cp2_ParamLimits

0xc1b5,	// (0x0000c1b5) list_single_number_heading_pane_cp2

0xc1b5,	// (0x0000c1b5) list_single_number_pane_cp2_ParamLimits

0xc1b5,	// (0x0000c1b5) list_single_number_pane_cp2

0xc1b5,	// (0x0000c1b5) list_single_pane_cp2_ParamLimits

0xc1b5,	// (0x0000c1b5) list_single_pane_cp2

0x1eeb,	// (0x00001eeb) bg_popup_sub_pane_cp22

0x1f10,	// (0x00001f10) popup_side_volume_key_window_g1

0x1f3a,	// (0x00001f3a) popup_side_volume_key_window_t1

0x1f56,	// (0x00001f56) volume_small_pane_cp1

0x082d,	// (0x0000082d) bg_popup_sub_pane_cp24_ParamLimits

0x082d,	// (0x0000082d) bg_popup_sub_pane_cp24

0x1f5e,	// (0x00001f5e) fep_china_uni_candidate_pane_ParamLimits

0x1f5e,	// (0x00001f5e) fep_china_uni_candidate_pane

0x1f72,	// (0x00001f72) fep_china_uni_entry_pane

0x1f82,	// (0x00001f82) popup_fep_china_uni_window_g1

0x1f9e,	// (0x00001f9e) fep_china_uni_entry_pane_g1

0x1fa6,	// (0x00001fa6) fep_china_uni_entry_pane_g2

0x0001,

0xadf2,	// (0x0000adf2) fep_china_uni_entry_pane_g

0x1fae,	// (0x00001fae) fep_entry_item_pane

0x1fb8,	// (0x00001fb8) fep_candidate_item_pane

0x1fc0,	// (0x00001fc0) fep_china_uni_candidate_pane_g1

0x1fc8,	// (0x00001fc8) fep_china_uni_candidate_pane_g2

0x1fd0,	// (0x00001fd0) fep_china_uni_candidate_pane_g3

0x1fd8,	// (0x00001fd8) fep_china_uni_candidate_pane_g4

0x0003,

0xadf7,	// (0x0000adf7) fep_china_uni_candidate_pane_g

0x002e,	// (0x0000002e) fep_entry_item_pane_g1

0x1fe0,	// (0x00001fe0) fep_entry_item_pane_t1_ParamLimits

0x1fe0,	// (0x00001fe0) fep_entry_item_pane_t1

0x1ff6,	// (0x00001ff6) fep_candidate_item_pane_t1_ParamLimits

0x1ff6,	// (0x00001ff6) fep_candidate_item_pane_t1

0x200b,	// (0x0000200b) fep_candidate_item_pane_t2_ParamLimits

0x200b,	// (0x0000200b) fep_candidate_item_pane_t2

0x0001,

0xae00,	// (0x0000ae00) fep_candidate_item_pane_t_ParamLimits

0xae00,	// (0x0000ae00) fep_candidate_item_pane_t

0x0507,	// (0x00000507) list_highlight_pane_cp31_ParamLimits

0x0507,	// (0x00000507) list_highlight_pane_cp31

0x201d,	// (0x0000201d) level_1_signal_lsc

0x2026,	// (0x00002026) level_2_signal_lsc

0x202f,	// (0x0000202f) level_3_signal_lsc

0x2038,	// (0x00002038) level_4_signal_lsc

0x2041,	// (0x00002041) level_5_signal_lsc

0x204a,	// (0x0000204a) level_6_signal_lsc

0x2053,	// (0x00002053) level_7_signal_lsc

0x2053,	// (0x00002053) level_1_battery_lsc

0x205c,	// (0x0000205c) level_2_battery_lsc

0x2065,	// (0x00002065) level_3_battery_lsc

0x206e,	// (0x0000206e) level_4_battery_lsc

0x2077,	// (0x00002077) level_5_battery_lsc

0x2080,	// (0x00002080) level_6_battery_lsc

0x201d,	// (0x0000201d) level_7_battery_lsc

0x2089,	// (0x00002089) scroll_handle_focus_pane_g1

0x2092,	// (0x00002092) scroll_handle_focus_pane_g2

0x209b,	// (0x0000209b) scroll_handle_focus_pane_g3

0x0002,

0xae05,	// (0x0000ae05) scroll_handle_focus_pane_g

0xc242,	// (0x0000c242) list_single_2graphic_pane_g1_ParamLimits

0xc242,	// (0x0000c242) list_single_2graphic_pane_g1

0xbb83,	// (0x0000bb83) list_single_2graphic_pane_g2_ParamLimits

0xbb83,	// (0x0000bb83) list_single_2graphic_pane_g2

0x35b5,	// (0x000035b5) list_single_2graphic_pane_g3_ParamLimits

0x35b5,	// (0x000035b5) list_single_2graphic_pane_g3

0xc24e,	// (0x0000c24e) list_single_2graphic_pane_g4_ParamLimits

0xc24e,	// (0x0000c24e) list_single_2graphic_pane_g4

0x0003,

0xf3dd,	// (0x0000f3dd) list_single_2graphic_pane_g_ParamLimits

0xf3dd,	// (0x0000f3dd) list_single_2graphic_pane_g

0xc25f,	// (0x0000c25f) list_single_2graphic_pane_t1_ParamLimits

0xc25f,	// (0x0000c25f) list_single_2graphic_pane_t1

0xc28d,	// (0x0000c28d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc28d,	// (0x0000c28d) list_double2_graphic_large_graphic_pane_g1

0xbbcc,	// (0x0000bbcc) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xbbcc,	// (0x0000bbcc) list_double2_graphic_large_graphic_pane_g2

0xbbdd,	// (0x0000bbdd) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xbbdd,	// (0x0000bbdd) list_double2_graphic_large_graphic_pane_g3

0xc29f,	// (0x0000c29f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xc29f,	// (0x0000c29f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf3e6,	// (0x0000f3e6) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf3e6,	// (0x0000f3e6) list_double2_graphic_large_graphic_pane_g

0xc2ab,	// (0x0000c2ab) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xc2ab,	// (0x0000c2ab) list_double2_graphic_large_graphic_pane_t1

0xc2c1,	// (0x0000c2c1) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xc2c1,	// (0x0000c2c1) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf3ef,	// (0x0000f3ef) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf3ef,	// (0x0000f3ef) list_double2_graphic_large_graphic_pane_t

0x23b3,	// (0x000023b3) popup_fast_swap_window_ParamLimits

0x23b3,	// (0x000023b3) popup_fast_swap_window

0x23cf,	// (0x000023cf) popup_side_volume_key_window

0x23eb,	// (0x000023eb) stacon_top_pane

0x23f5,	// (0x000023f5) status_pane_ParamLimits

0x23f5,	// (0x000023f5) status_pane

0xc2d3,	// (0x0000c2d3) status_small_pane

0x0293,	// (0x00000293) control_pane

0x0293,	// (0x00000293) stacon_bottom_pane

0x12d3,	// (0x000012d3) scroll_pane_cp121

0x12ca,	// (0x000012ca) set_content_pane

0x2133,	// (0x00002133) bg_active_tab_pane_g1_cp1

0x213c,	// (0x0000213c) bg_active_tab_pane_g2_cp1

0x2145,	// (0x00002145) bg_active_tab_pane_g3_cp1

0x2133,	// (0x00002133) bg_passive_tab_pane_g1_cp1

0x213c,	// (0x0000213c) bg_passive_tab_pane_g2_cp1

0x2145,	// (0x00002145) bg_passive_tab_pane_g3_cp1

0x214e,	// (0x0000214e) bg_active_tab_pane_g1_cp2

0x213c,	// (0x0000213c) bg_active_tab_pane_g2_cp2

0x2157,	// (0x00002157) bg_active_tab_pane_g3_cp2

0x214e,	// (0x0000214e) bg_passive_tab_pane_g1_cp2

0x213c,	// (0x0000213c) bg_passive_tab_pane_g2_cp2

0x2157,	// (0x00002157) bg_passive_tab_pane_g3_cp2

0x2160,	// (0x00002160) bg_active_tab_pane_g1_cp3

0x213c,	// (0x0000213c) bg_active_tab_pane_g2_cp3

0x2169,	// (0x00002169) bg_active_tab_pane_g3_cp3

0x2160,	// (0x00002160) bg_passive_tab_pane_g1_cp3

0x213c,	// (0x0000213c) bg_passive_tab_pane_g2_cp3

0x2169,	// (0x00002169) bg_passive_tab_pane_g3_cp3

0x2172,	// (0x00002172) bg_active_tab_pane_g1_cp4

0x213c,	// (0x0000213c) bg_active_tab_pane_g2_cp4

0x217d,	// (0x0000217d) bg_active_tab_pane_g3_cp4

0x2172,	// (0x00002172) bg_passive_tab_pane_g1_cp4

0x213c,	// (0x0000213c) bg_passive_tab_pane_g2_cp4

0x217d,	// (0x0000217d) bg_passive_tab_pane_g3_cp4

0x2307,	// (0x00002307) bg_active_tab_pane_g1_cp5

0x213c,	// (0x0000213c) bg_active_tab_pane_g2_cp5

0x2310,	// (0x00002310) bg_active_tab_pane_g3_cp5

0x2307,	// (0x00002307) bg_passive_tab_pane_g1_cp5

0x213c,	// (0x0000213c) bg_passive_tab_pane_g2_cp5

0x2310,	// (0x00002310) bg_passive_tab_pane_g3_cp5

0x5877,	// (0x00005877) list_set_graphic_pane_ParamLimits

0x5877,	// (0x00005877) list_set_graphic_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp4

0x2336,	// (0x00002336) list_set_graphic_pane_g1_ParamLimits

0x2336,	// (0x00002336) list_set_graphic_pane_g1

0x2342,	// (0x00002342) list_set_graphic_pane_g2_ParamLimits

0x2342,	// (0x00002342) list_set_graphic_pane_g2

0x0001,

0xae23,	// (0x0000ae23) list_set_graphic_pane_g_ParamLimits

0xae23,	// (0x0000ae23) list_set_graphic_pane_g

0x0009,

0xb19d,	// (0x0000b19d) volume_small_pane_cp_g

0x2366,	// (0x00002366) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x2366,	// (0x00002366) list_double2_large_graphic_pane_g1_cp2

0x2372,	// (0x00002372) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2372,	// (0x00002372) list_double2_large_graphic_pane_g2_cp2

0x2383,	// (0x00002383) list_double2_large_graphic_pane_g3_cp2

0x238b,	// (0x0000238b) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x238b,	// (0x0000238b) list_double2_large_graphic_pane_t1_cp2

0x23a1,	// (0x000023a1) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x23a1,	// (0x000023a1) list_double2_large_graphic_pane_t2_cp2

0x4b64,	// (0x00004b64) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4b64,	// (0x00004b64) list_double_large_graphic_pane_g1_cp2

0x4b75,	// (0x00004b75) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4b75,	// (0x00004b75) list_double_large_graphic_pane_g2_cp2

0x251c,	// (0x0000251c) list_double_large_graphic_pane_g3_cp2

0x4b86,	// (0x00004b86) list_double_large_graphic_pane_g4_cp

0x4b8e,	// (0x00004b8e) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4b8e,	// (0x00004b8e) list_double_large_graphic_pane_t1_cp2

0x4ba5,	// (0x00004ba5) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4ba5,	// (0x00004ba5) list_double_large_graphic_pane_t2_cp2

0x240e,	// (0x0000240e) list_double2_graphic_pane_g1_cp2_ParamLimits

0x240e,	// (0x0000240e) list_double2_graphic_pane_g1_cp2

0x241c,	// (0x0000241c) list_double2_graphic_pane_g2_cp2_ParamLimits

0x241c,	// (0x0000241c) list_double2_graphic_pane_g2_cp2

0x242d,	// (0x0000242d) list_double2_graphic_pane_g3_cp2

0x2437,	// (0x00002437) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2437,	// (0x00002437) list_double2_graphic_pane_t1_cp2

0x244d,	// (0x0000244d) list_double2_graphic_pane_t2_cp2_ParamLimits

0x244d,	// (0x0000244d) list_double2_graphic_pane_t2_cp2

0x245f,	// (0x0000245f) list_single_number_heading_pane_g1_cp2_ParamLimits

0x245f,	// (0x0000245f) list_single_number_heading_pane_g1_cp2

0x246b,	// (0x0000246b) list_single_number_heading_pane_g2_cp2

0x2473,	// (0x00002473) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2473,	// (0x00002473) list_single_number_heading_pane_t1_cp2

0x2489,	// (0x00002489) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2489,	// (0x00002489) list_single_number_heading_pane_t2_cp2

0x249b,	// (0x0000249b) list_single_number_heading_pane_t3_cp2_ParamLimits

0x249b,	// (0x0000249b) list_single_number_heading_pane_t3_cp2

0x245f,	// (0x0000245f) list_single_heading_pane_g1_cp2_ParamLimits

0x245f,	// (0x0000245f) list_single_heading_pane_g1_cp2

0x246b,	// (0x0000246b) list_single_heading_pane_g2_cp2

0x2473,	// (0x00002473) list_single_heading_pane_t1_cp2_ParamLimits

0x2473,	// (0x00002473) list_single_heading_pane_t1_cp2

0x496c,	// (0x0000496c) list_single_heading_pane_t2_cp2_ParamLimits

0x496c,	// (0x0000496c) list_single_heading_pane_t2_cp2

0x48b4,	// (0x000048b4) list_double_graphic_pane_g1_cp2_ParamLimits

0x48b4,	// (0x000048b4) list_double_graphic_pane_g1_cp2

0x48c0,	// (0x000048c0) list_double_graphic_pane_g2_cp2_ParamLimits

0x48c0,	// (0x000048c0) list_double_graphic_pane_g2_cp2

0x48cf,	// (0x000048cf) list_double_graphic_pane_g3_cp2

0x48d7,	// (0x000048d7) list_double_graphic_pane_t1_cp2_ParamLimits

0x48d7,	// (0x000048d7) list_double_graphic_pane_t1_cp2

0x48ed,	// (0x000048ed) list_double_graphic_pane_t2_cp2_ParamLimits

0x48ed,	// (0x000048ed) list_double_graphic_pane_t2_cp2

0x2510,	// (0x00002510) list_double_number_pane_g1_cp2_ParamLimits

0x2510,	// (0x00002510) list_double_number_pane_g1_cp2

0x251c,	// (0x0000251c) list_double_number_pane_g2_cp2

0x4878,	// (0x00004878) list_double_number_pane_t1_cp2_ParamLimits

0x4878,	// (0x00004878) list_double_number_pane_t1_cp2

0x488c,	// (0x0000488c) list_double_number_pane_t2_cp2_ParamLimits

0x488c,	// (0x0000488c) list_double_number_pane_t2_cp2

0x48a2,	// (0x000048a2) list_double_number_pane_t3_cp2_ParamLimits

0x48a2,	// (0x000048a2) list_double_number_pane_t3_cp2

0x4750,	// (0x00004750) list_single_graphic_pane_g1_cp2_ParamLimits

0x4750,	// (0x00004750) list_single_graphic_pane_g1_cp2

0x2574,	// (0x00002574) list_single_graphic_pane_g2_cp2_ParamLimits

0x2574,	// (0x00002574) list_single_graphic_pane_g2_cp2

0x2580,	// (0x00002580) list_single_graphic_pane_g3_cp2

0x4726,	// (0x00004726) list_single_graphic_pane_t1_cp2_ParamLimits

0x4726,	// (0x00004726) list_single_graphic_pane_t1_cp2

0x2574,	// (0x00002574) list_single_number_pane_g1_cp2_ParamLimits

0x2574,	// (0x00002574) list_single_number_pane_g1_cp2

0x2580,	// (0x00002580) list_single_number_pane_g2_cp2

0x4726,	// (0x00004726) list_single_number_pane_t1_cp2_ParamLimits

0x4726,	// (0x00004726) list_single_number_pane_t1_cp2

0x473c,	// (0x0000473c) list_single_number_pane_t2_cp2_ParamLimits

0x473c,	// (0x0000473c) list_single_number_pane_t2_cp2

0x2372,	// (0x00002372) list_double2_pane_g1_cp2_ParamLimits

0x2372,	// (0x00002372) list_double2_pane_g1_cp2

0x2383,	// (0x00002383) list_double2_pane_g2_cp2

0x24e8,	// (0x000024e8) list_double2_pane_t1_cp2_ParamLimits

0x24e8,	// (0x000024e8) list_double2_pane_t1_cp2

0x24fe,	// (0x000024fe) list_double2_pane_t2_cp2_ParamLimits

0x24fe,	// (0x000024fe) list_double2_pane_t2_cp2

0x2510,	// (0x00002510) list_double_pane_g1_cp2_ParamLimits

0x2510,	// (0x00002510) list_double_pane_g1_cp2

0x251c,	// (0x0000251c) list_double_pane_g2_cp2

0x2524,	// (0x00002524) list_double_pane_t1_cp2_ParamLimits

0x2524,	// (0x00002524) list_double_pane_t1_cp2

0x253a,	// (0x0000253a) list_double_pane_t2_cp2_ParamLimits

0x253a,	// (0x0000253a) list_double_pane_t2_cp2

0x2564,	// (0x00002564) list_single_pane_cp2_g3

0x2574,	// (0x00002574) list_single_pane_g1_cp2_ParamLimits

0x2574,	// (0x00002574) list_single_pane_g1_cp2

0x2580,	// (0x00002580) list_single_pane_g2_cp2

0x2588,	// (0x00002588) list_single_pane_t1_cp2_ParamLimits

0x2588,	// (0x00002588) list_single_pane_t1_cp2

0x25a0,	// (0x000025a0) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x25a0,	// (0x000025a0) list_single_large_graphic_pane_g1_cp2

0x25ac,	// (0x000025ac) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x25ac,	// (0x000025ac) list_single_large_graphic_pane_g2_cp2

0x25b8,	// (0x000025b8) list_single_large_graphic_pane_g3_cp2

0x25c0,	// (0x000025c0) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x25c0,	// (0x000025c0) list_single_large_graphic_pane_g4_cp1

0x25da,	// (0x000025da) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x25da,	// (0x000025da) list_single_large_graphic_pane_t1_cp2

0x459f,	// (0x0000459f) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x459f,	// (0x0000459f) list_single_graphic_heading_pane_g1_cp2

0x456c,	// (0x0000456c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x456c,	// (0x0000456c) list_single_graphic_heading_pane_g4_cp2

0x2580,	// (0x00002580) list_single_graphic_heading_pane_g5_cp2

0x45ab,	// (0x000045ab) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x45ab,	// (0x000045ab) list_single_graphic_heading_pane_t1_cp2

0x45c1,	// (0x000045c1) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x45c1,	// (0x000045c1) list_single_graphic_heading_pane_t2_cp2

0x4560,	// (0x00004560) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4560,	// (0x00004560) list_single_2graphic_pane_g1_cp2

0x456c,	// (0x0000456c) list_single_2graphic_pane_g2_cp2_ParamLimits

0x456c,	// (0x0000456c) list_single_2graphic_pane_g2_cp2

0x2580,	// (0x00002580) list_single_2graphic_pane_g3_cp2

0x457d,	// (0x0000457d) list_single_2graphic_pane_g4_cp2_ParamLimits

0x457d,	// (0x0000457d) list_single_2graphic_pane_g4_cp2

0x4589,	// (0x00004589) list_single_2graphic_pane_t1_cp2_ParamLimits

0x4589,	// (0x00004589) list_single_2graphic_pane_t1_cp2

0x002e,	// (0x0000002e) list_highlight_pane_g10_cp1

0x4138,	// (0x00004138) list_highlight_pane_g1_cp1

0x4140,	// (0x00004140) list_highlight_pane_g2_cp1

0x4148,	// (0x00004148) list_highlight_pane_g3_cp1

0x4150,	// (0x00004150) list_highlight_pane_g4_cp1

0x4158,	// (0x00004158) list_highlight_pane_g5_cp1

0x4160,	// (0x00004160) list_highlight_pane_g6_cp1

0x4168,	// (0x00004168) list_highlight_pane_g7_cp1

0x4170,	// (0x00004170) list_highlight_pane_g8_cp1

0x4178,	// (0x00004178) list_highlight_pane_g9_cp1

0xd1d2,	// (0x0000d1d2) form_field_slider_pane_t3

0xd1e0,	// (0x0000d1e0) form_field_slider_pane_t4

0x4074,	// (0x00004074) slider_form_pane_ParamLimits

0x4074,	// (0x00004074) slider_form_pane

0x0293,	// (0x00000293) control_abbreviations

0x0293,	// (0x00000293) control_conventions

0x0293,	// (0x00000293) control_definitions

0x0293,	// (0x00000293) format_table_attribute

0x49b6,	// (0x000049b6) bg_popup_preview_window_pane_g9

0x0293,	// (0x00000293) format_table_data2

0x0293,	// (0x00000293) format_table_data3

0x0293,	// (0x00000293) format_table_data_example

0x0008,

0x0293,	// (0x00000293) intro_purpose

0xafb8,	// (0x0000afb8) bg_popup_preview_window_pane_g

0x0293,	// (0x00000293) texts_category

0x0293,	// (0x00000293) texts_graphics

0x25f0,	// (0x000025f0) text_digital

0x25ff,	// (0x000025ff) text_primary

0x260e,	// (0x0000260e) text_primary_small

0x261d,	// (0x0000261d) text_secondary

0x262c,	// (0x0000262c) text_title

0x529e,	// (0x0000529e) bg_passive_tab_pane_g1_cp3_srt

0x213c,	// (0x0000213c) bg_passive_tab_pane_g2_cp3_srt

0x52a7,	// (0x000052a7) bg_passive_tab_pane_g3_cp3_srt

0x082d,	// (0x0000082d) bg_active_tab_pane_cp3_srt_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp3_srt

0x52b0,	// (0x000052b0) tabs_4_active_pane_srt_g1

0xd562,	// (0x0000d562) tabs_4_active_pane_srt_t1_ParamLimits

0xd562,	// (0x0000d562) tabs_4_active_pane_srt_t1

0x529e,	// (0x0000529e) bg_active_tab_pane_g1_cp3_copy1

0x213c,	// (0x0000213c) bg_active_tab_pane_g2_cp3_copy1

0x52a7,	// (0x000052a7) bg_active_tab_pane_g3_cp3_copy1

0x0507,	// (0x00000507) tabs_2_long_active_pane_srt_ParamLimits

0x0507,	// (0x00000507) tabs_2_long_active_pane_srt

0x0507,	// (0x00000507) tabs_2_long_passive_pane_srt_ParamLimits

0x0507,	// (0x00000507) tabs_2_long_passive_pane_srt

0x2b86,	// (0x00002b86) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2b86,	// (0x00002b86) bg_passive_tab_pane_cp4_srt

0x4e51,	// (0x00004e51) bg_passive_tab_pane_g1_cp4_srt

0x213c,	// (0x0000213c) bg_passive_tab_pane_g2_cp4_srt

0x4e5a,	// (0x00004e5a) bg_passive_tab_pane_g3_cp4_srt

0x0507,	// (0x00000507) bg_active_tab_pane_cp4_srt_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp4_srt

0xd34e,	// (0x0000d34e) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd34e,	// (0x0000d34e) tabs_2_long_active_pane_srt_t1

0x4e51,	// (0x00004e51) bg_active_tab_pane_g1_cp4_srt

0x213c,	// (0x0000213c) bg_active_tab_pane_g2_cp4_srt

0x4e5a,	// (0x00004e5a) bg_active_tab_pane_g3_cp4_srt

0x082d,	// (0x0000082d) tabs_3_long_active_pane_srt_ParamLimits

0x082d,	// (0x0000082d) tabs_3_long_active_pane_srt

0x082d,	// (0x0000082d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x082d,	// (0x0000082d) tabs_3_long_passive_pane_cp_srt

0x082d,	// (0x0000082d) tabs_3_long_passive_pane_srt_ParamLimits

0x082d,	// (0x0000082d) tabs_3_long_passive_pane_srt

0x2b86,	// (0x00002b86) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2b86,	// (0x00002b86) bg_passive_tab_pane_cp5_srt

0x2307,	// (0x00002307) bg_passive_tab_pane_g1_cp5_srt

0x213c,	// (0x0000213c) bg_passive_tab_pane_g2_cp5_srt

0x2310,	// (0x00002310) bg_passive_tab_pane_g3_cp5_srt

0x0507,	// (0x00000507) bg_active_tab_pane_cp5_srt_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp5_srt

0xd338,	// (0x0000d338) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd338,	// (0x0000d338) tabs_3_long_active_pane_srt_t1

0x2307,	// (0x00002307) bg_active_tab_pane_g1_cp5_srt

0x213c,	// (0x0000213c) bg_active_tab_pane_g2_cp5_srt

0x2310,	// (0x00002310) bg_active_tab_pane_g3_cp5_srt

0x4e31,	// (0x00004e31) navi_text_pane_srt_t1

0x4e29,	// (0x00004e29) navi_icon_pane_srt_g1

0x28aa,	// (0x000028aa) midp_editing_number_pane_srt

0x263b,	// (0x0000263b) midp_ticker_pane_srt

0x28b2,	// (0x000028b2) midp_ticker_pane_srt_g1

0x28ba,	// (0x000028ba) midp_ticker_pane_srt_g2

0x0001,

0xae42,	// (0x0000ae42) midp_ticker_pane_srt_g

0x28c2,	// (0x000028c2) midp_ticker_pane_srt_t1

0x4e1a,	// (0x00004e1a) midp_editing_number_pane_t1_copy1

0xc2de,	// (0x0000c2de) listscroll_midp_pane

0xc2de,	// (0x0000c2de) midp_form_pane

0x26b3,	// (0x000026b3) midp_info_popup_window_ParamLimits

0x26b3,	// (0x000026b3) midp_info_popup_window

0x15e2,	// (0x000015e2) bg_popup_sub_pane_cp50_ParamLimits

0x15e2,	// (0x000015e2) bg_popup_sub_pane_cp50

0x3d64,	// (0x00003d64) listscroll_midp_info_pane_ParamLimits

0x3d64,	// (0x00003d64) listscroll_midp_info_pane

0x3d44,	// (0x00003d44) listscroll_form_midp_pane_ParamLimits

0x3d44,	// (0x00003d44) listscroll_form_midp_pane

0x3d50,	// (0x00003d50) scroll_bar_cp050

0x3d44,	// (0x00003d44) list_midp_pane

0x6102,	// (0x00006102) signal_pane_g2_cp

0x3c5e,	// (0x00003c5e) listscroll_midp_info_pane_t1_ParamLimits

0x3c5e,	// (0x00003c5e) listscroll_midp_info_pane_t1

0x3c76,	// (0x00003c76) listscroll_midp_info_pane_t2_ParamLimits

0x3c76,	// (0x00003c76) listscroll_midp_info_pane_t2

0x3cb4,	// (0x00003cb4) listscroll_midp_info_pane_t3_ParamLimits

0x3cb4,	// (0x00003cb4) listscroll_midp_info_pane_t3

0x3cee,	// (0x00003cee) listscroll_midp_info_pane_t4_ParamLimits

0x3cee,	// (0x00003cee) listscroll_midp_info_pane_t4

0x0003,

0xaef3,	// (0x0000aef3) listscroll_midp_info_pane_t_ParamLimits

0xaef3,	// (0x0000aef3) listscroll_midp_info_pane_t

0x16a6,	// (0x000016a6) scroll_pane_cp21

0x3bfc,	// (0x00003bfc) form_midp_field_choice_group_pane

0x3c05,	// (0x00003c05) form_midp_field_text_pane

0x3c44,	// (0x00003c44) form_midp_field_time_pane

0x3c4c,	// (0x00003c4c) form_midp_gauge_slider_pane

0x3c55,	// (0x00003c55) form_midp_gauge_wait_pane

0x0293,	// (0x00000293) form_midp_image_pane

0xd1bc,	// (0x0000d1bc) list_single_midp_pane_ParamLimits

0xd1bc,	// (0x0000d1bc) list_single_midp_pane

0xd19b,	// (0x0000d19b) form_midp_field_text_pane_t1

0x38bf,	// (0x000038bf) input_focus_pane_cp050

0x3bbd,	// (0x00003bbd) list_midp_form_text_pane

0x3b55,	// (0x00003b55) form_midp_field_choice_group_pane_t1

0x3b63,	// (0x00003b63) input_focus_pane_cp051

0x3b77,	// (0x00003b77) list_midp_choice_pane

0x0293,	// (0x00000293) status_idle_pane

0x3b39,	// (0x00003b39) form_midp_field_time_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g2_copy1

0x3b47,	// (0x00003b47) form_midp_field_time_pane_t2

0x0001,

0x2761,	// (0x00002761) aid_navinavi_width_2_pane

0xaeee,	// (0x0000aeee) form_midp_field_time_pane_t

0x0293,	// (0x00000293) input_focus_pane_cp052

0x0293,	// (0x00000293) bg_input_focus_pane_cp040

0x3af9,	// (0x00003af9) form_midp_gauge_slider_pane_t1

0x3b07,	// (0x00003b07) form_midp_gauge_slider_pane_t2

0xd17f,	// (0x0000d17f) form_midp_gauge_slider_pane_t3

0xd18d,	// (0x0000d18d) form_midp_gauge_slider_pane_t4

0x0003,

0xf441,	// (0x0000f441) form_midp_gauge_slider_pane_t

0x3b31,	// (0x00003b31) form_midp_slider_pane

0x0507,	// (0x00000507) bg_input_focus_pane_cp041_ParamLimits

0x0507,	// (0x00000507) bg_input_focus_pane_cp041

0x3ac6,	// (0x00003ac6) form_midp_gauge_wait_pane_t1_ParamLimits

0x3ac6,	// (0x00003ac6) form_midp_gauge_wait_pane_t1

0x3ad8,	// (0x00003ad8) form_midp_gauge_wait_pane_t2_ParamLimits

0x3ad8,	// (0x00003ad8) form_midp_gauge_wait_pane_t2

0x0001,

0xaee0,	// (0x0000aee0) form_midp_gauge_wait_pane_t_ParamLimits

0xaee0,	// (0x0000aee0) form_midp_gauge_wait_pane_t

0x3aea,	// (0x00003aea) form_midp_wait_pane_ParamLimits

0x3aea,	// (0x00003aea) form_midp_wait_pane

0x3a90,	// (0x00003a90) form_midp_image_pane_g1

0x3a99,	// (0x00003a99) form_midp_image_pane_t1

0x3aa8,	// (0x00003aa8) form_midp_image_pane_t2

0x3ab7,	// (0x00003ab7) form_midp_image_pane_t3

0x0002,

0xaed9,	// (0x0000aed9) form_midp_image_pane_t

0x3a78,	// (0x00003a78) list_single_midp_pane_g1

0x3a81,	// (0x00003a81) list_single_midp_pane_t1

0xd16b,	// (0x0000d16b) list_midp_form_item_pane_ParamLimits

0xd16b,	// (0x0000d16b) list_midp_form_item_pane

0x2709,	// (0x00002709) list_midp_form_item_pane_t1

0x2718,	// (0x00002718) midp_ticker_pane_g1

0x2724,	// (0x00002724) midp_ticker_pane_g2

0x0001,

0xae28,	// (0x0000ae28) midp_ticker_pane_g

0x2730,	// (0x00002730) midp_ticker_pane_t1

0x5116,	// (0x00005116) midp_editing_number_pane_t1

0x50f4,	// (0x000050f4) midp_editing_number_pane

0x5103,	// (0x00005103) midp_ticker_pane

0x4de2,	// (0x00004de2) ai_message_heading_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp14

0x4dea,	// (0x00004dea) listscroll_ai_message_pane

0x4d6c,	// (0x00004d6c) ai_message_heading_pane_g1_ParamLimits

0x4d6c,	// (0x00004d6c) ai_message_heading_pane_g1

0x4d78,	// (0x00004d78) ai_message_heading_pane_g2_ParamLimits

0x4d78,	// (0x00004d78) ai_message_heading_pane_g2

0x4d84,	// (0x00004d84) ai_message_heading_pane_g3_ParamLimits

0x4d84,	// (0x00004d84) ai_message_heading_pane_g3

0x4d90,	// (0x00004d90) ai_message_heading_pane_g4_ParamLimits

0x4d90,	// (0x00004d90) ai_message_heading_pane_g4

0x0003,

0xb01a,	// (0x0000b01a) ai_message_heading_pane_g_ParamLimits

0xb01a,	// (0x0000b01a) ai_message_heading_pane_g

0x4d9c,	// (0x00004d9c) ai_message_heading_pane_t1_ParamLimits

0x4d9c,	// (0x00004d9c) ai_message_heading_pane_t1

0x4db6,	// (0x00004db6) ai_message_heading_pane_t2_ParamLimits

0x4db6,	// (0x00004db6) ai_message_heading_pane_t2

0x0001,

0xb023,	// (0x0000b023) ai_message_heading_pane_t_ParamLimits

0xb023,	// (0x0000b023) ai_message_heading_pane_t

0x4dc8,	// (0x00004dc8) bg_popup_heading_pane_cp1_ParamLimits

0x4dc8,	// (0x00004dc8) bg_popup_heading_pane_cp1

0x4d5a,	// (0x00004d5a) list_ai_message_pane_ParamLimits

0x4d5a,	// (0x00004d5a) list_ai_message_pane

0x16a6,	// (0x000016a6) scroll_pane_cp10

0x4ca6,	// (0x00004ca6) list_ai_message_pane_g1

0x4cae,	// (0x00004cae) list_ai_message_pane_g2

0x0001,

0xaff7,	// (0x0000aff7) list_ai_message_pane_g

0x4cb6,	// (0x00004cb6) list_ai_message_pane_t1_ParamLimits

0x4cb6,	// (0x00004cb6) list_ai_message_pane_t1

0x4ccb,	// (0x00004ccb) list_ai_message_pane_t2_ParamLimits

0x4ccb,	// (0x00004ccb) list_ai_message_pane_t2

0x4ce0,	// (0x00004ce0) list_ai_message_pane_t3_ParamLimits

0x4ce0,	// (0x00004ce0) list_ai_message_pane_t3

0x4cf5,	// (0x00004cf5) list_ai_message_pane_t4_ParamLimits

0x4cf5,	// (0x00004cf5) list_ai_message_pane_t4

0x0003,

0xaffc,	// (0x0000affc) list_ai_message_pane_t_ParamLimits

0xaffc,	// (0x0000affc) list_ai_message_pane_t

0xd305,	// (0x0000d305) cell_ai_soft_ind_pane_ParamLimits

0xd305,	// (0x0000d305) cell_ai_soft_ind_pane

0x2742,	// (0x00002742) cell_ai_soft_ind_pane_g1_ParamLimits

0x2742,	// (0x00002742) cell_ai_soft_ind_pane_g1

0x0293,	// (0x00000293) grid_highlight_cp1

0x274f,	// (0x0000274f) text_secondary_cp56_ParamLimits

0x274f,	// (0x0000274f) text_secondary_cp56

0x4c66,	// (0x00004c66) example_general_pane_ParamLimits

0x4c66,	// (0x00004c66) example_general_pane

0x4c72,	// (0x00004c72) example_parent_pane_g1_ParamLimits

0x4c72,	// (0x00004c72) example_parent_pane_g1

0x4c7e,	// (0x00004c7e) example_parent_pane_t1_ParamLimits

0x4c7e,	// (0x00004c7e) example_parent_pane_t1

0xc9b6,	// (0x0000c9b6) popup_preview_text_window_ParamLimits

0xc9b6,	// (0x0000c9b6) popup_preview_text_window

0x256c,	// (0x0000256c) list_single_pane_cp2_g4

0x0909,	// (0x00000909) bg_popup_preview_window_pane_ParamLimits

0x0909,	// (0x00000909) bg_popup_preview_window_pane

0x49be,	// (0x000049be) popup_preview_text_window_t1_ParamLimits

0x49be,	// (0x000049be) popup_preview_text_window_t1

0x49dc,	// (0x000049dc) popup_preview_text_window_t2_ParamLimits

0x49dc,	// (0x000049dc) popup_preview_text_window_t2

0x4a25,	// (0x00004a25) popup_preview_text_window_t3_ParamLimits

0x4a25,	// (0x00004a25) popup_preview_text_window_t3

0x4a6a,	// (0x00004a6a) popup_preview_text_window_t4_ParamLimits

0x4a6a,	// (0x00004a6a) popup_preview_text_window_t4

0x0004,

0xafcb,	// (0x0000afcb) popup_preview_text_window_t_ParamLimits

0xafcb,	// (0x0000afcb) popup_preview_text_window_t

0x4ae8,	// (0x00004ae8) scroll_pane_cp11

0x3711,	// (0x00003711) bg_popup_preview_window_pane_g1

0x497e,	// (0x0000497e) bg_popup_preview_window_pane_g2

0x4986,	// (0x00004986) bg_popup_preview_window_pane_g3

0x498e,	// (0x0000498e) bg_popup_preview_window_pane_g4

0x4996,	// (0x00004996) bg_popup_preview_window_pane_g5

0x499e,	// (0x0000499e) bg_popup_preview_window_pane_g6

0x49a6,	// (0x000049a6) bg_popup_preview_window_pane_g7

0x49ae,	// (0x000049ae) bg_popup_preview_window_pane_g8

0x0044,	// (0x00000044) aid_popup_width_pane

0xc932,	// (0x0000c932) popup_midp_note_alarm_window_ParamLimits

0xc932,	// (0x0000c932) popup_midp_note_alarm_window

0x1394,	// (0x00001394) data_form_pane_ParamLimits

0xbf54,	// (0x0000bf54) form_field_data_pane_g1

0xbf5e,	// (0x0000bf5e) form_field_data_pane_t1_ParamLimits

0x13c2,	// (0x000013c2) input_focus_pane_ParamLimits

0x13d0,	// (0x000013d0) data_form_wide_pane_ParamLimits

0x13dc,	// (0x000013dc) form_field_data_wide_pane_g1

0x13fc,	// (0x000013fc) form_field_data_wide_pane_t1_ParamLimits

0x0bb8,	// (0x00000bb8) input_focus_pane_cp6_ParamLimits

0xc09a,	// (0x0000c09a) input_popup_find_pane_g1_ParamLimits

0xc09a,	// (0x0000c09a) input_popup_find_pane_g1

0x19d4,	// (0x000019d4) aid_navi_side_left_pane

0x19e9,	// (0x000019e9) aid_navi_side_right_pane

0x4233,	// (0x00004233) bg_popup_window_pane_cp30_ParamLimits

0x4233,	// (0x00004233) bg_popup_window_pane_cp30

0x42ad,	// (0x000042ad) popup_midp_note_alarm_window_g1_ParamLimits

0x42ad,	// (0x000042ad) popup_midp_note_alarm_window_g1

0x42dd,	// (0x000042dd) popup_midp_note_alarm_window_t1_ParamLimits

0x42dd,	// (0x000042dd) popup_midp_note_alarm_window_t1

0x437e,	// (0x0000437e) popup_midp_note_alarm_window_t2_ParamLimits

0x437e,	// (0x0000437e) popup_midp_note_alarm_window_t2

0x442c,	// (0x0000442c) popup_midp_note_alarm_window_t3_ParamLimits

0x442c,	// (0x0000442c) popup_midp_note_alarm_window_t3

0x445e,	// (0x0000445e) popup_midp_note_alarm_window_t4_ParamLimits

0x445e,	// (0x0000445e) popup_midp_note_alarm_window_t4

0x4484,	// (0x00004484) popup_midp_note_alarm_window_t5_ParamLimits

0x4484,	// (0x00004484) popup_midp_note_alarm_window_t5

0x000a,

0xaf68,	// (0x0000af68) popup_midp_note_alarm_window_t_ParamLimits

0xaf68,	// (0x0000af68) popup_midp_note_alarm_window_t

0x4530,	// (0x00004530) wait_bar_pane_cp1_ParamLimits

0x4530,	// (0x00004530) wait_bar_pane_cp1

0x0293,	// (0x00000293) wait_anim_pane_copy1

0x0293,	// (0x00000293) wait_border_pane_copy1

0x3f19,	// (0x00003f19) wait_border_pane_g1_copy1

0x1413,	// (0x00001413) form_field_popup_pane_g1

0xbf78,	// (0x0000bf78) form_field_popup_pane_t1_ParamLimits

0x13c2,	// (0x000013c2) input_focus_pane_cp7_ParamLimits

0x1433,	// (0x00001433) list_form_pane_ParamLimits

0x143f,	// (0x0000143f) form_field_popup_wide_pane_g1

0x1447,	// (0x00001447) form_field_popup_wide_pane_t1_ParamLimits

0x13c2,	// (0x000013c2) input_focus_pane_cp8_ParamLimits

0x1459,	// (0x00001459) list_form_wide_pane_ParamLimits

0xd5bb,	// (0x0000d5bb) aid_size_cell_graphic_pane

0xbff7,	// (0x0000bff7) data_form_pane_t1_ParamLimits

0xd4b9,	// (0x0000d4b9) data_form_wide_pane_t1_ParamLimits

0xcd7e,	// (0x0000cd7e) bg_status_flat_pane

0xb830,	// (0x0000b830) title_pane_t1_ParamLimits

0x04cf,	// (0x000004cf) title_pane_t2_ParamLimits

0x04f5,	// (0x000004f5) title_pane_t3_ParamLimits

0xf301,	// (0x0000f301) title_pane_t_ParamLimits

0x1ced,	// (0x00001ced) level_1_signal_ParamLimits

0x1cff,	// (0x00001cff) level_2_signal_ParamLimits

0x1d12,	// (0x00001d12) level_3_signal_ParamLimits

0x1d25,	// (0x00001d25) level_4_signal_ParamLimits

0x1d38,	// (0x00001d38) level_5_signal_ParamLimits

0x1d4b,	// (0x00001d4b) level_6_signal_ParamLimits

0x1d5e,	// (0x00001d5e) level_7_signal_ParamLimits

0x1ced,	// (0x00001ced) level_1_battery_ParamLimits

0x1cff,	// (0x00001cff) level_2_battery_ParamLimits

0x1d12,	// (0x00001d12) level_3_battery_ParamLimits

0x1d25,	// (0x00001d25) level_4_battery_ParamLimits

0x1d38,	// (0x00001d38) level_5_battery_ParamLimits

0x1d4b,	// (0x00001d4b) level_6_battery_ParamLimits

0x1d5e,	// (0x00001d5e) level_7_battery_ParamLimits

0x4138,	// (0x00004138) bg_status_flat_pane_g1

0x4140,	// (0x00004140) bg_status_flat_pane_g2

0x4148,	// (0x00004148) bg_status_flat_pane_g3

0x4150,	// (0x00004150) bg_status_flat_pane_g4

0x4158,	// (0x00004158) bg_status_flat_pane_g5

0x4160,	// (0x00004160) bg_status_flat_pane_g6

0x4168,	// (0x00004168) bg_status_flat_pane_g7

0xb8bc,	// (0x0000b8bc) tabs_3_active_pane_t1_ParamLimits

0xb8bc,	// (0x0000b8bc) tabs_3_passive_pane_t1_ParamLimits

0xb8ce,	// (0x0000b8ce) tabs_4_active_pane_t1_ParamLimits

0xb8ce,	// (0x0000b8ce) tabs_4_1_passive_pane_t1_ParamLimits

0xc0a8,	// (0x0000c0a8) tabs_2_active_pane_t1_ParamLimits

0xc0a8,	// (0x0000c0a8) tabs_2_passive_pane_t1_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp4_ParamLimits

0xc0ba,	// (0x0000c0ba) tabs_2_long_active_pane_t1_ParamLimits

0x2b86,	// (0x00002b86) bg_passive_tab_pane_cp4_ParamLimits

0x37e2,	// (0x000037e2) list_single_midp_graphic_pane_t1_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp5_ParamLimits

0xc0cd,	// (0x0000c0cd) tabs_3_long_active_pane_t1_ParamLimits

0x2b86,	// (0x00002b86) bg_passive_tab_pane_cp5_ParamLimits

0x37e2,	// (0x000037e2) list_single_midp_graphic_pane_t1

0xcd7e,	// (0x0000cd7e) bg_status_flat_pane_ParamLimits

0x32fb,	// (0x000032fb) indicator_pane_cp2_ParamLimits

0x32fb,	// (0x000032fb) indicator_pane_cp2

0xcefc,	// (0x0000cefc) navi_pane_srt_ParamLimits

0xcefc,	// (0x0000cefc) navi_pane_srt

0x344a,	// (0x0000344a) popup_clock_digital_analogue_window_cp1

0x068f,	// (0x0000068f) indicator_pane_t1

0x263b,	// (0x0000263b) copy_highlight_pane

0x263b,	// (0x0000263b) cursor_graphics_pane

0x263b,	// (0x0000263b) graphic_within_text_pane

0x263b,	// (0x0000263b) link_highlight_pane

0x4aab,	// (0x00004aab) popup_preview_text_window_t5_ParamLimits

0x4aab,	// (0x00004aab) popup_preview_text_window_t5

0x2769,	// (0x00002769) cursor_digital_pane

0x2769,	// (0x00002769) cursor_primary_pane

0x277a,	// (0x0000277a) cursor_primary_small_pane

0x2782,	// (0x00002782) cursor_secondary_pane

0x278a,	// (0x0000278a) cursor_title_pane

0x2769,	// (0x00002769) link_highlight_digital_pane

0x2771,	// (0x00002771) link_highlight_primary_pane

0x277a,	// (0x0000277a) link_highlight_primary_small_pane

0x2782,	// (0x00002782) link_highlight_secondary_pane

0x278a,	// (0x0000278a) link_highlight_title_pane

0x2769,	// (0x00002769) copy_highlight_digital_pane

0x2769,	// (0x00002769) copy_highlight_primary_pane

0x277a,	// (0x0000277a) copy_highlight_primary_small_pane

0x2782,	// (0x00002782) copy_highlight_secondary_pane

0x278a,	// (0x0000278a) copy_highlight_title_pane

0x2782,	// (0x00002782) graphic_text_digital_pane

0x41d6,	// (0x000041d6) graphic_text_primary_pane

0x41df,	// (0x000041df) graphic_text_primary_small_pane

0x277a,	// (0x0000277a) graphic_text_secondary_pane

0x2769,	// (0x00002769) graphic_text_title_pane

0xc383,	// (0x0000c383) cursor_primary_pane_g1

0x41c8,	// (0x000041c8) cursor_text_primary_t1

0xd202,	// (0x0000d202) cursor_primary_small_pane_g1

0x41ba,	// (0x000041ba) cursor_text_primary_small_t1

0xd1f8,	// (0x0000d1f8) cursor_primary_small_pane_g1_copy1

0x41a2,	// (0x000041a2) cursor_text_primary_small_t1_copy1

0x4180,	// (0x00004180) cursor_text_title_t1

0xd1ee,	// (0x0000d1ee) cursor_title_pane_g1

0xc383,	// (0x0000c383) cursor_digital_pane_g1

0x279c,	// (0x0000279c) cursor_text_digital_t1

0x27c1,	// (0x000027c1) link_highlight_primary_pane_g1

0x4129,	// (0x00004129) link_highlight_primary_pane_t1

0x27aa,	// (0x000027aa) link_highlight_primary_small_pane_g1

0x27b2,	// (0x000027b2) link_highlight_primary_small_pane_t1

0x27c1,	// (0x000027c1) link_highlight_secondary_pane_g1

0x27c9,	// (0x000027c9) link_highlight_secondary_pane_t1

0x409d,	// (0x0000409d) link_highlight_title_pane_g1

0x40a5,	// (0x000040a5) link_highlight_title_pane_t1

0x4086,	// (0x00004086) link_highlight_digital_pane_g1

0x408e,	// (0x0000408e) link_highlight_digital_pane_t1

0x3f5e,	// (0x00003f5e) copy_highlight_primary_pane_g1

0x3f66,	// (0x00003f66) copy_highlight_primary_pane_t1

0x3f38,	// (0x00003f38) copy_highlight_primary_small_pane_g1

0x3f4f,	// (0x00003f4f) copy_highlight_primary_small_pane_t1

0x27d8,	// (0x000027d8) copy_highlight_secondary_pane_g1

0x27e0,	// (0x000027e0) copy_highlight_secondary_pane_t1

0x3f38,	// (0x00003f38) copy_highlight_title_pane_g1

0x3f40,	// (0x00003f40) copy_highlight_title_pane_t1

0x3f5e,	// (0x00003f5e) copy_highlight_digital_pane_g1

0x55b8,	// (0x000055b8) copy_highlight_digital_pane_t1

0x550c,	// (0x0000550c) graphic_text_primary_pane_g1

0x559c,	// (0x0000559c) graphic_text_primary_pane_t1

0x55aa,	// (0x000055aa) graphic_text_primary_pane_t2

0x0001,

0xb097,	// (0x0000b097) graphic_text_primary_pane_t

0x5578,	// (0x00005578) graphic_text_primary_small_pane_g1

0x5580,	// (0x00005580) graphic_text_primary_small_pane_t1

0x558e,	// (0x0000558e) graphic_text_primary_small_pane_t2

0x0001,

0xb092,	// (0x0000b092) graphic_text_primary_small_pane_t

0x5554,	// (0x00005554) graphic_text_secondary_pane_g1

0x555c,	// (0x0000555c) graphic_text_secondary_pane_t1

0x556a,	// (0x0000556a) graphic_text_secondary_pane_t2

0x0001,

0xb08d,	// (0x0000b08d) graphic_text_secondary_pane_t

0x5530,	// (0x00005530) graphic_text_title_pane_g1

0x5538,	// (0x00005538) graphic_text_title_pane_t1

0x5546,	// (0x00005546) graphic_text_title_pane_t2

0x0001,

0xb088,	// (0x0000b088) graphic_text_title_pane_t

0x550c,	// (0x0000550c) graphic_text_digital_pane_g1

0x5514,	// (0x00005514) graphic_text_digital_pane_t1

0x5522,	// (0x00005522) graphic_text_digital_pane_t2

0x0001,

0xb083,	// (0x0000b083) graphic_text_digital_pane_t

0x0507,	// (0x00000507) navi_icon_pane_srt_ParamLimits

0x0507,	// (0x00000507) navi_icon_pane_srt

0x0293,	// (0x00000293) navi_midp_pane_srt

0x0293,	// (0x00000293) navi_navi_pane_srt

0x0507,	// (0x00000507) navi_text_pane_srt_ParamLimits

0x0507,	// (0x00000507) navi_text_pane_srt

0x54d7,	// (0x000054d7) navi_navi_icon_text_pane_srt

0x54df,	// (0x000054df) navi_navi_pane_srt_g1_ParamLimits

0x54df,	// (0x000054df) navi_navi_pane_srt_g1

0x54f1,	// (0x000054f1) navi_navi_pane_srt_g2_ParamLimits

0x54f1,	// (0x000054f1) navi_navi_pane_srt_g2

0x0001,

0xb07e,	// (0x0000b07e) navi_navi_pane_srt_g_ParamLimits

0xb07e,	// (0x0000b07e) navi_navi_pane_srt_g

0x5503,	// (0x00005503) navi_navi_tabs_pane_srt

0x54d7,	// (0x000054d7) navi_navi_text_pane_srt

0x54d7,	// (0x000054d7) navi_navi_volume_pane_srt

0x54c8,	// (0x000054c8) navi_navi_text_pane_srt_t1

0x54a3,	// (0x000054a3) navi_navi_volume_pane_srt_g1

0x54ab,	// (0x000054ab) volume_small_pane_srt_ParamLimits

0x54ab,	// (0x000054ab) volume_small_pane_srt

0x27ef,	// (0x000027ef) volume_small_pane_srt_g1_ParamLimits

0x27ef,	// (0x000027ef) volume_small_pane_srt_g1

0x27ff,	// (0x000027ff) volume_small_pane_srt_g2_ParamLimits

0x27ff,	// (0x000027ff) volume_small_pane_srt_g2

0x2810,	// (0x00002810) volume_small_pane_srt_g3_ParamLimits

0x2810,	// (0x00002810) volume_small_pane_srt_g3

0x2821,	// (0x00002821) volume_small_pane_srt_g4_ParamLimits

0x2821,	// (0x00002821) volume_small_pane_srt_g4

0x2832,	// (0x00002832) volume_small_pane_srt_g5_ParamLimits

0x2832,	// (0x00002832) volume_small_pane_srt_g5

0x2843,	// (0x00002843) volume_small_pane_srt_g6_ParamLimits

0x2843,	// (0x00002843) volume_small_pane_srt_g6

0x2854,	// (0x00002854) volume_small_pane_srt_g7_ParamLimits

0x2854,	// (0x00002854) volume_small_pane_srt_g7

0x2865,	// (0x00002865) volume_small_pane_srt_g8_ParamLimits

0x2865,	// (0x00002865) volume_small_pane_srt_g8

0x2876,	// (0x00002876) volume_small_pane_srt_g9_ParamLimits

0x2876,	// (0x00002876) volume_small_pane_srt_g9

0x2887,	// (0x00002887) volume_small_pane_srt_g10_ParamLimits

0x2887,	// (0x00002887) volume_small_pane_srt_g10

0x0009,

0xae2d,	// (0x0000ae2d) volume_small_pane_srt_g_ParamLimits

0xae2d,	// (0x0000ae2d) volume_small_pane_srt_g

0x09b2,	// (0x000009b2) query_popup_data_pane_cp2

0x5491,	// (0x00005491) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x5491,	// (0x00005491) navi_navi_icon_text_pane_srt_t1

0x41d6,	// (0x000041d6) navi_tabs_2_long_pane_srt

0x41d6,	// (0x000041d6) navi_tabs_2_pane_srt

0x41d6,	// (0x000041d6) navi_tabs_3_long_pane_srt

0x41d6,	// (0x000041d6) navi_tabs_3_pane_srt

0x41d6,	// (0x000041d6) navi_tabs_4_pane_srt

0x5469,	// (0x00005469) tabs_2_active_pane_srt_ParamLimits

0x5469,	// (0x00005469) tabs_2_active_pane_srt

0x5479,	// (0x00005479) tabs_2_passive_pane_srt_ParamLimits

0x5479,	// (0x00005479) tabs_2_passive_pane_srt

0x38bf,	// (0x000038bf) bg_passive_tab_pane_cp1_srt_ParamLimits

0x38bf,	// (0x000038bf) bg_passive_tab_pane_cp1_srt

0x543d,	// (0x0000543d) bg_passive_tab_pane_g1_cp1_srt

0x213c,	// (0x0000213c) bg_passive_tab_pane_g2_cp1_srt

0x5446,	// (0x00005446) bg_passive_tab_pane_g3_cp1_srt

0x082d,	// (0x0000082d) bg_active_tab_pane_cp1_srt_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp1_srt

0x544f,	// (0x0000544f) tabs_2_active_pane_srt_g1

0xd5fd,	// (0x0000d5fd) tabs_2_active_pane_srt_t1_ParamLimits

0xd5fd,	// (0x0000d5fd) tabs_2_active_pane_srt_t1

0x543d,	// (0x0000543d) bg_active_tab_pane_g1_cp1_srt

0x213c,	// (0x0000213c) bg_active_tab_pane_g2_cp1_srt

0x5446,	// (0x00005446) bg_active_tab_pane_g3_cp1_srt

0x540a,	// (0x0000540a) tabs_3_active_pane_srt_ParamLimits

0x540a,	// (0x0000540a) tabs_3_active_pane_srt

0x541b,	// (0x0000541b) tabs_3_passive_pane_cp_srt_ParamLimits

0x541b,	// (0x0000541b) tabs_3_passive_pane_cp_srt

0x542c,	// (0x0000542c) tabs_3_passive_pane_srt_ParamLimits

0x542c,	// (0x0000542c) tabs_3_passive_pane_srt

0x38bf,	// (0x000038bf) bg_passive_tab_pane_cp2_srt_ParamLimits

0x38bf,	// (0x000038bf) bg_passive_tab_pane_cp2_srt

0x2898,	// (0x00002898) bg_passive_tab_pane_g1_cp2_srt

0x213c,	// (0x0000213c) bg_passive_tab_pane_g2_cp2_srt

0x28a1,	// (0x000028a1) bg_passive_tab_pane_g3_cp2_srt

0x082d,	// (0x0000082d) bg_active_tab_pane_cp2_srt_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp2_srt

0x53f0,	// (0x000053f0) tabs_3_active_pane_srt_g1

0xd5e7,	// (0x0000d5e7) tabs_3_active_pane_srt_t1_ParamLimits

0xd5e7,	// (0x0000d5e7) tabs_3_active_pane_srt_t1

0x2898,	// (0x00002898) bg_active_tab_pane_g1_cp2_srt

0x213c,	// (0x0000213c) bg_active_tab_pane_g2_cp2_srt

0x28a1,	// (0x000028a1) bg_active_tab_pane_g3_cp2_srt

0x53a8,	// (0x000053a8) tabs_4_active_pane_srt_ParamLimits

0x53a8,	// (0x000053a8) tabs_4_active_pane_srt

0x53ba,	// (0x000053ba) tabs_4_passive_pane_cp2_srt_ParamLimits

0x53ba,	// (0x000053ba) tabs_4_passive_pane_cp2_srt

0x2b46,	// (0x00002b46) aid_size_cell_toolbar

0x4f3a,	// (0x00004f3a) main_idle_act_pane_ParamLimits

0x2d67,	// (0x00002d67) popup_large_graphic_colour_window_ParamLimits

0xcc42,	// (0x0000cc42) popup_toolbar_window_ParamLimits

0xcc42,	// (0x0000cc42) popup_toolbar_window

0x5140,	// (0x00005140) list_single_graphic_2heading_pane_ParamLimits

0x5140,	// (0x00005140) list_single_graphic_2heading_pane

0x1a60,	// (0x00001a60) aid_size_cell_apps_grid_lsc_pane

0x1a72,	// (0x00001a72) aid_size_cell_apps_grid_prt_pane

0x2b86,	// (0x00002b86) bg_wml_button_pane_cp1_ParamLimits

0x2b86,	// (0x00002b86) bg_wml_button_pane_cp1

0xd19b,	// (0x0000d19b) form_midp_field_text_pane_t1_ParamLimits

0x38bf,	// (0x000038bf) input_focus_pane_cp050_ParamLimits

0x3bbd,	// (0x00003bbd) list_midp_form_text_pane_ParamLimits

0x3b63,	// (0x00003b63) input_focus_pane_cp051_ParamLimits

0x3b77,	// (0x00003b77) list_midp_choice_pane_ParamLimits

0xd139,	// (0x0000d139) list_single_2graphic_pane_cp3_ParamLimits

0xd139,	// (0x0000d139) list_single_2graphic_pane_cp3

0xd14c,	// (0x0000d14c) list_single_midp_graphic_pane_ParamLimits

0xd14c,	// (0x0000d14c) list_single_midp_graphic_pane

0x35a9,	// (0x000035a9) list_single_graphic_2heading_pane_g1_ParamLimits

0x35a9,	// (0x000035a9) list_single_graphic_2heading_pane_g1

0x2574,	// (0x00002574) list_single_graphic_2heading_pane_g4_ParamLimits

0x2574,	// (0x00002574) list_single_graphic_2heading_pane_g4

0x35b5,	// (0x000035b5) list_single_graphic_2heading_pane_g5_ParamLimits

0x35b5,	// (0x000035b5) list_single_graphic_2heading_pane_g5

0x0002,

0xae80,	// (0x0000ae80) list_single_graphic_2heading_pane_g_ParamLimits

0xae80,	// (0x0000ae80) list_single_graphic_2heading_pane_g

0x35c1,	// (0x000035c1) list_single_graphic_2heading_pane_t1_ParamLimits

0x35c1,	// (0x000035c1) list_single_graphic_2heading_pane_t1

0x35d5,	// (0x000035d5) list_single_graphic_2heading_pane_t2_ParamLimits

0x35d5,	// (0x000035d5) list_single_graphic_2heading_pane_t2

0x35f1,	// (0x000035f1) list_single_graphic_2heading_pane_t3_ParamLimits

0x35f1,	// (0x000035f1) list_single_graphic_2heading_pane_t3

0x0002,

0xae87,	// (0x0000ae87) list_single_graphic_2heading_pane_t_ParamLimits

0xae87,	// (0x0000ae87) list_single_graphic_2heading_pane_t

0x3609,	// (0x00003609) bg_popup_sub_pane_cp2

0x3633,	// (0x00003633) grid_toobar_pane

0x366f,	// (0x0000366f) cell_toolbar_pane_ParamLimits

0x366f,	// (0x0000366f) cell_toolbar_pane

0x36b5,	// (0x000036b5) cell_toolbar_pane_g1_ParamLimits

0x36b5,	// (0x000036b5) cell_toolbar_pane_g1

0x36c9,	// (0x000036c9) cell_toolbar_pane_g2_ParamLimits

0x36c9,	// (0x000036c9) cell_toolbar_pane_g2

0x0001,

0xae8e,	// (0x0000ae8e) cell_toolbar_pane_g_ParamLimits

0xae8e,	// (0x0000ae8e) cell_toolbar_pane_g

0x36eb,	// (0x000036eb) grid_highlight_pane_cp2_ParamLimits

0x36eb,	// (0x000036eb) grid_highlight_pane_cp2

0x3705,	// (0x00003705) toolbar_button_pane

0x3711,	// (0x00003711) toolbar_button_pane_g1

0x3719,	// (0x00003719) toolbar_button_pane_g2

0x3721,	// (0x00003721) toolbar_button_pane_g3

0x3729,	// (0x00003729) toolbar_button_pane_g4

0x3731,	// (0x00003731) toolbar_button_pane_g5

0x3739,	// (0x00003739) toolbar_button_pane_g6

0x3741,	// (0x00003741) toolbar_button_pane_g7

0x3749,	// (0x00003749) toolbar_button_pane_g8

0x3751,	// (0x00003751) toolbar_button_pane_g9

0x0009,

0xae93,	// (0x0000ae93) toolbar_button_pane_g

0x3761,	// (0x00003761) list_single_2graphic_pane_g1_cp3_ParamLimits

0x3761,	// (0x00003761) list_single_2graphic_pane_g1_cp3

0xd09b,	// (0x0000d09b) list_single_2graphic_pane_g2_cp3_ParamLimits

0xd09b,	// (0x0000d09b) list_single_2graphic_pane_g2_cp3

0x377e,	// (0x0000377e) list_single_2graphic_pane_g3_cp3

0x3786,	// (0x00003786) list_single_2graphic_pane_g4_cp3_ParamLimits

0x3786,	// (0x00003786) list_single_2graphic_pane_g4_cp3

0x3792,	// (0x00003792) list_single_2graphic_pane_t1_cp3_ParamLimits

0x3792,	// (0x00003792) list_single_2graphic_pane_t1_cp3

0x37d6,	// (0x000037d6) list_single_midp_graphic_pane_g2_ParamLimits

0x37d6,	// (0x000037d6) list_single_midp_graphic_pane_g2

0x2b4e,	// (0x00002b4e) aid_zoom_text_primary

0x2b56,	// (0x00002b56) aid_zoom_text_secondary

0xc3db,	// (0x0000c3db) status_small_pane_g7_ParamLimits

0xc3db,	// (0x0000c3db) status_small_pane_g7

0xc3fe,	// (0x0000c3fe) status_small_pane_t1_ParamLimits

0xb80c,	// (0x0000b80c) title_pane_g2

0x0003,

0xf2f8,	// (0x0000f2f8) title_pane_g

0xba84,	// (0x0000ba84) aid_size_cell_colour_1_pane_ParamLimits

0xba84,	// (0x0000ba84) aid_size_cell_colour_1_pane

0xba98,	// (0x0000ba98) aid_size_cell_colour_2_pane_ParamLimits

0xba98,	// (0x0000ba98) aid_size_cell_colour_2_pane

0xbaac,	// (0x0000baac) aid_size_cell_colour_3_pane_ParamLimits

0xbaac,	// (0x0000baac) aid_size_cell_colour_3_pane

0xbac0,	// (0x0000bac0) aid_size_cell_colour_4_pane_ParamLimits

0xbac0,	// (0x0000bac0) aid_size_cell_colour_4_pane

0x18dc,	// (0x000018dc) title_pane_stacon_g1_ParamLimits

0x18dc,	// (0x000018dc) title_pane_stacon_g1

0x3fbd,	// (0x00003fbd) popup_note_wait_window_g3_ParamLimits

0x3fbd,	// (0x00003fbd) popup_note_wait_window_g3

0x4033,	// (0x00004033) popup_note_wait_window_t5_ParamLimits

0x4033,	// (0x00004033) popup_note_wait_window_t5

0x0293,	// (0x00000293) main_feb_china_hwr_fs_writing_pane

0xc64a,	// (0x0000c64a) popup_feb_china_hwr_fs_window_ParamLimits

0xc64a,	// (0x0000c64a) popup_feb_china_hwr_fs_window

0xd0ac,	// (0x0000d0ac) aid_size_cell_hwr_fs_ParamLimits

0xd0ac,	// (0x0000d0ac) aid_size_cell_hwr_fs

0x38bf,	// (0x000038bf) bg_popup_sub_pane_cp3_ParamLimits

0x38bf,	// (0x000038bf) bg_popup_sub_pane_cp3

0xd0c1,	// (0x0000d0c1) grid_hwr_fs_pane_ParamLimits

0xd0c1,	// (0x0000d0c1) grid_hwr_fs_pane

0x38e3,	// (0x000038e3) linegrid_hwr_fs_pane_ParamLimits

0x38e3,	// (0x000038e3) linegrid_hwr_fs_pane

0xd0d9,	// (0x0000d0d9) cell_hwr_fs_pane_ParamLimits

0xd0d9,	// (0x0000d0d9) cell_hwr_fs_pane

0x3915,	// (0x00003915) linegrid_hwr_fs_pane_g1_ParamLimits

0x3915,	// (0x00003915) linegrid_hwr_fs_pane_g1

0xd0ff,	// (0x0000d0ff) linegrid_hwr_fs_pane_g2_ParamLimits

0xd0ff,	// (0x0000d0ff) linegrid_hwr_fs_pane_g2

0x3933,	// (0x00003933) linegrid_hwr_fs_pane_g3_ParamLimits

0x3933,	// (0x00003933) linegrid_hwr_fs_pane_g3

0x393f,	// (0x0000393f) linegrid_hwr_fs_pane_g4_ParamLimits

0x393f,	// (0x0000393f) linegrid_hwr_fs_pane_g4

0x3959,	// (0x00003959) linegrid_hwr_fs_pane_g5_ParamLimits

0x3959,	// (0x00003959) linegrid_hwr_fs_pane_g5

0x0004,

0xf42d,	// (0x0000f42d) linegrid_hwr_fs_pane_g_ParamLimits

0xf42d,	// (0x0000f42d) linegrid_hwr_fs_pane_g

0x396f,	// (0x0000396f) cell_hwr_fs_pane_g1_ParamLimits

0x396f,	// (0x0000396f) cell_hwr_fs_pane_g1

0x34e0,	// (0x000034e0) cell_hwr_fs_pane_g2_ParamLimits

0x34e0,	// (0x000034e0) cell_hwr_fs_pane_g2

0xd111,	// (0x0000d111) cell_hwr_fs_pane_g3_ParamLimits

0xd111,	// (0x0000d111) cell_hwr_fs_pane_g3

0xd11e,	// (0x0000d11e) cell_hwr_fs_pane_g4_ParamLimits

0xd11e,	// (0x0000d11e) cell_hwr_fs_pane_g4

0x0003,

0xf438,	// (0x0000f438) cell_hwr_fs_pane_g_ParamLimits

0xf438,	// (0x0000f438) cell_hwr_fs_pane_g

0xd12b,	// (0x0000d12b) cell_hwr_fs_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp6

0x0293,	// (0x00000293) main_idle_act2_pane

0x168d,	// (0x0000168d) aid_inside_area_popup_secondary

0xd20c,	// (0x0000d20c) aid_inside_area_window_primary_ParamLimits

0xd20c,	// (0x0000d20c) aid_inside_area_window_primary

0x55c7,	// (0x000055c7) ai2_news_ticker_pane

0x55cf,	// (0x000055cf) aid_size_cell_ai1_link_ParamLimits

0x55cf,	// (0x000055cf) aid_size_cell_ai1_link

0xd613,	// (0x0000d613) popup_ai2_data_window_ParamLimits

0xd613,	// (0x0000d613) popup_ai2_data_window

0x55ff,	// (0x000055ff) popup_ai2_link_window_ParamLimits

0x55ff,	// (0x000055ff) popup_ai2_link_window

0x38bf,	// (0x000038bf) bg_popup_sub_pane_cp4_ParamLimits

0x38bf,	// (0x000038bf) bg_popup_sub_pane_cp4

0x5613,	// (0x00005613) grid_ai2_link_pane_ParamLimits

0x5613,	// (0x00005613) grid_ai2_link_pane

0x562a,	// (0x0000562a) popup_ai2_link_window_g1_ParamLimits

0x562a,	// (0x0000562a) popup_ai2_link_window_g1

0x5636,	// (0x00005636) popup_ai2_link_window_g2_ParamLimits

0x5636,	// (0x00005636) popup_ai2_link_window_g2

0x0001,

0xb09c,	// (0x0000b09c) popup_ai2_link_window_g_ParamLimits

0xb09c,	// (0x0000b09c) popup_ai2_link_window_g

0x5645,	// (0x00005645) ai2_mp_button_pane

0x564d,	// (0x0000564d) ai2_mp_volume_pane

0x3b63,	// (0x00003b63) bg_popup_sub_pane_cp5_ParamLimits

0x3b63,	// (0x00003b63) bg_popup_sub_pane_cp5

0x5655,	// (0x00005655) heading_ai2_gene_pane_ParamLimits

0x5655,	// (0x00005655) heading_ai2_gene_pane

0x5661,	// (0x00005661) list_ai2_gene_pane_ParamLimits

0x5661,	// (0x00005661) list_ai2_gene_pane

0x56a9,	// (0x000056a9) cell_ai2_link_pane_ParamLimits

0x56a9,	// (0x000056a9) cell_ai2_link_pane

0x56bf,	// (0x000056bf) cell_ai2_link_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp7

0x578f,	// (0x0000578f) ai2_mp_volume_pane_g1

0x5797,	// (0x00005797) ai2_mp_volume_pane_g2

0xd63d,	// (0x0000d63d) list_ai2_gene_pane_t1

0x579f,	// (0x0000579f) ai2_mp_volume_pane_g3

0x0002,

0xb0b5,	// (0x0000b0b5) ai2_mp_volume_pane_g

0x57a7,	// (0x000057a7) volume_small_pane_cp3

0x57b0,	// (0x000057b0) aid_size_cell_ai2_button

0x57b8,	// (0x000057b8) grid_ai2_button_pane

0x57c1,	// (0x000057c1) cell_ai2_button_pane_ParamLimits

0x57c1,	// (0x000057c1) cell_ai2_button_pane

0x002e,	// (0x0000002e) cell_ai2_button_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp8

0x574f,	// (0x0000574f) ai2_gene_pane_t1_ParamLimits

0x574f,	// (0x0000574f) ai2_gene_pane_t1

0xc5cc,	// (0x0000c5cc) aid_height_parent_landscape

0xd365,	// (0x0000d365) aid_height_set_list

0x4f3a,	// (0x00004f3a) aid_size_parent

0xd5bb,	// (0x0000d5bb) aid_size_cell_graphic_pane_ParamLimits

0x5671,	// (0x00005671) popup_ai2_data_window_g1_ParamLimits

0x5671,	// (0x00005671) popup_ai2_data_window_g1

0x567d,	// (0x0000567d) ai2_news_ticker_pane_g1

0x5685,	// (0x00005685) ai2_news_ticker_pane_g2

0x0001,

0xb0a1,	// (0x0000b0a1) ai2_news_ticker_pane_g

0x568d,	// (0x0000568d) ai2_news_ticker_pane_t1

0x569b,	// (0x0000569b) ai2_news_ticker_pane_t2

0x0001,

0xb0a6,	// (0x0000b0a6) ai2_news_ticker_pane_t

0x56c8,	// (0x000056c8) heading_ai2_gene_pane_g1

0x56d0,	// (0x000056d0) heading_ai2_gene_pane_t1_ParamLimits

0x56d0,	// (0x000056d0) heading_ai2_gene_pane_t1

0x56e5,	// (0x000056e5) list_highlight_pane_cp6

0xd627,	// (0x0000d627) ai2_gene_pane_ParamLimits

0xd627,	// (0x0000d627) ai2_gene_pane

0xd64b,	// (0x0000d64b) list_ai2_gene_pane_t2

0x0001,

0xf499,	// (0x0000f499) list_ai2_gene_pane_t

0x5720,	// (0x00005720) list_highlight_pane_cp8_ParamLimits

0x5720,	// (0x00005720) list_highlight_pane_cp8

0x5731,	// (0x00005731) ai2_gene_pane_g1_ParamLimits

0x5731,	// (0x00005731) ai2_gene_pane_g1

0x5743,	// (0x00005743) ai2_gene_pane_g2_ParamLimits

0x5743,	// (0x00005743) ai2_gene_pane_g2

0x0001,

0xb0b0,	// (0x0000b0b0) ai2_gene_pane_g_ParamLimits

0xb0b0,	// (0x0000b0b0) ai2_gene_pane_g

0x0ddd,	// (0x00000ddd) scroll_pane_cp12

0xc589,	// (0x0000c589) control_pane_t3_ParamLimits

0xc589,	// (0x0000c589) control_pane_t3

0xc3ef,	// (0x0000c3ef) status_small_pane_g8_ParamLimits

0xc3ef,	// (0x0000c3ef) status_small_pane_g8

0xc6df,	// (0x0000c6df) popup_find_window_ParamLimits

0xc96c,	// (0x0000c96c) popup_note_image_window_ParamLimits

0x35a9,	// (0x000035a9) list_double2_graphic_pane_vc_g1_ParamLimits

0x35a9,	// (0x000035a9) list_double2_graphic_pane_vc_g1

0x2574,	// (0x00002574) list_double2_graphic_pane_vc_g2_ParamLimits

0x2574,	// (0x00002574) list_double2_graphic_pane_vc_g2

0x35b5,	// (0x000035b5) list_double2_graphic_pane_vc_g3_ParamLimits

0x35b5,	// (0x000035b5) list_double2_graphic_pane_vc_g3

0x0002,

0xae80,	// (0x0000ae80) list_double2_graphic_pane_vc_g_ParamLimits

0xae80,	// (0x0000ae80) list_double2_graphic_pane_vc_g

0x369f,	// (0x0000369f) list_double2_graphic_pane_vc_t1_ParamLimits

0x369f,	// (0x0000369f) list_double2_graphic_pane_vc_t1

0x2574,	// (0x00002574) list_single_heading_pane_vc_g1_ParamLimits

0x2574,	// (0x00002574) list_single_heading_pane_vc_g1

0x35b5,	// (0x000035b5) list_single_heading_pane_vc_g2_ParamLimits

0x35b5,	// (0x000035b5) list_single_heading_pane_vc_g2

0x0001,

0xaea8,	// (0x0000aea8) list_single_heading_pane_vc_g_ParamLimits

0xaea8,	// (0x0000aea8) list_single_heading_pane_vc_g

0x37ae,	// (0x000037ae) list_single_heading_pane_vc_t1_ParamLimits

0x37ae,	// (0x000037ae) list_single_heading_pane_vc_t1

0x37c4,	// (0x000037c4) list_single_heading_pane_vc_t2_ParamLimits

0x37c4,	// (0x000037c4) list_single_heading_pane_vc_t2

0x0001,

0xaead,	// (0x0000aead) list_single_heading_pane_vc_t_ParamLimits

0xaead,	// (0x0000aead) list_single_heading_pane_vc_t

0x37f8,	// (0x000037f8) list_setting_number_pane_vc_g1_ParamLimits

0x37f8,	// (0x000037f8) list_setting_number_pane_vc_g1

0x3804,	// (0x00003804) list_setting_number_pane_vc_g2_ParamLimits

0x3804,	// (0x00003804) list_setting_number_pane_vc_g2

0x0001,

0xaeb2,	// (0x0000aeb2) list_setting_number_pane_vc_g_ParamLimits

0xaeb2,	// (0x0000aeb2) list_setting_number_pane_vc_g

0x3810,	// (0x00003810) list_setting_number_pane_vc_t1_ParamLimits

0x3810,	// (0x00003810) list_setting_number_pane_vc_t1

0x3824,	// (0x00003824) list_setting_number_pane_vc_t2_ParamLimits

0x3824,	// (0x00003824) list_setting_number_pane_vc_t2

0x3840,	// (0x00003840) list_setting_number_pane_vc_t3_ParamLimits

0x3840,	// (0x00003840) list_setting_number_pane_vc_t3

0x0002,

0xaeb7,	// (0x0000aeb7) list_setting_number_pane_vc_t_ParamLimits

0xaeb7,	// (0x0000aeb7) list_setting_number_pane_vc_t

0x386e,	// (0x0000386e) set_value_pane_vc_ParamLimits

0x386e,	// (0x0000386e) set_value_pane_vc

0x5140,	// (0x00005140) list_double2_graphic_pane_vc_ParamLimits

0x5140,	// (0x00005140) list_double2_graphic_pane_vc

0x5140,	// (0x00005140) list_double2_large_graphic_pane_vc_ParamLimits

0x5140,	// (0x00005140) list_double2_large_graphic_pane_vc

0x5140,	// (0x00005140) list_double2_pane_vc_ParamLimits

0x5140,	// (0x00005140) list_double2_pane_vc

0x5140,	// (0x00005140) list_double_graphic_heading_pane_vc_ParamLimits

0x5140,	// (0x00005140) list_double_graphic_heading_pane_vc

0x5140,	// (0x00005140) list_double_graphic_pane_vc_ParamLimits

0x5140,	// (0x00005140) list_double_graphic_pane_vc

0x5140,	// (0x00005140) list_double_heading_pane_vc_ParamLimits

0x5140,	// (0x00005140) list_double_heading_pane_vc

0x5152,	// (0x00005152) list_double_large_graphic_pane_vc_ParamLimits

0x5152,	// (0x00005152) list_double_large_graphic_pane_vc

0x5140,	// (0x00005140) list_double_number_pane_vc_ParamLimits

0x5140,	// (0x00005140) list_double_number_pane_vc

0x5140,	// (0x00005140) list_double_pane_vc_ParamLimits

0x5140,	// (0x00005140) list_double_pane_vc

0x5140,	// (0x00005140) list_double_time_pane_vc_ParamLimits

0x5140,	// (0x00005140) list_double_time_pane_vc

0x5140,	// (0x00005140) list_setting_number_pane_vc_ParamLimits

0x5140,	// (0x00005140) list_setting_number_pane_vc

0x5140,	// (0x00005140) list_setting_pane_vc_ParamLimits

0x5140,	// (0x00005140) list_setting_pane_vc

0x5140,	// (0x00005140) list_single_graphic_heading_pane_vc_ParamLimits

0x5140,	// (0x00005140) list_single_graphic_heading_pane_vc

0x5140,	// (0x00005140) list_single_heading_pane_vc_ParamLimits

0x5140,	// (0x00005140) list_single_heading_pane_vc

0x5140,	// (0x00005140) list_single_number_heading_pane_vc_ParamLimits

0x5140,	// (0x00005140) list_single_number_heading_pane_vc

0x35a9,	// (0x000035a9) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x35a9,	// (0x000035a9) list_double_graphic_heading_pane_vc_g1

0x57f5,	// (0x000057f5) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x57f5,	// (0x000057f5) list_double_graphic_heading_pane_vc_g2

0x5801,	// (0x00005801) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5801,	// (0x00005801) list_double_graphic_heading_pane_vc_g3

0x0002,

0xb0bc,	// (0x0000b0bc) list_double_graphic_heading_pane_vc_g_ParamLimits

0xb0bc,	// (0x0000b0bc) list_double_graphic_heading_pane_vc_g

0x580d,	// (0x0000580d) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x580d,	// (0x0000580d) list_double_graphic_heading_pane_vc_t1

0x5829,	// (0x00005829) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5829,	// (0x00005829) list_double_graphic_heading_pane_vc_t2

0x0001,

0xb0c3,	// (0x0000b0c3) list_double_graphic_heading_pane_vc_t_ParamLimits

0xb0c3,	// (0x0000b0c3) list_double_graphic_heading_pane_vc_t

0x37f8,	// (0x000037f8) list_setting_pane_vc_g1_ParamLimits

0x37f8,	// (0x000037f8) list_setting_pane_vc_g1

0x3804,	// (0x00003804) list_setting_pane_vc_g2_ParamLimits

0x3804,	// (0x00003804) list_setting_pane_vc_g2

0x0001,

0xaeb2,	// (0x0000aeb2) list_setting_pane_vc_g_ParamLimits

0xaeb2,	// (0x0000aeb2) list_setting_pane_vc_g

0x5a54,	// (0x00005a54) list_setting_pane_vc_t1_ParamLimits

0x5a54,	// (0x00005a54) list_setting_pane_vc_t1

0x5a70,	// (0x00005a70) list_setting_pane_vc_t2_ParamLimits

0x5a70,	// (0x00005a70) list_setting_pane_vc_t2

0x0001,

0xb0f1,	// (0x0000b0f1) list_setting_pane_vc_t_ParamLimits

0xb0f1,	// (0x0000b0f1) list_setting_pane_vc_t

0x386e,	// (0x0000386e) set_value_pane_cp_vc_ParamLimits

0x386e,	// (0x0000386e) set_value_pane_cp_vc

0x2574,	// (0x00002574) list_single_number_heading_pane_vc_g1_ParamLimits

0x2574,	// (0x00002574) list_single_number_heading_pane_vc_g1

0x35b5,	// (0x000035b5) list_single_number_heading_pane_vc_g2_ParamLimits

0x35b5,	// (0x000035b5) list_single_number_heading_pane_vc_g2

0x0001,

0xaea8,	// (0x0000aea8) list_single_number_heading_pane_vc_g_ParamLimits

0xaea8,	// (0x0000aea8) list_single_number_heading_pane_vc_g

0x5a8c,	// (0x00005a8c) list_single_number_heading_pane_vc_t1_ParamLimits

0x5a8c,	// (0x00005a8c) list_single_number_heading_pane_vc_t1

0x5aa2,	// (0x00005aa2) list_single_number_heading_pane_vc_t2_ParamLimits

0x5aa2,	// (0x00005aa2) list_single_number_heading_pane_vc_t2

0x5ab4,	// (0x00005ab4) list_single_number_heading_pane_vc_t3_ParamLimits

0x5ab4,	// (0x00005ab4) list_single_number_heading_pane_vc_t3

0x0002,

0xb0f6,	// (0x0000b0f6) list_single_number_heading_pane_vc_t_ParamLimits

0xb0f6,	// (0x0000b0f6) list_single_number_heading_pane_vc_t

0x35a9,	// (0x000035a9) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x35a9,	// (0x000035a9) list_single_graphic_heading_pane_vc_g1

0x2574,	// (0x00002574) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2574,	// (0x00002574) list_single_graphic_heading_pane_vc_g4

0x35b5,	// (0x000035b5) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x35b5,	// (0x000035b5) list_single_graphic_heading_pane_vc_g5

0x0002,

0xae80,	// (0x0000ae80) list_single_graphic_heading_pane_vc_g_ParamLimits

0xae80,	// (0x0000ae80) list_single_graphic_heading_pane_vc_g

0x5ac6,	// (0x00005ac6) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5ac6,	// (0x00005ac6) list_single_graphic_heading_pane_vc_t1

0x5adc,	// (0x00005adc) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5adc,	// (0x00005adc) list_single_graphic_heading_pane_vc_t2

0x0001,

0xb0fd,	// (0x0000b0fd) list_single_graphic_heading_pane_vc_t_ParamLimits

0xb0fd,	// (0x0000b0fd) list_single_graphic_heading_pane_vc_t

0x2574,	// (0x00002574) list_double2_pane_vc_g1_ParamLimits

0x2574,	// (0x00002574) list_double2_pane_vc_g1

0x35b5,	// (0x000035b5) list_double2_pane_vc_g2_ParamLimits

0x35b5,	// (0x000035b5) list_double2_pane_vc_g2

0x0001,

0xaea8,	// (0x0000aea8) list_double2_pane_vc_g_ParamLimits

0xaea8,	// (0x0000aea8) list_double2_pane_vc_g

0x5aee,	// (0x00005aee) list_double2_pane_vc_t1_ParamLimits

0x5aee,	// (0x00005aee) list_double2_pane_vc_t1

0x5b04,	// (0x00005b04) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5b04,	// (0x00005b04) list_double2_large_graphic_pane_vc_g1

0x2574,	// (0x00002574) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2574,	// (0x00002574) list_double2_large_graphic_pane_vc_g2

0x35b5,	// (0x000035b5) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x35b5,	// (0x000035b5) list_double2_large_graphic_pane_vc_g3

0x0002,

0xb102,	// (0x0000b102) list_double2_large_graphic_pane_vc_g_ParamLimits

0xb102,	// (0x0000b102) list_double2_large_graphic_pane_vc_g

0x5b10,	// (0x00005b10) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5b10,	// (0x00005b10) list_double2_large_graphic_pane_vc_t1

0x5b26,	// (0x00005b26) list_double_time_pane_vc_g1_ParamLimits

0x5b26,	// (0x00005b26) list_double_time_pane_vc_g1

0x5b32,	// (0x00005b32) list_double_time_pane_vc_g2_ParamLimits

0x5b32,	// (0x00005b32) list_double_time_pane_vc_g2

0x0001,

0xb109,	// (0x0000b109) list_double_time_pane_vc_g_ParamLimits

0xb109,	// (0x0000b109) list_double_time_pane_vc_g

0x5b3e,	// (0x00005b3e) list_double_time_pane_vc_t1_ParamLimits

0x5b3e,	// (0x00005b3e) list_double_time_pane_vc_t1

0x5b62,	// (0x00005b62) list_double_time_pane_vc_t2_ParamLimits

0x5b62,	// (0x00005b62) list_double_time_pane_vc_t2

0x5b91,	// (0x00005b91) list_double_time_pane_vc_t3_ParamLimits

0x5b91,	// (0x00005b91) list_double_time_pane_vc_t3

0x5ba3,	// (0x00005ba3) list_double_time_pane_vc_t4_ParamLimits

0x5ba3,	// (0x00005ba3) list_double_time_pane_vc_t4

0x0003,

0xb10e,	// (0x0000b10e) list_double_time_pane_vc_t_ParamLimits

0xb10e,	// (0x0000b10e) list_double_time_pane_vc_t

0x2574,	// (0x00002574) list_double_pane_vc_g1_ParamLimits

0x2574,	// (0x00002574) list_double_pane_vc_g1

0x35b5,	// (0x000035b5) list_double_pane_vc_g2_ParamLimits

0x35b5,	// (0x000035b5) list_double_pane_vc_g2

0x0001,

0xaea8,	// (0x0000aea8) list_double_pane_vc_g_ParamLimits

0xaea8,	// (0x0000aea8) list_double_pane_vc_g

0x5bb7,	// (0x00005bb7) list_double_pane_vc_t1_ParamLimits

0x5bb7,	// (0x00005bb7) list_double_pane_vc_t1

0x5bcb,	// (0x00005bcb) list_double_pane_vc_t2_ParamLimits

0x5bcb,	// (0x00005bcb) list_double_pane_vc_t2

0x0001,

0xb117,	// (0x0000b117) list_double_pane_vc_t_ParamLimits

0xb117,	// (0x0000b117) list_double_pane_vc_t

0x2574,	// (0x00002574) list_double_number_pane_vc_g1_ParamLimits

0x2574,	// (0x00002574) list_double_number_pane_vc_g1

0x35b5,	// (0x000035b5) list_double_number_pane_vc_g2_ParamLimits

0x35b5,	// (0x000035b5) list_double_number_pane_vc_g2

0x0001,

0xaea8,	// (0x0000aea8) list_double_number_pane_vc_g_ParamLimits

0xaea8,	// (0x0000aea8) list_double_number_pane_vc_g

0x5be3,	// (0x00005be3) list_double_number_pane_vc_t1_ParamLimits

0x5be3,	// (0x00005be3) list_double_number_pane_vc_t1

0x5bf5,	// (0x00005bf5) list_double_number_pane_vc_t2_ParamLimits

0x5bf5,	// (0x00005bf5) list_double_number_pane_vc_t2

0x5c09,	// (0x00005c09) list_double_number_pane_vc_t3_ParamLimits

0x5c09,	// (0x00005c09) list_double_number_pane_vc_t3

0x0002,

0xb11c,	// (0x0000b11c) list_double_number_pane_vc_t_ParamLimits

0xb11c,	// (0x0000b11c) list_double_number_pane_vc_t

0x5c21,	// (0x00005c21) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5c21,	// (0x00005c21) list_double_large_graphic_pane_vc_g1

0x5c43,	// (0x00005c43) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5c43,	// (0x00005c43) list_double_large_graphic_pane_vc_g2

0x5c57,	// (0x00005c57) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5c57,	// (0x00005c57) list_double_large_graphic_pane_vc_g3

0x5c66,	// (0x00005c66) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5c66,	// (0x00005c66) list_double_large_graphic_pane_vc_g4

0x0003,

0xb123,	// (0x0000b123) list_double_large_graphic_pane_vc_g_ParamLimits

0xb123,	// (0x0000b123) list_double_large_graphic_pane_vc_g

0x5c72,	// (0x00005c72) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5c72,	// (0x00005c72) list_double_large_graphic_pane_vc_t1

0x5c8e,	// (0x00005c8e) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5c8e,	// (0x00005c8e) list_double_large_graphic_pane_vc_t2

0x0001,

0xb12c,	// (0x0000b12c) list_double_large_graphic_pane_vc_t_ParamLimits

0xb12c,	// (0x0000b12c) list_double_large_graphic_pane_vc_t

0x57f5,	// (0x000057f5) list_double_heading_pane_vc_g1_ParamLimits

0x57f5,	// (0x000057f5) list_double_heading_pane_vc_g1

0x5801,	// (0x00005801) list_double_heading_pane_vc_g2_ParamLimits

0x5801,	// (0x00005801) list_double_heading_pane_vc_g2

0x0001,

0xb131,	// (0x0000b131) list_double_heading_pane_vc_g_ParamLimits

0xb131,	// (0x0000b131) list_double_heading_pane_vc_g

0x5cb0,	// (0x00005cb0) list_double_heading_pane_vc_t1_ParamLimits

0x5cb0,	// (0x00005cb0) list_double_heading_pane_vc_t1

0x5cc4,	// (0x00005cc4) list_double_heading_pane_vc_t2_ParamLimits

0x5cc4,	// (0x00005cc4) list_double_heading_pane_vc_t2

0x0001,

0xb136,	// (0x0000b136) list_double_heading_pane_vc_t_ParamLimits

0xb136,	// (0x0000b136) list_double_heading_pane_vc_t

0x5cdc,	// (0x00005cdc) list_double_graphic_pane_vc_g1_ParamLimits

0x5cdc,	// (0x00005cdc) list_double_graphic_pane_vc_g1

0x5ce8,	// (0x00005ce8) list_double_graphic_pane_vc_g2_ParamLimits

0x5ce8,	// (0x00005ce8) list_double_graphic_pane_vc_g2

0x2574,	// (0x00002574) list_double_graphic_pane_vc_g3_ParamLimits

0x2574,	// (0x00002574) list_double_graphic_pane_vc_g3

0x0003,

0xb13b,	// (0x0000b13b) list_double_graphic_pane_vc_g_ParamLimits

0xb13b,	// (0x0000b13b) list_double_graphic_pane_vc_g

0x5d05,	// (0x00005d05) list_double_graphic_pane_vc_t1_ParamLimits

0x5d05,	// (0x00005d05) list_double_graphic_pane_vc_t1

0x5d2f,	// (0x00005d2f) list_double_graphic_pane_vc_t2_ParamLimits

0x5d2f,	// (0x00005d2f) list_double_graphic_pane_vc_t2

0x0001,

0xb144,	// (0x0000b144) list_double_graphic_pane_vc_t_ParamLimits

0xb144,	// (0x0000b144) list_double_graphic_pane_vc_t

0x0050,	// (0x00000050) aid_size_cell_fastswap

0xb5f3,	// (0x0000b5f3) aid_size_cell_touch_ParamLimits

0xb5f3,	// (0x0000b5f3) aid_size_cell_touch

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window_ParamLimits

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window

0xb7a3,	// (0x0000b7a3) touch_pane_ParamLimits

0xb7a3,	// (0x0000b7a3) touch_pane

0x12dc,	// (0x000012dc) button_value_adjust_pane_cp2

0x12e4,	// (0x000012e4) button_value_adjust_pane_cp4

0x1306,	// (0x00001306) form_field_data_pane_cp2

0xbf1b,	// (0x0000bf1b) form_field_data_wide_pane_cp2

0x1b42,	// (0x00001b42) bg_scroll_pane_ParamLimits

0x1b61,	// (0x00001b61) scroll_handle_pane_ParamLimits

0x1b75,	// (0x00001b75) scroll_sc2_down_pane_ParamLimits

0x1b75,	// (0x00001b75) scroll_sc2_down_pane

0x1b9c,	// (0x00001b9c) scroll_sc2_up_pane_ParamLimits

0x1b9c,	// (0x00001b9c) scroll_sc2_up_pane

0xd76b,	// (0x0000d76b) grid_wheel_folder_pane_g1_ParamLimits

0xd76b,	// (0x0000d76b) grid_wheel_folder_pane_g1

0x2283,	// (0x00002283) clock_nsta_pane_cp2_ParamLimits

0x2283,	// (0x00002283) clock_nsta_pane_cp2

0xc2de,	// (0x0000c2de) listscroll_midp_pane_ParamLimits

0xc2ea,	// (0x0000c2ea) midp_canvas_pane

0x2b34,	// (0x00002b34) nsta_clock_indic_pane

0x2b92,	// (0x00002b92) listscroll_form_pane_vc

0x2bb6,	// (0x00002bb6) listscroll_set_pane_vc_ParamLimits

0x2bb6,	// (0x00002bb6) listscroll_set_pane_vc

0xcda6,	// (0x0000cda6) clock_nsta_pane

0xcdd0,	// (0x0000cdd0) indicator_nsta_pane

0x3609,	// (0x00003609) bg_popup_sub_pane_cp2_ParamLimits

0x361d,	// (0x0000361d) find_pane_cp2_ParamLimits

0x361d,	// (0x0000361d) find_pane_cp2

0x3633,	// (0x00003633) grid_toobar_pane_ParamLimits

0x387e,	// (0x0000387e) list_form_gen_pane_vc_ParamLimits

0x387e,	// (0x0000387e) list_form_gen_pane_vc

0x3894,	// (0x00003894) scroll_pane_cp8_vc_ParamLimits

0x3894,	// (0x00003894) scroll_pane_cp8_vc

0x39ad,	// (0x000039ad) data_form_wide_pane_vc_ParamLimits

0x39ad,	// (0x000039ad) data_form_wide_pane_vc

0x39b9,	// (0x000039b9) form_field_data_wide_pane_vc_g1

0x39c1,	// (0x000039c1) form_field_data_wide_pane_vc_t1_ParamLimits

0x39c1,	// (0x000039c1) form_field_data_wide_pane_vc_t1

0x13c2,	// (0x000013c2) input_focus_pane_cp6_vc_ParamLimits

0x13c2,	// (0x000013c2) input_focus_pane_cp6_vc

0x3d44,	// (0x00003d44) list_midp_pane_ParamLimits

0x539c,	// (0x0000539c) scroll_pane_cp16_ParamLimits

0x539c,	// (0x0000539c) scroll_pane_cp16

0x3d92,	// (0x00003d92) button_value_adjust_pane_ParamLimits

0x3d92,	// (0x00003d92) button_value_adjust_pane

0xd376,	// (0x0000d376) button_value_adjust_pane_cp6_ParamLimits

0xd376,	// (0x0000d376) button_value_adjust_pane_cp6

0xd490,	// (0x0000d490) settings_code_pane_cp_ParamLimits

0xd490,	// (0x0000d490) settings_code_pane_cp

0x002e,	// (0x0000002e) cell_touch_pane_g1

0x002e,	// (0x0000002e) cell_touch_pane_g2

0x0001,

0xadd3,	// (0x0000add3) cell_touch_pane_g

0xd659,	// (0x0000d659) cell_touch_pane_cp_ParamLimits

0xd659,	// (0x0000d659) cell_touch_pane_cp

0xd675,	// (0x0000d675) cell_touch_pane_ParamLimits

0xd675,	// (0x0000d675) cell_touch_pane

0x002e,	// (0x0000002e) scroll_sc2_down_pane_g1

0x002e,	// (0x0000002e) scroll_sc2_up_pane_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_vc

0x5847,	// (0x00005847) list_set_graphic_pane_vc_g1_ParamLimits

0x5847,	// (0x00005847) list_set_graphic_pane_vc_g1

0x5853,	// (0x00005853) list_set_graphic_pane_vc_g2_ParamLimits

0x5853,	// (0x00005853) list_set_graphic_pane_vc_g2

0x0001,

0xb0c8,	// (0x0000b0c8) list_set_graphic_pane_vc_g_ParamLimits

0xb0c8,	// (0x0000b0c8) list_set_graphic_pane_vc_g

0x585f,	// (0x0000585f) text_primary_small_cp13_vc_ParamLimits

0x585f,	// (0x0000585f) text_primary_small_cp13_vc

0x5877,	// (0x00005877) list_set_graphic_pane_vc_ParamLimits

0x5877,	// (0x00005877) list_set_graphic_pane_vc

0x0293,	// (0x00000293) input_focus_pane_cp2_vc

0x002e,	// (0x0000002e) setting_code_pane_vc_g1

0x05e3,	// (0x000005e3) setting_code_pane_vc_t1

0x5889,	// (0x00005889) set_text_pane_vc_t1_ParamLimits

0x5889,	// (0x00005889) set_text_pane_vc_t1

0x0293,	// (0x00000293) input_focus_pane_cp1_vc

0x58a5,	// (0x000058a5) list_set_text_pane_vc

0x002e,	// (0x0000002e) setting_text_pane_vc_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_vc

0x05b2,	// (0x000005b2) setting_slider_graphic_pane_vc_g1

0x58af,	// (0x000058af) setting_slider_graphic_pane_vc_t1

0x58bf,	// (0x000058bf) setting_slider_graphic_pane_vc_t2

0x0001,

0xb0cd,	// (0x0000b0cd) setting_slider_graphic_pane_vc_t

0x58cf,	// (0x000058cf) slider_set_pane_cp_vc

0x58d7,	// (0x000058d7) slider_set_pane_vc_g1

0x58e0,	// (0x000058e0) slider_set_pane_vc_g2

0x0006,

0xb0d2,	// (0x0000b0d2) slider_set_pane_vc_g

0x14e5,	// (0x000014e5) set_opt_bg_pane_g1_copy1

0x14ed,	// (0x000014ed) set_opt_bg_pane_g2_copy1

0x590c,	// (0x0000590c) set_opt_bg_pane_g3_copy1

0x14fd,	// (0x000014fd) set_opt_bg_pane_g4_copy1

0x1505,	// (0x00001505) set_opt_bg_pane_g5_copy1

0x150d,	// (0x0000150d) set_opt_bg_pane_g6_copy1

0x5916,	// (0x00005916) set_opt_bg_pane_g7_copy1

0x591e,	// (0x0000591e) set_opt_bg_pane_g8_copy1

0x5928,	// (0x00005928) set_opt_bg_pane_g9_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp_vc

0x5932,	// (0x00005932) setting_slider_pane_vc_t1

0x5941,	// (0x00005941) setting_slider_pane_vc_t2

0x5951,	// (0x00005951) setting_slider_pane_vc_t3

0x0002,

0xb0e1,	// (0x0000b0e1) setting_slider_pane_vc_t

0x5961,	// (0x00005961) slider_set_pane_vc

0x45d3,	// (0x000045d3) volume_set_pane_vc_g1

0x45dc,	// (0x000045dc) volume_set_pane_vc_g2

0x45e5,	// (0x000045e5) volume_set_pane_vc_g3

0x45ee,	// (0x000045ee) volume_set_pane_vc_g4

0x45f7,	// (0x000045f7) volume_set_pane_vc_g5

0x4600,	// (0x00004600) volume_set_pane_vc_g6

0x4609,	// (0x00004609) volume_set_pane_vc_g7

0x4612,	// (0x00004612) volume_set_pane_vc_g8

0x461b,	// (0x0000461b) volume_set_pane_vc_g9

0x4624,	// (0x00004624) volume_set_pane_vc_g10

0x0009,

0xaf7f,	// (0x0000af7f) volume_set_pane_vc_g

0x5969,	// (0x00005969) volume_set_pane_vc

0x5971,	// (0x00005971) button_value_adjust_pane_cp1_vc

0x597b,	// (0x0000597b) list_highlight_pane_cp2_vc

0x5984,	// (0x00005984) list_set_pane_vc_ParamLimits

0x5984,	// (0x00005984) list_set_pane_vc

0x59e2,	// (0x000059e2) main_pane_set_vc_t1_ParamLimits

0x59e2,	// (0x000059e2) main_pane_set_vc_t1

0x59f7,	// (0x000059f7) main_pane_set_vc_t2_ParamLimits

0x59f7,	// (0x000059f7) main_pane_set_vc_t2

0x5a09,	// (0x00005a09) main_pane_set_vc_t3_ParamLimits

0x5a09,	// (0x00005a09) main_pane_set_vc_t3

0x5a1d,	// (0x00005a1d) main_pane_set_vc_t4_ParamLimits

0x5a1d,	// (0x00005a1d) main_pane_set_vc_t4

0x0003,

0xb0e8,	// (0x0000b0e8) main_pane_set_vc_t_ParamLimits

0xb0e8,	// (0x0000b0e8) main_pane_set_vc_t

0x5a31,	// (0x00005a31) setting_code_pane_vc_ParamLimits

0x5a31,	// (0x00005a31) setting_code_pane_vc

0x5a42,	// (0x00005a42) setting_slider_graphic_pane_vc

0x5a42,	// (0x00005a42) setting_slider_pane_vc

0x5a42,	// (0x00005a42) setting_text_pane_vc

0x5a42,	// (0x00005a42) setting_volume_pane_vc

0x5a4c,	// (0x00005a4c) scroll_pane_cp121_vc

0x12ca,	// (0x000012ca) set_content_pane_vc

0x5d59,	// (0x00005d59) button_value_adjust_pane_g1

0x5d62,	// (0x00005d62) button_value_adjust_pane_g2

0x0001,

0xb149,	// (0x0000b149) button_value_adjust_pane_g

0x5d6b,	// (0x00005d6b) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5d6b,	// (0x00005d6b) form_field_slider_wide_pane_vc_t1

0x5d7f,	// (0x00005d7f) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5d7f,	// (0x00005d7f) form_field_slider_wide_pane_vc_t2

0x0002,

0xb14e,	// (0x0000b14e) form_field_slider_wide_pane_vc_t_ParamLimits

0xb14e,	// (0x0000b14e) form_field_slider_wide_pane_vc_t

0x082d,	// (0x0000082d) input_focus_pane_cp10_vc_ParamLimits

0x082d,	// (0x0000082d) input_focus_pane_cp10_vc

0x5dad,	// (0x00005dad) slider_cont_pane_cp1_vc_ParamLimits

0x5dad,	// (0x00005dad) slider_cont_pane_cp1_vc

0x5dbf,	// (0x00005dbf) slider_form_pane_g1_cp2

0x58e0,	// (0x000058e0) slider_form_pane_g2_cp2

0x5dec,	// (0x00005dec) form_field_slider_pane_vc_t3

0x5dfa,	// (0x00005dfa) form_field_slider_pane_vc_t4

0x5e08,	// (0x00005e08) slider_form_pane_vc_ParamLimits

0x5e08,	// (0x00005e08) slider_form_pane_vc

0x5e15,	// (0x00005e15) form_field_slider_pane_vc_t1_ParamLimits

0x5e15,	// (0x00005e15) form_field_slider_pane_vc_t1

0x5d7f,	// (0x00005d7f) form_field_slider_pane_vc_t2_ParamLimits

0x5d7f,	// (0x00005d7f) form_field_slider_pane_vc_t2

0x0001,

0xb160,	// (0x0000b160) form_field_slider_pane_vc_t_ParamLimits

0xb160,	// (0x0000b160) form_field_slider_pane_vc_t

0x082d,	// (0x0000082d) input_focus_pane_cp9_vc_ParamLimits

0x082d,	// (0x0000082d) input_focus_pane_cp9_vc

0x5e31,	// (0x00005e31) slider_cont_pane_vc_ParamLimits

0x5e31,	// (0x00005e31) slider_cont_pane_vc

0x5e45,	// (0x00005e45) list_form_graphic_pane_cp_vc_ParamLimits

0x5e45,	// (0x00005e45) list_form_graphic_pane_cp_vc

0x39b9,	// (0x000039b9) form_field_popup_wide_pane_vc_g1

0x5e5a,	// (0x00005e5a) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5e5a,	// (0x00005e5a) form_field_popup_wide_pane_vc_t1

0x13c2,	// (0x000013c2) input_focus_pane_cp8_vc_ParamLimits

0x13c2,	// (0x000013c2) input_focus_pane_cp8_vc

0x5e9f,	// (0x00005e9f) list_form_wide_pane_vc_ParamLimits

0x5e9f,	// (0x00005e9f) list_form_wide_pane_vc

0x5eab,	// (0x00005eab) list_form_graphic_pane_vc_g1

0x5eb3,	// (0x00005eb3) list_form_graphic_pane_vc_t1_ParamLimits

0x5eb3,	// (0x00005eb3) list_form_graphic_pane_vc_t1

0x0507,	// (0x00000507) list_highlight_pane_cp5_vc_ParamLimits

0x0507,	// (0x00000507) list_highlight_pane_cp5_vc

0x5ecf,	// (0x00005ecf) list_form_graphic_pane_vc_ParamLimits

0x5ecf,	// (0x00005ecf) list_form_graphic_pane_vc

0x39b9,	// (0x000039b9) form_field_popup_pane_vc_g1

0x5ee5,	// (0x00005ee5) form_field_popup_pane_vc_t1_ParamLimits

0x5ee5,	// (0x00005ee5) form_field_popup_pane_vc_t1

0x13c2,	// (0x000013c2) input_focus_pane_cp7_vc_ParamLimits

0x13c2,	// (0x000013c2) input_focus_pane_cp7_vc

0x5efc,	// (0x00005efc) list_form_pane_vc_ParamLimits

0x5efc,	// (0x00005efc) list_form_pane_vc

0x5f08,	// (0x00005f08) data_form_pane_vc_t1_ParamLimits

0x5f08,	// (0x00005f08) data_form_pane_vc_t1

0x14e5,	// (0x000014e5) input_focus_pane_vc_g1

0x14ed,	// (0x000014ed) input_focus_pane_vc_g2

0x14f5,	// (0x000014f5) input_focus_pane_vc_g3

0x14fd,	// (0x000014fd) input_focus_pane_vc_g4

0x1505,	// (0x00001505) input_focus_pane_vc_g5

0x150d,	// (0x0000150d) input_focus_pane_vc_g6

0x1515,	// (0x00001515) input_focus_pane_vc_g7

0x151d,	// (0x0000151d) input_focus_pane_vc_g8

0x1525,	// (0x00001525) input_focus_pane_vc_g9

0x002e,	// (0x0000002e) input_focus_pane_vc_g10

0x0009,

0xad5c,	// (0x0000ad5c) input_focus_pane_vc_g

0x39ad,	// (0x000039ad) data_form_pane_vc_ParamLimits

0x39ad,	// (0x000039ad) data_form_pane_vc

0x39b9,	// (0x000039b9) form_field_data_pane_vc_g1

0x5f23,	// (0x00005f23) form_field_data_pane_vc_t1_ParamLimits

0x5f23,	// (0x00005f23) form_field_data_pane_vc_t1

0x13c2,	// (0x000013c2) input_focus_pane_vc_ParamLimits

0x13c2,	// (0x000013c2) input_focus_pane_vc

0x5f3d,	// (0x00005f3d) button_value_adjust_pane_cp3_vc

0x5f45,	// (0x00005f45) button_value_adjust_pane_cp5_vc

0x5f4d,	// (0x00005f4d) form_field_data_pane_vc_ParamLimits

0x5f4d,	// (0x00005f4d) form_field_data_pane_vc

0x5f64,	// (0x00005f64) form_field_data_pane_vc_cp2

0x5f6c,	// (0x00005f6c) form_field_data_wide_pane_vc_ParamLimits

0x5f6c,	// (0x00005f6c) form_field_data_wide_pane_vc

0x5f82,	// (0x00005f82) form_field_data_wide_pane_vc_cp2

0x5f8a,	// (0x00005f8a) form_field_popup_pane_vc_ParamLimits

0x5f8a,	// (0x00005f8a) form_field_popup_pane_vc

0x5fa1,	// (0x00005fa1) form_field_popup_wide_pane_vc_ParamLimits

0x5fa1,	// (0x00005fa1) form_field_popup_wide_pane_vc

0x5fb7,	// (0x00005fb7) form_field_slider_pane_vc_ParamLimits

0x5fb7,	// (0x00005fb7) form_field_slider_pane_vc

0x5fca,	// (0x00005fca) form_field_slider_wide_pane_vc_ParamLimits

0x5fca,	// (0x00005fca) form_field_slider_wide_pane_vc

0xd693,	// (0x0000d693) grid_touch_1_pane_ParamLimits

0xd693,	// (0x0000d693) grid_touch_1_pane

0xd6a7,	// (0x0000d6a7) grid_touch_2_pane_ParamLimits

0xd6a7,	// (0x0000d6a7) grid_touch_2_pane

0x6098,	// (0x00006098) touch_pane_g1_ParamLimits

0x6098,	// (0x00006098) touch_pane_g1

0x6001,	// (0x00006001) cell_app_pane_cp_wide_ParamLimits

0x6001,	// (0x00006001) cell_app_pane_cp_wide

0x6012,	// (0x00006012) grid_popup_fast_wide_pane_ParamLimits

0x6012,	// (0x00006012) grid_popup_fast_wide_pane

0x6026,	// (0x00006026) scroll_pane_cp19_ParamLimits

0x6026,	// (0x00006026) scroll_pane_cp19

0x0293,	// (0x00000293) bg_popup_window_pane_cp20

0x603a,	// (0x0000603a) listscroll_popup_fast_wide_pane

0x16f9,	// (0x000016f9) grid_indicator_nsta_pane

0x6042,	// (0x00006042) clock_nsta_pane_g1

0x604b,	// (0x0000604b) clock_nsta_pane_t1

0xd6d1,	// (0x0000d6d1) cell_indicator_nsta_pane_ParamLimits

0xd6d1,	// (0x0000d6d1) cell_indicator_nsta_pane

0x6098,	// (0x00006098) cell_indicator_nsta_pane_g1

0xd6e8,	// (0x0000d6e8) cell_indicator_nsta_pane_g2

0x0001,

0xf49e,	// (0x0000f49e) cell_indicator_nsta_pane_g

0x60b3,	// (0x000060b3) clock_nsta_pane_cp

0x60bc,	// (0x000060bc) indicator_nsta_pane_cp

0x60c4,	// (0x000060c4) nsta_clock_indic_pane_g1

0x067b,	// (0x0000067b) grid_indicator_pane

0x1c91,	// (0x00001c91) scroll_pane_cp29

0x21b0,	// (0x000021b0) indicator_nsta_pane_cp2_ParamLimits

0x21b0,	// (0x000021b0) indicator_nsta_pane_cp2

0x0507,	// (0x00000507) main_apps_wheel_pane

0x3c05,	// (0x00003c05) form_midp_field_text_pane_ParamLimits

0x3d50,	// (0x00003d50) scroll_bar_cp050_ParamLimits

0x6114,	// (0x00006114) cell_indicator_pane_ParamLimits

0x6114,	// (0x00006114) cell_indicator_pane

0x612b,	// (0x0000612b) cell_indicator_pane_g1

0xd6f5,	// (0x0000d6f5) grid_wheel_folder_pane_ParamLimits

0xd6f5,	// (0x0000d6f5) grid_wheel_folder_pane

0xd703,	// (0x0000d703) list_wheel_apps_pane_ParamLimits

0xd703,	// (0x0000d703) list_wheel_apps_pane

0xd711,	// (0x0000d711) main_apps_wheel_pane_g1_ParamLimits

0xd711,	// (0x0000d711) main_apps_wheel_pane_g1

0xd71d,	// (0x0000d71d) main_apps_wheel_pane_g2_ParamLimits

0xd71d,	// (0x0000d71d) main_apps_wheel_pane_g2

0x0001,

0xf4a3,	// (0x0000f4a3) main_apps_wheel_pane_g_ParamLimits

0xf4a3,	// (0x0000f4a3) main_apps_wheel_pane_g

0xd72b,	// (0x0000d72b) main_apps_wheel_pane_t1_ParamLimits

0xd72b,	// (0x0000d72b) main_apps_wheel_pane_t1

0xd73f,	// (0x0000d73f) list_wheel_apps_pane_g1

0xd747,	// (0x0000d747) list_wheel_apps_pane_g2

0xd74f,	// (0x0000d74f) list_wheel_apps_pane_g3

0xd757,	// (0x0000d757) list_wheel_apps_pane_g4

0xd761,	// (0x0000d761) list_wheel_apps_pane_g5

0x0004,

0xf4a8,	// (0x0000f4a8) list_wheel_apps_pane_g

0x24bb,	// (0x000024bb) navi_icon_text_pane

0xcc9a,	// (0x0000cc9a) aid_fill_nsta

0x61f0,	// (0x000061f0) navi_icon_text_pane_g1

0x61fc,	// (0x000061fc) navi_icon_text_pane_t1

0x234e,	// (0x0000234e) list_set_graphic_pane_t1_ParamLimits

0x234e,	// (0x0000234e) list_set_graphic_pane_t1

0x44b3,	// (0x000044b3) popup_midp_note_alarm_window_t6_ParamLimits

0x44b3,	// (0x000044b3) popup_midp_note_alarm_window_t6

0x44c5,	// (0x000044c5) popup_midp_note_alarm_window_t7_ParamLimits

0x44c5,	// (0x000044c5) popup_midp_note_alarm_window_t7

0x44d7,	// (0x000044d7) popup_midp_note_alarm_window_t8_ParamLimits

0x44d7,	// (0x000044d7) popup_midp_note_alarm_window_t8

0x44e9,	// (0x000044e9) popup_midp_note_alarm_window_t9_ParamLimits

0x44e9,	// (0x000044e9) popup_midp_note_alarm_window_t9

0x44fb,	// (0x000044fb) popup_midp_note_alarm_window_t10_ParamLimits

0x44fb,	// (0x000044fb) popup_midp_note_alarm_window_t10

0x450d,	// (0x0000450d) popup_midp_note_alarm_window_t11_ParamLimits

0x450d,	// (0x0000450d) popup_midp_note_alarm_window_t11

0x451f,	// (0x0000451f) scroll_pane_cp17_ParamLimits

0x451f,	// (0x0000451f) scroll_pane_cp17

0x45d3,	// (0x000045d3) volume_small_pane_cp_g1

0x620e,	// (0x0000620e) volume_small_pane_cp_g2

0x6217,	// (0x00006217) volume_small_pane_cp_g3

0x6220,	// (0x00006220) volume_small_pane_cp_g4

0x6229,	// (0x00006229) volume_small_pane_cp_g5

0x6232,	// (0x00006232) volume_small_pane_cp_g6

0x623b,	// (0x0000623b) volume_small_pane_cp_g7

0x6244,	// (0x00006244) volume_small_pane_cp_g8

0x624d,	// (0x0000624d) volume_small_pane_cp_g9

0x6256,	// (0x00006256) volume_small_pane_cp_g10

0x2718,	// (0x00002718) midp_ticker_pane_g1_ParamLimits

0x2724,	// (0x00002724) midp_ticker_pane_g2_ParamLimits

0xae28,	// (0x0000ae28) midp_ticker_pane_g_ParamLimits

0x2730,	// (0x00002730) midp_ticker_pane_t1_ParamLimits

0xccbe,	// (0x0000ccbe) aid_fill_nsta_2

0x3d3c,	// (0x00003d3c) list_form2_midp_pane

0x50f4,	// (0x000050f4) midp_editing_number_pane_ParamLimits

0x5103,	// (0x00005103) midp_ticker_pane_ParamLimits

0x625f,	// (0x0000625f) form2_midp_field_pane

0x6283,	// (0x00006283) scroll_pane_cp51

0x62a3,	// (0x000062a3) form2_midp_button_pane_ParamLimits

0x62a3,	// (0x000062a3) form2_midp_button_pane

0x62b5,	// (0x000062b5) form2_midp_content_pane_ParamLimits

0x62b5,	// (0x000062b5) form2_midp_content_pane

0x62cf,	// (0x000062cf) form2_midp_field_choice_group_pane

0x62d7,	// (0x000062d7) form2_midp_field_pane_g1

0x62df,	// (0x000062df) form2_midp_field_pane_g2

0x62e7,	// (0x000062e7) form2_midp_field_pane_g3

0x62ef,	// (0x000062ef) form2_midp_field_pane_g4

0x0003,

0xb1b7,	// (0x0000b1b7) form2_midp_field_pane_g

0x62f7,	// (0x000062f7) form2_midp_gauge_slider_pane

0x62ff,	// (0x000062ff) form2_midp_gauge_wait_pane

0x6307,	// (0x00006307) form2_midp_image_pane_ParamLimits

0x6307,	// (0x00006307) form2_midp_image_pane

0x6322,	// (0x00006322) form2_midp_label_pane_ParamLimits

0x6322,	// (0x00006322) form2_midp_label_pane

0xd794,	// (0x0000d794) form2_midp_label_pane_cp_ParamLimits

0xd794,	// (0x0000d794) form2_midp_label_pane_cp

0x635c,	// (0x0000635c) form2_midp_string_pane_ParamLimits

0x635c,	// (0x0000635c) form2_midp_string_pane

0xd7b3,	// (0x0000d7b3) form2_midp_text_pane_ParamLimits

0xd7b3,	// (0x0000d7b3) form2_midp_text_pane

0x638b,	// (0x0000638b) form2_midp_time_pane

0x639b,	// (0x0000639b) input_focus_pane_cp51_ParamLimits

0x639b,	// (0x0000639b) input_focus_pane_cp51

0x63b3,	// (0x000063b3) form2_midp_label_pane_t1_ParamLimits

0x63b3,	// (0x000063b3) form2_midp_label_pane_t1

0xd7cc,	// (0x0000d7cc) form2_mdip_text_pane_t1_ParamLimits

0xd7cc,	// (0x0000d7cc) form2_mdip_text_pane_t1

0x6413,	// (0x00006413) form2_midp_time_pane_t1

0x642e,	// (0x0000642e) form2_midp_gauge_slider_pane_t1

0xd7e7,	// (0x0000d7e7) form2_midp_gauge_slider_pane_t2

0xd7f9,	// (0x0000d7f9) form2_midp_gauge_slider_pane_t3

0x0002,

0xf4b8,	// (0x0000f4b8) form2_midp_gauge_slider_pane_t

0x6464,	// (0x00006464) form2_midp_slider_pane

0x6470,	// (0x00006470) form2_midp_gauge_wait_pane_t1

0x647e,	// (0x0000647e) form2_midp_wait_pane_ParamLimits

0x647e,	// (0x0000647e) form2_midp_wait_pane

0xd80b,	// (0x0000d80b) list_single_2graphic_pane_cp4_ParamLimits

0xd80b,	// (0x0000d80b) list_single_2graphic_pane_cp4

0xd14c,	// (0x0000d14c) list_single_midp_graphic_pane_cp_ParamLimits

0xd14c,	// (0x0000d14c) list_single_midp_graphic_pane_cp

0x0293,	// (0x00000293) list_highlight_pane_cp20

0x64cd,	// (0x000064cd) list_single_2graphic_pane_g1_cp4

0x64d5,	// (0x000064d5) list_single_2graphic_pane_g2_cp4

0x64dd,	// (0x000064dd) list_single_2graphic_pane_t1_cp4

0x0507,	// (0x00000507) list_highlight_pane_cp21

0x64ec,	// (0x000064ec) list_single_midp_graphic_pane_g4_cp

0x64fb,	// (0x000064fb) list_single_midp_graphic_pane_t1_cp

0xd81f,	// (0x0000d81f) form2_mdip_string_pane_t1_ParamLimits

0xd81f,	// (0x0000d81f) form2_mdip_string_pane_t1

0x0293,	// (0x00000293) bg_wml_button_pane_cp2

0x002e,	// (0x0000002e) form2_midp_image_pane_g1

0x1080,	// (0x00001080) list_double_large_graphic_pane_g5_ParamLimits

0x1080,	// (0x00001080) list_double_large_graphic_pane_g5

0xc2de,	// (0x0000c2de) midp_form_pane_ParamLimits

0x0507,	// (0x00000507) main_apps_wheel_pane_ParamLimits

0xc9ea,	// (0x0000c9ea) popup_preview_window_ParamLimits

0xc9ea,	// (0x0000c9ea) popup_preview_window

0x3126,	// (0x00003126) popup_touch_info_window_ParamLimits

0x3126,	// (0x00003126) popup_touch_info_window

0x3144,	// (0x00003144) popup_touch_menu_window_ParamLimits

0x3144,	// (0x00003144) popup_touch_menu_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp6

0x6609,	// (0x00006609) list_touch_menu_pane

0x6611,	// (0x00006611) list_single_touch_menu_pane_ParamLimits

0x6611,	// (0x00006611) list_single_touch_menu_pane

0x6627,	// (0x00006627) list_single_touch_menu_pane_t1

0x0507,	// (0x00000507) bg_popup_sub_pane_cp7_ParamLimits

0x0507,	// (0x00000507) bg_popup_sub_pane_cp7

0x6635,	// (0x00006635) heading_sub_pane

0x663d,	// (0x0000663d) list_touch_info_pane_ParamLimits

0x663d,	// (0x0000663d) list_touch_info_pane

0x664c,	// (0x0000664c) list_single_touch_info_pane_ParamLimits

0x664c,	// (0x0000664c) list_single_touch_info_pane

0x665e,	// (0x0000665e) list_single_touch_info_pane_t1

0x666c,	// (0x0000666c) list_single_touch_info_pane_t2

0x0001,

0xb1ce,	// (0x0000b1ce) list_single_touch_info_pane_t

0x263b,	// (0x0000263b) bg_popup_heading_pane_cp

0x667a,	// (0x0000667a) heading_sub_pane_t1

0x38bf,	// (0x000038bf) bg_popup_preview_window_pane_cp_ParamLimits

0x38bf,	// (0x000038bf) bg_popup_preview_window_pane_cp

0x6635,	// (0x00006635) heading_preview_pane

0x663d,	// (0x0000663d) list_preview_pane_ParamLimits

0x663d,	// (0x0000663d) list_preview_pane

0x6688,	// (0x00006688) popup_preview_window_g1

0x664c,	// (0x0000664c) list_single_preview_pane_ParamLimits

0x664c,	// (0x0000664c) list_single_preview_pane

0x6690,	// (0x00006690) list_single_preview_pane_g1

0x6698,	// (0x00006698) list_single_preview_pane_t1

0x665e,	// (0x0000665e) list_single_preview_pane_t2

0x0001,

0xb1d3,	// (0x0000b1d3) list_single_preview_pane_t

0x66a6,	// (0x000066a6) bg_popup_heading_pane_cp2_ParamLimits

0x66a6,	// (0x000066a6) bg_popup_heading_pane_cp2

0x66bc,	// (0x000066bc) heading_preview_pane_g1

0x66c4,	// (0x000066c4) heading_preview_pane_t1_ParamLimits

0x66c4,	// (0x000066c4) heading_preview_pane_t1

0x069e,	// (0x0000069e) soft_indicator_pane_t1_ParamLimits

0x0dba,	// (0x00000dba) scroll_pane_ParamLimits

0x1b8a,	// (0x00001b8a) scroll_sc2_left_pane

0x1b93,	// (0x00001b93) scroll_sc2_right_pane

0x1bb2,	// (0x00001bb2) scroll_bg_pane_g1_ParamLimits

0x1bc7,	// (0x00001bc7) scroll_bg_pane_g2_ParamLimits

0x1bdf,	// (0x00001bdf) scroll_bg_pane_g3_ParamLimits

0xadb3,	// (0x0000adb3) scroll_bg_pane_g_ParamLimits

0x1bb2,	// (0x00001bb2) scroll_handle_pane_g1_ParamLimits

0x1c01,	// (0x00001c01) scroll_handle_pane_g2_ParamLimits

0x1bdf,	// (0x00001bdf) scroll_handle_pane_g3_ParamLimits

0xadba,	// (0x0000adba) scroll_handle_pane_g_ParamLimits

0x2bec,	// (0x00002bec) popup_choice_list_window_ParamLimits

0x2bec,	// (0x00002bec) popup_choice_list_window

0x3615,	// (0x00003615) choice_list_pane

0x36dd,	// (0x000036dd) cell_toolbar_pane_t1

0x3705,	// (0x00003705) toolbar_button_pane_ParamLimits

0x4b3d,	// (0x00004b3d) ai_gene_pane_1_t2_ParamLimits

0x4b3d,	// (0x00004b3d) ai_gene_pane_1_t2

0x0001,

0xafdb,	// (0x0000afdb) ai_gene_pane_1_t_ParamLimits

0xafdb,	// (0x0000afdb) ai_gene_pane_1_t

0x66e1,	// (0x000066e1) scroll_sc2_left_pane_g1

0x66e1,	// (0x000066e1) scroll_sc2_right_pane_g1

0x2b86,	// (0x00002b86) bg_popup_sub_pane_cp10

0x66eb,	// (0x000066eb) list_choice_list_pane

0x6704,	// (0x00006704) list_single_choice_list_pane_ParamLimits

0x6704,	// (0x00006704) list_single_choice_list_pane

0x6717,	// (0x00006717) list_single_choice_list_pane_g1

0x16ca,	// (0x000016ca) list_single_choice_list_pane_t1_ParamLimits

0x16ca,	// (0x000016ca) list_single_choice_list_pane_t1

0x671f,	// (0x0000671f) choice_list_pane_g1

0x6727,	// (0x00006727) choice_list_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp11

0x18f0,	// (0x000018f0) title_pane_stacon_g2_ParamLimits

0x18f0,	// (0x000018f0) title_pane_stacon_g2

0x0002,

0xad99,	// (0x0000ad99) title_pane_stacon_g_ParamLimits

0xad99,	// (0x0000ad99) title_pane_stacon_g

0x263b,	// (0x0000263b) cursor_press_pane

0xc697,	// (0x0000c697) popup_fep_hwr_window_ParamLimits

0xc697,	// (0x0000c697) popup_fep_hwr_window

0x2d12,	// (0x00002d12) popup_fep_vkb_window_ParamLimits

0x2d12,	// (0x00002d12) popup_fep_vkb_window

0x6735,	// (0x00006735) cursor_press_pane_g1

0x0002,

0xf4cc,	// (0x0000f4cc) fep_vkb_side_pane_g_ParamLimits

0x6776,	// (0x00006776) fep_hwr_candidate_pane_ParamLimits

0x6776,	// (0x00006776) fep_hwr_candidate_pane

0x67a0,	// (0x000067a0) fep_hwr_side_pane_ParamLimits

0x67a0,	// (0x000067a0) fep_hwr_side_pane

0x67c0,	// (0x000067c0) fep_hwr_top_pane_ParamLimits

0x67c0,	// (0x000067c0) fep_hwr_top_pane

0x67d8,	// (0x000067d8) fep_hwr_write_pane_ParamLimits

0x67d8,	// (0x000067d8) fep_hwr_write_pane

0xf4cc,	// (0x0000f4cc) fep_vkb_side_pane_g

0x6812,	// (0x00006812) fep_hwr_top_pane_g1

0x6824,	// (0x00006824) fep_hwr_top_pane_g2

0x6836,	// (0x00006836) fep_hwr_top_pane_g3

0x0002,

0xb1d8,	// (0x0000b1d8) fep_hwr_top_pane_g

0x684b,	// (0x0000684b) fep_hwr_top_text_pane

0x1d81,	// (0x00001d81) fep_hwr_top_text_pane_g1

0x6923,	// (0x00006923) fep_hwr_top_text_pane_t1

0x6973,	// (0x00006973) fep_hwr_candidate_pane_g1

0x6bec,	// (0x00006bec) fep_vkb_keypad_pane_g3_ParamLimits

0x6bec,	// (0x00006bec) fep_vkb_keypad_pane_g3

0x6c14,	// (0x00006c14) fep_vkb_keypad_pane_g4_ParamLimits

0x6c14,	// (0x00006c14) fep_vkb_keypad_pane_g4

0x6c83,	// (0x00006c83) fep_vkb_bottom_pane_g2_ParamLimits

0x6c83,	// (0x00006c83) fep_vkb_bottom_pane_g2

0x0001,

0xb203,	// (0x0000b203) fep_vkb_bottom_pane_g_ParamLimits

0xb203,	// (0x0000b203) fep_vkb_bottom_pane_g

0x66e1,	// (0x000066e1) cell_vkb_side_pane_g2

0x0001,

0xb20d,	// (0x0000b20d) cell_vkb_side_pane_g

0x6d0e,	// (0x00006d0e) cell_vkb_side_pane_t1

0x6d1c,	// (0x00006d1c) cell_vkb_side_pane_t1_copy1

0x66e1,	// (0x000066e1) bg_fep_vkb_candidate_pane_g2

0x6e48,	// (0x00006e48) cell_vkb_candidate_pane_ParamLimits

0x69a7,	// (0x000069a7) aid_size_cell_vkb_ParamLimits

0x69a7,	// (0x000069a7) aid_size_cell_vkb

0x6e48,	// (0x00006e48) cell_vkb_candidate_pane

0x6e7c,	// (0x00006e7c) bg_popup_fep_shadow_pane_g1

0xd8ee,	// (0x0000d8ee) fep_vkb_bottom_pane_ParamLimits

0xd8ee,	// (0x0000d8ee) fep_vkb_bottom_pane

0x6a6b,	// (0x00006a6b) fep_vkb_candidate_pane_ParamLimits

0x6a6b,	// (0x00006a6b) fep_vkb_candidate_pane

0xd913,	// (0x0000d913) fep_vkb_keypad_pane_ParamLimits

0xd913,	// (0x0000d913) fep_vkb_keypad_pane

0xd94f,	// (0x0000d94f) fep_vkb_side_pane_ParamLimits

0xd94f,	// (0x0000d94f) fep_vkb_side_pane

0xd98b,	// (0x0000d98b) fep_vkb_top_pane_ParamLimits

0xd98b,	// (0x0000d98b) fep_vkb_top_pane

0x6b45,	// (0x00006b45) fep_vkb_top_pane_g1_ParamLimits

0x6b45,	// (0x00006b45) fep_vkb_top_pane_g1

0x6b54,	// (0x00006b54) fep_vkb_top_pane_g2_ParamLimits

0x6b54,	// (0x00006b54) fep_vkb_top_pane_g2

0x6b63,	// (0x00006b63) fep_vkb_top_pane_g3_ParamLimits

0x6b63,	// (0x00006b63) fep_vkb_top_pane_g3

0x0003,

0xb1f3,	// (0x0000b1f3) fep_vkb_top_pane_g_ParamLimits

0xb1f3,	// (0x0000b1f3) fep_vkb_top_pane_g

0x6b81,	// (0x00006b81) fep_vkb_top_text_pane_ParamLimits

0x6b81,	// (0x00006b81) fep_vkb_top_text_pane

0xd9c7,	// (0x0000d9c7) fep_vkb_side_pane_g1_ParamLimits

0xd9c7,	// (0x0000d9c7) fep_vkb_side_pane_g1

0x6bdb,	// (0x00006bdb) grid_vkb_side_pane_ParamLimits

0x6bdb,	// (0x00006bdb) grid_vkb_side_pane

0x6e84,	// (0x00006e84) bg_popup_fep_shadow_pane_g2

0x6e8d,	// (0x00006e8d) bg_popup_fep_shadow_pane_g3

0x6e95,	// (0x00006e95) bg_popup_fep_shadow_pane_g4

0x6e9e,	// (0x00006e9e) bg_popup_fep_shadow_pane_g5

0x6ea8,	// (0x00006ea8) bg_popup_fep_shadow_pane_g6

0x6eb0,	// (0x00006eb0) bg_popup_fep_shadow_pane_g7

0x1505,	// (0x00001505) bg_popup_fep_shadow_pane_g8

0x6c32,	// (0x00006c32) grid_vkb_keypad_number_pane_ParamLimits

0x6c32,	// (0x00006c32) grid_vkb_keypad_number_pane

0x6c42,	// (0x00006c42) grid_vkb_keypad_pane_ParamLimits

0x6c42,	// (0x00006c42) grid_vkb_keypad_pane

0x6c68,	// (0x00006c68) fep_vkb_bottom_pane_g1_ParamLimits

0x6c68,	// (0x00006c68) fep_vkb_bottom_pane_g1

0x6c91,	// (0x00006c91) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6c91,	// (0x00006c91) grid_vkb_keypad_bottom_left_pane

0x6ca6,	// (0x00006ca6) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6ca6,	// (0x00006ca6) grid_vkb_keypad_bottom_right_pane

0x6cbb,	// (0x00006cbb) fep_vkb_top_text_pane_g1

0xda0e,	// (0x0000da0e) fep_vkb_top_text_pane_t1

0xda20,	// (0x0000da20) cell_vkb_side_pane_ParamLimits

0xda20,	// (0x0000da20) cell_vkb_side_pane

0x66e1,	// (0x000066e1) cell_vkb_side_pane_g1

0x6d2a,	// (0x00006d2a) cell_vkb_keypad_pane_ParamLimits

0x6d2a,	// (0x00006d2a) cell_vkb_keypad_pane

0x6d9f,	// (0x00006d9f) cell_vkb_keypad_pane_g1

0x0008,

0xb220,	// (0x0000b220) bg_popup_fep_shadow_pane_g

0x66e1,	// (0x000066e1) cell_hwr_side_pane_g1

0x66e1,	// (0x000066e1) cell_hwr_side_pane_g2

0x6da9,	// (0x00006da9) cell_vkb_keypad_pane_t1

0xda36,	// (0x0000da36) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xda36,	// (0x0000da36) cell_vkb_keypad_bottom_left_pane

0xda4b,	// (0x0000da4b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xda4b,	// (0x0000da4b) cell_vkb_keypad_bottom_right_pane

0x66e1,	// (0x000066e1) cell_vkb_keypad_bottom_left_pane_g1

0x66e1,	// (0x000066e1) cell_vkb_keypad_bottom_right_pane_g1

0x6e0d,	// (0x00006e0d) cell_vkb_keypad_number_pane_ParamLimits

0x6e0d,	// (0x00006e0d) cell_vkb_keypad_number_pane

0x6e2c,	// (0x00006e2c) cell_vkb_keypad_number_pane_g1

0x6e36,	// (0x00006e36) cell_vkb_keypad_number_pane_g2

0x6e3f,	// (0x00006e3f) cell_vkb_keypad_number_pane_g3

0x0002,

0xb212,	// (0x0000b212) cell_vkb_keypad_number_pane_g

0x6da9,	// (0x00006da9) cell_vkb_keypad_number_pane_t1

0x6e63,	// (0x00006e63) fep_vkb_candidate_pane_g1

0x0001,

0xb20d,	// (0x0000b20d) cell_hwr_side_pane_g

0x6ec2,	// (0x00006ec2) cell_hwr_side_pane_t1

0x6ed0,	// (0x00006ed0) cell_hwr_side_pane_t1_copy1

0x6b73,	// (0x00006b73) cell_hwr_candidate_pane_g1

0x6f20,	// (0x00006f20) cell_hwr_candidate_pane_t1

0x66e1,	// (0x000066e1) cell_vkb_candidate_pane_g2

0x6f74,	// (0x00006f74) cell_vkb_candidate_pane_t1

0x673d,	// (0x0000673d) bg_popup_fep_shadow_pane_ParamLimits

0x673d,	// (0x0000673d) bg_popup_fep_shadow_pane

0x67f2,	// (0x000067f2) bg_fep_hwr_top_pane_g4

0x6860,	// (0x00006860) bg_hwr_side_pane_g1_ParamLimits

0x6860,	// (0x00006860) bg_hwr_side_pane_g1

0xd8a7,	// (0x0000d8a7) cell_hwr_side_pane_ParamLimits

0xd8a7,	// (0x0000d8a7) cell_hwr_side_pane

0x68ce,	// (0x000068ce) fep_hwr_write_pane_g1_ParamLimits

0x68ce,	// (0x000068ce) fep_hwr_write_pane_g1

0x68db,	// (0x000068db) fep_hwr_write_pane_g2_ParamLimits

0x68db,	// (0x000068db) fep_hwr_write_pane_g2

0x68e8,	// (0x000068e8) fep_hwr_write_pane_g3_ParamLimits

0x68e8,	// (0x000068e8) fep_hwr_write_pane_g3

0xd8c7,	// (0x0000d8c7) fep_hwr_write_pane_g4_ParamLimits

0xd8c7,	// (0x0000d8c7) fep_hwr_write_pane_g4

0x0005,

0xf4bf,	// (0x0000f4bf) fep_hwr_write_pane_g_ParamLimits

0xf4bf,	// (0x0000f4bf) fep_hwr_write_pane_g

0x67f2,	// (0x000067f2) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x67f2,	// (0x000067f2) bg_fep_hwr_candidate_pane_g2

0x6931,	// (0x00006931) cell_hwr_candidate_pane_ParamLimits

0x6931,	// (0x00006931) cell_hwr_candidate_pane

0x6973,	// (0x00006973) fep_hwr_candidate_pane_g1_ParamLimits

0x69d5,	// (0x000069d5) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x69d5,	// (0x000069d5) bg_popup_fep_shadow_pane_cp2

0x6b73,	// (0x00006b73) fep_vkb_top_pane_g4_ParamLimits

0x6b73,	// (0x00006b73) fep_vkb_top_pane_g4

0x6bb9,	// (0x00006bb9) fep_vkb_side_pane_g2_ParamLimits

0x6bb9,	// (0x00006bb9) fep_vkb_side_pane_g2

0xbe49,	// (0x0000be49) list_setting_pane_t4_ParamLimits

0xbe49,	// (0x0000be49) list_setting_pane_t4

0xbec3,	// (0x0000bec3) list_setting_number_pane_t5_ParamLimits

0xbec3,	// (0x0000bec3) list_setting_number_pane_t5

0x1dd7,	// (0x00001dd7) list_double_heading_pane_cp2_ParamLimits

0x1dd7,	// (0x00001dd7) list_double_heading_pane_cp2

0x100b,	// (0x0000100b) list_double_heading_pane_g1_cp2_ParamLimits

0x100b,	// (0x0000100b) list_double_heading_pane_g1_cp2

0x13e8,	// (0x000013e8) list_double_heading_pane_g2_cp2_ParamLimits

0x13e8,	// (0x000013e8) list_double_heading_pane_g2_cp2

0x6f82,	// (0x00006f82) list_double_heading_pane_t1_cp2_ParamLimits

0x6f82,	// (0x00006f82) list_double_heading_pane_t1_cp2

0x6f98,	// (0x00006f98) list_double_heading_pane_t2_cp2_ParamLimits

0x6f98,	// (0x00006f98) list_double_heading_pane_t2_cp2

0x000c,	// (0x0000000c) aid_value_unit2

0x0317,	// (0x00000317) popup_preview_fixed_window

0x083b,	// (0x0000083b) bg_popup_preview_window_pane_cp02

0x6faa,	// (0x00006faa) list_preview_fixed_pane

0x6ff0,	// (0x00006ff0) list_empty_pane_fp_ParamLimits

0x6ff0,	// (0x00006ff0) list_empty_pane_fp

0x6ff0,	// (0x00006ff0) list_single_cale_day_pane_fp_ParamLimits

0x6ff0,	// (0x00006ff0) list_single_cale_day_pane_fp

0x6ff0,	// (0x00006ff0) list_single_graphic_heading_pane_fp_ParamLimits

0x6ff0,	// (0x00006ff0) list_single_graphic_heading_pane_fp

0x6ff0,	// (0x00006ff0) list_single_graphic_pane_fp_ParamLimits

0x6ff0,	// (0x00006ff0) list_single_graphic_pane_fp

0x6ff0,	// (0x00006ff0) list_single_heading_pane_fp_ParamLimits

0x6ff0,	// (0x00006ff0) list_single_heading_pane_fp

0x6ff0,	// (0x00006ff0) list_single_pane_fp_ParamLimits

0x6ff0,	// (0x00006ff0) list_single_pane_fp

0x7005,	// (0x00007005) list_single_pane_fp_g1_ParamLimits

0x7005,	// (0x00007005) list_single_pane_fp_g1

0x100b,	// (0x0000100b) list_single_pane_fp_g2_ParamLimits

0x100b,	// (0x0000100b) list_single_pane_fp_g2

0x13e8,	// (0x000013e8) list_single_pane_fp_g3_ParamLimits

0x13e8,	// (0x000013e8) list_single_pane_fp_g3

0x7011,	// (0x00007011) list_single_pane_fp_g4_ParamLimits

0x7011,	// (0x00007011) list_single_pane_fp_g4

0x0003,

0xb241,	// (0x0000b241) list_single_pane_fp_g_ParamLimits

0xb241,	// (0x0000b241) list_single_pane_fp_g

0x701d,	// (0x0000701d) list_single_pane_fp_t1_ParamLimits

0x701d,	// (0x0000701d) list_single_pane_fp_t1

0x7034,	// (0x00007034) list_single_graphic_pane_fp_g1_ParamLimits

0x7034,	// (0x00007034) list_single_graphic_pane_fp_g1

0x7005,	// (0x00007005) list_single_graphic_pane_fp_g2_ParamLimits

0x7005,	// (0x00007005) list_single_graphic_pane_fp_g2

0x100b,	// (0x0000100b) list_single_graphic_pane_fp_g3_ParamLimits

0x100b,	// (0x0000100b) list_single_graphic_pane_fp_g3

0x13e8,	// (0x000013e8) list_single_graphic_pane_fp_g4_ParamLimits

0x13e8,	// (0x000013e8) list_single_graphic_pane_fp_g4

0x7011,	// (0x00007011) list_single_graphic_pane_fp_g5_ParamLimits

0x7011,	// (0x00007011) list_single_graphic_pane_fp_g5

0x0004,

0xb24a,	// (0x0000b24a) list_single_graphic_pane_fp_g_ParamLimits

0xb24a,	// (0x0000b24a) list_single_graphic_pane_fp_g

0x7040,	// (0x00007040) list_single_graphic_pane_fp_t1_ParamLimits

0x7040,	// (0x00007040) list_single_graphic_pane_fp_t1

0x7034,	// (0x00007034) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7034,	// (0x00007034) list_single_graphic_heading_pane_fp_g1

0x7005,	// (0x00007005) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7005,	// (0x00007005) list_single_graphic_heading_pane_fp_g2

0x100b,	// (0x0000100b) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x100b,	// (0x0000100b) list_single_graphic_heading_pane_fp_g3

0x13e8,	// (0x000013e8) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x13e8,	// (0x000013e8) list_single_graphic_heading_pane_fp_g4

0x7011,	// (0x00007011) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7011,	// (0x00007011) list_single_graphic_heading_pane_fp_g5

0x0004,

0xb24a,	// (0x0000b24a) list_single_graphic_heading_pane_fp_g_ParamLimits

0xb24a,	// (0x0000b24a) list_single_graphic_heading_pane_fp_g

0x7056,	// (0x00007056) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7056,	// (0x00007056) list_single_graphic_heading_pane_fp_t1

0x706c,	// (0x0000706c) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x706c,	// (0x0000706c) list_single_graphic_heading_pane_fp_t2

0x0001,

0xb255,	// (0x0000b255) list_single_graphic_heading_pane_fp_t_ParamLimits

0xb255,	// (0x0000b255) list_single_graphic_heading_pane_fp_t

0x707e,	// (0x0000707e) list_single_cale_day_pane_fp_g1_ParamLimits

0x707e,	// (0x0000707e) list_single_cale_day_pane_fp_g1

0x70b6,	// (0x000070b6) list_single_cale_day_pane_fp_g2_ParamLimits

0x70b6,	// (0x000070b6) list_single_cale_day_pane_fp_g2

0x70c2,	// (0x000070c2) list_single_cale_day_pane_fp_g3_ParamLimits

0x70c2,	// (0x000070c2) list_single_cale_day_pane_fp_g3

0x70ea,	// (0x000070ea) list_single_cale_day_pane_fp_g4_ParamLimits

0x70ea,	// (0x000070ea) list_single_cale_day_pane_fp_g4

0x710e,	// (0x0000710e) list_single_cale_day_pane_fp_g5_ParamLimits

0x710e,	// (0x0000710e) list_single_cale_day_pane_fp_g5

0x0004,

0xb25a,	// (0x0000b25a) list_single_cale_day_pane_fp_g_ParamLimits

0xb25a,	// (0x0000b25a) list_single_cale_day_pane_fp_g

0x7132,	// (0x00007132) list_single_cale_day_pane_fp_t1_ParamLimits

0x7132,	// (0x00007132) list_single_cale_day_pane_fp_t1

0x7158,	// (0x00007158) list_single_cale_day_pane_fp_t2_ParamLimits

0x7158,	// (0x00007158) list_single_cale_day_pane_fp_t2

0x7171,	// (0x00007171) list_single_cale_day_pane_fp_t3_ParamLimits

0x7171,	// (0x00007171) list_single_cale_day_pane_fp_t3

0x0002,

0xb265,	// (0x0000b265) list_single_cale_day_pane_fp_t_ParamLimits

0xb265,	// (0x0000b265) list_single_cale_day_pane_fp_t

0x7005,	// (0x00007005) list_empty_pane_fp_g1_ParamLimits

0x7005,	// (0x00007005) list_empty_pane_fp_g1

0x718a,	// (0x0000718a) list_empty_pane_fp_t1

0x7198,	// (0x00007198) list_empty_pane_fp_t2

0x0001,

0xb26c,	// (0x0000b26c) list_empty_pane_fp_t

0x7005,	// (0x00007005) list_single_heading_pane_fp_g1_ParamLimits

0x7005,	// (0x00007005) list_single_heading_pane_fp_g1

0x100b,	// (0x0000100b) list_single_heading_pane_fp_g2_ParamLimits

0x100b,	// (0x0000100b) list_single_heading_pane_fp_g2

0x13e8,	// (0x000013e8) list_single_heading_pane_fp_g3_ParamLimits

0x13e8,	// (0x000013e8) list_single_heading_pane_fp_g3

0x0002,

0xb271,	// (0x0000b271) list_single_heading_pane_fp_g_ParamLimits

0xb271,	// (0x0000b271) list_single_heading_pane_fp_g

0x71a6,	// (0x000071a6) list_single_heading_pane_fp_t1_ParamLimits

0x71a6,	// (0x000071a6) list_single_heading_pane_fp_t1

0x71b8,	// (0x000071b8) list_single_heading_pane_fp_t2_ParamLimits

0x71b8,	// (0x000071b8) list_single_heading_pane_fp_t2

0x0001,

0xb278,	// (0x0000b278) list_single_heading_pane_fp_t_ParamLimits

0xb278,	// (0x0000b278) list_single_heading_pane_fp_t

0x1738,	// (0x00001738) aid_size_cell_fast

0x07ab,	// (0x000007ab) soft_indicator_pane_cp1_t1

0x1775,	// (0x00001775) cell_app_pane_cp2_ParamLimits

0x1775,	// (0x00001775) cell_app_pane_cp2

0x675f,	// (0x0000675f) fep_hwr_candidate_drop_down_list_pane

0x698d,	// (0x0000698d) fep_hwr_candidate_pane_g3_ParamLimits

0x698d,	// (0x0000698d) fep_hwr_candidate_pane_g3

0x699a,	// (0x0000699a) fep_hwr_candidate_pane_g4_ParamLimits

0x699a,	// (0x0000699a) fep_hwr_candidate_pane_g4

0x0002,

0xb1ec,	// (0x0000b1ec) fep_hwr_candidate_pane_g_ParamLimits

0xb1ec,	// (0x0000b1ec) fep_hwr_candidate_pane_g

0x6a5a,	// (0x00006a5a) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x6a5a,	// (0x00006a5a) fep_vkb_candidate_drop_down_list_pane

0x6e6b,	// (0x00006e6b) fep_vkb_candidate_pane_g3

0x6e73,	// (0x00006e73) fep_vkb_candidate_pane_g4

0x0002,

0xb219,	// (0x0000b219) fep_vkb_candidate_pane_g

0x6b73,	// (0x00006b73) cell_hwr_candidate_pane_g1_ParamLimits

0x6ede,	// (0x00006ede) cell_hwr_candidate_pane_g3_ParamLimits

0x6ede,	// (0x00006ede) cell_hwr_candidate_pane_g3

0x6eff,	// (0x00006eff) cell_hwr_candidate_pane_g4_ParamLimits

0x6eff,	// (0x00006eff) cell_hwr_candidate_pane_g4

0x0002,

0xb233,	// (0x0000b233) cell_hwr_candidate_pane_g_ParamLimits

0xb233,	// (0x0000b233) cell_hwr_candidate_pane_g

0x6f3e,	// (0x00006f3e) cell_vkb_candidate_pane_g3_ParamLimits

0x6f3e,	// (0x00006f3e) cell_vkb_candidate_pane_g3

0x6f59,	// (0x00006f59) cell_vkb_candidate_pane_g4_ParamLimits

0x6f59,	// (0x00006f59) cell_vkb_candidate_pane_g4

0x71ce,	// (0x000071ce) cell_app_pane_cp2_g1_ParamLimits

0x71ce,	// (0x000071ce) cell_app_pane_cp2_g1

0x71ec,	// (0x000071ec) cell_app_pane_cp2_g2_ParamLimits

0x71ec,	// (0x000071ec) cell_app_pane_cp2_g2

0x0001,

0xb27d,	// (0x0000b27d) cell_app_pane_cp2_g_ParamLimits

0xb27d,	// (0x0000b27d) cell_app_pane_cp2_g

0x71f8,	// (0x000071f8) cell_app_pane_cp2_t1_ParamLimits

0x71f8,	// (0x000071f8) cell_app_pane_cp2_t1

0x13c2,	// (0x000013c2) grid_highlight_pane_cp1_ParamLimits

0x13c2,	// (0x000013c2) grid_highlight_pane_cp1

0x720a,	// (0x0000720a) cell_hwr_candidate_pane_cp1_ParamLimits

0x720a,	// (0x0000720a) cell_hwr_candidate_pane_cp1

0x6b73,	// (0x00006b73) fep_hwr_candidate_drop_down_list_pane_g1

0x7229,	// (0x00007229) fep_hwr_candidate_drop_down_list_pane_g2

0x7236,	// (0x00007236) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xb282,	// (0x0000b282) fep_hwr_candidate_drop_down_list_pane_g

0x7243,	// (0x00007243) fep_hwr_candidate_drop_down_list_scroll_pane

0x724c,	// (0x0000724c) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x724c,	// (0x0000724c) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7259,	// (0x00007259) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7259,	// (0x00007259) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7266,	// (0x00007266) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7266,	// (0x00007266) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6f3e,	// (0x00006f3e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6f3e,	// (0x00006f3e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6f59,	// (0x00006f59) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6f59,	// (0x00006f59) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7273,	// (0x00007273) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7273,	// (0x00007273) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x728e,	// (0x0000728e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x728e,	// (0x0000728e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x72a9,	// (0x000072a9) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x72a9,	// (0x000072a9) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xb289,	// (0x0000b289) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xb289,	// (0x0000b289) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x72c4,	// (0x000072c4) cell_vkb_candidate_pane_cp1_ParamLimits

0x72c4,	// (0x000072c4) cell_vkb_candidate_pane_cp1

0x6b73,	// (0x00006b73) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6b73,	// (0x00006b73) fep_vkb_candidate_drop_down_list_pane_g1

0x7229,	// (0x00007229) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7229,	// (0x00007229) fep_vkb_candidate_drop_down_list_pane_g2

0x7236,	// (0x00007236) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7236,	// (0x00007236) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xb282,	// (0x0000b282) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xb282,	// (0x0000b282) fep_vkb_candidate_drop_down_list_pane_g

0x72e4,	// (0x000072e4) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x72e4,	// (0x000072e4) fep_vkb_candidate_drop_down_list_scroll_pane

0x72f1,	// (0x000072f1) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x72f1,	// (0x000072f1) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x72fe,	// (0x000072fe) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x72fe,	// (0x000072fe) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x730a,	// (0x0000730a) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x730a,	// (0x0000730a) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6ede,	// (0x00006ede) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6ede,	// (0x00006ede) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6eff,	// (0x00006eff) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6eff,	// (0x00006eff) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7316,	// (0x00007316) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7316,	// (0x00007316) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7337,	// (0x00007337) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7337,	// (0x00007337) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7358,	// (0x00007358) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7358,	// (0x00007358) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xb29a,	// (0x0000b29a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xb29a,	// (0x0000b29a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb7f9,	// (0x0000b7f9) title_pane_g1_ParamLimits

0xb80c,	// (0x0000b80c) title_pane_g2_ParamLimits

0xf2f8,	// (0x0000f2f8) title_pane_g_ParamLimits

0x1d71,	// (0x00001d71) aid_call2_pane

0x1d79,	// (0x00001d79) aid_call_pane

0x1d81,	// (0x00001d81) popup_clock_analogue_window_g1

0x1d81,	// (0x00001d81) popup_clock_analogue_window_g2

0x1d89,	// (0x00001d89) popup_clock_analogue_window_g3

0x1d92,	// (0x00001d92) popup_clock_analogue_window_g4

0x002e,	// (0x0000002e) popup_clock_analogue_window_g5

0x0004,

0xadc8,	// (0x0000adc8) popup_clock_analogue_window_g

0x1d9a,	// (0x00001d9a) popup_clock_analogue_window_t1

0x1e25,	// (0x00001e25) clock_digital_number_pane_ParamLimits

0x1e25,	// (0x00001e25) clock_digital_number_pane

0x1e31,	// (0x00001e31) clock_digital_number_pane_cp02_ParamLimits

0x1e31,	// (0x00001e31) clock_digital_number_pane_cp02

0x1e3d,	// (0x00001e3d) clock_digital_number_pane_cp03_ParamLimits

0x1e3d,	// (0x00001e3d) clock_digital_number_pane_cp03

0x1e49,	// (0x00001e49) clock_digital_number_pane_cp04_ParamLimits

0x1e49,	// (0x00001e49) clock_digital_number_pane_cp04

0x1e55,	// (0x00001e55) clock_digital_separator_pane_ParamLimits

0x1e55,	// (0x00001e55) clock_digital_separator_pane

0x1e61,	// (0x00001e61) popup_clock_digital_window_t1_ParamLimits

0x1e61,	// (0x00001e61) popup_clock_digital_window_t1

0x002e,	// (0x0000002e) clock_digital_number_pane_g1

0x002e,	// (0x0000002e) clock_digital_number_pane_g2

0x0001,

0xadd3,	// (0x0000add3) clock_digital_number_pane_g

0x002e,	// (0x0000002e) clock_digital_separator_pane_g1

0x002e,	// (0x0000002e) clock_digital_separator_pane_g2

0x0001,

0xadd3,	// (0x0000add3) clock_digital_separator_pane_g

0xcc9a,	// (0x0000cc9a) aid_fill_nsta_ParamLimits

0xcdd0,	// (0x0000cdd0) indicator_nsta_pane_ParamLimits

0x3442,	// (0x00003442) popup_clock_analogue_window

0x3442,	// (0x00003442) popup_clock_digital_window

0x16f9,	// (0x000016f9) grid_indicator_nsta_pane_ParamLimits

0x6059,	// (0x00006059) clock_nsta_pane_t2

0x0001,

0xb16c,	// (0x0000b16c) clock_nsta_pane_t

0x1b2f,	// (0x00001b2f) aid_size_max_handle

0xc1ac,	// (0x0000c1ac) aid_size_min_handle

0x263b,	// (0x0000263b) editor_scroll_pane

0x7373,	// (0x00007373) ex_editor_pane

0x16a6,	// (0x000016a6) scroll_pane_cp13

0x0de6,	// (0x00000de6) scroll_pane_cp14

0x1dcf,	// (0x00001dcf) scroll_pane_cp36

0xc1b5,	// (0x0000c1b5) list_single_graphic_hl_pane_cp2_ParamLimits

0xc1b5,	// (0x0000c1b5) list_single_graphic_hl_pane_cp2

0xd50d,	// (0x0000d50d) list_single_graphic_hl_pane_ParamLimits

0xd50d,	// (0x0000d50d) list_single_graphic_hl_pane

0x737b,	// (0x0000737b) aid_size_min_hl_cp1

0x7384,	// (0x00007384) list_highlight_pane_cp34_ParamLimits

0x7384,	// (0x00007384) list_highlight_pane_cp34

0x7395,	// (0x00007395) list_single_graphic_hl_pane_g1_ParamLimits

0x7395,	// (0x00007395) list_single_graphic_hl_pane_g1

0xda66,	// (0x0000da66) list_single_graphic_hl_pane_g2_ParamLimits

0xda66,	// (0x0000da66) list_single_graphic_hl_pane_g2

0xda66,	// (0x0000da66) list_single_graphic_hl_pane_g3_ParamLimits

0xda66,	// (0x0000da66) list_single_graphic_hl_pane_g3

0x25ac,	// (0x000025ac) list_single_graphic_hl_pane_g4_ParamLimits

0x25ac,	// (0x000025ac) list_single_graphic_hl_pane_g4

0xda72,	// (0x0000da72) list_single_graphic_hl_pane_g5_ParamLimits

0xda72,	// (0x0000da72) list_single_graphic_hl_pane_g5

0x0004,

0xf4d8,	// (0x0000f4d8) list_single_graphic_hl_pane_g_ParamLimits

0xf4d8,	// (0x0000f4d8) list_single_graphic_hl_pane_g

0xda86,	// (0x0000da86) list_single_graphic_hl_pane_t1_ParamLimits

0xda86,	// (0x0000da86) list_single_graphic_hl_pane_t1

0x73d8,	// (0x000073d8) aid_size_min_hl_cp2

0x73e1,	// (0x000073e1) list_highlight_pane_cp34_cp2_ParamLimits

0x73e1,	// (0x000073e1) list_highlight_pane_cp34_cp2

0x7395,	// (0x00007395) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7395,	// (0x00007395) list_single_graphic_hl_pane_g1_cp2

0x73ee,	// (0x000073ee) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x73ee,	// (0x000073ee) list_single_graphic_hl_pane_g2_cp2

0x73fa,	// (0x000073fa) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x73fa,	// (0x000073fa) list_single_graphic_hl_pane_g3_cp2

0x57f5,	// (0x000057f5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x57f5,	// (0x000057f5) list_single_graphic_hl_pane_g4_cp2

0x73ae,	// (0x000073ae) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x73ae,	// (0x000073ae) list_single_graphic_hl_pane_g5_cp2

0xc486,	// (0x0000c486) control_pane_g4_ParamLimits

0xc486,	// (0x0000c486) control_pane_g4

0x2b86,	// (0x00002b86) bg_popup_sub_pane_cp10_ParamLimits

0x66eb,	// (0x000066eb) list_choice_list_pane_ParamLimits

0x66fa,	// (0x000066fa) scroll_pane_cp23

0x083b,	// (0x0000083b) bg_popup_preview_window_pane_cp02_ParamLimits

0x6faa,	// (0x00006faa) list_preview_fixed_pane_ParamLimits

0x6fc0,	// (0x00006fc0) list_preview_fixed_pane_cp_ParamLimits

0x6fc0,	// (0x00006fc0) list_preview_fixed_pane_cp

0x6fcc,	// (0x00006fcc) popup_preview_fixed_window_g1_ParamLimits

0x6fcc,	// (0x00006fcc) popup_preview_fixed_window_g1

0x6fd8,	// (0x00006fd8) popup_preview_fixed_window_g2_ParamLimits

0x6fd8,	// (0x00006fd8) popup_preview_fixed_window_g2

0x0002,

0xb23a,	// (0x0000b23a) popup_preview_fixed_window_g_ParamLimits

0xb23a,	// (0x0000b23a) popup_preview_fixed_window_g

0x19d4,	// (0x000019d4) aid_navi_side_left_pane_ParamLimits

0x19e9,	// (0x000019e9) aid_navi_side_right_pane_ParamLimits

0x1a01,	// (0x00001a01) navi_icon_pane_stacon_ParamLimits

0x1a15,	// (0x00001a15) navi_navi_pane_stacon_ParamLimits

0x1a01,	// (0x00001a01) navi_text_pane_stacon_ParamLimits

0x0024,	// (0x00000024) main_text_info_pane

0x741e,	// (0x0000741e) listscroll_text_info_pane

0x7426,	// (0x00007426) list_text_info_pane_ParamLimits

0x7426,	// (0x00007426) list_text_info_pane

0x7435,	// (0x00007435) scroll_pane_cp24_ParamLimits

0x7435,	// (0x00007435) scroll_pane_cp24

0xda9c,	// (0x0000da9c) list_text_info_pane_t1_ParamLimits

0xda9c,	// (0x0000da9c) list_text_info_pane_t1

0xc60a,	// (0x0000c60a) popup_fast_swap2_window_ParamLimits

0xc60a,	// (0x0000c60a) popup_fast_swap2_window

0x7484,	// (0x00007484) aid_size_cell_fast2

0x0024,	// (0x00000024) bg_popup_window_pane_cp17

0x3d70,	// (0x00003d70) heading_pane_cp2

0x0ab0,	// (0x00000ab0) listscroll_fast2_pane

0x748e,	// (0x0000748e) grid_fast2_pane

0x7498,	// (0x00007498) listscroll_fast2_pane_g1

0x74a0,	// (0x000074a0) listscroll_fast2_pane_g2

0x0001,

0xb2b6,	// (0x0000b2b6) listscroll_fast2_pane_g

0x16a6,	// (0x000016a6) scroll_pane_cp26

0x74aa,	// (0x000074aa) cell_fast2_pane_ParamLimits

0x74aa,	// (0x000074aa) cell_fast2_pane

0x74bf,	// (0x000074bf) cell_fast2_pane_g1

0x74c8,	// (0x000074c8) cell_fast2_pane_g2

0x74d1,	// (0x000074d1) cell_fast2_pane_g3

0x0002,

0xb2bb,	// (0x0000b2bb) cell_fast2_pane_g

0x0ba3,	// (0x00000ba3) grid_highlight_pane_cp9

0x0bb8,	// (0x00000bb8) main_eswt_pane_ParamLimits

0x0bb8,	// (0x00000bb8) main_eswt_pane

0x744a,	// (0x0000744a) list_single_text_info_pane

0x74d9,	// (0x000074d9) eswt_ctrl_button_pane

0x74d9,	// (0x000074d9) eswt_ctrl_canvas_pane

0x74e1,	// (0x000074e1) eswt_ctrl_combo_pane

0x74d9,	// (0x000074d9) eswt_ctrl_default_pane

0x74d9,	// (0x000074d9) eswt_ctrl_label_pane

0x74e9,	// (0x000074e9) eswt_ctrl_wait_pane

0x74f1,	// (0x000074f1) eswt_shell_pane

0x0024,	// (0x00000024) listscroll_eswt_app_pane

0x7511,	// (0x00007511) popup_eswt_tasktip_window_ParamLimits

0x7511,	// (0x00007511) popup_eswt_tasktip_window

0x38bf,	// (0x000038bf) bg_popup_window_pane_cp18

0x7522,	// (0x00007522) eswt_control_pane_g1_ParamLimits

0x7522,	// (0x00007522) eswt_control_pane_g1

0x752f,	// (0x0000752f) eswt_control_pane_g2_ParamLimits

0x752f,	// (0x0000752f) eswt_control_pane_g2

0x753c,	// (0x0000753c) eswt_control_pane_g3_ParamLimits

0x753c,	// (0x0000753c) eswt_control_pane_g3

0x7549,	// (0x00007549) eswt_control_pane_g4_ParamLimits

0x7549,	// (0x00007549) eswt_control_pane_g4

0x0003,

0xb2c2,	// (0x0000b2c2) eswt_control_pane_g_ParamLimits

0xb2c2,	// (0x0000b2c2) eswt_control_pane_g

0x13c2,	// (0x000013c2) bg_button_pane_ParamLimits

0x13c2,	// (0x000013c2) bg_button_pane

0x0bb8,	// (0x00000bb8) common_borders_pane_copy2_ParamLimits

0x0bb8,	// (0x00000bb8) common_borders_pane_copy2

0x7556,	// (0x00007556) control_button_pane_g1_ParamLimits

0x7556,	// (0x00007556) control_button_pane_g1

0x7562,	// (0x00007562) control_button_pane_g2_ParamLimits

0x7562,	// (0x00007562) control_button_pane_g2

0x756e,	// (0x0000756e) control_button_pane_g3_ParamLimits

0x756e,	// (0x0000756e) control_button_pane_g3

0x0002,

0xb2cb,	// (0x0000b2cb) control_button_pane_g_ParamLimits

0xb2cb,	// (0x0000b2cb) control_button_pane_g

0x7582,	// (0x00007582) control_button_pane_t1

0x7590,	// (0x00007590) control_button_pane_t2

0x0001,

0xb2d2,	// (0x0000b2d2) control_button_pane_t

0x3711,	// (0x00003711) bg_button_pane_g1

0x3719,	// (0x00003719) bg_button_pane_g2

0x3721,	// (0x00003721) bg_button_pane_g3

0x3729,	// (0x00003729) bg_button_pane_g4

0x3731,	// (0x00003731) bg_button_pane_g5

0x3739,	// (0x00003739) bg_button_pane_g6

0x3741,	// (0x00003741) bg_button_pane_g7

0x3749,	// (0x00003749) bg_button_pane_g8

0x3751,	// (0x00003751) bg_button_pane_g9

0x0008,

0xaf2f,	// (0x0000af2f) bg_button_pane_g

0x66a6,	// (0x000066a6) common_borders_pane_ParamLimits

0x66a6,	// (0x000066a6) common_borders_pane

0x7522,	// (0x00007522) eswt_control_pane_g1_copy1_ParamLimits

0x7522,	// (0x00007522) eswt_control_pane_g1_copy1

0x752f,	// (0x0000752f) eswt_control_pane_g2_copy1_ParamLimits

0x752f,	// (0x0000752f) eswt_control_pane_g2_copy1

0x753c,	// (0x0000753c) eswt_control_pane_g3_copy1_ParamLimits

0x753c,	// (0x0000753c) eswt_control_pane_g3_copy1

0x7549,	// (0x00007549) eswt_control_pane_g4_copy1_ParamLimits

0x7549,	// (0x00007549) eswt_control_pane_g4_copy1

0x66e1,	// (0x000066e1) bg_eswt_ctrl_canvas_pane_g1

0x66a6,	// (0x000066a6) common_borders_pane_cp2_ParamLimits

0x66a6,	// (0x000066a6) common_borders_pane_cp2

0x66a6,	// (0x000066a6) common_borders_pane_cp3_ParamLimits

0x66a6,	// (0x000066a6) common_borders_pane_cp3

0x759e,	// (0x0000759e) separator_horizontal_pane

0x75a6,	// (0x000075a6) separator_vertical_pane

0x7522,	// (0x00007522) eswt_control_pane_g1_copy2_ParamLimits

0x7522,	// (0x00007522) eswt_control_pane_g1_copy2

0x752f,	// (0x0000752f) eswt_control_pane_g2_copy2_ParamLimits

0x752f,	// (0x0000752f) eswt_control_pane_g2_copy2

0x753c,	// (0x0000753c) eswt_control_pane_g3_copy2_ParamLimits

0x753c,	// (0x0000753c) eswt_control_pane_g3_copy2

0x7549,	// (0x00007549) eswt_control_pane_g4_copy2_ParamLimits

0x7549,	// (0x00007549) eswt_control_pane_g4_copy2

0x0024,	// (0x00000024) common_borders_pane_cp4

0x75af,	// (0x000075af) separator_horizontal_pane_g1

0x75b8,	// (0x000075b8) separator_horizontal_pane_g2

0x75c1,	// (0x000075c1) separator_horizontal_pane_g3

0x0002,

0xb2d7,	// (0x0000b2d7) separator_horizontal_pane_g

0x7522,	// (0x00007522) eswt_control_pane_g1_copy3_ParamLimits

0x7522,	// (0x00007522) eswt_control_pane_g1_copy3

0x752f,	// (0x0000752f) eswt_control_pane_g2_copy3_ParamLimits

0x752f,	// (0x0000752f) eswt_control_pane_g2_copy3

0x753c,	// (0x0000753c) eswt_control_pane_g3_copy3_ParamLimits

0x753c,	// (0x0000753c) eswt_control_pane_g3_copy3

0x7549,	// (0x00007549) eswt_control_pane_g4_copy3_ParamLimits

0x7549,	// (0x00007549) eswt_control_pane_g4_copy3

0x0024,	// (0x00000024) common_borders_pane_cp5

0x75ca,	// (0x000075ca) separator_vertical_pane_g1

0x75d3,	// (0x000075d3) separator_vertical_pane_g2

0x75dc,	// (0x000075dc) separator_vertical_pane_g3

0x0002,

0xb2de,	// (0x0000b2de) separator_vertical_pane_g

0x7522,	// (0x00007522) eswt_control_pane_g1_copy4_ParamLimits

0x7522,	// (0x00007522) eswt_control_pane_g1_copy4

0x752f,	// (0x0000752f) eswt_control_pane_g2_copy4_ParamLimits

0x752f,	// (0x0000752f) eswt_control_pane_g2_copy4

0x753c,	// (0x0000753c) eswt_control_pane_g3_copy4_ParamLimits

0x753c,	// (0x0000753c) eswt_control_pane_g3_copy4

0x7549,	// (0x00007549) eswt_control_pane_g4_copy4_ParamLimits

0x7549,	// (0x00007549) eswt_control_pane_g4_copy4

0xdab7,	// (0x0000dab7) eswt_ctrl_combo_button_pane

0xdabf,	// (0x0000dabf) eswt_ctrl_input_pane

0xdac7,	// (0x0000dac7) popup_choice_list_window_cp70

0xdacf,	// (0x0000dacf) eswt_ctrl_input_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp70

0x66a6,	// (0x000066a6) bg_button_pane_cp70_ParamLimits

0x66a6,	// (0x000066a6) bg_button_pane_cp70

0xdadd,	// (0x0000dadd) eswt_ctrl_combo_button_pane_g1

0x7613,	// (0x00007613) wait_bar_pane_cp70

0x38bf,	// (0x000038bf) bg_popup_window_pane_cp70_ParamLimits

0x38bf,	// (0x000038bf) bg_popup_window_pane_cp70

0x761b,	// (0x0000761b) popup_eswt_tasktip_window_t1

0x7631,	// (0x00007631) wait_bar_pane_cp71_ParamLimits

0x7631,	// (0x00007631) wait_bar_pane_cp71

0x763d,	// (0x0000763d) grid_eswt_app_pane

0x1b93,	// (0x00001b93) scroll_pane_cp70

0xdae5,	// (0x0000dae5) cell_eswt_app_pane_ParamLimits

0xdae5,	// (0x0000dae5) cell_eswt_app_pane

0xdb0f,	// (0x0000db0f) cell_eswt_app_pane_g1_ParamLimits

0xdb0f,	// (0x0000db0f) cell_eswt_app_pane_g1

0xdb3e,	// (0x0000db3e) cell_eswt_app_pane_g2_ParamLimits

0xdb3e,	// (0x0000db3e) cell_eswt_app_pane_g2

0x0001,

0xf4e3,	// (0x0000f4e3) cell_eswt_app_pane_g_ParamLimits

0xf4e3,	// (0x0000f4e3) cell_eswt_app_pane_g

0xdb67,	// (0x0000db67) cell_eswt_app_pane_t1_ParamLimits

0xdb67,	// (0x0000db67) cell_eswt_app_pane_t1

0x7700,	// (0x00007700) grid_highlight_pane_cp70_ParamLimits

0x7700,	// (0x00007700) grid_highlight_pane_cp70

0x2510,	// (0x00002510) set_content_pane_g1

0xc418,	// (0x0000c418) status_small_volume_pane

0x770c,	// (0x0000770c) status_small_volume_pane_g1

0x7714,	// (0x00007714) volume_small2_pane

0x771d,	// (0x0000771d) volume_small2_pane_g1

0x7726,	// (0x00007726) volume_small2_pane_g2

0x772f,	// (0x0000772f) volume_small2_pane_g3

0x7738,	// (0x00007738) volume_small2_pane_g4

0x7741,	// (0x00007741) volume_small2_pane_g5

0x774a,	// (0x0000774a) volume_small2_pane_g6

0x7753,	// (0x00007753) volume_small2_pane_g7

0x775c,	// (0x0000775c) volume_small2_pane_g8

0x7765,	// (0x00007765) volume_small2_pane_g9

0x776e,	// (0x0000776e) volume_small2_pane_g10

0x0009,

0xb2ea,	// (0x0000b2ea) volume_small2_pane_g

0x6cbb,	// (0x00006cbb) fep_vkb_top_text_pane_g1_ParamLimits

0xda0e,	// (0x0000da0e) fep_vkb_top_text_pane_t1_ParamLimits

0x6fe4,	// (0x00006fe4) popup_preview_fixed_window_g3_ParamLimits

0x6fe4,	// (0x00006fe4) popup_preview_fixed_window_g3

0xcc2d,	// (0x0000cc2d) popup_toolbar_trans_pane

0xd365,	// (0x0000d365) aid_height_set_list_ParamLimits

0x4f3a,	// (0x00004f3a) aid_size_parent_ParamLimits

0x2b86,	// (0x00002b86) list_highlight_pane_cp2_ParamLimits

0x2510,	// (0x00002510) set_content_pane_g1_ParamLimits

0xd51e,	// (0x0000d51e) list_single_image_pane_ParamLimits

0xd51e,	// (0x0000d51e) list_single_image_pane

0xdb99,	// (0x0000db99) aid_size_cell_image_ParamLimits

0xdb99,	// (0x0000db99) aid_size_cell_image

0xdba6,	// (0x0000dba6) grid_single_image_pane_ParamLimits

0xdba6,	// (0x0000dba6) grid_single_image_pane

0x37d6,	// (0x000037d6) list_single_image_pane_g1_ParamLimits

0x37d6,	// (0x000037d6) list_single_image_pane_g1

0x7790,	// (0x00007790) list_single_image_pane_g2_ParamLimits

0x7790,	// (0x00007790) list_single_image_pane_g2

0x0001,

0xb2ff,	// (0x0000b2ff) list_single_image_pane_g_ParamLimits

0xb2ff,	// (0x0000b2ff) list_single_image_pane_g

0x77a4,	// (0x000077a4) list_single_image_pane_t1_ParamLimits

0x77a4,	// (0x000077a4) list_single_image_pane_t1

0xdbb4,	// (0x0000dbb4) cell_image_list_pane_ParamLimits

0xdbb4,	// (0x0000dbb4) cell_image_list_pane

0xdbca,	// (0x0000dbca) cell_image_list_pane_g1

0xdbd3,	// (0x0000dbd3) cell_image_list_pane_g2

0x0001,

0xf4e8,	// (0x0000f4e8) cell_image_list_pane_g

0x77e0,	// (0x000077e0) aid_size_cell_tb_trans_pane

0x13c2,	// (0x000013c2) bg_tb_trans_pane

0x77f2,	// (0x000077f2) grid_tb_trans_pane

0x3711,	// (0x00003711) bg_tb_trans_pane_g1

0x3719,	// (0x00003719) bg_tb_trans_pane_g2

0x3721,	// (0x00003721) bg_tb_trans_pane_g3

0x3729,	// (0x00003729) bg_tb_trans_pane_g4

0x3731,	// (0x00003731) bg_tb_trans_pane_g5

0x3749,	// (0x00003749) bg_tb_trans_pane_g6

0x3751,	// (0x00003751) bg_tb_trans_pane_g7

0x3739,	// (0x00003739) bg_tb_trans_pane_g8

0x3741,	// (0x00003741) bg_tb_trans_pane_g9

0x0008,

0xb309,	// (0x0000b309) bg_tb_trans_pane_g

0x7806,	// (0x00007806) cell_toolbar_trans_pane_ParamLimits

0x7806,	// (0x00007806) cell_toolbar_trans_pane

0x66e1,	// (0x000066e1) cell_toolbar_trans_pane_g1

0xd778,	// (0x0000d778) list_form2_midp_pane_t1

0xd786,	// (0x0000d786) list_form2_midp_pane_t2

0x0001,

0xf4b3,	// (0x0000f4b3) list_form2_midp_pane_t

0x6283,	// (0x00006283) scroll_pane_cp51_ParamLimits

0x648e,	// (0x0000648e) form2_midp_wait_pane_g1

0x6497,	// (0x00006497) form2_midp_wait_pane_g2

0x64a0,	// (0x000064a0) form2_midp_wait_pane_g3

0x0002,

0xb1c7,	// (0x0000b1c7) form2_midp_wait_pane_g

0x0507,	// (0x00000507) list_highlight_pane_cp21_ParamLimits

0x64ec,	// (0x000064ec) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x64fb,	// (0x000064fb) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5140,	// (0x00005140) list_single_2graphic_im_pane_ParamLimits

0x5140,	// (0x00005140) list_single_2graphic_im_pane

0xdbdc,	// (0x0000dbdc) list_single_2graphic_im_pane_g1_ParamLimits

0xdbdc,	// (0x0000dbdc) list_single_2graphic_im_pane_g1

0xdbed,	// (0x0000dbed) list_single_2graphic_im_pane_g2_ParamLimits

0xdbed,	// (0x0000dbed) list_single_2graphic_im_pane_g2

0xdbf9,	// (0x0000dbf9) list_single_2graphic_im_pane_g3_ParamLimits

0xdbf9,	// (0x0000dbf9) list_single_2graphic_im_pane_g3

0x0003,

0xf4ed,	// (0x0000f4ed) list_single_2graphic_im_pane_g_ParamLimits

0xf4ed,	// (0x0000f4ed) list_single_2graphic_im_pane_g

0xdc0d,	// (0x0000dc0d) list_single_2graphic_im_pane_t1_ParamLimits

0xdc0d,	// (0x0000dc0d) list_single_2graphic_im_pane_t1

0x6ff0,	// (0x00006ff0) list_single_graphic_2heading_pane_fp_ParamLimits

0x6ff0,	// (0x00006ff0) list_single_graphic_2heading_pane_fp

0x7034,	// (0x00007034) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7034,	// (0x00007034) list_single_graphic_2heading_pane_fp_g1

0x7005,	// (0x00007005) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7005,	// (0x00007005) list_single_graphic_2heading_pane_fp_g2

0x100b,	// (0x0000100b) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x100b,	// (0x0000100b) list_single_graphic_2heading_pane_fp_g3

0x13e8,	// (0x000013e8) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x13e8,	// (0x000013e8) list_single_graphic_2heading_pane_fp_g4

0x7011,	// (0x00007011) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7011,	// (0x00007011) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xb24a,	// (0x0000b24a) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xb24a,	// (0x0000b24a) list_single_graphic_2heading_pane_fp_g

0x789a,	// (0x0000789a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x789a,	// (0x0000789a) list_single_graphic_2heading_pane_fp_t1

0x706c,	// (0x0000706c) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x706c,	// (0x0000706c) list_single_graphic_2heading_pane_fp_t2

0x78b0,	// (0x000078b0) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x78b0,	// (0x000078b0) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xb325,	// (0x0000b325) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xb325,	// (0x0000b325) list_single_graphic_2heading_pane_fp_t

0x690b,	// (0x0000690b) fep_hwr_write_pane_g5_ParamLimits

0x690b,	// (0x0000690b) fep_hwr_write_pane_g5

0x6917,	// (0x00006917) fep_hwr_write_pane_g6_ParamLimits

0x6917,	// (0x00006917) fep_hwr_write_pane_g6

0x74f1,	// (0x000074f1) eswt_shell_pane_ParamLimits

0x38bf,	// (0x000038bf) bg_popup_window_pane_cp18_ParamLimits

0x4de2,	// (0x00004de2) heading_pane_cp70

0x761b,	// (0x0000761b) popup_eswt_tasktip_window_t1_ParamLimits

0xccf5,	// (0x0000ccf5) aid_touch_tab_arrow_left

0xcd0b,	// (0x0000cd0b) aid_touch_tab_arrow_right

0xb824,	// (0x0000b824) title_pane_g3_ParamLimits

0xb824,	// (0x0000b824) title_pane_g3

0x12a1,	// (0x000012a1) set_value_pane_g1

0xcc2d,	// (0x0000cc2d) popup_toolbar_trans_pane_ParamLimits

0x77e0,	// (0x000077e0) aid_size_cell_tb_trans_pane_ParamLimits

0x13c2,	// (0x000013c2) bg_tb_trans_pane_ParamLimits

0x77f2,	// (0x000077f2) grid_tb_trans_pane_ParamLimits

0x083b,	// (0x0000083b) cont_note_pane_ParamLimits

0x083b,	// (0x0000083b) cont_note_pane

0x0bb8,	// (0x00000bb8) cont_snote2_single_text_pane_ParamLimits

0x0bb8,	// (0x00000bb8) cont_snote2_single_text_pane

0x0bb8,	// (0x00000bb8) cont_snote2_single_graphic_pane_ParamLimits

0x0bb8,	// (0x00000bb8) cont_snote2_single_graphic_pane

0x3f97,	// (0x00003f97) cont_note_wait_pane_ParamLimits

0x3f97,	// (0x00003f97) cont_note_wait_pane

0x3f97,	// (0x00003f97) cont_note_image_pane_ParamLimits

0x3f97,	// (0x00003f97) cont_note_image_pane

0x78c6,	// (0x000078c6) popup_note2_window_g1_ParamLimits

0x78c6,	// (0x000078c6) popup_note2_window_g1

0x78f7,	// (0x000078f7) popup_note2_window_t1_ParamLimits

0x78f7,	// (0x000078f7) popup_note2_window_t1

0x793c,	// (0x0000793c) popup_note2_window_t2_ParamLimits

0x793c,	// (0x0000793c) popup_note2_window_t2

0x7981,	// (0x00007981) popup_note2_window_t3_ParamLimits

0x7981,	// (0x00007981) popup_note2_window_t3

0x79c6,	// (0x000079c6) popup_note2_window_t4_ParamLimits

0x79c6,	// (0x000079c6) popup_note2_window_t4

0x08bf,	// (0x000008bf) popup_note2_window_t5_ParamLimits

0x08bf,	// (0x000008bf) popup_note2_window_t5

0x0004,

0xb331,	// (0x0000b331) popup_note2_window_t_ParamLimits

0xb331,	// (0x0000b331) popup_note2_window_t

0x79f5,	// (0x000079f5) popup_note2_image_window_g1_ParamLimits

0x79f5,	// (0x000079f5) popup_note2_image_window_g1

0x7a01,	// (0x00007a01) popup_note2_image_window_g2_ParamLimits

0x7a01,	// (0x00007a01) popup_note2_image_window_g2

0x0001,

0xb33c,	// (0x0000b33c) popup_note2_image_window_g_ParamLimits

0xb33c,	// (0x0000b33c) popup_note2_image_window_g

0x7a13,	// (0x00007a13) popup_note2_image_window_t1_ParamLimits

0x7a13,	// (0x00007a13) popup_note2_image_window_t1

0x7a2b,	// (0x00007a2b) popup_note2_image_window_t2_ParamLimits

0x7a2b,	// (0x00007a2b) popup_note2_image_window_t2

0x7a43,	// (0x00007a43) popup_note2_image_window_t3_ParamLimits

0x7a43,	// (0x00007a43) popup_note2_image_window_t3

0x0002,

0xb341,	// (0x0000b341) popup_note2_image_window_t_ParamLimits

0xb341,	// (0x0000b341) popup_note2_image_window_t

0x3fa5,	// (0x00003fa5) popup_note2_wait_window_g1_ParamLimits

0x3fa5,	// (0x00003fa5) popup_note2_wait_window_g1

0x7a5f,	// (0x00007a5f) popup_note2_wait_window_g2_ParamLimits

0x7a5f,	// (0x00007a5f) popup_note2_wait_window_g2

0x3fbd,	// (0x00003fbd) popup_note2_wait_window_g3_ParamLimits

0x3fbd,	// (0x00003fbd) popup_note2_wait_window_g3

0x0002,

0xb348,	// (0x0000b348) popup_note2_wait_window_g_ParamLimits

0xb348,	// (0x0000b348) popup_note2_wait_window_g

0x7a6b,	// (0x00007a6b) popup_note2_wait_window_t1_ParamLimits

0x7a6b,	// (0x00007a6b) popup_note2_wait_window_t1

0x7a89,	// (0x00007a89) popup_note2_wait_window_t2_ParamLimits

0x7a89,	// (0x00007a89) popup_note2_wait_window_t2

0x7aa7,	// (0x00007aa7) popup_note2_wait_window_t3_ParamLimits

0x7aa7,	// (0x00007aa7) popup_note2_wait_window_t3

0x7ab9,	// (0x00007ab9) popup_note2_wait_window_t4_ParamLimits

0x7ab9,	// (0x00007ab9) popup_note2_wait_window_t4

0x0003,

0xb34f,	// (0x0000b34f) popup_note2_wait_window_t_ParamLimits

0xb34f,	// (0x0000b34f) popup_note2_wait_window_t

0x7acb,	// (0x00007acb) wait_bar2_pane_ParamLimits

0x7acb,	// (0x00007acb) wait_bar2_pane

0x7ae3,	// (0x00007ae3) popup_snote2_single_text_window_g1_ParamLimits

0x7ae3,	// (0x00007ae3) popup_snote2_single_text_window_g1

0x7b0b,	// (0x00007b0b) popup_snote2_single_text_window_t1_ParamLimits

0x7b0b,	// (0x00007b0b) popup_snote2_single_text_window_t1

0x7b57,	// (0x00007b57) popup_snote2_single_text_window_t2_ParamLimits

0x7b57,	// (0x00007b57) popup_snote2_single_text_window_t2

0x7ba3,	// (0x00007ba3) popup_snote2_single_text_window_t3_ParamLimits

0x7ba3,	// (0x00007ba3) popup_snote2_single_text_window_t3

0x7be4,	// (0x00007be4) popup_snote2_single_text_window_t4_ParamLimits

0x7be4,	// (0x00007be4) popup_snote2_single_text_window_t4

0x7c1a,	// (0x00007c1a) popup_snote2_single_text_window_t5_ParamLimits

0x7c1a,	// (0x00007c1a) popup_snote2_single_text_window_t5

0x0004,

0xb358,	// (0x0000b358) popup_snote2_single_text_window_t_ParamLimits

0xb358,	// (0x0000b358) popup_snote2_single_text_window_t

0x7c45,	// (0x00007c45) popup_snote2_single_graphic_window_g1_ParamLimits

0x7c45,	// (0x00007c45) popup_snote2_single_graphic_window_g1

0x7c6d,	// (0x00007c6d) popup_snote2_single_graphic_window_g2_ParamLimits

0x7c6d,	// (0x00007c6d) popup_snote2_single_graphic_window_g2

0x0001,

0xb363,	// (0x0000b363) popup_snote2_single_graphic_window_g_ParamLimits

0xb363,	// (0x0000b363) popup_snote2_single_graphic_window_g

0x7c95,	// (0x00007c95) popup_snote2_single_graphic_window_t1_ParamLimits

0x7c95,	// (0x00007c95) popup_snote2_single_graphic_window_t1

0x7ce1,	// (0x00007ce1) popup_snote2_single_graphic_window_t2_ParamLimits

0x7ce1,	// (0x00007ce1) popup_snote2_single_graphic_window_t2

0x7ba3,	// (0x00007ba3) popup_snote2_single_graphic_window_t3_ParamLimits

0x7ba3,	// (0x00007ba3) popup_snote2_single_graphic_window_t3

0x7be4,	// (0x00007be4) popup_snote2_single_graphic_window_t4_ParamLimits

0x7be4,	// (0x00007be4) popup_snote2_single_graphic_window_t4

0x7c1a,	// (0x00007c1a) popup_snote2_single_graphic_window_t5_ParamLimits

0x7c1a,	// (0x00007c1a) popup_snote2_single_graphic_window_t5

0x0004,

0xb368,	// (0x0000b368) popup_snote2_single_graphic_window_t_ParamLimits

0xb368,	// (0x0000b368) popup_snote2_single_graphic_window_t

0x60f3,	// (0x000060f3) clock_nsta_pane_cp2_t1

0x60f3,	// (0x000060f3) clock_nsta_pane_cp2_t2

0x0001,

0xb188,	// (0x0000b188) clock_nsta_pane_cp2_t

0x13dc,	// (0x000013dc) form_field_data_wide_pane_g1_ParamLimits

0x100b,	// (0x0000100b) form_field_data_wide_pane_g2_ParamLimits

0x100b,	// (0x0000100b) form_field_data_wide_pane_g2

0x13e8,	// (0x000013e8) form_field_data_wide_pane_g3_ParamLimits

0x13e8,	// (0x000013e8) form_field_data_wide_pane_g3

0x0002,

0xad4b,	// (0x0000ad4b) form_field_data_wide_pane_g_ParamLimits

0xad4b,	// (0x0000ad4b) form_field_data_wide_pane_g

0xd6bb,	// (0x0000d6bb) grid_touch_3_pane_ParamLimits

0xd6bb,	// (0x0000d6bb) grid_touch_3_pane

0xdc3e,	// (0x0000dc3e) cell_touch_3_pane_ParamLimits

0xdc3e,	// (0x0000dc3e) cell_touch_3_pane

0x66e1,	// (0x000066e1) cell_touch_3_pane_g1

0x66e1,	// (0x000066e1) cell_touch_3_pane_g2

0x0001,

0xb20d,	// (0x0000b20d) cell_touch_3_pane_g

0x0917,	// (0x00000917) cont_query_data_pane

0x091f,	// (0x0000091f) cont_query_data_pane_cp1

0x7d5b,	// (0x00007d5b) button_value_adjust_pane_cp7

0x7d63,	// (0x00007d63) query_popup_pane_cp3

0x1eeb,	// (0x00001eeb) bg_popup_sub_pane_cp22_ParamLimits

0x1f01,	// (0x00001f01) navi_navi_volume_pane_cp2

0x1f1c,	// (0x00001f1c) popup_side_volume_key_window_g2

0x1f2b,	// (0x00001f2b) popup_side_volume_key_window_g3

0x0002,

0xade1,	// (0x0000ade1) popup_side_volume_key_window_g

0x1f48,	// (0x00001f48) popup_side_volume_key_window_t2

0x0001,

0xade8,	// (0x0000ade8) popup_side_volume_key_window_t

0x23cf,	// (0x000023cf) popup_side_volume_key_window_ParamLimits

0xbc72,	// (0x0000bc72) list_double_graphic_pane_g4_ParamLimits

0xbc72,	// (0x0000bc72) list_double_graphic_pane_g4

0xd4fa,	// (0x0000d4fa) list_single_2heading_msg_pane_ParamLimits

0xd4fa,	// (0x0000d4fa) list_single_2heading_msg_pane

0xdc86,	// (0x0000dc86) list_single_2heading_msg_pane_g1_ParamLimits

0xdc86,	// (0x0000dc86) list_single_2heading_msg_pane_g1

0xdc92,	// (0x0000dc92) list_single_2heading_msg_pane_g2_ParamLimits

0xdc92,	// (0x0000dc92) list_single_2heading_msg_pane_g2

0xdca5,	// (0x0000dca5) list_single_2heading_msg_pane_g3_ParamLimits

0xdca5,	// (0x0000dca5) list_single_2heading_msg_pane_g3

0xdcb1,	// (0x0000dcb1) list_single_2heading_msg_pane_g4_ParamLimits

0xdcb1,	// (0x0000dcb1) list_single_2heading_msg_pane_g4

0x0003,

0xf4f6,	// (0x0000f4f6) list_single_2heading_msg_pane_g_ParamLimits

0xf4f6,	// (0x0000f4f6) list_single_2heading_msg_pane_g

0xdcc9,	// (0x0000dcc9) list_single_2heading_msg_pane_t1_ParamLimits

0xdcc9,	// (0x0000dcc9) list_single_2heading_msg_pane_t1

0xdcf1,	// (0x0000dcf1) list_single_2heading_msg_pane_t2_ParamLimits

0xdcf1,	// (0x0000dcf1) list_single_2heading_msg_pane_t2

0xdd5c,	// (0x0000dd5c) list_single_2heading_msg_pane_t3_ParamLimits

0xdd5c,	// (0x0000dd5c) list_single_2heading_msg_pane_t3

0x7e46,	// (0x00007e46) list_single_2heading_msg_pane_t4_ParamLimits

0x7e46,	// (0x00007e46) list_single_2heading_msg_pane_t4

0x0003,

0xf4ff,	// (0x0000f4ff) list_single_2heading_msg_pane_t_ParamLimits

0xf4ff,	// (0x0000f4ff) list_single_2heading_msg_pane_t

0x045b,	// (0x0000045b) title_pane_g4_ParamLimits

0x045b,	// (0x0000045b) title_pane_g4

0x18fd,	// (0x000018fd) title_pane_stacon_g3_ParamLimits

0x18fd,	// (0x000018fd) title_pane_stacon_g3

0x785d,	// (0x0000785d) list_single_2graphic_im_pane_g4_ParamLimits

0x785d,	// (0x0000785d) list_single_2graphic_im_pane_g4

0x4b5a,	// (0x00004b5a) popup_side_volume_key_window_cp

0x55db,	// (0x000055db) main_idle_act2_pane_t1

0x3759,	// (0x00003759) toolbar_button_pane_g10

0xbb2f,	// (0x0000bb2f) popup_toolbar_window_cp1

0x60e4,	// (0x000060e4) clock_nsta_pane_cp_t1

0x60e4,	// (0x000060e4) clock_nsta_pane_cp_t2

0x0001,

0xb183,	// (0x0000b183) clock_nsta_pane_cp_t

0x1f01,	// (0x00001f01) navi_navi_volume_pane_cp2_ParamLimits

0x1f10,	// (0x00001f10) popup_side_volume_key_window_g1_ParamLimits

0x1f1c,	// (0x00001f1c) popup_side_volume_key_window_g2_ParamLimits

0x1f2b,	// (0x00001f2b) popup_side_volume_key_window_g3_ParamLimits

0xade1,	// (0x0000ade1) popup_side_volume_key_window_g_ParamLimits

0x674b,	// (0x0000674b) fep_hwr_aid_pane

0x67f2,	// (0x000067f2) bg_fep_hwr_top_pane_g4_ParamLimits

0x6812,	// (0x00006812) fep_hwr_top_pane_g1_ParamLimits

0x6824,	// (0x00006824) fep_hwr_top_pane_g2_ParamLimits

0x6836,	// (0x00006836) fep_hwr_top_pane_g3_ParamLimits

0xb1d8,	// (0x0000b1d8) fep_hwr_top_pane_g_ParamLimits

0x684b,	// (0x0000684b) fep_hwr_top_text_pane_ParamLimits

0x491d,	// (0x0000491d) aid_touch_tab_arrow_arrow_2

0x4926,	// (0x00004926) aid_touch_tab_arrow_left_2

0x675f,	// (0x0000675f) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6796,	// (0x00006796) fep_hwr_prediction_pane

0x6ac3,	// (0x00006ac3) fep_vkb_prediction_pane

0xd9ee,	// (0x0000d9ee) fep_vkb_side_pane_g3_ParamLimits

0xd9ee,	// (0x0000d9ee) fep_vkb_side_pane_g3

0x6b73,	// (0x00006b73) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7229,	// (0x00007229) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7236,	// (0x00007236) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xb282,	// (0x0000b282) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7e6b,	// (0x00007e6b) fep_hwr_prediction_pane_g1

0x7e75,	// (0x00007e75) fep_hwr_prediction_pane_g2

0x7e7d,	// (0x00007e7d) fep_hwr_prediction_pane_g3

0x7e85,	// (0x00007e85) fep_hwr_prediction_pane_g4

0x0003,

0xb385,	// (0x0000b385) fep_hwr_prediction_pane_g

0x7e6b,	// (0x00007e6b) fep_vkb_prediction_pane_g1

0x7e8d,	// (0x00007e8d) fep_vkb_prediction_pane_g2

0x7e95,	// (0x00007e95) fep_vkb_prediction_pane_g3

0x7e9d,	// (0x00007e9d) fep_vkb_prediction_pane_g4

0x0003,

0xb38e,	// (0x0000b38e) fep_vkb_prediction_pane_g

0x4ea3,	// (0x00004ea3) slider_set_pane_g3

0x4eb7,	// (0x00004eb7) slider_set_pane_g4

0x4ecf,	// (0x00004ecf) slider_set_pane_g5

0x4ea3,	// (0x00004ea3) slider_set_pane_g6

0x4ee5,	// (0x00004ee5) slider_set_pane_g7

0x509f,	// (0x0000509f) slider_form_pane_g3

0x50a8,	// (0x000050a8) slider_form_pane_g4

0x50b0,	// (0x000050b0) slider_form_pane_g5

0x509f,	// (0x0000509f) slider_form_pane_g6

0xd4b0,	// (0x0000d4b0) slider_form_pane_g7

0x58e8,	// (0x000058e8) slider_set_pane_vc_g3

0x58f1,	// (0x000058f1) slider_set_pane_vc_g4

0x58fa,	// (0x000058fa) slider_set_pane_vc_g5

0x58e8,	// (0x000058e8) slider_set_pane_vc_g6

0x5903,	// (0x00005903) slider_set_pane_vc_g7

0x5dc8,	// (0x00005dc8) slider_form_pane_vc_g1

0x5dd1,	// (0x00005dd1) slider_form_pane_vc_g2

0x5dda,	// (0x00005dda) slider_form_pane_vc_g3

0x5dc8,	// (0x00005dc8) slider_form_pane_vc_g4

0x5de3,	// (0x00005de3) slider_form_pane_vc_g5

0x0004,

0xb155,	// (0x0000b155) slider_form_pane_vc_g

0x0024,	// (0x00000024) main_idle_act3_pane

0x7ea5,	// (0x00007ea5) ai3_links_pane

0xddca,	// (0x0000ddca) popup_ai3_data_window_ParamLimits

0xddca,	// (0x0000ddca) popup_ai3_data_window

0x0024,	// (0x00000024) grid_ai3_links_pane

0xdde4,	// (0x0000dde4) cell_ai3_links_pane_ParamLimits

0xdde4,	// (0x0000dde4) cell_ai3_links_pane

0x7ee0,	// (0x00007ee0) bg_popup_sub_pane_cp11

0x7eed,	// (0x00007eed) cell_ai3_links_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp12

0x7f12,	// (0x00007f12) heading_ai3_data_pane

0x7f1a,	// (0x00007f1a) list_ai3_gene_pane

0x7f26,	// (0x00007f26) popup_ai3_data_window_g1

0x7f2e,	// (0x00007f2e) heading_ai3_data_pane_g1

0x7f36,	// (0x00007f36) heading_ai3_data_pane_t1

0x7f44,	// (0x00007f44) list_double_ai3_gene_pane_ParamLimits

0x7f44,	// (0x00007f44) list_double_ai3_gene_pane

0x7f51,	// (0x00007f51) list_single_ai3_gene_pane_ParamLimits

0x7f51,	// (0x00007f51) list_single_ai3_gene_pane

0x66a6,	// (0x000066a6) list_highlight_pane_cp7_ParamLimits

0x66a6,	// (0x000066a6) list_highlight_pane_cp7

0x7f5e,	// (0x00007f5e) list_single_a13_gene_pane_t1_ParamLimits

0x7f5e,	// (0x00007f5e) list_single_a13_gene_pane_t1

0x7f75,	// (0x00007f75) list_single_ai3_gene_pane_g1

0x7f7e,	// (0x00007f7e) list_single_ai3_gene_pane_g2

0x0001,

0xb397,	// (0x0000b397) list_single_ai3_gene_pane_g

0x7f86,	// (0x00007f86) list_double_ai3_gene_pane_g1_ParamLimits

0x7f86,	// (0x00007f86) list_double_ai3_gene_pane_g1

0x7f92,	// (0x00007f92) list_double_ai3_gene_pane_t1_ParamLimits

0x7f92,	// (0x00007f92) list_double_ai3_gene_pane_t1

0x7fae,	// (0x00007fae) list_double_ai3_gene_pane_t2_ParamLimits

0x7fae,	// (0x00007fae) list_double_ai3_gene_pane_t2

0x7fc4,	// (0x00007fc4) list_double_ai3_gene_pane_t3_ParamLimits

0x7fc4,	// (0x00007fc4) list_double_ai3_gene_pane_t3

0x0002,

0xb39c,	// (0x0000b39c) list_double_ai3_gene_pane_t_ParamLimits

0xb39c,	// (0x0000b39c) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7d74,	// (0x00007d74) aid_size_min_col_2

0xdc70,	// (0x0000dc70) aid_size_min_msg_ParamLimits

0xdc70,	// (0x0000dc70) aid_size_min_msg

0xda02,	// (0x0000da02) fep_vkb_top_text_pane_g2_ParamLimits

0xda02,	// (0x0000da02) fep_vkb_top_text_pane_g2

0x0001,

0xf4d3,	// (0x0000f4d3) fep_vkb_top_text_pane_g_ParamLimits

0xf4d3,	// (0x0000f4d3) fep_vkb_top_text_pane_g

0x0024,	// (0x00000024) main_hc_apps_shell_pane

0x7fe1,	// (0x00007fe1) grid_hc_apps_pane_ParamLimits

0x7fe1,	// (0x00007fe1) grid_hc_apps_pane

0x7ff0,	// (0x00007ff0) list_hc_apps_pane

0x7ff8,	// (0x00007ff8) scroll_pane_cp37_ParamLimits

0x7ff8,	// (0x00007ff8) scroll_pane_cp37

0xddfe,	// (0x0000ddfe) cell_hc_apps_pane_ParamLimits

0xddfe,	// (0x0000ddfe) cell_hc_apps_pane

0xdebc,	// (0x0000debc) cell_hc_apps_pane_g1_ParamLimits

0xdebc,	// (0x0000debc) cell_hc_apps_pane_g1

0x80e3,	// (0x000080e3) cell_hc_apps_pane_g2_ParamLimits

0x80e3,	// (0x000080e3) cell_hc_apps_pane_g2

0x80ff,	// (0x000080ff) cell_hc_apps_pane_g3_ParamLimits

0x80ff,	// (0x000080ff) cell_hc_apps_pane_g3

0x0002,

0xf508,	// (0x0000f508) cell_hc_apps_pane_g_ParamLimits

0xf508,	// (0x0000f508) cell_hc_apps_pane_g

0xdee9,	// (0x0000dee9) cell_hc_apps_pane_t1_ParamLimits

0xdee9,	// (0x0000dee9) cell_hc_apps_pane_t1

0x083b,	// (0x0000083b) grid_highlight_pane_cp10_ParamLimits

0x083b,	// (0x0000083b) grid_highlight_pane_cp10

0xdf27,	// (0x0000df27) list_single_hc_apps_pane_ParamLimits

0xdf27,	// (0x0000df27) list_single_hc_apps_pane

0xdf54,	// (0x0000df54) list_single_hc_apps_pane_g1

0xdf6d,	// (0x0000df6d) list_single_hc_apps_pane_g2

0x0001,

0xf50f,	// (0x0000f50f) list_single_hc_apps_pane_g

0xdf86,	// (0x0000df86) list_single_hc_apps_pane_g2_copy1

0x820b,	// (0x0000820b) list_single_hc_apps_pane_t1

0x0507,	// (0x00000507) bg_set_opt_pane_cp_ParamLimits

0x0551,	// (0x00000551) setting_slider_pane_t1_ParamLimits

0x056a,	// (0x0000056a) setting_slider_pane_t2_ParamLimits

0x0584,	// (0x00000584) setting_slider_pane_t3_ParamLimits

0xac33,	// (0x0000ac33) setting_slider_pane_t_ParamLimits

0x059c,	// (0x0000059c) slider_set_pane_ParamLimits

0x2a1b,	// (0x00002a1b) control_pane_g5_ParamLimits

0x2a1b,	// (0x00002a1b) control_pane_g5

0x4e8a,	// (0x00004e8a) slider_set_pane_g1_ParamLimits

0x4e97,	// (0x00004e97) slider_set_pane_g2_ParamLimits

0x4ea3,	// (0x00004ea3) slider_set_pane_g3_ParamLimits

0x4eb7,	// (0x00004eb7) slider_set_pane_g4_ParamLimits

0x4ecf,	// (0x00004ecf) slider_set_pane_g5_ParamLimits

0x4ea3,	// (0x00004ea3) slider_set_pane_g6_ParamLimits

0x4ee5,	// (0x00004ee5) slider_set_pane_g7_ParamLimits

0xb02d,	// (0x0000b02d) slider_set_pane_g_ParamLimits

0x24bb,	// (0x000024bb) navi_icon_text_pane_ParamLimits

0xccbe,	// (0x0000ccbe) aid_fill_nsta_2_ParamLimits

0xccf5,	// (0x0000ccf5) aid_touch_tab_arrow_left_ParamLimits

0xcd0b,	// (0x0000cd0b) aid_touch_tab_arrow_right_ParamLimits

0xcda6,	// (0x0000cda6) clock_nsta_pane_ParamLimits

0x48ff,	// (0x000048ff) navi_icon_pane_g1_ParamLimits

0x490b,	// (0x0000490b) navi_text_pane_t1_ParamLimits

0x61f0,	// (0x000061f0) navi_icon_text_pane_g1_ParamLimits

0x61fc,	// (0x000061fc) navi_icon_text_pane_t1_ParamLimits

0xdf54,	// (0x0000df54) list_single_hc_apps_pane_g1_ParamLimits

0xdf6d,	// (0x0000df6d) list_single_hc_apps_pane_g2_ParamLimits

0xf50f,	// (0x0000f50f) list_single_hc_apps_pane_g_ParamLimits

0xdf86,	// (0x0000df86) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x820b,	// (0x0000820b) list_single_hc_apps_pane_t1_ParamLimits

0xb729,	// (0x0000b729) popup_toolbar2_fixed_window_ParamLimits

0xb729,	// (0x0000b729) popup_toolbar2_fixed_window

0xcc23,	// (0x0000cc23) popup_toolbar2_float_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp27

0x8239,	// (0x00008239) grid_toolbar2_float_pane

0x0024,	// (0x00000024) bg_popup_sub_pane_cp26

0x8239,	// (0x00008239) grid_toolbar2_fixed_pane

0xdfa2,	// (0x0000dfa2) cell_toolbar2_fixed_pane_ParamLimits

0xdfa2,	// (0x0000dfa2) cell_toolbar2_fixed_pane

0xdfbc,	// (0x0000dfbc) cell_toolbar2_fixed_pane_g1

0x825a,	// (0x0000825a) toolbar2_fixed_button_pane

0x3711,	// (0x00003711) toolbar2_fixed_button_pane_g1

0x3719,	// (0x00003719) toolbar2_fixed_button_pane_g2

0x3721,	// (0x00003721) toolbar2_fixed_button_pane_g3

0x3729,	// (0x00003729) toolbar2_fixed_button_pane_g4

0x3731,	// (0x00003731) toolbar2_fixed_button_pane_g5

0x3739,	// (0x00003739) toolbar2_fixed_button_pane_g6

0x3741,	// (0x00003741) toolbar2_fixed_button_pane_g7

0x3749,	// (0x00003749) toolbar2_fixed_button_pane_g8

0x3751,	// (0x00003751) toolbar2_fixed_button_pane_g9

0x0008,

0xaf2f,	// (0x0000af2f) toolbar2_fixed_button_pane_g

0x8262,	// (0x00008262) cell_toolbar2_float_pane_ParamLimits

0x8262,	// (0x00008262) cell_toolbar2_float_pane

0x8273,	// (0x00008273) cell_toolbar2_float_pane_g1

0x825a,	// (0x0000825a) toolbar2_fixed_button_pane_cp

0xd8dc,	// (0x0000d8dc) fep_vkb_accented_list_pane_ParamLimits

0xd8dc,	// (0x0000d8dc) fep_vkb_accented_list_pane

0x6eba,	// (0x00006eba) bg_popup_fep_shadow_pane_g9

0x263b,	// (0x0000263b) bg_popup_fep_shadow_pane_cp3

0x168d,	// (0x0000168d) list_accented_list_pane

0x827c,	// (0x0000827c) list_single_accented_list_pane_ParamLimits

0x827c,	// (0x0000827c) list_single_accented_list_pane

0x263b,	// (0x0000263b) list_highlight_pane_cp10

0x828d,	// (0x0000828d) list_single_accented_list_pane_t1

0xcb4d,	// (0x0000cb4d) popup_slider_window_ParamLimits

0xcb4d,	// (0x0000cb4d) popup_slider_window

0x7d6b,	// (0x00007d6b) aid_indentation_list_msg

0xe0b3,	// (0x0000e0b3) bg_popup_window_pane_cp19

0x83b9,	// (0x000083b9) popup_slider_window_g1

0x83d5,	// (0x000083d5) popup_slider_window_g2

0x83f1,	// (0x000083f1) popup_slider_window_g3

0x0005,

0xf514,	// (0x0000f514) popup_slider_window_g

0x8457,	// (0x00008457) popup_slider_window_t1

0x84cb,	// (0x000084cb) small_volume_slider_vertical_pane

0x66e1,	// (0x000066e1) small_volume_slider_vertical_pane_g1

0x66e1,	// (0x000066e1) small_volume_slider_vertical_pane_g2

0x84e7,	// (0x000084e7) small_volume_slider_vertical_pane_g3

0x0002,

0xb3c1,	// (0x0000b3c1) small_volume_slider_vertical_pane_g

0xb697,	// (0x0000b697) area_side_right_pane_ParamLimits

0xb697,	// (0x0000b697) area_side_right_pane

0xe16b,	// (0x0000e16b) aid_size_side_button_ParamLimits

0xe16b,	// (0x0000e16b) aid_size_side_button

0xe184,	// (0x0000e184) grid_sctrl_middle_pane_ParamLimits

0xe184,	// (0x0000e184) grid_sctrl_middle_pane

0x8523,	// (0x00008523) sctrl_sk_bottom_pane

0x8534,	// (0x00008534) sctrl_sk_top_pane

0x8546,	// (0x00008546) aid_touch_sctrl_top

0x083b,	// (0x0000083b) bg_sctrl_sk_pane_ParamLimits

0x083b,	// (0x0000083b) bg_sctrl_sk_pane

0x8553,	// (0x00008553) sctrl_sk_top_pane_g1

0x8560,	// (0x00008560) sctrl_sk_top_pane_t1

0x8546,	// (0x00008546) aid_touch_sctrl_bottom

0x083b,	// (0x0000083b) bg_sctrl_sk_pane_cp_ParamLimits

0x083b,	// (0x0000083b) bg_sctrl_sk_pane_cp

0x857b,	// (0x0000857b) sctrl_sk_bottom_pane_g1

0x8560,	// (0x00008560) sctrl_sk_bottom_pane_t1

0xe19e,	// (0x0000e19e) cell_sctrl_middle_pane_ParamLimits

0xe19e,	// (0x0000e19e) cell_sctrl_middle_pane

0xe1af,	// (0x0000e1af) aid_touch_sctrl_middle_ParamLimits

0xe1af,	// (0x0000e1af) aid_touch_sctrl_middle

0xe1bc,	// (0x0000e1bc) bg_sctrl_middle_pane_ParamLimits

0xe1bc,	// (0x0000e1bc) bg_sctrl_middle_pane

0x8640,	// (0x00008640) cell_sctrl_middle_pane_g1_ParamLimits

0x8640,	// (0x00008640) cell_sctrl_middle_pane_g1

0xe1ca,	// (0x0000e1ca) cell_sctrl_middle_pane_g2_ParamLimits

0xe1ca,	// (0x0000e1ca) cell_sctrl_middle_pane_g2

0x0001,

0xf521,	// (0x0000f521) cell_sctrl_middle_pane_g_ParamLimits

0xf521,	// (0x0000f521) cell_sctrl_middle_pane_g

0x3711,	// (0x00003711) bg_sctrl_middle_pane_g1

0x3719,	// (0x00003719) bg_sctrl_middle_pane_g2

0x3721,	// (0x00003721) bg_sctrl_middle_pane_g3

0x3729,	// (0x00003729) bg_sctrl_middle_pane_g4

0x3731,	// (0x00003731) bg_sctrl_middle_pane_g5

0x3739,	// (0x00003739) bg_sctrl_middle_pane_g6

0x3741,	// (0x00003741) bg_sctrl_middle_pane_g7

0x3749,	// (0x00003749) bg_sctrl_middle_pane_g8

0x0007,

0xb3d2,	// (0x0000b3d2) bg_sctrl_middle_pane_g

0x3751,	// (0x00003751) bg_sctrl_middle_pane_g8_copy1

0x3711,	// (0x00003711) bg_sctrl_sk_pane_g1

0x3719,	// (0x00003719) bg_sctrl_sk_pane_g2

0x3721,	// (0x00003721) bg_sctrl_sk_pane_g3

0x0008,

0xaf2f,	// (0x0000af2f) bg_sctrl_sk_pane_g

0x0d76,	// (0x00000d76) aid_size_touch_scroll_bar

0x3729,	// (0x00003729) bg_sctrl_sk_pane_g4

0x3731,	// (0x00003731) bg_sctrl_sk_pane_g5

0x3739,	// (0x00003739) bg_sctrl_sk_pane_g6

0x3741,	// (0x00003741) bg_sctrl_sk_pane_g7

0x3749,	// (0x00003749) bg_sctrl_sk_pane_g8

0x3751,	// (0x00003751) bg_sctrl_sk_pane_g9

0x2c68,	// (0x00002c68) popup_fep_china_hwr2_fs_candidate_window

0xc667,	// (0x0000c667) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc667,	// (0x0000c667) popup_fep_china_hwr2_fs_control_window

0x6b73,	// (0x00006b73) sctrl_sk_top_pane_g2

0x0001,

0xb3c8,	// (0x0000b3c8) sctrl_sk_top_pane_g

0xe1d6,	// (0x0000e1d6) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe1d6,	// (0x0000e1d6) aid_fep_china_hwr2_fs_cell

0xe1ea,	// (0x0000e1ea) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe1ea,	// (0x0000e1ea) bg_popup_fep_shadow_pane_cp4

0xe201,	// (0x0000e201) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe201,	// (0x0000e201) bg_popup_fep_shadow_pane_cp5

0xe213,	// (0x0000e213) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe213,	// (0x0000e213) popup_fep_china_hwr2_fs_control_bar_grid

0xe227,	// (0x0000e227) popup_fep_china_hwr2_fs_control_funtion_grid

0x8614,	// (0x00008614) aid_fep_china_hwr2_fs_candi_cell

0x0024,	// (0x00000024) bg_popup_fep_shadow_pane_cp6

0x861e,	// (0x0000861e) popup_fep_china_hwr2_fs_candidate_grid

0xe22f,	// (0x0000e22f) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe22f,	// (0x0000e22f) cell_fep_china_hwr2_fs_funtion_grid

0x66e1,	// (0x000066e1) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8640,	// (0x00008640) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8640,	// (0x00008640) cell_fep_china_hwr2_fs_funtion_grid_g1

0x864e,	// (0x0000864e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x864e,	// (0x0000864e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xb3e3,	// (0x0000b3e3) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xb3e3,	// (0x0000b3e3) cell_fep_china_hwr2_fs_funtion_grid_g

0xe247,	// (0x0000e247) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe247,	// (0x0000e247) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe25c,	// (0x0000e25c) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe25c,	// (0x0000e25c) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xf526,	// (0x0000f526) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xf526,	// (0x0000f526) cell_fep_china_hwr2_fs_funtion_grid_t

0x8695,	// (0x00008695) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x869d,	// (0x0000869d) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x86a5,	// (0x000086a5) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xb3ed,	// (0x0000b3ed) popup_fep_china_hwr2_fs_control_bar_grid_g

0x86ad,	// (0x000086ad) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x86ad,	// (0x000086ad) cell_fep_china_hwr2_fs_candidate_grid

0x86c6,	// (0x000086c6) popup_fep_china_hwr2_fs_candidate_grid_g20

0x86ce,	// (0x000086ce) popup_fep_china_hwr2_fs_candidate_grid_g21

0x66e1,	// (0x000066e1) cell_fep_china_hwr2_fs_candidate_grid_g1

0x66e1,	// (0x000066e1) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xb20d,	// (0x0000b20d) cell_fep_china_hwr2_fs_candidate_grid_g

0x86d6,	// (0x000086d6) cell_fep_china_hwr2_fs_candidate_grid_t1

0x3261,	// (0x00003261) clock_nsta_pane_cp_24_ParamLimits

0x3261,	// (0x00003261) clock_nsta_pane_cp_24

0x32df,	// (0x000032df) indicator_nsta_pane_cp_24_ParamLimits

0x32df,	// (0x000032df) indicator_nsta_pane_cp_24

0x476a,	// (0x0000476a) heading_pane_g1

0x0001,

0xaf94,	// (0x0000af94) heading_pane_g

0x536c,	// (0x0000536c) grid_sct_catagory_button_pane

0x539c,	// (0x0000539c) scroll_pane_cp5_ParamLimits

0x628f,	// (0x0000628f) button_value_adjust_pane_cp5_ParamLimits

0x628f,	// (0x0000628f) button_value_adjust_pane_cp5

0x638b,	// (0x0000638b) form2_midp_time_pane_ParamLimits

0x86e4,	// (0x000086e4) cell_sct_catagory_button_pane_ParamLimits

0x86e4,	// (0x000086e4) cell_sct_catagory_button_pane

0x66a6,	// (0x000066a6) bg_button_pane_cp01_ParamLimits

0x66a6,	// (0x000066a6) bg_button_pane_cp01

0x66e1,	// (0x000066e1) cell_sct_catagory_button_pane_g1

0xcbc6,	// (0x0000cbc6) popup_tb_extension_window

0xe278,	// (0x0000e278) aid_size_cell_ext_ParamLimits

0xe278,	// (0x0000e278) aid_size_cell_ext

0x0bb8,	// (0x00000bb8) bg_tb_trans_pane_cp1_ParamLimits

0x0bb8,	// (0x00000bb8) bg_tb_trans_pane_cp1

0xe29e,	// (0x0000e29e) grid_tb_ext_pane_ParamLimits

0xe29e,	// (0x0000e29e) grid_tb_ext_pane

0xe2d9,	// (0x0000e2d9) cell_tb_ext_pane_ParamLimits

0xe2d9,	// (0x0000e2d9) cell_tb_ext_pane

0xe301,	// (0x0000e301) cell_tb_ext_pane_g1_ParamLimits

0xe301,	// (0x0000e301) cell_tb_ext_pane_g1

0x8778,	// (0x00008778) cell_tb_ext_pane_t1

0x083b,	// (0x0000083b) list_highlight_pane_cp11_ParamLimits

0x083b,	// (0x0000083b) list_highlight_pane_cp11

0xb73e,	// (0x0000b73e) popup_uni_indicator_window_ParamLimits

0xb73e,	// (0x0000b73e) popup_uni_indicator_window

0x13c2,	// (0x000013c2) bg_popup_sub_pane_cp14

0x8793,	// (0x00008793) list_uniindi_pane

0x879f,	// (0x0000879f) uniindi_top_pane

0x083b,	// (0x0000083b) bg_uniindi_top_pane

0x87be,	// (0x000087be) uniindi_top_pane_g1

0x87d4,	// (0x000087d4) uniindi_top_pane_g2

0x0003,

0xb3f4,	// (0x0000b3f4) uniindi_top_pane_g

0x87fe,	// (0x000087fe) uniindi_top_pane_t1

0x8828,	// (0x00008828) list_single_uniindi_pane_ParamLimits

0x8828,	// (0x00008828) list_single_uniindi_pane

0x66e1,	// (0x000066e1) bg_uniindi_top_pane_g1

0x883b,	// (0x0000883b) list_single_uniindi_pane_g1

0x884e,	// (0x0000884e) list_single_uniindi_pane_t1

0x0024,	// (0x00000024) control_bg_pane

0x8873,	// (0x00008873) bg_sctrl_sk_pane_cp1

0x887c,	// (0x0000887c) bg_sctrl_sk_pane_cp2

0x8885,	// (0x00008885) control_bg_pane_g1

0x888e,	// (0x0000888e) control_bg_pane_g2

0x0001,

0xb3fd,	// (0x0000b3fd) control_bg_pane_g

0x6098,	// (0x00006098) cell_indicator_nsta_pane_g1_ParamLimits

0xd6e8,	// (0x0000d6e8) cell_indicator_nsta_pane_g2_ParamLimits

0xf49e,	// (0x0000f49e) cell_indicator_nsta_pane_g_ParamLimits

0x6413,	// (0x00006413) form2_midp_time_pane_t1_ParamLimits

0x673d,	// (0x0000673d) main_idle_act4_pane_ParamLimits

0x673d,	// (0x0000673d) main_idle_act4_pane

0xcbc6,	// (0x0000cbc6) popup_tb_extension_window_ParamLimits

0xe2c0,	// (0x0000e2c0) tb_ext_find_pane_ParamLimits

0xe2c0,	// (0x0000e2c0) tb_ext_find_pane

0x8897,	// (0x00008897) ai_gene_pane_1_cp1

0x2782,	// (0x00002782) ai_gene_pane_2_cp1

0x889f,	// (0x0000889f) list_single_idle_plugin_calendar_pane

0x88a8,	// (0x000088a8) list_single_idle_plugin_notification_pane

0x88b1,	// (0x000088b1) list_single_idle_plugin_player_pane

0xe31e,	// (0x0000e31e) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe31e,	// (0x0000e31e) list_single_idle_plugin_shortcut_pane

0xe346,	// (0x0000e346) main_idle_act4_pane_t1

0xe35c,	// (0x0000e35c) main_idle_act4_pane_t2

0x0001,

0xf52b,	// (0x0000f52b) main_idle_act4_pane_t

0xe372,	// (0x0000e372) middle_sk_idle_act4_pane_ParamLimits

0xe372,	// (0x0000e372) middle_sk_idle_act4_pane

0xe38e,	// (0x0000e38e) popup_clock_digital_analogue_window_cp2

0xe3b6,	// (0x0000e3b6) shortcut_wheel_idle_act4_pane_ParamLimits

0xe3b6,	// (0x0000e3b6) shortcut_wheel_idle_act4_pane

0x66e1,	// (0x000066e1) shortcut_wheel_idle_act4_pane_g1

0x66e1,	// (0x000066e1) shortcut_wheel_idle_act4_pane_g2

0x66e1,	// (0x000066e1) shortcut_wheel_idle_act4_pane_g3

0x66e1,	// (0x000066e1) shortcut_wheel_idle_act4_pane_g4

0x66e1,	// (0x000066e1) shortcut_wheel_idle_act4_pane_g5

0x8944,	// (0x00008944) shortcut_wheel_idle_act4_pane_g6

0x894c,	// (0x0000894c) shortcut_wheel_idle_act4_pane_g7

0x8954,	// (0x00008954) shortcut_wheel_idle_act4_pane_g8

0x895c,	// (0x0000895c) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xb407,	// (0x0000b407) shortcut_wheel_idle_act4_pane_g

0x67f2,	// (0x000067f2) middle_sk_idle_act4_pane_g1_ParamLimits

0x67f2,	// (0x000067f2) middle_sk_idle_act4_pane_g1

0xe433,	// (0x0000e433) middle_sk_idle_act4_pane_g2_ParamLimits

0xe433,	// (0x0000e433) middle_sk_idle_act4_pane_g2

0x0001,

0xf540,	// (0x0000f540) middle_sk_idle_act4_pane_g_ParamLimits

0xf540,	// (0x0000f540) middle_sk_idle_act4_pane_g

0xe44b,	// (0x0000e44b) middle_sk_idle_act4_pane_t1_ParamLimits

0xe44b,	// (0x0000e44b) middle_sk_idle_act4_pane_t1

0xe47a,	// (0x0000e47a) grid_ai_shortcut_pane_ParamLimits

0xe47a,	// (0x0000e47a) grid_ai_shortcut_pane

0xe497,	// (0x0000e497) list_highlight_pane_cp16_ParamLimits

0xe497,	// (0x0000e497) list_highlight_pane_cp16

0xe4a4,	// (0x0000e4a4) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe4a4,	// (0x0000e4a4) list_single_idle_plugin_shortcut_pane_g1

0xe4b0,	// (0x0000e4b0) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe4b0,	// (0x0000e4b0) list_single_idle_plugin_shortcut_pane_g2

0xe4cc,	// (0x0000e4cc) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe4cc,	// (0x0000e4cc) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xf545,	// (0x0000f545) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xf545,	// (0x0000f545) list_single_idle_plugin_shortcut_pane_g

0xe4e1,	// (0x0000e4e1) cell_ai_shortcut_pane_ParamLimits

0xe4e1,	// (0x0000e4e1) cell_ai_shortcut_pane

0xe4f7,	// (0x0000e4f7) cell_ai_shortcut_pane_g1_ParamLimits

0xe4f7,	// (0x0000e4f7) cell_ai_shortcut_pane_g1

0x8897,	// (0x00008897) ai_gene_pane_1_cp2

0x8a8c,	// (0x00008a8c) ai_gene_pane_2_cp2

0x8a94,	// (0x00008a94) list_highlight_pane_cp15

0x8a9d,	// (0x00008a9d) list_single_idle_plugin_calendar_pane_g1

0x8a94,	// (0x00008a94) list_highlight_pane_cp17

0x8aa5,	// (0x00008aa5) list_single_idle_plugin_calendar_pane_g1_copy1

0x8aad,	// (0x00008aad) list_single_idle_plugin_player_pane_g1

0x567d,	// (0x0000567d) list_single_idle_plugin_player_pane_g2

0x0001,

0xb436,	// (0x0000b436) list_single_idle_plugin_player_pane_g

0x8ab5,	// (0x00008ab5) list_single_idle_plugin_player_pane_t1

0x8ac3,	// (0x00008ac3) list_single_idle_plugin_player_pane_t2

0x8ad1,	// (0x00008ad1) list_single_idle_plugin_player_pane_t3

0x8adf,	// (0x00008adf) list_single_idle_plugin_player_pane_t4

0x0003,

0xb43b,	// (0x0000b43b) list_single_idle_plugin_player_pane_t

0x8aed,	// (0x00008aed) wait_bar_pane_cp15

0x8af5,	// (0x00008af5) grid_ai_notification_pane

0x567d,	// (0x0000567d) list_single_idle_plugin_notification_pane_g1

0xe519,	// (0x0000e519) cell_ai_notification_pane_ParamLimits

0xe519,	// (0x0000e519) cell_ai_notification_pane

0x8b0b,	// (0x00008b0b) cell_ai_notification_pane_g1

0x8b13,	// (0x00008b13) cell_ai_notification_pane_t1

0xe526,	// (0x0000e526) tb_ext_find_button_pane

0xe52e,	// (0x0000e52e) tb_ext_find_pane_g1

0xe536,	// (0x0000e536) tb_ext_find_pane_t1

0x1d81,	// (0x00001d81) tb_ext_find_button_pane_g1

0x8b3f,	// (0x00008b3f) tb_ext_find_button_pane_g2

0x0001,

0xb444,	// (0x0000b444) tb_ext_find_button_pane_g

0xe346,	// (0x0000e346) main_idle_act4_pane_t1_ParamLimits

0xe35c,	// (0x0000e35c) main_idle_act4_pane_t2_ParamLimits

0xf52b,	// (0x0000f52b) main_idle_act4_pane_t_ParamLimits

0xe38e,	// (0x0000e38e) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe3a6,	// (0x0000e3a6) sat_plugin_idle_act4_pane_ParamLimits

0xe3a6,	// (0x0000e3a6) sat_plugin_idle_act4_pane

0xe544,	// (0x0000e544) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe544,	// (0x0000e544) sat_plugin_idle_act4_pane_t1

0xe55c,	// (0x0000e55c) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe55c,	// (0x0000e55c) sat_plugin_idle_act4_pane_t2

0xe574,	// (0x0000e574) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe574,	// (0x0000e574) sat_plugin_idle_act4_pane_t3

0xe58c,	// (0x0000e58c) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe58c,	// (0x0000e58c) sat_plugin_idle_act4_pane_t4

0x0003,

0xf54c,	// (0x0000f54c) sat_plugin_idle_act4_pane_t_ParamLimits

0xf54c,	// (0x0000f54c) sat_plugin_idle_act4_pane_t

0x029d,	// (0x0000029d) popup_battery_window_ParamLimits

0x029d,	// (0x0000029d) popup_battery_window

0x083b,	// (0x0000083b) bg_popup_sub_pane_cp25_ParamLimits

0x083b,	// (0x0000083b) bg_popup_sub_pane_cp25

0x8b94,	// (0x00008b94) popup_battery_window_g1_ParamLimits

0x8b94,	// (0x00008b94) popup_battery_window_g1

0x8ba0,	// (0x00008ba0) popup_battery_window_t1_ParamLimits

0x8ba0,	// (0x00008ba0) popup_battery_window_t1

0x8bb2,	// (0x00008bb2) popup_battery_window_t2_ParamLimits

0x8bb2,	// (0x00008bb2) popup_battery_window_t2

0x0001,

0xb452,	// (0x0000b452) popup_battery_window_t_ParamLimits

0xb452,	// (0x0000b452) popup_battery_window_t

0xc2ea,	// (0x0000c2ea) midp_canvas_pane_ParamLimits

0xc347,	// (0x0000c347) midp_keypad_pane_ParamLimits

0xc347,	// (0x0000c347) midp_keypad_pane

0x2b86,	// (0x00002b86) main_midp_pane_ParamLimits

0x6102,	// (0x00006102) signal_pane_g2_cp_ParamLimits

0xe5a4,	// (0x0000e5a4) aid_size_cell_midp_keypad_ParamLimits

0xe5a4,	// (0x0000e5a4) aid_size_cell_midp_keypad

0xe5c2,	// (0x0000e5c2) midp_keyp_game_grid_pane_ParamLimits

0xe5c2,	// (0x0000e5c2) midp_keyp_game_grid_pane

0xe5e9,	// (0x0000e5e9) midp_keyp_rocker_pane_ParamLimits

0xe5e9,	// (0x0000e5e9) midp_keyp_rocker_pane

0xe63a,	// (0x0000e63a) midp_keyp_sk_left_pane_ParamLimits

0xe63a,	// (0x0000e63a) midp_keyp_sk_left_pane

0xe68e,	// (0x0000e68e) midp_keyp_sk_right_pane_ParamLimits

0xe68e,	// (0x0000e68e) midp_keyp_sk_right_pane

0x0024,	// (0x00000024) bg_button_pane_cp03

0xe6e2,	// (0x0000e6e2) midp_keyp_sk_left_pane_g1

0x0024,	// (0x00000024) bg_button_pane_cp04

0xe6e2,	// (0x0000e6e2) midp_keyp_sk_right_pane_g1

0x66e1,	// (0x000066e1) midp_keyp_rocker_pane_g1

0xe6eb,	// (0x0000e6eb) keyp_game_cell_pane_ParamLimits

0xe6eb,	// (0x0000e6eb) keyp_game_cell_pane

0x0024,	// (0x00000024) bg_button_pane_cp02

0xe70f,	// (0x0000e70f) keyp_game_cell_pane_g1

0xb6d9,	// (0x0000b6d9) popup_fep_vkb2_window_ParamLimits

0xb6d9,	// (0x0000b6d9) popup_fep_vkb2_window

0xe718,	// (0x0000e718) aid_size_cell_vkb2_ParamLimits

0xe718,	// (0x0000e718) aid_size_cell_vkb2

0xe74e,	// (0x0000e74e) popup_fep_vkb2_window_g1_ParamLimits

0xe74e,	// (0x0000e74e) popup_fep_vkb2_window_g1

0xe79e,	// (0x0000e79e) vkb2_area_bottom_pane_ParamLimits

0xe79e,	// (0x0000e79e) vkb2_area_bottom_pane

0xe7f2,	// (0x0000e7f2) vkb2_area_keypad_pane_ParamLimits

0xe7f2,	// (0x0000e7f2) vkb2_area_keypad_pane

0xe83a,	// (0x0000e83a) vkb2_area_top_pane_ParamLimits

0xe83a,	// (0x0000e83a) vkb2_area_top_pane

0xe8c0,	// (0x0000e8c0) vkb2_top_entry_pane_ParamLimits

0xe8c0,	// (0x0000e8c0) vkb2_top_entry_pane

0xe8ed,	// (0x0000e8ed) vkb2_top_grid_left_pane_ParamLimits

0xe8ed,	// (0x0000e8ed) vkb2_top_grid_left_pane

0xe90d,	// (0x0000e90d) vkb2_top_grid_right_pane_ParamLimits

0xe90d,	// (0x0000e90d) vkb2_top_grid_right_pane

0x8f33,	// (0x00008f33) vkb2_cell_keypad_pane_ParamLimits

0x8f33,	// (0x00008f33) vkb2_cell_keypad_pane

0xe953,	// (0x0000e953) vkb2_area_bottom_grid_pane_ParamLimits

0xe953,	// (0x0000e953) vkb2_area_bottom_grid_pane

0xe97d,	// (0x0000e97d) vkb2_area_bottom_pane_g1_ParamLimits

0xe97d,	// (0x0000e97d) vkb2_area_bottom_pane_g1

0xe9a3,	// (0x0000e9a3) vkb2_area_bottom_pane_g2_ParamLimits

0xe9a3,	// (0x0000e9a3) vkb2_area_bottom_pane_g2

0xe9d4,	// (0x0000e9d4) vkb2_area_bottom_pane_g3_ParamLimits

0xe9d4,	// (0x0000e9d4) vkb2_area_bottom_pane_g3

0x0002,

0xf555,	// (0x0000f555) vkb2_area_bottom_pane_g_ParamLimits

0xf555,	// (0x0000f555) vkb2_area_bottom_pane_g

0x90dd,	// (0x000090dd) vkb2_top_cell_left_pane_ParamLimits

0x90dd,	// (0x000090dd) vkb2_top_cell_left_pane

0xea3e,	// (0x0000ea3e) vkb2_top_entry_pane_g1_ParamLimits

0xea3e,	// (0x0000ea3e) vkb2_top_entry_pane_g1

0xea4c,	// (0x0000ea4c) vkb2_top_entry_pane_t1_ParamLimits

0xea4c,	// (0x0000ea4c) vkb2_top_entry_pane_t1

0x9145,	// (0x00009145) vkb2_top_entry_pane_t2_ParamLimits

0x9145,	// (0x00009145) vkb2_top_entry_pane_t2

0x9177,	// (0x00009177) vkb2_top_entry_pane_t3_ParamLimits

0x9177,	// (0x00009177) vkb2_top_entry_pane_t3

0x0002,

0xf55c,	// (0x0000f55c) vkb2_top_entry_pane_t_ParamLimits

0xf55c,	// (0x0000f55c) vkb2_top_entry_pane_t

0xea85,	// (0x0000ea85) vkb2_top_grid_right_pane_g1_ParamLimits

0xea85,	// (0x0000ea85) vkb2_top_grid_right_pane_g1

0x91de,	// (0x000091de) vkb2_top_grid_right_pane_g2_ParamLimits

0x91de,	// (0x000091de) vkb2_top_grid_right_pane_g2

0x91f6,	// (0x000091f6) vkb2_top_grid_right_pane_g3_ParamLimits

0x91f6,	// (0x000091f6) vkb2_top_grid_right_pane_g3

0xea9b,	// (0x0000ea9b) vkb2_top_grid_right_pane_g4_ParamLimits

0xea9b,	// (0x0000ea9b) vkb2_top_grid_right_pane_g4

0x0003,

0xf563,	// (0x0000f563) vkb2_top_grid_right_pane_g_ParamLimits

0xf563,	// (0x0000f563) vkb2_top_grid_right_pane_g

0x9224,	// (0x00009224) vkb2_top_cell_left_pane_g1

0x923b,	// (0x0000923b) vkb2_cell_keypad_pane_g1_ParamLimits

0x923b,	// (0x0000923b) vkb2_cell_keypad_pane_g1

0x9249,	// (0x00009249) vkb2_cell_keypad_pane_t1_ParamLimits

0x9249,	// (0x00009249) vkb2_cell_keypad_pane_t1

0x9260,	// (0x00009260) vkb2_cell_bottom_grid_pane_ParamLimits

0x9260,	// (0x00009260) vkb2_cell_bottom_grid_pane

0x9299,	// (0x00009299) vkb2_cell_bottom_grid_pane_g1

0xe3d7,	// (0x0000e3d7) aid_call2_pane_cp02

0xe3df,	// (0x0000e3df) aid_call_pane_cp02

0xe3e7,	// (0x0000e3e7) clock_digital_number_pane_cp10

0xe3ef,	// (0x0000e3ef) clock_digital_number_pane_cp11

0xe3f7,	// (0x0000e3f7) clock_digital_number_pane_cp12

0xe3ff,	// (0x0000e3ff) clock_digital_number_pane_cp13

0xe407,	// (0x0000e407) clock_digital_separator_pane_cp10

0x1d81,	// (0x00001d81) popup_clock_digital_analogue_window_cp2_g1

0x1d81,	// (0x00001d81) popup_clock_digital_analogue_window_cp2_g2

0xe40f,	// (0x0000e40f) popup_clock_digital_analogue_window_cp2_g3

0x1d81,	// (0x00001d81) popup_clock_digital_analogue_window_cp2_g4

0xe40f,	// (0x0000e40f) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xf530,	// (0x0000f530) popup_clock_digital_analogue_window_cp2_g

0xe417,	// (0x0000e417) popup_clock_digital_analogue_window_cp2_t1

0xe425,	// (0x0000e425) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xf53b,	// (0x0000f53b) popup_clock_digital_analogue_window_cp2_t

0x66e1,	// (0x000066e1) clock_digital_number_pane_cp10_g1

0x66e1,	// (0x000066e1) clock_digital_number_pane_cp10_g2

0x0001,

0xb20d,	// (0x0000b20d) clock_digital_number_pane_cp10_g

0x66e1,	// (0x000066e1) clock_digital_separator_pane_cp10_g1

0x66e1,	// (0x000066e1) clock_digital_separator_pane_cp10_g2

0x0001,

0xb20d,	// (0x0000b20d) clock_digital_separator_pane_cp10_g

0x87e0,	// (0x000087e0) uniindi_top_pane_g3

0x87f1,	// (0x000087f1) uniindi_top_pane_g4

0x8fbe,	// (0x00008fbe) vkb2_row_keypad_pane_ParamLimits

0x8fbe,	// (0x00008fbe) vkb2_row_keypad_pane

0x92b5,	// (0x000092b5) vkb2_cell_t_keypad_pane_ParamLimits

0x92b5,	// (0x000092b5) vkb2_cell_t_keypad_pane

0x92c5,	// (0x000092c5) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x92c5,	// (0x000092c5) vkb2_cell_t_keypad_pane_cp08

0x92d8,	// (0x000092d8) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x92d8,	// (0x000092d8) vkb2_cell_t_keypad_pane_cp09

0x92ec,	// (0x000092ec) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x92ec,	// (0x000092ec) vkb2_cell_t_keypad_pane_cp01

0x92fd,	// (0x000092fd) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x92fd,	// (0x000092fd) vkb2_cell_t_keypad_pane_cp02

0x930e,	// (0x0000930e) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x930e,	// (0x0000930e) vkb2_cell_t_keypad_pane_cp03

0x931f,	// (0x0000931f) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x931f,	// (0x0000931f) vkb2_cell_t_keypad_pane_cp04

0x9330,	// (0x00009330) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x9330,	// (0x00009330) vkb2_cell_t_keypad_pane_cp05

0x9341,	// (0x00009341) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x9341,	// (0x00009341) vkb2_cell_t_keypad_pane_cp06

0x9352,	// (0x00009352) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9352,	// (0x00009352) vkb2_cell_t_keypad_pane_cp07

0x9363,	// (0x00009363) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9363,	// (0x00009363) vkb2_cell_t_keypad_pane_cp10

0x6b73,	// (0x00006b73) vkb2_cell_t_keypad_pane_g1

0x9378,	// (0x00009378) vkb2_cell_t_keypad_pane_t1

0x0024,	// (0x00000024) popup_grid_graphic2_window

0xeab1,	// (0x0000eab1) aid_size_cell_graphic2_ParamLimits

0xeab1,	// (0x0000eab1) aid_size_cell_graphic2

0xeaef,	// (0x0000eaef) bg_popup_window_pane_cp21_ParamLimits

0xeaef,	// (0x0000eaef) bg_popup_window_pane_cp21

0xeafd,	// (0x0000eafd) graphic2_pages_pane_ParamLimits

0xeafd,	// (0x0000eafd) graphic2_pages_pane

0xeb53,	// (0x0000eb53) grid_graphic2_control_pane_ParamLimits

0xeb53,	// (0x0000eb53) grid_graphic2_control_pane

0xeb9b,	// (0x0000eb9b) grid_graphic2_pane_ParamLimits

0xeb9b,	// (0x0000eb9b) grid_graphic2_pane

0xec22,	// (0x0000ec22) cell_graphic2_pane

0x0024,	// (0x00000024) main_comp_mode_pane

0x7f1a,	// (0x00007f1a) list_ai3_gene_pane_ParamLimits

0xe0b3,	// (0x0000e0b3) bg_popup_window_pane_cp19_ParamLimits

0x835d,	// (0x0000835d) bg_touch_area_indi_pane_ParamLimits

0x835d,	// (0x0000835d) bg_touch_area_indi_pane

0x8373,	// (0x00008373) bg_touch_area_indi_pane_cp01_ParamLimits

0x8373,	// (0x00008373) bg_touch_area_indi_pane_cp01

0x8389,	// (0x00008389) bg_touch_area_indi_pane_cp02_ParamLimits

0x8389,	// (0x00008389) bg_touch_area_indi_pane_cp02

0x839f,	// (0x0000839f) bg_touch_area_indi_pane_cp03_ParamLimits

0x839f,	// (0x0000839f) bg_touch_area_indi_pane_cp03

0x83b9,	// (0x000083b9) popup_slider_window_g1_ParamLimits

0x83d5,	// (0x000083d5) popup_slider_window_g2_ParamLimits

0x83f1,	// (0x000083f1) popup_slider_window_g3_ParamLimits

0xf514,	// (0x0000f514) popup_slider_window_g_ParamLimits

0x8457,	// (0x00008457) popup_slider_window_t1_ParamLimits

0x84cb,	// (0x000084cb) small_volume_slider_vertical_pane_ParamLimits

0xec22,	// (0x0000ec22) cell_graphic2_pane_ParamLimits

0xec7d,	// (0x0000ec7d) bg_button_pane_cp10_ParamLimits

0xec7d,	// (0x0000ec7d) bg_button_pane_cp10

0xec90,	// (0x0000ec90) bg_button_pane_cp11_ParamLimits

0xec90,	// (0x0000ec90) bg_button_pane_cp11

0xeca3,	// (0x0000eca3) graphic2_pages_pane_g1_ParamLimits

0xeca3,	// (0x0000eca3) graphic2_pages_pane_g1

0xecbe,	// (0x0000ecbe) graphic2_pages_pane_g2_ParamLimits

0xecbe,	// (0x0000ecbe) graphic2_pages_pane_g2

0x0001,

0xf571,	// (0x0000f571) graphic2_pages_pane_g_ParamLimits

0xf571,	// (0x0000f571) graphic2_pages_pane_g

0xecd6,	// (0x0000ecd6) graphic2_pages_pane_t1_ParamLimits

0xecd6,	// (0x0000ecd6) graphic2_pages_pane_t1

0xecee,	// (0x0000ecee) cell_graphic2_control_pane_ParamLimits

0xecee,	// (0x0000ecee) cell_graphic2_control_pane

0xed20,	// (0x0000ed20) cell_graphic2_pane_g1_ParamLimits

0xed20,	// (0x0000ed20) cell_graphic2_pane_g1

0x698d,	// (0x0000698d) cell_graphic2_pane_g2_ParamLimits

0x698d,	// (0x0000698d) cell_graphic2_pane_g2

0xed2d,	// (0x0000ed2d) cell_graphic2_pane_g3_ParamLimits

0xed2d,	// (0x0000ed2d) cell_graphic2_pane_g3

0x699a,	// (0x0000699a) cell_graphic2_pane_g4_ParamLimits

0x699a,	// (0x0000699a) cell_graphic2_pane_g4

0xed3a,	// (0x0000ed3a) cell_graphic2_pane_g5_ParamLimits

0xed3a,	// (0x0000ed3a) cell_graphic2_pane_g5

0x0004,

0xf576,	// (0x0000f576) cell_graphic2_pane_g_ParamLimits

0xf576,	// (0x0000f576) cell_graphic2_pane_g

0xed5a,	// (0x0000ed5a) cell_graphic2_pane_t1_ParamLimits

0xed5a,	// (0x0000ed5a) cell_graphic2_pane_t1

0x475e,	// (0x0000475e) grid_highlight_pane_cp11_ParamLimits

0x475e,	// (0x0000475e) grid_highlight_pane_cp11

0x083b,	// (0x0000083b) bg_button_pane_cp05

0xeda3,	// (0x0000eda3) cell_graphic2_control_pane_g1

0x66e1,	// (0x000066e1) bg_touch_area_indi_pane_g1

0x9654,	// (0x00009654) aid_cmod_rocker_key_size

0x965e,	// (0x0000965e) aid_cmode_itu_key_size

0x9668,	// (0x00009668) main_cmode_video_pane

0x9672,	// (0x00009672) main_comp_mode_itu_pane

0x967e,	// (0x0000967e) main_comp_mode_rocker_pane

0x968a,	// (0x0000968a) cell_cmode_rocker_pane_ParamLimits

0x968a,	// (0x0000968a) cell_cmode_rocker_pane

0x969c,	// (0x0000969c) cell_cmode_itu_pane_ParamLimits

0x969c,	// (0x0000969c) cell_cmode_itu_pane

0x13c2,	// (0x000013c2) bg_button_pane_cp06_ParamLimits

0x13c2,	// (0x000013c2) bg_button_pane_cp06

0x6b73,	// (0x00006b73) cell_cmode_rocker_pane_g1_ParamLimits

0x6b73,	// (0x00006b73) cell_cmode_rocker_pane_g1

0x8640,	// (0x00008640) cell_cmode_rocker_pane_g2_ParamLimits

0x8640,	// (0x00008640) cell_cmode_rocker_pane_g2

0x0001,

0xb488,	// (0x0000b488) cell_cmode_rocker_pane_g_ParamLimits

0xb488,	// (0x0000b488) cell_cmode_rocker_pane_g

0x0024,	// (0x00000024) bg_button_pane_cp07

0x96b1,	// (0x000096b1) cell_cmode_itu_pane_g1

0x96ba,	// (0x000096ba) cell_cmode_itu_pane_t1

0x96c8,	// (0x000096c8) cell_cmode_itu_pane_t2

0x0001,

0xb48d,	// (0x0000b48d) cell_cmode_itu_pane_t

0x8863,	// (0x00008863) aid_touch_ctrl_left

0x886b,	// (0x0000886b) aid_touch_ctrl_right

0x0024,	// (0x00000024) compa_mode_pane

0xedc7,	// (0x0000edc7) aid_cmod_rocker_key_size_cp

0xedd1,	// (0x0000edd1) aid_cmode_itu_key_size_cp

0x96ea,	// (0x000096ea) compa_mode_pane_g1

0x96f2,	// (0x000096f2) compa_mode_pane_g2

0x96fa,	// (0x000096fa) compa_mode_pane_g3

0x0002,

0xb492,	// (0x0000b492) compa_mode_pane_g

0xeddb,	// (0x0000eddb) main_comp_mode_itu_pane_cp

0xede3,	// (0x0000ede3) main_comp_mode_rocker_pane_cp

0xedeb,	// (0x0000edeb) cell_cmode_itu_pane_cp_ParamLimits

0xedeb,	// (0x0000edeb) cell_cmode_itu_pane_cp

0xee00,	// (0x0000ee00) cell_cmode_rocker_pane_cp_ParamLimits

0xee00,	// (0x0000ee00) cell_cmode_rocker_pane_cp

0x13c2,	// (0x000013c2) bg_button_pane_cp06_cp_ParamLimits

0x13c2,	// (0x000013c2) bg_button_pane_cp06_cp

0x6b73,	// (0x00006b73) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6b73,	// (0x00006b73) cell_cmode_rocker_pane_g1_cp

0x66e1,	// (0x000066e1) cell_cmode_rocker_pane_g2_cp

0x0024,	// (0x00000024) bg_button_pane_cp07_cp

0xee12,	// (0x0000ee12) cell_cmode_itu_pane_g1_cp

0xee1b,	// (0x0000ee1b) cell_cmode_itu_pane_t1_cp

0xee1b,	// (0x0000ee1b) cell_cmode_itu_pane_t2_cp

0xd4a6,	// (0x0000d4a6) settings_code_pane_cp2

0x0507,	// (0x00000507) bg_popup_window_pane_cp3_ParamLimits

0x0a3b,	// (0x00000a3b) heading_pane_cp3_ParamLimits

0x0a47,	// (0x00000a47) listscroll_popup_graphic_pane_ParamLimits

0x674b,	// (0x0000674b) fep_hwr_aid_pane_ParamLimits

0x8546,	// (0x00008546) aid_touch_sctrl_top_ParamLimits

0x8553,	// (0x00008553) sctrl_sk_top_pane_g1_ParamLimits

0x6b73,	// (0x00006b73) sctrl_sk_top_pane_g2_ParamLimits

0xb3c8,	// (0x0000b3c8) sctrl_sk_top_pane_g_ParamLimits

0x8560,	// (0x00008560) sctrl_sk_top_pane_t1_ParamLimits

0x8546,	// (0x00008546) aid_touch_sctrl_bottom_ParamLimits

0x8560,	// (0x00008560) sctrl_sk_bottom_pane_t1_ParamLimits

0x87ac,	// (0x000087ac) aid_area_touch_clock

0xe882,	// (0x0000e882) aid_vkb2_area_top_pane_cell_ParamLimits

0xe882,	// (0x0000e882) aid_vkb2_area_top_pane_cell

0xe92d,	// (0x0000e92d) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe92d,	// (0x0000e92d) aid_vkb2_area_bottom_pane_cell

0x90fd,	// (0x000090fd) popup_char_count_window

0x9747,	// (0x00009747) popup_char_count_window_g1

0x9750,	// (0x00009750) popup_char_count_window_g2

0x9759,	// (0x00009759) popup_char_count_window_g3

0x0002,

0xb499,	// (0x0000b499) popup_char_count_window_g

0x9762,	// (0x00009762) popup_char_count_window_t1

0x8d5b,	// (0x00008d5b) popup_fep_char_preview_window_ParamLimits

0x8d5b,	// (0x00008d5b) popup_fep_char_preview_window

0xe8a2,	// (0x0000e8a2) vkb2_top_candi_pane_ParamLimits

0xe8a2,	// (0x0000e8a2) vkb2_top_candi_pane

0xee29,	// (0x0000ee29) cell_vkb2_top_candi_pane_ParamLimits

0xee29,	// (0x0000ee29) cell_vkb2_top_candi_pane

0x3f97,	// (0x00003f97) bg_popup_fep_char_preview_window_ParamLimits

0x3f97,	// (0x00003f97) bg_popup_fep_char_preview_window

0x97bd,	// (0x000097bd) popup_fep_char_preview_window_t1_ParamLimits

0x97bd,	// (0x000097bd) popup_fep_char_preview_window_t1

0x97f7,	// (0x000097f7) bg_popup_fep_char_preview_window_g1

0x97ff,	// (0x000097ff) bg_popup_fep_char_preview_window_g2

0x9807,	// (0x00009807) bg_popup_fep_char_preview_window_g3

0x980f,	// (0x0000980f) bg_popup_fep_char_preview_window_g4

0x9817,	// (0x00009817) bg_popup_fep_char_preview_window_g5

0x981f,	// (0x0000981f) bg_popup_fep_char_preview_window_g6

0x9827,	// (0x00009827) bg_popup_fep_char_preview_window_g7

0x982f,	// (0x0000982f) bg_popup_fep_char_preview_window_g8

0x9837,	// (0x00009837) bg_popup_fep_char_preview_window_g9

0x0008,

0xb4a0,	// (0x0000b4a0) bg_popup_fep_char_preview_window_g

0x6b73,	// (0x00006b73) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6b73,	// (0x00006b73) cell_vkb2_top_candi_pane_g1

0x6ede,	// (0x00006ede) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6ede,	// (0x00006ede) cell_vkb2_top_candi_pane_g2

0x6eff,	// (0x00006eff) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6eff,	// (0x00006eff) cell_vkb2_top_candi_pane_g3

0x983f,	// (0x0000983f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x983f,	// (0x0000983f) cell_vkb2_top_candi_pane_g4

0x9860,	// (0x00009860) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9860,	// (0x00009860) cell_vkb2_top_candi_pane_g5

0x8640,	// (0x00008640) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8640,	// (0x00008640) cell_vkb2_top_candi_pane_g6

0x0005,

0xb4b3,	// (0x0000b4b3) cell_vkb2_top_candi_pane_g_ParamLimits

0xb4b3,	// (0x0000b4b3) cell_vkb2_top_candi_pane_g

0x9881,	// (0x00009881) cell_vkb2_top_candi_pane_t1

0x4e76,	// (0x00004e76) aid_size_touch_slider_mark_ParamLimits

0x4e76,	// (0x00004e76) aid_size_touch_slider_mark

0xeb39,	// (0x0000eb39) grid_graphic2_catg_pane_ParamLimits

0xeb39,	// (0x0000eb39) grid_graphic2_catg_pane

0xebf5,	// (0x0000ebf5) popup_grid_graphic2_window_t1_ParamLimits

0xebf5,	// (0x0000ebf5) popup_grid_graphic2_window_t1

0xec0b,	// (0x0000ec0b) popup_grid_graphic2_window_t2_ParamLimits

0xec0b,	// (0x0000ec0b) popup_grid_graphic2_window_t2

0x0001,

0xf56c,	// (0x0000f56c) popup_grid_graphic2_window_t_ParamLimits

0xf56c,	// (0x0000f56c) popup_grid_graphic2_window_t

0x083b,	// (0x0000083b) bg_button_pane_cp05_ParamLimits

0xeda3,	// (0x0000eda3) cell_graphic2_control_pane_g1_ParamLimits

0xee8f,	// (0x0000ee8f) cell_graphic2_catg_pane_ParamLimits

0xee8f,	// (0x0000ee8f) cell_graphic2_catg_pane

0x0024,	// (0x00000024) bg_button_pane_cp12

0xeea1,	// (0x0000eea1) cell_graphic2_catg_pane_g1

0x8778,	// (0x00008778) cell_tb_ext_pane_t1_ParamLimits

0x919b,	// (0x0000919b) vkb2_top_cell_right_narrow_pane_ParamLimits

0x919b,	// (0x0000919b) vkb2_top_cell_right_narrow_pane

0x91b3,	// (0x000091b3) vkb2_top_cell_right_wide_pane_ParamLimits

0x91b3,	// (0x000091b3) vkb2_top_cell_right_wide_pane

0x673d,	// (0x0000673d) bg_vkb2_func_pane_ParamLimits

0x673d,	// (0x0000673d) bg_vkb2_func_pane

0x9224,	// (0x00009224) vkb2_top_cell_left_pane_g1_ParamLimits

0x673d,	// (0x0000673d) bg_vkb2_fuc_pane_cp03_ParamLimits

0x673d,	// (0x0000673d) bg_vkb2_fuc_pane_cp03

0x9299,	// (0x00009299) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x3719,	// (0x00003719) bg_vkb2_func_pane_g1

0x3721,	// (0x00003721) bg_vkb2_func_pane_g2

0x3731,	// (0x00003731) bg_vkb2_func_pane_g3

0x3729,	// (0x00003729) bg_vkb2_func_pane_g4

0x3739,	// (0x00003739) bg_vkb2_func_pane_g5

0x3741,	// (0x00003741) bg_vkb2_func_pane_g6

0x3749,	// (0x00003749) bg_vkb2_func_pane_g7

0x3751,	// (0x00003751) bg_vkb2_func_pane_g8

0x3711,	// (0x00003711) bg_vkb2_func_pane_g9

0x0008,

0xb4c0,	// (0x0000b4c0) bg_vkb2_func_pane_g

0x673d,	// (0x0000673d) bg_vkb2_fuc_pane_cp01_ParamLimits

0x673d,	// (0x0000673d) bg_vkb2_fuc_pane_cp01

0x9224,	// (0x00009224) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x9224,	// (0x00009224) vkb2_top_cell_right_wide_pane_g1

0x673d,	// (0x0000673d) bg_vkb2_fuc_pane_cp02_ParamLimits

0x673d,	// (0x0000673d) bg_vkb2_fuc_pane_cp02

0x9299,	// (0x00009299) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9299,	// (0x00009299) vkb2_top_cell_right_narrow_pane_g1

0xdff5,	// (0x0000dff5) aid_touch_area_decrease_ParamLimits

0xdff5,	// (0x0000dff5) aid_touch_area_decrease

0xe02f,	// (0x0000e02f) aid_touch_area_increase_ParamLimits

0xe02f,	// (0x0000e02f) aid_touch_area_increase

0xe057,	// (0x0000e057) aid_touch_area_mute_ParamLimits

0xe057,	// (0x0000e057) aid_touch_area_mute

0xe07f,	// (0x0000e07f) aid_touch_area_slider_ParamLimits

0xe07f,	// (0x0000e07f) aid_touch_area_slider

0xe0bf,	// (0x0000e0bf) popup_slider_window_g4_ParamLimits

0xe0bf,	// (0x0000e0bf) popup_slider_window_g4

0xe0e7,	// (0x0000e0e7) popup_slider_window_g5_ParamLimits

0xe0e7,	// (0x0000e0e7) popup_slider_window_g5

0xe11b,	// (0x0000e11b) popup_slider_window_g6_ParamLimits

0xe11b,	// (0x0000e11b) popup_slider_window_g6

0x8485,	// (0x00008485) popup_slider_window_t2_ParamLimits

0x8485,	// (0x00008485) popup_slider_window_t2

0x0001,

0xb3bc,	// (0x0000b3bc) popup_slider_window_t_ParamLimits

0xb3bc,	// (0x0000b3bc) popup_slider_window_t

0xe137,	// (0x0000e137) slider_pane_ParamLimits

0xe137,	// (0x0000e137) slider_pane

0x98bb,	// (0x000098bb) slider_pane_g1_ParamLimits

0x98bb,	// (0x000098bb) slider_pane_g1

0x98cf,	// (0x000098cf) slider_pane_g2_ParamLimits

0x98cf,	// (0x000098cf) slider_pane_g2

0x98e5,	// (0x000098e5) slider_pane_g3_ParamLimits

0x98e5,	// (0x000098e5) slider_pane_g3

0x0003,

0xb4d3,	// (0x0000b4d3) slider_pane_g_ParamLimits

0xb4d3,	// (0x0000b4d3) slider_pane_g

0xcc0e,	// (0x0000cc0e) popup_tb_float_extension_window_ParamLimits

0xcc0e,	// (0x0000cc0e) popup_tb_float_extension_window

0x9911,	// (0x00009911) aid_size_cell_tb_float_ext

0x0024,	// (0x00000024) bg_popup_sub_window_cp28

0x991d,	// (0x0000991d) grid_tb_float_ext_pane

0x9927,	// (0x00009927) cell_tb_float_ext_pane_ParamLimits

0x9927,	// (0x00009927) cell_tb_float_ext_pane

0x9941,	// (0x00009941) cell_tb_float_ext_pane_g1

0x994a,	// (0x0000994a) grid_highlight_pane_cp12

0xd8ba,	// (0x0000d8ba) cell_last_hwr_side_pane_ParamLimits

0xd8ba,	// (0x0000d8ba) cell_last_hwr_side_pane

0x66e1,	// (0x000066e1) cell_last_hwr_side_pane_g1

0x9953,	// (0x00009953) cell_last_hwr_side_pane_g2

0x0001,

0xb4dc,	// (0x0000b4dc) cell_last_hwr_side_pane_g

0xea09,	// (0x0000ea09) vkb2_area_bottom_space_btn_pane_ParamLimits

0xea09,	// (0x0000ea09) vkb2_area_bottom_space_btn_pane

0x6b73,	// (0x00006b73) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9378,	// (0x00009378) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9881,	// (0x00009881) cell_vkb2_top_candi_pane_t1_ParamLimits

0x995c,	// (0x0000995c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x995c,	// (0x0000995c) vkb2_area_bottom_space_btn_pane_g1

0x9996,	// (0x00009996) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9996,	// (0x00009996) vkb2_area_bottom_space_btn_pane_g2

0x99cc,	// (0x000099cc) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x99cc,	// (0x000099cc) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xb4e1,	// (0x0000b4e1) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xb4e1,	// (0x0000b4e1) vkb2_area_bottom_space_btn_pane_g

0x6800,	// (0x00006800) cel_fep_hwr_func_pane_ParamLimits

0x6800,	// (0x00006800) cel_fep_hwr_func_pane

0xd88f,	// (0x0000d88f) cell_hwr_side_button_pane_ParamLimits

0xd88f,	// (0x0000d88f) cell_hwr_side_button_pane

0x87ac,	// (0x000087ac) aid_area_touch_clock_ParamLimits

0x083b,	// (0x0000083b) bg_uniindi_top_pane_ParamLimits

0x87be,	// (0x000087be) uniindi_top_pane_g1_ParamLimits

0x87d4,	// (0x000087d4) uniindi_top_pane_g2_ParamLimits

0x87e0,	// (0x000087e0) uniindi_top_pane_g3_ParamLimits

0x87f1,	// (0x000087f1) uniindi_top_pane_g4_ParamLimits

0xb3f4,	// (0x0000b3f4) uniindi_top_pane_g_ParamLimits

0x87fe,	// (0x000087fe) uniindi_top_pane_t1_ParamLimits

0x083b,	// (0x0000083b) bg_vkb2_func_pane_cp01_ParamLimits

0x083b,	// (0x0000083b) bg_vkb2_func_pane_cp01

0x9a16,	// (0x00009a16) cel_fep_hwr_func_pane_g1_ParamLimits

0x9a16,	// (0x00009a16) cel_fep_hwr_func_pane_g1

0x083b,	// (0x0000083b) bg_vkb2_func_pane_cp02_ParamLimits

0x083b,	// (0x0000083b) bg_vkb2_func_pane_cp02

0x9a16,	// (0x00009a16) cell_hwr_side_button_pane_g1_ParamLimits

0x9a16,	// (0x00009a16) cell_hwr_side_button_pane_g1

0x34ec,	// (0x000034ec) status_pane_g4_ParamLimits

0x34ec,	// (0x000034ec) status_pane_g4

0x3506,	// (0x00003506) status_pane_t1

0x6426,	// (0x00006426) form2_midp_gauge_slider_cont_pane

0x642e,	// (0x0000642e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd7e7,	// (0x0000d7e7) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd7f9,	// (0x0000d7f9) form2_midp_gauge_slider_pane_t3_ParamLimits

0xf4b8,	// (0x0000f4b8) form2_midp_gauge_slider_pane_t_ParamLimits

0x6464,	// (0x00006464) form2_midp_slider_pane_ParamLimits

0x8d1b,	// (0x00008d1b) aid_size_cell_func_vkb2_ParamLimits

0x8d1b,	// (0x00008d1b) aid_size_cell_func_vkb2

0x98fd,	// (0x000098fd) slider_pane_g4_ParamLimits

0x98fd,	// (0x000098fd) slider_pane_g4

0xeeaa,	// (0x0000eeaa) form2_midp_gauge_slider_pane_t2_cp01

0xeeb8,	// (0x0000eeb8) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xeeb8,	// (0x0000eeb8) form2_midp_gauge_slider_pane_t3_cp01

0x9a4f,	// (0x00009a4f) form2_midp_slider_pane_cp01

0x0024,	// (0x00000024) navi_smil_pane

0x9a83,	// (0x00009a83) navi_smil_pane_g1

0x9a8b,	// (0x00009a8b) navi_smil_pane_t1

0x9a58,	// (0x00009a58) form2_midp_slider_pane_g1

0x9a61,	// (0x00009a61) form2_midp_slider_pane_g2

0x9a69,	// (0x00009a69) form2_midp_slider_pane_g3

0x9a58,	// (0x00009a58) form2_midp_slider_pane_g4

0xeed5,	// (0x0000eed5) form2_midp_slider_pane_g5

0x0004,

0xf586,	// (0x0000f586) form2_midp_slider_pane_g

0x9a06,	// (0x00009a06) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9a06,	// (0x00009a06) vkb2_area_bottom_space_btn_pane_g4

0xcdf1,	// (0x0000cdf1) lc0_navi_pane_ParamLimits

0xcdf1,	// (0x0000cdf1) lc0_navi_pane

0xce5b,	// (0x0000ce5b) lc0_stat_indi_pane_ParamLimits

0xce5b,	// (0x0000ce5b) lc0_stat_indi_pane

0xce70,	// (0x0000ce70) ls0_title_pane_ParamLimits

0xce70,	// (0x0000ce70) ls0_title_pane

0x13c2,	// (0x000013c2) bg_popup_sub_pane_cp14_ParamLimits

0x8793,	// (0x00008793) list_uniindi_pane_ParamLimits

0x879f,	// (0x0000879f) uniindi_top_pane_ParamLimits

0x883b,	// (0x0000883b) list_single_uniindi_pane_g1_ParamLimits

0x884e,	// (0x0000884e) list_single_uniindi_pane_t1_ParamLimits

0xeee0,	// (0x0000eee0) lc0_stat_clock_pane_ParamLimits

0xeee0,	// (0x0000eee0) lc0_stat_clock_pane

0xeeed,	// (0x0000eeed) lc0_stat_indi_pane_g1_ParamLimits

0xeeed,	// (0x0000eeed) lc0_stat_indi_pane_g1

0xeefa,	// (0x0000eefa) lc0_stat_indi_pane_g2_ParamLimits

0xeefa,	// (0x0000eefa) lc0_stat_indi_pane_g2

0x0001,

0xf591,	// (0x0000f591) lc0_stat_indi_pane_g_ParamLimits

0xf591,	// (0x0000f591) lc0_stat_indi_pane_g

0xef07,	// (0x0000ef07) lc0_uni_indicator_pane_ParamLimits

0xef07,	// (0x0000ef07) lc0_uni_indicator_pane

0xef14,	// (0x0000ef14) ls0_title_pane_g1_ParamLimits

0xef14,	// (0x0000ef14) ls0_title_pane_g1

0xef28,	// (0x0000ef28) ls0_title_pane_t1_ParamLimits

0xef28,	// (0x0000ef28) ls0_title_pane_t1

0xef56,	// (0x0000ef56) lc0_uni_indicator_pane_g1_ParamLimits

0xef56,	// (0x0000ef56) lc0_uni_indicator_pane_g1

0x9b2b,	// (0x00009b2b) lc0_stat_clock_pane_t1

0x0024,	// (0x00000024) main_ai5_pane

0x9b39,	// (0x00009b39) ai5_sk_pane_ParamLimits

0x9b39,	// (0x00009b39) ai5_sk_pane

0xef7d,	// (0x0000ef7d) cell_ai5_widget_pane_ParamLimits

0xef7d,	// (0x0000ef7d) cell_ai5_widget_pane

0x9c01,	// (0x00009c01) aid_size_cell_widget_grid

0x9c17,	// (0x00009c17) bg_ai5_widget_pane_ParamLimits

0x9c17,	// (0x00009c17) bg_ai5_widget_pane

0x9c8f,	// (0x00009c8f) cell_ai5_widget_pane_g2

0x9ca3,	// (0x00009ca3) cell_ai5_widget_pane_g3

0x9cbd,	// (0x00009cbd) cell_ai5_widget_pane_g4

0x9ccd,	// (0x00009ccd) cell_ai5_widget_pane_g5

0x9cdd,	// (0x00009cdd) cell_ai5_widget_pane_g6

0x9ce9,	// (0x00009ce9) cell_ai5_widget_pane_g7

0x9d31,	// (0x00009d31) cell_ai5_widget_pane_t1_ParamLimits

0x9d31,	// (0x00009d31) cell_ai5_widget_pane_t1

0x9d4e,	// (0x00009d4e) cell_ai5_widget_pane_t2_ParamLimits

0x9d4e,	// (0x00009d4e) cell_ai5_widget_pane_t2

0x9d66,	// (0x00009d66) cell_ai5_widget_pane_t3_ParamLimits

0x9d66,	// (0x00009d66) cell_ai5_widget_pane_t3

0x9d7e,	// (0x00009d7e) cell_ai5_widget_pane_t4_ParamLimits

0x9d7e,	// (0x00009d7e) cell_ai5_widget_pane_t4

0x9da4,	// (0x00009da4) cell_ai5_widget_pane_t5_ParamLimits

0x9da4,	// (0x00009da4) cell_ai5_widget_pane_t5

0x9dc4,	// (0x00009dc4) cell_ai5_widget_pane_t6_ParamLimits

0x9dc4,	// (0x00009dc4) cell_ai5_widget_pane_t6

0x9dd6,	// (0x00009dd6) cell_ai5_widget_pane_t7_ParamLimits

0x9dd6,	// (0x00009dd6) cell_ai5_widget_pane_t7

0x9def,	// (0x00009def) cell_ai5_widget_pane_t8_ParamLimits

0x9def,	// (0x00009def) cell_ai5_widget_pane_t8

0x0009,

0xb50f,	// (0x0000b50f) cell_ai5_widget_pane_t_ParamLimits

0xb50f,	// (0x0000b50f) cell_ai5_widget_pane_t

0x9e4e,	// (0x00009e4e) grid_ai5_widget_pane

0x13c2,	// (0x000013c2) highlight_cell_ai5_widget_pane_ParamLimits

0x13c2,	// (0x000013c2) highlight_cell_ai5_widget_pane

0xefe3,	// (0x0000efe3) ai5_sk_left_pane

0xefed,	// (0x0000efed) ai5_sk_middle_pane

0xeff7,	// (0x0000eff7) ai5_sk_right_pane

0x9e83,	// (0x00009e83) bg_ai5_widget_pane_g1_ParamLimits

0x9e83,	// (0x00009e83) bg_ai5_widget_pane_g1

0x9e8f,	// (0x00009e8f) bg_ai5_widget_pane_g2_ParamLimits

0x9e8f,	// (0x00009e8f) bg_ai5_widget_pane_g2

0x9e9b,	// (0x00009e9b) bg_ai5_widget_pane_g3_ParamLimits

0x9e9b,	// (0x00009e9b) bg_ai5_widget_pane_g3

0x9ea7,	// (0x00009ea7) bg_ai5_widget_pane_g4_ParamLimits

0x9ea7,	// (0x00009ea7) bg_ai5_widget_pane_g4

0x9eb3,	// (0x00009eb3) bg_ai5_widget_pane_g5_ParamLimits

0x9eb3,	// (0x00009eb3) bg_ai5_widget_pane_g5

0x9ebf,	// (0x00009ebf) bg_ai5_widget_pane_g6_ParamLimits

0x9ebf,	// (0x00009ebf) bg_ai5_widget_pane_g6

0x9ecb,	// (0x00009ecb) bg_ai5_widget_pane_g7_ParamLimits

0x9ecb,	// (0x00009ecb) bg_ai5_widget_pane_g7

0x9ed7,	// (0x00009ed7) bg_ai5_widget_pane_g8_ParamLimits

0x9ed7,	// (0x00009ed7) bg_ai5_widget_pane_g8

0x9ee3,	// (0x00009ee3) bg_ai5_widget_pane_g9_ParamLimits

0x9ee3,	// (0x00009ee3) bg_ai5_widget_pane_g9

0x0008,

0xb524,	// (0x0000b524) bg_ai5_widget_pane_g_ParamLimits

0xb524,	// (0x0000b524) bg_ai5_widget_pane_g

0x9f15,	// (0x00009f15) cell_shortcut_ai5_widget_pane_ParamLimits

0x9f15,	// (0x00009f15) cell_shortcut_ai5_widget_pane

0x263b,	// (0x0000263b) bg_cell_shortcut_ai5_widget_pane

0x9f26,	// (0x00009f26) cell_grid_ai5_widget_pane_g1

0x263b,	// (0x0000263b) highlight_cell_shortcut_ai5_widget_pane

0x3721,	// (0x00003721) ai5_sk_left_pane_g1

0x9f2f,	// (0x00009f2f) ai5_sk_left_pane_g2

0x9f37,	// (0x00009f37) ai5_sk_left_pane_g3

0x9f3f,	// (0x00009f3f) ai5_sk_left_pane_g4

0x0003,

0xb537,	// (0x0000b537) ai5_sk_left_pane_g

0x9f47,	// (0x00009f47) ai5_sk_left_pane_t1

0x3719,	// (0x00003719) ai5_sk_right_pane_g1

0x9f55,	// (0x00009f55) ai5_sk_right_pane_g2

0x9f5d,	// (0x00009f5d) ai5_sk_right_pane_g3

0x9f65,	// (0x00009f65) ai5_sk_right_pane_g4

0x0003,

0xb540,	// (0x0000b540) ai5_sk_right_pane_g

0x9f6d,	// (0x00009f6d) ai5_sk_right_pane_t1

0x3719,	// (0x00003719) ai5_sk_middle_pane_g1

0x3721,	// (0x00003721) ai5_sk_middle_pane_g2

0x3739,	// (0x00003739) ai5_sk_middle_pane_g3

0x9f5d,	// (0x00009f5d) ai5_sk_middle_pane_g4

0x9f37,	// (0x00009f37) ai5_sk_middle_pane_g5

0x9f7b,	// (0x00009f7b) ai5_sk_middle_pane_g6

0xf001,	// (0x0000f001) ai5_sk_middle_pane_g7

0x0006,

0xf596,	// (0x0000f596) ai5_sk_middle_pane_g

0xccdd,	// (0x0000ccdd) aid_touch_area_size_lc0_ParamLimits

0xccdd,	// (0x0000ccdd) aid_touch_area_size_lc0

0x6f20,	// (0x00006f20) cell_hwr_candidate_pane_t1_ParamLimits

0x31c3,	// (0x000031c3) aid_touch_navi_pane

0xcf69,	// (0x0000cf69) status_dt_navi_pane_ParamLimits

0xcf69,	// (0x0000cf69) status_dt_navi_pane

0xcf81,	// (0x0000cf81) status_dt_sta_pane_ParamLimits

0xcf81,	// (0x0000cf81) status_dt_sta_pane

0xf009,	// (0x0000f009) dt_sta_controll_pane

0xf016,	// (0x0000f016) dt_sta_indi_pane

0xf023,	// (0x0000f023) dt_sta_title_pane

0x083b,	// (0x0000083b) bg_dt_sta_indi_pane_ParamLimits

0x083b,	// (0x0000083b) bg_dt_sta_indi_pane

0xf035,	// (0x0000f035) dt_sta_battery_pane

0xf03d,	// (0x0000f03d) dt_sta_indi_pane_g1

0x9fcd,	// (0x00009fcd) dt_sta_indi_pane_g2

0x9fd6,	// (0x00009fd6) dt_sta_indi_pane_g3

0x0002,

0xf5a5,	// (0x0000f5a5) dt_sta_indi_pane_g

0x9fdf,	// (0x00009fdf) dt_sta_signal_pane

0x13c2,	// (0x000013c2) bg_dt_sta_title_pane_ParamLimits

0x13c2,	// (0x000013c2) bg_dt_sta_title_pane

0x9fe8,	// (0x00009fe8) dt_sta_title_pane_g1

0x9ff0,	// (0x00009ff0) dt_sta_title_pane_t1_ParamLimits

0x9ff0,	// (0x00009ff0) dt_sta_title_pane_t1

0x0024,	// (0x00000024) bg_dt_sta_control_pane

0xf046,	// (0x0000f046) dt_sta_controll_pane_g1

0xa00e,	// (0x0000a00e) bg_dt_sta_title_pane_g1

0xa017,	// (0x0000a017) bg_dt_sta_title_pane_g2

0xa020,	// (0x0000a020) bg_dt_sta_title_pane_g3

0x0002,

0xb55f,	// (0x0000b55f) bg_dt_sta_title_pane_g

0x66e1,	// (0x000066e1) bg_dt_sta_indi_pane_g1

0xa029,	// (0x0000a029) dt_sta_signal_pane_g1

0xa031,	// (0x0000a031) dt_sta_signal_pane_g2

0x0001,

0xb566,	// (0x0000b566) dt_sta_signal_pane_g

0xa039,	// (0x0000a039) dt_sta_battery_pane_g1

0xa042,	// (0x0000a042) dt_sta_battery_pane_t1

0x66e1,	// (0x000066e1) bg_dt_sta_control_pane_g1

0x1f6a,	// (0x00001f6a) fep_china_uni_eep_pane

0x1f72,	// (0x00001f72) fep_china_uni_entry_pane_ParamLimits

0x1f82,	// (0x00001f82) popup_fep_china_uni_window_g1_ParamLimits

0x1f92,	// (0x00001f92) popup_fep_china_uni_window_g2_ParamLimits

0x1f92,	// (0x00001f92) popup_fep_china_uni_window_g2

0x0001,

0xaded,	// (0x0000aded) popup_fep_china_uni_window_g_ParamLimits

0xaded,	// (0x0000aded) popup_fep_china_uni_window_g

0xa051,	// (0x0000a051) fep_china_uni_eep_pane_g1

0xa059,	// (0x0000a059) fep_china_uni_eep_pane_t1

0x9a7a,	// (0x00009a7a) aid_touch_area_size_smil_player

0x3313,	// (0x00003313) lc0_clock_pane

0x34fa,	// (0x000034fa) status_pane_g5_ParamLimits

0x34fa,	// (0x000034fa) status_pane_g5

0xc790,	// (0x0000c790) popup_keymap_window

0x34b8,	// (0x000034b8) status_icon_pane

0x9ca3,	// (0x00009ca3) cell_ai5_widget_pane_g3_ParamLimits

0x9cbd,	// (0x00009cbd) cell_ai5_widget_pane_g4_ParamLimits

0x9ccd,	// (0x00009ccd) cell_ai5_widget_pane_g5_ParamLimits

0x9cf5,	// (0x00009cf5) cell_ai5_widget_pane_g8_ParamLimits

0x9cf5,	// (0x00009cf5) cell_ai5_widget_pane_g8

0x9d09,	// (0x00009d09) cell_ai5_widget_pane_g9_ParamLimits

0x9d09,	// (0x00009d09) cell_ai5_widget_pane_g9

0x9d1d,	// (0x00009d1d) cell_ai5_widget_pane_g10_ParamLimits

0x9d1d,	// (0x00009d1d) cell_ai5_widget_pane_g10

0xa068,	// (0x0000a068) status_icon_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp13

0xa070,	// (0x0000a070) popup_keymap_window_t1

0xc49e,	// (0x0000c49e) control_pane_g6_ParamLimits

0xc49e,	// (0x0000c49e) control_pane_g6

0xc4ab,	// (0x0000c4ab) control_pane_g7_ParamLimits

0xc4ab,	// (0x0000c4ab) control_pane_g7

0xc4b8,	// (0x0000c4b8) control_pane_g8_ParamLimits

0xc4b8,	// (0x0000c4b8) control_pane_g8

0xf009,	// (0x0000f009) dt_sta_controll_pane_ParamLimits

0xf016,	// (0x0000f016) dt_sta_indi_pane_ParamLimits

0xf023,	// (0x0000f023) dt_sta_title_pane_ParamLimits

0x0d7f,	// (0x00000d7f) aid_size_touch_scroll_bar_cale

0x02b1,	// (0x000002b1) popup_discreet_window_ParamLimits

0x02b1,	// (0x000002b1) popup_discreet_window

0xb71f,	// (0x0000b71f) popup_sk_window

0x3f97,	// (0x00003f97) bg_popup_sub_pane_cp28_ParamLimits

0x3f97,	// (0x00003f97) bg_popup_sub_pane_cp28

0xa07e,	// (0x0000a07e) popup_discreet_window_g1_ParamLimits

0xa07e,	// (0x0000a07e) popup_discreet_window_g1

0xa09e,	// (0x0000a09e) popup_discreet_window_t1_ParamLimits

0xa09e,	// (0x0000a09e) popup_discreet_window_t1

0xa0bc,	// (0x0000a0bc) popup_discreet_window_t2_ParamLimits

0xa0bc,	// (0x0000a0bc) popup_discreet_window_t2

0x0002,

0xb56b,	// (0x0000b56b) popup_discreet_window_t_ParamLimits

0xb56b,	// (0x0000b56b) popup_discreet_window_t

0xa10e,	// (0x0000a10e) popup_sk_window_g1

0xa118,	// (0x0000a118) popup_sk_window_g2

0x0001,

0xb572,	// (0x0000b572) popup_sk_window_g

0xa120,	// (0x0000a120) popup_sk_window_t1

0xa12e,	// (0x0000a12e) popup_sk_window_t1_copy1

0x9c8f,	// (0x00009c8f) cell_ai5_widget_pane_g2_ParamLimits

0x9e01,	// (0x00009e01) cell_ai5_widget_pane_t9_ParamLimits

0x9e01,	// (0x00009e01) cell_ai5_widget_pane_t9

0x0024,	// (0x00000024) main_fep_fshwr2_pane

0xf04f,	// (0x0000f04f) aid_fshwr2_btn_pane

0xf060,	// (0x0000f060) aid_fshwr2_syb_pane

0xf071,	// (0x0000f071) aid_fshwr2_txt_pane

0xf07d,	// (0x0000f07d) fshwr2_func_candi_pane

0xf09c,	// (0x0000f09c) fshwr2_hwr_syb_pane

0xf0b7,	// (0x0000f0b7) fshwr2_icf_pane

0x0024,	// (0x00000024) fshwr2_icf_bg_pane

0xa1ae,	// (0x0000a1ae) fshwr2_icf_pane_t1_ParamLimits

0xa1ae,	// (0x0000a1ae) fshwr2_icf_pane_t1

0x1d81,	// (0x00001d81) fshwr2_func_candi_pane_g1

0xf0e3,	// (0x0000f0e3) fshwr2_func_candi_row_pane_ParamLimits

0xf0e3,	// (0x0000f0e3) fshwr2_func_candi_row_pane

0xf106,	// (0x0000f106) cell_fshwr2_syb_pane_ParamLimits

0xf106,	// (0x0000f106) cell_fshwr2_syb_pane

0x6b73,	// (0x00006b73) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6b73,	// (0x00006b73) fshwr2_hwr_syb_pane_g1

0x0024,	// (0x00000024) bg_popup_call_pane_cp01

0xf11c,	// (0x0000f11c) fshwr2_func_candi_cell_pane_ParamLimits

0xf11c,	// (0x0000f11c) fshwr2_func_candi_cell_pane

0xf167,	// (0x0000f167) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf167,	// (0x0000f167) fshwr2_func_candi_cell_bg_pane

0xf173,	// (0x0000f173) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xf173,	// (0x0000f173) fshwr2_func_candi_cell_pane_g1

0xf1aa,	// (0x0000f1aa) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xf1aa,	// (0x0000f1aa) fshwr2_func_candi_cell_pane_t1

0x0024,	// (0x00000024) bg_button_pane_cp08

0xa27e,	// (0x0000a27e) cell_fshwr2_syb_bg_pane

0xf1c5,	// (0x0000f1c5) cell_fshwr2_syb_bg_pane_g1

0xf1cd,	// (0x0000f1cd) cell_fshwr2_syb_bg_pane_t1

0x13c2,	// (0x000013c2) main_tmo_pane

0xd2c7,	// (0x0000d2c7) uni_indicator_pane_g1_ParamLimits

0xd2dc,	// (0x0000d2dc) uni_indicator_pane_g2_ParamLimits

0xd2f2,	// (0x0000d2f2) uni_indicator_pane_g3_ParamLimits

0x4c3e,	// (0x00004c3e) uni_indicator_pane_g4_ParamLimits

0x4c3e,	// (0x00004c3e) uni_indicator_pane_g4

0x4c52,	// (0x00004c52) uni_indicator_pane_g5_ParamLimits

0x4c52,	// (0x00004c52) uni_indicator_pane_g5

0x4c52,	// (0x00004c52) uni_indicator_pane_g6_ParamLimits

0x4c52,	// (0x00004c52) uni_indicator_pane_g6

0xf45f,	// (0x0000f45f) uni_indicator_pane_g_ParamLimits

0xdfd1,	// (0x0000dfd1) popup_tmo_note_window_ParamLimits

0xdfd1,	// (0x0000dfd1) popup_tmo_note_window

0x13c2,	// (0x000013c2) fshwr2_bg_pane

0xf19b,	// (0x0000f19b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xf19b,	// (0x0000f19b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xf5ac,	// (0x0000f5ac) fshwr2_func_candi_cell_pane_g_ParamLimits

0xf5ac,	// (0x0000f5ac) fshwr2_func_candi_cell_pane_g

0x66e1,	// (0x000066e1) bg_popup_window_pane_cp01

0xa29d,	// (0x0000a29d) bg_popup_window_pane_g1_cp01

0xa2a6,	// (0x0000a2a6) bg_popup_window_pane_cp22_ParamLimits

0xa2a6,	// (0x0000a2a6) bg_popup_window_pane_cp22

0xa2b4,	// (0x0000a2b4) listscroll_tmo_link_pane_ParamLimits

0xa2b4,	// (0x0000a2b4) listscroll_tmo_link_pane

0xa2f4,	// (0x0000a2f4) popup_tmo_note_window_g1_ParamLimits

0xa2f4,	// (0x0000a2f4) popup_tmo_note_window_g1

0xa301,	// (0x0000a301) tmo_note_info_pane_ParamLimits

0xa301,	// (0x0000a301) tmo_note_info_pane

0xf1dc,	// (0x0000f1dc) list_tmo_note_info_pane_g1_ParamLimits

0xf1dc,	// (0x0000f1dc) list_tmo_note_info_pane_g1

0xa332,	// (0x0000a332) list_tmo_note_info_pane_g2_ParamLimits

0xa332,	// (0x0000a332) list_tmo_note_info_pane_g2

0x0001,

0xf5b1,	// (0x0000f5b1) list_tmo_note_info_pane_g_ParamLimits

0xf5b1,	// (0x0000f5b1) list_tmo_note_info_pane_g

0xa34e,	// (0x0000a34e) list_tmo_note_info_text_pane_ParamLimits

0xa34e,	// (0x0000a34e) list_tmo_note_info_text_pane

0xa3cf,	// (0x0000a3cf) list_tmo_link_pane

0xa3dc,	// (0x0000a3dc) scroll_pane_cp20

0xa3e9,	// (0x0000a3e9) list_single_tmo_link_pane_ParamLimits

0xa3e9,	// (0x0000a3e9) list_single_tmo_link_pane

0xa3f9,	// (0x0000a3f9) list_single_tmo_link_pane_t1

0xa407,	// (0x0000a407) list_tmo_note_info_text_pane_t1_ParamLimits

0xa407,	// (0x0000a407) list_tmo_note_info_text_pane_t1

0xc062,	// (0x0000c062) aid_size_touch_scroll_bar_cp01_ParamLimits

0xc062,	// (0x0000c062) aid_size_touch_scroll_bar_cp01

0xbf92,	// (0x0000bf92) aid_size_touch_slider_marker

0xb70f,	// (0x0000b70f) popup_settings_window_ParamLimits

0xb70f,	// (0x0000b70f) popup_settings_window

0x2be4,	// (0x00002be4) popup_candi_list_indi_window

0x31c3,	// (0x000031c3) aid_touch_navi_pane_ParamLimits

0x851a,	// (0x0000851a) rs_clock_indi_pane

0x8523,	// (0x00008523) sctrl_sk_bottom_pane_ParamLimits

0x8534,	// (0x00008534) sctrl_sk_top_pane_ParamLimits

0x8d75,	// (0x00008d75) popup_fep_tooltip_window

0x9c01,	// (0x00009c01) aid_size_cell_widget_grid_ParamLimits

0x9c7a,	// (0x00009c7a) cell_ai5_widget_pane_g1_ParamLimits

0x9c7a,	// (0x00009c7a) cell_ai5_widget_pane_g1

0x9cdd,	// (0x00009cdd) cell_ai5_widget_pane_g6_ParamLimits

0x9ce9,	// (0x00009ce9) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xb4fa,	// (0x0000b4fa) cell_ai5_widget_pane_g_ParamLimits

0xb4fa,	// (0x0000b4fa) cell_ai5_widget_pane_g

0x9e30,	// (0x00009e30) cell_ai5_widget_pane_t10_ParamLimits

0x9e30,	// (0x00009e30) cell_ai5_widget_pane_t10

0x9e4e,	// (0x00009e4e) grid_ai5_widget_pane_ParamLimits

0x9eef,	// (0x00009eef) cell_contacts_ai5_widget_pane_ParamLimits

0x9eef,	// (0x00009eef) cell_contacts_ai5_widget_pane

0xa0d1,	// (0x0000a0d1) popup_discreet_window_t3_ParamLimits

0xa0d1,	// (0x0000a0d1) popup_discreet_window_t3

0xf0cf,	// (0x0000f0cf) popup_fshwr2_char_preview_window_ParamLimits

0xf0cf,	// (0x0000f0cf) popup_fshwr2_char_preview_window

0xf1f3,	// (0x0000f1f3) tmo_note_info_pane_t1

0xf208,	// (0x0000f208) tmo_note_info_pane_t2

0xf21f,	// (0x0000f21f) tmo_note_info_pane_t3

0xa3ab,	// (0x0000a3ab) tmo_note_info_pane_t4

0xa3bd,	// (0x0000a3bd) tmo_note_info_pane_t5

0x0004,

0xf5b6,	// (0x0000f5b6) tmo_note_info_pane_t

0xa3cf,	// (0x0000a3cf) list_tmo_link_pane_ParamLimits

0xa3dc,	// (0x0000a3dc) scroll_pane_cp20_ParamLimits

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp01

0xa420,	// (0x0000a420) popup_fshwr2_char_preview_window_t1

0xa42e,	// (0x0000a42e) popup_candi_list_indi_window_g1

0xa437,	// (0x0000a437) bg_cell_contacts_ai5_widget_pane

0xa443,	// (0x0000a443) cell_contacts_ai5_widget_pane_g1

0x71ec,	// (0x000071ec) cell_contacts_ai5_widget_pane_g2

0xa458,	// (0x0000a458) cell_contacts_ai5_widget_pane_g3

0x0002,

0xb58c,	// (0x0000b58c) cell_contacts_ai5_widget_pane_g

0xa464,	// (0x0000a464) cell_contacts_ai5_widget_pane_t1

0x13c2,	// (0x000013c2) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa4db,	// (0x0000a4db) settings_container_pane

0x263b,	// (0x0000263b) listscroll_set_pane_copy1

0x5a4c,	// (0x00005a4c) scroll_pane_cp121_copy1

0x3d3c,	// (0x00003d3c) set_content_pane_copy1

0xa4e7,	// (0x0000a4e7) aid_height_set_list_copy1_ParamLimits

0xa4e7,	// (0x0000a4e7) aid_height_set_list_copy1

0x4f3a,	// (0x00004f3a) aid_size_parent_copy1_ParamLimits

0x4f3a,	// (0x00004f3a) aid_size_parent_copy1

0xa4f3,	// (0x0000a4f3) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa4f3,	// (0x0000a4f3) button_value_adjust_pane_cp6_copy1

0x2b86,	// (0x00002b86) list_highlight_pane_cp2_copy1_ParamLimits

0x2b86,	// (0x00002b86) list_highlight_pane_cp2_copy1

0xa507,	// (0x0000a507) list_set_pane_copy1_ParamLimits

0xa507,	// (0x0000a507) list_set_pane_copy1

0xa476,	// (0x0000a476) main_pane_set_t1_copy1_ParamLimits

0xa476,	// (0x0000a476) main_pane_set_t1_copy1

0xa4b0,	// (0x0000a4b0) main_pane_set_t2_copy1_ParamLimits

0xa4b0,	// (0x0000a4b0) main_pane_set_t2_copy1

0xa5b4,	// (0x0000a5b4) main_pane_set_t3_copy1

0xa5c2,	// (0x0000a5c2) main_pane_set_t4_copy1

0xa4cf,	// (0x0000a4cf) set_content_pane_g1_copy1_ParamLimits

0xa4cf,	// (0x0000a4cf) set_content_pane_g1_copy1

0xa5d0,	// (0x0000a5d0) setting_code_pane_copy1

0xa5d8,	// (0x0000a5d8) setting_slider_graphic_pane_copy1

0xa5d8,	// (0x0000a5d8) setting_slider_pane_copy1

0xa5d8,	// (0x0000a5d8) setting_text_pane_copy1

0xa5d8,	// (0x0000a5d8) setting_volume_pane_copy1

0xa5d0,	// (0x0000a5d0) settings_code_pane_cp2_copy1

0xa5e0,	// (0x0000a5e0) settings_code_pane_cp_copy1_ParamLimits

0xa5e0,	// (0x0000a5e0) settings_code_pane_cp_copy1

0xa5f4,	// (0x0000a5f4) volume_set_pane_copy1

0xa5fc,	// (0x0000a5fc) volume_set_pane_g10_copy1

0xa604,	// (0x0000a604) volume_set_pane_g1_copy1

0xa60c,	// (0x0000a60c) volume_set_pane_g2_copy1

0xa614,	// (0x0000a614) volume_set_pane_g3_copy1

0xa61c,	// (0x0000a61c) volume_set_pane_g4_copy1

0xa624,	// (0x0000a624) volume_set_pane_g5_copy1

0xa62c,	// (0x0000a62c) volume_set_pane_g6_copy1

0xa634,	// (0x0000a634) volume_set_pane_g7_copy1

0xa63c,	// (0x0000a63c) volume_set_pane_g8_copy1

0xa644,	// (0x0000a644) volume_set_pane_g9_copy1

0x0507,	// (0x00000507) bg_set_opt_pane_cp_copy1_ParamLimits

0x0507,	// (0x00000507) bg_set_opt_pane_cp_copy1

0xa64c,	// (0x0000a64c) setting_slider_pane_t1_copy1_ParamLimits

0xa64c,	// (0x0000a64c) setting_slider_pane_t1_copy1

0xa66a,	// (0x0000a66a) setting_slider_pane_t2_copy1_ParamLimits

0xa66a,	// (0x0000a66a) setting_slider_pane_t2_copy1

0xa684,	// (0x0000a684) setting_slider_pane_t3_copy1_ParamLimits

0xa684,	// (0x0000a684) setting_slider_pane_t3_copy1

0xa69c,	// (0x0000a69c) slider_set_pane_copy1_ParamLimits

0xa69c,	// (0x0000a69c) slider_set_pane_copy1

0x14e5,	// (0x000014e5) set_opt_bg_pane_g1_copy2

0x14ed,	// (0x000014ed) set_opt_bg_pane_g2_copy2

0xa6b2,	// (0x0000a6b2) set_opt_bg_pane_g3_copy2

0x14fd,	// (0x000014fd) set_opt_bg_pane_g4_copy2

0x1505,	// (0x00001505) set_opt_bg_pane_g5_copy2

0x150d,	// (0x0000150d) set_opt_bg_pane_g6_copy2

0xa6bc,	// (0x0000a6bc) set_opt_bg_pane_g7_copy2

0xa6c4,	// (0x0000a6c4) set_opt_bg_pane_g8_copy2

0xa6ce,	// (0x0000a6ce) set_opt_bg_pane_g9_copy2

0xa6d8,	// (0x0000a6d8) aid_size_touch_slider_mark_copy1_ParamLimits

0xa6d8,	// (0x0000a6d8) aid_size_touch_slider_mark_copy1

0xa6ec,	// (0x0000a6ec) slider_set_pane_g1_copy1

0xa6f5,	// (0x0000a6f5) slider_set_pane_g2_copy1

0x4ea3,	// (0x00004ea3) slider_set_pane_g3_copy1_ParamLimits

0x4ea3,	// (0x00004ea3) slider_set_pane_g3_copy1

0x4eb7,	// (0x00004eb7) slider_set_pane_g4_copy1_ParamLimits

0x4eb7,	// (0x00004eb7) slider_set_pane_g4_copy1

0x4ecf,	// (0x00004ecf) slider_set_pane_g5_copy1_ParamLimits

0x4ecf,	// (0x00004ecf) slider_set_pane_g5_copy1

0x4ea3,	// (0x00004ea3) slider_set_pane_g6_copy1_ParamLimits

0x4ea3,	// (0x00004ea3) slider_set_pane_g6_copy1

0xa6fd,	// (0x0000a6fd) slider_set_pane_g7_copy1_ParamLimits

0xa6fd,	// (0x0000a6fd) slider_set_pane_g7_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_copy1

0xa713,	// (0x0000a713) setting_slider_graphic_pane_g1_copy1

0xa71c,	// (0x0000a71c) setting_slider_graphic_pane_t1_copy1

0xa72c,	// (0x0000a72c) setting_slider_graphic_pane_t2_copy1

0xa73c,	// (0x0000a73c) slider_set_pane_cp_copy1

0xa74c,	// (0x0000a74c) input_focus_pane_cp1_copy1

0xa755,	// (0x0000a755) list_set_text_pane_copy1

0xa75d,	// (0x0000a75d) setting_text_pane_g1_copy1

0x05f1,	// (0x000005f1) set_text_pane_t1_copy1

0xa74c,	// (0x0000a74c) input_focus_pane_cp2_copy1

0xa75d,	// (0x0000a75d) setting_code_pane_g1_copy1

0xa766,	// (0x0000a766) setting_code_pane_t1_copy1

0xa774,	// (0x0000a774) list_set_graphic_pane_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_copy1

0x2336,	// (0x00002336) list_set_graphic_pane_g1_copy1_ParamLimits

0x2336,	// (0x00002336) list_set_graphic_pane_g1_copy1

0xa787,	// (0x0000a787) list_set_graphic_pane_g2_copy1

0x234e,	// (0x0000234e) list_set_graphic_pane_t1_copy1_ParamLimits

0x234e,	// (0x0000234e) list_set_graphic_pane_t1_copy1

0x66e1,	// (0x000066e1) rs_clock_indi_pane_g1

0xa78f,	// (0x0000a78f) rs_clock_indi_pane_t1

0xa79d,	// (0x0000a79d) rs_indi_pane

0xa7a5,	// (0x0000a7a5) rs_indi_pane_g1

0xa7ae,	// (0x0000a7ae) rs_indi_pane_g2

0xa7b7,	// (0x0000a7b7) rs_indi_pane_g3

0x0002,

0xb593,	// (0x0000b593) rs_indi_pane_g

0x263b,	// (0x0000263b) bg_popup_preview_window_pane_cp03

0xa7c0,	// (0x0000a7c0) popup_fep_tooltip_window_t1

0x78ea,	// (0x000078ea) popup_note2_window_g2_ParamLimits

0x78ea,	// (0x000078ea) popup_note2_window_g2

0x0001,

0xb32c,	// (0x0000b32c) popup_note2_window_g_ParamLimits

0xb32c,	// (0x0000b32c) popup_note2_window_g

0x7ee0,	// (0x00007ee0) bg_popup_sub_pane_cp11_ParamLimits

0x7eed,	// (0x00007eed) cell_ai3_links_pane_g1_ParamLimits

0x7f04,	// (0x00007f04) cell_ai3_links_pane_t1

0x05f1,	// (0x000005f1) set_text_pane_t1_copy1_ParamLimits

0x254c,	// (0x0000254c) cell_graphic_popup_pane_cp2_ParamLimits

0x254c,	// (0x0000254c) cell_graphic_popup_pane_cp2

0xa7ce,	// (0x0000a7ce) cell_graphic_popup_pane_g1_cp2

0x0b92,	// (0x00000b92) cell_graphic_popup_pane_g2_cp2

0xa7d6,	// (0x0000a7d6) cell_graphic_popup_pane_g3_cp2

0xa7de,	// (0x0000a7de) cell_graphic_popup_pane_t2_cp2

0x0ba3,	// (0x00000ba3) grid_highlight_pane_cp3_cp2

0x1a60,	// (0x00001a60) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x13c2,	// (0x000013c2) main_tmo_pane_ParamLimits

0xdfc5,	// (0x0000dfc5) popup_tmo_big_image_note_window

0x9c69,	// (0x00009c69) cell_ai5_widget_list_pane

0x9c71,	// (0x00009c71) cell_ai5_widget_lrg_icon_pane

0xf1f3,	// (0x0000f1f3) tmo_note_info_pane_t1_ParamLimits

0xf208,	// (0x0000f208) tmo_note_info_pane_t2_ParamLimits

0xf21f,	// (0x0000f21f) tmo_note_info_pane_t3_ParamLimits

0xa3ab,	// (0x0000a3ab) tmo_note_info_pane_t4_ParamLimits

0xa3bd,	// (0x0000a3bd) tmo_note_info_pane_t5_ParamLimits

0xf5b6,	// (0x0000f5b6) tmo_note_info_pane_t_ParamLimits

0xa4db,	// (0x0000a4db) settings_container_pane_ParamLimits

0xa744,	// (0x0000a744) indicator_popup_pane_cp5

0xa744,	// (0x0000a744) indicator_popup_pane_cp6

0xa774,	// (0x0000a774) list_set_graphic_pane_copy1_ParamLimits

0x0024,	// (0x00000024) bg_popup_window_pane_cp23

0xa7ec,	// (0x0000a7ec) popup_tmo_big_image_note_window_g1

0xa7f6,	// (0x0000a7f6) popup_tmo_big_image_note_window_t1

0xa806,	// (0x0000a806) popup_tmo_big_image_note_window_t2

0xa816,	// (0x0000a816) popup_tmo_big_image_note_window_t3

0x0002,

0xb59a,	// (0x0000b59a) popup_tmo_big_image_note_window_t

0x66e1,	// (0x000066e1) cell_ai5_widget_lrg_icon_pane_g1

0xa826,	// (0x0000a826) cell_ai5_widget_lrg_icon_pane_t1

0xa834,	// (0x0000a834) cell_ai5_widget_list_row_pane_ParamLimits

0xa834,	// (0x0000a834) cell_ai5_widget_list_row_pane

0xa84b,	// (0x0000a84b) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa84b,	// (0x0000a84b) cell_ai5_widget_list_row_pane_g1

0xa858,	// (0x0000a858) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa858,	// (0x0000a858) cell_ai5_widget_list_row_pane_t1

0xa889,	// (0x0000a889) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa889,	// (0x0000a889) cell_ai5_widget_list_row_pane_t2

0x0002,

0xb5a1,	// (0x0000b5a1) cell_ai5_widget_list_row_pane_t_ParamLimits

0xb5a1,	// (0x0000b5a1) cell_ai5_widget_list_row_pane_t

0x0024,	// (0x00000024) main_fep_vtchi_ss_pane

0xa8d1,	// (0x0000a8d1) popup_fep_char_pre_window

0xa8d9,	// (0x0000a8d9) popup_fep_ituss_window

0xf234,	// (0x0000f234) popup_fep_vkbss_window

0xf241,	// (0x0000f241) grid_vkbss_keypad_pane_ParamLimits

0xf241,	// (0x0000f241) grid_vkbss_keypad_pane

0xa934,	// (0x0000a934) ituss_keypad_pane

0xa94f,	// (0x0000a94f) aid_vkbss_key_offset_ParamLimits

0xa94f,	// (0x0000a94f) aid_vkbss_key_offset

0xf251,	// (0x0000f251) cell_vkbss_key_pane_ParamLimits

0xf251,	// (0x0000f251) cell_vkbss_key_pane

0xa971,	// (0x0000a971) bg_cell_vkbss_key_g1_ParamLimits

0xa971,	// (0x0000a971) bg_cell_vkbss_key_g1

0xf267,	// (0x0000f267) cell_vkbss_key_3p_pane_ParamLimits

0xf267,	// (0x0000f267) cell_vkbss_key_3p_pane

0xf281,	// (0x0000f281) cell_vkbss_key_g1_ParamLimits

0xf281,	// (0x0000f281) cell_vkbss_key_g1

0xf29b,	// (0x0000f29b) cell_vkbss_key_t1_ParamLimits

0xf29b,	// (0x0000f29b) cell_vkbss_key_t1

0xa9d0,	// (0x0000a9d0) cell_ituss_key_pane_ParamLimits

0xa9d0,	// (0x0000a9d0) cell_ituss_key_pane

0xa9e1,	// (0x0000a9e1) bg_cell_ituss_key_g1_ParamLimits

0xa9e1,	// (0x0000a9e1) bg_cell_ituss_key_g1

0xa9ed,	// (0x0000a9ed) cell_ituss_key_pane_g1_ParamLimits

0xa9ed,	// (0x0000a9ed) cell_ituss_key_pane_g1

0xaa07,	// (0x0000aa07) cell_ituss_key_pane_g2_ParamLimits

0xaa07,	// (0x0000aa07) cell_ituss_key_pane_g2

0x0002,

0xb5a8,	// (0x0000b5a8) cell_ituss_key_pane_g_ParamLimits

0xb5a8,	// (0x0000b5a8) cell_ituss_key_pane_g

0xaa45,	// (0x0000aa45) cell_ituss_key_t1_ParamLimits

0xaa45,	// (0x0000aa45) cell_ituss_key_t1

0xaa7f,	// (0x0000aa7f) cell_ituss_key_t2_ParamLimits

0xaa7f,	// (0x0000aa7f) cell_ituss_key_t2

0xaab0,	// (0x0000aab0) cell_ituss_key_t3_ParamLimits

0xaab0,	// (0x0000aab0) cell_ituss_key_t3

0xaa7f,	// (0x0000aa7f) cell_ituss_key_t4_ParamLimits

0xaa7f,	// (0x0000aa7f) cell_ituss_key_t4

0x0004,

0xb5af,	// (0x0000b5af) cell_ituss_key_t_ParamLimits

0xb5af,	// (0x0000b5af) cell_ituss_key_t

0xaaf3,	// (0x0000aaf3) cell_vkbss_key_3p_pane_g1

0xaafb,	// (0x0000aafb) cell_vkbss_key_3p_pane_g2

0xab03,	// (0x0000ab03) cell_vkbss_key_3p_pane_g3

0x0002,

0xb5ba,	// (0x0000b5ba) cell_vkbss_key_3p_pane_g

0x263b,	// (0x0000263b) bg_popup_fep_char_preview_window_cp02

0xab0b,	// (0x0000ab0b) popup_fep_char_pre_window_t1

0xefd9,	// (0x0000efd9) main_ai5_sk_pane

0xa437,	// (0x0000a437) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa443,	// (0x0000a443) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x71ec,	// (0x000071ec) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa458,	// (0x0000a458) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xb58c,	// (0x0000b58c) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa464,	// (0x0000a464) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x13c2,	// (0x000013c2) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf2c6,	// (0x0000f2c6) main_ai5_sk_pane_g1

0x3dd0,	// (0x00003dd0) popup_query_code_window_g1

0xa8ef,	// (0x0000a8ef) popup_fep_vkb_icf_pane

0xa90e,	// (0x0000a90e) popup_fep_vtchi_icf_pane

0xab22,	// (0x0000ab22) bg_icf_pane

0xab2e,	// (0x0000ab2e) list_vkb_icf_pane

0xab3d,	// (0x0000ab3d) bg_icf_pane_cp01

0xab50,	// (0x0000ab50) vtchi_icf_list_pane

0xab60,	// (0x0000ab60) list_vkb_icf_pane_t1_ParamLimits

0xab60,	// (0x0000ab60) list_vkb_icf_pane_t1

0xab76,	// (0x0000ab76) vtchi_icf_list_pane_t1_ParamLimits

0xab76,	// (0x0000ab76) vtchi_icf_list_pane_t1

0xa8d9,	// (0x0000a8d9) popup_fep_ituss_window_ParamLimits

0xa90e,	// (0x0000a90e) popup_fep_vtchi_icf_pane_ParamLimits

0xa934,	// (0x0000a934) ituss_keypad_pane_ParamLimits

0xa943,	// (0x0000a943) ituss_sks_pane

0xab22,	// (0x0000ab22) bg_icf_pane_ParamLimits

0xa8b1,	// (0x0000a8b1) icf_edit_indi_pane_ParamLimits

0xa8b1,	// (0x0000a8b1) icf_edit_indi_pane

0xab2e,	// (0x0000ab2e) list_vkb_icf_pane_ParamLimits

0xab3d,	// (0x0000ab3d) bg_icf_pane_cp01_ParamLimits

0xa8c4,	// (0x0000a8c4) icf_edit_indi_pane_cp01_ParamLimits

0xa8c4,	// (0x0000a8c4) icf_edit_indi_pane_cp01

0xab58,	// (0x0000ab58) vtchi_query_pane

0x9a16,	// (0x00009a16) icf_edit_indi_pane_g1_ParamLimits

0x9a16,	// (0x00009a16) icf_edit_indi_pane_g1

0xf2cf,	// (0x0000f2cf) icf_edit_indi_pane_g2_ParamLimits

0xf2cf,	// (0x0000f2cf) icf_edit_indi_pane_g2

0x0001,

0xf5c1,	// (0x0000f5c1) icf_edit_indi_pane_g_ParamLimits

0xf5c1,	// (0x0000f5c1) icf_edit_indi_pane_g

0xf2e1,	// (0x0000f2e1) icf_edit_indi_pane_t1

0xab90,	// (0x0000ab90) bg_input_focus_pane_cp042

0x0d76,	// (0x00000d76) vtchi_button_pane

0xab99,	// (0x0000ab99) vtchi_query_pane_t1

0xaba7,	// (0x0000aba7) vtchi_query_pane_t2

0xabb5,	// (0x0000abb5) vtchi_query_pane_t3

0x0002,

0xb5c1,	// (0x0000b5c1) vtchi_query_pane_t

0x0024,	// (0x00000024) bg_button_pane_cp13

0xabc3,	// (0x0000abc3) vtchi_button_pane_g1

0xabcb,	// (0x0000abcb) ituss_sks_pane_g1

0xabd6,	// (0x0000abd6) ituss_sks_pane_g2

0x0001,

0xb5c8,	// (0x0000b5c8) ituss_sks_pane_g

0xabde,	// (0x0000abde) ituss_sks_pane_t1

0xabec,	// (0x0000abec) ituss_sks_pane_t2

0x0001,

0xb5cd,	// (0x0000b5cd) ituss_sks_pane_t

0x60cc,	// (0x000060cc) indicator_nsta_pane_cp_g1

0x60d4,	// (0x000060d4) indicator_nsta_pane_cp_g2

0x60dc,	// (0x000060dc) indicator_nsta_pane_cp_g3

0x60cc,	// (0x000060cc) indicator_nsta_pane_cp_g4

0x60d4,	// (0x000060d4) indicator_nsta_pane_cp_g5

0x60dc,	// (0x000060dc) indicator_nsta_pane_cp_g6

0x0005,

0xb176,	// (0x0000b176) indicator_nsta_pane_cp_g

0xed85,	// (0x0000ed85) cell_graphic2_pane_t2_ParamLimits

0xed85,	// (0x0000ed85) cell_graphic2_pane_t2

0x0001,

0xf581,	// (0x0000f581) cell_graphic2_pane_t_ParamLimits

0xf581,	// (0x0000f581) cell_graphic2_pane_t

0xedb9,	// (0x0000edb9) cell_graphic2_control_pane_t1

0xc216,	// (0x0000c216) signal_pane_g3_ParamLimits

0xc216,	// (0x0000c216) signal_pane_g3

0xc22a,	// (0x0000c22a) signal_pane_g4_ParamLimits

0xc22a,	// (0x0000c22a) signal_pane_g4

0xa89b,	// (0x0000a89b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa89b,	// (0x0000a89b) cell_ai5_widget_list_row_pane_t3

0xaa33,	// (0x0000aa33) cell_ituss_key_pane_t1_ParamLimits

0xaa33,	// (0x0000aa33) cell_ituss_key_pane_t1

0x39d8,	// (0x000039d8) form_field_data_wide_pane_vc_t2_ParamLimits

0x39d8,	// (0x000039d8) form_field_data_wide_pane_vc_t2

0x39ec,	// (0x000039ec) form_field_data_wide_pane_vc_t3_ParamLimits

0x39ec,	// (0x000039ec) form_field_data_wide_pane_vc_t3

0x0002,

0xaed2,	// (0x0000aed2) form_field_data_wide_pane_vc_t_ParamLimits

0xaed2,	// (0x0000aed2) form_field_data_wide_pane_vc_t

0x5d93,	// (0x00005d93) form_field_slider_wide_pane_vc_t3_ParamLimits

0x5d93,	// (0x00005d93) form_field_slider_wide_pane_vc_t3

0x5e71,	// (0x00005e71) form_field_popup_wide_pane_vc_t2_ParamLimits

0x5e71,	// (0x00005e71) form_field_popup_wide_pane_vc_t2

0x5e88,	// (0x00005e88) form_field_popup_wide_pane_vc_t3_ParamLimits

0x5e88,	// (0x00005e88) form_field_popup_wide_pane_vc_t3

0x0002,

0xb165,	// (0x0000b165) form_field_popup_wide_pane_vc_t_ParamLimits

0xb165,	// (0x0000b165) form_field_popup_wide_pane_vc_t

0xf04f,	// (0x0000f04f) aid_fshwr2_btn_pane_ParamLimits

0xf060,	// (0x0000f060) aid_fshwr2_syb_pane_ParamLimits

0xf071,	// (0x0000f071) aid_fshwr2_txt_pane_ParamLimits

0x13c2,	// (0x000013c2) fshwr2_bg_pane_ParamLimits

0xf07d,	// (0x0000f07d) fshwr2_func_candi_pane_ParamLimits

0xf09c,	// (0x0000f09c) fshwr2_hwr_syb_pane_ParamLimits

0xf0b7,	// (0x0000f0b7) fshwr2_icf_pane_ParamLimits

0x5cf9,	// (0x00005cf9) list_double_graphic_pane_vc_g4_ParamLimits

0x5cf9,	// (0x00005cf9) list_double_graphic_pane_vc_g4

0xaa27,	// (0x0000aa27) cell_ituss_key_pane_g3_ParamLimits

0xaa27,	// (0x0000aa27) cell_ituss_key_pane_g3

0xaae1,	// (0x0000aae1) cell_ituss_key_t5_ParamLimits

0xaae1,	// (0x0000aae1) cell_ituss_key_t5

0xf234,	// (0x0000f234) popup_fep_vkbss_window_ParamLimits

0x9bf8,	// (0x00009bf8) aid_cell_ai5_quarter

0xf2e1,	// (0x0000f2e1) icf_edit_indi_pane_t1_ParamLimits

0x08e3,	// (0x000008e3) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x08e3,	// (0x000008e3) aid_tch_indicator_popup_pane_cp2

0x08f6,	// (0x000008f6) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x08f6,	// (0x000008f6) aid_tch_query_popup_data_pane_cp2

0x3d78,	// (0x00003d78) aid_tch_query_popup_pane_ParamLimits

0x3d78,	// (0x00003d78) aid_tch_query_popup_pane

0x3d78,	// (0x00003d78) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x3d78,	// (0x00003d78) aid_tch_query_popup_data_pane_cp1
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Normal
