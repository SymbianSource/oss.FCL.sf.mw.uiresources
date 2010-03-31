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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0003731c };

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
0x8ecf,	// (0x000401eb) Screen

0x8edb,	// (0x000401f7) application_window_ParamLimits

0x8edb,	// (0x000401f7) application_window

0x8434,	// (0x0003f750) screen_g1

0x8f13,	// (0x0004022f) area_bottom_pane_ParamLimits

0x8f13,	// (0x0004022f) area_bottom_pane

0xe9e8,	// (0x00045d04) area_top_pane_ParamLimits

0xe9e8,	// (0x00045d04) area_top_pane

0xea86,	// (0x00045da2) main_pane_ParamLimits

0xea86,	// (0x00045da2) main_pane

0x843e,	// (0x0003f75a) misc_graphics

0xbcbe,	// (0x00042fda) battery_pane_ParamLimits

0xbcbe,	// (0x00042fda) battery_pane

0x2c48,	// (0x00039f64) bg_status_flat_pane_g8

0x2c50,	// (0x00039f6c) bg_status_flat_pane_g9

0x2052,	// (0x0003936e) context_pane_ParamLimits

0x2052,	// (0x0003936e) context_pane

0xbe35,	// (0x00043151) navi_pane_ParamLimits

0xbe35,	// (0x00043151) navi_pane

0xbebf,	// (0x000431db) signal_pane_ParamLimits

0xbebf,	// (0x000431db) signal_pane

0x0008,

0xf87a,	// (0x00046b96) bg_status_flat_pane_g

0xbf4f,	// (0x0004326b) status_pane_g1_ParamLimits

0xbf4f,	// (0x0004326b) status_pane_g1

0xbf65,	// (0x00043281) status_pane_g2_ParamLimits

0xbf65,	// (0x00043281) status_pane_g2

0x2293,	// (0x000395af) status_pane_g3_ParamLimits

0x2293,	// (0x000395af) status_pane_g3

0x0004,

0xf7a6,	// (0x00046ac2) status_pane_g_ParamLimits

0xf7a6,	// (0x00046ac2) status_pane_g

0xbf71,	// (0x0004328d) title_pane_ParamLimits

0xbf71,	// (0x0004328d) title_pane

0xbfd4,	// (0x000432f0) uni_indicator_pane_ParamLimits

0xbfd4,	// (0x000432f0) uni_indicator_pane

0x1873,	// (0x00038b8f) bg_list_pane_ParamLimits

0x1873,	// (0x00038b8f) bg_list_pane

0xa0a6,	// (0x000413c2) find_pane

0xa0ae,	// (0x000413ca) listscroll_app_pane_ParamLimits

0xa0ae,	// (0x000413ca) listscroll_app_pane

0x18a7,	// (0x00038bc3) listscroll_form_pane

0xa0be,	// (0x000413da) listscroll_gen_pane_ParamLimits

0xa0be,	// (0x000413da) listscroll_gen_pane

0x18c3,	// (0x00038bdf) listscroll_set_pane

0x37e8,	// (0x0003ab04) main_idle_act_pane

0xf467,	// (0x00046783) main_idle_trad_pane

0xf467,	// (0x00046783) main_list_empty_pane

0x18dd,	// (0x00038bf9) main_midp_pane

0x18e9,	// (0x00038c05) main_pane_g1_ParamLimits

0x18e9,	// (0x00038c05) main_pane_g1

0xa0e0,	// (0x000413fc) popup_ai_message_window_ParamLimits

0xa0e0,	// (0x000413fc) popup_ai_message_window

0xa180,	// (0x0004149c) popup_fep_china_uni_window_ParamLimits

0xa180,	// (0x0004149c) popup_fep_china_uni_window

0x1a0b,	// (0x00038d27) popup_fep_japan_candidate_window_ParamLimits

0x1a0b,	// (0x00038d27) popup_fep_japan_candidate_window

0x1a35,	// (0x00038d51) popup_fep_japan_predictive_window_ParamLimits

0x1a35,	// (0x00038d51) popup_fep_japan_predictive_window

0xa1e0,	// (0x000414fc) popup_find_window

0xa1fd,	// (0x00041519) popup_grid_graphic_window_ParamLimits

0xa1fd,	// (0x00041519) popup_grid_graphic_window

0x1aa6,	// (0x00038dc2) popup_large_graphic_colour_window

0xa2a1,	// (0x000415bd) popup_menu_window_ParamLimits

0xa2a1,	// (0x000415bd) popup_menu_window

0xa491,	// (0x000417ad) popup_note_image_window

0xa451,	// (0x0004176d) popup_note_wait_window_ParamLimits

0xa451,	// (0x0004176d) popup_note_wait_window

0xa4a9,	// (0x000417c5) popup_note_window_ParamLimits

0xa4a9,	// (0x000417c5) popup_note_window

0xa557,	// (0x00041873) popup_query_code_window_ParamLimits

0xa557,	// (0x00041873) popup_query_code_window

0x1d12,	// (0x0003902e) popup_query_data_code_window_ParamLimits

0x1d12,	// (0x0003902e) popup_query_data_code_window

0xa597,	// (0x000418b3) popup_query_data_window_ParamLimits

0xa597,	// (0x000418b3) popup_query_data_window

0xa62b,	// (0x00041947) popup_query_sat_info_window_ParamLimits

0xa62b,	// (0x00041947) popup_query_sat_info_window

0xa6d6,	// (0x000419f2) popup_snote_single_graphic_window_ParamLimits

0xa6d6,	// (0x000419f2) popup_snote_single_graphic_window

0xa6d6,	// (0x000419f2) popup_snote_single_text_window_ParamLimits

0xa6d6,	// (0x000419f2) popup_snote_single_text_window

0x1dad,	// (0x000390c9) popup_sub_window_general

0x1ef3,	// (0x0003920f) popup_window_general_ParamLimits

0x1ef3,	// (0x0003920f) popup_window_general

0x1f0c,	// (0x00039228) power_save_pane

0x9f14,	// (0x00041230) control_pane_g1_ParamLimits

0x9f14,	// (0x00041230) control_pane_g1

0x9f3d,	// (0x00041259) control_pane_g2_ParamLimits

0x9f3d,	// (0x00041259) control_pane_g2

0x181c,	// (0x00038b38) control_pane_g3_ParamLimits

0x181c,	// (0x00038b38) control_pane_g3

0x0007,

0xf78e,	// (0x00046aaa) control_pane_g_ParamLimits

0xf78e,	// (0x00046aaa) control_pane_g

0x9f9f,	// (0x000412bb) control_pane_t1_ParamLimits

0x9f9f,	// (0x000412bb) control_pane_t1

0x9ffd,	// (0x00041319) control_pane_t2_ParamLimits

0x9ffd,	// (0x00041319) control_pane_t2

0x0002,

0xf79f,	// (0x00046abb) control_pane_t_ParamLimits

0xf79f,	// (0x00046abb) control_pane_t

0x173d,	// (0x00038a59) navi_navi_volume_pane_cp1

0x1746,	// (0x00038a62) status_small_icon_pane

0x174e,	// (0x00038a6a) status_small_pane_g1_ParamLimits

0x174e,	// (0x00038a6a) status_small_pane_g1

0x1782,	// (0x00038a9e) status_small_pane_g2_ParamLimits

0x1782,	// (0x00038a9e) status_small_pane_g2

0x178e,	// (0x00038aaa) status_small_pane_g3_ParamLimits

0x178e,	// (0x00038aaa) status_small_pane_g3

0x179a,	// (0x00038ab6) status_small_pane_g4_ParamLimits

0x179a,	// (0x00038ab6) status_small_pane_g4

0x17a6,	// (0x00038ac2) status_small_pane_g5_ParamLimits

0x17a6,	// (0x00038ac2) status_small_pane_g5

0x17b5,	// (0x00038ad1) status_small_pane_g6_ParamLimits

0x17b5,	// (0x00038ad1) status_small_pane_g6

0x0007,

0xf77d,	// (0x00046a99) status_small_pane_g_ParamLimits

0xf77d,	// (0x00046a99) status_small_pane_g

0x17e5,	// (0x00038b01) status_small_pane_t1

0x1808,	// (0x00038b24) status_small_wait_pane_ParamLimits

0x1808,	// (0x00038b24) status_small_wait_pane

0x9c5e,	// (0x00040f7a) aid_levels_signal_ParamLimits

0x9c5e,	// (0x00040f7a) aid_levels_signal

0x9c76,	// (0x00040f92) signal_pane_g1_ParamLimits

0x9c76,	// (0x00040f92) signal_pane_g1

0x9c91,	// (0x00040fad) signal_pane_g2_ParamLimits

0x9c91,	// (0x00040fad) signal_pane_g2

0x0003,

0xf70e,	// (0x00046a2a) signal_pane_g_ParamLimits

0xf70e,	// (0x00046a2a) signal_pane_g

0xd017,	// (0x00044333) context_pane_g1

0x90ff,	// (0x0004041b) title_pane_g1

0x912a,	// (0x00040446) title_pane_t1

0x8460,	// (0x0003f77c) title_pane_t2

0x8486,	// (0x0003f7a2) title_pane_t3

0x0002,

0xf55d,	// (0x00046879) title_pane_t

0xbffc,	// (0x00043318) aid_levels_battery_ParamLimits

0xbffc,	// (0x00043318) aid_levels_battery

0xc018,	// (0x00043334) battery_pane_g1_ParamLimits

0xc018,	// (0x00043334) battery_pane_g1

0xc035,	// (0x00043351) battery_pane_g2_ParamLimits

0xc035,	// (0x00043351) battery_pane_g2

0x0001,

0xf7b1,	// (0x00046acd) battery_pane_g_ParamLimits

0xf7b1,	// (0x00046acd) battery_pane_g

0xc2eb,	// (0x00043607) uni_indicator_pane_g1

0xc302,	// (0x0004361e) uni_indicator_pane_g2

0xc318,	// (0x00043634) uni_indicator_pane_g3

0x0005,

0xf922,	// (0x00046c3e) uni_indicator_pane_g

0xf2fd,	// (0x00046619) navi_icon_pane_ParamLimits

0xf2fd,	// (0x00046619) navi_icon_pane

0xf281,	// (0x0004659d) navi_midp_pane

0xf319,	// (0x00046635) navi_navi_pane

0xf323,	// (0x0004663f) navi_text_pane_ParamLimits

0xf323,	// (0x0004663f) navi_text_pane

0x8434,	// (0x0003f750) status_small_wait_pane_g1

0xb48e,	// (0x000427aa) status_small_wait_pane_g2

0x0001,

0xf91d,	// (0x00046c39) status_small_wait_pane_g

0xc252,	// (0x0004356e) navi_navi_icon_text_pane

0xc25a,	// (0x00043576) navi_navi_pane_g1_ParamLimits

0xc25a,	// (0x00043576) navi_navi_pane_g1

0xc26c,	// (0x00043588) navi_navi_pane_g2_ParamLimits

0xc26c,	// (0x00043588) navi_navi_pane_g2

0x0001,

0xf8eb,	// (0x00046c07) navi_navi_pane_g_ParamLimits

0xf8eb,	// (0x00046c07) navi_navi_pane_g

0x32d1,	// (0x0003a5ed) navi_navi_tabs_pane

0xc27e,	// (0x0004359a) navi_navi_text_pane

0xc252,	// (0x0004356e) navi_navi_volume_pane

0xc240,	// (0x0004355c) navi_text_pane_t1

0xc234,	// (0x00043550) navi_icon_pane_g1

0x31c8,	// (0x0003a4e4) navi_navi_text_pane_t1

0xaa5a,	// (0x00041d76) navi_navi_volume_pane_g1

0xaa62,	// (0x00041d7e) volume_small_pane

0xc17c,	// (0x00043498) navi_navi_icon_text_pane_g1

0xc184,	// (0x000434a0) navi_navi_icon_text_pane_t1

0xf319,	// (0x00046635) navi_tabs_2_long_pane

0xf319,	// (0x00046635) navi_tabs_2_pane

0xf319,	// (0x00046635) navi_tabs_3_long_pane

0xf319,	// (0x00046635) navi_tabs_3_pane

0xf319,	// (0x00046635) navi_tabs_4_pane

0xaa3a,	// (0x00041d56) tabs_2_active_pane_ParamLimits

0xaa3a,	// (0x00041d56) tabs_2_active_pane

0xaa4a,	// (0x00041d66) tabs_2_passive_pane_ParamLimits

0xaa4a,	// (0x00041d66) tabs_2_passive_pane

0xaa08,	// (0x00041d24) tabs_3_active_pane_ParamLimits

0xaa08,	// (0x00041d24) tabs_3_active_pane

0xaa18,	// (0x00041d34) tabs_3_passive_pane_ParamLimits

0xaa18,	// (0x00041d34) tabs_3_passive_pane

0xaa29,	// (0x00041d45) tabs_3_passive_pane_cp_ParamLimits

0xaa29,	// (0x00041d45) tabs_3_passive_pane_cp

0xa9c4,	// (0x00041ce0) tabs_4_active_pane_ParamLimits

0xa9c4,	// (0x00041ce0) tabs_4_active_pane

0xa9d5,	// (0x00041cf1) tabs_4_passive_pane_ParamLimits

0xa9d5,	// (0x00041cf1) tabs_4_passive_pane

0xa9e6,	// (0x00041d02) tabs_4_passive_pane_cp_ParamLimits

0xa9e6,	// (0x00041d02) tabs_4_passive_pane_cp

0xa9f7,	// (0x00041d13) tabs_4_passive_pane_cp2_ParamLimits

0xa9f7,	// (0x00041d13) tabs_4_passive_pane_cp2

0xa9a0,	// (0x00041cbc) tabs_2_long_active_pane_ParamLimits

0xa9a0,	// (0x00041cbc) tabs_2_long_active_pane

0xa9b2,	// (0x00041cce) tabs_2_long_passive_pane_ParamLimits

0xa9b2,	// (0x00041cce) tabs_2_long_passive_pane

0xa955,	// (0x00041c71) tabs_3_long_active_pane_ParamLimits

0xa955,	// (0x00041c71) tabs_3_long_active_pane

0xa96e,	// (0x00041c8a) tabs_3_long_passive_pane_ParamLimits

0xa96e,	// (0x00041c8a) tabs_3_long_passive_pane

0xa987,	// (0x00041ca3) tabs_3_long_passive_pane_cp_ParamLimits

0xa987,	// (0x00041ca3) tabs_3_long_passive_pane_cp

0x026c,	// (0x00037588) volume_small_pane_g1

0xa904,	// (0x00041c20) volume_small_pane_g2

0xa90d,	// (0x00041c29) volume_small_pane_g3

0xa916,	// (0x00041c32) volume_small_pane_g4

0xa91f,	// (0x00041c3b) volume_small_pane_g5

0xa928,	// (0x00041c44) volume_small_pane_g6

0xa931,	// (0x00041c4d) volume_small_pane_g7

0xa93a,	// (0x00041c56) volume_small_pane_g8

0xa943,	// (0x00041c5f) volume_small_pane_g9

0xa94c,	// (0x00041c68) volume_small_pane_g10

0x0009,

0xf8b7,	// (0x00046bd3) volume_small_pane_g

0x8505,	// (0x0003f821) bg_active_tab_pane_cp2_ParamLimits

0x8505,	// (0x0003f821) bg_active_tab_pane_cp2

0x91b6,	// (0x000404d2) tabs_3_active_pane_g1

0x91be,	// (0x000404da) tabs_3_active_pane_t1

0x8505,	// (0x0003f821) bg_passive_tab_pane_cp2_ParamLimits

0x8505,	// (0x0003f821) bg_passive_tab_pane_cp2

0x91b6,	// (0x000404d2) tabs_3_passive_pane_g1

0x91be,	// (0x000404da) tabs_3_passive_pane_t1

0x8505,	// (0x0003f821) bg_active_tab_pane_cp3_ParamLimits

0x8505,	// (0x0003f821) bg_active_tab_pane_cp3

0x91d0,	// (0x000404ec) tabs_4_active_pane_g1

0x91d8,	// (0x000404f4) tabs_4_active_pane_t1

0x8505,	// (0x0003f821) bg_passive_tab_pane_cp3_ParamLimits

0x8505,	// (0x0003f821) bg_passive_tab_pane_cp3

0x91d0,	// (0x000404ec) tabs_4_1_passive_pane_g1

0x91d8,	// (0x000404f4) tabs_4_1_passive_pane_t1

0x18dd,	// (0x00038bf9) list_highlight_pane_cp2

0xc3ad,	// (0x000436c9) list_set_pane_ParamLimits

0xc3ad,	// (0x000436c9) list_set_pane

0xc475,	// (0x00043791) main_pane_set_t1_ParamLimits

0xc475,	// (0x00043791) main_pane_set_t1

0xc495,	// (0x000437b1) main_pane_set_t2_ParamLimits

0xc495,	// (0x000437b1) main_pane_set_t2

0xc4a9,	// (0x000437c5) main_pane_set_t3_ParamLimits

0xc4a9,	// (0x000437c5) main_pane_set_t3

0xc4bd,	// (0x000437d9) main_pane_set_t4_ParamLimits

0xc4bd,	// (0x000437d9) main_pane_set_t4

0x0003,

0xf987,	// (0x00046ca3) main_pane_set_t_ParamLimits

0xf987,	// (0x00046ca3) main_pane_set_t

0xc4d1,	// (0x000437ed) setting_code_pane

0x393c,	// (0x0003ac58) setting_slider_graphic_pane

0x393c,	// (0x0003ac58) setting_slider_pane

0x393c,	// (0x0003ac58) setting_text_pane

0x393c,	// (0x0003ac58) setting_volume_pane

0xeb95,	// (0x00045eb1) volume_set_pane

0x8498,	// (0x0003f7b4) bg_set_opt_pane_cp

0xeb9f,	// (0x00045ebb) setting_slider_pane_t1

0xebb8,	// (0x00045ed4) setting_slider_pane_t2

0xebd2,	// (0x00045eee) setting_slider_pane_t3

0x0002,

0xf564,	// (0x00046880) setting_slider_pane_t

0xebea,	// (0x00045f06) slider_set_pane

0x843e,	// (0x0003f75a) bg_set_opt_pane_cp2

0x84a6,	// (0x0003f7c2) setting_slider_graphic_pane_g1

0xec00,	// (0x00045f1c) setting_slider_graphic_pane_t1

0xec10,	// (0x00045f2c) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x00046887) setting_slider_graphic_pane_t

0xec20,	// (0x00045f3c) slider_set_pane_cp

0x843e,	// (0x0003f75a) input_focus_pane_cp1

0x37cf,	// (0x0003aaeb) list_set_text_pane

0x8434,	// (0x0003f750) setting_text_pane_g1

0x843e,	// (0x0003f75a) input_focus_pane_cp2

0x8434,	// (0x0003f750) setting_code_pane_g1

0x84af,	// (0x0003f7cb) setting_code_pane_t1

0xce1d,	// (0x00044139) set_text_pane_t1_ParamLimits

0xce1d,	// (0x00044139) set_text_pane_t1

0xb823,	// (0x00042b3f) set_opt_bg_pane_g1

0xb82b,	// (0x00042b47) set_opt_bg_pane_g2

0x37a7,	// (0x0003aac3) set_opt_bg_pane_g3

0xb83b,	// (0x00042b57) set_opt_bg_pane_g4

0xb843,	// (0x00042b5f) set_opt_bg_pane_g5

0xb84b,	// (0x00042b67) set_opt_bg_pane_g6

0x37b1,	// (0x0003aacd) set_opt_bg_pane_g7

0x37bb,	// (0x0003aad7) set_opt_bg_pane_g8

0x37c5,	// (0x0003aae1) set_opt_bg_pane_g9

0x0008,

0xf974,	// (0x00046c90) set_opt_bg_pane_g

0x379a,	// (0x0003aab6) slider_set_pane_g1

0x0478,	// (0x00037794) slider_set_pane_g2

0x0006,

0xf965,	// (0x00046c81) slider_set_pane_g

0x03d8,	// (0x000376f4) volume_set_pane_g1

0x03e2,	// (0x000376fe) volume_set_pane_g2

0x03ec,	// (0x00037708) volume_set_pane_g3

0x03f6,	// (0x00037712) volume_set_pane_g4

0x0400,	// (0x0003771c) volume_set_pane_g5

0x040a,	// (0x00037726) volume_set_pane_g6

0x0414,	// (0x00037730) volume_set_pane_g7

0x041e,	// (0x0003773a) volume_set_pane_g8

0x0428,	// (0x00037744) volume_set_pane_g9

0x0432,	// (0x0003774e) volume_set_pane_g10

0x0009,

0xf93d,	// (0x00046c59) volume_set_pane_g

0x91ea,	// (0x00040506) indicator_pane_ParamLimits

0x91ea,	// (0x00040506) indicator_pane

0x9216,	// (0x00040532) main_idle_pane_g2_ParamLimits

0x9216,	// (0x00040532) main_idle_pane_g2

0x924e,	// (0x0004056a) main_pane_idle_g1_ParamLimits

0x924e,	// (0x0004056a) main_pane_idle_g1

0x84bd,	// (0x0003f7d9) popup_clock_digital_analogue_window_ParamLimits

0x84bd,	// (0x0003f7d9) popup_clock_digital_analogue_window

0x927c,	// (0x00040598) soft_indicator_pane_ParamLimits

0x927c,	// (0x00040598) soft_indicator_pane

0x9298,	// (0x000405b4) wallpaper_pane_ParamLimits

0x9298,	// (0x000405b4) wallpaper_pane

0x8434,	// (0x0003f750) wallpaper_pane_g1

0x92aa,	// (0x000405c6) indicator_pane_g1_ParamLimits

0x92aa,	// (0x000405c6) indicator_pane_g1

0x3bf6,	// (0x0003af12) navi_navi_icon_text_pane_srt_g1

0x84eb,	// (0x0003f807) soft_indicator_pane_t1

0xb220,	// (0x0004253c) aid_ps_area_pane

0x92c3,	// (0x000405df) aid_ps_clock_pane

0xb231,	// (0x0004254d) aid_ps_indicator_pane

0xb23d,	// (0x00042559) indicator_ps_pane_ParamLimits

0xb23d,	// (0x00042559) indicator_ps_pane

0xb24c,	// (0x00042568) power_save_pane_g1_ParamLimits

0xb24c,	// (0x00042568) power_save_pane_g1

0xb258,	// (0x00042574) power_save_pane_g2_ParamLimits

0xb258,	// (0x00042574) power_save_pane_g2

0xe9c8,	// (0x00045ce4) aid_navinavi_width_pane

0xb220,	// (0x0004253c) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0004688c) power_save_pane_g_ParamLimits

0xf570,	// (0x0004688c) power_save_pane_g

0xb266,	// (0x00042582) power_save_pane_t1_ParamLimits

0xb266,	// (0x00042582) power_save_pane_t1

0x92c3,	// (0x000405df) aid_ps_clock_pane_ParamLimits

0xb231,	// (0x0004254d) aid_ps_indicator_pane_ParamLimits

0xb278,	// (0x00042594) power_save_pane_t4_ParamLimits

0xb278,	// (0x00042594) power_save_pane_t4

0x0001,

0xf575,	// (0x00046891) power_save_pane_t_ParamLimits

0xf575,	// (0x00046891) power_save_pane_t

0xb2a2,	// (0x000425be) power_save_t3_ParamLimits

0xb2a2,	// (0x000425be) power_save_t3

0xb28d,	// (0x000425a9) power_save_t2_ParamLimits

0xb28d,	// (0x000425a9) power_save_t2

0xb2b7,	// (0x000425d3) indicator_ps_pane_g1

0x92d1,	// (0x000405ed) ai_gene_pane_ParamLimits

0x92d1,	// (0x000405ed) ai_gene_pane

0x92e8,	// (0x00040604) ai_links_pane_ParamLimits

0x92e8,	// (0x00040604) ai_links_pane

0x9300,	// (0x0004061c) indicator_pane_cp1_ParamLimits

0x9300,	// (0x0004061c) indicator_pane_cp1

0x930f,	// (0x0004062b) main_pane_idle_g1_cp_ParamLimits

0x930f,	// (0x0004062b) main_pane_idle_g1_cp

0xb2c0,	// (0x000425dc) popup_ai_links_title_window

0x9327,	// (0x00040643) soft_indicator_pane_cp1_ParamLimits

0x9327,	// (0x00040643) soft_indicator_pane_cp1

0x3580,	// (0x0003a89c) ai_links_pane_g1

0x3589,	// (0x0003a8a5) grid_ai_links_pane

0xc2e2,	// (0x000435fe) ai_gene_pane_1

0x356e,	// (0x0003a88a) ai_gene_pane_2

0x3577,	// (0x0003a893) list_highlight_pane_cp4

0xc2be,	// (0x000435da) cell_ai_link_pane_ParamLimits

0xc2be,	// (0x000435da) cell_ai_link_pane

0x353d,	// (0x0003a859) cell_ai_link_pane_g1

0xb48e,	// (0x000427aa) cell_ai_link_pane_g2

0x0001,

0xf918,	// (0x00046c34) cell_ai_link_pane_g

0x843e,	// (0x0003f75a) grid_highlight_cp2

0x843e,	// (0x0003f75a) bg_popup_sub_pane_cp1

0xb2d7,	// (0x000425f3) popup_ai_links_title_window_t1

0x3489,	// (0x0003a7a5) ai_gene_pane_1_g1_ParamLimits

0x3489,	// (0x0003a7a5) ai_gene_pane_1_g1

0x3495,	// (0x0003a7b1) ai_gene_pane_1_g2_ParamLimits

0x3495,	// (0x0003a7b1) ai_gene_pane_1_g2

0x0001,

0xf90e,	// (0x00046c2a) ai_gene_pane_1_g_ParamLimits

0xf90e,	// (0x00046c2a) ai_gene_pane_1_g

0x34a2,	// (0x0003a7be) ai_gene_pane_1_t1_ParamLimits

0x34a2,	// (0x0003a7be) ai_gene_pane_1_t1

0x34d6,	// (0x0003a7f2) grid_ai_soft_ind_pane

0x3474,	// (0x0003a790) ai_gene_pane_2_t1_ParamLimits

0x3474,	// (0x0003a790) ai_gene_pane_2_t1

0x933b,	// (0x00040657) main_pane_empty_t1_ParamLimits

0x933b,	// (0x00040657) main_pane_empty_t1

0x9353,	// (0x0004066f) main_pane_empty_t2_ParamLimits

0x9353,	// (0x0004066f) main_pane_empty_t2

0x9368,	// (0x00040684) main_pane_empty_t3_ParamLimits

0x9368,	// (0x00040684) main_pane_empty_t3

0x937a,	// (0x00040696) main_pane_empty_t4_ParamLimits

0x937a,	// (0x00040696) main_pane_empty_t4

0x938c,	// (0x000406a8) main_pane_empty_t5_ParamLimits

0x938c,	// (0x000406a8) main_pane_empty_t5

0x0004,

0xf57a,	// (0x00046896) main_pane_empty_t_ParamLimits

0xf57a,	// (0x00046896) main_pane_empty_t

0xb874,	// (0x00042b90) bg_popup_window_pane_ParamLimits

0xb874,	// (0x00042b90) bg_popup_window_pane

0x31d6,	// (0x0003a4f2) find_popup_pane_cp2_ParamLimits

0x31d6,	// (0x0003a4f2) find_popup_pane_cp2

0x31e2,	// (0x0003a4fe) heading_pane_ParamLimits

0x31e2,	// (0x0003a4fe) heading_pane

0x843e,	// (0x0003f75a) bg_popup_sub_pane

0xc1a1,	// (0x000434bd) bg_popup_window_pane_g1_ParamLimits

0xc1a1,	// (0x000434bd) bg_popup_window_pane_g1

0xc1b0,	// (0x000434cc) bg_popup_window_pane_g2_ParamLimits

0xc1b0,	// (0x000434cc) bg_popup_window_pane_g2

0xc1bc,	// (0x000434d8) bg_popup_window_pane_g3_ParamLimits

0xc1bc,	// (0x000434d8) bg_popup_window_pane_g3

0xc1c8,	// (0x000434e4) bg_popup_window_pane_g4_ParamLimits

0xc1c8,	// (0x000434e4) bg_popup_window_pane_g4

0xc1d7,	// (0x000434f3) bg_popup_window_pane_g5_ParamLimits

0xc1d7,	// (0x000434f3) bg_popup_window_pane_g5

0xc1e7,	// (0x00043503) bg_popup_window_pane_g6_ParamLimits

0xc1e7,	// (0x00043503) bg_popup_window_pane_g6

0xc1f3,	// (0x0004350f) bg_popup_window_pane_g7_ParamLimits

0xc1f3,	// (0x0004350f) bg_popup_window_pane_g7

0xc202,	// (0x0004351e) bg_popup_window_pane_g8_ParamLimits

0xc202,	// (0x0004351e) bg_popup_window_pane_g8

0xc211,	// (0x0004352d) bg_popup_window_pane_g9_ParamLimits

0xc211,	// (0x0004352d) bg_popup_window_pane_g9

0x31bc,	// (0x0003a4d8) bg_popup_window_pane_g10_ParamLimits

0x31bc,	// (0x0003a4d8) bg_popup_window_pane_g10

0x0009,

0xf8d6,	// (0x00046bf2) bg_popup_window_pane_g_ParamLimits

0xf8d6,	// (0x00046bf2) bg_popup_window_pane_g

0x30e5,	// (0x0003a401) bg_popup_heading_pane_ParamLimits

0x30e5,	// (0x0003a401) bg_popup_heading_pane

0x0589,	// (0x000378a5) tabs_4_passive_pane_cp_srt_ParamLimits

0x0589,	// (0x000378a5) tabs_4_passive_pane_cp_srt

0x059b,	// (0x000378b7) tabs_4_passive_pane_srt_ParamLimits

0x30f9,	// (0x0003a415) heading_pane_g2

0x059b,	// (0x000378b7) tabs_4_passive_pane_srt

0x2492,	// (0x000397ae) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2492,	// (0x000397ae) bg_passive_tab_pane_cp3_srt

0x3101,	// (0x0003a41d) heading_pane_t1_ParamLimits

0x3101,	// (0x0003a41d) heading_pane_t1

0x3118,	// (0x0003a434) heading_pane_t2_ParamLimits

0x3118,	// (0x0003a434) heading_pane_t2

0x0001,

0xf8d1,	// (0x00046bed) heading_pane_t_ParamLimits

0xf8d1,	// (0x00046bed) heading_pane_t

0x2c10,	// (0x00039f2c) bg_popup_heading_pane_g1

0x2cbf,	// (0x00039fdb) bg_popup_heading_pane_g2

0x2cc9,	// (0x00039fe5) bg_popup_heading_pane_g3

0x2cd3,	// (0x00039fef) bg_popup_heading_pane_g4

0x2cdd,	// (0x00039ff9) bg_popup_heading_pane_g5

0x2ce7,	// (0x0003a003) bg_popup_heading_pane_g6

0x2cef,	// (0x0003a00b) bg_popup_heading_pane_g7

0x2cf7,	// (0x0003a013) bg_popup_heading_pane_g8

0x2d01,	// (0x0003a01d) bg_popup_heading_pane_g9

0x0008,

0xf88d,	// (0x00046ba9) bg_popup_heading_pane_g

0x241e,	// (0x0003973a) bg_popup_sub_pane_g1

0x242e,	// (0x0003974a) bg_popup_sub_pane_g2

0x2426,	// (0x00039742) bg_popup_sub_pane_g3

0x243e,	// (0x0003975a) bg_popup_sub_pane_g4

0x2436,	// (0x00039752) bg_popup_sub_pane_g5

0x2446,	// (0x00039762) bg_popup_sub_pane_g6

0x244e,	// (0x0003976a) bg_popup_sub_pane_g7

0x245e,	// (0x0003977a) bg_popup_sub_pane_g8

0x2456,	// (0x00039772) bg_popup_sub_pane_g9

0x0008,

0xf867,	// (0x00046b83) bg_popup_sub_pane_g

0x8505,	// (0x0003f821) bg_popup_window_pane_cp5_ParamLimits

0x8505,	// (0x0003f821) bg_popup_window_pane_cp5

0xb2f4,	// (0x00042610) popup_note_window_g1_ParamLimits

0xb2f4,	// (0x00042610) popup_note_window_g1

0xb300,	// (0x0004261c) popup_note_window_t1_ParamLimits

0xb300,	// (0x0004261c) popup_note_window_t1

0xb316,	// (0x00042632) popup_note_window_t2_ParamLimits

0xb316,	// (0x00042632) popup_note_window_t2

0xb32c,	// (0x00042648) popup_note_window_t3_ParamLimits

0xb32c,	// (0x00042648) popup_note_window_t3

0xb342,	// (0x0004265e) popup_note_window_t4_ParamLimits

0xb342,	// (0x0004265e) popup_note_window_t4

0xb36a,	// (0x00042686) popup_note_window_t5_ParamLimits

0xb36a,	// (0x00042686) popup_note_window_t5

0x0004,

0xf585,	// (0x000468a1) popup_note_window_t_ParamLimits

0xf585,	// (0x000468a1) popup_note_window_t

0xb38e,	// (0x000426aa) bg_popup_window_pane_cp6_ParamLimits

0xb38e,	// (0x000426aa) bg_popup_window_pane_cp6

0x2b8c,	// (0x00039ea8) popup_note_image_window_g1_ParamLimits

0x2b8c,	// (0x00039ea8) popup_note_image_window_g1

0x2b98,	// (0x00039eb4) popup_note_image_window_g2_ParamLimits

0x2b98,	// (0x00039eb4) popup_note_image_window_g2

0x0001,

0xf85b,	// (0x00046b77) popup_note_image_window_g_ParamLimits

0xf85b,	// (0x00046b77) popup_note_image_window_g

0x2bb1,	// (0x00039ecd) popup_note_image_window_t1_ParamLimits

0x2bb1,	// (0x00039ecd) popup_note_image_window_t1

0x2bca,	// (0x00039ee6) popup_note_image_window_t2_ParamLimits

0x2bca,	// (0x00039ee6) popup_note_image_window_t2

0x2be3,	// (0x00039eff) popup_note_image_window_t3_ParamLimits

0x2be3,	// (0x00039eff) popup_note_image_window_t3

0x0002,

0xf860,	// (0x00046b7c) popup_note_image_window_t_ParamLimits

0xf860,	// (0x00046b7c) popup_note_image_window_t

0x2a4c,	// (0x00039d68) bg_popup_window_pane_cp7_ParamLimits

0x2a4c,	// (0x00039d68) bg_popup_window_pane_cp7

0x2a7c,	// (0x00039d98) popup_note_wait_window_g1_ParamLimits

0x2a7c,	// (0x00039d98) popup_note_wait_window_g1

0x2a88,	// (0x00039da4) popup_note_wait_window_g2_ParamLimits

0x2a88,	// (0x00039da4) popup_note_wait_window_g2

0x0002,

0xf849,	// (0x00046b65) popup_note_wait_window_g_ParamLimits

0xf849,	// (0x00046b65) popup_note_wait_window_g

0x2aa0,	// (0x00039dbc) popup_note_wait_window_t1_ParamLimits

0x2aa0,	// (0x00039dbc) popup_note_wait_window_t1

0x2ac7,	// (0x00039de3) popup_note_wait_window_t2_ParamLimits

0x2ac7,	// (0x00039de3) popup_note_wait_window_t2

0x2ae5,	// (0x00039e01) popup_note_wait_window_t3_ParamLimits

0x2ae5,	// (0x00039e01) popup_note_wait_window_t3

0x2af8,	// (0x00039e14) popup_note_wait_window_t4_ParamLimits

0x2af8,	// (0x00039e14) popup_note_wait_window_t4

0x0004,

0xf850,	// (0x00046b6c) popup_note_wait_window_t_ParamLimits

0xf850,	// (0x00046b6c) popup_note_wait_window_t

0x2b1d,	// (0x00039e39) wait_bar_pane_ParamLimits

0x2b1d,	// (0x00039e39) wait_bar_pane

0x843e,	// (0x0003f75a) wait_anim_pane

0x843e,	// (0x0003f75a) wait_border_pane

0x8434,	// (0x0003f750) wait_anim_pane_g1

0x8434,	// (0x0003f750) wait_anim_pane_g2

0x0001,

0xf709,	// (0x00046a25) wait_anim_pane_g

0x29f0,	// (0x00039d0c) wait_border_pane_g1

0x29fb,	// (0x00039d17) wait_border_pane_g2

0x2a04,	// (0x00039d20) wait_border_pane_g3

0x0002,

0xf842,	// (0x00046b5e) wait_border_pane_g

0x285a,	// (0x00039b76) bg_popup_window_pane_cp16_ParamLimits

0x285a,	// (0x00039b76) bg_popup_window_pane_cp16

0x295a,	// (0x00039c76) indicator_popup_pane_cp4_ParamLimits

0x295a,	// (0x00039c76) indicator_popup_pane_cp4

0x296e,	// (0x00039c8a) popup_query_data_window_t1_ParamLimits

0x296e,	// (0x00039c8a) popup_query_data_window_t1

0x2980,	// (0x00039c9c) popup_query_data_window_t2_ParamLimits

0x2980,	// (0x00039c9c) popup_query_data_window_t2

0x2999,	// (0x00039cb5) popup_query_data_window_t3_ParamLimits

0x2999,	// (0x00039cb5) popup_query_data_window_t3

0x0002,

0xf83b,	// (0x00046b57) popup_query_data_window_t_ParamLimits

0xf83b,	// (0x00046b57) popup_query_data_window_t

0x29b3,	// (0x00039ccf) query_popup_data_pane_ParamLimits

0x29b3,	// (0x00039ccf) query_popup_data_pane

0x29c7,	// (0x00039ce3) query_popup_data_pane_cp1_ParamLimits

0x29c7,	// (0x00039ce3) query_popup_data_pane_cp1

0x285a,	// (0x00039b76) bg_popup_window_pane_cp10_ParamLimits

0x285a,	// (0x00039b76) bg_popup_window_pane_cp10

0x288c,	// (0x00039ba8) indicator_popup_pane_ParamLimits

0x288c,	// (0x00039ba8) indicator_popup_pane

0x28ae,	// (0x00039bca) popup_query_code_window_t1_ParamLimits

0x28ae,	// (0x00039bca) popup_query_code_window_t1

0x28c8,	// (0x00039be4) popup_query_code_window_t2_ParamLimits

0x28c8,	// (0x00039be4) popup_query_code_window_t2

0x2911,	// (0x00039c2d) popup_query_code_window_t3_ParamLimits

0x2911,	// (0x00039c2d) popup_query_code_window_t3

0x0002,

0xf834,	// (0x00046b50) popup_query_code_window_t_ParamLimits

0xf834,	// (0x00046b50) popup_query_code_window_t

0x2940,	// (0x00039c5c) query_popup_pane_ParamLimits

0x2940,	// (0x00039c5c) query_popup_pane

0xb38e,	// (0x000426aa) bg_popup_window_pane_cp15_ParamLimits

0xb38e,	// (0x000426aa) bg_popup_window_pane_cp15

0xb3ae,	// (0x000426ca) indicator_popup_pane_cp1_ParamLimits

0xb3ae,	// (0x000426ca) indicator_popup_pane_cp1

0xb3c1,	// (0x000426dd) indicator_popup_pane_cp2_ParamLimits

0xb3c1,	// (0x000426dd) indicator_popup_pane_cp2

0xb3dc,	// (0x000426f8) popup_query_data_code_window_g1_ParamLimits

0xb3dc,	// (0x000426f8) popup_query_data_code_window_g1

0xb3ef,	// (0x0004270b) popup_query_data_code_window_t1_ParamLimits

0xb3ef,	// (0x0004270b) popup_query_data_code_window_t1

0xb401,	// (0x0004271d) popup_query_data_code_window_t2_ParamLimits

0xb401,	// (0x0004271d) popup_query_data_code_window_t2

0xb413,	// (0x0004272f) popup_query_data_code_window_t3_ParamLimits

0xb413,	// (0x0004272f) popup_query_data_code_window_t3

0xb429,	// (0x00042745) popup_query_data_code_window_t4_ParamLimits

0xb429,	// (0x00042745) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x000468ac) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x000468ac) popup_query_data_code_window_t

0x0155,	// (0x00037471) list_single_midp_graphic_pane_g3

0xb443,	// (0x0004275f) query_popup_data_pane_cp2_ParamLimits

0xb456,	// (0x00042772) query_popup_pane_cp2_ParamLimits

0xb456,	// (0x00042772) query_popup_pane_cp2

0x843e,	// (0x0003f75a) bg_popup_window_pane_cp11

0x2852,	// (0x00039b6e) heading_pane_cp5

0xb4ec,	// (0x00042808) listscroll_popup_info_pane

0x843e,	// (0x0003f75a) input_focus_pane_cp3

0xb471,	// (0x0004278d) query_popup_pane_t1

0xb47f,	// (0x0004279b) list_popup_info_pane_ParamLimits

0xb47f,	// (0x0004279b) list_popup_info_pane

0xb48e,	// (0x000427aa) listscroll_popup_info_pane_g1

0xb496,	// (0x000427b2) scroll_pane_cp7

0xb4a0,	// (0x000427bc) popup_info_list_pane_t1_ParamLimits

0xb4a0,	// (0x000427bc) popup_info_list_pane_t1

0xb4ba,	// (0x000427d6) popup_info_list_pane_t2_ParamLimits

0xb4ba,	// (0x000427d6) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x000468b5) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x000468b5) popup_info_list_pane_t

0x843e,	// (0x0003f75a) bg_popup_window_pane_cp12

0x3c10,	// (0x0003af2c) find_popup_pane

0x8498,	// (0x0003f7b4) bg_popup_window_pane_cp3

0xb4d4,	// (0x000427f0) heading_pane_cp3

0xb4e0,	// (0x000427fc) listscroll_popup_graphic_pane

0x843e,	// (0x0003f75a) bg_popup_window_pane_cp4

0x93ee,	// (0x0004070a) heading_pane_cp4

0xb4ec,	// (0x00042808) listscroll_popup_colour_pane

0x93f8,	// (0x00040714) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x93f8,	// (0x00040714) cell_large_graphic_colour_none_popup_pane

0x940c,	// (0x00040728) grid_large_graphic_colour_popup_pane_ParamLimits

0x940c,	// (0x00040728) grid_large_graphic_colour_popup_pane

0x9430,	// (0x0004074c) listscroll_popup_colour_pane_g1_ParamLimits

0x9430,	// (0x0004074c) listscroll_popup_colour_pane_g1

0x9447,	// (0x00040763) listscroll_popup_colour_pane_g2_ParamLimits

0x9447,	// (0x00040763) listscroll_popup_colour_pane_g2

0x945e,	// (0x0004077a) listscroll_popup_colour_pane_g3_ParamLimits

0x945e,	// (0x0004077a) listscroll_popup_colour_pane_g3

0x946e,	// (0x0004078a) listscroll_popup_colour_pane_g4_ParamLimits

0x946e,	// (0x0004078a) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x000468ba) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x000468ba) listscroll_popup_colour_pane_g

0xb4f4,	// (0x00042810) scroll_pane_cp6_ParamLimits

0xb4f4,	// (0x00042810) scroll_pane_cp6

0x947e,	// (0x0004079a) cell_large_graphic_colour_popup_pane_ParamLimits

0x947e,	// (0x0004079a) cell_large_graphic_colour_popup_pane

0xb506,	// (0x00042822) cell_large_graphic_colour_none_popup_pane_t1

0x843e,	// (0x0003f75a) grid_highlight_pane_cp5

0xb515,	// (0x00042831) cell_large_graphic_colour_popup_pane_g1

0xb51d,	// (0x00042839) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x000468c3) cell_large_graphic_colour_popup_pane_g

0xb525,	// (0x00042841) cell_large_graphic_colour_popup_pane_g2_copy1

0xb52e,	// (0x0004284a) grid_highlight_pane_cp4

0xb536,	// (0x00042852) bg_popup_window_pane_cp8_ParamLimits

0xb536,	// (0x00042852) bg_popup_window_pane_cp8

0xb551,	// (0x0004286d) popup_snote_single_text_window_g1_ParamLimits

0xb551,	// (0x0004286d) popup_snote_single_text_window_g1

0xb563,	// (0x0004287f) popup_snote_single_text_window_t1_ParamLimits

0xb563,	// (0x0004287f) popup_snote_single_text_window_t1

0xb576,	// (0x00042892) popup_snote_single_text_window_t2_ParamLimits

0xb576,	// (0x00042892) popup_snote_single_text_window_t2

0xb589,	// (0x000428a5) popup_snote_single_text_window_t3_ParamLimits

0xb589,	// (0x000428a5) popup_snote_single_text_window_t3

0xb5c2,	// (0x000428de) popup_snote_single_text_window_t4_ParamLimits

0xb5c2,	// (0x000428de) popup_snote_single_text_window_t4

0xb5f6,	// (0x00042912) popup_snote_single_text_window_t5_ParamLimits

0xb5f6,	// (0x00042912) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x000468c8) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x000468c8) popup_snote_single_text_window_t

0xb625,	// (0x00042941) bg_popup_window_pane_cp9_ParamLimits

0xb625,	// (0x00042941) bg_popup_window_pane_cp9

0xb551,	// (0x0004286d) popup_snote_single_graphic_window_g1_ParamLimits

0xb551,	// (0x0004286d) popup_snote_single_graphic_window_g1

0xb633,	// (0x0004294f) popup_snote_single_graphic_window_g2_ParamLimits

0xb633,	// (0x0004294f) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x000468d3) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x000468d3) popup_snote_single_graphic_window_g

0xb63f,	// (0x0004295b) popup_snote_single_graphic_window_t1_ParamLimits

0xb63f,	// (0x0004295b) popup_snote_single_graphic_window_t1

0xb652,	// (0x0004296e) popup_snote_single_graphic_window_t2_ParamLimits

0xb652,	// (0x0004296e) popup_snote_single_graphic_window_t2

0xb665,	// (0x00042981) popup_snote_single_graphic_window_t3_ParamLimits

0xb665,	// (0x00042981) popup_snote_single_graphic_window_t3

0xb69e,	// (0x000429ba) popup_snote_single_graphic_window_t4_ParamLimits

0xb69e,	// (0x000429ba) popup_snote_single_graphic_window_t4

0xb6d2,	// (0x000429ee) popup_snote_single_graphic_window_t5_ParamLimits

0xb6d2,	// (0x000429ee) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x000468d8) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x000468d8) popup_snote_single_graphic_window_t

0x3b4e,	// (0x0003ae6a) grid_graphic_popup_pane_ParamLimits

0x3b4e,	// (0x0003ae6a) grid_graphic_popup_pane

0x3b7c,	// (0x0003ae98) listscroll_popup_graphic_pane_g1_ParamLimits

0x3b7c,	// (0x0003ae98) listscroll_popup_graphic_pane_g1

0xc5ea,	// (0x00043906) listscroll_popup_graphic_pane_g2_ParamLimits

0xc5ea,	// (0x00043906) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b1,	// (0x00046ccd) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b1,	// (0x00046ccd) listscroll_popup_graphic_pane_g

0x3ba4,	// (0x0003aec0) scroll_pane_cp5

0xc5a9,	// (0x000438c5) cell_graphic_popup_pane_ParamLimits

0xc5a9,	// (0x000438c5) cell_graphic_popup_pane

0x3ad7,	// (0x0003adf3) cell_graphic_popup_pane_g1

0x3adf,	// (0x0003adfb) cell_graphic_popup_pane_g2

0xb525,	// (0x00042841) cell_graphic_popup_pane_g3

0x0002,

0xf9aa,	// (0x00046cc6) cell_graphic_popup_pane_g

0x3ae8,	// (0x0003ae04) cell_graphic_popup_pane_t2

0xb52e,	// (0x0004284a) grid_highlight_pane_cp3

0xb713,	// (0x00042a2f) list_gen_pane_ParamLimits

0xb713,	// (0x00042a2f) list_gen_pane

0xb73b,	// (0x00042a57) scroll_pane

0xc560,	// (0x0004387c) bg_list_pane_g1_ParamLimits

0xc560,	// (0x0004387c) bg_list_pane_g1

0x3a4c,	// (0x0003ad68) bg_list_pane_g2_ParamLimits

0x3a4c,	// (0x0003ad68) bg_list_pane_g2

0x3a61,	// (0x0003ad7d) bg_list_pane_g3_ParamLimits

0x3a61,	// (0x0003ad7d) bg_list_pane_g3

0x3a75,	// (0x0003ad91) bg_list_pane_g4_ParamLimits

0x3a75,	// (0x0003ad91) bg_list_pane_g4

0xc57d,	// (0x00043899) bg_list_pane_g5_ParamLimits

0xc57d,	// (0x00043899) bg_list_pane_g5

0x0004,

0xf99f,	// (0x00046cbb) bg_list_pane_g_ParamLimits

0xf99f,	// (0x00046cbb) bg_list_pane_g

0xc50f,	// (0x0004382b) list_double2_graphic_large_graphic_pane_ParamLimits

0xc50f,	// (0x0004382b) list_double2_graphic_large_graphic_pane

0xc50f,	// (0x0004382b) list_double2_graphic_pane_ParamLimits

0xc50f,	// (0x0004382b) list_double2_graphic_pane

0xc50f,	// (0x0004382b) list_double2_large_graphic_pane_ParamLimits

0xc50f,	// (0x0004382b) list_double2_large_graphic_pane

0xc523,	// (0x0004383f) list_double2_pane_ParamLimits

0xc523,	// (0x0004383f) list_double2_pane

0xc50f,	// (0x0004382b) list_double_graphic_heading_pane_ParamLimits

0xc50f,	// (0x0004382b) list_double_graphic_heading_pane

0xc50f,	// (0x0004382b) list_double_graphic_pane_ParamLimits

0xc50f,	// (0x0004382b) list_double_graphic_pane

0xc50f,	// (0x0004382b) list_double_heading_pane_ParamLimits

0xc50f,	// (0x0004382b) list_double_heading_pane

0xc50f,	// (0x0004382b) list_double_large_graphic_pane_ParamLimits

0xc50f,	// (0x0004382b) list_double_large_graphic_pane

0xc50f,	// (0x0004382b) list_double_number_pane_ParamLimits

0xc50f,	// (0x0004382b) list_double_number_pane

0xc50f,	// (0x0004382b) list_double_pane_ParamLimits

0xc50f,	// (0x0004382b) list_double_pane

0xc50f,	// (0x0004382b) list_double_time_pane_ParamLimits

0xc50f,	// (0x0004382b) list_double_time_pane

0xc50f,	// (0x0004382b) list_setting_number_pane_ParamLimits

0xc50f,	// (0x0004382b) list_setting_number_pane

0xc50f,	// (0x0004382b) list_setting_pane_ParamLimits

0xc50f,	// (0x0004382b) list_setting_pane

0xaaa9,	// (0x00041dc5) list_single_2graphic_pane_ParamLimits

0xaaa9,	// (0x00041dc5) list_single_2graphic_pane

0xaaa9,	// (0x00041dc5) list_single_graphic_heading_pane_ParamLimits

0xaaa9,	// (0x00041dc5) list_single_graphic_heading_pane

0xaaa9,	// (0x00041dc5) list_single_graphic_pane_ParamLimits

0xaaa9,	// (0x00041dc5) list_single_graphic_pane

0xaaa9,	// (0x00041dc5) list_single_heading_pane_ParamLimits

0xaaa9,	// (0x00041dc5) list_single_heading_pane

0xc523,	// (0x0004383f) list_single_large_graphic_pane_ParamLimits

0xc523,	// (0x0004383f) list_single_large_graphic_pane

0xaaa9,	// (0x00041dc5) list_single_number_heading_pane_ParamLimits

0xaaa9,	// (0x00041dc5) list_single_number_heading_pane

0xaaa9,	// (0x00041dc5) list_single_number_pane_ParamLimits

0xaaa9,	// (0x00041dc5) list_single_number_pane

0xaaa9,	// (0x00041dc5) list_single_pane_ParamLimits

0xaaa9,	// (0x00041dc5) list_single_pane

0x843e,	// (0x0003f75a) list_highlight_pane_cp1

0xce38,	// (0x00044154) list_single_pane_g1_ParamLimits

0xce38,	// (0x00044154) list_single_pane_g1

0xce44,	// (0x00044160) list_single_pane_g2_ParamLimits

0xce44,	// (0x00044160) list_single_pane_g2

0x0001,

0xf5ce,	// (0x000468ea) list_single_pane_g_ParamLimits

0xf5ce,	// (0x000468ea) list_single_pane_g

0xd283,	// (0x0004459f) list_single_pane_t1_ParamLimits

0xd283,	// (0x0004459f) list_single_pane_t1

0xce38,	// (0x00044154) list_single_number_pane_g1_ParamLimits

0xce38,	// (0x00044154) list_single_number_pane_g1

0xce44,	// (0x00044160) list_single_number_pane_g2_ParamLimits

0xce44,	// (0x00044160) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x000468ea) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x000468ea) list_single_number_pane_g

0xd1ac,	// (0x000444c8) list_single_number_pane_t1_ParamLimits

0xd1ac,	// (0x000444c8) list_single_number_pane_t1

0xaa6b,	// (0x00041d87) list_single_number_pane_t2_ParamLimits

0xaa6b,	// (0x00041d87) list_single_number_pane_t2

0x0001,

0xf960,	// (0x00046c7c) list_single_number_pane_t_ParamLimits

0xf960,	// (0x00046c7c) list_single_number_pane_t

0x94a9,	// (0x000407c5) list_single_graphic_pane_g1_ParamLimits

0x94a9,	// (0x000407c5) list_single_graphic_pane_g1

0xce38,	// (0x00044154) list_single_graphic_pane_g2_ParamLimits

0xce38,	// (0x00044154) list_single_graphic_pane_g2

0xce44,	// (0x00044160) list_single_graphic_pane_g3_ParamLimits

0xce44,	// (0x00044160) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x000468e3) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x000468e3) list_single_graphic_pane_g

0x94b5,	// (0x000407d1) list_single_graphic_pane_t1_ParamLimits

0x94b5,	// (0x000407d1) list_single_graphic_pane_t1

0xce38,	// (0x00044154) list_single_heading_pane_g1_ParamLimits

0xce38,	// (0x00044154) list_single_heading_pane_g1

0xce44,	// (0x00044160) list_single_heading_pane_g2_ParamLimits

0xce44,	// (0x00044160) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x000468ea) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x000468ea) list_single_heading_pane_g

0x94cb,	// (0x000407e7) list_single_heading_pane_t1_ParamLimits

0x94cb,	// (0x000407e7) list_single_heading_pane_t1

0x94e1,	// (0x000407fd) list_single_heading_pane_t2_ParamLimits

0x94e1,	// (0x000407fd) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x000468ef) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x000468ef) list_single_heading_pane_t

0xce38,	// (0x00044154) list_single_number_heading_pane_g1_ParamLimits

0xce38,	// (0x00044154) list_single_number_heading_pane_g1

0xce44,	// (0x00044160) list_single_number_heading_pane_g2_ParamLimits

0xce44,	// (0x00044160) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x000468ea) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x000468ea) list_single_number_heading_pane_g

0x94cb,	// (0x000407e7) list_single_number_heading_pane_t1_ParamLimits

0x94cb,	// (0x000407e7) list_single_number_heading_pane_t1

0x94f3,	// (0x0004080f) list_single_number_heading_pane_t2_ParamLimits

0x94f3,	// (0x0004080f) list_single_number_heading_pane_t2

0xce50,	// (0x0004416c) list_single_number_heading_pane_t3_ParamLimits

0xce50,	// (0x0004416c) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x000468f4) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x000468f4) list_single_number_heading_pane_t

0xce62,	// (0x0004417e) list_single_graphic_heading_pane_g1_ParamLimits

0xce62,	// (0x0004417e) list_single_graphic_heading_pane_g1

0x9505,	// (0x00040821) list_single_graphic_heading_pane_g4_ParamLimits

0x9505,	// (0x00040821) list_single_graphic_heading_pane_g4

0xce44,	// (0x00044160) list_single_graphic_heading_pane_g5_ParamLimits

0xce44,	// (0x00044160) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x000468fb) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x000468fb) list_single_graphic_heading_pane_g

0x94cb,	// (0x000407e7) list_single_graphic_heading_pane_t1_ParamLimits

0x94cb,	// (0x000407e7) list_single_graphic_heading_pane_t1

0x9516,	// (0x00040832) list_single_graphic_heading_pane_t2_ParamLimits

0x9516,	// (0x00040832) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x00046902) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x00046902) list_single_graphic_heading_pane_t

0xce6e,	// (0x0004418a) list_single_large_graphic_pane_g1_ParamLimits

0xce6e,	// (0x0004418a) list_single_large_graphic_pane_g1

0xce7a,	// (0x00044196) list_single_large_graphic_pane_g2_ParamLimits

0xce7a,	// (0x00044196) list_single_large_graphic_pane_g2

0xce86,	// (0x000441a2) list_single_large_graphic_pane_g3_ParamLimits

0xce86,	// (0x000441a2) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x00046907) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x00046907) list_single_large_graphic_pane_g

0x29fb,	// (0x00039d17) wait_border_pane_g2_copy1

0x9528,	// (0x00040844) list_single_large_graphic_pane_g4_cp2

0xce92,	// (0x000441ae) list_single_large_graphic_pane_t1_ParamLimits

0xce92,	// (0x000441ae) list_single_large_graphic_pane_t1

0x9530,	// (0x0004084c) list_double_pane_g1_ParamLimits

0x9530,	// (0x0004084c) list_double_pane_g1

0x953c,	// (0x00040858) list_double_pane_g2_ParamLimits

0x953c,	// (0x00040858) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0004690e) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0004690e) list_double_pane_g

0x9548,	// (0x00040864) list_double_pane_t1_ParamLimits

0x9548,	// (0x00040864) list_double_pane_t1

0x955e,	// (0x0004087a) list_double_pane_t2_ParamLimits

0x955e,	// (0x0004087a) list_double_pane_t2

0x0001,

0xf5f7,	// (0x00046913) list_double_pane_t_ParamLimits

0xf5f7,	// (0x00046913) list_double_pane_t

0x9570,	// (0x0004088c) list_double2_pane_g1_ParamLimits

0x9570,	// (0x0004088c) list_double2_pane_g1

0x9581,	// (0x0004089d) list_double2_pane_g2_ParamLimits

0x9581,	// (0x0004089d) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x00046918) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x00046918) list_double2_pane_g

0x958d,	// (0x000408a9) list_double2_pane_t1_ParamLimits

0x958d,	// (0x000408a9) list_double2_pane_t1

0x95a3,	// (0x000408bf) list_double2_pane_t2_ParamLimits

0x95a3,	// (0x000408bf) list_double2_pane_t2

0x0001,

0xf601,	// (0x0004691d) list_double2_pane_t_ParamLimits

0xf601,	// (0x0004691d) list_double2_pane_t

0x9530,	// (0x0004084c) list_double_number_pane_g1_ParamLimits

0x9530,	// (0x0004084c) list_double_number_pane_g1

0x953c,	// (0x00040858) list_double_number_pane_g2_ParamLimits

0x953c,	// (0x00040858) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0004690e) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0004690e) list_double_number_pane_g

0x95b5,	// (0x000408d1) list_double_number_pane_t1_ParamLimits

0x95b5,	// (0x000408d1) list_double_number_pane_t1

0x95c7,	// (0x000408e3) list_double_number_pane_t2_ParamLimits

0x95c7,	// (0x000408e3) list_double_number_pane_t2

0x95dd,	// (0x000408f9) list_double_number_pane_t3_ParamLimits

0x95dd,	// (0x000408f9) list_double_number_pane_t3

0x0002,

0xf606,	// (0x00046922) list_double_number_pane_t_ParamLimits

0xf606,	// (0x00046922) list_double_number_pane_t

0x95ef,	// (0x0004090b) list_double_graphic_pane_g1_ParamLimits

0x95ef,	// (0x0004090b) list_double_graphic_pane_g1

0x95fb,	// (0x00040917) list_double_graphic_pane_g2_ParamLimits

0x95fb,	// (0x00040917) list_double_graphic_pane_g2

0x960a,	// (0x00040926) list_double_graphic_pane_g3_ParamLimits

0x960a,	// (0x00040926) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x00046929) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x00046929) list_double_graphic_pane_g

0x9622,	// (0x0004093e) list_double_graphic_pane_t1_ParamLimits

0x9622,	// (0x0004093e) list_double_graphic_pane_t1

0x9638,	// (0x00040954) list_double_graphic_pane_t2_ParamLimits

0x9638,	// (0x00040954) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x00046932) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x00046932) list_double_graphic_pane_t

0x964a,	// (0x00040966) list_double2_graphic_pane_g1_ParamLimits

0x964a,	// (0x00040966) list_double2_graphic_pane_g1

0x9656,	// (0x00040972) list_double2_graphic_pane_g2_ParamLimits

0x9656,	// (0x00040972) list_double2_graphic_pane_g2

0x9662,	// (0x0004097e) list_double2_graphic_pane_g3_ParamLimits

0x9662,	// (0x0004097e) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x00046937) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x00046937) list_double2_graphic_pane_g

0x966e,	// (0x0004098a) list_double2_graphic_pane_t1_ParamLimits

0x966e,	// (0x0004098a) list_double2_graphic_pane_t1

0x9684,	// (0x000409a0) list_double2_graphic_pane_t2_ParamLimits

0x9684,	// (0x000409a0) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0004693e) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0004693e) list_double2_graphic_pane_t

0x9696,	// (0x000409b2) list_double_large_graphic_pane_g1_ParamLimits

0x9696,	// (0x000409b2) list_double_large_graphic_pane_g1

0x96c1,	// (0x000409dd) list_double_large_graphic_pane_g2_ParamLimits

0x96c1,	// (0x000409dd) list_double_large_graphic_pane_g2

0x953c,	// (0x00040858) list_double_large_graphic_pane_g3_ParamLimits

0x953c,	// (0x00040858) list_double_large_graphic_pane_g3

0x96d2,	// (0x000409ee) list_double_large_graphic_pane_g4_ParamLimits

0x96d2,	// (0x000409ee) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x00046943) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x00046943) list_double_large_graphic_pane_g

0x96e5,	// (0x00040a01) list_double_large_graphic_pane_t1_ParamLimits

0x96e5,	// (0x00040a01) list_double_large_graphic_pane_t1

0x96fe,	// (0x00040a1a) list_double_large_graphic_pane_t2_ParamLimits

0x96fe,	// (0x00040a1a) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0004694e) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0004694e) list_double_large_graphic_pane_t

0x9710,	// (0x00040a2c) list_double2_large_graphic_pane_g1_ParamLimits

0x9710,	// (0x00040a2c) list_double2_large_graphic_pane_g1

0x971c,	// (0x00040a38) list_double2_large_graphic_pane_g2_ParamLimits

0x971c,	// (0x00040a38) list_double2_large_graphic_pane_g2

0x972d,	// (0x00040a49) list_double2_large_graphic_pane_g3_ParamLimits

0x972d,	// (0x00040a49) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x00046953) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x00046953) list_double2_large_graphic_pane_g

0x9739,	// (0x00040a55) list_double2_large_graphic_pane_t1_ParamLimits

0x9739,	// (0x00040a55) list_double2_large_graphic_pane_t1

0x974f,	// (0x00040a6b) list_double2_large_graphic_pane_t2_ParamLimits

0x974f,	// (0x00040a6b) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0004695a) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0004695a) list_double2_large_graphic_pane_t

0x9761,	// (0x00040a7d) list_double_heading_pane_g1_ParamLimits

0x9761,	// (0x00040a7d) list_double_heading_pane_g1

0x9772,	// (0x00040a8e) list_double_heading_pane_g2_ParamLimits

0x9772,	// (0x00040a8e) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0004695f) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0004695f) list_double_heading_pane_g

0x977e,	// (0x00040a9a) list_double_heading_pane_t1_ParamLimits

0x977e,	// (0x00040a9a) list_double_heading_pane_t1

0x9794,	// (0x00040ab0) list_double_heading_pane_t2_ParamLimits

0x9794,	// (0x00040ab0) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x00046964) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x00046964) list_double_heading_pane_t

0x97a6,	// (0x00040ac2) list_double_graphic_heading_pane_g1_ParamLimits

0x97a6,	// (0x00040ac2) list_double_graphic_heading_pane_g1

0x9761,	// (0x00040a7d) list_double_graphic_heading_pane_g2_ParamLimits

0x9761,	// (0x00040a7d) list_double_graphic_heading_pane_g2

0x9772,	// (0x00040a8e) list_double_graphic_heading_pane_g3_ParamLimits

0x9772,	// (0x00040a8e) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x00046969) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x00046969) list_double_graphic_heading_pane_g

0x97b2,	// (0x00040ace) list_double_graphic_heading_pane_t1_ParamLimits

0x97b2,	// (0x00040ace) list_double_graphic_heading_pane_t1

0x9684,	// (0x000409a0) list_double_graphic_heading_pane_t2_ParamLimits

0x9684,	// (0x000409a0) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x00046970) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x00046970) list_double_graphic_heading_pane_t

0x96c1,	// (0x000409dd) list_double_time_pane_g1_ParamLimits

0x96c1,	// (0x000409dd) list_double_time_pane_g1

0x953c,	// (0x00040858) list_double_time_pane_g2_ParamLimits

0x953c,	// (0x00040858) list_double_time_pane_g2

0x0001,

0xf659,	// (0x00046975) list_double_time_pane_g_ParamLimits

0xf659,	// (0x00046975) list_double_time_pane_g

0x97c8,	// (0x00040ae4) list_double_time_pane_t1_ParamLimits

0x97c8,	// (0x00040ae4) list_double_time_pane_t1

0x97de,	// (0x00040afa) list_double_time_pane_t2_ParamLimits

0x97de,	// (0x00040afa) list_double_time_pane_t2

0x97f0,	// (0x00040b0c) list_double_time_pane_t3_ParamLimits

0x97f0,	// (0x00040b0c) list_double_time_pane_t3

0x9802,	// (0x00040b1e) list_double_time_pane_t4_ParamLimits

0x9802,	// (0x00040b1e) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x0004697a) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x0004697a) list_double_time_pane_t

0x9814,	// (0x00040b30) list_setting_pane_g1_ParamLimits

0x9814,	// (0x00040b30) list_setting_pane_g1

0x9772,	// (0x00040a8e) list_setting_pane_g2_ParamLimits

0x9772,	// (0x00040a8e) list_setting_pane_g2

0x0001,

0xf667,	// (0x00046983) list_setting_pane_g_ParamLimits

0xf667,	// (0x00046983) list_setting_pane_g

0x9820,	// (0x00040b3c) list_setting_pane_t1_ParamLimits

0x9820,	// (0x00040b3c) list_setting_pane_t1

0x9837,	// (0x00040b53) list_setting_pane_t2_ParamLimits

0x9837,	// (0x00040b53) list_setting_pane_t2

0x0002,

0xf66c,	// (0x00046988) list_setting_pane_t_ParamLimits

0xf66c,	// (0x00046988) list_setting_pane_t

0x9876,	// (0x00040b92) set_value_pane_cp_ParamLimits

0x9876,	// (0x00040b92) set_value_pane_cp

0x9884,	// (0x00040ba0) list_setting_number_pane_g1_ParamLimits

0x9884,	// (0x00040ba0) list_setting_number_pane_g1

0x9890,	// (0x00040bac) list_setting_number_pane_g2_ParamLimits

0x9890,	// (0x00040bac) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x0004698f) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x0004698f) list_setting_number_pane_g

0x989c,	// (0x00040bb8) list_setting_number_pane_t1_ParamLimits

0x989c,	// (0x00040bb8) list_setting_number_pane_t1

0x98b0,	// (0x00040bcc) list_setting_number_pane_t2_ParamLimits

0x98b0,	// (0x00040bcc) list_setting_number_pane_t2

0x98c7,	// (0x00040be3) list_setting_number_pane_t3_ParamLimits

0x98c7,	// (0x00040be3) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x00046994) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x00046994) list_setting_number_pane_t

0x9876,	// (0x00040b92) set_value_pane_ParamLimits

0x9876,	// (0x00040b92) set_value_pane

0xb76f,	// (0x00042a8b) bg_set_opt_pane_ParamLimits

0xb76f,	// (0x00042a8b) bg_set_opt_pane

0xcebd,	// (0x000441d9) set_value_pane_t1

0xb790,	// (0x00042aac) slider_set_pane_cp3

0xb799,	// (0x00042ab5) volume_small_pane_cp

0xb7a2,	// (0x00042abe) list_form_gen_pane

0xb7ab,	// (0x00042ac7) scroll_pane_cp8

0x990a,	// (0x00040c26) form_field_data_pane_ParamLimits

0x990a,	// (0x00040c26) form_field_data_pane

0x9925,	// (0x00040c41) form_field_data_wide_pane_ParamLimits

0x9925,	// (0x00040c41) form_field_data_wide_pane

0xcedb,	// (0x000441f7) form_field_popup_pane_ParamLimits

0xcedb,	// (0x000441f7) form_field_popup_pane

0x9947,	// (0x00040c63) form_field_popup_wide_pane_ParamLimits

0x9947,	// (0x00040c63) form_field_popup_wide_pane

0xcefd,	// (0x00044219) form_field_slider_pane_ParamLimits

0xcefd,	// (0x00044219) form_field_slider_pane

0xcf10,	// (0x0004422c) form_field_slider_wide_pane_ParamLimits

0xcf10,	// (0x0004422c) form_field_slider_wide_pane

0xb7bc,	// (0x00042ad8) data_form_pane

0x9972,	// (0x00040c8e) form_field_data_pane_t1

0xb7c8,	// (0x00042ae4) input_focus_pane

0xcf23,	// (0x0004423f) data_form_wide_pane

0xcf40,	// (0x0004425c) form_field_data_wide_pane_t1

0xb543,	// (0x0004285f) input_focus_pane_cp6

0x998c,	// (0x00040ca8) form_field_popup_pane_t1

0xb7c8,	// (0x00042ae4) input_focus_pane_cp7

0xb7f6,	// (0x00042b12) list_form_pane

0xcf6a,	// (0x00044286) form_field_popup_wide_pane_t1

0xb7c8,	// (0x00042ae4) input_focus_pane_cp8

0xb802,	// (0x00042b1e) list_form_wide_pane

0x99ae,	// (0x00040cca) form_field_slider_pane_t1_ParamLimits

0x99ae,	// (0x00040cca) form_field_slider_pane_t1

0x99c6,	// (0x00040ce2) form_field_slider_pane_t2_ParamLimits

0x99c6,	// (0x00040ce2) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x000469a4) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x000469a4) form_field_slider_pane_t

0x8505,	// (0x0003f821) input_focus_pane_cp9_ParamLimits

0x8505,	// (0x0003f821) input_focus_pane_cp9

0x99db,	// (0x00040cf7) slider_cont_pane_ParamLimits

0x99db,	// (0x00040cf7) slider_cont_pane

0xb811,	// (0x00042b2d) form_field_slider_wide_pane_t1_ParamLimits

0xb811,	// (0x00042b2d) form_field_slider_wide_pane_t1

0xcf7f,	// (0x0004429b) form_field_slider_wide_pane_t2_ParamLimits

0xcf7f,	// (0x0004429b) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x000469a9) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x000469a9) form_field_slider_wide_pane_t

0x8505,	// (0x0003f821) input_focus_pane_cp10_ParamLimits

0x8505,	// (0x0003f821) input_focus_pane_cp10

0x99ef,	// (0x00040d0b) slider_cont_pane_cp1_ParamLimits

0x99ef,	// (0x00040d0b) slider_cont_pane_cp1

0x9a03,	// (0x00040d1f) slider_form_pane_cp

0xb823,	// (0x00042b3f) input_focus_pane_g1

0xb82b,	// (0x00042b47) input_focus_pane_g2

0xb833,	// (0x00042b4f) input_focus_pane_g3

0xb83b,	// (0x00042b57) input_focus_pane_g4

0xb843,	// (0x00042b5f) input_focus_pane_g5

0xb84b,	// (0x00042b67) input_focus_pane_g6

0xb853,	// (0x00042b6f) input_focus_pane_g7

0xb85b,	// (0x00042b77) input_focus_pane_g8

0xb863,	// (0x00042b7f) input_focus_pane_g9

0x8434,	// (0x0003f750) input_focus_pane_g10

0x0009,

0xf692,	// (0x000469ae) input_focus_pane_g

0x2a04,	// (0x00039d20) wait_border_pane_g3_copy1

0x9a0b,	// (0x00040d27) data_form_pane_t1

0x8434,	// (0x0003f750) wait_anim_pane_g1_copy1

0xaa7d,	// (0x00041d99) data_form_wide_pane_t1

0xcf91,	// (0x000442ad) list_form_graphic_pane_cp_ParamLimits

0xcf91,	// (0x000442ad) list_form_graphic_pane_cp

0x3964,	// (0x0003ac80) slider_form_pane_g1

0x396d,	// (0x0003ac89) slider_form_pane_g2

0x0006,

0xf990,	// (0x00046cac) slider_form_pane_g

0xcf91,	// (0x000442ad) list_form_graphic_pane_ParamLimits

0xcf91,	// (0x000442ad) list_form_graphic_pane

0xcfa3,	// (0x000442bf) list_form_graphic_pane_g1

0xcfab,	// (0x000442c7) list_form_graphic_pane_t1_ParamLimits

0xcfab,	// (0x000442c7) list_form_graphic_pane_t1

0x8498,	// (0x0003f7b4) list_highlight_pane_cp5_ParamLimits

0x8498,	// (0x0003f7b4) list_highlight_pane_cp5

0x9a25,	// (0x00040d41) find_pane_g1

0xb86b,	// (0x00042b87) input_find_pane

0x9a2e,	// (0x00040d4a) input_find_pane_g1_ParamLimits

0x9a2e,	// (0x00040d4a) input_find_pane_g1

0x9a3a,	// (0x00040d56) input_find_pane_t1_ParamLimits

0x9a3a,	// (0x00040d56) input_find_pane_t1

0x9a4f,	// (0x00040d6b) input_find_pane_t2_ParamLimits

0x9a4f,	// (0x00040d6b) input_find_pane_t2

0x0001,

0xf6a7,	// (0x000469c3) input_find_pane_t_ParamLimits

0xf6a7,	// (0x000469c3) input_find_pane_t

0xb874,	// (0x00042b90) input_focus_pane_cp5_ParamLimits

0xb874,	// (0x00042b90) input_focus_pane_cp5

0xb882,	// (0x00042b9e) bg_popup_window_pane_cp2_ParamLimits

0xb882,	// (0x00042b9e) bg_popup_window_pane_cp2

0xb88f,	// (0x00042bab) listscroll_menu_pane_ParamLimits

0xb88f,	// (0x00042bab) listscroll_menu_pane

0x9a70,	// (0x00040d8c) popup_submenu_window_ParamLimits

0x9a70,	// (0x00040d8c) popup_submenu_window

0xb89b,	// (0x00042bb7) find_popup_pane_g1

0xb8a3,	// (0x00042bbf) input_popup_find_pane_cp

0xb874,	// (0x00042b90) input_focus_pane_cp4_ParamLimits

0xb874,	// (0x00042b90) input_focus_pane_cp4

0xb8ad,	// (0x00042bc9) input_popup_find_pane_t1_ParamLimits

0xb8ad,	// (0x00042bc9) input_popup_find_pane_t1

0x843e,	// (0x0003f75a) bg_popup_sub_pane_cp

0xb8db,	// (0x00042bf7) listscroll_popup_sub_pane

0xb8e3,	// (0x00042bff) list_submenu_pane_ParamLimits

0xb8e3,	// (0x00042bff) list_submenu_pane

0xb8f4,	// (0x00042c10) scroll_pane_cp4

0xb8fc,	// (0x00042c18) list_single_popup_submenu_pane_ParamLimits

0xb8fc,	// (0x00042c18) list_single_popup_submenu_pane

0xb911,	// (0x00042c2d) list_single_popup_submenu_pane_g1

0xb919,	// (0x00042c35) list_single_popup_submenu_pane_t1_ParamLimits

0xb919,	// (0x00042c35) list_single_popup_submenu_pane_t1

0x8505,	// (0x0003f821) bg_active_tab_pane_cp1_ParamLimits

0x8505,	// (0x0003f821) bg_active_tab_pane_cp1

0x9aae,	// (0x00040dca) tabs_2_active_pane_g1

0x9ab6,	// (0x00040dd2) tabs_2_active_pane_t1

0x8505,	// (0x0003f821) bg_passive_tab_pane_cp1_ParamLimits

0x8505,	// (0x0003f821) bg_passive_tab_pane_cp1

0x9aae,	// (0x00040dca) tabs_2_passive_pane_g1

0x9ab6,	// (0x00040dd2) tabs_2_passive_pane_t1

0x8498,	// (0x0003f7b4) bg_active_tab_pane_cp4

0x9ac8,	// (0x00040de4) tabs_2_long_active_pane_t1

0x18dd,	// (0x00038bf9) bg_passive_tab_pane_cp4

0x015d,	// (0x00037479) list_single_midp_graphic_pane_g4_ParamLimits

0x8498,	// (0x0003f7b4) bg_active_tab_pane_cp5

0x9adb,	// (0x00040df7) tabs_3_long_active_pane_t1

0x18dd,	// (0x00038bf9) bg_passive_tab_pane_cp5

0x015d,	// (0x00037479) list_single_midp_graphic_pane_g4

0x8498,	// (0x0003f7b4) bg_popup_window_pane_cp13_ParamLimits

0x8498,	// (0x0003f7b4) bg_popup_window_pane_cp13

0xb937,	// (0x00042c53) listscroll_popup_fast_pane_ParamLimits

0xb937,	// (0x00042c53) listscroll_popup_fast_pane

0xb946,	// (0x00042c62) grid_popup_fast_pane_ParamLimits

0xb946,	// (0x00042c62) grid_popup_fast_pane

0xb958,	// (0x00042c74) scroll_pane_cp9_ParamLimits

0xb958,	// (0x00042c74) scroll_pane_cp9

0x52c9,	// (0x0003c5e5) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x52c9,	// (0x0003c5e5) list_single_graphic_hl_pane_t1_cp2

0xb97c,	// (0x00042c98) input_focus_pane_cp20_ParamLimits

0xb97c,	// (0x00042c98) input_focus_pane_cp20

0xb98a,	// (0x00042ca6) query_popup_data_pane_t1_ParamLimits

0xb98a,	// (0x00042ca6) query_popup_data_pane_t1

0xb99d,	// (0x00042cb9) query_popup_data_pane_t2_ParamLimits

0xb99d,	// (0x00042cb9) query_popup_data_pane_t2

0xb9e3,	// (0x00042cff) query_popup_data_pane_t3_ParamLimits

0xb9e3,	// (0x00042cff) query_popup_data_pane_t3

0xba24,	// (0x00042d40) query_popup_data_pane_t4_ParamLimits

0xba24,	// (0x00042d40) query_popup_data_pane_t4

0xba60,	// (0x00042d7c) query_popup_data_pane_t5_ParamLimits

0xba60,	// (0x00042d7c) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x000469c8) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x000469c8) query_popup_data_pane_t

0xb823,	// (0x00042b3f) bg_set_opt_pane_g1

0xb82b,	// (0x00042b47) bg_set_opt_pane_g2

0xb833,	// (0x00042b4f) bg_set_opt_pane_g3

0xb83b,	// (0x00042b57) bg_set_opt_pane_g4

0xb843,	// (0x00042b5f) bg_set_opt_pane_g5

0xb84b,	// (0x00042b67) bg_set_opt_pane_g6

0xb853,	// (0x00042b6f) bg_set_opt_pane_g7

0xb85b,	// (0x00042b77) bg_set_opt_pane_g8

0xb863,	// (0x00042b7f) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x000469d3) bg_set_opt_pane_g

0xf081,	// (0x0004639d) control_top_pane_stacon_ParamLimits

0xf081,	// (0x0004639d) control_top_pane_stacon

0xf0d4,	// (0x000463f0) signal_pane_stacon_ParamLimits

0xf0d4,	// (0x000463f0) signal_pane_stacon

0xf0f9,	// (0x00046415) stacon_top_pane_g1_ParamLimits

0xf0f9,	// (0x00046415) stacon_top_pane_g1

0xf11b,	// (0x00046437) title_pane_stacon_ParamLimits

0xf11b,	// (0x00046437) title_pane_stacon

0xf145,	// (0x00046461) uni_indicator_pane_stacon_ParamLimits

0xf145,	// (0x00046461) uni_indicator_pane_stacon

0xf15d,	// (0x00046479) battery_pane_stacon_ParamLimits

0xf15d,	// (0x00046479) battery_pane_stacon

0xf1a1,	// (0x000464bd) control_bottom_pane_stacon_ParamLimits

0xf1a1,	// (0x000464bd) control_bottom_pane_stacon

0xf1c4,	// (0x000464e0) navi_pane_stacon_ParamLimits

0xf1c4,	// (0x000464e0) navi_pane_stacon

0xf1e7,	// (0x00046503) stacon_bottom_pane_g1_ParamLimits

0xf1e7,	// (0x00046503) stacon_bottom_pane_g1

0xedde,	// (0x000460fa) aid_levels_signal_lsc_ParamLimits

0xedde,	// (0x000460fa) aid_levels_signal_lsc

0xedf5,	// (0x00046111) signal_pane_stacon_g1_ParamLimits

0xedf5,	// (0x00046111) signal_pane_stacon_g1

0xee09,	// (0x00046125) signal_pane_stacon_g2_ParamLimits

0xee09,	// (0x00046125) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x000469e6) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x000469e6) signal_pane_stacon_g

0xee3e,	// (0x0004615a) title_pane_stacon_t1_ParamLimits

0xee3e,	// (0x0004615a) title_pane_stacon_t1

0xbaa4,	// (0x00042dc0) uni_indicator_pane_stacon_g1

0xbaae,	// (0x00042dca) uni_indicator_pane_stacon_g2

0xbab8,	// (0x00042dd4) uni_indicator_pane_stacon_g3

0xbac2,	// (0x00042dde) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x000469f2) uni_indicator_pane_stacon_g

0xee63,	// (0x0004617f) control_top_pane_stacon_g1

0xee6b,	// (0x00046187) control_top_pane_stacon_t1_ParamLimits

0xee6b,	// (0x00046187) control_top_pane_stacon_t1

0xeea2,	// (0x000461be) aid_levels_battery_lsc_ParamLimits

0xeea2,	// (0x000461be) aid_levels_battery_lsc

0xeeba,	// (0x000461d6) battery_pane_stacon_g1_ParamLimits

0xeeba,	// (0x000461d6) battery_pane_stacon_g1

0xeecd,	// (0x000461e9) battery_pane_stacon_g2_ParamLimits

0xeecd,	// (0x000461e9) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x000469fb) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x000469fb) battery_pane_stacon_g

0xef0b,	// (0x00046227) navi_icon_pane_stacon

0xef1f,	// (0x0004623b) navi_navi_pane_stacon

0xef0b,	// (0x00046227) navi_text_pane_stacon

0xee63,	// (0x0004617f) control_bottom_pane_stacon_g1

0xef35,	// (0x00046251) control_bottom_pane_stacon_t1_ParamLimits

0xef35,	// (0x00046251) control_bottom_pane_stacon_t1

0x9aed,	// (0x00040e09) grid_app_pane_ParamLimits

0x9aed,	// (0x00040e09) grid_app_pane

0x9b25,	// (0x00040e41) scroll_pane_cp15_ParamLimits

0x9b25,	// (0x00040e41) scroll_pane_cp15

0x9b3a,	// (0x00040e56) cell_app_pane_ParamLimits

0x9b3a,	// (0x00040e56) cell_app_pane

0x9b87,	// (0x00040ea3) cell_app_pane_g1_ParamLimits

0x9b87,	// (0x00040ea3) cell_app_pane_g1

0xbae6,	// (0x00042e02) cell_app_pane_g2_ParamLimits

0xbae6,	// (0x00042e02) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x00046a00) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x00046a00) cell_app_pane_g

0xbaf2,	// (0x00042e0e) cell_app_pane_t1_ParamLimits

0xbaf2,	// (0x00042e0e) cell_app_pane_t1

0xbb09,	// (0x00042e25) grid_highlight_pane_ParamLimits

0xbb09,	// (0x00042e25) grid_highlight_pane

0xb823,	// (0x00042b3f) cell_highlight_pane_g1

0xb82b,	// (0x00042b47) cell_highlight_pane_g2

0xb833,	// (0x00042b4f) cell_highlight_pane_g3

0xb83b,	// (0x00042b57) cell_highlight_pane_g4

0xb843,	// (0x00042b5f) cell_highlight_pane_g5

0xb84b,	// (0x00042b67) cell_highlight_pane_g6

0xb853,	// (0x00042b6f) cell_highlight_pane_g7

0xb85b,	// (0x00042b77) cell_highlight_pane_g8

0xb863,	// (0x00042b7f) cell_highlight_pane_g9

0x8434,	// (0x0003f750) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x000469ae) cell_highlight_pane_g

0xbb1a,	// (0x00042e36) bg_scroll_pane

0xef76,	// (0x00046292) scroll_handle_pane

0xbb61,	// (0x00042e7d) scroll_bg_pane_g1

0xbb76,	// (0x00042e92) scroll_bg_pane_g2

0xbb8e,	// (0x00042eaa) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x00046a05) scroll_bg_pane_g

0xbba3,	// (0x00042ebf) scroll_handle_focus_pane_ParamLimits

0xbba3,	// (0x00042ebf) scroll_handle_focus_pane

0xbb61,	// (0x00042e7d) scroll_handle_pane_g1

0xbbb0,	// (0x00042ecc) scroll_handle_pane_g2

0xbb8e,	// (0x00042eaa) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x00046a0c) scroll_handle_pane_g

0xb874,	// (0x00042b90) bg_popup_sub_pane_cp21_ParamLimits

0xb874,	// (0x00042b90) bg_popup_sub_pane_cp21

0xbbc4,	// (0x00042ee0) popup_fep_japan_predictive_window_t1_ParamLimits

0xbbc4,	// (0x00042ee0) popup_fep_japan_predictive_window_t1

0xbbdb,	// (0x00042ef7) popup_fep_japan_predictive_window_t2_ParamLimits

0xbbdb,	// (0x00042ef7) popup_fep_japan_predictive_window_t2

0xbc0e,	// (0x00042f2a) popup_fep_japan_predictive_window_t3_ParamLimits

0xbc0e,	// (0x00042f2a) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x00046a13) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x00046a13) popup_fep_japan_predictive_window_t

0x843e,	// (0x0003f75a) bg_popup_sub_pane_cp23

0xbc45,	// (0x00042f61) listscroll_japin_cand_pane

0xbc4d,	// (0x00042f69) popup_fep_japan_candidate_window_t1

0xbc5b,	// (0x00042f77) candidate_pane_ParamLimits

0xbc5b,	// (0x00042f77) candidate_pane

0xbc6d,	// (0x00042f89) scroll_pane_cp30

0xbc77,	// (0x00042f93) list_single_popup_jap_candidate_pane_ParamLimits

0xbc77,	// (0x00042f93) list_single_popup_jap_candidate_pane

0x843e,	// (0x0003f75a) list_highlight_pane_cp30

0xbc8b,	// (0x00042fa7) list_single_popup_jap_candidate_pane_t1

0x9bb0,	// (0x00040ecc) level_1_signal

0x9bc2,	// (0x00040ede) level_2_signal

0x9bd5,	// (0x00040ef1) level_3_signal

0x9be8,	// (0x00040f04) level_4_signal

0x9bfb,	// (0x00040f17) level_5_signal

0x9c0e,	// (0x00040f2a) level_6_signal

0x9c21,	// (0x00040f3d) level_7_signal

0x9bb0,	// (0x00040ecc) level_1_battery

0x9bc2,	// (0x00040ede) level_2_battery

0x9bd5,	// (0x00040ef1) level_3_battery

0x9be8,	// (0x00040f04) level_4_battery

0x9bfb,	// (0x00040f17) level_5_battery

0x9c0e,	// (0x00040f2a) level_6_battery

0x9c21,	// (0x00040f3d) level_7_battery

0xcfc8,	// (0x000442e4) list_menu_pane_ParamLimits

0xcfc8,	// (0x000442e4) list_menu_pane

0xcfde,	// (0x000442fa) scroll_pane_cp25_ParamLimits

0xcfde,	// (0x000442fa) scroll_pane_cp25

0xcff7,	// (0x00044313) list_double2_graphic_pane_cp2_ParamLimits

0xcff7,	// (0x00044313) list_double2_graphic_pane_cp2

0xcff7,	// (0x00044313) list_double2_large_graphic_pane_cp2_ParamLimits

0xcff7,	// (0x00044313) list_double2_large_graphic_pane_cp2

0xcff7,	// (0x00044313) list_double2_pane_cp2_ParamLimits

0xcff7,	// (0x00044313) list_double2_pane_cp2

0xcff7,	// (0x00044313) list_double_graphic_pane_cp2_ParamLimits

0xcff7,	// (0x00044313) list_double_graphic_pane_cp2

0xcff7,	// (0x00044313) list_double_large_graphic_pane_cp2_ParamLimits

0xcff7,	// (0x00044313) list_double_large_graphic_pane_cp2

0xcff7,	// (0x00044313) list_double_number_pane_cp2_ParamLimits

0xcff7,	// (0x00044313) list_double_number_pane_cp2

0xcff7,	// (0x00044313) list_double_pane_cp2_ParamLimits

0xcff7,	// (0x00044313) list_double_pane_cp2

0x9c47,	// (0x00040f63) list_single_2graphic_pane_cp2_ParamLimits

0x9c47,	// (0x00040f63) list_single_2graphic_pane_cp2

0x9c47,	// (0x00040f63) list_single_graphic_heading_pane_cp2_ParamLimits

0x9c47,	// (0x00040f63) list_single_graphic_heading_pane_cp2

0x9c47,	// (0x00040f63) list_single_graphic_pane_cp2_ParamLimits

0x9c47,	// (0x00040f63) list_single_graphic_pane_cp2

0x9c47,	// (0x00040f63) list_single_heading_pane_cp2_ParamLimits

0x9c47,	// (0x00040f63) list_single_heading_pane_cp2

0xd007,	// (0x00044323) list_single_large_graphic_pane_cp2_ParamLimits

0xd007,	// (0x00044323) list_single_large_graphic_pane_cp2

0x9c47,	// (0x00040f63) list_single_number_heading_pane_cp2_ParamLimits

0x9c47,	// (0x00040f63) list_single_number_heading_pane_cp2

0x9c47,	// (0x00040f63) list_single_number_pane_cp2_ParamLimits

0x9c47,	// (0x00040f63) list_single_number_pane_cp2

0x9c47,	// (0x00040f63) list_single_pane_cp2_ParamLimits

0x9c47,	// (0x00040f63) list_single_pane_cp2

0xd020,	// (0x0004433c) bg_popup_sub_pane_cp22

0xf028,	// (0x00046344) popup_side_volume_key_window_g1

0xf052,	// (0x0004636e) popup_side_volume_key_window_t1

0xf070,	// (0x0004638c) volume_small_pane_cp1

0x8505,	// (0x0003f821) bg_popup_sub_pane_cp24_ParamLimits

0x8505,	// (0x0003f821) bg_popup_sub_pane_cp24

0xd036,	// (0x00044352) fep_china_uni_candidate_pane_ParamLimits

0xd036,	// (0x00044352) fep_china_uni_candidate_pane

0xd04a,	// (0x00044366) fep_china_uni_entry_pane

0xd05a,	// (0x00044376) popup_fep_china_uni_window_g1

0xd076,	// (0x00044392) fep_china_uni_entry_pane_g1

0xd080,	// (0x0004439c) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x00046a44) fep_china_uni_entry_pane_g

0xd08a,	// (0x000443a6) fep_entry_item_pane

0xd094,	// (0x000443b0) fep_candidate_item_pane

0xd09c,	// (0x000443b8) fep_china_uni_candidate_pane_g1

0xd0a6,	// (0x000443c2) fep_china_uni_candidate_pane_g2

0xd0ae,	// (0x000443ca) fep_china_uni_candidate_pane_g3

0xd0b6,	// (0x000443d2) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x00046a49) fep_china_uni_candidate_pane_g

0x8434,	// (0x0003f750) fep_entry_item_pane_g1

0xd0c0,	// (0x000443dc) fep_entry_item_pane_t1_ParamLimits

0xd0c0,	// (0x000443dc) fep_entry_item_pane_t1

0xd0d6,	// (0x000443f2) fep_candidate_item_pane_t1_ParamLimits

0xd0d6,	// (0x000443f2) fep_candidate_item_pane_t1

0xd0eb,	// (0x00044407) fep_candidate_item_pane_t2_ParamLimits

0xd0eb,	// (0x00044407) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x00046a52) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x00046a52) fep_candidate_item_pane_t

0x8498,	// (0x0003f7b4) list_highlight_pane_cp31_ParamLimits

0x8498,	// (0x0003f7b4) list_highlight_pane_cp31

0xd0fd,	// (0x00044419) level_1_signal_lsc

0xd106,	// (0x00044422) level_2_signal_lsc

0xd10f,	// (0x0004442b) level_3_signal_lsc

0xd118,	// (0x00044434) level_4_signal_lsc

0xd121,	// (0x0004443d) level_5_signal_lsc

0xd12a,	// (0x00044446) level_6_signal_lsc

0xd133,	// (0x0004444f) level_7_signal_lsc

0xd133,	// (0x0004444f) level_1_battery_lsc

0xd13c,	// (0x00044458) level_2_battery_lsc

0xd145,	// (0x00044461) level_3_battery_lsc

0xd14e,	// (0x0004446a) level_4_battery_lsc

0xd157,	// (0x00044473) level_5_battery_lsc

0xd160,	// (0x0004447c) level_6_battery_lsc

0xd0fd,	// (0x00044419) level_7_battery_lsc

0xd169,	// (0x00044485) scroll_handle_focus_pane_g1

0xd172,	// (0x0004448e) scroll_handle_focus_pane_g2

0xd17b,	// (0x00044497) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x00046a57) scroll_handle_focus_pane_g

0x9cd9,	// (0x00040ff5) list_single_2graphic_pane_g1_ParamLimits

0x9cd9,	// (0x00040ff5) list_single_2graphic_pane_g1

0x9505,	// (0x00040821) list_single_2graphic_pane_g2_ParamLimits

0x9505,	// (0x00040821) list_single_2graphic_pane_g2

0xce44,	// (0x00044160) list_single_2graphic_pane_g3_ParamLimits

0xce44,	// (0x00044160) list_single_2graphic_pane_g3

0x9ce5,	// (0x00041001) list_single_2graphic_pane_g4_ParamLimits

0x9ce5,	// (0x00041001) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x00046a5e) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x00046a5e) list_single_2graphic_pane_g

0x9cf1,	// (0x0004100d) list_single_2graphic_pane_t1_ParamLimits

0x9cf1,	// (0x0004100d) list_single_2graphic_pane_t1

0x9d1f,	// (0x0004103b) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9d1f,	// (0x0004103b) list_double2_graphic_large_graphic_pane_g1

0x971c,	// (0x00040a38) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x971c,	// (0x00040a38) list_double2_graphic_large_graphic_pane_g2

0x972d,	// (0x00040a49) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x972d,	// (0x00040a49) list_double2_graphic_large_graphic_pane_g3

0x9d31,	// (0x0004104d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9d31,	// (0x0004104d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x00046a67) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x00046a67) list_double2_graphic_large_graphic_pane_g

0x9d3d,	// (0x00041059) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9d3d,	// (0x00041059) list_double2_graphic_large_graphic_pane_t1

0x9d53,	// (0x0004106f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9d53,	// (0x0004106f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x00046a70) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x00046a70) list_double2_graphic_large_graphic_pane_t

0xf245,	// (0x00046561) popup_fast_swap_window_ParamLimits

0xf245,	// (0x00046561) popup_fast_swap_window

0xf263,	// (0x0004657f) popup_side_volume_key_window

0xf281,	// (0x0004659d) stacon_top_pane

0xf28b,	// (0x000465a7) status_pane_ParamLimits

0xf28b,	// (0x000465a7) status_pane

0xf281,	// (0x0004659d) status_small_pane

0x843e,	// (0x0003f75a) control_pane

0x843e,	// (0x0003f75a) stacon_bottom_pane

0xb7ab,	// (0x00042ac7) scroll_pane_cp121

0xb7a2,	// (0x00042abe) set_content_pane

0x9d65,	// (0x00041081) bg_active_tab_pane_g1_cp1

0xf078,	// (0x00046394) bg_active_tab_pane_g2_cp1

0x9d6e,	// (0x0004108a) bg_active_tab_pane_g3_cp1

0x9d65,	// (0x00041081) bg_passive_tab_pane_g1_cp1

0xf078,	// (0x00046394) bg_passive_tab_pane_g2_cp1

0x9d6e,	// (0x0004108a) bg_passive_tab_pane_g3_cp1

0x9d77,	// (0x00041093) bg_active_tab_pane_g1_cp2

0xf078,	// (0x00046394) bg_active_tab_pane_g2_cp2

0x9d80,	// (0x0004109c) bg_active_tab_pane_g3_cp2

0x9d77,	// (0x00041093) bg_passive_tab_pane_g1_cp2

0xf078,	// (0x00046394) bg_passive_tab_pane_g2_cp2

0x9d80,	// (0x0004109c) bg_passive_tab_pane_g3_cp2

0x9d89,	// (0x000410a5) bg_active_tab_pane_g1_cp3

0xf078,	// (0x00046394) bg_active_tab_pane_g2_cp3

0x9d92,	// (0x000410ae) bg_active_tab_pane_g3_cp3

0x9d89,	// (0x000410a5) bg_passive_tab_pane_g1_cp3

0xf078,	// (0x00046394) bg_passive_tab_pane_g2_cp3

0x9d92,	// (0x000410ae) bg_passive_tab_pane_g3_cp3

0x9d9b,	// (0x000410b7) bg_active_tab_pane_g1_cp4

0xf078,	// (0x00046394) bg_active_tab_pane_g2_cp4

0x9da4,	// (0x000410c0) bg_active_tab_pane_g3_cp4

0x9d9b,	// (0x000410b7) bg_passive_tab_pane_g1_cp4

0xf078,	// (0x00046394) bg_passive_tab_pane_g2_cp4

0x9da4,	// (0x000410c0) bg_passive_tab_pane_g3_cp4

0xf203,	// (0x0004651f) bg_active_tab_pane_g1_cp5

0xf078,	// (0x00046394) bg_active_tab_pane_g2_cp5

0xf20c,	// (0x00046528) bg_active_tab_pane_g3_cp5

0xf203,	// (0x0004651f) bg_passive_tab_pane_g1_cp5

0xf078,	// (0x00046394) bg_passive_tab_pane_g2_cp5

0xf20c,	// (0x00046528) bg_passive_tab_pane_g3_cp5

0x3f66,	// (0x0003b282) list_set_graphic_pane_ParamLimits

0x3f66,	// (0x0003b282) list_set_graphic_pane

0x843e,	// (0x0003f75a) bg_set_opt_pane_cp4

0x9dad,	// (0x000410c9) list_set_graphic_pane_g1_ParamLimits

0x9dad,	// (0x000410c9) list_set_graphic_pane_g1

0x9db9,	// (0x000410d5) list_set_graphic_pane_g2_ParamLimits

0x9db9,	// (0x000410d5) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x00046a75) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x00046a75) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x00046df8) volume_small_pane_cp_g

0x9ddd,	// (0x000410f9) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9ddd,	// (0x000410f9) list_double2_large_graphic_pane_g1_cp2

0x9deb,	// (0x00041107) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9deb,	// (0x00041107) list_double2_large_graphic_pane_g2_cp2

0xf215,	// (0x00046531) list_double2_large_graphic_pane_g3_cp2

0xf21d,	// (0x00046539) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xf21d,	// (0x00046539) list_double2_large_graphic_pane_t1_cp2

0xf233,	// (0x0004654f) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xf233,	// (0x0004654f) list_double2_large_graphic_pane_t2_cp2

0xc29a,	// (0x000435b6) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc29a,	// (0x000435b6) list_double_large_graphic_pane_g1_cp2

0xc2ad,	// (0x000435c9) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xc2ad,	// (0x000435c9) list_double_large_graphic_pane_g2_cp2

0xf36c,	// (0x00046688) list_double_large_graphic_pane_g3_cp2

0x350c,	// (0x0003a828) list_double_large_graphic_pane_g4_cp

0x3514,	// (0x0003a830) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3514,	// (0x0003a830) list_double_large_graphic_pane_t1_cp2

0x352b,	// (0x0003a847) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x352b,	// (0x0003a847) list_double_large_graphic_pane_t2_cp2

0x9dfc,	// (0x00041118) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9dfc,	// (0x00041118) list_double2_graphic_pane_g1_cp2

0x9e0a,	// (0x00041126) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9e0a,	// (0x00041126) list_double2_graphic_pane_g2_cp2

0x9e1b,	// (0x00041137) list_double2_graphic_pane_g3_cp2

0xf299,	// (0x000465b5) list_double2_graphic_pane_t1_cp2_ParamLimits

0xf299,	// (0x000465b5) list_double2_graphic_pane_t1_cp2

0xf2af,	// (0x000465cb) list_double2_graphic_pane_t2_cp2_ParamLimits

0xf2af,	// (0x000465cb) list_double2_graphic_pane_t2_cp2

0xf2c1,	// (0x000465dd) list_single_number_heading_pane_g1_cp2_ParamLimits

0xf2c1,	// (0x000465dd) list_single_number_heading_pane_g1_cp2

0xf2cd,	// (0x000465e9) list_single_number_heading_pane_g2_cp2

0xf2d5,	// (0x000465f1) list_single_number_heading_pane_t1_cp2_ParamLimits

0xf2d5,	// (0x000465f1) list_single_number_heading_pane_t1_cp2

0x9e25,	// (0x00041141) list_single_number_heading_pane_t2_cp2_ParamLimits

0x9e25,	// (0x00041141) list_single_number_heading_pane_t2_cp2

0xf2eb,	// (0x00046607) list_single_number_heading_pane_t3_cp2_ParamLimits

0xf2eb,	// (0x00046607) list_single_number_heading_pane_t3_cp2

0xf2c1,	// (0x000465dd) list_single_heading_pane_g1_cp2_ParamLimits

0xf2c1,	// (0x000465dd) list_single_heading_pane_g1_cp2

0xf2cd,	// (0x000465e9) list_single_heading_pane_g2_cp2

0xf2d5,	// (0x000465f1) list_single_heading_pane_t1_cp2_ParamLimits

0xf2d5,	// (0x000465f1) list_single_heading_pane_t1_cp2

0xc286,	// (0x000435a2) list_single_heading_pane_t2_cp2_ParamLimits

0xc286,	// (0x000435a2) list_single_heading_pane_t2_cp2

0x322a,	// (0x0003a546) list_double_graphic_pane_g1_cp2_ParamLimits

0x322a,	// (0x0003a546) list_double_graphic_pane_g1_cp2

0x3236,	// (0x0003a552) list_double_graphic_pane_g2_cp2_ParamLimits

0x3236,	// (0x0003a552) list_double_graphic_pane_g2_cp2

0x3245,	// (0x0003a561) list_double_graphic_pane_g3_cp2

0x324d,	// (0x0003a569) list_double_graphic_pane_t1_cp2_ParamLimits

0x324d,	// (0x0003a569) list_double_graphic_pane_t1_cp2

0x3263,	// (0x0003a57f) list_double_graphic_pane_t2_cp2_ParamLimits

0x3263,	// (0x0003a57f) list_double_graphic_pane_t2_cp2

0xf360,	// (0x0004667c) list_double_number_pane_g1_cp2_ParamLimits

0xf360,	// (0x0004667c) list_double_number_pane_g1_cp2

0xf36c,	// (0x00046688) list_double_number_pane_g2_cp2

0xc220,	// (0x0004353c) list_double_number_pane_t1_cp2_ParamLimits

0xc220,	// (0x0004353c) list_double_number_pane_t1_cp2

0x3202,	// (0x0003a51e) list_double_number_pane_t2_cp2_ParamLimits

0x3202,	// (0x0003a51e) list_double_number_pane_t2_cp2

0x3218,	// (0x0003a534) list_double_number_pane_t3_cp2_ParamLimits

0x3218,	// (0x0003a534) list_double_number_pane_t3_cp2

0xc16e,	// (0x0004348a) list_single_graphic_pane_g1_cp2_ParamLimits

0xc16e,	// (0x0004348a) list_single_graphic_pane_g1_cp2

0xf3ac,	// (0x000466c8) list_single_graphic_pane_g2_cp2_ParamLimits

0xf3ac,	// (0x000466c8) list_single_graphic_pane_g2_cp2

0xf3b8,	// (0x000466d4) list_single_graphic_pane_g3_cp2

0x30ad,	// (0x0003a3c9) list_single_graphic_pane_t1_cp2_ParamLimits

0x30ad,	// (0x0003a3c9) list_single_graphic_pane_t1_cp2

0xf3ac,	// (0x000466c8) list_single_number_pane_g1_cp2_ParamLimits

0xf3ac,	// (0x000466c8) list_single_number_pane_g1_cp2

0xf3b8,	// (0x000466d4) list_single_number_pane_g2_cp2

0x30ad,	// (0x0003a3c9) list_single_number_pane_t1_cp2_ParamLimits

0x30ad,	// (0x0003a3c9) list_single_number_pane_t1_cp2

0xc15a,	// (0x00043476) list_single_number_pane_t2_cp2_ParamLimits

0xc15a,	// (0x00043476) list_single_number_pane_t2_cp2

0x9deb,	// (0x00041107) list_double2_pane_g1_cp2_ParamLimits

0x9deb,	// (0x00041107) list_double2_pane_g1_cp2

0xf215,	// (0x00046531) list_double2_pane_g2_cp2

0xf338,	// (0x00046654) list_double2_pane_t1_cp2_ParamLimits

0xf338,	// (0x00046654) list_double2_pane_t1_cp2

0xf34e,	// (0x0004666a) list_double2_pane_t2_cp2_ParamLimits

0xf34e,	// (0x0004666a) list_double2_pane_t2_cp2

0xf360,	// (0x0004667c) list_double_pane_g1_cp2_ParamLimits

0xf360,	// (0x0004667c) list_double_pane_g1_cp2

0xf36c,	// (0x00046688) list_double_pane_g2_cp2

0xf374,	// (0x00046690) list_double_pane_t1_cp2_ParamLimits

0xf374,	// (0x00046690) list_double_pane_t1_cp2

0xf38a,	// (0x000466a6) list_double_pane_t2_cp2_ParamLimits

0xf38a,	// (0x000466a6) list_double_pane_t2_cp2

0xf39c,	// (0x000466b8) list_single_pane_cp2_g3

0xf3ac,	// (0x000466c8) list_single_pane_g1_cp2_ParamLimits

0xf3ac,	// (0x000466c8) list_single_pane_g1_cp2

0xf3b8,	// (0x000466d4) list_single_pane_g2_cp2

0xf3c0,	// (0x000466dc) list_single_pane_t1_cp2_ParamLimits

0xf3c0,	// (0x000466dc) list_single_pane_t1_cp2

0x9e53,	// (0x0004116f) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9e53,	// (0x0004116f) list_single_large_graphic_pane_g1_cp2

0xf3d8,	// (0x000466f4) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xf3d8,	// (0x000466f4) list_single_large_graphic_pane_g2_cp2

0xf3e4,	// (0x00046700) list_single_large_graphic_pane_g3_cp2

0xf3ec,	// (0x00046708) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xf3ec,	// (0x00046708) list_single_large_graphic_pane_g4_cp1

0xf406,	// (0x00046722) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xf406,	// (0x00046722) list_single_large_graphic_pane_t1_cp2

0x3077,	// (0x0003a393) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3077,	// (0x0003a393) list_single_graphic_heading_pane_g1_cp2

0xc135,	// (0x00043451) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xc135,	// (0x00043451) list_single_graphic_heading_pane_g4_cp2

0xf3b8,	// (0x000466d4) list_single_graphic_heading_pane_g5_cp2

0x3083,	// (0x0003a39f) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3083,	// (0x0003a39f) list_single_graphic_heading_pane_t1_cp2

0xc146,	// (0x00043462) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xc146,	// (0x00043462) list_single_graphic_heading_pane_t2_cp2

0x3038,	// (0x0003a354) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3038,	// (0x0003a354) list_single_2graphic_pane_g1_cp2

0xc135,	// (0x00043451) list_single_2graphic_pane_g2_cp2_ParamLimits

0xc135,	// (0x00043451) list_single_2graphic_pane_g2_cp2

0xf3b8,	// (0x000466d4) list_single_2graphic_pane_g3_cp2

0x3055,	// (0x0003a371) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3055,	// (0x0003a371) list_single_2graphic_pane_g4_cp2

0x3061,	// (0x0003a37d) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3061,	// (0x0003a37d) list_single_2graphic_pane_t1_cp2

0x8434,	// (0x0003f750) list_highlight_pane_g10_cp1

0x2c10,	// (0x00039f2c) list_highlight_pane_g1_cp1

0x2c18,	// (0x00039f34) list_highlight_pane_g2_cp1

0x2c20,	// (0x00039f3c) list_highlight_pane_g3_cp1

0x2c28,	// (0x00039f44) list_highlight_pane_g4_cp1

0x2c30,	// (0x00039f4c) list_highlight_pane_g5_cp1

0x2c38,	// (0x00039f54) list_highlight_pane_g6_cp1

0x2c40,	// (0x00039f5c) list_highlight_pane_g7_cp1

0x2c48,	// (0x00039f64) list_highlight_pane_g8_cp1

0x2c50,	// (0x00039f6c) list_highlight_pane_g9_cp1

0xc0fb,	// (0x00043417) form_field_slider_pane_t3

0xc109,	// (0x00043425) form_field_slider_pane_t4

0x2b4c,	// (0x00039e68) slider_form_pane_ParamLimits

0x2b4c,	// (0x00039e68) slider_form_pane

0x843e,	// (0x0003f75a) control_abbreviations

0x843e,	// (0x0003f75a) control_conventions

0x843e,	// (0x0003f75a) control_definitions

0x843e,	// (0x0003f75a) format_table_attribute

0x3338,	// (0x0003a654) bg_popup_preview_window_pane_g9

0x843e,	// (0x0003f75a) format_table_data2

0x843e,	// (0x0003f75a) format_table_data3

0x843e,	// (0x0003f75a) format_table_data_example

0x0008,

0x843e,	// (0x0003f75a) intro_purpose

0xf8f0,	// (0x00046c0c) bg_popup_preview_window_pane_g

0x843e,	// (0x0003f75a) texts_category

0x843e,	// (0x0003f75a) texts_graphics

0xf41c,	// (0x00046738) text_digital

0xf42b,	// (0x00046747) text_primary

0xf43a,	// (0x00046756) text_primary_small

0xf449,	// (0x00046765) text_secondary

0xf458,	// (0x00046774) text_title

0x3aab,	// (0x0003adc7) bg_passive_tab_pane_g1_cp3_srt

0xf078,	// (0x00046394) bg_passive_tab_pane_g2_cp3_srt

0x3ab4,	// (0x0003add0) bg_passive_tab_pane_g3_cp3_srt

0x8505,	// (0x0003f821) bg_active_tab_pane_cp3_srt_ParamLimits

0x8505,	// (0x0003f821) bg_active_tab_pane_cp3_srt

0x3abd,	// (0x0003add9) tabs_4_active_pane_srt_g1

0xc593,	// (0x000438af) tabs_4_active_pane_srt_t1_ParamLimits

0xc593,	// (0x000438af) tabs_4_active_pane_srt_t1

0x3aab,	// (0x0003adc7) bg_active_tab_pane_g1_cp3_copy1

0xf078,	// (0x00046394) bg_active_tab_pane_g2_cp3_copy1

0x3ab4,	// (0x0003add0) bg_active_tab_pane_g3_cp3_copy1

0x8498,	// (0x0003f7b4) tabs_2_long_active_pane_srt_ParamLimits

0x8498,	// (0x0003f7b4) tabs_2_long_active_pane_srt

0x8498,	// (0x0003f7b4) tabs_2_long_passive_pane_srt_ParamLimits

0x8498,	// (0x0003f7b4) tabs_2_long_passive_pane_srt

0x18dd,	// (0x00038bf9) bg_passive_tab_pane_cp4_srt_ParamLimits

0x18dd,	// (0x00038bf9) bg_passive_tab_pane_cp4_srt

0x3775,	// (0x0003aa91) bg_passive_tab_pane_g1_cp4_srt

0xf078,	// (0x00046394) bg_passive_tab_pane_g2_cp4_srt

0x377e,	// (0x0003aa9a) bg_passive_tab_pane_g3_cp4_srt

0x8498,	// (0x0003f7b4) bg_active_tab_pane_cp4_srt_ParamLimits

0x8498,	// (0x0003f7b4) bg_active_tab_pane_cp4_srt

0xc371,	// (0x0004368d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc371,	// (0x0004368d) tabs_2_long_active_pane_srt_t1

0x3775,	// (0x0003aa91) bg_active_tab_pane_g1_cp4_srt

0xf078,	// (0x00046394) bg_active_tab_pane_g2_cp4_srt

0x377e,	// (0x0003aa9a) bg_active_tab_pane_g3_cp4_srt

0x8505,	// (0x0003f821) tabs_3_long_active_pane_srt_ParamLimits

0x8505,	// (0x0003f821) tabs_3_long_active_pane_srt

0x8505,	// (0x0003f821) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8505,	// (0x0003f821) tabs_3_long_passive_pane_cp_srt

0x8505,	// (0x0003f821) tabs_3_long_passive_pane_srt_ParamLimits

0x8505,	// (0x0003f821) tabs_3_long_passive_pane_srt

0x18dd,	// (0x00038bf9) bg_passive_tab_pane_cp5_srt_ParamLimits

0x18dd,	// (0x00038bf9) bg_passive_tab_pane_cp5_srt

0xf203,	// (0x0004651f) bg_passive_tab_pane_g1_cp5_srt

0xf078,	// (0x00046394) bg_passive_tab_pane_g2_cp5_srt

0xf20c,	// (0x00046528) bg_passive_tab_pane_g3_cp5_srt

0x8498,	// (0x0003f7b4) bg_active_tab_pane_cp5_srt_ParamLimits

0x8498,	// (0x0003f7b4) bg_active_tab_pane_cp5_srt

0xc35b,	// (0x00043677) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc35b,	// (0x00043677) tabs_3_long_active_pane_srt_t1

0xf203,	// (0x0004651f) bg_active_tab_pane_g1_cp5_srt

0xf078,	// (0x00046394) bg_active_tab_pane_g2_cp5_srt

0xf20c,	// (0x00046528) bg_active_tab_pane_g3_cp5_srt

0x3755,	// (0x0003aa71) navi_text_pane_srt_t1

0x374d,	// (0x0003aa69) navi_icon_pane_srt_g1

0x1717,	// (0x00038a33) midp_editing_number_pane_srt

0xf467,	// (0x00046783) midp_ticker_pane_srt

0x171f,	// (0x00038a3b) midp_ticker_pane_srt_g1

0x1727,	// (0x00038a43) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x00046a94) midp_ticker_pane_srt_g

0x172f,	// (0x00038a4b) midp_ticker_pane_srt_t1

0x373e,	// (0x0003aa5a) midp_editing_number_pane_t1_copy1

0x18dd,	// (0x00038bf9) listscroll_midp_pane

0x18dd,	// (0x00038bf9) midp_form_pane

0xf46f,	// (0x0004678b) midp_info_popup_window_ParamLimits

0xf46f,	// (0x0004678b) midp_info_popup_window

0xb874,	// (0x00042b90) bg_popup_sub_pane_cp50_ParamLimits

0xb874,	// (0x00042b90) bg_popup_sub_pane_cp50

0x2846,	// (0x00039b62) listscroll_midp_info_pane_ParamLimits

0x2846,	// (0x00039b62) listscroll_midp_info_pane

0x282e,	// (0x00039b4a) listscroll_form_midp_pane_ParamLimits

0x282e,	// (0x00039b4a) listscroll_form_midp_pane

0x283a,	// (0x00039b56) scroll_bar_cp050

0xc0ef,	// (0x0004340b) list_midp_pane

0x4546,	// (0x0003b862) signal_pane_g2_cp

0x2748,	// (0x00039a64) listscroll_midp_info_pane_t1_ParamLimits

0x2748,	// (0x00039a64) listscroll_midp_info_pane_t1

0x2760,	// (0x00039a7c) listscroll_midp_info_pane_t2_ParamLimits

0x2760,	// (0x00039a7c) listscroll_midp_info_pane_t2

0x279e,	// (0x00039aba) listscroll_midp_info_pane_t3_ParamLimits

0x279e,	// (0x00039aba) listscroll_midp_info_pane_t3

0x27d8,	// (0x00039af4) listscroll_midp_info_pane_t4_ParamLimits

0x27d8,	// (0x00039af4) listscroll_midp_info_pane_t4

0x0003,

0xf82b,	// (0x00046b47) listscroll_midp_info_pane_t_ParamLimits

0xf82b,	// (0x00046b47) listscroll_midp_info_pane_t

0xb8f4,	// (0x00042c10) scroll_pane_cp21

0x26e2,	// (0x000399fe) form_midp_field_choice_group_pane

0x26eb,	// (0x00039a07) form_midp_field_text_pane

0x272e,	// (0x00039a4a) form_midp_field_time_pane

0x2736,	// (0x00039a52) form_midp_gauge_slider_pane

0x273f,	// (0x00039a5b) form_midp_gauge_wait_pane

0x843e,	// (0x0003f75a) form_midp_image_pane

0xa8e4,	// (0x00041c00) list_single_midp_pane_ParamLimits

0xa8e4,	// (0x00041c00) list_single_midp_pane

0xc0c7,	// (0x000433e3) form_midp_field_text_pane_t1

0x2492,	// (0x000397ae) input_focus_pane_cp050

0x26d1,	// (0x000399ed) list_midp_form_text_pane

0x2675,	// (0x00039991) form_midp_field_choice_group_pane_t1

0x2683,	// (0x0003999f) input_focus_pane_cp051

0x2697,	// (0x000399b3) list_midp_choice_pane

0x843e,	// (0x0003f75a) status_idle_pane

0x2659,	// (0x00039975) form_midp_field_time_pane_t1

0x8434,	// (0x0003f750) wait_anim_pane_g2_copy1

0x2667,	// (0x00039983) form_midp_field_time_pane_t2

0x0001,

0x1675,	// (0x00038991) aid_navinavi_width_2_pane

0xf826,	// (0x00046b42) form_midp_field_time_pane_t

0x843e,	// (0x0003f75a) input_focus_pane_cp052

0x843e,	// (0x0003f75a) bg_input_focus_pane_cp040

0x2619,	// (0x00039935) form_midp_gauge_slider_pane_t1

0x2627,	// (0x00039943) form_midp_gauge_slider_pane_t2

0xc0ab,	// (0x000433c7) form_midp_gauge_slider_pane_t3

0xc0b9,	// (0x000433d5) form_midp_gauge_slider_pane_t4

0x0003,

0xf81d,	// (0x00046b39) form_midp_gauge_slider_pane_t

0x2651,	// (0x0003996d) form_midp_slider_pane

0x8498,	// (0x0003f7b4) bg_input_focus_pane_cp041_ParamLimits

0x8498,	// (0x0003f7b4) bg_input_focus_pane_cp041

0x25e6,	// (0x00039902) form_midp_gauge_wait_pane_t1_ParamLimits

0x25e6,	// (0x00039902) form_midp_gauge_wait_pane_t1

0x25f8,	// (0x00039914) form_midp_gauge_wait_pane_t2_ParamLimits

0x25f8,	// (0x00039914) form_midp_gauge_wait_pane_t2

0x0001,

0xf818,	// (0x00046b34) form_midp_gauge_wait_pane_t_ParamLimits

0xf818,	// (0x00046b34) form_midp_gauge_wait_pane_t

0x260a,	// (0x00039926) form_midp_wait_pane_ParamLimits

0x260a,	// (0x00039926) form_midp_wait_pane

0x25ae,	// (0x000398ca) form_midp_image_pane_g1

0x25b7,	// (0x000398d3) form_midp_image_pane_t1

0x25c6,	// (0x000398e2) form_midp_image_pane_t2

0x25d5,	// (0x000398f1) form_midp_image_pane_t3

0x0002,

0xf811,	// (0x00046b2d) form_midp_image_pane_t

0x25a5,	// (0x000398c1) list_single_midp_pane_g1

0xd274,	// (0x00044590) list_single_midp_pane_t1

0xc094,	// (0x000433b0) list_midp_form_item_pane_ParamLimits

0xc094,	// (0x000433b0) list_midp_form_item_pane

0xf484,	// (0x000467a0) list_midp_form_item_pane_t1

0xf493,	// (0x000467af) midp_ticker_pane_g1

0xf49f,	// (0x000467bb) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x00046a7a) midp_ticker_pane_g

0x9ef8,	// (0x00041214) midp_ticker_pane_t1

0xc500,	// (0x0004381c) midp_editing_number_pane_t1

0x398f,	// (0x0003acab) midp_editing_number_pane

0x399e,	// (0x0003acba) midp_ticker_pane

0x372e,	// (0x0003aa4a) ai_message_heading_pane

0x843e,	// (0x0003f75a) bg_popup_window_pane_cp14

0x3736,	// (0x0003aa52) listscroll_ai_message_pane

0x36b4,	// (0x0003a9d0) ai_message_heading_pane_g1_ParamLimits

0x36b4,	// (0x0003a9d0) ai_message_heading_pane_g1

0x36c0,	// (0x0003a9dc) ai_message_heading_pane_g2_ParamLimits

0x36c0,	// (0x0003a9dc) ai_message_heading_pane_g2

0x36ce,	// (0x0003a9ea) ai_message_heading_pane_g3_ParamLimits

0x36ce,	// (0x0003a9ea) ai_message_heading_pane_g3

0x36da,	// (0x0003a9f6) ai_message_heading_pane_g4_ParamLimits

0x36da,	// (0x0003a9f6) ai_message_heading_pane_g4

0x0003,

0xf952,	// (0x00046c6e) ai_message_heading_pane_g_ParamLimits

0xf952,	// (0x00046c6e) ai_message_heading_pane_g

0x36e6,	// (0x0003aa02) ai_message_heading_pane_t1_ParamLimits

0x36e6,	// (0x0003aa02) ai_message_heading_pane_t1

0x3700,	// (0x0003aa1c) ai_message_heading_pane_t2_ParamLimits

0x3700,	// (0x0003aa1c) ai_message_heading_pane_t2

0x0001,

0xf95b,	// (0x00046c77) ai_message_heading_pane_t_ParamLimits

0xf95b,	// (0x00046c77) ai_message_heading_pane_t

0x3714,	// (0x0003aa30) bg_popup_heading_pane_cp1_ParamLimits

0x3714,	// (0x0003aa30) bg_popup_heading_pane_cp1

0x36a2,	// (0x0003a9be) list_ai_message_pane_ParamLimits

0x36a2,	// (0x0003a9be) list_ai_message_pane

0xb8f4,	// (0x00042c10) scroll_pane_cp10

0x363e,	// (0x0003a95a) list_ai_message_pane_g1

0x3646,	// (0x0003a962) list_ai_message_pane_g2

0x0001,

0xf92f,	// (0x00046c4b) list_ai_message_pane_g

0x364e,	// (0x0003a96a) list_ai_message_pane_t1_ParamLimits

0x364e,	// (0x0003a96a) list_ai_message_pane_t1

0x3663,	// (0x0003a97f) list_ai_message_pane_t2_ParamLimits

0x3663,	// (0x0003a97f) list_ai_message_pane_t2

0x3678,	// (0x0003a994) list_ai_message_pane_t3_ParamLimits

0x3678,	// (0x0003a994) list_ai_message_pane_t3

0x368d,	// (0x0003a9a9) list_ai_message_pane_t4_ParamLimits

0x368d,	// (0x0003a9a9) list_ai_message_pane_t4

0x0003,

0xf934,	// (0x00046c50) list_ai_message_pane_t_ParamLimits

0xf934,	// (0x00046c50) list_ai_message_pane_t

0xc341,	// (0x0004365d) cell_ai_soft_ind_pane_ParamLimits

0xc341,	// (0x0004365d) cell_ai_soft_ind_pane

0x1656,	// (0x00038972) cell_ai_soft_ind_pane_g1_ParamLimits

0x1656,	// (0x00038972) cell_ai_soft_ind_pane_g1

0x843e,	// (0x0003f75a) grid_highlight_cp1

0x1663,	// (0x0003897f) text_secondary_cp56_ParamLimits

0x1663,	// (0x0003897f) text_secondary_cp56

0x35fc,	// (0x0003a918) example_general_pane_ParamLimits

0x35fc,	// (0x0003a918) example_general_pane

0x3608,	// (0x0003a924) example_parent_pane_g1_ParamLimits

0x3608,	// (0x0003a924) example_parent_pane_g1

0x3614,	// (0x0003a930) example_parent_pane_t1_ParamLimits

0x3614,	// (0x0003a930) example_parent_pane_t1

0xa4e1,	// (0x000417fd) popup_preview_text_window_ParamLimits

0xa4e1,	// (0x000417fd) popup_preview_text_window

0xf3a4,	// (0x000466c0) list_single_pane_cp2_g4

0xb38e,	// (0x000426aa) bg_popup_preview_window_pane_ParamLimits

0xb38e,	// (0x000426aa) bg_popup_preview_window_pane

0x3342,	// (0x0003a65e) popup_preview_text_window_t1_ParamLimits

0x3342,	// (0x0003a65e) popup_preview_text_window_t1

0x3360,	// (0x0003a67c) popup_preview_text_window_t2_ParamLimits

0x3360,	// (0x0003a67c) popup_preview_text_window_t2

0x33a9,	// (0x0003a6c5) popup_preview_text_window_t3_ParamLimits

0x33a9,	// (0x0003a6c5) popup_preview_text_window_t3

0x33ee,	// (0x0003a70a) popup_preview_text_window_t4_ParamLimits

0x33ee,	// (0x0003a70a) popup_preview_text_window_t4

0x0004,

0xf903,	// (0x00046c1f) popup_preview_text_window_t_ParamLimits

0xf903,	// (0x00046c1f) popup_preview_text_window_t

0x346c,	// (0x0003a788) scroll_pane_cp11

0x241e,	// (0x0003973a) bg_popup_preview_window_pane_g1

0x32f6,	// (0x0003a612) bg_popup_preview_window_pane_g2

0x3300,	// (0x0003a61c) bg_popup_preview_window_pane_g3

0x330a,	// (0x0003a626) bg_popup_preview_window_pane_g4

0x3314,	// (0x0003a630) bg_popup_preview_window_pane_g5

0x331e,	// (0x0003a63a) bg_popup_preview_window_pane_g6

0x3326,	// (0x0003a642) bg_popup_preview_window_pane_g7

0x332e,	// (0x0003a64a) bg_popup_preview_window_pane_g8

0xe9d4,	// (0x00045cf0) aid_popup_width_pane

0xa451,	// (0x0004176d) popup_midp_note_alarm_window_ParamLimits

0xa451,	// (0x0004176d) popup_midp_note_alarm_window

0xb7bc,	// (0x00042ad8) data_form_pane_ParamLimits

0x9968,	// (0x00040c84) form_field_data_pane_g1

0x9972,	// (0x00040c8e) form_field_data_pane_t1_ParamLimits

0xb7c8,	// (0x00042ae4) input_focus_pane_ParamLimits

0xcf23,	// (0x0004423f) data_form_wide_pane_ParamLimits

0xcf34,	// (0x00044250) form_field_data_wide_pane_g1

0xcf40,	// (0x0004425c) form_field_data_wide_pane_t1_ParamLimits

0xb543,	// (0x0004285f) input_focus_pane_cp6_ParamLimits

0x9aa0,	// (0x00040dbc) input_popup_find_pane_g1_ParamLimits

0x9aa0,	// (0x00040dbc) input_popup_find_pane_g1

0xeede,	// (0x000461fa) aid_navi_side_left_pane

0xeef3,	// (0x0004620f) aid_navi_side_right_pane

0x2d0b,	// (0x0003a027) bg_popup_window_pane_cp30_ParamLimits

0x2d0b,	// (0x0003a027) bg_popup_window_pane_cp30

0x2d85,	// (0x0003a0a1) popup_midp_note_alarm_window_g1_ParamLimits

0x2d85,	// (0x0003a0a1) popup_midp_note_alarm_window_g1

0x2db5,	// (0x0003a0d1) popup_midp_note_alarm_window_t1_ParamLimits

0x2db5,	// (0x0003a0d1) popup_midp_note_alarm_window_t1

0x2e56,	// (0x0003a172) popup_midp_note_alarm_window_t2_ParamLimits

0x2e56,	// (0x0003a172) popup_midp_note_alarm_window_t2

0x2f04,	// (0x0003a220) popup_midp_note_alarm_window_t3_ParamLimits

0x2f04,	// (0x0003a220) popup_midp_note_alarm_window_t3

0x2f36,	// (0x0003a252) popup_midp_note_alarm_window_t4_ParamLimits

0x2f36,	// (0x0003a252) popup_midp_note_alarm_window_t4

0x2f5c,	// (0x0003a278) popup_midp_note_alarm_window_t5_ParamLimits

0x2f5c,	// (0x0003a278) popup_midp_note_alarm_window_t5

0x000a,

0xf8a0,	// (0x00046bbc) popup_midp_note_alarm_window_t_ParamLimits

0xf8a0,	// (0x00046bbc) popup_midp_note_alarm_window_t

0x3008,	// (0x0003a324) wait_bar_pane_cp1_ParamLimits

0x3008,	// (0x0003a324) wait_bar_pane_cp1

0x843e,	// (0x0003f75a) wait_anim_pane_copy1

0x843e,	// (0x0003f75a) wait_border_pane_copy1

0x29f0,	// (0x00039d0c) wait_border_pane_g1_copy1

0xcf5a,	// (0x00044276) form_field_popup_pane_g1

0x998c,	// (0x00040ca8) form_field_popup_pane_t1_ParamLimits

0xb7c8,	// (0x00042ae4) input_focus_pane_cp7_ParamLimits

0xb7f6,	// (0x00042b12) list_form_pane_ParamLimits

0xcf62,	// (0x0004427e) form_field_popup_wide_pane_g1

0xcf6a,	// (0x00044286) form_field_popup_wide_pane_t1_ParamLimits

0xb7c8,	// (0x00042ae4) input_focus_pane_cp8_ParamLimits

0xb802,	// (0x00042b1e) list_form_wide_pane_ParamLimits

0x3b38,	// (0x0003ae54) aid_size_cell_graphic_pane

0x9a0b,	// (0x00040d27) data_form_pane_t1_ParamLimits

0xaa7d,	// (0x00041d99) data_form_wide_pane_t1_ParamLimits

0xbd1d,	// (0x00043039) bg_status_flat_pane

0x912a,	// (0x00040446) title_pane_t1_ParamLimits

0x8460,	// (0x0003f77c) title_pane_t2_ParamLimits

0x8486,	// (0x0003f7a2) title_pane_t3_ParamLimits

0xf55d,	// (0x00046879) title_pane_t_ParamLimits

0x9bb0,	// (0x00040ecc) level_1_signal_ParamLimits

0x9bc2,	// (0x00040ede) level_2_signal_ParamLimits

0x9bd5,	// (0x00040ef1) level_3_signal_ParamLimits

0x9be8,	// (0x00040f04) level_4_signal_ParamLimits

0x9bfb,	// (0x00040f17) level_5_signal_ParamLimits

0x9c0e,	// (0x00040f2a) level_6_signal_ParamLimits

0x9c21,	// (0x00040f3d) level_7_signal_ParamLimits

0x9bb0,	// (0x00040ecc) level_1_battery_ParamLimits

0x9bc2,	// (0x00040ede) level_2_battery_ParamLimits

0x9bd5,	// (0x00040ef1) level_3_battery_ParamLimits

0x9be8,	// (0x00040f04) level_4_battery_ParamLimits

0x9bfb,	// (0x00040f17) level_5_battery_ParamLimits

0x9c0e,	// (0x00040f2a) level_6_battery_ParamLimits

0x9c21,	// (0x00040f3d) level_7_battery_ParamLimits

0x2c10,	// (0x00039f2c) bg_status_flat_pane_g1

0x2c18,	// (0x00039f34) bg_status_flat_pane_g2

0x2c20,	// (0x00039f3c) bg_status_flat_pane_g3

0x2c28,	// (0x00039f44) bg_status_flat_pane_g4

0x2c30,	// (0x00039f4c) bg_status_flat_pane_g5

0x2c38,	// (0x00039f54) bg_status_flat_pane_g6

0x2c40,	// (0x00039f5c) bg_status_flat_pane_g7

0x91be,	// (0x000404da) tabs_3_active_pane_t1_ParamLimits

0x91be,	// (0x000404da) tabs_3_passive_pane_t1_ParamLimits

0x91d8,	// (0x000404f4) tabs_4_active_pane_t1_ParamLimits

0x91d8,	// (0x000404f4) tabs_4_1_passive_pane_t1_ParamLimits

0x9ab6,	// (0x00040dd2) tabs_2_active_pane_t1_ParamLimits

0x9ab6,	// (0x00040dd2) tabs_2_passive_pane_t1_ParamLimits

0x8498,	// (0x0003f7b4) bg_active_tab_pane_cp4_ParamLimits

0x9ac8,	// (0x00040de4) tabs_2_long_active_pane_t1_ParamLimits

0x18dd,	// (0x00038bf9) bg_passive_tab_pane_cp4_ParamLimits

0x0190,	// (0x000374ac) list_single_midp_graphic_pane_t1_ParamLimits

0x8498,	// (0x0003f7b4) bg_active_tab_pane_cp5_ParamLimits

0x9adb,	// (0x00040df7) tabs_3_long_active_pane_t1_ParamLimits

0x18dd,	// (0x00038bf9) bg_passive_tab_pane_cp5_ParamLimits

0x0190,	// (0x000374ac) list_single_midp_graphic_pane_t1

0xbd1d,	// (0x00043039) bg_status_flat_pane_ParamLimits

0x2096,	// (0x000393b2) indicator_pane_cp2_ParamLimits

0x2096,	// (0x000393b2) indicator_pane_cp2

0xbeb3,	// (0x000431cf) navi_pane_srt_ParamLimits

0xbeb3,	// (0x000431cf) navi_pane_srt

0x21fd,	// (0x00039519) popup_clock_digital_analogue_window_cp1

0x84dc,	// (0x0003f7f8) indicator_pane_t1

0xf467,	// (0x00046783) copy_highlight_pane

0xf467,	// (0x00046783) cursor_graphics_pane

0xf467,	// (0x00046783) graphic_within_text_pane

0xf467,	// (0x00046783) link_highlight_pane

0x342f,	// (0x0003a74b) popup_preview_text_window_t5_ParamLimits

0x342f,	// (0x0003a74b) popup_preview_text_window_t5

0x167f,	// (0x0003899b) cursor_digital_pane

0x167f,	// (0x0003899b) cursor_primary_pane

0x1690,	// (0x000389ac) cursor_primary_small_pane

0x1698,	// (0x000389b4) cursor_secondary_pane

0x16a0,	// (0x000389bc) cursor_title_pane

0x167f,	// (0x0003899b) link_highlight_digital_pane

0x1687,	// (0x000389a3) link_highlight_primary_pane

0x1690,	// (0x000389ac) link_highlight_primary_small_pane

0x1698,	// (0x000389b4) link_highlight_secondary_pane

0x16a0,	// (0x000389bc) link_highlight_title_pane

0x167f,	// (0x0003899b) copy_highlight_digital_pane

0x167f,	// (0x0003899b) copy_highlight_primary_pane

0x1690,	// (0x000389ac) copy_highlight_primary_small_pane

0x1698,	// (0x000389b4) copy_highlight_secondary_pane

0x16a0,	// (0x000389bc) copy_highlight_title_pane

0x1698,	// (0x000389b4) graphic_text_digital_pane

0x2cae,	// (0x00039fca) graphic_text_primary_pane

0x2cb7,	// (0x00039fd3) graphic_text_primary_small_pane

0x1690,	// (0x000389ac) graphic_text_secondary_pane

0x167f,	// (0x0003899b) graphic_text_title_pane

0x9f0a,	// (0x00041226) cursor_primary_pane_g1

0x2ca0,	// (0x00039fbc) cursor_text_primary_t1

0xc12b,	// (0x00043447) cursor_primary_small_pane_g1

0x2c92,	// (0x00039fae) cursor_text_primary_small_t1

0xc121,	// (0x0004343d) cursor_primary_small_pane_g1_copy1

0x2c7a,	// (0x00039f96) cursor_text_primary_small_t1_copy1

0x2c58,	// (0x00039f74) cursor_text_title_t1

0xc117,	// (0x00043433) cursor_title_pane_g1

0x9f0a,	// (0x00041226) cursor_digital_pane_g1

0x16b2,	// (0x000389ce) cursor_text_digital_t1

0x16c0,	// (0x000389dc) link_highlight_primary_pane_g1

0x2c01,	// (0x00039f1d) link_highlight_primary_pane_t1

0x16c0,	// (0x000389dc) link_highlight_primary_small_pane_g1

0x16c8,	// (0x000389e4) link_highlight_primary_small_pane_t1

0x16d7,	// (0x000389f3) link_highlight_secondary_pane_g1

0x16df,	// (0x000389fb) link_highlight_secondary_pane_t1

0x2b75,	// (0x00039e91) link_highlight_title_pane_g1

0x2b7d,	// (0x00039e99) link_highlight_title_pane_t1

0x2b5e,	// (0x00039e7a) link_highlight_digital_pane_g1

0x2b66,	// (0x00039e82) link_highlight_digital_pane_t1

0x2a26,	// (0x00039d42) copy_highlight_primary_pane_g1

0x2a3d,	// (0x00039d59) copy_highlight_primary_pane_t1

0x2a26,	// (0x00039d42) copy_highlight_primary_small_pane_g1

0x2a2e,	// (0x00039d4a) copy_highlight_primary_small_pane_t1

0x16ee,	// (0x00038a0a) copy_highlight_secondary_pane_g1

0x16f6,	// (0x00038a12) copy_highlight_secondary_pane_t1

0x2a0f,	// (0x00039d2b) copy_highlight_title_pane_g1

0x2a17,	// (0x00039d33) copy_highlight_title_pane_t1

0x2a26,	// (0x00039d42) copy_highlight_digital_pane_g1

0x3d08,	// (0x0003b024) copy_highlight_digital_pane_t1

0x3c5c,	// (0x0003af78) graphic_text_primary_pane_g1

0x3cec,	// (0x0003b008) graphic_text_primary_pane_t1

0x3cfa,	// (0x0003b016) graphic_text_primary_pane_t2

0x0001,

0xf9cf,	// (0x00046ceb) graphic_text_primary_pane_t

0x3cc8,	// (0x0003afe4) graphic_text_primary_small_pane_g1

0x3cd0,	// (0x0003afec) graphic_text_primary_small_pane_t1

0x3cde,	// (0x0003affa) graphic_text_primary_small_pane_t2

0x0001,

0xf9ca,	// (0x00046ce6) graphic_text_primary_small_pane_t

0x3ca4,	// (0x0003afc0) graphic_text_secondary_pane_g1

0x3cac,	// (0x0003afc8) graphic_text_secondary_pane_t1

0x3cba,	// (0x0003afd6) graphic_text_secondary_pane_t2

0x0001,

0xf9c5,	// (0x00046ce1) graphic_text_secondary_pane_t

0x3c80,	// (0x0003af9c) graphic_text_title_pane_g1

0x3c88,	// (0x0003afa4) graphic_text_title_pane_t1

0x3c96,	// (0x0003afb2) graphic_text_title_pane_t2

0x0001,

0xf9c0,	// (0x00046cdc) graphic_text_title_pane_t

0x3c5c,	// (0x0003af78) graphic_text_digital_pane_g1

0x3c64,	// (0x0003af80) graphic_text_digital_pane_t1

0x3c72,	// (0x0003af8e) graphic_text_digital_pane_t2

0x0001,

0xf9bb,	// (0x00046cd7) graphic_text_digital_pane_t

0x8498,	// (0x0003f7b4) navi_icon_pane_srt_ParamLimits

0x8498,	// (0x0003f7b4) navi_icon_pane_srt

0x843e,	// (0x0003f75a) navi_midp_pane_srt

0x843e,	// (0x0003f75a) navi_navi_pane_srt

0x8498,	// (0x0003f7b4) navi_text_pane_srt_ParamLimits

0x8498,	// (0x0003f7b4) navi_text_pane_srt

0x3c27,	// (0x0003af43) navi_navi_icon_text_pane_srt

0x3c2f,	// (0x0003af4b) navi_navi_pane_srt_g1_ParamLimits

0x3c2f,	// (0x0003af4b) navi_navi_pane_srt_g1

0x3c41,	// (0x0003af5d) navi_navi_pane_srt_g2_ParamLimits

0x3c41,	// (0x0003af5d) navi_navi_pane_srt_g2

0x0001,

0xf9b6,	// (0x00046cd2) navi_navi_pane_srt_g_ParamLimits

0xf9b6,	// (0x00046cd2) navi_navi_pane_srt_g

0x3c53,	// (0x0003af6f) navi_navi_tabs_pane_srt

0x3c27,	// (0x0003af43) navi_navi_text_pane_srt

0x3c27,	// (0x0003af43) navi_navi_volume_pane_srt

0x3c18,	// (0x0003af34) navi_navi_text_pane_srt_t1

0x0600,	// (0x0003791c) navi_navi_volume_pane_srt_g1

0x0608,	// (0x00037924) volume_small_pane_srt_ParamLimits

0x0608,	// (0x00037924) volume_small_pane_srt

0xf4ab,	// (0x000467c7) volume_small_pane_srt_g1_ParamLimits

0xf4ab,	// (0x000467c7) volume_small_pane_srt_g1

0xf4bb,	// (0x000467d7) volume_small_pane_srt_g2_ParamLimits

0xf4bb,	// (0x000467d7) volume_small_pane_srt_g2

0xf4cc,	// (0x000467e8) volume_small_pane_srt_g3_ParamLimits

0xf4cc,	// (0x000467e8) volume_small_pane_srt_g3

0xf4dd,	// (0x000467f9) volume_small_pane_srt_g4_ParamLimits

0xf4dd,	// (0x000467f9) volume_small_pane_srt_g4

0xf4ee,	// (0x0004680a) volume_small_pane_srt_g5_ParamLimits

0xf4ee,	// (0x0004680a) volume_small_pane_srt_g5

0xf4ff,	// (0x0004681b) volume_small_pane_srt_g6_ParamLimits

0xf4ff,	// (0x0004681b) volume_small_pane_srt_g6

0xf510,	// (0x0004682c) volume_small_pane_srt_g7_ParamLimits

0xf510,	// (0x0004682c) volume_small_pane_srt_g7

0xf521,	// (0x0004683d) volume_small_pane_srt_g8_ParamLimits

0xf521,	// (0x0004683d) volume_small_pane_srt_g8

0xf532,	// (0x0004684e) volume_small_pane_srt_g9_ParamLimits

0xf532,	// (0x0004684e) volume_small_pane_srt_g9

0xf543,	// (0x0004685f) volume_small_pane_srt_g10_ParamLimits

0xf543,	// (0x0004685f) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x00046a7f) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x00046a7f) volume_small_pane_srt_g

0xb443,	// (0x0004275f) query_popup_data_pane_cp2

0x3bfe,	// (0x0003af1a) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3bfe,	// (0x0003af1a) navi_navi_icon_text_pane_srt_t1

0x2cae,	// (0x00039fca) navi_tabs_2_long_pane_srt

0x2cae,	// (0x00039fca) navi_tabs_2_pane_srt

0x2cae,	// (0x00039fca) navi_tabs_3_long_pane_srt

0x2cae,	// (0x00039fca) navi_tabs_3_pane_srt

0x2cae,	// (0x00039fca) navi_tabs_4_pane_srt

0x05e0,	// (0x000378fc) tabs_2_active_pane_srt_ParamLimits

0x05e0,	// (0x000378fc) tabs_2_active_pane_srt

0x05f0,	// (0x0003790c) tabs_2_passive_pane_srt_ParamLimits

0x05f0,	// (0x0003790c) tabs_2_passive_pane_srt

0x2492,	// (0x000397ae) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2492,	// (0x000397ae) bg_passive_tab_pane_cp1_srt

0x3bca,	// (0x0003aee6) bg_passive_tab_pane_g1_cp1_srt

0xf078,	// (0x00046394) bg_passive_tab_pane_g2_cp1_srt

0x3bd3,	// (0x0003aeef) bg_passive_tab_pane_g3_cp1_srt

0x8505,	// (0x0003f821) bg_active_tab_pane_cp1_srt_ParamLimits

0x8505,	// (0x0003f821) bg_active_tab_pane_cp1_srt

0x3bdc,	// (0x0003aef8) tabs_2_active_pane_srt_g1

0xc614,	// (0x00043930) tabs_2_active_pane_srt_t1_ParamLimits

0xc614,	// (0x00043930) tabs_2_active_pane_srt_t1

0x3bca,	// (0x0003aee6) bg_active_tab_pane_g1_cp1_srt

0xf078,	// (0x00046394) bg_active_tab_pane_g2_cp1_srt

0x3bd3,	// (0x0003aeef) bg_active_tab_pane_g3_cp1_srt

0x05ad,	// (0x000378c9) tabs_3_active_pane_srt_ParamLimits

0x05ad,	// (0x000378c9) tabs_3_active_pane_srt

0x05be,	// (0x000378da) tabs_3_passive_pane_cp_srt_ParamLimits

0x05be,	// (0x000378da) tabs_3_passive_pane_cp_srt

0x05cf,	// (0x000378eb) tabs_3_passive_pane_srt_ParamLimits

0x05cf,	// (0x000378eb) tabs_3_passive_pane_srt

0x2492,	// (0x000397ae) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2492,	// (0x000397ae) bg_passive_tab_pane_cp2_srt

0x1705,	// (0x00038a21) bg_passive_tab_pane_g1_cp2_srt

0xf078,	// (0x00046394) bg_passive_tab_pane_g2_cp2_srt

0x170e,	// (0x00038a2a) bg_passive_tab_pane_g3_cp2_srt

0x8505,	// (0x0003f821) bg_active_tab_pane_cp2_srt_ParamLimits

0x8505,	// (0x0003f821) bg_active_tab_pane_cp2_srt

0x3bb0,	// (0x0003aecc) tabs_3_active_pane_srt_g1

0xc5fe,	// (0x0004391a) tabs_3_active_pane_srt_t1_ParamLimits

0xc5fe,	// (0x0004391a) tabs_3_active_pane_srt_t1

0x1705,	// (0x00038a21) bg_active_tab_pane_g1_cp2_srt

0xf078,	// (0x00046394) bg_active_tab_pane_g2_cp2_srt

0x170e,	// (0x00038a2a) bg_active_tab_pane_g3_cp2_srt

0x0565,	// (0x00037881) tabs_4_active_pane_srt_ParamLimits

0x0565,	// (0x00037881) tabs_4_active_pane_srt

0x0577,	// (0x00037893) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0577,	// (0x00037893) tabs_4_passive_pane_cp2_srt

0x1863,	// (0x00038b7f) aid_size_cell_toolbar

0x37e8,	// (0x0003ab04) main_idle_act_pane_ParamLimits

0x1aa6,	// (0x00038dc2) popup_large_graphic_colour_window_ParamLimits

0xa7a7,	// (0x00041ac3) popup_toolbar_window_ParamLimits

0xa7a7,	// (0x00041ac3) popup_toolbar_window

0xd299,	// (0x000445b5) list_single_graphic_2heading_pane_ParamLimits

0xd299,	// (0x000445b5) list_single_graphic_2heading_pane

0xbacc,	// (0x00042de8) aid_size_cell_apps_grid_lsc_pane

0xbade,	// (0x00042dfa) aid_size_cell_apps_grid_prt_pane

0x18dd,	// (0x00038bf9) bg_wml_button_pane_cp1_ParamLimits

0x18dd,	// (0x00038bf9) bg_wml_button_pane_cp1

0xc0c7,	// (0x000433e3) form_midp_field_text_pane_t1_ParamLimits

0x2492,	// (0x000397ae) input_focus_pane_cp050_ParamLimits

0x26d1,	// (0x000399ed) list_midp_form_text_pane_ParamLimits

0x2683,	// (0x0003999f) input_focus_pane_cp051_ParamLimits

0x2697,	// (0x000399b3) list_midp_choice_pane_ParamLimits

0xc07e,	// (0x0004339a) list_single_2graphic_pane_cp3_ParamLimits

0xc07e,	// (0x0004339a) list_single_2graphic_pane_cp3

0x4869,	// (0x0003bb85) list_single_midp_graphic_pane_ParamLimits

0x4869,	// (0x0003bb85) list_single_midp_graphic_pane

0xec28,	// (0x00045f44) list_single_graphic_2heading_pane_g1_ParamLimits

0xec28,	// (0x00045f44) list_single_graphic_2heading_pane_g1

0xec34,	// (0x00045f50) list_single_graphic_2heading_pane_g4_ParamLimits

0xec34,	// (0x00045f50) list_single_graphic_2heading_pane_g4

0xec40,	// (0x00045f5c) list_single_graphic_2heading_pane_g5_ParamLimits

0xec40,	// (0x00045f5c) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x00046ad2) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x00046ad2) list_single_graphic_2heading_pane_g

0xec4c,	// (0x00045f68) list_single_graphic_2heading_pane_t1_ParamLimits

0xec4c,	// (0x00045f68) list_single_graphic_2heading_pane_t1

0xec60,	// (0x00045f7c) list_single_graphic_2heading_pane_t2_ParamLimits

0xec60,	// (0x00045f7c) list_single_graphic_2heading_pane_t2

0xec7c,	// (0x00045f98) list_single_graphic_2heading_pane_t3_ParamLimits

0xec7c,	// (0x00045f98) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x00046ad9) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x00046ad9) list_single_graphic_2heading_pane_t

0x235c,	// (0x00039678) bg_popup_sub_pane_cp2

0x2386,	// (0x000396a2) grid_toobar_pane

0x0100,	// (0x0003741c) cell_toolbar_pane_ParamLimits

0x0100,	// (0x0003741c) cell_toolbar_pane

0x23c2,	// (0x000396de) cell_toolbar_pane_g1_ParamLimits

0x23c2,	// (0x000396de) cell_toolbar_pane_g1

0x23d6,	// (0x000396f2) cell_toolbar_pane_g2_ParamLimits

0x23d6,	// (0x000396f2) cell_toolbar_pane_g2

0x0001,

0xf7cb,	// (0x00046ae7) cell_toolbar_pane_g_ParamLimits

0xf7cb,	// (0x00046ae7) cell_toolbar_pane_g

0x23f8,	// (0x00039714) grid_highlight_pane_cp2_ParamLimits

0x23f8,	// (0x00039714) grid_highlight_pane_cp2

0x2412,	// (0x0003972e) toolbar_button_pane

0x241e,	// (0x0003973a) toolbar_button_pane_g1

0x2426,	// (0x00039742) toolbar_button_pane_g2

0x242e,	// (0x0003974a) toolbar_button_pane_g3

0x2436,	// (0x00039752) toolbar_button_pane_g4

0x243e,	// (0x0003975a) toolbar_button_pane_g5

0x2446,	// (0x00039762) toolbar_button_pane_g6

0x244e,	// (0x0003976a) toolbar_button_pane_g7

0x2456,	// (0x00039772) toolbar_button_pane_g8

0x245e,	// (0x0003977a) toolbar_button_pane_g9

0x0009,

0xf7d0,	// (0x00046aec) toolbar_button_pane_g

0x0138,	// (0x00037454) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0138,	// (0x00037454) list_single_2graphic_pane_g1_cp3

0xa872,	// (0x00041b8e) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa872,	// (0x00041b8e) list_single_2graphic_pane_g2_cp3

0x0155,	// (0x00037471) list_single_2graphic_pane_g3_cp3

0x015d,	// (0x00037479) list_single_2graphic_pane_g4_cp3_ParamLimits

0x015d,	// (0x00037479) list_single_2graphic_pane_g4_cp3

0x0169,	// (0x00037485) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0169,	// (0x00037485) list_single_2graphic_pane_t1_cp3

0x0184,	// (0x000374a0) list_single_midp_graphic_pane_g2_ParamLimits

0x0184,	// (0x000374a0) list_single_midp_graphic_pane_g2

0x186b,	// (0x00038b87) aid_zoom_text_primary

0xd184,	// (0x000444a0) aid_zoom_text_secondary

0x17c2,	// (0x00038ade) status_small_pane_g7_ParamLimits

0x17c2,	// (0x00038ade) status_small_pane_g7

0x17e5,	// (0x00038b01) status_small_pane_t1_ParamLimits

0x9112,	// (0x0004042e) title_pane_g2

0x0003,

0xf554,	// (0x00046870) title_pane_g

0x939e,	// (0x000406ba) aid_size_cell_colour_1_pane_ParamLimits

0x939e,	// (0x000406ba) aid_size_cell_colour_1_pane

0x93b2,	// (0x000406ce) aid_size_cell_colour_2_pane_ParamLimits

0x93b2,	// (0x000406ce) aid_size_cell_colour_2_pane

0x93c6,	// (0x000406e2) aid_size_cell_colour_3_pane_ParamLimits

0x93c6,	// (0x000406e2) aid_size_cell_colour_3_pane

0x93da,	// (0x000406f6) aid_size_cell_colour_4_pane_ParamLimits

0x93da,	// (0x000406f6) aid_size_cell_colour_4_pane

0xee1a,	// (0x00046136) title_pane_stacon_g1_ParamLimits

0xee1a,	// (0x00046136) title_pane_stacon_g1

0x2a94,	// (0x00039db0) popup_note_wait_window_g3_ParamLimits

0x2a94,	// (0x00039db0) popup_note_wait_window_g3

0x2b0b,	// (0x00039e27) popup_note_wait_window_t5_ParamLimits

0x2b0b,	// (0x00039e27) popup_note_wait_window_t5

0x843e,	// (0x0003f75a) main_feb_china_hwr_fs_writing_pane

0xa13e,	// (0x0004145a) popup_feb_china_hwr_fs_window_ParamLimits

0xa13e,	// (0x0004145a) popup_feb_china_hwr_fs_window

0xa883,	// (0x00041b9f) aid_size_cell_hwr_fs_ParamLimits

0xa883,	// (0x00041b9f) aid_size_cell_hwr_fs

0x2492,	// (0x000397ae) bg_popup_sub_pane_cp3_ParamLimits

0x2492,	// (0x000397ae) bg_popup_sub_pane_cp3

0xa898,	// (0x00041bb4) grid_hwr_fs_pane_ParamLimits

0xa898,	// (0x00041bb4) grid_hwr_fs_pane

0x01d3,	// (0x000374ef) linegrid_hwr_fs_pane_ParamLimits

0x01d3,	// (0x000374ef) linegrid_hwr_fs_pane

0xa8b0,	// (0x00041bcc) cell_hwr_fs_pane_ParamLimits

0xa8b0,	// (0x00041bcc) cell_hwr_fs_pane

0x249e,	// (0x000397ba) linegrid_hwr_fs_pane_g1_ParamLimits

0x249e,	// (0x000397ba) linegrid_hwr_fs_pane_g1

0xc052,	// (0x0004336e) linegrid_hwr_fs_pane_g2_ParamLimits

0xc052,	// (0x0004336e) linegrid_hwr_fs_pane_g2

0x24bc,	// (0x000397d8) linegrid_hwr_fs_pane_g3_ParamLimits

0x24bc,	// (0x000397d8) linegrid_hwr_fs_pane_g3

0x0207,	// (0x00037523) linegrid_hwr_fs_pane_g4_ParamLimits

0x0207,	// (0x00037523) linegrid_hwr_fs_pane_g4

0x0225,	// (0x00037541) linegrid_hwr_fs_pane_g5_ParamLimits

0x0225,	// (0x00037541) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f6,	// (0x00046b12) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x00046b12) linegrid_hwr_fs_pane_g

0x24c8,	// (0x000397e4) cell_hwr_fs_pane_g1_ParamLimits

0x24c8,	// (0x000397e4) cell_hwr_fs_pane_g1

0x2293,	// (0x000395af) cell_hwr_fs_pane_g2_ParamLimits

0x2293,	// (0x000395af) cell_hwr_fs_pane_g2

0xc064,	// (0x00043380) cell_hwr_fs_pane_g3_ParamLimits

0xc064,	// (0x00043380) cell_hwr_fs_pane_g3

0xc071,	// (0x0004338d) cell_hwr_fs_pane_g4_ParamLimits

0xc071,	// (0x0004338d) cell_hwr_fs_pane_g4

0x0003,

0xf801,	// (0x00046b1d) cell_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x00046b1d) cell_hwr_fs_pane_g

0xa8d6,	// (0x00041bf2) cell_hwr_fs_pane_t1

0x843e,	// (0x0003f75a) grid_highlight_pane_cp6

0x843e,	// (0x0003f75a) main_idle_act2_pane

0xb8db,	// (0x00042bf7) aid_inside_area_popup_secondary

0xc192,	// (0x000434ae) aid_inside_area_window_primary_ParamLimits

0xc192,	// (0x000434ae) aid_inside_area_window_primary

0x3d17,	// (0x0003b033) ai2_news_ticker_pane

0x3d1f,	// (0x0003b03b) aid_size_cell_ai1_link_ParamLimits

0x3d1f,	// (0x0003b03b) aid_size_cell_ai1_link

0x3d39,	// (0x0003b055) popup_ai2_data_window_ParamLimits

0x3d39,	// (0x0003b055) popup_ai2_data_window

0x3d57,	// (0x0003b073) popup_ai2_link_window_ParamLimits

0x3d57,	// (0x0003b073) popup_ai2_link_window

0x2492,	// (0x000397ae) bg_popup_sub_pane_cp4_ParamLimits

0x2492,	// (0x000397ae) bg_popup_sub_pane_cp4

0x3d6d,	// (0x0003b089) grid_ai2_link_pane_ParamLimits

0x3d6d,	// (0x0003b089) grid_ai2_link_pane

0x3d84,	// (0x0003b0a0) popup_ai2_link_window_g1_ParamLimits

0x3d84,	// (0x0003b0a0) popup_ai2_link_window_g1

0x3d90,	// (0x0003b0ac) popup_ai2_link_window_g2_ParamLimits

0x3d90,	// (0x0003b0ac) popup_ai2_link_window_g2

0x0001,

0xf9d4,	// (0x00046cf0) popup_ai2_link_window_g_ParamLimits

0xf9d4,	// (0x00046cf0) popup_ai2_link_window_g

0x3da1,	// (0x0003b0bd) ai2_mp_button_pane

0x3da9,	// (0x0003b0c5) ai2_mp_volume_pane

0x2683,	// (0x0003999f) bg_popup_sub_pane_cp5_ParamLimits

0x2683,	// (0x0003999f) bg_popup_sub_pane_cp5

0x3db1,	// (0x0003b0cd) heading_ai2_gene_pane_ParamLimits

0x3db1,	// (0x0003b0cd) heading_ai2_gene_pane

0x3dbd,	// (0x0003b0d9) list_ai2_gene_pane_ParamLimits

0x3dbd,	// (0x0003b0d9) list_ai2_gene_pane

0x3e05,	// (0x0003b121) cell_ai2_link_pane_ParamLimits

0x3e05,	// (0x0003b121) cell_ai2_link_pane

0x3e1b,	// (0x0003b137) cell_ai2_link_pane_g1

0x843e,	// (0x0003f75a) grid_highlight_pane_cp7

0x061d,	// (0x00037939) ai2_mp_volume_pane_g1

0x3eee,	// (0x0003b20a) ai2_mp_volume_pane_g2

0x3e63,	// (0x0003b17f) list_ai2_gene_pane_t1

0x3ef6,	// (0x0003b212) ai2_mp_volume_pane_g3

0x0002,

0xf9ed,	// (0x00046d09) ai2_mp_volume_pane_g

0x0625,	// (0x00037941) volume_small_pane_cp3

0x3efe,	// (0x0003b21a) aid_size_cell_ai2_button

0x3f06,	// (0x0003b222) grid_ai2_button_pane

0x3f0f,	// (0x0003b22b) cell_ai2_button_pane_ParamLimits

0x3f0f,	// (0x0003b22b) cell_ai2_button_pane

0x8434,	// (0x0003f750) cell_ai2_button_pane_g1

0x843e,	// (0x0003f75a) grid_highlight_pane_cp8

0x3eae,	// (0x0003b1ca) ai2_gene_pane_t1_ParamLimits

0x3eae,	// (0x0003b1ca) ai2_gene_pane_t1

0xa09c,	// (0x000413b8) aid_height_parent_landscape

0xc388,	// (0x000436a4) aid_height_set_list

0x37e8,	// (0x0003ab04) aid_size_parent

0x3b38,	// (0x0003ae54) aid_size_cell_graphic_pane_ParamLimits

0x3dcd,	// (0x0003b0e9) popup_ai2_data_window_g1_ParamLimits

0x3dcd,	// (0x0003b0e9) popup_ai2_data_window_g1

0x3dd9,	// (0x0003b0f5) ai2_news_ticker_pane_g1

0x3de1,	// (0x0003b0fd) ai2_news_ticker_pane_g2

0x0001,

0xf9d9,	// (0x00046cf5) ai2_news_ticker_pane_g

0x3de9,	// (0x0003b105) ai2_news_ticker_pane_t1

0x3df7,	// (0x0003b113) ai2_news_ticker_pane_t2

0x0001,

0xf9de,	// (0x00046cfa) ai2_news_ticker_pane_t

0x3e24,	// (0x0003b140) heading_ai2_gene_pane_g1

0x3e2c,	// (0x0003b148) heading_ai2_gene_pane_t1_ParamLimits

0x3e2c,	// (0x0003b148) heading_ai2_gene_pane_t1

0x3e41,	// (0x0003b15d) list_highlight_pane_cp6

0x3e49,	// (0x0003b165) ai2_gene_pane_ParamLimits

0x3e49,	// (0x0003b165) ai2_gene_pane

0x3e71,	// (0x0003b18d) list_ai2_gene_pane_t2

0x0001,

0xf9e3,	// (0x00046cff) list_ai2_gene_pane_t

0x3e7f,	// (0x0003b19b) list_highlight_pane_cp8_ParamLimits

0x3e7f,	// (0x0003b19b) list_highlight_pane_cp8

0x3e90,	// (0x0003b1ac) ai2_gene_pane_g1_ParamLimits

0x3e90,	// (0x0003b1ac) ai2_gene_pane_g1

0x3ea2,	// (0x0003b1be) ai2_gene_pane_g2_ParamLimits

0x3ea2,	// (0x0003b1be) ai2_gene_pane_g2

0x0001,

0xf9e8,	// (0x00046d04) ai2_gene_pane_g_ParamLimits

0xf9e8,	// (0x00046d04) ai2_gene_pane_g

0xb75e,	// (0x00042a7a) scroll_pane_cp12

0xa05b,	// (0x00041377) control_pane_t3_ParamLimits

0xa05b,	// (0x00041377) control_pane_t3

0x17d6,	// (0x00038af2) status_small_pane_g8_ParamLimits

0x17d6,	// (0x00038af2) status_small_pane_g8

0xa1e0,	// (0x000414fc) popup_find_window_ParamLimits

0xa491,	// (0x000417ad) popup_note_image_window_ParamLimits

0xce62,	// (0x0004417e) list_double2_graphic_pane_vc_g1_ParamLimits

0xce62,	// (0x0004417e) list_double2_graphic_pane_vc_g1

0xd194,	// (0x000444b0) list_double2_graphic_pane_vc_g2_ParamLimits

0xd194,	// (0x000444b0) list_double2_graphic_pane_vc_g2

0xd1a0,	// (0x000444bc) list_double2_graphic_pane_vc_g3_ParamLimits

0xd1a0,	// (0x000444bc) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c4,	// (0x00046ae0) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c4,	// (0x00046ae0) list_double2_graphic_pane_vc_g

0xd1ac,	// (0x000444c8) list_double2_graphic_pane_vc_t1_ParamLimits

0xd1ac,	// (0x000444c8) list_double2_graphic_pane_vc_t1

0xce38,	// (0x00044154) list_single_heading_pane_vc_g1_ParamLimits

0xce38,	// (0x00044154) list_single_heading_pane_vc_g1

0xce44,	// (0x00044160) list_single_heading_pane_vc_g2_ParamLimits

0xce44,	// (0x00044160) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x000468ea) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x000468ea) list_single_heading_pane_vc_g

0xd1c2,	// (0x000444de) list_single_heading_pane_vc_t1_ParamLimits

0xd1c2,	// (0x000444de) list_single_heading_pane_vc_t1

0xd1da,	// (0x000444f6) list_single_heading_pane_vc_t2_ParamLimits

0xd1da,	// (0x000444f6) list_single_heading_pane_vc_t2

0x0001,

0xf7e5,	// (0x00046b01) list_single_heading_pane_vc_t_ParamLimits

0xf7e5,	// (0x00046b01) list_single_heading_pane_vc_t

0xd1ec,	// (0x00044508) list_setting_number_pane_vc_g1_ParamLimits

0xd1ec,	// (0x00044508) list_setting_number_pane_vc_g1

0xd1f8,	// (0x00044514) list_setting_number_pane_vc_g2_ParamLimits

0xd1f8,	// (0x00044514) list_setting_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x00046b06) list_setting_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x00046b06) list_setting_number_pane_vc_g

0xd204,	// (0x00044520) list_setting_number_pane_vc_t1_ParamLimits

0xd204,	// (0x00044520) list_setting_number_pane_vc_t1

0xd218,	// (0x00044534) list_setting_number_pane_vc_t2_ParamLimits

0xd218,	// (0x00044534) list_setting_number_pane_vc_t2

0xd234,	// (0x00044550) list_setting_number_pane_vc_t3_ParamLimits

0xd234,	// (0x00044550) list_setting_number_pane_vc_t3

0x0002,

0xf7ef,	// (0x00046b0b) list_setting_number_pane_vc_t_ParamLimits

0xf7ef,	// (0x00046b0b) list_setting_number_pane_vc_t

0xd262,	// (0x0004457e) set_value_pane_vc_ParamLimits

0xd262,	// (0x0004457e) set_value_pane_vc

0xd299,	// (0x000445b5) list_double2_graphic_pane_vc_ParamLimits

0xd299,	// (0x000445b5) list_double2_graphic_pane_vc

0x39c0,	// (0x0003acdc) list_double2_large_graphic_pane_vc_ParamLimits

0x39c0,	// (0x0003acdc) list_double2_large_graphic_pane_vc

0xd299,	// (0x000445b5) list_double2_pane_vc_ParamLimits

0xd299,	// (0x000445b5) list_double2_pane_vc

0xd299,	// (0x000445b5) list_double_graphic_heading_pane_vc_ParamLimits

0xd299,	// (0x000445b5) list_double_graphic_heading_pane_vc

0xd299,	// (0x000445b5) list_double_graphic_pane_vc_ParamLimits

0xd299,	// (0x000445b5) list_double_graphic_pane_vc

0xd299,	// (0x000445b5) list_double_heading_pane_vc_ParamLimits

0xd299,	// (0x000445b5) list_double_heading_pane_vc

0x39c0,	// (0x0003acdc) list_double_large_graphic_pane_vc_ParamLimits

0x39c0,	// (0x0003acdc) list_double_large_graphic_pane_vc

0xd299,	// (0x000445b5) list_double_number_pane_vc_ParamLimits

0xd299,	// (0x000445b5) list_double_number_pane_vc

0xd299,	// (0x000445b5) list_double_pane_vc_ParamLimits

0xd299,	// (0x000445b5) list_double_pane_vc

0xd299,	// (0x000445b5) list_double_time_pane_vc_ParamLimits

0xd299,	// (0x000445b5) list_double_time_pane_vc

0xd299,	// (0x000445b5) list_setting_number_pane_vc_ParamLimits

0xd299,	// (0x000445b5) list_setting_number_pane_vc

0xd299,	// (0x000445b5) list_setting_pane_vc_ParamLimits

0xd299,	// (0x000445b5) list_setting_pane_vc

0xd299,	// (0x000445b5) list_single_graphic_heading_pane_vc_ParamLimits

0xd299,	// (0x000445b5) list_single_graphic_heading_pane_vc

0xd299,	// (0x000445b5) list_single_heading_pane_vc_ParamLimits

0xd299,	// (0x000445b5) list_single_heading_pane_vc

0xd299,	// (0x000445b5) list_single_number_heading_pane_vc_ParamLimits

0xd299,	// (0x000445b5) list_single_number_heading_pane_vc

0xce62,	// (0x0004417e) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xce62,	// (0x0004417e) list_double_graphic_heading_pane_vc_g1

0xce38,	// (0x00044154) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xce38,	// (0x00044154) list_double_graphic_heading_pane_vc_g2

0xce44,	// (0x00044160) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xce44,	// (0x00044160) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f4,	// (0x00046d10) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f4,	// (0x00046d10) list_double_graphic_heading_pane_vc_g

0xd2ae,	// (0x000445ca) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xd2ae,	// (0x000445ca) list_double_graphic_heading_pane_vc_t1

0xd2c4,	// (0x000445e0) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xd2c4,	// (0x000445e0) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fb,	// (0x00046d17) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fb,	// (0x00046d17) list_double_graphic_heading_pane_vc_t

0xd1ec,	// (0x00044508) list_setting_pane_vc_g1_ParamLimits

0xd1ec,	// (0x00044508) list_setting_pane_vc_g1

0xd1f8,	// (0x00044514) list_setting_pane_vc_g2_ParamLimits

0xd1f8,	// (0x00044514) list_setting_pane_vc_g2

0x0001,

0xf7ea,	// (0x00046b06) list_setting_pane_vc_g_ParamLimits

0xf7ea,	// (0x00046b06) list_setting_pane_vc_g

0xd2ee,	// (0x0004460a) list_setting_pane_vc_t1_ParamLimits

0xd2ee,	// (0x0004460a) list_setting_pane_vc_t1

0xd30a,	// (0x00044626) list_setting_pane_vc_t2_ParamLimits

0xd30a,	// (0x00044626) list_setting_pane_vc_t2

0x0001,

0xfa3e,	// (0x00046d5a) list_setting_pane_vc_t_ParamLimits

0xfa3e,	// (0x00046d5a) list_setting_pane_vc_t

0xd262,	// (0x0004457e) set_value_pane_cp_vc_ParamLimits

0xd262,	// (0x0004457e) set_value_pane_cp_vc

0xce38,	// (0x00044154) list_single_number_heading_pane_vc_g1_ParamLimits

0xce38,	// (0x00044154) list_single_number_heading_pane_vc_g1

0xce44,	// (0x00044160) list_single_number_heading_pane_vc_g2_ParamLimits

0xce44,	// (0x00044160) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x000468ea) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x000468ea) list_single_number_heading_pane_vc_g

0xd1c2,	// (0x000444de) list_single_number_heading_pane_vc_t1_ParamLimits

0xd1c2,	// (0x000444de) list_single_number_heading_pane_vc_t1

0xd326,	// (0x00044642) list_single_number_heading_pane_vc_t2_ParamLimits

0xd326,	// (0x00044642) list_single_number_heading_pane_vc_t2

0xce50,	// (0x0004416c) list_single_number_heading_pane_vc_t3_ParamLimits

0xce50,	// (0x0004416c) list_single_number_heading_pane_vc_t3

0x0002,

0xfa43,	// (0x00046d5f) list_single_number_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x00046d5f) list_single_number_heading_pane_vc_t

0xce62,	// (0x0004417e) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xce62,	// (0x0004417e) list_single_graphic_heading_pane_vc_g1

0xce38,	// (0x00044154) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xce38,	// (0x00044154) list_single_graphic_heading_pane_vc_g4

0xce44,	// (0x00044160) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xce44,	// (0x00044160) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9f4,	// (0x00046d10) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9f4,	// (0x00046d10) list_single_graphic_heading_pane_vc_g

0xd1c2,	// (0x000444de) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xd1c2,	// (0x000444de) list_single_graphic_heading_pane_vc_t1

0xd338,	// (0x00044654) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xd338,	// (0x00044654) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4a,	// (0x00046d66) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4a,	// (0x00046d66) list_single_graphic_heading_pane_vc_t

0xce38,	// (0x00044154) list_double2_pane_vc_g1_ParamLimits

0xce38,	// (0x00044154) list_double2_pane_vc_g1

0xce44,	// (0x00044160) list_double2_pane_vc_g2_ParamLimits

0xce44,	// (0x00044160) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x000468ea) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x000468ea) list_double2_pane_vc_g

0xd283,	// (0x0004459f) list_double2_pane_vc_t1_ParamLimits

0xd283,	// (0x0004459f) list_double2_pane_vc_t1

0xce6e,	// (0x0004418a) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xce6e,	// (0x0004418a) list_double2_large_graphic_pane_vc_g1

0xce7a,	// (0x00044196) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xce7a,	// (0x00044196) list_double2_large_graphic_pane_vc_g2

0xce86,	// (0x000441a2) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xce86,	// (0x000441a2) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5eb,	// (0x00046907) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5eb,	// (0x00046907) list_double2_large_graphic_pane_vc_g

0xce92,	// (0x000441ae) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xce92,	// (0x000441ae) list_double2_large_graphic_pane_vc_t1

0xd34a,	// (0x00044666) list_double_time_pane_vc_g1_ParamLimits

0xd34a,	// (0x00044666) list_double_time_pane_vc_g1

0xd356,	// (0x00044672) list_double_time_pane_vc_g2_ParamLimits

0xd356,	// (0x00044672) list_double_time_pane_vc_g2

0x0001,

0xfa4f,	// (0x00046d6b) list_double_time_pane_vc_g_ParamLimits

0xfa4f,	// (0x00046d6b) list_double_time_pane_vc_g

0xd362,	// (0x0004467e) list_double_time_pane_vc_t1_ParamLimits

0xd362,	// (0x0004467e) list_double_time_pane_vc_t1

0xd38c,	// (0x000446a8) list_double_time_pane_vc_t2_ParamLimits

0xd38c,	// (0x000446a8) list_double_time_pane_vc_t2

0xd3d5,	// (0x000446f1) list_double_time_pane_vc_t3_ParamLimits

0xd3d5,	// (0x000446f1) list_double_time_pane_vc_t3

0xd3e7,	// (0x00044703) list_double_time_pane_vc_t4_ParamLimits

0xd3e7,	// (0x00044703) list_double_time_pane_vc_t4

0x0003,

0xfa54,	// (0x00046d70) list_double_time_pane_vc_t_ParamLimits

0xfa54,	// (0x00046d70) list_double_time_pane_vc_t

0xce38,	// (0x00044154) list_double_pane_vc_g1_ParamLimits

0xce38,	// (0x00044154) list_double_pane_vc_g1

0xce44,	// (0x00044160) list_double_pane_vc_g2_ParamLimits

0xce44,	// (0x00044160) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x000468ea) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x000468ea) list_double_pane_vc_g

0xd40c,	// (0x00044728) list_double_pane_vc_t1_ParamLimits

0xd40c,	// (0x00044728) list_double_pane_vc_t1

0xd420,	// (0x0004473c) list_double_pane_vc_t2_ParamLimits

0xd420,	// (0x0004473c) list_double_pane_vc_t2

0x0001,

0xfa5d,	// (0x00046d79) list_double_pane_vc_t_ParamLimits

0xfa5d,	// (0x00046d79) list_double_pane_vc_t

0xce38,	// (0x00044154) list_double_number_pane_vc_g1_ParamLimits

0xce38,	// (0x00044154) list_double_number_pane_vc_g1

0xce44,	// (0x00044160) list_double_number_pane_vc_g2_ParamLimits

0xce44,	// (0x00044160) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x000468ea) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x000468ea) list_double_number_pane_vc_g

0xd436,	// (0x00044752) list_double_number_pane_vc_t1_ParamLimits

0xd436,	// (0x00044752) list_double_number_pane_vc_t1

0xd44a,	// (0x00044766) list_double_number_pane_vc_t2_ParamLimits

0xd44a,	// (0x00044766) list_double_number_pane_vc_t2

0xd45e,	// (0x0004477a) list_double_number_pane_vc_t3_ParamLimits

0xd45e,	// (0x0004477a) list_double_number_pane_vc_t3

0x0002,

0xfa62,	// (0x00046d7e) list_double_number_pane_vc_t_ParamLimits

0xfa62,	// (0x00046d7e) list_double_number_pane_vc_t

0xd474,	// (0x00044790) list_double_large_graphic_pane_vc_g1_ParamLimits

0xd474,	// (0x00044790) list_double_large_graphic_pane_vc_g1

0xd485,	// (0x000447a1) list_double_large_graphic_pane_vc_g2_ParamLimits

0xd485,	// (0x000447a1) list_double_large_graphic_pane_vc_g2

0xce86,	// (0x000441a2) list_double_large_graphic_pane_vc_g3_ParamLimits

0xce86,	// (0x000441a2) list_double_large_graphic_pane_vc_g3

0xd494,	// (0x000447b0) list_double_large_graphic_pane_vc_g4_ParamLimits

0xd494,	// (0x000447b0) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa69,	// (0x00046d85) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa69,	// (0x00046d85) list_double_large_graphic_pane_vc_g

0xd4a0,	// (0x000447bc) list_double_large_graphic_pane_vc_t1_ParamLimits

0xd4a0,	// (0x000447bc) list_double_large_graphic_pane_vc_t1

0xd4b9,	// (0x000447d5) list_double_large_graphic_pane_vc_t2_ParamLimits

0xd4b9,	// (0x000447d5) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa72,	// (0x00046d8e) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa72,	// (0x00046d8e) list_double_large_graphic_pane_vc_t

0xce38,	// (0x00044154) list_double_heading_pane_vc_g1_ParamLimits

0xce38,	// (0x00044154) list_double_heading_pane_vc_g1

0xce44,	// (0x00044160) list_double_heading_pane_vc_g2_ParamLimits

0xce44,	// (0x00044160) list_double_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x000468ea) list_double_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x000468ea) list_double_heading_pane_vc_g

0xd4d0,	// (0x000447ec) list_double_heading_pane_vc_t1_ParamLimits

0xd4d0,	// (0x000447ec) list_double_heading_pane_vc_t1

0xd1c2,	// (0x000444de) list_double_heading_pane_vc_t2_ParamLimits

0xd1c2,	// (0x000444de) list_double_heading_pane_vc_t2

0x0001,

0xfa77,	// (0x00046d93) list_double_heading_pane_vc_t_ParamLimits

0xfa77,	// (0x00046d93) list_double_heading_pane_vc_t

0xd4e2,	// (0x000447fe) list_double_graphic_pane_vc_g1_ParamLimits

0xd4e2,	// (0x000447fe) list_double_graphic_pane_vc_g1

0xd4f2,	// (0x0004480e) list_double_graphic_pane_vc_g2_ParamLimits

0xd4f2,	// (0x0004480e) list_double_graphic_pane_vc_g2

0xd501,	// (0x0004481d) list_double_graphic_pane_vc_g3_ParamLimits

0xd501,	// (0x0004481d) list_double_graphic_pane_vc_g3

0x0002,

0xfa7c,	// (0x00046d98) list_double_graphic_pane_vc_g_ParamLimits

0xfa7c,	// (0x00046d98) list_double_graphic_pane_vc_g

0xd50d,	// (0x00044829) list_double_graphic_pane_vc_t1_ParamLimits

0xd50d,	// (0x00044829) list_double_graphic_pane_vc_t1

0xd521,	// (0x0004483d) list_double_graphic_pane_vc_t2_ParamLimits

0xd521,	// (0x0004483d) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x00046d9f) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x00046d9f) list_double_graphic_pane_vc_t

0xe9e0,	// (0x00045cfc) aid_size_cell_fastswap

0x8eeb,	// (0x00040207) aid_size_cell_touch_ParamLimits

0x8eeb,	// (0x00040207) aid_size_cell_touch

0xeb67,	// (0x00045e83) popup_fast_swap_wide_window_ParamLimits

0xeb67,	// (0x00045e83) popup_fast_swap_wide_window

0x90a9,	// (0x000403c5) touch_pane_ParamLimits

0x90a9,	// (0x000403c5) touch_pane

0xb7b4,	// (0x00042ad0) button_value_adjust_pane_cp2

0xcecb,	// (0x000441e7) button_value_adjust_pane_cp4

0xced3,	// (0x000441ef) form_field_data_pane_cp2

0x993d,	// (0x00040c59) form_field_data_wide_pane_cp2

0xbb1a,	// (0x00042e36) bg_scroll_pane_ParamLimits

0xef76,	// (0x00046292) scroll_handle_pane_ParamLimits

0xef8a,	// (0x000462a6) scroll_sc2_down_pane_ParamLimits

0xef8a,	// (0x000462a6) scroll_sc2_down_pane

0xbb4b,	// (0x00042e67) scroll_sc2_up_pane_ParamLimits

0xbb4b,	// (0x00042e67) scroll_sc2_up_pane

0xc755,	// (0x00043a71) grid_wheel_folder_pane_g1_ParamLimits

0xc755,	// (0x00043a71) grid_wheel_folder_pane_g1

0xf17f,	// (0x0004649b) clock_nsta_pane_cp2_ParamLimits

0xf17f,	// (0x0004649b) clock_nsta_pane_cp2

0x18dd,	// (0x00038bf9) listscroll_midp_pane_ParamLimits

0x9e61,	// (0x0004117d) midp_canvas_pane

0x1851,	// (0x00038b6d) nsta_clock_indic_pane

0x18a7,	// (0x00038bc3) listscroll_form_pane_vc

0x18cb,	// (0x00038be7) listscroll_set_pane_vc_ParamLimits

0x18cb,	// (0x00038be7) listscroll_set_pane_vc

0xbd45,	// (0x00043061) clock_nsta_pane

0xbd6f,	// (0x0004308b) indicator_nsta_pane

0x235c,	// (0x00039678) bg_popup_sub_pane_cp2_ParamLimits

0x2370,	// (0x0003968c) find_pane_cp2_ParamLimits

0x2370,	// (0x0003968c) find_pane_cp2

0x2386,	// (0x000396a2) grid_toobar_pane_ParamLimits

0x2466,	// (0x00039782) list_form_gen_pane_vc_ParamLimits

0x2466,	// (0x00039782) list_form_gen_pane_vc

0x247c,	// (0x00039798) scroll_pane_cp8_vc_ParamLimits

0x247c,	// (0x00039798) scroll_pane_cp8_vc

0x24f8,	// (0x00039814) data_form_wide_pane_vc_ParamLimits

0x24f8,	// (0x00039814) data_form_wide_pane_vc

0x2504,	// (0x00039820) form_field_data_wide_pane_vc_g1

0x250c,	// (0x00039828) form_field_data_wide_pane_vc_t1_ParamLimits

0x250c,	// (0x00039828) form_field_data_wide_pane_vc_t1

0xb7c8,	// (0x00042ae4) input_focus_pane_cp6_vc_ParamLimits

0xb7c8,	// (0x00042ae4) input_focus_pane_cp6_vc

0xc0ef,	// (0x0004340b) list_midp_pane_ParamLimits

0x3ba4,	// (0x0003aec0) scroll_pane_cp16_ParamLimits

0x3ba4,	// (0x0003aec0) scroll_pane_cp16

0x2868,	// (0x00039b84) button_value_adjust_pane_ParamLimits

0x2868,	// (0x00039b84) button_value_adjust_pane

0xc399,	// (0x000436b5) button_value_adjust_pane_cp6_ParamLimits

0xc399,	// (0x000436b5) button_value_adjust_pane_cp6

0xc4db,	// (0x000437f7) settings_code_pane_cp_ParamLimits

0xc4db,	// (0x000437f7) settings_code_pane_cp

0x8434,	// (0x0003f750) cell_touch_pane_g1

0x8434,	// (0x0003f750) cell_touch_pane_g2

0x0001,

0xf709,	// (0x00046a25) cell_touch_pane_g

0xc62a,	// (0x00043946) cell_touch_pane_cp_ParamLimits

0xc62a,	// (0x00043946) cell_touch_pane_cp

0xc646,	// (0x00043962) cell_touch_pane_ParamLimits

0xc646,	// (0x00043962) cell_touch_pane

0x8434,	// (0x0003f750) scroll_sc2_down_pane_g1

0x8434,	// (0x0003f750) scroll_sc2_up_pane_g1

0x843e,	// (0x0003f75a) bg_set_opt_pane_cp4_vc

0x3f42,	// (0x0003b25e) list_set_graphic_pane_vc_g1_ParamLimits

0x3f42,	// (0x0003b25e) list_set_graphic_pane_vc_g1

0xd2e2,	// (0x000445fe) list_set_graphic_pane_vc_g2_ParamLimits

0xd2e2,	// (0x000445fe) list_set_graphic_pane_vc_g2

0x0001,

0xfa00,	// (0x00046d1c) list_set_graphic_pane_vc_g_ParamLimits

0xfa00,	// (0x00046d1c) list_set_graphic_pane_vc_g

0x3f4e,	// (0x0003b26a) text_primary_small_cp13_vc_ParamLimits

0x3f4e,	// (0x0003b26a) text_primary_small_cp13_vc

0x3f66,	// (0x0003b282) list_set_graphic_pane_vc_ParamLimits

0x3f66,	// (0x0003b282) list_set_graphic_pane_vc

0x843e,	// (0x0003f75a) input_focus_pane_cp2_vc

0x8434,	// (0x0003f750) setting_code_pane_vc_g1

0x84af,	// (0x0003f7cb) setting_code_pane_vc_t1

0x3f7b,	// (0x0003b297) set_text_pane_vc_t1_ParamLimits

0x3f7b,	// (0x0003b297) set_text_pane_vc_t1

0x843e,	// (0x0003f75a) input_focus_pane_cp1_vc

0x3f99,	// (0x0003b2b5) list_set_text_pane_vc

0x8434,	// (0x0003f750) setting_text_pane_vc_g1

0x843e,	// (0x0003f75a) bg_set_opt_pane_cp2_vc

0x84a6,	// (0x0003f7c2) setting_slider_graphic_pane_vc_g1

0x3fa3,	// (0x0003b2bf) setting_slider_graphic_pane_vc_t1

0x3fb5,	// (0x0003b2d1) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa05,	// (0x00046d21) setting_slider_graphic_pane_vc_t

0x3fc7,	// (0x0003b2e3) slider_set_pane_cp_vc

0x3fd1,	// (0x0003b2ed) slider_set_pane_vc_g1

0x3fda,	// (0x0003b2f6) slider_set_pane_vc_g2

0x0006,

0xfa0a,	// (0x00046d26) slider_set_pane_vc_g

0xb823,	// (0x00042b3f) set_opt_bg_pane_g1_copy1

0xb82b,	// (0x00042b47) set_opt_bg_pane_g2_copy1

0x4006,	// (0x0003b322) set_opt_bg_pane_g3_copy1

0xb83b,	// (0x00042b57) set_opt_bg_pane_g4_copy1

0xb843,	// (0x00042b5f) set_opt_bg_pane_g5_copy1

0xb84b,	// (0x00042b67) set_opt_bg_pane_g6_copy1

0x4010,	// (0x0003b32c) set_opt_bg_pane_g7_copy1

0x401a,	// (0x0003b336) set_opt_bg_pane_g8_copy1

0x4024,	// (0x0003b340) set_opt_bg_pane_g9_copy1

0x843e,	// (0x0003f75a) bg_set_opt_pane_cp_vc

0x402e,	// (0x0003b34a) setting_slider_pane_vc_t1

0x403d,	// (0x0003b359) setting_slider_pane_vc_t2

0x404f,	// (0x0003b36b) setting_slider_pane_vc_t3

0x0002,

0xfa19,	// (0x00046d35) setting_slider_pane_vc_t

0x4061,	// (0x0003b37d) slider_set_pane_vc

0x026c,	// (0x00037588) volume_set_pane_vc_g1

0x0275,	// (0x00037591) volume_set_pane_vc_g2

0x027e,	// (0x0003759a) volume_set_pane_vc_g3

0x0287,	// (0x000375a3) volume_set_pane_vc_g4

0x0290,	// (0x000375ac) volume_set_pane_vc_g5

0x0299,	// (0x000375b5) volume_set_pane_vc_g6

0x02a2,	// (0x000375be) volume_set_pane_vc_g7

0x02ab,	// (0x000375c7) volume_set_pane_vc_g8

0x02b4,	// (0x000375d0) volume_set_pane_vc_g9

0x02bd,	// (0x000375d9) volume_set_pane_vc_g10

0x0009,

0xfa20,	// (0x00046d3c) volume_set_pane_vc_g

0x406b,	// (0x0003b387) volume_set_pane_vc

0x4075,	// (0x0003b391) button_value_adjust_pane_cp1_vc

0x407f,	// (0x0003b39b) list_highlight_pane_cp2_vc

0x4088,	// (0x0003b3a4) list_set_pane_vc_ParamLimits

0x4088,	// (0x0003b3a4) list_set_pane_vc

0x40f8,	// (0x0003b414) main_pane_set_vc_t1_ParamLimits

0x40f8,	// (0x0003b414) main_pane_set_vc_t1

0x410d,	// (0x0003b429) main_pane_set_vc_t2_ParamLimits

0x410d,	// (0x0003b429) main_pane_set_vc_t2

0x411f,	// (0x0003b43b) main_pane_set_vc_t3_ParamLimits

0x411f,	// (0x0003b43b) main_pane_set_vc_t3

0x4133,	// (0x0003b44f) main_pane_set_vc_t4_ParamLimits

0x4133,	// (0x0003b44f) main_pane_set_vc_t4

0x0003,

0xfa35,	// (0x00046d51) main_pane_set_vc_t_ParamLimits

0xfa35,	// (0x00046d51) main_pane_set_vc_t

0x4147,	// (0x0003b463) setting_code_pane_vc_ParamLimits

0x4147,	// (0x0003b463) setting_code_pane_vc

0x4158,	// (0x0003b474) setting_slider_graphic_pane_vc

0x4158,	// (0x0003b474) setting_slider_pane_vc

0x4158,	// (0x0003b474) setting_text_pane_vc

0x4158,	// (0x0003b474) setting_volume_pane_vc

0x4162,	// (0x0003b47e) scroll_pane_cp121_vc

0xb7a2,	// (0x00042abe) set_content_pane_vc

0x416a,	// (0x0003b486) button_value_adjust_pane_g1

0x4173,	// (0x0003b48f) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x00046da4) button_value_adjust_pane_g

0x417c,	// (0x0003b498) form_field_slider_wide_pane_vc_t1_ParamLimits

0x417c,	// (0x0003b498) form_field_slider_wide_pane_vc_t1

0x418e,	// (0x0003b4aa) form_field_slider_wide_pane_vc_t2_ParamLimits

0x418e,	// (0x0003b4aa) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8d,	// (0x00046da9) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x00046da9) form_field_slider_wide_pane_vc_t

0x8505,	// (0x0003f821) input_focus_pane_cp10_vc_ParamLimits

0x8505,	// (0x0003f821) input_focus_pane_cp10_vc

0x41ba,	// (0x0003b4d6) slider_cont_pane_cp1_vc_ParamLimits

0x41ba,	// (0x0003b4d6) slider_cont_pane_cp1_vc

0x41cc,	// (0x0003b4e8) slider_form_pane_g1_cp2

0x3fda,	// (0x0003b2f6) slider_form_pane_g2_cp2

0x41f9,	// (0x0003b515) form_field_slider_pane_vc_t3

0x4207,	// (0x0003b523) form_field_slider_pane_vc_t4

0x4215,	// (0x0003b531) slider_form_pane_vc_ParamLimits

0x4215,	// (0x0003b531) slider_form_pane_vc

0x4222,	// (0x0003b53e) form_field_slider_pane_vc_t1_ParamLimits

0x4222,	// (0x0003b53e) form_field_slider_pane_vc_t1

0x418e,	// (0x0003b4aa) form_field_slider_pane_vc_t2_ParamLimits

0x418e,	// (0x0003b4aa) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x00046dbb) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x00046dbb) form_field_slider_pane_vc_t

0x8505,	// (0x0003f821) input_focus_pane_cp9_vc_ParamLimits

0x8505,	// (0x0003f821) input_focus_pane_cp9_vc

0x4238,	// (0x0003b554) slider_cont_pane_vc_ParamLimits

0x4238,	// (0x0003b554) slider_cont_pane_vc

0x424c,	// (0x0003b568) list_form_graphic_pane_cp_vc_ParamLimits

0x424c,	// (0x0003b568) list_form_graphic_pane_cp_vc

0x2504,	// (0x00039820) form_field_popup_wide_pane_vc_g1

0x4261,	// (0x0003b57d) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4261,	// (0x0003b57d) form_field_popup_wide_pane_vc_t1

0xb7c8,	// (0x00042ae4) input_focus_pane_cp8_vc_ParamLimits

0xb7c8,	// (0x00042ae4) input_focus_pane_cp8_vc

0x42a6,	// (0x0003b5c2) list_form_wide_pane_vc_ParamLimits

0x42a6,	// (0x0003b5c2) list_form_wide_pane_vc

0x42b2,	// (0x0003b5ce) list_form_graphic_pane_vc_g1

0x42ba,	// (0x0003b5d6) list_form_graphic_pane_vc_t1_ParamLimits

0x42ba,	// (0x0003b5d6) list_form_graphic_pane_vc_t1

0x8498,	// (0x0003f7b4) list_highlight_pane_cp5_vc_ParamLimits

0x8498,	// (0x0003f7b4) list_highlight_pane_cp5_vc

0x42d6,	// (0x0003b5f2) list_form_graphic_pane_vc_ParamLimits

0x42d6,	// (0x0003b5f2) list_form_graphic_pane_vc

0x2504,	// (0x00039820) form_field_popup_pane_vc_g1

0x42ec,	// (0x0003b608) form_field_popup_pane_vc_t1_ParamLimits

0x42ec,	// (0x0003b608) form_field_popup_pane_vc_t1

0xb7c8,	// (0x00042ae4) input_focus_pane_cp7_vc_ParamLimits

0xb7c8,	// (0x00042ae4) input_focus_pane_cp7_vc

0x4303,	// (0x0003b61f) list_form_pane_vc_ParamLimits

0x4303,	// (0x0003b61f) list_form_pane_vc

0x430f,	// (0x0003b62b) data_form_pane_vc_t1_ParamLimits

0x430f,	// (0x0003b62b) data_form_pane_vc_t1

0xb823,	// (0x00042b3f) input_focus_pane_vc_g1

0xb82b,	// (0x00042b47) input_focus_pane_vc_g2

0xb833,	// (0x00042b4f) input_focus_pane_vc_g3

0xb83b,	// (0x00042b57) input_focus_pane_vc_g4

0xb843,	// (0x00042b5f) input_focus_pane_vc_g5

0xb84b,	// (0x00042b67) input_focus_pane_vc_g6

0xb853,	// (0x00042b6f) input_focus_pane_vc_g7

0xb85b,	// (0x00042b77) input_focus_pane_vc_g8

0xb863,	// (0x00042b7f) input_focus_pane_vc_g9

0x8434,	// (0x0003f750) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x000469ae) input_focus_pane_vc_g

0x24f8,	// (0x00039814) data_form_pane_vc_ParamLimits

0x24f8,	// (0x00039814) data_form_pane_vc

0x2504,	// (0x00039820) form_field_data_pane_vc_g1

0x432c,	// (0x0003b648) form_field_data_pane_vc_t1_ParamLimits

0x432c,	// (0x0003b648) form_field_data_pane_vc_t1

0xb7c8,	// (0x00042ae4) input_focus_pane_vc_ParamLimits

0xb7c8,	// (0x00042ae4) input_focus_pane_vc

0x4346,	// (0x0003b662) button_value_adjust_pane_cp3_vc

0x434e,	// (0x0003b66a) button_value_adjust_pane_cp5_vc

0x4356,	// (0x0003b672) form_field_data_pane_vc_ParamLimits

0x4356,	// (0x0003b672) form_field_data_pane_vc

0x4371,	// (0x0003b68d) form_field_data_pane_vc_cp2

0x4379,	// (0x0003b695) form_field_data_wide_pane_vc_ParamLimits

0x4379,	// (0x0003b695) form_field_data_wide_pane_vc

0x4393,	// (0x0003b6af) form_field_data_wide_pane_vc_cp2

0x439b,	// (0x0003b6b7) form_field_popup_pane_vc_ParamLimits

0x439b,	// (0x0003b6b7) form_field_popup_pane_vc

0x43b6,	// (0x0003b6d2) form_field_popup_wide_pane_vc_ParamLimits

0x43b6,	// (0x0003b6d2) form_field_popup_wide_pane_vc

0x43d0,	// (0x0003b6ec) form_field_slider_pane_vc_ParamLimits

0x43d0,	// (0x0003b6ec) form_field_slider_pane_vc

0x43e3,	// (0x0003b6ff) form_field_slider_wide_pane_vc_ParamLimits

0x43e3,	// (0x0003b6ff) form_field_slider_wide_pane_vc

0xc664,	// (0x00043980) grid_touch_1_pane_ParamLimits

0xc664,	// (0x00043980) grid_touch_1_pane

0xc678,	// (0x00043994) grid_touch_2_pane_ParamLimits

0xc678,	// (0x00043994) grid_touch_2_pane

0x44ba,	// (0x0003b7d6) touch_pane_g1_ParamLimits

0x44ba,	// (0x0003b7d6) touch_pane_g1

0x441c,	// (0x0003b738) cell_app_pane_cp_wide_ParamLimits

0x441c,	// (0x0003b738) cell_app_pane_cp_wide

0x442d,	// (0x0003b749) grid_popup_fast_wide_pane_ParamLimits

0x442d,	// (0x0003b749) grid_popup_fast_wide_pane

0x4441,	// (0x0003b75d) scroll_pane_cp19_ParamLimits

0x4441,	// (0x0003b75d) scroll_pane_cp19

0x843e,	// (0x0003f75a) bg_popup_window_pane_cp20

0x4455,	// (0x0003b771) listscroll_popup_fast_wide_pane

0xd537,	// (0x00044853) grid_indicator_nsta_pane

0x445d,	// (0x0003b779) clock_nsta_pane_g1

0x4466,	// (0x0003b782) clock_nsta_pane_t1

0xc6a4,	// (0x000439c0) cell_indicator_nsta_pane_ParamLimits

0xc6a4,	// (0x000439c0) cell_indicator_nsta_pane

0x44ba,	// (0x0003b7d6) cell_indicator_nsta_pane_g1

0xc6c1,	// (0x000439dd) cell_indicator_nsta_pane_g2

0x0001,

0xfab0,	// (0x00046dcc) cell_indicator_nsta_pane_g

0x44de,	// (0x0003b7fa) clock_nsta_pane_cp

0x44e6,	// (0x0003b802) indicator_nsta_pane_cp

0x44ef,	// (0x0003b80b) nsta_clock_indic_pane_g1

0x84d4,	// (0x0003f7f0) grid_indicator_pane

0xbc3d,	// (0x00042f59) scroll_pane_cp29

0xf0a9,	// (0x000463c5) indicator_nsta_pane_cp2_ParamLimits

0xf0a9,	// (0x000463c5) indicator_nsta_pane_cp2

0x8498,	// (0x0003f7b4) main_apps_wheel_pane

0x26eb,	// (0x00039a07) form_midp_field_text_pane_ParamLimits

0x283a,	// (0x00039b56) scroll_bar_cp050_ParamLimits

0x4558,	// (0x0003b874) cell_indicator_pane_ParamLimits

0x4558,	// (0x0003b874) cell_indicator_pane

0x4570,	// (0x0003b88c) cell_indicator_pane_g1

0xc6d7,	// (0x000439f3) grid_wheel_folder_pane_ParamLimits

0xc6d7,	// (0x000439f3) grid_wheel_folder_pane

0xc6e5,	// (0x00043a01) list_wheel_apps_pane_ParamLimits

0xc6e5,	// (0x00043a01) list_wheel_apps_pane

0xc6f3,	// (0x00043a0f) main_apps_wheel_pane_g1_ParamLimits

0xc6f3,	// (0x00043a0f) main_apps_wheel_pane_g1

0xc703,	// (0x00043a1f) main_apps_wheel_pane_g2_ParamLimits

0xc703,	// (0x00043a1f) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x00046de8) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x00046de8) main_apps_wheel_pane_g

0xc713,	// (0x00043a2f) main_apps_wheel_pane_t1_ParamLimits

0xc713,	// (0x00043a2f) main_apps_wheel_pane_t1

0xc72b,	// (0x00043a47) list_wheel_apps_pane_g1

0xc733,	// (0x00043a4f) list_wheel_apps_pane_g2

0xc73b,	// (0x00043a57) list_wheel_apps_pane_g3

0xc743,	// (0x00043a5f) list_wheel_apps_pane_g4

0xc74b,	// (0x00043a67) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x00046ded) list_wheel_apps_pane_g

0xf30b,	// (0x00046627) navi_icon_text_pane

0xa7ff,	// (0x00041b1b) aid_fill_nsta

0xc768,	// (0x00043a84) navi_icon_text_pane_g1

0xc774,	// (0x00043a90) navi_icon_text_pane_t1

0x9dc5,	// (0x000410e1) list_set_graphic_pane_t1_ParamLimits

0x9dc5,	// (0x000410e1) list_set_graphic_pane_t1

0x2f8b,	// (0x0003a2a7) popup_midp_note_alarm_window_t6_ParamLimits

0x2f8b,	// (0x0003a2a7) popup_midp_note_alarm_window_t6

0x2f9d,	// (0x0003a2b9) popup_midp_note_alarm_window_t7_ParamLimits

0x2f9d,	// (0x0003a2b9) popup_midp_note_alarm_window_t7

0x2faf,	// (0x0003a2cb) popup_midp_note_alarm_window_t8_ParamLimits

0x2faf,	// (0x0003a2cb) popup_midp_note_alarm_window_t8

0x2fc1,	// (0x0003a2dd) popup_midp_note_alarm_window_t9_ParamLimits

0x2fc1,	// (0x0003a2dd) popup_midp_note_alarm_window_t9

0x2fd3,	// (0x0003a2ef) popup_midp_note_alarm_window_t10_ParamLimits

0x2fd3,	// (0x0003a2ef) popup_midp_note_alarm_window_t10

0x2fe5,	// (0x0003a301) popup_midp_note_alarm_window_t11_ParamLimits

0x2fe5,	// (0x0003a301) popup_midp_note_alarm_window_t11

0x2ff7,	// (0x0003a313) scroll_pane_cp17_ParamLimits

0x2ff7,	// (0x0003a313) scroll_pane_cp17

0x026c,	// (0x00037588) volume_small_pane_cp_g1

0x062e,	// (0x0003794a) volume_small_pane_cp_g2

0x0637,	// (0x00037953) volume_small_pane_cp_g3

0x0640,	// (0x0003795c) volume_small_pane_cp_g4

0x0649,	// (0x00037965) volume_small_pane_cp_g5

0x0652,	// (0x0003796e) volume_small_pane_cp_g6

0x065b,	// (0x00037977) volume_small_pane_cp_g7

0x0664,	// (0x00037980) volume_small_pane_cp_g8

0x066d,	// (0x00037989) volume_small_pane_cp_g9

0x0676,	// (0x00037992) volume_small_pane_cp_g10

0xf493,	// (0x000467af) midp_ticker_pane_g1_ParamLimits

0xf49f,	// (0x000467bb) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x00046a7a) midp_ticker_pane_g_ParamLimits

0x9ef8,	// (0x00041214) midp_ticker_pane_t1_ParamLimits

0xa823,	// (0x00041b3f) aid_fill_nsta_2

0x2826,	// (0x00039b42) list_form2_midp_pane

0x398f,	// (0x0003acab) midp_editing_number_pane_ParamLimits

0x399e,	// (0x0003acba) midp_ticker_pane_ParamLimits

0x4663,	// (0x0003b97f) form2_midp_field_pane

0x4687,	// (0x0003b9a3) scroll_pane_cp51

0x46a7,	// (0x0003b9c3) form2_midp_button_pane_ParamLimits

0x46a7,	// (0x0003b9c3) form2_midp_button_pane

0x46b9,	// (0x0003b9d5) form2_midp_content_pane_ParamLimits

0x46b9,	// (0x0003b9d5) form2_midp_content_pane

0x46d3,	// (0x0003b9ef) form2_midp_field_choice_group_pane

0x46db,	// (0x0003b9f7) form2_midp_field_pane_g1

0x46e3,	// (0x0003b9ff) form2_midp_field_pane_g2

0x46eb,	// (0x0003ba07) form2_midp_field_pane_g3

0x46f3,	// (0x0003ba0f) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x00046e12) form2_midp_field_pane_g

0x46fb,	// (0x0003ba17) form2_midp_gauge_slider_pane

0x4703,	// (0x0003ba1f) form2_midp_gauge_wait_pane

0x470b,	// (0x0003ba27) form2_midp_image_pane_ParamLimits

0x470b,	// (0x0003ba27) form2_midp_image_pane

0x4726,	// (0x0003ba42) form2_midp_label_pane_ParamLimits

0x4726,	// (0x0003ba42) form2_midp_label_pane

0xc7a2,	// (0x00043abe) form2_midp_label_pane_cp_ParamLimits

0xc7a2,	// (0x00043abe) form2_midp_label_pane_cp

0x4766,	// (0x0003ba82) form2_midp_string_pane_ParamLimits

0x4766,	// (0x0003ba82) form2_midp_string_pane

0xd545,	// (0x00044861) form2_midp_text_pane_ParamLimits

0xd545,	// (0x00044861) form2_midp_text_pane

0x4778,	// (0x0003ba94) form2_midp_time_pane

0x4788,	// (0x0003baa4) input_focus_pane_cp51_ParamLimits

0x4788,	// (0x0003baa4) input_focus_pane_cp51

0x47a0,	// (0x0003babc) form2_midp_label_pane_t1_ParamLimits

0x47a0,	// (0x0003babc) form2_midp_label_pane_t1

0xd566,	// (0x00044882) form2_mdip_text_pane_t1_ParamLimits

0xd566,	// (0x00044882) form2_mdip_text_pane_t1

0xd58a,	// (0x000448a6) form2_midp_time_pane_t1

0x47ee,	// (0x0003bb0a) form2_midp_gauge_slider_pane_t1

0xc7c3,	// (0x00043adf) form2_midp_gauge_slider_pane_t2

0xc7d5,	// (0x00043af1) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x00046e1b) form2_midp_gauge_slider_pane_t

0x4824,	// (0x0003bb40) form2_midp_slider_pane

0x4830,	// (0x0003bb4c) form2_midp_gauge_wait_pane_t1

0x483e,	// (0x0003bb5a) form2_midp_wait_pane_ParamLimits

0x483e,	// (0x0003bb5a) form2_midp_wait_pane

0x254b,	// (0x00039867) list_single_2graphic_pane_cp4_ParamLimits

0x254b,	// (0x00039867) list_single_2graphic_pane_cp4

0x4869,	// (0x0003bb85) list_single_midp_graphic_pane_cp_ParamLimits

0x4869,	// (0x0003bb85) list_single_midp_graphic_pane_cp

0x843e,	// (0x0003f75a) list_highlight_pane_cp20

0x488d,	// (0x0003bba9) list_single_2graphic_pane_g1_cp4

0x3e24,	// (0x0003b140) list_single_2graphic_pane_g2_cp4

0x4895,	// (0x0003bbb1) list_single_2graphic_pane_t1_cp4

0x8498,	// (0x0003f7b4) list_highlight_pane_cp21

0x48a4,	// (0x0003bbc0) list_single_midp_graphic_pane_g4_cp

0x48b3,	// (0x0003bbcf) list_single_midp_graphic_pane_t1_cp

0xc7e7,	// (0x00043b03) form2_mdip_string_pane_t1_ParamLimits

0xc7e7,	// (0x00043b03) form2_mdip_string_pane_t1

0x843e,	// (0x0003f75a) bg_wml_button_pane_cp2

0x8434,	// (0x0003f750) form2_midp_image_pane_g1

0xcea8,	// (0x000441c4) list_double_large_graphic_pane_g5_ParamLimits

0xcea8,	// (0x000441c4) list_double_large_graphic_pane_g5

0x18dd,	// (0x00038bf9) midp_form_pane_ParamLimits

0x8498,	// (0x0003f7b4) main_apps_wheel_pane_ParamLimits

0xa517,	// (0x00041833) popup_preview_window_ParamLimits

0xa517,	// (0x00041833) popup_preview_window

0x1ea5,	// (0x000391c1) popup_touch_info_window_ParamLimits

0x1ea5,	// (0x000391c1) popup_touch_info_window

0x1ec7,	// (0x000391e3) popup_touch_menu_window_ParamLimits

0x1ec7,	// (0x000391e3) popup_touch_menu_window

0x842a,	// (0x0003f746) bg_popup_sub_pane_cp6

0x496d,	// (0x0003bc89) list_touch_menu_pane

0x4975,	// (0x0003bc91) list_single_touch_menu_pane_ParamLimits

0x4975,	// (0x0003bc91) list_single_touch_menu_pane

0x498d,	// (0x0003bca9) list_single_touch_menu_pane_t1

0x8498,	// (0x0003f7b4) bg_popup_sub_pane_cp7_ParamLimits

0x8498,	// (0x0003f7b4) bg_popup_sub_pane_cp7

0x499b,	// (0x0003bcb7) heading_sub_pane

0x49a3,	// (0x0003bcbf) list_touch_info_pane_ParamLimits

0x49a3,	// (0x0003bcbf) list_touch_info_pane

0x49b2,	// (0x0003bcce) list_single_touch_info_pane_ParamLimits

0x49b2,	// (0x0003bcce) list_single_touch_info_pane

0x49c4,	// (0x0003bce0) list_single_touch_info_pane_t1

0x49d2,	// (0x0003bcee) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x00046e29) list_single_touch_info_pane_t

0xf467,	// (0x00046783) bg_popup_heading_pane_cp

0x49e0,	// (0x0003bcfc) heading_sub_pane_t1

0x2492,	// (0x000397ae) bg_popup_preview_window_pane_cp_ParamLimits

0x2492,	// (0x000397ae) bg_popup_preview_window_pane_cp

0x499b,	// (0x0003bcb7) heading_preview_pane

0x49a3,	// (0x0003bcbf) list_preview_pane_ParamLimits

0x49a3,	// (0x0003bcbf) list_preview_pane

0x49ee,	// (0x0003bd0a) popup_preview_window_g1

0x49b2,	// (0x0003bcce) list_single_preview_pane_ParamLimits

0x49b2,	// (0x0003bcce) list_single_preview_pane

0x49f6,	// (0x0003bd12) list_single_preview_pane_g1

0x49fe,	// (0x0003bd1a) list_single_preview_pane_t1

0x49c4,	// (0x0003bce0) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x00046e2e) list_single_preview_pane_t

0x4a0c,	// (0x0003bd28) bg_popup_heading_pane_cp2_ParamLimits

0x4a0c,	// (0x0003bd28) bg_popup_heading_pane_cp2

0x4a22,	// (0x0003bd3e) heading_preview_pane_g1

0x4a2a,	// (0x0003bd46) heading_preview_pane_t1_ParamLimits

0x4a2a,	// (0x0003bd46) heading_preview_pane_t1

0x84eb,	// (0x0003f807) soft_indicator_pane_t1_ParamLimits

0xb73b,	// (0x00042a57) scroll_pane_ParamLimits

0xbb39,	// (0x00042e55) scroll_sc2_left_pane

0xbb42,	// (0x00042e5e) scroll_sc2_right_pane

0xbb61,	// (0x00042e7d) scroll_bg_pane_g1_ParamLimits

0xbb76,	// (0x00042e92) scroll_bg_pane_g2_ParamLimits

0xbb8e,	// (0x00042eaa) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x00046a05) scroll_bg_pane_g_ParamLimits

0xbb61,	// (0x00042e7d) scroll_handle_pane_g1_ParamLimits

0xbbb0,	// (0x00042ecc) scroll_handle_pane_g2_ParamLimits

0xbb8e,	// (0x00042eaa) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x00046a0c) scroll_handle_pane_g_ParamLimits

0x1905,	// (0x00038c21) popup_choice_list_window_ParamLimits

0x1905,	// (0x00038c21) popup_choice_list_window

0x2368,	// (0x00039684) choice_list_pane

0x23ea,	// (0x00039706) cell_toolbar_pane_t1

0x2412,	// (0x0003972e) toolbar_button_pane_ParamLimits

0x34c1,	// (0x0003a7dd) ai_gene_pane_1_t2_ParamLimits

0x34c1,	// (0x0003a7dd) ai_gene_pane_1_t2

0x0001,

0xf913,	// (0x00046c2f) ai_gene_pane_1_t_ParamLimits

0xf913,	// (0x00046c2f) ai_gene_pane_1_t

0x4a47,	// (0x0003bd63) scroll_sc2_left_pane_g1

0x4a47,	// (0x0003bd63) scroll_sc2_right_pane_g1

0x18dd,	// (0x00038bf9) bg_popup_sub_pane_cp10

0x4a51,	// (0x0003bd6d) list_choice_list_pane

0x4a6a,	// (0x0003bd86) list_single_choice_list_pane_ParamLimits

0x4a6a,	// (0x0003bd86) list_single_choice_list_pane

0x4a82,	// (0x0003bd9e) list_single_choice_list_pane_g1

0xb919,	// (0x00042c35) list_single_choice_list_pane_t1_ParamLimits

0xb919,	// (0x00042c35) list_single_choice_list_pane_t1

0x4a8a,	// (0x0003bda6) choice_list_pane_g1

0x4a92,	// (0x0003bdae) choice_list_pane_t1

0x842a,	// (0x0003f746) input_focus_pane_cp11

0xba97,	// (0x00042db3) title_pane_stacon_g2_ParamLimits

0xba97,	// (0x00042db3) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x000469eb) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x000469eb) title_pane_stacon_g

0xf467,	// (0x00046783) cursor_press_pane

0xa194,	// (0x000414b0) popup_fep_hwr_window_ParamLimits

0xa194,	// (0x000414b0) popup_fep_hwr_window

0x1a49,	// (0x00038d65) popup_fep_vkb_window_ParamLimits

0x1a49,	// (0x00038d65) popup_fep_vkb_window

0x4aa0,	// (0x0003bdbc) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x00046e57) fep_vkb_side_pane_g_ParamLimits

0x06b8,	// (0x000379d4) fep_hwr_candidate_pane_ParamLimits

0x06b8,	// (0x000379d4) fep_hwr_candidate_pane

0x06e2,	// (0x000379fe) fep_hwr_side_pane_ParamLimits

0x06e2,	// (0x000379fe) fep_hwr_side_pane

0x0704,	// (0x00037a20) fep_hwr_top_pane_ParamLimits

0x0704,	// (0x00037a20) fep_hwr_top_pane

0x071c,	// (0x00037a38) fep_hwr_write_pane_ParamLimits

0x071c,	// (0x00037a38) fep_hwr_write_pane

0xfb3b,	// (0x00046e57) fep_vkb_side_pane_g

0x4aa8,	// (0x0003bdc4) fep_hwr_top_pane_g1

0x4aba,	// (0x0003bdd6) fep_hwr_top_pane_g2

0x0756,	// (0x00037a72) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x00046e33) fep_hwr_top_pane_g

0x076b,	// (0x00037a87) fep_hwr_top_text_pane

0xcfc0,	// (0x000442dc) fep_hwr_top_text_pane_g1

0x4af0,	// (0x0003be0c) fep_hwr_top_text_pane_t1

0x0875,	// (0x00037b91) fep_hwr_candidate_pane_g1

0x4d3b,	// (0x0003c057) fep_vkb_keypad_pane_g3_ParamLimits

0x4d3b,	// (0x0003c057) fep_vkb_keypad_pane_g3

0x4d67,	// (0x0003c083) fep_vkb_keypad_pane_g4_ParamLimits

0x4d67,	// (0x0003c083) fep_vkb_keypad_pane_g4

0x4dde,	// (0x0003c0fa) fep_vkb_bottom_pane_g2_ParamLimits

0x4dde,	// (0x0003c0fa) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x00046e5e) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x00046e5e) fep_vkb_bottom_pane_g

0x4a47,	// (0x0003bd63) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x00046e68) cell_vkb_side_pane_g

0x4e69,	// (0x0003c185) cell_vkb_side_pane_t1

0x4e77,	// (0x0003c193) cell_vkb_side_pane_t1_copy1

0x4a47,	// (0x0003bd63) bg_fep_vkb_candidate_pane_g2

0x4fbb,	// (0x0003c2d7) cell_vkb_candidate_pane_ParamLimits

0x4afe,	// (0x0003be1a) aid_size_cell_vkb_ParamLimits

0x4afe,	// (0x0003be1a) aid_size_cell_vkb

0x4fbb,	// (0x0003c2d7) cell_vkb_candidate_pane

0x089c,	// (0x00037bb8) bg_popup_fep_shadow_pane_g1

0xc89c,	// (0x00043bb8) fep_vkb_bottom_pane_ParamLimits

0xc89c,	// (0x00043bb8) fep_vkb_bottom_pane

0x4bcd,	// (0x0003bee9) fep_vkb_candidate_pane_ParamLimits

0x4bcd,	// (0x0003bee9) fep_vkb_candidate_pane

0xc8c8,	// (0x00043be4) fep_vkb_keypad_pane_ParamLimits

0xc8c8,	// (0x00043be4) fep_vkb_keypad_pane

0xc8ef,	// (0x00043c0b) fep_vkb_side_pane_ParamLimits

0xc8ef,	// (0x00043c0b) fep_vkb_side_pane

0xc92b,	// (0x00043c47) fep_vkb_top_pane_ParamLimits

0xc92b,	// (0x00043c47) fep_vkb_top_pane

0x4c94,	// (0x0003bfb0) fep_vkb_top_pane_g1_ParamLimits

0x4c94,	// (0x0003bfb0) fep_vkb_top_pane_g1

0x4ca3,	// (0x0003bfbf) fep_vkb_top_pane_g2_ParamLimits

0x4ca3,	// (0x0003bfbf) fep_vkb_top_pane_g2

0x4cb2,	// (0x0003bfce) fep_vkb_top_pane_g3_ParamLimits

0x4cb2,	// (0x0003bfce) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x00046e4e) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x00046e4e) fep_vkb_top_pane_g

0x4cd0,	// (0x0003bfec) fep_vkb_top_text_pane_ParamLimits

0x4cd0,	// (0x0003bfec) fep_vkb_top_text_pane

0xc967,	// (0x00043c83) fep_vkb_side_pane_g1_ParamLimits

0xc967,	// (0x00043c83) fep_vkb_side_pane_g1

0x4d2a,	// (0x0003c046) grid_vkb_side_pane_ParamLimits

0x4d2a,	// (0x0003c046) grid_vkb_side_pane

0x08a4,	// (0x00037bc0) bg_popup_fep_shadow_pane_g2

0x08ad,	// (0x00037bc9) bg_popup_fep_shadow_pane_g3

0x08b5,	// (0x00037bd1) bg_popup_fep_shadow_pane_g4

0x08be,	// (0x00037bda) bg_popup_fep_shadow_pane_g5

0x08c8,	// (0x00037be4) bg_popup_fep_shadow_pane_g6

0x08d0,	// (0x00037bec) bg_popup_fep_shadow_pane_g7

0xb83b,	// (0x00042b57) bg_popup_fep_shadow_pane_g8

0x4d89,	// (0x0003c0a5) grid_vkb_keypad_number_pane_ParamLimits

0x4d89,	// (0x0003c0a5) grid_vkb_keypad_number_pane

0x4d9d,	// (0x0003c0b9) grid_vkb_keypad_pane_ParamLimits

0x4d9d,	// (0x0003c0b9) grid_vkb_keypad_pane

0x4dc3,	// (0x0003c0df) fep_vkb_bottom_pane_g1_ParamLimits

0x4dc3,	// (0x0003c0df) fep_vkb_bottom_pane_g1

0x4dec,	// (0x0003c108) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4dec,	// (0x0003c108) grid_vkb_keypad_bottom_left_pane

0x4e01,	// (0x0003c11d) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4e01,	// (0x0003c11d) grid_vkb_keypad_bottom_right_pane

0x4e16,	// (0x0003c132) fep_vkb_top_text_pane_g1

0xc9ae,	// (0x00043cca) fep_vkb_top_text_pane_t1

0xc9c0,	// (0x00043cdc) cell_vkb_side_pane_ParamLimits

0xc9c0,	// (0x00043cdc) cell_vkb_side_pane

0x4a47,	// (0x0003bd63) cell_vkb_side_pane_g1

0x4e85,	// (0x0003c1a1) cell_vkb_keypad_pane_ParamLimits

0x4e85,	// (0x0003c1a1) cell_vkb_keypad_pane

0x4f12,	// (0x0003c22e) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x00046e7b) bg_popup_fep_shadow_pane_g

0x08e2,	// (0x00037bfe) cell_hwr_side_pane_g1

0x08e2,	// (0x00037bfe) cell_hwr_side_pane_g2

0x4f1c,	// (0x0003c238) cell_vkb_keypad_pane_t1

0xc9d6,	// (0x00043cf2) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc9d6,	// (0x00043cf2) cell_vkb_keypad_bottom_left_pane

0xc9eb,	// (0x00043d07) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc9eb,	// (0x00043d07) cell_vkb_keypad_bottom_right_pane

0x4a47,	// (0x0003bd63) cell_vkb_keypad_bottom_left_pane_g1

0x4a47,	// (0x0003bd63) cell_vkb_keypad_bottom_right_pane_g1

0x4f80,	// (0x0003c29c) cell_vkb_keypad_number_pane_ParamLimits

0x4f80,	// (0x0003c29c) cell_vkb_keypad_number_pane

0x4f9f,	// (0x0003c2bb) cell_vkb_keypad_number_pane_g1

0x4fa9,	// (0x0003c2c5) cell_vkb_keypad_number_pane_g2

0x4fb2,	// (0x0003c2ce) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x00046e6d) cell_vkb_keypad_number_pane_g

0x4f1c,	// (0x0003c238) cell_vkb_keypad_number_pane_t1

0x4fdc,	// (0x0003c2f8) fep_vkb_candidate_pane_g1

0x0001,

0xfb72,	// (0x00046e8e) cell_hwr_side_pane_g

0x4ff5,	// (0x0003c311) cell_hwr_side_pane_t1

0x08ec,	// (0x00037c08) cell_hwr_side_pane_t1_copy1

0x08fa,	// (0x00037c16) cell_hwr_candidate_pane_g1

0x0929,	// (0x00037c45) cell_hwr_candidate_pane_t1

0x4a47,	// (0x0003bd63) cell_vkb_candidate_pane_g2

0x5039,	// (0x0003c355) cell_vkb_candidate_pane_t1

0x067f,	// (0x0003799b) bg_popup_fep_shadow_pane_ParamLimits

0x067f,	// (0x0003799b) bg_popup_fep_shadow_pane

0x0736,	// (0x00037a52) bg_fep_hwr_top_pane_g4

0x4acc,	// (0x0003bde8) bg_hwr_side_pane_g1_ParamLimits

0x4acc,	// (0x0003bde8) bg_hwr_side_pane_g1

0xaaed,	// (0x00041e09) cell_hwr_side_pane_ParamLimits

0xaaed,	// (0x00041e09) cell_hwr_side_pane

0x07e6,	// (0x00037b02) fep_hwr_write_pane_g1_ParamLimits

0x07e6,	// (0x00037b02) fep_hwr_write_pane_g1

0x07f3,	// (0x00037b0f) fep_hwr_write_pane_g2_ParamLimits

0x07f3,	// (0x00037b0f) fep_hwr_write_pane_g2

0x0800,	// (0x00037b1c) fep_hwr_write_pane_g3_ParamLimits

0x0800,	// (0x00037b1c) fep_hwr_write_pane_g3

0xab0d,	// (0x00041e29) fep_hwr_write_pane_g4_ParamLimits

0xab0d,	// (0x00041e29) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x00046e3a) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x00046e3a) fep_hwr_write_pane_g

0x0736,	// (0x00037a52) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0736,	// (0x00037a52) bg_fep_hwr_candidate_pane_g2

0x0823,	// (0x00037b3f) cell_hwr_candidate_pane_ParamLimits

0x0823,	// (0x00037b3f) cell_hwr_candidate_pane

0x0875,	// (0x00037b91) fep_hwr_candidate_pane_g1_ParamLimits

0x4b2c,	// (0x0003be48) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4b2c,	// (0x0003be48) bg_popup_fep_shadow_pane_cp2

0x4cc2,	// (0x0003bfde) fep_vkb_top_pane_g4_ParamLimits

0x4cc2,	// (0x0003bfde) fep_vkb_top_pane_g4

0x4d08,	// (0x0003c024) fep_vkb_side_pane_g2_ParamLimits

0x4d08,	// (0x0003c024) fep_vkb_side_pane_g2

0x984b,	// (0x00040b67) list_setting_pane_t4_ParamLimits

0x984b,	// (0x00040b67) list_setting_pane_t4

0x98df,	// (0x00040bfb) list_setting_number_pane_t5_ParamLimits

0x98df,	// (0x00040bfb) list_setting_number_pane_t5

0x9c34,	// (0x00040f50) list_double_heading_pane_cp2_ParamLimits

0x9c34,	// (0x00040f50) list_double_heading_pane_cp2

0x5047,	// (0x0003c363) list_double_heading_pane_g1_cp2_ParamLimits

0x5047,	// (0x0003c363) list_double_heading_pane_g1_cp2

0x5053,	// (0x0003c36f) list_double_heading_pane_g2_cp2_ParamLimits

0x5053,	// (0x0003c36f) list_double_heading_pane_g2_cp2

0x5067,	// (0x0003c383) list_double_heading_pane_t1_cp2_ParamLimits

0x5067,	// (0x0003c383) list_double_heading_pane_t1_cp2

0x507d,	// (0x0003c399) list_double_heading_pane_t2_cp2_ParamLimits

0x507d,	// (0x0003c399) list_double_heading_pane_t2_cp2

0x8422,	// (0x0003f73e) aid_value_unit2

0xeb8b,	// (0x00045ea7) popup_preview_fixed_window

0xb2e6,	// (0x00042602) bg_popup_preview_window_pane_cp02

0x508f,	// (0x0003c3ab) list_preview_fixed_pane

0x50d5,	// (0x0003c3f1) list_empty_pane_fp_ParamLimits

0x50d5,	// (0x0003c3f1) list_empty_pane_fp

0x50d5,	// (0x0003c3f1) list_single_cale_day_pane_fp_ParamLimits

0x50d5,	// (0x0003c3f1) list_single_cale_day_pane_fp

0x50d5,	// (0x0003c3f1) list_single_graphic_heading_pane_fp_ParamLimits

0x50d5,	// (0x0003c3f1) list_single_graphic_heading_pane_fp

0x50d5,	// (0x0003c3f1) list_single_graphic_pane_fp_ParamLimits

0x50d5,	// (0x0003c3f1) list_single_graphic_pane_fp

0x50d5,	// (0x0003c3f1) list_single_heading_pane_fp_ParamLimits

0x50d5,	// (0x0003c3f1) list_single_heading_pane_fp

0x50d5,	// (0x0003c3f1) list_single_pane_fp_ParamLimits

0x50d5,	// (0x0003c3f1) list_single_pane_fp

0x50ee,	// (0x0003c40a) list_single_pane_fp_g1_ParamLimits

0x50ee,	// (0x0003c40a) list_single_pane_fp_g1

0xd59d,	// (0x000448b9) list_single_pane_fp_g2_ParamLimits

0xd59d,	// (0x000448b9) list_single_pane_fp_g2

0xd5a9,	// (0x000448c5) list_single_pane_fp_g3_ParamLimits

0xd5a9,	// (0x000448c5) list_single_pane_fp_g3

0x50fa,	// (0x0003c416) list_single_pane_fp_g4_ParamLimits

0x50fa,	// (0x0003c416) list_single_pane_fp_g4

0x0003,

0xfb85,	// (0x00046ea1) list_single_pane_fp_g_ParamLimits

0xfb85,	// (0x00046ea1) list_single_pane_fp_g

0xd5bd,	// (0x000448d9) list_single_pane_fp_t1_ParamLimits

0xd5bd,	// (0x000448d9) list_single_pane_fp_t1

0xd5d4,	// (0x000448f0) list_single_graphic_pane_fp_g1_ParamLimits

0xd5d4,	// (0x000448f0) list_single_graphic_pane_fp_g1

0x50ee,	// (0x0003c40a) list_single_graphic_pane_fp_g2_ParamLimits

0x50ee,	// (0x0003c40a) list_single_graphic_pane_fp_g2

0xd59d,	// (0x000448b9) list_single_graphic_pane_fp_g3_ParamLimits

0xd59d,	// (0x000448b9) list_single_graphic_pane_fp_g3

0xd5a9,	// (0x000448c5) list_single_graphic_pane_fp_g4_ParamLimits

0xd5a9,	// (0x000448c5) list_single_graphic_pane_fp_g4

0x50fa,	// (0x0003c416) list_single_graphic_pane_fp_g5_ParamLimits

0x50fa,	// (0x0003c416) list_single_graphic_pane_fp_g5

0x0004,

0xfb8e,	// (0x00046eaa) list_single_graphic_pane_fp_g_ParamLimits

0xfb8e,	// (0x00046eaa) list_single_graphic_pane_fp_g

0xd5e0,	// (0x000448fc) list_single_graphic_pane_fp_t1_ParamLimits

0xd5e0,	// (0x000448fc) list_single_graphic_pane_fp_t1

0xd5d4,	// (0x000448f0) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xd5d4,	// (0x000448f0) list_single_graphic_heading_pane_fp_g1

0x50ee,	// (0x0003c40a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x50ee,	// (0x0003c40a) list_single_graphic_heading_pane_fp_g2

0xd59d,	// (0x000448b9) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd59d,	// (0x000448b9) list_single_graphic_heading_pane_fp_g3

0xd5a9,	// (0x000448c5) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xd5a9,	// (0x000448c5) list_single_graphic_heading_pane_fp_g4

0x50fa,	// (0x0003c416) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x50fa,	// (0x0003c416) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x00046eaa) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x00046eaa) list_single_graphic_heading_pane_fp_g

0xd5f6,	// (0x00044912) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xd5f6,	// (0x00044912) list_single_graphic_heading_pane_fp_t1

0xd60c,	// (0x00044928) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xd60c,	// (0x00044928) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb99,	// (0x00046eb5) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb99,	// (0x00046eb5) list_single_graphic_heading_pane_fp_t

0xd61e,	// (0x0004493a) list_single_cale_day_pane_fp_g1_ParamLimits

0xd61e,	// (0x0004493a) list_single_cale_day_pane_fp_g1

0x5106,	// (0x0003c422) list_single_cale_day_pane_fp_g2_ParamLimits

0x5106,	// (0x0003c422) list_single_cale_day_pane_fp_g2

0xd656,	// (0x00044972) list_single_cale_day_pane_fp_g3_ParamLimits

0xd656,	// (0x00044972) list_single_cale_day_pane_fp_g3

0xd67e,	// (0x0004499a) list_single_cale_day_pane_fp_g4_ParamLimits

0xd67e,	// (0x0004499a) list_single_cale_day_pane_fp_g4

0xec94,	// (0x00045fb0) list_single_cale_day_pane_fp_g5_ParamLimits

0xec94,	// (0x00045fb0) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9e,	// (0x00046eba) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9e,	// (0x00046eba) list_single_cale_day_pane_fp_g

0xecb8,	// (0x00045fd4) list_single_cale_day_pane_fp_t1_ParamLimits

0xecb8,	// (0x00045fd4) list_single_cale_day_pane_fp_t1

0xecde,	// (0x00045ffa) list_single_cale_day_pane_fp_t2_ParamLimits

0xecde,	// (0x00045ffa) list_single_cale_day_pane_fp_t2

0xecf7,	// (0x00046013) list_single_cale_day_pane_fp_t3_ParamLimits

0xecf7,	// (0x00046013) list_single_cale_day_pane_fp_t3

0x0002,

0xfba9,	// (0x00046ec5) list_single_cale_day_pane_fp_t_ParamLimits

0xfba9,	// (0x00046ec5) list_single_cale_day_pane_fp_t

0x50ee,	// (0x0003c40a) list_empty_pane_fp_g1_ParamLimits

0x50ee,	// (0x0003c40a) list_empty_pane_fp_g1

0xed10,	// (0x0004602c) list_empty_pane_fp_t1

0xed1e,	// (0x0004603a) list_empty_pane_fp_t2

0x0001,

0xfbb0,	// (0x00046ecc) list_empty_pane_fp_t

0x50ee,	// (0x0003c40a) list_single_heading_pane_fp_g1_ParamLimits

0x50ee,	// (0x0003c40a) list_single_heading_pane_fp_g1

0xd59d,	// (0x000448b9) list_single_heading_pane_fp_g2_ParamLimits

0xd59d,	// (0x000448b9) list_single_heading_pane_fp_g2

0xd5a9,	// (0x000448c5) list_single_heading_pane_fp_g3_ParamLimits

0xd5a9,	// (0x000448c5) list_single_heading_pane_fp_g3

0x0002,

0xfbb5,	// (0x00046ed1) list_single_heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x00046ed1) list_single_heading_pane_fp_g

0xed2c,	// (0x00046048) list_single_heading_pane_fp_t1_ParamLimits

0xed2c,	// (0x00046048) list_single_heading_pane_fp_t1

0xed3e,	// (0x0004605a) list_single_heading_pane_fp_t2_ParamLimits

0xed3e,	// (0x0004605a) list_single_heading_pane_fp_t2

0x0001,

0xfbbc,	// (0x00046ed8) list_single_heading_pane_fp_t_ParamLimits

0xfbbc,	// (0x00046ed8) list_single_heading_pane_fp_t

0xb92e,	// (0x00042c4a) aid_size_cell_fast

0xb2c9,	// (0x000425e5) soft_indicator_pane_cp1_t1

0xb96b,	// (0x00042c87) cell_app_pane_cp2_ParamLimits

0xb96b,	// (0x00042c87) cell_app_pane_cp2

0x06a1,	// (0x000379bd) fep_hwr_candidate_drop_down_list_pane

0x088f,	// (0x00037bab) fep_hwr_candidate_pane_g3_ParamLimits

0x088f,	// (0x00037bab) fep_hwr_candidate_pane_g3

0xc87d,	// (0x00043b99) fep_hwr_candidate_pane_g4_ParamLimits

0xc87d,	// (0x00043b99) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x00046e47) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x00046e47) fep_hwr_candidate_pane_g

0x4bbc,	// (0x0003bed8) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4bbc,	// (0x0003bed8) fep_vkb_candidate_drop_down_list_pane

0x4fe4,	// (0x0003c300) fep_vkb_candidate_pane_g3

0x4fec,	// (0x0003c308) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x00046e74) fep_vkb_candidate_pane_g

0x08fa,	// (0x00037c16) cell_hwr_candidate_pane_g1_ParamLimits

0x0908,	// (0x00037c24) cell_hwr_candidate_pane_g3_ParamLimits

0x0908,	// (0x00037c24) cell_hwr_candidate_pane_g3

0x6a3f,	// (0x0003dd5b) cell_hwr_candidate_pane_g4_ParamLimits

0x6a3f,	// (0x0003dd5b) cell_hwr_candidate_pane_g4

0x0002,

0xfb77,	// (0x00046e93) cell_hwr_candidate_pane_g_ParamLimits

0xfb77,	// (0x00046e93) cell_hwr_candidate_pane_g

0x5003,	// (0x0003c31f) cell_vkb_candidate_pane_g3_ParamLimits

0x5003,	// (0x0003c31f) cell_vkb_candidate_pane_g3

0x501e,	// (0x0003c33a) cell_vkb_candidate_pane_g4_ParamLimits

0x501e,	// (0x0003c33a) cell_vkb_candidate_pane_g4

0x5112,	// (0x0003c42e) cell_app_pane_cp2_g1_ParamLimits

0x5112,	// (0x0003c42e) cell_app_pane_cp2_g1

0x5130,	// (0x0003c44c) cell_app_pane_cp2_g2_ParamLimits

0x5130,	// (0x0003c44c) cell_app_pane_cp2_g2

0x0001,

0xfbc1,	// (0x00046edd) cell_app_pane_cp2_g_ParamLimits

0xfbc1,	// (0x00046edd) cell_app_pane_cp2_g

0x513c,	// (0x0003c458) cell_app_pane_cp2_t1_ParamLimits

0x513c,	// (0x0003c458) cell_app_pane_cp2_t1

0xb7c8,	// (0x00042ae4) grid_highlight_pane_cp1_ParamLimits

0xb7c8,	// (0x00042ae4) grid_highlight_pane_cp1

0x0947,	// (0x00037c63) cell_hwr_candidate_pane_cp1_ParamLimits

0x0947,	// (0x00037c63) cell_hwr_candidate_pane_cp1

0x08fa,	// (0x00037c16) fep_hwr_candidate_drop_down_list_pane_g1

0x096b,	// (0x00037c87) fep_hwr_candidate_drop_down_list_pane_g2

0x0978,	// (0x00037c94) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x00046ee2) fep_hwr_candidate_drop_down_list_pane_g

0x0985,	// (0x00037ca1) fep_hwr_candidate_drop_down_list_scroll_pane

0x098e,	// (0x00037caa) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x098e,	// (0x00037caa) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x099b,	// (0x00037cb7) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x099b,	// (0x00037cb7) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x09a8,	// (0x00037cc4) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x09a8,	// (0x00037cc4) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x09b5,	// (0x00037cd1) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x09b5,	// (0x00037cd1) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x09d0,	// (0x00037cec) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x09d0,	// (0x00037cec) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x09eb,	// (0x00037d07) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x09eb,	// (0x00037d07) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x0a06,	// (0x00037d22) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0a06,	// (0x00037d22) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x0a21,	// (0x00037d3d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0a21,	// (0x00037d3d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x00046ee9) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x00046ee9) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x514e,	// (0x0003c46a) cell_vkb_candidate_pane_cp1_ParamLimits

0x514e,	// (0x0003c46a) cell_vkb_candidate_pane_cp1

0x4cc2,	// (0x0003bfde) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4cc2,	// (0x0003bfde) fep_vkb_candidate_drop_down_list_pane_g1

0x5174,	// (0x0003c490) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5174,	// (0x0003c490) fep_vkb_candidate_drop_down_list_pane_g2

0x5181,	// (0x0003c49d) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5181,	// (0x0003c49d) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x00046efa) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbde,	// (0x00046efa) fep_vkb_candidate_drop_down_list_pane_g

0x518e,	// (0x0003c4aa) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x518e,	// (0x0003c4aa) fep_vkb_candidate_drop_down_list_scroll_pane

0x519b,	// (0x0003c4b7) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x519b,	// (0x0003c4b7) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x51a8,	// (0x0003c4c4) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x51a8,	// (0x0003c4c4) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x51b4,	// (0x0003c4d0) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x51b4,	// (0x0003c4d0) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x51c0,	// (0x0003c4dc) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x51c0,	// (0x0003c4dc) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x51e1,	// (0x0003c4fd) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x51e1,	// (0x0003c4fd) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5202,	// (0x0003c51e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5202,	// (0x0003c51e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5223,	// (0x0003c53f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5223,	// (0x0003c53f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5244,	// (0x0003c560) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5244,	// (0x0003c560) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x00046f01) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x00046f01) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x90ff,	// (0x0004041b) title_pane_g1_ParamLimits

0x9112,	// (0x0004042e) title_pane_g2_ParamLimits

0xf554,	// (0x00046870) title_pane_g_ParamLimits

0xbc9a,	// (0x00042fb6) aid_call2_pane

0xbca2,	// (0x00042fbe) aid_call_pane

0xcfc0,	// (0x000442dc) popup_clock_analogue_window_g1

0xcfc0,	// (0x000442dc) popup_clock_analogue_window_g2

0xef9f,	// (0x000462bb) popup_clock_analogue_window_g3

0xefa8,	// (0x000462c4) popup_clock_analogue_window_g4

0x8434,	// (0x0003f750) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x00046a1a) popup_clock_analogue_window_g

0xefb0,	// (0x000462cc) popup_clock_analogue_window_t1

0xefbe,	// (0x000462da) clock_digital_number_pane_ParamLimits

0xefbe,	// (0x000462da) clock_digital_number_pane

0xefca,	// (0x000462e6) clock_digital_number_pane_cp02_ParamLimits

0xefca,	// (0x000462e6) clock_digital_number_pane_cp02

0xefd6,	// (0x000462f2) clock_digital_number_pane_cp03_ParamLimits

0xefd6,	// (0x000462f2) clock_digital_number_pane_cp03

0xefe2,	// (0x000462fe) clock_digital_number_pane_cp04_ParamLimits

0xefe2,	// (0x000462fe) clock_digital_number_pane_cp04

0xefee,	// (0x0004630a) clock_digital_separator_pane_ParamLimits

0xefee,	// (0x0004630a) clock_digital_separator_pane

0xeffa,	// (0x00046316) popup_clock_digital_window_t1_ParamLimits

0xeffa,	// (0x00046316) popup_clock_digital_window_t1

0x8434,	// (0x0003f750) clock_digital_number_pane_g1

0x8434,	// (0x0003f750) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x00046a25) clock_digital_number_pane_g

0x8434,	// (0x0003f750) clock_digital_separator_pane_g1

0x8434,	// (0x0003f750) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x00046a25) clock_digital_separator_pane_g

0xa7ff,	// (0x00041b1b) aid_fill_nsta_ParamLimits

0xbd6f,	// (0x0004308b) indicator_nsta_pane_ParamLimits

0x21f5,	// (0x00039511) popup_clock_analogue_window

0x21f5,	// (0x00039511) popup_clock_digital_window

0xd537,	// (0x00044853) grid_indicator_nsta_pane_ParamLimits

0x4474,	// (0x0003b790) clock_nsta_pane_t2

0x0001,

0xfaab,	// (0x00046dc7) clock_nsta_pane_t

0xef6c,	// (0x00046288) aid_size_max_handle

0x9ba7,	// (0x00040ec3) aid_size_min_handle

0xf467,	// (0x00046783) editor_scroll_pane

0x525f,	// (0x0003c57b) ex_editor_pane

0xb8f4,	// (0x00042c10) scroll_pane_cp13

0xb767,	// (0x00042a83) scroll_pane_cp14

0xcfef,	// (0x0004430b) scroll_pane_cp36

0x9c47,	// (0x00040f63) list_single_graphic_hl_pane_cp2_ParamLimits

0x9c47,	// (0x00040f63) list_single_graphic_hl_pane_cp2

0xc538,	// (0x00043854) list_single_graphic_hl_pane_ParamLimits

0xc538,	// (0x00043854) list_single_graphic_hl_pane

0xed54,	// (0x00046070) aid_size_min_hl_cp1

0x5267,	// (0x0003c583) list_highlight_pane_cp34_ParamLimits

0x5267,	// (0x0003c583) list_highlight_pane_cp34

0x5278,	// (0x0003c594) list_single_graphic_hl_pane_g1_ParamLimits

0x5278,	// (0x0003c594) list_single_graphic_hl_pane_g1

0xab22,	// (0x00041e3e) list_single_graphic_hl_pane_g2_ParamLimits

0xab22,	// (0x00041e3e) list_single_graphic_hl_pane_g2

0xab22,	// (0x00041e3e) list_single_graphic_hl_pane_g3_ParamLimits

0xab22,	// (0x00041e3e) list_single_graphic_hl_pane_g3

0xed5d,	// (0x00046079) list_single_graphic_hl_pane_g4_ParamLimits

0xed5d,	// (0x00046079) list_single_graphic_hl_pane_g4

0xab2e,	// (0x00041e4a) list_single_graphic_hl_pane_g5_ParamLimits

0xab2e,	// (0x00041e4a) list_single_graphic_hl_pane_g5

0x0004,

0xfbf6,	// (0x00046f12) list_single_graphic_hl_pane_g_ParamLimits

0xfbf6,	// (0x00046f12) list_single_graphic_hl_pane_g

0xab42,	// (0x00041e5e) list_single_graphic_hl_pane_t1_ParamLimits

0xab42,	// (0x00041e5e) list_single_graphic_hl_pane_t1

0x5285,	// (0x0003c5a1) aid_size_min_hl_cp2

0x528e,	// (0x0003c5aa) list_highlight_pane_cp34_cp2_ParamLimits

0x528e,	// (0x0003c5aa) list_highlight_pane_cp34_cp2

0x5278,	// (0x0003c594) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5278,	// (0x0003c594) list_single_graphic_hl_pane_g1_cp2

0x529b,	// (0x0003c5b7) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x529b,	// (0x0003c5b7) list_single_graphic_hl_pane_g2_cp2

0xca06,	// (0x00043d22) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xca06,	// (0x00043d22) list_single_graphic_hl_pane_g3_cp2

0xd6a2,	// (0x000449be) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xd6a2,	// (0x000449be) list_single_graphic_hl_pane_g4_cp2

0x52b5,	// (0x0003c5d1) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x52b5,	// (0x0003c5d1) list_single_graphic_hl_pane_g5_cp2

0x9f62,	// (0x0004127e) control_pane_g4_ParamLimits

0x9f62,	// (0x0004127e) control_pane_g4

0x18dd,	// (0x00038bf9) bg_popup_sub_pane_cp10_ParamLimits

0x4a51,	// (0x0003bd6d) list_choice_list_pane_ParamLimits

0x4a60,	// (0x0003bd7c) scroll_pane_cp23

0xb2e6,	// (0x00042602) bg_popup_preview_window_pane_cp02_ParamLimits

0x508f,	// (0x0003c3ab) list_preview_fixed_pane_ParamLimits

0x50a5,	// (0x0003c3c1) list_preview_fixed_pane_cp_ParamLimits

0x50a5,	// (0x0003c3c1) list_preview_fixed_pane_cp

0x50b1,	// (0x0003c3cd) popup_preview_fixed_window_g1_ParamLimits

0x50b1,	// (0x0003c3cd) popup_preview_fixed_window_g1

0x50bd,	// (0x0003c3d9) popup_preview_fixed_window_g2_ParamLimits

0x50bd,	// (0x0003c3d9) popup_preview_fixed_window_g2

0x0002,

0xfb7e,	// (0x00046e9a) popup_preview_fixed_window_g_ParamLimits

0xfb7e,	// (0x00046e9a) popup_preview_fixed_window_g

0xeede,	// (0x000461fa) aid_navi_side_left_pane_ParamLimits

0xeef3,	// (0x0004620f) aid_navi_side_right_pane_ParamLimits

0xef0b,	// (0x00046227) navi_icon_pane_stacon_ParamLimits

0xef1f,	// (0x0004623b) navi_navi_pane_stacon_ParamLimits

0xef0b,	// (0x00046227) navi_text_pane_stacon_ParamLimits

0x842a,	// (0x0003f746) main_text_info_pane

0x52df,	// (0x0003c5fb) listscroll_text_info_pane

0x52e7,	// (0x0003c603) list_text_info_pane_ParamLimits

0x52e7,	// (0x0003c603) list_text_info_pane

0x52f6,	// (0x0003c612) scroll_pane_cp24_ParamLimits

0x52f6,	// (0x0003c612) scroll_pane_cp24

0xca14,	// (0x00043d30) list_text_info_pane_t1_ParamLimits

0xca14,	// (0x00043d30) list_text_info_pane_t1

0xa0f8,	// (0x00041414) popup_fast_swap2_window_ParamLimits

0xa0f8,	// (0x00041414) popup_fast_swap2_window

0x5339,	// (0x0003c655) aid_size_cell_fast2

0x842a,	// (0x0003f746) bg_popup_window_pane_cp17

0x2852,	// (0x00039b6e) heading_pane_cp2

0xb4ec,	// (0x00042808) listscroll_fast2_pane

0x5343,	// (0x0003c65f) grid_fast2_pane

0x534d,	// (0x0003c669) listscroll_fast2_pane_g1

0x5357,	// (0x0003c673) listscroll_fast2_pane_g2

0x0001,

0xfc01,	// (0x00046f1d) listscroll_fast2_pane_g

0xb8f4,	// (0x00042c10) scroll_pane_cp26

0x5361,	// (0x0003c67d) cell_fast2_pane_ParamLimits

0x5361,	// (0x0003c67d) cell_fast2_pane

0x5378,	// (0x0003c694) cell_fast2_pane_g1

0x5381,	// (0x0003c69d) cell_fast2_pane_g2

0x538a,	// (0x0003c6a6) cell_fast2_pane_g3

0x0002,

0xfc06,	// (0x00046f22) cell_fast2_pane_g

0xb52e,	// (0x0004284a) grid_highlight_pane_cp9

0xb543,	// (0x0004285f) main_eswt_pane_ParamLimits

0xb543,	// (0x0004285f) main_eswt_pane

0x530b,	// (0x0003c627) list_single_text_info_pane

0x5392,	// (0x0003c6ae) eswt_ctrl_button_pane

0x5392,	// (0x0003c6ae) eswt_ctrl_canvas_pane

0x539a,	// (0x0003c6b6) eswt_ctrl_combo_pane

0x5392,	// (0x0003c6ae) eswt_ctrl_default_pane

0x5392,	// (0x0003c6ae) eswt_ctrl_label_pane

0x53a2,	// (0x0003c6be) eswt_ctrl_wait_pane

0x53aa,	// (0x0003c6c6) eswt_shell_pane

0x842a,	// (0x0003f746) listscroll_eswt_app_pane

0x53ca,	// (0x0003c6e6) popup_eswt_tasktip_window_ParamLimits

0x53ca,	// (0x0003c6e6) popup_eswt_tasktip_window

0x2492,	// (0x000397ae) bg_popup_window_pane_cp18

0x53db,	// (0x0003c6f7) eswt_control_pane_g1_ParamLimits

0x53db,	// (0x0003c6f7) eswt_control_pane_g1

0x53e8,	// (0x0003c704) eswt_control_pane_g2_ParamLimits

0x53e8,	// (0x0003c704) eswt_control_pane_g2

0x53f5,	// (0x0003c711) eswt_control_pane_g3_ParamLimits

0x53f5,	// (0x0003c711) eswt_control_pane_g3

0x5402,	// (0x0003c71e) eswt_control_pane_g4_ParamLimits

0x5402,	// (0x0003c71e) eswt_control_pane_g4

0x0003,

0xfc0d,	// (0x00046f29) eswt_control_pane_g_ParamLimits

0xfc0d,	// (0x00046f29) eswt_control_pane_g

0xb7c8,	// (0x00042ae4) bg_button_pane_ParamLimits

0xb7c8,	// (0x00042ae4) bg_button_pane

0xb543,	// (0x0004285f) common_borders_pane_copy2_ParamLimits

0xb543,	// (0x0004285f) common_borders_pane_copy2

0x540f,	// (0x0003c72b) control_button_pane_g1_ParamLimits

0x540f,	// (0x0003c72b) control_button_pane_g1

0x541b,	// (0x0003c737) control_button_pane_g2_ParamLimits

0x541b,	// (0x0003c737) control_button_pane_g2

0x5427,	// (0x0003c743) control_button_pane_g3_ParamLimits

0x5427,	// (0x0003c743) control_button_pane_g3

0x0002,

0xfc16,	// (0x00046f32) control_button_pane_g_ParamLimits

0xfc16,	// (0x00046f32) control_button_pane_g

0x543b,	// (0x0003c757) control_button_pane_t1

0x5449,	// (0x0003c765) control_button_pane_t2

0x0001,

0xfc1d,	// (0x00046f39) control_button_pane_t

0x241e,	// (0x0003973a) bg_button_pane_g1

0x242e,	// (0x0003974a) bg_button_pane_g2

0x2426,	// (0x00039742) bg_button_pane_g3

0x243e,	// (0x0003975a) bg_button_pane_g4

0x2436,	// (0x00039752) bg_button_pane_g5

0x2446,	// (0x00039762) bg_button_pane_g6

0x244e,	// (0x0003976a) bg_button_pane_g7

0x245e,	// (0x0003977a) bg_button_pane_g8

0x2456,	// (0x00039772) bg_button_pane_g9

0x0008,

0xf867,	// (0x00046b83) bg_button_pane_g

0x4a0c,	// (0x0003bd28) common_borders_pane_ParamLimits

0x4a0c,	// (0x0003bd28) common_borders_pane

0x53db,	// (0x0003c6f7) eswt_control_pane_g1_copy1_ParamLimits

0x53db,	// (0x0003c6f7) eswt_control_pane_g1_copy1

0x53e8,	// (0x0003c704) eswt_control_pane_g2_copy1_ParamLimits

0x53e8,	// (0x0003c704) eswt_control_pane_g2_copy1

0x53f5,	// (0x0003c711) eswt_control_pane_g3_copy1_ParamLimits

0x53f5,	// (0x0003c711) eswt_control_pane_g3_copy1

0x5402,	// (0x0003c71e) eswt_control_pane_g4_copy1_ParamLimits

0x5402,	// (0x0003c71e) eswt_control_pane_g4_copy1

0x4a47,	// (0x0003bd63) bg_eswt_ctrl_canvas_pane_g1

0x4a0c,	// (0x0003bd28) common_borders_pane_cp2_ParamLimits

0x4a0c,	// (0x0003bd28) common_borders_pane_cp2

0x4a0c,	// (0x0003bd28) common_borders_pane_cp3_ParamLimits

0x4a0c,	// (0x0003bd28) common_borders_pane_cp3

0x5457,	// (0x0003c773) separator_horizontal_pane

0x545f,	// (0x0003c77b) separator_vertical_pane

0x53db,	// (0x0003c6f7) eswt_control_pane_g1_copy2_ParamLimits

0x53db,	// (0x0003c6f7) eswt_control_pane_g1_copy2

0x53e8,	// (0x0003c704) eswt_control_pane_g2_copy2_ParamLimits

0x53e8,	// (0x0003c704) eswt_control_pane_g2_copy2

0x53f5,	// (0x0003c711) eswt_control_pane_g3_copy2_ParamLimits

0x53f5,	// (0x0003c711) eswt_control_pane_g3_copy2

0x5402,	// (0x0003c71e) eswt_control_pane_g4_copy2_ParamLimits

0x5402,	// (0x0003c71e) eswt_control_pane_g4_copy2

0x842a,	// (0x0003f746) common_borders_pane_cp4

0x5468,	// (0x0003c784) separator_horizontal_pane_g1

0x5471,	// (0x0003c78d) separator_horizontal_pane_g2

0x547a,	// (0x0003c796) separator_horizontal_pane_g3

0x0002,

0xfc22,	// (0x00046f3e) separator_horizontal_pane_g

0x53db,	// (0x0003c6f7) eswt_control_pane_g1_copy3_ParamLimits

0x53db,	// (0x0003c6f7) eswt_control_pane_g1_copy3

0x53e8,	// (0x0003c704) eswt_control_pane_g2_copy3_ParamLimits

0x53e8,	// (0x0003c704) eswt_control_pane_g2_copy3

0x53f5,	// (0x0003c711) eswt_control_pane_g3_copy3_ParamLimits

0x53f5,	// (0x0003c711) eswt_control_pane_g3_copy3

0x5402,	// (0x0003c71e) eswt_control_pane_g4_copy3_ParamLimits

0x5402,	// (0x0003c71e) eswt_control_pane_g4_copy3

0x842a,	// (0x0003f746) common_borders_pane_cp5

0x5483,	// (0x0003c79f) separator_vertical_pane_g1

0x548c,	// (0x0003c7a8) separator_vertical_pane_g2

0x5495,	// (0x0003c7b1) separator_vertical_pane_g3

0x0002,

0xfc29,	// (0x00046f45) separator_vertical_pane_g

0x53db,	// (0x0003c6f7) eswt_control_pane_g1_copy4_ParamLimits

0x53db,	// (0x0003c6f7) eswt_control_pane_g1_copy4

0x53e8,	// (0x0003c704) eswt_control_pane_g2_copy4_ParamLimits

0x53e8,	// (0x0003c704) eswt_control_pane_g2_copy4

0x53f5,	// (0x0003c711) eswt_control_pane_g3_copy4_ParamLimits

0x53f5,	// (0x0003c711) eswt_control_pane_g3_copy4

0x5402,	// (0x0003c71e) eswt_control_pane_g4_copy4_ParamLimits

0x5402,	// (0x0003c71e) eswt_control_pane_g4_copy4

0xca36,	// (0x00043d52) eswt_ctrl_combo_button_pane

0xca3e,	// (0x00043d5a) eswt_ctrl_input_pane

0xca46,	// (0x00043d62) popup_choice_list_window_cp70

0xca4e,	// (0x00043d6a) eswt_ctrl_input_pane_t1

0x842a,	// (0x0003f746) input_focus_pane_cp70

0x4a0c,	// (0x0003bd28) bg_button_pane_cp70_ParamLimits

0x4a0c,	// (0x0003bd28) bg_button_pane_cp70

0xca5c,	// (0x00043d78) eswt_ctrl_combo_button_pane_g1

0x54cc,	// (0x0003c7e8) wait_bar_pane_cp70

0x2492,	// (0x000397ae) bg_popup_window_pane_cp70_ParamLimits

0x2492,	// (0x000397ae) bg_popup_window_pane_cp70

0x54d4,	// (0x0003c7f0) popup_eswt_tasktip_window_t1

0x54ea,	// (0x0003c806) wait_bar_pane_cp71_ParamLimits

0x54ea,	// (0x0003c806) wait_bar_pane_cp71

0x54f6,	// (0x0003c812) grid_eswt_app_pane

0xbb39,	// (0x00042e55) scroll_pane_cp70

0xca64,	// (0x00043d80) cell_eswt_app_pane_ParamLimits

0xca64,	// (0x00043d80) cell_eswt_app_pane

0xca96,	// (0x00043db2) cell_eswt_app_pane_g1_ParamLimits

0xca96,	// (0x00043db2) cell_eswt_app_pane_g1

0xcac5,	// (0x00043de1) cell_eswt_app_pane_g2_ParamLimits

0xcac5,	// (0x00043de1) cell_eswt_app_pane_g2

0x0001,

0xfc30,	// (0x00046f4c) cell_eswt_app_pane_g_ParamLimits

0xfc30,	// (0x00046f4c) cell_eswt_app_pane_g

0xcaee,	// (0x00043e0a) cell_eswt_app_pane_t1_ParamLimits

0xcaee,	// (0x00043e0a) cell_eswt_app_pane_t1

0x55bb,	// (0x0003c8d7) grid_highlight_pane_cp70_ParamLimits

0x55bb,	// (0x0003c8d7) grid_highlight_pane_cp70

0xf360,	// (0x0004667c) set_content_pane_g1

0x17ff,	// (0x00038b1b) status_small_volume_pane

0x0a72,	// (0x00037d8e) status_small_volume_pane_g1

0x0a7a,	// (0x00037d96) volume_small2_pane

0x0a83,	// (0x00037d9f) volume_small2_pane_g1

0x0a8c,	// (0x00037da8) volume_small2_pane_g2

0x0a95,	// (0x00037db1) volume_small2_pane_g3

0x0a9e,	// (0x00037dba) volume_small2_pane_g4

0x0aa7,	// (0x00037dc3) volume_small2_pane_g5

0x0ab0,	// (0x00037dcc) volume_small2_pane_g6

0x0ab9,	// (0x00037dd5) volume_small2_pane_g7

0x0ac2,	// (0x00037dde) volume_small2_pane_g8

0x0acb,	// (0x00037de7) volume_small2_pane_g9

0x0ad4,	// (0x00037df0) volume_small2_pane_g10

0x0009,

0xfc35,	// (0x00046f51) volume_small2_pane_g

0x4e16,	// (0x0003c132) fep_vkb_top_text_pane_g1_ParamLimits

0xc9ae,	// (0x00043cca) fep_vkb_top_text_pane_t1_ParamLimits

0x50c9,	// (0x0003c3e5) popup_preview_fixed_window_g3_ParamLimits

0x50c9,	// (0x0003c3e5) popup_preview_fixed_window_g3

0xa792,	// (0x00041aae) popup_toolbar_trans_pane

0xc388,	// (0x000436a4) aid_height_set_list_ParamLimits

0x37e8,	// (0x0003ab04) aid_size_parent_ParamLimits

0x18dd,	// (0x00038bf9) list_highlight_pane_cp2_ParamLimits

0xf360,	// (0x0004667c) set_content_pane_g1_ParamLimits

0xc54c,	// (0x00043868) list_single_image_pane_ParamLimits

0xc54c,	// (0x00043868) list_single_image_pane

0xcb20,	// (0x00043e3c) aid_size_cell_image_ParamLimits

0xcb20,	// (0x00043e3c) aid_size_cell_image

0xcb2d,	// (0x00043e49) grid_single_image_pane_ParamLimits

0xcb2d,	// (0x00043e49) grid_single_image_pane

0xb7d6,	// (0x00042af2) list_single_image_pane_g1_ParamLimits

0xb7d6,	// (0x00042af2) list_single_image_pane_g1

0xb7e2,	// (0x00042afe) list_single_image_pane_g2_ParamLimits

0xb7e2,	// (0x00042afe) list_single_image_pane_g2

0x0001,

0xfc4a,	// (0x00046f66) list_single_image_pane_g_ParamLimits

0xfc4a,	// (0x00046f66) list_single_image_pane_g

0x55e2,	// (0x0003c8fe) list_single_image_pane_t1_ParamLimits

0x55e2,	// (0x0003c8fe) list_single_image_pane_t1

0xcb3b,	// (0x00043e57) cell_image_list_pane_ParamLimits

0xcb3b,	// (0x00043e57) cell_image_list_pane

0xcb4f,	// (0x00043e6b) cell_image_list_pane_g1

0xcb58,	// (0x00043e74) cell_image_list_pane_g2

0x0001,

0xfc4f,	// (0x00046f6b) cell_image_list_pane_g

0x5620,	// (0x0003c93c) aid_size_cell_tb_trans_pane

0xb7c8,	// (0x00042ae4) bg_tb_trans_pane

0x5632,	// (0x0003c94e) grid_tb_trans_pane

0x241e,	// (0x0003973a) bg_tb_trans_pane_g1

0x242e,	// (0x0003974a) bg_tb_trans_pane_g2

0x2426,	// (0x00039742) bg_tb_trans_pane_g3

0x243e,	// (0x0003975a) bg_tb_trans_pane_g4

0x2436,	// (0x00039752) bg_tb_trans_pane_g5

0x245e,	// (0x0003977a) bg_tb_trans_pane_g6

0x2456,	// (0x00039772) bg_tb_trans_pane_g7

0x2446,	// (0x00039762) bg_tb_trans_pane_g8

0x244e,	// (0x0003976a) bg_tb_trans_pane_g9

0x0008,

0xfc54,	// (0x00046f70) bg_tb_trans_pane_g

0x5646,	// (0x0003c962) cell_toolbar_trans_pane_ParamLimits

0x5646,	// (0x0003c962) cell_toolbar_trans_pane

0x4a47,	// (0x0003bd63) cell_toolbar_trans_pane_g1

0xc786,	// (0x00043aa2) list_form2_midp_pane_t1

0xc794,	// (0x00043ab0) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x00046e0d) list_form2_midp_pane_t

0x4687,	// (0x0003b9a3) scroll_pane_cp51_ParamLimits

0x484e,	// (0x0003bb6a) form2_midp_wait_pane_g1

0x4857,	// (0x0003bb73) form2_midp_wait_pane_g2

0x4860,	// (0x0003bb7c) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x00046e22) form2_midp_wait_pane_g

0x8498,	// (0x0003f7b4) list_highlight_pane_cp21_ParamLimits

0x48a4,	// (0x0003bbc0) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x48b3,	// (0x0003bbcf) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd299,	// (0x000445b5) list_single_2graphic_im_pane_ParamLimits

0xd299,	// (0x000445b5) list_single_2graphic_im_pane

0xcb61,	// (0x00043e7d) list_single_2graphic_im_pane_g1_ParamLimits

0xcb61,	// (0x00043e7d) list_single_2graphic_im_pane_g1

0xcb72,	// (0x00043e8e) list_single_2graphic_im_pane_g2_ParamLimits

0xcb72,	// (0x00043e8e) list_single_2graphic_im_pane_g2

0xcb7e,	// (0x00043e9a) list_single_2graphic_im_pane_g3_ParamLimits

0xcb7e,	// (0x00043e9a) list_single_2graphic_im_pane_g3

0x0003,

0xfc67,	// (0x00046f83) list_single_2graphic_im_pane_g_ParamLimits

0xfc67,	// (0x00046f83) list_single_2graphic_im_pane_g

0xcb92,	// (0x00043eae) list_single_2graphic_im_pane_t1_ParamLimits

0xcb92,	// (0x00043eae) list_single_2graphic_im_pane_t1

0x50d5,	// (0x0003c3f1) list_single_graphic_2heading_pane_fp_ParamLimits

0x50d5,	// (0x0003c3f1) list_single_graphic_2heading_pane_fp

0xd5d4,	// (0x000448f0) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xd5d4,	// (0x000448f0) list_single_graphic_2heading_pane_fp_g1

0x50ee,	// (0x0003c40a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x50ee,	// (0x0003c40a) list_single_graphic_2heading_pane_fp_g2

0xd59d,	// (0x000448b9) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd59d,	// (0x000448b9) list_single_graphic_2heading_pane_fp_g3

0xd5a9,	// (0x000448c5) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xd5a9,	// (0x000448c5) list_single_graphic_2heading_pane_fp_g4

0x50fa,	// (0x0003c416) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x50fa,	// (0x0003c416) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x00046eaa) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x00046eaa) list_single_graphic_2heading_pane_fp_g

0xed69,	// (0x00046085) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xed69,	// (0x00046085) list_single_graphic_2heading_pane_fp_t1

0xd60c,	// (0x00044928) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xd60c,	// (0x00044928) list_single_graphic_2heading_pane_fp_t2

0xed7f,	// (0x0004609b) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xed7f,	// (0x0004609b) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc70,	// (0x00046f8c) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc70,	// (0x00046f8c) list_single_graphic_2heading_pane_fp_t

0x4ad8,	// (0x0003bdf4) fep_hwr_write_pane_g5_ParamLimits

0x4ad8,	// (0x0003bdf4) fep_hwr_write_pane_g5

0x4ae4,	// (0x0003be00) fep_hwr_write_pane_g6_ParamLimits

0x4ae4,	// (0x0003be00) fep_hwr_write_pane_g6

0x53aa,	// (0x0003c6c6) eswt_shell_pane_ParamLimits

0x2492,	// (0x000397ae) bg_popup_window_pane_cp18_ParamLimits

0x372e,	// (0x0003aa4a) heading_pane_cp70

0x54d4,	// (0x0003c7f0) popup_eswt_tasktip_window_t1_ParamLimits

0xa85c,	// (0x00041b78) aid_touch_tab_arrow_left

0xbcaa,	// (0x00042fc6) aid_touch_tab_arrow_right

0x8448,	// (0x0003f764) title_pane_g3_ParamLimits

0x8448,	// (0x0003f764) title_pane_g3

0xb787,	// (0x00042aa3) set_value_pane_g1

0xa792,	// (0x00041aae) popup_toolbar_trans_pane_ParamLimits

0x5620,	// (0x0003c93c) aid_size_cell_tb_trans_pane_ParamLimits

0xb7c8,	// (0x00042ae4) bg_tb_trans_pane_ParamLimits

0x5632,	// (0x0003c94e) grid_tb_trans_pane_ParamLimits

0xb2e6,	// (0x00042602) cont_note_pane_ParamLimits

0xb2e6,	// (0x00042602) cont_note_pane

0xb543,	// (0x0004285f) cont_snote2_single_text_pane_ParamLimits

0xb543,	// (0x0004285f) cont_snote2_single_text_pane

0xb543,	// (0x0004285f) cont_snote2_single_graphic_pane_ParamLimits

0xb543,	// (0x0004285f) cont_snote2_single_graphic_pane

0x2a6e,	// (0x00039d8a) cont_note_wait_pane_ParamLimits

0x2a6e,	// (0x00039d8a) cont_note_wait_pane

0x2a6e,	// (0x00039d8a) cont_note_image_pane_ParamLimits

0x2a6e,	// (0x00039d8a) cont_note_image_pane

0x56da,	// (0x0003c9f6) popup_note2_window_g1_ParamLimits

0x56da,	// (0x0003c9f6) popup_note2_window_g1

0x570b,	// (0x0003ca27) popup_note2_window_t1_ParamLimits

0x570b,	// (0x0003ca27) popup_note2_window_t1

0x5750,	// (0x0003ca6c) popup_note2_window_t2_ParamLimits

0x5750,	// (0x0003ca6c) popup_note2_window_t2

0x5795,	// (0x0003cab1) popup_note2_window_t3_ParamLimits

0x5795,	// (0x0003cab1) popup_note2_window_t3

0x57da,	// (0x0003caf6) popup_note2_window_t4_ParamLimits

0x57da,	// (0x0003caf6) popup_note2_window_t4

0xb36a,	// (0x00042686) popup_note2_window_t5_ParamLimits

0xb36a,	// (0x00042686) popup_note2_window_t5

0x0004,

0xfc7c,	// (0x00046f98) popup_note2_window_t_ParamLimits

0xfc7c,	// (0x00046f98) popup_note2_window_t

0x5809,	// (0x0003cb25) popup_note2_image_window_g1_ParamLimits

0x5809,	// (0x0003cb25) popup_note2_image_window_g1

0x5815,	// (0x0003cb31) popup_note2_image_window_g2_ParamLimits

0x5815,	// (0x0003cb31) popup_note2_image_window_g2

0x0001,

0xfc87,	// (0x00046fa3) popup_note2_image_window_g_ParamLimits

0xfc87,	// (0x00046fa3) popup_note2_image_window_g

0x5827,	// (0x0003cb43) popup_note2_image_window_t1_ParamLimits

0x5827,	// (0x0003cb43) popup_note2_image_window_t1

0x583f,	// (0x0003cb5b) popup_note2_image_window_t2_ParamLimits

0x583f,	// (0x0003cb5b) popup_note2_image_window_t2

0x5857,	// (0x0003cb73) popup_note2_image_window_t3_ParamLimits

0x5857,	// (0x0003cb73) popup_note2_image_window_t3

0x0002,

0xfc8c,	// (0x00046fa8) popup_note2_image_window_t_ParamLimits

0xfc8c,	// (0x00046fa8) popup_note2_image_window_t

0x2a7c,	// (0x00039d98) popup_note2_wait_window_g1_ParamLimits

0x2a7c,	// (0x00039d98) popup_note2_wait_window_g1

0x5873,	// (0x0003cb8f) popup_note2_wait_window_g2_ParamLimits

0x5873,	// (0x0003cb8f) popup_note2_wait_window_g2

0x2a94,	// (0x00039db0) popup_note2_wait_window_g3_ParamLimits

0x2a94,	// (0x00039db0) popup_note2_wait_window_g3

0x0002,

0xfc93,	// (0x00046faf) popup_note2_wait_window_g_ParamLimits

0xfc93,	// (0x00046faf) popup_note2_wait_window_g

0x587f,	// (0x0003cb9b) popup_note2_wait_window_t1_ParamLimits

0x587f,	// (0x0003cb9b) popup_note2_wait_window_t1

0x589d,	// (0x0003cbb9) popup_note2_wait_window_t2_ParamLimits

0x589d,	// (0x0003cbb9) popup_note2_wait_window_t2

0x58bb,	// (0x0003cbd7) popup_note2_wait_window_t3_ParamLimits

0x58bb,	// (0x0003cbd7) popup_note2_wait_window_t3

0x58cd,	// (0x0003cbe9) popup_note2_wait_window_t4_ParamLimits

0x58cd,	// (0x0003cbe9) popup_note2_wait_window_t4

0x0003,

0xfc9a,	// (0x00046fb6) popup_note2_wait_window_t_ParamLimits

0xfc9a,	// (0x00046fb6) popup_note2_wait_window_t

0x58df,	// (0x0003cbfb) wait_bar2_pane_ParamLimits

0x58df,	// (0x0003cbfb) wait_bar2_pane

0x58f7,	// (0x0003cc13) popup_snote2_single_text_window_g1_ParamLimits

0x58f7,	// (0x0003cc13) popup_snote2_single_text_window_g1

0x591f,	// (0x0003cc3b) popup_snote2_single_text_window_t1_ParamLimits

0x591f,	// (0x0003cc3b) popup_snote2_single_text_window_t1

0x596b,	// (0x0003cc87) popup_snote2_single_text_window_t2_ParamLimits

0x596b,	// (0x0003cc87) popup_snote2_single_text_window_t2

0x59b7,	// (0x0003ccd3) popup_snote2_single_text_window_t3_ParamLimits

0x59b7,	// (0x0003ccd3) popup_snote2_single_text_window_t3

0x59f8,	// (0x0003cd14) popup_snote2_single_text_window_t4_ParamLimits

0x59f8,	// (0x0003cd14) popup_snote2_single_text_window_t4

0x5a2e,	// (0x0003cd4a) popup_snote2_single_text_window_t5_ParamLimits

0x5a2e,	// (0x0003cd4a) popup_snote2_single_text_window_t5

0x0004,

0xfca3,	// (0x00046fbf) popup_snote2_single_text_window_t_ParamLimits

0xfca3,	// (0x00046fbf) popup_snote2_single_text_window_t

0x5a59,	// (0x0003cd75) popup_snote2_single_graphic_window_g1_ParamLimits

0x5a59,	// (0x0003cd75) popup_snote2_single_graphic_window_g1

0x5a81,	// (0x0003cd9d) popup_snote2_single_graphic_window_g2_ParamLimits

0x5a81,	// (0x0003cd9d) popup_snote2_single_graphic_window_g2

0x0001,

0xfcae,	// (0x00046fca) popup_snote2_single_graphic_window_g_ParamLimits

0xfcae,	// (0x00046fca) popup_snote2_single_graphic_window_g

0x5aa9,	// (0x0003cdc5) popup_snote2_single_graphic_window_t1_ParamLimits

0x5aa9,	// (0x0003cdc5) popup_snote2_single_graphic_window_t1

0x5af5,	// (0x0003ce11) popup_snote2_single_graphic_window_t2_ParamLimits

0x5af5,	// (0x0003ce11) popup_snote2_single_graphic_window_t2

0x59b7,	// (0x0003ccd3) popup_snote2_single_graphic_window_t3_ParamLimits

0x59b7,	// (0x0003ccd3) popup_snote2_single_graphic_window_t3

0x59f8,	// (0x0003cd14) popup_snote2_single_graphic_window_t4_ParamLimits

0x59f8,	// (0x0003cd14) popup_snote2_single_graphic_window_t4

0x5a2e,	// (0x0003cd4a) popup_snote2_single_graphic_window_t5_ParamLimits

0x5a2e,	// (0x0003cd4a) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb3,	// (0x00046fcf) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb3,	// (0x00046fcf) popup_snote2_single_graphic_window_t

0x4537,	// (0x0003b853) clock_nsta_pane_cp2_t1

0x4537,	// (0x0003b853) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x00046de3) clock_nsta_pane_cp2_t

0xcf34,	// (0x00044250) form_field_data_wide_pane_g1_ParamLimits

0xb7d6,	// (0x00042af2) form_field_data_wide_pane_g2_ParamLimits

0xb7d6,	// (0x00042af2) form_field_data_wide_pane_g2

0xb7e2,	// (0x00042afe) form_field_data_wide_pane_g3_ParamLimits

0xb7e2,	// (0x00042afe) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x0004699d) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x0004699d) form_field_data_wide_pane_g

0xc68e,	// (0x000439aa) grid_touch_3_pane_ParamLimits

0xc68e,	// (0x000439aa) grid_touch_3_pane

0xcbc3,	// (0x00043edf) cell_touch_3_pane_ParamLimits

0xcbc3,	// (0x00043edf) cell_touch_3_pane

0x4a47,	// (0x0003bd63) cell_touch_3_pane_g1

0x4a47,	// (0x0003bd63) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x00046e68) cell_touch_3_pane_g

0xb39c,	// (0x000426b8) cont_query_data_pane

0xb3a4,	// (0x000426c0) cont_query_data_pane_cp1

0x5b74,	// (0x0003ce90) button_value_adjust_pane_cp7

0x5b7c,	// (0x0003ce98) query_popup_pane_cp3

0xd020,	// (0x0004433c) bg_popup_sub_pane_cp22_ParamLimits

0xf019,	// (0x00046335) navi_navi_volume_pane_cp2

0xf034,	// (0x00046350) popup_side_volume_key_window_g2

0xf043,	// (0x0004635f) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x00046a33) popup_side_volume_key_window_g

0xf060,	// (0x0004637c) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x00046a3a) popup_side_volume_key_window_t

0xf263,	// (0x0004657f) popup_side_volume_key_window_ParamLimits

0x9616,	// (0x00040932) list_double_graphic_pane_g4_ParamLimits

0x9616,	// (0x00040932) list_double_graphic_pane_g4

0xaabf,	// (0x00041ddb) list_single_2heading_msg_pane_ParamLimits

0xaabf,	// (0x00041ddb) list_single_2heading_msg_pane

0xab58,	// (0x00041e74) list_single_2heading_msg_pane_g1_ParamLimits

0xab58,	// (0x00041e74) list_single_2heading_msg_pane_g1

0xab64,	// (0x00041e80) list_single_2heading_msg_pane_g2_ParamLimits

0xab64,	// (0x00041e80) list_single_2heading_msg_pane_g2

0xab77,	// (0x00041e93) list_single_2heading_msg_pane_g3_ParamLimits

0xab77,	// (0x00041e93) list_single_2heading_msg_pane_g3

0xab83,	// (0x00041e9f) list_single_2heading_msg_pane_g4_ParamLimits

0xab83,	// (0x00041e9f) list_single_2heading_msg_pane_g4

0x0003,

0xfcbe,	// (0x00046fda) list_single_2heading_msg_pane_g_ParamLimits

0xfcbe,	// (0x00046fda) list_single_2heading_msg_pane_g

0xab9b,	// (0x00041eb7) list_single_2heading_msg_pane_t1_ParamLimits

0xab9b,	// (0x00041eb7) list_single_2heading_msg_pane_t1

0xabc3,	// (0x00041edf) list_single_2heading_msg_pane_t2_ParamLimits

0xabc3,	// (0x00041edf) list_single_2heading_msg_pane_t2

0xac2e,	// (0x00041f4a) list_single_2heading_msg_pane_t3_ParamLimits

0xac2e,	// (0x00041f4a) list_single_2heading_msg_pane_t3

0xed9f,	// (0x000460bb) list_single_2heading_msg_pane_t4_ParamLimits

0xed9f,	// (0x000460bb) list_single_2heading_msg_pane_t4

0x0003,

0xfcc7,	// (0x00046fe3) list_single_2heading_msg_pane_t_ParamLimits

0xfcc7,	// (0x00046fe3) list_single_2heading_msg_pane_t

0x8454,	// (0x0003f770) title_pane_g4_ParamLimits

0x8454,	// (0x0003f770) title_pane_g4

0xee2e,	// (0x0004614a) title_pane_stacon_g3_ParamLimits

0xee2e,	// (0x0004614a) title_pane_stacon_g3

0x569d,	// (0x0003c9b9) list_single_2graphic_im_pane_g4_ParamLimits

0x569d,	// (0x0003c9b9) list_single_2graphic_im_pane_g4

0x34de,	// (0x0003a7fa) popup_side_volume_key_window_cp

0x3d2b,	// (0x0003b047) main_idle_act2_pane_t1

0x0130,	// (0x0003744c) toolbar_button_pane_g10

0x949f,	// (0x000407bb) popup_toolbar_window_cp1

0x4528,	// (0x0003b844) clock_nsta_pane_cp_t1

0x4528,	// (0x0003b844) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x00046dde) clock_nsta_pane_cp_t

0xf019,	// (0x00046335) navi_navi_volume_pane_cp2_ParamLimits

0xf028,	// (0x00046344) popup_side_volume_key_window_g1_ParamLimits

0xf034,	// (0x00046350) popup_side_volume_key_window_g2_ParamLimits

0xf043,	// (0x0004635f) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x00046a33) popup_side_volume_key_window_g_ParamLimits

0x068d,	// (0x000379a9) fep_hwr_aid_pane

0x0736,	// (0x00037a52) bg_fep_hwr_top_pane_g4_ParamLimits

0x4aa8,	// (0x0003bdc4) fep_hwr_top_pane_g1_ParamLimits

0x4aba,	// (0x0003bdd6) fep_hwr_top_pane_g2_ParamLimits

0x0756,	// (0x00037a72) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x00046e33) fep_hwr_top_pane_g_ParamLimits

0x076b,	// (0x00037a87) fep_hwr_top_text_pane_ParamLimits

0x3293,	// (0x0003a5af) aid_touch_tab_arrow_arrow_2

0x329c,	// (0x0003a5b8) aid_touch_tab_arrow_left_2

0x06a1,	// (0x000379bd) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x06d8,	// (0x000379f4) fep_hwr_prediction_pane

0x4c10,	// (0x0003bf2c) fep_vkb_prediction_pane

0xc98e,	// (0x00043caa) fep_vkb_side_pane_g3_ParamLimits

0xc98e,	// (0x00043caa) fep_vkb_side_pane_g3

0x08fa,	// (0x00037c16) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x096b,	// (0x00037c87) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0978,	// (0x00037c94) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc6,	// (0x00046ee2) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x0ba2,	// (0x00037ebe) fep_hwr_prediction_pane_g1

0x0bac,	// (0x00037ec8) fep_hwr_prediction_pane_g2

0x0bb4,	// (0x00037ed0) fep_hwr_prediction_pane_g3

0x0bbc,	// (0x00037ed8) fep_hwr_prediction_pane_g4

0x0003,

0xfcd0,	// (0x00046fec) fep_hwr_prediction_pane_g

0x5ba3,	// (0x0003cebf) fep_vkb_prediction_pane_g1

0x5bad,	// (0x0003cec9) fep_vkb_prediction_pane_g2

0x5bb5,	// (0x0003ced1) fep_vkb_prediction_pane_g3

0x5bbd,	// (0x0003ced9) fep_vkb_prediction_pane_g4

0x0003,

0xfcd9,	// (0x00046ff5) fep_vkb_prediction_pane_g

0x0484,	// (0x000377a0) slider_set_pane_g3

0x0498,	// (0x000377b4) slider_set_pane_g4

0x04b0,	// (0x000377cc) slider_set_pane_g5

0x0484,	// (0x000377a0) slider_set_pane_g6

0x04c6,	// (0x000377e2) slider_set_pane_g7

0x396d,	// (0x0003ac89) slider_form_pane_g3

0x3976,	// (0x0003ac92) slider_form_pane_g4

0x397e,	// (0x0003ac9a) slider_form_pane_g5

0x396d,	// (0x0003ac89) slider_form_pane_g6

0xc4f7,	// (0x00043813) slider_form_pane_g7

0x3fe2,	// (0x0003b2fe) slider_set_pane_vc_g3

0x3feb,	// (0x0003b307) slider_set_pane_vc_g4

0x3ff4,	// (0x0003b310) slider_set_pane_vc_g5

0x3fe2,	// (0x0003b2fe) slider_set_pane_vc_g6

0x3ffd,	// (0x0003b319) slider_set_pane_vc_g7

0x41d5,	// (0x0003b4f1) slider_form_pane_vc_g1

0x41de,	// (0x0003b4fa) slider_form_pane_vc_g2

0x41e7,	// (0x0003b503) slider_form_pane_vc_g3

0x41d5,	// (0x0003b4f1) slider_form_pane_vc_g4

0x41f0,	// (0x0003b50c) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x00046db0) slider_form_pane_vc_g

0x842a,	// (0x0003f746) main_idle_act3_pane

0x5bc5,	// (0x0003cee1) ai3_links_pane

0xcc0d,	// (0x00043f29) popup_ai3_data_window_ParamLimits

0xcc0d,	// (0x00043f29) popup_ai3_data_window

0x842a,	// (0x0003f746) grid_ai3_links_pane

0xcc2b,	// (0x00043f47) cell_ai3_links_pane_ParamLimits

0xcc2b,	// (0x00043f47) cell_ai3_links_pane

0x5c06,	// (0x0003cf22) bg_popup_sub_pane_cp11

0x5c13,	// (0x0003cf2f) cell_ai3_links_pane_g1

0x842a,	// (0x0003f746) bg_popup_sub_pane_cp12

0x5c38,	// (0x0003cf54) heading_ai3_data_pane

0x5c40,	// (0x0003cf5c) list_ai3_gene_pane

0x5c4c,	// (0x0003cf68) popup_ai3_data_window_g1

0x5c54,	// (0x0003cf70) heading_ai3_data_pane_g1

0x5c5c,	// (0x0003cf78) heading_ai3_data_pane_t1

0x5c6a,	// (0x0003cf86) list_double_ai3_gene_pane_ParamLimits

0x5c6a,	// (0x0003cf86) list_double_ai3_gene_pane

0x5c77,	// (0x0003cf93) list_single_ai3_gene_pane_ParamLimits

0x5c77,	// (0x0003cf93) list_single_ai3_gene_pane

0x4a0c,	// (0x0003bd28) list_highlight_pane_cp7_ParamLimits

0x4a0c,	// (0x0003bd28) list_highlight_pane_cp7

0x5c84,	// (0x0003cfa0) list_single_a13_gene_pane_t1_ParamLimits

0x5c84,	// (0x0003cfa0) list_single_a13_gene_pane_t1

0x5c9b,	// (0x0003cfb7) list_single_ai3_gene_pane_g1

0x5ca4,	// (0x0003cfc0) list_single_ai3_gene_pane_g2

0x0001,

0xfce2,	// (0x00046ffe) list_single_ai3_gene_pane_g

0x5cac,	// (0x0003cfc8) list_double_ai3_gene_pane_g1_ParamLimits

0x5cac,	// (0x0003cfc8) list_double_ai3_gene_pane_g1

0x5cb8,	// (0x0003cfd4) list_double_ai3_gene_pane_t1_ParamLimits

0x5cb8,	// (0x0003cfd4) list_double_ai3_gene_pane_t1

0x5cd4,	// (0x0003cff0) list_double_ai3_gene_pane_t2_ParamLimits

0x5cd4,	// (0x0003cff0) list_double_ai3_gene_pane_t2

0x5ce9,	// (0x0003d005) list_double_ai3_gene_pane_t3_ParamLimits

0x5ce9,	// (0x0003d005) list_double_ai3_gene_pane_t3

0x0002,

0xfce7,	// (0x00047003) list_double_ai3_gene_pane_t_ParamLimits

0xfce7,	// (0x00047003) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xed95,	// (0x000460b1) aid_size_min_col_2

0xcbf7,	// (0x00043f13) aid_size_min_msg_ParamLimits

0xcbf7,	// (0x00043f13) aid_size_min_msg

0xc9a2,	// (0x00043cbe) fep_vkb_top_text_pane_g2_ParamLimits

0xc9a2,	// (0x00043cbe) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x00046e63) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x00046e63) fep_vkb_top_text_pane_g

0x842a,	// (0x0003f746) main_hc_apps_shell_pane

0x5d06,	// (0x0003d022) grid_hc_apps_pane_ParamLimits

0x5d06,	// (0x0003d022) grid_hc_apps_pane

0x5d15,	// (0x0003d031) list_hc_apps_pane

0x5d1d,	// (0x0003d039) scroll_pane_cp37_ParamLimits

0x5d1d,	// (0x0003d039) scroll_pane_cp37

0xcc45,	// (0x00043f61) cell_hc_apps_pane_ParamLimits

0xcc45,	// (0x00043f61) cell_hc_apps_pane

0xcd0f,	// (0x0004402b) cell_hc_apps_pane_g1_ParamLimits

0xcd0f,	// (0x0004402b) cell_hc_apps_pane_g1

0x5e12,	// (0x0003d12e) cell_hc_apps_pane_g2_ParamLimits

0x5e12,	// (0x0003d12e) cell_hc_apps_pane_g2

0x5e2e,	// (0x0003d14a) cell_hc_apps_pane_g3_ParamLimits

0x5e2e,	// (0x0003d14a) cell_hc_apps_pane_g3

0x0002,

0xfcee,	// (0x0004700a) cell_hc_apps_pane_g_ParamLimits

0xfcee,	// (0x0004700a) cell_hc_apps_pane_g

0xcd3c,	// (0x00044058) cell_hc_apps_pane_t1_ParamLimits

0xcd3c,	// (0x00044058) cell_hc_apps_pane_t1

0xb2e6,	// (0x00042602) grid_highlight_pane_cp10_ParamLimits

0xb2e6,	// (0x00042602) grid_highlight_pane_cp10

0xcd7c,	// (0x00044098) list_single_hc_apps_pane_ParamLimits

0xcd7c,	// (0x00044098) list_single_hc_apps_pane

0xcdb6,	// (0x000440d2) list_single_hc_apps_pane_g1

0xac9c,	// (0x00041fb8) list_single_hc_apps_pane_g2

0x0001,

0xfcf5,	// (0x00047011) list_single_hc_apps_pane_g

0xacb5,	// (0x00041fd1) list_single_hc_apps_pane_g2_copy1

0xacd1,	// (0x00041fed) list_single_hc_apps_pane_t1

0x8498,	// (0x0003f7b4) bg_set_opt_pane_cp_ParamLimits

0xeb9f,	// (0x00045ebb) setting_slider_pane_t1_ParamLimits

0xebb8,	// (0x00045ed4) setting_slider_pane_t2_ParamLimits

0xebd2,	// (0x00045eee) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x00046880) setting_slider_pane_t_ParamLimits

0xebea,	// (0x00045f06) slider_set_pane_ParamLimits

0x0018,	// (0x00037334) control_pane_g5_ParamLimits

0x0018,	// (0x00037334) control_pane_g5

0x379a,	// (0x0003aab6) slider_set_pane_g1_ParamLimits

0x0478,	// (0x00037794) slider_set_pane_g2_ParamLimits

0x0484,	// (0x000377a0) slider_set_pane_g3_ParamLimits

0x0498,	// (0x000377b4) slider_set_pane_g4_ParamLimits

0x04b0,	// (0x000377cc) slider_set_pane_g5_ParamLimits

0x0484,	// (0x000377a0) slider_set_pane_g6_ParamLimits

0x04c6,	// (0x000377e2) slider_set_pane_g7_ParamLimits

0xf965,	// (0x00046c81) slider_set_pane_g_ParamLimits

0xf30b,	// (0x00046627) navi_icon_text_pane_ParamLimits

0xa823,	// (0x00041b3f) aid_fill_nsta_2_ParamLimits

0xa85c,	// (0x00041b78) aid_touch_tab_arrow_left_ParamLimits

0xbcaa,	// (0x00042fc6) aid_touch_tab_arrow_right_ParamLimits

0xbd45,	// (0x00043061) clock_nsta_pane_ParamLimits

0xc234,	// (0x00043550) navi_icon_pane_g1_ParamLimits

0xc240,	// (0x0004355c) navi_text_pane_t1_ParamLimits

0xc768,	// (0x00043a84) navi_icon_text_pane_g1_ParamLimits

0xc774,	// (0x00043a90) navi_icon_text_pane_t1_ParamLimits

0xcdb6,	// (0x000440d2) list_single_hc_apps_pane_g1_ParamLimits

0xac9c,	// (0x00041fb8) list_single_hc_apps_pane_g2_ParamLimits

0xfcf5,	// (0x00047011) list_single_hc_apps_pane_g_ParamLimits

0xacb5,	// (0x00041fd1) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xacd1,	// (0x00041fed) list_single_hc_apps_pane_t1_ParamLimits

0x9025,	// (0x00040341) popup_toolbar2_fixed_window_ParamLimits

0x9025,	// (0x00040341) popup_toolbar2_fixed_window

0xa788,	// (0x00041aa4) popup_toolbar2_float_window

0x842a,	// (0x0003f746) bg_popup_sub_pane_cp27

0x5ee8,	// (0x0003d204) grid_toolbar2_float_pane

0x842a,	// (0x0003f746) bg_popup_sub_pane_cp26

0x5ee8,	// (0x0003d204) grid_toolbar2_fixed_pane

0xcdcf,	// (0x000440eb) cell_toolbar2_fixed_pane_ParamLimits

0xcdcf,	// (0x000440eb) cell_toolbar2_fixed_pane

0xcdec,	// (0x00044108) cell_toolbar2_fixed_pane_g1

0x5f09,	// (0x0003d225) toolbar2_fixed_button_pane

0x241e,	// (0x0003973a) toolbar2_fixed_button_pane_g1

0x242e,	// (0x0003974a) toolbar2_fixed_button_pane_g2

0x2426,	// (0x00039742) toolbar2_fixed_button_pane_g3

0x243e,	// (0x0003975a) toolbar2_fixed_button_pane_g4

0x2436,	// (0x00039752) toolbar2_fixed_button_pane_g5

0x2446,	// (0x00039762) toolbar2_fixed_button_pane_g6

0x244e,	// (0x0003976a) toolbar2_fixed_button_pane_g7

0x245e,	// (0x0003977a) toolbar2_fixed_button_pane_g8

0x2456,	// (0x00039772) toolbar2_fixed_button_pane_g9

0x0008,

0xf867,	// (0x00046b83) toolbar2_fixed_button_pane_g

0x5f11,	// (0x0003d22d) cell_toolbar2_float_pane_ParamLimits

0x5f11,	// (0x0003d22d) cell_toolbar2_float_pane

0x5f22,	// (0x0003d23e) cell_toolbar2_float_pane_g1

0x5f09,	// (0x0003d225) toolbar2_fixed_button_pane_cp

0xc88a,	// (0x00043ba6) fep_vkb_accented_list_pane_ParamLimits

0xc88a,	// (0x00043ba6) fep_vkb_accented_list_pane

0x08da,	// (0x00037bf6) bg_popup_fep_shadow_pane_g9

0xf467,	// (0x00046783) bg_popup_fep_shadow_pane_cp3

0xb8db,	// (0x00042bf7) list_accented_list_pane

0x5f2b,	// (0x0003d247) list_single_accented_list_pane_ParamLimits

0x5f2b,	// (0x0003d247) list_single_accented_list_pane

0xf467,	// (0x00046783) list_highlight_pane_cp10

0x5f3c,	// (0x0003d258) list_single_accented_list_pane_t1

0xa6a4,	// (0x000419c0) popup_slider_window_ParamLimits

0xa6a4,	// (0x000419c0) popup_slider_window

0x5b84,	// (0x0003cea0) aid_indentation_list_msg

0xd7b0,	// (0x00044acc) bg_popup_window_pane_cp19

0x6076,	// (0x0003d392) popup_slider_window_g1

0x6092,	// (0x0003d3ae) popup_slider_window_g2

0x60ae,	// (0x0003d3ca) popup_slider_window_g3

0x0005,

0xfcfa,	// (0x00047016) popup_slider_window_g

0x610a,	// (0x0003d426) popup_slider_window_t1

0x617e,	// (0x0003d49a) small_volume_slider_vertical_pane

0x4a47,	// (0x0003bd63) small_volume_slider_vertical_pane_g1

0x4a47,	// (0x0003bd63) small_volume_slider_vertical_pane_g2

0x619a,	// (0x0003d4b6) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0c,	// (0x00047028) small_volume_slider_vertical_pane_g

0x8f8f,	// (0x000402ab) area_side_right_pane_ParamLimits

0x8f8f,	// (0x000402ab) area_side_right_pane

0xacff,	// (0x0004201b) aid_size_side_button_ParamLimits

0xacff,	// (0x0004201b) aid_size_side_button

0xad18,	// (0x00042034) grid_sctrl_middle_pane_ParamLimits

0xad18,	// (0x00042034) grid_sctrl_middle_pane

0x0c5b,	// (0x00037f77) sctrl_sk_bottom_pane

0x0c6c,	// (0x00037f88) sctrl_sk_top_pane

0x0c7e,	// (0x00037f9a) aid_touch_sctrl_top

0x0c8b,	// (0x00037fa7) bg_sctrl_sk_pane_ParamLimits

0x0c8b,	// (0x00037fa7) bg_sctrl_sk_pane

0x0c99,	// (0x00037fb5) sctrl_sk_top_pane_g1

0x0ca6,	// (0x00037fc2) sctrl_sk_top_pane_t1

0x0c7e,	// (0x00037f9a) aid_touch_sctrl_bottom

0x0c8b,	// (0x00037fa7) bg_sctrl_sk_pane_cp_ParamLimits

0x0c8b,	// (0x00037fa7) bg_sctrl_sk_pane_cp

0x0cc1,	// (0x00037fdd) sctrl_sk_bottom_pane_g1

0x0ca6,	// (0x00037fc2) sctrl_sk_bottom_pane_t1

0xad32,	// (0x0004204e) cell_sctrl_middle_pane_ParamLimits

0xad32,	// (0x0004204e) cell_sctrl_middle_pane

0xad45,	// (0x00042061) aid_touch_sctrl_middle_ParamLimits

0xad45,	// (0x00042061) aid_touch_sctrl_middle

0xad52,	// (0x0004206e) bg_sctrl_middle_pane_ParamLimits

0xad52,	// (0x0004206e) bg_sctrl_middle_pane

0x1344,	// (0x00038660) cell_sctrl_middle_pane_g1_ParamLimits

0x1344,	// (0x00038660) cell_sctrl_middle_pane_g1

0xad60,	// (0x0004207c) cell_sctrl_middle_pane_g2_ParamLimits

0xad60,	// (0x0004207c) cell_sctrl_middle_pane_g2

0x0001,

0xfd18,	// (0x00047034) cell_sctrl_middle_pane_g_ParamLimits

0xfd18,	// (0x00047034) cell_sctrl_middle_pane_g

0x241e,	// (0x0003973a) bg_sctrl_middle_pane_g1

0x2426,	// (0x00039742) bg_sctrl_middle_pane_g2

0x242e,	// (0x0003974a) bg_sctrl_middle_pane_g3

0x2436,	// (0x00039752) bg_sctrl_middle_pane_g4

0x243e,	// (0x0003975a) bg_sctrl_middle_pane_g5

0x2446,	// (0x00039762) bg_sctrl_middle_pane_g6

0x244e,	// (0x0003976a) bg_sctrl_middle_pane_g7

0x2456,	// (0x00039772) bg_sctrl_middle_pane_g8

0x0007,

0xfd1d,	// (0x00047039) bg_sctrl_middle_pane_g

0x245e,	// (0x0003977a) bg_sctrl_middle_pane_g8_copy1

0x241e,	// (0x0003973a) bg_sctrl_sk_pane_g1

0x242e,	// (0x0003974a) bg_sctrl_sk_pane_g2

0x2426,	// (0x00039742) bg_sctrl_sk_pane_g3

0x0008,

0xf867,	// (0x00046b83) bg_sctrl_sk_pane_g

0xb701,	// (0x00042a1d) aid_size_touch_scroll_bar

0x243e,	// (0x0003975a) bg_sctrl_sk_pane_g4

0x2436,	// (0x00039752) bg_sctrl_sk_pane_g5

0x2446,	// (0x00039762) bg_sctrl_sk_pane_g6

0x244e,	// (0x0003976a) bg_sctrl_sk_pane_g7

0x245e,	// (0x0003977a) bg_sctrl_sk_pane_g8

0x2456,	// (0x00039772) bg_sctrl_sk_pane_g9

0x198b,	// (0x00038ca7) popup_fep_china_hwr2_fs_candidate_window

0xa15c,	// (0x00041478) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa15c,	// (0x00041478) popup_fep_china_hwr2_fs_control_window

0x08fa,	// (0x00037c16) sctrl_sk_top_pane_g2

0x0001,

0xfd13,	// (0x0004702f) sctrl_sk_top_pane_g

0xd868,	// (0x00044b84) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd868,	// (0x00044b84) aid_fep_china_hwr2_fs_cell

0xd87e,	// (0x00044b9a) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd87e,	// (0x00044b9a) bg_popup_fep_shadow_pane_cp4

0xd895,	// (0x00044bb1) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd895,	// (0x00044bb1) bg_popup_fep_shadow_pane_cp5

0xd8a7,	// (0x00044bc3) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd8a7,	// (0x00044bc3) popup_fep_china_hwr2_fs_control_bar_grid

0xd8bb,	// (0x00044bd7) popup_fep_china_hwr2_fs_control_funtion_grid

0x61f9,	// (0x0003d515) aid_fep_china_hwr2_fs_candi_cell

0x842a,	// (0x0003f746) bg_popup_fep_shadow_pane_cp6

0x6203,	// (0x0003d51f) popup_fep_china_hwr2_fs_candidate_grid

0xd8c3,	// (0x00044bdf) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd8c3,	// (0x00044bdf) cell_fep_china_hwr2_fs_funtion_grid

0x4a47,	// (0x0003bd63) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6225,	// (0x0003d541) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6225,	// (0x0003d541) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6233,	// (0x0003d54f) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6233,	// (0x0003d54f) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2e,	// (0x0004704a) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2e,	// (0x0004704a) cell_fep_china_hwr2_fs_funtion_grid_g

0xd8db,	// (0x00044bf7) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd8db,	// (0x00044bf7) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd8f0,	// (0x00044c0c) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd8f0,	// (0x00044c0c) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd33,	// (0x0004704f) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd33,	// (0x0004704f) cell_fep_china_hwr2_fs_funtion_grid_t

0x627a,	// (0x0003d596) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6282,	// (0x0003d59e) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x628a,	// (0x0003d5a6) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd38,	// (0x00047054) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6292,	// (0x0003d5ae) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6292,	// (0x0003d5ae) cell_fep_china_hwr2_fs_candidate_grid

0x62b1,	// (0x0003d5cd) popup_fep_china_hwr2_fs_candidate_grid_g20

0x62b9,	// (0x0003d5d5) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4a47,	// (0x0003bd63) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4a47,	// (0x0003bd63) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x00046e68) cell_fep_china_hwr2_fs_candidate_grid_g

0x62c1,	// (0x0003d5dd) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1ffa,	// (0x00039316) clock_nsta_pane_cp_24_ParamLimits

0x1ffa,	// (0x00039316) clock_nsta_pane_cp_24

0x207a,	// (0x00039396) indicator_nsta_pane_cp_24_ParamLimits

0x207a,	// (0x00039396) indicator_nsta_pane_cp_24

0x30f1,	// (0x0003a40d) heading_pane_g1

0x0001,

0xf8cc,	// (0x00046be8) heading_pane_g

0x3b72,	// (0x0003ae8e) grid_sct_catagory_button_pane

0x3ba4,	// (0x0003aec0) scroll_pane_cp5_ParamLimits

0x4693,	// (0x0003b9af) button_value_adjust_pane_cp5_ParamLimits

0x4693,	// (0x0003b9af) button_value_adjust_pane_cp5

0x4778,	// (0x0003ba94) form2_midp_time_pane_ParamLimits

0x62cf,	// (0x0003d5eb) cell_sct_catagory_button_pane_ParamLimits

0x62cf,	// (0x0003d5eb) cell_sct_catagory_button_pane

0x4a0c,	// (0x0003bd28) bg_button_pane_cp01_ParamLimits

0x4a0c,	// (0x0003bd28) bg_button_pane_cp01

0x4a47,	// (0x0003bd63) cell_sct_catagory_button_pane_g1

0xa725,	// (0x00041a41) popup_tb_extension_window

0xd90c,	// (0x00044c28) aid_size_cell_ext_ParamLimits

0xd90c,	// (0x00044c28) aid_size_cell_ext

0xb543,	// (0x0004285f) bg_tb_trans_pane_cp1_ParamLimits

0xb543,	// (0x0004285f) bg_tb_trans_pane_cp1

0xd932,	// (0x00044c4e) grid_tb_ext_pane_ParamLimits

0xd932,	// (0x00044c4e) grid_tb_ext_pane

0xd972,	// (0x00044c8e) cell_tb_ext_pane_ParamLimits

0xd972,	// (0x00044c8e) cell_tb_ext_pane

0xd99a,	// (0x00044cb6) cell_tb_ext_pane_g1_ParamLimits

0xd99a,	// (0x00044cb6) cell_tb_ext_pane_g1

0x6365,	// (0x0003d681) cell_tb_ext_pane_t1

0xb2e6,	// (0x00042602) list_highlight_pane_cp11_ParamLimits

0xb2e6,	// (0x00042602) list_highlight_pane_cp11

0x903a,	// (0x00040356) popup_uni_indicator_window_ParamLimits

0x903a,	// (0x00040356) popup_uni_indicator_window

0xb7c8,	// (0x00042ae4) bg_popup_sub_pane_cp14

0x6380,	// (0x0003d69c) list_uniindi_pane

0x638c,	// (0x0003d6a8) uniindi_top_pane

0xb2e6,	// (0x00042602) bg_uniindi_top_pane

0x63ad,	// (0x0003d6c9) uniindi_top_pane_g1

0x63c3,	// (0x0003d6df) uniindi_top_pane_g2

0x0003,

0xfd3f,	// (0x0004705b) uniindi_top_pane_g

0x63ed,	// (0x0003d709) uniindi_top_pane_t1

0x6419,	// (0x0003d735) list_single_uniindi_pane_ParamLimits

0x6419,	// (0x0003d735) list_single_uniindi_pane

0x4a47,	// (0x0003bd63) bg_uniindi_top_pane_g1

0x642b,	// (0x0003d747) list_single_uniindi_pane_g1

0x643e,	// (0x0003d75a) list_single_uniindi_pane_t1

0xea7c,	// (0x00045d98) control_bg_pane

0x6463,	// (0x0003d77f) bg_sctrl_sk_pane_cp1

0x646c,	// (0x0003d788) bg_sctrl_sk_pane_cp2

0x6475,	// (0x0003d791) control_bg_pane_g1

0x647e,	// (0x0003d79a) control_bg_pane_g2

0x0001,

0xfd48,	// (0x00047064) control_bg_pane_g

0x44ba,	// (0x0003b7d6) cell_indicator_nsta_pane_g1_ParamLimits

0xc6c1,	// (0x000439dd) cell_indicator_nsta_pane_g2_ParamLimits

0xfab0,	// (0x00046dcc) cell_indicator_nsta_pane_g_ParamLimits

0xd58a,	// (0x000448a6) form2_midp_time_pane_t1_ParamLimits

0xa0d2,	// (0x000413ee) main_idle_act4_pane_ParamLimits

0xa0d2,	// (0x000413ee) main_idle_act4_pane

0xa725,	// (0x00041a41) popup_tb_extension_window_ParamLimits

0xd95a,	// (0x00044c76) tb_ext_find_pane_ParamLimits

0xd95a,	// (0x00044c76) tb_ext_find_pane

0x6487,	// (0x0003d7a3) ai_gene_pane_1_cp1

0x1698,	// (0x000389b4) ai_gene_pane_2_cp1

0x648f,	// (0x0003d7ab) list_single_idle_plugin_calendar_pane

0x6498,	// (0x0003d7b4) list_single_idle_plugin_notification_pane

0x64a1,	// (0x0003d7bd) list_single_idle_plugin_player_pane

0xd9b7,	// (0x00044cd3) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd9b7,	// (0x00044cd3) list_single_idle_plugin_shortcut_pane

0xd9df,	// (0x00044cfb) main_idle_act4_pane_t1

0xd9f7,	// (0x00044d13) main_idle_act4_pane_t2

0x0001,

0xfd4d,	// (0x00047069) main_idle_act4_pane_t

0xda0f,	// (0x00044d2b) middle_sk_idle_act4_pane_ParamLimits

0xda0f,	// (0x00044d2b) middle_sk_idle_act4_pane

0xda2b,	// (0x00044d47) popup_clock_digital_analogue_window_cp2

0xda52,	// (0x00044d6e) shortcut_wheel_idle_act4_pane_ParamLimits

0xda52,	// (0x00044d6e) shortcut_wheel_idle_act4_pane

0x4a47,	// (0x0003bd63) shortcut_wheel_idle_act4_pane_g1

0x4a47,	// (0x0003bd63) shortcut_wheel_idle_act4_pane_g2

0x4a47,	// (0x0003bd63) shortcut_wheel_idle_act4_pane_g3

0x4a47,	// (0x0003bd63) shortcut_wheel_idle_act4_pane_g4

0x4a47,	// (0x0003bd63) shortcut_wheel_idle_act4_pane_g5

0x6534,	// (0x0003d850) shortcut_wheel_idle_act4_pane_g6

0x653c,	// (0x0003d858) shortcut_wheel_idle_act4_pane_g7

0x6544,	// (0x0003d860) shortcut_wheel_idle_act4_pane_g8

0x654c,	// (0x0003d868) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd52,	// (0x0004706e) shortcut_wheel_idle_act4_pane_g

0xcdf5,	// (0x00044111) middle_sk_idle_act4_pane_g1_ParamLimits

0xcdf5,	// (0x00044111) middle_sk_idle_act4_pane_g1

0xdacf,	// (0x00044deb) middle_sk_idle_act4_pane_g2_ParamLimits

0xdacf,	// (0x00044deb) middle_sk_idle_act4_pane_g2

0x0001,

0xfd75,	// (0x00047091) middle_sk_idle_act4_pane_g_ParamLimits

0xfd75,	// (0x00047091) middle_sk_idle_act4_pane_g

0xdae7,	// (0x00044e03) middle_sk_idle_act4_pane_t1_ParamLimits

0xdae7,	// (0x00044e03) middle_sk_idle_act4_pane_t1

0xdb16,	// (0x00044e32) grid_ai_shortcut_pane_ParamLimits

0xdb16,	// (0x00044e32) grid_ai_shortcut_pane

0xdb33,	// (0x00044e4f) list_highlight_pane_cp16_ParamLimits

0xdb33,	// (0x00044e4f) list_highlight_pane_cp16

0xdb40,	// (0x00044e5c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdb40,	// (0x00044e5c) list_single_idle_plugin_shortcut_pane_g1

0xdb4c,	// (0x00044e68) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdb4c,	// (0x00044e68) list_single_idle_plugin_shortcut_pane_g2

0xdb6a,	// (0x00044e86) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdb6a,	// (0x00044e86) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7a,	// (0x00047096) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7a,	// (0x00047096) list_single_idle_plugin_shortcut_pane_g

0xdb7f,	// (0x00044e9b) cell_ai_shortcut_pane_ParamLimits

0xdb7f,	// (0x00044e9b) cell_ai_shortcut_pane

0xdb95,	// (0x00044eb1) cell_ai_shortcut_pane_g1_ParamLimits

0xdb95,	// (0x00044eb1) cell_ai_shortcut_pane_g1

0x6487,	// (0x0003d7a3) ai_gene_pane_1_cp2

0x667d,	// (0x0003d999) ai_gene_pane_2_cp2

0x6685,	// (0x0003d9a1) list_highlight_pane_cp15

0x668e,	// (0x0003d9aa) list_single_idle_plugin_calendar_pane_g1

0x6685,	// (0x0003d9a1) list_highlight_pane_cp17

0x6696,	// (0x0003d9b2) list_single_idle_plugin_calendar_pane_g1_copy1

0x669e,	// (0x0003d9ba) list_single_idle_plugin_player_pane_g1

0x3dd9,	// (0x0003b0f5) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd81,	// (0x0004709d) list_single_idle_plugin_player_pane_g

0x66a6,	// (0x0003d9c2) list_single_idle_plugin_player_pane_t1

0x66b4,	// (0x0003d9d0) list_single_idle_plugin_player_pane_t2

0x66c2,	// (0x0003d9de) list_single_idle_plugin_player_pane_t3

0x66d0,	// (0x0003d9ec) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd86,	// (0x000470a2) list_single_idle_plugin_player_pane_t

0x66de,	// (0x0003d9fa) wait_bar_pane_cp15

0x66e6,	// (0x0003da02) grid_ai_notification_pane

0x3dd9,	// (0x0003b0f5) list_single_idle_plugin_notification_pane_g1

0xdbb7,	// (0x00044ed3) cell_ai_notification_pane_ParamLimits

0xdbb7,	// (0x00044ed3) cell_ai_notification_pane

0x66fc,	// (0x0003da18) cell_ai_notification_pane_g1

0x6704,	// (0x0003da20) cell_ai_notification_pane_t1

0xdbc4,	// (0x00044ee0) tb_ext_find_button_pane

0xdbcc,	// (0x00044ee8) tb_ext_find_pane_g1

0xdbd4,	// (0x00044ef0) tb_ext_find_pane_t1

0xcfc0,	// (0x000442dc) tb_ext_find_button_pane_g1

0x6730,	// (0x0003da4c) tb_ext_find_button_pane_g2

0x0001,

0xfd8f,	// (0x000470ab) tb_ext_find_button_pane_g

0xd9df,	// (0x00044cfb) main_idle_act4_pane_t1_ParamLimits

0xd9f7,	// (0x00044d13) main_idle_act4_pane_t2_ParamLimits

0xfd4d,	// (0x00047069) main_idle_act4_pane_t_ParamLimits

0xda2b,	// (0x00044d47) popup_clock_digital_analogue_window_cp2_ParamLimits

0xda42,	// (0x00044d5e) sat_plugin_idle_act4_pane_ParamLimits

0xda42,	// (0x00044d5e) sat_plugin_idle_act4_pane

0xdbe2,	// (0x00044efe) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdbe2,	// (0x00044efe) sat_plugin_idle_act4_pane_t1

0xdbfa,	// (0x00044f16) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdbfa,	// (0x00044f16) sat_plugin_idle_act4_pane_t2

0xdc12,	// (0x00044f2e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdc12,	// (0x00044f2e) sat_plugin_idle_act4_pane_t3

0xdc2a,	// (0x00044f46) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdc2a,	// (0x00044f46) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd94,	// (0x000470b0) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd94,	// (0x000470b0) sat_plugin_idle_act4_pane_t

0xeb41,	// (0x00045e5d) popup_battery_window_ParamLimits

0xeb41,	// (0x00045e5d) popup_battery_window

0xb2e6,	// (0x00042602) bg_popup_sub_pane_cp25_ParamLimits

0xb2e6,	// (0x00042602) bg_popup_sub_pane_cp25

0x6785,	// (0x0003daa1) popup_battery_window_g1_ParamLimits

0x6785,	// (0x0003daa1) popup_battery_window_g1

0x6791,	// (0x0003daad) popup_battery_window_t1_ParamLimits

0x6791,	// (0x0003daad) popup_battery_window_t1

0x67a3,	// (0x0003dabf) popup_battery_window_t2_ParamLimits

0x67a3,	// (0x0003dabf) popup_battery_window_t2

0x0001,

0xfd9d,	// (0x000470b9) popup_battery_window_t_ParamLimits

0xfd9d,	// (0x000470b9) popup_battery_window_t

0x9e61,	// (0x0004117d) midp_canvas_pane_ParamLimits

0x9ebc,	// (0x000411d8) midp_keypad_pane_ParamLimits

0x9ebc,	// (0x000411d8) midp_keypad_pane

0x18dd,	// (0x00038bf9) main_midp_pane_ParamLimits

0x4546,	// (0x0003b862) signal_pane_g2_cp_ParamLimits

0xdc42,	// (0x00044f5e) aid_size_cell_midp_keypad_ParamLimits

0xdc42,	// (0x00044f5e) aid_size_cell_midp_keypad

0xdc60,	// (0x00044f7c) midp_keyp_game_grid_pane_ParamLimits

0xdc60,	// (0x00044f7c) midp_keyp_game_grid_pane

0xdc87,	// (0x00044fa3) midp_keyp_rocker_pane_ParamLimits

0xdc87,	// (0x00044fa3) midp_keyp_rocker_pane

0xdcc6,	// (0x00044fe2) midp_keyp_sk_left_pane_ParamLimits

0xdcc6,	// (0x00044fe2) midp_keyp_sk_left_pane

0xdd1a,	// (0x00045036) midp_keyp_sk_right_pane_ParamLimits

0xdd1a,	// (0x00045036) midp_keyp_sk_right_pane

0x842a,	// (0x0003f746) bg_button_pane_cp03

0xdd6e,	// (0x0004508a) midp_keyp_sk_left_pane_g1

0x842a,	// (0x0003f746) bg_button_pane_cp04

0xdd6e,	// (0x0004508a) midp_keyp_sk_right_pane_g1

0x4a47,	// (0x0003bd63) midp_keyp_rocker_pane_g1

0xdd77,	// (0x00045093) keyp_game_cell_pane_ParamLimits

0xdd77,	// (0x00045093) keyp_game_cell_pane

0x842a,	// (0x0003f746) bg_button_pane_cp02

0xdd9d,	// (0x000450b9) keyp_game_cell_pane_g1

0x8fd1,	// (0x000402ed) popup_fep_vkb2_window_ParamLimits

0x8fd1,	// (0x000402ed) popup_fep_vkb2_window

0xad6c,	// (0x00042088) aid_size_cell_vkb2_ParamLimits

0xad6c,	// (0x00042088) aid_size_cell_vkb2

0xada2,	// (0x000420be) popup_fep_vkb2_window_g1_ParamLimits

0xada2,	// (0x000420be) popup_fep_vkb2_window_g1

0xadf2,	// (0x0004210e) vkb2_area_bottom_pane_ParamLimits

0xadf2,	// (0x0004210e) vkb2_area_bottom_pane

0xae4e,	// (0x0004216a) vkb2_area_keypad_pane_ParamLimits

0xae4e,	// (0x0004216a) vkb2_area_keypad_pane

0xae9c,	// (0x000421b8) vkb2_area_top_pane_ParamLimits

0xae9c,	// (0x000421b8) vkb2_area_top_pane

0xaf22,	// (0x0004223e) vkb2_top_entry_pane_ParamLimits

0xaf22,	// (0x0004223e) vkb2_top_entry_pane

0xaf4f,	// (0x0004226b) vkb2_top_grid_left_pane_ParamLimits

0xaf4f,	// (0x0004226b) vkb2_top_grid_left_pane

0xaf6f,	// (0x0004228b) vkb2_top_grid_right_pane_ParamLimits

0xaf6f,	// (0x0004228b) vkb2_top_grid_right_pane

0x0f3b,	// (0x00038257) vkb2_cell_keypad_pane_ParamLimits

0x0f3b,	// (0x00038257) vkb2_cell_keypad_pane

0xafb5,	// (0x000422d1) vkb2_area_bottom_grid_pane_ParamLimits

0xafb5,	// (0x000422d1) vkb2_area_bottom_grid_pane

0xafdf,	// (0x000422fb) vkb2_area_bottom_pane_g1_ParamLimits

0xafdf,	// (0x000422fb) vkb2_area_bottom_pane_g1

0xb005,	// (0x00042321) vkb2_area_bottom_pane_g2_ParamLimits

0xb005,	// (0x00042321) vkb2_area_bottom_pane_g2

0xb036,	// (0x00042352) vkb2_area_bottom_pane_g3_ParamLimits

0xb036,	// (0x00042352) vkb2_area_bottom_pane_g3

0x0002,

0xfda2,	// (0x000470be) vkb2_area_bottom_pane_g_ParamLimits

0xfda2,	// (0x000470be) vkb2_area_bottom_pane_g

0x10e5,	// (0x00038401) vkb2_top_cell_left_pane_ParamLimits

0x10e5,	// (0x00038401) vkb2_top_cell_left_pane

0xdda6,	// (0x000450c2) vkb2_top_entry_pane_g1_ParamLimits

0xdda6,	// (0x000450c2) vkb2_top_entry_pane_g1

0xddb4,	// (0x000450d0) vkb2_top_entry_pane_t1_ParamLimits

0xddb4,	// (0x000450d0) vkb2_top_entry_pane_t1

0x6946,	// (0x0003dc62) vkb2_top_entry_pane_t2_ParamLimits

0x6946,	// (0x0003dc62) vkb2_top_entry_pane_t2

0x6978,	// (0x0003dc94) vkb2_top_entry_pane_t3_ParamLimits

0x6978,	// (0x0003dc94) vkb2_top_entry_pane_t3

0x0002,

0xfda9,	// (0x000470c5) vkb2_top_entry_pane_t_ParamLimits

0xfda9,	// (0x000470c5) vkb2_top_entry_pane_t

0xb0a0,	// (0x000423bc) vkb2_top_grid_right_pane_g1_ParamLimits

0xb0a0,	// (0x000423bc) vkb2_top_grid_right_pane_g1

0x1148,	// (0x00038464) vkb2_top_grid_right_pane_g2_ParamLimits

0x1148,	// (0x00038464) vkb2_top_grid_right_pane_g2

0x1160,	// (0x0003847c) vkb2_top_grid_right_pane_g3_ParamLimits

0x1160,	// (0x0003847c) vkb2_top_grid_right_pane_g3

0xb0b6,	// (0x000423d2) vkb2_top_grid_right_pane_g4_ParamLimits

0xb0b6,	// (0x000423d2) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb0,	// (0x000470cc) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb0,	// (0x000470cc) vkb2_top_grid_right_pane_g

0x118e,	// (0x000384aa) vkb2_top_cell_left_pane_g1

0x11a5,	// (0x000384c1) vkb2_cell_keypad_pane_g1_ParamLimits

0x11a5,	// (0x000384c1) vkb2_cell_keypad_pane_g1

0x699c,	// (0x0003dcb8) vkb2_cell_keypad_pane_t1_ParamLimits

0x699c,	// (0x0003dcb8) vkb2_cell_keypad_pane_t1

0x11b3,	// (0x000384cf) vkb2_cell_bottom_grid_pane_ParamLimits

0x11b3,	// (0x000384cf) vkb2_cell_bottom_grid_pane

0x11ec,	// (0x00038508) vkb2_cell_bottom_grid_pane_g1

0xda73,	// (0x00044d8f) aid_call2_pane_cp02

0xda7b,	// (0x00044d97) aid_call_pane_cp02

0xda83,	// (0x00044d9f) clock_digital_number_pane_cp10

0xda8b,	// (0x00044da7) clock_digital_number_pane_cp11

0xda93,	// (0x00044daf) clock_digital_number_pane_cp12

0xda9b,	// (0x00044db7) clock_digital_number_pane_cp13

0xdaa3,	// (0x00044dbf) clock_digital_separator_pane_cp10

0xcfc0,	// (0x000442dc) popup_clock_digital_analogue_window_cp2_g1

0xcfc0,	// (0x000442dc) popup_clock_digital_analogue_window_cp2_g2

0xdaab,	// (0x00044dc7) popup_clock_digital_analogue_window_cp2_g3

0xcfc0,	// (0x000442dc) popup_clock_digital_analogue_window_cp2_g4

0xdaab,	// (0x00044dc7) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd65,	// (0x00047081) popup_clock_digital_analogue_window_cp2_g

0xdab3,	// (0x00044dcf) popup_clock_digital_analogue_window_cp2_t1

0xdac1,	// (0x00044ddd) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd70,	// (0x0004708c) popup_clock_digital_analogue_window_cp2_t

0x4a47,	// (0x0003bd63) clock_digital_number_pane_cp10_g1

0x4a47,	// (0x0003bd63) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x00046e68) clock_digital_number_pane_cp10_g

0x4a47,	// (0x0003bd63) clock_digital_separator_pane_cp10_g1

0x4a47,	// (0x0003bd63) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x00046e68) clock_digital_separator_pane_cp10_g

0x63cf,	// (0x0003d6eb) uniindi_top_pane_g3

0x63e0,	// (0x0003d6fc) uniindi_top_pane_g4

0x0fc6,	// (0x000382e2) vkb2_row_keypad_pane_ParamLimits

0x0fc6,	// (0x000382e2) vkb2_row_keypad_pane

0x1208,	// (0x00038524) vkb2_cell_t_keypad_pane_ParamLimits

0x1208,	// (0x00038524) vkb2_cell_t_keypad_pane

0x1218,	// (0x00038534) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1218,	// (0x00038534) vkb2_cell_t_keypad_pane_cp08

0x122d,	// (0x00038549) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x122d,	// (0x00038549) vkb2_cell_t_keypad_pane_cp09

0x1241,	// (0x0003855d) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1241,	// (0x0003855d) vkb2_cell_t_keypad_pane_cp01

0x1252,	// (0x0003856e) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1252,	// (0x0003856e) vkb2_cell_t_keypad_pane_cp02

0x1263,	// (0x0003857f) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1263,	// (0x0003857f) vkb2_cell_t_keypad_pane_cp03

0x1274,	// (0x00038590) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1274,	// (0x00038590) vkb2_cell_t_keypad_pane_cp04

0x1285,	// (0x000385a1) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1285,	// (0x000385a1) vkb2_cell_t_keypad_pane_cp05

0x1296,	// (0x000385b2) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1296,	// (0x000385b2) vkb2_cell_t_keypad_pane_cp06

0x12a9,	// (0x000385c5) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x12a9,	// (0x000385c5) vkb2_cell_t_keypad_pane_cp07

0x12be,	// (0x000385da) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x12be,	// (0x000385da) vkb2_cell_t_keypad_pane_cp10

0x08fa,	// (0x00037c16) vkb2_cell_t_keypad_pane_g1

0x69b3,	// (0x0003dccf) vkb2_cell_t_keypad_pane_t1

0xea7c,	// (0x00045d98) popup_grid_graphic2_window

0xdded,	// (0x00045109) aid_size_cell_graphic2_ParamLimits

0xdded,	// (0x00045109) aid_size_cell_graphic2

0xde2b,	// (0x00045147) bg_popup_window_pane_cp21_ParamLimits

0xde2b,	// (0x00045147) bg_popup_window_pane_cp21

0xde39,	// (0x00045155) graphic2_pages_pane_ParamLimits

0xde39,	// (0x00045155) graphic2_pages_pane

0xde91,	// (0x000451ad) grid_graphic2_control_pane_ParamLimits

0xde91,	// (0x000451ad) grid_graphic2_control_pane

0xded9,	// (0x000451f5) grid_graphic2_pane_ParamLimits

0xded9,	// (0x000451f5) grid_graphic2_pane

0xdf64,	// (0x00045280) cell_graphic2_pane

0x842a,	// (0x0003f746) main_comp_mode_pane

0x5c40,	// (0x0003cf5c) list_ai3_gene_pane_ParamLimits

0xd7b0,	// (0x00044acc) bg_popup_window_pane_cp19_ParamLimits

0x6014,	// (0x0003d330) bg_touch_area_indi_pane_ParamLimits

0x6014,	// (0x0003d330) bg_touch_area_indi_pane

0x602a,	// (0x0003d346) bg_touch_area_indi_pane_cp01_ParamLimits

0x602a,	// (0x0003d346) bg_touch_area_indi_pane_cp01

0x6042,	// (0x0003d35e) bg_touch_area_indi_pane_cp02_ParamLimits

0x6042,	// (0x0003d35e) bg_touch_area_indi_pane_cp02

0x605c,	// (0x0003d378) bg_touch_area_indi_pane_cp03_ParamLimits

0x605c,	// (0x0003d378) bg_touch_area_indi_pane_cp03

0x6076,	// (0x0003d392) popup_slider_window_g1_ParamLimits

0x6092,	// (0x0003d3ae) popup_slider_window_g2_ParamLimits

0x60ae,	// (0x0003d3ca) popup_slider_window_g3_ParamLimits

0xfcfa,	// (0x00047016) popup_slider_window_g_ParamLimits

0x610a,	// (0x0003d426) popup_slider_window_t1_ParamLimits

0x617e,	// (0x0003d49a) small_volume_slider_vertical_pane_ParamLimits

0xdf64,	// (0x00045280) cell_graphic2_pane_ParamLimits

0xdfc7,	// (0x000452e3) bg_button_pane_cp10_ParamLimits

0xdfc7,	// (0x000452e3) bg_button_pane_cp10

0xdfda,	// (0x000452f6) bg_button_pane_cp11_ParamLimits

0xdfda,	// (0x000452f6) bg_button_pane_cp11

0xdfed,	// (0x00045309) graphic2_pages_pane_g1_ParamLimits

0xdfed,	// (0x00045309) graphic2_pages_pane_g1

0xe008,	// (0x00045324) graphic2_pages_pane_g2_ParamLimits

0xe008,	// (0x00045324) graphic2_pages_pane_g2

0x0001,

0xfdbe,	// (0x000470da) graphic2_pages_pane_g_ParamLimits

0xfdbe,	// (0x000470da) graphic2_pages_pane_g

0xe020,	// (0x0004533c) graphic2_pages_pane_t1_ParamLimits

0xe020,	// (0x0004533c) graphic2_pages_pane_t1

0xe038,	// (0x00045354) cell_graphic2_control_pane_ParamLimits

0xe038,	// (0x00045354) cell_graphic2_control_pane

0xe06c,	// (0x00045388) cell_graphic2_pane_g1_ParamLimits

0xe06c,	// (0x00045388) cell_graphic2_pane_g1

0xce03,	// (0x0004411f) cell_graphic2_pane_g2_ParamLimits

0xce03,	// (0x0004411f) cell_graphic2_pane_g2

0xc87d,	// (0x00043b99) cell_graphic2_pane_g3_ParamLimits

0xc87d,	// (0x00043b99) cell_graphic2_pane_g3

0xce10,	// (0x0004412c) cell_graphic2_pane_g4_ParamLimits

0xce10,	// (0x0004412c) cell_graphic2_pane_g4

0xe079,	// (0x00045395) cell_graphic2_pane_g5_ParamLimits

0xe079,	// (0x00045395) cell_graphic2_pane_g5

0x0004,

0xfdc3,	// (0x000470df) cell_graphic2_pane_g_ParamLimits

0xfdc3,	// (0x000470df) cell_graphic2_pane_g

0xe099,	// (0x000453b5) cell_graphic2_pane_t1_ParamLimits

0xe099,	// (0x000453b5) cell_graphic2_pane_t1

0x30e5,	// (0x0003a401) grid_highlight_pane_cp11_ParamLimits

0x30e5,	// (0x0003a401) grid_highlight_pane_cp11

0xb2e6,	// (0x00042602) bg_button_pane_cp05

0xe0ce,	// (0x000453ea) cell_graphic2_control_pane_g1

0x4a47,	// (0x0003bd63) bg_touch_area_indi_pane_g1

0x6cf0,	// (0x0003e00c) aid_cmod_rocker_key_size

0x6cfa,	// (0x0003e016) aid_cmode_itu_key_size

0x6d04,	// (0x0003e020) main_cmode_video_pane

0x6d0e,	// (0x0003e02a) main_comp_mode_itu_pane

0x6d1a,	// (0x0003e036) main_comp_mode_rocker_pane

0x6d26,	// (0x0003e042) cell_cmode_rocker_pane_ParamLimits

0x6d26,	// (0x0003e042) cell_cmode_rocker_pane

0x6d3a,	// (0x0003e056) cell_cmode_itu_pane_ParamLimits

0x6d3a,	// (0x0003e056) cell_cmode_itu_pane

0xb7c8,	// (0x00042ae4) bg_button_pane_cp06_ParamLimits

0xb7c8,	// (0x00042ae4) bg_button_pane_cp06

0x4cc2,	// (0x0003bfde) cell_cmode_rocker_pane_g1_ParamLimits

0x4cc2,	// (0x0003bfde) cell_cmode_rocker_pane_g1

0x6225,	// (0x0003d541) cell_cmode_rocker_pane_g2_ParamLimits

0x6225,	// (0x0003d541) cell_cmode_rocker_pane_g2

0x0001,

0xfdd3,	// (0x000470ef) cell_cmode_rocker_pane_g_ParamLimits

0xfdd3,	// (0x000470ef) cell_cmode_rocker_pane_g

0x842a,	// (0x0003f746) bg_button_pane_cp07

0x6d51,	// (0x0003e06d) cell_cmode_itu_pane_g1

0x6d5a,	// (0x0003e076) cell_cmode_itu_pane_t1

0x6d68,	// (0x0003e084) cell_cmode_itu_pane_t2

0x0001,

0xfdd8,	// (0x000470f4) cell_cmode_itu_pane_t

0x6453,	// (0x0003d76f) aid_touch_ctrl_left

0x645b,	// (0x0003d777) aid_touch_ctrl_right

0x842a,	// (0x0003f746) compa_mode_pane

0xe0f4,	// (0x00045410) aid_cmod_rocker_key_size_cp

0xe0fe,	// (0x0004541a) aid_cmode_itu_key_size_cp

0x6d8a,	// (0x0003e0a6) compa_mode_pane_g1

0x6d92,	// (0x0003e0ae) compa_mode_pane_g2

0x6d9a,	// (0x0003e0b6) compa_mode_pane_g3

0x0002,

0xfddd,	// (0x000470f9) compa_mode_pane_g

0xe108,	// (0x00045424) main_comp_mode_itu_pane_cp

0xe110,	// (0x0004542c) main_comp_mode_rocker_pane_cp

0xe118,	// (0x00045434) cell_cmode_itu_pane_cp_ParamLimits

0xe118,	// (0x00045434) cell_cmode_itu_pane_cp

0xe12d,	// (0x00045449) cell_cmode_rocker_pane_cp_ParamLimits

0xe12d,	// (0x00045449) cell_cmode_rocker_pane_cp

0xb7c8,	// (0x00042ae4) bg_button_pane_cp06_cp_ParamLimits

0xb7c8,	// (0x00042ae4) bg_button_pane_cp06_cp

0x4cc2,	// (0x0003bfde) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4cc2,	// (0x0003bfde) cell_cmode_rocker_pane_g1_cp

0x4a47,	// (0x0003bd63) cell_cmode_rocker_pane_g2_cp

0x842a,	// (0x0003f746) bg_button_pane_cp07_cp

0xe13f,	// (0x0004545b) cell_cmode_itu_pane_g1_cp

0xe148,	// (0x00045464) cell_cmode_itu_pane_t1_cp

0xe148,	// (0x00045464) cell_cmode_itu_pane_t2_cp

0xc4ef,	// (0x0004380b) settings_code_pane_cp2

0x8498,	// (0x0003f7b4) bg_popup_window_pane_cp3_ParamLimits

0xb4d4,	// (0x000427f0) heading_pane_cp3_ParamLimits

0xb4e0,	// (0x000427fc) listscroll_popup_graphic_pane_ParamLimits

0x068d,	// (0x000379a9) fep_hwr_aid_pane_ParamLimits

0x0c7e,	// (0x00037f9a) aid_touch_sctrl_top_ParamLimits

0x0c99,	// (0x00037fb5) sctrl_sk_top_pane_g1_ParamLimits

0x08fa,	// (0x00037c16) sctrl_sk_top_pane_g2_ParamLimits

0xfd13,	// (0x0004702f) sctrl_sk_top_pane_g_ParamLimits

0x0ca6,	// (0x00037fc2) sctrl_sk_top_pane_t1_ParamLimits

0x0c7e,	// (0x00037f9a) aid_touch_sctrl_bottom_ParamLimits

0x0ca6,	// (0x00037fc2) sctrl_sk_bottom_pane_t1_ParamLimits

0x6399,	// (0x0003d6b5) aid_area_touch_clock

0xaee4,	// (0x00042200) aid_vkb2_area_top_pane_cell_ParamLimits

0xaee4,	// (0x00042200) aid_vkb2_area_top_pane_cell

0xaf8f,	// (0x000422ab) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xaf8f,	// (0x000422ab) aid_vkb2_area_bottom_pane_cell

0x68fe,	// (0x0003dc1a) popup_char_count_window

0x6df0,	// (0x0003e10c) popup_char_count_window_g1

0x6df9,	// (0x0003e115) popup_char_count_window_g2

0x6e02,	// (0x0003e11e) popup_char_count_window_g3

0x0002,

0xfde4,	// (0x00047100) popup_char_count_window_g

0x6e0b,	// (0x0003e127) popup_char_count_window_t1

0x0d57,	// (0x00038073) popup_fep_char_preview_window_ParamLimits

0x0d57,	// (0x00038073) popup_fep_char_preview_window

0xaf04,	// (0x00042220) vkb2_top_candi_pane_ParamLimits

0xaf04,	// (0x00042220) vkb2_top_candi_pane

0xe156,	// (0x00045472) cell_vkb2_top_candi_pane_ParamLimits

0xe156,	// (0x00045472) cell_vkb2_top_candi_pane

0x12d3,	// (0x000385ef) bg_popup_fep_char_preview_window_ParamLimits

0x12d3,	// (0x000385ef) bg_popup_fep_char_preview_window

0x12e1,	// (0x000385fd) popup_fep_char_preview_window_t1_ParamLimits

0x12e1,	// (0x000385fd) popup_fep_char_preview_window_t1

0x6e6a,	// (0x0003e186) bg_popup_fep_char_preview_window_g1

0x6e72,	// (0x0003e18e) bg_popup_fep_char_preview_window_g2

0x6e7a,	// (0x0003e196) bg_popup_fep_char_preview_window_g3

0x6e82,	// (0x0003e19e) bg_popup_fep_char_preview_window_g4

0x6e8a,	// (0x0003e1a6) bg_popup_fep_char_preview_window_g5

0x131b,	// (0x00038637) bg_popup_fep_char_preview_window_g6

0x6e92,	// (0x0003e1ae) bg_popup_fep_char_preview_window_g7

0x6e9a,	// (0x0003e1b6) bg_popup_fep_char_preview_window_g8

0x6ea2,	// (0x0003e1be) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdeb,	// (0x00047107) bg_popup_fep_char_preview_window_g

0x08fa,	// (0x00037c16) cell_vkb2_top_candi_pane_g1_ParamLimits

0x08fa,	// (0x00037c16) cell_vkb2_top_candi_pane_g1

0x0908,	// (0x00037c24) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0908,	// (0x00037c24) cell_vkb2_top_candi_pane_g2

0x6a3f,	// (0x0003dd5b) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6a3f,	// (0x0003dd5b) cell_vkb2_top_candi_pane_g3

0x1323,	// (0x0003863f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1323,	// (0x0003863f) cell_vkb2_top_candi_pane_g4

0x51e1,	// (0x0003c4fd) cell_vkb2_top_candi_pane_g5_ParamLimits

0x51e1,	// (0x0003c4fd) cell_vkb2_top_candi_pane_g5

0x1344,	// (0x00038660) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1344,	// (0x00038660) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfe,	// (0x0004711a) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfe,	// (0x0004711a) cell_vkb2_top_candi_pane_g

0x1352,	// (0x0003866e) cell_vkb2_top_candi_pane_t1

0x0464,	// (0x00037780) aid_size_touch_slider_mark_ParamLimits

0x0464,	// (0x00037780) aid_size_touch_slider_mark

0xde75,	// (0x00045191) grid_graphic2_catg_pane_ParamLimits

0xde75,	// (0x00045191) grid_graphic2_catg_pane

0xdf33,	// (0x0004524f) popup_grid_graphic2_window_t1_ParamLimits

0xdf33,	// (0x0004524f) popup_grid_graphic2_window_t1

0xdf49,	// (0x00045265) popup_grid_graphic2_window_t2_ParamLimits

0xdf49,	// (0x00045265) popup_grid_graphic2_window_t2

0x0001,

0xfdb9,	// (0x000470d5) popup_grid_graphic2_window_t_ParamLimits

0xfdb9,	// (0x000470d5) popup_grid_graphic2_window_t

0xb2e6,	// (0x00042602) bg_button_pane_cp05_ParamLimits

0xe0ce,	// (0x000453ea) cell_graphic2_control_pane_g1_ParamLimits

0xe1c0,	// (0x000454dc) cell_graphic2_catg_pane_ParamLimits

0xe1c0,	// (0x000454dc) cell_graphic2_catg_pane

0x842a,	// (0x0003f746) bg_button_pane_cp12

0xe1d2,	// (0x000454ee) cell_graphic2_catg_pane_g1

0x6365,	// (0x0003d681) cell_tb_ext_pane_t1_ParamLimits

0x1105,	// (0x00038421) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1105,	// (0x00038421) vkb2_top_cell_right_narrow_pane

0x111d,	// (0x00038439) vkb2_top_cell_right_wide_pane_ParamLimits

0x111d,	// (0x00038439) vkb2_top_cell_right_wide_pane

0x067f,	// (0x0003799b) bg_vkb2_func_pane_ParamLimits

0x067f,	// (0x0003799b) bg_vkb2_func_pane

0x118e,	// (0x000384aa) vkb2_top_cell_left_pane_g1_ParamLimits

0x067f,	// (0x0003799b) bg_vkb2_fuc_pane_cp03_ParamLimits

0x067f,	// (0x0003799b) bg_vkb2_fuc_pane_cp03

0x11ec,	// (0x00038508) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2426,	// (0x00039742) bg_vkb2_func_pane_g1

0x242e,	// (0x0003974a) bg_vkb2_func_pane_g2

0x243e,	// (0x0003975a) bg_vkb2_func_pane_g3

0x2436,	// (0x00039752) bg_vkb2_func_pane_g4

0x2446,	// (0x00039762) bg_vkb2_func_pane_g5

0x244e,	// (0x0003976a) bg_vkb2_func_pane_g6

0x2456,	// (0x00039772) bg_vkb2_func_pane_g7

0x245e,	// (0x0003977a) bg_vkb2_func_pane_g8

0x241e,	// (0x0003973a) bg_vkb2_func_pane_g9

0x0008,

0xfe0b,	// (0x00047127) bg_vkb2_func_pane_g

0x067f,	// (0x0003799b) bg_vkb2_fuc_pane_cp01_ParamLimits

0x067f,	// (0x0003799b) bg_vkb2_fuc_pane_cp01

0x118e,	// (0x000384aa) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x118e,	// (0x000384aa) vkb2_top_cell_right_wide_pane_g1

0x067f,	// (0x0003799b) bg_vkb2_fuc_pane_cp02_ParamLimits

0x067f,	// (0x0003799b) bg_vkb2_fuc_pane_cp02

0x11ec,	// (0x00038508) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x11ec,	// (0x00038508) vkb2_top_cell_right_narrow_pane_g1

0xd6ea,	// (0x00044a06) aid_touch_area_decrease_ParamLimits

0xd6ea,	// (0x00044a06) aid_touch_area_decrease

0xd724,	// (0x00044a40) aid_touch_area_increase_ParamLimits

0xd724,	// (0x00044a40) aid_touch_area_increase

0xd74c,	// (0x00044a68) aid_touch_area_mute_ParamLimits

0xd74c,	// (0x00044a68) aid_touch_area_mute

0xd77c,	// (0x00044a98) aid_touch_area_slider_ParamLimits

0xd77c,	// (0x00044a98) aid_touch_area_slider

0xd7bc,	// (0x00044ad8) popup_slider_window_g4_ParamLimits

0xd7bc,	// (0x00044ad8) popup_slider_window_g4

0xd7e4,	// (0x00044b00) popup_slider_window_g5_ParamLimits

0xd7e4,	// (0x00044b00) popup_slider_window_g5

0xd818,	// (0x00044b34) popup_slider_window_g6_ParamLimits

0xd818,	// (0x00044b34) popup_slider_window_g6

0x6138,	// (0x0003d454) popup_slider_window_t2_ParamLimits

0x6138,	// (0x0003d454) popup_slider_window_t2

0x0001,

0xfd07,	// (0x00047023) popup_slider_window_t_ParamLimits

0xfd07,	// (0x00047023) popup_slider_window_t

0xd834,	// (0x00044b50) slider_pane_ParamLimits

0xd834,	// (0x00044b50) slider_pane

0x6ec5,	// (0x0003e1e1) slider_pane_g1_ParamLimits

0x6ec5,	// (0x0003e1e1) slider_pane_g1

0x6ed9,	// (0x0003e1f5) slider_pane_g2_ParamLimits

0x6ed9,	// (0x0003e1f5) slider_pane_g2

0x6eef,	// (0x0003e20b) slider_pane_g3_ParamLimits

0x6eef,	// (0x0003e20b) slider_pane_g3

0x0003,

0xfe1e,	// (0x0004713a) slider_pane_g_ParamLimits

0xfe1e,	// (0x0004713a) slider_pane_g

0xa771,	// (0x00041a8d) popup_tb_float_extension_window_ParamLimits

0xa771,	// (0x00041a8d) popup_tb_float_extension_window

0x6f1b,	// (0x0003e237) aid_size_cell_tb_float_ext

0x842a,	// (0x0003f746) bg_popup_sub_window_cp28

0x6f27,	// (0x0003e243) grid_tb_float_ext_pane

0x6f33,	// (0x0003e24f) cell_tb_float_ext_pane_ParamLimits

0x6f33,	// (0x0003e24f) cell_tb_float_ext_pane

0x6f4f,	// (0x0003e26b) cell_tb_float_ext_pane_g1

0x6f58,	// (0x0003e274) grid_highlight_pane_cp12

0xab00,	// (0x00041e1c) cell_last_hwr_side_pane_ParamLimits

0xab00,	// (0x00041e1c) cell_last_hwr_side_pane

0x4a47,	// (0x0003bd63) cell_last_hwr_side_pane_g1

0x6f61,	// (0x0003e27d) cell_last_hwr_side_pane_g2

0x0001,

0xfe27,	// (0x00047143) cell_last_hwr_side_pane_g

0xb06b,	// (0x00042387) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb06b,	// (0x00042387) vkb2_area_bottom_space_btn_pane

0x08fa,	// (0x00037c16) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x69b3,	// (0x0003dccf) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1352,	// (0x0003866e) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1370,	// (0x0003868c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1370,	// (0x0003868c) vkb2_area_bottom_space_btn_pane_g1

0x13aa,	// (0x000386c6) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x13aa,	// (0x000386c6) vkb2_area_bottom_space_btn_pane_g2

0x13e0,	// (0x000386fc) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x13e0,	// (0x000386fc) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2c,	// (0x00047148) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2c,	// (0x00047148) vkb2_area_bottom_space_btn_pane_g

0x0744,	// (0x00037a60) cel_fep_hwr_func_pane_ParamLimits

0x0744,	// (0x00037a60) cel_fep_hwr_func_pane

0xaad5,	// (0x00041df1) cell_hwr_side_button_pane_ParamLimits

0xaad5,	// (0x00041df1) cell_hwr_side_button_pane

0x6399,	// (0x0003d6b5) aid_area_touch_clock_ParamLimits

0xb2e6,	// (0x00042602) bg_uniindi_top_pane_ParamLimits

0x63ad,	// (0x0003d6c9) uniindi_top_pane_g1_ParamLimits

0x63c3,	// (0x0003d6df) uniindi_top_pane_g2_ParamLimits

0x63cf,	// (0x0003d6eb) uniindi_top_pane_g3_ParamLimits

0x63e0,	// (0x0003d6fc) uniindi_top_pane_g4_ParamLimits

0xfd3f,	// (0x0004705b) uniindi_top_pane_g_ParamLimits

0x63ed,	// (0x0003d709) uniindi_top_pane_t1_ParamLimits

0xb2e6,	// (0x00042602) bg_vkb2_func_pane_cp01_ParamLimits

0xb2e6,	// (0x00042602) bg_vkb2_func_pane_cp01

0x6f6a,	// (0x0003e286) cel_fep_hwr_func_pane_g1_ParamLimits

0x6f6a,	// (0x0003e286) cel_fep_hwr_func_pane_g1

0xb2e6,	// (0x00042602) bg_vkb2_func_pane_cp02_ParamLimits

0xb2e6,	// (0x00042602) bg_vkb2_func_pane_cp02

0x6f6a,	// (0x0003e286) cell_hwr_side_button_pane_g1_ParamLimits

0x6f6a,	// (0x0003e286) cell_hwr_side_button_pane_g1

0x229f,	// (0x000395bb) status_pane_g4_ParamLimits

0x229f,	// (0x000395bb) status_pane_g4

0x22b9,	// (0x000395d5) status_pane_t1

0x47e6,	// (0x0003bb02) form2_midp_gauge_slider_cont_pane

0x47ee,	// (0x0003bb0a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc7c3,	// (0x00043adf) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc7d5,	// (0x00043af1) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x00046e1b) form2_midp_gauge_slider_pane_t_ParamLimits

0x4824,	// (0x0003bb40) form2_midp_slider_pane_ParamLimits

0x0d17,	// (0x00038033) aid_size_cell_func_vkb2_ParamLimits

0x0d17,	// (0x00038033) aid_size_cell_func_vkb2

0x6f07,	// (0x0003e223) slider_pane_g4_ParamLimits

0x6f07,	// (0x0003e223) slider_pane_g4

0xb0cc,	// (0x000423e8) form2_midp_gauge_slider_pane_t2_cp01

0xb0da,	// (0x000423f6) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb0da,	// (0x000423f6) form2_midp_gauge_slider_pane_t3_cp01

0x1455,	// (0x00038771) form2_midp_slider_pane_cp01

0x842a,	// (0x0003f746) navi_smil_pane

0x6fa3,	// (0x0003e2bf) navi_smil_pane_g1

0x6fab,	// (0x0003e2c7) navi_smil_pane_t1

0x6f78,	// (0x0003e294) form2_midp_slider_pane_g1

0x6f81,	// (0x0003e29d) form2_midp_slider_pane_g2

0x6f89,	// (0x0003e2a5) form2_midp_slider_pane_g3

0x6f78,	// (0x0003e294) form2_midp_slider_pane_g4

0xe1db,	// (0x000454f7) form2_midp_slider_pane_g5

0x0004,

0xfe35,	// (0x00047151) form2_midp_slider_pane_g

0x141a,	// (0x00038736) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x141a,	// (0x00038736) vkb2_area_bottom_space_btn_pane_g4

0xbd90,	// (0x000430ac) lc0_navi_pane_ParamLimits

0xbd90,	// (0x000430ac) lc0_navi_pane

0xbe00,	// (0x0004311c) lc0_stat_indi_pane_ParamLimits

0xbe00,	// (0x0004311c) lc0_stat_indi_pane

0xbe15,	// (0x00043131) ls0_title_pane_ParamLimits

0xbe15,	// (0x00043131) ls0_title_pane

0xb7c8,	// (0x00042ae4) bg_popup_sub_pane_cp14_ParamLimits

0x6380,	// (0x0003d69c) list_uniindi_pane_ParamLimits

0x638c,	// (0x0003d6a8) uniindi_top_pane_ParamLimits

0x642b,	// (0x0003d747) list_single_uniindi_pane_g1_ParamLimits

0x643e,	// (0x0003d75a) list_single_uniindi_pane_t1_ParamLimits

0xb0f7,	// (0x00042413) lc0_stat_clock_pane_ParamLimits

0xb0f7,	// (0x00042413) lc0_stat_clock_pane

0xe1e4,	// (0x00045500) lc0_stat_indi_pane_g1_ParamLimits

0xe1e4,	// (0x00045500) lc0_stat_indi_pane_g1

0xe1f1,	// (0x0004550d) lc0_stat_indi_pane_g2_ParamLimits

0xe1f1,	// (0x0004550d) lc0_stat_indi_pane_g2

0x0001,

0xfe40,	// (0x0004715c) lc0_stat_indi_pane_g_ParamLimits

0xfe40,	// (0x0004715c) lc0_stat_indi_pane_g

0xb104,	// (0x00042420) lc0_uni_indicator_pane_ParamLimits

0xb104,	// (0x00042420) lc0_uni_indicator_pane

0xe1fe,	// (0x0004551a) ls0_title_pane_g1_ParamLimits

0xe1fe,	// (0x0004551a) ls0_title_pane_g1

0xe212,	// (0x0004552e) ls0_title_pane_t1_ParamLimits

0xe212,	// (0x0004552e) ls0_title_pane_t1

0xb111,	// (0x0004242d) lc0_uni_indicator_pane_g1_ParamLimits

0xb111,	// (0x0004242d) lc0_uni_indicator_pane_g1

0x701d,	// (0x0003e339) lc0_stat_clock_pane_t1

0x842a,	// (0x0003f746) main_ai5_pane

0x702b,	// (0x0003e347) ai5_sk_pane_ParamLimits

0x702b,	// (0x0003e347) ai5_sk_pane

0xe240,	// (0x0004555c) cell_ai5_widget_pane_ParamLimits

0xe240,	// (0x0004555c) cell_ai5_widget_pane

0x75d4,	// (0x0003e8f0) aid_size_cell_widget_grid

0x75e2,	// (0x0003e8fe) bg_ai5_widget_pane_ParamLimits

0x75e2,	// (0x0003e8fe) bg_ai5_widget_pane

0x7656,	// (0x0003e972) cell_ai5_widget_pane_g2

0x7666,	// (0x0003e982) cell_ai5_widget_pane_g3

0x767d,	// (0x0003e999) cell_ai5_widget_pane_g4

0x7689,	// (0x0003e9a5) cell_ai5_widget_pane_g5

0xe597,	// (0x000458b3) cell_ai5_widget_pane_g6

0xe5a3,	// (0x000458bf) cell_ai5_widget_pane_g7

0x76e9,	// (0x0003ea05) cell_ai5_widget_pane_t1_ParamLimits

0x76e9,	// (0x0003ea05) cell_ai5_widget_pane_t1

0x7706,	// (0x0003ea22) cell_ai5_widget_pane_t2_ParamLimits

0x7706,	// (0x0003ea22) cell_ai5_widget_pane_t2

0x771e,	// (0x0003ea3a) cell_ai5_widget_pane_t3_ParamLimits

0x771e,	// (0x0003ea3a) cell_ai5_widget_pane_t3

0x7736,	// (0x0003ea52) cell_ai5_widget_pane_t4_ParamLimits

0x7736,	// (0x0003ea52) cell_ai5_widget_pane_t4

0x7753,	// (0x0003ea6f) cell_ai5_widget_pane_t5_ParamLimits

0x7753,	// (0x0003ea6f) cell_ai5_widget_pane_t5

0x7772,	// (0x0003ea8e) cell_ai5_widget_pane_t6_ParamLimits

0x7772,	// (0x0003ea8e) cell_ai5_widget_pane_t6

0x7784,	// (0x0003eaa0) cell_ai5_widget_pane_t7_ParamLimits

0x7784,	// (0x0003eaa0) cell_ai5_widget_pane_t7

0x779d,	// (0x0003eab9) cell_ai5_widget_pane_t8_ParamLimits

0x779d,	// (0x0003eab9) cell_ai5_widget_pane_t8

0x0009,

0xfe5a,	// (0x00047176) cell_ai5_widget_pane_t_ParamLimits

0xfe5a,	// (0x00047176) cell_ai5_widget_pane_t

0x77f1,	// (0x0003eb0d) grid_ai5_widget_pane

0xb7c8,	// (0x00042ae4) highlight_cell_ai5_widget_pane_ParamLimits

0xb7c8,	// (0x00042ae4) highlight_cell_ai5_widget_pane

0xe5af,	// (0x000458cb) ai5_sk_left_pane

0xe5b9,	// (0x000458d5) ai5_sk_middle_pane

0xe5c3,	// (0x000458df) ai5_sk_right_pane

0x7823,	// (0x0003eb3f) bg_ai5_widget_pane_g1_ParamLimits

0x7823,	// (0x0003eb3f) bg_ai5_widget_pane_g1

0x782f,	// (0x0003eb4b) bg_ai5_widget_pane_g2_ParamLimits

0x782f,	// (0x0003eb4b) bg_ai5_widget_pane_g2

0x783b,	// (0x0003eb57) bg_ai5_widget_pane_g3_ParamLimits

0x783b,	// (0x0003eb57) bg_ai5_widget_pane_g3

0x7847,	// (0x0003eb63) bg_ai5_widget_pane_g4_ParamLimits

0x7847,	// (0x0003eb63) bg_ai5_widget_pane_g4

0x7853,	// (0x0003eb6f) bg_ai5_widget_pane_g5_ParamLimits

0x7853,	// (0x0003eb6f) bg_ai5_widget_pane_g5

0x785f,	// (0x0003eb7b) bg_ai5_widget_pane_g6_ParamLimits

0x785f,	// (0x0003eb7b) bg_ai5_widget_pane_g6

0x786b,	// (0x0003eb87) bg_ai5_widget_pane_g7_ParamLimits

0x786b,	// (0x0003eb87) bg_ai5_widget_pane_g7

0x7877,	// (0x0003eb93) bg_ai5_widget_pane_g8_ParamLimits

0x7877,	// (0x0003eb93) bg_ai5_widget_pane_g8

0x7883,	// (0x0003eb9f) bg_ai5_widget_pane_g9_ParamLimits

0x7883,	// (0x0003eb9f) bg_ai5_widget_pane_g9

0x0008,

0xfe6f,	// (0x0004718b) bg_ai5_widget_pane_g_ParamLimits

0xfe6f,	// (0x0004718b) bg_ai5_widget_pane_g

0x78b9,	// (0x0003ebd5) cell_shortcut_ai5_widget_pane_ParamLimits

0x78b9,	// (0x0003ebd5) cell_shortcut_ai5_widget_pane

0xf467,	// (0x00046783) bg_cell_shortcut_ai5_widget_pane

0x78cc,	// (0x0003ebe8) cell_grid_ai5_widget_pane_g1

0x78d5,	// (0x0003ebf1) highlight_cell_shortcut_ai5_widget_pane

0x2426,	// (0x00039742) ai5_sk_left_pane_g1

0x78dd,	// (0x0003ebf9) ai5_sk_left_pane_g2

0x78e5,	// (0x0003ec01) ai5_sk_left_pane_g3

0x78ed,	// (0x0003ec09) ai5_sk_left_pane_g4

0x0003,

0xfe82,	// (0x0004719e) ai5_sk_left_pane_g

0x78f5,	// (0x0003ec11) ai5_sk_left_pane_t1

0x242e,	// (0x0003974a) ai5_sk_right_pane_g1

0x7903,	// (0x0003ec1f) ai5_sk_right_pane_g2

0x790b,	// (0x0003ec27) ai5_sk_right_pane_g3

0x7913,	// (0x0003ec2f) ai5_sk_right_pane_g4

0x0003,

0xfe8b,	// (0x000471a7) ai5_sk_right_pane_g

0x791b,	// (0x0003ec37) ai5_sk_right_pane_t1

0x242e,	// (0x0003974a) ai5_sk_middle_pane_g1

0x2426,	// (0x00039742) ai5_sk_middle_pane_g2

0x2446,	// (0x00039762) ai5_sk_middle_pane_g3

0x790b,	// (0x0003ec27) ai5_sk_middle_pane_g4

0x78e5,	// (0x0003ec01) ai5_sk_middle_pane_g5

0x7929,	// (0x0003ec45) ai5_sk_middle_pane_g6

0xe5cd,	// (0x000458e9) ai5_sk_middle_pane_g7

0x0006,

0xfe94,	// (0x000471b0) ai5_sk_middle_pane_g

0xa842,	// (0x00041b5e) aid_touch_area_size_lc0_ParamLimits

0xa842,	// (0x00041b5e) aid_touch_area_size_lc0

0x0929,	// (0x00037c45) cell_hwr_candidate_pane_t1_ParamLimits

0x1f56,	// (0x00039272) aid_touch_navi_pane

0xbf20,	// (0x0004323c) status_dt_navi_pane_ParamLimits

0xbf20,	// (0x0004323c) status_dt_navi_pane

0xbf38,	// (0x00043254) status_dt_sta_pane_ParamLimits

0xbf38,	// (0x00043254) status_dt_sta_pane

0xe5d5,	// (0x000458f1) dt_sta_controll_pane

0xe5e2,	// (0x000458fe) dt_sta_indi_pane

0xe5ef,	// (0x0004590b) dt_sta_title_pane

0xb2e6,	// (0x00042602) bg_dt_sta_indi_pane_ParamLimits

0xb2e6,	// (0x00042602) bg_dt_sta_indi_pane

0xe601,	// (0x0004591d) dt_sta_battery_pane

0xe609,	// (0x00045925) dt_sta_indi_pane_g1

0xe612,	// (0x0004592e) dt_sta_indi_pane_g2

0xe61b,	// (0x00045937) dt_sta_indi_pane_g3

0x0002,

0xfea3,	// (0x000471bf) dt_sta_indi_pane_g

0xe624,	// (0x00045940) dt_sta_signal_pane

0xb7c8,	// (0x00042ae4) bg_dt_sta_title_pane_ParamLimits

0xb7c8,	// (0x00042ae4) bg_dt_sta_title_pane

0xe62d,	// (0x00045949) dt_sta_title_pane_g1

0xe635,	// (0x00045951) dt_sta_title_pane_t1_ParamLimits

0xe635,	// (0x00045951) dt_sta_title_pane_t1

0x842a,	// (0x0003f746) bg_dt_sta_control_pane

0xe64a,	// (0x00045966) dt_sta_controll_pane_g1

0xe653,	// (0x0004596f) bg_dt_sta_title_pane_g1

0xe65c,	// (0x00045978) bg_dt_sta_title_pane_g2

0xe665,	// (0x00045981) bg_dt_sta_title_pane_g3

0x0002,

0xfeaa,	// (0x000471c6) bg_dt_sta_title_pane_g

0x4a47,	// (0x0003bd63) bg_dt_sta_indi_pane_g1

0x79d7,	// (0x0003ecf3) dt_sta_signal_pane_g1

0x79df,	// (0x0003ecfb) dt_sta_signal_pane_g2

0x0001,

0xfeb1,	// (0x000471cd) dt_sta_signal_pane_g

0x79e7,	// (0x0003ed03) dt_sta_battery_pane_g1

0x79f0,	// (0x0003ed0c) dt_sta_battery_pane_t1

0x4a47,	// (0x0003bd63) bg_dt_sta_control_pane_g1

0xd042,	// (0x0004435e) fep_china_uni_eep_pane

0xd04a,	// (0x00044366) fep_china_uni_entry_pane_ParamLimits

0xd05a,	// (0x00044376) popup_fep_china_uni_window_g1_ParamLimits

0xd06a,	// (0x00044386) popup_fep_china_uni_window_g2_ParamLimits

0xd06a,	// (0x00044386) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x00046a3f) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x00046a3f) popup_fep_china_uni_window_g

0x79ff,	// (0x0003ed1b) fep_china_uni_eep_pane_g1

0x7a07,	// (0x0003ed23) fep_china_uni_eep_pane_t1

0x6f9a,	// (0x0003e2b6) aid_touch_area_size_smil_player

0x20ae,	// (0x000393ca) lc0_clock_pane

0x22ad,	// (0x000395c9) status_pane_g5_ParamLimits

0x22ad,	// (0x000395c9) status_pane_g5

0xa297,	// (0x000415b3) popup_keymap_window

0x226b,	// (0x00039587) status_icon_pane

0x7666,	// (0x0003e982) cell_ai5_widget_pane_g3_ParamLimits

0x767d,	// (0x0003e999) cell_ai5_widget_pane_g4_ParamLimits

0x7689,	// (0x0003e9a5) cell_ai5_widget_pane_g5_ParamLimits

0x76ad,	// (0x0003e9c9) cell_ai5_widget_pane_g8_ParamLimits

0x76ad,	// (0x0003e9c9) cell_ai5_widget_pane_g8

0x76c1,	// (0x0003e9dd) cell_ai5_widget_pane_g9_ParamLimits

0x76c1,	// (0x0003e9dd) cell_ai5_widget_pane_g9

0x76d5,	// (0x0003e9f1) cell_ai5_widget_pane_g10_ParamLimits

0x76d5,	// (0x0003e9f1) cell_ai5_widget_pane_g10

0x7a16,	// (0x0003ed32) status_icon_pane_g1

0x842a,	// (0x0003f746) bg_popup_sub_pane_cp13

0x7a1e,	// (0x0003ed3a) popup_keymap_window_t1

0x9f78,	// (0x00041294) control_pane_g6_ParamLimits

0x9f78,	// (0x00041294) control_pane_g6

0x9f85,	// (0x000412a1) control_pane_g7_ParamLimits

0x9f85,	// (0x000412a1) control_pane_g7

0x9f92,	// (0x000412ae) control_pane_g8_ParamLimits

0x9f92,	// (0x000412ae) control_pane_g8

0xe5d5,	// (0x000458f1) dt_sta_controll_pane_ParamLimits

0xe5e2,	// (0x000458fe) dt_sta_indi_pane_ParamLimits

0xe5ef,	// (0x0004590b) dt_sta_title_pane_ParamLimits

0xb70a,	// (0x00042a26) aid_size_touch_scroll_bar_cale

0xeb59,	// (0x00045e75) popup_discreet_window_ParamLimits

0xeb59,	// (0x00045e75) popup_discreet_window

0x901b,	// (0x00040337) popup_sk_window

0x2a6e,	// (0x00039d8a) bg_popup_sub_pane_cp28_ParamLimits

0x2a6e,	// (0x00039d8a) bg_popup_sub_pane_cp28

0x7a2c,	// (0x0003ed48) popup_discreet_window_g1_ParamLimits

0x7a2c,	// (0x0003ed48) popup_discreet_window_g1

0x7a4c,	// (0x0003ed68) popup_discreet_window_t1_ParamLimits

0x7a4c,	// (0x0003ed68) popup_discreet_window_t1

0x7a6a,	// (0x0003ed86) popup_discreet_window_t2_ParamLimits

0x7a6a,	// (0x0003ed86) popup_discreet_window_t2

0x0002,

0xfeb6,	// (0x000471d2) popup_discreet_window_t_ParamLimits

0xfeb6,	// (0x000471d2) popup_discreet_window_t

0x148b,	// (0x000387a7) popup_sk_window_g1

0x1495,	// (0x000387b1) popup_sk_window_g2

0x0001,

0xfebd,	// (0x000471d9) popup_sk_window_g

0x149f,	// (0x000387bb) popup_sk_window_t1

0x14af,	// (0x000387cb) popup_sk_window_t1_copy1

0x7656,	// (0x0003e972) cell_ai5_widget_pane_g2_ParamLimits

0x77af,	// (0x0003eacb) cell_ai5_widget_pane_t9_ParamLimits

0x77af,	// (0x0003eacb) cell_ai5_widget_pane_t9

0x842a,	// (0x0003f746) main_fep_fshwr2_pane

0xb130,	// (0x0004244c) aid_fshwr2_btn_pane

0xb141,	// (0x0004245d) aid_fshwr2_syb_pane

0xb152,	// (0x0004246e) aid_fshwr2_txt_pane

0xb15e,	// (0x0004247a) fshwr2_func_candi_pane

0xb17f,	// (0x0004249b) fshwr2_hwr_syb_pane

0xb19c,	// (0x000424b8) fshwr2_icf_pane

0x842a,	// (0x0003f746) fshwr2_icf_bg_pane

0x7abc,	// (0x0003edd8) fshwr2_icf_pane_t1_ParamLimits

0x7abc,	// (0x0003edd8) fshwr2_icf_pane_t1

0xcfc0,	// (0x000442dc) fshwr2_func_candi_pane_g1

0xe66e,	// (0x0004598a) fshwr2_func_candi_row_pane_ParamLimits

0xe66e,	// (0x0004598a) fshwr2_func_candi_row_pane

0xe67e,	// (0x0004599a) cell_fshwr2_syb_pane_ParamLimits

0xe67e,	// (0x0004599a) cell_fshwr2_syb_pane

0x4cc2,	// (0x0003bfde) fshwr2_hwr_syb_pane_g1_ParamLimits

0x4cc2,	// (0x0003bfde) fshwr2_hwr_syb_pane_g1

0x842a,	// (0x0003f746) bg_popup_call_pane_cp01

0xe698,	// (0x000459b4) fshwr2_func_candi_cell_pane_ParamLimits

0xe698,	// (0x000459b4) fshwr2_func_candi_cell_pane

0x7b26,	// (0x0003ee42) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x7b26,	// (0x0003ee42) fshwr2_func_candi_cell_bg_pane

0xe6c0,	// (0x000459dc) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe6c0,	// (0x000459dc) fshwr2_func_candi_cell_pane_g1

0x7b52,	// (0x0003ee6e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7b52,	// (0x0003ee6e) fshwr2_func_candi_cell_pane_t1

0x842a,	// (0x0003f746) bg_button_pane_cp08

0xf467,	// (0x00046783) cell_fshwr2_syb_bg_pane

0xe6e0,	// (0x000459fc) cell_fshwr2_syb_bg_pane_g1

0xe6e8,	// (0x00045a04) cell_fshwr2_syb_bg_pane_t1

0xb7c8,	// (0x00042ae4) main_tmo_pane

0xc2eb,	// (0x00043607) uni_indicator_pane_g1_ParamLimits

0xc302,	// (0x0004361e) uni_indicator_pane_g2_ParamLimits

0xc318,	// (0x00043634) uni_indicator_pane_g3_ParamLimits

0xc32d,	// (0x00043649) uni_indicator_pane_g4_ParamLimits

0xc32d,	// (0x00043649) uni_indicator_pane_g4

0x35e8,	// (0x0003a904) uni_indicator_pane_g5_ParamLimits

0x35e8,	// (0x0003a904) uni_indicator_pane_g5

0x35e8,	// (0x0003a904) uni_indicator_pane_g6_ParamLimits

0x35e8,	// (0x0003a904) uni_indicator_pane_g6

0xf922,	// (0x00046c3e) uni_indicator_pane_g_ParamLimits

0xd6ba,	// (0x000449d6) popup_tmo_note_window_ParamLimits

0xd6ba,	// (0x000449d6) popup_tmo_note_window

0x0cf9,	// (0x00038015) fshwr2_bg_pane

0xe6d1,	// (0x000459ed) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe6d1,	// (0x000459ed) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec2,	// (0x000471de) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec2,	// (0x000471de) fshwr2_func_candi_cell_pane_g

0x4a47,	// (0x0003bd63) bg_popup_window_pane_cp01

0x7b7c,	// (0x0003ee98) bg_popup_window_pane_g1_cp01

0x7b85,	// (0x0003eea1) bg_popup_window_pane_cp22_ParamLimits

0x7b85,	// (0x0003eea1) bg_popup_window_pane_cp22

0x7b93,	// (0x0003eeaf) listscroll_tmo_link_pane_ParamLimits

0x7b93,	// (0x0003eeaf) listscroll_tmo_link_pane

0x7bd3,	// (0x0003eeef) popup_tmo_note_window_g1_ParamLimits

0x7bd3,	// (0x0003eeef) popup_tmo_note_window_g1

0x7be0,	// (0x0003eefc) tmo_note_info_pane_ParamLimits

0x7be0,	// (0x0003eefc) tmo_note_info_pane

0xe6f7,	// (0x00045a13) list_tmo_note_info_pane_g1_ParamLimits

0xe6f7,	// (0x00045a13) list_tmo_note_info_pane_g1

0x7c11,	// (0x0003ef2d) list_tmo_note_info_pane_g2_ParamLimits

0x7c11,	// (0x0003ef2d) list_tmo_note_info_pane_g2

0x0001,

0xfec7,	// (0x000471e3) list_tmo_note_info_pane_g_ParamLimits

0xfec7,	// (0x000471e3) list_tmo_note_info_pane_g

0x7c2d,	// (0x0003ef49) list_tmo_note_info_text_pane_ParamLimits

0x7c2d,	// (0x0003ef49) list_tmo_note_info_text_pane

0x7cb2,	// (0x0003efce) list_tmo_link_pane

0x7cbf,	// (0x0003efdb) scroll_pane_cp20

0x7ccc,	// (0x0003efe8) list_single_tmo_link_pane_ParamLimits

0x7ccc,	// (0x0003efe8) list_single_tmo_link_pane

0x7cdc,	// (0x0003eff8) list_single_tmo_link_pane_t1

0x7cea,	// (0x0003f006) list_tmo_note_info_text_pane_t1_ParamLimits

0x7cea,	// (0x0003f006) list_tmo_note_info_text_pane_t1

0x9a64,	// (0x00040d80) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9a64,	// (0x00040d80) aid_size_touch_scroll_bar_cp01

0x99a6,	// (0x00040cc2) aid_size_touch_slider_marker

0x900b,	// (0x00040327) popup_settings_window_ParamLimits

0x900b,	// (0x00040327) popup_settings_window

0xd18c,	// (0x000444a8) popup_candi_list_indi_window

0x1f56,	// (0x00039272) aid_touch_navi_pane_ParamLimits

0x0c52,	// (0x00037f6e) rs_clock_indi_pane

0x0c5b,	// (0x00037f77) sctrl_sk_bottom_pane_ParamLimits

0x0c6c,	// (0x00037f88) sctrl_sk_top_pane_ParamLimits

0x0d71,	// (0x0003808d) popup_fep_tooltip_window

0x75d4,	// (0x0003e8f0) aid_size_cell_widget_grid_ParamLimits

0x7641,	// (0x0003e95d) cell_ai5_widget_pane_g1_ParamLimits

0x7641,	// (0x0003e95d) cell_ai5_widget_pane_g1

0xe597,	// (0x000458b3) cell_ai5_widget_pane_g6_ParamLimits

0xe5a3,	// (0x000458bf) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe45,	// (0x00047161) cell_ai5_widget_pane_g_ParamLimits

0xfe45,	// (0x00047161) cell_ai5_widget_pane_g

0x77d3,	// (0x0003eaef) cell_ai5_widget_pane_t10_ParamLimits

0x77d3,	// (0x0003eaef) cell_ai5_widget_pane_t10

0x77f1,	// (0x0003eb0d) grid_ai5_widget_pane_ParamLimits

0x788f,	// (0x0003ebab) cell_contacts_ai5_widget_pane_ParamLimits

0x788f,	// (0x0003ebab) cell_contacts_ai5_widget_pane

0x7a7f,	// (0x0003ed9b) popup_discreet_window_t3_ParamLimits

0x7a7f,	// (0x0003ed9b) popup_discreet_window_t3

0xb1b4,	// (0x000424d0) popup_fshwr2_char_preview_window_ParamLimits

0xb1b4,	// (0x000424d0) popup_fshwr2_char_preview_window

0xe70e,	// (0x00045a2a) tmo_note_info_pane_t1

0xe723,	// (0x00045a3f) tmo_note_info_pane_t2

0xe73c,	// (0x00045a58) tmo_note_info_pane_t3

0x7c8e,	// (0x0003efaa) tmo_note_info_pane_t4

0x7ca0,	// (0x0003efbc) tmo_note_info_pane_t5

0x0004,

0xfecc,	// (0x000471e8) tmo_note_info_pane_t

0x7cb2,	// (0x0003efce) list_tmo_link_pane_ParamLimits

0x7cbf,	// (0x0003efdb) scroll_pane_cp20_ParamLimits

0x842a,	// (0x0003f746) bg_popup_fep_char_preview_window_cp01

0x7d03,	// (0x0003f01f) popup_fshwr2_char_preview_window_t1

0x7d11,	// (0x0003f02d) popup_candi_list_indi_window_g1

0x7d1a,	// (0x0003f036) bg_cell_contacts_ai5_widget_pane

0x7d26,	// (0x0003f042) cell_contacts_ai5_widget_pane_g1

0x7d3a,	// (0x0003f056) cell_contacts_ai5_widget_pane_g2

0x7d46,	// (0x0003f062) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed7,	// (0x000471f3) cell_contacts_ai5_widget_pane_g

0x7d59,	// (0x0003f075) cell_contacts_ai5_widget_pane_t1

0xb7c8,	// (0x00042ae4) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe7b6,	// (0x00045ad2) settings_container_pane

0xf467,	// (0x00046783) listscroll_set_pane_copy1

0x4162,	// (0x0003b47e) scroll_pane_cp121_copy1

0x7ddf,	// (0x0003f0fb) set_content_pane_copy1

0xe7c2,	// (0x00045ade) aid_height_set_list_copy1_ParamLimits

0xe7c2,	// (0x00045ade) aid_height_set_list_copy1

0x37e8,	// (0x0003ab04) aid_size_parent_copy1_ParamLimits

0x37e8,	// (0x0003ab04) aid_size_parent_copy1

0xe7ce,	// (0x00045aea) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe7ce,	// (0x00045aea) button_value_adjust_pane_cp6_copy1

0x18dd,	// (0x00038bf9) list_highlight_pane_cp2_copy1_ParamLimits

0x18dd,	// (0x00038bf9) list_highlight_pane_cp2_copy1

0xe7e2,	// (0x00045afe) list_set_pane_copy1_ParamLimits

0xe7e2,	// (0x00045afe) list_set_pane_copy1

0xe751,	// (0x00045a6d) main_pane_set_t1_copy1_ParamLimits

0xe751,	// (0x00045a6d) main_pane_set_t1_copy1

0xe78b,	// (0x00045aa7) main_pane_set_t2_copy1_ParamLimits

0xe78b,	// (0x00045aa7) main_pane_set_t2_copy1

0xe8a9,	// (0x00045bc5) main_pane_set_t3_copy1

0xe8b7,	// (0x00045bd3) main_pane_set_t4_copy1

0xe7aa,	// (0x00045ac6) set_content_pane_g1_copy1_ParamLimits

0xe7aa,	// (0x00045ac6) set_content_pane_g1_copy1

0xe8c5,	// (0x00045be1) setting_code_pane_copy1

0x7ef2,	// (0x0003f20e) setting_slider_graphic_pane_copy1

0x7ef2,	// (0x0003f20e) setting_slider_pane_copy1

0x7ef2,	// (0x0003f20e) setting_text_pane_copy1

0x7ef2,	// (0x0003f20e) setting_volume_pane_copy1

0xe8c5,	// (0x00045be1) settings_code_pane_cp2_copy1

0xe8cd,	// (0x00045be9) settings_code_pane_cp_copy1_ParamLimits

0xe8cd,	// (0x00045be9) settings_code_pane_cp_copy1

0xb1cc,	// (0x000424e8) volume_set_pane_copy1

0xe8e1,	// (0x00045bfd) volume_set_pane_g10_copy1

0xe8ed,	// (0x00045c09) volume_set_pane_g1_copy1

0xe8f7,	// (0x00045c13) volume_set_pane_g2_copy1

0xe901,	// (0x00045c1d) volume_set_pane_g3_copy1

0xe90b,	// (0x00045c27) volume_set_pane_g4_copy1

0xe915,	// (0x00045c31) volume_set_pane_g5_copy1

0xe91f,	// (0x00045c3b) volume_set_pane_g6_copy1

0xe929,	// (0x00045c45) volume_set_pane_g7_copy1

0xe933,	// (0x00045c4f) volume_set_pane_g8_copy1

0xe93d,	// (0x00045c59) volume_set_pane_g9_copy1

0x8498,	// (0x0003f7b4) bg_set_opt_pane_cp_copy1_ParamLimits

0x8498,	// (0x0003f7b4) bg_set_opt_pane_cp_copy1

0x1546,	// (0x00038862) setting_slider_pane_t1_copy1_ParamLimits

0x1546,	// (0x00038862) setting_slider_pane_t1_copy1

0xb1d8,	// (0x000424f4) setting_slider_pane_t2_copy1_ParamLimits

0xb1d8,	// (0x000424f4) setting_slider_pane_t2_copy1

0xb1f2,	// (0x0004250e) setting_slider_pane_t3_copy1_ParamLimits

0xb1f2,	// (0x0004250e) setting_slider_pane_t3_copy1

0xb20a,	// (0x00042526) slider_set_pane_copy1_ParamLimits

0xb20a,	// (0x00042526) slider_set_pane_copy1

0xb823,	// (0x00042b3f) set_opt_bg_pane_g1_copy2

0xb82b,	// (0x00042b47) set_opt_bg_pane_g2_copy2

0x7f74,	// (0x0003f290) set_opt_bg_pane_g3_copy2

0xb83b,	// (0x00042b57) set_opt_bg_pane_g4_copy2

0xb843,	// (0x00042b5f) set_opt_bg_pane_g5_copy2

0xb84b,	// (0x00042b67) set_opt_bg_pane_g6_copy2

0xe947,	// (0x00045c63) set_opt_bg_pane_g7_copy2

0x7f88,	// (0x0003f2a4) set_opt_bg_pane_g8_copy2

0x7f92,	// (0x0003f2ae) set_opt_bg_pane_g9_copy2

0x7f9c,	// (0x0003f2b8) aid_size_touch_slider_mark_copy1_ParamLimits

0x7f9c,	// (0x0003f2b8) aid_size_touch_slider_mark_copy1

0x7fb0,	// (0x0003f2cc) slider_set_pane_g1_copy1

0x7fb9,	// (0x0003f2d5) slider_set_pane_g2_copy1

0x69fd,	// (0x0003dd19) slider_set_pane_g3_copy1_ParamLimits

0x69fd,	// (0x0003dd19) slider_set_pane_g3_copy1

0x6a11,	// (0x0003dd2d) slider_set_pane_g4_copy1_ParamLimits

0x6a11,	// (0x0003dd2d) slider_set_pane_g4_copy1

0x6a29,	// (0x0003dd45) slider_set_pane_g5_copy1_ParamLimits

0x6a29,	// (0x0003dd45) slider_set_pane_g5_copy1

0x69fd,	// (0x0003dd19) slider_set_pane_g6_copy1_ParamLimits

0x69fd,	// (0x0003dd19) slider_set_pane_g6_copy1

0xe951,	// (0x00045c6d) slider_set_pane_g7_copy1_ParamLimits

0xe951,	// (0x00045c6d) slider_set_pane_g7_copy1

0x843e,	// (0x0003f75a) bg_set_opt_pane_cp2_copy1

0x7fd7,	// (0x0003f2f3) setting_slider_graphic_pane_g1_copy1

0xe967,	// (0x00045c83) setting_slider_graphic_pane_t1_copy1

0xe977,	// (0x00045c93) setting_slider_graphic_pane_t2_copy1

0xe987,	// (0x00045ca3) slider_set_pane_cp_copy1

0x8010,	// (0x0003f32c) input_focus_pane_cp1_copy1

0x8019,	// (0x0003f335) list_set_text_pane_copy1

0x8021,	// (0x0003f33d) setting_text_pane_g1_copy1

0xedc4,	// (0x000460e0) set_text_pane_t1_copy1

0x8010,	// (0x0003f32c) input_focus_pane_cp2_copy1

0x8021,	// (0x0003f33d) setting_code_pane_g1_copy1

0xe98f,	// (0x00045cab) setting_code_pane_t1_copy1

0xe99d,	// (0x00045cb9) list_set_graphic_pane_copy1

0x843e,	// (0x0003f75a) bg_set_opt_pane_cp4_copy1

0x9dad,	// (0x000410c9) list_set_graphic_pane_g1_copy1_ParamLimits

0x9dad,	// (0x000410c9) list_set_graphic_pane_g1_copy1

0xe9af,	// (0x00045ccb) list_set_graphic_pane_g2_copy1

0x9dc5,	// (0x000410e1) list_set_graphic_pane_t1_copy1_ParamLimits

0x9dc5,	// (0x000410e1) list_set_graphic_pane_t1_copy1

0x4a47,	// (0x0003bd63) rs_clock_indi_pane_g1

0x8052,	// (0x0003f36e) rs_clock_indi_pane_t1

0x8060,	// (0x0003f37c) rs_indi_pane

0x8068,	// (0x0003f384) rs_indi_pane_g1

0x8071,	// (0x0003f38d) rs_indi_pane_g2

0x807a,	// (0x0003f396) rs_indi_pane_g3

0x0002,

0xfede,	// (0x000471fa) rs_indi_pane_g

0xf467,	// (0x00046783) bg_popup_preview_window_pane_cp03

0x8083,	// (0x0003f39f) popup_fep_tooltip_window_t1

0x56fe,	// (0x0003ca1a) popup_note2_window_g2_ParamLimits

0x56fe,	// (0x0003ca1a) popup_note2_window_g2

0x0001,

0xfc77,	// (0x00046f93) popup_note2_window_g_ParamLimits

0xfc77,	// (0x00046f93) popup_note2_window_g

0x5c06,	// (0x0003cf22) bg_popup_sub_pane_cp11_ParamLimits

0x5c13,	// (0x0003cf2f) cell_ai3_links_pane_g1_ParamLimits

0x5c2a,	// (0x0003cf46) cell_ai3_links_pane_t1

0xedc4,	// (0x000460e0) set_text_pane_t1_copy1_ParamLimits

0x9e39,	// (0x00041155) cell_graphic_popup_pane_cp2_ParamLimits

0x9e39,	// (0x00041155) cell_graphic_popup_pane_cp2

0xe9b7,	// (0x00045cd3) cell_graphic_popup_pane_g1_cp2

0xb51d,	// (0x00042839) cell_graphic_popup_pane_g2_cp2

0x8099,	// (0x0003f3b5) cell_graphic_popup_pane_g3_cp2

0x80a1,	// (0x0003f3bd) cell_graphic_popup_pane_t2_cp2

0xb52e,	// (0x0004284a) grid_highlight_pane_cp3_cp2

0xbacc,	// (0x00042de8) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xb7c8,	// (0x00042ae4) main_tmo_pane_ParamLimits

0xd6ae,	// (0x000449ca) popup_tmo_big_image_note_window

0x7630,	// (0x0003e94c) cell_ai5_widget_list_pane

0x7638,	// (0x0003e954) cell_ai5_widget_lrg_icon_pane

0xe70e,	// (0x00045a2a) tmo_note_info_pane_t1_ParamLimits

0xe723,	// (0x00045a3f) tmo_note_info_pane_t2_ParamLimits

0xe73c,	// (0x00045a58) tmo_note_info_pane_t3_ParamLimits

0x7c8e,	// (0x0003efaa) tmo_note_info_pane_t4_ParamLimits

0x7ca0,	// (0x0003efbc) tmo_note_info_pane_t5_ParamLimits

0xfecc,	// (0x000471e8) tmo_note_info_pane_t_ParamLimits

0xe7b6,	// (0x00045ad2) settings_container_pane_ParamLimits

0x8008,	// (0x0003f324) indicator_popup_pane_cp5

0x8008,	// (0x0003f324) indicator_popup_pane_cp6

0xe99d,	// (0x00045cb9) list_set_graphic_pane_copy1_ParamLimits

0x842a,	// (0x0003f746) bg_popup_window_pane_cp23

0x80af,	// (0x0003f3cb) popup_tmo_big_image_note_window_g1

0x80bb,	// (0x0003f3d7) popup_tmo_big_image_note_window_t1

0x80cb,	// (0x0003f3e7) popup_tmo_big_image_note_window_t2

0x80db,	// (0x0003f3f7) popup_tmo_big_image_note_window_t3

0x0002,

0xfee5,	// (0x00047201) popup_tmo_big_image_note_window_t

0x4a47,	// (0x0003bd63) cell_ai5_widget_lrg_icon_pane_g1

0x80eb,	// (0x0003f407) cell_ai5_widget_lrg_icon_pane_t1

0x80f9,	// (0x0003f415) cell_ai5_widget_list_row_pane_ParamLimits

0x80f9,	// (0x0003f415) cell_ai5_widget_list_row_pane

0x8112,	// (0x0003f42e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x8112,	// (0x0003f42e) cell_ai5_widget_list_row_pane_g1

0x811f,	// (0x0003f43b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x811f,	// (0x0003f43b) cell_ai5_widget_list_row_pane_t1

0x814a,	// (0x0003f466) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x814a,	// (0x0003f466) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeec,	// (0x00047208) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeec,	// (0x00047208) cell_ai5_widget_list_row_pane_t

0xea7c,	// (0x00045d98) main_fep_vtchi_ss_pane

0x15bb,	// (0x000388d7) popup_fep_char_pre_window

0x15c3,	// (0x000388df) popup_fep_ituss_window

0x15e4,	// (0x00038900) popup_fep_vkbss_window

0x8172,	// (0x0003f48e) grid_vkbss_keypad_pane_ParamLimits

0x8172,	// (0x0003f48e) grid_vkbss_keypad_pane

0x8182,	// (0x0003f49e) ituss_keypad_pane

0x1611,	// (0x0003892d) aid_vkbss_key_offset_ParamLimits

0x1611,	// (0x0003892d) aid_vkbss_key_offset

0x161d,	// (0x00038939) cell_vkbss_key_pane_ParamLimits

0x161d,	// (0x00038939) cell_vkbss_key_pane

0x8192,	// (0x0003f4ae) bg_cell_vkbss_key_g1_ParamLimits

0x8192,	// (0x0003f4ae) bg_cell_vkbss_key_g1

0x819e,	// (0x0003f4ba) cell_vkbss_key_3p_pane_ParamLimits

0x819e,	// (0x0003f4ba) cell_vkbss_key_3p_pane

0x81b8,	// (0x0003f4d4) cell_vkbss_key_g1_ParamLimits

0x81b8,	// (0x0003f4d4) cell_vkbss_key_g1

0x81d2,	// (0x0003f4ee) cell_vkbss_key_t1_ParamLimits

0x81d2,	// (0x0003f4ee) cell_vkbss_key_t1

0x1633,	// (0x0003894f) cell_ituss_key_pane_ParamLimits

0x1633,	// (0x0003894f) cell_ituss_key_pane

0x81fd,	// (0x0003f519) bg_cell_ituss_key_g1_ParamLimits

0x81fd,	// (0x0003f519) bg_cell_ituss_key_g1

0x8209,	// (0x0003f525) cell_ituss_key_pane_g1_ParamLimits

0x8209,	// (0x0003f525) cell_ituss_key_pane_g1

0x821d,	// (0x0003f539) cell_ituss_key_pane_g2_ParamLimits

0x821d,	// (0x0003f539) cell_ituss_key_pane_g2

0x0001,

0xfef3,	// (0x0004720f) cell_ituss_key_pane_g_ParamLimits

0xfef3,	// (0x0004720f) cell_ituss_key_pane_g

0x824f,	// (0x0003f56b) cell_ituss_key_t1_ParamLimits

0x824f,	// (0x0003f56b) cell_ituss_key_t1

0x828d,	// (0x0003f5a9) cell_ituss_key_t2_ParamLimits

0x828d,	// (0x0003f5a9) cell_ituss_key_t2

0x82be,	// (0x0003f5da) cell_ituss_key_t3_ParamLimits

0x82be,	// (0x0003f5da) cell_ituss_key_t3

0x82ef,	// (0x0003f60b) cell_ituss_key_t4_ParamLimits

0x82ef,	// (0x0003f60b) cell_ituss_key_t4

0x0003,

0xfef8,	// (0x00047214) cell_ituss_key_t_ParamLimits

0xfef8,	// (0x00047214) cell_ituss_key_t

0x8320,	// (0x0003f63c) cell_vkbss_key_3p_pane_g1

0x8328,	// (0x0003f644) cell_vkbss_key_3p_pane_g2

0x8330,	// (0x0003f64c) cell_vkbss_key_3p_pane_g3

0x0002,

0xff01,	// (0x0004721d) cell_vkbss_key_3p_pane_g

0x842a,	// (0x0003f746) bg_popup_fep_char_preview_window_cp02

0x8338,	// (0x0003f654) popup_fep_char_pre_window_t1

0xe58d,	// (0x000458a9) main_ai5_sk_pane

0x7d1a,	// (0x0003f036) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7d26,	// (0x0003f042) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7d3a,	// (0x0003f056) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7d46,	// (0x0003f062) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed7,	// (0x000471f3) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7d59,	// (0x0003f075) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xb7c8,	// (0x00042ae4) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe9bf,	// (0x00045cdb) main_ai5_sk_pane_g1

0x28a6,	// (0x00039bc2) popup_query_code_window_g1

0x15d9,	// (0x000388f5) popup_fep_vkb_icf_pane

0x15ef,	// (0x0003890b) popup_fep_vtchi_icf_pane

0xb7c8,	// (0x00042ae4) bg_icf_pane

0x8350,	// (0x0003f66c) list_vkb_icf_pane

0xb7c8,	// (0x00042ae4) bg_icf_pane_cp01

0x835c,	// (0x0003f678) vtchi_icf_list_pane

0x836d,	// (0x0003f689) list_vkb_icf_pane_t1_ParamLimits

0x836d,	// (0x0003f689) list_vkb_icf_pane_t1

0x8383,	// (0x0003f69f) vtchi_icf_list_pane_t1_ParamLimits

0x8383,	// (0x0003f69f) vtchi_icf_list_pane_t1

0x15c3,	// (0x000388df) popup_fep_ituss_window_ParamLimits

0x15ef,	// (0x0003890b) popup_fep_vtchi_icf_pane_ParamLimits

0x8182,	// (0x0003f49e) ituss_keypad_pane_ParamLimits

0x1605,	// (0x00038921) ituss_sks_pane

0xb7c8,	// (0x00042ae4) bg_icf_pane_ParamLimits

0x15ac,	// (0x000388c8) icf_edit_indi_pane_ParamLimits

0x15ac,	// (0x000388c8) icf_edit_indi_pane

0x8350,	// (0x0003f66c) list_vkb_icf_pane_ParamLimits

0xb7c8,	// (0x00042ae4) bg_icf_pane_cp01_ParamLimits

0x15ac,	// (0x000388c8) icf_edit_indi_pane_cp01_ParamLimits

0x15ac,	// (0x000388c8) icf_edit_indi_pane_cp01

0x8364,	// (0x0003f680) vtchi_query_pane

0x4cc2,	// (0x0003bfde) icf_edit_indi_pane_g1_ParamLimits

0x4cc2,	// (0x0003bfde) icf_edit_indi_pane_g1

0x8405,	// (0x0003f721) icf_edit_indi_pane_g2_ParamLimits

0x8405,	// (0x0003f721) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x00047235) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x00047235) icf_edit_indi_pane_g

0x8414,	// (0x0003f730) icf_edit_indi_pane_t1

0x839b,	// (0x0003f6b7) bg_input_focus_pane_cp042

0xb701,	// (0x00042a1d) vtchi_button_pane

0x83a4,	// (0x0003f6c0) vtchi_query_pane_t1

0x83b2,	// (0x0003f6ce) vtchi_query_pane_t2

0x83c0,	// (0x0003f6dc) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x00047224) vtchi_query_pane_t

0x842a,	// (0x0003f746) bg_button_pane_cp13

0x83ce,	// (0x0003f6ea) vtchi_button_pane_g1

0x83d6,	// (0x0003f6f2) ituss_sks_pane_g1

0x83e1,	// (0x0003f6fd) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x0004722b) ituss_sks_pane_g

0x83e9,	// (0x0003f705) ituss_sks_pane_t1

0x83f7,	// (0x0003f713) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x00047230) ituss_sks_pane_t

0x44f7,	// (0x0003b813) indicator_nsta_pane_cp_g1

0x4500,	// (0x0003b81c) indicator_nsta_pane_cp_g2

0x4508,	// (0x0003b824) indicator_nsta_pane_cp_g3

0x4510,	// (0x0003b82c) indicator_nsta_pane_cp_g4

0x4518,	// (0x0003b834) indicator_nsta_pane_cp_g5

0x4520,	// (0x0003b83c) indicator_nsta_pane_cp_g6

0x0005,

0xfab5,	// (0x00046dd1) indicator_nsta_pane_cp_g

0xe0b0,	// (0x000453cc) cell_graphic2_pane_t2_ParamLimits

0xe0b0,	// (0x000453cc) cell_graphic2_pane_t2

0x0001,

0xfdce,	// (0x000470ea) cell_graphic2_pane_t_ParamLimits

0xfdce,	// (0x000470ea) cell_graphic2_pane_t

0xe0e6,	// (0x00045402) cell_graphic2_control_pane_t1

0x9cad,	// (0x00040fc9) signal_pane_g3_ParamLimits

0x9cad,	// (0x00040fc9) signal_pane_g3

0x9cc1,	// (0x00040fdd) signal_pane_g4_ParamLimits

0x9cc1,	// (0x00040fdd) signal_pane_g4

0x815c,	// (0x0003f478) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x815c,	// (0x0003f478) cell_ai5_widget_list_row_pane_t3

0x823d,	// (0x0003f559) cell_ituss_key_pane_t1_ParamLimits

0x823d,	// (0x0003f559) cell_ituss_key_pane_t1

0x2523,	// (0x0003983f) form_field_data_wide_pane_vc_t2_ParamLimits

0x2523,	// (0x0003983f) form_field_data_wide_pane_vc_t2

0x2537,	// (0x00039853) form_field_data_wide_pane_vc_t3_ParamLimits

0x2537,	// (0x00039853) form_field_data_wide_pane_vc_t3

0x0002,

0xf80a,	// (0x00046b26) form_field_data_wide_pane_vc_t_ParamLimits

0xf80a,	// (0x00046b26) form_field_data_wide_pane_vc_t

0x41a2,	// (0x0003b4be) form_field_slider_wide_pane_vc_t3_ParamLimits

0x41a2,	// (0x0003b4be) form_field_slider_wide_pane_vc_t3

0x4278,	// (0x0003b594) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4278,	// (0x0003b594) form_field_popup_wide_pane_vc_t2

0x428f,	// (0x0003b5ab) form_field_popup_wide_pane_vc_t3_ParamLimits

0x428f,	// (0x0003b5ab) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa4,	// (0x00046dc0) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa4,	// (0x00046dc0) form_field_popup_wide_pane_vc_t

0xb130,	// (0x0004244c) aid_fshwr2_btn_pane_ParamLimits

0xb141,	// (0x0004245d) aid_fshwr2_syb_pane_ParamLimits

0xb152,	// (0x0004246e) aid_fshwr2_txt_pane_ParamLimits

0x0cf9,	// (0x00038015) fshwr2_bg_pane_ParamLimits

0xb15e,	// (0x0004247a) fshwr2_func_candi_pane_ParamLimits

0xb17f,	// (0x0004249b) fshwr2_hwr_syb_pane_ParamLimits

0xb19c,	// (0x000424b8) fshwr2_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Small
