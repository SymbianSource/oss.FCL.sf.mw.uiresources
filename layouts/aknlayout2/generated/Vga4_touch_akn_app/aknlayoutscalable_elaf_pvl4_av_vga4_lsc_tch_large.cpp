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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00049ce3 };

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
0x9b8b,	// (0x0005386e) Screen

0x9b97,	// (0x0005387a) application_window_ParamLimits

0x9b97,	// (0x0005387a) application_window

0x76d5,	// (0x000513b8) screen_g1

0x9bcf,	// (0x000538b2) area_bottom_pane_ParamLimits

0x9bcf,	// (0x000538b2) area_bottom_pane

0xef25,	// (0x00058c08) area_top_pane_ParamLimits

0xef25,	// (0x00058c08) area_top_pane

0xefb9,	// (0x00058c9c) main_pane_ParamLimits

0xefb9,	// (0x00058c9c) main_pane

0x76df,	// (0x000513c2) misc_graphics

0xb9bf,	// (0x000556a2) battery_pane_ParamLimits

0xb9bf,	// (0x000556a2) battery_pane

0x2d68,	// (0x0004ca4b) bg_status_flat_pane_g8

0x2d70,	// (0x0004ca53) bg_status_flat_pane_g9

0x2172,	// (0x0004be55) context_pane_ParamLimits

0x2172,	// (0x0004be55) context_pane

0xbb36,	// (0x00055819) navi_pane_ParamLimits

0xbb36,	// (0x00055819) navi_pane

0xbbc0,	// (0x000558a3) signal_pane_ParamLimits

0xbbc0,	// (0x000558a3) signal_pane

0x0008,

0xf879,	// (0x0005955c) bg_status_flat_pane_g

0xbc50,	// (0x00055933) status_pane_g1_ParamLimits

0xbc50,	// (0x00055933) status_pane_g1

0xbc66,	// (0x00055949) status_pane_g2_ParamLimits

0xbc66,	// (0x00055949) status_pane_g2

0x23b3,	// (0x0004c096) status_pane_g3_ParamLimits

0x23b3,	// (0x0004c096) status_pane_g3

0x0004,

0xf7a5,	// (0x00059488) status_pane_g_ParamLimits

0xf7a5,	// (0x00059488) status_pane_g

0xbc72,	// (0x00055955) title_pane_ParamLimits

0xbc72,	// (0x00055955) title_pane

0xbcd5,	// (0x000559b8) uni_indicator_pane_ParamLimits

0xbcd5,	// (0x000559b8) uni_indicator_pane

0x0401,	// (0x0004a0e4) bg_list_pane_ParamLimits

0x0401,	// (0x0004a0e4) bg_list_pane

0xb1ed,	// (0x00054ed0) find_pane

0xb1f5,	// (0x00054ed8) listscroll_app_pane_ParamLimits

0xb1f5,	// (0x00054ed8) listscroll_app_pane

0x0435,	// (0x0004a118) listscroll_form_pane

0xb205,	// (0x00054ee8) listscroll_gen_pane_ParamLimits

0xb205,	// (0x00054ee8) listscroll_gen_pane

0x0451,	// (0x0004a134) listscroll_set_pane

0x3907,	// (0x0004d5ea) main_idle_act_pane

0xc5f1,	// (0x000562d4) main_idle_trad_pane

0xc5f1,	// (0x000562d4) main_list_empty_pane

0x046b,	// (0x0004a14e) main_midp_pane

0x0477,	// (0x0004a15a) main_pane_g1_ParamLimits

0x0477,	// (0x0004a15a) main_pane_g1

0xb219,	// (0x00054efc) popup_ai_message_window_ParamLimits

0xb219,	// (0x00054efc) popup_ai_message_window

0xb2b9,	// (0x00054f9c) popup_fep_china_uni_window_ParamLimits

0xb2b9,	// (0x00054f9c) popup_fep_china_uni_window

0x0599,	// (0x0004a27c) popup_fep_japan_candidate_window_ParamLimits

0x0599,	// (0x0004a27c) popup_fep_japan_candidate_window

0x05c3,	// (0x0004a2a6) popup_fep_japan_predictive_window_ParamLimits

0x05c3,	// (0x0004a2a6) popup_fep_japan_predictive_window

0xb319,	// (0x00054ffc) popup_find_window

0xb336,	// (0x00055019) popup_grid_graphic_window_ParamLimits

0xb336,	// (0x00055019) popup_grid_graphic_window

0x0634,	// (0x0004a317) popup_large_graphic_colour_window

0xb3da,	// (0x000550bd) popup_menu_window_ParamLimits

0xb3da,	// (0x000550bd) popup_menu_window

0xb5ca,	// (0x000552ad) popup_note_image_window

0xb58a,	// (0x0005526d) popup_note_wait_window_ParamLimits

0xb58a,	// (0x0005526d) popup_note_wait_window

0xb5e2,	// (0x000552c5) popup_note_window_ParamLimits

0xb5e2,	// (0x000552c5) popup_note_window

0xb690,	// (0x00055373) popup_query_code_window_ParamLimits

0xb690,	// (0x00055373) popup_query_code_window

0x1e32,	// (0x0004bb15) popup_query_data_code_window_ParamLimits

0x1e32,	// (0x0004bb15) popup_query_data_code_window

0xb6d0,	// (0x000553b3) popup_query_data_window_ParamLimits

0xb6d0,	// (0x000553b3) popup_query_data_window

0xb764,	// (0x00055447) popup_query_sat_info_window_ParamLimits

0xb764,	// (0x00055447) popup_query_sat_info_window

0xb80f,	// (0x000554f2) popup_snote_single_graphic_window_ParamLimits

0xb80f,	// (0x000554f2) popup_snote_single_graphic_window

0xb80f,	// (0x000554f2) popup_snote_single_text_window_ParamLimits

0xb80f,	// (0x000554f2) popup_snote_single_text_window

0x1ecd,	// (0x0004bbb0) popup_sub_window_general

0x2013,	// (0x0004bcf6) popup_window_general_ParamLimits

0x2013,	// (0x0004bcf6) popup_window_general

0x202c,	// (0x0004bd0f) power_save_pane

0xb05b,	// (0x00054d3e) control_pane_g1_ParamLimits

0xb05b,	// (0x00054d3e) control_pane_g1

0xb084,	// (0x00054d67) control_pane_g2_ParamLimits

0xb084,	// (0x00054d67) control_pane_g2

0xe96a,	// (0x0005864d) control_pane_g3_ParamLimits

0xe96a,	// (0x0005864d) control_pane_g3

0x0007,

0xf78d,	// (0x00059470) control_pane_g_ParamLimits

0xf78d,	// (0x00059470) control_pane_g

0xb0e6,	// (0x00054dc9) control_pane_t1_ParamLimits

0xb0e6,	// (0x00054dc9) control_pane_t1

0xb144,	// (0x00054e27) control_pane_t2_ParamLimits

0xb144,	// (0x00054e27) control_pane_t2

0x0002,

0xf79e,	// (0x00059481) control_pane_t_ParamLimits

0xf79e,	// (0x00059481) control_pane_t

0xafb4,	// (0x00054c97) navi_navi_volume_pane_cp1

0xafbc,	// (0x00054c9f) status_small_icon_pane

0xe936,	// (0x00058619) status_small_pane_g1_ParamLimits

0xe936,	// (0x00058619) status_small_pane_g1

0xafc4,	// (0x00054ca7) status_small_pane_g2_ParamLimits

0xafc4,	// (0x00054ca7) status_small_pane_g2

0xafd0,	// (0x00054cb3) status_small_pane_g3_ParamLimits

0xafd0,	// (0x00054cb3) status_small_pane_g3

0xafdc,	// (0x00054cbf) status_small_pane_g4_ParamLimits

0xafdc,	// (0x00054cbf) status_small_pane_g4

0xafe8,	// (0x00054ccb) status_small_pane_g5_ParamLimits

0xafe8,	// (0x00054ccb) status_small_pane_g5

0xaff6,	// (0x00054cd9) status_small_pane_g6_ParamLimits

0xaff6,	// (0x00054cd9) status_small_pane_g6

0x0007,

0xf77c,	// (0x0005945f) status_small_pane_g_ParamLimits

0xf77c,	// (0x0005945f) status_small_pane_g

0xb025,	// (0x00054d08) status_small_pane_t1

0xb047,	// (0x00054d2a) status_small_wait_pane_ParamLimits

0xb047,	// (0x00054d2a) status_small_wait_pane

0xa971,	// (0x00054654) aid_levels_signal_ParamLimits

0xa971,	// (0x00054654) aid_levels_signal

0xa989,	// (0x0005466c) signal_pane_g1_ParamLimits

0xa989,	// (0x0005466c) signal_pane_g1

0xa9a4,	// (0x00054687) signal_pane_g2_ParamLimits

0xa9a4,	// (0x00054687) signal_pane_g2

0x0003,

0xf70d,	// (0x000593f0) signal_pane_g_ParamLimits

0xf70d,	// (0x000593f0) signal_pane_g

0xa9ec,	// (0x000546cf) context_pane_g1

0x9dbb,	// (0x00053a9e) title_pane_g1

0x9de6,	// (0x00053ac9) title_pane_t1

0x7701,	// (0x000513e4) title_pane_t2

0x7727,	// (0x0005140a) title_pane_t3

0x0002,

0xf557,	// (0x0005923a) title_pane_t

0xbcfd,	// (0x000559e0) aid_levels_battery_ParamLimits

0xbcfd,	// (0x000559e0) aid_levels_battery

0xc5f9,	// (0x000562dc) battery_pane_g1_ParamLimits

0xc5f9,	// (0x000562dc) battery_pane_g1

0xc616,	// (0x000562f9) battery_pane_g2_ParamLimits

0xc616,	// (0x000562f9) battery_pane_g2

0x0001,

0xf7b0,	// (0x00059493) battery_pane_g_ParamLimits

0xf7b0,	// (0x00059493) battery_pane_g

0xc8cc,	// (0x000565af) uni_indicator_pane_g1

0xc8e2,	// (0x000565c5) uni_indicator_pane_g2

0xc8f8,	// (0x000565db) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x00059604) uni_indicator_pane_g

0xada8,	// (0x00054a8b) navi_icon_pane_ParamLimits

0xada8,	// (0x00054a8b) navi_icon_pane

0xace4,	// (0x000549c7) navi_midp_pane

0xadc4,	// (0x00054aa7) navi_navi_pane

0xadce,	// (0x00054ab1) navi_text_pane_ParamLimits

0xadce,	// (0x00054ab1) navi_text_pane

0x76d5,	// (0x000513b8) status_small_wait_pane_g1

0x7a22,	// (0x00051705) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x000595ff) status_small_wait_pane_g

0xc833,	// (0x00056516) navi_navi_icon_text_pane

0xc83b,	// (0x0005651e) navi_navi_pane_g1_ParamLimits

0xc83b,	// (0x0005651e) navi_navi_pane_g1

0xc84d,	// (0x00056530) navi_navi_pane_g2_ParamLimits

0xc84d,	// (0x00056530) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x000595cd) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x000595cd) navi_navi_pane_g

0x33f1,	// (0x0004d0d4) navi_navi_tabs_pane

0xc85f,	// (0x00056542) navi_navi_text_pane

0xc833,	// (0x00056516) navi_navi_volume_pane

0xc821,	// (0x00056504) navi_text_pane_t1

0xc815,	// (0x000564f8) navi_icon_pane_g1

0x32e8,	// (0x0004cfcb) navi_navi_text_pane_t1

0xbee1,	// (0x00055bc4) navi_navi_volume_pane_g1

0xbee9,	// (0x00055bcc) volume_small_pane

0xc75d,	// (0x00056440) navi_navi_icon_text_pane_g1

0xc765,	// (0x00056448) navi_navi_icon_text_pane_t1

0xadc4,	// (0x00054aa7) navi_tabs_2_long_pane

0xadc4,	// (0x00054aa7) navi_tabs_2_pane

0xadc4,	// (0x00054aa7) navi_tabs_3_long_pane

0xadc4,	// (0x00054aa7) navi_tabs_3_pane

0xadc4,	// (0x00054aa7) navi_tabs_4_pane

0xbec1,	// (0x00055ba4) tabs_2_active_pane_ParamLimits

0xbec1,	// (0x00055ba4) tabs_2_active_pane

0xbed1,	// (0x00055bb4) tabs_2_passive_pane_ParamLimits

0xbed1,	// (0x00055bb4) tabs_2_passive_pane

0xbe8f,	// (0x00055b72) tabs_3_active_pane_ParamLimits

0xbe8f,	// (0x00055b72) tabs_3_active_pane

0xbe9f,	// (0x00055b82) tabs_3_passive_pane_ParamLimits

0xbe9f,	// (0x00055b82) tabs_3_passive_pane

0xbeb0,	// (0x00055b93) tabs_3_passive_pane_cp_ParamLimits

0xbeb0,	// (0x00055b93) tabs_3_passive_pane_cp

0xbe4b,	// (0x00055b2e) tabs_4_active_pane_ParamLimits

0xbe4b,	// (0x00055b2e) tabs_4_active_pane

0xbe5c,	// (0x00055b3f) tabs_4_passive_pane_ParamLimits

0xbe5c,	// (0x00055b3f) tabs_4_passive_pane

0xbe6d,	// (0x00055b50) tabs_4_passive_pane_cp_ParamLimits

0xbe6d,	// (0x00055b50) tabs_4_passive_pane_cp

0xbe7e,	// (0x00055b61) tabs_4_passive_pane_cp2_ParamLimits

0xbe7e,	// (0x00055b61) tabs_4_passive_pane_cp2

0xbe27,	// (0x00055b0a) tabs_2_long_active_pane_ParamLimits

0xbe27,	// (0x00055b0a) tabs_2_long_active_pane

0xbe39,	// (0x00055b1c) tabs_2_long_passive_pane_ParamLimits

0xbe39,	// (0x00055b1c) tabs_2_long_passive_pane

0xbddc,	// (0x00055abf) tabs_3_long_active_pane_ParamLimits

0xbddc,	// (0x00055abf) tabs_3_long_active_pane

0xbdf5,	// (0x00055ad8) tabs_3_long_passive_pane_ParamLimits

0xbdf5,	// (0x00055ad8) tabs_3_long_passive_pane

0xbe0e,	// (0x00055af1) tabs_3_long_passive_pane_cp_ParamLimits

0xbe0e,	// (0x00055af1) tabs_3_long_passive_pane_cp

0x0967,	// (0x0004a64a) volume_small_pane_g1

0xbd8b,	// (0x00055a6e) volume_small_pane_g2

0xbd94,	// (0x00055a77) volume_small_pane_g3

0xbd9d,	// (0x00055a80) volume_small_pane_g4

0xbda6,	// (0x00055a89) volume_small_pane_g5

0xbdaf,	// (0x00055a92) volume_small_pane_g6

0xbdb8,	// (0x00055a9b) volume_small_pane_g7

0xbdc1,	// (0x00055aa4) volume_small_pane_g8

0xbdca,	// (0x00055aad) volume_small_pane_g9

0xbdd3,	// (0x00055ab6) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x00059599) volume_small_pane_g

0x786c,	// (0x0005154f) bg_active_tab_pane_cp2_ParamLimits

0x786c,	// (0x0005154f) bg_active_tab_pane_cp2

0x9e72,	// (0x00053b55) tabs_3_active_pane_g1

0x9e7a,	// (0x00053b5d) tabs_3_active_pane_t1

0x786c,	// (0x0005154f) bg_passive_tab_pane_cp2_ParamLimits

0x786c,	// (0x0005154f) bg_passive_tab_pane_cp2

0x9e72,	// (0x00053b55) tabs_3_passive_pane_g1

0x9e7a,	// (0x00053b5d) tabs_3_passive_pane_t1

0x786c,	// (0x0005154f) bg_active_tab_pane_cp3_ParamLimits

0x786c,	// (0x0005154f) bg_active_tab_pane_cp3

0x9e8c,	// (0x00053b6f) tabs_4_active_pane_g1

0x9e94,	// (0x00053b77) tabs_4_active_pane_t1

0x786c,	// (0x0005154f) bg_passive_tab_pane_cp3_ParamLimits

0x786c,	// (0x0005154f) bg_passive_tab_pane_cp3

0x9e8c,	// (0x00053b6f) tabs_4_1_passive_pane_g1

0x9e94,	// (0x00053b77) tabs_4_1_passive_pane_t1

0x046b,	// (0x0004a14e) list_highlight_pane_cp2

0xc98d,	// (0x00056670) list_set_pane_ParamLimits

0xc98d,	// (0x00056670) list_set_pane

0xca55,	// (0x00056738) main_pane_set_t1_ParamLimits

0xca55,	// (0x00056738) main_pane_set_t1

0xca75,	// (0x00056758) main_pane_set_t2_ParamLimits

0xca75,	// (0x00056758) main_pane_set_t2

0xca89,	// (0x0005676c) main_pane_set_t3_ParamLimits

0xca89,	// (0x0005676c) main_pane_set_t3

0xca9d,	// (0x00056780) main_pane_set_t4_ParamLimits

0xca9d,	// (0x00056780) main_pane_set_t4

0x0003,

0xf986,	// (0x00059669) main_pane_set_t_ParamLimits

0xf986,	// (0x00059669) main_pane_set_t

0xcab1,	// (0x00056794) setting_code_pane

0x3a5b,	// (0x0004d73e) setting_slider_graphic_pane

0x3a5b,	// (0x0004d73e) setting_slider_pane

0x3a5b,	// (0x0004d73e) setting_text_pane

0x3a5b,	// (0x0004d73e) setting_volume_pane

0xf0c8,	// (0x00058dab) volume_set_pane

0x7739,	// (0x0005141c) bg_set_opt_pane_cp

0xf0d2,	// (0x00058db5) setting_slider_pane_t1

0xf0eb,	// (0x00058dce) setting_slider_pane_t2

0xf105,	// (0x00058de8) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00059241) setting_slider_pane_t

0xf11d,	// (0x00058e00) slider_set_pane

0x76df,	// (0x000513c2) bg_set_opt_pane_cp2

0x7747,	// (0x0005142a) setting_slider_graphic_pane_g1

0xf133,	// (0x00058e16) setting_slider_graphic_pane_t1

0xf143,	// (0x00058e26) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00059248) setting_slider_graphic_pane_t

0xf153,	// (0x00058e36) slider_set_pane_cp

0x76df,	// (0x000513c2) input_focus_pane_cp1

0x38ee,	// (0x0004d5d1) list_set_text_pane

0x76d5,	// (0x000513b8) setting_text_pane_g1

0x76df,	// (0x000513c2) input_focus_pane_cp2

0x76d5,	// (0x000513b8) setting_code_pane_g1

0x7750,	// (0x00051433) setting_code_pane_t1

0xe6ce,	// (0x000583b1) set_text_pane_t1_ParamLimits

0xe6ce,	// (0x000583b1) set_text_pane_t1

0xa299,	// (0x00053f7c) set_opt_bg_pane_g1

0xa2a1,	// (0x00053f84) set_opt_bg_pane_g2

0x38c6,	// (0x0004d5a9) set_opt_bg_pane_g3

0xa2b1,	// (0x00053f94) set_opt_bg_pane_g4

0xa2b9,	// (0x00053f9c) set_opt_bg_pane_g5

0xa2c1,	// (0x00053fa4) set_opt_bg_pane_g6

0x38d0,	// (0x0004d5b3) set_opt_bg_pane_g7

0x38da,	// (0x0004d5bd) set_opt_bg_pane_g8

0x38e4,	// (0x0004d5c7) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x00059656) set_opt_bg_pane_g

0x38b9,	// (0x0004d59c) slider_set_pane_g1

0x0b4b,	// (0x0004a82e) slider_set_pane_g2

0x0006,

0xf964,	// (0x00059647) slider_set_pane_g

0x0ad3,	// (0x0004a7b6) volume_set_pane_g1

0x0add,	// (0x0004a7c0) volume_set_pane_g2

0x0ae7,	// (0x0004a7ca) volume_set_pane_g3

0x0af1,	// (0x0004a7d4) volume_set_pane_g4

0x0afb,	// (0x0004a7de) volume_set_pane_g5

0x0b05,	// (0x0004a7e8) volume_set_pane_g6

0x0b0f,	// (0x0004a7f2) volume_set_pane_g7

0x0b19,	// (0x0004a7fc) volume_set_pane_g8

0x0b23,	// (0x0004a806) volume_set_pane_g9

0x0b2d,	// (0x0004a810) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0005961f) volume_set_pane_g

0x9ea6,	// (0x00053b89) indicator_pane_ParamLimits

0x9ea6,	// (0x00053b89) indicator_pane

0x9ed2,	// (0x00053bb5) main_idle_pane_g2_ParamLimits

0x9ed2,	// (0x00053bb5) main_idle_pane_g2

0x9f0a,	// (0x00053bed) main_pane_idle_g1_ParamLimits

0x9f0a,	// (0x00053bed) main_pane_idle_g1

0x775e,	// (0x00051441) popup_clock_digital_analogue_window_ParamLimits

0x775e,	// (0x00051441) popup_clock_digital_analogue_window

0x9f38,	// (0x00053c1b) soft_indicator_pane_ParamLimits

0x9f38,	// (0x00053c1b) soft_indicator_pane

0x9f54,	// (0x00053c37) wallpaper_pane_ParamLimits

0x9f54,	// (0x00053c37) wallpaper_pane

0x76d5,	// (0x000513b8) wallpaper_pane_g1

0x9f66,	// (0x00053c49) indicator_pane_g1_ParamLimits

0x9f66,	// (0x00053c49) indicator_pane_g1

0x3d37,	// (0x0004da1a) navi_navi_icon_text_pane_srt_g1

0x778c,	// (0x0005146f) soft_indicator_pane_t1

0x77a6,	// (0x00051489) aid_ps_area_pane

0x9f7f,	// (0x00053c62) aid_ps_clock_pane

0x77b7,	// (0x0005149a) aid_ps_indicator_pane

0x77c3,	// (0x000514a6) indicator_ps_pane_ParamLimits

0x77c3,	// (0x000514a6) indicator_ps_pane

0x77d2,	// (0x000514b5) power_save_pane_g1_ParamLimits

0x77d2,	// (0x000514b5) power_save_pane_g1

0x77de,	// (0x000514c1) power_save_pane_g2_ParamLimits

0x77de,	// (0x000514c1) power_save_pane_g2

0xe6ae,	// (0x00058391) aid_navinavi_width_pane

0x77a6,	// (0x00051489) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0005924d) power_save_pane_g_ParamLimits

0xf56a,	// (0x0005924d) power_save_pane_g

0x77ec,	// (0x000514cf) power_save_pane_t1_ParamLimits

0x77ec,	// (0x000514cf) power_save_pane_t1

0x9f7f,	// (0x00053c62) aid_ps_clock_pane_ParamLimits

0x77b7,	// (0x0005149a) aid_ps_indicator_pane_ParamLimits

0x77fe,	// (0x000514e1) power_save_pane_t4_ParamLimits

0x77fe,	// (0x000514e1) power_save_pane_t4

0x0001,

0xf56f,	// (0x00059252) power_save_pane_t_ParamLimits

0xf56f,	// (0x00059252) power_save_pane_t

0x7828,	// (0x0005150b) power_save_t3_ParamLimits

0x7828,	// (0x0005150b) power_save_t3

0x7813,	// (0x000514f6) power_save_t2_ParamLimits

0x7813,	// (0x000514f6) power_save_t2

0x783d,	// (0x00051520) indicator_ps_pane_g1

0x9f8d,	// (0x00053c70) ai_gene_pane_ParamLimits

0x9f8d,	// (0x00053c70) ai_gene_pane

0x9fa4,	// (0x00053c87) ai_links_pane_ParamLimits

0x9fa4,	// (0x00053c87) ai_links_pane

0x9fbc,	// (0x00053c9f) indicator_pane_cp1_ParamLimits

0x9fbc,	// (0x00053c9f) indicator_pane_cp1

0x9fcb,	// (0x00053cae) main_pane_idle_g1_cp_ParamLimits

0x9fcb,	// (0x00053cae) main_pane_idle_g1_cp

0x7846,	// (0x00051529) popup_ai_links_title_window

0x9fe3,	// (0x00053cc6) soft_indicator_pane_cp1_ParamLimits

0x9fe3,	// (0x00053cc6) soft_indicator_pane_cp1

0x36a0,	// (0x0004d383) ai_links_pane_g1

0x36a9,	// (0x0004d38c) grid_ai_links_pane

0xc8c3,	// (0x000565a6) ai_gene_pane_1

0x368e,	// (0x0004d371) ai_gene_pane_2

0x3697,	// (0x0004d37a) list_highlight_pane_cp4

0xc89f,	// (0x00056582) cell_ai_link_pane_ParamLimits

0xc89f,	// (0x00056582) cell_ai_link_pane

0x365d,	// (0x0004d340) cell_ai_link_pane_g1

0x7a22,	// (0x00051705) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x000595fa) cell_ai_link_pane_g

0x76df,	// (0x000513c2) grid_highlight_cp2

0x76df,	// (0x000513c2) bg_popup_sub_pane_cp1

0x785d,	// (0x00051540) popup_ai_links_title_window_t1

0x35a9,	// (0x0004d28c) ai_gene_pane_1_g1_ParamLimits

0x35a9,	// (0x0004d28c) ai_gene_pane_1_g1

0x35b5,	// (0x0004d298) ai_gene_pane_1_g2_ParamLimits

0x35b5,	// (0x0004d298) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x000595f0) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x000595f0) ai_gene_pane_1_g

0x35c2,	// (0x0004d2a5) ai_gene_pane_1_t1_ParamLimits

0x35c2,	// (0x0004d2a5) ai_gene_pane_1_t1

0x35f6,	// (0x0004d2d9) grid_ai_soft_ind_pane

0x3594,	// (0x0004d277) ai_gene_pane_2_t1_ParamLimits

0x3594,	// (0x0004d277) ai_gene_pane_2_t1

0x9ff7,	// (0x00053cda) main_pane_empty_t1_ParamLimits

0x9ff7,	// (0x00053cda) main_pane_empty_t1

0xa00f,	// (0x00053cf2) main_pane_empty_t2_ParamLimits

0xa00f,	// (0x00053cf2) main_pane_empty_t2

0xa024,	// (0x00053d07) main_pane_empty_t3_ParamLimits

0xa024,	// (0x00053d07) main_pane_empty_t3

0xa036,	// (0x00053d19) main_pane_empty_t4_ParamLimits

0xa036,	// (0x00053d19) main_pane_empty_t4

0xa048,	// (0x00053d2b) main_pane_empty_t5_ParamLimits

0xa048,	// (0x00053d2b) main_pane_empty_t5

0x0004,

0xf574,	// (0x00059257) main_pane_empty_t_ParamLimits

0xf574,	// (0x00059257) main_pane_empty_t

0xa2ea,	// (0x00053fcd) bg_popup_window_pane_ParamLimits

0xa2ea,	// (0x00053fcd) bg_popup_window_pane

0x32f6,	// (0x0004cfd9) find_popup_pane_cp2_ParamLimits

0x32f6,	// (0x0004cfd9) find_popup_pane_cp2

0x3302,	// (0x0004cfe5) heading_pane_ParamLimits

0x3302,	// (0x0004cfe5) heading_pane

0x76df,	// (0x000513c2) bg_popup_sub_pane

0xc782,	// (0x00056465) bg_popup_window_pane_g1_ParamLimits

0xc782,	// (0x00056465) bg_popup_window_pane_g1

0xc791,	// (0x00056474) bg_popup_window_pane_g2_ParamLimits

0xc791,	// (0x00056474) bg_popup_window_pane_g2

0xc79d,	// (0x00056480) bg_popup_window_pane_g3_ParamLimits

0xc79d,	// (0x00056480) bg_popup_window_pane_g3

0xc7a9,	// (0x0005648c) bg_popup_window_pane_g4_ParamLimits

0xc7a9,	// (0x0005648c) bg_popup_window_pane_g4

0xc7b8,	// (0x0005649b) bg_popup_window_pane_g5_ParamLimits

0xc7b8,	// (0x0005649b) bg_popup_window_pane_g5

0xc7c8,	// (0x000564ab) bg_popup_window_pane_g6_ParamLimits

0xc7c8,	// (0x000564ab) bg_popup_window_pane_g6

0xc7d4,	// (0x000564b7) bg_popup_window_pane_g7_ParamLimits

0xc7d4,	// (0x000564b7) bg_popup_window_pane_g7

0xc7e3,	// (0x000564c6) bg_popup_window_pane_g8_ParamLimits

0xc7e3,	// (0x000564c6) bg_popup_window_pane_g8

0xc7f2,	// (0x000564d5) bg_popup_window_pane_g9_ParamLimits

0xc7f2,	// (0x000564d5) bg_popup_window_pane_g9

0x32dc,	// (0x0004cfbf) bg_popup_window_pane_g10_ParamLimits

0x32dc,	// (0x0004cfbf) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x000595b8) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x000595b8) bg_popup_window_pane_g

0x3205,	// (0x0004cee8) bg_popup_heading_pane_ParamLimits

0x3205,	// (0x0004cee8) bg_popup_heading_pane

0x0c13,	// (0x0004a8f6) tabs_4_passive_pane_cp_srt_ParamLimits

0x0c13,	// (0x0004a8f6) tabs_4_passive_pane_cp_srt

0x0c25,	// (0x0004a908) tabs_4_passive_pane_srt_ParamLimits

0x3219,	// (0x0004cefc) heading_pane_g2

0x0c25,	// (0x0004a908) tabs_4_passive_pane_srt

0x25b2,	// (0x0004c295) bg_passive_tab_pane_cp3_srt_ParamLimits

0x25b2,	// (0x0004c295) bg_passive_tab_pane_cp3_srt

0x3221,	// (0x0004cf04) heading_pane_t1_ParamLimits

0x3221,	// (0x0004cf04) heading_pane_t1

0x3238,	// (0x0004cf1b) heading_pane_t2_ParamLimits

0x3238,	// (0x0004cf1b) heading_pane_t2

0x0001,

0xf8d0,	// (0x000595b3) heading_pane_t_ParamLimits

0xf8d0,	// (0x000595b3) heading_pane_t

0x2d30,	// (0x0004ca13) bg_popup_heading_pane_g1

0x2ddf,	// (0x0004cac2) bg_popup_heading_pane_g2

0x2de9,	// (0x0004cacc) bg_popup_heading_pane_g3

0x2df3,	// (0x0004cad6) bg_popup_heading_pane_g4

0x2dfd,	// (0x0004cae0) bg_popup_heading_pane_g5

0x2e07,	// (0x0004caea) bg_popup_heading_pane_g6

0x2e0f,	// (0x0004caf2) bg_popup_heading_pane_g7

0x2e17,	// (0x0004cafa) bg_popup_heading_pane_g8

0x2e21,	// (0x0004cb04) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0005956f) bg_popup_heading_pane_g

0x253e,	// (0x0004c221) bg_popup_sub_pane_g1

0x2546,	// (0x0004c229) bg_popup_sub_pane_g2

0x254e,	// (0x0004c231) bg_popup_sub_pane_g3

0x2556,	// (0x0004c239) bg_popup_sub_pane_g4

0x255e,	// (0x0004c241) bg_popup_sub_pane_g5

0x2566,	// (0x0004c249) bg_popup_sub_pane_g6

0x256e,	// (0x0004c251) bg_popup_sub_pane_g7

0x2576,	// (0x0004c259) bg_popup_sub_pane_g8

0x257e,	// (0x0004c261) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x00059549) bg_popup_sub_pane_g

0x786c,	// (0x0005154f) bg_popup_window_pane_cp5_ParamLimits

0x786c,	// (0x0005154f) bg_popup_window_pane_cp5

0x7888,	// (0x0005156b) popup_note_window_g1_ParamLimits

0x7888,	// (0x0005156b) popup_note_window_g1

0x7894,	// (0x00051577) popup_note_window_t1_ParamLimits

0x7894,	// (0x00051577) popup_note_window_t1

0x78aa,	// (0x0005158d) popup_note_window_t2_ParamLimits

0x78aa,	// (0x0005158d) popup_note_window_t2

0x78c0,	// (0x000515a3) popup_note_window_t3_ParamLimits

0x78c0,	// (0x000515a3) popup_note_window_t3

0x78d6,	// (0x000515b9) popup_note_window_t4_ParamLimits

0x78d6,	// (0x000515b9) popup_note_window_t4

0x78fe,	// (0x000515e1) popup_note_window_t5_ParamLimits

0x78fe,	// (0x000515e1) popup_note_window_t5

0x0004,

0xf57f,	// (0x00059262) popup_note_window_t_ParamLimits

0xf57f,	// (0x00059262) popup_note_window_t

0x7922,	// (0x00051605) bg_popup_window_pane_cp6_ParamLimits

0x7922,	// (0x00051605) bg_popup_window_pane_cp6

0x2cac,	// (0x0004c98f) popup_note_image_window_g1_ParamLimits

0x2cac,	// (0x0004c98f) popup_note_image_window_g1

0x2cb8,	// (0x0004c99b) popup_note_image_window_g2_ParamLimits

0x2cb8,	// (0x0004c99b) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0005953d) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0005953d) popup_note_image_window_g

0x2cd1,	// (0x0004c9b4) popup_note_image_window_t1_ParamLimits

0x2cd1,	// (0x0004c9b4) popup_note_image_window_t1

0x2cea,	// (0x0004c9cd) popup_note_image_window_t2_ParamLimits

0x2cea,	// (0x0004c9cd) popup_note_image_window_t2

0x2d03,	// (0x0004c9e6) popup_note_image_window_t3_ParamLimits

0x2d03,	// (0x0004c9e6) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x00059542) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x00059542) popup_note_image_window_t

0x2b6c,	// (0x0004c84f) bg_popup_window_pane_cp7_ParamLimits

0x2b6c,	// (0x0004c84f) bg_popup_window_pane_cp7

0x2b9c,	// (0x0004c87f) popup_note_wait_window_g1_ParamLimits

0x2b9c,	// (0x0004c87f) popup_note_wait_window_g1

0x2ba8,	// (0x0004c88b) popup_note_wait_window_g2_ParamLimits

0x2ba8,	// (0x0004c88b) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0005952b) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0005952b) popup_note_wait_window_g

0x2bc0,	// (0x0004c8a3) popup_note_wait_window_t1_ParamLimits

0x2bc0,	// (0x0004c8a3) popup_note_wait_window_t1

0x2be7,	// (0x0004c8ca) popup_note_wait_window_t2_ParamLimits

0x2be7,	// (0x0004c8ca) popup_note_wait_window_t2

0x2c05,	// (0x0004c8e8) popup_note_wait_window_t3_ParamLimits

0x2c05,	// (0x0004c8e8) popup_note_wait_window_t3

0x2c18,	// (0x0004c8fb) popup_note_wait_window_t4_ParamLimits

0x2c18,	// (0x0004c8fb) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x00059532) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x00059532) popup_note_wait_window_t

0x2c3d,	// (0x0004c920) wait_bar_pane_ParamLimits

0x2c3d,	// (0x0004c920) wait_bar_pane

0x76df,	// (0x000513c2) wait_anim_pane

0x76df,	// (0x000513c2) wait_border_pane

0x76d5,	// (0x000513b8) wait_anim_pane_g1

0x76d5,	// (0x000513b8) wait_anim_pane_g2

0x0001,

0xf708,	// (0x000593eb) wait_anim_pane_g

0x2b10,	// (0x0004c7f3) wait_border_pane_g1

0x2b1b,	// (0x0004c7fe) wait_border_pane_g2

0x2b24,	// (0x0004c807) wait_border_pane_g3

0x0002,

0xf841,	// (0x00059524) wait_border_pane_g

0x297a,	// (0x0004c65d) bg_popup_window_pane_cp16_ParamLimits

0x297a,	// (0x0004c65d) bg_popup_window_pane_cp16

0x2a7a,	// (0x0004c75d) indicator_popup_pane_cp4_ParamLimits

0x2a7a,	// (0x0004c75d) indicator_popup_pane_cp4

0x2a8e,	// (0x0004c771) popup_query_data_window_t1_ParamLimits

0x2a8e,	// (0x0004c771) popup_query_data_window_t1

0x2aa0,	// (0x0004c783) popup_query_data_window_t2_ParamLimits

0x2aa0,	// (0x0004c783) popup_query_data_window_t2

0x2ab9,	// (0x0004c79c) popup_query_data_window_t3_ParamLimits

0x2ab9,	// (0x0004c79c) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0005951d) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0005951d) popup_query_data_window_t

0x2ad3,	// (0x0004c7b6) query_popup_data_pane_ParamLimits

0x2ad3,	// (0x0004c7b6) query_popup_data_pane

0x2ae7,	// (0x0004c7ca) query_popup_data_pane_cp1_ParamLimits

0x2ae7,	// (0x0004c7ca) query_popup_data_pane_cp1

0x297a,	// (0x0004c65d) bg_popup_window_pane_cp10_ParamLimits

0x297a,	// (0x0004c65d) bg_popup_window_pane_cp10

0x29ac,	// (0x0004c68f) indicator_popup_pane_ParamLimits

0x29ac,	// (0x0004c68f) indicator_popup_pane

0x29ce,	// (0x0004c6b1) popup_query_code_window_t1_ParamLimits

0x29ce,	// (0x0004c6b1) popup_query_code_window_t1

0x29e8,	// (0x0004c6cb) popup_query_code_window_t2_ParamLimits

0x29e8,	// (0x0004c6cb) popup_query_code_window_t2

0x2a31,	// (0x0004c714) popup_query_code_window_t3_ParamLimits

0x2a31,	// (0x0004c714) popup_query_code_window_t3

0x0002,

0xf833,	// (0x00059516) popup_query_code_window_t_ParamLimits

0xf833,	// (0x00059516) popup_query_code_window_t

0x2a60,	// (0x0004c743) query_popup_pane_ParamLimits

0x2a60,	// (0x0004c743) query_popup_pane

0x7922,	// (0x00051605) bg_popup_window_pane_cp15_ParamLimits

0x7922,	// (0x00051605) bg_popup_window_pane_cp15

0x7942,	// (0x00051625) indicator_popup_pane_cp1_ParamLimits

0x7942,	// (0x00051625) indicator_popup_pane_cp1

0x7955,	// (0x00051638) indicator_popup_pane_cp2_ParamLimits

0x7955,	// (0x00051638) indicator_popup_pane_cp2

0x7970,	// (0x00051653) popup_query_data_code_window_g1_ParamLimits

0x7970,	// (0x00051653) popup_query_data_code_window_g1

0x7983,	// (0x00051666) popup_query_data_code_window_t1_ParamLimits

0x7983,	// (0x00051666) popup_query_data_code_window_t1

0x7995,	// (0x00051678) popup_query_data_code_window_t2_ParamLimits

0x7995,	// (0x00051678) popup_query_data_code_window_t2

0x79a7,	// (0x0005168a) popup_query_data_code_window_t3_ParamLimits

0x79a7,	// (0x0005168a) popup_query_data_code_window_t3

0x79bd,	// (0x000516a0) popup_query_data_code_window_t4_ParamLimits

0x79bd,	// (0x000516a0) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0005926d) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0005926d) popup_query_data_code_window_t

0xad64,	// (0x00054a47) list_single_midp_graphic_pane_g3

0x79d7,	// (0x000516ba) query_popup_data_pane_cp2_ParamLimits

0x79ea,	// (0x000516cd) query_popup_pane_cp2_ParamLimits

0x79ea,	// (0x000516cd) query_popup_pane_cp2

0x76df,	// (0x000513c2) bg_popup_window_pane_cp11

0x2972,	// (0x0004c655) heading_pane_cp5

0x7a80,	// (0x00051763) listscroll_popup_info_pane

0x76df,	// (0x000513c2) input_focus_pane_cp3

0x7a05,	// (0x000516e8) query_popup_pane_t1

0x7a13,	// (0x000516f6) list_popup_info_pane_ParamLimits

0x7a13,	// (0x000516f6) list_popup_info_pane

0x7a22,	// (0x00051705) listscroll_popup_info_pane_g1

0x7a2a,	// (0x0005170d) scroll_pane_cp7

0x7a34,	// (0x00051717) popup_info_list_pane_t1_ParamLimits

0x7a34,	// (0x00051717) popup_info_list_pane_t1

0x7a4e,	// (0x00051731) popup_info_list_pane_t2_ParamLimits

0x7a4e,	// (0x00051731) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00059276) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00059276) popup_info_list_pane_t

0x76df,	// (0x000513c2) bg_popup_window_pane_cp12

0x3d51,	// (0x0004da34) find_popup_pane

0x7739,	// (0x0005141c) bg_popup_window_pane_cp3

0x7a68,	// (0x0005174b) heading_pane_cp3

0x7a74,	// (0x00051757) listscroll_popup_graphic_pane

0x76df,	// (0x000513c2) bg_popup_window_pane_cp4

0xa0aa,	// (0x00053d8d) heading_pane_cp4

0x7a80,	// (0x00051763) listscroll_popup_colour_pane

0xa0b4,	// (0x00053d97) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa0b4,	// (0x00053d97) cell_large_graphic_colour_none_popup_pane

0xa0c8,	// (0x00053dab) grid_large_graphic_colour_popup_pane_ParamLimits

0xa0c8,	// (0x00053dab) grid_large_graphic_colour_popup_pane

0xa0ec,	// (0x00053dcf) listscroll_popup_colour_pane_g1_ParamLimits

0xa0ec,	// (0x00053dcf) listscroll_popup_colour_pane_g1

0xa103,	// (0x00053de6) listscroll_popup_colour_pane_g2_ParamLimits

0xa103,	// (0x00053de6) listscroll_popup_colour_pane_g2

0xa11a,	// (0x00053dfd) listscroll_popup_colour_pane_g3_ParamLimits

0xa11a,	// (0x00053dfd) listscroll_popup_colour_pane_g3

0xa12a,	// (0x00053e0d) listscroll_popup_colour_pane_g4_ParamLimits

0xa12a,	// (0x00053e0d) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0005927b) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0005927b) listscroll_popup_colour_pane_g

0x7a88,	// (0x0005176b) scroll_pane_cp6_ParamLimits

0x7a88,	// (0x0005176b) scroll_pane_cp6

0xa13a,	// (0x00053e1d) cell_large_graphic_colour_popup_pane_ParamLimits

0xa13a,	// (0x00053e1d) cell_large_graphic_colour_popup_pane

0x7a9a,	// (0x0005177d) cell_large_graphic_colour_none_popup_pane_t1

0x76df,	// (0x000513c2) grid_highlight_pane_cp5

0x7aa9,	// (0x0005178c) cell_large_graphic_colour_popup_pane_g1

0x7ab1,	// (0x00051794) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00059284) cell_large_graphic_colour_popup_pane_g

0x7ab9,	// (0x0005179c) cell_large_graphic_colour_popup_pane_g2_copy1

0x7ac2,	// (0x000517a5) grid_highlight_pane_cp4

0x7aca,	// (0x000517ad) bg_popup_window_pane_cp8_ParamLimits

0x7aca,	// (0x000517ad) bg_popup_window_pane_cp8

0x7ae5,	// (0x000517c8) popup_snote_single_text_window_g1_ParamLimits

0x7ae5,	// (0x000517c8) popup_snote_single_text_window_g1

0x7af7,	// (0x000517da) popup_snote_single_text_window_t1_ParamLimits

0x7af7,	// (0x000517da) popup_snote_single_text_window_t1

0x7b0a,	// (0x000517ed) popup_snote_single_text_window_t2_ParamLimits

0x7b0a,	// (0x000517ed) popup_snote_single_text_window_t2

0x7b1d,	// (0x00051800) popup_snote_single_text_window_t3_ParamLimits

0x7b1d,	// (0x00051800) popup_snote_single_text_window_t3

0x7b56,	// (0x00051839) popup_snote_single_text_window_t4_ParamLimits

0x7b56,	// (0x00051839) popup_snote_single_text_window_t4

0x7b8a,	// (0x0005186d) popup_snote_single_text_window_t5_ParamLimits

0x7b8a,	// (0x0005186d) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00059289) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00059289) popup_snote_single_text_window_t

0x7bb9,	// (0x0005189c) bg_popup_window_pane_cp9_ParamLimits

0x7bb9,	// (0x0005189c) bg_popup_window_pane_cp9

0x7ae5,	// (0x000517c8) popup_snote_single_graphic_window_g1_ParamLimits

0x7ae5,	// (0x000517c8) popup_snote_single_graphic_window_g1

0x7bc7,	// (0x000518aa) popup_snote_single_graphic_window_g2_ParamLimits

0x7bc7,	// (0x000518aa) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00059294) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00059294) popup_snote_single_graphic_window_g

0x7bd3,	// (0x000518b6) popup_snote_single_graphic_window_t1_ParamLimits

0x7bd3,	// (0x000518b6) popup_snote_single_graphic_window_t1

0x7be6,	// (0x000518c9) popup_snote_single_graphic_window_t2_ParamLimits

0x7be6,	// (0x000518c9) popup_snote_single_graphic_window_t2

0x7bf9,	// (0x000518dc) popup_snote_single_graphic_window_t3_ParamLimits

0x7bf9,	// (0x000518dc) popup_snote_single_graphic_window_t3

0x7c32,	// (0x00051915) popup_snote_single_graphic_window_t4_ParamLimits

0x7c32,	// (0x00051915) popup_snote_single_graphic_window_t4

0x7c66,	// (0x00051949) popup_snote_single_graphic_window_t5_ParamLimits

0x7c66,	// (0x00051949) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00059299) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00059299) popup_snote_single_graphic_window_t

0x3c8f,	// (0x0004d972) grid_graphic_popup_pane_ParamLimits

0x3c8f,	// (0x0004d972) grid_graphic_popup_pane

0x3cbd,	// (0x0004d9a0) listscroll_popup_graphic_pane_g1_ParamLimits

0x3cbd,	// (0x0004d9a0) listscroll_popup_graphic_pane_g1

0xcbb6,	// (0x00056899) listscroll_popup_graphic_pane_g2_ParamLimits

0xcbb6,	// (0x00056899) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x00059693) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x00059693) listscroll_popup_graphic_pane_g

0x3ce5,	// (0x0004d9c8) scroll_pane_cp5

0xcb75,	// (0x00056858) cell_graphic_popup_pane_ParamLimits

0xcb75,	// (0x00056858) cell_graphic_popup_pane

0x3c18,	// (0x0004d8fb) cell_graphic_popup_pane_g1

0x3c20,	// (0x0004d903) cell_graphic_popup_pane_g2

0x7ab9,	// (0x0005179c) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0005968c) cell_graphic_popup_pane_g

0x3c29,	// (0x0004d90c) cell_graphic_popup_pane_t2

0x7ac2,	// (0x000517a5) grid_highlight_pane_cp3

0x7ca7,	// (0x0005198a) list_gen_pane_ParamLimits

0x7ca7,	// (0x0005198a) list_gen_pane

0x7ccf,	// (0x000519b2) scroll_pane

0xcb2c,	// (0x0005680f) bg_list_pane_g1_ParamLimits

0xcb2c,	// (0x0005680f) bg_list_pane_g1

0x3b8d,	// (0x0004d870) bg_list_pane_g2_ParamLimits

0x3b8d,	// (0x0004d870) bg_list_pane_g2

0x3ba2,	// (0x0004d885) bg_list_pane_g3_ParamLimits

0x3ba2,	// (0x0004d885) bg_list_pane_g3

0x3bb6,	// (0x0004d899) bg_list_pane_g4_ParamLimits

0x3bb6,	// (0x0004d899) bg_list_pane_g4

0xcb49,	// (0x0005682c) bg_list_pane_g5_ParamLimits

0xcb49,	// (0x0005682c) bg_list_pane_g5

0x0004,

0xf99e,	// (0x00059681) bg_list_pane_g_ParamLimits

0xf99e,	// (0x00059681) bg_list_pane_g

0xcaef,	// (0x000567d2) list_double2_graphic_large_graphic_pane_ParamLimits

0xcaef,	// (0x000567d2) list_double2_graphic_large_graphic_pane

0xcaef,	// (0x000567d2) list_double2_graphic_pane_ParamLimits

0xcaef,	// (0x000567d2) list_double2_graphic_pane

0xcaef,	// (0x000567d2) list_double2_large_graphic_pane_ParamLimits

0xcaef,	// (0x000567d2) list_double2_large_graphic_pane

0xcaef,	// (0x000567d2) list_double2_pane_ParamLimits

0xcaef,	// (0x000567d2) list_double2_pane

0xcaef,	// (0x000567d2) list_double_graphic_heading_pane_ParamLimits

0xcaef,	// (0x000567d2) list_double_graphic_heading_pane

0xcaef,	// (0x000567d2) list_double_graphic_pane_ParamLimits

0xcaef,	// (0x000567d2) list_double_graphic_pane

0xcaef,	// (0x000567d2) list_double_heading_pane_ParamLimits

0xcaef,	// (0x000567d2) list_double_heading_pane

0xcaef,	// (0x000567d2) list_double_large_graphic_pane_ParamLimits

0xcaef,	// (0x000567d2) list_double_large_graphic_pane

0xcaef,	// (0x000567d2) list_double_number_pane_ParamLimits

0xcaef,	// (0x000567d2) list_double_number_pane

0xcaef,	// (0x000567d2) list_double_pane_ParamLimits

0xcaef,	// (0x000567d2) list_double_pane

0xcaef,	// (0x000567d2) list_double_time_pane_ParamLimits

0xcaef,	// (0x000567d2) list_double_time_pane

0xcaef,	// (0x000567d2) list_setting_number_pane_ParamLimits

0xcaef,	// (0x000567d2) list_setting_number_pane

0xcaef,	// (0x000567d2) list_setting_pane_ParamLimits

0xcaef,	// (0x000567d2) list_setting_pane

0xcb03,	// (0x000567e6) list_single_2graphic_pane_ParamLimits

0xcb03,	// (0x000567e6) list_single_2graphic_pane

0xcb03,	// (0x000567e6) list_single_graphic_heading_pane_ParamLimits

0xcb03,	// (0x000567e6) list_single_graphic_heading_pane

0xcb03,	// (0x000567e6) list_single_graphic_pane_ParamLimits

0xcb03,	// (0x000567e6) list_single_graphic_pane

0xcb03,	// (0x000567e6) list_single_heading_pane_ParamLimits

0xcb03,	// (0x000567e6) list_single_heading_pane

0xcb03,	// (0x000567e6) list_single_large_graphic_pane_ParamLimits

0xcb03,	// (0x000567e6) list_single_large_graphic_pane

0xcb03,	// (0x000567e6) list_single_number_heading_pane_ParamLimits

0xcb03,	// (0x000567e6) list_single_number_heading_pane

0xcb03,	// (0x000567e6) list_single_number_pane_ParamLimits

0xcb03,	// (0x000567e6) list_single_number_pane

0xcb03,	// (0x000567e6) list_single_pane_ParamLimits

0xcb03,	// (0x000567e6) list_single_pane

0x76df,	// (0x000513c2) list_highlight_pane_cp1

0xa16d,	// (0x00053e50) list_single_pane_g1_ParamLimits

0xa16d,	// (0x00053e50) list_single_pane_g1

0x083e,	// (0x0004a521) list_single_pane_g2_ParamLimits

0x083e,	// (0x0004a521) list_single_pane_g2

0x0001,

0xf5d2,	// (0x000592b5) list_single_pane_g_ParamLimits

0xf5d2,	// (0x000592b5) list_single_pane_g

0xeac7,	// (0x000587aa) list_single_pane_t1_ParamLimits

0xeac7,	// (0x000587aa) list_single_pane_t1

0xa16d,	// (0x00053e50) list_single_number_pane_g1_ParamLimits

0xa16d,	// (0x00053e50) list_single_number_pane_g1

0x083e,	// (0x0004a521) list_single_number_pane_g2_ParamLimits

0x083e,	// (0x0004a521) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x000592b5) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x000592b5) list_single_number_pane_g

0xea08,	// (0x000586eb) list_single_number_pane_t1_ParamLimits

0xea08,	// (0x000586eb) list_single_number_pane_t1

0x99e7,	// (0x000536ca) list_single_number_pane_t2_ParamLimits

0x99e7,	// (0x000536ca) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x00059642) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x00059642) list_single_number_pane_t

0x93aa,	// (0x0005308d) list_single_graphic_pane_g1_ParamLimits

0x93aa,	// (0x0005308d) list_single_graphic_pane_g1

0xa16d,	// (0x00053e50) list_single_graphic_pane_g2_ParamLimits

0xa16d,	// (0x00053e50) list_single_graphic_pane_g2

0x083e,	// (0x0004a521) list_single_graphic_pane_g3_ParamLimits

0x083e,	// (0x0004a521) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000592a4) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000592a4) list_single_graphic_pane_g

0x93b6,	// (0x00053099) list_single_graphic_pane_t1_ParamLimits

0x93b6,	// (0x00053099) list_single_graphic_pane_t1

0x93cc,	// (0x000530af) list_single_heading_pane_g1_ParamLimits

0x93cc,	// (0x000530af) list_single_heading_pane_g1

0x083e,	// (0x0004a521) list_single_heading_pane_g2_ParamLimits

0x083e,	// (0x0004a521) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x000592ab) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x000592ab) list_single_heading_pane_g

0x93df,	// (0x000530c2) list_single_heading_pane_t1_ParamLimits

0x93df,	// (0x000530c2) list_single_heading_pane_t1

0xa179,	// (0x00053e5c) list_single_heading_pane_t2_ParamLimits

0xa179,	// (0x00053e5c) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x000592b0) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x000592b0) list_single_heading_pane_t

0xa16d,	// (0x00053e50) list_single_number_heading_pane_g1_ParamLimits

0xa16d,	// (0x00053e50) list_single_number_heading_pane_g1

0x083e,	// (0x0004a521) list_single_number_heading_pane_g2_ParamLimits

0x083e,	// (0x0004a521) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x000592b5) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x000592b5) list_single_number_heading_pane_g

0xe6e7,	// (0x000583ca) list_single_number_heading_pane_t1_ParamLimits

0xe6e7,	// (0x000583ca) list_single_number_heading_pane_t1

0x93f5,	// (0x000530d8) list_single_number_heading_pane_t2_ParamLimits

0x93f5,	// (0x000530d8) list_single_number_heading_pane_t2

0xe6fd,	// (0x000583e0) list_single_number_heading_pane_t3_ParamLimits

0xe6fd,	// (0x000583e0) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x000592ba) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x000592ba) list_single_number_heading_pane_t

0x9407,	// (0x000530ea) list_single_graphic_heading_pane_g1_ParamLimits

0x9407,	// (0x000530ea) list_single_graphic_heading_pane_g1

0xa18b,	// (0x00053e6e) list_single_graphic_heading_pane_g4_ParamLimits

0xa18b,	// (0x00053e6e) list_single_graphic_heading_pane_g4

0x083e,	// (0x0004a521) list_single_graphic_heading_pane_g5_ParamLimits

0x083e,	// (0x0004a521) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x000592c1) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x000592c1) list_single_graphic_heading_pane_g

0xe6e7,	// (0x000583ca) list_single_graphic_heading_pane_t1_ParamLimits

0xe6e7,	// (0x000583ca) list_single_graphic_heading_pane_t1

0x941f,	// (0x00053102) list_single_graphic_heading_pane_t2_ParamLimits

0x941f,	// (0x00053102) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x000592c8) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x000592c8) list_single_graphic_heading_pane_t

0x0cd0,	// (0x0004a9b3) list_single_large_graphic_pane_g1_ParamLimits

0x0cd0,	// (0x0004a9b3) list_single_large_graphic_pane_g1

0xa16d,	// (0x00053e50) list_single_large_graphic_pane_g2_ParamLimits

0xa16d,	// (0x00053e50) list_single_large_graphic_pane_g2

0x083e,	// (0x0004a521) list_single_large_graphic_pane_g3_ParamLimits

0x083e,	// (0x0004a521) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x000592cd) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x000592cd) list_single_large_graphic_pane_g

0x2b1b,	// (0x0004c7fe) wait_border_pane_g2_copy1

0xa19c,	// (0x00053e7f) list_single_large_graphic_pane_g4_cp2

0xe6e7,	// (0x000583ca) list_single_large_graphic_pane_t1_ParamLimits

0xe6e7,	// (0x000583ca) list_single_large_graphic_pane_t1

0x51c4,	// (0x0004eea7) list_double_pane_g1_ParamLimits

0x51c4,	// (0x0004eea7) list_double_pane_g1

0xa1a4,	// (0x00053e87) list_double_pane_g2_ParamLimits

0xa1a4,	// (0x00053e87) list_double_pane_g2

0x0001,

0xf5f1,	// (0x000592d4) list_double_pane_g_ParamLimits

0xf5f1,	// (0x000592d4) list_double_pane_g

0x9437,	// (0x0005311a) list_double_pane_t1_ParamLimits

0x9437,	// (0x0005311a) list_double_pane_t1

0x944d,	// (0x00053130) list_double_pane_t2_ParamLimits

0x944d,	// (0x00053130) list_double_pane_t2

0x0001,

0xf5f6,	// (0x000592d9) list_double_pane_t_ParamLimits

0xf5f6,	// (0x000592d9) list_double_pane_t

0x945f,	// (0x00053142) list_double2_pane_g1_ParamLimits

0x945f,	// (0x00053142) list_double2_pane_g1

0x9470,	// (0x00053153) list_double2_pane_g2_ParamLimits

0x9470,	// (0x00053153) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x000592de) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x000592de) list_double2_pane_g

0x947c,	// (0x0005315f) list_double2_pane_t1_ParamLimits

0x947c,	// (0x0005315f) list_double2_pane_t1

0x9492,	// (0x00053175) list_double2_pane_t2_ParamLimits

0x9492,	// (0x00053175) list_double2_pane_t2

0x0001,

0xf600,	// (0x000592e3) list_double2_pane_t_ParamLimits

0xf600,	// (0x000592e3) list_double2_pane_t

0x51c4,	// (0x0004eea7) list_double_number_pane_g1_ParamLimits

0x51c4,	// (0x0004eea7) list_double_number_pane_g1

0xa1a4,	// (0x00053e87) list_double_number_pane_g2_ParamLimits

0xa1a4,	// (0x00053e87) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x000592d4) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x000592d4) list_double_number_pane_g

0x94a4,	// (0x00053187) list_double_number_pane_t1_ParamLimits

0x94a4,	// (0x00053187) list_double_number_pane_t1

0x94b6,	// (0x00053199) list_double_number_pane_t2_ParamLimits

0x94b6,	// (0x00053199) list_double_number_pane_t2

0x94cc,	// (0x000531af) list_double_number_pane_t3_ParamLimits

0x94cc,	// (0x000531af) list_double_number_pane_t3

0x0002,

0xf605,	// (0x000592e8) list_double_number_pane_t_ParamLimits

0xf605,	// (0x000592e8) list_double_number_pane_t

0x94de,	// (0x000531c1) list_double_graphic_pane_g1_ParamLimits

0x94de,	// (0x000531c1) list_double_graphic_pane_g1

0x94ea,	// (0x000531cd) list_double_graphic_pane_g2_ParamLimits

0x94ea,	// (0x000531cd) list_double_graphic_pane_g2

0x94f9,	// (0x000531dc) list_double_graphic_pane_g3_ParamLimits

0x94f9,	// (0x000531dc) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x000592ef) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x000592ef) list_double_graphic_pane_g

0x9511,	// (0x000531f4) list_double_graphic_pane_t1_ParamLimits

0x9511,	// (0x000531f4) list_double_graphic_pane_t1

0x9527,	// (0x0005320a) list_double_graphic_pane_t2_ParamLimits

0x9527,	// (0x0005320a) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x000592f8) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x000592f8) list_double_graphic_pane_t

0x9539,	// (0x0005321c) list_double2_graphic_pane_g1_ParamLimits

0x9539,	// (0x0005321c) list_double2_graphic_pane_g1

0xa1b0,	// (0x00053e93) list_double2_graphic_pane_g2_ParamLimits

0xa1b0,	// (0x00053e93) list_double2_graphic_pane_g2

0xa1bc,	// (0x00053e9f) list_double2_graphic_pane_g3_ParamLimits

0xa1bc,	// (0x00053e9f) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x000592fd) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x000592fd) list_double2_graphic_pane_g

0x9545,	// (0x00053228) list_double2_graphic_pane_t1_ParamLimits

0x9545,	// (0x00053228) list_double2_graphic_pane_t1

0x955b,	// (0x0005323e) list_double2_graphic_pane_t2_ParamLimits

0x955b,	// (0x0005323e) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x00059304) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x00059304) list_double2_graphic_pane_t

0x956d,	// (0x00053250) list_double_large_graphic_pane_g1_ParamLimits

0x956d,	// (0x00053250) list_double_large_graphic_pane_g1

0x9598,	// (0x0005327b) list_double_large_graphic_pane_g2_ParamLimits

0x9598,	// (0x0005327b) list_double_large_graphic_pane_g2

0xa1a4,	// (0x00053e87) list_double_large_graphic_pane_g3_ParamLimits

0xa1a4,	// (0x00053e87) list_double_large_graphic_pane_g3

0x95ae,	// (0x00053291) list_double_large_graphic_pane_g4_ParamLimits

0x95ae,	// (0x00053291) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00059309) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00059309) list_double_large_graphic_pane_g

0x95c1,	// (0x000532a4) list_double_large_graphic_pane_t1_ParamLimits

0x95c1,	// (0x000532a4) list_double_large_graphic_pane_t1

0x95da,	// (0x000532bd) list_double_large_graphic_pane_t2_ParamLimits

0x95da,	// (0x000532bd) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x00059314) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x00059314) list_double_large_graphic_pane_t

0xa1c8,	// (0x00053eab) list_double2_large_graphic_pane_g1_ParamLimits

0xa1c8,	// (0x00053eab) list_double2_large_graphic_pane_g1

0xa1d4,	// (0x00053eb7) list_double2_large_graphic_pane_g2_ParamLimits

0xa1d4,	// (0x00053eb7) list_double2_large_graphic_pane_g2

0xa1bc,	// (0x00053e9f) list_double2_large_graphic_pane_g3_ParamLimits

0xa1bc,	// (0x00053e9f) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00059319) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00059319) list_double2_large_graphic_pane_g

0x95ec,	// (0x000532cf) list_double2_large_graphic_pane_t1_ParamLimits

0x95ec,	// (0x000532cf) list_double2_large_graphic_pane_t1

0x9602,	// (0x000532e5) list_double2_large_graphic_pane_t2_ParamLimits

0x9602,	// (0x000532e5) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x00059320) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x00059320) list_double2_large_graphic_pane_t

0x9614,	// (0x000532f7) list_double_heading_pane_g1_ParamLimits

0x9614,	// (0x000532f7) list_double_heading_pane_g1

0x9625,	// (0x00053308) list_double_heading_pane_g2_ParamLimits

0x9625,	// (0x00053308) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x00059325) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x00059325) list_double_heading_pane_g

0x9631,	// (0x00053314) list_double_heading_pane_t1_ParamLimits

0x9631,	// (0x00053314) list_double_heading_pane_t1

0x9647,	// (0x0005332a) list_double_heading_pane_t2_ParamLimits

0x9647,	// (0x0005332a) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0005932a) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0005932a) list_double_heading_pane_t

0xe70f,	// (0x000583f2) list_double_graphic_heading_pane_g1_ParamLimits

0xe70f,	// (0x000583f2) list_double_graphic_heading_pane_g1

0x9614,	// (0x000532f7) list_double_graphic_heading_pane_g2_ParamLimits

0x9614,	// (0x000532f7) list_double_graphic_heading_pane_g2

0x9625,	// (0x00053308) list_double_graphic_heading_pane_g3_ParamLimits

0x9625,	// (0x00053308) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0005932f) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0005932f) list_double_graphic_heading_pane_g

0x9659,	// (0x0005333c) list_double_graphic_heading_pane_t1_ParamLimits

0x9659,	// (0x0005333c) list_double_graphic_heading_pane_t1

0x966f,	// (0x00053352) list_double_graphic_heading_pane_t2_ParamLimits

0x966f,	// (0x00053352) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x00059336) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x00059336) list_double_graphic_heading_pane_t

0x9681,	// (0x00053364) list_double_time_pane_g1_ParamLimits

0x9681,	// (0x00053364) list_double_time_pane_g1

0x9692,	// (0x00053375) list_double_time_pane_g2_ParamLimits

0x9692,	// (0x00053375) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0005933b) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0005933b) list_double_time_pane_g

0x969e,	// (0x00053381) list_double_time_pane_t1_ParamLimits

0x969e,	// (0x00053381) list_double_time_pane_t1

0x96b4,	// (0x00053397) list_double_time_pane_t2_ParamLimits

0x96b4,	// (0x00053397) list_double_time_pane_t2

0x96c6,	// (0x000533a9) list_double_time_pane_t3_ParamLimits

0x96c6,	// (0x000533a9) list_double_time_pane_t3

0x96d8,	// (0x000533bb) list_double_time_pane_t4_ParamLimits

0x96d8,	// (0x000533bb) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x00059340) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x00059340) list_double_time_pane_t

0x96ea,	// (0x000533cd) list_setting_pane_g1_ParamLimits

0x96ea,	// (0x000533cd) list_setting_pane_g1

0x96f6,	// (0x000533d9) list_setting_pane_g2_ParamLimits

0x96f6,	// (0x000533d9) list_setting_pane_g2

0x0001,

0xf666,	// (0x00059349) list_setting_pane_g_ParamLimits

0xf666,	// (0x00059349) list_setting_pane_g

0x9702,	// (0x000533e5) list_setting_pane_t1_ParamLimits

0x9702,	// (0x000533e5) list_setting_pane_t1

0x971c,	// (0x000533ff) list_setting_pane_t2_ParamLimits

0x971c,	// (0x000533ff) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0005934e) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0005934e) list_setting_pane_t

0x975b,	// (0x0005343e) set_value_pane_cp_ParamLimits

0x975b,	// (0x0005343e) set_value_pane_cp

0x9769,	// (0x0005344c) list_setting_number_pane_g1_ParamLimits

0x9769,	// (0x0005344c) list_setting_number_pane_g1

0x9775,	// (0x00053458) list_setting_number_pane_g2_ParamLimits

0x9775,	// (0x00053458) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x00059355) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x00059355) list_setting_number_pane_g

0x9781,	// (0x00053464) list_setting_number_pane_t1_ParamLimits

0x9781,	// (0x00053464) list_setting_number_pane_t1

0x979a,	// (0x0005347d) list_setting_number_pane_t2_ParamLimits

0x979a,	// (0x0005347d) list_setting_number_pane_t2

0x97b4,	// (0x00053497) list_setting_number_pane_t3_ParamLimits

0x97b4,	// (0x00053497) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0005935a) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0005935a) list_setting_number_pane_t

0x975b,	// (0x0005343e) set_value_pane_ParamLimits

0x975b,	// (0x0005343e) set_value_pane

0xa1e5,	// (0x00053ec8) bg_set_opt_pane_ParamLimits

0xa1e5,	// (0x00053ec8) bg_set_opt_pane

0xe71b,	// (0x000583fe) set_value_pane_t1

0xa206,	// (0x00053ee9) slider_set_pane_cp3

0xa20f,	// (0x00053ef2) volume_small_pane_cp

0xa218,	// (0x00053efb) list_form_gen_pane

0xa221,	// (0x00053f04) scroll_pane_cp8

0x97f7,	// (0x000534da) form_field_data_pane_ParamLimits

0x97f7,	// (0x000534da) form_field_data_pane

0x9814,	// (0x000534f7) form_field_data_wide_pane_ParamLimits

0x9814,	// (0x000534f7) form_field_data_wide_pane

0x9838,	// (0x0005351b) form_field_popup_pane_ParamLimits

0x9838,	// (0x0005351b) form_field_popup_pane

0xe739,	// (0x0005841c) form_field_popup_wide_pane_ParamLimits

0xe739,	// (0x0005841c) form_field_popup_wide_pane

0xe75a,	// (0x0005843d) form_field_slider_pane_ParamLimits

0xe75a,	// (0x0005843d) form_field_slider_pane

0xe76d,	// (0x00058450) form_field_slider_wide_pane_ParamLimits

0xe76d,	// (0x00058450) form_field_slider_wide_pane

0xa232,	// (0x00053f15) data_form_pane

0x9864,	// (0x00053547) form_field_data_pane_t1

0xa23e,	// (0x00053f21) input_focus_pane

0xe780,	// (0x00058463) data_form_wide_pane

0xe79d,	// (0x00058480) form_field_data_wide_pane_t1

0x7ad7,	// (0x000517ba) input_focus_pane_cp6

0x987e,	// (0x00053561) form_field_popup_pane_t1

0xa23e,	// (0x00053f21) input_focus_pane_cp7

0xa26c,	// (0x00053f4f) list_form_pane

0xe7c7,	// (0x000584aa) form_field_popup_wide_pane_t1

0xa23e,	// (0x00053f21) input_focus_pane_cp8

0xa278,	// (0x00053f5b) list_form_wide_pane

0x98a0,	// (0x00053583) form_field_slider_pane_t1_ParamLimits

0x98a0,	// (0x00053583) form_field_slider_pane_t1

0x98b8,	// (0x0005359b) form_field_slider_pane_t2_ParamLimits

0x98b8,	// (0x0005359b) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0005936a) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0005936a) form_field_slider_pane_t

0x786c,	// (0x0005154f) input_focus_pane_cp9_ParamLimits

0x786c,	// (0x0005154f) input_focus_pane_cp9

0x98cd,	// (0x000535b0) slider_cont_pane_ParamLimits

0x98cd,	// (0x000535b0) slider_cont_pane

0xa287,	// (0x00053f6a) form_field_slider_wide_pane_t1_ParamLimits

0xa287,	// (0x00053f6a) form_field_slider_wide_pane_t1

0xe7dc,	// (0x000584bf) form_field_slider_wide_pane_t2_ParamLimits

0xe7dc,	// (0x000584bf) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0005936f) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0005936f) form_field_slider_wide_pane_t

0x786c,	// (0x0005154f) input_focus_pane_cp10_ParamLimits

0x786c,	// (0x0005154f) input_focus_pane_cp10

0x98e1,	// (0x000535c4) slider_cont_pane_cp1_ParamLimits

0x98e1,	// (0x000535c4) slider_cont_pane_cp1

0x98f5,	// (0x000535d8) slider_form_pane_cp

0xa299,	// (0x00053f7c) input_focus_pane_g1

0xa2a1,	// (0x00053f84) input_focus_pane_g2

0xa2a9,	// (0x00053f8c) input_focus_pane_g3

0xa2b1,	// (0x00053f94) input_focus_pane_g4

0xa2b9,	// (0x00053f9c) input_focus_pane_g5

0xa2c1,	// (0x00053fa4) input_focus_pane_g6

0xa2c9,	// (0x00053fac) input_focus_pane_g7

0xa2d1,	// (0x00053fb4) input_focus_pane_g8

0xa2d9,	// (0x00053fbc) input_focus_pane_g9

0x76d5,	// (0x000513b8) input_focus_pane_g10

0x0009,

0xf691,	// (0x00059374) input_focus_pane_g

0x2b24,	// (0x0004c807) wait_border_pane_g3_copy1

0x98fd,	// (0x000535e0) data_form_pane_t1

0x76d5,	// (0x000513b8) wait_anim_pane_g1_copy1

0x99f9,	// (0x000536dc) data_form_wide_pane_t1

0xe7ee,	// (0x000584d1) list_form_graphic_pane_cp_ParamLimits

0xe7ee,	// (0x000584d1) list_form_graphic_pane_cp

0x3a83,	// (0x0004d766) slider_form_pane_g1

0x3a8c,	// (0x0004d76f) slider_form_pane_g2

0x0006,

0xf98f,	// (0x00059672) slider_form_pane_g

0x9919,	// (0x000535fc) list_form_graphic_pane_ParamLimits

0x9919,	// (0x000535fc) list_form_graphic_pane

0xe800,	// (0x000584e3) list_form_graphic_pane_g1

0xe808,	// (0x000584eb) list_form_graphic_pane_t1_ParamLimits

0xe808,	// (0x000584eb) list_form_graphic_pane_t1

0x7739,	// (0x0005141c) list_highlight_pane_cp5_ParamLimits

0x7739,	// (0x0005141c) list_highlight_pane_cp5

0x992a,	// (0x0005360d) find_pane_g1

0xa2e1,	// (0x00053fc4) input_find_pane

0x9933,	// (0x00053616) input_find_pane_g1_ParamLimits

0x9933,	// (0x00053616) input_find_pane_g1

0x993f,	// (0x00053622) input_find_pane_t1_ParamLimits

0x993f,	// (0x00053622) input_find_pane_t1

0x9954,	// (0x00053637) input_find_pane_t2_ParamLimits

0x9954,	// (0x00053637) input_find_pane_t2

0x0001,

0xf6a6,	// (0x00059389) input_find_pane_t_ParamLimits

0xf6a6,	// (0x00059389) input_find_pane_t

0xa2ea,	// (0x00053fcd) input_focus_pane_cp5_ParamLimits

0xa2ea,	// (0x00053fcd) input_focus_pane_cp5

0xa304,	// (0x00053fe7) bg_popup_window_pane_cp2_ParamLimits

0xa304,	// (0x00053fe7) bg_popup_window_pane_cp2

0xa311,	// (0x00053ff4) listscroll_menu_pane_ParamLimits

0xa311,	// (0x00053ff4) listscroll_menu_pane

0xa31d,	// (0x00054000) popup_submenu_window_ParamLimits

0xa31d,	// (0x00054000) popup_submenu_window

0xa34d,	// (0x00054030) find_popup_pane_g1

0xa355,	// (0x00054038) input_popup_find_pane_cp

0xa2ea,	// (0x00053fcd) input_focus_pane_cp4_ParamLimits

0xa2ea,	// (0x00053fcd) input_focus_pane_cp4

0xa36d,	// (0x00054050) input_popup_find_pane_t1_ParamLimits

0xa36d,	// (0x00054050) input_popup_find_pane_t1

0x76df,	// (0x000513c2) bg_popup_sub_pane_cp

0xa39b,	// (0x0005407e) listscroll_popup_sub_pane

0xa3a3,	// (0x00054086) list_submenu_pane_ParamLimits

0xa3a3,	// (0x00054086) list_submenu_pane

0xa3b4,	// (0x00054097) scroll_pane_cp4

0xa3bc,	// (0x0005409f) list_single_popup_submenu_pane_ParamLimits

0xa3bc,	// (0x0005409f) list_single_popup_submenu_pane

0xa3d1,	// (0x000540b4) list_single_popup_submenu_pane_g1

0xa3d9,	// (0x000540bc) list_single_popup_submenu_pane_t1_ParamLimits

0xa3d9,	// (0x000540bc) list_single_popup_submenu_pane_t1

0x786c,	// (0x0005154f) bg_active_tab_pane_cp1_ParamLimits

0x786c,	// (0x0005154f) bg_active_tab_pane_cp1

0xa3ee,	// (0x000540d1) tabs_2_active_pane_g1

0xa3f6,	// (0x000540d9) tabs_2_active_pane_t1

0x786c,	// (0x0005154f) bg_passive_tab_pane_cp1_ParamLimits

0x786c,	// (0x0005154f) bg_passive_tab_pane_cp1

0xa3ee,	// (0x000540d1) tabs_2_passive_pane_g1

0xa3f6,	// (0x000540d9) tabs_2_passive_pane_t1

0x7739,	// (0x0005141c) bg_active_tab_pane_cp4

0xa408,	// (0x000540eb) tabs_2_long_active_pane_t1

0x046b,	// (0x0004a14e) bg_passive_tab_pane_cp4

0x086f,	// (0x0004a552) list_single_midp_graphic_pane_g4_ParamLimits

0x7739,	// (0x0005141c) bg_active_tab_pane_cp5

0xa41b,	// (0x000540fe) tabs_3_long_active_pane_t1

0x046b,	// (0x0004a14e) bg_passive_tab_pane_cp5

0x086f,	// (0x0004a552) list_single_midp_graphic_pane_g4

0x7739,	// (0x0005141c) bg_popup_window_pane_cp13_ParamLimits

0x7739,	// (0x0005141c) bg_popup_window_pane_cp13

0xa436,	// (0x00054119) listscroll_popup_fast_pane_ParamLimits

0xa436,	// (0x00054119) listscroll_popup_fast_pane

0xa445,	// (0x00054128) grid_popup_fast_pane_ParamLimits

0xa445,	// (0x00054128) grid_popup_fast_pane

0xa457,	// (0x0005413a) scroll_pane_cp9_ParamLimits

0xa457,	// (0x0005413a) scroll_pane_cp9

0x5404,	// (0x0004f0e7) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5404,	// (0x0004f0e7) list_single_graphic_hl_pane_t1_cp2

0xa47b,	// (0x0005415e) input_focus_pane_cp20_ParamLimits

0xa47b,	// (0x0005415e) input_focus_pane_cp20

0xa489,	// (0x0005416c) query_popup_data_pane_t1_ParamLimits

0xa489,	// (0x0005416c) query_popup_data_pane_t1

0xa49c,	// (0x0005417f) query_popup_data_pane_t2_ParamLimits

0xa49c,	// (0x0005417f) query_popup_data_pane_t2

0xa4e2,	// (0x000541c5) query_popup_data_pane_t3_ParamLimits

0xa4e2,	// (0x000541c5) query_popup_data_pane_t3

0xa523,	// (0x00054206) query_popup_data_pane_t4_ParamLimits

0xa523,	// (0x00054206) query_popup_data_pane_t4

0xa55f,	// (0x00054242) query_popup_data_pane_t5_ParamLimits

0xa55f,	// (0x00054242) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0005938e) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0005938e) query_popup_data_pane_t

0xa299,	// (0x00053f7c) bg_set_opt_pane_g1

0xa2a1,	// (0x00053f84) bg_set_opt_pane_g2

0xa2a9,	// (0x00053f8c) bg_set_opt_pane_g3

0xa2b1,	// (0x00053f94) bg_set_opt_pane_g4

0xa2b9,	// (0x00053f9c) bg_set_opt_pane_g5

0xa2c1,	// (0x00053fa4) bg_set_opt_pane_g6

0xa2c9,	// (0x00053fac) bg_set_opt_pane_g7

0xa2d1,	// (0x00053fb4) bg_set_opt_pane_g8

0xa2d9,	// (0x00053fbc) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x00059399) bg_set_opt_pane_g

0xf40a,	// (0x000590ed) control_top_pane_stacon_ParamLimits

0xf40a,	// (0x000590ed) control_top_pane_stacon

0xf45d,	// (0x00059140) signal_pane_stacon_ParamLimits

0xf45d,	// (0x00059140) signal_pane_stacon

0xabd9,	// (0x000548bc) stacon_top_pane_g1_ParamLimits

0xabd9,	// (0x000548bc) stacon_top_pane_g1

0xf482,	// (0x00059165) title_pane_stacon_ParamLimits

0xf482,	// (0x00059165) title_pane_stacon

0xf4ac,	// (0x0005918f) uni_indicator_pane_stacon_ParamLimits

0xf4ac,	// (0x0005918f) uni_indicator_pane_stacon

0xf4c4,	// (0x000591a7) battery_pane_stacon_ParamLimits

0xf4c4,	// (0x000591a7) battery_pane_stacon

0xf508,	// (0x000591eb) control_bottom_pane_stacon_ParamLimits

0xf508,	// (0x000591eb) control_bottom_pane_stacon

0xf52b,	// (0x0005920e) navi_pane_stacon_ParamLimits

0xf52b,	// (0x0005920e) navi_pane_stacon

0xabfb,	// (0x000548de) stacon_bottom_pane_g1_ParamLimits

0xabfb,	// (0x000548de) stacon_bottom_pane_g1

0xf170,	// (0x00058e53) aid_levels_signal_lsc_ParamLimits

0xf170,	// (0x00058e53) aid_levels_signal_lsc

0xf187,	// (0x00058e6a) signal_pane_stacon_g1_ParamLimits

0xf187,	// (0x00058e6a) signal_pane_stacon_g1

0xf19b,	// (0x00058e7e) signal_pane_stacon_g2_ParamLimits

0xf19b,	// (0x00058e7e) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x000593ac) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x000593ac) signal_pane_stacon_g

0xf1d0,	// (0x00058eb3) title_pane_stacon_t1_ParamLimits

0xf1d0,	// (0x00058eb3) title_pane_stacon_t1

0xa5a3,	// (0x00054286) uni_indicator_pane_stacon_g1

0xa5ad,	// (0x00054290) uni_indicator_pane_stacon_g2

0xa5b7,	// (0x0005429a) uni_indicator_pane_stacon_g3

0xa5c1,	// (0x000542a4) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x000593b8) uni_indicator_pane_stacon_g

0xf1f5,	// (0x00058ed8) control_top_pane_stacon_g1

0xf1fd,	// (0x00058ee0) control_top_pane_stacon_t1_ParamLimits

0xf1fd,	// (0x00058ee0) control_top_pane_stacon_t1

0xf234,	// (0x00058f17) aid_levels_battery_lsc_ParamLimits

0xf234,	// (0x00058f17) aid_levels_battery_lsc

0xf24c,	// (0x00058f2f) battery_pane_stacon_g1_ParamLimits

0xf24c,	// (0x00058f2f) battery_pane_stacon_g1

0xf25f,	// (0x00058f42) battery_pane_stacon_g2_ParamLimits

0xf25f,	// (0x00058f42) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x000593c1) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x000593c1) battery_pane_stacon_g

0xf29d,	// (0x00058f80) navi_icon_pane_stacon

0xf2b1,	// (0x00058f94) navi_navi_pane_stacon

0xf29d,	// (0x00058f80) navi_text_pane_stacon

0xf1f5,	// (0x00058ed8) control_bottom_pane_stacon_g1

0xf2c7,	// (0x00058faa) control_bottom_pane_stacon_t1_ParamLimits

0xf2c7,	// (0x00058faa) control_bottom_pane_stacon_t1

0xa5e5,	// (0x000542c8) grid_app_pane_ParamLimits

0xa5e5,	// (0x000542c8) grid_app_pane

0xa61d,	// (0x00054300) scroll_pane_cp15_ParamLimits

0xa61d,	// (0x00054300) scroll_pane_cp15

0xa632,	// (0x00054315) cell_app_pane_ParamLimits

0xa632,	// (0x00054315) cell_app_pane

0xa67f,	// (0x00054362) cell_app_pane_g1_ParamLimits

0xa67f,	// (0x00054362) cell_app_pane_g1

0xa69f,	// (0x00054382) cell_app_pane_g2_ParamLimits

0xa69f,	// (0x00054382) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x000593c6) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x000593c6) cell_app_pane_g

0xa6ab,	// (0x0005438e) cell_app_pane_t1_ParamLimits

0xa6ab,	// (0x0005438e) cell_app_pane_t1

0xa6c2,	// (0x000543a5) grid_highlight_pane_ParamLimits

0xa6c2,	// (0x000543a5) grid_highlight_pane

0xa299,	// (0x00053f7c) cell_highlight_pane_g1

0xa2a1,	// (0x00053f84) cell_highlight_pane_g2

0xa2a9,	// (0x00053f8c) cell_highlight_pane_g3

0xa2b1,	// (0x00053f94) cell_highlight_pane_g4

0xa2b9,	// (0x00053f9c) cell_highlight_pane_g5

0xa2c1,	// (0x00053fa4) cell_highlight_pane_g6

0xa2c9,	// (0x00053fac) cell_highlight_pane_g7

0xa2d1,	// (0x00053fb4) cell_highlight_pane_g8

0xa2d9,	// (0x00053fbc) cell_highlight_pane_g9

0x76d5,	// (0x000513b8) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x00059374) cell_highlight_pane_g

0xa6dc,	// (0x000543bf) bg_scroll_pane

0xf308,	// (0x00058feb) scroll_handle_pane

0xa723,	// (0x00054406) scroll_bg_pane_g1

0xa738,	// (0x0005441b) scroll_bg_pane_g2

0xa750,	// (0x00054433) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x000593cb) scroll_bg_pane_g

0xa765,	// (0x00054448) scroll_handle_focus_pane_ParamLimits

0xa765,	// (0x00054448) scroll_handle_focus_pane

0xa723,	// (0x00054406) scroll_handle_pane_g1

0xa772,	// (0x00054455) scroll_handle_pane_g2

0xa750,	// (0x00054433) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x000593d2) scroll_handle_pane_g

0xa2ea,	// (0x00053fcd) bg_popup_sub_pane_cp21_ParamLimits

0xa2ea,	// (0x00053fcd) bg_popup_sub_pane_cp21

0xa786,	// (0x00054469) popup_fep_japan_predictive_window_t1_ParamLimits

0xa786,	// (0x00054469) popup_fep_japan_predictive_window_t1

0xa79d,	// (0x00054480) popup_fep_japan_predictive_window_t2_ParamLimits

0xa79d,	// (0x00054480) popup_fep_japan_predictive_window_t2

0xa7d0,	// (0x000544b3) popup_fep_japan_predictive_window_t3_ParamLimits

0xa7d0,	// (0x000544b3) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x000593d9) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x000593d9) popup_fep_japan_predictive_window_t

0x76df,	// (0x000513c2) bg_popup_sub_pane_cp23

0xa807,	// (0x000544ea) listscroll_japin_cand_pane

0xa80f,	// (0x000544f2) popup_fep_japan_candidate_window_t1

0xa81d,	// (0x00054500) candidate_pane_ParamLimits

0xa81d,	// (0x00054500) candidate_pane

0xa82f,	// (0x00054512) scroll_pane_cp30

0xa839,	// (0x0005451c) list_single_popup_jap_candidate_pane_ParamLimits

0xa839,	// (0x0005451c) list_single_popup_jap_candidate_pane

0x76df,	// (0x000513c2) list_highlight_pane_cp30

0xa84d,	// (0x00054530) list_single_popup_jap_candidate_pane_t1

0xa85c,	// (0x0005453f) level_1_signal

0xa86e,	// (0x00054551) level_2_signal

0xa881,	// (0x00054564) level_3_signal

0xa894,	// (0x00054577) level_4_signal

0xa8a7,	// (0x0005458a) level_5_signal

0xa8ba,	// (0x0005459d) level_6_signal

0xa8cd,	// (0x000545b0) level_7_signal

0xa85c,	// (0x0005453f) level_1_battery

0xa86e,	// (0x00054551) level_2_battery

0xa881,	// (0x00054564) level_3_battery

0xa894,	// (0x00054577) level_4_battery

0xa8a7,	// (0x0005458a) level_5_battery

0xa8ba,	// (0x0005459d) level_6_battery

0xa8cd,	// (0x000545b0) level_7_battery

0xa8f8,	// (0x000545db) list_menu_pane_ParamLimits

0xa8f8,	// (0x000545db) list_menu_pane

0xa90e,	// (0x000545f1) scroll_pane_cp25_ParamLimits

0xa90e,	// (0x000545f1) scroll_pane_cp25

0xa927,	// (0x0005460a) list_double2_graphic_pane_cp2_ParamLimits

0xa927,	// (0x0005460a) list_double2_graphic_pane_cp2

0xa927,	// (0x0005460a) list_double2_large_graphic_pane_cp2_ParamLimits

0xa927,	// (0x0005460a) list_double2_large_graphic_pane_cp2

0xa927,	// (0x0005460a) list_double2_pane_cp2_ParamLimits

0xa927,	// (0x0005460a) list_double2_pane_cp2

0xa927,	// (0x0005460a) list_double_graphic_pane_cp2_ParamLimits

0xa927,	// (0x0005460a) list_double_graphic_pane_cp2

0xa927,	// (0x0005460a) list_double_large_graphic_pane_cp2_ParamLimits

0xa927,	// (0x0005460a) list_double_large_graphic_pane_cp2

0xa927,	// (0x0005460a) list_double_number_pane_cp2_ParamLimits

0xa927,	// (0x0005460a) list_double_number_pane_cp2

0xa927,	// (0x0005460a) list_double_pane_cp2_ParamLimits

0xa927,	// (0x0005460a) list_double_pane_cp2

0xa94a,	// (0x0005462d) list_single_2graphic_pane_cp2_ParamLimits

0xa94a,	// (0x0005462d) list_single_2graphic_pane_cp2

0xa94a,	// (0x0005462d) list_single_graphic_heading_pane_cp2_ParamLimits

0xa94a,	// (0x0005462d) list_single_graphic_heading_pane_cp2

0xa94a,	// (0x0005462d) list_single_graphic_pane_cp2_ParamLimits

0xa94a,	// (0x0005462d) list_single_graphic_pane_cp2

0xa94a,	// (0x0005462d) list_single_heading_pane_cp2_ParamLimits

0xa94a,	// (0x0005462d) list_single_heading_pane_cp2

0xa961,	// (0x00054644) list_single_large_graphic_pane_cp2_ParamLimits

0xa961,	// (0x00054644) list_single_large_graphic_pane_cp2

0xa94a,	// (0x0005462d) list_single_number_heading_pane_cp2_ParamLimits

0xa94a,	// (0x0005462d) list_single_number_heading_pane_cp2

0xa94a,	// (0x0005462d) list_single_number_pane_cp2_ParamLimits

0xa94a,	// (0x0005462d) list_single_number_pane_cp2

0xa94a,	// (0x0005462d) list_single_pane_cp2_ParamLimits

0xa94a,	// (0x0005462d) list_single_pane_cp2

0xa9f5,	// (0x000546d8) bg_popup_sub_pane_cp22

0xf3ba,	// (0x0005909d) popup_side_volume_key_window_g1

0xf3e4,	// (0x000590c7) popup_side_volume_key_window_t1

0xf402,	// (0x000590e5) volume_small_pane_cp1

0x786c,	// (0x0005154f) bg_popup_sub_pane_cp24_ParamLimits

0x786c,	// (0x0005154f) bg_popup_sub_pane_cp24

0xaa0b,	// (0x000546ee) fep_china_uni_candidate_pane_ParamLimits

0xaa0b,	// (0x000546ee) fep_china_uni_candidate_pane

0xaa1f,	// (0x00054702) fep_china_uni_entry_pane

0xaa2f,	// (0x00054712) popup_fep_china_uni_window_g1

0xaa4b,	// (0x0005472e) fep_china_uni_entry_pane_g1

0xaa55,	// (0x00054738) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0005940a) fep_china_uni_entry_pane_g

0xaa5f,	// (0x00054742) fep_entry_item_pane

0xaa69,	// (0x0005474c) fep_candidate_item_pane

0xaa71,	// (0x00054754) fep_china_uni_candidate_pane_g1

0xaa7b,	// (0x0005475e) fep_china_uni_candidate_pane_g2

0xaa83,	// (0x00054766) fep_china_uni_candidate_pane_g3

0xaa8b,	// (0x0005476e) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0005940f) fep_china_uni_candidate_pane_g

0x76d5,	// (0x000513b8) fep_entry_item_pane_g1

0xaa95,	// (0x00054778) fep_entry_item_pane_t1_ParamLimits

0xaa95,	// (0x00054778) fep_entry_item_pane_t1

0xaaab,	// (0x0005478e) fep_candidate_item_pane_t1_ParamLimits

0xaaab,	// (0x0005478e) fep_candidate_item_pane_t1

0xaac0,	// (0x000547a3) fep_candidate_item_pane_t2_ParamLimits

0xaac0,	// (0x000547a3) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x00059418) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x00059418) fep_candidate_item_pane_t

0x7739,	// (0x0005141c) list_highlight_pane_cp31_ParamLimits

0x7739,	// (0x0005141c) list_highlight_pane_cp31

0xaad2,	// (0x000547b5) level_1_signal_lsc

0xaadb,	// (0x000547be) level_2_signal_lsc

0xaae4,	// (0x000547c7) level_3_signal_lsc

0xaaed,	// (0x000547d0) level_4_signal_lsc

0xaaf6,	// (0x000547d9) level_5_signal_lsc

0xaaff,	// (0x000547e2) level_6_signal_lsc

0xab08,	// (0x000547eb) level_7_signal_lsc

0xab08,	// (0x000547eb) level_1_battery_lsc

0xab11,	// (0x000547f4) level_2_battery_lsc

0xab1a,	// (0x000547fd) level_3_battery_lsc

0xab23,	// (0x00054806) level_4_battery_lsc

0xab2c,	// (0x0005480f) level_5_battery_lsc

0xab35,	// (0x00054818) level_6_battery_lsc

0xaad2,	// (0x000547b5) level_7_battery_lsc

0xab3e,	// (0x00054821) scroll_handle_focus_pane_g1

0xab47,	// (0x0005482a) scroll_handle_focus_pane_g2

0xab50,	// (0x00054833) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0005941d) scroll_handle_focus_pane_g

0x9969,	// (0x0005364c) list_single_2graphic_pane_g1_ParamLimits

0x9969,	// (0x0005364c) list_single_2graphic_pane_g1

0xa18b,	// (0x00053e6e) list_single_2graphic_pane_g2_ParamLimits

0xa18b,	// (0x00053e6e) list_single_2graphic_pane_g2

0x083e,	// (0x0004a521) list_single_2graphic_pane_g3_ParamLimits

0x083e,	// (0x0004a521) list_single_2graphic_pane_g3

0xab59,	// (0x0005483c) list_single_2graphic_pane_g4_ParamLimits

0xab59,	// (0x0005483c) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x00059424) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x00059424) list_single_2graphic_pane_g

0x9975,	// (0x00053658) list_single_2graphic_pane_t1_ParamLimits

0x9975,	// (0x00053658) list_single_2graphic_pane_t1

0xab6a,	// (0x0005484d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xab6a,	// (0x0005484d) list_double2_graphic_large_graphic_pane_g1

0xa1d4,	// (0x00053eb7) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa1d4,	// (0x00053eb7) list_double2_graphic_large_graphic_pane_g2

0xa1bc,	// (0x00053e9f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa1bc,	// (0x00053e9f) list_double2_graphic_large_graphic_pane_g3

0xab7c,	// (0x0005485f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xab7c,	// (0x0005485f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0005942d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0005942d) list_double2_graphic_large_graphic_pane_g

0x99a3,	// (0x00053686) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x99a3,	// (0x00053686) list_double2_graphic_large_graphic_pane_t1

0x99b9,	// (0x0005369c) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x99b9,	// (0x0005369c) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x00059436) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x00059436) list_double2_graphic_large_graphic_pane_t

0xaca8,	// (0x0005498b) popup_fast_swap_window_ParamLimits

0xaca8,	// (0x0005498b) popup_fast_swap_window

0xacc6,	// (0x000549a9) popup_side_volume_key_window

0xace4,	// (0x000549c7) stacon_top_pane

0xacee,	// (0x000549d1) status_pane_ParamLimits

0xacee,	// (0x000549d1) status_pane

0xacfc,	// (0x000549df) status_small_pane

0x76df,	// (0x000513c2) control_pane

0x76df,	// (0x000513c2) stacon_bottom_pane

0xa221,	// (0x00053f04) scroll_pane_cp121

0xa218,	// (0x00053efb) set_content_pane

0xab88,	// (0x0005486b) bg_active_tab_pane_g1_cp1

0xab91,	// (0x00054874) bg_active_tab_pane_g2_cp1

0xab9a,	// (0x0005487d) bg_active_tab_pane_g3_cp1

0xab88,	// (0x0005486b) bg_passive_tab_pane_g1_cp1

0xab91,	// (0x00054874) bg_passive_tab_pane_g2_cp1

0xab9a,	// (0x0005487d) bg_passive_tab_pane_g3_cp1

0xaba3,	// (0x00054886) bg_active_tab_pane_g1_cp2

0xab91,	// (0x00054874) bg_active_tab_pane_g2_cp2

0xabac,	// (0x0005488f) bg_active_tab_pane_g3_cp2

0xaba3,	// (0x00054886) bg_passive_tab_pane_g1_cp2

0xab91,	// (0x00054874) bg_passive_tab_pane_g2_cp2

0xabac,	// (0x0005488f) bg_passive_tab_pane_g3_cp2

0xabb5,	// (0x00054898) bg_active_tab_pane_g1_cp3

0xab91,	// (0x00054874) bg_active_tab_pane_g2_cp3

0xabbe,	// (0x000548a1) bg_active_tab_pane_g3_cp3

0xabb5,	// (0x00054898) bg_passive_tab_pane_g1_cp3

0xab91,	// (0x00054874) bg_passive_tab_pane_g2_cp3

0xabbe,	// (0x000548a1) bg_passive_tab_pane_g3_cp3

0xabc7,	// (0x000548aa) bg_active_tab_pane_g1_cp4

0xab91,	// (0x00054874) bg_active_tab_pane_g2_cp4

0xabd0,	// (0x000548b3) bg_active_tab_pane_g3_cp4

0xabc7,	// (0x000548aa) bg_passive_tab_pane_g1_cp4

0xab91,	// (0x00054874) bg_passive_tab_pane_g2_cp4

0xabd0,	// (0x000548b3) bg_passive_tab_pane_g3_cp4

0xac17,	// (0x000548fa) bg_active_tab_pane_g1_cp5

0xab91,	// (0x00054874) bg_active_tab_pane_g2_cp5

0xac20,	// (0x00054903) bg_active_tab_pane_g3_cp5

0xac17,	// (0x000548fa) bg_passive_tab_pane_g1_cp5

0xab91,	// (0x00054874) bg_passive_tab_pane_g2_cp5

0xac20,	// (0x00054903) bg_passive_tab_pane_g3_cp5

0x40a7,	// (0x0004dd8a) list_set_graphic_pane_ParamLimits

0x40a7,	// (0x0004dd8a) list_set_graphic_pane

0x76df,	// (0x000513c2) bg_set_opt_pane_cp4

0xac29,	// (0x0005490c) list_set_graphic_pane_g1_ParamLimits

0xac29,	// (0x0005490c) list_set_graphic_pane_g1

0xac35,	// (0x00054918) list_set_graphic_pane_g2_ParamLimits

0xac35,	// (0x00054918) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0005943b) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0005943b) list_set_graphic_pane_g

0x0009,

0xfae2,	// (0x000597c5) volume_small_pane_cp_g

0xac59,	// (0x0005493c) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xac59,	// (0x0005493c) list_double2_large_graphic_pane_g1_cp2

0xac67,	// (0x0005494a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xac67,	// (0x0005494a) list_double2_large_graphic_pane_g2_cp2

0xac78,	// (0x0005495b) list_double2_large_graphic_pane_g3_cp2

0xac80,	// (0x00054963) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xac80,	// (0x00054963) list_double2_large_graphic_pane_t1_cp2

0xac96,	// (0x00054979) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xac96,	// (0x00054979) list_double2_large_graphic_pane_t2_cp2

0xc87b,	// (0x0005655e) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc87b,	// (0x0005655e) list_double_large_graphic_pane_g1_cp2

0xc88e,	// (0x00056571) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xc88e,	// (0x00056571) list_double_large_graphic_pane_g2_cp2

0xae17,	// (0x00054afa) list_double_large_graphic_pane_g3_cp2

0x362c,	// (0x0004d30f) list_double_large_graphic_pane_g4_cp

0x3634,	// (0x0004d317) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3634,	// (0x0004d317) list_double_large_graphic_pane_t1_cp2

0x364b,	// (0x0004d32e) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x364b,	// (0x0004d32e) list_double_large_graphic_pane_t2_cp2

0xad07,	// (0x000549ea) list_double2_graphic_pane_g1_cp2_ParamLimits

0xad07,	// (0x000549ea) list_double2_graphic_pane_g1_cp2

0xad15,	// (0x000549f8) list_double2_graphic_pane_g2_cp2_ParamLimits

0xad15,	// (0x000549f8) list_double2_graphic_pane_g2_cp2

0xad26,	// (0x00054a09) list_double2_graphic_pane_g3_cp2

0xad30,	// (0x00054a13) list_double2_graphic_pane_t1_cp2_ParamLimits

0xad30,	// (0x00054a13) list_double2_graphic_pane_t1_cp2

0xad46,	// (0x00054a29) list_double2_graphic_pane_t2_cp2_ParamLimits

0xad46,	// (0x00054a29) list_double2_graphic_pane_t2_cp2

0xad58,	// (0x00054a3b) list_single_number_heading_pane_g1_cp2_ParamLimits

0xad58,	// (0x00054a3b) list_single_number_heading_pane_g1_cp2

0xad64,	// (0x00054a47) list_single_number_heading_pane_g2_cp2

0xad6c,	// (0x00054a4f) list_single_number_heading_pane_t1_cp2_ParamLimits

0xad6c,	// (0x00054a4f) list_single_number_heading_pane_t1_cp2

0xad82,	// (0x00054a65) list_single_number_heading_pane_t2_cp2_ParamLimits

0xad82,	// (0x00054a65) list_single_number_heading_pane_t2_cp2

0xad96,	// (0x00054a79) list_single_number_heading_pane_t3_cp2_ParamLimits

0xad96,	// (0x00054a79) list_single_number_heading_pane_t3_cp2

0xad58,	// (0x00054a3b) list_single_heading_pane_g1_cp2_ParamLimits

0xad58,	// (0x00054a3b) list_single_heading_pane_g1_cp2

0xad64,	// (0x00054a47) list_single_heading_pane_g2_cp2

0xad6c,	// (0x00054a4f) list_single_heading_pane_t1_cp2_ParamLimits

0xad6c,	// (0x00054a4f) list_single_heading_pane_t1_cp2

0xc867,	// (0x0005654a) list_single_heading_pane_t2_cp2_ParamLimits

0xc867,	// (0x0005654a) list_single_heading_pane_t2_cp2

0x334a,	// (0x0004d02d) list_double_graphic_pane_g1_cp2_ParamLimits

0x334a,	// (0x0004d02d) list_double_graphic_pane_g1_cp2

0x3356,	// (0x0004d039) list_double_graphic_pane_g2_cp2_ParamLimits

0x3356,	// (0x0004d039) list_double_graphic_pane_g2_cp2

0x3365,	// (0x0004d048) list_double_graphic_pane_g3_cp2

0x336d,	// (0x0004d050) list_double_graphic_pane_t1_cp2_ParamLimits

0x336d,	// (0x0004d050) list_double_graphic_pane_t1_cp2

0x3383,	// (0x0004d066) list_double_graphic_pane_t2_cp2_ParamLimits

0x3383,	// (0x0004d066) list_double_graphic_pane_t2_cp2

0xae0b,	// (0x00054aee) list_double_number_pane_g1_cp2_ParamLimits

0xae0b,	// (0x00054aee) list_double_number_pane_g1_cp2

0xae17,	// (0x00054afa) list_double_number_pane_g2_cp2

0xc801,	// (0x000564e4) list_double_number_pane_t1_cp2_ParamLimits

0xc801,	// (0x000564e4) list_double_number_pane_t1_cp2

0x3322,	// (0x0004d005) list_double_number_pane_t2_cp2_ParamLimits

0x3322,	// (0x0004d005) list_double_number_pane_t2_cp2

0x3338,	// (0x0004d01b) list_double_number_pane_t3_cp2_ParamLimits

0x3338,	// (0x0004d01b) list_double_number_pane_t3_cp2

0xc74f,	// (0x00056432) list_single_graphic_pane_g1_cp2_ParamLimits

0xc74f,	// (0x00056432) list_single_graphic_pane_g1_cp2

0xae71,	// (0x00054b54) list_single_graphic_pane_g2_cp2_ParamLimits

0xae71,	// (0x00054b54) list_single_graphic_pane_g2_cp2

0xae7d,	// (0x00054b60) list_single_graphic_pane_g3_cp2

0x31cd,	// (0x0004ceb0) list_single_graphic_pane_t1_cp2_ParamLimits

0x31cd,	// (0x0004ceb0) list_single_graphic_pane_t1_cp2

0xae71,	// (0x00054b54) list_single_number_pane_g1_cp2_ParamLimits

0xae71,	// (0x00054b54) list_single_number_pane_g1_cp2

0xae7d,	// (0x00054b60) list_single_number_pane_g2_cp2

0x31cd,	// (0x0004ceb0) list_single_number_pane_t1_cp2_ParamLimits

0x31cd,	// (0x0004ceb0) list_single_number_pane_t1_cp2

0xc73b,	// (0x0005641e) list_single_number_pane_t2_cp2_ParamLimits

0xc73b,	// (0x0005641e) list_single_number_pane_t2_cp2

0xac67,	// (0x0005494a) list_double2_pane_g1_cp2_ParamLimits

0xac67,	// (0x0005494a) list_double2_pane_g1_cp2

0xac78,	// (0x0005495b) list_double2_pane_g2_cp2

0xade3,	// (0x00054ac6) list_double2_pane_t1_cp2_ParamLimits

0xade3,	// (0x00054ac6) list_double2_pane_t1_cp2

0xadf9,	// (0x00054adc) list_double2_pane_t2_cp2_ParamLimits

0xadf9,	// (0x00054adc) list_double2_pane_t2_cp2

0xae0b,	// (0x00054aee) list_double_pane_g1_cp2_ParamLimits

0xae0b,	// (0x00054aee) list_double_pane_g1_cp2

0xae17,	// (0x00054afa) list_double_pane_g2_cp2

0xae1f,	// (0x00054b02) list_double_pane_t1_cp2_ParamLimits

0xae1f,	// (0x00054b02) list_double_pane_t1_cp2

0xae35,	// (0x00054b18) list_double_pane_t2_cp2_ParamLimits

0xae35,	// (0x00054b18) list_double_pane_t2_cp2

0xae61,	// (0x00054b44) list_single_pane_cp2_g3

0xae71,	// (0x00054b54) list_single_pane_g1_cp2_ParamLimits

0xae71,	// (0x00054b54) list_single_pane_g1_cp2

0xae7d,	// (0x00054b60) list_single_pane_g2_cp2

0xae85,	// (0x00054b68) list_single_pane_t1_cp2_ParamLimits

0xae85,	// (0x00054b68) list_single_pane_t1_cp2

0xae9d,	// (0x00054b80) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xae9d,	// (0x00054b80) list_single_large_graphic_pane_g1_cp2

0xa16d,	// (0x00053e50) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xa16d,	// (0x00053e50) list_single_large_graphic_pane_g2_cp2

0xaeab,	// (0x00054b8e) list_single_large_graphic_pane_g3_cp2

0xaeb3,	// (0x00054b96) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xaeb3,	// (0x00054b96) list_single_large_graphic_pane_g4_cp1

0xaecd,	// (0x00054bb0) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xaecd,	// (0x00054bb0) list_single_large_graphic_pane_t1_cp2

0x3197,	// (0x0004ce7a) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3197,	// (0x0004ce7a) list_single_graphic_heading_pane_g1_cp2

0xc716,	// (0x000563f9) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xc716,	// (0x000563f9) list_single_graphic_heading_pane_g4_cp2

0xae7d,	// (0x00054b60) list_single_graphic_heading_pane_g5_cp2

0x31a3,	// (0x0004ce86) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x31a3,	// (0x0004ce86) list_single_graphic_heading_pane_t1_cp2

0xc727,	// (0x0005640a) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xc727,	// (0x0005640a) list_single_graphic_heading_pane_t2_cp2

0x3158,	// (0x0004ce3b) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3158,	// (0x0004ce3b) list_single_2graphic_pane_g1_cp2

0xc716,	// (0x000563f9) list_single_2graphic_pane_g2_cp2_ParamLimits

0xc716,	// (0x000563f9) list_single_2graphic_pane_g2_cp2

0xae7d,	// (0x00054b60) list_single_2graphic_pane_g3_cp2

0x3175,	// (0x0004ce58) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3175,	// (0x0004ce58) list_single_2graphic_pane_g4_cp2

0x3181,	// (0x0004ce64) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3181,	// (0x0004ce64) list_single_2graphic_pane_t1_cp2

0x76d5,	// (0x000513b8) list_highlight_pane_g10_cp1

0x2d30,	// (0x0004ca13) list_highlight_pane_g1_cp1

0x2d38,	// (0x0004ca1b) list_highlight_pane_g2_cp1

0x2d40,	// (0x0004ca23) list_highlight_pane_g3_cp1

0x2d48,	// (0x0004ca2b) list_highlight_pane_g4_cp1

0x2d50,	// (0x0004ca33) list_highlight_pane_g5_cp1

0x2d58,	// (0x0004ca3b) list_highlight_pane_g6_cp1

0x2d60,	// (0x0004ca43) list_highlight_pane_g7_cp1

0x2d68,	// (0x0004ca4b) list_highlight_pane_g8_cp1

0x2d70,	// (0x0004ca53) list_highlight_pane_g9_cp1

0xc6dc,	// (0x000563bf) form_field_slider_pane_t3

0xc6ea,	// (0x000563cd) form_field_slider_pane_t4

0x2c6c,	// (0x0004c94f) slider_form_pane_ParamLimits

0x2c6c,	// (0x0004c94f) slider_form_pane

0x76df,	// (0x000513c2) control_abbreviations

0x76df,	// (0x000513c2) control_conventions

0x76df,	// (0x000513c2) control_definitions

0x76df,	// (0x000513c2) format_table_attribute

0x3458,	// (0x0004d13b) bg_popup_preview_window_pane_g9

0x76df,	// (0x000513c2) format_table_data2

0x76df,	// (0x000513c2) format_table_data3

0x76df,	// (0x000513c2) format_table_data_example

0x0008,

0x76df,	// (0x000513c2) intro_purpose

0xf8ef,	// (0x000595d2) bg_popup_preview_window_pane_g

0x76df,	// (0x000513c2) texts_category

0x76df,	// (0x000513c2) texts_graphics

0xaee3,	// (0x00054bc6) text_digital

0xaef2,	// (0x00054bd5) text_primary

0xc5c4,	// (0x000562a7) text_primary_small

0xc5d3,	// (0x000562b6) text_secondary

0xc5e2,	// (0x000562c5) text_title

0x3bec,	// (0x0004d8cf) bg_passive_tab_pane_g1_cp3_srt

0xab91,	// (0x00054874) bg_passive_tab_pane_g2_cp3_srt

0x3bf5,	// (0x0004d8d8) bg_passive_tab_pane_g3_cp3_srt

0x786c,	// (0x0005154f) bg_active_tab_pane_cp3_srt_ParamLimits

0x786c,	// (0x0005154f) bg_active_tab_pane_cp3_srt

0x3bfe,	// (0x0004d8e1) tabs_4_active_pane_srt_g1

0xcb5f,	// (0x00056842) tabs_4_active_pane_srt_t1_ParamLimits

0xcb5f,	// (0x00056842) tabs_4_active_pane_srt_t1

0x3bec,	// (0x0004d8cf) bg_active_tab_pane_g1_cp3_copy1

0xab91,	// (0x00054874) bg_active_tab_pane_g2_cp3_copy1

0x3bf5,	// (0x0004d8d8) bg_active_tab_pane_g3_cp3_copy1

0x7739,	// (0x0005141c) tabs_2_long_active_pane_srt_ParamLimits

0x7739,	// (0x0005141c) tabs_2_long_active_pane_srt

0x7739,	// (0x0005141c) tabs_2_long_passive_pane_srt_ParamLimits

0x7739,	// (0x0005141c) tabs_2_long_passive_pane_srt

0x046b,	// (0x0004a14e) bg_passive_tab_pane_cp4_srt_ParamLimits

0x046b,	// (0x0004a14e) bg_passive_tab_pane_cp4_srt

0x3894,	// (0x0004d577) bg_passive_tab_pane_g1_cp4_srt

0xab91,	// (0x00054874) bg_passive_tab_pane_g2_cp4_srt

0x389d,	// (0x0004d580) bg_passive_tab_pane_g3_cp4_srt

0x7739,	// (0x0005141c) bg_active_tab_pane_cp4_srt_ParamLimits

0x7739,	// (0x0005141c) bg_active_tab_pane_cp4_srt

0xc951,	// (0x00056634) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc951,	// (0x00056634) tabs_2_long_active_pane_srt_t1

0x3894,	// (0x0004d577) bg_active_tab_pane_g1_cp4_srt

0xab91,	// (0x00054874) bg_active_tab_pane_g2_cp4_srt

0x389d,	// (0x0004d580) bg_active_tab_pane_g3_cp4_srt

0x786c,	// (0x0005154f) tabs_3_long_active_pane_srt_ParamLimits

0x786c,	// (0x0005154f) tabs_3_long_active_pane_srt

0x786c,	// (0x0005154f) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x786c,	// (0x0005154f) tabs_3_long_passive_pane_cp_srt

0x786c,	// (0x0005154f) tabs_3_long_passive_pane_srt_ParamLimits

0x786c,	// (0x0005154f) tabs_3_long_passive_pane_srt

0x046b,	// (0x0004a14e) bg_passive_tab_pane_cp5_srt_ParamLimits

0x046b,	// (0x0004a14e) bg_passive_tab_pane_cp5_srt

0xac17,	// (0x000548fa) bg_passive_tab_pane_g1_cp5_srt

0xab91,	// (0x00054874) bg_passive_tab_pane_g2_cp5_srt

0xac20,	// (0x00054903) bg_passive_tab_pane_g3_cp5_srt

0x7739,	// (0x0005141c) bg_active_tab_pane_cp5_srt_ParamLimits

0x7739,	// (0x0005141c) bg_active_tab_pane_cp5_srt

0xc93b,	// (0x0005661e) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc93b,	// (0x0005661e) tabs_3_long_active_pane_srt_t1

0xac17,	// (0x000548fa) bg_active_tab_pane_g1_cp5_srt

0xab91,	// (0x00054874) bg_active_tab_pane_g2_cp5_srt

0xac20,	// (0x00054903) bg_active_tab_pane_g3_cp5_srt

0x3874,	// (0x0004d557) navi_text_pane_srt_t1

0x386c,	// (0x0004d54f) navi_icon_pane_srt_g1

0xe910,	// (0x000585f3) midp_editing_number_pane_srt

0xc5f1,	// (0x000562d4) midp_ticker_pane_srt

0xe918,	// (0x000585fb) midp_ticker_pane_srt_g1

0xe920,	// (0x00058603) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0005945a) midp_ticker_pane_srt_g

0xe928,	// (0x0005860b) midp_ticker_pane_srt_t1

0x385d,	// (0x0004d540) midp_editing_number_pane_t1_copy1

0x046b,	// (0x0004a14e) listscroll_midp_pane

0x046b,	// (0x0004a14e) midp_form_pane

0xe81d,	// (0x00058500) midp_info_popup_window_ParamLimits

0xe81d,	// (0x00058500) midp_info_popup_window

0xa2ea,	// (0x00053fcd) bg_popup_sub_pane_cp50_ParamLimits

0xa2ea,	// (0x00053fcd) bg_popup_sub_pane_cp50

0x2966,	// (0x0004c649) listscroll_midp_info_pane_ParamLimits

0x2966,	// (0x0004c649) listscroll_midp_info_pane

0x294e,	// (0x0004c631) listscroll_form_midp_pane_ParamLimits

0x294e,	// (0x0004c631) listscroll_form_midp_pane

0x295a,	// (0x0004c63d) scroll_bar_cp050

0xc6d0,	// (0x000563b3) list_midp_pane

0x4681,	// (0x0004e364) signal_pane_g2_cp

0x2868,	// (0x0004c54b) listscroll_midp_info_pane_t1_ParamLimits

0x2868,	// (0x0004c54b) listscroll_midp_info_pane_t1

0x2880,	// (0x0004c563) listscroll_midp_info_pane_t2_ParamLimits

0x2880,	// (0x0004c563) listscroll_midp_info_pane_t2

0x28be,	// (0x0004c5a1) listscroll_midp_info_pane_t3_ParamLimits

0x28be,	// (0x0004c5a1) listscroll_midp_info_pane_t3

0x28f8,	// (0x0004c5db) listscroll_midp_info_pane_t4_ParamLimits

0x28f8,	// (0x0004c5db) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0005950d) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0005950d) listscroll_midp_info_pane_t

0xa3b4,	// (0x00054097) scroll_pane_cp21

0x2802,	// (0x0004c4e5) form_midp_field_choice_group_pane

0x280b,	// (0x0004c4ee) form_midp_field_text_pane

0x284e,	// (0x0004c531) form_midp_field_time_pane

0x2856,	// (0x0004c539) form_midp_gauge_slider_pane

0x285f,	// (0x0004c542) form_midp_gauge_wait_pane

0x76df,	// (0x000513c2) form_midp_image_pane

0x99cb,	// (0x000536ae) list_single_midp_pane_ParamLimits

0x99cb,	// (0x000536ae) list_single_midp_pane

0xc6a8,	// (0x0005638b) form_midp_field_text_pane_t1

0x25b2,	// (0x0004c295) input_focus_pane_cp050

0x27f1,	// (0x0004c4d4) list_midp_form_text_pane

0x2795,	// (0x0004c478) form_midp_field_choice_group_pane_t1

0x27a3,	// (0x0004c486) input_focus_pane_cp051

0x27b7,	// (0x0004c49a) list_midp_choice_pane

0x76df,	// (0x000513c2) status_idle_pane

0x2779,	// (0x0004c45c) form_midp_field_time_pane_t1

0x76d5,	// (0x000513b8) wait_anim_pane_g2_copy1

0x2787,	// (0x0004c46a) form_midp_field_time_pane_t2

0x0001,

0xe878,	// (0x0005855b) aid_navinavi_width_2_pane

0xf825,	// (0x00059508) form_midp_field_time_pane_t

0x76df,	// (0x000513c2) input_focus_pane_cp052

0x76df,	// (0x000513c2) bg_input_focus_pane_cp040

0x2739,	// (0x0004c41c) form_midp_gauge_slider_pane_t1

0x2747,	// (0x0004c42a) form_midp_gauge_slider_pane_t2

0xc68c,	// (0x0005636f) form_midp_gauge_slider_pane_t3

0xc69a,	// (0x0005637d) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x000594ff) form_midp_gauge_slider_pane_t

0x2771,	// (0x0004c454) form_midp_slider_pane

0x7739,	// (0x0005141c) bg_input_focus_pane_cp041_ParamLimits

0x7739,	// (0x0005141c) bg_input_focus_pane_cp041

0x2706,	// (0x0004c3e9) form_midp_gauge_wait_pane_t1_ParamLimits

0x2706,	// (0x0004c3e9) form_midp_gauge_wait_pane_t1

0x2718,	// (0x0004c3fb) form_midp_gauge_wait_pane_t2_ParamLimits

0x2718,	// (0x0004c3fb) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x000594fa) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x000594fa) form_midp_gauge_wait_pane_t

0x272a,	// (0x0004c40d) form_midp_wait_pane_ParamLimits

0x272a,	// (0x0004c40d) form_midp_wait_pane

0x26ce,	// (0x0004c3b1) form_midp_image_pane_g1

0x26d7,	// (0x0004c3ba) form_midp_image_pane_t1

0x26e6,	// (0x0004c3c9) form_midp_image_pane_t2

0x26f5,	// (0x0004c3d8) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x000594f3) form_midp_image_pane_t

0x26c5,	// (0x0004c3a8) list_single_midp_pane_g1

0xeab8,	// (0x0005879b) list_single_midp_pane_t1

0xc675,	// (0x00056358) list_midp_form_item_pane_ParamLimits

0xc675,	// (0x00056358) list_midp_form_item_pane

0xe832,	// (0x00058515) list_midp_form_item_pane_t1

0xe841,	// (0x00058524) midp_ticker_pane_g1

0xe84d,	// (0x00058530) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x00059440) midp_ticker_pane_g

0xaf98,	// (0x00054c7b) midp_ticker_pane_t1

0xcae0,	// (0x000567c3) midp_editing_number_pane_t1

0x3aae,	// (0x0004d791) midp_editing_number_pane

0x3abd,	// (0x0004d7a0) midp_ticker_pane

0x384d,	// (0x0004d530) ai_message_heading_pane

0x76df,	// (0x000513c2) bg_popup_window_pane_cp14

0x3855,	// (0x0004d538) listscroll_ai_message_pane

0x37d3,	// (0x0004d4b6) ai_message_heading_pane_g1_ParamLimits

0x37d3,	// (0x0004d4b6) ai_message_heading_pane_g1

0x37df,	// (0x0004d4c2) ai_message_heading_pane_g2_ParamLimits

0x37df,	// (0x0004d4c2) ai_message_heading_pane_g2

0x37ed,	// (0x0004d4d0) ai_message_heading_pane_g3_ParamLimits

0x37ed,	// (0x0004d4d0) ai_message_heading_pane_g3

0x37f9,	// (0x0004d4dc) ai_message_heading_pane_g4_ParamLimits

0x37f9,	// (0x0004d4dc) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x00059634) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x00059634) ai_message_heading_pane_g

0x3805,	// (0x0004d4e8) ai_message_heading_pane_t1_ParamLimits

0x3805,	// (0x0004d4e8) ai_message_heading_pane_t1

0x381f,	// (0x0004d502) ai_message_heading_pane_t2_ParamLimits

0x381f,	// (0x0004d502) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0005963d) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0005963d) ai_message_heading_pane_t

0x3833,	// (0x0004d516) bg_popup_heading_pane_cp1_ParamLimits

0x3833,	// (0x0004d516) bg_popup_heading_pane_cp1

0x37c1,	// (0x0004d4a4) list_ai_message_pane_ParamLimits

0x37c1,	// (0x0004d4a4) list_ai_message_pane

0xa3b4,	// (0x00054097) scroll_pane_cp10

0x375d,	// (0x0004d440) list_ai_message_pane_g1

0x3765,	// (0x0004d448) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x00059611) list_ai_message_pane_g

0x376d,	// (0x0004d450) list_ai_message_pane_t1_ParamLimits

0x376d,	// (0x0004d450) list_ai_message_pane_t1

0x3782,	// (0x0004d465) list_ai_message_pane_t2_ParamLimits

0x3782,	// (0x0004d465) list_ai_message_pane_t2

0x3797,	// (0x0004d47a) list_ai_message_pane_t3_ParamLimits

0x3797,	// (0x0004d47a) list_ai_message_pane_t3

0x37ac,	// (0x0004d48f) list_ai_message_pane_t4_ParamLimits

0x37ac,	// (0x0004d48f) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x00059616) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x00059616) list_ai_message_pane_t

0xc921,	// (0x00056604) cell_ai_soft_ind_pane_ParamLimits

0xc921,	// (0x00056604) cell_ai_soft_ind_pane

0xe859,	// (0x0005853c) cell_ai_soft_ind_pane_g1_ParamLimits

0xe859,	// (0x0005853c) cell_ai_soft_ind_pane_g1

0x76df,	// (0x000513c2) grid_highlight_cp1

0xe866,	// (0x00058549) text_secondary_cp56_ParamLimits

0xe866,	// (0x00058549) text_secondary_cp56

0x371b,	// (0x0004d3fe) example_general_pane_ParamLimits

0x371b,	// (0x0004d3fe) example_general_pane

0x3727,	// (0x0004d40a) example_parent_pane_g1_ParamLimits

0x3727,	// (0x0004d40a) example_parent_pane_g1

0x3733,	// (0x0004d416) example_parent_pane_t1_ParamLimits

0x3733,	// (0x0004d416) example_parent_pane_t1

0xb61a,	// (0x000552fd) popup_preview_text_window_ParamLimits

0xb61a,	// (0x000552fd) popup_preview_text_window

0xae69,	// (0x00054b4c) list_single_pane_cp2_g4

0x7922,	// (0x00051605) bg_popup_preview_window_pane_ParamLimits

0x7922,	// (0x00051605) bg_popup_preview_window_pane

0x3462,	// (0x0004d145) popup_preview_text_window_t1_ParamLimits

0x3462,	// (0x0004d145) popup_preview_text_window_t1

0x3480,	// (0x0004d163) popup_preview_text_window_t2_ParamLimits

0x3480,	// (0x0004d163) popup_preview_text_window_t2

0x34c9,	// (0x0004d1ac) popup_preview_text_window_t3_ParamLimits

0x34c9,	// (0x0004d1ac) popup_preview_text_window_t3

0x350e,	// (0x0004d1f1) popup_preview_text_window_t4_ParamLimits

0x350e,	// (0x0004d1f1) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x000595e5) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x000595e5) popup_preview_text_window_t

0x358c,	// (0x0004d26f) scroll_pane_cp11

0x253e,	// (0x0004c221) bg_popup_preview_window_pane_g1

0x3416,	// (0x0004d0f9) bg_popup_preview_window_pane_g2

0x3420,	// (0x0004d103) bg_popup_preview_window_pane_g3

0x342a,	// (0x0004d10d) bg_popup_preview_window_pane_g4

0x3434,	// (0x0004d117) bg_popup_preview_window_pane_g5

0x343e,	// (0x0004d121) bg_popup_preview_window_pane_g6

0x3446,	// (0x0004d129) bg_popup_preview_window_pane_g7

0x344e,	// (0x0004d131) bg_popup_preview_window_pane_g8

0xe6ba,	// (0x0005839d) aid_popup_width_pane

0xb58a,	// (0x0005526d) popup_midp_note_alarm_window_ParamLimits

0xb58a,	// (0x0005526d) popup_midp_note_alarm_window

0xa232,	// (0x00053f15) data_form_pane_ParamLimits

0x985a,	// (0x0005353d) form_field_data_pane_g1

0x9864,	// (0x00053547) form_field_data_pane_t1_ParamLimits

0xa23e,	// (0x00053f21) input_focus_pane_ParamLimits

0xe780,	// (0x00058463) data_form_wide_pane_ParamLimits

0xe791,	// (0x00058474) form_field_data_wide_pane_g1

0xe79d,	// (0x00058480) form_field_data_wide_pane_t1_ParamLimits

0x7ad7,	// (0x000517ba) input_focus_pane_cp6_ParamLimits

0xa35f,	// (0x00054042) input_popup_find_pane_g1_ParamLimits

0xa35f,	// (0x00054042) input_popup_find_pane_g1

0xf270,	// (0x00058f53) aid_navi_side_left_pane

0xf285,	// (0x00058f68) aid_navi_side_right_pane

0x2e2b,	// (0x0004cb0e) bg_popup_window_pane_cp30_ParamLimits

0x2e2b,	// (0x0004cb0e) bg_popup_window_pane_cp30

0x2ea5,	// (0x0004cb88) popup_midp_note_alarm_window_g1_ParamLimits

0x2ea5,	// (0x0004cb88) popup_midp_note_alarm_window_g1

0x2ed5,	// (0x0004cbb8) popup_midp_note_alarm_window_t1_ParamLimits

0x2ed5,	// (0x0004cbb8) popup_midp_note_alarm_window_t1

0x2f76,	// (0x0004cc59) popup_midp_note_alarm_window_t2_ParamLimits

0x2f76,	// (0x0004cc59) popup_midp_note_alarm_window_t2

0x3024,	// (0x0004cd07) popup_midp_note_alarm_window_t3_ParamLimits

0x3024,	// (0x0004cd07) popup_midp_note_alarm_window_t3

0x3056,	// (0x0004cd39) popup_midp_note_alarm_window_t4_ParamLimits

0x3056,	// (0x0004cd39) popup_midp_note_alarm_window_t4

0x307c,	// (0x0004cd5f) popup_midp_note_alarm_window_t5_ParamLimits

0x307c,	// (0x0004cd5f) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x00059582) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x00059582) popup_midp_note_alarm_window_t

0x3128,	// (0x0004ce0b) wait_bar_pane_cp1_ParamLimits

0x3128,	// (0x0004ce0b) wait_bar_pane_cp1

0x76df,	// (0x000513c2) wait_anim_pane_copy1

0x76df,	// (0x000513c2) wait_border_pane_copy1

0x2b10,	// (0x0004c7f3) wait_border_pane_g1_copy1

0xe7b7,	// (0x0005849a) form_field_popup_pane_g1

0x987e,	// (0x00053561) form_field_popup_pane_t1_ParamLimits

0xa23e,	// (0x00053f21) input_focus_pane_cp7_ParamLimits

0xa26c,	// (0x00053f4f) list_form_pane_ParamLimits

0xe7bf,	// (0x000584a2) form_field_popup_wide_pane_g1

0xe7c7,	// (0x000584aa) form_field_popup_wide_pane_t1_ParamLimits

0xa23e,	// (0x00053f21) input_focus_pane_cp8_ParamLimits

0xa278,	// (0x00053f5b) list_form_wide_pane_ParamLimits

0x3c79,	// (0x0004d95c) aid_size_cell_graphic_pane

0x98fd,	// (0x000535e0) data_form_pane_t1_ParamLimits

0x99f9,	// (0x000536dc) data_form_wide_pane_t1_ParamLimits

0xba1e,	// (0x00055701) bg_status_flat_pane

0x9de6,	// (0x00053ac9) title_pane_t1_ParamLimits

0x7701,	// (0x000513e4) title_pane_t2_ParamLimits

0x7727,	// (0x0005140a) title_pane_t3_ParamLimits

0xf557,	// (0x0005923a) title_pane_t_ParamLimits

0xa85c,	// (0x0005453f) level_1_signal_ParamLimits

0xa86e,	// (0x00054551) level_2_signal_ParamLimits

0xa881,	// (0x00054564) level_3_signal_ParamLimits

0xa894,	// (0x00054577) level_4_signal_ParamLimits

0xa8a7,	// (0x0005458a) level_5_signal_ParamLimits

0xa8ba,	// (0x0005459d) level_6_signal_ParamLimits

0xa8cd,	// (0x000545b0) level_7_signal_ParamLimits

0xa85c,	// (0x0005453f) level_1_battery_ParamLimits

0xa86e,	// (0x00054551) level_2_battery_ParamLimits

0xa881,	// (0x00054564) level_3_battery_ParamLimits

0xa894,	// (0x00054577) level_4_battery_ParamLimits

0xa8a7,	// (0x0005458a) level_5_battery_ParamLimits

0xa8ba,	// (0x0005459d) level_6_battery_ParamLimits

0xa8cd,	// (0x000545b0) level_7_battery_ParamLimits

0x2d30,	// (0x0004ca13) bg_status_flat_pane_g1

0x2d38,	// (0x0004ca1b) bg_status_flat_pane_g2

0x2d40,	// (0x0004ca23) bg_status_flat_pane_g3

0x2d48,	// (0x0004ca2b) bg_status_flat_pane_g4

0x2d50,	// (0x0004ca33) bg_status_flat_pane_g5

0x2d58,	// (0x0004ca3b) bg_status_flat_pane_g6

0x2d60,	// (0x0004ca43) bg_status_flat_pane_g7

0x9e7a,	// (0x00053b5d) tabs_3_active_pane_t1_ParamLimits

0x9e7a,	// (0x00053b5d) tabs_3_passive_pane_t1_ParamLimits

0x9e94,	// (0x00053b77) tabs_4_active_pane_t1_ParamLimits

0x9e94,	// (0x00053b77) tabs_4_1_passive_pane_t1_ParamLimits

0xa3f6,	// (0x000540d9) tabs_2_active_pane_t1_ParamLimits

0xa3f6,	// (0x000540d9) tabs_2_passive_pane_t1_ParamLimits

0x7739,	// (0x0005141c) bg_active_tab_pane_cp4_ParamLimits

0xa408,	// (0x000540eb) tabs_2_long_active_pane_t1_ParamLimits

0x046b,	// (0x0004a14e) bg_passive_tab_pane_cp4_ParamLimits

0x0896,	// (0x0004a579) list_single_midp_graphic_pane_t1_ParamLimits

0x7739,	// (0x0005141c) bg_active_tab_pane_cp5_ParamLimits

0xa41b,	// (0x000540fe) tabs_3_long_active_pane_t1_ParamLimits

0x046b,	// (0x0004a14e) bg_passive_tab_pane_cp5_ParamLimits

0x0896,	// (0x0004a579) list_single_midp_graphic_pane_t1

0xba1e,	// (0x00055701) bg_status_flat_pane_ParamLimits

0x21b6,	// (0x0004be99) indicator_pane_cp2_ParamLimits

0x21b6,	// (0x0004be99) indicator_pane_cp2

0xbbb4,	// (0x00055897) navi_pane_srt_ParamLimits

0xbbb4,	// (0x00055897) navi_pane_srt

0x231d,	// (0x0004c000) popup_clock_digital_analogue_window_cp1

0x777d,	// (0x00051460) indicator_pane_t1

0xc5f1,	// (0x000562d4) copy_highlight_pane

0xc5f1,	// (0x000562d4) cursor_graphics_pane

0xc5f1,	// (0x000562d4) graphic_within_text_pane

0xc5f1,	// (0x000562d4) link_highlight_pane

0x354f,	// (0x0004d232) popup_preview_text_window_t5_ParamLimits

0x354f,	// (0x0004d232) popup_preview_text_window_t5

0xe882,	// (0x00058565) cursor_digital_pane

0xe882,	// (0x00058565) cursor_primary_pane

0xe893,	// (0x00058576) cursor_primary_small_pane

0xe89b,	// (0x0005857e) cursor_secondary_pane

0xe8a3,	// (0x00058586) cursor_title_pane

0xe882,	// (0x00058565) link_highlight_digital_pane

0xe88a,	// (0x0005856d) link_highlight_primary_pane

0xe893,	// (0x00058576) link_highlight_primary_small_pane

0xe89b,	// (0x0005857e) link_highlight_secondary_pane

0xe8a3,	// (0x00058586) link_highlight_title_pane

0xe882,	// (0x00058565) copy_highlight_digital_pane

0xe882,	// (0x00058565) copy_highlight_primary_pane

0xe893,	// (0x00058576) copy_highlight_primary_small_pane

0xe89b,	// (0x0005857e) copy_highlight_secondary_pane

0xe8a3,	// (0x00058586) copy_highlight_title_pane

0xe89b,	// (0x0005857e) graphic_text_digital_pane

0x2dce,	// (0x0004cab1) graphic_text_primary_pane

0x2dd7,	// (0x0004caba) graphic_text_primary_small_pane

0xe893,	// (0x00058576) graphic_text_secondary_pane

0xe882,	// (0x00058565) graphic_text_title_pane

0xafaa,	// (0x00054c8d) cursor_primary_pane_g1

0x2dc0,	// (0x0004caa3) cursor_text_primary_t1

0xc70c,	// (0x000563ef) cursor_primary_small_pane_g1

0x2db2,	// (0x0004ca95) cursor_text_primary_small_t1

0xc702,	// (0x000563e5) cursor_primary_small_pane_g1_copy1

0x2d9a,	// (0x0004ca7d) cursor_text_primary_small_t1_copy1

0x2d78,	// (0x0004ca5b) cursor_text_title_t1

0xc6f8,	// (0x000563db) cursor_title_pane_g1

0xafaa,	// (0x00054c8d) cursor_digital_pane_g1

0xe8ab,	// (0x0005858e) cursor_text_digital_t1

0xe8b9,	// (0x0005859c) link_highlight_primary_pane_g1

0x2d21,	// (0x0004ca04) link_highlight_primary_pane_t1

0xe8b9,	// (0x0005859c) link_highlight_primary_small_pane_g1

0xe8c1,	// (0x000585a4) link_highlight_primary_small_pane_t1

0xe8d0,	// (0x000585b3) link_highlight_secondary_pane_g1

0xe8d8,	// (0x000585bb) link_highlight_secondary_pane_t1

0x2c95,	// (0x0004c978) link_highlight_title_pane_g1

0x2c9d,	// (0x0004c980) link_highlight_title_pane_t1

0x2c7e,	// (0x0004c961) link_highlight_digital_pane_g1

0x2c86,	// (0x0004c969) link_highlight_digital_pane_t1

0x2b46,	// (0x0004c829) copy_highlight_primary_pane_g1

0x2b5d,	// (0x0004c840) copy_highlight_primary_pane_t1

0x2b46,	// (0x0004c829) copy_highlight_primary_small_pane_g1

0x2b4e,	// (0x0004c831) copy_highlight_primary_small_pane_t1

0xe8e7,	// (0x000585ca) copy_highlight_secondary_pane_g1

0xe8ef,	// (0x000585d2) copy_highlight_secondary_pane_t1

0x2b2f,	// (0x0004c812) copy_highlight_title_pane_g1

0x2b37,	// (0x0004c81a) copy_highlight_title_pane_t1

0x2b46,	// (0x0004c829) copy_highlight_digital_pane_g1

0x3e49,	// (0x0004db2c) copy_highlight_digital_pane_t1

0x3d9d,	// (0x0004da80) graphic_text_primary_pane_g1

0x3e2d,	// (0x0004db10) graphic_text_primary_pane_t1

0x3e3b,	// (0x0004db1e) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x000596b1) graphic_text_primary_pane_t

0x3e09,	// (0x0004daec) graphic_text_primary_small_pane_g1

0x3e11,	// (0x0004daf4) graphic_text_primary_small_pane_t1

0x3e1f,	// (0x0004db02) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x000596ac) graphic_text_primary_small_pane_t

0x3de5,	// (0x0004dac8) graphic_text_secondary_pane_g1

0x3ded,	// (0x0004dad0) graphic_text_secondary_pane_t1

0x3dfb,	// (0x0004dade) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x000596a7) graphic_text_secondary_pane_t

0x3dc1,	// (0x0004daa4) graphic_text_title_pane_g1

0x3dc9,	// (0x0004daac) graphic_text_title_pane_t1

0x3dd7,	// (0x0004daba) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x000596a2) graphic_text_title_pane_t

0x3d9d,	// (0x0004da80) graphic_text_digital_pane_g1

0x3da5,	// (0x0004da88) graphic_text_digital_pane_t1

0x3db3,	// (0x0004da96) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0005969d) graphic_text_digital_pane_t

0x7739,	// (0x0005141c) navi_icon_pane_srt_ParamLimits

0x7739,	// (0x0005141c) navi_icon_pane_srt

0x76df,	// (0x000513c2) navi_midp_pane_srt

0x76df,	// (0x000513c2) navi_navi_pane_srt

0x7739,	// (0x0005141c) navi_text_pane_srt_ParamLimits

0x7739,	// (0x0005141c) navi_text_pane_srt

0x3d68,	// (0x0004da4b) navi_navi_icon_text_pane_srt

0x3d70,	// (0x0004da53) navi_navi_pane_srt_g1_ParamLimits

0x3d70,	// (0x0004da53) navi_navi_pane_srt_g1

0x3d82,	// (0x0004da65) navi_navi_pane_srt_g2_ParamLimits

0x3d82,	// (0x0004da65) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x00059698) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x00059698) navi_navi_pane_srt_g

0x3d94,	// (0x0004da77) navi_navi_tabs_pane_srt

0x3d68,	// (0x0004da4b) navi_navi_text_pane_srt

0x3d68,	// (0x0004da4b) navi_navi_volume_pane_srt

0x3d59,	// (0x0004da3c) navi_navi_text_pane_srt_t1

0x0c8a,	// (0x0004a96d) navi_navi_volume_pane_srt_g1

0x0c92,	// (0x0004a975) volume_small_pane_srt_ParamLimits

0x0c92,	// (0x0004a975) volume_small_pane_srt

0x0126,	// (0x00049e09) volume_small_pane_srt_g1_ParamLimits

0x0126,	// (0x00049e09) volume_small_pane_srt_g1

0x0136,	// (0x00049e19) volume_small_pane_srt_g2_ParamLimits

0x0136,	// (0x00049e19) volume_small_pane_srt_g2

0x0147,	// (0x00049e2a) volume_small_pane_srt_g3_ParamLimits

0x0147,	// (0x00049e2a) volume_small_pane_srt_g3

0x0158,	// (0x00049e3b) volume_small_pane_srt_g4_ParamLimits

0x0158,	// (0x00049e3b) volume_small_pane_srt_g4

0x0169,	// (0x00049e4c) volume_small_pane_srt_g5_ParamLimits

0x0169,	// (0x00049e4c) volume_small_pane_srt_g5

0x017a,	// (0x00049e5d) volume_small_pane_srt_g6_ParamLimits

0x017a,	// (0x00049e5d) volume_small_pane_srt_g6

0x018b,	// (0x00049e6e) volume_small_pane_srt_g7_ParamLimits

0x018b,	// (0x00049e6e) volume_small_pane_srt_g7

0x019c,	// (0x00049e7f) volume_small_pane_srt_g8_ParamLimits

0x019c,	// (0x00049e7f) volume_small_pane_srt_g8

0x01ad,	// (0x00049e90) volume_small_pane_srt_g9_ParamLimits

0x01ad,	// (0x00049e90) volume_small_pane_srt_g9

0x01be,	// (0x00049ea1) volume_small_pane_srt_g10_ParamLimits

0x01be,	// (0x00049ea1) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x00059445) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x00059445) volume_small_pane_srt_g

0x79d7,	// (0x000516ba) query_popup_data_pane_cp2

0x3d3f,	// (0x0004da22) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3d3f,	// (0x0004da22) navi_navi_icon_text_pane_srt_t1

0x2dce,	// (0x0004cab1) navi_tabs_2_long_pane_srt

0x2dce,	// (0x0004cab1) navi_tabs_2_pane_srt

0x2dce,	// (0x0004cab1) navi_tabs_3_long_pane_srt

0x2dce,	// (0x0004cab1) navi_tabs_3_pane_srt

0x2dce,	// (0x0004cab1) navi_tabs_4_pane_srt

0x0c6a,	// (0x0004a94d) tabs_2_active_pane_srt_ParamLimits

0x0c6a,	// (0x0004a94d) tabs_2_active_pane_srt

0x0c7a,	// (0x0004a95d) tabs_2_passive_pane_srt_ParamLimits

0x0c7a,	// (0x0004a95d) tabs_2_passive_pane_srt

0x25b2,	// (0x0004c295) bg_passive_tab_pane_cp1_srt_ParamLimits

0x25b2,	// (0x0004c295) bg_passive_tab_pane_cp1_srt

0x3d0b,	// (0x0004d9ee) bg_passive_tab_pane_g1_cp1_srt

0xab91,	// (0x00054874) bg_passive_tab_pane_g2_cp1_srt

0x3d14,	// (0x0004d9f7) bg_passive_tab_pane_g3_cp1_srt

0x786c,	// (0x0005154f) bg_active_tab_pane_cp1_srt_ParamLimits

0x786c,	// (0x0005154f) bg_active_tab_pane_cp1_srt

0x3d1d,	// (0x0004da00) tabs_2_active_pane_srt_g1

0xcbe0,	// (0x000568c3) tabs_2_active_pane_srt_t1_ParamLimits

0xcbe0,	// (0x000568c3) tabs_2_active_pane_srt_t1

0x3d0b,	// (0x0004d9ee) bg_active_tab_pane_g1_cp1_srt

0xab91,	// (0x00054874) bg_active_tab_pane_g2_cp1_srt

0x3d14,	// (0x0004d9f7) bg_active_tab_pane_g3_cp1_srt

0x0c37,	// (0x0004a91a) tabs_3_active_pane_srt_ParamLimits

0x0c37,	// (0x0004a91a) tabs_3_active_pane_srt

0x0c48,	// (0x0004a92b) tabs_3_passive_pane_cp_srt_ParamLimits

0x0c48,	// (0x0004a92b) tabs_3_passive_pane_cp_srt

0x0c59,	// (0x0004a93c) tabs_3_passive_pane_srt_ParamLimits

0x0c59,	// (0x0004a93c) tabs_3_passive_pane_srt

0x25b2,	// (0x0004c295) bg_passive_tab_pane_cp2_srt_ParamLimits

0x25b2,	// (0x0004c295) bg_passive_tab_pane_cp2_srt

0xe8fe,	// (0x000585e1) bg_passive_tab_pane_g1_cp2_srt

0xab91,	// (0x00054874) bg_passive_tab_pane_g2_cp2_srt

0xe907,	// (0x000585ea) bg_passive_tab_pane_g3_cp2_srt

0x786c,	// (0x0005154f) bg_active_tab_pane_cp2_srt_ParamLimits

0x786c,	// (0x0005154f) bg_active_tab_pane_cp2_srt

0x3cf1,	// (0x0004d9d4) tabs_3_active_pane_srt_g1

0xcbca,	// (0x000568ad) tabs_3_active_pane_srt_t1_ParamLimits

0xcbca,	// (0x000568ad) tabs_3_active_pane_srt_t1

0xe8fe,	// (0x000585e1) bg_active_tab_pane_g1_cp2_srt

0xab91,	// (0x00054874) bg_active_tab_pane_g2_cp2_srt

0xe907,	// (0x000585ea) bg_active_tab_pane_g3_cp2_srt

0x0bef,	// (0x0004a8d2) tabs_4_active_pane_srt_ParamLimits

0x0bef,	// (0x0004a8d2) tabs_4_active_pane_srt

0x0c01,	// (0x0004a8e4) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0c01,	// (0x0004a8e4) tabs_4_passive_pane_cp2_srt

0x03f9,	// (0x0004a0dc) aid_size_cell_toolbar

0x3907,	// (0x0004d5ea) main_idle_act_pane_ParamLimits

0x0634,	// (0x0004a317) popup_large_graphic_colour_window_ParamLimits

0xb8e0,	// (0x000555c3) popup_toolbar_window_ParamLimits

0xb8e0,	// (0x000555c3) popup_toolbar_window

0x3adf,	// (0x0004d7c2) list_single_graphic_2heading_pane_ParamLimits

0x3adf,	// (0x0004d7c2) list_single_graphic_2heading_pane

0xa5cb,	// (0x000542ae) aid_size_cell_apps_grid_lsc_pane

0xa5dd,	// (0x000542c0) aid_size_cell_apps_grid_prt_pane

0x046b,	// (0x0004a14e) bg_wml_button_pane_cp1_ParamLimits

0x046b,	// (0x0004a14e) bg_wml_button_pane_cp1

0xc6a8,	// (0x0005638b) form_midp_field_text_pane_t1_ParamLimits

0x25b2,	// (0x0004c295) input_focus_pane_cp050_ParamLimits

0x27f1,	// (0x0004c4d4) list_midp_form_text_pane_ParamLimits

0x27a3,	// (0x0004c486) input_focus_pane_cp051_ParamLimits

0x27b7,	// (0x0004c49a) list_midp_choice_pane_ParamLimits

0xc65f,	// (0x00056342) list_single_2graphic_pane_cp3_ParamLimits

0xc65f,	// (0x00056342) list_single_2graphic_pane_cp3

0x49a4,	// (0x0004e687) list_single_midp_graphic_pane_ParamLimits

0x49a4,	// (0x0004e687) list_single_midp_graphic_pane

0xe990,	// (0x00058673) list_single_graphic_2heading_pane_g1_ParamLimits

0xe990,	// (0x00058673) list_single_graphic_2heading_pane_g1

0xe99c,	// (0x0005867f) list_single_graphic_2heading_pane_g4_ParamLimits

0xe99c,	// (0x0005867f) list_single_graphic_2heading_pane_g4

0xe9a8,	// (0x0005868b) list_single_graphic_2heading_pane_g5_ParamLimits

0xe9a8,	// (0x0005868b) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x00059498) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x00059498) list_single_graphic_2heading_pane_g

0xe9b4,	// (0x00058697) list_single_graphic_2heading_pane_t1_ParamLimits

0xe9b4,	// (0x00058697) list_single_graphic_2heading_pane_t1

0xe9c8,	// (0x000586ab) list_single_graphic_2heading_pane_t2_ParamLimits

0xe9c8,	// (0x000586ab) list_single_graphic_2heading_pane_t2

0xe9e4,	// (0x000586c7) list_single_graphic_2heading_pane_t3_ParamLimits

0xe9e4,	// (0x000586c7) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0005949f) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0005949f) list_single_graphic_2heading_pane_t

0x247c,	// (0x0004c15f) bg_popup_sub_pane_cp2

0x24a6,	// (0x0004c189) grid_toobar_pane

0x080e,	// (0x0004a4f1) cell_toolbar_pane_ParamLimits

0x080e,	// (0x0004a4f1) cell_toolbar_pane

0x24e2,	// (0x0004c1c5) cell_toolbar_pane_g1_ParamLimits

0x24e2,	// (0x0004c1c5) cell_toolbar_pane_g1

0x24f6,	// (0x0004c1d9) cell_toolbar_pane_g2_ParamLimits

0x24f6,	// (0x0004c1d9) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x000594ad) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x000594ad) cell_toolbar_pane_g

0x2518,	// (0x0004c1fb) grid_highlight_pane_cp2_ParamLimits

0x2518,	// (0x0004c1fb) grid_highlight_pane_cp2

0x2532,	// (0x0004c215) toolbar_button_pane

0x253e,	// (0x0004c221) toolbar_button_pane_g1

0x2546,	// (0x0004c229) toolbar_button_pane_g2

0x254e,	// (0x0004c231) toolbar_button_pane_g3

0x2556,	// (0x0004c239) toolbar_button_pane_g4

0x255e,	// (0x0004c241) toolbar_button_pane_g5

0x2566,	// (0x0004c249) toolbar_button_pane_g6

0x256e,	// (0x0004c251) toolbar_button_pane_g7

0x2576,	// (0x0004c259) toolbar_button_pane_g8

0x257e,	// (0x0004c261) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x000594b2) toolbar_button_pane_g

0x0852,	// (0x0004a535) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0852,	// (0x0004a535) list_single_2graphic_pane_g1_cp3

0xbd19,	// (0x000559fc) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbd19,	// (0x000559fc) list_single_2graphic_pane_g2_cp3

0xad64,	// (0x00054a47) list_single_2graphic_pane_g3_cp3

0x086f,	// (0x0004a552) list_single_2graphic_pane_g4_cp3_ParamLimits

0x086f,	// (0x0004a552) list_single_2graphic_pane_g4_cp3

0x087b,	// (0x0004a55e) list_single_2graphic_pane_t1_cp3_ParamLimits

0x087b,	// (0x0004a55e) list_single_2graphic_pane_t1_cp3

0xad58,	// (0x00054a3b) list_single_midp_graphic_pane_g2_ParamLimits

0xad58,	// (0x00054a3b) list_single_midp_graphic_pane_g2

0xe978,	// (0x0005865b) aid_zoom_text_primary

0xe980,	// (0x00058663) aid_zoom_text_secondary

0xb002,	// (0x00054ce5) status_small_pane_g7_ParamLimits

0xb002,	// (0x00054ce5) status_small_pane_g7

0xb025,	// (0x00054d08) status_small_pane_t1_ParamLimits

0x9dce,	// (0x00053ab1) title_pane_g2

0x0003,

0xf54e,	// (0x00059231) title_pane_g

0xa05a,	// (0x00053d3d) aid_size_cell_colour_1_pane_ParamLimits

0xa05a,	// (0x00053d3d) aid_size_cell_colour_1_pane

0xa06e,	// (0x00053d51) aid_size_cell_colour_2_pane_ParamLimits

0xa06e,	// (0x00053d51) aid_size_cell_colour_2_pane

0xa082,	// (0x00053d65) aid_size_cell_colour_3_pane_ParamLimits

0xa082,	// (0x00053d65) aid_size_cell_colour_3_pane

0xa096,	// (0x00053d79) aid_size_cell_colour_4_pane_ParamLimits

0xa096,	// (0x00053d79) aid_size_cell_colour_4_pane

0xf1ac,	// (0x00058e8f) title_pane_stacon_g1_ParamLimits

0xf1ac,	// (0x00058e8f) title_pane_stacon_g1

0x2bb4,	// (0x0004c897) popup_note_wait_window_g3_ParamLimits

0x2bb4,	// (0x0004c897) popup_note_wait_window_g3

0x2c2b,	// (0x0004c90e) popup_note_wait_window_t5_ParamLimits

0x2c2b,	// (0x0004c90e) popup_note_wait_window_t5

0x76df,	// (0x000513c2) main_feb_china_hwr_fs_writing_pane

0xb277,	// (0x00054f5a) popup_feb_china_hwr_fs_window_ParamLimits

0xb277,	// (0x00054f5a) popup_feb_china_hwr_fs_window

0xbd2a,	// (0x00055a0d) aid_size_cell_hwr_fs_ParamLimits

0xbd2a,	// (0x00055a0d) aid_size_cell_hwr_fs

0x25b2,	// (0x0004c295) bg_popup_sub_pane_cp3_ParamLimits

0x25b2,	// (0x0004c295) bg_popup_sub_pane_cp3

0xbd3f,	// (0x00055a22) grid_hwr_fs_pane_ParamLimits

0xbd3f,	// (0x00055a22) grid_hwr_fs_pane

0x08f1,	// (0x0004a5d4) linegrid_hwr_fs_pane_ParamLimits

0x08f1,	// (0x0004a5d4) linegrid_hwr_fs_pane

0xbd57,	// (0x00055a3a) cell_hwr_fs_pane_ParamLimits

0xbd57,	// (0x00055a3a) cell_hwr_fs_pane

0x25be,	// (0x0004c2a1) linegrid_hwr_fs_pane_g1_ParamLimits

0x25be,	// (0x0004c2a1) linegrid_hwr_fs_pane_g1

0xc633,	// (0x00056316) linegrid_hwr_fs_pane_g2_ParamLimits

0xc633,	// (0x00056316) linegrid_hwr_fs_pane_g2

0x25dc,	// (0x0004c2bf) linegrid_hwr_fs_pane_g3_ParamLimits

0x25dc,	// (0x0004c2bf) linegrid_hwr_fs_pane_g3

0x0925,	// (0x0004a608) linegrid_hwr_fs_pane_g4_ParamLimits

0x0925,	// (0x0004a608) linegrid_hwr_fs_pane_g4

0x0943,	// (0x0004a626) linegrid_hwr_fs_pane_g5_ParamLimits

0x0943,	// (0x0004a626) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x000594d8) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x000594d8) linegrid_hwr_fs_pane_g

0x25e8,	// (0x0004c2cb) cell_hwr_fs_pane_g1_ParamLimits

0x25e8,	// (0x0004c2cb) cell_hwr_fs_pane_g1

0x23b3,	// (0x0004c096) cell_hwr_fs_pane_g2_ParamLimits

0x23b3,	// (0x0004c096) cell_hwr_fs_pane_g2

0xc645,	// (0x00056328) cell_hwr_fs_pane_g3_ParamLimits

0xc645,	// (0x00056328) cell_hwr_fs_pane_g3

0xc652,	// (0x00056335) cell_hwr_fs_pane_g4_ParamLimits

0xc652,	// (0x00056335) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x000594e3) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x000594e3) cell_hwr_fs_pane_g

0xbd7d,	// (0x00055a60) cell_hwr_fs_pane_t1

0x76df,	// (0x000513c2) grid_highlight_pane_cp6

0x76df,	// (0x000513c2) main_idle_act2_pane

0xa39b,	// (0x0005407e) aid_inside_area_popup_secondary

0xc773,	// (0x00056456) aid_inside_area_window_primary_ParamLimits

0xc773,	// (0x00056456) aid_inside_area_window_primary

0x3e58,	// (0x0004db3b) ai2_news_ticker_pane

0x3e60,	// (0x0004db43) aid_size_cell_ai1_link_ParamLimits

0x3e60,	// (0x0004db43) aid_size_cell_ai1_link

0x3e7a,	// (0x0004db5d) popup_ai2_data_window_ParamLimits

0x3e7a,	// (0x0004db5d) popup_ai2_data_window

0x3e98,	// (0x0004db7b) popup_ai2_link_window_ParamLimits

0x3e98,	// (0x0004db7b) popup_ai2_link_window

0x25b2,	// (0x0004c295) bg_popup_sub_pane_cp4_ParamLimits

0x25b2,	// (0x0004c295) bg_popup_sub_pane_cp4

0x3eae,	// (0x0004db91) grid_ai2_link_pane_ParamLimits

0x3eae,	// (0x0004db91) grid_ai2_link_pane

0x3ec5,	// (0x0004dba8) popup_ai2_link_window_g1_ParamLimits

0x3ec5,	// (0x0004dba8) popup_ai2_link_window_g1

0x3ed1,	// (0x0004dbb4) popup_ai2_link_window_g2_ParamLimits

0x3ed1,	// (0x0004dbb4) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x000596b6) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x000596b6) popup_ai2_link_window_g

0x3ee2,	// (0x0004dbc5) ai2_mp_button_pane

0x3eea,	// (0x0004dbcd) ai2_mp_volume_pane

0x27a3,	// (0x0004c486) bg_popup_sub_pane_cp5_ParamLimits

0x27a3,	// (0x0004c486) bg_popup_sub_pane_cp5

0x3ef2,	// (0x0004dbd5) heading_ai2_gene_pane_ParamLimits

0x3ef2,	// (0x0004dbd5) heading_ai2_gene_pane

0x3efe,	// (0x0004dbe1) list_ai2_gene_pane_ParamLimits

0x3efe,	// (0x0004dbe1) list_ai2_gene_pane

0x3f46,	// (0x0004dc29) cell_ai2_link_pane_ParamLimits

0x3f46,	// (0x0004dc29) cell_ai2_link_pane

0x3f5c,	// (0x0004dc3f) cell_ai2_link_pane_g1

0x76df,	// (0x000513c2) grid_highlight_pane_cp7

0x0ca7,	// (0x0004a98a) ai2_mp_volume_pane_g1

0x402f,	// (0x0004dd12) ai2_mp_volume_pane_g2

0x3fa4,	// (0x0004dc87) list_ai2_gene_pane_t1

0x4037,	// (0x0004dd1a) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x000596cf) ai2_mp_volume_pane_g

0x0caf,	// (0x0004a992) volume_small_pane_cp3

0x403f,	// (0x0004dd22) aid_size_cell_ai2_button

0x4047,	// (0x0004dd2a) grid_ai2_button_pane

0x4050,	// (0x0004dd33) cell_ai2_button_pane_ParamLimits

0x4050,	// (0x0004dd33) cell_ai2_button_pane

0x76d5,	// (0x000513b8) cell_ai2_button_pane_g1

0x76df,	// (0x000513c2) grid_highlight_pane_cp8

0x3fef,	// (0x0004dcd2) ai2_gene_pane_t1_ParamLimits

0x3fef,	// (0x0004dcd2) ai2_gene_pane_t1

0xb1e3,	// (0x00054ec6) aid_height_parent_landscape

0xc968,	// (0x0005664b) aid_height_set_list

0x3907,	// (0x0004d5ea) aid_size_parent

0x3c79,	// (0x0004d95c) aid_size_cell_graphic_pane_ParamLimits

0x3f0e,	// (0x0004dbf1) popup_ai2_data_window_g1_ParamLimits

0x3f0e,	// (0x0004dbf1) popup_ai2_data_window_g1

0x3f1a,	// (0x0004dbfd) ai2_news_ticker_pane_g1

0x3f22,	// (0x0004dc05) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x000596bb) ai2_news_ticker_pane_g

0x3f2a,	// (0x0004dc0d) ai2_news_ticker_pane_t1

0x3f38,	// (0x0004dc1b) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x000596c0) ai2_news_ticker_pane_t

0x3f65,	// (0x0004dc48) heading_ai2_gene_pane_g1

0x3f6d,	// (0x0004dc50) heading_ai2_gene_pane_t1_ParamLimits

0x3f6d,	// (0x0004dc50) heading_ai2_gene_pane_t1

0x3f82,	// (0x0004dc65) list_highlight_pane_cp6

0x3f8a,	// (0x0004dc6d) ai2_gene_pane_ParamLimits

0x3f8a,	// (0x0004dc6d) ai2_gene_pane

0x3fb2,	// (0x0004dc95) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x000596c5) list_ai2_gene_pane_t

0x3fc0,	// (0x0004dca3) list_highlight_pane_cp8_ParamLimits

0x3fc0,	// (0x0004dca3) list_highlight_pane_cp8

0x3fd1,	// (0x0004dcb4) ai2_gene_pane_g1_ParamLimits

0x3fd1,	// (0x0004dcb4) ai2_gene_pane_g1

0x3fe3,	// (0x0004dcc6) ai2_gene_pane_g2_ParamLimits

0x3fe3,	// (0x0004dcc6) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x000596ca) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x000596ca) ai2_gene_pane_g

0x7cf2,	// (0x000519d5) scroll_pane_cp12

0xb1a2,	// (0x00054e85) control_pane_t3_ParamLimits

0xb1a2,	// (0x00054e85) control_pane_t3

0xb016,	// (0x00054cf9) status_small_pane_g8_ParamLimits

0xb016,	// (0x00054cf9) status_small_pane_g8

0xb319,	// (0x00054ffc) popup_find_window_ParamLimits

0xb5ca,	// (0x000552ad) popup_note_image_window_ParamLimits

0xe9fc,	// (0x000586df) list_double2_graphic_pane_vc_g1_ParamLimits

0xe9fc,	// (0x000586df) list_double2_graphic_pane_vc_g1

0xa16d,	// (0x00053e50) list_double2_graphic_pane_vc_g2_ParamLimits

0xa16d,	// (0x00053e50) list_double2_graphic_pane_vc_g2

0x083e,	// (0x0004a521) list_double2_graphic_pane_vc_g3_ParamLimits

0x083e,	// (0x0004a521) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x000594a6) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x000594a6) list_double2_graphic_pane_vc_g

0xea08,	// (0x000586eb) list_double2_graphic_pane_vc_t1_ParamLimits

0xea08,	// (0x000586eb) list_double2_graphic_pane_vc_t1

0xa16d,	// (0x00053e50) list_single_heading_pane_vc_g1_ParamLimits

0xa16d,	// (0x00053e50) list_single_heading_pane_vc_g1

0x083e,	// (0x0004a521) list_single_heading_pane_vc_g2_ParamLimits

0x083e,	// (0x0004a521) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x000592b5) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x000592b5) list_single_heading_pane_vc_g

0xea1e,	// (0x00058701) list_single_heading_pane_vc_t1_ParamLimits

0xea1e,	// (0x00058701) list_single_heading_pane_vc_t1

0xea36,	// (0x00058719) list_single_heading_pane_vc_t2_ParamLimits

0xea36,	// (0x00058719) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x000594c7) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x000594c7) list_single_heading_pane_vc_t

0x08ac,	// (0x0004a58f) list_setting_number_pane_vc_g1_ParamLimits

0x08ac,	// (0x0004a58f) list_setting_number_pane_vc_g1

0x08b8,	// (0x0004a59b) list_setting_number_pane_vc_g2_ParamLimits

0x08b8,	// (0x0004a59b) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x000594cc) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x000594cc) list_setting_number_pane_vc_g

0xea48,	// (0x0005872b) list_setting_number_pane_vc_t1_ParamLimits

0xea48,	// (0x0005872b) list_setting_number_pane_vc_t1

0xea5c,	// (0x0005873f) list_setting_number_pane_vc_t2_ParamLimits

0xea5c,	// (0x0005873f) list_setting_number_pane_vc_t2

0xea78,	// (0x0005875b) list_setting_number_pane_vc_t3_ParamLimits

0xea78,	// (0x0005875b) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x000594d1) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x000594d1) list_setting_number_pane_vc_t

0xeaa6,	// (0x00058789) set_value_pane_vc_ParamLimits

0xeaa6,	// (0x00058789) set_value_pane_vc

0x3adf,	// (0x0004d7c2) list_double2_graphic_pane_vc_ParamLimits

0x3adf,	// (0x0004d7c2) list_double2_graphic_pane_vc

0x3adf,	// (0x0004d7c2) list_double2_large_graphic_pane_vc_ParamLimits

0x3adf,	// (0x0004d7c2) list_double2_large_graphic_pane_vc

0x3adf,	// (0x0004d7c2) list_double2_pane_vc_ParamLimits

0x3adf,	// (0x0004d7c2) list_double2_pane_vc

0x3adf,	// (0x0004d7c2) list_double_graphic_heading_pane_vc_ParamLimits

0x3adf,	// (0x0004d7c2) list_double_graphic_heading_pane_vc

0x3adf,	// (0x0004d7c2) list_double_graphic_pane_vc_ParamLimits

0x3adf,	// (0x0004d7c2) list_double_graphic_pane_vc

0x3adf,	// (0x0004d7c2) list_double_heading_pane_vc_ParamLimits

0x3adf,	// (0x0004d7c2) list_double_heading_pane_vc

0x3af3,	// (0x0004d7d6) list_double_large_graphic_pane_vc_ParamLimits

0x3af3,	// (0x0004d7d6) list_double_large_graphic_pane_vc

0x3adf,	// (0x0004d7c2) list_double_number_pane_vc_ParamLimits

0x3adf,	// (0x0004d7c2) list_double_number_pane_vc

0x3adf,	// (0x0004d7c2) list_double_pane_vc_ParamLimits

0x3adf,	// (0x0004d7c2) list_double_pane_vc

0x3adf,	// (0x0004d7c2) list_double_time_pane_vc_ParamLimits

0x3adf,	// (0x0004d7c2) list_double_time_pane_vc

0x3adf,	// (0x0004d7c2) list_setting_number_pane_vc_ParamLimits

0x3adf,	// (0x0004d7c2) list_setting_number_pane_vc

0x3adf,	// (0x0004d7c2) list_setting_pane_vc_ParamLimits

0x3adf,	// (0x0004d7c2) list_setting_pane_vc

0x3adf,	// (0x0004d7c2) list_single_graphic_heading_pane_vc_ParamLimits

0x3adf,	// (0x0004d7c2) list_single_graphic_heading_pane_vc

0x3adf,	// (0x0004d7c2) list_single_heading_pane_vc_ParamLimits

0x3adf,	// (0x0004d7c2) list_single_heading_pane_vc

0x3adf,	// (0x0004d7c2) list_single_number_heading_pane_vc_ParamLimits

0x3adf,	// (0x0004d7c2) list_single_number_heading_pane_vc

0xe9fc,	// (0x000586df) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe9fc,	// (0x000586df) list_double_graphic_heading_pane_vc_g1

0x0cb8,	// (0x0004a99b) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0cb8,	// (0x0004a99b) list_double_graphic_heading_pane_vc_g2

0x0cc4,	// (0x0004a9a7) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0cc4,	// (0x0004a9a7) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f3,	// (0x000596d6) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f3,	// (0x000596d6) list_double_graphic_heading_pane_vc_g

0xeadd,	// (0x000587c0) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xeadd,	// (0x000587c0) list_double_graphic_heading_pane_vc_t1

0xeaf3,	// (0x000587d6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xeaf3,	// (0x000587d6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fa,	// (0x000596dd) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fa,	// (0x000596dd) list_double_graphic_heading_pane_vc_t

0x08ac,	// (0x0004a58f) list_setting_pane_vc_g1_ParamLimits

0x08ac,	// (0x0004a58f) list_setting_pane_vc_g1

0x08b8,	// (0x0004a59b) list_setting_pane_vc_g2_ParamLimits

0x08b8,	// (0x0004a59b) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x000594cc) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x000594cc) list_setting_pane_vc_g

0xeb11,	// (0x000587f4) list_setting_pane_vc_t1_ParamLimits

0xeb11,	// (0x000587f4) list_setting_pane_vc_t1

0xeb2d,	// (0x00058810) list_setting_pane_vc_t2_ParamLimits

0xeb2d,	// (0x00058810) list_setting_pane_vc_t2

0x0001,

0xfa3d,	// (0x00059720) list_setting_pane_vc_t_ParamLimits

0xfa3d,	// (0x00059720) list_setting_pane_vc_t

0xeaa6,	// (0x00058789) set_value_pane_cp_vc_ParamLimits

0xeaa6,	// (0x00058789) set_value_pane_cp_vc

0xa16d,	// (0x00053e50) list_single_number_heading_pane_vc_g1_ParamLimits

0xa16d,	// (0x00053e50) list_single_number_heading_pane_vc_g1

0x083e,	// (0x0004a521) list_single_number_heading_pane_vc_g2_ParamLimits

0x083e,	// (0x0004a521) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x000592b5) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x000592b5) list_single_number_heading_pane_vc_g

0xea1e,	// (0x00058701) list_single_number_heading_pane_vc_t1_ParamLimits

0xea1e,	// (0x00058701) list_single_number_heading_pane_vc_t1

0xeb49,	// (0x0005882c) list_single_number_heading_pane_vc_t2_ParamLimits

0xeb49,	// (0x0005882c) list_single_number_heading_pane_vc_t2

0xe6fd,	// (0x000583e0) list_single_number_heading_pane_vc_t3_ParamLimits

0xe6fd,	// (0x000583e0) list_single_number_heading_pane_vc_t3

0x0002,

0xfa42,	// (0x00059725) list_single_number_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x00059725) list_single_number_heading_pane_vc_t

0xe9fc,	// (0x000586df) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe9fc,	// (0x000586df) list_single_graphic_heading_pane_vc_g1

0xa16d,	// (0x00053e50) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xa16d,	// (0x00053e50) list_single_graphic_heading_pane_vc_g4

0x083e,	// (0x0004a521) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x083e,	// (0x0004a521) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x000594a6) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x000594a6) list_single_graphic_heading_pane_vc_g

0xea1e,	// (0x00058701) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xea1e,	// (0x00058701) list_single_graphic_heading_pane_vc_t1

0xeb5b,	// (0x0005883e) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xeb5b,	// (0x0005883e) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x0005972c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x0005972c) list_single_graphic_heading_pane_vc_t

0xa16d,	// (0x00053e50) list_double2_pane_vc_g1_ParamLimits

0xa16d,	// (0x00053e50) list_double2_pane_vc_g1

0x083e,	// (0x0004a521) list_double2_pane_vc_g2_ParamLimits

0x083e,	// (0x0004a521) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x000592b5) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x000592b5) list_double2_pane_vc_g

0xeac7,	// (0x000587aa) list_double2_pane_vc_t1_ParamLimits

0xeac7,	// (0x000587aa) list_double2_pane_vc_t1

0x0cd0,	// (0x0004a9b3) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0cd0,	// (0x0004a9b3) list_double2_large_graphic_pane_vc_g1

0xa16d,	// (0x00053e50) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xa16d,	// (0x00053e50) list_double2_large_graphic_pane_vc_g2

0x083e,	// (0x0004a521) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x083e,	// (0x0004a521) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x000592cd) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x000592cd) list_double2_large_graphic_pane_vc_g

0xe6e7,	// (0x000583ca) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe6e7,	// (0x000583ca) list_double2_large_graphic_pane_vc_t1

0x0cdc,	// (0x0004a9bf) list_double_time_pane_vc_g1_ParamLimits

0x0cdc,	// (0x0004a9bf) list_double_time_pane_vc_g1

0x0ce8,	// (0x0004a9cb) list_double_time_pane_vc_g2_ParamLimits

0x0ce8,	// (0x0004a9cb) list_double_time_pane_vc_g2

0x0001,

0xfa4e,	// (0x00059731) list_double_time_pane_vc_g_ParamLimits

0xfa4e,	// (0x00059731) list_double_time_pane_vc_g

0xeb6d,	// (0x00058850) list_double_time_pane_vc_t1_ParamLimits

0xeb6d,	// (0x00058850) list_double_time_pane_vc_t1

0xeb97,	// (0x0005887a) list_double_time_pane_vc_t2_ParamLimits

0xeb97,	// (0x0005887a) list_double_time_pane_vc_t2

0xebe0,	// (0x000588c3) list_double_time_pane_vc_t3_ParamLimits

0xebe0,	// (0x000588c3) list_double_time_pane_vc_t3

0xebf2,	// (0x000588d5) list_double_time_pane_vc_t4_ParamLimits

0xebf2,	// (0x000588d5) list_double_time_pane_vc_t4

0x0003,

0xfa53,	// (0x00059736) list_double_time_pane_vc_t_ParamLimits

0xfa53,	// (0x00059736) list_double_time_pane_vc_t

0xa16d,	// (0x00053e50) list_double_pane_vc_g1_ParamLimits

0xa16d,	// (0x00053e50) list_double_pane_vc_g1

0x083e,	// (0x0004a521) list_double_pane_vc_g2_ParamLimits

0x083e,	// (0x0004a521) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x000592b5) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x000592b5) list_double_pane_vc_g

0xec17,	// (0x000588fa) list_double_pane_vc_t1_ParamLimits

0xec17,	// (0x000588fa) list_double_pane_vc_t1

0xec2b,	// (0x0005890e) list_double_pane_vc_t2_ParamLimits

0xec2b,	// (0x0005890e) list_double_pane_vc_t2

0x0001,

0xfa5c,	// (0x0005973f) list_double_pane_vc_t_ParamLimits

0xfa5c,	// (0x0005973f) list_double_pane_vc_t

0xa16d,	// (0x00053e50) list_double_number_pane_vc_g1_ParamLimits

0xa16d,	// (0x00053e50) list_double_number_pane_vc_g1

0x083e,	// (0x0004a521) list_double_number_pane_vc_g2_ParamLimits

0x083e,	// (0x0004a521) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x000592b5) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x000592b5) list_double_number_pane_vc_g

0xec41,	// (0x00058924) list_double_number_pane_vc_t1_ParamLimits

0xec41,	// (0x00058924) list_double_number_pane_vc_t1

0xec55,	// (0x00058938) list_double_number_pane_vc_t2_ParamLimits

0xec55,	// (0x00058938) list_double_number_pane_vc_t2

0xec69,	// (0x0005894c) list_double_number_pane_vc_t3_ParamLimits

0xec69,	// (0x0005894c) list_double_number_pane_vc_t3

0x0002,

0xfa61,	// (0x00059744) list_double_number_pane_vc_t_ParamLimits

0xfa61,	// (0x00059744) list_double_number_pane_vc_t

0x0cf4,	// (0x0004a9d7) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0cf4,	// (0x0004a9d7) list_double_large_graphic_pane_vc_g1

0x0d1c,	// (0x0004a9ff) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0d1c,	// (0x0004a9ff) list_double_large_graphic_pane_vc_g2

0x0d30,	// (0x0004aa13) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0d30,	// (0x0004aa13) list_double_large_graphic_pane_vc_g3

0xec7f,	// (0x00058962) list_double_large_graphic_pane_vc_g4_ParamLimits

0xec7f,	// (0x00058962) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa68,	// (0x0005974b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x0005974b) list_double_large_graphic_pane_vc_g

0xec8f,	// (0x00058972) list_double_large_graphic_pane_vc_t1_ParamLimits

0xec8f,	// (0x00058972) list_double_large_graphic_pane_vc_t1

0xecb1,	// (0x00058994) list_double_large_graphic_pane_vc_t2_ParamLimits

0xecb1,	// (0x00058994) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x00059754) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x00059754) list_double_large_graphic_pane_vc_t

0x0cb8,	// (0x0004a99b) list_double_heading_pane_vc_g1_ParamLimits

0x0cb8,	// (0x0004a99b) list_double_heading_pane_vc_g1

0x0cc4,	// (0x0004a9a7) list_double_heading_pane_vc_g2_ParamLimits

0x0cc4,	// (0x0004a9a7) list_double_heading_pane_vc_g2

0x0001,

0xfa76,	// (0x00059759) list_double_heading_pane_vc_g_ParamLimits

0xfa76,	// (0x00059759) list_double_heading_pane_vc_g

0xecd1,	// (0x000589b4) list_double_heading_pane_vc_t1_ParamLimits

0xecd1,	// (0x000589b4) list_double_heading_pane_vc_t1

0xea1e,	// (0x00058701) list_double_heading_pane_vc_t2_ParamLimits

0xea1e,	// (0x00058701) list_double_heading_pane_vc_t2

0x0001,

0xfa7b,	// (0x0005975e) list_double_heading_pane_vc_t_ParamLimits

0xfa7b,	// (0x0005975e) list_double_heading_pane_vc_t

0xece3,	// (0x000589c6) list_double_graphic_pane_vc_g1_ParamLimits

0xece3,	// (0x000589c6) list_double_graphic_pane_vc_g1

0x0d3f,	// (0x0004aa22) list_double_graphic_pane_vc_g2_ParamLimits

0x0d3f,	// (0x0004aa22) list_double_graphic_pane_vc_g2

0xa16d,	// (0x00053e50) list_double_graphic_pane_vc_g3_ParamLimits

0xa16d,	// (0x00053e50) list_double_graphic_pane_vc_g3

0x0003,

0xfa80,	// (0x00059763) list_double_graphic_pane_vc_g_ParamLimits

0xfa80,	// (0x00059763) list_double_graphic_pane_vc_g

0xecef,	// (0x000589d2) list_double_graphic_pane_vc_t1_ParamLimits

0xecef,	// (0x000589d2) list_double_graphic_pane_vc_t1

0xed19,	// (0x000589fc) list_double_graphic_pane_vc_t2_ParamLimits

0xed19,	// (0x000589fc) list_double_graphic_pane_vc_t2

0x0001,

0xfa89,	// (0x0005976c) list_double_graphic_pane_vc_t_ParamLimits

0xfa89,	// (0x0005976c) list_double_graphic_pane_vc_t

0xe6c6,	// (0x000583a9) aid_size_cell_fastswap

0x9ba7,	// (0x0005388a) aid_size_cell_touch_ParamLimits

0x9ba7,	// (0x0005388a) aid_size_cell_touch

0xf09a,	// (0x00058d7d) popup_fast_swap_wide_window_ParamLimits

0xf09a,	// (0x00058d7d) popup_fast_swap_wide_window

0x9d65,	// (0x00053a48) touch_pane_ParamLimits

0x9d65,	// (0x00053a48) touch_pane

0xa22a,	// (0x00053f0d) button_value_adjust_pane_cp2

0xe729,	// (0x0005840c) button_value_adjust_pane_cp4

0xe731,	// (0x00058414) form_field_data_pane_cp2

0x982e,	// (0x00053511) form_field_data_wide_pane_cp2

0xa6dc,	// (0x000543bf) bg_scroll_pane_ParamLimits

0xf308,	// (0x00058feb) scroll_handle_pane_ParamLimits

0xf31c,	// (0x00058fff) scroll_sc2_down_pane_ParamLimits

0xf31c,	// (0x00058fff) scroll_sc2_down_pane

0xa70d,	// (0x000543f0) scroll_sc2_up_pane_ParamLimits

0xa70d,	// (0x000543f0) scroll_sc2_up_pane

0xcd37,	// (0x00056a1a) grid_wheel_folder_pane_g1_ParamLimits

0xcd37,	// (0x00056a1a) grid_wheel_folder_pane_g1

0xf4e6,	// (0x000591c9) clock_nsta_pane_cp2_ParamLimits

0xf4e6,	// (0x000591c9) clock_nsta_pane_cp2

0x046b,	// (0x0004a14e) listscroll_midp_pane_ParamLimits

0xaf01,	// (0x00054be4) midp_canvas_pane

0x03e7,	// (0x0004a0ca) nsta_clock_indic_pane

0x0435,	// (0x0004a118) listscroll_form_pane_vc

0x0459,	// (0x0004a13c) listscroll_set_pane_vc_ParamLimits

0x0459,	// (0x0004a13c) listscroll_set_pane_vc

0xba46,	// (0x00055729) clock_nsta_pane

0xba70,	// (0x00055753) indicator_nsta_pane

0x247c,	// (0x0004c15f) bg_popup_sub_pane_cp2_ParamLimits

0x2490,	// (0x0004c173) find_pane_cp2_ParamLimits

0x2490,	// (0x0004c173) find_pane_cp2

0x24a6,	// (0x0004c189) grid_toobar_pane_ParamLimits

0x2586,	// (0x0004c269) list_form_gen_pane_vc_ParamLimits

0x2586,	// (0x0004c269) list_form_gen_pane_vc

0x259c,	// (0x0004c27f) scroll_pane_cp8_vc_ParamLimits

0x259c,	// (0x0004c27f) scroll_pane_cp8_vc

0x2618,	// (0x0004c2fb) data_form_wide_pane_vc_ParamLimits

0x2618,	// (0x0004c2fb) data_form_wide_pane_vc

0x2624,	// (0x0004c307) form_field_data_wide_pane_vc_g1

0x262c,	// (0x0004c30f) form_field_data_wide_pane_vc_t1_ParamLimits

0x262c,	// (0x0004c30f) form_field_data_wide_pane_vc_t1

0xa23e,	// (0x00053f21) input_focus_pane_cp6_vc_ParamLimits

0xa23e,	// (0x00053f21) input_focus_pane_cp6_vc

0xc6d0,	// (0x000563b3) list_midp_pane_ParamLimits

0x3ce5,	// (0x0004d9c8) scroll_pane_cp16_ParamLimits

0x3ce5,	// (0x0004d9c8) scroll_pane_cp16

0x2988,	// (0x0004c66b) button_value_adjust_pane_ParamLimits

0x2988,	// (0x0004c66b) button_value_adjust_pane

0xc979,	// (0x0005665c) button_value_adjust_pane_cp6_ParamLimits

0xc979,	// (0x0005665c) button_value_adjust_pane_cp6

0xcabb,	// (0x0005679e) settings_code_pane_cp_ParamLimits

0xcabb,	// (0x0005679e) settings_code_pane_cp

0x76d5,	// (0x000513b8) cell_touch_pane_g1

0x76d5,	// (0x000513b8) cell_touch_pane_g2

0x0001,

0xf708,	// (0x000593eb) cell_touch_pane_g

0xcbf6,	// (0x000568d9) cell_touch_pane_cp_ParamLimits

0xcbf6,	// (0x000568d9) cell_touch_pane_cp

0xcc12,	// (0x000568f5) cell_touch_pane_ParamLimits

0xcc12,	// (0x000568f5) cell_touch_pane

0x76d5,	// (0x000513b8) scroll_sc2_down_pane_g1

0x76d5,	// (0x000513b8) scroll_sc2_up_pane_g1

0x76df,	// (0x000513c2) bg_set_opt_pane_cp4_vc

0x4083,	// (0x0004dd66) list_set_graphic_pane_vc_g1_ParamLimits

0x4083,	// (0x0004dd66) list_set_graphic_pane_vc_g1

0xcc30,	// (0x00056913) list_set_graphic_pane_vc_g2_ParamLimits

0xcc30,	// (0x00056913) list_set_graphic_pane_vc_g2

0x0001,

0xf9ff,	// (0x000596e2) list_set_graphic_pane_vc_g_ParamLimits

0xf9ff,	// (0x000596e2) list_set_graphic_pane_vc_g

0x408f,	// (0x0004dd72) text_primary_small_cp13_vc_ParamLimits

0x408f,	// (0x0004dd72) text_primary_small_cp13_vc

0x40a7,	// (0x0004dd8a) list_set_graphic_pane_vc_ParamLimits

0x40a7,	// (0x0004dd8a) list_set_graphic_pane_vc

0x76df,	// (0x000513c2) input_focus_pane_cp2_vc

0x76d5,	// (0x000513b8) setting_code_pane_vc_g1

0x7750,	// (0x00051433) setting_code_pane_vc_t1

0x40bc,	// (0x0004dd9f) set_text_pane_vc_t1_ParamLimits

0x40bc,	// (0x0004dd9f) set_text_pane_vc_t1

0x76df,	// (0x000513c2) input_focus_pane_cp1_vc

0x40da,	// (0x0004ddbd) list_set_text_pane_vc

0x76d5,	// (0x000513b8) setting_text_pane_vc_g1

0x76df,	// (0x000513c2) bg_set_opt_pane_cp2_vc

0x7747,	// (0x0005142a) setting_slider_graphic_pane_vc_g1

0x40e4,	// (0x0004ddc7) setting_slider_graphic_pane_vc_t1

0x40f6,	// (0x0004ddd9) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa04,	// (0x000596e7) setting_slider_graphic_pane_vc_t

0x4108,	// (0x0004ddeb) slider_set_pane_cp_vc

0x4112,	// (0x0004ddf5) slider_set_pane_vc_g1

0x411b,	// (0x0004ddfe) slider_set_pane_vc_g2

0x0006,

0xfa09,	// (0x000596ec) slider_set_pane_vc_g

0xa299,	// (0x00053f7c) set_opt_bg_pane_g1_copy1

0xa2a1,	// (0x00053f84) set_opt_bg_pane_g2_copy1

0x4147,	// (0x0004de2a) set_opt_bg_pane_g3_copy1

0xa2b1,	// (0x00053f94) set_opt_bg_pane_g4_copy1

0xa2b9,	// (0x00053f9c) set_opt_bg_pane_g5_copy1

0xa2c1,	// (0x00053fa4) set_opt_bg_pane_g6_copy1

0x4151,	// (0x0004de34) set_opt_bg_pane_g7_copy1

0x415b,	// (0x0004de3e) set_opt_bg_pane_g8_copy1

0x4165,	// (0x0004de48) set_opt_bg_pane_g9_copy1

0x76df,	// (0x000513c2) bg_set_opt_pane_cp_vc

0x416f,	// (0x0004de52) setting_slider_pane_vc_t1

0x417e,	// (0x0004de61) setting_slider_pane_vc_t2

0x4190,	// (0x0004de73) setting_slider_pane_vc_t3

0x0002,

0xfa18,	// (0x000596fb) setting_slider_pane_vc_t

0x41a2,	// (0x0004de85) slider_set_pane_vc

0x0967,	// (0x0004a64a) volume_set_pane_vc_g1

0x0970,	// (0x0004a653) volume_set_pane_vc_g2

0x0979,	// (0x0004a65c) volume_set_pane_vc_g3

0x0982,	// (0x0004a665) volume_set_pane_vc_g4

0x098b,	// (0x0004a66e) volume_set_pane_vc_g5

0x0994,	// (0x0004a677) volume_set_pane_vc_g6

0x099d,	// (0x0004a680) volume_set_pane_vc_g7

0x09a6,	// (0x0004a689) volume_set_pane_vc_g8

0x09af,	// (0x0004a692) volume_set_pane_vc_g9

0x09b8,	// (0x0004a69b) volume_set_pane_vc_g10

0x0009,

0xfa1f,	// (0x00059702) volume_set_pane_vc_g

0x41ac,	// (0x0004de8f) volume_set_pane_vc

0x41b6,	// (0x0004de99) button_value_adjust_pane_cp1_vc

0x41c0,	// (0x0004dea3) list_highlight_pane_cp2_vc

0x41c9,	// (0x0004deac) list_set_pane_vc_ParamLimits

0x41c9,	// (0x0004deac) list_set_pane_vc

0x4239,	// (0x0004df1c) main_pane_set_vc_t1_ParamLimits

0x4239,	// (0x0004df1c) main_pane_set_vc_t1

0x424e,	// (0x0004df31) main_pane_set_vc_t2_ParamLimits

0x424e,	// (0x0004df31) main_pane_set_vc_t2

0x4260,	// (0x0004df43) main_pane_set_vc_t3_ParamLimits

0x4260,	// (0x0004df43) main_pane_set_vc_t3

0x4274,	// (0x0004df57) main_pane_set_vc_t4_ParamLimits

0x4274,	// (0x0004df57) main_pane_set_vc_t4

0x0003,

0xfa34,	// (0x00059717) main_pane_set_vc_t_ParamLimits

0xfa34,	// (0x00059717) main_pane_set_vc_t

0x4288,	// (0x0004df6b) setting_code_pane_vc_ParamLimits

0x4288,	// (0x0004df6b) setting_code_pane_vc

0x4299,	// (0x0004df7c) setting_slider_graphic_pane_vc

0x4299,	// (0x0004df7c) setting_slider_pane_vc

0x4299,	// (0x0004df7c) setting_text_pane_vc

0x4299,	// (0x0004df7c) setting_volume_pane_vc

0x42a3,	// (0x0004df86) scroll_pane_cp121_vc

0xa218,	// (0x00053efb) set_content_pane_vc

0x42ab,	// (0x0004df8e) button_value_adjust_pane_g1

0x42b4,	// (0x0004df97) button_value_adjust_pane_g2

0x0001,

0xfa8e,	// (0x00059771) button_value_adjust_pane_g

0x42bd,	// (0x0004dfa0) form_field_slider_wide_pane_vc_t1_ParamLimits

0x42bd,	// (0x0004dfa0) form_field_slider_wide_pane_vc_t1

0x42cf,	// (0x0004dfb2) form_field_slider_wide_pane_vc_t2_ParamLimits

0x42cf,	// (0x0004dfb2) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa93,	// (0x00059776) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa93,	// (0x00059776) form_field_slider_wide_pane_vc_t

0x786c,	// (0x0005154f) input_focus_pane_cp10_vc_ParamLimits

0x786c,	// (0x0005154f) input_focus_pane_cp10_vc

0x42fb,	// (0x0004dfde) slider_cont_pane_cp1_vc_ParamLimits

0x42fb,	// (0x0004dfde) slider_cont_pane_cp1_vc

0x430d,	// (0x0004dff0) slider_form_pane_g1_cp2

0x411b,	// (0x0004ddfe) slider_form_pane_g2_cp2

0x433a,	// (0x0004e01d) form_field_slider_pane_vc_t3

0x4348,	// (0x0004e02b) form_field_slider_pane_vc_t4

0x4356,	// (0x0004e039) slider_form_pane_vc_ParamLimits

0x4356,	// (0x0004e039) slider_form_pane_vc

0x4363,	// (0x0004e046) form_field_slider_pane_vc_t1_ParamLimits

0x4363,	// (0x0004e046) form_field_slider_pane_vc_t1

0x42cf,	// (0x0004dfb2) form_field_slider_pane_vc_t2_ParamLimits

0x42cf,	// (0x0004dfb2) form_field_slider_pane_vc_t2

0x0001,

0xfaa5,	// (0x00059788) form_field_slider_pane_vc_t_ParamLimits

0xfaa5,	// (0x00059788) form_field_slider_pane_vc_t

0x786c,	// (0x0005154f) input_focus_pane_cp9_vc_ParamLimits

0x786c,	// (0x0005154f) input_focus_pane_cp9_vc

0x4379,	// (0x0004e05c) slider_cont_pane_vc_ParamLimits

0x4379,	// (0x0004e05c) slider_cont_pane_vc

0x438d,	// (0x0004e070) list_form_graphic_pane_cp_vc_ParamLimits

0x438d,	// (0x0004e070) list_form_graphic_pane_cp_vc

0x2624,	// (0x0004c307) form_field_popup_wide_pane_vc_g1

0x43a2,	// (0x0004e085) form_field_popup_wide_pane_vc_t1_ParamLimits

0x43a2,	// (0x0004e085) form_field_popup_wide_pane_vc_t1

0xa23e,	// (0x00053f21) input_focus_pane_cp8_vc_ParamLimits

0xa23e,	// (0x00053f21) input_focus_pane_cp8_vc

0x43e7,	// (0x0004e0ca) list_form_wide_pane_vc_ParamLimits

0x43e7,	// (0x0004e0ca) list_form_wide_pane_vc

0x43f3,	// (0x0004e0d6) list_form_graphic_pane_vc_g1

0x43fb,	// (0x0004e0de) list_form_graphic_pane_vc_t1_ParamLimits

0x43fb,	// (0x0004e0de) list_form_graphic_pane_vc_t1

0x7739,	// (0x0005141c) list_highlight_pane_cp5_vc_ParamLimits

0x7739,	// (0x0005141c) list_highlight_pane_cp5_vc

0x4417,	// (0x0004e0fa) list_form_graphic_pane_vc_ParamLimits

0x4417,	// (0x0004e0fa) list_form_graphic_pane_vc

0x2624,	// (0x0004c307) form_field_popup_pane_vc_g1

0x442d,	// (0x0004e110) form_field_popup_pane_vc_t1_ParamLimits

0x442d,	// (0x0004e110) form_field_popup_pane_vc_t1

0xa23e,	// (0x00053f21) input_focus_pane_cp7_vc_ParamLimits

0xa23e,	// (0x00053f21) input_focus_pane_cp7_vc

0x4444,	// (0x0004e127) list_form_pane_vc_ParamLimits

0x4444,	// (0x0004e127) list_form_pane_vc

0x4450,	// (0x0004e133) data_form_pane_vc_t1_ParamLimits

0x4450,	// (0x0004e133) data_form_pane_vc_t1

0xa299,	// (0x00053f7c) input_focus_pane_vc_g1

0xa2a1,	// (0x00053f84) input_focus_pane_vc_g2

0xa2a9,	// (0x00053f8c) input_focus_pane_vc_g3

0xa2b1,	// (0x00053f94) input_focus_pane_vc_g4

0xa2b9,	// (0x00053f9c) input_focus_pane_vc_g5

0xa2c1,	// (0x00053fa4) input_focus_pane_vc_g6

0xa2c9,	// (0x00053fac) input_focus_pane_vc_g7

0xa2d1,	// (0x00053fb4) input_focus_pane_vc_g8

0xa2d9,	// (0x00053fbc) input_focus_pane_vc_g9

0x76d5,	// (0x000513b8) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x00059374) input_focus_pane_vc_g

0x2618,	// (0x0004c2fb) data_form_pane_vc_ParamLimits

0x2618,	// (0x0004c2fb) data_form_pane_vc

0x2624,	// (0x0004c307) form_field_data_pane_vc_g1

0x446d,	// (0x0004e150) form_field_data_pane_vc_t1_ParamLimits

0x446d,	// (0x0004e150) form_field_data_pane_vc_t1

0xa23e,	// (0x00053f21) input_focus_pane_vc_ParamLimits

0xa23e,	// (0x00053f21) input_focus_pane_vc

0x4487,	// (0x0004e16a) button_value_adjust_pane_cp3_vc

0x448f,	// (0x0004e172) button_value_adjust_pane_cp5_vc

0x4497,	// (0x0004e17a) form_field_data_pane_vc_ParamLimits

0x4497,	// (0x0004e17a) form_field_data_pane_vc

0x44b2,	// (0x0004e195) form_field_data_pane_vc_cp2

0x44ba,	// (0x0004e19d) form_field_data_wide_pane_vc_ParamLimits

0x44ba,	// (0x0004e19d) form_field_data_wide_pane_vc

0x44d4,	// (0x0004e1b7) form_field_data_wide_pane_vc_cp2

0x44dc,	// (0x0004e1bf) form_field_popup_pane_vc_ParamLimits

0x44dc,	// (0x0004e1bf) form_field_popup_pane_vc

0x44f7,	// (0x0004e1da) form_field_popup_wide_pane_vc_ParamLimits

0x44f7,	// (0x0004e1da) form_field_popup_wide_pane_vc

0x4511,	// (0x0004e1f4) form_field_slider_pane_vc_ParamLimits

0x4511,	// (0x0004e1f4) form_field_slider_pane_vc

0x4524,	// (0x0004e207) form_field_slider_wide_pane_vc_ParamLimits

0x4524,	// (0x0004e207) form_field_slider_wide_pane_vc

0xcc3c,	// (0x0005691f) grid_touch_1_pane_ParamLimits

0xcc3c,	// (0x0005691f) grid_touch_1_pane

0xcc50,	// (0x00056933) grid_touch_2_pane_ParamLimits

0xcc50,	// (0x00056933) grid_touch_2_pane

0x45f5,	// (0x0004e2d8) touch_pane_g1_ParamLimits

0x45f5,	// (0x0004e2d8) touch_pane_g1

0x455d,	// (0x0004e240) cell_app_pane_cp_wide_ParamLimits

0x455d,	// (0x0004e240) cell_app_pane_cp_wide

0x456e,	// (0x0004e251) grid_popup_fast_wide_pane_ParamLimits

0x456e,	// (0x0004e251) grid_popup_fast_wide_pane

0x4582,	// (0x0004e265) scroll_pane_cp19_ParamLimits

0x4582,	// (0x0004e265) scroll_pane_cp19

0x76df,	// (0x000513c2) bg_popup_window_pane_cp20

0x4596,	// (0x0004e279) listscroll_popup_fast_wide_pane

0xcc7c,	// (0x0005695f) grid_indicator_nsta_pane

0x459e,	// (0x0004e281) clock_nsta_pane_g1

0x45a7,	// (0x0004e28a) clock_nsta_pane_t1

0xcc8a,	// (0x0005696d) cell_indicator_nsta_pane_ParamLimits

0xcc8a,	// (0x0005696d) cell_indicator_nsta_pane

0x45f5,	// (0x0004e2d8) cell_indicator_nsta_pane_g1

0xcca3,	// (0x00056986) cell_indicator_nsta_pane_g2

0x0001,

0xfab6,	// (0x00059799) cell_indicator_nsta_pane_g

0x4619,	// (0x0004e2fc) clock_nsta_pane_cp

0x4621,	// (0x0004e304) indicator_nsta_pane_cp

0x462a,	// (0x0004e30d) nsta_clock_indic_pane_g1

0x7775,	// (0x00051458) grid_indicator_pane

0xa7ff,	// (0x000544e2) scroll_pane_cp29

0xf432,	// (0x00059115) indicator_nsta_pane_cp2_ParamLimits

0xf432,	// (0x00059115) indicator_nsta_pane_cp2

0x7739,	// (0x0005141c) main_apps_wheel_pane

0x280b,	// (0x0004c4ee) form_midp_field_text_pane_ParamLimits

0x295a,	// (0x0004c63d) scroll_bar_cp050_ParamLimits

0x4693,	// (0x0004e376) cell_indicator_pane_ParamLimits

0x4693,	// (0x0004e376) cell_indicator_pane

0x46ab,	// (0x0004e38e) cell_indicator_pane_g1

0xccb9,	// (0x0005699c) grid_wheel_folder_pane_ParamLimits

0xccb9,	// (0x0005699c) grid_wheel_folder_pane

0xccc7,	// (0x000569aa) list_wheel_apps_pane_ParamLimits

0xccc7,	// (0x000569aa) list_wheel_apps_pane

0xccd5,	// (0x000569b8) main_apps_wheel_pane_g1_ParamLimits

0xccd5,	// (0x000569b8) main_apps_wheel_pane_g1

0xcce5,	// (0x000569c8) main_apps_wheel_pane_g2_ParamLimits

0xcce5,	// (0x000569c8) main_apps_wheel_pane_g2

0x0001,

0xfad2,	// (0x000597b5) main_apps_wheel_pane_g_ParamLimits

0xfad2,	// (0x000597b5) main_apps_wheel_pane_g

0xccf5,	// (0x000569d8) main_apps_wheel_pane_t1_ParamLimits

0xccf5,	// (0x000569d8) main_apps_wheel_pane_t1

0xcd0d,	// (0x000569f0) list_wheel_apps_pane_g1

0xcd15,	// (0x000569f8) list_wheel_apps_pane_g2

0xcd1d,	// (0x00056a00) list_wheel_apps_pane_g3

0xcd25,	// (0x00056a08) list_wheel_apps_pane_g4

0xcd2d,	// (0x00056a10) list_wheel_apps_pane_g5

0x0004,

0xfad7,	// (0x000597ba) list_wheel_apps_pane_g

0xadb6,	// (0x00054a99) navi_icon_text_pane

0xb938,	// (0x0005561b) aid_fill_nsta

0xcd4a,	// (0x00056a2d) navi_icon_text_pane_g1

0xcd56,	// (0x00056a39) navi_icon_text_pane_t1

0xac41,	// (0x00054924) list_set_graphic_pane_t1_ParamLimits

0xac41,	// (0x00054924) list_set_graphic_pane_t1

0x30ab,	// (0x0004cd8e) popup_midp_note_alarm_window_t6_ParamLimits

0x30ab,	// (0x0004cd8e) popup_midp_note_alarm_window_t6

0x30bd,	// (0x0004cda0) popup_midp_note_alarm_window_t7_ParamLimits

0x30bd,	// (0x0004cda0) popup_midp_note_alarm_window_t7

0x30cf,	// (0x0004cdb2) popup_midp_note_alarm_window_t8_ParamLimits

0x30cf,	// (0x0004cdb2) popup_midp_note_alarm_window_t8

0x30e1,	// (0x0004cdc4) popup_midp_note_alarm_window_t9_ParamLimits

0x30e1,	// (0x0004cdc4) popup_midp_note_alarm_window_t9

0x30f3,	// (0x0004cdd6) popup_midp_note_alarm_window_t10_ParamLimits

0x30f3,	// (0x0004cdd6) popup_midp_note_alarm_window_t10

0x3105,	// (0x0004cde8) popup_midp_note_alarm_window_t11_ParamLimits

0x3105,	// (0x0004cde8) popup_midp_note_alarm_window_t11

0x3117,	// (0x0004cdfa) scroll_pane_cp17_ParamLimits

0x3117,	// (0x0004cdfa) scroll_pane_cp17

0x0967,	// (0x0004a64a) volume_small_pane_cp_g1

0x0d5c,	// (0x0004aa3f) volume_small_pane_cp_g2

0x0d65,	// (0x0004aa48) volume_small_pane_cp_g3

0x0d6e,	// (0x0004aa51) volume_small_pane_cp_g4

0x0d77,	// (0x0004aa5a) volume_small_pane_cp_g5

0x0d80,	// (0x0004aa63) volume_small_pane_cp_g6

0x0d89,	// (0x0004aa6c) volume_small_pane_cp_g7

0x0d92,	// (0x0004aa75) volume_small_pane_cp_g8

0x0d9b,	// (0x0004aa7e) volume_small_pane_cp_g9

0x0da4,	// (0x0004aa87) volume_small_pane_cp_g10

0xe841,	// (0x00058524) midp_ticker_pane_g1_ParamLimits

0xe84d,	// (0x00058530) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x00059440) midp_ticker_pane_g_ParamLimits

0xaf98,	// (0x00054c7b) midp_ticker_pane_t1_ParamLimits

0xb95c,	// (0x0005563f) aid_fill_nsta_2

0x2946,	// (0x0004c629) list_form2_midp_pane

0x3aae,	// (0x0004d791) midp_editing_number_pane_ParamLimits

0x3abd,	// (0x0004d7a0) midp_ticker_pane_ParamLimits

0x479e,	// (0x0004e481) form2_midp_field_pane

0x47c2,	// (0x0004e4a5) scroll_pane_cp51

0x47e2,	// (0x0004e4c5) form2_midp_button_pane_ParamLimits

0x47e2,	// (0x0004e4c5) form2_midp_button_pane

0x47f4,	// (0x0004e4d7) form2_midp_content_pane_ParamLimits

0x47f4,	// (0x0004e4d7) form2_midp_content_pane

0x480e,	// (0x0004e4f1) form2_midp_field_choice_group_pane

0x4816,	// (0x0004e4f9) form2_midp_field_pane_g1

0x481e,	// (0x0004e501) form2_midp_field_pane_g2

0x4826,	// (0x0004e509) form2_midp_field_pane_g3

0x482e,	// (0x0004e511) form2_midp_field_pane_g4

0x0003,

0xfafc,	// (0x000597df) form2_midp_field_pane_g

0x4836,	// (0x0004e519) form2_midp_gauge_slider_pane

0x483e,	// (0x0004e521) form2_midp_gauge_wait_pane

0x4846,	// (0x0004e529) form2_midp_image_pane_ParamLimits

0x4846,	// (0x0004e529) form2_midp_image_pane

0x4861,	// (0x0004e544) form2_midp_label_pane_ParamLimits

0x4861,	// (0x0004e544) form2_midp_label_pane

0xcd84,	// (0x00056a67) form2_midp_label_pane_cp_ParamLimits

0xcd84,	// (0x00056a67) form2_midp_label_pane_cp

0x48a1,	// (0x0004e584) form2_midp_string_pane_ParamLimits

0x48a1,	// (0x0004e584) form2_midp_string_pane

0xed37,	// (0x00058a1a) form2_midp_text_pane_ParamLimits

0xed37,	// (0x00058a1a) form2_midp_text_pane

0x48b3,	// (0x0004e596) form2_midp_time_pane

0x48c3,	// (0x0004e5a6) input_focus_pane_cp51_ParamLimits

0x48c3,	// (0x0004e5a6) input_focus_pane_cp51

0x48db,	// (0x0004e5be) form2_midp_label_pane_t1_ParamLimits

0x48db,	// (0x0004e5be) form2_midp_label_pane_t1

0xed5a,	// (0x00058a3d) form2_mdip_text_pane_t1_ParamLimits

0xed5a,	// (0x00058a3d) form2_mdip_text_pane_t1

0xed79,	// (0x00058a5c) form2_midp_time_pane_t1

0x4929,	// (0x0004e60c) form2_midp_gauge_slider_pane_t1

0xcda5,	// (0x00056a88) form2_midp_gauge_slider_pane_t2

0xcdb7,	// (0x00056a9a) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb05,	// (0x000597e8) form2_midp_gauge_slider_pane_t

0x495f,	// (0x0004e642) form2_midp_slider_pane

0x496b,	// (0x0004e64e) form2_midp_gauge_wait_pane_t1

0x4979,	// (0x0004e65c) form2_midp_wait_pane_ParamLimits

0x4979,	// (0x0004e65c) form2_midp_wait_pane

0x266b,	// (0x0004c34e) list_single_2graphic_pane_cp4_ParamLimits

0x266b,	// (0x0004c34e) list_single_2graphic_pane_cp4

0x49a4,	// (0x0004e687) list_single_midp_graphic_pane_cp_ParamLimits

0x49a4,	// (0x0004e687) list_single_midp_graphic_pane_cp

0x76df,	// (0x000513c2) list_highlight_pane_cp20

0x49c8,	// (0x0004e6ab) list_single_2graphic_pane_g1_cp4

0x3f65,	// (0x0004dc48) list_single_2graphic_pane_g2_cp4

0x49d0,	// (0x0004e6b3) list_single_2graphic_pane_t1_cp4

0x7739,	// (0x0005141c) list_highlight_pane_cp21

0x49df,	// (0x0004e6c2) list_single_midp_graphic_pane_g4_cp

0x49ee,	// (0x0004e6d1) list_single_midp_graphic_pane_t1_cp

0xcdc9,	// (0x00056aac) form2_mdip_string_pane_t1_ParamLimits

0xcdc9,	// (0x00056aac) form2_mdip_string_pane_t1

0x76df,	// (0x000513c2) bg_wml_button_pane_cp2

0x76d5,	// (0x000513b8) form2_midp_image_pane_g1

0xf15b,	// (0x00058e3e) list_double_large_graphic_pane_g5_ParamLimits

0xf15b,	// (0x00058e3e) list_double_large_graphic_pane_g5

0x046b,	// (0x0004a14e) midp_form_pane_ParamLimits

0x7739,	// (0x0005141c) main_apps_wheel_pane_ParamLimits

0xb650,	// (0x00055333) popup_preview_window_ParamLimits

0xb650,	// (0x00055333) popup_preview_window

0x1fc5,	// (0x0004bca8) popup_touch_info_window_ParamLimits

0x1fc5,	// (0x0004bca8) popup_touch_info_window

0x1fe7,	// (0x0004bcca) popup_touch_menu_window_ParamLimits

0x1fe7,	// (0x0004bcca) popup_touch_menu_window

0x76cb,	// (0x000513ae) bg_popup_sub_pane_cp6

0x4aa8,	// (0x0004e78b) list_touch_menu_pane

0x4ab0,	// (0x0004e793) list_single_touch_menu_pane_ParamLimits

0x4ab0,	// (0x0004e793) list_single_touch_menu_pane

0x4ac8,	// (0x0004e7ab) list_single_touch_menu_pane_t1

0x7739,	// (0x0005141c) bg_popup_sub_pane_cp7_ParamLimits

0x7739,	// (0x0005141c) bg_popup_sub_pane_cp7

0x4ad6,	// (0x0004e7b9) heading_sub_pane

0x4ade,	// (0x0004e7c1) list_touch_info_pane_ParamLimits

0x4ade,	// (0x0004e7c1) list_touch_info_pane

0x4aed,	// (0x0004e7d0) list_single_touch_info_pane_ParamLimits

0x4aed,	// (0x0004e7d0) list_single_touch_info_pane

0x4aff,	// (0x0004e7e2) list_single_touch_info_pane_t1

0x4b0d,	// (0x0004e7f0) list_single_touch_info_pane_t2

0x0001,

0xfb13,	// (0x000597f6) list_single_touch_info_pane_t

0xc5f1,	// (0x000562d4) bg_popup_heading_pane_cp

0x4b1b,	// (0x0004e7fe) heading_sub_pane_t1

0x25b2,	// (0x0004c295) bg_popup_preview_window_pane_cp_ParamLimits

0x25b2,	// (0x0004c295) bg_popup_preview_window_pane_cp

0x4ad6,	// (0x0004e7b9) heading_preview_pane

0x4ade,	// (0x0004e7c1) list_preview_pane_ParamLimits

0x4ade,	// (0x0004e7c1) list_preview_pane

0x4b29,	// (0x0004e80c) popup_preview_window_g1

0x4aed,	// (0x0004e7d0) list_single_preview_pane_ParamLimits

0x4aed,	// (0x0004e7d0) list_single_preview_pane

0x4b31,	// (0x0004e814) list_single_preview_pane_g1

0x4b39,	// (0x0004e81c) list_single_preview_pane_t1

0x4aff,	// (0x0004e7e2) list_single_preview_pane_t2

0x0001,

0xfb18,	// (0x000597fb) list_single_preview_pane_t

0x4b47,	// (0x0004e82a) bg_popup_heading_pane_cp2_ParamLimits

0x4b47,	// (0x0004e82a) bg_popup_heading_pane_cp2

0x4b5d,	// (0x0004e840) heading_preview_pane_g1

0x4b65,	// (0x0004e848) heading_preview_pane_t1_ParamLimits

0x4b65,	// (0x0004e848) heading_preview_pane_t1

0x778c,	// (0x0005146f) soft_indicator_pane_t1_ParamLimits

0x7ccf,	// (0x000519b2) scroll_pane_ParamLimits

0xa6fb,	// (0x000543de) scroll_sc2_left_pane

0xa704,	// (0x000543e7) scroll_sc2_right_pane

0xa723,	// (0x00054406) scroll_bg_pane_g1_ParamLimits

0xa738,	// (0x0005441b) scroll_bg_pane_g2_ParamLimits

0xa750,	// (0x00054433) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x000593cb) scroll_bg_pane_g_ParamLimits

0xa723,	// (0x00054406) scroll_handle_pane_g1_ParamLimits

0xa772,	// (0x00054455) scroll_handle_pane_g2_ParamLimits

0xa750,	// (0x00054433) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x000593d2) scroll_handle_pane_g_ParamLimits

0x0493,	// (0x0004a176) popup_choice_list_window_ParamLimits

0x0493,	// (0x0004a176) popup_choice_list_window

0x2488,	// (0x0004c16b) choice_list_pane

0x250a,	// (0x0004c1ed) cell_toolbar_pane_t1

0x2532,	// (0x0004c215) toolbar_button_pane_ParamLimits

0x35e1,	// (0x0004d2c4) ai_gene_pane_1_t2_ParamLimits

0x35e1,	// (0x0004d2c4) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x000595f5) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x000595f5) ai_gene_pane_1_t

0x4b82,	// (0x0004e865) scroll_sc2_left_pane_g1

0x4b82,	// (0x0004e865) scroll_sc2_right_pane_g1

0x046b,	// (0x0004a14e) bg_popup_sub_pane_cp10

0x4b8c,	// (0x0004e86f) list_choice_list_pane

0x4ba5,	// (0x0004e888) list_single_choice_list_pane_ParamLimits

0x4ba5,	// (0x0004e888) list_single_choice_list_pane

0x4bbd,	// (0x0004e8a0) list_single_choice_list_pane_g1

0xa3d9,	// (0x000540bc) list_single_choice_list_pane_t1_ParamLimits

0xa3d9,	// (0x000540bc) list_single_choice_list_pane_t1

0x4bc5,	// (0x0004e8a8) choice_list_pane_g1

0x4bcd,	// (0x0004e8b0) choice_list_pane_t1

0x76cb,	// (0x000513ae) input_focus_pane_cp11

0xa596,	// (0x00054279) title_pane_stacon_g2_ParamLimits

0xa596,	// (0x00054279) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x000593b1) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x000593b1) title_pane_stacon_g

0xc5f1,	// (0x000562d4) cursor_press_pane

0xb2cd,	// (0x00054fb0) popup_fep_hwr_window_ParamLimits

0xb2cd,	// (0x00054fb0) popup_fep_hwr_window

0x05d7,	// (0x0004a2ba) popup_fep_vkb_window_ParamLimits

0x05d7,	// (0x0004a2ba) popup_fep_vkb_window

0x4bdb,	// (0x0004e8be) cursor_press_pane_g1

0x0002,

0xfb41,	// (0x00059824) fep_vkb_side_pane_g_ParamLimits

0x0dd8,	// (0x0004aabb) fep_hwr_candidate_pane_ParamLimits

0x0dd8,	// (0x0004aabb) fep_hwr_candidate_pane

0x0e02,	// (0x0004aae5) fep_hwr_side_pane_ParamLimits

0x0e02,	// (0x0004aae5) fep_hwr_side_pane

0x0e24,	// (0x0004ab07) fep_hwr_top_pane_ParamLimits

0x0e24,	// (0x0004ab07) fep_hwr_top_pane

0x0e3c,	// (0x0004ab1f) fep_hwr_write_pane_ParamLimits

0x0e3c,	// (0x0004ab1f) fep_hwr_write_pane

0xfb41,	// (0x00059824) fep_vkb_side_pane_g

0x4be3,	// (0x0004e8c6) fep_hwr_top_pane_g1

0x4bf5,	// (0x0004e8d8) fep_hwr_top_pane_g2

0x0e68,	// (0x0004ab4b) fep_hwr_top_pane_g3

0x0002,

0xfb1d,	// (0x00059800) fep_hwr_top_pane_g

0x0e7d,	// (0x0004ab60) fep_hwr_top_text_pane

0xa8f0,	// (0x000545d3) fep_hwr_top_text_pane_g1

0x4c2b,	// (0x0004e90e) fep_hwr_top_text_pane_t1

0x0f87,	// (0x0004ac6a) fep_hwr_candidate_pane_g1

0x4e76,	// (0x0004eb59) fep_vkb_keypad_pane_g3_ParamLimits

0x4e76,	// (0x0004eb59) fep_vkb_keypad_pane_g3

0x4ea2,	// (0x0004eb85) fep_vkb_keypad_pane_g4_ParamLimits

0x4ea2,	// (0x0004eb85) fep_vkb_keypad_pane_g4

0x4f19,	// (0x0004ebfc) fep_vkb_bottom_pane_g2_ParamLimits

0x4f19,	// (0x0004ebfc) fep_vkb_bottom_pane_g2

0x0001,

0xfb48,	// (0x0005982b) fep_vkb_bottom_pane_g_ParamLimits

0xfb48,	// (0x0005982b) fep_vkb_bottom_pane_g

0x4b82,	// (0x0004e865) cell_vkb_side_pane_g2

0x0001,

0xfb52,	// (0x00059835) cell_vkb_side_pane_g

0x4fa4,	// (0x0004ec87) cell_vkb_side_pane_t1

0x4fb2,	// (0x0004ec95) cell_vkb_side_pane_t1_copy1

0x4b82,	// (0x0004e865) bg_fep_vkb_candidate_pane_g2

0x50f6,	// (0x0004edd9) cell_vkb_candidate_pane_ParamLimits

0x4c39,	// (0x0004e91c) aid_size_cell_vkb_ParamLimits

0x4c39,	// (0x0004e91c) aid_size_cell_vkb

0x50f6,	// (0x0004edd9) cell_vkb_candidate_pane

0x0fa1,	// (0x0004ac84) bg_popup_fep_shadow_pane_g1

0xce99,	// (0x00056b7c) fep_vkb_bottom_pane_ParamLimits

0xce99,	// (0x00056b7c) fep_vkb_bottom_pane

0x4d08,	// (0x0004e9eb) fep_vkb_candidate_pane_ParamLimits

0x4d08,	// (0x0004e9eb) fep_vkb_candidate_pane

0xcec5,	// (0x00056ba8) fep_vkb_keypad_pane_ParamLimits

0xcec5,	// (0x00056ba8) fep_vkb_keypad_pane

0xceec,	// (0x00056bcf) fep_vkb_side_pane_ParamLimits

0xceec,	// (0x00056bcf) fep_vkb_side_pane

0xcf28,	// (0x00056c0b) fep_vkb_top_pane_ParamLimits

0xcf28,	// (0x00056c0b) fep_vkb_top_pane

0x4dcf,	// (0x0004eab2) fep_vkb_top_pane_g1_ParamLimits

0x4dcf,	// (0x0004eab2) fep_vkb_top_pane_g1

0x4dde,	// (0x0004eac1) fep_vkb_top_pane_g2_ParamLimits

0x4dde,	// (0x0004eac1) fep_vkb_top_pane_g2

0x4ded,	// (0x0004ead0) fep_vkb_top_pane_g3_ParamLimits

0x4ded,	// (0x0004ead0) fep_vkb_top_pane_g3

0x0003,

0xfb38,	// (0x0005981b) fep_vkb_top_pane_g_ParamLimits

0xfb38,	// (0x0005981b) fep_vkb_top_pane_g

0x4e0b,	// (0x0004eaee) fep_vkb_top_text_pane_ParamLimits

0x4e0b,	// (0x0004eaee) fep_vkb_top_text_pane

0xcf64,	// (0x00056c47) fep_vkb_side_pane_g1_ParamLimits

0xcf64,	// (0x00056c47) fep_vkb_side_pane_g1

0x4e65,	// (0x0004eb48) grid_vkb_side_pane_ParamLimits

0x4e65,	// (0x0004eb48) grid_vkb_side_pane

0x0fa9,	// (0x0004ac8c) bg_popup_fep_shadow_pane_g2

0x0fb2,	// (0x0004ac95) bg_popup_fep_shadow_pane_g3

0x0fba,	// (0x0004ac9d) bg_popup_fep_shadow_pane_g4

0x0fc3,	// (0x0004aca6) bg_popup_fep_shadow_pane_g5

0x0fcd,	// (0x0004acb0) bg_popup_fep_shadow_pane_g6

0x0fd5,	// (0x0004acb8) bg_popup_fep_shadow_pane_g7

0xa2b9,	// (0x00053f9c) bg_popup_fep_shadow_pane_g8

0x4ec4,	// (0x0004eba7) grid_vkb_keypad_number_pane_ParamLimits

0x4ec4,	// (0x0004eba7) grid_vkb_keypad_number_pane

0x4ed8,	// (0x0004ebbb) grid_vkb_keypad_pane_ParamLimits

0x4ed8,	// (0x0004ebbb) grid_vkb_keypad_pane

0x4efe,	// (0x0004ebe1) fep_vkb_bottom_pane_g1_ParamLimits

0x4efe,	// (0x0004ebe1) fep_vkb_bottom_pane_g1

0x4f27,	// (0x0004ec0a) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4f27,	// (0x0004ec0a) grid_vkb_keypad_bottom_left_pane

0x4f3c,	// (0x0004ec1f) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4f3c,	// (0x0004ec1f) grid_vkb_keypad_bottom_right_pane

0x4f51,	// (0x0004ec34) fep_vkb_top_text_pane_g1

0xcfab,	// (0x00056c8e) fep_vkb_top_text_pane_t1

0xcfbd,	// (0x00056ca0) cell_vkb_side_pane_ParamLimits

0xcfbd,	// (0x00056ca0) cell_vkb_side_pane

0x4b82,	// (0x0004e865) cell_vkb_side_pane_g1

0x4fc0,	// (0x0004eca3) cell_vkb_keypad_pane_ParamLimits

0x4fc0,	// (0x0004eca3) cell_vkb_keypad_pane

0x504d,	// (0x0004ed30) cell_vkb_keypad_pane_g1

0x0008,

0xfb65,	// (0x00059848) bg_popup_fep_shadow_pane_g

0x4b82,	// (0x0004e865) cell_hwr_side_pane_g1

0x4b82,	// (0x0004e865) cell_hwr_side_pane_g2

0x5057,	// (0x0004ed3a) cell_vkb_keypad_pane_t1

0xcfd3,	// (0x00056cb6) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcfd3,	// (0x00056cb6) cell_vkb_keypad_bottom_left_pane

0xcfe8,	// (0x00056ccb) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcfe8,	// (0x00056ccb) cell_vkb_keypad_bottom_right_pane

0x4b82,	// (0x0004e865) cell_vkb_keypad_bottom_left_pane_g1

0x4b82,	// (0x0004e865) cell_vkb_keypad_bottom_right_pane_g1

0x50bb,	// (0x0004ed9e) cell_vkb_keypad_number_pane_ParamLimits

0x50bb,	// (0x0004ed9e) cell_vkb_keypad_number_pane

0x50da,	// (0x0004edbd) cell_vkb_keypad_number_pane_g1

0x50e4,	// (0x0004edc7) cell_vkb_keypad_number_pane_g2

0x50ed,	// (0x0004edd0) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb57,	// (0x0005983a) cell_vkb_keypad_number_pane_g

0x5057,	// (0x0004ed3a) cell_vkb_keypad_number_pane_t1

0x5117,	// (0x0004edfa) fep_vkb_candidate_pane_g1

0x0001,

0xfb52,	// (0x00059835) cell_hwr_side_pane_g

0x5130,	// (0x0004ee13) cell_hwr_side_pane_t1

0x0fe7,	// (0x0004acca) cell_hwr_side_pane_t1_copy1

0x4dfd,	// (0x0004eae0) cell_hwr_candidate_pane_g1

0x0ff5,	// (0x0004acd8) cell_hwr_candidate_pane_t1

0x4b82,	// (0x0004e865) cell_vkb_candidate_pane_g2

0x51b6,	// (0x0004ee99) cell_vkb_candidate_pane_t1

0x89d7,	// (0x000526ba) bg_popup_fep_shadow_pane_ParamLimits

0x89d7,	// (0x000526ba) bg_popup_fep_shadow_pane

0xce5f,	// (0x00056b42) bg_fep_hwr_top_pane_g4

0x4c07,	// (0x0004e8ea) bg_hwr_side_pane_g1_ParamLimits

0x4c07,	// (0x0004e8ea) bg_hwr_side_pane_g1

0xbf1f,	// (0x00055c02) cell_hwr_side_pane_ParamLimits

0xbf1f,	// (0x00055c02) cell_hwr_side_pane

0x0ef8,	// (0x0004abdb) fep_hwr_write_pane_g1_ParamLimits

0x0ef8,	// (0x0004abdb) fep_hwr_write_pane_g1

0x0f05,	// (0x0004abe8) fep_hwr_write_pane_g2_ParamLimits

0x0f05,	// (0x0004abe8) fep_hwr_write_pane_g2

0x0f12,	// (0x0004abf5) fep_hwr_write_pane_g3_ParamLimits

0x0f12,	// (0x0004abf5) fep_hwr_write_pane_g3

0xbf3f,	// (0x00055c22) fep_hwr_write_pane_g4_ParamLimits

0xbf3f,	// (0x00055c22) fep_hwr_write_pane_g4

0x0005,

0xfb24,	// (0x00059807) fep_hwr_write_pane_g_ParamLimits

0xfb24,	// (0x00059807) fep_hwr_write_pane_g

0xce5f,	// (0x00056b42) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xce5f,	// (0x00056b42) bg_fep_hwr_candidate_pane_g2

0x0f35,	// (0x0004ac18) cell_hwr_candidate_pane_ParamLimits

0x0f35,	// (0x0004ac18) cell_hwr_candidate_pane

0x0f87,	// (0x0004ac6a) fep_hwr_candidate_pane_g1_ParamLimits

0x4c67,	// (0x0004e94a) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4c67,	// (0x0004e94a) bg_popup_fep_shadow_pane_cp2

0x4dfd,	// (0x0004eae0) fep_vkb_top_pane_g4_ParamLimits

0x4dfd,	// (0x0004eae0) fep_vkb_top_pane_g4

0x4e43,	// (0x0004eb26) fep_vkb_side_pane_g2_ParamLimits

0x4e43,	// (0x0004eb26) fep_vkb_side_pane_g2

0x9730,	// (0x00053413) list_setting_pane_t4_ParamLimits

0x9730,	// (0x00053413) list_setting_pane_t4

0x97cc,	// (0x000534af) list_setting_number_pane_t5_ParamLimits

0x97cc,	// (0x000534af) list_setting_number_pane_t5

0xa937,	// (0x0005461a) list_double_heading_pane_cp2_ParamLimits

0xa937,	// (0x0005461a) list_double_heading_pane_cp2

0x51c4,	// (0x0004eea7) list_double_heading_pane_g1_cp2_ParamLimits

0x51c4,	// (0x0004eea7) list_double_heading_pane_g1_cp2

0x51d0,	// (0x0004eeb3) list_double_heading_pane_g2_cp2_ParamLimits

0x51d0,	// (0x0004eeb3) list_double_heading_pane_g2_cp2

0x51e4,	// (0x0004eec7) list_double_heading_pane_t1_cp2_ParamLimits

0x51e4,	// (0x0004eec7) list_double_heading_pane_t1_cp2

0x51fa,	// (0x0004eedd) list_double_heading_pane_t2_cp2_ParamLimits

0x51fa,	// (0x0004eedd) list_double_heading_pane_t2_cp2

0x76c3,	// (0x000513a6) aid_value_unit2

0xf0be,	// (0x00058da1) popup_preview_fixed_window

0x787a,	// (0x0005155d) bg_popup_preview_window_pane_cp02

0x520c,	// (0x0004eeef) list_preview_fixed_pane

0x5252,	// (0x0004ef35) list_empty_pane_fp_ParamLimits

0x5252,	// (0x0004ef35) list_empty_pane_fp

0x5252,	// (0x0004ef35) list_single_cale_day_pane_fp_ParamLimits

0x5252,	// (0x0004ef35) list_single_cale_day_pane_fp

0x5252,	// (0x0004ef35) list_single_graphic_heading_pane_fp_ParamLimits

0x5252,	// (0x0004ef35) list_single_graphic_heading_pane_fp

0x5252,	// (0x0004ef35) list_single_graphic_pane_fp_ParamLimits

0x5252,	// (0x0004ef35) list_single_graphic_pane_fp

0x5252,	// (0x0004ef35) list_single_heading_pane_fp_ParamLimits

0x5252,	// (0x0004ef35) list_single_heading_pane_fp

0x5252,	// (0x0004ef35) list_single_pane_fp_ParamLimits

0x5252,	// (0x0004ef35) list_single_pane_fp

0x526b,	// (0x0004ef4e) list_single_pane_fp_g1_ParamLimits

0x526b,	// (0x0004ef4e) list_single_pane_fp_g1

0x51c4,	// (0x0004eea7) list_single_pane_fp_g2_ParamLimits

0x51c4,	// (0x0004eea7) list_single_pane_fp_g2

0x51d0,	// (0x0004eeb3) list_single_pane_fp_g3_ParamLimits

0x51d0,	// (0x0004eeb3) list_single_pane_fp_g3

0x5277,	// (0x0004ef5a) list_single_pane_fp_g4_ParamLimits

0x5277,	// (0x0004ef5a) list_single_pane_fp_g4

0x0003,

0xfb86,	// (0x00059869) list_single_pane_fp_g_ParamLimits

0xfb86,	// (0x00059869) list_single_pane_fp_g

0xed8c,	// (0x00058a6f) list_single_pane_fp_t1_ParamLimits

0xed8c,	// (0x00058a6f) list_single_pane_fp_t1

0xeda3,	// (0x00058a86) list_single_graphic_pane_fp_g1_ParamLimits

0xeda3,	// (0x00058a86) list_single_graphic_pane_fp_g1

0x526b,	// (0x0004ef4e) list_single_graphic_pane_fp_g2_ParamLimits

0x526b,	// (0x0004ef4e) list_single_graphic_pane_fp_g2

0x51c4,	// (0x0004eea7) list_single_graphic_pane_fp_g3_ParamLimits

0x51c4,	// (0x0004eea7) list_single_graphic_pane_fp_g3

0x51d0,	// (0x0004eeb3) list_single_graphic_pane_fp_g4_ParamLimits

0x51d0,	// (0x0004eeb3) list_single_graphic_pane_fp_g4

0x5277,	// (0x0004ef5a) list_single_graphic_pane_fp_g5_ParamLimits

0x5277,	// (0x0004ef5a) list_single_graphic_pane_fp_g5

0x0004,

0xfb8f,	// (0x00059872) list_single_graphic_pane_fp_g_ParamLimits

0xfb8f,	// (0x00059872) list_single_graphic_pane_fp_g

0xedaf,	// (0x00058a92) list_single_graphic_pane_fp_t1_ParamLimits

0xedaf,	// (0x00058a92) list_single_graphic_pane_fp_t1

0xeda3,	// (0x00058a86) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xeda3,	// (0x00058a86) list_single_graphic_heading_pane_fp_g1

0x526b,	// (0x0004ef4e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x526b,	// (0x0004ef4e) list_single_graphic_heading_pane_fp_g2

0x51c4,	// (0x0004eea7) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x51c4,	// (0x0004eea7) list_single_graphic_heading_pane_fp_g3

0x51d0,	// (0x0004eeb3) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x51d0,	// (0x0004eeb3) list_single_graphic_heading_pane_fp_g4

0x5277,	// (0x0004ef5a) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5277,	// (0x0004ef5a) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8f,	// (0x00059872) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8f,	// (0x00059872) list_single_graphic_heading_pane_fp_g

0xedc5,	// (0x00058aa8) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xedc5,	// (0x00058aa8) list_single_graphic_heading_pane_fp_t1

0xeddb,	// (0x00058abe) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xeddb,	// (0x00058abe) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9a,	// (0x0005987d) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9a,	// (0x0005987d) list_single_graphic_heading_pane_fp_t

0xeded,	// (0x00058ad0) list_single_cale_day_pane_fp_g1_ParamLimits

0xeded,	// (0x00058ad0) list_single_cale_day_pane_fp_g1

0x5283,	// (0x0004ef66) list_single_cale_day_pane_fp_g2_ParamLimits

0x5283,	// (0x0004ef66) list_single_cale_day_pane_fp_g2

0x1013,	// (0x0004acf6) list_single_cale_day_pane_fp_g3_ParamLimits

0x1013,	// (0x0004acf6) list_single_cale_day_pane_fp_g3

0x103b,	// (0x0004ad1e) list_single_cale_day_pane_fp_g4_ParamLimits

0x103b,	// (0x0004ad1e) list_single_cale_day_pane_fp_g4

0x105f,	// (0x0004ad42) list_single_cale_day_pane_fp_g5_ParamLimits

0x105f,	// (0x0004ad42) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9f,	// (0x00059882) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9f,	// (0x00059882) list_single_cale_day_pane_fp_g

0xee25,	// (0x00058b08) list_single_cale_day_pane_fp_t1_ParamLimits

0xee25,	// (0x00058b08) list_single_cale_day_pane_fp_t1

0xee4b,	// (0x00058b2e) list_single_cale_day_pane_fp_t2_ParamLimits

0xee4b,	// (0x00058b2e) list_single_cale_day_pane_fp_t2

0xee64,	// (0x00058b47) list_single_cale_day_pane_fp_t3_ParamLimits

0xee64,	// (0x00058b47) list_single_cale_day_pane_fp_t3

0x0002,

0xfbaa,	// (0x0005988d) list_single_cale_day_pane_fp_t_ParamLimits

0xfbaa,	// (0x0005988d) list_single_cale_day_pane_fp_t

0x526b,	// (0x0004ef4e) list_empty_pane_fp_g1_ParamLimits

0x526b,	// (0x0004ef4e) list_empty_pane_fp_g1

0xee7d,	// (0x00058b60) list_empty_pane_fp_t1

0xee8b,	// (0x00058b6e) list_empty_pane_fp_t2

0x0001,

0xfbb1,	// (0x00059894) list_empty_pane_fp_t

0x526b,	// (0x0004ef4e) list_single_heading_pane_fp_g1_ParamLimits

0x526b,	// (0x0004ef4e) list_single_heading_pane_fp_g1

0x51c4,	// (0x0004eea7) list_single_heading_pane_fp_g2_ParamLimits

0x51c4,	// (0x0004eea7) list_single_heading_pane_fp_g2

0x51d0,	// (0x0004eeb3) list_single_heading_pane_fp_g3_ParamLimits

0x51d0,	// (0x0004eeb3) list_single_heading_pane_fp_g3

0x0002,

0xfbb6,	// (0x00059899) list_single_heading_pane_fp_g_ParamLimits

0xfbb6,	// (0x00059899) list_single_heading_pane_fp_g

0xee99,	// (0x00058b7c) list_single_heading_pane_fp_t1_ParamLimits

0xee99,	// (0x00058b7c) list_single_heading_pane_fp_t1

0xeeab,	// (0x00058b8e) list_single_heading_pane_fp_t2_ParamLimits

0xeeab,	// (0x00058b8e) list_single_heading_pane_fp_t2

0x0001,

0xfbbd,	// (0x000598a0) list_single_heading_pane_fp_t_ParamLimits

0xfbbd,	// (0x000598a0) list_single_heading_pane_fp_t

0xa42d,	// (0x00054110) aid_size_cell_fast

0x784f,	// (0x00051532) soft_indicator_pane_cp1_t1

0xa46a,	// (0x0005414d) cell_app_pane_cp2_ParamLimits

0xa46a,	// (0x0005414d) cell_app_pane_cp2

0x0dc1,	// (0x0004aaa4) fep_hwr_candidate_drop_down_list_pane

0xce6d,	// (0x00056b50) fep_hwr_candidate_pane_g3_ParamLimits

0xce6d,	// (0x00056b50) fep_hwr_candidate_pane_g3

0xce7a,	// (0x00056b5d) fep_hwr_candidate_pane_g4_ParamLimits

0xce7a,	// (0x00056b5d) fep_hwr_candidate_pane_g4

0x0002,

0xfb31,	// (0x00059814) fep_hwr_candidate_pane_g_ParamLimits

0xfb31,	// (0x00059814) fep_hwr_candidate_pane_g

0x4cf7,	// (0x0004e9da) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4cf7,	// (0x0004e9da) fep_vkb_candidate_drop_down_list_pane

0x511f,	// (0x0004ee02) fep_vkb_candidate_pane_g3

0x5127,	// (0x0004ee0a) fep_vkb_candidate_pane_g4

0x0002,

0xfb5e,	// (0x00059841) fep_vkb_candidate_pane_g

0x4dfd,	// (0x0004eae0) cell_hwr_candidate_pane_g1_ParamLimits

0x513e,	// (0x0004ee21) cell_hwr_candidate_pane_g3_ParamLimits

0x513e,	// (0x0004ee21) cell_hwr_candidate_pane_g3

0x515f,	// (0x0004ee42) cell_hwr_candidate_pane_g4_ParamLimits

0x515f,	// (0x0004ee42) cell_hwr_candidate_pane_g4

0x0002,

0xfb78,	// (0x0005985b) cell_hwr_candidate_pane_g_ParamLimits

0xfb78,	// (0x0005985b) cell_hwr_candidate_pane_g

0x5180,	// (0x0004ee63) cell_vkb_candidate_pane_g3_ParamLimits

0x5180,	// (0x0004ee63) cell_vkb_candidate_pane_g3

0x519b,	// (0x0004ee7e) cell_vkb_candidate_pane_g4_ParamLimits

0x519b,	// (0x0004ee7e) cell_vkb_candidate_pane_g4

0x528f,	// (0x0004ef72) cell_app_pane_cp2_g1_ParamLimits

0x528f,	// (0x0004ef72) cell_app_pane_cp2_g1

0x52ad,	// (0x0004ef90) cell_app_pane_cp2_g2_ParamLimits

0x52ad,	// (0x0004ef90) cell_app_pane_cp2_g2

0x0001,

0xfbc2,	// (0x000598a5) cell_app_pane_cp2_g_ParamLimits

0xfbc2,	// (0x000598a5) cell_app_pane_cp2_g

0x52b9,	// (0x0004ef9c) cell_app_pane_cp2_t1_ParamLimits

0x52b9,	// (0x0004ef9c) cell_app_pane_cp2_t1

0xa23e,	// (0x00053f21) grid_highlight_pane_cp1_ParamLimits

0xa23e,	// (0x00053f21) grid_highlight_pane_cp1

0x1083,	// (0x0004ad66) cell_hwr_candidate_pane_cp1_ParamLimits

0x1083,	// (0x0004ad66) cell_hwr_candidate_pane_cp1

0x4dfd,	// (0x0004eae0) fep_hwr_candidate_drop_down_list_pane_g1

0x52cb,	// (0x0004efae) fep_hwr_candidate_drop_down_list_pane_g2

0x52d8,	// (0x0004efbb) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc7,	// (0x000598aa) fep_hwr_candidate_drop_down_list_pane_g

0x10a7,	// (0x0004ad8a) fep_hwr_candidate_drop_down_list_scroll_pane

0x10b0,	// (0x0004ad93) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x10b0,	// (0x0004ad93) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x10bd,	// (0x0004ada0) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x10bd,	// (0x0004ada0) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x10ca,	// (0x0004adad) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x10ca,	// (0x0004adad) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5180,	// (0x0004ee63) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5180,	// (0x0004ee63) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x519b,	// (0x0004ee7e) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x519b,	// (0x0004ee7e) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x10d7,	// (0x0004adba) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x10d7,	// (0x0004adba) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x10f2,	// (0x0004add5) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x10f2,	// (0x0004add5) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x110d,	// (0x0004adf0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x110d,	// (0x0004adf0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbce,	// (0x000598b1) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbce,	// (0x000598b1) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x52e5,	// (0x0004efc8) cell_vkb_candidate_pane_cp1_ParamLimits

0x52e5,	// (0x0004efc8) cell_vkb_candidate_pane_cp1

0x4dfd,	// (0x0004eae0) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4dfd,	// (0x0004eae0) fep_vkb_candidate_drop_down_list_pane_g1

0x52cb,	// (0x0004efae) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x52cb,	// (0x0004efae) fep_vkb_candidate_drop_down_list_pane_g2

0x52d8,	// (0x0004efbb) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x52d8,	// (0x0004efbb) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc7,	// (0x000598aa) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc7,	// (0x000598aa) fep_vkb_candidate_drop_down_list_pane_g

0x530b,	// (0x0004efee) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x530b,	// (0x0004efee) fep_vkb_candidate_drop_down_list_scroll_pane

0x5318,	// (0x0004effb) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5318,	// (0x0004effb) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5325,	// (0x0004f008) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5325,	// (0x0004f008) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5331,	// (0x0004f014) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5331,	// (0x0004f014) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x513e,	// (0x0004ee21) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x513e,	// (0x0004ee21) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x515f,	// (0x0004ee42) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x515f,	// (0x0004ee42) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x533d,	// (0x0004f020) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x533d,	// (0x0004f020) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x535e,	// (0x0004f041) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x535e,	// (0x0004f041) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x537f,	// (0x0004f062) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x537f,	// (0x0004f062) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdf,	// (0x000598c2) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdf,	// (0x000598c2) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9dbb,	// (0x00053a9e) title_pane_g1_ParamLimits

0x9dce,	// (0x00053ab1) title_pane_g2_ParamLimits

0xf54e,	// (0x00059231) title_pane_g_ParamLimits

0xa8e0,	// (0x000545c3) aid_call2_pane

0xa8e8,	// (0x000545cb) aid_call_pane

0xa8f0,	// (0x000545d3) popup_clock_analogue_window_g1

0xa8f0,	// (0x000545d3) popup_clock_analogue_window_g2

0xf331,	// (0x00059014) popup_clock_analogue_window_g3

0xf33a,	// (0x0005901d) popup_clock_analogue_window_g4

0x76d5,	// (0x000513b8) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x000593e0) popup_clock_analogue_window_g

0xf342,	// (0x00059025) popup_clock_analogue_window_t1

0xf350,	// (0x00059033) clock_digital_number_pane_ParamLimits

0xf350,	// (0x00059033) clock_digital_number_pane

0xf35c,	// (0x0005903f) clock_digital_number_pane_cp02_ParamLimits

0xf35c,	// (0x0005903f) clock_digital_number_pane_cp02

0xf368,	// (0x0005904b) clock_digital_number_pane_cp03_ParamLimits

0xf368,	// (0x0005904b) clock_digital_number_pane_cp03

0xf374,	// (0x00059057) clock_digital_number_pane_cp04_ParamLimits

0xf374,	// (0x00059057) clock_digital_number_pane_cp04

0xf380,	// (0x00059063) clock_digital_separator_pane_ParamLimits

0xf380,	// (0x00059063) clock_digital_separator_pane

0xf38c,	// (0x0005906f) popup_clock_digital_window_t1_ParamLimits

0xf38c,	// (0x0005906f) popup_clock_digital_window_t1

0x76d5,	// (0x000513b8) clock_digital_number_pane_g1

0x76d5,	// (0x000513b8) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x000593eb) clock_digital_number_pane_g

0x76d5,	// (0x000513b8) clock_digital_separator_pane_g1

0x76d5,	// (0x000513b8) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x000593eb) clock_digital_separator_pane_g

0xb938,	// (0x0005561b) aid_fill_nsta_ParamLimits

0xba70,	// (0x00055753) indicator_nsta_pane_ParamLimits

0x2315,	// (0x0004bff8) popup_clock_analogue_window

0x2315,	// (0x0004bff8) popup_clock_digital_window

0xcc7c,	// (0x0005695f) grid_indicator_nsta_pane_ParamLimits

0x45b5,	// (0x0004e298) clock_nsta_pane_t2

0x0001,

0xfab1,	// (0x00059794) clock_nsta_pane_t

0xf2fe,	// (0x00058fe1) aid_size_max_handle

0xa6d3,	// (0x000543b6) aid_size_min_handle

0xc5f1,	// (0x000562d4) editor_scroll_pane

0x539a,	// (0x0004f07d) ex_editor_pane

0xa3b4,	// (0x00054097) scroll_pane_cp13

0xa165,	// (0x00053e48) scroll_pane_cp14

0xa91f,	// (0x00054602) scroll_pane_cp36

0xa94a,	// (0x0005462d) list_single_graphic_hl_pane_cp2_ParamLimits

0xa94a,	// (0x0005462d) list_single_graphic_hl_pane_cp2

0xcb18,	// (0x000567fb) list_single_graphic_hl_pane_ParamLimits

0xcb18,	// (0x000567fb) list_single_graphic_hl_pane

0xeec1,	// (0x00058ba4) aid_size_min_hl_cp1

0x53a2,	// (0x0004f085) list_highlight_pane_cp34_ParamLimits

0x53a2,	// (0x0004f085) list_highlight_pane_cp34

0x53b3,	// (0x0004f096) list_single_graphic_hl_pane_g1_ParamLimits

0x53b3,	// (0x0004f096) list_single_graphic_hl_pane_g1

0x9a3a,	// (0x0005371d) list_single_graphic_hl_pane_g2_ParamLimits

0x9a3a,	// (0x0005371d) list_single_graphic_hl_pane_g2

0x9a3a,	// (0x0005371d) list_single_graphic_hl_pane_g3_ParamLimits

0x9a3a,	// (0x0005371d) list_single_graphic_hl_pane_g3

0xd003,	// (0x00056ce6) list_single_graphic_hl_pane_g4_ParamLimits

0xd003,	// (0x00056ce6) list_single_graphic_hl_pane_g4

0x53f0,	// (0x0004f0d3) list_single_graphic_hl_pane_g5_ParamLimits

0x53f0,	// (0x0004f0d3) list_single_graphic_hl_pane_g5

0x0004,

0xfbf0,	// (0x000598d3) list_single_graphic_hl_pane_g_ParamLimits

0xfbf0,	// (0x000598d3) list_single_graphic_hl_pane_g

0x9a46,	// (0x00053729) list_single_graphic_hl_pane_t1_ParamLimits

0x9a46,	// (0x00053729) list_single_graphic_hl_pane_t1

0x53c0,	// (0x0004f0a3) aid_size_min_hl_cp2

0x53c9,	// (0x0004f0ac) list_highlight_pane_cp34_cp2_ParamLimits

0x53c9,	// (0x0004f0ac) list_highlight_pane_cp34_cp2

0x53b3,	// (0x0004f096) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x53b3,	// (0x0004f096) list_single_graphic_hl_pane_g1_cp2

0x53d6,	// (0x0004f0b9) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x53d6,	// (0x0004f0b9) list_single_graphic_hl_pane_g2_cp2

0xd00f,	// (0x00056cf2) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd00f,	// (0x00056cf2) list_single_graphic_hl_pane_g3_cp2

0xd003,	// (0x00056ce6) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xd003,	// (0x00056ce6) list_single_graphic_hl_pane_g4_cp2

0x53f0,	// (0x0004f0d3) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x53f0,	// (0x0004f0d3) list_single_graphic_hl_pane_g5_cp2

0xb0a9,	// (0x00054d8c) control_pane_g4_ParamLimits

0xb0a9,	// (0x00054d8c) control_pane_g4

0x046b,	// (0x0004a14e) bg_popup_sub_pane_cp10_ParamLimits

0x4b8c,	// (0x0004e86f) list_choice_list_pane_ParamLimits

0x4b9b,	// (0x0004e87e) scroll_pane_cp23

0x787a,	// (0x0005155d) bg_popup_preview_window_pane_cp02_ParamLimits

0x520c,	// (0x0004eeef) list_preview_fixed_pane_ParamLimits

0x5222,	// (0x0004ef05) list_preview_fixed_pane_cp_ParamLimits

0x5222,	// (0x0004ef05) list_preview_fixed_pane_cp

0x522e,	// (0x0004ef11) popup_preview_fixed_window_g1_ParamLimits

0x522e,	// (0x0004ef11) popup_preview_fixed_window_g1

0x523a,	// (0x0004ef1d) popup_preview_fixed_window_g2_ParamLimits

0x523a,	// (0x0004ef1d) popup_preview_fixed_window_g2

0x0002,

0xfb7f,	// (0x00059862) popup_preview_fixed_window_g_ParamLimits

0xfb7f,	// (0x00059862) popup_preview_fixed_window_g

0xf270,	// (0x00058f53) aid_navi_side_left_pane_ParamLimits

0xf285,	// (0x00058f68) aid_navi_side_right_pane_ParamLimits

0xf29d,	// (0x00058f80) navi_icon_pane_stacon_ParamLimits

0xf2b1,	// (0x00058f94) navi_navi_pane_stacon_ParamLimits

0xf29d,	// (0x00058f80) navi_text_pane_stacon_ParamLimits

0x76cb,	// (0x000513ae) main_text_info_pane

0x541a,	// (0x0004f0fd) listscroll_text_info_pane

0x5422,	// (0x0004f105) list_text_info_pane_ParamLimits

0x5422,	// (0x0004f105) list_text_info_pane

0x5431,	// (0x0004f114) scroll_pane_cp24_ParamLimits

0x5431,	// (0x0004f114) scroll_pane_cp24

0xd01d,	// (0x00056d00) list_text_info_pane_t1_ParamLimits

0xd01d,	// (0x00056d00) list_text_info_pane_t1

0xb231,	// (0x00054f14) popup_fast_swap2_window_ParamLimits

0xb231,	// (0x00054f14) popup_fast_swap2_window

0x5474,	// (0x0004f157) aid_size_cell_fast2

0x76cb,	// (0x000513ae) bg_popup_window_pane_cp17

0x2972,	// (0x0004c655) heading_pane_cp2

0x7a80,	// (0x00051763) listscroll_fast2_pane

0x547e,	// (0x0004f161) grid_fast2_pane

0x5488,	// (0x0004f16b) listscroll_fast2_pane_g1

0x5492,	// (0x0004f175) listscroll_fast2_pane_g2

0x0001,

0xfbfb,	// (0x000598de) listscroll_fast2_pane_g

0xa3b4,	// (0x00054097) scroll_pane_cp26

0x549c,	// (0x0004f17f) cell_fast2_pane_ParamLimits

0x549c,	// (0x0004f17f) cell_fast2_pane

0x54b3,	// (0x0004f196) cell_fast2_pane_g1

0x54bc,	// (0x0004f19f) cell_fast2_pane_g2

0x54c5,	// (0x0004f1a8) cell_fast2_pane_g3

0x0002,

0xfc00,	// (0x000598e3) cell_fast2_pane_g

0x7ac2,	// (0x000517a5) grid_highlight_pane_cp9

0x7ad7,	// (0x000517ba) main_eswt_pane_ParamLimits

0x7ad7,	// (0x000517ba) main_eswt_pane

0x5446,	// (0x0004f129) list_single_text_info_pane

0x54cd,	// (0x0004f1b0) eswt_ctrl_button_pane

0x54cd,	// (0x0004f1b0) eswt_ctrl_canvas_pane

0x54d5,	// (0x0004f1b8) eswt_ctrl_combo_pane

0x54cd,	// (0x0004f1b0) eswt_ctrl_default_pane

0x54cd,	// (0x0004f1b0) eswt_ctrl_label_pane

0x54dd,	// (0x0004f1c0) eswt_ctrl_wait_pane

0x54e5,	// (0x0004f1c8) eswt_shell_pane

0x76cb,	// (0x000513ae) listscroll_eswt_app_pane

0x5505,	// (0x0004f1e8) popup_eswt_tasktip_window_ParamLimits

0x5505,	// (0x0004f1e8) popup_eswt_tasktip_window

0x25b2,	// (0x0004c295) bg_popup_window_pane_cp18

0x5516,	// (0x0004f1f9) eswt_control_pane_g1_ParamLimits

0x5516,	// (0x0004f1f9) eswt_control_pane_g1

0x5523,	// (0x0004f206) eswt_control_pane_g2_ParamLimits

0x5523,	// (0x0004f206) eswt_control_pane_g2

0x5530,	// (0x0004f213) eswt_control_pane_g3_ParamLimits

0x5530,	// (0x0004f213) eswt_control_pane_g3

0x553d,	// (0x0004f220) eswt_control_pane_g4_ParamLimits

0x553d,	// (0x0004f220) eswt_control_pane_g4

0x0003,

0xfc07,	// (0x000598ea) eswt_control_pane_g_ParamLimits

0xfc07,	// (0x000598ea) eswt_control_pane_g

0xa23e,	// (0x00053f21) bg_button_pane_ParamLimits

0xa23e,	// (0x00053f21) bg_button_pane

0x7ad7,	// (0x000517ba) common_borders_pane_copy2_ParamLimits

0x7ad7,	// (0x000517ba) common_borders_pane_copy2

0x554a,	// (0x0004f22d) control_button_pane_g1_ParamLimits

0x554a,	// (0x0004f22d) control_button_pane_g1

0x5556,	// (0x0004f239) control_button_pane_g2_ParamLimits

0x5556,	// (0x0004f239) control_button_pane_g2

0x5562,	// (0x0004f245) control_button_pane_g3_ParamLimits

0x5562,	// (0x0004f245) control_button_pane_g3

0x0002,

0xfc10,	// (0x000598f3) control_button_pane_g_ParamLimits

0xfc10,	// (0x000598f3) control_button_pane_g

0x5576,	// (0x0004f259) control_button_pane_t1

0x5584,	// (0x0004f267) control_button_pane_t2

0x0001,

0xfc17,	// (0x000598fa) control_button_pane_t

0x253e,	// (0x0004c221) bg_button_pane_g1

0x2546,	// (0x0004c229) bg_button_pane_g2

0x254e,	// (0x0004c231) bg_button_pane_g3

0x2556,	// (0x0004c239) bg_button_pane_g4

0x255e,	// (0x0004c241) bg_button_pane_g5

0x2566,	// (0x0004c249) bg_button_pane_g6

0x256e,	// (0x0004c251) bg_button_pane_g7

0x2576,	// (0x0004c259) bg_button_pane_g8

0x257e,	// (0x0004c261) bg_button_pane_g9

0x0008,

0xf866,	// (0x00059549) bg_button_pane_g

0x4b47,	// (0x0004e82a) common_borders_pane_ParamLimits

0x4b47,	// (0x0004e82a) common_borders_pane

0x5516,	// (0x0004f1f9) eswt_control_pane_g1_copy1_ParamLimits

0x5516,	// (0x0004f1f9) eswt_control_pane_g1_copy1

0x5523,	// (0x0004f206) eswt_control_pane_g2_copy1_ParamLimits

0x5523,	// (0x0004f206) eswt_control_pane_g2_copy1

0x5530,	// (0x0004f213) eswt_control_pane_g3_copy1_ParamLimits

0x5530,	// (0x0004f213) eswt_control_pane_g3_copy1

0x553d,	// (0x0004f220) eswt_control_pane_g4_copy1_ParamLimits

0x553d,	// (0x0004f220) eswt_control_pane_g4_copy1

0x4b82,	// (0x0004e865) bg_eswt_ctrl_canvas_pane_g1

0x4b47,	// (0x0004e82a) common_borders_pane_cp2_ParamLimits

0x4b47,	// (0x0004e82a) common_borders_pane_cp2

0x4b47,	// (0x0004e82a) common_borders_pane_cp3_ParamLimits

0x4b47,	// (0x0004e82a) common_borders_pane_cp3

0x5592,	// (0x0004f275) separator_horizontal_pane

0x559a,	// (0x0004f27d) separator_vertical_pane

0x5516,	// (0x0004f1f9) eswt_control_pane_g1_copy2_ParamLimits

0x5516,	// (0x0004f1f9) eswt_control_pane_g1_copy2

0x5523,	// (0x0004f206) eswt_control_pane_g2_copy2_ParamLimits

0x5523,	// (0x0004f206) eswt_control_pane_g2_copy2

0x5530,	// (0x0004f213) eswt_control_pane_g3_copy2_ParamLimits

0x5530,	// (0x0004f213) eswt_control_pane_g3_copy2

0x553d,	// (0x0004f220) eswt_control_pane_g4_copy2_ParamLimits

0x553d,	// (0x0004f220) eswt_control_pane_g4_copy2

0x76cb,	// (0x000513ae) common_borders_pane_cp4

0x55a3,	// (0x0004f286) separator_horizontal_pane_g1

0x55ac,	// (0x0004f28f) separator_horizontal_pane_g2

0x55b5,	// (0x0004f298) separator_horizontal_pane_g3

0x0002,

0xfc1c,	// (0x000598ff) separator_horizontal_pane_g

0x5516,	// (0x0004f1f9) eswt_control_pane_g1_copy3_ParamLimits

0x5516,	// (0x0004f1f9) eswt_control_pane_g1_copy3

0x5523,	// (0x0004f206) eswt_control_pane_g2_copy3_ParamLimits

0x5523,	// (0x0004f206) eswt_control_pane_g2_copy3

0x5530,	// (0x0004f213) eswt_control_pane_g3_copy3_ParamLimits

0x5530,	// (0x0004f213) eswt_control_pane_g3_copy3

0x553d,	// (0x0004f220) eswt_control_pane_g4_copy3_ParamLimits

0x553d,	// (0x0004f220) eswt_control_pane_g4_copy3

0x76cb,	// (0x000513ae) common_borders_pane_cp5

0x55be,	// (0x0004f2a1) separator_vertical_pane_g1

0x55c7,	// (0x0004f2aa) separator_vertical_pane_g2

0x55d0,	// (0x0004f2b3) separator_vertical_pane_g3

0x0002,

0xfc23,	// (0x00059906) separator_vertical_pane_g

0x5516,	// (0x0004f1f9) eswt_control_pane_g1_copy4_ParamLimits

0x5516,	// (0x0004f1f9) eswt_control_pane_g1_copy4

0x5523,	// (0x0004f206) eswt_control_pane_g2_copy4_ParamLimits

0x5523,	// (0x0004f206) eswt_control_pane_g2_copy4

0x5530,	// (0x0004f213) eswt_control_pane_g3_copy4_ParamLimits

0x5530,	// (0x0004f213) eswt_control_pane_g3_copy4

0x553d,	// (0x0004f220) eswt_control_pane_g4_copy4_ParamLimits

0x553d,	// (0x0004f220) eswt_control_pane_g4_copy4

0xd03f,	// (0x00056d22) eswt_ctrl_combo_button_pane

0xd047,	// (0x00056d2a) eswt_ctrl_input_pane

0xd04f,	// (0x00056d32) popup_choice_list_window_cp70

0xd057,	// (0x00056d3a) eswt_ctrl_input_pane_t1

0x76cb,	// (0x000513ae) input_focus_pane_cp70

0x4b47,	// (0x0004e82a) bg_button_pane_cp70_ParamLimits

0x4b47,	// (0x0004e82a) bg_button_pane_cp70

0xd065,	// (0x00056d48) eswt_ctrl_combo_button_pane_g1

0x5607,	// (0x0004f2ea) wait_bar_pane_cp70

0x25b2,	// (0x0004c295) bg_popup_window_pane_cp70_ParamLimits

0x25b2,	// (0x0004c295) bg_popup_window_pane_cp70

0x560f,	// (0x0004f2f2) popup_eswt_tasktip_window_t1

0x5625,	// (0x0004f308) wait_bar_pane_cp71_ParamLimits

0x5625,	// (0x0004f308) wait_bar_pane_cp71

0x5631,	// (0x0004f314) grid_eswt_app_pane

0xa704,	// (0x000543e7) scroll_pane_cp70

0xd06d,	// (0x00056d50) cell_eswt_app_pane_ParamLimits

0xd06d,	// (0x00056d50) cell_eswt_app_pane

0xd09f,	// (0x00056d82) cell_eswt_app_pane_g1_ParamLimits

0xd09f,	// (0x00056d82) cell_eswt_app_pane_g1

0xd0ce,	// (0x00056db1) cell_eswt_app_pane_g2_ParamLimits

0xd0ce,	// (0x00056db1) cell_eswt_app_pane_g2

0x0001,

0xfc2a,	// (0x0005990d) cell_eswt_app_pane_g_ParamLimits

0xfc2a,	// (0x0005990d) cell_eswt_app_pane_g

0xd0f7,	// (0x00056dda) cell_eswt_app_pane_t1_ParamLimits

0xd0f7,	// (0x00056dda) cell_eswt_app_pane_t1

0x56f6,	// (0x0004f3d9) grid_highlight_pane_cp70_ParamLimits

0x56f6,	// (0x0004f3d9) grid_highlight_pane_cp70

0xae0b,	// (0x00054aee) set_content_pane_g1

0xb03f,	// (0x00054d22) status_small_volume_pane

0x113c,	// (0x0004ae1f) status_small_volume_pane_g1

0x1144,	// (0x0004ae27) volume_small2_pane

0x114d,	// (0x0004ae30) volume_small2_pane_g1

0x1156,	// (0x0004ae39) volume_small2_pane_g2

0x115f,	// (0x0004ae42) volume_small2_pane_g3

0x1168,	// (0x0004ae4b) volume_small2_pane_g4

0x1171,	// (0x0004ae54) volume_small2_pane_g5

0x117a,	// (0x0004ae5d) volume_small2_pane_g6

0x1183,	// (0x0004ae66) volume_small2_pane_g7

0x118c,	// (0x0004ae6f) volume_small2_pane_g8

0x1195,	// (0x0004ae78) volume_small2_pane_g9

0x119e,	// (0x0004ae81) volume_small2_pane_g10

0x0009,

0xfc2f,	// (0x00059912) volume_small2_pane_g

0x4f51,	// (0x0004ec34) fep_vkb_top_text_pane_g1_ParamLimits

0xcfab,	// (0x00056c8e) fep_vkb_top_text_pane_t1_ParamLimits

0x5246,	// (0x0004ef29) popup_preview_fixed_window_g3_ParamLimits

0x5246,	// (0x0004ef29) popup_preview_fixed_window_g3

0xb8cb,	// (0x000555ae) popup_toolbar_trans_pane

0xc968,	// (0x0005664b) aid_height_set_list_ParamLimits

0x3907,	// (0x0004d5ea) aid_size_parent_ParamLimits

0x046b,	// (0x0004a14e) list_highlight_pane_cp2_ParamLimits

0xae0b,	// (0x00054aee) set_content_pane_g1_ParamLimits

0x9a29,	// (0x0005370c) list_single_image_pane_ParamLimits

0x9a29,	// (0x0005370c) list_single_image_pane

0xd129,	// (0x00056e0c) aid_size_cell_image_ParamLimits

0xd129,	// (0x00056e0c) aid_size_cell_image

0xd136,	// (0x00056e19) grid_single_image_pane_ParamLimits

0xd136,	// (0x00056e19) grid_single_image_pane

0xa24c,	// (0x00053f2f) list_single_image_pane_g1_ParamLimits

0xa24c,	// (0x00053f2f) list_single_image_pane_g1

0xa258,	// (0x00053f3b) list_single_image_pane_g2_ParamLimits

0xa258,	// (0x00053f3b) list_single_image_pane_g2

0x0001,

0xfc44,	// (0x00059927) list_single_image_pane_g_ParamLimits

0xfc44,	// (0x00059927) list_single_image_pane_g

0x571d,	// (0x0004f400) list_single_image_pane_t1_ParamLimits

0x571d,	// (0x0004f400) list_single_image_pane_t1

0xd144,	// (0x00056e27) cell_image_list_pane_ParamLimits

0xd144,	// (0x00056e27) cell_image_list_pane

0xd158,	// (0x00056e3b) cell_image_list_pane_g1

0xd161,	// (0x00056e44) cell_image_list_pane_g2

0x0001,

0xfc49,	// (0x0005992c) cell_image_list_pane_g

0x575b,	// (0x0004f43e) aid_size_cell_tb_trans_pane

0xa23e,	// (0x00053f21) bg_tb_trans_pane

0x576d,	// (0x0004f450) grid_tb_trans_pane

0x253e,	// (0x0004c221) bg_tb_trans_pane_g1

0x2546,	// (0x0004c229) bg_tb_trans_pane_g2

0x254e,	// (0x0004c231) bg_tb_trans_pane_g3

0x2556,	// (0x0004c239) bg_tb_trans_pane_g4

0x255e,	// (0x0004c241) bg_tb_trans_pane_g5

0x2576,	// (0x0004c259) bg_tb_trans_pane_g6

0x257e,	// (0x0004c261) bg_tb_trans_pane_g7

0x2566,	// (0x0004c249) bg_tb_trans_pane_g8

0x256e,	// (0x0004c251) bg_tb_trans_pane_g9

0x0008,

0xfc4e,	// (0x00059931) bg_tb_trans_pane_g

0x5781,	// (0x0004f464) cell_toolbar_trans_pane_ParamLimits

0x5781,	// (0x0004f464) cell_toolbar_trans_pane

0x4b82,	// (0x0004e865) cell_toolbar_trans_pane_g1

0xcd68,	// (0x00056a4b) list_form2_midp_pane_t1

0xcd76,	// (0x00056a59) list_form2_midp_pane_t2

0x0001,

0xfaf7,	// (0x000597da) list_form2_midp_pane_t

0x47c2,	// (0x0004e4a5) scroll_pane_cp51_ParamLimits

0x4989,	// (0x0004e66c) form2_midp_wait_pane_g1

0x4992,	// (0x0004e675) form2_midp_wait_pane_g2

0x499b,	// (0x0004e67e) form2_midp_wait_pane_g3

0x0002,

0xfb0c,	// (0x000597ef) form2_midp_wait_pane_g

0x7739,	// (0x0005141c) list_highlight_pane_cp21_ParamLimits

0x49df,	// (0x0004e6c2) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x49ee,	// (0x0004e6d1) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3adf,	// (0x0004d7c2) list_single_2graphic_im_pane_ParamLimits

0x3adf,	// (0x0004d7c2) list_single_2graphic_im_pane

0xd16a,	// (0x00056e4d) list_single_2graphic_im_pane_g1_ParamLimits

0xd16a,	// (0x00056e4d) list_single_2graphic_im_pane_g1

0xd17b,	// (0x00056e5e) list_single_2graphic_im_pane_g2_ParamLimits

0xd17b,	// (0x00056e5e) list_single_2graphic_im_pane_g2

0xd187,	// (0x00056e6a) list_single_2graphic_im_pane_g3_ParamLimits

0xd187,	// (0x00056e6a) list_single_2graphic_im_pane_g3

0x0003,

0xfc61,	// (0x00059944) list_single_2graphic_im_pane_g_ParamLimits

0xfc61,	// (0x00059944) list_single_2graphic_im_pane_g

0xd19b,	// (0x00056e7e) list_single_2graphic_im_pane_t1_ParamLimits

0xd19b,	// (0x00056e7e) list_single_2graphic_im_pane_t1

0x5252,	// (0x0004ef35) list_single_graphic_2heading_pane_fp_ParamLimits

0x5252,	// (0x0004ef35) list_single_graphic_2heading_pane_fp

0xeda3,	// (0x00058a86) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xeda3,	// (0x00058a86) list_single_graphic_2heading_pane_fp_g1

0x526b,	// (0x0004ef4e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x526b,	// (0x0004ef4e) list_single_graphic_2heading_pane_fp_g2

0x51c4,	// (0x0004eea7) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x51c4,	// (0x0004eea7) list_single_graphic_2heading_pane_fp_g3

0x51d0,	// (0x0004eeb3) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x51d0,	// (0x0004eeb3) list_single_graphic_2heading_pane_fp_g4

0x5277,	// (0x0004ef5a) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5277,	// (0x0004ef5a) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8f,	// (0x00059872) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8f,	// (0x00059872) list_single_graphic_2heading_pane_fp_g

0xeeca,	// (0x00058bad) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xeeca,	// (0x00058bad) list_single_graphic_2heading_pane_fp_t1

0xeddb,	// (0x00058abe) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xeddb,	// (0x00058abe) list_single_graphic_2heading_pane_fp_t2

0xeee0,	// (0x00058bc3) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xeee0,	// (0x00058bc3) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6a,	// (0x0005994d) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6a,	// (0x0005994d) list_single_graphic_2heading_pane_fp_t

0x4c13,	// (0x0004e8f6) fep_hwr_write_pane_g5_ParamLimits

0x4c13,	// (0x0004e8f6) fep_hwr_write_pane_g5

0x4c1f,	// (0x0004e902) fep_hwr_write_pane_g6_ParamLimits

0x4c1f,	// (0x0004e902) fep_hwr_write_pane_g6

0x54e5,	// (0x0004f1c8) eswt_shell_pane_ParamLimits

0x25b2,	// (0x0004c295) bg_popup_window_pane_cp18_ParamLimits

0x384d,	// (0x0004d530) heading_pane_cp70

0x560f,	// (0x0004f2f2) popup_eswt_tasktip_window_t1_ParamLimits

0xb995,	// (0x00055678) aid_touch_tab_arrow_left

0xb9ab,	// (0x0005568e) aid_touch_tab_arrow_right

0x76e9,	// (0x000513cc) title_pane_g3_ParamLimits

0x76e9,	// (0x000513cc) title_pane_g3

0xa1fd,	// (0x00053ee0) set_value_pane_g1

0xb8cb,	// (0x000555ae) popup_toolbar_trans_pane_ParamLimits

0x575b,	// (0x0004f43e) aid_size_cell_tb_trans_pane_ParamLimits

0xa23e,	// (0x00053f21) bg_tb_trans_pane_ParamLimits

0x576d,	// (0x0004f450) grid_tb_trans_pane_ParamLimits

0x787a,	// (0x0005155d) cont_note_pane_ParamLimits

0x787a,	// (0x0005155d) cont_note_pane

0x7ad7,	// (0x000517ba) cont_snote2_single_text_pane_ParamLimits

0x7ad7,	// (0x000517ba) cont_snote2_single_text_pane

0x7ad7,	// (0x000517ba) cont_snote2_single_graphic_pane_ParamLimits

0x7ad7,	// (0x000517ba) cont_snote2_single_graphic_pane

0x2b8e,	// (0x0004c871) cont_note_wait_pane_ParamLimits

0x2b8e,	// (0x0004c871) cont_note_wait_pane

0x2b8e,	// (0x0004c871) cont_note_image_pane_ParamLimits

0x2b8e,	// (0x0004c871) cont_note_image_pane

0x5815,	// (0x0004f4f8) popup_note2_window_g1_ParamLimits

0x5815,	// (0x0004f4f8) popup_note2_window_g1

0x5846,	// (0x0004f529) popup_note2_window_t1_ParamLimits

0x5846,	// (0x0004f529) popup_note2_window_t1

0x588b,	// (0x0004f56e) popup_note2_window_t2_ParamLimits

0x588b,	// (0x0004f56e) popup_note2_window_t2

0x58d0,	// (0x0004f5b3) popup_note2_window_t3_ParamLimits

0x58d0,	// (0x0004f5b3) popup_note2_window_t3

0x5915,	// (0x0004f5f8) popup_note2_window_t4_ParamLimits

0x5915,	// (0x0004f5f8) popup_note2_window_t4

0x78fe,	// (0x000515e1) popup_note2_window_t5_ParamLimits

0x78fe,	// (0x000515e1) popup_note2_window_t5

0x0004,

0xfc76,	// (0x00059959) popup_note2_window_t_ParamLimits

0xfc76,	// (0x00059959) popup_note2_window_t

0x5944,	// (0x0004f627) popup_note2_image_window_g1_ParamLimits

0x5944,	// (0x0004f627) popup_note2_image_window_g1

0x5950,	// (0x0004f633) popup_note2_image_window_g2_ParamLimits

0x5950,	// (0x0004f633) popup_note2_image_window_g2

0x0001,

0xfc81,	// (0x00059964) popup_note2_image_window_g_ParamLimits

0xfc81,	// (0x00059964) popup_note2_image_window_g

0x5962,	// (0x0004f645) popup_note2_image_window_t1_ParamLimits

0x5962,	// (0x0004f645) popup_note2_image_window_t1

0x597a,	// (0x0004f65d) popup_note2_image_window_t2_ParamLimits

0x597a,	// (0x0004f65d) popup_note2_image_window_t2

0x5992,	// (0x0004f675) popup_note2_image_window_t3_ParamLimits

0x5992,	// (0x0004f675) popup_note2_image_window_t3

0x0002,

0xfc86,	// (0x00059969) popup_note2_image_window_t_ParamLimits

0xfc86,	// (0x00059969) popup_note2_image_window_t

0x2b9c,	// (0x0004c87f) popup_note2_wait_window_g1_ParamLimits

0x2b9c,	// (0x0004c87f) popup_note2_wait_window_g1

0x59ae,	// (0x0004f691) popup_note2_wait_window_g2_ParamLimits

0x59ae,	// (0x0004f691) popup_note2_wait_window_g2

0x2bb4,	// (0x0004c897) popup_note2_wait_window_g3_ParamLimits

0x2bb4,	// (0x0004c897) popup_note2_wait_window_g3

0x0002,

0xfc8d,	// (0x00059970) popup_note2_wait_window_g_ParamLimits

0xfc8d,	// (0x00059970) popup_note2_wait_window_g

0x59ba,	// (0x0004f69d) popup_note2_wait_window_t1_ParamLimits

0x59ba,	// (0x0004f69d) popup_note2_wait_window_t1

0x59d8,	// (0x0004f6bb) popup_note2_wait_window_t2_ParamLimits

0x59d8,	// (0x0004f6bb) popup_note2_wait_window_t2

0x59f6,	// (0x0004f6d9) popup_note2_wait_window_t3_ParamLimits

0x59f6,	// (0x0004f6d9) popup_note2_wait_window_t3

0x5a08,	// (0x0004f6eb) popup_note2_wait_window_t4_ParamLimits

0x5a08,	// (0x0004f6eb) popup_note2_wait_window_t4

0x0003,

0xfc94,	// (0x00059977) popup_note2_wait_window_t_ParamLimits

0xfc94,	// (0x00059977) popup_note2_wait_window_t

0x5a1a,	// (0x0004f6fd) wait_bar2_pane_ParamLimits

0x5a1a,	// (0x0004f6fd) wait_bar2_pane

0x5a32,	// (0x0004f715) popup_snote2_single_text_window_g1_ParamLimits

0x5a32,	// (0x0004f715) popup_snote2_single_text_window_g1

0x5a5a,	// (0x0004f73d) popup_snote2_single_text_window_t1_ParamLimits

0x5a5a,	// (0x0004f73d) popup_snote2_single_text_window_t1

0x5aa6,	// (0x0004f789) popup_snote2_single_text_window_t2_ParamLimits

0x5aa6,	// (0x0004f789) popup_snote2_single_text_window_t2

0x5af2,	// (0x0004f7d5) popup_snote2_single_text_window_t3_ParamLimits

0x5af2,	// (0x0004f7d5) popup_snote2_single_text_window_t3

0x5b33,	// (0x0004f816) popup_snote2_single_text_window_t4_ParamLimits

0x5b33,	// (0x0004f816) popup_snote2_single_text_window_t4

0x5b69,	// (0x0004f84c) popup_snote2_single_text_window_t5_ParamLimits

0x5b69,	// (0x0004f84c) popup_snote2_single_text_window_t5

0x0004,

0xfc9d,	// (0x00059980) popup_snote2_single_text_window_t_ParamLimits

0xfc9d,	// (0x00059980) popup_snote2_single_text_window_t

0x5b94,	// (0x0004f877) popup_snote2_single_graphic_window_g1_ParamLimits

0x5b94,	// (0x0004f877) popup_snote2_single_graphic_window_g1

0x5bbc,	// (0x0004f89f) popup_snote2_single_graphic_window_g2_ParamLimits

0x5bbc,	// (0x0004f89f) popup_snote2_single_graphic_window_g2

0x0001,

0xfca8,	// (0x0005998b) popup_snote2_single_graphic_window_g_ParamLimits

0xfca8,	// (0x0005998b) popup_snote2_single_graphic_window_g

0x5be4,	// (0x0004f8c7) popup_snote2_single_graphic_window_t1_ParamLimits

0x5be4,	// (0x0004f8c7) popup_snote2_single_graphic_window_t1

0x5c30,	// (0x0004f913) popup_snote2_single_graphic_window_t2_ParamLimits

0x5c30,	// (0x0004f913) popup_snote2_single_graphic_window_t2

0x5af2,	// (0x0004f7d5) popup_snote2_single_graphic_window_t3_ParamLimits

0x5af2,	// (0x0004f7d5) popup_snote2_single_graphic_window_t3

0x5b33,	// (0x0004f816) popup_snote2_single_graphic_window_t4_ParamLimits

0x5b33,	// (0x0004f816) popup_snote2_single_graphic_window_t4

0x5b69,	// (0x0004f84c) popup_snote2_single_graphic_window_t5_ParamLimits

0x5b69,	// (0x0004f84c) popup_snote2_single_graphic_window_t5

0x0004,

0xfcad,	// (0x00059990) popup_snote2_single_graphic_window_t_ParamLimits

0xfcad,	// (0x00059990) popup_snote2_single_graphic_window_t

0x4672,	// (0x0004e355) clock_nsta_pane_cp2_t1

0x4672,	// (0x0004e355) clock_nsta_pane_cp2_t2

0x0001,

0xfacd,	// (0x000597b0) clock_nsta_pane_cp2_t

0xe791,	// (0x00058474) form_field_data_wide_pane_g1_ParamLimits

0xa24c,	// (0x00053f2f) form_field_data_wide_pane_g2_ParamLimits

0xa24c,	// (0x00053f2f) form_field_data_wide_pane_g2

0xa258,	// (0x00053f3b) form_field_data_wide_pane_g3_ParamLimits

0xa258,	// (0x00053f3b) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x00059363) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x00059363) form_field_data_wide_pane_g

0xcc66,	// (0x00056949) grid_touch_3_pane_ParamLimits

0xcc66,	// (0x00056949) grid_touch_3_pane

0xd1cc,	// (0x00056eaf) cell_touch_3_pane_ParamLimits

0xd1cc,	// (0x00056eaf) cell_touch_3_pane

0x4b82,	// (0x0004e865) cell_touch_3_pane_g1

0x4b82,	// (0x0004e865) cell_touch_3_pane_g2

0x0001,

0xfb52,	// (0x00059835) cell_touch_3_pane_g

0x7930,	// (0x00051613) cont_query_data_pane

0x7938,	// (0x0005161b) cont_query_data_pane_cp1

0x5caf,	// (0x0004f992) button_value_adjust_pane_cp7

0x5cb7,	// (0x0004f99a) query_popup_pane_cp3

0xa9f5,	// (0x000546d8) bg_popup_sub_pane_cp22_ParamLimits

0xf3ab,	// (0x0005908e) navi_navi_volume_pane_cp2

0xf3c6,	// (0x000590a9) popup_side_volume_key_window_g2

0xf3d5,	// (0x000590b8) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x000593f9) popup_side_volume_key_window_g

0xf3f2,	// (0x000590d5) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x00059400) popup_side_volume_key_window_t

0xacc6,	// (0x000549a9) popup_side_volume_key_window_ParamLimits

0x9505,	// (0x000531e8) list_double_graphic_pane_g4_ParamLimits

0x9505,	// (0x000531e8) list_double_graphic_pane_g4

0xbef2,	// (0x00055bd5) list_single_2heading_msg_pane_ParamLimits

0xbef2,	// (0x00055bd5) list_single_2heading_msg_pane

0xbf54,	// (0x00055c37) list_single_2heading_msg_pane_g1_ParamLimits

0xbf54,	// (0x00055c37) list_single_2heading_msg_pane_g1

0xbf60,	// (0x00055c43) list_single_2heading_msg_pane_g2_ParamLimits

0xbf60,	// (0x00055c43) list_single_2heading_msg_pane_g2

0xbf73,	// (0x00055c56) list_single_2heading_msg_pane_g3_ParamLimits

0xbf73,	// (0x00055c56) list_single_2heading_msg_pane_g3

0xbf7f,	// (0x00055c62) list_single_2heading_msg_pane_g4_ParamLimits

0xbf7f,	// (0x00055c62) list_single_2heading_msg_pane_g4

0x0003,

0xfcb8,	// (0x0005999b) list_single_2heading_msg_pane_g_ParamLimits

0xfcb8,	// (0x0005999b) list_single_2heading_msg_pane_g

0x9a5c,	// (0x0005373f) list_single_2heading_msg_pane_t1_ParamLimits

0x9a5c,	// (0x0005373f) list_single_2heading_msg_pane_t1

0x9a84,	// (0x00053767) list_single_2heading_msg_pane_t2_ParamLimits

0x9a84,	// (0x00053767) list_single_2heading_msg_pane_t2

0x9aef,	// (0x000537d2) list_single_2heading_msg_pane_t3_ParamLimits

0x9aef,	// (0x000537d2) list_single_2heading_msg_pane_t3

0xef00,	// (0x00058be3) list_single_2heading_msg_pane_t4_ParamLimits

0xef00,	// (0x00058be3) list_single_2heading_msg_pane_t4

0x0003,

0xfcc1,	// (0x000599a4) list_single_2heading_msg_pane_t_ParamLimits

0xfcc1,	// (0x000599a4) list_single_2heading_msg_pane_t

0x76f5,	// (0x000513d8) title_pane_g4_ParamLimits

0x76f5,	// (0x000513d8) title_pane_g4

0xf1c0,	// (0x00058ea3) title_pane_stacon_g3_ParamLimits

0xf1c0,	// (0x00058ea3) title_pane_stacon_g3

0x57d8,	// (0x0004f4bb) list_single_2graphic_im_pane_g4_ParamLimits

0x57d8,	// (0x0004f4bb) list_single_2graphic_im_pane_g4

0x35fe,	// (0x0004d2e1) popup_side_volume_key_window_cp

0x3e6c,	// (0x0004db4f) main_idle_act2_pane_t1

0x084a,	// (0x0004a52d) toolbar_button_pane_g10

0xa15b,	// (0x00053e3e) popup_toolbar_window_cp1

0x4663,	// (0x0004e346) clock_nsta_pane_cp_t1

0x4663,	// (0x0004e346) clock_nsta_pane_cp_t2

0x0001,

0xfac8,	// (0x000597ab) clock_nsta_pane_cp_t

0xf3ab,	// (0x0005908e) navi_navi_volume_pane_cp2_ParamLimits

0xf3ba,	// (0x0005909d) popup_side_volume_key_window_g1_ParamLimits

0xf3c6,	// (0x000590a9) popup_side_volume_key_window_g2_ParamLimits

0xf3d5,	// (0x000590b8) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x000593f9) popup_side_volume_key_window_g_ParamLimits

0x0dad,	// (0x0004aa90) fep_hwr_aid_pane

0xce5f,	// (0x00056b42) bg_fep_hwr_top_pane_g4_ParamLimits

0x4be3,	// (0x0004e8c6) fep_hwr_top_pane_g1_ParamLimits

0x4bf5,	// (0x0004e8d8) fep_hwr_top_pane_g2_ParamLimits

0x0e68,	// (0x0004ab4b) fep_hwr_top_pane_g3_ParamLimits

0xfb1d,	// (0x00059800) fep_hwr_top_pane_g_ParamLimits

0x0e7d,	// (0x0004ab60) fep_hwr_top_text_pane_ParamLimits

0x33b3,	// (0x0004d096) aid_touch_tab_arrow_arrow_2

0x33bc,	// (0x0004d09f) aid_touch_tab_arrow_left_2

0x0dc1,	// (0x0004aaa4) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0df8,	// (0x0004aadb) fep_hwr_prediction_pane

0x4d4b,	// (0x0004ea2e) fep_vkb_prediction_pane

0xcf8b,	// (0x00056c6e) fep_vkb_side_pane_g3_ParamLimits

0xcf8b,	// (0x00056c6e) fep_vkb_side_pane_g3

0x4dfd,	// (0x0004eae0) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x52cb,	// (0x0004efae) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x52d8,	// (0x0004efbb) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc7,	// (0x000598aa) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5cde,	// (0x0004f9c1) fep_hwr_prediction_pane_g1

0x11d7,	// (0x0004aeba) fep_hwr_prediction_pane_g2

0x11df,	// (0x0004aec2) fep_hwr_prediction_pane_g3

0x11e7,	// (0x0004aeca) fep_hwr_prediction_pane_g4

0x0003,

0xfcca,	// (0x000599ad) fep_hwr_prediction_pane_g

0x5cde,	// (0x0004f9c1) fep_vkb_prediction_pane_g1

0x5ce8,	// (0x0004f9cb) fep_vkb_prediction_pane_g2

0x5cf0,	// (0x0004f9d3) fep_vkb_prediction_pane_g3

0x5cf8,	// (0x0004f9db) fep_vkb_prediction_pane_g4

0x0003,

0xfcd3,	// (0x000599b6) fep_vkb_prediction_pane_g

0x0b57,	// (0x0004a83a) slider_set_pane_g3

0x0b6b,	// (0x0004a84e) slider_set_pane_g4

0x0b83,	// (0x0004a866) slider_set_pane_g5

0x0b57,	// (0x0004a83a) slider_set_pane_g6

0x0b99,	// (0x0004a87c) slider_set_pane_g7

0x3a8c,	// (0x0004d76f) slider_form_pane_g3

0x3a95,	// (0x0004d778) slider_form_pane_g4

0x3a9d,	// (0x0004d780) slider_form_pane_g5

0x3a8c,	// (0x0004d76f) slider_form_pane_g6

0xcad7,	// (0x000567ba) slider_form_pane_g7

0x4123,	// (0x0004de06) slider_set_pane_vc_g3

0x412c,	// (0x0004de0f) slider_set_pane_vc_g4

0x4135,	// (0x0004de18) slider_set_pane_vc_g5

0x4123,	// (0x0004de06) slider_set_pane_vc_g6

0x413e,	// (0x0004de21) slider_set_pane_vc_g7

0x4316,	// (0x0004dff9) slider_form_pane_vc_g1

0x431f,	// (0x0004e002) slider_form_pane_vc_g2

0x4328,	// (0x0004e00b) slider_form_pane_vc_g3

0x4316,	// (0x0004dff9) slider_form_pane_vc_g4

0x4331,	// (0x0004e014) slider_form_pane_vc_g5

0x0004,

0xfa9a,	// (0x0005977d) slider_form_pane_vc_g

0x76cb,	// (0x000513ae) main_idle_act3_pane

0x5d00,	// (0x0004f9e3) ai3_links_pane

0xd216,	// (0x00056ef9) popup_ai3_data_window_ParamLimits

0xd216,	// (0x00056ef9) popup_ai3_data_window

0x76cb,	// (0x000513ae) grid_ai3_links_pane

0xd234,	// (0x00056f17) cell_ai3_links_pane_ParamLimits

0xd234,	// (0x00056f17) cell_ai3_links_pane

0x5d41,	// (0x0004fa24) bg_popup_sub_pane_cp11

0x5d4e,	// (0x0004fa31) cell_ai3_links_pane_g1

0x76cb,	// (0x000513ae) bg_popup_sub_pane_cp12

0x5d73,	// (0x0004fa56) heading_ai3_data_pane

0x5d7b,	// (0x0004fa5e) list_ai3_gene_pane

0x5d87,	// (0x0004fa6a) popup_ai3_data_window_g1

0x5d8f,	// (0x0004fa72) heading_ai3_data_pane_g1

0x5d97,	// (0x0004fa7a) heading_ai3_data_pane_t1

0x5da5,	// (0x0004fa88) list_double_ai3_gene_pane_ParamLimits

0x5da5,	// (0x0004fa88) list_double_ai3_gene_pane

0x5db2,	// (0x0004fa95) list_single_ai3_gene_pane_ParamLimits

0x5db2,	// (0x0004fa95) list_single_ai3_gene_pane

0x4b47,	// (0x0004e82a) list_highlight_pane_cp7_ParamLimits

0x4b47,	// (0x0004e82a) list_highlight_pane_cp7

0x5dbf,	// (0x0004faa2) list_single_a13_gene_pane_t1_ParamLimits

0x5dbf,	// (0x0004faa2) list_single_a13_gene_pane_t1

0x5dd6,	// (0x0004fab9) list_single_ai3_gene_pane_g1

0x5ddf,	// (0x0004fac2) list_single_ai3_gene_pane_g2

0x0001,

0xfcdc,	// (0x000599bf) list_single_ai3_gene_pane_g

0x5de7,	// (0x0004faca) list_double_ai3_gene_pane_g1_ParamLimits

0x5de7,	// (0x0004faca) list_double_ai3_gene_pane_g1

0x5df3,	// (0x0004fad6) list_double_ai3_gene_pane_t1_ParamLimits

0x5df3,	// (0x0004fad6) list_double_ai3_gene_pane_t1

0x5e0f,	// (0x0004faf2) list_double_ai3_gene_pane_t2_ParamLimits

0x5e0f,	// (0x0004faf2) list_double_ai3_gene_pane_t2

0x5e24,	// (0x0004fb07) list_double_ai3_gene_pane_t3_ParamLimits

0x5e24,	// (0x0004fb07) list_double_ai3_gene_pane_t3

0x0002,

0xfce1,	// (0x000599c4) list_double_ai3_gene_pane_t_ParamLimits

0xfce1,	// (0x000599c4) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xeef6,	// (0x00058bd9) aid_size_min_col_2

0xd200,	// (0x00056ee3) aid_size_min_msg_ParamLimits

0xd200,	// (0x00056ee3) aid_size_min_msg

0xcf9f,	// (0x00056c82) fep_vkb_top_text_pane_g2_ParamLimits

0xcf9f,	// (0x00056c82) fep_vkb_top_text_pane_g2

0x0001,

0xfb4d,	// (0x00059830) fep_vkb_top_text_pane_g_ParamLimits

0xfb4d,	// (0x00059830) fep_vkb_top_text_pane_g

0x76cb,	// (0x000513ae) main_hc_apps_shell_pane

0x5e41,	// (0x0004fb24) grid_hc_apps_pane_ParamLimits

0x5e41,	// (0x0004fb24) grid_hc_apps_pane

0x5e50,	// (0x0004fb33) list_hc_apps_pane

0x5e58,	// (0x0004fb3b) scroll_pane_cp37_ParamLimits

0x5e58,	// (0x0004fb3b) scroll_pane_cp37

0xd24e,	// (0x00056f31) cell_hc_apps_pane_ParamLimits

0xd24e,	// (0x00056f31) cell_hc_apps_pane

0xd318,	// (0x00056ffb) cell_hc_apps_pane_g1_ParamLimits

0xd318,	// (0x00056ffb) cell_hc_apps_pane_g1

0x5f4d,	// (0x0004fc30) cell_hc_apps_pane_g2_ParamLimits

0x5f4d,	// (0x0004fc30) cell_hc_apps_pane_g2

0x5f69,	// (0x0004fc4c) cell_hc_apps_pane_g3_ParamLimits

0x5f69,	// (0x0004fc4c) cell_hc_apps_pane_g3

0x0002,

0xfce8,	// (0x000599cb) cell_hc_apps_pane_g_ParamLimits

0xfce8,	// (0x000599cb) cell_hc_apps_pane_g

0xd345,	// (0x00057028) cell_hc_apps_pane_t1_ParamLimits

0xd345,	// (0x00057028) cell_hc_apps_pane_t1

0x787a,	// (0x0005155d) grid_highlight_pane_cp10_ParamLimits

0x787a,	// (0x0005155d) grid_highlight_pane_cp10

0xd385,	// (0x00057068) list_single_hc_apps_pane_ParamLimits

0xd385,	// (0x00057068) list_single_hc_apps_pane

0xd3bf,	// (0x000570a2) list_single_hc_apps_pane_g1

0xbf97,	// (0x00055c7a) list_single_hc_apps_pane_g2

0x0001,

0xfcef,	// (0x000599d2) list_single_hc_apps_pane_g

0xbfb0,	// (0x00055c93) list_single_hc_apps_pane_g2_copy1

0x9b5d,	// (0x00053840) list_single_hc_apps_pane_t1

0x7739,	// (0x0005141c) bg_set_opt_pane_cp_ParamLimits

0xf0d2,	// (0x00058db5) setting_slider_pane_t1_ParamLimits

0xf0eb,	// (0x00058dce) setting_slider_pane_t2_ParamLimits

0xf105,	// (0x00058de8) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00059241) setting_slider_pane_t_ParamLimits

0xf11d,	// (0x00058e00) slider_set_pane_ParamLimits

0x02d8,	// (0x00049fbb) control_pane_g5_ParamLimits

0x02d8,	// (0x00049fbb) control_pane_g5

0x38b9,	// (0x0004d59c) slider_set_pane_g1_ParamLimits

0x0b4b,	// (0x0004a82e) slider_set_pane_g2_ParamLimits

0x0b57,	// (0x0004a83a) slider_set_pane_g3_ParamLimits

0x0b6b,	// (0x0004a84e) slider_set_pane_g4_ParamLimits

0x0b83,	// (0x0004a866) slider_set_pane_g5_ParamLimits

0x0b57,	// (0x0004a83a) slider_set_pane_g6_ParamLimits

0x0b99,	// (0x0004a87c) slider_set_pane_g7_ParamLimits

0xf964,	// (0x00059647) slider_set_pane_g_ParamLimits

0xadb6,	// (0x00054a99) navi_icon_text_pane_ParamLimits

0xb95c,	// (0x0005563f) aid_fill_nsta_2_ParamLimits

0xb995,	// (0x00055678) aid_touch_tab_arrow_left_ParamLimits

0xb9ab,	// (0x0005568e) aid_touch_tab_arrow_right_ParamLimits

0xba46,	// (0x00055729) clock_nsta_pane_ParamLimits

0xc815,	// (0x000564f8) navi_icon_pane_g1_ParamLimits

0xc821,	// (0x00056504) navi_text_pane_t1_ParamLimits

0xcd4a,	// (0x00056a2d) navi_icon_text_pane_g1_ParamLimits

0xcd56,	// (0x00056a39) navi_icon_text_pane_t1_ParamLimits

0xd3bf,	// (0x000570a2) list_single_hc_apps_pane_g1_ParamLimits

0xbf97,	// (0x00055c7a) list_single_hc_apps_pane_g2_ParamLimits

0xfcef,	// (0x000599d2) list_single_hc_apps_pane_g_ParamLimits

0xbfb0,	// (0x00055c93) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x9b5d,	// (0x00053840) list_single_hc_apps_pane_t1_ParamLimits

0x9ce1,	// (0x000539c4) popup_toolbar2_fixed_window_ParamLimits

0x9ce1,	// (0x000539c4) popup_toolbar2_fixed_window

0xb8c1,	// (0x000555a4) popup_toolbar2_float_window

0x76cb,	// (0x000513ae) bg_popup_sub_pane_cp27

0x6023,	// (0x0004fd06) grid_toolbar2_float_pane

0x76cb,	// (0x000513ae) bg_popup_sub_pane_cp26

0x6023,	// (0x0004fd06) grid_toolbar2_fixed_pane

0xd3d8,	// (0x000570bb) cell_toolbar2_fixed_pane_ParamLimits

0xd3d8,	// (0x000570bb) cell_toolbar2_fixed_pane

0xd3f5,	// (0x000570d8) cell_toolbar2_fixed_pane_g1

0x6044,	// (0x0004fd27) toolbar2_fixed_button_pane

0x253e,	// (0x0004c221) toolbar2_fixed_button_pane_g1

0x2546,	// (0x0004c229) toolbar2_fixed_button_pane_g2

0x254e,	// (0x0004c231) toolbar2_fixed_button_pane_g3

0x2556,	// (0x0004c239) toolbar2_fixed_button_pane_g4

0x255e,	// (0x0004c241) toolbar2_fixed_button_pane_g5

0x2566,	// (0x0004c249) toolbar2_fixed_button_pane_g6

0x256e,	// (0x0004c251) toolbar2_fixed_button_pane_g7

0x2576,	// (0x0004c259) toolbar2_fixed_button_pane_g8

0x257e,	// (0x0004c261) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x00059549) toolbar2_fixed_button_pane_g

0x604c,	// (0x0004fd2f) cell_toolbar2_float_pane_ParamLimits

0x604c,	// (0x0004fd2f) cell_toolbar2_float_pane

0x605d,	// (0x0004fd40) cell_toolbar2_float_pane_g1

0x6044,	// (0x0004fd27) toolbar2_fixed_button_pane_cp

0xce87,	// (0x00056b6a) fep_vkb_accented_list_pane_ParamLimits

0xce87,	// (0x00056b6a) fep_vkb_accented_list_pane

0x0fdf,	// (0x0004acc2) bg_popup_fep_shadow_pane_g9

0xc5f1,	// (0x000562d4) bg_popup_fep_shadow_pane_cp3

0xa39b,	// (0x0005407e) list_accented_list_pane

0x6066,	// (0x0004fd49) list_single_accented_list_pane_ParamLimits

0x6066,	// (0x0004fd49) list_single_accented_list_pane

0xc5f1,	// (0x000562d4) list_highlight_pane_cp10

0x6077,	// (0x0004fd5a) list_single_accented_list_pane_t1

0xb7dd,	// (0x000554c0) popup_slider_window_ParamLimits

0xb7dd,	// (0x000554c0) popup_slider_window

0x5cbf,	// (0x0004f9a2) aid_indentation_list_msg

0xd500,	// (0x000571e3) bg_popup_window_pane_cp19

0x61b1,	// (0x0004fe94) popup_slider_window_g1

0x61cd,	// (0x0004feb0) popup_slider_window_g2

0x61e9,	// (0x0004fecc) popup_slider_window_g3

0x0005,

0xfcf4,	// (0x000599d7) popup_slider_window_g

0x6245,	// (0x0004ff28) popup_slider_window_t1

0x62b9,	// (0x0004ff9c) small_volume_slider_vertical_pane

0x4b82,	// (0x0004e865) small_volume_slider_vertical_pane_g1

0x4b82,	// (0x0004e865) small_volume_slider_vertical_pane_g2

0x62d5,	// (0x0004ffb8) small_volume_slider_vertical_pane_g3

0x0002,

0xfd06,	// (0x000599e9) small_volume_slider_vertical_pane_g

0x9c4b,	// (0x0005392e) area_side_right_pane_ParamLimits

0x9c4b,	// (0x0005392e) area_side_right_pane

0xbfcc,	// (0x00055caf) aid_size_side_button_ParamLimits

0xbfcc,	// (0x00055caf) aid_size_side_button

0xbfe5,	// (0x00055cc8) grid_sctrl_middle_pane_ParamLimits

0xbfe5,	// (0x00055cc8) grid_sctrl_middle_pane

0x1258,	// (0x0004af3b) sctrl_sk_bottom_pane

0x1269,	// (0x0004af4c) sctrl_sk_top_pane

0x127b,	// (0x0004af5e) aid_touch_sctrl_top

0x787a,	// (0x0005155d) bg_sctrl_sk_pane_ParamLimits

0x787a,	// (0x0005155d) bg_sctrl_sk_pane

0x1288,	// (0x0004af6b) sctrl_sk_top_pane_g1

0x1295,	// (0x0004af78) sctrl_sk_top_pane_t1

0x127b,	// (0x0004af5e) aid_touch_sctrl_bottom

0x787a,	// (0x0005155d) bg_sctrl_sk_pane_cp_ParamLimits

0x787a,	// (0x0005155d) bg_sctrl_sk_pane_cp

0x12b0,	// (0x0004af93) sctrl_sk_bottom_pane_g1

0x1295,	// (0x0004af78) sctrl_sk_bottom_pane_t1

0xbfff,	// (0x00055ce2) cell_sctrl_middle_pane_ParamLimits

0xbfff,	// (0x00055ce2) cell_sctrl_middle_pane

0xc012,	// (0x00055cf5) aid_touch_sctrl_middle_ParamLimits

0xc012,	// (0x00055cf5) aid_touch_sctrl_middle

0xc01f,	// (0x00055d02) bg_sctrl_middle_pane_ParamLimits

0xc01f,	// (0x00055d02) bg_sctrl_middle_pane

0x6360,	// (0x00050043) cell_sctrl_middle_pane_g1_ParamLimits

0x6360,	// (0x00050043) cell_sctrl_middle_pane_g1

0xc02d,	// (0x00055d10) cell_sctrl_middle_pane_g2_ParamLimits

0xc02d,	// (0x00055d10) cell_sctrl_middle_pane_g2

0x0001,

0xfd12,	// (0x000599f5) cell_sctrl_middle_pane_g_ParamLimits

0xfd12,	// (0x000599f5) cell_sctrl_middle_pane_g

0x253e,	// (0x0004c221) bg_sctrl_middle_pane_g1

0x2546,	// (0x0004c229) bg_sctrl_middle_pane_g2

0x254e,	// (0x0004c231) bg_sctrl_middle_pane_g3

0x2556,	// (0x0004c239) bg_sctrl_middle_pane_g4

0x255e,	// (0x0004c241) bg_sctrl_middle_pane_g5

0x2566,	// (0x0004c249) bg_sctrl_middle_pane_g6

0x256e,	// (0x0004c251) bg_sctrl_middle_pane_g7

0x2576,	// (0x0004c259) bg_sctrl_middle_pane_g8

0x0007,

0xfd17,	// (0x000599fa) bg_sctrl_middle_pane_g

0x257e,	// (0x0004c261) bg_sctrl_middle_pane_g8_copy1

0x253e,	// (0x0004c221) bg_sctrl_sk_pane_g1

0x2546,	// (0x0004c229) bg_sctrl_sk_pane_g2

0x254e,	// (0x0004c231) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x00059549) bg_sctrl_sk_pane_g

0x7c95,	// (0x00051978) aid_size_touch_scroll_bar

0x2556,	// (0x0004c239) bg_sctrl_sk_pane_g4

0x255e,	// (0x0004c241) bg_sctrl_sk_pane_g5

0x2566,	// (0x0004c249) bg_sctrl_sk_pane_g6

0x256e,	// (0x0004c251) bg_sctrl_sk_pane_g7

0x2576,	// (0x0004c259) bg_sctrl_sk_pane_g8

0x257e,	// (0x0004c261) bg_sctrl_sk_pane_g9

0x0519,	// (0x0004a1fc) popup_fep_china_hwr2_fs_candidate_window

0xb295,	// (0x00054f78) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb295,	// (0x00054f78) popup_fep_china_hwr2_fs_control_window

0x4dfd,	// (0x0004eae0) sctrl_sk_top_pane_g2

0x0001,

0xfd0d,	// (0x000599f0) sctrl_sk_top_pane_g

0xd5b8,	// (0x0005729b) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd5b8,	// (0x0005729b) aid_fep_china_hwr2_fs_cell

0xd5ce,	// (0x000572b1) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd5ce,	// (0x000572b1) bg_popup_fep_shadow_pane_cp4

0xd5e5,	// (0x000572c8) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd5e5,	// (0x000572c8) bg_popup_fep_shadow_pane_cp5

0xd5f7,	// (0x000572da) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd5f7,	// (0x000572da) popup_fep_china_hwr2_fs_control_bar_grid

0xd60b,	// (0x000572ee) popup_fep_china_hwr2_fs_control_funtion_grid

0x6334,	// (0x00050017) aid_fep_china_hwr2_fs_candi_cell

0x76cb,	// (0x000513ae) bg_popup_fep_shadow_pane_cp6

0x633e,	// (0x00050021) popup_fep_china_hwr2_fs_candidate_grid

0xd613,	// (0x000572f6) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd613,	// (0x000572f6) cell_fep_china_hwr2_fs_funtion_grid

0x4b82,	// (0x0004e865) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6360,	// (0x00050043) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6360,	// (0x00050043) cell_fep_china_hwr2_fs_funtion_grid_g1

0x636e,	// (0x00050051) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x636e,	// (0x00050051) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd28,	// (0x00059a0b) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd28,	// (0x00059a0b) cell_fep_china_hwr2_fs_funtion_grid_g

0xd62b,	// (0x0005730e) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd62b,	// (0x0005730e) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd640,	// (0x00057323) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd640,	// (0x00057323) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2d,	// (0x00059a10) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2d,	// (0x00059a10) cell_fep_china_hwr2_fs_funtion_grid_t

0x63b5,	// (0x00050098) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x63bd,	// (0x000500a0) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x63c5,	// (0x000500a8) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd32,	// (0x00059a15) popup_fep_china_hwr2_fs_control_bar_grid_g

0x63cd,	// (0x000500b0) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x63cd,	// (0x000500b0) cell_fep_china_hwr2_fs_candidate_grid

0x63ec,	// (0x000500cf) popup_fep_china_hwr2_fs_candidate_grid_g20

0x63f4,	// (0x000500d7) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4b82,	// (0x0004e865) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4b82,	// (0x0004e865) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb52,	// (0x00059835) cell_fep_china_hwr2_fs_candidate_grid_g

0x63fc,	// (0x000500df) cell_fep_china_hwr2_fs_candidate_grid_t1

0x211a,	// (0x0004bdfd) clock_nsta_pane_cp_24_ParamLimits

0x211a,	// (0x0004bdfd) clock_nsta_pane_cp_24

0x219a,	// (0x0004be7d) indicator_nsta_pane_cp_24_ParamLimits

0x219a,	// (0x0004be7d) indicator_nsta_pane_cp_24

0x3211,	// (0x0004cef4) heading_pane_g1

0x0001,

0xf8cb,	// (0x000595ae) heading_pane_g

0x3cb3,	// (0x0004d996) grid_sct_catagory_button_pane

0x3ce5,	// (0x0004d9c8) scroll_pane_cp5_ParamLimits

0x47ce,	// (0x0004e4b1) button_value_adjust_pane_cp5_ParamLimits

0x47ce,	// (0x0004e4b1) button_value_adjust_pane_cp5

0x48b3,	// (0x0004e596) form2_midp_time_pane_ParamLimits

0x640a,	// (0x000500ed) cell_sct_catagory_button_pane_ParamLimits

0x640a,	// (0x000500ed) cell_sct_catagory_button_pane

0x4b47,	// (0x0004e82a) bg_button_pane_cp01_ParamLimits

0x4b47,	// (0x0004e82a) bg_button_pane_cp01

0x4b82,	// (0x0004e865) cell_sct_catagory_button_pane_g1

0xb85e,	// (0x00055541) popup_tb_extension_window

0xd65c,	// (0x0005733f) aid_size_cell_ext_ParamLimits

0xd65c,	// (0x0005733f) aid_size_cell_ext

0x7ad7,	// (0x000517ba) bg_tb_trans_pane_cp1_ParamLimits

0x7ad7,	// (0x000517ba) bg_tb_trans_pane_cp1

0xd682,	// (0x00057365) grid_tb_ext_pane_ParamLimits

0xd682,	// (0x00057365) grid_tb_ext_pane

0xd6c2,	// (0x000573a5) cell_tb_ext_pane_ParamLimits

0xd6c2,	// (0x000573a5) cell_tb_ext_pane

0xd6ea,	// (0x000573cd) cell_tb_ext_pane_g1_ParamLimits

0xd6ea,	// (0x000573cd) cell_tb_ext_pane_g1

0x64a0,	// (0x00050183) cell_tb_ext_pane_t1

0x787a,	// (0x0005155d) list_highlight_pane_cp11_ParamLimits

0x787a,	// (0x0005155d) list_highlight_pane_cp11

0x9cf6,	// (0x000539d9) popup_uni_indicator_window_ParamLimits

0x9cf6,	// (0x000539d9) popup_uni_indicator_window

0xa23e,	// (0x00053f21) bg_popup_sub_pane_cp14

0x64bb,	// (0x0005019e) list_uniindi_pane

0x64c7,	// (0x000501aa) uniindi_top_pane

0x787a,	// (0x0005155d) bg_uniindi_top_pane

0x64e8,	// (0x000501cb) uniindi_top_pane_g1

0x64fe,	// (0x000501e1) uniindi_top_pane_g2

0x0003,

0xfd39,	// (0x00059a1c) uniindi_top_pane_g

0x6528,	// (0x0005020b) uniindi_top_pane_t1

0x6554,	// (0x00050237) list_single_uniindi_pane_ParamLimits

0x6554,	// (0x00050237) list_single_uniindi_pane

0x4b82,	// (0x0004e865) bg_uniindi_top_pane_g1

0x6566,	// (0x00050249) list_single_uniindi_pane_g1

0x6579,	// (0x0005025c) list_single_uniindi_pane_t1

0x76cb,	// (0x000513ae) control_bg_pane

0x659e,	// (0x00050281) bg_sctrl_sk_pane_cp1

0x65a7,	// (0x0005028a) bg_sctrl_sk_pane_cp2

0x65b0,	// (0x00050293) control_bg_pane_g1

0x65b9,	// (0x0005029c) control_bg_pane_g2

0x0001,

0xfd42,	// (0x00059a25) control_bg_pane_g

0x45f5,	// (0x0004e2d8) cell_indicator_nsta_pane_g1_ParamLimits

0xcca3,	// (0x00056986) cell_indicator_nsta_pane_g2_ParamLimits

0xfab6,	// (0x00059799) cell_indicator_nsta_pane_g_ParamLimits

0xed79,	// (0x00058a5c) form2_midp_time_pane_t1_ParamLimits

0x89d7,	// (0x000526ba) main_idle_act4_pane_ParamLimits

0x89d7,	// (0x000526ba) main_idle_act4_pane

0xb85e,	// (0x00055541) popup_tb_extension_window_ParamLimits

0xd6aa,	// (0x0005738d) tb_ext_find_pane_ParamLimits

0xd6aa,	// (0x0005738d) tb_ext_find_pane

0x65c2,	// (0x000502a5) ai_gene_pane_1_cp1

0xe89b,	// (0x0005857e) ai_gene_pane_2_cp1

0x65ca,	// (0x000502ad) list_single_idle_plugin_calendar_pane

0x65d3,	// (0x000502b6) list_single_idle_plugin_notification_pane

0x65dc,	// (0x000502bf) list_single_idle_plugin_player_pane

0xd707,	// (0x000573ea) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd707,	// (0x000573ea) list_single_idle_plugin_shortcut_pane

0xd72f,	// (0x00057412) main_idle_act4_pane_t1

0xd747,	// (0x0005742a) main_idle_act4_pane_t2

0x0001,

0xfd47,	// (0x00059a2a) main_idle_act4_pane_t

0xd75f,	// (0x00057442) middle_sk_idle_act4_pane_ParamLimits

0xd75f,	// (0x00057442) middle_sk_idle_act4_pane

0xd77b,	// (0x0005745e) popup_clock_digital_analogue_window_cp2

0xd7a2,	// (0x00057485) shortcut_wheel_idle_act4_pane_ParamLimits

0xd7a2,	// (0x00057485) shortcut_wheel_idle_act4_pane

0x4b82,	// (0x0004e865) shortcut_wheel_idle_act4_pane_g1

0x4b82,	// (0x0004e865) shortcut_wheel_idle_act4_pane_g2

0x4b82,	// (0x0004e865) shortcut_wheel_idle_act4_pane_g3

0x4b82,	// (0x0004e865) shortcut_wheel_idle_act4_pane_g4

0x4b82,	// (0x0004e865) shortcut_wheel_idle_act4_pane_g5

0x666f,	// (0x00050352) shortcut_wheel_idle_act4_pane_g6

0x6677,	// (0x0005035a) shortcut_wheel_idle_act4_pane_g7

0x667f,	// (0x00050362) shortcut_wheel_idle_act4_pane_g8

0x6687,	// (0x0005036a) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4c,	// (0x00059a2f) shortcut_wheel_idle_act4_pane_g

0xce5f,	// (0x00056b42) middle_sk_idle_act4_pane_g1_ParamLimits

0xce5f,	// (0x00056b42) middle_sk_idle_act4_pane_g1

0xd81f,	// (0x00057502) middle_sk_idle_act4_pane_g2_ParamLimits

0xd81f,	// (0x00057502) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6f,	// (0x00059a52) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6f,	// (0x00059a52) middle_sk_idle_act4_pane_g

0xd837,	// (0x0005751a) middle_sk_idle_act4_pane_t1_ParamLimits

0xd837,	// (0x0005751a) middle_sk_idle_act4_pane_t1

0xd866,	// (0x00057549) grid_ai_shortcut_pane_ParamLimits

0xd866,	// (0x00057549) grid_ai_shortcut_pane

0xd883,	// (0x00057566) list_highlight_pane_cp16_ParamLimits

0xd883,	// (0x00057566) list_highlight_pane_cp16

0xd890,	// (0x00057573) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd890,	// (0x00057573) list_single_idle_plugin_shortcut_pane_g1

0xd89c,	// (0x0005757f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd89c,	// (0x0005757f) list_single_idle_plugin_shortcut_pane_g2

0xd8ba,	// (0x0005759d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd8ba,	// (0x0005759d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd74,	// (0x00059a57) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd74,	// (0x00059a57) list_single_idle_plugin_shortcut_pane_g

0xd8cf,	// (0x000575b2) cell_ai_shortcut_pane_ParamLimits

0xd8cf,	// (0x000575b2) cell_ai_shortcut_pane

0xd8e5,	// (0x000575c8) cell_ai_shortcut_pane_g1_ParamLimits

0xd8e5,	// (0x000575c8) cell_ai_shortcut_pane_g1

0x65c2,	// (0x000502a5) ai_gene_pane_1_cp2

0x67b8,	// (0x0005049b) ai_gene_pane_2_cp2

0x67c0,	// (0x000504a3) list_highlight_pane_cp15

0x67c9,	// (0x000504ac) list_single_idle_plugin_calendar_pane_g1

0x67c0,	// (0x000504a3) list_highlight_pane_cp17

0x67d1,	// (0x000504b4) list_single_idle_plugin_calendar_pane_g1_copy1

0x67d9,	// (0x000504bc) list_single_idle_plugin_player_pane_g1

0x3f1a,	// (0x0004dbfd) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7b,	// (0x00059a5e) list_single_idle_plugin_player_pane_g

0x67e1,	// (0x000504c4) list_single_idle_plugin_player_pane_t1

0x67ef,	// (0x000504d2) list_single_idle_plugin_player_pane_t2

0x67fd,	// (0x000504e0) list_single_idle_plugin_player_pane_t3

0x680b,	// (0x000504ee) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd80,	// (0x00059a63) list_single_idle_plugin_player_pane_t

0x6819,	// (0x000504fc) wait_bar_pane_cp15

0x6821,	// (0x00050504) grid_ai_notification_pane

0x3f1a,	// (0x0004dbfd) list_single_idle_plugin_notification_pane_g1

0xd907,	// (0x000575ea) cell_ai_notification_pane_ParamLimits

0xd907,	// (0x000575ea) cell_ai_notification_pane

0x6837,	// (0x0005051a) cell_ai_notification_pane_g1

0x683f,	// (0x00050522) cell_ai_notification_pane_t1

0xd914,	// (0x000575f7) tb_ext_find_button_pane

0xd91c,	// (0x000575ff) tb_ext_find_pane_g1

0xd924,	// (0x00057607) tb_ext_find_pane_t1

0xa8f0,	// (0x000545d3) tb_ext_find_button_pane_g1

0x686b,	// (0x0005054e) tb_ext_find_button_pane_g2

0x0001,

0xfd89,	// (0x00059a6c) tb_ext_find_button_pane_g

0xd72f,	// (0x00057412) main_idle_act4_pane_t1_ParamLimits

0xd747,	// (0x0005742a) main_idle_act4_pane_t2_ParamLimits

0xfd47,	// (0x00059a2a) main_idle_act4_pane_t_ParamLimits

0xd77b,	// (0x0005745e) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd792,	// (0x00057475) sat_plugin_idle_act4_pane_ParamLimits

0xd792,	// (0x00057475) sat_plugin_idle_act4_pane

0xd932,	// (0x00057615) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd932,	// (0x00057615) sat_plugin_idle_act4_pane_t1

0xd94a,	// (0x0005762d) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd94a,	// (0x0005762d) sat_plugin_idle_act4_pane_t2

0xd962,	// (0x00057645) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd962,	// (0x00057645) sat_plugin_idle_act4_pane_t3

0xd97a,	// (0x0005765d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd97a,	// (0x0005765d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8e,	// (0x00059a71) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8e,	// (0x00059a71) sat_plugin_idle_act4_pane_t

0xf074,	// (0x00058d57) popup_battery_window_ParamLimits

0xf074,	// (0x00058d57) popup_battery_window

0x787a,	// (0x0005155d) bg_popup_sub_pane_cp25_ParamLimits

0x787a,	// (0x0005155d) bg_popup_sub_pane_cp25

0x68c0,	// (0x000505a3) popup_battery_window_g1_ParamLimits

0x68c0,	// (0x000505a3) popup_battery_window_g1

0x68cc,	// (0x000505af) popup_battery_window_t1_ParamLimits

0x68cc,	// (0x000505af) popup_battery_window_t1

0x68de,	// (0x000505c1) popup_battery_window_t2_ParamLimits

0x68de,	// (0x000505c1) popup_battery_window_t2

0x0001,

0xfd97,	// (0x00059a7a) popup_battery_window_t_ParamLimits

0xfd97,	// (0x00059a7a) popup_battery_window_t

0xaf01,	// (0x00054be4) midp_canvas_pane_ParamLimits

0xaf5c,	// (0x00054c3f) midp_keypad_pane_ParamLimits

0xaf5c,	// (0x00054c3f) midp_keypad_pane

0x046b,	// (0x0004a14e) main_midp_pane_ParamLimits

0x4681,	// (0x0004e364) signal_pane_g2_cp_ParamLimits

0xd992,	// (0x00057675) aid_size_cell_midp_keypad_ParamLimits

0xd992,	// (0x00057675) aid_size_cell_midp_keypad

0xd9b0,	// (0x00057693) midp_keyp_game_grid_pane_ParamLimits

0xd9b0,	// (0x00057693) midp_keyp_game_grid_pane

0xd9d7,	// (0x000576ba) midp_keyp_rocker_pane_ParamLimits

0xd9d7,	// (0x000576ba) midp_keyp_rocker_pane

0xda16,	// (0x000576f9) midp_keyp_sk_left_pane_ParamLimits

0xda16,	// (0x000576f9) midp_keyp_sk_left_pane

0xda6a,	// (0x0005774d) midp_keyp_sk_right_pane_ParamLimits

0xda6a,	// (0x0005774d) midp_keyp_sk_right_pane

0x76cb,	// (0x000513ae) bg_button_pane_cp03

0xdabe,	// (0x000577a1) midp_keyp_sk_left_pane_g1

0x76cb,	// (0x000513ae) bg_button_pane_cp04

0xdabe,	// (0x000577a1) midp_keyp_sk_right_pane_g1

0x4b82,	// (0x0004e865) midp_keyp_rocker_pane_g1

0xdac7,	// (0x000577aa) keyp_game_cell_pane_ParamLimits

0xdac7,	// (0x000577aa) keyp_game_cell_pane

0x76cb,	// (0x000513ae) bg_button_pane_cp02

0xdaed,	// (0x000577d0) keyp_game_cell_pane_g1

0x9c8d,	// (0x00053970) popup_fep_vkb2_window_ParamLimits

0x9c8d,	// (0x00053970) popup_fep_vkb2_window

0xc039,	// (0x00055d1c) aid_size_cell_vkb2_ParamLimits

0xc039,	// (0x00055d1c) aid_size_cell_vkb2

0xc06f,	// (0x00055d52) popup_fep_vkb2_window_g1_ParamLimits

0xc06f,	// (0x00055d52) popup_fep_vkb2_window_g1

0xc0bf,	// (0x00055da2) vkb2_area_bottom_pane_ParamLimits

0xc0bf,	// (0x00055da2) vkb2_area_bottom_pane

0xc11b,	// (0x00055dfe) vkb2_area_keypad_pane_ParamLimits

0xc11b,	// (0x00055dfe) vkb2_area_keypad_pane

0xc169,	// (0x00055e4c) vkb2_area_top_pane_ParamLimits

0xc169,	// (0x00055e4c) vkb2_area_top_pane

0xc1ef,	// (0x00055ed2) vkb2_top_entry_pane_ParamLimits

0xc1ef,	// (0x00055ed2) vkb2_top_entry_pane

0xc21c,	// (0x00055eff) vkb2_top_grid_left_pane_ParamLimits

0xc21c,	// (0x00055eff) vkb2_top_grid_left_pane

0xc23c,	// (0x00055f1f) vkb2_top_grid_right_pane_ParamLimits

0xc23c,	// (0x00055f1f) vkb2_top_grid_right_pane

0x151c,	// (0x0004b1ff) vkb2_cell_keypad_pane_ParamLimits

0x151c,	// (0x0004b1ff) vkb2_cell_keypad_pane

0xc282,	// (0x00055f65) vkb2_area_bottom_grid_pane_ParamLimits

0xc282,	// (0x00055f65) vkb2_area_bottom_grid_pane

0xc2ac,	// (0x00055f8f) vkb2_area_bottom_pane_g1_ParamLimits

0xc2ac,	// (0x00055f8f) vkb2_area_bottom_pane_g1

0xc2d2,	// (0x00055fb5) vkb2_area_bottom_pane_g2_ParamLimits

0xc2d2,	// (0x00055fb5) vkb2_area_bottom_pane_g2

0xc303,	// (0x00055fe6) vkb2_area_bottom_pane_g3_ParamLimits

0xc303,	// (0x00055fe6) vkb2_area_bottom_pane_g3

0x0002,

0xfd9c,	// (0x00059a7f) vkb2_area_bottom_pane_g_ParamLimits

0xfd9c,	// (0x00059a7f) vkb2_area_bottom_pane_g

0x16c6,	// (0x0004b3a9) vkb2_top_cell_left_pane_ParamLimits

0x16c6,	// (0x0004b3a9) vkb2_top_cell_left_pane

0xdaf6,	// (0x000577d9) vkb2_top_entry_pane_g1_ParamLimits

0xdaf6,	// (0x000577d9) vkb2_top_entry_pane_g1

0xdb04,	// (0x000577e7) vkb2_top_entry_pane_t1_ParamLimits

0xdb04,	// (0x000577e7) vkb2_top_entry_pane_t1

0x6a81,	// (0x00050764) vkb2_top_entry_pane_t2_ParamLimits

0x6a81,	// (0x00050764) vkb2_top_entry_pane_t2

0x6ab3,	// (0x00050796) vkb2_top_entry_pane_t3_ParamLimits

0x6ab3,	// (0x00050796) vkb2_top_entry_pane_t3

0x0002,

0xfda3,	// (0x00059a86) vkb2_top_entry_pane_t_ParamLimits

0xfda3,	// (0x00059a86) vkb2_top_entry_pane_t

0xc36d,	// (0x00056050) vkb2_top_grid_right_pane_g1_ParamLimits

0xc36d,	// (0x00056050) vkb2_top_grid_right_pane_g1

0x1729,	// (0x0004b40c) vkb2_top_grid_right_pane_g2_ParamLimits

0x1729,	// (0x0004b40c) vkb2_top_grid_right_pane_g2

0x1741,	// (0x0004b424) vkb2_top_grid_right_pane_g3_ParamLimits

0x1741,	// (0x0004b424) vkb2_top_grid_right_pane_g3

0xc383,	// (0x00056066) vkb2_top_grid_right_pane_g4_ParamLimits

0xc383,	// (0x00056066) vkb2_top_grid_right_pane_g4

0x0003,

0xfdaa,	// (0x00059a8d) vkb2_top_grid_right_pane_g_ParamLimits

0xfdaa,	// (0x00059a8d) vkb2_top_grid_right_pane_g

0x176f,	// (0x0004b452) vkb2_top_cell_left_pane_g1

0x1786,	// (0x0004b469) vkb2_cell_keypad_pane_g1_ParamLimits

0x1786,	// (0x0004b469) vkb2_cell_keypad_pane_g1

0x6ad7,	// (0x000507ba) vkb2_cell_keypad_pane_t1_ParamLimits

0x6ad7,	// (0x000507ba) vkb2_cell_keypad_pane_t1

0x1794,	// (0x0004b477) vkb2_cell_bottom_grid_pane_ParamLimits

0x1794,	// (0x0004b477) vkb2_cell_bottom_grid_pane

0x17cd,	// (0x0004b4b0) vkb2_cell_bottom_grid_pane_g1

0xd7c3,	// (0x000574a6) aid_call2_pane_cp02

0xd7cb,	// (0x000574ae) aid_call_pane_cp02

0xd7d3,	// (0x000574b6) clock_digital_number_pane_cp10

0xd7db,	// (0x000574be) clock_digital_number_pane_cp11

0xd7e3,	// (0x000574c6) clock_digital_number_pane_cp12

0xd7eb,	// (0x000574ce) clock_digital_number_pane_cp13

0xd7f3,	// (0x000574d6) clock_digital_separator_pane_cp10

0xa8f0,	// (0x000545d3) popup_clock_digital_analogue_window_cp2_g1

0xa8f0,	// (0x000545d3) popup_clock_digital_analogue_window_cp2_g2

0xd7fb,	// (0x000574de) popup_clock_digital_analogue_window_cp2_g3

0xa8f0,	// (0x000545d3) popup_clock_digital_analogue_window_cp2_g4

0xd7fb,	// (0x000574de) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5f,	// (0x00059a42) popup_clock_digital_analogue_window_cp2_g

0xd803,	// (0x000574e6) popup_clock_digital_analogue_window_cp2_t1

0xd811,	// (0x000574f4) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6a,	// (0x00059a4d) popup_clock_digital_analogue_window_cp2_t

0x4b82,	// (0x0004e865) clock_digital_number_pane_cp10_g1

0x4b82,	// (0x0004e865) clock_digital_number_pane_cp10_g2

0x0001,

0xfb52,	// (0x00059835) clock_digital_number_pane_cp10_g

0x4b82,	// (0x0004e865) clock_digital_separator_pane_cp10_g1

0x4b82,	// (0x0004e865) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb52,	// (0x00059835) clock_digital_separator_pane_cp10_g

0x650a,	// (0x000501ed) uniindi_top_pane_g3

0x651b,	// (0x000501fe) uniindi_top_pane_g4

0x15a7,	// (0x0004b28a) vkb2_row_keypad_pane_ParamLimits

0x15a7,	// (0x0004b28a) vkb2_row_keypad_pane

0x17e9,	// (0x0004b4cc) vkb2_cell_t_keypad_pane_ParamLimits

0x17e9,	// (0x0004b4cc) vkb2_cell_t_keypad_pane

0x17f9,	// (0x0004b4dc) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x17f9,	// (0x0004b4dc) vkb2_cell_t_keypad_pane_cp08

0x180e,	// (0x0004b4f1) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x180e,	// (0x0004b4f1) vkb2_cell_t_keypad_pane_cp09

0x1822,	// (0x0004b505) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1822,	// (0x0004b505) vkb2_cell_t_keypad_pane_cp01

0x1833,	// (0x0004b516) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1833,	// (0x0004b516) vkb2_cell_t_keypad_pane_cp02

0x1844,	// (0x0004b527) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1844,	// (0x0004b527) vkb2_cell_t_keypad_pane_cp03

0x1855,	// (0x0004b538) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1855,	// (0x0004b538) vkb2_cell_t_keypad_pane_cp04

0x1866,	// (0x0004b549) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1866,	// (0x0004b549) vkb2_cell_t_keypad_pane_cp05

0x1877,	// (0x0004b55a) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1877,	// (0x0004b55a) vkb2_cell_t_keypad_pane_cp06

0x188a,	// (0x0004b56d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x188a,	// (0x0004b56d) vkb2_cell_t_keypad_pane_cp07

0x189f,	// (0x0004b582) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x189f,	// (0x0004b582) vkb2_cell_t_keypad_pane_cp10

0x4dfd,	// (0x0004eae0) vkb2_cell_t_keypad_pane_g1

0x6aee,	// (0x000507d1) vkb2_cell_t_keypad_pane_t1

0x76cb,	// (0x000513ae) popup_grid_graphic2_window

0xdb3d,	// (0x00057820) aid_size_cell_graphic2_ParamLimits

0xdb3d,	// (0x00057820) aid_size_cell_graphic2

0xdb7b,	// (0x0005785e) bg_popup_window_pane_cp21_ParamLimits

0xdb7b,	// (0x0005785e) bg_popup_window_pane_cp21

0xdb89,	// (0x0005786c) graphic2_pages_pane_ParamLimits

0xdb89,	// (0x0005786c) graphic2_pages_pane

0xdbe1,	// (0x000578c4) grid_graphic2_control_pane_ParamLimits

0xdbe1,	// (0x000578c4) grid_graphic2_control_pane

0xdc29,	// (0x0005790c) grid_graphic2_pane_ParamLimits

0xdc29,	// (0x0005790c) grid_graphic2_pane

0xdcb4,	// (0x00057997) cell_graphic2_pane

0x76cb,	// (0x000513ae) main_comp_mode_pane

0x5d7b,	// (0x0004fa5e) list_ai3_gene_pane_ParamLimits

0xd500,	// (0x000571e3) bg_popup_window_pane_cp19_ParamLimits

0x614f,	// (0x0004fe32) bg_touch_area_indi_pane_ParamLimits

0x614f,	// (0x0004fe32) bg_touch_area_indi_pane

0x6165,	// (0x0004fe48) bg_touch_area_indi_pane_cp01_ParamLimits

0x6165,	// (0x0004fe48) bg_touch_area_indi_pane_cp01

0x617d,	// (0x0004fe60) bg_touch_area_indi_pane_cp02_ParamLimits

0x617d,	// (0x0004fe60) bg_touch_area_indi_pane_cp02

0x6197,	// (0x0004fe7a) bg_touch_area_indi_pane_cp03_ParamLimits

0x6197,	// (0x0004fe7a) bg_touch_area_indi_pane_cp03

0x61b1,	// (0x0004fe94) popup_slider_window_g1_ParamLimits

0x61cd,	// (0x0004feb0) popup_slider_window_g2_ParamLimits

0x61e9,	// (0x0004fecc) popup_slider_window_g3_ParamLimits

0xfcf4,	// (0x000599d7) popup_slider_window_g_ParamLimits

0x6245,	// (0x0004ff28) popup_slider_window_t1_ParamLimits

0x62b9,	// (0x0004ff9c) small_volume_slider_vertical_pane_ParamLimits

0xdcb4,	// (0x00057997) cell_graphic2_pane_ParamLimits

0xdd17,	// (0x000579fa) bg_button_pane_cp10_ParamLimits

0xdd17,	// (0x000579fa) bg_button_pane_cp10

0xdd2a,	// (0x00057a0d) bg_button_pane_cp11_ParamLimits

0xdd2a,	// (0x00057a0d) bg_button_pane_cp11

0xdd3d,	// (0x00057a20) graphic2_pages_pane_g1_ParamLimits

0xdd3d,	// (0x00057a20) graphic2_pages_pane_g1

0xdd58,	// (0x00057a3b) graphic2_pages_pane_g2_ParamLimits

0xdd58,	// (0x00057a3b) graphic2_pages_pane_g2

0x0001,

0xfdb8,	// (0x00059a9b) graphic2_pages_pane_g_ParamLimits

0xfdb8,	// (0x00059a9b) graphic2_pages_pane_g

0xdd70,	// (0x00057a53) graphic2_pages_pane_t1_ParamLimits

0xdd70,	// (0x00057a53) graphic2_pages_pane_t1

0xdd88,	// (0x00057a6b) cell_graphic2_control_pane_ParamLimits

0xdd88,	// (0x00057a6b) cell_graphic2_control_pane

0xddbc,	// (0x00057a9f) cell_graphic2_pane_g1_ParamLimits

0xddbc,	// (0x00057a9f) cell_graphic2_pane_g1

0xce6d,	// (0x00056b50) cell_graphic2_pane_g2_ParamLimits

0xce6d,	// (0x00056b50) cell_graphic2_pane_g2

0xddc9,	// (0x00057aac) cell_graphic2_pane_g3_ParamLimits

0xddc9,	// (0x00057aac) cell_graphic2_pane_g3

0xce7a,	// (0x00056b5d) cell_graphic2_pane_g4_ParamLimits

0xce7a,	// (0x00056b5d) cell_graphic2_pane_g4

0xddd6,	// (0x00057ab9) cell_graphic2_pane_g5_ParamLimits

0xddd6,	// (0x00057ab9) cell_graphic2_pane_g5

0x0004,

0xfdbd,	// (0x00059aa0) cell_graphic2_pane_g_ParamLimits

0xfdbd,	// (0x00059aa0) cell_graphic2_pane_g

0xddf6,	// (0x00057ad9) cell_graphic2_pane_t1_ParamLimits

0xddf6,	// (0x00057ad9) cell_graphic2_pane_t1

0x3205,	// (0x0004cee8) grid_highlight_pane_cp11_ParamLimits

0x3205,	// (0x0004cee8) grid_highlight_pane_cp11

0x787a,	// (0x0005155d) bg_button_pane_cp05

0xde2b,	// (0x00057b0e) cell_graphic2_control_pane_g1

0x4b82,	// (0x0004e865) bg_touch_area_indi_pane_g1

0x6dc8,	// (0x00050aab) aid_cmod_rocker_key_size

0x6dd2,	// (0x00050ab5) aid_cmode_itu_key_size

0x6ddc,	// (0x00050abf) main_cmode_video_pane

0x6de6,	// (0x00050ac9) main_comp_mode_itu_pane

0x6df2,	// (0x00050ad5) main_comp_mode_rocker_pane

0x6dfe,	// (0x00050ae1) cell_cmode_rocker_pane_ParamLimits

0x6dfe,	// (0x00050ae1) cell_cmode_rocker_pane

0x6e12,	// (0x00050af5) cell_cmode_itu_pane_ParamLimits

0x6e12,	// (0x00050af5) cell_cmode_itu_pane

0xa23e,	// (0x00053f21) bg_button_pane_cp06_ParamLimits

0xa23e,	// (0x00053f21) bg_button_pane_cp06

0x4dfd,	// (0x0004eae0) cell_cmode_rocker_pane_g1_ParamLimits

0x4dfd,	// (0x0004eae0) cell_cmode_rocker_pane_g1

0x6360,	// (0x00050043) cell_cmode_rocker_pane_g2_ParamLimits

0x6360,	// (0x00050043) cell_cmode_rocker_pane_g2

0x0001,

0xfdcd,	// (0x00059ab0) cell_cmode_rocker_pane_g_ParamLimits

0xfdcd,	// (0x00059ab0) cell_cmode_rocker_pane_g

0x76cb,	// (0x000513ae) bg_button_pane_cp07

0x6e29,	// (0x00050b0c) cell_cmode_itu_pane_g1

0x6e32,	// (0x00050b15) cell_cmode_itu_pane_t1

0x6e40,	// (0x00050b23) cell_cmode_itu_pane_t2

0x0001,

0xfdd2,	// (0x00059ab5) cell_cmode_itu_pane_t

0x658e,	// (0x00050271) aid_touch_ctrl_left

0x6596,	// (0x00050279) aid_touch_ctrl_right

0x76cb,	// (0x000513ae) compa_mode_pane

0xde51,	// (0x00057b34) aid_cmod_rocker_key_size_cp

0xde5b,	// (0x00057b3e) aid_cmode_itu_key_size_cp

0x6e62,	// (0x00050b45) compa_mode_pane_g1

0x6e6a,	// (0x00050b4d) compa_mode_pane_g2

0x6e72,	// (0x00050b55) compa_mode_pane_g3

0x0002,

0xfdd7,	// (0x00059aba) compa_mode_pane_g

0xde65,	// (0x00057b48) main_comp_mode_itu_pane_cp

0xde6d,	// (0x00057b50) main_comp_mode_rocker_pane_cp

0xde75,	// (0x00057b58) cell_cmode_itu_pane_cp_ParamLimits

0xde75,	// (0x00057b58) cell_cmode_itu_pane_cp

0xde8a,	// (0x00057b6d) cell_cmode_rocker_pane_cp_ParamLimits

0xde8a,	// (0x00057b6d) cell_cmode_rocker_pane_cp

0xa23e,	// (0x00053f21) bg_button_pane_cp06_cp_ParamLimits

0xa23e,	// (0x00053f21) bg_button_pane_cp06_cp

0x4dfd,	// (0x0004eae0) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4dfd,	// (0x0004eae0) cell_cmode_rocker_pane_g1_cp

0x4b82,	// (0x0004e865) cell_cmode_rocker_pane_g2_cp

0x76cb,	// (0x000513ae) bg_button_pane_cp07_cp

0xde9c,	// (0x00057b7f) cell_cmode_itu_pane_g1_cp

0xdea5,	// (0x00057b88) cell_cmode_itu_pane_t1_cp

0xdea5,	// (0x00057b88) cell_cmode_itu_pane_t2_cp

0xcacf,	// (0x000567b2) settings_code_pane_cp2

0x7739,	// (0x0005141c) bg_popup_window_pane_cp3_ParamLimits

0x7a68,	// (0x0005174b) heading_pane_cp3_ParamLimits

0x7a74,	// (0x00051757) listscroll_popup_graphic_pane_ParamLimits

0x0dad,	// (0x0004aa90) fep_hwr_aid_pane_ParamLimits

0x127b,	// (0x0004af5e) aid_touch_sctrl_top_ParamLimits

0x1288,	// (0x0004af6b) sctrl_sk_top_pane_g1_ParamLimits

0x4dfd,	// (0x0004eae0) sctrl_sk_top_pane_g2_ParamLimits

0xfd0d,	// (0x000599f0) sctrl_sk_top_pane_g_ParamLimits

0x1295,	// (0x0004af78) sctrl_sk_top_pane_t1_ParamLimits

0x127b,	// (0x0004af5e) aid_touch_sctrl_bottom_ParamLimits

0x1295,	// (0x0004af78) sctrl_sk_bottom_pane_t1_ParamLimits

0x64d4,	// (0x000501b7) aid_area_touch_clock

0xc1b1,	// (0x00055e94) aid_vkb2_area_top_pane_cell_ParamLimits

0xc1b1,	// (0x00055e94) aid_vkb2_area_top_pane_cell

0xc25c,	// (0x00055f3f) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc25c,	// (0x00055f3f) aid_vkb2_area_bottom_pane_cell

0x6a39,	// (0x0005071c) popup_char_count_window

0x6ec8,	// (0x00050bab) popup_char_count_window_g1

0x6ed1,	// (0x00050bb4) popup_char_count_window_g2

0x6eda,	// (0x00050bbd) popup_char_count_window_g3

0x0002,

0xfdde,	// (0x00059ac1) popup_char_count_window_g

0x6ee3,	// (0x00050bc6) popup_char_count_window_t1

0x1338,	// (0x0004b01b) popup_fep_char_preview_window_ParamLimits

0x1338,	// (0x0004b01b) popup_fep_char_preview_window

0xc1d1,	// (0x00055eb4) vkb2_top_candi_pane_ParamLimits

0xc1d1,	// (0x00055eb4) vkb2_top_candi_pane

0xdeb3,	// (0x00057b96) cell_vkb2_top_candi_pane_ParamLimits

0xdeb3,	// (0x00057b96) cell_vkb2_top_candi_pane

0x2b8e,	// (0x0004c871) bg_popup_fep_char_preview_window_ParamLimits

0x2b8e,	// (0x0004c871) bg_popup_fep_char_preview_window

0x18b4,	// (0x0004b597) popup_fep_char_preview_window_t1_ParamLimits

0x18b4,	// (0x0004b597) popup_fep_char_preview_window_t1

0x6f42,	// (0x00050c25) bg_popup_fep_char_preview_window_g1

0x6f4a,	// (0x00050c2d) bg_popup_fep_char_preview_window_g2

0x6f52,	// (0x00050c35) bg_popup_fep_char_preview_window_g3

0x6f5a,	// (0x00050c3d) bg_popup_fep_char_preview_window_g4

0x6f62,	// (0x00050c45) bg_popup_fep_char_preview_window_g5

0x18ee,	// (0x0004b5d1) bg_popup_fep_char_preview_window_g6

0x6f6a,	// (0x00050c4d) bg_popup_fep_char_preview_window_g7

0x6f72,	// (0x00050c55) bg_popup_fep_char_preview_window_g8

0x6f7a,	// (0x00050c5d) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde5,	// (0x00059ac8) bg_popup_fep_char_preview_window_g

0x4dfd,	// (0x0004eae0) cell_vkb2_top_candi_pane_g1_ParamLimits

0x4dfd,	// (0x0004eae0) cell_vkb2_top_candi_pane_g1

0x513e,	// (0x0004ee21) cell_vkb2_top_candi_pane_g2_ParamLimits

0x513e,	// (0x0004ee21) cell_vkb2_top_candi_pane_g2

0x515f,	// (0x0004ee42) cell_vkb2_top_candi_pane_g3_ParamLimits

0x515f,	// (0x0004ee42) cell_vkb2_top_candi_pane_g3

0x18f6,	// (0x0004b5d9) cell_vkb2_top_candi_pane_g4_ParamLimits

0x18f6,	// (0x0004b5d9) cell_vkb2_top_candi_pane_g4

0x6f82,	// (0x00050c65) cell_vkb2_top_candi_pane_g5_ParamLimits

0x6f82,	// (0x00050c65) cell_vkb2_top_candi_pane_g5

0x6360,	// (0x00050043) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6360,	// (0x00050043) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf8,	// (0x00059adb) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf8,	// (0x00059adb) cell_vkb2_top_candi_pane_g

0x1917,	// (0x0004b5fa) cell_vkb2_top_candi_pane_t1

0x0b37,	// (0x0004a81a) aid_size_touch_slider_mark_ParamLimits

0x0b37,	// (0x0004a81a) aid_size_touch_slider_mark

0xdbc5,	// (0x000578a8) grid_graphic2_catg_pane_ParamLimits

0xdbc5,	// (0x000578a8) grid_graphic2_catg_pane

0xdc83,	// (0x00057966) popup_grid_graphic2_window_t1_ParamLimits

0xdc83,	// (0x00057966) popup_grid_graphic2_window_t1

0xdc99,	// (0x0005797c) popup_grid_graphic2_window_t2_ParamLimits

0xdc99,	// (0x0005797c) popup_grid_graphic2_window_t2

0x0001,

0xfdb3,	// (0x00059a96) popup_grid_graphic2_window_t_ParamLimits

0xfdb3,	// (0x00059a96) popup_grid_graphic2_window_t

0x787a,	// (0x0005155d) bg_button_pane_cp05_ParamLimits

0xde2b,	// (0x00057b0e) cell_graphic2_control_pane_g1_ParamLimits

0xdf1d,	// (0x00057c00) cell_graphic2_catg_pane_ParamLimits

0xdf1d,	// (0x00057c00) cell_graphic2_catg_pane

0x76cb,	// (0x000513ae) bg_button_pane_cp12

0xdf2f,	// (0x00057c12) cell_graphic2_catg_pane_g1

0x64a0,	// (0x00050183) cell_tb_ext_pane_t1_ParamLimits

0x16e6,	// (0x0004b3c9) vkb2_top_cell_right_narrow_pane_ParamLimits

0x16e6,	// (0x0004b3c9) vkb2_top_cell_right_narrow_pane

0x16fe,	// (0x0004b3e1) vkb2_top_cell_right_wide_pane_ParamLimits

0x16fe,	// (0x0004b3e1) vkb2_top_cell_right_wide_pane

0x89d7,	// (0x000526ba) bg_vkb2_func_pane_ParamLimits

0x89d7,	// (0x000526ba) bg_vkb2_func_pane

0x176f,	// (0x0004b452) vkb2_top_cell_left_pane_g1_ParamLimits

0x89d7,	// (0x000526ba) bg_vkb2_fuc_pane_cp03_ParamLimits

0x89d7,	// (0x000526ba) bg_vkb2_fuc_pane_cp03

0x17cd,	// (0x0004b4b0) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2546,	// (0x0004c229) bg_vkb2_func_pane_g1

0x254e,	// (0x0004c231) bg_vkb2_func_pane_g2

0x255e,	// (0x0004c241) bg_vkb2_func_pane_g3

0x2556,	// (0x0004c239) bg_vkb2_func_pane_g4

0x2566,	// (0x0004c249) bg_vkb2_func_pane_g5

0x256e,	// (0x0004c251) bg_vkb2_func_pane_g6

0x2576,	// (0x0004c259) bg_vkb2_func_pane_g7

0x257e,	// (0x0004c261) bg_vkb2_func_pane_g8

0x253e,	// (0x0004c221) bg_vkb2_func_pane_g9

0x0008,

0xfe05,	// (0x00059ae8) bg_vkb2_func_pane_g

0x89d7,	// (0x000526ba) bg_vkb2_fuc_pane_cp01_ParamLimits

0x89d7,	// (0x000526ba) bg_vkb2_fuc_pane_cp01

0x176f,	// (0x0004b452) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x176f,	// (0x0004b452) vkb2_top_cell_right_wide_pane_g1

0x89d7,	// (0x000526ba) bg_vkb2_fuc_pane_cp02_ParamLimits

0x89d7,	// (0x000526ba) bg_vkb2_fuc_pane_cp02

0x17cd,	// (0x0004b4b0) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x17cd,	// (0x0004b4b0) vkb2_top_cell_right_narrow_pane_g1

0xd43a,	// (0x0005711d) aid_touch_area_decrease_ParamLimits

0xd43a,	// (0x0005711d) aid_touch_area_decrease

0xd474,	// (0x00057157) aid_touch_area_increase_ParamLimits

0xd474,	// (0x00057157) aid_touch_area_increase

0xd49c,	// (0x0005717f) aid_touch_area_mute_ParamLimits

0xd49c,	// (0x0005717f) aid_touch_area_mute

0xd4cc,	// (0x000571af) aid_touch_area_slider_ParamLimits

0xd4cc,	// (0x000571af) aid_touch_area_slider

0xd50c,	// (0x000571ef) popup_slider_window_g4_ParamLimits

0xd50c,	// (0x000571ef) popup_slider_window_g4

0xd534,	// (0x00057217) popup_slider_window_g5_ParamLimits

0xd534,	// (0x00057217) popup_slider_window_g5

0xd568,	// (0x0005724b) popup_slider_window_g6_ParamLimits

0xd568,	// (0x0005724b) popup_slider_window_g6

0x6273,	// (0x0004ff56) popup_slider_window_t2_ParamLimits

0x6273,	// (0x0004ff56) popup_slider_window_t2

0x0001,

0xfd01,	// (0x000599e4) popup_slider_window_t_ParamLimits

0xfd01,	// (0x000599e4) popup_slider_window_t

0xd584,	// (0x00057267) slider_pane_ParamLimits

0xd584,	// (0x00057267) slider_pane

0x6fbe,	// (0x00050ca1) slider_pane_g1_ParamLimits

0x6fbe,	// (0x00050ca1) slider_pane_g1

0x6fd2,	// (0x00050cb5) slider_pane_g2_ParamLimits

0x6fd2,	// (0x00050cb5) slider_pane_g2

0x6fe8,	// (0x00050ccb) slider_pane_g3_ParamLimits

0x6fe8,	// (0x00050ccb) slider_pane_g3

0x0003,

0xfe18,	// (0x00059afb) slider_pane_g_ParamLimits

0xfe18,	// (0x00059afb) slider_pane_g

0xb8aa,	// (0x0005558d) popup_tb_float_extension_window_ParamLimits

0xb8aa,	// (0x0005558d) popup_tb_float_extension_window

0x7014,	// (0x00050cf7) aid_size_cell_tb_float_ext

0x76cb,	// (0x000513ae) bg_popup_sub_window_cp28

0x7020,	// (0x00050d03) grid_tb_float_ext_pane

0x702c,	// (0x00050d0f) cell_tb_float_ext_pane_ParamLimits

0x702c,	// (0x00050d0f) cell_tb_float_ext_pane

0x7048,	// (0x00050d2b) cell_tb_float_ext_pane_g1

0x7051,	// (0x00050d34) grid_highlight_pane_cp12

0xbf32,	// (0x00055c15) cell_last_hwr_side_pane_ParamLimits

0xbf32,	// (0x00055c15) cell_last_hwr_side_pane

0x4b82,	// (0x0004e865) cell_last_hwr_side_pane_g1

0x705a,	// (0x00050d3d) cell_last_hwr_side_pane_g2

0x0001,

0xfe21,	// (0x00059b04) cell_last_hwr_side_pane_g

0xc338,	// (0x0005601b) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc338,	// (0x0005601b) vkb2_area_bottom_space_btn_pane

0x4dfd,	// (0x0004eae0) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6aee,	// (0x000507d1) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1917,	// (0x0004b5fa) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1935,	// (0x0004b618) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1935,	// (0x0004b618) vkb2_area_bottom_space_btn_pane_g1

0x196f,	// (0x0004b652) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x196f,	// (0x0004b652) vkb2_area_bottom_space_btn_pane_g2

0x19a5,	// (0x0004b688) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x19a5,	// (0x0004b688) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe26,	// (0x00059b09) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe26,	// (0x00059b09) vkb2_area_bottom_space_btn_pane_g

0x0e56,	// (0x0004ab39) cel_fep_hwr_func_pane_ParamLimits

0x0e56,	// (0x0004ab39) cel_fep_hwr_func_pane

0xbf07,	// (0x00055bea) cell_hwr_side_button_pane_ParamLimits

0xbf07,	// (0x00055bea) cell_hwr_side_button_pane

0x64d4,	// (0x000501b7) aid_area_touch_clock_ParamLimits

0x787a,	// (0x0005155d) bg_uniindi_top_pane_ParamLimits

0x64e8,	// (0x000501cb) uniindi_top_pane_g1_ParamLimits

0x64fe,	// (0x000501e1) uniindi_top_pane_g2_ParamLimits

0x650a,	// (0x000501ed) uniindi_top_pane_g3_ParamLimits

0x651b,	// (0x000501fe) uniindi_top_pane_g4_ParamLimits

0xfd39,	// (0x00059a1c) uniindi_top_pane_g_ParamLimits

0x6528,	// (0x0005020b) uniindi_top_pane_t1_ParamLimits

0x787a,	// (0x0005155d) bg_vkb2_func_pane_cp01_ParamLimits

0x787a,	// (0x0005155d) bg_vkb2_func_pane_cp01

0x7063,	// (0x00050d46) cel_fep_hwr_func_pane_g1_ParamLimits

0x7063,	// (0x00050d46) cel_fep_hwr_func_pane_g1

0x787a,	// (0x0005155d) bg_vkb2_func_pane_cp02_ParamLimits

0x787a,	// (0x0005155d) bg_vkb2_func_pane_cp02

0x7063,	// (0x00050d46) cell_hwr_side_button_pane_g1_ParamLimits

0x7063,	// (0x00050d46) cell_hwr_side_button_pane_g1

0x23bf,	// (0x0004c0a2) status_pane_g4_ParamLimits

0x23bf,	// (0x0004c0a2) status_pane_g4

0x23d9,	// (0x0004c0bc) status_pane_t1

0x4921,	// (0x0004e604) form2_midp_gauge_slider_cont_pane

0x4929,	// (0x0004e60c) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcda5,	// (0x00056a88) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcdb7,	// (0x00056a9a) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb05,	// (0x000597e8) form2_midp_gauge_slider_pane_t_ParamLimits

0x495f,	// (0x0004e642) form2_midp_slider_pane_ParamLimits

0x12f8,	// (0x0004afdb) aid_size_cell_func_vkb2_ParamLimits

0x12f8,	// (0x0004afdb) aid_size_cell_func_vkb2

0x7000,	// (0x00050ce3) slider_pane_g4_ParamLimits

0x7000,	// (0x00050ce3) slider_pane_g4

0xc399,	// (0x0005607c) form2_midp_gauge_slider_pane_t2_cp01

0xc3a7,	// (0x0005608a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc3a7,	// (0x0005608a) form2_midp_gauge_slider_pane_t3_cp01

0x1a1a,	// (0x0004b6fd) form2_midp_slider_pane_cp01

0x76cb,	// (0x000513ae) navi_smil_pane

0x709c,	// (0x00050d7f) navi_smil_pane_g1

0x70a4,	// (0x00050d87) navi_smil_pane_t1

0x7071,	// (0x00050d54) form2_midp_slider_pane_g1

0x707a,	// (0x00050d5d) form2_midp_slider_pane_g2

0x7082,	// (0x00050d65) form2_midp_slider_pane_g3

0x7071,	// (0x00050d54) form2_midp_slider_pane_g4

0xdf38,	// (0x00057c1b) form2_midp_slider_pane_g5

0x0004,

0xfe2f,	// (0x00059b12) form2_midp_slider_pane_g

0x19df,	// (0x0004b6c2) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x19df,	// (0x0004b6c2) vkb2_area_bottom_space_btn_pane_g4

0xba91,	// (0x00055774) lc0_navi_pane_ParamLimits

0xba91,	// (0x00055774) lc0_navi_pane

0xbb01,	// (0x000557e4) lc0_stat_indi_pane_ParamLimits

0xbb01,	// (0x000557e4) lc0_stat_indi_pane

0xbb16,	// (0x000557f9) ls0_title_pane_ParamLimits

0xbb16,	// (0x000557f9) ls0_title_pane

0xa23e,	// (0x00053f21) bg_popup_sub_pane_cp14_ParamLimits

0x64bb,	// (0x0005019e) list_uniindi_pane_ParamLimits

0x64c7,	// (0x000501aa) uniindi_top_pane_ParamLimits

0x6566,	// (0x00050249) list_single_uniindi_pane_g1_ParamLimits

0x6579,	// (0x0005025c) list_single_uniindi_pane_t1_ParamLimits

0xc3c4,	// (0x000560a7) lc0_stat_clock_pane_ParamLimits

0xc3c4,	// (0x000560a7) lc0_stat_clock_pane

0xdf41,	// (0x00057c24) lc0_stat_indi_pane_g1_ParamLimits

0xdf41,	// (0x00057c24) lc0_stat_indi_pane_g1

0xdf4e,	// (0x00057c31) lc0_stat_indi_pane_g2_ParamLimits

0xdf4e,	// (0x00057c31) lc0_stat_indi_pane_g2

0x0001,

0xfe3a,	// (0x00059b1d) lc0_stat_indi_pane_g_ParamLimits

0xfe3a,	// (0x00059b1d) lc0_stat_indi_pane_g

0xc3d1,	// (0x000560b4) lc0_uni_indicator_pane_ParamLimits

0xc3d1,	// (0x000560b4) lc0_uni_indicator_pane

0xdf5b,	// (0x00057c3e) ls0_title_pane_g1_ParamLimits

0xdf5b,	// (0x00057c3e) ls0_title_pane_g1

0xdf6f,	// (0x00057c52) ls0_title_pane_t1_ParamLimits

0xdf6f,	// (0x00057c52) ls0_title_pane_t1

0xc3de,	// (0x000560c1) lc0_uni_indicator_pane_g1_ParamLimits

0xc3de,	// (0x000560c1) lc0_uni_indicator_pane_g1

0x7116,	// (0x00050df9) lc0_stat_clock_pane_t1

0x76cb,	// (0x000513ae) main_ai5_pane

0x7124,	// (0x00050e07) ai5_sk_pane_ParamLimits

0x7124,	// (0x00050e07) ai5_sk_pane

0xdf9d,	// (0x00057c80) cell_ai5_widget_pane_ParamLimits

0xdf9d,	// (0x00057c80) cell_ai5_widget_pane

0x7d05,	// (0x000519e8) aid_size_cell_widget_grid

0x7d13,	// (0x000519f6) bg_ai5_widget_pane_ParamLimits

0x7d13,	// (0x000519f6) bg_ai5_widget_pane

0x7d87,	// (0x00051a6a) cell_ai5_widget_pane_g2

0x7d97,	// (0x00051a7a) cell_ai5_widget_pane_g3

0x7dae,	// (0x00051a91) cell_ai5_widget_pane_g4

0x7dba,	// (0x00051a9d) cell_ai5_widget_pane_g5

0xe2f4,	// (0x00057fd7) cell_ai5_widget_pane_g6

0xe300,	// (0x00057fe3) cell_ai5_widget_pane_g7

0x7e1a,	// (0x00051afd) cell_ai5_widget_pane_t1_ParamLimits

0x7e1a,	// (0x00051afd) cell_ai5_widget_pane_t1

0x7e37,	// (0x00051b1a) cell_ai5_widget_pane_t2_ParamLimits

0x7e37,	// (0x00051b1a) cell_ai5_widget_pane_t2

0x7e4f,	// (0x00051b32) cell_ai5_widget_pane_t3_ParamLimits

0x7e4f,	// (0x00051b32) cell_ai5_widget_pane_t3

0x7e67,	// (0x00051b4a) cell_ai5_widget_pane_t4_ParamLimits

0x7e67,	// (0x00051b4a) cell_ai5_widget_pane_t4

0x7e84,	// (0x00051b67) cell_ai5_widget_pane_t5_ParamLimits

0x7e84,	// (0x00051b67) cell_ai5_widget_pane_t5

0x7ea3,	// (0x00051b86) cell_ai5_widget_pane_t6_ParamLimits

0x7ea3,	// (0x00051b86) cell_ai5_widget_pane_t6

0x7eb5,	// (0x00051b98) cell_ai5_widget_pane_t7_ParamLimits

0x7eb5,	// (0x00051b98) cell_ai5_widget_pane_t7

0x7ece,	// (0x00051bb1) cell_ai5_widget_pane_t8_ParamLimits

0x7ece,	// (0x00051bb1) cell_ai5_widget_pane_t8

0x0009,

0xfe54,	// (0x00059b37) cell_ai5_widget_pane_t_ParamLimits

0xfe54,	// (0x00059b37) cell_ai5_widget_pane_t

0x7f22,	// (0x00051c05) grid_ai5_widget_pane

0xa23e,	// (0x00053f21) highlight_cell_ai5_widget_pane_ParamLimits

0xa23e,	// (0x00053f21) highlight_cell_ai5_widget_pane

0xe30c,	// (0x00057fef) ai5_sk_left_pane

0xe316,	// (0x00057ff9) ai5_sk_middle_pane

0xe320,	// (0x00058003) ai5_sk_right_pane

0x7f4e,	// (0x00051c31) bg_ai5_widget_pane_g1_ParamLimits

0x7f4e,	// (0x00051c31) bg_ai5_widget_pane_g1

0x7f5a,	// (0x00051c3d) bg_ai5_widget_pane_g2_ParamLimits

0x7f5a,	// (0x00051c3d) bg_ai5_widget_pane_g2

0x7f66,	// (0x00051c49) bg_ai5_widget_pane_g3_ParamLimits

0x7f66,	// (0x00051c49) bg_ai5_widget_pane_g3

0x7f72,	// (0x00051c55) bg_ai5_widget_pane_g4_ParamLimits

0x7f72,	// (0x00051c55) bg_ai5_widget_pane_g4

0x7f7e,	// (0x00051c61) bg_ai5_widget_pane_g5_ParamLimits

0x7f7e,	// (0x00051c61) bg_ai5_widget_pane_g5

0x7f8a,	// (0x00051c6d) bg_ai5_widget_pane_g6_ParamLimits

0x7f8a,	// (0x00051c6d) bg_ai5_widget_pane_g6

0x7f96,	// (0x00051c79) bg_ai5_widget_pane_g7_ParamLimits

0x7f96,	// (0x00051c79) bg_ai5_widget_pane_g7

0x7fa2,	// (0x00051c85) bg_ai5_widget_pane_g8_ParamLimits

0x7fa2,	// (0x00051c85) bg_ai5_widget_pane_g8

0x7fae,	// (0x00051c91) bg_ai5_widget_pane_g9_ParamLimits

0x7fae,	// (0x00051c91) bg_ai5_widget_pane_g9

0x0008,

0xfe69,	// (0x00059b4c) bg_ai5_widget_pane_g_ParamLimits

0xfe69,	// (0x00059b4c) bg_ai5_widget_pane_g

0x7fe6,	// (0x00051cc9) cell_shortcut_ai5_widget_pane_ParamLimits

0x7fe6,	// (0x00051cc9) cell_shortcut_ai5_widget_pane

0xc5f1,	// (0x000562d4) bg_cell_shortcut_ai5_widget_pane

0x7ff9,	// (0x00051cdc) cell_grid_ai5_widget_pane_g1

0xc5f1,	// (0x000562d4) highlight_cell_shortcut_ai5_widget_pane

0x254e,	// (0x0004c231) ai5_sk_left_pane_g1

0x8002,	// (0x00051ce5) ai5_sk_left_pane_g2

0x800a,	// (0x00051ced) ai5_sk_left_pane_g3

0x8012,	// (0x00051cf5) ai5_sk_left_pane_g4

0x0003,

0xfe7c,	// (0x00059b5f) ai5_sk_left_pane_g

0x801a,	// (0x00051cfd) ai5_sk_left_pane_t1

0x2546,	// (0x0004c229) ai5_sk_right_pane_g1

0x8028,	// (0x00051d0b) ai5_sk_right_pane_g2

0x8030,	// (0x00051d13) ai5_sk_right_pane_g3

0x8038,	// (0x00051d1b) ai5_sk_right_pane_g4

0x0003,

0xfe85,	// (0x00059b68) ai5_sk_right_pane_g

0x8040,	// (0x00051d23) ai5_sk_right_pane_t1

0x2546,	// (0x0004c229) ai5_sk_middle_pane_g1

0x254e,	// (0x0004c231) ai5_sk_middle_pane_g2

0x2566,	// (0x0004c249) ai5_sk_middle_pane_g3

0x8030,	// (0x00051d13) ai5_sk_middle_pane_g4

0x800a,	// (0x00051ced) ai5_sk_middle_pane_g5

0x804e,	// (0x00051d31) ai5_sk_middle_pane_g6

0xe32a,	// (0x0005800d) ai5_sk_middle_pane_g7

0x0006,

0xfe8e,	// (0x00059b71) ai5_sk_middle_pane_g

0xb97b,	// (0x0005565e) aid_touch_area_size_lc0_ParamLimits

0xb97b,	// (0x0005565e) aid_touch_area_size_lc0

0x0ff5,	// (0x0004acd8) cell_hwr_candidate_pane_t1_ParamLimits

0x2076,	// (0x0004bd59) aid_touch_navi_pane

0xbc21,	// (0x00055904) status_dt_navi_pane_ParamLimits

0xbc21,	// (0x00055904) status_dt_navi_pane

0xbc39,	// (0x0005591c) status_dt_sta_pane_ParamLimits

0xbc39,	// (0x0005591c) status_dt_sta_pane

0xe332,	// (0x00058015) dt_sta_controll_pane

0xe33f,	// (0x00058022) dt_sta_indi_pane

0xe34c,	// (0x0005802f) dt_sta_title_pane

0x787a,	// (0x0005155d) bg_dt_sta_indi_pane_ParamLimits

0x787a,	// (0x0005155d) bg_dt_sta_indi_pane

0xe35e,	// (0x00058041) dt_sta_battery_pane

0xe366,	// (0x00058049) dt_sta_indi_pane_g1

0xe36f,	// (0x00058052) dt_sta_indi_pane_g2

0xe378,	// (0x0005805b) dt_sta_indi_pane_g3

0x0002,

0xfe9d,	// (0x00059b80) dt_sta_indi_pane_g

0xe381,	// (0x00058064) dt_sta_signal_pane

0xa23e,	// (0x00053f21) bg_dt_sta_title_pane_ParamLimits

0xa23e,	// (0x00053f21) bg_dt_sta_title_pane

0xe38a,	// (0x0005806d) dt_sta_title_pane_g1

0xe392,	// (0x00058075) dt_sta_title_pane_t1_ParamLimits

0xe392,	// (0x00058075) dt_sta_title_pane_t1

0x76cb,	// (0x000513ae) bg_dt_sta_control_pane

0xe3a7,	// (0x0005808a) dt_sta_controll_pane_g1

0xe3b0,	// (0x00058093) bg_dt_sta_title_pane_g1

0xe3b9,	// (0x0005809c) bg_dt_sta_title_pane_g2

0xe3c2,	// (0x000580a5) bg_dt_sta_title_pane_g3

0x0002,

0xfea4,	// (0x00059b87) bg_dt_sta_title_pane_g

0x4b82,	// (0x0004e865) bg_dt_sta_indi_pane_g1

0x80fc,	// (0x00051ddf) dt_sta_signal_pane_g1

0x8104,	// (0x00051de7) dt_sta_signal_pane_g2

0x0001,

0xfeab,	// (0x00059b8e) dt_sta_signal_pane_g

0x810c,	// (0x00051def) dt_sta_battery_pane_g1

0x8115,	// (0x00051df8) dt_sta_battery_pane_t1

0x4b82,	// (0x0004e865) bg_dt_sta_control_pane_g1

0xaa17,	// (0x000546fa) fep_china_uni_eep_pane

0xaa1f,	// (0x00054702) fep_china_uni_entry_pane_ParamLimits

0xaa2f,	// (0x00054712) popup_fep_china_uni_window_g1_ParamLimits

0xaa3f,	// (0x00054722) popup_fep_china_uni_window_g2_ParamLimits

0xaa3f,	// (0x00054722) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x00059405) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x00059405) popup_fep_china_uni_window_g

0x8124,	// (0x00051e07) fep_china_uni_eep_pane_g1

0x812c,	// (0x00051e0f) fep_china_uni_eep_pane_t1

0x7093,	// (0x00050d76) aid_touch_area_size_smil_player

0x21ce,	// (0x0004beb1) lc0_clock_pane

0x23cd,	// (0x0004c0b0) status_pane_g5_ParamLimits

0x23cd,	// (0x0004c0b0) status_pane_g5

0xb3d0,	// (0x000550b3) popup_keymap_window

0x238b,	// (0x0004c06e) status_icon_pane

0x7d97,	// (0x00051a7a) cell_ai5_widget_pane_g3_ParamLimits

0x7dae,	// (0x00051a91) cell_ai5_widget_pane_g4_ParamLimits

0x7dba,	// (0x00051a9d) cell_ai5_widget_pane_g5_ParamLimits

0x7dde,	// (0x00051ac1) cell_ai5_widget_pane_g8_ParamLimits

0x7dde,	// (0x00051ac1) cell_ai5_widget_pane_g8

0x7df2,	// (0x00051ad5) cell_ai5_widget_pane_g9_ParamLimits

0x7df2,	// (0x00051ad5) cell_ai5_widget_pane_g9

0x7e06,	// (0x00051ae9) cell_ai5_widget_pane_g10_ParamLimits

0x7e06,	// (0x00051ae9) cell_ai5_widget_pane_g10

0x813b,	// (0x00051e1e) status_icon_pane_g1

0x76cb,	// (0x000513ae) bg_popup_sub_pane_cp13

0x8143,	// (0x00051e26) popup_keymap_window_t1

0xb0bf,	// (0x00054da2) control_pane_g6_ParamLimits

0xb0bf,	// (0x00054da2) control_pane_g6

0xb0cc,	// (0x00054daf) control_pane_g7_ParamLimits

0xb0cc,	// (0x00054daf) control_pane_g7

0xb0d9,	// (0x00054dbc) control_pane_g8_ParamLimits

0xb0d9,	// (0x00054dbc) control_pane_g8

0xe332,	// (0x00058015) dt_sta_controll_pane_ParamLimits

0xe33f,	// (0x00058022) dt_sta_indi_pane_ParamLimits

0xe34c,	// (0x0005802f) dt_sta_title_pane_ParamLimits

0x7c9e,	// (0x00051981) aid_size_touch_scroll_bar_cale

0xf08c,	// (0x00058d6f) popup_discreet_window_ParamLimits

0xf08c,	// (0x00058d6f) popup_discreet_window

0x9cd7,	// (0x000539ba) popup_sk_window

0x2b8e,	// (0x0004c871) bg_popup_sub_pane_cp28_ParamLimits

0x2b8e,	// (0x0004c871) bg_popup_sub_pane_cp28

0x8151,	// (0x00051e34) popup_discreet_window_g1_ParamLimits

0x8151,	// (0x00051e34) popup_discreet_window_g1

0x8171,	// (0x00051e54) popup_discreet_window_t1_ParamLimits

0x8171,	// (0x00051e54) popup_discreet_window_t1

0x818f,	// (0x00051e72) popup_discreet_window_t2_ParamLimits

0x818f,	// (0x00051e72) popup_discreet_window_t2

0x0002,

0xfeb0,	// (0x00059b93) popup_discreet_window_t_ParamLimits

0xfeb0,	// (0x00059b93) popup_discreet_window_t

0x1a50,	// (0x0004b733) popup_sk_window_g1

0x1a5a,	// (0x0004b73d) popup_sk_window_g2

0x0001,

0xfeb7,	// (0x00059b9a) popup_sk_window_g

0x1a64,	// (0x0004b747) popup_sk_window_t1

0x1a74,	// (0x0004b757) popup_sk_window_t1_copy1

0x7d87,	// (0x00051a6a) cell_ai5_widget_pane_g2_ParamLimits

0x7ee0,	// (0x00051bc3) cell_ai5_widget_pane_t9_ParamLimits

0x7ee0,	// (0x00051bc3) cell_ai5_widget_pane_t9

0x76cb,	// (0x000513ae) main_fep_fshwr2_pane

0xc3fd,	// (0x000560e0) aid_fshwr2_btn_pane

0xc40e,	// (0x000560f1) aid_fshwr2_syb_pane

0xc41f,	// (0x00056102) aid_fshwr2_txt_pane

0xc42b,	// (0x0005610e) fshwr2_func_candi_pane

0xc44c,	// (0x0005612f) fshwr2_hwr_syb_pane

0xc469,	// (0x0005614c) fshwr2_icf_pane

0x76cb,	// (0x000513ae) fshwr2_icf_bg_pane

0x1af6,	// (0x0004b7d9) fshwr2_icf_pane_t1_ParamLimits

0x1af6,	// (0x0004b7d9) fshwr2_icf_pane_t1

0xa8f0,	// (0x000545d3) fshwr2_func_candi_pane_g1

0xe3cb,	// (0x000580ae) fshwr2_func_candi_row_pane_ParamLimits

0xe3cb,	// (0x000580ae) fshwr2_func_candi_row_pane

0xc495,	// (0x00056178) cell_fshwr2_syb_pane_ParamLimits

0xc495,	// (0x00056178) cell_fshwr2_syb_pane

0x4dfd,	// (0x0004eae0) fshwr2_hwr_syb_pane_g1_ParamLimits

0x4dfd,	// (0x0004eae0) fshwr2_hwr_syb_pane_g1

0x76cb,	// (0x000513ae) bg_popup_call_pane_cp01

0xc4ab,	// (0x0005618e) fshwr2_func_candi_cell_pane_ParamLimits

0xc4ab,	// (0x0005618e) fshwr2_func_candi_cell_pane

0xe3e7,	// (0x000580ca) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe3e7,	// (0x000580ca) fshwr2_func_candi_cell_bg_pane

0xc4f1,	// (0x000561d4) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc4f1,	// (0x000561d4) fshwr2_func_candi_cell_pane_g1

0xc528,	// (0x0005620b) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc528,	// (0x0005620b) fshwr2_func_candi_cell_pane_t1

0x76cb,	// (0x000513ae) bg_button_pane_cp08

0x81fd,	// (0x00051ee0) cell_fshwr2_syb_bg_pane

0xc543,	// (0x00056226) cell_fshwr2_syb_bg_pane_g1

0xc54b,	// (0x0005622e) cell_fshwr2_syb_bg_pane_t1

0xa23e,	// (0x00053f21) main_tmo_pane

0xc8cc,	// (0x000565af) uni_indicator_pane_g1_ParamLimits

0xc8e2,	// (0x000565c5) uni_indicator_pane_g2_ParamLimits

0xc8f8,	// (0x000565db) uni_indicator_pane_g3_ParamLimits

0xc90d,	// (0x000565f0) uni_indicator_pane_g4_ParamLimits

0xc90d,	// (0x000565f0) uni_indicator_pane_g4

0x3707,	// (0x0004d3ea) uni_indicator_pane_g5_ParamLimits

0x3707,	// (0x0004d3ea) uni_indicator_pane_g5

0x3707,	// (0x0004d3ea) uni_indicator_pane_g6_ParamLimits

0x3707,	// (0x0004d3ea) uni_indicator_pane_g6

0xf921,	// (0x00059604) uni_indicator_pane_g_ParamLimits

0xd40a,	// (0x000570ed) popup_tmo_note_window_ParamLimits

0xd40a,	// (0x000570ed) popup_tmo_note_window

0xa23e,	// (0x00053f21) fshwr2_bg_pane

0xc519,	// (0x000561fc) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc519,	// (0x000561fc) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebc,	// (0x00059b9f) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebc,	// (0x00059b9f) fshwr2_func_candi_cell_pane_g

0x4b82,	// (0x0004e865) bg_popup_window_pane_cp01

0x1bb8,	// (0x0004b89b) bg_popup_window_pane_g1_cp01

0x8205,	// (0x00051ee8) bg_popup_window_pane_cp22_ParamLimits

0x8205,	// (0x00051ee8) bg_popup_window_pane_cp22

0x8213,	// (0x00051ef6) listscroll_tmo_link_pane_ParamLimits

0x8213,	// (0x00051ef6) listscroll_tmo_link_pane

0x8253,	// (0x00051f36) popup_tmo_note_window_g1_ParamLimits

0x8253,	// (0x00051f36) popup_tmo_note_window_g1

0x8260,	// (0x00051f43) tmo_note_info_pane_ParamLimits

0x8260,	// (0x00051f43) tmo_note_info_pane

0xe3f3,	// (0x000580d6) list_tmo_note_info_pane_g1_ParamLimits

0xe3f3,	// (0x000580d6) list_tmo_note_info_pane_g1

0x8291,	// (0x00051f74) list_tmo_note_info_pane_g2_ParamLimits

0x8291,	// (0x00051f74) list_tmo_note_info_pane_g2

0x0001,

0xfec1,	// (0x00059ba4) list_tmo_note_info_pane_g_ParamLimits

0xfec1,	// (0x00059ba4) list_tmo_note_info_pane_g

0x82ad,	// (0x00051f90) list_tmo_note_info_text_pane_ParamLimits

0x82ad,	// (0x00051f90) list_tmo_note_info_text_pane

0x8332,	// (0x00052015) list_tmo_link_pane

0x833f,	// (0x00052022) scroll_pane_cp20

0x834c,	// (0x0005202f) list_single_tmo_link_pane_ParamLimits

0x834c,	// (0x0005202f) list_single_tmo_link_pane

0x835c,	// (0x0005203f) list_single_tmo_link_pane_t1

0x836a,	// (0x0005204d) list_tmo_note_info_text_pane_t1_ParamLimits

0x836a,	// (0x0005204d) list_tmo_note_info_text_pane_t1

0xa2f8,	// (0x00053fdb) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa2f8,	// (0x00053fdb) aid_size_touch_scroll_bar_cp01

0x9898,	// (0x0005357b) aid_size_touch_slider_marker

0x9cc7,	// (0x000539aa) popup_settings_window_ParamLimits

0x9cc7,	// (0x000539aa) popup_settings_window

0xe988,	// (0x0005866b) popup_candi_list_indi_window

0x2076,	// (0x0004bd59) aid_touch_navi_pane_ParamLimits

0x124f,	// (0x0004af32) rs_clock_indi_pane

0x1258,	// (0x0004af3b) sctrl_sk_bottom_pane_ParamLimits

0x1269,	// (0x0004af4c) sctrl_sk_top_pane_ParamLimits

0x1352,	// (0x0004b035) popup_fep_tooltip_window

0x7d05,	// (0x000519e8) aid_size_cell_widget_grid_ParamLimits

0x7d72,	// (0x00051a55) cell_ai5_widget_pane_g1_ParamLimits

0x7d72,	// (0x00051a55) cell_ai5_widget_pane_g1

0xe2f4,	// (0x00057fd7) cell_ai5_widget_pane_g6_ParamLimits

0xe300,	// (0x00057fe3) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3f,	// (0x00059b22) cell_ai5_widget_pane_g_ParamLimits

0xfe3f,	// (0x00059b22) cell_ai5_widget_pane_g

0x7f04,	// (0x00051be7) cell_ai5_widget_pane_t10_ParamLimits

0x7f04,	// (0x00051be7) cell_ai5_widget_pane_t10

0x7f22,	// (0x00051c05) grid_ai5_widget_pane_ParamLimits

0x7fba,	// (0x00051c9d) cell_contacts_ai5_widget_pane_ParamLimits

0x7fba,	// (0x00051c9d) cell_contacts_ai5_widget_pane

0x81a4,	// (0x00051e87) popup_discreet_window_t3_ParamLimits

0x81a4,	// (0x00051e87) popup_discreet_window_t3

0xc481,	// (0x00056164) popup_fshwr2_char_preview_window_ParamLimits

0xc481,	// (0x00056164) popup_fshwr2_char_preview_window

0xe40a,	// (0x000580ed) tmo_note_info_pane_t1

0xe41f,	// (0x00058102) tmo_note_info_pane_t2

0xe438,	// (0x0005811b) tmo_note_info_pane_t3

0x830e,	// (0x00051ff1) tmo_note_info_pane_t4

0x8320,	// (0x00052003) tmo_note_info_pane_t5

0x0004,

0xfec6,	// (0x00059ba9) tmo_note_info_pane_t

0x8332,	// (0x00052015) list_tmo_link_pane_ParamLimits

0x833f,	// (0x00052022) scroll_pane_cp20_ParamLimits

0x76cb,	// (0x000513ae) bg_popup_fep_char_preview_window_cp01

0x8383,	// (0x00052066) popup_fshwr2_char_preview_window_t1

0x8391,	// (0x00052074) popup_candi_list_indi_window_g1

0x839a,	// (0x0005207d) bg_cell_contacts_ai5_widget_pane

0x83a6,	// (0x00052089) cell_contacts_ai5_widget_pane_g1

0x83bb,	// (0x0005209e) cell_contacts_ai5_widget_pane_g2

0x83c7,	// (0x000520aa) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed1,	// (0x00059bb4) cell_contacts_ai5_widget_pane_g

0x83d3,	// (0x000520b6) cell_contacts_ai5_widget_pane_t1

0xa23e,	// (0x00053f21) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe4b2,	// (0x00058195) settings_container_pane

0xc5f1,	// (0x000562d4) listscroll_set_pane_copy1

0x42a3,	// (0x0004df86) scroll_pane_cp121_copy1

0x8456,	// (0x00052139) set_content_pane_copy1

0xe4be,	// (0x000581a1) aid_height_set_list_copy1_ParamLimits

0xe4be,	// (0x000581a1) aid_height_set_list_copy1

0x3907,	// (0x0004d5ea) aid_size_parent_copy1_ParamLimits

0x3907,	// (0x0004d5ea) aid_size_parent_copy1

0xe4ca,	// (0x000581ad) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe4ca,	// (0x000581ad) button_value_adjust_pane_cp6_copy1

0x046b,	// (0x0004a14e) list_highlight_pane_cp2_copy1_ParamLimits

0x046b,	// (0x0004a14e) list_highlight_pane_cp2_copy1

0xe4de,	// (0x000581c1) list_set_pane_copy1_ParamLimits

0xe4de,	// (0x000581c1) list_set_pane_copy1

0xe44d,	// (0x00058130) main_pane_set_t1_copy1_ParamLimits

0xe44d,	// (0x00058130) main_pane_set_t1_copy1

0xe487,	// (0x0005816a) main_pane_set_t2_copy1_ParamLimits

0xe487,	// (0x0005816a) main_pane_set_t2_copy1

0xe5a5,	// (0x00058288) main_pane_set_t3_copy1

0xe5b3,	// (0x00058296) main_pane_set_t4_copy1

0xe4a6,	// (0x00058189) set_content_pane_g1_copy1_ParamLimits

0xe4a6,	// (0x00058189) set_content_pane_g1_copy1

0xe5c1,	// (0x000582a4) setting_code_pane_copy1

0x8569,	// (0x0005224c) setting_slider_graphic_pane_copy1

0x8569,	// (0x0005224c) setting_slider_pane_copy1

0x8569,	// (0x0005224c) setting_text_pane_copy1

0x8569,	// (0x0005224c) setting_volume_pane_copy1

0xe5c1,	// (0x000582a4) settings_code_pane_cp2_copy1

0xe5c9,	// (0x000582ac) settings_code_pane_cp_copy1_ParamLimits

0xe5c9,	// (0x000582ac) settings_code_pane_cp_copy1

0xc55a,	// (0x0005623d) volume_set_pane_copy1

0xe5dd,	// (0x000582c0) volume_set_pane_g10_copy1

0xe5e9,	// (0x000582cc) volume_set_pane_g1_copy1

0xe5f3,	// (0x000582d6) volume_set_pane_g2_copy1

0xe5fd,	// (0x000582e0) volume_set_pane_g3_copy1

0xe607,	// (0x000582ea) volume_set_pane_g4_copy1

0xe611,	// (0x000582f4) volume_set_pane_g5_copy1

0xe61b,	// (0x000582fe) volume_set_pane_g6_copy1

0xe625,	// (0x00058308) volume_set_pane_g7_copy1

0xe62f,	// (0x00058312) volume_set_pane_g8_copy1

0xe639,	// (0x0005831c) volume_set_pane_g9_copy1

0x7739,	// (0x0005141c) bg_set_opt_pane_cp_copy1_ParamLimits

0x7739,	// (0x0005141c) bg_set_opt_pane_cp_copy1

0x1bcd,	// (0x0004b8b0) setting_slider_pane_t1_copy1_ParamLimits

0x1bcd,	// (0x0004b8b0) setting_slider_pane_t1_copy1

0xc566,	// (0x00056249) setting_slider_pane_t2_copy1_ParamLimits

0xc566,	// (0x00056249) setting_slider_pane_t2_copy1

0xc580,	// (0x00056263) setting_slider_pane_t3_copy1_ParamLimits

0xc580,	// (0x00056263) setting_slider_pane_t3_copy1

0xc598,	// (0x0005627b) slider_set_pane_copy1_ParamLimits

0xc598,	// (0x0005627b) slider_set_pane_copy1

0xa299,	// (0x00053f7c) set_opt_bg_pane_g1_copy2

0xa2a1,	// (0x00053f84) set_opt_bg_pane_g2_copy2

0x85eb,	// (0x000522ce) set_opt_bg_pane_g3_copy2

0xa2b1,	// (0x00053f94) set_opt_bg_pane_g4_copy2

0xa2b9,	// (0x00053f9c) set_opt_bg_pane_g5_copy2

0xa2c1,	// (0x00053fa4) set_opt_bg_pane_g6_copy2

0xe643,	// (0x00058326) set_opt_bg_pane_g7_copy2

0x85ff,	// (0x000522e2) set_opt_bg_pane_g8_copy2

0x8609,	// (0x000522ec) set_opt_bg_pane_g9_copy2

0x1c33,	// (0x0004b916) aid_size_touch_slider_mark_copy1_ParamLimits

0x1c33,	// (0x0004b916) aid_size_touch_slider_mark_copy1

0x8613,	// (0x000522f6) slider_set_pane_g1_copy1

0x1c47,	// (0x0004b92a) slider_set_pane_g2_copy1

0x0b57,	// (0x0004a83a) slider_set_pane_g3_copy1_ParamLimits

0x0b57,	// (0x0004a83a) slider_set_pane_g3_copy1

0x0b6b,	// (0x0004a84e) slider_set_pane_g4_copy1_ParamLimits

0x0b6b,	// (0x0004a84e) slider_set_pane_g4_copy1

0x0b83,	// (0x0004a866) slider_set_pane_g5_copy1_ParamLimits

0x0b83,	// (0x0004a866) slider_set_pane_g5_copy1

0x0b57,	// (0x0004a83a) slider_set_pane_g6_copy1_ParamLimits

0x0b57,	// (0x0004a83a) slider_set_pane_g6_copy1

0xc5ae,	// (0x00056291) slider_set_pane_g7_copy1_ParamLimits

0xc5ae,	// (0x00056291) slider_set_pane_g7_copy1

0x76df,	// (0x000513c2) bg_set_opt_pane_cp2_copy1

0x861c,	// (0x000522ff) setting_slider_graphic_pane_g1_copy1

0xe64d,	// (0x00058330) setting_slider_graphic_pane_t1_copy1

0xe65d,	// (0x00058340) setting_slider_graphic_pane_t2_copy1

0xe66d,	// (0x00058350) slider_set_pane_cp_copy1

0x8655,	// (0x00052338) input_focus_pane_cp1_copy1

0x865e,	// (0x00052341) list_set_text_pane_copy1

0x8666,	// (0x00052349) setting_text_pane_g1_copy1

0xe6ce,	// (0x000583b1) set_text_pane_t1_copy1

0x8655,	// (0x00052338) input_focus_pane_cp2_copy1

0x8666,	// (0x00052349) setting_code_pane_g1_copy1

0xe675,	// (0x00058358) setting_code_pane_t1_copy1

0xe683,	// (0x00058366) list_set_graphic_pane_copy1

0x76df,	// (0x000513c2) bg_set_opt_pane_cp4_copy1

0xac29,	// (0x0005490c) list_set_graphic_pane_g1_copy1_ParamLimits

0xac29,	// (0x0005490c) list_set_graphic_pane_g1_copy1

0xe695,	// (0x00058378) list_set_graphic_pane_g2_copy1

0xac41,	// (0x00054924) list_set_graphic_pane_t1_copy1_ParamLimits

0xac41,	// (0x00054924) list_set_graphic_pane_t1_copy1

0x4b82,	// (0x0004e865) rs_clock_indi_pane_g1

0x8697,	// (0x0005237a) rs_clock_indi_pane_t1

0x86a5,	// (0x00052388) rs_indi_pane

0x86ad,	// (0x00052390) rs_indi_pane_g1

0x86b6,	// (0x00052399) rs_indi_pane_g2

0x86bf,	// (0x000523a2) rs_indi_pane_g3

0x0002,

0xfed8,	// (0x00059bbb) rs_indi_pane_g

0xc5f1,	// (0x000562d4) bg_popup_preview_window_pane_cp03

0x86c8,	// (0x000523ab) popup_fep_tooltip_window_t1

0x5839,	// (0x0004f51c) popup_note2_window_g2_ParamLimits

0x5839,	// (0x0004f51c) popup_note2_window_g2

0x0001,

0xfc71,	// (0x00059954) popup_note2_window_g_ParamLimits

0xfc71,	// (0x00059954) popup_note2_window_g

0x5d41,	// (0x0004fa24) bg_popup_sub_pane_cp11_ParamLimits

0x5d4e,	// (0x0004fa31) cell_ai3_links_pane_g1_ParamLimits

0x5d65,	// (0x0004fa48) cell_ai3_links_pane_t1

0xe6ce,	// (0x000583b1) set_text_pane_t1_copy1_ParamLimits

0xae47,	// (0x00054b2a) cell_graphic_popup_pane_cp2_ParamLimits

0xae47,	// (0x00054b2a) cell_graphic_popup_pane_cp2

0xe69d,	// (0x00058380) cell_graphic_popup_pane_g1_cp2

0x7ab1,	// (0x00051794) cell_graphic_popup_pane_g2_cp2

0x86de,	// (0x000523c1) cell_graphic_popup_pane_g3_cp2

0x86e6,	// (0x000523c9) cell_graphic_popup_pane_t2_cp2

0x7ac2,	// (0x000517a5) grid_highlight_pane_cp3_cp2

0xa5cb,	// (0x000542ae) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xa23e,	// (0x00053f21) main_tmo_pane_ParamLimits

0xd3fe,	// (0x000570e1) popup_tmo_big_image_note_window

0x7d61,	// (0x00051a44) cell_ai5_widget_list_pane

0x7d69,	// (0x00051a4c) cell_ai5_widget_lrg_icon_pane

0xe40a,	// (0x000580ed) tmo_note_info_pane_t1_ParamLimits

0xe41f,	// (0x00058102) tmo_note_info_pane_t2_ParamLimits

0xe438,	// (0x0005811b) tmo_note_info_pane_t3_ParamLimits

0x830e,	// (0x00051ff1) tmo_note_info_pane_t4_ParamLimits

0x8320,	// (0x00052003) tmo_note_info_pane_t5_ParamLimits

0xfec6,	// (0x00059ba9) tmo_note_info_pane_t_ParamLimits

0xe4b2,	// (0x00058195) settings_container_pane_ParamLimits

0x864d,	// (0x00052330) indicator_popup_pane_cp5

0x864d,	// (0x00052330) indicator_popup_pane_cp6

0xe683,	// (0x00058366) list_set_graphic_pane_copy1_ParamLimits

0x76cb,	// (0x000513ae) bg_popup_window_pane_cp23

0x86f4,	// (0x000523d7) popup_tmo_big_image_note_window_g1

0x8700,	// (0x000523e3) popup_tmo_big_image_note_window_t1

0x8710,	// (0x000523f3) popup_tmo_big_image_note_window_t2

0x8720,	// (0x00052403) popup_tmo_big_image_note_window_t3

0x0002,

0xfedf,	// (0x00059bc2) popup_tmo_big_image_note_window_t

0x4b82,	// (0x0004e865) cell_ai5_widget_lrg_icon_pane_g1

0x8730,	// (0x00052413) cell_ai5_widget_lrg_icon_pane_t1

0x873e,	// (0x00052421) cell_ai5_widget_list_row_pane_ParamLimits

0x873e,	// (0x00052421) cell_ai5_widget_list_row_pane

0x8756,	// (0x00052439) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x8756,	// (0x00052439) cell_ai5_widget_list_row_pane_g1

0x8763,	// (0x00052446) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x8763,	// (0x00052446) cell_ai5_widget_list_row_pane_t1

0x878e,	// (0x00052471) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x878e,	// (0x00052471) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee6,	// (0x00059bc9) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee6,	// (0x00059bc9) cell_ai5_widget_list_row_pane_t

0x76cb,	// (0x000513ae) main_fep_vtchi_ss_pane

0x87d2,	// (0x000524b5) popup_fep_char_pre_window

0x87da,	// (0x000524bd) popup_fep_ituss_window

0x87fb,	// (0x000524de) popup_fep_vkbss_window

0x881c,	// (0x000524ff) grid_vkbss_keypad_pane_ParamLimits

0x881c,	// (0x000524ff) grid_vkbss_keypad_pane

0x882c,	// (0x0005250f) ituss_keypad_pane

0x1c71,	// (0x0004b954) aid_vkbss_key_offset_ParamLimits

0x1c71,	// (0x0004b954) aid_vkbss_key_offset

0x1c7d,	// (0x0004b960) cell_vkbss_key_pane_ParamLimits

0x1c7d,	// (0x0004b960) cell_vkbss_key_pane

0x883b,	// (0x0005251e) bg_cell_vkbss_key_g1_ParamLimits

0x883b,	// (0x0005251e) bg_cell_vkbss_key_g1

0x8847,	// (0x0005252a) cell_vkbss_key_3p_pane_ParamLimits

0x8847,	// (0x0005252a) cell_vkbss_key_3p_pane

0x8861,	// (0x00052544) cell_vkbss_key_g1_ParamLimits

0x8861,	// (0x00052544) cell_vkbss_key_g1

0x887b,	// (0x0005255e) cell_vkbss_key_t1_ParamLimits

0x887b,	// (0x0005255e) cell_vkbss_key_t1

0x1c93,	// (0x0004b976) cell_ituss_key_pane_ParamLimits

0x1c93,	// (0x0004b976) cell_ituss_key_pane

0x88a6,	// (0x00052589) bg_cell_ituss_key_g1_ParamLimits

0x88a6,	// (0x00052589) bg_cell_ituss_key_g1

0x88b2,	// (0x00052595) cell_ituss_key_pane_g1_ParamLimits

0x88b2,	// (0x00052595) cell_ituss_key_pane_g1

0x1ca4,	// (0x0004b987) cell_ituss_key_pane_g2_ParamLimits

0x1ca4,	// (0x0004b987) cell_ituss_key_pane_g2

0x0002,

0xfeed,	// (0x00059bd0) cell_ituss_key_pane_g_ParamLimits

0xfeed,	// (0x00059bd0) cell_ituss_key_pane_g

0x1cd0,	// (0x0004b9b3) cell_ituss_key_t1_ParamLimits

0x1cd0,	// (0x0004b9b3) cell_ituss_key_t1

0x1d0a,	// (0x0004b9ed) cell_ituss_key_t2_ParamLimits

0x1d0a,	// (0x0004b9ed) cell_ituss_key_t2

0x1d3b,	// (0x0004ba1e) cell_ituss_key_t3_ParamLimits

0x1d3b,	// (0x0004ba1e) cell_ituss_key_t3

0x1d0a,	// (0x0004b9ed) cell_ituss_key_t4_ParamLimits

0x1d0a,	// (0x0004b9ed) cell_ituss_key_t4

0x0004,

0xfef4,	// (0x00059bd7) cell_ituss_key_t_ParamLimits

0xfef4,	// (0x00059bd7) cell_ituss_key_t

0x88d8,	// (0x000525bb) cell_vkbss_key_3p_pane_g1

0x88e0,	// (0x000525c3) cell_vkbss_key_3p_pane_g2

0x88e8,	// (0x000525cb) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeff,	// (0x00059be2) cell_vkbss_key_3p_pane_g

0x76cb,	// (0x000513ae) bg_popup_fep_char_preview_window_cp02

0x1d7e,	// (0x0004ba61) popup_fep_char_pre_window_t1

0xe2ea,	// (0x00057fcd) main_ai5_sk_pane

0x839a,	// (0x0005207d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x83a6,	// (0x00052089) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x83bb,	// (0x0005209e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x83c7,	// (0x000520aa) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed1,	// (0x00059bb4) cell_contacts_ai5_widget_pane_g_ParamLimits

0x83d3,	// (0x000520b6) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xa23e,	// (0x00053f21) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe6a5,	// (0x00058388) main_ai5_sk_pane_g1

0x29c6,	// (0x0004c6a9) popup_query_code_window_g1

0x87f0,	// (0x000524d3) popup_fep_vkb_icf_pane

0x8806,	// (0x000524e9) popup_fep_vtchi_icf_pane

0x88f9,	// (0x000525dc) bg_icf_pane

0x8905,	// (0x000525e8) list_vkb_icf_pane

0x8911,	// (0x000525f4) bg_icf_pane_cp01

0x8924,	// (0x00052607) vtchi_icf_list_pane

0x8935,	// (0x00052618) list_vkb_icf_pane_t1_ParamLimits

0x8935,	// (0x00052618) list_vkb_icf_pane_t1

0x894b,	// (0x0005262e) vtchi_icf_list_pane_t1_ParamLimits

0x894b,	// (0x0005262e) vtchi_icf_list_pane_t1

0x87da,	// (0x000524bd) popup_fep_ituss_window_ParamLimits

0x8806,	// (0x000524e9) popup_fep_vtchi_icf_pane_ParamLimits

0x882c,	// (0x0005250f) ituss_keypad_pane_ParamLimits

0x1c65,	// (0x0004b948) ituss_sks_pane

0x88f9,	// (0x000525dc) bg_icf_pane_ParamLimits

0x87b6,	// (0x00052499) icf_edit_indi_pane_ParamLimits

0x87b6,	// (0x00052499) icf_edit_indi_pane

0x8905,	// (0x000525e8) list_vkb_icf_pane_ParamLimits

0x8911,	// (0x000525f4) bg_icf_pane_cp01_ParamLimits

0x87c5,	// (0x000524a8) icf_edit_indi_pane_cp01_ParamLimits

0x87c5,	// (0x000524a8) icf_edit_indi_pane_cp01

0x892c,	// (0x0005260f) vtchi_query_pane

0x4dfd,	// (0x0004eae0) icf_edit_indi_pane_g1_ParamLimits

0x4dfd,	// (0x0004eae0) icf_edit_indi_pane_g1

0x89ba,	// (0x0005269d) icf_edit_indi_pane_g2_ParamLimits

0x89ba,	// (0x0005269d) icf_edit_indi_pane_g2

0x0001,

0xff17,	// (0x00059bfa) icf_edit_indi_pane_g_ParamLimits

0xff17,	// (0x00059bfa) icf_edit_indi_pane_g

0x89c9,	// (0x000526ac) icf_edit_indi_pane_t1

0x8963,	// (0x00052646) bg_input_focus_pane_cp042

0x7c95,	// (0x00051978) vtchi_button_pane

0x896c,	// (0x0005264f) vtchi_query_pane_t1

0x897a,	// (0x0005265d) vtchi_query_pane_t2

0x8988,	// (0x0005266b) vtchi_query_pane_t3

0x0002,

0xff06,	// (0x00059be9) vtchi_query_pane_t

0x76cb,	// (0x000513ae) bg_button_pane_cp13

0x8996,	// (0x00052679) vtchi_button_pane_g1

0x1d8d,	// (0x0004ba70) ituss_sks_pane_g1

0x1d98,	// (0x0004ba7b) ituss_sks_pane_g2

0x0001,

0xff0d,	// (0x00059bf0) ituss_sks_pane_g

0x899e,	// (0x00052681) ituss_sks_pane_t1

0x89ac,	// (0x0005268f) ituss_sks_pane_t2

0x0001,

0xff12,	// (0x00059bf5) ituss_sks_pane_t

0x4632,	// (0x0004e315) indicator_nsta_pane_cp_g1

0x463b,	// (0x0004e31e) indicator_nsta_pane_cp_g2

0x4643,	// (0x0004e326) indicator_nsta_pane_cp_g3

0x464b,	// (0x0004e32e) indicator_nsta_pane_cp_g4

0x4653,	// (0x0004e336) indicator_nsta_pane_cp_g5

0x465b,	// (0x0004e33e) indicator_nsta_pane_cp_g6

0x0005,

0xfabb,	// (0x0005979e) indicator_nsta_pane_cp_g

0xde0d,	// (0x00057af0) cell_graphic2_pane_t2_ParamLimits

0xde0d,	// (0x00057af0) cell_graphic2_pane_t2

0x0001,

0xfdc8,	// (0x00059aab) cell_graphic2_pane_t_ParamLimits

0xfdc8,	// (0x00059aab) cell_graphic2_pane_t

0xde43,	// (0x00057b26) cell_graphic2_control_pane_t1

0xa9c0,	// (0x000546a3) signal_pane_g3_ParamLimits

0xa9c0,	// (0x000546a3) signal_pane_g3

0xa9d4,	// (0x000546b7) signal_pane_g4_ParamLimits

0xa9d4,	// (0x000546b7) signal_pane_g4

0x87a0,	// (0x00052483) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x87a0,	// (0x00052483) cell_ai5_widget_list_row_pane_t3

0x88c6,	// (0x000525a9) cell_ituss_key_pane_t1_ParamLimits

0x88c6,	// (0x000525a9) cell_ituss_key_pane_t1

0x2643,	// (0x0004c326) form_field_data_wide_pane_vc_t2_ParamLimits

0x2643,	// (0x0004c326) form_field_data_wide_pane_vc_t2

0x2657,	// (0x0004c33a) form_field_data_wide_pane_vc_t3_ParamLimits

0x2657,	// (0x0004c33a) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x000594ec) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x000594ec) form_field_data_wide_pane_vc_t

0x42e3,	// (0x0004dfc6) form_field_slider_wide_pane_vc_t3_ParamLimits

0x42e3,	// (0x0004dfc6) form_field_slider_wide_pane_vc_t3

0x43b9,	// (0x0004e09c) form_field_popup_wide_pane_vc_t2_ParamLimits

0x43b9,	// (0x0004e09c) form_field_popup_wide_pane_vc_t2

0x43d0,	// (0x0004e0b3) form_field_popup_wide_pane_vc_t3_ParamLimits

0x43d0,	// (0x0004e0b3) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaaa,	// (0x0005978d) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaaa,	// (0x0005978d) form_field_popup_wide_pane_vc_t

0xc3fd,	// (0x000560e0) aid_fshwr2_btn_pane_ParamLimits

0xc40e,	// (0x000560f1) aid_fshwr2_syb_pane_ParamLimits

0xc41f,	// (0x00056102) aid_fshwr2_txt_pane_ParamLimits

0xa23e,	// (0x00053f21) fshwr2_bg_pane_ParamLimits

0xc42b,	// (0x0005610e) fshwr2_func_candi_pane_ParamLimits

0xc44c,	// (0x0005612f) fshwr2_hwr_syb_pane_ParamLimits

0xc469,	// (0x0005614c) fshwr2_icf_pane_ParamLimits

0x0d50,	// (0x0004aa33) list_double_graphic_pane_vc_g4_ParamLimits

0x0d50,	// (0x0004aa33) list_double_graphic_pane_vc_g4

0x1cc4,	// (0x0004b9a7) cell_ituss_key_pane_g3_ParamLimits

0x1cc4,	// (0x0004b9a7) cell_ituss_key_pane_g3

0x1d6c,	// (0x0004ba4f) cell_ituss_key_t5_ParamLimits

0x1d6c,	// (0x0004ba4f) cell_ituss_key_t5

0x87fb,	// (0x000524de) popup_fep_vkbss_window_ParamLimits
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
	0, // AknLayoutScalable_Avkon::Tpopup_fep_vkbss_window_ParamLimits_sig*,
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large
