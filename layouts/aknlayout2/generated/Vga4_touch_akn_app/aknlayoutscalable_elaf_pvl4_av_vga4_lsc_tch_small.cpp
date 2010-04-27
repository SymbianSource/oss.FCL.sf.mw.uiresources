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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x000264fe };

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
0x98ee,	// (0x0002fdec) Screen

0x9902,	// (0x0002fe00) application_window_ParamLimits

0x9902,	// (0x0002fe00) application_window

0x991c,	// (0x0002fe1a) screen_g1

0x994e,	// (0x0002fe4c) area_bottom_pane_ParamLimits

0x994e,	// (0x0002fe4c) area_bottom_pane

0xf07e,	// (0x0003557c) area_top_pane_ParamLimits

0xf07e,	// (0x0003557c) area_top_pane

0xf112,	// (0x00035610) main_pane_ParamLimits

0xf112,	// (0x00035610) main_pane

0x9a0c,	// (0x0002ff0a) misc_graphics

0xb326,	// (0x00031824) battery_pane_ParamLimits

0xb326,	// (0x00031824) battery_pane

0x3029,	// (0x00029527) bg_status_flat_pane_g8

0x3031,	// (0x0002952f) bg_status_flat_pane_g9

0x10a8,	// (0x000275a6) context_pane_ParamLimits

0x10a8,	// (0x000275a6) context_pane

0xb49d,	// (0x0003199b) navi_pane_ParamLimits

0xb49d,	// (0x0003199b) navi_pane

0xb527,	// (0x00031a25) signal_pane_ParamLimits

0xb527,	// (0x00031a25) signal_pane

0x0008,

0xf874,	// (0x00035d72) bg_status_flat_pane_g

0xb5b7,	// (0x00031ab5) status_pane_g1_ParamLimits

0xb5b7,	// (0x00031ab5) status_pane_g1

0xb5cd,	// (0x00031acb) status_pane_g2_ParamLimits

0xb5cd,	// (0x00031acb) status_pane_g2

0x12e9,	// (0x000277e7) status_pane_g3_ParamLimits

0x12e9,	// (0x000277e7) status_pane_g3

0x0004,

0xf7a0,	// (0x00035c9e) status_pane_g_ParamLimits

0xf7a0,	// (0x00035c9e) status_pane_g

0xb5d9,	// (0x00031ad7) title_pane_ParamLimits

0xb5d9,	// (0x00031ad7) title_pane

0xb63c,	// (0x00031b3a) uni_indicator_pane_ParamLimits

0xb63c,	// (0x00031b3a) uni_indicator_pane

0x08c9,	// (0x00026dc7) bg_list_pane_ParamLimits

0x08c9,	// (0x00026dc7) bg_list_pane

0x966b,	// (0x0002fb69) find_pane

0xab70,	// (0x0003106e) listscroll_app_pane_ParamLimits

0xab70,	// (0x0003106e) listscroll_app_pane

0x08fd,	// (0x00026dfb) listscroll_form_pane

0x9673,	// (0x0002fb71) listscroll_gen_pane_ParamLimits

0x9673,	// (0x0002fb71) listscroll_gen_pane

0x0919,	// (0x00026e17) listscroll_set_pane

0x3bc8,	// (0x0002a0c6) main_idle_act_pane

0x03c2,	// (0x000268c0) main_idle_trad_pane

0x03c2,	// (0x000268c0) main_list_empty_pane

0x0933,	// (0x00026e31) main_midp_pane

0x093f,	// (0x00026e3d) main_pane_g1_ParamLimits

0x093f,	// (0x00026e3d) main_pane_g1

0xab80,	// (0x0003107e) popup_ai_message_window_ParamLimits

0xab80,	// (0x0003107e) popup_ai_message_window

0xac20,	// (0x0003111e) popup_fep_china_uni_window_ParamLimits

0xac20,	// (0x0003111e) popup_fep_china_uni_window

0x0a61,	// (0x00026f5f) popup_fep_japan_candidate_window_ParamLimits

0x0a61,	// (0x00026f5f) popup_fep_japan_candidate_window

0x0a8b,	// (0x00026f89) popup_fep_japan_predictive_window_ParamLimits

0x0a8b,	// (0x00026f89) popup_fep_japan_predictive_window

0xac80,	// (0x0003117e) popup_find_window

0xac9d,	// (0x0003119b) popup_grid_graphic_window_ParamLimits

0xac9d,	// (0x0003119b) popup_grid_graphic_window

0x0afc,	// (0x00026ffa) popup_large_graphic_colour_window

0xad41,	// (0x0003123f) popup_menu_window_ParamLimits

0xad41,	// (0x0003123f) popup_menu_window

0xaf31,	// (0x0003142f) popup_note_image_window

0xaef1,	// (0x000313ef) popup_note_wait_window_ParamLimits

0xaef1,	// (0x000313ef) popup_note_wait_window

0xaf49,	// (0x00031447) popup_note_window_ParamLimits

0xaf49,	// (0x00031447) popup_note_window

0xaff7,	// (0x000314f5) popup_query_code_window_ParamLimits

0xaff7,	// (0x000314f5) popup_query_code_window

0x0d68,	// (0x00027266) popup_query_data_code_window_ParamLimits

0x0d68,	// (0x00027266) popup_query_data_code_window

0xb037,	// (0x00031535) popup_query_data_window_ParamLimits

0xb037,	// (0x00031535) popup_query_data_window

0xb0cb,	// (0x000315c9) popup_query_sat_info_window_ParamLimits

0xb0cb,	// (0x000315c9) popup_query_sat_info_window

0xb176,	// (0x00031674) popup_snote_single_graphic_window_ParamLimits

0xb176,	// (0x00031674) popup_snote_single_graphic_window

0xb176,	// (0x00031674) popup_snote_single_text_window_ParamLimits

0xb176,	// (0x00031674) popup_snote_single_text_window

0x0e03,	// (0x00027301) popup_sub_window_general

0x0f49,	// (0x00027447) popup_window_general_ParamLimits

0x0f49,	// (0x00027447) popup_window_general

0x0f62,	// (0x00027460) power_save_pane

0xa9de,	// (0x00030edc) control_pane_g1_ParamLimits

0xa9de,	// (0x00030edc) control_pane_g1

0xaa07,	// (0x00030f05) control_pane_g2_ParamLimits

0xaa07,	// (0x00030f05) control_pane_g2

0x0776,	// (0x00026c74) control_pane_g3_ParamLimits

0x0776,	// (0x00026c74) control_pane_g3

0x0007,

0xf788,	// (0x00035c86) control_pane_g_ParamLimits

0xf788,	// (0x00035c86) control_pane_g

0xaa69,	// (0x00030f67) control_pane_t1_ParamLimits

0xaa69,	// (0x00030f67) control_pane_t1

0xaac7,	// (0x00030fc5) control_pane_t2_ParamLimits

0xaac7,	// (0x00030fc5) control_pane_t2

0x0002,

0xf799,	// (0x00035c97) control_pane_t_ParamLimits

0xf799,	// (0x00035c97) control_pane_t

0xa937,	// (0x00030e35) navi_navi_volume_pane_cp1

0xa93f,	// (0x00030e3d) status_small_icon_pane

0x065d,	// (0x00026b5b) status_small_pane_g1_ParamLimits

0x065d,	// (0x00026b5b) status_small_pane_g1

0xa947,	// (0x00030e45) status_small_pane_g2_ParamLimits

0xa947,	// (0x00030e45) status_small_pane_g2

0xa953,	// (0x00030e51) status_small_pane_g3_ParamLimits

0xa953,	// (0x00030e51) status_small_pane_g3

0xa95f,	// (0x00030e5d) status_small_pane_g4_ParamLimits

0xa95f,	// (0x00030e5d) status_small_pane_g4

0xa96b,	// (0x00030e69) status_small_pane_g5_ParamLimits

0xa96b,	// (0x00030e69) status_small_pane_g5

0xa979,	// (0x00030e77) status_small_pane_g6_ParamLimits

0xa979,	// (0x00030e77) status_small_pane_g6

0x0007,

0xf777,	// (0x00035c75) status_small_pane_g_ParamLimits

0xf777,	// (0x00035c75) status_small_pane_g

0xa9a8,	// (0x00030ea6) status_small_pane_t1

0xa9ca,	// (0x00030ec8) status_small_wait_pane_ParamLimits

0xa9ca,	// (0x00030ec8) status_small_wait_pane

0xa702,	// (0x00030c00) aid_levels_signal_ParamLimits

0xa702,	// (0x00030c00) aid_levels_signal

0xa71a,	// (0x00030c18) signal_pane_g1_ParamLimits

0xa71a,	// (0x00030c18) signal_pane_g1

0xa735,	// (0x00030c33) signal_pane_g2_ParamLimits

0xa735,	// (0x00030c33) signal_pane_g2

0x0003,

0xf708,	// (0x00035c06) signal_pane_g_ParamLimits

0xf708,	// (0x00035c06) signal_pane_g

0xcf4e,	// (0x0003344c) context_pane_g1

0x9b44,	// (0x00030042) title_pane_g1

0x9b87,	// (0x00030085) title_pane_t1

0x9c13,	// (0x00030111) title_pane_t2

0x9c39,	// (0x00030137) title_pane_t3

0x0002,

0xf557,	// (0x00035a55) title_pane_t

0xb664,	// (0x00031b62) aid_levels_battery_ParamLimits

0xb664,	// (0x00031b62) aid_levels_battery

0xb680,	// (0x00031b7e) battery_pane_g1_ParamLimits

0xb680,	// (0x00031b7e) battery_pane_g1

0xb69d,	// (0x00031b9b) battery_pane_g2_ParamLimits

0xb69d,	// (0x00031b9b) battery_pane_g2

0x0001,

0xf7ab,	// (0x00035ca9) battery_pane_g_ParamLimits

0xf7ab,	// (0x00035ca9) battery_pane_g

0xbb2c,	// (0x0003202a) uni_indicator_pane_g1

0xbb42,	// (0x00032040) uni_indicator_pane_g2

0xbb58,	// (0x00032056) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x00035e1a) uni_indicator_pane_g

0xd1fc,	// (0x000336fa) navi_icon_pane_ParamLimits

0xd1fc,	// (0x000336fa) navi_icon_pane

0xd180,	// (0x0003367e) navi_midp_pane

0xd218,	// (0x00033716) navi_navi_pane

0xd222,	// (0x00033720) navi_text_pane_ParamLimits

0xd222,	// (0x00033720) navi_text_pane

0x991c,	// (0x0002fe1a) status_small_wait_pane_g1

0xa11c,	// (0x0003061a) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x00035e15) status_small_wait_pane_g

0xba93,	// (0x00031f91) navi_navi_icon_text_pane

0xba9b,	// (0x00031f99) navi_navi_pane_g1_ParamLimits

0xba9b,	// (0x00031f99) navi_navi_pane_g1

0xbaad,	// (0x00031fab) navi_navi_pane_g2_ParamLimits

0xbaad,	// (0x00031fab) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x00035de3) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x00035de3) navi_navi_pane_g

0x36b2,	// (0x00029bb0) navi_navi_tabs_pane

0xbabf,	// (0x00031fbd) navi_navi_text_pane

0xba93,	// (0x00031f91) navi_navi_volume_pane

0xba81,	// (0x00031f7f) navi_text_pane_t1

0xba75,	// (0x00031f73) navi_icon_pane_g1

0x35a9,	// (0x00029aa7) navi_navi_text_pane_t1

0xba50,	// (0x00031f4e) navi_navi_volume_pane_g1

0xba58,	// (0x00031f56) volume_small_pane

0xb9ac,	// (0x00031eaa) navi_navi_icon_text_pane_g1

0xb9b4,	// (0x00031eb2) navi_navi_icon_text_pane_t1

0xd218,	// (0x00033716) navi_tabs_2_long_pane

0xd218,	// (0x00033716) navi_tabs_2_pane

0xd218,	// (0x00033716) navi_tabs_3_long_pane

0xd218,	// (0x00033716) navi_tabs_3_pane

0xd218,	// (0x00033716) navi_tabs_4_pane

0xb96a,	// (0x00031e68) tabs_2_active_pane_ParamLimits

0xb96a,	// (0x00031e68) tabs_2_active_pane

0xb97a,	// (0x00031e78) tabs_2_passive_pane_ParamLimits

0xb97a,	// (0x00031e78) tabs_2_passive_pane

0xb938,	// (0x00031e36) tabs_3_active_pane_ParamLimits

0xb938,	// (0x00031e36) tabs_3_active_pane

0xb948,	// (0x00031e46) tabs_3_passive_pane_ParamLimits

0xb948,	// (0x00031e46) tabs_3_passive_pane

0xb959,	// (0x00031e57) tabs_3_passive_pane_cp_ParamLimits

0xb959,	// (0x00031e57) tabs_3_passive_pane_cp

0xb8f4,	// (0x00031df2) tabs_4_active_pane_ParamLimits

0xb8f4,	// (0x00031df2) tabs_4_active_pane

0xb905,	// (0x00031e03) tabs_4_passive_pane_ParamLimits

0xb905,	// (0x00031e03) tabs_4_passive_pane

0xb916,	// (0x00031e14) tabs_4_passive_pane_cp_ParamLimits

0xb916,	// (0x00031e14) tabs_4_passive_pane_cp

0xb927,	// (0x00031e25) tabs_4_passive_pane_cp2_ParamLimits

0xb927,	// (0x00031e25) tabs_4_passive_pane_cp2

0xb8d0,	// (0x00031dce) tabs_2_long_active_pane_ParamLimits

0xb8d0,	// (0x00031dce) tabs_2_long_active_pane

0xb8e2,	// (0x00031de0) tabs_2_long_passive_pane_ParamLimits

0xb8e2,	// (0x00031de0) tabs_2_long_passive_pane

0xb885,	// (0x00031d83) tabs_3_long_active_pane_ParamLimits

0xb885,	// (0x00031d83) tabs_3_long_active_pane

0xb89e,	// (0x00031d9c) tabs_3_long_passive_pane_ParamLimits

0xb89e,	// (0x00031d9c) tabs_3_long_passive_pane

0xb8b7,	// (0x00031db5) tabs_3_long_passive_pane_cp_ParamLimits

0xb8b7,	// (0x00031db5) tabs_3_long_passive_pane_cp

0x18b9,	// (0x00027db7) volume_small_pane_g1

0xb834,	// (0x00031d32) volume_small_pane_g2

0xb83d,	// (0x00031d3b) volume_small_pane_g3

0xb846,	// (0x00031d44) volume_small_pane_g4

0xb84f,	// (0x00031d4d) volume_small_pane_g5

0xb858,	// (0x00031d56) volume_small_pane_g6

0xb861,	// (0x00031d5f) volume_small_pane_g7

0xb86a,	// (0x00031d68) volume_small_pane_g8

0xb873,	// (0x00031d71) volume_small_pane_g9

0xb87c,	// (0x00031d7a) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x00035daf) volume_small_pane_g

0x9c4b,	// (0x00030149) bg_active_tab_pane_cp2_ParamLimits

0x9c4b,	// (0x00030149) bg_active_tab_pane_cp2

0x9c59,	// (0x00030157) tabs_3_active_pane_g1

0x9c61,	// (0x0003015f) tabs_3_active_pane_t1

0x9c4b,	// (0x00030149) bg_passive_tab_pane_cp2_ParamLimits

0x9c4b,	// (0x00030149) bg_passive_tab_pane_cp2

0x9c59,	// (0x00030157) tabs_3_passive_pane_g1

0x9c61,	// (0x0003015f) tabs_3_passive_pane_t1

0x9c4b,	// (0x00030149) bg_active_tab_pane_cp3_ParamLimits

0x9c4b,	// (0x00030149) bg_active_tab_pane_cp3

0x9c73,	// (0x00030171) tabs_4_active_pane_g1

0x9c7b,	// (0x00030179) tabs_4_active_pane_t1

0x9c4b,	// (0x00030149) bg_passive_tab_pane_cp3_ParamLimits

0x9c4b,	// (0x00030149) bg_passive_tab_pane_cp3

0x9c73,	// (0x00030171) tabs_4_1_passive_pane_g1

0x9c7b,	// (0x00030179) tabs_4_1_passive_pane_t1

0x0933,	// (0x00026e31) list_highlight_pane_cp2

0xbbed,	// (0x000320eb) list_set_pane_ParamLimits

0xbbed,	// (0x000320eb) list_set_pane

0xbcb5,	// (0x000321b3) main_pane_set_t1_ParamLimits

0xbcb5,	// (0x000321b3) main_pane_set_t1

0xbcd5,	// (0x000321d3) main_pane_set_t2_ParamLimits

0xbcd5,	// (0x000321d3) main_pane_set_t2

0xbce9,	// (0x000321e7) main_pane_set_t3_ParamLimits

0xbce9,	// (0x000321e7) main_pane_set_t3

0xbcfd,	// (0x000321fb) main_pane_set_t4_ParamLimits

0xbcfd,	// (0x000321fb) main_pane_set_t4

0x0003,

0xf981,	// (0x00035e7f) main_pane_set_t_ParamLimits

0xf981,	// (0x00035e7f) main_pane_set_t

0xbd11,	// (0x0003220f) setting_code_pane

0x3d1c,	// (0x0002a21a) setting_slider_graphic_pane

0x3d1c,	// (0x0002a21a) setting_slider_pane

0x3d1c,	// (0x0002a21a) setting_text_pane

0x3d1c,	// (0x0002a21a) setting_volume_pane

0xf221,	// (0x0003571f) volume_set_pane

0x9c8d,	// (0x0003018b) bg_set_opt_pane_cp

0xf22b,	// (0x00035729) setting_slider_pane_t1

0xf244,	// (0x00035742) setting_slider_pane_t2

0xf25e,	// (0x0003575c) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00035a5c) setting_slider_pane_t

0xf276,	// (0x00035774) slider_set_pane

0x9a0c,	// (0x0002ff0a) bg_set_opt_pane_cp2

0x9c9b,	// (0x00030199) setting_slider_graphic_pane_g1

0xf28c,	// (0x0003578a) setting_slider_graphic_pane_t1

0xf29c,	// (0x0003579a) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00035a63) setting_slider_graphic_pane_t

0xf2ac,	// (0x000357aa) slider_set_pane_cp

0x9a0c,	// (0x0002ff0a) input_focus_pane_cp1

0x3baf,	// (0x0002a0ad) list_set_text_pane

0x991c,	// (0x0002fe1a) setting_text_pane_g1

0x9a0c,	// (0x0002ff0a) input_focus_pane_cp2

0x991c,	// (0x0002fe1a) setting_code_pane_g1

0x9ca4,	// (0x000301a2) setting_code_pane_t1

0xe814,	// (0x00034d12) set_text_pane_t1_ParamLimits

0xe814,	// (0x00034d12) set_text_pane_t1

0xca70,	// (0x00032f6e) set_opt_bg_pane_g1

0xca78,	// (0x00032f76) set_opt_bg_pane_g2

0x3b87,	// (0x0002a085) set_opt_bg_pane_g3

0xca88,	// (0x00032f86) set_opt_bg_pane_g4

0xca90,	// (0x00032f8e) set_opt_bg_pane_g5

0xca98,	// (0x00032f96) set_opt_bg_pane_g6

0x3b91,	// (0x0002a08f) set_opt_bg_pane_g7

0x3b9b,	// (0x0002a099) set_opt_bg_pane_g8

0x3ba5,	// (0x0002a0a3) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x00035e6c) set_opt_bg_pane_g

0x3b7a,	// (0x0002a078) slider_set_pane_g1

0x1a9d,	// (0x00027f9b) slider_set_pane_g2

0x0006,

0xf95f,	// (0x00035e5d) slider_set_pane_g

0x1a25,	// (0x00027f23) volume_set_pane_g1

0x1a2f,	// (0x00027f2d) volume_set_pane_g2

0x1a39,	// (0x00027f37) volume_set_pane_g3

0x1a43,	// (0x00027f41) volume_set_pane_g4

0x1a4d,	// (0x00027f4b) volume_set_pane_g5

0x1a57,	// (0x00027f55) volume_set_pane_g6

0x1a61,	// (0x00027f5f) volume_set_pane_g7

0x1a6b,	// (0x00027f69) volume_set_pane_g8

0x1a75,	// (0x00027f73) volume_set_pane_g9

0x1a7f,	// (0x00027f7d) volume_set_pane_g10

0x0009,

0xf937,	// (0x00035e35) volume_set_pane_g

0x9cb2,	// (0x000301b0) indicator_pane_ParamLimits

0x9cb2,	// (0x000301b0) indicator_pane

0x9cde,	// (0x000301dc) main_idle_pane_g2_ParamLimits

0x9cde,	// (0x000301dc) main_idle_pane_g2

0x9d16,	// (0x00030214) main_pane_idle_g1_ParamLimits

0x9d16,	// (0x00030214) main_pane_idle_g1

0x9d44,	// (0x00030242) popup_clock_digital_analogue_window_ParamLimits

0x9d44,	// (0x00030242) popup_clock_digital_analogue_window

0x9d5b,	// (0x00030259) soft_indicator_pane_ParamLimits

0x9d5b,	// (0x00030259) soft_indicator_pane

0x9d77,	// (0x00030275) wallpaper_pane_ParamLimits

0x9d77,	// (0x00030275) wallpaper_pane

0x991c,	// (0x0002fe1a) wallpaper_pane_g1

0x9d91,	// (0x0003028f) indicator_pane_g1_ParamLimits

0x9d91,	// (0x0003028f) indicator_pane_g1

0x3ff8,	// (0x0002a4f6) navi_navi_icon_text_pane_srt_g1

0x9db9,	// (0x000302b7) soft_indicator_pane_t1

0x9dd3,	// (0x000302d1) aid_ps_area_pane

0x9de4,	// (0x000302e2) aid_ps_clock_pane

0x9df2,	// (0x000302f0) aid_ps_indicator_pane

0x9dfe,	// (0x000302fc) indicator_ps_pane_ParamLimits

0x9dfe,	// (0x000302fc) indicator_ps_pane

0x9e0d,	// (0x0003030b) power_save_pane_g1_ParamLimits

0x9e0d,	// (0x0003030b) power_save_pane_g1

0x9e19,	// (0x00030317) power_save_pane_g2_ParamLimits

0x9e19,	// (0x00030317) power_save_pane_g2

0xf05e,	// (0x0003555c) aid_navinavi_width_pane

0x9dd3,	// (0x000302d1) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00035a68) power_save_pane_g_ParamLimits

0xf56a,	// (0x00035a68) power_save_pane_g

0x9e27,	// (0x00030325) power_save_pane_t1_ParamLimits

0x9e27,	// (0x00030325) power_save_pane_t1

0x9de4,	// (0x000302e2) aid_ps_clock_pane_ParamLimits

0x9df2,	// (0x000302f0) aid_ps_indicator_pane_ParamLimits

0x9e39,	// (0x00030337) power_save_pane_t4_ParamLimits

0x9e39,	// (0x00030337) power_save_pane_t4

0x0001,

0xf56f,	// (0x00035a6d) power_save_pane_t_ParamLimits

0xf56f,	// (0x00035a6d) power_save_pane_t

0x9e63,	// (0x00030361) power_save_t3_ParamLimits

0x9e63,	// (0x00030361) power_save_t3

0x9e4e,	// (0x0003034c) power_save_t2_ParamLimits

0x9e4e,	// (0x0003034c) power_save_t2

0x9e78,	// (0x00030376) indicator_ps_pane_g1

0x9e81,	// (0x0003037f) ai_gene_pane_ParamLimits

0x9e81,	// (0x0003037f) ai_gene_pane

0x9e98,	// (0x00030396) ai_links_pane_ParamLimits

0x9e98,	// (0x00030396) ai_links_pane

0x9eb0,	// (0x000303ae) indicator_pane_cp1_ParamLimits

0x9eb0,	// (0x000303ae) indicator_pane_cp1

0x9ebf,	// (0x000303bd) main_pane_idle_g1_cp_ParamLimits

0x9ebf,	// (0x000303bd) main_pane_idle_g1_cp

0x9ed7,	// (0x000303d5) popup_ai_links_title_window

0x9ee0,	// (0x000303de) soft_indicator_pane_cp1_ParamLimits

0x9ee0,	// (0x000303de) soft_indicator_pane_cp1

0x3961,	// (0x00029e5f) ai_links_pane_g1

0x396a,	// (0x00029e68) grid_ai_links_pane

0xbb23,	// (0x00032021) ai_gene_pane_1

0x394f,	// (0x00029e4d) ai_gene_pane_2

0x3958,	// (0x00029e56) list_highlight_pane_cp4

0xbaff,	// (0x00031ffd) cell_ai_link_pane_ParamLimits

0xbaff,	// (0x00031ffd) cell_ai_link_pane

0x391e,	// (0x00029e1c) cell_ai_link_pane_g1

0xa11c,	// (0x0003061a) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x00035e10) cell_ai_link_pane_g

0x9a0c,	// (0x0002ff0a) grid_highlight_cp2

0x9a0c,	// (0x0002ff0a) bg_popup_sub_pane_cp1

0x9f02,	// (0x00030400) popup_ai_links_title_window_t1

0x386a,	// (0x00029d68) ai_gene_pane_1_g1_ParamLimits

0x386a,	// (0x00029d68) ai_gene_pane_1_g1

0x3876,	// (0x00029d74) ai_gene_pane_1_g2_ParamLimits

0x3876,	// (0x00029d74) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x00035e06) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x00035e06) ai_gene_pane_1_g

0x3883,	// (0x00029d81) ai_gene_pane_1_t1_ParamLimits

0x3883,	// (0x00029d81) ai_gene_pane_1_t1

0x38b7,	// (0x00029db5) grid_ai_soft_ind_pane

0x3855,	// (0x00029d53) ai_gene_pane_2_t1_ParamLimits

0x3855,	// (0x00029d53) ai_gene_pane_2_t1

0x9f11,	// (0x0003040f) main_pane_empty_t1_ParamLimits

0x9f11,	// (0x0003040f) main_pane_empty_t1

0x9f29,	// (0x00030427) main_pane_empty_t2_ParamLimits

0x9f29,	// (0x00030427) main_pane_empty_t2

0x9f3e,	// (0x0003043c) main_pane_empty_t3_ParamLimits

0x9f3e,	// (0x0003043c) main_pane_empty_t3

0x9f50,	// (0x0003044e) main_pane_empty_t4_ParamLimits

0x9f50,	// (0x0003044e) main_pane_empty_t4

0x9f62,	// (0x00030460) main_pane_empty_t5_ParamLimits

0x9f62,	// (0x00030460) main_pane_empty_t5

0x0004,

0xf574,	// (0x00035a72) main_pane_empty_t_ParamLimits

0xf574,	// (0x00035a72) main_pane_empty_t

0xcac1,	// (0x00032fbf) bg_popup_window_pane_ParamLimits

0xcac1,	// (0x00032fbf) bg_popup_window_pane

0x35b7,	// (0x00029ab5) find_popup_pane_cp2_ParamLimits

0x35b7,	// (0x00029ab5) find_popup_pane_cp2

0x35c3,	// (0x00029ac1) heading_pane_ParamLimits

0x35c3,	// (0x00029ac1) heading_pane

0x9a0c,	// (0x0002ff0a) bg_popup_sub_pane

0xb9d1,	// (0x00031ecf) bg_popup_window_pane_g1_ParamLimits

0xb9d1,	// (0x00031ecf) bg_popup_window_pane_g1

0xb9e0,	// (0x00031ede) bg_popup_window_pane_g2_ParamLimits

0xb9e0,	// (0x00031ede) bg_popup_window_pane_g2

0xb9ec,	// (0x00031eea) bg_popup_window_pane_g3_ParamLimits

0xb9ec,	// (0x00031eea) bg_popup_window_pane_g3

0xb9f8,	// (0x00031ef6) bg_popup_window_pane_g4_ParamLimits

0xb9f8,	// (0x00031ef6) bg_popup_window_pane_g4

0xba07,	// (0x00031f05) bg_popup_window_pane_g5_ParamLimits

0xba07,	// (0x00031f05) bg_popup_window_pane_g5

0xba17,	// (0x00031f15) bg_popup_window_pane_g6_ParamLimits

0xba17,	// (0x00031f15) bg_popup_window_pane_g6

0xba23,	// (0x00031f21) bg_popup_window_pane_g7_ParamLimits

0xba23,	// (0x00031f21) bg_popup_window_pane_g7

0xba32,	// (0x00031f30) bg_popup_window_pane_g8_ParamLimits

0xba32,	// (0x00031f30) bg_popup_window_pane_g8

0xba41,	// (0x00031f3f) bg_popup_window_pane_g9_ParamLimits

0xba41,	// (0x00031f3f) bg_popup_window_pane_g9

0x359d,	// (0x00029a9b) bg_popup_window_pane_g10_ParamLimits

0x359d,	// (0x00029a9b) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x00035dce) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x00035dce) bg_popup_window_pane_g

0x34c6,	// (0x000299c4) bg_popup_heading_pane_ParamLimits

0x34c6,	// (0x000299c4) bg_popup_heading_pane

0x1b25,	// (0x00028023) tabs_4_passive_pane_cp_srt_ParamLimits

0x1b25,	// (0x00028023) tabs_4_passive_pane_cp_srt

0x1b37,	// (0x00028035) tabs_4_passive_pane_srt_ParamLimits

0x34da,	// (0x000299d8) heading_pane_g2

0x1b37,	// (0x00028035) tabs_4_passive_pane_srt

0x158f,	// (0x00027a8d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x158f,	// (0x00027a8d) bg_passive_tab_pane_cp3_srt

0x34e2,	// (0x000299e0) heading_pane_t1_ParamLimits

0x34e2,	// (0x000299e0) heading_pane_t1

0x34f9,	// (0x000299f7) heading_pane_t2_ParamLimits

0x34f9,	// (0x000299f7) heading_pane_t2

0x0001,

0xf8cb,	// (0x00035dc9) heading_pane_t_ParamLimits

0xf8cb,	// (0x00035dc9) heading_pane_t

0x2ff1,	// (0x000294ef) bg_popup_heading_pane_g1

0x30a0,	// (0x0002959e) bg_popup_heading_pane_g2

0x30aa,	// (0x000295a8) bg_popup_heading_pane_g3

0x30b4,	// (0x000295b2) bg_popup_heading_pane_g4

0x30be,	// (0x000295bc) bg_popup_heading_pane_g5

0x30c8,	// (0x000295c6) bg_popup_heading_pane_g6

0x30d0,	// (0x000295ce) bg_popup_heading_pane_g7

0x30d8,	// (0x000295d6) bg_popup_heading_pane_g8

0x30e2,	// (0x000295e0) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x00035d85) bg_popup_heading_pane_g

0x14a4,	// (0x000279a2) bg_popup_sub_pane_g1

0x14ac,	// (0x000279aa) bg_popup_sub_pane_g2

0x14b4,	// (0x000279b2) bg_popup_sub_pane_g3

0x14bc,	// (0x000279ba) bg_popup_sub_pane_g4

0x14c4,	// (0x000279c2) bg_popup_sub_pane_g5

0x14cc,	// (0x000279ca) bg_popup_sub_pane_g6

0x14d4,	// (0x000279d2) bg_popup_sub_pane_g7

0x14dc,	// (0x000279da) bg_popup_sub_pane_g8

0x14e4,	// (0x000279e2) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x00035d5f) bg_popup_sub_pane_g

0x9c4b,	// (0x00030149) bg_popup_window_pane_cp5_ParamLimits

0x9c4b,	// (0x00030149) bg_popup_window_pane_cp5

0x9f82,	// (0x00030480) popup_note_window_g1_ParamLimits

0x9f82,	// (0x00030480) popup_note_window_g1

0x9f8e,	// (0x0003048c) popup_note_window_t1_ParamLimits

0x9f8e,	// (0x0003048c) popup_note_window_t1

0x9fa4,	// (0x000304a2) popup_note_window_t2_ParamLimits

0x9fa4,	// (0x000304a2) popup_note_window_t2

0x9fba,	// (0x000304b8) popup_note_window_t3_ParamLimits

0x9fba,	// (0x000304b8) popup_note_window_t3

0x9fd0,	// (0x000304ce) popup_note_window_t4_ParamLimits

0x9fd0,	// (0x000304ce) popup_note_window_t4

0x9ff8,	// (0x000304f6) popup_note_window_t5_ParamLimits

0x9ff8,	// (0x000304f6) popup_note_window_t5

0x0004,

0xf57f,	// (0x00035a7d) popup_note_window_t_ParamLimits

0xf57f,	// (0x00035a7d) popup_note_window_t

0xa01c,	// (0x0003051a) bg_popup_window_pane_cp6_ParamLimits

0xa01c,	// (0x0003051a) bg_popup_window_pane_cp6

0x2f6d,	// (0x0002946b) popup_note_image_window_g1_ParamLimits

0x2f6d,	// (0x0002946b) popup_note_image_window_g1

0x2f79,	// (0x00029477) popup_note_image_window_g2_ParamLimits

0x2f79,	// (0x00029477) popup_note_image_window_g2

0x0001,

0xf855,	// (0x00035d53) popup_note_image_window_g_ParamLimits

0xf855,	// (0x00035d53) popup_note_image_window_g

0x2f92,	// (0x00029490) popup_note_image_window_t1_ParamLimits

0x2f92,	// (0x00029490) popup_note_image_window_t1

0x2fab,	// (0x000294a9) popup_note_image_window_t2_ParamLimits

0x2fab,	// (0x000294a9) popup_note_image_window_t2

0x2fc4,	// (0x000294c2) popup_note_image_window_t3_ParamLimits

0x2fc4,	// (0x000294c2) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x00035d58) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x00035d58) popup_note_image_window_t

0x2e2d,	// (0x0002932b) bg_popup_window_pane_cp7_ParamLimits

0x2e2d,	// (0x0002932b) bg_popup_window_pane_cp7

0x2e5d,	// (0x0002935b) popup_note_wait_window_g1_ParamLimits

0x2e5d,	// (0x0002935b) popup_note_wait_window_g1

0x2e69,	// (0x00029367) popup_note_wait_window_g2_ParamLimits

0x2e69,	// (0x00029367) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x00035d41) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x00035d41) popup_note_wait_window_g

0x2e81,	// (0x0002937f) popup_note_wait_window_t1_ParamLimits

0x2e81,	// (0x0002937f) popup_note_wait_window_t1

0x2ea8,	// (0x000293a6) popup_note_wait_window_t2_ParamLimits

0x2ea8,	// (0x000293a6) popup_note_wait_window_t2

0x2ec6,	// (0x000293c4) popup_note_wait_window_t3_ParamLimits

0x2ec6,	// (0x000293c4) popup_note_wait_window_t3

0x2ed9,	// (0x000293d7) popup_note_wait_window_t4_ParamLimits

0x2ed9,	// (0x000293d7) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x00035d48) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x00035d48) popup_note_wait_window_t

0x2efe,	// (0x000293fc) wait_bar_pane_ParamLimits

0x2efe,	// (0x000293fc) wait_bar_pane

0x9a0c,	// (0x0002ff0a) wait_anim_pane

0x9a0c,	// (0x0002ff0a) wait_border_pane

0x991c,	// (0x0002fe1a) wait_anim_pane_g1

0x991c,	// (0x0002fe1a) wait_anim_pane_g2

0x0001,

0xf703,	// (0x00035c01) wait_anim_pane_g

0x2dd1,	// (0x000292cf) wait_border_pane_g1

0x2ddc,	// (0x000292da) wait_border_pane_g2

0x2de5,	// (0x000292e3) wait_border_pane_g3

0x0002,

0xf83c,	// (0x00035d3a) wait_border_pane_g

0x2c3b,	// (0x00029139) bg_popup_window_pane_cp16_ParamLimits

0x2c3b,	// (0x00029139) bg_popup_window_pane_cp16

0x2d3b,	// (0x00029239) indicator_popup_pane_cp4_ParamLimits

0x2d3b,	// (0x00029239) indicator_popup_pane_cp4

0x2d4f,	// (0x0002924d) popup_query_data_window_t1_ParamLimits

0x2d4f,	// (0x0002924d) popup_query_data_window_t1

0x2d61,	// (0x0002925f) popup_query_data_window_t2_ParamLimits

0x2d61,	// (0x0002925f) popup_query_data_window_t2

0x2d7a,	// (0x00029278) popup_query_data_window_t3_ParamLimits

0x2d7a,	// (0x00029278) popup_query_data_window_t3

0x0002,

0xf835,	// (0x00035d33) popup_query_data_window_t_ParamLimits

0xf835,	// (0x00035d33) popup_query_data_window_t

0x2d94,	// (0x00029292) query_popup_data_pane_ParamLimits

0x2d94,	// (0x00029292) query_popup_data_pane

0x2da8,	// (0x000292a6) query_popup_data_pane_cp1_ParamLimits

0x2da8,	// (0x000292a6) query_popup_data_pane_cp1

0x2c3b,	// (0x00029139) bg_popup_window_pane_cp10_ParamLimits

0x2c3b,	// (0x00029139) bg_popup_window_pane_cp10

0x2c6d,	// (0x0002916b) indicator_popup_pane_ParamLimits

0x2c6d,	// (0x0002916b) indicator_popup_pane

0x2c8f,	// (0x0002918d) popup_query_code_window_t1_ParamLimits

0x2c8f,	// (0x0002918d) popup_query_code_window_t1

0x2ca9,	// (0x000291a7) popup_query_code_window_t2_ParamLimits

0x2ca9,	// (0x000291a7) popup_query_code_window_t2

0x2cf2,	// (0x000291f0) popup_query_code_window_t3_ParamLimits

0x2cf2,	// (0x000291f0) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x00035d2c) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x00035d2c) popup_query_code_window_t

0x2d21,	// (0x0002921f) query_popup_pane_ParamLimits

0x2d21,	// (0x0002921f) query_popup_pane

0xa01c,	// (0x0003051a) bg_popup_window_pane_cp15_ParamLimits

0xa01c,	// (0x0003051a) bg_popup_window_pane_cp15

0xa03c,	// (0x0003053a) indicator_popup_pane_cp1_ParamLimits

0xa03c,	// (0x0003053a) indicator_popup_pane_cp1

0xa04f,	// (0x0003054d) indicator_popup_pane_cp2_ParamLimits

0xa04f,	// (0x0003054d) indicator_popup_pane_cp2

0xa06a,	// (0x00030568) popup_query_data_code_window_g1_ParamLimits

0xa06a,	// (0x00030568) popup_query_data_code_window_g1

0xa07d,	// (0x0003057b) popup_query_data_code_window_t1_ParamLimits

0xa07d,	// (0x0003057b) popup_query_data_code_window_t1

0xa08f,	// (0x0003058d) popup_query_data_code_window_t2_ParamLimits

0xa08f,	// (0x0003058d) popup_query_data_code_window_t2

0xa0a1,	// (0x0003059f) popup_query_data_code_window_t3_ParamLimits

0xa0a1,	// (0x0003059f) popup_query_data_code_window_t3

0xa0b7,	// (0x000305b5) popup_query_data_code_window_t4_ParamLimits

0xa0b7,	// (0x000305b5) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00035a88) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00035a88) popup_query_data_code_window_t

0xd1cc,	// (0x000336ca) list_single_midp_graphic_pane_g3

0xa0d1,	// (0x000305cf) query_popup_data_pane_cp2_ParamLimits

0xa0e4,	// (0x000305e2) query_popup_pane_cp2_ParamLimits

0xa0e4,	// (0x000305e2) query_popup_pane_cp2

0x9a0c,	// (0x0002ff0a) bg_popup_window_pane_cp11

0x2c33,	// (0x00029131) heading_pane_cp5

0xa1d4,	// (0x000306d2) listscroll_popup_info_pane

0x9a0c,	// (0x0002ff0a) input_focus_pane_cp3

0xa0ff,	// (0x000305fd) query_popup_pane_t1

0xa10d,	// (0x0003060b) list_popup_info_pane_ParamLimits

0xa10d,	// (0x0003060b) list_popup_info_pane

0xa11c,	// (0x0003061a) listscroll_popup_info_pane_g1

0xa124,	// (0x00030622) scroll_pane_cp7

0xa12e,	// (0x0003062c) popup_info_list_pane_t1_ParamLimits

0xa12e,	// (0x0003062c) popup_info_list_pane_t1

0xa148,	// (0x00030646) popup_info_list_pane_t2_ParamLimits

0xa148,	// (0x00030646) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00035a91) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00035a91) popup_info_list_pane_t

0x9a0c,	// (0x0002ff0a) bg_popup_window_pane_cp12

0x4012,	// (0x0002a510) find_popup_pane

0x9c8d,	// (0x0003018b) bg_popup_window_pane_cp3

0xa162,	// (0x00030660) heading_pane_cp3

0xa16e,	// (0x0003066c) listscroll_popup_graphic_pane

0x9a0c,	// (0x0002ff0a) bg_popup_window_pane_cp4

0xa1ca,	// (0x000306c8) heading_pane_cp4

0xa1d4,	// (0x000306d2) listscroll_popup_colour_pane

0xa1dc,	// (0x000306da) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa1dc,	// (0x000306da) cell_large_graphic_colour_none_popup_pane

0xa1f0,	// (0x000306ee) grid_large_graphic_colour_popup_pane_ParamLimits

0xa1f0,	// (0x000306ee) grid_large_graphic_colour_popup_pane

0xa214,	// (0x00030712) listscroll_popup_colour_pane_g1_ParamLimits

0xa214,	// (0x00030712) listscroll_popup_colour_pane_g1

0xa22b,	// (0x00030729) listscroll_popup_colour_pane_g2_ParamLimits

0xa22b,	// (0x00030729) listscroll_popup_colour_pane_g2

0xa242,	// (0x00030740) listscroll_popup_colour_pane_g3_ParamLimits

0xa242,	// (0x00030740) listscroll_popup_colour_pane_g3

0xa252,	// (0x00030750) listscroll_popup_colour_pane_g4_ParamLimits

0xa252,	// (0x00030750) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00035a96) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00035a96) listscroll_popup_colour_pane_g

0xa262,	// (0x00030760) scroll_pane_cp6_ParamLimits

0xa262,	// (0x00030760) scroll_pane_cp6

0xa274,	// (0x00030772) cell_large_graphic_colour_popup_pane_ParamLimits

0xa274,	// (0x00030772) cell_large_graphic_colour_popup_pane

0xa295,	// (0x00030793) cell_large_graphic_colour_none_popup_pane_t1

0x9a0c,	// (0x0002ff0a) grid_highlight_pane_cp5

0xa2a4,	// (0x000307a2) cell_large_graphic_colour_popup_pane_g1

0xa2ac,	// (0x000307aa) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00035a9f) cell_large_graphic_colour_popup_pane_g

0xa2b4,	// (0x000307b2) cell_large_graphic_colour_popup_pane_g2_copy1

0xa2bd,	// (0x000307bb) grid_highlight_pane_cp4

0xa2c5,	// (0x000307c3) bg_popup_window_pane_cp8_ParamLimits

0xa2c5,	// (0x000307c3) bg_popup_window_pane_cp8

0xa2e0,	// (0x000307de) popup_snote_single_text_window_g1_ParamLimits

0xa2e0,	// (0x000307de) popup_snote_single_text_window_g1

0xa2f2,	// (0x000307f0) popup_snote_single_text_window_t1_ParamLimits

0xa2f2,	// (0x000307f0) popup_snote_single_text_window_t1

0xa305,	// (0x00030803) popup_snote_single_text_window_t2_ParamLimits

0xa305,	// (0x00030803) popup_snote_single_text_window_t2

0xa318,	// (0x00030816) popup_snote_single_text_window_t3_ParamLimits

0xa318,	// (0x00030816) popup_snote_single_text_window_t3

0xa351,	// (0x0003084f) popup_snote_single_text_window_t4_ParamLimits

0xa351,	// (0x0003084f) popup_snote_single_text_window_t4

0xa385,	// (0x00030883) popup_snote_single_text_window_t5_ParamLimits

0xa385,	// (0x00030883) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00035aa4) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00035aa4) popup_snote_single_text_window_t

0xa3b4,	// (0x000308b2) bg_popup_window_pane_cp9_ParamLimits

0xa3b4,	// (0x000308b2) bg_popup_window_pane_cp9

0xa2e0,	// (0x000307de) popup_snote_single_graphic_window_g1_ParamLimits

0xa2e0,	// (0x000307de) popup_snote_single_graphic_window_g1

0xa3c2,	// (0x000308c0) popup_snote_single_graphic_window_g2_ParamLimits

0xa3c2,	// (0x000308c0) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00035aaf) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00035aaf) popup_snote_single_graphic_window_g

0xa3ce,	// (0x000308cc) popup_snote_single_graphic_window_t1_ParamLimits

0xa3ce,	// (0x000308cc) popup_snote_single_graphic_window_t1

0xa3e1,	// (0x000308df) popup_snote_single_graphic_window_t2_ParamLimits

0xa3e1,	// (0x000308df) popup_snote_single_graphic_window_t2

0xa3f4,	// (0x000308f2) popup_snote_single_graphic_window_t3_ParamLimits

0xa3f4,	// (0x000308f2) popup_snote_single_graphic_window_t3

0xa42d,	// (0x0003092b) popup_snote_single_graphic_window_t4_ParamLimits

0xa42d,	// (0x0003092b) popup_snote_single_graphic_window_t4

0xa461,	// (0x0003095f) popup_snote_single_graphic_window_t5_ParamLimits

0xa461,	// (0x0003095f) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00035ab4) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00035ab4) popup_snote_single_graphic_window_t

0x3f50,	// (0x0002a44e) grid_graphic_popup_pane_ParamLimits

0x3f50,	// (0x0002a44e) grid_graphic_popup_pane

0x3f7e,	// (0x0002a47c) listscroll_popup_graphic_pane_g1_ParamLimits

0x3f7e,	// (0x0002a47c) listscroll_popup_graphic_pane_g1

0xbe2a,	// (0x00032328) listscroll_popup_graphic_pane_g2_ParamLimits

0xbe2a,	// (0x00032328) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x00035ea9) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x00035ea9) listscroll_popup_graphic_pane_g

0x3fa6,	// (0x0002a4a4) scroll_pane_cp5

0xbde9,	// (0x000322e7) cell_graphic_popup_pane_ParamLimits

0xbde9,	// (0x000322e7) cell_graphic_popup_pane

0x3ed9,	// (0x0002a3d7) cell_graphic_popup_pane_g1

0x3ee1,	// (0x0002a3df) cell_graphic_popup_pane_g2

0xa2b4,	// (0x000307b2) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x00035ea2) cell_graphic_popup_pane_g

0x3eea,	// (0x0002a3e8) cell_graphic_popup_pane_t2

0xa2bd,	// (0x000307bb) grid_highlight_pane_cp3

0xa4a2,	// (0x000309a0) list_gen_pane_ParamLimits

0xa4a2,	// (0x000309a0) list_gen_pane

0xa4d4,	// (0x000309d2) scroll_pane

0xbda0,	// (0x0003229e) bg_list_pane_g1_ParamLimits

0xbda0,	// (0x0003229e) bg_list_pane_g1

0x3e4e,	// (0x0002a34c) bg_list_pane_g2_ParamLimits

0x3e4e,	// (0x0002a34c) bg_list_pane_g2

0x3e63,	// (0x0002a361) bg_list_pane_g3_ParamLimits

0x3e63,	// (0x0002a361) bg_list_pane_g3

0x3e77,	// (0x0002a375) bg_list_pane_g4_ParamLimits

0x3e77,	// (0x0002a375) bg_list_pane_g4

0xbdbd,	// (0x000322bb) bg_list_pane_g5_ParamLimits

0xbdbd,	// (0x000322bb) bg_list_pane_g5

0x0004,

0xf999,	// (0x00035e97) bg_list_pane_g_ParamLimits

0xf999,	// (0x00035e97) bg_list_pane_g

0xbd4f,	// (0x0003224d) list_double2_graphic_large_graphic_pane_ParamLimits

0xbd4f,	// (0x0003224d) list_double2_graphic_large_graphic_pane

0xbd4f,	// (0x0003224d) list_double2_graphic_pane_ParamLimits

0xbd4f,	// (0x0003224d) list_double2_graphic_pane

0xbd4f,	// (0x0003224d) list_double2_large_graphic_pane_ParamLimits

0xbd4f,	// (0x0003224d) list_double2_large_graphic_pane

0xbd63,	// (0x00032261) list_double2_pane_ParamLimits

0xbd63,	// (0x00032261) list_double2_pane

0xbd4f,	// (0x0003224d) list_double_graphic_heading_pane_ParamLimits

0xbd4f,	// (0x0003224d) list_double_graphic_heading_pane

0xbd4f,	// (0x0003224d) list_double_graphic_pane_ParamLimits

0xbd4f,	// (0x0003224d) list_double_graphic_pane

0xbd4f,	// (0x0003224d) list_double_heading_pane_ParamLimits

0xbd4f,	// (0x0003224d) list_double_heading_pane

0xbd4f,	// (0x0003224d) list_double_large_graphic_pane_ParamLimits

0xbd4f,	// (0x0003224d) list_double_large_graphic_pane

0xbd4f,	// (0x0003224d) list_double_number_pane_ParamLimits

0xbd4f,	// (0x0003224d) list_double_number_pane

0xbd4f,	// (0x0003224d) list_double_pane_ParamLimits

0xbd4f,	// (0x0003224d) list_double_pane

0xbd4f,	// (0x0003224d) list_double_time_pane_ParamLimits

0xbd4f,	// (0x0003224d) list_double_time_pane

0xbd4f,	// (0x0003224d) list_setting_number_pane_ParamLimits

0xbd4f,	// (0x0003224d) list_setting_number_pane

0xbd4f,	// (0x0003224d) list_setting_pane_ParamLimits

0xbd4f,	// (0x0003224d) list_setting_pane

0x96e5,	// (0x0002fbe3) list_single_2graphic_pane_ParamLimits

0x96e5,	// (0x0002fbe3) list_single_2graphic_pane

0x96e5,	// (0x0002fbe3) list_single_graphic_heading_pane_ParamLimits

0x96e5,	// (0x0002fbe3) list_single_graphic_heading_pane

0x96e5,	// (0x0002fbe3) list_single_graphic_pane_ParamLimits

0x96e5,	// (0x0002fbe3) list_single_graphic_pane

0x96e5,	// (0x0002fbe3) list_single_heading_pane_ParamLimits

0x96e5,	// (0x0002fbe3) list_single_heading_pane

0xbd63,	// (0x00032261) list_single_large_graphic_pane_ParamLimits

0xbd63,	// (0x00032261) list_single_large_graphic_pane

0x96e5,	// (0x0002fbe3) list_single_number_heading_pane_ParamLimits

0x96e5,	// (0x0002fbe3) list_single_number_heading_pane

0x96e5,	// (0x0002fbe3) list_single_number_pane_ParamLimits

0x96e5,	// (0x0002fbe3) list_single_number_pane

0x96e5,	// (0x0002fbe3) list_single_pane_ParamLimits

0x96e5,	// (0x0002fbe3) list_single_pane

0x9a0c,	// (0x0002ff0a) list_highlight_pane_cp1

0xe82f,	// (0x00034d2d) list_single_pane_g1_ParamLimits

0xe82f,	// (0x00034d2d) list_single_pane_g1

0xe83b,	// (0x00034d39) list_single_pane_g2_ParamLimits

0xe83b,	// (0x00034d39) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00035ac6) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00035ac6) list_single_pane_g

0xeb0a,	// (0x00035008) list_single_pane_t1_ParamLimits

0xeb0a,	// (0x00035008) list_single_pane_t1

0xe82f,	// (0x00034d2d) list_single_number_pane_g1_ParamLimits

0xe82f,	// (0x00034d2d) list_single_number_pane_g1

0xe83b,	// (0x00034d39) list_single_number_pane_g2_ParamLimits

0xe83b,	// (0x00034d39) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00035ac6) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00035ac6) list_single_number_pane_g

0xea33,	// (0x00034f31) list_single_number_pane_t1_ParamLimits

0xea33,	// (0x00034f31) list_single_number_pane_t1

0x96a7,	// (0x0002fba5) list_single_number_pane_t2_ParamLimits

0x96a7,	// (0x0002fba5) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x00035e58) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x00035e58) list_single_number_pane_t

0x9024,	// (0x0002f522) list_single_graphic_pane_g1_ParamLimits

0x9024,	// (0x0002f522) list_single_graphic_pane_g1

0xe82f,	// (0x00034d2d) list_single_graphic_pane_g2_ParamLimits

0xe82f,	// (0x00034d2d) list_single_graphic_pane_g2

0xe83b,	// (0x00034d39) list_single_graphic_pane_g3_ParamLimits

0xe83b,	// (0x00034d39) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00035abf) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00035abf) list_single_graphic_pane_g

0x9030,	// (0x0002f52e) list_single_graphic_pane_t1_ParamLimits

0x9030,	// (0x0002f52e) list_single_graphic_pane_t1

0xe82f,	// (0x00034d2d) list_single_heading_pane_g1_ParamLimits

0xe82f,	// (0x00034d2d) list_single_heading_pane_g1

0xe83b,	// (0x00034d39) list_single_heading_pane_g2_ParamLimits

0xe83b,	// (0x00034d39) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00035ac6) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00035ac6) list_single_heading_pane_g

0x9046,	// (0x0002f544) list_single_heading_pane_t1_ParamLimits

0x9046,	// (0x0002f544) list_single_heading_pane_t1

0x905c,	// (0x0002f55a) list_single_heading_pane_t2_ParamLimits

0x905c,	// (0x0002f55a) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00035acb) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00035acb) list_single_heading_pane_t

0xe82f,	// (0x00034d2d) list_single_number_heading_pane_g1_ParamLimits

0xe82f,	// (0x00034d2d) list_single_number_heading_pane_g1

0xe83b,	// (0x00034d39) list_single_number_heading_pane_g2_ParamLimits

0xe83b,	// (0x00034d39) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00035ac6) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00035ac6) list_single_number_heading_pane_g

0x9046,	// (0x0002f544) list_single_number_heading_pane_t1_ParamLimits

0x9046,	// (0x0002f544) list_single_number_heading_pane_t1

0x906e,	// (0x0002f56c) list_single_number_heading_pane_t2_ParamLimits

0x906e,	// (0x0002f56c) list_single_number_heading_pane_t2

0xe847,	// (0x00034d45) list_single_number_heading_pane_t3_ParamLimits

0xe847,	// (0x00034d45) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00035ad0) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00035ad0) list_single_number_heading_pane_t

0xe859,	// (0x00034d57) list_single_graphic_heading_pane_g1_ParamLimits

0xe859,	// (0x00034d57) list_single_graphic_heading_pane_g1

0x9080,	// (0x0002f57e) list_single_graphic_heading_pane_g4_ParamLimits

0x9080,	// (0x0002f57e) list_single_graphic_heading_pane_g4

0xe83b,	// (0x00034d39) list_single_graphic_heading_pane_g5_ParamLimits

0xe83b,	// (0x00034d39) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00035ad7) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00035ad7) list_single_graphic_heading_pane_g

0x9046,	// (0x0002f544) list_single_graphic_heading_pane_t1_ParamLimits

0x9046,	// (0x0002f544) list_single_graphic_heading_pane_t1

0x9091,	// (0x0002f58f) list_single_graphic_heading_pane_t2_ParamLimits

0x9091,	// (0x0002f58f) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00035ade) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00035ade) list_single_graphic_heading_pane_t

0xe865,	// (0x00034d63) list_single_large_graphic_pane_g1_ParamLimits

0xe865,	// (0x00034d63) list_single_large_graphic_pane_g1

0xe871,	// (0x00034d6f) list_single_large_graphic_pane_g2_ParamLimits

0xe871,	// (0x00034d6f) list_single_large_graphic_pane_g2

0xe87d,	// (0x00034d7b) list_single_large_graphic_pane_g3_ParamLimits

0xe87d,	// (0x00034d7b) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00035ae3) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00035ae3) list_single_large_graphic_pane_g

0x2ddc,	// (0x000292da) wait_border_pane_g2_copy1

0x90a3,	// (0x0002f5a1) list_single_large_graphic_pane_g4_cp2

0xe889,	// (0x00034d87) list_single_large_graphic_pane_t1_ParamLimits

0xe889,	// (0x00034d87) list_single_large_graphic_pane_t1

0x90ab,	// (0x0002f5a9) list_double_pane_g1_ParamLimits

0x90ab,	// (0x0002f5a9) list_double_pane_g1

0x90b7,	// (0x0002f5b5) list_double_pane_g2_ParamLimits

0x90b7,	// (0x0002f5b5) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00035aea) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00035aea) list_double_pane_g

0x90c3,	// (0x0002f5c1) list_double_pane_t1_ParamLimits

0x90c3,	// (0x0002f5c1) list_double_pane_t1

0x90d9,	// (0x0002f5d7) list_double_pane_t2_ParamLimits

0x90d9,	// (0x0002f5d7) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00035aef) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00035aef) list_double_pane_t

0x90eb,	// (0x0002f5e9) list_double2_pane_g1_ParamLimits

0x90eb,	// (0x0002f5e9) list_double2_pane_g1

0x90fc,	// (0x0002f5fa) list_double2_pane_g2_ParamLimits

0x90fc,	// (0x0002f5fa) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00035af4) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00035af4) list_double2_pane_g

0x9108,	// (0x0002f606) list_double2_pane_t1_ParamLimits

0x9108,	// (0x0002f606) list_double2_pane_t1

0x911e,	// (0x0002f61c) list_double2_pane_t2_ParamLimits

0x911e,	// (0x0002f61c) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00035af9) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00035af9) list_double2_pane_t

0x90ab,	// (0x0002f5a9) list_double_number_pane_g1_ParamLimits

0x90ab,	// (0x0002f5a9) list_double_number_pane_g1

0x90b7,	// (0x0002f5b5) list_double_number_pane_g2_ParamLimits

0x90b7,	// (0x0002f5b5) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00035aea) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00035aea) list_double_number_pane_g

0x9130,	// (0x0002f62e) list_double_number_pane_t1_ParamLimits

0x9130,	// (0x0002f62e) list_double_number_pane_t1

0x9142,	// (0x0002f640) list_double_number_pane_t2_ParamLimits

0x9142,	// (0x0002f640) list_double_number_pane_t2

0x9158,	// (0x0002f656) list_double_number_pane_t3_ParamLimits

0x9158,	// (0x0002f656) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00035afe) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00035afe) list_double_number_pane_t

0x916a,	// (0x0002f668) list_double_graphic_pane_g1_ParamLimits

0x916a,	// (0x0002f668) list_double_graphic_pane_g1

0x9176,	// (0x0002f674) list_double_graphic_pane_g2_ParamLimits

0x9176,	// (0x0002f674) list_double_graphic_pane_g2

0x9185,	// (0x0002f683) list_double_graphic_pane_g3_ParamLimits

0x9185,	// (0x0002f683) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00035b05) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00035b05) list_double_graphic_pane_g

0x919d,	// (0x0002f69b) list_double_graphic_pane_t1_ParamLimits

0x919d,	// (0x0002f69b) list_double_graphic_pane_t1

0x91b3,	// (0x0002f6b1) list_double_graphic_pane_t2_ParamLimits

0x91b3,	// (0x0002f6b1) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00035b0e) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00035b0e) list_double_graphic_pane_t

0x91c5,	// (0x0002f6c3) list_double2_graphic_pane_g1_ParamLimits

0x91c5,	// (0x0002f6c3) list_double2_graphic_pane_g1

0x91d1,	// (0x0002f6cf) list_double2_graphic_pane_g2_ParamLimits

0x91d1,	// (0x0002f6cf) list_double2_graphic_pane_g2

0x91dd,	// (0x0002f6db) list_double2_graphic_pane_g3_ParamLimits

0x91dd,	// (0x0002f6db) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00035b13) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00035b13) list_double2_graphic_pane_g

0x91e9,	// (0x0002f6e7) list_double2_graphic_pane_t1_ParamLimits

0x91e9,	// (0x0002f6e7) list_double2_graphic_pane_t1

0x91ff,	// (0x0002f6fd) list_double2_graphic_pane_t2_ParamLimits

0x91ff,	// (0x0002f6fd) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00035b1a) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00035b1a) list_double2_graphic_pane_t

0x9211,	// (0x0002f70f) list_double_large_graphic_pane_g1_ParamLimits

0x9211,	// (0x0002f70f) list_double_large_graphic_pane_g1

0x923c,	// (0x0002f73a) list_double_large_graphic_pane_g2_ParamLimits

0x923c,	// (0x0002f73a) list_double_large_graphic_pane_g2

0x90b7,	// (0x0002f5b5) list_double_large_graphic_pane_g3_ParamLimits

0x90b7,	// (0x0002f5b5) list_double_large_graphic_pane_g3

0x924d,	// (0x0002f74b) list_double_large_graphic_pane_g4_ParamLimits

0x924d,	// (0x0002f74b) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00035b1f) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00035b1f) list_double_large_graphic_pane_g

0x9260,	// (0x0002f75e) list_double_large_graphic_pane_t1_ParamLimits

0x9260,	// (0x0002f75e) list_double_large_graphic_pane_t1

0x9279,	// (0x0002f777) list_double_large_graphic_pane_t2_ParamLimits

0x9279,	// (0x0002f777) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00035b2a) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00035b2a) list_double_large_graphic_pane_t

0x928b,	// (0x0002f789) list_double2_large_graphic_pane_g1_ParamLimits

0x928b,	// (0x0002f789) list_double2_large_graphic_pane_g1

0x9297,	// (0x0002f795) list_double2_large_graphic_pane_g2_ParamLimits

0x9297,	// (0x0002f795) list_double2_large_graphic_pane_g2

0x92a8,	// (0x0002f7a6) list_double2_large_graphic_pane_g3_ParamLimits

0x92a8,	// (0x0002f7a6) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00035b2f) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00035b2f) list_double2_large_graphic_pane_g

0x92b4,	// (0x0002f7b2) list_double2_large_graphic_pane_t1_ParamLimits

0x92b4,	// (0x0002f7b2) list_double2_large_graphic_pane_t1

0x92ca,	// (0x0002f7c8) list_double2_large_graphic_pane_t2_ParamLimits

0x92ca,	// (0x0002f7c8) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x00035b36) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x00035b36) list_double2_large_graphic_pane_t

0x92dc,	// (0x0002f7da) list_double_heading_pane_g1_ParamLimits

0x92dc,	// (0x0002f7da) list_double_heading_pane_g1

0x92ed,	// (0x0002f7eb) list_double_heading_pane_g2_ParamLimits

0x92ed,	// (0x0002f7eb) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00035b3b) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00035b3b) list_double_heading_pane_g

0x92f9,	// (0x0002f7f7) list_double_heading_pane_t1_ParamLimits

0x92f9,	// (0x0002f7f7) list_double_heading_pane_t1

0x930f,	// (0x0002f80d) list_double_heading_pane_t2_ParamLimits

0x930f,	// (0x0002f80d) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00035b40) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00035b40) list_double_heading_pane_t

0x9321,	// (0x0002f81f) list_double_graphic_heading_pane_g1_ParamLimits

0x9321,	// (0x0002f81f) list_double_graphic_heading_pane_g1

0x92dc,	// (0x0002f7da) list_double_graphic_heading_pane_g2_ParamLimits

0x92dc,	// (0x0002f7da) list_double_graphic_heading_pane_g2

0x92ed,	// (0x0002f7eb) list_double_graphic_heading_pane_g3_ParamLimits

0x92ed,	// (0x0002f7eb) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00035b45) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00035b45) list_double_graphic_heading_pane_g

0x932d,	// (0x0002f82b) list_double_graphic_heading_pane_t1_ParamLimits

0x932d,	// (0x0002f82b) list_double_graphic_heading_pane_t1

0x91ff,	// (0x0002f6fd) list_double_graphic_heading_pane_t2_ParamLimits

0x91ff,	// (0x0002f6fd) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00035b4c) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00035b4c) list_double_graphic_heading_pane_t

0x923c,	// (0x0002f73a) list_double_time_pane_g1_ParamLimits

0x923c,	// (0x0002f73a) list_double_time_pane_g1

0x90b7,	// (0x0002f5b5) list_double_time_pane_g2_ParamLimits

0x90b7,	// (0x0002f5b5) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00035b51) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00035b51) list_double_time_pane_g

0x9343,	// (0x0002f841) list_double_time_pane_t1_ParamLimits

0x9343,	// (0x0002f841) list_double_time_pane_t1

0x9359,	// (0x0002f857) list_double_time_pane_t2_ParamLimits

0x9359,	// (0x0002f857) list_double_time_pane_t2

0x936b,	// (0x0002f869) list_double_time_pane_t3_ParamLimits

0x936b,	// (0x0002f869) list_double_time_pane_t3

0x937d,	// (0x0002f87b) list_double_time_pane_t4_ParamLimits

0x937d,	// (0x0002f87b) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00035b56) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00035b56) list_double_time_pane_t

0x938f,	// (0x0002f88d) list_setting_pane_g1_ParamLimits

0x938f,	// (0x0002f88d) list_setting_pane_g1

0x92ed,	// (0x0002f7eb) list_setting_pane_g2_ParamLimits

0x92ed,	// (0x0002f7eb) list_setting_pane_g2

0x0001,

0xf661,	// (0x00035b5f) list_setting_pane_g_ParamLimits

0xf661,	// (0x00035b5f) list_setting_pane_g

0x939b,	// (0x0002f899) list_setting_pane_t1_ParamLimits

0x939b,	// (0x0002f899) list_setting_pane_t1

0x93b2,	// (0x0002f8b0) list_setting_pane_t2_ParamLimits

0x93b2,	// (0x0002f8b0) list_setting_pane_t2

0x0002,

0xf666,	// (0x00035b64) list_setting_pane_t_ParamLimits

0xf666,	// (0x00035b64) list_setting_pane_t

0x93f1,	// (0x0002f8ef) set_value_pane_cp_ParamLimits

0x93f1,	// (0x0002f8ef) set_value_pane_cp

0x93ff,	// (0x0002f8fd) list_setting_number_pane_g1_ParamLimits

0x93ff,	// (0x0002f8fd) list_setting_number_pane_g1

0x940b,	// (0x0002f909) list_setting_number_pane_g2_ParamLimits

0x940b,	// (0x0002f909) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x00035b6b) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x00035b6b) list_setting_number_pane_g

0x9417,	// (0x0002f915) list_setting_number_pane_t1_ParamLimits

0x9417,	// (0x0002f915) list_setting_number_pane_t1

0x942b,	// (0x0002f929) list_setting_number_pane_t2_ParamLimits

0x942b,	// (0x0002f929) list_setting_number_pane_t2

0x9442,	// (0x0002f940) list_setting_number_pane_t3_ParamLimits

0x9442,	// (0x0002f940) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x00035b70) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x00035b70) list_setting_number_pane_t

0x93f1,	// (0x0002f8ef) set_value_pane_ParamLimits

0x93f1,	// (0x0002f8ef) set_value_pane

0xc9bc,	// (0x00032eba) bg_set_opt_pane_ParamLimits

0xc9bc,	// (0x00032eba) bg_set_opt_pane

0xe8b4,	// (0x00034db2) set_value_pane_t1

0xc9dd,	// (0x00032edb) slider_set_pane_cp3

0xc9e6,	// (0x00032ee4) volume_small_pane_cp

0xc9ef,	// (0x00032eed) list_form_gen_pane

0xc9f8,	// (0x00032ef6) scroll_pane_cp8

0x9485,	// (0x0002f983) form_field_data_pane_ParamLimits

0x9485,	// (0x0002f983) form_field_data_pane

0x94a0,	// (0x0002f99e) form_field_data_wide_pane_ParamLimits

0x94a0,	// (0x0002f99e) form_field_data_wide_pane

0xe8d2,	// (0x00034dd0) form_field_popup_pane_ParamLimits

0xe8d2,	// (0x00034dd0) form_field_popup_pane

0x94c2,	// (0x0002f9c0) form_field_popup_wide_pane_ParamLimits

0x94c2,	// (0x0002f9c0) form_field_popup_wide_pane

0xe8f4,	// (0x00034df2) form_field_slider_pane_ParamLimits

0xe8f4,	// (0x00034df2) form_field_slider_pane

0xe907,	// (0x00034e05) form_field_slider_wide_pane_ParamLimits

0xe907,	// (0x00034e05) form_field_slider_wide_pane

0xca09,	// (0x00032f07) data_form_pane

0x94ed,	// (0x0002f9eb) form_field_data_pane_t1

0xca15,	// (0x00032f13) input_focus_pane

0xe91a,	// (0x00034e18) data_form_wide_pane

0xe937,	// (0x00034e35) form_field_data_wide_pane_t1

0xa2d2,	// (0x000307d0) input_focus_pane_cp6

0x9507,	// (0x0002fa05) form_field_popup_pane_t1

0xca15,	// (0x00032f13) input_focus_pane_cp7

0xca43,	// (0x00032f41) list_form_pane

0xe961,	// (0x00034e5f) form_field_popup_wide_pane_t1

0xca15,	// (0x00032f13) input_focus_pane_cp8

0xca4f,	// (0x00032f4d) list_form_wide_pane

0x9529,	// (0x0002fa27) form_field_slider_pane_t1_ParamLimits

0x9529,	// (0x0002fa27) form_field_slider_pane_t1

0x9541,	// (0x0002fa3f) form_field_slider_pane_t2_ParamLimits

0x9541,	// (0x0002fa3f) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x00035b80) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x00035b80) form_field_slider_pane_t

0x9c4b,	// (0x00030149) input_focus_pane_cp9_ParamLimits

0x9c4b,	// (0x00030149) input_focus_pane_cp9

0x9556,	// (0x0002fa54) slider_cont_pane_ParamLimits

0x9556,	// (0x0002fa54) slider_cont_pane

0xca5e,	// (0x00032f5c) form_field_slider_wide_pane_t1_ParamLimits

0xca5e,	// (0x00032f5c) form_field_slider_wide_pane_t1

0xe976,	// (0x00034e74) form_field_slider_wide_pane_t2_ParamLimits

0xe976,	// (0x00034e74) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x00035b85) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x00035b85) form_field_slider_wide_pane_t

0x9c4b,	// (0x00030149) input_focus_pane_cp10_ParamLimits

0x9c4b,	// (0x00030149) input_focus_pane_cp10

0x956a,	// (0x0002fa68) slider_cont_pane_cp1_ParamLimits

0x956a,	// (0x0002fa68) slider_cont_pane_cp1

0x957e,	// (0x0002fa7c) slider_form_pane_cp

0xca70,	// (0x00032f6e) input_focus_pane_g1

0xca78,	// (0x00032f76) input_focus_pane_g2

0xca80,	// (0x00032f7e) input_focus_pane_g3

0xca88,	// (0x00032f86) input_focus_pane_g4

0xca90,	// (0x00032f8e) input_focus_pane_g5

0xca98,	// (0x00032f96) input_focus_pane_g6

0xcaa0,	// (0x00032f9e) input_focus_pane_g7

0xcaa8,	// (0x00032fa6) input_focus_pane_g8

0xcab0,	// (0x00032fae) input_focus_pane_g9

0x991c,	// (0x0002fe1a) input_focus_pane_g10

0x0009,

0xf68c,	// (0x00035b8a) input_focus_pane_g

0x2de5,	// (0x000292e3) wait_border_pane_g3_copy1

0x9586,	// (0x0002fa84) data_form_pane_t1

0x991c,	// (0x0002fe1a) wait_anim_pane_g1_copy1

0x96b9,	// (0x0002fbb7) data_form_wide_pane_t1

0xe988,	// (0x00034e86) list_form_graphic_pane_cp_ParamLimits

0xe988,	// (0x00034e86) list_form_graphic_pane_cp

0x3d44,	// (0x0002a242) slider_form_pane_g1

0x3d4d,	// (0x0002a24b) slider_form_pane_g2

0x0006,

0xf98a,	// (0x00035e88) slider_form_pane_g

0xe988,	// (0x00034e86) list_form_graphic_pane_ParamLimits

0xe988,	// (0x00034e86) list_form_graphic_pane

0xe99a,	// (0x00034e98) list_form_graphic_pane_g1

0xe9a2,	// (0x00034ea0) list_form_graphic_pane_t1_ParamLimits

0xe9a2,	// (0x00034ea0) list_form_graphic_pane_t1

0x9c8d,	// (0x0003018b) list_highlight_pane_cp5_ParamLimits

0x9c8d,	// (0x0003018b) list_highlight_pane_cp5

0x95a0,	// (0x0002fa9e) find_pane_g1

0xcab8,	// (0x00032fb6) input_find_pane

0x95a9,	// (0x0002faa7) input_find_pane_g1_ParamLimits

0x95a9,	// (0x0002faa7) input_find_pane_g1

0x95b5,	// (0x0002fab3) input_find_pane_t1_ParamLimits

0x95b5,	// (0x0002fab3) input_find_pane_t1

0x95ca,	// (0x0002fac8) input_find_pane_t2_ParamLimits

0x95ca,	// (0x0002fac8) input_find_pane_t2

0x0001,

0xf6a1,	// (0x00035b9f) input_find_pane_t_ParamLimits

0xf6a1,	// (0x00035b9f) input_find_pane_t

0xcac1,	// (0x00032fbf) input_focus_pane_cp5_ParamLimits

0xcac1,	// (0x00032fbf) input_focus_pane_cp5

0xcacf,	// (0x00032fcd) bg_popup_window_pane_cp2_ParamLimits

0xcacf,	// (0x00032fcd) bg_popup_window_pane_cp2

0xcadc,	// (0x00032fda) listscroll_menu_pane_ParamLimits

0xcadc,	// (0x00032fda) listscroll_menu_pane

0xa514,	// (0x00030a12) popup_submenu_window_ParamLimits

0xa514,	// (0x00030a12) popup_submenu_window

0xcae8,	// (0x00032fe6) find_popup_pane_g1

0xcaf0,	// (0x00032fee) input_popup_find_pane_cp

0xcac1,	// (0x00032fbf) input_focus_pane_cp4_ParamLimits

0xcac1,	// (0x00032fbf) input_focus_pane_cp4

0xcafa,	// (0x00032ff8) input_popup_find_pane_t1_ParamLimits

0xcafa,	// (0x00032ff8) input_popup_find_pane_t1

0x9a0c,	// (0x0002ff0a) bg_popup_sub_pane_cp

0xcb28,	// (0x00033026) listscroll_popup_sub_pane

0xcb30,	// (0x0003302e) list_submenu_pane_ParamLimits

0xcb30,	// (0x0003302e) list_submenu_pane

0xcb41,	// (0x0003303f) scroll_pane_cp4

0xcb49,	// (0x00033047) list_single_popup_submenu_pane_ParamLimits

0xcb49,	// (0x00033047) list_single_popup_submenu_pane

0xcb5e,	// (0x0003305c) list_single_popup_submenu_pane_g1

0xcb66,	// (0x00033064) list_single_popup_submenu_pane_t1_ParamLimits

0xcb66,	// (0x00033064) list_single_popup_submenu_pane_t1

0x9c4b,	// (0x00030149) bg_active_tab_pane_cp1_ParamLimits

0x9c4b,	// (0x00030149) bg_active_tab_pane_cp1

0xa552,	// (0x00030a50) tabs_2_active_pane_g1

0xa55a,	// (0x00030a58) tabs_2_active_pane_t1

0x9c4b,	// (0x00030149) bg_passive_tab_pane_cp1_ParamLimits

0x9c4b,	// (0x00030149) bg_passive_tab_pane_cp1

0xa552,	// (0x00030a50) tabs_2_passive_pane_g1

0xa55a,	// (0x00030a58) tabs_2_passive_pane_t1

0x9c8d,	// (0x0003018b) bg_active_tab_pane_cp4

0xa56c,	// (0x00030a6a) tabs_2_long_active_pane_t1

0x0933,	// (0x00026e31) bg_passive_tab_pane_cp4

0x1511,	// (0x00027a0f) list_single_midp_graphic_pane_g4_ParamLimits

0x9c8d,	// (0x0003018b) bg_active_tab_pane_cp5

0xa57f,	// (0x00030a7d) tabs_3_long_active_pane_t1

0x0933,	// (0x00026e31) bg_passive_tab_pane_cp5

0x1511,	// (0x00027a0f) list_single_midp_graphic_pane_g4

0x9c8d,	// (0x0003018b) bg_popup_window_pane_cp13_ParamLimits

0x9c8d,	// (0x0003018b) bg_popup_window_pane_cp13

0xcb84,	// (0x00033082) listscroll_popup_fast_pane_ParamLimits

0xcb84,	// (0x00033082) listscroll_popup_fast_pane

0xcb93,	// (0x00033091) grid_popup_fast_pane_ParamLimits

0xcb93,	// (0x00033091) grid_popup_fast_pane

0xcba5,	// (0x000330a3) scroll_pane_cp9_ParamLimits

0xcba5,	// (0x000330a3) scroll_pane_cp9

0x56c5,	// (0x0002bbc3) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x56c5,	// (0x0002bbc3) list_single_graphic_hl_pane_t1_cp2

0xcbc9,	// (0x000330c7) input_focus_pane_cp20_ParamLimits

0xcbc9,	// (0x000330c7) input_focus_pane_cp20

0xcbd7,	// (0x000330d5) query_popup_data_pane_t1_ParamLimits

0xcbd7,	// (0x000330d5) query_popup_data_pane_t1

0xcbea,	// (0x000330e8) query_popup_data_pane_t2_ParamLimits

0xcbea,	// (0x000330e8) query_popup_data_pane_t2

0xcc30,	// (0x0003312e) query_popup_data_pane_t3_ParamLimits

0xcc30,	// (0x0003312e) query_popup_data_pane_t3

0xcc71,	// (0x0003316f) query_popup_data_pane_t4_ParamLimits

0xcc71,	// (0x0003316f) query_popup_data_pane_t4

0xccad,	// (0x000331ab) query_popup_data_pane_t5_ParamLimits

0xccad,	// (0x000331ab) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x00035ba4) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x00035ba4) query_popup_data_pane_t

0xca70,	// (0x00032f6e) bg_set_opt_pane_g1

0xca78,	// (0x00032f76) bg_set_opt_pane_g2

0xca80,	// (0x00032f7e) bg_set_opt_pane_g3

0xca88,	// (0x00032f86) bg_set_opt_pane_g4

0xca90,	// (0x00032f8e) bg_set_opt_pane_g5

0xca98,	// (0x00032f96) bg_set_opt_pane_g6

0xcaa0,	// (0x00032f9e) bg_set_opt_pane_g7

0xcaa8,	// (0x00032fa6) bg_set_opt_pane_g8

0xcab0,	// (0x00032fae) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x00035baf) bg_set_opt_pane_g

0x00df,	// (0x000265dd) control_top_pane_stacon_ParamLimits

0x00df,	// (0x000265dd) control_top_pane_stacon

0x0132,	// (0x00026630) signal_pane_stacon_ParamLimits

0x0132,	// (0x00026630) signal_pane_stacon

0xd0c4,	// (0x000335c2) stacon_top_pane_g1_ParamLimits

0xd0c4,	// (0x000335c2) stacon_top_pane_g1

0x0157,	// (0x00026655) title_pane_stacon_ParamLimits

0x0157,	// (0x00026655) title_pane_stacon

0x0181,	// (0x0002667f) uni_indicator_pane_stacon_ParamLimits

0x0181,	// (0x0002667f) uni_indicator_pane_stacon

0x0199,	// (0x00026697) battery_pane_stacon_ParamLimits

0x0199,	// (0x00026697) battery_pane_stacon

0x01dd,	// (0x000266db) control_bottom_pane_stacon_ParamLimits

0x01dd,	// (0x000266db) control_bottom_pane_stacon

0x0200,	// (0x000266fe) navi_pane_stacon_ParamLimits

0x0200,	// (0x000266fe) navi_pane_stacon

0xd0e6,	// (0x000335e4) stacon_bottom_pane_g1_ParamLimits

0xd0e6,	// (0x000335e4) stacon_bottom_pane_g1

0xf313,	// (0x00035811) aid_levels_signal_lsc_ParamLimits

0xf313,	// (0x00035811) aid_levels_signal_lsc

0xf32a,	// (0x00035828) signal_pane_stacon_g1_ParamLimits

0xf32a,	// (0x00035828) signal_pane_stacon_g1

0xf33e,	// (0x0003583c) signal_pane_stacon_g2_ParamLimits

0xf33e,	// (0x0003583c) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x00035bc2) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00035bc2) signal_pane_stacon_g

0xf373,	// (0x00035871) title_pane_stacon_t1_ParamLimits

0xf373,	// (0x00035871) title_pane_stacon_t1

0xccf1,	// (0x000331ef) uni_indicator_pane_stacon_g1

0xccfb,	// (0x000331f9) uni_indicator_pane_stacon_g2

0xcd05,	// (0x00033203) uni_indicator_pane_stacon_g3

0xcd0f,	// (0x0003320d) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x00035bce) uni_indicator_pane_stacon_g

0xf398,	// (0x00035896) control_top_pane_stacon_g1

0xf3a0,	// (0x0003589e) control_top_pane_stacon_t1_ParamLimits

0xf3a0,	// (0x0003589e) control_top_pane_stacon_t1

0xf3d7,	// (0x000358d5) aid_levels_battery_lsc_ParamLimits

0xf3d7,	// (0x000358d5) aid_levels_battery_lsc

0xf3ef,	// (0x000358ed) battery_pane_stacon_g1_ParamLimits

0xf3ef,	// (0x000358ed) battery_pane_stacon_g1

0xf402,	// (0x00035900) battery_pane_stacon_g2_ParamLimits

0xf402,	// (0x00035900) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x00035bd7) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x00035bd7) battery_pane_stacon_g

0xf440,	// (0x0003593e) navi_icon_pane_stacon

0xf454,	// (0x00035952) navi_navi_pane_stacon

0xf440,	// (0x0003593e) navi_text_pane_stacon

0xf398,	// (0x00035896) control_bottom_pane_stacon_g1

0xf46a,	// (0x00035968) control_bottom_pane_stacon_t1_ParamLimits

0xf46a,	// (0x00035968) control_bottom_pane_stacon_t1

0xa591,	// (0x00030a8f) grid_app_pane_ParamLimits

0xa591,	// (0x00030a8f) grid_app_pane

0xa5c9,	// (0x00030ac7) scroll_pane_cp15_ParamLimits

0xa5c9,	// (0x00030ac7) scroll_pane_cp15

0xa5de,	// (0x00030adc) cell_app_pane_ParamLimits

0xa5de,	// (0x00030adc) cell_app_pane

0xa62b,	// (0x00030b29) cell_app_pane_g1_ParamLimits

0xa62b,	// (0x00030b29) cell_app_pane_g1

0xcd33,	// (0x00033231) cell_app_pane_g2_ParamLimits

0xcd33,	// (0x00033231) cell_app_pane_g2

0x0001,

0xf6de,	// (0x00035bdc) cell_app_pane_g_ParamLimits

0xf6de,	// (0x00035bdc) cell_app_pane_g

0xcd3f,	// (0x0003323d) cell_app_pane_t1_ParamLimits

0xcd3f,	// (0x0003323d) cell_app_pane_t1

0xcd56,	// (0x00033254) grid_highlight_pane_ParamLimits

0xcd56,	// (0x00033254) grid_highlight_pane

0xca70,	// (0x00032f6e) cell_highlight_pane_g1

0xca78,	// (0x00032f76) cell_highlight_pane_g2

0xca80,	// (0x00032f7e) cell_highlight_pane_g3

0xca88,	// (0x00032f86) cell_highlight_pane_g4

0xca90,	// (0x00032f8e) cell_highlight_pane_g5

0xca98,	// (0x00032f96) cell_highlight_pane_g6

0xcaa0,	// (0x00032f9e) cell_highlight_pane_g7

0xcaa8,	// (0x00032fa6) cell_highlight_pane_g8

0xcab0,	// (0x00032fae) cell_highlight_pane_g9

0x991c,	// (0x0002fe1a) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x00035b8a) cell_highlight_pane_g

0xcd67,	// (0x00033265) bg_scroll_pane

0xf4ab,	// (0x000359a9) scroll_handle_pane

0xcdae,	// (0x000332ac) scroll_bg_pane_g1

0xcdc3,	// (0x000332c1) scroll_bg_pane_g2

0xcddb,	// (0x000332d9) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x00035be1) scroll_bg_pane_g

0xcdf0,	// (0x000332ee) scroll_handle_focus_pane_ParamLimits

0xcdf0,	// (0x000332ee) scroll_handle_focus_pane

0xcdae,	// (0x000332ac) scroll_handle_pane_g1

0xcdfd,	// (0x000332fb) scroll_handle_pane_g2

0xcddb,	// (0x000332d9) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x00035be8) scroll_handle_pane_g

0xcac1,	// (0x00032fbf) bg_popup_sub_pane_cp21_ParamLimits

0xcac1,	// (0x00032fbf) bg_popup_sub_pane_cp21

0xce11,	// (0x0003330f) popup_fep_japan_predictive_window_t1_ParamLimits

0xce11,	// (0x0003330f) popup_fep_japan_predictive_window_t1

0xce28,	// (0x00033326) popup_fep_japan_predictive_window_t2_ParamLimits

0xce28,	// (0x00033326) popup_fep_japan_predictive_window_t2

0xce5b,	// (0x00033359) popup_fep_japan_predictive_window_t3_ParamLimits

0xce5b,	// (0x00033359) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x00035bef) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x00035bef) popup_fep_japan_predictive_window_t

0x9a0c,	// (0x0002ff0a) bg_popup_sub_pane_cp23

0xce92,	// (0x00033390) listscroll_japin_cand_pane

0xce9a,	// (0x00033398) popup_fep_japan_candidate_window_t1

0xcea8,	// (0x000333a6) candidate_pane_ParamLimits

0xcea8,	// (0x000333a6) candidate_pane

0xceba,	// (0x000333b8) scroll_pane_cp30

0xcec4,	// (0x000333c2) list_single_popup_jap_candidate_pane_ParamLimits

0xcec4,	// (0x000333c2) list_single_popup_jap_candidate_pane

0x9a0c,	// (0x0002ff0a) list_highlight_pane_cp30

0xced8,	// (0x000333d6) list_single_popup_jap_candidate_pane_t1

0xa654,	// (0x00030b52) level_1_signal

0xa666,	// (0x00030b64) level_2_signal

0xa679,	// (0x00030b77) level_3_signal

0xa68c,	// (0x00030b8a) level_4_signal

0xa69f,	// (0x00030b9d) level_5_signal

0xa6b2,	// (0x00030bb0) level_6_signal

0xa6c5,	// (0x00030bc3) level_7_signal

0xa654,	// (0x00030b52) level_1_battery

0xa666,	// (0x00030b64) level_2_battery

0xa679,	// (0x00030b77) level_3_battery

0xa68c,	// (0x00030b8a) level_4_battery

0xa69f,	// (0x00030b9d) level_5_battery

0xa6b2,	// (0x00030bb0) level_6_battery

0xa6c5,	// (0x00030bc3) level_7_battery

0xceff,	// (0x000333fd) list_menu_pane_ParamLimits

0xceff,	// (0x000333fd) list_menu_pane

0xcf15,	// (0x00033413) scroll_pane_cp25_ParamLimits

0xcf15,	// (0x00033413) scroll_pane_cp25

0xcf2e,	// (0x0003342c) list_double2_graphic_pane_cp2_ParamLimits

0xcf2e,	// (0x0003342c) list_double2_graphic_pane_cp2

0xcf2e,	// (0x0003342c) list_double2_large_graphic_pane_cp2_ParamLimits

0xcf2e,	// (0x0003342c) list_double2_large_graphic_pane_cp2

0xcf2e,	// (0x0003342c) list_double2_pane_cp2_ParamLimits

0xcf2e,	// (0x0003342c) list_double2_pane_cp2

0xcf2e,	// (0x0003342c) list_double_graphic_pane_cp2_ParamLimits

0xcf2e,	// (0x0003342c) list_double_graphic_pane_cp2

0xcf2e,	// (0x0003342c) list_double_large_graphic_pane_cp2_ParamLimits

0xcf2e,	// (0x0003342c) list_double_large_graphic_pane_cp2

0xcf2e,	// (0x0003342c) list_double_number_pane_cp2_ParamLimits

0xcf2e,	// (0x0003342c) list_double_number_pane_cp2

0xcf2e,	// (0x0003342c) list_double_pane_cp2_ParamLimits

0xcf2e,	// (0x0003342c) list_double_pane_cp2

0xa6eb,	// (0x00030be9) list_single_2graphic_pane_cp2_ParamLimits

0xa6eb,	// (0x00030be9) list_single_2graphic_pane_cp2

0xa6eb,	// (0x00030be9) list_single_graphic_heading_pane_cp2_ParamLimits

0xa6eb,	// (0x00030be9) list_single_graphic_heading_pane_cp2

0xa6eb,	// (0x00030be9) list_single_graphic_pane_cp2_ParamLimits

0xa6eb,	// (0x00030be9) list_single_graphic_pane_cp2

0xa6eb,	// (0x00030be9) list_single_heading_pane_cp2_ParamLimits

0xa6eb,	// (0x00030be9) list_single_heading_pane_cp2

0xcf3e,	// (0x0003343c) list_single_large_graphic_pane_cp2_ParamLimits

0xcf3e,	// (0x0003343c) list_single_large_graphic_pane_cp2

0xa6eb,	// (0x00030be9) list_single_number_heading_pane_cp2_ParamLimits

0xa6eb,	// (0x00030be9) list_single_number_heading_pane_cp2

0xa6eb,	// (0x00030be9) list_single_number_pane_cp2_ParamLimits

0xa6eb,	// (0x00030be9) list_single_number_pane_cp2

0xa6eb,	// (0x00030be9) list_single_pane_cp2_ParamLimits

0xa6eb,	// (0x00030be9) list_single_pane_cp2

0xcf57,	// (0x00033455) bg_popup_sub_pane_cp22

0x0043,	// (0x00026541) popup_side_volume_key_window_g1

0x006d,	// (0x0002656b) popup_side_volume_key_window_t1

0x008b,	// (0x00026589) volume_small_pane_cp1

0x9c4b,	// (0x00030149) bg_popup_sub_pane_cp24_ParamLimits

0x9c4b,	// (0x00030149) bg_popup_sub_pane_cp24

0xcf6d,	// (0x0003346b) fep_china_uni_candidate_pane_ParamLimits

0xcf6d,	// (0x0003346b) fep_china_uni_candidate_pane

0xcf81,	// (0x0003347f) fep_china_uni_entry_pane

0xcf91,	// (0x0003348f) popup_fep_china_uni_window_g1

0xcfad,	// (0x000334ab) fep_china_uni_entry_pane_g1

0xcfb7,	// (0x000334b5) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x00035c20) fep_china_uni_entry_pane_g

0xcfc1,	// (0x000334bf) fep_entry_item_pane

0xcfcb,	// (0x000334c9) fep_candidate_item_pane

0xcfd3,	// (0x000334d1) fep_china_uni_candidate_pane_g1

0xcfdd,	// (0x000334db) fep_china_uni_candidate_pane_g2

0xcfe5,	// (0x000334e3) fep_china_uni_candidate_pane_g3

0xcfed,	// (0x000334eb) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x00035c25) fep_china_uni_candidate_pane_g

0x991c,	// (0x0002fe1a) fep_entry_item_pane_g1

0xcff7,	// (0x000334f5) fep_entry_item_pane_t1_ParamLimits

0xcff7,	// (0x000334f5) fep_entry_item_pane_t1

0xd00d,	// (0x0003350b) fep_candidate_item_pane_t1_ParamLimits

0xd00d,	// (0x0003350b) fep_candidate_item_pane_t1

0xd022,	// (0x00033520) fep_candidate_item_pane_t2_ParamLimits

0xd022,	// (0x00033520) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x00035c2e) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x00035c2e) fep_candidate_item_pane_t

0x9c8d,	// (0x0003018b) list_highlight_pane_cp31_ParamLimits

0x9c8d,	// (0x0003018b) list_highlight_pane_cp31

0xd034,	// (0x00033532) level_1_signal_lsc

0xd03d,	// (0x0003353b) level_2_signal_lsc

0xd046,	// (0x00033544) level_3_signal_lsc

0xd04f,	// (0x0003354d) level_4_signal_lsc

0xd058,	// (0x00033556) level_5_signal_lsc

0xd061,	// (0x0003355f) level_6_signal_lsc

0xd06a,	// (0x00033568) level_7_signal_lsc

0xd06a,	// (0x00033568) level_1_battery_lsc

0xd073,	// (0x00033571) level_2_battery_lsc

0xd07c,	// (0x0003357a) level_3_battery_lsc

0xd085,	// (0x00033583) level_4_battery_lsc

0xd08e,	// (0x0003358c) level_5_battery_lsc

0xd097,	// (0x00033595) level_6_battery_lsc

0xd034,	// (0x00033532) level_7_battery_lsc

0xd0a0,	// (0x0003359e) scroll_handle_focus_pane_g1

0xd0a9,	// (0x000335a7) scroll_handle_focus_pane_g2

0xd0b2,	// (0x000335b0) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x00035c33) scroll_handle_focus_pane_g

0x95df,	// (0x0002fadd) list_single_2graphic_pane_g1_ParamLimits

0x95df,	// (0x0002fadd) list_single_2graphic_pane_g1

0x9080,	// (0x0002f57e) list_single_2graphic_pane_g2_ParamLimits

0x9080,	// (0x0002f57e) list_single_2graphic_pane_g2

0xe83b,	// (0x00034d39) list_single_2graphic_pane_g3_ParamLimits

0xe83b,	// (0x00034d39) list_single_2graphic_pane_g3

0x95eb,	// (0x0002fae9) list_single_2graphic_pane_g4_ParamLimits

0x95eb,	// (0x0002fae9) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x00035c3a) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x00035c3a) list_single_2graphic_pane_g

0x95f7,	// (0x0002faf5) list_single_2graphic_pane_t1_ParamLimits

0x95f7,	// (0x0002faf5) list_single_2graphic_pane_t1

0x9625,	// (0x0002fb23) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9625,	// (0x0002fb23) list_double2_graphic_large_graphic_pane_g1

0x9297,	// (0x0002f795) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9297,	// (0x0002f795) list_double2_graphic_large_graphic_pane_g2

0x92a8,	// (0x0002f7a6) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x92a8,	// (0x0002f7a6) list_double2_graphic_large_graphic_pane_g3

0x9637,	// (0x0002fb35) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9637,	// (0x0002fb35) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x00035c43) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x00035c43) list_double2_graphic_large_graphic_pane_g

0x9643,	// (0x0002fb41) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9643,	// (0x0002fb41) list_double2_graphic_large_graphic_pane_t1

0x9659,	// (0x0002fb57) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9659,	// (0x0002fb57) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x00035c4c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x00035c4c) list_double2_graphic_large_graphic_pane_t

0xd144,	// (0x00033642) popup_fast_swap_window_ParamLimits

0xd144,	// (0x00033642) popup_fast_swap_window

0xd162,	// (0x00033660) popup_side_volume_key_window

0xd180,	// (0x0003367e) stacon_top_pane

0xd18a,	// (0x00033688) status_pane_ParamLimits

0xd18a,	// (0x00033688) status_pane

0xa814,	// (0x00030d12) status_small_pane

0x9a0c,	// (0x0002ff0a) control_pane

0x9a0c,	// (0x0002ff0a) stacon_bottom_pane

0xc9f8,	// (0x00032ef6) scroll_pane_cp121

0xc9ef,	// (0x00032eed) set_content_pane

0xa77d,	// (0x00030c7b) bg_active_tab_pane_g1_cp1

0xd0bb,	// (0x000335b9) bg_active_tab_pane_g2_cp1

0xa786,	// (0x00030c84) bg_active_tab_pane_g3_cp1

0xa77d,	// (0x00030c7b) bg_passive_tab_pane_g1_cp1

0xd0bb,	// (0x000335b9) bg_passive_tab_pane_g2_cp1

0xa786,	// (0x00030c84) bg_passive_tab_pane_g3_cp1

0xa78f,	// (0x00030c8d) bg_active_tab_pane_g1_cp2

0xd0bb,	// (0x000335b9) bg_active_tab_pane_g2_cp2

0xa798,	// (0x00030c96) bg_active_tab_pane_g3_cp2

0xa78f,	// (0x00030c8d) bg_passive_tab_pane_g1_cp2

0xd0bb,	// (0x000335b9) bg_passive_tab_pane_g2_cp2

0xa798,	// (0x00030c96) bg_passive_tab_pane_g3_cp2

0xa7a1,	// (0x00030c9f) bg_active_tab_pane_g1_cp3

0xd0bb,	// (0x000335b9) bg_active_tab_pane_g2_cp3

0xa7aa,	// (0x00030ca8) bg_active_tab_pane_g3_cp3

0xa7a1,	// (0x00030c9f) bg_passive_tab_pane_g1_cp3

0xd0bb,	// (0x000335b9) bg_passive_tab_pane_g2_cp3

0xa7aa,	// (0x00030ca8) bg_passive_tab_pane_g3_cp3

0xa7b3,	// (0x00030cb1) bg_active_tab_pane_g1_cp4

0xd0bb,	// (0x000335b9) bg_active_tab_pane_g2_cp4

0xa7bc,	// (0x00030cba) bg_active_tab_pane_g3_cp4

0xa7b3,	// (0x00030cb1) bg_passive_tab_pane_g1_cp4

0xd0bb,	// (0x000335b9) bg_passive_tab_pane_g2_cp4

0xa7bc,	// (0x00030cba) bg_passive_tab_pane_g3_cp4

0xd102,	// (0x00033600) bg_active_tab_pane_g1_cp5

0xd0bb,	// (0x000335b9) bg_active_tab_pane_g2_cp5

0xd10b,	// (0x00033609) bg_active_tab_pane_g3_cp5

0xd102,	// (0x00033600) bg_passive_tab_pane_g1_cp5

0xd0bb,	// (0x000335b9) bg_passive_tab_pane_g2_cp5

0xd10b,	// (0x00033609) bg_passive_tab_pane_g3_cp5

0x4368,	// (0x0002a866) list_set_graphic_pane_ParamLimits

0x4368,	// (0x0002a866) list_set_graphic_pane

0x9a0c,	// (0x0002ff0a) bg_set_opt_pane_cp4

0xa7c5,	// (0x00030cc3) list_set_graphic_pane_g1_ParamLimits

0xa7c5,	// (0x00030cc3) list_set_graphic_pane_g1

0xa7d1,	// (0x00030ccf) list_set_graphic_pane_g2_ParamLimits

0xa7d1,	// (0x00030ccf) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x00035c51) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x00035c51) list_set_graphic_pane_g

0x0009,

0xfad8,	// (0x00035fd6) volume_small_pane_cp_g

0xa7f5,	// (0x00030cf3) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa7f5,	// (0x00030cf3) list_double2_large_graphic_pane_g1_cp2

0xa803,	// (0x00030d01) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xa803,	// (0x00030d01) list_double2_large_graphic_pane_g2_cp2

0xd114,	// (0x00033612) list_double2_large_graphic_pane_g3_cp2

0xd11c,	// (0x0003361a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xd11c,	// (0x0003361a) list_double2_large_graphic_pane_t1_cp2

0xd132,	// (0x00033630) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xd132,	// (0x00033630) list_double2_large_graphic_pane_t2_cp2

0xbadb,	// (0x00031fd9) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xbadb,	// (0x00031fd9) list_double_large_graphic_pane_g1_cp2

0xbaee,	// (0x00031fec) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xbaee,	// (0x00031fec) list_double_large_graphic_pane_g2_cp2

0xd26b,	// (0x00033769) list_double_large_graphic_pane_g3_cp2

0x38ed,	// (0x00029deb) list_double_large_graphic_pane_g4_cp

0x38f5,	// (0x00029df3) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x38f5,	// (0x00029df3) list_double_large_graphic_pane_t1_cp2

0x390c,	// (0x00029e0a) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x390c,	// (0x00029e0a) list_double_large_graphic_pane_t2_cp2

0xa81f,	// (0x00030d1d) list_double2_graphic_pane_g1_cp2_ParamLimits

0xa81f,	// (0x00030d1d) list_double2_graphic_pane_g1_cp2

0xa82d,	// (0x00030d2b) list_double2_graphic_pane_g2_cp2_ParamLimits

0xa82d,	// (0x00030d2b) list_double2_graphic_pane_g2_cp2

0xa83e,	// (0x00030d3c) list_double2_graphic_pane_g3_cp2

0xd198,	// (0x00033696) list_double2_graphic_pane_t1_cp2_ParamLimits

0xd198,	// (0x00033696) list_double2_graphic_pane_t1_cp2

0xd1ae,	// (0x000336ac) list_double2_graphic_pane_t2_cp2_ParamLimits

0xd1ae,	// (0x000336ac) list_double2_graphic_pane_t2_cp2

0xd1c0,	// (0x000336be) list_single_number_heading_pane_g1_cp2_ParamLimits

0xd1c0,	// (0x000336be) list_single_number_heading_pane_g1_cp2

0xd1cc,	// (0x000336ca) list_single_number_heading_pane_g2_cp2

0xd1d4,	// (0x000336d2) list_single_number_heading_pane_t1_cp2_ParamLimits

0xd1d4,	// (0x000336d2) list_single_number_heading_pane_t1_cp2

0xa848,	// (0x00030d46) list_single_number_heading_pane_t2_cp2_ParamLimits

0xa848,	// (0x00030d46) list_single_number_heading_pane_t2_cp2

0xd1ea,	// (0x000336e8) list_single_number_heading_pane_t3_cp2_ParamLimits

0xd1ea,	// (0x000336e8) list_single_number_heading_pane_t3_cp2

0xd1c0,	// (0x000336be) list_single_heading_pane_g1_cp2_ParamLimits

0xd1c0,	// (0x000336be) list_single_heading_pane_g1_cp2

0xd1cc,	// (0x000336ca) list_single_heading_pane_g2_cp2

0xd1d4,	// (0x000336d2) list_single_heading_pane_t1_cp2_ParamLimits

0xd1d4,	// (0x000336d2) list_single_heading_pane_t1_cp2

0xbac7,	// (0x00031fc5) list_single_heading_pane_t2_cp2_ParamLimits

0xbac7,	// (0x00031fc5) list_single_heading_pane_t2_cp2

0x360b,	// (0x00029b09) list_double_graphic_pane_g1_cp2_ParamLimits

0x360b,	// (0x00029b09) list_double_graphic_pane_g1_cp2

0x3617,	// (0x00029b15) list_double_graphic_pane_g2_cp2_ParamLimits

0x3617,	// (0x00029b15) list_double_graphic_pane_g2_cp2

0x3626,	// (0x00029b24) list_double_graphic_pane_g3_cp2

0x362e,	// (0x00029b2c) list_double_graphic_pane_t1_cp2_ParamLimits

0x362e,	// (0x00029b2c) list_double_graphic_pane_t1_cp2

0x3644,	// (0x00029b42) list_double_graphic_pane_t2_cp2_ParamLimits

0x3644,	// (0x00029b42) list_double_graphic_pane_t2_cp2

0xd25f,	// (0x0003375d) list_double_number_pane_g1_cp2_ParamLimits

0xd25f,	// (0x0003375d) list_double_number_pane_g1_cp2

0xd26b,	// (0x00033769) list_double_number_pane_g2_cp2

0xba61,	// (0x00031f5f) list_double_number_pane_t1_cp2_ParamLimits

0xba61,	// (0x00031f5f) list_double_number_pane_t1_cp2

0x35e3,	// (0x00029ae1) list_double_number_pane_t2_cp2_ParamLimits

0x35e3,	// (0x00029ae1) list_double_number_pane_t2_cp2

0x35f9,	// (0x00029af7) list_double_number_pane_t3_cp2_ParamLimits

0x35f9,	// (0x00029af7) list_double_number_pane_t3_cp2

0xb99e,	// (0x00031e9c) list_single_graphic_pane_g1_cp2_ParamLimits

0xb99e,	// (0x00031e9c) list_single_graphic_pane_g1_cp2

0x02f9,	// (0x000267f7) list_single_graphic_pane_g2_cp2_ParamLimits

0x02f9,	// (0x000267f7) list_single_graphic_pane_g2_cp2

0x0305,	// (0x00026803) list_single_graphic_pane_g3_cp2

0x348e,	// (0x0002998c) list_single_graphic_pane_t1_cp2_ParamLimits

0x348e,	// (0x0002998c) list_single_graphic_pane_t1_cp2

0x02f9,	// (0x000267f7) list_single_number_pane_g1_cp2_ParamLimits

0x02f9,	// (0x000267f7) list_single_number_pane_g1_cp2

0x0305,	// (0x00026803) list_single_number_pane_g2_cp2

0x348e,	// (0x0002998c) list_single_number_pane_t1_cp2_ParamLimits

0x348e,	// (0x0002998c) list_single_number_pane_t1_cp2

0xb98a,	// (0x00031e88) list_single_number_pane_t2_cp2_ParamLimits

0xb98a,	// (0x00031e88) list_single_number_pane_t2_cp2

0xa803,	// (0x00030d01) list_double2_pane_g1_cp2_ParamLimits

0xa803,	// (0x00030d01) list_double2_pane_g1_cp2

0xd114,	// (0x00033612) list_double2_pane_g2_cp2

0xd237,	// (0x00033735) list_double2_pane_t1_cp2_ParamLimits

0xd237,	// (0x00033735) list_double2_pane_t1_cp2

0xd24d,	// (0x0003374b) list_double2_pane_t2_cp2_ParamLimits

0xd24d,	// (0x0003374b) list_double2_pane_t2_cp2

0xd25f,	// (0x0003375d) list_double_pane_g1_cp2_ParamLimits

0xd25f,	// (0x0003375d) list_double_pane_g1_cp2

0xd26b,	// (0x00033769) list_double_pane_g2_cp2

0xd273,	// (0x00033771) list_double_pane_t1_cp2_ParamLimits

0xd273,	// (0x00033771) list_double_pane_t1_cp2

0xd289,	// (0x00033787) list_double_pane_t2_cp2_ParamLimits

0xd289,	// (0x00033787) list_double_pane_t2_cp2

0x02e9,	// (0x000267e7) list_single_pane_cp2_g3

0x02f9,	// (0x000267f7) list_single_pane_g1_cp2_ParamLimits

0x02f9,	// (0x000267f7) list_single_pane_g1_cp2

0x0305,	// (0x00026803) list_single_pane_g2_cp2

0x030d,	// (0x0002680b) list_single_pane_t1_cp2_ParamLimits

0x030d,	// (0x0002680b) list_single_pane_t1_cp2

0xa876,	// (0x00030d74) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa876,	// (0x00030d74) list_single_large_graphic_pane_g1_cp2

0x0333,	// (0x00026831) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x0333,	// (0x00026831) list_single_large_graphic_pane_g2_cp2

0x033f,	// (0x0002683d) list_single_large_graphic_pane_g3_cp2

0x0347,	// (0x00026845) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x0347,	// (0x00026845) list_single_large_graphic_pane_g4_cp1

0x0361,	// (0x0002685f) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x0361,	// (0x0002685f) list_single_large_graphic_pane_t1_cp2

0x3458,	// (0x00029956) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3458,	// (0x00029956) list_single_graphic_heading_pane_g1_cp2

0xb80f,	// (0x00031d0d) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xb80f,	// (0x00031d0d) list_single_graphic_heading_pane_g4_cp2

0x0305,	// (0x00026803) list_single_graphic_heading_pane_g5_cp2

0x3464,	// (0x00029962) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3464,	// (0x00029962) list_single_graphic_heading_pane_t1_cp2

0xb820,	// (0x00031d1e) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xb820,	// (0x00031d1e) list_single_graphic_heading_pane_t2_cp2

0x3419,	// (0x00029917) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3419,	// (0x00029917) list_single_2graphic_pane_g1_cp2

0xb80f,	// (0x00031d0d) list_single_2graphic_pane_g2_cp2_ParamLimits

0xb80f,	// (0x00031d0d) list_single_2graphic_pane_g2_cp2

0x0305,	// (0x00026803) list_single_2graphic_pane_g3_cp2

0x3436,	// (0x00029934) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3436,	// (0x00029934) list_single_2graphic_pane_g4_cp2

0x3442,	// (0x00029940) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3442,	// (0x00029940) list_single_2graphic_pane_t1_cp2

0x991c,	// (0x0002fe1a) list_highlight_pane_g10_cp1

0x2ff1,	// (0x000294ef) list_highlight_pane_g1_cp1

0x2ff9,	// (0x000294f7) list_highlight_pane_g2_cp1

0x3001,	// (0x000294ff) list_highlight_pane_g3_cp1

0x3009,	// (0x00029507) list_highlight_pane_g4_cp1

0x3011,	// (0x0002950f) list_highlight_pane_g5_cp1

0x3019,	// (0x00029517) list_highlight_pane_g6_cp1

0x3021,	// (0x0002951f) list_highlight_pane_g7_cp1

0x3029,	// (0x00029527) list_highlight_pane_g8_cp1

0x3031,	// (0x0002952f) list_highlight_pane_g9_cp1

0xb7d5,	// (0x00031cd3) form_field_slider_pane_t3

0xb7e3,	// (0x00031ce1) form_field_slider_pane_t4

0x2f2d,	// (0x0002942b) slider_form_pane_ParamLimits

0x2f2d,	// (0x0002942b) slider_form_pane

0x9a0c,	// (0x0002ff0a) control_abbreviations

0x9a0c,	// (0x0002ff0a) control_conventions

0x9a0c,	// (0x0002ff0a) control_definitions

0x9a0c,	// (0x0002ff0a) format_table_attribute

0x3719,	// (0x00029c17) bg_popup_preview_window_pane_g9

0x9a0c,	// (0x0002ff0a) format_table_data2

0x9a0c,	// (0x0002ff0a) format_table_data3

0x9a0c,	// (0x0002ff0a) format_table_data_example

0x0008,

0x9a0c,	// (0x0002ff0a) intro_purpose

0xf8ea,	// (0x00035de8) bg_popup_preview_window_pane_g

0x9a0c,	// (0x0002ff0a) texts_category

0x9a0c,	// (0x0002ff0a) texts_graphics

0x0377,	// (0x00026875) text_digital

0x0386,	// (0x00026884) text_primary

0x0395,	// (0x00026893) text_primary_small

0x03a4,	// (0x000268a2) text_secondary

0x03b3,	// (0x000268b1) text_title

0x3ead,	// (0x0002a3ab) bg_passive_tab_pane_g1_cp3_srt

0xd0bb,	// (0x000335b9) bg_passive_tab_pane_g2_cp3_srt

0x3eb6,	// (0x0002a3b4) bg_passive_tab_pane_g3_cp3_srt

0x9c4b,	// (0x00030149) bg_active_tab_pane_cp3_srt_ParamLimits

0x9c4b,	// (0x00030149) bg_active_tab_pane_cp3_srt

0x3ebf,	// (0x0002a3bd) tabs_4_active_pane_srt_g1

0xbdd3,	// (0x000322d1) tabs_4_active_pane_srt_t1_ParamLimits

0xbdd3,	// (0x000322d1) tabs_4_active_pane_srt_t1

0x3ead,	// (0x0002a3ab) bg_active_tab_pane_g1_cp3_copy1

0xd0bb,	// (0x000335b9) bg_active_tab_pane_g2_cp3_copy1

0x3eb6,	// (0x0002a3b4) bg_active_tab_pane_g3_cp3_copy1

0x9c8d,	// (0x0003018b) tabs_2_long_active_pane_srt_ParamLimits

0x9c8d,	// (0x0003018b) tabs_2_long_active_pane_srt

0x9c8d,	// (0x0003018b) tabs_2_long_passive_pane_srt_ParamLimits

0x9c8d,	// (0x0003018b) tabs_2_long_passive_pane_srt

0x0933,	// (0x00026e31) bg_passive_tab_pane_cp4_srt_ParamLimits

0x0933,	// (0x00026e31) bg_passive_tab_pane_cp4_srt

0x3b55,	// (0x0002a053) bg_passive_tab_pane_g1_cp4_srt

0xd0bb,	// (0x000335b9) bg_passive_tab_pane_g2_cp4_srt

0x3b5e,	// (0x0002a05c) bg_passive_tab_pane_g3_cp4_srt

0x9c8d,	// (0x0003018b) bg_active_tab_pane_cp4_srt_ParamLimits

0x9c8d,	// (0x0003018b) bg_active_tab_pane_cp4_srt

0xbbb1,	// (0x000320af) tabs_2_long_active_pane_srt_t1_ParamLimits

0xbbb1,	// (0x000320af) tabs_2_long_active_pane_srt_t1

0x3b55,	// (0x0002a053) bg_active_tab_pane_g1_cp4_srt

0xd0bb,	// (0x000335b9) bg_active_tab_pane_g2_cp4_srt

0x3b5e,	// (0x0002a05c) bg_active_tab_pane_g3_cp4_srt

0x9c4b,	// (0x00030149) tabs_3_long_active_pane_srt_ParamLimits

0x9c4b,	// (0x00030149) tabs_3_long_active_pane_srt

0x9c4b,	// (0x00030149) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x9c4b,	// (0x00030149) tabs_3_long_passive_pane_cp_srt

0x9c4b,	// (0x00030149) tabs_3_long_passive_pane_srt_ParamLimits

0x9c4b,	// (0x00030149) tabs_3_long_passive_pane_srt

0x0933,	// (0x00026e31) bg_passive_tab_pane_cp5_srt_ParamLimits

0x0933,	// (0x00026e31) bg_passive_tab_pane_cp5_srt

0xd102,	// (0x00033600) bg_passive_tab_pane_g1_cp5_srt

0xd0bb,	// (0x000335b9) bg_passive_tab_pane_g2_cp5_srt

0xd10b,	// (0x00033609) bg_passive_tab_pane_g3_cp5_srt

0x9c8d,	// (0x0003018b) bg_active_tab_pane_cp5_srt_ParamLimits

0x9c8d,	// (0x0003018b) bg_active_tab_pane_cp5_srt

0xbb9b,	// (0x00032099) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbb9b,	// (0x00032099) tabs_3_long_active_pane_srt_t1

0xd102,	// (0x00033600) bg_active_tab_pane_g1_cp5_srt

0xd0bb,	// (0x000335b9) bg_active_tab_pane_g2_cp5_srt

0xd10b,	// (0x00033609) bg_active_tab_pane_g3_cp5_srt

0x3b35,	// (0x0002a033) navi_text_pane_srt_t1

0x3b2d,	// (0x0002a02b) navi_icon_pane_srt_g1

0x0627,	// (0x00026b25) midp_editing_number_pane_srt

0x03c2,	// (0x000268c0) midp_ticker_pane_srt

0x062f,	// (0x00026b2d) midp_ticker_pane_srt_g1

0x0637,	// (0x00026b35) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x00035c70) midp_ticker_pane_srt_g

0x063f,	// (0x00026b3d) midp_ticker_pane_srt_t1

0x3b1e,	// (0x0002a01c) midp_editing_number_pane_t1_copy1

0x0933,	// (0x00026e31) listscroll_midp_pane

0x0933,	// (0x00026e31) midp_form_pane

0x042c,	// (0x0002692a) midp_info_popup_window_ParamLimits

0x042c,	// (0x0002692a) midp_info_popup_window

0xcac1,	// (0x00032fbf) bg_popup_sub_pane_cp50_ParamLimits

0xcac1,	// (0x00032fbf) bg_popup_sub_pane_cp50

0x2c27,	// (0x00029125) listscroll_midp_info_pane_ParamLimits

0x2c27,	// (0x00029125) listscroll_midp_info_pane

0x2c0f,	// (0x0002910d) listscroll_form_midp_pane_ParamLimits

0x2c0f,	// (0x0002910d) listscroll_form_midp_pane

0x2c1b,	// (0x00029119) scroll_bar_cp050

0xb7c9,	// (0x00031cc7) list_midp_pane

0x4942,	// (0x0002ae40) signal_pane_g2_cp

0x2b29,	// (0x00029027) listscroll_midp_info_pane_t1_ParamLimits

0x2b29,	// (0x00029027) listscroll_midp_info_pane_t1

0x2b41,	// (0x0002903f) listscroll_midp_info_pane_t2_ParamLimits

0x2b41,	// (0x0002903f) listscroll_midp_info_pane_t2

0x2b7f,	// (0x0002907d) listscroll_midp_info_pane_t3_ParamLimits

0x2b7f,	// (0x0002907d) listscroll_midp_info_pane_t3

0x2bb9,	// (0x000290b7) listscroll_midp_info_pane_t4_ParamLimits

0x2bb9,	// (0x000290b7) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x00035d23) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x00035d23) listscroll_midp_info_pane_t

0xcb41,	// (0x0003303f) scroll_pane_cp21

0x186d,	// (0x00027d6b) form_midp_field_choice_group_pane

0x1876,	// (0x00027d74) form_midp_field_text_pane

0x2b0f,	// (0x0002900d) form_midp_field_time_pane

0x2b17,	// (0x00029015) form_midp_gauge_slider_pane

0x2b20,	// (0x0002901e) form_midp_gauge_wait_pane

0x9a0c,	// (0x0002ff0a) form_midp_image_pane

0x9687,	// (0x0002fb85) list_single_midp_pane_ParamLimits

0x9687,	// (0x0002fb85) list_single_midp_pane

0xb7a1,	// (0x00031c9f) form_midp_field_text_pane_t1

0x158f,	// (0x00027a8d) input_focus_pane_cp050

0x185c,	// (0x00027d5a) list_midp_form_text_pane

0x1800,	// (0x00027cfe) form_midp_field_choice_group_pane_t1

0x180e,	// (0x00027d0c) input_focus_pane_cp051

0x1822,	// (0x00027d20) list_midp_choice_pane

0x9a0c,	// (0x0002ff0a) status_idle_pane

0x17e4,	// (0x00027ce2) form_midp_field_time_pane_t1

0x991c,	// (0x0002fe1a) wait_anim_pane_g2_copy1

0x17f2,	// (0x00027cf0) form_midp_field_time_pane_t2

0x0001,

0x04dc,	// (0x000269da) aid_navinavi_width_2_pane

0xf820,	// (0x00035d1e) form_midp_field_time_pane_t

0x9a0c,	// (0x0002ff0a) input_focus_pane_cp052

0x9a0c,	// (0x0002ff0a) bg_input_focus_pane_cp040

0x17a4,	// (0x00027ca2) form_midp_gauge_slider_pane_t1

0x17b2,	// (0x00027cb0) form_midp_gauge_slider_pane_t2

0xb785,	// (0x00031c83) form_midp_gauge_slider_pane_t3

0xb793,	// (0x00031c91) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x00035d15) form_midp_gauge_slider_pane_t

0x17dc,	// (0x00027cda) form_midp_slider_pane

0x9c8d,	// (0x0003018b) bg_input_focus_pane_cp041_ParamLimits

0x9c8d,	// (0x0003018b) bg_input_focus_pane_cp041

0x1771,	// (0x00027c6f) form_midp_gauge_wait_pane_t1_ParamLimits

0x1771,	// (0x00027c6f) form_midp_gauge_wait_pane_t1

0x1783,	// (0x00027c81) form_midp_gauge_wait_pane_t2_ParamLimits

0x1783,	// (0x00027c81) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x00035d10) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x00035d10) form_midp_gauge_wait_pane_t

0x1795,	// (0x00027c93) form_midp_wait_pane_ParamLimits

0x1795,	// (0x00027c93) form_midp_wait_pane

0x1739,	// (0x00027c37) form_midp_image_pane_g1

0x1742,	// (0x00027c40) form_midp_image_pane_t1

0x1751,	// (0x00027c4f) form_midp_image_pane_t2

0x1760,	// (0x00027c5e) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x00035d09) form_midp_image_pane_t

0x1730,	// (0x00027c2e) list_single_midp_pane_g1

0xeafb,	// (0x00034ff9) list_single_midp_pane_t1

0xb76e,	// (0x00031c6c) list_midp_form_item_pane_ParamLimits

0xb76e,	// (0x00031c6c) list_midp_form_item_pane

0x0484,	// (0x00026982) list_midp_form_item_pane_t1

0x0493,	// (0x00026991) midp_ticker_pane_g1

0x049f,	// (0x0002699d) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x00035c56) midp_ticker_pane_g

0xa91b,	// (0x00030e19) midp_ticker_pane_t1

0xbd40,	// (0x0003223e) midp_editing_number_pane_t1

0x3d6f,	// (0x0002a26d) midp_editing_number_pane

0x3d7e,	// (0x0002a27c) midp_ticker_pane

0x3b0e,	// (0x0002a00c) ai_message_heading_pane

0x9a0c,	// (0x0002ff0a) bg_popup_window_pane_cp14

0x3b16,	// (0x0002a014) listscroll_ai_message_pane

0x3a94,	// (0x00029f92) ai_message_heading_pane_g1_ParamLimits

0x3a94,	// (0x00029f92) ai_message_heading_pane_g1

0x3aa0,	// (0x00029f9e) ai_message_heading_pane_g2_ParamLimits

0x3aa0,	// (0x00029f9e) ai_message_heading_pane_g2

0x3aae,	// (0x00029fac) ai_message_heading_pane_g3_ParamLimits

0x3aae,	// (0x00029fac) ai_message_heading_pane_g3

0x3aba,	// (0x00029fb8) ai_message_heading_pane_g4_ParamLimits

0x3aba,	// (0x00029fb8) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x00035e4a) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x00035e4a) ai_message_heading_pane_g

0x3ac6,	// (0x00029fc4) ai_message_heading_pane_t1_ParamLimits

0x3ac6,	// (0x00029fc4) ai_message_heading_pane_t1

0x3ae0,	// (0x00029fde) ai_message_heading_pane_t2_ParamLimits

0x3ae0,	// (0x00029fde) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x00035e53) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x00035e53) ai_message_heading_pane_t

0x3af4,	// (0x00029ff2) bg_popup_heading_pane_cp1_ParamLimits

0x3af4,	// (0x00029ff2) bg_popup_heading_pane_cp1

0x3a82,	// (0x00029f80) list_ai_message_pane_ParamLimits

0x3a82,	// (0x00029f80) list_ai_message_pane

0xcb41,	// (0x0003303f) scroll_pane_cp10

0x3a1e,	// (0x00029f1c) list_ai_message_pane_g1

0x3a26,	// (0x00029f24) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x00035e27) list_ai_message_pane_g

0x3a2e,	// (0x00029f2c) list_ai_message_pane_t1_ParamLimits

0x3a2e,	// (0x00029f2c) list_ai_message_pane_t1

0x3a43,	// (0x00029f41) list_ai_message_pane_t2_ParamLimits

0x3a43,	// (0x00029f41) list_ai_message_pane_t2

0x3a58,	// (0x00029f56) list_ai_message_pane_t3_ParamLimits

0x3a58,	// (0x00029f56) list_ai_message_pane_t3

0x3a6d,	// (0x00029f6b) list_ai_message_pane_t4_ParamLimits

0x3a6d,	// (0x00029f6b) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x00035e2c) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x00035e2c) list_ai_message_pane_t

0xbb81,	// (0x0003207f) cell_ai_soft_ind_pane_ParamLimits

0xbb81,	// (0x0003207f) cell_ai_soft_ind_pane

0x04bd,	// (0x000269bb) cell_ai_soft_ind_pane_g1_ParamLimits

0x04bd,	// (0x000269bb) cell_ai_soft_ind_pane_g1

0x9a0c,	// (0x0002ff0a) grid_highlight_cp1

0x04ca,	// (0x000269c8) text_secondary_cp56_ParamLimits

0x04ca,	// (0x000269c8) text_secondary_cp56

0x39dc,	// (0x00029eda) example_general_pane_ParamLimits

0x39dc,	// (0x00029eda) example_general_pane

0x39e8,	// (0x00029ee6) example_parent_pane_g1_ParamLimits

0x39e8,	// (0x00029ee6) example_parent_pane_g1

0x39f4,	// (0x00029ef2) example_parent_pane_t1_ParamLimits

0x39f4,	// (0x00029ef2) example_parent_pane_t1

0xaf81,	// (0x0003147f) popup_preview_text_window_ParamLimits

0xaf81,	// (0x0003147f) popup_preview_text_window

0x02f1,	// (0x000267ef) list_single_pane_cp2_g4

0xa01c,	// (0x0003051a) bg_popup_preview_window_pane_ParamLimits

0xa01c,	// (0x0003051a) bg_popup_preview_window_pane

0x3723,	// (0x00029c21) popup_preview_text_window_t1_ParamLimits

0x3723,	// (0x00029c21) popup_preview_text_window_t1

0x3741,	// (0x00029c3f) popup_preview_text_window_t2_ParamLimits

0x3741,	// (0x00029c3f) popup_preview_text_window_t2

0x378a,	// (0x00029c88) popup_preview_text_window_t3_ParamLimits

0x378a,	// (0x00029c88) popup_preview_text_window_t3

0x37cf,	// (0x00029ccd) popup_preview_text_window_t4_ParamLimits

0x37cf,	// (0x00029ccd) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x00035dfb) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x00035dfb) popup_preview_text_window_t

0x384d,	// (0x00029d4b) scroll_pane_cp11

0x14a4,	// (0x000279a2) bg_popup_preview_window_pane_g1

0x36d7,	// (0x00029bd5) bg_popup_preview_window_pane_g2

0x36e1,	// (0x00029bdf) bg_popup_preview_window_pane_g3

0x36eb,	// (0x00029be9) bg_popup_preview_window_pane_g4

0x36f5,	// (0x00029bf3) bg_popup_preview_window_pane_g5

0x36ff,	// (0x00029bfd) bg_popup_preview_window_pane_g6

0x3707,	// (0x00029c05) bg_popup_preview_window_pane_g7

0x370f,	// (0x00029c0d) bg_popup_preview_window_pane_g8

0xf06a,	// (0x00035568) aid_popup_width_pane

0xaef1,	// (0x000313ef) popup_midp_note_alarm_window_ParamLimits

0xaef1,	// (0x000313ef) popup_midp_note_alarm_window

0xca09,	// (0x00032f07) data_form_pane_ParamLimits

0x94e3,	// (0x0002f9e1) form_field_data_pane_g1

0x94ed,	// (0x0002f9eb) form_field_data_pane_t1_ParamLimits

0xca15,	// (0x00032f13) input_focus_pane_ParamLimits

0xe91a,	// (0x00034e18) data_form_wide_pane_ParamLimits

0xe92b,	// (0x00034e29) form_field_data_wide_pane_g1

0xe937,	// (0x00034e35) form_field_data_wide_pane_t1_ParamLimits

0xa2d2,	// (0x000307d0) input_focus_pane_cp6_ParamLimits

0xa544,	// (0x00030a42) input_popup_find_pane_g1_ParamLimits

0xa544,	// (0x00030a42) input_popup_find_pane_g1

0xf413,	// (0x00035911) aid_navi_side_left_pane

0xf428,	// (0x00035926) aid_navi_side_right_pane

0x30ec,	// (0x000295ea) bg_popup_window_pane_cp30_ParamLimits

0x30ec,	// (0x000295ea) bg_popup_window_pane_cp30

0x3166,	// (0x00029664) popup_midp_note_alarm_window_g1_ParamLimits

0x3166,	// (0x00029664) popup_midp_note_alarm_window_g1

0x3196,	// (0x00029694) popup_midp_note_alarm_window_t1_ParamLimits

0x3196,	// (0x00029694) popup_midp_note_alarm_window_t1

0x3237,	// (0x00029735) popup_midp_note_alarm_window_t2_ParamLimits

0x3237,	// (0x00029735) popup_midp_note_alarm_window_t2

0x32e5,	// (0x000297e3) popup_midp_note_alarm_window_t3_ParamLimits

0x32e5,	// (0x000297e3) popup_midp_note_alarm_window_t3

0x3317,	// (0x00029815) popup_midp_note_alarm_window_t4_ParamLimits

0x3317,	// (0x00029815) popup_midp_note_alarm_window_t4

0x333d,	// (0x0002983b) popup_midp_note_alarm_window_t5_ParamLimits

0x333d,	// (0x0002983b) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x00035d98) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x00035d98) popup_midp_note_alarm_window_t

0x33e9,	// (0x000298e7) wait_bar_pane_cp1_ParamLimits

0x33e9,	// (0x000298e7) wait_bar_pane_cp1

0x9a0c,	// (0x0002ff0a) wait_anim_pane_copy1

0x9a0c,	// (0x0002ff0a) wait_border_pane_copy1

0x2dd1,	// (0x000292cf) wait_border_pane_g1_copy1

0xe951,	// (0x00034e4f) form_field_popup_pane_g1

0x9507,	// (0x0002fa05) form_field_popup_pane_t1_ParamLimits

0xca15,	// (0x00032f13) input_focus_pane_cp7_ParamLimits

0xca43,	// (0x00032f41) list_form_pane_ParamLimits

0xe959,	// (0x00034e57) form_field_popup_wide_pane_g1

0xe961,	// (0x00034e5f) form_field_popup_wide_pane_t1_ParamLimits

0xca15,	// (0x00032f13) input_focus_pane_cp8_ParamLimits

0xca4f,	// (0x00032f4d) list_form_wide_pane_ParamLimits

0x3f3a,	// (0x0002a438) aid_size_cell_graphic_pane

0x9586,	// (0x0002fa84) data_form_pane_t1_ParamLimits

0x96b9,	// (0x0002fbb7) data_form_wide_pane_t1_ParamLimits

0xb385,	// (0x00031883) bg_status_flat_pane

0x9b87,	// (0x00030085) title_pane_t1_ParamLimits

0x9c13,	// (0x00030111) title_pane_t2_ParamLimits

0x9c39,	// (0x00030137) title_pane_t3_ParamLimits

0xf557,	// (0x00035a55) title_pane_t_ParamLimits

0xa654,	// (0x00030b52) level_1_signal_ParamLimits

0xa666,	// (0x00030b64) level_2_signal_ParamLimits

0xa679,	// (0x00030b77) level_3_signal_ParamLimits

0xa68c,	// (0x00030b8a) level_4_signal_ParamLimits

0xa69f,	// (0x00030b9d) level_5_signal_ParamLimits

0xa6b2,	// (0x00030bb0) level_6_signal_ParamLimits

0xa6c5,	// (0x00030bc3) level_7_signal_ParamLimits

0xa654,	// (0x00030b52) level_1_battery_ParamLimits

0xa666,	// (0x00030b64) level_2_battery_ParamLimits

0xa679,	// (0x00030b77) level_3_battery_ParamLimits

0xa68c,	// (0x00030b8a) level_4_battery_ParamLimits

0xa69f,	// (0x00030b9d) level_5_battery_ParamLimits

0xa6b2,	// (0x00030bb0) level_6_battery_ParamLimits

0xa6c5,	// (0x00030bc3) level_7_battery_ParamLimits

0x2ff1,	// (0x000294ef) bg_status_flat_pane_g1

0x2ff9,	// (0x000294f7) bg_status_flat_pane_g2

0x3001,	// (0x000294ff) bg_status_flat_pane_g3

0x3009,	// (0x00029507) bg_status_flat_pane_g4

0x3011,	// (0x0002950f) bg_status_flat_pane_g5

0x3019,	// (0x00029517) bg_status_flat_pane_g6

0x3021,	// (0x0002951f) bg_status_flat_pane_g7

0x9c61,	// (0x0003015f) tabs_3_active_pane_t1_ParamLimits

0x9c61,	// (0x0003015f) tabs_3_passive_pane_t1_ParamLimits

0x9c7b,	// (0x00030179) tabs_4_active_pane_t1_ParamLimits

0x9c7b,	// (0x00030179) tabs_4_1_passive_pane_t1_ParamLimits

0xa55a,	// (0x00030a58) tabs_2_active_pane_t1_ParamLimits

0xa55a,	// (0x00030a58) tabs_2_passive_pane_t1_ParamLimits

0x9c8d,	// (0x0003018b) bg_active_tab_pane_cp4_ParamLimits

0xa56c,	// (0x00030a6a) tabs_2_long_active_pane_t1_ParamLimits

0x0933,	// (0x00026e31) bg_passive_tab_pane_cp4_ParamLimits

0x1538,	// (0x00027a36) list_single_midp_graphic_pane_t1_ParamLimits

0x9c8d,	// (0x0003018b) bg_active_tab_pane_cp5_ParamLimits

0xa57f,	// (0x00030a7d) tabs_3_long_active_pane_t1_ParamLimits

0x0933,	// (0x00026e31) bg_passive_tab_pane_cp5_ParamLimits

0x1538,	// (0x00027a36) list_single_midp_graphic_pane_t1

0xb385,	// (0x00031883) bg_status_flat_pane_ParamLimits

0x10ec,	// (0x000275ea) indicator_pane_cp2_ParamLimits

0x10ec,	// (0x000275ea) indicator_pane_cp2

0xb51b,	// (0x00031a19) navi_pane_srt_ParamLimits

0xb51b,	// (0x00031a19) navi_pane_srt

0x1253,	// (0x00027751) popup_clock_digital_analogue_window_cp1

0x9daa,	// (0x000302a8) indicator_pane_t1

0x03c2,	// (0x000268c0) copy_highlight_pane

0x03c2,	// (0x000268c0) cursor_graphics_pane

0x03c2,	// (0x000268c0) graphic_within_text_pane

0x03c2,	// (0x000268c0) link_highlight_pane

0x3810,	// (0x00029d0e) popup_preview_text_window_t5_ParamLimits

0x3810,	// (0x00029d0e) popup_preview_text_window_t5

0x04e6,	// (0x000269e4) cursor_digital_pane

0x04e6,	// (0x000269e4) cursor_primary_pane

0x04f7,	// (0x000269f5) cursor_primary_small_pane

0x04ff,	// (0x000269fd) cursor_secondary_pane

0x0507,	// (0x00026a05) cursor_title_pane

0x04e6,	// (0x000269e4) link_highlight_digital_pane

0x04ee,	// (0x000269ec) link_highlight_primary_pane

0x04f7,	// (0x000269f5) link_highlight_primary_small_pane

0x04ff,	// (0x000269fd) link_highlight_secondary_pane

0x0507,	// (0x00026a05) link_highlight_title_pane

0x04e6,	// (0x000269e4) copy_highlight_digital_pane

0x04e6,	// (0x000269e4) copy_highlight_primary_pane

0x04f7,	// (0x000269f5) copy_highlight_primary_small_pane

0x04ff,	// (0x000269fd) copy_highlight_secondary_pane

0x0507,	// (0x00026a05) copy_highlight_title_pane

0x04ff,	// (0x000269fd) graphic_text_digital_pane

0x308f,	// (0x0002958d) graphic_text_primary_pane

0x3098,	// (0x00029596) graphic_text_primary_small_pane

0x04f7,	// (0x000269f5) graphic_text_secondary_pane

0x04e6,	// (0x000269e4) graphic_text_title_pane

0xa92d,	// (0x00030e2b) cursor_primary_pane_g1

0x3081,	// (0x0002957f) cursor_text_primary_t1

0xb805,	// (0x00031d03) cursor_primary_small_pane_g1

0x3073,	// (0x00029571) cursor_text_primary_small_t1

0xb7fb,	// (0x00031cf9) cursor_primary_small_pane_g1_copy1

0x305b,	// (0x00029559) cursor_text_primary_small_t1_copy1

0x3039,	// (0x00029537) cursor_text_title_t1

0xb7f1,	// (0x00031cef) cursor_title_pane_g1

0xa92d,	// (0x00030e2b) cursor_digital_pane_g1

0x0519,	// (0x00026a17) cursor_text_digital_t1

0x0527,	// (0x00026a25) link_highlight_primary_pane_g1

0x2fe2,	// (0x000294e0) link_highlight_primary_pane_t1

0x0527,	// (0x00026a25) link_highlight_primary_small_pane_g1

0x052f,	// (0x00026a2d) link_highlight_primary_small_pane_t1

0x053e,	// (0x00026a3c) link_highlight_secondary_pane_g1

0x0546,	// (0x00026a44) link_highlight_secondary_pane_t1

0x2f56,	// (0x00029454) link_highlight_title_pane_g1

0x2f5e,	// (0x0002945c) link_highlight_title_pane_t1

0x2f3f,	// (0x0002943d) link_highlight_digital_pane_g1

0x2f47,	// (0x00029445) link_highlight_digital_pane_t1

0x2e07,	// (0x00029305) copy_highlight_primary_pane_g1

0x2e1e,	// (0x0002931c) copy_highlight_primary_pane_t1

0x2e07,	// (0x00029305) copy_highlight_primary_small_pane_g1

0x2e0f,	// (0x0002930d) copy_highlight_primary_small_pane_t1

0x0555,	// (0x00026a53) copy_highlight_secondary_pane_g1

0x055d,	// (0x00026a5b) copy_highlight_secondary_pane_t1

0x2df0,	// (0x000292ee) copy_highlight_title_pane_g1

0x2df8,	// (0x000292f6) copy_highlight_title_pane_t1

0x2e07,	// (0x00029305) copy_highlight_digital_pane_g1

0x410a,	// (0x0002a608) copy_highlight_digital_pane_t1

0x405e,	// (0x0002a55c) graphic_text_primary_pane_g1

0x40ee,	// (0x0002a5ec) graphic_text_primary_pane_t1

0x40fc,	// (0x0002a5fa) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x00035ec7) graphic_text_primary_pane_t

0x40ca,	// (0x0002a5c8) graphic_text_primary_small_pane_g1

0x40d2,	// (0x0002a5d0) graphic_text_primary_small_pane_t1

0x40e0,	// (0x0002a5de) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x00035ec2) graphic_text_primary_small_pane_t

0x40a6,	// (0x0002a5a4) graphic_text_secondary_pane_g1

0x40ae,	// (0x0002a5ac) graphic_text_secondary_pane_t1

0x40bc,	// (0x0002a5ba) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x00035ebd) graphic_text_secondary_pane_t

0x4082,	// (0x0002a580) graphic_text_title_pane_g1

0x408a,	// (0x0002a588) graphic_text_title_pane_t1

0x4098,	// (0x0002a596) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x00035eb8) graphic_text_title_pane_t

0x405e,	// (0x0002a55c) graphic_text_digital_pane_g1

0x4066,	// (0x0002a564) graphic_text_digital_pane_t1

0x4074,	// (0x0002a572) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x00035eb3) graphic_text_digital_pane_t

0x9c8d,	// (0x0003018b) navi_icon_pane_srt_ParamLimits

0x9c8d,	// (0x0003018b) navi_icon_pane_srt

0x9a0c,	// (0x0002ff0a) navi_midp_pane_srt

0x9a0c,	// (0x0002ff0a) navi_navi_pane_srt

0x9c8d,	// (0x0003018b) navi_text_pane_srt_ParamLimits

0x9c8d,	// (0x0003018b) navi_text_pane_srt

0x4029,	// (0x0002a527) navi_navi_icon_text_pane_srt

0x4031,	// (0x0002a52f) navi_navi_pane_srt_g1_ParamLimits

0x4031,	// (0x0002a52f) navi_navi_pane_srt_g1

0x4043,	// (0x0002a541) navi_navi_pane_srt_g2_ParamLimits

0x4043,	// (0x0002a541) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x00035eae) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x00035eae) navi_navi_pane_srt_g

0x4055,	// (0x0002a553) navi_navi_tabs_pane_srt

0x4029,	// (0x0002a527) navi_navi_text_pane_srt

0x4029,	// (0x0002a527) navi_navi_volume_pane_srt

0x401a,	// (0x0002a518) navi_navi_text_pane_srt_t1

0x1b9c,	// (0x0002809a) navi_navi_volume_pane_srt_g1

0x1ba4,	// (0x000280a2) volume_small_pane_srt_ParamLimits

0x1ba4,	// (0x000280a2) volume_small_pane_srt

0x056c,	// (0x00026a6a) volume_small_pane_srt_g1_ParamLimits

0x056c,	// (0x00026a6a) volume_small_pane_srt_g1

0x057c,	// (0x00026a7a) volume_small_pane_srt_g2_ParamLimits

0x057c,	// (0x00026a7a) volume_small_pane_srt_g2

0x058d,	// (0x00026a8b) volume_small_pane_srt_g3_ParamLimits

0x058d,	// (0x00026a8b) volume_small_pane_srt_g3

0x059e,	// (0x00026a9c) volume_small_pane_srt_g4_ParamLimits

0x059e,	// (0x00026a9c) volume_small_pane_srt_g4

0x05af,	// (0x00026aad) volume_small_pane_srt_g5_ParamLimits

0x05af,	// (0x00026aad) volume_small_pane_srt_g5

0x05c0,	// (0x00026abe) volume_small_pane_srt_g6_ParamLimits

0x05c0,	// (0x00026abe) volume_small_pane_srt_g6

0x05d1,	// (0x00026acf) volume_small_pane_srt_g7_ParamLimits

0x05d1,	// (0x00026acf) volume_small_pane_srt_g7

0x05e2,	// (0x00026ae0) volume_small_pane_srt_g8_ParamLimits

0x05e2,	// (0x00026ae0) volume_small_pane_srt_g8

0x05f3,	// (0x00026af1) volume_small_pane_srt_g9_ParamLimits

0x05f3,	// (0x00026af1) volume_small_pane_srt_g9

0x0604,	// (0x00026b02) volume_small_pane_srt_g10_ParamLimits

0x0604,	// (0x00026b02) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x00035c5b) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x00035c5b) volume_small_pane_srt_g

0xa0d1,	// (0x000305cf) query_popup_data_pane_cp2

0x4000,	// (0x0002a4fe) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4000,	// (0x0002a4fe) navi_navi_icon_text_pane_srt_t1

0x308f,	// (0x0002958d) navi_tabs_2_long_pane_srt

0x308f,	// (0x0002958d) navi_tabs_2_pane_srt

0x308f,	// (0x0002958d) navi_tabs_3_long_pane_srt

0x308f,	// (0x0002958d) navi_tabs_3_pane_srt

0x308f,	// (0x0002958d) navi_tabs_4_pane_srt

0x1b7c,	// (0x0002807a) tabs_2_active_pane_srt_ParamLimits

0x1b7c,	// (0x0002807a) tabs_2_active_pane_srt

0x1b8c,	// (0x0002808a) tabs_2_passive_pane_srt_ParamLimits

0x1b8c,	// (0x0002808a) tabs_2_passive_pane_srt

0x158f,	// (0x00027a8d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x158f,	// (0x00027a8d) bg_passive_tab_pane_cp1_srt

0x3fcc,	// (0x0002a4ca) bg_passive_tab_pane_g1_cp1_srt

0xd0bb,	// (0x000335b9) bg_passive_tab_pane_g2_cp1_srt

0x3fd5,	// (0x0002a4d3) bg_passive_tab_pane_g3_cp1_srt

0x9c4b,	// (0x00030149) bg_active_tab_pane_cp1_srt_ParamLimits

0x9c4b,	// (0x00030149) bg_active_tab_pane_cp1_srt

0x3fde,	// (0x0002a4dc) tabs_2_active_pane_srt_g1

0xbe54,	// (0x00032352) tabs_2_active_pane_srt_t1_ParamLimits

0xbe54,	// (0x00032352) tabs_2_active_pane_srt_t1

0x3fcc,	// (0x0002a4ca) bg_active_tab_pane_g1_cp1_srt

0xd0bb,	// (0x000335b9) bg_active_tab_pane_g2_cp1_srt

0x3fd5,	// (0x0002a4d3) bg_active_tab_pane_g3_cp1_srt

0x1b49,	// (0x00028047) tabs_3_active_pane_srt_ParamLimits

0x1b49,	// (0x00028047) tabs_3_active_pane_srt

0x1b5a,	// (0x00028058) tabs_3_passive_pane_cp_srt_ParamLimits

0x1b5a,	// (0x00028058) tabs_3_passive_pane_cp_srt

0x1b6b,	// (0x00028069) tabs_3_passive_pane_srt_ParamLimits

0x1b6b,	// (0x00028069) tabs_3_passive_pane_srt

0x158f,	// (0x00027a8d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x158f,	// (0x00027a8d) bg_passive_tab_pane_cp2_srt

0x0615,	// (0x00026b13) bg_passive_tab_pane_g1_cp2_srt

0xd0bb,	// (0x000335b9) bg_passive_tab_pane_g2_cp2_srt

0x061e,	// (0x00026b1c) bg_passive_tab_pane_g3_cp2_srt

0x9c4b,	// (0x00030149) bg_active_tab_pane_cp2_srt_ParamLimits

0x9c4b,	// (0x00030149) bg_active_tab_pane_cp2_srt

0x3fb2,	// (0x0002a4b0) tabs_3_active_pane_srt_g1

0xbe3e,	// (0x0003233c) tabs_3_active_pane_srt_t1_ParamLimits

0xbe3e,	// (0x0003233c) tabs_3_active_pane_srt_t1

0x0615,	// (0x00026b13) bg_active_tab_pane_g1_cp2_srt

0xd0bb,	// (0x000335b9) bg_active_tab_pane_g2_cp2_srt

0x061e,	// (0x00026b1c) bg_active_tab_pane_g3_cp2_srt

0x1b01,	// (0x00027fff) tabs_4_active_pane_srt_ParamLimits

0x1b01,	// (0x00027fff) tabs_4_active_pane_srt

0x1b13,	// (0x00028011) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1b13,	// (0x00028011) tabs_4_passive_pane_cp2_srt

0x08b9,	// (0x00026db7) aid_size_cell_toolbar

0x3bc8,	// (0x0002a0c6) main_idle_act_pane_ParamLimits

0x0afc,	// (0x00026ffa) popup_large_graphic_colour_window_ParamLimits

0xb247,	// (0x00031745) popup_toolbar_window_ParamLimits

0xb247,	// (0x00031745) popup_toolbar_window

0xeb20,	// (0x0003501e) list_single_graphic_2heading_pane_ParamLimits

0xeb20,	// (0x0003501e) list_single_graphic_2heading_pane

0xcd19,	// (0x00033217) aid_size_cell_apps_grid_lsc_pane

0xcd2b,	// (0x00033229) aid_size_cell_apps_grid_prt_pane

0x0933,	// (0x00026e31) bg_wml_button_pane_cp1_ParamLimits

0x0933,	// (0x00026e31) bg_wml_button_pane_cp1

0xb7a1,	// (0x00031c9f) form_midp_field_text_pane_t1_ParamLimits

0x158f,	// (0x00027a8d) input_focus_pane_cp050_ParamLimits

0x185c,	// (0x00027d5a) list_midp_form_text_pane_ParamLimits

0x180e,	// (0x00027d0c) input_focus_pane_cp051_ParamLimits

0x1822,	// (0x00027d20) list_midp_choice_pane_ParamLimits

0xb758,	// (0x00031c56) list_single_2graphic_pane_cp3_ParamLimits

0xb758,	// (0x00031c56) list_single_2graphic_pane_cp3

0x4c65,	// (0x0002b163) list_single_midp_graphic_pane_ParamLimits

0x4c65,	// (0x0002b163) list_single_midp_graphic_pane

0xe9c7,	// (0x00034ec5) list_single_graphic_2heading_pane_g1_ParamLimits

0xe9c7,	// (0x00034ec5) list_single_graphic_2heading_pane_g1

0xe82f,	// (0x00034d2d) list_single_graphic_2heading_pane_g4_ParamLimits

0xe82f,	// (0x00034d2d) list_single_graphic_2heading_pane_g4

0xe83b,	// (0x00034d39) list_single_graphic_2heading_pane_g5_ParamLimits

0xe83b,	// (0x00034d39) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x00035cae) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x00035cae) list_single_graphic_2heading_pane_g

0xe9d3,	// (0x00034ed1) list_single_graphic_2heading_pane_t1_ParamLimits

0xe9d3,	// (0x00034ed1) list_single_graphic_2heading_pane_t1

0xe9e7,	// (0x00034ee5) list_single_graphic_2heading_pane_t2_ParamLimits

0xe9e7,	// (0x00034ee5) list_single_graphic_2heading_pane_t2

0xea03,	// (0x00034f01) list_single_graphic_2heading_pane_t3_ParamLimits

0xea03,	// (0x00034f01) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x00035cb5) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x00035cb5) list_single_graphic_2heading_pane_t

0x13b2,	// (0x000278b0) bg_popup_sub_pane_cp2

0x13dc,	// (0x000278da) grid_toobar_pane

0x1418,	// (0x00027916) cell_toolbar_pane_ParamLimits

0x1418,	// (0x00027916) cell_toolbar_pane

0x1448,	// (0x00027946) cell_toolbar_pane_g1_ParamLimits

0x1448,	// (0x00027946) cell_toolbar_pane_g1

0x145c,	// (0x0002795a) cell_toolbar_pane_g2_ParamLimits

0x145c,	// (0x0002795a) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x00035cc3) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x00035cc3) cell_toolbar_pane_g

0x147e,	// (0x0002797c) grid_highlight_pane_cp2_ParamLimits

0x147e,	// (0x0002797c) grid_highlight_pane_cp2

0x1498,	// (0x00027996) toolbar_button_pane

0x14a4,	// (0x000279a2) toolbar_button_pane_g1

0x14ac,	// (0x000279aa) toolbar_button_pane_g2

0x14b4,	// (0x000279b2) toolbar_button_pane_g3

0x14bc,	// (0x000279ba) toolbar_button_pane_g4

0x14c4,	// (0x000279c2) toolbar_button_pane_g5

0x14cc,	// (0x000279ca) toolbar_button_pane_g6

0x14d4,	// (0x000279d2) toolbar_button_pane_g7

0x14dc,	// (0x000279da) toolbar_button_pane_g8

0x14e4,	// (0x000279e2) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x00035cc8) toolbar_button_pane_g

0x14f4,	// (0x000279f2) list_single_2graphic_pane_g1_cp3_ParamLimits

0x14f4,	// (0x000279f2) list_single_2graphic_pane_g1_cp3

0xb6ba,	// (0x00031bb8) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb6ba,	// (0x00031bb8) list_single_2graphic_pane_g2_cp3

0xd1cc,	// (0x000336ca) list_single_2graphic_pane_g3_cp3

0x1511,	// (0x00027a0f) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1511,	// (0x00027a0f) list_single_2graphic_pane_g4_cp3

0x151d,	// (0x00027a1b) list_single_2graphic_pane_t1_cp3_ParamLimits

0x151d,	// (0x00027a1b) list_single_2graphic_pane_t1_cp3

0xd1c0,	// (0x000336be) list_single_midp_graphic_pane_g2_ParamLimits

0xd1c0,	// (0x000336be) list_single_midp_graphic_pane_g2

0x08c1,	// (0x00026dbf) aid_zoom_text_primary

0xe9b7,	// (0x00034eb5) aid_zoom_text_secondary

0xa985,	// (0x00030e83) status_small_pane_g7_ParamLimits

0xa985,	// (0x00030e83) status_small_pane_g7

0xa9a8,	// (0x00030ea6) status_small_pane_t1_ParamLimits

0x9b57,	// (0x00030055) title_pane_g2

0x0003,

0xf54e,	// (0x00035a4c) title_pane_g

0xa17a,	// (0x00030678) aid_size_cell_colour_1_pane_ParamLimits

0xa17a,	// (0x00030678) aid_size_cell_colour_1_pane

0xa18e,	// (0x0003068c) aid_size_cell_colour_2_pane_ParamLimits

0xa18e,	// (0x0003068c) aid_size_cell_colour_2_pane

0xa1a2,	// (0x000306a0) aid_size_cell_colour_3_pane_ParamLimits

0xa1a2,	// (0x000306a0) aid_size_cell_colour_3_pane

0xa1b6,	// (0x000306b4) aid_size_cell_colour_4_pane_ParamLimits

0xa1b6,	// (0x000306b4) aid_size_cell_colour_4_pane

0xf34f,	// (0x0003584d) title_pane_stacon_g1_ParamLimits

0xf34f,	// (0x0003584d) title_pane_stacon_g1

0x2e75,	// (0x00029373) popup_note_wait_window_g3_ParamLimits

0x2e75,	// (0x00029373) popup_note_wait_window_g3

0x2eec,	// (0x000293ea) popup_note_wait_window_t5_ParamLimits

0x2eec,	// (0x000293ea) popup_note_wait_window_t5

0x9a0c,	// (0x0002ff0a) main_feb_china_hwr_fs_writing_pane

0xabde,	// (0x000310dc) popup_feb_china_hwr_fs_window_ParamLimits

0xabde,	// (0x000310dc) popup_feb_china_hwr_fs_window

0xb6cb,	// (0x00031bc9) aid_size_cell_hwr_fs_ParamLimits

0xb6cb,	// (0x00031bc9) aid_size_cell_hwr_fs

0x158f,	// (0x00027a8d) bg_popup_sub_pane_cp3_ParamLimits

0x158f,	// (0x00027a8d) bg_popup_sub_pane_cp3

0xb6e0,	// (0x00031bde) grid_hwr_fs_pane_ParamLimits

0xb6e0,	// (0x00031bde) grid_hwr_fs_pane

0x15b3,	// (0x00027ab1) linegrid_hwr_fs_pane_ParamLimits

0x15b3,	// (0x00027ab1) linegrid_hwr_fs_pane

0xb6f8,	// (0x00031bf6) cell_hwr_fs_pane_ParamLimits

0xb6f8,	// (0x00031bf6) cell_hwr_fs_pane

0x15e7,	// (0x00027ae5) linegrid_hwr_fs_pane_g1_ParamLimits

0x15e7,	// (0x00027ae5) linegrid_hwr_fs_pane_g1

0xb71e,	// (0x00031c1c) linegrid_hwr_fs_pane_g2_ParamLimits

0xb71e,	// (0x00031c1c) linegrid_hwr_fs_pane_g2

0x1605,	// (0x00027b03) linegrid_hwr_fs_pane_g3_ParamLimits

0x1605,	// (0x00027b03) linegrid_hwr_fs_pane_g3

0x1611,	// (0x00027b0f) linegrid_hwr_fs_pane_g4_ParamLimits

0x1611,	// (0x00027b0f) linegrid_hwr_fs_pane_g4

0x162f,	// (0x00027b2d) linegrid_hwr_fs_pane_g5_ParamLimits

0x162f,	// (0x00027b2d) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x00035cee) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x00035cee) linegrid_hwr_fs_pane_g

0x1645,	// (0x00027b43) cell_hwr_fs_pane_g1_ParamLimits

0x1645,	// (0x00027b43) cell_hwr_fs_pane_g1

0x12e9,	// (0x000277e7) cell_hwr_fs_pane_g2_ParamLimits

0x12e9,	// (0x000277e7) cell_hwr_fs_pane_g2

0xb730,	// (0x00031c2e) cell_hwr_fs_pane_g3_ParamLimits

0xb730,	// (0x00031c2e) cell_hwr_fs_pane_g3

0xb73d,	// (0x00031c3b) cell_hwr_fs_pane_g4_ParamLimits

0xb73d,	// (0x00031c3b) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x00035cf9) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x00035cf9) cell_hwr_fs_pane_g

0xb74a,	// (0x00031c48) cell_hwr_fs_pane_t1

0x9a0c,	// (0x0002ff0a) grid_highlight_pane_cp6

0x9a0c,	// (0x0002ff0a) main_idle_act2_pane

0xcb28,	// (0x00033026) aid_inside_area_popup_secondary

0xb9c2,	// (0x00031ec0) aid_inside_area_window_primary_ParamLimits

0xb9c2,	// (0x00031ec0) aid_inside_area_window_primary

0x4119,	// (0x0002a617) ai2_news_ticker_pane

0x4121,	// (0x0002a61f) aid_size_cell_ai1_link_ParamLimits

0x4121,	// (0x0002a61f) aid_size_cell_ai1_link

0x413b,	// (0x0002a639) popup_ai2_data_window_ParamLimits

0x413b,	// (0x0002a639) popup_ai2_data_window

0x4159,	// (0x0002a657) popup_ai2_link_window_ParamLimits

0x4159,	// (0x0002a657) popup_ai2_link_window

0x158f,	// (0x00027a8d) bg_popup_sub_pane_cp4_ParamLimits

0x158f,	// (0x00027a8d) bg_popup_sub_pane_cp4

0x416f,	// (0x0002a66d) grid_ai2_link_pane_ParamLimits

0x416f,	// (0x0002a66d) grid_ai2_link_pane

0x4186,	// (0x0002a684) popup_ai2_link_window_g1_ParamLimits

0x4186,	// (0x0002a684) popup_ai2_link_window_g1

0x4192,	// (0x0002a690) popup_ai2_link_window_g2_ParamLimits

0x4192,	// (0x0002a690) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x00035ecc) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x00035ecc) popup_ai2_link_window_g

0x41a3,	// (0x0002a6a1) ai2_mp_button_pane

0x41ab,	// (0x0002a6a9) ai2_mp_volume_pane

0x180e,	// (0x00027d0c) bg_popup_sub_pane_cp5_ParamLimits

0x180e,	// (0x00027d0c) bg_popup_sub_pane_cp5

0x41b3,	// (0x0002a6b1) heading_ai2_gene_pane_ParamLimits

0x41b3,	// (0x0002a6b1) heading_ai2_gene_pane

0x41bf,	// (0x0002a6bd) list_ai2_gene_pane_ParamLimits

0x41bf,	// (0x0002a6bd) list_ai2_gene_pane

0x4207,	// (0x0002a705) cell_ai2_link_pane_ParamLimits

0x4207,	// (0x0002a705) cell_ai2_link_pane

0x421d,	// (0x0002a71b) cell_ai2_link_pane_g1

0x9a0c,	// (0x0002ff0a) grid_highlight_pane_cp7

0x1bb9,	// (0x000280b7) ai2_mp_volume_pane_g1

0x42f0,	// (0x0002a7ee) ai2_mp_volume_pane_g2

0x4265,	// (0x0002a763) list_ai2_gene_pane_t1

0x42f8,	// (0x0002a7f6) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x00035ee5) ai2_mp_volume_pane_g

0x1bc1,	// (0x000280bf) volume_small_pane_cp3

0x4300,	// (0x0002a7fe) aid_size_cell_ai2_button

0x4308,	// (0x0002a806) grid_ai2_button_pane

0x4311,	// (0x0002a80f) cell_ai2_button_pane_ParamLimits

0x4311,	// (0x0002a80f) cell_ai2_button_pane

0x991c,	// (0x0002fe1a) cell_ai2_button_pane_g1

0x9a0c,	// (0x0002ff0a) grid_highlight_pane_cp8

0x42b0,	// (0x0002a7ae) ai2_gene_pane_t1_ParamLimits

0x42b0,	// (0x0002a7ae) ai2_gene_pane_t1

0xab66,	// (0x00031064) aid_height_parent_landscape

0xbbc8,	// (0x000320c6) aid_height_set_list

0x3bc8,	// (0x0002a0c6) aid_size_parent

0x3f3a,	// (0x0002a438) aid_size_cell_graphic_pane_ParamLimits

0x41cf,	// (0x0002a6cd) popup_ai2_data_window_g1_ParamLimits

0x41cf,	// (0x0002a6cd) popup_ai2_data_window_g1

0x41db,	// (0x0002a6d9) ai2_news_ticker_pane_g1

0x41e3,	// (0x0002a6e1) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x00035ed1) ai2_news_ticker_pane_g

0x41eb,	// (0x0002a6e9) ai2_news_ticker_pane_t1

0x41f9,	// (0x0002a6f7) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x00035ed6) ai2_news_ticker_pane_t

0x4226,	// (0x0002a724) heading_ai2_gene_pane_g1

0x422e,	// (0x0002a72c) heading_ai2_gene_pane_t1_ParamLimits

0x422e,	// (0x0002a72c) heading_ai2_gene_pane_t1

0x4243,	// (0x0002a741) list_highlight_pane_cp6

0x424b,	// (0x0002a749) ai2_gene_pane_ParamLimits

0x424b,	// (0x0002a749) ai2_gene_pane

0x4273,	// (0x0002a771) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x00035edb) list_ai2_gene_pane_t

0x4281,	// (0x0002a77f) list_highlight_pane_cp8_ParamLimits

0x4281,	// (0x0002a77f) list_highlight_pane_cp8

0x4292,	// (0x0002a790) ai2_gene_pane_g1_ParamLimits

0x4292,	// (0x0002a790) ai2_gene_pane_g1

0x42a4,	// (0x0002a7a2) ai2_gene_pane_g2_ParamLimits

0x42a4,	// (0x0002a7a2) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x00035ee0) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x00035ee0) ai2_gene_pane_g

0xa4f7,	// (0x000309f5) scroll_pane_cp12

0xab25,	// (0x00031023) control_pane_t3_ParamLimits

0xab25,	// (0x00031023) control_pane_t3

0xa999,	// (0x00030e97) status_small_pane_g8_ParamLimits

0xa999,	// (0x00030e97) status_small_pane_g8

0xac80,	// (0x0003117e) popup_find_window_ParamLimits

0xaf31,	// (0x0003142f) popup_note_image_window_ParamLimits

0xe859,	// (0x00034d57) list_double2_graphic_pane_vc_g1_ParamLimits

0xe859,	// (0x00034d57) list_double2_graphic_pane_vc_g1

0xea1b,	// (0x00034f19) list_double2_graphic_pane_vc_g2_ParamLimits

0xea1b,	// (0x00034f19) list_double2_graphic_pane_vc_g2

0xea27,	// (0x00034f25) list_double2_graphic_pane_vc_g3_ParamLimits

0xea27,	// (0x00034f25) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x00035cbc) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x00035cbc) list_double2_graphic_pane_vc_g

0xea33,	// (0x00034f31) list_double2_graphic_pane_vc_t1_ParamLimits

0xea33,	// (0x00034f31) list_double2_graphic_pane_vc_t1

0xe82f,	// (0x00034d2d) list_single_heading_pane_vc_g1_ParamLimits

0xe82f,	// (0x00034d2d) list_single_heading_pane_vc_g1

0xe83b,	// (0x00034d39) list_single_heading_pane_vc_g2_ParamLimits

0xe83b,	// (0x00034d39) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035ac6) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035ac6) list_single_heading_pane_vc_g

0xea49,	// (0x00034f47) list_single_heading_pane_vc_t1_ParamLimits

0xea49,	// (0x00034f47) list_single_heading_pane_vc_t1

0xea61,	// (0x00034f5f) list_single_heading_pane_vc_t2_ParamLimits

0xea61,	// (0x00034f5f) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x00035cdd) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x00035cdd) list_single_heading_pane_vc_t

0xea73,	// (0x00034f71) list_setting_number_pane_vc_g1_ParamLimits

0xea73,	// (0x00034f71) list_setting_number_pane_vc_g1

0xea7f,	// (0x00034f7d) list_setting_number_pane_vc_g2_ParamLimits

0xea7f,	// (0x00034f7d) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x00035ce2) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x00035ce2) list_setting_number_pane_vc_g

0xea8b,	// (0x00034f89) list_setting_number_pane_vc_t1_ParamLimits

0xea8b,	// (0x00034f89) list_setting_number_pane_vc_t1

0xea9f,	// (0x00034f9d) list_setting_number_pane_vc_t2_ParamLimits

0xea9f,	// (0x00034f9d) list_setting_number_pane_vc_t2

0xeabb,	// (0x00034fb9) list_setting_number_pane_vc_t3_ParamLimits

0xeabb,	// (0x00034fb9) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x00035ce7) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x00035ce7) list_setting_number_pane_vc_t

0xeae9,	// (0x00034fe7) set_value_pane_vc_ParamLimits

0xeae9,	// (0x00034fe7) set_value_pane_vc

0xeb20,	// (0x0003501e) list_double2_graphic_pane_vc_ParamLimits

0xeb20,	// (0x0003501e) list_double2_graphic_pane_vc

0x3da0,	// (0x0002a29e) list_double2_large_graphic_pane_vc_ParamLimits

0x3da0,	// (0x0002a29e) list_double2_large_graphic_pane_vc

0xeb20,	// (0x0003501e) list_double2_pane_vc_ParamLimits

0xeb20,	// (0x0003501e) list_double2_pane_vc

0xeb20,	// (0x0003501e) list_double_graphic_heading_pane_vc_ParamLimits

0xeb20,	// (0x0003501e) list_double_graphic_heading_pane_vc

0xeb20,	// (0x0003501e) list_double_graphic_pane_vc_ParamLimits

0xeb20,	// (0x0003501e) list_double_graphic_pane_vc

0xeb20,	// (0x0003501e) list_double_heading_pane_vc_ParamLimits

0xeb20,	// (0x0003501e) list_double_heading_pane_vc

0x3db4,	// (0x0002a2b2) list_double_large_graphic_pane_vc_ParamLimits

0x3db4,	// (0x0002a2b2) list_double_large_graphic_pane_vc

0xeb20,	// (0x0003501e) list_double_number_pane_vc_ParamLimits

0xeb20,	// (0x0003501e) list_double_number_pane_vc

0xeb20,	// (0x0003501e) list_double_pane_vc_ParamLimits

0xeb20,	// (0x0003501e) list_double_pane_vc

0xeb20,	// (0x0003501e) list_double_time_pane_vc_ParamLimits

0xeb20,	// (0x0003501e) list_double_time_pane_vc

0xeb20,	// (0x0003501e) list_setting_number_pane_vc_ParamLimits

0xeb20,	// (0x0003501e) list_setting_number_pane_vc

0xeb20,	// (0x0003501e) list_setting_pane_vc_ParamLimits

0xeb20,	// (0x0003501e) list_setting_pane_vc

0xeb20,	// (0x0003501e) list_single_graphic_heading_pane_vc_ParamLimits

0xeb20,	// (0x0003501e) list_single_graphic_heading_pane_vc

0xeb20,	// (0x0003501e) list_single_heading_pane_vc_ParamLimits

0xeb20,	// (0x0003501e) list_single_heading_pane_vc

0xeb20,	// (0x0003501e) list_single_number_heading_pane_vc_ParamLimits

0xeb20,	// (0x0003501e) list_single_number_heading_pane_vc

0xe859,	// (0x00034d57) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe859,	// (0x00034d57) list_double_graphic_heading_pane_vc_g1

0xe82f,	// (0x00034d2d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xe82f,	// (0x00034d2d) list_double_graphic_heading_pane_vc_g2

0xe83b,	// (0x00034d39) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xe83b,	// (0x00034d39) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x00035eec) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x00035eec) list_double_graphic_heading_pane_vc_g

0xeb35,	// (0x00035033) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xeb35,	// (0x00035033) list_double_graphic_heading_pane_vc_t1

0xeb4b,	// (0x00035049) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xeb4b,	// (0x00035049) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x00035ef3) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x00035ef3) list_double_graphic_heading_pane_vc_t

0xea73,	// (0x00034f71) list_setting_pane_vc_g1_ParamLimits

0xea73,	// (0x00034f71) list_setting_pane_vc_g1

0xea7f,	// (0x00034f7d) list_setting_pane_vc_g2_ParamLimits

0xea7f,	// (0x00034f7d) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x00035ce2) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x00035ce2) list_setting_pane_vc_g

0xeb69,	// (0x00035067) list_setting_pane_vc_t1_ParamLimits

0xeb69,	// (0x00035067) list_setting_pane_vc_t1

0xeb85,	// (0x00035083) list_setting_pane_vc_t2_ParamLimits

0xeb85,	// (0x00035083) list_setting_pane_vc_t2

0x0001,

0xfa38,	// (0x00035f36) list_setting_pane_vc_t_ParamLimits

0xfa38,	// (0x00035f36) list_setting_pane_vc_t

0xeae9,	// (0x00034fe7) set_value_pane_cp_vc_ParamLimits

0xeae9,	// (0x00034fe7) set_value_pane_cp_vc

0xe82f,	// (0x00034d2d) list_single_number_heading_pane_vc_g1_ParamLimits

0xe82f,	// (0x00034d2d) list_single_number_heading_pane_vc_g1

0xe83b,	// (0x00034d39) list_single_number_heading_pane_vc_g2_ParamLimits

0xe83b,	// (0x00034d39) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035ac6) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035ac6) list_single_number_heading_pane_vc_g

0xea49,	// (0x00034f47) list_single_number_heading_pane_vc_t1_ParamLimits

0xea49,	// (0x00034f47) list_single_number_heading_pane_vc_t1

0xeba1,	// (0x0003509f) list_single_number_heading_pane_vc_t2_ParamLimits

0xeba1,	// (0x0003509f) list_single_number_heading_pane_vc_t2

0xe847,	// (0x00034d45) list_single_number_heading_pane_vc_t3_ParamLimits

0xe847,	// (0x00034d45) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3d,	// (0x00035f3b) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x00035f3b) list_single_number_heading_pane_vc_t

0xe859,	// (0x00034d57) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe859,	// (0x00034d57) list_single_graphic_heading_pane_vc_g1

0xe82f,	// (0x00034d2d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xe82f,	// (0x00034d2d) list_single_graphic_heading_pane_vc_g4

0xe83b,	// (0x00034d39) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xe83b,	// (0x00034d39) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9ee,	// (0x00035eec) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x00035eec) list_single_graphic_heading_pane_vc_g

0xea49,	// (0x00034f47) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xea49,	// (0x00034f47) list_single_graphic_heading_pane_vc_t1

0xebb3,	// (0x000350b1) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xebb3,	// (0x000350b1) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa44,	// (0x00035f42) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa44,	// (0x00035f42) list_single_graphic_heading_pane_vc_t

0xe82f,	// (0x00034d2d) list_double2_pane_vc_g1_ParamLimits

0xe82f,	// (0x00034d2d) list_double2_pane_vc_g1

0xe83b,	// (0x00034d39) list_double2_pane_vc_g2_ParamLimits

0xe83b,	// (0x00034d39) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035ac6) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035ac6) list_double2_pane_vc_g

0xeb0a,	// (0x00035008) list_double2_pane_vc_t1_ParamLimits

0xeb0a,	// (0x00035008) list_double2_pane_vc_t1

0xe865,	// (0x00034d63) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xe865,	// (0x00034d63) list_double2_large_graphic_pane_vc_g1

0xe871,	// (0x00034d6f) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe871,	// (0x00034d6f) list_double2_large_graphic_pane_vc_g2

0xe87d,	// (0x00034d7b) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xe87d,	// (0x00034d7b) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x00035ae3) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x00035ae3) list_double2_large_graphic_pane_vc_g

0xe889,	// (0x00034d87) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe889,	// (0x00034d87) list_double2_large_graphic_pane_vc_t1

0xebc5,	// (0x000350c3) list_double_time_pane_vc_g1_ParamLimits

0xebc5,	// (0x000350c3) list_double_time_pane_vc_g1

0xebd1,	// (0x000350cf) list_double_time_pane_vc_g2_ParamLimits

0xebd1,	// (0x000350cf) list_double_time_pane_vc_g2

0x0001,

0xfa49,	// (0x00035f47) list_double_time_pane_vc_g_ParamLimits

0xfa49,	// (0x00035f47) list_double_time_pane_vc_g

0xebdd,	// (0x000350db) list_double_time_pane_vc_t1_ParamLimits

0xebdd,	// (0x000350db) list_double_time_pane_vc_t1

0xec07,	// (0x00035105) list_double_time_pane_vc_t2_ParamLimits

0xec07,	// (0x00035105) list_double_time_pane_vc_t2

0xec50,	// (0x0003514e) list_double_time_pane_vc_t3_ParamLimits

0xec50,	// (0x0003514e) list_double_time_pane_vc_t3

0xec62,	// (0x00035160) list_double_time_pane_vc_t4_ParamLimits

0xec62,	// (0x00035160) list_double_time_pane_vc_t4

0x0003,

0xfa4e,	// (0x00035f4c) list_double_time_pane_vc_t_ParamLimits

0xfa4e,	// (0x00035f4c) list_double_time_pane_vc_t

0xe82f,	// (0x00034d2d) list_double_pane_vc_g1_ParamLimits

0xe82f,	// (0x00034d2d) list_double_pane_vc_g1

0xe83b,	// (0x00034d39) list_double_pane_vc_g2_ParamLimits

0xe83b,	// (0x00034d39) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035ac6) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035ac6) list_double_pane_vc_g

0xec87,	// (0x00035185) list_double_pane_vc_t1_ParamLimits

0xec87,	// (0x00035185) list_double_pane_vc_t1

0xec9b,	// (0x00035199) list_double_pane_vc_t2_ParamLimits

0xec9b,	// (0x00035199) list_double_pane_vc_t2

0x0001,

0xfa57,	// (0x00035f55) list_double_pane_vc_t_ParamLimits

0xfa57,	// (0x00035f55) list_double_pane_vc_t

0xe82f,	// (0x00034d2d) list_double_number_pane_vc_g1_ParamLimits

0xe82f,	// (0x00034d2d) list_double_number_pane_vc_g1

0xe83b,	// (0x00034d39) list_double_number_pane_vc_g2_ParamLimits

0xe83b,	// (0x00034d39) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035ac6) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035ac6) list_double_number_pane_vc_g

0xecb1,	// (0x000351af) list_double_number_pane_vc_t1_ParamLimits

0xecb1,	// (0x000351af) list_double_number_pane_vc_t1

0xecc5,	// (0x000351c3) list_double_number_pane_vc_t2_ParamLimits

0xecc5,	// (0x000351c3) list_double_number_pane_vc_t2

0xecd9,	// (0x000351d7) list_double_number_pane_vc_t3_ParamLimits

0xecd9,	// (0x000351d7) list_double_number_pane_vc_t3

0x0002,

0xfa5c,	// (0x00035f5a) list_double_number_pane_vc_t_ParamLimits

0xfa5c,	// (0x00035f5a) list_double_number_pane_vc_t

0xecef,	// (0x000351ed) list_double_large_graphic_pane_vc_g1_ParamLimits

0xecef,	// (0x000351ed) list_double_large_graphic_pane_vc_g1

0xed17,	// (0x00035215) list_double_large_graphic_pane_vc_g2_ParamLimits

0xed17,	// (0x00035215) list_double_large_graphic_pane_vc_g2

0xed2b,	// (0x00035229) list_double_large_graphic_pane_vc_g3_ParamLimits

0xed2b,	// (0x00035229) list_double_large_graphic_pane_vc_g3

0xed3a,	// (0x00035238) list_double_large_graphic_pane_vc_g4_ParamLimits

0xed3a,	// (0x00035238) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa63,	// (0x00035f61) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa63,	// (0x00035f61) list_double_large_graphic_pane_vc_g

0xed4a,	// (0x00035248) list_double_large_graphic_pane_vc_t1_ParamLimits

0xed4a,	// (0x00035248) list_double_large_graphic_pane_vc_t1

0xed6c,	// (0x0003526a) list_double_large_graphic_pane_vc_t2_ParamLimits

0xed6c,	// (0x0003526a) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6c,	// (0x00035f6a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6c,	// (0x00035f6a) list_double_large_graphic_pane_vc_t

0xe82f,	// (0x00034d2d) list_double_heading_pane_vc_g1_ParamLimits

0xe82f,	// (0x00034d2d) list_double_heading_pane_vc_g1

0xe83b,	// (0x00034d39) list_double_heading_pane_vc_g2_ParamLimits

0xe83b,	// (0x00034d39) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035ac6) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035ac6) list_double_heading_pane_vc_g

0xed8c,	// (0x0003528a) list_double_heading_pane_vc_t1_ParamLimits

0xed8c,	// (0x0003528a) list_double_heading_pane_vc_t1

0xea49,	// (0x00034f47) list_double_heading_pane_vc_t2_ParamLimits

0xea49,	// (0x00034f47) list_double_heading_pane_vc_t2

0x0001,

0xfa71,	// (0x00035f6f) list_double_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x00035f6f) list_double_heading_pane_vc_t

0xed9e,	// (0x0003529c) list_double_graphic_pane_vc_g1_ParamLimits

0xed9e,	// (0x0003529c) list_double_graphic_pane_vc_g1

0xedb1,	// (0x000352af) list_double_graphic_pane_vc_g2_ParamLimits

0xedb1,	// (0x000352af) list_double_graphic_pane_vc_g2

0xe82f,	// (0x00034d2d) list_double_graphic_pane_vc_g3_ParamLimits

0xe82f,	// (0x00034d2d) list_double_graphic_pane_vc_g3

0x0003,

0xfa76,	// (0x00035f74) list_double_graphic_pane_vc_g_ParamLimits

0xfa76,	// (0x00035f74) list_double_graphic_pane_vc_g

0xedce,	// (0x000352cc) list_double_graphic_pane_vc_t1_ParamLimits

0xedce,	// (0x000352cc) list_double_graphic_pane_vc_t1

0xedf8,	// (0x000352f6) list_double_graphic_pane_vc_t2_ParamLimits

0xedf8,	// (0x000352f6) list_double_graphic_pane_vc_t2

0x0001,

0xfa7f,	// (0x00035f7d) list_double_graphic_pane_vc_t_ParamLimits

0xfa7f,	// (0x00035f7d) list_double_graphic_pane_vc_t

0xf076,	// (0x00035574) aid_size_cell_fastswap

0x9926,	// (0x0002fe24) aid_size_cell_touch_ParamLimits

0x9926,	// (0x0002fe24) aid_size_cell_touch

0xf1f3,	// (0x000356f1) popup_fast_swap_wide_window_ParamLimits

0xf1f3,	// (0x000356f1) popup_fast_swap_wide_window

0x9aee,	// (0x0002ffec) touch_pane_ParamLimits

0x9aee,	// (0x0002ffec) touch_pane

0xca01,	// (0x00032eff) button_value_adjust_pane_cp2

0xe8c2,	// (0x00034dc0) button_value_adjust_pane_cp4

0xe8ca,	// (0x00034dc8) form_field_data_pane_cp2

0x94b8,	// (0x0002f9b6) form_field_data_wide_pane_cp2

0xcd67,	// (0x00033265) bg_scroll_pane_ParamLimits

0xf4ab,	// (0x000359a9) scroll_handle_pane_ParamLimits

0xf4bf,	// (0x000359bd) scroll_sc2_down_pane_ParamLimits

0xf4bf,	// (0x000359bd) scroll_sc2_down_pane

0xcd98,	// (0x00033296) scroll_sc2_up_pane_ParamLimits

0xcd98,	// (0x00033296) scroll_sc2_up_pane

0xbf91,	// (0x0003248f) grid_wheel_folder_pane_g1_ParamLimits

0xbf91,	// (0x0003248f) grid_wheel_folder_pane_g1

0x01bb,	// (0x000266b9) clock_nsta_pane_cp2_ParamLimits

0x01bb,	// (0x000266b9) clock_nsta_pane_cp2

0x0933,	// (0x00026e31) listscroll_midp_pane_ParamLimits

0xa884,	// (0x00030d82) midp_canvas_pane

0x08a7,	// (0x00026da5) nsta_clock_indic_pane

0x08fd,	// (0x00026dfb) listscroll_form_pane_vc

0x0921,	// (0x00026e1f) listscroll_set_pane_vc_ParamLimits

0x0921,	// (0x00026e1f) listscroll_set_pane_vc

0xb3ad,	// (0x000318ab) clock_nsta_pane

0xb3d7,	// (0x000318d5) indicator_nsta_pane

0x13b2,	// (0x000278b0) bg_popup_sub_pane_cp2_ParamLimits

0x13c6,	// (0x000278c4) find_pane_cp2_ParamLimits

0x13c6,	// (0x000278c4) find_pane_cp2

0x13dc,	// (0x000278da) grid_toobar_pane_ParamLimits

0x154e,	// (0x00027a4c) list_form_gen_pane_vc_ParamLimits

0x154e,	// (0x00027a4c) list_form_gen_pane_vc

0x1564,	// (0x00027a62) scroll_pane_cp8_vc_ParamLimits

0x1564,	// (0x00027a62) scroll_pane_cp8_vc

0x1683,	// (0x00027b81) data_form_wide_pane_vc_ParamLimits

0x1683,	// (0x00027b81) data_form_wide_pane_vc

0x168f,	// (0x00027b8d) form_field_data_wide_pane_vc_g1

0x1697,	// (0x00027b95) form_field_data_wide_pane_vc_t1_ParamLimits

0x1697,	// (0x00027b95) form_field_data_wide_pane_vc_t1

0xca15,	// (0x00032f13) input_focus_pane_cp6_vc_ParamLimits

0xca15,	// (0x00032f13) input_focus_pane_cp6_vc

0xb7c9,	// (0x00031cc7) list_midp_pane_ParamLimits

0x3fa6,	// (0x0002a4a4) scroll_pane_cp16_ParamLimits

0x3fa6,	// (0x0002a4a4) scroll_pane_cp16

0x2c49,	// (0x00029147) button_value_adjust_pane_ParamLimits

0x2c49,	// (0x00029147) button_value_adjust_pane

0xbbd9,	// (0x000320d7) button_value_adjust_pane_cp6_ParamLimits

0xbbd9,	// (0x000320d7) button_value_adjust_pane_cp6

0xbd1b,	// (0x00032219) settings_code_pane_cp_ParamLimits

0xbd1b,	// (0x00032219) settings_code_pane_cp

0x991c,	// (0x0002fe1a) cell_touch_pane_g1

0x991c,	// (0x0002fe1a) cell_touch_pane_g2

0x0001,

0xf703,	// (0x00035c01) cell_touch_pane_g

0xbe6a,	// (0x00032368) cell_touch_pane_cp_ParamLimits

0xbe6a,	// (0x00032368) cell_touch_pane_cp

0xbe86,	// (0x00032384) cell_touch_pane_ParamLimits

0xbe86,	// (0x00032384) cell_touch_pane

0x991c,	// (0x0002fe1a) scroll_sc2_down_pane_g1

0x991c,	// (0x0002fe1a) scroll_sc2_up_pane_g1

0x9a0c,	// (0x0002ff0a) bg_set_opt_pane_cp4_vc

0x4344,	// (0x0002a842) list_set_graphic_pane_vc_g1_ParamLimits

0x4344,	// (0x0002a842) list_set_graphic_pane_vc_g1

0xd29b,	// (0x00033799) list_set_graphic_pane_vc_g2_ParamLimits

0xd29b,	// (0x00033799) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x00035ef8) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x00035ef8) list_set_graphic_pane_vc_g

0x4350,	// (0x0002a84e) text_primary_small_cp13_vc_ParamLimits

0x4350,	// (0x0002a84e) text_primary_small_cp13_vc

0x4368,	// (0x0002a866) list_set_graphic_pane_vc_ParamLimits

0x4368,	// (0x0002a866) list_set_graphic_pane_vc

0x9a0c,	// (0x0002ff0a) input_focus_pane_cp2_vc

0x991c,	// (0x0002fe1a) setting_code_pane_vc_g1

0x9ca4,	// (0x000301a2) setting_code_pane_vc_t1

0x437d,	// (0x0002a87b) set_text_pane_vc_t1_ParamLimits

0x437d,	// (0x0002a87b) set_text_pane_vc_t1

0x9a0c,	// (0x0002ff0a) input_focus_pane_cp1_vc

0x439b,	// (0x0002a899) list_set_text_pane_vc

0x991c,	// (0x0002fe1a) setting_text_pane_vc_g1

0x9a0c,	// (0x0002ff0a) bg_set_opt_pane_cp2_vc

0x9c9b,	// (0x00030199) setting_slider_graphic_pane_vc_g1

0x43a5,	// (0x0002a8a3) setting_slider_graphic_pane_vc_t1

0x43b7,	// (0x0002a8b5) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x00035efd) setting_slider_graphic_pane_vc_t

0x43c9,	// (0x0002a8c7) slider_set_pane_cp_vc

0x43d3,	// (0x0002a8d1) slider_set_pane_vc_g1

0x43dc,	// (0x0002a8da) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x00035f02) slider_set_pane_vc_g

0xca70,	// (0x00032f6e) set_opt_bg_pane_g1_copy1

0xca78,	// (0x00032f76) set_opt_bg_pane_g2_copy1

0x4408,	// (0x0002a906) set_opt_bg_pane_g3_copy1

0xca88,	// (0x00032f86) set_opt_bg_pane_g4_copy1

0xca90,	// (0x00032f8e) set_opt_bg_pane_g5_copy1

0xca98,	// (0x00032f96) set_opt_bg_pane_g6_copy1

0x4412,	// (0x0002a910) set_opt_bg_pane_g7_copy1

0x441c,	// (0x0002a91a) set_opt_bg_pane_g8_copy1

0x4426,	// (0x0002a924) set_opt_bg_pane_g9_copy1

0x9a0c,	// (0x0002ff0a) bg_set_opt_pane_cp_vc

0x4430,	// (0x0002a92e) setting_slider_pane_vc_t1

0x443f,	// (0x0002a93d) setting_slider_pane_vc_t2

0x4451,	// (0x0002a94f) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x00035f11) setting_slider_pane_vc_t

0x4463,	// (0x0002a961) slider_set_pane_vc

0x18b9,	// (0x00027db7) volume_set_pane_vc_g1

0x18c2,	// (0x00027dc0) volume_set_pane_vc_g2

0x18cb,	// (0x00027dc9) volume_set_pane_vc_g3

0x18d4,	// (0x00027dd2) volume_set_pane_vc_g4

0x18dd,	// (0x00027ddb) volume_set_pane_vc_g5

0x18e6,	// (0x00027de4) volume_set_pane_vc_g6

0x18ef,	// (0x00027ded) volume_set_pane_vc_g7

0x18f8,	// (0x00027df6) volume_set_pane_vc_g8

0x1901,	// (0x00027dff) volume_set_pane_vc_g9

0x190a,	// (0x00027e08) volume_set_pane_vc_g10

0x0009,

0xfa1a,	// (0x00035f18) volume_set_pane_vc_g

0x446d,	// (0x0002a96b) volume_set_pane_vc

0x4477,	// (0x0002a975) button_value_adjust_pane_cp1_vc

0x4481,	// (0x0002a97f) list_highlight_pane_cp2_vc

0x448a,	// (0x0002a988) list_set_pane_vc_ParamLimits

0x448a,	// (0x0002a988) list_set_pane_vc

0x44fa,	// (0x0002a9f8) main_pane_set_vc_t1_ParamLimits

0x44fa,	// (0x0002a9f8) main_pane_set_vc_t1

0x450f,	// (0x0002aa0d) main_pane_set_vc_t2_ParamLimits

0x450f,	// (0x0002aa0d) main_pane_set_vc_t2

0x4521,	// (0x0002aa1f) main_pane_set_vc_t3_ParamLimits

0x4521,	// (0x0002aa1f) main_pane_set_vc_t3

0x4535,	// (0x0002aa33) main_pane_set_vc_t4_ParamLimits

0x4535,	// (0x0002aa33) main_pane_set_vc_t4

0x0003,

0xfa2f,	// (0x00035f2d) main_pane_set_vc_t_ParamLimits

0xfa2f,	// (0x00035f2d) main_pane_set_vc_t

0x4549,	// (0x0002aa47) setting_code_pane_vc_ParamLimits

0x4549,	// (0x0002aa47) setting_code_pane_vc

0x455a,	// (0x0002aa58) setting_slider_graphic_pane_vc

0x455a,	// (0x0002aa58) setting_slider_pane_vc

0x455a,	// (0x0002aa58) setting_text_pane_vc

0x455a,	// (0x0002aa58) setting_volume_pane_vc

0x4564,	// (0x0002aa62) scroll_pane_cp121_vc

0xc9ef,	// (0x00032eed) set_content_pane_vc

0x456c,	// (0x0002aa6a) button_value_adjust_pane_g1

0x4575,	// (0x0002aa73) button_value_adjust_pane_g2

0x0001,

0xfa84,	// (0x00035f82) button_value_adjust_pane_g

0x457e,	// (0x0002aa7c) form_field_slider_wide_pane_vc_t1_ParamLimits

0x457e,	// (0x0002aa7c) form_field_slider_wide_pane_vc_t1

0x4590,	// (0x0002aa8e) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4590,	// (0x0002aa8e) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa89,	// (0x00035f87) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x00035f87) form_field_slider_wide_pane_vc_t

0x9c4b,	// (0x00030149) input_focus_pane_cp10_vc_ParamLimits

0x9c4b,	// (0x00030149) input_focus_pane_cp10_vc

0x45bc,	// (0x0002aaba) slider_cont_pane_cp1_vc_ParamLimits

0x45bc,	// (0x0002aaba) slider_cont_pane_cp1_vc

0x45ce,	// (0x0002aacc) slider_form_pane_g1_cp2

0x43dc,	// (0x0002a8da) slider_form_pane_g2_cp2

0x45fb,	// (0x0002aaf9) form_field_slider_pane_vc_t3

0x4609,	// (0x0002ab07) form_field_slider_pane_vc_t4

0x4617,	// (0x0002ab15) slider_form_pane_vc_ParamLimits

0x4617,	// (0x0002ab15) slider_form_pane_vc

0x4624,	// (0x0002ab22) form_field_slider_pane_vc_t1_ParamLimits

0x4624,	// (0x0002ab22) form_field_slider_pane_vc_t1

0x4590,	// (0x0002aa8e) form_field_slider_pane_vc_t2_ParamLimits

0x4590,	// (0x0002aa8e) form_field_slider_pane_vc_t2

0x0001,

0xfa9b,	// (0x00035f99) form_field_slider_pane_vc_t_ParamLimits

0xfa9b,	// (0x00035f99) form_field_slider_pane_vc_t

0x9c4b,	// (0x00030149) input_focus_pane_cp9_vc_ParamLimits

0x9c4b,	// (0x00030149) input_focus_pane_cp9_vc

0x463a,	// (0x0002ab38) slider_cont_pane_vc_ParamLimits

0x463a,	// (0x0002ab38) slider_cont_pane_vc

0x464e,	// (0x0002ab4c) list_form_graphic_pane_cp_vc_ParamLimits

0x464e,	// (0x0002ab4c) list_form_graphic_pane_cp_vc

0x168f,	// (0x00027b8d) form_field_popup_wide_pane_vc_g1

0x4663,	// (0x0002ab61) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4663,	// (0x0002ab61) form_field_popup_wide_pane_vc_t1

0xca15,	// (0x00032f13) input_focus_pane_cp8_vc_ParamLimits

0xca15,	// (0x00032f13) input_focus_pane_cp8_vc

0x46a8,	// (0x0002aba6) list_form_wide_pane_vc_ParamLimits

0x46a8,	// (0x0002aba6) list_form_wide_pane_vc

0x46b4,	// (0x0002abb2) list_form_graphic_pane_vc_g1

0x46bc,	// (0x0002abba) list_form_graphic_pane_vc_t1_ParamLimits

0x46bc,	// (0x0002abba) list_form_graphic_pane_vc_t1

0x9c8d,	// (0x0003018b) list_highlight_pane_cp5_vc_ParamLimits

0x9c8d,	// (0x0003018b) list_highlight_pane_cp5_vc

0x46d8,	// (0x0002abd6) list_form_graphic_pane_vc_ParamLimits

0x46d8,	// (0x0002abd6) list_form_graphic_pane_vc

0x168f,	// (0x00027b8d) form_field_popup_pane_vc_g1

0x46ee,	// (0x0002abec) form_field_popup_pane_vc_t1_ParamLimits

0x46ee,	// (0x0002abec) form_field_popup_pane_vc_t1

0xca15,	// (0x00032f13) input_focus_pane_cp7_vc_ParamLimits

0xca15,	// (0x00032f13) input_focus_pane_cp7_vc

0x4705,	// (0x0002ac03) list_form_pane_vc_ParamLimits

0x4705,	// (0x0002ac03) list_form_pane_vc

0x4711,	// (0x0002ac0f) data_form_pane_vc_t1_ParamLimits

0x4711,	// (0x0002ac0f) data_form_pane_vc_t1

0xca70,	// (0x00032f6e) input_focus_pane_vc_g1

0xca78,	// (0x00032f76) input_focus_pane_vc_g2

0xca80,	// (0x00032f7e) input_focus_pane_vc_g3

0xca88,	// (0x00032f86) input_focus_pane_vc_g4

0xca90,	// (0x00032f8e) input_focus_pane_vc_g5

0xca98,	// (0x00032f96) input_focus_pane_vc_g6

0xcaa0,	// (0x00032f9e) input_focus_pane_vc_g7

0xcaa8,	// (0x00032fa6) input_focus_pane_vc_g8

0xcab0,	// (0x00032fae) input_focus_pane_vc_g9

0x991c,	// (0x0002fe1a) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x00035b8a) input_focus_pane_vc_g

0x1683,	// (0x00027b81) data_form_pane_vc_ParamLimits

0x1683,	// (0x00027b81) data_form_pane_vc

0x168f,	// (0x00027b8d) form_field_data_pane_vc_g1

0x472e,	// (0x0002ac2c) form_field_data_pane_vc_t1_ParamLimits

0x472e,	// (0x0002ac2c) form_field_data_pane_vc_t1

0xca15,	// (0x00032f13) input_focus_pane_vc_ParamLimits

0xca15,	// (0x00032f13) input_focus_pane_vc

0x4748,	// (0x0002ac46) button_value_adjust_pane_cp3_vc

0x4750,	// (0x0002ac4e) button_value_adjust_pane_cp5_vc

0x4758,	// (0x0002ac56) form_field_data_pane_vc_ParamLimits

0x4758,	// (0x0002ac56) form_field_data_pane_vc

0x4773,	// (0x0002ac71) form_field_data_pane_vc_cp2

0x477b,	// (0x0002ac79) form_field_data_wide_pane_vc_ParamLimits

0x477b,	// (0x0002ac79) form_field_data_wide_pane_vc

0x4795,	// (0x0002ac93) form_field_data_wide_pane_vc_cp2

0x479d,	// (0x0002ac9b) form_field_popup_pane_vc_ParamLimits

0x479d,	// (0x0002ac9b) form_field_popup_pane_vc

0x47b8,	// (0x0002acb6) form_field_popup_wide_pane_vc_ParamLimits

0x47b8,	// (0x0002acb6) form_field_popup_wide_pane_vc

0x47d2,	// (0x0002acd0) form_field_slider_pane_vc_ParamLimits

0x47d2,	// (0x0002acd0) form_field_slider_pane_vc

0x47e5,	// (0x0002ace3) form_field_slider_wide_pane_vc_ParamLimits

0x47e5,	// (0x0002ace3) form_field_slider_wide_pane_vc

0xbea4,	// (0x000323a2) grid_touch_1_pane_ParamLimits

0xbea4,	// (0x000323a2) grid_touch_1_pane

0xbeb8,	// (0x000323b6) grid_touch_2_pane_ParamLimits

0xbeb8,	// (0x000323b6) grid_touch_2_pane

0x48b6,	// (0x0002adb4) touch_pane_g1_ParamLimits

0x48b6,	// (0x0002adb4) touch_pane_g1

0x481e,	// (0x0002ad1c) cell_app_pane_cp_wide_ParamLimits

0x481e,	// (0x0002ad1c) cell_app_pane_cp_wide

0x482f,	// (0x0002ad2d) grid_popup_fast_wide_pane_ParamLimits

0x482f,	// (0x0002ad2d) grid_popup_fast_wide_pane

0x4843,	// (0x0002ad41) scroll_pane_cp19_ParamLimits

0x4843,	// (0x0002ad41) scroll_pane_cp19

0x9a0c,	// (0x0002ff0a) bg_popup_window_pane_cp20

0x4857,	// (0x0002ad55) listscroll_popup_fast_wide_pane

0xd2a7,	// (0x000337a5) grid_indicator_nsta_pane

0x485f,	// (0x0002ad5d) clock_nsta_pane_g1

0x4868,	// (0x0002ad66) clock_nsta_pane_t1

0xbee4,	// (0x000323e2) cell_indicator_nsta_pane_ParamLimits

0xbee4,	// (0x000323e2) cell_indicator_nsta_pane

0x48b6,	// (0x0002adb4) cell_indicator_nsta_pane_g1

0xbefd,	// (0x000323fb) cell_indicator_nsta_pane_g2

0x0001,

0xfaac,	// (0x00035faa) cell_indicator_nsta_pane_g

0x48da,	// (0x0002add8) clock_nsta_pane_cp

0x48e2,	// (0x0002ade0) indicator_nsta_pane_cp

0x48eb,	// (0x0002ade9) nsta_clock_indic_pane_g1

0x9d89,	// (0x00030287) grid_indicator_pane

0xce8a,	// (0x00033388) scroll_pane_cp29

0x0107,	// (0x00026605) indicator_nsta_pane_cp2_ParamLimits

0x0107,	// (0x00026605) indicator_nsta_pane_cp2

0x9c8d,	// (0x0003018b) main_apps_wheel_pane

0x1876,	// (0x00027d74) form_midp_field_text_pane_ParamLimits

0x2c1b,	// (0x00029119) scroll_bar_cp050_ParamLimits

0x4954,	// (0x0002ae52) cell_indicator_pane_ParamLimits

0x4954,	// (0x0002ae52) cell_indicator_pane

0x496c,	// (0x0002ae6a) cell_indicator_pane_g1

0xbf13,	// (0x00032411) grid_wheel_folder_pane_ParamLimits

0xbf13,	// (0x00032411) grid_wheel_folder_pane

0xbf21,	// (0x0003241f) list_wheel_apps_pane_ParamLimits

0xbf21,	// (0x0003241f) list_wheel_apps_pane

0xbf2f,	// (0x0003242d) main_apps_wheel_pane_g1_ParamLimits

0xbf2f,	// (0x0003242d) main_apps_wheel_pane_g1

0xbf3f,	// (0x0003243d) main_apps_wheel_pane_g2_ParamLimits

0xbf3f,	// (0x0003243d) main_apps_wheel_pane_g2

0x0001,

0xfac8,	// (0x00035fc6) main_apps_wheel_pane_g_ParamLimits

0xfac8,	// (0x00035fc6) main_apps_wheel_pane_g

0xbf4f,	// (0x0003244d) main_apps_wheel_pane_t1_ParamLimits

0xbf4f,	// (0x0003244d) main_apps_wheel_pane_t1

0xbf67,	// (0x00032465) list_wheel_apps_pane_g1

0xbf6f,	// (0x0003246d) list_wheel_apps_pane_g2

0xbf77,	// (0x00032475) list_wheel_apps_pane_g3

0xbf7f,	// (0x0003247d) list_wheel_apps_pane_g4

0xbf87,	// (0x00032485) list_wheel_apps_pane_g5

0x0004,

0xfacd,	// (0x00035fcb) list_wheel_apps_pane_g

0xd20a,	// (0x00033708) navi_icon_text_pane

0xb29f,	// (0x0003179d) aid_fill_nsta

0xbfa4,	// (0x000324a2) navi_icon_text_pane_g1

0xbfb0,	// (0x000324ae) navi_icon_text_pane_t1

0xa7dd,	// (0x00030cdb) list_set_graphic_pane_t1_ParamLimits

0xa7dd,	// (0x00030cdb) list_set_graphic_pane_t1

0x336c,	// (0x0002986a) popup_midp_note_alarm_window_t6_ParamLimits

0x336c,	// (0x0002986a) popup_midp_note_alarm_window_t6

0x337e,	// (0x0002987c) popup_midp_note_alarm_window_t7_ParamLimits

0x337e,	// (0x0002987c) popup_midp_note_alarm_window_t7

0x3390,	// (0x0002988e) popup_midp_note_alarm_window_t8_ParamLimits

0x3390,	// (0x0002988e) popup_midp_note_alarm_window_t8

0x33a2,	// (0x000298a0) popup_midp_note_alarm_window_t9_ParamLimits

0x33a2,	// (0x000298a0) popup_midp_note_alarm_window_t9

0x33b4,	// (0x000298b2) popup_midp_note_alarm_window_t10_ParamLimits

0x33b4,	// (0x000298b2) popup_midp_note_alarm_window_t10

0x33c6,	// (0x000298c4) popup_midp_note_alarm_window_t11_ParamLimits

0x33c6,	// (0x000298c4) popup_midp_note_alarm_window_t11

0x33d8,	// (0x000298d6) scroll_pane_cp17_ParamLimits

0x33d8,	// (0x000298d6) scroll_pane_cp17

0x18b9,	// (0x00027db7) volume_small_pane_cp_g1

0x1bca,	// (0x000280c8) volume_small_pane_cp_g2

0x1bd3,	// (0x000280d1) volume_small_pane_cp_g3

0x1bdc,	// (0x000280da) volume_small_pane_cp_g4

0x1be5,	// (0x000280e3) volume_small_pane_cp_g5

0x1bee,	// (0x000280ec) volume_small_pane_cp_g6

0x1bf7,	// (0x000280f5) volume_small_pane_cp_g7

0x1c00,	// (0x000280fe) volume_small_pane_cp_g8

0x1c09,	// (0x00028107) volume_small_pane_cp_g9

0x1c12,	// (0x00028110) volume_small_pane_cp_g10

0x0493,	// (0x00026991) midp_ticker_pane_g1_ParamLimits

0x049f,	// (0x0002699d) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x00035c56) midp_ticker_pane_g_ParamLimits

0xa91b,	// (0x00030e19) midp_ticker_pane_t1_ParamLimits

0xb2c3,	// (0x000317c1) aid_fill_nsta_2

0x2c07,	// (0x00029105) list_form2_midp_pane

0x3d6f,	// (0x0002a26d) midp_editing_number_pane_ParamLimits

0x3d7e,	// (0x0002a27c) midp_ticker_pane_ParamLimits

0x4a5f,	// (0x0002af5d) form2_midp_field_pane

0x4a83,	// (0x0002af81) scroll_pane_cp51

0x4aa3,	// (0x0002afa1) form2_midp_button_pane_ParamLimits

0x4aa3,	// (0x0002afa1) form2_midp_button_pane

0x4ab5,	// (0x0002afb3) form2_midp_content_pane_ParamLimits

0x4ab5,	// (0x0002afb3) form2_midp_content_pane

0x4acf,	// (0x0002afcd) form2_midp_field_choice_group_pane

0x4ad7,	// (0x0002afd5) form2_midp_field_pane_g1

0x4adf,	// (0x0002afdd) form2_midp_field_pane_g2

0x4ae7,	// (0x0002afe5) form2_midp_field_pane_g3

0x4aef,	// (0x0002afed) form2_midp_field_pane_g4

0x0003,

0xfaf2,	// (0x00035ff0) form2_midp_field_pane_g

0x4af7,	// (0x0002aff5) form2_midp_gauge_slider_pane

0x4aff,	// (0x0002affd) form2_midp_gauge_wait_pane

0x4b07,	// (0x0002b005) form2_midp_image_pane_ParamLimits

0x4b07,	// (0x0002b005) form2_midp_image_pane

0x4b22,	// (0x0002b020) form2_midp_label_pane_ParamLimits

0x4b22,	// (0x0002b020) form2_midp_label_pane

0xbfde,	// (0x000324dc) form2_midp_label_pane_cp_ParamLimits

0xbfde,	// (0x000324dc) form2_midp_label_pane_cp

0x4b62,	// (0x0002b060) form2_midp_string_pane_ParamLimits

0x4b62,	// (0x0002b060) form2_midp_string_pane

0xee16,	// (0x00035314) form2_midp_text_pane_ParamLimits

0xee16,	// (0x00035314) form2_midp_text_pane

0x4b74,	// (0x0002b072) form2_midp_time_pane

0x4b84,	// (0x0002b082) input_focus_pane_cp51_ParamLimits

0x4b84,	// (0x0002b082) input_focus_pane_cp51

0x4b9c,	// (0x0002b09a) form2_midp_label_pane_t1_ParamLimits

0x4b9c,	// (0x0002b09a) form2_midp_label_pane_t1

0xee37,	// (0x00035335) form2_mdip_text_pane_t1_ParamLimits

0xee37,	// (0x00035335) form2_mdip_text_pane_t1

0xee5b,	// (0x00035359) form2_midp_time_pane_t1

0x4bea,	// (0x0002b0e8) form2_midp_gauge_slider_pane_t1

0xbfff,	// (0x000324fd) form2_midp_gauge_slider_pane_t2

0xc011,	// (0x0003250f) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafb,	// (0x00035ff9) form2_midp_gauge_slider_pane_t

0x4c20,	// (0x0002b11e) form2_midp_slider_pane

0x4c2c,	// (0x0002b12a) form2_midp_gauge_wait_pane_t1

0x4c3a,	// (0x0002b138) form2_midp_wait_pane_ParamLimits

0x4c3a,	// (0x0002b138) form2_midp_wait_pane

0x16d6,	// (0x00027bd4) list_single_2graphic_pane_cp4_ParamLimits

0x16d6,	// (0x00027bd4) list_single_2graphic_pane_cp4

0x4c65,	// (0x0002b163) list_single_midp_graphic_pane_cp_ParamLimits

0x4c65,	// (0x0002b163) list_single_midp_graphic_pane_cp

0x9a0c,	// (0x0002ff0a) list_highlight_pane_cp20

0x4c89,	// (0x0002b187) list_single_2graphic_pane_g1_cp4

0x4226,	// (0x0002a724) list_single_2graphic_pane_g2_cp4

0x4c91,	// (0x0002b18f) list_single_2graphic_pane_t1_cp4

0x9c8d,	// (0x0003018b) list_highlight_pane_cp21

0x4ca0,	// (0x0002b19e) list_single_midp_graphic_pane_g4_cp

0x4caf,	// (0x0002b1ad) list_single_midp_graphic_pane_t1_cp

0xc023,	// (0x00032521) form2_mdip_string_pane_t1_ParamLimits

0xc023,	// (0x00032521) form2_mdip_string_pane_t1

0x9a0c,	// (0x0002ff0a) bg_wml_button_pane_cp2

0x991c,	// (0x0002fe1a) form2_midp_image_pane_g1

0xe89f,	// (0x00034d9d) list_double_large_graphic_pane_g5_ParamLimits

0xe89f,	// (0x00034d9d) list_double_large_graphic_pane_g5

0x0933,	// (0x00026e31) midp_form_pane_ParamLimits

0x9c8d,	// (0x0003018b) main_apps_wheel_pane_ParamLimits

0xafb7,	// (0x000314b5) popup_preview_window_ParamLimits

0xafb7,	// (0x000314b5) popup_preview_window

0x0efb,	// (0x000273f9) popup_touch_info_window_ParamLimits

0x0efb,	// (0x000273f9) popup_touch_info_window

0x0f1d,	// (0x0002741b) popup_touch_menu_window_ParamLimits

0x0f1d,	// (0x0002741b) popup_touch_menu_window

0x9912,	// (0x0002fe10) bg_popup_sub_pane_cp6

0x4d69,	// (0x0002b267) list_touch_menu_pane

0x4d71,	// (0x0002b26f) list_single_touch_menu_pane_ParamLimits

0x4d71,	// (0x0002b26f) list_single_touch_menu_pane

0x4d89,	// (0x0002b287) list_single_touch_menu_pane_t1

0x9c8d,	// (0x0003018b) bg_popup_sub_pane_cp7_ParamLimits

0x9c8d,	// (0x0003018b) bg_popup_sub_pane_cp7

0x4d97,	// (0x0002b295) heading_sub_pane

0x4d9f,	// (0x0002b29d) list_touch_info_pane_ParamLimits

0x4d9f,	// (0x0002b29d) list_touch_info_pane

0x4dae,	// (0x0002b2ac) list_single_touch_info_pane_ParamLimits

0x4dae,	// (0x0002b2ac) list_single_touch_info_pane

0x4dc0,	// (0x0002b2be) list_single_touch_info_pane_t1

0x4dce,	// (0x0002b2cc) list_single_touch_info_pane_t2

0x0001,

0xfb09,	// (0x00036007) list_single_touch_info_pane_t

0x03c2,	// (0x000268c0) bg_popup_heading_pane_cp

0x4ddc,	// (0x0002b2da) heading_sub_pane_t1

0x158f,	// (0x00027a8d) bg_popup_preview_window_pane_cp_ParamLimits

0x158f,	// (0x00027a8d) bg_popup_preview_window_pane_cp

0x4d97,	// (0x0002b295) heading_preview_pane

0x4d9f,	// (0x0002b29d) list_preview_pane_ParamLimits

0x4d9f,	// (0x0002b29d) list_preview_pane

0x4dea,	// (0x0002b2e8) popup_preview_window_g1

0x4dae,	// (0x0002b2ac) list_single_preview_pane_ParamLimits

0x4dae,	// (0x0002b2ac) list_single_preview_pane

0x4df2,	// (0x0002b2f0) list_single_preview_pane_g1

0x4dfa,	// (0x0002b2f8) list_single_preview_pane_t1

0x4dc0,	// (0x0002b2be) list_single_preview_pane_t2

0x0001,

0xfb0e,	// (0x0003600c) list_single_preview_pane_t

0x4e08,	// (0x0002b306) bg_popup_heading_pane_cp2_ParamLimits

0x4e08,	// (0x0002b306) bg_popup_heading_pane_cp2

0x4e1e,	// (0x0002b31c) heading_preview_pane_g1

0x4e26,	// (0x0002b324) heading_preview_pane_t1_ParamLimits

0x4e26,	// (0x0002b324) heading_preview_pane_t1

0x9db9,	// (0x000302b7) soft_indicator_pane_t1_ParamLimits

0xa4d4,	// (0x000309d2) scroll_pane_ParamLimits

0xcd86,	// (0x00033284) scroll_sc2_left_pane

0xcd8f,	// (0x0003328d) scroll_sc2_right_pane

0xcdae,	// (0x000332ac) scroll_bg_pane_g1_ParamLimits

0xcdc3,	// (0x000332c1) scroll_bg_pane_g2_ParamLimits

0xcddb,	// (0x000332d9) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x00035be1) scroll_bg_pane_g_ParamLimits

0xcdae,	// (0x000332ac) scroll_handle_pane_g1_ParamLimits

0xcdfd,	// (0x000332fb) scroll_handle_pane_g2_ParamLimits

0xcddb,	// (0x000332d9) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x00035be8) scroll_handle_pane_g_ParamLimits

0x095b,	// (0x00026e59) popup_choice_list_window_ParamLimits

0x095b,	// (0x00026e59) popup_choice_list_window

0x13be,	// (0x000278bc) choice_list_pane

0x1470,	// (0x0002796e) cell_toolbar_pane_t1

0x1498,	// (0x00027996) toolbar_button_pane_ParamLimits

0x38a2,	// (0x00029da0) ai_gene_pane_1_t2_ParamLimits

0x38a2,	// (0x00029da0) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x00035e0b) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x00035e0b) ai_gene_pane_1_t

0x4e43,	// (0x0002b341) scroll_sc2_left_pane_g1

0x4e43,	// (0x0002b341) scroll_sc2_right_pane_g1

0x0933,	// (0x00026e31) bg_popup_sub_pane_cp10

0x4e4d,	// (0x0002b34b) list_choice_list_pane

0x4e66,	// (0x0002b364) list_single_choice_list_pane_ParamLimits

0x4e66,	// (0x0002b364) list_single_choice_list_pane

0x4e7e,	// (0x0002b37c) list_single_choice_list_pane_g1

0xcb66,	// (0x00033064) list_single_choice_list_pane_t1_ParamLimits

0xcb66,	// (0x00033064) list_single_choice_list_pane_t1

0x4e86,	// (0x0002b384) choice_list_pane_g1

0x4e8e,	// (0x0002b38c) choice_list_pane_t1

0x9912,	// (0x0002fe10) input_focus_pane_cp11

0xcce4,	// (0x000331e2) title_pane_stacon_g2_ParamLimits

0xcce4,	// (0x000331e2) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x00035bc7) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00035bc7) title_pane_stacon_g

0x03c2,	// (0x000268c0) cursor_press_pane

0xac34,	// (0x00031132) popup_fep_hwr_window_ParamLimits

0xac34,	// (0x00031132) popup_fep_hwr_window

0x0a9f,	// (0x00026f9d) popup_fep_vkb_window_ParamLimits

0x0a9f,	// (0x00026f9d) popup_fep_vkb_window

0x4e9c,	// (0x0002b39a) cursor_press_pane_g1

0x0002,

0xfb37,	// (0x00036035) fep_vkb_side_pane_g_ParamLimits

0x1c46,	// (0x00028144) fep_hwr_candidate_pane_ParamLimits

0x1c46,	// (0x00028144) fep_hwr_candidate_pane

0x1c70,	// (0x0002816e) fep_hwr_side_pane_ParamLimits

0x1c70,	// (0x0002816e) fep_hwr_side_pane

0x1c92,	// (0x00028190) fep_hwr_top_pane_ParamLimits

0x1c92,	// (0x00028190) fep_hwr_top_pane

0x1caa,	// (0x000281a8) fep_hwr_write_pane_ParamLimits

0x1caa,	// (0x000281a8) fep_hwr_write_pane

0xfb37,	// (0x00036035) fep_vkb_side_pane_g

0x4ea4,	// (0x0002b3a2) fep_hwr_top_pane_g1

0x4eb6,	// (0x0002b3b4) fep_hwr_top_pane_g2

0x1cd6,	// (0x000281d4) fep_hwr_top_pane_g3

0x0002,

0xfb13,	// (0x00036011) fep_hwr_top_pane_g

0x1ceb,	// (0x000281e9) fep_hwr_top_text_pane

0xcef7,	// (0x000333f5) fep_hwr_top_text_pane_g1

0x4eec,	// (0x0002b3ea) fep_hwr_top_text_pane_t1

0x1df5,	// (0x000282f3) fep_hwr_candidate_pane_g1

0x5137,	// (0x0002b635) fep_vkb_keypad_pane_g3_ParamLimits

0x5137,	// (0x0002b635) fep_vkb_keypad_pane_g3

0x5163,	// (0x0002b661) fep_vkb_keypad_pane_g4_ParamLimits

0x5163,	// (0x0002b661) fep_vkb_keypad_pane_g4

0x51da,	// (0x0002b6d8) fep_vkb_bottom_pane_g2_ParamLimits

0x51da,	// (0x0002b6d8) fep_vkb_bottom_pane_g2

0x0001,

0xfb3e,	// (0x0003603c) fep_vkb_bottom_pane_g_ParamLimits

0xfb3e,	// (0x0003603c) fep_vkb_bottom_pane_g

0x4e43,	// (0x0002b341) cell_vkb_side_pane_g2

0x0001,

0xfb48,	// (0x00036046) cell_vkb_side_pane_g

0x5265,	// (0x0002b763) cell_vkb_side_pane_t1

0x5273,	// (0x0002b771) cell_vkb_side_pane_t1_copy1

0x4e43,	// (0x0002b341) bg_fep_vkb_candidate_pane_g2

0x53b7,	// (0x0002b8b5) cell_vkb_candidate_pane_ParamLimits

0x4efa,	// (0x0002b3f8) aid_size_cell_vkb_ParamLimits

0x4efa,	// (0x0002b3f8) aid_size_cell_vkb

0x53b7,	// (0x0002b8b5) cell_vkb_candidate_pane

0x1e0f,	// (0x0002830d) bg_popup_fep_shadow_pane_g1

0xc140,	// (0x0003263e) fep_vkb_bottom_pane_ParamLimits

0xc140,	// (0x0003263e) fep_vkb_bottom_pane

0x4fc9,	// (0x0002b4c7) fep_vkb_candidate_pane_ParamLimits

0x4fc9,	// (0x0002b4c7) fep_vkb_candidate_pane

0xc16c,	// (0x0003266a) fep_vkb_keypad_pane_ParamLimits

0xc16c,	// (0x0003266a) fep_vkb_keypad_pane

0xc193,	// (0x00032691) fep_vkb_side_pane_ParamLimits

0xc193,	// (0x00032691) fep_vkb_side_pane

0xc1cf,	// (0x000326cd) fep_vkb_top_pane_ParamLimits

0xc1cf,	// (0x000326cd) fep_vkb_top_pane

0x5090,	// (0x0002b58e) fep_vkb_top_pane_g1_ParamLimits

0x5090,	// (0x0002b58e) fep_vkb_top_pane_g1

0x509f,	// (0x0002b59d) fep_vkb_top_pane_g2_ParamLimits

0x509f,	// (0x0002b59d) fep_vkb_top_pane_g2

0x50ae,	// (0x0002b5ac) fep_vkb_top_pane_g3_ParamLimits

0x50ae,	// (0x0002b5ac) fep_vkb_top_pane_g3

0x0003,

0xfb2e,	// (0x0003602c) fep_vkb_top_pane_g_ParamLimits

0xfb2e,	// (0x0003602c) fep_vkb_top_pane_g

0x50cc,	// (0x0002b5ca) fep_vkb_top_text_pane_ParamLimits

0x50cc,	// (0x0002b5ca) fep_vkb_top_text_pane

0xc20b,	// (0x00032709) fep_vkb_side_pane_g1_ParamLimits

0xc20b,	// (0x00032709) fep_vkb_side_pane_g1

0x5126,	// (0x0002b624) grid_vkb_side_pane_ParamLimits

0x5126,	// (0x0002b624) grid_vkb_side_pane

0x1e17,	// (0x00028315) bg_popup_fep_shadow_pane_g2

0x1e20,	// (0x0002831e) bg_popup_fep_shadow_pane_g3

0x1e28,	// (0x00028326) bg_popup_fep_shadow_pane_g4

0x1e31,	// (0x0002832f) bg_popup_fep_shadow_pane_g5

0x1e3b,	// (0x00028339) bg_popup_fep_shadow_pane_g6

0x1e43,	// (0x00028341) bg_popup_fep_shadow_pane_g7

0xca90,	// (0x00032f8e) bg_popup_fep_shadow_pane_g8

0x5185,	// (0x0002b683) grid_vkb_keypad_number_pane_ParamLimits

0x5185,	// (0x0002b683) grid_vkb_keypad_number_pane

0x5199,	// (0x0002b697) grid_vkb_keypad_pane_ParamLimits

0x5199,	// (0x0002b697) grid_vkb_keypad_pane

0x51bf,	// (0x0002b6bd) fep_vkb_bottom_pane_g1_ParamLimits

0x51bf,	// (0x0002b6bd) fep_vkb_bottom_pane_g1

0x51e8,	// (0x0002b6e6) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x51e8,	// (0x0002b6e6) grid_vkb_keypad_bottom_left_pane

0x51fd,	// (0x0002b6fb) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x51fd,	// (0x0002b6fb) grid_vkb_keypad_bottom_right_pane

0x5212,	// (0x0002b710) fep_vkb_top_text_pane_g1

0xc252,	// (0x00032750) fep_vkb_top_text_pane_t1

0xc264,	// (0x00032762) cell_vkb_side_pane_ParamLimits

0xc264,	// (0x00032762) cell_vkb_side_pane

0x4e43,	// (0x0002b341) cell_vkb_side_pane_g1

0x5281,	// (0x0002b77f) cell_vkb_keypad_pane_ParamLimits

0x5281,	// (0x0002b77f) cell_vkb_keypad_pane

0x530e,	// (0x0002b80c) cell_vkb_keypad_pane_g1

0x0008,

0xfb5b,	// (0x00036059) bg_popup_fep_shadow_pane_g

0x4e43,	// (0x0002b341) cell_hwr_side_pane_g1

0x4e43,	// (0x0002b341) cell_hwr_side_pane_g2

0x5318,	// (0x0002b816) cell_vkb_keypad_pane_t1

0xc27a,	// (0x00032778) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc27a,	// (0x00032778) cell_vkb_keypad_bottom_left_pane

0xc28f,	// (0x0003278d) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc28f,	// (0x0003278d) cell_vkb_keypad_bottom_right_pane

0x4e43,	// (0x0002b341) cell_vkb_keypad_bottom_left_pane_g1

0x4e43,	// (0x0002b341) cell_vkb_keypad_bottom_right_pane_g1

0x537c,	// (0x0002b87a) cell_vkb_keypad_number_pane_ParamLimits

0x537c,	// (0x0002b87a) cell_vkb_keypad_number_pane

0x539b,	// (0x0002b899) cell_vkb_keypad_number_pane_g1

0x53a5,	// (0x0002b8a3) cell_vkb_keypad_number_pane_g2

0x53ae,	// (0x0002b8ac) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4d,	// (0x0003604b) cell_vkb_keypad_number_pane_g

0x5318,	// (0x0002b816) cell_vkb_keypad_number_pane_t1

0x53d8,	// (0x0002b8d6) fep_vkb_candidate_pane_g1

0x0001,

0xfb48,	// (0x00036046) cell_hwr_side_pane_g

0x53f1,	// (0x0002b8ef) cell_hwr_side_pane_t1

0x1e55,	// (0x00028353) cell_hwr_side_pane_t1_copy1

0x50be,	// (0x0002b5bc) cell_hwr_candidate_pane_g1

0x1e63,	// (0x00028361) cell_hwr_candidate_pane_t1

0x4e43,	// (0x0002b341) cell_vkb_candidate_pane_g2

0x5477,	// (0x0002b975) cell_vkb_candidate_pane_t1

0x8660,	// (0x0002eb5e) bg_popup_fep_shadow_pane_ParamLimits

0x8660,	// (0x0002eb5e) bg_popup_fep_shadow_pane

0xc0b9,	// (0x000325b7) bg_fep_hwr_top_pane_g4

0x4ec8,	// (0x0002b3c6) bg_hwr_side_pane_g1_ParamLimits

0x4ec8,	// (0x0002b3c6) bg_hwr_side_pane_g1

0xc0df,	// (0x000325dd) cell_hwr_side_pane_ParamLimits

0xc0df,	// (0x000325dd) cell_hwr_side_pane

0x1d66,	// (0x00028264) fep_hwr_write_pane_g1_ParamLimits

0x1d66,	// (0x00028264) fep_hwr_write_pane_g1

0x1d73,	// (0x00028271) fep_hwr_write_pane_g2_ParamLimits

0x1d73,	// (0x00028271) fep_hwr_write_pane_g2

0x1d80,	// (0x0002827e) fep_hwr_write_pane_g3_ParamLimits

0x1d80,	// (0x0002827e) fep_hwr_write_pane_g3

0xc0ff,	// (0x000325fd) fep_hwr_write_pane_g4_ParamLimits

0xc0ff,	// (0x000325fd) fep_hwr_write_pane_g4

0x0005,

0xfb1a,	// (0x00036018) fep_hwr_write_pane_g_ParamLimits

0xfb1a,	// (0x00036018) fep_hwr_write_pane_g

0xc0b9,	// (0x000325b7) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xc0b9,	// (0x000325b7) bg_fep_hwr_candidate_pane_g2

0x1da3,	// (0x000282a1) cell_hwr_candidate_pane_ParamLimits

0x1da3,	// (0x000282a1) cell_hwr_candidate_pane

0x1df5,	// (0x000282f3) fep_hwr_candidate_pane_g1_ParamLimits

0x4f28,	// (0x0002b426) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4f28,	// (0x0002b426) bg_popup_fep_shadow_pane_cp2

0x50be,	// (0x0002b5bc) fep_vkb_top_pane_g4_ParamLimits

0x50be,	// (0x0002b5bc) fep_vkb_top_pane_g4

0x5104,	// (0x0002b602) fep_vkb_side_pane_g2_ParamLimits

0x5104,	// (0x0002b602) fep_vkb_side_pane_g2

0x93c6,	// (0x0002f8c4) list_setting_pane_t4_ParamLimits

0x93c6,	// (0x0002f8c4) list_setting_pane_t4

0x945a,	// (0x0002f958) list_setting_number_pane_t5_ParamLimits

0x945a,	// (0x0002f958) list_setting_number_pane_t5

0xa6d8,	// (0x00030bd6) list_double_heading_pane_cp2_ParamLimits

0xa6d8,	// (0x00030bd6) list_double_heading_pane_cp2

0x5485,	// (0x0002b983) list_double_heading_pane_g1_cp2_ParamLimits

0x5485,	// (0x0002b983) list_double_heading_pane_g1_cp2

0x5491,	// (0x0002b98f) list_double_heading_pane_g2_cp2_ParamLimits

0x5491,	// (0x0002b98f) list_double_heading_pane_g2_cp2

0x54a5,	// (0x0002b9a3) list_double_heading_pane_t1_cp2_ParamLimits

0x54a5,	// (0x0002b9a3) list_double_heading_pane_t1_cp2

0x54bb,	// (0x0002b9b9) list_double_heading_pane_t2_cp2_ParamLimits

0x54bb,	// (0x0002b9b9) list_double_heading_pane_t2_cp2

0x98fa,	// (0x0002fdf8) aid_value_unit2

0xf217,	// (0x00035715) popup_preview_fixed_window

0x9f74,	// (0x00030472) bg_popup_preview_window_pane_cp02

0x54cd,	// (0x0002b9cb) list_preview_fixed_pane

0x5513,	// (0x0002ba11) list_empty_pane_fp_ParamLimits

0x5513,	// (0x0002ba11) list_empty_pane_fp

0x5513,	// (0x0002ba11) list_single_cale_day_pane_fp_ParamLimits

0x5513,	// (0x0002ba11) list_single_cale_day_pane_fp

0x5513,	// (0x0002ba11) list_single_graphic_heading_pane_fp_ParamLimits

0x5513,	// (0x0002ba11) list_single_graphic_heading_pane_fp

0x5513,	// (0x0002ba11) list_single_graphic_pane_fp_ParamLimits

0x5513,	// (0x0002ba11) list_single_graphic_pane_fp

0x5513,	// (0x0002ba11) list_single_heading_pane_fp_ParamLimits

0x5513,	// (0x0002ba11) list_single_heading_pane_fp

0x5513,	// (0x0002ba11) list_single_pane_fp_ParamLimits

0x5513,	// (0x0002ba11) list_single_pane_fp

0x552c,	// (0x0002ba2a) list_single_pane_fp_g1_ParamLimits

0x552c,	// (0x0002ba2a) list_single_pane_fp_g1

0xee6e,	// (0x0003536c) list_single_pane_fp_g2_ParamLimits

0xee6e,	// (0x0003536c) list_single_pane_fp_g2

0xee7a,	// (0x00035378) list_single_pane_fp_g3_ParamLimits

0xee7a,	// (0x00035378) list_single_pane_fp_g3

0x5538,	// (0x0002ba36) list_single_pane_fp_g4_ParamLimits

0x5538,	// (0x0002ba36) list_single_pane_fp_g4

0x0003,

0xfb7c,	// (0x0003607a) list_single_pane_fp_g_ParamLimits

0xfb7c,	// (0x0003607a) list_single_pane_fp_g

0xee8e,	// (0x0003538c) list_single_pane_fp_t1_ParamLimits

0xee8e,	// (0x0003538c) list_single_pane_fp_t1

0xeea5,	// (0x000353a3) list_single_graphic_pane_fp_g1_ParamLimits

0xeea5,	// (0x000353a3) list_single_graphic_pane_fp_g1

0x552c,	// (0x0002ba2a) list_single_graphic_pane_fp_g2_ParamLimits

0x552c,	// (0x0002ba2a) list_single_graphic_pane_fp_g2

0xee6e,	// (0x0003536c) list_single_graphic_pane_fp_g3_ParamLimits

0xee6e,	// (0x0003536c) list_single_graphic_pane_fp_g3

0xee7a,	// (0x00035378) list_single_graphic_pane_fp_g4_ParamLimits

0xee7a,	// (0x00035378) list_single_graphic_pane_fp_g4

0x5538,	// (0x0002ba36) list_single_graphic_pane_fp_g5_ParamLimits

0x5538,	// (0x0002ba36) list_single_graphic_pane_fp_g5

0x0004,

0xfb85,	// (0x00036083) list_single_graphic_pane_fp_g_ParamLimits

0xfb85,	// (0x00036083) list_single_graphic_pane_fp_g

0xeeb1,	// (0x000353af) list_single_graphic_pane_fp_t1_ParamLimits

0xeeb1,	// (0x000353af) list_single_graphic_pane_fp_t1

0xeea5,	// (0x000353a3) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xeea5,	// (0x000353a3) list_single_graphic_heading_pane_fp_g1

0x552c,	// (0x0002ba2a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x552c,	// (0x0002ba2a) list_single_graphic_heading_pane_fp_g2

0xee6e,	// (0x0003536c) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xee6e,	// (0x0003536c) list_single_graphic_heading_pane_fp_g3

0xee7a,	// (0x00035378) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xee7a,	// (0x00035378) list_single_graphic_heading_pane_fp_g4

0x5538,	// (0x0002ba36) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5538,	// (0x0002ba36) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb85,	// (0x00036083) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb85,	// (0x00036083) list_single_graphic_heading_pane_fp_g

0xeec7,	// (0x000353c5) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xeec7,	// (0x000353c5) list_single_graphic_heading_pane_fp_t1

0xeedd,	// (0x000353db) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xeedd,	// (0x000353db) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x0003608e) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x0003608e) list_single_graphic_heading_pane_fp_t

0xeeef,	// (0x000353ed) list_single_cale_day_pane_fp_g1_ParamLimits

0xeeef,	// (0x000353ed) list_single_cale_day_pane_fp_g1

0x5544,	// (0x0002ba42) list_single_cale_day_pane_fp_g2_ParamLimits

0x5544,	// (0x0002ba42) list_single_cale_day_pane_fp_g2

0xef27,	// (0x00035425) list_single_cale_day_pane_fp_g3_ParamLimits

0xef27,	// (0x00035425) list_single_cale_day_pane_fp_g3

0xef4f,	// (0x0003544d) list_single_cale_day_pane_fp_g4_ParamLimits

0xef4f,	// (0x0003544d) list_single_cale_day_pane_fp_g4

0xef73,	// (0x00035471) list_single_cale_day_pane_fp_g5_ParamLimits

0xef73,	// (0x00035471) list_single_cale_day_pane_fp_g5

0x0004,

0xfb95,	// (0x00036093) list_single_cale_day_pane_fp_g_ParamLimits

0xfb95,	// (0x00036093) list_single_cale_day_pane_fp_g

0xef97,	// (0x00035495) list_single_cale_day_pane_fp_t1_ParamLimits

0xef97,	// (0x00035495) list_single_cale_day_pane_fp_t1

0xefbd,	// (0x000354bb) list_single_cale_day_pane_fp_t2_ParamLimits

0xefbd,	// (0x000354bb) list_single_cale_day_pane_fp_t2

0xefd6,	// (0x000354d4) list_single_cale_day_pane_fp_t3_ParamLimits

0xefd6,	// (0x000354d4) list_single_cale_day_pane_fp_t3

0x0002,

0xfba0,	// (0x0003609e) list_single_cale_day_pane_fp_t_ParamLimits

0xfba0,	// (0x0003609e) list_single_cale_day_pane_fp_t

0x552c,	// (0x0002ba2a) list_empty_pane_fp_g1_ParamLimits

0x552c,	// (0x0002ba2a) list_empty_pane_fp_g1

0xefef,	// (0x000354ed) list_empty_pane_fp_t1

0xeffd,	// (0x000354fb) list_empty_pane_fp_t2

0x0001,

0xfba7,	// (0x000360a5) list_empty_pane_fp_t

0x552c,	// (0x0002ba2a) list_single_heading_pane_fp_g1_ParamLimits

0x552c,	// (0x0002ba2a) list_single_heading_pane_fp_g1

0xee6e,	// (0x0003536c) list_single_heading_pane_fp_g2_ParamLimits

0xee6e,	// (0x0003536c) list_single_heading_pane_fp_g2

0xee7a,	// (0x00035378) list_single_heading_pane_fp_g3_ParamLimits

0xee7a,	// (0x00035378) list_single_heading_pane_fp_g3

0x0002,

0xfbac,	// (0x000360aa) list_single_heading_pane_fp_g_ParamLimits

0xfbac,	// (0x000360aa) list_single_heading_pane_fp_g

0xf00b,	// (0x00035509) list_single_heading_pane_fp_t1_ParamLimits

0xf00b,	// (0x00035509) list_single_heading_pane_fp_t1

0xf01d,	// (0x0003551b) list_single_heading_pane_fp_t2_ParamLimits

0xf01d,	// (0x0003551b) list_single_heading_pane_fp_t2

0x0001,

0xfbb3,	// (0x000360b1) list_single_heading_pane_fp_t_ParamLimits

0xfbb3,	// (0x000360b1) list_single_heading_pane_fp_t

0xcb7b,	// (0x00033079) aid_size_cell_fast

0x9ef4,	// (0x000303f2) soft_indicator_pane_cp1_t1

0xcbb8,	// (0x000330b6) cell_app_pane_cp2_ParamLimits

0xcbb8,	// (0x000330b6) cell_app_pane_cp2

0x1c2f,	// (0x0002812d) fep_hwr_candidate_drop_down_list_pane

0xc114,	// (0x00032612) fep_hwr_candidate_pane_g3_ParamLimits

0xc114,	// (0x00032612) fep_hwr_candidate_pane_g3

0xc121,	// (0x0003261f) fep_hwr_candidate_pane_g4_ParamLimits

0xc121,	// (0x0003261f) fep_hwr_candidate_pane_g4

0x0002,

0xfb27,	// (0x00036025) fep_hwr_candidate_pane_g_ParamLimits

0xfb27,	// (0x00036025) fep_hwr_candidate_pane_g

0x4fb8,	// (0x0002b4b6) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4fb8,	// (0x0002b4b6) fep_vkb_candidate_drop_down_list_pane

0x53e0,	// (0x0002b8de) fep_vkb_candidate_pane_g3

0x53e8,	// (0x0002b8e6) fep_vkb_candidate_pane_g4

0x0002,

0xfb54,	// (0x00036052) fep_vkb_candidate_pane_g

0x50be,	// (0x0002b5bc) cell_hwr_candidate_pane_g1_ParamLimits

0x53ff,	// (0x0002b8fd) cell_hwr_candidate_pane_g3_ParamLimits

0x53ff,	// (0x0002b8fd) cell_hwr_candidate_pane_g3

0x5420,	// (0x0002b91e) cell_hwr_candidate_pane_g4_ParamLimits

0x5420,	// (0x0002b91e) cell_hwr_candidate_pane_g4

0x0002,

0xfb6e,	// (0x0003606c) cell_hwr_candidate_pane_g_ParamLimits

0xfb6e,	// (0x0003606c) cell_hwr_candidate_pane_g

0x5441,	// (0x0002b93f) cell_vkb_candidate_pane_g3_ParamLimits

0x5441,	// (0x0002b93f) cell_vkb_candidate_pane_g3

0x545c,	// (0x0002b95a) cell_vkb_candidate_pane_g4_ParamLimits

0x545c,	// (0x0002b95a) cell_vkb_candidate_pane_g4

0x5550,	// (0x0002ba4e) cell_app_pane_cp2_g1_ParamLimits

0x5550,	// (0x0002ba4e) cell_app_pane_cp2_g1

0x556e,	// (0x0002ba6c) cell_app_pane_cp2_g2_ParamLimits

0x556e,	// (0x0002ba6c) cell_app_pane_cp2_g2

0x0001,

0xfbb8,	// (0x000360b6) cell_app_pane_cp2_g_ParamLimits

0xfbb8,	// (0x000360b6) cell_app_pane_cp2_g

0x557a,	// (0x0002ba78) cell_app_pane_cp2_t1_ParamLimits

0x557a,	// (0x0002ba78) cell_app_pane_cp2_t1

0xca15,	// (0x00032f13) grid_highlight_pane_cp1_ParamLimits

0xca15,	// (0x00032f13) grid_highlight_pane_cp1

0x1e81,	// (0x0002837f) cell_hwr_candidate_pane_cp1_ParamLimits

0x1e81,	// (0x0002837f) cell_hwr_candidate_pane_cp1

0x50be,	// (0x0002b5bc) fep_hwr_candidate_drop_down_list_pane_g1

0x558c,	// (0x0002ba8a) fep_hwr_candidate_drop_down_list_pane_g2

0x5599,	// (0x0002ba97) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbd,	// (0x000360bb) fep_hwr_candidate_drop_down_list_pane_g

0x1ea5,	// (0x000283a3) fep_hwr_candidate_drop_down_list_scroll_pane

0x1eae,	// (0x000283ac) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1eae,	// (0x000283ac) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1ebb,	// (0x000283b9) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1ebb,	// (0x000283b9) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1ec8,	// (0x000283c6) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1ec8,	// (0x000283c6) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5441,	// (0x0002b93f) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5441,	// (0x0002b93f) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x545c,	// (0x0002b95a) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x545c,	// (0x0002b95a) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1ed5,	// (0x000283d3) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1ed5,	// (0x000283d3) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1ef0,	// (0x000283ee) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1ef0,	// (0x000283ee) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1f0b,	// (0x00028409) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1f0b,	// (0x00028409) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc4,	// (0x000360c2) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc4,	// (0x000360c2) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x55a6,	// (0x0002baa4) cell_vkb_candidate_pane_cp1_ParamLimits

0x55a6,	// (0x0002baa4) cell_vkb_candidate_pane_cp1

0x50be,	// (0x0002b5bc) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x50be,	// (0x0002b5bc) fep_vkb_candidate_drop_down_list_pane_g1

0x558c,	// (0x0002ba8a) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x558c,	// (0x0002ba8a) fep_vkb_candidate_drop_down_list_pane_g2

0x5599,	// (0x0002ba97) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5599,	// (0x0002ba97) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbd,	// (0x000360bb) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbd,	// (0x000360bb) fep_vkb_candidate_drop_down_list_pane_g

0x55cc,	// (0x0002baca) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x55cc,	// (0x0002baca) fep_vkb_candidate_drop_down_list_scroll_pane

0x55d9,	// (0x0002bad7) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x55d9,	// (0x0002bad7) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x55e6,	// (0x0002bae4) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x55e6,	// (0x0002bae4) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x55f2,	// (0x0002baf0) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x55f2,	// (0x0002baf0) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x53ff,	// (0x0002b8fd) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x53ff,	// (0x0002b8fd) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5420,	// (0x0002b91e) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5420,	// (0x0002b91e) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x55fe,	// (0x0002bafc) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x55fe,	// (0x0002bafc) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x561f,	// (0x0002bb1d) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x561f,	// (0x0002bb1d) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5640,	// (0x0002bb3e) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5640,	// (0x0002bb3e) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd5,	// (0x000360d3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd5,	// (0x000360d3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9b44,	// (0x00030042) title_pane_g1_ParamLimits

0x9b57,	// (0x00030055) title_pane_g2_ParamLimits

0xf54e,	// (0x00035a4c) title_pane_g_ParamLimits

0xcee7,	// (0x000333e5) aid_call2_pane

0xceef,	// (0x000333ed) aid_call_pane

0xcef7,	// (0x000333f5) popup_clock_analogue_window_g1

0xcef7,	// (0x000333f5) popup_clock_analogue_window_g2

0xf4d4,	// (0x000359d2) popup_clock_analogue_window_g3

0xf4dd,	// (0x000359db) popup_clock_analogue_window_g4

0x991c,	// (0x0002fe1a) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x00035bf6) popup_clock_analogue_window_g

0xf4e5,	// (0x000359e3) popup_clock_analogue_window_t1

0xf4f3,	// (0x000359f1) clock_digital_number_pane_ParamLimits

0xf4f3,	// (0x000359f1) clock_digital_number_pane

0xf4ff,	// (0x000359fd) clock_digital_number_pane_cp02_ParamLimits

0xf4ff,	// (0x000359fd) clock_digital_number_pane_cp02

0xf50b,	// (0x00035a09) clock_digital_number_pane_cp03_ParamLimits

0xf50b,	// (0x00035a09) clock_digital_number_pane_cp03

0xf517,	// (0x00035a15) clock_digital_number_pane_cp04_ParamLimits

0xf517,	// (0x00035a15) clock_digital_number_pane_cp04

0xf523,	// (0x00035a21) clock_digital_separator_pane_ParamLimits

0xf523,	// (0x00035a21) clock_digital_separator_pane

0xf52f,	// (0x00035a2d) popup_clock_digital_window_t1_ParamLimits

0xf52f,	// (0x00035a2d) popup_clock_digital_window_t1

0x991c,	// (0x0002fe1a) clock_digital_number_pane_g1

0x991c,	// (0x0002fe1a) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x00035c01) clock_digital_number_pane_g

0x991c,	// (0x0002fe1a) clock_digital_separator_pane_g1

0x991c,	// (0x0002fe1a) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x00035c01) clock_digital_separator_pane_g

0xb29f,	// (0x0003179d) aid_fill_nsta_ParamLimits

0xb3d7,	// (0x000318d5) indicator_nsta_pane_ParamLimits

0x124b,	// (0x00027749) popup_clock_analogue_window

0x124b,	// (0x00027749) popup_clock_digital_window

0xd2a7,	// (0x000337a5) grid_indicator_nsta_pane_ParamLimits

0x4876,	// (0x0002ad74) clock_nsta_pane_t2

0x0001,

0xfaa7,	// (0x00035fa5) clock_nsta_pane_t

0xf4a1,	// (0x0003599f) aid_size_max_handle

0xa64b,	// (0x00030b49) aid_size_min_handle

0x03c2,	// (0x000268c0) editor_scroll_pane

0x565b,	// (0x0002bb59) ex_editor_pane

0xcb41,	// (0x0003303f) scroll_pane_cp13

0xa500,	// (0x000309fe) scroll_pane_cp14

0xcf26,	// (0x00033424) scroll_pane_cp36

0xa6eb,	// (0x00030be9) list_single_graphic_hl_pane_cp2_ParamLimits

0xa6eb,	// (0x00030be9) list_single_graphic_hl_pane_cp2

0xbd78,	// (0x00032276) list_single_graphic_hl_pane_ParamLimits

0xbd78,	// (0x00032276) list_single_graphic_hl_pane

0xf033,	// (0x00035531) aid_size_min_hl_cp1

0x5663,	// (0x0002bb61) list_highlight_pane_cp34_ParamLimits

0x5663,	// (0x0002bb61) list_highlight_pane_cp34

0x5674,	// (0x0002bb72) list_single_graphic_hl_pane_g1_ParamLimits

0x5674,	// (0x0002bb72) list_single_graphic_hl_pane_g1

0x9711,	// (0x0002fc0f) list_single_graphic_hl_pane_g2_ParamLimits

0x9711,	// (0x0002fc0f) list_single_graphic_hl_pane_g2

0x9711,	// (0x0002fc0f) list_single_graphic_hl_pane_g3_ParamLimits

0x9711,	// (0x0002fc0f) list_single_graphic_hl_pane_g3

0xf03c,	// (0x0003553a) list_single_graphic_hl_pane_g4_ParamLimits

0xf03c,	// (0x0003553a) list_single_graphic_hl_pane_g4

0x971d,	// (0x0002fc1b) list_single_graphic_hl_pane_g5_ParamLimits

0x971d,	// (0x0002fc1b) list_single_graphic_hl_pane_g5

0x0004,

0xfbe6,	// (0x000360e4) list_single_graphic_hl_pane_g_ParamLimits

0xfbe6,	// (0x000360e4) list_single_graphic_hl_pane_g

0x9731,	// (0x0002fc2f) list_single_graphic_hl_pane_t1_ParamLimits

0x9731,	// (0x0002fc2f) list_single_graphic_hl_pane_t1

0x5681,	// (0x0002bb7f) aid_size_min_hl_cp2

0x568a,	// (0x0002bb88) list_highlight_pane_cp34_cp2_ParamLimits

0x568a,	// (0x0002bb88) list_highlight_pane_cp34_cp2

0x5674,	// (0x0002bb72) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5674,	// (0x0002bb72) list_single_graphic_hl_pane_g1_cp2

0x5697,	// (0x0002bb95) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5697,	// (0x0002bb95) list_single_graphic_hl_pane_g2_cp2

0xc2aa,	// (0x000327a8) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc2aa,	// (0x000327a8) list_single_graphic_hl_pane_g3_cp2

0xc2b8,	// (0x000327b6) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc2b8,	// (0x000327b6) list_single_graphic_hl_pane_g4_cp2

0x56b1,	// (0x0002bbaf) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x56b1,	// (0x0002bbaf) list_single_graphic_hl_pane_g5_cp2

0xaa2c,	// (0x00030f2a) control_pane_g4_ParamLimits

0xaa2c,	// (0x00030f2a) control_pane_g4

0x0933,	// (0x00026e31) bg_popup_sub_pane_cp10_ParamLimits

0x4e4d,	// (0x0002b34b) list_choice_list_pane_ParamLimits

0x4e5c,	// (0x0002b35a) scroll_pane_cp23

0x9f74,	// (0x00030472) bg_popup_preview_window_pane_cp02_ParamLimits

0x54cd,	// (0x0002b9cb) list_preview_fixed_pane_ParamLimits

0x54e3,	// (0x0002b9e1) list_preview_fixed_pane_cp_ParamLimits

0x54e3,	// (0x0002b9e1) list_preview_fixed_pane_cp

0x54ef,	// (0x0002b9ed) popup_preview_fixed_window_g1_ParamLimits

0x54ef,	// (0x0002b9ed) popup_preview_fixed_window_g1

0x54fb,	// (0x0002b9f9) popup_preview_fixed_window_g2_ParamLimits

0x54fb,	// (0x0002b9f9) popup_preview_fixed_window_g2

0x0002,

0xfb75,	// (0x00036073) popup_preview_fixed_window_g_ParamLimits

0xfb75,	// (0x00036073) popup_preview_fixed_window_g

0xf413,	// (0x00035911) aid_navi_side_left_pane_ParamLimits

0xf428,	// (0x00035926) aid_navi_side_right_pane_ParamLimits

0xf440,	// (0x0003593e) navi_icon_pane_stacon_ParamLimits

0xf454,	// (0x00035952) navi_navi_pane_stacon_ParamLimits

0xf440,	// (0x0003593e) navi_text_pane_stacon_ParamLimits

0x9912,	// (0x0002fe10) main_text_info_pane

0x56db,	// (0x0002bbd9) listscroll_text_info_pane

0x56e3,	// (0x0002bbe1) list_text_info_pane_ParamLimits

0x56e3,	// (0x0002bbe1) list_text_info_pane

0x56f2,	// (0x0002bbf0) scroll_pane_cp24_ParamLimits

0x56f2,	// (0x0002bbf0) scroll_pane_cp24

0xc2c4,	// (0x000327c2) list_text_info_pane_t1_ParamLimits

0xc2c4,	// (0x000327c2) list_text_info_pane_t1

0xab98,	// (0x00031096) popup_fast_swap2_window_ParamLimits

0xab98,	// (0x00031096) popup_fast_swap2_window

0x5735,	// (0x0002bc33) aid_size_cell_fast2

0x9912,	// (0x0002fe10) bg_popup_window_pane_cp17

0x2c33,	// (0x00029131) heading_pane_cp2

0xa1d4,	// (0x000306d2) listscroll_fast2_pane

0x573f,	// (0x0002bc3d) grid_fast2_pane

0x5749,	// (0x0002bc47) listscroll_fast2_pane_g1

0x5753,	// (0x0002bc51) listscroll_fast2_pane_g2

0x0001,

0xfbf1,	// (0x000360ef) listscroll_fast2_pane_g

0xcb41,	// (0x0003303f) scroll_pane_cp26

0x575d,	// (0x0002bc5b) cell_fast2_pane_ParamLimits

0x575d,	// (0x0002bc5b) cell_fast2_pane

0x5774,	// (0x0002bc72) cell_fast2_pane_g1

0x577d,	// (0x0002bc7b) cell_fast2_pane_g2

0x5786,	// (0x0002bc84) cell_fast2_pane_g3

0x0002,

0xfbf6,	// (0x000360f4) cell_fast2_pane_g

0xa2bd,	// (0x000307bb) grid_highlight_pane_cp9

0xa2d2,	// (0x000307d0) main_eswt_pane_ParamLimits

0xa2d2,	// (0x000307d0) main_eswt_pane

0x5707,	// (0x0002bc05) list_single_text_info_pane

0x578e,	// (0x0002bc8c) eswt_ctrl_button_pane

0x578e,	// (0x0002bc8c) eswt_ctrl_canvas_pane

0x5796,	// (0x0002bc94) eswt_ctrl_combo_pane

0x578e,	// (0x0002bc8c) eswt_ctrl_default_pane

0x578e,	// (0x0002bc8c) eswt_ctrl_label_pane

0x579e,	// (0x0002bc9c) eswt_ctrl_wait_pane

0x57a6,	// (0x0002bca4) eswt_shell_pane

0x9912,	// (0x0002fe10) listscroll_eswt_app_pane

0x57c6,	// (0x0002bcc4) popup_eswt_tasktip_window_ParamLimits

0x57c6,	// (0x0002bcc4) popup_eswt_tasktip_window

0x158f,	// (0x00027a8d) bg_popup_window_pane_cp18

0x57d7,	// (0x0002bcd5) eswt_control_pane_g1_ParamLimits

0x57d7,	// (0x0002bcd5) eswt_control_pane_g1

0x57e4,	// (0x0002bce2) eswt_control_pane_g2_ParamLimits

0x57e4,	// (0x0002bce2) eswt_control_pane_g2

0x57f1,	// (0x0002bcef) eswt_control_pane_g3_ParamLimits

0x57f1,	// (0x0002bcef) eswt_control_pane_g3

0x57fe,	// (0x0002bcfc) eswt_control_pane_g4_ParamLimits

0x57fe,	// (0x0002bcfc) eswt_control_pane_g4

0x0003,

0xfbfd,	// (0x000360fb) eswt_control_pane_g_ParamLimits

0xfbfd,	// (0x000360fb) eswt_control_pane_g

0xca15,	// (0x00032f13) bg_button_pane_ParamLimits

0xca15,	// (0x00032f13) bg_button_pane

0xa2d2,	// (0x000307d0) common_borders_pane_copy2_ParamLimits

0xa2d2,	// (0x000307d0) common_borders_pane_copy2

0x580b,	// (0x0002bd09) control_button_pane_g1_ParamLimits

0x580b,	// (0x0002bd09) control_button_pane_g1

0x5817,	// (0x0002bd15) control_button_pane_g2_ParamLimits

0x5817,	// (0x0002bd15) control_button_pane_g2

0x5823,	// (0x0002bd21) control_button_pane_g3_ParamLimits

0x5823,	// (0x0002bd21) control_button_pane_g3

0x0002,

0xfc06,	// (0x00036104) control_button_pane_g_ParamLimits

0xfc06,	// (0x00036104) control_button_pane_g

0x5837,	// (0x0002bd35) control_button_pane_t1

0x5845,	// (0x0002bd43) control_button_pane_t2

0x0001,

0xfc0d,	// (0x0003610b) control_button_pane_t

0x14a4,	// (0x000279a2) bg_button_pane_g1

0x14ac,	// (0x000279aa) bg_button_pane_g2

0x14b4,	// (0x000279b2) bg_button_pane_g3

0x14bc,	// (0x000279ba) bg_button_pane_g4

0x14c4,	// (0x000279c2) bg_button_pane_g5

0x14cc,	// (0x000279ca) bg_button_pane_g6

0x14d4,	// (0x000279d2) bg_button_pane_g7

0x14dc,	// (0x000279da) bg_button_pane_g8

0x14e4,	// (0x000279e2) bg_button_pane_g9

0x0008,

0xf861,	// (0x00035d5f) bg_button_pane_g

0x4e08,	// (0x0002b306) common_borders_pane_ParamLimits

0x4e08,	// (0x0002b306) common_borders_pane

0x57d7,	// (0x0002bcd5) eswt_control_pane_g1_copy1_ParamLimits

0x57d7,	// (0x0002bcd5) eswt_control_pane_g1_copy1

0x57e4,	// (0x0002bce2) eswt_control_pane_g2_copy1_ParamLimits

0x57e4,	// (0x0002bce2) eswt_control_pane_g2_copy1

0x57f1,	// (0x0002bcef) eswt_control_pane_g3_copy1_ParamLimits

0x57f1,	// (0x0002bcef) eswt_control_pane_g3_copy1

0x57fe,	// (0x0002bcfc) eswt_control_pane_g4_copy1_ParamLimits

0x57fe,	// (0x0002bcfc) eswt_control_pane_g4_copy1

0x4e43,	// (0x0002b341) bg_eswt_ctrl_canvas_pane_g1

0x4e08,	// (0x0002b306) common_borders_pane_cp2_ParamLimits

0x4e08,	// (0x0002b306) common_borders_pane_cp2

0x4e08,	// (0x0002b306) common_borders_pane_cp3_ParamLimits

0x4e08,	// (0x0002b306) common_borders_pane_cp3

0x5853,	// (0x0002bd51) separator_horizontal_pane

0x585b,	// (0x0002bd59) separator_vertical_pane

0x57d7,	// (0x0002bcd5) eswt_control_pane_g1_copy2_ParamLimits

0x57d7,	// (0x0002bcd5) eswt_control_pane_g1_copy2

0x57e4,	// (0x0002bce2) eswt_control_pane_g2_copy2_ParamLimits

0x57e4,	// (0x0002bce2) eswt_control_pane_g2_copy2

0x57f1,	// (0x0002bcef) eswt_control_pane_g3_copy2_ParamLimits

0x57f1,	// (0x0002bcef) eswt_control_pane_g3_copy2

0x57fe,	// (0x0002bcfc) eswt_control_pane_g4_copy2_ParamLimits

0x57fe,	// (0x0002bcfc) eswt_control_pane_g4_copy2

0x9912,	// (0x0002fe10) common_borders_pane_cp4

0x5864,	// (0x0002bd62) separator_horizontal_pane_g1

0x586d,	// (0x0002bd6b) separator_horizontal_pane_g2

0x5876,	// (0x0002bd74) separator_horizontal_pane_g3

0x0002,

0xfc12,	// (0x00036110) separator_horizontal_pane_g

0x57d7,	// (0x0002bcd5) eswt_control_pane_g1_copy3_ParamLimits

0x57d7,	// (0x0002bcd5) eswt_control_pane_g1_copy3

0x57e4,	// (0x0002bce2) eswt_control_pane_g2_copy3_ParamLimits

0x57e4,	// (0x0002bce2) eswt_control_pane_g2_copy3

0x57f1,	// (0x0002bcef) eswt_control_pane_g3_copy3_ParamLimits

0x57f1,	// (0x0002bcef) eswt_control_pane_g3_copy3

0x57fe,	// (0x0002bcfc) eswt_control_pane_g4_copy3_ParamLimits

0x57fe,	// (0x0002bcfc) eswt_control_pane_g4_copy3

0x9912,	// (0x0002fe10) common_borders_pane_cp5

0x587f,	// (0x0002bd7d) separator_vertical_pane_g1

0x5888,	// (0x0002bd86) separator_vertical_pane_g2

0x5891,	// (0x0002bd8f) separator_vertical_pane_g3

0x0002,

0xfc19,	// (0x00036117) separator_vertical_pane_g

0x57d7,	// (0x0002bcd5) eswt_control_pane_g1_copy4_ParamLimits

0x57d7,	// (0x0002bcd5) eswt_control_pane_g1_copy4

0x57e4,	// (0x0002bce2) eswt_control_pane_g2_copy4_ParamLimits

0x57e4,	// (0x0002bce2) eswt_control_pane_g2_copy4

0x57f1,	// (0x0002bcef) eswt_control_pane_g3_copy4_ParamLimits

0x57f1,	// (0x0002bcef) eswt_control_pane_g3_copy4

0x57fe,	// (0x0002bcfc) eswt_control_pane_g4_copy4_ParamLimits

0x57fe,	// (0x0002bcfc) eswt_control_pane_g4_copy4

0xc2e6,	// (0x000327e4) eswt_ctrl_combo_button_pane

0xc2ee,	// (0x000327ec) eswt_ctrl_input_pane

0xc2f6,	// (0x000327f4) popup_choice_list_window_cp70

0xc2fe,	// (0x000327fc) eswt_ctrl_input_pane_t1

0x9912,	// (0x0002fe10) input_focus_pane_cp70

0x4e08,	// (0x0002b306) bg_button_pane_cp70_ParamLimits

0x4e08,	// (0x0002b306) bg_button_pane_cp70

0xc30c,	// (0x0003280a) eswt_ctrl_combo_button_pane_g1

0x58c8,	// (0x0002bdc6) wait_bar_pane_cp70

0x158f,	// (0x00027a8d) bg_popup_window_pane_cp70_ParamLimits

0x158f,	// (0x00027a8d) bg_popup_window_pane_cp70

0x58d0,	// (0x0002bdce) popup_eswt_tasktip_window_t1

0x58e6,	// (0x0002bde4) wait_bar_pane_cp71_ParamLimits

0x58e6,	// (0x0002bde4) wait_bar_pane_cp71

0x58f2,	// (0x0002bdf0) grid_eswt_app_pane

0xcd8f,	// (0x0003328d) scroll_pane_cp70

0xc314,	// (0x00032812) cell_eswt_app_pane_ParamLimits

0xc314,	// (0x00032812) cell_eswt_app_pane

0xc346,	// (0x00032844) cell_eswt_app_pane_g1_ParamLimits

0xc346,	// (0x00032844) cell_eswt_app_pane_g1

0xc375,	// (0x00032873) cell_eswt_app_pane_g2_ParamLimits

0xc375,	// (0x00032873) cell_eswt_app_pane_g2

0x0001,

0xfc20,	// (0x0003611e) cell_eswt_app_pane_g_ParamLimits

0xfc20,	// (0x0003611e) cell_eswt_app_pane_g

0xc39e,	// (0x0003289c) cell_eswt_app_pane_t1_ParamLimits

0xc39e,	// (0x0003289c) cell_eswt_app_pane_t1

0x59b7,	// (0x0002beb5) grid_highlight_pane_cp70_ParamLimits

0x59b7,	// (0x0002beb5) grid_highlight_pane_cp70

0xd25f,	// (0x0003375d) set_content_pane_g1

0xa9c2,	// (0x00030ec0) status_small_volume_pane

0x1f26,	// (0x00028424) status_small_volume_pane_g1

0x1f2e,	// (0x0002842c) volume_small2_pane

0x1f37,	// (0x00028435) volume_small2_pane_g1

0x1f40,	// (0x0002843e) volume_small2_pane_g2

0x1f49,	// (0x00028447) volume_small2_pane_g3

0x1f52,	// (0x00028450) volume_small2_pane_g4

0x1f5b,	// (0x00028459) volume_small2_pane_g5

0x1f64,	// (0x00028462) volume_small2_pane_g6

0x1f6d,	// (0x0002846b) volume_small2_pane_g7

0x1f76,	// (0x00028474) volume_small2_pane_g8

0x1f7f,	// (0x0002847d) volume_small2_pane_g9

0x1f88,	// (0x00028486) volume_small2_pane_g10

0x0009,

0xfc25,	// (0x00036123) volume_small2_pane_g

0x5212,	// (0x0002b710) fep_vkb_top_text_pane_g1_ParamLimits

0xc252,	// (0x00032750) fep_vkb_top_text_pane_t1_ParamLimits

0x5507,	// (0x0002ba05) popup_preview_fixed_window_g3_ParamLimits

0x5507,	// (0x0002ba05) popup_preview_fixed_window_g3

0xb232,	// (0x00031730) popup_toolbar_trans_pane

0xbbc8,	// (0x000320c6) aid_height_set_list_ParamLimits

0x3bc8,	// (0x0002a0c6) aid_size_parent_ParamLimits

0x0933,	// (0x00026e31) list_highlight_pane_cp2_ParamLimits

0xd25f,	// (0x0003375d) set_content_pane_g1_ParamLimits

0xbd8c,	// (0x0003228a) list_single_image_pane_ParamLimits

0xbd8c,	// (0x0003228a) list_single_image_pane

0xc3d0,	// (0x000328ce) aid_size_cell_image_ParamLimits

0xc3d0,	// (0x000328ce) aid_size_cell_image

0xd2b5,	// (0x000337b3) grid_single_image_pane_ParamLimits

0xd2b5,	// (0x000337b3) grid_single_image_pane

0xca23,	// (0x00032f21) list_single_image_pane_g1_ParamLimits

0xca23,	// (0x00032f21) list_single_image_pane_g1

0xca2f,	// (0x00032f2d) list_single_image_pane_g2_ParamLimits

0xca2f,	// (0x00032f2d) list_single_image_pane_g2

0x0001,

0xfc3a,	// (0x00036138) list_single_image_pane_g_ParamLimits

0xfc3a,	// (0x00036138) list_single_image_pane_g

0x59de,	// (0x0002bedc) list_single_image_pane_t1_ParamLimits

0x59de,	// (0x0002bedc) list_single_image_pane_t1

0xd2c3,	// (0x000337c1) cell_image_list_pane_ParamLimits

0xd2c3,	// (0x000337c1) cell_image_list_pane

0xd2d7,	// (0x000337d5) cell_image_list_pane_g1

0xd2e0,	// (0x000337de) cell_image_list_pane_g2

0x0001,

0xfc3f,	// (0x0003613d) cell_image_list_pane_g

0x5a1c,	// (0x0002bf1a) aid_size_cell_tb_trans_pane

0xca15,	// (0x00032f13) bg_tb_trans_pane

0x5a2e,	// (0x0002bf2c) grid_tb_trans_pane

0x14a4,	// (0x000279a2) bg_tb_trans_pane_g1

0x14ac,	// (0x000279aa) bg_tb_trans_pane_g2

0x14b4,	// (0x000279b2) bg_tb_trans_pane_g3

0x14bc,	// (0x000279ba) bg_tb_trans_pane_g4

0x14c4,	// (0x000279c2) bg_tb_trans_pane_g5

0x14dc,	// (0x000279da) bg_tb_trans_pane_g6

0x14e4,	// (0x000279e2) bg_tb_trans_pane_g7

0x14cc,	// (0x000279ca) bg_tb_trans_pane_g8

0x14d4,	// (0x000279d2) bg_tb_trans_pane_g9

0x0008,

0xfc44,	// (0x00036142) bg_tb_trans_pane_g

0x5a42,	// (0x0002bf40) cell_toolbar_trans_pane_ParamLimits

0x5a42,	// (0x0002bf40) cell_toolbar_trans_pane

0x4e43,	// (0x0002b341) cell_toolbar_trans_pane_g1

0xbfc2,	// (0x000324c0) list_form2_midp_pane_t1

0xbfd0,	// (0x000324ce) list_form2_midp_pane_t2

0x0001,

0xfaed,	// (0x00035feb) list_form2_midp_pane_t

0x4a83,	// (0x0002af81) scroll_pane_cp51_ParamLimits

0x4c4a,	// (0x0002b148) form2_midp_wait_pane_g1

0x4c53,	// (0x0002b151) form2_midp_wait_pane_g2

0x4c5c,	// (0x0002b15a) form2_midp_wait_pane_g3

0x0002,

0xfb02,	// (0x00036000) form2_midp_wait_pane_g

0x9c8d,	// (0x0003018b) list_highlight_pane_cp21_ParamLimits

0x4ca0,	// (0x0002b19e) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4caf,	// (0x0002b1ad) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xeb20,	// (0x0003501e) list_single_2graphic_im_pane_ParamLimits

0xeb20,	// (0x0003501e) list_single_2graphic_im_pane

0xd2e9,	// (0x000337e7) list_single_2graphic_im_pane_g1_ParamLimits

0xd2e9,	// (0x000337e7) list_single_2graphic_im_pane_g1

0xd2fa,	// (0x000337f8) list_single_2graphic_im_pane_g2_ParamLimits

0xd2fa,	// (0x000337f8) list_single_2graphic_im_pane_g2

0xd306,	// (0x00033804) list_single_2graphic_im_pane_g3_ParamLimits

0xd306,	// (0x00033804) list_single_2graphic_im_pane_g3

0x0003,

0xfc57,	// (0x00036155) list_single_2graphic_im_pane_g_ParamLimits

0xfc57,	// (0x00036155) list_single_2graphic_im_pane_g

0xd31a,	// (0x00033818) list_single_2graphic_im_pane_t1_ParamLimits

0xd31a,	// (0x00033818) list_single_2graphic_im_pane_t1

0x5513,	// (0x0002ba11) list_single_graphic_2heading_pane_fp_ParamLimits

0x5513,	// (0x0002ba11) list_single_graphic_2heading_pane_fp

0xeea5,	// (0x000353a3) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xeea5,	// (0x000353a3) list_single_graphic_2heading_pane_fp_g1

0x552c,	// (0x0002ba2a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x552c,	// (0x0002ba2a) list_single_graphic_2heading_pane_fp_g2

0xee6e,	// (0x0003536c) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xee6e,	// (0x0003536c) list_single_graphic_2heading_pane_fp_g3

0xee7a,	// (0x00035378) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xee7a,	// (0x00035378) list_single_graphic_2heading_pane_fp_g4

0x5538,	// (0x0002ba36) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5538,	// (0x0002ba36) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb85,	// (0x00036083) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb85,	// (0x00036083) list_single_graphic_2heading_pane_fp_g

0xf048,	// (0x00035546) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf048,	// (0x00035546) list_single_graphic_2heading_pane_fp_t1

0xeedd,	// (0x000353db) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xeedd,	// (0x000353db) list_single_graphic_2heading_pane_fp_t2

0xf2b4,	// (0x000357b2) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf2b4,	// (0x000357b2) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc60,	// (0x0003615e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc60,	// (0x0003615e) list_single_graphic_2heading_pane_fp_t

0x4ed4,	// (0x0002b3d2) fep_hwr_write_pane_g5_ParamLimits

0x4ed4,	// (0x0002b3d2) fep_hwr_write_pane_g5

0x4ee0,	// (0x0002b3de) fep_hwr_write_pane_g6_ParamLimits

0x4ee0,	// (0x0002b3de) fep_hwr_write_pane_g6

0x57a6,	// (0x0002bca4) eswt_shell_pane_ParamLimits

0x158f,	// (0x00027a8d) bg_popup_window_pane_cp18_ParamLimits

0x3b0e,	// (0x0002a00c) heading_pane_cp70

0x58d0,	// (0x0002bdce) popup_eswt_tasktip_window_t1_ParamLimits

0xb2fc,	// (0x000317fa) aid_touch_tab_arrow_left

0xb312,	// (0x00031810) aid_touch_tab_arrow_right

0x9b6f,	// (0x0003006d) title_pane_g3_ParamLimits

0x9b6f,	// (0x0003006d) title_pane_g3

0xc9d4,	// (0x00032ed2) set_value_pane_g1

0xb232,	// (0x00031730) popup_toolbar_trans_pane_ParamLimits

0x5a1c,	// (0x0002bf1a) aid_size_cell_tb_trans_pane_ParamLimits

0xca15,	// (0x00032f13) bg_tb_trans_pane_ParamLimits

0x5a2e,	// (0x0002bf2c) grid_tb_trans_pane_ParamLimits

0x9f74,	// (0x00030472) cont_note_pane_ParamLimits

0x9f74,	// (0x00030472) cont_note_pane

0xa2d2,	// (0x000307d0) cont_snote2_single_text_pane_ParamLimits

0xa2d2,	// (0x000307d0) cont_snote2_single_text_pane

0xa2d2,	// (0x000307d0) cont_snote2_single_graphic_pane_ParamLimits

0xa2d2,	// (0x000307d0) cont_snote2_single_graphic_pane

0x2e4f,	// (0x0002934d) cont_note_wait_pane_ParamLimits

0x2e4f,	// (0x0002934d) cont_note_wait_pane

0x2e4f,	// (0x0002934d) cont_note_image_pane_ParamLimits

0x2e4f,	// (0x0002934d) cont_note_image_pane

0x5ad6,	// (0x0002bfd4) popup_note2_window_g1_ParamLimits

0x5ad6,	// (0x0002bfd4) popup_note2_window_g1

0x5b07,	// (0x0002c005) popup_note2_window_t1_ParamLimits

0x5b07,	// (0x0002c005) popup_note2_window_t1

0x5b4c,	// (0x0002c04a) popup_note2_window_t2_ParamLimits

0x5b4c,	// (0x0002c04a) popup_note2_window_t2

0x5b91,	// (0x0002c08f) popup_note2_window_t3_ParamLimits

0x5b91,	// (0x0002c08f) popup_note2_window_t3

0x5bd6,	// (0x0002c0d4) popup_note2_window_t4_ParamLimits

0x5bd6,	// (0x0002c0d4) popup_note2_window_t4

0x9ff8,	// (0x000304f6) popup_note2_window_t5_ParamLimits

0x9ff8,	// (0x000304f6) popup_note2_window_t5

0x0004,

0xfc6c,	// (0x0003616a) popup_note2_window_t_ParamLimits

0xfc6c,	// (0x0003616a) popup_note2_window_t

0x5c05,	// (0x0002c103) popup_note2_image_window_g1_ParamLimits

0x5c05,	// (0x0002c103) popup_note2_image_window_g1

0x5c11,	// (0x0002c10f) popup_note2_image_window_g2_ParamLimits

0x5c11,	// (0x0002c10f) popup_note2_image_window_g2

0x0001,

0xfc77,	// (0x00036175) popup_note2_image_window_g_ParamLimits

0xfc77,	// (0x00036175) popup_note2_image_window_g

0x5c23,	// (0x0002c121) popup_note2_image_window_t1_ParamLimits

0x5c23,	// (0x0002c121) popup_note2_image_window_t1

0x5c3b,	// (0x0002c139) popup_note2_image_window_t2_ParamLimits

0x5c3b,	// (0x0002c139) popup_note2_image_window_t2

0x5c53,	// (0x0002c151) popup_note2_image_window_t3_ParamLimits

0x5c53,	// (0x0002c151) popup_note2_image_window_t3

0x0002,

0xfc7c,	// (0x0003617a) popup_note2_image_window_t_ParamLimits

0xfc7c,	// (0x0003617a) popup_note2_image_window_t

0x2e5d,	// (0x0002935b) popup_note2_wait_window_g1_ParamLimits

0x2e5d,	// (0x0002935b) popup_note2_wait_window_g1

0x5c6f,	// (0x0002c16d) popup_note2_wait_window_g2_ParamLimits

0x5c6f,	// (0x0002c16d) popup_note2_wait_window_g2

0x2e75,	// (0x00029373) popup_note2_wait_window_g3_ParamLimits

0x2e75,	// (0x00029373) popup_note2_wait_window_g3

0x0002,

0xfc83,	// (0x00036181) popup_note2_wait_window_g_ParamLimits

0xfc83,	// (0x00036181) popup_note2_wait_window_g

0x5c7b,	// (0x0002c179) popup_note2_wait_window_t1_ParamLimits

0x5c7b,	// (0x0002c179) popup_note2_wait_window_t1

0x5c99,	// (0x0002c197) popup_note2_wait_window_t2_ParamLimits

0x5c99,	// (0x0002c197) popup_note2_wait_window_t2

0x5cb7,	// (0x0002c1b5) popup_note2_wait_window_t3_ParamLimits

0x5cb7,	// (0x0002c1b5) popup_note2_wait_window_t3

0x5cc9,	// (0x0002c1c7) popup_note2_wait_window_t4_ParamLimits

0x5cc9,	// (0x0002c1c7) popup_note2_wait_window_t4

0x0003,

0xfc8a,	// (0x00036188) popup_note2_wait_window_t_ParamLimits

0xfc8a,	// (0x00036188) popup_note2_wait_window_t

0x5cdb,	// (0x0002c1d9) wait_bar2_pane_ParamLimits

0x5cdb,	// (0x0002c1d9) wait_bar2_pane

0x5cf3,	// (0x0002c1f1) popup_snote2_single_text_window_g1_ParamLimits

0x5cf3,	// (0x0002c1f1) popup_snote2_single_text_window_g1

0x5d1b,	// (0x0002c219) popup_snote2_single_text_window_t1_ParamLimits

0x5d1b,	// (0x0002c219) popup_snote2_single_text_window_t1

0x5d67,	// (0x0002c265) popup_snote2_single_text_window_t2_ParamLimits

0x5d67,	// (0x0002c265) popup_snote2_single_text_window_t2

0x5db3,	// (0x0002c2b1) popup_snote2_single_text_window_t3_ParamLimits

0x5db3,	// (0x0002c2b1) popup_snote2_single_text_window_t3

0x5df4,	// (0x0002c2f2) popup_snote2_single_text_window_t4_ParamLimits

0x5df4,	// (0x0002c2f2) popup_snote2_single_text_window_t4

0x5e2a,	// (0x0002c328) popup_snote2_single_text_window_t5_ParamLimits

0x5e2a,	// (0x0002c328) popup_snote2_single_text_window_t5

0x0004,

0xfc93,	// (0x00036191) popup_snote2_single_text_window_t_ParamLimits

0xfc93,	// (0x00036191) popup_snote2_single_text_window_t

0x5e55,	// (0x0002c353) popup_snote2_single_graphic_window_g1_ParamLimits

0x5e55,	// (0x0002c353) popup_snote2_single_graphic_window_g1

0x5e7d,	// (0x0002c37b) popup_snote2_single_graphic_window_g2_ParamLimits

0x5e7d,	// (0x0002c37b) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9e,	// (0x0003619c) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9e,	// (0x0003619c) popup_snote2_single_graphic_window_g

0x5ea5,	// (0x0002c3a3) popup_snote2_single_graphic_window_t1_ParamLimits

0x5ea5,	// (0x0002c3a3) popup_snote2_single_graphic_window_t1

0x5ef1,	// (0x0002c3ef) popup_snote2_single_graphic_window_t2_ParamLimits

0x5ef1,	// (0x0002c3ef) popup_snote2_single_graphic_window_t2

0x5db3,	// (0x0002c2b1) popup_snote2_single_graphic_window_t3_ParamLimits

0x5db3,	// (0x0002c2b1) popup_snote2_single_graphic_window_t3

0x5df4,	// (0x0002c2f2) popup_snote2_single_graphic_window_t4_ParamLimits

0x5df4,	// (0x0002c2f2) popup_snote2_single_graphic_window_t4

0x5e2a,	// (0x0002c328) popup_snote2_single_graphic_window_t5_ParamLimits

0x5e2a,	// (0x0002c328) popup_snote2_single_graphic_window_t5

0x0004,

0xfca3,	// (0x000361a1) popup_snote2_single_graphic_window_t_ParamLimits

0xfca3,	// (0x000361a1) popup_snote2_single_graphic_window_t

0x4933,	// (0x0002ae31) clock_nsta_pane_cp2_t1

0x4933,	// (0x0002ae31) clock_nsta_pane_cp2_t2

0x0001,

0xfac3,	// (0x00035fc1) clock_nsta_pane_cp2_t

0xe92b,	// (0x00034e29) form_field_data_wide_pane_g1_ParamLimits

0xca23,	// (0x00032f21) form_field_data_wide_pane_g2_ParamLimits

0xca23,	// (0x00032f21) form_field_data_wide_pane_g2

0xca2f,	// (0x00032f2d) form_field_data_wide_pane_g3_ParamLimits

0xca2f,	// (0x00032f2d) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x00035b79) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x00035b79) form_field_data_wide_pane_g

0xbece,	// (0x000323cc) grid_touch_3_pane_ParamLimits

0xbece,	// (0x000323cc) grid_touch_3_pane

0xd34b,	// (0x00033849) cell_touch_3_pane_ParamLimits

0xd34b,	// (0x00033849) cell_touch_3_pane

0x4e43,	// (0x0002b341) cell_touch_3_pane_g1

0x4e43,	// (0x0002b341) cell_touch_3_pane_g2

0x0001,

0xfb48,	// (0x00036046) cell_touch_3_pane_g

0xa02a,	// (0x00030528) cont_query_data_pane

0xa032,	// (0x00030530) cont_query_data_pane_cp1

0x5f70,	// (0x0002c46e) button_value_adjust_pane_cp7

0x5f78,	// (0x0002c476) query_popup_pane_cp3

0xcf57,	// (0x00033455) bg_popup_sub_pane_cp22_ParamLimits

0x0034,	// (0x00026532) navi_navi_volume_pane_cp2

0x004f,	// (0x0002654d) popup_side_volume_key_window_g2

0x005e,	// (0x0002655c) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x00035c0f) popup_side_volume_key_window_g

0x007b,	// (0x00026579) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x00035c16) popup_side_volume_key_window_t

0xd162,	// (0x00033660) popup_side_volume_key_window_ParamLimits

0x9191,	// (0x0002f68f) list_double_graphic_pane_g4_ParamLimits

0x9191,	// (0x0002f68f) list_double_graphic_pane_g4

0x96fb,	// (0x0002fbf9) list_single_2heading_msg_pane_ParamLimits

0x96fb,	// (0x0002fbf9) list_single_2heading_msg_pane

0x9747,	// (0x0002fc45) list_single_2heading_msg_pane_g1_ParamLimits

0x9747,	// (0x0002fc45) list_single_2heading_msg_pane_g1

0x9753,	// (0x0002fc51) list_single_2heading_msg_pane_g2_ParamLimits

0x9753,	// (0x0002fc51) list_single_2heading_msg_pane_g2

0x9766,	// (0x0002fc64) list_single_2heading_msg_pane_g3_ParamLimits

0x9766,	// (0x0002fc64) list_single_2heading_msg_pane_g3

0x9772,	// (0x0002fc70) list_single_2heading_msg_pane_g4_ParamLimits

0x9772,	// (0x0002fc70) list_single_2heading_msg_pane_g4

0x0003,

0xfcae,	// (0x000361ac) list_single_2heading_msg_pane_g_ParamLimits

0xfcae,	// (0x000361ac) list_single_2heading_msg_pane_g

0x978a,	// (0x0002fc88) list_single_2heading_msg_pane_t1_ParamLimits

0x978a,	// (0x0002fc88) list_single_2heading_msg_pane_t1

0x97b2,	// (0x0002fcb0) list_single_2heading_msg_pane_t2_ParamLimits

0x97b2,	// (0x0002fcb0) list_single_2heading_msg_pane_t2

0x981d,	// (0x0002fd1b) list_single_2heading_msg_pane_t3_ParamLimits

0x981d,	// (0x0002fd1b) list_single_2heading_msg_pane_t3

0xf2d4,	// (0x000357d2) list_single_2heading_msg_pane_t4_ParamLimits

0xf2d4,	// (0x000357d2) list_single_2heading_msg_pane_t4

0x0003,

0xfcb7,	// (0x000361b5) list_single_2heading_msg_pane_t_ParamLimits

0xfcb7,	// (0x000361b5) list_single_2heading_msg_pane_t

0x9b7b,	// (0x00030079) title_pane_g4_ParamLimits

0x9b7b,	// (0x00030079) title_pane_g4

0xf363,	// (0x00035861) title_pane_stacon_g3_ParamLimits

0xf363,	// (0x00035861) title_pane_stacon_g3

0x5a99,	// (0x0002bf97) list_single_2graphic_im_pane_g4_ParamLimits

0x5a99,	// (0x0002bf97) list_single_2graphic_im_pane_g4

0x38bf,	// (0x00029dbd) popup_side_volume_key_window_cp

0x412d,	// (0x0002a62b) main_idle_act2_pane_t1

0x14ec,	// (0x000279ea) toolbar_button_pane_g10

0xa4ca,	// (0x000309c8) popup_toolbar_window_cp1

0x4924,	// (0x0002ae22) clock_nsta_pane_cp_t1

0x4924,	// (0x0002ae22) clock_nsta_pane_cp_t2

0x0001,

0xfabe,	// (0x00035fbc) clock_nsta_pane_cp_t

0x0034,	// (0x00026532) navi_navi_volume_pane_cp2_ParamLimits

0x0043,	// (0x00026541) popup_side_volume_key_window_g1_ParamLimits

0x004f,	// (0x0002654d) popup_side_volume_key_window_g2_ParamLimits

0x005e,	// (0x0002655c) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x00035c0f) popup_side_volume_key_window_g_ParamLimits

0x1c1b,	// (0x00028119) fep_hwr_aid_pane

0xc0b9,	// (0x000325b7) bg_fep_hwr_top_pane_g4_ParamLimits

0x4ea4,	// (0x0002b3a2) fep_hwr_top_pane_g1_ParamLimits

0x4eb6,	// (0x0002b3b4) fep_hwr_top_pane_g2_ParamLimits

0x1cd6,	// (0x000281d4) fep_hwr_top_pane_g3_ParamLimits

0xfb13,	// (0x00036011) fep_hwr_top_pane_g_ParamLimits

0x1ceb,	// (0x000281e9) fep_hwr_top_text_pane_ParamLimits

0x3674,	// (0x00029b72) aid_touch_tab_arrow_arrow_2

0x367d,	// (0x00029b7b) aid_touch_tab_arrow_left_2

0x1c2f,	// (0x0002812d) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1c66,	// (0x00028164) fep_hwr_prediction_pane

0x500c,	// (0x0002b50a) fep_vkb_prediction_pane

0xc232,	// (0x00032730) fep_vkb_side_pane_g3_ParamLimits

0xc232,	// (0x00032730) fep_vkb_side_pane_g3

0x50be,	// (0x0002b5bc) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x558c,	// (0x0002ba8a) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5599,	// (0x0002ba97) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbd,	// (0x000360bb) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5f9f,	// (0x0002c49d) fep_hwr_prediction_pane_g1

0x1f91,	// (0x0002848f) fep_hwr_prediction_pane_g2

0x1f99,	// (0x00028497) fep_hwr_prediction_pane_g3

0x1fa1,	// (0x0002849f) fep_hwr_prediction_pane_g4

0x0003,

0xfcc0,	// (0x000361be) fep_hwr_prediction_pane_g

0x5f9f,	// (0x0002c49d) fep_vkb_prediction_pane_g1

0x5fa9,	// (0x0002c4a7) fep_vkb_prediction_pane_g2

0x5fb1,	// (0x0002c4af) fep_vkb_prediction_pane_g3

0x5fb9,	// (0x0002c4b7) fep_vkb_prediction_pane_g4

0x0003,

0xfcc9,	// (0x000361c7) fep_vkb_prediction_pane_g

0x1aa9,	// (0x00027fa7) slider_set_pane_g3

0x1abd,	// (0x00027fbb) slider_set_pane_g4

0x1ad5,	// (0x00027fd3) slider_set_pane_g5

0x1aa9,	// (0x00027fa7) slider_set_pane_g6

0x1aeb,	// (0x00027fe9) slider_set_pane_g7

0x3d4d,	// (0x0002a24b) slider_form_pane_g3

0x3d56,	// (0x0002a254) slider_form_pane_g4

0x3d5e,	// (0x0002a25c) slider_form_pane_g5

0x3d4d,	// (0x0002a24b) slider_form_pane_g6

0xbd37,	// (0x00032235) slider_form_pane_g7

0x43e4,	// (0x0002a8e2) slider_set_pane_vc_g3

0x43ed,	// (0x0002a8eb) slider_set_pane_vc_g4

0x43f6,	// (0x0002a8f4) slider_set_pane_vc_g5

0x43e4,	// (0x0002a8e2) slider_set_pane_vc_g6

0x43ff,	// (0x0002a8fd) slider_set_pane_vc_g7

0x45d7,	// (0x0002aad5) slider_form_pane_vc_g1

0x45e0,	// (0x0002aade) slider_form_pane_vc_g2

0x45e9,	// (0x0002aae7) slider_form_pane_vc_g3

0x45d7,	// (0x0002aad5) slider_form_pane_vc_g4

0x45f2,	// (0x0002aaf0) slider_form_pane_vc_g5

0x0004,

0xfa90,	// (0x00035f8e) slider_form_pane_vc_g

0x9912,	// (0x0002fe10) main_idle_act3_pane

0x5fc1,	// (0x0002c4bf) ai3_links_pane

0xd395,	// (0x00033893) popup_ai3_data_window_ParamLimits

0xd395,	// (0x00033893) popup_ai3_data_window

0x9912,	// (0x0002fe10) grid_ai3_links_pane

0xd3b3,	// (0x000338b1) cell_ai3_links_pane_ParamLimits

0xd3b3,	// (0x000338b1) cell_ai3_links_pane

0x6002,	// (0x0002c500) bg_popup_sub_pane_cp11

0x600f,	// (0x0002c50d) cell_ai3_links_pane_g1

0x9912,	// (0x0002fe10) bg_popup_sub_pane_cp12

0x6034,	// (0x0002c532) heading_ai3_data_pane

0x603c,	// (0x0002c53a) list_ai3_gene_pane

0x6048,	// (0x0002c546) popup_ai3_data_window_g1

0x6050,	// (0x0002c54e) heading_ai3_data_pane_g1

0x6058,	// (0x0002c556) heading_ai3_data_pane_t1

0x6066,	// (0x0002c564) list_double_ai3_gene_pane_ParamLimits

0x6066,	// (0x0002c564) list_double_ai3_gene_pane

0x6073,	// (0x0002c571) list_single_ai3_gene_pane_ParamLimits

0x6073,	// (0x0002c571) list_single_ai3_gene_pane

0x4e08,	// (0x0002b306) list_highlight_pane_cp7_ParamLimits

0x4e08,	// (0x0002b306) list_highlight_pane_cp7

0x6080,	// (0x0002c57e) list_single_a13_gene_pane_t1_ParamLimits

0x6080,	// (0x0002c57e) list_single_a13_gene_pane_t1

0x6097,	// (0x0002c595) list_single_ai3_gene_pane_g1

0x60a0,	// (0x0002c59e) list_single_ai3_gene_pane_g2

0x0001,

0xfcd2,	// (0x000361d0) list_single_ai3_gene_pane_g

0x60a8,	// (0x0002c5a6) list_double_ai3_gene_pane_g1_ParamLimits

0x60a8,	// (0x0002c5a6) list_double_ai3_gene_pane_g1

0x60b4,	// (0x0002c5b2) list_double_ai3_gene_pane_t1_ParamLimits

0x60b4,	// (0x0002c5b2) list_double_ai3_gene_pane_t1

0x60d0,	// (0x0002c5ce) list_double_ai3_gene_pane_t2_ParamLimits

0x60d0,	// (0x0002c5ce) list_double_ai3_gene_pane_t2

0x60e5,	// (0x0002c5e3) list_double_ai3_gene_pane_t3_ParamLimits

0x60e5,	// (0x0002c5e3) list_double_ai3_gene_pane_t3

0x0002,

0xfcd7,	// (0x000361d5) list_double_ai3_gene_pane_t_ParamLimits

0xfcd7,	// (0x000361d5) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf2ca,	// (0x000357c8) aid_size_min_col_2

0xd37f,	// (0x0003387d) aid_size_min_msg_ParamLimits

0xd37f,	// (0x0003387d) aid_size_min_msg

0xc246,	// (0x00032744) fep_vkb_top_text_pane_g2_ParamLimits

0xc246,	// (0x00032744) fep_vkb_top_text_pane_g2

0x0001,

0xfb43,	// (0x00036041) fep_vkb_top_text_pane_g_ParamLimits

0xfb43,	// (0x00036041) fep_vkb_top_text_pane_g

0x9912,	// (0x0002fe10) main_hc_apps_shell_pane

0x6102,	// (0x0002c600) grid_hc_apps_pane_ParamLimits

0x6102,	// (0x0002c600) grid_hc_apps_pane

0x6111,	// (0x0002c60f) list_hc_apps_pane

0x6119,	// (0x0002c617) scroll_pane_cp37_ParamLimits

0x6119,	// (0x0002c617) scroll_pane_cp37

0xd3cd,	// (0x000338cb) cell_hc_apps_pane_ParamLimits

0xd3cd,	// (0x000338cb) cell_hc_apps_pane

0xd497,	// (0x00033995) cell_hc_apps_pane_g1_ParamLimits

0xd497,	// (0x00033995) cell_hc_apps_pane_g1

0x620e,	// (0x0002c70c) cell_hc_apps_pane_g2_ParamLimits

0x620e,	// (0x0002c70c) cell_hc_apps_pane_g2

0x622a,	// (0x0002c728) cell_hc_apps_pane_g3_ParamLimits

0x622a,	// (0x0002c728) cell_hc_apps_pane_g3

0x0002,

0xfcde,	// (0x000361dc) cell_hc_apps_pane_g_ParamLimits

0xfcde,	// (0x000361dc) cell_hc_apps_pane_g

0xd4c4,	// (0x000339c2) cell_hc_apps_pane_t1_ParamLimits

0xd4c4,	// (0x000339c2) cell_hc_apps_pane_t1

0x9f74,	// (0x00030472) grid_highlight_pane_cp10_ParamLimits

0x9f74,	// (0x00030472) grid_highlight_pane_cp10

0xd504,	// (0x00033a02) list_single_hc_apps_pane_ParamLimits

0xd504,	// (0x00033a02) list_single_hc_apps_pane

0xd53e,	// (0x00033a3c) list_single_hc_apps_pane_g1

0x988b,	// (0x0002fd89) list_single_hc_apps_pane_g2

0x0001,

0xfce5,	// (0x000361e3) list_single_hc_apps_pane_g

0x98a4,	// (0x0002fda2) list_single_hc_apps_pane_g2_copy1

0x98c0,	// (0x0002fdbe) list_single_hc_apps_pane_t1

0x9c8d,	// (0x0003018b) bg_set_opt_pane_cp_ParamLimits

0xf22b,	// (0x00035729) setting_slider_pane_t1_ParamLimits

0xf244,	// (0x00035742) setting_slider_pane_t2_ParamLimits

0xf25e,	// (0x0003575c) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00035a5c) setting_slider_pane_t_ParamLimits

0xf276,	// (0x00035774) slider_set_pane_ParamLimits

0x0798,	// (0x00026c96) control_pane_g5_ParamLimits

0x0798,	// (0x00026c96) control_pane_g5

0x3b7a,	// (0x0002a078) slider_set_pane_g1_ParamLimits

0x1a9d,	// (0x00027f9b) slider_set_pane_g2_ParamLimits

0x1aa9,	// (0x00027fa7) slider_set_pane_g3_ParamLimits

0x1abd,	// (0x00027fbb) slider_set_pane_g4_ParamLimits

0x1ad5,	// (0x00027fd3) slider_set_pane_g5_ParamLimits

0x1aa9,	// (0x00027fa7) slider_set_pane_g6_ParamLimits

0x1aeb,	// (0x00027fe9) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x00035e5d) slider_set_pane_g_ParamLimits

0xd20a,	// (0x00033708) navi_icon_text_pane_ParamLimits

0xb2c3,	// (0x000317c1) aid_fill_nsta_2_ParamLimits

0xb2fc,	// (0x000317fa) aid_touch_tab_arrow_left_ParamLimits

0xb312,	// (0x00031810) aid_touch_tab_arrow_right_ParamLimits

0xb3ad,	// (0x000318ab) clock_nsta_pane_ParamLimits

0xba75,	// (0x00031f73) navi_icon_pane_g1_ParamLimits

0xba81,	// (0x00031f7f) navi_text_pane_t1_ParamLimits

0xbfa4,	// (0x000324a2) navi_icon_text_pane_g1_ParamLimits

0xbfb0,	// (0x000324ae) navi_icon_text_pane_t1_ParamLimits

0xd53e,	// (0x00033a3c) list_single_hc_apps_pane_g1_ParamLimits

0x988b,	// (0x0002fd89) list_single_hc_apps_pane_g2_ParamLimits

0xfce5,	// (0x000361e3) list_single_hc_apps_pane_g_ParamLimits

0x98a4,	// (0x0002fda2) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x98c0,	// (0x0002fdbe) list_single_hc_apps_pane_t1_ParamLimits

0x9a6a,	// (0x0002ff68) popup_toolbar2_fixed_window_ParamLimits

0x9a6a,	// (0x0002ff68) popup_toolbar2_fixed_window

0xb228,	// (0x00031726) popup_toolbar2_float_window

0x9912,	// (0x0002fe10) bg_popup_sub_pane_cp27

0x62e4,	// (0x0002c7e2) grid_toolbar2_float_pane

0x9912,	// (0x0002fe10) bg_popup_sub_pane_cp26

0x62e4,	// (0x0002c7e2) grid_toolbar2_fixed_pane

0xd557,	// (0x00033a55) cell_toolbar2_fixed_pane_ParamLimits

0xd557,	// (0x00033a55) cell_toolbar2_fixed_pane

0xd574,	// (0x00033a72) cell_toolbar2_fixed_pane_g1

0x6305,	// (0x0002c803) toolbar2_fixed_button_pane

0x14a4,	// (0x000279a2) toolbar2_fixed_button_pane_g1

0x14ac,	// (0x000279aa) toolbar2_fixed_button_pane_g2

0x14b4,	// (0x000279b2) toolbar2_fixed_button_pane_g3

0x14bc,	// (0x000279ba) toolbar2_fixed_button_pane_g4

0x14c4,	// (0x000279c2) toolbar2_fixed_button_pane_g5

0x14cc,	// (0x000279ca) toolbar2_fixed_button_pane_g6

0x14d4,	// (0x000279d2) toolbar2_fixed_button_pane_g7

0x14dc,	// (0x000279da) toolbar2_fixed_button_pane_g8

0x14e4,	// (0x000279e2) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x00035d5f) toolbar2_fixed_button_pane_g

0x630d,	// (0x0002c80b) cell_toolbar2_float_pane_ParamLimits

0x630d,	// (0x0002c80b) cell_toolbar2_float_pane

0x631e,	// (0x0002c81c) cell_toolbar2_float_pane_g1

0x6305,	// (0x0002c803) toolbar2_fixed_button_pane_cp

0xc12e,	// (0x0003262c) fep_vkb_accented_list_pane_ParamLimits

0xc12e,	// (0x0003262c) fep_vkb_accented_list_pane

0x1e4d,	// (0x0002834b) bg_popup_fep_shadow_pane_g9

0x03c2,	// (0x000268c0) bg_popup_fep_shadow_pane_cp3

0xcb28,	// (0x00033026) list_accented_list_pane

0x6327,	// (0x0002c825) list_single_accented_list_pane_ParamLimits

0x6327,	// (0x0002c825) list_single_accented_list_pane

0x03c2,	// (0x000268c0) list_highlight_pane_cp10

0x6338,	// (0x0002c836) list_single_accented_list_pane_t1

0xb144,	// (0x00031642) popup_slider_window_ParamLimits

0xb144,	// (0x00031642) popup_slider_window

0x5f80,	// (0x0002c47e) aid_indentation_list_msg

0xd67f,	// (0x00033b7d) bg_popup_window_pane_cp19

0x6472,	// (0x0002c970) popup_slider_window_g1

0x648e,	// (0x0002c98c) popup_slider_window_g2

0x64aa,	// (0x0002c9a8) popup_slider_window_g3

0x0005,

0xfcea,	// (0x000361e8) popup_slider_window_g

0x6506,	// (0x0002ca04) popup_slider_window_t1

0x657a,	// (0x0002ca78) small_volume_slider_vertical_pane

0x4e43,	// (0x0002b341) small_volume_slider_vertical_pane_g1

0x4e43,	// (0x0002b341) small_volume_slider_vertical_pane_g2

0x6596,	// (0x0002ca94) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfc,	// (0x000361fa) small_volume_slider_vertical_pane_g

0x99ca,	// (0x0002fec8) area_side_right_pane_ParamLimits

0x99ca,	// (0x0002fec8) area_side_right_pane

0xc3dd,	// (0x000328db) aid_size_side_button_ParamLimits

0xc3dd,	// (0x000328db) aid_size_side_button

0xc3f6,	// (0x000328f4) grid_sctrl_middle_pane_ParamLimits

0xc3f6,	// (0x000328f4) grid_sctrl_middle_pane

0x1fdd,	// (0x000284db) sctrl_sk_bottom_pane

0x1fee,	// (0x000284ec) sctrl_sk_top_pane

0x2000,	// (0x000284fe) aid_touch_sctrl_top

0x9f74,	// (0x00030472) bg_sctrl_sk_pane_ParamLimits

0x9f74,	// (0x00030472) bg_sctrl_sk_pane

0x200d,	// (0x0002850b) sctrl_sk_top_pane_g1

0x201a,	// (0x00028518) sctrl_sk_top_pane_t1

0x2000,	// (0x000284fe) aid_touch_sctrl_bottom

0x9f74,	// (0x00030472) bg_sctrl_sk_pane_cp_ParamLimits

0x9f74,	// (0x00030472) bg_sctrl_sk_pane_cp

0x2035,	// (0x00028533) sctrl_sk_bottom_pane_g1

0x201a,	// (0x00028518) sctrl_sk_bottom_pane_t1

0xc410,	// (0x0003290e) cell_sctrl_middle_pane_ParamLimits

0xc410,	// (0x0003290e) cell_sctrl_middle_pane

0xc423,	// (0x00032921) aid_touch_sctrl_middle_ParamLimits

0xc423,	// (0x00032921) aid_touch_sctrl_middle

0xc430,	// (0x0003292e) bg_sctrl_middle_pane_ParamLimits

0xc430,	// (0x0003292e) bg_sctrl_middle_pane

0x6621,	// (0x0002cb1f) cell_sctrl_middle_pane_g1_ParamLimits

0x6621,	// (0x0002cb1f) cell_sctrl_middle_pane_g1

0xc43e,	// (0x0003293c) cell_sctrl_middle_pane_g2_ParamLimits

0xc43e,	// (0x0003293c) cell_sctrl_middle_pane_g2

0x0001,

0xfd08,	// (0x00036206) cell_sctrl_middle_pane_g_ParamLimits

0xfd08,	// (0x00036206) cell_sctrl_middle_pane_g

0x14a4,	// (0x000279a2) bg_sctrl_middle_pane_g1

0x14ac,	// (0x000279aa) bg_sctrl_middle_pane_g2

0x14b4,	// (0x000279b2) bg_sctrl_middle_pane_g3

0x14bc,	// (0x000279ba) bg_sctrl_middle_pane_g4

0x14c4,	// (0x000279c2) bg_sctrl_middle_pane_g5

0x14cc,	// (0x000279ca) bg_sctrl_middle_pane_g6

0x14d4,	// (0x000279d2) bg_sctrl_middle_pane_g7

0x14dc,	// (0x000279da) bg_sctrl_middle_pane_g8

0x0007,

0xfd0d,	// (0x0003620b) bg_sctrl_middle_pane_g

0x14e4,	// (0x000279e2) bg_sctrl_middle_pane_g8_copy1

0x14a4,	// (0x000279a2) bg_sctrl_sk_pane_g1

0x14ac,	// (0x000279aa) bg_sctrl_sk_pane_g2

0x14b4,	// (0x000279b2) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x00035d5f) bg_sctrl_sk_pane_g

0xa490,	// (0x0003098e) aid_size_touch_scroll_bar

0x14bc,	// (0x000279ba) bg_sctrl_sk_pane_g4

0x14c4,	// (0x000279c2) bg_sctrl_sk_pane_g5

0x14cc,	// (0x000279ca) bg_sctrl_sk_pane_g6

0x14d4,	// (0x000279d2) bg_sctrl_sk_pane_g7

0x14dc,	// (0x000279da) bg_sctrl_sk_pane_g8

0x14e4,	// (0x000279e2) bg_sctrl_sk_pane_g9

0x09e1,	// (0x00026edf) popup_fep_china_hwr2_fs_candidate_window

0xabfc,	// (0x000310fa) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xabfc,	// (0x000310fa) popup_fep_china_hwr2_fs_control_window

0x50be,	// (0x0002b5bc) sctrl_sk_top_pane_g2

0x0001,

0xfd03,	// (0x00036201) sctrl_sk_top_pane_g

0xd737,	// (0x00033c35) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd737,	// (0x00033c35) aid_fep_china_hwr2_fs_cell

0xd74d,	// (0x00033c4b) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd74d,	// (0x00033c4b) bg_popup_fep_shadow_pane_cp4

0xd764,	// (0x00033c62) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd764,	// (0x00033c62) bg_popup_fep_shadow_pane_cp5

0xd776,	// (0x00033c74) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd776,	// (0x00033c74) popup_fep_china_hwr2_fs_control_bar_grid

0xd78a,	// (0x00033c88) popup_fep_china_hwr2_fs_control_funtion_grid

0x65f5,	// (0x0002caf3) aid_fep_china_hwr2_fs_candi_cell

0x9912,	// (0x0002fe10) bg_popup_fep_shadow_pane_cp6

0x65ff,	// (0x0002cafd) popup_fep_china_hwr2_fs_candidate_grid

0xd792,	// (0x00033c90) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd792,	// (0x00033c90) cell_fep_china_hwr2_fs_funtion_grid

0x4e43,	// (0x0002b341) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6621,	// (0x0002cb1f) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6621,	// (0x0002cb1f) cell_fep_china_hwr2_fs_funtion_grid_g1

0x662f,	// (0x0002cb2d) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x662f,	// (0x0002cb2d) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1e,	// (0x0003621c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1e,	// (0x0003621c) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7aa,	// (0x00033ca8) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7aa,	// (0x00033ca8) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd7bf,	// (0x00033cbd) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd7bf,	// (0x00033cbd) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd23,	// (0x00036221) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd23,	// (0x00036221) cell_fep_china_hwr2_fs_funtion_grid_t

0x6676,	// (0x0002cb74) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x667e,	// (0x0002cb7c) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6686,	// (0x0002cb84) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd28,	// (0x00036226) popup_fep_china_hwr2_fs_control_bar_grid_g

0x668e,	// (0x0002cb8c) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x668e,	// (0x0002cb8c) cell_fep_china_hwr2_fs_candidate_grid

0x66ad,	// (0x0002cbab) popup_fep_china_hwr2_fs_candidate_grid_g20

0x66b5,	// (0x0002cbb3) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4e43,	// (0x0002b341) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4e43,	// (0x0002b341) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb48,	// (0x00036046) cell_fep_china_hwr2_fs_candidate_grid_g

0x66bd,	// (0x0002cbbb) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1050,	// (0x0002754e) clock_nsta_pane_cp_24_ParamLimits

0x1050,	// (0x0002754e) clock_nsta_pane_cp_24

0x10d0,	// (0x000275ce) indicator_nsta_pane_cp_24_ParamLimits

0x10d0,	// (0x000275ce) indicator_nsta_pane_cp_24

0x34d2,	// (0x000299d0) heading_pane_g1

0x0001,

0xf8c6,	// (0x00035dc4) heading_pane_g

0x3f74,	// (0x0002a472) grid_sct_catagory_button_pane

0x3fa6,	// (0x0002a4a4) scroll_pane_cp5_ParamLimits

0x4a8f,	// (0x0002af8d) button_value_adjust_pane_cp5_ParamLimits

0x4a8f,	// (0x0002af8d) button_value_adjust_pane_cp5

0x4b74,	// (0x0002b072) form2_midp_time_pane_ParamLimits

0x66cb,	// (0x0002cbc9) cell_sct_catagory_button_pane_ParamLimits

0x66cb,	// (0x0002cbc9) cell_sct_catagory_button_pane

0x4e08,	// (0x0002b306) bg_button_pane_cp01_ParamLimits

0x4e08,	// (0x0002b306) bg_button_pane_cp01

0x4e43,	// (0x0002b341) cell_sct_catagory_button_pane_g1

0xb1c5,	// (0x000316c3) popup_tb_extension_window

0xd7db,	// (0x00033cd9) aid_size_cell_ext_ParamLimits

0xd7db,	// (0x00033cd9) aid_size_cell_ext

0xa2d2,	// (0x000307d0) bg_tb_trans_pane_cp1_ParamLimits

0xa2d2,	// (0x000307d0) bg_tb_trans_pane_cp1

0xd801,	// (0x00033cff) grid_tb_ext_pane_ParamLimits

0xd801,	// (0x00033cff) grid_tb_ext_pane

0xd841,	// (0x00033d3f) cell_tb_ext_pane_ParamLimits

0xd841,	// (0x00033d3f) cell_tb_ext_pane

0xd869,	// (0x00033d67) cell_tb_ext_pane_g1_ParamLimits

0xd869,	// (0x00033d67) cell_tb_ext_pane_g1

0x6761,	// (0x0002cc5f) cell_tb_ext_pane_t1

0x9f74,	// (0x00030472) list_highlight_pane_cp11_ParamLimits

0x9f74,	// (0x00030472) list_highlight_pane_cp11

0x9a7f,	// (0x0002ff7d) popup_uni_indicator_window_ParamLimits

0x9a7f,	// (0x0002ff7d) popup_uni_indicator_window

0xca15,	// (0x00032f13) bg_popup_sub_pane_cp14

0x677c,	// (0x0002cc7a) list_uniindi_pane

0x6788,	// (0x0002cc86) uniindi_top_pane

0x9f74,	// (0x00030472) bg_uniindi_top_pane

0x67a9,	// (0x0002cca7) uniindi_top_pane_g1

0x67bf,	// (0x0002ccbd) uniindi_top_pane_g2

0x0003,

0xfd2f,	// (0x0003622d) uniindi_top_pane_g

0x67e9,	// (0x0002cce7) uniindi_top_pane_t1

0x6815,	// (0x0002cd13) list_single_uniindi_pane_ParamLimits

0x6815,	// (0x0002cd13) list_single_uniindi_pane

0x4e43,	// (0x0002b341) bg_uniindi_top_pane_g1

0x6827,	// (0x0002cd25) list_single_uniindi_pane_g1

0x683a,	// (0x0002cd38) list_single_uniindi_pane_t1

0x9912,	// (0x0002fe10) control_bg_pane

0x685f,	// (0x0002cd5d) bg_sctrl_sk_pane_cp1

0x6868,	// (0x0002cd66) bg_sctrl_sk_pane_cp2

0x6871,	// (0x0002cd6f) control_bg_pane_g1

0x687a,	// (0x0002cd78) control_bg_pane_g2

0x0001,

0xfd38,	// (0x00036236) control_bg_pane_g

0x48b6,	// (0x0002adb4) cell_indicator_nsta_pane_g1_ParamLimits

0xbefd,	// (0x000323fb) cell_indicator_nsta_pane_g2_ParamLimits

0xfaac,	// (0x00035faa) cell_indicator_nsta_pane_g_ParamLimits

0xee5b,	// (0x00035359) form2_midp_time_pane_t1_ParamLimits

0x8660,	// (0x0002eb5e) main_idle_act4_pane_ParamLimits

0x8660,	// (0x0002eb5e) main_idle_act4_pane

0xb1c5,	// (0x000316c3) popup_tb_extension_window_ParamLimits

0xd829,	// (0x00033d27) tb_ext_find_pane_ParamLimits

0xd829,	// (0x00033d27) tb_ext_find_pane

0x6883,	// (0x0002cd81) ai_gene_pane_1_cp1

0x04ff,	// (0x000269fd) ai_gene_pane_2_cp1

0x688b,	// (0x0002cd89) list_single_idle_plugin_calendar_pane

0x6894,	// (0x0002cd92) list_single_idle_plugin_notification_pane

0x689d,	// (0x0002cd9b) list_single_idle_plugin_player_pane

0xd886,	// (0x00033d84) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd886,	// (0x00033d84) list_single_idle_plugin_shortcut_pane

0xd8ae,	// (0x00033dac) main_idle_act4_pane_t1

0xd8c6,	// (0x00033dc4) main_idle_act4_pane_t2

0x0001,

0xfd3d,	// (0x0003623b) main_idle_act4_pane_t

0xd8de,	// (0x00033ddc) middle_sk_idle_act4_pane_ParamLimits

0xd8de,	// (0x00033ddc) middle_sk_idle_act4_pane

0xd8fa,	// (0x00033df8) popup_clock_digital_analogue_window_cp2

0xd921,	// (0x00033e1f) shortcut_wheel_idle_act4_pane_ParamLimits

0xd921,	// (0x00033e1f) shortcut_wheel_idle_act4_pane

0x4e43,	// (0x0002b341) shortcut_wheel_idle_act4_pane_g1

0x4e43,	// (0x0002b341) shortcut_wheel_idle_act4_pane_g2

0x4e43,	// (0x0002b341) shortcut_wheel_idle_act4_pane_g3

0x4e43,	// (0x0002b341) shortcut_wheel_idle_act4_pane_g4

0x4e43,	// (0x0002b341) shortcut_wheel_idle_act4_pane_g5

0x6930,	// (0x0002ce2e) shortcut_wheel_idle_act4_pane_g6

0x6938,	// (0x0002ce36) shortcut_wheel_idle_act4_pane_g7

0x6940,	// (0x0002ce3e) shortcut_wheel_idle_act4_pane_g8

0x6948,	// (0x0002ce46) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd42,	// (0x00036240) shortcut_wheel_idle_act4_pane_g

0xc0b9,	// (0x000325b7) middle_sk_idle_act4_pane_g1_ParamLimits

0xc0b9,	// (0x000325b7) middle_sk_idle_act4_pane_g1

0xd99e,	// (0x00033e9c) middle_sk_idle_act4_pane_g2_ParamLimits

0xd99e,	// (0x00033e9c) middle_sk_idle_act4_pane_g2

0x0001,

0xfd65,	// (0x00036263) middle_sk_idle_act4_pane_g_ParamLimits

0xfd65,	// (0x00036263) middle_sk_idle_act4_pane_g

0xd9b6,	// (0x00033eb4) middle_sk_idle_act4_pane_t1_ParamLimits

0xd9b6,	// (0x00033eb4) middle_sk_idle_act4_pane_t1

0xd9e5,	// (0x00033ee3) grid_ai_shortcut_pane_ParamLimits

0xd9e5,	// (0x00033ee3) grid_ai_shortcut_pane

0xda02,	// (0x00033f00) list_highlight_pane_cp16_ParamLimits

0xda02,	// (0x00033f00) list_highlight_pane_cp16

0xda0f,	// (0x00033f0d) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xda0f,	// (0x00033f0d) list_single_idle_plugin_shortcut_pane_g1

0xda1b,	// (0x00033f19) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xda1b,	// (0x00033f19) list_single_idle_plugin_shortcut_pane_g2

0xda39,	// (0x00033f37) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xda39,	// (0x00033f37) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6a,	// (0x00036268) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6a,	// (0x00036268) list_single_idle_plugin_shortcut_pane_g

0xda4e,	// (0x00033f4c) cell_ai_shortcut_pane_ParamLimits

0xda4e,	// (0x00033f4c) cell_ai_shortcut_pane

0xda64,	// (0x00033f62) cell_ai_shortcut_pane_g1_ParamLimits

0xda64,	// (0x00033f62) cell_ai_shortcut_pane_g1

0x6883,	// (0x0002cd81) ai_gene_pane_1_cp2

0x6a79,	// (0x0002cf77) ai_gene_pane_2_cp2

0x6a81,	// (0x0002cf7f) list_highlight_pane_cp15

0x6a8a,	// (0x0002cf88) list_single_idle_plugin_calendar_pane_g1

0x6a81,	// (0x0002cf7f) list_highlight_pane_cp17

0x6a92,	// (0x0002cf90) list_single_idle_plugin_calendar_pane_g1_copy1

0x6a9a,	// (0x0002cf98) list_single_idle_plugin_player_pane_g1

0x41db,	// (0x0002a6d9) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd71,	// (0x0003626f) list_single_idle_plugin_player_pane_g

0x6aa2,	// (0x0002cfa0) list_single_idle_plugin_player_pane_t1

0x6ab0,	// (0x0002cfae) list_single_idle_plugin_player_pane_t2

0x6abe,	// (0x0002cfbc) list_single_idle_plugin_player_pane_t3

0x6acc,	// (0x0002cfca) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd76,	// (0x00036274) list_single_idle_plugin_player_pane_t

0x6ada,	// (0x0002cfd8) wait_bar_pane_cp15

0x6ae2,	// (0x0002cfe0) grid_ai_notification_pane

0x41db,	// (0x0002a6d9) list_single_idle_plugin_notification_pane_g1

0xda86,	// (0x00033f84) cell_ai_notification_pane_ParamLimits

0xda86,	// (0x00033f84) cell_ai_notification_pane

0x6af8,	// (0x0002cff6) cell_ai_notification_pane_g1

0x6b00,	// (0x0002cffe) cell_ai_notification_pane_t1

0xda93,	// (0x00033f91) tb_ext_find_button_pane

0xda9b,	// (0x00033f99) tb_ext_find_pane_g1

0xdaa3,	// (0x00033fa1) tb_ext_find_pane_t1

0xcef7,	// (0x000333f5) tb_ext_find_button_pane_g1

0x6b2c,	// (0x0002d02a) tb_ext_find_button_pane_g2

0x0001,

0xfd7f,	// (0x0003627d) tb_ext_find_button_pane_g

0xd8ae,	// (0x00033dac) main_idle_act4_pane_t1_ParamLimits

0xd8c6,	// (0x00033dc4) main_idle_act4_pane_t2_ParamLimits

0xfd3d,	// (0x0003623b) main_idle_act4_pane_t_ParamLimits

0xd8fa,	// (0x00033df8) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd911,	// (0x00033e0f) sat_plugin_idle_act4_pane_ParamLimits

0xd911,	// (0x00033e0f) sat_plugin_idle_act4_pane

0xdab1,	// (0x00033faf) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdab1,	// (0x00033faf) sat_plugin_idle_act4_pane_t1

0xdac9,	// (0x00033fc7) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdac9,	// (0x00033fc7) sat_plugin_idle_act4_pane_t2

0xdae1,	// (0x00033fdf) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdae1,	// (0x00033fdf) sat_plugin_idle_act4_pane_t3

0xdaf9,	// (0x00033ff7) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdaf9,	// (0x00033ff7) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd84,	// (0x00036282) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd84,	// (0x00036282) sat_plugin_idle_act4_pane_t

0xf1cd,	// (0x000356cb) popup_battery_window_ParamLimits

0xf1cd,	// (0x000356cb) popup_battery_window

0x9f74,	// (0x00030472) bg_popup_sub_pane_cp25_ParamLimits

0x9f74,	// (0x00030472) bg_popup_sub_pane_cp25

0x6b81,	// (0x0002d07f) popup_battery_window_g1_ParamLimits

0x6b81,	// (0x0002d07f) popup_battery_window_g1

0x6b8d,	// (0x0002d08b) popup_battery_window_t1_ParamLimits

0x6b8d,	// (0x0002d08b) popup_battery_window_t1

0x6b9f,	// (0x0002d09d) popup_battery_window_t2_ParamLimits

0x6b9f,	// (0x0002d09d) popup_battery_window_t2

0x0001,

0xfd8d,	// (0x0003628b) popup_battery_window_t_ParamLimits

0xfd8d,	// (0x0003628b) popup_battery_window_t

0xa884,	// (0x00030d82) midp_canvas_pane_ParamLimits

0xa8df,	// (0x00030ddd) midp_keypad_pane_ParamLimits

0xa8df,	// (0x00030ddd) midp_keypad_pane

0x0933,	// (0x00026e31) main_midp_pane_ParamLimits

0x4942,	// (0x0002ae40) signal_pane_g2_cp_ParamLimits

0xdb11,	// (0x0003400f) aid_size_cell_midp_keypad_ParamLimits

0xdb11,	// (0x0003400f) aid_size_cell_midp_keypad

0xdb2f,	// (0x0003402d) midp_keyp_game_grid_pane_ParamLimits

0xdb2f,	// (0x0003402d) midp_keyp_game_grid_pane

0xdb56,	// (0x00034054) midp_keyp_rocker_pane_ParamLimits

0xdb56,	// (0x00034054) midp_keyp_rocker_pane

0xdb95,	// (0x00034093) midp_keyp_sk_left_pane_ParamLimits

0xdb95,	// (0x00034093) midp_keyp_sk_left_pane

0xdbe9,	// (0x000340e7) midp_keyp_sk_right_pane_ParamLimits

0xdbe9,	// (0x000340e7) midp_keyp_sk_right_pane

0x9912,	// (0x0002fe10) bg_button_pane_cp03

0xdc3d,	// (0x0003413b) midp_keyp_sk_left_pane_g1

0x9912,	// (0x0002fe10) bg_button_pane_cp04

0xdc3d,	// (0x0003413b) midp_keyp_sk_right_pane_g1

0x4e43,	// (0x0002b341) midp_keyp_rocker_pane_g1

0xdc46,	// (0x00034144) keyp_game_cell_pane_ParamLimits

0xdc46,	// (0x00034144) keyp_game_cell_pane

0x9912,	// (0x0002fe10) bg_button_pane_cp02

0xdc6c,	// (0x0003416a) keyp_game_cell_pane_g1

0x9a16,	// (0x0002ff14) popup_fep_vkb2_window_ParamLimits

0x9a16,	// (0x0002ff14) popup_fep_vkb2_window

0xc44a,	// (0x00032948) aid_size_cell_vkb2_ParamLimits

0xc44a,	// (0x00032948) aid_size_cell_vkb2

0xc480,	// (0x0003297e) popup_fep_vkb2_window_g1_ParamLimits

0xc480,	// (0x0003297e) popup_fep_vkb2_window_g1

0xc4d0,	// (0x000329ce) vkb2_area_bottom_pane_ParamLimits

0xc4d0,	// (0x000329ce) vkb2_area_bottom_pane

0xc52c,	// (0x00032a2a) vkb2_area_keypad_pane_ParamLimits

0xc52c,	// (0x00032a2a) vkb2_area_keypad_pane

0xc57a,	// (0x00032a78) vkb2_area_top_pane_ParamLimits

0xc57a,	// (0x00032a78) vkb2_area_top_pane

0xc600,	// (0x00032afe) vkb2_top_entry_pane_ParamLimits

0xc600,	// (0x00032afe) vkb2_top_entry_pane

0xc62d,	// (0x00032b2b) vkb2_top_grid_left_pane_ParamLimits

0xc62d,	// (0x00032b2b) vkb2_top_grid_left_pane

0xc64d,	// (0x00032b4b) vkb2_top_grid_right_pane_ParamLimits

0xc64d,	// (0x00032b4b) vkb2_top_grid_right_pane

0x22a1,	// (0x0002879f) vkb2_cell_keypad_pane_ParamLimits

0x22a1,	// (0x0002879f) vkb2_cell_keypad_pane

0xc693,	// (0x00032b91) vkb2_area_bottom_grid_pane_ParamLimits

0xc693,	// (0x00032b91) vkb2_area_bottom_grid_pane

0xc6bd,	// (0x00032bbb) vkb2_area_bottom_pane_g1_ParamLimits

0xc6bd,	// (0x00032bbb) vkb2_area_bottom_pane_g1

0xc6e3,	// (0x00032be1) vkb2_area_bottom_pane_g2_ParamLimits

0xc6e3,	// (0x00032be1) vkb2_area_bottom_pane_g2

0xc714,	// (0x00032c12) vkb2_area_bottom_pane_g3_ParamLimits

0xc714,	// (0x00032c12) vkb2_area_bottom_pane_g3

0x0002,

0xfd92,	// (0x00036290) vkb2_area_bottom_pane_g_ParamLimits

0xfd92,	// (0x00036290) vkb2_area_bottom_pane_g

0x244b,	// (0x00028949) vkb2_top_cell_left_pane_ParamLimits

0x244b,	// (0x00028949) vkb2_top_cell_left_pane

0xdc75,	// (0x00034173) vkb2_top_entry_pane_g1_ParamLimits

0xdc75,	// (0x00034173) vkb2_top_entry_pane_g1

0xdc83,	// (0x00034181) vkb2_top_entry_pane_t1_ParamLimits

0xdc83,	// (0x00034181) vkb2_top_entry_pane_t1

0x6d42,	// (0x0002d240) vkb2_top_entry_pane_t2_ParamLimits

0x6d42,	// (0x0002d240) vkb2_top_entry_pane_t2

0x6d74,	// (0x0002d272) vkb2_top_entry_pane_t3_ParamLimits

0x6d74,	// (0x0002d272) vkb2_top_entry_pane_t3

0x0002,

0xfd99,	// (0x00036297) vkb2_top_entry_pane_t_ParamLimits

0xfd99,	// (0x00036297) vkb2_top_entry_pane_t

0xc77e,	// (0x00032c7c) vkb2_top_grid_right_pane_g1_ParamLimits

0xc77e,	// (0x00032c7c) vkb2_top_grid_right_pane_g1

0x24ae,	// (0x000289ac) vkb2_top_grid_right_pane_g2_ParamLimits

0x24ae,	// (0x000289ac) vkb2_top_grid_right_pane_g2

0x24c6,	// (0x000289c4) vkb2_top_grid_right_pane_g3_ParamLimits

0x24c6,	// (0x000289c4) vkb2_top_grid_right_pane_g3

0xc794,	// (0x00032c92) vkb2_top_grid_right_pane_g4_ParamLimits

0xc794,	// (0x00032c92) vkb2_top_grid_right_pane_g4

0x0003,

0xfda0,	// (0x0003629e) vkb2_top_grid_right_pane_g_ParamLimits

0xfda0,	// (0x0003629e) vkb2_top_grid_right_pane_g

0x24f4,	// (0x000289f2) vkb2_top_cell_left_pane_g1

0x250b,	// (0x00028a09) vkb2_cell_keypad_pane_g1_ParamLimits

0x250b,	// (0x00028a09) vkb2_cell_keypad_pane_g1

0x6d98,	// (0x0002d296) vkb2_cell_keypad_pane_t1_ParamLimits

0x6d98,	// (0x0002d296) vkb2_cell_keypad_pane_t1

0x2519,	// (0x00028a17) vkb2_cell_bottom_grid_pane_ParamLimits

0x2519,	// (0x00028a17) vkb2_cell_bottom_grid_pane

0x2552,	// (0x00028a50) vkb2_cell_bottom_grid_pane_g1

0xd942,	// (0x00033e40) aid_call2_pane_cp02

0xd94a,	// (0x00033e48) aid_call_pane_cp02

0xd952,	// (0x00033e50) clock_digital_number_pane_cp10

0xd95a,	// (0x00033e58) clock_digital_number_pane_cp11

0xd962,	// (0x00033e60) clock_digital_number_pane_cp12

0xd96a,	// (0x00033e68) clock_digital_number_pane_cp13

0xd972,	// (0x00033e70) clock_digital_separator_pane_cp10

0xcef7,	// (0x000333f5) popup_clock_digital_analogue_window_cp2_g1

0xcef7,	// (0x000333f5) popup_clock_digital_analogue_window_cp2_g2

0xd97a,	// (0x00033e78) popup_clock_digital_analogue_window_cp2_g3

0xcef7,	// (0x000333f5) popup_clock_digital_analogue_window_cp2_g4

0xd97a,	// (0x00033e78) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd55,	// (0x00036253) popup_clock_digital_analogue_window_cp2_g

0xd982,	// (0x00033e80) popup_clock_digital_analogue_window_cp2_t1

0xd990,	// (0x00033e8e) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd60,	// (0x0003625e) popup_clock_digital_analogue_window_cp2_t

0x4e43,	// (0x0002b341) clock_digital_number_pane_cp10_g1

0x4e43,	// (0x0002b341) clock_digital_number_pane_cp10_g2

0x0001,

0xfb48,	// (0x00036046) clock_digital_number_pane_cp10_g

0x4e43,	// (0x0002b341) clock_digital_separator_pane_cp10_g1

0x4e43,	// (0x0002b341) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb48,	// (0x00036046) clock_digital_separator_pane_cp10_g

0x67cb,	// (0x0002ccc9) uniindi_top_pane_g3

0x67dc,	// (0x0002ccda) uniindi_top_pane_g4

0x232c,	// (0x0002882a) vkb2_row_keypad_pane_ParamLimits

0x232c,	// (0x0002882a) vkb2_row_keypad_pane

0x256e,	// (0x00028a6c) vkb2_cell_t_keypad_pane_ParamLimits

0x256e,	// (0x00028a6c) vkb2_cell_t_keypad_pane

0x257e,	// (0x00028a7c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x257e,	// (0x00028a7c) vkb2_cell_t_keypad_pane_cp08

0x2593,	// (0x00028a91) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2593,	// (0x00028a91) vkb2_cell_t_keypad_pane_cp09

0x25a7,	// (0x00028aa5) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x25a7,	// (0x00028aa5) vkb2_cell_t_keypad_pane_cp01

0x25b8,	// (0x00028ab6) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x25b8,	// (0x00028ab6) vkb2_cell_t_keypad_pane_cp02

0x25c9,	// (0x00028ac7) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x25c9,	// (0x00028ac7) vkb2_cell_t_keypad_pane_cp03

0x25da,	// (0x00028ad8) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x25da,	// (0x00028ad8) vkb2_cell_t_keypad_pane_cp04

0x25eb,	// (0x00028ae9) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x25eb,	// (0x00028ae9) vkb2_cell_t_keypad_pane_cp05

0x25fc,	// (0x00028afa) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x25fc,	// (0x00028afa) vkb2_cell_t_keypad_pane_cp06

0x260f,	// (0x00028b0d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x260f,	// (0x00028b0d) vkb2_cell_t_keypad_pane_cp07

0x2624,	// (0x00028b22) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2624,	// (0x00028b22) vkb2_cell_t_keypad_pane_cp10

0x50be,	// (0x0002b5bc) vkb2_cell_t_keypad_pane_g1

0x6daf,	// (0x0002d2ad) vkb2_cell_t_keypad_pane_t1

0x9912,	// (0x0002fe10) popup_grid_graphic2_window

0xdcbc,	// (0x000341ba) aid_size_cell_graphic2_ParamLimits

0xdcbc,	// (0x000341ba) aid_size_cell_graphic2

0xdcfa,	// (0x000341f8) bg_popup_window_pane_cp21_ParamLimits

0xdcfa,	// (0x000341f8) bg_popup_window_pane_cp21

0xdd08,	// (0x00034206) graphic2_pages_pane_ParamLimits

0xdd08,	// (0x00034206) graphic2_pages_pane

0xdd60,	// (0x0003425e) grid_graphic2_control_pane_ParamLimits

0xdd60,	// (0x0003425e) grid_graphic2_control_pane

0xdda8,	// (0x000342a6) grid_graphic2_pane_ParamLimits

0xdda8,	// (0x000342a6) grid_graphic2_pane

0xde33,	// (0x00034331) cell_graphic2_pane

0x9912,	// (0x0002fe10) main_comp_mode_pane

0x603c,	// (0x0002c53a) list_ai3_gene_pane_ParamLimits

0xd67f,	// (0x00033b7d) bg_popup_window_pane_cp19_ParamLimits

0x6410,	// (0x0002c90e) bg_touch_area_indi_pane_ParamLimits

0x6410,	// (0x0002c90e) bg_touch_area_indi_pane

0x6426,	// (0x0002c924) bg_touch_area_indi_pane_cp01_ParamLimits

0x6426,	// (0x0002c924) bg_touch_area_indi_pane_cp01

0x643e,	// (0x0002c93c) bg_touch_area_indi_pane_cp02_ParamLimits

0x643e,	// (0x0002c93c) bg_touch_area_indi_pane_cp02

0x6458,	// (0x0002c956) bg_touch_area_indi_pane_cp03_ParamLimits

0x6458,	// (0x0002c956) bg_touch_area_indi_pane_cp03

0x6472,	// (0x0002c970) popup_slider_window_g1_ParamLimits

0x648e,	// (0x0002c98c) popup_slider_window_g2_ParamLimits

0x64aa,	// (0x0002c9a8) popup_slider_window_g3_ParamLimits

0xfcea,	// (0x000361e8) popup_slider_window_g_ParamLimits

0x6506,	// (0x0002ca04) popup_slider_window_t1_ParamLimits

0x657a,	// (0x0002ca78) small_volume_slider_vertical_pane_ParamLimits

0xde33,	// (0x00034331) cell_graphic2_pane_ParamLimits

0xde96,	// (0x00034394) bg_button_pane_cp10_ParamLimits

0xde96,	// (0x00034394) bg_button_pane_cp10

0xdea9,	// (0x000343a7) bg_button_pane_cp11_ParamLimits

0xdea9,	// (0x000343a7) bg_button_pane_cp11

0xdebc,	// (0x000343ba) graphic2_pages_pane_g1_ParamLimits

0xdebc,	// (0x000343ba) graphic2_pages_pane_g1

0xded7,	// (0x000343d5) graphic2_pages_pane_g2_ParamLimits

0xded7,	// (0x000343d5) graphic2_pages_pane_g2

0x0001,

0xfdae,	// (0x000362ac) graphic2_pages_pane_g_ParamLimits

0xfdae,	// (0x000362ac) graphic2_pages_pane_g

0xdeef,	// (0x000343ed) graphic2_pages_pane_t1_ParamLimits

0xdeef,	// (0x000343ed) graphic2_pages_pane_t1

0xdf07,	// (0x00034405) cell_graphic2_control_pane_ParamLimits

0xdf07,	// (0x00034405) cell_graphic2_control_pane

0xdf3b,	// (0x00034439) cell_graphic2_pane_g1_ParamLimits

0xdf3b,	// (0x00034439) cell_graphic2_pane_g1

0xc114,	// (0x00032612) cell_graphic2_pane_g2_ParamLimits

0xc114,	// (0x00032612) cell_graphic2_pane_g2

0xc7aa,	// (0x00032ca8) cell_graphic2_pane_g3_ParamLimits

0xc7aa,	// (0x00032ca8) cell_graphic2_pane_g3

0xc121,	// (0x0003261f) cell_graphic2_pane_g4_ParamLimits

0xc121,	// (0x0003261f) cell_graphic2_pane_g4

0xdf48,	// (0x00034446) cell_graphic2_pane_g5_ParamLimits

0xdf48,	// (0x00034446) cell_graphic2_pane_g5

0x0004,

0xfdb3,	// (0x000362b1) cell_graphic2_pane_g_ParamLimits

0xfdb3,	// (0x000362b1) cell_graphic2_pane_g

0xdf68,	// (0x00034466) cell_graphic2_pane_t1_ParamLimits

0xdf68,	// (0x00034466) cell_graphic2_pane_t1

0x34c6,	// (0x000299c4) grid_highlight_pane_cp11_ParamLimits

0x34c6,	// (0x000299c4) grid_highlight_pane_cp11

0x9f74,	// (0x00030472) bg_button_pane_cp05

0xdf9d,	// (0x0003449b) cell_graphic2_control_pane_g1

0x4e43,	// (0x0002b341) bg_touch_area_indi_pane_g1

0x7089,	// (0x0002d587) aid_cmod_rocker_key_size

0x7093,	// (0x0002d591) aid_cmode_itu_key_size

0x709d,	// (0x0002d59b) main_cmode_video_pane

0x70a7,	// (0x0002d5a5) main_comp_mode_itu_pane

0x70b3,	// (0x0002d5b1) main_comp_mode_rocker_pane

0x70bf,	// (0x0002d5bd) cell_cmode_rocker_pane_ParamLimits

0x70bf,	// (0x0002d5bd) cell_cmode_rocker_pane

0x70d3,	// (0x0002d5d1) cell_cmode_itu_pane_ParamLimits

0x70d3,	// (0x0002d5d1) cell_cmode_itu_pane

0xca15,	// (0x00032f13) bg_button_pane_cp06_ParamLimits

0xca15,	// (0x00032f13) bg_button_pane_cp06

0x50be,	// (0x0002b5bc) cell_cmode_rocker_pane_g1_ParamLimits

0x50be,	// (0x0002b5bc) cell_cmode_rocker_pane_g1

0x6621,	// (0x0002cb1f) cell_cmode_rocker_pane_g2_ParamLimits

0x6621,	// (0x0002cb1f) cell_cmode_rocker_pane_g2

0x0001,

0xfdc3,	// (0x000362c1) cell_cmode_rocker_pane_g_ParamLimits

0xfdc3,	// (0x000362c1) cell_cmode_rocker_pane_g

0x9912,	// (0x0002fe10) bg_button_pane_cp07

0x70ea,	// (0x0002d5e8) cell_cmode_itu_pane_g1

0x70f3,	// (0x0002d5f1) cell_cmode_itu_pane_t1

0x7101,	// (0x0002d5ff) cell_cmode_itu_pane_t2

0x0001,

0xfdc8,	// (0x000362c6) cell_cmode_itu_pane_t

0x684f,	// (0x0002cd4d) aid_touch_ctrl_left

0x6857,	// (0x0002cd55) aid_touch_ctrl_right

0x9912,	// (0x0002fe10) compa_mode_pane

0xdfc3,	// (0x000344c1) aid_cmod_rocker_key_size_cp

0xdfcd,	// (0x000344cb) aid_cmode_itu_key_size_cp

0x7123,	// (0x0002d621) compa_mode_pane_g1

0x712b,	// (0x0002d629) compa_mode_pane_g2

0x7133,	// (0x0002d631) compa_mode_pane_g3

0x0002,

0xfdcd,	// (0x000362cb) compa_mode_pane_g

0xdfd7,	// (0x000344d5) main_comp_mode_itu_pane_cp

0xdfdf,	// (0x000344dd) main_comp_mode_rocker_pane_cp

0xdfe7,	// (0x000344e5) cell_cmode_itu_pane_cp_ParamLimits

0xdfe7,	// (0x000344e5) cell_cmode_itu_pane_cp

0xdffc,	// (0x000344fa) cell_cmode_rocker_pane_cp_ParamLimits

0xdffc,	// (0x000344fa) cell_cmode_rocker_pane_cp

0xca15,	// (0x00032f13) bg_button_pane_cp06_cp_ParamLimits

0xca15,	// (0x00032f13) bg_button_pane_cp06_cp

0x50be,	// (0x0002b5bc) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x50be,	// (0x0002b5bc) cell_cmode_rocker_pane_g1_cp

0x4e43,	// (0x0002b341) cell_cmode_rocker_pane_g2_cp

0x9912,	// (0x0002fe10) bg_button_pane_cp07_cp

0xe00e,	// (0x0003450c) cell_cmode_itu_pane_g1_cp

0xe017,	// (0x00034515) cell_cmode_itu_pane_t1_cp

0xe017,	// (0x00034515) cell_cmode_itu_pane_t2_cp

0xbd2f,	// (0x0003222d) settings_code_pane_cp2

0x9c8d,	// (0x0003018b) bg_popup_window_pane_cp3_ParamLimits

0xa162,	// (0x00030660) heading_pane_cp3_ParamLimits

0xa16e,	// (0x0003066c) listscroll_popup_graphic_pane_ParamLimits

0x1c1b,	// (0x00028119) fep_hwr_aid_pane_ParamLimits

0x2000,	// (0x000284fe) aid_touch_sctrl_top_ParamLimits

0x200d,	// (0x0002850b) sctrl_sk_top_pane_g1_ParamLimits

0x50be,	// (0x0002b5bc) sctrl_sk_top_pane_g2_ParamLimits

0xfd03,	// (0x00036201) sctrl_sk_top_pane_g_ParamLimits

0x201a,	// (0x00028518) sctrl_sk_top_pane_t1_ParamLimits

0x2000,	// (0x000284fe) aid_touch_sctrl_bottom_ParamLimits

0x201a,	// (0x00028518) sctrl_sk_bottom_pane_t1_ParamLimits

0x6795,	// (0x0002cc93) aid_area_touch_clock

0xc5c2,	// (0x00032ac0) aid_vkb2_area_top_pane_cell_ParamLimits

0xc5c2,	// (0x00032ac0) aid_vkb2_area_top_pane_cell

0xc66d,	// (0x00032b6b) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc66d,	// (0x00032b6b) aid_vkb2_area_bottom_pane_cell

0x6cfa,	// (0x0002d1f8) popup_char_count_window

0x7189,	// (0x0002d687) popup_char_count_window_g1

0x7192,	// (0x0002d690) popup_char_count_window_g2

0x719b,	// (0x0002d699) popup_char_count_window_g3

0x0002,

0xfdd4,	// (0x000362d2) popup_char_count_window_g

0x71a4,	// (0x0002d6a2) popup_char_count_window_t1

0x20bd,	// (0x000285bb) popup_fep_char_preview_window_ParamLimits

0x20bd,	// (0x000285bb) popup_fep_char_preview_window

0xc5e2,	// (0x00032ae0) vkb2_top_candi_pane_ParamLimits

0xc5e2,	// (0x00032ae0) vkb2_top_candi_pane

0xe025,	// (0x00034523) cell_vkb2_top_candi_pane_ParamLimits

0xe025,	// (0x00034523) cell_vkb2_top_candi_pane

0x2e4f,	// (0x0002934d) bg_popup_fep_char_preview_window_ParamLimits

0x2e4f,	// (0x0002934d) bg_popup_fep_char_preview_window

0x2639,	// (0x00028b37) popup_fep_char_preview_window_t1_ParamLimits

0x2639,	// (0x00028b37) popup_fep_char_preview_window_t1

0x7203,	// (0x0002d701) bg_popup_fep_char_preview_window_g1

0x720b,	// (0x0002d709) bg_popup_fep_char_preview_window_g2

0x7213,	// (0x0002d711) bg_popup_fep_char_preview_window_g3

0x721b,	// (0x0002d719) bg_popup_fep_char_preview_window_g4

0x7223,	// (0x0002d721) bg_popup_fep_char_preview_window_g5

0x2673,	// (0x00028b71) bg_popup_fep_char_preview_window_g6

0x722b,	// (0x0002d729) bg_popup_fep_char_preview_window_g7

0x7233,	// (0x0002d731) bg_popup_fep_char_preview_window_g8

0x723b,	// (0x0002d739) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddb,	// (0x000362d9) bg_popup_fep_char_preview_window_g

0x50be,	// (0x0002b5bc) cell_vkb2_top_candi_pane_g1_ParamLimits

0x50be,	// (0x0002b5bc) cell_vkb2_top_candi_pane_g1

0x53ff,	// (0x0002b8fd) cell_vkb2_top_candi_pane_g2_ParamLimits

0x53ff,	// (0x0002b8fd) cell_vkb2_top_candi_pane_g2

0x5420,	// (0x0002b91e) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5420,	// (0x0002b91e) cell_vkb2_top_candi_pane_g3

0x267b,	// (0x00028b79) cell_vkb2_top_candi_pane_g4_ParamLimits

0x267b,	// (0x00028b79) cell_vkb2_top_candi_pane_g4

0x7243,	// (0x0002d741) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7243,	// (0x0002d741) cell_vkb2_top_candi_pane_g5

0x6621,	// (0x0002cb1f) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6621,	// (0x0002cb1f) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdee,	// (0x000362ec) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdee,	// (0x000362ec) cell_vkb2_top_candi_pane_g

0x269c,	// (0x00028b9a) cell_vkb2_top_candi_pane_t1

0x1a89,	// (0x00027f87) aid_size_touch_slider_mark_ParamLimits

0x1a89,	// (0x00027f87) aid_size_touch_slider_mark

0xdd44,	// (0x00034242) grid_graphic2_catg_pane_ParamLimits

0xdd44,	// (0x00034242) grid_graphic2_catg_pane

0xde02,	// (0x00034300) popup_grid_graphic2_window_t1_ParamLimits

0xde02,	// (0x00034300) popup_grid_graphic2_window_t1

0xde18,	// (0x00034316) popup_grid_graphic2_window_t2_ParamLimits

0xde18,	// (0x00034316) popup_grid_graphic2_window_t2

0x0001,

0xfda9,	// (0x000362a7) popup_grid_graphic2_window_t_ParamLimits

0xfda9,	// (0x000362a7) popup_grid_graphic2_window_t

0x9f74,	// (0x00030472) bg_button_pane_cp05_ParamLimits

0xdf9d,	// (0x0003449b) cell_graphic2_control_pane_g1_ParamLimits

0xe08f,	// (0x0003458d) cell_graphic2_catg_pane_ParamLimits

0xe08f,	// (0x0003458d) cell_graphic2_catg_pane

0x9912,	// (0x0002fe10) bg_button_pane_cp12

0xe0a1,	// (0x0003459f) cell_graphic2_catg_pane_g1

0x6761,	// (0x0002cc5f) cell_tb_ext_pane_t1_ParamLimits

0x246b,	// (0x00028969) vkb2_top_cell_right_narrow_pane_ParamLimits

0x246b,	// (0x00028969) vkb2_top_cell_right_narrow_pane

0x2483,	// (0x00028981) vkb2_top_cell_right_wide_pane_ParamLimits

0x2483,	// (0x00028981) vkb2_top_cell_right_wide_pane

0x8660,	// (0x0002eb5e) bg_vkb2_func_pane_ParamLimits

0x8660,	// (0x0002eb5e) bg_vkb2_func_pane

0x24f4,	// (0x000289f2) vkb2_top_cell_left_pane_g1_ParamLimits

0x8660,	// (0x0002eb5e) bg_vkb2_fuc_pane_cp03_ParamLimits

0x8660,	// (0x0002eb5e) bg_vkb2_fuc_pane_cp03

0x2552,	// (0x00028a50) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x14ac,	// (0x000279aa) bg_vkb2_func_pane_g1

0x14b4,	// (0x000279b2) bg_vkb2_func_pane_g2

0x14c4,	// (0x000279c2) bg_vkb2_func_pane_g3

0x14bc,	// (0x000279ba) bg_vkb2_func_pane_g4

0x14cc,	// (0x000279ca) bg_vkb2_func_pane_g5

0x14d4,	// (0x000279d2) bg_vkb2_func_pane_g6

0x14dc,	// (0x000279da) bg_vkb2_func_pane_g7

0x14e4,	// (0x000279e2) bg_vkb2_func_pane_g8

0x14a4,	// (0x000279a2) bg_vkb2_func_pane_g9

0x0008,

0xfdfb,	// (0x000362f9) bg_vkb2_func_pane_g

0x8660,	// (0x0002eb5e) bg_vkb2_fuc_pane_cp01_ParamLimits

0x8660,	// (0x0002eb5e) bg_vkb2_fuc_pane_cp01

0x24f4,	// (0x000289f2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x24f4,	// (0x000289f2) vkb2_top_cell_right_wide_pane_g1

0x8660,	// (0x0002eb5e) bg_vkb2_fuc_pane_cp02_ParamLimits

0x8660,	// (0x0002eb5e) bg_vkb2_fuc_pane_cp02

0x2552,	// (0x00028a50) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2552,	// (0x00028a50) vkb2_top_cell_right_narrow_pane_g1

0xd5b9,	// (0x00033ab7) aid_touch_area_decrease_ParamLimits

0xd5b9,	// (0x00033ab7) aid_touch_area_decrease

0xd5f3,	// (0x00033af1) aid_touch_area_increase_ParamLimits

0xd5f3,	// (0x00033af1) aid_touch_area_increase

0xd61b,	// (0x00033b19) aid_touch_area_mute_ParamLimits

0xd61b,	// (0x00033b19) aid_touch_area_mute

0xd64b,	// (0x00033b49) aid_touch_area_slider_ParamLimits

0xd64b,	// (0x00033b49) aid_touch_area_slider

0xd68b,	// (0x00033b89) popup_slider_window_g4_ParamLimits

0xd68b,	// (0x00033b89) popup_slider_window_g4

0xd6b3,	// (0x00033bb1) popup_slider_window_g5_ParamLimits

0xd6b3,	// (0x00033bb1) popup_slider_window_g5

0xd6e7,	// (0x00033be5) popup_slider_window_g6_ParamLimits

0xd6e7,	// (0x00033be5) popup_slider_window_g6

0x6534,	// (0x0002ca32) popup_slider_window_t2_ParamLimits

0x6534,	// (0x0002ca32) popup_slider_window_t2

0x0001,

0xfcf7,	// (0x000361f5) popup_slider_window_t_ParamLimits

0xfcf7,	// (0x000361f5) popup_slider_window_t

0xd703,	// (0x00033c01) slider_pane_ParamLimits

0xd703,	// (0x00033c01) slider_pane

0x727f,	// (0x0002d77d) slider_pane_g1_ParamLimits

0x727f,	// (0x0002d77d) slider_pane_g1

0x7293,	// (0x0002d791) slider_pane_g2_ParamLimits

0x7293,	// (0x0002d791) slider_pane_g2

0x72a9,	// (0x0002d7a7) slider_pane_g3_ParamLimits

0x72a9,	// (0x0002d7a7) slider_pane_g3

0x0003,

0xfe0e,	// (0x0003630c) slider_pane_g_ParamLimits

0xfe0e,	// (0x0003630c) slider_pane_g

0xb211,	// (0x0003170f) popup_tb_float_extension_window_ParamLimits

0xb211,	// (0x0003170f) popup_tb_float_extension_window

0x72d5,	// (0x0002d7d3) aid_size_cell_tb_float_ext

0x9912,	// (0x0002fe10) bg_popup_sub_window_cp28

0x72e1,	// (0x0002d7df) grid_tb_float_ext_pane

0x72ed,	// (0x0002d7eb) cell_tb_float_ext_pane_ParamLimits

0x72ed,	// (0x0002d7eb) cell_tb_float_ext_pane

0x7309,	// (0x0002d807) cell_tb_float_ext_pane_g1

0x7312,	// (0x0002d810) grid_highlight_pane_cp12

0xc0f2,	// (0x000325f0) cell_last_hwr_side_pane_ParamLimits

0xc0f2,	// (0x000325f0) cell_last_hwr_side_pane

0x4e43,	// (0x0002b341) cell_last_hwr_side_pane_g1

0x731b,	// (0x0002d819) cell_last_hwr_side_pane_g2

0x0001,

0xfe17,	// (0x00036315) cell_last_hwr_side_pane_g

0xc749,	// (0x00032c47) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc749,	// (0x00032c47) vkb2_area_bottom_space_btn_pane

0x50be,	// (0x0002b5bc) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6daf,	// (0x0002d2ad) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x269c,	// (0x00028b9a) cell_vkb2_top_candi_pane_t1_ParamLimits

0x26ba,	// (0x00028bb8) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x26ba,	// (0x00028bb8) vkb2_area_bottom_space_btn_pane_g1

0x26f4,	// (0x00028bf2) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x26f4,	// (0x00028bf2) vkb2_area_bottom_space_btn_pane_g2

0x272a,	// (0x00028c28) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x272a,	// (0x00028c28) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1c,	// (0x0003631a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1c,	// (0x0003631a) vkb2_area_bottom_space_btn_pane_g

0x1cc4,	// (0x000281c2) cel_fep_hwr_func_pane_ParamLimits

0x1cc4,	// (0x000281c2) cel_fep_hwr_func_pane

0xc0c7,	// (0x000325c5) cell_hwr_side_button_pane_ParamLimits

0xc0c7,	// (0x000325c5) cell_hwr_side_button_pane

0x6795,	// (0x0002cc93) aid_area_touch_clock_ParamLimits

0x9f74,	// (0x00030472) bg_uniindi_top_pane_ParamLimits

0x67a9,	// (0x0002cca7) uniindi_top_pane_g1_ParamLimits

0x67bf,	// (0x0002ccbd) uniindi_top_pane_g2_ParamLimits

0x67cb,	// (0x0002ccc9) uniindi_top_pane_g3_ParamLimits

0x67dc,	// (0x0002ccda) uniindi_top_pane_g4_ParamLimits

0xfd2f,	// (0x0003622d) uniindi_top_pane_g_ParamLimits

0x67e9,	// (0x0002cce7) uniindi_top_pane_t1_ParamLimits

0x9f74,	// (0x00030472) bg_vkb2_func_pane_cp01_ParamLimits

0x9f74,	// (0x00030472) bg_vkb2_func_pane_cp01

0x7324,	// (0x0002d822) cel_fep_hwr_func_pane_g1_ParamLimits

0x7324,	// (0x0002d822) cel_fep_hwr_func_pane_g1

0x9f74,	// (0x00030472) bg_vkb2_func_pane_cp02_ParamLimits

0x9f74,	// (0x00030472) bg_vkb2_func_pane_cp02

0x7324,	// (0x0002d822) cell_hwr_side_button_pane_g1_ParamLimits

0x7324,	// (0x0002d822) cell_hwr_side_button_pane_g1

0x12f5,	// (0x000277f3) status_pane_g4_ParamLimits

0x12f5,	// (0x000277f3) status_pane_g4

0x130f,	// (0x0002780d) status_pane_t1

0x4be2,	// (0x0002b0e0) form2_midp_gauge_slider_cont_pane

0x4bea,	// (0x0002b0e8) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbfff,	// (0x000324fd) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc011,	// (0x0003250f) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafb,	// (0x00035ff9) form2_midp_gauge_slider_pane_t_ParamLimits

0x4c20,	// (0x0002b11e) form2_midp_slider_pane_ParamLimits

0x207d,	// (0x0002857b) aid_size_cell_func_vkb2_ParamLimits

0x207d,	// (0x0002857b) aid_size_cell_func_vkb2

0x72c1,	// (0x0002d7bf) slider_pane_g4_ParamLimits

0x72c1,	// (0x0002d7bf) slider_pane_g4

0xc7b7,	// (0x00032cb5) form2_midp_gauge_slider_pane_t2_cp01

0xc7c5,	// (0x00032cc3) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc7c5,	// (0x00032cc3) form2_midp_gauge_slider_pane_t3_cp01

0x279f,	// (0x00028c9d) form2_midp_slider_pane_cp01

0x9912,	// (0x0002fe10) navi_smil_pane

0x735d,	// (0x0002d85b) navi_smil_pane_g1

0x7365,	// (0x0002d863) navi_smil_pane_t1

0x7332,	// (0x0002d830) form2_midp_slider_pane_g1

0x733b,	// (0x0002d839) form2_midp_slider_pane_g2

0x7343,	// (0x0002d841) form2_midp_slider_pane_g3

0x7332,	// (0x0002d830) form2_midp_slider_pane_g4

0xe0aa,	// (0x000345a8) form2_midp_slider_pane_g5

0x0004,

0xfe25,	// (0x00036323) form2_midp_slider_pane_g

0x2764,	// (0x00028c62) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2764,	// (0x00028c62) vkb2_area_bottom_space_btn_pane_g4

0xb3f8,	// (0x000318f6) lc0_navi_pane_ParamLimits

0xb3f8,	// (0x000318f6) lc0_navi_pane

0xb468,	// (0x00031966) lc0_stat_indi_pane_ParamLimits

0xb468,	// (0x00031966) lc0_stat_indi_pane

0xb47d,	// (0x0003197b) ls0_title_pane_ParamLimits

0xb47d,	// (0x0003197b) ls0_title_pane

0xca15,	// (0x00032f13) bg_popup_sub_pane_cp14_ParamLimits

0x677c,	// (0x0002cc7a) list_uniindi_pane_ParamLimits

0x6788,	// (0x0002cc86) uniindi_top_pane_ParamLimits

0x6827,	// (0x0002cd25) list_single_uniindi_pane_g1_ParamLimits

0x683a,	// (0x0002cd38) list_single_uniindi_pane_t1_ParamLimits

0xc7e2,	// (0x00032ce0) lc0_stat_clock_pane_ParamLimits

0xc7e2,	// (0x00032ce0) lc0_stat_clock_pane

0xe0b3,	// (0x000345b1) lc0_stat_indi_pane_g1_ParamLimits

0xe0b3,	// (0x000345b1) lc0_stat_indi_pane_g1

0xe0c0,	// (0x000345be) lc0_stat_indi_pane_g2_ParamLimits

0xe0c0,	// (0x000345be) lc0_stat_indi_pane_g2

0x0001,

0xfe30,	// (0x0003632e) lc0_stat_indi_pane_g_ParamLimits

0xfe30,	// (0x0003632e) lc0_stat_indi_pane_g

0xc7ef,	// (0x00032ced) lc0_uni_indicator_pane_ParamLimits

0xc7ef,	// (0x00032ced) lc0_uni_indicator_pane

0xe0cd,	// (0x000345cb) ls0_title_pane_g1_ParamLimits

0xe0cd,	// (0x000345cb) ls0_title_pane_g1

0xe0e1,	// (0x000345df) ls0_title_pane_t1_ParamLimits

0xe0e1,	// (0x000345df) ls0_title_pane_t1

0xc7fc,	// (0x00032cfa) lc0_uni_indicator_pane_g1_ParamLimits

0xc7fc,	// (0x00032cfa) lc0_uni_indicator_pane_g1

0x73d7,	// (0x0002d8d5) lc0_stat_clock_pane_t1

0x9912,	// (0x0002fe10) main_ai5_pane

0x73e5,	// (0x0002d8e3) ai5_sk_pane_ParamLimits

0x73e5,	// (0x0002d8e3) ai5_sk_pane

0xe10f,	// (0x0003460d) cell_ai5_widget_pane_ParamLimits

0xe10f,	// (0x0003460d) cell_ai5_widget_pane

0x798e,	// (0x0002de8c) aid_size_cell_widget_grid

0x799c,	// (0x0002de9a) bg_ai5_widget_pane_ParamLimits

0x799c,	// (0x0002de9a) bg_ai5_widget_pane

0x7a10,	// (0x0002df0e) cell_ai5_widget_pane_g2

0x7a20,	// (0x0002df1e) cell_ai5_widget_pane_g3

0x7a37,	// (0x0002df35) cell_ai5_widget_pane_g4

0x7a43,	// (0x0002df41) cell_ai5_widget_pane_g5

0xe466,	// (0x00034964) cell_ai5_widget_pane_g6

0xe472,	// (0x00034970) cell_ai5_widget_pane_g7

0x7aa3,	// (0x0002dfa1) cell_ai5_widget_pane_t1_ParamLimits

0x7aa3,	// (0x0002dfa1) cell_ai5_widget_pane_t1

0x7ac0,	// (0x0002dfbe) cell_ai5_widget_pane_t2_ParamLimits

0x7ac0,	// (0x0002dfbe) cell_ai5_widget_pane_t2

0x7ad8,	// (0x0002dfd6) cell_ai5_widget_pane_t3_ParamLimits

0x7ad8,	// (0x0002dfd6) cell_ai5_widget_pane_t3

0x7af0,	// (0x0002dfee) cell_ai5_widget_pane_t4_ParamLimits

0x7af0,	// (0x0002dfee) cell_ai5_widget_pane_t4

0x7b0d,	// (0x0002e00b) cell_ai5_widget_pane_t5_ParamLimits

0x7b0d,	// (0x0002e00b) cell_ai5_widget_pane_t5

0x7b2c,	// (0x0002e02a) cell_ai5_widget_pane_t6_ParamLimits

0x7b2c,	// (0x0002e02a) cell_ai5_widget_pane_t6

0x7b3e,	// (0x0002e03c) cell_ai5_widget_pane_t7_ParamLimits

0x7b3e,	// (0x0002e03c) cell_ai5_widget_pane_t7

0x7b57,	// (0x0002e055) cell_ai5_widget_pane_t8_ParamLimits

0x7b57,	// (0x0002e055) cell_ai5_widget_pane_t8

0x0009,

0xfe4a,	// (0x00036348) cell_ai5_widget_pane_t_ParamLimits

0xfe4a,	// (0x00036348) cell_ai5_widget_pane_t

0x7bab,	// (0x0002e0a9) grid_ai5_widget_pane

0xca15,	// (0x00032f13) highlight_cell_ai5_widget_pane_ParamLimits

0xca15,	// (0x00032f13) highlight_cell_ai5_widget_pane

0xe47e,	// (0x0003497c) ai5_sk_left_pane

0xe488,	// (0x00034986) ai5_sk_middle_pane

0xe492,	// (0x00034990) ai5_sk_right_pane

0x7bd7,	// (0x0002e0d5) bg_ai5_widget_pane_g1_ParamLimits

0x7bd7,	// (0x0002e0d5) bg_ai5_widget_pane_g1

0x7be3,	// (0x0002e0e1) bg_ai5_widget_pane_g2_ParamLimits

0x7be3,	// (0x0002e0e1) bg_ai5_widget_pane_g2

0x7bef,	// (0x0002e0ed) bg_ai5_widget_pane_g3_ParamLimits

0x7bef,	// (0x0002e0ed) bg_ai5_widget_pane_g3

0x7bfb,	// (0x0002e0f9) bg_ai5_widget_pane_g4_ParamLimits

0x7bfb,	// (0x0002e0f9) bg_ai5_widget_pane_g4

0x7c07,	// (0x0002e105) bg_ai5_widget_pane_g5_ParamLimits

0x7c07,	// (0x0002e105) bg_ai5_widget_pane_g5

0x7c13,	// (0x0002e111) bg_ai5_widget_pane_g6_ParamLimits

0x7c13,	// (0x0002e111) bg_ai5_widget_pane_g6

0x7c1f,	// (0x0002e11d) bg_ai5_widget_pane_g7_ParamLimits

0x7c1f,	// (0x0002e11d) bg_ai5_widget_pane_g7

0x7c2b,	// (0x0002e129) bg_ai5_widget_pane_g8_ParamLimits

0x7c2b,	// (0x0002e129) bg_ai5_widget_pane_g8

0x7c37,	// (0x0002e135) bg_ai5_widget_pane_g9_ParamLimits

0x7c37,	// (0x0002e135) bg_ai5_widget_pane_g9

0x0008,

0xfe5f,	// (0x0003635d) bg_ai5_widget_pane_g_ParamLimits

0xfe5f,	// (0x0003635d) bg_ai5_widget_pane_g

0x7c6f,	// (0x0002e16d) cell_shortcut_ai5_widget_pane_ParamLimits

0x7c6f,	// (0x0002e16d) cell_shortcut_ai5_widget_pane

0x03c2,	// (0x000268c0) bg_cell_shortcut_ai5_widget_pane

0x7c82,	// (0x0002e180) cell_grid_ai5_widget_pane_g1

0x03c2,	// (0x000268c0) highlight_cell_shortcut_ai5_widget_pane

0x14b4,	// (0x000279b2) ai5_sk_left_pane_g1

0x7c8b,	// (0x0002e189) ai5_sk_left_pane_g2

0x7c93,	// (0x0002e191) ai5_sk_left_pane_g3

0x7c9b,	// (0x0002e199) ai5_sk_left_pane_g4

0x0003,

0xfe72,	// (0x00036370) ai5_sk_left_pane_g

0x7ca3,	// (0x0002e1a1) ai5_sk_left_pane_t1

0x14ac,	// (0x000279aa) ai5_sk_right_pane_g1

0x7cb1,	// (0x0002e1af) ai5_sk_right_pane_g2

0x7cb9,	// (0x0002e1b7) ai5_sk_right_pane_g3

0x7cc1,	// (0x0002e1bf) ai5_sk_right_pane_g4

0x0003,

0xfe7b,	// (0x00036379) ai5_sk_right_pane_g

0x7cc9,	// (0x0002e1c7) ai5_sk_right_pane_t1

0x14ac,	// (0x000279aa) ai5_sk_middle_pane_g1

0x14b4,	// (0x000279b2) ai5_sk_middle_pane_g2

0x14cc,	// (0x000279ca) ai5_sk_middle_pane_g3

0x7cb9,	// (0x0002e1b7) ai5_sk_middle_pane_g4

0x7c93,	// (0x0002e191) ai5_sk_middle_pane_g5

0x7cd7,	// (0x0002e1d5) ai5_sk_middle_pane_g6

0xe49c,	// (0x0003499a) ai5_sk_middle_pane_g7

0x0006,

0xfe84,	// (0x00036382) ai5_sk_middle_pane_g

0xb2e2,	// (0x000317e0) aid_touch_area_size_lc0_ParamLimits

0xb2e2,	// (0x000317e0) aid_touch_area_size_lc0

0x1e63,	// (0x00028361) cell_hwr_candidate_pane_t1_ParamLimits

0x0fac,	// (0x000274aa) aid_touch_navi_pane

0xb588,	// (0x00031a86) status_dt_navi_pane_ParamLimits

0xb588,	// (0x00031a86) status_dt_navi_pane

0xb5a0,	// (0x00031a9e) status_dt_sta_pane_ParamLimits

0xb5a0,	// (0x00031a9e) status_dt_sta_pane

0xe4a4,	// (0x000349a2) dt_sta_controll_pane

0xe4b1,	// (0x000349af) dt_sta_indi_pane

0xe4be,	// (0x000349bc) dt_sta_title_pane

0x9f74,	// (0x00030472) bg_dt_sta_indi_pane_ParamLimits

0x9f74,	// (0x00030472) bg_dt_sta_indi_pane

0xe4d0,	// (0x000349ce) dt_sta_battery_pane

0xe4d8,	// (0x000349d6) dt_sta_indi_pane_g1

0xe4e1,	// (0x000349df) dt_sta_indi_pane_g2

0xe4ea,	// (0x000349e8) dt_sta_indi_pane_g3

0x0002,

0xfe93,	// (0x00036391) dt_sta_indi_pane_g

0xe4f3,	// (0x000349f1) dt_sta_signal_pane

0xca15,	// (0x00032f13) bg_dt_sta_title_pane_ParamLimits

0xca15,	// (0x00032f13) bg_dt_sta_title_pane

0xe4fc,	// (0x000349fa) dt_sta_title_pane_g1

0xe504,	// (0x00034a02) dt_sta_title_pane_t1_ParamLimits

0xe504,	// (0x00034a02) dt_sta_title_pane_t1

0x9912,	// (0x0002fe10) bg_dt_sta_control_pane

0xe519,	// (0x00034a17) dt_sta_controll_pane_g1

0xe522,	// (0x00034a20) bg_dt_sta_title_pane_g1

0xe52b,	// (0x00034a29) bg_dt_sta_title_pane_g2

0xe534,	// (0x00034a32) bg_dt_sta_title_pane_g3

0x0002,

0xfe9a,	// (0x00036398) bg_dt_sta_title_pane_g

0x4e43,	// (0x0002b341) bg_dt_sta_indi_pane_g1

0x7d85,	// (0x0002e283) dt_sta_signal_pane_g1

0x7d8d,	// (0x0002e28b) dt_sta_signal_pane_g2

0x0001,

0xfea1,	// (0x0003639f) dt_sta_signal_pane_g

0x7d95,	// (0x0002e293) dt_sta_battery_pane_g1

0x7d9e,	// (0x0002e29c) dt_sta_battery_pane_t1

0x4e43,	// (0x0002b341) bg_dt_sta_control_pane_g1

0xcf79,	// (0x00033477) fep_china_uni_eep_pane

0xcf81,	// (0x0003347f) fep_china_uni_entry_pane_ParamLimits

0xcf91,	// (0x0003348f) popup_fep_china_uni_window_g1_ParamLimits

0xcfa1,	// (0x0003349f) popup_fep_china_uni_window_g2_ParamLimits

0xcfa1,	// (0x0003349f) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x00035c1b) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x00035c1b) popup_fep_china_uni_window_g

0x7dad,	// (0x0002e2ab) fep_china_uni_eep_pane_g1

0x7db5,	// (0x0002e2b3) fep_china_uni_eep_pane_t1

0x7354,	// (0x0002d852) aid_touch_area_size_smil_player

0x1104,	// (0x00027602) lc0_clock_pane

0x1303,	// (0x00027801) status_pane_g5_ParamLimits

0x1303,	// (0x00027801) status_pane_g5

0xad37,	// (0x00031235) popup_keymap_window

0x12c1,	// (0x000277bf) status_icon_pane

0x7a20,	// (0x0002df1e) cell_ai5_widget_pane_g3_ParamLimits

0x7a37,	// (0x0002df35) cell_ai5_widget_pane_g4_ParamLimits

0x7a43,	// (0x0002df41) cell_ai5_widget_pane_g5_ParamLimits

0x7a67,	// (0x0002df65) cell_ai5_widget_pane_g8_ParamLimits

0x7a67,	// (0x0002df65) cell_ai5_widget_pane_g8

0x7a7b,	// (0x0002df79) cell_ai5_widget_pane_g9_ParamLimits

0x7a7b,	// (0x0002df79) cell_ai5_widget_pane_g9

0x7a8f,	// (0x0002df8d) cell_ai5_widget_pane_g10_ParamLimits

0x7a8f,	// (0x0002df8d) cell_ai5_widget_pane_g10

0x7dc4,	// (0x0002e2c2) status_icon_pane_g1

0x9912,	// (0x0002fe10) bg_popup_sub_pane_cp13

0x7dcc,	// (0x0002e2ca) popup_keymap_window_t1

0xaa42,	// (0x00030f40) control_pane_g6_ParamLimits

0xaa42,	// (0x00030f40) control_pane_g6

0xaa4f,	// (0x00030f4d) control_pane_g7_ParamLimits

0xaa4f,	// (0x00030f4d) control_pane_g7

0xaa5c,	// (0x00030f5a) control_pane_g8_ParamLimits

0xaa5c,	// (0x00030f5a) control_pane_g8

0xe4a4,	// (0x000349a2) dt_sta_controll_pane_ParamLimits

0xe4b1,	// (0x000349af) dt_sta_indi_pane_ParamLimits

0xe4be,	// (0x000349bc) dt_sta_title_pane_ParamLimits

0xa499,	// (0x00030997) aid_size_touch_scroll_bar_cale

0xf1e5,	// (0x000356e3) popup_discreet_window_ParamLimits

0xf1e5,	// (0x000356e3) popup_discreet_window

0x9a60,	// (0x0002ff5e) popup_sk_window

0x2e4f,	// (0x0002934d) bg_popup_sub_pane_cp28_ParamLimits

0x2e4f,	// (0x0002934d) bg_popup_sub_pane_cp28

0x7dda,	// (0x0002e2d8) popup_discreet_window_g1_ParamLimits

0x7dda,	// (0x0002e2d8) popup_discreet_window_g1

0x7dfa,	// (0x0002e2f8) popup_discreet_window_t1_ParamLimits

0x7dfa,	// (0x0002e2f8) popup_discreet_window_t1

0x7e18,	// (0x0002e316) popup_discreet_window_t2_ParamLimits

0x7e18,	// (0x0002e316) popup_discreet_window_t2

0x0002,

0xfea6,	// (0x000363a4) popup_discreet_window_t_ParamLimits

0xfea6,	// (0x000363a4) popup_discreet_window_t

0x27d5,	// (0x00028cd3) popup_sk_window_g1

0x27df,	// (0x00028cdd) popup_sk_window_g2

0x0001,

0xfead,	// (0x000363ab) popup_sk_window_g

0x27e9,	// (0x00028ce7) popup_sk_window_t1

0x27f9,	// (0x00028cf7) popup_sk_window_t1_copy1

0x7a10,	// (0x0002df0e) cell_ai5_widget_pane_g2_ParamLimits

0x7b69,	// (0x0002e067) cell_ai5_widget_pane_t9_ParamLimits

0x7b69,	// (0x0002e067) cell_ai5_widget_pane_t9

0x9912,	// (0x0002fe10) main_fep_fshwr2_pane

0xc81b,	// (0x00032d19) aid_fshwr2_btn_pane

0xc82c,	// (0x00032d2a) aid_fshwr2_syb_pane

0xc83d,	// (0x00032d3b) aid_fshwr2_txt_pane

0xc849,	// (0x00032d47) fshwr2_func_candi_pane

0xc86a,	// (0x00032d68) fshwr2_hwr_syb_pane

0xc887,	// (0x00032d85) fshwr2_icf_pane

0x9912,	// (0x0002fe10) fshwr2_icf_bg_pane

0x287b,	// (0x00028d79) fshwr2_icf_pane_t1_ParamLimits

0x287b,	// (0x00028d79) fshwr2_icf_pane_t1

0xcef7,	// (0x000333f5) fshwr2_func_candi_pane_g1

0xe53d,	// (0x00034a3b) fshwr2_func_candi_row_pane_ParamLimits

0xe53d,	// (0x00034a3b) fshwr2_func_candi_row_pane

0xc8b3,	// (0x00032db1) cell_fshwr2_syb_pane_ParamLimits

0xc8b3,	// (0x00032db1) cell_fshwr2_syb_pane

0x50be,	// (0x0002b5bc) fshwr2_hwr_syb_pane_g1_ParamLimits

0x50be,	// (0x0002b5bc) fshwr2_hwr_syb_pane_g1

0x9912,	// (0x0002fe10) bg_popup_call_pane_cp01

0xc8c9,	// (0x00032dc7) fshwr2_func_candi_cell_pane_ParamLimits

0xc8c9,	// (0x00032dc7) fshwr2_func_candi_cell_pane

0xe54d,	// (0x00034a4b) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe54d,	// (0x00034a4b) fshwr2_func_candi_cell_bg_pane

0xc8f9,	// (0x00032df7) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc8f9,	// (0x00032df7) fshwr2_func_candi_cell_pane_g1

0xc928,	// (0x00032e26) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc928,	// (0x00032e26) fshwr2_func_candi_cell_pane_t1

0x9912,	// (0x0002fe10) bg_button_pane_cp08

0x7e86,	// (0x0002e384) cell_fshwr2_syb_bg_pane

0xc93b,	// (0x00032e39) cell_fshwr2_syb_bg_pane_g1

0xc943,	// (0x00032e41) cell_fshwr2_syb_bg_pane_t1

0xca15,	// (0x00032f13) main_tmo_pane

0xbb2c,	// (0x0003202a) uni_indicator_pane_g1_ParamLimits

0xbb42,	// (0x00032040) uni_indicator_pane_g2_ParamLimits

0xbb58,	// (0x00032056) uni_indicator_pane_g3_ParamLimits

0xbb6d,	// (0x0003206b) uni_indicator_pane_g4_ParamLimits

0xbb6d,	// (0x0003206b) uni_indicator_pane_g4

0x39c8,	// (0x00029ec6) uni_indicator_pane_g5_ParamLimits

0x39c8,	// (0x00029ec6) uni_indicator_pane_g5

0x39c8,	// (0x00029ec6) uni_indicator_pane_g6_ParamLimits

0x39c8,	// (0x00029ec6) uni_indicator_pane_g6

0xf91c,	// (0x00035e1a) uni_indicator_pane_g_ParamLimits

0xd589,	// (0x00033a87) popup_tmo_note_window_ParamLimits

0xd589,	// (0x00033a87) popup_tmo_note_window

0xca15,	// (0x00032f13) fshwr2_bg_pane

0xc919,	// (0x00032e17) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc919,	// (0x00032e17) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb2,	// (0x000363b0) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb2,	// (0x000363b0) fshwr2_func_candi_cell_pane_g

0x4e43,	// (0x0002b341) bg_popup_window_pane_cp01

0x2927,	// (0x00028e25) bg_popup_window_pane_g1_cp01

0x7e8e,	// (0x0002e38c) bg_popup_window_pane_cp22_ParamLimits

0x7e8e,	// (0x0002e38c) bg_popup_window_pane_cp22

0x7e9c,	// (0x0002e39a) listscroll_tmo_link_pane_ParamLimits

0x7e9c,	// (0x0002e39a) listscroll_tmo_link_pane

0x7edc,	// (0x0002e3da) popup_tmo_note_window_g1_ParamLimits

0x7edc,	// (0x0002e3da) popup_tmo_note_window_g1

0x7ee9,	// (0x0002e3e7) tmo_note_info_pane_ParamLimits

0x7ee9,	// (0x0002e3e7) tmo_note_info_pane

0xe559,	// (0x00034a57) list_tmo_note_info_pane_g1_ParamLimits

0xe559,	// (0x00034a57) list_tmo_note_info_pane_g1

0x7f1a,	// (0x0002e418) list_tmo_note_info_pane_g2_ParamLimits

0x7f1a,	// (0x0002e418) list_tmo_note_info_pane_g2

0x0001,

0xfeb7,	// (0x000363b5) list_tmo_note_info_pane_g_ParamLimits

0xfeb7,	// (0x000363b5) list_tmo_note_info_pane_g

0x7f36,	// (0x0002e434) list_tmo_note_info_text_pane_ParamLimits

0x7f36,	// (0x0002e434) list_tmo_note_info_text_pane

0x7fbb,	// (0x0002e4b9) list_tmo_link_pane

0x7fc8,	// (0x0002e4c6) scroll_pane_cp20

0x7fd5,	// (0x0002e4d3) list_single_tmo_link_pane_ParamLimits

0x7fd5,	// (0x0002e4d3) list_single_tmo_link_pane

0x7fe5,	// (0x0002e4e3) list_single_tmo_link_pane_t1

0x7ff3,	// (0x0002e4f1) list_tmo_note_info_text_pane_t1_ParamLimits

0x7ff3,	// (0x0002e4f1) list_tmo_note_info_text_pane_t1

0xa508,	// (0x00030a06) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa508,	// (0x00030a06) aid_size_touch_scroll_bar_cp01

0x9521,	// (0x0002fa1f) aid_size_touch_slider_marker

0x9a50,	// (0x0002ff4e) popup_settings_window_ParamLimits

0x9a50,	// (0x0002ff4e) popup_settings_window

0xe9bf,	// (0x00034ebd) popup_candi_list_indi_window

0x0fac,	// (0x000274aa) aid_touch_navi_pane_ParamLimits

0x1fd4,	// (0x000284d2) rs_clock_indi_pane

0x1fdd,	// (0x000284db) sctrl_sk_bottom_pane_ParamLimits

0x1fee,	// (0x000284ec) sctrl_sk_top_pane_ParamLimits

0x20d7,	// (0x000285d5) popup_fep_tooltip_window

0x798e,	// (0x0002de8c) aid_size_cell_widget_grid_ParamLimits

0x79fb,	// (0x0002def9) cell_ai5_widget_pane_g1_ParamLimits

0x79fb,	// (0x0002def9) cell_ai5_widget_pane_g1

0xe466,	// (0x00034964) cell_ai5_widget_pane_g6_ParamLimits

0xe472,	// (0x00034970) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe35,	// (0x00036333) cell_ai5_widget_pane_g_ParamLimits

0xfe35,	// (0x00036333) cell_ai5_widget_pane_g

0x7b8d,	// (0x0002e08b) cell_ai5_widget_pane_t10_ParamLimits

0x7b8d,	// (0x0002e08b) cell_ai5_widget_pane_t10

0x7bab,	// (0x0002e0a9) grid_ai5_widget_pane_ParamLimits

0x7c43,	// (0x0002e141) cell_contacts_ai5_widget_pane_ParamLimits

0x7c43,	// (0x0002e141) cell_contacts_ai5_widget_pane

0x7e2d,	// (0x0002e32b) popup_discreet_window_t3_ParamLimits

0x7e2d,	// (0x0002e32b) popup_discreet_window_t3

0xc89f,	// (0x00032d9d) popup_fshwr2_char_preview_window_ParamLimits

0xc89f,	// (0x00032d9d) popup_fshwr2_char_preview_window

0xe570,	// (0x00034a6e) tmo_note_info_pane_t1

0xe585,	// (0x00034a83) tmo_note_info_pane_t2

0xe59e,	// (0x00034a9c) tmo_note_info_pane_t3

0x7f97,	// (0x0002e495) tmo_note_info_pane_t4

0x7fa9,	// (0x0002e4a7) tmo_note_info_pane_t5

0x0004,

0xfebc,	// (0x000363ba) tmo_note_info_pane_t

0x7fbb,	// (0x0002e4b9) list_tmo_link_pane_ParamLimits

0x7fc8,	// (0x0002e4c6) scroll_pane_cp20_ParamLimits

0x9912,	// (0x0002fe10) bg_popup_fep_char_preview_window_cp01

0x800c,	// (0x0002e50a) popup_fshwr2_char_preview_window_t1

0x801a,	// (0x0002e518) popup_candi_list_indi_window_g1

0x8023,	// (0x0002e521) bg_cell_contacts_ai5_widget_pane

0x802f,	// (0x0002e52d) cell_contacts_ai5_widget_pane_g1

0x8044,	// (0x0002e542) cell_contacts_ai5_widget_pane_g2

0x8050,	// (0x0002e54e) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec7,	// (0x000363c5) cell_contacts_ai5_widget_pane_g

0x805c,	// (0x0002e55a) cell_contacts_ai5_widget_pane_t1

0xca15,	// (0x00032f13) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe618,	// (0x00034b16) settings_container_pane

0x03c2,	// (0x000268c0) listscroll_set_pane_copy1

0x4564,	// (0x0002aa62) scroll_pane_cp121_copy1

0x80df,	// (0x0002e5dd) set_content_pane_copy1

0xe624,	// (0x00034b22) aid_height_set_list_copy1_ParamLimits

0xe624,	// (0x00034b22) aid_height_set_list_copy1

0x3bc8,	// (0x0002a0c6) aid_size_parent_copy1_ParamLimits

0x3bc8,	// (0x0002a0c6) aid_size_parent_copy1

0xe630,	// (0x00034b2e) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe630,	// (0x00034b2e) button_value_adjust_pane_cp6_copy1

0x0933,	// (0x00026e31) list_highlight_pane_cp2_copy1_ParamLimits

0x0933,	// (0x00026e31) list_highlight_pane_cp2_copy1

0xe644,	// (0x00034b42) list_set_pane_copy1_ParamLimits

0xe644,	// (0x00034b42) list_set_pane_copy1

0xe5b3,	// (0x00034ab1) main_pane_set_t1_copy1_ParamLimits

0xe5b3,	// (0x00034ab1) main_pane_set_t1_copy1

0xe5ed,	// (0x00034aeb) main_pane_set_t2_copy1_ParamLimits

0xe5ed,	// (0x00034aeb) main_pane_set_t2_copy1

0xe70b,	// (0x00034c09) main_pane_set_t3_copy1

0xe719,	// (0x00034c17) main_pane_set_t4_copy1

0xe60c,	// (0x00034b0a) set_content_pane_g1_copy1_ParamLimits

0xe60c,	// (0x00034b0a) set_content_pane_g1_copy1

0xe727,	// (0x00034c25) setting_code_pane_copy1

0x81f2,	// (0x0002e6f0) setting_slider_graphic_pane_copy1

0x81f2,	// (0x0002e6f0) setting_slider_pane_copy1

0x81f2,	// (0x0002e6f0) setting_text_pane_copy1

0x81f2,	// (0x0002e6f0) setting_volume_pane_copy1

0xe727,	// (0x00034c25) settings_code_pane_cp2_copy1

0xe72f,	// (0x00034c2d) settings_code_pane_cp_copy1_ParamLimits

0xe72f,	// (0x00034c2d) settings_code_pane_cp_copy1

0xc952,	// (0x00032e50) volume_set_pane_copy1

0xe743,	// (0x00034c41) volume_set_pane_g10_copy1

0xe74f,	// (0x00034c4d) volume_set_pane_g1_copy1

0xe759,	// (0x00034c57) volume_set_pane_g2_copy1

0xe763,	// (0x00034c61) volume_set_pane_g3_copy1

0xe76d,	// (0x00034c6b) volume_set_pane_g4_copy1

0xe777,	// (0x00034c75) volume_set_pane_g5_copy1

0xe781,	// (0x00034c7f) volume_set_pane_g6_copy1

0xe78b,	// (0x00034c89) volume_set_pane_g7_copy1

0xe795,	// (0x00034c93) volume_set_pane_g8_copy1

0xe79f,	// (0x00034c9d) volume_set_pane_g9_copy1

0x9c8d,	// (0x0003018b) bg_set_opt_pane_cp_copy1_ParamLimits

0x9c8d,	// (0x0003018b) bg_set_opt_pane_cp_copy1

0x293c,	// (0x00028e3a) setting_slider_pane_t1_copy1_ParamLimits

0x293c,	// (0x00028e3a) setting_slider_pane_t1_copy1

0xc95e,	// (0x00032e5c) setting_slider_pane_t2_copy1_ParamLimits

0xc95e,	// (0x00032e5c) setting_slider_pane_t2_copy1

0xc978,	// (0x00032e76) setting_slider_pane_t3_copy1_ParamLimits

0xc978,	// (0x00032e76) setting_slider_pane_t3_copy1

0xc990,	// (0x00032e8e) slider_set_pane_copy1_ParamLimits

0xc990,	// (0x00032e8e) slider_set_pane_copy1

0xca70,	// (0x00032f6e) set_opt_bg_pane_g1_copy2

0xca78,	// (0x00032f76) set_opt_bg_pane_g2_copy2

0x8274,	// (0x0002e772) set_opt_bg_pane_g3_copy2

0xca88,	// (0x00032f86) set_opt_bg_pane_g4_copy2

0xca90,	// (0x00032f8e) set_opt_bg_pane_g5_copy2

0xca98,	// (0x00032f96) set_opt_bg_pane_g6_copy2

0xe7a9,	// (0x00034ca7) set_opt_bg_pane_g7_copy2

0x8288,	// (0x0002e786) set_opt_bg_pane_g8_copy2

0x8292,	// (0x0002e790) set_opt_bg_pane_g9_copy2

0x29a2,	// (0x00028ea0) aid_size_touch_slider_mark_copy1_ParamLimits

0x29a2,	// (0x00028ea0) aid_size_touch_slider_mark_copy1

0x829c,	// (0x0002e79a) slider_set_pane_g1_copy1

0x29b6,	// (0x00028eb4) slider_set_pane_g2_copy1

0x1aa9,	// (0x00027fa7) slider_set_pane_g3_copy1_ParamLimits

0x1aa9,	// (0x00027fa7) slider_set_pane_g3_copy1

0x1abd,	// (0x00027fbb) slider_set_pane_g4_copy1_ParamLimits

0x1abd,	// (0x00027fbb) slider_set_pane_g4_copy1

0x1ad5,	// (0x00027fd3) slider_set_pane_g5_copy1_ParamLimits

0x1ad5,	// (0x00027fd3) slider_set_pane_g5_copy1

0x1aa9,	// (0x00027fa7) slider_set_pane_g6_copy1_ParamLimits

0x1aa9,	// (0x00027fa7) slider_set_pane_g6_copy1

0xc9a6,	// (0x00032ea4) slider_set_pane_g7_copy1_ParamLimits

0xc9a6,	// (0x00032ea4) slider_set_pane_g7_copy1

0x9a0c,	// (0x0002ff0a) bg_set_opt_pane_cp2_copy1

0x82a5,	// (0x0002e7a3) setting_slider_graphic_pane_g1_copy1

0xe7b3,	// (0x00034cb1) setting_slider_graphic_pane_t1_copy1

0xe7c3,	// (0x00034cc1) setting_slider_graphic_pane_t2_copy1

0xe7d3,	// (0x00034cd1) slider_set_pane_cp_copy1

0x82de,	// (0x0002e7dc) input_focus_pane_cp1_copy1

0x82e7,	// (0x0002e7e5) list_set_text_pane_copy1

0x82ef,	// (0x0002e7ed) setting_text_pane_g1_copy1

0xf2f9,	// (0x000357f7) set_text_pane_t1_copy1

0x82de,	// (0x0002e7dc) input_focus_pane_cp2_copy1

0x82ef,	// (0x0002e7ed) setting_code_pane_g1_copy1

0xe7db,	// (0x00034cd9) setting_code_pane_t1_copy1

0xe7e9,	// (0x00034ce7) list_set_graphic_pane_copy1

0x9a0c,	// (0x0002ff0a) bg_set_opt_pane_cp4_copy1

0xa7c5,	// (0x00030cc3) list_set_graphic_pane_g1_copy1_ParamLimits

0xa7c5,	// (0x00030cc3) list_set_graphic_pane_g1_copy1

0xe7fb,	// (0x00034cf9) list_set_graphic_pane_g2_copy1

0xa7dd,	// (0x00030cdb) list_set_graphic_pane_t1_copy1_ParamLimits

0xa7dd,	// (0x00030cdb) list_set_graphic_pane_t1_copy1

0x4e43,	// (0x0002b341) rs_clock_indi_pane_g1

0x8320,	// (0x0002e81e) rs_clock_indi_pane_t1

0x832e,	// (0x0002e82c) rs_indi_pane

0x8336,	// (0x0002e834) rs_indi_pane_g1

0x833f,	// (0x0002e83d) rs_indi_pane_g2

0x8348,	// (0x0002e846) rs_indi_pane_g3

0x0002,

0xfece,	// (0x000363cc) rs_indi_pane_g

0x03c2,	// (0x000268c0) bg_popup_preview_window_pane_cp03

0x8351,	// (0x0002e84f) popup_fep_tooltip_window_t1

0x5afa,	// (0x0002bff8) popup_note2_window_g2_ParamLimits

0x5afa,	// (0x0002bff8) popup_note2_window_g2

0x0001,

0xfc67,	// (0x00036165) popup_note2_window_g_ParamLimits

0xfc67,	// (0x00036165) popup_note2_window_g

0x6002,	// (0x0002c500) bg_popup_sub_pane_cp11_ParamLimits

0x600f,	// (0x0002c50d) cell_ai3_links_pane_g1_ParamLimits

0x6026,	// (0x0002c524) cell_ai3_links_pane_t1

0xf2f9,	// (0x000357f7) set_text_pane_t1_copy1_ParamLimits

0xa85c,	// (0x00030d5a) cell_graphic_popup_pane_cp2_ParamLimits

0xa85c,	// (0x00030d5a) cell_graphic_popup_pane_cp2

0xe803,	// (0x00034d01) cell_graphic_popup_pane_g1_cp2

0xa2ac,	// (0x000307aa) cell_graphic_popup_pane_g2_cp2

0x8367,	// (0x0002e865) cell_graphic_popup_pane_g3_cp2

0x836f,	// (0x0002e86d) cell_graphic_popup_pane_t2_cp2

0xa2bd,	// (0x000307bb) grid_highlight_pane_cp3_cp2

0xcd19,	// (0x00033217) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xca15,	// (0x00032f13) main_tmo_pane_ParamLimits

0xd57d,	// (0x00033a7b) popup_tmo_big_image_note_window

0x79ea,	// (0x0002dee8) cell_ai5_widget_list_pane

0x79f2,	// (0x0002def0) cell_ai5_widget_lrg_icon_pane

0xe570,	// (0x00034a6e) tmo_note_info_pane_t1_ParamLimits

0xe585,	// (0x00034a83) tmo_note_info_pane_t2_ParamLimits

0xe59e,	// (0x00034a9c) tmo_note_info_pane_t3_ParamLimits

0x7f97,	// (0x0002e495) tmo_note_info_pane_t4_ParamLimits

0x7fa9,	// (0x0002e4a7) tmo_note_info_pane_t5_ParamLimits

0xfebc,	// (0x000363ba) tmo_note_info_pane_t_ParamLimits

0xe618,	// (0x00034b16) settings_container_pane_ParamLimits

0x82d6,	// (0x0002e7d4) indicator_popup_pane_cp5

0x82d6,	// (0x0002e7d4) indicator_popup_pane_cp6

0xe7e9,	// (0x00034ce7) list_set_graphic_pane_copy1_ParamLimits

0x9912,	// (0x0002fe10) bg_popup_window_pane_cp23

0x837d,	// (0x0002e87b) popup_tmo_big_image_note_window_g1

0x8389,	// (0x0002e887) popup_tmo_big_image_note_window_t1

0x8399,	// (0x0002e897) popup_tmo_big_image_note_window_t2

0x83a9,	// (0x0002e8a7) popup_tmo_big_image_note_window_t3

0x0002,

0xfed5,	// (0x000363d3) popup_tmo_big_image_note_window_t

0x4e43,	// (0x0002b341) cell_ai5_widget_lrg_icon_pane_g1

0x83b9,	// (0x0002e8b7) cell_ai5_widget_lrg_icon_pane_t1

0x83c7,	// (0x0002e8c5) cell_ai5_widget_list_row_pane_ParamLimits

0x83c7,	// (0x0002e8c5) cell_ai5_widget_list_row_pane

0x83df,	// (0x0002e8dd) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x83df,	// (0x0002e8dd) cell_ai5_widget_list_row_pane_g1

0x83ec,	// (0x0002e8ea) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x83ec,	// (0x0002e8ea) cell_ai5_widget_list_row_pane_t1

0x8417,	// (0x0002e915) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x8417,	// (0x0002e915) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedc,	// (0x000363da) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedc,	// (0x000363da) cell_ai5_widget_list_row_pane_t

0x9912,	// (0x0002fe10) main_fep_vtchi_ss_pane

0x845b,	// (0x0002e959) popup_fep_char_pre_window

0x8463,	// (0x0002e961) popup_fep_ituss_window

0x8484,	// (0x0002e982) popup_fep_vkbss_window

0x84a5,	// (0x0002e9a3) grid_vkbss_keypad_pane_ParamLimits

0x84a5,	// (0x0002e9a3) grid_vkbss_keypad_pane

0x84b5,	// (0x0002e9b3) ituss_keypad_pane

0x29e0,	// (0x00028ede) aid_vkbss_key_offset_ParamLimits

0x29e0,	// (0x00028ede) aid_vkbss_key_offset

0x29ec,	// (0x00028eea) cell_vkbss_key_pane_ParamLimits

0x29ec,	// (0x00028eea) cell_vkbss_key_pane

0x84c4,	// (0x0002e9c2) bg_cell_vkbss_key_g1_ParamLimits

0x84c4,	// (0x0002e9c2) bg_cell_vkbss_key_g1

0x84d0,	// (0x0002e9ce) cell_vkbss_key_3p_pane_ParamLimits

0x84d0,	// (0x0002e9ce) cell_vkbss_key_3p_pane

0x84ea,	// (0x0002e9e8) cell_vkbss_key_g1_ParamLimits

0x84ea,	// (0x0002e9e8) cell_vkbss_key_g1

0x8504,	// (0x0002ea02) cell_vkbss_key_t1_ParamLimits

0x8504,	// (0x0002ea02) cell_vkbss_key_t1

0x2a02,	// (0x00028f00) cell_ituss_key_pane_ParamLimits

0x2a02,	// (0x00028f00) cell_ituss_key_pane

0x852f,	// (0x0002ea2d) bg_cell_ituss_key_g1_ParamLimits

0x852f,	// (0x0002ea2d) bg_cell_ituss_key_g1

0x853b,	// (0x0002ea39) cell_ituss_key_pane_g1_ParamLimits

0x853b,	// (0x0002ea39) cell_ituss_key_pane_g1

0x2a13,	// (0x00028f11) cell_ituss_key_pane_g2_ParamLimits

0x2a13,	// (0x00028f11) cell_ituss_key_pane_g2

0x0002,

0xfee3,	// (0x000363e1) cell_ituss_key_pane_g_ParamLimits

0xfee3,	// (0x000363e1) cell_ituss_key_pane_g

0x2a3f,	// (0x00028f3d) cell_ituss_key_t1_ParamLimits

0x2a3f,	// (0x00028f3d) cell_ituss_key_t1

0x2a79,	// (0x00028f77) cell_ituss_key_t2_ParamLimits

0x2a79,	// (0x00028f77) cell_ituss_key_t2

0x2aaa,	// (0x00028fa8) cell_ituss_key_t3_ParamLimits

0x2aaa,	// (0x00028fa8) cell_ituss_key_t3

0x2a79,	// (0x00028f77) cell_ituss_key_t4_ParamLimits

0x2a79,	// (0x00028f77) cell_ituss_key_t4

0x0004,

0xfeea,	// (0x000363e8) cell_ituss_key_t_ParamLimits

0xfeea,	// (0x000363e8) cell_ituss_key_t

0x8561,	// (0x0002ea5f) cell_vkbss_key_3p_pane_g1

0x8569,	// (0x0002ea67) cell_vkbss_key_3p_pane_g2

0x8571,	// (0x0002ea6f) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef5,	// (0x000363f3) cell_vkbss_key_3p_pane_g

0x9912,	// (0x0002fe10) bg_popup_fep_char_preview_window_cp02

0x2aed,	// (0x00028feb) popup_fep_char_pre_window_t1

0xe45c,	// (0x0003495a) main_ai5_sk_pane

0x8023,	// (0x0002e521) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x802f,	// (0x0002e52d) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8044,	// (0x0002e542) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8050,	// (0x0002e54e) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec7,	// (0x000363c5) cell_contacts_ai5_widget_pane_g_ParamLimits

0x805c,	// (0x0002e55a) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xca15,	// (0x00032f13) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe80b,	// (0x00034d09) main_ai5_sk_pane_g1

0x2c87,	// (0x00029185) popup_query_code_window_g1

0x8479,	// (0x0002e977) popup_fep_vkb_icf_pane

0x848f,	// (0x0002e98d) popup_fep_vtchi_icf_pane

0x8582,	// (0x0002ea80) bg_icf_pane

0x858e,	// (0x0002ea8c) list_vkb_icf_pane

0x859a,	// (0x0002ea98) bg_icf_pane_cp01

0x85ad,	// (0x0002eaab) vtchi_icf_list_pane

0x85be,	// (0x0002eabc) list_vkb_icf_pane_t1_ParamLimits

0x85be,	// (0x0002eabc) list_vkb_icf_pane_t1

0x85d4,	// (0x0002ead2) vtchi_icf_list_pane_t1_ParamLimits

0x85d4,	// (0x0002ead2) vtchi_icf_list_pane_t1

0x8463,	// (0x0002e961) popup_fep_ituss_window_ParamLimits

0x848f,	// (0x0002e98d) popup_fep_vtchi_icf_pane_ParamLimits

0x84b5,	// (0x0002e9b3) ituss_keypad_pane_ParamLimits

0x29d4,	// (0x00028ed2) ituss_sks_pane

0x8582,	// (0x0002ea80) bg_icf_pane_ParamLimits

0x843f,	// (0x0002e93d) icf_edit_indi_pane_ParamLimits

0x843f,	// (0x0002e93d) icf_edit_indi_pane

0x858e,	// (0x0002ea8c) list_vkb_icf_pane_ParamLimits

0x859a,	// (0x0002ea98) bg_icf_pane_cp01_ParamLimits

0x844e,	// (0x0002e94c) icf_edit_indi_pane_cp01_ParamLimits

0x844e,	// (0x0002e94c) icf_edit_indi_pane_cp01

0x85b5,	// (0x0002eab3) vtchi_query_pane

0x50be,	// (0x0002b5bc) icf_edit_indi_pane_g1_ParamLimits

0x50be,	// (0x0002b5bc) icf_edit_indi_pane_g1

0x8643,	// (0x0002eb41) icf_edit_indi_pane_g2_ParamLimits

0x8643,	// (0x0002eb41) icf_edit_indi_pane_g2

0x0001,

0xff0d,	// (0x0003640b) icf_edit_indi_pane_g_ParamLimits

0xff0d,	// (0x0003640b) icf_edit_indi_pane_g

0x8652,	// (0x0002eb50) icf_edit_indi_pane_t1

0x85ec,	// (0x0002eaea) bg_input_focus_pane_cp042

0xa490,	// (0x0003098e) vtchi_button_pane

0x85f5,	// (0x0002eaf3) vtchi_query_pane_t1

0x8603,	// (0x0002eb01) vtchi_query_pane_t2

0x8611,	// (0x0002eb0f) vtchi_query_pane_t3

0x0002,

0xfefc,	// (0x000363fa) vtchi_query_pane_t

0x9912,	// (0x0002fe10) bg_button_pane_cp13

0x861f,	// (0x0002eb1d) vtchi_button_pane_g1

0x2afc,	// (0x00028ffa) ituss_sks_pane_g1

0x2b07,	// (0x00029005) ituss_sks_pane_g2

0x0001,

0xff03,	// (0x00036401) ituss_sks_pane_g

0x8627,	// (0x0002eb25) ituss_sks_pane_t1

0x8635,	// (0x0002eb33) ituss_sks_pane_t2

0x0001,

0xff08,	// (0x00036406) ituss_sks_pane_t

0x48f3,	// (0x0002adf1) indicator_nsta_pane_cp_g1

0x48fc,	// (0x0002adfa) indicator_nsta_pane_cp_g2

0x4904,	// (0x0002ae02) indicator_nsta_pane_cp_g3

0x490c,	// (0x0002ae0a) indicator_nsta_pane_cp_g4

0x4914,	// (0x0002ae12) indicator_nsta_pane_cp_g5

0x491c,	// (0x0002ae1a) indicator_nsta_pane_cp_g6

0x0005,

0xfab1,	// (0x00035faf) indicator_nsta_pane_cp_g

0xdf7f,	// (0x0003447d) cell_graphic2_pane_t2_ParamLimits

0xdf7f,	// (0x0003447d) cell_graphic2_pane_t2

0x0001,

0xfdbe,	// (0x000362bc) cell_graphic2_pane_t_ParamLimits

0xfdbe,	// (0x000362bc) cell_graphic2_pane_t

0xdfb5,	// (0x000344b3) cell_graphic2_control_pane_t1

0xa751,	// (0x00030c4f) signal_pane_g3_ParamLimits

0xa751,	// (0x00030c4f) signal_pane_g3

0xa765,	// (0x00030c63) signal_pane_g4_ParamLimits

0xa765,	// (0x00030c63) signal_pane_g4

0x8429,	// (0x0002e927) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x8429,	// (0x0002e927) cell_ai5_widget_list_row_pane_t3

0x854f,	// (0x0002ea4d) cell_ituss_key_pane_t1_ParamLimits

0x854f,	// (0x0002ea4d) cell_ituss_key_pane_t1

0x16ae,	// (0x00027bac) form_field_data_wide_pane_vc_t2_ParamLimits

0x16ae,	// (0x00027bac) form_field_data_wide_pane_vc_t2

0x16c2,	// (0x00027bc0) form_field_data_wide_pane_vc_t3_ParamLimits

0x16c2,	// (0x00027bc0) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x00035d02) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x00035d02) form_field_data_wide_pane_vc_t

0x45a4,	// (0x0002aaa2) form_field_slider_wide_pane_vc_t3_ParamLimits

0x45a4,	// (0x0002aaa2) form_field_slider_wide_pane_vc_t3

0x467a,	// (0x0002ab78) form_field_popup_wide_pane_vc_t2_ParamLimits

0x467a,	// (0x0002ab78) form_field_popup_wide_pane_vc_t2

0x4691,	// (0x0002ab8f) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4691,	// (0x0002ab8f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa0,	// (0x00035f9e) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa0,	// (0x00035f9e) form_field_popup_wide_pane_vc_t

0xc81b,	// (0x00032d19) aid_fshwr2_btn_pane_ParamLimits

0xc82c,	// (0x00032d2a) aid_fshwr2_syb_pane_ParamLimits

0xc83d,	// (0x00032d3b) aid_fshwr2_txt_pane_ParamLimits

0xca15,	// (0x00032f13) fshwr2_bg_pane_ParamLimits

0xc849,	// (0x00032d47) fshwr2_func_candi_pane_ParamLimits

0xc86a,	// (0x00032d68) fshwr2_hwr_syb_pane_ParamLimits

0xc887,	// (0x00032d85) fshwr2_icf_pane_ParamLimits

0xedc2,	// (0x000352c0) list_double_graphic_pane_vc_g4_ParamLimits

0xedc2,	// (0x000352c0) list_double_graphic_pane_vc_g4

0x2a33,	// (0x00028f31) cell_ituss_key_pane_g3_ParamLimits

0x2a33,	// (0x00028f31) cell_ituss_key_pane_g3

0x2adb,	// (0x00028fd9) cell_ituss_key_t5_ParamLimits

0x2adb,	// (0x00028fd9) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small
