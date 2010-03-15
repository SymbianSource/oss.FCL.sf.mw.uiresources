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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00001ec9 };

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
0x9c7a,	// (0x0000bb43) Screen

0x9c86,	// (0x0000bb4f) application_window_ParamLimits

0x9c86,	// (0x0000bb4f) application_window

0xe327,	// (0x000101f0) screen_g1

0x9cbe,	// (0x0000bb87) area_bottom_pane_ParamLimits

0x9cbe,	// (0x0000bb87) area_bottom_pane

0xe351,	// (0x0001021a) area_top_pane_ParamLimits

0xe351,	// (0x0001021a) area_top_pane

0xe3e5,	// (0x000102ae) main_pane_ParamLimits

0xe3e5,	// (0x000102ae) main_pane

0xe4a0,	// (0x00010369) misc_graphics

0xb565,	// (0x0000d42e) battery_pane_ParamLimits

0xb565,	// (0x0000d42e) battery_pane

0x22ed,	// (0x000041b6) bg_status_flat_pane_g8

0x22f5,	// (0x000041be) bg_status_flat_pane_g9

0x146b,	// (0x00003334) context_pane_ParamLimits

0x146b,	// (0x00003334) context_pane

0xb6dc,	// (0x0000d5a5) navi_pane_ParamLimits

0xb6dc,	// (0x0000d5a5) navi_pane

0xb766,	// (0x0000d62f) signal_pane_ParamLimits

0xb766,	// (0x0000d62f) signal_pane

0x0008,

0xf86e,	// (0x00011737) bg_status_flat_pane_g

0xb7f6,	// (0x0000d6bf) status_pane_g1_ParamLimits

0xb7f6,	// (0x0000d6bf) status_pane_g1

0xb80c,	// (0x0000d6d5) status_pane_g2_ParamLimits

0xb80c,	// (0x0000d6d5) status_pane_g2

0x16ac,	// (0x00003575) status_pane_g3_ParamLimits

0x16ac,	// (0x00003575) status_pane_g3

0x0004,

0xf7a1,	// (0x0001166a) status_pane_g_ParamLimits

0xf7a1,	// (0x0001166a) status_pane_g

0xb818,	// (0x0000d6e1) title_pane_ParamLimits

0xb818,	// (0x0000d6e1) title_pane

0xb87b,	// (0x0000d744) uni_indicator_pane_ParamLimits

0xb87b,	// (0x0000d744) uni_indicator_pane

0x0c8c,	// (0x00002b55) bg_list_pane_ParamLimits

0x0c8c,	// (0x00002b55) bg_list_pane

0xad97,	// (0x0000cc60) find_pane

0xad9f,	// (0x0000cc68) listscroll_app_pane_ParamLimits

0xad9f,	// (0x0000cc68) listscroll_app_pane

0x0cc0,	// (0x00002b89) listscroll_form_pane

0xadab,	// (0x0000cc74) listscroll_gen_pane_ParamLimits

0xadab,	// (0x0000cc74) listscroll_gen_pane

0x0cc0,	// (0x00002b89) listscroll_set_pane

0x3110,	// (0x00004fd9) main_idle_act_pane

0x0779,	// (0x00002642) main_idle_trad_pane

0x0779,	// (0x00002642) main_list_empty_pane

0x0cee,	// (0x00002bb7) main_midp_pane

0x0cfa,	// (0x00002bc3) main_pane_g1_ParamLimits

0x0cfa,	// (0x00002bc3) main_pane_g1

0xadbf,	// (0x0000cc88) popup_ai_message_window_ParamLimits

0xadbf,	// (0x0000cc88) popup_ai_message_window

0xae5f,	// (0x0000cd28) popup_fep_china_uni_window_ParamLimits

0xae5f,	// (0x0000cd28) popup_fep_china_uni_window

0x0e24,	// (0x00002ced) popup_fep_japan_candidate_window_ParamLimits

0x0e24,	// (0x00002ced) popup_fep_japan_candidate_window

0x0e4e,	// (0x00002d17) popup_fep_japan_predictive_window_ParamLimits

0x0e4e,	// (0x00002d17) popup_fep_japan_predictive_window

0xaebf,	// (0x0000cd88) popup_find_window

0xaedc,	// (0x0000cda5) popup_grid_graphic_window_ParamLimits

0xaedc,	// (0x0000cda5) popup_grid_graphic_window

0x0ebf,	// (0x00002d88) popup_large_graphic_colour_window

0xaf80,	// (0x0000ce49) popup_menu_window_ParamLimits

0xaf80,	// (0x0000ce49) popup_menu_window

0xb170,	// (0x0000d039) popup_note_image_window

0xb130,	// (0x0000cff9) popup_note_wait_window_ParamLimits

0xb130,	// (0x0000cff9) popup_note_wait_window

0xb188,	// (0x0000d051) popup_note_window_ParamLimits

0xb188,	// (0x0000d051) popup_note_window

0xb236,	// (0x0000d0ff) popup_query_code_window_ParamLimits

0xb236,	// (0x0000d0ff) popup_query_code_window

0x112b,	// (0x00002ff4) popup_query_data_code_window_ParamLimits

0x112b,	// (0x00002ff4) popup_query_data_code_window

0xb276,	// (0x0000d13f) popup_query_data_window_ParamLimits

0xb276,	// (0x0000d13f) popup_query_data_window

0xb30a,	// (0x0000d1d3) popup_query_sat_info_window_ParamLimits

0xb30a,	// (0x0000d1d3) popup_query_sat_info_window

0xb3b5,	// (0x0000d27e) popup_snote_single_graphic_window_ParamLimits

0xb3b5,	// (0x0000d27e) popup_snote_single_graphic_window

0xb3b5,	// (0x0000d27e) popup_snote_single_text_window_ParamLimits

0xb3b5,	// (0x0000d27e) popup_snote_single_text_window

0x11c6,	// (0x0000308f) popup_sub_window_general

0x130c,	// (0x000031d5) popup_window_general_ParamLimits

0x130c,	// (0x000031d5) popup_window_general

0x1325,	// (0x000031ee) power_save_pane

0xac05,	// (0x0000cace) control_pane_g1_ParamLimits

0xac05,	// (0x0000cace) control_pane_g1

0xac2e,	// (0x0000caf7) control_pane_g2_ParamLimits

0xac2e,	// (0x0000caf7) control_pane_g2

0x0b31,	// (0x000029fa) control_pane_g3_ParamLimits

0x0b31,	// (0x000029fa) control_pane_g3

0x0007,

0xf789,	// (0x00011652) control_pane_g_ParamLimits

0xf789,	// (0x00011652) control_pane_g

0xac90,	// (0x0000cb59) control_pane_t1_ParamLimits

0xac90,	// (0x0000cb59) control_pane_t1

0xacee,	// (0x0000cbb7) control_pane_t2_ParamLimits

0xacee,	// (0x0000cbb7) control_pane_t2

0x0002,

0xf79a,	// (0x00011663) control_pane_t_ParamLimits

0xf79a,	// (0x00011663) control_pane_t

0x0a04,	// (0x000028cd) navi_navi_volume_pane_cp1

0x0a0d,	// (0x000028d6) status_small_icon_pane

0x0a15,	// (0x000028de) status_small_pane_g1_ParamLimits

0x0a15,	// (0x000028de) status_small_pane_g1

0x0a49,	// (0x00002912) status_small_pane_g2_ParamLimits

0x0a49,	// (0x00002912) status_small_pane_g2

0x0a55,	// (0x0000291e) status_small_pane_g3_ParamLimits

0x0a55,	// (0x0000291e) status_small_pane_g3

0x0a61,	// (0x0000292a) status_small_pane_g4_ParamLimits

0x0a61,	// (0x0000292a) status_small_pane_g4

0x0a6d,	// (0x00002936) status_small_pane_g5_ParamLimits

0x0a6d,	// (0x00002936) status_small_pane_g5

0x0a7c,	// (0x00002945) status_small_pane_g6_ParamLimits

0x0a7c,	// (0x00002945) status_small_pane_g6

0x0007,

0xf778,	// (0x00011641) status_small_pane_g_ParamLimits

0xf778,	// (0x00011641) status_small_pane_g

0x0aac,	// (0x00002975) status_small_pane_t1

0x0acf,	// (0x00002998) status_small_wait_pane_ParamLimits

0x0acf,	// (0x00002998) status_small_wait_pane

0xa94a,	// (0x0000c813) aid_levels_signal_ParamLimits

0xa94a,	// (0x0000c813) aid_levels_signal

0xa962,	// (0x0000c82b) signal_pane_g1_ParamLimits

0xa962,	// (0x0000c82b) signal_pane_g1

0xa97d,	// (0x0000c846) signal_pane_g2_ParamLimits

0xa97d,	// (0x0000c846) signal_pane_g2

0x0003,

0xf709,	// (0x000115d2) signal_pane_g_ParamLimits

0xf709,	// (0x000115d2) signal_pane_g

0x001d,	// (0x00001ee6) context_pane_g1

0x9e3b,	// (0x0000bd04) title_pane_g1

0x9e66,	// (0x0000bd2f) title_pane_t1

0xe583,	// (0x0001044c) title_pane_t2

0xe5a9,	// (0x00010472) title_pane_t3

0x0002,

0xf55d,	// (0x00011426) title_pane_t

0xb8a3,	// (0x0000d76c) aid_levels_battery_ParamLimits

0xb8a3,	// (0x0000d76c) aid_levels_battery

0xb8bf,	// (0x0000d788) battery_pane_g1_ParamLimits

0xb8bf,	// (0x0000d788) battery_pane_g1

0xb8dc,	// (0x0000d7a5) battery_pane_g2_ParamLimits

0xb8dc,	// (0x0000d7a5) battery_pane_g2

0x0001,

0xf7ac,	// (0x00011675) battery_pane_g_ParamLimits

0xf7ac,	// (0x00011675) battery_pane_g

0xbd88,	// (0x0000dc51) uni_indicator_pane_g1

0xbd9d,	// (0x0000dc66) uni_indicator_pane_g2

0xbdb2,	// (0x0000dc7b) uni_indicator_pane_g3

0x0005,

0xf916,	// (0x000117df) uni_indicator_pane_g

0x05e7,	// (0x000024b0) navi_icon_pane_ParamLimits

0x05e7,	// (0x000024b0) navi_icon_pane

0x052e,	// (0x000023f7) navi_midp_pane

0x0603,	// (0x000024cc) navi_navi_pane

0x060d,	// (0x000024d6) navi_text_pane_ParamLimits

0x060d,	// (0x000024d6) navi_text_pane

0xe327,	// (0x000101f0) status_small_wait_pane_g1

0xe951,	// (0x0001081a) status_small_wait_pane_g2

0x0001,

0xf911,	// (0x000117da) status_small_wait_pane_g

0xbcef,	// (0x0000dbb8) navi_navi_icon_text_pane

0xbcf7,	// (0x0000dbc0) navi_navi_pane_g1_ParamLimits

0xbcf7,	// (0x0000dbc0) navi_navi_pane_g1

0xbd09,	// (0x0000dbd2) navi_navi_pane_g2_ParamLimits

0xbd09,	// (0x0000dbd2) navi_navi_pane_g2

0x0001,

0xf8df,	// (0x000117a8) navi_navi_pane_g_ParamLimits

0xf8df,	// (0x000117a8) navi_navi_pane_g

0x2ae2,	// (0x000049ab) navi_navi_tabs_pane

0xbd1b,	// (0x0000dbe4) navi_navi_text_pane

0xbcef,	// (0x0000dbb8) navi_navi_volume_pane

0xbcdd,	// (0x0000dba6) navi_text_pane_t1

0xbcd1,	// (0x0000db9a) navi_icon_pane_g1

0x29d9,	// (0x000048a2) navi_navi_text_pane_t1

0xbcac,	// (0x0000db75) navi_navi_volume_pane_g1

0xbcb4,	// (0x0000db7d) volume_small_pane

0xbc08,	// (0x0000dad1) navi_navi_icon_text_pane_g1

0xbc10,	// (0x0000dad9) navi_navi_icon_text_pane_t1

0x0603,	// (0x000024cc) navi_tabs_2_long_pane

0x0603,	// (0x000024cc) navi_tabs_2_pane

0x0603,	// (0x000024cc) navi_tabs_3_long_pane

0x0603,	// (0x000024cc) navi_tabs_3_pane

0x0603,	// (0x000024cc) navi_tabs_4_pane

0xbbc6,	// (0x0000da8f) tabs_2_active_pane_ParamLimits

0xbbc6,	// (0x0000da8f) tabs_2_active_pane

0xbbd6,	// (0x0000da9f) tabs_2_passive_pane_ParamLimits

0xbbd6,	// (0x0000da9f) tabs_2_passive_pane

0xbb94,	// (0x0000da5d) tabs_3_active_pane_ParamLimits

0xbb94,	// (0x0000da5d) tabs_3_active_pane

0xbba4,	// (0x0000da6d) tabs_3_passive_pane_ParamLimits

0xbba4,	// (0x0000da6d) tabs_3_passive_pane

0xbbb5,	// (0x0000da7e) tabs_3_passive_pane_cp_ParamLimits

0xbbb5,	// (0x0000da7e) tabs_3_passive_pane_cp

0xbb50,	// (0x0000da19) tabs_4_active_pane_ParamLimits

0xbb50,	// (0x0000da19) tabs_4_active_pane

0xbb61,	// (0x0000da2a) tabs_4_passive_pane_ParamLimits

0xbb61,	// (0x0000da2a) tabs_4_passive_pane

0xbb72,	// (0x0000da3b) tabs_4_passive_pane_cp_ParamLimits

0xbb72,	// (0x0000da3b) tabs_4_passive_pane_cp

0xbb83,	// (0x0000da4c) tabs_4_passive_pane_cp2_ParamLimits

0xbb83,	// (0x0000da4c) tabs_4_passive_pane_cp2

0xbb2c,	// (0x0000d9f5) tabs_2_long_active_pane_ParamLimits

0xbb2c,	// (0x0000d9f5) tabs_2_long_active_pane

0xbb3e,	// (0x0000da07) tabs_2_long_passive_pane_ParamLimits

0xbb3e,	// (0x0000da07) tabs_2_long_passive_pane

0xbae1,	// (0x0000d9aa) tabs_3_long_active_pane_ParamLimits

0xbae1,	// (0x0000d9aa) tabs_3_long_active_pane

0xbafa,	// (0x0000d9c3) tabs_3_long_passive_pane_ParamLimits

0xbafa,	// (0x0000d9c3) tabs_3_long_passive_pane

0xbb13,	// (0x0000d9dc) tabs_3_long_passive_pane_cp_ParamLimits

0xbb13,	// (0x0000d9dc) tabs_3_long_passive_pane_cp

0x2752,	// (0x0000461b) volume_small_pane_g1

0xba90,	// (0x0000d959) volume_small_pane_g2

0xba99,	// (0x0000d962) volume_small_pane_g3

0xbaa2,	// (0x0000d96b) volume_small_pane_g4

0xbaab,	// (0x0000d974) volume_small_pane_g5

0xbab4,	// (0x0000d97d) volume_small_pane_g6

0xbabd,	// (0x0000d986) volume_small_pane_g7

0xbac6,	// (0x0000d98f) volume_small_pane_g8

0xbacf,	// (0x0000d998) volume_small_pane_g9

0xbad8,	// (0x0000d9a1) volume_small_pane_g10

0x0009,

0xf8ab,	// (0x00011774) volume_small_pane_g

0xe5bb,	// (0x00010484) bg_active_tab_pane_cp2_ParamLimits

0xe5bb,	// (0x00010484) bg_active_tab_pane_cp2

0x9ef2,	// (0x0000bdbb) tabs_3_active_pane_g1

0x9efa,	// (0x0000bdc3) tabs_3_active_pane_t1

0xe5bb,	// (0x00010484) bg_passive_tab_pane_cp2_ParamLimits

0xe5bb,	// (0x00010484) bg_passive_tab_pane_cp2

0x9ef2,	// (0x0000bdbb) tabs_3_passive_pane_g1

0x9efa,	// (0x0000bdc3) tabs_3_passive_pane_t1

0xe5bb,	// (0x00010484) bg_active_tab_pane_cp3_ParamLimits

0xe5bb,	// (0x00010484) bg_active_tab_pane_cp3

0x9f0c,	// (0x0000bdd5) tabs_4_active_pane_g1

0x9f14,	// (0x0000bddd) tabs_4_active_pane_t1

0xe5bb,	// (0x00010484) bg_passive_tab_pane_cp3_ParamLimits

0xe5bb,	// (0x00010484) bg_passive_tab_pane_cp3

0x9f0c,	// (0x0000bdd5) tabs_4_1_passive_pane_g1

0x9f14,	// (0x0000bddd) tabs_4_1_passive_pane_t1

0x0cee,	// (0x00002bb7) list_highlight_pane_cp2

0xbe82,	// (0x0000dd4b) list_set_pane_ParamLimits

0xbe82,	// (0x0000dd4b) list_set_pane

0xbf4a,	// (0x0000de13) main_pane_set_t1_ParamLimits

0xbf4a,	// (0x0000de13) main_pane_set_t1

0xbf6a,	// (0x0000de33) main_pane_set_t2_ParamLimits

0xbf6a,	// (0x0000de33) main_pane_set_t2

0xbf7e,	// (0x0000de47) main_pane_set_t3_ParamLimits

0xbf7e,	// (0x0000de47) main_pane_set_t3

0xbf92,	// (0x0000de5b) main_pane_set_t4_ParamLimits

0xbf92,	// (0x0000de5b) main_pane_set_t4

0x0003,

0xf97b,	// (0x00011844) main_pane_set_t_ParamLimits

0xf97b,	// (0x00011844) main_pane_set_t

0xbfa6,	// (0x0000de6f) setting_code_pane

0x3264,	// (0x0000512d) setting_slider_graphic_pane

0x3264,	// (0x0000512d) setting_slider_pane

0x3264,	// (0x0000512d) setting_text_pane

0x3264,	// (0x0000512d) setting_volume_pane

0xe5c9,	// (0x00010492) volume_set_pane

0xe5d3,	// (0x0001049c) bg_set_opt_pane_cp

0xe5e1,	// (0x000104aa) setting_slider_pane_t1

0xe5fa,	// (0x000104c3) setting_slider_pane_t2

0xe614,	// (0x000104dd) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0001142d) setting_slider_pane_t

0xe62c,	// (0x000104f5) slider_set_pane

0xe4a0,	// (0x00010369) bg_set_opt_pane_cp2

0xe642,	// (0x0001050b) setting_slider_graphic_pane_g1

0xe64b,	// (0x00010514) setting_slider_graphic_pane_t1

0xe65b,	// (0x00010524) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x00011434) setting_slider_graphic_pane_t

0xe66b,	// (0x00010534) slider_set_pane_cp

0xe4a0,	// (0x00010369) input_focus_pane_cp1

0x30f7,	// (0x00004fc0) list_set_text_pane

0xe327,	// (0x000101f0) setting_text_pane_g1

0xe4a0,	// (0x00010369) input_focus_pane_cp2

0xe327,	// (0x000101f0) setting_code_pane_g1

0xe673,	// (0x0001053c) setting_code_pane_t1

0xe681,	// (0x0001054a) set_text_pane_t1_ParamLimits

0xe681,	// (0x0001054a) set_text_pane_t1

0xedfe,	// (0x00010cc7) set_opt_bg_pane_g1

0xee06,	// (0x00010ccf) set_opt_bg_pane_g2

0x30cf,	// (0x00004f98) set_opt_bg_pane_g3

0xee16,	// (0x00010cdf) set_opt_bg_pane_g4

0xee1e,	// (0x00010ce7) set_opt_bg_pane_g5

0xee26,	// (0x00010cef) set_opt_bg_pane_g6

0x30d9,	// (0x00004fa2) set_opt_bg_pane_g7

0x30e3,	// (0x00004fac) set_opt_bg_pane_g8

0x30ed,	// (0x00004fb6) set_opt_bg_pane_g9

0x0008,

0xf968,	// (0x00011831) set_opt_bg_pane_g

0x305e,	// (0x00004f27) slider_set_pane_g1

0x306b,	// (0x00004f34) slider_set_pane_g2

0x0006,

0xf959,	// (0x00011822) slider_set_pane_g

0x2ec6,	// (0x00004d8f) volume_set_pane_g1

0x2ed0,	// (0x00004d99) volume_set_pane_g2

0x2eda,	// (0x00004da3) volume_set_pane_g3

0x2ee4,	// (0x00004dad) volume_set_pane_g4

0x2eee,	// (0x00004db7) volume_set_pane_g5

0x2ef8,	// (0x00004dc1) volume_set_pane_g6

0x2f02,	// (0x00004dcb) volume_set_pane_g7

0x2f0c,	// (0x00004dd5) volume_set_pane_g8

0x2f16,	// (0x00004ddf) volume_set_pane_g9

0x2f20,	// (0x00004de9) volume_set_pane_g10

0x0009,

0xf931,	// (0x000117fa) volume_set_pane_g

0x9f26,	// (0x0000bdef) indicator_pane_ParamLimits

0x9f26,	// (0x0000bdef) indicator_pane

0x9f52,	// (0x0000be1b) main_idle_pane_g2_ParamLimits

0x9f52,	// (0x0000be1b) main_idle_pane_g2

0x9f8a,	// (0x0000be53) main_pane_idle_g1_ParamLimits

0x9f8a,	// (0x0000be53) main_pane_idle_g1

0xe69b,	// (0x00010564) popup_clock_digital_analogue_window_ParamLimits

0xe69b,	// (0x00010564) popup_clock_digital_analogue_window

0x9fb8,	// (0x0000be81) soft_indicator_pane_ParamLimits

0x9fb8,	// (0x0000be81) soft_indicator_pane

0x9fd4,	// (0x0000be9d) wallpaper_pane_ParamLimits

0x9fd4,	// (0x0000be9d) wallpaper_pane

0xe327,	// (0x000101f0) wallpaper_pane_g1

0x9fe6,	// (0x0000beaf) indicator_pane_g1_ParamLimits

0x9fe6,	// (0x0000beaf) indicator_pane_g1

0x362e,	// (0x000054f7) navi_navi_icon_text_pane_srt_g1

0xe6c9,	// (0x00010592) soft_indicator_pane_t1

0xe6e3,	// (0x000105ac) aid_ps_area_pane

0x9fff,	// (0x0000bec8) aid_ps_clock_pane

0xe6f4,	// (0x000105bd) aid_ps_indicator_pane

0xe700,	// (0x000105c9) indicator_ps_pane_ParamLimits

0xe700,	// (0x000105c9) indicator_ps_pane

0xe70f,	// (0x000105d8) power_save_pane_g1_ParamLimits

0xe70f,	// (0x000105d8) power_save_pane_g1

0xe71b,	// (0x000105e4) power_save_pane_g2_ParamLimits

0xe71b,	// (0x000105e4) power_save_pane_g2

0xe331,	// (0x000101fa) aid_navinavi_width_pane

0xe6e3,	// (0x000105ac) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x00011439) power_save_pane_g_ParamLimits

0xf570,	// (0x00011439) power_save_pane_g

0xe729,	// (0x000105f2) power_save_pane_t1_ParamLimits

0xe729,	// (0x000105f2) power_save_pane_t1

0x9fff,	// (0x0000bec8) aid_ps_clock_pane_ParamLimits

0xe6f4,	// (0x000105bd) aid_ps_indicator_pane_ParamLimits

0xe73b,	// (0x00010604) power_save_pane_t4_ParamLimits

0xe73b,	// (0x00010604) power_save_pane_t4

0x0001,

0xf575,	// (0x0001143e) power_save_pane_t_ParamLimits

0xf575,	// (0x0001143e) power_save_pane_t

0xe765,	// (0x0001062e) power_save_t3_ParamLimits

0xe765,	// (0x0001062e) power_save_t3

0xe750,	// (0x00010619) power_save_t2_ParamLimits

0xe750,	// (0x00010619) power_save_t2

0xe77a,	// (0x00010643) indicator_ps_pane_g1

0xa00d,	// (0x0000bed6) ai_gene_pane_ParamLimits

0xa00d,	// (0x0000bed6) ai_gene_pane

0xa024,	// (0x0000beed) ai_links_pane_ParamLimits

0xa024,	// (0x0000beed) ai_links_pane

0xa03c,	// (0x0000bf05) indicator_pane_cp1_ParamLimits

0xa03c,	// (0x0000bf05) indicator_pane_cp1

0xa04b,	// (0x0000bf14) main_pane_idle_g1_cp_ParamLimits

0xa04b,	// (0x0000bf14) main_pane_idle_g1_cp

0xe783,	// (0x0001064c) popup_ai_links_title_window

0xa063,	// (0x0000bf2c) soft_indicator_pane_cp1_ParamLimits

0xa063,	// (0x0000bf2c) soft_indicator_pane_cp1

0x2d91,	// (0x00004c5a) ai_links_pane_g1

0x2d9a,	// (0x00004c63) grid_ai_links_pane

0xbd7f,	// (0x0000dc48) ai_gene_pane_1

0x2d7f,	// (0x00004c48) ai_gene_pane_2

0x2d88,	// (0x00004c51) list_highlight_pane_cp4

0xbd5b,	// (0x0000dc24) cell_ai_link_pane_ParamLimits

0xbd5b,	// (0x0000dc24) cell_ai_link_pane

0x2d4e,	// (0x00004c17) cell_ai_link_pane_g1

0xe951,	// (0x0001081a) cell_ai_link_pane_g2

0x0001,

0xf90c,	// (0x000117d5) cell_ai_link_pane_g

0xe4a0,	// (0x00010369) grid_highlight_cp2

0xe4a0,	// (0x00010369) bg_popup_sub_pane_cp1

0xe79a,	// (0x00010663) popup_ai_links_title_window_t1

0x2c9a,	// (0x00004b63) ai_gene_pane_1_g1_ParamLimits

0x2c9a,	// (0x00004b63) ai_gene_pane_1_g1

0x2ca6,	// (0x00004b6f) ai_gene_pane_1_g2_ParamLimits

0x2ca6,	// (0x00004b6f) ai_gene_pane_1_g2

0x0001,

0xf902,	// (0x000117cb) ai_gene_pane_1_g_ParamLimits

0xf902,	// (0x000117cb) ai_gene_pane_1_g

0x2cb3,	// (0x00004b7c) ai_gene_pane_1_t1_ParamLimits

0x2cb3,	// (0x00004b7c) ai_gene_pane_1_t1

0x2ce7,	// (0x00004bb0) grid_ai_soft_ind_pane

0x2c85,	// (0x00004b4e) ai_gene_pane_2_t1_ParamLimits

0x2c85,	// (0x00004b4e) ai_gene_pane_2_t1

0xa077,	// (0x0000bf40) main_pane_empty_t1_ParamLimits

0xa077,	// (0x0000bf40) main_pane_empty_t1

0xa08f,	// (0x0000bf58) main_pane_empty_t2_ParamLimits

0xa08f,	// (0x0000bf58) main_pane_empty_t2

0xa0a4,	// (0x0000bf6d) main_pane_empty_t3_ParamLimits

0xa0a4,	// (0x0000bf6d) main_pane_empty_t3

0xa0b6,	// (0x0000bf7f) main_pane_empty_t4_ParamLimits

0xa0b6,	// (0x0000bf7f) main_pane_empty_t4

0xa0c8,	// (0x0000bf91) main_pane_empty_t5_ParamLimits

0xa0c8,	// (0x0000bf91) main_pane_empty_t5

0x0004,

0xf57a,	// (0x00011443) main_pane_empty_t_ParamLimits

0xf57a,	// (0x00011443) main_pane_empty_t

0xee7e,	// (0x00010d47) bg_popup_window_pane_ParamLimits

0xee7e,	// (0x00010d47) bg_popup_window_pane

0x29e7,	// (0x000048b0) find_popup_pane_cp2_ParamLimits

0x29e7,	// (0x000048b0) find_popup_pane_cp2

0x29f3,	// (0x000048bc) heading_pane_ParamLimits

0x29f3,	// (0x000048bc) heading_pane

0xe4a0,	// (0x00010369) bg_popup_sub_pane

0xbc2d,	// (0x0000daf6) bg_popup_window_pane_g1_ParamLimits

0xbc2d,	// (0x0000daf6) bg_popup_window_pane_g1

0xbc3c,	// (0x0000db05) bg_popup_window_pane_g2_ParamLimits

0xbc3c,	// (0x0000db05) bg_popup_window_pane_g2

0xbc48,	// (0x0000db11) bg_popup_window_pane_g3_ParamLimits

0xbc48,	// (0x0000db11) bg_popup_window_pane_g3

0xbc54,	// (0x0000db1d) bg_popup_window_pane_g4_ParamLimits

0xbc54,	// (0x0000db1d) bg_popup_window_pane_g4

0xbc63,	// (0x0000db2c) bg_popup_window_pane_g5_ParamLimits

0xbc63,	// (0x0000db2c) bg_popup_window_pane_g5

0xbc73,	// (0x0000db3c) bg_popup_window_pane_g6_ParamLimits

0xbc73,	// (0x0000db3c) bg_popup_window_pane_g6

0xbc7f,	// (0x0000db48) bg_popup_window_pane_g7_ParamLimits

0xbc7f,	// (0x0000db48) bg_popup_window_pane_g7

0xbc8e,	// (0x0000db57) bg_popup_window_pane_g8_ParamLimits

0xbc8e,	// (0x0000db57) bg_popup_window_pane_g8

0xbc9d,	// (0x0000db66) bg_popup_window_pane_g9_ParamLimits

0xbc9d,	// (0x0000db66) bg_popup_window_pane_g9

0x29bc,	// (0x00004885) bg_popup_window_pane_g10_ParamLimits

0x29bc,	// (0x00004885) bg_popup_window_pane_g10

0x0009,

0xf8ca,	// (0x00011793) bg_popup_window_pane_g_ParamLimits

0xf8ca,	// (0x00011793) bg_popup_window_pane_g

0x28e5,	// (0x000047ae) bg_popup_heading_pane_ParamLimits

0x28e5,	// (0x000047ae) bg_popup_heading_pane

0x3571,	// (0x0000543a) tabs_4_passive_pane_cp_srt_ParamLimits

0x3571,	// (0x0000543a) tabs_4_passive_pane_cp_srt

0x3583,	// (0x0000544c) tabs_4_passive_pane_srt_ParamLimits

0x28f9,	// (0x000047c2) heading_pane_g2

0x3583,	// (0x0000544c) tabs_4_passive_pane_srt

0x1a7a,	// (0x00003943) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1a7a,	// (0x00003943) bg_passive_tab_pane_cp3_srt

0x2901,	// (0x000047ca) heading_pane_t1_ParamLimits

0x2901,	// (0x000047ca) heading_pane_t1

0x2918,	// (0x000047e1) heading_pane_t2_ParamLimits

0x2918,	// (0x000047e1) heading_pane_t2

0x0001,

0xf8c5,	// (0x0001178e) heading_pane_t_ParamLimits

0xf8c5,	// (0x0001178e) heading_pane_t

0x22b5,	// (0x0000417e) bg_popup_heading_pane_g1

0x2364,	// (0x0000422d) bg_popup_heading_pane_g2

0x236e,	// (0x00004237) bg_popup_heading_pane_g3

0x2378,	// (0x00004241) bg_popup_heading_pane_g4

0x2382,	// (0x0000424b) bg_popup_heading_pane_g5

0x238c,	// (0x00004255) bg_popup_heading_pane_g6

0x2394,	// (0x0000425d) bg_popup_heading_pane_g7

0x239c,	// (0x00004265) bg_popup_heading_pane_g8

0x23a6,	// (0x0000426f) bg_popup_heading_pane_g9

0x0008,

0xf881,	// (0x0001174a) bg_popup_heading_pane_g

0x18dd,	// (0x000037a6) bg_popup_sub_pane_g1

0x18e5,	// (0x000037ae) bg_popup_sub_pane_g2

0x18ed,	// (0x000037b6) bg_popup_sub_pane_g3

0x18f5,	// (0x000037be) bg_popup_sub_pane_g4

0x18fd,	// (0x000037c6) bg_popup_sub_pane_g5

0x1905,	// (0x000037ce) bg_popup_sub_pane_g6

0x190d,	// (0x000037d6) bg_popup_sub_pane_g7

0x1915,	// (0x000037de) bg_popup_sub_pane_g8

0x191d,	// (0x000037e6) bg_popup_sub_pane_g9

0x0008,

0xf85b,	// (0x00011724) bg_popup_sub_pane_g

0xe5bb,	// (0x00010484) bg_popup_window_pane_cp5_ParamLimits

0xe5bb,	// (0x00010484) bg_popup_window_pane_cp5

0xe7b7,	// (0x00010680) popup_note_window_g1_ParamLimits

0xe7b7,	// (0x00010680) popup_note_window_g1

0xe7c3,	// (0x0001068c) popup_note_window_t1_ParamLimits

0xe7c3,	// (0x0001068c) popup_note_window_t1

0xe7d9,	// (0x000106a2) popup_note_window_t2_ParamLimits

0xe7d9,	// (0x000106a2) popup_note_window_t2

0xe7ef,	// (0x000106b8) popup_note_window_t3_ParamLimits

0xe7ef,	// (0x000106b8) popup_note_window_t3

0xe805,	// (0x000106ce) popup_note_window_t4_ParamLimits

0xe805,	// (0x000106ce) popup_note_window_t4

0xe82d,	// (0x000106f6) popup_note_window_t5_ParamLimits

0xe82d,	// (0x000106f6) popup_note_window_t5

0x0004,

0xf585,	// (0x0001144e) popup_note_window_t_ParamLimits

0xf585,	// (0x0001144e) popup_note_window_t

0xe851,	// (0x0001071a) bg_popup_window_pane_cp6_ParamLimits

0xe851,	// (0x0001071a) bg_popup_window_pane_cp6

0x2231,	// (0x000040fa) popup_note_image_window_g1_ParamLimits

0x2231,	// (0x000040fa) popup_note_image_window_g1

0x223d,	// (0x00004106) popup_note_image_window_g2_ParamLimits

0x223d,	// (0x00004106) popup_note_image_window_g2

0x0001,

0xf84f,	// (0x00011718) popup_note_image_window_g_ParamLimits

0xf84f,	// (0x00011718) popup_note_image_window_g

0x2256,	// (0x0000411f) popup_note_image_window_t1_ParamLimits

0x2256,	// (0x0000411f) popup_note_image_window_t1

0x226f,	// (0x00004138) popup_note_image_window_t2_ParamLimits

0x226f,	// (0x00004138) popup_note_image_window_t2

0x2288,	// (0x00004151) popup_note_image_window_t3_ParamLimits

0x2288,	// (0x00004151) popup_note_image_window_t3

0x0002,

0xf854,	// (0x0001171d) popup_note_image_window_t_ParamLimits

0xf854,	// (0x0001171d) popup_note_image_window_t

0x20f1,	// (0x00003fba) bg_popup_window_pane_cp7_ParamLimits

0x20f1,	// (0x00003fba) bg_popup_window_pane_cp7

0x2121,	// (0x00003fea) popup_note_wait_window_g1_ParamLimits

0x2121,	// (0x00003fea) popup_note_wait_window_g1

0x212d,	// (0x00003ff6) popup_note_wait_window_g2_ParamLimits

0x212d,	// (0x00003ff6) popup_note_wait_window_g2

0x0002,

0xf83d,	// (0x00011706) popup_note_wait_window_g_ParamLimits

0xf83d,	// (0x00011706) popup_note_wait_window_g

0x2145,	// (0x0000400e) popup_note_wait_window_t1_ParamLimits

0x2145,	// (0x0000400e) popup_note_wait_window_t1

0x216c,	// (0x00004035) popup_note_wait_window_t2_ParamLimits

0x216c,	// (0x00004035) popup_note_wait_window_t2

0x218a,	// (0x00004053) popup_note_wait_window_t3_ParamLimits

0x218a,	// (0x00004053) popup_note_wait_window_t3

0x219d,	// (0x00004066) popup_note_wait_window_t4_ParamLimits

0x219d,	// (0x00004066) popup_note_wait_window_t4

0x0004,

0xf844,	// (0x0001170d) popup_note_wait_window_t_ParamLimits

0xf844,	// (0x0001170d) popup_note_wait_window_t

0x21c2,	// (0x0000408b) wait_bar_pane_ParamLimits

0x21c2,	// (0x0000408b) wait_bar_pane

0xe4a0,	// (0x00010369) wait_anim_pane

0xe4a0,	// (0x00010369) wait_border_pane

0xe327,	// (0x000101f0) wait_anim_pane_g1

0xe327,	// (0x000101f0) wait_anim_pane_g2

0x0001,

0xf704,	// (0x000115cd) wait_anim_pane_g

0x2095,	// (0x00003f5e) wait_border_pane_g1

0x20a0,	// (0x00003f69) wait_border_pane_g2

0x20a9,	// (0x00003f72) wait_border_pane_g3

0x0002,

0xf836,	// (0x000116ff) wait_border_pane_g

0x1eff,	// (0x00003dc8) bg_popup_window_pane_cp16_ParamLimits

0x1eff,	// (0x00003dc8) bg_popup_window_pane_cp16

0x1fff,	// (0x00003ec8) indicator_popup_pane_cp4_ParamLimits

0x1fff,	// (0x00003ec8) indicator_popup_pane_cp4

0x2013,	// (0x00003edc) popup_query_data_window_t1_ParamLimits

0x2013,	// (0x00003edc) popup_query_data_window_t1

0x2025,	// (0x00003eee) popup_query_data_window_t2_ParamLimits

0x2025,	// (0x00003eee) popup_query_data_window_t2

0x203e,	// (0x00003f07) popup_query_data_window_t3_ParamLimits

0x203e,	// (0x00003f07) popup_query_data_window_t3

0x0002,

0xf82f,	// (0x000116f8) popup_query_data_window_t_ParamLimits

0xf82f,	// (0x000116f8) popup_query_data_window_t

0x2058,	// (0x00003f21) query_popup_data_pane_ParamLimits

0x2058,	// (0x00003f21) query_popup_data_pane

0x206c,	// (0x00003f35) query_popup_data_pane_cp1_ParamLimits

0x206c,	// (0x00003f35) query_popup_data_pane_cp1

0x1eff,	// (0x00003dc8) bg_popup_window_pane_cp10_ParamLimits

0x1eff,	// (0x00003dc8) bg_popup_window_pane_cp10

0x1f31,	// (0x00003dfa) indicator_popup_pane_ParamLimits

0x1f31,	// (0x00003dfa) indicator_popup_pane

0x1f53,	// (0x00003e1c) popup_query_code_window_t1_ParamLimits

0x1f53,	// (0x00003e1c) popup_query_code_window_t1

0x1f6d,	// (0x00003e36) popup_query_code_window_t2_ParamLimits

0x1f6d,	// (0x00003e36) popup_query_code_window_t2

0x1fb6,	// (0x00003e7f) popup_query_code_window_t3_ParamLimits

0x1fb6,	// (0x00003e7f) popup_query_code_window_t3

0x0002,

0xf828,	// (0x000116f1) popup_query_code_window_t_ParamLimits

0xf828,	// (0x000116f1) popup_query_code_window_t

0x1fe5,	// (0x00003eae) query_popup_pane_ParamLimits

0x1fe5,	// (0x00003eae) query_popup_pane

0xe851,	// (0x0001071a) bg_popup_window_pane_cp15_ParamLimits

0xe851,	// (0x0001071a) bg_popup_window_pane_cp15

0xe871,	// (0x0001073a) indicator_popup_pane_cp1_ParamLimits

0xe871,	// (0x0001073a) indicator_popup_pane_cp1

0xe884,	// (0x0001074d) indicator_popup_pane_cp2_ParamLimits

0xe884,	// (0x0001074d) indicator_popup_pane_cp2

0xe89f,	// (0x00010768) popup_query_data_code_window_g1_ParamLimits

0xe89f,	// (0x00010768) popup_query_data_code_window_g1

0xe8b2,	// (0x0001077b) popup_query_data_code_window_t1_ParamLimits

0xe8b2,	// (0x0001077b) popup_query_data_code_window_t1

0xe8c4,	// (0x0001078d) popup_query_data_code_window_t2_ParamLimits

0xe8c4,	// (0x0001078d) popup_query_data_code_window_t2

0xe8d6,	// (0x0001079f) popup_query_data_code_window_t3_ParamLimits

0xe8d6,	// (0x0001079f) popup_query_data_code_window_t3

0xe8ec,	// (0x000107b5) popup_query_data_code_window_t4_ParamLimits

0xe8ec,	// (0x000107b5) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x00011459) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x00011459) popup_query_data_code_window_t

0x05a3,	// (0x0000246c) list_single_midp_graphic_pane_g3

0xe906,	// (0x000107cf) query_popup_data_pane_cp2_ParamLimits

0xe919,	// (0x000107e2) query_popup_pane_cp2_ParamLimits

0xe919,	// (0x000107e2) query_popup_pane_cp2

0xe4a0,	// (0x00010369) bg_popup_window_pane_cp11

0x1ef7,	// (0x00003dc0) heading_pane_cp5

0xe9af,	// (0x00010878) listscroll_popup_info_pane

0xe4a0,	// (0x00010369) input_focus_pane_cp3

0xe934,	// (0x000107fd) query_popup_pane_t1

0xe942,	// (0x0001080b) list_popup_info_pane_ParamLimits

0xe942,	// (0x0001080b) list_popup_info_pane

0xe951,	// (0x0001081a) listscroll_popup_info_pane_g1

0xe959,	// (0x00010822) scroll_pane_cp7

0xe963,	// (0x0001082c) popup_info_list_pane_t1_ParamLimits

0xe963,	// (0x0001082c) popup_info_list_pane_t1

0xe97d,	// (0x00010846) popup_info_list_pane_t2_ParamLimits

0xe97d,	// (0x00010846) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x00011462) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x00011462) popup_info_list_pane_t

0xe4a0,	// (0x00010369) bg_popup_window_pane_cp12

0x3665,	// (0x0000552e) find_popup_pane

0xe5d3,	// (0x0001049c) bg_popup_window_pane_cp3

0xe997,	// (0x00010860) heading_pane_cp3

0xe9a3,	// (0x0001086c) listscroll_popup_graphic_pane

0xe4a0,	// (0x00010369) bg_popup_window_pane_cp4

0xa12a,	// (0x0000bff3) heading_pane_cp4

0xe9af,	// (0x00010878) listscroll_popup_colour_pane

0xa134,	// (0x0000bffd) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa134,	// (0x0000bffd) cell_large_graphic_colour_none_popup_pane

0xa148,	// (0x0000c011) grid_large_graphic_colour_popup_pane_ParamLimits

0xa148,	// (0x0000c011) grid_large_graphic_colour_popup_pane

0xa16c,	// (0x0000c035) listscroll_popup_colour_pane_g1_ParamLimits

0xa16c,	// (0x0000c035) listscroll_popup_colour_pane_g1

0xa183,	// (0x0000c04c) listscroll_popup_colour_pane_g2_ParamLimits

0xa183,	// (0x0000c04c) listscroll_popup_colour_pane_g2

0xa19a,	// (0x0000c063) listscroll_popup_colour_pane_g3_ParamLimits

0xa19a,	// (0x0000c063) listscroll_popup_colour_pane_g3

0xa1aa,	// (0x0000c073) listscroll_popup_colour_pane_g4_ParamLimits

0xa1aa,	// (0x0000c073) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x00011467) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x00011467) listscroll_popup_colour_pane_g

0xe9b7,	// (0x00010880) scroll_pane_cp6_ParamLimits

0xe9b7,	// (0x00010880) scroll_pane_cp6

0xa1ba,	// (0x0000c083) cell_large_graphic_colour_popup_pane_ParamLimits

0xa1ba,	// (0x0000c083) cell_large_graphic_colour_popup_pane

0xe9c9,	// (0x00010892) cell_large_graphic_colour_none_popup_pane_t1

0xe4a0,	// (0x00010369) grid_highlight_pane_cp5

0xe9d8,	// (0x000108a1) cell_large_graphic_colour_popup_pane_g1

0xe9e0,	// (0x000108a9) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x00011470) cell_large_graphic_colour_popup_pane_g

0xe9e8,	// (0x000108b1) cell_large_graphic_colour_popup_pane_g2_copy1

0xe9f1,	// (0x000108ba) grid_highlight_pane_cp4

0xe9f9,	// (0x000108c2) bg_popup_window_pane_cp8_ParamLimits

0xe9f9,	// (0x000108c2) bg_popup_window_pane_cp8

0xea14,	// (0x000108dd) popup_snote_single_text_window_g1_ParamLimits

0xea14,	// (0x000108dd) popup_snote_single_text_window_g1

0xea26,	// (0x000108ef) popup_snote_single_text_window_t1_ParamLimits

0xea26,	// (0x000108ef) popup_snote_single_text_window_t1

0xea39,	// (0x00010902) popup_snote_single_text_window_t2_ParamLimits

0xea39,	// (0x00010902) popup_snote_single_text_window_t2

0xea4c,	// (0x00010915) popup_snote_single_text_window_t3_ParamLimits

0xea4c,	// (0x00010915) popup_snote_single_text_window_t3

0xea85,	// (0x0001094e) popup_snote_single_text_window_t4_ParamLimits

0xea85,	// (0x0001094e) popup_snote_single_text_window_t4

0xeab9,	// (0x00010982) popup_snote_single_text_window_t5_ParamLimits

0xeab9,	// (0x00010982) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x00011475) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x00011475) popup_snote_single_text_window_t

0xeae8,	// (0x000109b1) bg_popup_window_pane_cp9_ParamLimits

0xeae8,	// (0x000109b1) bg_popup_window_pane_cp9

0xea14,	// (0x000108dd) popup_snote_single_graphic_window_g1_ParamLimits

0xea14,	// (0x000108dd) popup_snote_single_graphic_window_g1

0xeaf6,	// (0x000109bf) popup_snote_single_graphic_window_g2_ParamLimits

0xeaf6,	// (0x000109bf) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x00011480) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x00011480) popup_snote_single_graphic_window_g

0xeb02,	// (0x000109cb) popup_snote_single_graphic_window_t1_ParamLimits

0xeb02,	// (0x000109cb) popup_snote_single_graphic_window_t1

0xeb15,	// (0x000109de) popup_snote_single_graphic_window_t2_ParamLimits

0xeb15,	// (0x000109de) popup_snote_single_graphic_window_t2

0xeb28,	// (0x000109f1) popup_snote_single_graphic_window_t3_ParamLimits

0xeb28,	// (0x000109f1) popup_snote_single_graphic_window_t3

0xeb61,	// (0x00010a2a) popup_snote_single_graphic_window_t4_ParamLimits

0xeb61,	// (0x00010a2a) popup_snote_single_graphic_window_t4

0xeb95,	// (0x00010a5e) popup_snote_single_graphic_window_t5_ParamLimits

0xeb95,	// (0x00010a5e) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x00011485) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x00011485) popup_snote_single_graphic_window_t

0x34eb,	// (0x000053b4) grid_graphic_popup_pane_ParamLimits

0x34eb,	// (0x000053b4) grid_graphic_popup_pane

0x3519,	// (0x000053e2) listscroll_popup_graphic_pane_g1_ParamLimits

0x3519,	// (0x000053e2) listscroll_popup_graphic_pane_g1

0xc0f0,	// (0x0000dfb9) listscroll_popup_graphic_pane_g2_ParamLimits

0xc0f0,	// (0x0000dfb9) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a5,	// (0x0001186e) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a5,	// (0x0001186e) listscroll_popup_graphic_pane_g

0x3541,	// (0x0000540a) scroll_pane_cp5

0xc0af,	// (0x0000df78) cell_graphic_popup_pane_ParamLimits

0xc0af,	// (0x0000df78) cell_graphic_popup_pane

0x3474,	// (0x0000533d) cell_graphic_popup_pane_g1

0x347c,	// (0x00005345) cell_graphic_popup_pane_g2

0xe9e8,	// (0x000108b1) cell_graphic_popup_pane_g3

0x0002,

0xf99e,	// (0x00011867) cell_graphic_popup_pane_g

0x3485,	// (0x0000534e) cell_graphic_popup_pane_t2

0xe9f1,	// (0x000108ba) grid_highlight_pane_cp3

0xebd6,	// (0x00010a9f) list_gen_pane_ParamLimits

0xebd6,	// (0x00010a9f) list_gen_pane

0xebfe,	// (0x00010ac7) scroll_pane

0xc066,	// (0x0000df2f) bg_list_pane_g1_ParamLimits

0xc066,	// (0x0000df2f) bg_list_pane_g1

0x33e9,	// (0x000052b2) bg_list_pane_g2_ParamLimits

0x33e9,	// (0x000052b2) bg_list_pane_g2

0x33fe,	// (0x000052c7) bg_list_pane_g3_ParamLimits

0x33fe,	// (0x000052c7) bg_list_pane_g3

0x3412,	// (0x000052db) bg_list_pane_g4_ParamLimits

0x3412,	// (0x000052db) bg_list_pane_g4

0xc083,	// (0x0000df4c) bg_list_pane_g5_ParamLimits

0xc083,	// (0x0000df4c) bg_list_pane_g5

0x0004,

0xf993,	// (0x0001185c) bg_list_pane_g_ParamLimits

0xf993,	// (0x0001185c) bg_list_pane_g

0xc000,	// (0x0000dec9) list_double2_graphic_large_graphic_pane_ParamLimits

0xc000,	// (0x0000dec9) list_double2_graphic_large_graphic_pane

0xc000,	// (0x0000dec9) list_double2_graphic_pane_ParamLimits

0xc000,	// (0x0000dec9) list_double2_graphic_pane

0xc000,	// (0x0000dec9) list_double2_large_graphic_pane_ParamLimits

0xc000,	// (0x0000dec9) list_double2_large_graphic_pane

0xc000,	// (0x0000dec9) list_double2_pane_ParamLimits

0xc000,	// (0x0000dec9) list_double2_pane

0xc000,	// (0x0000dec9) list_double_graphic_heading_pane_ParamLimits

0xc000,	// (0x0000dec9) list_double_graphic_heading_pane

0xc000,	// (0x0000dec9) list_double_graphic_pane_ParamLimits

0xc000,	// (0x0000dec9) list_double_graphic_pane

0xc000,	// (0x0000dec9) list_double_heading_pane_ParamLimits

0xc000,	// (0x0000dec9) list_double_heading_pane

0xc000,	// (0x0000dec9) list_double_large_graphic_pane_ParamLimits

0xc000,	// (0x0000dec9) list_double_large_graphic_pane

0xc000,	// (0x0000dec9) list_double_number_pane_ParamLimits

0xc000,	// (0x0000dec9) list_double_number_pane

0xc000,	// (0x0000dec9) list_double_pane_ParamLimits

0xc000,	// (0x0000dec9) list_double_pane

0xc000,	// (0x0000dec9) list_double_time_pane_ParamLimits

0xc000,	// (0x0000dec9) list_double_time_pane

0xc000,	// (0x0000dec9) list_setting_number_pane_ParamLimits

0xc000,	// (0x0000dec9) list_setting_number_pane

0xc000,	// (0x0000dec9) list_setting_pane_ParamLimits

0xc000,	// (0x0000dec9) list_setting_pane

0xc014,	// (0x0000dedd) list_single_2graphic_pane_ParamLimits

0xc014,	// (0x0000dedd) list_single_2graphic_pane

0xc014,	// (0x0000dedd) list_single_graphic_heading_pane_ParamLimits

0xc014,	// (0x0000dedd) list_single_graphic_heading_pane

0xc014,	// (0x0000dedd) list_single_graphic_pane_ParamLimits

0xc014,	// (0x0000dedd) list_single_graphic_pane

0xc014,	// (0x0000dedd) list_single_heading_pane_ParamLimits

0xc014,	// (0x0000dedd) list_single_heading_pane

0xc014,	// (0x0000dedd) list_single_large_graphic_pane_ParamLimits

0xc014,	// (0x0000dedd) list_single_large_graphic_pane

0xc014,	// (0x0000dedd) list_single_number_heading_pane_ParamLimits

0xc014,	// (0x0000dedd) list_single_number_heading_pane

0xc014,	// (0x0000dedd) list_single_number_pane_ParamLimits

0xc014,	// (0x0000dedd) list_single_number_pane

0xc014,	// (0x0000dedd) list_single_pane_ParamLimits

0xc014,	// (0x0000dedd) list_single_pane

0xe4a0,	// (0x00010369) list_highlight_pane_cp1

0x06ea,	// (0x000025b3) list_single_pane_g1_ParamLimits

0x06ea,	// (0x000025b3) list_single_pane_g1

0x1781,	// (0x0000364a) list_single_pane_g2_ParamLimits

0x1781,	// (0x0000364a) list_single_pane_g2

0x0001,

0xf5ce,	// (0x00011497) list_single_pane_g_ParamLimits

0xf5ce,	// (0x00011497) list_single_pane_g

0x3c8a,	// (0x00005b53) list_single_pane_t1_ParamLimits

0x3c8a,	// (0x00005b53) list_single_pane_t1

0x06ea,	// (0x000025b3) list_single_number_pane_g1_ParamLimits

0x06ea,	// (0x000025b3) list_single_number_pane_g1

0x1781,	// (0x0000364a) list_single_number_pane_g2_ParamLimits

0x1781,	// (0x0000364a) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x00011497) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x00011497) list_single_number_pane_g

0x186b,	// (0x00003734) list_single_number_pane_t1_ParamLimits

0x186b,	// (0x00003734) list_single_number_pane_t1

0xbe1e,	// (0x0000dce7) list_single_number_pane_t2_ParamLimits

0xbe1e,	// (0x0000dce7) list_single_number_pane_t2

0x0001,

0xf954,	// (0x0001181d) list_single_number_pane_t_ParamLimits

0xf954,	// (0x0001181d) list_single_number_pane_t

0x5536,	// (0x000073ff) list_single_graphic_pane_g1_ParamLimits

0x5536,	// (0x000073ff) list_single_graphic_pane_g1

0x06ea,	// (0x000025b3) list_single_graphic_pane_g2_ParamLimits

0x06ea,	// (0x000025b3) list_single_graphic_pane_g2

0x1781,	// (0x0000364a) list_single_graphic_pane_g3_ParamLimits

0x1781,	// (0x0000364a) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x00011490) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x00011490) list_single_graphic_pane_g

0xa1e5,	// (0x0000c0ae) list_single_graphic_pane_t1_ParamLimits

0xa1e5,	// (0x0000c0ae) list_single_graphic_pane_t1

0x06ea,	// (0x000025b3) list_single_heading_pane_g1_ParamLimits

0x06ea,	// (0x000025b3) list_single_heading_pane_g1

0x1781,	// (0x0000364a) list_single_heading_pane_g2_ParamLimits

0x1781,	// (0x0000364a) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x00011497) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x00011497) list_single_heading_pane_g

0x3cac,	// (0x00005b75) list_single_heading_pane_t1_ParamLimits

0x3cac,	// (0x00005b75) list_single_heading_pane_t1

0xa1fb,	// (0x0000c0c4) list_single_heading_pane_t2_ParamLimits

0xa1fb,	// (0x0000c0c4) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0001149c) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0001149c) list_single_heading_pane_t

0x06ea,	// (0x000025b3) list_single_number_heading_pane_g1_ParamLimits

0x06ea,	// (0x000025b3) list_single_number_heading_pane_g1

0x1781,	// (0x0000364a) list_single_number_heading_pane_g2_ParamLimits

0x1781,	// (0x0000364a) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x00011497) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x00011497) list_single_number_heading_pane_g

0x3cac,	// (0x00005b75) list_single_number_heading_pane_t1_ParamLimits

0x3cac,	// (0x00005b75) list_single_number_heading_pane_t1

0xa20d,	// (0x0000c0d6) list_single_number_heading_pane_t2_ParamLimits

0xa20d,	// (0x0000c0d6) list_single_number_heading_pane_t2

0x3c66,	// (0x00005b2f) list_single_number_heading_pane_t3_ParamLimits

0x3c66,	// (0x00005b2f) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x000114a1) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x000114a1) list_single_number_heading_pane_t

0x1775,	// (0x0000363e) list_single_graphic_heading_pane_g1_ParamLimits

0x1775,	// (0x0000363e) list_single_graphic_heading_pane_g1

0xa21f,	// (0x0000c0e8) list_single_graphic_heading_pane_g4_ParamLimits

0xa21f,	// (0x0000c0e8) list_single_graphic_heading_pane_g4

0x1781,	// (0x0000364a) list_single_graphic_heading_pane_g5_ParamLimits

0x1781,	// (0x0000364a) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x000114a8) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x000114a8) list_single_graphic_heading_pane_g

0x3cac,	// (0x00005b75) list_single_graphic_heading_pane_t1_ParamLimits

0x3cac,	// (0x00005b75) list_single_graphic_heading_pane_t1

0xa230,	// (0x0000c0f9) list_single_graphic_heading_pane_t2_ParamLimits

0xa230,	// (0x0000c0f9) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x000114af) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x000114af) list_single_graphic_heading_pane_t

0x3ca0,	// (0x00005b69) list_single_large_graphic_pane_g1_ParamLimits

0x3ca0,	// (0x00005b69) list_single_large_graphic_pane_g1

0x06ea,	// (0x000025b3) list_single_large_graphic_pane_g2_ParamLimits

0x06ea,	// (0x000025b3) list_single_large_graphic_pane_g2

0x1781,	// (0x0000364a) list_single_large_graphic_pane_g3_ParamLimits

0x1781,	// (0x0000364a) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x000114b4) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x000114b4) list_single_large_graphic_pane_g

0x20a0,	// (0x00003f69) wait_border_pane_g2_copy1

0xa242,	// (0x0000c10b) list_single_large_graphic_pane_g4_cp2

0x3cac,	// (0x00005b75) list_single_large_graphic_pane_t1_ParamLimits

0x3cac,	// (0x00005b75) list_single_large_graphic_pane_t1

0xa24a,	// (0x0000c113) list_double_pane_g1_ParamLimits

0xa24a,	// (0x0000c113) list_double_pane_g1

0xa256,	// (0x0000c11f) list_double_pane_g2_ParamLimits

0xa256,	// (0x0000c11f) list_double_pane_g2

0x0001,

0xf5f2,	// (0x000114bb) list_double_pane_g_ParamLimits

0xf5f2,	// (0x000114bb) list_double_pane_g

0xa262,	// (0x0000c12b) list_double_pane_t1_ParamLimits

0xa262,	// (0x0000c12b) list_double_pane_t1

0xa278,	// (0x0000c141) list_double_pane_t2_ParamLimits

0xa278,	// (0x0000c141) list_double_pane_t2

0x0001,

0xf5f7,	// (0x000114c0) list_double_pane_t_ParamLimits

0xf5f7,	// (0x000114c0) list_double_pane_t

0xa28a,	// (0x0000c153) list_double2_pane_g1_ParamLimits

0xa28a,	// (0x0000c153) list_double2_pane_g1

0xa29b,	// (0x0000c164) list_double2_pane_g2_ParamLimits

0xa29b,	// (0x0000c164) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x000114c5) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x000114c5) list_double2_pane_g

0xa2a7,	// (0x0000c170) list_double2_pane_t1_ParamLimits

0xa2a7,	// (0x0000c170) list_double2_pane_t1

0xa2bd,	// (0x0000c186) list_double2_pane_t2_ParamLimits

0xa2bd,	// (0x0000c186) list_double2_pane_t2

0x0001,

0xf601,	// (0x000114ca) list_double2_pane_t_ParamLimits

0xf601,	// (0x000114ca) list_double2_pane_t

0xa24a,	// (0x0000c113) list_double_number_pane_g1_ParamLimits

0xa24a,	// (0x0000c113) list_double_number_pane_g1

0xa256,	// (0x0000c11f) list_double_number_pane_g2_ParamLimits

0xa256,	// (0x0000c11f) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x000114bb) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x000114bb) list_double_number_pane_g

0xa2cf,	// (0x0000c198) list_double_number_pane_t1_ParamLimits

0xa2cf,	// (0x0000c198) list_double_number_pane_t1

0xa2e1,	// (0x0000c1aa) list_double_number_pane_t2_ParamLimits

0xa2e1,	// (0x0000c1aa) list_double_number_pane_t2

0xa2f7,	// (0x0000c1c0) list_double_number_pane_t3_ParamLimits

0xa2f7,	// (0x0000c1c0) list_double_number_pane_t3

0x0002,

0xf606,	// (0x000114cf) list_double_number_pane_t_ParamLimits

0xf606,	// (0x000114cf) list_double_number_pane_t

0xec32,	// (0x00010afb) list_double_graphic_pane_g1_ParamLimits

0xec32,	// (0x00010afb) list_double_graphic_pane_g1

0xa309,	// (0x0000c1d2) list_double_graphic_pane_g2_ParamLimits

0xa309,	// (0x0000c1d2) list_double_graphic_pane_g2

0xa318,	// (0x0000c1e1) list_double_graphic_pane_g3_ParamLimits

0xa318,	// (0x0000c1e1) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x000114d6) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x000114d6) list_double_graphic_pane_g

0xa330,	// (0x0000c1f9) list_double_graphic_pane_t1_ParamLimits

0xa330,	// (0x0000c1f9) list_double_graphic_pane_t1

0xa346,	// (0x0000c20f) list_double_graphic_pane_t2_ParamLimits

0xa346,	// (0x0000c20f) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x000114df) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x000114df) list_double_graphic_pane_t

0xa358,	// (0x0000c221) list_double2_graphic_pane_g1_ParamLimits

0xa358,	// (0x0000c221) list_double2_graphic_pane_g1

0xa364,	// (0x0000c22d) list_double2_graphic_pane_g2_ParamLimits

0xa364,	// (0x0000c22d) list_double2_graphic_pane_g2

0xa29b,	// (0x0000c164) list_double2_graphic_pane_g3_ParamLimits

0xa29b,	// (0x0000c164) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x000114e4) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x000114e4) list_double2_graphic_pane_g

0xa370,	// (0x0000c239) list_double2_graphic_pane_t1_ParamLimits

0xa370,	// (0x0000c239) list_double2_graphic_pane_t1

0xa386,	// (0x0000c24f) list_double2_graphic_pane_t2_ParamLimits

0xa386,	// (0x0000c24f) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x000114eb) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x000114eb) list_double2_graphic_pane_t

0xa398,	// (0x0000c261) list_double_large_graphic_pane_g1_ParamLimits

0xa398,	// (0x0000c261) list_double_large_graphic_pane_g1

0xa3c3,	// (0x0000c28c) list_double_large_graphic_pane_g2_ParamLimits

0xa3c3,	// (0x0000c28c) list_double_large_graphic_pane_g2

0xa256,	// (0x0000c11f) list_double_large_graphic_pane_g3_ParamLimits

0xa256,	// (0x0000c11f) list_double_large_graphic_pane_g3

0xa3d4,	// (0x0000c29d) list_double_large_graphic_pane_g4_ParamLimits

0xa3d4,	// (0x0000c29d) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x000114f0) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x000114f0) list_double_large_graphic_pane_g

0xa3e6,	// (0x0000c2af) list_double_large_graphic_pane_t1_ParamLimits

0xa3e6,	// (0x0000c2af) list_double_large_graphic_pane_t1

0xa3ff,	// (0x0000c2c8) list_double_large_graphic_pane_t2_ParamLimits

0xa3ff,	// (0x0000c2c8) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x000114fb) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x000114fb) list_double_large_graphic_pane_t

0xa411,	// (0x0000c2da) list_double2_large_graphic_pane_g1_ParamLimits

0xa411,	// (0x0000c2da) list_double2_large_graphic_pane_g1

0xa28a,	// (0x0000c153) list_double2_large_graphic_pane_g2_ParamLimits

0xa28a,	// (0x0000c153) list_double2_large_graphic_pane_g2

0xa29b,	// (0x0000c164) list_double2_large_graphic_pane_g3_ParamLimits

0xa29b,	// (0x0000c164) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x00011500) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x00011500) list_double2_large_graphic_pane_g

0xa41d,	// (0x0000c2e6) list_double2_large_graphic_pane_t1_ParamLimits

0xa41d,	// (0x0000c2e6) list_double2_large_graphic_pane_t1

0xa433,	// (0x0000c2fc) list_double2_large_graphic_pane_t2_ParamLimits

0xa433,	// (0x0000c2fc) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x00011507) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x00011507) list_double2_large_graphic_pane_t

0xa445,	// (0x0000c30e) list_double_heading_pane_g1_ParamLimits

0xa445,	// (0x0000c30e) list_double_heading_pane_g1

0xa456,	// (0x0000c31f) list_double_heading_pane_g2_ParamLimits

0xa456,	// (0x0000c31f) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0001150c) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0001150c) list_double_heading_pane_g

0xa462,	// (0x0000c32b) list_double_heading_pane_t1_ParamLimits

0xa462,	// (0x0000c32b) list_double_heading_pane_t1

0xa478,	// (0x0000c341) list_double_heading_pane_t2_ParamLimits

0xa478,	// (0x0000c341) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x00011511) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x00011511) list_double_heading_pane_t

0xa48a,	// (0x0000c353) list_double_graphic_heading_pane_g1_ParamLimits

0xa48a,	// (0x0000c353) list_double_graphic_heading_pane_g1

0xa445,	// (0x0000c30e) list_double_graphic_heading_pane_g2_ParamLimits

0xa445,	// (0x0000c30e) list_double_graphic_heading_pane_g2

0xa456,	// (0x0000c31f) list_double_graphic_heading_pane_g3_ParamLimits

0xa456,	// (0x0000c31f) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x00011516) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x00011516) list_double_graphic_heading_pane_g

0xa496,	// (0x0000c35f) list_double_graphic_heading_pane_t1_ParamLimits

0xa496,	// (0x0000c35f) list_double_graphic_heading_pane_t1

0xa4ac,	// (0x0000c375) list_double_graphic_heading_pane_t2_ParamLimits

0xa4ac,	// (0x0000c375) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0001151d) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0001151d) list_double_graphic_heading_pane_t

0xa3c3,	// (0x0000c28c) list_double_time_pane_g1_ParamLimits

0xa3c3,	// (0x0000c28c) list_double_time_pane_g1

0xa256,	// (0x0000c11f) list_double_time_pane_g2_ParamLimits

0xa256,	// (0x0000c11f) list_double_time_pane_g2

0x0001,

0xf659,	// (0x00011522) list_double_time_pane_g_ParamLimits

0xf659,	// (0x00011522) list_double_time_pane_g

0xa4be,	// (0x0000c387) list_double_time_pane_t1_ParamLimits

0xa4be,	// (0x0000c387) list_double_time_pane_t1

0xa4d4,	// (0x0000c39d) list_double_time_pane_t2_ParamLimits

0xa4d4,	// (0x0000c39d) list_double_time_pane_t2

0xa4e6,	// (0x0000c3af) list_double_time_pane_t3_ParamLimits

0xa4e6,	// (0x0000c3af) list_double_time_pane_t3

0xa4f8,	// (0x0000c3c1) list_double_time_pane_t4_ParamLimits

0xa4f8,	// (0x0000c3c1) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x00011527) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x00011527) list_double_time_pane_t

0xa364,	// (0x0000c22d) list_setting_pane_g1_ParamLimits

0xa364,	// (0x0000c22d) list_setting_pane_g1

0xa29b,	// (0x0000c164) list_setting_pane_g2_ParamLimits

0xa29b,	// (0x0000c164) list_setting_pane_g2

0x0001,

0xf667,	// (0x00011530) list_setting_pane_g_ParamLimits

0xf667,	// (0x00011530) list_setting_pane_g

0xa50a,	// (0x0000c3d3) list_setting_pane_t1_ParamLimits

0xa50a,	// (0x0000c3d3) list_setting_pane_t1

0xa521,	// (0x0000c3ea) list_setting_pane_t2_ParamLimits

0xa521,	// (0x0000c3ea) list_setting_pane_t2

0x0002,

0xf66c,	// (0x00011535) list_setting_pane_t_ParamLimits

0xf66c,	// (0x00011535) list_setting_pane_t

0xa560,	// (0x0000c429) set_value_pane_cp_ParamLimits

0xa560,	// (0x0000c429) set_value_pane_cp

0xa364,	// (0x0000c22d) list_setting_number_pane_g1_ParamLimits

0xa364,	// (0x0000c22d) list_setting_number_pane_g1

0xa29b,	// (0x0000c164) list_setting_number_pane_g2_ParamLimits

0xa29b,	// (0x0000c164) list_setting_number_pane_g2

0x0001,

0xf667,	// (0x00011530) list_setting_number_pane_g_ParamLimits

0xf667,	// (0x00011530) list_setting_number_pane_g

0xa56e,	// (0x0000c437) list_setting_number_pane_t1_ParamLimits

0xa56e,	// (0x0000c437) list_setting_number_pane_t1

0xa582,	// (0x0000c44b) list_setting_number_pane_t2_ParamLimits

0xa582,	// (0x0000c44b) list_setting_number_pane_t2

0xa599,	// (0x0000c462) list_setting_number_pane_t3_ParamLimits

0xa599,	// (0x0000c462) list_setting_number_pane_t3

0x0003,

0xf673,	// (0x0001153c) list_setting_number_pane_t_ParamLimits

0xf673,	// (0x0001153c) list_setting_number_pane_t

0xa560,	// (0x0000c429) set_value_pane_ParamLimits

0xa560,	// (0x0000c429) set_value_pane

0xec53,	// (0x00010b1c) bg_set_opt_pane_ParamLimits

0xec53,	// (0x00010b1c) bg_set_opt_pane

0xec74,	// (0x00010b3d) set_value_pane_t1

0xec82,	// (0x00010b4b) slider_set_pane_cp3

0xec8b,	// (0x00010b54) volume_small_pane_cp

0xec94,	// (0x00010b5d) list_form_gen_pane

0xec9d,	// (0x00010b66) scroll_pane_cp8

0xa5dc,	// (0x0000c4a5) form_field_data_pane_ParamLimits

0xa5dc,	// (0x0000c4a5) form_field_data_pane

0xa5f7,	// (0x0000c4c0) form_field_data_wide_pane_ParamLimits

0xa5f7,	// (0x0000c4c0) form_field_data_wide_pane

0xa61b,	// (0x0000c4e4) form_field_popup_pane_ParamLimits

0xa61b,	// (0x0000c4e4) form_field_popup_pane

0xecbe,	// (0x00010b87) form_field_popup_wide_pane_ParamLimits

0xecbe,	// (0x00010b87) form_field_popup_wide_pane

0xecdf,	// (0x00010ba8) form_field_slider_pane_ParamLimits

0xecdf,	// (0x00010ba8) form_field_slider_pane

0xecf2,	// (0x00010bbb) form_field_slider_wide_pane_ParamLimits

0xecf2,	// (0x00010bbb) form_field_slider_wide_pane

0xed05,	// (0x00010bce) data_form_pane

0xa647,	// (0x0000c510) form_field_data_pane_t1

0xed11,	// (0x00010bda) input_focus_pane

0xed1f,	// (0x00010be8) data_form_wide_pane

0xed5c,	// (0x00010c25) form_field_data_wide_pane_t1

0xea06,	// (0x000108cf) input_focus_pane_cp6

0xa661,	// (0x0000c52a) form_field_popup_pane_t1

0xed11,	// (0x00010bda) input_focus_pane_cp7

0xeda2,	// (0x00010c6b) list_form_pane

0xedb6,	// (0x00010c7f) form_field_popup_wide_pane_t1

0xed11,	// (0x00010bda) input_focus_pane_cp8

0xedcb,	// (0x00010c94) list_form_wide_pane

0xa683,	// (0x0000c54c) form_field_slider_pane_t1_ParamLimits

0xa683,	// (0x0000c54c) form_field_slider_pane_t1

0xa69b,	// (0x0000c564) form_field_slider_pane_t2_ParamLimits

0xa69b,	// (0x0000c564) form_field_slider_pane_t2

0x0001,

0xf683,	// (0x0001154c) form_field_slider_pane_t_ParamLimits

0xf683,	// (0x0001154c) form_field_slider_pane_t

0xe5bb,	// (0x00010484) input_focus_pane_cp9_ParamLimits

0xe5bb,	// (0x00010484) input_focus_pane_cp9

0xa6b0,	// (0x0000c579) slider_cont_pane_ParamLimits

0xa6b0,	// (0x0000c579) slider_cont_pane

0xedda,	// (0x00010ca3) form_field_slider_wide_pane_t1_ParamLimits

0xedda,	// (0x00010ca3) form_field_slider_wide_pane_t1

0xedec,	// (0x00010cb5) form_field_slider_wide_pane_t2_ParamLimits

0xedec,	// (0x00010cb5) form_field_slider_wide_pane_t2

0x0001,

0xf688,	// (0x00011551) form_field_slider_wide_pane_t_ParamLimits

0xf688,	// (0x00011551) form_field_slider_wide_pane_t

0xe5bb,	// (0x00010484) input_focus_pane_cp10_ParamLimits

0xe5bb,	// (0x00010484) input_focus_pane_cp10

0xa6c4,	// (0x0000c58d) slider_cont_pane_cp1_ParamLimits

0xa6c4,	// (0x0000c58d) slider_cont_pane_cp1

0xa6d8,	// (0x0000c5a1) slider_form_pane_cp

0xedfe,	// (0x00010cc7) input_focus_pane_g1

0xee06,	// (0x00010ccf) input_focus_pane_g2

0xee0e,	// (0x00010cd7) input_focus_pane_g3

0xee16,	// (0x00010cdf) input_focus_pane_g4

0xee1e,	// (0x00010ce7) input_focus_pane_g5

0xee26,	// (0x00010cef) input_focus_pane_g6

0xee2e,	// (0x00010cf7) input_focus_pane_g7

0xee36,	// (0x00010cff) input_focus_pane_g8

0xee3e,	// (0x00010d07) input_focus_pane_g9

0xe327,	// (0x000101f0) input_focus_pane_g10

0x0009,

0xf68d,	// (0x00011556) input_focus_pane_g

0x20a9,	// (0x00003f72) wait_border_pane_g3_copy1

0xa6e0,	// (0x0000c5a9) data_form_pane_t1

0xe327,	// (0x000101f0) wait_anim_pane_g1_copy1

0xbfd5,	// (0x0000de9e) data_form_wide_pane_t1

0xee46,	// (0x00010d0f) list_form_graphic_pane_cp_ParamLimits

0xee46,	// (0x00010d0f) list_form_graphic_pane_cp

0x328c,	// (0x00005155) slider_form_pane_g1

0x3295,	// (0x0000515e) slider_form_pane_g2

0x0006,

0xf984,	// (0x0001184d) slider_form_pane_g

0xa6fc,	// (0x0000c5c5) list_form_graphic_pane_ParamLimits

0xa6fc,	// (0x0000c5c5) list_form_graphic_pane

0xee58,	// (0x00010d21) list_form_graphic_pane_g1

0xee60,	// (0x00010d29) list_form_graphic_pane_t1_ParamLimits

0xee60,	// (0x00010d29) list_form_graphic_pane_t1

0xe5d3,	// (0x0001049c) list_highlight_pane_cp5_ParamLimits

0xe5d3,	// (0x0001049c) list_highlight_pane_cp5

0xa70d,	// (0x0000c5d6) find_pane_g1

0xee75,	// (0x00010d3e) input_find_pane

0xa716,	// (0x0000c5df) input_find_pane_g1_ParamLimits

0xa716,	// (0x0000c5df) input_find_pane_g1

0xa722,	// (0x0000c5eb) input_find_pane_t1_ParamLimits

0xa722,	// (0x0000c5eb) input_find_pane_t1

0xa737,	// (0x0000c600) input_find_pane_t2_ParamLimits

0xa737,	// (0x0000c600) input_find_pane_t2

0x0001,

0xf6a2,	// (0x0001156b) input_find_pane_t_ParamLimits

0xf6a2,	// (0x0001156b) input_find_pane_t

0xee7e,	// (0x00010d47) input_focus_pane_cp5_ParamLimits

0xee7e,	// (0x00010d47) input_focus_pane_cp5

0xee8c,	// (0x00010d55) bg_popup_window_pane_cp2_ParamLimits

0xee8c,	// (0x00010d55) bg_popup_window_pane_cp2

0xee99,	// (0x00010d62) listscroll_menu_pane_ParamLimits

0xee99,	// (0x00010d62) listscroll_menu_pane

0xa758,	// (0x0000c621) popup_submenu_window_ParamLimits

0xa758,	// (0x0000c621) popup_submenu_window

0xeea5,	// (0x00010d6e) find_popup_pane_g1

0xeead,	// (0x00010d76) input_popup_find_pane_cp

0xee7e,	// (0x00010d47) input_focus_pane_cp4_ParamLimits

0xee7e,	// (0x00010d47) input_focus_pane_cp4

0xeeb7,	// (0x00010d80) input_popup_find_pane_t1_ParamLimits

0xeeb7,	// (0x00010d80) input_popup_find_pane_t1

0xe4a0,	// (0x00010369) bg_popup_sub_pane_cp

0xeee5,	// (0x00010dae) listscroll_popup_sub_pane

0xeeed,	// (0x00010db6) list_submenu_pane_ParamLimits

0xeeed,	// (0x00010db6) list_submenu_pane

0xeefe,	// (0x00010dc7) scroll_pane_cp4

0xef06,	// (0x00010dcf) list_single_popup_submenu_pane_ParamLimits

0xef06,	// (0x00010dcf) list_single_popup_submenu_pane

0xef1b,	// (0x00010de4) list_single_popup_submenu_pane_g1

0xef23,	// (0x00010dec) list_single_popup_submenu_pane_t1_ParamLimits

0xef23,	// (0x00010dec) list_single_popup_submenu_pane_t1

0xe5bb,	// (0x00010484) bg_active_tab_pane_cp1_ParamLimits

0xe5bb,	// (0x00010484) bg_active_tab_pane_cp1

0xa796,	// (0x0000c65f) tabs_2_active_pane_g1

0xa79e,	// (0x0000c667) tabs_2_active_pane_t1

0xe5bb,	// (0x00010484) bg_passive_tab_pane_cp1_ParamLimits

0xe5bb,	// (0x00010484) bg_passive_tab_pane_cp1

0xa796,	// (0x0000c65f) tabs_2_passive_pane_g1

0xa79e,	// (0x0000c667) tabs_2_passive_pane_t1

0xe5d3,	// (0x0001049c) bg_active_tab_pane_cp4

0xa7b0,	// (0x0000c679) tabs_2_long_active_pane_t1

0x0cee,	// (0x00002bb7) bg_passive_tab_pane_cp4

0x194a,	// (0x00003813) list_single_midp_graphic_pane_g4_ParamLimits

0xe5d3,	// (0x0001049c) bg_active_tab_pane_cp5

0xa7c3,	// (0x0000c68c) tabs_3_long_active_pane_t1

0x0cee,	// (0x00002bb7) bg_passive_tab_pane_cp5

0x194a,	// (0x00003813) list_single_midp_graphic_pane_g4

0xe5d3,	// (0x0001049c) bg_popup_window_pane_cp13_ParamLimits

0xe5d3,	// (0x0001049c) bg_popup_window_pane_cp13

0xef41,	// (0x00010e0a) listscroll_popup_fast_pane_ParamLimits

0xef41,	// (0x00010e0a) listscroll_popup_fast_pane

0xef50,	// (0x00010e19) grid_popup_fast_pane_ParamLimits

0xef50,	// (0x00010e19) grid_popup_fast_pane

0xef62,	// (0x00010e2b) scroll_pane_cp9_ParamLimits

0xef62,	// (0x00010e2b) scroll_pane_cp9

0x55b0,	// (0x00007479) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x55b0,	// (0x00007479) list_single_graphic_hl_pane_t1_cp2

0xef86,	// (0x00010e4f) input_focus_pane_cp20_ParamLimits

0xef86,	// (0x00010e4f) input_focus_pane_cp20

0xef94,	// (0x00010e5d) query_popup_data_pane_t1_ParamLimits

0xef94,	// (0x00010e5d) query_popup_data_pane_t1

0xefa7,	// (0x00010e70) query_popup_data_pane_t2_ParamLimits

0xefa7,	// (0x00010e70) query_popup_data_pane_t2

0xefed,	// (0x00010eb6) query_popup_data_pane_t3_ParamLimits

0xefed,	// (0x00010eb6) query_popup_data_pane_t3

0xf02e,	// (0x00010ef7) query_popup_data_pane_t4_ParamLimits

0xf02e,	// (0x00010ef7) query_popup_data_pane_t4

0xf06a,	// (0x00010f33) query_popup_data_pane_t5_ParamLimits

0xf06a,	// (0x00010f33) query_popup_data_pane_t5

0x0004,

0xf6a7,	// (0x00011570) query_popup_data_pane_t_ParamLimits

0xf6a7,	// (0x00011570) query_popup_data_pane_t

0xedfe,	// (0x00010cc7) bg_set_opt_pane_g1

0xee06,	// (0x00010ccf) bg_set_opt_pane_g2

0xee0e,	// (0x00010cd7) bg_set_opt_pane_g3

0xee16,	// (0x00010cdf) bg_set_opt_pane_g4

0xee1e,	// (0x00010ce7) bg_set_opt_pane_g5

0xee26,	// (0x00010cef) bg_set_opt_pane_g6

0xee2e,	// (0x00010cf7) bg_set_opt_pane_g7

0xee36,	// (0x00010cff) bg_set_opt_pane_g8

0xee3e,	// (0x00010d07) bg_set_opt_pane_g9

0x0008,

0xf6b2,	// (0x0001157b) bg_set_opt_pane_g

0x02ca,	// (0x00002193) control_top_pane_stacon_ParamLimits

0x02ca,	// (0x00002193) control_top_pane_stacon

0x031d,	// (0x000021e6) signal_pane_stacon_ParamLimits

0x031d,	// (0x000021e6) signal_pane_stacon

0x0342,	// (0x0000220b) stacon_top_pane_g1_ParamLimits

0x0342,	// (0x0000220b) stacon_top_pane_g1

0x0364,	// (0x0000222d) title_pane_stacon_ParamLimits

0x0364,	// (0x0000222d) title_pane_stacon

0x038e,	// (0x00002257) uni_indicator_pane_stacon_ParamLimits

0x038e,	// (0x00002257) uni_indicator_pane_stacon

0x03a6,	// (0x0000226f) battery_pane_stacon_ParamLimits

0x03a6,	// (0x0000226f) battery_pane_stacon

0x03ea,	// (0x000022b3) control_bottom_pane_stacon_ParamLimits

0x03ea,	// (0x000022b3) control_bottom_pane_stacon

0x040d,	// (0x000022d6) navi_pane_stacon_ParamLimits

0x040d,	// (0x000022d6) navi_pane_stacon

0x0430,	// (0x000022f9) stacon_bottom_pane_g1_ParamLimits

0x0430,	// (0x000022f9) stacon_bottom_pane_g1

0xf0af,	// (0x00010f78) aid_levels_signal_lsc_ParamLimits

0xf0af,	// (0x00010f78) aid_levels_signal_lsc

0xf0c6,	// (0x00010f8f) signal_pane_stacon_g1_ParamLimits

0xf0c6,	// (0x00010f8f) signal_pane_stacon_g1

0xf0da,	// (0x00010fa3) signal_pane_stacon_g2_ParamLimits

0xf0da,	// (0x00010fa3) signal_pane_stacon_g2

0x0001,

0xf6c5,	// (0x0001158e) signal_pane_stacon_g_ParamLimits

0xf6c5,	// (0x0001158e) signal_pane_stacon_g

0xf11c,	// (0x00010fe5) title_pane_stacon_t1_ParamLimits

0xf11c,	// (0x00010fe5) title_pane_stacon_t1

0xf141,	// (0x0001100a) uni_indicator_pane_stacon_g1

0xf14b,	// (0x00011014) uni_indicator_pane_stacon_g2

0xf155,	// (0x0001101e) uni_indicator_pane_stacon_g3

0xf15f,	// (0x00011028) uni_indicator_pane_stacon_g4

0x0003,

0xf6d1,	// (0x0001159a) uni_indicator_pane_stacon_g

0xf169,	// (0x00011032) control_top_pane_stacon_g1

0xf171,	// (0x0001103a) control_top_pane_stacon_t1_ParamLimits

0xf171,	// (0x0001103a) control_top_pane_stacon_t1

0xf1a8,	// (0x00011071) aid_levels_battery_lsc_ParamLimits

0xf1a8,	// (0x00011071) aid_levels_battery_lsc

0xf1c0,	// (0x00011089) battery_pane_stacon_g1_ParamLimits

0xf1c0,	// (0x00011089) battery_pane_stacon_g1

0xf1d3,	// (0x0001109c) battery_pane_stacon_g2_ParamLimits

0xf1d3,	// (0x0001109c) battery_pane_stacon_g2

0x0001,

0xf6da,	// (0x000115a3) battery_pane_stacon_g_ParamLimits

0xf6da,	// (0x000115a3) battery_pane_stacon_g

0xf211,	// (0x000110da) navi_icon_pane_stacon

0xf225,	// (0x000110ee) navi_navi_pane_stacon

0xf211,	// (0x000110da) navi_text_pane_stacon

0xf169,	// (0x00011032) control_bottom_pane_stacon_g1

0xf23b,	// (0x00011104) control_bottom_pane_stacon_t1_ParamLimits

0xf23b,	// (0x00011104) control_bottom_pane_stacon_t1

0xa7d5,	// (0x0000c69e) grid_app_pane_ParamLimits

0xa7d5,	// (0x0000c69e) grid_app_pane

0xa80d,	// (0x0000c6d6) scroll_pane_cp15_ParamLimits

0xa80d,	// (0x0000c6d6) scroll_pane_cp15

0xa826,	// (0x0000c6ef) cell_app_pane_ParamLimits

0xa826,	// (0x0000c6ef) cell_app_pane

0xa873,	// (0x0000c73c) cell_app_pane_g1_ParamLimits

0xa873,	// (0x0000c73c) cell_app_pane_g1

0xf28c,	// (0x00011155) cell_app_pane_g2_ParamLimits

0xf28c,	// (0x00011155) cell_app_pane_g2

0x0001,

0xf6df,	// (0x000115a8) cell_app_pane_g_ParamLimits

0xf6df,	// (0x000115a8) cell_app_pane_g

0xf298,	// (0x00011161) cell_app_pane_t1_ParamLimits

0xf298,	// (0x00011161) cell_app_pane_t1

0xf2af,	// (0x00011178) grid_highlight_pane_ParamLimits

0xf2af,	// (0x00011178) grid_highlight_pane

0xedfe,	// (0x00010cc7) cell_highlight_pane_g1

0xee06,	// (0x00010ccf) cell_highlight_pane_g2

0xee0e,	// (0x00010cd7) cell_highlight_pane_g3

0xee16,	// (0x00010cdf) cell_highlight_pane_g4

0xee1e,	// (0x00010ce7) cell_highlight_pane_g5

0xee26,	// (0x00010cef) cell_highlight_pane_g6

0xee2e,	// (0x00010cf7) cell_highlight_pane_g7

0xee36,	// (0x00010cff) cell_highlight_pane_g8

0xee3e,	// (0x00010d07) cell_highlight_pane_g9

0xe327,	// (0x000101f0) cell_highlight_pane_g10

0x0009,

0xf68d,	// (0x00011556) cell_highlight_pane_g

0xf2ca,	// (0x00011193) bg_scroll_pane

0xf2e9,	// (0x000111b2) scroll_handle_pane

0xf33a,	// (0x00011203) scroll_bg_pane_g1

0xf34f,	// (0x00011218) scroll_bg_pane_g2

0xf367,	// (0x00011230) scroll_bg_pane_g3

0x0002,

0xf6e4,	// (0x000115ad) scroll_bg_pane_g

0xf37c,	// (0x00011245) scroll_handle_focus_pane_ParamLimits

0xf37c,	// (0x00011245) scroll_handle_focus_pane

0xf33a,	// (0x00011203) scroll_handle_pane_g1

0xf389,	// (0x00011252) scroll_handle_pane_g2

0xf367,	// (0x00011230) scroll_handle_pane_g3

0x0002,

0xf6eb,	// (0x000115b4) scroll_handle_pane_g

0xee7e,	// (0x00010d47) bg_popup_sub_pane_cp21_ParamLimits

0xee7e,	// (0x00010d47) bg_popup_sub_pane_cp21

0xf39d,	// (0x00011266) popup_fep_japan_predictive_window_t1_ParamLimits

0xf39d,	// (0x00011266) popup_fep_japan_predictive_window_t1

0xf3b4,	// (0x0001127d) popup_fep_japan_predictive_window_t2_ParamLimits

0xf3b4,	// (0x0001127d) popup_fep_japan_predictive_window_t2

0xf3e7,	// (0x000112b0) popup_fep_japan_predictive_window_t3_ParamLimits

0xf3e7,	// (0x000112b0) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f2,	// (0x000115bb) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f2,	// (0x000115bb) popup_fep_japan_predictive_window_t

0xe4a0,	// (0x00010369) bg_popup_sub_pane_cp23

0xf41e,	// (0x000112e7) listscroll_japin_cand_pane

0xf426,	// (0x000112ef) popup_fep_japan_candidate_window_t1

0xf434,	// (0x000112fd) candidate_pane_ParamLimits

0xf434,	// (0x000112fd) candidate_pane

0xf446,	// (0x0001130f) scroll_pane_cp30

0xf450,	// (0x00011319) list_single_popup_jap_candidate_pane_ParamLimits

0xf450,	// (0x00011319) list_single_popup_jap_candidate_pane

0xe4a0,	// (0x00010369) list_highlight_pane_cp30

0xf464,	// (0x0001132d) list_single_popup_jap_candidate_pane_t1

0xa89c,	// (0x0000c765) level_1_signal

0xa8ae,	// (0x0000c777) level_2_signal

0xa8c1,	// (0x0000c78a) level_3_signal

0xa8d4,	// (0x0000c79d) level_4_signal

0xa8e7,	// (0x0000c7b0) level_5_signal

0xa8fa,	// (0x0000c7c3) level_6_signal

0xa90d,	// (0x0000c7d6) level_7_signal

0xa89c,	// (0x0000c765) level_1_battery

0xa8ae,	// (0x0000c777) level_2_battery

0xa8c1,	// (0x0000c78a) level_3_battery

0xa8d4,	// (0x0000c79d) level_4_battery

0xa8e7,	// (0x0000c7b0) level_5_battery

0xa8fa,	// (0x0000c7c3) level_6_battery

0xa90d,	// (0x0000c7d6) level_7_battery

0xf4aa,	// (0x00011373) list_menu_pane_ParamLimits

0xf4aa,	// (0x00011373) list_menu_pane

0xf4c0,	// (0x00011389) scroll_pane_cp25_ParamLimits

0xf4c0,	// (0x00011389) scroll_pane_cp25

0xf4d9,	// (0x000113a2) list_double2_graphic_pane_cp2_ParamLimits

0xf4d9,	// (0x000113a2) list_double2_graphic_pane_cp2

0xf4d9,	// (0x000113a2) list_double2_large_graphic_pane_cp2_ParamLimits

0xf4d9,	// (0x000113a2) list_double2_large_graphic_pane_cp2

0xf4d9,	// (0x000113a2) list_double2_pane_cp2_ParamLimits

0xf4d9,	// (0x000113a2) list_double2_pane_cp2

0xf4d9,	// (0x000113a2) list_double_graphic_pane_cp2_ParamLimits

0xf4d9,	// (0x000113a2) list_double_graphic_pane_cp2

0xf4d9,	// (0x000113a2) list_double_large_graphic_pane_cp2_ParamLimits

0xf4d9,	// (0x000113a2) list_double_large_graphic_pane_cp2

0xf4d9,	// (0x000113a2) list_double_number_pane_cp2_ParamLimits

0xf4d9,	// (0x000113a2) list_double_number_pane_cp2

0xf4d9,	// (0x000113a2) list_double_pane_cp2_ParamLimits

0xf4d9,	// (0x000113a2) list_double_pane_cp2

0xa933,	// (0x0000c7fc) list_single_2graphic_pane_cp2_ParamLimits

0xa933,	// (0x0000c7fc) list_single_2graphic_pane_cp2

0xa933,	// (0x0000c7fc) list_single_graphic_heading_pane_cp2_ParamLimits

0xa933,	// (0x0000c7fc) list_single_graphic_heading_pane_cp2

0xa933,	// (0x0000c7fc) list_single_graphic_pane_cp2_ParamLimits

0xa933,	// (0x0000c7fc) list_single_graphic_pane_cp2

0xa933,	// (0x0000c7fc) list_single_heading_pane_cp2_ParamLimits

0xa933,	// (0x0000c7fc) list_single_heading_pane_cp2

0xf4e9,	// (0x000113b2) list_single_large_graphic_pane_cp2_ParamLimits

0xf4e9,	// (0x000113b2) list_single_large_graphic_pane_cp2

0xa933,	// (0x0000c7fc) list_single_number_heading_pane_cp2_ParamLimits

0xa933,	// (0x0000c7fc) list_single_number_heading_pane_cp2

0xa933,	// (0x0000c7fc) list_single_number_pane_cp2_ParamLimits

0xa933,	// (0x0000c7fc) list_single_number_pane_cp2

0xa933,	// (0x0000c7fc) list_single_pane_cp2_ParamLimits

0xa933,	// (0x0000c7fc) list_single_pane_cp2

0x0026,	// (0x00001eef) bg_popup_sub_pane_cp22

0x004b,	// (0x00001f14) popup_side_volume_key_window_g1

0x0075,	// (0x00001f3e) popup_side_volume_key_window_t1

0x0093,	// (0x00001f5c) volume_small_pane_cp1

0xe5bb,	// (0x00010484) bg_popup_sub_pane_cp24_ParamLimits

0xe5bb,	// (0x00010484) bg_popup_sub_pane_cp24

0x009b,	// (0x00001f64) fep_china_uni_candidate_pane_ParamLimits

0x009b,	// (0x00001f64) fep_china_uni_candidate_pane

0x00af,	// (0x00001f78) fep_china_uni_entry_pane

0x00bf,	// (0x00001f88) popup_fep_china_uni_window_g1

0x00db,	// (0x00001fa4) fep_china_uni_entry_pane_g1

0x00e5,	// (0x00001fae) fep_china_uni_entry_pane_g2

0x0001,

0xf723,	// (0x000115ec) fep_china_uni_entry_pane_g

0x00ef,	// (0x00001fb8) fep_entry_item_pane

0x00f9,	// (0x00001fc2) fep_candidate_item_pane

0x0101,	// (0x00001fca) fep_china_uni_candidate_pane_g1

0x010b,	// (0x00001fd4) fep_china_uni_candidate_pane_g2

0x0113,	// (0x00001fdc) fep_china_uni_candidate_pane_g3

0x011b,	// (0x00001fe4) fep_china_uni_candidate_pane_g4

0x0003,

0xf728,	// (0x000115f1) fep_china_uni_candidate_pane_g

0xe327,	// (0x000101f0) fep_entry_item_pane_g1

0x0125,	// (0x00001fee) fep_entry_item_pane_t1_ParamLimits

0x0125,	// (0x00001fee) fep_entry_item_pane_t1

0x013b,	// (0x00002004) fep_candidate_item_pane_t1_ParamLimits

0x013b,	// (0x00002004) fep_candidate_item_pane_t1

0x0150,	// (0x00002019) fep_candidate_item_pane_t2_ParamLimits

0x0150,	// (0x00002019) fep_candidate_item_pane_t2

0x0001,

0xf731,	// (0x000115fa) fep_candidate_item_pane_t_ParamLimits

0xf731,	// (0x000115fa) fep_candidate_item_pane_t

0xe5d3,	// (0x0001049c) list_highlight_pane_cp31_ParamLimits

0xe5d3,	// (0x0001049c) list_highlight_pane_cp31

0x0162,	// (0x0000202b) level_1_signal_lsc

0x016b,	// (0x00002034) level_2_signal_lsc

0x0174,	// (0x0000203d) level_3_signal_lsc

0x017d,	// (0x00002046) level_4_signal_lsc

0x0186,	// (0x0000204f) level_5_signal_lsc

0x018f,	// (0x00002058) level_6_signal_lsc

0x0198,	// (0x00002061) level_7_signal_lsc

0x0198,	// (0x00002061) level_1_battery_lsc

0x01a1,	// (0x0000206a) level_2_battery_lsc

0x01aa,	// (0x00002073) level_3_battery_lsc

0x01b3,	// (0x0000207c) level_4_battery_lsc

0x01bc,	// (0x00002085) level_5_battery_lsc

0x01c5,	// (0x0000208e) level_6_battery_lsc

0x0162,	// (0x0000202b) level_7_battery_lsc

0x01ce,	// (0x00002097) scroll_handle_focus_pane_g1

0x01d7,	// (0x000020a0) scroll_handle_focus_pane_g2

0x01e0,	// (0x000020a9) scroll_handle_focus_pane_g3

0x0002,

0xf736,	// (0x000115ff) scroll_handle_focus_pane_g

0xa9c5,	// (0x0000c88e) list_single_2graphic_pane_g1_ParamLimits

0xa9c5,	// (0x0000c88e) list_single_2graphic_pane_g1

0xa21f,	// (0x0000c0e8) list_single_2graphic_pane_g2_ParamLimits

0xa21f,	// (0x0000c0e8) list_single_2graphic_pane_g2

0x1781,	// (0x0000364a) list_single_2graphic_pane_g3_ParamLimits

0x1781,	// (0x0000364a) list_single_2graphic_pane_g3

0xa9d1,	// (0x0000c89a) list_single_2graphic_pane_g4_ParamLimits

0xa9d1,	// (0x0000c89a) list_single_2graphic_pane_g4

0x0003,

0xf73d,	// (0x00011606) list_single_2graphic_pane_g_ParamLimits

0xf73d,	// (0x00011606) list_single_2graphic_pane_g

0xa9e2,	// (0x0000c8ab) list_single_2graphic_pane_t1_ParamLimits

0xa9e2,	// (0x0000c8ab) list_single_2graphic_pane_t1

0xaa10,	// (0x0000c8d9) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xaa10,	// (0x0000c8d9) list_double2_graphic_large_graphic_pane_g1

0xa28a,	// (0x0000c153) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa28a,	// (0x0000c153) list_double2_graphic_large_graphic_pane_g2

0xa29b,	// (0x0000c164) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa29b,	// (0x0000c164) list_double2_graphic_large_graphic_pane_g3

0xaa22,	// (0x0000c8eb) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xaa22,	// (0x0000c8eb) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf746,	// (0x0001160f) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf746,	// (0x0001160f) list_double2_graphic_large_graphic_pane_g

0xaa2e,	// (0x0000c8f7) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xaa2e,	// (0x0000c8f7) list_double2_graphic_large_graphic_pane_t1

0xaa44,	// (0x0000c90d) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xaa44,	// (0x0000c90d) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74f,	// (0x00011618) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74f,	// (0x00011618) list_double2_graphic_large_graphic_pane_t

0x04f2,	// (0x000023bb) popup_fast_swap_window_ParamLimits

0x04f2,	// (0x000023bb) popup_fast_swap_window

0x0510,	// (0x000023d9) popup_side_volume_key_window

0x052e,	// (0x000023f7) stacon_top_pane

0x0538,	// (0x00002401) status_pane_ParamLimits

0x0538,	// (0x00002401) status_pane

0x052e,	// (0x000023f7) status_small_pane

0xe4a0,	// (0x00010369) control_pane

0xe4a0,	// (0x00010369) stacon_bottom_pane

0xec9d,	// (0x00010b66) scroll_pane_cp121

0xec94,	// (0x00010b5d) set_content_pane

0xaa56,	// (0x0000c91f) bg_active_tab_pane_g1_cp1

0x027e,	// (0x00002147) bg_active_tab_pane_g2_cp1

0xaa5f,	// (0x0000c928) bg_active_tab_pane_g3_cp1

0xaa56,	// (0x0000c91f) bg_passive_tab_pane_g1_cp1

0x027e,	// (0x00002147) bg_passive_tab_pane_g2_cp1

0xaa5f,	// (0x0000c928) bg_passive_tab_pane_g3_cp1

0xaa68,	// (0x0000c931) bg_active_tab_pane_g1_cp2

0x027e,	// (0x00002147) bg_active_tab_pane_g2_cp2

0xaa71,	// (0x0000c93a) bg_active_tab_pane_g3_cp2

0xaa68,	// (0x0000c931) bg_passive_tab_pane_g1_cp2

0x027e,	// (0x00002147) bg_passive_tab_pane_g2_cp2

0xaa71,	// (0x0000c93a) bg_passive_tab_pane_g3_cp2

0xaa7a,	// (0x0000c943) bg_active_tab_pane_g1_cp3

0x027e,	// (0x00002147) bg_active_tab_pane_g2_cp3

0xaa83,	// (0x0000c94c) bg_active_tab_pane_g3_cp3

0xaa7a,	// (0x0000c943) bg_passive_tab_pane_g1_cp3

0x027e,	// (0x00002147) bg_passive_tab_pane_g2_cp3

0xaa83,	// (0x0000c94c) bg_passive_tab_pane_g3_cp3

0xaa8c,	// (0x0000c955) bg_active_tab_pane_g1_cp4

0x027e,	// (0x00002147) bg_active_tab_pane_g2_cp4

0xaa95,	// (0x0000c95e) bg_active_tab_pane_g3_cp4

0xaa8c,	// (0x0000c955) bg_passive_tab_pane_g1_cp4

0x027e,	// (0x00002147) bg_passive_tab_pane_g2_cp4

0xaa95,	// (0x0000c95e) bg_passive_tab_pane_g3_cp4

0x044c,	// (0x00002315) bg_active_tab_pane_g1_cp5

0x027e,	// (0x00002147) bg_active_tab_pane_g2_cp5

0x0455,	// (0x0000231e) bg_active_tab_pane_g3_cp5

0x044c,	// (0x00002315) bg_passive_tab_pane_g1_cp5

0x027e,	// (0x00002147) bg_passive_tab_pane_g2_cp5

0x0455,	// (0x0000231e) bg_passive_tab_pane_g3_cp5

0x3a18,	// (0x000058e1) list_set_graphic_pane_ParamLimits

0x3a18,	// (0x000058e1) list_set_graphic_pane

0xe4a0,	// (0x00010369) bg_set_opt_pane_cp4

0xaa9e,	// (0x0000c967) list_set_graphic_pane_g1_ParamLimits

0xaa9e,	// (0x0000c967) list_set_graphic_pane_g1

0xaaaa,	// (0x0000c973) list_set_graphic_pane_g2_ParamLimits

0xaaaa,	// (0x0000c973) list_set_graphic_pane_g2

0x0001,

0xf754,	// (0x0001161d) list_set_graphic_pane_g_ParamLimits

0xf754,	// (0x0001161d) list_set_graphic_pane_g

0x0009,

0xfad5,	// (0x0001199e) volume_small_pane_cp_g

0xaace,	// (0x0000c997) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xaace,	// (0x0000c997) list_double2_large_graphic_pane_g1_cp2

0xaadc,	// (0x0000c9a5) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xaadc,	// (0x0000c9a5) list_double2_large_graphic_pane_g2_cp2

0x04c2,	// (0x0000238b) list_double2_large_graphic_pane_g3_cp2

0x04ca,	// (0x00002393) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x04ca,	// (0x00002393) list_double2_large_graphic_pane_t1_cp2

0x04e0,	// (0x000023a9) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x04e0,	// (0x000023a9) list_double2_large_graphic_pane_t2_cp2

0xbd37,	// (0x0000dc00) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xbd37,	// (0x0000dc00) list_double_large_graphic_pane_g1_cp2

0xbd4a,	// (0x0000dc13) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xbd4a,	// (0x0000dc13) list_double_large_graphic_pane_g2_cp2

0x0656,	// (0x0000251f) list_double_large_graphic_pane_g3_cp2

0x2d1d,	// (0x00004be6) list_double_large_graphic_pane_g4_cp

0x2d25,	// (0x00004bee) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x2d25,	// (0x00004bee) list_double_large_graphic_pane_t1_cp2

0x2d3c,	// (0x00004c05) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x2d3c,	// (0x00004c05) list_double_large_graphic_pane_t2_cp2

0xaaed,	// (0x0000c9b6) list_double2_graphic_pane_g1_cp2_ParamLimits

0xaaed,	// (0x0000c9b6) list_double2_graphic_pane_g1_cp2

0xaafb,	// (0x0000c9c4) list_double2_graphic_pane_g2_cp2_ParamLimits

0xaafb,	// (0x0000c9c4) list_double2_graphic_pane_g2_cp2

0xab0c,	// (0x0000c9d5) list_double2_graphic_pane_g3_cp2

0x056f,	// (0x00002438) list_double2_graphic_pane_t1_cp2_ParamLimits

0x056f,	// (0x00002438) list_double2_graphic_pane_t1_cp2

0x0585,	// (0x0000244e) list_double2_graphic_pane_t2_cp2_ParamLimits

0x0585,	// (0x0000244e) list_double2_graphic_pane_t2_cp2

0x0597,	// (0x00002460) list_single_number_heading_pane_g1_cp2_ParamLimits

0x0597,	// (0x00002460) list_single_number_heading_pane_g1_cp2

0x05a3,	// (0x0000246c) list_single_number_heading_pane_g2_cp2

0x05ab,	// (0x00002474) list_single_number_heading_pane_t1_cp2_ParamLimits

0x05ab,	// (0x00002474) list_single_number_heading_pane_t1_cp2

0xab16,	// (0x0000c9df) list_single_number_heading_pane_t2_cp2_ParamLimits

0xab16,	// (0x0000c9df) list_single_number_heading_pane_t2_cp2

0x05d5,	// (0x0000249e) list_single_number_heading_pane_t3_cp2_ParamLimits

0x05d5,	// (0x0000249e) list_single_number_heading_pane_t3_cp2

0x0597,	// (0x00002460) list_single_heading_pane_g1_cp2_ParamLimits

0x0597,	// (0x00002460) list_single_heading_pane_g1_cp2

0x05a3,	// (0x0000246c) list_single_heading_pane_g2_cp2

0x05ab,	// (0x00002474) list_single_heading_pane_t1_cp2_ParamLimits

0x05ab,	// (0x00002474) list_single_heading_pane_t1_cp2

0xbd23,	// (0x0000dbec) list_single_heading_pane_t2_cp2_ParamLimits

0xbd23,	// (0x0000dbec) list_single_heading_pane_t2_cp2

0x2a3b,	// (0x00004904) list_double_graphic_pane_g1_cp2_ParamLimits

0x2a3b,	// (0x00004904) list_double_graphic_pane_g1_cp2

0x2a47,	// (0x00004910) list_double_graphic_pane_g2_cp2_ParamLimits

0x2a47,	// (0x00004910) list_double_graphic_pane_g2_cp2

0x2a56,	// (0x0000491f) list_double_graphic_pane_g3_cp2

0x2a5e,	// (0x00004927) list_double_graphic_pane_t1_cp2_ParamLimits

0x2a5e,	// (0x00004927) list_double_graphic_pane_t1_cp2

0x2a74,	// (0x0000493d) list_double_graphic_pane_t2_cp2_ParamLimits

0x2a74,	// (0x0000493d) list_double_graphic_pane_t2_cp2

0x064a,	// (0x00002513) list_double_number_pane_g1_cp2_ParamLimits

0x064a,	// (0x00002513) list_double_number_pane_g1_cp2

0x0656,	// (0x0000251f) list_double_number_pane_g2_cp2

0xbcbd,	// (0x0000db86) list_double_number_pane_t1_cp2_ParamLimits

0xbcbd,	// (0x0000db86) list_double_number_pane_t1_cp2

0x2a13,	// (0x000048dc) list_double_number_pane_t2_cp2_ParamLimits

0x2a13,	// (0x000048dc) list_double_number_pane_t2_cp2

0x2a29,	// (0x000048f2) list_double_number_pane_t3_cp2_ParamLimits

0x2a29,	// (0x000048f2) list_double_number_pane_t3_cp2

0xbbfa,	// (0x0000dac3) list_single_graphic_pane_g1_cp2_ParamLimits

0xbbfa,	// (0x0000dac3) list_single_graphic_pane_g1_cp2

0x06b0,	// (0x00002579) list_single_graphic_pane_g2_cp2_ParamLimits

0x06b0,	// (0x00002579) list_single_graphic_pane_g2_cp2

0x06bc,	// (0x00002585) list_single_graphic_pane_g3_cp2

0x28ad,	// (0x00004776) list_single_graphic_pane_t1_cp2_ParamLimits

0x28ad,	// (0x00004776) list_single_graphic_pane_t1_cp2

0x06b0,	// (0x00002579) list_single_number_pane_g1_cp2_ParamLimits

0x06b0,	// (0x00002579) list_single_number_pane_g1_cp2

0x06bc,	// (0x00002585) list_single_number_pane_g2_cp2

0x28ad,	// (0x00004776) list_single_number_pane_t1_cp2_ParamLimits

0x28ad,	// (0x00004776) list_single_number_pane_t1_cp2

0xbbe6,	// (0x0000daaf) list_single_number_pane_t2_cp2_ParamLimits

0xbbe6,	// (0x0000daaf) list_single_number_pane_t2_cp2

0xaadc,	// (0x0000c9a5) list_double2_pane_g1_cp2_ParamLimits

0xaadc,	// (0x0000c9a5) list_double2_pane_g1_cp2

0x04c2,	// (0x0000238b) list_double2_pane_g2_cp2

0x0622,	// (0x000024eb) list_double2_pane_t1_cp2_ParamLimits

0x0622,	// (0x000024eb) list_double2_pane_t1_cp2

0x0638,	// (0x00002501) list_double2_pane_t2_cp2_ParamLimits

0x0638,	// (0x00002501) list_double2_pane_t2_cp2

0x064a,	// (0x00002513) list_double_pane_g1_cp2_ParamLimits

0x064a,	// (0x00002513) list_double_pane_g1_cp2

0x0656,	// (0x0000251f) list_double_pane_g2_cp2

0x065e,	// (0x00002527) list_double_pane_t1_cp2_ParamLimits

0x065e,	// (0x00002527) list_double_pane_t1_cp2

0x0674,	// (0x0000253d) list_double_pane_t2_cp2_ParamLimits

0x0674,	// (0x0000253d) list_double_pane_t2_cp2

0x06a0,	// (0x00002569) list_single_pane_cp2_g3

0x06b0,	// (0x00002579) list_single_pane_g1_cp2_ParamLimits

0x06b0,	// (0x00002579) list_single_pane_g1_cp2

0x06bc,	// (0x00002585) list_single_pane_g2_cp2

0x06c4,	// (0x0000258d) list_single_pane_t1_cp2_ParamLimits

0x06c4,	// (0x0000258d) list_single_pane_t1_cp2

0xab44,	// (0x0000ca0d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xab44,	// (0x0000ca0d) list_single_large_graphic_pane_g1_cp2

0x06ea,	// (0x000025b3) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x06ea,	// (0x000025b3) list_single_large_graphic_pane_g2_cp2

0x06f6,	// (0x000025bf) list_single_large_graphic_pane_g3_cp2

0x06fe,	// (0x000025c7) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x06fe,	// (0x000025c7) list_single_large_graphic_pane_g4_cp1

0x0718,	// (0x000025e1) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x0718,	// (0x000025e1) list_single_large_graphic_pane_t1_cp2

0x271c,	// (0x000045e5) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x271c,	// (0x000045e5) list_single_graphic_heading_pane_g1_cp2

0xba6b,	// (0x0000d934) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xba6b,	// (0x0000d934) list_single_graphic_heading_pane_g4_cp2

0x06bc,	// (0x00002585) list_single_graphic_heading_pane_g5_cp2

0x2728,	// (0x000045f1) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2728,	// (0x000045f1) list_single_graphic_heading_pane_t1_cp2

0xba7c,	// (0x0000d945) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xba7c,	// (0x0000d945) list_single_graphic_heading_pane_t2_cp2

0x26dd,	// (0x000045a6) list_single_2graphic_pane_g1_cp2_ParamLimits

0x26dd,	// (0x000045a6) list_single_2graphic_pane_g1_cp2

0xba6b,	// (0x0000d934) list_single_2graphic_pane_g2_cp2_ParamLimits

0xba6b,	// (0x0000d934) list_single_2graphic_pane_g2_cp2

0x06bc,	// (0x00002585) list_single_2graphic_pane_g3_cp2

0x26fa,	// (0x000045c3) list_single_2graphic_pane_g4_cp2_ParamLimits

0x26fa,	// (0x000045c3) list_single_2graphic_pane_g4_cp2

0x2706,	// (0x000045cf) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2706,	// (0x000045cf) list_single_2graphic_pane_t1_cp2

0xe327,	// (0x000101f0) list_highlight_pane_g10_cp1

0x22b5,	// (0x0000417e) list_highlight_pane_g1_cp1

0x22bd,	// (0x00004186) list_highlight_pane_g2_cp1

0x22c5,	// (0x0000418e) list_highlight_pane_g3_cp1

0x22cd,	// (0x00004196) list_highlight_pane_g4_cp1

0x22d5,	// (0x0000419e) list_highlight_pane_g5_cp1

0x22dd,	// (0x000041a6) list_highlight_pane_g6_cp1

0x22e5,	// (0x000041ae) list_highlight_pane_g7_cp1

0x22ed,	// (0x000041b6) list_highlight_pane_g8_cp1

0x22f5,	// (0x000041be) list_highlight_pane_g9_cp1

0xba31,	// (0x0000d8fa) form_field_slider_pane_t3

0xba3f,	// (0x0000d908) form_field_slider_pane_t4

0x21f1,	// (0x000040ba) slider_form_pane_ParamLimits

0x21f1,	// (0x000040ba) slider_form_pane

0xe4a0,	// (0x00010369) control_abbreviations

0xe4a0,	// (0x00010369) control_conventions

0xe4a0,	// (0x00010369) control_definitions

0xe4a0,	// (0x00010369) format_table_attribute

0x2b49,	// (0x00004a12) bg_popup_preview_window_pane_g9

0xe4a0,	// (0x00010369) format_table_data2

0xe4a0,	// (0x00010369) format_table_data3

0xe4a0,	// (0x00010369) format_table_data_example

0x0008,

0xe4a0,	// (0x00010369) intro_purpose

0xf8e4,	// (0x000117ad) bg_popup_preview_window_pane_g

0xe4a0,	// (0x00010369) texts_category

0xe4a0,	// (0x00010369) texts_graphics

0x072e,	// (0x000025f7) text_digital

0x073d,	// (0x00002606) text_primary

0x074c,	// (0x00002615) text_primary_small

0x075b,	// (0x00002624) text_secondary

0x076a,	// (0x00002633) text_title

0x3448,	// (0x00005311) bg_passive_tab_pane_g1_cp3_srt

0x027e,	// (0x00002147) bg_passive_tab_pane_g2_cp3_srt

0x3451,	// (0x0000531a) bg_passive_tab_pane_g3_cp3_srt

0xe5bb,	// (0x00010484) bg_active_tab_pane_cp3_srt_ParamLimits

0xe5bb,	// (0x00010484) bg_active_tab_pane_cp3_srt

0x345a,	// (0x00005323) tabs_4_active_pane_srt_g1

0xc099,	// (0x0000df62) tabs_4_active_pane_srt_t1_ParamLimits

0xc099,	// (0x0000df62) tabs_4_active_pane_srt_t1

0x3448,	// (0x00005311) bg_active_tab_pane_g1_cp3_copy1

0x027e,	// (0x00002147) bg_active_tab_pane_g2_cp3_copy1

0x3451,	// (0x0000531a) bg_active_tab_pane_g3_cp3_copy1

0xe5d3,	// (0x0001049c) tabs_2_long_active_pane_srt_ParamLimits

0xe5d3,	// (0x0001049c) tabs_2_long_active_pane_srt

0xe5d3,	// (0x0001049c) tabs_2_long_passive_pane_srt_ParamLimits

0xe5d3,	// (0x0001049c) tabs_2_long_passive_pane_srt

0x0cee,	// (0x00002bb7) bg_passive_tab_pane_cp4_srt_ParamLimits

0x0cee,	// (0x00002bb7) bg_passive_tab_pane_cp4_srt

0x3025,	// (0x00004eee) bg_passive_tab_pane_g1_cp4_srt

0x027e,	// (0x00002147) bg_passive_tab_pane_g2_cp4_srt

0x302e,	// (0x00004ef7) bg_passive_tab_pane_g3_cp4_srt

0xe5d3,	// (0x0001049c) bg_active_tab_pane_cp4_srt_ParamLimits

0xe5d3,	// (0x0001049c) bg_active_tab_pane_cp4_srt

0xbe46,	// (0x0000dd0f) tabs_2_long_active_pane_srt_t1_ParamLimits

0xbe46,	// (0x0000dd0f) tabs_2_long_active_pane_srt_t1

0x3025,	// (0x00004eee) bg_active_tab_pane_g1_cp4_srt

0x027e,	// (0x00002147) bg_active_tab_pane_g2_cp4_srt

0x302e,	// (0x00004ef7) bg_active_tab_pane_g3_cp4_srt

0xe5bb,	// (0x00010484) tabs_3_long_active_pane_srt_ParamLimits

0xe5bb,	// (0x00010484) tabs_3_long_active_pane_srt

0xe5bb,	// (0x00010484) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xe5bb,	// (0x00010484) tabs_3_long_passive_pane_cp_srt

0xe5bb,	// (0x00010484) tabs_3_long_passive_pane_srt_ParamLimits

0xe5bb,	// (0x00010484) tabs_3_long_passive_pane_srt

0x0cee,	// (0x00002bb7) bg_passive_tab_pane_cp5_srt_ParamLimits

0x0cee,	// (0x00002bb7) bg_passive_tab_pane_cp5_srt

0x044c,	// (0x00002315) bg_passive_tab_pane_g1_cp5_srt

0x027e,	// (0x00002147) bg_passive_tab_pane_g2_cp5_srt

0x0455,	// (0x0000231e) bg_passive_tab_pane_g3_cp5_srt

0xe5d3,	// (0x0001049c) bg_active_tab_pane_cp5_srt_ParamLimits

0xe5d3,	// (0x0001049c) bg_active_tab_pane_cp5_srt

0xbe30,	// (0x0000dcf9) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbe30,	// (0x0000dcf9) tabs_3_long_active_pane_srt_t1

0x044c,	// (0x00002315) bg_active_tab_pane_g1_cp5_srt

0x027e,	// (0x00002147) bg_active_tab_pane_g2_cp5_srt

0x0455,	// (0x0000231e) bg_active_tab_pane_g3_cp5_srt

0x3005,	// (0x00004ece) navi_text_pane_srt_t1

0x2ffd,	// (0x00004ec6) navi_icon_pane_srt_g1

0x09de,	// (0x000028a7) midp_editing_number_pane_srt

0x0779,	// (0x00002642) midp_ticker_pane_srt

0x09e6,	// (0x000028af) midp_ticker_pane_srt_g1

0x09ee,	// (0x000028b7) midp_ticker_pane_srt_g2

0x0001,

0xf773,	// (0x0001163c) midp_ticker_pane_srt_g

0x09f6,	// (0x000028bf) midp_ticker_pane_srt_t1

0x2fee,	// (0x00004eb7) midp_editing_number_pane_t1_copy1

0x0cee,	// (0x00002bb7) listscroll_midp_pane

0x0cee,	// (0x00002bb7) midp_form_pane

0x07e3,	// (0x000026ac) midp_info_popup_window_ParamLimits

0x07e3,	// (0x000026ac) midp_info_popup_window

0xee7e,	// (0x00010d47) bg_popup_sub_pane_cp50_ParamLimits

0xee7e,	// (0x00010d47) bg_popup_sub_pane_cp50

0x1eeb,	// (0x00003db4) listscroll_midp_info_pane_ParamLimits

0x1eeb,	// (0x00003db4) listscroll_midp_info_pane

0x1ed3,	// (0x00003d9c) listscroll_form_midp_pane_ParamLimits

0x1ed3,	// (0x00003d9c) listscroll_form_midp_pane

0x1edf,	// (0x00003da8) scroll_bar_cp050

0xba25,	// (0x0000d8ee) list_midp_pane

0x4261,	// (0x0000612a) signal_pane_g2_cp

0x1ded,	// (0x00003cb6) listscroll_midp_info_pane_t1_ParamLimits

0x1ded,	// (0x00003cb6) listscroll_midp_info_pane_t1

0x1e05,	// (0x00003cce) listscroll_midp_info_pane_t2_ParamLimits

0x1e05,	// (0x00003cce) listscroll_midp_info_pane_t2

0x1e43,	// (0x00003d0c) listscroll_midp_info_pane_t3_ParamLimits

0x1e43,	// (0x00003d0c) listscroll_midp_info_pane_t3

0x1e7d,	// (0x00003d46) listscroll_midp_info_pane_t4_ParamLimits

0x1e7d,	// (0x00003d46) listscroll_midp_info_pane_t4

0x0003,

0xf81f,	// (0x000116e8) listscroll_midp_info_pane_t_ParamLimits

0xf81f,	// (0x000116e8) listscroll_midp_info_pane_t

0xeefe,	// (0x00010dc7) scroll_pane_cp21

0x1d87,	// (0x00003c50) form_midp_field_choice_group_pane

0x1d90,	// (0x00003c59) form_midp_field_text_pane

0x1dd3,	// (0x00003c9c) form_midp_field_time_pane

0x1ddb,	// (0x00003ca4) form_midp_gauge_slider_pane

0x1de4,	// (0x00003cad) form_midp_gauge_wait_pane

0xe4a0,	// (0x00010369) form_midp_image_pane

0xba08,	// (0x0000d8d1) list_single_midp_pane_ParamLimits

0xba08,	// (0x0000d8d1) list_single_midp_pane

0xb9e0,	// (0x0000d8a9) form_midp_field_text_pane_t1

0x1a7a,	// (0x00003943) input_focus_pane_cp050

0x1d56,	// (0x00003c1f) list_midp_form_text_pane

0x1cfa,	// (0x00003bc3) form_midp_field_choice_group_pane_t1

0x1d08,	// (0x00003bd1) input_focus_pane_cp051

0x1d1c,	// (0x00003be5) list_midp_choice_pane

0xe4a0,	// (0x00010369) status_idle_pane

0x1cde,	// (0x00003ba7) form_midp_field_time_pane_t1

0xe327,	// (0x000101f0) wait_anim_pane_g2_copy1

0x1cec,	// (0x00003bb5) form_midp_field_time_pane_t2

0x0001,

0x0893,	// (0x0000275c) aid_navinavi_width_2_pane

0xf81a,	// (0x000116e3) form_midp_field_time_pane_t

0xe4a0,	// (0x00010369) input_focus_pane_cp052

0xe4a0,	// (0x00010369) bg_input_focus_pane_cp040

0x1c9e,	// (0x00003b67) form_midp_gauge_slider_pane_t1

0x1cac,	// (0x00003b75) form_midp_gauge_slider_pane_t2

0xb9c4,	// (0x0000d88d) form_midp_gauge_slider_pane_t3

0xb9d2,	// (0x0000d89b) form_midp_gauge_slider_pane_t4

0x0003,

0xf811,	// (0x000116da) form_midp_gauge_slider_pane_t

0x1cd6,	// (0x00003b9f) form_midp_slider_pane

0xe5d3,	// (0x0001049c) bg_input_focus_pane_cp041_ParamLimits

0xe5d3,	// (0x0001049c) bg_input_focus_pane_cp041

0x1c6b,	// (0x00003b34) form_midp_gauge_wait_pane_t1_ParamLimits

0x1c6b,	// (0x00003b34) form_midp_gauge_wait_pane_t1

0x1c7d,	// (0x00003b46) form_midp_gauge_wait_pane_t2_ParamLimits

0x1c7d,	// (0x00003b46) form_midp_gauge_wait_pane_t2

0x0001,

0xf80c,	// (0x000116d5) form_midp_gauge_wait_pane_t_ParamLimits

0xf80c,	// (0x000116d5) form_midp_gauge_wait_pane_t

0x1c8f,	// (0x00003b58) form_midp_wait_pane_ParamLimits

0x1c8f,	// (0x00003b58) form_midp_wait_pane

0x1c33,	// (0x00003afc) form_midp_image_pane_g1

0x1c3c,	// (0x00003b05) form_midp_image_pane_t1

0x1c4b,	// (0x00003b14) form_midp_image_pane_t2

0x1c5a,	// (0x00003b23) form_midp_image_pane_t3

0x0002,

0xf805,	// (0x000116ce) form_midp_image_pane_t

0x1c1b,	// (0x00003ae4) list_single_midp_pane_g1

0x1c24,	// (0x00003aed) list_single_midp_pane_t1

0xb9ad,	// (0x0000d876) list_midp_form_item_pane_ParamLimits

0xb9ad,	// (0x0000d876) list_midp_form_item_pane

0x083b,	// (0x00002704) list_midp_form_item_pane_t1

0x084a,	// (0x00002713) midp_ticker_pane_g1

0x0856,	// (0x0000271f) midp_ticker_pane_g2

0x0001,

0xf759,	// (0x00011622) midp_ticker_pane_g

0xabe9,	// (0x0000cab2) midp_ticker_pane_t1

0xbff1,	// (0x0000deba) midp_editing_number_pane_t1

0x32ec,	// (0x000051b5) midp_editing_number_pane

0x32fb,	// (0x000051c4) midp_ticker_pane

0x2fb6,	// (0x00004e7f) ai_message_heading_pane

0xe4a0,	// (0x00010369) bg_popup_window_pane_cp14

0x2fbe,	// (0x00004e87) listscroll_ai_message_pane

0x2f3c,	// (0x00004e05) ai_message_heading_pane_g1_ParamLimits

0x2f3c,	// (0x00004e05) ai_message_heading_pane_g1

0x2f48,	// (0x00004e11) ai_message_heading_pane_g2_ParamLimits

0x2f48,	// (0x00004e11) ai_message_heading_pane_g2

0x2f56,	// (0x00004e1f) ai_message_heading_pane_g3_ParamLimits

0x2f56,	// (0x00004e1f) ai_message_heading_pane_g3

0x2f62,	// (0x00004e2b) ai_message_heading_pane_g4_ParamLimits

0x2f62,	// (0x00004e2b) ai_message_heading_pane_g4

0x0003,

0xf946,	// (0x0001180f) ai_message_heading_pane_g_ParamLimits

0xf946,	// (0x0001180f) ai_message_heading_pane_g

0x2f6e,	// (0x00004e37) ai_message_heading_pane_t1_ParamLimits

0x2f6e,	// (0x00004e37) ai_message_heading_pane_t1

0x2f88,	// (0x00004e51) ai_message_heading_pane_t2_ParamLimits

0x2f88,	// (0x00004e51) ai_message_heading_pane_t2

0x0001,

0xf94f,	// (0x00011818) ai_message_heading_pane_t_ParamLimits

0xf94f,	// (0x00011818) ai_message_heading_pane_t

0x2f9c,	// (0x00004e65) bg_popup_heading_pane_cp1_ParamLimits

0x2f9c,	// (0x00004e65) bg_popup_heading_pane_cp1

0x2f2a,	// (0x00004df3) list_ai_message_pane_ParamLimits

0x2f2a,	// (0x00004df3) list_ai_message_pane

0xeefe,	// (0x00010dc7) scroll_pane_cp10

0x2e62,	// (0x00004d2b) list_ai_message_pane_g1

0x2e6a,	// (0x00004d33) list_ai_message_pane_g2

0x0001,

0xf923,	// (0x000117ec) list_ai_message_pane_g

0x2e72,	// (0x00004d3b) list_ai_message_pane_t1_ParamLimits

0x2e72,	// (0x00004d3b) list_ai_message_pane_t1

0x2e87,	// (0x00004d50) list_ai_message_pane_t2_ParamLimits

0x2e87,	// (0x00004d50) list_ai_message_pane_t2

0x2e9c,	// (0x00004d65) list_ai_message_pane_t3_ParamLimits

0x2e9c,	// (0x00004d65) list_ai_message_pane_t3

0x2eb1,	// (0x00004d7a) list_ai_message_pane_t4_ParamLimits

0x2eb1,	// (0x00004d7a) list_ai_message_pane_t4

0x0003,

0xf928,	// (0x000117f1) list_ai_message_pane_t_ParamLimits

0xf928,	// (0x000117f1) list_ai_message_pane_t

0xbe04,	// (0x0000dccd) cell_ai_soft_ind_pane_ParamLimits

0xbe04,	// (0x0000dccd) cell_ai_soft_ind_pane

0x0874,	// (0x0000273d) cell_ai_soft_ind_pane_g1_ParamLimits

0x0874,	// (0x0000273d) cell_ai_soft_ind_pane_g1

0xe4a0,	// (0x00010369) grid_highlight_cp1

0x0881,	// (0x0000274a) text_secondary_cp56_ParamLimits

0x0881,	// (0x0000274a) text_secondary_cp56

0x2e20,	// (0x00004ce9) example_general_pane_ParamLimits

0x2e20,	// (0x00004ce9) example_general_pane

0x2e2c,	// (0x00004cf5) example_parent_pane_g1_ParamLimits

0x2e2c,	// (0x00004cf5) example_parent_pane_g1

0x2e38,	// (0x00004d01) example_parent_pane_t1_ParamLimits

0x2e38,	// (0x00004d01) example_parent_pane_t1

0xb1c0,	// (0x0000d089) popup_preview_text_window_ParamLimits

0xb1c0,	// (0x0000d089) popup_preview_text_window

0x06a8,	// (0x00002571) list_single_pane_cp2_g4

0xe851,	// (0x0001071a) bg_popup_preview_window_pane_ParamLimits

0xe851,	// (0x0001071a) bg_popup_preview_window_pane

0x2b53,	// (0x00004a1c) popup_preview_text_window_t1_ParamLimits

0x2b53,	// (0x00004a1c) popup_preview_text_window_t1

0x2b71,	// (0x00004a3a) popup_preview_text_window_t2_ParamLimits

0x2b71,	// (0x00004a3a) popup_preview_text_window_t2

0x2bba,	// (0x00004a83) popup_preview_text_window_t3_ParamLimits

0x2bba,	// (0x00004a83) popup_preview_text_window_t3

0x2bff,	// (0x00004ac8) popup_preview_text_window_t4_ParamLimits

0x2bff,	// (0x00004ac8) popup_preview_text_window_t4

0x0004,

0xf8f7,	// (0x000117c0) popup_preview_text_window_t_ParamLimits

0xf8f7,	// (0x000117c0) popup_preview_text_window_t

0x2c7d,	// (0x00004b46) scroll_pane_cp11

0x18dd,	// (0x000037a6) bg_popup_preview_window_pane_g1

0x2b07,	// (0x000049d0) bg_popup_preview_window_pane_g2

0x2b11,	// (0x000049da) bg_popup_preview_window_pane_g3

0x2b1b,	// (0x000049e4) bg_popup_preview_window_pane_g4

0x2b25,	// (0x000049ee) bg_popup_preview_window_pane_g5

0x2b2f,	// (0x000049f8) bg_popup_preview_window_pane_g6

0x2b37,	// (0x00004a00) bg_popup_preview_window_pane_g7

0x2b3f,	// (0x00004a08) bg_popup_preview_window_pane_g8

0xe33d,	// (0x00010206) aid_popup_width_pane

0xb130,	// (0x0000cff9) popup_midp_note_alarm_window_ParamLimits

0xb130,	// (0x0000cff9) popup_midp_note_alarm_window

0xed05,	// (0x00010bce) data_form_pane_ParamLimits

0xa63d,	// (0x0000c506) form_field_data_pane_g1

0xa647,	// (0x0000c510) form_field_data_pane_t1_ParamLimits

0xed11,	// (0x00010bda) input_focus_pane_ParamLimits

0xed1f,	// (0x00010be8) data_form_wide_pane_ParamLimits

0xed30,	// (0x00010bf9) form_field_data_wide_pane_g1

0xed5c,	// (0x00010c25) form_field_data_wide_pane_t1_ParamLimits

0xea06,	// (0x000108cf) input_focus_pane_cp6_ParamLimits

0xa788,	// (0x0000c651) input_popup_find_pane_g1_ParamLimits

0xa788,	// (0x0000c651) input_popup_find_pane_g1

0xf1e4,	// (0x000110ad) aid_navi_side_left_pane

0xf1f9,	// (0x000110c2) aid_navi_side_right_pane

0x23b0,	// (0x00004279) bg_popup_window_pane_cp30_ParamLimits

0x23b0,	// (0x00004279) bg_popup_window_pane_cp30

0x242a,	// (0x000042f3) popup_midp_note_alarm_window_g1_ParamLimits

0x242a,	// (0x000042f3) popup_midp_note_alarm_window_g1

0x245a,	// (0x00004323) popup_midp_note_alarm_window_t1_ParamLimits

0x245a,	// (0x00004323) popup_midp_note_alarm_window_t1

0x24fb,	// (0x000043c4) popup_midp_note_alarm_window_t2_ParamLimits

0x24fb,	// (0x000043c4) popup_midp_note_alarm_window_t2

0x25a9,	// (0x00004472) popup_midp_note_alarm_window_t3_ParamLimits

0x25a9,	// (0x00004472) popup_midp_note_alarm_window_t3

0x25db,	// (0x000044a4) popup_midp_note_alarm_window_t4_ParamLimits

0x25db,	// (0x000044a4) popup_midp_note_alarm_window_t4

0x2601,	// (0x000044ca) popup_midp_note_alarm_window_t5_ParamLimits

0x2601,	// (0x000044ca) popup_midp_note_alarm_window_t5

0x000a,

0xf894,	// (0x0001175d) popup_midp_note_alarm_window_t_ParamLimits

0xf894,	// (0x0001175d) popup_midp_note_alarm_window_t

0x26ad,	// (0x00004576) wait_bar_pane_cp1_ParamLimits

0x26ad,	// (0x00004576) wait_bar_pane_cp1

0xe4a0,	// (0x00010369) wait_anim_pane_copy1

0xe4a0,	// (0x00010369) wait_border_pane_copy1

0x2095,	// (0x00003f5e) wait_border_pane_g1_copy1

0xed76,	// (0x00010c3f) form_field_popup_pane_g1

0xa661,	// (0x0000c52a) form_field_popup_pane_t1_ParamLimits

0xed11,	// (0x00010bda) input_focus_pane_cp7_ParamLimits

0xeda2,	// (0x00010c6b) list_form_pane_ParamLimits

0xedae,	// (0x00010c77) form_field_popup_wide_pane_g1

0xedb6,	// (0x00010c7f) form_field_popup_wide_pane_t1_ParamLimits

0xed11,	// (0x00010bda) input_focus_pane_cp8_ParamLimits

0xedcb,	// (0x00010c94) list_form_wide_pane_ParamLimits

0x34d5,	// (0x0000539e) aid_size_cell_graphic_pane

0xa6e0,	// (0x0000c5a9) data_form_pane_t1_ParamLimits

0xbfd5,	// (0x0000de9e) data_form_wide_pane_t1_ParamLimits

0xb5c4,	// (0x0000d48d) bg_status_flat_pane

0x9e66,	// (0x0000bd2f) title_pane_t1_ParamLimits

0xe583,	// (0x0001044c) title_pane_t2_ParamLimits

0xe5a9,	// (0x00010472) title_pane_t3_ParamLimits

0xf55d,	// (0x00011426) title_pane_t_ParamLimits

0xa89c,	// (0x0000c765) level_1_signal_ParamLimits

0xa8ae,	// (0x0000c777) level_2_signal_ParamLimits

0xa8c1,	// (0x0000c78a) level_3_signal_ParamLimits

0xa8d4,	// (0x0000c79d) level_4_signal_ParamLimits

0xa8e7,	// (0x0000c7b0) level_5_signal_ParamLimits

0xa8fa,	// (0x0000c7c3) level_6_signal_ParamLimits

0xa90d,	// (0x0000c7d6) level_7_signal_ParamLimits

0xa89c,	// (0x0000c765) level_1_battery_ParamLimits

0xa8ae,	// (0x0000c777) level_2_battery_ParamLimits

0xa8c1,	// (0x0000c78a) level_3_battery_ParamLimits

0xa8d4,	// (0x0000c79d) level_4_battery_ParamLimits

0xa8e7,	// (0x0000c7b0) level_5_battery_ParamLimits

0xa8fa,	// (0x0000c7c3) level_6_battery_ParamLimits

0xa90d,	// (0x0000c7d6) level_7_battery_ParamLimits

0x22b5,	// (0x0000417e) bg_status_flat_pane_g1

0x22bd,	// (0x00004186) bg_status_flat_pane_g2

0x22c5,	// (0x0000418e) bg_status_flat_pane_g3

0x22cd,	// (0x00004196) bg_status_flat_pane_g4

0x22d5,	// (0x0000419e) bg_status_flat_pane_g5

0x22dd,	// (0x000041a6) bg_status_flat_pane_g6

0x22e5,	// (0x000041ae) bg_status_flat_pane_g7

0x9efa,	// (0x0000bdc3) tabs_3_active_pane_t1_ParamLimits

0x9efa,	// (0x0000bdc3) tabs_3_passive_pane_t1_ParamLimits

0x9f14,	// (0x0000bddd) tabs_4_active_pane_t1_ParamLimits

0x9f14,	// (0x0000bddd) tabs_4_1_passive_pane_t1_ParamLimits

0xa79e,	// (0x0000c667) tabs_2_active_pane_t1_ParamLimits

0xa79e,	// (0x0000c667) tabs_2_passive_pane_t1_ParamLimits

0xe5d3,	// (0x0001049c) bg_active_tab_pane_cp4_ParamLimits

0xa7b0,	// (0x0000c679) tabs_2_long_active_pane_t1_ParamLimits

0x0cee,	// (0x00002bb7) bg_passive_tab_pane_cp4_ParamLimits

0x199b,	// (0x00003864) list_single_midp_graphic_pane_t1_ParamLimits

0xe5d3,	// (0x0001049c) bg_active_tab_pane_cp5_ParamLimits

0xa7c3,	// (0x0000c68c) tabs_3_long_active_pane_t1_ParamLimits

0x0cee,	// (0x00002bb7) bg_passive_tab_pane_cp5_ParamLimits

0x199b,	// (0x00003864) list_single_midp_graphic_pane_t1

0xb5c4,	// (0x0000d48d) bg_status_flat_pane_ParamLimits

0x14af,	// (0x00003378) indicator_pane_cp2_ParamLimits

0x14af,	// (0x00003378) indicator_pane_cp2

0xb75a,	// (0x0000d623) navi_pane_srt_ParamLimits

0xb75a,	// (0x0000d623) navi_pane_srt

0x1616,	// (0x000034df) popup_clock_digital_analogue_window_cp1

0xe6ba,	// (0x00010583) indicator_pane_t1

0x0779,	// (0x00002642) copy_highlight_pane

0x0779,	// (0x00002642) cursor_graphics_pane

0x0779,	// (0x00002642) graphic_within_text_pane

0x0779,	// (0x00002642) link_highlight_pane

0x2c40,	// (0x00004b09) popup_preview_text_window_t5_ParamLimits

0x2c40,	// (0x00004b09) popup_preview_text_window_t5

0x089d,	// (0x00002766) cursor_digital_pane

0x089d,	// (0x00002766) cursor_primary_pane

0x08ae,	// (0x00002777) cursor_primary_small_pane

0x08b6,	// (0x0000277f) cursor_secondary_pane

0x08be,	// (0x00002787) cursor_title_pane

0x089d,	// (0x00002766) link_highlight_digital_pane

0x08a5,	// (0x0000276e) link_highlight_primary_pane

0x08ae,	// (0x00002777) link_highlight_primary_small_pane

0x08b6,	// (0x0000277f) link_highlight_secondary_pane

0x08be,	// (0x00002787) link_highlight_title_pane

0x089d,	// (0x00002766) copy_highlight_digital_pane

0x089d,	// (0x00002766) copy_highlight_primary_pane

0x08ae,	// (0x00002777) copy_highlight_primary_small_pane

0x08b6,	// (0x0000277f) copy_highlight_secondary_pane

0x08be,	// (0x00002787) copy_highlight_title_pane

0x08b6,	// (0x0000277f) graphic_text_digital_pane

0x2353,	// (0x0000421c) graphic_text_primary_pane

0x235c,	// (0x00004225) graphic_text_primary_small_pane

0x08ae,	// (0x00002777) graphic_text_secondary_pane

0x089d,	// (0x00002766) graphic_text_title_pane

0xabfb,	// (0x0000cac4) cursor_primary_pane_g1

0x2345,	// (0x0000420e) cursor_text_primary_t1

0xba61,	// (0x0000d92a) cursor_primary_small_pane_g1

0x2337,	// (0x00004200) cursor_text_primary_small_t1

0xba57,	// (0x0000d920) cursor_primary_small_pane_g1_copy1

0x231f,	// (0x000041e8) cursor_text_primary_small_t1_copy1

0x22fd,	// (0x000041c6) cursor_text_title_t1

0xba4d,	// (0x0000d916) cursor_title_pane_g1

0xabfb,	// (0x0000cac4) cursor_digital_pane_g1

0x08d0,	// (0x00002799) cursor_text_digital_t1

0x08de,	// (0x000027a7) link_highlight_primary_pane_g1

0x22a6,	// (0x0000416f) link_highlight_primary_pane_t1

0x08de,	// (0x000027a7) link_highlight_primary_small_pane_g1

0x08e6,	// (0x000027af) link_highlight_primary_small_pane_t1

0x08f5,	// (0x000027be) link_highlight_secondary_pane_g1

0x08fd,	// (0x000027c6) link_highlight_secondary_pane_t1

0x221a,	// (0x000040e3) link_highlight_title_pane_g1

0x2222,	// (0x000040eb) link_highlight_title_pane_t1

0x2203,	// (0x000040cc) link_highlight_digital_pane_g1

0x220b,	// (0x000040d4) link_highlight_digital_pane_t1

0x20cb,	// (0x00003f94) copy_highlight_primary_pane_g1

0x20e2,	// (0x00003fab) copy_highlight_primary_pane_t1

0x20cb,	// (0x00003f94) copy_highlight_primary_small_pane_g1

0x20d3,	// (0x00003f9c) copy_highlight_primary_small_pane_t1

0x090c,	// (0x000027d5) copy_highlight_secondary_pane_g1

0x0914,	// (0x000027dd) copy_highlight_secondary_pane_t1

0x20b4,	// (0x00003f7d) copy_highlight_title_pane_g1

0x20bc,	// (0x00003f85) copy_highlight_title_pane_t1

0x20cb,	// (0x00003f94) copy_highlight_digital_pane_g1

0x375d,	// (0x00005626) copy_highlight_digital_pane_t1

0x36b1,	// (0x0000557a) graphic_text_primary_pane_g1

0x3741,	// (0x0000560a) graphic_text_primary_pane_t1

0x374f,	// (0x00005618) graphic_text_primary_pane_t2

0x0001,

0xf9c3,	// (0x0001188c) graphic_text_primary_pane_t

0x371d,	// (0x000055e6) graphic_text_primary_small_pane_g1

0x3725,	// (0x000055ee) graphic_text_primary_small_pane_t1

0x3733,	// (0x000055fc) graphic_text_primary_small_pane_t2

0x0001,

0xf9be,	// (0x00011887) graphic_text_primary_small_pane_t

0x36f9,	// (0x000055c2) graphic_text_secondary_pane_g1

0x3701,	// (0x000055ca) graphic_text_secondary_pane_t1

0x370f,	// (0x000055d8) graphic_text_secondary_pane_t2

0x0001,

0xf9b9,	// (0x00011882) graphic_text_secondary_pane_t

0x36d5,	// (0x0000559e) graphic_text_title_pane_g1

0x36dd,	// (0x000055a6) graphic_text_title_pane_t1

0x36eb,	// (0x000055b4) graphic_text_title_pane_t2

0x0001,

0xf9b4,	// (0x0001187d) graphic_text_title_pane_t

0x36b1,	// (0x0000557a) graphic_text_digital_pane_g1

0x36b9,	// (0x00005582) graphic_text_digital_pane_t1

0x36c7,	// (0x00005590) graphic_text_digital_pane_t2

0x0001,

0xf9af,	// (0x00011878) graphic_text_digital_pane_t

0xe5d3,	// (0x0001049c) navi_icon_pane_srt_ParamLimits

0xe5d3,	// (0x0001049c) navi_icon_pane_srt

0xe4a0,	// (0x00010369) navi_midp_pane_srt

0xe4a0,	// (0x00010369) navi_navi_pane_srt

0xe5d3,	// (0x0001049c) navi_text_pane_srt_ParamLimits

0xe5d3,	// (0x0001049c) navi_text_pane_srt

0x367c,	// (0x00005545) navi_navi_icon_text_pane_srt

0x3684,	// (0x0000554d) navi_navi_pane_srt_g1_ParamLimits

0x3684,	// (0x0000554d) navi_navi_pane_srt_g1

0x3696,	// (0x0000555f) navi_navi_pane_srt_g2_ParamLimits

0x3696,	// (0x0000555f) navi_navi_pane_srt_g2

0x0001,

0xf9aa,	// (0x00011873) navi_navi_pane_srt_g_ParamLimits

0xf9aa,	// (0x00011873) navi_navi_pane_srt_g

0x36a8,	// (0x00005571) navi_navi_tabs_pane_srt

0x367c,	// (0x00005545) navi_navi_text_pane_srt

0x367c,	// (0x00005545) navi_navi_volume_pane_srt

0x366d,	// (0x00005536) navi_navi_text_pane_srt_t1

0x3648,	// (0x00005511) navi_navi_volume_pane_srt_g1

0x3650,	// (0x00005519) volume_small_pane_srt_ParamLimits

0x3650,	// (0x00005519) volume_small_pane_srt

0x0923,	// (0x000027ec) volume_small_pane_srt_g1_ParamLimits

0x0923,	// (0x000027ec) volume_small_pane_srt_g1

0x0933,	// (0x000027fc) volume_small_pane_srt_g2_ParamLimits

0x0933,	// (0x000027fc) volume_small_pane_srt_g2

0x0944,	// (0x0000280d) volume_small_pane_srt_g3_ParamLimits

0x0944,	// (0x0000280d) volume_small_pane_srt_g3

0x0955,	// (0x0000281e) volume_small_pane_srt_g4_ParamLimits

0x0955,	// (0x0000281e) volume_small_pane_srt_g4

0x0966,	// (0x0000282f) volume_small_pane_srt_g5_ParamLimits

0x0966,	// (0x0000282f) volume_small_pane_srt_g5

0x0977,	// (0x00002840) volume_small_pane_srt_g6_ParamLimits

0x0977,	// (0x00002840) volume_small_pane_srt_g6

0x0988,	// (0x00002851) volume_small_pane_srt_g7_ParamLimits

0x0988,	// (0x00002851) volume_small_pane_srt_g7

0x0999,	// (0x00002862) volume_small_pane_srt_g8_ParamLimits

0x0999,	// (0x00002862) volume_small_pane_srt_g8

0x09aa,	// (0x00002873) volume_small_pane_srt_g9_ParamLimits

0x09aa,	// (0x00002873) volume_small_pane_srt_g9

0x09bb,	// (0x00002884) volume_small_pane_srt_g10_ParamLimits

0x09bb,	// (0x00002884) volume_small_pane_srt_g10

0x0009,

0xf75e,	// (0x00011627) volume_small_pane_srt_g_ParamLimits

0xf75e,	// (0x00011627) volume_small_pane_srt_g

0xe906,	// (0x000107cf) query_popup_data_pane_cp2

0x3636,	// (0x000054ff) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3636,	// (0x000054ff) navi_navi_icon_text_pane_srt_t1

0x2353,	// (0x0000421c) navi_tabs_2_long_pane_srt

0x2353,	// (0x0000421c) navi_tabs_2_pane_srt

0x2353,	// (0x0000421c) navi_tabs_3_long_pane_srt

0x2353,	// (0x0000421c) navi_tabs_3_pane_srt

0x2353,	// (0x0000421c) navi_tabs_4_pane_srt

0x360e,	// (0x000054d7) tabs_2_active_pane_srt_ParamLimits

0x360e,	// (0x000054d7) tabs_2_active_pane_srt

0x361e,	// (0x000054e7) tabs_2_passive_pane_srt_ParamLimits

0x361e,	// (0x000054e7) tabs_2_passive_pane_srt

0x1a7a,	// (0x00003943) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1a7a,	// (0x00003943) bg_passive_tab_pane_cp1_srt

0x35e2,	// (0x000054ab) bg_passive_tab_pane_g1_cp1_srt

0x027e,	// (0x00002147) bg_passive_tab_pane_g2_cp1_srt

0x35eb,	// (0x000054b4) bg_passive_tab_pane_g3_cp1_srt

0xe5bb,	// (0x00010484) bg_active_tab_pane_cp1_srt_ParamLimits

0xe5bb,	// (0x00010484) bg_active_tab_pane_cp1_srt

0x35f4,	// (0x000054bd) tabs_2_active_pane_srt_g1

0xc11a,	// (0x0000dfe3) tabs_2_active_pane_srt_t1_ParamLimits

0xc11a,	// (0x0000dfe3) tabs_2_active_pane_srt_t1

0x35e2,	// (0x000054ab) bg_active_tab_pane_g1_cp1_srt

0x027e,	// (0x00002147) bg_active_tab_pane_g2_cp1_srt

0x35eb,	// (0x000054b4) bg_active_tab_pane_g3_cp1_srt

0x35af,	// (0x00005478) tabs_3_active_pane_srt_ParamLimits

0x35af,	// (0x00005478) tabs_3_active_pane_srt

0x35c0,	// (0x00005489) tabs_3_passive_pane_cp_srt_ParamLimits

0x35c0,	// (0x00005489) tabs_3_passive_pane_cp_srt

0x35d1,	// (0x0000549a) tabs_3_passive_pane_srt_ParamLimits

0x35d1,	// (0x0000549a) tabs_3_passive_pane_srt

0x1a7a,	// (0x00003943) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1a7a,	// (0x00003943) bg_passive_tab_pane_cp2_srt

0x09cc,	// (0x00002895) bg_passive_tab_pane_g1_cp2_srt

0x027e,	// (0x00002147) bg_passive_tab_pane_g2_cp2_srt

0x09d5,	// (0x0000289e) bg_passive_tab_pane_g3_cp2_srt

0xe5bb,	// (0x00010484) bg_active_tab_pane_cp2_srt_ParamLimits

0xe5bb,	// (0x00010484) bg_active_tab_pane_cp2_srt

0x3595,	// (0x0000545e) tabs_3_active_pane_srt_g1

0xc104,	// (0x0000dfcd) tabs_3_active_pane_srt_t1_ParamLimits

0xc104,	// (0x0000dfcd) tabs_3_active_pane_srt_t1

0x09cc,	// (0x00002895) bg_active_tab_pane_g1_cp2_srt

0x027e,	// (0x00002147) bg_active_tab_pane_g2_cp2_srt

0x09d5,	// (0x0000289e) bg_active_tab_pane_g3_cp2_srt

0x354d,	// (0x00005416) tabs_4_active_pane_srt_ParamLimits

0x354d,	// (0x00005416) tabs_4_active_pane_srt

0x355f,	// (0x00005428) tabs_4_passive_pane_cp2_srt_ParamLimits

0x355f,	// (0x00005428) tabs_4_passive_pane_cp2_srt

0x0c74,	// (0x00002b3d) aid_size_cell_toolbar

0x3110,	// (0x00004fd9) main_idle_act_pane_ParamLimits

0x0ebf,	// (0x00002d88) popup_large_graphic_colour_window_ParamLimits

0xb486,	// (0x0000d34f) popup_toolbar_window_ParamLimits

0xb486,	// (0x0000d34f) popup_toolbar_window

0x3331,	// (0x000051fa) list_single_graphic_2heading_pane_ParamLimits

0x3331,	// (0x000051fa) list_single_graphic_2heading_pane

0xf272,	// (0x0001113b) aid_size_cell_apps_grid_lsc_pane

0xf284,	// (0x0001114d) aid_size_cell_apps_grid_prt_pane

0x0cee,	// (0x00002bb7) bg_wml_button_pane_cp1_ParamLimits

0x0cee,	// (0x00002bb7) bg_wml_button_pane_cp1

0xb9e0,	// (0x0000d8a9) form_midp_field_text_pane_t1_ParamLimits

0x1a7a,	// (0x00003943) input_focus_pane_cp050_ParamLimits

0x1d56,	// (0x00003c1f) list_midp_form_text_pane_ParamLimits

0x1d08,	// (0x00003bd1) input_focus_pane_cp051_ParamLimits

0x1d1c,	// (0x00003be5) list_midp_choice_pane_ParamLimits

0xb997,	// (0x0000d860) list_single_2graphic_pane_cp3_ParamLimits

0xb997,	// (0x0000d860) list_single_2graphic_pane_cp3

0x462b,	// (0x000064f4) list_single_midp_graphic_pane_ParamLimits

0x462b,	// (0x000064f4) list_single_midp_graphic_pane

0x1775,	// (0x0000363e) list_single_graphic_2heading_pane_g1_ParamLimits

0x1775,	// (0x0000363e) list_single_graphic_2heading_pane_g1

0x06ea,	// (0x000025b3) list_single_graphic_2heading_pane_g4_ParamLimits

0x06ea,	// (0x000025b3) list_single_graphic_2heading_pane_g4

0x1781,	// (0x0000364a) list_single_graphic_2heading_pane_g5_ParamLimits

0x1781,	// (0x0000364a) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b1,	// (0x0001167a) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b1,	// (0x0001167a) list_single_graphic_2heading_pane_g

0x178d,	// (0x00003656) list_single_graphic_2heading_pane_t1_ParamLimits

0x178d,	// (0x00003656) list_single_graphic_2heading_pane_t1

0x17a1,	// (0x0000366a) list_single_graphic_2heading_pane_t2_ParamLimits

0x17a1,	// (0x0000366a) list_single_graphic_2heading_pane_t2

0x17bd,	// (0x00003686) list_single_graphic_2heading_pane_t3_ParamLimits

0x17bd,	// (0x00003686) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b8,	// (0x00011681) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b8,	// (0x00011681) list_single_graphic_2heading_pane_t

0x17d5,	// (0x0000369e) bg_popup_sub_pane_cp2

0x17ff,	// (0x000036c8) grid_toobar_pane

0x183b,	// (0x00003704) cell_toolbar_pane_ParamLimits

0x183b,	// (0x00003704) cell_toolbar_pane

0x1881,	// (0x0000374a) cell_toolbar_pane_g1_ParamLimits

0x1881,	// (0x0000374a) cell_toolbar_pane_g1

0x1895,	// (0x0000375e) cell_toolbar_pane_g2_ParamLimits

0x1895,	// (0x0000375e) cell_toolbar_pane_g2

0x0001,

0xf7bf,	// (0x00011688) cell_toolbar_pane_g_ParamLimits

0xf7bf,	// (0x00011688) cell_toolbar_pane_g

0x18b7,	// (0x00003780) grid_highlight_pane_cp2_ParamLimits

0x18b7,	// (0x00003780) grid_highlight_pane_cp2

0x18d1,	// (0x0000379a) toolbar_button_pane

0x18dd,	// (0x000037a6) toolbar_button_pane_g1

0x18e5,	// (0x000037ae) toolbar_button_pane_g2

0x18ed,	// (0x000037b6) toolbar_button_pane_g3

0x18f5,	// (0x000037be) toolbar_button_pane_g4

0x18fd,	// (0x000037c6) toolbar_button_pane_g5

0x1905,	// (0x000037ce) toolbar_button_pane_g6

0x190d,	// (0x000037d6) toolbar_button_pane_g7

0x1915,	// (0x000037de) toolbar_button_pane_g8

0x191d,	// (0x000037e6) toolbar_button_pane_g9

0x0009,

0xf7c4,	// (0x0001168d) toolbar_button_pane_g

0x192d,	// (0x000037f6) list_single_2graphic_pane_g1_cp3_ParamLimits

0x192d,	// (0x000037f6) list_single_2graphic_pane_g1_cp3

0xb8f9,	// (0x0000d7c2) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb8f9,	// (0x0000d7c2) list_single_2graphic_pane_g2_cp3

0x05a3,	// (0x0000246c) list_single_2graphic_pane_g3_cp3

0x194a,	// (0x00003813) list_single_2graphic_pane_g4_cp3_ParamLimits

0x194a,	// (0x00003813) list_single_2graphic_pane_g4_cp3

0x1956,	// (0x0000381f) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1956,	// (0x0000381f) list_single_2graphic_pane_t1_cp3

0x0597,	// (0x00002460) list_single_midp_graphic_pane_g2_ParamLimits

0x0597,	// (0x00002460) list_single_midp_graphic_pane_g2

0x0c7c,	// (0x00002b45) aid_zoom_text_primary

0x0c84,	// (0x00002b4d) aid_zoom_text_secondary

0x0a89,	// (0x00002952) status_small_pane_g7_ParamLimits

0x0a89,	// (0x00002952) status_small_pane_g7

0x0aac,	// (0x00002975) status_small_pane_t1_ParamLimits

0x9e4e,	// (0x0000bd17) title_pane_g2

0x0003,

0xf554,	// (0x0001141d) title_pane_g

0xa0da,	// (0x0000bfa3) aid_size_cell_colour_1_pane_ParamLimits

0xa0da,	// (0x0000bfa3) aid_size_cell_colour_1_pane

0xa0ee,	// (0x0000bfb7) aid_size_cell_colour_2_pane_ParamLimits

0xa0ee,	// (0x0000bfb7) aid_size_cell_colour_2_pane

0xa102,	// (0x0000bfcb) aid_size_cell_colour_3_pane_ParamLimits

0xa102,	// (0x0000bfcb) aid_size_cell_colour_3_pane

0xa116,	// (0x0000bfdf) aid_size_cell_colour_4_pane_ParamLimits

0xa116,	// (0x0000bfdf) aid_size_cell_colour_4_pane

0xf0eb,	// (0x00010fb4) title_pane_stacon_g1_ParamLimits

0xf0eb,	// (0x00010fb4) title_pane_stacon_g1

0x2139,	// (0x00004002) popup_note_wait_window_g3_ParamLimits

0x2139,	// (0x00004002) popup_note_wait_window_g3

0x21b0,	// (0x00004079) popup_note_wait_window_t5_ParamLimits

0x21b0,	// (0x00004079) popup_note_wait_window_t5

0xe4a0,	// (0x00010369) main_feb_china_hwr_fs_writing_pane

0xae1d,	// (0x0000cce6) popup_feb_china_hwr_fs_window_ParamLimits

0xae1d,	// (0x0000cce6) popup_feb_china_hwr_fs_window

0xb90a,	// (0x0000d7d3) aid_size_cell_hwr_fs_ParamLimits

0xb90a,	// (0x0000d7d3) aid_size_cell_hwr_fs

0x1a7a,	// (0x00003943) bg_popup_sub_pane_cp3_ParamLimits

0x1a7a,	// (0x00003943) bg_popup_sub_pane_cp3

0xb91f,	// (0x0000d7e8) grid_hwr_fs_pane_ParamLimits

0xb91f,	// (0x0000d7e8) grid_hwr_fs_pane

0x1a9e,	// (0x00003967) linegrid_hwr_fs_pane_ParamLimits

0x1a9e,	// (0x00003967) linegrid_hwr_fs_pane

0xb937,	// (0x0000d800) cell_hwr_fs_pane_ParamLimits

0xb937,	// (0x0000d800) cell_hwr_fs_pane

0x1ad2,	// (0x0000399b) linegrid_hwr_fs_pane_g1_ParamLimits

0x1ad2,	// (0x0000399b) linegrid_hwr_fs_pane_g1

0xb95d,	// (0x0000d826) linegrid_hwr_fs_pane_g2_ParamLimits

0xb95d,	// (0x0000d826) linegrid_hwr_fs_pane_g2

0x1af0,	// (0x000039b9) linegrid_hwr_fs_pane_g3_ParamLimits

0x1af0,	// (0x000039b9) linegrid_hwr_fs_pane_g3

0x1afc,	// (0x000039c5) linegrid_hwr_fs_pane_g4_ParamLimits

0x1afc,	// (0x000039c5) linegrid_hwr_fs_pane_g4

0x1b1a,	// (0x000039e3) linegrid_hwr_fs_pane_g5_ParamLimits

0x1b1a,	// (0x000039e3) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ea,	// (0x000116b3) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ea,	// (0x000116b3) linegrid_hwr_fs_pane_g

0x1b30,	// (0x000039f9) cell_hwr_fs_pane_g1_ParamLimits

0x1b30,	// (0x000039f9) cell_hwr_fs_pane_g1

0x16ac,	// (0x00003575) cell_hwr_fs_pane_g2_ParamLimits

0x16ac,	// (0x00003575) cell_hwr_fs_pane_g2

0xb96f,	// (0x0000d838) cell_hwr_fs_pane_g3_ParamLimits

0xb96f,	// (0x0000d838) cell_hwr_fs_pane_g3

0xb97c,	// (0x0000d845) cell_hwr_fs_pane_g4_ParamLimits

0xb97c,	// (0x0000d845) cell_hwr_fs_pane_g4

0x0003,

0xf7f5,	// (0x000116be) cell_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x000116be) cell_hwr_fs_pane_g

0xb989,	// (0x0000d852) cell_hwr_fs_pane_t1

0xe4a0,	// (0x00010369) grid_highlight_pane_cp6

0xe4a0,	// (0x00010369) main_idle_act2_pane

0xeee5,	// (0x00010dae) aid_inside_area_popup_secondary

0xbc1e,	// (0x0000dae7) aid_inside_area_window_primary_ParamLimits

0xbc1e,	// (0x0000dae7) aid_inside_area_window_primary

0x376c,	// (0x00005635) ai2_news_ticker_pane

0x3774,	// (0x0000563d) aid_size_cell_ai1_link_ParamLimits

0x3774,	// (0x0000563d) aid_size_cell_ai1_link

0x378e,	// (0x00005657) popup_ai2_data_window_ParamLimits

0x378e,	// (0x00005657) popup_ai2_data_window

0x37ac,	// (0x00005675) popup_ai2_link_window_ParamLimits

0x37ac,	// (0x00005675) popup_ai2_link_window

0x1a7a,	// (0x00003943) bg_popup_sub_pane_cp4_ParamLimits

0x1a7a,	// (0x00003943) bg_popup_sub_pane_cp4

0x37c2,	// (0x0000568b) grid_ai2_link_pane_ParamLimits

0x37c2,	// (0x0000568b) grid_ai2_link_pane

0x37d9,	// (0x000056a2) popup_ai2_link_window_g1_ParamLimits

0x37d9,	// (0x000056a2) popup_ai2_link_window_g1

0x37e5,	// (0x000056ae) popup_ai2_link_window_g2_ParamLimits

0x37e5,	// (0x000056ae) popup_ai2_link_window_g2

0x0001,

0xf9c8,	// (0x00011891) popup_ai2_link_window_g_ParamLimits

0xf9c8,	// (0x00011891) popup_ai2_link_window_g

0x37f6,	// (0x000056bf) ai2_mp_button_pane

0x37fe,	// (0x000056c7) ai2_mp_volume_pane

0x1d08,	// (0x00003bd1) bg_popup_sub_pane_cp5_ParamLimits

0x1d08,	// (0x00003bd1) bg_popup_sub_pane_cp5

0x3806,	// (0x000056cf) heading_ai2_gene_pane_ParamLimits

0x3806,	// (0x000056cf) heading_ai2_gene_pane

0x3812,	// (0x000056db) list_ai2_gene_pane_ParamLimits

0x3812,	// (0x000056db) list_ai2_gene_pane

0x385a,	// (0x00005723) cell_ai2_link_pane_ParamLimits

0x385a,	// (0x00005723) cell_ai2_link_pane

0x3870,	// (0x00005739) cell_ai2_link_pane_g1

0xe4a0,	// (0x00010369) grid_highlight_pane_cp7

0x3943,	// (0x0000580c) ai2_mp_volume_pane_g1

0x394b,	// (0x00005814) ai2_mp_volume_pane_g2

0x38b8,	// (0x00005781) list_ai2_gene_pane_t1

0x3953,	// (0x0000581c) ai2_mp_volume_pane_g3

0x0002,

0xf9e1,	// (0x000118aa) ai2_mp_volume_pane_g

0x395b,	// (0x00005824) volume_small_pane_cp3

0x3964,	// (0x0000582d) aid_size_cell_ai2_button

0x396c,	// (0x00005835) grid_ai2_button_pane

0x3975,	// (0x0000583e) cell_ai2_button_pane_ParamLimits

0x3975,	// (0x0000583e) cell_ai2_button_pane

0xe327,	// (0x000101f0) cell_ai2_button_pane_g1

0xe4a0,	// (0x00010369) grid_highlight_pane_cp8

0x3903,	// (0x000057cc) ai2_gene_pane_t1_ParamLimits

0x3903,	// (0x000057cc) ai2_gene_pane_t1

0xad8d,	// (0x0000cc56) aid_height_parent_landscape

0xbe5d,	// (0x0000dd26) aid_height_set_list

0x3110,	// (0x00004fd9) aid_size_parent

0x34d5,	// (0x0000539e) aid_size_cell_graphic_pane_ParamLimits

0x3822,	// (0x000056eb) popup_ai2_data_window_g1_ParamLimits

0x3822,	// (0x000056eb) popup_ai2_data_window_g1

0x382e,	// (0x000056f7) ai2_news_ticker_pane_g1

0x3836,	// (0x000056ff) ai2_news_ticker_pane_g2

0x0001,

0xf9cd,	// (0x00011896) ai2_news_ticker_pane_g

0x383e,	// (0x00005707) ai2_news_ticker_pane_t1

0x384c,	// (0x00005715) ai2_news_ticker_pane_t2

0x0001,

0xf9d2,	// (0x0001189b) ai2_news_ticker_pane_t

0x3879,	// (0x00005742) heading_ai2_gene_pane_g1

0x3881,	// (0x0000574a) heading_ai2_gene_pane_t1_ParamLimits

0x3881,	// (0x0000574a) heading_ai2_gene_pane_t1

0x3896,	// (0x0000575f) list_highlight_pane_cp6

0x389e,	// (0x00005767) ai2_gene_pane_ParamLimits

0x389e,	// (0x00005767) ai2_gene_pane

0x38c6,	// (0x0000578f) list_ai2_gene_pane_t2

0x0001,

0xf9d7,	// (0x000118a0) list_ai2_gene_pane_t

0x38d4,	// (0x0000579d) list_highlight_pane_cp8_ParamLimits

0x38d4,	// (0x0000579d) list_highlight_pane_cp8

0x38e5,	// (0x000057ae) ai2_gene_pane_g1_ParamLimits

0x38e5,	// (0x000057ae) ai2_gene_pane_g1

0x38f7,	// (0x000057c0) ai2_gene_pane_g2_ParamLimits

0x38f7,	// (0x000057c0) ai2_gene_pane_g2

0x0001,

0xf9dc,	// (0x000118a5) ai2_gene_pane_g_ParamLimits

0xf9dc,	// (0x000118a5) ai2_gene_pane_g

0xec21,	// (0x00010aea) scroll_pane_cp12

0xad4c,	// (0x0000cc15) control_pane_t3_ParamLimits

0xad4c,	// (0x0000cc15) control_pane_t3

0x0a9d,	// (0x00002966) status_small_pane_g8_ParamLimits

0x0a9d,	// (0x00002966) status_small_pane_g8

0xaebf,	// (0x0000cd88) popup_find_window_ParamLimits

0xb170,	// (0x0000d039) popup_note_image_window_ParamLimits

0x1775,	// (0x0000363e) list_double2_graphic_pane_vc_g1_ParamLimits

0x1775,	// (0x0000363e) list_double2_graphic_pane_vc_g1

0x06ea,	// (0x000025b3) list_double2_graphic_pane_vc_g2_ParamLimits

0x06ea,	// (0x000025b3) list_double2_graphic_pane_vc_g2

0x1781,	// (0x0000364a) list_double2_graphic_pane_vc_g3_ParamLimits

0x1781,	// (0x0000364a) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b1,	// (0x0001167a) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b1,	// (0x0001167a) list_double2_graphic_pane_vc_g

0x186b,	// (0x00003734) list_double2_graphic_pane_vc_t1_ParamLimits

0x186b,	// (0x00003734) list_double2_graphic_pane_vc_t1

0x06ea,	// (0x000025b3) list_single_heading_pane_vc_g1_ParamLimits

0x06ea,	// (0x000025b3) list_single_heading_pane_vc_g1

0x1781,	// (0x0000364a) list_single_heading_pane_vc_g2_ParamLimits

0x1781,	// (0x0000364a) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00011497) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00011497) list_single_heading_pane_vc_g

0x1971,	// (0x0000383a) list_single_heading_pane_vc_t1_ParamLimits

0x1971,	// (0x0000383a) list_single_heading_pane_vc_t1

0x1989,	// (0x00003852) list_single_heading_pane_vc_t2_ParamLimits

0x1989,	// (0x00003852) list_single_heading_pane_vc_t2

0x0001,

0xf7d9,	// (0x000116a2) list_single_heading_pane_vc_t_ParamLimits

0xf7d9,	// (0x000116a2) list_single_heading_pane_vc_t

0x19b1,	// (0x0000387a) list_setting_number_pane_vc_g1_ParamLimits

0x19b1,	// (0x0000387a) list_setting_number_pane_vc_g1

0x19bd,	// (0x00003886) list_setting_number_pane_vc_g2_ParamLimits

0x19bd,	// (0x00003886) list_setting_number_pane_vc_g2

0x0001,

0xf7de,	// (0x000116a7) list_setting_number_pane_vc_g_ParamLimits

0xf7de,	// (0x000116a7) list_setting_number_pane_vc_g

0x19c9,	// (0x00003892) list_setting_number_pane_vc_t1_ParamLimits

0x19c9,	// (0x00003892) list_setting_number_pane_vc_t1

0x19dd,	// (0x000038a6) list_setting_number_pane_vc_t2_ParamLimits

0x19dd,	// (0x000038a6) list_setting_number_pane_vc_t2

0x19f9,	// (0x000038c2) list_setting_number_pane_vc_t3_ParamLimits

0x19f9,	// (0x000038c2) list_setting_number_pane_vc_t3

0x0002,

0xf7e3,	// (0x000116ac) list_setting_number_pane_vc_t_ParamLimits

0xf7e3,	// (0x000116ac) list_setting_number_pane_vc_t

0x1a27,	// (0x000038f0) set_value_pane_vc_ParamLimits

0x1a27,	// (0x000038f0) set_value_pane_vc

0x3331,	// (0x000051fa) list_double2_graphic_pane_vc_ParamLimits

0x3331,	// (0x000051fa) list_double2_graphic_pane_vc

0x3331,	// (0x000051fa) list_double2_large_graphic_pane_vc_ParamLimits

0x3331,	// (0x000051fa) list_double2_large_graphic_pane_vc

0x3331,	// (0x000051fa) list_double2_pane_vc_ParamLimits

0x3331,	// (0x000051fa) list_double2_pane_vc

0x3331,	// (0x000051fa) list_double_graphic_heading_pane_vc_ParamLimits

0x3331,	// (0x000051fa) list_double_graphic_heading_pane_vc

0x3331,	// (0x000051fa) list_double_graphic_pane_vc_ParamLimits

0x3331,	// (0x000051fa) list_double_graphic_pane_vc

0x3331,	// (0x000051fa) list_double_heading_pane_vc_ParamLimits

0x3331,	// (0x000051fa) list_double_heading_pane_vc

0x3331,	// (0x000051fa) list_double_large_graphic_pane_vc_ParamLimits

0x3331,	// (0x000051fa) list_double_large_graphic_pane_vc

0x3331,	// (0x000051fa) list_double_number_pane_vc_ParamLimits

0x3331,	// (0x000051fa) list_double_number_pane_vc

0x3331,	// (0x000051fa) list_double_pane_vc_ParamLimits

0x3331,	// (0x000051fa) list_double_pane_vc

0x3331,	// (0x000051fa) list_double_time_pane_vc_ParamLimits

0x3331,	// (0x000051fa) list_double_time_pane_vc

0x3331,	// (0x000051fa) list_setting_number_pane_vc_ParamLimits

0x3331,	// (0x000051fa) list_setting_number_pane_vc

0x3331,	// (0x000051fa) list_setting_pane_vc_ParamLimits

0x3331,	// (0x000051fa) list_setting_pane_vc

0x3331,	// (0x000051fa) list_single_graphic_heading_pane_vc_ParamLimits

0x3331,	// (0x000051fa) list_single_graphic_heading_pane_vc

0x3331,	// (0x000051fa) list_single_heading_pane_vc_ParamLimits

0x3331,	// (0x000051fa) list_single_heading_pane_vc

0x3331,	// (0x000051fa) list_single_number_heading_pane_vc_ParamLimits

0x3331,	// (0x000051fa) list_single_number_heading_pane_vc

0x1775,	// (0x0000363e) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x1775,	// (0x0000363e) list_double_graphic_heading_pane_vc_g1

0x39a8,	// (0x00005871) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x39a8,	// (0x00005871) list_double_graphic_heading_pane_vc_g2

0x39b4,	// (0x0000587d) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x39b4,	// (0x0000587d) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e8,	// (0x000118b1) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e8,	// (0x000118b1) list_double_graphic_heading_pane_vc_g

0x39c0,	// (0x00005889) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x39c0,	// (0x00005889) list_double_graphic_heading_pane_vc_t1

0x39d6,	// (0x0000589f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x39d6,	// (0x0000589f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ef,	// (0x000118b8) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ef,	// (0x000118b8) list_double_graphic_heading_pane_vc_t

0x19b1,	// (0x0000387a) list_setting_pane_vc_g1_ParamLimits

0x19b1,	// (0x0000387a) list_setting_pane_vc_g1

0x19bd,	// (0x00003886) list_setting_pane_vc_g2_ParamLimits

0x19bd,	// (0x00003886) list_setting_pane_vc_g2

0x0001,

0xf7de,	// (0x000116a7) list_setting_pane_vc_g_ParamLimits

0xf7de,	// (0x000116a7) list_setting_pane_vc_g

0x3c1c,	// (0x00005ae5) list_setting_pane_vc_t1_ParamLimits

0x3c1c,	// (0x00005ae5) list_setting_pane_vc_t1

0x3c38,	// (0x00005b01) list_setting_pane_vc_t2_ParamLimits

0x3c38,	// (0x00005b01) list_setting_pane_vc_t2

0x0001,

0xfa32,	// (0x000118fb) list_setting_pane_vc_t_ParamLimits

0xfa32,	// (0x000118fb) list_setting_pane_vc_t

0x1a27,	// (0x000038f0) set_value_pane_cp_vc_ParamLimits

0x1a27,	// (0x000038f0) set_value_pane_cp_vc

0x06ea,	// (0x000025b3) list_single_number_heading_pane_vc_g1_ParamLimits

0x06ea,	// (0x000025b3) list_single_number_heading_pane_vc_g1

0x1781,	// (0x0000364a) list_single_number_heading_pane_vc_g2_ParamLimits

0x1781,	// (0x0000364a) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00011497) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00011497) list_single_number_heading_pane_vc_g

0x1971,	// (0x0000383a) list_single_number_heading_pane_vc_t1_ParamLimits

0x1971,	// (0x0000383a) list_single_number_heading_pane_vc_t1

0x3c54,	// (0x00005b1d) list_single_number_heading_pane_vc_t2_ParamLimits

0x3c54,	// (0x00005b1d) list_single_number_heading_pane_vc_t2

0x3c66,	// (0x00005b2f) list_single_number_heading_pane_vc_t3_ParamLimits

0x3c66,	// (0x00005b2f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa37,	// (0x00011900) list_single_number_heading_pane_vc_t_ParamLimits

0xfa37,	// (0x00011900) list_single_number_heading_pane_vc_t

0x1775,	// (0x0000363e) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x1775,	// (0x0000363e) list_single_graphic_heading_pane_vc_g1

0x06ea,	// (0x000025b3) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x06ea,	// (0x000025b3) list_single_graphic_heading_pane_vc_g4

0x1781,	// (0x0000364a) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1781,	// (0x0000364a) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b1,	// (0x0001167a) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b1,	// (0x0001167a) list_single_graphic_heading_pane_vc_g

0x1971,	// (0x0000383a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x1971,	// (0x0000383a) list_single_graphic_heading_pane_vc_t1

0x3c78,	// (0x00005b41) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3c78,	// (0x00005b41) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3e,	// (0x00011907) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x00011907) list_single_graphic_heading_pane_vc_t

0x06ea,	// (0x000025b3) list_double2_pane_vc_g1_ParamLimits

0x06ea,	// (0x000025b3) list_double2_pane_vc_g1

0x1781,	// (0x0000364a) list_double2_pane_vc_g2_ParamLimits

0x1781,	// (0x0000364a) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x00011497) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x00011497) list_double2_pane_vc_g

0x3c8a,	// (0x00005b53) list_double2_pane_vc_t1_ParamLimits

0x3c8a,	// (0x00005b53) list_double2_pane_vc_t1

0x3ca0,	// (0x00005b69) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3ca0,	// (0x00005b69) list_double2_large_graphic_pane_vc_g1

0x06ea,	// (0x000025b3) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x06ea,	// (0x000025b3) list_double2_large_graphic_pane_vc_g2

0x1781,	// (0x0000364a) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x1781,	// (0x0000364a) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5eb,	// (0x000114b4) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5eb,	// (0x000114b4) list_double2_large_graphic_pane_vc_g

0x3cac,	// (0x00005b75) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3cac,	// (0x00005b75) list_double2_large_graphic_pane_vc_t1

0x3cc2,	// (0x00005b8b) list_double_time_pane_vc_g1_ParamLimits

0x3cc2,	// (0x00005b8b) list_double_time_pane_vc_g1

0x3cce,	// (0x00005b97) list_double_time_pane_vc_g2_ParamLimits

0x3cce,	// (0x00005b97) list_double_time_pane_vc_g2

0x0001,

0xfa43,	// (0x0001190c) list_double_time_pane_vc_g_ParamLimits

0xfa43,	// (0x0001190c) list_double_time_pane_vc_g

0x3cda,	// (0x00005ba3) list_double_time_pane_vc_t1_ParamLimits

0x3cda,	// (0x00005ba3) list_double_time_pane_vc_t1

0x3d0a,	// (0x00005bd3) list_double_time_pane_vc_t2_ParamLimits

0x3d0a,	// (0x00005bd3) list_double_time_pane_vc_t2

0x3d33,	// (0x00005bfc) list_double_time_pane_vc_t3_ParamLimits

0x3d33,	// (0x00005bfc) list_double_time_pane_vc_t3

0x3d45,	// (0x00005c0e) list_double_time_pane_vc_t4_ParamLimits

0x3d45,	// (0x00005c0e) list_double_time_pane_vc_t4

0x0003,

0xfa48,	// (0x00011911) list_double_time_pane_vc_t_ParamLimits

0xfa48,	// (0x00011911) list_double_time_pane_vc_t

0x06ea,	// (0x000025b3) list_double_pane_vc_g1_ParamLimits

0x06ea,	// (0x000025b3) list_double_pane_vc_g1

0x1781,	// (0x0000364a) list_double_pane_vc_g2_ParamLimits

0x1781,	// (0x0000364a) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x00011497) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x00011497) list_double_pane_vc_g

0x3d6a,	// (0x00005c33) list_double_pane_vc_t1_ParamLimits

0x3d6a,	// (0x00005c33) list_double_pane_vc_t1

0x3d7e,	// (0x00005c47) list_double_pane_vc_t2_ParamLimits

0x3d7e,	// (0x00005c47) list_double_pane_vc_t2

0x0001,

0xfa51,	// (0x0001191a) list_double_pane_vc_t_ParamLimits

0xfa51,	// (0x0001191a) list_double_pane_vc_t

0x06ea,	// (0x000025b3) list_double_number_pane_vc_g1_ParamLimits

0x06ea,	// (0x000025b3) list_double_number_pane_vc_g1

0x1781,	// (0x0000364a) list_double_number_pane_vc_g2_ParamLimits

0x1781,	// (0x0000364a) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x00011497) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x00011497) list_double_number_pane_vc_g

0x3d94,	// (0x00005c5d) list_double_number_pane_vc_t1_ParamLimits

0x3d94,	// (0x00005c5d) list_double_number_pane_vc_t1

0x3da8,	// (0x00005c71) list_double_number_pane_vc_t2_ParamLimits

0x3da8,	// (0x00005c71) list_double_number_pane_vc_t2

0x3dbc,	// (0x00005c85) list_double_number_pane_vc_t3_ParamLimits

0x3dbc,	// (0x00005c85) list_double_number_pane_vc_t3

0x0002,

0xfa56,	// (0x0001191f) list_double_number_pane_vc_t_ParamLimits

0xfa56,	// (0x0001191f) list_double_number_pane_vc_t

0x3dd2,	// (0x00005c9b) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3dd2,	// (0x00005c9b) list_double_large_graphic_pane_vc_g1

0x3de3,	// (0x00005cac) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3de3,	// (0x00005cac) list_double_large_graphic_pane_vc_g2

0x1781,	// (0x0000364a) list_double_large_graphic_pane_vc_g3_ParamLimits

0x1781,	// (0x0000364a) list_double_large_graphic_pane_vc_g3

0x3df2,	// (0x00005cbb) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3df2,	// (0x00005cbb) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5d,	// (0x00011926) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5d,	// (0x00011926) list_double_large_graphic_pane_vc_g

0x3dfe,	// (0x00005cc7) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3dfe,	// (0x00005cc7) list_double_large_graphic_pane_vc_t1

0x3e17,	// (0x00005ce0) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3e17,	// (0x00005ce0) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa66,	// (0x0001192f) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa66,	// (0x0001192f) list_double_large_graphic_pane_vc_t

0x39a8,	// (0x00005871) list_double_heading_pane_vc_g1_ParamLimits

0x39a8,	// (0x00005871) list_double_heading_pane_vc_g1

0x39b4,	// (0x0000587d) list_double_heading_pane_vc_g2_ParamLimits

0x39b4,	// (0x0000587d) list_double_heading_pane_vc_g2

0x0001,

0xfa6b,	// (0x00011934) list_double_heading_pane_vc_g_ParamLimits

0xfa6b,	// (0x00011934) list_double_heading_pane_vc_g

0x3e2e,	// (0x00005cf7) list_double_heading_pane_vc_t1_ParamLimits

0x3e2e,	// (0x00005cf7) list_double_heading_pane_vc_t1

0x1971,	// (0x0000383a) list_double_heading_pane_vc_t2_ParamLimits

0x1971,	// (0x0000383a) list_double_heading_pane_vc_t2

0x0001,

0xfa70,	// (0x00011939) list_double_heading_pane_vc_t_ParamLimits

0xfa70,	// (0x00011939) list_double_heading_pane_vc_t

0x1775,	// (0x0000363e) list_double_graphic_pane_vc_g1_ParamLimits

0x1775,	// (0x0000363e) list_double_graphic_pane_vc_g1

0x3e40,	// (0x00005d09) list_double_graphic_pane_vc_g2_ParamLimits

0x3e40,	// (0x00005d09) list_double_graphic_pane_vc_g2

0x3e4f,	// (0x00005d18) list_double_graphic_pane_vc_g3_ParamLimits

0x3e4f,	// (0x00005d18) list_double_graphic_pane_vc_g3

0x0002,

0xfa75,	// (0x0001193e) list_double_graphic_pane_vc_g_ParamLimits

0xfa75,	// (0x0001193e) list_double_graphic_pane_vc_g

0x3e5b,	// (0x00005d24) list_double_graphic_pane_vc_t1_ParamLimits

0x3e5b,	// (0x00005d24) list_double_graphic_pane_vc_t1

0x3e6f,	// (0x00005d38) list_double_graphic_pane_vc_t2_ParamLimits

0x3e6f,	// (0x00005d38) list_double_graphic_pane_vc_t2

0x0001,

0xfa7c,	// (0x00011945) list_double_graphic_pane_vc_t_ParamLimits

0xfa7c,	// (0x00011945) list_double_graphic_pane_vc_t

0xe349,	// (0x00010212) aid_size_cell_fastswap

0x9c96,	// (0x0000bb5f) aid_size_cell_touch_ParamLimits

0x9c96,	// (0x0000bb5f) aid_size_cell_touch

0xe4d0,	// (0x00010399) popup_fast_swap_wide_window_ParamLimits

0xe4d0,	// (0x00010399) popup_fast_swap_wide_window

0x9de5,	// (0x0000bcae) touch_pane_ParamLimits

0x9de5,	// (0x0000bcae) touch_pane

0xeca6,	// (0x00010b6f) button_value_adjust_pane_cp2

0xecae,	// (0x00010b77) button_value_adjust_pane_cp4

0xecb6,	// (0x00010b7f) form_field_data_pane_cp2

0xa611,	// (0x0000c4da) form_field_data_wide_pane_cp2

0xf2ca,	// (0x00011193) bg_scroll_pane_ParamLimits

0xf2e9,	// (0x000111b2) scroll_handle_pane_ParamLimits

0xf2fd,	// (0x000111c6) scroll_sc2_down_pane_ParamLimits

0xf2fd,	// (0x000111c6) scroll_sc2_down_pane

0xf324,	// (0x000111ed) scroll_sc2_up_pane_ParamLimits

0xf324,	// (0x000111ed) scroll_sc2_up_pane

0xc25b,	// (0x0000e124) grid_wheel_folder_pane_g1_ParamLimits

0xc25b,	// (0x0000e124) grid_wheel_folder_pane_g1

0x03c8,	// (0x00002291) clock_nsta_pane_cp2_ParamLimits

0x03c8,	// (0x00002291) clock_nsta_pane_cp2

0x0cee,	// (0x00002bb7) listscroll_midp_pane_ParamLimits

0xab52,	// (0x0000ca1b) midp_canvas_pane

0x0c62,	// (0x00002b2b) nsta_clock_indic_pane

0x0cc0,	// (0x00002b89) listscroll_form_pane_vc

0x0cdc,	// (0x00002ba5) listscroll_set_pane_vc_ParamLimits

0x0cdc,	// (0x00002ba5) listscroll_set_pane_vc

0xb5ec,	// (0x0000d4b5) clock_nsta_pane

0xb616,	// (0x0000d4df) indicator_nsta_pane

0x17d5,	// (0x0000369e) bg_popup_sub_pane_cp2_ParamLimits

0x17e9,	// (0x000036b2) find_pane_cp2_ParamLimits

0x17e9,	// (0x000036b2) find_pane_cp2

0x17ff,	// (0x000036c8) grid_toobar_pane_ParamLimits

0x1a39,	// (0x00003902) list_form_gen_pane_vc_ParamLimits

0x1a39,	// (0x00003902) list_form_gen_pane_vc

0x1a4f,	// (0x00003918) scroll_pane_cp8_vc_ParamLimits

0x1a4f,	// (0x00003918) scroll_pane_cp8_vc

0x1b6e,	// (0x00003a37) data_form_wide_pane_vc_ParamLimits

0x1b6e,	// (0x00003a37) data_form_wide_pane_vc

0x1b7a,	// (0x00003a43) form_field_data_wide_pane_vc_g1

0x1b82,	// (0x00003a4b) form_field_data_wide_pane_vc_t1_ParamLimits

0x1b82,	// (0x00003a4b) form_field_data_wide_pane_vc_t1

0xed11,	// (0x00010bda) input_focus_pane_cp6_vc_ParamLimits

0xed11,	// (0x00010bda) input_focus_pane_cp6_vc

0xba25,	// (0x0000d8ee) list_midp_pane_ParamLimits

0x3541,	// (0x0000540a) scroll_pane_cp16_ParamLimits

0x3541,	// (0x0000540a) scroll_pane_cp16

0x1f0d,	// (0x00003dd6) button_value_adjust_pane_ParamLimits

0x1f0d,	// (0x00003dd6) button_value_adjust_pane

0xbe6e,	// (0x0000dd37) button_value_adjust_pane_cp6_ParamLimits

0xbe6e,	// (0x0000dd37) button_value_adjust_pane_cp6

0xbfb0,	// (0x0000de79) settings_code_pane_cp_ParamLimits

0xbfb0,	// (0x0000de79) settings_code_pane_cp

0xe327,	// (0x000101f0) cell_touch_pane_g1

0xe327,	// (0x000101f0) cell_touch_pane_g2

0x0001,

0xf704,	// (0x000115cd) cell_touch_pane_g

0xc130,	// (0x0000dff9) cell_touch_pane_cp_ParamLimits

0xc130,	// (0x0000dff9) cell_touch_pane_cp

0xc14c,	// (0x0000e015) cell_touch_pane_ParamLimits

0xc14c,	// (0x0000e015) cell_touch_pane

0xe327,	// (0x000101f0) scroll_sc2_down_pane_g1

0xe327,	// (0x000101f0) scroll_sc2_up_pane_g1

0xe4a0,	// (0x00010369) bg_set_opt_pane_cp4_vc

0x39f4,	// (0x000058bd) list_set_graphic_pane_vc_g1_ParamLimits

0x39f4,	// (0x000058bd) list_set_graphic_pane_vc_g1

0xed7e,	// (0x00010c47) list_set_graphic_pane_vc_g2_ParamLimits

0xed7e,	// (0x00010c47) list_set_graphic_pane_vc_g2

0x0001,

0xf9f4,	// (0x000118bd) list_set_graphic_pane_vc_g_ParamLimits

0xf9f4,	// (0x000118bd) list_set_graphic_pane_vc_g

0x3a00,	// (0x000058c9) text_primary_small_cp13_vc_ParamLimits

0x3a00,	// (0x000058c9) text_primary_small_cp13_vc

0x3a18,	// (0x000058e1) list_set_graphic_pane_vc_ParamLimits

0x3a18,	// (0x000058e1) list_set_graphic_pane_vc

0xe4a0,	// (0x00010369) input_focus_pane_cp2_vc

0xe327,	// (0x000101f0) setting_code_pane_vc_g1

0xe673,	// (0x0001053c) setting_code_pane_vc_t1

0x3a2d,	// (0x000058f6) set_text_pane_vc_t1_ParamLimits

0x3a2d,	// (0x000058f6) set_text_pane_vc_t1

0xe4a0,	// (0x00010369) input_focus_pane_cp1_vc

0x3a4b,	// (0x00005914) list_set_text_pane_vc

0xe327,	// (0x000101f0) setting_text_pane_vc_g1

0xe4a0,	// (0x00010369) bg_set_opt_pane_cp2_vc

0xe642,	// (0x0001050b) setting_slider_graphic_pane_vc_g1

0x3a55,	// (0x0000591e) setting_slider_graphic_pane_vc_t1

0x3a67,	// (0x00005930) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f9,	// (0x000118c2) setting_slider_graphic_pane_vc_t

0x3a79,	// (0x00005942) slider_set_pane_cp_vc

0x3a83,	// (0x0000594c) slider_set_pane_vc_g1

0x3a8c,	// (0x00005955) slider_set_pane_vc_g2

0x0006,

0xf9fe,	// (0x000118c7) slider_set_pane_vc_g

0xedfe,	// (0x00010cc7) set_opt_bg_pane_g1_copy1

0xee06,	// (0x00010ccf) set_opt_bg_pane_g2_copy1

0x3ab8,	// (0x00005981) set_opt_bg_pane_g3_copy1

0xee16,	// (0x00010cdf) set_opt_bg_pane_g4_copy1

0xee1e,	// (0x00010ce7) set_opt_bg_pane_g5_copy1

0xee26,	// (0x00010cef) set_opt_bg_pane_g6_copy1

0x3ac2,	// (0x0000598b) set_opt_bg_pane_g7_copy1

0x3acc,	// (0x00005995) set_opt_bg_pane_g8_copy1

0x3ad6,	// (0x0000599f) set_opt_bg_pane_g9_copy1

0xe4a0,	// (0x00010369) bg_set_opt_pane_cp_vc

0x3ae0,	// (0x000059a9) setting_slider_pane_vc_t1

0x3aef,	// (0x000059b8) setting_slider_pane_vc_t2

0x3b01,	// (0x000059ca) setting_slider_pane_vc_t3

0x0002,

0xfa0d,	// (0x000118d6) setting_slider_pane_vc_t

0x3b13,	// (0x000059dc) slider_set_pane_vc

0x2752,	// (0x0000461b) volume_set_pane_vc_g1

0x275b,	// (0x00004624) volume_set_pane_vc_g2

0x2764,	// (0x0000462d) volume_set_pane_vc_g3

0x276d,	// (0x00004636) volume_set_pane_vc_g4

0x2776,	// (0x0000463f) volume_set_pane_vc_g5

0x277f,	// (0x00004648) volume_set_pane_vc_g6

0x2788,	// (0x00004651) volume_set_pane_vc_g7

0x2791,	// (0x0000465a) volume_set_pane_vc_g8

0x279a,	// (0x00004663) volume_set_pane_vc_g9

0x27a3,	// (0x0000466c) volume_set_pane_vc_g10

0x0009,

0xfa14,	// (0x000118dd) volume_set_pane_vc_g

0x3b1d,	// (0x000059e6) volume_set_pane_vc

0x3b27,	// (0x000059f0) button_value_adjust_pane_cp1_vc

0x3b31,	// (0x000059fa) list_highlight_pane_cp2_vc

0x3b3a,	// (0x00005a03) list_set_pane_vc_ParamLimits

0x3b3a,	// (0x00005a03) list_set_pane_vc

0x3baa,	// (0x00005a73) main_pane_set_vc_t1_ParamLimits

0x3baa,	// (0x00005a73) main_pane_set_vc_t1

0x3bbf,	// (0x00005a88) main_pane_set_vc_t2_ParamLimits

0x3bbf,	// (0x00005a88) main_pane_set_vc_t2

0x3bd1,	// (0x00005a9a) main_pane_set_vc_t3_ParamLimits

0x3bd1,	// (0x00005a9a) main_pane_set_vc_t3

0x3be5,	// (0x00005aae) main_pane_set_vc_t4_ParamLimits

0x3be5,	// (0x00005aae) main_pane_set_vc_t4

0x0003,

0xfa29,	// (0x000118f2) main_pane_set_vc_t_ParamLimits

0xfa29,	// (0x000118f2) main_pane_set_vc_t

0x3bf9,	// (0x00005ac2) setting_code_pane_vc_ParamLimits

0x3bf9,	// (0x00005ac2) setting_code_pane_vc

0x3c0a,	// (0x00005ad3) setting_slider_graphic_pane_vc

0x3c0a,	// (0x00005ad3) setting_slider_pane_vc

0x3c0a,	// (0x00005ad3) setting_text_pane_vc

0x3c0a,	// (0x00005ad3) setting_volume_pane_vc

0x3c14,	// (0x00005add) scroll_pane_cp121_vc

0xec94,	// (0x00010b5d) set_content_pane_vc

0x3e85,	// (0x00005d4e) button_value_adjust_pane_g1

0x3e8e,	// (0x00005d57) button_value_adjust_pane_g2

0x0001,

0xfa81,	// (0x0001194a) button_value_adjust_pane_g

0x3e97,	// (0x00005d60) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3e97,	// (0x00005d60) form_field_slider_wide_pane_vc_t1

0x3ea9,	// (0x00005d72) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3ea9,	// (0x00005d72) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa86,	// (0x0001194f) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa86,	// (0x0001194f) form_field_slider_wide_pane_vc_t

0xe5bb,	// (0x00010484) input_focus_pane_cp10_vc_ParamLimits

0xe5bb,	// (0x00010484) input_focus_pane_cp10_vc

0x3ed5,	// (0x00005d9e) slider_cont_pane_cp1_vc_ParamLimits

0x3ed5,	// (0x00005d9e) slider_cont_pane_cp1_vc

0x3ee7,	// (0x00005db0) slider_form_pane_g1_cp2

0x3a8c,	// (0x00005955) slider_form_pane_g2_cp2

0x3f14,	// (0x00005ddd) form_field_slider_pane_vc_t3

0x3f22,	// (0x00005deb) form_field_slider_pane_vc_t4

0x3f30,	// (0x00005df9) slider_form_pane_vc_ParamLimits

0x3f30,	// (0x00005df9) slider_form_pane_vc

0x3f3d,	// (0x00005e06) form_field_slider_pane_vc_t1_ParamLimits

0x3f3d,	// (0x00005e06) form_field_slider_pane_vc_t1

0x3ea9,	// (0x00005d72) form_field_slider_pane_vc_t2_ParamLimits

0x3ea9,	// (0x00005d72) form_field_slider_pane_vc_t2

0x0001,

0xfa98,	// (0x00011961) form_field_slider_pane_vc_t_ParamLimits

0xfa98,	// (0x00011961) form_field_slider_pane_vc_t

0xe5bb,	// (0x00010484) input_focus_pane_cp9_vc_ParamLimits

0xe5bb,	// (0x00010484) input_focus_pane_cp9_vc

0x3f53,	// (0x00005e1c) slider_cont_pane_vc_ParamLimits

0x3f53,	// (0x00005e1c) slider_cont_pane_vc

0x3f67,	// (0x00005e30) list_form_graphic_pane_cp_vc_ParamLimits

0x3f67,	// (0x00005e30) list_form_graphic_pane_cp_vc

0x1b7a,	// (0x00003a43) form_field_popup_wide_pane_vc_g1

0x3f7c,	// (0x00005e45) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3f7c,	// (0x00005e45) form_field_popup_wide_pane_vc_t1

0xed11,	// (0x00010bda) input_focus_pane_cp8_vc_ParamLimits

0xed11,	// (0x00010bda) input_focus_pane_cp8_vc

0x3fc1,	// (0x00005e8a) list_form_wide_pane_vc_ParamLimits

0x3fc1,	// (0x00005e8a) list_form_wide_pane_vc

0x3fcd,	// (0x00005e96) list_form_graphic_pane_vc_g1

0x3fd5,	// (0x00005e9e) list_form_graphic_pane_vc_t1_ParamLimits

0x3fd5,	// (0x00005e9e) list_form_graphic_pane_vc_t1

0xe5d3,	// (0x0001049c) list_highlight_pane_cp5_vc_ParamLimits

0xe5d3,	// (0x0001049c) list_highlight_pane_cp5_vc

0x3ff1,	// (0x00005eba) list_form_graphic_pane_vc_ParamLimits

0x3ff1,	// (0x00005eba) list_form_graphic_pane_vc

0x1b7a,	// (0x00003a43) form_field_popup_pane_vc_g1

0x4007,	// (0x00005ed0) form_field_popup_pane_vc_t1_ParamLimits

0x4007,	// (0x00005ed0) form_field_popup_pane_vc_t1

0xed11,	// (0x00010bda) input_focus_pane_cp7_vc_ParamLimits

0xed11,	// (0x00010bda) input_focus_pane_cp7_vc

0x401e,	// (0x00005ee7) list_form_pane_vc_ParamLimits

0x401e,	// (0x00005ee7) list_form_pane_vc

0x402a,	// (0x00005ef3) data_form_pane_vc_t1_ParamLimits

0x402a,	// (0x00005ef3) data_form_pane_vc_t1

0xedfe,	// (0x00010cc7) input_focus_pane_vc_g1

0xee06,	// (0x00010ccf) input_focus_pane_vc_g2

0xee0e,	// (0x00010cd7) input_focus_pane_vc_g3

0xee16,	// (0x00010cdf) input_focus_pane_vc_g4

0xee1e,	// (0x00010ce7) input_focus_pane_vc_g5

0xee26,	// (0x00010cef) input_focus_pane_vc_g6

0xee2e,	// (0x00010cf7) input_focus_pane_vc_g7

0xee36,	// (0x00010cff) input_focus_pane_vc_g8

0xee3e,	// (0x00010d07) input_focus_pane_vc_g9

0xe327,	// (0x000101f0) input_focus_pane_vc_g10

0x0009,

0xf68d,	// (0x00011556) input_focus_pane_vc_g

0x1b6e,	// (0x00003a37) data_form_pane_vc_ParamLimits

0x1b6e,	// (0x00003a37) data_form_pane_vc

0x1b7a,	// (0x00003a43) form_field_data_pane_vc_g1

0x4047,	// (0x00005f10) form_field_data_pane_vc_t1_ParamLimits

0x4047,	// (0x00005f10) form_field_data_pane_vc_t1

0xed11,	// (0x00010bda) input_focus_pane_vc_ParamLimits

0xed11,	// (0x00010bda) input_focus_pane_vc

0x4061,	// (0x00005f2a) button_value_adjust_pane_cp3_vc

0x4069,	// (0x00005f32) button_value_adjust_pane_cp5_vc

0x4071,	// (0x00005f3a) form_field_data_pane_vc_ParamLimits

0x4071,	// (0x00005f3a) form_field_data_pane_vc

0x408c,	// (0x00005f55) form_field_data_pane_vc_cp2

0x4094,	// (0x00005f5d) form_field_data_wide_pane_vc_ParamLimits

0x4094,	// (0x00005f5d) form_field_data_wide_pane_vc

0x40ae,	// (0x00005f77) form_field_data_wide_pane_vc_cp2

0x40b6,	// (0x00005f7f) form_field_popup_pane_vc_ParamLimits

0x40b6,	// (0x00005f7f) form_field_popup_pane_vc

0x40d1,	// (0x00005f9a) form_field_popup_wide_pane_vc_ParamLimits

0x40d1,	// (0x00005f9a) form_field_popup_wide_pane_vc

0x40eb,	// (0x00005fb4) form_field_slider_pane_vc_ParamLimits

0x40eb,	// (0x00005fb4) form_field_slider_pane_vc

0x40fe,	// (0x00005fc7) form_field_slider_wide_pane_vc_ParamLimits

0x40fe,	// (0x00005fc7) form_field_slider_wide_pane_vc

0xc16a,	// (0x0000e033) grid_touch_1_pane_ParamLimits

0xc16a,	// (0x0000e033) grid_touch_1_pane

0xc17e,	// (0x0000e047) grid_touch_2_pane_ParamLimits

0xc17e,	// (0x0000e047) grid_touch_2_pane

0x41d5,	// (0x0000609e) touch_pane_g1_ParamLimits

0x41d5,	// (0x0000609e) touch_pane_g1

0x4137,	// (0x00006000) cell_app_pane_cp_wide_ParamLimits

0x4137,	// (0x00006000) cell_app_pane_cp_wide

0x4148,	// (0x00006011) grid_popup_fast_wide_pane_ParamLimits

0x4148,	// (0x00006011) grid_popup_fast_wide_pane

0x415c,	// (0x00006025) scroll_pane_cp19_ParamLimits

0x415c,	// (0x00006025) scroll_pane_cp19

0xe4a0,	// (0x00010369) bg_popup_window_pane_cp20

0x4170,	// (0x00006039) listscroll_popup_fast_wide_pane

0xf0a1,	// (0x00010f6a) grid_indicator_nsta_pane

0x4178,	// (0x00006041) clock_nsta_pane_g1

0x4181,	// (0x0000604a) clock_nsta_pane_t1

0xc1aa,	// (0x0000e073) cell_indicator_nsta_pane_ParamLimits

0xc1aa,	// (0x0000e073) cell_indicator_nsta_pane

0x41d5,	// (0x0000609e) cell_indicator_nsta_pane_g1

0xc1c7,	// (0x0000e090) cell_indicator_nsta_pane_g2

0x0001,

0xfaa9,	// (0x00011972) cell_indicator_nsta_pane_g

0x41f9,	// (0x000060c2) clock_nsta_pane_cp

0x4201,	// (0x000060ca) indicator_nsta_pane_cp

0x420a,	// (0x000060d3) nsta_clock_indic_pane_g1

0xe6b2,	// (0x0001057b) grid_indicator_pane

0xf416,	// (0x000112df) scroll_pane_cp29

0x02f2,	// (0x000021bb) indicator_nsta_pane_cp2_ParamLimits

0x02f2,	// (0x000021bb) indicator_nsta_pane_cp2

0xe5d3,	// (0x0001049c) main_apps_wheel_pane

0x1d90,	// (0x00003c59) form_midp_field_text_pane_ParamLimits

0x1edf,	// (0x00003da8) scroll_bar_cp050_ParamLimits

0x4273,	// (0x0000613c) cell_indicator_pane_ParamLimits

0x4273,	// (0x0000613c) cell_indicator_pane

0x428b,	// (0x00006154) cell_indicator_pane_g1

0xc1dd,	// (0x0000e0a6) grid_wheel_folder_pane_ParamLimits

0xc1dd,	// (0x0000e0a6) grid_wheel_folder_pane

0xc1eb,	// (0x0000e0b4) list_wheel_apps_pane_ParamLimits

0xc1eb,	// (0x0000e0b4) list_wheel_apps_pane

0xc1f9,	// (0x0000e0c2) main_apps_wheel_pane_g1_ParamLimits

0xc1f9,	// (0x0000e0c2) main_apps_wheel_pane_g1

0xc209,	// (0x0000e0d2) main_apps_wheel_pane_g2_ParamLimits

0xc209,	// (0x0000e0d2) main_apps_wheel_pane_g2

0x0001,

0xfac5,	// (0x0001198e) main_apps_wheel_pane_g_ParamLimits

0xfac5,	// (0x0001198e) main_apps_wheel_pane_g

0xc219,	// (0x0000e0e2) main_apps_wheel_pane_t1_ParamLimits

0xc219,	// (0x0000e0e2) main_apps_wheel_pane_t1

0xc231,	// (0x0000e0fa) list_wheel_apps_pane_g1

0xc239,	// (0x0000e102) list_wheel_apps_pane_g2

0xc241,	// (0x0000e10a) list_wheel_apps_pane_g3

0xc249,	// (0x0000e112) list_wheel_apps_pane_g4

0xc251,	// (0x0000e11a) list_wheel_apps_pane_g5

0x0004,

0xfaca,	// (0x00011993) list_wheel_apps_pane_g

0x05f5,	// (0x000024be) navi_icon_text_pane

0xb4de,	// (0x0000d3a7) aid_fill_nsta

0xc26e,	// (0x0000e137) navi_icon_text_pane_g1

0xc27a,	// (0x0000e143) navi_icon_text_pane_t1

0xaab6,	// (0x0000c97f) list_set_graphic_pane_t1_ParamLimits

0xaab6,	// (0x0000c97f) list_set_graphic_pane_t1

0x2630,	// (0x000044f9) popup_midp_note_alarm_window_t6_ParamLimits

0x2630,	// (0x000044f9) popup_midp_note_alarm_window_t6

0x2642,	// (0x0000450b) popup_midp_note_alarm_window_t7_ParamLimits

0x2642,	// (0x0000450b) popup_midp_note_alarm_window_t7

0x2654,	// (0x0000451d) popup_midp_note_alarm_window_t8_ParamLimits

0x2654,	// (0x0000451d) popup_midp_note_alarm_window_t8

0x2666,	// (0x0000452f) popup_midp_note_alarm_window_t9_ParamLimits

0x2666,	// (0x0000452f) popup_midp_note_alarm_window_t9

0x2678,	// (0x00004541) popup_midp_note_alarm_window_t10_ParamLimits

0x2678,	// (0x00004541) popup_midp_note_alarm_window_t10

0x268a,	// (0x00004553) popup_midp_note_alarm_window_t11_ParamLimits

0x268a,	// (0x00004553) popup_midp_note_alarm_window_t11

0x269c,	// (0x00004565) scroll_pane_cp17_ParamLimits

0x269c,	// (0x00004565) scroll_pane_cp17

0x2752,	// (0x0000461b) volume_small_pane_cp_g1

0x437e,	// (0x00006247) volume_small_pane_cp_g2

0x4387,	// (0x00006250) volume_small_pane_cp_g3

0x4390,	// (0x00006259) volume_small_pane_cp_g4

0x4399,	// (0x00006262) volume_small_pane_cp_g5

0x43a2,	// (0x0000626b) volume_small_pane_cp_g6

0x43ab,	// (0x00006274) volume_small_pane_cp_g7

0x43b4,	// (0x0000627d) volume_small_pane_cp_g8

0x43bd,	// (0x00006286) volume_small_pane_cp_g9

0x43c6,	// (0x0000628f) volume_small_pane_cp_g10

0x084a,	// (0x00002713) midp_ticker_pane_g1_ParamLimits

0x0856,	// (0x0000271f) midp_ticker_pane_g2_ParamLimits

0xf759,	// (0x00011622) midp_ticker_pane_g_ParamLimits

0xabe9,	// (0x0000cab2) midp_ticker_pane_t1_ParamLimits

0xb502,	// (0x0000d3cb) aid_fill_nsta_2

0x1ecb,	// (0x00003d94) list_form2_midp_pane

0x32ec,	// (0x000051b5) midp_editing_number_pane_ParamLimits

0x32fb,	// (0x000051c4) midp_ticker_pane_ParamLimits

0x43cf,	// (0x00006298) form2_midp_field_pane

0x43f3,	// (0x000062bc) scroll_pane_cp51

0x4413,	// (0x000062dc) form2_midp_button_pane_ParamLimits

0x4413,	// (0x000062dc) form2_midp_button_pane

0x4425,	// (0x000062ee) form2_midp_content_pane_ParamLimits

0x4425,	// (0x000062ee) form2_midp_content_pane

0x443f,	// (0x00006308) form2_midp_field_choice_group_pane

0x4447,	// (0x00006310) form2_midp_field_pane_g1

0x444f,	// (0x00006318) form2_midp_field_pane_g2

0x4457,	// (0x00006320) form2_midp_field_pane_g3

0x445f,	// (0x00006328) form2_midp_field_pane_g4

0x0003,

0xfaef,	// (0x000119b8) form2_midp_field_pane_g

0x4467,	// (0x00006330) form2_midp_gauge_slider_pane

0x446f,	// (0x00006338) form2_midp_gauge_wait_pane

0x4477,	// (0x00006340) form2_midp_image_pane_ParamLimits

0x4477,	// (0x00006340) form2_midp_image_pane

0x4492,	// (0x0000635b) form2_midp_label_pane_ParamLimits

0x4492,	// (0x0000635b) form2_midp_label_pane

0xc2a8,	// (0x0000e171) form2_midp_label_pane_cp_ParamLimits

0xc2a8,	// (0x0000e171) form2_midp_label_pane_cp

0x44d2,	// (0x0000639b) form2_midp_string_pane_ParamLimits

0x44d2,	// (0x0000639b) form2_midp_string_pane

0xc2c9,	// (0x0000e192) form2_midp_text_pane_ParamLimits

0xc2c9,	// (0x0000e192) form2_midp_text_pane

0x4505,	// (0x000063ce) form2_midp_time_pane

0x4515,	// (0x000063de) input_focus_pane_cp51_ParamLimits

0x4515,	// (0x000063de) input_focus_pane_cp51

0x452d,	// (0x000063f6) form2_midp_label_pane_t1_ParamLimits

0x452d,	// (0x000063f6) form2_midp_label_pane_t1

0xc2ea,	// (0x0000e1b3) form2_mdip_text_pane_t1_ParamLimits

0xc2ea,	// (0x0000e1b3) form2_mdip_text_pane_t1

0x4595,	// (0x0000645e) form2_midp_time_pane_t1

0x45b0,	// (0x00006479) form2_midp_gauge_slider_pane_t1

0xc309,	// (0x0000e1d2) form2_midp_gauge_slider_pane_t2

0xc31b,	// (0x0000e1e4) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf8,	// (0x000119c1) form2_midp_gauge_slider_pane_t

0x45e6,	// (0x000064af) form2_midp_slider_pane

0x45f2,	// (0x000064bb) form2_midp_gauge_wait_pane_t1

0x4600,	// (0x000064c9) form2_midp_wait_pane_ParamLimits

0x4600,	// (0x000064c9) form2_midp_wait_pane

0x1bc1,	// (0x00003a8a) list_single_2graphic_pane_cp4_ParamLimits

0x1bc1,	// (0x00003a8a) list_single_2graphic_pane_cp4

0x462b,	// (0x000064f4) list_single_midp_graphic_pane_cp_ParamLimits

0x462b,	// (0x000064f4) list_single_midp_graphic_pane_cp

0xe4a0,	// (0x00010369) list_highlight_pane_cp20

0x464f,	// (0x00006518) list_single_2graphic_pane_g1_cp4

0x3879,	// (0x00005742) list_single_2graphic_pane_g2_cp4

0x4657,	// (0x00006520) list_single_2graphic_pane_t1_cp4

0xe5d3,	// (0x0001049c) list_highlight_pane_cp21

0x4666,	// (0x0000652f) list_single_midp_graphic_pane_g4_cp

0x4675,	// (0x0000653e) list_single_midp_graphic_pane_t1_cp

0xc32d,	// (0x0000e1f6) form2_mdip_string_pane_t1_ParamLimits

0xc32d,	// (0x0000e1f6) form2_mdip_string_pane_t1

0xe4a0,	// (0x00010369) bg_wml_button_pane_cp2

0xe327,	// (0x000101f0) form2_midp_image_pane_g1

0xec3e,	// (0x00010b07) list_double_large_graphic_pane_g5_ParamLimits

0xec3e,	// (0x00010b07) list_double_large_graphic_pane_g5

0x0cee,	// (0x00002bb7) midp_form_pane_ParamLimits

0xe5d3,	// (0x0001049c) main_apps_wheel_pane_ParamLimits

0xb1f6,	// (0x0000d0bf) popup_preview_window_ParamLimits

0xb1f6,	// (0x0000d0bf) popup_preview_window

0x12be,	// (0x00003187) popup_touch_info_window_ParamLimits

0x12be,	// (0x00003187) popup_touch_info_window

0x12e0,	// (0x000031a9) popup_touch_menu_window_ParamLimits

0x12e0,	// (0x000031a9) popup_touch_menu_window

0xe31d,	// (0x000101e6) bg_popup_sub_pane_cp6

0x472f,	// (0x000065f8) list_touch_menu_pane

0x4737,	// (0x00006600) list_single_touch_menu_pane_ParamLimits

0x4737,	// (0x00006600) list_single_touch_menu_pane

0x474f,	// (0x00006618) list_single_touch_menu_pane_t1

0xe5d3,	// (0x0001049c) bg_popup_sub_pane_cp7_ParamLimits

0xe5d3,	// (0x0001049c) bg_popup_sub_pane_cp7

0x475d,	// (0x00006626) heading_sub_pane

0x4765,	// (0x0000662e) list_touch_info_pane_ParamLimits

0x4765,	// (0x0000662e) list_touch_info_pane

0x4774,	// (0x0000663d) list_single_touch_info_pane_ParamLimits

0x4774,	// (0x0000663d) list_single_touch_info_pane

0x4786,	// (0x0000664f) list_single_touch_info_pane_t1

0x4794,	// (0x0000665d) list_single_touch_info_pane_t2

0x0001,

0xfb06,	// (0x000119cf) list_single_touch_info_pane_t

0x0779,	// (0x00002642) bg_popup_heading_pane_cp

0x47a2,	// (0x0000666b) heading_sub_pane_t1

0x1a7a,	// (0x00003943) bg_popup_preview_window_pane_cp_ParamLimits

0x1a7a,	// (0x00003943) bg_popup_preview_window_pane_cp

0x475d,	// (0x00006626) heading_preview_pane

0x4765,	// (0x0000662e) list_preview_pane_ParamLimits

0x4765,	// (0x0000662e) list_preview_pane

0x47b0,	// (0x00006679) popup_preview_window_g1

0x4774,	// (0x0000663d) list_single_preview_pane_ParamLimits

0x4774,	// (0x0000663d) list_single_preview_pane

0x47b8,	// (0x00006681) list_single_preview_pane_g1

0x47c0,	// (0x00006689) list_single_preview_pane_t1

0x4786,	// (0x0000664f) list_single_preview_pane_t2

0x0001,

0xfb0b,	// (0x000119d4) list_single_preview_pane_t

0x47ce,	// (0x00006697) bg_popup_heading_pane_cp2_ParamLimits

0x47ce,	// (0x00006697) bg_popup_heading_pane_cp2

0x47e4,	// (0x000066ad) heading_preview_pane_g1

0x47ec,	// (0x000066b5) heading_preview_pane_t1_ParamLimits

0x47ec,	// (0x000066b5) heading_preview_pane_t1

0xe6c9,	// (0x00010592) soft_indicator_pane_t1_ParamLimits

0xebfe,	// (0x00010ac7) scroll_pane_ParamLimits

0xf312,	// (0x000111db) scroll_sc2_left_pane

0xf31b,	// (0x000111e4) scroll_sc2_right_pane

0xf33a,	// (0x00011203) scroll_bg_pane_g1_ParamLimits

0xf34f,	// (0x00011218) scroll_bg_pane_g2_ParamLimits

0xf367,	// (0x00011230) scroll_bg_pane_g3_ParamLimits

0xf6e4,	// (0x000115ad) scroll_bg_pane_g_ParamLimits

0xf33a,	// (0x00011203) scroll_handle_pane_g1_ParamLimits

0xf389,	// (0x00011252) scroll_handle_pane_g2_ParamLimits

0xf367,	// (0x00011230) scroll_handle_pane_g3_ParamLimits

0xf6eb,	// (0x000115b4) scroll_handle_pane_g_ParamLimits

0x0d1e,	// (0x00002be7) popup_choice_list_window_ParamLimits

0x0d1e,	// (0x00002be7) popup_choice_list_window

0x17e1,	// (0x000036aa) choice_list_pane

0x18a9,	// (0x00003772) cell_toolbar_pane_t1

0x18d1,	// (0x0000379a) toolbar_button_pane_ParamLimits

0x2cd2,	// (0x00004b9b) ai_gene_pane_1_t2_ParamLimits

0x2cd2,	// (0x00004b9b) ai_gene_pane_1_t2

0x0001,

0xf907,	// (0x000117d0) ai_gene_pane_1_t_ParamLimits

0xf907,	// (0x000117d0) ai_gene_pane_1_t

0x4809,	// (0x000066d2) scroll_sc2_left_pane_g1

0x4809,	// (0x000066d2) scroll_sc2_right_pane_g1

0x0cee,	// (0x00002bb7) bg_popup_sub_pane_cp10

0x4813,	// (0x000066dc) list_choice_list_pane

0x482c,	// (0x000066f5) list_single_choice_list_pane_ParamLimits

0x482c,	// (0x000066f5) list_single_choice_list_pane

0x4844,	// (0x0000670d) list_single_choice_list_pane_g1

0xef23,	// (0x00010dec) list_single_choice_list_pane_t1_ParamLimits

0xef23,	// (0x00010dec) list_single_choice_list_pane_t1

0x484c,	// (0x00006715) choice_list_pane_g1

0x4854,	// (0x0000671d) choice_list_pane_t1

0xe31d,	// (0x000101e6) input_focus_pane_cp11

0xf0ff,	// (0x00010fc8) title_pane_stacon_g2_ParamLimits

0xf0ff,	// (0x00010fc8) title_pane_stacon_g2

0x0002,

0xf6ca,	// (0x00011593) title_pane_stacon_g_ParamLimits

0xf6ca,	// (0x00011593) title_pane_stacon_g

0x0779,	// (0x00002642) cursor_press_pane

0xae73,	// (0x0000cd3c) popup_fep_hwr_window_ParamLimits

0xae73,	// (0x0000cd3c) popup_fep_hwr_window

0x0e62,	// (0x00002d2b) popup_fep_vkb_window_ParamLimits

0x0e62,	// (0x00002d2b) popup_fep_vkb_window

0x4862,	// (0x0000672b) cursor_press_pane_g1

0x0002,

0xfb34,	// (0x000119fd) fep_vkb_side_pane_g_ParamLimits

0x48a3,	// (0x0000676c) fep_hwr_candidate_pane_ParamLimits

0x48a3,	// (0x0000676c) fep_hwr_candidate_pane

0x48cd,	// (0x00006796) fep_hwr_side_pane_ParamLimits

0x48cd,	// (0x00006796) fep_hwr_side_pane

0x48ef,	// (0x000067b8) fep_hwr_top_pane_ParamLimits

0x48ef,	// (0x000067b8) fep_hwr_top_pane

0x4907,	// (0x000067d0) fep_hwr_write_pane_ParamLimits

0x4907,	// (0x000067d0) fep_hwr_write_pane

0xfb34,	// (0x000119fd) fep_vkb_side_pane_g

0x4941,	// (0x0000680a) fep_hwr_top_pane_g1

0x4953,	// (0x0000681c) fep_hwr_top_pane_g2

0x4965,	// (0x0000682e) fep_hwr_top_pane_g3

0x0002,

0xfb10,	// (0x000119d9) fep_hwr_top_pane_g

0x497a,	// (0x00006843) fep_hwr_top_text_pane

0xf483,	// (0x0001134c) fep_hwr_top_text_pane_g1

0x4a56,	// (0x0000691f) fep_hwr_top_text_pane_t1

0x4ab6,	// (0x0000697f) fep_hwr_candidate_pane_g1

0x4d27,	// (0x00006bf0) fep_vkb_keypad_pane_g3_ParamLimits

0x4d27,	// (0x00006bf0) fep_vkb_keypad_pane_g3

0x4d53,	// (0x00006c1c) fep_vkb_keypad_pane_g4_ParamLimits

0x4d53,	// (0x00006c1c) fep_vkb_keypad_pane_g4

0x4dca,	// (0x00006c93) fep_vkb_bottom_pane_g2_ParamLimits

0x4dca,	// (0x00006c93) fep_vkb_bottom_pane_g2

0x0001,

0xfb3b,	// (0x00011a04) fep_vkb_bottom_pane_g_ParamLimits

0xfb3b,	// (0x00011a04) fep_vkb_bottom_pane_g

0x4809,	// (0x000066d2) cell_vkb_side_pane_g2

0x0001,

0xfb45,	// (0x00011a0e) cell_vkb_side_pane_g

0x4e55,	// (0x00006d1e) cell_vkb_side_pane_t1

0x4e63,	// (0x00006d2c) cell_vkb_side_pane_t1_copy1

0x4809,	// (0x000066d2) bg_fep_vkb_candidate_pane_g2

0x4fa7,	// (0x00006e70) cell_vkb_candidate_pane_ParamLimits

0x4aea,	// (0x000069b3) aid_size_cell_vkb_ParamLimits

0x4aea,	// (0x000069b3) aid_size_cell_vkb

0x4fa7,	// (0x00006e70) cell_vkb_candidate_pane

0x4fe1,	// (0x00006eaa) bg_popup_fep_shadow_pane_g1

0xc422,	// (0x0000e2eb) fep_vkb_bottom_pane_ParamLimits

0xc422,	// (0x0000e2eb) fep_vkb_bottom_pane

0x4bb9,	// (0x00006a82) fep_vkb_candidate_pane_ParamLimits

0x4bb9,	// (0x00006a82) fep_vkb_candidate_pane

0xc44e,	// (0x0000e317) fep_vkb_keypad_pane_ParamLimits

0xc44e,	// (0x0000e317) fep_vkb_keypad_pane

0xc475,	// (0x0000e33e) fep_vkb_side_pane_ParamLimits

0xc475,	// (0x0000e33e) fep_vkb_side_pane

0xc4b1,	// (0x0000e37a) fep_vkb_top_pane_ParamLimits

0xc4b1,	// (0x0000e37a) fep_vkb_top_pane

0x4c80,	// (0x00006b49) fep_vkb_top_pane_g1_ParamLimits

0x4c80,	// (0x00006b49) fep_vkb_top_pane_g1

0x4c8f,	// (0x00006b58) fep_vkb_top_pane_g2_ParamLimits

0x4c8f,	// (0x00006b58) fep_vkb_top_pane_g2

0x4c9e,	// (0x00006b67) fep_vkb_top_pane_g3_ParamLimits

0x4c9e,	// (0x00006b67) fep_vkb_top_pane_g3

0x0003,

0xfb2b,	// (0x000119f4) fep_vkb_top_pane_g_ParamLimits

0xfb2b,	// (0x000119f4) fep_vkb_top_pane_g

0x4cbc,	// (0x00006b85) fep_vkb_top_text_pane_ParamLimits

0x4cbc,	// (0x00006b85) fep_vkb_top_text_pane

0xc4ed,	// (0x0000e3b6) fep_vkb_side_pane_g1_ParamLimits

0xc4ed,	// (0x0000e3b6) fep_vkb_side_pane_g1

0x4d16,	// (0x00006bdf) grid_vkb_side_pane_ParamLimits

0x4d16,	// (0x00006bdf) grid_vkb_side_pane

0x4fe9,	// (0x00006eb2) bg_popup_fep_shadow_pane_g2

0x4ff2,	// (0x00006ebb) bg_popup_fep_shadow_pane_g3

0x4ffa,	// (0x00006ec3) bg_popup_fep_shadow_pane_g4

0x5003,	// (0x00006ecc) bg_popup_fep_shadow_pane_g5

0x500d,	// (0x00006ed6) bg_popup_fep_shadow_pane_g6

0x5015,	// (0x00006ede) bg_popup_fep_shadow_pane_g7

0xee1e,	// (0x00010ce7) bg_popup_fep_shadow_pane_g8

0x4d75,	// (0x00006c3e) grid_vkb_keypad_number_pane_ParamLimits

0x4d75,	// (0x00006c3e) grid_vkb_keypad_number_pane

0x4d89,	// (0x00006c52) grid_vkb_keypad_pane_ParamLimits

0x4d89,	// (0x00006c52) grid_vkb_keypad_pane

0x4daf,	// (0x00006c78) fep_vkb_bottom_pane_g1_ParamLimits

0x4daf,	// (0x00006c78) fep_vkb_bottom_pane_g1

0x4dd8,	// (0x00006ca1) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4dd8,	// (0x00006ca1) grid_vkb_keypad_bottom_left_pane

0x4ded,	// (0x00006cb6) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4ded,	// (0x00006cb6) grid_vkb_keypad_bottom_right_pane

0x4e02,	// (0x00006ccb) fep_vkb_top_text_pane_g1

0xc534,	// (0x0000e3fd) fep_vkb_top_text_pane_t1

0xc546,	// (0x0000e40f) cell_vkb_side_pane_ParamLimits

0xc546,	// (0x0000e40f) cell_vkb_side_pane

0x4809,	// (0x000066d2) cell_vkb_side_pane_g1

0x4e71,	// (0x00006d3a) cell_vkb_keypad_pane_ParamLimits

0x4e71,	// (0x00006d3a) cell_vkb_keypad_pane

0x4efe,	// (0x00006dc7) cell_vkb_keypad_pane_g1

0x0008,

0xfb58,	// (0x00011a21) bg_popup_fep_shadow_pane_g

0x4809,	// (0x000066d2) cell_hwr_side_pane_g1

0x4809,	// (0x000066d2) cell_hwr_side_pane_g2

0x4f08,	// (0x00006dd1) cell_vkb_keypad_pane_t1

0xc55c,	// (0x0000e425) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc55c,	// (0x0000e425) cell_vkb_keypad_bottom_left_pane

0xc571,	// (0x0000e43a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc571,	// (0x0000e43a) cell_vkb_keypad_bottom_right_pane

0x4809,	// (0x000066d2) cell_vkb_keypad_bottom_left_pane_g1

0x4809,	// (0x000066d2) cell_vkb_keypad_bottom_right_pane_g1

0x4f6c,	// (0x00006e35) cell_vkb_keypad_number_pane_ParamLimits

0x4f6c,	// (0x00006e35) cell_vkb_keypad_number_pane

0x4f8b,	// (0x00006e54) cell_vkb_keypad_number_pane_g1

0x4f95,	// (0x00006e5e) cell_vkb_keypad_number_pane_g2

0x4f9e,	// (0x00006e67) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4a,	// (0x00011a13) cell_vkb_keypad_number_pane_g

0x4f08,	// (0x00006dd1) cell_vkb_keypad_number_pane_t1

0x4fc8,	// (0x00006e91) fep_vkb_candidate_pane_g1

0x0001,

0xfb45,	// (0x00011a0e) cell_hwr_side_pane_g

0x5027,	// (0x00006ef0) cell_hwr_side_pane_t1

0x5035,	// (0x00006efe) cell_hwr_side_pane_t1_copy1

0x4cae,	// (0x00006b77) cell_hwr_candidate_pane_g1

0x5085,	// (0x00006f4e) cell_hwr_candidate_pane_t1

0x4809,	// (0x000066d2) cell_vkb_candidate_pane_g2

0x50d9,	// (0x00006fa2) cell_vkb_candidate_pane_t1

0x486a,	// (0x00006733) bg_popup_fep_shadow_pane_ParamLimits

0x486a,	// (0x00006733) bg_popup_fep_shadow_pane

0x4921,	// (0x000067ea) bg_fep_hwr_top_pane_g4

0x498f,	// (0x00006858) bg_hwr_side_pane_g1_ParamLimits

0x498f,	// (0x00006858) bg_hwr_side_pane_g1

0xc3db,	// (0x0000e2a4) cell_hwr_side_pane_ParamLimits

0xc3db,	// (0x0000e2a4) cell_hwr_side_pane

0x4a01,	// (0x000068ca) fep_hwr_write_pane_g1_ParamLimits

0x4a01,	// (0x000068ca) fep_hwr_write_pane_g1

0x4a0e,	// (0x000068d7) fep_hwr_write_pane_g2_ParamLimits

0x4a0e,	// (0x000068d7) fep_hwr_write_pane_g2

0x4a1b,	// (0x000068e4) fep_hwr_write_pane_g3_ParamLimits

0x4a1b,	// (0x000068e4) fep_hwr_write_pane_g3

0xc3fb,	// (0x0000e2c4) fep_hwr_write_pane_g4_ParamLimits

0xc3fb,	// (0x0000e2c4) fep_hwr_write_pane_g4

0x0005,

0xfb17,	// (0x000119e0) fep_hwr_write_pane_g_ParamLimits

0xfb17,	// (0x000119e0) fep_hwr_write_pane_g

0x4921,	// (0x000067ea) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x4921,	// (0x000067ea) bg_fep_hwr_candidate_pane_g2

0x4a64,	// (0x0000692d) cell_hwr_candidate_pane_ParamLimits

0x4a64,	// (0x0000692d) cell_hwr_candidate_pane

0x4ab6,	// (0x0000697f) fep_hwr_candidate_pane_g1_ParamLimits

0x4b18,	// (0x000069e1) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4b18,	// (0x000069e1) bg_popup_fep_shadow_pane_cp2

0x4cae,	// (0x00006b77) fep_vkb_top_pane_g4_ParamLimits

0x4cae,	// (0x00006b77) fep_vkb_top_pane_g4

0x4cf4,	// (0x00006bbd) fep_vkb_side_pane_g2_ParamLimits

0x4cf4,	// (0x00006bbd) fep_vkb_side_pane_g2

0xa535,	// (0x0000c3fe) list_setting_pane_t4_ParamLimits

0xa535,	// (0x0000c3fe) list_setting_pane_t4

0xa5b1,	// (0x0000c47a) list_setting_number_pane_t5_ParamLimits

0xa5b1,	// (0x0000c47a) list_setting_number_pane_t5

0xa920,	// (0x0000c7e9) list_double_heading_pane_cp2_ParamLimits

0xa920,	// (0x0000c7e9) list_double_heading_pane_cp2

0x50e7,	// (0x00006fb0) list_double_heading_pane_g1_cp2_ParamLimits

0x50e7,	// (0x00006fb0) list_double_heading_pane_g1_cp2

0x50f3,	// (0x00006fbc) list_double_heading_pane_g2_cp2_ParamLimits

0x50f3,	// (0x00006fbc) list_double_heading_pane_g2_cp2

0x5107,	// (0x00006fd0) list_double_heading_pane_t1_cp2_ParamLimits

0x5107,	// (0x00006fd0) list_double_heading_pane_t1_cp2

0x511d,	// (0x00006fe6) list_double_heading_pane_t2_cp2_ParamLimits

0x511d,	// (0x00006fe6) list_double_heading_pane_t2_cp2

0xe315,	// (0x000101de) aid_value_unit2

0xe4f4,	// (0x000103bd) popup_preview_fixed_window

0xe7a9,	// (0x00010672) bg_popup_preview_window_pane_cp02

0x512f,	// (0x00006ff8) list_preview_fixed_pane

0x5175,	// (0x0000703e) list_empty_pane_fp_ParamLimits

0x5175,	// (0x0000703e) list_empty_pane_fp

0x5175,	// (0x0000703e) list_single_cale_day_pane_fp_ParamLimits

0x5175,	// (0x0000703e) list_single_cale_day_pane_fp

0x5175,	// (0x0000703e) list_single_graphic_heading_pane_fp_ParamLimits

0x5175,	// (0x0000703e) list_single_graphic_heading_pane_fp

0x5175,	// (0x0000703e) list_single_graphic_pane_fp_ParamLimits

0x5175,	// (0x0000703e) list_single_graphic_pane_fp

0x5175,	// (0x0000703e) list_single_heading_pane_fp_ParamLimits

0x5175,	// (0x0000703e) list_single_heading_pane_fp

0x5175,	// (0x0000703e) list_single_pane_fp_ParamLimits

0x5175,	// (0x0000703e) list_single_pane_fp

0x518e,	// (0x00007057) list_single_pane_fp_g1_ParamLimits

0x518e,	// (0x00007057) list_single_pane_fp_g1

0x50e7,	// (0x00006fb0) list_single_pane_fp_g2_ParamLimits

0x50e7,	// (0x00006fb0) list_single_pane_fp_g2

0x50f3,	// (0x00006fbc) list_single_pane_fp_g3_ParamLimits

0x50f3,	// (0x00006fbc) list_single_pane_fp_g3

0x519a,	// (0x00007063) list_single_pane_fp_g4_ParamLimits

0x519a,	// (0x00007063) list_single_pane_fp_g4

0x0003,

0xfb79,	// (0x00011a42) list_single_pane_fp_g_ParamLimits

0xfb79,	// (0x00011a42) list_single_pane_fp_g

0x51a6,	// (0x0000706f) list_single_pane_fp_t1_ParamLimits

0x51a6,	// (0x0000706f) list_single_pane_fp_t1

0x51bd,	// (0x00007086) list_single_graphic_pane_fp_g1_ParamLimits

0x51bd,	// (0x00007086) list_single_graphic_pane_fp_g1

0x518e,	// (0x00007057) list_single_graphic_pane_fp_g2_ParamLimits

0x518e,	// (0x00007057) list_single_graphic_pane_fp_g2

0x50e7,	// (0x00006fb0) list_single_graphic_pane_fp_g3_ParamLimits

0x50e7,	// (0x00006fb0) list_single_graphic_pane_fp_g3

0x50f3,	// (0x00006fbc) list_single_graphic_pane_fp_g4_ParamLimits

0x50f3,	// (0x00006fbc) list_single_graphic_pane_fp_g4

0x519a,	// (0x00007063) list_single_graphic_pane_fp_g5_ParamLimits

0x519a,	// (0x00007063) list_single_graphic_pane_fp_g5

0x0004,

0xfb82,	// (0x00011a4b) list_single_graphic_pane_fp_g_ParamLimits

0xfb82,	// (0x00011a4b) list_single_graphic_pane_fp_g

0x51c9,	// (0x00007092) list_single_graphic_pane_fp_t1_ParamLimits

0x51c9,	// (0x00007092) list_single_graphic_pane_fp_t1

0x51bd,	// (0x00007086) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x51bd,	// (0x00007086) list_single_graphic_heading_pane_fp_g1

0x518e,	// (0x00007057) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x518e,	// (0x00007057) list_single_graphic_heading_pane_fp_g2

0x50e7,	// (0x00006fb0) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x50e7,	// (0x00006fb0) list_single_graphic_heading_pane_fp_g3

0x50f3,	// (0x00006fbc) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x50f3,	// (0x00006fbc) list_single_graphic_heading_pane_fp_g4

0x519a,	// (0x00007063) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x519a,	// (0x00007063) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb82,	// (0x00011a4b) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb82,	// (0x00011a4b) list_single_graphic_heading_pane_fp_g

0x51df,	// (0x000070a8) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x51df,	// (0x000070a8) list_single_graphic_heading_pane_fp_t1

0x51f5,	// (0x000070be) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x51f5,	// (0x000070be) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8d,	// (0x00011a56) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8d,	// (0x00011a56) list_single_graphic_heading_pane_fp_t

0x5207,	// (0x000070d0) list_single_cale_day_pane_fp_g1_ParamLimits

0x5207,	// (0x000070d0) list_single_cale_day_pane_fp_g1

0x523f,	// (0x00007108) list_single_cale_day_pane_fp_g2_ParamLimits

0x523f,	// (0x00007108) list_single_cale_day_pane_fp_g2

0x524b,	// (0x00007114) list_single_cale_day_pane_fp_g3_ParamLimits

0x524b,	// (0x00007114) list_single_cale_day_pane_fp_g3

0x5273,	// (0x0000713c) list_single_cale_day_pane_fp_g4_ParamLimits

0x5273,	// (0x0000713c) list_single_cale_day_pane_fp_g4

0x5297,	// (0x00007160) list_single_cale_day_pane_fp_g5_ParamLimits

0x5297,	// (0x00007160) list_single_cale_day_pane_fp_g5

0x0004,

0xfb92,	// (0x00011a5b) list_single_cale_day_pane_fp_g_ParamLimits

0xfb92,	// (0x00011a5b) list_single_cale_day_pane_fp_g

0x52bb,	// (0x00007184) list_single_cale_day_pane_fp_t1_ParamLimits

0x52bb,	// (0x00007184) list_single_cale_day_pane_fp_t1

0x52e1,	// (0x000071aa) list_single_cale_day_pane_fp_t2_ParamLimits

0x52e1,	// (0x000071aa) list_single_cale_day_pane_fp_t2

0x52fa,	// (0x000071c3) list_single_cale_day_pane_fp_t3_ParamLimits

0x52fa,	// (0x000071c3) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9d,	// (0x00011a66) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9d,	// (0x00011a66) list_single_cale_day_pane_fp_t

0x518e,	// (0x00007057) list_empty_pane_fp_g1_ParamLimits

0x518e,	// (0x00007057) list_empty_pane_fp_g1

0x5313,	// (0x000071dc) list_empty_pane_fp_t1

0x5321,	// (0x000071ea) list_empty_pane_fp_t2

0x0001,

0xfba4,	// (0x00011a6d) list_empty_pane_fp_t

0x518e,	// (0x00007057) list_single_heading_pane_fp_g1_ParamLimits

0x518e,	// (0x00007057) list_single_heading_pane_fp_g1

0x50e7,	// (0x00006fb0) list_single_heading_pane_fp_g2_ParamLimits

0x50e7,	// (0x00006fb0) list_single_heading_pane_fp_g2

0x50f3,	// (0x00006fbc) list_single_heading_pane_fp_g3_ParamLimits

0x50f3,	// (0x00006fbc) list_single_heading_pane_fp_g3

0x0002,

0xfba9,	// (0x00011a72) list_single_heading_pane_fp_g_ParamLimits

0xfba9,	// (0x00011a72) list_single_heading_pane_fp_g

0x532f,	// (0x000071f8) list_single_heading_pane_fp_t1_ParamLimits

0x532f,	// (0x000071f8) list_single_heading_pane_fp_t1

0x5341,	// (0x0000720a) list_single_heading_pane_fp_t2_ParamLimits

0x5341,	// (0x0000720a) list_single_heading_pane_fp_t2

0x0001,

0xfbb0,	// (0x00011a79) list_single_heading_pane_fp_t_ParamLimits

0xfbb0,	// (0x00011a79) list_single_heading_pane_fp_t

0xef38,	// (0x00010e01) aid_size_cell_fast

0xe78c,	// (0x00010655) soft_indicator_pane_cp1_t1

0xef75,	// (0x00010e3e) cell_app_pane_cp2_ParamLimits

0xef75,	// (0x00010e3e) cell_app_pane_cp2

0x488c,	// (0x00006755) fep_hwr_candidate_drop_down_list_pane

0x4ad0,	// (0x00006999) fep_hwr_candidate_pane_g3_ParamLimits

0x4ad0,	// (0x00006999) fep_hwr_candidate_pane_g3

0x4add,	// (0x000069a6) fep_hwr_candidate_pane_g4_ParamLimits

0x4add,	// (0x000069a6) fep_hwr_candidate_pane_g4

0x0002,

0xfb24,	// (0x000119ed) fep_hwr_candidate_pane_g_ParamLimits

0xfb24,	// (0x000119ed) fep_hwr_candidate_pane_g

0x4ba8,	// (0x00006a71) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4ba8,	// (0x00006a71) fep_vkb_candidate_drop_down_list_pane

0x4fd0,	// (0x00006e99) fep_vkb_candidate_pane_g3

0x4fd8,	// (0x00006ea1) fep_vkb_candidate_pane_g4

0x0002,

0xfb51,	// (0x00011a1a) fep_vkb_candidate_pane_g

0x4cae,	// (0x00006b77) cell_hwr_candidate_pane_g1_ParamLimits

0x5043,	// (0x00006f0c) cell_hwr_candidate_pane_g3_ParamLimits

0x5043,	// (0x00006f0c) cell_hwr_candidate_pane_g3

0x5064,	// (0x00006f2d) cell_hwr_candidate_pane_g4_ParamLimits

0x5064,	// (0x00006f2d) cell_hwr_candidate_pane_g4

0x0002,

0xfb6b,	// (0x00011a34) cell_hwr_candidate_pane_g_ParamLimits

0xfb6b,	// (0x00011a34) cell_hwr_candidate_pane_g

0x50a3,	// (0x00006f6c) cell_vkb_candidate_pane_g3_ParamLimits

0x50a3,	// (0x00006f6c) cell_vkb_candidate_pane_g3

0x50be,	// (0x00006f87) cell_vkb_candidate_pane_g4_ParamLimits

0x50be,	// (0x00006f87) cell_vkb_candidate_pane_g4

0x5357,	// (0x00007220) cell_app_pane_cp2_g1_ParamLimits

0x5357,	// (0x00007220) cell_app_pane_cp2_g1

0x5375,	// (0x0000723e) cell_app_pane_cp2_g2_ParamLimits

0x5375,	// (0x0000723e) cell_app_pane_cp2_g2

0x0001,

0xfbb5,	// (0x00011a7e) cell_app_pane_cp2_g_ParamLimits

0xfbb5,	// (0x00011a7e) cell_app_pane_cp2_g

0x5381,	// (0x0000724a) cell_app_pane_cp2_t1_ParamLimits

0x5381,	// (0x0000724a) cell_app_pane_cp2_t1

0xed11,	// (0x00010bda) grid_highlight_pane_cp1_ParamLimits

0xed11,	// (0x00010bda) grid_highlight_pane_cp1

0x5393,	// (0x0000725c) cell_hwr_candidate_pane_cp1_ParamLimits

0x5393,	// (0x0000725c) cell_hwr_candidate_pane_cp1

0x4cae,	// (0x00006b77) fep_hwr_candidate_drop_down_list_pane_g1

0x53b7,	// (0x00007280) fep_hwr_candidate_drop_down_list_pane_g2

0x53c4,	// (0x0000728d) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x00011a83) fep_hwr_candidate_drop_down_list_pane_g

0x53d1,	// (0x0000729a) fep_hwr_candidate_drop_down_list_scroll_pane

0x53da,	// (0x000072a3) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x53da,	// (0x000072a3) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x53e7,	// (0x000072b0) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x53e7,	// (0x000072b0) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x53f4,	// (0x000072bd) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x53f4,	// (0x000072bd) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x50a3,	// (0x00006f6c) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x50a3,	// (0x00006f6c) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x50be,	// (0x00006f87) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x50be,	// (0x00006f87) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5401,	// (0x000072ca) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5401,	// (0x000072ca) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x541c,	// (0x000072e5) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x541c,	// (0x000072e5) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x5437,	// (0x00007300) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5437,	// (0x00007300) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc1,	// (0x00011a8a) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc1,	// (0x00011a8a) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5452,	// (0x0000731b) cell_vkb_candidate_pane_cp1_ParamLimits

0x5452,	// (0x0000731b) cell_vkb_candidate_pane_cp1

0x4cae,	// (0x00006b77) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4cae,	// (0x00006b77) fep_vkb_candidate_drop_down_list_pane_g1

0x53b7,	// (0x00007280) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x53b7,	// (0x00007280) fep_vkb_candidate_drop_down_list_pane_g2

0x53c4,	// (0x0000728d) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x53c4,	// (0x0000728d) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x00011a83) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbba,	// (0x00011a83) fep_vkb_candidate_drop_down_list_pane_g

0x5478,	// (0x00007341) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5478,	// (0x00007341) fep_vkb_candidate_drop_down_list_scroll_pane

0x5485,	// (0x0000734e) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5485,	// (0x0000734e) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5492,	// (0x0000735b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5492,	// (0x0000735b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x549e,	// (0x00007367) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x549e,	// (0x00007367) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5043,	// (0x00006f0c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5043,	// (0x00006f0c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5064,	// (0x00006f2d) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5064,	// (0x00006f2d) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x54aa,	// (0x00007373) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x54aa,	// (0x00007373) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x54cb,	// (0x00007394) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x54cb,	// (0x00007394) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x54ec,	// (0x000073b5) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x54ec,	// (0x000073b5) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd2,	// (0x00011a9b) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd2,	// (0x00011a9b) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9e3b,	// (0x0000bd04) title_pane_g1_ParamLimits

0x9e4e,	// (0x0000bd17) title_pane_g2_ParamLimits

0xf554,	// (0x0001141d) title_pane_g_ParamLimits

0xf473,	// (0x0001133c) aid_call2_pane

0xf47b,	// (0x00011344) aid_call_pane

0xf483,	// (0x0001134c) popup_clock_analogue_window_g1

0xf483,	// (0x0001134c) popup_clock_analogue_window_g2

0xf48b,	// (0x00011354) popup_clock_analogue_window_g3

0xf494,	// (0x0001135d) popup_clock_analogue_window_g4

0xe327,	// (0x000101f0) popup_clock_analogue_window_g5

0x0004,

0xf6f9,	// (0x000115c2) popup_clock_analogue_window_g

0xf49c,	// (0x00011365) popup_clock_analogue_window_t1

0xf4f9,	// (0x000113c2) clock_digital_number_pane_ParamLimits

0xf4f9,	// (0x000113c2) clock_digital_number_pane

0xf505,	// (0x000113ce) clock_digital_number_pane_cp02_ParamLimits

0xf505,	// (0x000113ce) clock_digital_number_pane_cp02

0xf511,	// (0x000113da) clock_digital_number_pane_cp03_ParamLimits

0xf511,	// (0x000113da) clock_digital_number_pane_cp03

0xf51d,	// (0x000113e6) clock_digital_number_pane_cp04_ParamLimits

0xf51d,	// (0x000113e6) clock_digital_number_pane_cp04

0xf529,	// (0x000113f2) clock_digital_separator_pane_ParamLimits

0xf529,	// (0x000113f2) clock_digital_separator_pane

0xf535,	// (0x000113fe) popup_clock_digital_window_t1_ParamLimits

0xf535,	// (0x000113fe) popup_clock_digital_window_t1

0xe327,	// (0x000101f0) clock_digital_number_pane_g1

0xe327,	// (0x000101f0) clock_digital_number_pane_g2

0x0001,

0xf704,	// (0x000115cd) clock_digital_number_pane_g

0xe327,	// (0x000101f0) clock_digital_separator_pane_g1

0xe327,	// (0x000101f0) clock_digital_separator_pane_g2

0x0001,

0xf704,	// (0x000115cd) clock_digital_separator_pane_g

0xb4de,	// (0x0000d3a7) aid_fill_nsta_ParamLimits

0xb616,	// (0x0000d4df) indicator_nsta_pane_ParamLimits

0x160e,	// (0x000034d7) popup_clock_analogue_window

0x160e,	// (0x000034d7) popup_clock_digital_window

0xf0a1,	// (0x00010f6a) grid_indicator_nsta_pane_ParamLimits

0x418f,	// (0x00006058) clock_nsta_pane_t2

0x0001,

0xfaa4,	// (0x0001196d) clock_nsta_pane_t

0xf2c0,	// (0x00011189) aid_size_max_handle

0xa893,	// (0x0000c75c) aid_size_min_handle

0x0779,	// (0x00002642) editor_scroll_pane

0x5507,	// (0x000073d0) ex_editor_pane

0xeefe,	// (0x00010dc7) scroll_pane_cp13

0xec2a,	// (0x00010af3) scroll_pane_cp14

0xf4d1,	// (0x0001139a) scroll_pane_cp36

0xa933,	// (0x0000c7fc) list_single_graphic_hl_pane_cp2_ParamLimits

0xa933,	// (0x0000c7fc) list_single_graphic_hl_pane_cp2

0xc03e,	// (0x0000df07) list_single_graphic_hl_pane_ParamLimits

0xc03e,	// (0x0000df07) list_single_graphic_hl_pane

0x550f,	// (0x000073d8) aid_size_min_hl_cp1

0x5518,	// (0x000073e1) list_highlight_pane_cp34_ParamLimits

0x5518,	// (0x000073e1) list_highlight_pane_cp34

0x5529,	// (0x000073f2) list_single_graphic_hl_pane_g1_ParamLimits

0x5529,	// (0x000073f2) list_single_graphic_hl_pane_g1

0xed8a,	// (0x00010c53) list_single_graphic_hl_pane_g2_ParamLimits

0xed8a,	// (0x00010c53) list_single_graphic_hl_pane_g2

0xed8a,	// (0x00010c53) list_single_graphic_hl_pane_g3_ParamLimits

0xed8a,	// (0x00010c53) list_single_graphic_hl_pane_g3

0xed96,	// (0x00010c5f) list_single_graphic_hl_pane_g4_ParamLimits

0xed96,	// (0x00010c5f) list_single_graphic_hl_pane_g4

0x559c,	// (0x00007465) list_single_graphic_hl_pane_g5_ParamLimits

0x559c,	// (0x00007465) list_single_graphic_hl_pane_g5

0x0004,

0xfbe3,	// (0x00011aac) list_single_graphic_hl_pane_g_ParamLimits

0xfbe3,	// (0x00011aac) list_single_graphic_hl_pane_g

0xc58c,	// (0x0000e455) list_single_graphic_hl_pane_t1_ParamLimits

0xc58c,	// (0x0000e455) list_single_graphic_hl_pane_t1

0x556c,	// (0x00007435) aid_size_min_hl_cp2

0x5575,	// (0x0000743e) list_highlight_pane_cp34_cp2_ParamLimits

0x5575,	// (0x0000743e) list_highlight_pane_cp34_cp2

0x5529,	// (0x000073f2) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5529,	// (0x000073f2) list_single_graphic_hl_pane_g1_cp2

0x5582,	// (0x0000744b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5582,	// (0x0000744b) list_single_graphic_hl_pane_g2_cp2

0xc5a2,	// (0x0000e46b) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc5a2,	// (0x0000e46b) list_single_graphic_hl_pane_g3_cp2

0xed96,	// (0x00010c5f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xed96,	// (0x00010c5f) list_single_graphic_hl_pane_g4_cp2

0x559c,	// (0x00007465) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x559c,	// (0x00007465) list_single_graphic_hl_pane_g5_cp2

0xac53,	// (0x0000cb1c) control_pane_g4_ParamLimits

0xac53,	// (0x0000cb1c) control_pane_g4

0x0cee,	// (0x00002bb7) bg_popup_sub_pane_cp10_ParamLimits

0x4813,	// (0x000066dc) list_choice_list_pane_ParamLimits

0x4822,	// (0x000066eb) scroll_pane_cp23

0xe7a9,	// (0x00010672) bg_popup_preview_window_pane_cp02_ParamLimits

0x512f,	// (0x00006ff8) list_preview_fixed_pane_ParamLimits

0x5145,	// (0x0000700e) list_preview_fixed_pane_cp_ParamLimits

0x5145,	// (0x0000700e) list_preview_fixed_pane_cp

0x5151,	// (0x0000701a) popup_preview_fixed_window_g1_ParamLimits

0x5151,	// (0x0000701a) popup_preview_fixed_window_g1

0x515d,	// (0x00007026) popup_preview_fixed_window_g2_ParamLimits

0x515d,	// (0x00007026) popup_preview_fixed_window_g2

0x0002,

0xfb72,	// (0x00011a3b) popup_preview_fixed_window_g_ParamLimits

0xfb72,	// (0x00011a3b) popup_preview_fixed_window_g

0xf1e4,	// (0x000110ad) aid_navi_side_left_pane_ParamLimits

0xf1f9,	// (0x000110c2) aid_navi_side_right_pane_ParamLimits

0xf211,	// (0x000110da) navi_icon_pane_stacon_ParamLimits

0xf225,	// (0x000110ee) navi_navi_pane_stacon_ParamLimits

0xf211,	// (0x000110da) navi_text_pane_stacon_ParamLimits

0xe31d,	// (0x000101e6) main_text_info_pane

0x55c6,	// (0x0000748f) listscroll_text_info_pane

0x55ce,	// (0x00007497) list_text_info_pane_ParamLimits

0x55ce,	// (0x00007497) list_text_info_pane

0x55dd,	// (0x000074a6) scroll_pane_cp24_ParamLimits

0x55dd,	// (0x000074a6) scroll_pane_cp24

0xc5b0,	// (0x0000e479) list_text_info_pane_t1_ParamLimits

0xc5b0,	// (0x0000e479) list_text_info_pane_t1

0xadd7,	// (0x0000cca0) popup_fast_swap2_window_ParamLimits

0xadd7,	// (0x0000cca0) popup_fast_swap2_window

0x5620,	// (0x000074e9) aid_size_cell_fast2

0xe31d,	// (0x000101e6) bg_popup_window_pane_cp17

0x1ef7,	// (0x00003dc0) heading_pane_cp2

0xe9af,	// (0x00010878) listscroll_fast2_pane

0x562a,	// (0x000074f3) grid_fast2_pane

0x5634,	// (0x000074fd) listscroll_fast2_pane_g1

0x563e,	// (0x00007507) listscroll_fast2_pane_g2

0x0001,

0xfbee,	// (0x00011ab7) listscroll_fast2_pane_g

0xeefe,	// (0x00010dc7) scroll_pane_cp26

0x5648,	// (0x00007511) cell_fast2_pane_ParamLimits

0x5648,	// (0x00007511) cell_fast2_pane

0x565f,	// (0x00007528) cell_fast2_pane_g1

0x5668,	// (0x00007531) cell_fast2_pane_g2

0x5671,	// (0x0000753a) cell_fast2_pane_g3

0x0002,

0xfbf3,	// (0x00011abc) cell_fast2_pane_g

0xe9f1,	// (0x000108ba) grid_highlight_pane_cp9

0xea06,	// (0x000108cf) main_eswt_pane_ParamLimits

0xea06,	// (0x000108cf) main_eswt_pane

0x55f2,	// (0x000074bb) list_single_text_info_pane

0x5679,	// (0x00007542) eswt_ctrl_button_pane

0x5679,	// (0x00007542) eswt_ctrl_canvas_pane

0x5681,	// (0x0000754a) eswt_ctrl_combo_pane

0x5679,	// (0x00007542) eswt_ctrl_default_pane

0x5679,	// (0x00007542) eswt_ctrl_label_pane

0x5689,	// (0x00007552) eswt_ctrl_wait_pane

0x5691,	// (0x0000755a) eswt_shell_pane

0xe31d,	// (0x000101e6) listscroll_eswt_app_pane

0x56b1,	// (0x0000757a) popup_eswt_tasktip_window_ParamLimits

0x56b1,	// (0x0000757a) popup_eswt_tasktip_window

0x1a7a,	// (0x00003943) bg_popup_window_pane_cp18

0x56c2,	// (0x0000758b) eswt_control_pane_g1_ParamLimits

0x56c2,	// (0x0000758b) eswt_control_pane_g1

0x56cf,	// (0x00007598) eswt_control_pane_g2_ParamLimits

0x56cf,	// (0x00007598) eswt_control_pane_g2

0x56dc,	// (0x000075a5) eswt_control_pane_g3_ParamLimits

0x56dc,	// (0x000075a5) eswt_control_pane_g3

0x56e9,	// (0x000075b2) eswt_control_pane_g4_ParamLimits

0x56e9,	// (0x000075b2) eswt_control_pane_g4

0x0003,

0xfbfa,	// (0x00011ac3) eswt_control_pane_g_ParamLimits

0xfbfa,	// (0x00011ac3) eswt_control_pane_g

0xed11,	// (0x00010bda) bg_button_pane_ParamLimits

0xed11,	// (0x00010bda) bg_button_pane

0xea06,	// (0x000108cf) common_borders_pane_copy2_ParamLimits

0xea06,	// (0x000108cf) common_borders_pane_copy2

0x56f6,	// (0x000075bf) control_button_pane_g1_ParamLimits

0x56f6,	// (0x000075bf) control_button_pane_g1

0x5702,	// (0x000075cb) control_button_pane_g2_ParamLimits

0x5702,	// (0x000075cb) control_button_pane_g2

0x570e,	// (0x000075d7) control_button_pane_g3_ParamLimits

0x570e,	// (0x000075d7) control_button_pane_g3

0x0002,

0xfc03,	// (0x00011acc) control_button_pane_g_ParamLimits

0xfc03,	// (0x00011acc) control_button_pane_g

0x5722,	// (0x000075eb) control_button_pane_t1

0x5730,	// (0x000075f9) control_button_pane_t2

0x0001,

0xfc0a,	// (0x00011ad3) control_button_pane_t

0x18dd,	// (0x000037a6) bg_button_pane_g1

0x18e5,	// (0x000037ae) bg_button_pane_g2

0x18ed,	// (0x000037b6) bg_button_pane_g3

0x18f5,	// (0x000037be) bg_button_pane_g4

0x18fd,	// (0x000037c6) bg_button_pane_g5

0x1905,	// (0x000037ce) bg_button_pane_g6

0x190d,	// (0x000037d6) bg_button_pane_g7

0x1915,	// (0x000037de) bg_button_pane_g8

0x191d,	// (0x000037e6) bg_button_pane_g9

0x0008,

0xf85b,	// (0x00011724) bg_button_pane_g

0x47ce,	// (0x00006697) common_borders_pane_ParamLimits

0x47ce,	// (0x00006697) common_borders_pane

0x56c2,	// (0x0000758b) eswt_control_pane_g1_copy1_ParamLimits

0x56c2,	// (0x0000758b) eswt_control_pane_g1_copy1

0x56cf,	// (0x00007598) eswt_control_pane_g2_copy1_ParamLimits

0x56cf,	// (0x00007598) eswt_control_pane_g2_copy1

0x56dc,	// (0x000075a5) eswt_control_pane_g3_copy1_ParamLimits

0x56dc,	// (0x000075a5) eswt_control_pane_g3_copy1

0x56e9,	// (0x000075b2) eswt_control_pane_g4_copy1_ParamLimits

0x56e9,	// (0x000075b2) eswt_control_pane_g4_copy1

0x4809,	// (0x000066d2) bg_eswt_ctrl_canvas_pane_g1

0x47ce,	// (0x00006697) common_borders_pane_cp2_ParamLimits

0x47ce,	// (0x00006697) common_borders_pane_cp2

0x47ce,	// (0x00006697) common_borders_pane_cp3_ParamLimits

0x47ce,	// (0x00006697) common_borders_pane_cp3

0x573e,	// (0x00007607) separator_horizontal_pane

0x5746,	// (0x0000760f) separator_vertical_pane

0x56c2,	// (0x0000758b) eswt_control_pane_g1_copy2_ParamLimits

0x56c2,	// (0x0000758b) eswt_control_pane_g1_copy2

0x56cf,	// (0x00007598) eswt_control_pane_g2_copy2_ParamLimits

0x56cf,	// (0x00007598) eswt_control_pane_g2_copy2

0x56dc,	// (0x000075a5) eswt_control_pane_g3_copy2_ParamLimits

0x56dc,	// (0x000075a5) eswt_control_pane_g3_copy2

0x56e9,	// (0x000075b2) eswt_control_pane_g4_copy2_ParamLimits

0x56e9,	// (0x000075b2) eswt_control_pane_g4_copy2

0xe31d,	// (0x000101e6) common_borders_pane_cp4

0x574f,	// (0x00007618) separator_horizontal_pane_g1

0x5758,	// (0x00007621) separator_horizontal_pane_g2

0x5761,	// (0x0000762a) separator_horizontal_pane_g3

0x0002,

0xfc0f,	// (0x00011ad8) separator_horizontal_pane_g

0x56c2,	// (0x0000758b) eswt_control_pane_g1_copy3_ParamLimits

0x56c2,	// (0x0000758b) eswt_control_pane_g1_copy3

0x56cf,	// (0x00007598) eswt_control_pane_g2_copy3_ParamLimits

0x56cf,	// (0x00007598) eswt_control_pane_g2_copy3

0x56dc,	// (0x000075a5) eswt_control_pane_g3_copy3_ParamLimits

0x56dc,	// (0x000075a5) eswt_control_pane_g3_copy3

0x56e9,	// (0x000075b2) eswt_control_pane_g4_copy3_ParamLimits

0x56e9,	// (0x000075b2) eswt_control_pane_g4_copy3

0xe31d,	// (0x000101e6) common_borders_pane_cp5

0x576a,	// (0x00007633) separator_vertical_pane_g1

0x5773,	// (0x0000763c) separator_vertical_pane_g2

0x577c,	// (0x00007645) separator_vertical_pane_g3

0x0002,

0xfc16,	// (0x00011adf) separator_vertical_pane_g

0x56c2,	// (0x0000758b) eswt_control_pane_g1_copy4_ParamLimits

0x56c2,	// (0x0000758b) eswt_control_pane_g1_copy4

0x56cf,	// (0x00007598) eswt_control_pane_g2_copy4_ParamLimits

0x56cf,	// (0x00007598) eswt_control_pane_g2_copy4

0x56dc,	// (0x000075a5) eswt_control_pane_g3_copy4_ParamLimits

0x56dc,	// (0x000075a5) eswt_control_pane_g3_copy4

0x56e9,	// (0x000075b2) eswt_control_pane_g4_copy4_ParamLimits

0x56e9,	// (0x000075b2) eswt_control_pane_g4_copy4

0xc5d2,	// (0x0000e49b) eswt_ctrl_combo_button_pane

0xc5da,	// (0x0000e4a3) eswt_ctrl_input_pane

0xc5e2,	// (0x0000e4ab) popup_choice_list_window_cp70

0xc5ea,	// (0x0000e4b3) eswt_ctrl_input_pane_t1

0xe31d,	// (0x000101e6) input_focus_pane_cp70

0x47ce,	// (0x00006697) bg_button_pane_cp70_ParamLimits

0x47ce,	// (0x00006697) bg_button_pane_cp70

0xc5f8,	// (0x0000e4c1) eswt_ctrl_combo_button_pane_g1

0x57b3,	// (0x0000767c) wait_bar_pane_cp70

0x1a7a,	// (0x00003943) bg_popup_window_pane_cp70_ParamLimits

0x1a7a,	// (0x00003943) bg_popup_window_pane_cp70

0x57bb,	// (0x00007684) popup_eswt_tasktip_window_t1

0x57d1,	// (0x0000769a) wait_bar_pane_cp71_ParamLimits

0x57d1,	// (0x0000769a) wait_bar_pane_cp71

0x57dd,	// (0x000076a6) grid_eswt_app_pane

0xf31b,	// (0x000111e4) scroll_pane_cp70

0xc600,	// (0x0000e4c9) cell_eswt_app_pane_ParamLimits

0xc600,	// (0x0000e4c9) cell_eswt_app_pane

0xc632,	// (0x0000e4fb) cell_eswt_app_pane_g1_ParamLimits

0xc632,	// (0x0000e4fb) cell_eswt_app_pane_g1

0xc661,	// (0x0000e52a) cell_eswt_app_pane_g2_ParamLimits

0xc661,	// (0x0000e52a) cell_eswt_app_pane_g2

0x0001,

0xfc1d,	// (0x00011ae6) cell_eswt_app_pane_g_ParamLimits

0xfc1d,	// (0x00011ae6) cell_eswt_app_pane_g

0xc68a,	// (0x0000e553) cell_eswt_app_pane_t1_ParamLimits

0xc68a,	// (0x0000e553) cell_eswt_app_pane_t1

0x58a2,	// (0x0000776b) grid_highlight_pane_cp70_ParamLimits

0x58a2,	// (0x0000776b) grid_highlight_pane_cp70

0x064a,	// (0x00002513) set_content_pane_g1

0x0ac6,	// (0x0000298f) status_small_volume_pane

0x58ae,	// (0x00007777) status_small_volume_pane_g1

0x58b6,	// (0x0000777f) volume_small2_pane

0x58bf,	// (0x00007788) volume_small2_pane_g1

0x58c8,	// (0x00007791) volume_small2_pane_g2

0x58d1,	// (0x0000779a) volume_small2_pane_g3

0x58da,	// (0x000077a3) volume_small2_pane_g4

0x58e3,	// (0x000077ac) volume_small2_pane_g5

0x58ec,	// (0x000077b5) volume_small2_pane_g6

0x58f5,	// (0x000077be) volume_small2_pane_g7

0x58fe,	// (0x000077c7) volume_small2_pane_g8

0x5907,	// (0x000077d0) volume_small2_pane_g9

0x5910,	// (0x000077d9) volume_small2_pane_g10

0x0009,

0xfc22,	// (0x00011aeb) volume_small2_pane_g

0x4e02,	// (0x00006ccb) fep_vkb_top_text_pane_g1_ParamLimits

0xc534,	// (0x0000e3fd) fep_vkb_top_text_pane_t1_ParamLimits

0x5169,	// (0x00007032) popup_preview_fixed_window_g3_ParamLimits

0x5169,	// (0x00007032) popup_preview_fixed_window_g3

0xb471,	// (0x0000d33a) popup_toolbar_trans_pane

0xbe5d,	// (0x0000dd26) aid_height_set_list_ParamLimits

0x3110,	// (0x00004fd9) aid_size_parent_ParamLimits

0x0cee,	// (0x00002bb7) list_highlight_pane_cp2_ParamLimits

0x064a,	// (0x00002513) set_content_pane_g1_ParamLimits

0xc052,	// (0x0000df1b) list_single_image_pane_ParamLimits

0xc052,	// (0x0000df1b) list_single_image_pane

0xc6bc,	// (0x0000e585) aid_size_cell_image_ParamLimits

0xc6bc,	// (0x0000e585) aid_size_cell_image

0xc6c9,	// (0x0000e592) grid_single_image_pane_ParamLimits

0xc6c9,	// (0x0000e592) grid_single_image_pane

0xed3c,	// (0x00010c05) list_single_image_pane_g1_ParamLimits

0xed3c,	// (0x00010c05) list_single_image_pane_g1

0xed48,	// (0x00010c11) list_single_image_pane_g2_ParamLimits

0xed48,	// (0x00010c11) list_single_image_pane_g2

0x0001,

0xfc37,	// (0x00011b00) list_single_image_pane_g_ParamLimits

0xfc37,	// (0x00011b00) list_single_image_pane_g

0x5934,	// (0x000077fd) list_single_image_pane_t1_ParamLimits

0x5934,	// (0x000077fd) list_single_image_pane_t1

0xc6d7,	// (0x0000e5a0) cell_image_list_pane_ParamLimits

0xc6d7,	// (0x0000e5a0) cell_image_list_pane

0xc6eb,	// (0x0000e5b4) cell_image_list_pane_g1

0xc6f4,	// (0x0000e5bd) cell_image_list_pane_g2

0x0001,

0xfc3c,	// (0x00011b05) cell_image_list_pane_g

0x5972,	// (0x0000783b) aid_size_cell_tb_trans_pane

0xed11,	// (0x00010bda) bg_tb_trans_pane

0x5984,	// (0x0000784d) grid_tb_trans_pane

0x18dd,	// (0x000037a6) bg_tb_trans_pane_g1

0x18e5,	// (0x000037ae) bg_tb_trans_pane_g2

0x18ed,	// (0x000037b6) bg_tb_trans_pane_g3

0x18f5,	// (0x000037be) bg_tb_trans_pane_g4

0x18fd,	// (0x000037c6) bg_tb_trans_pane_g5

0x1915,	// (0x000037de) bg_tb_trans_pane_g6

0x191d,	// (0x000037e6) bg_tb_trans_pane_g7

0x1905,	// (0x000037ce) bg_tb_trans_pane_g8

0x190d,	// (0x000037d6) bg_tb_trans_pane_g9

0x0008,

0xfc41,	// (0x00011b0a) bg_tb_trans_pane_g

0x5998,	// (0x00007861) cell_toolbar_trans_pane_ParamLimits

0x5998,	// (0x00007861) cell_toolbar_trans_pane

0x4809,	// (0x000066d2) cell_toolbar_trans_pane_g1

0xc28c,	// (0x0000e155) list_form2_midp_pane_t1

0xc29a,	// (0x0000e163) list_form2_midp_pane_t2

0x0001,

0xfaea,	// (0x000119b3) list_form2_midp_pane_t

0x43f3,	// (0x000062bc) scroll_pane_cp51_ParamLimits

0x4610,	// (0x000064d9) form2_midp_wait_pane_g1

0x4619,	// (0x000064e2) form2_midp_wait_pane_g2

0x4622,	// (0x000064eb) form2_midp_wait_pane_g3

0x0002,

0xfaff,	// (0x000119c8) form2_midp_wait_pane_g

0xe5d3,	// (0x0001049c) list_highlight_pane_cp21_ParamLimits

0x4666,	// (0x0000652f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4675,	// (0x0000653e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3331,	// (0x000051fa) list_single_2graphic_im_pane_ParamLimits

0x3331,	// (0x000051fa) list_single_2graphic_im_pane

0xc6fd,	// (0x0000e5c6) list_single_2graphic_im_pane_g1_ParamLimits

0xc6fd,	// (0x0000e5c6) list_single_2graphic_im_pane_g1

0xc70e,	// (0x0000e5d7) list_single_2graphic_im_pane_g2_ParamLimits

0xc70e,	// (0x0000e5d7) list_single_2graphic_im_pane_g2

0xc71a,	// (0x0000e5e3) list_single_2graphic_im_pane_g3_ParamLimits

0xc71a,	// (0x0000e5e3) list_single_2graphic_im_pane_g3

0x0003,

0xfc54,	// (0x00011b1d) list_single_2graphic_im_pane_g_ParamLimits

0xfc54,	// (0x00011b1d) list_single_2graphic_im_pane_g

0xc72e,	// (0x0000e5f7) list_single_2graphic_im_pane_t1_ParamLimits

0xc72e,	// (0x0000e5f7) list_single_2graphic_im_pane_t1

0x5175,	// (0x0000703e) list_single_graphic_2heading_pane_fp_ParamLimits

0x5175,	// (0x0000703e) list_single_graphic_2heading_pane_fp

0x51bd,	// (0x00007086) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x51bd,	// (0x00007086) list_single_graphic_2heading_pane_fp_g1

0x518e,	// (0x00007057) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x518e,	// (0x00007057) list_single_graphic_2heading_pane_fp_g2

0x50e7,	// (0x00006fb0) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x50e7,	// (0x00006fb0) list_single_graphic_2heading_pane_fp_g3

0x50f3,	// (0x00006fbc) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x50f3,	// (0x00006fbc) list_single_graphic_2heading_pane_fp_g4

0x519a,	// (0x00007063) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x519a,	// (0x00007063) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb82,	// (0x00011a4b) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb82,	// (0x00011a4b) list_single_graphic_2heading_pane_fp_g

0x5a2c,	// (0x000078f5) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5a2c,	// (0x000078f5) list_single_graphic_2heading_pane_fp_t1

0x51f5,	// (0x000070be) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x51f5,	// (0x000070be) list_single_graphic_2heading_pane_fp_t2

0x5a42,	// (0x0000790b) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5a42,	// (0x0000790b) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5d,	// (0x00011b26) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5d,	// (0x00011b26) list_single_graphic_2heading_pane_fp_t

0x4a3e,	// (0x00006907) fep_hwr_write_pane_g5_ParamLimits

0x4a3e,	// (0x00006907) fep_hwr_write_pane_g5

0x4a4a,	// (0x00006913) fep_hwr_write_pane_g6_ParamLimits

0x4a4a,	// (0x00006913) fep_hwr_write_pane_g6

0x5691,	// (0x0000755a) eswt_shell_pane_ParamLimits

0x1a7a,	// (0x00003943) bg_popup_window_pane_cp18_ParamLimits

0x2fb6,	// (0x00004e7f) heading_pane_cp70

0x57bb,	// (0x00007684) popup_eswt_tasktip_window_t1_ParamLimits

0xb53b,	// (0x0000d404) aid_touch_tab_arrow_left

0xb551,	// (0x0000d41a) aid_touch_tab_arrow_right

0xe56b,	// (0x00010434) title_pane_g3_ParamLimits

0xe56b,	// (0x00010434) title_pane_g3

0xec6b,	// (0x00010b34) set_value_pane_g1

0xb471,	// (0x0000d33a) popup_toolbar_trans_pane_ParamLimits

0x5972,	// (0x0000783b) aid_size_cell_tb_trans_pane_ParamLimits

0xed11,	// (0x00010bda) bg_tb_trans_pane_ParamLimits

0x5984,	// (0x0000784d) grid_tb_trans_pane_ParamLimits

0xe7a9,	// (0x00010672) cont_note_pane_ParamLimits

0xe7a9,	// (0x00010672) cont_note_pane

0xea06,	// (0x000108cf) cont_snote2_single_text_pane_ParamLimits

0xea06,	// (0x000108cf) cont_snote2_single_text_pane

0xea06,	// (0x000108cf) cont_snote2_single_graphic_pane_ParamLimits

0xea06,	// (0x000108cf) cont_snote2_single_graphic_pane

0x2113,	// (0x00003fdc) cont_note_wait_pane_ParamLimits

0x2113,	// (0x00003fdc) cont_note_wait_pane

0x2113,	// (0x00003fdc) cont_note_image_pane_ParamLimits

0x2113,	// (0x00003fdc) cont_note_image_pane

0x5a58,	// (0x00007921) popup_note2_window_g1_ParamLimits

0x5a58,	// (0x00007921) popup_note2_window_g1

0x5a89,	// (0x00007952) popup_note2_window_t1_ParamLimits

0x5a89,	// (0x00007952) popup_note2_window_t1

0x5ace,	// (0x00007997) popup_note2_window_t2_ParamLimits

0x5ace,	// (0x00007997) popup_note2_window_t2

0x5b13,	// (0x000079dc) popup_note2_window_t3_ParamLimits

0x5b13,	// (0x000079dc) popup_note2_window_t3

0x5b58,	// (0x00007a21) popup_note2_window_t4_ParamLimits

0x5b58,	// (0x00007a21) popup_note2_window_t4

0xe82d,	// (0x000106f6) popup_note2_window_t5_ParamLimits

0xe82d,	// (0x000106f6) popup_note2_window_t5

0x0004,

0xfc69,	// (0x00011b32) popup_note2_window_t_ParamLimits

0xfc69,	// (0x00011b32) popup_note2_window_t

0x5b87,	// (0x00007a50) popup_note2_image_window_g1_ParamLimits

0x5b87,	// (0x00007a50) popup_note2_image_window_g1

0x5b93,	// (0x00007a5c) popup_note2_image_window_g2_ParamLimits

0x5b93,	// (0x00007a5c) popup_note2_image_window_g2

0x0001,

0xfc74,	// (0x00011b3d) popup_note2_image_window_g_ParamLimits

0xfc74,	// (0x00011b3d) popup_note2_image_window_g

0x5ba5,	// (0x00007a6e) popup_note2_image_window_t1_ParamLimits

0x5ba5,	// (0x00007a6e) popup_note2_image_window_t1

0x5bbd,	// (0x00007a86) popup_note2_image_window_t2_ParamLimits

0x5bbd,	// (0x00007a86) popup_note2_image_window_t2

0x5bd5,	// (0x00007a9e) popup_note2_image_window_t3_ParamLimits

0x5bd5,	// (0x00007a9e) popup_note2_image_window_t3

0x0002,

0xfc79,	// (0x00011b42) popup_note2_image_window_t_ParamLimits

0xfc79,	// (0x00011b42) popup_note2_image_window_t

0x2121,	// (0x00003fea) popup_note2_wait_window_g1_ParamLimits

0x2121,	// (0x00003fea) popup_note2_wait_window_g1

0x5bf1,	// (0x00007aba) popup_note2_wait_window_g2_ParamLimits

0x5bf1,	// (0x00007aba) popup_note2_wait_window_g2

0x2139,	// (0x00004002) popup_note2_wait_window_g3_ParamLimits

0x2139,	// (0x00004002) popup_note2_wait_window_g3

0x0002,

0xfc80,	// (0x00011b49) popup_note2_wait_window_g_ParamLimits

0xfc80,	// (0x00011b49) popup_note2_wait_window_g

0x5bfd,	// (0x00007ac6) popup_note2_wait_window_t1_ParamLimits

0x5bfd,	// (0x00007ac6) popup_note2_wait_window_t1

0x5c1b,	// (0x00007ae4) popup_note2_wait_window_t2_ParamLimits

0x5c1b,	// (0x00007ae4) popup_note2_wait_window_t2

0x5c39,	// (0x00007b02) popup_note2_wait_window_t3_ParamLimits

0x5c39,	// (0x00007b02) popup_note2_wait_window_t3

0x5c4b,	// (0x00007b14) popup_note2_wait_window_t4_ParamLimits

0x5c4b,	// (0x00007b14) popup_note2_wait_window_t4

0x0003,

0xfc87,	// (0x00011b50) popup_note2_wait_window_t_ParamLimits

0xfc87,	// (0x00011b50) popup_note2_wait_window_t

0x5c5d,	// (0x00007b26) wait_bar2_pane_ParamLimits

0x5c5d,	// (0x00007b26) wait_bar2_pane

0x5c75,	// (0x00007b3e) popup_snote2_single_text_window_g1_ParamLimits

0x5c75,	// (0x00007b3e) popup_snote2_single_text_window_g1

0x5c9d,	// (0x00007b66) popup_snote2_single_text_window_t1_ParamLimits

0x5c9d,	// (0x00007b66) popup_snote2_single_text_window_t1

0x5ce9,	// (0x00007bb2) popup_snote2_single_text_window_t2_ParamLimits

0x5ce9,	// (0x00007bb2) popup_snote2_single_text_window_t2

0x5d35,	// (0x00007bfe) popup_snote2_single_text_window_t3_ParamLimits

0x5d35,	// (0x00007bfe) popup_snote2_single_text_window_t3

0x5d76,	// (0x00007c3f) popup_snote2_single_text_window_t4_ParamLimits

0x5d76,	// (0x00007c3f) popup_snote2_single_text_window_t4

0x5dac,	// (0x00007c75) popup_snote2_single_text_window_t5_ParamLimits

0x5dac,	// (0x00007c75) popup_snote2_single_text_window_t5

0x0004,

0xfc90,	// (0x00011b59) popup_snote2_single_text_window_t_ParamLimits

0xfc90,	// (0x00011b59) popup_snote2_single_text_window_t

0x5dd7,	// (0x00007ca0) popup_snote2_single_graphic_window_g1_ParamLimits

0x5dd7,	// (0x00007ca0) popup_snote2_single_graphic_window_g1

0x5dff,	// (0x00007cc8) popup_snote2_single_graphic_window_g2_ParamLimits

0x5dff,	// (0x00007cc8) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9b,	// (0x00011b64) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9b,	// (0x00011b64) popup_snote2_single_graphic_window_g

0x5e27,	// (0x00007cf0) popup_snote2_single_graphic_window_t1_ParamLimits

0x5e27,	// (0x00007cf0) popup_snote2_single_graphic_window_t1

0x5e73,	// (0x00007d3c) popup_snote2_single_graphic_window_t2_ParamLimits

0x5e73,	// (0x00007d3c) popup_snote2_single_graphic_window_t2

0x5d35,	// (0x00007bfe) popup_snote2_single_graphic_window_t3_ParamLimits

0x5d35,	// (0x00007bfe) popup_snote2_single_graphic_window_t3

0x5d76,	// (0x00007c3f) popup_snote2_single_graphic_window_t4_ParamLimits

0x5d76,	// (0x00007c3f) popup_snote2_single_graphic_window_t4

0x5dac,	// (0x00007c75) popup_snote2_single_graphic_window_t5_ParamLimits

0x5dac,	// (0x00007c75) popup_snote2_single_graphic_window_t5

0x0004,

0xfca0,	// (0x00011b69) popup_snote2_single_graphic_window_t_ParamLimits

0xfca0,	// (0x00011b69) popup_snote2_single_graphic_window_t

0x4252,	// (0x0000611b) clock_nsta_pane_cp2_t1

0x4252,	// (0x0000611b) clock_nsta_pane_cp2_t2

0x0001,

0xfac0,	// (0x00011989) clock_nsta_pane_cp2_t

0xed30,	// (0x00010bf9) form_field_data_wide_pane_g1_ParamLimits

0xed3c,	// (0x00010c05) form_field_data_wide_pane_g2_ParamLimits

0xed3c,	// (0x00010c05) form_field_data_wide_pane_g2

0xed48,	// (0x00010c11) form_field_data_wide_pane_g3_ParamLimits

0xed48,	// (0x00010c11) form_field_data_wide_pane_g3

0x0002,

0xf67c,	// (0x00011545) form_field_data_wide_pane_g_ParamLimits

0xf67c,	// (0x00011545) form_field_data_wide_pane_g

0xc194,	// (0x0000e05d) grid_touch_3_pane_ParamLimits

0xc194,	// (0x0000e05d) grid_touch_3_pane

0xc75f,	// (0x0000e628) cell_touch_3_pane_ParamLimits

0xc75f,	// (0x0000e628) cell_touch_3_pane

0x4809,	// (0x000066d2) cell_touch_3_pane_g1

0x4809,	// (0x000066d2) cell_touch_3_pane_g2

0x0001,

0xfb45,	// (0x00011a0e) cell_touch_3_pane_g

0xe85f,	// (0x00010728) cont_query_data_pane

0xe867,	// (0x00010730) cont_query_data_pane_cp1

0x5ef2,	// (0x00007dbb) button_value_adjust_pane_cp7

0x5efa,	// (0x00007dc3) query_popup_pane_cp3

0x0026,	// (0x00001eef) bg_popup_sub_pane_cp22_ParamLimits

0x003c,	// (0x00001f05) navi_navi_volume_pane_cp2

0x0057,	// (0x00001f20) popup_side_volume_key_window_g2

0x0066,	// (0x00001f2f) popup_side_volume_key_window_g3

0x0002,

0xf712,	// (0x000115db) popup_side_volume_key_window_g

0x0083,	// (0x00001f4c) popup_side_volume_key_window_t2

0x0001,

0xf719,	// (0x000115e2) popup_side_volume_key_window_t

0x0510,	// (0x000023d9) popup_side_volume_key_window_ParamLimits

0xa324,	// (0x0000c1ed) list_double_graphic_pane_g4_ParamLimits

0xa324,	// (0x0000c1ed) list_double_graphic_pane_g4

0xc029,	// (0x0000def2) list_single_2heading_msg_pane_ParamLimits

0xc029,	// (0x0000def2) list_single_2heading_msg_pane

0xc7a9,	// (0x0000e672) list_single_2heading_msg_pane_g1_ParamLimits

0xc7a9,	// (0x0000e672) list_single_2heading_msg_pane_g1

0xc7b5,	// (0x0000e67e) list_single_2heading_msg_pane_g2_ParamLimits

0xc7b5,	// (0x0000e67e) list_single_2heading_msg_pane_g2

0xc7c8,	// (0x0000e691) list_single_2heading_msg_pane_g3_ParamLimits

0xc7c8,	// (0x0000e691) list_single_2heading_msg_pane_g3

0xc7d4,	// (0x0000e69d) list_single_2heading_msg_pane_g4_ParamLimits

0xc7d4,	// (0x0000e69d) list_single_2heading_msg_pane_g4

0x0003,

0xfcab,	// (0x00011b74) list_single_2heading_msg_pane_g_ParamLimits

0xfcab,	// (0x00011b74) list_single_2heading_msg_pane_g

0xc7ec,	// (0x0000e6b5) list_single_2heading_msg_pane_t1_ParamLimits

0xc7ec,	// (0x0000e6b5) list_single_2heading_msg_pane_t1

0xc814,	// (0x0000e6dd) list_single_2heading_msg_pane_t2_ParamLimits

0xc814,	// (0x0000e6dd) list_single_2heading_msg_pane_t2

0xc87f,	// (0x0000e748) list_single_2heading_msg_pane_t3_ParamLimits

0xc87f,	// (0x0000e748) list_single_2heading_msg_pane_t3

0x5feb,	// (0x00007eb4) list_single_2heading_msg_pane_t4_ParamLimits

0x5feb,	// (0x00007eb4) list_single_2heading_msg_pane_t4

0x0003,

0xfcb4,	// (0x00011b7d) list_single_2heading_msg_pane_t_ParamLimits

0xfcb4,	// (0x00011b7d) list_single_2heading_msg_pane_t

0xe577,	// (0x00010440) title_pane_g4_ParamLimits

0xe577,	// (0x00010440) title_pane_g4

0xf10c,	// (0x00010fd5) title_pane_stacon_g3_ParamLimits

0xf10c,	// (0x00010fd5) title_pane_stacon_g3

0x59ef,	// (0x000078b8) list_single_2graphic_im_pane_g4_ParamLimits

0x59ef,	// (0x000078b8) list_single_2graphic_im_pane_g4

0x2cef,	// (0x00004bb8) popup_side_volume_key_window_cp

0x3780,	// (0x00005649) main_idle_act2_pane_t1

0x1925,	// (0x000037ee) toolbar_button_pane_g10

0xa1db,	// (0x0000c0a4) popup_toolbar_window_cp1

0x4243,	// (0x0000610c) clock_nsta_pane_cp_t1

0x4243,	// (0x0000610c) clock_nsta_pane_cp_t2

0x0001,

0xfabb,	// (0x00011984) clock_nsta_pane_cp_t

0x003c,	// (0x00001f05) navi_navi_volume_pane_cp2_ParamLimits

0x004b,	// (0x00001f14) popup_side_volume_key_window_g1_ParamLimits

0x0057,	// (0x00001f20) popup_side_volume_key_window_g2_ParamLimits

0x0066,	// (0x00001f2f) popup_side_volume_key_window_g3_ParamLimits

0xf712,	// (0x000115db) popup_side_volume_key_window_g_ParamLimits

0x4878,	// (0x00006741) fep_hwr_aid_pane

0x4921,	// (0x000067ea) bg_fep_hwr_top_pane_g4_ParamLimits

0x4941,	// (0x0000680a) fep_hwr_top_pane_g1_ParamLimits

0x4953,	// (0x0000681c) fep_hwr_top_pane_g2_ParamLimits

0x4965,	// (0x0000682e) fep_hwr_top_pane_g3_ParamLimits

0xfb10,	// (0x000119d9) fep_hwr_top_pane_g_ParamLimits

0x497a,	// (0x00006843) fep_hwr_top_text_pane_ParamLimits

0x2aa4,	// (0x0000496d) aid_touch_tab_arrow_arrow_2

0x2aad,	// (0x00004976) aid_touch_tab_arrow_left_2

0x488c,	// (0x00006755) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x48c3,	// (0x0000678c) fep_hwr_prediction_pane

0x4bfc,	// (0x00006ac5) fep_vkb_prediction_pane

0xc514,	// (0x0000e3dd) fep_vkb_side_pane_g3_ParamLimits

0xc514,	// (0x0000e3dd) fep_vkb_side_pane_g3

0x4cae,	// (0x00006b77) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x53b7,	// (0x00007280) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x53c4,	// (0x0000728d) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbba,	// (0x00011a83) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6010,	// (0x00007ed9) fep_hwr_prediction_pane_g1

0x601a,	// (0x00007ee3) fep_hwr_prediction_pane_g2

0x6022,	// (0x00007eeb) fep_hwr_prediction_pane_g3

0x602a,	// (0x00007ef3) fep_hwr_prediction_pane_g4

0x0003,

0xfcbd,	// (0x00011b86) fep_hwr_prediction_pane_g

0x6010,	// (0x00007ed9) fep_vkb_prediction_pane_g1

0x6032,	// (0x00007efb) fep_vkb_prediction_pane_g2

0x603a,	// (0x00007f03) fep_vkb_prediction_pane_g3

0x6042,	// (0x00007f0b) fep_vkb_prediction_pane_g4

0x0003,

0xfcc6,	// (0x00011b8f) fep_vkb_prediction_pane_g

0x3077,	// (0x00004f40) slider_set_pane_g3

0x308b,	// (0x00004f54) slider_set_pane_g4

0x30a3,	// (0x00004f6c) slider_set_pane_g5

0x3077,	// (0x00004f40) slider_set_pane_g6

0x30b9,	// (0x00004f82) slider_set_pane_g7

0x3295,	// (0x0000515e) slider_form_pane_g3

0x329e,	// (0x00005167) slider_form_pane_g4

0x32a6,	// (0x0000516f) slider_form_pane_g5

0x3295,	// (0x0000515e) slider_form_pane_g6

0xbfcc,	// (0x0000de95) slider_form_pane_g7

0x3a94,	// (0x0000595d) slider_set_pane_vc_g3

0x3a9d,	// (0x00005966) slider_set_pane_vc_g4

0x3aa6,	// (0x0000596f) slider_set_pane_vc_g5

0x3a94,	// (0x0000595d) slider_set_pane_vc_g6

0x3aaf,	// (0x00005978) slider_set_pane_vc_g7

0x3ef0,	// (0x00005db9) slider_form_pane_vc_g1

0x3ef9,	// (0x00005dc2) slider_form_pane_vc_g2

0x3f02,	// (0x00005dcb) slider_form_pane_vc_g3

0x3ef0,	// (0x00005db9) slider_form_pane_vc_g4

0x3f0b,	// (0x00005dd4) slider_form_pane_vc_g5

0x0004,

0xfa8d,	// (0x00011956) slider_form_pane_vc_g

0xe31d,	// (0x000101e6) main_idle_act3_pane

0x604a,	// (0x00007f13) ai3_links_pane

0xc8ed,	// (0x0000e7b6) popup_ai3_data_window_ParamLimits

0xc8ed,	// (0x0000e7b6) popup_ai3_data_window

0xe31d,	// (0x000101e6) grid_ai3_links_pane

0xc90b,	// (0x0000e7d4) cell_ai3_links_pane_ParamLimits

0xc90b,	// (0x0000e7d4) cell_ai3_links_pane

0x608b,	// (0x00007f54) bg_popup_sub_pane_cp11

0x6098,	// (0x00007f61) cell_ai3_links_pane_g1

0xe31d,	// (0x000101e6) bg_popup_sub_pane_cp12

0x60bd,	// (0x00007f86) heading_ai3_data_pane

0x60c5,	// (0x00007f8e) list_ai3_gene_pane

0x60d1,	// (0x00007f9a) popup_ai3_data_window_g1

0x60d9,	// (0x00007fa2) heading_ai3_data_pane_g1

0x60e1,	// (0x00007faa) heading_ai3_data_pane_t1

0x60ef,	// (0x00007fb8) list_double_ai3_gene_pane_ParamLimits

0x60ef,	// (0x00007fb8) list_double_ai3_gene_pane

0x60fc,	// (0x00007fc5) list_single_ai3_gene_pane_ParamLimits

0x60fc,	// (0x00007fc5) list_single_ai3_gene_pane

0x47ce,	// (0x00006697) list_highlight_pane_cp7_ParamLimits

0x47ce,	// (0x00006697) list_highlight_pane_cp7

0x6109,	// (0x00007fd2) list_single_a13_gene_pane_t1_ParamLimits

0x6109,	// (0x00007fd2) list_single_a13_gene_pane_t1

0x6120,	// (0x00007fe9) list_single_ai3_gene_pane_g1

0x6129,	// (0x00007ff2) list_single_ai3_gene_pane_g2

0x0001,

0xfccf,	// (0x00011b98) list_single_ai3_gene_pane_g

0x6131,	// (0x00007ffa) list_double_ai3_gene_pane_g1_ParamLimits

0x6131,	// (0x00007ffa) list_double_ai3_gene_pane_g1

0x613d,	// (0x00008006) list_double_ai3_gene_pane_t1_ParamLimits

0x613d,	// (0x00008006) list_double_ai3_gene_pane_t1

0x6159,	// (0x00008022) list_double_ai3_gene_pane_t2_ParamLimits

0x6159,	// (0x00008022) list_double_ai3_gene_pane_t2

0x616e,	// (0x00008037) list_double_ai3_gene_pane_t3_ParamLimits

0x616e,	// (0x00008037) list_double_ai3_gene_pane_t3

0x0002,

0xfcd4,	// (0x00011b9d) list_double_ai3_gene_pane_t_ParamLimits

0xfcd4,	// (0x00011b9d) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5f0b,	// (0x00007dd4) aid_size_min_col_2

0xc793,	// (0x0000e65c) aid_size_min_msg_ParamLimits

0xc793,	// (0x0000e65c) aid_size_min_msg

0xc528,	// (0x0000e3f1) fep_vkb_top_text_pane_g2_ParamLimits

0xc528,	// (0x0000e3f1) fep_vkb_top_text_pane_g2

0x0001,

0xfb40,	// (0x00011a09) fep_vkb_top_text_pane_g_ParamLimits

0xfb40,	// (0x00011a09) fep_vkb_top_text_pane_g

0xe31d,	// (0x000101e6) main_hc_apps_shell_pane

0x618b,	// (0x00008054) grid_hc_apps_pane_ParamLimits

0x618b,	// (0x00008054) grid_hc_apps_pane

0x619a,	// (0x00008063) list_hc_apps_pane

0x61a2,	// (0x0000806b) scroll_pane_cp37_ParamLimits

0x61a2,	// (0x0000806b) scroll_pane_cp37

0xc925,	// (0x0000e7ee) cell_hc_apps_pane_ParamLimits

0xc925,	// (0x0000e7ee) cell_hc_apps_pane

0xc9ef,	// (0x0000e8b8) cell_hc_apps_pane_g1_ParamLimits

0xc9ef,	// (0x0000e8b8) cell_hc_apps_pane_g1

0x6297,	// (0x00008160) cell_hc_apps_pane_g2_ParamLimits

0x6297,	// (0x00008160) cell_hc_apps_pane_g2

0x62b3,	// (0x0000817c) cell_hc_apps_pane_g3_ParamLimits

0x62b3,	// (0x0000817c) cell_hc_apps_pane_g3

0x0002,

0xfcdb,	// (0x00011ba4) cell_hc_apps_pane_g_ParamLimits

0xfcdb,	// (0x00011ba4) cell_hc_apps_pane_g

0xca1c,	// (0x0000e8e5) cell_hc_apps_pane_t1_ParamLimits

0xca1c,	// (0x0000e8e5) cell_hc_apps_pane_t1

0xe7a9,	// (0x00010672) grid_highlight_pane_cp10_ParamLimits

0xe7a9,	// (0x00010672) grid_highlight_pane_cp10

0xca5c,	// (0x0000e925) list_single_hc_apps_pane_ParamLimits

0xca5c,	// (0x0000e925) list_single_hc_apps_pane

0xca96,	// (0x0000e95f) list_single_hc_apps_pane_g1

0xcaaf,	// (0x0000e978) list_single_hc_apps_pane_g2

0x0001,

0xfce2,	// (0x00011bab) list_single_hc_apps_pane_g

0xcac8,	// (0x0000e991) list_single_hc_apps_pane_g2_copy1

0xcae4,	// (0x0000e9ad) list_single_hc_apps_pane_t1

0xe5d3,	// (0x0001049c) bg_set_opt_pane_cp_ParamLimits

0xe5e1,	// (0x000104aa) setting_slider_pane_t1_ParamLimits

0xe5fa,	// (0x000104c3) setting_slider_pane_t2_ParamLimits

0xe614,	// (0x000104dd) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0001142d) setting_slider_pane_t_ParamLimits

0xe62c,	// (0x000104f5) slider_set_pane_ParamLimits

0x0b53,	// (0x00002a1c) control_pane_g5_ParamLimits

0x0b53,	// (0x00002a1c) control_pane_g5

0x305e,	// (0x00004f27) slider_set_pane_g1_ParamLimits

0x306b,	// (0x00004f34) slider_set_pane_g2_ParamLimits

0x3077,	// (0x00004f40) slider_set_pane_g3_ParamLimits

0x308b,	// (0x00004f54) slider_set_pane_g4_ParamLimits

0x30a3,	// (0x00004f6c) slider_set_pane_g5_ParamLimits

0x3077,	// (0x00004f40) slider_set_pane_g6_ParamLimits

0x30b9,	// (0x00004f82) slider_set_pane_g7_ParamLimits

0xf959,	// (0x00011822) slider_set_pane_g_ParamLimits

0x05f5,	// (0x000024be) navi_icon_text_pane_ParamLimits

0xb502,	// (0x0000d3cb) aid_fill_nsta_2_ParamLimits

0xb53b,	// (0x0000d404) aid_touch_tab_arrow_left_ParamLimits

0xb551,	// (0x0000d41a) aid_touch_tab_arrow_right_ParamLimits

0xb5ec,	// (0x0000d4b5) clock_nsta_pane_ParamLimits

0xbcd1,	// (0x0000db9a) navi_icon_pane_g1_ParamLimits

0xbcdd,	// (0x0000dba6) navi_text_pane_t1_ParamLimits

0xc26e,	// (0x0000e137) navi_icon_text_pane_g1_ParamLimits

0xc27a,	// (0x0000e143) navi_icon_text_pane_t1_ParamLimits

0xca96,	// (0x0000e95f) list_single_hc_apps_pane_g1_ParamLimits

0xcaaf,	// (0x0000e978) list_single_hc_apps_pane_g2_ParamLimits

0xfce2,	// (0x00011bab) list_single_hc_apps_pane_g_ParamLimits

0xcac8,	// (0x0000e991) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcae4,	// (0x0000e9ad) list_single_hc_apps_pane_t1_ParamLimits

0x9dd0,	// (0x0000bc99) popup_toolbar2_fixed_window_ParamLimits

0x9dd0,	// (0x0000bc99) popup_toolbar2_fixed_window

0xb467,	// (0x0000d330) popup_toolbar2_float_window

0xe31d,	// (0x000101e6) bg_popup_sub_pane_cp27

0x63d0,	// (0x00008299) grid_toolbar2_float_pane

0xe31d,	// (0x000101e6) bg_popup_sub_pane_cp26

0x63d0,	// (0x00008299) grid_toolbar2_fixed_pane

0xcb12,	// (0x0000e9db) cell_toolbar2_fixed_pane_ParamLimits

0xcb12,	// (0x0000e9db) cell_toolbar2_fixed_pane

0xcb2f,	// (0x0000e9f8) cell_toolbar2_fixed_pane_g1

0x63f1,	// (0x000082ba) toolbar2_fixed_button_pane

0x18dd,	// (0x000037a6) toolbar2_fixed_button_pane_g1

0x18e5,	// (0x000037ae) toolbar2_fixed_button_pane_g2

0x18ed,	// (0x000037b6) toolbar2_fixed_button_pane_g3

0x18f5,	// (0x000037be) toolbar2_fixed_button_pane_g4

0x18fd,	// (0x000037c6) toolbar2_fixed_button_pane_g5

0x1905,	// (0x000037ce) toolbar2_fixed_button_pane_g6

0x190d,	// (0x000037d6) toolbar2_fixed_button_pane_g7

0x1915,	// (0x000037de) toolbar2_fixed_button_pane_g8

0x191d,	// (0x000037e6) toolbar2_fixed_button_pane_g9

0x0008,

0xf85b,	// (0x00011724) toolbar2_fixed_button_pane_g

0x63f9,	// (0x000082c2) cell_toolbar2_float_pane_ParamLimits

0x63f9,	// (0x000082c2) cell_toolbar2_float_pane

0x640a,	// (0x000082d3) cell_toolbar2_float_pane_g1

0x63f1,	// (0x000082ba) toolbar2_fixed_button_pane_cp

0xc410,	// (0x0000e2d9) fep_vkb_accented_list_pane_ParamLimits

0xc410,	// (0x0000e2d9) fep_vkb_accented_list_pane

0x501f,	// (0x00006ee8) bg_popup_fep_shadow_pane_g9

0x0779,	// (0x00002642) bg_popup_fep_shadow_pane_cp3

0xeee5,	// (0x00010dae) list_accented_list_pane

0x6413,	// (0x000082dc) list_single_accented_list_pane_ParamLimits

0x6413,	// (0x000082dc) list_single_accented_list_pane

0x0779,	// (0x00002642) list_highlight_pane_cp10

0x6424,	// (0x000082ed) list_single_accented_list_pane_t1

0xb383,	// (0x0000d24c) popup_slider_window_ParamLimits

0xb383,	// (0x0000d24c) popup_slider_window

0x5f02,	// (0x00007dcb) aid_indentation_list_msg

0xcc3a,	// (0x0000eb03) bg_popup_window_pane_cp19

0x655e,	// (0x00008427) popup_slider_window_g1

0x657a,	// (0x00008443) popup_slider_window_g2

0x6596,	// (0x0000845f) popup_slider_window_g3

0x0005,

0xfce7,	// (0x00011bb0) popup_slider_window_g

0x65f2,	// (0x000084bb) popup_slider_window_t1

0x6666,	// (0x0000852f) small_volume_slider_vertical_pane

0x4809,	// (0x000066d2) small_volume_slider_vertical_pane_g1

0x4809,	// (0x000066d2) small_volume_slider_vertical_pane_g2

0x6682,	// (0x0000854b) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf9,	// (0x00011bc2) small_volume_slider_vertical_pane_g

0x9d3a,	// (0x0000bc03) area_side_right_pane_ParamLimits

0x9d3a,	// (0x0000bc03) area_side_right_pane

0xccf2,	// (0x0000ebbb) aid_size_side_button_ParamLimits

0xccf2,	// (0x0000ebbb) aid_size_side_button

0xcd0b,	// (0x0000ebd4) grid_sctrl_middle_pane_ParamLimits

0xcd0b,	// (0x0000ebd4) grid_sctrl_middle_pane

0x66bf,	// (0x00008588) sctrl_sk_bottom_pane

0x66d0,	// (0x00008599) sctrl_sk_top_pane

0x66e2,	// (0x000085ab) aid_touch_sctrl_top

0xe7a9,	// (0x00010672) bg_sctrl_sk_pane_ParamLimits

0xe7a9,	// (0x00010672) bg_sctrl_sk_pane

0x66ef,	// (0x000085b8) sctrl_sk_top_pane_g1

0x66fc,	// (0x000085c5) sctrl_sk_top_pane_t1

0x66e2,	// (0x000085ab) aid_touch_sctrl_bottom

0xe7a9,	// (0x00010672) bg_sctrl_sk_pane_cp_ParamLimits

0xe7a9,	// (0x00010672) bg_sctrl_sk_pane_cp

0x6717,	// (0x000085e0) sctrl_sk_bottom_pane_g1

0x66fc,	// (0x000085c5) sctrl_sk_bottom_pane_t1

0xcd25,	// (0x0000ebee) cell_sctrl_middle_pane_ParamLimits

0xcd25,	// (0x0000ebee) cell_sctrl_middle_pane

0xcd38,	// (0x0000ec01) aid_touch_sctrl_middle_ParamLimits

0xcd38,	// (0x0000ec01) aid_touch_sctrl_middle

0xcd45,	// (0x0000ec0e) bg_sctrl_middle_pane_ParamLimits

0xcd45,	// (0x0000ec0e) bg_sctrl_middle_pane

0x67e1,	// (0x000086aa) cell_sctrl_middle_pane_g1_ParamLimits

0x67e1,	// (0x000086aa) cell_sctrl_middle_pane_g1

0xcd53,	// (0x0000ec1c) cell_sctrl_middle_pane_g2_ParamLimits

0xcd53,	// (0x0000ec1c) cell_sctrl_middle_pane_g2

0x0001,

0xfd05,	// (0x00011bce) cell_sctrl_middle_pane_g_ParamLimits

0xfd05,	// (0x00011bce) cell_sctrl_middle_pane_g

0x18dd,	// (0x000037a6) bg_sctrl_middle_pane_g1

0x18e5,	// (0x000037ae) bg_sctrl_middle_pane_g2

0x18ed,	// (0x000037b6) bg_sctrl_middle_pane_g3

0x18f5,	// (0x000037be) bg_sctrl_middle_pane_g4

0x18fd,	// (0x000037c6) bg_sctrl_middle_pane_g5

0x1905,	// (0x000037ce) bg_sctrl_middle_pane_g6

0x190d,	// (0x000037d6) bg_sctrl_middle_pane_g7

0x1915,	// (0x000037de) bg_sctrl_middle_pane_g8

0x0007,

0xfd0a,	// (0x00011bd3) bg_sctrl_middle_pane_g

0x191d,	// (0x000037e6) bg_sctrl_middle_pane_g8_copy1

0x18dd,	// (0x000037a6) bg_sctrl_sk_pane_g1

0x18e5,	// (0x000037ae) bg_sctrl_sk_pane_g2

0x18ed,	// (0x000037b6) bg_sctrl_sk_pane_g3

0x0008,

0xf85b,	// (0x00011724) bg_sctrl_sk_pane_g

0xebc4,	// (0x00010a8d) aid_size_touch_scroll_bar

0x18f5,	// (0x000037be) bg_sctrl_sk_pane_g4

0x18fd,	// (0x000037c6) bg_sctrl_sk_pane_g5

0x1905,	// (0x000037ce) bg_sctrl_sk_pane_g6

0x190d,	// (0x000037d6) bg_sctrl_sk_pane_g7

0x1915,	// (0x000037de) bg_sctrl_sk_pane_g8

0x191d,	// (0x000037e6) bg_sctrl_sk_pane_g9

0x0da4,	// (0x00002c6d) popup_fep_china_hwr2_fs_candidate_window

0xae3b,	// (0x0000cd04) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xae3b,	// (0x0000cd04) popup_fep_china_hwr2_fs_control_window

0x4cae,	// (0x00006b77) sctrl_sk_top_pane_g2

0x0001,

0xfd00,	// (0x00011bc9) sctrl_sk_top_pane_g

0xcd5f,	// (0x0000ec28) aid_fep_china_hwr2_fs_cell_ParamLimits

0xcd5f,	// (0x0000ec28) aid_fep_china_hwr2_fs_cell

0xcd75,	// (0x0000ec3e) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xcd75,	// (0x0000ec3e) bg_popup_fep_shadow_pane_cp4

0xcd8c,	// (0x0000ec55) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xcd8c,	// (0x0000ec55) bg_popup_fep_shadow_pane_cp5

0xcd9e,	// (0x0000ec67) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xcd9e,	// (0x0000ec67) popup_fep_china_hwr2_fs_control_bar_grid

0xcdb2,	// (0x0000ec7b) popup_fep_china_hwr2_fs_control_funtion_grid

0x67b5,	// (0x0000867e) aid_fep_china_hwr2_fs_candi_cell

0xe31d,	// (0x000101e6) bg_popup_fep_shadow_pane_cp6

0x67bf,	// (0x00008688) popup_fep_china_hwr2_fs_candidate_grid

0xcdba,	// (0x0000ec83) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcdba,	// (0x0000ec83) cell_fep_china_hwr2_fs_funtion_grid

0x4809,	// (0x000066d2) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x67e1,	// (0x000086aa) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x67e1,	// (0x000086aa) cell_fep_china_hwr2_fs_funtion_grid_g1

0x67ef,	// (0x000086b8) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x67ef,	// (0x000086b8) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1b,	// (0x00011be4) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1b,	// (0x00011be4) cell_fep_china_hwr2_fs_funtion_grid_g

0xcdd2,	// (0x0000ec9b) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xcdd2,	// (0x0000ec9b) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcde7,	// (0x0000ecb0) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcde7,	// (0x0000ecb0) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd20,	// (0x00011be9) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd20,	// (0x00011be9) cell_fep_china_hwr2_fs_funtion_grid_t

0x6836,	// (0x000086ff) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x683e,	// (0x00008707) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6846,	// (0x0000870f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd25,	// (0x00011bee) popup_fep_china_hwr2_fs_control_bar_grid_g

0x684e,	// (0x00008717) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x684e,	// (0x00008717) cell_fep_china_hwr2_fs_candidate_grid

0x686d,	// (0x00008736) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6875,	// (0x0000873e) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4809,	// (0x000066d2) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4809,	// (0x000066d2) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb45,	// (0x00011a0e) cell_fep_china_hwr2_fs_candidate_grid_g

0x687d,	// (0x00008746) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1413,	// (0x000032dc) clock_nsta_pane_cp_24_ParamLimits

0x1413,	// (0x000032dc) clock_nsta_pane_cp_24

0x1493,	// (0x0000335c) indicator_nsta_pane_cp_24_ParamLimits

0x1493,	// (0x0000335c) indicator_nsta_pane_cp_24

0x28f1,	// (0x000047ba) heading_pane_g1

0x0001,

0xf8c0,	// (0x00011789) heading_pane_g

0x350f,	// (0x000053d8) grid_sct_catagory_button_pane

0x3541,	// (0x0000540a) scroll_pane_cp5_ParamLimits

0x43ff,	// (0x000062c8) button_value_adjust_pane_cp5_ParamLimits

0x43ff,	// (0x000062c8) button_value_adjust_pane_cp5

0x4505,	// (0x000063ce) form2_midp_time_pane_ParamLimits

0x688b,	// (0x00008754) cell_sct_catagory_button_pane_ParamLimits

0x688b,	// (0x00008754) cell_sct_catagory_button_pane

0x47ce,	// (0x00006697) bg_button_pane_cp01_ParamLimits

0x47ce,	// (0x00006697) bg_button_pane_cp01

0x4809,	// (0x000066d2) cell_sct_catagory_button_pane_g1

0xb404,	// (0x0000d2cd) popup_tb_extension_window

0xce03,	// (0x0000eccc) aid_size_cell_ext_ParamLimits

0xce03,	// (0x0000eccc) aid_size_cell_ext

0xea06,	// (0x000108cf) bg_tb_trans_pane_cp1_ParamLimits

0xea06,	// (0x000108cf) bg_tb_trans_pane_cp1

0xce29,	// (0x0000ecf2) grid_tb_ext_pane_ParamLimits

0xce29,	// (0x0000ecf2) grid_tb_ext_pane

0xce69,	// (0x0000ed32) cell_tb_ext_pane_ParamLimits

0xce69,	// (0x0000ed32) cell_tb_ext_pane

0xce91,	// (0x0000ed5a) cell_tb_ext_pane_g1_ParamLimits

0xce91,	// (0x0000ed5a) cell_tb_ext_pane_g1

0x6921,	// (0x000087ea) cell_tb_ext_pane_t1

0xe7a9,	// (0x00010672) list_highlight_pane_cp11_ParamLimits

0xe7a9,	// (0x00010672) list_highlight_pane_cp11

0xe4fe,	// (0x000103c7) popup_uni_indicator_window_ParamLimits

0xe4fe,	// (0x000103c7) popup_uni_indicator_window

0xed11,	// (0x00010bda) bg_popup_sub_pane_cp14

0x693c,	// (0x00008805) list_uniindi_pane

0x6948,	// (0x00008811) uniindi_top_pane

0xe7a9,	// (0x00010672) bg_uniindi_top_pane

0x6969,	// (0x00008832) uniindi_top_pane_g1

0x697f,	// (0x00008848) uniindi_top_pane_g2

0x0003,

0xfd2c,	// (0x00011bf5) uniindi_top_pane_g

0x69a9,	// (0x00008872) uniindi_top_pane_t1

0x69d5,	// (0x0000889e) list_single_uniindi_pane_ParamLimits

0x69d5,	// (0x0000889e) list_single_uniindi_pane

0x4809,	// (0x000066d2) bg_uniindi_top_pane_g1

0x69e7,	// (0x000088b0) list_single_uniindi_pane_g1

0x69fa,	// (0x000088c3) list_single_uniindi_pane_t1

0xe31d,	// (0x000101e6) control_bg_pane

0x6a1f,	// (0x000088e8) bg_sctrl_sk_pane_cp1

0x6a28,	// (0x000088f1) bg_sctrl_sk_pane_cp2

0x6a31,	// (0x000088fa) control_bg_pane_g1

0x6a3a,	// (0x00008903) control_bg_pane_g2

0x0001,

0xfd35,	// (0x00011bfe) control_bg_pane_g

0x41d5,	// (0x0000609e) cell_indicator_nsta_pane_g1_ParamLimits

0xc1c7,	// (0x0000e090) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa9,	// (0x00011972) cell_indicator_nsta_pane_g_ParamLimits

0x4595,	// (0x0000645e) form2_midp_time_pane_t1_ParamLimits

0x486a,	// (0x00006733) main_idle_act4_pane_ParamLimits

0x486a,	// (0x00006733) main_idle_act4_pane

0xb404,	// (0x0000d2cd) popup_tb_extension_window_ParamLimits

0xce51,	// (0x0000ed1a) tb_ext_find_pane_ParamLimits

0xce51,	// (0x0000ed1a) tb_ext_find_pane

0x6a43,	// (0x0000890c) ai_gene_pane_1_cp1

0x08b6,	// (0x0000277f) ai_gene_pane_2_cp1

0x6a4b,	// (0x00008914) list_single_idle_plugin_calendar_pane

0x6a54,	// (0x0000891d) list_single_idle_plugin_notification_pane

0x6a5d,	// (0x00008926) list_single_idle_plugin_player_pane

0xceae,	// (0x0000ed77) list_single_idle_plugin_shortcut_pane_ParamLimits

0xceae,	// (0x0000ed77) list_single_idle_plugin_shortcut_pane

0xced6,	// (0x0000ed9f) main_idle_act4_pane_t1

0xceee,	// (0x0000edb7) main_idle_act4_pane_t2

0x0001,

0xfd3a,	// (0x00011c03) main_idle_act4_pane_t

0xcf06,	// (0x0000edcf) middle_sk_idle_act4_pane_ParamLimits

0xcf06,	// (0x0000edcf) middle_sk_idle_act4_pane

0xcf22,	// (0x0000edeb) popup_clock_digital_analogue_window_cp2

0xcf49,	// (0x0000ee12) shortcut_wheel_idle_act4_pane_ParamLimits

0xcf49,	// (0x0000ee12) shortcut_wheel_idle_act4_pane

0x4809,	// (0x000066d2) shortcut_wheel_idle_act4_pane_g1

0x4809,	// (0x000066d2) shortcut_wheel_idle_act4_pane_g2

0x4809,	// (0x000066d2) shortcut_wheel_idle_act4_pane_g3

0x4809,	// (0x000066d2) shortcut_wheel_idle_act4_pane_g4

0x4809,	// (0x000066d2) shortcut_wheel_idle_act4_pane_g5

0x6af0,	// (0x000089b9) shortcut_wheel_idle_act4_pane_g6

0x6af8,	// (0x000089c1) shortcut_wheel_idle_act4_pane_g7

0x6b00,	// (0x000089c9) shortcut_wheel_idle_act4_pane_g8

0x6b08,	// (0x000089d1) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3f,	// (0x00011c08) shortcut_wheel_idle_act4_pane_g

0x4921,	// (0x000067ea) middle_sk_idle_act4_pane_g1_ParamLimits

0x4921,	// (0x000067ea) middle_sk_idle_act4_pane_g1

0xcfc6,	// (0x0000ee8f) middle_sk_idle_act4_pane_g2_ParamLimits

0xcfc6,	// (0x0000ee8f) middle_sk_idle_act4_pane_g2

0x0001,

0xfd62,	// (0x00011c2b) middle_sk_idle_act4_pane_g_ParamLimits

0xfd62,	// (0x00011c2b) middle_sk_idle_act4_pane_g

0xcfde,	// (0x0000eea7) middle_sk_idle_act4_pane_t1_ParamLimits

0xcfde,	// (0x0000eea7) middle_sk_idle_act4_pane_t1

0xd00d,	// (0x0000eed6) grid_ai_shortcut_pane_ParamLimits

0xd00d,	// (0x0000eed6) grid_ai_shortcut_pane

0xd02a,	// (0x0000eef3) list_highlight_pane_cp16_ParamLimits

0xd02a,	// (0x0000eef3) list_highlight_pane_cp16

0xd037,	// (0x0000ef00) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd037,	// (0x0000ef00) list_single_idle_plugin_shortcut_pane_g1

0xd043,	// (0x0000ef0c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd043,	// (0x0000ef0c) list_single_idle_plugin_shortcut_pane_g2

0xd061,	// (0x0000ef2a) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd061,	// (0x0000ef2a) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd67,	// (0x00011c30) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd67,	// (0x00011c30) list_single_idle_plugin_shortcut_pane_g

0xd076,	// (0x0000ef3f) cell_ai_shortcut_pane_ParamLimits

0xd076,	// (0x0000ef3f) cell_ai_shortcut_pane

0xd08c,	// (0x0000ef55) cell_ai_shortcut_pane_g1_ParamLimits

0xd08c,	// (0x0000ef55) cell_ai_shortcut_pane_g1

0x6a43,	// (0x0000890c) ai_gene_pane_1_cp2

0x6c39,	// (0x00008b02) ai_gene_pane_2_cp2

0x6c41,	// (0x00008b0a) list_highlight_pane_cp15

0x6c4a,	// (0x00008b13) list_single_idle_plugin_calendar_pane_g1

0x6c41,	// (0x00008b0a) list_highlight_pane_cp17

0x6c52,	// (0x00008b1b) list_single_idle_plugin_calendar_pane_g1_copy1

0x6c5a,	// (0x00008b23) list_single_idle_plugin_player_pane_g1

0x382e,	// (0x000056f7) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6e,	// (0x00011c37) list_single_idle_plugin_player_pane_g

0x6c62,	// (0x00008b2b) list_single_idle_plugin_player_pane_t1

0x6c70,	// (0x00008b39) list_single_idle_plugin_player_pane_t2

0x6c7e,	// (0x00008b47) list_single_idle_plugin_player_pane_t3

0x6c8c,	// (0x00008b55) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd73,	// (0x00011c3c) list_single_idle_plugin_player_pane_t

0x6c9a,	// (0x00008b63) wait_bar_pane_cp15

0x6ca2,	// (0x00008b6b) grid_ai_notification_pane

0x382e,	// (0x000056f7) list_single_idle_plugin_notification_pane_g1

0xd0ae,	// (0x0000ef77) cell_ai_notification_pane_ParamLimits

0xd0ae,	// (0x0000ef77) cell_ai_notification_pane

0x6cb8,	// (0x00008b81) cell_ai_notification_pane_g1

0x6cc0,	// (0x00008b89) cell_ai_notification_pane_t1

0xd0bb,	// (0x0000ef84) tb_ext_find_button_pane

0xd0c3,	// (0x0000ef8c) tb_ext_find_pane_g1

0xd0cb,	// (0x0000ef94) tb_ext_find_pane_t1

0xf483,	// (0x0001134c) tb_ext_find_button_pane_g1

0x6cec,	// (0x00008bb5) tb_ext_find_button_pane_g2

0x0001,

0xfd7c,	// (0x00011c45) tb_ext_find_button_pane_g

0xced6,	// (0x0000ed9f) main_idle_act4_pane_t1_ParamLimits

0xceee,	// (0x0000edb7) main_idle_act4_pane_t2_ParamLimits

0xfd3a,	// (0x00011c03) main_idle_act4_pane_t_ParamLimits

0xcf22,	// (0x0000edeb) popup_clock_digital_analogue_window_cp2_ParamLimits

0xcf39,	// (0x0000ee02) sat_plugin_idle_act4_pane_ParamLimits

0xcf39,	// (0x0000ee02) sat_plugin_idle_act4_pane

0xd0d9,	// (0x0000efa2) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd0d9,	// (0x0000efa2) sat_plugin_idle_act4_pane_t1

0xd0f1,	// (0x0000efba) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd0f1,	// (0x0000efba) sat_plugin_idle_act4_pane_t2

0xd109,	// (0x0000efd2) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd109,	// (0x0000efd2) sat_plugin_idle_act4_pane_t3

0xd121,	// (0x0000efea) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd121,	// (0x0000efea) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd81,	// (0x00011c4a) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd81,	// (0x00011c4a) sat_plugin_idle_act4_pane_t

0xe4aa,	// (0x00010373) popup_battery_window_ParamLimits

0xe4aa,	// (0x00010373) popup_battery_window

0xe7a9,	// (0x00010672) bg_popup_sub_pane_cp25_ParamLimits

0xe7a9,	// (0x00010672) bg_popup_sub_pane_cp25

0x6d41,	// (0x00008c0a) popup_battery_window_g1_ParamLimits

0x6d41,	// (0x00008c0a) popup_battery_window_g1

0x6d4d,	// (0x00008c16) popup_battery_window_t1_ParamLimits

0x6d4d,	// (0x00008c16) popup_battery_window_t1

0x6d5f,	// (0x00008c28) popup_battery_window_t2_ParamLimits

0x6d5f,	// (0x00008c28) popup_battery_window_t2

0x0001,

0xfd8a,	// (0x00011c53) popup_battery_window_t_ParamLimits

0xfd8a,	// (0x00011c53) popup_battery_window_t

0xab52,	// (0x0000ca1b) midp_canvas_pane_ParamLimits

0xabad,	// (0x0000ca76) midp_keypad_pane_ParamLimits

0xabad,	// (0x0000ca76) midp_keypad_pane

0x0cee,	// (0x00002bb7) main_midp_pane_ParamLimits

0x4261,	// (0x0000612a) signal_pane_g2_cp_ParamLimits

0xd139,	// (0x0000f002) aid_size_cell_midp_keypad_ParamLimits

0xd139,	// (0x0000f002) aid_size_cell_midp_keypad

0xd157,	// (0x0000f020) midp_keyp_game_grid_pane_ParamLimits

0xd157,	// (0x0000f020) midp_keyp_game_grid_pane

0xd17e,	// (0x0000f047) midp_keyp_rocker_pane_ParamLimits

0xd17e,	// (0x0000f047) midp_keyp_rocker_pane

0xd1bd,	// (0x0000f086) midp_keyp_sk_left_pane_ParamLimits

0xd1bd,	// (0x0000f086) midp_keyp_sk_left_pane

0xd211,	// (0x0000f0da) midp_keyp_sk_right_pane_ParamLimits

0xd211,	// (0x0000f0da) midp_keyp_sk_right_pane

0xe31d,	// (0x000101e6) bg_button_pane_cp03

0xd265,	// (0x0000f12e) midp_keyp_sk_left_pane_g1

0xe31d,	// (0x000101e6) bg_button_pane_cp04

0xd265,	// (0x0000f12e) midp_keyp_sk_right_pane_g1

0x4809,	// (0x000066d2) midp_keyp_rocker_pane_g1

0xd26e,	// (0x0000f137) keyp_game_cell_pane_ParamLimits

0xd26e,	// (0x0000f137) keyp_game_cell_pane

0xe31d,	// (0x000101e6) bg_button_pane_cp02

0xd294,	// (0x0000f15d) keyp_game_cell_pane_g1

0x9d7c,	// (0x0000bc45) popup_fep_vkb2_window_ParamLimits

0x9d7c,	// (0x0000bc45) popup_fep_vkb2_window

0xd29d,	// (0x0000f166) aid_size_cell_vkb2_ParamLimits

0xd29d,	// (0x0000f166) aid_size_cell_vkb2

0xd2d3,	// (0x0000f19c) popup_fep_vkb2_window_g1_ParamLimits

0xd2d3,	// (0x0000f19c) popup_fep_vkb2_window_g1

0xd323,	// (0x0000f1ec) vkb2_area_bottom_pane_ParamLimits

0xd323,	// (0x0000f1ec) vkb2_area_bottom_pane

0xd37f,	// (0x0000f248) vkb2_area_keypad_pane_ParamLimits

0xd37f,	// (0x0000f248) vkb2_area_keypad_pane

0xd3cd,	// (0x0000f296) vkb2_area_top_pane_ParamLimits

0xd3cd,	// (0x0000f296) vkb2_area_top_pane

0xd453,	// (0x0000f31c) vkb2_top_entry_pane_ParamLimits

0xd453,	// (0x0000f31c) vkb2_top_entry_pane

0xd480,	// (0x0000f349) vkb2_top_grid_left_pane_ParamLimits

0xd480,	// (0x0000f349) vkb2_top_grid_left_pane

0xd4a0,	// (0x0000f369) vkb2_top_grid_right_pane_ParamLimits

0xd4a0,	// (0x0000f369) vkb2_top_grid_right_pane

0x70de,	// (0x00008fa7) vkb2_cell_keypad_pane_ParamLimits

0x70de,	// (0x00008fa7) vkb2_cell_keypad_pane

0xd4e6,	// (0x0000f3af) vkb2_area_bottom_grid_pane_ParamLimits

0xd4e6,	// (0x0000f3af) vkb2_area_bottom_grid_pane

0xd510,	// (0x0000f3d9) vkb2_area_bottom_pane_g1_ParamLimits

0xd510,	// (0x0000f3d9) vkb2_area_bottom_pane_g1

0xd536,	// (0x0000f3ff) vkb2_area_bottom_pane_g2_ParamLimits

0xd536,	// (0x0000f3ff) vkb2_area_bottom_pane_g2

0xd567,	// (0x0000f430) vkb2_area_bottom_pane_g3_ParamLimits

0xd567,	// (0x0000f430) vkb2_area_bottom_pane_g3

0x0002,

0xfd8f,	// (0x00011c58) vkb2_area_bottom_pane_g_ParamLimits

0xfd8f,	// (0x00011c58) vkb2_area_bottom_pane_g

0x7288,	// (0x00009151) vkb2_top_cell_left_pane_ParamLimits

0x7288,	// (0x00009151) vkb2_top_cell_left_pane

0xd5d1,	// (0x0000f49a) vkb2_top_entry_pane_g1_ParamLimits

0xd5d1,	// (0x0000f49a) vkb2_top_entry_pane_g1

0xd5df,	// (0x0000f4a8) vkb2_top_entry_pane_t1_ParamLimits

0xd5df,	// (0x0000f4a8) vkb2_top_entry_pane_t1

0x72f0,	// (0x000091b9) vkb2_top_entry_pane_t2_ParamLimits

0x72f0,	// (0x000091b9) vkb2_top_entry_pane_t2

0x7322,	// (0x000091eb) vkb2_top_entry_pane_t3_ParamLimits

0x7322,	// (0x000091eb) vkb2_top_entry_pane_t3

0x0002,

0xfd96,	// (0x00011c5f) vkb2_top_entry_pane_t_ParamLimits

0xfd96,	// (0x00011c5f) vkb2_top_entry_pane_t

0xd618,	// (0x0000f4e1) vkb2_top_grid_right_pane_g1_ParamLimits

0xd618,	// (0x0000f4e1) vkb2_top_grid_right_pane_g1

0x7389,	// (0x00009252) vkb2_top_grid_right_pane_g2_ParamLimits

0x7389,	// (0x00009252) vkb2_top_grid_right_pane_g2

0x73a1,	// (0x0000926a) vkb2_top_grid_right_pane_g3_ParamLimits

0x73a1,	// (0x0000926a) vkb2_top_grid_right_pane_g3

0xd62e,	// (0x0000f4f7) vkb2_top_grid_right_pane_g4_ParamLimits

0xd62e,	// (0x0000f4f7) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9d,	// (0x00011c66) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9d,	// (0x00011c66) vkb2_top_grid_right_pane_g

0x73cf,	// (0x00009298) vkb2_top_cell_left_pane_g1

0x73e6,	// (0x000092af) vkb2_cell_keypad_pane_g1_ParamLimits

0x73e6,	// (0x000092af) vkb2_cell_keypad_pane_g1

0x73f4,	// (0x000092bd) vkb2_cell_keypad_pane_t1_ParamLimits

0x73f4,	// (0x000092bd) vkb2_cell_keypad_pane_t1

0x740b,	// (0x000092d4) vkb2_cell_bottom_grid_pane_ParamLimits

0x740b,	// (0x000092d4) vkb2_cell_bottom_grid_pane

0x7444,	// (0x0000930d) vkb2_cell_bottom_grid_pane_g1

0xcf6a,	// (0x0000ee33) aid_call2_pane_cp02

0xcf72,	// (0x0000ee3b) aid_call_pane_cp02

0xcf7a,	// (0x0000ee43) clock_digital_number_pane_cp10

0xcf82,	// (0x0000ee4b) clock_digital_number_pane_cp11

0xcf8a,	// (0x0000ee53) clock_digital_number_pane_cp12

0xcf92,	// (0x0000ee5b) clock_digital_number_pane_cp13

0xcf9a,	// (0x0000ee63) clock_digital_separator_pane_cp10

0xf483,	// (0x0001134c) popup_clock_digital_analogue_window_cp2_g1

0xf483,	// (0x0001134c) popup_clock_digital_analogue_window_cp2_g2

0xcfa2,	// (0x0000ee6b) popup_clock_digital_analogue_window_cp2_g3

0xf483,	// (0x0001134c) popup_clock_digital_analogue_window_cp2_g4

0xcfa2,	// (0x0000ee6b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd52,	// (0x00011c1b) popup_clock_digital_analogue_window_cp2_g

0xcfaa,	// (0x0000ee73) popup_clock_digital_analogue_window_cp2_t1

0xcfb8,	// (0x0000ee81) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5d,	// (0x00011c26) popup_clock_digital_analogue_window_cp2_t

0x4809,	// (0x000066d2) clock_digital_number_pane_cp10_g1

0x4809,	// (0x000066d2) clock_digital_number_pane_cp10_g2

0x0001,

0xfb45,	// (0x00011a0e) clock_digital_number_pane_cp10_g

0x4809,	// (0x000066d2) clock_digital_separator_pane_cp10_g1

0x4809,	// (0x000066d2) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb45,	// (0x00011a0e) clock_digital_separator_pane_cp10_g

0x698b,	// (0x00008854) uniindi_top_pane_g3

0x699c,	// (0x00008865) uniindi_top_pane_g4

0x7169,	// (0x00009032) vkb2_row_keypad_pane_ParamLimits

0x7169,	// (0x00009032) vkb2_row_keypad_pane

0x7460,	// (0x00009329) vkb2_cell_t_keypad_pane_ParamLimits

0x7460,	// (0x00009329) vkb2_cell_t_keypad_pane

0x7470,	// (0x00009339) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7470,	// (0x00009339) vkb2_cell_t_keypad_pane_cp08

0x7485,	// (0x0000934e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7485,	// (0x0000934e) vkb2_cell_t_keypad_pane_cp09

0x7499,	// (0x00009362) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7499,	// (0x00009362) vkb2_cell_t_keypad_pane_cp01

0x74aa,	// (0x00009373) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x74aa,	// (0x00009373) vkb2_cell_t_keypad_pane_cp02

0x74bb,	// (0x00009384) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x74bb,	// (0x00009384) vkb2_cell_t_keypad_pane_cp03

0x74cc,	// (0x00009395) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x74cc,	// (0x00009395) vkb2_cell_t_keypad_pane_cp04

0x74dd,	// (0x000093a6) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x74dd,	// (0x000093a6) vkb2_cell_t_keypad_pane_cp05

0x74ee,	// (0x000093b7) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x74ee,	// (0x000093b7) vkb2_cell_t_keypad_pane_cp06

0x7501,	// (0x000093ca) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7501,	// (0x000093ca) vkb2_cell_t_keypad_pane_cp07

0x7516,	// (0x000093df) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7516,	// (0x000093df) vkb2_cell_t_keypad_pane_cp10

0x4cae,	// (0x00006b77) vkb2_cell_t_keypad_pane_g1

0x752b,	// (0x000093f4) vkb2_cell_t_keypad_pane_t1

0xe31d,	// (0x000101e6) popup_grid_graphic2_window

0xd644,	// (0x0000f50d) aid_size_cell_graphic2_ParamLimits

0xd644,	// (0x0000f50d) aid_size_cell_graphic2

0xd682,	// (0x0000f54b) bg_popup_window_pane_cp21_ParamLimits

0xd682,	// (0x0000f54b) bg_popup_window_pane_cp21

0xd690,	// (0x0000f559) graphic2_pages_pane_ParamLimits

0xd690,	// (0x0000f559) graphic2_pages_pane

0xd6e8,	// (0x0000f5b1) grid_graphic2_control_pane_ParamLimits

0xd6e8,	// (0x0000f5b1) grid_graphic2_control_pane

0xd730,	// (0x0000f5f9) grid_graphic2_pane_ParamLimits

0xd730,	// (0x0000f5f9) grid_graphic2_pane

0xd7bb,	// (0x0000f684) cell_graphic2_pane

0xe31d,	// (0x000101e6) main_comp_mode_pane

0x60c5,	// (0x00007f8e) list_ai3_gene_pane_ParamLimits

0xcc3a,	// (0x0000eb03) bg_popup_window_pane_cp19_ParamLimits

0x64fc,	// (0x000083c5) bg_touch_area_indi_pane_ParamLimits

0x64fc,	// (0x000083c5) bg_touch_area_indi_pane

0x6512,	// (0x000083db) bg_touch_area_indi_pane_cp01_ParamLimits

0x6512,	// (0x000083db) bg_touch_area_indi_pane_cp01

0x652a,	// (0x000083f3) bg_touch_area_indi_pane_cp02_ParamLimits

0x652a,	// (0x000083f3) bg_touch_area_indi_pane_cp02

0x6544,	// (0x0000840d) bg_touch_area_indi_pane_cp03_ParamLimits

0x6544,	// (0x0000840d) bg_touch_area_indi_pane_cp03

0x655e,	// (0x00008427) popup_slider_window_g1_ParamLimits

0x657a,	// (0x00008443) popup_slider_window_g2_ParamLimits

0x6596,	// (0x0000845f) popup_slider_window_g3_ParamLimits

0xfce7,	// (0x00011bb0) popup_slider_window_g_ParamLimits

0x65f2,	// (0x000084bb) popup_slider_window_t1_ParamLimits

0x6666,	// (0x0000852f) small_volume_slider_vertical_pane_ParamLimits

0xd7bb,	// (0x0000f684) cell_graphic2_pane_ParamLimits

0xd81e,	// (0x0000f6e7) bg_button_pane_cp10_ParamLimits

0xd81e,	// (0x0000f6e7) bg_button_pane_cp10

0xd831,	// (0x0000f6fa) bg_button_pane_cp11_ParamLimits

0xd831,	// (0x0000f6fa) bg_button_pane_cp11

0xd844,	// (0x0000f70d) graphic2_pages_pane_g1_ParamLimits

0xd844,	// (0x0000f70d) graphic2_pages_pane_g1

0xd85f,	// (0x0000f728) graphic2_pages_pane_g2_ParamLimits

0xd85f,	// (0x0000f728) graphic2_pages_pane_g2

0x0001,

0xfdab,	// (0x00011c74) graphic2_pages_pane_g_ParamLimits

0xfdab,	// (0x00011c74) graphic2_pages_pane_g

0xd877,	// (0x0000f740) graphic2_pages_pane_t1_ParamLimits

0xd877,	// (0x0000f740) graphic2_pages_pane_t1

0xd88f,	// (0x0000f758) cell_graphic2_control_pane_ParamLimits

0xd88f,	// (0x0000f758) cell_graphic2_control_pane

0xd8c3,	// (0x0000f78c) cell_graphic2_pane_g1_ParamLimits

0xd8c3,	// (0x0000f78c) cell_graphic2_pane_g1

0x4ad0,	// (0x00006999) cell_graphic2_pane_g2_ParamLimits

0x4ad0,	// (0x00006999) cell_graphic2_pane_g2

0xd8d0,	// (0x0000f799) cell_graphic2_pane_g3_ParamLimits

0xd8d0,	// (0x0000f799) cell_graphic2_pane_g3

0x4add,	// (0x000069a6) cell_graphic2_pane_g4_ParamLimits

0x4add,	// (0x000069a6) cell_graphic2_pane_g4

0xd8dd,	// (0x0000f7a6) cell_graphic2_pane_g5_ParamLimits

0xd8dd,	// (0x0000f7a6) cell_graphic2_pane_g5

0x0004,

0xfdb0,	// (0x00011c79) cell_graphic2_pane_g_ParamLimits

0xfdb0,	// (0x00011c79) cell_graphic2_pane_g

0xd8fd,	// (0x0000f7c6) cell_graphic2_pane_t1_ParamLimits

0xd8fd,	// (0x0000f7c6) cell_graphic2_pane_t1

0x28e5,	// (0x000047ae) grid_highlight_pane_cp11_ParamLimits

0x28e5,	// (0x000047ae) grid_highlight_pane_cp11

0xe7a9,	// (0x00010672) bg_button_pane_cp05

0xd932,	// (0x0000f7fb) cell_graphic2_control_pane_g1

0x4809,	// (0x000066d2) bg_touch_area_indi_pane_g1

0x7805,	// (0x000096ce) aid_cmod_rocker_key_size

0x780f,	// (0x000096d8) aid_cmode_itu_key_size

0x7819,	// (0x000096e2) main_cmode_video_pane

0x7823,	// (0x000096ec) main_comp_mode_itu_pane

0x782f,	// (0x000096f8) main_comp_mode_rocker_pane

0x783b,	// (0x00009704) cell_cmode_rocker_pane_ParamLimits

0x783b,	// (0x00009704) cell_cmode_rocker_pane

0x784f,	// (0x00009718) cell_cmode_itu_pane_ParamLimits

0x784f,	// (0x00009718) cell_cmode_itu_pane

0xed11,	// (0x00010bda) bg_button_pane_cp06_ParamLimits

0xed11,	// (0x00010bda) bg_button_pane_cp06

0x4cae,	// (0x00006b77) cell_cmode_rocker_pane_g1_ParamLimits

0x4cae,	// (0x00006b77) cell_cmode_rocker_pane_g1

0x67e1,	// (0x000086aa) cell_cmode_rocker_pane_g2_ParamLimits

0x67e1,	// (0x000086aa) cell_cmode_rocker_pane_g2

0x0001,

0xfdc0,	// (0x00011c89) cell_cmode_rocker_pane_g_ParamLimits

0xfdc0,	// (0x00011c89) cell_cmode_rocker_pane_g

0xe31d,	// (0x000101e6) bg_button_pane_cp07

0x7866,	// (0x0000972f) cell_cmode_itu_pane_g1

0x786f,	// (0x00009738) cell_cmode_itu_pane_t1

0x787d,	// (0x00009746) cell_cmode_itu_pane_t2

0x0001,

0xfdc5,	// (0x00011c8e) cell_cmode_itu_pane_t

0x6a0f,	// (0x000088d8) aid_touch_ctrl_left

0x6a17,	// (0x000088e0) aid_touch_ctrl_right

0xe31d,	// (0x000101e6) compa_mode_pane

0xd958,	// (0x0000f821) aid_cmod_rocker_key_size_cp

0xd962,	// (0x0000f82b) aid_cmode_itu_key_size_cp

0x789f,	// (0x00009768) compa_mode_pane_g1

0x78a7,	// (0x00009770) compa_mode_pane_g2

0x78af,	// (0x00009778) compa_mode_pane_g3

0x0002,

0xfdca,	// (0x00011c93) compa_mode_pane_g

0xd96c,	// (0x0000f835) main_comp_mode_itu_pane_cp

0xd974,	// (0x0000f83d) main_comp_mode_rocker_pane_cp

0xd97c,	// (0x0000f845) cell_cmode_itu_pane_cp_ParamLimits

0xd97c,	// (0x0000f845) cell_cmode_itu_pane_cp

0xd991,	// (0x0000f85a) cell_cmode_rocker_pane_cp_ParamLimits

0xd991,	// (0x0000f85a) cell_cmode_rocker_pane_cp

0xed11,	// (0x00010bda) bg_button_pane_cp06_cp_ParamLimits

0xed11,	// (0x00010bda) bg_button_pane_cp06_cp

0x4cae,	// (0x00006b77) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4cae,	// (0x00006b77) cell_cmode_rocker_pane_g1_cp

0x4809,	// (0x000066d2) cell_cmode_rocker_pane_g2_cp

0xe31d,	// (0x000101e6) bg_button_pane_cp07_cp

0xd9a3,	// (0x0000f86c) cell_cmode_itu_pane_g1_cp

0xd9ac,	// (0x0000f875) cell_cmode_itu_pane_t1_cp

0xd9ac,	// (0x0000f875) cell_cmode_itu_pane_t2_cp

0xbfc4,	// (0x0000de8d) settings_code_pane_cp2

0xe5d3,	// (0x0001049c) bg_popup_window_pane_cp3_ParamLimits

0xe997,	// (0x00010860) heading_pane_cp3_ParamLimits

0xe9a3,	// (0x0001086c) listscroll_popup_graphic_pane_ParamLimits

0x4878,	// (0x00006741) fep_hwr_aid_pane_ParamLimits

0x66e2,	// (0x000085ab) aid_touch_sctrl_top_ParamLimits

0x66ef,	// (0x000085b8) sctrl_sk_top_pane_g1_ParamLimits

0x4cae,	// (0x00006b77) sctrl_sk_top_pane_g2_ParamLimits

0xfd00,	// (0x00011bc9) sctrl_sk_top_pane_g_ParamLimits

0x66fc,	// (0x000085c5) sctrl_sk_top_pane_t1_ParamLimits

0x66e2,	// (0x000085ab) aid_touch_sctrl_bottom_ParamLimits

0x66fc,	// (0x000085c5) sctrl_sk_bottom_pane_t1_ParamLimits

0x6955,	// (0x0000881e) aid_area_touch_clock

0xd415,	// (0x0000f2de) aid_vkb2_area_top_pane_cell_ParamLimits

0xd415,	// (0x0000f2de) aid_vkb2_area_top_pane_cell

0xd4c0,	// (0x0000f389) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd4c0,	// (0x0000f389) aid_vkb2_area_bottom_pane_cell

0x72a8,	// (0x00009171) popup_char_count_window

0x7905,	// (0x000097ce) popup_char_count_window_g1

0x790e,	// (0x000097d7) popup_char_count_window_g2

0x7917,	// (0x000097e0) popup_char_count_window_g3

0x0002,

0xfdd1,	// (0x00011c9a) popup_char_count_window_g

0x7920,	// (0x000097e9) popup_char_count_window_t1

0x6efa,	// (0x00008dc3) popup_fep_char_preview_window_ParamLimits

0x6efa,	// (0x00008dc3) popup_fep_char_preview_window

0xd435,	// (0x0000f2fe) vkb2_top_candi_pane_ParamLimits

0xd435,	// (0x0000f2fe) vkb2_top_candi_pane

0xd9ba,	// (0x0000f883) cell_vkb2_top_candi_pane_ParamLimits

0xd9ba,	// (0x0000f883) cell_vkb2_top_candi_pane

0x2113,	// (0x00003fdc) bg_popup_fep_char_preview_window_ParamLimits

0x2113,	// (0x00003fdc) bg_popup_fep_char_preview_window

0x797f,	// (0x00009848) popup_fep_char_preview_window_t1_ParamLimits

0x797f,	// (0x00009848) popup_fep_char_preview_window_t1

0x79b9,	// (0x00009882) bg_popup_fep_char_preview_window_g1

0x79c1,	// (0x0000988a) bg_popup_fep_char_preview_window_g2

0x79c9,	// (0x00009892) bg_popup_fep_char_preview_window_g3

0x79d1,	// (0x0000989a) bg_popup_fep_char_preview_window_g4

0x79d9,	// (0x000098a2) bg_popup_fep_char_preview_window_g5

0x79e1,	// (0x000098aa) bg_popup_fep_char_preview_window_g6

0x79e9,	// (0x000098b2) bg_popup_fep_char_preview_window_g7

0x79f1,	// (0x000098ba) bg_popup_fep_char_preview_window_g8

0x79f9,	// (0x000098c2) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd8,	// (0x00011ca1) bg_popup_fep_char_preview_window_g

0x4cae,	// (0x00006b77) cell_vkb2_top_candi_pane_g1_ParamLimits

0x4cae,	// (0x00006b77) cell_vkb2_top_candi_pane_g1

0x5043,	// (0x00006f0c) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5043,	// (0x00006f0c) cell_vkb2_top_candi_pane_g2

0x5064,	// (0x00006f2d) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5064,	// (0x00006f2d) cell_vkb2_top_candi_pane_g3

0x7a01,	// (0x000098ca) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7a01,	// (0x000098ca) cell_vkb2_top_candi_pane_g4

0x7a22,	// (0x000098eb) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7a22,	// (0x000098eb) cell_vkb2_top_candi_pane_g5

0x67e1,	// (0x000086aa) cell_vkb2_top_candi_pane_g6_ParamLimits

0x67e1,	// (0x000086aa) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdeb,	// (0x00011cb4) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdeb,	// (0x00011cb4) cell_vkb2_top_candi_pane_g

0x7a43,	// (0x0000990c) cell_vkb2_top_candi_pane_t1

0x304a,	// (0x00004f13) aid_size_touch_slider_mark_ParamLimits

0x304a,	// (0x00004f13) aid_size_touch_slider_mark

0xd6cc,	// (0x0000f595) grid_graphic2_catg_pane_ParamLimits

0xd6cc,	// (0x0000f595) grid_graphic2_catg_pane

0xd78a,	// (0x0000f653) popup_grid_graphic2_window_t1_ParamLimits

0xd78a,	// (0x0000f653) popup_grid_graphic2_window_t1

0xd7a0,	// (0x0000f669) popup_grid_graphic2_window_t2_ParamLimits

0xd7a0,	// (0x0000f669) popup_grid_graphic2_window_t2

0x0001,

0xfda6,	// (0x00011c6f) popup_grid_graphic2_window_t_ParamLimits

0xfda6,	// (0x00011c6f) popup_grid_graphic2_window_t

0xe7a9,	// (0x00010672) bg_button_pane_cp05_ParamLimits

0xd932,	// (0x0000f7fb) cell_graphic2_control_pane_g1_ParamLimits

0xda24,	// (0x0000f8ed) cell_graphic2_catg_pane_ParamLimits

0xda24,	// (0x0000f8ed) cell_graphic2_catg_pane

0xe31d,	// (0x000101e6) bg_button_pane_cp12

0xda36,	// (0x0000f8ff) cell_graphic2_catg_pane_g1

0x6921,	// (0x000087ea) cell_tb_ext_pane_t1_ParamLimits

0x7346,	// (0x0000920f) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7346,	// (0x0000920f) vkb2_top_cell_right_narrow_pane

0x735e,	// (0x00009227) vkb2_top_cell_right_wide_pane_ParamLimits

0x735e,	// (0x00009227) vkb2_top_cell_right_wide_pane

0x486a,	// (0x00006733) bg_vkb2_func_pane_ParamLimits

0x486a,	// (0x00006733) bg_vkb2_func_pane

0x73cf,	// (0x00009298) vkb2_top_cell_left_pane_g1_ParamLimits

0x486a,	// (0x00006733) bg_vkb2_fuc_pane_cp03_ParamLimits

0x486a,	// (0x00006733) bg_vkb2_fuc_pane_cp03

0x7444,	// (0x0000930d) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x18e5,	// (0x000037ae) bg_vkb2_func_pane_g1

0x18ed,	// (0x000037b6) bg_vkb2_func_pane_g2

0x18fd,	// (0x000037c6) bg_vkb2_func_pane_g3

0x18f5,	// (0x000037be) bg_vkb2_func_pane_g4

0x1905,	// (0x000037ce) bg_vkb2_func_pane_g5

0x190d,	// (0x000037d6) bg_vkb2_func_pane_g6

0x1915,	// (0x000037de) bg_vkb2_func_pane_g7

0x191d,	// (0x000037e6) bg_vkb2_func_pane_g8

0x18dd,	// (0x000037a6) bg_vkb2_func_pane_g9

0x0008,

0xfdf8,	// (0x00011cc1) bg_vkb2_func_pane_g

0x486a,	// (0x00006733) bg_vkb2_fuc_pane_cp01_ParamLimits

0x486a,	// (0x00006733) bg_vkb2_fuc_pane_cp01

0x73cf,	// (0x00009298) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x73cf,	// (0x00009298) vkb2_top_cell_right_wide_pane_g1

0x486a,	// (0x00006733) bg_vkb2_fuc_pane_cp02_ParamLimits

0x486a,	// (0x00006733) bg_vkb2_fuc_pane_cp02

0x7444,	// (0x0000930d) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7444,	// (0x0000930d) vkb2_top_cell_right_narrow_pane_g1

0xcb74,	// (0x0000ea3d) aid_touch_area_decrease_ParamLimits

0xcb74,	// (0x0000ea3d) aid_touch_area_decrease

0xcbae,	// (0x0000ea77) aid_touch_area_increase_ParamLimits

0xcbae,	// (0x0000ea77) aid_touch_area_increase

0xcbd6,	// (0x0000ea9f) aid_touch_area_mute_ParamLimits

0xcbd6,	// (0x0000ea9f) aid_touch_area_mute

0xcc06,	// (0x0000eacf) aid_touch_area_slider_ParamLimits

0xcc06,	// (0x0000eacf) aid_touch_area_slider

0xcc46,	// (0x0000eb0f) popup_slider_window_g4_ParamLimits

0xcc46,	// (0x0000eb0f) popup_slider_window_g4

0xcc6e,	// (0x0000eb37) popup_slider_window_g5_ParamLimits

0xcc6e,	// (0x0000eb37) popup_slider_window_g5

0xcca2,	// (0x0000eb6b) popup_slider_window_g6_ParamLimits

0xcca2,	// (0x0000eb6b) popup_slider_window_g6

0x6620,	// (0x000084e9) popup_slider_window_t2_ParamLimits

0x6620,	// (0x000084e9) popup_slider_window_t2

0x0001,

0xfcf4,	// (0x00011bbd) popup_slider_window_t_ParamLimits

0xfcf4,	// (0x00011bbd) popup_slider_window_t

0xccbe,	// (0x0000eb87) slider_pane_ParamLimits

0xccbe,	// (0x0000eb87) slider_pane

0x7a7c,	// (0x00009945) slider_pane_g1_ParamLimits

0x7a7c,	// (0x00009945) slider_pane_g1

0x7a90,	// (0x00009959) slider_pane_g2_ParamLimits

0x7a90,	// (0x00009959) slider_pane_g2

0x7aa6,	// (0x0000996f) slider_pane_g3_ParamLimits

0x7aa6,	// (0x0000996f) slider_pane_g3

0x0003,

0xfe0b,	// (0x00011cd4) slider_pane_g_ParamLimits

0xfe0b,	// (0x00011cd4) slider_pane_g

0xb450,	// (0x0000d319) popup_tb_float_extension_window_ParamLimits

0xb450,	// (0x0000d319) popup_tb_float_extension_window

0x7ad2,	// (0x0000999b) aid_size_cell_tb_float_ext

0xe31d,	// (0x000101e6) bg_popup_sub_window_cp28

0x7ade,	// (0x000099a7) grid_tb_float_ext_pane

0x7aea,	// (0x000099b3) cell_tb_float_ext_pane_ParamLimits

0x7aea,	// (0x000099b3) cell_tb_float_ext_pane

0x7b06,	// (0x000099cf) cell_tb_float_ext_pane_g1

0x7b0f,	// (0x000099d8) grid_highlight_pane_cp12

0xc3ee,	// (0x0000e2b7) cell_last_hwr_side_pane_ParamLimits

0xc3ee,	// (0x0000e2b7) cell_last_hwr_side_pane

0x4809,	// (0x000066d2) cell_last_hwr_side_pane_g1

0x7b18,	// (0x000099e1) cell_last_hwr_side_pane_g2

0x0001,

0xfe14,	// (0x00011cdd) cell_last_hwr_side_pane_g

0xd59c,	// (0x0000f465) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd59c,	// (0x0000f465) vkb2_area_bottom_space_btn_pane

0x4cae,	// (0x00006b77) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x752b,	// (0x000093f4) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7a43,	// (0x0000990c) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7b21,	// (0x000099ea) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7b21,	// (0x000099ea) vkb2_area_bottom_space_btn_pane_g1

0x7b5b,	// (0x00009a24) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7b5b,	// (0x00009a24) vkb2_area_bottom_space_btn_pane_g2

0x7b91,	// (0x00009a5a) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7b91,	// (0x00009a5a) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe19,	// (0x00011ce2) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe19,	// (0x00011ce2) vkb2_area_bottom_space_btn_pane_g

0x492f,	// (0x000067f8) cel_fep_hwr_func_pane_ParamLimits

0x492f,	// (0x000067f8) cel_fep_hwr_func_pane

0xc3c3,	// (0x0000e28c) cell_hwr_side_button_pane_ParamLimits

0xc3c3,	// (0x0000e28c) cell_hwr_side_button_pane

0x6955,	// (0x0000881e) aid_area_touch_clock_ParamLimits

0xe7a9,	// (0x00010672) bg_uniindi_top_pane_ParamLimits

0x6969,	// (0x00008832) uniindi_top_pane_g1_ParamLimits

0x697f,	// (0x00008848) uniindi_top_pane_g2_ParamLimits

0x698b,	// (0x00008854) uniindi_top_pane_g3_ParamLimits

0x699c,	// (0x00008865) uniindi_top_pane_g4_ParamLimits

0xfd2c,	// (0x00011bf5) uniindi_top_pane_g_ParamLimits

0x69a9,	// (0x00008872) uniindi_top_pane_t1_ParamLimits

0xe7a9,	// (0x00010672) bg_vkb2_func_pane_cp01_ParamLimits

0xe7a9,	// (0x00010672) bg_vkb2_func_pane_cp01

0x7bdb,	// (0x00009aa4) cel_fep_hwr_func_pane_g1_ParamLimits

0x7bdb,	// (0x00009aa4) cel_fep_hwr_func_pane_g1

0xe7a9,	// (0x00010672) bg_vkb2_func_pane_cp02_ParamLimits

0xe7a9,	// (0x00010672) bg_vkb2_func_pane_cp02

0x7bdb,	// (0x00009aa4) cell_hwr_side_button_pane_g1_ParamLimits

0x7bdb,	// (0x00009aa4) cell_hwr_side_button_pane_g1

0x16b8,	// (0x00003581) status_pane_g4_ParamLimits

0x16b8,	// (0x00003581) status_pane_g4

0x16d2,	// (0x0000359b) status_pane_t1

0x45a8,	// (0x00006471) form2_midp_gauge_slider_cont_pane

0x45b0,	// (0x00006479) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc309,	// (0x0000e1d2) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc31b,	// (0x0000e1e4) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf8,	// (0x000119c1) form2_midp_gauge_slider_pane_t_ParamLimits

0x45e6,	// (0x000064af) form2_midp_slider_pane_ParamLimits

0x6eba,	// (0x00008d83) aid_size_cell_func_vkb2_ParamLimits

0x6eba,	// (0x00008d83) aid_size_cell_func_vkb2

0x7abe,	// (0x00009987) slider_pane_g4_ParamLimits

0x7abe,	// (0x00009987) slider_pane_g4

0xda3f,	// (0x0000f908) form2_midp_gauge_slider_pane_t2_cp01

0xda4d,	// (0x0000f916) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xda4d,	// (0x0000f916) form2_midp_gauge_slider_pane_t3_cp01

0x7c14,	// (0x00009add) form2_midp_slider_pane_cp01

0xe31d,	// (0x000101e6) navi_smil_pane

0x7c48,	// (0x00009b11) navi_smil_pane_g1

0x7c50,	// (0x00009b19) navi_smil_pane_t1

0x7c1d,	// (0x00009ae6) form2_midp_slider_pane_g1

0x7c26,	// (0x00009aef) form2_midp_slider_pane_g2

0x7c2e,	// (0x00009af7) form2_midp_slider_pane_g3

0x7c1d,	// (0x00009ae6) form2_midp_slider_pane_g4

0xda6a,	// (0x0000f933) form2_midp_slider_pane_g5

0x0004,

0xfe22,	// (0x00011ceb) form2_midp_slider_pane_g

0x7bcb,	// (0x00009a94) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7bcb,	// (0x00009a94) vkb2_area_bottom_space_btn_pane_g4

0xb637,	// (0x0000d500) lc0_navi_pane_ParamLimits

0xb637,	// (0x0000d500) lc0_navi_pane

0xb6a7,	// (0x0000d570) lc0_stat_indi_pane_ParamLimits

0xb6a7,	// (0x0000d570) lc0_stat_indi_pane

0xb6bc,	// (0x0000d585) ls0_title_pane_ParamLimits

0xb6bc,	// (0x0000d585) ls0_title_pane

0xed11,	// (0x00010bda) bg_popup_sub_pane_cp14_ParamLimits

0x693c,	// (0x00008805) list_uniindi_pane_ParamLimits

0x6948,	// (0x00008811) uniindi_top_pane_ParamLimits

0x69e7,	// (0x000088b0) list_single_uniindi_pane_g1_ParamLimits

0x69fa,	// (0x000088c3) list_single_uniindi_pane_t1_ParamLimits

0xda73,	// (0x0000f93c) lc0_stat_clock_pane_ParamLimits

0xda73,	// (0x0000f93c) lc0_stat_clock_pane

0xda80,	// (0x0000f949) lc0_stat_indi_pane_g1_ParamLimits

0xda80,	// (0x0000f949) lc0_stat_indi_pane_g1

0xda8d,	// (0x0000f956) lc0_stat_indi_pane_g2_ParamLimits

0xda8d,	// (0x0000f956) lc0_stat_indi_pane_g2

0x0001,

0xfe2d,	// (0x00011cf6) lc0_stat_indi_pane_g_ParamLimits

0xfe2d,	// (0x00011cf6) lc0_stat_indi_pane_g

0xda9a,	// (0x0000f963) lc0_uni_indicator_pane_ParamLimits

0xda9a,	// (0x0000f963) lc0_uni_indicator_pane

0xdaa7,	// (0x0000f970) ls0_title_pane_g1_ParamLimits

0xdaa7,	// (0x0000f970) ls0_title_pane_g1

0xdabb,	// (0x0000f984) ls0_title_pane_t1_ParamLimits

0xdabb,	// (0x0000f984) ls0_title_pane_t1

0xdae9,	// (0x0000f9b2) lc0_uni_indicator_pane_g1_ParamLimits

0xdae9,	// (0x0000f9b2) lc0_uni_indicator_pane_g1

0x7cef,	// (0x00009bb8) lc0_stat_clock_pane_t1

0xe31d,	// (0x000101e6) main_ai5_pane

0x7cfd,	// (0x00009bc6) ai5_sk_pane_ParamLimits

0x7cfd,	// (0x00009bc6) ai5_sk_pane

0xdb08,	// (0x0000f9d1) cell_ai5_widget_pane_ParamLimits

0xdb08,	// (0x0000f9d1) cell_ai5_widget_pane

0x82a6,	// (0x0000a16f) aid_size_cell_widget_grid

0x82bc,	// (0x0000a185) bg_ai5_widget_pane_ParamLimits

0x82bc,	// (0x0000a185) bg_ai5_widget_pane

0x8326,	// (0x0000a1ef) cell_ai5_widget_pane_g2

0x8336,	// (0x0000a1ff) cell_ai5_widget_pane_g3

0x8355,	// (0x0000a21e) cell_ai5_widget_pane_g4

0x8361,	// (0x0000a22a) cell_ai5_widget_pane_g5

0xde5f,	// (0x0000fd28) cell_ai5_widget_pane_g6

0xde6b,	// (0x0000fd34) cell_ai5_widget_pane_g7

0x83c1,	// (0x0000a28a) cell_ai5_widget_pane_t1_ParamLimits

0x83c1,	// (0x0000a28a) cell_ai5_widget_pane_t1

0x83de,	// (0x0000a2a7) cell_ai5_widget_pane_t2_ParamLimits

0x83de,	// (0x0000a2a7) cell_ai5_widget_pane_t2

0x83f6,	// (0x0000a2bf) cell_ai5_widget_pane_t3_ParamLimits

0x83f6,	// (0x0000a2bf) cell_ai5_widget_pane_t3

0x840e,	// (0x0000a2d7) cell_ai5_widget_pane_t4_ParamLimits

0x840e,	// (0x0000a2d7) cell_ai5_widget_pane_t4

0x8428,	// (0x0000a2f1) cell_ai5_widget_pane_t5_ParamLimits

0x8428,	// (0x0000a2f1) cell_ai5_widget_pane_t5

0x8447,	// (0x0000a310) cell_ai5_widget_pane_t6_ParamLimits

0x8447,	// (0x0000a310) cell_ai5_widget_pane_t6

0x8459,	// (0x0000a322) cell_ai5_widget_pane_t7_ParamLimits

0x8459,	// (0x0000a322) cell_ai5_widget_pane_t7

0x8472,	// (0x0000a33b) cell_ai5_widget_pane_t8_ParamLimits

0x8472,	// (0x0000a33b) cell_ai5_widget_pane_t8

0x0009,

0xfe47,	// (0x00011d10) cell_ai5_widget_pane_t_ParamLimits

0xfe47,	// (0x00011d10) cell_ai5_widget_pane_t

0x84be,	// (0x0000a387) grid_ai5_widget_pane

0xed11,	// (0x00010bda) highlight_cell_ai5_widget_pane_ParamLimits

0xed11,	// (0x00010bda) highlight_cell_ai5_widget_pane

0xde77,	// (0x0000fd40) ai5_sk_left_pane

0xde81,	// (0x0000fd4a) ai5_sk_middle_pane

0xde8b,	// (0x0000fd54) ai5_sk_right_pane

0x84f4,	// (0x0000a3bd) bg_ai5_widget_pane_g1_ParamLimits

0x84f4,	// (0x0000a3bd) bg_ai5_widget_pane_g1

0x8500,	// (0x0000a3c9) bg_ai5_widget_pane_g2_ParamLimits

0x8500,	// (0x0000a3c9) bg_ai5_widget_pane_g2

0x850c,	// (0x0000a3d5) bg_ai5_widget_pane_g3_ParamLimits

0x850c,	// (0x0000a3d5) bg_ai5_widget_pane_g3

0x8518,	// (0x0000a3e1) bg_ai5_widget_pane_g4_ParamLimits

0x8518,	// (0x0000a3e1) bg_ai5_widget_pane_g4

0x8524,	// (0x0000a3ed) bg_ai5_widget_pane_g5_ParamLimits

0x8524,	// (0x0000a3ed) bg_ai5_widget_pane_g5

0x8530,	// (0x0000a3f9) bg_ai5_widget_pane_g6_ParamLimits

0x8530,	// (0x0000a3f9) bg_ai5_widget_pane_g6

0x853c,	// (0x0000a405) bg_ai5_widget_pane_g7_ParamLimits

0x853c,	// (0x0000a405) bg_ai5_widget_pane_g7

0x8548,	// (0x0000a411) bg_ai5_widget_pane_g8_ParamLimits

0x8548,	// (0x0000a411) bg_ai5_widget_pane_g8

0x8554,	// (0x0000a41d) bg_ai5_widget_pane_g9_ParamLimits

0x8554,	// (0x0000a41d) bg_ai5_widget_pane_g9

0x0008,

0xfe5c,	// (0x00011d25) bg_ai5_widget_pane_g_ParamLimits

0xfe5c,	// (0x00011d25) bg_ai5_widget_pane_g

0x858d,	// (0x0000a456) cell_shortcut_ai5_widget_pane_ParamLimits

0x858d,	// (0x0000a456) cell_shortcut_ai5_widget_pane

0x0779,	// (0x00002642) bg_cell_shortcut_ai5_widget_pane

0x85a0,	// (0x0000a469) cell_grid_ai5_widget_pane_g1

0x85a9,	// (0x0000a472) highlight_cell_shortcut_ai5_widget_pane

0x18ed,	// (0x000037b6) ai5_sk_left_pane_g1

0x85b1,	// (0x0000a47a) ai5_sk_left_pane_g2

0x85b9,	// (0x0000a482) ai5_sk_left_pane_g3

0x85c1,	// (0x0000a48a) ai5_sk_left_pane_g4

0x0003,

0xfe6f,	// (0x00011d38) ai5_sk_left_pane_g

0x85c9,	// (0x0000a492) ai5_sk_left_pane_t1

0x18e5,	// (0x000037ae) ai5_sk_right_pane_g1

0x85d7,	// (0x0000a4a0) ai5_sk_right_pane_g2

0x85df,	// (0x0000a4a8) ai5_sk_right_pane_g3

0x85e7,	// (0x0000a4b0) ai5_sk_right_pane_g4

0x0003,

0xfe78,	// (0x00011d41) ai5_sk_right_pane_g

0x85ef,	// (0x0000a4b8) ai5_sk_right_pane_t1

0x18e5,	// (0x000037ae) ai5_sk_middle_pane_g1

0x18ed,	// (0x000037b6) ai5_sk_middle_pane_g2

0x1905,	// (0x000037ce) ai5_sk_middle_pane_g3

0x85df,	// (0x0000a4a8) ai5_sk_middle_pane_g4

0x85b9,	// (0x0000a482) ai5_sk_middle_pane_g5

0x85fd,	// (0x0000a4c6) ai5_sk_middle_pane_g6

0xde95,	// (0x0000fd5e) ai5_sk_middle_pane_g7

0x0006,

0xfe81,	// (0x00011d4a) ai5_sk_middle_pane_g

0xb521,	// (0x0000d3ea) aid_touch_area_size_lc0_ParamLimits

0xb521,	// (0x0000d3ea) aid_touch_area_size_lc0

0x5085,	// (0x00006f4e) cell_hwr_candidate_pane_t1_ParamLimits

0x136f,	// (0x00003238) aid_touch_navi_pane

0xb7c7,	// (0x0000d690) status_dt_navi_pane_ParamLimits

0xb7c7,	// (0x0000d690) status_dt_navi_pane

0xb7df,	// (0x0000d6a8) status_dt_sta_pane_ParamLimits

0xb7df,	// (0x0000d6a8) status_dt_sta_pane

0xde9d,	// (0x0000fd66) dt_sta_controll_pane

0xdeaa,	// (0x0000fd73) dt_sta_indi_pane

0xdeb7,	// (0x0000fd80) dt_sta_title_pane

0xe7a9,	// (0x00010672) bg_dt_sta_indi_pane_ParamLimits

0xe7a9,	// (0x00010672) bg_dt_sta_indi_pane

0xdec9,	// (0x0000fd92) dt_sta_battery_pane

0xded1,	// (0x0000fd9a) dt_sta_indi_pane_g1

0xdeda,	// (0x0000fda3) dt_sta_indi_pane_g2

0xdee3,	// (0x0000fdac) dt_sta_indi_pane_g3

0x0002,

0xfe90,	// (0x00011d59) dt_sta_indi_pane_g

0xdeec,	// (0x0000fdb5) dt_sta_signal_pane

0xed11,	// (0x00010bda) bg_dt_sta_title_pane_ParamLimits

0xed11,	// (0x00010bda) bg_dt_sta_title_pane

0xdef5,	// (0x0000fdbe) dt_sta_title_pane_g1

0xdefd,	// (0x0000fdc6) dt_sta_title_pane_t1_ParamLimits

0xdefd,	// (0x0000fdc6) dt_sta_title_pane_t1

0xe31d,	// (0x000101e6) bg_dt_sta_control_pane

0xdf12,	// (0x0000fddb) dt_sta_controll_pane_g1

0xdf1b,	// (0x0000fde4) bg_dt_sta_title_pane_g1

0xdf24,	// (0x0000fded) bg_dt_sta_title_pane_g2

0xdf2d,	// (0x0000fdf6) bg_dt_sta_title_pane_g3

0x0002,

0xfe97,	// (0x00011d60) bg_dt_sta_title_pane_g

0x4809,	// (0x000066d2) bg_dt_sta_indi_pane_g1

0x86ab,	// (0x0000a574) dt_sta_signal_pane_g1

0x86b3,	// (0x0000a57c) dt_sta_signal_pane_g2

0x0001,

0xfe9e,	// (0x00011d67) dt_sta_signal_pane_g

0x86bb,	// (0x0000a584) dt_sta_battery_pane_g1

0x86c4,	// (0x0000a58d) dt_sta_battery_pane_t1

0x4809,	// (0x000066d2) bg_dt_sta_control_pane_g1

0x00a7,	// (0x00001f70) fep_china_uni_eep_pane

0x00af,	// (0x00001f78) fep_china_uni_entry_pane_ParamLimits

0x00bf,	// (0x00001f88) popup_fep_china_uni_window_g1_ParamLimits

0x00cf,	// (0x00001f98) popup_fep_china_uni_window_g2_ParamLimits

0x00cf,	// (0x00001f98) popup_fep_china_uni_window_g2

0x0001,

0xf71e,	// (0x000115e7) popup_fep_china_uni_window_g_ParamLimits

0xf71e,	// (0x000115e7) popup_fep_china_uni_window_g

0x86d3,	// (0x0000a59c) fep_china_uni_eep_pane_g1

0x86db,	// (0x0000a5a4) fep_china_uni_eep_pane_t1

0x7c3f,	// (0x00009b08) aid_touch_area_size_smil_player

0x14c7,	// (0x00003390) lc0_clock_pane

0x16c6,	// (0x0000358f) status_pane_g5_ParamLimits

0x16c6,	// (0x0000358f) status_pane_g5

0xaf76,	// (0x0000ce3f) popup_keymap_window

0x1684,	// (0x0000354d) status_icon_pane

0x8336,	// (0x0000a1ff) cell_ai5_widget_pane_g3_ParamLimits

0x8355,	// (0x0000a21e) cell_ai5_widget_pane_g4_ParamLimits

0x8361,	// (0x0000a22a) cell_ai5_widget_pane_g5_ParamLimits

0x8385,	// (0x0000a24e) cell_ai5_widget_pane_g8_ParamLimits

0x8385,	// (0x0000a24e) cell_ai5_widget_pane_g8

0x8399,	// (0x0000a262) cell_ai5_widget_pane_g9_ParamLimits

0x8399,	// (0x0000a262) cell_ai5_widget_pane_g9

0x83ad,	// (0x0000a276) cell_ai5_widget_pane_g10_ParamLimits

0x83ad,	// (0x0000a276) cell_ai5_widget_pane_g10

0x86ea,	// (0x0000a5b3) status_icon_pane_g1

0xe31d,	// (0x000101e6) bg_popup_sub_pane_cp13

0x86f2,	// (0x0000a5bb) popup_keymap_window_t1

0xac69,	// (0x0000cb32) control_pane_g6_ParamLimits

0xac69,	// (0x0000cb32) control_pane_g6

0xac76,	// (0x0000cb3f) control_pane_g7_ParamLimits

0xac76,	// (0x0000cb3f) control_pane_g7

0xac83,	// (0x0000cb4c) control_pane_g8_ParamLimits

0xac83,	// (0x0000cb4c) control_pane_g8

0xde9d,	// (0x0000fd66) dt_sta_controll_pane_ParamLimits

0xdeaa,	// (0x0000fd73) dt_sta_indi_pane_ParamLimits

0xdeb7,	// (0x0000fd80) dt_sta_title_pane_ParamLimits

0xebcd,	// (0x00010a96) aid_size_touch_scroll_bar_cale

0xe4c2,	// (0x0001038b) popup_discreet_window_ParamLimits

0xe4c2,	// (0x0001038b) popup_discreet_window

0x9dc6,	// (0x0000bc8f) popup_sk_window

0x2113,	// (0x00003fdc) bg_popup_sub_pane_cp28_ParamLimits

0x2113,	// (0x00003fdc) bg_popup_sub_pane_cp28

0x8700,	// (0x0000a5c9) popup_discreet_window_g1_ParamLimits

0x8700,	// (0x0000a5c9) popup_discreet_window_g1

0x8720,	// (0x0000a5e9) popup_discreet_window_t1_ParamLimits

0x8720,	// (0x0000a5e9) popup_discreet_window_t1

0x873e,	// (0x0000a607) popup_discreet_window_t2_ParamLimits

0x873e,	// (0x0000a607) popup_discreet_window_t2

0x0002,

0xfea3,	// (0x00011d6c) popup_discreet_window_t_ParamLimits

0xfea3,	// (0x00011d6c) popup_discreet_window_t

0x8790,	// (0x0000a659) popup_sk_window_g1

0x879a,	// (0x0000a663) popup_sk_window_g2

0x0001,

0xfeaa,	// (0x00011d73) popup_sk_window_g

0x87a4,	// (0x0000a66d) popup_sk_window_t1

0x87b4,	// (0x0000a67d) popup_sk_window_t1_copy1

0x8326,	// (0x0000a1ef) cell_ai5_widget_pane_g2_ParamLimits

0x8484,	// (0x0000a34d) cell_ai5_widget_pane_t9_ParamLimits

0x8484,	// (0x0000a34d) cell_ai5_widget_pane_t9

0xe31d,	// (0x000101e6) main_fep_fshwr2_pane

0xdf36,	// (0x0000fdff) aid_fshwr2_btn_pane

0xdf45,	// (0x0000fe0e) aid_fshwr2_syb_pane

0xdf57,	// (0x0000fe20) aid_fshwr2_txt_pane

0xdf66,	// (0x0000fe2f) fshwr2_func_candi_pane

0xdf77,	// (0x0000fe40) fshwr2_hwr_syb_pane

0xdf92,	// (0x0000fe5b) fshwr2_icf_pane

0xe31d,	// (0x000101e6) fshwr2_icf_bg_pane

0xdfa8,	// (0x0000fe71) fshwr2_icf_pane_t1_ParamLimits

0xdfa8,	// (0x0000fe71) fshwr2_icf_pane_t1

0x4809,	// (0x000066d2) fshwr2_func_candi_pane_g1

0x8853,	// (0x0000a71c) fshwr2_func_candi_row_pane_ParamLimits

0x8853,	// (0x0000a71c) fshwr2_func_candi_row_pane

0xdfc0,	// (0x0000fe89) cell_fshwr2_syb_pane_ParamLimits

0xdfc0,	// (0x0000fe89) cell_fshwr2_syb_pane

0x4cae,	// (0x00006b77) fshwr2_hwr_syb_pane_g1_ParamLimits

0x4cae,	// (0x00006b77) fshwr2_hwr_syb_pane_g1

0xe31d,	// (0x000101e6) bg_popup_call_pane_cp01

0x887e,	// (0x0000a747) fshwr2_func_candi_cell_pane_ParamLimits

0x887e,	// (0x0000a747) fshwr2_func_candi_cell_pane

0x88b0,	// (0x0000a779) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x88b0,	// (0x0000a779) fshwr2_func_candi_cell_bg_pane

0x88ca,	// (0x0000a793) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x88ca,	// (0x0000a793) fshwr2_func_candi_cell_pane_g1

0x88ea,	// (0x0000a7b3) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x88ea,	// (0x0000a7b3) fshwr2_func_candi_cell_pane_t1

0xe31d,	// (0x000101e6) bg_button_pane_cp08

0x0779,	// (0x00002642) cell_fshwr2_syb_bg_pane

0xdfd9,	// (0x0000fea2) cell_fshwr2_syb_bg_pane_g1

0xdfe1,	// (0x0000feaa) cell_fshwr2_syb_bg_pane_t1

0xed11,	// (0x00010bda) main_tmo_pane

0xbd88,	// (0x0000dc51) uni_indicator_pane_g1_ParamLimits

0xbd9d,	// (0x0000dc66) uni_indicator_pane_g2_ParamLimits

0xbdb2,	// (0x0000dc7b) uni_indicator_pane_g3_ParamLimits

0xbdc8,	// (0x0000dc91) uni_indicator_pane_g4_ParamLimits

0xbdc8,	// (0x0000dc91) uni_indicator_pane_g4

0xbddc,	// (0x0000dca5) uni_indicator_pane_g5_ParamLimits

0xbddc,	// (0x0000dca5) uni_indicator_pane_g5

0xbdf0,	// (0x0000dcb9) uni_indicator_pane_g6_ParamLimits

0xbdf0,	// (0x0000dcb9) uni_indicator_pane_g6

0xf916,	// (0x000117df) uni_indicator_pane_g_ParamLimits

0xcb44,	// (0x0000ea0d) popup_tmo_note_window_ParamLimits

0xcb44,	// (0x0000ea0d) popup_tmo_note_window

0xed11,	// (0x00010bda) fshwr2_bg_pane

0x88db,	// (0x0000a7a4) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x88db,	// (0x0000a7a4) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeaf,	// (0x00011d78) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeaf,	// (0x00011d78) fshwr2_func_candi_cell_pane_g

0x4809,	// (0x000066d2) bg_popup_window_pane_cp01

0x8914,	// (0x0000a7dd) bg_popup_window_pane_g1_cp01

0x891d,	// (0x0000a7e6) bg_popup_window_pane_cp22_ParamLimits

0x891d,	// (0x0000a7e6) bg_popup_window_pane_cp22

0x892b,	// (0x0000a7f4) listscroll_tmo_link_pane_ParamLimits

0x892b,	// (0x0000a7f4) listscroll_tmo_link_pane

0x896b,	// (0x0000a834) popup_tmo_note_window_g1_ParamLimits

0x896b,	// (0x0000a834) popup_tmo_note_window_g1

0x8978,	// (0x0000a841) tmo_note_info_pane_ParamLimits

0x8978,	// (0x0000a841) tmo_note_info_pane

0xdff0,	// (0x0000feb9) list_tmo_note_info_pane_g1_ParamLimits

0xdff0,	// (0x0000feb9) list_tmo_note_info_pane_g1

0x89a9,	// (0x0000a872) list_tmo_note_info_pane_g2_ParamLimits

0x89a9,	// (0x0000a872) list_tmo_note_info_pane_g2

0x0001,

0xfeb4,	// (0x00011d7d) list_tmo_note_info_pane_g_ParamLimits

0xfeb4,	// (0x00011d7d) list_tmo_note_info_pane_g

0x89c5,	// (0x0000a88e) list_tmo_note_info_text_pane_ParamLimits

0x89c5,	// (0x0000a88e) list_tmo_note_info_text_pane

0x8a4a,	// (0x0000a913) list_tmo_link_pane

0x8a57,	// (0x0000a920) scroll_pane_cp20

0x8a64,	// (0x0000a92d) list_single_tmo_link_pane_ParamLimits

0x8a64,	// (0x0000a92d) list_single_tmo_link_pane

0x8a74,	// (0x0000a93d) list_single_tmo_link_pane_t1

0x8a82,	// (0x0000a94b) list_tmo_note_info_text_pane_t1_ParamLimits

0x8a82,	// (0x0000a94b) list_tmo_note_info_text_pane_t1

0xa74c,	// (0x0000c615) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa74c,	// (0x0000c615) aid_size_touch_scroll_bar_cp01

0xa67b,	// (0x0000c544) aid_size_touch_slider_marker

0x9db6,	// (0x0000bc7f) popup_settings_window_ParamLimits

0x9db6,	// (0x0000bc7f) popup_settings_window

0x0d16,	// (0x00002bdf) popup_candi_list_indi_window

0x136f,	// (0x00003238) aid_touch_navi_pane_ParamLimits

0x66b6,	// (0x0000857f) rs_clock_indi_pane

0x66bf,	// (0x00008588) sctrl_sk_bottom_pane_ParamLimits

0x66d0,	// (0x00008599) sctrl_sk_top_pane_ParamLimits

0x6f14,	// (0x00008ddd) popup_fep_tooltip_window

0x82a6,	// (0x0000a16f) aid_size_cell_widget_grid_ParamLimits

0x831a,	// (0x0000a1e3) cell_ai5_widget_pane_g1_ParamLimits

0x831a,	// (0x0000a1e3) cell_ai5_widget_pane_g1

0xde5f,	// (0x0000fd28) cell_ai5_widget_pane_g6_ParamLimits

0xde6b,	// (0x0000fd34) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe32,	// (0x00011cfb) cell_ai5_widget_pane_g_ParamLimits

0xfe32,	// (0x00011cfb) cell_ai5_widget_pane_g

0x84a8,	// (0x0000a371) cell_ai5_widget_pane_t10_ParamLimits

0x84a8,	// (0x0000a371) cell_ai5_widget_pane_t10

0x84be,	// (0x0000a387) grid_ai5_widget_pane_ParamLimits

0x8560,	// (0x0000a429) cell_contacts_ai5_widget_pane_ParamLimits

0x8560,	// (0x0000a429) cell_contacts_ai5_widget_pane

0x8753,	// (0x0000a61c) popup_discreet_window_t3_ParamLimits

0x8753,	// (0x0000a61c) popup_discreet_window_t3

0x8824,	// (0x0000a6ed) popup_fshwr2_char_preview_window_ParamLimits

0x8824,	// (0x0000a6ed) popup_fshwr2_char_preview_window

0xe007,	// (0x0000fed0) tmo_note_info_pane_t1

0xe01c,	// (0x0000fee5) tmo_note_info_pane_t2

0xe035,	// (0x0000fefe) tmo_note_info_pane_t3

0x8a26,	// (0x0000a8ef) tmo_note_info_pane_t4

0x8a38,	// (0x0000a901) tmo_note_info_pane_t5

0x0004,

0xfeb9,	// (0x00011d82) tmo_note_info_pane_t

0x8a4a,	// (0x0000a913) list_tmo_link_pane_ParamLimits

0x8a57,	// (0x0000a920) scroll_pane_cp20_ParamLimits

0xe31d,	// (0x000101e6) bg_popup_fep_char_preview_window_cp01

0x8a9b,	// (0x0000a964) popup_fshwr2_char_preview_window_t1

0x8aa9,	// (0x0000a972) popup_candi_list_indi_window_g1

0x8ab2,	// (0x0000a97b) bg_cell_contacts_ai5_widget_pane

0x8abe,	// (0x0000a987) cell_contacts_ai5_widget_pane_g1

0x8ad1,	// (0x0000a99a) cell_contacts_ai5_widget_pane_g2

0x8add,	// (0x0000a9a6) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec4,	// (0x00011d8d) cell_contacts_ai5_widget_pane_g

0x8aef,	// (0x0000a9b8) cell_contacts_ai5_widget_pane_t1

0xed11,	// (0x00010bda) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe0af,	// (0x0000ff78) settings_container_pane

0x0779,	// (0x00002642) listscroll_set_pane_copy1

0x3c14,	// (0x00005add) scroll_pane_cp121_copy1

0x8b75,	// (0x0000aa3e) set_content_pane_copy1

0xe0bb,	// (0x0000ff84) aid_height_set_list_copy1_ParamLimits

0xe0bb,	// (0x0000ff84) aid_height_set_list_copy1

0x3110,	// (0x00004fd9) aid_size_parent_copy1_ParamLimits

0x3110,	// (0x00004fd9) aid_size_parent_copy1

0xe0c7,	// (0x0000ff90) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe0c7,	// (0x0000ff90) button_value_adjust_pane_cp6_copy1

0x0cee,	// (0x00002bb7) list_highlight_pane_cp2_copy1_ParamLimits

0x0cee,	// (0x00002bb7) list_highlight_pane_cp2_copy1

0xe0db,	// (0x0000ffa4) list_set_pane_copy1_ParamLimits

0xe0db,	// (0x0000ffa4) list_set_pane_copy1

0xe04a,	// (0x0000ff13) main_pane_set_t1_copy1_ParamLimits

0xe04a,	// (0x0000ff13) main_pane_set_t1_copy1

0xe084,	// (0x0000ff4d) main_pane_set_t2_copy1_ParamLimits

0xe084,	// (0x0000ff4d) main_pane_set_t2_copy1

0xe1a2,	// (0x0001006b) main_pane_set_t3_copy1

0xe1b0,	// (0x00010079) main_pane_set_t4_copy1

0xe0a3,	// (0x0000ff6c) set_content_pane_g1_copy1_ParamLimits

0xe0a3,	// (0x0000ff6c) set_content_pane_g1_copy1

0xe1be,	// (0x00010087) setting_code_pane_copy1

0x8c88,	// (0x0000ab51) setting_slider_graphic_pane_copy1

0x8c88,	// (0x0000ab51) setting_slider_pane_copy1

0x8c88,	// (0x0000ab51) setting_text_pane_copy1

0x8c88,	// (0x0000ab51) setting_volume_pane_copy1

0xe1be,	// (0x00010087) settings_code_pane_cp2_copy1

0xe1c6,	// (0x0001008f) settings_code_pane_cp_copy1_ParamLimits

0xe1c6,	// (0x0001008f) settings_code_pane_cp_copy1

0xe1da,	// (0x000100a3) volume_set_pane_copy1

0xe1e6,	// (0x000100af) volume_set_pane_g10_copy1

0xe1f2,	// (0x000100bb) volume_set_pane_g1_copy1

0xe1fc,	// (0x000100c5) volume_set_pane_g2_copy1

0xe206,	// (0x000100cf) volume_set_pane_g3_copy1

0xe210,	// (0x000100d9) volume_set_pane_g4_copy1

0xe21a,	// (0x000100e3) volume_set_pane_g5_copy1

0xe224,	// (0x000100ed) volume_set_pane_g6_copy1

0xe22e,	// (0x000100f7) volume_set_pane_g7_copy1

0xe238,	// (0x00010101) volume_set_pane_g8_copy1

0xe242,	// (0x0001010b) volume_set_pane_g9_copy1

0xe5d3,	// (0x0001049c) bg_set_opt_pane_cp_copy1_ParamLimits

0xe5d3,	// (0x0001049c) bg_set_opt_pane_cp_copy1

0x8d16,	// (0x0000abdf) setting_slider_pane_t1_copy1_ParamLimits

0x8d16,	// (0x0000abdf) setting_slider_pane_t1_copy1

0xe24c,	// (0x00010115) setting_slider_pane_t2_copy1_ParamLimits

0xe24c,	// (0x00010115) setting_slider_pane_t2_copy1

0xe266,	// (0x0001012f) setting_slider_pane_t3_copy1_ParamLimits

0xe266,	// (0x0001012f) setting_slider_pane_t3_copy1

0xe27e,	// (0x00010147) slider_set_pane_copy1_ParamLimits

0xe27e,	// (0x00010147) slider_set_pane_copy1

0xedfe,	// (0x00010cc7) set_opt_bg_pane_g1_copy2

0xee06,	// (0x00010ccf) set_opt_bg_pane_g2_copy2

0x8d7c,	// (0x0000ac45) set_opt_bg_pane_g3_copy2

0xee16,	// (0x00010cdf) set_opt_bg_pane_g4_copy2

0xee1e,	// (0x00010ce7) set_opt_bg_pane_g5_copy2

0xee26,	// (0x00010cef) set_opt_bg_pane_g6_copy2

0xe294,	// (0x0001015d) set_opt_bg_pane_g7_copy2

0x8d90,	// (0x0000ac59) set_opt_bg_pane_g8_copy2

0x8d9a,	// (0x0000ac63) set_opt_bg_pane_g9_copy2

0x8da4,	// (0x0000ac6d) aid_size_touch_slider_mark_copy1_ParamLimits

0x8da4,	// (0x0000ac6d) aid_size_touch_slider_mark_copy1

0x8db8,	// (0x0000ac81) slider_set_pane_g1_copy1

0x8dc1,	// (0x0000ac8a) slider_set_pane_g2_copy1

0x3077,	// (0x00004f40) slider_set_pane_g3_copy1_ParamLimits

0x3077,	// (0x00004f40) slider_set_pane_g3_copy1

0x308b,	// (0x00004f54) slider_set_pane_g4_copy1_ParamLimits

0x308b,	// (0x00004f54) slider_set_pane_g4_copy1

0x30a3,	// (0x00004f6c) slider_set_pane_g5_copy1_ParamLimits

0x30a3,	// (0x00004f6c) slider_set_pane_g5_copy1

0x3077,	// (0x00004f40) slider_set_pane_g6_copy1_ParamLimits

0x3077,	// (0x00004f40) slider_set_pane_g6_copy1

0xe29e,	// (0x00010167) slider_set_pane_g7_copy1_ParamLimits

0xe29e,	// (0x00010167) slider_set_pane_g7_copy1

0xe4a0,	// (0x00010369) bg_set_opt_pane_cp2_copy1

0x8ddf,	// (0x0000aca8) setting_slider_graphic_pane_g1_copy1

0xe2b4,	// (0x0001017d) setting_slider_graphic_pane_t1_copy1

0xe2c4,	// (0x0001018d) setting_slider_graphic_pane_t2_copy1

0xe2d4,	// (0x0001019d) slider_set_pane_cp_copy1

0x8e18,	// (0x0000ace1) input_focus_pane_cp1_copy1

0x8e21,	// (0x0000acea) list_set_text_pane_copy1

0x8e29,	// (0x0000acf2) setting_text_pane_g1_copy1

0xe681,	// (0x0001054a) set_text_pane_t1_copy1

0x8e18,	// (0x0000ace1) input_focus_pane_cp2_copy1

0x8e29,	// (0x0000acf2) setting_code_pane_g1_copy1

0xe2dc,	// (0x000101a5) setting_code_pane_t1_copy1

0xe2ea,	// (0x000101b3) list_set_graphic_pane_copy1

0xe4a0,	// (0x00010369) bg_set_opt_pane_cp4_copy1

0xaa9e,	// (0x0000c967) list_set_graphic_pane_g1_copy1_ParamLimits

0xaa9e,	// (0x0000c967) list_set_graphic_pane_g1_copy1

0xe2fc,	// (0x000101c5) list_set_graphic_pane_g2_copy1

0xaab6,	// (0x0000c97f) list_set_graphic_pane_t1_copy1_ParamLimits

0xaab6,	// (0x0000c97f) list_set_graphic_pane_t1_copy1

0x4809,	// (0x000066d2) rs_clock_indi_pane_g1

0x8e73,	// (0x0000ad3c) rs_clock_indi_pane_t1

0x8e81,	// (0x0000ad4a) rs_indi_pane

0x8e89,	// (0x0000ad52) rs_indi_pane_g1

0x8e92,	// (0x0000ad5b) rs_indi_pane_g2

0x8e9b,	// (0x0000ad64) rs_indi_pane_g3

0x0002,

0xfecb,	// (0x00011d94) rs_indi_pane_g

0x0779,	// (0x00002642) bg_popup_preview_window_pane_cp03

0x8ea4,	// (0x0000ad6d) popup_fep_tooltip_window_t1

0x5a7c,	// (0x00007945) popup_note2_window_g2_ParamLimits

0x5a7c,	// (0x00007945) popup_note2_window_g2

0x0001,

0xfc64,	// (0x00011b2d) popup_note2_window_g_ParamLimits

0xfc64,	// (0x00011b2d) popup_note2_window_g

0x608b,	// (0x00007f54) bg_popup_sub_pane_cp11_ParamLimits

0x6098,	// (0x00007f61) cell_ai3_links_pane_g1_ParamLimits

0x60af,	// (0x00007f78) cell_ai3_links_pane_t1

0xe681,	// (0x0001054a) set_text_pane_t1_copy1_ParamLimits

0xab2a,	// (0x0000c9f3) cell_graphic_popup_pane_cp2_ParamLimits

0xab2a,	// (0x0000c9f3) cell_graphic_popup_pane_cp2

0xe304,	// (0x000101cd) cell_graphic_popup_pane_g1_cp2

0xe9e0,	// (0x000108a9) cell_graphic_popup_pane_g2_cp2

0x8eba,	// (0x0000ad83) cell_graphic_popup_pane_g3_cp2

0x8ec2,	// (0x0000ad8b) cell_graphic_popup_pane_t2_cp2

0xe9f1,	// (0x000108ba) grid_highlight_pane_cp3_cp2

0xf272,	// (0x0001113b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xed11,	// (0x00010bda) main_tmo_pane_ParamLimits

0xcb38,	// (0x0000ea01) popup_tmo_big_image_note_window

0x830a,	// (0x0000a1d3) cell_ai5_widget_list_pane

0x8312,	// (0x0000a1db) cell_ai5_widget_lrg_icon_pane

0xe007,	// (0x0000fed0) tmo_note_info_pane_t1_ParamLimits

0xe01c,	// (0x0000fee5) tmo_note_info_pane_t2_ParamLimits

0xe035,	// (0x0000fefe) tmo_note_info_pane_t3_ParamLimits

0x8a26,	// (0x0000a8ef) tmo_note_info_pane_t4_ParamLimits

0x8a38,	// (0x0000a901) tmo_note_info_pane_t5_ParamLimits

0xfeb9,	// (0x00011d82) tmo_note_info_pane_t_ParamLimits

0xe0af,	// (0x0000ff78) settings_container_pane_ParamLimits

0x8e10,	// (0x0000acd9) indicator_popup_pane_cp5

0x8e10,	// (0x0000acd9) indicator_popup_pane_cp6

0xe2ea,	// (0x000101b3) list_set_graphic_pane_copy1_ParamLimits

0xe31d,	// (0x000101e6) bg_popup_window_pane_cp23

0x8ed0,	// (0x0000ad99) popup_tmo_big_image_note_window_g1

0x8edc,	// (0x0000ada5) popup_tmo_big_image_note_window_t1

0x8eec,	// (0x0000adb5) popup_tmo_big_image_note_window_t2

0x8efc,	// (0x0000adc5) popup_tmo_big_image_note_window_t3

0x0002,

0xfed2,	// (0x00011d9b) popup_tmo_big_image_note_window_t

0x8f0c,	// (0x0000add5) cell_ai5_widget_lrg_icon_pane_g1

0x8f14,	// (0x0000addd) cell_ai5_widget_lrg_icon_pane_t1

0x8f22,	// (0x0000adeb) cell_ai5_widget_list_row_pane_ParamLimits

0x8f22,	// (0x0000adeb) cell_ai5_widget_list_row_pane

0x8f3b,	// (0x0000ae04) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x8f3b,	// (0x0000ae04) cell_ai5_widget_list_row_pane_g1

0x8f48,	// (0x0000ae11) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x8f48,	// (0x0000ae11) cell_ai5_widget_list_row_pane_t1

0x8f60,	// (0x0000ae29) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x8f60,	// (0x0000ae29) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed9,	// (0x00011da2) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed9,	// (0x00011da2) cell_ai5_widget_list_row_pane_t

0xe31d,	// (0x000101e6) main_fep_vtchi_ss_pane

0x8f97,	// (0x0000ae60) popup_fep_char_pre_window

0x8f9f,	// (0x0000ae68) popup_fep_ituss_window

0x8fc0,	// (0x0000ae89) popup_fep_vkbss_window

0x8fe1,	// (0x0000aeaa) grid_vkbss_keypad_pane_ParamLimits

0x8fe1,	// (0x0000aeaa) grid_vkbss_keypad_pane

0x8ff1,	// (0x0000aeba) ituss_keypad_pane

0x900d,	// (0x0000aed6) aid_vkbss_key_offset_ParamLimits

0x900d,	// (0x0000aed6) aid_vkbss_key_offset

0x9019,	// (0x0000aee2) cell_vkbss_key_pane_ParamLimits

0x9019,	// (0x0000aee2) cell_vkbss_key_pane

0x902f,	// (0x0000aef8) bg_cell_vkbss_key_g1_ParamLimits

0x902f,	// (0x0000aef8) bg_cell_vkbss_key_g1

0x903b,	// (0x0000af04) cell_vkbss_key_3p_pane_ParamLimits

0x903b,	// (0x0000af04) cell_vkbss_key_3p_pane

0x9055,	// (0x0000af1e) cell_vkbss_key_g1_ParamLimits

0x9055,	// (0x0000af1e) cell_vkbss_key_g1

0x906f,	// (0x0000af38) cell_vkbss_key_t1_ParamLimits

0x906f,	// (0x0000af38) cell_vkbss_key_t1

0x909a,	// (0x0000af63) cell_ituss_key_pane_ParamLimits

0x909a,	// (0x0000af63) cell_ituss_key_pane

0x90ab,	// (0x0000af74) bg_cell_ituss_key_g1_ParamLimits

0x90ab,	// (0x0000af74) bg_cell_ituss_key_g1

0x90b7,	// (0x0000af80) cell_ituss_key_pane_g1_ParamLimits

0x90b7,	// (0x0000af80) cell_ituss_key_pane_g1

0x90cb,	// (0x0000af94) cell_ituss_key_pane_g2_ParamLimits

0x90cb,	// (0x0000af94) cell_ituss_key_pane_g2

0x0001,

0xfee0,	// (0x00011da9) cell_ituss_key_pane_g_ParamLimits

0xfee0,	// (0x00011da9) cell_ituss_key_pane_g

0x90fd,	// (0x0000afc6) cell_ituss_key_t1_ParamLimits

0x90fd,	// (0x0000afc6) cell_ituss_key_t1

0x9137,	// (0x0000b000) cell_ituss_key_t2_ParamLimits

0x9137,	// (0x0000b000) cell_ituss_key_t2

0x9168,	// (0x0000b031) cell_ituss_key_t3_ParamLimits

0x9168,	// (0x0000b031) cell_ituss_key_t3

0x9199,	// (0x0000b062) cell_ituss_key_t4_ParamLimits

0x9199,	// (0x0000b062) cell_ituss_key_t4

0x0003,

0xfee5,	// (0x00011dae) cell_ituss_key_t_ParamLimits

0xfee5,	// (0x00011dae) cell_ituss_key_t

0x91ca,	// (0x0000b093) cell_vkbss_key_3p_pane_g1

0x91d2,	// (0x0000b09b) cell_vkbss_key_3p_pane_g2

0x91da,	// (0x0000b0a3) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x00011db7) cell_vkbss_key_3p_pane_g

0xe31d,	// (0x000101e6) bg_popup_fep_char_preview_window_cp02

0x91e2,	// (0x0000b0ab) popup_fep_char_pre_window_t1

0xde55,	// (0x0000fd1e) main_ai5_sk_pane

0x8ab2,	// (0x0000a97b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x8abe,	// (0x0000a987) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8ad1,	// (0x0000a99a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8add,	// (0x0000a9a6) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec4,	// (0x00011d8d) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8aef,	// (0x0000a9b8) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xed11,	// (0x00010bda) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe30c,	// (0x000101d5) main_ai5_sk_pane_g1

0x1f4b,	// (0x00003e14) popup_query_code_window_g1

0x8fb5,	// (0x0000ae7e) popup_fep_vkb_icf_pane

0x8fcb,	// (0x0000ae94) popup_fep_vtchi_icf_pane

0xed11,	// (0x00010bda) bg_icf_pane

0x91fa,	// (0x0000b0c3) list_vkb_icf_pane

0xed11,	// (0x00010bda) bg_icf_pane_cp01

0x9206,	// (0x0000b0cf) vtchi_icf_list_pane

0x9217,	// (0x0000b0e0) list_vkb_icf_pane_t1_ParamLimits

0x9217,	// (0x0000b0e0) list_vkb_icf_pane_t1

0x922d,	// (0x0000b0f6) vtchi_icf_list_pane_t1_ParamLimits

0x922d,	// (0x0000b0f6) vtchi_icf_list_pane_t1

0x8f9f,	// (0x0000ae68) popup_fep_ituss_window_ParamLimits

0x8fcb,	// (0x0000ae94) popup_fep_vtchi_icf_pane_ParamLimits

0x8ff1,	// (0x0000aeba) ituss_keypad_pane_ParamLimits

0x9001,	// (0x0000aeca) ituss_sks_pane

0xed11,	// (0x00010bda) bg_icf_pane_ParamLimits

0x8f88,	// (0x0000ae51) icf_edit_indi_pane_ParamLimits

0x8f88,	// (0x0000ae51) icf_edit_indi_pane

0x91fa,	// (0x0000b0c3) list_vkb_icf_pane_ParamLimits

0xed11,	// (0x00010bda) bg_icf_pane_cp01_ParamLimits

0x8f88,	// (0x0000ae51) icf_edit_indi_pane_cp01_ParamLimits

0x8f88,	// (0x0000ae51) icf_edit_indi_pane_cp01

0x920e,	// (0x0000b0d7) vtchi_query_pane

0x4cae,	// (0x00006b77) icf_edit_indi_pane_g1_ParamLimits

0x4cae,	// (0x00006b77) icf_edit_indi_pane_g1

0x92af,	// (0x0000b178) icf_edit_indi_pane_g2_ParamLimits

0x92af,	// (0x0000b178) icf_edit_indi_pane_g2

0x0001,

0xff06,	// (0x00011dcf) icf_edit_indi_pane_g_ParamLimits

0xff06,	// (0x00011dcf) icf_edit_indi_pane_g

0x92be,	// (0x0000b187) icf_edit_indi_pane_t1

0x9245,	// (0x0000b10e) bg_input_focus_pane_cp042

0xebc4,	// (0x00010a8d) vtchi_button_pane

0x924e,	// (0x0000b117) vtchi_query_pane_t1

0x925c,	// (0x0000b125) vtchi_query_pane_t2

0x926a,	// (0x0000b133) vtchi_query_pane_t3

0x0002,

0xfef5,	// (0x00011dbe) vtchi_query_pane_t

0xe31d,	// (0x000101e6) bg_button_pane_cp13

0x9278,	// (0x0000b141) vtchi_button_pane_g1

0x9280,	// (0x0000b149) ituss_sks_pane_g1

0x928b,	// (0x0000b154) ituss_sks_pane_g2

0x0001,

0xfefc,	// (0x00011dc5) ituss_sks_pane_g

0x9293,	// (0x0000b15c) ituss_sks_pane_t1

0x92a1,	// (0x0000b16a) ituss_sks_pane_t2

0x0001,

0xff01,	// (0x00011dca) ituss_sks_pane_t

0x4212,	// (0x000060db) indicator_nsta_pane_cp_g1

0x421b,	// (0x000060e4) indicator_nsta_pane_cp_g2

0x4223,	// (0x000060ec) indicator_nsta_pane_cp_g3

0x422b,	// (0x000060f4) indicator_nsta_pane_cp_g4

0x4233,	// (0x000060fc) indicator_nsta_pane_cp_g5

0x423b,	// (0x00006104) indicator_nsta_pane_cp_g6

0x0005,

0xfaae,	// (0x00011977) indicator_nsta_pane_cp_g

0xd914,	// (0x0000f7dd) cell_graphic2_pane_t2_ParamLimits

0xd914,	// (0x0000f7dd) cell_graphic2_pane_t2

0x0001,

0xfdbb,	// (0x00011c84) cell_graphic2_pane_t_ParamLimits

0xfdbb,	// (0x00011c84) cell_graphic2_pane_t

0xd94a,	// (0x0000f813) cell_graphic2_control_pane_t1

0xa999,	// (0x0000c862) signal_pane_g3_ParamLimits

0xa999,	// (0x0000c862) signal_pane_g3

0xa9ad,	// (0x0000c876) signal_pane_g4_ParamLimits

0xa9ad,	// (0x0000c876) signal_pane_g4

0x8f72,	// (0x0000ae3b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x8f72,	// (0x0000ae3b) cell_ai5_widget_list_row_pane_t3

0x90eb,	// (0x0000afb4) cell_ituss_key_pane_t1_ParamLimits

0x90eb,	// (0x0000afb4) cell_ituss_key_pane_t1

0x1b99,	// (0x00003a62) form_field_data_wide_pane_vc_t2_ParamLimits

0x1b99,	// (0x00003a62) form_field_data_wide_pane_vc_t2

0x1bad,	// (0x00003a76) form_field_data_wide_pane_vc_t3_ParamLimits

0x1bad,	// (0x00003a76) form_field_data_wide_pane_vc_t3

0x0002,

0xf7fe,	// (0x000116c7) form_field_data_wide_pane_vc_t_ParamLimits

0xf7fe,	// (0x000116c7) form_field_data_wide_pane_vc_t

0x3ebd,	// (0x00005d86) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3ebd,	// (0x00005d86) form_field_slider_wide_pane_vc_t3

0x3f93,	// (0x00005e5c) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3f93,	// (0x00005e5c) form_field_popup_wide_pane_vc_t2

0x3faa,	// (0x00005e73) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3faa,	// (0x00005e73) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9d,	// (0x00011966) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9d,	// (0x00011966) form_field_popup_wide_pane_vc_t

0xdf36,	// (0x0000fdff) aid_fshwr2_btn_pane_ParamLimits

0xdf45,	// (0x0000fe0e) aid_fshwr2_syb_pane_ParamLimits

0xdf57,	// (0x0000fe20) aid_fshwr2_txt_pane_ParamLimits

0xed11,	// (0x00010bda) fshwr2_bg_pane_ParamLimits

0xdf66,	// (0x0000fe2f) fshwr2_func_candi_pane_ParamLimits

0xdf77,	// (0x0000fe40) fshwr2_hwr_syb_pane_ParamLimits

0xdf92,	// (0x0000fe5b) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Normal
