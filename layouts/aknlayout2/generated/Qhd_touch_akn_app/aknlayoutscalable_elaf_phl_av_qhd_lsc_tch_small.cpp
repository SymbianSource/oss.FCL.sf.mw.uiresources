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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x000206c2 };

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
0xbddf,	// (0x0002c4a1) Screen

0xbdeb,	// (0x0002c4ad) application_window_ParamLimits

0xbdeb,	// (0x0002c4ad) application_window

0xe3d7,	// (0x0002ea99) screen_g1

0xbe23,	// (0x0002c4e5) area_bottom_pane_ParamLimits

0xbe23,	// (0x0002c4e5) area_bottom_pane

0x0e5a,	// (0x0002151c) area_top_pane_ParamLimits

0x0e5a,	// (0x0002151c) area_top_pane

0x0eee,	// (0x000215b0) main_pane_ParamLimits

0x0eee,	// (0x000215b0) main_pane

0x31ab,	// (0x0002386d) misc_graphics

0xd6c8,	// (0x0002dd8a) battery_pane_ParamLimits

0xd6c8,	// (0x0002dd8a) battery_pane

0x5879,	// (0x00025f3b) bg_status_flat_pane_g8

0x5881,	// (0x00025f43) bg_status_flat_pane_g9

0x4c5f,	// (0x00025321) context_pane_ParamLimits

0x4c5f,	// (0x00025321) context_pane

0xd833,	// (0x0002def5) navi_pane_ParamLimits

0xd833,	// (0x0002def5) navi_pane

0xd8b1,	// (0x0002df73) signal_pane_ParamLimits

0xd8b1,	// (0x0002df73) signal_pane

0x0008,

0xf84f,	// (0x0002ff11) bg_status_flat_pane_g

0xd941,	// (0x0002e003) status_pane_g1_ParamLimits

0xd941,	// (0x0002e003) status_pane_g1

0xd957,	// (0x0002e019) status_pane_g2_ParamLimits

0xd957,	// (0x0002e019) status_pane_g2

0x4e86,	// (0x00025548) status_pane_g3_ParamLimits

0x4e86,	// (0x00025548) status_pane_g3

0x0004,

0xf77b,	// (0x0002fe3d) status_pane_g_ParamLimits

0xf77b,	// (0x0002fe3d) status_pane_g

0xd963,	// (0x0002e025) title_pane_ParamLimits

0xd963,	// (0x0002e025) title_pane

0xd9c6,	// (0x0002e088) uni_indicator_pane_ParamLimits

0xd9c6,	// (0x0002e088) uni_indicator_pane

0x4ac7,	// (0x00025189) bg_list_pane_ParamLimits

0x4ac7,	// (0x00025189) bg_list_pane

0xbb3f,	// (0x0002c201) find_pane

0x5085,	// (0x00025747) listscroll_app_pane_ParamLimits

0x5085,	// (0x00025747) listscroll_app_pane

0x4af3,	// (0x000251b5) listscroll_form_pane

0xbb47,	// (0x0002c209) listscroll_gen_pane_ParamLimits

0xbb47,	// (0x0002c209) listscroll_gen_pane

0x17c3,	// (0x00021e85) listscroll_set_pane

0x6406,	// (0x00026ac8) main_idle_act_pane

0x47c3,	// (0x00024e85) main_idle_trad_pane

0x47c3,	// (0x00024e85) main_list_empty_pane

0x4ae7,	// (0x000251a9) main_midp_pane

0x4b0d,	// (0x000251cf) main_pane_g1_ParamLimits

0x4b0d,	// (0x000251cf) main_pane_g1

0xc510,	// (0x0002cbd2) popup_ai_message_window_ParamLimits

0xc510,	// (0x0002cbd2) popup_ai_message_window

0xc5a1,	// (0x0002cc63) popup_fep_china_uni_window_ParamLimits

0xc5a1,	// (0x0002cc63) popup_fep_china_uni_window

0x18cd,	// (0x00021f8f) popup_fep_japan_candidate_window_ParamLimits

0x18cd,	// (0x00021f8f) popup_fep_japan_candidate_window

0x18ed,	// (0x00021faf) popup_fep_japan_predictive_window_ParamLimits

0x18ed,	// (0x00021faf) popup_fep_japan_predictive_window

0xc5fd,	// (0x0002ccbf) popup_find_window

0xc61a,	// (0x0002ccdc) popup_grid_graphic_window_ParamLimits

0xc61a,	// (0x0002ccdc) popup_grid_graphic_window

0x1956,	// (0x00022018) popup_large_graphic_colour_window

0xc6be,	// (0x0002cd80) popup_menu_window_ParamLimits

0xc6be,	// (0x0002cd80) popup_menu_window

0xc890,	// (0x0002cf52) popup_note_image_window

0xc856,	// (0x0002cf18) popup_note_wait_window_ParamLimits

0xc856,	// (0x0002cf18) popup_note_wait_window

0xc8a8,	// (0x0002cf6a) popup_note_window_ParamLimits

0xc8a8,	// (0x0002cf6a) popup_note_window

0xc94e,	// (0x0002d010) popup_query_code_window_ParamLimits

0xc94e,	// (0x0002d010) popup_query_code_window

0x1b9e,	// (0x00022260) popup_query_data_code_window_ParamLimits

0x1b9e,	// (0x00022260) popup_query_data_code_window

0xc988,	// (0x0002d04a) popup_query_data_window_ParamLimits

0xc988,	// (0x0002d04a) popup_query_data_window

0xca0a,	// (0x0002d0cc) popup_query_sat_info_window_ParamLimits

0xca0a,	// (0x0002d0cc) popup_query_sat_info_window

0xcaa1,	// (0x0002d163) popup_snote_single_graphic_window_ParamLimits

0xcaa1,	// (0x0002d163) popup_snote_single_graphic_window

0xcaa1,	// (0x0002d163) popup_snote_single_text_window_ParamLimits

0xcaa1,	// (0x0002d163) popup_snote_single_text_window

0x1c25,	// (0x000222e7) popup_sub_window_general

0x1d55,	// (0x00022417) popup_window_general_ParamLimits

0x1d55,	// (0x00022417) popup_window_general

0x4b1b,	// (0x000251dd) power_save_pane

0xc395,	// (0x0002ca57) control_pane_g1_ParamLimits

0xc395,	// (0x0002ca57) control_pane_g1

0xc3be,	// (0x0002ca80) control_pane_g2_ParamLimits

0xc3be,	// (0x0002ca80) control_pane_g2

0x4a8a,	// (0x0002514c) control_pane_g3_ParamLimits

0x4a8a,	// (0x0002514c) control_pane_g3

0x0007,

0xf763,	// (0x0002fe25) control_pane_g_ParamLimits

0xf763,	// (0x0002fe25) control_pane_g

0xc3ff,	// (0x0002cac1) control_pane_t1_ParamLimits

0xc3ff,	// (0x0002cac1) control_pane_t1

0xc465,	// (0x0002cb27) control_pane_t2_ParamLimits

0xc465,	// (0x0002cb27) control_pane_t2

0x0002,

0xf774,	// (0x0002fe36) control_pane_t_ParamLimits

0xf774,	// (0x0002fe36) control_pane_t

0xd575,	// (0x0002dc37) navi_navi_volume_pane_cp1

0xd57d,	// (0x0002dc3f) status_small_icon_pane

0x49bf,	// (0x00025081) status_small_pane_g1_ParamLimits

0x49bf,	// (0x00025081) status_small_pane_g1

0xd585,	// (0x0002dc47) status_small_pane_g2_ParamLimits

0xd585,	// (0x0002dc47) status_small_pane_g2

0xd591,	// (0x0002dc53) status_small_pane_g3_ParamLimits

0xd591,	// (0x0002dc53) status_small_pane_g3

0xd59d,	// (0x0002dc5f) status_small_pane_g4_ParamLimits

0xd59d,	// (0x0002dc5f) status_small_pane_g4

0xd5a9,	// (0x0002dc6b) status_small_pane_g5_ParamLimits

0xd5a9,	// (0x0002dc6b) status_small_pane_g5

0xd5b7,	// (0x0002dc79) status_small_pane_g6_ParamLimits

0xd5b7,	// (0x0002dc79) status_small_pane_g6

0x0007,

0xf752,	// (0x0002fe14) status_small_pane_g_ParamLimits

0xf752,	// (0x0002fe14) status_small_pane_g

0xd5e6,	// (0x0002dca8) status_small_pane_t1

0xd608,	// (0x0002dcca) status_small_wait_pane_ParamLimits

0xd608,	// (0x0002dcca) status_small_wait_pane

0xd41d,	// (0x0002dadf) aid_levels_signal_ParamLimits

0xd41d,	// (0x0002dadf) aid_levels_signal

0xd435,	// (0x0002daf7) signal_pane_g1_ParamLimits

0xd435,	// (0x0002daf7) signal_pane_g1

0xd450,	// (0x0002db12) signal_pane_g2_ParamLimits

0xd450,	// (0x0002db12) signal_pane_g2

0x0003,

0xf6e3,	// (0x0002fda5) signal_pane_g_ParamLimits

0xf6e3,	// (0x0002fda5) signal_pane_g

0x4294,	// (0x00024956) context_pane_g1

0xc001,	// (0x0002c6c3) title_pane_g1

0xc038,	// (0x0002c6fa) title_pane_t1

0x3253,	// (0x00023915) title_pane_t2

0x3279,	// (0x0002393b) title_pane_t3

0x0002,

0xf532,	// (0x0002fbf4) title_pane_t

0xd9ee,	// (0x0002e0b0) aid_levels_battery_ParamLimits

0xd9ee,	// (0x0002e0b0) aid_levels_battery

0xda0a,	// (0x0002e0cc) battery_pane_g1_ParamLimits

0xda0a,	// (0x0002e0cc) battery_pane_g1

0xda27,	// (0x0002e0e9) battery_pane_g2_ParamLimits

0xda27,	// (0x0002e0e9) battery_pane_g2

0x0001,

0xf786,	// (0x0002fe48) battery_pane_g_ParamLimits

0xf786,	// (0x0002fe48) battery_pane_g

0xdbe8,	// (0x0002e2aa) uni_indicator_pane_g1

0xdbfe,	// (0x0002e2c0) uni_indicator_pane_g2

0xdc14,	// (0x0002e2d6) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x0002ffb9) uni_indicator_pane_g

0x4635,	// (0x00024cf7) navi_icon_pane_ParamLimits

0x4635,	// (0x00024cf7) navi_icon_pane

0x4573,	// (0x00024c35) navi_midp_pane

0x4651,	// (0x00024d13) navi_navi_pane

0x465b,	// (0x00024d1d) navi_text_pane_ParamLimits

0x465b,	// (0x00024d1d) navi_text_pane

0xe3d7,	// (0x0002ea99) status_small_wait_pane_g1

0x36ce,	// (0x00023d90) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x0002ffb4) status_small_wait_pane_g

0x5ee0,	// (0x000265a2) navi_navi_icon_text_pane

0x5ee8,	// (0x000265aa) navi_navi_pane_g1_ParamLimits

0x5ee8,	// (0x000265aa) navi_navi_pane_g1

0x5efa,	// (0x000265bc) navi_navi_pane_g2_ParamLimits

0x5efa,	// (0x000265bc) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x0002ff82) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x0002ff82) navi_navi_pane_g

0x5f0c,	// (0x000265ce) navi_navi_tabs_pane

0x5f15,	// (0x000265d7) navi_navi_text_pane

0x5ee0,	// (0x000265a2) navi_navi_volume_pane

0x5ebc,	// (0x0002657e) navi_text_pane_t1

0x5eb0,	// (0x00026572) navi_icon_pane_g1

0x5e03,	// (0x000264c5) navi_navi_text_pane_t1

0x1ff5,	// (0x000226b7) navi_navi_volume_pane_g1

0x1ffd,	// (0x000226bf) volume_small_pane

0x5d69,	// (0x0002642b) navi_navi_icon_text_pane_g1

0x5d71,	// (0x00026433) navi_navi_icon_text_pane_t1

0x4651,	// (0x00024d13) navi_tabs_2_long_pane

0x4651,	// (0x00024d13) navi_tabs_2_pane

0x4651,	// (0x00024d13) navi_tabs_3_long_pane

0x4651,	// (0x00024d13) navi_tabs_3_pane

0x4651,	// (0x00024d13) navi_tabs_4_pane

0x1fd5,	// (0x00022697) tabs_2_active_pane_ParamLimits

0x1fd5,	// (0x00022697) tabs_2_active_pane

0x1fe5,	// (0x000226a7) tabs_2_passive_pane_ParamLimits

0x1fe5,	// (0x000226a7) tabs_2_passive_pane

0x1fa3,	// (0x00022665) tabs_3_active_pane_ParamLimits

0x1fa3,	// (0x00022665) tabs_3_active_pane

0x1fb3,	// (0x00022675) tabs_3_passive_pane_ParamLimits

0x1fb3,	// (0x00022675) tabs_3_passive_pane

0x1fc4,	// (0x00022686) tabs_3_passive_pane_cp_ParamLimits

0x1fc4,	// (0x00022686) tabs_3_passive_pane_cp

0x1f5f,	// (0x00022621) tabs_4_active_pane_ParamLimits

0x1f5f,	// (0x00022621) tabs_4_active_pane

0x1f70,	// (0x00022632) tabs_4_passive_pane_ParamLimits

0x1f70,	// (0x00022632) tabs_4_passive_pane

0x1f81,	// (0x00022643) tabs_4_passive_pane_cp_ParamLimits

0x1f81,	// (0x00022643) tabs_4_passive_pane_cp

0x1f92,	// (0x00022654) tabs_4_passive_pane_cp2_ParamLimits

0x1f92,	// (0x00022654) tabs_4_passive_pane_cp2

0x1f3b,	// (0x000225fd) tabs_2_long_active_pane_ParamLimits

0x1f3b,	// (0x000225fd) tabs_2_long_active_pane

0x1f4d,	// (0x0002260f) tabs_2_long_passive_pane_ParamLimits

0x1f4d,	// (0x0002260f) tabs_2_long_passive_pane

0x1efc,	// (0x000225be) tabs_3_long_active_pane_ParamLimits

0x1efc,	// (0x000225be) tabs_3_long_active_pane

0x1f0f,	// (0x000225d1) tabs_3_long_passive_pane_ParamLimits

0x1f0f,	// (0x000225d1) tabs_3_long_passive_pane

0x1f28,	// (0x000225ea) tabs_3_long_passive_pane_cp_ParamLimits

0x1f28,	// (0x000225ea) tabs_3_long_passive_pane_cp

0x1ea2,	// (0x00022564) volume_small_pane_g1

0x1eab,	// (0x0002256d) volume_small_pane_g2

0x1eb4,	// (0x00022576) volume_small_pane_g3

0x1ebd,	// (0x0002257f) volume_small_pane_g4

0x1ec6,	// (0x00022588) volume_small_pane_g5

0x1ecf,	// (0x00022591) volume_small_pane_g6

0x1ed8,	// (0x0002259a) volume_small_pane_g7

0x1ee1,	// (0x000225a3) volume_small_pane_g8

0x1eea,	// (0x000225ac) volume_small_pane_g9

0x1ef3,	// (0x000225b5) volume_small_pane_g10

0x0009,

0xf88c,	// (0x0002ff4e) volume_small_pane_g

0x3506,	// (0x00023bc8) bg_active_tab_pane_cp2_ParamLimits

0x3506,	// (0x00023bc8) bg_active_tab_pane_cp2

0x3299,	// (0x0002395b) tabs_3_active_pane_g1

0xc0c4,	// (0x0002c786) tabs_3_active_pane_t1

0x3506,	// (0x00023bc8) bg_passive_tab_pane_cp2_ParamLimits

0x3506,	// (0x00023bc8) bg_passive_tab_pane_cp2

0x3299,	// (0x0002395b) tabs_3_passive_pane_g1

0xc0c4,	// (0x0002c786) tabs_3_passive_pane_t1

0x3506,	// (0x00023bc8) bg_active_tab_pane_cp3_ParamLimits

0x3506,	// (0x00023bc8) bg_active_tab_pane_cp3

0x32b3,	// (0x00023975) tabs_4_active_pane_g1

0xc0d6,	// (0x0002c798) tabs_4_active_pane_t1

0x3506,	// (0x00023bc8) bg_passive_tab_pane_cp3_ParamLimits

0x3506,	// (0x00023bc8) bg_passive_tab_pane_cp3

0x32b3,	// (0x00023975) tabs_4_1_passive_pane_g1

0xc0d6,	// (0x0002c798) tabs_4_1_passive_pane_t1

0x4ae7,	// (0x000251a9) list_highlight_pane_cp2

0xdc9a,	// (0x0002e35c) list_set_pane_ParamLimits

0xdc9a,	// (0x0002e35c) list_set_pane

0xdd34,	// (0x0002e3f6) main_pane_set_t1_ParamLimits

0xdd34,	// (0x0002e3f6) main_pane_set_t1

0xdd54,	// (0x0002e416) main_pane_set_t2_ParamLimits

0xdd54,	// (0x0002e416) main_pane_set_t2

0xdd68,	// (0x0002e42a) main_pane_set_t3_ParamLimits

0xdd68,	// (0x0002e42a) main_pane_set_t3

0xdd7a,	// (0x0002e43c) main_pane_set_t4_ParamLimits

0xdd7a,	// (0x0002e43c) main_pane_set_t4

0x0003,

0xf95c,	// (0x0003001e) main_pane_set_t_ParamLimits

0xf95c,	// (0x0003001e) main_pane_set_t

0xdd8c,	// (0x0002e44e) setting_code_pane

0xdd96,	// (0x0002e458) setting_slider_graphic_pane

0xdd96,	// (0x0002e458) setting_slider_pane

0xdd96,	// (0x0002e458) setting_text_pane

0xdd96,	// (0x0002e458) setting_volume_pane

0x113d,	// (0x000217ff) volume_set_pane

0x328b,	// (0x0002394d) bg_set_opt_pane_cp

0x1145,	// (0x00021807) setting_slider_pane_t1

0x115e,	// (0x00021820) setting_slider_pane_t2

0x1178,	// (0x0002183a) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0002fbfb) setting_slider_pane_t

0x1190,	// (0x00021852) slider_set_pane

0x31ab,	// (0x0002386d) bg_set_opt_pane_cp2

0x32cd,	// (0x0002398f) setting_slider_graphic_pane_g1

0x11a6,	// (0x00021868) setting_slider_graphic_pane_t1

0x11b6,	// (0x00021878) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0002fc02) setting_slider_graphic_pane_t

0x11c6,	// (0x00021888) slider_set_pane_cp

0x31ab,	// (0x0002386d) input_focus_pane_cp1

0x63ed,	// (0x00026aaf) list_set_text_pane

0xe3d7,	// (0x0002ea99) setting_text_pane_g1

0x31ab,	// (0x0002386d) input_focus_pane_cp2

0xe3d7,	// (0x0002ea99) setting_code_pane_g1

0x32d6,	// (0x00023998) setting_code_pane_t1

0xf37a,	// (0x0002fa3c) set_text_pane_t1_ParamLimits

0xf37a,	// (0x0002fa3c) set_text_pane_t1

0x3b70,	// (0x00024232) set_opt_bg_pane_g1

0x3b78,	// (0x0002423a) set_opt_bg_pane_g2

0x63c7,	// (0x00026a89) set_opt_bg_pane_g3

0x3b88,	// (0x0002424a) set_opt_bg_pane_g4

0x3b90,	// (0x00024252) set_opt_bg_pane_g5

0x3b98,	// (0x0002425a) set_opt_bg_pane_g6

0x63d1,	// (0x00026a93) set_opt_bg_pane_g7

0x63d9,	// (0x00026a9b) set_opt_bg_pane_g8

0x63e3,	// (0x00026aa5) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x0003000b) set_opt_bg_pane_g

0x63ba,	// (0x00026a7c) slider_set_pane_g1

0x206a,	// (0x0002272c) slider_set_pane_g2

0x0006,

0xf93a,	// (0x0002fffc) slider_set_pane_g

0x2006,	// (0x000226c8) volume_set_pane_g1

0x200e,	// (0x000226d0) volume_set_pane_g2

0x2016,	// (0x000226d8) volume_set_pane_g3

0x201e,	// (0x000226e0) volume_set_pane_g4

0x2026,	// (0x000226e8) volume_set_pane_g5

0x202e,	// (0x000226f0) volume_set_pane_g6

0x2036,	// (0x000226f8) volume_set_pane_g7

0x203e,	// (0x00022700) volume_set_pane_g8

0x2046,	// (0x00022708) volume_set_pane_g9

0x204e,	// (0x00022710) volume_set_pane_g10

0x0009,

0xf912,	// (0x0002ffd4) volume_set_pane_g

0xc0e8,	// (0x0002c7aa) indicator_pane_ParamLimits

0xc0e8,	// (0x0002c7aa) indicator_pane

0xc110,	// (0x0002c7d2) main_idle_pane_g2_ParamLimits

0xc110,	// (0x0002c7d2) main_idle_pane_g2

0xc148,	// (0x0002c80a) main_pane_idle_g1_ParamLimits

0xc148,	// (0x0002c80a) main_pane_idle_g1

0x3325,	// (0x000239e7) popup_clock_digital_analogue_window_ParamLimits

0x3325,	// (0x000239e7) popup_clock_digital_analogue_window

0xc16f,	// (0x0002c831) soft_indicator_pane_ParamLimits

0xc16f,	// (0x0002c831) soft_indicator_pane

0xc189,	// (0x0002c84b) wallpaper_pane_ParamLimits

0xc189,	// (0x0002c84b) wallpaper_pane

0xe3d7,	// (0x0002ea99) wallpaper_pane_g1

0xc19b,	// (0x0002c85d) indicator_pane_g1_ParamLimits

0xc19b,	// (0x0002c85d) indicator_pane_g1

0x6808,	// (0x00026eca) navi_navi_icon_text_pane_srt_g1

0x3377,	// (0x00023a39) soft_indicator_pane_t1

0x3391,	// (0x00023a53) aid_ps_area_pane

0xc1b1,	// (0x0002c873) aid_ps_clock_pane

0x33b0,	// (0x00023a72) aid_ps_indicator_pane

0x33bc,	// (0x00023a7e) indicator_ps_pane_ParamLimits

0x33bc,	// (0x00023a7e) indicator_ps_pane

0x33cb,	// (0x00023a8d) power_save_pane_g1_ParamLimits

0x33cb,	// (0x00023a8d) power_save_pane_g1

0x33d7,	// (0x00023a99) power_save_pane_g2_ParamLimits

0x33d7,	// (0x00023a99) power_save_pane_g2

0x0d4e,	// (0x00021410) aid_navinavi_width_pane

0x3391,	// (0x00023a53) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0002fc07) power_save_pane_g_ParamLimits

0xf545,	// (0x0002fc07) power_save_pane_g

0x33e5,	// (0x00023aa7) power_save_pane_t1_ParamLimits

0x33e5,	// (0x00023aa7) power_save_pane_t1

0xc1b1,	// (0x0002c873) aid_ps_clock_pane_ParamLimits

0x33b0,	// (0x00023a72) aid_ps_indicator_pane_ParamLimits

0x33f7,	// (0x00023ab9) power_save_pane_t4_ParamLimits

0x33f7,	// (0x00023ab9) power_save_pane_t4

0x0001,

0xf54a,	// (0x0002fc0c) power_save_pane_t_ParamLimits

0xf54a,	// (0x0002fc0c) power_save_pane_t

0x3421,	// (0x00023ae3) power_save_t3_ParamLimits

0x3421,	// (0x00023ae3) power_save_t3

0x340c,	// (0x00023ace) power_save_t2_ParamLimits

0x340c,	// (0x00023ace) power_save_t2

0x3436,	// (0x00023af8) indicator_ps_pane_g1

0xc1bf,	// (0x0002c881) ai_gene_pane_ParamLimits

0xc1bf,	// (0x0002c881) ai_gene_pane

0xc1d6,	// (0x0002c898) ai_links_pane_ParamLimits

0xc1d6,	// (0x0002c898) ai_links_pane

0xc1ee,	// (0x0002c8b0) indicator_pane_cp1_ParamLimits

0xc1ee,	// (0x0002c8b0) indicator_pane_cp1

0xc1fd,	// (0x0002c8bf) main_pane_idle_g1_cp_ParamLimits

0xc1fd,	// (0x0002c8bf) main_pane_idle_g1_cp

0x346f,	// (0x00023b31) popup_ai_links_title_window

0xc215,	// (0x0002c8d7) soft_indicator_pane_cp1_ParamLimits

0xc215,	// (0x0002c8d7) soft_indicator_pane_cp1

0x61a9,	// (0x0002686b) ai_links_pane_g1

0x61b2,	// (0x00026874) grid_ai_links_pane

0xdbdf,	// (0x0002e2a1) ai_gene_pane_1

0x6197,	// (0x00026859) ai_gene_pane_2

0x61a0,	// (0x00026862) list_highlight_pane_cp4

0xdbbb,	// (0x0002e27d) cell_ai_link_pane_ParamLimits

0xdbbb,	// (0x0002e27d) cell_ai_link_pane

0x6168,	// (0x0002682a) cell_ai_link_pane_g1

0x36ce,	// (0x00023d90) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x0002ffaf) cell_ai_link_pane_g

0x31ab,	// (0x0002386d) grid_highlight_cp2

0x31ab,	// (0x0002386d) bg_popup_sub_pane_cp1

0x3492,	// (0x00023b54) popup_ai_links_title_window_t1

0x60b6,	// (0x00026778) ai_gene_pane_1_g1_ParamLimits

0x60b6,	// (0x00026778) ai_gene_pane_1_g1

0x60c2,	// (0x00026784) ai_gene_pane_1_g2_ParamLimits

0x60c2,	// (0x00026784) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x0002ffa5) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x0002ffa5) ai_gene_pane_1_g

0x60cf,	// (0x00026791) ai_gene_pane_1_t1_ParamLimits

0x60cf,	// (0x00026791) ai_gene_pane_1_t1

0x6103,	// (0x000267c5) grid_ai_soft_ind_pane

0x60a1,	// (0x00026763) ai_gene_pane_2_t1_ParamLimits

0x60a1,	// (0x00026763) ai_gene_pane_2_t1

0xc229,	// (0x0002c8eb) main_pane_empty_t1_ParamLimits

0xc229,	// (0x0002c8eb) main_pane_empty_t1

0xc241,	// (0x0002c903) main_pane_empty_t2_ParamLimits

0xc241,	// (0x0002c903) main_pane_empty_t2

0xc256,	// (0x0002c918) main_pane_empty_t3_ParamLimits

0xc256,	// (0x0002c918) main_pane_empty_t3

0xc268,	// (0x0002c92a) main_pane_empty_t4_ParamLimits

0xc268,	// (0x0002c92a) main_pane_empty_t4

0xc27a,	// (0x0002c93c) main_pane_empty_t5_ParamLimits

0xc27a,	// (0x0002c93c) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0002fc11) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0002fc11) main_pane_empty_t

0x3c37,	// (0x000242f9) bg_popup_window_pane_ParamLimits

0x3c37,	// (0x000242f9) bg_popup_window_pane

0x5e11,	// (0x000264d3) find_popup_pane_cp2_ParamLimits

0x5e11,	// (0x000264d3) find_popup_pane_cp2

0x5e1d,	// (0x000264df) heading_pane_ParamLimits

0x5e1d,	// (0x000264df) heading_pane

0x31ab,	// (0x0002386d) bg_popup_sub_pane

0xdb3c,	// (0x0002e1fe) bg_popup_window_pane_g1_ParamLimits

0xdb3c,	// (0x0002e1fe) bg_popup_window_pane_g1

0xdb4b,	// (0x0002e20d) bg_popup_window_pane_g2_ParamLimits

0xdb4b,	// (0x0002e20d) bg_popup_window_pane_g2

0xdb57,	// (0x0002e219) bg_popup_window_pane_g3_ParamLimits

0xdb57,	// (0x0002e219) bg_popup_window_pane_g3

0xdb63,	// (0x0002e225) bg_popup_window_pane_g4_ParamLimits

0xdb63,	// (0x0002e225) bg_popup_window_pane_g4

0xdb72,	// (0x0002e234) bg_popup_window_pane_g5_ParamLimits

0xdb72,	// (0x0002e234) bg_popup_window_pane_g5

0xdb82,	// (0x0002e244) bg_popup_window_pane_g6_ParamLimits

0xdb82,	// (0x0002e244) bg_popup_window_pane_g6

0xdb8e,	// (0x0002e250) bg_popup_window_pane_g7_ParamLimits

0xdb8e,	// (0x0002e250) bg_popup_window_pane_g7

0xdb9d,	// (0x0002e25f) bg_popup_window_pane_g8_ParamLimits

0xdb9d,	// (0x0002e25f) bg_popup_window_pane_g8

0xdbac,	// (0x0002e26e) bg_popup_window_pane_g9_ParamLimits

0xdbac,	// (0x0002e26e) bg_popup_window_pane_g9

0x5df7,	// (0x000264b9) bg_popup_window_pane_g10_ParamLimits

0x5df7,	// (0x000264b9) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x0002ff6d) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x0002ff6d) bg_popup_window_pane_g

0x5d20,	// (0x000263e2) bg_popup_heading_pane_ParamLimits

0x5d20,	// (0x000263e2) bg_popup_heading_pane

0x20f2,	// (0x000227b4) tabs_4_passive_pane_cp_srt_ParamLimits

0x20f2,	// (0x000227b4) tabs_4_passive_pane_cp_srt

0x2104,	// (0x000227c6) tabs_4_passive_pane_srt_ParamLimits

0x5d34,	// (0x000263f6) heading_pane_g2

0x2104,	// (0x000227c6) tabs_4_passive_pane_srt

0x5085,	// (0x00025747) bg_passive_tab_pane_cp3_srt_ParamLimits

0x5085,	// (0x00025747) bg_passive_tab_pane_cp3_srt

0x5d3c,	// (0x000263fe) heading_pane_t1_ParamLimits

0x5d3c,	// (0x000263fe) heading_pane_t1

0x5d53,	// (0x00026415) heading_pane_t2_ParamLimits

0x5d53,	// (0x00026415) heading_pane_t2

0x0001,

0xf8a6,	// (0x0002ff68) heading_pane_t_ParamLimits

0xf8a6,	// (0x0002ff68) heading_pane_t

0x5841,	// (0x00025f03) bg_popup_heading_pane_g1

0x58f0,	// (0x00025fb2) bg_popup_heading_pane_g2

0x58fa,	// (0x00025fbc) bg_popup_heading_pane_g3

0x5904,	// (0x00025fc6) bg_popup_heading_pane_g4

0x590e,	// (0x00025fd0) bg_popup_heading_pane_g5

0x5918,	// (0x00025fda) bg_popup_heading_pane_g6

0x5920,	// (0x00025fe2) bg_popup_heading_pane_g7

0x5928,	// (0x00025fea) bg_popup_heading_pane_g8

0x5932,	// (0x00025ff4) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x0002ff24) bg_popup_heading_pane_g

0x5011,	// (0x000256d3) bg_popup_sub_pane_g1

0x5019,	// (0x000256db) bg_popup_sub_pane_g2

0x5021,	// (0x000256e3) bg_popup_sub_pane_g3

0x5029,	// (0x000256eb) bg_popup_sub_pane_g4

0x5031,	// (0x000256f3) bg_popup_sub_pane_g5

0x5039,	// (0x000256fb) bg_popup_sub_pane_g6

0x5041,	// (0x00025703) bg_popup_sub_pane_g7

0x5049,	// (0x0002570b) bg_popup_sub_pane_g8

0x5051,	// (0x00025713) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x0002fefe) bg_popup_sub_pane_g

0x3506,	// (0x00023bc8) bg_popup_window_pane_cp5_ParamLimits

0x3506,	// (0x00023bc8) bg_popup_window_pane_cp5

0x3522,	// (0x00023be4) popup_note_window_g1_ParamLimits

0x3522,	// (0x00023be4) popup_note_window_g1

0x352e,	// (0x00023bf0) popup_note_window_t1_ParamLimits

0x352e,	// (0x00023bf0) popup_note_window_t1

0x3544,	// (0x00023c06) popup_note_window_t2_ParamLimits

0x3544,	// (0x00023c06) popup_note_window_t2

0x355a,	// (0x00023c1c) popup_note_window_t3_ParamLimits

0x355a,	// (0x00023c1c) popup_note_window_t3

0x3570,	// (0x00023c32) popup_note_window_t4_ParamLimits

0x3570,	// (0x00023c32) popup_note_window_t4

0x3598,	// (0x00023c5a) popup_note_window_t5_ParamLimits

0x3598,	// (0x00023c5a) popup_note_window_t5

0x0004,

0xf55a,	// (0x0002fc1c) popup_note_window_t_ParamLimits

0xf55a,	// (0x0002fc1c) popup_note_window_t

0x35e2,	// (0x00023ca4) bg_popup_window_pane_cp6_ParamLimits

0x35e2,	// (0x00023ca4) bg_popup_window_pane_cp6

0x57bd,	// (0x00025e7f) popup_note_image_window_g1_ParamLimits

0x57bd,	// (0x00025e7f) popup_note_image_window_g1

0x57c9,	// (0x00025e8b) popup_note_image_window_g2_ParamLimits

0x57c9,	// (0x00025e8b) popup_note_image_window_g2

0x0001,

0xf830,	// (0x0002fef2) popup_note_image_window_g_ParamLimits

0xf830,	// (0x0002fef2) popup_note_image_window_g

0x57e2,	// (0x00025ea4) popup_note_image_window_t1_ParamLimits

0x57e2,	// (0x00025ea4) popup_note_image_window_t1

0x57fb,	// (0x00025ebd) popup_note_image_window_t2_ParamLimits

0x57fb,	// (0x00025ebd) popup_note_image_window_t2

0x5814,	// (0x00025ed6) popup_note_image_window_t3_ParamLimits

0x5814,	// (0x00025ed6) popup_note_image_window_t3

0x0002,

0xf835,	// (0x0002fef7) popup_note_image_window_t_ParamLimits

0xf835,	// (0x0002fef7) popup_note_image_window_t

0x567e,	// (0x00025d40) bg_popup_window_pane_cp7_ParamLimits

0x567e,	// (0x00025d40) bg_popup_window_pane_cp7

0x56ae,	// (0x00025d70) popup_note_wait_window_g1_ParamLimits

0x56ae,	// (0x00025d70) popup_note_wait_window_g1

0x56ba,	// (0x00025d7c) popup_note_wait_window_g2_ParamLimits

0x56ba,	// (0x00025d7c) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x0002fee0) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x0002fee0) popup_note_wait_window_g

0x56d2,	// (0x00025d94) popup_note_wait_window_t1_ParamLimits

0x56d2,	// (0x00025d94) popup_note_wait_window_t1

0x56f9,	// (0x00025dbb) popup_note_wait_window_t2_ParamLimits

0x56f9,	// (0x00025dbb) popup_note_wait_window_t2

0x5716,	// (0x00025dd8) popup_note_wait_window_t3_ParamLimits

0x5716,	// (0x00025dd8) popup_note_wait_window_t3

0x5729,	// (0x00025deb) popup_note_wait_window_t4_ParamLimits

0x5729,	// (0x00025deb) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x0002fee7) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x0002fee7) popup_note_wait_window_t

0x574e,	// (0x00025e10) wait_bar_pane_ParamLimits

0x574e,	// (0x00025e10) wait_bar_pane

0x31ab,	// (0x0002386d) wait_anim_pane

0x31ab,	// (0x0002386d) wait_border_pane

0xe3d7,	// (0x0002ea99) wait_anim_pane_g1

0xe3d7,	// (0x0002ea99) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x0002fda0) wait_anim_pane_g

0x5622,	// (0x00025ce4) wait_border_pane_g1

0x562d,	// (0x00025cef) wait_border_pane_g2

0x5636,	// (0x00025cf8) wait_border_pane_g3

0x0002,

0xf817,	// (0x0002fed9) wait_border_pane_g

0x548d,	// (0x00025b4f) bg_popup_window_pane_cp16_ParamLimits

0x548d,	// (0x00025b4f) bg_popup_window_pane_cp16

0x558d,	// (0x00025c4f) indicator_popup_pane_cp4_ParamLimits

0x558d,	// (0x00025c4f) indicator_popup_pane_cp4

0x55a1,	// (0x00025c63) popup_query_data_window_t1_ParamLimits

0x55a1,	// (0x00025c63) popup_query_data_window_t1

0x55b3,	// (0x00025c75) popup_query_data_window_t2_ParamLimits

0x55b3,	// (0x00025c75) popup_query_data_window_t2

0x55cc,	// (0x00025c8e) popup_query_data_window_t3_ParamLimits

0x55cc,	// (0x00025c8e) popup_query_data_window_t3

0x0002,

0xf810,	// (0x0002fed2) popup_query_data_window_t_ParamLimits

0xf810,	// (0x0002fed2) popup_query_data_window_t

0x55e6,	// (0x00025ca8) query_popup_data_pane_ParamLimits

0x55e6,	// (0x00025ca8) query_popup_data_pane

0x55fa,	// (0x00025cbc) query_popup_data_pane_cp1_ParamLimits

0x55fa,	// (0x00025cbc) query_popup_data_pane_cp1

0x548d,	// (0x00025b4f) bg_popup_window_pane_cp10_ParamLimits

0x548d,	// (0x00025b4f) bg_popup_window_pane_cp10

0x54bf,	// (0x00025b81) indicator_popup_pane_ParamLimits

0x54bf,	// (0x00025b81) indicator_popup_pane

0x54e1,	// (0x00025ba3) popup_query_code_window_t1_ParamLimits

0x54e1,	// (0x00025ba3) popup_query_code_window_t1

0x54fb,	// (0x00025bbd) popup_query_code_window_t2_ParamLimits

0x54fb,	// (0x00025bbd) popup_query_code_window_t2

0x5544,	// (0x00025c06) popup_query_code_window_t3_ParamLimits

0x5544,	// (0x00025c06) popup_query_code_window_t3

0x0002,

0xf809,	// (0x0002fecb) popup_query_code_window_t_ParamLimits

0xf809,	// (0x0002fecb) popup_query_code_window_t

0x5573,	// (0x00025c35) query_popup_pane_ParamLimits

0x5573,	// (0x00025c35) query_popup_pane

0x35e2,	// (0x00023ca4) bg_popup_window_pane_cp15_ParamLimits

0x35e2,	// (0x00023ca4) bg_popup_window_pane_cp15

0x3600,	// (0x00023cc2) indicator_popup_pane_cp1_ParamLimits

0x3600,	// (0x00023cc2) indicator_popup_pane_cp1

0x3613,	// (0x00023cd5) indicator_popup_pane_cp2_ParamLimits

0x3613,	// (0x00023cd5) indicator_popup_pane_cp2

0x3626,	// (0x00023ce8) popup_query_data_code_window_g1_ParamLimits

0x3626,	// (0x00023ce8) popup_query_data_code_window_g1

0x3639,	// (0x00023cfb) popup_query_data_code_window_t1_ParamLimits

0x3639,	// (0x00023cfb) popup_query_data_code_window_t1

0x364b,	// (0x00023d0d) popup_query_data_code_window_t2_ParamLimits

0x364b,	// (0x00023d0d) popup_query_data_code_window_t2

0x365d,	// (0x00023d1f) popup_query_data_code_window_t3_ParamLimits

0x365d,	// (0x00023d1f) popup_query_data_code_window_t3

0x3673,	// (0x00023d35) popup_query_data_code_window_t4_ParamLimits

0x3673,	// (0x00023d35) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0002fc27) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0002fc27) popup_query_data_code_window_t

0x1dbf,	// (0x00022481) list_single_midp_graphic_pane_g3

0x368b,	// (0x00023d4d) query_popup_data_pane_cp2_ParamLimits

0x369e,	// (0x00023d60) query_popup_pane_cp2_ParamLimits

0x369e,	// (0x00023d60) query_popup_pane_cp2

0x31ab,	// (0x0002386d) bg_popup_window_pane_cp11

0x5471,	// (0x00025b33) heading_pane_cp5

0x5479,	// (0x00025b3b) listscroll_popup_info_pane

0x31ab,	// (0x0002386d) input_focus_pane_cp3

0x36b1,	// (0x00023d73) query_popup_pane_t1

0x36bf,	// (0x00023d81) list_popup_info_pane_ParamLimits

0x36bf,	// (0x00023d81) list_popup_info_pane

0x36ce,	// (0x00023d90) listscroll_popup_info_pane_g1

0x36d6,	// (0x00023d98) scroll_pane_cp7

0x36e0,	// (0x00023da2) popup_info_list_pane_t1_ParamLimits

0x36e0,	// (0x00023da2) popup_info_list_pane_t1

0x36fa,	// (0x00023dbc) popup_info_list_pane_t2_ParamLimits

0x36fa,	// (0x00023dbc) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0002fc30) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0002fc30) popup_info_list_pane_t

0x31ab,	// (0x0002386d) bg_popup_window_pane_cp12

0x6822,	// (0x00026ee4) find_popup_pane

0x328b,	// (0x0002394d) bg_popup_window_pane_cp3

0x3714,	// (0x00023dd6) heading_pane_cp3

0x3723,	// (0x00023de5) listscroll_popup_graphic_pane

0x31ab,	// (0x0002386d) bg_popup_window_pane_cp4

0xc2dc,	// (0x0002c99e) heading_pane_cp4

0x378d,	// (0x00023e4f) listscroll_popup_colour_pane

0xc2e6,	// (0x0002c9a8) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc2e6,	// (0x0002c9a8) cell_large_graphic_colour_none_popup_pane

0xc2fa,	// (0x0002c9bc) grid_large_graphic_colour_popup_pane_ParamLimits

0xc2fa,	// (0x0002c9bc) grid_large_graphic_colour_popup_pane

0xc31e,	// (0x0002c9e0) listscroll_popup_colour_pane_g1_ParamLimits

0xc31e,	// (0x0002c9e0) listscroll_popup_colour_pane_g1

0xc335,	// (0x0002c9f7) listscroll_popup_colour_pane_g2_ParamLimits

0xc335,	// (0x0002c9f7) listscroll_popup_colour_pane_g2

0xc34c,	// (0x0002ca0e) listscroll_popup_colour_pane_g3_ParamLimits

0xc34c,	// (0x0002ca0e) listscroll_popup_colour_pane_g3

0xc35c,	// (0x0002ca1e) listscroll_popup_colour_pane_g4_ParamLimits

0xc35c,	// (0x0002ca1e) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0002fc35) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0002fc35) listscroll_popup_colour_pane_g

0x381b,	// (0x00023edd) scroll_pane_cp6_ParamLimits

0x381b,	// (0x00023edd) scroll_pane_cp6

0xc36c,	// (0x0002ca2e) cell_large_graphic_colour_popup_pane_ParamLimits

0xc36c,	// (0x0002ca2e) cell_large_graphic_colour_popup_pane

0x384c,	// (0x00023f0e) cell_large_graphic_colour_none_popup_pane_t1

0x31ab,	// (0x0002386d) grid_highlight_pane_cp5

0x385b,	// (0x00023f1d) cell_large_graphic_colour_popup_pane_g1

0x3863,	// (0x00023f25) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0002fc3e) cell_large_graphic_colour_popup_pane_g

0x386b,	// (0x00023f2d) cell_large_graphic_colour_popup_pane_g2_copy1

0x3874,	// (0x00023f36) grid_highlight_pane_cp4

0x387c,	// (0x00023f3e) bg_popup_window_pane_cp8_ParamLimits

0x387c,	// (0x00023f3e) bg_popup_window_pane_cp8

0x3897,	// (0x00023f59) popup_snote_single_text_window_g1_ParamLimits

0x3897,	// (0x00023f59) popup_snote_single_text_window_g1

0x38a9,	// (0x00023f6b) popup_snote_single_text_window_t1_ParamLimits

0x38a9,	// (0x00023f6b) popup_snote_single_text_window_t1

0x38bc,	// (0x00023f7e) popup_snote_single_text_window_t2_ParamLimits

0x38bc,	// (0x00023f7e) popup_snote_single_text_window_t2

0x38cf,	// (0x00023f91) popup_snote_single_text_window_t3_ParamLimits

0x38cf,	// (0x00023f91) popup_snote_single_text_window_t3

0x3908,	// (0x00023fca) popup_snote_single_text_window_t4_ParamLimits

0x3908,	// (0x00023fca) popup_snote_single_text_window_t4

0x393c,	// (0x00023ffe) popup_snote_single_text_window_t5_ParamLimits

0x393c,	// (0x00023ffe) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0002fc43) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0002fc43) popup_snote_single_text_window_t

0x396b,	// (0x0002402d) bg_popup_window_pane_cp9_ParamLimits

0x396b,	// (0x0002402d) bg_popup_window_pane_cp9

0x3897,	// (0x00023f59) popup_snote_single_graphic_window_g1_ParamLimits

0x3897,	// (0x00023f59) popup_snote_single_graphic_window_g1

0x3979,	// (0x0002403b) popup_snote_single_graphic_window_g2_ParamLimits

0x3979,	// (0x0002403b) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0002fc4e) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0002fc4e) popup_snote_single_graphic_window_g

0x3985,	// (0x00024047) popup_snote_single_graphic_window_t1_ParamLimits

0x3985,	// (0x00024047) popup_snote_single_graphic_window_t1

0x3998,	// (0x0002405a) popup_snote_single_graphic_window_t2_ParamLimits

0x3998,	// (0x0002405a) popup_snote_single_graphic_window_t2

0x39ab,	// (0x0002406d) popup_snote_single_graphic_window_t3_ParamLimits

0x39ab,	// (0x0002406d) popup_snote_single_graphic_window_t3

0x39e4,	// (0x000240a6) popup_snote_single_graphic_window_t4_ParamLimits

0x39e4,	// (0x000240a6) popup_snote_single_graphic_window_t4

0x3a18,	// (0x000240da) popup_snote_single_graphic_window_t5_ParamLimits

0x3a18,	// (0x000240da) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0002fc53) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0002fc53) popup_snote_single_graphic_window_t

0x6764,	// (0x00026e26) grid_graphic_popup_pane_ParamLimits

0x6764,	// (0x00026e26) grid_graphic_popup_pane

0x678e,	// (0x00026e50) listscroll_popup_graphic_pane_g1_ParamLimits

0x678e,	// (0x00026e50) listscroll_popup_graphic_pane_g1

0xdeac,	// (0x0002e56e) listscroll_popup_graphic_pane_g2_ParamLimits

0xdeac,	// (0x0002e56e) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x00030048) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x00030048) listscroll_popup_graphic_pane_g

0x67b6,	// (0x00026e78) scroll_pane_cp5

0xde69,	// (0x0002e52b) cell_graphic_popup_pane_ParamLimits

0xde69,	// (0x0002e52b) cell_graphic_popup_pane

0x66d6,	// (0x00026d98) cell_graphic_popup_pane_g1

0x66de,	// (0x00026da0) cell_graphic_popup_pane_g2

0x386b,	// (0x00023f2d) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x00030041) cell_graphic_popup_pane_g

0xde5b,	// (0x0002e51d) cell_graphic_popup_pane_t2

0x3874,	// (0x00023f36) grid_highlight_pane_cp3

0x3a59,	// (0x0002411b) list_gen_pane_ParamLimits

0x3a59,	// (0x0002411b) list_gen_pane

0x3a8b,	// (0x0002414d) scroll_pane

0xde12,	// (0x0002e4d4) bg_list_pane_g1_ParamLimits

0xde12,	// (0x0002e4d4) bg_list_pane_g1

0x664b,	// (0x00026d0d) bg_list_pane_g2_ParamLimits

0x664b,	// (0x00026d0d) bg_list_pane_g2

0x6660,	// (0x00026d22) bg_list_pane_g3_ParamLimits

0x6660,	// (0x00026d22) bg_list_pane_g3

0x6674,	// (0x00026d36) bg_list_pane_g4_ParamLimits

0x6674,	// (0x00026d36) bg_list_pane_g4

0xde2f,	// (0x0002e4f1) bg_list_pane_g5_ParamLimits

0xde2f,	// (0x0002e4f1) bg_list_pane_g5

0x0004,

0xf974,	// (0x00030036) bg_list_pane_g_ParamLimits

0xf974,	// (0x00030036) bg_list_pane_g

0xddc9,	// (0x0002e48b) list_double2_graphic_large_graphic_pane_ParamLimits

0xddc9,	// (0x0002e48b) list_double2_graphic_large_graphic_pane

0xddc9,	// (0x0002e48b) list_double2_graphic_pane_ParamLimits

0xddc9,	// (0x0002e48b) list_double2_graphic_pane

0xddc9,	// (0x0002e48b) list_double2_large_graphic_pane_ParamLimits

0xddc9,	// (0x0002e48b) list_double2_large_graphic_pane

0xddc9,	// (0x0002e48b) list_double2_pane_ParamLimits

0xddc9,	// (0x0002e48b) list_double2_pane

0xddc9,	// (0x0002e48b) list_double_graphic_heading_pane_ParamLimits

0xddc9,	// (0x0002e48b) list_double_graphic_heading_pane

0xddc9,	// (0x0002e48b) list_double_graphic_pane_ParamLimits

0xddc9,	// (0x0002e48b) list_double_graphic_pane

0xddc9,	// (0x0002e48b) list_double_heading_pane_ParamLimits

0xddc9,	// (0x0002e48b) list_double_heading_pane

0xddc9,	// (0x0002e48b) list_double_large_graphic_pane_ParamLimits

0xddc9,	// (0x0002e48b) list_double_large_graphic_pane

0xddc9,	// (0x0002e48b) list_double_number_pane_ParamLimits

0xddc9,	// (0x0002e48b) list_double_number_pane

0xddc9,	// (0x0002e48b) list_double_pane_ParamLimits

0xddc9,	// (0x0002e48b) list_double_pane

0xddc9,	// (0x0002e48b) list_double_time_pane_ParamLimits

0xddc9,	// (0x0002e48b) list_double_time_pane

0xddc9,	// (0x0002e48b) list_setting_number_pane_ParamLimits

0xddc9,	// (0x0002e48b) list_setting_number_pane

0xddc9,	// (0x0002e48b) list_setting_pane_ParamLimits

0xddc9,	// (0x0002e48b) list_setting_pane

0xbbb0,	// (0x0002c272) list_single_2graphic_pane_ParamLimits

0xbbb0,	// (0x0002c272) list_single_2graphic_pane

0xbbb0,	// (0x0002c272) list_single_graphic_heading_pane_ParamLimits

0xbbb0,	// (0x0002c272) list_single_graphic_heading_pane

0xbbb0,	// (0x0002c272) list_single_graphic_pane_ParamLimits

0xbbb0,	// (0x0002c272) list_single_graphic_pane

0xbbb0,	// (0x0002c272) list_single_heading_pane_ParamLimits

0xbbb0,	// (0x0002c272) list_single_heading_pane

0xddff,	// (0x0002e4c1) list_single_large_graphic_pane_ParamLimits

0xddff,	// (0x0002e4c1) list_single_large_graphic_pane

0xbbb0,	// (0x0002c272) list_single_number_heading_pane_ParamLimits

0xbbb0,	// (0x0002c272) list_single_number_heading_pane

0xbbb0,	// (0x0002c272) list_single_number_pane_ParamLimits

0xbbb0,	// (0x0002c272) list_single_number_pane

0xbbb0,	// (0x0002c272) list_single_pane_ParamLimits

0xbbb0,	// (0x0002c272) list_single_pane

0x31ab,	// (0x0002386d) list_highlight_pane_cp1

0x0384,	// (0x00020a46) list_single_pane_g1_ParamLimits

0x0384,	// (0x00020a46) list_single_pane_g1

0x0390,	// (0x00020a52) list_single_pane_g2_ParamLimits

0x0390,	// (0x00020a52) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0002fc65) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0002fc65) list_single_pane_g

0x06e5,	// (0x00020da7) list_single_pane_t1_ParamLimits

0x06e5,	// (0x00020da7) list_single_pane_t1

0x0384,	// (0x00020a46) list_single_number_pane_g1_ParamLimits

0x0384,	// (0x00020a46) list_single_number_pane_g1

0x0390,	// (0x00020a52) list_single_number_pane_g2_ParamLimits

0x0390,	// (0x00020a52) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0002fc65) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0002fc65) list_single_number_pane_g

0x03fa,	// (0x00020abc) list_single_number_pane_t1_ParamLimits

0x03fa,	// (0x00020abc) list_single_number_pane_t1

0xbb72,	// (0x0002c234) list_single_number_pane_t2_ParamLimits

0xbb72,	// (0x0002c234) list_single_number_pane_t2

0x0001,

0xf935,	// (0x0002fff7) list_single_number_pane_t_ParamLimits

0xf935,	// (0x0002fff7) list_single_number_pane_t

0xb532,	// (0x0002bbf4) list_single_graphic_pane_g1_ParamLimits

0xb532,	// (0x0002bbf4) list_single_graphic_pane_g1

0x0384,	// (0x00020a46) list_single_graphic_pane_g2_ParamLimits

0x0384,	// (0x00020a46) list_single_graphic_pane_g2

0x0390,	// (0x00020a52) list_single_graphic_pane_g3_ParamLimits

0x0390,	// (0x00020a52) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0002fc5e) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0002fc5e) list_single_graphic_pane_g

0xb53e,	// (0x0002bc00) list_single_graphic_pane_t1_ParamLimits

0xb53e,	// (0x0002bc00) list_single_graphic_pane_t1

0x0384,	// (0x00020a46) list_single_heading_pane_g1_ParamLimits

0x0384,	// (0x00020a46) list_single_heading_pane_g1

0x0390,	// (0x00020a52) list_single_heading_pane_g2_ParamLimits

0x0390,	// (0x00020a52) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002fc65) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002fc65) list_single_heading_pane_g

0xb554,	// (0x0002bc16) list_single_heading_pane_t1_ParamLimits

0xb554,	// (0x0002bc16) list_single_heading_pane_t1

0xb56a,	// (0x0002bc2c) list_single_heading_pane_t2_ParamLimits

0xb56a,	// (0x0002bc2c) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0002fc6a) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0002fc6a) list_single_heading_pane_t

0x0384,	// (0x00020a46) list_single_number_heading_pane_g1_ParamLimits

0x0384,	// (0x00020a46) list_single_number_heading_pane_g1

0x0390,	// (0x00020a52) list_single_number_heading_pane_g2_ParamLimits

0x0390,	// (0x00020a52) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002fc65) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002fc65) list_single_number_heading_pane_g

0xb554,	// (0x0002bc16) list_single_number_heading_pane_t1_ParamLimits

0xb554,	// (0x0002bc16) list_single_number_heading_pane_t1

0x0699,	// (0x00020d5b) list_single_number_heading_pane_t2_ParamLimits

0x0699,	// (0x00020d5b) list_single_number_heading_pane_t2

0x06ab,	// (0x00020d6d) list_single_number_heading_pane_t3_ParamLimits

0x06ab,	// (0x00020d6d) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0002fc6f) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0002fc6f) list_single_number_heading_pane_t

0x0378,	// (0x00020a3a) list_single_graphic_heading_pane_g1_ParamLimits

0x0378,	// (0x00020a3a) list_single_graphic_heading_pane_g1

0xb57c,	// (0x0002bc3e) list_single_graphic_heading_pane_g4_ParamLimits

0xb57c,	// (0x0002bc3e) list_single_graphic_heading_pane_g4

0x0390,	// (0x00020a52) list_single_graphic_heading_pane_g5_ParamLimits

0x0390,	// (0x00020a52) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0002fc76) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0002fc76) list_single_graphic_heading_pane_g

0xb554,	// (0x0002bc16) list_single_graphic_heading_pane_t1_ParamLimits

0xb554,	// (0x0002bc16) list_single_graphic_heading_pane_t1

0xb58d,	// (0x0002bc4f) list_single_graphic_heading_pane_t2_ParamLimits

0xb58d,	// (0x0002bc4f) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0002fc7d) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0002fc7d) list_single_graphic_heading_pane_t

0x06fb,	// (0x00020dbd) list_single_large_graphic_pane_g1_ParamLimits

0x06fb,	// (0x00020dbd) list_single_large_graphic_pane_g1

0xf395,	// (0x0002fa57) list_single_large_graphic_pane_g2_ParamLimits

0xf395,	// (0x0002fa57) list_single_large_graphic_pane_g2

0xf3a1,	// (0x0002fa63) list_single_large_graphic_pane_g3_ParamLimits

0xf3a1,	// (0x0002fa63) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0002fc82) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0002fc82) list_single_large_graphic_pane_g

0x562d,	// (0x00025cef) wait_border_pane_g2_copy1

0xb59f,	// (0x0002bc61) list_single_large_graphic_pane_g4_cp2

0x0707,	// (0x00020dc9) list_single_large_graphic_pane_t1_ParamLimits

0x0707,	// (0x00020dc9) list_single_large_graphic_pane_t1

0xb5a7,	// (0x0002bc69) list_double_pane_g1_ParamLimits

0xb5a7,	// (0x0002bc69) list_double_pane_g1

0xb5b3,	// (0x0002bc75) list_double_pane_g2_ParamLimits

0xb5b3,	// (0x0002bc75) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0002fc89) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0002fc89) list_double_pane_g

0xb5bf,	// (0x0002bc81) list_double_pane_t1_ParamLimits

0xb5bf,	// (0x0002bc81) list_double_pane_t1

0xb5d5,	// (0x0002bc97) list_double_pane_t2_ParamLimits

0xb5d5,	// (0x0002bc97) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0002fc8e) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0002fc8e) list_double_pane_t

0xb5e7,	// (0x0002bca9) list_double2_pane_g1_ParamLimits

0xb5e7,	// (0x0002bca9) list_double2_pane_g1

0xb5f8,	// (0x0002bcba) list_double2_pane_g2_ParamLimits

0xb5f8,	// (0x0002bcba) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0002fc93) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0002fc93) list_double2_pane_g

0xb604,	// (0x0002bcc6) list_double2_pane_t1_ParamLimits

0xb604,	// (0x0002bcc6) list_double2_pane_t1

0xb61a,	// (0x0002bcdc) list_double2_pane_t2_ParamLimits

0xb61a,	// (0x0002bcdc) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0002fc98) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0002fc98) list_double2_pane_t

0xb5a7,	// (0x0002bc69) list_double_number_pane_g1_ParamLimits

0xb5a7,	// (0x0002bc69) list_double_number_pane_g1

0xb5b3,	// (0x0002bc75) list_double_number_pane_g2_ParamLimits

0xb5b3,	// (0x0002bc75) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0002fc89) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0002fc89) list_double_number_pane_g

0xb62c,	// (0x0002bcee) list_double_number_pane_t1_ParamLimits

0xb62c,	// (0x0002bcee) list_double_number_pane_t1

0xb63e,	// (0x0002bd00) list_double_number_pane_t2_ParamLimits

0xb63e,	// (0x0002bd00) list_double_number_pane_t2

0xb654,	// (0x0002bd16) list_double_number_pane_t3_ParamLimits

0xb654,	// (0x0002bd16) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0002fc9d) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0002fc9d) list_double_number_pane_t

0xb666,	// (0x0002bd28) list_double_graphic_pane_g1_ParamLimits

0xb666,	// (0x0002bd28) list_double_graphic_pane_g1

0xb672,	// (0x0002bd34) list_double_graphic_pane_g2_ParamLimits

0xb672,	// (0x0002bd34) list_double_graphic_pane_g2

0xb681,	// (0x0002bd43) list_double_graphic_pane_g3_ParamLimits

0xb681,	// (0x0002bd43) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0002fca4) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0002fca4) list_double_graphic_pane_g

0xb699,	// (0x0002bd5b) list_double_graphic_pane_t1_ParamLimits

0xb699,	// (0x0002bd5b) list_double_graphic_pane_t1

0xb6af,	// (0x0002bd71) list_double_graphic_pane_t2_ParamLimits

0xb6af,	// (0x0002bd71) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0002fcad) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0002fcad) list_double_graphic_pane_t

0xb6c1,	// (0x0002bd83) list_double2_graphic_pane_g1_ParamLimits

0xb6c1,	// (0x0002bd83) list_double2_graphic_pane_g1

0xb6cd,	// (0x0002bd8f) list_double2_graphic_pane_g2_ParamLimits

0xb6cd,	// (0x0002bd8f) list_double2_graphic_pane_g2

0xb5f8,	// (0x0002bcba) list_double2_graphic_pane_g3_ParamLimits

0xb5f8,	// (0x0002bcba) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0002fcb2) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0002fcb2) list_double2_graphic_pane_g

0xb6d9,	// (0x0002bd9b) list_double2_graphic_pane_t1_ParamLimits

0xb6d9,	// (0x0002bd9b) list_double2_graphic_pane_t1

0xb6ef,	// (0x0002bdb1) list_double2_graphic_pane_t2_ParamLimits

0xb6ef,	// (0x0002bdb1) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0002fcb9) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0002fcb9) list_double2_graphic_pane_t

0xb701,	// (0x0002bdc3) list_double_large_graphic_pane_g1_ParamLimits

0xb701,	// (0x0002bdc3) list_double_large_graphic_pane_g1

0xb720,	// (0x0002bde2) list_double_large_graphic_pane_g2_ParamLimits

0xb720,	// (0x0002bde2) list_double_large_graphic_pane_g2

0xb5b3,	// (0x0002bc75) list_double_large_graphic_pane_g3_ParamLimits

0xb5b3,	// (0x0002bc75) list_double_large_graphic_pane_g3

0xb731,	// (0x0002bdf3) list_double_large_graphic_pane_g4_ParamLimits

0xb731,	// (0x0002bdf3) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0002fcbe) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0002fcbe) list_double_large_graphic_pane_g

0xb744,	// (0x0002be06) list_double_large_graphic_pane_t1_ParamLimits

0xb744,	// (0x0002be06) list_double_large_graphic_pane_t1

0xb75d,	// (0x0002be1f) list_double_large_graphic_pane_t2_ParamLimits

0xb75d,	// (0x0002be1f) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0002fcc9) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0002fcc9) list_double_large_graphic_pane_t

0xb76f,	// (0x0002be31) list_double2_large_graphic_pane_g1_ParamLimits

0xb76f,	// (0x0002be31) list_double2_large_graphic_pane_g1

0xb5e7,	// (0x0002bca9) list_double2_large_graphic_pane_g2_ParamLimits

0xb5e7,	// (0x0002bca9) list_double2_large_graphic_pane_g2

0xb5f8,	// (0x0002bcba) list_double2_large_graphic_pane_g3_ParamLimits

0xb5f8,	// (0x0002bcba) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0002fcce) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0002fcce) list_double2_large_graphic_pane_g

0xb77b,	// (0x0002be3d) list_double2_large_graphic_pane_t1_ParamLimits

0xb77b,	// (0x0002be3d) list_double2_large_graphic_pane_t1

0xb791,	// (0x0002be53) list_double2_large_graphic_pane_t2_ParamLimits

0xb791,	// (0x0002be53) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0002fcd5) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0002fcd5) list_double2_large_graphic_pane_t

0xb7a3,	// (0x0002be65) list_double_heading_pane_g1_ParamLimits

0xb7a3,	// (0x0002be65) list_double_heading_pane_g1

0xf3c2,	// (0x0002fa84) list_double_heading_pane_g2_ParamLimits

0xf3c2,	// (0x0002fa84) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0002fcda) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0002fcda) list_double_heading_pane_g

0xb7b4,	// (0x0002be76) list_double_heading_pane_t1_ParamLimits

0xb7b4,	// (0x0002be76) list_double_heading_pane_t1

0xb61a,	// (0x0002bcdc) list_double_heading_pane_t2_ParamLimits

0xb61a,	// (0x0002bcdc) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0002fcdf) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0002fcdf) list_double_heading_pane_t

0xb6c1,	// (0x0002bd83) list_double_graphic_heading_pane_g1_ParamLimits

0xb6c1,	// (0x0002bd83) list_double_graphic_heading_pane_g1

0xb7a3,	// (0x0002be65) list_double_graphic_heading_pane_g2_ParamLimits

0xb7a3,	// (0x0002be65) list_double_graphic_heading_pane_g2

0xf3c2,	// (0x0002fa84) list_double_graphic_heading_pane_g3_ParamLimits

0xf3c2,	// (0x0002fa84) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0002fce4) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0002fce4) list_double_graphic_heading_pane_g

0xb7ca,	// (0x0002be8c) list_double_graphic_heading_pane_t1_ParamLimits

0xb7ca,	// (0x0002be8c) list_double_graphic_heading_pane_t1

0xb6ef,	// (0x0002bdb1) list_double_graphic_heading_pane_t2_ParamLimits

0xb6ef,	// (0x0002bdb1) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0002fceb) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0002fceb) list_double_graphic_heading_pane_t

0xb720,	// (0x0002bde2) list_double_time_pane_g1_ParamLimits

0xb720,	// (0x0002bde2) list_double_time_pane_g1

0xb5b3,	// (0x0002bc75) list_double_time_pane_g2_ParamLimits

0xb5b3,	// (0x0002bc75) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0002fcf0) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0002fcf0) list_double_time_pane_g

0xb7e0,	// (0x0002bea2) list_double_time_pane_t1_ParamLimits

0xb7e0,	// (0x0002bea2) list_double_time_pane_t1

0xb7f6,	// (0x0002beb8) list_double_time_pane_t2_ParamLimits

0xb7f6,	// (0x0002beb8) list_double_time_pane_t2

0xb808,	// (0x0002beca) list_double_time_pane_t3_ParamLimits

0xb808,	// (0x0002beca) list_double_time_pane_t3

0xb81a,	// (0x0002bedc) list_double_time_pane_t4_ParamLimits

0xb81a,	// (0x0002bedc) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0002fcf5) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0002fcf5) list_double_time_pane_t

0xb6cd,	// (0x0002bd8f) list_setting_pane_g1_ParamLimits

0xb6cd,	// (0x0002bd8f) list_setting_pane_g1

0xb5f8,	// (0x0002bcba) list_setting_pane_g2_ParamLimits

0xb5f8,	// (0x0002bcba) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0002fcfe) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0002fcfe) list_setting_pane_g

0xb82c,	// (0x0002beee) list_setting_pane_t1_ParamLimits

0xb82c,	// (0x0002beee) list_setting_pane_t1

0xb846,	// (0x0002bf08) list_setting_pane_t2_ParamLimits

0xb846,	// (0x0002bf08) list_setting_pane_t2

0x0002,

0xf641,	// (0x0002fd03) list_setting_pane_t_ParamLimits

0xf641,	// (0x0002fd03) list_setting_pane_t

0xb885,	// (0x0002bf47) set_value_pane_cp_ParamLimits

0xb885,	// (0x0002bf47) set_value_pane_cp

0xb891,	// (0x0002bf53) list_setting_number_pane_g1_ParamLimits

0xb891,	// (0x0002bf53) list_setting_number_pane_g1

0xb89d,	// (0x0002bf5f) list_setting_number_pane_g2_ParamLimits

0xb89d,	// (0x0002bf5f) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x0002fd0a) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x0002fd0a) list_setting_number_pane_g

0xb8a9,	// (0x0002bf6b) list_setting_number_pane_t1_ParamLimits

0xb8a9,	// (0x0002bf6b) list_setting_number_pane_t1

0xb8c2,	// (0x0002bf84) list_setting_number_pane_t2_ParamLimits

0xb8c2,	// (0x0002bf84) list_setting_number_pane_t2

0xb8dc,	// (0x0002bf9e) list_setting_number_pane_t3_ParamLimits

0xb8dc,	// (0x0002bf9e) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x0002fd0f) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x0002fd0f) list_setting_number_pane_t

0xb885,	// (0x0002bf47) set_value_pane_ParamLimits

0xb885,	// (0x0002bf47) set_value_pane

0x3abf,	// (0x00024181) bg_set_opt_pane_ParamLimits

0x3abf,	// (0x00024181) bg_set_opt_pane

0x0051,	// (0x00020713) set_value_pane_t1

0x3ae0,	// (0x000241a2) slider_set_pane_cp3

0x3ae9,	// (0x000241ab) volume_small_pane_cp

0x3af2,	// (0x000241b4) list_form_gen_pane

0x3afb,	// (0x000241bd) scroll_pane_cp8

0xb91f,	// (0x0002bfe1) form_field_data_pane_ParamLimits

0xb91f,	// (0x0002bfe1) form_field_data_pane

0xb936,	// (0x0002bff8) form_field_data_wide_pane_ParamLimits

0xb936,	// (0x0002bff8) form_field_data_wide_pane

0xb956,	// (0x0002c018) form_field_popup_pane_ParamLimits

0xb956,	// (0x0002c018) form_field_popup_pane

0xb976,	// (0x0002c038) form_field_popup_wide_pane_ParamLimits

0xb976,	// (0x0002c038) form_field_popup_wide_pane

0x00e5,	// (0x000207a7) form_field_slider_pane_ParamLimits

0x00e5,	// (0x000207a7) form_field_slider_pane

0x00f8,	// (0x000207ba) form_field_slider_wide_pane_ParamLimits

0x00f8,	// (0x000207ba) form_field_slider_wide_pane

0x3b0c,	// (0x000241ce) data_form_pane

0xb997,	// (0x0002c059) form_field_data_pane_t1

0x3b18,	// (0x000241da) input_focus_pane

0x012d,	// (0x000207ef) data_form_wide_pane

0x014a,	// (0x0002080c) form_field_data_wide_pane_t1

0x3889,	// (0x00023f4b) input_focus_pane_cp6

0xb9b1,	// (0x0002c073) form_field_popup_pane_t1

0x3b18,	// (0x000241da) input_focus_pane_cp7

0x3b46,	// (0x00024208) list_form_pane

0x018c,	// (0x0002084e) form_field_popup_wide_pane_t1

0x3b18,	// (0x000241da) input_focus_pane_cp8

0x3b52,	// (0x00024214) list_form_wide_pane

0xb9d3,	// (0x0002c095) form_field_slider_pane_t1_ParamLimits

0xb9d3,	// (0x0002c095) form_field_slider_pane_t1

0xb9eb,	// (0x0002c0ad) form_field_slider_pane_t2_ParamLimits

0xb9eb,	// (0x0002c0ad) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x0002fd1f) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x0002fd1f) form_field_slider_pane_t

0x3506,	// (0x00023bc8) input_focus_pane_cp9_ParamLimits

0x3506,	// (0x00023bc8) input_focus_pane_cp9

0xba00,	// (0x0002c0c2) slider_cont_pane_ParamLimits

0xba00,	// (0x0002c0c2) slider_cont_pane

0x3b5e,	// (0x00024220) form_field_slider_wide_pane_t1_ParamLimits

0x3b5e,	// (0x00024220) form_field_slider_wide_pane_t1

0x01e8,	// (0x000208aa) form_field_slider_wide_pane_t2_ParamLimits

0x01e8,	// (0x000208aa) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x0002fd24) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x0002fd24) form_field_slider_wide_pane_t

0x3506,	// (0x00023bc8) input_focus_pane_cp10_ParamLimits

0x3506,	// (0x00023bc8) input_focus_pane_cp10

0xba14,	// (0x0002c0d6) slider_cont_pane_cp1_ParamLimits

0xba14,	// (0x0002c0d6) slider_cont_pane_cp1

0xba28,	// (0x0002c0ea) slider_form_pane_cp

0x3b70,	// (0x00024232) input_focus_pane_g1

0x3b78,	// (0x0002423a) input_focus_pane_g2

0x3b80,	// (0x00024242) input_focus_pane_g3

0x3b88,	// (0x0002424a) input_focus_pane_g4

0x3b90,	// (0x00024252) input_focus_pane_g5

0x3b98,	// (0x0002425a) input_focus_pane_g6

0x3ba0,	// (0x00024262) input_focus_pane_g7

0x3ba8,	// (0x0002426a) input_focus_pane_g8

0x3bb0,	// (0x00024272) input_focus_pane_g9

0xe3d7,	// (0x0002ea99) input_focus_pane_g10

0x0009,

0xf667,	// (0x0002fd29) input_focus_pane_g

0x5636,	// (0x00025cf8) wait_border_pane_g3_copy1

0xba30,	// (0x0002c0f2) data_form_pane_t1

0xe3d7,	// (0x0002ea99) wait_anim_pane_g1_copy1

0xbb84,	// (0x0002c246) data_form_wide_pane_t1

0xba4a,	// (0x0002c10c) list_form_graphic_pane_cp_ParamLimits

0xba4a,	// (0x0002c10c) list_form_graphic_pane_cp

0x6562,	// (0x00026c24) slider_form_pane_g1

0x656b,	// (0x00026c2d) slider_form_pane_g2

0x0006,

0xf965,	// (0x00030027) slider_form_pane_g

0xba5c,	// (0x0002c11e) list_form_graphic_pane_ParamLimits

0xba5c,	// (0x0002c11e) list_form_graphic_pane

0x0266,	// (0x00020928) list_form_graphic_pane_g1

0x026e,	// (0x00020930) list_form_graphic_pane_t1_ParamLimits

0x026e,	// (0x00020930) list_form_graphic_pane_t1

0x328b,	// (0x0002394d) list_highlight_pane_cp5_ParamLimits

0x328b,	// (0x0002394d) list_highlight_pane_cp5

0xba6f,	// (0x0002c131) find_pane_g1

0x3bb8,	// (0x0002427a) input_find_pane

0xba78,	// (0x0002c13a) input_find_pane_g1_ParamLimits

0xba78,	// (0x0002c13a) input_find_pane_g1

0xba84,	// (0x0002c146) input_find_pane_t1_ParamLimits

0xba84,	// (0x0002c146) input_find_pane_t1

0xba99,	// (0x0002c15b) input_find_pane_t2_ParamLimits

0xba99,	// (0x0002c15b) input_find_pane_t2

0x0001,

0xf67c,	// (0x0002fd3e) input_find_pane_t_ParamLimits

0xf67c,	// (0x0002fd3e) input_find_pane_t

0x3bc1,	// (0x00024283) input_focus_pane_cp5_ParamLimits

0x3bc1,	// (0x00024283) input_focus_pane_cp5

0x3be0,	// (0x000242a2) bg_popup_window_pane_cp2_ParamLimits

0x3be0,	// (0x000242a2) bg_popup_window_pane_cp2

0x3bed,	// (0x000242af) listscroll_menu_pane_ParamLimits

0x3bed,	// (0x000242af) listscroll_menu_pane

0xd2cd,	// (0x0002d98f) popup_submenu_window_ParamLimits

0xd2cd,	// (0x0002d98f) popup_submenu_window

0x3c25,	// (0x000242e7) find_popup_pane_g1

0x3c2d,	// (0x000242ef) input_popup_find_pane_cp

0x3c37,	// (0x000242f9) input_focus_pane_cp4_ParamLimits

0x3c37,	// (0x000242f9) input_focus_pane_cp4

0x3c51,	// (0x00024313) input_popup_find_pane_t1_ParamLimits

0x3c51,	// (0x00024313) input_popup_find_pane_t1

0x31ab,	// (0x0002386d) bg_popup_sub_pane_cp

0x3c7f,	// (0x00024341) listscroll_popup_sub_pane

0x3c87,	// (0x00024349) list_submenu_pane_ParamLimits

0x3c87,	// (0x00024349) list_submenu_pane

0x3c98,	// (0x0002435a) scroll_pane_cp4

0x3ca0,	// (0x00024362) list_single_popup_submenu_pane_ParamLimits

0x3ca0,	// (0x00024362) list_single_popup_submenu_pane

0x3cb4,	// (0x00024376) list_single_popup_submenu_pane_g1

0x3cbc,	// (0x0002437e) list_single_popup_submenu_pane_t1_ParamLimits

0x3cbc,	// (0x0002437e) list_single_popup_submenu_pane_t1

0x3506,	// (0x00023bc8) bg_active_tab_pane_cp1_ParamLimits

0x3506,	// (0x00023bc8) bg_active_tab_pane_cp1

0x3cd1,	// (0x00024393) tabs_2_active_pane_g1

0xd307,	// (0x0002d9c9) tabs_2_active_pane_t1

0x3506,	// (0x00023bc8) bg_passive_tab_pane_cp1_ParamLimits

0x3506,	// (0x00023bc8) bg_passive_tab_pane_cp1

0x3cd1,	// (0x00024393) tabs_2_passive_pane_g1

0xd307,	// (0x0002d9c9) tabs_2_passive_pane_t1

0x328b,	// (0x0002394d) bg_active_tab_pane_cp4

0xd319,	// (0x0002d9db) tabs_2_long_active_pane_t1

0x4ae7,	// (0x000251a9) bg_passive_tab_pane_cp4

0x1dc7,	// (0x00022489) list_single_midp_graphic_pane_g4_ParamLimits

0x328b,	// (0x0002394d) bg_active_tab_pane_cp5

0xd32c,	// (0x0002d9ee) tabs_3_long_active_pane_t1

0x4ae7,	// (0x000251a9) bg_passive_tab_pane_cp5

0x1dc7,	// (0x00022489) list_single_midp_graphic_pane_g4

0x328b,	// (0x0002394d) bg_popup_window_pane_cp13_ParamLimits

0x328b,	// (0x0002394d) bg_popup_window_pane_cp13

0x3d33,	// (0x000243f5) listscroll_popup_fast_pane_ParamLimits

0x3d33,	// (0x000243f5) listscroll_popup_fast_pane

0x3d42,	// (0x00024404) grid_popup_fast_pane_ParamLimits

0x3d42,	// (0x00024404) grid_popup_fast_pane

0x3d54,	// (0x00024416) scroll_pane_cp9_ParamLimits

0x3d54,	// (0x00024416) scroll_pane_cp9

0x7ea1,	// (0x00028563) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7ea1,	// (0x00028563) list_single_graphic_hl_pane_t1_cp2

0x3d78,	// (0x0002443a) input_focus_pane_cp20_ParamLimits

0x3d78,	// (0x0002443a) input_focus_pane_cp20

0x3d86,	// (0x00024448) query_popup_data_pane_t1_ParamLimits

0x3d86,	// (0x00024448) query_popup_data_pane_t1

0x3d99,	// (0x0002445b) query_popup_data_pane_t2_ParamLimits

0x3d99,	// (0x0002445b) query_popup_data_pane_t2

0x3ddf,	// (0x000244a1) query_popup_data_pane_t3_ParamLimits

0x3ddf,	// (0x000244a1) query_popup_data_pane_t3

0x3e20,	// (0x000244e2) query_popup_data_pane_t4_ParamLimits

0x3e20,	// (0x000244e2) query_popup_data_pane_t4

0x3e5c,	// (0x0002451e) query_popup_data_pane_t5_ParamLimits

0x3e5c,	// (0x0002451e) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x0002fd43) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x0002fd43) query_popup_data_pane_t

0x3b70,	// (0x00024232) bg_set_opt_pane_g1

0x3b78,	// (0x0002423a) bg_set_opt_pane_g2

0x3b80,	// (0x00024242) bg_set_opt_pane_g3

0x3b88,	// (0x0002424a) bg_set_opt_pane_g4

0x3b90,	// (0x00024252) bg_set_opt_pane_g5

0x3b98,	// (0x0002425a) bg_set_opt_pane_g6

0x3ba0,	// (0x00024262) bg_set_opt_pane_g7

0x3ba8,	// (0x0002426a) bg_set_opt_pane_g8

0x3bb0,	// (0x00024272) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x0002fd4e) bg_set_opt_pane_g

0x146b,	// (0x00021b2d) control_top_pane_stacon_ParamLimits

0x146b,	// (0x00021b2d) control_top_pane_stacon

0x14be,	// (0x00021b80) signal_pane_stacon_ParamLimits

0x14be,	// (0x00021b80) signal_pane_stacon

0x444e,	// (0x00024b10) stacon_top_pane_g1_ParamLimits

0x444e,	// (0x00024b10) stacon_top_pane_g1

0x14e3,	// (0x00021ba5) title_pane_stacon_ParamLimits

0x14e3,	// (0x00021ba5) title_pane_stacon

0x150d,	// (0x00021bcf) uni_indicator_pane_stacon_ParamLimits

0x150d,	// (0x00021bcf) uni_indicator_pane_stacon

0x1522,	// (0x00021be4) battery_pane_stacon_ParamLimits

0x1522,	// (0x00021be4) battery_pane_stacon

0x1566,	// (0x00021c28) control_bottom_pane_stacon_ParamLimits

0x1566,	// (0x00021c28) control_bottom_pane_stacon

0x1589,	// (0x00021c4b) navi_pane_stacon_ParamLimits

0x1589,	// (0x00021c4b) navi_pane_stacon

0x4470,	// (0x00024b32) stacon_bottom_pane_g1_ParamLimits

0x4470,	// (0x00024b32) stacon_bottom_pane_g1

0x11ce,	// (0x00021890) aid_levels_signal_lsc_ParamLimits

0x11ce,	// (0x00021890) aid_levels_signal_lsc

0x11e4,	// (0x000218a6) signal_pane_stacon_g1_ParamLimits

0x11e4,	// (0x000218a6) signal_pane_stacon_g1

0x11f8,	// (0x000218ba) signal_pane_stacon_g2_ParamLimits

0x11f8,	// (0x000218ba) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x0002fd61) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x0002fd61) signal_pane_stacon_g

0x122d,	// (0x000218ef) title_pane_stacon_t1_ParamLimits

0x122d,	// (0x000218ef) title_pane_stacon_t1

0x3ea0,	// (0x00024562) uni_indicator_pane_stacon_g1

0x3eaa,	// (0x0002456c) uni_indicator_pane_stacon_g2

0x3eb4,	// (0x00024576) uni_indicator_pane_stacon_g3

0x3ebe,	// (0x00024580) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x0002fd6d) uni_indicator_pane_stacon_g

0x1252,	// (0x00021914) control_top_pane_stacon_g1

0x125a,	// (0x0002191c) control_top_pane_stacon_t1_ParamLimits

0x125a,	// (0x0002191c) control_top_pane_stacon_t1

0x1291,	// (0x00021953) aid_levels_battery_lsc_ParamLimits

0x1291,	// (0x00021953) aid_levels_battery_lsc

0x12a8,	// (0x0002196a) battery_pane_stacon_g1_ParamLimits

0x12a8,	// (0x0002196a) battery_pane_stacon_g1

0x12bb,	// (0x0002197d) battery_pane_stacon_g2_ParamLimits

0x12bb,	// (0x0002197d) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x0002fd76) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x0002fd76) battery_pane_stacon_g

0x12f9,	// (0x000219bb) navi_icon_pane_stacon

0x130d,	// (0x000219cf) navi_navi_pane_stacon

0x12f9,	// (0x000219bb) navi_text_pane_stacon

0x1252,	// (0x00021914) control_bottom_pane_stacon_g1

0x1321,	// (0x000219e3) control_bottom_pane_stacon_t1_ParamLimits

0x1321,	// (0x000219e3) control_bottom_pane_stacon_t1

0xd33e,	// (0x0002da00) grid_app_pane_ParamLimits

0xd33e,	// (0x0002da00) grid_app_pane

0xd376,	// (0x0002da38) scroll_pane_cp15_ParamLimits

0xd376,	// (0x0002da38) scroll_pane_cp15

0xd38b,	// (0x0002da4d) cell_app_pane_ParamLimits

0xd38b,	// (0x0002da4d) cell_app_pane

0xd3d0,	// (0x0002da92) cell_app_pane_g1_ParamLimits

0xd3d0,	// (0x0002da92) cell_app_pane_g1

0x3f63,	// (0x00024625) cell_app_pane_g2_ParamLimits

0x3f63,	// (0x00024625) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x0002fd7b) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x0002fd7b) cell_app_pane_g

0xd3f4,	// (0x0002dab6) cell_app_pane_t1_ParamLimits

0xd3f4,	// (0x0002dab6) cell_app_pane_t1

0x3f86,	// (0x00024648) grid_highlight_pane_ParamLimits

0x3f86,	// (0x00024648) grid_highlight_pane

0x3b70,	// (0x00024232) cell_highlight_pane_g1

0x3b78,	// (0x0002423a) cell_highlight_pane_g2

0x3b80,	// (0x00024242) cell_highlight_pane_g3

0x3b88,	// (0x0002424a) cell_highlight_pane_g4

0x3b90,	// (0x00024252) cell_highlight_pane_g5

0x3b98,	// (0x0002425a) cell_highlight_pane_g6

0x3ba0,	// (0x00024262) cell_highlight_pane_g7

0x3ba8,	// (0x0002426a) cell_highlight_pane_g8

0x3bb0,	// (0x00024272) cell_highlight_pane_g9

0xe3d7,	// (0x0002ea99) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x0002fd29) cell_highlight_pane_g

0x3f97,	// (0x00024659) bg_scroll_pane

0x136b,	// (0x00021a2d) scroll_handle_pane

0x3fde,	// (0x000246a0) scroll_bg_pane_g1

0x3ff3,	// (0x000246b5) scroll_bg_pane_g2

0x400b,	// (0x000246cd) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x0002fd80) scroll_bg_pane_g

0x4020,	// (0x000246e2) scroll_handle_focus_pane_ParamLimits

0x4020,	// (0x000246e2) scroll_handle_focus_pane

0x3fde,	// (0x000246a0) scroll_handle_pane_g1

0x402d,	// (0x000246ef) scroll_handle_pane_g2

0x400b,	// (0x000246cd) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x0002fd87) scroll_handle_pane_g

0x3c37,	// (0x000242f9) bg_popup_sub_pane_cp21_ParamLimits

0x3c37,	// (0x000242f9) bg_popup_sub_pane_cp21

0x4041,	// (0x00024703) popup_fep_japan_predictive_window_t1_ParamLimits

0x4041,	// (0x00024703) popup_fep_japan_predictive_window_t1

0x405b,	// (0x0002471d) popup_fep_japan_predictive_window_t2_ParamLimits

0x405b,	// (0x0002471d) popup_fep_japan_predictive_window_t2

0x408e,	// (0x00024750) popup_fep_japan_predictive_window_t3_ParamLimits

0x408e,	// (0x00024750) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x0002fd8e) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x0002fd8e) popup_fep_japan_predictive_window_t

0x31ab,	// (0x0002386d) bg_popup_sub_pane_cp23

0x40c5,	// (0x00024787) listscroll_japin_cand_pane

0x40cd,	// (0x0002478f) popup_fep_japan_candidate_window_t1

0x40db,	// (0x0002479d) candidate_pane_ParamLimits

0x40db,	// (0x0002479d) candidate_pane

0x40ed,	// (0x000247af) scroll_pane_cp30

0x40f5,	// (0x000247b7) list_single_popup_jap_candidate_pane_ParamLimits

0x40f5,	// (0x000247b7) list_single_popup_jap_candidate_pane

0x31ab,	// (0x0002386d) list_highlight_pane_cp30

0x410a,	// (0x000247cc) list_single_popup_jap_candidate_pane_t1

0x4119,	// (0x000247db) level_1_signal

0x412b,	// (0x000247ed) level_2_signal

0x413e,	// (0x00024800) level_3_signal

0x4151,	// (0x00024813) level_4_signal

0x4164,	// (0x00024826) level_5_signal

0x4177,	// (0x00024839) level_6_signal

0x418a,	// (0x0002484c) level_7_signal

0x4119,	// (0x000247db) level_1_battery

0x412b,	// (0x000247ed) level_2_battery

0x413e,	// (0x00024800) level_3_battery

0x4151,	// (0x00024813) level_4_battery

0x4164,	// (0x00024826) level_5_battery

0x4177,	// (0x00024839) level_6_battery

0x418a,	// (0x0002484c) level_7_battery

0x41b5,	// (0x00024877) list_menu_pane_ParamLimits

0x41b5,	// (0x00024877) list_menu_pane

0x41cb,	// (0x0002488d) scroll_pane_cp25_ParamLimits

0x41cb,	// (0x0002488d) scroll_pane_cp25

0x41e4,	// (0x000248a6) list_double2_graphic_pane_cp2_ParamLimits

0x41e4,	// (0x000248a6) list_double2_graphic_pane_cp2

0x41e4,	// (0x000248a6) list_double2_large_graphic_pane_cp2_ParamLimits

0x41e4,	// (0x000248a6) list_double2_large_graphic_pane_cp2

0x41e4,	// (0x000248a6) list_double2_pane_cp2_ParamLimits

0x41e4,	// (0x000248a6) list_double2_pane_cp2

0x41e4,	// (0x000248a6) list_double_graphic_pane_cp2_ParamLimits

0x41e4,	// (0x000248a6) list_double_graphic_pane_cp2

0x41e4,	// (0x000248a6) list_double_large_graphic_pane_cp2_ParamLimits

0x41e4,	// (0x000248a6) list_double_large_graphic_pane_cp2

0x41e4,	// (0x000248a6) list_double_number_pane_cp2_ParamLimits

0x41e4,	// (0x000248a6) list_double_number_pane_cp2

0x41e4,	// (0x000248a6) list_double_pane_cp2_ParamLimits

0x41e4,	// (0x000248a6) list_double_pane_cp2

0xd40b,	// (0x0002dacd) list_single_2graphic_pane_cp2_ParamLimits

0xd40b,	// (0x0002dacd) list_single_2graphic_pane_cp2

0xd40b,	// (0x0002dacd) list_single_graphic_heading_pane_cp2_ParamLimits

0xd40b,	// (0x0002dacd) list_single_graphic_heading_pane_cp2

0xd40b,	// (0x0002dacd) list_single_graphic_pane_cp2_ParamLimits

0xd40b,	// (0x0002dacd) list_single_graphic_pane_cp2

0xd40b,	// (0x0002dacd) list_single_heading_pane_cp2_ParamLimits

0xd40b,	// (0x0002dacd) list_single_heading_pane_cp2

0x4221,	// (0x000248e3) list_single_large_graphic_pane_cp2_ParamLimits

0x4221,	// (0x000248e3) list_single_large_graphic_pane_cp2

0xd40b,	// (0x0002dacd) list_single_number_heading_pane_cp2_ParamLimits

0xd40b,	// (0x0002dacd) list_single_number_heading_pane_cp2

0xd40b,	// (0x0002dacd) list_single_number_pane_cp2_ParamLimits

0xd40b,	// (0x0002dacd) list_single_number_pane_cp2

0xd40b,	// (0x0002dacd) list_single_pane_cp2_ParamLimits

0xd40b,	// (0x0002dacd) list_single_pane_cp2

0x429d,	// (0x0002495f) bg_popup_sub_pane_cp22

0x141d,	// (0x00021adf) popup_side_volume_key_window_g1

0x1447,	// (0x00021b09) popup_side_volume_key_window_t1

0x1463,	// (0x00021b25) volume_small_pane_cp1

0x3506,	// (0x00023bc8) bg_popup_sub_pane_cp24_ParamLimits

0x3506,	// (0x00023bc8) bg_popup_sub_pane_cp24

0x42b3,	// (0x00024975) fep_china_uni_candidate_pane_ParamLimits

0x42b3,	// (0x00024975) fep_china_uni_candidate_pane

0x42c7,	// (0x00024989) fep_china_uni_entry_pane

0x42d7,	// (0x00024999) popup_fep_china_uni_window_g1

0x42f3,	// (0x000249b5) fep_china_uni_entry_pane_g1

0x42fb,	// (0x000249bd) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x0002fdbf) fep_china_uni_entry_pane_g

0x4303,	// (0x000249c5) fep_entry_item_pane

0x430d,	// (0x000249cf) fep_candidate_item_pane

0x4315,	// (0x000249d7) fep_china_uni_candidate_pane_g1

0x431d,	// (0x000249df) fep_china_uni_candidate_pane_g2

0x4325,	// (0x000249e7) fep_china_uni_candidate_pane_g3

0x432d,	// (0x000249ef) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x0002fdc4) fep_china_uni_candidate_pane_g

0xe3d7,	// (0x0002ea99) fep_entry_item_pane_g1

0x4335,	// (0x000249f7) fep_entry_item_pane_t1_ParamLimits

0x4335,	// (0x000249f7) fep_entry_item_pane_t1

0x434b,	// (0x00024a0d) fep_candidate_item_pane_t1_ParamLimits

0x434b,	// (0x00024a0d) fep_candidate_item_pane_t1

0x4360,	// (0x00024a22) fep_candidate_item_pane_t2_ParamLimits

0x4360,	// (0x00024a22) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x0002fdcd) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x0002fdcd) fep_candidate_item_pane_t

0x328b,	// (0x0002394d) list_highlight_pane_cp31_ParamLimits

0x328b,	// (0x0002394d) list_highlight_pane_cp31

0x4372,	// (0x00024a34) level_1_signal_lsc

0x437b,	// (0x00024a3d) level_2_signal_lsc

0x4384,	// (0x00024a46) level_3_signal_lsc

0x438d,	// (0x00024a4f) level_4_signal_lsc

0x4396,	// (0x00024a58) level_5_signal_lsc

0x439f,	// (0x00024a61) level_6_signal_lsc

0x43a8,	// (0x00024a6a) level_7_signal_lsc

0x43a8,	// (0x00024a6a) level_1_battery_lsc

0x43b1,	// (0x00024a73) level_2_battery_lsc

0x43ba,	// (0x00024a7c) level_3_battery_lsc

0x43c3,	// (0x00024a85) level_4_battery_lsc

0x43cc,	// (0x00024a8e) level_5_battery_lsc

0x43d5,	// (0x00024a97) level_6_battery_lsc

0x4372,	// (0x00024a34) level_7_battery_lsc

0x43de,	// (0x00024aa0) scroll_handle_focus_pane_g1

0x43e7,	// (0x00024aa9) scroll_handle_focus_pane_g2

0x43f0,	// (0x00024ab2) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x0002fdd2) scroll_handle_focus_pane_g

0xbaae,	// (0x0002c170) list_single_2graphic_pane_g1_ParamLimits

0xbaae,	// (0x0002c170) list_single_2graphic_pane_g1

0xb57c,	// (0x0002bc3e) list_single_2graphic_pane_g2_ParamLimits

0xb57c,	// (0x0002bc3e) list_single_2graphic_pane_g2

0x0390,	// (0x00020a52) list_single_2graphic_pane_g3_ParamLimits

0x0390,	// (0x00020a52) list_single_2graphic_pane_g3

0xbaba,	// (0x0002c17c) list_single_2graphic_pane_g4_ParamLimits

0xbaba,	// (0x0002c17c) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x0002fdd9) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x0002fdd9) list_single_2graphic_pane_g

0xbacb,	// (0x0002c18d) list_single_2graphic_pane_t1_ParamLimits

0xbacb,	// (0x0002c18d) list_single_2graphic_pane_t1

0xbaf9,	// (0x0002c1bb) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbaf9,	// (0x0002c1bb) list_double2_graphic_large_graphic_pane_g1

0xb5e7,	// (0x0002bca9) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb5e7,	// (0x0002bca9) list_double2_graphic_large_graphic_pane_g2

0xb5f8,	// (0x0002bcba) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb5f8,	// (0x0002bcba) list_double2_graphic_large_graphic_pane_g3

0xbb0b,	// (0x0002c1cd) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbb0b,	// (0x0002c1cd) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x0002fde2) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x0002fde2) list_double2_graphic_large_graphic_pane_g

0xbb17,	// (0x0002c1d9) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbb17,	// (0x0002c1d9) list_double2_graphic_large_graphic_pane_t1

0xbb2d,	// (0x0002c1ef) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbb2d,	// (0x0002c1ef) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x0002fdeb) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x0002fdeb) list_double2_graphic_large_graphic_pane_t

0x453b,	// (0x00024bfd) popup_fast_swap_window_ParamLimits

0x453b,	// (0x00024bfd) popup_fast_swap_window

0x4557,	// (0x00024c19) popup_side_volume_key_window

0x4573,	// (0x00024c35) stacon_top_pane

0x457d,	// (0x00024c3f) status_pane_ParamLimits

0x457d,	// (0x00024c3f) status_pane

0xd498,	// (0x0002db5a) status_small_pane

0x31ab,	// (0x0002386d) control_pane

0x31ab,	// (0x0002386d) stacon_bottom_pane

0x3afb,	// (0x000241bd) scroll_pane_cp121

0x3af2,	// (0x000241b4) set_content_pane

0x43f9,	// (0x00024abb) bg_active_tab_pane_g1_cp1

0x4402,	// (0x00024ac4) bg_active_tab_pane_g2_cp1

0x440b,	// (0x00024acd) bg_active_tab_pane_g3_cp1

0x43f9,	// (0x00024abb) bg_passive_tab_pane_g1_cp1

0x4402,	// (0x00024ac4) bg_passive_tab_pane_g2_cp1

0x440b,	// (0x00024acd) bg_passive_tab_pane_g3_cp1

0x4414,	// (0x00024ad6) bg_active_tab_pane_g1_cp2

0x4402,	// (0x00024ac4) bg_active_tab_pane_g2_cp2

0x441d,	// (0x00024adf) bg_active_tab_pane_g3_cp2

0x4414,	// (0x00024ad6) bg_passive_tab_pane_g1_cp2

0x4402,	// (0x00024ac4) bg_passive_tab_pane_g2_cp2

0x441d,	// (0x00024adf) bg_passive_tab_pane_g3_cp2

0x4426,	// (0x00024ae8) bg_active_tab_pane_g1_cp3

0x4402,	// (0x00024ac4) bg_active_tab_pane_g2_cp3

0x442f,	// (0x00024af1) bg_active_tab_pane_g3_cp3

0x4426,	// (0x00024ae8) bg_passive_tab_pane_g1_cp3

0x4402,	// (0x00024ac4) bg_passive_tab_pane_g2_cp3

0x442f,	// (0x00024af1) bg_passive_tab_pane_g3_cp3

0x4438,	// (0x00024afa) bg_active_tab_pane_g1_cp4

0x4402,	// (0x00024ac4) bg_active_tab_pane_g2_cp4

0x4443,	// (0x00024b05) bg_active_tab_pane_g3_cp4

0x4438,	// (0x00024afa) bg_passive_tab_pane_g1_cp4

0x4402,	// (0x00024ac4) bg_passive_tab_pane_g2_cp4

0x4443,	// (0x00024b05) bg_passive_tab_pane_g3_cp4

0x448c,	// (0x00024b4e) bg_active_tab_pane_g1_cp5

0x4402,	// (0x00024ac4) bg_active_tab_pane_g2_cp5

0x4495,	// (0x00024b57) bg_active_tab_pane_g3_cp5

0x448c,	// (0x00024b4e) bg_passive_tab_pane_g1_cp5

0x4402,	// (0x00024ac4) bg_passive_tab_pane_g2_cp5

0x4495,	// (0x00024b57) bg_passive_tab_pane_g3_cp5

0x6b76,	// (0x00027238) list_set_graphic_pane_ParamLimits

0x6b76,	// (0x00027238) list_set_graphic_pane

0x31ab,	// (0x0002386d) bg_set_opt_pane_cp4

0x44be,	// (0x00024b80) list_set_graphic_pane_g1_ParamLimits

0x44be,	// (0x00024b80) list_set_graphic_pane_g1

0x44ca,	// (0x00024b8c) list_set_graphic_pane_g2_ParamLimits

0x44ca,	// (0x00024b8c) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x0002fdf0) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x0002fdf0) list_set_graphic_pane_g

0x0009,

0xfa9e,	// (0x00030160) volume_small_pane_cp_g

0x44ee,	// (0x00024bb0) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x44ee,	// (0x00024bb0) list_double2_large_graphic_pane_g1_cp2

0x44fa,	// (0x00024bbc) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x44fa,	// (0x00024bbc) list_double2_large_graphic_pane_g2_cp2

0x450b,	// (0x00024bcd) list_double2_large_graphic_pane_g3_cp2

0x4513,	// (0x00024bd5) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4513,	// (0x00024bd5) list_double2_large_graphic_pane_t1_cp2

0x4529,	// (0x00024beb) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4529,	// (0x00024beb) list_double2_large_graphic_pane_t2_cp2

0x6115,	// (0x000267d7) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6115,	// (0x000267d7) list_double_large_graphic_pane_g1_cp2

0x6126,	// (0x000267e8) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6126,	// (0x000267e8) list_double_large_graphic_pane_g2_cp2

0x46a4,	// (0x00024d66) list_double_large_graphic_pane_g3_cp2

0x6137,	// (0x000267f9) list_double_large_graphic_pane_g4_cp

0x613f,	// (0x00026801) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x613f,	// (0x00026801) list_double_large_graphic_pane_t1_cp2

0x6156,	// (0x00026818) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6156,	// (0x00026818) list_double_large_graphic_pane_t2_cp2

0x4596,	// (0x00024c58) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4596,	// (0x00024c58) list_double2_graphic_pane_g1_cp2

0x45a4,	// (0x00024c66) list_double2_graphic_pane_g2_cp2_ParamLimits

0x45a4,	// (0x00024c66) list_double2_graphic_pane_g2_cp2

0x45b5,	// (0x00024c77) list_double2_graphic_pane_g3_cp2

0x45bf,	// (0x00024c81) list_double2_graphic_pane_t1_cp2_ParamLimits

0x45bf,	// (0x00024c81) list_double2_graphic_pane_t1_cp2

0x45d5,	// (0x00024c97) list_double2_graphic_pane_t2_cp2_ParamLimits

0x45d5,	// (0x00024c97) list_double2_graphic_pane_t2_cp2

0x45e7,	// (0x00024ca9) list_single_number_heading_pane_g1_cp2_ParamLimits

0x45e7,	// (0x00024ca9) list_single_number_heading_pane_g1_cp2

0x45f3,	// (0x00024cb5) list_single_number_heading_pane_g2_cp2

0x45fb,	// (0x00024cbd) list_single_number_heading_pane_t1_cp2_ParamLimits

0x45fb,	// (0x00024cbd) list_single_number_heading_pane_t1_cp2

0x4611,	// (0x00024cd3) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4611,	// (0x00024cd3) list_single_number_heading_pane_t2_cp2

0x4623,	// (0x00024ce5) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4623,	// (0x00024ce5) list_single_number_heading_pane_t3_cp2

0x45e7,	// (0x00024ca9) list_single_heading_pane_g1_cp2_ParamLimits

0x45e7,	// (0x00024ca9) list_single_heading_pane_g1_cp2

0x45f3,	// (0x00024cb5) list_single_heading_pane_g2_cp2

0x45fb,	// (0x00024cbd) list_single_heading_pane_t1_cp2_ParamLimits

0x45fb,	// (0x00024cbd) list_single_heading_pane_t1_cp2

0x5f1d,	// (0x000265df) list_single_heading_pane_t2_cp2_ParamLimits

0x5f1d,	// (0x000265df) list_single_heading_pane_t2_cp2

0x5e65,	// (0x00026527) list_double_graphic_pane_g1_cp2_ParamLimits

0x5e65,	// (0x00026527) list_double_graphic_pane_g1_cp2

0x5e71,	// (0x00026533) list_double_graphic_pane_g2_cp2_ParamLimits

0x5e71,	// (0x00026533) list_double_graphic_pane_g2_cp2

0x5e80,	// (0x00026542) list_double_graphic_pane_g3_cp2

0x5e88,	// (0x0002654a) list_double_graphic_pane_t1_cp2_ParamLimits

0x5e88,	// (0x0002654a) list_double_graphic_pane_t1_cp2

0x5e9e,	// (0x00026560) list_double_graphic_pane_t2_cp2_ParamLimits

0x5e9e,	// (0x00026560) list_double_graphic_pane_t2_cp2

0x4698,	// (0x00024d5a) list_double_number_pane_g1_cp2_ParamLimits

0x4698,	// (0x00024d5a) list_double_number_pane_g1_cp2

0x46a4,	// (0x00024d66) list_double_number_pane_g2_cp2

0x5e29,	// (0x000264eb) list_double_number_pane_t1_cp2_ParamLimits

0x5e29,	// (0x000264eb) list_double_number_pane_t1_cp2

0x5e3d,	// (0x000264ff) list_double_number_pane_t2_cp2_ParamLimits

0x5e3d,	// (0x000264ff) list_double_number_pane_t2_cp2

0x5e53,	// (0x00026515) list_double_number_pane_t3_cp2_ParamLimits

0x5e53,	// (0x00026515) list_double_number_pane_t3_cp2

0x5d12,	// (0x000263d4) list_single_graphic_pane_g1_cp2_ParamLimits

0x5d12,	// (0x000263d4) list_single_graphic_pane_g1_cp2

0x46fc,	// (0x00024dbe) list_single_graphic_pane_g2_cp2_ParamLimits

0x46fc,	// (0x00024dbe) list_single_graphic_pane_g2_cp2

0x4708,	// (0x00024dca) list_single_graphic_pane_g3_cp2

0x5ce8,	// (0x000263aa) list_single_graphic_pane_t1_cp2_ParamLimits

0x5ce8,	// (0x000263aa) list_single_graphic_pane_t1_cp2

0x46fc,	// (0x00024dbe) list_single_number_pane_g1_cp2_ParamLimits

0x46fc,	// (0x00024dbe) list_single_number_pane_g1_cp2

0x4708,	// (0x00024dca) list_single_number_pane_g2_cp2

0x5ce8,	// (0x000263aa) list_single_number_pane_t1_cp2_ParamLimits

0x5ce8,	// (0x000263aa) list_single_number_pane_t1_cp2

0x5cfe,	// (0x000263c0) list_single_number_pane_t2_cp2_ParamLimits

0x5cfe,	// (0x000263c0) list_single_number_pane_t2_cp2

0x44fa,	// (0x00024bbc) list_double2_pane_g1_cp2_ParamLimits

0x44fa,	// (0x00024bbc) list_double2_pane_g1_cp2

0x450b,	// (0x00024bcd) list_double2_pane_g2_cp2

0x4670,	// (0x00024d32) list_double2_pane_t1_cp2_ParamLimits

0x4670,	// (0x00024d32) list_double2_pane_t1_cp2

0x4686,	// (0x00024d48) list_double2_pane_t2_cp2_ParamLimits

0x4686,	// (0x00024d48) list_double2_pane_t2_cp2

0x4698,	// (0x00024d5a) list_double_pane_g1_cp2_ParamLimits

0x4698,	// (0x00024d5a) list_double_pane_g1_cp2

0x46a4,	// (0x00024d66) list_double_pane_g2_cp2

0x46ac,	// (0x00024d6e) list_double_pane_t1_cp2_ParamLimits

0x46ac,	// (0x00024d6e) list_double_pane_t1_cp2

0x46c2,	// (0x00024d84) list_double_pane_t2_cp2_ParamLimits

0x46c2,	// (0x00024d84) list_double_pane_t2_cp2

0x46ec,	// (0x00024dae) list_single_pane_cp2_g3

0x46fc,	// (0x00024dbe) list_single_pane_g1_cp2_ParamLimits

0x46fc,	// (0x00024dbe) list_single_pane_g1_cp2

0x4708,	// (0x00024dca) list_single_pane_g2_cp2

0x4710,	// (0x00024dd2) list_single_pane_t1_cp2_ParamLimits

0x4710,	// (0x00024dd2) list_single_pane_t1_cp2

0x4728,	// (0x00024dea) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4728,	// (0x00024dea) list_single_large_graphic_pane_g1_cp2

0x4734,	// (0x00024df6) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4734,	// (0x00024df6) list_single_large_graphic_pane_g2_cp2

0x4740,	// (0x00024e02) list_single_large_graphic_pane_g3_cp2

0x4748,	// (0x00024e0a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4748,	// (0x00024e0a) list_single_large_graphic_pane_g4_cp1

0x4762,	// (0x00024e24) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4762,	// (0x00024e24) list_single_large_graphic_pane_t1_cp2

0x5ca8,	// (0x0002636a) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5ca8,	// (0x0002636a) list_single_graphic_heading_pane_g1_cp2

0x5c75,	// (0x00026337) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5c75,	// (0x00026337) list_single_graphic_heading_pane_g4_cp2

0x4708,	// (0x00024dca) list_single_graphic_heading_pane_g5_cp2

0x5cb4,	// (0x00026376) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5cb4,	// (0x00026376) list_single_graphic_heading_pane_t1_cp2

0x5cd6,	// (0x00026398) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5cd6,	// (0x00026398) list_single_graphic_heading_pane_t2_cp2

0x5c69,	// (0x0002632b) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5c69,	// (0x0002632b) list_single_2graphic_pane_g1_cp2

0x5c75,	// (0x00026337) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5c75,	// (0x00026337) list_single_2graphic_pane_g2_cp2

0x4708,	// (0x00024dca) list_single_2graphic_pane_g3_cp2

0x5c86,	// (0x00026348) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5c86,	// (0x00026348) list_single_2graphic_pane_g4_cp2

0x5c92,	// (0x00026354) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5c92,	// (0x00026354) list_single_2graphic_pane_t1_cp2

0xe3d7,	// (0x0002ea99) list_highlight_pane_g10_cp1

0x5841,	// (0x00025f03) list_highlight_pane_g1_cp1

0x5849,	// (0x00025f0b) list_highlight_pane_g2_cp1

0x5851,	// (0x00025f13) list_highlight_pane_g3_cp1

0x5859,	// (0x00025f1b) list_highlight_pane_g4_cp1

0x5861,	// (0x00025f23) list_highlight_pane_g5_cp1

0x5869,	// (0x00025f2b) list_highlight_pane_g6_cp1

0x5871,	// (0x00025f33) list_highlight_pane_g7_cp1

0x5879,	// (0x00025f3b) list_highlight_pane_g8_cp1

0x5881,	// (0x00025f43) list_highlight_pane_g9_cp1

0xdaf3,	// (0x0002e1b5) form_field_slider_pane_t3

0xdb01,	// (0x0002e1c3) form_field_slider_pane_t4

0x577d,	// (0x00025e3f) slider_form_pane_ParamLimits

0x577d,	// (0x00025e3f) slider_form_pane

0x31ab,	// (0x0002386d) control_abbreviations

0x31ab,	// (0x0002386d) control_conventions

0x31ab,	// (0x0002386d) control_definitions

0x31ab,	// (0x0002386d) format_table_attribute

0x5f67,	// (0x00026629) bg_popup_preview_window_pane_g9

0x31ab,	// (0x0002386d) format_table_data2

0x31ab,	// (0x0002386d) format_table_data3

0x31ab,	// (0x0002386d) format_table_data_example

0x0008,

0x31ab,	// (0x0002386d) intro_purpose

0xf8c5,	// (0x0002ff87) bg_popup_preview_window_pane_g

0x31ab,	// (0x0002386d) texts_category

0x31ab,	// (0x0002386d) texts_graphics

0x4778,	// (0x00024e3a) text_digital

0x4787,	// (0x00024e49) text_primary

0x4796,	// (0x00024e58) text_primary_small

0x47a5,	// (0x00024e67) text_secondary

0x47b4,	// (0x00024e76) text_title

0x66aa,	// (0x00026d6c) bg_passive_tab_pane_g1_cp3_srt

0x4402,	// (0x00024ac4) bg_passive_tab_pane_g2_cp3_srt

0x66b3,	// (0x00026d75) bg_passive_tab_pane_g3_cp3_srt

0x3506,	// (0x00023bc8) bg_active_tab_pane_cp3_srt_ParamLimits

0x3506,	// (0x00023bc8) bg_active_tab_pane_cp3_srt

0x66bc,	// (0x00026d7e) tabs_4_active_pane_srt_g1

0xde45,	// (0x0002e507) tabs_4_active_pane_srt_t1_ParamLimits

0xde45,	// (0x0002e507) tabs_4_active_pane_srt_t1

0x66aa,	// (0x00026d6c) bg_active_tab_pane_g1_cp3_copy1

0x4402,	// (0x00024ac4) bg_active_tab_pane_g2_cp3_copy1

0x66b3,	// (0x00026d75) bg_active_tab_pane_g3_cp3_copy1

0x328b,	// (0x0002394d) tabs_2_long_active_pane_srt_ParamLimits

0x328b,	// (0x0002394d) tabs_2_long_active_pane_srt

0x328b,	// (0x0002394d) tabs_2_long_passive_pane_srt_ParamLimits

0x328b,	// (0x0002394d) tabs_2_long_passive_pane_srt

0x4ae7,	// (0x000251a9) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4ae7,	// (0x000251a9) bg_passive_tab_pane_cp4_srt

0x6395,	// (0x00026a57) bg_passive_tab_pane_g1_cp4_srt

0x4402,	// (0x00024ac4) bg_passive_tab_pane_g2_cp4_srt

0x639e,	// (0x00026a60) bg_passive_tab_pane_g3_cp4_srt

0x328b,	// (0x0002394d) bg_active_tab_pane_cp4_srt_ParamLimits

0x328b,	// (0x0002394d) bg_active_tab_pane_cp4_srt

0xdc5e,	// (0x0002e320) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdc5e,	// (0x0002e320) tabs_2_long_active_pane_srt_t1

0x6395,	// (0x00026a57) bg_active_tab_pane_g1_cp4_srt

0x4402,	// (0x00024ac4) bg_active_tab_pane_g2_cp4_srt

0x639e,	// (0x00026a60) bg_active_tab_pane_g3_cp4_srt

0x3506,	// (0x00023bc8) tabs_3_long_active_pane_srt_ParamLimits

0x3506,	// (0x00023bc8) tabs_3_long_active_pane_srt

0x3506,	// (0x00023bc8) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3506,	// (0x00023bc8) tabs_3_long_passive_pane_cp_srt

0x3506,	// (0x00023bc8) tabs_3_long_passive_pane_srt_ParamLimits

0x3506,	// (0x00023bc8) tabs_3_long_passive_pane_srt

0x4ae7,	// (0x000251a9) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4ae7,	// (0x000251a9) bg_passive_tab_pane_cp5_srt

0x448c,	// (0x00024b4e) bg_passive_tab_pane_g1_cp5_srt

0x4402,	// (0x00024ac4) bg_passive_tab_pane_g2_cp5_srt

0x4495,	// (0x00024b57) bg_passive_tab_pane_g3_cp5_srt

0x328b,	// (0x0002394d) bg_active_tab_pane_cp5_srt_ParamLimits

0x328b,	// (0x0002394d) bg_active_tab_pane_cp5_srt

0xdc48,	// (0x0002e30a) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdc48,	// (0x0002e30a) tabs_3_long_active_pane_srt_t1

0x448c,	// (0x00024b4e) bg_active_tab_pane_g1_cp5_srt

0x4402,	// (0x00024ac4) bg_active_tab_pane_g2_cp5_srt

0x4495,	// (0x00024b57) bg_active_tab_pane_g3_cp5_srt

0x6375,	// (0x00026a37) navi_text_pane_srt_t1

0x636d,	// (0x00026a2f) navi_icon_pane_srt_g1

0x4989,	// (0x0002504b) midp_editing_number_pane_srt

0x47c3,	// (0x00024e85) midp_ticker_pane_srt

0x4991,	// (0x00025053) midp_ticker_pane_srt_g1

0x4999,	// (0x0002505b) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x0002fe0f) midp_ticker_pane_srt_g

0x49a1,	// (0x00025063) midp_ticker_pane_srt_t1

0x635e,	// (0x00026a20) midp_editing_number_pane_t1_copy1

0xd4c6,	// (0x0002db88) listscroll_midp_pane

0xd4c6,	// (0x0002db88) midp_form_pane

0x483b,	// (0x00024efd) midp_info_popup_window_ParamLimits

0x483b,	// (0x00024efd) midp_info_popup_window

0x3c37,	// (0x000242f9) bg_popup_sub_pane_cp50_ParamLimits

0x3c37,	// (0x000242f9) bg_popup_sub_pane_cp50

0x5465,	// (0x00025b27) listscroll_midp_info_pane_ParamLimits

0x5465,	// (0x00025b27) listscroll_midp_info_pane

0x5445,	// (0x00025b07) listscroll_form_midp_pane_ParamLimits

0x5445,	// (0x00025b07) listscroll_form_midp_pane

0x5451,	// (0x00025b13) scroll_bar_cp050

0x5445,	// (0x00025b07) list_midp_pane

0x7125,	// (0x000277e7) signal_pane_g2_cp

0x535f,	// (0x00025a21) listscroll_midp_info_pane_t1_ParamLimits

0x535f,	// (0x00025a21) listscroll_midp_info_pane_t1

0x5377,	// (0x00025a39) listscroll_midp_info_pane_t2_ParamLimits

0x5377,	// (0x00025a39) listscroll_midp_info_pane_t2

0x53b5,	// (0x00025a77) listscroll_midp_info_pane_t3_ParamLimits

0x53b5,	// (0x00025a77) listscroll_midp_info_pane_t3

0x53ef,	// (0x00025ab1) listscroll_midp_info_pane_t4_ParamLimits

0x53ef,	// (0x00025ab1) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x0002fec2) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x0002fec2) listscroll_midp_info_pane_t

0x3c98,	// (0x0002435a) scroll_pane_cp21

0x52fd,	// (0x000259bf) form_midp_field_choice_group_pane

0x5306,	// (0x000259c8) form_midp_field_text_pane

0x5345,	// (0x00025a07) form_midp_field_time_pane

0x534d,	// (0x00025a0f) form_midp_gauge_slider_pane

0x5356,	// (0x00025a18) form_midp_gauge_wait_pane

0x31ab,	// (0x0002386d) form_midp_image_pane

0xbb5b,	// (0x0002c21d) list_single_midp_pane_ParamLimits

0xbb5b,	// (0x0002c21d) list_single_midp_pane

0xdad2,	// (0x0002e194) form_midp_field_text_pane_t1

0x5085,	// (0x00025747) input_focus_pane_cp050

0x52ec,	// (0x000259ae) list_midp_form_text_pane

0x5284,	// (0x00025946) form_midp_field_choice_group_pane_t1

0x5292,	// (0x00025954) input_focus_pane_cp051

0x52a6,	// (0x00025968) list_midp_choice_pane

0x31ab,	// (0x0002386d) status_idle_pane

0x5268,	// (0x0002592a) form_midp_field_time_pane_t1

0xe3d7,	// (0x0002ea99) wait_anim_pane_g2_copy1

0x5276,	// (0x00025938) form_midp_field_time_pane_t2

0x0001,

0x48e9,	// (0x00024fab) aid_navinavi_width_2_pane

0xf7fb,	// (0x0002febd) form_midp_field_time_pane_t

0x31ab,	// (0x0002386d) input_focus_pane_cp052

0x31ab,	// (0x0002386d) bg_input_focus_pane_cp040

0x5228,	// (0x000258ea) form_midp_gauge_slider_pane_t1

0x5236,	// (0x000258f8) form_midp_gauge_slider_pane_t2

0xdab6,	// (0x0002e178) form_midp_gauge_slider_pane_t3

0xdac4,	// (0x0002e186) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x0002feb4) form_midp_gauge_slider_pane_t

0x5260,	// (0x00025922) form_midp_slider_pane

0x328b,	// (0x0002394d) bg_input_focus_pane_cp041_ParamLimits

0x328b,	// (0x0002394d) bg_input_focus_pane_cp041

0x51f5,	// (0x000258b7) form_midp_gauge_wait_pane_t1_ParamLimits

0x51f5,	// (0x000258b7) form_midp_gauge_wait_pane_t1

0x5207,	// (0x000258c9) form_midp_gauge_wait_pane_t2_ParamLimits

0x5207,	// (0x000258c9) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x0002feaf) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x0002feaf) form_midp_gauge_wait_pane_t

0x5219,	// (0x000258db) form_midp_wait_pane_ParamLimits

0x5219,	// (0x000258db) form_midp_wait_pane

0x51bf,	// (0x00025881) form_midp_image_pane_g1

0x51c8,	// (0x0002588a) form_midp_image_pane_t1

0x51d7,	// (0x00025899) form_midp_image_pane_t2

0x51e6,	// (0x000258a8) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x0002fea8) form_midp_image_pane_t

0x51b6,	// (0x00025878) list_single_midp_pane_g1

0x04ae,	// (0x00020b70) list_single_midp_pane_t1

0xdaa2,	// (0x0002e164) list_midp_form_item_pane_ParamLimits

0xdaa2,	// (0x0002e164) list_midp_form_item_pane

0x4891,	// (0x00024f53) list_midp_form_item_pane_t1

0x48a0,	// (0x00024f62) midp_ticker_pane_g1

0x48ac,	// (0x00024f6e) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x0002fdf5) midp_ticker_pane_g

0x48b8,	// (0x00024f7a) midp_ticker_pane_t1

0x65af,	// (0x00026c71) midp_editing_number_pane_t1

0x658d,	// (0x00026c4f) midp_editing_number_pane

0x659c,	// (0x00026c5e) midp_ticker_pane

0x634e,	// (0x00026a10) ai_message_heading_pane

0x31ab,	// (0x0002386d) bg_popup_window_pane_cp14

0x6356,	// (0x00026a18) listscroll_ai_message_pane

0x62d8,	// (0x0002699a) ai_message_heading_pane_g1_ParamLimits

0x62d8,	// (0x0002699a) ai_message_heading_pane_g1

0x62e4,	// (0x000269a6) ai_message_heading_pane_g2_ParamLimits

0x62e4,	// (0x000269a6) ai_message_heading_pane_g2

0x62f0,	// (0x000269b2) ai_message_heading_pane_g3_ParamLimits

0x62f0,	// (0x000269b2) ai_message_heading_pane_g3

0x62fc,	// (0x000269be) ai_message_heading_pane_g4_ParamLimits

0x62fc,	// (0x000269be) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x0002ffe9) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x0002ffe9) ai_message_heading_pane_g

0x6308,	// (0x000269ca) ai_message_heading_pane_t1_ParamLimits

0x6308,	// (0x000269ca) ai_message_heading_pane_t1

0x6322,	// (0x000269e4) ai_message_heading_pane_t2_ParamLimits

0x6322,	// (0x000269e4) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x0002fff2) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x0002fff2) ai_message_heading_pane_t

0x6334,	// (0x000269f6) bg_popup_heading_pane_cp1_ParamLimits

0x6334,	// (0x000269f6) bg_popup_heading_pane_cp1

0x62c6,	// (0x00026988) list_ai_message_pane_ParamLimits

0x62c6,	// (0x00026988) list_ai_message_pane

0x3c98,	// (0x0002435a) scroll_pane_cp10

0x6262,	// (0x00026924) list_ai_message_pane_g1

0x626a,	// (0x0002692c) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x0002ffc6) list_ai_message_pane_g

0x6272,	// (0x00026934) list_ai_message_pane_t1_ParamLimits

0x6272,	// (0x00026934) list_ai_message_pane_t1

0x6287,	// (0x00026949) list_ai_message_pane_t2_ParamLimits

0x6287,	// (0x00026949) list_ai_message_pane_t2

0x629c,	// (0x0002695e) list_ai_message_pane_t3_ParamLimits

0x629c,	// (0x0002695e) list_ai_message_pane_t3

0x62b1,	// (0x00026973) list_ai_message_pane_t4_ParamLimits

0x62b1,	// (0x00026973) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x0002ffcb) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x0002ffcb) list_ai_message_pane_t

0xdc27,	// (0x0002e2e9) cell_ai_soft_ind_pane_ParamLimits

0xdc27,	// (0x0002e2e9) cell_ai_soft_ind_pane

0x48ca,	// (0x00024f8c) cell_ai_soft_ind_pane_g1_ParamLimits

0x48ca,	// (0x00024f8c) cell_ai_soft_ind_pane_g1

0x31ab,	// (0x0002386d) grid_highlight_cp1

0x48d7,	// (0x00024f99) text_secondary_cp56_ParamLimits

0x48d7,	// (0x00024f99) text_secondary_cp56

0x6222,	// (0x000268e4) example_general_pane_ParamLimits

0x6222,	// (0x000268e4) example_general_pane

0x622e,	// (0x000268f0) example_parent_pane_g1_ParamLimits

0x622e,	// (0x000268f0) example_parent_pane_g1

0x623a,	// (0x000268fc) example_parent_pane_t1_ParamLimits

0x623a,	// (0x000268fc) example_parent_pane_t1

0xc8da,	// (0x0002cf9c) popup_preview_text_window_ParamLimits

0xc8da,	// (0x0002cf9c) popup_preview_text_window

0x46f4,	// (0x00024db6) list_single_pane_cp2_g4

0x35e2,	// (0x00023ca4) bg_popup_preview_window_pane_ParamLimits

0x35e2,	// (0x00023ca4) bg_popup_preview_window_pane

0x5f6f,	// (0x00026631) popup_preview_text_window_t1_ParamLimits

0x5f6f,	// (0x00026631) popup_preview_text_window_t1

0x5f8d,	// (0x0002664f) popup_preview_text_window_t2_ParamLimits

0x5f8d,	// (0x0002664f) popup_preview_text_window_t2

0x5fd6,	// (0x00026698) popup_preview_text_window_t3_ParamLimits

0x5fd6,	// (0x00026698) popup_preview_text_window_t3

0x601b,	// (0x000266dd) popup_preview_text_window_t4_ParamLimits

0x601b,	// (0x000266dd) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x0002ff9a) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x0002ff9a) popup_preview_text_window_t

0x6099,	// (0x0002675b) scroll_pane_cp11

0x5011,	// (0x000256d3) bg_popup_preview_window_pane_g1

0x5f2f,	// (0x000265f1) bg_popup_preview_window_pane_g2

0x5f37,	// (0x000265f9) bg_popup_preview_window_pane_g3

0x5f3f,	// (0x00026601) bg_popup_preview_window_pane_g4

0x5f47,	// (0x00026609) bg_popup_preview_window_pane_g5

0x5f4f,	// (0x00026611) bg_popup_preview_window_pane_g6

0x5f57,	// (0x00026619) bg_popup_preview_window_pane_g7

0x5f5f,	// (0x00026621) bg_popup_preview_window_pane_g8

0x0d5a,	// (0x0002141c) aid_popup_width_pane

0xc856,	// (0x0002cf18) popup_midp_note_alarm_window_ParamLimits

0xc856,	// (0x0002cf18) popup_midp_note_alarm_window

0x3b0c,	// (0x000241ce) data_form_pane_ParamLimits

0xb98d,	// (0x0002c04f) form_field_data_pane_g1

0xb997,	// (0x0002c059) form_field_data_pane_t1_ParamLimits

0x3b18,	// (0x000241da) input_focus_pane_ParamLimits

0x012d,	// (0x000207ef) data_form_wide_pane_ParamLimits

0x013e,	// (0x00020800) form_field_data_wide_pane_g1

0x014a,	// (0x0002080c) form_field_data_wide_pane_t1_ParamLimits

0x3889,	// (0x00023f4b) input_focus_pane_cp6_ParamLimits

0xd2f9,	// (0x0002d9bb) input_popup_find_pane_g1_ParamLimits

0xd2f9,	// (0x0002d9bb) input_popup_find_pane_g1

0x12cc,	// (0x0002198e) aid_navi_side_left_pane

0x12e1,	// (0x000219a3) aid_navi_side_right_pane

0x593c,	// (0x00025ffe) bg_popup_window_pane_cp30_ParamLimits

0x593c,	// (0x00025ffe) bg_popup_window_pane_cp30

0x59b6,	// (0x00026078) popup_midp_note_alarm_window_g1_ParamLimits

0x59b6,	// (0x00026078) popup_midp_note_alarm_window_g1

0x59e6,	// (0x000260a8) popup_midp_note_alarm_window_t1_ParamLimits

0x59e6,	// (0x000260a8) popup_midp_note_alarm_window_t1

0x5a87,	// (0x00026149) popup_midp_note_alarm_window_t2_ParamLimits

0x5a87,	// (0x00026149) popup_midp_note_alarm_window_t2

0x5b35,	// (0x000261f7) popup_midp_note_alarm_window_t3_ParamLimits

0x5b35,	// (0x000261f7) popup_midp_note_alarm_window_t3

0x5b67,	// (0x00026229) popup_midp_note_alarm_window_t4_ParamLimits

0x5b67,	// (0x00026229) popup_midp_note_alarm_window_t4

0x5b8d,	// (0x0002624f) popup_midp_note_alarm_window_t5_ParamLimits

0x5b8d,	// (0x0002624f) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x0002ff37) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x0002ff37) popup_midp_note_alarm_window_t

0x5c39,	// (0x000262fb) wait_bar_pane_cp1_ParamLimits

0x5c39,	// (0x000262fb) wait_bar_pane_cp1

0x31ab,	// (0x0002386d) wait_anim_pane_copy1

0x31ab,	// (0x0002386d) wait_border_pane_copy1

0x5622,	// (0x00025ce4) wait_border_pane_g1_copy1

0x0164,	// (0x00020826) form_field_popup_pane_g1

0xb9b1,	// (0x0002c073) form_field_popup_pane_t1_ParamLimits

0x3b18,	// (0x000241da) input_focus_pane_cp7_ParamLimits

0x3b46,	// (0x00024208) list_form_pane_ParamLimits

0x0184,	// (0x00020846) form_field_popup_wide_pane_g1

0x018c,	// (0x0002084e) form_field_popup_wide_pane_t1_ParamLimits

0x3b18,	// (0x000241da) input_focus_pane_cp8_ParamLimits

0x3b52,	// (0x00024214) list_form_wide_pane_ParamLimits

0x674c,	// (0x00026e0e) aid_size_cell_graphic_pane

0xba30,	// (0x0002c0f2) data_form_pane_t1_ParamLimits

0xbb84,	// (0x0002c246) data_form_wide_pane_t1_ParamLimits

0xd727,	// (0x0002dde9) bg_status_flat_pane

0xc038,	// (0x0002c6fa) title_pane_t1_ParamLimits

0x3253,	// (0x00023915) title_pane_t2_ParamLimits

0x3279,	// (0x0002393b) title_pane_t3_ParamLimits

0xf532,	// (0x0002fbf4) title_pane_t_ParamLimits

0x4119,	// (0x000247db) level_1_signal_ParamLimits

0x412b,	// (0x000247ed) level_2_signal_ParamLimits

0x413e,	// (0x00024800) level_3_signal_ParamLimits

0x4151,	// (0x00024813) level_4_signal_ParamLimits

0x4164,	// (0x00024826) level_5_signal_ParamLimits

0x4177,	// (0x00024839) level_6_signal_ParamLimits

0x418a,	// (0x0002484c) level_7_signal_ParamLimits

0x4119,	// (0x000247db) level_1_battery_ParamLimits

0x412b,	// (0x000247ed) level_2_battery_ParamLimits

0x413e,	// (0x00024800) level_3_battery_ParamLimits

0x4151,	// (0x00024813) level_4_battery_ParamLimits

0x4164,	// (0x00024826) level_5_battery_ParamLimits

0x4177,	// (0x00024839) level_6_battery_ParamLimits

0x418a,	// (0x0002484c) level_7_battery_ParamLimits

0x5841,	// (0x00025f03) bg_status_flat_pane_g1

0x5849,	// (0x00025f0b) bg_status_flat_pane_g2

0x5851,	// (0x00025f13) bg_status_flat_pane_g3

0x5859,	// (0x00025f1b) bg_status_flat_pane_g4

0x5861,	// (0x00025f23) bg_status_flat_pane_g5

0x5869,	// (0x00025f2b) bg_status_flat_pane_g6

0x5871,	// (0x00025f33) bg_status_flat_pane_g7

0xc0c4,	// (0x0002c786) tabs_3_active_pane_t1_ParamLimits

0xc0c4,	// (0x0002c786) tabs_3_passive_pane_t1_ParamLimits

0xc0d6,	// (0x0002c798) tabs_4_active_pane_t1_ParamLimits

0xc0d6,	// (0x0002c798) tabs_4_1_passive_pane_t1_ParamLimits

0xd307,	// (0x0002d9c9) tabs_2_active_pane_t1_ParamLimits

0xd307,	// (0x0002d9c9) tabs_2_passive_pane_t1_ParamLimits

0x328b,	// (0x0002394d) bg_active_tab_pane_cp4_ParamLimits

0xd319,	// (0x0002d9db) tabs_2_long_active_pane_t1_ParamLimits

0x4ae7,	// (0x000251a9) bg_passive_tab_pane_cp4_ParamLimits

0x1def,	// (0x000224b1) list_single_midp_graphic_pane_t1_ParamLimits

0x328b,	// (0x0002394d) bg_active_tab_pane_cp5_ParamLimits

0xd32c,	// (0x0002d9ee) tabs_3_long_active_pane_t1_ParamLimits

0x4ae7,	// (0x000251a9) bg_passive_tab_pane_cp5_ParamLimits

0x1def,	// (0x000224b1) list_single_midp_graphic_pane_t1

0xd727,	// (0x0002dde9) bg_status_flat_pane_ParamLimits

0x4ca1,	// (0x00025363) indicator_pane_cp2_ParamLimits

0x4ca1,	// (0x00025363) indicator_pane_cp2

0xd8a5,	// (0x0002df67) navi_pane_srt_ParamLimits

0xd8a5,	// (0x0002df67) navi_pane_srt

0x4df0,	// (0x000254b2) popup_clock_digital_analogue_window_cp1

0x3368,	// (0x00023a2a) indicator_pane_t1

0x47c3,	// (0x00024e85) copy_highlight_pane

0x47c3,	// (0x00024e85) cursor_graphics_pane

0x47c3,	// (0x00024e85) graphic_within_text_pane

0x47c3,	// (0x00024e85) link_highlight_pane

0x605c,	// (0x0002671e) popup_preview_text_window_t5_ParamLimits

0x605c,	// (0x0002671e) popup_preview_text_window_t5

0x48f1,	// (0x00024fb3) cursor_digital_pane

0x48f1,	// (0x00024fb3) cursor_primary_pane

0x4902,	// (0x00024fc4) cursor_primary_small_pane

0x490a,	// (0x00024fcc) cursor_secondary_pane

0x4912,	// (0x00024fd4) cursor_title_pane

0x48f1,	// (0x00024fb3) link_highlight_digital_pane

0x48f9,	// (0x00024fbb) link_highlight_primary_pane

0x4902,	// (0x00024fc4) link_highlight_primary_small_pane

0x490a,	// (0x00024fcc) link_highlight_secondary_pane

0x4912,	// (0x00024fd4) link_highlight_title_pane

0x48f1,	// (0x00024fb3) copy_highlight_digital_pane

0x48f1,	// (0x00024fb3) copy_highlight_primary_pane

0x4902,	// (0x00024fc4) copy_highlight_primary_small_pane

0x490a,	// (0x00024fcc) copy_highlight_secondary_pane

0x4912,	// (0x00024fd4) copy_highlight_title_pane

0x490a,	// (0x00024fcc) graphic_text_digital_pane

0x58df,	// (0x00025fa1) graphic_text_primary_pane

0x58e8,	// (0x00025faa) graphic_text_primary_small_pane

0x4902,	// (0x00024fc4) graphic_text_secondary_pane

0x48f1,	// (0x00024fb3) graphic_text_title_pane

0xd56b,	// (0x0002dc2d) cursor_primary_pane_g1

0x58d1,	// (0x00025f93) cursor_text_primary_t1

0xdb23,	// (0x0002e1e5) cursor_primary_small_pane_g1

0x58c3,	// (0x00025f85) cursor_text_primary_small_t1

0xdb19,	// (0x0002e1db) cursor_primary_small_pane_g1_copy1

0x58ab,	// (0x00025f6d) cursor_text_primary_small_t1_copy1

0x5889,	// (0x00025f4b) cursor_text_title_t1

0xdb0f,	// (0x0002e1d1) cursor_title_pane_g1

0xd56b,	// (0x0002dc2d) cursor_digital_pane_g1

0x4924,	// (0x00024fe6) cursor_text_digital_t1

0x4949,	// (0x0002500b) link_highlight_primary_pane_g1

0x5832,	// (0x00025ef4) link_highlight_primary_pane_t1

0x4932,	// (0x00024ff4) link_highlight_primary_small_pane_g1

0x493a,	// (0x00024ffc) link_highlight_primary_small_pane_t1

0x4949,	// (0x0002500b) link_highlight_secondary_pane_g1

0x4951,	// (0x00025013) link_highlight_secondary_pane_t1

0x57a6,	// (0x00025e68) link_highlight_title_pane_g1

0x57ae,	// (0x00025e70) link_highlight_title_pane_t1

0x578f,	// (0x00025e51) link_highlight_digital_pane_g1

0x5797,	// (0x00025e59) link_highlight_digital_pane_t1

0x5667,	// (0x00025d29) copy_highlight_primary_pane_g1

0x566f,	// (0x00025d31) copy_highlight_primary_pane_t1

0x5641,	// (0x00025d03) copy_highlight_primary_small_pane_g1

0x5658,	// (0x00025d1a) copy_highlight_primary_small_pane_t1

0x4960,	// (0x00025022) copy_highlight_secondary_pane_g1

0x4968,	// (0x0002502a) copy_highlight_secondary_pane_t1

0x5641,	// (0x00025d03) copy_highlight_title_pane_g1

0x5649,	// (0x00025d0b) copy_highlight_title_pane_t1

0x5667,	// (0x00025d29) copy_highlight_digital_pane_g1

0x691a,	// (0x00026fdc) copy_highlight_digital_pane_t1

0x686e,	// (0x00026f30) graphic_text_primary_pane_g1

0x68fe,	// (0x00026fc0) graphic_text_primary_pane_t1

0x690c,	// (0x00026fce) graphic_text_primary_pane_t2

0x0001,

0xf9a4,	// (0x00030066) graphic_text_primary_pane_t

0x68da,	// (0x00026f9c) graphic_text_primary_small_pane_g1

0x68e2,	// (0x00026fa4) graphic_text_primary_small_pane_t1

0x68f0,	// (0x00026fb2) graphic_text_primary_small_pane_t2

0x0001,

0xf99f,	// (0x00030061) graphic_text_primary_small_pane_t

0x68b6,	// (0x00026f78) graphic_text_secondary_pane_g1

0x68be,	// (0x00026f80) graphic_text_secondary_pane_t1

0x68cc,	// (0x00026f8e) graphic_text_secondary_pane_t2

0x0001,

0xf99a,	// (0x0003005c) graphic_text_secondary_pane_t

0x6892,	// (0x00026f54) graphic_text_title_pane_g1

0x689a,	// (0x00026f5c) graphic_text_title_pane_t1

0x68a8,	// (0x00026f6a) graphic_text_title_pane_t2

0x0001,

0xf995,	// (0x00030057) graphic_text_title_pane_t

0x686e,	// (0x00026f30) graphic_text_digital_pane_g1

0x6876,	// (0x00026f38) graphic_text_digital_pane_t1

0x6884,	// (0x00026f46) graphic_text_digital_pane_t2

0x0001,

0xf990,	// (0x00030052) graphic_text_digital_pane_t

0x328b,	// (0x0002394d) navi_icon_pane_srt_ParamLimits

0x328b,	// (0x0002394d) navi_icon_pane_srt

0x31ab,	// (0x0002386d) navi_midp_pane_srt

0x31ab,	// (0x0002386d) navi_navi_pane_srt

0x328b,	// (0x0002394d) navi_text_pane_srt_ParamLimits

0x328b,	// (0x0002394d) navi_text_pane_srt

0x6839,	// (0x00026efb) navi_navi_icon_text_pane_srt

0x6841,	// (0x00026f03) navi_navi_pane_srt_g1_ParamLimits

0x6841,	// (0x00026f03) navi_navi_pane_srt_g1

0x6853,	// (0x00026f15) navi_navi_pane_srt_g2_ParamLimits

0x6853,	// (0x00026f15) navi_navi_pane_srt_g2

0x0001,

0xf98b,	// (0x0003004d) navi_navi_pane_srt_g_ParamLimits

0xf98b,	// (0x0003004d) navi_navi_pane_srt_g

0x6865,	// (0x00026f27) navi_navi_tabs_pane_srt

0x6839,	// (0x00026efb) navi_navi_text_pane_srt

0x6839,	// (0x00026efb) navi_navi_volume_pane_srt

0x682a,	// (0x00026eec) navi_navi_text_pane_srt_t1

0x2169,	// (0x0002282b) navi_navi_volume_pane_srt_g1

0x2171,	// (0x00022833) volume_small_pane_srt_ParamLimits

0x2171,	// (0x00022833) volume_small_pane_srt

0x15ac,	// (0x00021c6e) volume_small_pane_srt_g1_ParamLimits

0x15ac,	// (0x00021c6e) volume_small_pane_srt_g1

0x15bc,	// (0x00021c7e) volume_small_pane_srt_g2_ParamLimits

0x15bc,	// (0x00021c7e) volume_small_pane_srt_g2

0x15cd,	// (0x00021c8f) volume_small_pane_srt_g3_ParamLimits

0x15cd,	// (0x00021c8f) volume_small_pane_srt_g3

0x15de,	// (0x00021ca0) volume_small_pane_srt_g4_ParamLimits

0x15de,	// (0x00021ca0) volume_small_pane_srt_g4

0x15ef,	// (0x00021cb1) volume_small_pane_srt_g5_ParamLimits

0x15ef,	// (0x00021cb1) volume_small_pane_srt_g5

0x1600,	// (0x00021cc2) volume_small_pane_srt_g6_ParamLimits

0x1600,	// (0x00021cc2) volume_small_pane_srt_g6

0x1611,	// (0x00021cd3) volume_small_pane_srt_g7_ParamLimits

0x1611,	// (0x00021cd3) volume_small_pane_srt_g7

0x1622,	// (0x00021ce4) volume_small_pane_srt_g8_ParamLimits

0x1622,	// (0x00021ce4) volume_small_pane_srt_g8

0x1633,	// (0x00021cf5) volume_small_pane_srt_g9_ParamLimits

0x1633,	// (0x00021cf5) volume_small_pane_srt_g9

0x1644,	// (0x00021d06) volume_small_pane_srt_g10_ParamLimits

0x1644,	// (0x00021d06) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x0002fdfa) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x0002fdfa) volume_small_pane_srt_g

0x368b,	// (0x00023d4d) query_popup_data_pane_cp2

0x6810,	// (0x00026ed2) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6810,	// (0x00026ed2) navi_navi_icon_text_pane_srt_t1

0x58df,	// (0x00025fa1) navi_tabs_2_long_pane_srt

0x58df,	// (0x00025fa1) navi_tabs_2_pane_srt

0x58df,	// (0x00025fa1) navi_tabs_3_long_pane_srt

0x58df,	// (0x00025fa1) navi_tabs_3_pane_srt

0x58df,	// (0x00025fa1) navi_tabs_4_pane_srt

0x2149,	// (0x0002280b) tabs_2_active_pane_srt_ParamLimits

0x2149,	// (0x0002280b) tabs_2_active_pane_srt

0x2159,	// (0x0002281b) tabs_2_passive_pane_srt_ParamLimits

0x2159,	// (0x0002281b) tabs_2_passive_pane_srt

0x5085,	// (0x00025747) bg_passive_tab_pane_cp1_srt_ParamLimits

0x5085,	// (0x00025747) bg_passive_tab_pane_cp1_srt

0x67dc,	// (0x00026e9e) bg_passive_tab_pane_g1_cp1_srt

0x4402,	// (0x00024ac4) bg_passive_tab_pane_g2_cp1_srt

0x67e5,	// (0x00026ea7) bg_passive_tab_pane_g3_cp1_srt

0x3506,	// (0x00023bc8) bg_active_tab_pane_cp1_srt_ParamLimits

0x3506,	// (0x00023bc8) bg_active_tab_pane_cp1_srt

0x67ee,	// (0x00026eb0) tabs_2_active_pane_srt_g1

0xded6,	// (0x0002e598) tabs_2_active_pane_srt_t1_ParamLimits

0xded6,	// (0x0002e598) tabs_2_active_pane_srt_t1

0x67dc,	// (0x00026e9e) bg_active_tab_pane_g1_cp1_srt

0x4402,	// (0x00024ac4) bg_active_tab_pane_g2_cp1_srt

0x67e5,	// (0x00026ea7) bg_active_tab_pane_g3_cp1_srt

0x2116,	// (0x000227d8) tabs_3_active_pane_srt_ParamLimits

0x2116,	// (0x000227d8) tabs_3_active_pane_srt

0x2127,	// (0x000227e9) tabs_3_passive_pane_cp_srt_ParamLimits

0x2127,	// (0x000227e9) tabs_3_passive_pane_cp_srt

0x2138,	// (0x000227fa) tabs_3_passive_pane_srt_ParamLimits

0x2138,	// (0x000227fa) tabs_3_passive_pane_srt

0x5085,	// (0x00025747) bg_passive_tab_pane_cp2_srt_ParamLimits

0x5085,	// (0x00025747) bg_passive_tab_pane_cp2_srt

0x4977,	// (0x00025039) bg_passive_tab_pane_g1_cp2_srt

0x4402,	// (0x00024ac4) bg_passive_tab_pane_g2_cp2_srt

0x4980,	// (0x00025042) bg_passive_tab_pane_g3_cp2_srt

0x3506,	// (0x00023bc8) bg_active_tab_pane_cp2_srt_ParamLimits

0x3506,	// (0x00023bc8) bg_active_tab_pane_cp2_srt

0x67c2,	// (0x00026e84) tabs_3_active_pane_srt_g1

0xdec0,	// (0x0002e582) tabs_3_active_pane_srt_t1_ParamLimits

0xdec0,	// (0x0002e582) tabs_3_active_pane_srt_t1

0x4977,	// (0x00025039) bg_active_tab_pane_g1_cp2_srt

0x4402,	// (0x00024ac4) bg_active_tab_pane_g2_cp2_srt

0x4980,	// (0x00025042) bg_active_tab_pane_g3_cp2_srt

0x20ce,	// (0x00022790) tabs_4_active_pane_srt_ParamLimits

0x20ce,	// (0x00022790) tabs_4_active_pane_srt

0x20e0,	// (0x000227a2) tabs_4_passive_pane_cp2_srt_ParamLimits

0x20e0,	// (0x000227a2) tabs_4_passive_pane_cp2_srt

0x17b3,	// (0x00021e75) aid_size_cell_toolbar

0x6406,	// (0x00026ac8) main_idle_act_pane_ParamLimits

0x1956,	// (0x00022018) popup_large_graphic_colour_window_ParamLimits

0xcb66,	// (0x0002d228) popup_toolbar_window_ParamLimits

0xcb66,	// (0x0002d228) popup_toolbar_window

0x0577,	// (0x00020c39) list_single_graphic_2heading_pane_ParamLimits

0x0577,	// (0x00020c39) list_single_graphic_2heading_pane

0x3ec8,	// (0x0002458a) aid_size_cell_apps_grid_lsc_pane

0x3eda,	// (0x0002459c) aid_size_cell_apps_grid_prt_pane

0x4ae7,	// (0x000251a9) bg_wml_button_pane_cp1_ParamLimits

0x4ae7,	// (0x000251a9) bg_wml_button_pane_cp1

0xdad2,	// (0x0002e194) form_midp_field_text_pane_t1_ParamLimits

0x5085,	// (0x00025747) input_focus_pane_cp050_ParamLimits

0x52ec,	// (0x000259ae) list_midp_form_text_pane_ParamLimits

0x5292,	// (0x00025954) input_focus_pane_cp051_ParamLimits

0x52a6,	// (0x00025968) list_midp_choice_pane_ParamLimits

0xda70,	// (0x0002e132) list_single_2graphic_pane_cp3_ParamLimits

0xda70,	// (0x0002e132) list_single_2graphic_pane_cp3

0xda83,	// (0x0002e145) list_single_midp_graphic_pane_ParamLimits

0xda83,	// (0x0002e145) list_single_midp_graphic_pane

0x0378,	// (0x00020a3a) list_single_graphic_2heading_pane_g1_ParamLimits

0x0378,	// (0x00020a3a) list_single_graphic_2heading_pane_g1

0x0384,	// (0x00020a46) list_single_graphic_2heading_pane_g4_ParamLimits

0x0384,	// (0x00020a46) list_single_graphic_2heading_pane_g4

0x0390,	// (0x00020a52) list_single_graphic_2heading_pane_g5_ParamLimits

0x0390,	// (0x00020a52) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x0002fe4d) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x0002fe4d) list_single_graphic_2heading_pane_g

0x039c,	// (0x00020a5e) list_single_graphic_2heading_pane_t1_ParamLimits

0x039c,	// (0x00020a5e) list_single_graphic_2heading_pane_t1

0x03b0,	// (0x00020a72) list_single_graphic_2heading_pane_t2_ParamLimits

0x03b0,	// (0x00020a72) list_single_graphic_2heading_pane_t2

0x03ca,	// (0x00020a8c) list_single_graphic_2heading_pane_t3_ParamLimits

0x03ca,	// (0x00020a8c) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x0002fe54) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x0002fe54) list_single_graphic_2heading_pane_t

0x4f4f,	// (0x00025611) bg_popup_sub_pane_cp2

0x4f79,	// (0x0002563b) grid_toobar_pane

0x1d6a,	// (0x0002242c) cell_toolbar_pane_ParamLimits

0x1d6a,	// (0x0002242c) cell_toolbar_pane

0x4fb5,	// (0x00025677) cell_toolbar_pane_g1_ParamLimits

0x4fb5,	// (0x00025677) cell_toolbar_pane_g1

0x4fc9,	// (0x0002568b) cell_toolbar_pane_g2_ParamLimits

0x4fc9,	// (0x0002568b) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x0002fe62) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x0002fe62) cell_toolbar_pane_g

0x4feb,	// (0x000256ad) grid_highlight_pane_cp2_ParamLimits

0x4feb,	// (0x000256ad) grid_highlight_pane_cp2

0x5005,	// (0x000256c7) toolbar_button_pane

0x5011,	// (0x000256d3) toolbar_button_pane_g1

0x5019,	// (0x000256db) toolbar_button_pane_g2

0x5021,	// (0x000256e3) toolbar_button_pane_g3

0x5029,	// (0x000256eb) toolbar_button_pane_g4

0x5031,	// (0x000256f3) toolbar_button_pane_g5

0x5039,	// (0x000256fb) toolbar_button_pane_g6

0x5041,	// (0x00025703) toolbar_button_pane_g7

0x5049,	// (0x0002570b) toolbar_button_pane_g8

0x5051,	// (0x00025713) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x0002fe67) toolbar_button_pane_g

0x1da2,	// (0x00022464) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1da2,	// (0x00022464) list_single_2graphic_pane_g1_cp3

0xcbbe,	// (0x0002d280) list_single_2graphic_pane_g2_cp3_ParamLimits

0xcbbe,	// (0x0002d280) list_single_2graphic_pane_g2_cp3

0x1dbf,	// (0x00022481) list_single_2graphic_pane_g3_cp3

0x1dc7,	// (0x00022489) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1dc7,	// (0x00022489) list_single_2graphic_pane_g4_cp3

0x1dd3,	// (0x00022495) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1dd3,	// (0x00022495) list_single_2graphic_pane_t1_cp3

0x5cca,	// (0x0002638c) list_single_midp_graphic_pane_g2_ParamLimits

0x5cca,	// (0x0002638c) list_single_midp_graphic_pane_g2

0x17bb,	// (0x00021e7d) aid_zoom_text_primary

0x034c,	// (0x00020a0e) aid_zoom_text_secondary

0xd5c3,	// (0x0002dc85) status_small_pane_g7_ParamLimits

0xd5c3,	// (0x0002dc85) status_small_pane_g7

0xd5e6,	// (0x0002dca8) status_small_pane_t1_ParamLimits

0xc014,	// (0x0002c6d6) title_pane_g2

0x0003,

0xf529,	// (0x0002fbeb) title_pane_g

0xc28c,	// (0x0002c94e) aid_size_cell_colour_1_pane_ParamLimits

0xc28c,	// (0x0002c94e) aid_size_cell_colour_1_pane

0xc2a0,	// (0x0002c962) aid_size_cell_colour_2_pane_ParamLimits

0xc2a0,	// (0x0002c962) aid_size_cell_colour_2_pane

0xc2b4,	// (0x0002c976) aid_size_cell_colour_3_pane_ParamLimits

0xc2b4,	// (0x0002c976) aid_size_cell_colour_3_pane

0xc2c8,	// (0x0002c98a) aid_size_cell_colour_4_pane_ParamLimits

0xc2c8,	// (0x0002c98a) aid_size_cell_colour_4_pane

0x1209,	// (0x000218cb) title_pane_stacon_g1_ParamLimits

0x1209,	// (0x000218cb) title_pane_stacon_g1

0x56c6,	// (0x00025d88) popup_note_wait_window_g3_ParamLimits

0x56c6,	// (0x00025d88) popup_note_wait_window_g3

0x573c,	// (0x00025dfe) popup_note_wait_window_t5_ParamLimits

0x573c,	// (0x00025dfe) popup_note_wait_window_t5

0x31ab,	// (0x0002386d) main_feb_china_hwr_fs_writing_pane

0xc568,	// (0x0002cc2a) popup_feb_china_hwr_fs_window_ParamLimits

0xc568,	// (0x0002cc2a) popup_feb_china_hwr_fs_window

0xcbcf,	// (0x0002d291) aid_size_cell_hwr_fs_ParamLimits

0xcbcf,	// (0x0002d291) aid_size_cell_hwr_fs

0x5085,	// (0x00025747) bg_popup_sub_pane_cp3_ParamLimits

0x5085,	// (0x00025747) bg_popup_sub_pane_cp3

0xcbe4,	// (0x0002d2a6) grid_hwr_fs_pane_ParamLimits

0xcbe4,	// (0x0002d2a6) grid_hwr_fs_pane

0x1e32,	// (0x000224f4) linegrid_hwr_fs_pane_ParamLimits

0x1e32,	// (0x000224f4) linegrid_hwr_fs_pane

0xcbfc,	// (0x0002d2be) cell_hwr_fs_pane_ParamLimits

0xcbfc,	// (0x0002d2be) cell_hwr_fs_pane

0x5091,	// (0x00025753) linegrid_hwr_fs_pane_g1_ParamLimits

0x5091,	// (0x00025753) linegrid_hwr_fs_pane_g1

0xda44,	// (0x0002e106) linegrid_hwr_fs_pane_g2_ParamLimits

0xda44,	// (0x0002e106) linegrid_hwr_fs_pane_g2

0x50af,	// (0x00025771) linegrid_hwr_fs_pane_g3_ParamLimits

0x50af,	// (0x00025771) linegrid_hwr_fs_pane_g3

0x1e64,	// (0x00022526) linegrid_hwr_fs_pane_g4_ParamLimits

0x1e64,	// (0x00022526) linegrid_hwr_fs_pane_g4

0x1e7e,	// (0x00022540) linegrid_hwr_fs_pane_g5_ParamLimits

0x1e7e,	// (0x00022540) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x0002fe8d) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x0002fe8d) linegrid_hwr_fs_pane_g

0x50bb,	// (0x0002577d) cell_hwr_fs_pane_g1_ParamLimits

0x50bb,	// (0x0002577d) cell_hwr_fs_pane_g1

0x4e86,	// (0x00025548) cell_hwr_fs_pane_g2_ParamLimits

0x4e86,	// (0x00025548) cell_hwr_fs_pane_g2

0xda56,	// (0x0002e118) cell_hwr_fs_pane_g3_ParamLimits

0xda56,	// (0x0002e118) cell_hwr_fs_pane_g3

0xda63,	// (0x0002e125) cell_hwr_fs_pane_g4_ParamLimits

0xda63,	// (0x0002e125) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x0002fe98) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x0002fe98) cell_hwr_fs_pane_g

0xcc22,	// (0x0002d2e4) cell_hwr_fs_pane_t1

0x31ab,	// (0x0002386d) grid_highlight_pane_cp6

0x31ab,	// (0x0002386d) main_idle_act2_pane

0x3c7f,	// (0x00024341) aid_inside_area_popup_secondary

0xdb2d,	// (0x0002e1ef) aid_inside_area_window_primary_ParamLimits

0xdb2d,	// (0x0002e1ef) aid_inside_area_window_primary

0x6929,	// (0x00026feb) ai2_news_ticker_pane

0x6931,	// (0x00026ff3) aid_size_cell_ai1_link_ParamLimits

0x6931,	// (0x00026ff3) aid_size_cell_ai1_link

0xdeec,	// (0x0002e5ae) popup_ai2_data_window_ParamLimits

0xdeec,	// (0x0002e5ae) popup_ai2_data_window

0x6961,	// (0x00027023) popup_ai2_link_window_ParamLimits

0x6961,	// (0x00027023) popup_ai2_link_window

0x5085,	// (0x00025747) bg_popup_sub_pane_cp4_ParamLimits

0x5085,	// (0x00025747) bg_popup_sub_pane_cp4

0x6975,	// (0x00027037) grid_ai2_link_pane_ParamLimits

0x6975,	// (0x00027037) grid_ai2_link_pane

0x698c,	// (0x0002704e) popup_ai2_link_window_g1_ParamLimits

0x698c,	// (0x0002704e) popup_ai2_link_window_g1

0x6998,	// (0x0002705a) popup_ai2_link_window_g2_ParamLimits

0x6998,	// (0x0002705a) popup_ai2_link_window_g2

0x0001,

0xf9a9,	// (0x0003006b) popup_ai2_link_window_g_ParamLimits

0xf9a9,	// (0x0003006b) popup_ai2_link_window_g

0x69a7,	// (0x00027069) ai2_mp_button_pane

0x69af,	// (0x00027071) ai2_mp_volume_pane

0x5292,	// (0x00025954) bg_popup_sub_pane_cp5_ParamLimits

0x5292,	// (0x00025954) bg_popup_sub_pane_cp5

0x69b7,	// (0x00027079) heading_ai2_gene_pane_ParamLimits

0x69b7,	// (0x00027079) heading_ai2_gene_pane

0x69c3,	// (0x00027085) list_ai2_gene_pane_ParamLimits

0x69c3,	// (0x00027085) list_ai2_gene_pane

0x6a0b,	// (0x000270cd) cell_ai2_link_pane_ParamLimits

0x6a0b,	// (0x000270cd) cell_ai2_link_pane

0x6a21,	// (0x000270e3) cell_ai2_link_pane_g1

0x31ab,	// (0x0002386d) grid_highlight_pane_cp7

0x2186,	// (0x00022848) ai2_mp_volume_pane_g1

0x6af1,	// (0x000271b3) ai2_mp_volume_pane_g2

0xdf16,	// (0x0002e5d8) list_ai2_gene_pane_t1

0x6af9,	// (0x000271bb) ai2_mp_volume_pane_g3

0x0002,

0xf9c2,	// (0x00030084) ai2_mp_volume_pane_g

0x218e,	// (0x00022850) volume_small_pane_cp3

0x6b01,	// (0x000271c3) aid_size_cell_ai2_button

0x6b09,	// (0x000271cb) grid_ai2_button_pane

0x6b12,	// (0x000271d4) cell_ai2_button_pane_ParamLimits

0x6b12,	// (0x000271d4) cell_ai2_button_pane

0xe3d7,	// (0x0002ea99) cell_ai2_button_pane_g1

0x31ab,	// (0x0002386d) grid_highlight_pane_cp8

0x6ab1,	// (0x00027173) ai2_gene_pane_t1_ParamLimits

0x6ab1,	// (0x00027173) ai2_gene_pane_t1

0xc506,	// (0x0002cbc8) aid_height_parent_landscape

0xdc75,	// (0x0002e337) aid_height_set_list

0x6406,	// (0x00026ac8) aid_size_parent

0x674c,	// (0x00026e0e) aid_size_cell_graphic_pane_ParamLimits

0x69d3,	// (0x00027095) popup_ai2_data_window_g1_ParamLimits

0x69d3,	// (0x00027095) popup_ai2_data_window_g1

0x69df,	// (0x000270a1) ai2_news_ticker_pane_g1

0x69e7,	// (0x000270a9) ai2_news_ticker_pane_g2

0x0001,

0xf9ae,	// (0x00030070) ai2_news_ticker_pane_g

0x69ef,	// (0x000270b1) ai2_news_ticker_pane_t1

0x69fd,	// (0x000270bf) ai2_news_ticker_pane_t2

0x0001,

0xf9b3,	// (0x00030075) ai2_news_ticker_pane_t

0x6a2a,	// (0x000270ec) heading_ai2_gene_pane_g1

0x6a32,	// (0x000270f4) heading_ai2_gene_pane_t1_ParamLimits

0x6a32,	// (0x000270f4) heading_ai2_gene_pane_t1

0x6a47,	// (0x00027109) list_highlight_pane_cp6

0xdf00,	// (0x0002e5c2) ai2_gene_pane_ParamLimits

0xdf00,	// (0x0002e5c2) ai2_gene_pane

0xdf24,	// (0x0002e5e6) list_ai2_gene_pane_t2

0x0001,

0xf9b8,	// (0x0003007a) list_ai2_gene_pane_t

0x6a82,	// (0x00027144) list_highlight_pane_cp8_ParamLimits

0x6a82,	// (0x00027144) list_highlight_pane_cp8

0x6a93,	// (0x00027155) ai2_gene_pane_g1_ParamLimits

0x6a93,	// (0x00027155) ai2_gene_pane_g1

0x6aa5,	// (0x00027167) ai2_gene_pane_g2_ParamLimits

0x6aa5,	// (0x00027167) ai2_gene_pane_g2

0x0001,

0xf9bd,	// (0x0003007f) ai2_gene_pane_g_ParamLimits

0xf9bd,	// (0x0003007f) ai2_gene_pane_g

0x3aae,	// (0x00024170) scroll_pane_cp12

0xc4c3,	// (0x0002cb85) control_pane_t3_ParamLimits

0xc4c3,	// (0x0002cb85) control_pane_t3

0xd5d7,	// (0x0002dc99) status_small_pane_g8_ParamLimits

0xd5d7,	// (0x0002dc99) status_small_pane_g8

0xc5fd,	// (0x0002ccbf) popup_find_window_ParamLimits

0xc890,	// (0x0002cf52) popup_note_image_window_ParamLimits

0x0378,	// (0x00020a3a) list_double2_graphic_pane_vc_g1_ParamLimits

0x0378,	// (0x00020a3a) list_double2_graphic_pane_vc_g1

0x03e2,	// (0x00020aa4) list_double2_graphic_pane_vc_g2_ParamLimits

0x03e2,	// (0x00020aa4) list_double2_graphic_pane_vc_g2

0x03ee,	// (0x00020ab0) list_double2_graphic_pane_vc_g3_ParamLimits

0x03ee,	// (0x00020ab0) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x0002fe5b) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x0002fe5b) list_double2_graphic_pane_vc_g

0x03fa,	// (0x00020abc) list_double2_graphic_pane_vc_t1_ParamLimits

0x03fa,	// (0x00020abc) list_double2_graphic_pane_vc_t1

0x0384,	// (0x00020a46) list_single_heading_pane_vc_g1_ParamLimits

0x0384,	// (0x00020a46) list_single_heading_pane_vc_g1

0x0390,	// (0x00020a52) list_single_heading_pane_vc_g2_ParamLimits

0x0390,	// (0x00020a52) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002fc65) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002fc65) list_single_heading_pane_vc_g

0x0410,	// (0x00020ad2) list_single_heading_pane_vc_t1_ParamLimits

0x0410,	// (0x00020ad2) list_single_heading_pane_vc_t1

0x0426,	// (0x00020ae8) list_single_heading_pane_vc_t2_ParamLimits

0x0426,	// (0x00020ae8) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x0002fe7c) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x0002fe7c) list_single_heading_pane_vc_t

0x0438,	// (0x00020afa) list_setting_number_pane_vc_g1_ParamLimits

0x0438,	// (0x00020afa) list_setting_number_pane_vc_g1

0x0444,	// (0x00020b06) list_setting_number_pane_vc_g2_ParamLimits

0x0444,	// (0x00020b06) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x0002fe81) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x0002fe81) list_setting_number_pane_vc_g

0x0450,	// (0x00020b12) list_setting_number_pane_vc_t1_ParamLimits

0x0450,	// (0x00020b12) list_setting_number_pane_vc_t1

0x0464,	// (0x00020b26) list_setting_number_pane_vc_t2_ParamLimits

0x0464,	// (0x00020b26) list_setting_number_pane_vc_t2

0x0480,	// (0x00020b42) list_setting_number_pane_vc_t3_ParamLimits

0x0480,	// (0x00020b42) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x0002fe86) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x0002fe86) list_setting_number_pane_vc_t

0x049e,	// (0x00020b60) set_value_pane_vc_ParamLimits

0x049e,	// (0x00020b60) set_value_pane_vc

0x0577,	// (0x00020c39) list_double2_graphic_pane_vc_ParamLimits

0x0577,	// (0x00020c39) list_double2_graphic_pane_vc

0x65be,	// (0x00026c80) list_double2_large_graphic_pane_vc_ParamLimits

0x65be,	// (0x00026c80) list_double2_large_graphic_pane_vc

0x0577,	// (0x00020c39) list_double2_pane_vc_ParamLimits

0x0577,	// (0x00020c39) list_double2_pane_vc

0x0577,	// (0x00020c39) list_double_graphic_heading_pane_vc_ParamLimits

0x0577,	// (0x00020c39) list_double_graphic_heading_pane_vc

0x0577,	// (0x00020c39) list_double_graphic_pane_vc_ParamLimits

0x0577,	// (0x00020c39) list_double_graphic_pane_vc

0x0577,	// (0x00020c39) list_double_heading_pane_vc_ParamLimits

0x0577,	// (0x00020c39) list_double_heading_pane_vc

0x65d0,	// (0x00026c92) list_double_large_graphic_pane_vc_ParamLimits

0x65d0,	// (0x00026c92) list_double_large_graphic_pane_vc

0x0577,	// (0x00020c39) list_double_number_pane_vc_ParamLimits

0x0577,	// (0x00020c39) list_double_number_pane_vc

0x0577,	// (0x00020c39) list_double_pane_vc_ParamLimits

0x0577,	// (0x00020c39) list_double_pane_vc

0x0577,	// (0x00020c39) list_double_time_pane_vc_ParamLimits

0x0577,	// (0x00020c39) list_double_time_pane_vc

0x0577,	// (0x00020c39) list_setting_number_pane_vc_ParamLimits

0x0577,	// (0x00020c39) list_setting_number_pane_vc

0x0577,	// (0x00020c39) list_setting_pane_vc_ParamLimits

0x0577,	// (0x00020c39) list_setting_pane_vc

0x0577,	// (0x00020c39) list_single_graphic_heading_pane_vc_ParamLimits

0x0577,	// (0x00020c39) list_single_graphic_heading_pane_vc

0x0577,	// (0x00020c39) list_single_heading_pane_vc_ParamLimits

0x0577,	// (0x00020c39) list_single_heading_pane_vc

0x0577,	// (0x00020c39) list_single_number_heading_pane_vc_ParamLimits

0x0577,	// (0x00020c39) list_single_number_heading_pane_vc

0x0605,	// (0x00020cc7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0605,	// (0x00020cc7) list_double_graphic_heading_pane_vc_g1

0x0384,	// (0x00020a46) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0384,	// (0x00020a46) list_double_graphic_heading_pane_vc_g2

0x0390,	// (0x00020a52) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0390,	// (0x00020a52) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c9,	// (0x0003008b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x0003008b) list_double_graphic_heading_pane_vc_g

0x0611,	// (0x00020cd3) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0611,	// (0x00020cd3) list_double_graphic_heading_pane_vc_t1

0x062d,	// (0x00020cef) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x062d,	// (0x00020cef) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d0,	// (0x00030092) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d0,	// (0x00030092) list_double_graphic_heading_pane_vc_t

0x0438,	// (0x00020afa) list_setting_pane_vc_g1_ParamLimits

0x0438,	// (0x00020afa) list_setting_pane_vc_g1

0x0444,	// (0x00020b06) list_setting_pane_vc_g2_ParamLimits

0x0444,	// (0x00020b06) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x0002fe81) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x0002fe81) list_setting_pane_vc_g

0x064b,	// (0x00020d0d) list_setting_pane_vc_t1_ParamLimits

0x064b,	// (0x00020d0d) list_setting_pane_vc_t1

0x0667,	// (0x00020d29) list_setting_pane_vc_t2_ParamLimits

0x0667,	// (0x00020d29) list_setting_pane_vc_t2

0x0001,

0xf9fe,	// (0x000300c0) list_setting_pane_vc_t_ParamLimits

0xf9fe,	// (0x000300c0) list_setting_pane_vc_t

0x049e,	// (0x00020b60) set_value_pane_cp_vc_ParamLimits

0x049e,	// (0x00020b60) set_value_pane_cp_vc

0x0384,	// (0x00020a46) list_single_number_heading_pane_vc_g1_ParamLimits

0x0384,	// (0x00020a46) list_single_number_heading_pane_vc_g1

0x0390,	// (0x00020a52) list_single_number_heading_pane_vc_g2_ParamLimits

0x0390,	// (0x00020a52) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002fc65) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002fc65) list_single_number_heading_pane_vc_g

0x0683,	// (0x00020d45) list_single_number_heading_pane_vc_t1_ParamLimits

0x0683,	// (0x00020d45) list_single_number_heading_pane_vc_t1

0x0699,	// (0x00020d5b) list_single_number_heading_pane_vc_t2_ParamLimits

0x0699,	// (0x00020d5b) list_single_number_heading_pane_vc_t2

0x06ab,	// (0x00020d6d) list_single_number_heading_pane_vc_t3_ParamLimits

0x06ab,	// (0x00020d6d) list_single_number_heading_pane_vc_t3

0x0002,

0xfa03,	// (0x000300c5) list_single_number_heading_pane_vc_t_ParamLimits

0xfa03,	// (0x000300c5) list_single_number_heading_pane_vc_t

0x0378,	// (0x00020a3a) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0378,	// (0x00020a3a) list_single_graphic_heading_pane_vc_g1

0x0384,	// (0x00020a46) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0384,	// (0x00020a46) list_single_graphic_heading_pane_vc_g4

0x0390,	// (0x00020a52) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0390,	// (0x00020a52) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf78b,	// (0x0002fe4d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf78b,	// (0x0002fe4d) list_single_graphic_heading_pane_vc_g

0x06bd,	// (0x00020d7f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x06bd,	// (0x00020d7f) list_single_graphic_heading_pane_vc_t1

0x06d3,	// (0x00020d95) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x06d3,	// (0x00020d95) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0a,	// (0x000300cc) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0a,	// (0x000300cc) list_single_graphic_heading_pane_vc_t

0x0384,	// (0x00020a46) list_double2_pane_vc_g1_ParamLimits

0x0384,	// (0x00020a46) list_double2_pane_vc_g1

0x0390,	// (0x00020a52) list_double2_pane_vc_g2_ParamLimits

0x0390,	// (0x00020a52) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002fc65) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002fc65) list_double2_pane_vc_g

0x06e5,	// (0x00020da7) list_double2_pane_vc_t1_ParamLimits

0x06e5,	// (0x00020da7) list_double2_pane_vc_t1

0x06fb,	// (0x00020dbd) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x06fb,	// (0x00020dbd) list_double2_large_graphic_pane_vc_g1

0xf395,	// (0x0002fa57) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xf395,	// (0x0002fa57) list_double2_large_graphic_pane_vc_g2

0xf3a1,	// (0x0002fa63) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xf3a1,	// (0x0002fa63) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x0002fc82) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x0002fc82) list_double2_large_graphic_pane_vc_g

0x0707,	// (0x00020dc9) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0707,	// (0x00020dc9) list_double2_large_graphic_pane_vc_t1

0x071d,	// (0x00020ddf) list_double_time_pane_vc_g1_ParamLimits

0x071d,	// (0x00020ddf) list_double_time_pane_vc_g1

0x0729,	// (0x00020deb) list_double_time_pane_vc_g2_ParamLimits

0x0729,	// (0x00020deb) list_double_time_pane_vc_g2

0x0001,

0xfa0f,	// (0x000300d1) list_double_time_pane_vc_g_ParamLimits

0xfa0f,	// (0x000300d1) list_double_time_pane_vc_g

0x0735,	// (0x00020df7) list_double_time_pane_vc_t1_ParamLimits

0x0735,	// (0x00020df7) list_double_time_pane_vc_t1

0x0759,	// (0x00020e1b) list_double_time_pane_vc_t2_ParamLimits

0x0759,	// (0x00020e1b) list_double_time_pane_vc_t2

0x07a3,	// (0x00020e65) list_double_time_pane_vc_t3_ParamLimits

0x07a3,	// (0x00020e65) list_double_time_pane_vc_t3

0x07b5,	// (0x00020e77) list_double_time_pane_vc_t4_ParamLimits

0x07b5,	// (0x00020e77) list_double_time_pane_vc_t4

0x0003,

0xfa14,	// (0x000300d6) list_double_time_pane_vc_t_ParamLimits

0xfa14,	// (0x000300d6) list_double_time_pane_vc_t

0x0384,	// (0x00020a46) list_double_pane_vc_g1_ParamLimits

0x0384,	// (0x00020a46) list_double_pane_vc_g1

0x0390,	// (0x00020a52) list_double_pane_vc_g2_ParamLimits

0x0390,	// (0x00020a52) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002fc65) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002fc65) list_double_pane_vc_g

0x07c9,	// (0x00020e8b) list_double_pane_vc_t1_ParamLimits

0x07c9,	// (0x00020e8b) list_double_pane_vc_t1

0x07dd,	// (0x00020e9f) list_double_pane_vc_t2_ParamLimits

0x07dd,	// (0x00020e9f) list_double_pane_vc_t2

0x0001,

0xfa1d,	// (0x000300df) list_double_pane_vc_t_ParamLimits

0xfa1d,	// (0x000300df) list_double_pane_vc_t

0x0384,	// (0x00020a46) list_double_number_pane_vc_g1_ParamLimits

0x0384,	// (0x00020a46) list_double_number_pane_vc_g1

0x0390,	// (0x00020a52) list_double_number_pane_vc_g2_ParamLimits

0x0390,	// (0x00020a52) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002fc65) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002fc65) list_double_number_pane_vc_g

0x07f5,	// (0x00020eb7) list_double_number_pane_vc_t1_ParamLimits

0x07f5,	// (0x00020eb7) list_double_number_pane_vc_t1

0x0807,	// (0x00020ec9) list_double_number_pane_vc_t2_ParamLimits

0x0807,	// (0x00020ec9) list_double_number_pane_vc_t2

0x081b,	// (0x00020edd) list_double_number_pane_vc_t3_ParamLimits

0x081b,	// (0x00020edd) list_double_number_pane_vc_t3

0x0002,

0xfa22,	// (0x000300e4) list_double_number_pane_vc_t_ParamLimits

0xfa22,	// (0x000300e4) list_double_number_pane_vc_t

0x0833,	// (0x00020ef5) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0833,	// (0x00020ef5) list_double_large_graphic_pane_vc_g1

0x084f,	// (0x00020f11) list_double_large_graphic_pane_vc_g2_ParamLimits

0x084f,	// (0x00020f11) list_double_large_graphic_pane_vc_g2

0x0863,	// (0x00020f25) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0863,	// (0x00020f25) list_double_large_graphic_pane_vc_g3

0x0872,	// (0x00020f34) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0872,	// (0x00020f34) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa29,	// (0x000300eb) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa29,	// (0x000300eb) list_double_large_graphic_pane_vc_g

0x0881,	// (0x00020f43) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0881,	// (0x00020f43) list_double_large_graphic_pane_vc_t1

0x089d,	// (0x00020f5f) list_double_large_graphic_pane_vc_t2_ParamLimits

0x089d,	// (0x00020f5f) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa32,	// (0x000300f4) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa32,	// (0x000300f4) list_double_large_graphic_pane_vc_t

0x0384,	// (0x00020a46) list_double_heading_pane_vc_g1_ParamLimits

0x0384,	// (0x00020a46) list_double_heading_pane_vc_g1

0x0390,	// (0x00020a52) list_double_heading_pane_vc_g2_ParamLimits

0x0390,	// (0x00020a52) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002fc65) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002fc65) list_double_heading_pane_vc_g

0x08bf,	// (0x00020f81) list_double_heading_pane_vc_t1_ParamLimits

0x08bf,	// (0x00020f81) list_double_heading_pane_vc_t1

0x08d3,	// (0x00020f95) list_double_heading_pane_vc_t2_ParamLimits

0x08d3,	// (0x00020f95) list_double_heading_pane_vc_t2

0x0001,

0xfa37,	// (0x000300f9) list_double_heading_pane_vc_t_ParamLimits

0xfa37,	// (0x000300f9) list_double_heading_pane_vc_t

0x08eb,	// (0x00020fad) list_double_graphic_pane_vc_g1_ParamLimits

0x08eb,	// (0x00020fad) list_double_graphic_pane_vc_g1

0x08fe,	// (0x00020fc0) list_double_graphic_pane_vc_g2_ParamLimits

0x08fe,	// (0x00020fc0) list_double_graphic_pane_vc_g2

0x0384,	// (0x00020a46) list_double_graphic_pane_vc_g3_ParamLimits

0x0384,	// (0x00020a46) list_double_graphic_pane_vc_g3

0x0003,

0xfa3c,	// (0x000300fe) list_double_graphic_pane_vc_g_ParamLimits

0xfa3c,	// (0x000300fe) list_double_graphic_pane_vc_g

0x091b,	// (0x00020fdd) list_double_graphic_pane_vc_t1_ParamLimits

0x091b,	// (0x00020fdd) list_double_graphic_pane_vc_t1

0x0945,	// (0x00021007) list_double_graphic_pane_vc_t2_ParamLimits

0x0945,	// (0x00021007) list_double_graphic_pane_vc_t2

0x0001,

0xfa45,	// (0x00030107) list_double_graphic_pane_vc_t_ParamLimits

0xfa45,	// (0x00030107) list_double_graphic_pane_vc_t

0x0d66,	// (0x00021428) aid_size_cell_fastswap

0xbdfb,	// (0x0002c4bd) aid_size_cell_touch_ParamLimits

0xbdfb,	// (0x0002c4bd) aid_size_cell_touch

0x0fc9,	// (0x0002168b) popup_fast_swap_wide_window_ParamLimits

0x0fc9,	// (0x0002168b) popup_fast_swap_wide_window

0xbfab,	// (0x0002c66d) touch_pane_ParamLimits

0xbfab,	// (0x0002c66d) touch_pane

0x3b04,	// (0x000241c6) button_value_adjust_pane_cp2

0x005f,	// (0x00020721) button_value_adjust_pane_cp4

0x007f,	// (0x00020741) form_field_data_pane_cp2

0xb94c,	// (0x0002c00e) form_field_data_wide_pane_cp2

0x3f97,	// (0x00024659) bg_scroll_pane_ParamLimits

0x136b,	// (0x00021a2d) scroll_handle_pane_ParamLimits

0x137f,	// (0x00021a41) scroll_sc2_down_pane_ParamLimits

0x137f,	// (0x00021a41) scroll_sc2_down_pane

0x3fc8,	// (0x0002468a) scroll_sc2_up_pane_ParamLimits

0x3fc8,	// (0x0002468a) scroll_sc2_up_pane

0xe054,	// (0x0002e716) grid_wheel_folder_pane_g1_ParamLimits

0xe054,	// (0x0002e716) grid_wheel_folder_pane_g1

0x1544,	// (0x00021c06) clock_nsta_pane_cp2_ParamLimits

0x1544,	// (0x00021c06) clock_nsta_pane_cp2

0xd4c6,	// (0x0002db88) listscroll_midp_pane_ParamLimits

0xd4d2,	// (0x0002db94) midp_canvas_pane

0x4abf,	// (0x00025181) nsta_clock_indic_pane

0x4af3,	// (0x000251b5) listscroll_form_pane_vc

0x4afb,	// (0x000251bd) listscroll_set_pane_vc_ParamLimits

0x4afb,	// (0x000251bd) listscroll_set_pane_vc

0xd74f,	// (0x0002de11) clock_nsta_pane

0xd779,	// (0x0002de3b) indicator_nsta_pane

0x4f4f,	// (0x00025611) bg_popup_sub_pane_cp2_ParamLimits

0x4f63,	// (0x00025625) find_pane_cp2_ParamLimits

0x4f63,	// (0x00025625) find_pane_cp2

0x4f79,	// (0x0002563b) grid_toobar_pane_ParamLimits

0x5059,	// (0x0002571b) list_form_gen_pane_vc_ParamLimits

0x5059,	// (0x0002571b) list_form_gen_pane_vc

0x506f,	// (0x00025731) scroll_pane_cp8_vc_ParamLimits

0x506f,	// (0x00025731) scroll_pane_cp8_vc

0x50eb,	// (0x000257ad) data_form_wide_pane_vc_ParamLimits

0x50eb,	// (0x000257ad) data_form_wide_pane_vc

0x50f7,	// (0x000257b9) form_field_data_wide_pane_vc_g1

0x50ff,	// (0x000257c1) form_field_data_wide_pane_vc_t1_ParamLimits

0x50ff,	// (0x000257c1) form_field_data_wide_pane_vc_t1

0x3b18,	// (0x000241da) input_focus_pane_cp6_vc_ParamLimits

0x3b18,	// (0x000241da) input_focus_pane_cp6_vc

0x5445,	// (0x00025b07) list_midp_pane_ParamLimits

0x67b6,	// (0x00026e78) scroll_pane_cp16_ParamLimits

0x67b6,	// (0x00026e78) scroll_pane_cp16

0x549b,	// (0x00025b5d) button_value_adjust_pane_ParamLimits

0x549b,	// (0x00025b5d) button_value_adjust_pane

0xdc86,	// (0x0002e348) button_value_adjust_pane_cp6_ParamLimits

0xdc86,	// (0x0002e348) button_value_adjust_pane_cp6

0xdda0,	// (0x0002e462) settings_code_pane_cp_ParamLimits

0xdda0,	// (0x0002e462) settings_code_pane_cp

0xe3d7,	// (0x0002ea99) cell_touch_pane_g1

0xe3d7,	// (0x0002ea99) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x0002fda0) cell_touch_pane_g

0xdf32,	// (0x0002e5f4) cell_touch_pane_cp_ParamLimits

0xdf32,	// (0x0002e5f4) cell_touch_pane_cp

0xdf4e,	// (0x0002e610) cell_touch_pane_ParamLimits

0xdf4e,	// (0x0002e610) cell_touch_pane

0xe3d7,	// (0x0002ea99) scroll_sc2_down_pane_g1

0xe3d7,	// (0x0002ea99) scroll_sc2_up_pane_g1

0x31ab,	// (0x0002386d) bg_set_opt_pane_cp4_vc

0x6b46,	// (0x00027208) list_set_graphic_pane_vc_g1_ParamLimits

0x6b46,	// (0x00027208) list_set_graphic_pane_vc_g1

0x6b52,	// (0x00027214) list_set_graphic_pane_vc_g2_ParamLimits

0x6b52,	// (0x00027214) list_set_graphic_pane_vc_g2

0x0001,

0xf9d5,	// (0x00030097) list_set_graphic_pane_vc_g_ParamLimits

0xf9d5,	// (0x00030097) list_set_graphic_pane_vc_g

0x6b5e,	// (0x00027220) text_primary_small_cp13_vc_ParamLimits

0x6b5e,	// (0x00027220) text_primary_small_cp13_vc

0x6b76,	// (0x00027238) list_set_graphic_pane_vc_ParamLimits

0x6b76,	// (0x00027238) list_set_graphic_pane_vc

0x31ab,	// (0x0002386d) input_focus_pane_cp2_vc

0xe3d7,	// (0x0002ea99) setting_code_pane_vc_g1

0x32d6,	// (0x00023998) setting_code_pane_vc_t1

0x6b89,	// (0x0002724b) set_text_pane_vc_t1_ParamLimits

0x6b89,	// (0x0002724b) set_text_pane_vc_t1

0x31ab,	// (0x0002386d) input_focus_pane_cp1_vc

0x6ba5,	// (0x00027267) list_set_text_pane_vc

0xe3d7,	// (0x0002ea99) setting_text_pane_vc_g1

0x31ab,	// (0x0002386d) bg_set_opt_pane_cp2_vc

0x32cd,	// (0x0002398f) setting_slider_graphic_pane_vc_g1

0x6baf,	// (0x00027271) setting_slider_graphic_pane_vc_t1

0x6bbf,	// (0x00027281) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9da,	// (0x0003009c) setting_slider_graphic_pane_vc_t

0x6bcf,	// (0x00027291) slider_set_pane_cp_vc

0x6bd7,	// (0x00027299) slider_set_pane_vc_g1

0x6be0,	// (0x000272a2) slider_set_pane_vc_g2

0x0006,

0xf9df,	// (0x000300a1) slider_set_pane_vc_g

0x3b70,	// (0x00024232) set_opt_bg_pane_g1_copy1

0x3b78,	// (0x0002423a) set_opt_bg_pane_g2_copy1

0x6c0c,	// (0x000272ce) set_opt_bg_pane_g3_copy1

0x3b88,	// (0x0002424a) set_opt_bg_pane_g4_copy1

0x3b90,	// (0x00024252) set_opt_bg_pane_g5_copy1

0x3b98,	// (0x0002425a) set_opt_bg_pane_g6_copy1

0x6c16,	// (0x000272d8) set_opt_bg_pane_g7_copy1

0x6c20,	// (0x000272e2) set_opt_bg_pane_g8_copy1

0x6c2a,	// (0x000272ec) set_opt_bg_pane_g9_copy1

0x31ab,	// (0x0002386d) bg_set_opt_pane_cp_vc

0x6c34,	// (0x000272f6) setting_slider_pane_vc_t1

0x6c43,	// (0x00027305) setting_slider_pane_vc_t2

0x6c53,	// (0x00027315) setting_slider_pane_vc_t3

0x0002,

0xf9ee,	// (0x000300b0) setting_slider_pane_vc_t

0x6c63,	// (0x00027325) slider_set_pane_vc

0x1ea2,	// (0x00022564) volume_set_pane_vc_g1

0x1eab,	// (0x0002256d) volume_set_pane_vc_g2

0x1eb4,	// (0x00022576) volume_set_pane_vc_g3

0x1ebd,	// (0x0002257f) volume_set_pane_vc_g4

0x1ec6,	// (0x00022588) volume_set_pane_vc_g5

0x1ecf,	// (0x00022591) volume_set_pane_vc_g6

0x1ed8,	// (0x0002259a) volume_set_pane_vc_g7

0x1ee1,	// (0x000225a3) volume_set_pane_vc_g8

0x1eea,	// (0x000225ac) volume_set_pane_vc_g9

0x1ef3,	// (0x000225b5) volume_set_pane_vc_g10

0x0009,

0xf88c,	// (0x0002ff4e) volume_set_pane_vc_g

0x6c6b,	// (0x0002732d) volume_set_pane_vc

0x6c73,	// (0x00027335) button_value_adjust_pane_cp1_vc

0x6c7d,	// (0x0002733f) list_highlight_pane_cp2_vc

0x6c86,	// (0x00027348) list_set_pane_vc_ParamLimits

0x6c86,	// (0x00027348) list_set_pane_vc

0x6ce4,	// (0x000273a6) main_pane_set_vc_t1_ParamLimits

0x6ce4,	// (0x000273a6) main_pane_set_vc_t1

0x6cf9,	// (0x000273bb) main_pane_set_vc_t2_ParamLimits

0x6cf9,	// (0x000273bb) main_pane_set_vc_t2

0x6d0b,	// (0x000273cd) main_pane_set_vc_t3_ParamLimits

0x6d0b,	// (0x000273cd) main_pane_set_vc_t3

0x6d1f,	// (0x000273e1) main_pane_set_vc_t4_ParamLimits

0x6d1f,	// (0x000273e1) main_pane_set_vc_t4

0x0003,

0xf9f5,	// (0x000300b7) main_pane_set_vc_t_ParamLimits

0xf9f5,	// (0x000300b7) main_pane_set_vc_t

0x6d33,	// (0x000273f5) setting_code_pane_vc_ParamLimits

0x6d33,	// (0x000273f5) setting_code_pane_vc

0x6d44,	// (0x00027406) setting_slider_graphic_pane_vc

0x6d44,	// (0x00027406) setting_slider_pane_vc

0x6d44,	// (0x00027406) setting_text_pane_vc

0x6d44,	// (0x00027406) setting_volume_pane_vc

0x6d4e,	// (0x00027410) scroll_pane_cp121_vc

0x3af2,	// (0x000241b4) set_content_pane_vc

0x6d56,	// (0x00027418) button_value_adjust_pane_g1

0x6d5f,	// (0x00027421) button_value_adjust_pane_g2

0x0001,

0xfa4a,	// (0x0003010c) button_value_adjust_pane_g

0x6d68,	// (0x0002742a) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6d68,	// (0x0002742a) form_field_slider_wide_pane_vc_t1

0x6d7c,	// (0x0002743e) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6d7c,	// (0x0002743e) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa4f,	// (0x00030111) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa4f,	// (0x00030111) form_field_slider_wide_pane_vc_t

0x3506,	// (0x00023bc8) input_focus_pane_cp10_vc_ParamLimits

0x3506,	// (0x00023bc8) input_focus_pane_cp10_vc

0x6daa,	// (0x0002746c) slider_cont_pane_cp1_vc_ParamLimits

0x6daa,	// (0x0002746c) slider_cont_pane_cp1_vc

0x6dbc,	// (0x0002747e) slider_form_pane_g1_cp2

0x6be0,	// (0x000272a2) slider_form_pane_g2_cp2

0x6de9,	// (0x000274ab) form_field_slider_pane_vc_t3

0x6df7,	// (0x000274b9) form_field_slider_pane_vc_t4

0x6e05,	// (0x000274c7) slider_form_pane_vc_ParamLimits

0x6e05,	// (0x000274c7) slider_form_pane_vc

0x6e12,	// (0x000274d4) form_field_slider_pane_vc_t1_ParamLimits

0x6e12,	// (0x000274d4) form_field_slider_pane_vc_t1

0x6d7c,	// (0x0002743e) form_field_slider_pane_vc_t2_ParamLimits

0x6d7c,	// (0x0002743e) form_field_slider_pane_vc_t2

0x0001,

0xfa61,	// (0x00030123) form_field_slider_pane_vc_t_ParamLimits

0xfa61,	// (0x00030123) form_field_slider_pane_vc_t

0x3506,	// (0x00023bc8) input_focus_pane_cp9_vc_ParamLimits

0x3506,	// (0x00023bc8) input_focus_pane_cp9_vc

0x6e2e,	// (0x000274f0) slider_cont_pane_vc_ParamLimits

0x6e2e,	// (0x000274f0) slider_cont_pane_vc

0x6e42,	// (0x00027504) list_form_graphic_pane_cp_vc_ParamLimits

0x6e42,	// (0x00027504) list_form_graphic_pane_cp_vc

0x50f7,	// (0x000257b9) form_field_popup_wide_pane_vc_g1

0x6e57,	// (0x00027519) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6e57,	// (0x00027519) form_field_popup_wide_pane_vc_t1

0x3b18,	// (0x000241da) input_focus_pane_cp8_vc_ParamLimits

0x3b18,	// (0x000241da) input_focus_pane_cp8_vc

0x6e9c,	// (0x0002755e) list_form_wide_pane_vc_ParamLimits

0x6e9c,	// (0x0002755e) list_form_wide_pane_vc

0x6ea8,	// (0x0002756a) list_form_graphic_pane_vc_g1

0x6eb0,	// (0x00027572) list_form_graphic_pane_vc_t1_ParamLimits

0x6eb0,	// (0x00027572) list_form_graphic_pane_vc_t1

0x328b,	// (0x0002394d) list_highlight_pane_cp5_vc_ParamLimits

0x328b,	// (0x0002394d) list_highlight_pane_cp5_vc

0x6ecc,	// (0x0002758e) list_form_graphic_pane_vc_ParamLimits

0x6ecc,	// (0x0002758e) list_form_graphic_pane_vc

0x50f7,	// (0x000257b9) form_field_popup_pane_vc_g1

0x6ee2,	// (0x000275a4) form_field_popup_pane_vc_t1_ParamLimits

0x6ee2,	// (0x000275a4) form_field_popup_pane_vc_t1

0x3b18,	// (0x000241da) input_focus_pane_cp7_vc_ParamLimits

0x3b18,	// (0x000241da) input_focus_pane_cp7_vc

0x6ef9,	// (0x000275bb) list_form_pane_vc_ParamLimits

0x6ef9,	// (0x000275bb) list_form_pane_vc

0x6f05,	// (0x000275c7) data_form_pane_vc_t1_ParamLimits

0x6f05,	// (0x000275c7) data_form_pane_vc_t1

0x3b70,	// (0x00024232) input_focus_pane_vc_g1

0x3b78,	// (0x0002423a) input_focus_pane_vc_g2

0x3b80,	// (0x00024242) input_focus_pane_vc_g3

0x3b88,	// (0x0002424a) input_focus_pane_vc_g4

0x3b90,	// (0x00024252) input_focus_pane_vc_g5

0x3b98,	// (0x0002425a) input_focus_pane_vc_g6

0x3ba0,	// (0x00024262) input_focus_pane_vc_g7

0x3ba8,	// (0x0002426a) input_focus_pane_vc_g8

0x3bb0,	// (0x00024272) input_focus_pane_vc_g9

0xe3d7,	// (0x0002ea99) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x0002fd29) input_focus_pane_vc_g

0x50eb,	// (0x000257ad) data_form_pane_vc_ParamLimits

0x50eb,	// (0x000257ad) data_form_pane_vc

0x50f7,	// (0x000257b9) form_field_data_pane_vc_g1

0x6f20,	// (0x000275e2) form_field_data_pane_vc_t1_ParamLimits

0x6f20,	// (0x000275e2) form_field_data_pane_vc_t1

0x3b18,	// (0x000241da) input_focus_pane_vc_ParamLimits

0x3b18,	// (0x000241da) input_focus_pane_vc

0x6f3a,	// (0x000275fc) button_value_adjust_pane_cp3_vc

0x6f42,	// (0x00027604) button_value_adjust_pane_cp5_vc

0x6f4a,	// (0x0002760c) form_field_data_pane_vc_ParamLimits

0x6f4a,	// (0x0002760c) form_field_data_pane_vc

0x6f61,	// (0x00027623) form_field_data_pane_vc_cp2

0x6f69,	// (0x0002762b) form_field_data_wide_pane_vc_ParamLimits

0x6f69,	// (0x0002762b) form_field_data_wide_pane_vc

0x6f7f,	// (0x00027641) form_field_data_wide_pane_vc_cp2

0x6f87,	// (0x00027649) form_field_popup_pane_vc_ParamLimits

0x6f87,	// (0x00027649) form_field_popup_pane_vc

0x6f9e,	// (0x00027660) form_field_popup_wide_pane_vc_ParamLimits

0x6f9e,	// (0x00027660) form_field_popup_wide_pane_vc

0x6fb4,	// (0x00027676) form_field_slider_pane_vc_ParamLimits

0x6fb4,	// (0x00027676) form_field_slider_pane_vc

0x6fc7,	// (0x00027689) form_field_slider_wide_pane_vc_ParamLimits

0x6fc7,	// (0x00027689) form_field_slider_wide_pane_vc

0xdf6c,	// (0x0002e62e) grid_touch_1_pane_ParamLimits

0xdf6c,	// (0x0002e62e) grid_touch_1_pane

0xdf80,	// (0x0002e642) grid_touch_2_pane_ParamLimits

0xdf80,	// (0x0002e642) grid_touch_2_pane

0x70ab,	// (0x0002776d) touch_pane_g1_ParamLimits

0x70ab,	// (0x0002776d) touch_pane_g1

0x6ffe,	// (0x000276c0) cell_app_pane_cp_wide_ParamLimits

0x6ffe,	// (0x000276c0) cell_app_pane_cp_wide

0x700f,	// (0x000276d1) grid_popup_fast_wide_pane_ParamLimits

0x700f,	// (0x000276d1) grid_popup_fast_wide_pane

0x7023,	// (0x000276e5) scroll_pane_cp19_ParamLimits

0x7023,	// (0x000276e5) scroll_pane_cp19

0x31ab,	// (0x0002386d) bg_popup_window_pane_cp20

0x7037,	// (0x000276f9) listscroll_popup_fast_wide_pane

0xdfaa,	// (0x0002e66c) grid_indicator_nsta_pane

0x7051,	// (0x00027713) clock_nsta_pane_g1

0x705a,	// (0x0002771c) clock_nsta_pane_t1

0xdfb6,	// (0x0002e678) cell_indicator_nsta_pane_ParamLimits

0xdfb6,	// (0x0002e678) cell_indicator_nsta_pane

0x70ab,	// (0x0002776d) cell_indicator_nsta_pane_g1

0xdfd1,	// (0x0002e693) cell_indicator_nsta_pane_g2

0x0001,

0xfa72,	// (0x00030134) cell_indicator_nsta_pane_g

0x70cb,	// (0x0002778d) clock_nsta_pane_cp

0x70d4,	// (0x00027796) indicator_nsta_pane_cp

0x70de,	// (0x000277a0) nsta_clock_indic_pane_g1

0x3354,	// (0x00023a16) grid_indicator_pane

0x40bd,	// (0x0002477f) scroll_pane_cp29

0x1493,	// (0x00021b55) indicator_nsta_pane_cp2_ParamLimits

0x1493,	// (0x00021b55) indicator_nsta_pane_cp2

0x328b,	// (0x0002394d) main_apps_wheel_pane

0x5306,	// (0x000259c8) form_midp_field_text_pane_ParamLimits

0x5451,	// (0x00025b13) scroll_bar_cp050_ParamLimits

0x7137,	// (0x000277f9) cell_indicator_pane_ParamLimits

0x7137,	// (0x000277f9) cell_indicator_pane

0x714e,	// (0x00027810) cell_indicator_pane_g1

0xdfde,	// (0x0002e6a0) grid_wheel_folder_pane_ParamLimits

0xdfde,	// (0x0002e6a0) grid_wheel_folder_pane

0xdfec,	// (0x0002e6ae) list_wheel_apps_pane_ParamLimits

0xdfec,	// (0x0002e6ae) list_wheel_apps_pane

0xdffa,	// (0x0002e6bc) main_apps_wheel_pane_g1_ParamLimits

0xdffa,	// (0x0002e6bc) main_apps_wheel_pane_g1

0xe006,	// (0x0002e6c8) main_apps_wheel_pane_g2_ParamLimits

0xe006,	// (0x0002e6c8) main_apps_wheel_pane_g2

0x0001,

0xfa8e,	// (0x00030150) main_apps_wheel_pane_g_ParamLimits

0xfa8e,	// (0x00030150) main_apps_wheel_pane_g

0xe014,	// (0x0002e6d6) main_apps_wheel_pane_t1_ParamLimits

0xe014,	// (0x0002e6d6) main_apps_wheel_pane_t1

0xe028,	// (0x0002e6ea) list_wheel_apps_pane_g1

0xe030,	// (0x0002e6f2) list_wheel_apps_pane_g2

0xe038,	// (0x0002e6fa) list_wheel_apps_pane_g3

0xe040,	// (0x0002e702) list_wheel_apps_pane_g4

0xe04a,	// (0x0002e70c) list_wheel_apps_pane_g5

0x0004,

0xfa93,	// (0x00030155) list_wheel_apps_pane_g

0x4643,	// (0x00024d05) navi_icon_text_pane

0xd643,	// (0x0002dd05) aid_fill_nsta

0x7213,	// (0x000278d5) navi_icon_text_pane_g1

0x721f,	// (0x000278e1) navi_icon_text_pane_t1

0x44d6,	// (0x00024b98) list_set_graphic_pane_t1_ParamLimits

0x44d6,	// (0x00024b98) list_set_graphic_pane_t1

0x5bbc,	// (0x0002627e) popup_midp_note_alarm_window_t6_ParamLimits

0x5bbc,	// (0x0002627e) popup_midp_note_alarm_window_t6

0x5bce,	// (0x00026290) popup_midp_note_alarm_window_t7_ParamLimits

0x5bce,	// (0x00026290) popup_midp_note_alarm_window_t7

0x5be0,	// (0x000262a2) popup_midp_note_alarm_window_t8_ParamLimits

0x5be0,	// (0x000262a2) popup_midp_note_alarm_window_t8

0x5bf2,	// (0x000262b4) popup_midp_note_alarm_window_t9_ParamLimits

0x5bf2,	// (0x000262b4) popup_midp_note_alarm_window_t9

0x5c04,	// (0x000262c6) popup_midp_note_alarm_window_t10_ParamLimits

0x5c04,	// (0x000262c6) popup_midp_note_alarm_window_t10

0x5c16,	// (0x000262d8) popup_midp_note_alarm_window_t11_ParamLimits

0x5c16,	// (0x000262d8) popup_midp_note_alarm_window_t11

0x5c28,	// (0x000262ea) scroll_pane_cp17_ParamLimits

0x5c28,	// (0x000262ea) scroll_pane_cp17

0x1ea2,	// (0x00022564) volume_small_pane_cp_g1

0x2197,	// (0x00022859) volume_small_pane_cp_g2

0x21a0,	// (0x00022862) volume_small_pane_cp_g3

0x21a9,	// (0x0002286b) volume_small_pane_cp_g4

0x21b2,	// (0x00022874) volume_small_pane_cp_g5

0x21bb,	// (0x0002287d) volume_small_pane_cp_g6

0x21c4,	// (0x00022886) volume_small_pane_cp_g7

0x21cd,	// (0x0002288f) volume_small_pane_cp_g8

0x21d6,	// (0x00022898) volume_small_pane_cp_g9

0x21df,	// (0x000228a1) volume_small_pane_cp_g10

0x48a0,	// (0x00024f62) midp_ticker_pane_g1_ParamLimits

0x48ac,	// (0x00024f6e) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x0002fdf5) midp_ticker_pane_g_ParamLimits

0x48b8,	// (0x00024f7a) midp_ticker_pane_t1_ParamLimits

0xd667,	// (0x0002dd29) aid_fill_nsta_2

0x543d,	// (0x00025aff) list_form2_midp_pane

0x658d,	// (0x00026c4f) midp_editing_number_pane_ParamLimits

0x659c,	// (0x00026c5e) midp_ticker_pane_ParamLimits

0x7231,	// (0x000278f3) form2_midp_field_pane

0x7255,	// (0x00027917) scroll_pane_cp51

0x7275,	// (0x00027937) form2_midp_button_pane_ParamLimits

0x7275,	// (0x00027937) form2_midp_button_pane

0x7287,	// (0x00027949) form2_midp_content_pane_ParamLimits

0x7287,	// (0x00027949) form2_midp_content_pane

0x72a1,	// (0x00027963) form2_midp_field_choice_group_pane

0x72a9,	// (0x0002796b) form2_midp_field_pane_g1

0x72b1,	// (0x00027973) form2_midp_field_pane_g2

0x72b9,	// (0x0002797b) form2_midp_field_pane_g3

0x72c1,	// (0x00027983) form2_midp_field_pane_g4

0x0003,

0xfab8,	// (0x0003017a) form2_midp_field_pane_g

0x72c9,	// (0x0002798b) form2_midp_gauge_slider_pane

0x72d1,	// (0x00027993) form2_midp_gauge_wait_pane

0x72d9,	// (0x0002799b) form2_midp_image_pane_ParamLimits

0x72d9,	// (0x0002799b) form2_midp_image_pane

0x72f4,	// (0x000279b6) form2_midp_label_pane_ParamLimits

0x72f4,	// (0x000279b6) form2_midp_label_pane

0xe07d,	// (0x0002e73f) form2_midp_label_pane_cp_ParamLimits

0xe07d,	// (0x0002e73f) form2_midp_label_pane_cp

0x732e,	// (0x000279f0) form2_midp_string_pane_ParamLimits

0x732e,	// (0x000279f0) form2_midp_string_pane

0xbbd8,	// (0x0002c29a) form2_midp_text_pane_ParamLimits

0xbbd8,	// (0x0002c29a) form2_midp_text_pane

0x7340,	// (0x00027a02) form2_midp_time_pane

0x7350,	// (0x00027a12) input_focus_pane_cp51_ParamLimits

0x7350,	// (0x00027a12) input_focus_pane_cp51

0x7368,	// (0x00027a2a) form2_midp_label_pane_t1_ParamLimits

0x7368,	// (0x00027a2a) form2_midp_label_pane_t1

0xbbf1,	// (0x0002c2b3) form2_mdip_text_pane_t1_ParamLimits

0xbbf1,	// (0x0002c2b3) form2_mdip_text_pane_t1

0x09a8,	// (0x0002106a) form2_midp_time_pane_t1

0x73b1,	// (0x00027a73) form2_midp_gauge_slider_pane_t1

0xe09c,	// (0x0002e75e) form2_midp_gauge_slider_pane_t2

0xe0ae,	// (0x0002e770) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac1,	// (0x00030183) form2_midp_gauge_slider_pane_t

0x73e7,	// (0x00027aa9) form2_midp_slider_pane

0x73f3,	// (0x00027ab5) form2_midp_gauge_wait_pane_t1

0x7401,	// (0x00027ac3) form2_midp_wait_pane_ParamLimits

0x7401,	// (0x00027ac3) form2_midp_wait_pane

0xe0c0,	// (0x0002e782) list_single_2graphic_pane_cp4_ParamLimits

0xe0c0,	// (0x0002e782) list_single_2graphic_pane_cp4

0xda83,	// (0x0002e145) list_single_midp_graphic_pane_cp_ParamLimits

0xda83,	// (0x0002e145) list_single_midp_graphic_pane_cp

0x31ab,	// (0x0002386d) list_highlight_pane_cp20

0x7450,	// (0x00027b12) list_single_2graphic_pane_g1_cp4

0x7458,	// (0x00027b1a) list_single_2graphic_pane_g2_cp4

0x7460,	// (0x00027b22) list_single_2graphic_pane_t1_cp4

0x328b,	// (0x0002394d) list_highlight_pane_cp21

0x746f,	// (0x00027b31) list_single_midp_graphic_pane_g4_cp

0x747e,	// (0x00027b40) list_single_midp_graphic_pane_t1_cp

0xe0d4,	// (0x0002e796) form2_mdip_string_pane_t1_ParamLimits

0xe0d4,	// (0x0002e796) form2_mdip_string_pane_t1

0x31ab,	// (0x0002386d) bg_wml_button_pane_cp2

0xe3d7,	// (0x0002ea99) form2_midp_image_pane_g1

0xf3ad,	// (0x0002fa6f) list_double_large_graphic_pane_g5_ParamLimits

0xf3ad,	// (0x0002fa6f) list_double_large_graphic_pane_g5

0xd4c6,	// (0x0002db88) midp_form_pane_ParamLimits

0x328b,	// (0x0002394d) main_apps_wheel_pane_ParamLimits

0xc90e,	// (0x0002cfd0) popup_preview_window_ParamLimits

0xc90e,	// (0x0002cfd0) popup_preview_window

0x1d15,	// (0x000223d7) popup_touch_info_window_ParamLimits

0x1d15,	// (0x000223d7) popup_touch_info_window

0x1d33,	// (0x000223f5) popup_touch_menu_window_ParamLimits

0x1d33,	// (0x000223f5) popup_touch_menu_window

0xe3cd,	// (0x0002ea8f) bg_popup_sub_pane_cp6

0x758c,	// (0x00027c4e) list_touch_menu_pane

0x7594,	// (0x00027c56) list_single_touch_menu_pane_ParamLimits

0x7594,	// (0x00027c56) list_single_touch_menu_pane

0x75aa,	// (0x00027c6c) list_single_touch_menu_pane_t1

0x328b,	// (0x0002394d) bg_popup_sub_pane_cp7_ParamLimits

0x328b,	// (0x0002394d) bg_popup_sub_pane_cp7

0x75b8,	// (0x00027c7a) heading_sub_pane

0x75c0,	// (0x00027c82) list_touch_info_pane_ParamLimits

0x75c0,	// (0x00027c82) list_touch_info_pane

0x75cf,	// (0x00027c91) list_single_touch_info_pane_ParamLimits

0x75cf,	// (0x00027c91) list_single_touch_info_pane

0x75e1,	// (0x00027ca3) list_single_touch_info_pane_t1

0x75ef,	// (0x00027cb1) list_single_touch_info_pane_t2

0x0001,

0xfacf,	// (0x00030191) list_single_touch_info_pane_t

0x47c3,	// (0x00024e85) bg_popup_heading_pane_cp

0x75fd,	// (0x00027cbf) heading_sub_pane_t1

0x5085,	// (0x00025747) bg_popup_preview_window_pane_cp_ParamLimits

0x5085,	// (0x00025747) bg_popup_preview_window_pane_cp

0x75b8,	// (0x00027c7a) heading_preview_pane

0x75c0,	// (0x00027c82) list_preview_pane_ParamLimits

0x75c0,	// (0x00027c82) list_preview_pane

0x760b,	// (0x00027ccd) popup_preview_window_g1

0x75cf,	// (0x00027c91) list_single_preview_pane_ParamLimits

0x75cf,	// (0x00027c91) list_single_preview_pane

0x7613,	// (0x00027cd5) list_single_preview_pane_g1

0x761b,	// (0x00027cdd) list_single_preview_pane_t1

0x75e1,	// (0x00027ca3) list_single_preview_pane_t2

0x0001,

0xfad4,	// (0x00030196) list_single_preview_pane_t

0x7629,	// (0x00027ceb) bg_popup_heading_pane_cp2_ParamLimits

0x7629,	// (0x00027ceb) bg_popup_heading_pane_cp2

0x763f,	// (0x00027d01) heading_preview_pane_g1

0x7647,	// (0x00027d09) heading_preview_pane_t1_ParamLimits

0x7647,	// (0x00027d09) heading_preview_pane_t1

0x3377,	// (0x00023a39) soft_indicator_pane_t1_ParamLimits

0x3a8b,	// (0x0002414d) scroll_pane_ParamLimits

0x3fb6,	// (0x00024678) scroll_sc2_left_pane

0x3fbf,	// (0x00024681) scroll_sc2_right_pane

0x3fde,	// (0x000246a0) scroll_bg_pane_g1_ParamLimits

0x3ff3,	// (0x000246b5) scroll_bg_pane_g2_ParamLimits

0x400b,	// (0x000246cd) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x0002fd80) scroll_bg_pane_g_ParamLimits

0x3fde,	// (0x000246a0) scroll_handle_pane_g1_ParamLimits

0x402d,	// (0x000246ef) scroll_handle_pane_g2_ParamLimits

0x400b,	// (0x000246cd) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x0002fd87) scroll_handle_pane_g_ParamLimits

0x17d9,	// (0x00021e9b) popup_choice_list_window_ParamLimits

0x17d9,	// (0x00021e9b) popup_choice_list_window

0x4f5b,	// (0x0002561d) choice_list_pane

0x4fdd,	// (0x0002569f) cell_toolbar_pane_t1

0x5005,	// (0x000256c7) toolbar_button_pane_ParamLimits

0x60ee,	// (0x000267b0) ai_gene_pane_1_t2_ParamLimits

0x60ee,	// (0x000267b0) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x0002ffaa) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x0002ffaa) ai_gene_pane_1_t

0x7664,	// (0x00027d26) scroll_sc2_left_pane_g1

0x7664,	// (0x00027d26) scroll_sc2_right_pane_g1

0x4ae7,	// (0x000251a9) bg_popup_sub_pane_cp10

0x766e,	// (0x00027d30) list_choice_list_pane

0x7687,	// (0x00027d49) list_single_choice_list_pane_ParamLimits

0x7687,	// (0x00027d49) list_single_choice_list_pane

0x769a,	// (0x00027d5c) list_single_choice_list_pane_g1

0x3cbc,	// (0x0002437e) list_single_choice_list_pane_t1_ParamLimits

0x3cbc,	// (0x0002437e) list_single_choice_list_pane_t1

0x76a2,	// (0x00027d64) choice_list_pane_g1

0x76aa,	// (0x00027d6c) choice_list_pane_t1

0xe3cd,	// (0x0002ea8f) input_focus_pane_cp11

0x3e93,	// (0x00024555) title_pane_stacon_g2_ParamLimits

0x3e93,	// (0x00024555) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x0002fd66) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0002fd66) title_pane_stacon_g

0x47c3,	// (0x00024e85) cursor_press_pane

0xc5b5,	// (0x0002cc77) popup_fep_hwr_window_ParamLimits

0xc5b5,	// (0x0002cc77) popup_fep_hwr_window

0x18ff,	// (0x00021fc1) popup_fep_vkb_window_ParamLimits

0x18ff,	// (0x00021fc1) popup_fep_vkb_window

0x76b8,	// (0x00027d7a) cursor_press_pane_g1

0x0002,

0xfafd,	// (0x000301bf) fep_vkb_side_pane_g_ParamLimits

0x2221,	// (0x000228e3) fep_hwr_candidate_pane_ParamLimits

0x2221,	// (0x000228e3) fep_hwr_candidate_pane

0x224b,	// (0x0002290d) fep_hwr_side_pane_ParamLimits

0x224b,	// (0x0002290d) fep_hwr_side_pane

0x226b,	// (0x0002292d) fep_hwr_top_pane_ParamLimits

0x226b,	// (0x0002292d) fep_hwr_top_pane

0x2283,	// (0x00022945) fep_hwr_write_pane_ParamLimits

0x2283,	// (0x00022945) fep_hwr_write_pane

0xfafd,	// (0x000301bf) fep_vkb_side_pane_g

0x76c0,	// (0x00027d82) fep_hwr_top_pane_g1

0x76d2,	// (0x00027d94) fep_hwr_top_pane_g2

0x22af,	// (0x00022971) fep_hwr_top_pane_g3

0x0002,

0xfad9,	// (0x0003019b) fep_hwr_top_pane_g

0x22c4,	// (0x00022986) fep_hwr_top_text_pane

0x41ad,	// (0x0002486f) fep_hwr_top_text_pane_g1

0x7708,	// (0x00027dca) fep_hwr_top_text_pane_t1

0x23ba,	// (0x00022a7c) fep_hwr_candidate_pane_g1

0x795b,	// (0x0002801d) fep_vkb_keypad_pane_g3_ParamLimits

0x795b,	// (0x0002801d) fep_vkb_keypad_pane_g3

0x7983,	// (0x00028045) fep_vkb_keypad_pane_g4_ParamLimits

0x7983,	// (0x00028045) fep_vkb_keypad_pane_g4

0x79f2,	// (0x000280b4) fep_vkb_bottom_pane_g2_ParamLimits

0x79f2,	// (0x000280b4) fep_vkb_bottom_pane_g2

0x0001,

0xfb04,	// (0x000301c6) fep_vkb_bottom_pane_g_ParamLimits

0xfb04,	// (0x000301c6) fep_vkb_bottom_pane_g

0x7664,	// (0x00027d26) cell_vkb_side_pane_g2

0x0001,

0xfb0e,	// (0x000301d0) cell_vkb_side_pane_g

0x7a7d,	// (0x0002813f) cell_vkb_side_pane_t1

0x7a8b,	// (0x0002814d) cell_vkb_side_pane_t1_copy1

0x7664,	// (0x00027d26) bg_fep_vkb_candidate_pane_g2

0x7bb7,	// (0x00028279) cell_vkb_candidate_pane_ParamLimits

0x7716,	// (0x00027dd8) aid_size_cell_vkb_ParamLimits

0x7716,	// (0x00027dd8) aid_size_cell_vkb

0x7bb7,	// (0x00028279) cell_vkb_candidate_pane

0x23d4,	// (0x00022a96) bg_popup_fep_shadow_pane_g1

0xe17e,	// (0x0002e840) fep_vkb_bottom_pane_ParamLimits

0xe17e,	// (0x0002e840) fep_vkb_bottom_pane

0x77da,	// (0x00027e9c) fep_vkb_candidate_pane_ParamLimits

0x77da,	// (0x00027e9c) fep_vkb_candidate_pane

0xe1a3,	// (0x0002e865) fep_vkb_keypad_pane_ParamLimits

0xe1a3,	// (0x0002e865) fep_vkb_keypad_pane

0xe1df,	// (0x0002e8a1) fep_vkb_side_pane_ParamLimits

0xe1df,	// (0x0002e8a1) fep_vkb_side_pane

0xe21b,	// (0x0002e8dd) fep_vkb_top_pane_ParamLimits

0xe21b,	// (0x0002e8dd) fep_vkb_top_pane

0x78b4,	// (0x00027f76) fep_vkb_top_pane_g1_ParamLimits

0x78b4,	// (0x00027f76) fep_vkb_top_pane_g1

0x78c3,	// (0x00027f85) fep_vkb_top_pane_g2_ParamLimits

0x78c3,	// (0x00027f85) fep_vkb_top_pane_g2

0x78d2,	// (0x00027f94) fep_vkb_top_pane_g3_ParamLimits

0x78d2,	// (0x00027f94) fep_vkb_top_pane_g3

0x0003,

0xfaf4,	// (0x000301b6) fep_vkb_top_pane_g_ParamLimits

0xfaf4,	// (0x000301b6) fep_vkb_top_pane_g

0x78f0,	// (0x00027fb2) fep_vkb_top_text_pane_ParamLimits

0x78f0,	// (0x00027fb2) fep_vkb_top_text_pane

0xe257,	// (0x0002e919) fep_vkb_side_pane_g1_ParamLimits

0xe257,	// (0x0002e919) fep_vkb_side_pane_g1

0x794a,	// (0x0002800c) grid_vkb_side_pane_ParamLimits

0x794a,	// (0x0002800c) grid_vkb_side_pane

0x23dc,	// (0x00022a9e) bg_popup_fep_shadow_pane_g2

0x23e5,	// (0x00022aa7) bg_popup_fep_shadow_pane_g3

0x23ed,	// (0x00022aaf) bg_popup_fep_shadow_pane_g4

0x23f6,	// (0x00022ab8) bg_popup_fep_shadow_pane_g5

0x2400,	// (0x00022ac2) bg_popup_fep_shadow_pane_g6

0x2408,	// (0x00022aca) bg_popup_fep_shadow_pane_g7

0x3b90,	// (0x00024252) bg_popup_fep_shadow_pane_g8

0x79a1,	// (0x00028063) grid_vkb_keypad_number_pane_ParamLimits

0x79a1,	// (0x00028063) grid_vkb_keypad_number_pane

0x79b1,	// (0x00028073) grid_vkb_keypad_pane_ParamLimits

0x79b1,	// (0x00028073) grid_vkb_keypad_pane

0x79d7,	// (0x00028099) fep_vkb_bottom_pane_g1_ParamLimits

0x79d7,	// (0x00028099) fep_vkb_bottom_pane_g1

0x7a00,	// (0x000280c2) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7a00,	// (0x000280c2) grid_vkb_keypad_bottom_left_pane

0x7a15,	// (0x000280d7) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7a15,	// (0x000280d7) grid_vkb_keypad_bottom_right_pane

0x7a2a,	// (0x000280ec) fep_vkb_top_text_pane_g1

0xe29e,	// (0x0002e960) fep_vkb_top_text_pane_t1

0xe2b0,	// (0x0002e972) cell_vkb_side_pane_ParamLimits

0xe2b0,	// (0x0002e972) cell_vkb_side_pane

0x7664,	// (0x00027d26) cell_vkb_side_pane_g1

0x7a99,	// (0x0002815b) cell_vkb_keypad_pane_ParamLimits

0x7a99,	// (0x0002815b) cell_vkb_keypad_pane

0x7b0e,	// (0x000281d0) cell_vkb_keypad_pane_g1

0x0008,

0xfb21,	// (0x000301e3) bg_popup_fep_shadow_pane_g

0x7664,	// (0x00027d26) cell_hwr_side_pane_g1

0x7664,	// (0x00027d26) cell_hwr_side_pane_g2

0x7b18,	// (0x000281da) cell_vkb_keypad_pane_t1

0xe2c6,	// (0x0002e988) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe2c6,	// (0x0002e988) cell_vkb_keypad_bottom_left_pane

0xe2db,	// (0x0002e99d) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe2db,	// (0x0002e99d) cell_vkb_keypad_bottom_right_pane

0x7664,	// (0x00027d26) cell_vkb_keypad_bottom_left_pane_g1

0x7664,	// (0x00027d26) cell_vkb_keypad_bottom_right_pane_g1

0x7b7c,	// (0x0002823e) cell_vkb_keypad_number_pane_ParamLimits

0x7b7c,	// (0x0002823e) cell_vkb_keypad_number_pane

0x7b9b,	// (0x0002825d) cell_vkb_keypad_number_pane_g1

0x7ba5,	// (0x00028267) cell_vkb_keypad_number_pane_g2

0x7bae,	// (0x00028270) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb13,	// (0x000301d5) cell_vkb_keypad_number_pane_g

0x7b18,	// (0x000281da) cell_vkb_keypad_number_pane_t1

0x7bd2,	// (0x00028294) fep_vkb_candidate_pane_g1

0x0001,

0xfb0e,	// (0x000301d0) cell_hwr_side_pane_g

0x7beb,	// (0x000282ad) cell_hwr_side_pane_t1

0x241a,	// (0x00022adc) cell_hwr_side_pane_t1_copy1

0x78e2,	// (0x00027fa4) cell_hwr_candidate_pane_g1

0x2428,	// (0x00022aea) cell_hwr_candidate_pane_t1

0x7664,	// (0x00027d26) cell_vkb_candidate_pane_g2

0x7c2f,	// (0x000282f1) cell_vkb_candidate_pane_t1

0x21e8,	// (0x000228aa) bg_popup_fep_shadow_pane_ParamLimits

0x21e8,	// (0x000228aa) bg_popup_fep_shadow_pane

0xe144,	// (0x0002e806) bg_fep_hwr_top_pane_g4

0x76e4,	// (0x00027da6) bg_hwr_side_pane_g1_ParamLimits

0x76e4,	// (0x00027da6) bg_hwr_side_pane_g1

0xcc48,	// (0x0002d30a) cell_hwr_side_pane_ParamLimits

0xcc48,	// (0x0002d30a) cell_hwr_side_pane

0x233b,	// (0x000229fd) fep_hwr_write_pane_g1_ParamLimits

0x233b,	// (0x000229fd) fep_hwr_write_pane_g1

0x2348,	// (0x00022a0a) fep_hwr_write_pane_g2_ParamLimits

0x2348,	// (0x00022a0a) fep_hwr_write_pane_g2

0x2355,	// (0x00022a17) fep_hwr_write_pane_g3_ParamLimits

0x2355,	// (0x00022a17) fep_hwr_write_pane_g3

0xcc68,	// (0x0002d32a) fep_hwr_write_pane_g4_ParamLimits

0xcc68,	// (0x0002d32a) fep_hwr_write_pane_g4

0x0005,

0xfae0,	// (0x000301a2) fep_hwr_write_pane_g_ParamLimits

0xfae0,	// (0x000301a2) fep_hwr_write_pane_g

0xe144,	// (0x0002e806) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xe144,	// (0x0002e806) bg_fep_hwr_candidate_pane_g2

0x2378,	// (0x00022a3a) cell_hwr_candidate_pane_ParamLimits

0x2378,	// (0x00022a3a) cell_hwr_candidate_pane

0x23ba,	// (0x00022a7c) fep_hwr_candidate_pane_g1_ParamLimits

0x7744,	// (0x00027e06) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7744,	// (0x00027e06) bg_popup_fep_shadow_pane_cp2

0x78e2,	// (0x00027fa4) fep_vkb_top_pane_g4_ParamLimits

0x78e2,	// (0x00027fa4) fep_vkb_top_pane_g4

0x7928,	// (0x00027fea) fep_vkb_side_pane_g2_ParamLimits

0x7928,	// (0x00027fea) fep_vkb_side_pane_g2

0xb85a,	// (0x0002bf1c) list_setting_pane_t4_ParamLimits

0xb85a,	// (0x0002bf1c) list_setting_pane_t4

0xb8f4,	// (0x0002bfb6) list_setting_number_pane_t5_ParamLimits

0xb8f4,	// (0x0002bfb6) list_setting_number_pane_t5

0x41e4,	// (0x000248a6) list_double_heading_pane_cp2_ParamLimits

0x41e4,	// (0x000248a6) list_double_heading_pane_cp2

0x3b26,	// (0x000241e8) list_double_heading_pane_g1_cp2_ParamLimits

0x3b26,	// (0x000241e8) list_double_heading_pane_g1_cp2

0x3b32,	// (0x000241f4) list_double_heading_pane_g2_cp2_ParamLimits

0x3b32,	// (0x000241f4) list_double_heading_pane_g2_cp2

0x7c3d,	// (0x000282ff) list_double_heading_pane_t1_cp2_ParamLimits

0x7c3d,	// (0x000282ff) list_double_heading_pane_t1_cp2

0x7c53,	// (0x00028315) list_double_heading_pane_t2_cp2_ParamLimits

0x7c53,	// (0x00028315) list_double_heading_pane_t2_cp2

0xe3c5,	// (0x0002ea87) aid_value_unit2

0x1023,	// (0x000216e5) popup_preview_fixed_window

0x3514,	// (0x00023bd6) bg_popup_preview_window_pane_cp02

0x7c65,	// (0x00028327) list_preview_fixed_pane

0x7cab,	// (0x0002836d) list_empty_pane_fp_ParamLimits

0x7cab,	// (0x0002836d) list_empty_pane_fp

0x7cab,	// (0x0002836d) list_single_cale_day_pane_fp_ParamLimits

0x7cab,	// (0x0002836d) list_single_cale_day_pane_fp

0x7cab,	// (0x0002836d) list_single_graphic_heading_pane_fp_ParamLimits

0x7cab,	// (0x0002836d) list_single_graphic_heading_pane_fp

0x7cab,	// (0x0002836d) list_single_graphic_pane_fp_ParamLimits

0x7cab,	// (0x0002836d) list_single_graphic_pane_fp

0x7cab,	// (0x0002836d) list_single_heading_pane_fp_ParamLimits

0x7cab,	// (0x0002836d) list_single_heading_pane_fp

0x7cab,	// (0x0002836d) list_single_pane_fp_ParamLimits

0x7cab,	// (0x0002836d) list_single_pane_fp

0x7cc0,	// (0x00028382) list_single_pane_fp_g1_ParamLimits

0x7cc0,	// (0x00028382) list_single_pane_fp_g1

0x09bb,	// (0x0002107d) list_single_pane_fp_g2_ParamLimits

0x09bb,	// (0x0002107d) list_single_pane_fp_g2

0x09c7,	// (0x00021089) list_single_pane_fp_g3_ParamLimits

0x09c7,	// (0x00021089) list_single_pane_fp_g3

0x7ccc,	// (0x0002838e) list_single_pane_fp_g4_ParamLimits

0x7ccc,	// (0x0002838e) list_single_pane_fp_g4

0x0003,

0xfb42,	// (0x00030204) list_single_pane_fp_g_ParamLimits

0xfb42,	// (0x00030204) list_single_pane_fp_g

0x09db,	// (0x0002109d) list_single_pane_fp_t1_ParamLimits

0x09db,	// (0x0002109d) list_single_pane_fp_t1

0x09f2,	// (0x000210b4) list_single_graphic_pane_fp_g1_ParamLimits

0x09f2,	// (0x000210b4) list_single_graphic_pane_fp_g1

0x7cc0,	// (0x00028382) list_single_graphic_pane_fp_g2_ParamLimits

0x7cc0,	// (0x00028382) list_single_graphic_pane_fp_g2

0x09bb,	// (0x0002107d) list_single_graphic_pane_fp_g3_ParamLimits

0x09bb,	// (0x0002107d) list_single_graphic_pane_fp_g3

0x09c7,	// (0x00021089) list_single_graphic_pane_fp_g4_ParamLimits

0x09c7,	// (0x00021089) list_single_graphic_pane_fp_g4

0x7ccc,	// (0x0002838e) list_single_graphic_pane_fp_g5_ParamLimits

0x7ccc,	// (0x0002838e) list_single_graphic_pane_fp_g5

0x0004,

0xfb4b,	// (0x0003020d) list_single_graphic_pane_fp_g_ParamLimits

0xfb4b,	// (0x0003020d) list_single_graphic_pane_fp_g

0x09fe,	// (0x000210c0) list_single_graphic_pane_fp_t1_ParamLimits

0x09fe,	// (0x000210c0) list_single_graphic_pane_fp_t1

0x09f2,	// (0x000210b4) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x09f2,	// (0x000210b4) list_single_graphic_heading_pane_fp_g1

0x7cc0,	// (0x00028382) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7cc0,	// (0x00028382) list_single_graphic_heading_pane_fp_g2

0x09bb,	// (0x0002107d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x09bb,	// (0x0002107d) list_single_graphic_heading_pane_fp_g3

0x09c7,	// (0x00021089) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x09c7,	// (0x00021089) list_single_graphic_heading_pane_fp_g4

0x7ccc,	// (0x0002838e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7ccc,	// (0x0002838e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb4b,	// (0x0003020d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb4b,	// (0x0003020d) list_single_graphic_heading_pane_fp_g

0x0a14,	// (0x000210d6) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0a14,	// (0x000210d6) list_single_graphic_heading_pane_fp_t1

0x0a2a,	// (0x000210ec) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0a2a,	// (0x000210ec) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb56,	// (0x00030218) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb56,	// (0x00030218) list_single_graphic_heading_pane_fp_t

0x0a3c,	// (0x000210fe) list_single_cale_day_pane_fp_g1_ParamLimits

0x0a3c,	// (0x000210fe) list_single_cale_day_pane_fp_g1

0x7cd8,	// (0x0002839a) list_single_cale_day_pane_fp_g2_ParamLimits

0x7cd8,	// (0x0002839a) list_single_cale_day_pane_fp_g2

0x0a74,	// (0x00021136) list_single_cale_day_pane_fp_g3_ParamLimits

0x0a74,	// (0x00021136) list_single_cale_day_pane_fp_g3

0x0a9c,	// (0x0002115e) list_single_cale_day_pane_fp_g4_ParamLimits

0x0a9c,	// (0x0002115e) list_single_cale_day_pane_fp_g4

0x0ac0,	// (0x00021182) list_single_cale_day_pane_fp_g5_ParamLimits

0x0ac0,	// (0x00021182) list_single_cale_day_pane_fp_g5

0x0004,

0xfb5b,	// (0x0003021d) list_single_cale_day_pane_fp_g_ParamLimits

0xfb5b,	// (0x0003021d) list_single_cale_day_pane_fp_g

0x0ae4,	// (0x000211a6) list_single_cale_day_pane_fp_t1_ParamLimits

0x0ae4,	// (0x000211a6) list_single_cale_day_pane_fp_t1

0x0b0a,	// (0x000211cc) list_single_cale_day_pane_fp_t2_ParamLimits

0x0b0a,	// (0x000211cc) list_single_cale_day_pane_fp_t2

0x0b23,	// (0x000211e5) list_single_cale_day_pane_fp_t3_ParamLimits

0x0b23,	// (0x000211e5) list_single_cale_day_pane_fp_t3

0x0002,

0xfb66,	// (0x00030228) list_single_cale_day_pane_fp_t_ParamLimits

0xfb66,	// (0x00030228) list_single_cale_day_pane_fp_t

0x7cc0,	// (0x00028382) list_empty_pane_fp_g1_ParamLimits

0x7cc0,	// (0x00028382) list_empty_pane_fp_g1

0x0b3c,	// (0x000211fe) list_empty_pane_fp_t1

0x0b4a,	// (0x0002120c) list_empty_pane_fp_t2

0x0001,

0xfb6d,	// (0x0003022f) list_empty_pane_fp_t

0x7cc0,	// (0x00028382) list_single_heading_pane_fp_g1_ParamLimits

0x7cc0,	// (0x00028382) list_single_heading_pane_fp_g1

0x09bb,	// (0x0002107d) list_single_heading_pane_fp_g2_ParamLimits

0x09bb,	// (0x0002107d) list_single_heading_pane_fp_g2

0x09c7,	// (0x00021089) list_single_heading_pane_fp_g3_ParamLimits

0x09c7,	// (0x00021089) list_single_heading_pane_fp_g3

0x0002,

0xfb72,	// (0x00030234) list_single_heading_pane_fp_g_ParamLimits

0xfb72,	// (0x00030234) list_single_heading_pane_fp_g

0x0b58,	// (0x0002121a) list_single_heading_pane_fp_t1_ParamLimits

0x0b58,	// (0x0002121a) list_single_heading_pane_fp_t1

0x0b6a,	// (0x0002122c) list_single_heading_pane_fp_t2_ParamLimits

0x0b6a,	// (0x0002122c) list_single_heading_pane_fp_t2

0x0001,

0xfb79,	// (0x0003023b) list_single_heading_pane_fp_t_ParamLimits

0xfb79,	// (0x0003023b) list_single_heading_pane_fp_t

0x3d2a,	// (0x000243ec) aid_size_cell_fast

0x3484,	// (0x00023b46) soft_indicator_pane_cp1_t1

0x3d67,	// (0x00024429) cell_app_pane_cp2_ParamLimits

0x3d67,	// (0x00024429) cell_app_pane_cp2

0x220a,	// (0x000228cc) fep_hwr_candidate_drop_down_list_pane

0xe152,	// (0x0002e814) fep_hwr_candidate_pane_g3_ParamLimits

0xe152,	// (0x0002e814) fep_hwr_candidate_pane_g3

0xe15f,	// (0x0002e821) fep_hwr_candidate_pane_g4_ParamLimits

0xe15f,	// (0x0002e821) fep_hwr_candidate_pane_g4

0x0002,

0xfaed,	// (0x000301af) fep_hwr_candidate_pane_g_ParamLimits

0xfaed,	// (0x000301af) fep_hwr_candidate_pane_g

0x77c9,	// (0x00027e8b) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x77c9,	// (0x00027e8b) fep_vkb_candidate_drop_down_list_pane

0x7bda,	// (0x0002829c) fep_vkb_candidate_pane_g3

0x7be2,	// (0x000282a4) fep_vkb_candidate_pane_g4

0x0002,

0xfb1a,	// (0x000301dc) fep_vkb_candidate_pane_g

0x78e2,	// (0x00027fa4) cell_hwr_candidate_pane_g1_ParamLimits

0x7d02,	// (0x000283c4) cell_hwr_candidate_pane_g3_ParamLimits

0x7d02,	// (0x000283c4) cell_hwr_candidate_pane_g3

0x7d23,	// (0x000283e5) cell_hwr_candidate_pane_g4_ParamLimits

0x7d23,	// (0x000283e5) cell_hwr_candidate_pane_g4

0x0002,

0xfb34,	// (0x000301f6) cell_hwr_candidate_pane_g_ParamLimits

0xfb34,	// (0x000301f6) cell_hwr_candidate_pane_g

0x7bf9,	// (0x000282bb) cell_vkb_candidate_pane_g3_ParamLimits

0x7bf9,	// (0x000282bb) cell_vkb_candidate_pane_g3

0x7c14,	// (0x000282d6) cell_vkb_candidate_pane_g4_ParamLimits

0x7c14,	// (0x000282d6) cell_vkb_candidate_pane_g4

0x7ce4,	// (0x000283a6) cell_app_pane_cp2_g1_ParamLimits

0x7ce4,	// (0x000283a6) cell_app_pane_cp2_g1

0x7d44,	// (0x00028406) cell_app_pane_cp2_g2_ParamLimits

0x7d44,	// (0x00028406) cell_app_pane_cp2_g2

0x0001,

0xfb7e,	// (0x00030240) cell_app_pane_cp2_g_ParamLimits

0xfb7e,	// (0x00030240) cell_app_pane_cp2_g

0x7d50,	// (0x00028412) cell_app_pane_cp2_t1_ParamLimits

0x7d50,	// (0x00028412) cell_app_pane_cp2_t1

0x3b18,	// (0x000241da) grid_highlight_pane_cp1_ParamLimits

0x3b18,	// (0x000241da) grid_highlight_pane_cp1

0x2446,	// (0x00022b08) cell_hwr_candidate_pane_cp1_ParamLimits

0x2446,	// (0x00022b08) cell_hwr_candidate_pane_cp1

0x78e2,	// (0x00027fa4) fep_hwr_candidate_drop_down_list_pane_g1

0x7d62,	// (0x00028424) fep_hwr_candidate_drop_down_list_pane_g2

0x7d6f,	// (0x00028431) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb83,	// (0x00030245) fep_hwr_candidate_drop_down_list_pane_g

0x2465,	// (0x00022b27) fep_hwr_candidate_drop_down_list_scroll_pane

0x246e,	// (0x00022b30) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x246e,	// (0x00022b30) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x247b,	// (0x00022b3d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x247b,	// (0x00022b3d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2488,	// (0x00022b4a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2488,	// (0x00022b4a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7bf9,	// (0x000282bb) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7bf9,	// (0x000282bb) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7c14,	// (0x000282d6) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7c14,	// (0x000282d6) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2495,	// (0x00022b57) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2495,	// (0x00022b57) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x24b0,	// (0x00022b72) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x24b0,	// (0x00022b72) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x24cb,	// (0x00022b8d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x24cb,	// (0x00022b8d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb8a,	// (0x0003024c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb8a,	// (0x0003024c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7d7c,	// (0x0002843e) cell_vkb_candidate_pane_cp1_ParamLimits

0x7d7c,	// (0x0002843e) cell_vkb_candidate_pane_cp1

0x78e2,	// (0x00027fa4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x78e2,	// (0x00027fa4) fep_vkb_candidate_drop_down_list_pane_g1

0x7d62,	// (0x00028424) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7d62,	// (0x00028424) fep_vkb_candidate_drop_down_list_pane_g2

0x7d6f,	// (0x00028431) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7d6f,	// (0x00028431) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb83,	// (0x00030245) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb83,	// (0x00030245) fep_vkb_candidate_drop_down_list_pane_g

0x7d9c,	// (0x0002845e) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7d9c,	// (0x0002845e) fep_vkb_candidate_drop_down_list_scroll_pane

0x7da9,	// (0x0002846b) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7da9,	// (0x0002846b) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7db6,	// (0x00028478) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7db6,	// (0x00028478) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7dc2,	// (0x00028484) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7dc2,	// (0x00028484) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7d02,	// (0x000283c4) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7d02,	// (0x000283c4) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7d23,	// (0x000283e5) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7d23,	// (0x000283e5) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7dce,	// (0x00028490) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7dce,	// (0x00028490) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7def,	// (0x000284b1) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7def,	// (0x000284b1) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7e10,	// (0x000284d2) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7e10,	// (0x000284d2) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9b,	// (0x0003025d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9b,	// (0x0003025d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xc001,	// (0x0002c6c3) title_pane_g1_ParamLimits

0xc014,	// (0x0002c6d6) title_pane_g2_ParamLimits

0xf529,	// (0x0002fbeb) title_pane_g_ParamLimits

0x419d,	// (0x0002485f) aid_call2_pane

0x41a5,	// (0x00024867) aid_call_pane

0x41ad,	// (0x0002486f) popup_clock_analogue_window_g1

0x41ad,	// (0x0002486f) popup_clock_analogue_window_g2

0x1394,	// (0x00021a56) popup_clock_analogue_window_g3

0x139d,	// (0x00021a5f) popup_clock_analogue_window_g4

0xe3d7,	// (0x0002ea99) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x0002fd95) popup_clock_analogue_window_g

0x13a5,	// (0x00021a67) popup_clock_analogue_window_t1

0x13b3,	// (0x00021a75) clock_digital_number_pane_ParamLimits

0x13b3,	// (0x00021a75) clock_digital_number_pane

0x13bf,	// (0x00021a81) clock_digital_number_pane_cp02_ParamLimits

0x13bf,	// (0x00021a81) clock_digital_number_pane_cp02

0x13cb,	// (0x00021a8d) clock_digital_number_pane_cp03_ParamLimits

0x13cb,	// (0x00021a8d) clock_digital_number_pane_cp03

0x13d7,	// (0x00021a99) clock_digital_number_pane_cp04_ParamLimits

0x13d7,	// (0x00021a99) clock_digital_number_pane_cp04

0x13e3,	// (0x00021aa5) clock_digital_separator_pane_ParamLimits

0x13e3,	// (0x00021aa5) clock_digital_separator_pane

0x13ef,	// (0x00021ab1) popup_clock_digital_window_t1_ParamLimits

0x13ef,	// (0x00021ab1) popup_clock_digital_window_t1

0xe3d7,	// (0x0002ea99) clock_digital_number_pane_g1

0xe3d7,	// (0x0002ea99) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x0002fda0) clock_digital_number_pane_g

0xe3d7,	// (0x0002ea99) clock_digital_separator_pane_g1

0xe3d7,	// (0x0002ea99) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x0002fda0) clock_digital_separator_pane_g

0xd643,	// (0x0002dd05) aid_fill_nsta_ParamLimits

0xd779,	// (0x0002de3b) indicator_nsta_pane_ParamLimits

0x4de8,	// (0x000254aa) popup_clock_analogue_window

0x4de8,	// (0x000254aa) popup_clock_digital_window

0xdfaa,	// (0x0002e66c) grid_indicator_nsta_pane_ParamLimits

0x7068,	// (0x0002772a) clock_nsta_pane_t2

0x0001,

0xfa6d,	// (0x0003012f) clock_nsta_pane_t

0x1358,	// (0x00021a1a) aid_size_max_handle

0x1362,	// (0x00021a24) aid_size_min_handle

0x47c3,	// (0x00024e85) editor_scroll_pane

0x7e2b,	// (0x000284ed) ex_editor_pane

0x3c98,	// (0x0002435a) scroll_pane_cp13

0x3ab7,	// (0x00024179) scroll_pane_cp14

0x41dc,	// (0x0002489e) scroll_pane_cp36

0xd40b,	// (0x0002dacd) list_single_graphic_hl_pane_cp2_ParamLimits

0xd40b,	// (0x0002dacd) list_single_graphic_hl_pane_cp2

0xdddb,	// (0x0002e49d) list_single_graphic_hl_pane_ParamLimits

0xdddb,	// (0x0002e49d) list_single_graphic_hl_pane

0x0b80,	// (0x00021242) aid_size_min_hl_cp1

0x7e33,	// (0x000284f5) list_highlight_pane_cp34_ParamLimits

0x7e33,	// (0x000284f5) list_highlight_pane_cp34

0x7e44,	// (0x00028506) list_single_graphic_hl_pane_g1_ParamLimits

0x7e44,	// (0x00028506) list_single_graphic_hl_pane_g1

0xf3ce,	// (0x0002fa90) list_single_graphic_hl_pane_g2_ParamLimits

0xf3ce,	// (0x0002fa90) list_single_graphic_hl_pane_g2

0xf3ce,	// (0x0002fa90) list_single_graphic_hl_pane_g3_ParamLimits

0xf3ce,	// (0x0002fa90) list_single_graphic_hl_pane_g3

0xf3da,	// (0x0002fa9c) list_single_graphic_hl_pane_g4_ParamLimits

0xf3da,	// (0x0002fa9c) list_single_graphic_hl_pane_g4

0xbc0e,	// (0x0002c2d0) list_single_graphic_hl_pane_g5_ParamLimits

0xbc0e,	// (0x0002c2d0) list_single_graphic_hl_pane_g5

0x0004,

0xfbac,	// (0x0003026e) list_single_graphic_hl_pane_g_ParamLimits

0xfbac,	// (0x0003026e) list_single_graphic_hl_pane_g

0xbc22,	// (0x0002c2e4) list_single_graphic_hl_pane_t1_ParamLimits

0xbc22,	// (0x0002c2e4) list_single_graphic_hl_pane_t1

0x7e51,	// (0x00028513) aid_size_min_hl_cp2

0x7e5a,	// (0x0002851c) list_highlight_pane_cp34_cp2_ParamLimits

0x7e5a,	// (0x0002851c) list_highlight_pane_cp34_cp2

0x7e44,	// (0x00028506) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7e44,	// (0x00028506) list_single_graphic_hl_pane_g1_cp2

0x7e67,	// (0x00028529) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7e67,	// (0x00028529) list_single_graphic_hl_pane_g2_cp2

0x7e73,	// (0x00028535) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7e73,	// (0x00028535) list_single_graphic_hl_pane_g3_cp2

0x7e81,	// (0x00028543) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7e81,	// (0x00028543) list_single_graphic_hl_pane_g4_cp2

0x7e8d,	// (0x0002854f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7e8d,	// (0x0002854f) list_single_graphic_hl_pane_g5_cp2

0xc3e7,	// (0x0002caa9) control_pane_g4_ParamLimits

0xc3e7,	// (0x0002caa9) control_pane_g4

0x4ae7,	// (0x000251a9) bg_popup_sub_pane_cp10_ParamLimits

0x766e,	// (0x00027d30) list_choice_list_pane_ParamLimits

0x767d,	// (0x00027d3f) scroll_pane_cp23

0x3514,	// (0x00023bd6) bg_popup_preview_window_pane_cp02_ParamLimits

0x7c65,	// (0x00028327) list_preview_fixed_pane_ParamLimits

0x7c7b,	// (0x0002833d) list_preview_fixed_pane_cp_ParamLimits

0x7c7b,	// (0x0002833d) list_preview_fixed_pane_cp

0x7c87,	// (0x00028349) popup_preview_fixed_window_g1_ParamLimits

0x7c87,	// (0x00028349) popup_preview_fixed_window_g1

0x7c93,	// (0x00028355) popup_preview_fixed_window_g2_ParamLimits

0x7c93,	// (0x00028355) popup_preview_fixed_window_g2

0x0002,

0xfb3b,	// (0x000301fd) popup_preview_fixed_window_g_ParamLimits

0xfb3b,	// (0x000301fd) popup_preview_fixed_window_g

0x12cc,	// (0x0002198e) aid_navi_side_left_pane_ParamLimits

0x12e1,	// (0x000219a3) aid_navi_side_right_pane_ParamLimits

0x12f9,	// (0x000219bb) navi_icon_pane_stacon_ParamLimits

0x130d,	// (0x000219cf) navi_navi_pane_stacon_ParamLimits

0x12f9,	// (0x000219bb) navi_text_pane_stacon_ParamLimits

0xe3cd,	// (0x0002ea8f) main_text_info_pane

0x7eb7,	// (0x00028579) listscroll_text_info_pane

0x7ebf,	// (0x00028581) list_text_info_pane_ParamLimits

0x7ebf,	// (0x00028581) list_text_info_pane

0x7ece,	// (0x00028590) scroll_pane_cp24_ParamLimits

0x7ece,	// (0x00028590) scroll_pane_cp24

0xe2f6,	// (0x0002e9b8) list_text_info_pane_t1_ParamLimits

0xe2f6,	// (0x0002e9b8) list_text_info_pane_t1

0xc528,	// (0x0002cbea) popup_fast_swap2_window_ParamLimits

0xc528,	// (0x0002cbea) popup_fast_swap2_window

0x7f1d,	// (0x000285df) aid_size_cell_fast2

0xe3cd,	// (0x0002ea8f) bg_popup_window_pane_cp17

0x5471,	// (0x00025b33) heading_pane_cp2

0x5479,	// (0x00025b3b) listscroll_fast2_pane

0x7f27,	// (0x000285e9) grid_fast2_pane

0x7f31,	// (0x000285f3) listscroll_fast2_pane_g1

0x7f39,	// (0x000285fb) listscroll_fast2_pane_g2

0x0001,

0xfbb7,	// (0x00030279) listscroll_fast2_pane_g

0x3c98,	// (0x0002435a) scroll_pane_cp26

0x7f43,	// (0x00028605) cell_fast2_pane_ParamLimits

0x7f43,	// (0x00028605) cell_fast2_pane

0x7f58,	// (0x0002861a) cell_fast2_pane_g1

0x7f61,	// (0x00028623) cell_fast2_pane_g2

0x7f6a,	// (0x0002862c) cell_fast2_pane_g3

0x0002,

0xfbbc,	// (0x0003027e) cell_fast2_pane_g

0x3874,	// (0x00023f36) grid_highlight_pane_cp9

0x3889,	// (0x00023f4b) main_eswt_pane_ParamLimits

0x3889,	// (0x00023f4b) main_eswt_pane

0x7ee3,	// (0x000285a5) list_single_text_info_pane

0x7f72,	// (0x00028634) eswt_ctrl_button_pane

0x7f72,	// (0x00028634) eswt_ctrl_canvas_pane

0x7f7a,	// (0x0002863c) eswt_ctrl_combo_pane

0x7f72,	// (0x00028634) eswt_ctrl_default_pane

0x7f72,	// (0x00028634) eswt_ctrl_label_pane

0x7f82,	// (0x00028644) eswt_ctrl_wait_pane

0x7f8a,	// (0x0002864c) eswt_shell_pane

0xe3cd,	// (0x0002ea8f) listscroll_eswt_app_pane

0x7faa,	// (0x0002866c) popup_eswt_tasktip_window_ParamLimits

0x7faa,	// (0x0002866c) popup_eswt_tasktip_window

0x5085,	// (0x00025747) bg_popup_window_pane_cp18

0x7fbb,	// (0x0002867d) eswt_control_pane_g1_ParamLimits

0x7fbb,	// (0x0002867d) eswt_control_pane_g1

0x7fc8,	// (0x0002868a) eswt_control_pane_g2_ParamLimits

0x7fc8,	// (0x0002868a) eswt_control_pane_g2

0x7fd5,	// (0x00028697) eswt_control_pane_g3_ParamLimits

0x7fd5,	// (0x00028697) eswt_control_pane_g3

0x7fe2,	// (0x000286a4) eswt_control_pane_g4_ParamLimits

0x7fe2,	// (0x000286a4) eswt_control_pane_g4

0x0003,

0xfbc3,	// (0x00030285) eswt_control_pane_g_ParamLimits

0xfbc3,	// (0x00030285) eswt_control_pane_g

0x3b18,	// (0x000241da) bg_button_pane_ParamLimits

0x3b18,	// (0x000241da) bg_button_pane

0x3889,	// (0x00023f4b) common_borders_pane_copy2_ParamLimits

0x3889,	// (0x00023f4b) common_borders_pane_copy2

0x7fef,	// (0x000286b1) control_button_pane_g1_ParamLimits

0x7fef,	// (0x000286b1) control_button_pane_g1

0x7ffb,	// (0x000286bd) control_button_pane_g2_ParamLimits

0x7ffb,	// (0x000286bd) control_button_pane_g2

0x8007,	// (0x000286c9) control_button_pane_g3_ParamLimits

0x8007,	// (0x000286c9) control_button_pane_g3

0x0002,

0xfbcc,	// (0x0003028e) control_button_pane_g_ParamLimits

0xfbcc,	// (0x0003028e) control_button_pane_g

0x801b,	// (0x000286dd) control_button_pane_t1

0x8029,	// (0x000286eb) control_button_pane_t2

0x0001,

0xfbd3,	// (0x00030295) control_button_pane_t

0x5011,	// (0x000256d3) bg_button_pane_g1

0x5019,	// (0x000256db) bg_button_pane_g2

0x5021,	// (0x000256e3) bg_button_pane_g3

0x5029,	// (0x000256eb) bg_button_pane_g4

0x5031,	// (0x000256f3) bg_button_pane_g5

0x5039,	// (0x000256fb) bg_button_pane_g6

0x5041,	// (0x00025703) bg_button_pane_g7

0x5049,	// (0x0002570b) bg_button_pane_g8

0x5051,	// (0x00025713) bg_button_pane_g9

0x0008,

0xf83c,	// (0x0002fefe) bg_button_pane_g

0x7629,	// (0x00027ceb) common_borders_pane_ParamLimits

0x7629,	// (0x00027ceb) common_borders_pane

0x7fbb,	// (0x0002867d) eswt_control_pane_g1_copy1_ParamLimits

0x7fbb,	// (0x0002867d) eswt_control_pane_g1_copy1

0x7fc8,	// (0x0002868a) eswt_control_pane_g2_copy1_ParamLimits

0x7fc8,	// (0x0002868a) eswt_control_pane_g2_copy1

0x7fd5,	// (0x00028697) eswt_control_pane_g3_copy1_ParamLimits

0x7fd5,	// (0x00028697) eswt_control_pane_g3_copy1

0x7fe2,	// (0x000286a4) eswt_control_pane_g4_copy1_ParamLimits

0x7fe2,	// (0x000286a4) eswt_control_pane_g4_copy1

0x7664,	// (0x00027d26) bg_eswt_ctrl_canvas_pane_g1

0x7629,	// (0x00027ceb) common_borders_pane_cp2_ParamLimits

0x7629,	// (0x00027ceb) common_borders_pane_cp2

0x7629,	// (0x00027ceb) common_borders_pane_cp3_ParamLimits

0x7629,	// (0x00027ceb) common_borders_pane_cp3

0x8037,	// (0x000286f9) separator_horizontal_pane

0x803f,	// (0x00028701) separator_vertical_pane

0x7fbb,	// (0x0002867d) eswt_control_pane_g1_copy2_ParamLimits

0x7fbb,	// (0x0002867d) eswt_control_pane_g1_copy2

0x7fc8,	// (0x0002868a) eswt_control_pane_g2_copy2_ParamLimits

0x7fc8,	// (0x0002868a) eswt_control_pane_g2_copy2

0x7fd5,	// (0x00028697) eswt_control_pane_g3_copy2_ParamLimits

0x7fd5,	// (0x00028697) eswt_control_pane_g3_copy2

0x7fe2,	// (0x000286a4) eswt_control_pane_g4_copy2_ParamLimits

0x7fe2,	// (0x000286a4) eswt_control_pane_g4_copy2

0xe3cd,	// (0x0002ea8f) common_borders_pane_cp4

0x8048,	// (0x0002870a) separator_horizontal_pane_g1

0x8051,	// (0x00028713) separator_horizontal_pane_g2

0x805a,	// (0x0002871c) separator_horizontal_pane_g3

0x0002,

0xfbd8,	// (0x0003029a) separator_horizontal_pane_g

0x7fbb,	// (0x0002867d) eswt_control_pane_g1_copy3_ParamLimits

0x7fbb,	// (0x0002867d) eswt_control_pane_g1_copy3

0x7fc8,	// (0x0002868a) eswt_control_pane_g2_copy3_ParamLimits

0x7fc8,	// (0x0002868a) eswt_control_pane_g2_copy3

0x7fd5,	// (0x00028697) eswt_control_pane_g3_copy3_ParamLimits

0x7fd5,	// (0x00028697) eswt_control_pane_g3_copy3

0x7fe2,	// (0x000286a4) eswt_control_pane_g4_copy3_ParamLimits

0x7fe2,	// (0x000286a4) eswt_control_pane_g4_copy3

0xe3cd,	// (0x0002ea8f) common_borders_pane_cp5

0x8063,	// (0x00028725) separator_vertical_pane_g1

0x806c,	// (0x0002872e) separator_vertical_pane_g2

0x8075,	// (0x00028737) separator_vertical_pane_g3

0x0002,

0xfbdf,	// (0x000302a1) separator_vertical_pane_g

0x7fbb,	// (0x0002867d) eswt_control_pane_g1_copy4_ParamLimits

0x7fbb,	// (0x0002867d) eswt_control_pane_g1_copy4

0x7fc8,	// (0x0002868a) eswt_control_pane_g2_copy4_ParamLimits

0x7fc8,	// (0x0002868a) eswt_control_pane_g2_copy4

0x7fd5,	// (0x00028697) eswt_control_pane_g3_copy4_ParamLimits

0x7fd5,	// (0x00028697) eswt_control_pane_g3_copy4

0x7fe2,	// (0x000286a4) eswt_control_pane_g4_copy4_ParamLimits

0x7fe2,	// (0x000286a4) eswt_control_pane_g4_copy4

0x807e,	// (0x00028740) eswt_ctrl_combo_button_pane

0x8086,	// (0x00028748) eswt_ctrl_input_pane

0x808e,	// (0x00028750) popup_choice_list_window_cp70

0x8096,	// (0x00028758) eswt_ctrl_input_pane_t1

0xe3cd,	// (0x0002ea8f) input_focus_pane_cp70

0x7629,	// (0x00027ceb) bg_button_pane_cp70_ParamLimits

0x7629,	// (0x00027ceb) bg_button_pane_cp70

0x80a4,	// (0x00028766) eswt_ctrl_combo_button_pane_g1

0x80ac,	// (0x0002876e) wait_bar_pane_cp70

0x5085,	// (0x00025747) bg_popup_window_pane_cp70_ParamLimits

0x5085,	// (0x00025747) bg_popup_window_pane_cp70

0x80b4,	// (0x00028776) popup_eswt_tasktip_window_t1

0x80ca,	// (0x0002878c) wait_bar_pane_cp71_ParamLimits

0x80ca,	// (0x0002878c) wait_bar_pane_cp71

0x80d6,	// (0x00028798) grid_eswt_app_pane

0x3fbf,	// (0x00024681) scroll_pane_cp70

0xe311,	// (0x0002e9d3) cell_eswt_app_pane_ParamLimits

0xe311,	// (0x0002e9d3) cell_eswt_app_pane

0xe33b,	// (0x0002e9fd) cell_eswt_app_pane_g1_ParamLimits

0xe33b,	// (0x0002e9fd) cell_eswt_app_pane_g1

0xe36a,	// (0x0002ea2c) cell_eswt_app_pane_g2_ParamLimits

0xe36a,	// (0x0002ea2c) cell_eswt_app_pane_g2

0x0001,

0xfbe6,	// (0x000302a8) cell_eswt_app_pane_g_ParamLimits

0xfbe6,	// (0x000302a8) cell_eswt_app_pane_g

0xe393,	// (0x0002ea55) cell_eswt_app_pane_t1_ParamLimits

0xe393,	// (0x0002ea55) cell_eswt_app_pane_t1

0x8199,	// (0x0002885b) grid_highlight_pane_cp70_ParamLimits

0x8199,	// (0x0002885b) grid_highlight_pane_cp70

0x4698,	// (0x00024d5a) set_content_pane_g1

0xd600,	// (0x0002dcc2) status_small_volume_pane

0x24e6,	// (0x00022ba8) status_small_volume_pane_g1

0x24ee,	// (0x00022bb0) volume_small2_pane

0x24f7,	// (0x00022bb9) volume_small2_pane_g1

0x2500,	// (0x00022bc2) volume_small2_pane_g2

0x2509,	// (0x00022bcb) volume_small2_pane_g3

0x2512,	// (0x00022bd4) volume_small2_pane_g4

0x251b,	// (0x00022bdd) volume_small2_pane_g5

0x2524,	// (0x00022be6) volume_small2_pane_g6

0x252d,	// (0x00022bef) volume_small2_pane_g7

0x2536,	// (0x00022bf8) volume_small2_pane_g8

0x253f,	// (0x00022c01) volume_small2_pane_g9

0x2548,	// (0x00022c0a) volume_small2_pane_g10

0x0009,

0xfbeb,	// (0x000302ad) volume_small2_pane_g

0x7a2a,	// (0x000280ec) fep_vkb_top_text_pane_g1_ParamLimits

0xe29e,	// (0x0002e960) fep_vkb_top_text_pane_t1_ParamLimits

0x7c9f,	// (0x00028361) popup_preview_fixed_window_g3_ParamLimits

0x7c9f,	// (0x00028361) popup_preview_fixed_window_g3

0xcb51,	// (0x0002d213) popup_toolbar_trans_pane

0xdc75,	// (0x0002e337) aid_height_set_list_ParamLimits

0x6406,	// (0x00026ac8) aid_size_parent_ParamLimits

0x4ae7,	// (0x000251a9) list_highlight_pane_cp2_ParamLimits

0x4698,	// (0x00024d5a) set_content_pane_g1_ParamLimits

0xdded,	// (0x0002e4af) list_single_image_pane_ParamLimits

0xdded,	// (0x0002e4af) list_single_image_pane

0xe3e1,	// (0x0002eaa3) aid_size_cell_image_ParamLimits

0xe3e1,	// (0x0002eaa3) aid_size_cell_image

0xe3ee,	// (0x0002eab0) grid_single_image_pane_ParamLimits

0xe3ee,	// (0x0002eab0) grid_single_image_pane

0x5cca,	// (0x0002638c) list_single_image_pane_g1_ParamLimits

0x5cca,	// (0x0002638c) list_single_image_pane_g1

0x81be,	// (0x00028880) list_single_image_pane_g2_ParamLimits

0x81be,	// (0x00028880) list_single_image_pane_g2

0x0001,

0xfc00,	// (0x000302c2) list_single_image_pane_g_ParamLimits

0xfc00,	// (0x000302c2) list_single_image_pane_g

0x81d2,	// (0x00028894) list_single_image_pane_t1_ParamLimits

0x81d2,	// (0x00028894) list_single_image_pane_t1

0xe3fa,	// (0x0002eabc) cell_image_list_pane_ParamLimits

0xe3fa,	// (0x0002eabc) cell_image_list_pane

0xe40e,	// (0x0002ead0) cell_image_list_pane_g1

0xe417,	// (0x0002ead9) cell_image_list_pane_g2

0x0001,

0xfc05,	// (0x000302c7) cell_image_list_pane_g

0x820e,	// (0x000288d0) aid_size_cell_tb_trans_pane

0x3b18,	// (0x000241da) bg_tb_trans_pane

0x8220,	// (0x000288e2) grid_tb_trans_pane

0x5011,	// (0x000256d3) bg_tb_trans_pane_g1

0x5019,	// (0x000256db) bg_tb_trans_pane_g2

0x5021,	// (0x000256e3) bg_tb_trans_pane_g3

0x5029,	// (0x000256eb) bg_tb_trans_pane_g4

0x5031,	// (0x000256f3) bg_tb_trans_pane_g5

0x5049,	// (0x0002570b) bg_tb_trans_pane_g6

0x5051,	// (0x00025713) bg_tb_trans_pane_g7

0x5039,	// (0x000256fb) bg_tb_trans_pane_g8

0x5041,	// (0x00025703) bg_tb_trans_pane_g9

0x0008,

0xfc0a,	// (0x000302cc) bg_tb_trans_pane_g

0x8234,	// (0x000288f6) cell_toolbar_trans_pane_ParamLimits

0x8234,	// (0x000288f6) cell_toolbar_trans_pane

0x7664,	// (0x00027d26) cell_toolbar_trans_pane_g1

0xe061,	// (0x0002e723) list_form2_midp_pane_t1

0xe06f,	// (0x0002e731) list_form2_midp_pane_t2

0x0001,

0xfab3,	// (0x00030175) list_form2_midp_pane_t

0x7255,	// (0x00027917) scroll_pane_cp51_ParamLimits

0x7411,	// (0x00027ad3) form2_midp_wait_pane_g1

0x741a,	// (0x00027adc) form2_midp_wait_pane_g2

0x7423,	// (0x00027ae5) form2_midp_wait_pane_g3

0x0002,

0xfac8,	// (0x0003018a) form2_midp_wait_pane_g

0x328b,	// (0x0002394d) list_highlight_pane_cp21_ParamLimits

0x746f,	// (0x00027b31) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x747e,	// (0x00027b40) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x0577,	// (0x00020c39) list_single_2graphic_im_pane_ParamLimits

0x0577,	// (0x00020c39) list_single_2graphic_im_pane

0x825a,	// (0x0002891c) list_single_2graphic_im_pane_g1_ParamLimits

0x825a,	// (0x0002891c) list_single_2graphic_im_pane_g1

0x826b,	// (0x0002892d) list_single_2graphic_im_pane_g2_ParamLimits

0x826b,	// (0x0002892d) list_single_2graphic_im_pane_g2

0x8277,	// (0x00028939) list_single_2graphic_im_pane_g3_ParamLimits

0x8277,	// (0x00028939) list_single_2graphic_im_pane_g3

0x0003,

0xfc1d,	// (0x000302df) list_single_2graphic_im_pane_g_ParamLimits

0xfc1d,	// (0x000302df) list_single_2graphic_im_pane_g

0x8297,	// (0x00028959) list_single_2graphic_im_pane_t1_ParamLimits

0x8297,	// (0x00028959) list_single_2graphic_im_pane_t1

0x7cab,	// (0x0002836d) list_single_graphic_2heading_pane_fp_ParamLimits

0x7cab,	// (0x0002836d) list_single_graphic_2heading_pane_fp

0x09f2,	// (0x000210b4) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x09f2,	// (0x000210b4) list_single_graphic_2heading_pane_fp_g1

0x7cc0,	// (0x00028382) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7cc0,	// (0x00028382) list_single_graphic_2heading_pane_fp_g2

0x09bb,	// (0x0002107d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x09bb,	// (0x0002107d) list_single_graphic_2heading_pane_fp_g3

0x09c7,	// (0x00021089) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x09c7,	// (0x00021089) list_single_graphic_2heading_pane_fp_g4

0x7ccc,	// (0x0002838e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7ccc,	// (0x0002838e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb4b,	// (0x0003020d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb4b,	// (0x0003020d) list_single_graphic_2heading_pane_fp_g

0x0bcb,	// (0x0002128d) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0bcb,	// (0x0002128d) list_single_graphic_2heading_pane_fp_t1

0x0a2a,	// (0x000210ec) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0a2a,	// (0x000210ec) list_single_graphic_2heading_pane_fp_t2

0x0be1,	// (0x000212a3) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0be1,	// (0x000212a3) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc26,	// (0x000302e8) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc26,	// (0x000302e8) list_single_graphic_2heading_pane_fp_t

0x76f0,	// (0x00027db2) fep_hwr_write_pane_g5_ParamLimits

0x76f0,	// (0x00027db2) fep_hwr_write_pane_g5

0x76fc,	// (0x00027dbe) fep_hwr_write_pane_g6_ParamLimits

0x76fc,	// (0x00027dbe) fep_hwr_write_pane_g6

0x7f8a,	// (0x0002864c) eswt_shell_pane_ParamLimits

0x5085,	// (0x00025747) bg_popup_window_pane_cp18_ParamLimits

0x634e,	// (0x00026a10) heading_pane_cp70

0x80b4,	// (0x00028776) popup_eswt_tasktip_window_t1_ParamLimits

0xd69e,	// (0x0002dd60) aid_touch_tab_arrow_left

0xd6b4,	// (0x0002dd76) aid_touch_tab_arrow_right

0xc02c,	// (0x0002c6ee) title_pane_g3_ParamLimits

0xc02c,	// (0x0002c6ee) title_pane_g3

0x3ad7,	// (0x00024199) set_value_pane_g1

0xcb51,	// (0x0002d213) popup_toolbar_trans_pane_ParamLimits

0x820e,	// (0x000288d0) aid_size_cell_tb_trans_pane_ParamLimits

0x3b18,	// (0x000241da) bg_tb_trans_pane_ParamLimits

0x8220,	// (0x000288e2) grid_tb_trans_pane_ParamLimits

0x3514,	// (0x00023bd6) cont_note_pane_ParamLimits

0x3514,	// (0x00023bd6) cont_note_pane

0x3889,	// (0x00023f4b) cont_snote2_single_text_pane_ParamLimits

0x3889,	// (0x00023f4b) cont_snote2_single_text_pane

0x3889,	// (0x00023f4b) cont_snote2_single_graphic_pane_ParamLimits

0x3889,	// (0x00023f4b) cont_snote2_single_graphic_pane

0x56a0,	// (0x00025d62) cont_note_wait_pane_ParamLimits

0x56a0,	// (0x00025d62) cont_note_wait_pane

0x56a0,	// (0x00025d62) cont_note_image_pane_ParamLimits

0x56a0,	// (0x00025d62) cont_note_image_pane

0x82c8,	// (0x0002898a) popup_note2_window_g1_ParamLimits

0x82c8,	// (0x0002898a) popup_note2_window_g1

0x82f9,	// (0x000289bb) popup_note2_window_t1_ParamLimits

0x82f9,	// (0x000289bb) popup_note2_window_t1

0x833e,	// (0x00028a00) popup_note2_window_t2_ParamLimits

0x833e,	// (0x00028a00) popup_note2_window_t2

0x8383,	// (0x00028a45) popup_note2_window_t3_ParamLimits

0x8383,	// (0x00028a45) popup_note2_window_t3

0x83c8,	// (0x00028a8a) popup_note2_window_t4_ParamLimits

0x83c8,	// (0x00028a8a) popup_note2_window_t4

0x3598,	// (0x00023c5a) popup_note2_window_t5_ParamLimits

0x3598,	// (0x00023c5a) popup_note2_window_t5

0x0004,

0xfc32,	// (0x000302f4) popup_note2_window_t_ParamLimits

0xfc32,	// (0x000302f4) popup_note2_window_t

0x83f7,	// (0x00028ab9) popup_note2_image_window_g1_ParamLimits

0x83f7,	// (0x00028ab9) popup_note2_image_window_g1

0x8403,	// (0x00028ac5) popup_note2_image_window_g2_ParamLimits

0x8403,	// (0x00028ac5) popup_note2_image_window_g2

0x0001,

0xfc3d,	// (0x000302ff) popup_note2_image_window_g_ParamLimits

0xfc3d,	// (0x000302ff) popup_note2_image_window_g

0x8415,	// (0x00028ad7) popup_note2_image_window_t1_ParamLimits

0x8415,	// (0x00028ad7) popup_note2_image_window_t1

0x842d,	// (0x00028aef) popup_note2_image_window_t2_ParamLimits

0x842d,	// (0x00028aef) popup_note2_image_window_t2

0x8445,	// (0x00028b07) popup_note2_image_window_t3_ParamLimits

0x8445,	// (0x00028b07) popup_note2_image_window_t3

0x0002,

0xfc42,	// (0x00030304) popup_note2_image_window_t_ParamLimits

0xfc42,	// (0x00030304) popup_note2_image_window_t

0x56ae,	// (0x00025d70) popup_note2_wait_window_g1_ParamLimits

0x56ae,	// (0x00025d70) popup_note2_wait_window_g1

0x8461,	// (0x00028b23) popup_note2_wait_window_g2_ParamLimits

0x8461,	// (0x00028b23) popup_note2_wait_window_g2

0x56c6,	// (0x00025d88) popup_note2_wait_window_g3_ParamLimits

0x56c6,	// (0x00025d88) popup_note2_wait_window_g3

0x0002,

0xfc49,	// (0x0003030b) popup_note2_wait_window_g_ParamLimits

0xfc49,	// (0x0003030b) popup_note2_wait_window_g

0x846d,	// (0x00028b2f) popup_note2_wait_window_t1_ParamLimits

0x846d,	// (0x00028b2f) popup_note2_wait_window_t1

0x848b,	// (0x00028b4d) popup_note2_wait_window_t2_ParamLimits

0x848b,	// (0x00028b4d) popup_note2_wait_window_t2

0x84a9,	// (0x00028b6b) popup_note2_wait_window_t3_ParamLimits

0x84a9,	// (0x00028b6b) popup_note2_wait_window_t3

0x84bb,	// (0x00028b7d) popup_note2_wait_window_t4_ParamLimits

0x84bb,	// (0x00028b7d) popup_note2_wait_window_t4

0x0003,

0xfc50,	// (0x00030312) popup_note2_wait_window_t_ParamLimits

0xfc50,	// (0x00030312) popup_note2_wait_window_t

0x84cd,	// (0x00028b8f) wait_bar2_pane_ParamLimits

0x84cd,	// (0x00028b8f) wait_bar2_pane

0x84e5,	// (0x00028ba7) popup_snote2_single_text_window_g1_ParamLimits

0x84e5,	// (0x00028ba7) popup_snote2_single_text_window_g1

0x850d,	// (0x00028bcf) popup_snote2_single_text_window_t1_ParamLimits

0x850d,	// (0x00028bcf) popup_snote2_single_text_window_t1

0x8559,	// (0x00028c1b) popup_snote2_single_text_window_t2_ParamLimits

0x8559,	// (0x00028c1b) popup_snote2_single_text_window_t2

0x85a5,	// (0x00028c67) popup_snote2_single_text_window_t3_ParamLimits

0x85a5,	// (0x00028c67) popup_snote2_single_text_window_t3

0x85e6,	// (0x00028ca8) popup_snote2_single_text_window_t4_ParamLimits

0x85e6,	// (0x00028ca8) popup_snote2_single_text_window_t4

0x861c,	// (0x00028cde) popup_snote2_single_text_window_t5_ParamLimits

0x861c,	// (0x00028cde) popup_snote2_single_text_window_t5

0x0004,

0xfc59,	// (0x0003031b) popup_snote2_single_text_window_t_ParamLimits

0xfc59,	// (0x0003031b) popup_snote2_single_text_window_t

0x8647,	// (0x00028d09) popup_snote2_single_graphic_window_g1_ParamLimits

0x8647,	// (0x00028d09) popup_snote2_single_graphic_window_g1

0x866f,	// (0x00028d31) popup_snote2_single_graphic_window_g2_ParamLimits

0x866f,	// (0x00028d31) popup_snote2_single_graphic_window_g2

0x0001,

0xfc64,	// (0x00030326) popup_snote2_single_graphic_window_g_ParamLimits

0xfc64,	// (0x00030326) popup_snote2_single_graphic_window_g

0x8697,	// (0x00028d59) popup_snote2_single_graphic_window_t1_ParamLimits

0x8697,	// (0x00028d59) popup_snote2_single_graphic_window_t1

0x86e3,	// (0x00028da5) popup_snote2_single_graphic_window_t2_ParamLimits

0x86e3,	// (0x00028da5) popup_snote2_single_graphic_window_t2

0x85a5,	// (0x00028c67) popup_snote2_single_graphic_window_t3_ParamLimits

0x85a5,	// (0x00028c67) popup_snote2_single_graphic_window_t3

0x85e6,	// (0x00028ca8) popup_snote2_single_graphic_window_t4_ParamLimits

0x85e6,	// (0x00028ca8) popup_snote2_single_graphic_window_t4

0x861c,	// (0x00028cde) popup_snote2_single_graphic_window_t5_ParamLimits

0x861c,	// (0x00028cde) popup_snote2_single_graphic_window_t5

0x0004,

0xfc69,	// (0x0003032b) popup_snote2_single_graphic_window_t_ParamLimits

0xfc69,	// (0x0003032b) popup_snote2_single_graphic_window_t

0x7116,	// (0x000277d8) clock_nsta_pane_cp2_t1

0x7116,	// (0x000277d8) clock_nsta_pane_cp2_t2

0x0001,

0xfa89,	// (0x0003014b) clock_nsta_pane_cp2_t

0x013e,	// (0x00020800) form_field_data_wide_pane_g1_ParamLimits

0x3b26,	// (0x000241e8) form_field_data_wide_pane_g2_ParamLimits

0x3b26,	// (0x000241e8) form_field_data_wide_pane_g2

0x3b32,	// (0x000241f4) form_field_data_wide_pane_g3_ParamLimits

0x3b32,	// (0x000241f4) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x0002fd18) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x0002fd18) form_field_data_wide_pane_g

0xdf94,	// (0x0002e656) grid_touch_3_pane_ParamLimits

0xdf94,	// (0x0002e656) grid_touch_3_pane

0xe420,	// (0x0002eae2) cell_touch_3_pane_ParamLimits

0xe420,	// (0x0002eae2) cell_touch_3_pane

0x7664,	// (0x00027d26) cell_touch_3_pane_g1

0x7664,	// (0x00027d26) cell_touch_3_pane_g2

0x0001,

0xfb0e,	// (0x000301d0) cell_touch_3_pane_g

0x35f0,	// (0x00023cb2) cont_query_data_pane

0x35f8,	// (0x00023cba) cont_query_data_pane_cp1

0x875d,	// (0x00028e1f) button_value_adjust_pane_cp7

0x8765,	// (0x00028e27) query_popup_pane_cp3

0x429d,	// (0x0002495f) bg_popup_sub_pane_cp22_ParamLimits

0x140e,	// (0x00021ad0) navi_navi_volume_pane_cp2

0x1429,	// (0x00021aeb) popup_side_volume_key_window_g2

0x1438,	// (0x00021afa) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x0002fdae) popup_side_volume_key_window_g

0x1455,	// (0x00021b17) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x0002fdb5) popup_side_volume_key_window_t

0x4557,	// (0x00024c19) popup_side_volume_key_window_ParamLimits

0xb68d,	// (0x0002bd4f) list_double_graphic_pane_g4_ParamLimits

0xb68d,	// (0x0002bd4f) list_double_graphic_pane_g4

0xbbc4,	// (0x0002c286) list_single_2heading_msg_pane_ParamLimits

0xbbc4,	// (0x0002c286) list_single_2heading_msg_pane

0xbc38,	// (0x0002c2fa) list_single_2heading_msg_pane_g1_ParamLimits

0xbc38,	// (0x0002c2fa) list_single_2heading_msg_pane_g1

0xbc44,	// (0x0002c306) list_single_2heading_msg_pane_g2_ParamLimits

0xbc44,	// (0x0002c306) list_single_2heading_msg_pane_g2

0xbc57,	// (0x0002c319) list_single_2heading_msg_pane_g3_ParamLimits

0xbc57,	// (0x0002c319) list_single_2heading_msg_pane_g3

0xbc63,	// (0x0002c325) list_single_2heading_msg_pane_g4_ParamLimits

0xbc63,	// (0x0002c325) list_single_2heading_msg_pane_g4

0x0003,

0xfc74,	// (0x00030336) list_single_2heading_msg_pane_g_ParamLimits

0xfc74,	// (0x00030336) list_single_2heading_msg_pane_g

0xbc7b,	// (0x0002c33d) list_single_2heading_msg_pane_t1_ParamLimits

0xbc7b,	// (0x0002c33d) list_single_2heading_msg_pane_t1

0xbca3,	// (0x0002c365) list_single_2heading_msg_pane_t2_ParamLimits

0xbca3,	// (0x0002c365) list_single_2heading_msg_pane_t2

0xbd0e,	// (0x0002c3d0) list_single_2heading_msg_pane_t3_ParamLimits

0xbd0e,	// (0x0002c3d0) list_single_2heading_msg_pane_t3

0x0cc6,	// (0x00021388) list_single_2heading_msg_pane_t4_ParamLimits

0x0cc6,	// (0x00021388) list_single_2heading_msg_pane_t4

0x0003,

0xfc7d,	// (0x0003033f) list_single_2heading_msg_pane_t_ParamLimits

0xfc7d,	// (0x0003033f) list_single_2heading_msg_pane_t

0x31df,	// (0x000238a1) title_pane_g4_ParamLimits

0x31df,	// (0x000238a1) title_pane_g4

0x121d,	// (0x000218df) title_pane_stacon_g3_ParamLimits

0x121d,	// (0x000218df) title_pane_stacon_g3

0x828b,	// (0x0002894d) list_single_2graphic_im_pane_g4_ParamLimits

0x828b,	// (0x0002894d) list_single_2graphic_im_pane_g4

0x610b,	// (0x000267cd) popup_side_volume_key_window_cp

0x693d,	// (0x00026fff) main_idle_act2_pane_t1

0x1d9a,	// (0x0002245c) toolbar_button_pane_g10

0xc38b,	// (0x0002ca4d) popup_toolbar_window_cp1

0x7107,	// (0x000277c9) clock_nsta_pane_cp_t1

0x7107,	// (0x000277c9) clock_nsta_pane_cp_t2

0x0001,

0xfa84,	// (0x00030146) clock_nsta_pane_cp_t

0x140e,	// (0x00021ad0) navi_navi_volume_pane_cp2_ParamLimits

0x141d,	// (0x00021adf) popup_side_volume_key_window_g1_ParamLimits

0x1429,	// (0x00021aeb) popup_side_volume_key_window_g2_ParamLimits

0x1438,	// (0x00021afa) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x0002fdae) popup_side_volume_key_window_g_ParamLimits

0x21f6,	// (0x000228b8) fep_hwr_aid_pane

0xe144,	// (0x0002e806) bg_fep_hwr_top_pane_g4_ParamLimits

0x76c0,	// (0x00027d82) fep_hwr_top_pane_g1_ParamLimits

0x76d2,	// (0x00027d94) fep_hwr_top_pane_g2_ParamLimits

0x22af,	// (0x00022971) fep_hwr_top_pane_g3_ParamLimits

0xfad9,	// (0x0003019b) fep_hwr_top_pane_g_ParamLimits

0x22c4,	// (0x00022986) fep_hwr_top_text_pane_ParamLimits

0x5ece,	// (0x00026590) aid_touch_tab_arrow_arrow_2

0x5ed7,	// (0x00026599) aid_touch_tab_arrow_left_2

0x220a,	// (0x000228cc) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2241,	// (0x00022903) fep_hwr_prediction_pane

0x7832,	// (0x00027ef4) fep_vkb_prediction_pane

0xe27e,	// (0x0002e940) fep_vkb_side_pane_g3_ParamLimits

0xe27e,	// (0x0002e940) fep_vkb_side_pane_g3

0x78e2,	// (0x00027fa4) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7d62,	// (0x00028424) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7d6f,	// (0x00028431) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb83,	// (0x00030245) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x878a,	// (0x00028e4c) fep_hwr_prediction_pane_g1

0x2551,	// (0x00022c13) fep_hwr_prediction_pane_g2

0x2559,	// (0x00022c1b) fep_hwr_prediction_pane_g3

0x2561,	// (0x00022c23) fep_hwr_prediction_pane_g4

0x0003,

0xfc86,	// (0x00030348) fep_hwr_prediction_pane_g

0x878a,	// (0x00028e4c) fep_vkb_prediction_pane_g1

0x8794,	// (0x00028e56) fep_vkb_prediction_pane_g2

0x879c,	// (0x00028e5e) fep_vkb_prediction_pane_g3

0x87a4,	// (0x00028e66) fep_vkb_prediction_pane_g4

0x0003,

0xfc8f,	// (0x00030351) fep_vkb_prediction_pane_g

0x2076,	// (0x00022738) slider_set_pane_g3

0x208a,	// (0x0002274c) slider_set_pane_g4

0x20a2,	// (0x00022764) slider_set_pane_g5

0x2076,	// (0x00022738) slider_set_pane_g6

0x20b8,	// (0x0002277a) slider_set_pane_g7

0x656b,	// (0x00026c2d) slider_form_pane_g3

0x6574,	// (0x00026c36) slider_form_pane_g4

0x657c,	// (0x00026c3e) slider_form_pane_g5

0x656b,	// (0x00026c2d) slider_form_pane_g6

0xddc0,	// (0x0002e482) slider_form_pane_g7

0x6be8,	// (0x000272aa) slider_set_pane_vc_g3

0x6bf1,	// (0x000272b3) slider_set_pane_vc_g4

0x6bfa,	// (0x000272bc) slider_set_pane_vc_g5

0x6be8,	// (0x000272aa) slider_set_pane_vc_g6

0x6c03,	// (0x000272c5) slider_set_pane_vc_g7

0x6dc5,	// (0x00027487) slider_form_pane_vc_g1

0x6dce,	// (0x00027490) slider_form_pane_vc_g2

0x6dd7,	// (0x00027499) slider_form_pane_vc_g3

0x6dc5,	// (0x00027487) slider_form_pane_vc_g4

0x6de0,	// (0x000274a2) slider_form_pane_vc_g5

0x0004,

0xfa56,	// (0x00030118) slider_form_pane_vc_g

0xe3cd,	// (0x0002ea8f) main_idle_act3_pane

0x87ac,	// (0x00028e6e) ai3_links_pane

0xe468,	// (0x0002eb2a) popup_ai3_data_window_ParamLimits

0xe468,	// (0x0002eb2a) popup_ai3_data_window

0xe3cd,	// (0x0002ea8f) grid_ai3_links_pane

0xe482,	// (0x0002eb44) cell_ai3_links_pane_ParamLimits

0xe482,	// (0x0002eb44) cell_ai3_links_pane

0x87e7,	// (0x00028ea9) bg_popup_sub_pane_cp11

0x87f4,	// (0x00028eb6) cell_ai3_links_pane_g1

0xe3cd,	// (0x0002ea8f) bg_popup_sub_pane_cp12

0x8819,	// (0x00028edb) heading_ai3_data_pane

0x8821,	// (0x00028ee3) list_ai3_gene_pane

0x882d,	// (0x00028eef) popup_ai3_data_window_g1

0x8835,	// (0x00028ef7) heading_ai3_data_pane_g1

0x883d,	// (0x00028eff) heading_ai3_data_pane_t1

0x884b,	// (0x00028f0d) list_double_ai3_gene_pane_ParamLimits

0x884b,	// (0x00028f0d) list_double_ai3_gene_pane

0x8858,	// (0x00028f1a) list_single_ai3_gene_pane_ParamLimits

0x8858,	// (0x00028f1a) list_single_ai3_gene_pane

0x7629,	// (0x00027ceb) list_highlight_pane_cp7_ParamLimits

0x7629,	// (0x00027ceb) list_highlight_pane_cp7

0x8865,	// (0x00028f27) list_single_a13_gene_pane_t1_ParamLimits

0x8865,	// (0x00028f27) list_single_a13_gene_pane_t1

0x887c,	// (0x00028f3e) list_single_ai3_gene_pane_g1

0x8885,	// (0x00028f47) list_single_ai3_gene_pane_g2

0x0001,

0xfc98,	// (0x0003035a) list_single_ai3_gene_pane_g

0x888d,	// (0x00028f4f) list_double_ai3_gene_pane_g1_ParamLimits

0x888d,	// (0x00028f4f) list_double_ai3_gene_pane_g1

0x8899,	// (0x00028f5b) list_double_ai3_gene_pane_t1_ParamLimits

0x8899,	// (0x00028f5b) list_double_ai3_gene_pane_t1

0x88b5,	// (0x00028f77) list_double_ai3_gene_pane_t2_ParamLimits

0x88b5,	// (0x00028f77) list_double_ai3_gene_pane_t2

0x88cb,	// (0x00028f8d) list_double_ai3_gene_pane_t3_ParamLimits

0x88cb,	// (0x00028f8d) list_double_ai3_gene_pane_t3

0x0002,

0xfc9d,	// (0x0003035f) list_double_ai3_gene_pane_t_ParamLimits

0xfc9d,	// (0x0003035f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0bf7,	// (0x000212b9) aid_size_min_col_2

0xe452,	// (0x0002eb14) aid_size_min_msg_ParamLimits

0xe452,	// (0x0002eb14) aid_size_min_msg

0xe292,	// (0x0002e954) fep_vkb_top_text_pane_g2_ParamLimits

0xe292,	// (0x0002e954) fep_vkb_top_text_pane_g2

0x0001,

0xfb09,	// (0x000301cb) fep_vkb_top_text_pane_g_ParamLimits

0xfb09,	// (0x000301cb) fep_vkb_top_text_pane_g

0xe3cd,	// (0x0002ea8f) main_hc_apps_shell_pane

0x88e8,	// (0x00028faa) grid_hc_apps_pane_ParamLimits

0x88e8,	// (0x00028faa) grid_hc_apps_pane

0x88fa,	// (0x00028fbc) list_hc_apps_pane

0x8902,	// (0x00028fc4) scroll_pane_cp37_ParamLimits

0x8902,	// (0x00028fc4) scroll_pane_cp37

0xe49c,	// (0x0002eb5e) cell_hc_apps_pane_ParamLimits

0xe49c,	// (0x0002eb5e) cell_hc_apps_pane

0xe55a,	// (0x0002ec1c) cell_hc_apps_pane_g1_ParamLimits

0xe55a,	// (0x0002ec1c) cell_hc_apps_pane_g1

0x89ec,	// (0x000290ae) cell_hc_apps_pane_g2_ParamLimits

0x89ec,	// (0x000290ae) cell_hc_apps_pane_g2

0x8a08,	// (0x000290ca) cell_hc_apps_pane_g3_ParamLimits

0x8a08,	// (0x000290ca) cell_hc_apps_pane_g3

0x0002,

0xfca4,	// (0x00030366) cell_hc_apps_pane_g_ParamLimits

0xfca4,	// (0x00030366) cell_hc_apps_pane_g

0xe586,	// (0x0002ec48) cell_hc_apps_pane_t1_ParamLimits

0xe586,	// (0x0002ec48) cell_hc_apps_pane_t1

0x3514,	// (0x00023bd6) grid_highlight_pane_cp10_ParamLimits

0x3514,	// (0x00023bd6) grid_highlight_pane_cp10

0xe5c4,	// (0x0002ec86) list_single_hc_apps_pane_ParamLimits

0xe5c4,	// (0x0002ec86) list_single_hc_apps_pane

0xe5f1,	// (0x0002ecb3) list_single_hc_apps_pane_g1

0xbd7c,	// (0x0002c43e) list_single_hc_apps_pane_g2

0x0001,

0xfcab,	// (0x0003036d) list_single_hc_apps_pane_g

0xbd95,	// (0x0002c457) list_single_hc_apps_pane_g2_copy1

0xbdb1,	// (0x0002c473) list_single_hc_apps_pane_t1

0x328b,	// (0x0002394d) bg_set_opt_pane_cp_ParamLimits

0x1145,	// (0x00021807) setting_slider_pane_t1_ParamLimits

0x115e,	// (0x00021820) setting_slider_pane_t2_ParamLimits

0x1178,	// (0x0002183a) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0002fbfb) setting_slider_pane_t_ParamLimits

0x1190,	// (0x00021852) slider_set_pane_ParamLimits

0x16b7,	// (0x00021d79) control_pane_g5_ParamLimits

0x16b7,	// (0x00021d79) control_pane_g5

0x63ba,	// (0x00026a7c) slider_set_pane_g1_ParamLimits

0x206a,	// (0x0002272c) slider_set_pane_g2_ParamLimits

0x2076,	// (0x00022738) slider_set_pane_g3_ParamLimits

0x208a,	// (0x0002274c) slider_set_pane_g4_ParamLimits

0x20a2,	// (0x00022764) slider_set_pane_g5_ParamLimits

0x2076,	// (0x00022738) slider_set_pane_g6_ParamLimits

0x20b8,	// (0x0002277a) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x0002fffc) slider_set_pane_g_ParamLimits

0x4643,	// (0x00024d05) navi_icon_text_pane_ParamLimits

0xd667,	// (0x0002dd29) aid_fill_nsta_2_ParamLimits

0xd69e,	// (0x0002dd60) aid_touch_tab_arrow_left_ParamLimits

0xd6b4,	// (0x0002dd76) aid_touch_tab_arrow_right_ParamLimits

0xd74f,	// (0x0002de11) clock_nsta_pane_ParamLimits

0x5eb0,	// (0x00026572) navi_icon_pane_g1_ParamLimits

0x5ebc,	// (0x0002657e) navi_text_pane_t1_ParamLimits

0x7213,	// (0x000278d5) navi_icon_text_pane_g1_ParamLimits

0x721f,	// (0x000278e1) navi_icon_text_pane_t1_ParamLimits

0xe5f1,	// (0x0002ecb3) list_single_hc_apps_pane_g1_ParamLimits

0xbd7c,	// (0x0002c43e) list_single_hc_apps_pane_g2_ParamLimits

0xfcab,	// (0x0003036d) list_single_hc_apps_pane_g_ParamLimits

0xbd95,	// (0x0002c457) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbdb1,	// (0x0002c473) list_single_hc_apps_pane_t1_ParamLimits

0xbf31,	// (0x0002c5f3) popup_toolbar2_fixed_window_ParamLimits

0xbf31,	// (0x0002c5f3) popup_toolbar2_fixed_window

0xcb47,	// (0x0002d209) popup_toolbar2_float_window

0xe3cd,	// (0x0002ea8f) bg_popup_sub_pane_cp27

0x8adf,	// (0x000291a1) grid_toolbar2_float_pane

0xe3cd,	// (0x0002ea8f) bg_popup_sub_pane_cp26

0x8adf,	// (0x000291a1) grid_toolbar2_fixed_pane

0xe60a,	// (0x0002eccc) cell_toolbar2_fixed_pane_ParamLimits

0xe60a,	// (0x0002eccc) cell_toolbar2_fixed_pane

0xe624,	// (0x0002ece6) cell_toolbar2_fixed_pane_g1

0x8b00,	// (0x000291c2) toolbar2_fixed_button_pane

0x5011,	// (0x000256d3) toolbar2_fixed_button_pane_g1

0x5019,	// (0x000256db) toolbar2_fixed_button_pane_g2

0x5021,	// (0x000256e3) toolbar2_fixed_button_pane_g3

0x5029,	// (0x000256eb) toolbar2_fixed_button_pane_g4

0x5031,	// (0x000256f3) toolbar2_fixed_button_pane_g5

0x5039,	// (0x000256fb) toolbar2_fixed_button_pane_g6

0x5041,	// (0x00025703) toolbar2_fixed_button_pane_g7

0x5049,	// (0x0002570b) toolbar2_fixed_button_pane_g8

0x5051,	// (0x00025713) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x0002fefe) toolbar2_fixed_button_pane_g

0x8b08,	// (0x000291ca) cell_toolbar2_float_pane_ParamLimits

0x8b08,	// (0x000291ca) cell_toolbar2_float_pane

0x8b19,	// (0x000291db) cell_toolbar2_float_pane_g1

0x8b00,	// (0x000291c2) toolbar2_fixed_button_pane_cp

0xe16c,	// (0x0002e82e) fep_vkb_accented_list_pane_ParamLimits

0xe16c,	// (0x0002e82e) fep_vkb_accented_list_pane

0x2412,	// (0x00022ad4) bg_popup_fep_shadow_pane_g9

0x47c3,	// (0x00024e85) bg_popup_fep_shadow_pane_cp3

0x3c7f,	// (0x00024341) list_accented_list_pane

0x8b22,	// (0x000291e4) list_single_accented_list_pane_ParamLimits

0x8b22,	// (0x000291e4) list_single_accented_list_pane

0x47c3,	// (0x00024e85) list_highlight_pane_cp10

0x8b33,	// (0x000291f5) list_single_accented_list_pane_t1

0xca71,	// (0x0002d133) popup_slider_window_ParamLimits

0xca71,	// (0x0002d133) popup_slider_window

0x876d,	// (0x00028e2f) aid_indentation_list_msg

0xe71b,	// (0x0002eddd) bg_popup_window_pane_cp19

0x8c5f,	// (0x00029321) popup_slider_window_g1

0x8c7b,	// (0x0002933d) popup_slider_window_g2

0x8c97,	// (0x00029359) popup_slider_window_g3

0x0005,

0xfcb0,	// (0x00030372) popup_slider_window_g

0x8cfd,	// (0x000293bf) popup_slider_window_t1

0x8d71,	// (0x00029433) small_volume_slider_vertical_pane

0x7664,	// (0x00027d26) small_volume_slider_vertical_pane_g1

0x7664,	// (0x00027d26) small_volume_slider_vertical_pane_g2

0x8d8d,	// (0x0002944f) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc2,	// (0x00030384) small_volume_slider_vertical_pane_g

0xbe9f,	// (0x0002c561) area_side_right_pane_ParamLimits

0xbe9f,	// (0x0002c561) area_side_right_pane

0xcc7d,	// (0x0002d33f) aid_size_side_button_ParamLimits

0xcc7d,	// (0x0002d33f) aid_size_side_button

0xcc96,	// (0x0002d358) grid_sctrl_middle_pane_ParamLimits

0xcc96,	// (0x0002d358) grid_sctrl_middle_pane

0x259c,	// (0x00022c5e) sctrl_sk_bottom_pane

0x25ad,	// (0x00022c6f) sctrl_sk_top_pane

0x25bf,	// (0x00022c81) aid_touch_sctrl_top

0x3514,	// (0x00023bd6) bg_sctrl_sk_pane_ParamLimits

0x3514,	// (0x00023bd6) bg_sctrl_sk_pane

0x25cc,	// (0x00022c8e) sctrl_sk_top_pane_g1

0x25d9,	// (0x00022c9b) sctrl_sk_top_pane_t1

0x25bf,	// (0x00022c81) aid_touch_sctrl_bottom

0x3514,	// (0x00023bd6) bg_sctrl_sk_pane_cp_ParamLimits

0x3514,	// (0x00023bd6) bg_sctrl_sk_pane_cp

0x25f4,	// (0x00022cb6) sctrl_sk_bottom_pane_g1

0x25d9,	// (0x00022c9b) sctrl_sk_bottom_pane_t1

0xccb0,	// (0x0002d372) cell_sctrl_middle_pane_ParamLimits

0xccb0,	// (0x0002d372) cell_sctrl_middle_pane

0xccc1,	// (0x0002d383) aid_touch_sctrl_middle_ParamLimits

0xccc1,	// (0x0002d383) aid_touch_sctrl_middle

0xccce,	// (0x0002d390) bg_sctrl_middle_pane_ParamLimits

0xccce,	// (0x0002d390) bg_sctrl_middle_pane

0x8e15,	// (0x000294d7) cell_sctrl_middle_pane_g1_ParamLimits

0x8e15,	// (0x000294d7) cell_sctrl_middle_pane_g1

0xccdc,	// (0x0002d39e) cell_sctrl_middle_pane_g2_ParamLimits

0xccdc,	// (0x0002d39e) cell_sctrl_middle_pane_g2

0x0001,

0xfcce,	// (0x00030390) cell_sctrl_middle_pane_g_ParamLimits

0xfcce,	// (0x00030390) cell_sctrl_middle_pane_g

0x5011,	// (0x000256d3) bg_sctrl_middle_pane_g1

0x5019,	// (0x000256db) bg_sctrl_middle_pane_g2

0x5021,	// (0x000256e3) bg_sctrl_middle_pane_g3

0x5029,	// (0x000256eb) bg_sctrl_middle_pane_g4

0x5031,	// (0x000256f3) bg_sctrl_middle_pane_g5

0x5039,	// (0x000256fb) bg_sctrl_middle_pane_g6

0x5041,	// (0x00025703) bg_sctrl_middle_pane_g7

0x5049,	// (0x0002570b) bg_sctrl_middle_pane_g8

0x0007,

0xfcd3,	// (0x00030395) bg_sctrl_middle_pane_g

0x5051,	// (0x00025713) bg_sctrl_middle_pane_g8_copy1

0x5011,	// (0x000256d3) bg_sctrl_sk_pane_g1

0x5019,	// (0x000256db) bg_sctrl_sk_pane_g2

0x5021,	// (0x000256e3) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x0002fefe) bg_sctrl_sk_pane_g

0x3a47,	// (0x00024109) aid_size_touch_scroll_bar

0x5029,	// (0x000256eb) bg_sctrl_sk_pane_g4

0x5031,	// (0x000256f3) bg_sctrl_sk_pane_g5

0x5039,	// (0x000256fb) bg_sctrl_sk_pane_g6

0x5041,	// (0x00025703) bg_sctrl_sk_pane_g7

0x5049,	// (0x0002570b) bg_sctrl_sk_pane_g8

0x5051,	// (0x00025713) bg_sctrl_sk_pane_g9

0x1855,	// (0x00021f17) popup_fep_china_hwr2_fs_candidate_window

0xc585,	// (0x0002cc47) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc585,	// (0x0002cc47) popup_fep_china_hwr2_fs_control_window

0x78e2,	// (0x00027fa4) sctrl_sk_top_pane_g2

0x0001,

0xfcc9,	// (0x0003038b) sctrl_sk_top_pane_g

0xe7d3,	// (0x0002ee95) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe7d3,	// (0x0002ee95) aid_fep_china_hwr2_fs_cell

0xe7e7,	// (0x0002eea9) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe7e7,	// (0x0002eea9) bg_popup_fep_shadow_pane_cp4

0xe7fe,	// (0x0002eec0) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe7fe,	// (0x0002eec0) bg_popup_fep_shadow_pane_cp5

0xe810,	// (0x0002eed2) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe810,	// (0x0002eed2) popup_fep_china_hwr2_fs_control_bar_grid

0xe824,	// (0x0002eee6) popup_fep_china_hwr2_fs_control_funtion_grid

0x8de9,	// (0x000294ab) aid_fep_china_hwr2_fs_candi_cell

0xe3cd,	// (0x0002ea8f) bg_popup_fep_shadow_pane_cp6

0x8df3,	// (0x000294b5) popup_fep_china_hwr2_fs_candidate_grid

0xe82c,	// (0x0002eeee) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe82c,	// (0x0002eeee) cell_fep_china_hwr2_fs_funtion_grid

0x7664,	// (0x00027d26) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8e15,	// (0x000294d7) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8e15,	// (0x000294d7) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8e23,	// (0x000294e5) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8e23,	// (0x000294e5) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfce4,	// (0x000303a6) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfce4,	// (0x000303a6) cell_fep_china_hwr2_fs_funtion_grid_g

0xe844,	// (0x0002ef06) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe844,	// (0x0002ef06) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe859,	// (0x0002ef1b) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe859,	// (0x0002ef1b) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfce9,	// (0x000303ab) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfce9,	// (0x000303ab) cell_fep_china_hwr2_fs_funtion_grid_t

0x8e6a,	// (0x0002952c) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8e72,	// (0x00029534) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8e7a,	// (0x0002953c) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcee,	// (0x000303b0) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8e82,	// (0x00029544) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8e82,	// (0x00029544) cell_fep_china_hwr2_fs_candidate_grid

0x8e9b,	// (0x0002955d) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8ea3,	// (0x00029565) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7664,	// (0x00027d26) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7664,	// (0x00027d26) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb0e,	// (0x000301d0) cell_fep_china_hwr2_fs_candidate_grid_g

0x8eab,	// (0x0002956d) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4c07,	// (0x000252c9) clock_nsta_pane_cp_24_ParamLimits

0x4c07,	// (0x000252c9) clock_nsta_pane_cp_24

0x4c85,	// (0x00025347) indicator_nsta_pane_cp_24_ParamLimits

0x4c85,	// (0x00025347) indicator_nsta_pane_cp_24

0x5d2c,	// (0x000263ee) heading_pane_g1

0x0001,

0xf8a1,	// (0x0002ff63) heading_pane_g

0x6786,	// (0x00026e48) grid_sct_catagory_button_pane

0x67b6,	// (0x00026e78) scroll_pane_cp5_ParamLimits

0x7261,	// (0x00027923) button_value_adjust_pane_cp5_ParamLimits

0x7261,	// (0x00027923) button_value_adjust_pane_cp5

0x7340,	// (0x00027a02) form2_midp_time_pane_ParamLimits

0x8eb9,	// (0x0002957b) cell_sct_catagory_button_pane_ParamLimits

0x8eb9,	// (0x0002957b) cell_sct_catagory_button_pane

0x7629,	// (0x00027ceb) bg_button_pane_cp01_ParamLimits

0x7629,	// (0x00027ceb) bg_button_pane_cp01

0x7664,	// (0x00027d26) cell_sct_catagory_button_pane_g1

0xcaea,	// (0x0002d1ac) popup_tb_extension_window

0xe875,	// (0x0002ef37) aid_size_cell_ext_ParamLimits

0xe875,	// (0x0002ef37) aid_size_cell_ext

0x3889,	// (0x00023f4b) bg_tb_trans_pane_cp1_ParamLimits

0x3889,	// (0x00023f4b) bg_tb_trans_pane_cp1

0xe89b,	// (0x0002ef5d) grid_tb_ext_pane_ParamLimits

0xe89b,	// (0x0002ef5d) grid_tb_ext_pane

0xe8d6,	// (0x0002ef98) cell_tb_ext_pane_ParamLimits

0xe8d6,	// (0x0002ef98) cell_tb_ext_pane

0xe8fe,	// (0x0002efc0) cell_tb_ext_pane_g1_ParamLimits

0xe8fe,	// (0x0002efc0) cell_tb_ext_pane_g1

0x8f4d,	// (0x0002960f) cell_tb_ext_pane_t1

0x3514,	// (0x00023bd6) list_highlight_pane_cp11_ParamLimits

0x3514,	// (0x00023bd6) list_highlight_pane_cp11

0xbf46,	// (0x0002c608) popup_uni_indicator_window_ParamLimits

0xbf46,	// (0x0002c608) popup_uni_indicator_window

0x3b18,	// (0x000241da) bg_popup_sub_pane_cp14

0x8f68,	// (0x0002962a) list_uniindi_pane

0x8f74,	// (0x00029636) uniindi_top_pane

0x3514,	// (0x00023bd6) bg_uniindi_top_pane

0x8f93,	// (0x00029655) uniindi_top_pane_g1

0x8fa9,	// (0x0002966b) uniindi_top_pane_g2

0x0003,

0xfcf5,	// (0x000303b7) uniindi_top_pane_g

0x8fd3,	// (0x00029695) uniindi_top_pane_t1

0x8ffd,	// (0x000296bf) list_single_uniindi_pane_ParamLimits

0x8ffd,	// (0x000296bf) list_single_uniindi_pane

0x7664,	// (0x00027d26) bg_uniindi_top_pane_g1

0x9010,	// (0x000296d2) list_single_uniindi_pane_g1

0x9023,	// (0x000296e5) list_single_uniindi_pane_t1

0xe3cd,	// (0x0002ea8f) control_bg_pane

0x9048,	// (0x0002970a) bg_sctrl_sk_pane_cp1

0x9051,	// (0x00029713) bg_sctrl_sk_pane_cp2

0x905a,	// (0x0002971c) control_bg_pane_g1

0x9063,	// (0x00029725) control_bg_pane_g2

0x0001,

0xfcfe,	// (0x000303c0) control_bg_pane_g

0x70ab,	// (0x0002776d) cell_indicator_nsta_pane_g1_ParamLimits

0xdfd1,	// (0x0002e693) cell_indicator_nsta_pane_g2_ParamLimits

0xfa72,	// (0x00030134) cell_indicator_nsta_pane_g_ParamLimits

0x09a8,	// (0x0002106a) form2_midp_time_pane_t1_ParamLimits

0x21e8,	// (0x000228aa) main_idle_act4_pane_ParamLimits

0x21e8,	// (0x000228aa) main_idle_act4_pane

0xcaea,	// (0x0002d1ac) popup_tb_extension_window_ParamLimits

0xe8bd,	// (0x0002ef7f) tb_ext_find_pane_ParamLimits

0xe8bd,	// (0x0002ef7f) tb_ext_find_pane

0x906c,	// (0x0002972e) ai_gene_pane_1_cp1

0x490a,	// (0x00024fcc) ai_gene_pane_2_cp1

0x9074,	// (0x00029736) list_single_idle_plugin_calendar_pane

0x907d,	// (0x0002973f) list_single_idle_plugin_notification_pane

0x9086,	// (0x00029748) list_single_idle_plugin_player_pane

0xe91b,	// (0x0002efdd) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe91b,	// (0x0002efdd) list_single_idle_plugin_shortcut_pane

0xe943,	// (0x0002f005) main_idle_act4_pane_t1

0xe959,	// (0x0002f01b) main_idle_act4_pane_t2

0x0001,

0xfd03,	// (0x000303c5) main_idle_act4_pane_t

0xe96f,	// (0x0002f031) middle_sk_idle_act4_pane_ParamLimits

0xe96f,	// (0x0002f031) middle_sk_idle_act4_pane

0xe98b,	// (0x0002f04d) popup_clock_digital_analogue_window_cp2

0xe9b3,	// (0x0002f075) shortcut_wheel_idle_act4_pane_ParamLimits

0xe9b3,	// (0x0002f075) shortcut_wheel_idle_act4_pane

0x7664,	// (0x00027d26) shortcut_wheel_idle_act4_pane_g1

0x7664,	// (0x00027d26) shortcut_wheel_idle_act4_pane_g2

0x7664,	// (0x00027d26) shortcut_wheel_idle_act4_pane_g3

0x7664,	// (0x00027d26) shortcut_wheel_idle_act4_pane_g4

0x7664,	// (0x00027d26) shortcut_wheel_idle_act4_pane_g5

0x9119,	// (0x000297db) shortcut_wheel_idle_act4_pane_g6

0x9121,	// (0x000297e3) shortcut_wheel_idle_act4_pane_g7

0x9129,	// (0x000297eb) shortcut_wheel_idle_act4_pane_g8

0x9131,	// (0x000297f3) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd08,	// (0x000303ca) shortcut_wheel_idle_act4_pane_g

0xe144,	// (0x0002e806) middle_sk_idle_act4_pane_g1_ParamLimits

0xe144,	// (0x0002e806) middle_sk_idle_act4_pane_g1

0xea30,	// (0x0002f0f2) middle_sk_idle_act4_pane_g2_ParamLimits

0xea30,	// (0x0002f0f2) middle_sk_idle_act4_pane_g2

0x0001,

0xfd2b,	// (0x000303ed) middle_sk_idle_act4_pane_g_ParamLimits

0xfd2b,	// (0x000303ed) middle_sk_idle_act4_pane_g

0xea48,	// (0x0002f10a) middle_sk_idle_act4_pane_t1_ParamLimits

0xea48,	// (0x0002f10a) middle_sk_idle_act4_pane_t1

0xea77,	// (0x0002f139) grid_ai_shortcut_pane_ParamLimits

0xea77,	// (0x0002f139) grid_ai_shortcut_pane

0xea94,	// (0x0002f156) list_highlight_pane_cp16_ParamLimits

0xea94,	// (0x0002f156) list_highlight_pane_cp16

0xeaa1,	// (0x0002f163) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xeaa1,	// (0x0002f163) list_single_idle_plugin_shortcut_pane_g1

0xeaad,	// (0x0002f16f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xeaad,	// (0x0002f16f) list_single_idle_plugin_shortcut_pane_g2

0xeac9,	// (0x0002f18b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xeac9,	// (0x0002f18b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd30,	// (0x000303f2) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd30,	// (0x000303f2) list_single_idle_plugin_shortcut_pane_g

0xeade,	// (0x0002f1a0) cell_ai_shortcut_pane_ParamLimits

0xeade,	// (0x0002f1a0) cell_ai_shortcut_pane

0xeaf4,	// (0x0002f1b6) cell_ai_shortcut_pane_g1_ParamLimits

0xeaf4,	// (0x0002f1b6) cell_ai_shortcut_pane_g1

0x906c,	// (0x0002972e) ai_gene_pane_1_cp2

0x9261,	// (0x00029923) ai_gene_pane_2_cp2

0x9269,	// (0x0002992b) list_highlight_pane_cp15

0x9272,	// (0x00029934) list_single_idle_plugin_calendar_pane_g1

0x9269,	// (0x0002992b) list_highlight_pane_cp17

0x927a,	// (0x0002993c) list_single_idle_plugin_calendar_pane_g1_copy1

0x9282,	// (0x00029944) list_single_idle_plugin_player_pane_g1

0x69df,	// (0x000270a1) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd37,	// (0x000303f9) list_single_idle_plugin_player_pane_g

0x928a,	// (0x0002994c) list_single_idle_plugin_player_pane_t1

0x9298,	// (0x0002995a) list_single_idle_plugin_player_pane_t2

0x92a6,	// (0x00029968) list_single_idle_plugin_player_pane_t3

0x92b4,	// (0x00029976) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd3c,	// (0x000303fe) list_single_idle_plugin_player_pane_t

0x92c2,	// (0x00029984) wait_bar_pane_cp15

0x92ca,	// (0x0002998c) grid_ai_notification_pane

0x69df,	// (0x000270a1) list_single_idle_plugin_notification_pane_g1

0xeb16,	// (0x0002f1d8) cell_ai_notification_pane_ParamLimits

0xeb16,	// (0x0002f1d8) cell_ai_notification_pane

0x92e0,	// (0x000299a2) cell_ai_notification_pane_g1

0x92e8,	// (0x000299aa) cell_ai_notification_pane_t1

0xeb23,	// (0x0002f1e5) tb_ext_find_button_pane

0xeb2b,	// (0x0002f1ed) tb_ext_find_pane_g1

0xeb33,	// (0x0002f1f5) tb_ext_find_pane_t1

0x41ad,	// (0x0002486f) tb_ext_find_button_pane_g1

0x9314,	// (0x000299d6) tb_ext_find_button_pane_g2

0x0001,

0xfd45,	// (0x00030407) tb_ext_find_button_pane_g

0xe943,	// (0x0002f005) main_idle_act4_pane_t1_ParamLimits

0xe959,	// (0x0002f01b) main_idle_act4_pane_t2_ParamLimits

0xfd03,	// (0x000303c5) main_idle_act4_pane_t_ParamLimits

0xe98b,	// (0x0002f04d) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe9a3,	// (0x0002f065) sat_plugin_idle_act4_pane_ParamLimits

0xe9a3,	// (0x0002f065) sat_plugin_idle_act4_pane

0xeb41,	// (0x0002f203) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeb41,	// (0x0002f203) sat_plugin_idle_act4_pane_t1

0xeb59,	// (0x0002f21b) sat_plugin_idle_act4_pane_t2_ParamLimits

0xeb59,	// (0x0002f21b) sat_plugin_idle_act4_pane_t2

0xeb71,	// (0x0002f233) sat_plugin_idle_act4_pane_t3_ParamLimits

0xeb71,	// (0x0002f233) sat_plugin_idle_act4_pane_t3

0xeb89,	// (0x0002f24b) sat_plugin_idle_act4_pane_t4_ParamLimits

0xeb89,	// (0x0002f24b) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd4a,	// (0x0003040c) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd4a,	// (0x0003040c) sat_plugin_idle_act4_pane_t

0x0fa9,	// (0x0002166b) popup_battery_window_ParamLimits

0x0fa9,	// (0x0002166b) popup_battery_window

0x3514,	// (0x00023bd6) bg_popup_sub_pane_cp25_ParamLimits

0x3514,	// (0x00023bd6) bg_popup_sub_pane_cp25

0x9369,	// (0x00029a2b) popup_battery_window_g1_ParamLimits

0x9369,	// (0x00029a2b) popup_battery_window_g1

0x9375,	// (0x00029a37) popup_battery_window_t1_ParamLimits

0x9375,	// (0x00029a37) popup_battery_window_t1

0x9387,	// (0x00029a49) popup_battery_window_t2_ParamLimits

0x9387,	// (0x00029a49) popup_battery_window_t2

0x0001,

0xfd53,	// (0x00030415) popup_battery_window_t_ParamLimits

0xfd53,	// (0x00030415) popup_battery_window_t

0xd4d2,	// (0x0002db94) midp_canvas_pane_ParamLimits

0xd52f,	// (0x0002dbf1) midp_keypad_pane_ParamLimits

0xd52f,	// (0x0002dbf1) midp_keypad_pane

0x4ae7,	// (0x000251a9) main_midp_pane_ParamLimits

0x7125,	// (0x000277e7) signal_pane_g2_cp_ParamLimits

0xeba1,	// (0x0002f263) aid_size_cell_midp_keypad_ParamLimits

0xeba1,	// (0x0002f263) aid_size_cell_midp_keypad

0xebbf,	// (0x0002f281) midp_keyp_game_grid_pane_ParamLimits

0xebbf,	// (0x0002f281) midp_keyp_game_grid_pane

0xebe6,	// (0x0002f2a8) midp_keyp_rocker_pane_ParamLimits

0xebe6,	// (0x0002f2a8) midp_keyp_rocker_pane

0xec37,	// (0x0002f2f9) midp_keyp_sk_left_pane_ParamLimits

0xec37,	// (0x0002f2f9) midp_keyp_sk_left_pane

0xec8b,	// (0x0002f34d) midp_keyp_sk_right_pane_ParamLimits

0xec8b,	// (0x0002f34d) midp_keyp_sk_right_pane

0xe3cd,	// (0x0002ea8f) bg_button_pane_cp03

0xecdf,	// (0x0002f3a1) midp_keyp_sk_left_pane_g1

0xe3cd,	// (0x0002ea8f) bg_button_pane_cp04

0xecdf,	// (0x0002f3a1) midp_keyp_sk_right_pane_g1

0x7664,	// (0x00027d26) midp_keyp_rocker_pane_g1

0xece8,	// (0x0002f3aa) keyp_game_cell_pane_ParamLimits

0xece8,	// (0x0002f3aa) keyp_game_cell_pane

0xe3cd,	// (0x0002ea8f) bg_button_pane_cp02

0xed0c,	// (0x0002f3ce) keyp_game_cell_pane_g1

0xbee1,	// (0x0002c5a3) popup_fep_vkb2_window_ParamLimits

0xbee1,	// (0x0002c5a3) popup_fep_vkb2_window

0xcce8,	// (0x0002d3aa) aid_size_cell_vkb2_ParamLimits

0xcce8,	// (0x0002d3aa) aid_size_cell_vkb2

0xcd1e,	// (0x0002d3e0) popup_fep_vkb2_window_g1_ParamLimits

0xcd1e,	// (0x0002d3e0) popup_fep_vkb2_window_g1

0xcd6e,	// (0x0002d430) vkb2_area_bottom_pane_ParamLimits

0xcd6e,	// (0x0002d430) vkb2_area_bottom_pane

0xcdc2,	// (0x0002d484) vkb2_area_keypad_pane_ParamLimits

0xcdc2,	// (0x0002d484) vkb2_area_keypad_pane

0xce0a,	// (0x0002d4cc) vkb2_area_top_pane_ParamLimits

0xce0a,	// (0x0002d4cc) vkb2_area_top_pane

0xce90,	// (0x0002d552) vkb2_top_entry_pane_ParamLimits

0xce90,	// (0x0002d552) vkb2_top_entry_pane

0xcebd,	// (0x0002d57f) vkb2_top_grid_left_pane_ParamLimits

0xcebd,	// (0x0002d57f) vkb2_top_grid_left_pane

0xcedd,	// (0x0002d59f) vkb2_top_grid_right_pane_ParamLimits

0xcedd,	// (0x0002d59f) vkb2_top_grid_right_pane

0x2852,	// (0x00022f14) vkb2_cell_keypad_pane_ParamLimits

0x2852,	// (0x00022f14) vkb2_cell_keypad_pane

0xcf23,	// (0x0002d5e5) vkb2_area_bottom_grid_pane_ParamLimits

0xcf23,	// (0x0002d5e5) vkb2_area_bottom_grid_pane

0xcf4d,	// (0x0002d60f) vkb2_area_bottom_pane_g1_ParamLimits

0xcf4d,	// (0x0002d60f) vkb2_area_bottom_pane_g1

0xcf73,	// (0x0002d635) vkb2_area_bottom_pane_g2_ParamLimits

0xcf73,	// (0x0002d635) vkb2_area_bottom_pane_g2

0xcfa4,	// (0x0002d666) vkb2_area_bottom_pane_g3_ParamLimits

0xcfa4,	// (0x0002d666) vkb2_area_bottom_pane_g3

0x0002,

0xfd58,	// (0x0003041a) vkb2_area_bottom_pane_g_ParamLimits

0xfd58,	// (0x0003041a) vkb2_area_bottom_pane_g

0x29fc,	// (0x000230be) vkb2_top_cell_left_pane_ParamLimits

0x29fc,	// (0x000230be) vkb2_top_cell_left_pane

0xed15,	// (0x0002f3d7) vkb2_top_entry_pane_g1_ParamLimits

0xed15,	// (0x0002f3d7) vkb2_top_entry_pane_g1

0xed23,	// (0x0002f3e5) vkb2_top_entry_pane_t1_ParamLimits

0xed23,	// (0x0002f3e5) vkb2_top_entry_pane_t1

0x9538,	// (0x00029bfa) vkb2_top_entry_pane_t2_ParamLimits

0x9538,	// (0x00029bfa) vkb2_top_entry_pane_t2

0x956a,	// (0x00029c2c) vkb2_top_entry_pane_t3_ParamLimits

0x956a,	// (0x00029c2c) vkb2_top_entry_pane_t3

0x0002,

0xfd5f,	// (0x00030421) vkb2_top_entry_pane_t_ParamLimits

0xfd5f,	// (0x00030421) vkb2_top_entry_pane_t

0xd00e,	// (0x0002d6d0) vkb2_top_grid_right_pane_g1_ParamLimits

0xd00e,	// (0x0002d6d0) vkb2_top_grid_right_pane_g1

0x2a5f,	// (0x00023121) vkb2_top_grid_right_pane_g2_ParamLimits

0x2a5f,	// (0x00023121) vkb2_top_grid_right_pane_g2

0x2a77,	// (0x00023139) vkb2_top_grid_right_pane_g3_ParamLimits

0x2a77,	// (0x00023139) vkb2_top_grid_right_pane_g3

0xd024,	// (0x0002d6e6) vkb2_top_grid_right_pane_g4_ParamLimits

0xd024,	// (0x0002d6e6) vkb2_top_grid_right_pane_g4

0x0003,

0xfd66,	// (0x00030428) vkb2_top_grid_right_pane_g_ParamLimits

0xfd66,	// (0x00030428) vkb2_top_grid_right_pane_g

0x2aa5,	// (0x00023167) vkb2_top_cell_left_pane_g1

0x2abc,	// (0x0002317e) vkb2_cell_keypad_pane_g1_ParamLimits

0x2abc,	// (0x0002317e) vkb2_cell_keypad_pane_g1

0x958e,	// (0x00029c50) vkb2_cell_keypad_pane_t1_ParamLimits

0x958e,	// (0x00029c50) vkb2_cell_keypad_pane_t1

0x2aca,	// (0x0002318c) vkb2_cell_bottom_grid_pane_ParamLimits

0x2aca,	// (0x0002318c) vkb2_cell_bottom_grid_pane

0x2b03,	// (0x000231c5) vkb2_cell_bottom_grid_pane_g1

0xe9d4,	// (0x0002f096) aid_call2_pane_cp02

0xe9dc,	// (0x0002f09e) aid_call_pane_cp02

0xe9e4,	// (0x0002f0a6) clock_digital_number_pane_cp10

0xe9ec,	// (0x0002f0ae) clock_digital_number_pane_cp11

0xe9f4,	// (0x0002f0b6) clock_digital_number_pane_cp12

0xe9fc,	// (0x0002f0be) clock_digital_number_pane_cp13

0xea04,	// (0x0002f0c6) clock_digital_separator_pane_cp10

0x41ad,	// (0x0002486f) popup_clock_digital_analogue_window_cp2_g1

0x41ad,	// (0x0002486f) popup_clock_digital_analogue_window_cp2_g2

0xea0c,	// (0x0002f0ce) popup_clock_digital_analogue_window_cp2_g3

0x41ad,	// (0x0002486f) popup_clock_digital_analogue_window_cp2_g4

0xea0c,	// (0x0002f0ce) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd1b,	// (0x000303dd) popup_clock_digital_analogue_window_cp2_g

0xea14,	// (0x0002f0d6) popup_clock_digital_analogue_window_cp2_t1

0xea22,	// (0x0002f0e4) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd26,	// (0x000303e8) popup_clock_digital_analogue_window_cp2_t

0x7664,	// (0x00027d26) clock_digital_number_pane_cp10_g1

0x7664,	// (0x00027d26) clock_digital_number_pane_cp10_g2

0x0001,

0xfb0e,	// (0x000301d0) clock_digital_number_pane_cp10_g

0x7664,	// (0x00027d26) clock_digital_separator_pane_cp10_g1

0x7664,	// (0x00027d26) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb0e,	// (0x000301d0) clock_digital_separator_pane_cp10_g

0x8fb5,	// (0x00029677) uniindi_top_pane_g3

0x8fc6,	// (0x00029688) uniindi_top_pane_g4

0x28dd,	// (0x00022f9f) vkb2_row_keypad_pane_ParamLimits

0x28dd,	// (0x00022f9f) vkb2_row_keypad_pane

0x2b1f,	// (0x000231e1) vkb2_cell_t_keypad_pane_ParamLimits

0x2b1f,	// (0x000231e1) vkb2_cell_t_keypad_pane

0x2b2f,	// (0x000231f1) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2b2f,	// (0x000231f1) vkb2_cell_t_keypad_pane_cp08

0x2b42,	// (0x00023204) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2b42,	// (0x00023204) vkb2_cell_t_keypad_pane_cp09

0x2b56,	// (0x00023218) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2b56,	// (0x00023218) vkb2_cell_t_keypad_pane_cp01

0x2b67,	// (0x00023229) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2b67,	// (0x00023229) vkb2_cell_t_keypad_pane_cp02

0x2b78,	// (0x0002323a) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2b78,	// (0x0002323a) vkb2_cell_t_keypad_pane_cp03

0x2b89,	// (0x0002324b) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2b89,	// (0x0002324b) vkb2_cell_t_keypad_pane_cp04

0x2b9a,	// (0x0002325c) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2b9a,	// (0x0002325c) vkb2_cell_t_keypad_pane_cp05

0x2bab,	// (0x0002326d) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2bab,	// (0x0002326d) vkb2_cell_t_keypad_pane_cp06

0x2bbc,	// (0x0002327e) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2bbc,	// (0x0002327e) vkb2_cell_t_keypad_pane_cp07

0x2bcd,	// (0x0002328f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2bcd,	// (0x0002328f) vkb2_cell_t_keypad_pane_cp10

0x78e2,	// (0x00027fa4) vkb2_cell_t_keypad_pane_g1

0x95a5,	// (0x00029c67) vkb2_cell_t_keypad_pane_t1

0xe3cd,	// (0x0002ea8f) popup_grid_graphic2_window

0xed5c,	// (0x0002f41e) aid_size_cell_graphic2_ParamLimits

0xed5c,	// (0x0002f41e) aid_size_cell_graphic2

0xed9a,	// (0x0002f45c) bg_popup_window_pane_cp21_ParamLimits

0xed9a,	// (0x0002f45c) bg_popup_window_pane_cp21

0xeda8,	// (0x0002f46a) graphic2_pages_pane_ParamLimits

0xeda8,	// (0x0002f46a) graphic2_pages_pane

0xedfe,	// (0x0002f4c0) grid_graphic2_control_pane_ParamLimits

0xedfe,	// (0x0002f4c0) grid_graphic2_control_pane

0xee46,	// (0x0002f508) grid_graphic2_pane_ParamLimits

0xee46,	// (0x0002f508) grid_graphic2_pane

0xeecd,	// (0x0002f58f) cell_graphic2_pane

0xe3cd,	// (0x0002ea8f) main_comp_mode_pane

0x8821,	// (0x00028ee3) list_ai3_gene_pane_ParamLimits

0xe71b,	// (0x0002eddd) bg_popup_window_pane_cp19_ParamLimits

0x8c03,	// (0x000292c5) bg_touch_area_indi_pane_ParamLimits

0x8c03,	// (0x000292c5) bg_touch_area_indi_pane

0x8c19,	// (0x000292db) bg_touch_area_indi_pane_cp01_ParamLimits

0x8c19,	// (0x000292db) bg_touch_area_indi_pane_cp01

0x8c2f,	// (0x000292f1) bg_touch_area_indi_pane_cp02_ParamLimits

0x8c2f,	// (0x000292f1) bg_touch_area_indi_pane_cp02

0x8c45,	// (0x00029307) bg_touch_area_indi_pane_cp03_ParamLimits

0x8c45,	// (0x00029307) bg_touch_area_indi_pane_cp03

0x8c5f,	// (0x00029321) popup_slider_window_g1_ParamLimits

0x8c7b,	// (0x0002933d) popup_slider_window_g2_ParamLimits

0x8c97,	// (0x00029359) popup_slider_window_g3_ParamLimits

0xfcb0,	// (0x00030372) popup_slider_window_g_ParamLimits

0x8cfd,	// (0x000293bf) popup_slider_window_t1_ParamLimits

0x8d71,	// (0x00029433) small_volume_slider_vertical_pane_ParamLimits

0xeecd,	// (0x0002f58f) cell_graphic2_pane_ParamLimits

0xef28,	// (0x0002f5ea) bg_button_pane_cp10_ParamLimits

0xef28,	// (0x0002f5ea) bg_button_pane_cp10

0xef3b,	// (0x0002f5fd) bg_button_pane_cp11_ParamLimits

0xef3b,	// (0x0002f5fd) bg_button_pane_cp11

0xef4e,	// (0x0002f610) graphic2_pages_pane_g1_ParamLimits

0xef4e,	// (0x0002f610) graphic2_pages_pane_g1

0xef69,	// (0x0002f62b) graphic2_pages_pane_g2_ParamLimits

0xef69,	// (0x0002f62b) graphic2_pages_pane_g2

0x0001,

0xfd74,	// (0x00030436) graphic2_pages_pane_g_ParamLimits

0xfd74,	// (0x00030436) graphic2_pages_pane_g

0xef81,	// (0x0002f643) graphic2_pages_pane_t1_ParamLimits

0xef81,	// (0x0002f643) graphic2_pages_pane_t1

0xef99,	// (0x0002f65b) cell_graphic2_control_pane_ParamLimits

0xef99,	// (0x0002f65b) cell_graphic2_control_pane

0xefcb,	// (0x0002f68d) cell_graphic2_pane_g1_ParamLimits

0xefcb,	// (0x0002f68d) cell_graphic2_pane_g1

0xe152,	// (0x0002e814) cell_graphic2_pane_g2_ParamLimits

0xe152,	// (0x0002e814) cell_graphic2_pane_g2

0xefd8,	// (0x0002f69a) cell_graphic2_pane_g3_ParamLimits

0xefd8,	// (0x0002f69a) cell_graphic2_pane_g3

0xe15f,	// (0x0002e821) cell_graphic2_pane_g4_ParamLimits

0xe15f,	// (0x0002e821) cell_graphic2_pane_g4

0xefe5,	// (0x0002f6a7) cell_graphic2_pane_g5_ParamLimits

0xefe5,	// (0x0002f6a7) cell_graphic2_pane_g5

0x0004,

0xfd79,	// (0x0003043b) cell_graphic2_pane_g_ParamLimits

0xfd79,	// (0x0003043b) cell_graphic2_pane_g

0xf002,	// (0x0002f6c4) cell_graphic2_pane_t1_ParamLimits

0xf002,	// (0x0002f6c4) cell_graphic2_pane_t1

0x5d20,	// (0x000263e2) grid_highlight_pane_cp11_ParamLimits

0x5d20,	// (0x000263e2) grid_highlight_pane_cp11

0x3514,	// (0x00023bd6) bg_button_pane_cp05

0xf04c,	// (0x0002f70e) cell_graphic2_control_pane_g1

0x7664,	// (0x00027d26) bg_touch_area_indi_pane_g1

0x989f,	// (0x00029f61) aid_cmod_rocker_key_size

0x98a9,	// (0x00029f6b) aid_cmode_itu_key_size

0x98b3,	// (0x00029f75) main_cmode_video_pane

0x98bd,	// (0x00029f7f) main_comp_mode_itu_pane

0x98c9,	// (0x00029f8b) main_comp_mode_rocker_pane

0x98d5,	// (0x00029f97) cell_cmode_rocker_pane_ParamLimits

0x98d5,	// (0x00029f97) cell_cmode_rocker_pane

0x98e7,	// (0x00029fa9) cell_cmode_itu_pane_ParamLimits

0x98e7,	// (0x00029fa9) cell_cmode_itu_pane

0x3b18,	// (0x000241da) bg_button_pane_cp06_ParamLimits

0x3b18,	// (0x000241da) bg_button_pane_cp06

0x78e2,	// (0x00027fa4) cell_cmode_rocker_pane_g1_ParamLimits

0x78e2,	// (0x00027fa4) cell_cmode_rocker_pane_g1

0x8e15,	// (0x000294d7) cell_cmode_rocker_pane_g2_ParamLimits

0x8e15,	// (0x000294d7) cell_cmode_rocker_pane_g2

0x0001,

0xfd89,	// (0x0003044b) cell_cmode_rocker_pane_g_ParamLimits

0xfd89,	// (0x0003044b) cell_cmode_rocker_pane_g

0xe3cd,	// (0x0002ea8f) bg_button_pane_cp07

0x98fc,	// (0x00029fbe) cell_cmode_itu_pane_g1

0x9905,	// (0x00029fc7) cell_cmode_itu_pane_t1

0x9913,	// (0x00029fd5) cell_cmode_itu_pane_t2

0x0001,

0xfd8e,	// (0x00030450) cell_cmode_itu_pane_t

0x9038,	// (0x000296fa) aid_touch_ctrl_left

0x9040,	// (0x00029702) aid_touch_ctrl_right

0xe3cd,	// (0x0002ea8f) compa_mode_pane

0xf070,	// (0x0002f732) aid_cmod_rocker_key_size_cp

0xf07a,	// (0x0002f73c) aid_cmode_itu_key_size_cp

0x9935,	// (0x00029ff7) compa_mode_pane_g1

0x993d,	// (0x00029fff) compa_mode_pane_g2

0x9945,	// (0x0002a007) compa_mode_pane_g3

0x0002,

0xfd93,	// (0x00030455) compa_mode_pane_g

0xf084,	// (0x0002f746) main_comp_mode_itu_pane_cp

0xf08c,	// (0x0002f74e) main_comp_mode_rocker_pane_cp

0xf094,	// (0x0002f756) cell_cmode_itu_pane_cp_ParamLimits

0xf094,	// (0x0002f756) cell_cmode_itu_pane_cp

0xf0a9,	// (0x0002f76b) cell_cmode_rocker_pane_cp_ParamLimits

0xf0a9,	// (0x0002f76b) cell_cmode_rocker_pane_cp

0x3b18,	// (0x000241da) bg_button_pane_cp06_cp_ParamLimits

0x3b18,	// (0x000241da) bg_button_pane_cp06_cp

0x78e2,	// (0x00027fa4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x78e2,	// (0x00027fa4) cell_cmode_rocker_pane_g1_cp

0x7664,	// (0x00027d26) cell_cmode_rocker_pane_g2_cp

0xe3cd,	// (0x0002ea8f) bg_button_pane_cp07_cp

0xf0bb,	// (0x0002f77d) cell_cmode_itu_pane_g1_cp

0xf0c4,	// (0x0002f786) cell_cmode_itu_pane_t1_cp

0xf0c4,	// (0x0002f786) cell_cmode_itu_pane_t2_cp

0xddb6,	// (0x0002e478) settings_code_pane_cp2

0x328b,	// (0x0002394d) bg_popup_window_pane_cp3_ParamLimits

0x3714,	// (0x00023dd6) heading_pane_cp3_ParamLimits

0x3723,	// (0x00023de5) listscroll_popup_graphic_pane_ParamLimits

0x21f6,	// (0x000228b8) fep_hwr_aid_pane_ParamLimits

0x25bf,	// (0x00022c81) aid_touch_sctrl_top_ParamLimits

0x25cc,	// (0x00022c8e) sctrl_sk_top_pane_g1_ParamLimits

0x78e2,	// (0x00027fa4) sctrl_sk_top_pane_g2_ParamLimits

0xfcc9,	// (0x0003038b) sctrl_sk_top_pane_g_ParamLimits

0x25d9,	// (0x00022c9b) sctrl_sk_top_pane_t1_ParamLimits

0x25bf,	// (0x00022c81) aid_touch_sctrl_bottom_ParamLimits

0x25d9,	// (0x00022c9b) sctrl_sk_bottom_pane_t1_ParamLimits

0x8f81,	// (0x00029643) aid_area_touch_clock

0xce52,	// (0x0002d514) aid_vkb2_area_top_pane_cell_ParamLimits

0xce52,	// (0x0002d514) aid_vkb2_area_top_pane_cell

0xcefd,	// (0x0002d5bf) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcefd,	// (0x0002d5bf) aid_vkb2_area_bottom_pane_cell

0x94f0,	// (0x00029bb2) popup_char_count_window

0x9992,	// (0x0002a054) popup_char_count_window_g1

0x999b,	// (0x0002a05d) popup_char_count_window_g2

0x99a4,	// (0x0002a066) popup_char_count_window_g3

0x0002,

0xfd9a,	// (0x0003045c) popup_char_count_window_g

0x99ad,	// (0x0002a06f) popup_char_count_window_t1

0x267a,	// (0x00022d3c) popup_fep_char_preview_window_ParamLimits

0x267a,	// (0x00022d3c) popup_fep_char_preview_window

0xce72,	// (0x0002d534) vkb2_top_candi_pane_ParamLimits

0xce72,	// (0x0002d534) vkb2_top_candi_pane

0xf0d2,	// (0x0002f794) cell_vkb2_top_candi_pane_ParamLimits

0xf0d2,	// (0x0002f794) cell_vkb2_top_candi_pane

0x56a0,	// (0x00025d62) bg_popup_fep_char_preview_window_ParamLimits

0x56a0,	// (0x00025d62) bg_popup_fep_char_preview_window

0x2be2,	// (0x000232a4) popup_fep_char_preview_window_t1_ParamLimits

0x2be2,	// (0x000232a4) popup_fep_char_preview_window_t1

0x9a08,	// (0x0002a0ca) bg_popup_fep_char_preview_window_g1

0x9a10,	// (0x0002a0d2) bg_popup_fep_char_preview_window_g2

0x9a18,	// (0x0002a0da) bg_popup_fep_char_preview_window_g3

0x9a20,	// (0x0002a0e2) bg_popup_fep_char_preview_window_g4

0x9a28,	// (0x0002a0ea) bg_popup_fep_char_preview_window_g5

0x9a30,	// (0x0002a0f2) bg_popup_fep_char_preview_window_g6

0x9a38,	// (0x0002a0fa) bg_popup_fep_char_preview_window_g7

0x9a40,	// (0x0002a102) bg_popup_fep_char_preview_window_g8

0x9a48,	// (0x0002a10a) bg_popup_fep_char_preview_window_g9

0x0009,

0xfda1,	// (0x00030463) bg_popup_fep_char_preview_window_g

0x78e2,	// (0x00027fa4) cell_vkb2_top_candi_pane_g1_ParamLimits

0x78e2,	// (0x00027fa4) cell_vkb2_top_candi_pane_g1

0x7d02,	// (0x000283c4) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7d02,	// (0x000283c4) cell_vkb2_top_candi_pane_g2

0x7d23,	// (0x000283e5) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7d23,	// (0x000283e5) cell_vkb2_top_candi_pane_g3

0x2c24,	// (0x000232e6) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2c24,	// (0x000232e6) cell_vkb2_top_candi_pane_g4

0x9844,	// (0x00029f06) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9844,	// (0x00029f06) cell_vkb2_top_candi_pane_g5

0x8e15,	// (0x000294d7) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8e15,	// (0x000294d7) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdb6,	// (0x00030478) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdb6,	// (0x00030478) cell_vkb2_top_candi_pane_g

0x2c45,	// (0x00023307) cell_vkb2_top_candi_pane_t1

0x2056,	// (0x00022718) aid_size_touch_slider_mark_ParamLimits

0x2056,	// (0x00022718) aid_size_touch_slider_mark

0xede4,	// (0x0002f4a6) grid_graphic2_catg_pane_ParamLimits

0xede4,	// (0x0002f4a6) grid_graphic2_catg_pane

0xeea0,	// (0x0002f562) popup_grid_graphic2_window_t1_ParamLimits

0xeea0,	// (0x0002f562) popup_grid_graphic2_window_t1

0xeeb6,	// (0x0002f578) popup_grid_graphic2_window_t2_ParamLimits

0xeeb6,	// (0x0002f578) popup_grid_graphic2_window_t2

0x0001,

0xfd6f,	// (0x00030431) popup_grid_graphic2_window_t_ParamLimits

0xfd6f,	// (0x00030431) popup_grid_graphic2_window_t

0x3514,	// (0x00023bd6) bg_button_pane_cp05_ParamLimits

0xf04c,	// (0x0002f70e) cell_graphic2_control_pane_g1_ParamLimits

0xf138,	// (0x0002f7fa) cell_graphic2_catg_pane_ParamLimits

0xf138,	// (0x0002f7fa) cell_graphic2_catg_pane

0xe3cd,	// (0x0002ea8f) bg_button_pane_cp12

0xf14a,	// (0x0002f80c) cell_graphic2_catg_pane_g1

0x8f4d,	// (0x0002960f) cell_tb_ext_pane_t1_ParamLimits

0x2a1c,	// (0x000230de) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2a1c,	// (0x000230de) vkb2_top_cell_right_narrow_pane

0x2a34,	// (0x000230f6) vkb2_top_cell_right_wide_pane_ParamLimits

0x2a34,	// (0x000230f6) vkb2_top_cell_right_wide_pane

0x21e8,	// (0x000228aa) bg_vkb2_func_pane_ParamLimits

0x21e8,	// (0x000228aa) bg_vkb2_func_pane

0x2aa5,	// (0x00023167) vkb2_top_cell_left_pane_g1_ParamLimits

0x21e8,	// (0x000228aa) bg_vkb2_fuc_pane_cp03_ParamLimits

0x21e8,	// (0x000228aa) bg_vkb2_fuc_pane_cp03

0x2b03,	// (0x000231c5) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5019,	// (0x000256db) bg_vkb2_func_pane_g1

0x5021,	// (0x000256e3) bg_vkb2_func_pane_g2

0x5031,	// (0x000256f3) bg_vkb2_func_pane_g3

0x5029,	// (0x000256eb) bg_vkb2_func_pane_g4

0x5039,	// (0x000256fb) bg_vkb2_func_pane_g5

0x5041,	// (0x00025703) bg_vkb2_func_pane_g6

0x5049,	// (0x0002570b) bg_vkb2_func_pane_g7

0x5051,	// (0x00025713) bg_vkb2_func_pane_g8

0x5011,	// (0x000256d3) bg_vkb2_func_pane_g9

0x0008,

0xfdc3,	// (0x00030485) bg_vkb2_func_pane_g

0x21e8,	// (0x000228aa) bg_vkb2_fuc_pane_cp01_ParamLimits

0x21e8,	// (0x000228aa) bg_vkb2_fuc_pane_cp01

0x2aa5,	// (0x00023167) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2aa5,	// (0x00023167) vkb2_top_cell_right_wide_pane_g1

0x21e8,	// (0x000228aa) bg_vkb2_fuc_pane_cp02_ParamLimits

0x21e8,	// (0x000228aa) bg_vkb2_fuc_pane_cp02

0x2b03,	// (0x000231c5) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2b03,	// (0x000231c5) vkb2_top_cell_right_narrow_pane_g1

0xe65d,	// (0x0002ed1f) aid_touch_area_decrease_ParamLimits

0xe65d,	// (0x0002ed1f) aid_touch_area_decrease

0xe697,	// (0x0002ed59) aid_touch_area_increase_ParamLimits

0xe697,	// (0x0002ed59) aid_touch_area_increase

0xe6bf,	// (0x0002ed81) aid_touch_area_mute_ParamLimits

0xe6bf,	// (0x0002ed81) aid_touch_area_mute

0xe6e7,	// (0x0002eda9) aid_touch_area_slider_ParamLimits

0xe6e7,	// (0x0002eda9) aid_touch_area_slider

0xe727,	// (0x0002ede9) popup_slider_window_g4_ParamLimits

0xe727,	// (0x0002ede9) popup_slider_window_g4

0xe74f,	// (0x0002ee11) popup_slider_window_g5_ParamLimits

0xe74f,	// (0x0002ee11) popup_slider_window_g5

0xe783,	// (0x0002ee45) popup_slider_window_g6_ParamLimits

0xe783,	// (0x0002ee45) popup_slider_window_g6

0x8d2b,	// (0x000293ed) popup_slider_window_t2_ParamLimits

0x8d2b,	// (0x000293ed) popup_slider_window_t2

0x0001,

0xfcbd,	// (0x0003037f) popup_slider_window_t_ParamLimits

0xfcbd,	// (0x0003037f) popup_slider_window_t

0xe79f,	// (0x0002ee61) slider_pane_ParamLimits

0xe79f,	// (0x0002ee61) slider_pane

0x9a6b,	// (0x0002a12d) slider_pane_g1_ParamLimits

0x9a6b,	// (0x0002a12d) slider_pane_g1

0x9a7f,	// (0x0002a141) slider_pane_g2_ParamLimits

0x9a7f,	// (0x0002a141) slider_pane_g2

0x9a95,	// (0x0002a157) slider_pane_g3_ParamLimits

0x9a95,	// (0x0002a157) slider_pane_g3

0x0003,

0xfdd6,	// (0x00030498) slider_pane_g_ParamLimits

0xfdd6,	// (0x00030498) slider_pane_g

0xcb32,	// (0x0002d1f4) popup_tb_float_extension_window_ParamLimits

0xcb32,	// (0x0002d1f4) popup_tb_float_extension_window

0x9ac1,	// (0x0002a183) aid_size_cell_tb_float_ext

0xe3cd,	// (0x0002ea8f) bg_popup_sub_window_cp28

0x9acd,	// (0x0002a18f) grid_tb_float_ext_pane

0x9ad7,	// (0x0002a199) cell_tb_float_ext_pane_ParamLimits

0x9ad7,	// (0x0002a199) cell_tb_float_ext_pane

0x9af1,	// (0x0002a1b3) cell_tb_float_ext_pane_g1

0x9afa,	// (0x0002a1bc) grid_highlight_pane_cp12

0xcc5b,	// (0x0002d31d) cell_last_hwr_side_pane_ParamLimits

0xcc5b,	// (0x0002d31d) cell_last_hwr_side_pane

0x7664,	// (0x00027d26) cell_last_hwr_side_pane_g1

0x9b03,	// (0x0002a1c5) cell_last_hwr_side_pane_g2

0x0001,

0xfddf,	// (0x000304a1) cell_last_hwr_side_pane_g

0xcfd9,	// (0x0002d69b) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcfd9,	// (0x0002d69b) vkb2_area_bottom_space_btn_pane

0x78e2,	// (0x00027fa4) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x95a5,	// (0x00029c67) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2c45,	// (0x00023307) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2c64,	// (0x00023326) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2c64,	// (0x00023326) vkb2_area_bottom_space_btn_pane_g1

0x2c9e,	// (0x00023360) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2c9e,	// (0x00023360) vkb2_area_bottom_space_btn_pane_g2

0x2cd4,	// (0x00023396) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2cd4,	// (0x00023396) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde4,	// (0x000304a6) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde4,	// (0x000304a6) vkb2_area_bottom_space_btn_pane_g

0x229d,	// (0x0002295f) cel_fep_hwr_func_pane_ParamLimits

0x229d,	// (0x0002295f) cel_fep_hwr_func_pane

0xcc30,	// (0x0002d2f2) cell_hwr_side_button_pane_ParamLimits

0xcc30,	// (0x0002d2f2) cell_hwr_side_button_pane

0x8f81,	// (0x00029643) aid_area_touch_clock_ParamLimits

0x3514,	// (0x00023bd6) bg_uniindi_top_pane_ParamLimits

0x8f93,	// (0x00029655) uniindi_top_pane_g1_ParamLimits

0x8fa9,	// (0x0002966b) uniindi_top_pane_g2_ParamLimits

0x8fb5,	// (0x00029677) uniindi_top_pane_g3_ParamLimits

0x8fc6,	// (0x00029688) uniindi_top_pane_g4_ParamLimits

0xfcf5,	// (0x000303b7) uniindi_top_pane_g_ParamLimits

0x8fd3,	// (0x00029695) uniindi_top_pane_t1_ParamLimits

0x3514,	// (0x00023bd6) bg_vkb2_func_pane_cp01_ParamLimits

0x3514,	// (0x00023bd6) bg_vkb2_func_pane_cp01

0x9b0c,	// (0x0002a1ce) cel_fep_hwr_func_pane_g1_ParamLimits

0x9b0c,	// (0x0002a1ce) cel_fep_hwr_func_pane_g1

0x3514,	// (0x00023bd6) bg_vkb2_func_pane_cp02_ParamLimits

0x3514,	// (0x00023bd6) bg_vkb2_func_pane_cp02

0x9b0c,	// (0x0002a1ce) cell_hwr_side_button_pane_g1_ParamLimits

0x9b0c,	// (0x0002a1ce) cell_hwr_side_button_pane_g1

0x4e92,	// (0x00025554) status_pane_g4_ParamLimits

0x4e92,	// (0x00025554) status_pane_g4

0x4eac,	// (0x0002556e) status_pane_t1

0x73a9,	// (0x00027a6b) form2_midp_gauge_slider_cont_pane

0x73b1,	// (0x00027a73) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe09c,	// (0x0002e75e) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe0ae,	// (0x0002e770) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac1,	// (0x00030183) form2_midp_gauge_slider_pane_t_ParamLimits

0x73e7,	// (0x00027aa9) form2_midp_slider_pane_ParamLimits

0x263a,	// (0x00022cfc) aid_size_cell_func_vkb2_ParamLimits

0x263a,	// (0x00022cfc) aid_size_cell_func_vkb2

0x9aad,	// (0x0002a16f) slider_pane_g4_ParamLimits

0x9aad,	// (0x0002a16f) slider_pane_g4

0xd042,	// (0x0002d704) form2_midp_gauge_slider_pane_t2_cp01

0xd050,	// (0x0002d712) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd050,	// (0x0002d712) form2_midp_gauge_slider_pane_t3_cp01

0x2d49,	// (0x0002340b) form2_midp_slider_pane_cp01

0xe3cd,	// (0x0002ea8f) navi_smil_pane

0x9b45,	// (0x0002a207) navi_smil_pane_g1

0x9b4d,	// (0x0002a20f) navi_smil_pane_t1

0x9b1a,	// (0x0002a1dc) form2_midp_slider_pane_g1

0x9b23,	// (0x0002a1e5) form2_midp_slider_pane_g2

0x9b2b,	// (0x0002a1ed) form2_midp_slider_pane_g3

0x9b1a,	// (0x0002a1dc) form2_midp_slider_pane_g4

0xf153,	// (0x0002f815) form2_midp_slider_pane_g5

0x0004,

0xfded,	// (0x000304af) form2_midp_slider_pane_g

0x2d0e,	// (0x000233d0) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2d0e,	// (0x000233d0) vkb2_area_bottom_space_btn_pane_g4

0xd79a,	// (0x0002de5c) lc0_navi_pane_ParamLimits

0xd79a,	// (0x0002de5c) lc0_navi_pane

0xd804,	// (0x0002dec6) lc0_stat_indi_pane_ParamLimits

0xd804,	// (0x0002dec6) lc0_stat_indi_pane

0xd819,	// (0x0002dedb) ls0_title_pane_ParamLimits

0xd819,	// (0x0002dedb) ls0_title_pane

0x3b18,	// (0x000241da) bg_popup_sub_pane_cp14_ParamLimits

0x8f68,	// (0x0002962a) list_uniindi_pane_ParamLimits

0x8f74,	// (0x00029636) uniindi_top_pane_ParamLimits

0x9010,	// (0x000296d2) list_single_uniindi_pane_g1_ParamLimits

0x9023,	// (0x000296e5) list_single_uniindi_pane_t1_ParamLimits

0xd06d,	// (0x0002d72f) lc0_stat_clock_pane_ParamLimits

0xd06d,	// (0x0002d72f) lc0_stat_clock_pane

0xf15e,	// (0x0002f820) lc0_stat_indi_pane_g1_ParamLimits

0xf15e,	// (0x0002f820) lc0_stat_indi_pane_g1

0xf16b,	// (0x0002f82d) lc0_stat_indi_pane_g2_ParamLimits

0xf16b,	// (0x0002f82d) lc0_stat_indi_pane_g2

0x0001,

0xfdf8,	// (0x000304ba) lc0_stat_indi_pane_g_ParamLimits

0xfdf8,	// (0x000304ba) lc0_stat_indi_pane_g

0xd07a,	// (0x0002d73c) lc0_uni_indicator_pane_ParamLimits

0xd07a,	// (0x0002d73c) lc0_uni_indicator_pane

0xf178,	// (0x0002f83a) ls0_title_pane_g1_ParamLimits

0xf178,	// (0x0002f83a) ls0_title_pane_g1

0xf18c,	// (0x0002f84e) ls0_title_pane_t1_ParamLimits

0xf18c,	// (0x0002f84e) ls0_title_pane_t1

0xd087,	// (0x0002d749) lc0_uni_indicator_pane_g1_ParamLimits

0xd087,	// (0x0002d749) lc0_uni_indicator_pane_g1

0x9bbf,	// (0x0002a281) lc0_stat_clock_pane_t1

0xe3cd,	// (0x0002ea8f) main_ai5_pane

0x9bcd,	// (0x0002a28f) ai5_sk_pane_ParamLimits

0x9bcd,	// (0x0002a28f) ai5_sk_pane

0xf1ba,	// (0x0002f87c) cell_ai5_widget_pane_ParamLimits

0xf1ba,	// (0x0002f87c) cell_ai5_widget_pane

0x9ca3,	// (0x0002a365) aid_size_cell_widget_grid

0x9cb9,	// (0x0002a37b) bg_ai5_widget_pane_ParamLimits

0x9cb9,	// (0x0002a37b) bg_ai5_widget_pane

0x9d35,	// (0x0002a3f7) cell_ai5_widget_pane_g2

0x9d49,	// (0x0002a40b) cell_ai5_widget_pane_g3

0x9d63,	// (0x0002a425) cell_ai5_widget_pane_g4

0x9d73,	// (0x0002a435) cell_ai5_widget_pane_g5

0x9d83,	// (0x0002a445) cell_ai5_widget_pane_g6

0x9d8f,	// (0x0002a451) cell_ai5_widget_pane_g7

0x9dfb,	// (0x0002a4bd) cell_ai5_widget_pane_t1_ParamLimits

0x9dfb,	// (0x0002a4bd) cell_ai5_widget_pane_t1

0x9e18,	// (0x0002a4da) cell_ai5_widget_pane_t2_ParamLimits

0x9e18,	// (0x0002a4da) cell_ai5_widget_pane_t2

0x9e30,	// (0x0002a4f2) cell_ai5_widget_pane_t3_ParamLimits

0x9e30,	// (0x0002a4f2) cell_ai5_widget_pane_t3

0x9e48,	// (0x0002a50a) cell_ai5_widget_pane_t4_ParamLimits

0x9e48,	// (0x0002a50a) cell_ai5_widget_pane_t4

0x9e6e,	// (0x0002a530) cell_ai5_widget_pane_t5_ParamLimits

0x9e6e,	// (0x0002a530) cell_ai5_widget_pane_t5

0x9e8d,	// (0x0002a54f) cell_ai5_widget_pane_t6_ParamLimits

0x9e8d,	// (0x0002a54f) cell_ai5_widget_pane_t6

0x9e9f,	// (0x0002a561) cell_ai5_widget_pane_t7_ParamLimits

0x9e9f,	// (0x0002a561) cell_ai5_widget_pane_t7

0x9ebe,	// (0x0002a580) cell_ai5_widget_pane_t8_ParamLimits

0x9ebe,	// (0x0002a580) cell_ai5_widget_pane_t8

0x000b,

0xfe18,	// (0x000304da) cell_ai5_widget_pane_t_ParamLimits

0xfe18,	// (0x000304da) cell_ai5_widget_pane_t

0x9f42,	// (0x0002a604) grid_ai5_widget_pane

0x3b18,	// (0x000241da) highlight_cell_ai5_widget_pane_ParamLimits

0x3b18,	// (0x000241da) highlight_cell_ai5_widget_pane

0xf226,	// (0x0002f8e8) ai5_sk_left_pane

0xf230,	// (0x0002f8f2) ai5_sk_middle_pane

0xf23a,	// (0x0002f8fc) ai5_sk_right_pane

0x9f77,	// (0x0002a639) bg_ai5_widget_pane_g1_ParamLimits

0x9f77,	// (0x0002a639) bg_ai5_widget_pane_g1

0x9f83,	// (0x0002a645) bg_ai5_widget_pane_g2_ParamLimits

0x9f83,	// (0x0002a645) bg_ai5_widget_pane_g2

0x9f8f,	// (0x0002a651) bg_ai5_widget_pane_g3_ParamLimits

0x9f8f,	// (0x0002a651) bg_ai5_widget_pane_g3

0x9f9b,	// (0x0002a65d) bg_ai5_widget_pane_g4_ParamLimits

0x9f9b,	// (0x0002a65d) bg_ai5_widget_pane_g4

0x9fa7,	// (0x0002a669) bg_ai5_widget_pane_g5_ParamLimits

0x9fa7,	// (0x0002a669) bg_ai5_widget_pane_g5

0x9fb3,	// (0x0002a675) bg_ai5_widget_pane_g6_ParamLimits

0x9fb3,	// (0x0002a675) bg_ai5_widget_pane_g6

0x9fbf,	// (0x0002a681) bg_ai5_widget_pane_g7_ParamLimits

0x9fbf,	// (0x0002a681) bg_ai5_widget_pane_g7

0x9fcb,	// (0x0002a68d) bg_ai5_widget_pane_g8_ParamLimits

0x9fcb,	// (0x0002a68d) bg_ai5_widget_pane_g8

0x9fd7,	// (0x0002a699) bg_ai5_widget_pane_g9_ParamLimits

0x9fd7,	// (0x0002a699) bg_ai5_widget_pane_g9

0x0008,

0xfe31,	// (0x000304f3) bg_ai5_widget_pane_g_ParamLimits

0xfe31,	// (0x000304f3) bg_ai5_widget_pane_g

0xa009,	// (0x0002a6cb) cell_shortcut_ai5_widget_pane_ParamLimits

0xa009,	// (0x0002a6cb) cell_shortcut_ai5_widget_pane

0x47c3,	// (0x00024e85) bg_cell_shortcut_ai5_widget_pane

0xa01a,	// (0x0002a6dc) cell_grid_ai5_widget_pane_g1

0x47c3,	// (0x00024e85) highlight_cell_shortcut_ai5_widget_pane

0x5021,	// (0x000256e3) ai5_sk_left_pane_g1

0xa023,	// (0x0002a6e5) ai5_sk_left_pane_g2

0xa02b,	// (0x0002a6ed) ai5_sk_left_pane_g3

0xa033,	// (0x0002a6f5) ai5_sk_left_pane_g4

0x0003,

0xfe44,	// (0x00030506) ai5_sk_left_pane_g

0xa03b,	// (0x0002a6fd) ai5_sk_left_pane_t1

0x5019,	// (0x000256db) ai5_sk_right_pane_g1

0xa049,	// (0x0002a70b) ai5_sk_right_pane_g2

0xa051,	// (0x0002a713) ai5_sk_right_pane_g3

0xa059,	// (0x0002a71b) ai5_sk_right_pane_g4

0x0003,

0xfe4d,	// (0x0003050f) ai5_sk_right_pane_g

0xa061,	// (0x0002a723) ai5_sk_right_pane_t1

0x5019,	// (0x000256db) ai5_sk_middle_pane_g1

0x5021,	// (0x000256e3) ai5_sk_middle_pane_g2

0x5039,	// (0x000256fb) ai5_sk_middle_pane_g3

0xa051,	// (0x0002a713) ai5_sk_middle_pane_g4

0xa02b,	// (0x0002a6ed) ai5_sk_middle_pane_g5

0xa06f,	// (0x0002a731) ai5_sk_middle_pane_g6

0xf244,	// (0x0002f906) ai5_sk_middle_pane_g7

0x0006,

0xfe56,	// (0x00030518) ai5_sk_middle_pane_g

0xd686,	// (0x0002dd48) aid_touch_area_size_lc0_ParamLimits

0xd686,	// (0x0002dd48) aid_touch_area_size_lc0

0x2428,	// (0x00022aea) cell_hwr_candidate_pane_t1_ParamLimits

0x4b63,	// (0x00025225) aid_touch_navi_pane

0xd912,	// (0x0002dfd4) status_dt_navi_pane_ParamLimits

0xd912,	// (0x0002dfd4) status_dt_navi_pane

0xd92a,	// (0x0002dfec) status_dt_sta_pane_ParamLimits

0xd92a,	// (0x0002dfec) status_dt_sta_pane

0xf24c,	// (0x0002f90e) dt_sta_controll_pane

0xf259,	// (0x0002f91b) dt_sta_indi_pane

0xf266,	// (0x0002f928) dt_sta_title_pane

0x3514,	// (0x00023bd6) bg_dt_sta_indi_pane_ParamLimits

0x3514,	// (0x00023bd6) bg_dt_sta_indi_pane

0xf278,	// (0x0002f93a) dt_sta_battery_pane

0xf280,	// (0x0002f942) dt_sta_indi_pane_g1

0xa0c1,	// (0x0002a783) dt_sta_indi_pane_g2

0xa0ca,	// (0x0002a78c) dt_sta_indi_pane_g3

0x0002,

0xfe65,	// (0x00030527) dt_sta_indi_pane_g

0xa0d3,	// (0x0002a795) dt_sta_signal_pane

0x3b18,	// (0x000241da) bg_dt_sta_title_pane_ParamLimits

0x3b18,	// (0x000241da) bg_dt_sta_title_pane

0xa0dc,	// (0x0002a79e) dt_sta_title_pane_g1

0xa0e4,	// (0x0002a7a6) dt_sta_title_pane_t1_ParamLimits

0xa0e4,	// (0x0002a7a6) dt_sta_title_pane_t1

0xe3cd,	// (0x0002ea8f) bg_dt_sta_control_pane

0xf289,	// (0x0002f94b) dt_sta_controll_pane_g1

0xa102,	// (0x0002a7c4) bg_dt_sta_title_pane_g1

0xa10b,	// (0x0002a7cd) bg_dt_sta_title_pane_g2

0xa114,	// (0x0002a7d6) bg_dt_sta_title_pane_g3

0x0002,

0xfe6c,	// (0x0003052e) bg_dt_sta_title_pane_g

0x7664,	// (0x00027d26) bg_dt_sta_indi_pane_g1

0xa11d,	// (0x0002a7df) dt_sta_signal_pane_g1

0xa125,	// (0x0002a7e7) dt_sta_signal_pane_g2

0x0001,

0xfe73,	// (0x00030535) dt_sta_signal_pane_g

0xa12d,	// (0x0002a7ef) dt_sta_battery_pane_g1

0xa136,	// (0x0002a7f8) dt_sta_battery_pane_t1

0x7664,	// (0x00027d26) bg_dt_sta_control_pane_g1

0x42bf,	// (0x00024981) fep_china_uni_eep_pane

0x42c7,	// (0x00024989) fep_china_uni_entry_pane_ParamLimits

0x42d7,	// (0x00024999) popup_fep_china_uni_window_g1_ParamLimits

0x42e7,	// (0x000249a9) popup_fep_china_uni_window_g2_ParamLimits

0x42e7,	// (0x000249a9) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x0002fdba) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x0002fdba) popup_fep_china_uni_window_g

0xa145,	// (0x0002a807) fep_china_uni_eep_pane_g1

0xa14d,	// (0x0002a80f) fep_china_uni_eep_pane_t1

0x9b3c,	// (0x0002a1fe) aid_touch_area_size_smil_player

0x4cb9,	// (0x0002537b) lc0_clock_pane

0x4ea0,	// (0x00025562) status_pane_g5_ParamLimits

0x4ea0,	// (0x00025562) status_pane_g5

0xc6b4,	// (0x0002cd76) popup_keymap_window

0x4e5e,	// (0x00025520) status_icon_pane

0x9d49,	// (0x0002a40b) cell_ai5_widget_pane_g3_ParamLimits

0x9d63,	// (0x0002a425) cell_ai5_widget_pane_g4_ParamLimits

0x9d73,	// (0x0002a435) cell_ai5_widget_pane_g5_ParamLimits

0x9d9b,	// (0x0002a45d) cell_ai5_widget_pane_g8_ParamLimits

0x9d9b,	// (0x0002a45d) cell_ai5_widget_pane_g8

0x9daf,	// (0x0002a471) cell_ai5_widget_pane_g9_ParamLimits

0x9daf,	// (0x0002a471) cell_ai5_widget_pane_g9

0x9dc3,	// (0x0002a485) cell_ai5_widget_pane_g10_ParamLimits

0x9dc3,	// (0x0002a485) cell_ai5_widget_pane_g10

0xa15c,	// (0x0002a81e) status_icon_pane_g1

0xe3cd,	// (0x0002ea8f) bg_popup_sub_pane_cp13

0xa164,	// (0x0002a826) popup_keymap_window_t1

0xd61c,	// (0x0002dcde) control_pane_g6_ParamLimits

0xd61c,	// (0x0002dcde) control_pane_g6

0xd629,	// (0x0002dceb) control_pane_g7_ParamLimits

0xd629,	// (0x0002dceb) control_pane_g7

0xd636,	// (0x0002dcf8) control_pane_g8_ParamLimits

0xd636,	// (0x0002dcf8) control_pane_g8

0xf24c,	// (0x0002f90e) dt_sta_controll_pane_ParamLimits

0xf259,	// (0x0002f91b) dt_sta_indi_pane_ParamLimits

0xf266,	// (0x0002f928) dt_sta_title_pane_ParamLimits

0x3a50,	// (0x00024112) aid_size_touch_scroll_bar_cale

0x0fbd,	// (0x0002167f) popup_discreet_window_ParamLimits

0x0fbd,	// (0x0002167f) popup_discreet_window

0xbf27,	// (0x0002c5e9) popup_sk_window

0x56a0,	// (0x00025d62) bg_popup_sub_pane_cp28_ParamLimits

0x56a0,	// (0x00025d62) bg_popup_sub_pane_cp28

0xa172,	// (0x0002a834) popup_discreet_window_g1_ParamLimits

0xa172,	// (0x0002a834) popup_discreet_window_g1

0xa192,	// (0x0002a854) popup_discreet_window_t1_ParamLimits

0xa192,	// (0x0002a854) popup_discreet_window_t1

0xa1b0,	// (0x0002a872) popup_discreet_window_t2_ParamLimits

0xa1b0,	// (0x0002a872) popup_discreet_window_t2

0x0002,

0xfe78,	// (0x0003053a) popup_discreet_window_t_ParamLimits

0xfe78,	// (0x0003053a) popup_discreet_window_t

0x2d80,	// (0x00023442) popup_sk_window_g1

0x2d8a,	// (0x0002344c) popup_sk_window_g2

0x0001,

0xfe7f,	// (0x00030541) popup_sk_window_g

0x2d92,	// (0x00023454) popup_sk_window_t1

0x2da0,	// (0x00023462) popup_sk_window_t1_copy1

0x9d35,	// (0x0002a3f7) cell_ai5_widget_pane_g2_ParamLimits

0x9ed0,	// (0x0002a592) cell_ai5_widget_pane_t9_ParamLimits

0x9ed0,	// (0x0002a592) cell_ai5_widget_pane_t9

0xe3cd,	// (0x0002ea8f) main_fep_fshwr2_pane

0xd0ae,	// (0x0002d770) aid_fshwr2_btn_pane

0xd0c2,	// (0x0002d784) aid_fshwr2_syb_pane

0xd0d6,	// (0x0002d798) aid_fshwr2_txt_pane

0xd0e6,	// (0x0002d7a8) fshwr2_func_candi_pane

0xd106,	// (0x0002d7c8) fshwr2_hwr_syb_pane

0xd128,	// (0x0002d7ea) fshwr2_icf_pane

0xe3cd,	// (0x0002ea8f) fshwr2_icf_bg_pane

0xd158,	// (0x0002d81a) fshwr2_icf_pane_t1_ParamLimits

0xd158,	// (0x0002d81a) fshwr2_icf_pane_t1

0x41ad,	// (0x0002486f) fshwr2_func_candi_pane_g1

0xf292,	// (0x0002f954) fshwr2_func_candi_row_pane_ParamLimits

0xf292,	// (0x0002f954) fshwr2_func_candi_row_pane

0xd171,	// (0x0002d833) cell_fshwr2_syb_pane_ParamLimits

0xd171,	// (0x0002d833) cell_fshwr2_syb_pane

0x9b0c,	// (0x0002a1ce) fshwr2_hwr_syb_pane_g1_ParamLimits

0x9b0c,	// (0x0002a1ce) fshwr2_hwr_syb_pane_g1

0xe3cd,	// (0x0002ea8f) bg_popup_call_pane_cp01

0xd197,	// (0x0002d859) fshwr2_func_candi_cell_pane_ParamLimits

0xd197,	// (0x0002d859) fshwr2_func_candi_cell_pane

0x5481,	// (0x00025b43) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x5481,	// (0x00025b43) fshwr2_func_candi_cell_bg_pane

0xd1e2,	// (0x0002d8a4) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd1e2,	// (0x0002d8a4) fshwr2_func_candi_cell_pane_g1

0xd219,	// (0x0002d8db) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd219,	// (0x0002d8db) fshwr2_func_candi_cell_pane_t1

0xe3cd,	// (0x0002ea8f) bg_button_pane_cp08

0x4ae7,	// (0x000251a9) cell_fshwr2_syb_bg_pane

0xd234,	// (0x0002d8f6) cell_fshwr2_syb_bg_pane_g1

0xd247,	// (0x0002d909) cell_fshwr2_syb_bg_pane_t1

0x3b18,	// (0x000241da) main_tmo_pane

0xdbe8,	// (0x0002e2aa) uni_indicator_pane_g1_ParamLimits

0xdbfe,	// (0x0002e2c0) uni_indicator_pane_g2_ParamLimits

0xdc14,	// (0x0002e2d6) uni_indicator_pane_g3_ParamLimits

0x61fa,	// (0x000268bc) uni_indicator_pane_g4_ParamLimits

0x61fa,	// (0x000268bc) uni_indicator_pane_g4

0x620e,	// (0x000268d0) uni_indicator_pane_g5_ParamLimits

0x620e,	// (0x000268d0) uni_indicator_pane_g5

0x620e,	// (0x000268d0) uni_indicator_pane_g6_ParamLimits

0x620e,	// (0x000268d0) uni_indicator_pane_g6

0xf8f7,	// (0x0002ffb9) uni_indicator_pane_g_ParamLimits

0xe639,	// (0x0002ecfb) popup_tmo_note_window_ParamLimits

0xe639,	// (0x0002ecfb) popup_tmo_note_window

0x3b18,	// (0x000241da) fshwr2_bg_pane

0xd20a,	// (0x0002d8cc) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd20a,	// (0x0002d8cc) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe84,	// (0x00030546) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe84,	// (0x00030546) fshwr2_func_candi_cell_pane_g

0x7664,	// (0x00027d26) bg_popup_window_pane_cp01

0x2f1f,	// (0x000235e1) bg_popup_window_pane_g1_cp01

0xa229,	// (0x0002a8eb) bg_popup_window_pane_cp22_ParamLimits

0xa229,	// (0x0002a8eb) bg_popup_window_pane_cp22

0xa237,	// (0x0002a8f9) listscroll_tmo_link_pane_ParamLimits

0xa237,	// (0x0002a8f9) listscroll_tmo_link_pane

0xa277,	// (0x0002a939) popup_tmo_note_window_g1_ParamLimits

0xa277,	// (0x0002a939) popup_tmo_note_window_g1

0xa284,	// (0x0002a946) tmo_note_info_pane_ParamLimits

0xa284,	// (0x0002a946) tmo_note_info_pane

0xf2b5,	// (0x0002f977) list_tmo_note_info_pane_g1_ParamLimits

0xf2b5,	// (0x0002f977) list_tmo_note_info_pane_g1

0xa2b5,	// (0x0002a977) list_tmo_note_info_pane_g2_ParamLimits

0xa2b5,	// (0x0002a977) list_tmo_note_info_pane_g2

0x0001,

0xfe89,	// (0x0003054b) list_tmo_note_info_pane_g_ParamLimits

0xfe89,	// (0x0003054b) list_tmo_note_info_pane_g

0xa2d1,	// (0x0002a993) list_tmo_note_info_text_pane_ParamLimits

0xa2d1,	// (0x0002a993) list_tmo_note_info_text_pane

0xa352,	// (0x0002aa14) list_tmo_link_pane

0xa35f,	// (0x0002aa21) scroll_pane_cp20

0xa36c,	// (0x0002aa2e) list_single_tmo_link_pane_ParamLimits

0xa36c,	// (0x0002aa2e) list_single_tmo_link_pane

0xa37c,	// (0x0002aa3e) list_single_tmo_link_pane_t1

0xa38a,	// (0x0002aa4c) list_tmo_note_info_text_pane_t1_ParamLimits

0xa38a,	// (0x0002aa4c) list_tmo_note_info_text_pane_t1

0xd2c1,	// (0x0002d983) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd2c1,	// (0x0002d983) aid_size_touch_scroll_bar_cp01

0xb9cb,	// (0x0002c08d) aid_size_touch_slider_marker

0xbf17,	// (0x0002c5d9) popup_settings_window_ParamLimits

0xbf17,	// (0x0002c5d9) popup_settings_window

0x0370,	// (0x00020a32) popup_candi_list_indi_window

0x4b63,	// (0x00025225) aid_touch_navi_pane_ParamLimits

0x2593,	// (0x00022c55) rs_clock_indi_pane

0x259c,	// (0x00022c5e) sctrl_sk_bottom_pane_ParamLimits

0x25ad,	// (0x00022c6f) sctrl_sk_top_pane_ParamLimits

0x2694,	// (0x00022d56) popup_fep_tooltip_window

0x9ca3,	// (0x0002a365) aid_size_cell_widget_grid_ParamLimits

0x9d20,	// (0x0002a3e2) cell_ai5_widget_pane_g1_ParamLimits

0x9d20,	// (0x0002a3e2) cell_ai5_widget_pane_g1

0x9d83,	// (0x0002a445) cell_ai5_widget_pane_g6_ParamLimits

0x9d8f,	// (0x0002a451) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfdfd,	// (0x000304bf) cell_ai5_widget_pane_g_ParamLimits

0xfdfd,	// (0x000304bf) cell_ai5_widget_pane_g

0x9eff,	// (0x0002a5c1) cell_ai5_widget_pane_t10_ParamLimits

0x9eff,	// (0x0002a5c1) cell_ai5_widget_pane_t10

0x9f42,	// (0x0002a604) grid_ai5_widget_pane_ParamLimits

0x9fe3,	// (0x0002a6a5) cell_contacts_ai5_widget_pane_ParamLimits

0x9fe3,	// (0x0002a6a5) cell_contacts_ai5_widget_pane

0xa1c5,	// (0x0002a887) popup_discreet_window_t3_ParamLimits

0xa1c5,	// (0x0002a887) popup_discreet_window_t3

0xd144,	// (0x0002d806) popup_fshwr2_char_preview_window_ParamLimits

0xd144,	// (0x0002d806) popup_fshwr2_char_preview_window

0xf2cc,	// (0x0002f98e) tmo_note_info_pane_t1

0xf2e1,	// (0x0002f9a3) tmo_note_info_pane_t2

0xf2f8,	// (0x0002f9ba) tmo_note_info_pane_t3

0xa32e,	// (0x0002a9f0) tmo_note_info_pane_t4

0xa340,	// (0x0002aa02) tmo_note_info_pane_t5

0x0004,

0xfe8e,	// (0x00030550) tmo_note_info_pane_t

0xa352,	// (0x0002aa14) list_tmo_link_pane_ParamLimits

0xa35f,	// (0x0002aa21) scroll_pane_cp20_ParamLimits

0xe3cd,	// (0x0002ea8f) bg_popup_fep_char_preview_window_cp01

0xa3a3,	// (0x0002aa65) popup_fshwr2_char_preview_window_t1

0xa3b1,	// (0x0002aa73) popup_candi_list_indi_window_g1

0xa3ba,	// (0x0002aa7c) bg_cell_contacts_ai5_widget_pane

0xa3c6,	// (0x0002aa88) cell_contacts_ai5_widget_pane_g1

0x7d44,	// (0x00028406) cell_contacts_ai5_widget_pane_g2

0xa3db,	// (0x0002aa9d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe99,	// (0x0003055b) cell_contacts_ai5_widget_pane_g

0xa3e7,	// (0x0002aaa9) cell_contacts_ai5_widget_pane_t1

0x3b18,	// (0x000241da) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa45e,	// (0x0002ab20) settings_container_pane

0x47c3,	// (0x00024e85) listscroll_set_pane_copy1

0x6d4e,	// (0x00027410) scroll_pane_cp121_copy1

0x543d,	// (0x00025aff) set_content_pane_copy1

0xa46a,	// (0x0002ab2c) aid_height_set_list_copy1_ParamLimits

0xa46a,	// (0x0002ab2c) aid_height_set_list_copy1

0x6406,	// (0x00026ac8) aid_size_parent_copy1_ParamLimits

0x6406,	// (0x00026ac8) aid_size_parent_copy1

0xa476,	// (0x0002ab38) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa476,	// (0x0002ab38) button_value_adjust_pane_cp6_copy1

0x4ae7,	// (0x000251a9) list_highlight_pane_cp2_copy1_ParamLimits

0x4ae7,	// (0x000251a9) list_highlight_pane_cp2_copy1

0xa48a,	// (0x0002ab4c) list_set_pane_copy1_ParamLimits

0xa48a,	// (0x0002ab4c) list_set_pane_copy1

0xa3f9,	// (0x0002aabb) main_pane_set_t1_copy1_ParamLimits

0xa3f9,	// (0x0002aabb) main_pane_set_t1_copy1

0xa433,	// (0x0002aaf5) main_pane_set_t2_copy1_ParamLimits

0xa433,	// (0x0002aaf5) main_pane_set_t2_copy1

0xa537,	// (0x0002abf9) main_pane_set_t3_copy1

0xa545,	// (0x0002ac07) main_pane_set_t4_copy1

0xa452,	// (0x0002ab14) set_content_pane_g1_copy1_ParamLimits

0xa452,	// (0x0002ab14) set_content_pane_g1_copy1

0xa553,	// (0x0002ac15) setting_code_pane_copy1

0xa55b,	// (0x0002ac1d) setting_slider_graphic_pane_copy1

0xa55b,	// (0x0002ac1d) setting_slider_pane_copy1

0xa563,	// (0x0002ac25) setting_text_pane_copy1

0xa563,	// (0x0002ac25) setting_volume_pane_copy1

0xa553,	// (0x0002ac15) settings_code_pane_cp2_copy1

0xa56b,	// (0x0002ac2d) settings_code_pane_cp_copy1_ParamLimits

0xa56b,	// (0x0002ac2d) settings_code_pane_cp_copy1

0x2f28,	// (0x000235ea) volume_set_pane_copy1

0xa57f,	// (0x0002ac41) volume_set_pane_g10_copy1

0xa587,	// (0x0002ac49) volume_set_pane_g1_copy1

0xa58f,	// (0x0002ac51) volume_set_pane_g2_copy1

0xa597,	// (0x0002ac59) volume_set_pane_g3_copy1

0xa59f,	// (0x0002ac61) volume_set_pane_g4_copy1

0xa5a7,	// (0x0002ac69) volume_set_pane_g5_copy1

0xa5af,	// (0x0002ac71) volume_set_pane_g6_copy1

0xa5b7,	// (0x0002ac79) volume_set_pane_g7_copy1

0xa5bf,	// (0x0002ac81) volume_set_pane_g8_copy1

0xa5c7,	// (0x0002ac89) volume_set_pane_g9_copy1

0x328b,	// (0x0002394d) bg_set_opt_pane_cp_copy1_ParamLimits

0x328b,	// (0x0002394d) bg_set_opt_pane_cp_copy1

0x2f30,	// (0x000235f2) setting_slider_pane_t1_copy1_ParamLimits

0x2f30,	// (0x000235f2) setting_slider_pane_t1_copy1

0x2f4f,	// (0x00023611) setting_slider_pane_t2_copy1_ParamLimits

0x2f4f,	// (0x00023611) setting_slider_pane_t2_copy1

0x2f69,	// (0x0002362b) setting_slider_pane_t3_copy1_ParamLimits

0x2f69,	// (0x0002362b) setting_slider_pane_t3_copy1

0x2f81,	// (0x00023643) slider_set_pane_copy1_ParamLimits

0x2f81,	// (0x00023643) slider_set_pane_copy1

0x3b70,	// (0x00024232) set_opt_bg_pane_g1_copy2

0x3b78,	// (0x0002423a) set_opt_bg_pane_g2_copy2

0xa5cf,	// (0x0002ac91) set_opt_bg_pane_g3_copy2

0x3b88,	// (0x0002424a) set_opt_bg_pane_g4_copy2

0x3b90,	// (0x00024252) set_opt_bg_pane_g5_copy2

0x3b98,	// (0x0002425a) set_opt_bg_pane_g6_copy2

0xa5d9,	// (0x0002ac9b) set_opt_bg_pane_g7_copy2

0xa5e1,	// (0x0002aca3) set_opt_bg_pane_g8_copy2

0xa5eb,	// (0x0002acad) set_opt_bg_pane_g9_copy2

0x2f97,	// (0x00023659) aid_size_touch_slider_mark_copy1_ParamLimits

0x2f97,	// (0x00023659) aid_size_touch_slider_mark_copy1

0xa5f5,	// (0x0002acb7) slider_set_pane_g1_copy1

0x2fab,	// (0x0002366d) slider_set_pane_g2_copy1

0x2076,	// (0x00022738) slider_set_pane_g3_copy1_ParamLimits

0x2076,	// (0x00022738) slider_set_pane_g3_copy1

0x208a,	// (0x0002274c) slider_set_pane_g4_copy1_ParamLimits

0x208a,	// (0x0002274c) slider_set_pane_g4_copy1

0x20a2,	// (0x00022764) slider_set_pane_g5_copy1_ParamLimits

0x20a2,	// (0x00022764) slider_set_pane_g5_copy1

0x2076,	// (0x00022738) slider_set_pane_g6_copy1_ParamLimits

0x2076,	// (0x00022738) slider_set_pane_g6_copy1

0x2fb3,	// (0x00023675) slider_set_pane_g7_copy1_ParamLimits

0x2fb3,	// (0x00023675) slider_set_pane_g7_copy1

0x31ab,	// (0x0002386d) bg_set_opt_pane_cp2_copy1

0xa5fe,	// (0x0002acc0) setting_slider_graphic_pane_g1_copy1

0xa607,	// (0x0002acc9) setting_slider_graphic_pane_t1_copy1

0xa617,	// (0x0002acd9) setting_slider_graphic_pane_t2_copy1

0xa627,	// (0x0002ace9) slider_set_pane_cp_copy1

0xa637,	// (0x0002acf9) input_focus_pane_cp1_copy1

0xa640,	// (0x0002ad02) list_set_text_pane_copy1

0xa648,	// (0x0002ad0a) setting_text_pane_g1_copy1

0xf37a,	// (0x0002fa3c) set_text_pane_t1_copy1

0xa637,	// (0x0002acf9) input_focus_pane_cp2_copy1

0xa648,	// (0x0002ad0a) setting_code_pane_g1_copy1

0xa651,	// (0x0002ad13) setting_code_pane_t1_copy1

0x6b76,	// (0x00027238) list_set_graphic_pane_copy1

0x31ab,	// (0x0002386d) bg_set_opt_pane_cp4_copy1

0x44be,	// (0x00024b80) list_set_graphic_pane_g1_copy1_ParamLimits

0x44be,	// (0x00024b80) list_set_graphic_pane_g1_copy1

0xa65f,	// (0x0002ad21) list_set_graphic_pane_g2_copy1

0x44d6,	// (0x00024b98) list_set_graphic_pane_t1_copy1_ParamLimits

0x44d6,	// (0x00024b98) list_set_graphic_pane_t1_copy1

0x7664,	// (0x00027d26) rs_clock_indi_pane_g1

0xa667,	// (0x0002ad29) rs_clock_indi_pane_t1

0xa675,	// (0x0002ad37) rs_indi_pane

0xa67d,	// (0x0002ad3f) rs_indi_pane_g1

0xa686,	// (0x0002ad48) rs_indi_pane_g2

0xa68f,	// (0x0002ad51) rs_indi_pane_g3

0x0002,

0xfea0,	// (0x00030562) rs_indi_pane_g

0x47c3,	// (0x00024e85) bg_popup_preview_window_pane_cp03

0xa698,	// (0x0002ad5a) popup_fep_tooltip_window_t1

0x82ec,	// (0x000289ae) popup_note2_window_g2_ParamLimits

0x82ec,	// (0x000289ae) popup_note2_window_g2

0x0001,

0xfc2d,	// (0x000302ef) popup_note2_window_g_ParamLimits

0xfc2d,	// (0x000302ef) popup_note2_window_g

0x87e7,	// (0x00028ea9) bg_popup_sub_pane_cp11_ParamLimits

0x87f4,	// (0x00028eb6) cell_ai3_links_pane_g1_ParamLimits

0x880b,	// (0x00028ecd) cell_ai3_links_pane_t1

0xf37a,	// (0x0002fa3c) set_text_pane_t1_copy1_ParamLimits

0xd4a3,	// (0x0002db65) cell_graphic_popup_pane_cp2_ParamLimits

0xd4a3,	// (0x0002db65) cell_graphic_popup_pane_cp2

0xa6a6,	// (0x0002ad68) cell_graphic_popup_pane_g1_cp2

0x3863,	// (0x00023f25) cell_graphic_popup_pane_g2_cp2

0xa6ae,	// (0x0002ad70) cell_graphic_popup_pane_g3_cp2

0xa6b6,	// (0x0002ad78) cell_graphic_popup_pane_t2_cp2

0x3874,	// (0x00023f36) grid_highlight_pane_cp3_cp2

0x3ec8,	// (0x0002458a) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3b18,	// (0x000241da) main_tmo_pane_ParamLimits

0xe62d,	// (0x0002ecef) popup_tmo_big_image_note_window

0x9d0f,	// (0x0002a3d1) cell_ai5_widget_list_pane

0x9d17,	// (0x0002a3d9) cell_ai5_widget_lrg_icon_pane

0xf2cc,	// (0x0002f98e) tmo_note_info_pane_t1_ParamLimits

0xf2e1,	// (0x0002f9a3) tmo_note_info_pane_t2_ParamLimits

0xf2f8,	// (0x0002f9ba) tmo_note_info_pane_t3_ParamLimits

0xa32e,	// (0x0002a9f0) tmo_note_info_pane_t4_ParamLimits

0xa340,	// (0x0002aa02) tmo_note_info_pane_t5_ParamLimits

0xfe8e,	// (0x00030550) tmo_note_info_pane_t_ParamLimits

0xa45e,	// (0x0002ab20) settings_container_pane_ParamLimits

0xa62f,	// (0x0002acf1) indicator_popup_pane_cp5

0xa62f,	// (0x0002acf1) indicator_popup_pane_cp6

0x6b76,	// (0x00027238) list_set_graphic_pane_copy1_ParamLimits

0xe3cd,	// (0x0002ea8f) bg_popup_window_pane_cp23

0xa6c4,	// (0x0002ad86) popup_tmo_big_image_note_window_g1

0xa6ce,	// (0x0002ad90) popup_tmo_big_image_note_window_t1

0xa6de,	// (0x0002ada0) popup_tmo_big_image_note_window_t2

0xa6ee,	// (0x0002adb0) popup_tmo_big_image_note_window_t3

0x0002,

0xfea7,	// (0x00030569) popup_tmo_big_image_note_window_t

0x7664,	// (0x00027d26) cell_ai5_widget_lrg_icon_pane_g1

0xa6fe,	// (0x0002adc0) cell_ai5_widget_lrg_icon_pane_t1

0xa70c,	// (0x0002adce) cell_ai5_widget_list_row_pane_ParamLimits

0xa70c,	// (0x0002adce) cell_ai5_widget_list_row_pane

0xa723,	// (0x0002ade5) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa723,	// (0x0002ade5) cell_ai5_widget_list_row_pane_g1

0xa730,	// (0x0002adf2) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa730,	// (0x0002adf2) cell_ai5_widget_list_row_pane_t1

0xa761,	// (0x0002ae23) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa761,	// (0x0002ae23) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeae,	// (0x00030570) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeae,	// (0x00030570) cell_ai5_widget_list_row_pane_t

0xe3cd,	// (0x0002ea8f) main_fep_vtchi_ss_pane

0xa7b1,	// (0x0002ae73) popup_fep_char_pre_window

0xa7b9,	// (0x0002ae7b) popup_fep_ituss_window

0xf337,	// (0x0002f9f9) popup_fep_vkbss_window

0x4ae7,	// (0x000251a9) grid_vkbss_keypad_pane_ParamLimits

0x4ae7,	// (0x000251a9) grid_vkbss_keypad_pane

0x4ae7,	// (0x000251a9) ituss_keypad_pane

0x2fd5,	// (0x00023697) aid_vkbss_key_offset_ParamLimits

0x2fd5,	// (0x00023697) aid_vkbss_key_offset

0xd25d,	// (0x0002d91f) cell_vkbss_key_pane_ParamLimits

0xd25d,	// (0x0002d91f) cell_vkbss_key_pane

0xa825,	// (0x0002aee7) bg_cell_vkbss_key_g1_ParamLimits

0xa825,	// (0x0002aee7) bg_cell_vkbss_key_g1

0xf344,	// (0x0002fa06) cell_vkbss_key_3p_pane_ParamLimits

0xf344,	// (0x0002fa06) cell_vkbss_key_3p_pane

0xf3e6,	// (0x0002faa8) cell_vkbss_key_g1_ParamLimits

0xf3e6,	// (0x0002faa8) cell_vkbss_key_g1

0xf41c,	// (0x0002fade) cell_vkbss_key_t1_ParamLimits

0xf41c,	// (0x0002fade) cell_vkbss_key_t1

0x3039,	// (0x000236fb) cell_ituss_key_pane_ParamLimits

0x3039,	// (0x000236fb) cell_ituss_key_pane

0xa8f9,	// (0x0002afbb) bg_cell_ituss_key_g1_ParamLimits

0xa8f9,	// (0x0002afbb) bg_cell_ituss_key_g1

0xa905,	// (0x0002afc7) cell_ituss_key_pane_g1_ParamLimits

0xa905,	// (0x0002afc7) cell_ituss_key_pane_g1

0x304a,	// (0x0002370c) cell_ituss_key_pane_g2_ParamLimits

0x304a,	// (0x0002370c) cell_ituss_key_pane_g2

0x0005,

0xfeb5,	// (0x00030577) cell_ituss_key_pane_g_ParamLimits

0xfeb5,	// (0x00030577) cell_ituss_key_pane_g

0x30ce,	// (0x00023790) cell_ituss_key_t1_ParamLimits

0x30ce,	// (0x00023790) cell_ituss_key_t1

0x3108,	// (0x000237ca) cell_ituss_key_t2_ParamLimits

0x3108,	// (0x000237ca) cell_ituss_key_t2

0x3139,	// (0x000237fb) cell_ituss_key_t3_ParamLimits

0x3139,	// (0x000237fb) cell_ituss_key_t3

0x3108,	// (0x000237ca) cell_ituss_key_t4_ParamLimits

0x3108,	// (0x000237ca) cell_ituss_key_t4

0x0004,

0xfec2,	// (0x00030584) cell_ituss_key_t_ParamLimits

0xfec2,	// (0x00030584) cell_ituss_key_t

0xf478,	// (0x0002fb3a) cell_vkbss_key_3p_pane_g1

0xf480,	// (0x0002fb42) cell_vkbss_key_3p_pane_g2

0xf488,	// (0x0002fb4a) cell_vkbss_key_3p_pane_g3

0x0002,

0xfecd,	// (0x0003058f) cell_vkbss_key_3p_pane_g

0x47c3,	// (0x00024e85) bg_popup_fep_char_preview_window_cp02

0xa943,	// (0x0002b005) popup_fep_char_pre_window_t1

0xf21c,	// (0x0002f8de) main_ai5_sk_pane

0xa3ba,	// (0x0002aa7c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa3c6,	// (0x0002aa88) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7d44,	// (0x00028406) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa3db,	// (0x0002aa9d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe99,	// (0x0003055b) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa3e7,	// (0x0002aaa9) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3b18,	// (0x000241da) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf490,	// (0x0002fb52) main_ai5_sk_pane_g1

0x54d9,	// (0x00025b9b) popup_query_code_window_g1

0xf328,	// (0x0002f9ea) popup_fep_vkb_icf_pane

0xa7fc,	// (0x0002aebe) popup_fep_vtchi_icf_pane

0x4ae7,	// (0x000251a9) bg_icf_pane

0x4ae7,	// (0x000251a9) list_vkb_icf_pane

0xa95a,	// (0x0002b01c) bg_icf_pane_cp01

0x47c3,	// (0x00024e85) vtchi_icf_list_pane

0xf4e5,	// (0x0002fba7) list_vkb_icf_pane_t1_ParamLimits

0xf4e5,	// (0x0002fba7) list_vkb_icf_pane_t1

0xa9ee,	// (0x0002b0b0) vtchi_icf_list_pane_t1_ParamLimits

0xa9ee,	// (0x0002b0b0) vtchi_icf_list_pane_t1

0xa7b9,	// (0x0002ae7b) popup_fep_ituss_window_ParamLimits

0xa7fc,	// (0x0002aebe) popup_fep_vtchi_icf_pane_ParamLimits

0x4ae7,	// (0x000251a9) ituss_keypad_pane_ParamLimits

0x2fc9,	// (0x0002368b) ituss_sks_pane

0x4ae7,	// (0x000251a9) bg_icf_pane_ParamLimits

0xf30d,	// (0x0002f9cf) icf_edit_indi_pane_ParamLimits

0xf30d,	// (0x0002f9cf) icf_edit_indi_pane

0x4ae7,	// (0x000251a9) list_vkb_icf_pane_ParamLimits

0xa95a,	// (0x0002b01c) bg_icf_pane_cp01_ParamLimits

0xa7a4,	// (0x0002ae66) icf_edit_indi_pane_cp01_ParamLimits

0xa7a4,	// (0x0002ae66) icf_edit_indi_pane_cp01

0xa96d,	// (0x0002b02f) vtchi_query_pane

0x9b0c,	// (0x0002a1ce) icf_edit_indi_pane_g1_ParamLimits

0x9b0c,	// (0x0002a1ce) icf_edit_indi_pane_g1

0xf4fc,	// (0x0002fbbe) icf_edit_indi_pane_g2_ParamLimits

0xf4fc,	// (0x0002fbbe) icf_edit_indi_pane_g2

0x0001,

0xfef8,	// (0x000305ba) icf_edit_indi_pane_g_ParamLimits

0xfef8,	// (0x000305ba) icf_edit_indi_pane_g

0xf510,	// (0x0002fbd2) icf_edit_indi_pane_t1

0xaa0c,	// (0x0002b0ce) bg_input_focus_pane_cp042

0x3a47,	// (0x00024109) vtchi_button_pane

0xaa15,	// (0x0002b0d7) vtchi_query_pane_t1

0xaa23,	// (0x0002b0e5) vtchi_query_pane_t2

0xaa31,	// (0x0002b0f3) vtchi_query_pane_t3

0x0002,

0xfee7,	// (0x000305a9) vtchi_query_pane_t

0xe3cd,	// (0x0002ea8f) bg_button_pane_cp13

0xaa3f,	// (0x0002b101) vtchi_button_pane_g1

0x317c,	// (0x0002383e) ituss_sks_pane_g1

0x3187,	// (0x00023849) ituss_sks_pane_g2

0x0001,

0xfeee,	// (0x000305b0) ituss_sks_pane_g

0xaa47,	// (0x0002b109) ituss_sks_pane_t1

0xaa55,	// (0x0002b117) ituss_sks_pane_t2

0x0001,

0xfef3,	// (0x000305b5) ituss_sks_pane_t

0x70e6,	// (0x000277a8) indicator_nsta_pane_cp_g1

0x70ef,	// (0x000277b1) indicator_nsta_pane_cp_g2

0x70f7,	// (0x000277b9) indicator_nsta_pane_cp_g3

0x70ff,	// (0x000277c1) indicator_nsta_pane_cp_g4

0x70ef,	// (0x000277b1) indicator_nsta_pane_cp_g5

0x70f7,	// (0x000277b9) indicator_nsta_pane_cp_g6

0x0005,

0xfa77,	// (0x00030139) indicator_nsta_pane_cp_g

0xf02d,	// (0x0002f6ef) cell_graphic2_pane_t2_ParamLimits

0xf02d,	// (0x0002f6ef) cell_graphic2_pane_t2

0x0001,

0xfd84,	// (0x00030446) cell_graphic2_pane_t_ParamLimits

0xfd84,	// (0x00030446) cell_graphic2_pane_t

0xf062,	// (0x0002f724) cell_graphic2_control_pane_t1

0xd46c,	// (0x0002db2e) signal_pane_g3_ParamLimits

0xd46c,	// (0x0002db2e) signal_pane_g3

0xd480,	// (0x0002db42) signal_pane_g4_ParamLimits

0xd480,	// (0x0002db42) signal_pane_g4

0xa773,	// (0x0002ae35) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa773,	// (0x0002ae35) cell_ai5_widget_list_row_pane_t3

0xa919,	// (0x0002afdb) cell_ituss_key_pane_t1_ParamLimits

0xa919,	// (0x0002afdb) cell_ituss_key_pane_t1

0x5116,	// (0x000257d8) form_field_data_wide_pane_vc_t2_ParamLimits

0x5116,	// (0x000257d8) form_field_data_wide_pane_vc_t2

0x512a,	// (0x000257ec) form_field_data_wide_pane_vc_t3_ParamLimits

0x512a,	// (0x000257ec) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x0002fea1) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x0002fea1) form_field_data_wide_pane_vc_t

0x6d90,	// (0x00027452) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6d90,	// (0x00027452) form_field_slider_wide_pane_vc_t3

0x6e6e,	// (0x00027530) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6e6e,	// (0x00027530) form_field_popup_wide_pane_vc_t2

0x6e85,	// (0x00027547) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6e85,	// (0x00027547) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa66,	// (0x00030128) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa66,	// (0x00030128) form_field_popup_wide_pane_vc_t

0xd0ae,	// (0x0002d770) aid_fshwr2_btn_pane_ParamLimits

0xd0c2,	// (0x0002d784) aid_fshwr2_syb_pane_ParamLimits

0xd0d6,	// (0x0002d798) aid_fshwr2_txt_pane_ParamLimits

0x3b18,	// (0x000241da) fshwr2_bg_pane_ParamLimits

0xd0e6,	// (0x0002d7a8) fshwr2_func_candi_pane_ParamLimits

0xd106,	// (0x0002d7c8) fshwr2_hwr_syb_pane_ParamLimits

0xd128,	// (0x0002d7ea) fshwr2_icf_pane_ParamLimits

0x090f,	// (0x00020fd1) list_double_graphic_pane_vc_g4_ParamLimits

0x090f,	// (0x00020fd1) list_double_graphic_pane_vc_g4

0x306a,	// (0x0002372c) cell_ituss_key_pane_g3_ParamLimits

0x306a,	// (0x0002372c) cell_ituss_key_pane_g3

0x316a,	// (0x0002382c) cell_ituss_key_t5_ParamLimits

0x316a,	// (0x0002382c) cell_ituss_key_t5

0xf337,	// (0x0002f9f9) popup_fep_vkbss_window_ParamLimits

0x9c9a,	// (0x0002a35c) aid_cell_ai5_quarter

0xf510,	// (0x0002fbd2) icf_edit_indi_pane_t1_ParamLimits

0x35bc,	// (0x00023c7e) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x35bc,	// (0x00023c7e) aid_tch_indicator_popup_pane_cp2

0x35cf,	// (0x00023c91) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x35cf,	// (0x00023c91) aid_tch_query_popup_data_pane_cp2

0x5481,	// (0x00025b43) aid_tch_query_popup_pane_ParamLimits

0x5481,	// (0x00025b43) aid_tch_query_popup_pane

0x5481,	// (0x00025b43) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x5481,	// (0x00025b43) aid_tch_query_popup_data_pane_cp1

0x4ae7,	// (0x000251a9) cell_fshwr2_syb_bg_pane_ParamLimits

0xd234,	// (0x0002d8f6) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xd247,	// (0x0002d909) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf328,	// (0x0002f9ea) popup_fep_vkb_icf_pane_ParamLimits

0xd03a,	// (0x0002d6fc) bg_popup_fep_char_preview_window_g10

0x9dd7,	// (0x0002a499) cell_ai5_widget_pane_g11_ParamLimits

0x9dd7,	// (0x0002a499) cell_ai5_widget_pane_g11

0x9de3,	// (0x0002a4a5) cell_ai5_widget_pane_g12_ParamLimits

0x9de3,	// (0x0002a4a5) cell_ai5_widget_pane_g12

0x9def,	// (0x0002a4b1) cell_ai5_widget_pane_g13_ParamLimits

0x9def,	// (0x0002a4b1) cell_ai5_widget_pane_g13

0x9f1e,	// (0x0002a5e0) cell_ai5_widget_pane_t11_ParamLimits

0x9f1e,	// (0x0002a5e0) cell_ai5_widget_pane_t11

0x9f30,	// (0x0002a5f2) cell_ai5_widget_pane_t12_ParamLimits

0x9f30,	// (0x0002a5f2) cell_ai5_widget_pane_t12

0x3076,	// (0x00023738) cell_ituss_key_pane_g4_ParamLimits

0x3076,	// (0x00023738) cell_ituss_key_pane_g4

0x3092,	// (0x00023754) cell_ituss_key_pane_g5_ParamLimits

0x3092,	// (0x00023754) cell_ituss_key_pane_g5

0x30ae,	// (0x00023770) cell_ituss_key_pane_g6_ParamLimits

0x30ae,	// (0x00023770) cell_ituss_key_pane_g6

0x5011,	// (0x000256d3) bg_icf_pane_g1

0xf499,	// (0x0002fb5b) bg_icf_pane_g2

0xf4a3,	// (0x0002fb65) bg_icf_pane_g3

0xf4ab,	// (0x0002fb6d) bg_icf_pane_g4

0xf4b5,	// (0x0002fb77) bg_icf_pane_g5

0xf4bf,	// (0x0002fb81) bg_icf_pane_g6

0xf4c9,	// (0x0002fb8b) bg_icf_pane_g7

0xf4d1,	// (0x0002fb93) bg_icf_pane_g8

0xf4db,	// (0x0002fb9d) bg_icf_pane_g9

0x0008,

0xfed4,	// (0x00030596) bg_icf_pane_g

0xa812,	// (0x0002aed4) popup_hyb_candi_window_ParamLimits

0xa812,	// (0x0002aed4) popup_hyb_candi_window

0x5085,	// (0x00025747) bg_popup_sub_pane_cp01_ParamLimits

0x5085,	// (0x00025747) bg_popup_sub_pane_cp01

0xaa90,	// (0x0002b152) entry_hyb_candi_pane_ParamLimits

0xaa90,	// (0x0002b152) entry_hyb_candi_pane

0xaa9f,	// (0x0002b161) grid_hyb_candi_pane_ParamLimits

0xaa9f,	// (0x0002b161) grid_hyb_candi_pane

0xaab4,	// (0x0002b176) grid_hyb_phrase_pane_ParamLimits

0xaab4,	// (0x0002b176) grid_hyb_phrase_pane

0xaac3,	// (0x0002b185) cell_hyb_candi_pane_ParamLimits

0xaac3,	// (0x0002b185) cell_hyb_candi_pane

0xaae6,	// (0x0002b1a8) cell_hyb_candi_scroll_pane

0x41ad,	// (0x0002486f) cell_hyb_candi_pane_g1

0xaaef,	// (0x0002b1b1) cell_hyb_candi_pane_t1

0xaafd,	// (0x0002b1bf) cell_hyb_phrase_pane

0x41ad,	// (0x0002486f) cell_hyb_phrase_pane_g1

0xab06,	// (0x0002b1c8) cell_hyb_phrase_pane_t1

0xab14,	// (0x0002b1d6) entry_hyb_candi_pane_t1

0x47c3,	// (0x00024e85) input_focus_pane_cp06

0xab22,	// (0x0002b1e4) cell_hyb_candi_scroll_pane_g1

0xab2a,	// (0x0002b1ec) cell_hyb_candi_scroll_pane_g1_aid

0xab32,	// (0x0002b1f4) cell_hyb_candi_scroll_pane_g2

0xab3a,	// (0x0002b1fc) cell_hyb_candi_scroll_pane_g2_aid

0xab42,	// (0x0002b204) cell_hyb_candi_scroll_pane_g3

0xab4a,	// (0x0002b20c) cell_hyb_candi_scroll_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small
