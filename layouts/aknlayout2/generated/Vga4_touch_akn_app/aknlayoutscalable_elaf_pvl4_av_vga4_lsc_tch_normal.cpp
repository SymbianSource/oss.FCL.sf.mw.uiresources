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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00001dac };

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
0x9e32,	// (0x0000bbde) Screen

0x9e3e,	// (0x0000bbea) application_window_ParamLimits

0x9e3e,	// (0x0000bbea) application_window

0xe49b,	// (0x00010247) screen_g1

0x9e76,	// (0x0000bc22) area_bottom_pane_ParamLimits

0x9e76,	// (0x0000bc22) area_bottom_pane

0xe4c5,	// (0x00010271) area_top_pane_ParamLimits

0xe4c5,	// (0x00010271) area_top_pane

0xe559,	// (0x00010305) main_pane_ParamLimits

0xe559,	// (0x00010305) main_pane

0xe614,	// (0x000103c0) misc_graphics

0xb7b0,	// (0x0000d55c) battery_pane_ParamLimits

0xb7b0,	// (0x0000d55c) battery_pane

0x244d,	// (0x000041f9) bg_status_flat_pane_g8

0x2455,	// (0x00004201) bg_status_flat_pane_g9

0x15cb,	// (0x00003377) context_pane_ParamLimits

0x15cb,	// (0x00003377) context_pane

0xb927,	// (0x0000d6d3) navi_pane_ParamLimits

0xb927,	// (0x0000d6d3) navi_pane

0xb9b1,	// (0x0000d75d) signal_pane_ParamLimits

0xb9b1,	// (0x0000d75d) signal_pane

0x0008,

0xf868,	// (0x00011614) bg_status_flat_pane_g

0xba41,	// (0x0000d7ed) status_pane_g1_ParamLimits

0xba41,	// (0x0000d7ed) status_pane_g1

0xba57,	// (0x0000d803) status_pane_g2_ParamLimits

0xba57,	// (0x0000d803) status_pane_g2

0x1804,	// (0x000035b0) status_pane_g3_ParamLimits

0x1804,	// (0x000035b0) status_pane_g3

0x0004,

0xf79b,	// (0x00011547) status_pane_g_ParamLimits

0xf79b,	// (0x00011547) status_pane_g

0xba63,	// (0x0000d80f) title_pane_ParamLimits

0xba63,	// (0x0000d80f) title_pane

0xbaca,	// (0x0000d876) uni_indicator_pane_ParamLimits

0xbaca,	// (0x0000d876) uni_indicator_pane

0x0dfa,	// (0x00002ba6) bg_list_pane_ParamLimits

0x0dfa,	// (0x00002ba6) bg_list_pane

0xaff0,	// (0x0000cd9c) find_pane

0x1bcc,	// (0x00003978) listscroll_app_pane_ParamLimits

0x1bcc,	// (0x00003978) listscroll_app_pane

0x0e2e,	// (0x00002bda) listscroll_form_pane

0xaff8,	// (0x0000cda4) listscroll_gen_pane_ParamLimits

0xaff8,	// (0x0000cda4) listscroll_gen_pane

0x0e4a,	// (0x00002bf6) listscroll_set_pane

0x324f,	// (0x00004ffb) main_idle_act_pane

0x08c4,	// (0x00002670) main_idle_trad_pane

0x08c4,	// (0x00002670) main_list_empty_pane

0x0e22,	// (0x00002bce) main_midp_pane

0x0e64,	// (0x00002c10) main_pane_g1_ParamLimits

0x0e64,	// (0x00002c10) main_pane_g1

0xb00c,	// (0x0000cdb8) popup_ai_message_window_ParamLimits

0xb00c,	// (0x0000cdb8) popup_ai_message_window

0xb0ac,	// (0x0000ce58) popup_fep_china_uni_window_ParamLimits

0xb0ac,	// (0x0000ce58) popup_fep_china_uni_window

0x0f8e,	// (0x00002d3a) popup_fep_japan_candidate_window_ParamLimits

0x0f8e,	// (0x00002d3a) popup_fep_japan_candidate_window

0x0fb8,	// (0x00002d64) popup_fep_japan_predictive_window_ParamLimits

0x0fb8,	// (0x00002d64) popup_fep_japan_predictive_window

0xb10c,	// (0x0000ceb8) popup_find_window

0xb129,	// (0x0000ced5) popup_grid_graphic_window_ParamLimits

0xb129,	// (0x0000ced5) popup_grid_graphic_window

0x1029,	// (0x00002dd5) popup_large_graphic_colour_window

0xb1cd,	// (0x0000cf79) popup_menu_window_ParamLimits

0xb1cd,	// (0x0000cf79) popup_menu_window

0xb3bd,	// (0x0000d169) popup_note_image_window

0xb37d,	// (0x0000d129) popup_note_wait_window_ParamLimits

0xb37d,	// (0x0000d129) popup_note_wait_window

0xb3d5,	// (0x0000d181) popup_note_window_ParamLimits

0xb3d5,	// (0x0000d181) popup_note_window

0xb483,	// (0x0000d22f) popup_query_code_window_ParamLimits

0xb483,	// (0x0000d22f) popup_query_code_window

0x1295,	// (0x00003041) popup_query_data_code_window_ParamLimits

0x1295,	// (0x00003041) popup_query_data_code_window

0xb4c3,	// (0x0000d26f) popup_query_data_window_ParamLimits

0xb4c3,	// (0x0000d26f) popup_query_data_window

0xb557,	// (0x0000d303) popup_query_sat_info_window_ParamLimits

0xb557,	// (0x0000d303) popup_query_sat_info_window

0xb600,	// (0x0000d3ac) popup_snote_single_graphic_window_ParamLimits

0xb600,	// (0x0000d3ac) popup_snote_single_graphic_window

0xb600,	// (0x0000d3ac) popup_snote_single_text_window_ParamLimits

0xb600,	// (0x0000d3ac) popup_snote_single_text_window

0x1330,	// (0x000030dc) popup_sub_window_general

0x1476,	// (0x00003222) popup_window_general_ParamLimits

0x1476,	// (0x00003222) popup_window_general

0x148f,	// (0x0000323b) power_save_pane

0xae50,	// (0x0000cbfc) control_pane_g1_ParamLimits

0xae50,	// (0x0000cbfc) control_pane_g1

0xae79,	// (0x0000cc25) control_pane_g2_ParamLimits

0xae79,	// (0x0000cc25) control_pane_g2

0x0c89,	// (0x00002a35) control_pane_g3_ParamLimits

0x0c89,	// (0x00002a35) control_pane_g3

0x0007,

0xf783,	// (0x0001152f) control_pane_g_ParamLimits

0xf783,	// (0x0001152f) control_pane_g

0xaedf,	// (0x0000cc8b) control_pane_t1_ParamLimits

0xaedf,	// (0x0000cc8b) control_pane_t1

0xaf45,	// (0x0000ccf1) control_pane_t2_ParamLimits

0xaf45,	// (0x0000ccf1) control_pane_t2

0x0002,

0xf794,	// (0x00011540) control_pane_t_ParamLimits

0xf794,	// (0x00011540) control_pane_t

0xada9,	// (0x0000cb55) navi_navi_volume_pane_cp1

0xadb1,	// (0x0000cb5d) status_small_icon_pane

0x0b6c,	// (0x00002918) status_small_pane_g1_ParamLimits

0x0b6c,	// (0x00002918) status_small_pane_g1

0xadb9,	// (0x0000cb65) status_small_pane_g2_ParamLimits

0xadb9,	// (0x0000cb65) status_small_pane_g2

0xadc5,	// (0x0000cb71) status_small_pane_g3_ParamLimits

0xadc5,	// (0x0000cb71) status_small_pane_g3

0xadd1,	// (0x0000cb7d) status_small_pane_g4_ParamLimits

0xadd1,	// (0x0000cb7d) status_small_pane_g4

0xaddd,	// (0x0000cb89) status_small_pane_g5_ParamLimits

0xaddd,	// (0x0000cb89) status_small_pane_g5

0xadeb,	// (0x0000cb97) status_small_pane_g6_ParamLimits

0xadeb,	// (0x0000cb97) status_small_pane_g6

0x0007,

0xf772,	// (0x0001151e) status_small_pane_g_ParamLimits

0xf772,	// (0x0001151e) status_small_pane_g

0xae1a,	// (0x0000cbc6) status_small_pane_t1

0xae3c,	// (0x0000cbe8) status_small_wait_pane_ParamLimits

0xae3c,	// (0x0000cbe8) status_small_wait_pane

0xab8a,	// (0x0000c936) aid_levels_signal_ParamLimits

0xab8a,	// (0x0000c936) aid_levels_signal

0xaba2,	// (0x0000c94e) signal_pane_g1_ParamLimits

0xaba2,	// (0x0000c94e) signal_pane_g1

0xabbd,	// (0x0000c969) signal_pane_g2_ParamLimits

0xabbd,	// (0x0000c969) signal_pane_g2

0x0003,

0xf703,	// (0x000114af) signal_pane_g_ParamLimits

0xf703,	// (0x000114af) signal_pane_g

0x0169,	// (0x00001f15) context_pane_g1

0xa062,	// (0x0000be0e) title_pane_g1

0xa0a5,	// (0x0000be51) title_pane_t1

0xe67e,	// (0x0001042a) title_pane_t2

0xe6a4,	// (0x00010450) title_pane_t3

0x0002,

0xf557,	// (0x00011303) title_pane_t

0xbaf2,	// (0x0000d89e) aid_levels_battery_ParamLimits

0xbaf2,	// (0x0000d89e) aid_levels_battery

0xbb0e,	// (0x0000d8ba) battery_pane_g1_ParamLimits

0xbb0e,	// (0x0000d8ba) battery_pane_g1

0xbb2b,	// (0x0000d8d7) battery_pane_g2_ParamLimits

0xbb2b,	// (0x0000d8d7) battery_pane_g2

0x0001,

0xf7a6,	// (0x00011552) battery_pane_g_ParamLimits

0xf7a6,	// (0x00011552) battery_pane_g

0xbf22,	// (0x0000dcce) uni_indicator_pane_g1

0xbf38,	// (0x0000dce4) uni_indicator_pane_g2

0xbf4e,	// (0x0000dcfa) uni_indicator_pane_g3

0x0005,

0xf910,	// (0x000116bc) uni_indicator_pane_g

0x073e,	// (0x000024ea) navi_icon_pane_ParamLimits

0x073e,	// (0x000024ea) navi_icon_pane

0x067a,	// (0x00002426) navi_midp_pane

0x075a,	// (0x00002506) navi_navi_pane

0x0764,	// (0x00002510) navi_text_pane_ParamLimits

0x0764,	// (0x00002510) navi_text_pane

0xe49b,	// (0x00010247) status_small_wait_pane_g1

0xea72,	// (0x0001081e) status_small_wait_pane_g2

0x0001,

0xf90b,	// (0x000116b7) status_small_wait_pane_g

0xbec1,	// (0x0000dc6d) navi_navi_icon_text_pane

0xbec9,	// (0x0000dc75) navi_navi_pane_g1_ParamLimits

0xbec9,	// (0x0000dc75) navi_navi_pane_g1

0xbedb,	// (0x0000dc87) navi_navi_pane_g2_ParamLimits

0xbedb,	// (0x0000dc87) navi_navi_pane_g2

0x0001,

0xf8d9,	// (0x00011685) navi_navi_pane_g_ParamLimits

0xf8d9,	// (0x00011685) navi_navi_pane_g

0x2c42,	// (0x000049ee) navi_navi_tabs_pane

0xbeed,	// (0x0000dc99) navi_navi_text_pane

0xbec1,	// (0x0000dc6d) navi_navi_volume_pane

0xbeaf,	// (0x0000dc5b) navi_text_pane_t1

0xbea3,	// (0x0000dc4f) navi_icon_pane_g1

0x2b39,	// (0x000048e5) navi_navi_text_pane_t1

0xbe92,	// (0x0000dc3e) navi_navi_volume_pane_g1

0xbe9a,	// (0x0000dc46) volume_small_pane

0xbdee,	// (0x0000db9a) navi_navi_icon_text_pane_g1

0xbdf6,	// (0x0000dba2) navi_navi_icon_text_pane_t1

0x075a,	// (0x00002506) navi_tabs_2_long_pane

0x075a,	// (0x00002506) navi_tabs_2_pane

0x075a,	// (0x00002506) navi_tabs_3_long_pane

0x075a,	// (0x00002506) navi_tabs_3_pane

0x075a,	// (0x00002506) navi_tabs_4_pane

0xbdce,	// (0x0000db7a) tabs_2_active_pane_ParamLimits

0xbdce,	// (0x0000db7a) tabs_2_active_pane

0xbdde,	// (0x0000db8a) tabs_2_passive_pane_ParamLimits

0xbdde,	// (0x0000db8a) tabs_2_passive_pane

0xbd9c,	// (0x0000db48) tabs_3_active_pane_ParamLimits

0xbd9c,	// (0x0000db48) tabs_3_active_pane

0xbdac,	// (0x0000db58) tabs_3_passive_pane_ParamLimits

0xbdac,	// (0x0000db58) tabs_3_passive_pane

0xbdbd,	// (0x0000db69) tabs_3_passive_pane_cp_ParamLimits

0xbdbd,	// (0x0000db69) tabs_3_passive_pane_cp

0xbd58,	// (0x0000db04) tabs_4_active_pane_ParamLimits

0xbd58,	// (0x0000db04) tabs_4_active_pane

0xbd69,	// (0x0000db15) tabs_4_passive_pane_ParamLimits

0xbd69,	// (0x0000db15) tabs_4_passive_pane

0xbd7a,	// (0x0000db26) tabs_4_passive_pane_cp_ParamLimits

0xbd7a,	// (0x0000db26) tabs_4_passive_pane_cp

0xbd8b,	// (0x0000db37) tabs_4_passive_pane_cp2_ParamLimits

0xbd8b,	// (0x0000db37) tabs_4_passive_pane_cp2

0xbd34,	// (0x0000dae0) tabs_2_long_active_pane_ParamLimits

0xbd34,	// (0x0000dae0) tabs_2_long_active_pane

0xbd46,	// (0x0000daf2) tabs_2_long_passive_pane_ParamLimits

0xbd46,	// (0x0000daf2) tabs_2_long_passive_pane

0xbce9,	// (0x0000da95) tabs_3_long_active_pane_ParamLimits

0xbce9,	// (0x0000da95) tabs_3_long_active_pane

0xbd02,	// (0x0000daae) tabs_3_long_passive_pane_ParamLimits

0xbd02,	// (0x0000daae) tabs_3_long_passive_pane

0xbd1b,	// (0x0000dac7) tabs_3_long_passive_pane_cp_ParamLimits

0xbd1b,	// (0x0000dac7) tabs_3_long_passive_pane_cp

0x28b2,	// (0x0000465e) volume_small_pane_g1

0xbc98,	// (0x0000da44) volume_small_pane_g2

0xbca1,	// (0x0000da4d) volume_small_pane_g3

0xbcaa,	// (0x0000da56) volume_small_pane_g4

0xbcb3,	// (0x0000da5f) volume_small_pane_g5

0xbcbc,	// (0x0000da68) volume_small_pane_g6

0xbcc5,	// (0x0000da71) volume_small_pane_g7

0xbcce,	// (0x0000da7a) volume_small_pane_g8

0xbcd7,	// (0x0000da83) volume_small_pane_g9

0xbce0,	// (0x0000da8c) volume_small_pane_g10

0x0009,

0xf8a5,	// (0x00011651) volume_small_pane_g

0xe6b6,	// (0x00010462) bg_active_tab_pane_cp2_ParamLimits

0xe6b6,	// (0x00010462) bg_active_tab_pane_cp2

0xa131,	// (0x0000bedd) tabs_3_active_pane_g1

0xa139,	// (0x0000bee5) tabs_3_active_pane_t1

0xe6b6,	// (0x00010462) bg_passive_tab_pane_cp2_ParamLimits

0xe6b6,	// (0x00010462) bg_passive_tab_pane_cp2

0xa131,	// (0x0000bedd) tabs_3_passive_pane_g1

0xa139,	// (0x0000bee5) tabs_3_passive_pane_t1

0xe6b6,	// (0x00010462) bg_active_tab_pane_cp3_ParamLimits

0xe6b6,	// (0x00010462) bg_active_tab_pane_cp3

0xa14b,	// (0x0000bef7) tabs_4_active_pane_g1

0xa153,	// (0x0000beff) tabs_4_active_pane_t1

0xe6b6,	// (0x00010462) bg_passive_tab_pane_cp3_ParamLimits

0xe6b6,	// (0x00010462) bg_passive_tab_pane_cp3

0xa14b,	// (0x0000bef7) tabs_4_1_passive_pane_g1

0xa153,	// (0x0000beff) tabs_4_1_passive_pane_t1

0x0e22,	// (0x00002bce) list_highlight_pane_cp2

0x3275,	// (0x00005021) list_set_pane_ParamLimits

0x3275,	// (0x00005021) list_set_pane

0xbfe1,	// (0x0000dd8d) main_pane_set_t1_ParamLimits

0xbfe1,	// (0x0000dd8d) main_pane_set_t1

0xc001,	// (0x0000ddad) main_pane_set_t2_ParamLimits

0xc001,	// (0x0000ddad) main_pane_set_t2

0xc015,	// (0x0000ddc1) main_pane_set_t3_ParamLimits

0xc015,	// (0x0000ddc1) main_pane_set_t3

0xc029,	// (0x0000ddd5) main_pane_set_t4_ParamLimits

0xc029,	// (0x0000ddd5) main_pane_set_t4

0x0003,

0xf975,	// (0x00011721) main_pane_set_t_ParamLimits

0xf975,	// (0x00011721) main_pane_set_t

0xc03d,	// (0x0000dde9) setting_code_pane

0x339d,	// (0x00005149) setting_slider_graphic_pane

0x339d,	// (0x00005149) setting_slider_pane

0x339d,	// (0x00005149) setting_text_pane

0x339d,	// (0x00005149) setting_volume_pane

0xe6c4,	// (0x00010470) volume_set_pane

0xe6ce,	// (0x0001047a) bg_set_opt_pane_cp

0xe6dc,	// (0x00010488) setting_slider_pane_t1

0xe6f5,	// (0x000104a1) setting_slider_pane_t2

0xe70f,	// (0x000104bb) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001130a) setting_slider_pane_t

0xe727,	// (0x000104d3) slider_set_pane

0xe614,	// (0x000103c0) bg_set_opt_pane_cp2

0xe73d,	// (0x000104e9) setting_slider_graphic_pane_g1

0xe746,	// (0x000104f2) setting_slider_graphic_pane_t1

0xe756,	// (0x00010502) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00011311) setting_slider_graphic_pane_t

0xe766,	// (0x00010512) slider_set_pane_cp

0xe614,	// (0x000103c0) input_focus_pane_cp1

0x3236,	// (0x00004fe2) list_set_text_pane

0xe49b,	// (0x00010247) setting_text_pane_g1

0xe614,	// (0x000103c0) input_focus_pane_cp2

0xe49b,	// (0x00010247) setting_code_pane_g1

0xe76e,	// (0x0001051a) setting_code_pane_t1

0xe77c,	// (0x00010528) set_text_pane_t1_ParamLimits

0xe77c,	// (0x00010528) set_text_pane_t1

0xeef0,	// (0x00010c9c) set_opt_bg_pane_g1

0xeef8,	// (0x00010ca4) set_opt_bg_pane_g2

0x320e,	// (0x00004fba) set_opt_bg_pane_g3

0xef08,	// (0x00010cb4) set_opt_bg_pane_g4

0xef10,	// (0x00010cbc) set_opt_bg_pane_g5

0xef18,	// (0x00010cc4) set_opt_bg_pane_g6

0x3218,	// (0x00004fc4) set_opt_bg_pane_g7

0x3222,	// (0x00004fce) set_opt_bg_pane_g8

0x322c,	// (0x00004fd8) set_opt_bg_pane_g9

0x0008,

0xf962,	// (0x0001170e) set_opt_bg_pane_g

0x319d,	// (0x00004f49) slider_set_pane_g1

0x31aa,	// (0x00004f56) slider_set_pane_g2

0x0006,

0xf953,	// (0x000116ff) slider_set_pane_g

0x3005,	// (0x00004db1) volume_set_pane_g1

0x300f,	// (0x00004dbb) volume_set_pane_g2

0x3019,	// (0x00004dc5) volume_set_pane_g3

0x3023,	// (0x00004dcf) volume_set_pane_g4

0x302d,	// (0x00004dd9) volume_set_pane_g5

0x3037,	// (0x00004de3) volume_set_pane_g6

0x3041,	// (0x00004ded) volume_set_pane_g7

0x304b,	// (0x00004df7) volume_set_pane_g8

0x3055,	// (0x00004e01) volume_set_pane_g9

0x305f,	// (0x00004e0b) volume_set_pane_g10

0x0009,

0xf92b,	// (0x000116d7) volume_set_pane_g

0xa165,	// (0x0000bf11) indicator_pane_ParamLimits

0xa165,	// (0x0000bf11) indicator_pane

0xa191,	// (0x0000bf3d) main_idle_pane_g2_ParamLimits

0xa191,	// (0x0000bf3d) main_idle_pane_g2

0xa1c9,	// (0x0000bf75) main_pane_idle_g1_ParamLimits

0xa1c9,	// (0x0000bf75) main_pane_idle_g1

0xe796,	// (0x00010542) popup_clock_digital_analogue_window_ParamLimits

0xe796,	// (0x00010542) popup_clock_digital_analogue_window

0xa1f3,	// (0x0000bf9f) soft_indicator_pane_ParamLimits

0xa1f3,	// (0x0000bf9f) soft_indicator_pane

0xa20f,	// (0x0000bfbb) wallpaper_pane_ParamLimits

0xa20f,	// (0x0000bfbb) wallpaper_pane

0xe49b,	// (0x00010247) wallpaper_pane_g1

0xa221,	// (0x0000bfcd) indicator_pane_g1_ParamLimits

0xa221,	// (0x0000bfcd) indicator_pane_g1

0x379d,	// (0x00005549) navi_navi_icon_text_pane_srt_g1

0xe7c4,	// (0x00010570) soft_indicator_pane_t1

0xe7de,	// (0x0001058a) aid_ps_area_pane

0xa23a,	// (0x0000bfe6) aid_ps_clock_pane

0xe7ef,	// (0x0001059b) aid_ps_indicator_pane

0xe7fb,	// (0x000105a7) indicator_ps_pane_ParamLimits

0xe7fb,	// (0x000105a7) indicator_ps_pane

0xe80a,	// (0x000105b6) power_save_pane_g1_ParamLimits

0xe80a,	// (0x000105b6) power_save_pane_g1

0xe816,	// (0x000105c2) power_save_pane_g2_ParamLimits

0xe816,	// (0x000105c2) power_save_pane_g2

0xe4a5,	// (0x00010251) aid_navinavi_width_pane

0xe7de,	// (0x0001058a) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00011316) power_save_pane_g_ParamLimits

0xf56a,	// (0x00011316) power_save_pane_g

0xe824,	// (0x000105d0) power_save_pane_t1_ParamLimits

0xe824,	// (0x000105d0) power_save_pane_t1

0xa23a,	// (0x0000bfe6) aid_ps_clock_pane_ParamLimits

0xe7ef,	// (0x0001059b) aid_ps_indicator_pane_ParamLimits

0xe836,	// (0x000105e2) power_save_pane_t4_ParamLimits

0xe836,	// (0x000105e2) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001131b) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001131b) power_save_pane_t

0xe860,	// (0x0001060c) power_save_t3_ParamLimits

0xe860,	// (0x0001060c) power_save_t3

0xe84b,	// (0x000105f7) power_save_t2_ParamLimits

0xe84b,	// (0x000105f7) power_save_t2

0xe875,	// (0x00010621) indicator_ps_pane_g1

0xa248,	// (0x0000bff4) ai_gene_pane_ParamLimits

0xa248,	// (0x0000bff4) ai_gene_pane

0xa25f,	// (0x0000c00b) ai_links_pane_ParamLimits

0xa25f,	// (0x0000c00b) ai_links_pane

0xa277,	// (0x0000c023) indicator_pane_cp1_ParamLimits

0xa277,	// (0x0000c023) indicator_pane_cp1

0xa286,	// (0x0000c032) main_pane_idle_g1_cp_ParamLimits

0xa286,	// (0x0000c032) main_pane_idle_g1_cp

0xe87e,	// (0x0001062a) popup_ai_links_title_window

0xa29e,	// (0x0000c04a) soft_indicator_pane_cp1_ParamLimits

0xa29e,	// (0x0000c04a) soft_indicator_pane_cp1

0x2ef1,	// (0x00004c9d) ai_links_pane_g1

0x2efa,	// (0x00004ca6) grid_ai_links_pane

0xbf19,	// (0x0000dcc5) ai_gene_pane_1

0x2edf,	// (0x00004c8b) ai_gene_pane_2

0x2ee8,	// (0x00004c94) list_highlight_pane_cp4

0xbef5,	// (0x0000dca1) cell_ai_link_pane_ParamLimits

0xbef5,	// (0x0000dca1) cell_ai_link_pane

0x2eae,	// (0x00004c5a) cell_ai_link_pane_g1

0xea72,	// (0x0001081e) cell_ai_link_pane_g2

0x0001,

0xf906,	// (0x000116b2) cell_ai_link_pane_g

0xe614,	// (0x000103c0) grid_highlight_cp2

0xe614,	// (0x000103c0) bg_popup_sub_pane_cp1

0xe895,	// (0x00010641) popup_ai_links_title_window_t1

0x2dfa,	// (0x00004ba6) ai_gene_pane_1_g1_ParamLimits

0x2dfa,	// (0x00004ba6) ai_gene_pane_1_g1

0x2e06,	// (0x00004bb2) ai_gene_pane_1_g2_ParamLimits

0x2e06,	// (0x00004bb2) ai_gene_pane_1_g2

0x0001,

0xf8fc,	// (0x000116a8) ai_gene_pane_1_g_ParamLimits

0xf8fc,	// (0x000116a8) ai_gene_pane_1_g

0x2e13,	// (0x00004bbf) ai_gene_pane_1_t1_ParamLimits

0x2e13,	// (0x00004bbf) ai_gene_pane_1_t1

0x2e47,	// (0x00004bf3) grid_ai_soft_ind_pane

0x2de5,	// (0x00004b91) ai_gene_pane_2_t1_ParamLimits

0x2de5,	// (0x00004b91) ai_gene_pane_2_t1

0xa2b2,	// (0x0000c05e) main_pane_empty_t1_ParamLimits

0xa2b2,	// (0x0000c05e) main_pane_empty_t1

0xa2ca,	// (0x0000c076) main_pane_empty_t2_ParamLimits

0xa2ca,	// (0x0000c076) main_pane_empty_t2

0xa2df,	// (0x0000c08b) main_pane_empty_t3_ParamLimits

0xa2df,	// (0x0000c08b) main_pane_empty_t3

0xa2f1,	// (0x0000c09d) main_pane_empty_t4_ParamLimits

0xa2f1,	// (0x0000c09d) main_pane_empty_t4

0xa303,	// (0x0000c0af) main_pane_empty_t5_ParamLimits

0xa303,	// (0x0000c0af) main_pane_empty_t5

0x0004,

0xf574,	// (0x00011320) main_pane_empty_t_ParamLimits

0xf574,	// (0x00011320) main_pane_empty_t

0xef70,	// (0x00010d1c) bg_popup_window_pane_ParamLimits

0xef70,	// (0x00010d1c) bg_popup_window_pane

0x2b47,	// (0x000048f3) find_popup_pane_cp2_ParamLimits

0x2b47,	// (0x000048f3) find_popup_pane_cp2

0x2b53,	// (0x000048ff) heading_pane_ParamLimits

0x2b53,	// (0x000048ff) heading_pane

0xe614,	// (0x000103c0) bg_popup_sub_pane

0xbe13,	// (0x0000dbbf) bg_popup_window_pane_g1_ParamLimits

0xbe13,	// (0x0000dbbf) bg_popup_window_pane_g1

0xbe22,	// (0x0000dbce) bg_popup_window_pane_g2_ParamLimits

0xbe22,	// (0x0000dbce) bg_popup_window_pane_g2

0xbe2e,	// (0x0000dbda) bg_popup_window_pane_g3_ParamLimits

0xbe2e,	// (0x0000dbda) bg_popup_window_pane_g3

0xbe3a,	// (0x0000dbe6) bg_popup_window_pane_g4_ParamLimits

0xbe3a,	// (0x0000dbe6) bg_popup_window_pane_g4

0xbe49,	// (0x0000dbf5) bg_popup_window_pane_g5_ParamLimits

0xbe49,	// (0x0000dbf5) bg_popup_window_pane_g5

0xbe59,	// (0x0000dc05) bg_popup_window_pane_g6_ParamLimits

0xbe59,	// (0x0000dc05) bg_popup_window_pane_g6

0xbe65,	// (0x0000dc11) bg_popup_window_pane_g7_ParamLimits

0xbe65,	// (0x0000dc11) bg_popup_window_pane_g7

0xbe74,	// (0x0000dc20) bg_popup_window_pane_g8_ParamLimits

0xbe74,	// (0x0000dc20) bg_popup_window_pane_g8

0xbe83,	// (0x0000dc2f) bg_popup_window_pane_g9_ParamLimits

0xbe83,	// (0x0000dc2f) bg_popup_window_pane_g9

0x2b1c,	// (0x000048c8) bg_popup_window_pane_g10_ParamLimits

0x2b1c,	// (0x000048c8) bg_popup_window_pane_g10

0x0009,

0xf8c4,	// (0x00011670) bg_popup_window_pane_g_ParamLimits

0xf8c4,	// (0x00011670) bg_popup_window_pane_g

0x2a45,	// (0x000047f1) bg_popup_heading_pane_ParamLimits

0x2a45,	// (0x000047f1) bg_popup_heading_pane

0x36e0,	// (0x0000548c) tabs_4_passive_pane_cp_srt_ParamLimits

0x36e0,	// (0x0000548c) tabs_4_passive_pane_cp_srt

0x36f2,	// (0x0000549e) tabs_4_passive_pane_srt_ParamLimits

0x2a59,	// (0x00004805) heading_pane_g2

0x36f2,	// (0x0000549e) tabs_4_passive_pane_srt

0x1bcc,	// (0x00003978) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1bcc,	// (0x00003978) bg_passive_tab_pane_cp3_srt

0x2a61,	// (0x0000480d) heading_pane_t1_ParamLimits

0x2a61,	// (0x0000480d) heading_pane_t1

0x2a78,	// (0x00004824) heading_pane_t2_ParamLimits

0x2a78,	// (0x00004824) heading_pane_t2

0x0001,

0xf8bf,	// (0x0001166b) heading_pane_t_ParamLimits

0xf8bf,	// (0x0001166b) heading_pane_t

0x2415,	// (0x000041c1) bg_popup_heading_pane_g1

0x24c4,	// (0x00004270) bg_popup_heading_pane_g2

0x24ce,	// (0x0000427a) bg_popup_heading_pane_g3

0x24d8,	// (0x00004284) bg_popup_heading_pane_g4

0x24e2,	// (0x0000428e) bg_popup_heading_pane_g5

0x24ec,	// (0x00004298) bg_popup_heading_pane_g6

0x24f4,	// (0x000042a0) bg_popup_heading_pane_g7

0x24fc,	// (0x000042a8) bg_popup_heading_pane_g8

0x2506,	// (0x000042b2) bg_popup_heading_pane_g9

0x0008,

0xf87b,	// (0x00011627) bg_popup_heading_pane_g

0x1a31,	// (0x000037dd) bg_popup_sub_pane_g1

0x1a39,	// (0x000037e5) bg_popup_sub_pane_g2

0x1a41,	// (0x000037ed) bg_popup_sub_pane_g3

0x1a49,	// (0x000037f5) bg_popup_sub_pane_g4

0x1a51,	// (0x000037fd) bg_popup_sub_pane_g5

0x1a59,	// (0x00003805) bg_popup_sub_pane_g6

0x1a61,	// (0x0000380d) bg_popup_sub_pane_g7

0x1a69,	// (0x00003815) bg_popup_sub_pane_g8

0x1a71,	// (0x0000381d) bg_popup_sub_pane_g9

0x0008,

0xf855,	// (0x00011601) bg_popup_sub_pane_g

0xe6b6,	// (0x00010462) bg_popup_window_pane_cp5_ParamLimits

0xe6b6,	// (0x00010462) bg_popup_window_pane_cp5

0xe8b2,	// (0x0001065e) popup_note_window_g1_ParamLimits

0xe8b2,	// (0x0001065e) popup_note_window_g1

0xe8be,	// (0x0001066a) popup_note_window_t1_ParamLimits

0xe8be,	// (0x0001066a) popup_note_window_t1

0xe8d4,	// (0x00010680) popup_note_window_t2_ParamLimits

0xe8d4,	// (0x00010680) popup_note_window_t2

0xe8ea,	// (0x00010696) popup_note_window_t3_ParamLimits

0xe8ea,	// (0x00010696) popup_note_window_t3

0xe900,	// (0x000106ac) popup_note_window_t4_ParamLimits

0xe900,	// (0x000106ac) popup_note_window_t4

0xe928,	// (0x000106d4) popup_note_window_t5_ParamLimits

0xe928,	// (0x000106d4) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001132b) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001132b) popup_note_window_t

0xe972,	// (0x0001071e) bg_popup_window_pane_cp6_ParamLimits

0xe972,	// (0x0001071e) bg_popup_window_pane_cp6

0x2391,	// (0x0000413d) popup_note_image_window_g1_ParamLimits

0x2391,	// (0x0000413d) popup_note_image_window_g1

0x239d,	// (0x00004149) popup_note_image_window_g2_ParamLimits

0x239d,	// (0x00004149) popup_note_image_window_g2

0x0001,

0xf849,	// (0x000115f5) popup_note_image_window_g_ParamLimits

0xf849,	// (0x000115f5) popup_note_image_window_g

0x23b6,	// (0x00004162) popup_note_image_window_t1_ParamLimits

0x23b6,	// (0x00004162) popup_note_image_window_t1

0x23cf,	// (0x0000417b) popup_note_image_window_t2_ParamLimits

0x23cf,	// (0x0000417b) popup_note_image_window_t2

0x23e8,	// (0x00004194) popup_note_image_window_t3_ParamLimits

0x23e8,	// (0x00004194) popup_note_image_window_t3

0x0002,

0xf84e,	// (0x000115fa) popup_note_image_window_t_ParamLimits

0xf84e,	// (0x000115fa) popup_note_image_window_t

0x2251,	// (0x00003ffd) bg_popup_window_pane_cp7_ParamLimits

0x2251,	// (0x00003ffd) bg_popup_window_pane_cp7

0x2281,	// (0x0000402d) popup_note_wait_window_g1_ParamLimits

0x2281,	// (0x0000402d) popup_note_wait_window_g1

0x228d,	// (0x00004039) popup_note_wait_window_g2_ParamLimits

0x228d,	// (0x00004039) popup_note_wait_window_g2

0x0002,

0xf837,	// (0x000115e3) popup_note_wait_window_g_ParamLimits

0xf837,	// (0x000115e3) popup_note_wait_window_g

0x22a5,	// (0x00004051) popup_note_wait_window_t1_ParamLimits

0x22a5,	// (0x00004051) popup_note_wait_window_t1

0x22cc,	// (0x00004078) popup_note_wait_window_t2_ParamLimits

0x22cc,	// (0x00004078) popup_note_wait_window_t2

0x22ea,	// (0x00004096) popup_note_wait_window_t3_ParamLimits

0x22ea,	// (0x00004096) popup_note_wait_window_t3

0x22fd,	// (0x000040a9) popup_note_wait_window_t4_ParamLimits

0x22fd,	// (0x000040a9) popup_note_wait_window_t4

0x0004,

0xf83e,	// (0x000115ea) popup_note_wait_window_t_ParamLimits

0xf83e,	// (0x000115ea) popup_note_wait_window_t

0x2322,	// (0x000040ce) wait_bar_pane_ParamLimits

0x2322,	// (0x000040ce) wait_bar_pane

0xe614,	// (0x000103c0) wait_anim_pane

0xe614,	// (0x000103c0) wait_border_pane

0xe49b,	// (0x00010247) wait_anim_pane_g1

0xe49b,	// (0x00010247) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x000114aa) wait_anim_pane_g

0x21f5,	// (0x00003fa1) wait_border_pane_g1

0x2200,	// (0x00003fac) wait_border_pane_g2

0x2209,	// (0x00003fb5) wait_border_pane_g3

0x0002,

0xf830,	// (0x000115dc) wait_border_pane_g

0x205f,	// (0x00003e0b) bg_popup_window_pane_cp16_ParamLimits

0x205f,	// (0x00003e0b) bg_popup_window_pane_cp16

0x215f,	// (0x00003f0b) indicator_popup_pane_cp4_ParamLimits

0x215f,	// (0x00003f0b) indicator_popup_pane_cp4

0x2173,	// (0x00003f1f) popup_query_data_window_t1_ParamLimits

0x2173,	// (0x00003f1f) popup_query_data_window_t1

0x2185,	// (0x00003f31) popup_query_data_window_t2_ParamLimits

0x2185,	// (0x00003f31) popup_query_data_window_t2

0x219e,	// (0x00003f4a) popup_query_data_window_t3_ParamLimits

0x219e,	// (0x00003f4a) popup_query_data_window_t3

0x0002,

0xf829,	// (0x000115d5) popup_query_data_window_t_ParamLimits

0xf829,	// (0x000115d5) popup_query_data_window_t

0x21b8,	// (0x00003f64) query_popup_data_pane_ParamLimits

0x21b8,	// (0x00003f64) query_popup_data_pane

0x21cc,	// (0x00003f78) query_popup_data_pane_cp1_ParamLimits

0x21cc,	// (0x00003f78) query_popup_data_pane_cp1

0x205f,	// (0x00003e0b) bg_popup_window_pane_cp10_ParamLimits

0x205f,	// (0x00003e0b) bg_popup_window_pane_cp10

0x2091,	// (0x00003e3d) indicator_popup_pane_ParamLimits

0x2091,	// (0x00003e3d) indicator_popup_pane

0x20b3,	// (0x00003e5f) popup_query_code_window_t1_ParamLimits

0x20b3,	// (0x00003e5f) popup_query_code_window_t1

0x20cd,	// (0x00003e79) popup_query_code_window_t2_ParamLimits

0x20cd,	// (0x00003e79) popup_query_code_window_t2

0x2116,	// (0x00003ec2) popup_query_code_window_t3_ParamLimits

0x2116,	// (0x00003ec2) popup_query_code_window_t3

0x0002,

0xf822,	// (0x000115ce) popup_query_code_window_t_ParamLimits

0xf822,	// (0x000115ce) popup_query_code_window_t

0x2145,	// (0x00003ef1) query_popup_pane_ParamLimits

0x2145,	// (0x00003ef1) query_popup_pane

0xe972,	// (0x0001071e) bg_popup_window_pane_cp15_ParamLimits

0xe972,	// (0x0001071e) bg_popup_window_pane_cp15

0xe992,	// (0x0001073e) indicator_popup_pane_cp1_ParamLimits

0xe992,	// (0x0001073e) indicator_popup_pane_cp1

0xe9a5,	// (0x00010751) indicator_popup_pane_cp2_ParamLimits

0xe9a5,	// (0x00010751) indicator_popup_pane_cp2

0xe9c0,	// (0x0001076c) popup_query_data_code_window_g1_ParamLimits

0xe9c0,	// (0x0001076c) popup_query_data_code_window_g1

0xe9d3,	// (0x0001077f) popup_query_data_code_window_t1_ParamLimits

0xe9d3,	// (0x0001077f) popup_query_data_code_window_t1

0xe9e5,	// (0x00010791) popup_query_data_code_window_t2_ParamLimits

0xe9e5,	// (0x00010791) popup_query_data_code_window_t2

0xe9f7,	// (0x000107a3) popup_query_data_code_window_t3_ParamLimits

0xe9f7,	// (0x000107a3) popup_query_data_code_window_t3

0xea0d,	// (0x000107b9) popup_query_data_code_window_t4_ParamLimits

0xea0d,	// (0x000107b9) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00011336) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00011336) popup_query_data_code_window_t

0x06fa,	// (0x000024a6) list_single_midp_graphic_pane_g3

0xea27,	// (0x000107d3) query_popup_data_pane_cp2_ParamLimits

0xea3a,	// (0x000107e6) query_popup_pane_cp2_ParamLimits

0xea3a,	// (0x000107e6) query_popup_pane_cp2

0xe614,	// (0x000103c0) bg_popup_window_pane_cp11

0x204b,	// (0x00003df7) heading_pane_cp5

0xead3,	// (0x0001087f) listscroll_popup_info_pane

0xe614,	// (0x000103c0) input_focus_pane_cp3

0xea55,	// (0x00010801) query_popup_pane_t1

0xea63,	// (0x0001080f) list_popup_info_pane_ParamLimits

0xea63,	// (0x0001080f) list_popup_info_pane

0xea72,	// (0x0001081e) listscroll_popup_info_pane_g1

0xea7a,	// (0x00010826) scroll_pane_cp7

0xea84,	// (0x00010830) popup_info_list_pane_t1_ParamLimits

0xea84,	// (0x00010830) popup_info_list_pane_t1

0xea9e,	// (0x0001084a) popup_info_list_pane_t2_ParamLimits

0xea9e,	// (0x0001084a) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001133f) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001133f) popup_info_list_pane_t

0xe614,	// (0x000103c0) bg_popup_window_pane_cp12

0x37d4,	// (0x00005580) find_popup_pane

0xe6ce,	// (0x0001047a) bg_popup_window_pane_cp3

0xeab8,	// (0x00010864) heading_pane_cp3

0xeac4,	// (0x00010870) listscroll_popup_graphic_pane

0xe614,	// (0x000103c0) bg_popup_window_pane_cp4

0xa365,	// (0x0000c111) heading_pane_cp4

0xead3,	// (0x0001087f) listscroll_popup_colour_pane

0xa36f,	// (0x0000c11b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa36f,	// (0x0000c11b) cell_large_graphic_colour_none_popup_pane

0xa383,	// (0x0000c12f) grid_large_graphic_colour_popup_pane_ParamLimits

0xa383,	// (0x0000c12f) grid_large_graphic_colour_popup_pane

0xa3a7,	// (0x0000c153) listscroll_popup_colour_pane_g1_ParamLimits

0xa3a7,	// (0x0000c153) listscroll_popup_colour_pane_g1

0xa3be,	// (0x0000c16a) listscroll_popup_colour_pane_g2_ParamLimits

0xa3be,	// (0x0000c16a) listscroll_popup_colour_pane_g2

0xa3d5,	// (0x0000c181) listscroll_popup_colour_pane_g3_ParamLimits

0xa3d5,	// (0x0000c181) listscroll_popup_colour_pane_g3

0xa3e5,	// (0x0000c191) listscroll_popup_colour_pane_g4_ParamLimits

0xa3e5,	// (0x0000c191) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00011344) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00011344) listscroll_popup_colour_pane_g

0xeadb,	// (0x00010887) scroll_pane_cp6_ParamLimits

0xeadb,	// (0x00010887) scroll_pane_cp6

0xa3f5,	// (0x0000c1a1) cell_large_graphic_colour_popup_pane_ParamLimits

0xa3f5,	// (0x0000c1a1) cell_large_graphic_colour_popup_pane

0xeaed,	// (0x00010899) cell_large_graphic_colour_none_popup_pane_t1

0xe614,	// (0x000103c0) grid_highlight_pane_cp5

0xeafc,	// (0x000108a8) cell_large_graphic_colour_popup_pane_g1

0xeb04,	// (0x000108b0) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001134d) cell_large_graphic_colour_popup_pane_g

0xeb0c,	// (0x000108b8) cell_large_graphic_colour_popup_pane_g2_copy1

0xeb15,	// (0x000108c1) grid_highlight_pane_cp4

0xeb1d,	// (0x000108c9) bg_popup_window_pane_cp8_ParamLimits

0xeb1d,	// (0x000108c9) bg_popup_window_pane_cp8

0xeb38,	// (0x000108e4) popup_snote_single_text_window_g1_ParamLimits

0xeb38,	// (0x000108e4) popup_snote_single_text_window_g1

0xeb4a,	// (0x000108f6) popup_snote_single_text_window_t1_ParamLimits

0xeb4a,	// (0x000108f6) popup_snote_single_text_window_t1

0xeb5d,	// (0x00010909) popup_snote_single_text_window_t2_ParamLimits

0xeb5d,	// (0x00010909) popup_snote_single_text_window_t2

0xeb70,	// (0x0001091c) popup_snote_single_text_window_t3_ParamLimits

0xeb70,	// (0x0001091c) popup_snote_single_text_window_t3

0xeba9,	// (0x00010955) popup_snote_single_text_window_t4_ParamLimits

0xeba9,	// (0x00010955) popup_snote_single_text_window_t4

0xebdd,	// (0x00010989) popup_snote_single_text_window_t5_ParamLimits

0xebdd,	// (0x00010989) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00011352) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00011352) popup_snote_single_text_window_t

0xec0c,	// (0x000109b8) bg_popup_window_pane_cp9_ParamLimits

0xec0c,	// (0x000109b8) bg_popup_window_pane_cp9

0xeb38,	// (0x000108e4) popup_snote_single_graphic_window_g1_ParamLimits

0xeb38,	// (0x000108e4) popup_snote_single_graphic_window_g1

0xec1a,	// (0x000109c6) popup_snote_single_graphic_window_g2_ParamLimits

0xec1a,	// (0x000109c6) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001135d) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001135d) popup_snote_single_graphic_window_g

0xec26,	// (0x000109d2) popup_snote_single_graphic_window_t1_ParamLimits

0xec26,	// (0x000109d2) popup_snote_single_graphic_window_t1

0xec39,	// (0x000109e5) popup_snote_single_graphic_window_t2_ParamLimits

0xec39,	// (0x000109e5) popup_snote_single_graphic_window_t2

0xec4c,	// (0x000109f8) popup_snote_single_graphic_window_t3_ParamLimits

0xec4c,	// (0x000109f8) popup_snote_single_graphic_window_t3

0xec85,	// (0x00010a31) popup_snote_single_graphic_window_t4_ParamLimits

0xec85,	// (0x00010a31) popup_snote_single_graphic_window_t4

0xecb9,	// (0x00010a65) popup_snote_single_graphic_window_t5_ParamLimits

0xecb9,	// (0x00010a65) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00011362) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00011362) popup_snote_single_graphic_window_t

0x365a,	// (0x00005406) grid_graphic_popup_pane_ParamLimits

0x365a,	// (0x00005406) grid_graphic_popup_pane

0x3688,	// (0x00005434) listscroll_popup_graphic_pane_g1_ParamLimits

0x3688,	// (0x00005434) listscroll_popup_graphic_pane_g1

0xc1a7,	// (0x0000df53) listscroll_popup_graphic_pane_g2_ParamLimits

0xc1a7,	// (0x0000df53) listscroll_popup_graphic_pane_g2

0x0001,

0xf99f,	// (0x0001174b) listscroll_popup_graphic_pane_g_ParamLimits

0xf99f,	// (0x0001174b) listscroll_popup_graphic_pane_g

0x36b0,	// (0x0000545c) scroll_pane_cp5

0xc146,	// (0x0000def2) cell_graphic_popup_pane_ParamLimits

0xc146,	// (0x0000def2) cell_graphic_popup_pane

0x35d0,	// (0x0000537c) cell_graphic_popup_pane_g1

0x35d8,	// (0x00005384) cell_graphic_popup_pane_g2

0xeb0c,	// (0x000108b8) cell_graphic_popup_pane_g3

0x0002,

0xf998,	// (0x00011744) cell_graphic_popup_pane_g

0x35e1,	// (0x0000538d) cell_graphic_popup_pane_t2

0xeb15,	// (0x000108c1) grid_highlight_pane_cp3

0xecfa,	// (0x00010aa6) list_gen_pane_ParamLimits

0xecfa,	// (0x00010aa6) list_gen_pane

0xed22,	// (0x00010ace) scroll_pane

0xc0fd,	// (0x0000dea9) bg_list_pane_g1_ParamLimits

0xc0fd,	// (0x0000dea9) bg_list_pane_g1

0x3545,	// (0x000052f1) bg_list_pane_g2_ParamLimits

0x3545,	// (0x000052f1) bg_list_pane_g2

0x355a,	// (0x00005306) bg_list_pane_g3_ParamLimits

0x355a,	// (0x00005306) bg_list_pane_g3

0x356e,	// (0x0000531a) bg_list_pane_g4_ParamLimits

0x356e,	// (0x0000531a) bg_list_pane_g4

0xc11a,	// (0x0000dec6) bg_list_pane_g5_ParamLimits

0xc11a,	// (0x0000dec6) bg_list_pane_g5

0x0004,

0xf98d,	// (0x00011739) bg_list_pane_g_ParamLimits

0xf98d,	// (0x00011739) bg_list_pane_g

0xc097,	// (0x0000de43) list_double2_graphic_large_graphic_pane_ParamLimits

0xc097,	// (0x0000de43) list_double2_graphic_large_graphic_pane

0xc097,	// (0x0000de43) list_double2_graphic_pane_ParamLimits

0xc097,	// (0x0000de43) list_double2_graphic_pane

0xc097,	// (0x0000de43) list_double2_large_graphic_pane_ParamLimits

0xc097,	// (0x0000de43) list_double2_large_graphic_pane

0xc097,	// (0x0000de43) list_double2_pane_ParamLimits

0xc097,	// (0x0000de43) list_double2_pane

0xc097,	// (0x0000de43) list_double_graphic_heading_pane_ParamLimits

0xc097,	// (0x0000de43) list_double_graphic_heading_pane

0xc097,	// (0x0000de43) list_double_graphic_pane_ParamLimits

0xc097,	// (0x0000de43) list_double_graphic_pane

0xc097,	// (0x0000de43) list_double_heading_pane_ParamLimits

0xc097,	// (0x0000de43) list_double_heading_pane

0xc097,	// (0x0000de43) list_double_large_graphic_pane_ParamLimits

0xc097,	// (0x0000de43) list_double_large_graphic_pane

0xc097,	// (0x0000de43) list_double_number_pane_ParamLimits

0xc097,	// (0x0000de43) list_double_number_pane

0xc097,	// (0x0000de43) list_double_pane_ParamLimits

0xc097,	// (0x0000de43) list_double_pane

0xc097,	// (0x0000de43) list_double_time_pane_ParamLimits

0xc097,	// (0x0000de43) list_double_time_pane

0xc097,	// (0x0000de43) list_setting_number_pane_ParamLimits

0xc097,	// (0x0000de43) list_setting_number_pane

0xc097,	// (0x0000de43) list_setting_pane_ParamLimits

0xc097,	// (0x0000de43) list_setting_pane

0xc0ab,	// (0x0000de57) list_single_2graphic_pane_ParamLimits

0xc0ab,	// (0x0000de57) list_single_2graphic_pane

0xc0ab,	// (0x0000de57) list_single_graphic_heading_pane_ParamLimits

0xc0ab,	// (0x0000de57) list_single_graphic_heading_pane

0xc0ab,	// (0x0000de57) list_single_graphic_pane_ParamLimits

0xc0ab,	// (0x0000de57) list_single_graphic_pane

0xc0ab,	// (0x0000de57) list_single_heading_pane_ParamLimits

0xc0ab,	// (0x0000de57) list_single_heading_pane

0xc0ab,	// (0x0000de57) list_single_large_graphic_pane_ParamLimits

0xc0ab,	// (0x0000de57) list_single_large_graphic_pane

0xc0ab,	// (0x0000de57) list_single_number_heading_pane_ParamLimits

0xc0ab,	// (0x0000de57) list_single_number_heading_pane

0xc0ab,	// (0x0000de57) list_single_number_pane_ParamLimits

0xc0ab,	// (0x0000de57) list_single_number_pane

0xc0ab,	// (0x0000de57) list_single_pane_ParamLimits

0xc0ab,	// (0x0000de57) list_single_pane

0xe614,	// (0x000103c0) list_highlight_pane_cp1

0x0835,	// (0x000025e1) list_single_pane_g1_ParamLimits

0x0835,	// (0x000025e1) list_single_pane_g1

0x18d5,	// (0x00003681) list_single_pane_g2_ParamLimits

0x18d5,	// (0x00003681) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00011374) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00011374) list_single_pane_g

0x3e02,	// (0x00005bae) list_single_pane_t1_ParamLimits

0x3e02,	// (0x00005bae) list_single_pane_t1

0x0835,	// (0x000025e1) list_single_number_pane_g1_ParamLimits

0x0835,	// (0x000025e1) list_single_number_pane_g1

0x18d5,	// (0x00003681) list_single_number_pane_g2_ParamLimits

0x18d5,	// (0x00003681) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00011374) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00011374) list_single_number_pane_g

0x19bf,	// (0x0000376b) list_single_number_pane_t1_ParamLimits

0x19bf,	// (0x0000376b) list_single_number_pane_t1

0x3efb,	// (0x00005ca7) list_single_number_pane_t2_ParamLimits

0x3efb,	// (0x00005ca7) list_single_number_pane_t2

0x0001,

0xf94e,	// (0x000116fa) list_single_number_pane_t_ParamLimits

0xf94e,	// (0x000116fa) list_single_number_pane_t

0x56a5,	// (0x00007451) list_single_graphic_pane_g1_ParamLimits

0x56a5,	// (0x00007451) list_single_graphic_pane_g1

0x0835,	// (0x000025e1) list_single_graphic_pane_g2_ParamLimits

0x0835,	// (0x000025e1) list_single_graphic_pane_g2

0x18d5,	// (0x00003681) list_single_graphic_pane_g3_ParamLimits

0x18d5,	// (0x00003681) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001136d) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001136d) list_single_graphic_pane_g

0xa420,	// (0x0000c1cc) list_single_graphic_pane_t1_ParamLimits

0xa420,	// (0x0000c1cc) list_single_graphic_pane_t1

0x0835,	// (0x000025e1) list_single_heading_pane_g1_ParamLimits

0x0835,	// (0x000025e1) list_single_heading_pane_g1

0x18d5,	// (0x00003681) list_single_heading_pane_g2_ParamLimits

0x18d5,	// (0x00003681) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00011374) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00011374) list_single_heading_pane_g

0xa436,	// (0x0000c1e2) list_single_heading_pane_t1_ParamLimits

0xa436,	// (0x0000c1e2) list_single_heading_pane_t1

0xa44c,	// (0x0000c1f8) list_single_heading_pane_t2_ParamLimits

0xa44c,	// (0x0000c1f8) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00011379) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00011379) list_single_heading_pane_t

0x0835,	// (0x000025e1) list_single_number_heading_pane_g1_ParamLimits

0x0835,	// (0x000025e1) list_single_number_heading_pane_g1

0x18d5,	// (0x00003681) list_single_number_heading_pane_g2_ParamLimits

0x18d5,	// (0x00003681) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00011374) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00011374) list_single_number_heading_pane_g

0xa436,	// (0x0000c1e2) list_single_number_heading_pane_t1_ParamLimits

0xa436,	// (0x0000c1e2) list_single_number_heading_pane_t1

0x3dcc,	// (0x00005b78) list_single_number_heading_pane_t2_ParamLimits

0x3dcc,	// (0x00005b78) list_single_number_heading_pane_t2

0x3dde,	// (0x00005b8a) list_single_number_heading_pane_t3_ParamLimits

0x3dde,	// (0x00005b8a) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001137e) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001137e) list_single_number_heading_pane_t

0x18c9,	// (0x00003675) list_single_graphic_heading_pane_g1_ParamLimits

0x18c9,	// (0x00003675) list_single_graphic_heading_pane_g1

0xa45e,	// (0x0000c20a) list_single_graphic_heading_pane_g4_ParamLimits

0xa45e,	// (0x0000c20a) list_single_graphic_heading_pane_g4

0x18d5,	// (0x00003681) list_single_graphic_heading_pane_g5_ParamLimits

0x18d5,	// (0x00003681) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00011385) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00011385) list_single_graphic_heading_pane_g

0xa436,	// (0x0000c1e2) list_single_graphic_heading_pane_t1_ParamLimits

0xa436,	// (0x0000c1e2) list_single_graphic_heading_pane_t1

0xa46f,	// (0x0000c21b) list_single_graphic_heading_pane_t2_ParamLimits

0xa46f,	// (0x0000c21b) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001138c) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001138c) list_single_graphic_heading_pane_t

0x3e18,	// (0x00005bc4) list_single_large_graphic_pane_g1_ParamLimits

0x3e18,	// (0x00005bc4) list_single_large_graphic_pane_g1

0x0835,	// (0x000025e1) list_single_large_graphic_pane_g2_ParamLimits

0x0835,	// (0x000025e1) list_single_large_graphic_pane_g2

0x18d5,	// (0x00003681) list_single_large_graphic_pane_g3_ParamLimits

0x18d5,	// (0x00003681) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00011391) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00011391) list_single_large_graphic_pane_g

0x2200,	// (0x00003fac) wait_border_pane_g2_copy1

0xa481,	// (0x0000c22d) list_single_large_graphic_pane_g4_cp2

0x3e24,	// (0x00005bd0) list_single_large_graphic_pane_t1_ParamLimits

0x3e24,	// (0x00005bd0) list_single_large_graphic_pane_t1

0xa489,	// (0x0000c235) list_double_pane_g1_ParamLimits

0xa489,	// (0x0000c235) list_double_pane_g1

0xa495,	// (0x0000c241) list_double_pane_g2_ParamLimits

0xa495,	// (0x0000c241) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00011398) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00011398) list_double_pane_g

0xa4a1,	// (0x0000c24d) list_double_pane_t1_ParamLimits

0xa4a1,	// (0x0000c24d) list_double_pane_t1

0xa4b7,	// (0x0000c263) list_double_pane_t2_ParamLimits

0xa4b7,	// (0x0000c263) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001139d) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001139d) list_double_pane_t

0xa4c9,	// (0x0000c275) list_double2_pane_g1_ParamLimits

0xa4c9,	// (0x0000c275) list_double2_pane_g1

0xa4da,	// (0x0000c286) list_double2_pane_g2_ParamLimits

0xa4da,	// (0x0000c286) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x000113a2) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x000113a2) list_double2_pane_g

0xa4e6,	// (0x0000c292) list_double2_pane_t1_ParamLimits

0xa4e6,	// (0x0000c292) list_double2_pane_t1

0xa4fc,	// (0x0000c2a8) list_double2_pane_t2_ParamLimits

0xa4fc,	// (0x0000c2a8) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x000113a7) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x000113a7) list_double2_pane_t

0xa489,	// (0x0000c235) list_double_number_pane_g1_ParamLimits

0xa489,	// (0x0000c235) list_double_number_pane_g1

0xa495,	// (0x0000c241) list_double_number_pane_g2_ParamLimits

0xa495,	// (0x0000c241) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00011398) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00011398) list_double_number_pane_g

0xa50e,	// (0x0000c2ba) list_double_number_pane_t1_ParamLimits

0xa50e,	// (0x0000c2ba) list_double_number_pane_t1

0xa520,	// (0x0000c2cc) list_double_number_pane_t2_ParamLimits

0xa520,	// (0x0000c2cc) list_double_number_pane_t2

0xa536,	// (0x0000c2e2) list_double_number_pane_t3_ParamLimits

0xa536,	// (0x0000c2e2) list_double_number_pane_t3

0x0002,

0xf600,	// (0x000113ac) list_double_number_pane_t_ParamLimits

0xf600,	// (0x000113ac) list_double_number_pane_t

0xa548,	// (0x0000c2f4) list_double_graphic_pane_g1_ParamLimits

0xa548,	// (0x0000c2f4) list_double_graphic_pane_g1

0xa554,	// (0x0000c300) list_double_graphic_pane_g2_ParamLimits

0xa554,	// (0x0000c300) list_double_graphic_pane_g2

0xa563,	// (0x0000c30f) list_double_graphic_pane_g3_ParamLimits

0xa563,	// (0x0000c30f) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x000113b3) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x000113b3) list_double_graphic_pane_g

0xa57b,	// (0x0000c327) list_double_graphic_pane_t1_ParamLimits

0xa57b,	// (0x0000c327) list_double_graphic_pane_t1

0xa591,	// (0x0000c33d) list_double_graphic_pane_t2_ParamLimits

0xa591,	// (0x0000c33d) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x000113bc) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x000113bc) list_double_graphic_pane_t

0xa5a3,	// (0x0000c34f) list_double2_graphic_pane_g1_ParamLimits

0xa5a3,	// (0x0000c34f) list_double2_graphic_pane_g1

0xa5af,	// (0x0000c35b) list_double2_graphic_pane_g2_ParamLimits

0xa5af,	// (0x0000c35b) list_double2_graphic_pane_g2

0xa4da,	// (0x0000c286) list_double2_graphic_pane_g3_ParamLimits

0xa4da,	// (0x0000c286) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x000113c1) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x000113c1) list_double2_graphic_pane_g

0xa5bb,	// (0x0000c367) list_double2_graphic_pane_t1_ParamLimits

0xa5bb,	// (0x0000c367) list_double2_graphic_pane_t1

0xa5d1,	// (0x0000c37d) list_double2_graphic_pane_t2_ParamLimits

0xa5d1,	// (0x0000c37d) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x000113c8) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x000113c8) list_double2_graphic_pane_t

0xa5e3,	// (0x0000c38f) list_double_large_graphic_pane_g1_ParamLimits

0xa5e3,	// (0x0000c38f) list_double_large_graphic_pane_g1

0xa602,	// (0x0000c3ae) list_double_large_graphic_pane_g2_ParamLimits

0xa602,	// (0x0000c3ae) list_double_large_graphic_pane_g2

0xa495,	// (0x0000c241) list_double_large_graphic_pane_g3_ParamLimits

0xa495,	// (0x0000c241) list_double_large_graphic_pane_g3

0xa613,	// (0x0000c3bf) list_double_large_graphic_pane_g4_ParamLimits

0xa613,	// (0x0000c3bf) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x000113cd) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x000113cd) list_double_large_graphic_pane_g

0xa625,	// (0x0000c3d1) list_double_large_graphic_pane_t1_ParamLimits

0xa625,	// (0x0000c3d1) list_double_large_graphic_pane_t1

0xa63e,	// (0x0000c3ea) list_double_large_graphic_pane_t2_ParamLimits

0xa63e,	// (0x0000c3ea) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x000113d8) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x000113d8) list_double_large_graphic_pane_t

0xa650,	// (0x0000c3fc) list_double2_large_graphic_pane_g1_ParamLimits

0xa650,	// (0x0000c3fc) list_double2_large_graphic_pane_g1

0xa4c9,	// (0x0000c275) list_double2_large_graphic_pane_g2_ParamLimits

0xa4c9,	// (0x0000c275) list_double2_large_graphic_pane_g2

0xa4da,	// (0x0000c286) list_double2_large_graphic_pane_g3_ParamLimits

0xa4da,	// (0x0000c286) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x000113dd) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x000113dd) list_double2_large_graphic_pane_g

0xa65c,	// (0x0000c408) list_double2_large_graphic_pane_t1_ParamLimits

0xa65c,	// (0x0000c408) list_double2_large_graphic_pane_t1

0xa672,	// (0x0000c41e) list_double2_large_graphic_pane_t2_ParamLimits

0xa672,	// (0x0000c41e) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x000113e4) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x000113e4) list_double2_large_graphic_pane_t

0xa684,	// (0x0000c430) list_double_heading_pane_g1_ParamLimits

0xa684,	// (0x0000c430) list_double_heading_pane_g1

0xa695,	// (0x0000c441) list_double_heading_pane_g2_ParamLimits

0xa695,	// (0x0000c441) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x000113e9) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x000113e9) list_double_heading_pane_g

0xa6a1,	// (0x0000c44d) list_double_heading_pane_t1_ParamLimits

0xa6a1,	// (0x0000c44d) list_double_heading_pane_t1

0xa6b7,	// (0x0000c463) list_double_heading_pane_t2_ParamLimits

0xa6b7,	// (0x0000c463) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x000113ee) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x000113ee) list_double_heading_pane_t

0xa6c9,	// (0x0000c475) list_double_graphic_heading_pane_g1_ParamLimits

0xa6c9,	// (0x0000c475) list_double_graphic_heading_pane_g1

0xa684,	// (0x0000c430) list_double_graphic_heading_pane_g2_ParamLimits

0xa684,	// (0x0000c430) list_double_graphic_heading_pane_g2

0xa695,	// (0x0000c441) list_double_graphic_heading_pane_g3_ParamLimits

0xa695,	// (0x0000c441) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x000113f3) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x000113f3) list_double_graphic_heading_pane_g

0xa6d5,	// (0x0000c481) list_double_graphic_heading_pane_t1_ParamLimits

0xa6d5,	// (0x0000c481) list_double_graphic_heading_pane_t1

0xa6eb,	// (0x0000c497) list_double_graphic_heading_pane_t2_ParamLimits

0xa6eb,	// (0x0000c497) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x000113fa) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x000113fa) list_double_graphic_heading_pane_t

0xa602,	// (0x0000c3ae) list_double_time_pane_g1_ParamLimits

0xa602,	// (0x0000c3ae) list_double_time_pane_g1

0xa495,	// (0x0000c241) list_double_time_pane_g2_ParamLimits

0xa495,	// (0x0000c241) list_double_time_pane_g2

0x0001,

0xf653,	// (0x000113ff) list_double_time_pane_g_ParamLimits

0xf653,	// (0x000113ff) list_double_time_pane_g

0xa6fd,	// (0x0000c4a9) list_double_time_pane_t1_ParamLimits

0xa6fd,	// (0x0000c4a9) list_double_time_pane_t1

0xa713,	// (0x0000c4bf) list_double_time_pane_t2_ParamLimits

0xa713,	// (0x0000c4bf) list_double_time_pane_t2

0xa725,	// (0x0000c4d1) list_double_time_pane_t3_ParamLimits

0xa725,	// (0x0000c4d1) list_double_time_pane_t3

0xa737,	// (0x0000c4e3) list_double_time_pane_t4_ParamLimits

0xa737,	// (0x0000c4e3) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00011404) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00011404) list_double_time_pane_t

0xa5af,	// (0x0000c35b) list_setting_pane_g1_ParamLimits

0xa5af,	// (0x0000c35b) list_setting_pane_g1

0xa4da,	// (0x0000c286) list_setting_pane_g2_ParamLimits

0xa4da,	// (0x0000c286) list_setting_pane_g2

0x0001,

0xf661,	// (0x0001140d) list_setting_pane_g_ParamLimits

0xf661,	// (0x0001140d) list_setting_pane_g

0xa749,	// (0x0000c4f5) list_setting_pane_t1_ParamLimits

0xa749,	// (0x0000c4f5) list_setting_pane_t1

0xa760,	// (0x0000c50c) list_setting_pane_t2_ParamLimits

0xa760,	// (0x0000c50c) list_setting_pane_t2

0x0002,

0xf666,	// (0x00011412) list_setting_pane_t_ParamLimits

0xf666,	// (0x00011412) list_setting_pane_t

0xa79f,	// (0x0000c54b) set_value_pane_cp_ParamLimits

0xa79f,	// (0x0000c54b) set_value_pane_cp

0xa5af,	// (0x0000c35b) list_setting_number_pane_g1_ParamLimits

0xa5af,	// (0x0000c35b) list_setting_number_pane_g1

0xa4da,	// (0x0000c286) list_setting_number_pane_g2_ParamLimits

0xa4da,	// (0x0000c286) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x0001140d) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x0001140d) list_setting_number_pane_g

0xa7ad,	// (0x0000c559) list_setting_number_pane_t1_ParamLimits

0xa7ad,	// (0x0000c559) list_setting_number_pane_t1

0xa7c1,	// (0x0000c56d) list_setting_number_pane_t2_ParamLimits

0xa7c1,	// (0x0000c56d) list_setting_number_pane_t2

0xa7d8,	// (0x0000c584) list_setting_number_pane_t3_ParamLimits

0xa7d8,	// (0x0000c584) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x00011419) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x00011419) list_setting_number_pane_t

0xa79f,	// (0x0000c54b) set_value_pane_ParamLimits

0xa79f,	// (0x0000c54b) set_value_pane

0xed6b,	// (0x00010b17) bg_set_opt_pane_ParamLimits

0xed6b,	// (0x00010b17) bg_set_opt_pane

0xed8c,	// (0x00010b38) set_value_pane_t1

0xed9a,	// (0x00010b46) slider_set_pane_cp3

0xeda3,	// (0x00010b4f) volume_small_pane_cp

0xedac,	// (0x00010b58) list_form_gen_pane

0xedb5,	// (0x00010b61) scroll_pane_cp8

0xa81b,	// (0x0000c5c7) form_field_data_pane_ParamLimits

0xa81b,	// (0x0000c5c7) form_field_data_pane

0xa836,	// (0x0000c5e2) form_field_data_wide_pane_ParamLimits

0xa836,	// (0x0000c5e2) form_field_data_wide_pane

0xa85a,	// (0x0000c606) form_field_popup_pane_ParamLimits

0xa85a,	// (0x0000c606) form_field_popup_pane

0xedd6,	// (0x00010b82) form_field_popup_wide_pane_ParamLimits

0xedd6,	// (0x00010b82) form_field_popup_wide_pane

0xedf7,	// (0x00010ba3) form_field_slider_pane_ParamLimits

0xedf7,	// (0x00010ba3) form_field_slider_pane

0xee0a,	// (0x00010bb6) form_field_slider_wide_pane_ParamLimits

0xee0a,	// (0x00010bb6) form_field_slider_wide_pane

0xee1d,	// (0x00010bc9) data_form_pane

0xa886,	// (0x0000c632) form_field_data_pane_t1

0xee29,	// (0x00010bd5) input_focus_pane

0xee37,	// (0x00010be3) data_form_wide_pane

0xee6f,	// (0x00010c1b) form_field_data_wide_pane_t1

0xeb2a,	// (0x000108d6) input_focus_pane_cp6

0xa8a0,	// (0x0000c64c) form_field_popup_pane_t1

0xee29,	// (0x00010bd5) input_focus_pane_cp7

0xee9a,	// (0x00010c46) list_form_pane

0xeeae,	// (0x00010c5a) form_field_popup_wide_pane_t1

0xee29,	// (0x00010bd5) input_focus_pane_cp8

0xeec0,	// (0x00010c6c) list_form_wide_pane

0xa8c2,	// (0x0000c66e) form_field_slider_pane_t1_ParamLimits

0xa8c2,	// (0x0000c66e) form_field_slider_pane_t1

0xa8da,	// (0x0000c686) form_field_slider_pane_t2_ParamLimits

0xa8da,	// (0x0000c686) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x00011429) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x00011429) form_field_slider_pane_t

0xe6b6,	// (0x00010462) input_focus_pane_cp9_ParamLimits

0xe6b6,	// (0x00010462) input_focus_pane_cp9

0xa8ef,	// (0x0000c69b) slider_cont_pane_ParamLimits

0xa8ef,	// (0x0000c69b) slider_cont_pane

0xeecc,	// (0x00010c78) form_field_slider_wide_pane_t1_ParamLimits

0xeecc,	// (0x00010c78) form_field_slider_wide_pane_t1

0xeede,	// (0x00010c8a) form_field_slider_wide_pane_t2_ParamLimits

0xeede,	// (0x00010c8a) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0001142e) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0001142e) form_field_slider_wide_pane_t

0xe6b6,	// (0x00010462) input_focus_pane_cp10_ParamLimits

0xe6b6,	// (0x00010462) input_focus_pane_cp10

0xa903,	// (0x0000c6af) slider_cont_pane_cp1_ParamLimits

0xa903,	// (0x0000c6af) slider_cont_pane_cp1

0xa917,	// (0x0000c6c3) slider_form_pane_cp

0xeef0,	// (0x00010c9c) input_focus_pane_g1

0xeef8,	// (0x00010ca4) input_focus_pane_g2

0xef00,	// (0x00010cac) input_focus_pane_g3

0xef08,	// (0x00010cb4) input_focus_pane_g4

0xef10,	// (0x00010cbc) input_focus_pane_g5

0xef18,	// (0x00010cc4) input_focus_pane_g6

0xef20,	// (0x00010ccc) input_focus_pane_g7

0xef28,	// (0x00010cd4) input_focus_pane_g8

0xef30,	// (0x00010cdc) input_focus_pane_g9

0xe49b,	// (0x00010247) input_focus_pane_g10

0x0009,

0xf687,	// (0x00011433) input_focus_pane_g

0x2209,	// (0x00003fb5) wait_border_pane_g3_copy1

0xa91f,	// (0x0000c6cb) data_form_pane_t1

0xe49b,	// (0x00010247) wait_anim_pane_g1_copy1

0xc06c,	// (0x0000de18) data_form_wide_pane_t1

0xef38,	// (0x00010ce4) list_form_graphic_pane_cp_ParamLimits

0xef38,	// (0x00010ce4) list_form_graphic_pane_cp

0x33c5,	// (0x00005171) slider_form_pane_g1

0x33ce,	// (0x0000517a) slider_form_pane_g2

0x0006,

0xf97e,	// (0x0001172a) slider_form_pane_g

0xa93b,	// (0x0000c6e7) list_form_graphic_pane_ParamLimits

0xa93b,	// (0x0000c6e7) list_form_graphic_pane

0xef4a,	// (0x00010cf6) list_form_graphic_pane_g1

0xef52,	// (0x00010cfe) list_form_graphic_pane_t1_ParamLimits

0xef52,	// (0x00010cfe) list_form_graphic_pane_t1

0xe6ce,	// (0x0001047a) list_highlight_pane_cp5_ParamLimits

0xe6ce,	// (0x0001047a) list_highlight_pane_cp5

0xa94c,	// (0x0000c6f8) find_pane_g1

0xef67,	// (0x00010d13) input_find_pane

0xa955,	// (0x0000c701) input_find_pane_g1_ParamLimits

0xa955,	// (0x0000c701) input_find_pane_g1

0xa961,	// (0x0000c70d) input_find_pane_t1_ParamLimits

0xa961,	// (0x0000c70d) input_find_pane_t1

0xa976,	// (0x0000c722) input_find_pane_t2_ParamLimits

0xa976,	// (0x0000c722) input_find_pane_t2

0x0001,

0xf69c,	// (0x00011448) input_find_pane_t_ParamLimits

0xf69c,	// (0x00011448) input_find_pane_t

0xef70,	// (0x00010d1c) input_focus_pane_cp5_ParamLimits

0xef70,	// (0x00010d1c) input_focus_pane_cp5

0xef7e,	// (0x00010d2a) bg_popup_window_pane_cp2_ParamLimits

0xef7e,	// (0x00010d2a) bg_popup_window_pane_cp2

0xef8b,	// (0x00010d37) listscroll_menu_pane_ParamLimits

0xef8b,	// (0x00010d37) listscroll_menu_pane

0xa997,	// (0x0000c743) popup_submenu_window_ParamLimits

0xa997,	// (0x0000c743) popup_submenu_window

0xef97,	// (0x00010d43) find_popup_pane_g1

0xef9f,	// (0x00010d4b) input_popup_find_pane_cp

0xef70,	// (0x00010d1c) input_focus_pane_cp4_ParamLimits

0xef70,	// (0x00010d1c) input_focus_pane_cp4

0xefa9,	// (0x00010d55) input_popup_find_pane_t1_ParamLimits

0xefa9,	// (0x00010d55) input_popup_find_pane_t1

0xe614,	// (0x000103c0) bg_popup_sub_pane_cp

0xefd7,	// (0x00010d83) listscroll_popup_sub_pane

0xefdf,	// (0x00010d8b) list_submenu_pane_ParamLimits

0xefdf,	// (0x00010d8b) list_submenu_pane

0xeff0,	// (0x00010d9c) scroll_pane_cp4

0xeff8,	// (0x00010da4) list_single_popup_submenu_pane_ParamLimits

0xeff8,	// (0x00010da4) list_single_popup_submenu_pane

0xf00d,	// (0x00010db9) list_single_popup_submenu_pane_g1

0xf015,	// (0x00010dc1) list_single_popup_submenu_pane_t1_ParamLimits

0xf015,	// (0x00010dc1) list_single_popup_submenu_pane_t1

0xe6b6,	// (0x00010462) bg_active_tab_pane_cp1_ParamLimits

0xe6b6,	// (0x00010462) bg_active_tab_pane_cp1

0xa9d5,	// (0x0000c781) tabs_2_active_pane_g1

0xa9dd,	// (0x0000c789) tabs_2_active_pane_t1

0xe6b6,	// (0x00010462) bg_passive_tab_pane_cp1_ParamLimits

0xe6b6,	// (0x00010462) bg_passive_tab_pane_cp1

0xa9d5,	// (0x0000c781) tabs_2_passive_pane_g1

0xa9dd,	// (0x0000c789) tabs_2_passive_pane_t1

0xe6ce,	// (0x0001047a) bg_active_tab_pane_cp4

0xa9ef,	// (0x0000c79b) tabs_2_long_active_pane_t1

0x0e22,	// (0x00002bce) bg_passive_tab_pane_cp4

0x1a9e,	// (0x0000384a) list_single_midp_graphic_pane_g4_ParamLimits

0xe6ce,	// (0x0001047a) bg_active_tab_pane_cp5

0xaa02,	// (0x0000c7ae) tabs_3_long_active_pane_t1

0x0e22,	// (0x00002bce) bg_passive_tab_pane_cp5

0x1a9e,	// (0x0000384a) list_single_midp_graphic_pane_g4

0xe6ce,	// (0x0001047a) bg_popup_window_pane_cp13_ParamLimits

0xe6ce,	// (0x0001047a) bg_popup_window_pane_cp13

0xf033,	// (0x00010ddf) listscroll_popup_fast_pane_ParamLimits

0xf033,	// (0x00010ddf) listscroll_popup_fast_pane

0xf042,	// (0x00010dee) grid_popup_fast_pane_ParamLimits

0xf042,	// (0x00010dee) grid_popup_fast_pane

0xf054,	// (0x00010e00) scroll_pane_cp9_ParamLimits

0xf054,	// (0x00010e00) scroll_pane_cp9

0x572b,	// (0x000074d7) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x572b,	// (0x000074d7) list_single_graphic_hl_pane_t1_cp2

0xf078,	// (0x00010e24) input_focus_pane_cp20_ParamLimits

0xf078,	// (0x00010e24) input_focus_pane_cp20

0xf086,	// (0x00010e32) query_popup_data_pane_t1_ParamLimits

0xf086,	// (0x00010e32) query_popup_data_pane_t1

0xf099,	// (0x00010e45) query_popup_data_pane_t2_ParamLimits

0xf099,	// (0x00010e45) query_popup_data_pane_t2

0xf0ed,	// (0x00010e99) query_popup_data_pane_t3_ParamLimits

0xf0ed,	// (0x00010e99) query_popup_data_pane_t3

0xf12e,	// (0x00010eda) query_popup_data_pane_t4_ParamLimits

0xf12e,	// (0x00010eda) query_popup_data_pane_t4

0xf16a,	// (0x00010f16) query_popup_data_pane_t5_ParamLimits

0xf16a,	// (0x00010f16) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0001144d) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0001144d) query_popup_data_pane_t

0xeef0,	// (0x00010c9c) bg_set_opt_pane_g1

0xeef8,	// (0x00010ca4) bg_set_opt_pane_g2

0xef00,	// (0x00010cac) bg_set_opt_pane_g3

0xef08,	// (0x00010cb4) bg_set_opt_pane_g4

0xef10,	// (0x00010cbc) bg_set_opt_pane_g5

0xef18,	// (0x00010cc4) bg_set_opt_pane_g6

0xef20,	// (0x00010ccc) bg_set_opt_pane_g7

0xef28,	// (0x00010cd4) bg_set_opt_pane_g8

0xef30,	// (0x00010cdc) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x00011458) bg_set_opt_pane_g

0x041b,	// (0x000021c7) control_top_pane_stacon_ParamLimits

0x041b,	// (0x000021c7) control_top_pane_stacon

0x046e,	// (0x0000221a) signal_pane_stacon_ParamLimits

0x046e,	// (0x0000221a) signal_pane_stacon

0x0493,	// (0x0000223f) stacon_top_pane_g1_ParamLimits

0x0493,	// (0x0000223f) stacon_top_pane_g1

0x04b5,	// (0x00002261) title_pane_stacon_ParamLimits

0x04b5,	// (0x00002261) title_pane_stacon

0x04df,	// (0x0000228b) uni_indicator_pane_stacon_ParamLimits

0x04df,	// (0x0000228b) uni_indicator_pane_stacon

0x04f4,	// (0x000022a0) battery_pane_stacon_ParamLimits

0x04f4,	// (0x000022a0) battery_pane_stacon

0x0538,	// (0x000022e4) control_bottom_pane_stacon_ParamLimits

0x0538,	// (0x000022e4) control_bottom_pane_stacon

0x055b,	// (0x00002307) navi_pane_stacon_ParamLimits

0x055b,	// (0x00002307) navi_pane_stacon

0x057e,	// (0x0000232a) stacon_bottom_pane_g1_ParamLimits

0x057e,	// (0x0000232a) stacon_bottom_pane_g1

0xf1a1,	// (0x00010f4d) aid_levels_signal_lsc_ParamLimits

0xf1a1,	// (0x00010f4d) aid_levels_signal_lsc

0xf1b8,	// (0x00010f64) signal_pane_stacon_g1_ParamLimits

0xf1b8,	// (0x00010f64) signal_pane_stacon_g1

0xf1cc,	// (0x00010f78) signal_pane_stacon_g2_ParamLimits

0xf1cc,	// (0x00010f78) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0001146b) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0001146b) signal_pane_stacon_g

0xf20e,	// (0x00010fba) title_pane_stacon_t1_ParamLimits

0xf20e,	// (0x00010fba) title_pane_stacon_t1

0xf233,	// (0x00010fdf) uni_indicator_pane_stacon_g1

0xf23d,	// (0x00010fe9) uni_indicator_pane_stacon_g2

0xf247,	// (0x00010ff3) uni_indicator_pane_stacon_g3

0xf251,	// (0x00010ffd) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x00011477) uni_indicator_pane_stacon_g

0xf25b,	// (0x00011007) control_top_pane_stacon_g1

0xf263,	// (0x0001100f) control_top_pane_stacon_t1_ParamLimits

0xf263,	// (0x0001100f) control_top_pane_stacon_t1

0xf29a,	// (0x00011046) aid_levels_battery_lsc_ParamLimits

0xf29a,	// (0x00011046) aid_levels_battery_lsc

0xf2b2,	// (0x0001105e) battery_pane_stacon_g1_ParamLimits

0xf2b2,	// (0x0001105e) battery_pane_stacon_g1

0xf2c5,	// (0x00011071) battery_pane_stacon_g2_ParamLimits

0xf2c5,	// (0x00011071) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x00011480) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x00011480) battery_pane_stacon_g

0xf303,	// (0x000110af) navi_icon_pane_stacon

0xf317,	// (0x000110c3) navi_navi_pane_stacon

0xf303,	// (0x000110af) navi_text_pane_stacon

0xf25b,	// (0x00011007) control_bottom_pane_stacon_g1

0xf32d,	// (0x000110d9) control_bottom_pane_stacon_t1_ParamLimits

0xf32d,	// (0x000110d9) control_bottom_pane_stacon_t1

0xaa14,	// (0x0000c7c0) grid_app_pane_ParamLimits

0xaa14,	// (0x0000c7c0) grid_app_pane

0xaa4c,	// (0x0000c7f8) scroll_pane_cp15_ParamLimits

0xaa4c,	// (0x0000c7f8) scroll_pane_cp15

0xaa61,	// (0x0000c80d) cell_app_pane_ParamLimits

0xaa61,	// (0x0000c80d) cell_app_pane

0xaaae,	// (0x0000c85a) cell_app_pane_g1_ParamLimits

0xaaae,	// (0x0000c85a) cell_app_pane_g1

0xf37e,	// (0x0001112a) cell_app_pane_g2_ParamLimits

0xf37e,	// (0x0001112a) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x00011485) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x00011485) cell_app_pane_g

0xaad2,	// (0x0000c87e) cell_app_pane_t1_ParamLimits

0xaad2,	// (0x0000c87e) cell_app_pane_t1

0xf38a,	// (0x00011136) grid_highlight_pane_ParamLimits

0xf38a,	// (0x00011136) grid_highlight_pane

0xeef0,	// (0x00010c9c) cell_highlight_pane_g1

0xeef8,	// (0x00010ca4) cell_highlight_pane_g2

0xef00,	// (0x00010cac) cell_highlight_pane_g3

0xef08,	// (0x00010cb4) cell_highlight_pane_g4

0xef10,	// (0x00010cbc) cell_highlight_pane_g5

0xef18,	// (0x00010cc4) cell_highlight_pane_g6

0xef20,	// (0x00010ccc) cell_highlight_pane_g7

0xef28,	// (0x00010cd4) cell_highlight_pane_g8

0xef30,	// (0x00010cdc) cell_highlight_pane_g9

0xe49b,	// (0x00010247) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x00011433) cell_highlight_pane_g

0xf3a5,	// (0x00011151) bg_scroll_pane

0xf3c4,	// (0x00011170) scroll_handle_pane

0xf415,	// (0x000111c1) scroll_bg_pane_g1

0xf42a,	// (0x000111d6) scroll_bg_pane_g2

0xf442,	// (0x000111ee) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0001148a) scroll_bg_pane_g

0xf457,	// (0x00011203) scroll_handle_focus_pane_ParamLimits

0xf457,	// (0x00011203) scroll_handle_focus_pane

0xf415,	// (0x000111c1) scroll_handle_pane_g1

0xf464,	// (0x00011210) scroll_handle_pane_g2

0xf442,	// (0x000111ee) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x00011491) scroll_handle_pane_g

0xef70,	// (0x00010d1c) bg_popup_sub_pane_cp21_ParamLimits

0xef70,	// (0x00010d1c) bg_popup_sub_pane_cp21

0xf478,	// (0x00011224) popup_fep_japan_predictive_window_t1_ParamLimits

0xf478,	// (0x00011224) popup_fep_japan_predictive_window_t1

0xf48f,	// (0x0001123b) popup_fep_japan_predictive_window_t2_ParamLimits

0xf48f,	// (0x0001123b) popup_fep_japan_predictive_window_t2

0xf4c2,	// (0x0001126e) popup_fep_japan_predictive_window_t3_ParamLimits

0xf4c2,	// (0x0001126e) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x00011498) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x00011498) popup_fep_japan_predictive_window_t

0xe614,	// (0x000103c0) bg_popup_sub_pane_cp23

0xf4f9,	// (0x000112a5) listscroll_japin_cand_pane

0xf501,	// (0x000112ad) popup_fep_japan_candidate_window_t1

0xf50f,	// (0x000112bb) candidate_pane_ParamLimits

0xf50f,	// (0x000112bb) candidate_pane

0xf521,	// (0x000112cd) scroll_pane_cp30

0xf52b,	// (0x000112d7) list_single_popup_jap_candidate_pane_ParamLimits

0xf52b,	// (0x000112d7) list_single_popup_jap_candidate_pane

0xe614,	// (0x000103c0) list_highlight_pane_cp30

0xf53f,	// (0x000112eb) list_single_popup_jap_candidate_pane_t1

0xaaf2,	// (0x0000c89e) level_1_signal

0xab04,	// (0x0000c8b0) level_2_signal

0xab17,	// (0x0000c8c3) level_3_signal

0xab2a,	// (0x0000c8d6) level_4_signal

0xab3d,	// (0x0000c8e9) level_5_signal

0xab50,	// (0x0000c8fc) level_6_signal

0xab63,	// (0x0000c90f) level_7_signal

0xaaf2,	// (0x0000c89e) level_1_battery

0xab04,	// (0x0000c8b0) level_2_battery

0xab17,	// (0x0000c8c3) level_3_battery

0xab2a,	// (0x0000c8d6) level_4_battery

0xab3d,	// (0x0000c8e9) level_5_battery

0xab50,	// (0x0000c8fc) level_6_battery

0xab63,	// (0x0000c90f) level_7_battery

0x0037,	// (0x00001de3) list_menu_pane_ParamLimits

0x0037,	// (0x00001de3) list_menu_pane

0x004d,	// (0x00001df9) scroll_pane_cp25_ParamLimits

0x004d,	// (0x00001df9) scroll_pane_cp25

0x0066,	// (0x00001e12) list_double2_graphic_pane_cp2_ParamLimits

0x0066,	// (0x00001e12) list_double2_graphic_pane_cp2

0x0066,	// (0x00001e12) list_double2_large_graphic_pane_cp2_ParamLimits

0x0066,	// (0x00001e12) list_double2_large_graphic_pane_cp2

0x0066,	// (0x00001e12) list_double2_pane_cp2_ParamLimits

0x0066,	// (0x00001e12) list_double2_pane_cp2

0x0066,	// (0x00001e12) list_double_graphic_pane_cp2_ParamLimits

0x0066,	// (0x00001e12) list_double_graphic_pane_cp2

0x0066,	// (0x00001e12) list_double_large_graphic_pane_cp2_ParamLimits

0x0066,	// (0x00001e12) list_double_large_graphic_pane_cp2

0x0066,	// (0x00001e12) list_double_number_pane_cp2_ParamLimits

0x0066,	// (0x00001e12) list_double_number_pane_cp2

0x0066,	// (0x00001e12) list_double_pane_cp2_ParamLimits

0x0066,	// (0x00001e12) list_double_pane_cp2

0xab76,	// (0x0000c922) list_single_2graphic_pane_cp2_ParamLimits

0xab76,	// (0x0000c922) list_single_2graphic_pane_cp2

0xab76,	// (0x0000c922) list_single_graphic_heading_pane_cp2_ParamLimits

0xab76,	// (0x0000c922) list_single_graphic_heading_pane_cp2

0xab76,	// (0x0000c922) list_single_graphic_pane_cp2_ParamLimits

0xab76,	// (0x0000c922) list_single_graphic_pane_cp2

0xab76,	// (0x0000c922) list_single_heading_pane_cp2_ParamLimits

0xab76,	// (0x0000c922) list_single_heading_pane_cp2

0x00a9,	// (0x00001e55) list_single_large_graphic_pane_cp2_ParamLimits

0x00a9,	// (0x00001e55) list_single_large_graphic_pane_cp2

0xab76,	// (0x0000c922) list_single_number_heading_pane_cp2_ParamLimits

0xab76,	// (0x0000c922) list_single_number_heading_pane_cp2

0xab76,	// (0x0000c922) list_single_number_pane_cp2_ParamLimits

0xab76,	// (0x0000c922) list_single_number_pane_cp2

0xab76,	// (0x0000c922) list_single_pane_cp2_ParamLimits

0xab76,	// (0x0000c922) list_single_pane_cp2

0x0172,	// (0x00001f1e) bg_popup_sub_pane_cp22

0x0197,	// (0x00001f43) popup_side_volume_key_window_g1

0x01c1,	// (0x00001f6d) popup_side_volume_key_window_t1

0x01df,	// (0x00001f8b) volume_small_pane_cp1

0xe6b6,	// (0x00010462) bg_popup_sub_pane_cp24_ParamLimits

0xe6b6,	// (0x00010462) bg_popup_sub_pane_cp24

0x01e7,	// (0x00001f93) fep_china_uni_candidate_pane_ParamLimits

0x01e7,	// (0x00001f93) fep_china_uni_candidate_pane

0x01fb,	// (0x00001fa7) fep_china_uni_entry_pane

0x020b,	// (0x00001fb7) popup_fep_china_uni_window_g1

0x0227,	// (0x00001fd3) fep_china_uni_entry_pane_g1

0x0231,	// (0x00001fdd) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x000114c9) fep_china_uni_entry_pane_g

0x023b,	// (0x00001fe7) fep_entry_item_pane

0x0245,	// (0x00001ff1) fep_candidate_item_pane

0x024d,	// (0x00001ff9) fep_china_uni_candidate_pane_g1

0x0257,	// (0x00002003) fep_china_uni_candidate_pane_g2

0x025f,	// (0x0000200b) fep_china_uni_candidate_pane_g3

0x0267,	// (0x00002013) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x000114ce) fep_china_uni_candidate_pane_g

0xe49b,	// (0x00010247) fep_entry_item_pane_g1

0x0271,	// (0x0000201d) fep_entry_item_pane_t1_ParamLimits

0x0271,	// (0x0000201d) fep_entry_item_pane_t1

0x0287,	// (0x00002033) fep_candidate_item_pane_t1_ParamLimits

0x0287,	// (0x00002033) fep_candidate_item_pane_t1

0x029c,	// (0x00002048) fep_candidate_item_pane_t2_ParamLimits

0x029c,	// (0x00002048) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x000114d7) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x000114d7) fep_candidate_item_pane_t

0xe6ce,	// (0x0001047a) list_highlight_pane_cp31_ParamLimits

0xe6ce,	// (0x0001047a) list_highlight_pane_cp31

0x02ae,	// (0x0000205a) level_1_signal_lsc

0x02b7,	// (0x00002063) level_2_signal_lsc

0x02c0,	// (0x0000206c) level_3_signal_lsc

0x02c9,	// (0x00002075) level_4_signal_lsc

0x02d2,	// (0x0000207e) level_5_signal_lsc

0x02db,	// (0x00002087) level_6_signal_lsc

0x02e4,	// (0x00002090) level_7_signal_lsc

0x02e4,	// (0x00002090) level_1_battery_lsc

0x02ed,	// (0x00002099) level_2_battery_lsc

0x02f6,	// (0x000020a2) level_3_battery_lsc

0x02ff,	// (0x000020ab) level_4_battery_lsc

0x0308,	// (0x000020b4) level_5_battery_lsc

0x0311,	// (0x000020bd) level_6_battery_lsc

0x02ae,	// (0x0000205a) level_7_battery_lsc

0x031a,	// (0x000020c6) scroll_handle_focus_pane_g1

0x0323,	// (0x000020cf) scroll_handle_focus_pane_g2

0x032c,	// (0x000020d8) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x000114dc) scroll_handle_focus_pane_g

0xac05,	// (0x0000c9b1) list_single_2graphic_pane_g1_ParamLimits

0xac05,	// (0x0000c9b1) list_single_2graphic_pane_g1

0xa45e,	// (0x0000c20a) list_single_2graphic_pane_g2_ParamLimits

0xa45e,	// (0x0000c20a) list_single_2graphic_pane_g2

0x18d5,	// (0x00003681) list_single_2graphic_pane_g3_ParamLimits

0x18d5,	// (0x00003681) list_single_2graphic_pane_g3

0xac11,	// (0x0000c9bd) list_single_2graphic_pane_g4_ParamLimits

0xac11,	// (0x0000c9bd) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x000114e3) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x000114e3) list_single_2graphic_pane_g

0xac22,	// (0x0000c9ce) list_single_2graphic_pane_t1_ParamLimits

0xac22,	// (0x0000c9ce) list_single_2graphic_pane_t1

0xac50,	// (0x0000c9fc) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xac50,	// (0x0000c9fc) list_double2_graphic_large_graphic_pane_g1

0xa4c9,	// (0x0000c275) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa4c9,	// (0x0000c275) list_double2_graphic_large_graphic_pane_g2

0xa4da,	// (0x0000c286) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa4da,	// (0x0000c286) list_double2_graphic_large_graphic_pane_g3

0xac62,	// (0x0000ca0e) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xac62,	// (0x0000ca0e) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x000114ec) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x000114ec) list_double2_graphic_large_graphic_pane_g

0xac6e,	// (0x0000ca1a) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xac6e,	// (0x0000ca1a) list_double2_graphic_large_graphic_pane_t1

0xac84,	// (0x0000ca30) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xac84,	// (0x0000ca30) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x000114f5) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x000114f5) list_double2_graphic_large_graphic_pane_t

0x063e,	// (0x000023ea) popup_fast_swap_window_ParamLimits

0x063e,	// (0x000023ea) popup_fast_swap_window

0x065c,	// (0x00002408) popup_side_volume_key_window

0x067a,	// (0x00002426) stacon_top_pane

0x0684,	// (0x00002430) status_pane_ParamLimits

0x0684,	// (0x00002430) status_pane

0xacde,	// (0x0000ca8a) status_small_pane

0xe614,	// (0x000103c0) control_pane

0xe614,	// (0x000103c0) stacon_bottom_pane

0xedb5,	// (0x00010b61) scroll_pane_cp121

0xedac,	// (0x00010b58) set_content_pane

0xac96,	// (0x0000ca42) bg_active_tab_pane_g1_cp1

0x03cf,	// (0x0000217b) bg_active_tab_pane_g2_cp1

0xac9f,	// (0x0000ca4b) bg_active_tab_pane_g3_cp1

0xac96,	// (0x0000ca42) bg_passive_tab_pane_g1_cp1

0x03cf,	// (0x0000217b) bg_passive_tab_pane_g2_cp1

0xac9f,	// (0x0000ca4b) bg_passive_tab_pane_g3_cp1

0xaca8,	// (0x0000ca54) bg_active_tab_pane_g1_cp2

0x03cf,	// (0x0000217b) bg_active_tab_pane_g2_cp2

0xacb1,	// (0x0000ca5d) bg_active_tab_pane_g3_cp2

0xaca8,	// (0x0000ca54) bg_passive_tab_pane_g1_cp2

0x03cf,	// (0x0000217b) bg_passive_tab_pane_g2_cp2

0xacb1,	// (0x0000ca5d) bg_passive_tab_pane_g3_cp2

0xacba,	// (0x0000ca66) bg_active_tab_pane_g1_cp3

0x03cf,	// (0x0000217b) bg_active_tab_pane_g2_cp3

0xacc3,	// (0x0000ca6f) bg_active_tab_pane_g3_cp3

0xacba,	// (0x0000ca66) bg_passive_tab_pane_g1_cp3

0x03cf,	// (0x0000217b) bg_passive_tab_pane_g2_cp3

0xacc3,	// (0x0000ca6f) bg_passive_tab_pane_g3_cp3

0xaccc,	// (0x0000ca78) bg_active_tab_pane_g1_cp4

0x03cf,	// (0x0000217b) bg_active_tab_pane_g2_cp4

0xacd5,	// (0x0000ca81) bg_active_tab_pane_g3_cp4

0xaccc,	// (0x0000ca78) bg_passive_tab_pane_g1_cp4

0x03cf,	// (0x0000217b) bg_passive_tab_pane_g2_cp4

0xacd5,	// (0x0000ca81) bg_passive_tab_pane_g3_cp4

0x059a,	// (0x00002346) bg_active_tab_pane_g1_cp5

0x03cf,	// (0x0000217b) bg_active_tab_pane_g2_cp5

0x05a3,	// (0x0000234f) bg_active_tab_pane_g3_cp5

0x059a,	// (0x00002346) bg_passive_tab_pane_g1_cp5

0x03cf,	// (0x0000217b) bg_passive_tab_pane_g2_cp5

0x05a3,	// (0x0000234f) bg_passive_tab_pane_g3_cp5

0x05ac,	// (0x00002358) list_set_graphic_pane_ParamLimits

0x05ac,	// (0x00002358) list_set_graphic_pane

0xe614,	// (0x000103c0) bg_set_opt_pane_cp4

0x05bf,	// (0x0000236b) list_set_graphic_pane_g1_ParamLimits

0x05bf,	// (0x0000236b) list_set_graphic_pane_g1

0x05cb,	// (0x00002377) list_set_graphic_pane_g2_ParamLimits

0x05cb,	// (0x00002377) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x000114fa) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x000114fa) list_set_graphic_pane_g

0x0009,

0xfad1,	// (0x0001187d) volume_small_pane_cp_g

0x05ef,	// (0x0000239b) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x05ef,	// (0x0000239b) list_double2_large_graphic_pane_g1_cp2

0x05fd,	// (0x000023a9) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x05fd,	// (0x000023a9) list_double2_large_graphic_pane_g2_cp2

0x060e,	// (0x000023ba) list_double2_large_graphic_pane_g3_cp2

0x0616,	// (0x000023c2) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x0616,	// (0x000023c2) list_double2_large_graphic_pane_t1_cp2

0x062c,	// (0x000023d8) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x062c,	// (0x000023d8) list_double2_large_graphic_pane_t2_cp2

0x2e59,	// (0x00004c05) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x2e59,	// (0x00004c05) list_double_large_graphic_pane_g1_cp2

0x2e6c,	// (0x00004c18) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x2e6c,	// (0x00004c18) list_double_large_graphic_pane_g2_cp2

0x07ad,	// (0x00002559) list_double_large_graphic_pane_g3_cp2

0x2e7d,	// (0x00004c29) list_double_large_graphic_pane_g4_cp

0x2e85,	// (0x00004c31) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x2e85,	// (0x00004c31) list_double_large_graphic_pane_t1_cp2

0x2e9c,	// (0x00004c48) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x2e9c,	// (0x00004c48) list_double_large_graphic_pane_t2_cp2

0x069d,	// (0x00002449) list_double2_graphic_pane_g1_cp2_ParamLimits

0x069d,	// (0x00002449) list_double2_graphic_pane_g1_cp2

0x06ab,	// (0x00002457) list_double2_graphic_pane_g2_cp2_ParamLimits

0x06ab,	// (0x00002457) list_double2_graphic_pane_g2_cp2

0x06bc,	// (0x00002468) list_double2_graphic_pane_g3_cp2

0x06c6,	// (0x00002472) list_double2_graphic_pane_t1_cp2_ParamLimits

0x06c6,	// (0x00002472) list_double2_graphic_pane_t1_cp2

0x06dc,	// (0x00002488) list_double2_graphic_pane_t2_cp2_ParamLimits

0x06dc,	// (0x00002488) list_double2_graphic_pane_t2_cp2

0x06ee,	// (0x0000249a) list_single_number_heading_pane_g1_cp2_ParamLimits

0x06ee,	// (0x0000249a) list_single_number_heading_pane_g1_cp2

0x06fa,	// (0x000024a6) list_single_number_heading_pane_g2_cp2

0x0702,	// (0x000024ae) list_single_number_heading_pane_t1_cp2_ParamLimits

0x0702,	// (0x000024ae) list_single_number_heading_pane_t1_cp2

0x0718,	// (0x000024c4) list_single_number_heading_pane_t2_cp2_ParamLimits

0x0718,	// (0x000024c4) list_single_number_heading_pane_t2_cp2

0x072c,	// (0x000024d8) list_single_number_heading_pane_t3_cp2_ParamLimits

0x072c,	// (0x000024d8) list_single_number_heading_pane_t3_cp2

0x06ee,	// (0x0000249a) list_single_heading_pane_g1_cp2_ParamLimits

0x06ee,	// (0x0000249a) list_single_heading_pane_g1_cp2

0x06fa,	// (0x000024a6) list_single_heading_pane_g2_cp2

0x0702,	// (0x000024ae) list_single_heading_pane_t1_cp2_ParamLimits

0x0702,	// (0x000024ae) list_single_heading_pane_t1_cp2

0x2c53,	// (0x000049ff) list_single_heading_pane_t2_cp2_ParamLimits

0x2c53,	// (0x000049ff) list_single_heading_pane_t2_cp2

0x2b9b,	// (0x00004947) list_double_graphic_pane_g1_cp2_ParamLimits

0x2b9b,	// (0x00004947) list_double_graphic_pane_g1_cp2

0x2ba7,	// (0x00004953) list_double_graphic_pane_g2_cp2_ParamLimits

0x2ba7,	// (0x00004953) list_double_graphic_pane_g2_cp2

0x2bb6,	// (0x00004962) list_double_graphic_pane_g3_cp2

0x2bbe,	// (0x0000496a) list_double_graphic_pane_t1_cp2_ParamLimits

0x2bbe,	// (0x0000496a) list_double_graphic_pane_t1_cp2

0x2bd4,	// (0x00004980) list_double_graphic_pane_t2_cp2_ParamLimits

0x2bd4,	// (0x00004980) list_double_graphic_pane_t2_cp2

0x07a1,	// (0x0000254d) list_double_number_pane_g1_cp2_ParamLimits

0x07a1,	// (0x0000254d) list_double_number_pane_g1_cp2

0x07ad,	// (0x00002559) list_double_number_pane_g2_cp2

0x2b5f,	// (0x0000490b) list_double_number_pane_t1_cp2_ParamLimits

0x2b5f,	// (0x0000490b) list_double_number_pane_t1_cp2

0x2b73,	// (0x0000491f) list_double_number_pane_t2_cp2_ParamLimits

0x2b73,	// (0x0000491f) list_double_number_pane_t2_cp2

0x2b89,	// (0x00004935) list_double_number_pane_t3_cp2_ParamLimits

0x2b89,	// (0x00004935) list_double_number_pane_t3_cp2

0x2a37,	// (0x000047e3) list_single_graphic_pane_g1_cp2_ParamLimits

0x2a37,	// (0x000047e3) list_single_graphic_pane_g1_cp2

0xee86,	// (0x00010c32) list_single_graphic_pane_g2_cp2_ParamLimits

0xee86,	// (0x00010c32) list_single_graphic_pane_g2_cp2

0x0807,	// (0x000025b3) list_single_graphic_pane_g3_cp2

0x2a0d,	// (0x000047b9) list_single_graphic_pane_t1_cp2_ParamLimits

0x2a0d,	// (0x000047b9) list_single_graphic_pane_t1_cp2

0xee86,	// (0x00010c32) list_single_number_pane_g1_cp2_ParamLimits

0xee86,	// (0x00010c32) list_single_number_pane_g1_cp2

0x0807,	// (0x000025b3) list_single_number_pane_g2_cp2

0x2a0d,	// (0x000047b9) list_single_number_pane_t1_cp2_ParamLimits

0x2a0d,	// (0x000047b9) list_single_number_pane_t1_cp2

0x2a23,	// (0x000047cf) list_single_number_pane_t2_cp2_ParamLimits

0x2a23,	// (0x000047cf) list_single_number_pane_t2_cp2

0x05fd,	// (0x000023a9) list_double2_pane_g1_cp2_ParamLimits

0x05fd,	// (0x000023a9) list_double2_pane_g1_cp2

0x060e,	// (0x000023ba) list_double2_pane_g2_cp2

0x0779,	// (0x00002525) list_double2_pane_t1_cp2_ParamLimits

0x0779,	// (0x00002525) list_double2_pane_t1_cp2

0x078f,	// (0x0000253b) list_double2_pane_t2_cp2_ParamLimits

0x078f,	// (0x0000253b) list_double2_pane_t2_cp2

0x07a1,	// (0x0000254d) list_double_pane_g1_cp2_ParamLimits

0x07a1,	// (0x0000254d) list_double_pane_g1_cp2

0x07ad,	// (0x00002559) list_double_pane_g2_cp2

0x07b5,	// (0x00002561) list_double_pane_t1_cp2_ParamLimits

0x07b5,	// (0x00002561) list_double_pane_t1_cp2

0x07cb,	// (0x00002577) list_double_pane_t2_cp2_ParamLimits

0x07cb,	// (0x00002577) list_double_pane_t2_cp2

0x07f7,	// (0x000025a3) list_single_pane_cp2_g3

0xee86,	// (0x00010c32) list_single_pane_g1_cp2_ParamLimits

0xee86,	// (0x00010c32) list_single_pane_g1_cp2

0x0807,	// (0x000025b3) list_single_pane_g2_cp2

0x080f,	// (0x000025bb) list_single_pane_t1_cp2_ParamLimits

0x080f,	// (0x000025bb) list_single_pane_t1_cp2

0x0827,	// (0x000025d3) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x0827,	// (0x000025d3) list_single_large_graphic_pane_g1_cp2

0x0835,	// (0x000025e1) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x0835,	// (0x000025e1) list_single_large_graphic_pane_g2_cp2

0x0841,	// (0x000025ed) list_single_large_graphic_pane_g3_cp2

0x0849,	// (0x000025f5) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x0849,	// (0x000025f5) list_single_large_graphic_pane_g4_cp1

0x0863,	// (0x0000260f) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x0863,	// (0x0000260f) list_single_large_graphic_pane_t1_cp2

0x287c,	// (0x00004628) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x287c,	// (0x00004628) list_single_graphic_heading_pane_g1_cp2

0x2849,	// (0x000045f5) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2849,	// (0x000045f5) list_single_graphic_heading_pane_g4_cp2

0x0807,	// (0x000025b3) list_single_graphic_heading_pane_g5_cp2

0x2888,	// (0x00004634) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2888,	// (0x00004634) list_single_graphic_heading_pane_t1_cp2

0x289e,	// (0x0000464a) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x289e,	// (0x0000464a) list_single_graphic_heading_pane_t2_cp2

0x283d,	// (0x000045e9) list_single_2graphic_pane_g1_cp2_ParamLimits

0x283d,	// (0x000045e9) list_single_2graphic_pane_g1_cp2

0x2849,	// (0x000045f5) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2849,	// (0x000045f5) list_single_2graphic_pane_g2_cp2

0x0807,	// (0x000025b3) list_single_2graphic_pane_g3_cp2

0x285a,	// (0x00004606) list_single_2graphic_pane_g4_cp2_ParamLimits

0x285a,	// (0x00004606) list_single_2graphic_pane_g4_cp2

0x2866,	// (0x00004612) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2866,	// (0x00004612) list_single_2graphic_pane_t1_cp2

0xe49b,	// (0x00010247) list_highlight_pane_g10_cp1

0x2415,	// (0x000041c1) list_highlight_pane_g1_cp1

0x241d,	// (0x000041c9) list_highlight_pane_g2_cp1

0x2425,	// (0x000041d1) list_highlight_pane_g3_cp1

0x242d,	// (0x000041d9) list_highlight_pane_g4_cp1

0x2435,	// (0x000041e1) list_highlight_pane_g5_cp1

0x243d,	// (0x000041e9) list_highlight_pane_g6_cp1

0x2445,	// (0x000041f1) list_highlight_pane_g7_cp1

0x244d,	// (0x000041f9) list_highlight_pane_g8_cp1

0x2455,	// (0x00004201) list_highlight_pane_g9_cp1

0xbc5e,	// (0x0000da0a) form_field_slider_pane_t3

0xbc6c,	// (0x0000da18) form_field_slider_pane_t4

0x2351,	// (0x000040fd) slider_form_pane_ParamLimits

0x2351,	// (0x000040fd) slider_form_pane

0xe614,	// (0x000103c0) control_abbreviations

0xe614,	// (0x000103c0) control_conventions

0xe614,	// (0x000103c0) control_definitions

0xe614,	// (0x000103c0) format_table_attribute

0x2ca9,	// (0x00004a55) bg_popup_preview_window_pane_g9

0xe614,	// (0x000103c0) format_table_data2

0xe614,	// (0x000103c0) format_table_data3

0xe614,	// (0x000103c0) format_table_data_example

0x0008,

0xe614,	// (0x000103c0) intro_purpose

0xf8de,	// (0x0001168a) bg_popup_preview_window_pane_g

0xe614,	// (0x000103c0) texts_category

0xe614,	// (0x000103c0) texts_graphics

0x0879,	// (0x00002625) text_digital

0x0888,	// (0x00002634) text_primary

0x0897,	// (0x00002643) text_primary_small

0x08a6,	// (0x00002652) text_secondary

0x08b5,	// (0x00002661) text_title

0x35a4,	// (0x00005350) bg_passive_tab_pane_g1_cp3_srt

0x03cf,	// (0x0000217b) bg_passive_tab_pane_g2_cp3_srt

0x35ad,	// (0x00005359) bg_passive_tab_pane_g3_cp3_srt

0xe6b6,	// (0x00010462) bg_active_tab_pane_cp3_srt_ParamLimits

0xe6b6,	// (0x00010462) bg_active_tab_pane_cp3_srt

0x35b6,	// (0x00005362) tabs_4_active_pane_srt_g1

0xc130,	// (0x0000dedc) tabs_4_active_pane_srt_t1_ParamLimits

0xc130,	// (0x0000dedc) tabs_4_active_pane_srt_t1

0x35a4,	// (0x00005350) bg_active_tab_pane_g1_cp3_copy1

0x03cf,	// (0x0000217b) bg_active_tab_pane_g2_cp3_copy1

0x35ad,	// (0x00005359) bg_active_tab_pane_g3_cp3_copy1

0xe6ce,	// (0x0001047a) tabs_2_long_active_pane_srt_ParamLimits

0xe6ce,	// (0x0001047a) tabs_2_long_active_pane_srt

0xe6ce,	// (0x0001047a) tabs_2_long_passive_pane_srt_ParamLimits

0xe6ce,	// (0x0001047a) tabs_2_long_passive_pane_srt

0x0e22,	// (0x00002bce) bg_passive_tab_pane_cp4_srt_ParamLimits

0x0e22,	// (0x00002bce) bg_passive_tab_pane_cp4_srt

0x3164,	// (0x00004f10) bg_passive_tab_pane_g1_cp4_srt

0x03cf,	// (0x0000217b) bg_passive_tab_pane_g2_cp4_srt

0x316d,	// (0x00004f19) bg_passive_tab_pane_g3_cp4_srt

0xe6ce,	// (0x0001047a) bg_active_tab_pane_cp4_srt_ParamLimits

0xe6ce,	// (0x0001047a) bg_active_tab_pane_cp4_srt

0xbfa5,	// (0x0000dd51) tabs_2_long_active_pane_srt_t1_ParamLimits

0xbfa5,	// (0x0000dd51) tabs_2_long_active_pane_srt_t1

0x3164,	// (0x00004f10) bg_active_tab_pane_g1_cp4_srt

0x03cf,	// (0x0000217b) bg_active_tab_pane_g2_cp4_srt

0x316d,	// (0x00004f19) bg_active_tab_pane_g3_cp4_srt

0xe6b6,	// (0x00010462) tabs_3_long_active_pane_srt_ParamLimits

0xe6b6,	// (0x00010462) tabs_3_long_active_pane_srt

0xe6b6,	// (0x00010462) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xe6b6,	// (0x00010462) tabs_3_long_passive_pane_cp_srt

0xe6b6,	// (0x00010462) tabs_3_long_passive_pane_srt_ParamLimits

0xe6b6,	// (0x00010462) tabs_3_long_passive_pane_srt

0x0e22,	// (0x00002bce) bg_passive_tab_pane_cp5_srt_ParamLimits

0x0e22,	// (0x00002bce) bg_passive_tab_pane_cp5_srt

0x059a,	// (0x00002346) bg_passive_tab_pane_g1_cp5_srt

0x03cf,	// (0x0000217b) bg_passive_tab_pane_g2_cp5_srt

0x05a3,	// (0x0000234f) bg_passive_tab_pane_g3_cp5_srt

0xe6ce,	// (0x0001047a) bg_active_tab_pane_cp5_srt_ParamLimits

0xe6ce,	// (0x0001047a) bg_active_tab_pane_cp5_srt

0xbf8f,	// (0x0000dd3b) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbf8f,	// (0x0000dd3b) tabs_3_long_active_pane_srt_t1

0x059a,	// (0x00002346) bg_active_tab_pane_g1_cp5_srt

0x03cf,	// (0x0000217b) bg_active_tab_pane_g2_cp5_srt

0x05a3,	// (0x0000234f) bg_active_tab_pane_g3_cp5_srt

0x3144,	// (0x00004ef0) navi_text_pane_srt_t1

0x313c,	// (0x00004ee8) navi_icon_pane_srt_g1

0x0b36,	// (0x000028e2) midp_editing_number_pane_srt

0x08c4,	// (0x00002670) midp_ticker_pane_srt

0x0b3e,	// (0x000028ea) midp_ticker_pane_srt_g1

0x0b46,	// (0x000028f2) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x00011519) midp_ticker_pane_srt_g

0x0b4e,	// (0x000028fa) midp_ticker_pane_srt_t1

0x312d,	// (0x00004ed9) midp_editing_number_pane_t1_copy1

0xace9,	// (0x0000ca95) listscroll_midp_pane

0xace9,	// (0x0000ca95) midp_form_pane

0x093b,	// (0x000026e7) midp_info_popup_window_ParamLimits

0x093b,	// (0x000026e7) midp_info_popup_window

0xef70,	// (0x00010d1c) bg_popup_sub_pane_cp50_ParamLimits

0xef70,	// (0x00010d1c) bg_popup_sub_pane_cp50

0x203f,	// (0x00003deb) listscroll_midp_info_pane_ParamLimits

0x203f,	// (0x00003deb) listscroll_midp_info_pane

0x201f,	// (0x00003dcb) listscroll_form_midp_pane_ParamLimits

0x201f,	// (0x00003dcb) listscroll_form_midp_pane

0x202b,	// (0x00003dd7) scroll_bar_cp050

0x201f,	// (0x00003dcb) list_midp_pane

0x43ff,	// (0x000061ab) signal_pane_g2_cp

0x1f39,	// (0x00003ce5) listscroll_midp_info_pane_t1_ParamLimits

0x1f39,	// (0x00003ce5) listscroll_midp_info_pane_t1

0x1f51,	// (0x00003cfd) listscroll_midp_info_pane_t2_ParamLimits

0x1f51,	// (0x00003cfd) listscroll_midp_info_pane_t2

0x1f8f,	// (0x00003d3b) listscroll_midp_info_pane_t3_ParamLimits

0x1f8f,	// (0x00003d3b) listscroll_midp_info_pane_t3

0x1fc9,	// (0x00003d75) listscroll_midp_info_pane_t4_ParamLimits

0x1fc9,	// (0x00003d75) listscroll_midp_info_pane_t4

0x0003,

0xf819,	// (0x000115c5) listscroll_midp_info_pane_t_ParamLimits

0xf819,	// (0x000115c5) listscroll_midp_info_pane_t

0xeff0,	// (0x00010d9c) scroll_pane_cp21

0x1ed3,	// (0x00003c7f) form_midp_field_choice_group_pane

0x1edc,	// (0x00003c88) form_midp_field_text_pane

0x1f1f,	// (0x00003ccb) form_midp_field_time_pane

0x1f27,	// (0x00003cd3) form_midp_gauge_slider_pane

0x1f30,	// (0x00003cdc) form_midp_gauge_wait_pane

0xe614,	// (0x000103c0) form_midp_image_pane

0xbc41,	// (0x0000d9ed) list_single_midp_pane_ParamLimits

0xbc41,	// (0x0000d9ed) list_single_midp_pane

0xbc19,	// (0x0000d9c5) form_midp_field_text_pane_t1

0x1bcc,	// (0x00003978) input_focus_pane_cp050

0x1ea2,	// (0x00003c4e) list_midp_form_text_pane

0x1e46,	// (0x00003bf2) form_midp_field_choice_group_pane_t1

0x1e54,	// (0x00003c00) input_focus_pane_cp051

0x1e68,	// (0x00003c14) list_midp_choice_pane

0xe614,	// (0x000103c0) status_idle_pane

0x1e2a,	// (0x00003bd6) form_midp_field_time_pane_t1

0xe49b,	// (0x00010247) wait_anim_pane_g2_copy1

0x1e38,	// (0x00003be4) form_midp_field_time_pane_t2

0x0001,

0x09eb,	// (0x00002797) aid_navinavi_width_2_pane

0xf814,	// (0x000115c0) form_midp_field_time_pane_t

0xe614,	// (0x000103c0) input_focus_pane_cp052

0xe614,	// (0x000103c0) bg_input_focus_pane_cp040

0x1dea,	// (0x00003b96) form_midp_gauge_slider_pane_t1

0x1df8,	// (0x00003ba4) form_midp_gauge_slider_pane_t2

0xbbfd,	// (0x0000d9a9) form_midp_gauge_slider_pane_t3

0xbc0b,	// (0x0000d9b7) form_midp_gauge_slider_pane_t4

0x0003,

0xf80b,	// (0x000115b7) form_midp_gauge_slider_pane_t

0x1e22,	// (0x00003bce) form_midp_slider_pane

0xe6ce,	// (0x0001047a) bg_input_focus_pane_cp041_ParamLimits

0xe6ce,	// (0x0001047a) bg_input_focus_pane_cp041

0x1db7,	// (0x00003b63) form_midp_gauge_wait_pane_t1_ParamLimits

0x1db7,	// (0x00003b63) form_midp_gauge_wait_pane_t1

0x1dc9,	// (0x00003b75) form_midp_gauge_wait_pane_t2_ParamLimits

0x1dc9,	// (0x00003b75) form_midp_gauge_wait_pane_t2

0x0001,

0xf806,	// (0x000115b2) form_midp_gauge_wait_pane_t_ParamLimits

0xf806,	// (0x000115b2) form_midp_gauge_wait_pane_t

0x1ddb,	// (0x00003b87) form_midp_wait_pane_ParamLimits

0x1ddb,	// (0x00003b87) form_midp_wait_pane

0x1d7f,	// (0x00003b2b) form_midp_image_pane_g1

0x1d88,	// (0x00003b34) form_midp_image_pane_t1

0x1d97,	// (0x00003b43) form_midp_image_pane_t2

0x1da6,	// (0x00003b52) form_midp_image_pane_t3

0x0002,

0xf7ff,	// (0x000115ab) form_midp_image_pane_t

0x1d67,	// (0x00003b13) list_single_midp_pane_g1

0x1d70,	// (0x00003b1c) list_single_midp_pane_t1

0xbbe6,	// (0x0000d992) list_midp_form_item_pane_ParamLimits

0xbbe6,	// (0x0000d992) list_midp_form_item_pane

0x0993,	// (0x0000273f) list_midp_form_item_pane_t1

0x09a2,	// (0x0000274e) midp_ticker_pane_g1

0x09ae,	// (0x0000275a) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x000114ff) midp_ticker_pane_g

0xad8d,	// (0x0000cb39) midp_ticker_pane_t1

0xc088,	// (0x0000de34) midp_editing_number_pane_t1

0x3425,	// (0x000051d1) midp_editing_number_pane

0x3434,	// (0x000051e0) midp_ticker_pane

0x30f5,	// (0x00004ea1) ai_message_heading_pane

0xe614,	// (0x000103c0) bg_popup_window_pane_cp14

0x30fd,	// (0x00004ea9) listscroll_ai_message_pane

0x307b,	// (0x00004e27) ai_message_heading_pane_g1_ParamLimits

0x307b,	// (0x00004e27) ai_message_heading_pane_g1

0x3087,	// (0x00004e33) ai_message_heading_pane_g2_ParamLimits

0x3087,	// (0x00004e33) ai_message_heading_pane_g2

0x3095,	// (0x00004e41) ai_message_heading_pane_g3_ParamLimits

0x3095,	// (0x00004e41) ai_message_heading_pane_g3

0x30a1,	// (0x00004e4d) ai_message_heading_pane_g4_ParamLimits

0x30a1,	// (0x00004e4d) ai_message_heading_pane_g4

0x0003,

0xf940,	// (0x000116ec) ai_message_heading_pane_g_ParamLimits

0xf940,	// (0x000116ec) ai_message_heading_pane_g

0x30ad,	// (0x00004e59) ai_message_heading_pane_t1_ParamLimits

0x30ad,	// (0x00004e59) ai_message_heading_pane_t1

0x30c7,	// (0x00004e73) ai_message_heading_pane_t2_ParamLimits

0x30c7,	// (0x00004e73) ai_message_heading_pane_t2

0x0001,

0xf949,	// (0x000116f5) ai_message_heading_pane_t_ParamLimits

0xf949,	// (0x000116f5) ai_message_heading_pane_t

0x30db,	// (0x00004e87) bg_popup_heading_pane_cp1_ParamLimits

0x30db,	// (0x00004e87) bg_popup_heading_pane_cp1

0x3069,	// (0x00004e15) list_ai_message_pane_ParamLimits

0x3069,	// (0x00004e15) list_ai_message_pane

0xeff0,	// (0x00010d9c) scroll_pane_cp10

0x2fa1,	// (0x00004d4d) list_ai_message_pane_g1

0x2fa9,	// (0x00004d55) list_ai_message_pane_g2

0x0001,

0xf91d,	// (0x000116c9) list_ai_message_pane_g

0x2fb1,	// (0x00004d5d) list_ai_message_pane_t1_ParamLimits

0x2fb1,	// (0x00004d5d) list_ai_message_pane_t1

0x2fc6,	// (0x00004d72) list_ai_message_pane_t2_ParamLimits

0x2fc6,	// (0x00004d72) list_ai_message_pane_t2

0x2fdb,	// (0x00004d87) list_ai_message_pane_t3_ParamLimits

0x2fdb,	// (0x00004d87) list_ai_message_pane_t3

0x2ff0,	// (0x00004d9c) list_ai_message_pane_t4_ParamLimits

0x2ff0,	// (0x00004d9c) list_ai_message_pane_t4

0x0003,

0xf922,	// (0x000116ce) list_ai_message_pane_t_ParamLimits

0xf922,	// (0x000116ce) list_ai_message_pane_t

0xbf75,	// (0x0000dd21) cell_ai_soft_ind_pane_ParamLimits

0xbf75,	// (0x0000dd21) cell_ai_soft_ind_pane

0x09cc,	// (0x00002778) cell_ai_soft_ind_pane_g1_ParamLimits

0x09cc,	// (0x00002778) cell_ai_soft_ind_pane_g1

0xe614,	// (0x000103c0) grid_highlight_cp1

0x09d9,	// (0x00002785) text_secondary_cp56_ParamLimits

0x09d9,	// (0x00002785) text_secondary_cp56

0x2f5f,	// (0x00004d0b) example_general_pane_ParamLimits

0x2f5f,	// (0x00004d0b) example_general_pane

0x2f6b,	// (0x00004d17) example_parent_pane_g1_ParamLimits

0x2f6b,	// (0x00004d17) example_parent_pane_g1

0x2f77,	// (0x00004d23) example_parent_pane_t1_ParamLimits

0x2f77,	// (0x00004d23) example_parent_pane_t1

0xb40d,	// (0x0000d1b9) popup_preview_text_window_ParamLimits

0xb40d,	// (0x0000d1b9) popup_preview_text_window

0x07ff,	// (0x000025ab) list_single_pane_cp2_g4

0xe972,	// (0x0001071e) bg_popup_preview_window_pane_ParamLimits

0xe972,	// (0x0001071e) bg_popup_preview_window_pane

0x2cb3,	// (0x00004a5f) popup_preview_text_window_t1_ParamLimits

0x2cb3,	// (0x00004a5f) popup_preview_text_window_t1

0x2cd1,	// (0x00004a7d) popup_preview_text_window_t2_ParamLimits

0x2cd1,	// (0x00004a7d) popup_preview_text_window_t2

0x2d1a,	// (0x00004ac6) popup_preview_text_window_t3_ParamLimits

0x2d1a,	// (0x00004ac6) popup_preview_text_window_t3

0x2d5f,	// (0x00004b0b) popup_preview_text_window_t4_ParamLimits

0x2d5f,	// (0x00004b0b) popup_preview_text_window_t4

0x0004,

0xf8f1,	// (0x0001169d) popup_preview_text_window_t_ParamLimits

0xf8f1,	// (0x0001169d) popup_preview_text_window_t

0x2ddd,	// (0x00004b89) scroll_pane_cp11

0x1a31,	// (0x000037dd) bg_popup_preview_window_pane_g1

0x2c67,	// (0x00004a13) bg_popup_preview_window_pane_g2

0x2c71,	// (0x00004a1d) bg_popup_preview_window_pane_g3

0x2c7b,	// (0x00004a27) bg_popup_preview_window_pane_g4

0x2c85,	// (0x00004a31) bg_popup_preview_window_pane_g5

0x2c8f,	// (0x00004a3b) bg_popup_preview_window_pane_g6

0x2c97,	// (0x00004a43) bg_popup_preview_window_pane_g7

0x2c9f,	// (0x00004a4b) bg_popup_preview_window_pane_g8

0xe4b1,	// (0x0001025d) aid_popup_width_pane

0xb37d,	// (0x0000d129) popup_midp_note_alarm_window_ParamLimits

0xb37d,	// (0x0000d129) popup_midp_note_alarm_window

0xee1d,	// (0x00010bc9) data_form_pane_ParamLimits

0xa87c,	// (0x0000c628) form_field_data_pane_g1

0xa886,	// (0x0000c632) form_field_data_pane_t1_ParamLimits

0xee29,	// (0x00010bd5) input_focus_pane_ParamLimits

0xee37,	// (0x00010be3) data_form_wide_pane_ParamLimits

0xee43,	// (0x00010bef) form_field_data_wide_pane_g1

0xee6f,	// (0x00010c1b) form_field_data_wide_pane_t1_ParamLimits

0xeb2a,	// (0x000108d6) input_focus_pane_cp6_ParamLimits

0xa9c7,	// (0x0000c773) input_popup_find_pane_g1_ParamLimits

0xa9c7,	// (0x0000c773) input_popup_find_pane_g1

0xf2d6,	// (0x00011082) aid_navi_side_left_pane

0xf2eb,	// (0x00011097) aid_navi_side_right_pane

0x2510,	// (0x000042bc) bg_popup_window_pane_cp30_ParamLimits

0x2510,	// (0x000042bc) bg_popup_window_pane_cp30

0x258a,	// (0x00004336) popup_midp_note_alarm_window_g1_ParamLimits

0x258a,	// (0x00004336) popup_midp_note_alarm_window_g1

0x25ba,	// (0x00004366) popup_midp_note_alarm_window_t1_ParamLimits

0x25ba,	// (0x00004366) popup_midp_note_alarm_window_t1

0x265b,	// (0x00004407) popup_midp_note_alarm_window_t2_ParamLimits

0x265b,	// (0x00004407) popup_midp_note_alarm_window_t2

0x2709,	// (0x000044b5) popup_midp_note_alarm_window_t3_ParamLimits

0x2709,	// (0x000044b5) popup_midp_note_alarm_window_t3

0x273b,	// (0x000044e7) popup_midp_note_alarm_window_t4_ParamLimits

0x273b,	// (0x000044e7) popup_midp_note_alarm_window_t4

0x2761,	// (0x0000450d) popup_midp_note_alarm_window_t5_ParamLimits

0x2761,	// (0x0000450d) popup_midp_note_alarm_window_t5

0x000a,

0xf88e,	// (0x0001163a) popup_midp_note_alarm_window_t_ParamLimits

0xf88e,	// (0x0001163a) popup_midp_note_alarm_window_t

0x280d,	// (0x000045b9) wait_bar_pane_cp1_ParamLimits

0x280d,	// (0x000045b9) wait_bar_pane_cp1

0xe614,	// (0x000103c0) wait_anim_pane_copy1

0xe614,	// (0x000103c0) wait_border_pane_copy1

0x21f5,	// (0x00003fa1) wait_border_pane_g1_copy1

0xee92,	// (0x00010c3e) form_field_popup_pane_g1

0xa8a0,	// (0x0000c64c) form_field_popup_pane_t1_ParamLimits

0xee29,	// (0x00010bd5) input_focus_pane_cp7_ParamLimits

0xee9a,	// (0x00010c46) list_form_pane_ParamLimits

0xeea6,	// (0x00010c52) form_field_popup_wide_pane_g1

0xeeae,	// (0x00010c5a) form_field_popup_wide_pane_t1_ParamLimits

0xee29,	// (0x00010bd5) input_focus_pane_cp8_ParamLimits

0xeec0,	// (0x00010c6c) list_form_wide_pane_ParamLimits

0xc18f,	// (0x0000df3b) aid_size_cell_graphic_pane

0xa91f,	// (0x0000c6cb) data_form_pane_t1_ParamLimits

0xc06c,	// (0x0000de18) data_form_wide_pane_t1_ParamLimits

0xb80f,	// (0x0000d5bb) bg_status_flat_pane

0xa0a5,	// (0x0000be51) title_pane_t1_ParamLimits

0xe67e,	// (0x0001042a) title_pane_t2_ParamLimits

0xe6a4,	// (0x00010450) title_pane_t3_ParamLimits

0xf557,	// (0x00011303) title_pane_t_ParamLimits

0xaaf2,	// (0x0000c89e) level_1_signal_ParamLimits

0xab04,	// (0x0000c8b0) level_2_signal_ParamLimits

0xab17,	// (0x0000c8c3) level_3_signal_ParamLimits

0xab2a,	// (0x0000c8d6) level_4_signal_ParamLimits

0xab3d,	// (0x0000c8e9) level_5_signal_ParamLimits

0xab50,	// (0x0000c8fc) level_6_signal_ParamLimits

0xab63,	// (0x0000c90f) level_7_signal_ParamLimits

0xaaf2,	// (0x0000c89e) level_1_battery_ParamLimits

0xab04,	// (0x0000c8b0) level_2_battery_ParamLimits

0xab17,	// (0x0000c8c3) level_3_battery_ParamLimits

0xab2a,	// (0x0000c8d6) level_4_battery_ParamLimits

0xab3d,	// (0x0000c8e9) level_5_battery_ParamLimits

0xab50,	// (0x0000c8fc) level_6_battery_ParamLimits

0xab63,	// (0x0000c90f) level_7_battery_ParamLimits

0x2415,	// (0x000041c1) bg_status_flat_pane_g1

0x241d,	// (0x000041c9) bg_status_flat_pane_g2

0x2425,	// (0x000041d1) bg_status_flat_pane_g3

0x242d,	// (0x000041d9) bg_status_flat_pane_g4

0x2435,	// (0x000041e1) bg_status_flat_pane_g5

0x243d,	// (0x000041e9) bg_status_flat_pane_g6

0x2445,	// (0x000041f1) bg_status_flat_pane_g7

0xa139,	// (0x0000bee5) tabs_3_active_pane_t1_ParamLimits

0xa139,	// (0x0000bee5) tabs_3_passive_pane_t1_ParamLimits

0xa153,	// (0x0000beff) tabs_4_active_pane_t1_ParamLimits

0xa153,	// (0x0000beff) tabs_4_1_passive_pane_t1_ParamLimits

0xa9dd,	// (0x0000c789) tabs_2_active_pane_t1_ParamLimits

0xa9dd,	// (0x0000c789) tabs_2_passive_pane_t1_ParamLimits

0xe6ce,	// (0x0001047a) bg_active_tab_pane_cp4_ParamLimits

0xa9ef,	// (0x0000c79b) tabs_2_long_active_pane_t1_ParamLimits

0x0e22,	// (0x00002bce) bg_passive_tab_pane_cp4_ParamLimits

0x1aed,	// (0x00003899) list_single_midp_graphic_pane_t1_ParamLimits

0xe6ce,	// (0x0001047a) bg_active_tab_pane_cp5_ParamLimits

0xaa02,	// (0x0000c7ae) tabs_3_long_active_pane_t1_ParamLimits

0x0e22,	// (0x00002bce) bg_passive_tab_pane_cp5_ParamLimits

0x1aed,	// (0x00003899) list_single_midp_graphic_pane_t1

0xb80f,	// (0x0000d5bb) bg_status_flat_pane_ParamLimits

0x160f,	// (0x000033bb) indicator_pane_cp2_ParamLimits

0x160f,	// (0x000033bb) indicator_pane_cp2

0xb9a5,	// (0x0000d751) navi_pane_srt_ParamLimits

0xb9a5,	// (0x0000d751) navi_pane_srt

0x1776,	// (0x00003522) popup_clock_digital_analogue_window_cp1

0xe7b5,	// (0x00010561) indicator_pane_t1

0x08c4,	// (0x00002670) copy_highlight_pane

0x08c4,	// (0x00002670) cursor_graphics_pane

0x08c4,	// (0x00002670) graphic_within_text_pane

0x08c4,	// (0x00002670) link_highlight_pane

0x2da0,	// (0x00004b4c) popup_preview_text_window_t5_ParamLimits

0x2da0,	// (0x00004b4c) popup_preview_text_window_t5

0x09f5,	// (0x000027a1) cursor_digital_pane

0x09f5,	// (0x000027a1) cursor_primary_pane

0x0a06,	// (0x000027b2) cursor_primary_small_pane

0x0a0e,	// (0x000027ba) cursor_secondary_pane

0x0a16,	// (0x000027c2) cursor_title_pane

0x09f5,	// (0x000027a1) link_highlight_digital_pane

0x09fd,	// (0x000027a9) link_highlight_primary_pane

0x0a06,	// (0x000027b2) link_highlight_primary_small_pane

0x0a0e,	// (0x000027ba) link_highlight_secondary_pane

0x0a16,	// (0x000027c2) link_highlight_title_pane

0x09f5,	// (0x000027a1) copy_highlight_digital_pane

0x09f5,	// (0x000027a1) copy_highlight_primary_pane

0x0a06,	// (0x000027b2) copy_highlight_primary_small_pane

0x0a0e,	// (0x000027ba) copy_highlight_secondary_pane

0x0a16,	// (0x000027c2) copy_highlight_title_pane

0x0a0e,	// (0x000027ba) graphic_text_digital_pane

0x24b3,	// (0x0000425f) graphic_text_primary_pane

0x24bc,	// (0x00004268) graphic_text_primary_small_pane

0x0a06,	// (0x000027b2) graphic_text_secondary_pane

0x09f5,	// (0x000027a1) graphic_text_title_pane

0xad9f,	// (0x0000cb4b) cursor_primary_pane_g1

0x24a5,	// (0x00004251) cursor_text_primary_t1

0xbc8e,	// (0x0000da3a) cursor_primary_small_pane_g1

0x2497,	// (0x00004243) cursor_text_primary_small_t1

0xbc84,	// (0x0000da30) cursor_primary_small_pane_g1_copy1

0x247f,	// (0x0000422b) cursor_text_primary_small_t1_copy1

0x245d,	// (0x00004209) cursor_text_title_t1

0xbc7a,	// (0x0000da26) cursor_title_pane_g1

0xad9f,	// (0x0000cb4b) cursor_digital_pane_g1

0x0a28,	// (0x000027d4) cursor_text_digital_t1

0x0a36,	// (0x000027e2) link_highlight_primary_pane_g1

0x2406,	// (0x000041b2) link_highlight_primary_pane_t1

0x0a36,	// (0x000027e2) link_highlight_primary_small_pane_g1

0x0a3e,	// (0x000027ea) link_highlight_primary_small_pane_t1

0x0a4d,	// (0x000027f9) link_highlight_secondary_pane_g1

0x0a55,	// (0x00002801) link_highlight_secondary_pane_t1

0x237a,	// (0x00004126) link_highlight_title_pane_g1

0x2382,	// (0x0000412e) link_highlight_title_pane_t1

0x2363,	// (0x0000410f) link_highlight_digital_pane_g1

0x236b,	// (0x00004117) link_highlight_digital_pane_t1

0x222b,	// (0x00003fd7) copy_highlight_primary_pane_g1

0x2242,	// (0x00003fee) copy_highlight_primary_pane_t1

0x222b,	// (0x00003fd7) copy_highlight_primary_small_pane_g1

0x2233,	// (0x00003fdf) copy_highlight_primary_small_pane_t1

0x0a64,	// (0x00002810) copy_highlight_secondary_pane_g1

0x0a6c,	// (0x00002818) copy_highlight_secondary_pane_t1

0x2214,	// (0x00003fc0) copy_highlight_title_pane_g1

0x221c,	// (0x00003fc8) copy_highlight_title_pane_t1

0x222b,	// (0x00003fd7) copy_highlight_digital_pane_g1

0x38cc,	// (0x00005678) copy_highlight_digital_pane_t1

0x3820,	// (0x000055cc) graphic_text_primary_pane_g1

0x38b0,	// (0x0000565c) graphic_text_primary_pane_t1

0x38be,	// (0x0000566a) graphic_text_primary_pane_t2

0x0001,

0xf9bd,	// (0x00011769) graphic_text_primary_pane_t

0x388c,	// (0x00005638) graphic_text_primary_small_pane_g1

0x3894,	// (0x00005640) graphic_text_primary_small_pane_t1

0x38a2,	// (0x0000564e) graphic_text_primary_small_pane_t2

0x0001,

0xf9b8,	// (0x00011764) graphic_text_primary_small_pane_t

0x3868,	// (0x00005614) graphic_text_secondary_pane_g1

0x3870,	// (0x0000561c) graphic_text_secondary_pane_t1

0x387e,	// (0x0000562a) graphic_text_secondary_pane_t2

0x0001,

0xf9b3,	// (0x0001175f) graphic_text_secondary_pane_t

0x3844,	// (0x000055f0) graphic_text_title_pane_g1

0x384c,	// (0x000055f8) graphic_text_title_pane_t1

0x385a,	// (0x00005606) graphic_text_title_pane_t2

0x0001,

0xf9ae,	// (0x0001175a) graphic_text_title_pane_t

0x3820,	// (0x000055cc) graphic_text_digital_pane_g1

0x3828,	// (0x000055d4) graphic_text_digital_pane_t1

0x3836,	// (0x000055e2) graphic_text_digital_pane_t2

0x0001,

0xf9a9,	// (0x00011755) graphic_text_digital_pane_t

0xe6ce,	// (0x0001047a) navi_icon_pane_srt_ParamLimits

0xe6ce,	// (0x0001047a) navi_icon_pane_srt

0xe614,	// (0x000103c0) navi_midp_pane_srt

0xe614,	// (0x000103c0) navi_navi_pane_srt

0xe6ce,	// (0x0001047a) navi_text_pane_srt_ParamLimits

0xe6ce,	// (0x0001047a) navi_text_pane_srt

0x37eb,	// (0x00005597) navi_navi_icon_text_pane_srt

0x37f3,	// (0x0000559f) navi_navi_pane_srt_g1_ParamLimits

0x37f3,	// (0x0000559f) navi_navi_pane_srt_g1

0x3805,	// (0x000055b1) navi_navi_pane_srt_g2_ParamLimits

0x3805,	// (0x000055b1) navi_navi_pane_srt_g2

0x0001,

0xf9a4,	// (0x00011750) navi_navi_pane_srt_g_ParamLimits

0xf9a4,	// (0x00011750) navi_navi_pane_srt_g

0x3817,	// (0x000055c3) navi_navi_tabs_pane_srt

0x37eb,	// (0x00005597) navi_navi_text_pane_srt

0x37eb,	// (0x00005597) navi_navi_volume_pane_srt

0x37dc,	// (0x00005588) navi_navi_text_pane_srt_t1

0x37b7,	// (0x00005563) navi_navi_volume_pane_srt_g1

0x37bf,	// (0x0000556b) volume_small_pane_srt_ParamLimits

0x37bf,	// (0x0000556b) volume_small_pane_srt

0x0a7b,	// (0x00002827) volume_small_pane_srt_g1_ParamLimits

0x0a7b,	// (0x00002827) volume_small_pane_srt_g1

0x0a8b,	// (0x00002837) volume_small_pane_srt_g2_ParamLimits

0x0a8b,	// (0x00002837) volume_small_pane_srt_g2

0x0a9c,	// (0x00002848) volume_small_pane_srt_g3_ParamLimits

0x0a9c,	// (0x00002848) volume_small_pane_srt_g3

0x0aad,	// (0x00002859) volume_small_pane_srt_g4_ParamLimits

0x0aad,	// (0x00002859) volume_small_pane_srt_g4

0x0abe,	// (0x0000286a) volume_small_pane_srt_g5_ParamLimits

0x0abe,	// (0x0000286a) volume_small_pane_srt_g5

0x0acf,	// (0x0000287b) volume_small_pane_srt_g6_ParamLimits

0x0acf,	// (0x0000287b) volume_small_pane_srt_g6

0x0ae0,	// (0x0000288c) volume_small_pane_srt_g7_ParamLimits

0x0ae0,	// (0x0000288c) volume_small_pane_srt_g7

0x0af1,	// (0x0000289d) volume_small_pane_srt_g8_ParamLimits

0x0af1,	// (0x0000289d) volume_small_pane_srt_g8

0x0b02,	// (0x000028ae) volume_small_pane_srt_g9_ParamLimits

0x0b02,	// (0x000028ae) volume_small_pane_srt_g9

0x0b13,	// (0x000028bf) volume_small_pane_srt_g10_ParamLimits

0x0b13,	// (0x000028bf) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x00011504) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x00011504) volume_small_pane_srt_g

0xea27,	// (0x000107d3) query_popup_data_pane_cp2

0x37a5,	// (0x00005551) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x37a5,	// (0x00005551) navi_navi_icon_text_pane_srt_t1

0x24b3,	// (0x0000425f) navi_tabs_2_long_pane_srt

0x24b3,	// (0x0000425f) navi_tabs_2_pane_srt

0x24b3,	// (0x0000425f) navi_tabs_3_long_pane_srt

0x24b3,	// (0x0000425f) navi_tabs_3_pane_srt

0x24b3,	// (0x0000425f) navi_tabs_4_pane_srt

0x377d,	// (0x00005529) tabs_2_active_pane_srt_ParamLimits

0x377d,	// (0x00005529) tabs_2_active_pane_srt

0x378d,	// (0x00005539) tabs_2_passive_pane_srt_ParamLimits

0x378d,	// (0x00005539) tabs_2_passive_pane_srt

0x1bcc,	// (0x00003978) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1bcc,	// (0x00003978) bg_passive_tab_pane_cp1_srt

0x3751,	// (0x000054fd) bg_passive_tab_pane_g1_cp1_srt

0x03cf,	// (0x0000217b) bg_passive_tab_pane_g2_cp1_srt

0x375a,	// (0x00005506) bg_passive_tab_pane_g3_cp1_srt

0xe6b6,	// (0x00010462) bg_active_tab_pane_cp1_srt_ParamLimits

0xe6b6,	// (0x00010462) bg_active_tab_pane_cp1_srt

0x3763,	// (0x0000550f) tabs_2_active_pane_srt_g1

0xc1d1,	// (0x0000df7d) tabs_2_active_pane_srt_t1_ParamLimits

0xc1d1,	// (0x0000df7d) tabs_2_active_pane_srt_t1

0x3751,	// (0x000054fd) bg_active_tab_pane_g1_cp1_srt

0x03cf,	// (0x0000217b) bg_active_tab_pane_g2_cp1_srt

0x375a,	// (0x00005506) bg_active_tab_pane_g3_cp1_srt

0x371e,	// (0x000054ca) tabs_3_active_pane_srt_ParamLimits

0x371e,	// (0x000054ca) tabs_3_active_pane_srt

0x372f,	// (0x000054db) tabs_3_passive_pane_cp_srt_ParamLimits

0x372f,	// (0x000054db) tabs_3_passive_pane_cp_srt

0x3740,	// (0x000054ec) tabs_3_passive_pane_srt_ParamLimits

0x3740,	// (0x000054ec) tabs_3_passive_pane_srt

0x1bcc,	// (0x00003978) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1bcc,	// (0x00003978) bg_passive_tab_pane_cp2_srt

0x0b24,	// (0x000028d0) bg_passive_tab_pane_g1_cp2_srt

0x03cf,	// (0x0000217b) bg_passive_tab_pane_g2_cp2_srt

0x0b2d,	// (0x000028d9) bg_passive_tab_pane_g3_cp2_srt

0xe6b6,	// (0x00010462) bg_active_tab_pane_cp2_srt_ParamLimits

0xe6b6,	// (0x00010462) bg_active_tab_pane_cp2_srt

0x3704,	// (0x000054b0) tabs_3_active_pane_srt_g1

0xc1bb,	// (0x0000df67) tabs_3_active_pane_srt_t1_ParamLimits

0xc1bb,	// (0x0000df67) tabs_3_active_pane_srt_t1

0x0b24,	// (0x000028d0) bg_active_tab_pane_g1_cp2_srt

0x03cf,	// (0x0000217b) bg_active_tab_pane_g2_cp2_srt

0x0b2d,	// (0x000028d9) bg_active_tab_pane_g3_cp2_srt

0x36bc,	// (0x00005468) tabs_4_active_pane_srt_ParamLimits

0x36bc,	// (0x00005468) tabs_4_active_pane_srt

0x36ce,	// (0x0000547a) tabs_4_passive_pane_cp2_srt_ParamLimits

0x36ce,	// (0x0000547a) tabs_4_passive_pane_cp2_srt

0x0de2,	// (0x00002b8e) aid_size_cell_toolbar

0x324f,	// (0x00004ffb) main_idle_act_pane_ParamLimits

0x1029,	// (0x00002dd5) popup_large_graphic_colour_window_ParamLimits

0xb6d1,	// (0x0000d47d) popup_toolbar_window_ParamLimits

0xb6d1,	// (0x0000d47d) popup_toolbar_window

0x346b,	// (0x00005217) list_single_graphic_2heading_pane_ParamLimits

0x346b,	// (0x00005217) list_single_graphic_2heading_pane

0xf364,	// (0x00011110) aid_size_cell_apps_grid_lsc_pane

0xf376,	// (0x00011122) aid_size_cell_apps_grid_prt_pane

0x0e22,	// (0x00002bce) bg_wml_button_pane_cp1_ParamLimits

0x0e22,	// (0x00002bce) bg_wml_button_pane_cp1

0xbc19,	// (0x0000d9c5) form_midp_field_text_pane_t1_ParamLimits

0x1bcc,	// (0x00003978) input_focus_pane_cp050_ParamLimits

0x1ea2,	// (0x00003c4e) list_midp_form_text_pane_ParamLimits

0x1e54,	// (0x00003c00) input_focus_pane_cp051_ParamLimits

0x1e68,	// (0x00003c14) list_midp_choice_pane_ParamLimits

0x1d13,	// (0x00003abf) list_single_2graphic_pane_cp3_ParamLimits

0x1d13,	// (0x00003abf) list_single_2graphic_pane_cp3

0x1d29,	// (0x00003ad5) list_single_midp_graphic_pane_ParamLimits

0x1d29,	// (0x00003ad5) list_single_midp_graphic_pane

0x18c9,	// (0x00003675) list_single_graphic_2heading_pane_g1_ParamLimits

0x18c9,	// (0x00003675) list_single_graphic_2heading_pane_g1

0x0835,	// (0x000025e1) list_single_graphic_2heading_pane_g4_ParamLimits

0x0835,	// (0x000025e1) list_single_graphic_2heading_pane_g4

0x18d5,	// (0x00003681) list_single_graphic_2heading_pane_g5_ParamLimits

0x18d5,	// (0x00003681) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x00011557) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x00011557) list_single_graphic_2heading_pane_g

0x18e1,	// (0x0000368d) list_single_graphic_2heading_pane_t1_ParamLimits

0x18e1,	// (0x0000368d) list_single_graphic_2heading_pane_t1

0x18f5,	// (0x000036a1) list_single_graphic_2heading_pane_t2_ParamLimits

0x18f5,	// (0x000036a1) list_single_graphic_2heading_pane_t2

0x1911,	// (0x000036bd) list_single_graphic_2heading_pane_t3_ParamLimits

0x1911,	// (0x000036bd) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0001155e) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0001155e) list_single_graphic_2heading_pane_t

0x1929,	// (0x000036d5) bg_popup_sub_pane_cp2

0x1953,	// (0x000036ff) grid_toobar_pane

0x198f,	// (0x0000373b) cell_toolbar_pane_ParamLimits

0x198f,	// (0x0000373b) cell_toolbar_pane

0x19d5,	// (0x00003781) cell_toolbar_pane_g1_ParamLimits

0x19d5,	// (0x00003781) cell_toolbar_pane_g1

0x19e9,	// (0x00003795) cell_toolbar_pane_g2_ParamLimits

0x19e9,	// (0x00003795) cell_toolbar_pane_g2

0x0001,

0xf7b9,	// (0x00011565) cell_toolbar_pane_g_ParamLimits

0xf7b9,	// (0x00011565) cell_toolbar_pane_g

0x1a0b,	// (0x000037b7) grid_highlight_pane_cp2_ParamLimits

0x1a0b,	// (0x000037b7) grid_highlight_pane_cp2

0x1a25,	// (0x000037d1) toolbar_button_pane

0x1a31,	// (0x000037dd) toolbar_button_pane_g1

0x1a39,	// (0x000037e5) toolbar_button_pane_g2

0x1a41,	// (0x000037ed) toolbar_button_pane_g3

0x1a49,	// (0x000037f5) toolbar_button_pane_g4

0x1a51,	// (0x000037fd) toolbar_button_pane_g5

0x1a59,	// (0x00003805) toolbar_button_pane_g6

0x1a61,	// (0x0000380d) toolbar_button_pane_g7

0x1a69,	// (0x00003815) toolbar_button_pane_g8

0x1a71,	// (0x0000381d) toolbar_button_pane_g9

0x0009,

0xf7be,	// (0x0001156a) toolbar_button_pane_g

0x1a81,	// (0x0000382d) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1a81,	// (0x0000382d) list_single_2graphic_pane_g1_cp3

0xbb48,	// (0x0000d8f4) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbb48,	// (0x0000d8f4) list_single_2graphic_pane_g2_cp3

0x06fa,	// (0x000024a6) list_single_2graphic_pane_g3_cp3

0x1a9e,	// (0x0000384a) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1a9e,	// (0x0000384a) list_single_2graphic_pane_g4_cp3

0x1aaa,	// (0x00003856) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1aaa,	// (0x00003856) list_single_2graphic_pane_t1_cp3

0x06ee,	// (0x0000249a) list_single_midp_graphic_pane_g2_ParamLimits

0x06ee,	// (0x0000249a) list_single_midp_graphic_pane_g2

0x0dea,	// (0x00002b96) aid_zoom_text_primary

0x0df2,	// (0x00002b9e) aid_zoom_text_secondary

0xadf7,	// (0x0000cba3) status_small_pane_g7_ParamLimits

0xadf7,	// (0x0000cba3) status_small_pane_g7

0xae1a,	// (0x0000cbc6) status_small_pane_t1_ParamLimits

0xa075,	// (0x0000be21) title_pane_g2

0x0003,

0xf54e,	// (0x000112fa) title_pane_g

0xa315,	// (0x0000c0c1) aid_size_cell_colour_1_pane_ParamLimits

0xa315,	// (0x0000c0c1) aid_size_cell_colour_1_pane

0xa329,	// (0x0000c0d5) aid_size_cell_colour_2_pane_ParamLimits

0xa329,	// (0x0000c0d5) aid_size_cell_colour_2_pane

0xa33d,	// (0x0000c0e9) aid_size_cell_colour_3_pane_ParamLimits

0xa33d,	// (0x0000c0e9) aid_size_cell_colour_3_pane

0xa351,	// (0x0000c0fd) aid_size_cell_colour_4_pane_ParamLimits

0xa351,	// (0x0000c0fd) aid_size_cell_colour_4_pane

0xf1dd,	// (0x00010f89) title_pane_stacon_g1_ParamLimits

0xf1dd,	// (0x00010f89) title_pane_stacon_g1

0x2299,	// (0x00004045) popup_note_wait_window_g3_ParamLimits

0x2299,	// (0x00004045) popup_note_wait_window_g3

0x2310,	// (0x000040bc) popup_note_wait_window_t5_ParamLimits

0x2310,	// (0x000040bc) popup_note_wait_window_t5

0xe614,	// (0x000103c0) main_feb_china_hwr_fs_writing_pane

0xb06a,	// (0x0000ce16) popup_feb_china_hwr_fs_window_ParamLimits

0xb06a,	// (0x0000ce16) popup_feb_china_hwr_fs_window

0xbb59,	// (0x0000d905) aid_size_cell_hwr_fs_ParamLimits

0xbb59,	// (0x0000d905) aid_size_cell_hwr_fs

0x1bcc,	// (0x00003978) bg_popup_sub_pane_cp3_ParamLimits

0x1bcc,	// (0x00003978) bg_popup_sub_pane_cp3

0xbb6e,	// (0x0000d91a) grid_hwr_fs_pane_ParamLimits

0xbb6e,	// (0x0000d91a) grid_hwr_fs_pane

0x1bf0,	// (0x0000399c) linegrid_hwr_fs_pane_ParamLimits

0x1bf0,	// (0x0000399c) linegrid_hwr_fs_pane

0xbb86,	// (0x0000d932) cell_hwr_fs_pane_ParamLimits

0xbb86,	// (0x0000d932) cell_hwr_fs_pane

0x1c24,	// (0x000039d0) linegrid_hwr_fs_pane_g1_ParamLimits

0x1c24,	// (0x000039d0) linegrid_hwr_fs_pane_g1

0xbbac,	// (0x0000d958) linegrid_hwr_fs_pane_g2_ParamLimits

0xbbac,	// (0x0000d958) linegrid_hwr_fs_pane_g2

0x1c42,	// (0x000039ee) linegrid_hwr_fs_pane_g3_ParamLimits

0x1c42,	// (0x000039ee) linegrid_hwr_fs_pane_g3

0x1c4e,	// (0x000039fa) linegrid_hwr_fs_pane_g4_ParamLimits

0x1c4e,	// (0x000039fa) linegrid_hwr_fs_pane_g4

0x1c6c,	// (0x00003a18) linegrid_hwr_fs_pane_g5_ParamLimits

0x1c6c,	// (0x00003a18) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e4,	// (0x00011590) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e4,	// (0x00011590) linegrid_hwr_fs_pane_g

0x1c82,	// (0x00003a2e) cell_hwr_fs_pane_g1_ParamLimits

0x1c82,	// (0x00003a2e) cell_hwr_fs_pane_g1

0x1804,	// (0x000035b0) cell_hwr_fs_pane_g2_ParamLimits

0x1804,	// (0x000035b0) cell_hwr_fs_pane_g2

0xbbbe,	// (0x0000d96a) cell_hwr_fs_pane_g3_ParamLimits

0xbbbe,	// (0x0000d96a) cell_hwr_fs_pane_g3

0xbbcb,	// (0x0000d977) cell_hwr_fs_pane_g4_ParamLimits

0xbbcb,	// (0x0000d977) cell_hwr_fs_pane_g4

0x0003,

0xf7ef,	// (0x0001159b) cell_hwr_fs_pane_g_ParamLimits

0xf7ef,	// (0x0001159b) cell_hwr_fs_pane_g

0xbbd8,	// (0x0000d984) cell_hwr_fs_pane_t1

0xe614,	// (0x000103c0) grid_highlight_pane_cp6

0xe614,	// (0x000103c0) main_idle_act2_pane

0xefd7,	// (0x00010d83) aid_inside_area_popup_secondary

0xbe04,	// (0x0000dbb0) aid_inside_area_window_primary_ParamLimits

0xbe04,	// (0x0000dbb0) aid_inside_area_window_primary

0x38db,	// (0x00005687) ai2_news_ticker_pane

0x38e3,	// (0x0000568f) aid_size_cell_ai1_link_ParamLimits

0x38e3,	// (0x0000568f) aid_size_cell_ai1_link

0x38fd,	// (0x000056a9) popup_ai2_data_window_ParamLimits

0x38fd,	// (0x000056a9) popup_ai2_data_window

0x391b,	// (0x000056c7) popup_ai2_link_window_ParamLimits

0x391b,	// (0x000056c7) popup_ai2_link_window

0x1bcc,	// (0x00003978) bg_popup_sub_pane_cp4_ParamLimits

0x1bcc,	// (0x00003978) bg_popup_sub_pane_cp4

0x3931,	// (0x000056dd) grid_ai2_link_pane_ParamLimits

0x3931,	// (0x000056dd) grid_ai2_link_pane

0x3948,	// (0x000056f4) popup_ai2_link_window_g1_ParamLimits

0x3948,	// (0x000056f4) popup_ai2_link_window_g1

0x3954,	// (0x00005700) popup_ai2_link_window_g2_ParamLimits

0x3954,	// (0x00005700) popup_ai2_link_window_g2

0x0001,

0xf9c2,	// (0x0001176e) popup_ai2_link_window_g_ParamLimits

0xf9c2,	// (0x0001176e) popup_ai2_link_window_g

0x3965,	// (0x00005711) ai2_mp_button_pane

0x396d,	// (0x00005719) ai2_mp_volume_pane

0x1e54,	// (0x00003c00) bg_popup_sub_pane_cp5_ParamLimits

0x1e54,	// (0x00003c00) bg_popup_sub_pane_cp5

0x3975,	// (0x00005721) heading_ai2_gene_pane_ParamLimits

0x3975,	// (0x00005721) heading_ai2_gene_pane

0x3981,	// (0x0000572d) list_ai2_gene_pane_ParamLimits

0x3981,	// (0x0000572d) list_ai2_gene_pane

0x39c9,	// (0x00005775) cell_ai2_link_pane_ParamLimits

0x39c9,	// (0x00005775) cell_ai2_link_pane

0x39df,	// (0x0000578b) cell_ai2_link_pane_g1

0xe614,	// (0x000103c0) grid_highlight_pane_cp7

0x3ab2,	// (0x0000585e) ai2_mp_volume_pane_g1

0x3aba,	// (0x00005866) ai2_mp_volume_pane_g2

0x3a27,	// (0x000057d3) list_ai2_gene_pane_t1

0x3ac2,	// (0x0000586e) ai2_mp_volume_pane_g3

0x0002,

0xf9db,	// (0x00011787) ai2_mp_volume_pane_g

0x3aca,	// (0x00005876) volume_small_pane_cp3

0x3ad3,	// (0x0000587f) aid_size_cell_ai2_button

0x3adb,	// (0x00005887) grid_ai2_button_pane

0x3ae4,	// (0x00005890) cell_ai2_button_pane_ParamLimits

0x3ae4,	// (0x00005890) cell_ai2_button_pane

0xe49b,	// (0x00010247) cell_ai2_button_pane_g1

0xe614,	// (0x000103c0) grid_highlight_pane_cp8

0x3a72,	// (0x0000581e) ai2_gene_pane_t1_ParamLimits

0x3a72,	// (0x0000581e) ai2_gene_pane_t1

0xafe6,	// (0x0000cd92) aid_height_parent_landscape

0xbfbc,	// (0x0000dd68) aid_height_set_list

0x324f,	// (0x00004ffb) aid_size_parent

0xc18f,	// (0x0000df3b) aid_size_cell_graphic_pane_ParamLimits

0x3991,	// (0x0000573d) popup_ai2_data_window_g1_ParamLimits

0x3991,	// (0x0000573d) popup_ai2_data_window_g1

0x399d,	// (0x00005749) ai2_news_ticker_pane_g1

0x39a5,	// (0x00005751) ai2_news_ticker_pane_g2

0x0001,

0xf9c7,	// (0x00011773) ai2_news_ticker_pane_g

0x39ad,	// (0x00005759) ai2_news_ticker_pane_t1

0x39bb,	// (0x00005767) ai2_news_ticker_pane_t2

0x0001,

0xf9cc,	// (0x00011778) ai2_news_ticker_pane_t

0x39e8,	// (0x00005794) heading_ai2_gene_pane_g1

0x39f0,	// (0x0000579c) heading_ai2_gene_pane_t1_ParamLimits

0x39f0,	// (0x0000579c) heading_ai2_gene_pane_t1

0x3a05,	// (0x000057b1) list_highlight_pane_cp6

0x3a0d,	// (0x000057b9) ai2_gene_pane_ParamLimits

0x3a0d,	// (0x000057b9) ai2_gene_pane

0x3a35,	// (0x000057e1) list_ai2_gene_pane_t2

0x0001,

0xf9d1,	// (0x0001177d) list_ai2_gene_pane_t

0x3a43,	// (0x000057ef) list_highlight_pane_cp8_ParamLimits

0x3a43,	// (0x000057ef) list_highlight_pane_cp8

0x3a54,	// (0x00005800) ai2_gene_pane_g1_ParamLimits

0x3a54,	// (0x00005800) ai2_gene_pane_g1

0x3a66,	// (0x00005812) ai2_gene_pane_g2_ParamLimits

0x3a66,	// (0x00005812) ai2_gene_pane_g2

0x0001,

0xf9d6,	// (0x00011782) ai2_gene_pane_g_ParamLimits

0xf9d6,	// (0x00011782) ai2_gene_pane_g

0xed45,	// (0x00010af1) scroll_pane_cp12

0xafa3,	// (0x0000cd4f) control_pane_t3_ParamLimits

0xafa3,	// (0x0000cd4f) control_pane_t3

0xae0b,	// (0x0000cbb7) status_small_pane_g8_ParamLimits

0xae0b,	// (0x0000cbb7) status_small_pane_g8

0xb10c,	// (0x0000ceb8) popup_find_window_ParamLimits

0xb3bd,	// (0x0000d169) popup_note_image_window_ParamLimits

0x18c9,	// (0x00003675) list_double2_graphic_pane_vc_g1_ParamLimits

0x18c9,	// (0x00003675) list_double2_graphic_pane_vc_g1

0x0835,	// (0x000025e1) list_double2_graphic_pane_vc_g2_ParamLimits

0x0835,	// (0x000025e1) list_double2_graphic_pane_vc_g2

0x18d5,	// (0x00003681) list_double2_graphic_pane_vc_g3_ParamLimits

0x18d5,	// (0x00003681) list_double2_graphic_pane_vc_g3

0x0002,

0xf7ab,	// (0x00011557) list_double2_graphic_pane_vc_g_ParamLimits

0xf7ab,	// (0x00011557) list_double2_graphic_pane_vc_g

0x19bf,	// (0x0000376b) list_double2_graphic_pane_vc_t1_ParamLimits

0x19bf,	// (0x0000376b) list_double2_graphic_pane_vc_t1

0x0835,	// (0x000025e1) list_single_heading_pane_vc_g1_ParamLimits

0x0835,	// (0x000025e1) list_single_heading_pane_vc_g1

0x18d5,	// (0x00003681) list_single_heading_pane_vc_g2_ParamLimits

0x18d5,	// (0x00003681) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011374) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011374) list_single_heading_pane_vc_g

0x1ac5,	// (0x00003871) list_single_heading_pane_vc_t1_ParamLimits

0x1ac5,	// (0x00003871) list_single_heading_pane_vc_t1

0x1adb,	// (0x00003887) list_single_heading_pane_vc_t2_ParamLimits

0x1adb,	// (0x00003887) list_single_heading_pane_vc_t2

0x0001,

0xf7d3,	// (0x0001157f) list_single_heading_pane_vc_t_ParamLimits

0xf7d3,	// (0x0001157f) list_single_heading_pane_vc_t

0x1b03,	// (0x000038af) list_setting_number_pane_vc_g1_ParamLimits

0x1b03,	// (0x000038af) list_setting_number_pane_vc_g1

0x1b0f,	// (0x000038bb) list_setting_number_pane_vc_g2_ParamLimits

0x1b0f,	// (0x000038bb) list_setting_number_pane_vc_g2

0x0001,

0xf7d8,	// (0x00011584) list_setting_number_pane_vc_g_ParamLimits

0xf7d8,	// (0x00011584) list_setting_number_pane_vc_g

0x1b1b,	// (0x000038c7) list_setting_number_pane_vc_t1_ParamLimits

0x1b1b,	// (0x000038c7) list_setting_number_pane_vc_t1

0x1b2f,	// (0x000038db) list_setting_number_pane_vc_t2_ParamLimits

0x1b2f,	// (0x000038db) list_setting_number_pane_vc_t2

0x1b4b,	// (0x000038f7) list_setting_number_pane_vc_t3_ParamLimits

0x1b4b,	// (0x000038f7) list_setting_number_pane_vc_t3

0x0002,

0xf7dd,	// (0x00011589) list_setting_number_pane_vc_t_ParamLimits

0xf7dd,	// (0x00011589) list_setting_number_pane_vc_t

0x1b79,	// (0x00003925) set_value_pane_vc_ParamLimits

0x1b79,	// (0x00003925) set_value_pane_vc

0x346b,	// (0x00005217) list_double2_graphic_pane_vc_ParamLimits

0x346b,	// (0x00005217) list_double2_graphic_pane_vc

0x346b,	// (0x00005217) list_double2_large_graphic_pane_vc_ParamLimits

0x346b,	// (0x00005217) list_double2_large_graphic_pane_vc

0x346b,	// (0x00005217) list_double2_pane_vc_ParamLimits

0x346b,	// (0x00005217) list_double2_pane_vc

0x346b,	// (0x00005217) list_double_graphic_heading_pane_vc_ParamLimits

0x346b,	// (0x00005217) list_double_graphic_heading_pane_vc

0x346b,	// (0x00005217) list_double_graphic_pane_vc_ParamLimits

0x346b,	// (0x00005217) list_double_graphic_pane_vc

0x346b,	// (0x00005217) list_double_heading_pane_vc_ParamLimits

0x346b,	// (0x00005217) list_double_heading_pane_vc

0x3493,	// (0x0000523f) list_double_large_graphic_pane_vc_ParamLimits

0x3493,	// (0x0000523f) list_double_large_graphic_pane_vc

0x346b,	// (0x00005217) list_double_number_pane_vc_ParamLimits

0x346b,	// (0x00005217) list_double_number_pane_vc

0x346b,	// (0x00005217) list_double_pane_vc_ParamLimits

0x346b,	// (0x00005217) list_double_pane_vc

0x346b,	// (0x00005217) list_double_time_pane_vc_ParamLimits

0x346b,	// (0x00005217) list_double_time_pane_vc

0x346b,	// (0x00005217) list_setting_number_pane_vc_ParamLimits

0x346b,	// (0x00005217) list_setting_number_pane_vc

0x346b,	// (0x00005217) list_setting_pane_vc_ParamLimits

0x346b,	// (0x00005217) list_setting_pane_vc

0x346b,	// (0x00005217) list_single_graphic_heading_pane_vc_ParamLimits

0x346b,	// (0x00005217) list_single_graphic_heading_pane_vc

0x346b,	// (0x00005217) list_single_heading_pane_vc_ParamLimits

0x346b,	// (0x00005217) list_single_heading_pane_vc

0x346b,	// (0x00005217) list_single_number_heading_pane_vc_ParamLimits

0x346b,	// (0x00005217) list_single_number_heading_pane_vc

0x18c9,	// (0x00003675) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x18c9,	// (0x00003675) list_double_graphic_heading_pane_vc_g1

0x3b17,	// (0x000058c3) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3b17,	// (0x000058c3) list_double_graphic_heading_pane_vc_g2

0x3b23,	// (0x000058cf) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3b23,	// (0x000058cf) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e2,	// (0x0001178e) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e2,	// (0x0001178e) list_double_graphic_heading_pane_vc_g

0x3b2f,	// (0x000058db) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3b2f,	// (0x000058db) list_double_graphic_heading_pane_vc_t1

0x3b45,	// (0x000058f1) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3b45,	// (0x000058f1) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e9,	// (0x00011795) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e9,	// (0x00011795) list_double_graphic_heading_pane_vc_t

0x1b03,	// (0x000038af) list_setting_pane_vc_g1_ParamLimits

0x1b03,	// (0x000038af) list_setting_pane_vc_g1

0x1b0f,	// (0x000038bb) list_setting_pane_vc_g2_ParamLimits

0x1b0f,	// (0x000038bb) list_setting_pane_vc_g2

0x0001,

0xf7d8,	// (0x00011584) list_setting_pane_vc_g_ParamLimits

0xf7d8,	// (0x00011584) list_setting_pane_vc_g

0x3d7e,	// (0x00005b2a) list_setting_pane_vc_t1_ParamLimits

0x3d7e,	// (0x00005b2a) list_setting_pane_vc_t1

0x3d9a,	// (0x00005b46) list_setting_pane_vc_t2_ParamLimits

0x3d9a,	// (0x00005b46) list_setting_pane_vc_t2

0x0001,

0xfa2c,	// (0x000117d8) list_setting_pane_vc_t_ParamLimits

0xfa2c,	// (0x000117d8) list_setting_pane_vc_t

0x1b79,	// (0x00003925) set_value_pane_cp_vc_ParamLimits

0x1b79,	// (0x00003925) set_value_pane_cp_vc

0x0835,	// (0x000025e1) list_single_number_heading_pane_vc_g1_ParamLimits

0x0835,	// (0x000025e1) list_single_number_heading_pane_vc_g1

0x18d5,	// (0x00003681) list_single_number_heading_pane_vc_g2_ParamLimits

0x18d5,	// (0x00003681) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011374) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011374) list_single_number_heading_pane_vc_g

0x3db6,	// (0x00005b62) list_single_number_heading_pane_vc_t1_ParamLimits

0x3db6,	// (0x00005b62) list_single_number_heading_pane_vc_t1

0x3dcc,	// (0x00005b78) list_single_number_heading_pane_vc_t2_ParamLimits

0x3dcc,	// (0x00005b78) list_single_number_heading_pane_vc_t2

0x3dde,	// (0x00005b8a) list_single_number_heading_pane_vc_t3_ParamLimits

0x3dde,	// (0x00005b8a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa31,	// (0x000117dd) list_single_number_heading_pane_vc_t_ParamLimits

0xfa31,	// (0x000117dd) list_single_number_heading_pane_vc_t

0x18c9,	// (0x00003675) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x18c9,	// (0x00003675) list_single_graphic_heading_pane_vc_g1

0x0835,	// (0x000025e1) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0835,	// (0x000025e1) list_single_graphic_heading_pane_vc_g4

0x18d5,	// (0x00003681) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x18d5,	// (0x00003681) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7ab,	// (0x00011557) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7ab,	// (0x00011557) list_single_graphic_heading_pane_vc_g

0x3db6,	// (0x00005b62) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3db6,	// (0x00005b62) list_single_graphic_heading_pane_vc_t1

0x3df0,	// (0x00005b9c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3df0,	// (0x00005b9c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa38,	// (0x000117e4) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x000117e4) list_single_graphic_heading_pane_vc_t

0x0835,	// (0x000025e1) list_double2_pane_vc_g1_ParamLimits

0x0835,	// (0x000025e1) list_double2_pane_vc_g1

0x18d5,	// (0x00003681) list_double2_pane_vc_g2_ParamLimits

0x18d5,	// (0x00003681) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011374) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011374) list_double2_pane_vc_g

0x3e02,	// (0x00005bae) list_double2_pane_vc_t1_ParamLimits

0x3e02,	// (0x00005bae) list_double2_pane_vc_t1

0x3e18,	// (0x00005bc4) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3e18,	// (0x00005bc4) list_double2_large_graphic_pane_vc_g1

0x0835,	// (0x000025e1) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0835,	// (0x000025e1) list_double2_large_graphic_pane_vc_g2

0x18d5,	// (0x00003681) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x18d5,	// (0x00003681) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x00011391) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x00011391) list_double2_large_graphic_pane_vc_g

0x3e24,	// (0x00005bd0) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3e24,	// (0x00005bd0) list_double2_large_graphic_pane_vc_t1

0x3e3a,	// (0x00005be6) list_double_time_pane_vc_g1_ParamLimits

0x3e3a,	// (0x00005be6) list_double_time_pane_vc_g1

0x3e46,	// (0x00005bf2) list_double_time_pane_vc_g2_ParamLimits

0x3e46,	// (0x00005bf2) list_double_time_pane_vc_g2

0x0001,

0xfa3d,	// (0x000117e9) list_double_time_pane_vc_g_ParamLimits

0xfa3d,	// (0x000117e9) list_double_time_pane_vc_g

0x3e52,	// (0x00005bfe) list_double_time_pane_vc_t1_ParamLimits

0x3e52,	// (0x00005bfe) list_double_time_pane_vc_t1

0x3e82,	// (0x00005c2e) list_double_time_pane_vc_t2_ParamLimits

0x3e82,	// (0x00005c2e) list_double_time_pane_vc_t2

0x3eab,	// (0x00005c57) list_double_time_pane_vc_t3_ParamLimits

0x3eab,	// (0x00005c57) list_double_time_pane_vc_t3

0x3ebd,	// (0x00005c69) list_double_time_pane_vc_t4_ParamLimits

0x3ebd,	// (0x00005c69) list_double_time_pane_vc_t4

0x0003,

0xfa42,	// (0x000117ee) list_double_time_pane_vc_t_ParamLimits

0xfa42,	// (0x000117ee) list_double_time_pane_vc_t

0x0835,	// (0x000025e1) list_double_pane_vc_g1_ParamLimits

0x0835,	// (0x000025e1) list_double_pane_vc_g1

0x18d5,	// (0x00003681) list_double_pane_vc_g2_ParamLimits

0x18d5,	// (0x00003681) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011374) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011374) list_double_pane_vc_g

0x3ed1,	// (0x00005c7d) list_double_pane_vc_t1_ParamLimits

0x3ed1,	// (0x00005c7d) list_double_pane_vc_t1

0x3ee5,	// (0x00005c91) list_double_pane_vc_t2_ParamLimits

0x3ee5,	// (0x00005c91) list_double_pane_vc_t2

0x0001,

0xfa4b,	// (0x000117f7) list_double_pane_vc_t_ParamLimits

0xfa4b,	// (0x000117f7) list_double_pane_vc_t

0x0835,	// (0x000025e1) list_double_number_pane_vc_g1_ParamLimits

0x0835,	// (0x000025e1) list_double_number_pane_vc_g1

0x18d5,	// (0x00003681) list_double_number_pane_vc_g2_ParamLimits

0x18d5,	// (0x00003681) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011374) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011374) list_double_number_pane_vc_g

0x3efb,	// (0x00005ca7) list_double_number_pane_vc_t1_ParamLimits

0x3efb,	// (0x00005ca7) list_double_number_pane_vc_t1

0x3f0d,	// (0x00005cb9) list_double_number_pane_vc_t2_ParamLimits

0x3f0d,	// (0x00005cb9) list_double_number_pane_vc_t2

0x3ee5,	// (0x00005c91) list_double_number_pane_vc_t3_ParamLimits

0x3ee5,	// (0x00005c91) list_double_number_pane_vc_t3

0x0002,

0xfa50,	// (0x000117fc) list_double_number_pane_vc_t_ParamLimits

0xfa50,	// (0x000117fc) list_double_number_pane_vc_t

0x3f21,	// (0x00005ccd) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3f21,	// (0x00005ccd) list_double_large_graphic_pane_vc_g1

0x3f43,	// (0x00005cef) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3f43,	// (0x00005cef) list_double_large_graphic_pane_vc_g2

0x3f57,	// (0x00005d03) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3f57,	// (0x00005d03) list_double_large_graphic_pane_vc_g3

0x3f66,	// (0x00005d12) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3f66,	// (0x00005d12) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa57,	// (0x00011803) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa57,	// (0x00011803) list_double_large_graphic_pane_vc_g

0x3f75,	// (0x00005d21) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3f75,	// (0x00005d21) list_double_large_graphic_pane_vc_t1

0x3f91,	// (0x00005d3d) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3f91,	// (0x00005d3d) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa60,	// (0x0001180c) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa60,	// (0x0001180c) list_double_large_graphic_pane_vc_t

0x3b17,	// (0x000058c3) list_double_heading_pane_vc_g1_ParamLimits

0x3b17,	// (0x000058c3) list_double_heading_pane_vc_g1

0x3b23,	// (0x000058cf) list_double_heading_pane_vc_g2_ParamLimits

0x3b23,	// (0x000058cf) list_double_heading_pane_vc_g2

0x0001,

0xfa65,	// (0x00011811) list_double_heading_pane_vc_g_ParamLimits

0xfa65,	// (0x00011811) list_double_heading_pane_vc_g

0x3fb1,	// (0x00005d5d) list_double_heading_pane_vc_t1_ParamLimits

0x3fb1,	// (0x00005d5d) list_double_heading_pane_vc_t1

0x3fc3,	// (0x00005d6f) list_double_heading_pane_vc_t2_ParamLimits

0x3fc3,	// (0x00005d6f) list_double_heading_pane_vc_t2

0x0001,

0xfa6a,	// (0x00011816) list_double_heading_pane_vc_t_ParamLimits

0xfa6a,	// (0x00011816) list_double_heading_pane_vc_t

0x3fdb,	// (0x00005d87) list_double_graphic_pane_vc_g1_ParamLimits

0x3fdb,	// (0x00005d87) list_double_graphic_pane_vc_g1

0x3fe7,	// (0x00005d93) list_double_graphic_pane_vc_g2_ParamLimits

0x3fe7,	// (0x00005d93) list_double_graphic_pane_vc_g2

0x0835,	// (0x000025e1) list_double_graphic_pane_vc_g3_ParamLimits

0x0835,	// (0x000025e1) list_double_graphic_pane_vc_g3

0x0003,

0xfa6f,	// (0x0001181b) list_double_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x0001181b) list_double_graphic_pane_vc_g

0x4004,	// (0x00005db0) list_double_graphic_pane_vc_t1_ParamLimits

0x4004,	// (0x00005db0) list_double_graphic_pane_vc_t1

0x402e,	// (0x00005dda) list_double_graphic_pane_vc_t2_ParamLimits

0x402e,	// (0x00005dda) list_double_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x00011824) list_double_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x00011824) list_double_graphic_pane_vc_t

0xe4bd,	// (0x00010269) aid_size_cell_fastswap

0x9e4e,	// (0x0000bbfa) aid_size_cell_touch_ParamLimits

0x9e4e,	// (0x0000bbfa) aid_size_cell_touch

0xe644,	// (0x000103f0) popup_fast_swap_wide_window_ParamLimits

0xe644,	// (0x000103f0) popup_fast_swap_wide_window

0xa00c,	// (0x0000bdb8) touch_pane_ParamLimits

0xa00c,	// (0x0000bdb8) touch_pane

0xedbe,	// (0x00010b6a) button_value_adjust_pane_cp2

0xedc6,	// (0x00010b72) button_value_adjust_pane_cp4

0xedce,	// (0x00010b7a) form_field_data_pane_cp2

0xa850,	// (0x0000c5fc) form_field_data_wide_pane_cp2

0xf3a5,	// (0x00011151) bg_scroll_pane_ParamLimits

0xf3c4,	// (0x00011170) scroll_handle_pane_ParamLimits

0xf3d8,	// (0x00011184) scroll_sc2_down_pane_ParamLimits

0xf3d8,	// (0x00011184) scroll_sc2_down_pane

0xf3ff,	// (0x000111ab) scroll_sc2_up_pane_ParamLimits

0xf3ff,	// (0x000111ab) scroll_sc2_up_pane

0xc303,	// (0x0000e0af) grid_wheel_folder_pane_g1_ParamLimits

0xc303,	// (0x0000e0af) grid_wheel_folder_pane_g1

0x0516,	// (0x000022c2) clock_nsta_pane_cp2_ParamLimits

0x0516,	// (0x000022c2) clock_nsta_pane_cp2

0xace9,	// (0x0000ca95) listscroll_midp_pane_ParamLimits

0xacf5,	// (0x0000caa1) midp_canvas_pane

0x0dd0,	// (0x00002b7c) nsta_clock_indic_pane

0x0e2e,	// (0x00002bda) listscroll_form_pane_vc

0x0e52,	// (0x00002bfe) listscroll_set_pane_vc_ParamLimits

0x0e52,	// (0x00002bfe) listscroll_set_pane_vc

0xb837,	// (0x0000d5e3) clock_nsta_pane

0xb861,	// (0x0000d60d) indicator_nsta_pane

0x1929,	// (0x000036d5) bg_popup_sub_pane_cp2_ParamLimits

0x193d,	// (0x000036e9) find_pane_cp2_ParamLimits

0x193d,	// (0x000036e9) find_pane_cp2

0x1953,	// (0x000036ff) grid_toobar_pane_ParamLimits

0x1b8b,	// (0x00003937) list_form_gen_pane_vc_ParamLimits

0x1b8b,	// (0x00003937) list_form_gen_pane_vc

0x1ba1,	// (0x0000394d) scroll_pane_cp8_vc_ParamLimits

0x1ba1,	// (0x0000394d) scroll_pane_cp8_vc

0x1cc0,	// (0x00003a6c) data_form_wide_pane_vc_ParamLimits

0x1cc0,	// (0x00003a6c) data_form_wide_pane_vc

0x1ccc,	// (0x00003a78) form_field_data_wide_pane_vc_g1

0x1cd4,	// (0x00003a80) form_field_data_wide_pane_vc_t1_ParamLimits

0x1cd4,	// (0x00003a80) form_field_data_wide_pane_vc_t1

0xee29,	// (0x00010bd5) input_focus_pane_cp6_vc_ParamLimits

0xee29,	// (0x00010bd5) input_focus_pane_cp6_vc

0x201f,	// (0x00003dcb) list_midp_pane_ParamLimits

0x36b0,	// (0x0000545c) scroll_pane_cp16_ParamLimits

0x36b0,	// (0x0000545c) scroll_pane_cp16

0x206d,	// (0x00003e19) button_value_adjust_pane_ParamLimits

0x206d,	// (0x00003e19) button_value_adjust_pane

0xbfcd,	// (0x0000dd79) button_value_adjust_pane_cp6_ParamLimits

0xbfcd,	// (0x0000dd79) button_value_adjust_pane_cp6

0xc047,	// (0x0000ddf3) settings_code_pane_cp_ParamLimits

0xc047,	// (0x0000ddf3) settings_code_pane_cp

0xe49b,	// (0x00010247) cell_touch_pane_g1

0xe49b,	// (0x00010247) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x000114aa) cell_touch_pane_g

0xc1e7,	// (0x0000df93) cell_touch_pane_cp_ParamLimits

0xc1e7,	// (0x0000df93) cell_touch_pane_cp

0xc203,	// (0x0000dfaf) cell_touch_pane_ParamLimits

0xc203,	// (0x0000dfaf) cell_touch_pane

0xe49b,	// (0x00010247) scroll_sc2_down_pane_g1

0xe49b,	// (0x00010247) scroll_sc2_up_pane_g1

0xe614,	// (0x000103c0) bg_set_opt_pane_cp4_vc

0x3b63,	// (0x0000590f) list_set_graphic_pane_vc_g1_ParamLimits

0x3b63,	// (0x0000590f) list_set_graphic_pane_vc_g1

0x3b6f,	// (0x0000591b) list_set_graphic_pane_vc_g2_ParamLimits

0x3b6f,	// (0x0000591b) list_set_graphic_pane_vc_g2

0x0001,

0xf9ee,	// (0x0001179a) list_set_graphic_pane_vc_g_ParamLimits

0xf9ee,	// (0x0001179a) list_set_graphic_pane_vc_g

0x3b7b,	// (0x00005927) text_primary_small_cp13_vc_ParamLimits

0x3b7b,	// (0x00005927) text_primary_small_cp13_vc

0x05ac,	// (0x00002358) list_set_graphic_pane_vc_ParamLimits

0x05ac,	// (0x00002358) list_set_graphic_pane_vc

0xe614,	// (0x000103c0) input_focus_pane_cp2_vc

0xe49b,	// (0x00010247) setting_code_pane_vc_g1

0xe76e,	// (0x0001051a) setting_code_pane_vc_t1

0x3b93,	// (0x0000593f) set_text_pane_vc_t1_ParamLimits

0x3b93,	// (0x0000593f) set_text_pane_vc_t1

0xe614,	// (0x000103c0) input_focus_pane_cp1_vc

0x3bb1,	// (0x0000595d) list_set_text_pane_vc

0xe49b,	// (0x00010247) setting_text_pane_vc_g1

0xe614,	// (0x000103c0) bg_set_opt_pane_cp2_vc

0xe73d,	// (0x000104e9) setting_slider_graphic_pane_vc_g1

0x3bbb,	// (0x00005967) setting_slider_graphic_pane_vc_t1

0x3bcd,	// (0x00005979) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f3,	// (0x0001179f) setting_slider_graphic_pane_vc_t

0x3bdf,	// (0x0000598b) slider_set_pane_cp_vc

0x3be9,	// (0x00005995) slider_set_pane_vc_g1

0x3bf2,	// (0x0000599e) slider_set_pane_vc_g2

0x0006,

0xf9f8,	// (0x000117a4) slider_set_pane_vc_g

0xeef0,	// (0x00010c9c) set_opt_bg_pane_g1_copy1

0xeef8,	// (0x00010ca4) set_opt_bg_pane_g2_copy1

0x3c1e,	// (0x000059ca) set_opt_bg_pane_g3_copy1

0xef08,	// (0x00010cb4) set_opt_bg_pane_g4_copy1

0xef10,	// (0x00010cbc) set_opt_bg_pane_g5_copy1

0xef18,	// (0x00010cc4) set_opt_bg_pane_g6_copy1

0x3c28,	// (0x000059d4) set_opt_bg_pane_g7_copy1

0x3c32,	// (0x000059de) set_opt_bg_pane_g8_copy1

0x3c3c,	// (0x000059e8) set_opt_bg_pane_g9_copy1

0xe614,	// (0x000103c0) bg_set_opt_pane_cp_vc

0x3c46,	// (0x000059f2) setting_slider_pane_vc_t1

0x3c55,	// (0x00005a01) setting_slider_pane_vc_t2

0x3c67,	// (0x00005a13) setting_slider_pane_vc_t3

0x0002,

0xfa07,	// (0x000117b3) setting_slider_pane_vc_t

0x3c79,	// (0x00005a25) slider_set_pane_vc

0x28b2,	// (0x0000465e) volume_set_pane_vc_g1

0x28bb,	// (0x00004667) volume_set_pane_vc_g2

0x28c4,	// (0x00004670) volume_set_pane_vc_g3

0x28cd,	// (0x00004679) volume_set_pane_vc_g4

0x28d6,	// (0x00004682) volume_set_pane_vc_g5

0x28df,	// (0x0000468b) volume_set_pane_vc_g6

0x28e8,	// (0x00004694) volume_set_pane_vc_g7

0x28f1,	// (0x0000469d) volume_set_pane_vc_g8

0x28fa,	// (0x000046a6) volume_set_pane_vc_g9

0x2903,	// (0x000046af) volume_set_pane_vc_g10

0x0009,

0xfa0e,	// (0x000117ba) volume_set_pane_vc_g

0x3c81,	// (0x00005a2d) volume_set_pane_vc

0x3c8b,	// (0x00005a37) button_value_adjust_pane_cp1_vc

0x3c95,	// (0x00005a41) list_highlight_pane_cp2_vc

0x3c9e,	// (0x00005a4a) list_set_pane_vc_ParamLimits

0x3c9e,	// (0x00005a4a) list_set_pane_vc

0x3d0c,	// (0x00005ab8) main_pane_set_vc_t1_ParamLimits

0x3d0c,	// (0x00005ab8) main_pane_set_vc_t1

0x3d21,	// (0x00005acd) main_pane_set_vc_t2_ParamLimits

0x3d21,	// (0x00005acd) main_pane_set_vc_t2

0x3d33,	// (0x00005adf) main_pane_set_vc_t3_ParamLimits

0x3d33,	// (0x00005adf) main_pane_set_vc_t3

0x3d47,	// (0x00005af3) main_pane_set_vc_t4_ParamLimits

0x3d47,	// (0x00005af3) main_pane_set_vc_t4

0x0003,

0xfa23,	// (0x000117cf) main_pane_set_vc_t_ParamLimits

0xfa23,	// (0x000117cf) main_pane_set_vc_t

0x3d5b,	// (0x00005b07) setting_code_pane_vc_ParamLimits

0x3d5b,	// (0x00005b07) setting_code_pane_vc

0x3d6c,	// (0x00005b18) setting_slider_graphic_pane_vc

0x3d6c,	// (0x00005b18) setting_slider_pane_vc

0x3d6c,	// (0x00005b18) setting_text_pane_vc

0x3d6c,	// (0x00005b18) setting_volume_pane_vc

0x3d76,	// (0x00005b22) scroll_pane_cp121_vc

0xedac,	// (0x00010b58) set_content_pane_vc

0x404c,	// (0x00005df8) button_value_adjust_pane_g1

0x4055,	// (0x00005e01) button_value_adjust_pane_g2

0x0001,

0xfa7d,	// (0x00011829) button_value_adjust_pane_g

0x405e,	// (0x00005e0a) form_field_slider_wide_pane_vc_t1_ParamLimits

0x405e,	// (0x00005e0a) form_field_slider_wide_pane_vc_t1

0x4070,	// (0x00005e1c) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4070,	// (0x00005e1c) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa82,	// (0x0001182e) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa82,	// (0x0001182e) form_field_slider_wide_pane_vc_t

0xe6b6,	// (0x00010462) input_focus_pane_cp10_vc_ParamLimits

0xe6b6,	// (0x00010462) input_focus_pane_cp10_vc

0x409c,	// (0x00005e48) slider_cont_pane_cp1_vc_ParamLimits

0x409c,	// (0x00005e48) slider_cont_pane_cp1_vc

0x40ae,	// (0x00005e5a) slider_form_pane_g1_cp2

0x3bf2,	// (0x0000599e) slider_form_pane_g2_cp2

0x40db,	// (0x00005e87) form_field_slider_pane_vc_t3

0x40e9,	// (0x00005e95) form_field_slider_pane_vc_t4

0x40f7,	// (0x00005ea3) slider_form_pane_vc_ParamLimits

0x40f7,	// (0x00005ea3) slider_form_pane_vc

0x4104,	// (0x00005eb0) form_field_slider_pane_vc_t1_ParamLimits

0x4104,	// (0x00005eb0) form_field_slider_pane_vc_t1

0x4070,	// (0x00005e1c) form_field_slider_pane_vc_t2_ParamLimits

0x4070,	// (0x00005e1c) form_field_slider_pane_vc_t2

0x0001,

0xfa94,	// (0x00011840) form_field_slider_pane_vc_t_ParamLimits

0xfa94,	// (0x00011840) form_field_slider_pane_vc_t

0xe6b6,	// (0x00010462) input_focus_pane_cp9_vc_ParamLimits

0xe6b6,	// (0x00010462) input_focus_pane_cp9_vc

0x411a,	// (0x00005ec6) slider_cont_pane_vc_ParamLimits

0x411a,	// (0x00005ec6) slider_cont_pane_vc

0x412e,	// (0x00005eda) list_form_graphic_pane_cp_vc_ParamLimits

0x412e,	// (0x00005eda) list_form_graphic_pane_cp_vc

0x1ccc,	// (0x00003a78) form_field_popup_wide_pane_vc_g1

0x4143,	// (0x00005eef) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4143,	// (0x00005eef) form_field_popup_wide_pane_vc_t1

0xee29,	// (0x00010bd5) input_focus_pane_cp8_vc_ParamLimits

0xee29,	// (0x00010bd5) input_focus_pane_cp8_vc

0x4188,	// (0x00005f34) list_form_wide_pane_vc_ParamLimits

0x4188,	// (0x00005f34) list_form_wide_pane_vc

0x4194,	// (0x00005f40) list_form_graphic_pane_vc_g1

0x419c,	// (0x00005f48) list_form_graphic_pane_vc_t1_ParamLimits

0x419c,	// (0x00005f48) list_form_graphic_pane_vc_t1

0xe6ce,	// (0x0001047a) list_highlight_pane_cp5_vc_ParamLimits

0xe6ce,	// (0x0001047a) list_highlight_pane_cp5_vc

0x41b8,	// (0x00005f64) list_form_graphic_pane_vc_ParamLimits

0x41b8,	// (0x00005f64) list_form_graphic_pane_vc

0x1ccc,	// (0x00003a78) form_field_popup_pane_vc_g1

0x41ce,	// (0x00005f7a) form_field_popup_pane_vc_t1_ParamLimits

0x41ce,	// (0x00005f7a) form_field_popup_pane_vc_t1

0xee29,	// (0x00010bd5) input_focus_pane_cp7_vc_ParamLimits

0xee29,	// (0x00010bd5) input_focus_pane_cp7_vc

0x41e5,	// (0x00005f91) list_form_pane_vc_ParamLimits

0x41e5,	// (0x00005f91) list_form_pane_vc

0x41f1,	// (0x00005f9d) data_form_pane_vc_t1_ParamLimits

0x41f1,	// (0x00005f9d) data_form_pane_vc_t1

0xeef0,	// (0x00010c9c) input_focus_pane_vc_g1

0xeef8,	// (0x00010ca4) input_focus_pane_vc_g2

0xef00,	// (0x00010cac) input_focus_pane_vc_g3

0xef08,	// (0x00010cb4) input_focus_pane_vc_g4

0xef10,	// (0x00010cbc) input_focus_pane_vc_g5

0xef18,	// (0x00010cc4) input_focus_pane_vc_g6

0xef20,	// (0x00010ccc) input_focus_pane_vc_g7

0xef28,	// (0x00010cd4) input_focus_pane_vc_g8

0xef30,	// (0x00010cdc) input_focus_pane_vc_g9

0xe49b,	// (0x00010247) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x00011433) input_focus_pane_vc_g

0x1cc0,	// (0x00003a6c) data_form_pane_vc_ParamLimits

0x1cc0,	// (0x00003a6c) data_form_pane_vc

0x1ccc,	// (0x00003a78) form_field_data_pane_vc_g1

0x420e,	// (0x00005fba) form_field_data_pane_vc_t1_ParamLimits

0x420e,	// (0x00005fba) form_field_data_pane_vc_t1

0xee29,	// (0x00010bd5) input_focus_pane_vc_ParamLimits

0xee29,	// (0x00010bd5) input_focus_pane_vc

0x4228,	// (0x00005fd4) button_value_adjust_pane_cp3_vc

0x4230,	// (0x00005fdc) button_value_adjust_pane_cp5_vc

0x4238,	// (0x00005fe4) form_field_data_pane_vc_ParamLimits

0x4238,	// (0x00005fe4) form_field_data_pane_vc

0x4253,	// (0x00005fff) form_field_data_pane_vc_cp2

0x425b,	// (0x00006007) form_field_data_wide_pane_vc_ParamLimits

0x425b,	// (0x00006007) form_field_data_wide_pane_vc

0x4275,	// (0x00006021) form_field_data_wide_pane_vc_cp2

0x427d,	// (0x00006029) form_field_popup_pane_vc_ParamLimits

0x427d,	// (0x00006029) form_field_popup_pane_vc

0x4298,	// (0x00006044) form_field_popup_wide_pane_vc_ParamLimits

0x4298,	// (0x00006044) form_field_popup_wide_pane_vc

0x42b2,	// (0x0000605e) form_field_slider_pane_vc_ParamLimits

0x42b2,	// (0x0000605e) form_field_slider_pane_vc

0x42c5,	// (0x00006071) form_field_slider_wide_pane_vc_ParamLimits

0x42c5,	// (0x00006071) form_field_slider_wide_pane_vc

0xc221,	// (0x0000dfcd) grid_touch_1_pane_ParamLimits

0xc221,	// (0x0000dfcd) grid_touch_1_pane

0xc235,	// (0x0000dfe1) grid_touch_2_pane_ParamLimits

0xc235,	// (0x0000dfe1) grid_touch_2_pane

0x4395,	// (0x00006141) touch_pane_g1_ParamLimits

0x4395,	// (0x00006141) touch_pane_g1

0x42fe,	// (0x000060aa) cell_app_pane_cp_wide_ParamLimits

0x42fe,	// (0x000060aa) cell_app_pane_cp_wide

0x430f,	// (0x000060bb) grid_popup_fast_wide_pane_ParamLimits

0x430f,	// (0x000060bb) grid_popup_fast_wide_pane

0x4323,	// (0x000060cf) scroll_pane_cp19_ParamLimits

0x4323,	// (0x000060cf) scroll_pane_cp19

0xe614,	// (0x000103c0) bg_popup_window_pane_cp20

0x4337,	// (0x000060e3) listscroll_popup_fast_wide_pane

0xf0df,	// (0x00010e8b) grid_indicator_nsta_pane

0x433f,	// (0x000060eb) clock_nsta_pane_g1

0x4348,	// (0x000060f4) clock_nsta_pane_t1

0xc261,	// (0x0000e00d) cell_indicator_nsta_pane_ParamLimits

0xc261,	// (0x0000e00d) cell_indicator_nsta_pane

0x4395,	// (0x00006141) cell_indicator_nsta_pane_g1

0xc278,	// (0x0000e024) cell_indicator_nsta_pane_g2

0x0001,

0xfaa5,	// (0x00011851) cell_indicator_nsta_pane_g

0x43b0,	// (0x0000615c) clock_nsta_pane_cp

0x43b9,	// (0x00006165) indicator_nsta_pane_cp

0x43c1,	// (0x0000616d) nsta_clock_indic_pane_g1

0xe7ad,	// (0x00010559) grid_indicator_pane

0xf4f1,	// (0x0001129d) scroll_pane_cp29

0x0443,	// (0x000021ef) indicator_nsta_pane_cp2_ParamLimits

0x0443,	// (0x000021ef) indicator_nsta_pane_cp2

0xe6ce,	// (0x0001047a) main_apps_wheel_pane

0x1edc,	// (0x00003c88) form_midp_field_text_pane_ParamLimits

0x202b,	// (0x00003dd7) scroll_bar_cp050_ParamLimits

0x4411,	// (0x000061bd) cell_indicator_pane_ParamLimits

0x4411,	// (0x000061bd) cell_indicator_pane

0x4429,	// (0x000061d5) cell_indicator_pane_g1

0xc285,	// (0x0000e031) grid_wheel_folder_pane_ParamLimits

0xc285,	// (0x0000e031) grid_wheel_folder_pane

0xc293,	// (0x0000e03f) list_wheel_apps_pane_ParamLimits

0xc293,	// (0x0000e03f) list_wheel_apps_pane

0xc2a1,	// (0x0000e04d) main_apps_wheel_pane_g1_ParamLimits

0xc2a1,	// (0x0000e04d) main_apps_wheel_pane_g1

0xc2b1,	// (0x0000e05d) main_apps_wheel_pane_g2_ParamLimits

0xc2b1,	// (0x0000e05d) main_apps_wheel_pane_g2

0x0001,

0xfac1,	// (0x0001186d) main_apps_wheel_pane_g_ParamLimits

0xfac1,	// (0x0001186d) main_apps_wheel_pane_g

0xc2c1,	// (0x0000e06d) main_apps_wheel_pane_t1_ParamLimits

0xc2c1,	// (0x0000e06d) main_apps_wheel_pane_t1

0xc2d9,	// (0x0000e085) list_wheel_apps_pane_g1

0xc2e1,	// (0x0000e08d) list_wheel_apps_pane_g2

0xc2e9,	// (0x0000e095) list_wheel_apps_pane_g3

0xc2f1,	// (0x0000e09d) list_wheel_apps_pane_g4

0xc2f9,	// (0x0000e0a5) list_wheel_apps_pane_g5

0x0004,

0xfac6,	// (0x00011872) list_wheel_apps_pane_g

0x074c,	// (0x000024f8) navi_icon_text_pane

0xb729,	// (0x0000d4d5) aid_fill_nsta

0xc316,	// (0x0000e0c2) navi_icon_text_pane_g1

0xc322,	// (0x0000e0ce) navi_icon_text_pane_t1

0x05d7,	// (0x00002383) list_set_graphic_pane_t1_ParamLimits

0x05d7,	// (0x00002383) list_set_graphic_pane_t1

0x2790,	// (0x0000453c) popup_midp_note_alarm_window_t6_ParamLimits

0x2790,	// (0x0000453c) popup_midp_note_alarm_window_t6

0x27a2,	// (0x0000454e) popup_midp_note_alarm_window_t7_ParamLimits

0x27a2,	// (0x0000454e) popup_midp_note_alarm_window_t7

0x27b4,	// (0x00004560) popup_midp_note_alarm_window_t8_ParamLimits

0x27b4,	// (0x00004560) popup_midp_note_alarm_window_t8

0x27c6,	// (0x00004572) popup_midp_note_alarm_window_t9_ParamLimits

0x27c6,	// (0x00004572) popup_midp_note_alarm_window_t9

0x27d8,	// (0x00004584) popup_midp_note_alarm_window_t10_ParamLimits

0x27d8,	// (0x00004584) popup_midp_note_alarm_window_t10

0x27ea,	// (0x00004596) popup_midp_note_alarm_window_t11_ParamLimits

0x27ea,	// (0x00004596) popup_midp_note_alarm_window_t11

0x27fc,	// (0x000045a8) scroll_pane_cp17_ParamLimits

0x27fc,	// (0x000045a8) scroll_pane_cp17

0x28b2,	// (0x0000465e) volume_small_pane_cp_g1

0x451c,	// (0x000062c8) volume_small_pane_cp_g2

0x4525,	// (0x000062d1) volume_small_pane_cp_g3

0x452e,	// (0x000062da) volume_small_pane_cp_g4

0x4537,	// (0x000062e3) volume_small_pane_cp_g5

0x4540,	// (0x000062ec) volume_small_pane_cp_g6

0x4549,	// (0x000062f5) volume_small_pane_cp_g7

0x4552,	// (0x000062fe) volume_small_pane_cp_g8

0x455b,	// (0x00006307) volume_small_pane_cp_g9

0x4564,	// (0x00006310) volume_small_pane_cp_g10

0x09a2,	// (0x0000274e) midp_ticker_pane_g1_ParamLimits

0x09ae,	// (0x0000275a) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x000114ff) midp_ticker_pane_g_ParamLimits

0xad8d,	// (0x0000cb39) midp_ticker_pane_t1_ParamLimits

0xb74d,	// (0x0000d4f9) aid_fill_nsta_2

0x2017,	// (0x00003dc3) list_form2_midp_pane

0x3425,	// (0x000051d1) midp_editing_number_pane_ParamLimits

0x3434,	// (0x000051e0) midp_ticker_pane_ParamLimits

0x456d,	// (0x00006319) form2_midp_field_pane

0x4591,	// (0x0000633d) scroll_pane_cp51

0x45b1,	// (0x0000635d) form2_midp_button_pane_ParamLimits

0x45b1,	// (0x0000635d) form2_midp_button_pane

0x45c3,	// (0x0000636f) form2_midp_content_pane_ParamLimits

0x45c3,	// (0x0000636f) form2_midp_content_pane

0x45dd,	// (0x00006389) form2_midp_field_choice_group_pane

0x45e5,	// (0x00006391) form2_midp_field_pane_g1

0x45ed,	// (0x00006399) form2_midp_field_pane_g2

0x45f5,	// (0x000063a1) form2_midp_field_pane_g3

0x45fd,	// (0x000063a9) form2_midp_field_pane_g4

0x0003,

0xfaeb,	// (0x00011897) form2_midp_field_pane_g

0x4605,	// (0x000063b1) form2_midp_gauge_slider_pane

0x460d,	// (0x000063b9) form2_midp_gauge_wait_pane

0x4615,	// (0x000063c1) form2_midp_image_pane_ParamLimits

0x4615,	// (0x000063c1) form2_midp_image_pane

0x4630,	// (0x000063dc) form2_midp_label_pane_ParamLimits

0x4630,	// (0x000063dc) form2_midp_label_pane

0xc350,	// (0x0000e0fc) form2_midp_label_pane_cp_ParamLimits

0xc350,	// (0x0000e0fc) form2_midp_label_pane_cp

0x4670,	// (0x0000641c) form2_midp_string_pane_ParamLimits

0x4670,	// (0x0000641c) form2_midp_string_pane

0x4682,	// (0x0000642e) form2_midp_text_pane_ParamLimits

0x4682,	// (0x0000642e) form2_midp_text_pane

0x46a3,	// (0x0000644f) form2_midp_time_pane

0x46b3,	// (0x0000645f) input_focus_pane_cp51_ParamLimits

0x46b3,	// (0x0000645f) input_focus_pane_cp51

0x46cb,	// (0x00006477) form2_midp_label_pane_t1_ParamLimits

0x46cb,	// (0x00006477) form2_midp_label_pane_t1

0x4711,	// (0x000064bd) form2_mdip_text_pane_t1_ParamLimits

0x4711,	// (0x000064bd) form2_mdip_text_pane_t1

0x4730,	// (0x000064dc) form2_midp_time_pane_t1

0x474b,	// (0x000064f7) form2_midp_gauge_slider_pane_t1

0xc371,	// (0x0000e11d) form2_midp_gauge_slider_pane_t2

0xc383,	// (0x0000e12f) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf4,	// (0x000118a0) form2_midp_gauge_slider_pane_t

0x4781,	// (0x0000652d) form2_midp_slider_pane

0x478d,	// (0x00006539) form2_midp_gauge_wait_pane_t1

0x479b,	// (0x00006547) form2_midp_wait_pane_ParamLimits

0x479b,	// (0x00006547) form2_midp_wait_pane

0x1d13,	// (0x00003abf) list_single_2graphic_pane_cp4_ParamLimits

0x1d13,	// (0x00003abf) list_single_2graphic_pane_cp4

0xc395,	// (0x0000e141) list_single_midp_graphic_pane_cp_ParamLimits

0xc395,	// (0x0000e141) list_single_midp_graphic_pane_cp

0xe614,	// (0x000103c0) list_highlight_pane_cp20

0x47df,	// (0x0000658b) list_single_2graphic_pane_g1_cp4

0x39e8,	// (0x00005794) list_single_2graphic_pane_g2_cp4

0x47e7,	// (0x00006593) list_single_2graphic_pane_t1_cp4

0xe6ce,	// (0x0001047a) list_highlight_pane_cp21

0x47f6,	// (0x000065a2) list_single_midp_graphic_pane_g4_cp

0x4805,	// (0x000065b1) list_single_midp_graphic_pane_t1_cp

0xc3b6,	// (0x0000e162) form2_mdip_string_pane_t1_ParamLimits

0xc3b6,	// (0x0000e162) form2_mdip_string_pane_t1

0xe614,	// (0x000103c0) bg_wml_button_pane_cp2

0xe49b,	// (0x00010247) form2_midp_image_pane_g1

0xed56,	// (0x00010b02) list_double_large_graphic_pane_g5_ParamLimits

0xed56,	// (0x00010b02) list_double_large_graphic_pane_g5

0xace9,	// (0x0000ca95) midp_form_pane_ParamLimits

0xe6ce,	// (0x0001047a) main_apps_wheel_pane_ParamLimits

0xb443,	// (0x0000d1ef) popup_preview_window_ParamLimits

0xb443,	// (0x0000d1ef) popup_preview_window

0x1428,	// (0x000031d4) popup_touch_info_window_ParamLimits

0x1428,	// (0x000031d4) popup_touch_info_window

0x144a,	// (0x000031f6) popup_touch_menu_window_ParamLimits

0x144a,	// (0x000031f6) popup_touch_menu_window

0xe491,	// (0x0001023d) bg_popup_sub_pane_cp6

0x48b6,	// (0x00006662) list_touch_menu_pane

0x48be,	// (0x0000666a) list_single_touch_menu_pane_ParamLimits

0x48be,	// (0x0000666a) list_single_touch_menu_pane

0x48d6,	// (0x00006682) list_single_touch_menu_pane_t1

0xe6ce,	// (0x0001047a) bg_popup_sub_pane_cp7_ParamLimits

0xe6ce,	// (0x0001047a) bg_popup_sub_pane_cp7

0x48e4,	// (0x00006690) heading_sub_pane

0x48ec,	// (0x00006698) list_touch_info_pane_ParamLimits

0x48ec,	// (0x00006698) list_touch_info_pane

0x48fb,	// (0x000066a7) list_single_touch_info_pane_ParamLimits

0x48fb,	// (0x000066a7) list_single_touch_info_pane

0x490d,	// (0x000066b9) list_single_touch_info_pane_t1

0x491b,	// (0x000066c7) list_single_touch_info_pane_t2

0x0001,

0xfb02,	// (0x000118ae) list_single_touch_info_pane_t

0x08c4,	// (0x00002670) bg_popup_heading_pane_cp

0x4929,	// (0x000066d5) heading_sub_pane_t1

0x1bcc,	// (0x00003978) bg_popup_preview_window_pane_cp_ParamLimits

0x1bcc,	// (0x00003978) bg_popup_preview_window_pane_cp

0x48e4,	// (0x00006690) heading_preview_pane

0x48ec,	// (0x00006698) list_preview_pane_ParamLimits

0x48ec,	// (0x00006698) list_preview_pane

0x4937,	// (0x000066e3) popup_preview_window_g1

0x48fb,	// (0x000066a7) list_single_preview_pane_ParamLimits

0x48fb,	// (0x000066a7) list_single_preview_pane

0x493f,	// (0x000066eb) list_single_preview_pane_g1

0x4947,	// (0x000066f3) list_single_preview_pane_t1

0x490d,	// (0x000066b9) list_single_preview_pane_t2

0x0001,

0xfb07,	// (0x000118b3) list_single_preview_pane_t

0x4955,	// (0x00006701) bg_popup_heading_pane_cp2_ParamLimits

0x4955,	// (0x00006701) bg_popup_heading_pane_cp2

0x496b,	// (0x00006717) heading_preview_pane_g1

0x4973,	// (0x0000671f) heading_preview_pane_t1_ParamLimits

0x4973,	// (0x0000671f) heading_preview_pane_t1

0xe7c4,	// (0x00010570) soft_indicator_pane_t1_ParamLimits

0xed22,	// (0x00010ace) scroll_pane_ParamLimits

0xf3ed,	// (0x00011199) scroll_sc2_left_pane

0xf3f6,	// (0x000111a2) scroll_sc2_right_pane

0xf415,	// (0x000111c1) scroll_bg_pane_g1_ParamLimits

0xf42a,	// (0x000111d6) scroll_bg_pane_g2_ParamLimits

0xf442,	// (0x000111ee) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0001148a) scroll_bg_pane_g_ParamLimits

0xf415,	// (0x000111c1) scroll_handle_pane_g1_ParamLimits

0xf464,	// (0x00011210) scroll_handle_pane_g2_ParamLimits

0xf442,	// (0x000111ee) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x00011491) scroll_handle_pane_g_ParamLimits

0x0e88,	// (0x00002c34) popup_choice_list_window_ParamLimits

0x0e88,	// (0x00002c34) popup_choice_list_window

0x1935,	// (0x000036e1) choice_list_pane

0x19fd,	// (0x000037a9) cell_toolbar_pane_t1

0x1a25,	// (0x000037d1) toolbar_button_pane_ParamLimits

0x2e32,	// (0x00004bde) ai_gene_pane_1_t2_ParamLimits

0x2e32,	// (0x00004bde) ai_gene_pane_1_t2

0x0001,

0xf901,	// (0x000116ad) ai_gene_pane_1_t_ParamLimits

0xf901,	// (0x000116ad) ai_gene_pane_1_t

0x4990,	// (0x0000673c) scroll_sc2_left_pane_g1

0x4990,	// (0x0000673c) scroll_sc2_right_pane_g1

0x0e22,	// (0x00002bce) bg_popup_sub_pane_cp10

0x499a,	// (0x00006746) list_choice_list_pane

0x34e4,	// (0x00005290) list_single_choice_list_pane_ParamLimits

0x34e4,	// (0x00005290) list_single_choice_list_pane

0x49b3,	// (0x0000675f) list_single_choice_list_pane_g1

0xf015,	// (0x00010dc1) list_single_choice_list_pane_t1_ParamLimits

0xf015,	// (0x00010dc1) list_single_choice_list_pane_t1

0x49bb,	// (0x00006767) choice_list_pane_g1

0x49c3,	// (0x0000676f) choice_list_pane_t1

0xe491,	// (0x0001023d) input_focus_pane_cp11

0xf1f1,	// (0x00010f9d) title_pane_stacon_g2_ParamLimits

0xf1f1,	// (0x00010f9d) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x00011470) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00011470) title_pane_stacon_g

0x08c4,	// (0x00002670) cursor_press_pane

0xb0c0,	// (0x0000ce6c) popup_fep_hwr_window_ParamLimits

0xb0c0,	// (0x0000ce6c) popup_fep_hwr_window

0x0fcc,	// (0x00002d78) popup_fep_vkb_window_ParamLimits

0x0fcc,	// (0x00002d78) popup_fep_vkb_window

0x49d1,	// (0x0000677d) cursor_press_pane_g1

0x0002,

0xfb30,	// (0x000118dc) fep_vkb_side_pane_g_ParamLimits

0x4a12,	// (0x000067be) fep_hwr_candidate_pane_ParamLimits

0x4a12,	// (0x000067be) fep_hwr_candidate_pane

0x4a3c,	// (0x000067e8) fep_hwr_side_pane_ParamLimits

0x4a3c,	// (0x000067e8) fep_hwr_side_pane

0x4a5e,	// (0x0000680a) fep_hwr_top_pane_ParamLimits

0x4a5e,	// (0x0000680a) fep_hwr_top_pane

0x4a76,	// (0x00006822) fep_hwr_write_pane_ParamLimits

0x4a76,	// (0x00006822) fep_hwr_write_pane

0xfb30,	// (0x000118dc) fep_vkb_side_pane_g

0x4ab0,	// (0x0000685c) fep_hwr_top_pane_g1

0x4ac2,	// (0x0000686e) fep_hwr_top_pane_g2

0x4ad4,	// (0x00006880) fep_hwr_top_pane_g3

0x0002,

0xfb0c,	// (0x000118b8) fep_hwr_top_pane_g

0x4ae9,	// (0x00006895) fep_hwr_top_text_pane

0x0010,	// (0x00001dbc) fep_hwr_top_text_pane_g1

0x4bc5,	// (0x00006971) fep_hwr_top_text_pane_t1

0x4c25,	// (0x000069d1) fep_hwr_candidate_pane_g1

0x4e96,	// (0x00006c42) fep_vkb_keypad_pane_g3_ParamLimits

0x4e96,	// (0x00006c42) fep_vkb_keypad_pane_g3

0x4ec2,	// (0x00006c6e) fep_vkb_keypad_pane_g4_ParamLimits

0x4ec2,	// (0x00006c6e) fep_vkb_keypad_pane_g4

0x4f39,	// (0x00006ce5) fep_vkb_bottom_pane_g2_ParamLimits

0x4f39,	// (0x00006ce5) fep_vkb_bottom_pane_g2

0x0001,

0xfb37,	// (0x000118e3) fep_vkb_bottom_pane_g_ParamLimits

0xfb37,	// (0x000118e3) fep_vkb_bottom_pane_g

0x4990,	// (0x0000673c) cell_vkb_side_pane_g2

0x0001,

0xfb41,	// (0x000118ed) cell_vkb_side_pane_g

0x4fc4,	// (0x00006d70) cell_vkb_side_pane_t1

0x4fd2,	// (0x00006d7e) cell_vkb_side_pane_t1_copy1

0x4990,	// (0x0000673c) bg_fep_vkb_candidate_pane_g2

0x5116,	// (0x00006ec2) cell_vkb_candidate_pane_ParamLimits

0x4c59,	// (0x00006a05) aid_size_cell_vkb_ParamLimits

0x4c59,	// (0x00006a05) aid_size_cell_vkb

0x5116,	// (0x00006ec2) cell_vkb_candidate_pane

0x5150,	// (0x00006efc) bg_popup_fep_shadow_pane_g1

0xc49f,	// (0x0000e24b) fep_vkb_bottom_pane_ParamLimits

0xc49f,	// (0x0000e24b) fep_vkb_bottom_pane

0x4d28,	// (0x00006ad4) fep_vkb_candidate_pane_ParamLimits

0x4d28,	// (0x00006ad4) fep_vkb_candidate_pane

0xc4cb,	// (0x0000e277) fep_vkb_keypad_pane_ParamLimits

0xc4cb,	// (0x0000e277) fep_vkb_keypad_pane

0xc4f2,	// (0x0000e29e) fep_vkb_side_pane_ParamLimits

0xc4f2,	// (0x0000e29e) fep_vkb_side_pane

0xc52e,	// (0x0000e2da) fep_vkb_top_pane_ParamLimits

0xc52e,	// (0x0000e2da) fep_vkb_top_pane

0x4def,	// (0x00006b9b) fep_vkb_top_pane_g1_ParamLimits

0x4def,	// (0x00006b9b) fep_vkb_top_pane_g1

0x4dfe,	// (0x00006baa) fep_vkb_top_pane_g2_ParamLimits

0x4dfe,	// (0x00006baa) fep_vkb_top_pane_g2

0x4e0d,	// (0x00006bb9) fep_vkb_top_pane_g3_ParamLimits

0x4e0d,	// (0x00006bb9) fep_vkb_top_pane_g3

0x0003,

0xfb27,	// (0x000118d3) fep_vkb_top_pane_g_ParamLimits

0xfb27,	// (0x000118d3) fep_vkb_top_pane_g

0x4e2b,	// (0x00006bd7) fep_vkb_top_text_pane_ParamLimits

0x4e2b,	// (0x00006bd7) fep_vkb_top_text_pane

0xc56a,	// (0x0000e316) fep_vkb_side_pane_g1_ParamLimits

0xc56a,	// (0x0000e316) fep_vkb_side_pane_g1

0x4e85,	// (0x00006c31) grid_vkb_side_pane_ParamLimits

0x4e85,	// (0x00006c31) grid_vkb_side_pane

0x5158,	// (0x00006f04) bg_popup_fep_shadow_pane_g2

0x5161,	// (0x00006f0d) bg_popup_fep_shadow_pane_g3

0x5169,	// (0x00006f15) bg_popup_fep_shadow_pane_g4

0x5172,	// (0x00006f1e) bg_popup_fep_shadow_pane_g5

0x517c,	// (0x00006f28) bg_popup_fep_shadow_pane_g6

0x5184,	// (0x00006f30) bg_popup_fep_shadow_pane_g7

0xef10,	// (0x00010cbc) bg_popup_fep_shadow_pane_g8

0x4ee4,	// (0x00006c90) grid_vkb_keypad_number_pane_ParamLimits

0x4ee4,	// (0x00006c90) grid_vkb_keypad_number_pane

0x4ef8,	// (0x00006ca4) grid_vkb_keypad_pane_ParamLimits

0x4ef8,	// (0x00006ca4) grid_vkb_keypad_pane

0x4f1e,	// (0x00006cca) fep_vkb_bottom_pane_g1_ParamLimits

0x4f1e,	// (0x00006cca) fep_vkb_bottom_pane_g1

0x4f47,	// (0x00006cf3) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4f47,	// (0x00006cf3) grid_vkb_keypad_bottom_left_pane

0x4f5c,	// (0x00006d08) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4f5c,	// (0x00006d08) grid_vkb_keypad_bottom_right_pane

0x4f71,	// (0x00006d1d) fep_vkb_top_text_pane_g1

0xc5b1,	// (0x0000e35d) fep_vkb_top_text_pane_t1

0xc5c3,	// (0x0000e36f) cell_vkb_side_pane_ParamLimits

0xc5c3,	// (0x0000e36f) cell_vkb_side_pane

0x4990,	// (0x0000673c) cell_vkb_side_pane_g1

0x4fe0,	// (0x00006d8c) cell_vkb_keypad_pane_ParamLimits

0x4fe0,	// (0x00006d8c) cell_vkb_keypad_pane

0x506d,	// (0x00006e19) cell_vkb_keypad_pane_g1

0x0008,

0xfb54,	// (0x00011900) bg_popup_fep_shadow_pane_g

0x4990,	// (0x0000673c) cell_hwr_side_pane_g1

0x4990,	// (0x0000673c) cell_hwr_side_pane_g2

0x5077,	// (0x00006e23) cell_vkb_keypad_pane_t1

0xc5d9,	// (0x0000e385) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc5d9,	// (0x0000e385) cell_vkb_keypad_bottom_left_pane

0xc5ee,	// (0x0000e39a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc5ee,	// (0x0000e39a) cell_vkb_keypad_bottom_right_pane

0x4990,	// (0x0000673c) cell_vkb_keypad_bottom_left_pane_g1

0x4990,	// (0x0000673c) cell_vkb_keypad_bottom_right_pane_g1

0x50db,	// (0x00006e87) cell_vkb_keypad_number_pane_ParamLimits

0x50db,	// (0x00006e87) cell_vkb_keypad_number_pane

0x50fa,	// (0x00006ea6) cell_vkb_keypad_number_pane_g1

0x5104,	// (0x00006eb0) cell_vkb_keypad_number_pane_g2

0x510d,	// (0x00006eb9) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb46,	// (0x000118f2) cell_vkb_keypad_number_pane_g

0x5077,	// (0x00006e23) cell_vkb_keypad_number_pane_t1

0x5137,	// (0x00006ee3) fep_vkb_candidate_pane_g1

0x0001,

0xfb41,	// (0x000118ed) cell_hwr_side_pane_g

0x5196,	// (0x00006f42) cell_hwr_side_pane_t1

0x51a4,	// (0x00006f50) cell_hwr_side_pane_t1_copy1

0x4e1d,	// (0x00006bc9) cell_hwr_candidate_pane_g1

0x51f4,	// (0x00006fa0) cell_hwr_candidate_pane_t1

0x4990,	// (0x0000673c) cell_vkb_candidate_pane_g2

0x5248,	// (0x00006ff4) cell_vkb_candidate_pane_t1

0x49d9,	// (0x00006785) bg_popup_fep_shadow_pane_ParamLimits

0x49d9,	// (0x00006785) bg_popup_fep_shadow_pane

0x4a90,	// (0x0000683c) bg_fep_hwr_top_pane_g4

0x4afe,	// (0x000068aa) bg_hwr_side_pane_g1_ParamLimits

0x4afe,	// (0x000068aa) bg_hwr_side_pane_g1

0xc458,	// (0x0000e204) cell_hwr_side_pane_ParamLimits

0xc458,	// (0x0000e204) cell_hwr_side_pane

0x4b70,	// (0x0000691c) fep_hwr_write_pane_g1_ParamLimits

0x4b70,	// (0x0000691c) fep_hwr_write_pane_g1

0x4b7d,	// (0x00006929) fep_hwr_write_pane_g2_ParamLimits

0x4b7d,	// (0x00006929) fep_hwr_write_pane_g2

0x4b8a,	// (0x00006936) fep_hwr_write_pane_g3_ParamLimits

0x4b8a,	// (0x00006936) fep_hwr_write_pane_g3

0xc478,	// (0x0000e224) fep_hwr_write_pane_g4_ParamLimits

0xc478,	// (0x0000e224) fep_hwr_write_pane_g4

0x0005,

0xfb13,	// (0x000118bf) fep_hwr_write_pane_g_ParamLimits

0xfb13,	// (0x000118bf) fep_hwr_write_pane_g

0x4a90,	// (0x0000683c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x4a90,	// (0x0000683c) bg_fep_hwr_candidate_pane_g2

0x4bd3,	// (0x0000697f) cell_hwr_candidate_pane_ParamLimits

0x4bd3,	// (0x0000697f) cell_hwr_candidate_pane

0x4c25,	// (0x000069d1) fep_hwr_candidate_pane_g1_ParamLimits

0x4c87,	// (0x00006a33) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4c87,	// (0x00006a33) bg_popup_fep_shadow_pane_cp2

0x4e1d,	// (0x00006bc9) fep_vkb_top_pane_g4_ParamLimits

0x4e1d,	// (0x00006bc9) fep_vkb_top_pane_g4

0x4e63,	// (0x00006c0f) fep_vkb_side_pane_g2_ParamLimits

0x4e63,	// (0x00006c0f) fep_vkb_side_pane_g2

0xa774,	// (0x0000c520) list_setting_pane_t4_ParamLimits

0xa774,	// (0x0000c520) list_setting_pane_t4

0xa7f0,	// (0x0000c59c) list_setting_number_pane_t5_ParamLimits

0xa7f0,	// (0x0000c59c) list_setting_number_pane_t5

0x0066,	// (0x00001e12) list_double_heading_pane_cp2_ParamLimits

0x0066,	// (0x00001e12) list_double_heading_pane_cp2

0x5256,	// (0x00007002) list_double_heading_pane_g1_cp2_ParamLimits

0x5256,	// (0x00007002) list_double_heading_pane_g1_cp2

0x5262,	// (0x0000700e) list_double_heading_pane_g2_cp2_ParamLimits

0x5262,	// (0x0000700e) list_double_heading_pane_g2_cp2

0x5276,	// (0x00007022) list_double_heading_pane_t1_cp2_ParamLimits

0x5276,	// (0x00007022) list_double_heading_pane_t1_cp2

0x528c,	// (0x00007038) list_double_heading_pane_t2_cp2_ParamLimits

0x528c,	// (0x00007038) list_double_heading_pane_t2_cp2

0xe489,	// (0x00010235) aid_value_unit2

0xe668,	// (0x00010414) popup_preview_fixed_window

0xe8a4,	// (0x00010650) bg_popup_preview_window_pane_cp02

0x529e,	// (0x0000704a) list_preview_fixed_pane

0x52e4,	// (0x00007090) list_empty_pane_fp_ParamLimits

0x52e4,	// (0x00007090) list_empty_pane_fp

0x52e4,	// (0x00007090) list_single_cale_day_pane_fp_ParamLimits

0x52e4,	// (0x00007090) list_single_cale_day_pane_fp

0x52e4,	// (0x00007090) list_single_graphic_heading_pane_fp_ParamLimits

0x52e4,	// (0x00007090) list_single_graphic_heading_pane_fp

0x52e4,	// (0x00007090) list_single_graphic_pane_fp_ParamLimits

0x52e4,	// (0x00007090) list_single_graphic_pane_fp

0x52e4,	// (0x00007090) list_single_heading_pane_fp_ParamLimits

0x52e4,	// (0x00007090) list_single_heading_pane_fp

0x52e4,	// (0x00007090) list_single_pane_fp_ParamLimits

0x52e4,	// (0x00007090) list_single_pane_fp

0x52fd,	// (0x000070a9) list_single_pane_fp_g1_ParamLimits

0x52fd,	// (0x000070a9) list_single_pane_fp_g1

0x5256,	// (0x00007002) list_single_pane_fp_g2_ParamLimits

0x5256,	// (0x00007002) list_single_pane_fp_g2

0x5262,	// (0x0000700e) list_single_pane_fp_g3_ParamLimits

0x5262,	// (0x0000700e) list_single_pane_fp_g3

0x5309,	// (0x000070b5) list_single_pane_fp_g4_ParamLimits

0x5309,	// (0x000070b5) list_single_pane_fp_g4

0x0003,

0xfb75,	// (0x00011921) list_single_pane_fp_g_ParamLimits

0xfb75,	// (0x00011921) list_single_pane_fp_g

0x5315,	// (0x000070c1) list_single_pane_fp_t1_ParamLimits

0x5315,	// (0x000070c1) list_single_pane_fp_t1

0x532c,	// (0x000070d8) list_single_graphic_pane_fp_g1_ParamLimits

0x532c,	// (0x000070d8) list_single_graphic_pane_fp_g1

0x52fd,	// (0x000070a9) list_single_graphic_pane_fp_g2_ParamLimits

0x52fd,	// (0x000070a9) list_single_graphic_pane_fp_g2

0x5256,	// (0x00007002) list_single_graphic_pane_fp_g3_ParamLimits

0x5256,	// (0x00007002) list_single_graphic_pane_fp_g3

0x5262,	// (0x0000700e) list_single_graphic_pane_fp_g4_ParamLimits

0x5262,	// (0x0000700e) list_single_graphic_pane_fp_g4

0x5309,	// (0x000070b5) list_single_graphic_pane_fp_g5_ParamLimits

0x5309,	// (0x000070b5) list_single_graphic_pane_fp_g5

0x0004,

0xfb7e,	// (0x0001192a) list_single_graphic_pane_fp_g_ParamLimits

0xfb7e,	// (0x0001192a) list_single_graphic_pane_fp_g

0x5338,	// (0x000070e4) list_single_graphic_pane_fp_t1_ParamLimits

0x5338,	// (0x000070e4) list_single_graphic_pane_fp_t1

0x532c,	// (0x000070d8) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x532c,	// (0x000070d8) list_single_graphic_heading_pane_fp_g1

0x52fd,	// (0x000070a9) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x52fd,	// (0x000070a9) list_single_graphic_heading_pane_fp_g2

0x5256,	// (0x00007002) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5256,	// (0x00007002) list_single_graphic_heading_pane_fp_g3

0x5262,	// (0x0000700e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5262,	// (0x0000700e) list_single_graphic_heading_pane_fp_g4

0x5309,	// (0x000070b5) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5309,	// (0x000070b5) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x0001192a) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0001192a) list_single_graphic_heading_pane_fp_g

0x534e,	// (0x000070fa) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x534e,	// (0x000070fa) list_single_graphic_heading_pane_fp_t1

0x5364,	// (0x00007110) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5364,	// (0x00007110) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb89,	// (0x00011935) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb89,	// (0x00011935) list_single_graphic_heading_pane_fp_t

0x5376,	// (0x00007122) list_single_cale_day_pane_fp_g1_ParamLimits

0x5376,	// (0x00007122) list_single_cale_day_pane_fp_g1

0x53ae,	// (0x0000715a) list_single_cale_day_pane_fp_g2_ParamLimits

0x53ae,	// (0x0000715a) list_single_cale_day_pane_fp_g2

0x53ba,	// (0x00007166) list_single_cale_day_pane_fp_g3_ParamLimits

0x53ba,	// (0x00007166) list_single_cale_day_pane_fp_g3

0x53e2,	// (0x0000718e) list_single_cale_day_pane_fp_g4_ParamLimits

0x53e2,	// (0x0000718e) list_single_cale_day_pane_fp_g4

0x5406,	// (0x000071b2) list_single_cale_day_pane_fp_g5_ParamLimits

0x5406,	// (0x000071b2) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8e,	// (0x0001193a) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8e,	// (0x0001193a) list_single_cale_day_pane_fp_g

0x542a,	// (0x000071d6) list_single_cale_day_pane_fp_t1_ParamLimits

0x542a,	// (0x000071d6) list_single_cale_day_pane_fp_t1

0x5450,	// (0x000071fc) list_single_cale_day_pane_fp_t2_ParamLimits

0x5450,	// (0x000071fc) list_single_cale_day_pane_fp_t2

0x5469,	// (0x00007215) list_single_cale_day_pane_fp_t3_ParamLimits

0x5469,	// (0x00007215) list_single_cale_day_pane_fp_t3

0x0002,

0xfb99,	// (0x00011945) list_single_cale_day_pane_fp_t_ParamLimits

0xfb99,	// (0x00011945) list_single_cale_day_pane_fp_t

0x52fd,	// (0x000070a9) list_empty_pane_fp_g1_ParamLimits

0x52fd,	// (0x000070a9) list_empty_pane_fp_g1

0x5482,	// (0x0000722e) list_empty_pane_fp_t1

0x5490,	// (0x0000723c) list_empty_pane_fp_t2

0x0001,

0xfba0,	// (0x0001194c) list_empty_pane_fp_t

0x52fd,	// (0x000070a9) list_single_heading_pane_fp_g1_ParamLimits

0x52fd,	// (0x000070a9) list_single_heading_pane_fp_g1

0x5256,	// (0x00007002) list_single_heading_pane_fp_g2_ParamLimits

0x5256,	// (0x00007002) list_single_heading_pane_fp_g2

0x5262,	// (0x0000700e) list_single_heading_pane_fp_g3_ParamLimits

0x5262,	// (0x0000700e) list_single_heading_pane_fp_g3

0x0002,

0xfba5,	// (0x00011951) list_single_heading_pane_fp_g_ParamLimits

0xfba5,	// (0x00011951) list_single_heading_pane_fp_g

0x549e,	// (0x0000724a) list_single_heading_pane_fp_t1_ParamLimits

0x549e,	// (0x0000724a) list_single_heading_pane_fp_t1

0x54b0,	// (0x0000725c) list_single_heading_pane_fp_t2_ParamLimits

0x54b0,	// (0x0000725c) list_single_heading_pane_fp_t2

0x0001,

0xfbac,	// (0x00011958) list_single_heading_pane_fp_t_ParamLimits

0xfbac,	// (0x00011958) list_single_heading_pane_fp_t

0xf02a,	// (0x00010dd6) aid_size_cell_fast

0xe887,	// (0x00010633) soft_indicator_pane_cp1_t1

0xf067,	// (0x00010e13) cell_app_pane_cp2_ParamLimits

0xf067,	// (0x00010e13) cell_app_pane_cp2

0x49fb,	// (0x000067a7) fep_hwr_candidate_drop_down_list_pane

0x4c3f,	// (0x000069eb) fep_hwr_candidate_pane_g3_ParamLimits

0x4c3f,	// (0x000069eb) fep_hwr_candidate_pane_g3

0x4c4c,	// (0x000069f8) fep_hwr_candidate_pane_g4_ParamLimits

0x4c4c,	// (0x000069f8) fep_hwr_candidate_pane_g4

0x0002,

0xfb20,	// (0x000118cc) fep_hwr_candidate_pane_g_ParamLimits

0xfb20,	// (0x000118cc) fep_hwr_candidate_pane_g

0x4d17,	// (0x00006ac3) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4d17,	// (0x00006ac3) fep_vkb_candidate_drop_down_list_pane

0x513f,	// (0x00006eeb) fep_vkb_candidate_pane_g3

0x5147,	// (0x00006ef3) fep_vkb_candidate_pane_g4

0x0002,

0xfb4d,	// (0x000118f9) fep_vkb_candidate_pane_g

0x4e1d,	// (0x00006bc9) cell_hwr_candidate_pane_g1_ParamLimits

0x51b2,	// (0x00006f5e) cell_hwr_candidate_pane_g3_ParamLimits

0x51b2,	// (0x00006f5e) cell_hwr_candidate_pane_g3

0x51d3,	// (0x00006f7f) cell_hwr_candidate_pane_g4_ParamLimits

0x51d3,	// (0x00006f7f) cell_hwr_candidate_pane_g4

0x0002,

0xfb67,	// (0x00011913) cell_hwr_candidate_pane_g_ParamLimits

0xfb67,	// (0x00011913) cell_hwr_candidate_pane_g

0x5212,	// (0x00006fbe) cell_vkb_candidate_pane_g3_ParamLimits

0x5212,	// (0x00006fbe) cell_vkb_candidate_pane_g3

0x522d,	// (0x00006fd9) cell_vkb_candidate_pane_g4_ParamLimits

0x522d,	// (0x00006fd9) cell_vkb_candidate_pane_g4

0x54c6,	// (0x00007272) cell_app_pane_cp2_g1_ParamLimits

0x54c6,	// (0x00007272) cell_app_pane_cp2_g1

0x54e4,	// (0x00007290) cell_app_pane_cp2_g2_ParamLimits

0x54e4,	// (0x00007290) cell_app_pane_cp2_g2

0x0001,

0xfbb1,	// (0x0001195d) cell_app_pane_cp2_g_ParamLimits

0xfbb1,	// (0x0001195d) cell_app_pane_cp2_g

0x54f0,	// (0x0000729c) cell_app_pane_cp2_t1_ParamLimits

0x54f0,	// (0x0000729c) cell_app_pane_cp2_t1

0xee29,	// (0x00010bd5) grid_highlight_pane_cp1_ParamLimits

0xee29,	// (0x00010bd5) grid_highlight_pane_cp1

0x5502,	// (0x000072ae) cell_hwr_candidate_pane_cp1_ParamLimits

0x5502,	// (0x000072ae) cell_hwr_candidate_pane_cp1

0x4e1d,	// (0x00006bc9) fep_hwr_candidate_drop_down_list_pane_g1

0x5526,	// (0x000072d2) fep_hwr_candidate_drop_down_list_pane_g2

0x5533,	// (0x000072df) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x00011962) fep_hwr_candidate_drop_down_list_pane_g

0x5540,	// (0x000072ec) fep_hwr_candidate_drop_down_list_scroll_pane

0x5549,	// (0x000072f5) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5549,	// (0x000072f5) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5556,	// (0x00007302) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5556,	// (0x00007302) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5563,	// (0x0000730f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5563,	// (0x0000730f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5212,	// (0x00006fbe) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5212,	// (0x00006fbe) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x522d,	// (0x00006fd9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x522d,	// (0x00006fd9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5570,	// (0x0000731c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5570,	// (0x0000731c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x558b,	// (0x00007337) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x558b,	// (0x00007337) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x55a6,	// (0x00007352) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x55a6,	// (0x00007352) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbd,	// (0x00011969) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbd,	// (0x00011969) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x55c1,	// (0x0000736d) cell_vkb_candidate_pane_cp1_ParamLimits

0x55c1,	// (0x0000736d) cell_vkb_candidate_pane_cp1

0x4e1d,	// (0x00006bc9) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4e1d,	// (0x00006bc9) fep_vkb_candidate_drop_down_list_pane_g1

0x5526,	// (0x000072d2) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5526,	// (0x000072d2) fep_vkb_candidate_drop_down_list_pane_g2

0x5533,	// (0x000072df) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5533,	// (0x000072df) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x00011962) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb6,	// (0x00011962) fep_vkb_candidate_drop_down_list_pane_g

0x55e7,	// (0x00007393) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x55e7,	// (0x00007393) fep_vkb_candidate_drop_down_list_scroll_pane

0x55f4,	// (0x000073a0) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x55f4,	// (0x000073a0) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5601,	// (0x000073ad) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5601,	// (0x000073ad) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x560d,	// (0x000073b9) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x560d,	// (0x000073b9) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x51b2,	// (0x00006f5e) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x51b2,	// (0x00006f5e) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x51d3,	// (0x00006f7f) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x51d3,	// (0x00006f7f) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5619,	// (0x000073c5) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5619,	// (0x000073c5) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x563a,	// (0x000073e6) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x563a,	// (0x000073e6) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x565b,	// (0x00007407) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x565b,	// (0x00007407) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbce,	// (0x0001197a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbce,	// (0x0001197a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa062,	// (0x0000be0e) title_pane_g1_ParamLimits

0xa075,	// (0x0000be21) title_pane_g2_ParamLimits

0xf54e,	// (0x000112fa) title_pane_g_ParamLimits

0x0000,	// (0x00001dac) aid_call2_pane

0x0008,	// (0x00001db4) aid_call_pane

0x0010,	// (0x00001dbc) popup_clock_analogue_window_g1

0x0010,	// (0x00001dbc) popup_clock_analogue_window_g2

0x0018,	// (0x00001dc4) popup_clock_analogue_window_g3

0x0021,	// (0x00001dcd) popup_clock_analogue_window_g4

0xe49b,	// (0x00010247) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0001149f) popup_clock_analogue_window_g

0x0029,	// (0x00001dd5) popup_clock_analogue_window_t1

0x00b9,	// (0x00001e65) clock_digital_number_pane_ParamLimits

0x00b9,	// (0x00001e65) clock_digital_number_pane

0x00c5,	// (0x00001e71) clock_digital_number_pane_cp02_ParamLimits

0x00c5,	// (0x00001e71) clock_digital_number_pane_cp02

0x00d1,	// (0x00001e7d) clock_digital_number_pane_cp03_ParamLimits

0x00d1,	// (0x00001e7d) clock_digital_number_pane_cp03

0x00dd,	// (0x00001e89) clock_digital_number_pane_cp04_ParamLimits

0x00dd,	// (0x00001e89) clock_digital_number_pane_cp04

0x00e9,	// (0x00001e95) clock_digital_separator_pane_ParamLimits

0x00e9,	// (0x00001e95) clock_digital_separator_pane

0x00f5,	// (0x00001ea1) popup_clock_digital_window_t1_ParamLimits

0x00f5,	// (0x00001ea1) popup_clock_digital_window_t1

0xe49b,	// (0x00010247) clock_digital_number_pane_g1

0xe49b,	// (0x00010247) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x000114aa) clock_digital_number_pane_g

0xe49b,	// (0x00010247) clock_digital_separator_pane_g1

0xe49b,	// (0x00010247) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x000114aa) clock_digital_separator_pane_g

0xb729,	// (0x0000d4d5) aid_fill_nsta_ParamLimits

0xb861,	// (0x0000d60d) indicator_nsta_pane_ParamLimits

0x176e,	// (0x0000351a) popup_clock_analogue_window

0x176e,	// (0x0000351a) popup_clock_digital_window

0xf0df,	// (0x00010e8b) grid_indicator_nsta_pane_ParamLimits

0x4356,	// (0x00006102) clock_nsta_pane_t2

0x0001,

0xfaa0,	// (0x0001184c) clock_nsta_pane_t

0xf39b,	// (0x00011147) aid_size_max_handle

0xaae9,	// (0x0000c895) aid_size_min_handle

0x08c4,	// (0x00002670) editor_scroll_pane

0x5676,	// (0x00007422) ex_editor_pane

0xeff0,	// (0x00010d9c) scroll_pane_cp13

0xed4e,	// (0x00010afa) scroll_pane_cp14

0x005e,	// (0x00001e0a) scroll_pane_cp36

0xab76,	// (0x0000c922) list_single_graphic_hl_pane_cp2_ParamLimits

0xab76,	// (0x0000c922) list_single_graphic_hl_pane_cp2

0xc0d5,	// (0x0000de81) list_single_graphic_hl_pane_ParamLimits

0xc0d5,	// (0x0000de81) list_single_graphic_hl_pane

0x567e,	// (0x0000742a) aid_size_min_hl_cp1

0x5687,	// (0x00007433) list_highlight_pane_cp34_ParamLimits

0x5687,	// (0x00007433) list_highlight_pane_cp34

0x5698,	// (0x00007444) list_single_graphic_hl_pane_g1_ParamLimits

0x5698,	// (0x00007444) list_single_graphic_hl_pane_g1

0xc609,	// (0x0000e3b5) list_single_graphic_hl_pane_g2_ParamLimits

0xc609,	// (0x0000e3b5) list_single_graphic_hl_pane_g2

0xc609,	// (0x0000e3b5) list_single_graphic_hl_pane_g3_ParamLimits

0xc609,	// (0x0000e3b5) list_single_graphic_hl_pane_g3

0x570b,	// (0x000074b7) list_single_graphic_hl_pane_g4_ParamLimits

0x570b,	// (0x000074b7) list_single_graphic_hl_pane_g4

0x5717,	// (0x000074c3) list_single_graphic_hl_pane_g5_ParamLimits

0x5717,	// (0x000074c3) list_single_graphic_hl_pane_g5

0x0004,

0xfbdf,	// (0x0001198b) list_single_graphic_hl_pane_g_ParamLimits

0xfbdf,	// (0x0001198b) list_single_graphic_hl_pane_g

0xc615,	// (0x0000e3c1) list_single_graphic_hl_pane_t1_ParamLimits

0xc615,	// (0x0000e3c1) list_single_graphic_hl_pane_t1

0x56db,	// (0x00007487) aid_size_min_hl_cp2

0x56e4,	// (0x00007490) list_highlight_pane_cp34_cp2_ParamLimits

0x56e4,	// (0x00007490) list_highlight_pane_cp34_cp2

0x5698,	// (0x00007444) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5698,	// (0x00007444) list_single_graphic_hl_pane_g1_cp2

0x56f1,	// (0x0000749d) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x56f1,	// (0x0000749d) list_single_graphic_hl_pane_g2_cp2

0x56fd,	// (0x000074a9) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x56fd,	// (0x000074a9) list_single_graphic_hl_pane_g3_cp2

0x570b,	// (0x000074b7) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x570b,	// (0x000074b7) list_single_graphic_hl_pane_g4_cp2

0x5717,	// (0x000074c3) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5717,	// (0x000074c3) list_single_graphic_hl_pane_g5_cp2

0xaea2,	// (0x0000cc4e) control_pane_g4_ParamLimits

0xaea2,	// (0x0000cc4e) control_pane_g4

0x0e22,	// (0x00002bce) bg_popup_sub_pane_cp10_ParamLimits

0x499a,	// (0x00006746) list_choice_list_pane_ParamLimits

0x49a9,	// (0x00006755) scroll_pane_cp23

0xe8a4,	// (0x00010650) bg_popup_preview_window_pane_cp02_ParamLimits

0x529e,	// (0x0000704a) list_preview_fixed_pane_ParamLimits

0x52b4,	// (0x00007060) list_preview_fixed_pane_cp_ParamLimits

0x52b4,	// (0x00007060) list_preview_fixed_pane_cp

0x52c0,	// (0x0000706c) popup_preview_fixed_window_g1_ParamLimits

0x52c0,	// (0x0000706c) popup_preview_fixed_window_g1

0x52cc,	// (0x00007078) popup_preview_fixed_window_g2_ParamLimits

0x52cc,	// (0x00007078) popup_preview_fixed_window_g2

0x0002,

0xfb6e,	// (0x0001191a) popup_preview_fixed_window_g_ParamLimits

0xfb6e,	// (0x0001191a) popup_preview_fixed_window_g

0xf2d6,	// (0x00011082) aid_navi_side_left_pane_ParamLimits

0xf2eb,	// (0x00011097) aid_navi_side_right_pane_ParamLimits

0xf303,	// (0x000110af) navi_icon_pane_stacon_ParamLimits

0xf317,	// (0x000110c3) navi_navi_pane_stacon_ParamLimits

0xf303,	// (0x000110af) navi_text_pane_stacon_ParamLimits

0xe491,	// (0x0001023d) main_text_info_pane

0x5741,	// (0x000074ed) listscroll_text_info_pane

0x5749,	// (0x000074f5) list_text_info_pane_ParamLimits

0x5749,	// (0x000074f5) list_text_info_pane

0x5758,	// (0x00007504) scroll_pane_cp24_ParamLimits

0x5758,	// (0x00007504) scroll_pane_cp24

0xc62b,	// (0x0000e3d7) list_text_info_pane_t1_ParamLimits

0xc62b,	// (0x0000e3d7) list_text_info_pane_t1

0xb024,	// (0x0000cdd0) popup_fast_swap2_window_ParamLimits

0xb024,	// (0x0000cdd0) popup_fast_swap2_window

0x579b,	// (0x00007547) aid_size_cell_fast2

0xe491,	// (0x0001023d) bg_popup_window_pane_cp17

0x204b,	// (0x00003df7) heading_pane_cp2

0xead3,	// (0x0001087f) listscroll_fast2_pane

0x57a5,	// (0x00007551) grid_fast2_pane

0x57af,	// (0x0000755b) listscroll_fast2_pane_g1

0x57b9,	// (0x00007565) listscroll_fast2_pane_g2

0x0001,

0xfbea,	// (0x00011996) listscroll_fast2_pane_g

0xeff0,	// (0x00010d9c) scroll_pane_cp26

0x57c3,	// (0x0000756f) cell_fast2_pane_ParamLimits

0x57c3,	// (0x0000756f) cell_fast2_pane

0x57da,	// (0x00007586) cell_fast2_pane_g1

0x57e3,	// (0x0000758f) cell_fast2_pane_g2

0x57ec,	// (0x00007598) cell_fast2_pane_g3

0x0002,

0xfbef,	// (0x0001199b) cell_fast2_pane_g

0xeb15,	// (0x000108c1) grid_highlight_pane_cp9

0xeb2a,	// (0x000108d6) main_eswt_pane_ParamLimits

0xeb2a,	// (0x000108d6) main_eswt_pane

0x576d,	// (0x00007519) list_single_text_info_pane

0x57f4,	// (0x000075a0) eswt_ctrl_button_pane

0x57f4,	// (0x000075a0) eswt_ctrl_canvas_pane

0x57fc,	// (0x000075a8) eswt_ctrl_combo_pane

0x57f4,	// (0x000075a0) eswt_ctrl_default_pane

0x57f4,	// (0x000075a0) eswt_ctrl_label_pane

0x5804,	// (0x000075b0) eswt_ctrl_wait_pane

0x580c,	// (0x000075b8) eswt_shell_pane

0xe491,	// (0x0001023d) listscroll_eswt_app_pane

0x582c,	// (0x000075d8) popup_eswt_tasktip_window_ParamLimits

0x582c,	// (0x000075d8) popup_eswt_tasktip_window

0x1bcc,	// (0x00003978) bg_popup_window_pane_cp18

0x583d,	// (0x000075e9) eswt_control_pane_g1_ParamLimits

0x583d,	// (0x000075e9) eswt_control_pane_g1

0x584a,	// (0x000075f6) eswt_control_pane_g2_ParamLimits

0x584a,	// (0x000075f6) eswt_control_pane_g2

0x5857,	// (0x00007603) eswt_control_pane_g3_ParamLimits

0x5857,	// (0x00007603) eswt_control_pane_g3

0x5864,	// (0x00007610) eswt_control_pane_g4_ParamLimits

0x5864,	// (0x00007610) eswt_control_pane_g4

0x0003,

0xfbf6,	// (0x000119a2) eswt_control_pane_g_ParamLimits

0xfbf6,	// (0x000119a2) eswt_control_pane_g

0xee29,	// (0x00010bd5) bg_button_pane_ParamLimits

0xee29,	// (0x00010bd5) bg_button_pane

0xeb2a,	// (0x000108d6) common_borders_pane_copy2_ParamLimits

0xeb2a,	// (0x000108d6) common_borders_pane_copy2

0x5871,	// (0x0000761d) control_button_pane_g1_ParamLimits

0x5871,	// (0x0000761d) control_button_pane_g1

0x587d,	// (0x00007629) control_button_pane_g2_ParamLimits

0x587d,	// (0x00007629) control_button_pane_g2

0x5889,	// (0x00007635) control_button_pane_g3_ParamLimits

0x5889,	// (0x00007635) control_button_pane_g3

0x0002,

0xfbff,	// (0x000119ab) control_button_pane_g_ParamLimits

0xfbff,	// (0x000119ab) control_button_pane_g

0x589d,	// (0x00007649) control_button_pane_t1

0x58ab,	// (0x00007657) control_button_pane_t2

0x0001,

0xfc06,	// (0x000119b2) control_button_pane_t

0x1a31,	// (0x000037dd) bg_button_pane_g1

0x1a39,	// (0x000037e5) bg_button_pane_g2

0x1a41,	// (0x000037ed) bg_button_pane_g3

0x1a49,	// (0x000037f5) bg_button_pane_g4

0x1a51,	// (0x000037fd) bg_button_pane_g5

0x1a59,	// (0x00003805) bg_button_pane_g6

0x1a61,	// (0x0000380d) bg_button_pane_g7

0x1a69,	// (0x00003815) bg_button_pane_g8

0x1a71,	// (0x0000381d) bg_button_pane_g9

0x0008,

0xf855,	// (0x00011601) bg_button_pane_g

0x4955,	// (0x00006701) common_borders_pane_ParamLimits

0x4955,	// (0x00006701) common_borders_pane

0x583d,	// (0x000075e9) eswt_control_pane_g1_copy1_ParamLimits

0x583d,	// (0x000075e9) eswt_control_pane_g1_copy1

0x584a,	// (0x000075f6) eswt_control_pane_g2_copy1_ParamLimits

0x584a,	// (0x000075f6) eswt_control_pane_g2_copy1

0x5857,	// (0x00007603) eswt_control_pane_g3_copy1_ParamLimits

0x5857,	// (0x00007603) eswt_control_pane_g3_copy1

0x5864,	// (0x00007610) eswt_control_pane_g4_copy1_ParamLimits

0x5864,	// (0x00007610) eswt_control_pane_g4_copy1

0x4990,	// (0x0000673c) bg_eswt_ctrl_canvas_pane_g1

0x4955,	// (0x00006701) common_borders_pane_cp2_ParamLimits

0x4955,	// (0x00006701) common_borders_pane_cp2

0x4955,	// (0x00006701) common_borders_pane_cp3_ParamLimits

0x4955,	// (0x00006701) common_borders_pane_cp3

0x58b9,	// (0x00007665) separator_horizontal_pane

0x58c1,	// (0x0000766d) separator_vertical_pane

0x583d,	// (0x000075e9) eswt_control_pane_g1_copy2_ParamLimits

0x583d,	// (0x000075e9) eswt_control_pane_g1_copy2

0x584a,	// (0x000075f6) eswt_control_pane_g2_copy2_ParamLimits

0x584a,	// (0x000075f6) eswt_control_pane_g2_copy2

0x5857,	// (0x00007603) eswt_control_pane_g3_copy2_ParamLimits

0x5857,	// (0x00007603) eswt_control_pane_g3_copy2

0x5864,	// (0x00007610) eswt_control_pane_g4_copy2_ParamLimits

0x5864,	// (0x00007610) eswt_control_pane_g4_copy2

0xe491,	// (0x0001023d) common_borders_pane_cp4

0x58ca,	// (0x00007676) separator_horizontal_pane_g1

0x58d3,	// (0x0000767f) separator_horizontal_pane_g2

0x58dc,	// (0x00007688) separator_horizontal_pane_g3

0x0002,

0xfc0b,	// (0x000119b7) separator_horizontal_pane_g

0x583d,	// (0x000075e9) eswt_control_pane_g1_copy3_ParamLimits

0x583d,	// (0x000075e9) eswt_control_pane_g1_copy3

0x584a,	// (0x000075f6) eswt_control_pane_g2_copy3_ParamLimits

0x584a,	// (0x000075f6) eswt_control_pane_g2_copy3

0x5857,	// (0x00007603) eswt_control_pane_g3_copy3_ParamLimits

0x5857,	// (0x00007603) eswt_control_pane_g3_copy3

0x5864,	// (0x00007610) eswt_control_pane_g4_copy3_ParamLimits

0x5864,	// (0x00007610) eswt_control_pane_g4_copy3

0xe491,	// (0x0001023d) common_borders_pane_cp5

0x58e5,	// (0x00007691) separator_vertical_pane_g1

0x58ee,	// (0x0000769a) separator_vertical_pane_g2

0x58f7,	// (0x000076a3) separator_vertical_pane_g3

0x0002,

0xfc12,	// (0x000119be) separator_vertical_pane_g

0x583d,	// (0x000075e9) eswt_control_pane_g1_copy4_ParamLimits

0x583d,	// (0x000075e9) eswt_control_pane_g1_copy4

0x584a,	// (0x000075f6) eswt_control_pane_g2_copy4_ParamLimits

0x584a,	// (0x000075f6) eswt_control_pane_g2_copy4

0x5857,	// (0x00007603) eswt_control_pane_g3_copy4_ParamLimits

0x5857,	// (0x00007603) eswt_control_pane_g3_copy4

0x5864,	// (0x00007610) eswt_control_pane_g4_copy4_ParamLimits

0x5864,	// (0x00007610) eswt_control_pane_g4_copy4

0xc64d,	// (0x0000e3f9) eswt_ctrl_combo_button_pane

0xc655,	// (0x0000e401) eswt_ctrl_input_pane

0xc65d,	// (0x0000e409) popup_choice_list_window_cp70

0xc665,	// (0x0000e411) eswt_ctrl_input_pane_t1

0xe491,	// (0x0001023d) input_focus_pane_cp70

0x4955,	// (0x00006701) bg_button_pane_cp70_ParamLimits

0x4955,	// (0x00006701) bg_button_pane_cp70

0xc673,	// (0x0000e41f) eswt_ctrl_combo_button_pane_g1

0x592e,	// (0x000076da) wait_bar_pane_cp70

0x1bcc,	// (0x00003978) bg_popup_window_pane_cp70_ParamLimits

0x1bcc,	// (0x00003978) bg_popup_window_pane_cp70

0x5936,	// (0x000076e2) popup_eswt_tasktip_window_t1

0x594c,	// (0x000076f8) wait_bar_pane_cp71_ParamLimits

0x594c,	// (0x000076f8) wait_bar_pane_cp71

0x5958,	// (0x00007704) grid_eswt_app_pane

0xf3f6,	// (0x000111a2) scroll_pane_cp70

0xc67b,	// (0x0000e427) cell_eswt_app_pane_ParamLimits

0xc67b,	// (0x0000e427) cell_eswt_app_pane

0xc6ad,	// (0x0000e459) cell_eswt_app_pane_g1_ParamLimits

0xc6ad,	// (0x0000e459) cell_eswt_app_pane_g1

0xc6dc,	// (0x0000e488) cell_eswt_app_pane_g2_ParamLimits

0xc6dc,	// (0x0000e488) cell_eswt_app_pane_g2

0x0001,

0xfc19,	// (0x000119c5) cell_eswt_app_pane_g_ParamLimits

0xfc19,	// (0x000119c5) cell_eswt_app_pane_g

0xc705,	// (0x0000e4b1) cell_eswt_app_pane_t1_ParamLimits

0xc705,	// (0x0000e4b1) cell_eswt_app_pane_t1

0x5a1d,	// (0x000077c9) grid_highlight_pane_cp70_ParamLimits

0x5a1d,	// (0x000077c9) grid_highlight_pane_cp70

0x07a1,	// (0x0000254d) set_content_pane_g1

0xae34,	// (0x0000cbe0) status_small_volume_pane

0x5a29,	// (0x000077d5) status_small_volume_pane_g1

0x5a31,	// (0x000077dd) volume_small2_pane

0x5a3a,	// (0x000077e6) volume_small2_pane_g1

0x5a43,	// (0x000077ef) volume_small2_pane_g2

0x5a4c,	// (0x000077f8) volume_small2_pane_g3

0x5a55,	// (0x00007801) volume_small2_pane_g4

0x5a5e,	// (0x0000780a) volume_small2_pane_g5

0x5a67,	// (0x00007813) volume_small2_pane_g6

0x5a70,	// (0x0000781c) volume_small2_pane_g7

0x5a79,	// (0x00007825) volume_small2_pane_g8

0x5a82,	// (0x0000782e) volume_small2_pane_g9

0x5a8b,	// (0x00007837) volume_small2_pane_g10

0x0009,

0xfc1e,	// (0x000119ca) volume_small2_pane_g

0x4f71,	// (0x00006d1d) fep_vkb_top_text_pane_g1_ParamLimits

0xc5b1,	// (0x0000e35d) fep_vkb_top_text_pane_t1_ParamLimits

0x52d8,	// (0x00007084) popup_preview_fixed_window_g3_ParamLimits

0x52d8,	// (0x00007084) popup_preview_fixed_window_g3

0xb6bc,	// (0x0000d468) popup_toolbar_trans_pane

0xbfbc,	// (0x0000dd68) aid_height_set_list_ParamLimits

0x324f,	// (0x00004ffb) aid_size_parent_ParamLimits

0x0e22,	// (0x00002bce) list_highlight_pane_cp2_ParamLimits

0x07a1,	// (0x0000254d) set_content_pane_g1_ParamLimits

0xc0e9,	// (0x0000de95) list_single_image_pane_ParamLimits

0xc0e9,	// (0x0000de95) list_single_image_pane

0xc737,	// (0x0000e4e3) aid_size_cell_image_ParamLimits

0xc737,	// (0x0000e4e3) aid_size_cell_image

0xc744,	// (0x0000e4f0) grid_single_image_pane_ParamLimits

0xc744,	// (0x0000e4f0) grid_single_image_pane

0xee4f,	// (0x00010bfb) list_single_image_pane_g1_ParamLimits

0xee4f,	// (0x00010bfb) list_single_image_pane_g1

0xee5b,	// (0x00010c07) list_single_image_pane_g2_ParamLimits

0xee5b,	// (0x00010c07) list_single_image_pane_g2

0x0001,

0xfc33,	// (0x000119df) list_single_image_pane_g_ParamLimits

0xfc33,	// (0x000119df) list_single_image_pane_g

0x5aaf,	// (0x0000785b) list_single_image_pane_t1_ParamLimits

0x5aaf,	// (0x0000785b) list_single_image_pane_t1

0xc752,	// (0x0000e4fe) cell_image_list_pane_ParamLimits

0xc752,	// (0x0000e4fe) cell_image_list_pane

0xc766,	// (0x0000e512) cell_image_list_pane_g1

0xc76f,	// (0x0000e51b) cell_image_list_pane_g2

0x0001,

0xfc38,	// (0x000119e4) cell_image_list_pane_g

0x5aed,	// (0x00007899) aid_size_cell_tb_trans_pane

0xee29,	// (0x00010bd5) bg_tb_trans_pane

0x5aff,	// (0x000078ab) grid_tb_trans_pane

0x1a31,	// (0x000037dd) bg_tb_trans_pane_g1

0x1a39,	// (0x000037e5) bg_tb_trans_pane_g2

0x1a41,	// (0x000037ed) bg_tb_trans_pane_g3

0x1a49,	// (0x000037f5) bg_tb_trans_pane_g4

0x1a51,	// (0x000037fd) bg_tb_trans_pane_g5

0x1a69,	// (0x00003815) bg_tb_trans_pane_g6

0x1a71,	// (0x0000381d) bg_tb_trans_pane_g7

0x1a59,	// (0x00003805) bg_tb_trans_pane_g8

0x1a61,	// (0x0000380d) bg_tb_trans_pane_g9

0x0008,

0xfc3d,	// (0x000119e9) bg_tb_trans_pane_g

0x5b13,	// (0x000078bf) cell_toolbar_trans_pane_ParamLimits

0x5b13,	// (0x000078bf) cell_toolbar_trans_pane

0x4990,	// (0x0000673c) cell_toolbar_trans_pane_g1

0xc334,	// (0x0000e0e0) list_form2_midp_pane_t1

0xc342,	// (0x0000e0ee) list_form2_midp_pane_t2

0x0001,

0xfae6,	// (0x00011892) list_form2_midp_pane_t

0x4591,	// (0x0000633d) scroll_pane_cp51_ParamLimits

0x47ab,	// (0x00006557) form2_midp_wait_pane_g1

0x47b4,	// (0x00006560) form2_midp_wait_pane_g2

0x47bd,	// (0x00006569) form2_midp_wait_pane_g3

0x0002,

0xfafb,	// (0x000118a7) form2_midp_wait_pane_g

0xe6ce,	// (0x0001047a) list_highlight_pane_cp21_ParamLimits

0x47f6,	// (0x000065a2) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4805,	// (0x000065b1) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x346b,	// (0x00005217) list_single_2graphic_im_pane_ParamLimits

0x346b,	// (0x00005217) list_single_2graphic_im_pane

0xc778,	// (0x0000e524) list_single_2graphic_im_pane_g1_ParamLimits

0xc778,	// (0x0000e524) list_single_2graphic_im_pane_g1

0xc789,	// (0x0000e535) list_single_2graphic_im_pane_g2_ParamLimits

0xc789,	// (0x0000e535) list_single_2graphic_im_pane_g2

0xc795,	// (0x0000e541) list_single_2graphic_im_pane_g3_ParamLimits

0xc795,	// (0x0000e541) list_single_2graphic_im_pane_g3

0x0003,

0xfc50,	// (0x000119fc) list_single_2graphic_im_pane_g_ParamLimits

0xfc50,	// (0x000119fc) list_single_2graphic_im_pane_g

0xc7a9,	// (0x0000e555) list_single_2graphic_im_pane_t1_ParamLimits

0xc7a9,	// (0x0000e555) list_single_2graphic_im_pane_t1

0x52e4,	// (0x00007090) list_single_graphic_2heading_pane_fp_ParamLimits

0x52e4,	// (0x00007090) list_single_graphic_2heading_pane_fp

0x532c,	// (0x000070d8) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x532c,	// (0x000070d8) list_single_graphic_2heading_pane_fp_g1

0x52fd,	// (0x000070a9) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x52fd,	// (0x000070a9) list_single_graphic_2heading_pane_fp_g2

0x5256,	// (0x00007002) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5256,	// (0x00007002) list_single_graphic_2heading_pane_fp_g3

0x5262,	// (0x0000700e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5262,	// (0x0000700e) list_single_graphic_2heading_pane_fp_g4

0x5309,	// (0x000070b5) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5309,	// (0x000070b5) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x0001192a) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0001192a) list_single_graphic_2heading_pane_fp_g

0x5ba7,	// (0x00007953) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5ba7,	// (0x00007953) list_single_graphic_2heading_pane_fp_t1

0x5364,	// (0x00007110) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5364,	// (0x00007110) list_single_graphic_2heading_pane_fp_t2

0x5bbd,	// (0x00007969) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5bbd,	// (0x00007969) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc59,	// (0x00011a05) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc59,	// (0x00011a05) list_single_graphic_2heading_pane_fp_t

0x4bad,	// (0x00006959) fep_hwr_write_pane_g5_ParamLimits

0x4bad,	// (0x00006959) fep_hwr_write_pane_g5

0x4bb9,	// (0x00006965) fep_hwr_write_pane_g6_ParamLimits

0x4bb9,	// (0x00006965) fep_hwr_write_pane_g6

0x580c,	// (0x000075b8) eswt_shell_pane_ParamLimits

0x1bcc,	// (0x00003978) bg_popup_window_pane_cp18_ParamLimits

0x30f5,	// (0x00004ea1) heading_pane_cp70

0x5936,	// (0x000076e2) popup_eswt_tasktip_window_t1_ParamLimits

0xb786,	// (0x0000d532) aid_touch_tab_arrow_left

0xb79c,	// (0x0000d548) aid_touch_tab_arrow_right

0xa099,	// (0x0000be45) title_pane_g3_ParamLimits

0xa099,	// (0x0000be45) title_pane_g3

0xed83,	// (0x00010b2f) set_value_pane_g1

0xb6bc,	// (0x0000d468) popup_toolbar_trans_pane_ParamLimits

0x5aed,	// (0x00007899) aid_size_cell_tb_trans_pane_ParamLimits

0xee29,	// (0x00010bd5) bg_tb_trans_pane_ParamLimits

0x5aff,	// (0x000078ab) grid_tb_trans_pane_ParamLimits

0xe8a4,	// (0x00010650) cont_note_pane_ParamLimits

0xe8a4,	// (0x00010650) cont_note_pane

0xeb2a,	// (0x000108d6) cont_snote2_single_text_pane_ParamLimits

0xeb2a,	// (0x000108d6) cont_snote2_single_text_pane

0xeb2a,	// (0x000108d6) cont_snote2_single_graphic_pane_ParamLimits

0xeb2a,	// (0x000108d6) cont_snote2_single_graphic_pane

0x2273,	// (0x0000401f) cont_note_wait_pane_ParamLimits

0x2273,	// (0x0000401f) cont_note_wait_pane

0x2273,	// (0x0000401f) cont_note_image_pane_ParamLimits

0x2273,	// (0x0000401f) cont_note_image_pane

0x5bd3,	// (0x0000797f) popup_note2_window_g1_ParamLimits

0x5bd3,	// (0x0000797f) popup_note2_window_g1

0x5c04,	// (0x000079b0) popup_note2_window_t1_ParamLimits

0x5c04,	// (0x000079b0) popup_note2_window_t1

0x5c49,	// (0x000079f5) popup_note2_window_t2_ParamLimits

0x5c49,	// (0x000079f5) popup_note2_window_t2

0x5c8e,	// (0x00007a3a) popup_note2_window_t3_ParamLimits

0x5c8e,	// (0x00007a3a) popup_note2_window_t3

0x5cd3,	// (0x00007a7f) popup_note2_window_t4_ParamLimits

0x5cd3,	// (0x00007a7f) popup_note2_window_t4

0xe928,	// (0x000106d4) popup_note2_window_t5_ParamLimits

0xe928,	// (0x000106d4) popup_note2_window_t5

0x0004,

0xfc65,	// (0x00011a11) popup_note2_window_t_ParamLimits

0xfc65,	// (0x00011a11) popup_note2_window_t

0x5d02,	// (0x00007aae) popup_note2_image_window_g1_ParamLimits

0x5d02,	// (0x00007aae) popup_note2_image_window_g1

0x5d0e,	// (0x00007aba) popup_note2_image_window_g2_ParamLimits

0x5d0e,	// (0x00007aba) popup_note2_image_window_g2

0x0001,

0xfc70,	// (0x00011a1c) popup_note2_image_window_g_ParamLimits

0xfc70,	// (0x00011a1c) popup_note2_image_window_g

0x5d20,	// (0x00007acc) popup_note2_image_window_t1_ParamLimits

0x5d20,	// (0x00007acc) popup_note2_image_window_t1

0x5d38,	// (0x00007ae4) popup_note2_image_window_t2_ParamLimits

0x5d38,	// (0x00007ae4) popup_note2_image_window_t2

0x5d50,	// (0x00007afc) popup_note2_image_window_t3_ParamLimits

0x5d50,	// (0x00007afc) popup_note2_image_window_t3

0x0002,

0xfc75,	// (0x00011a21) popup_note2_image_window_t_ParamLimits

0xfc75,	// (0x00011a21) popup_note2_image_window_t

0x2281,	// (0x0000402d) popup_note2_wait_window_g1_ParamLimits

0x2281,	// (0x0000402d) popup_note2_wait_window_g1

0x5d6c,	// (0x00007b18) popup_note2_wait_window_g2_ParamLimits

0x5d6c,	// (0x00007b18) popup_note2_wait_window_g2

0x2299,	// (0x00004045) popup_note2_wait_window_g3_ParamLimits

0x2299,	// (0x00004045) popup_note2_wait_window_g3

0x0002,

0xfc7c,	// (0x00011a28) popup_note2_wait_window_g_ParamLimits

0xfc7c,	// (0x00011a28) popup_note2_wait_window_g

0x5d78,	// (0x00007b24) popup_note2_wait_window_t1_ParamLimits

0x5d78,	// (0x00007b24) popup_note2_wait_window_t1

0x5d96,	// (0x00007b42) popup_note2_wait_window_t2_ParamLimits

0x5d96,	// (0x00007b42) popup_note2_wait_window_t2

0x5db4,	// (0x00007b60) popup_note2_wait_window_t3_ParamLimits

0x5db4,	// (0x00007b60) popup_note2_wait_window_t3

0x5dc6,	// (0x00007b72) popup_note2_wait_window_t4_ParamLimits

0x5dc6,	// (0x00007b72) popup_note2_wait_window_t4

0x0003,

0xfc83,	// (0x00011a2f) popup_note2_wait_window_t_ParamLimits

0xfc83,	// (0x00011a2f) popup_note2_wait_window_t

0x5dd8,	// (0x00007b84) wait_bar2_pane_ParamLimits

0x5dd8,	// (0x00007b84) wait_bar2_pane

0x5df0,	// (0x00007b9c) popup_snote2_single_text_window_g1_ParamLimits

0x5df0,	// (0x00007b9c) popup_snote2_single_text_window_g1

0x5e18,	// (0x00007bc4) popup_snote2_single_text_window_t1_ParamLimits

0x5e18,	// (0x00007bc4) popup_snote2_single_text_window_t1

0x5e64,	// (0x00007c10) popup_snote2_single_text_window_t2_ParamLimits

0x5e64,	// (0x00007c10) popup_snote2_single_text_window_t2

0x5eb0,	// (0x00007c5c) popup_snote2_single_text_window_t3_ParamLimits

0x5eb0,	// (0x00007c5c) popup_snote2_single_text_window_t3

0x5ef1,	// (0x00007c9d) popup_snote2_single_text_window_t4_ParamLimits

0x5ef1,	// (0x00007c9d) popup_snote2_single_text_window_t4

0x5f27,	// (0x00007cd3) popup_snote2_single_text_window_t5_ParamLimits

0x5f27,	// (0x00007cd3) popup_snote2_single_text_window_t5

0x0004,

0xfc8c,	// (0x00011a38) popup_snote2_single_text_window_t_ParamLimits

0xfc8c,	// (0x00011a38) popup_snote2_single_text_window_t

0x5f52,	// (0x00007cfe) popup_snote2_single_graphic_window_g1_ParamLimits

0x5f52,	// (0x00007cfe) popup_snote2_single_graphic_window_g1

0x5f7a,	// (0x00007d26) popup_snote2_single_graphic_window_g2_ParamLimits

0x5f7a,	// (0x00007d26) popup_snote2_single_graphic_window_g2

0x0001,

0xfc97,	// (0x00011a43) popup_snote2_single_graphic_window_g_ParamLimits

0xfc97,	// (0x00011a43) popup_snote2_single_graphic_window_g

0x5fa2,	// (0x00007d4e) popup_snote2_single_graphic_window_t1_ParamLimits

0x5fa2,	// (0x00007d4e) popup_snote2_single_graphic_window_t1

0x5fee,	// (0x00007d9a) popup_snote2_single_graphic_window_t2_ParamLimits

0x5fee,	// (0x00007d9a) popup_snote2_single_graphic_window_t2

0x5eb0,	// (0x00007c5c) popup_snote2_single_graphic_window_t3_ParamLimits

0x5eb0,	// (0x00007c5c) popup_snote2_single_graphic_window_t3

0x5ef1,	// (0x00007c9d) popup_snote2_single_graphic_window_t4_ParamLimits

0x5ef1,	// (0x00007c9d) popup_snote2_single_graphic_window_t4

0x5f27,	// (0x00007cd3) popup_snote2_single_graphic_window_t5_ParamLimits

0x5f27,	// (0x00007cd3) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9c,	// (0x00011a48) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9c,	// (0x00011a48) popup_snote2_single_graphic_window_t

0x43f0,	// (0x0000619c) clock_nsta_pane_cp2_t1

0x43f0,	// (0x0000619c) clock_nsta_pane_cp2_t2

0x0001,

0xfabc,	// (0x00011868) clock_nsta_pane_cp2_t

0xee43,	// (0x00010bef) form_field_data_wide_pane_g1_ParamLimits

0xee4f,	// (0x00010bfb) form_field_data_wide_pane_g2_ParamLimits

0xee4f,	// (0x00010bfb) form_field_data_wide_pane_g2

0xee5b,	// (0x00010c07) form_field_data_wide_pane_g3_ParamLimits

0xee5b,	// (0x00010c07) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x00011422) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x00011422) form_field_data_wide_pane_g

0xc24b,	// (0x0000dff7) grid_touch_3_pane_ParamLimits

0xc24b,	// (0x0000dff7) grid_touch_3_pane

0xc7da,	// (0x0000e586) cell_touch_3_pane_ParamLimits

0xc7da,	// (0x0000e586) cell_touch_3_pane

0x4990,	// (0x0000673c) cell_touch_3_pane_g1

0x4990,	// (0x0000673c) cell_touch_3_pane_g2

0x0001,

0xfb41,	// (0x000118ed) cell_touch_3_pane_g

0xe980,	// (0x0001072c) cont_query_data_pane

0xe988,	// (0x00010734) cont_query_data_pane_cp1

0x606d,	// (0x00007e19) button_value_adjust_pane_cp7

0x6075,	// (0x00007e21) query_popup_pane_cp3

0x0172,	// (0x00001f1e) bg_popup_sub_pane_cp22_ParamLimits

0x0188,	// (0x00001f34) navi_navi_volume_pane_cp2

0x01a3,	// (0x00001f4f) popup_side_volume_key_window_g2

0x01b2,	// (0x00001f5e) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x000114b8) popup_side_volume_key_window_g

0x01cf,	// (0x00001f7b) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x000114bf) popup_side_volume_key_window_t

0x065c,	// (0x00002408) popup_side_volume_key_window_ParamLimits

0xa56f,	// (0x0000c31b) list_double_graphic_pane_g4_ParamLimits

0xa56f,	// (0x0000c31b) list_double_graphic_pane_g4

0xc0c0,	// (0x0000de6c) list_single_2heading_msg_pane_ParamLimits

0xc0c0,	// (0x0000de6c) list_single_2heading_msg_pane

0xc826,	// (0x0000e5d2) list_single_2heading_msg_pane_g1_ParamLimits

0xc826,	// (0x0000e5d2) list_single_2heading_msg_pane_g1

0xc832,	// (0x0000e5de) list_single_2heading_msg_pane_g2_ParamLimits

0xc832,	// (0x0000e5de) list_single_2heading_msg_pane_g2

0xc845,	// (0x0000e5f1) list_single_2heading_msg_pane_g3_ParamLimits

0xc845,	// (0x0000e5f1) list_single_2heading_msg_pane_g3

0xc851,	// (0x0000e5fd) list_single_2heading_msg_pane_g4_ParamLimits

0xc851,	// (0x0000e5fd) list_single_2heading_msg_pane_g4

0x0003,

0xfca7,	// (0x00011a53) list_single_2heading_msg_pane_g_ParamLimits

0xfca7,	// (0x00011a53) list_single_2heading_msg_pane_g

0xc869,	// (0x0000e615) list_single_2heading_msg_pane_t1_ParamLimits

0xc869,	// (0x0000e615) list_single_2heading_msg_pane_t1

0xc891,	// (0x0000e63d) list_single_2heading_msg_pane_t2_ParamLimits

0xc891,	// (0x0000e63d) list_single_2heading_msg_pane_t2

0xc8fc,	// (0x0000e6a8) list_single_2heading_msg_pane_t3_ParamLimits

0xc8fc,	// (0x0000e6a8) list_single_2heading_msg_pane_t3

0x6166,	// (0x00007f12) list_single_2heading_msg_pane_t4_ParamLimits

0x6166,	// (0x00007f12) list_single_2heading_msg_pane_t4

0x0003,

0xfcb0,	// (0x00011a5c) list_single_2heading_msg_pane_t_ParamLimits

0xfcb0,	// (0x00011a5c) list_single_2heading_msg_pane_t

0xe672,	// (0x0001041e) title_pane_g4_ParamLimits

0xe672,	// (0x0001041e) title_pane_g4

0xf1fe,	// (0x00010faa) title_pane_stacon_g3_ParamLimits

0xf1fe,	// (0x00010faa) title_pane_stacon_g3

0x5b6a,	// (0x00007916) list_single_2graphic_im_pane_g4_ParamLimits

0x5b6a,	// (0x00007916) list_single_2graphic_im_pane_g4

0x2e4f,	// (0x00004bfb) popup_side_volume_key_window_cp

0x38ef,	// (0x0000569b) main_idle_act2_pane_t1

0x1a79,	// (0x00003825) toolbar_button_pane_g10

0xa416,	// (0x0000c1c2) popup_toolbar_window_cp1

0x43e1,	// (0x0000618d) clock_nsta_pane_cp_t1

0x43e1,	// (0x0000618d) clock_nsta_pane_cp_t2

0x0001,

0xfab7,	// (0x00011863) clock_nsta_pane_cp_t

0x0188,	// (0x00001f34) navi_navi_volume_pane_cp2_ParamLimits

0x0197,	// (0x00001f43) popup_side_volume_key_window_g1_ParamLimits

0x01a3,	// (0x00001f4f) popup_side_volume_key_window_g2_ParamLimits

0x01b2,	// (0x00001f5e) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x000114b8) popup_side_volume_key_window_g_ParamLimits

0x49e7,	// (0x00006793) fep_hwr_aid_pane

0x4a90,	// (0x0000683c) bg_fep_hwr_top_pane_g4_ParamLimits

0x4ab0,	// (0x0000685c) fep_hwr_top_pane_g1_ParamLimits

0x4ac2,	// (0x0000686e) fep_hwr_top_pane_g2_ParamLimits

0x4ad4,	// (0x00006880) fep_hwr_top_pane_g3_ParamLimits

0xfb0c,	// (0x000118b8) fep_hwr_top_pane_g_ParamLimits

0x4ae9,	// (0x00006895) fep_hwr_top_text_pane_ParamLimits

0x2c04,	// (0x000049b0) aid_touch_tab_arrow_arrow_2

0x2c0d,	// (0x000049b9) aid_touch_tab_arrow_left_2

0x49fb,	// (0x000067a7) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x4a32,	// (0x000067de) fep_hwr_prediction_pane

0x4d6b,	// (0x00006b17) fep_vkb_prediction_pane

0xc591,	// (0x0000e33d) fep_vkb_side_pane_g3_ParamLimits

0xc591,	// (0x0000e33d) fep_vkb_side_pane_g3

0x4e1d,	// (0x00006bc9) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5526,	// (0x000072d2) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5533,	// (0x000072df) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb6,	// (0x00011962) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x618b,	// (0x00007f37) fep_hwr_prediction_pane_g1

0x6195,	// (0x00007f41) fep_hwr_prediction_pane_g2

0x619d,	// (0x00007f49) fep_hwr_prediction_pane_g3

0x61a5,	// (0x00007f51) fep_hwr_prediction_pane_g4

0x0003,

0xfcb9,	// (0x00011a65) fep_hwr_prediction_pane_g

0x618b,	// (0x00007f37) fep_vkb_prediction_pane_g1

0x61ad,	// (0x00007f59) fep_vkb_prediction_pane_g2

0x61b5,	// (0x00007f61) fep_vkb_prediction_pane_g3

0x61bd,	// (0x00007f69) fep_vkb_prediction_pane_g4

0x0003,

0xfcc2,	// (0x00011a6e) fep_vkb_prediction_pane_g

0x31b6,	// (0x00004f62) slider_set_pane_g3

0x31ca,	// (0x00004f76) slider_set_pane_g4

0x31e2,	// (0x00004f8e) slider_set_pane_g5

0x31b6,	// (0x00004f62) slider_set_pane_g6

0x31f8,	// (0x00004fa4) slider_set_pane_g7

0x33ce,	// (0x0000517a) slider_form_pane_g3

0x33d7,	// (0x00005183) slider_form_pane_g4

0x33df,	// (0x0000518b) slider_form_pane_g5

0x33ce,	// (0x0000517a) slider_form_pane_g6

0xc063,	// (0x0000de0f) slider_form_pane_g7

0x3bfa,	// (0x000059a6) slider_set_pane_vc_g3

0x3c03,	// (0x000059af) slider_set_pane_vc_g4

0x3c0c,	// (0x000059b8) slider_set_pane_vc_g5

0x3bfa,	// (0x000059a6) slider_set_pane_vc_g6

0x3c15,	// (0x000059c1) slider_set_pane_vc_g7

0x40b7,	// (0x00005e63) slider_form_pane_vc_g1

0x40c0,	// (0x00005e6c) slider_form_pane_vc_g2

0x40c9,	// (0x00005e75) slider_form_pane_vc_g3

0x40b7,	// (0x00005e63) slider_form_pane_vc_g4

0x40d2,	// (0x00005e7e) slider_form_pane_vc_g5

0x0004,

0xfa89,	// (0x00011835) slider_form_pane_vc_g

0xe491,	// (0x0001023d) main_idle_act3_pane

0x61c5,	// (0x00007f71) ai3_links_pane

0xc96a,	// (0x0000e716) popup_ai3_data_window_ParamLimits

0xc96a,	// (0x0000e716) popup_ai3_data_window

0xe491,	// (0x0001023d) grid_ai3_links_pane

0xc988,	// (0x0000e734) cell_ai3_links_pane_ParamLimits

0xc988,	// (0x0000e734) cell_ai3_links_pane

0x6206,	// (0x00007fb2) bg_popup_sub_pane_cp11

0x6213,	// (0x00007fbf) cell_ai3_links_pane_g1

0xe491,	// (0x0001023d) bg_popup_sub_pane_cp12

0x6238,	// (0x00007fe4) heading_ai3_data_pane

0x6240,	// (0x00007fec) list_ai3_gene_pane

0x624c,	// (0x00007ff8) popup_ai3_data_window_g1

0x6254,	// (0x00008000) heading_ai3_data_pane_g1

0x625c,	// (0x00008008) heading_ai3_data_pane_t1

0x626a,	// (0x00008016) list_double_ai3_gene_pane_ParamLimits

0x626a,	// (0x00008016) list_double_ai3_gene_pane

0x6277,	// (0x00008023) list_single_ai3_gene_pane_ParamLimits

0x6277,	// (0x00008023) list_single_ai3_gene_pane

0x4955,	// (0x00006701) list_highlight_pane_cp7_ParamLimits

0x4955,	// (0x00006701) list_highlight_pane_cp7

0x6284,	// (0x00008030) list_single_a13_gene_pane_t1_ParamLimits

0x6284,	// (0x00008030) list_single_a13_gene_pane_t1

0x629b,	// (0x00008047) list_single_ai3_gene_pane_g1

0x62a4,	// (0x00008050) list_single_ai3_gene_pane_g2

0x0001,

0xfccb,	// (0x00011a77) list_single_ai3_gene_pane_g

0x62ac,	// (0x00008058) list_double_ai3_gene_pane_g1_ParamLimits

0x62ac,	// (0x00008058) list_double_ai3_gene_pane_g1

0x62b8,	// (0x00008064) list_double_ai3_gene_pane_t1_ParamLimits

0x62b8,	// (0x00008064) list_double_ai3_gene_pane_t1

0x62d4,	// (0x00008080) list_double_ai3_gene_pane_t2_ParamLimits

0x62d4,	// (0x00008080) list_double_ai3_gene_pane_t2

0x62e9,	// (0x00008095) list_double_ai3_gene_pane_t3_ParamLimits

0x62e9,	// (0x00008095) list_double_ai3_gene_pane_t3

0x0002,

0xfcd0,	// (0x00011a7c) list_double_ai3_gene_pane_t_ParamLimits

0xfcd0,	// (0x00011a7c) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x6086,	// (0x00007e32) aid_size_min_col_2

0xc810,	// (0x0000e5bc) aid_size_min_msg_ParamLimits

0xc810,	// (0x0000e5bc) aid_size_min_msg

0xc5a5,	// (0x0000e351) fep_vkb_top_text_pane_g2_ParamLimits

0xc5a5,	// (0x0000e351) fep_vkb_top_text_pane_g2

0x0001,

0xfb3c,	// (0x000118e8) fep_vkb_top_text_pane_g_ParamLimits

0xfb3c,	// (0x000118e8) fep_vkb_top_text_pane_g

0xe491,	// (0x0001023d) main_hc_apps_shell_pane

0x6306,	// (0x000080b2) grid_hc_apps_pane_ParamLimits

0x6306,	// (0x000080b2) grid_hc_apps_pane

0x6315,	// (0x000080c1) list_hc_apps_pane

0x631d,	// (0x000080c9) scroll_pane_cp37_ParamLimits

0x631d,	// (0x000080c9) scroll_pane_cp37

0xc9a2,	// (0x0000e74e) cell_hc_apps_pane_ParamLimits

0xc9a2,	// (0x0000e74e) cell_hc_apps_pane

0xca6c,	// (0x0000e818) cell_hc_apps_pane_g1_ParamLimits

0xca6c,	// (0x0000e818) cell_hc_apps_pane_g1

0x6412,	// (0x000081be) cell_hc_apps_pane_g2_ParamLimits

0x6412,	// (0x000081be) cell_hc_apps_pane_g2

0x642e,	// (0x000081da) cell_hc_apps_pane_g3_ParamLimits

0x642e,	// (0x000081da) cell_hc_apps_pane_g3

0x0002,

0xfcd7,	// (0x00011a83) cell_hc_apps_pane_g_ParamLimits

0xfcd7,	// (0x00011a83) cell_hc_apps_pane_g

0xca99,	// (0x0000e845) cell_hc_apps_pane_t1_ParamLimits

0xca99,	// (0x0000e845) cell_hc_apps_pane_t1

0xe8a4,	// (0x00010650) grid_highlight_pane_cp10_ParamLimits

0xe8a4,	// (0x00010650) grid_highlight_pane_cp10

0xcad9,	// (0x0000e885) list_single_hc_apps_pane_ParamLimits

0xcad9,	// (0x0000e885) list_single_hc_apps_pane

0xcb13,	// (0x0000e8bf) list_single_hc_apps_pane_g1

0xcb2c,	// (0x0000e8d8) list_single_hc_apps_pane_g2

0x0001,

0xfcde,	// (0x00011a8a) list_single_hc_apps_pane_g

0xcb45,	// (0x0000e8f1) list_single_hc_apps_pane_g2_copy1

0xcb61,	// (0x0000e90d) list_single_hc_apps_pane_t1

0xe6ce,	// (0x0001047a) bg_set_opt_pane_cp_ParamLimits

0xe6dc,	// (0x00010488) setting_slider_pane_t1_ParamLimits

0xe6f5,	// (0x000104a1) setting_slider_pane_t2_ParamLimits

0xe70f,	// (0x000104bb) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001130a) setting_slider_pane_t_ParamLimits

0xe727,	// (0x000104d3) slider_set_pane_ParamLimits

0x0cab,	// (0x00002a57) control_pane_g5_ParamLimits

0x0cab,	// (0x00002a57) control_pane_g5

0x319d,	// (0x00004f49) slider_set_pane_g1_ParamLimits

0x31aa,	// (0x00004f56) slider_set_pane_g2_ParamLimits

0x31b6,	// (0x00004f62) slider_set_pane_g3_ParamLimits

0x31ca,	// (0x00004f76) slider_set_pane_g4_ParamLimits

0x31e2,	// (0x00004f8e) slider_set_pane_g5_ParamLimits

0x31b6,	// (0x00004f62) slider_set_pane_g6_ParamLimits

0x31f8,	// (0x00004fa4) slider_set_pane_g7_ParamLimits

0xf953,	// (0x000116ff) slider_set_pane_g_ParamLimits

0x074c,	// (0x000024f8) navi_icon_text_pane_ParamLimits

0xb74d,	// (0x0000d4f9) aid_fill_nsta_2_ParamLimits

0xb786,	// (0x0000d532) aid_touch_tab_arrow_left_ParamLimits

0xb79c,	// (0x0000d548) aid_touch_tab_arrow_right_ParamLimits

0xb837,	// (0x0000d5e3) clock_nsta_pane_ParamLimits

0xbea3,	// (0x0000dc4f) navi_icon_pane_g1_ParamLimits

0xbeaf,	// (0x0000dc5b) navi_text_pane_t1_ParamLimits

0xc316,	// (0x0000e0c2) navi_icon_text_pane_g1_ParamLimits

0xc322,	// (0x0000e0ce) navi_icon_text_pane_t1_ParamLimits

0xcb13,	// (0x0000e8bf) list_single_hc_apps_pane_g1_ParamLimits

0xcb2c,	// (0x0000e8d8) list_single_hc_apps_pane_g2_ParamLimits

0xfcde,	// (0x00011a8a) list_single_hc_apps_pane_g_ParamLimits

0xcb45,	// (0x0000e8f1) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcb61,	// (0x0000e90d) list_single_hc_apps_pane_t1_ParamLimits

0x9f88,	// (0x0000bd34) popup_toolbar2_fixed_window_ParamLimits

0x9f88,	// (0x0000bd34) popup_toolbar2_fixed_window

0xb6b2,	// (0x0000d45e) popup_toolbar2_float_window

0xe491,	// (0x0001023d) bg_popup_sub_pane_cp27

0x654b,	// (0x000082f7) grid_toolbar2_float_pane

0xe491,	// (0x0001023d) bg_popup_sub_pane_cp26

0x654b,	// (0x000082f7) grid_toolbar2_fixed_pane

0xcb8f,	// (0x0000e93b) cell_toolbar2_fixed_pane_ParamLimits

0xcb8f,	// (0x0000e93b) cell_toolbar2_fixed_pane

0xcba9,	// (0x0000e955) cell_toolbar2_fixed_pane_g1

0x656c,	// (0x00008318) toolbar2_fixed_button_pane

0x1a31,	// (0x000037dd) toolbar2_fixed_button_pane_g1

0x1a39,	// (0x000037e5) toolbar2_fixed_button_pane_g2

0x1a41,	// (0x000037ed) toolbar2_fixed_button_pane_g3

0x1a49,	// (0x000037f5) toolbar2_fixed_button_pane_g4

0x1a51,	// (0x000037fd) toolbar2_fixed_button_pane_g5

0x1a59,	// (0x00003805) toolbar2_fixed_button_pane_g6

0x1a61,	// (0x0000380d) toolbar2_fixed_button_pane_g7

0x1a69,	// (0x00003815) toolbar2_fixed_button_pane_g8

0x1a71,	// (0x0000381d) toolbar2_fixed_button_pane_g9

0x0008,

0xf855,	// (0x00011601) toolbar2_fixed_button_pane_g

0x6574,	// (0x00008320) cell_toolbar2_float_pane_ParamLimits

0x6574,	// (0x00008320) cell_toolbar2_float_pane

0x6585,	// (0x00008331) cell_toolbar2_float_pane_g1

0x656c,	// (0x00008318) toolbar2_fixed_button_pane_cp

0xc48d,	// (0x0000e239) fep_vkb_accented_list_pane_ParamLimits

0xc48d,	// (0x0000e239) fep_vkb_accented_list_pane

0x518e,	// (0x00006f3a) bg_popup_fep_shadow_pane_g9

0x08c4,	// (0x00002670) bg_popup_fep_shadow_pane_cp3

0xefd7,	// (0x00010d83) list_accented_list_pane

0x658e,	// (0x0000833a) list_single_accented_list_pane_ParamLimits

0x658e,	// (0x0000833a) list_single_accented_list_pane

0x08c4,	// (0x00002670) list_highlight_pane_cp10

0x659f,	// (0x0000834b) list_single_accented_list_pane_t1

0xb5d0,	// (0x0000d37c) popup_slider_window_ParamLimits

0xb5d0,	// (0x0000d37c) popup_slider_window

0x607d,	// (0x00007e29) aid_indentation_list_msg

0xccac,	// (0x0000ea58) bg_popup_window_pane_cp19

0x66db,	// (0x00008487) popup_slider_window_g1

0x66f7,	// (0x000084a3) popup_slider_window_g2

0x6713,	// (0x000084bf) popup_slider_window_g3

0x0005,

0xfce3,	// (0x00011a8f) popup_slider_window_g

0x6779,	// (0x00008525) popup_slider_window_t1

0x67ed,	// (0x00008599) small_volume_slider_vertical_pane

0x4990,	// (0x0000673c) small_volume_slider_vertical_pane_g1

0x4990,	// (0x0000673c) small_volume_slider_vertical_pane_g2

0x6809,	// (0x000085b5) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf5,	// (0x00011aa1) small_volume_slider_vertical_pane_g

0x9ef2,	// (0x0000bc9e) area_side_right_pane_ParamLimits

0x9ef2,	// (0x0000bc9e) area_side_right_pane

0xcd64,	// (0x0000eb10) aid_size_side_button_ParamLimits

0xcd64,	// (0x0000eb10) aid_size_side_button

0xcd7d,	// (0x0000eb29) grid_sctrl_middle_pane_ParamLimits

0xcd7d,	// (0x0000eb29) grid_sctrl_middle_pane

0x6845,	// (0x000085f1) sctrl_sk_bottom_pane

0x6856,	// (0x00008602) sctrl_sk_top_pane

0x6868,	// (0x00008614) aid_touch_sctrl_top

0xe8a4,	// (0x00010650) bg_sctrl_sk_pane_ParamLimits

0xe8a4,	// (0x00010650) bg_sctrl_sk_pane

0x6875,	// (0x00008621) sctrl_sk_top_pane_g1

0x6882,	// (0x0000862e) sctrl_sk_top_pane_t1

0x6868,	// (0x00008614) aid_touch_sctrl_bottom

0xe8a4,	// (0x00010650) bg_sctrl_sk_pane_cp_ParamLimits

0xe8a4,	// (0x00010650) bg_sctrl_sk_pane_cp

0x689d,	// (0x00008649) sctrl_sk_bottom_pane_g1

0x6882,	// (0x0000862e) sctrl_sk_bottom_pane_t1

0xcd97,	// (0x0000eb43) cell_sctrl_middle_pane_ParamLimits

0xcd97,	// (0x0000eb43) cell_sctrl_middle_pane

0xcdaa,	// (0x0000eb56) aid_touch_sctrl_middle_ParamLimits

0xcdaa,	// (0x0000eb56) aid_touch_sctrl_middle

0xcdb7,	// (0x0000eb63) bg_sctrl_middle_pane_ParamLimits

0xcdb7,	// (0x0000eb63) bg_sctrl_middle_pane

0x6967,	// (0x00008713) cell_sctrl_middle_pane_g1_ParamLimits

0x6967,	// (0x00008713) cell_sctrl_middle_pane_g1

0xcdc5,	// (0x0000eb71) cell_sctrl_middle_pane_g2_ParamLimits

0xcdc5,	// (0x0000eb71) cell_sctrl_middle_pane_g2

0x0001,

0xfd01,	// (0x00011aad) cell_sctrl_middle_pane_g_ParamLimits

0xfd01,	// (0x00011aad) cell_sctrl_middle_pane_g

0x1a31,	// (0x000037dd) bg_sctrl_middle_pane_g1

0x1a39,	// (0x000037e5) bg_sctrl_middle_pane_g2

0x1a41,	// (0x000037ed) bg_sctrl_middle_pane_g3

0x1a49,	// (0x000037f5) bg_sctrl_middle_pane_g4

0x1a51,	// (0x000037fd) bg_sctrl_middle_pane_g5

0x1a59,	// (0x00003805) bg_sctrl_middle_pane_g6

0x1a61,	// (0x0000380d) bg_sctrl_middle_pane_g7

0x1a69,	// (0x00003815) bg_sctrl_middle_pane_g8

0x0007,

0xfd06,	// (0x00011ab2) bg_sctrl_middle_pane_g

0x1a71,	// (0x0000381d) bg_sctrl_middle_pane_g8_copy1

0x1a31,	// (0x000037dd) bg_sctrl_sk_pane_g1

0x1a39,	// (0x000037e5) bg_sctrl_sk_pane_g2

0x1a41,	// (0x000037ed) bg_sctrl_sk_pane_g3

0x0008,

0xf855,	// (0x00011601) bg_sctrl_sk_pane_g

0xece8,	// (0x00010a94) aid_size_touch_scroll_bar

0x1a49,	// (0x000037f5) bg_sctrl_sk_pane_g4

0x1a51,	// (0x000037fd) bg_sctrl_sk_pane_g5

0x1a59,	// (0x00003805) bg_sctrl_sk_pane_g6

0x1a61,	// (0x0000380d) bg_sctrl_sk_pane_g7

0x1a69,	// (0x00003815) bg_sctrl_sk_pane_g8

0x1a71,	// (0x0000381d) bg_sctrl_sk_pane_g9

0x0f0e,	// (0x00002cba) popup_fep_china_hwr2_fs_candidate_window

0xb088,	// (0x0000ce34) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb088,	// (0x0000ce34) popup_fep_china_hwr2_fs_control_window

0x4e1d,	// (0x00006bc9) sctrl_sk_top_pane_g2

0x0001,

0xfcfc,	// (0x00011aa8) sctrl_sk_top_pane_g

0xcdd1,	// (0x0000eb7d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xcdd1,	// (0x0000eb7d) aid_fep_china_hwr2_fs_cell

0xcde7,	// (0x0000eb93) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xcde7,	// (0x0000eb93) bg_popup_fep_shadow_pane_cp4

0xcdfe,	// (0x0000ebaa) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xcdfe,	// (0x0000ebaa) bg_popup_fep_shadow_pane_cp5

0xce10,	// (0x0000ebbc) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xce10,	// (0x0000ebbc) popup_fep_china_hwr2_fs_control_bar_grid

0xce24,	// (0x0000ebd0) popup_fep_china_hwr2_fs_control_funtion_grid

0x693b,	// (0x000086e7) aid_fep_china_hwr2_fs_candi_cell

0xe491,	// (0x0001023d) bg_popup_fep_shadow_pane_cp6

0x6945,	// (0x000086f1) popup_fep_china_hwr2_fs_candidate_grid

0xce2c,	// (0x0000ebd8) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xce2c,	// (0x0000ebd8) cell_fep_china_hwr2_fs_funtion_grid

0x4990,	// (0x0000673c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6967,	// (0x00008713) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6967,	// (0x00008713) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6975,	// (0x00008721) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6975,	// (0x00008721) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd17,	// (0x00011ac3) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd17,	// (0x00011ac3) cell_fep_china_hwr2_fs_funtion_grid_g

0xce44,	// (0x0000ebf0) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xce44,	// (0x0000ebf0) cell_fep_china_hwr2_fs_funtion_grid_t1

0xce59,	// (0x0000ec05) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xce59,	// (0x0000ec05) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1c,	// (0x00011ac8) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1c,	// (0x00011ac8) cell_fep_china_hwr2_fs_funtion_grid_t

0x69bc,	// (0x00008768) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x69c4,	// (0x00008770) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x69cc,	// (0x00008778) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd21,	// (0x00011acd) popup_fep_china_hwr2_fs_control_bar_grid_g

0x69d4,	// (0x00008780) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x69d4,	// (0x00008780) cell_fep_china_hwr2_fs_candidate_grid

0x69f3,	// (0x0000879f) popup_fep_china_hwr2_fs_candidate_grid_g20

0x69fb,	// (0x000087a7) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4990,	// (0x0000673c) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4990,	// (0x0000673c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb41,	// (0x000118ed) cell_fep_china_hwr2_fs_candidate_grid_g

0x6a03,	// (0x000087af) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1573,	// (0x0000331f) clock_nsta_pane_cp_24_ParamLimits

0x1573,	// (0x0000331f) clock_nsta_pane_cp_24

0x15f3,	// (0x0000339f) indicator_nsta_pane_cp_24_ParamLimits

0x15f3,	// (0x0000339f) indicator_nsta_pane_cp_24

0x2a51,	// (0x000047fd) heading_pane_g1

0x0001,

0xf8ba,	// (0x00011666) heading_pane_g

0x367e,	// (0x0000542a) grid_sct_catagory_button_pane

0x36b0,	// (0x0000545c) scroll_pane_cp5_ParamLimits

0x459d,	// (0x00006349) button_value_adjust_pane_cp5_ParamLimits

0x459d,	// (0x00006349) button_value_adjust_pane_cp5

0x46a3,	// (0x0000644f) form2_midp_time_pane_ParamLimits

0x6a11,	// (0x000087bd) cell_sct_catagory_button_pane_ParamLimits

0x6a11,	// (0x000087bd) cell_sct_catagory_button_pane

0x4955,	// (0x00006701) bg_button_pane_cp01_ParamLimits

0x4955,	// (0x00006701) bg_button_pane_cp01

0x4990,	// (0x0000673c) cell_sct_catagory_button_pane_g1

0xb64f,	// (0x0000d3fb) popup_tb_extension_window

0xce75,	// (0x0000ec21) aid_size_cell_ext_ParamLimits

0xce75,	// (0x0000ec21) aid_size_cell_ext

0xeb2a,	// (0x000108d6) bg_tb_trans_pane_cp1_ParamLimits

0xeb2a,	// (0x000108d6) bg_tb_trans_pane_cp1

0xce9b,	// (0x0000ec47) grid_tb_ext_pane_ParamLimits

0xce9b,	// (0x0000ec47) grid_tb_ext_pane

0xced8,	// (0x0000ec84) cell_tb_ext_pane_ParamLimits

0xced8,	// (0x0000ec84) cell_tb_ext_pane

0xcf00,	// (0x0000ecac) cell_tb_ext_pane_g1_ParamLimits

0xcf00,	// (0x0000ecac) cell_tb_ext_pane_g1

0x6aa5,	// (0x00008851) cell_tb_ext_pane_t1

0xe8a4,	// (0x00010650) list_highlight_pane_cp11_ParamLimits

0xe8a4,	// (0x00010650) list_highlight_pane_cp11

0x9f9d,	// (0x0000bd49) popup_uni_indicator_window_ParamLimits

0x9f9d,	// (0x0000bd49) popup_uni_indicator_window

0xee29,	// (0x00010bd5) bg_popup_sub_pane_cp14

0x6ac0,	// (0x0000886c) list_uniindi_pane

0x6acc,	// (0x00008878) uniindi_top_pane

0xe8a4,	// (0x00010650) bg_uniindi_top_pane

0x6aed,	// (0x00008899) uniindi_top_pane_g1

0x6b03,	// (0x000088af) uniindi_top_pane_g2

0x0003,

0xfd28,	// (0x00011ad4) uniindi_top_pane_g

0x6b2d,	// (0x000088d9) uniindi_top_pane_t1

0x6b59,	// (0x00008905) list_single_uniindi_pane_ParamLimits

0x6b59,	// (0x00008905) list_single_uniindi_pane

0x4990,	// (0x0000673c) bg_uniindi_top_pane_g1

0x6b6b,	// (0x00008917) list_single_uniindi_pane_g1

0x6b7e,	// (0x0000892a) list_single_uniindi_pane_t1

0xe491,	// (0x0001023d) control_bg_pane

0x6ba3,	// (0x0000894f) bg_sctrl_sk_pane_cp1

0x6bac,	// (0x00008958) bg_sctrl_sk_pane_cp2

0x6bb5,	// (0x00008961) control_bg_pane_g1

0x6bbe,	// (0x0000896a) control_bg_pane_g2

0x0001,

0xfd31,	// (0x00011add) control_bg_pane_g

0x4395,	// (0x00006141) cell_indicator_nsta_pane_g1_ParamLimits

0xc278,	// (0x0000e024) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa5,	// (0x00011851) cell_indicator_nsta_pane_g_ParamLimits

0x4730,	// (0x000064dc) form2_midp_time_pane_t1_ParamLimits

0x49d9,	// (0x00006785) main_idle_act4_pane_ParamLimits

0x49d9,	// (0x00006785) main_idle_act4_pane

0xb64f,	// (0x0000d3fb) popup_tb_extension_window_ParamLimits

0xcec0,	// (0x0000ec6c) tb_ext_find_pane_ParamLimits

0xcec0,	// (0x0000ec6c) tb_ext_find_pane

0x6bc7,	// (0x00008973) ai_gene_pane_1_cp1

0x0a0e,	// (0x000027ba) ai_gene_pane_2_cp1

0x6bcf,	// (0x0000897b) list_single_idle_plugin_calendar_pane

0x6bd8,	// (0x00008984) list_single_idle_plugin_notification_pane

0x6be1,	// (0x0000898d) list_single_idle_plugin_player_pane

0xcf1d,	// (0x0000ecc9) list_single_idle_plugin_shortcut_pane_ParamLimits

0xcf1d,	// (0x0000ecc9) list_single_idle_plugin_shortcut_pane

0xcf45,	// (0x0000ecf1) main_idle_act4_pane_t1

0xcf5d,	// (0x0000ed09) main_idle_act4_pane_t2

0x0001,

0xfd36,	// (0x00011ae2) main_idle_act4_pane_t

0xcf75,	// (0x0000ed21) middle_sk_idle_act4_pane_ParamLimits

0xcf75,	// (0x0000ed21) middle_sk_idle_act4_pane

0xcf91,	// (0x0000ed3d) popup_clock_digital_analogue_window_cp2

0xcfb8,	// (0x0000ed64) shortcut_wheel_idle_act4_pane_ParamLimits

0xcfb8,	// (0x0000ed64) shortcut_wheel_idle_act4_pane

0x4990,	// (0x0000673c) shortcut_wheel_idle_act4_pane_g1

0x4990,	// (0x0000673c) shortcut_wheel_idle_act4_pane_g2

0x4990,	// (0x0000673c) shortcut_wheel_idle_act4_pane_g3

0x4990,	// (0x0000673c) shortcut_wheel_idle_act4_pane_g4

0x4990,	// (0x0000673c) shortcut_wheel_idle_act4_pane_g5

0x6c74,	// (0x00008a20) shortcut_wheel_idle_act4_pane_g6

0x6c7c,	// (0x00008a28) shortcut_wheel_idle_act4_pane_g7

0x6c84,	// (0x00008a30) shortcut_wheel_idle_act4_pane_g8

0x6c8c,	// (0x00008a38) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3b,	// (0x00011ae7) shortcut_wheel_idle_act4_pane_g

0x4a90,	// (0x0000683c) middle_sk_idle_act4_pane_g1_ParamLimits

0x4a90,	// (0x0000683c) middle_sk_idle_act4_pane_g1

0xd035,	// (0x0000ede1) middle_sk_idle_act4_pane_g2_ParamLimits

0xd035,	// (0x0000ede1) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5e,	// (0x00011b0a) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5e,	// (0x00011b0a) middle_sk_idle_act4_pane_g

0xd04d,	// (0x0000edf9) middle_sk_idle_act4_pane_t1_ParamLimits

0xd04d,	// (0x0000edf9) middle_sk_idle_act4_pane_t1

0xd07c,	// (0x0000ee28) grid_ai_shortcut_pane_ParamLimits

0xd07c,	// (0x0000ee28) grid_ai_shortcut_pane

0xd099,	// (0x0000ee45) list_highlight_pane_cp16_ParamLimits

0xd099,	// (0x0000ee45) list_highlight_pane_cp16

0xd0a6,	// (0x0000ee52) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd0a6,	// (0x0000ee52) list_single_idle_plugin_shortcut_pane_g1

0xd0b2,	// (0x0000ee5e) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd0b2,	// (0x0000ee5e) list_single_idle_plugin_shortcut_pane_g2

0xd0d0,	// (0x0000ee7c) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd0d0,	// (0x0000ee7c) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd63,	// (0x00011b0f) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd63,	// (0x00011b0f) list_single_idle_plugin_shortcut_pane_g

0xd0e5,	// (0x0000ee91) cell_ai_shortcut_pane_ParamLimits

0xd0e5,	// (0x0000ee91) cell_ai_shortcut_pane

0xd0fb,	// (0x0000eea7) cell_ai_shortcut_pane_g1_ParamLimits

0xd0fb,	// (0x0000eea7) cell_ai_shortcut_pane_g1

0x6bc7,	// (0x00008973) ai_gene_pane_1_cp2

0x6dbd,	// (0x00008b69) ai_gene_pane_2_cp2

0x6dc5,	// (0x00008b71) list_highlight_pane_cp15

0x6dce,	// (0x00008b7a) list_single_idle_plugin_calendar_pane_g1

0x6dc5,	// (0x00008b71) list_highlight_pane_cp17

0x6dd6,	// (0x00008b82) list_single_idle_plugin_calendar_pane_g1_copy1

0x6dde,	// (0x00008b8a) list_single_idle_plugin_player_pane_g1

0x399d,	// (0x00005749) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6a,	// (0x00011b16) list_single_idle_plugin_player_pane_g

0x6de6,	// (0x00008b92) list_single_idle_plugin_player_pane_t1

0x6df4,	// (0x00008ba0) list_single_idle_plugin_player_pane_t2

0x6e02,	// (0x00008bae) list_single_idle_plugin_player_pane_t3

0x6e10,	// (0x00008bbc) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6f,	// (0x00011b1b) list_single_idle_plugin_player_pane_t

0x6e1e,	// (0x00008bca) wait_bar_pane_cp15

0x6e26,	// (0x00008bd2) grid_ai_notification_pane

0x399d,	// (0x00005749) list_single_idle_plugin_notification_pane_g1

0xd11d,	// (0x0000eec9) cell_ai_notification_pane_ParamLimits

0xd11d,	// (0x0000eec9) cell_ai_notification_pane

0x6e3c,	// (0x00008be8) cell_ai_notification_pane_g1

0x6e44,	// (0x00008bf0) cell_ai_notification_pane_t1

0xd12a,	// (0x0000eed6) tb_ext_find_button_pane

0xd132,	// (0x0000eede) tb_ext_find_pane_g1

0xd13a,	// (0x0000eee6) tb_ext_find_pane_t1

0x0010,	// (0x00001dbc) tb_ext_find_button_pane_g1

0x6e70,	// (0x00008c1c) tb_ext_find_button_pane_g2

0x0001,

0xfd78,	// (0x00011b24) tb_ext_find_button_pane_g

0xcf45,	// (0x0000ecf1) main_idle_act4_pane_t1_ParamLimits

0xcf5d,	// (0x0000ed09) main_idle_act4_pane_t2_ParamLimits

0xfd36,	// (0x00011ae2) main_idle_act4_pane_t_ParamLimits

0xcf91,	// (0x0000ed3d) popup_clock_digital_analogue_window_cp2_ParamLimits

0xcfa8,	// (0x0000ed54) sat_plugin_idle_act4_pane_ParamLimits

0xcfa8,	// (0x0000ed54) sat_plugin_idle_act4_pane

0xd148,	// (0x0000eef4) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd148,	// (0x0000eef4) sat_plugin_idle_act4_pane_t1

0xd160,	// (0x0000ef0c) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd160,	// (0x0000ef0c) sat_plugin_idle_act4_pane_t2

0xd178,	// (0x0000ef24) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd178,	// (0x0000ef24) sat_plugin_idle_act4_pane_t3

0xd190,	// (0x0000ef3c) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd190,	// (0x0000ef3c) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7d,	// (0x00011b29) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7d,	// (0x00011b29) sat_plugin_idle_act4_pane_t

0xe61e,	// (0x000103ca) popup_battery_window_ParamLimits

0xe61e,	// (0x000103ca) popup_battery_window

0xe8a4,	// (0x00010650) bg_popup_sub_pane_cp25_ParamLimits

0xe8a4,	// (0x00010650) bg_popup_sub_pane_cp25

0x6ec5,	// (0x00008c71) popup_battery_window_g1_ParamLimits

0x6ec5,	// (0x00008c71) popup_battery_window_g1

0x6ed1,	// (0x00008c7d) popup_battery_window_t1_ParamLimits

0x6ed1,	// (0x00008c7d) popup_battery_window_t1

0x6ee3,	// (0x00008c8f) popup_battery_window_t2_ParamLimits

0x6ee3,	// (0x00008c8f) popup_battery_window_t2

0x0001,

0xfd86,	// (0x00011b32) popup_battery_window_t_ParamLimits

0xfd86,	// (0x00011b32) popup_battery_window_t

0xacf5,	// (0x0000caa1) midp_canvas_pane_ParamLimits

0xad51,	// (0x0000cafd) midp_keypad_pane_ParamLimits

0xad51,	// (0x0000cafd) midp_keypad_pane

0x0e22,	// (0x00002bce) main_midp_pane_ParamLimits

0x43ff,	// (0x000061ab) signal_pane_g2_cp_ParamLimits

0xd1a8,	// (0x0000ef54) aid_size_cell_midp_keypad_ParamLimits

0xd1a8,	// (0x0000ef54) aid_size_cell_midp_keypad

0xd1c6,	// (0x0000ef72) midp_keyp_game_grid_pane_ParamLimits

0xd1c6,	// (0x0000ef72) midp_keyp_game_grid_pane

0xd1ed,	// (0x0000ef99) midp_keyp_rocker_pane_ParamLimits

0xd1ed,	// (0x0000ef99) midp_keyp_rocker_pane

0xd23c,	// (0x0000efe8) midp_keyp_sk_left_pane_ParamLimits

0xd23c,	// (0x0000efe8) midp_keyp_sk_left_pane

0xd292,	// (0x0000f03e) midp_keyp_sk_right_pane_ParamLimits

0xd292,	// (0x0000f03e) midp_keyp_sk_right_pane

0xe491,	// (0x0001023d) bg_button_pane_cp03

0xd2e8,	// (0x0000f094) midp_keyp_sk_left_pane_g1

0xe491,	// (0x0001023d) bg_button_pane_cp04

0xd2e8,	// (0x0000f094) midp_keyp_sk_right_pane_g1

0x4990,	// (0x0000673c) midp_keyp_rocker_pane_g1

0xd2f0,	// (0x0000f09c) keyp_game_cell_pane_ParamLimits

0xd2f0,	// (0x0000f09c) keyp_game_cell_pane

0xe491,	// (0x0001023d) bg_button_pane_cp02

0xd316,	// (0x0000f0c2) keyp_game_cell_pane_g1

0x9f34,	// (0x0000bce0) popup_fep_vkb2_window_ParamLimits

0x9f34,	// (0x0000bce0) popup_fep_vkb2_window

0xd31f,	// (0x0000f0cb) aid_size_cell_vkb2_ParamLimits

0xd31f,	// (0x0000f0cb) aid_size_cell_vkb2

0xd355,	// (0x0000f101) popup_fep_vkb2_window_g1_ParamLimits

0xd355,	// (0x0000f101) popup_fep_vkb2_window_g1

0xd3a5,	// (0x0000f151) vkb2_area_bottom_pane_ParamLimits

0xd3a5,	// (0x0000f151) vkb2_area_bottom_pane

0xd401,	// (0x0000f1ad) vkb2_area_keypad_pane_ParamLimits

0xd401,	// (0x0000f1ad) vkb2_area_keypad_pane

0xd44f,	// (0x0000f1fb) vkb2_area_top_pane_ParamLimits

0xd44f,	// (0x0000f1fb) vkb2_area_top_pane

0xd4d5,	// (0x0000f281) vkb2_top_entry_pane_ParamLimits

0xd4d5,	// (0x0000f281) vkb2_top_entry_pane

0xd502,	// (0x0000f2ae) vkb2_top_grid_left_pane_ParamLimits

0xd502,	// (0x0000f2ae) vkb2_top_grid_left_pane

0xd522,	// (0x0000f2ce) vkb2_top_grid_right_pane_ParamLimits

0xd522,	// (0x0000f2ce) vkb2_top_grid_right_pane

0x7269,	// (0x00009015) vkb2_cell_keypad_pane_ParamLimits

0x7269,	// (0x00009015) vkb2_cell_keypad_pane

0xd568,	// (0x0000f314) vkb2_area_bottom_grid_pane_ParamLimits

0xd568,	// (0x0000f314) vkb2_area_bottom_grid_pane

0xd592,	// (0x0000f33e) vkb2_area_bottom_pane_g1_ParamLimits

0xd592,	// (0x0000f33e) vkb2_area_bottom_pane_g1

0xd5b8,	// (0x0000f364) vkb2_area_bottom_pane_g2_ParamLimits

0xd5b8,	// (0x0000f364) vkb2_area_bottom_pane_g2

0xd5e9,	// (0x0000f395) vkb2_area_bottom_pane_g3_ParamLimits

0xd5e9,	// (0x0000f395) vkb2_area_bottom_pane_g3

0x0002,

0xfd8b,	// (0x00011b37) vkb2_area_bottom_pane_g_ParamLimits

0xfd8b,	// (0x00011b37) vkb2_area_bottom_pane_g

0x7413,	// (0x000091bf) vkb2_top_cell_left_pane_ParamLimits

0x7413,	// (0x000091bf) vkb2_top_cell_left_pane

0xd653,	// (0x0000f3ff) vkb2_top_entry_pane_g1_ParamLimits

0xd653,	// (0x0000f3ff) vkb2_top_entry_pane_g1

0xd661,	// (0x0000f40d) vkb2_top_entry_pane_t1_ParamLimits

0xd661,	// (0x0000f40d) vkb2_top_entry_pane_t1

0x747b,	// (0x00009227) vkb2_top_entry_pane_t2_ParamLimits

0x747b,	// (0x00009227) vkb2_top_entry_pane_t2

0x74ad,	// (0x00009259) vkb2_top_entry_pane_t3_ParamLimits

0x74ad,	// (0x00009259) vkb2_top_entry_pane_t3

0x0002,

0xfd92,	// (0x00011b3e) vkb2_top_entry_pane_t_ParamLimits

0xfd92,	// (0x00011b3e) vkb2_top_entry_pane_t

0xd69a,	// (0x0000f446) vkb2_top_grid_right_pane_g1_ParamLimits

0xd69a,	// (0x0000f446) vkb2_top_grid_right_pane_g1

0x7514,	// (0x000092c0) vkb2_top_grid_right_pane_g2_ParamLimits

0x7514,	// (0x000092c0) vkb2_top_grid_right_pane_g2

0x752c,	// (0x000092d8) vkb2_top_grid_right_pane_g3_ParamLimits

0x752c,	// (0x000092d8) vkb2_top_grid_right_pane_g3

0xd6b0,	// (0x0000f45c) vkb2_top_grid_right_pane_g4_ParamLimits

0xd6b0,	// (0x0000f45c) vkb2_top_grid_right_pane_g4

0x0003,

0xfd99,	// (0x00011b45) vkb2_top_grid_right_pane_g_ParamLimits

0xfd99,	// (0x00011b45) vkb2_top_grid_right_pane_g

0x755a,	// (0x00009306) vkb2_top_cell_left_pane_g1

0x7571,	// (0x0000931d) vkb2_cell_keypad_pane_g1_ParamLimits

0x7571,	// (0x0000931d) vkb2_cell_keypad_pane_g1

0x757f,	// (0x0000932b) vkb2_cell_keypad_pane_t1_ParamLimits

0x757f,	// (0x0000932b) vkb2_cell_keypad_pane_t1

0x7596,	// (0x00009342) vkb2_cell_bottom_grid_pane_ParamLimits

0x7596,	// (0x00009342) vkb2_cell_bottom_grid_pane

0x75cf,	// (0x0000937b) vkb2_cell_bottom_grid_pane_g1

0xcfd9,	// (0x0000ed85) aid_call2_pane_cp02

0xcfe1,	// (0x0000ed8d) aid_call_pane_cp02

0xcfe9,	// (0x0000ed95) clock_digital_number_pane_cp10

0xcff1,	// (0x0000ed9d) clock_digital_number_pane_cp11

0xcff9,	// (0x0000eda5) clock_digital_number_pane_cp12

0xd001,	// (0x0000edad) clock_digital_number_pane_cp13

0xd009,	// (0x0000edb5) clock_digital_separator_pane_cp10

0x0010,	// (0x00001dbc) popup_clock_digital_analogue_window_cp2_g1

0x0010,	// (0x00001dbc) popup_clock_digital_analogue_window_cp2_g2

0xd011,	// (0x0000edbd) popup_clock_digital_analogue_window_cp2_g3

0x0010,	// (0x00001dbc) popup_clock_digital_analogue_window_cp2_g4

0xd011,	// (0x0000edbd) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4e,	// (0x00011afa) popup_clock_digital_analogue_window_cp2_g

0xd019,	// (0x0000edc5) popup_clock_digital_analogue_window_cp2_t1

0xd027,	// (0x0000edd3) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd59,	// (0x00011b05) popup_clock_digital_analogue_window_cp2_t

0x4990,	// (0x0000673c) clock_digital_number_pane_cp10_g1

0x4990,	// (0x0000673c) clock_digital_number_pane_cp10_g2

0x0001,

0xfb41,	// (0x000118ed) clock_digital_number_pane_cp10_g

0x4990,	// (0x0000673c) clock_digital_separator_pane_cp10_g1

0x4990,	// (0x0000673c) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb41,	// (0x000118ed) clock_digital_separator_pane_cp10_g

0x6b0f,	// (0x000088bb) uniindi_top_pane_g3

0x6b20,	// (0x000088cc) uniindi_top_pane_g4

0x72f4,	// (0x000090a0) vkb2_row_keypad_pane_ParamLimits

0x72f4,	// (0x000090a0) vkb2_row_keypad_pane

0x75eb,	// (0x00009397) vkb2_cell_t_keypad_pane_ParamLimits

0x75eb,	// (0x00009397) vkb2_cell_t_keypad_pane

0x75fb,	// (0x000093a7) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x75fb,	// (0x000093a7) vkb2_cell_t_keypad_pane_cp08

0x7610,	// (0x000093bc) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7610,	// (0x000093bc) vkb2_cell_t_keypad_pane_cp09

0x7624,	// (0x000093d0) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7624,	// (0x000093d0) vkb2_cell_t_keypad_pane_cp01

0x7635,	// (0x000093e1) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7635,	// (0x000093e1) vkb2_cell_t_keypad_pane_cp02

0x7646,	// (0x000093f2) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7646,	// (0x000093f2) vkb2_cell_t_keypad_pane_cp03

0x7657,	// (0x00009403) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7657,	// (0x00009403) vkb2_cell_t_keypad_pane_cp04

0x7668,	// (0x00009414) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7668,	// (0x00009414) vkb2_cell_t_keypad_pane_cp05

0x7679,	// (0x00009425) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7679,	// (0x00009425) vkb2_cell_t_keypad_pane_cp06

0x768c,	// (0x00009438) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x768c,	// (0x00009438) vkb2_cell_t_keypad_pane_cp07

0x76a1,	// (0x0000944d) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x76a1,	// (0x0000944d) vkb2_cell_t_keypad_pane_cp10

0x4e1d,	// (0x00006bc9) vkb2_cell_t_keypad_pane_g1

0x76b6,	// (0x00009462) vkb2_cell_t_keypad_pane_t1

0xe491,	// (0x0001023d) popup_grid_graphic2_window

0xd6c6,	// (0x0000f472) aid_size_cell_graphic2_ParamLimits

0xd6c6,	// (0x0000f472) aid_size_cell_graphic2

0xd704,	// (0x0000f4b0) bg_popup_window_pane_cp21_ParamLimits

0xd704,	// (0x0000f4b0) bg_popup_window_pane_cp21

0xd712,	// (0x0000f4be) graphic2_pages_pane_ParamLimits

0xd712,	// (0x0000f4be) graphic2_pages_pane

0xd76a,	// (0x0000f516) grid_graphic2_control_pane_ParamLimits

0xd76a,	// (0x0000f516) grid_graphic2_control_pane

0xd7b2,	// (0x0000f55e) grid_graphic2_pane_ParamLimits

0xd7b2,	// (0x0000f55e) grid_graphic2_pane

0xd83d,	// (0x0000f5e9) cell_graphic2_pane

0xe491,	// (0x0001023d) main_comp_mode_pane

0x6240,	// (0x00007fec) list_ai3_gene_pane_ParamLimits

0xccac,	// (0x0000ea58) bg_popup_window_pane_cp19_ParamLimits

0x667b,	// (0x00008427) bg_touch_area_indi_pane_ParamLimits

0x667b,	// (0x00008427) bg_touch_area_indi_pane

0x6691,	// (0x0000843d) bg_touch_area_indi_pane_cp01_ParamLimits

0x6691,	// (0x0000843d) bg_touch_area_indi_pane_cp01

0x66a7,	// (0x00008453) bg_touch_area_indi_pane_cp02_ParamLimits

0x66a7,	// (0x00008453) bg_touch_area_indi_pane_cp02

0x66c1,	// (0x0000846d) bg_touch_area_indi_pane_cp03_ParamLimits

0x66c1,	// (0x0000846d) bg_touch_area_indi_pane_cp03

0x66db,	// (0x00008487) popup_slider_window_g1_ParamLimits

0x66f7,	// (0x000084a3) popup_slider_window_g2_ParamLimits

0x6713,	// (0x000084bf) popup_slider_window_g3_ParamLimits

0xfce3,	// (0x00011a8f) popup_slider_window_g_ParamLimits

0x6779,	// (0x00008525) popup_slider_window_t1_ParamLimits

0x67ed,	// (0x00008599) small_volume_slider_vertical_pane_ParamLimits

0xd83d,	// (0x0000f5e9) cell_graphic2_pane_ParamLimits

0xd8a0,	// (0x0000f64c) bg_button_pane_cp10_ParamLimits

0xd8a0,	// (0x0000f64c) bg_button_pane_cp10

0xd8b3,	// (0x0000f65f) bg_button_pane_cp11_ParamLimits

0xd8b3,	// (0x0000f65f) bg_button_pane_cp11

0xd8c6,	// (0x0000f672) graphic2_pages_pane_g1_ParamLimits

0xd8c6,	// (0x0000f672) graphic2_pages_pane_g1

0xd8e1,	// (0x0000f68d) graphic2_pages_pane_g2_ParamLimits

0xd8e1,	// (0x0000f68d) graphic2_pages_pane_g2

0x0001,

0xfda7,	// (0x00011b53) graphic2_pages_pane_g_ParamLimits

0xfda7,	// (0x00011b53) graphic2_pages_pane_g

0xd8f9,	// (0x0000f6a5) graphic2_pages_pane_t1_ParamLimits

0xd8f9,	// (0x0000f6a5) graphic2_pages_pane_t1

0xd911,	// (0x0000f6bd) cell_graphic2_control_pane_ParamLimits

0xd911,	// (0x0000f6bd) cell_graphic2_control_pane

0xd945,	// (0x0000f6f1) cell_graphic2_pane_g1_ParamLimits

0xd945,	// (0x0000f6f1) cell_graphic2_pane_g1

0x4c3f,	// (0x000069eb) cell_graphic2_pane_g2_ParamLimits

0x4c3f,	// (0x000069eb) cell_graphic2_pane_g2

0xd952,	// (0x0000f6fe) cell_graphic2_pane_g3_ParamLimits

0xd952,	// (0x0000f6fe) cell_graphic2_pane_g3

0x4c4c,	// (0x000069f8) cell_graphic2_pane_g4_ParamLimits

0x4c4c,	// (0x000069f8) cell_graphic2_pane_g4

0xd95f,	// (0x0000f70b) cell_graphic2_pane_g5_ParamLimits

0xd95f,	// (0x0000f70b) cell_graphic2_pane_g5

0x0004,

0xfdac,	// (0x00011b58) cell_graphic2_pane_g_ParamLimits

0xfdac,	// (0x00011b58) cell_graphic2_pane_g

0xd97f,	// (0x0000f72b) cell_graphic2_pane_t1_ParamLimits

0xd97f,	// (0x0000f72b) cell_graphic2_pane_t1

0x2a45,	// (0x000047f1) grid_highlight_pane_cp11_ParamLimits

0x2a45,	// (0x000047f1) grid_highlight_pane_cp11

0xe8a4,	// (0x00010650) bg_button_pane_cp05

0xd9c8,	// (0x0000f774) cell_graphic2_control_pane_g1

0x4990,	// (0x0000673c) bg_touch_area_indi_pane_g1

0x799e,	// (0x0000974a) aid_cmod_rocker_key_size

0x79a8,	// (0x00009754) aid_cmode_itu_key_size

0x79b2,	// (0x0000975e) main_cmode_video_pane

0x79bc,	// (0x00009768) main_comp_mode_itu_pane

0x79c8,	// (0x00009774) main_comp_mode_rocker_pane

0x79d4,	// (0x00009780) cell_cmode_rocker_pane_ParamLimits

0x79d4,	// (0x00009780) cell_cmode_rocker_pane

0x79e8,	// (0x00009794) cell_cmode_itu_pane_ParamLimits

0x79e8,	// (0x00009794) cell_cmode_itu_pane

0xee29,	// (0x00010bd5) bg_button_pane_cp06_ParamLimits

0xee29,	// (0x00010bd5) bg_button_pane_cp06

0x4e1d,	// (0x00006bc9) cell_cmode_rocker_pane_g1_ParamLimits

0x4e1d,	// (0x00006bc9) cell_cmode_rocker_pane_g1

0x6967,	// (0x00008713) cell_cmode_rocker_pane_g2_ParamLimits

0x6967,	// (0x00008713) cell_cmode_rocker_pane_g2

0x0001,

0xfdbc,	// (0x00011b68) cell_cmode_rocker_pane_g_ParamLimits

0xfdbc,	// (0x00011b68) cell_cmode_rocker_pane_g

0xe491,	// (0x0001023d) bg_button_pane_cp07

0x79ff,	// (0x000097ab) cell_cmode_itu_pane_g1

0x7a08,	// (0x000097b4) cell_cmode_itu_pane_t1

0x7a16,	// (0x000097c2) cell_cmode_itu_pane_t2

0x0001,

0xfdc1,	// (0x00011b6d) cell_cmode_itu_pane_t

0x6b93,	// (0x0000893f) aid_touch_ctrl_left

0x6b9b,	// (0x00008947) aid_touch_ctrl_right

0xe491,	// (0x0001023d) compa_mode_pane

0xd9f0,	// (0x0000f79c) aid_cmod_rocker_key_size_cp

0xd9fa,	// (0x0000f7a6) aid_cmode_itu_key_size_cp

0x7a38,	// (0x000097e4) compa_mode_pane_g1

0x7a40,	// (0x000097ec) compa_mode_pane_g2

0x7a48,	// (0x000097f4) compa_mode_pane_g3

0x0002,

0xfdc6,	// (0x00011b72) compa_mode_pane_g

0xda04,	// (0x0000f7b0) main_comp_mode_itu_pane_cp

0xda0c,	// (0x0000f7b8) main_comp_mode_rocker_pane_cp

0xda14,	// (0x0000f7c0) cell_cmode_itu_pane_cp_ParamLimits

0xda14,	// (0x0000f7c0) cell_cmode_itu_pane_cp

0xda29,	// (0x0000f7d5) cell_cmode_rocker_pane_cp_ParamLimits

0xda29,	// (0x0000f7d5) cell_cmode_rocker_pane_cp

0xee29,	// (0x00010bd5) bg_button_pane_cp06_cp_ParamLimits

0xee29,	// (0x00010bd5) bg_button_pane_cp06_cp

0x4e1d,	// (0x00006bc9) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4e1d,	// (0x00006bc9) cell_cmode_rocker_pane_g1_cp

0x4990,	// (0x0000673c) cell_cmode_rocker_pane_g2_cp

0xe491,	// (0x0001023d) bg_button_pane_cp07_cp

0xda3b,	// (0x0000f7e7) cell_cmode_itu_pane_g1_cp

0xda44,	// (0x0000f7f0) cell_cmode_itu_pane_t1_cp

0xda44,	// (0x0000f7f0) cell_cmode_itu_pane_t2_cp

0xc05b,	// (0x0000de07) settings_code_pane_cp2

0xe6ce,	// (0x0001047a) bg_popup_window_pane_cp3_ParamLimits

0xeab8,	// (0x00010864) heading_pane_cp3_ParamLimits

0xeac4,	// (0x00010870) listscroll_popup_graphic_pane_ParamLimits

0x49e7,	// (0x00006793) fep_hwr_aid_pane_ParamLimits

0x6868,	// (0x00008614) aid_touch_sctrl_top_ParamLimits

0x6875,	// (0x00008621) sctrl_sk_top_pane_g1_ParamLimits

0x4e1d,	// (0x00006bc9) sctrl_sk_top_pane_g2_ParamLimits

0xfcfc,	// (0x00011aa8) sctrl_sk_top_pane_g_ParamLimits

0x6882,	// (0x0000862e) sctrl_sk_top_pane_t1_ParamLimits

0x6868,	// (0x00008614) aid_touch_sctrl_bottom_ParamLimits

0x6882,	// (0x0000862e) sctrl_sk_bottom_pane_t1_ParamLimits

0x6ad9,	// (0x00008885) aid_area_touch_clock

0xd497,	// (0x0000f243) aid_vkb2_area_top_pane_cell_ParamLimits

0xd497,	// (0x0000f243) aid_vkb2_area_top_pane_cell

0xd542,	// (0x0000f2ee) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd542,	// (0x0000f2ee) aid_vkb2_area_bottom_pane_cell

0x7433,	// (0x000091df) popup_char_count_window

0x7a9e,	// (0x0000984a) popup_char_count_window_g1

0x7aa7,	// (0x00009853) popup_char_count_window_g2

0x7ab0,	// (0x0000985c) popup_char_count_window_g3

0x0002,

0xfdcd,	// (0x00011b79) popup_char_count_window_g

0x7ab9,	// (0x00009865) popup_char_count_window_t1

0x7085,	// (0x00008e31) popup_fep_char_preview_window_ParamLimits

0x7085,	// (0x00008e31) popup_fep_char_preview_window

0xd4b7,	// (0x0000f263) vkb2_top_candi_pane_ParamLimits

0xd4b7,	// (0x0000f263) vkb2_top_candi_pane

0xda52,	// (0x0000f7fe) cell_vkb2_top_candi_pane_ParamLimits

0xda52,	// (0x0000f7fe) cell_vkb2_top_candi_pane

0x2273,	// (0x0000401f) bg_popup_fep_char_preview_window_ParamLimits

0x2273,	// (0x0000401f) bg_popup_fep_char_preview_window

0x7b18,	// (0x000098c4) popup_fep_char_preview_window_t1_ParamLimits

0x7b18,	// (0x000098c4) popup_fep_char_preview_window_t1

0x7b52,	// (0x000098fe) bg_popup_fep_char_preview_window_g1

0x7b5a,	// (0x00009906) bg_popup_fep_char_preview_window_g2

0x7b62,	// (0x0000990e) bg_popup_fep_char_preview_window_g3

0x7b6a,	// (0x00009916) bg_popup_fep_char_preview_window_g4

0x7b72,	// (0x0000991e) bg_popup_fep_char_preview_window_g5

0x7b7a,	// (0x00009926) bg_popup_fep_char_preview_window_g6

0x7b82,	// (0x0000992e) bg_popup_fep_char_preview_window_g7

0x7b8a,	// (0x00009936) bg_popup_fep_char_preview_window_g8

0x7b92,	// (0x0000993e) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd4,	// (0x00011b80) bg_popup_fep_char_preview_window_g

0x4e1d,	// (0x00006bc9) cell_vkb2_top_candi_pane_g1_ParamLimits

0x4e1d,	// (0x00006bc9) cell_vkb2_top_candi_pane_g1

0x51b2,	// (0x00006f5e) cell_vkb2_top_candi_pane_g2_ParamLimits

0x51b2,	// (0x00006f5e) cell_vkb2_top_candi_pane_g2

0x51d3,	// (0x00006f7f) cell_vkb2_top_candi_pane_g3_ParamLimits

0x51d3,	// (0x00006f7f) cell_vkb2_top_candi_pane_g3

0x7b9a,	// (0x00009946) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7b9a,	// (0x00009946) cell_vkb2_top_candi_pane_g4

0x7bbb,	// (0x00009967) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7bbb,	// (0x00009967) cell_vkb2_top_candi_pane_g5

0x6967,	// (0x00008713) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6967,	// (0x00008713) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde7,	// (0x00011b93) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde7,	// (0x00011b93) cell_vkb2_top_candi_pane_g

0x7bdc,	// (0x00009988) cell_vkb2_top_candi_pane_t1

0x3189,	// (0x00004f35) aid_size_touch_slider_mark_ParamLimits

0x3189,	// (0x00004f35) aid_size_touch_slider_mark

0xd74e,	// (0x0000f4fa) grid_graphic2_catg_pane_ParamLimits

0xd74e,	// (0x0000f4fa) grid_graphic2_catg_pane

0xd80c,	// (0x0000f5b8) popup_grid_graphic2_window_t1_ParamLimits

0xd80c,	// (0x0000f5b8) popup_grid_graphic2_window_t1

0xd822,	// (0x0000f5ce) popup_grid_graphic2_window_t2_ParamLimits

0xd822,	// (0x0000f5ce) popup_grid_graphic2_window_t2

0x0001,

0xfda2,	// (0x00011b4e) popup_grid_graphic2_window_t_ParamLimits

0xfda2,	// (0x00011b4e) popup_grid_graphic2_window_t

0xe8a4,	// (0x00010650) bg_button_pane_cp05_ParamLimits

0xd9c8,	// (0x0000f774) cell_graphic2_control_pane_g1_ParamLimits

0xdabc,	// (0x0000f868) cell_graphic2_catg_pane_ParamLimits

0xdabc,	// (0x0000f868) cell_graphic2_catg_pane

0xe491,	// (0x0001023d) bg_button_pane_cp12

0xdace,	// (0x0000f87a) cell_graphic2_catg_pane_g1

0x6aa5,	// (0x00008851) cell_tb_ext_pane_t1_ParamLimits

0x74d1,	// (0x0000927d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x74d1,	// (0x0000927d) vkb2_top_cell_right_narrow_pane

0x74e9,	// (0x00009295) vkb2_top_cell_right_wide_pane_ParamLimits

0x74e9,	// (0x00009295) vkb2_top_cell_right_wide_pane

0x49d9,	// (0x00006785) bg_vkb2_func_pane_ParamLimits

0x49d9,	// (0x00006785) bg_vkb2_func_pane

0x755a,	// (0x00009306) vkb2_top_cell_left_pane_g1_ParamLimits

0x49d9,	// (0x00006785) bg_vkb2_fuc_pane_cp03_ParamLimits

0x49d9,	// (0x00006785) bg_vkb2_fuc_pane_cp03

0x75cf,	// (0x0000937b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1a39,	// (0x000037e5) bg_vkb2_func_pane_g1

0x1a41,	// (0x000037ed) bg_vkb2_func_pane_g2

0x1a51,	// (0x000037fd) bg_vkb2_func_pane_g3

0x1a49,	// (0x000037f5) bg_vkb2_func_pane_g4

0x1a59,	// (0x00003805) bg_vkb2_func_pane_g5

0x1a61,	// (0x0000380d) bg_vkb2_func_pane_g6

0x1a69,	// (0x00003815) bg_vkb2_func_pane_g7

0x1a71,	// (0x0000381d) bg_vkb2_func_pane_g8

0x1a31,	// (0x000037dd) bg_vkb2_func_pane_g9

0x0008,

0xfdf4,	// (0x00011ba0) bg_vkb2_func_pane_g

0x49d9,	// (0x00006785) bg_vkb2_fuc_pane_cp01_ParamLimits

0x49d9,	// (0x00006785) bg_vkb2_fuc_pane_cp01

0x755a,	// (0x00009306) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x755a,	// (0x00009306) vkb2_top_cell_right_wide_pane_g1

0x49d9,	// (0x00006785) bg_vkb2_fuc_pane_cp02_ParamLimits

0x49d9,	// (0x00006785) bg_vkb2_fuc_pane_cp02

0x75cf,	// (0x0000937b) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x75cf,	// (0x0000937b) vkb2_top_cell_right_narrow_pane_g1

0xcbee,	// (0x0000e99a) aid_touch_area_decrease_ParamLimits

0xcbee,	// (0x0000e99a) aid_touch_area_decrease

0xcc28,	// (0x0000e9d4) aid_touch_area_increase_ParamLimits

0xcc28,	// (0x0000e9d4) aid_touch_area_increase

0xcc50,	// (0x0000e9fc) aid_touch_area_mute_ParamLimits

0xcc50,	// (0x0000e9fc) aid_touch_area_mute

0xcc78,	// (0x0000ea24) aid_touch_area_slider_ParamLimits

0xcc78,	// (0x0000ea24) aid_touch_area_slider

0xccb8,	// (0x0000ea64) popup_slider_window_g4_ParamLimits

0xccb8,	// (0x0000ea64) popup_slider_window_g4

0xcce0,	// (0x0000ea8c) popup_slider_window_g5_ParamLimits

0xcce0,	// (0x0000ea8c) popup_slider_window_g5

0xcd14,	// (0x0000eac0) popup_slider_window_g6_ParamLimits

0xcd14,	// (0x0000eac0) popup_slider_window_g6

0x67a7,	// (0x00008553) popup_slider_window_t2_ParamLimits

0x67a7,	// (0x00008553) popup_slider_window_t2

0x0001,

0xfcf0,	// (0x00011a9c) popup_slider_window_t_ParamLimits

0xfcf0,	// (0x00011a9c) popup_slider_window_t

0xcd30,	// (0x0000eadc) slider_pane_ParamLimits

0xcd30,	// (0x0000eadc) slider_pane

0x7c15,	// (0x000099c1) slider_pane_g1_ParamLimits

0x7c15,	// (0x000099c1) slider_pane_g1

0x7c29,	// (0x000099d5) slider_pane_g2_ParamLimits

0x7c29,	// (0x000099d5) slider_pane_g2

0x7c3f,	// (0x000099eb) slider_pane_g3_ParamLimits

0x7c3f,	// (0x000099eb) slider_pane_g3

0x0003,

0xfe07,	// (0x00011bb3) slider_pane_g_ParamLimits

0xfe07,	// (0x00011bb3) slider_pane_g

0xb69b,	// (0x0000d447) popup_tb_float_extension_window_ParamLimits

0xb69b,	// (0x0000d447) popup_tb_float_extension_window

0x7c6b,	// (0x00009a17) aid_size_cell_tb_float_ext

0xe491,	// (0x0001023d) bg_popup_sub_window_cp28

0x7c77,	// (0x00009a23) grid_tb_float_ext_pane

0x7c83,	// (0x00009a2f) cell_tb_float_ext_pane_ParamLimits

0x7c83,	// (0x00009a2f) cell_tb_float_ext_pane

0x7c9f,	// (0x00009a4b) cell_tb_float_ext_pane_g1

0x7ca8,	// (0x00009a54) grid_highlight_pane_cp12

0xc46b,	// (0x0000e217) cell_last_hwr_side_pane_ParamLimits

0xc46b,	// (0x0000e217) cell_last_hwr_side_pane

0x4990,	// (0x0000673c) cell_last_hwr_side_pane_g1

0x7cb1,	// (0x00009a5d) cell_last_hwr_side_pane_g2

0x0001,

0xfe10,	// (0x00011bbc) cell_last_hwr_side_pane_g

0xd61e,	// (0x0000f3ca) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd61e,	// (0x0000f3ca) vkb2_area_bottom_space_btn_pane

0x4e1d,	// (0x00006bc9) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x76b6,	// (0x00009462) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7bdc,	// (0x00009988) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7cba,	// (0x00009a66) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7cba,	// (0x00009a66) vkb2_area_bottom_space_btn_pane_g1

0x7cf4,	// (0x00009aa0) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7cf4,	// (0x00009aa0) vkb2_area_bottom_space_btn_pane_g2

0x7d2a,	// (0x00009ad6) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7d2a,	// (0x00009ad6) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe15,	// (0x00011bc1) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe15,	// (0x00011bc1) vkb2_area_bottom_space_btn_pane_g

0x4a9e,	// (0x0000684a) cel_fep_hwr_func_pane_ParamLimits

0x4a9e,	// (0x0000684a) cel_fep_hwr_func_pane

0xc440,	// (0x0000e1ec) cell_hwr_side_button_pane_ParamLimits

0xc440,	// (0x0000e1ec) cell_hwr_side_button_pane

0x6ad9,	// (0x00008885) aid_area_touch_clock_ParamLimits

0xe8a4,	// (0x00010650) bg_uniindi_top_pane_ParamLimits

0x6aed,	// (0x00008899) uniindi_top_pane_g1_ParamLimits

0x6b03,	// (0x000088af) uniindi_top_pane_g2_ParamLimits

0x6b0f,	// (0x000088bb) uniindi_top_pane_g3_ParamLimits

0x6b20,	// (0x000088cc) uniindi_top_pane_g4_ParamLimits

0xfd28,	// (0x00011ad4) uniindi_top_pane_g_ParamLimits

0x6b2d,	// (0x000088d9) uniindi_top_pane_t1_ParamLimits

0xe8a4,	// (0x00010650) bg_vkb2_func_pane_cp01_ParamLimits

0xe8a4,	// (0x00010650) bg_vkb2_func_pane_cp01

0x7d74,	// (0x00009b20) cel_fep_hwr_func_pane_g1_ParamLimits

0x7d74,	// (0x00009b20) cel_fep_hwr_func_pane_g1

0xe8a4,	// (0x00010650) bg_vkb2_func_pane_cp02_ParamLimits

0xe8a4,	// (0x00010650) bg_vkb2_func_pane_cp02

0x7d74,	// (0x00009b20) cell_hwr_side_button_pane_g1_ParamLimits

0x7d74,	// (0x00009b20) cell_hwr_side_button_pane_g1

0x1810,	// (0x000035bc) status_pane_g4_ParamLimits

0x1810,	// (0x000035bc) status_pane_g4

0x182a,	// (0x000035d6) status_pane_t1

0x4743,	// (0x000064ef) form2_midp_gauge_slider_cont_pane

0x474b,	// (0x000064f7) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc371,	// (0x0000e11d) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc383,	// (0x0000e12f) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf4,	// (0x000118a0) form2_midp_gauge_slider_pane_t_ParamLimits

0x4781,	// (0x0000652d) form2_midp_slider_pane_ParamLimits

0x7045,	// (0x00008df1) aid_size_cell_func_vkb2_ParamLimits

0x7045,	// (0x00008df1) aid_size_cell_func_vkb2

0x7c57,	// (0x00009a03) slider_pane_g4_ParamLimits

0x7c57,	// (0x00009a03) slider_pane_g4

0xdad7,	// (0x0000f883) form2_midp_gauge_slider_pane_t2_cp01

0xdae5,	// (0x0000f891) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xdae5,	// (0x0000f891) form2_midp_gauge_slider_pane_t3_cp01

0x7dad,	// (0x00009b59) form2_midp_slider_pane_cp01

0xe491,	// (0x0001023d) navi_smil_pane

0x7de1,	// (0x00009b8d) navi_smil_pane_g1

0x7de9,	// (0x00009b95) navi_smil_pane_t1

0x7db6,	// (0x00009b62) form2_midp_slider_pane_g1

0x7dbf,	// (0x00009b6b) form2_midp_slider_pane_g2

0x7dc7,	// (0x00009b73) form2_midp_slider_pane_g3

0x7db6,	// (0x00009b62) form2_midp_slider_pane_g4

0xdb02,	// (0x0000f8ae) form2_midp_slider_pane_g5

0x0004,

0xfe1e,	// (0x00011bca) form2_midp_slider_pane_g

0x7d64,	// (0x00009b10) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7d64,	// (0x00009b10) vkb2_area_bottom_space_btn_pane_g4

0xb882,	// (0x0000d62e) lc0_navi_pane_ParamLimits

0xb882,	// (0x0000d62e) lc0_navi_pane

0xb8f2,	// (0x0000d69e) lc0_stat_indi_pane_ParamLimits

0xb8f2,	// (0x0000d69e) lc0_stat_indi_pane

0xb907,	// (0x0000d6b3) ls0_title_pane_ParamLimits

0xb907,	// (0x0000d6b3) ls0_title_pane

0xee29,	// (0x00010bd5) bg_popup_sub_pane_cp14_ParamLimits

0x6ac0,	// (0x0000886c) list_uniindi_pane_ParamLimits

0x6acc,	// (0x00008878) uniindi_top_pane_ParamLimits

0x6b6b,	// (0x00008917) list_single_uniindi_pane_g1_ParamLimits

0x6b7e,	// (0x0000892a) list_single_uniindi_pane_t1_ParamLimits

0xdb0b,	// (0x0000f8b7) lc0_stat_clock_pane_ParamLimits

0xdb0b,	// (0x0000f8b7) lc0_stat_clock_pane

0xdb18,	// (0x0000f8c4) lc0_stat_indi_pane_g1_ParamLimits

0xdb18,	// (0x0000f8c4) lc0_stat_indi_pane_g1

0xdb25,	// (0x0000f8d1) lc0_stat_indi_pane_g2_ParamLimits

0xdb25,	// (0x0000f8d1) lc0_stat_indi_pane_g2

0x0001,

0xfe29,	// (0x00011bd5) lc0_stat_indi_pane_g_ParamLimits

0xfe29,	// (0x00011bd5) lc0_stat_indi_pane_g

0xdb32,	// (0x0000f8de) lc0_uni_indicator_pane_ParamLimits

0xdb32,	// (0x0000f8de) lc0_uni_indicator_pane

0xdb3f,	// (0x0000f8eb) ls0_title_pane_g1_ParamLimits

0xdb3f,	// (0x0000f8eb) ls0_title_pane_g1

0xdb53,	// (0x0000f8ff) ls0_title_pane_t1_ParamLimits

0xdb53,	// (0x0000f8ff) ls0_title_pane_t1

0xdb81,	// (0x0000f92d) lc0_uni_indicator_pane_g1_ParamLimits

0xdb81,	// (0x0000f92d) lc0_uni_indicator_pane_g1

0x7e88,	// (0x00009c34) lc0_stat_clock_pane_t1

0xe491,	// (0x0001023d) main_ai5_pane

0x7e96,	// (0x00009c42) ai5_sk_pane_ParamLimits

0x7e96,	// (0x00009c42) ai5_sk_pane

0xdba0,	// (0x0000f94c) cell_ai5_widget_pane_ParamLimits

0xdba0,	// (0x0000f94c) cell_ai5_widget_pane

0xdefa,	// (0x0000fca6) aid_size_cell_widget_grid

0x8453,	// (0x0000a1ff) bg_ai5_widget_pane_ParamLimits

0x8453,	// (0x0000a1ff) bg_ai5_widget_pane

0xdf2e,	// (0x0000fcda) cell_ai5_widget_pane_g2

0xdf42,	// (0x0000fcee) cell_ai5_widget_pane_g3

0xdf5c,	// (0x0000fd08) cell_ai5_widget_pane_g4

0xdf6c,	// (0x0000fd18) cell_ai5_widget_pane_g5

0xdf7c,	// (0x0000fd28) cell_ai5_widget_pane_g6

0xdf88,	// (0x0000fd34) cell_ai5_widget_pane_g7

0xdf94,	// (0x0000fd40) cell_ai5_widget_pane_t1_ParamLimits

0xdf94,	// (0x0000fd40) cell_ai5_widget_pane_t1

0x858a,	// (0x0000a336) cell_ai5_widget_pane_t2_ParamLimits

0x858a,	// (0x0000a336) cell_ai5_widget_pane_t2

0x85a2,	// (0x0000a34e) cell_ai5_widget_pane_t3_ParamLimits

0x85a2,	// (0x0000a34e) cell_ai5_widget_pane_t3

0xdfb1,	// (0x0000fd5d) cell_ai5_widget_pane_t4_ParamLimits

0xdfb1,	// (0x0000fd5d) cell_ai5_widget_pane_t4

0xdfd7,	// (0x0000fd83) cell_ai5_widget_pane_t5_ParamLimits

0xdfd7,	// (0x0000fd83) cell_ai5_widget_pane_t5

0x8600,	// (0x0000a3ac) cell_ai5_widget_pane_t6_ParamLimits

0x8600,	// (0x0000a3ac) cell_ai5_widget_pane_t6

0x8612,	// (0x0000a3be) cell_ai5_widget_pane_t7_ParamLimits

0x8612,	// (0x0000a3be) cell_ai5_widget_pane_t7

0x862b,	// (0x0000a3d7) cell_ai5_widget_pane_t8_ParamLimits

0x862b,	// (0x0000a3d7) cell_ai5_widget_pane_t8

0x0009,

0xfe43,	// (0x00011bef) cell_ai5_widget_pane_t_ParamLimits

0xfe43,	// (0x00011bef) cell_ai5_widget_pane_t

0xe044,	// (0x0000fdf0) grid_ai5_widget_pane

0xee29,	// (0x00010bd5) highlight_cell_ai5_widget_pane_ParamLimits

0xee29,	// (0x00010bd5) highlight_cell_ai5_widget_pane

0xe052,	// (0x0000fdfe) ai5_sk_left_pane

0xe05c,	// (0x0000fe08) ai5_sk_middle_pane

0xe066,	// (0x0000fe12) ai5_sk_right_pane

0x86b6,	// (0x0000a462) bg_ai5_widget_pane_g1_ParamLimits

0x86b6,	// (0x0000a462) bg_ai5_widget_pane_g1

0x86c2,	// (0x0000a46e) bg_ai5_widget_pane_g2_ParamLimits

0x86c2,	// (0x0000a46e) bg_ai5_widget_pane_g2

0x86ce,	// (0x0000a47a) bg_ai5_widget_pane_g3_ParamLimits

0x86ce,	// (0x0000a47a) bg_ai5_widget_pane_g3

0x86da,	// (0x0000a486) bg_ai5_widget_pane_g4_ParamLimits

0x86da,	// (0x0000a486) bg_ai5_widget_pane_g4

0x86e6,	// (0x0000a492) bg_ai5_widget_pane_g5_ParamLimits

0x86e6,	// (0x0000a492) bg_ai5_widget_pane_g5

0x86f2,	// (0x0000a49e) bg_ai5_widget_pane_g6_ParamLimits

0x86f2,	// (0x0000a49e) bg_ai5_widget_pane_g6

0x86fe,	// (0x0000a4aa) bg_ai5_widget_pane_g7_ParamLimits

0x86fe,	// (0x0000a4aa) bg_ai5_widget_pane_g7

0x870a,	// (0x0000a4b6) bg_ai5_widget_pane_g8_ParamLimits

0x870a,	// (0x0000a4b6) bg_ai5_widget_pane_g8

0x8716,	// (0x0000a4c2) bg_ai5_widget_pane_g9_ParamLimits

0x8716,	// (0x0000a4c2) bg_ai5_widget_pane_g9

0x0008,

0xfe58,	// (0x00011c04) bg_ai5_widget_pane_g_ParamLimits

0xfe58,	// (0x00011c04) bg_ai5_widget_pane_g

0xe09c,	// (0x0000fe48) cell_shortcut_ai5_widget_pane_ParamLimits

0xe09c,	// (0x0000fe48) cell_shortcut_ai5_widget_pane

0x08c4,	// (0x00002670) bg_cell_shortcut_ai5_widget_pane

0x8761,	// (0x0000a50d) cell_grid_ai5_widget_pane_g1

0x08c4,	// (0x00002670) highlight_cell_shortcut_ai5_widget_pane

0x1a41,	// (0x000037ed) ai5_sk_left_pane_g1

0x876a,	// (0x0000a516) ai5_sk_left_pane_g2

0x8772,	// (0x0000a51e) ai5_sk_left_pane_g3

0x877a,	// (0x0000a526) ai5_sk_left_pane_g4

0x0003,

0xfe6b,	// (0x00011c17) ai5_sk_left_pane_g

0x8782,	// (0x0000a52e) ai5_sk_left_pane_t1

0x1a39,	// (0x000037e5) ai5_sk_right_pane_g1

0x8790,	// (0x0000a53c) ai5_sk_right_pane_g2

0x8798,	// (0x0000a544) ai5_sk_right_pane_g3

0x87a0,	// (0x0000a54c) ai5_sk_right_pane_g4

0x0003,

0xfe74,	// (0x00011c20) ai5_sk_right_pane_g

0x87a8,	// (0x0000a554) ai5_sk_right_pane_t1

0x1a39,	// (0x000037e5) ai5_sk_middle_pane_g1

0x1a41,	// (0x000037ed) ai5_sk_middle_pane_g2

0x1a59,	// (0x00003805) ai5_sk_middle_pane_g3

0x8798,	// (0x0000a544) ai5_sk_middle_pane_g4

0x8772,	// (0x0000a51e) ai5_sk_middle_pane_g5

0x87b6,	// (0x0000a562) ai5_sk_middle_pane_g6

0xe0af,	// (0x0000fe5b) ai5_sk_middle_pane_g7

0x0006,

0xfe7d,	// (0x00011c29) ai5_sk_middle_pane_g

0xb76c,	// (0x0000d518) aid_touch_area_size_lc0_ParamLimits

0xb76c,	// (0x0000d518) aid_touch_area_size_lc0

0x51f4,	// (0x00006fa0) cell_hwr_candidate_pane_t1_ParamLimits

0x14d9,	// (0x00003285) aid_touch_navi_pane

0xba12,	// (0x0000d7be) status_dt_navi_pane_ParamLimits

0xba12,	// (0x0000d7be) status_dt_navi_pane

0xba2a,	// (0x0000d7d6) status_dt_sta_pane_ParamLimits

0xba2a,	// (0x0000d7d6) status_dt_sta_pane

0xe0b7,	// (0x0000fe63) dt_sta_controll_pane

0xe0c4,	// (0x0000fe70) dt_sta_indi_pane

0xe0d1,	// (0x0000fe7d) dt_sta_title_pane

0xe8a4,	// (0x00010650) bg_dt_sta_indi_pane_ParamLimits

0xe8a4,	// (0x00010650) bg_dt_sta_indi_pane

0xe0e3,	// (0x0000fe8f) dt_sta_battery_pane

0xe0eb,	// (0x0000fe97) dt_sta_indi_pane_g1

0xe0f4,	// (0x0000fea0) dt_sta_indi_pane_g2

0xe0fd,	// (0x0000fea9) dt_sta_indi_pane_g3

0x0002,

0xfe8c,	// (0x00011c38) dt_sta_indi_pane_g

0xe106,	// (0x0000feb2) dt_sta_signal_pane

0xee29,	// (0x00010bd5) bg_dt_sta_title_pane_ParamLimits

0xee29,	// (0x00010bd5) bg_dt_sta_title_pane

0xe10f,	// (0x0000febb) dt_sta_title_pane_g1

0xe117,	// (0x0000fec3) dt_sta_title_pane_t1_ParamLimits

0xe117,	// (0x0000fec3) dt_sta_title_pane_t1

0xe491,	// (0x0001023d) bg_dt_sta_control_pane

0xe12c,	// (0x0000fed8) dt_sta_controll_pane_g1

0xe135,	// (0x0000fee1) bg_dt_sta_title_pane_g1

0xe13e,	// (0x0000feea) bg_dt_sta_title_pane_g2

0xe147,	// (0x0000fef3) bg_dt_sta_title_pane_g3

0x0002,

0xfe93,	// (0x00011c3f) bg_dt_sta_title_pane_g

0x4990,	// (0x0000673c) bg_dt_sta_indi_pane_g1

0x8864,	// (0x0000a610) dt_sta_signal_pane_g1

0x886c,	// (0x0000a618) dt_sta_signal_pane_g2

0x0001,

0xfe9a,	// (0x00011c46) dt_sta_signal_pane_g

0x8874,	// (0x0000a620) dt_sta_battery_pane_g1

0x887d,	// (0x0000a629) dt_sta_battery_pane_t1

0x4990,	// (0x0000673c) bg_dt_sta_control_pane_g1

0x01f3,	// (0x00001f9f) fep_china_uni_eep_pane

0x01fb,	// (0x00001fa7) fep_china_uni_entry_pane_ParamLimits

0x020b,	// (0x00001fb7) popup_fep_china_uni_window_g1_ParamLimits

0x021b,	// (0x00001fc7) popup_fep_china_uni_window_g2_ParamLimits

0x021b,	// (0x00001fc7) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x000114c4) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x000114c4) popup_fep_china_uni_window_g

0x888c,	// (0x0000a638) fep_china_uni_eep_pane_g1

0x8894,	// (0x0000a640) fep_china_uni_eep_pane_t1

0x7dd8,	// (0x00009b84) aid_touch_area_size_smil_player

0x1627,	// (0x000033d3) lc0_clock_pane

0x181e,	// (0x000035ca) status_pane_g5_ParamLimits

0x181e,	// (0x000035ca) status_pane_g5

0xb1c3,	// (0x0000cf6f) popup_keymap_window

0x17e4,	// (0x00003590) status_icon_pane

0xdf42,	// (0x0000fcee) cell_ai5_widget_pane_g3_ParamLimits

0xdf5c,	// (0x0000fd08) cell_ai5_widget_pane_g4_ParamLimits

0xdf6c,	// (0x0000fd18) cell_ai5_widget_pane_g5_ParamLimits

0x8531,	// (0x0000a2dd) cell_ai5_widget_pane_g8_ParamLimits

0x8531,	// (0x0000a2dd) cell_ai5_widget_pane_g8

0x8545,	// (0x0000a2f1) cell_ai5_widget_pane_g9_ParamLimits

0x8545,	// (0x0000a2f1) cell_ai5_widget_pane_g9

0x8559,	// (0x0000a305) cell_ai5_widget_pane_g10_ParamLimits

0x8559,	// (0x0000a305) cell_ai5_widget_pane_g10

0x88a3,	// (0x0000a64f) status_icon_pane_g1

0xe491,	// (0x0001023d) bg_popup_sub_pane_cp13

0x88ab,	// (0x0000a657) popup_keymap_window_t1

0xaeb8,	// (0x0000cc64) control_pane_g6_ParamLimits

0xaeb8,	// (0x0000cc64) control_pane_g6

0xaec5,	// (0x0000cc71) control_pane_g7_ParamLimits

0xaec5,	// (0x0000cc71) control_pane_g7

0xaed2,	// (0x0000cc7e) control_pane_g8_ParamLimits

0xaed2,	// (0x0000cc7e) control_pane_g8

0xe0b7,	// (0x0000fe63) dt_sta_controll_pane_ParamLimits

0xe0c4,	// (0x0000fe70) dt_sta_indi_pane_ParamLimits

0xe0d1,	// (0x0000fe7d) dt_sta_title_pane_ParamLimits

0xecf1,	// (0x00010a9d) aid_size_touch_scroll_bar_cale

0xe636,	// (0x000103e2) popup_discreet_window_ParamLimits

0xe636,	// (0x000103e2) popup_discreet_window

0x9f7e,	// (0x0000bd2a) popup_sk_window

0x2273,	// (0x0000401f) bg_popup_sub_pane_cp28_ParamLimits

0x2273,	// (0x0000401f) bg_popup_sub_pane_cp28

0x88b9,	// (0x0000a665) popup_discreet_window_g1_ParamLimits

0x88b9,	// (0x0000a665) popup_discreet_window_g1

0x88d9,	// (0x0000a685) popup_discreet_window_t1_ParamLimits

0x88d9,	// (0x0000a685) popup_discreet_window_t1

0x88f7,	// (0x0000a6a3) popup_discreet_window_t2_ParamLimits

0x88f7,	// (0x0000a6a3) popup_discreet_window_t2

0x0002,

0xfe9f,	// (0x00011c4b) popup_discreet_window_t_ParamLimits

0xfe9f,	// (0x00011c4b) popup_discreet_window_t

0x8949,	// (0x0000a6f5) popup_sk_window_g1

0x8953,	// (0x0000a6ff) popup_sk_window_g2

0x0001,

0xfea6,	// (0x00011c52) popup_sk_window_g

0x895b,	// (0x0000a707) popup_sk_window_t1

0x8969,	// (0x0000a715) popup_sk_window_t1_copy1

0xdf2e,	// (0x0000fcda) cell_ai5_widget_pane_g2_ParamLimits

0xdff7,	// (0x0000fda3) cell_ai5_widget_pane_t9_ParamLimits

0xdff7,	// (0x0000fda3) cell_ai5_widget_pane_t9

0xe491,	// (0x0001023d) main_fep_fshwr2_pane

0xe150,	// (0x0000fefc) aid_fshwr2_btn_pane

0xe161,	// (0x0000ff0d) aid_fshwr2_syb_pane

0xe172,	// (0x0000ff1e) aid_fshwr2_txt_pane

0xe17e,	// (0x0000ff2a) fshwr2_func_candi_pane

0xe19f,	// (0x0000ff4b) fshwr2_hwr_syb_pane

0xe1bc,	// (0x0000ff68) fshwr2_icf_pane

0xe491,	// (0x0001023d) fshwr2_icf_bg_pane

0x89df,	// (0x0000a78b) fshwr2_icf_pane_t1_ParamLimits

0x89df,	// (0x0000a78b) fshwr2_icf_pane_t1

0x0010,	// (0x00001dbc) fshwr2_func_candi_pane_g1

0xe1e8,	// (0x0000ff94) fshwr2_func_candi_row_pane_ParamLimits

0xe1e8,	// (0x0000ff94) fshwr2_func_candi_row_pane

0xe20f,	// (0x0000ffbb) cell_fshwr2_syb_pane_ParamLimits

0xe20f,	// (0x0000ffbb) cell_fshwr2_syb_pane

0x4e1d,	// (0x00006bc9) fshwr2_hwr_syb_pane_g1_ParamLimits

0x4e1d,	// (0x00006bc9) fshwr2_hwr_syb_pane_g1

0xe491,	// (0x0001023d) bg_popup_call_pane_cp01

0xe225,	// (0x0000ffd1) fshwr2_func_candi_cell_pane_ParamLimits

0xe225,	// (0x0000ffd1) fshwr2_func_candi_cell_pane

0xe26e,	// (0x0001001a) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe26e,	// (0x0001001a) fshwr2_func_candi_cell_bg_pane

0xe27a,	// (0x00010026) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe27a,	// (0x00010026) fshwr2_func_candi_cell_pane_g1

0xe2b1,	// (0x0001005d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe2b1,	// (0x0001005d) fshwr2_func_candi_cell_pane_t1

0xe491,	// (0x0001023d) bg_button_pane_cp08

0x8aad,	// (0x0000a859) cell_fshwr2_syb_bg_pane

0xe2cc,	// (0x00010078) cell_fshwr2_syb_bg_pane_g1

0xe2d4,	// (0x00010080) cell_fshwr2_syb_bg_pane_t1

0xee29,	// (0x00010bd5) main_tmo_pane

0xbf22,	// (0x0000dcce) uni_indicator_pane_g1_ParamLimits

0xbf38,	// (0x0000dce4) uni_indicator_pane_g2_ParamLimits

0xbf4e,	// (0x0000dcfa) uni_indicator_pane_g3_ParamLimits

0xbf61,	// (0x0000dd0d) uni_indicator_pane_g4_ParamLimits

0xbf61,	// (0x0000dd0d) uni_indicator_pane_g4

0x2f4b,	// (0x00004cf7) uni_indicator_pane_g5_ParamLimits

0x2f4b,	// (0x00004cf7) uni_indicator_pane_g5

0x2f4b,	// (0x00004cf7) uni_indicator_pane_g6_ParamLimits

0x2f4b,	// (0x00004cf7) uni_indicator_pane_g6

0xf910,	// (0x000116bc) uni_indicator_pane_g_ParamLimits

0xcbbe,	// (0x0000e96a) popup_tmo_note_window_ParamLimits

0xcbbe,	// (0x0000e96a) popup_tmo_note_window

0xee29,	// (0x00010bd5) fshwr2_bg_pane

0xe2a2,	// (0x0001004e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe2a2,	// (0x0001004e) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeab,	// (0x00011c57) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeab,	// (0x00011c57) fshwr2_func_candi_cell_pane_g

0x4990,	// (0x0000673c) bg_popup_window_pane_cp01

0x8acc,	// (0x0000a878) bg_popup_window_pane_g1_cp01

0x8ad5,	// (0x0000a881) bg_popup_window_pane_cp22_ParamLimits

0x8ad5,	// (0x0000a881) bg_popup_window_pane_cp22

0x8ae3,	// (0x0000a88f) listscroll_tmo_link_pane_ParamLimits

0x8ae3,	// (0x0000a88f) listscroll_tmo_link_pane

0x8b23,	// (0x0000a8cf) popup_tmo_note_window_g1_ParamLimits

0x8b23,	// (0x0000a8cf) popup_tmo_note_window_g1

0x8b30,	// (0x0000a8dc) tmo_note_info_pane_ParamLimits

0x8b30,	// (0x0000a8dc) tmo_note_info_pane

0xe2e3,	// (0x0001008f) list_tmo_note_info_pane_g1_ParamLimits

0xe2e3,	// (0x0001008f) list_tmo_note_info_pane_g1

0x8b61,	// (0x0000a90d) list_tmo_note_info_pane_g2_ParamLimits

0x8b61,	// (0x0000a90d) list_tmo_note_info_pane_g2

0x0001,

0xfeb0,	// (0x00011c5c) list_tmo_note_info_pane_g_ParamLimits

0xfeb0,	// (0x00011c5c) list_tmo_note_info_pane_g

0x8b7d,	// (0x0000a929) list_tmo_note_info_text_pane_ParamLimits

0x8b7d,	// (0x0000a929) list_tmo_note_info_text_pane

0x8c02,	// (0x0000a9ae) list_tmo_link_pane

0x8c0f,	// (0x0000a9bb) scroll_pane_cp20

0x8c1c,	// (0x0000a9c8) list_single_tmo_link_pane_ParamLimits

0x8c1c,	// (0x0000a9c8) list_single_tmo_link_pane

0x8c2c,	// (0x0000a9d8) list_single_tmo_link_pane_t1

0x8c3a,	// (0x0000a9e6) list_tmo_note_info_text_pane_t1_ParamLimits

0x8c3a,	// (0x0000a9e6) list_tmo_note_info_text_pane_t1

0xa98b,	// (0x0000c737) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa98b,	// (0x0000c737) aid_size_touch_scroll_bar_cp01

0xa8ba,	// (0x0000c666) aid_size_touch_slider_marker

0x9f6e,	// (0x0000bd1a) popup_settings_window_ParamLimits

0x9f6e,	// (0x0000bd1a) popup_settings_window

0x0e80,	// (0x00002c2c) popup_candi_list_indi_window

0x14d9,	// (0x00003285) aid_touch_navi_pane_ParamLimits

0x683c,	// (0x000085e8) rs_clock_indi_pane

0x6845,	// (0x000085f1) sctrl_sk_bottom_pane_ParamLimits

0x6856,	// (0x00008602) sctrl_sk_top_pane_ParamLimits

0x709f,	// (0x00008e4b) popup_fep_tooltip_window

0xdefa,	// (0x0000fca6) aid_size_cell_widget_grid_ParamLimits

0xdf19,	// (0x0000fcc5) cell_ai5_widget_pane_g1_ParamLimits

0xdf19,	// (0x0000fcc5) cell_ai5_widget_pane_g1

0xdf7c,	// (0x0000fd28) cell_ai5_widget_pane_g6_ParamLimits

0xdf88,	// (0x0000fd34) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2e,	// (0x00011bda) cell_ai5_widget_pane_g_ParamLimits

0xfe2e,	// (0x00011bda) cell_ai5_widget_pane_g

0xe026,	// (0x0000fdd2) cell_ai5_widget_pane_t10_ParamLimits

0xe026,	// (0x0000fdd2) cell_ai5_widget_pane_t10

0xe044,	// (0x0000fdf0) grid_ai5_widget_pane_ParamLimits

0xe070,	// (0x0000fe1c) cell_contacts_ai5_widget_pane_ParamLimits

0xe070,	// (0x0000fe1c) cell_contacts_ai5_widget_pane

0x890c,	// (0x0000a6b8) popup_discreet_window_t3_ParamLimits

0x890c,	// (0x0000a6b8) popup_discreet_window_t3

0xe1d4,	// (0x0000ff80) popup_fshwr2_char_preview_window_ParamLimits

0xe1d4,	// (0x0000ff80) popup_fshwr2_char_preview_window

0xe2fa,	// (0x000100a6) tmo_note_info_pane_t1

0xe30f,	// (0x000100bb) tmo_note_info_pane_t2

0xe328,	// (0x000100d4) tmo_note_info_pane_t3

0x8bde,	// (0x0000a98a) tmo_note_info_pane_t4

0x8bf0,	// (0x0000a99c) tmo_note_info_pane_t5

0x0004,

0xfeb5,	// (0x00011c61) tmo_note_info_pane_t

0x8c02,	// (0x0000a9ae) list_tmo_link_pane_ParamLimits

0x8c0f,	// (0x0000a9bb) scroll_pane_cp20_ParamLimits

0xe491,	// (0x0001023d) bg_popup_fep_char_preview_window_cp01

0x8c53,	// (0x0000a9ff) popup_fshwr2_char_preview_window_t1

0x8c61,	// (0x0000aa0d) popup_candi_list_indi_window_g1

0x8c6a,	// (0x0000aa16) bg_cell_contacts_ai5_widget_pane

0x8c76,	// (0x0000aa22) cell_contacts_ai5_widget_pane_g1

0x8c8b,	// (0x0000aa37) cell_contacts_ai5_widget_pane_g2

0x8c97,	// (0x0000aa43) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec0,	// (0x00011c6c) cell_contacts_ai5_widget_pane_g

0x8ca3,	// (0x0000aa4f) cell_contacts_ai5_widget_pane_t1

0xee29,	// (0x00010bd5) highlight_cell_shortcut_ai5_widget_pane_cp01

0x8d1a,	// (0x0000aac6) settings_container_pane

0x08c4,	// (0x00002670) listscroll_set_pane_copy1

0x3d76,	// (0x00005b22) scroll_pane_cp121_copy1

0x8d26,	// (0x0000aad2) set_content_pane_copy1

0x8d2e,	// (0x0000aada) aid_height_set_list_copy1_ParamLimits

0x8d2e,	// (0x0000aada) aid_height_set_list_copy1

0x324f,	// (0x00004ffb) aid_size_parent_copy1_ParamLimits

0x324f,	// (0x00004ffb) aid_size_parent_copy1

0x8d3a,	// (0x0000aae6) button_value_adjust_pane_cp6_copy1_ParamLimits

0x8d3a,	// (0x0000aae6) button_value_adjust_pane_cp6_copy1

0x0e22,	// (0x00002bce) list_highlight_pane_cp2_copy1_ParamLimits

0x0e22,	// (0x00002bce) list_highlight_pane_cp2_copy1

0x8d4e,	// (0x0000aafa) list_set_pane_copy1_ParamLimits

0x8d4e,	// (0x0000aafa) list_set_pane_copy1

0x8cb5,	// (0x0000aa61) main_pane_set_t1_copy1_ParamLimits

0x8cb5,	// (0x0000aa61) main_pane_set_t1_copy1

0x8cef,	// (0x0000aa9b) main_pane_set_t2_copy1_ParamLimits

0x8cef,	// (0x0000aa9b) main_pane_set_t2_copy1

0x8e0f,	// (0x0000abbb) main_pane_set_t3_copy1

0x8e1d,	// (0x0000abc9) main_pane_set_t4_copy1

0x8d0e,	// (0x0000aaba) set_content_pane_g1_copy1_ParamLimits

0x8d0e,	// (0x0000aaba) set_content_pane_g1_copy1

0x8e2b,	// (0x0000abd7) setting_code_pane_copy1

0x8e33,	// (0x0000abdf) setting_slider_graphic_pane_copy1

0x8e33,	// (0x0000abdf) setting_slider_pane_copy1

0x8e33,	// (0x0000abdf) setting_text_pane_copy1

0x8e33,	// (0x0000abdf) setting_volume_pane_copy1

0x8e2b,	// (0x0000abd7) settings_code_pane_cp2_copy1

0x8e3b,	// (0x0000abe7) settings_code_pane_cp_copy1_ParamLimits

0x8e3b,	// (0x0000abe7) settings_code_pane_cp_copy1

0x8e4f,	// (0x0000abfb) volume_set_pane_copy1

0x8e5b,	// (0x0000ac07) volume_set_pane_g10_copy1

0x8e67,	// (0x0000ac13) volume_set_pane_g1_copy1

0x8e71,	// (0x0000ac1d) volume_set_pane_g2_copy1

0x8e7b,	// (0x0000ac27) volume_set_pane_g3_copy1

0x8e85,	// (0x0000ac31) volume_set_pane_g4_copy1

0x8e8f,	// (0x0000ac3b) volume_set_pane_g5_copy1

0x8e99,	// (0x0000ac45) volume_set_pane_g6_copy1

0x8ea3,	// (0x0000ac4f) volume_set_pane_g7_copy1

0x8ead,	// (0x0000ac59) volume_set_pane_g8_copy1

0x8eb7,	// (0x0000ac63) volume_set_pane_g9_copy1

0xe6ce,	// (0x0001047a) bg_set_opt_pane_cp_copy1_ParamLimits

0xe6ce,	// (0x0001047a) bg_set_opt_pane_cp_copy1

0x8ec1,	// (0x0000ac6d) setting_slider_pane_t1_copy1_ParamLimits

0x8ec1,	// (0x0000ac6d) setting_slider_pane_t1_copy1

0x8edf,	// (0x0000ac8b) setting_slider_pane_t2_copy1_ParamLimits

0x8edf,	// (0x0000ac8b) setting_slider_pane_t2_copy1

0x8ef9,	// (0x0000aca5) setting_slider_pane_t3_copy1_ParamLimits

0x8ef9,	// (0x0000aca5) setting_slider_pane_t3_copy1

0x8f11,	// (0x0000acbd) slider_set_pane_copy1_ParamLimits

0x8f11,	// (0x0000acbd) slider_set_pane_copy1

0xeef0,	// (0x00010c9c) set_opt_bg_pane_g1_copy2

0xeef8,	// (0x00010ca4) set_opt_bg_pane_g2_copy2

0x8f27,	// (0x0000acd3) set_opt_bg_pane_g3_copy2

0xef08,	// (0x00010cb4) set_opt_bg_pane_g4_copy2

0xef10,	// (0x00010cbc) set_opt_bg_pane_g5_copy2

0xef18,	// (0x00010cc4) set_opt_bg_pane_g6_copy2

0x8f31,	// (0x0000acdd) set_opt_bg_pane_g7_copy2

0x8f3b,	// (0x0000ace7) set_opt_bg_pane_g8_copy2

0x8f45,	// (0x0000acf1) set_opt_bg_pane_g9_copy2

0x8f4f,	// (0x0000acfb) aid_size_touch_slider_mark_copy1_ParamLimits

0x8f4f,	// (0x0000acfb) aid_size_touch_slider_mark_copy1

0x8f63,	// (0x0000ad0f) slider_set_pane_g1_copy1

0x8f6c,	// (0x0000ad18) slider_set_pane_g2_copy1

0x31b6,	// (0x00004f62) slider_set_pane_g3_copy1_ParamLimits

0x31b6,	// (0x00004f62) slider_set_pane_g3_copy1

0x31ca,	// (0x00004f76) slider_set_pane_g4_copy1_ParamLimits

0x31ca,	// (0x00004f76) slider_set_pane_g4_copy1

0x31e2,	// (0x00004f8e) slider_set_pane_g5_copy1_ParamLimits

0x31e2,	// (0x00004f8e) slider_set_pane_g5_copy1

0x31b6,	// (0x00004f62) slider_set_pane_g6_copy1_ParamLimits

0x31b6,	// (0x00004f62) slider_set_pane_g6_copy1

0x8f74,	// (0x0000ad20) slider_set_pane_g7_copy1_ParamLimits

0x8f74,	// (0x0000ad20) slider_set_pane_g7_copy1

0xe614,	// (0x000103c0) bg_set_opt_pane_cp2_copy1

0x8f8a,	// (0x0000ad36) setting_slider_graphic_pane_g1_copy1

0x8f93,	// (0x0000ad3f) setting_slider_graphic_pane_t1_copy1

0x8fa3,	// (0x0000ad4f) setting_slider_graphic_pane_t2_copy1

0x8fb3,	// (0x0000ad5f) slider_set_pane_cp_copy1

0x8fc3,	// (0x0000ad6f) input_focus_pane_cp1_copy1

0x8fcc,	// (0x0000ad78) list_set_text_pane_copy1

0x8fd4,	// (0x0000ad80) setting_text_pane_g1_copy1

0xe77c,	// (0x00010528) set_text_pane_t1_copy1

0x8fc3,	// (0x0000ad6f) input_focus_pane_cp2_copy1

0x8fd4,	// (0x0000ad80) setting_code_pane_g1_copy1

0x8fdd,	// (0x0000ad89) setting_code_pane_t1_copy1

0x05ac,	// (0x00002358) list_set_graphic_pane_copy1

0xe614,	// (0x000103c0) bg_set_opt_pane_cp4_copy1

0x05bf,	// (0x0000236b) list_set_graphic_pane_g1_copy1_ParamLimits

0x05bf,	// (0x0000236b) list_set_graphic_pane_g1_copy1

0x8feb,	// (0x0000ad97) list_set_graphic_pane_g2_copy1

0x05d7,	// (0x00002383) list_set_graphic_pane_t1_copy1_ParamLimits

0x05d7,	// (0x00002383) list_set_graphic_pane_t1_copy1

0x4990,	// (0x0000673c) rs_clock_indi_pane_g1

0x8ff3,	// (0x0000ad9f) rs_clock_indi_pane_t1

0x9001,	// (0x0000adad) rs_indi_pane

0x9009,	// (0x0000adb5) rs_indi_pane_g1

0x9012,	// (0x0000adbe) rs_indi_pane_g2

0x901b,	// (0x0000adc7) rs_indi_pane_g3

0x0002,

0xfec7,	// (0x00011c73) rs_indi_pane_g

0x08c4,	// (0x00002670) bg_popup_preview_window_pane_cp03

0x9024,	// (0x0000add0) popup_fep_tooltip_window_t1

0x5bf7,	// (0x000079a3) popup_note2_window_g2_ParamLimits

0x5bf7,	// (0x000079a3) popup_note2_window_g2

0x0001,

0xfc60,	// (0x00011a0c) popup_note2_window_g_ParamLimits

0xfc60,	// (0x00011a0c) popup_note2_window_g

0x6206,	// (0x00007fb2) bg_popup_sub_pane_cp11_ParamLimits

0x6213,	// (0x00007fbf) cell_ai3_links_pane_g1_ParamLimits

0x622a,	// (0x00007fd6) cell_ai3_links_pane_t1

0xe77c,	// (0x00010528) set_text_pane_t1_copy1_ParamLimits

0x07dd,	// (0x00002589) cell_graphic_popup_pane_cp2_ParamLimits

0x07dd,	// (0x00002589) cell_graphic_popup_pane_cp2

0x9032,	// (0x0000adde) cell_graphic_popup_pane_g1_cp2

0xeb04,	// (0x000108b0) cell_graphic_popup_pane_g2_cp2

0x903a,	// (0x0000ade6) cell_graphic_popup_pane_g3_cp2

0x9042,	// (0x0000adee) cell_graphic_popup_pane_t2_cp2

0xeb15,	// (0x000108c1) grid_highlight_pane_cp3_cp2

0xf364,	// (0x00011110) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xee29,	// (0x00010bd5) main_tmo_pane_ParamLimits

0xcbb2,	// (0x0000e95e) popup_tmo_big_image_note_window

0xdf08,	// (0x0000fcb4) cell_ai5_widget_list_pane

0xdf10,	// (0x0000fcbc) cell_ai5_widget_lrg_icon_pane

0xe2fa,	// (0x000100a6) tmo_note_info_pane_t1_ParamLimits

0xe30f,	// (0x000100bb) tmo_note_info_pane_t2_ParamLimits

0xe328,	// (0x000100d4) tmo_note_info_pane_t3_ParamLimits

0x8bde,	// (0x0000a98a) tmo_note_info_pane_t4_ParamLimits

0x8bf0,	// (0x0000a99c) tmo_note_info_pane_t5_ParamLimits

0xfeb5,	// (0x00011c61) tmo_note_info_pane_t_ParamLimits

0x8d1a,	// (0x0000aac6) settings_container_pane_ParamLimits

0x8fbb,	// (0x0000ad67) indicator_popup_pane_cp5

0x8fbb,	// (0x0000ad67) indicator_popup_pane_cp6

0x05ac,	// (0x00002358) list_set_graphic_pane_copy1_ParamLimits

0xe491,	// (0x0001023d) bg_popup_window_pane_cp23

0x9050,	// (0x0000adfc) popup_tmo_big_image_note_window_g1

0x905c,	// (0x0000ae08) popup_tmo_big_image_note_window_t1

0x906c,	// (0x0000ae18) popup_tmo_big_image_note_window_t2

0x907c,	// (0x0000ae28) popup_tmo_big_image_note_window_t3

0x0002,

0xfece,	// (0x00011c7a) popup_tmo_big_image_note_window_t

0x4990,	// (0x0000673c) cell_ai5_widget_lrg_icon_pane_g1

0xe33d,	// (0x000100e9) cell_ai5_widget_lrg_icon_pane_t1

0xe34b,	// (0x000100f7) cell_ai5_widget_list_row_pane_ParamLimits

0xe34b,	// (0x000100f7) cell_ai5_widget_list_row_pane

0xe363,	// (0x0001010f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe363,	// (0x0001010f) cell_ai5_widget_list_row_pane_g1

0xe370,	// (0x0001011c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe370,	// (0x0001011c) cell_ai5_widget_list_row_pane_t1

0xe39b,	// (0x00010147) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe39b,	// (0x00010147) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed5,	// (0x00011c81) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed5,	// (0x00011c81) cell_ai5_widget_list_row_pane_t

0xe491,	// (0x0001023d) main_fep_vtchi_ss_pane

0x9132,	// (0x0000aede) popup_fep_char_pre_window

0x913a,	// (0x0000aee6) popup_fep_ituss_window

0xe3c3,	// (0x0001016f) popup_fep_vkbss_window

0xe3d2,	// (0x0001017e) grid_vkbss_keypad_pane_ParamLimits

0xe3d2,	// (0x0001017e) grid_vkbss_keypad_pane

0x9197,	// (0x0000af43) ituss_keypad_pane

0x91b2,	// (0x0000af5e) aid_vkbss_key_offset_ParamLimits

0x91b2,	// (0x0000af5e) aid_vkbss_key_offset

0xe3e2,	// (0x0001018e) cell_vkbss_key_pane_ParamLimits

0xe3e2,	// (0x0001018e) cell_vkbss_key_pane

0x91d4,	// (0x0000af80) bg_cell_vkbss_key_g1_ParamLimits

0x91d4,	// (0x0000af80) bg_cell_vkbss_key_g1

0xe3f8,	// (0x000101a4) cell_vkbss_key_3p_pane_ParamLimits

0xe3f8,	// (0x000101a4) cell_vkbss_key_3p_pane

0xe412,	// (0x000101be) cell_vkbss_key_g1_ParamLimits

0xe412,	// (0x000101be) cell_vkbss_key_g1

0xe42c,	// (0x000101d8) cell_vkbss_key_t1_ParamLimits

0xe42c,	// (0x000101d8) cell_vkbss_key_t1

0x9233,	// (0x0000afdf) cell_ituss_key_pane_ParamLimits

0x9233,	// (0x0000afdf) cell_ituss_key_pane

0x9244,	// (0x0000aff0) bg_cell_ituss_key_g1_ParamLimits

0x9244,	// (0x0000aff0) bg_cell_ituss_key_g1

0x9250,	// (0x0000affc) cell_ituss_key_pane_g1_ParamLimits

0x9250,	// (0x0000affc) cell_ituss_key_pane_g1

0x9264,	// (0x0000b010) cell_ituss_key_pane_g2_ParamLimits

0x9264,	// (0x0000b010) cell_ituss_key_pane_g2

0x0002,

0xfedc,	// (0x00011c88) cell_ituss_key_pane_g_ParamLimits

0xfedc,	// (0x00011c88) cell_ituss_key_pane_g

0x92a2,	// (0x0000b04e) cell_ituss_key_t1_ParamLimits

0x92a2,	// (0x0000b04e) cell_ituss_key_t1

0x92dc,	// (0x0000b088) cell_ituss_key_t2_ParamLimits

0x92dc,	// (0x0000b088) cell_ituss_key_t2

0x930d,	// (0x0000b0b9) cell_ituss_key_t3_ParamLimits

0x930d,	// (0x0000b0b9) cell_ituss_key_t3

0x92dc,	// (0x0000b088) cell_ituss_key_t4_ParamLimits

0x92dc,	// (0x0000b088) cell_ituss_key_t4

0x0004,

0xfee3,	// (0x00011c8f) cell_ituss_key_t_ParamLimits

0xfee3,	// (0x00011c8f) cell_ituss_key_t

0x9350,	// (0x0000b0fc) cell_vkbss_key_3p_pane_g1

0x9358,	// (0x0000b104) cell_vkbss_key_3p_pane_g2

0x9360,	// (0x0000b10c) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x00011c9a) cell_vkbss_key_3p_pane_g

0x08c4,	// (0x00002670) bg_popup_fep_char_preview_window_cp02

0x9368,	// (0x0000b114) popup_fep_char_pre_window_t1

0xdee7,	// (0x0000fc93) main_ai5_sk_pane

0x8c6a,	// (0x0000aa16) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x8c76,	// (0x0000aa22) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8c8b,	// (0x0000aa37) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8c97,	// (0x0000aa43) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec0,	// (0x00011c6c) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8ca3,	// (0x0000aa4f) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xee29,	// (0x00010bd5) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe457,	// (0x00010203) main_ai5_sk_pane_g1

0x20ab,	// (0x00003e57) popup_query_code_window_g1

0x9150,	// (0x0000aefc) popup_fep_vkb_icf_pane

0x9171,	// (0x0000af1d) popup_fep_vtchi_icf_pane

0x937f,	// (0x0000b12b) bg_icf_pane

0x938b,	// (0x0000b137) list_vkb_icf_pane

0x939a,	// (0x0000b146) bg_icf_pane_cp01

0x93ad,	// (0x0000b159) vtchi_icf_list_pane

0x93bd,	// (0x0000b169) list_vkb_icf_pane_t1_ParamLimits

0x93bd,	// (0x0000b169) list_vkb_icf_pane_t1

0x93d3,	// (0x0000b17f) vtchi_icf_list_pane_t1_ParamLimits

0x93d3,	// (0x0000b17f) vtchi_icf_list_pane_t1

0x913a,	// (0x0000aee6) popup_fep_ituss_window_ParamLimits

0x9171,	// (0x0000af1d) popup_fep_vtchi_icf_pane_ParamLimits

0x9197,	// (0x0000af43) ituss_keypad_pane_ParamLimits

0x91a6,	// (0x0000af52) ituss_sks_pane

0x937f,	// (0x0000b12b) bg_icf_pane_ParamLimits

0x9112,	// (0x0000aebe) icf_edit_indi_pane_ParamLimits

0x9112,	// (0x0000aebe) icf_edit_indi_pane

0x938b,	// (0x0000b137) list_vkb_icf_pane_ParamLimits

0x939a,	// (0x0000b146) bg_icf_pane_cp01_ParamLimits

0x9125,	// (0x0000aed1) icf_edit_indi_pane_cp01_ParamLimits

0x9125,	// (0x0000aed1) icf_edit_indi_pane_cp01

0x93b5,	// (0x0000b161) vtchi_query_pane

0x7d74,	// (0x00009b20) icf_edit_indi_pane_g1_ParamLimits

0x7d74,	// (0x00009b20) icf_edit_indi_pane_g1

0xe460,	// (0x0001020c) icf_edit_indi_pane_g2_ParamLimits

0xe460,	// (0x0001020c) icf_edit_indi_pane_g2

0x0001,

0xff06,	// (0x00011cb2) icf_edit_indi_pane_g_ParamLimits

0xff06,	// (0x00011cb2) icf_edit_indi_pane_g

0xe472,	// (0x0001021e) icf_edit_indi_pane_t1

0x93eb,	// (0x0000b197) bg_input_focus_pane_cp042

0xece8,	// (0x00010a94) vtchi_button_pane

0x93f4,	// (0x0000b1a0) vtchi_query_pane_t1

0x9402,	// (0x0000b1ae) vtchi_query_pane_t2

0x9410,	// (0x0000b1bc) vtchi_query_pane_t3

0x0002,

0xfef5,	// (0x00011ca1) vtchi_query_pane_t

0xe491,	// (0x0001023d) bg_button_pane_cp13

0x941e,	// (0x0000b1ca) vtchi_button_pane_g1

0x9426,	// (0x0000b1d2) ituss_sks_pane_g1

0x9431,	// (0x0000b1dd) ituss_sks_pane_g2

0x0001,

0xfefc,	// (0x00011ca8) ituss_sks_pane_g

0x9439,	// (0x0000b1e5) ituss_sks_pane_t1

0x9447,	// (0x0000b1f3) ituss_sks_pane_t2

0x0001,

0xff01,	// (0x00011cad) ituss_sks_pane_t

0x43c9,	// (0x00006175) indicator_nsta_pane_cp_g1

0x43d1,	// (0x0000617d) indicator_nsta_pane_cp_g2

0x43d9,	// (0x00006185) indicator_nsta_pane_cp_g3

0x43c9,	// (0x00006175) indicator_nsta_pane_cp_g4

0x43d1,	// (0x0000617d) indicator_nsta_pane_cp_g5

0x43d9,	// (0x00006185) indicator_nsta_pane_cp_g6

0x0005,

0xfaaa,	// (0x00011856) indicator_nsta_pane_cp_g

0xd9aa,	// (0x0000f756) cell_graphic2_pane_t2_ParamLimits

0xd9aa,	// (0x0000f756) cell_graphic2_pane_t2

0x0001,

0xfdb7,	// (0x00011b63) cell_graphic2_pane_t_ParamLimits

0xfdb7,	// (0x00011b63) cell_graphic2_pane_t

0xd9e2,	// (0x0000f78e) cell_graphic2_control_pane_t1

0xabd9,	// (0x0000c985) signal_pane_g3_ParamLimits

0xabd9,	// (0x0000c985) signal_pane_g3

0xabed,	// (0x0000c999) signal_pane_g4_ParamLimits

0xabed,	// (0x0000c999) signal_pane_g4

0xe3ad,	// (0x00010159) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe3ad,	// (0x00010159) cell_ai5_widget_list_row_pane_t3

0x9290,	// (0x0000b03c) cell_ituss_key_pane_t1_ParamLimits

0x9290,	// (0x0000b03c) cell_ituss_key_pane_t1

0x1ceb,	// (0x00003a97) form_field_data_wide_pane_vc_t2_ParamLimits

0x1ceb,	// (0x00003a97) form_field_data_wide_pane_vc_t2

0x1cff,	// (0x00003aab) form_field_data_wide_pane_vc_t3_ParamLimits

0x1cff,	// (0x00003aab) form_field_data_wide_pane_vc_t3

0x0002,

0xf7f8,	// (0x000115a4) form_field_data_wide_pane_vc_t_ParamLimits

0xf7f8,	// (0x000115a4) form_field_data_wide_pane_vc_t

0x4084,	// (0x00005e30) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4084,	// (0x00005e30) form_field_slider_wide_pane_vc_t3

0x415a,	// (0x00005f06) form_field_popup_wide_pane_vc_t2_ParamLimits

0x415a,	// (0x00005f06) form_field_popup_wide_pane_vc_t2

0x4171,	// (0x00005f1d) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4171,	// (0x00005f1d) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa99,	// (0x00011845) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x00011845) form_field_popup_wide_pane_vc_t

0xe150,	// (0x0000fefc) aid_fshwr2_btn_pane_ParamLimits

0xe161,	// (0x0000ff0d) aid_fshwr2_syb_pane_ParamLimits

0xe172,	// (0x0000ff1e) aid_fshwr2_txt_pane_ParamLimits

0xee29,	// (0x00010bd5) fshwr2_bg_pane_ParamLimits

0xe17e,	// (0x0000ff2a) fshwr2_func_candi_pane_ParamLimits

0xe19f,	// (0x0000ff4b) fshwr2_hwr_syb_pane_ParamLimits

0xe1bc,	// (0x0000ff68) fshwr2_icf_pane_ParamLimits

0x3ff8,	// (0x00005da4) list_double_graphic_pane_vc_g4_ParamLimits

0x3ff8,	// (0x00005da4) list_double_graphic_pane_vc_g4

0x9284,	// (0x0000b030) cell_ituss_key_pane_g3_ParamLimits

0x9284,	// (0x0000b030) cell_ituss_key_pane_g3

0x933e,	// (0x0000b0ea) cell_ituss_key_t5_ParamLimits

0x933e,	// (0x0000b0ea) cell_ituss_key_t5

0xe3c3,	// (0x0001016f) popup_fep_vkbss_window_ParamLimits

0xdef1,	// (0x0000fc9d) aid_cell_ai5_quarter

0xe472,	// (0x0001021e) icf_edit_indi_pane_t1_ParamLimits

0xe94c,	// (0x000106f8) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xe94c,	// (0x000106f8) aid_tch_indicator_popup_pane_cp2

0xe95f,	// (0x0001070b) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xe95f,	// (0x0001070b) aid_tch_query_popup_data_pane_cp2

0x2053,	// (0x00003dff) aid_tch_query_popup_pane_ParamLimits

0x2053,	// (0x00003dff) aid_tch_query_popup_pane

0x2053,	// (0x00003dff) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x2053,	// (0x00003dff) aid_tch_query_popup_data_pane_cp1
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Normal
