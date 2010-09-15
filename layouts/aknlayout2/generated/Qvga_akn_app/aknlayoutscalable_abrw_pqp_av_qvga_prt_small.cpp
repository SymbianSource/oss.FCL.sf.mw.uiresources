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

#include "aknlayoutscalable_abrw_pqp_av_qvga_prt_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0001e215 };

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
0x9e4f,	// (0x00028064) Screen

0x9e59,	// (0x0002806e) application_window_ParamLimits

0x9e59,	// (0x0002806e) application_window

0x4e61,	// (0x00023076) screen_g1

0x9ea2,	// (0x000280b7) area_bottom_pane_ParamLimits

0x9ea2,	// (0x000280b7) area_bottom_pane

0x4e6b,	// (0x00023080) area_top_pane_ParamLimits

0x4e6b,	// (0x00023080) area_top_pane

0x9f5a,	// (0x0002816f) main_pane_ParamLimits

0x9f5a,	// (0x0002816f) main_pane

0x4ee3,	// (0x000230f8) misc_graphics

0xb250,	// (0x00029465) battery_pane_ParamLimits

0xb250,	// (0x00029465) battery_pane

0x6a79,	// (0x00024c8e) bg_status_flat_pane_g8

0x6a81,	// (0x00024c96) bg_status_flat_pane_g9

0x615e,	// (0x00024373) context_pane_ParamLimits

0x615e,	// (0x00024373) context_pane

0xb388,	// (0x0002959d) navi_pane_ParamLimits

0xb388,	// (0x0002959d) navi_pane

0xb3f4,	// (0x00029609) signal_pane_ParamLimits

0xb3f4,	// (0x00029609) signal_pane

0x0008,

0xf84f,	// (0x0002da64) bg_status_flat_pane_g

0xb455,	// (0x0002966a) status_pane_g1_ParamLimits

0xb455,	// (0x0002966a) status_pane_g1

0xb461,	// (0x00029676) status_pane_g2_ParamLimits

0xb461,	// (0x00029676) status_pane_g2

0x61c4,	// (0x000243d9) status_pane_g3_ParamLimits

0x61c4,	// (0x000243d9) status_pane_g3

0x0004,

0xf77b,	// (0x0002d990) status_pane_g_ParamLimits

0xf77b,	// (0x0002d990) status_pane_g

0xb46d,	// (0x00029682) title_pane_ParamLimits

0xb46d,	// (0x00029682) title_pane

0xb4aa,	// (0x000296bf) uni_indicator_pane_ParamLimits

0xb4aa,	// (0x000296bf) uni_indicator_pane

0x60b5,	// (0x000242ca) bg_list_pane_ParamLimits

0x60b5,	// (0x000242ca) bg_list_pane

0xe0e3,	// (0x0002c2f8) find_pane

0xad4e,	// (0x00028f63) listscroll_app_pane_ParamLimits

0xad4e,	// (0x00028f63) listscroll_app_pane

0x60d5,	// (0x000242ea) listscroll_form_pane

0xe0eb,	// (0x0002c300) listscroll_gen_pane_ParamLimits

0xe0eb,	// (0x0002c300) listscroll_gen_pane

0xad5a,	// (0x00028f6f) listscroll_set_pane

0xa4c1,	// (0x000286d6) main_idle_act_pane

0x5ed3,	// (0x000240e8) main_idle_trad_pane

0x5ed3,	// (0x000240e8) main_list_empty_pane

0x56ae,	// (0x000238c3) main_midp_pane

0x60ef,	// (0x00024304) main_pane_g1_ParamLimits

0x60ef,	// (0x00024304) main_pane_g1

0xad70,	// (0x00028f85) popup_ai_message_window_ParamLimits

0xad70,	// (0x00028f85) popup_ai_message_window

0xae06,	// (0x0002901b) popup_fep_china_uni_window_ParamLimits

0xae06,	// (0x0002901b) popup_fep_china_uni_window

0xae44,	// (0x00029059) popup_fep_japan_candidate_window_ParamLimits

0xae44,	// (0x00029059) popup_fep_japan_candidate_window

0xae62,	// (0x00029077) popup_fep_japan_predictive_window_ParamLimits

0xae62,	// (0x00029077) popup_fep_japan_predictive_window

0xae8e,	// (0x000290a3) popup_find_window

0xae9b,	// (0x000290b0) popup_grid_graphic_window_ParamLimits

0xae9b,	// (0x000290b0) popup_grid_graphic_window

0xaeb9,	// (0x000290ce) popup_large_graphic_colour_window

0xaedb,	// (0x000290f0) popup_menu_window_ParamLimits

0xaedb,	// (0x000290f0) popup_menu_window

0xb013,	// (0x00029228) popup_note_image_window

0xb001,	// (0x00029216) popup_note_wait_window_ParamLimits

0xb001,	// (0x00029216) popup_note_wait_window

0xb001,	// (0x00029216) popup_note_window_ParamLimits

0xb001,	// (0x00029216) popup_note_window

0xb067,	// (0x0002927c) popup_query_code_window_ParamLimits

0xb067,	// (0x0002927c) popup_query_code_window

0xb079,	// (0x0002928e) popup_query_data_code_window_ParamLimits

0xb079,	// (0x0002928e) popup_query_data_code_window

0xb08e,	// (0x000292a3) popup_query_data_window_ParamLimits

0xb08e,	// (0x000292a3) popup_query_data_window

0xb0a4,	// (0x000292b9) popup_query_sat_info_window_ParamLimits

0xb0a4,	// (0x000292b9) popup_query_sat_info_window

0xb0d5,	// (0x000292ea) popup_snote_single_graphic_window_ParamLimits

0xb0d5,	// (0x000292ea) popup_snote_single_graphic_window

0xb0d5,	// (0x000292ea) popup_snote_single_text_window_ParamLimits

0xb0d5,	// (0x000292ea) popup_snote_single_text_window

0xb0e8,	// (0x000292fd) popup_sub_window_general

0xb1ec,	// (0x00029401) popup_window_general_ParamLimits

0xb1ec,	// (0x00029401) popup_window_general

0x60fd,	// (0x00024312) power_save_pane

0xabbf,	// (0x00028dd4) control_pane_g1_ParamLimits

0xabbf,	// (0x00028dd4) control_pane_g1

0xabe0,	// (0x00028df5) control_pane_g2_ParamLimits

0xabe0,	// (0x00028df5) control_pane_g2

0x60a7,	// (0x000242bc) control_pane_g3_ParamLimits

0x60a7,	// (0x000242bc) control_pane_g3

0x0007,

0xf763,	// (0x0002d978) control_pane_g_ParamLimits

0xf763,	// (0x0002d978) control_pane_g

0xac49,	// (0x00028e5e) control_pane_t1_ParamLimits

0xac49,	// (0x00028e5e) control_pane_t1

0xac9d,	// (0x00028eb2) control_pane_t2_ParamLimits

0xac9d,	// (0x00028eb2) control_pane_t2

0x0002,

0xf774,	// (0x0002d989) control_pane_t_ParamLimits

0xf774,	// (0x0002d989) control_pane_t

0x6002,	// (0x00024217) navi_navi_volume_pane_cp1

0x600a,	// (0x0002421f) status_small_icon_pane

0x6012,	// (0x00024227) status_small_pane_g1_ParamLimits

0x6012,	// (0x00024227) status_small_pane_g1

0x6046,	// (0x0002425b) status_small_pane_g2_ParamLimits

0x6046,	// (0x0002425b) status_small_pane_g2

0x6052,	// (0x00024267) status_small_pane_g3_ParamLimits

0x6052,	// (0x00024267) status_small_pane_g3

0xab8b,	// (0x00028da0) status_small_pane_g4_ParamLimits

0xab8b,	// (0x00028da0) status_small_pane_g4

0xab97,	// (0x00028dac) status_small_pane_g5_ParamLimits

0xab97,	// (0x00028dac) status_small_pane_g5

0x605e,	// (0x00024273) status_small_pane_g6_ParamLimits

0x605e,	// (0x00024273) status_small_pane_g6

0x0007,

0xf752,	// (0x0002d967) status_small_pane_g_ParamLimits

0xf752,	// (0x0002d967) status_small_pane_g

0x608d,	// (0x000242a2) status_small_pane_t1

0xabab,	// (0x00028dc0) status_small_wait_pane_ParamLimits

0xabab,	// (0x00028dc0) status_small_wait_pane

0xa7f1,	// (0x00028a06) aid_levels_signal_ParamLimits

0xa7f1,	// (0x00028a06) aid_levels_signal

0xa802,	// (0x00028a17) signal_pane_g1_ParamLimits

0xa802,	// (0x00028a17) signal_pane_g1

0xa818,	// (0x00028a2d) signal_pane_g2_ParamLimits

0xa818,	// (0x00028a2d) signal_pane_g2

0x0003,

0xf6e3,	// (0x0002d8f8) signal_pane_g_ParamLimits

0xf6e3,	// (0x0002d8f8) signal_pane_g

0x5a71,	// (0x00023c86) context_pane_g1

0xa159,	// (0x0002836e) title_pane_g1

0xa183,	// (0x00028398) title_pane_t1

0x4ef9,	// (0x0002310e) title_pane_t2

0x4f1f,	// (0x00023134) title_pane_t3

0x0002,

0xf532,	// (0x0002d747) title_pane_t

0xb4c0,	// (0x000296d5) aid_levels_battery_ParamLimits

0xb4c0,	// (0x000296d5) aid_levels_battery

0xb4d3,	// (0x000296e8) battery_pane_g1_ParamLimits

0xb4d3,	// (0x000296e8) battery_pane_g1

0xb4e8,	// (0x000296fd) battery_pane_g2_ParamLimits

0xb4e8,	// (0x000296fd) battery_pane_g2

0x0001,

0xf786,	// (0x0002d99b) battery_pane_g_ParamLimits

0xf786,	// (0x0002d99b) battery_pane_g

0xb8c9,	// (0x00029ade) uni_indicator_pane_g1

0xb8dd,	// (0x00029af2) uni_indicator_pane_g2

0xb8f2,	// (0x00029b07) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x0002db0c) uni_indicator_pane_g

0x5622,	// (0x00023837) navi_icon_pane_ParamLimits

0x5622,	// (0x00023837) navi_icon_pane

0x4ee3,	// (0x000230f8) navi_midp_pane

0x4ee3,	// (0x000230f8) navi_navi_pane

0x5622,	// (0x00023837) navi_text_pane_ParamLimits

0x5622,	// (0x00023837) navi_text_pane

0x4e61,	// (0x00023076) status_small_wait_pane_g1

0x5234,	// (0x00023449) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x0002db07) status_small_wait_pane_g

0x7535,	// (0x0002574a) navi_navi_icon_text_pane

0x754f,	// (0x00025764) navi_navi_pane_g1_ParamLimits

0x754f,	// (0x00025764) navi_navi_pane_g1

0x753d,	// (0x00025752) navi_navi_pane_g2_ParamLimits

0x753d,	// (0x00025752) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x0002dad5) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x0002dad5) navi_navi_pane_g

0x7561,	// (0x00025776) navi_navi_tabs_pane

0x7535,	// (0x0002574a) navi_navi_text_pane

0x7535,	// (0x0002574a) navi_navi_volume_pane

0x6fbf,	// (0x000251d4) navi_text_pane_t1

0x6fb3,	// (0x000251c8) navi_icon_pane_g1

0x6f07,	// (0x0002511c) navi_navi_text_pane_t1

0xb893,	// (0x00029aa8) navi_navi_volume_pane_g1

0xb89b,	// (0x00029ab0) volume_small_pane

0xb805,	// (0x00029a1a) navi_navi_icon_text_pane_g1

0xb80d,	// (0x00029a22) navi_navi_icon_text_pane_t1

0x6ac1,	// (0x00024cd6) navi_tabs_2_long_pane

0x6ac1,	// (0x00024cd6) navi_tabs_2_pane

0x6ac1,	// (0x00024cd6) navi_tabs_3_long_pane

0x6ac1,	// (0x00024cd6) navi_tabs_3_pane

0x6ac1,	// (0x00024cd6) navi_tabs_4_pane

0xb7e5,	// (0x000299fa) tabs_2_active_pane_ParamLimits

0xb7e5,	// (0x000299fa) tabs_2_active_pane

0xb7f5,	// (0x00029a0a) tabs_2_passive_pane_ParamLimits

0xb7f5,	// (0x00029a0a) tabs_2_passive_pane

0xb7b3,	// (0x000299c8) tabs_3_active_pane_ParamLimits

0xb7b3,	// (0x000299c8) tabs_3_active_pane

0xb7c3,	// (0x000299d8) tabs_3_passive_pane_ParamLimits

0xb7c3,	// (0x000299d8) tabs_3_passive_pane

0xb7d4,	// (0x000299e9) tabs_3_passive_pane_cp_ParamLimits

0xb7d4,	// (0x000299e9) tabs_3_passive_pane_cp

0xb76f,	// (0x00029984) tabs_4_active_pane_ParamLimits

0xb76f,	// (0x00029984) tabs_4_active_pane

0xb780,	// (0x00029995) tabs_4_passive_pane_ParamLimits

0xb780,	// (0x00029995) tabs_4_passive_pane

0xb791,	// (0x000299a6) tabs_4_passive_pane_cp_ParamLimits

0xb791,	// (0x000299a6) tabs_4_passive_pane_cp

0xb7a2,	// (0x000299b7) tabs_4_passive_pane_cp2_ParamLimits

0xb7a2,	// (0x000299b7) tabs_4_passive_pane_cp2

0xb74f,	// (0x00029964) tabs_2_long_active_pane_ParamLimits

0xb74f,	// (0x00029964) tabs_2_long_active_pane

0xb75f,	// (0x00029974) tabs_2_long_passive_pane_ParamLimits

0xb75f,	// (0x00029974) tabs_2_long_passive_pane

0xb71a,	// (0x0002992f) tabs_3_long_active_pane_ParamLimits

0xb71a,	// (0x0002992f) tabs_3_long_active_pane

0xb72b,	// (0x00029940) tabs_3_long_passive_pane_ParamLimits

0xb72b,	// (0x00029940) tabs_3_long_passive_pane

0xb73e,	// (0x00029953) tabs_3_long_passive_pane_cp_ParamLimits

0xb73e,	// (0x00029953) tabs_3_long_passive_pane_cp

0xb6c0,	// (0x000298d5) volume_small_pane_g1

0xb6c9,	// (0x000298de) volume_small_pane_g2

0xb6d2,	// (0x000298e7) volume_small_pane_g3

0xb6db,	// (0x000298f0) volume_small_pane_g4

0xb6e4,	// (0x000298f9) volume_small_pane_g5

0xb6ed,	// (0x00029902) volume_small_pane_g6

0xb6f6,	// (0x0002990b) volume_small_pane_g7

0xb6ff,	// (0x00029914) volume_small_pane_g8

0xb708,	// (0x0002991d) volume_small_pane_g9

0xb711,	// (0x00029926) volume_small_pane_g10

0x0009,

0xf88c,	// (0x0002daa1) volume_small_pane_g

0x4f47,	// (0x0002315c) bg_active_tab_pane_cp2_ParamLimits

0x4f47,	// (0x0002315c) bg_active_tab_pane_cp2

0x4f3f,	// (0x00023154) tabs_3_active_pane_g1

0xa1eb,	// (0x00028400) tabs_3_active_pane_t1

0x4f47,	// (0x0002315c) bg_passive_tab_pane_cp2_ParamLimits

0x4f47,	// (0x0002315c) bg_passive_tab_pane_cp2

0x4f3f,	// (0x00023154) tabs_3_passive_pane_g1

0xa1eb,	// (0x00028400) tabs_3_passive_pane_t1

0x4f47,	// (0x0002315c) bg_active_tab_pane_cp3_ParamLimits

0x4f47,	// (0x0002315c) bg_active_tab_pane_cp3

0xa1fd,	// (0x00028412) tabs_4_active_pane_g1

0xa205,	// (0x0002841a) tabs_4_active_pane_t1

0x4f47,	// (0x0002315c) bg_passive_tab_pane_cp3_ParamLimits

0x4f47,	// (0x0002315c) bg_passive_tab_pane_cp3

0xa1fd,	// (0x00028412) tabs_4_1_passive_pane_g1

0xa205,	// (0x0002841a) tabs_4_1_passive_pane_t1

0x56ae,	// (0x000238c3) list_highlight_pane_cp2

0xba03,	// (0x00029c18) list_set_pane_ParamLimits

0xba03,	// (0x00029c18) list_set_pane

0xba91,	// (0x00029ca6) main_pane_set_t1_ParamLimits

0xba91,	// (0x00029ca6) main_pane_set_t1

0xbab1,	// (0x00029cc6) main_pane_set_t2_ParamLimits

0xbab1,	// (0x00029cc6) main_pane_set_t2

0xbac3,	// (0x00029cd8) main_pane_set_t3_ParamLimits

0xbac3,	// (0x00029cd8) main_pane_set_t3

0xbad5,	// (0x00029cea) main_pane_set_t4_ParamLimits

0xbad5,	// (0x00029cea) main_pane_set_t4

0x0003,

0xf95c,	// (0x0002db71) main_pane_set_t_ParamLimits

0xf95c,	// (0x0002db71) main_pane_set_t

0xbae7,	// (0x00029cfc) setting_code_pane

0xbaef,	// (0x00029d04) setting_slider_graphic_pane

0xbaef,	// (0x00029d04) setting_slider_pane

0xbaef,	// (0x00029d04) setting_text_pane

0xbaef,	// (0x00029d04) setting_volume_pane

0xa217,	// (0x0002842c) volume_set_pane

0x4f47,	// (0x0002315c) bg_set_opt_pane_cp

0xa21f,	// (0x00028434) setting_slider_pane_t1

0xa235,	// (0x0002844a) setting_slider_pane_t2

0xa24e,	// (0x00028463) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0002d74e) setting_slider_pane_t

0xa265,	// (0x0002847a) slider_set_pane

0x4ee3,	// (0x000230f8) bg_set_opt_pane_cp2

0x4f55,	// (0x0002316a) setting_slider_graphic_pane_g1

0xa27b,	// (0x00028490) setting_slider_graphic_pane_t1

0xa28a,	// (0x0002849f) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0002d755) setting_slider_graphic_pane_t

0xa299,	// (0x000284ae) slider_set_pane_cp

0x4ee3,	// (0x000230f8) input_focus_pane_cp1

0x73fb,	// (0x00025610) list_set_text_pane

0x4e61,	// (0x00023076) setting_text_pane_g1

0x4ee3,	// (0x000230f8) input_focus_pane_cp2

0x4e61,	// (0x00023076) setting_code_pane_g1

0x4f5e,	// (0x00023173) setting_code_pane_t1

0xd981,	// (0x0002bb96) set_text_pane_t1_ParamLimits

0xd981,	// (0x0002bb96) set_text_pane_t1

0x5570,	// (0x00023785) set_opt_bg_pane_g1

0x5578,	// (0x0002378d) set_opt_bg_pane_g2

0xb9cf,	// (0x00029be4) set_opt_bg_pane_g3

0x5588,	// (0x0002379d) set_opt_bg_pane_g4

0x5590,	// (0x000237a5) set_opt_bg_pane_g5

0x5598,	// (0x000237ad) set_opt_bg_pane_g6

0xb9d7,	// (0x00029bec) set_opt_bg_pane_g7

0xb9df,	// (0x00029bf4) set_opt_bg_pane_g8

0xb9e7,	// (0x00029bfc) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x0002db5e) set_opt_bg_pane_g

0x73ee,	// (0x00025603) slider_set_pane_g1

0xb96b,	// (0x00029b80) slider_set_pane_g2

0x0006,

0xf93a,	// (0x0002db4f) slider_set_pane_g

0xb907,	// (0x00029b1c) volume_set_pane_g1

0xb90f,	// (0x00029b24) volume_set_pane_g2

0xb917,	// (0x00029b2c) volume_set_pane_g3

0xb91f,	// (0x00029b34) volume_set_pane_g4

0xb927,	// (0x00029b3c) volume_set_pane_g5

0xb92f,	// (0x00029b44) volume_set_pane_g6

0xb937,	// (0x00029b4c) volume_set_pane_g7

0xb93f,	// (0x00029b54) volume_set_pane_g8

0xb947,	// (0x00029b5c) volume_set_pane_g9

0xb94f,	// (0x00029b64) volume_set_pane_g10

0x0009,

0xf912,	// (0x0002db27) volume_set_pane_g

0xa2a1,	// (0x000284b6) indicator_pane_ParamLimits

0xa2a1,	// (0x000284b6) indicator_pane

0xa2ad,	// (0x000284c2) main_idle_pane_g2_ParamLimits

0xa2ad,	// (0x000284c2) main_idle_pane_g2

0xa2d1,	// (0x000284e6) main_pane_idle_g1_ParamLimits

0xa2d1,	// (0x000284e6) main_pane_idle_g1

0x4f6c,	// (0x00023181) popup_clock_digital_analogue_window_ParamLimits

0x4f6c,	// (0x00023181) popup_clock_digital_analogue_window

0xa2de,	// (0x000284f3) soft_indicator_pane_ParamLimits

0xa2de,	// (0x000284f3) soft_indicator_pane

0xa2ea,	// (0x000284ff) wallpaper_pane_ParamLimits

0xa2ea,	// (0x000284ff) wallpaper_pane

0x4e61,	// (0x00023076) wallpaper_pane_g1

0xa2f6,	// (0x0002850b) indicator_pane_g1_ParamLimits

0xa2f6,	// (0x0002850b) indicator_pane_g1

0x7504,	// (0x00025719) navi_navi_icon_text_pane_srt_g1

0x4f9a,	// (0x000231af) soft_indicator_pane_t1

0x4fb4,	// (0x000231c9) aid_ps_area_pane

0xa302,	// (0x00028517) aid_ps_clock_pane

0x4fc5,	// (0x000231da) aid_ps_indicator_pane

0x4fd1,	// (0x000231e6) indicator_ps_pane_ParamLimits

0x4fd1,	// (0x000231e6) indicator_ps_pane

0x4fe0,	// (0x000231f5) power_save_pane_g1_ParamLimits

0x4fe0,	// (0x000231f5) power_save_pane_g1

0x4fec,	// (0x00023201) power_save_pane_g2_ParamLimits

0x4fec,	// (0x00023201) power_save_pane_g2

0x9e67,	// (0x0002807c) aid_navinavi_width_pane

0x4fb4,	// (0x000231c9) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0002d75a) power_save_pane_g_ParamLimits

0xf545,	// (0x0002d75a) power_save_pane_g

0x4ffa,	// (0x0002320f) power_save_pane_t1_ParamLimits

0x4ffa,	// (0x0002320f) power_save_pane_t1

0xa302,	// (0x00028517) aid_ps_clock_pane_ParamLimits

0x4fc5,	// (0x000231da) aid_ps_indicator_pane_ParamLimits

0x500c,	// (0x00023221) power_save_pane_t4_ParamLimits

0x500c,	// (0x00023221) power_save_pane_t4

0x0001,

0xf54a,	// (0x0002d75f) power_save_pane_t_ParamLimits

0xf54a,	// (0x0002d75f) power_save_pane_t

0x5036,	// (0x0002324b) power_save_t3_ParamLimits

0x5036,	// (0x0002324b) power_save_t3

0x5021,	// (0x00023236) power_save_t2_ParamLimits

0x5021,	// (0x00023236) power_save_t2

0x504b,	// (0x00023260) indicator_ps_pane_g1

0xa30e,	// (0x00028523) ai_gene_pane_ParamLimits

0xa30e,	// (0x00028523) ai_gene_pane

0xa31a,	// (0x0002852f) ai_links_pane_ParamLimits

0xa31a,	// (0x0002852f) ai_links_pane

0xa326,	// (0x0002853b) indicator_pane_cp1_ParamLimits

0xa326,	// (0x0002853b) indicator_pane_cp1

0xa332,	// (0x00028547) main_pane_idle_g1_cp_ParamLimits

0xa332,	// (0x00028547) main_pane_idle_g1_cp

0x5054,	// (0x00023269) popup_ai_links_title_window

0xa33e,	// (0x00028553) soft_indicator_pane_cp1_ParamLimits

0xa33e,	// (0x00028553) soft_indicator_pane_cp1

0x7244,	// (0x00025459) ai_links_pane_g1

0x724d,	// (0x00025462) grid_ai_links_pane

0xb8c0,	// (0x00029ad5) ai_gene_pane_1

0x7232,	// (0x00025447) ai_gene_pane_2

0x723b,	// (0x00025450) list_highlight_pane_cp4

0xb8a4,	// (0x00029ab9) cell_ai_link_pane_ParamLimits

0xb8a4,	// (0x00029ab9) cell_ai_link_pane

0x722a,	// (0x0002543f) cell_ai_link_pane_g1

0x5234,	// (0x00023449) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x0002db02) cell_ai_link_pane_g

0x4ee3,	// (0x000230f8) grid_highlight_cp2

0x4ee3,	// (0x000230f8) bg_popup_sub_pane_cp1

0x506b,	// (0x00023280) popup_ai_links_title_window_t1

0x717c,	// (0x00025391) ai_gene_pane_1_g1_ParamLimits

0x717c,	// (0x00025391) ai_gene_pane_1_g1

0x7188,	// (0x0002539d) ai_gene_pane_1_g2_ParamLimits

0x7188,	// (0x0002539d) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x0002daf8) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x0002daf8) ai_gene_pane_1_g

0x7195,	// (0x000253aa) ai_gene_pane_1_t1_ParamLimits

0x7195,	// (0x000253aa) ai_gene_pane_1_t1

0x71c9,	// (0x000253de) grid_ai_soft_ind_pane

0x7167,	// (0x0002537c) ai_gene_pane_2_t1_ParamLimits

0x7167,	// (0x0002537c) ai_gene_pane_2_t1

0xa34a,	// (0x0002855f) main_pane_empty_t1_ParamLimits

0xa34a,	// (0x0002855f) main_pane_empty_t1

0xa367,	// (0x0002857c) main_pane_empty_t2_ParamLimits

0xa367,	// (0x0002857c) main_pane_empty_t2

0xa37f,	// (0x00028594) main_pane_empty_t3_ParamLimits

0xa37f,	// (0x00028594) main_pane_empty_t3

0xa392,	// (0x000285a7) main_pane_empty_t4_ParamLimits

0xa392,	// (0x000285a7) main_pane_empty_t4

0xa3a5,	// (0x000285ba) main_pane_empty_t5_ParamLimits

0xa3a5,	// (0x000285ba) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0002d764) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0002d764) main_pane_empty_t

0x5622,	// (0x00023837) bg_popup_window_pane_ParamLimits

0x5622,	// (0x00023837) bg_popup_window_pane

0x6f16,	// (0x0002512b) find_popup_pane_cp2_ParamLimits

0x6f16,	// (0x0002512b) find_popup_pane_cp2

0x6f22,	// (0x00025137) heading_pane_ParamLimits

0x6f22,	// (0x00025137) heading_pane

0x4ee3,	// (0x000230f8) bg_popup_sub_pane

0xb827,	// (0x00029a3c) bg_popup_window_pane_g1_ParamLimits

0xb827,	// (0x00029a3c) bg_popup_window_pane_g1

0xb833,	// (0x00029a48) bg_popup_window_pane_g2_ParamLimits

0xb833,	// (0x00029a48) bg_popup_window_pane_g2

0xb83f,	// (0x00029a54) bg_popup_window_pane_g3_ParamLimits

0xb83f,	// (0x00029a54) bg_popup_window_pane_g3

0xb84b,	// (0x00029a60) bg_popup_window_pane_g4_ParamLimits

0xb84b,	// (0x00029a60) bg_popup_window_pane_g4

0xb857,	// (0x00029a6c) bg_popup_window_pane_g5_ParamLimits

0xb857,	// (0x00029a6c) bg_popup_window_pane_g5

0xb863,	// (0x00029a78) bg_popup_window_pane_g6_ParamLimits

0xb863,	// (0x00029a78) bg_popup_window_pane_g6

0xb86f,	// (0x00029a84) bg_popup_window_pane_g7_ParamLimits

0xb86f,	// (0x00029a84) bg_popup_window_pane_g7

0xb87b,	// (0x00029a90) bg_popup_window_pane_g8_ParamLimits

0xb87b,	// (0x00029a90) bg_popup_window_pane_g8

0xb887,	// (0x00029a9c) bg_popup_window_pane_g9_ParamLimits

0xb887,	// (0x00029a9c) bg_popup_window_pane_g9

0x6efb,	// (0x00025110) bg_popup_window_pane_g10_ParamLimits

0x6efb,	// (0x00025110) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x0002dac0) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x0002dac0) bg_popup_window_pane_g

0x6eb2,	// (0x000250c7) bg_popup_heading_pane_ParamLimits

0x6eb2,	// (0x000250c7) bg_popup_heading_pane

0xbc50,	// (0x00029e65) tabs_4_passive_pane_cp_srt_ParamLimits

0xbc50,	// (0x00029e65) tabs_4_passive_pane_cp_srt

0xbc62,	// (0x00029e77) tabs_4_passive_pane_srt_ParamLimits

0x6ec6,	// (0x000250db) heading_pane_g2

0xbc62,	// (0x00029e77) tabs_4_passive_pane_srt

0x56ae,	// (0x000238c3) bg_passive_tab_pane_cp3_srt_ParamLimits

0x56ae,	// (0x000238c3) bg_passive_tab_pane_cp3_srt

0x6ece,	// (0x000250e3) heading_pane_t1_ParamLimits

0x6ece,	// (0x000250e3) heading_pane_t1

0x6ee5,	// (0x000250fa) heading_pane_t2_ParamLimits

0x6ee5,	// (0x000250fa) heading_pane_t2

0x0001,

0xf8a6,	// (0x0002dabb) heading_pane_t_ParamLimits

0xf8a6,	// (0x0002dabb) heading_pane_t

0x6a41,	// (0x00024c56) bg_popup_heading_pane_g1

0x6ad2,	// (0x00024ce7) bg_popup_heading_pane_g2

0x6ada,	// (0x00024cef) bg_popup_heading_pane_g3

0x6ae2,	// (0x00024cf7) bg_popup_heading_pane_g4

0x6aea,	// (0x00024cff) bg_popup_heading_pane_g5

0x6af2,	// (0x00024d07) bg_popup_heading_pane_g6

0x6afa,	// (0x00024d0f) bg_popup_heading_pane_g7

0x6b02,	// (0x00024d17) bg_popup_heading_pane_g8

0x6b0a,	// (0x00024d1f) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x0002da77) bg_popup_heading_pane_g

0x62ac,	// (0x000244c1) bg_popup_sub_pane_g1

0x62b4,	// (0x000244c9) bg_popup_sub_pane_g2

0x62bc,	// (0x000244d1) bg_popup_sub_pane_g3

0x62c4,	// (0x000244d9) bg_popup_sub_pane_g4

0x62cc,	// (0x000244e1) bg_popup_sub_pane_g5

0x62d4,	// (0x000244e9) bg_popup_sub_pane_g6

0x62dc,	// (0x000244f1) bg_popup_sub_pane_g7

0x62e4,	// (0x000244f9) bg_popup_sub_pane_g8

0x62ec,	// (0x00024501) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x0002da51) bg_popup_sub_pane_g

0x4f31,	// (0x00023146) bg_popup_window_pane_cp5_ParamLimits

0x4f31,	// (0x00023146) bg_popup_window_pane_cp5

0x5088,	// (0x0002329d) popup_note_window_g1_ParamLimits

0x5088,	// (0x0002329d) popup_note_window_g1

0x5094,	// (0x000232a9) popup_note_window_t1_ParamLimits

0x5094,	// (0x000232a9) popup_note_window_t1

0x50aa,	// (0x000232bf) popup_note_window_t2_ParamLimits

0x50aa,	// (0x000232bf) popup_note_window_t2

0x50c0,	// (0x000232d5) popup_note_window_t3_ParamLimits

0x50c0,	// (0x000232d5) popup_note_window_t3

0x50d6,	// (0x000232eb) popup_note_window_t4_ParamLimits

0x50d6,	// (0x000232eb) popup_note_window_t4

0x50fe,	// (0x00023313) popup_note_window_t5_ParamLimits

0x50fe,	// (0x00023313) popup_note_window_t5

0x0004,

0xf55a,	// (0x0002d76f) popup_note_window_t_ParamLimits

0xf55a,	// (0x0002d76f) popup_note_window_t

0x5148,	// (0x0002335d) bg_popup_window_pane_cp6_ParamLimits

0x5148,	// (0x0002335d) bg_popup_window_pane_cp6

0x69bd,	// (0x00024bd2) popup_note_image_window_g1_ParamLimits

0x69bd,	// (0x00024bd2) popup_note_image_window_g1

0x69c9,	// (0x00024bde) popup_note_image_window_g2_ParamLimits

0x69c9,	// (0x00024bde) popup_note_image_window_g2

0x0001,

0xf830,	// (0x0002da45) popup_note_image_window_g_ParamLimits

0xf830,	// (0x0002da45) popup_note_image_window_g

0x69e2,	// (0x00024bf7) popup_note_image_window_t1_ParamLimits

0x69e2,	// (0x00024bf7) popup_note_image_window_t1

0x69fb,	// (0x00024c10) popup_note_image_window_t2_ParamLimits

0x69fb,	// (0x00024c10) popup_note_image_window_t2

0x6a14,	// (0x00024c29) popup_note_image_window_t3_ParamLimits

0x6a14,	// (0x00024c29) popup_note_image_window_t3

0x0002,

0xf835,	// (0x0002da4a) popup_note_image_window_t_ParamLimits

0xf835,	// (0x0002da4a) popup_note_image_window_t

0x68a8,	// (0x00024abd) bg_popup_window_pane_cp7_ParamLimits

0x68a8,	// (0x00024abd) bg_popup_window_pane_cp7

0x68d8,	// (0x00024aed) popup_note_wait_window_g1_ParamLimits

0x68d8,	// (0x00024aed) popup_note_wait_window_g1

0x68e4,	// (0x00024af9) popup_note_wait_window_g2_ParamLimits

0x68e4,	// (0x00024af9) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x0002da33) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x0002da33) popup_note_wait_window_g

0x68fc,	// (0x00024b11) popup_note_wait_window_t1_ParamLimits

0x68fc,	// (0x00024b11) popup_note_wait_window_t1

0x6923,	// (0x00024b38) popup_note_wait_window_t2_ParamLimits

0x6923,	// (0x00024b38) popup_note_wait_window_t2

0x6940,	// (0x00024b55) popup_note_wait_window_t3_ParamLimits

0x6940,	// (0x00024b55) popup_note_wait_window_t3

0x6953,	// (0x00024b68) popup_note_wait_window_t4_ParamLimits

0x6953,	// (0x00024b68) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x0002da3a) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x0002da3a) popup_note_wait_window_t

0x6978,	// (0x00024b8d) wait_bar_pane_ParamLimits

0x6978,	// (0x00024b8d) wait_bar_pane

0x4ee3,	// (0x000230f8) wait_anim_pane

0x4ee3,	// (0x000230f8) wait_border_pane

0x4e61,	// (0x00023076) wait_anim_pane_g1

0x4e61,	// (0x00023076) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x0002d8f3) wait_anim_pane_g

0x6858,	// (0x00024a6d) wait_border_pane_g1

0x6861,	// (0x00024a76) wait_border_pane_g2

0x686a,	// (0x00024a7f) wait_border_pane_g3

0x0002,

0xf817,	// (0x0002da2c) wait_border_pane_g

0x667e,	// (0x00024893) bg_popup_window_pane_cp16_ParamLimits

0x667e,	// (0x00024893) bg_popup_window_pane_cp16

0x677e,	// (0x00024993) indicator_popup_pane_cp4_ParamLimits

0x677e,	// (0x00024993) indicator_popup_pane_cp4

0x6792,	// (0x000249a7) popup_query_data_window_t1_ParamLimits

0x6792,	// (0x000249a7) popup_query_data_window_t1

0x67a4,	// (0x000249b9) popup_query_data_window_t2_ParamLimits

0x67a4,	// (0x000249b9) popup_query_data_window_t2

0x6807,	// (0x00024a1c) popup_query_data_window_t3_ParamLimits

0x6807,	// (0x00024a1c) popup_query_data_window_t3

0x0002,

0xf810,	// (0x0002da25) popup_query_data_window_t_ParamLimits

0xf810,	// (0x0002da25) popup_query_data_window_t

0x6821,	// (0x00024a36) query_popup_data_pane_ParamLimits

0x6821,	// (0x00024a36) query_popup_data_pane

0x6835,	// (0x00024a4a) query_popup_data_pane_cp1_ParamLimits

0x6835,	// (0x00024a4a) query_popup_data_pane_cp1

0x667e,	// (0x00024893) bg_popup_window_pane_cp10_ParamLimits

0x667e,	// (0x00024893) bg_popup_window_pane_cp10

0x66b0,	// (0x000248c5) indicator_popup_pane_ParamLimits

0x66b0,	// (0x000248c5) indicator_popup_pane

0x66d2,	// (0x000248e7) popup_query_code_window_t1_ParamLimits

0x66d2,	// (0x000248e7) popup_query_code_window_t1

0x66ec,	// (0x00024901) popup_query_code_window_t2_ParamLimits

0x66ec,	// (0x00024901) popup_query_code_window_t2

0x6735,	// (0x0002494a) popup_query_code_window_t3_ParamLimits

0x6735,	// (0x0002494a) popup_query_code_window_t3

0x0002,

0xf809,	// (0x0002da1e) popup_query_code_window_t_ParamLimits

0xf809,	// (0x0002da1e) popup_query_code_window_t

0x6764,	// (0x00024979) query_popup_pane_ParamLimits

0x6764,	// (0x00024979) query_popup_pane

0x5148,	// (0x0002335d) bg_popup_window_pane_cp15_ParamLimits

0x5148,	// (0x0002335d) bg_popup_window_pane_cp15

0x5166,	// (0x0002337b) indicator_popup_pane_cp1_ParamLimits

0x5166,	// (0x0002337b) indicator_popup_pane_cp1

0x5179,	// (0x0002338e) indicator_popup_pane_cp2_ParamLimits

0x5179,	// (0x0002338e) indicator_popup_pane_cp2

0x518c,	// (0x000233a1) popup_query_data_code_window_g1_ParamLimits

0x518c,	// (0x000233a1) popup_query_data_code_window_g1

0x519f,	// (0x000233b4) popup_query_data_code_window_t1_ParamLimits

0x519f,	// (0x000233b4) popup_query_data_code_window_t1

0x51b1,	// (0x000233c6) popup_query_data_code_window_t2_ParamLimits

0x51b1,	// (0x000233c6) popup_query_data_code_window_t2

0x51c3,	// (0x000233d8) popup_query_data_code_window_t3_ParamLimits

0x51c3,	// (0x000233d8) popup_query_data_code_window_t3

0x51d9,	// (0x000233ee) popup_query_data_code_window_t4_ParamLimits

0x51d9,	// (0x000233ee) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0002d77a) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0002d77a) popup_query_data_code_window_t

0xb547,	// (0x0002975c) list_single_midp_graphic_pane_g3

0x51f1,	// (0x00023406) query_popup_data_pane_cp2_ParamLimits

0x5204,	// (0x00023419) query_popup_pane_cp2_ParamLimits

0x5204,	// (0x00023419) query_popup_pane_cp2

0x4ee3,	// (0x000230f8) bg_popup_window_pane_cp11

0x6662,	// (0x00024877) heading_pane_cp5

0x666a,	// (0x0002487f) listscroll_popup_info_pane

0x4ee3,	// (0x000230f8) input_focus_pane_cp3

0x5217,	// (0x0002342c) query_popup_pane_t1

0x5225,	// (0x0002343a) list_popup_info_pane_ParamLimits

0x5225,	// (0x0002343a) list_popup_info_pane

0x5234,	// (0x00023449) listscroll_popup_info_pane_g1

0x523c,	// (0x00023451) scroll_pane_cp7

0x5244,	// (0x00023459) popup_info_list_pane_t1_ParamLimits

0x5244,	// (0x00023459) popup_info_list_pane_t1

0x525e,	// (0x00023473) popup_info_list_pane_t2_ParamLimits

0x525e,	// (0x00023473) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0002d783) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0002d783) popup_info_list_pane_t

0x4ee3,	// (0x000230f8) bg_popup_window_pane_cp12

0x751e,	// (0x00025733) find_popup_pane

0x4f47,	// (0x0002315c) bg_popup_window_pane_cp3

0x5278,	// (0x0002348d) heading_pane_cp3

0x5287,	// (0x0002349c) listscroll_popup_graphic_pane

0x4ee3,	// (0x000230f8) bg_popup_window_pane_cp4

0xa408,	// (0x0002861d) heading_pane_cp4

0x5296,	// (0x000234ab) listscroll_popup_colour_pane

0x529e,	// (0x000234b3) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x529e,	// (0x000234b3) cell_large_graphic_colour_none_popup_pane

0xa410,	// (0x00028625) grid_large_graphic_colour_popup_pane_ParamLimits

0xa410,	// (0x00028625) grid_large_graphic_colour_popup_pane

0x52ae,	// (0x000234c3) listscroll_popup_colour_pane_g1_ParamLimits

0x52ae,	// (0x000234c3) listscroll_popup_colour_pane_g1

0x52c5,	// (0x000234da) listscroll_popup_colour_pane_g2_ParamLimits

0x52c5,	// (0x000234da) listscroll_popup_colour_pane_g2

0x52dc,	// (0x000234f1) listscroll_popup_colour_pane_g3_ParamLimits

0x52dc,	// (0x000234f1) listscroll_popup_colour_pane_g3

0xa42c,	// (0x00028641) listscroll_popup_colour_pane_g4_ParamLimits

0xa42c,	// (0x00028641) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0002d788) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0002d788) listscroll_popup_colour_pane_g

0x52ec,	// (0x00023501) scroll_pane_cp6_ParamLimits

0x52ec,	// (0x00023501) scroll_pane_cp6

0xa43b,	// (0x00028650) cell_large_graphic_colour_popup_pane_ParamLimits

0xa43b,	// (0x00028650) cell_large_graphic_colour_popup_pane

0x52fe,	// (0x00023513) cell_large_graphic_colour_none_popup_pane_t1

0x4ee3,	// (0x000230f8) grid_highlight_pane_cp5

0x530d,	// (0x00023522) cell_large_graphic_colour_popup_pane_g1

0x5315,	// (0x0002352a) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0002d791) cell_large_graphic_colour_popup_pane_g

0x531d,	// (0x00023532) cell_large_graphic_colour_popup_pane_g2_copy1

0x5326,	// (0x0002353b) grid_highlight_pane_cp4

0x532e,	// (0x00023543) bg_popup_window_pane_cp8_ParamLimits

0x532e,	// (0x00023543) bg_popup_window_pane_cp8

0x5349,	// (0x0002355e) popup_snote_single_text_window_g1_ParamLimits

0x5349,	// (0x0002355e) popup_snote_single_text_window_g1

0x535b,	// (0x00023570) popup_snote_single_text_window_t1_ParamLimits

0x535b,	// (0x00023570) popup_snote_single_text_window_t1

0x536e,	// (0x00023583) popup_snote_single_text_window_t2_ParamLimits

0x536e,	// (0x00023583) popup_snote_single_text_window_t2

0x5381,	// (0x00023596) popup_snote_single_text_window_t3_ParamLimits

0x5381,	// (0x00023596) popup_snote_single_text_window_t3

0x53ba,	// (0x000235cf) popup_snote_single_text_window_t4_ParamLimits

0x53ba,	// (0x000235cf) popup_snote_single_text_window_t4

0x53ee,	// (0x00023603) popup_snote_single_text_window_t5_ParamLimits

0x53ee,	// (0x00023603) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0002d796) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0002d796) popup_snote_single_text_window_t

0x541d,	// (0x00023632) bg_popup_window_pane_cp9_ParamLimits

0x541d,	// (0x00023632) bg_popup_window_pane_cp9

0x5349,	// (0x0002355e) popup_snote_single_graphic_window_g1_ParamLimits

0x5349,	// (0x0002355e) popup_snote_single_graphic_window_g1

0x542b,	// (0x00023640) popup_snote_single_graphic_window_g2_ParamLimits

0x542b,	// (0x00023640) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0002d7a1) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0002d7a1) popup_snote_single_graphic_window_g

0x5437,	// (0x0002364c) popup_snote_single_graphic_window_t1_ParamLimits

0x5437,	// (0x0002364c) popup_snote_single_graphic_window_t1

0x544a,	// (0x0002365f) popup_snote_single_graphic_window_t2_ParamLimits

0x544a,	// (0x0002365f) popup_snote_single_graphic_window_t2

0x5381,	// (0x00023596) popup_snote_single_graphic_window_t3_ParamLimits

0x5381,	// (0x00023596) popup_snote_single_graphic_window_t3

0x53ba,	// (0x000235cf) popup_snote_single_graphic_window_t4_ParamLimits

0x53ba,	// (0x000235cf) popup_snote_single_graphic_window_t4

0x53ee,	// (0x00023603) popup_snote_single_graphic_window_t5_ParamLimits

0x53ee,	// (0x00023603) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0002d7a6) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0002d7a6) popup_snote_single_graphic_window_t

0xbbe1,	// (0x00029df6) grid_graphic_popup_pane_ParamLimits

0xbbe1,	// (0x00029df6) grid_graphic_popup_pane

0xbc04,	// (0x00029e19) listscroll_popup_graphic_pane_g1_ParamLimits

0xbc04,	// (0x00029e19) listscroll_popup_graphic_pane_g1

0xbc18,	// (0x00029e2d) listscroll_popup_graphic_pane_g2_ParamLimits

0xbc18,	// (0x00029e2d) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x0002db9b) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x0002db9b) listscroll_popup_graphic_pane_g

0x67fb,	// (0x00024a10) scroll_pane_cp5

0xbb9b,	// (0x00029db0) cell_graphic_popup_pane_ParamLimits

0xbb9b,	// (0x00029db0) cell_graphic_popup_pane

0x74c7,	// (0x000256dc) cell_graphic_popup_pane_g1

0x74cf,	// (0x000256e4) cell_graphic_popup_pane_g2

0x531d,	// (0x00023532) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x0002db94) cell_graphic_popup_pane_g

0x74d8,	// (0x000256ed) cell_graphic_popup_pane_t2

0x5326,	// (0x0002353b) grid_highlight_pane_cp3

0x546f,	// (0x00023684) list_gen_pane_ParamLimits

0x546f,	// (0x00023684) list_gen_pane

0x5498,	// (0x000236ad) scroll_pane

0xbb6c,	// (0x00029d81) bg_list_pane_g1_ParamLimits

0xbb6c,	// (0x00029d81) bg_list_pane_g1

0x747e,	// (0x00025693) bg_list_pane_g2_ParamLimits

0x747e,	// (0x00025693) bg_list_pane_g2

0x7491,	// (0x000256a6) bg_list_pane_g3_ParamLimits

0x7491,	// (0x000256a6) bg_list_pane_g3

0x74a3,	// (0x000256b8) bg_list_pane_g4_ParamLimits

0x74a3,	// (0x000256b8) bg_list_pane_g4

0xbb83,	// (0x00029d98) bg_list_pane_g5_ParamLimits

0xbb83,	// (0x00029d98) bg_list_pane_g5

0x0004,

0xf974,	// (0x0002db89) bg_list_pane_g_ParamLimits

0xf974,	// (0x0002db89) bg_list_pane_g

0xe222,	// (0x0002c437) list_double2_graphic_large_graphic_pane_ParamLimits

0xe222,	// (0x0002c437) list_double2_graphic_large_graphic_pane

0xe222,	// (0x0002c437) list_double2_graphic_pane_ParamLimits

0xe222,	// (0x0002c437) list_double2_graphic_pane

0xe222,	// (0x0002c437) list_double2_large_graphic_pane_ParamLimits

0xe222,	// (0x0002c437) list_double2_large_graphic_pane

0xbb1c,	// (0x00029d31) list_double2_pane_ParamLimits

0xbb1c,	// (0x00029d31) list_double2_pane

0xe222,	// (0x0002c437) list_double_graphic_heading_pane_ParamLimits

0xe222,	// (0x0002c437) list_double_graphic_heading_pane

0xe222,	// (0x0002c437) list_double_graphic_pane_ParamLimits

0xe222,	// (0x0002c437) list_double_graphic_pane

0xe222,	// (0x0002c437) list_double_heading_pane_ParamLimits

0xe222,	// (0x0002c437) list_double_heading_pane

0xe222,	// (0x0002c437) list_double_large_graphic_pane_ParamLimits

0xe222,	// (0x0002c437) list_double_large_graphic_pane

0xe222,	// (0x0002c437) list_double_number_pane_ParamLimits

0xe222,	// (0x0002c437) list_double_number_pane

0xe222,	// (0x0002c437) list_double_pane_ParamLimits

0xe222,	// (0x0002c437) list_double_pane

0xe222,	// (0x0002c437) list_double_time_pane_ParamLimits

0xe222,	// (0x0002c437) list_double_time_pane

0xe222,	// (0x0002c437) list_setting_number_pane_ParamLimits

0xe222,	// (0x0002c437) list_setting_number_pane

0xe222,	// (0x0002c437) list_setting_pane_ParamLimits

0xe222,	// (0x0002c437) list_setting_pane

0xe27b,	// (0x0002c490) list_single_2graphic_pane_ParamLimits

0xe27b,	// (0x0002c490) list_single_2graphic_pane

0xe27b,	// (0x0002c490) list_single_graphic_heading_pane_ParamLimits

0xe27b,	// (0x0002c490) list_single_graphic_heading_pane

0xe27b,	// (0x0002c490) list_single_graphic_pane_ParamLimits

0xe27b,	// (0x0002c490) list_single_graphic_pane

0xe27b,	// (0x0002c490) list_single_heading_pane_ParamLimits

0xe27b,	// (0x0002c490) list_single_heading_pane

0xe292,	// (0x0002c4a7) list_single_large_graphic_pane_ParamLimits

0xe292,	// (0x0002c4a7) list_single_large_graphic_pane

0xe27b,	// (0x0002c490) list_single_number_heading_pane_ParamLimits

0xe27b,	// (0x0002c490) list_single_number_heading_pane

0xe27b,	// (0x0002c490) list_single_number_pane_ParamLimits

0xe27b,	// (0x0002c490) list_single_number_pane

0xe27b,	// (0x0002c490) list_single_pane_ParamLimits

0xe27b,	// (0x0002c490) list_single_pane

0x4ee3,	// (0x000230f8) list_highlight_pane_cp1

0xd9a9,	// (0x0002bbbe) list_single_pane_g1_ParamLimits

0xd9a9,	// (0x0002bbbe) list_single_pane_g1

0xd9b5,	// (0x0002bbca) list_single_pane_g2_ParamLimits

0xd9b5,	// (0x0002bbca) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0002d7b8) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0002d7b8) list_single_pane_g

0xe20c,	// (0x0002c421) list_single_pane_t1_ParamLimits

0xe20c,	// (0x0002c421) list_single_pane_t1

0xd9a9,	// (0x0002bbbe) list_single_number_pane_g1_ParamLimits

0xd9a9,	// (0x0002bbbe) list_single_number_pane_g1

0xd9b5,	// (0x0002bbca) list_single_number_pane_g2_ParamLimits

0xd9b5,	// (0x0002bbca) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0002d7b8) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0002d7b8) list_single_number_pane_g

0xd9c1,	// (0x0002bbd6) list_single_number_pane_t1_ParamLimits

0xd9c1,	// (0x0002bbd6) list_single_number_pane_t1

0xe1cd,	// (0x0002c3e2) list_single_number_pane_t2_ParamLimits

0xe1cd,	// (0x0002c3e2) list_single_number_pane_t2

0x0001,

0xf935,	// (0x0002db4a) list_single_number_pane_t_ParamLimits

0xf935,	// (0x0002db4a) list_single_number_pane_t

0xd99d,	// (0x0002bbb2) list_single_graphic_pane_g1_ParamLimits

0xd99d,	// (0x0002bbb2) list_single_graphic_pane_g1

0xd9a9,	// (0x0002bbbe) list_single_graphic_pane_g2_ParamLimits

0xd9a9,	// (0x0002bbbe) list_single_graphic_pane_g2

0xd9b5,	// (0x0002bbca) list_single_graphic_pane_g3_ParamLimits

0xd9b5,	// (0x0002bbca) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0002d7b1) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0002d7b1) list_single_graphic_pane_g

0xd9c1,	// (0x0002bbd6) list_single_graphic_pane_t1_ParamLimits

0xd9c1,	// (0x0002bbd6) list_single_graphic_pane_t1

0xd9a9,	// (0x0002bbbe) list_single_heading_pane_g1_ParamLimits

0xd9a9,	// (0x0002bbbe) list_single_heading_pane_g1

0xd9b5,	// (0x0002bbca) list_single_heading_pane_g2_ParamLimits

0xd9b5,	// (0x0002bbca) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002d7b8) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002d7b8) list_single_heading_pane_g

0xd9d7,	// (0x0002bbec) list_single_heading_pane_t1_ParamLimits

0xd9d7,	// (0x0002bbec) list_single_heading_pane_t1

0xd9ed,	// (0x0002bc02) list_single_heading_pane_t2_ParamLimits

0xd9ed,	// (0x0002bc02) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0002d7bd) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0002d7bd) list_single_heading_pane_t

0xd9a9,	// (0x0002bbbe) list_single_number_heading_pane_g1_ParamLimits

0xd9a9,	// (0x0002bbbe) list_single_number_heading_pane_g1

0xd9b5,	// (0x0002bbca) list_single_number_heading_pane_g2_ParamLimits

0xd9b5,	// (0x0002bbca) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002d7b8) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002d7b8) list_single_number_heading_pane_g

0xd9d7,	// (0x0002bbec) list_single_number_heading_pane_t1_ParamLimits

0xd9d7,	// (0x0002bbec) list_single_number_heading_pane_t1

0xd9ff,	// (0x0002bc14) list_single_number_heading_pane_t2_ParamLimits

0xd9ff,	// (0x0002bc14) list_single_number_heading_pane_t2

0xda11,	// (0x0002bc26) list_single_number_heading_pane_t3_ParamLimits

0xda11,	// (0x0002bc26) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0002d7c2) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0002d7c2) list_single_number_heading_pane_t

0xd99d,	// (0x0002bbb2) list_single_graphic_heading_pane_g1_ParamLimits

0xd99d,	// (0x0002bbb2) list_single_graphic_heading_pane_g1

0xda23,	// (0x0002bc38) list_single_graphic_heading_pane_g4_ParamLimits

0xda23,	// (0x0002bc38) list_single_graphic_heading_pane_g4

0xd9b5,	// (0x0002bbca) list_single_graphic_heading_pane_g5_ParamLimits

0xd9b5,	// (0x0002bbca) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0002d7c9) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0002d7c9) list_single_graphic_heading_pane_g

0xd9d7,	// (0x0002bbec) list_single_graphic_heading_pane_t1_ParamLimits

0xd9d7,	// (0x0002bbec) list_single_graphic_heading_pane_t1

0xda32,	// (0x0002bc47) list_single_graphic_heading_pane_t2_ParamLimits

0xda32,	// (0x0002bc47) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0002d7d0) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0002d7d0) list_single_graphic_heading_pane_t

0xda44,	// (0x0002bc59) list_single_large_graphic_pane_g1_ParamLimits

0xda44,	// (0x0002bc59) list_single_large_graphic_pane_g1

0xda50,	// (0x0002bc65) list_single_large_graphic_pane_g2_ParamLimits

0xda50,	// (0x0002bc65) list_single_large_graphic_pane_g2

0xda5c,	// (0x0002bc71) list_single_large_graphic_pane_g3_ParamLimits

0xda5c,	// (0x0002bc71) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0002d7d5) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0002d7d5) list_single_large_graphic_pane_g

0x6861,	// (0x00024a76) wait_border_pane_g2_copy1

0xda68,	// (0x0002bc7d) list_single_large_graphic_pane_g4_cp2

0xda70,	// (0x0002bc85) list_single_large_graphic_pane_t1_ParamLimits

0xda70,	// (0x0002bc85) list_single_large_graphic_pane_t1

0xda86,	// (0x0002bc9b) list_double_pane_g1_ParamLimits

0xda86,	// (0x0002bc9b) list_double_pane_g1

0xda92,	// (0x0002bca7) list_double_pane_g2_ParamLimits

0xda92,	// (0x0002bca7) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0002d7dc) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0002d7dc) list_double_pane_g

0xda9e,	// (0x0002bcb3) list_double_pane_t1_ParamLimits

0xda9e,	// (0x0002bcb3) list_double_pane_t1

0xdab4,	// (0x0002bcc9) list_double_pane_t2_ParamLimits

0xdab4,	// (0x0002bcc9) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0002d7e1) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0002d7e1) list_double_pane_t

0xdac6,	// (0x0002bcdb) list_double2_pane_g1_ParamLimits

0xdac6,	// (0x0002bcdb) list_double2_pane_g1

0xdad5,	// (0x0002bcea) list_double2_pane_g2_ParamLimits

0xdad5,	// (0x0002bcea) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0002d7e6) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0002d7e6) list_double2_pane_g

0xdae1,	// (0x0002bcf6) list_double2_pane_t1_ParamLimits

0xdae1,	// (0x0002bcf6) list_double2_pane_t1

0xdaf7,	// (0x0002bd0c) list_double2_pane_t2_ParamLimits

0xdaf7,	// (0x0002bd0c) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0002d7eb) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0002d7eb) list_double2_pane_t

0xda86,	// (0x0002bc9b) list_double_number_pane_g1_ParamLimits

0xda86,	// (0x0002bc9b) list_double_number_pane_g1

0xda92,	// (0x0002bca7) list_double_number_pane_g2_ParamLimits

0xda92,	// (0x0002bca7) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0002d7dc) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0002d7dc) list_double_number_pane_g

0xdb09,	// (0x0002bd1e) list_double_number_pane_t1_ParamLimits

0xdb09,	// (0x0002bd1e) list_double_number_pane_t1

0xdb1b,	// (0x0002bd30) list_double_number_pane_t2_ParamLimits

0xdb1b,	// (0x0002bd30) list_double_number_pane_t2

0xdb31,	// (0x0002bd46) list_double_number_pane_t3_ParamLimits

0xdb31,	// (0x0002bd46) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0002d7f0) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0002d7f0) list_double_number_pane_t

0xd99d,	// (0x0002bbb2) list_double_graphic_pane_g1_ParamLimits

0xd99d,	// (0x0002bbb2) list_double_graphic_pane_g1

0xdb43,	// (0x0002bd58) list_double_graphic_pane_g2_ParamLimits

0xdb43,	// (0x0002bd58) list_double_graphic_pane_g2

0xdb52,	// (0x0002bd67) list_double_graphic_pane_g3_ParamLimits

0xdb52,	// (0x0002bd67) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0002d7f7) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0002d7f7) list_double_graphic_pane_g

0xdb6a,	// (0x0002bd7f) list_double_graphic_pane_t1_ParamLimits

0xdb6a,	// (0x0002bd7f) list_double_graphic_pane_t1

0xdb80,	// (0x0002bd95) list_double_graphic_pane_t2_ParamLimits

0xdb80,	// (0x0002bd95) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0002d800) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0002d800) list_double_graphic_pane_t

0xdb92,	// (0x0002bda7) list_double2_graphic_pane_g1_ParamLimits

0xdb92,	// (0x0002bda7) list_double2_graphic_pane_g1

0xda86,	// (0x0002bc9b) list_double2_graphic_pane_g2_ParamLimits

0xda86,	// (0x0002bc9b) list_double2_graphic_pane_g2

0xda92,	// (0x0002bca7) list_double2_graphic_pane_g3_ParamLimits

0xda92,	// (0x0002bca7) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0002d805) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0002d805) list_double2_graphic_pane_g

0xdb9e,	// (0x0002bdb3) list_double2_graphic_pane_t1_ParamLimits

0xdb9e,	// (0x0002bdb3) list_double2_graphic_pane_t1

0xdbb4,	// (0x0002bdc9) list_double2_graphic_pane_t2_ParamLimits

0xdbb4,	// (0x0002bdc9) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0002d80c) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0002d80c) list_double2_graphic_pane_t

0xdbc6,	// (0x0002bddb) list_double_large_graphic_pane_g1_ParamLimits

0xdbc6,	// (0x0002bddb) list_double_large_graphic_pane_g1

0xdbef,	// (0x0002be04) list_double_large_graphic_pane_g2_ParamLimits

0xdbef,	// (0x0002be04) list_double_large_graphic_pane_g2

0xda92,	// (0x0002bca7) list_double_large_graphic_pane_g3_ParamLimits

0xda92,	// (0x0002bca7) list_double_large_graphic_pane_g3

0xdbfe,	// (0x0002be13) list_double_large_graphic_pane_g4_ParamLimits

0xdbfe,	// (0x0002be13) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0002d811) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0002d811) list_double_large_graphic_pane_g

0xdc24,	// (0x0002be39) list_double_large_graphic_pane_t1_ParamLimits

0xdc24,	// (0x0002be39) list_double_large_graphic_pane_t1

0xdc3d,	// (0x0002be52) list_double_large_graphic_pane_t2_ParamLimits

0xdc3d,	// (0x0002be52) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0002d81c) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0002d81c) list_double_large_graphic_pane_t

0xdc4f,	// (0x0002be64) list_double2_large_graphic_pane_g1_ParamLimits

0xdc4f,	// (0x0002be64) list_double2_large_graphic_pane_g1

0xdc5b,	// (0x0002be70) list_double2_large_graphic_pane_g2_ParamLimits

0xdc5b,	// (0x0002be70) list_double2_large_graphic_pane_g2

0xdc6a,	// (0x0002be7f) list_double2_large_graphic_pane_g3_ParamLimits

0xdc6a,	// (0x0002be7f) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0002d821) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0002d821) list_double2_large_graphic_pane_g

0xdc76,	// (0x0002be8b) list_double2_large_graphic_pane_t1_ParamLimits

0xdc76,	// (0x0002be8b) list_double2_large_graphic_pane_t1

0xdc8c,	// (0x0002bea1) list_double2_large_graphic_pane_t2_ParamLimits

0xdc8c,	// (0x0002bea1) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0002d828) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0002d828) list_double2_large_graphic_pane_t

0xdc9e,	// (0x0002beb3) list_double_heading_pane_g1_ParamLimits

0xdc9e,	// (0x0002beb3) list_double_heading_pane_g1

0xdcad,	// (0x0002bec2) list_double_heading_pane_g2_ParamLimits

0xdcad,	// (0x0002bec2) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0002d82d) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0002d82d) list_double_heading_pane_g

0xdcb9,	// (0x0002bece) list_double_heading_pane_t1_ParamLimits

0xdcb9,	// (0x0002bece) list_double_heading_pane_t1

0xdccf,	// (0x0002bee4) list_double_heading_pane_t2_ParamLimits

0xdccf,	// (0x0002bee4) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0002d832) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0002d832) list_double_heading_pane_t

0xdce1,	// (0x0002bef6) list_double_graphic_heading_pane_g1_ParamLimits

0xdce1,	// (0x0002bef6) list_double_graphic_heading_pane_g1

0xdc9e,	// (0x0002beb3) list_double_graphic_heading_pane_g2_ParamLimits

0xdc9e,	// (0x0002beb3) list_double_graphic_heading_pane_g2

0xdcad,	// (0x0002bec2) list_double_graphic_heading_pane_g3_ParamLimits

0xdcad,	// (0x0002bec2) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0002d837) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0002d837) list_double_graphic_heading_pane_g

0xdced,	// (0x0002bf02) list_double_graphic_heading_pane_t1_ParamLimits

0xdced,	// (0x0002bf02) list_double_graphic_heading_pane_t1

0xdbb4,	// (0x0002bdc9) list_double_graphic_heading_pane_t2_ParamLimits

0xdbb4,	// (0x0002bdc9) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0002d83e) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0002d83e) list_double_graphic_heading_pane_t

0xdbef,	// (0x0002be04) list_double_time_pane_g1_ParamLimits

0xdbef,	// (0x0002be04) list_double_time_pane_g1

0xda92,	// (0x0002bca7) list_double_time_pane_g2_ParamLimits

0xda92,	// (0x0002bca7) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0002d843) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0002d843) list_double_time_pane_g

0xdd03,	// (0x0002bf18) list_double_time_pane_t1_ParamLimits

0xdd03,	// (0x0002bf18) list_double_time_pane_t1

0xdd19,	// (0x0002bf2e) list_double_time_pane_t2_ParamLimits

0xdd19,	// (0x0002bf2e) list_double_time_pane_t2

0xdd2b,	// (0x0002bf40) list_double_time_pane_t3_ParamLimits

0xdd2b,	// (0x0002bf40) list_double_time_pane_t3

0xdd3d,	// (0x0002bf52) list_double_time_pane_t4_ParamLimits

0xdd3d,	// (0x0002bf52) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0002d848) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0002d848) list_double_time_pane_t

0xdd4f,	// (0x0002bf64) list_setting_pane_g1_ParamLimits

0xdd4f,	// (0x0002bf64) list_setting_pane_g1

0xdc6a,	// (0x0002be7f) list_setting_pane_g2_ParamLimits

0xdc6a,	// (0x0002be7f) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0002d851) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0002d851) list_setting_pane_g

0xdd5b,	// (0x0002bf70) list_setting_pane_t1_ParamLimits

0xdd5b,	// (0x0002bf70) list_setting_pane_t1

0xdd75,	// (0x0002bf8a) list_setting_pane_t2_ParamLimits

0xdd75,	// (0x0002bf8a) list_setting_pane_t2

0x0002,

0xf641,	// (0x0002d856) list_setting_pane_t_ParamLimits

0xf641,	// (0x0002d856) list_setting_pane_t

0xddb2,	// (0x0002bfc7) set_value_pane_cp_ParamLimits

0xddb2,	// (0x0002bfc7) set_value_pane_cp

0xddbe,	// (0x0002bfd3) list_setting_number_pane_g1_ParamLimits

0xddbe,	// (0x0002bfd3) list_setting_number_pane_g1

0xddca,	// (0x0002bfdf) list_setting_number_pane_g2_ParamLimits

0xddca,	// (0x0002bfdf) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x0002d85d) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x0002d85d) list_setting_number_pane_g

0xddd6,	// (0x0002bfeb) list_setting_number_pane_t1_ParamLimits

0xddd6,	// (0x0002bfeb) list_setting_number_pane_t1

0xdded,	// (0x0002c002) list_setting_number_pane_t2_ParamLimits

0xdded,	// (0x0002c002) list_setting_number_pane_t2

0xde07,	// (0x0002c01c) list_setting_number_pane_t3_ParamLimits

0xde07,	// (0x0002c01c) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x0002d862) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x0002d862) list_setting_number_pane_t

0xddb2,	// (0x0002bfc7) set_value_pane_ParamLimits

0xddb2,	// (0x0002bfc7) set_value_pane

0x54cd,	// (0x000236e2) bg_set_opt_pane_ParamLimits

0x54cd,	// (0x000236e2) bg_set_opt_pane

0xde48,	// (0x0002c05d) set_value_pane_t1

0x54ee,	// (0x00023703) slider_set_pane_cp3

0x54f7,	// (0x0002370c) volume_small_pane_cp

0x5500,	// (0x00023715) list_form_gen_pane

0x54bc,	// (0x000236d1) scroll_pane_cp8

0xde5e,	// (0x0002c073) form_field_data_pane_ParamLimits

0xde5e,	// (0x0002c073) form_field_data_pane

0xde7e,	// (0x0002c093) form_field_data_wide_pane_ParamLimits

0xde7e,	// (0x0002c093) form_field_data_wide_pane

0xde9d,	// (0x0002c0b2) form_field_popup_pane_ParamLimits

0xde9d,	// (0x0002c0b2) form_field_popup_pane

0xdeb5,	// (0x0002c0ca) form_field_popup_wide_pane_ParamLimits

0xdeb5,	// (0x0002c0ca) form_field_popup_wide_pane

0xdecc,	// (0x0002c0e1) form_field_slider_pane_ParamLimits

0xdecc,	// (0x0002c0e1) form_field_slider_pane

0xdedf,	// (0x0002c0f4) form_field_slider_wide_pane_ParamLimits

0xdedf,	// (0x0002c0f4) form_field_slider_wide_pane

0x5509,	// (0x0002371e) data_form_pane

0xa462,	// (0x00028677) form_field_data_pane_t1

0x5515,	// (0x0002372a) input_focus_pane

0x5523,	// (0x00023738) data_form_wide_pane

0xdf06,	// (0x0002c11b) form_field_data_wide_pane_t1

0x533b,	// (0x00023550) input_focus_pane_cp6

0xdf28,	// (0x0002c13d) form_field_popup_pane_t1

0x5515,	// (0x0002372a) input_focus_pane_cp7

0x5509,	// (0x0002371e) list_form_pane

0xdf48,	// (0x0002c15d) form_field_popup_wide_pane_t1

0x5515,	// (0x0002372a) input_focus_pane_cp8

0x554f,	// (0x00023764) list_form_wide_pane

0xdf65,	// (0x0002c17a) form_field_slider_pane_t1_ParamLimits

0xdf65,	// (0x0002c17a) form_field_slider_pane_t1

0xdf77,	// (0x0002c18c) form_field_slider_pane_t2_ParamLimits

0xdf77,	// (0x0002c18c) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x0002d872) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x0002d872) form_field_slider_pane_t

0x4f31,	// (0x00023146) input_focus_pane_cp9_ParamLimits

0x4f31,	// (0x00023146) input_focus_pane_cp9

0xdf89,	// (0x0002c19e) slider_cont_pane_ParamLimits

0xdf89,	// (0x0002c19e) slider_cont_pane

0x555e,	// (0x00023773) form_field_slider_wide_pane_t1_ParamLimits

0x555e,	// (0x00023773) form_field_slider_wide_pane_t1

0xdf9d,	// (0x0002c1b2) form_field_slider_wide_pane_t2_ParamLimits

0xdf9d,	// (0x0002c1b2) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x0002d877) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x0002d877) form_field_slider_wide_pane_t

0x4f31,	// (0x00023146) input_focus_pane_cp10_ParamLimits

0x4f31,	// (0x00023146) input_focus_pane_cp10

0xdfaf,	// (0x0002c1c4) slider_cont_pane_cp1_ParamLimits

0xdfaf,	// (0x0002c1c4) slider_cont_pane_cp1

0xdfc5,	// (0x0002c1da) slider_form_pane_cp

0x5570,	// (0x00023785) input_focus_pane_g1

0x5578,	// (0x0002378d) input_focus_pane_g2

0x5580,	// (0x00023795) input_focus_pane_g3

0x5588,	// (0x0002379d) input_focus_pane_g4

0x5590,	// (0x000237a5) input_focus_pane_g5

0x5598,	// (0x000237ad) input_focus_pane_g6

0x55a0,	// (0x000237b5) input_focus_pane_g7

0x55a8,	// (0x000237bd) input_focus_pane_g8

0x55b0,	// (0x000237c5) input_focus_pane_g9

0x4e61,	// (0x00023076) input_focus_pane_g10

0x0009,

0xf667,	// (0x0002d87c) input_focus_pane_g

0x686a,	// (0x00024a7f) wait_border_pane_g3_copy1

0xdfcd,	// (0x0002c1e2) data_form_pane_t1

0x4e61,	// (0x00023076) wait_anim_pane_g1_copy1

0xe1df,	// (0x0002c3f4) data_form_wide_pane_t1

0xdfe7,	// (0x0002c1fc) list_form_graphic_pane_cp_ParamLimits

0xdfe7,	// (0x0002c1fc) list_form_graphic_pane_cp

0x7421,	// (0x00025636) slider_form_pane_g1

0x742a,	// (0x0002563f) slider_form_pane_g2

0x0006,

0xf965,	// (0x0002db7a) slider_form_pane_g

0xdfe7,	// (0x0002c1fc) list_form_graphic_pane_ParamLimits

0xdfe7,	// (0x0002c1fc) list_form_graphic_pane

0xdffd,	// (0x0002c212) list_form_graphic_pane_g1

0xe005,	// (0x0002c21a) list_form_graphic_pane_t1_ParamLimits

0xe005,	// (0x0002c21a) list_form_graphic_pane_t1

0x4f47,	// (0x0002315c) list_highlight_pane_cp5_ParamLimits

0x4f47,	// (0x0002315c) list_highlight_pane_cp5

0xe01a,	// (0x0002c22f) find_pane_g1

0x55b8,	// (0x000237cd) input_find_pane

0xe023,	// (0x0002c238) input_find_pane_g1_ParamLimits

0xe023,	// (0x0002c238) input_find_pane_g1

0xe02f,	// (0x0002c244) input_find_pane_t1_ParamLimits

0xe02f,	// (0x0002c244) input_find_pane_t1

0xe044,	// (0x0002c259) input_find_pane_t2_ParamLimits

0xe044,	// (0x0002c259) input_find_pane_t2

0x0001,

0xf67c,	// (0x0002d891) input_find_pane_t_ParamLimits

0xf67c,	// (0x0002d891) input_find_pane_t

0x55c1,	// (0x000237d6) input_focus_pane_cp5_ParamLimits

0x55c1,	// (0x000237d6) input_focus_pane_cp5

0x4f31,	// (0x00023146) bg_popup_window_pane_cp2_ParamLimits

0x4f31,	// (0x00023146) bg_popup_window_pane_cp2

0x55e0,	// (0x000237f5) listscroll_menu_pane_ParamLimits

0x55e0,	// (0x000237f5) listscroll_menu_pane

0x55ec,	// (0x00023801) popup_submenu_window_ParamLimits

0x55ec,	// (0x00023801) popup_submenu_window

0x5610,	// (0x00023825) find_popup_pane_g1

0x5618,	// (0x0002382d) input_popup_find_pane_cp

0x5622,	// (0x00023837) input_focus_pane_cp4_ParamLimits

0x5622,	// (0x00023837) input_focus_pane_cp4

0x5630,	// (0x00023845) input_popup_find_pane_t1_ParamLimits

0x5630,	// (0x00023845) input_popup_find_pane_t1

0x4ee3,	// (0x000230f8) bg_popup_sub_pane_cp

0x565e,	// (0x00023873) listscroll_popup_sub_pane

0x5666,	// (0x0002387b) list_submenu_pane_ParamLimits

0x5666,	// (0x0002387b) list_submenu_pane

0x5677,	// (0x0002388c) scroll_pane_cp4

0x567f,	// (0x00023894) list_single_popup_submenu_pane_ParamLimits

0x567f,	// (0x00023894) list_single_popup_submenu_pane

0x5691,	// (0x000238a6) list_single_popup_submenu_pane_g1

0x5699,	// (0x000238ae) list_single_popup_submenu_pane_t1_ParamLimits

0x5699,	// (0x000238ae) list_single_popup_submenu_pane_t1

0x4f47,	// (0x0002315c) bg_active_tab_pane_cp1_ParamLimits

0x4f47,	// (0x0002315c) bg_active_tab_pane_cp1

0xa486,	// (0x0002869b) tabs_2_active_pane_g1

0xa48e,	// (0x000286a3) tabs_2_active_pane_t1

0x4f47,	// (0x0002315c) bg_passive_tab_pane_cp1_ParamLimits

0x4f47,	// (0x0002315c) bg_passive_tab_pane_cp1

0xa486,	// (0x0002869b) tabs_2_passive_pane_g1

0xa48e,	// (0x000286a3) tabs_2_passive_pane_t1

0xa4a0,	// (0x000286b5) bg_active_tab_pane_cp4

0xa4ae,	// (0x000286c3) tabs_2_long_active_pane_t1

0xa4c1,	// (0x000286d6) bg_passive_tab_pane_cp4

0xb54f,	// (0x00029764) list_single_midp_graphic_pane_g4_ParamLimits

0xa4a0,	// (0x000286b5) bg_active_tab_pane_cp5

0xa4cd,	// (0x000286e2) tabs_3_long_active_pane_t1

0xa4c1,	// (0x000286d6) bg_passive_tab_pane_cp5

0xb54f,	// (0x00029764) list_single_midp_graphic_pane_g4

0x4f47,	// (0x0002315c) bg_popup_window_pane_cp13_ParamLimits

0x4f47,	// (0x0002315c) bg_popup_window_pane_cp13

0x56c3,	// (0x000238d8) listscroll_popup_fast_pane_ParamLimits

0x56c3,	// (0x000238d8) listscroll_popup_fast_pane

0x56d2,	// (0x000238e7) grid_popup_fast_pane_ParamLimits

0x56d2,	// (0x000238e7) grid_popup_fast_pane

0x56e4,	// (0x000238f9) scroll_pane_cp9_ParamLimits

0x56e4,	// (0x000238f9) scroll_pane_cp9

0x874a,	// (0x0002695f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x874a,	// (0x0002695f) list_single_graphic_hl_pane_t1_cp2

0x5708,	// (0x0002391d) input_focus_pane_cp20_ParamLimits

0x5708,	// (0x0002391d) input_focus_pane_cp20

0x5716,	// (0x0002392b) query_popup_data_pane_t1_ParamLimits

0x5716,	// (0x0002392b) query_popup_data_pane_t1

0x5729,	// (0x0002393e) query_popup_data_pane_t2_ParamLimits

0x5729,	// (0x0002393e) query_popup_data_pane_t2

0x576f,	// (0x00023984) query_popup_data_pane_t3_ParamLimits

0x576f,	// (0x00023984) query_popup_data_pane_t3

0x57b0,	// (0x000239c5) query_popup_data_pane_t4_ParamLimits

0x57b0,	// (0x000239c5) query_popup_data_pane_t4

0x57ec,	// (0x00023a01) query_popup_data_pane_t5_ParamLimits

0x57ec,	// (0x00023a01) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x0002d896) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x0002d896) query_popup_data_pane_t

0x5570,	// (0x00023785) bg_set_opt_pane_g1

0x5578,	// (0x0002378d) bg_set_opt_pane_g2

0x5580,	// (0x00023795) bg_set_opt_pane_g3

0x5588,	// (0x0002379d) bg_set_opt_pane_g4

0x5590,	// (0x000237a5) bg_set_opt_pane_g5

0x5598,	// (0x000237ad) bg_set_opt_pane_g6

0x55a0,	// (0x000237b5) bg_set_opt_pane_g7

0x55a8,	// (0x000237bd) bg_set_opt_pane_g8

0x55b0,	// (0x000237c5) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x0002d8a1) bg_set_opt_pane_g

0xa8ef,	// (0x00028b04) control_top_pane_stacon_ParamLimits

0xa8ef,	// (0x00028b04) control_top_pane_stacon

0xa942,	// (0x00028b57) signal_pane_stacon_ParamLimits

0xa942,	// (0x00028b57) signal_pane_stacon

0x5bdf,	// (0x00023df4) stacon_top_pane_g1_ParamLimits

0x5bdf,	// (0x00023df4) stacon_top_pane_g1

0xa967,	// (0x00028b7c) title_pane_stacon_ParamLimits

0xa967,	// (0x00028b7c) title_pane_stacon

0xa989,	// (0x00028b9e) uni_indicator_pane_stacon_ParamLimits

0xa989,	// (0x00028b9e) uni_indicator_pane_stacon

0xa99e,	// (0x00028bb3) battery_pane_stacon_ParamLimits

0xa99e,	// (0x00028bb3) battery_pane_stacon

0xa9de,	// (0x00028bf3) control_bottom_pane_stacon_ParamLimits

0xa9de,	// (0x00028bf3) control_bottom_pane_stacon

0xa9fd,	// (0x00028c12) navi_pane_stacon_ParamLimits

0xa9fd,	// (0x00028c12) navi_pane_stacon

0x5c01,	// (0x00023e16) stacon_bottom_pane_g1_ParamLimits

0x5c01,	// (0x00023e16) stacon_bottom_pane_g1

0x5823,	// (0x00023a38) aid_levels_signal_lsc_ParamLimits

0x5823,	// (0x00023a38) aid_levels_signal_lsc

0xa4df,	// (0x000286f4) signal_pane_stacon_g1_ParamLimits

0xa4df,	// (0x000286f4) signal_pane_stacon_g1

0xa4eb,	// (0x00028700) signal_pane_stacon_g2_ParamLimits

0xa4eb,	// (0x00028700) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x0002d8b4) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x0002d8b4) signal_pane_stacon_g

0xa51f,	// (0x00028734) title_pane_stacon_t1_ParamLimits

0xa51f,	// (0x00028734) title_pane_stacon_t1

0x5851,	// (0x00023a66) uni_indicator_pane_stacon_g1

0x585b,	// (0x00023a70) uni_indicator_pane_stacon_g2

0x583d,	// (0x00023a52) uni_indicator_pane_stacon_g3

0x5847,	// (0x00023a5c) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x0002d8c0) uni_indicator_pane_stacon_g

0xa544,	// (0x00028759) control_top_pane_stacon_g1

0xa54c,	// (0x00028761) control_top_pane_stacon_t1_ParamLimits

0xa54c,	// (0x00028761) control_top_pane_stacon_t1

0x5865,	// (0x00023a7a) aid_levels_battery_lsc_ParamLimits

0x5865,	// (0x00023a7a) aid_levels_battery_lsc

0xa57d,	// (0x00028792) battery_pane_stacon_g1_ParamLimits

0xa57d,	// (0x00028792) battery_pane_stacon_g1

0xa589,	// (0x0002879e) battery_pane_stacon_g2_ParamLimits

0xa589,	// (0x0002879e) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x0002d8c9) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x0002d8c9) battery_pane_stacon_g

0xa5b8,	// (0x000287cd) navi_icon_pane_stacon

0xa5c8,	// (0x000287dd) navi_navi_pane_stacon

0xa5b8,	// (0x000287cd) navi_text_pane_stacon

0xa544,	// (0x00028759) control_bottom_pane_stacon_g1

0xa5d8,	// (0x000287ed) control_bottom_pane_stacon_t1_ParamLimits

0xa5d8,	// (0x000287ed) control_bottom_pane_stacon_t1

0xa609,	// (0x0002881e) grid_app_pane_ParamLimits

0xa609,	// (0x0002881e) grid_app_pane

0xa625,	// (0x0002883a) scroll_pane_cp15_ParamLimits

0xa625,	// (0x0002883a) scroll_pane_cp15

0xa636,	// (0x0002884b) cell_app_pane_ParamLimits

0xa636,	// (0x0002884b) cell_app_pane

0xa65a,	// (0x0002886f) cell_app_pane_g1_ParamLimits

0xa65a,	// (0x0002886f) cell_app_pane_g1

0x588d,	// (0x00023aa2) cell_app_pane_g2_ParamLimits

0x588d,	// (0x00023aa2) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x0002d8ce) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x0002d8ce) cell_app_pane_g

0xa67e,	// (0x00028893) cell_app_pane_t1_ParamLimits

0xa67e,	// (0x00028893) cell_app_pane_t1

0x5899,	// (0x00023aae) grid_highlight_pane_ParamLimits

0x5899,	// (0x00023aae) grid_highlight_pane

0x5570,	// (0x00023785) cell_highlight_pane_g1

0x5578,	// (0x0002378d) cell_highlight_pane_g2

0x5580,	// (0x00023795) cell_highlight_pane_g3

0x5588,	// (0x0002379d) cell_highlight_pane_g4

0x5590,	// (0x000237a5) cell_highlight_pane_g5

0x5598,	// (0x000237ad) cell_highlight_pane_g6

0x55a0,	// (0x000237b5) cell_highlight_pane_g7

0x55a8,	// (0x000237bd) cell_highlight_pane_g8

0x55b0,	// (0x000237c5) cell_highlight_pane_g9

0x4e61,	// (0x00023076) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x0002d87c) cell_highlight_pane_g

0x58aa,	// (0x00023abf) bg_scroll_pane

0xa6a8,	// (0x000288bd) scroll_handle_pane

0x58f1,	// (0x00023b06) scroll_bg_pane_g1

0x5906,	// (0x00023b1b) scroll_bg_pane_g2

0x591e,	// (0x00023b33) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x0002d8d3) scroll_bg_pane_g

0x5933,	// (0x00023b48) scroll_handle_focus_pane_ParamLimits

0x5933,	// (0x00023b48) scroll_handle_focus_pane

0x58f1,	// (0x00023b06) scroll_handle_pane_g1

0x5940,	// (0x00023b55) scroll_handle_pane_g2

0x591e,	// (0x00023b33) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x0002d8da) scroll_handle_pane_g

0x5622,	// (0x00023837) bg_popup_sub_pane_cp21_ParamLimits

0x5622,	// (0x00023837) bg_popup_sub_pane_cp21

0x5954,	// (0x00023b69) popup_fep_japan_predictive_window_t1_ParamLimits

0x5954,	// (0x00023b69) popup_fep_japan_predictive_window_t1

0x596b,	// (0x00023b80) popup_fep_japan_predictive_window_t2_ParamLimits

0x596b,	// (0x00023b80) popup_fep_japan_predictive_window_t2

0x599e,	// (0x00023bb3) popup_fep_japan_predictive_window_t3_ParamLimits

0x599e,	// (0x00023bb3) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x0002d8e1) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x0002d8e1) popup_fep_japan_predictive_window_t

0x4ee3,	// (0x000230f8) bg_popup_sub_pane_cp23

0x59d5,	// (0x00023bea) listscroll_japin_cand_pane

0x59dd,	// (0x00023bf2) popup_fep_japan_candidate_window_t1

0x59eb,	// (0x00023c00) candidate_pane_ParamLimits

0x59eb,	// (0x00023c00) candidate_pane

0x59fe,	// (0x00023c13) scroll_pane_cp30

0x5a06,	// (0x00023c1b) list_single_popup_jap_candidate_pane_ParamLimits

0x5a06,	// (0x00023c1b) list_single_popup_jap_candidate_pane

0x4ee3,	// (0x000230f8) list_highlight_pane_cp30

0x5a1b,	// (0x00023c30) list_single_popup_jap_candidate_pane_t1

0xa6d1,	// (0x000288e6) level_1_signal

0xa6de,	// (0x000288f3) level_2_signal

0xa6eb,	// (0x00028900) level_3_signal

0xa6f8,	// (0x0002890d) level_4_signal

0xa705,	// (0x0002891a) level_5_signal

0xa712,	// (0x00028927) level_6_signal

0xa71f,	// (0x00028934) level_7_signal

0xa6d1,	// (0x000288e6) level_1_battery

0xa6de,	// (0x000288f3) level_2_battery

0xa6eb,	// (0x00028900) level_3_battery

0xa6f8,	// (0x0002890d) level_4_battery

0xa705,	// (0x0002891a) level_5_battery

0xa712,	// (0x00028927) level_6_battery

0xa71f,	// (0x00028934) level_7_battery

0x5a42,	// (0x00023c57) list_menu_pane_ParamLimits

0x5a42,	// (0x00023c57) list_menu_pane

0x5a58,	// (0x00023c6d) scroll_pane_cp25_ParamLimits

0x5a58,	// (0x00023c6d) scroll_pane_cp25

0xa74b,	// (0x00028960) list_double2_graphic_pane_cp2_ParamLimits

0xa74b,	// (0x00028960) list_double2_graphic_pane_cp2

0xa74b,	// (0x00028960) list_double2_large_graphic_pane_cp2_ParamLimits

0xa74b,	// (0x00028960) list_double2_large_graphic_pane_cp2

0xa74b,	// (0x00028960) list_double2_pane_cp2_ParamLimits

0xa74b,	// (0x00028960) list_double2_pane_cp2

0xa74b,	// (0x00028960) list_double_graphic_pane_cp2_ParamLimits

0xa74b,	// (0x00028960) list_double_graphic_pane_cp2

0xa74b,	// (0x00028960) list_double_large_graphic_pane_cp2_ParamLimits

0xa74b,	// (0x00028960) list_double_large_graphic_pane_cp2

0xa74b,	// (0x00028960) list_double_number_pane_cp2_ParamLimits

0xa74b,	// (0x00028960) list_double_number_pane_cp2

0xa74b,	// (0x00028960) list_double_pane_cp2_ParamLimits

0xa74b,	// (0x00028960) list_double_pane_cp2

0xa75b,	// (0x00028970) list_single_2graphic_pane_cp2_ParamLimits

0xa75b,	// (0x00028970) list_single_2graphic_pane_cp2

0xa75b,	// (0x00028970) list_single_graphic_heading_pane_cp2_ParamLimits

0xa75b,	// (0x00028970) list_single_graphic_heading_pane_cp2

0xa75b,	// (0x00028970) list_single_graphic_pane_cp2_ParamLimits

0xa75b,	// (0x00028970) list_single_graphic_pane_cp2

0xa75b,	// (0x00028970) list_single_heading_pane_cp2_ParamLimits

0xa75b,	// (0x00028970) list_single_heading_pane_cp2

0xa770,	// (0x00028985) list_single_large_graphic_pane_cp2_ParamLimits

0xa770,	// (0x00028985) list_single_large_graphic_pane_cp2

0xa75b,	// (0x00028970) list_single_number_heading_pane_cp2_ParamLimits

0xa75b,	// (0x00028970) list_single_number_heading_pane_cp2

0xa75b,	// (0x00028970) list_single_number_pane_cp2_ParamLimits

0xa75b,	// (0x00028970) list_single_number_pane_cp2

0xa781,	// (0x00028996) list_single_pane_cp2_ParamLimits

0xa781,	// (0x00028996) list_single_pane_cp2

0x5a7a,	// (0x00023c8f) bg_popup_sub_pane_cp22

0xa85f,	// (0x00028a74) popup_side_volume_key_window_g1

0xa883,	// (0x00028a98) popup_side_volume_key_window_t1

0xa89f,	// (0x00028ab4) volume_small_pane_cp1

0x4f31,	// (0x00023146) bg_popup_sub_pane_cp24_ParamLimits

0x4f31,	// (0x00023146) bg_popup_sub_pane_cp24

0x5a90,	// (0x00023ca5) fep_china_uni_candidate_pane_ParamLimits

0x5a90,	// (0x00023ca5) fep_china_uni_candidate_pane

0x5aa4,	// (0x00023cb9) fep_china_uni_entry_pane

0x5ab4,	// (0x00023cc9) popup_fep_china_uni_window_g1

0x5ad0,	// (0x00023ce5) fep_china_uni_entry_pane_g1

0x5ad8,	// (0x00023ced) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x0002d912) fep_china_uni_entry_pane_g

0x5ae0,	// (0x00023cf5) fep_entry_item_pane

0x5aea,	// (0x00023cff) fep_candidate_item_pane

0x5af2,	// (0x00023d07) fep_china_uni_candidate_pane_g1

0x5afa,	// (0x00023d0f) fep_china_uni_candidate_pane_g2

0x5b02,	// (0x00023d17) fep_china_uni_candidate_pane_g3

0x5b0a,	// (0x00023d1f) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x0002d917) fep_china_uni_candidate_pane_g

0x4e61,	// (0x00023076) fep_entry_item_pane_g1

0x5b12,	// (0x00023d27) fep_entry_item_pane_t1_ParamLimits

0x5b12,	// (0x00023d27) fep_entry_item_pane_t1

0x5b28,	// (0x00023d3d) fep_candidate_item_pane_t1_ParamLimits

0x5b28,	// (0x00023d3d) fep_candidate_item_pane_t1

0x5b3d,	// (0x00023d52) fep_candidate_item_pane_t2_ParamLimits

0x5b3d,	// (0x00023d52) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x0002d920) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x0002d920) fep_candidate_item_pane_t

0x4f47,	// (0x0002315c) list_highlight_pane_cp31_ParamLimits

0x4f47,	// (0x0002315c) list_highlight_pane_cp31

0x5b4f,	// (0x00023d64) level_1_signal_lsc

0x5b58,	// (0x00023d6d) level_2_signal_lsc

0x5b61,	// (0x00023d76) level_3_signal_lsc

0x5b6a,	// (0x00023d7f) level_4_signal_lsc

0x5b73,	// (0x00023d88) level_5_signal_lsc

0x5b7c,	// (0x00023d91) level_6_signal_lsc

0x5b85,	// (0x00023d9a) level_7_signal_lsc

0x5b85,	// (0x00023d9a) level_1_battery_lsc

0x5b8e,	// (0x00023da3) level_2_battery_lsc

0x5b97,	// (0x00023dac) level_3_battery_lsc

0x5ba0,	// (0x00023db5) level_4_battery_lsc

0x5ba9,	// (0x00023dbe) level_5_battery_lsc

0x5bb2,	// (0x00023dc7) level_6_battery_lsc

0x5b4f,	// (0x00023d64) level_7_battery_lsc

0x5bbb,	// (0x00023dd0) scroll_handle_focus_pane_g1

0x5bc4,	// (0x00023dd9) scroll_handle_focus_pane_g2

0x5bcd,	// (0x00023de2) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x0002d925) scroll_handle_focus_pane_g

0xe059,	// (0x0002c26e) list_single_2graphic_pane_g1_ParamLimits

0xe059,	// (0x0002c26e) list_single_2graphic_pane_g1

0xda23,	// (0x0002bc38) list_single_2graphic_pane_g2_ParamLimits

0xda23,	// (0x0002bc38) list_single_2graphic_pane_g2

0xd9b5,	// (0x0002bbca) list_single_2graphic_pane_g3_ParamLimits

0xd9b5,	// (0x0002bbca) list_single_2graphic_pane_g3

0xe065,	// (0x0002c27a) list_single_2graphic_pane_g4_ParamLimits

0xe065,	// (0x0002c27a) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x0002d92c) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x0002d92c) list_single_2graphic_pane_g

0xe071,	// (0x0002c286) list_single_2graphic_pane_t1_ParamLimits

0xe071,	// (0x0002c286) list_single_2graphic_pane_t1

0xe09f,	// (0x0002c2b4) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xe09f,	// (0x0002c2b4) list_double2_graphic_large_graphic_pane_g1

0xdc5b,	// (0x0002be70) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xdc5b,	// (0x0002be70) list_double2_graphic_large_graphic_pane_g2

0xdc6a,	// (0x0002be7f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xdc6a,	// (0x0002be7f) list_double2_graphic_large_graphic_pane_g3

0xe0af,	// (0x0002c2c4) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xe0af,	// (0x0002c2c4) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x0002d935) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x0002d935) list_double2_graphic_large_graphic_pane_g

0xe0bb,	// (0x0002c2d0) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xe0bb,	// (0x0002c2d0) list_double2_graphic_large_graphic_pane_t1

0xe0d1,	// (0x0002c2e6) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xe0d1,	// (0x0002c2e6) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x0002d93e) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x0002d93e) list_double2_graphic_large_graphic_pane_t

0x5ca8,	// (0x00023ebd) popup_fast_swap_window_ParamLimits

0x5ca8,	// (0x00023ebd) popup_fast_swap_window

0x5cc4,	// (0x00023ed9) popup_side_volume_key_window

0x5cde,	// (0x00023ef3) stacon_top_pane

0x5ce8,	// (0x00023efd) status_pane_ParamLimits

0x5ce8,	// (0x00023efd) status_pane

0x4e57,	// (0x0002306c) status_small_pane

0x4ee3,	// (0x000230f8) control_pane

0x4ee3,	// (0x000230f8) stacon_bottom_pane

0x54bc,	// (0x000236d1) scroll_pane_cp121

0x5500,	// (0x00023715) set_content_pane

0xa8a7,	// (0x00028abc) bg_active_tab_pane_g1_cp1

0x5bd6,	// (0x00023deb) bg_active_tab_pane_g2_cp1

0xa8b0,	// (0x00028ac5) bg_active_tab_pane_g3_cp1

0xa8a7,	// (0x00028abc) bg_passive_tab_pane_g1_cp1

0x5bd6,	// (0x00023deb) bg_passive_tab_pane_g2_cp1

0xa8b0,	// (0x00028ac5) bg_passive_tab_pane_g3_cp1

0xa8b9,	// (0x00028ace) bg_active_tab_pane_g1_cp2

0x5bd6,	// (0x00023deb) bg_active_tab_pane_g2_cp2

0xa8c2,	// (0x00028ad7) bg_active_tab_pane_g3_cp2

0xa8b9,	// (0x00028ace) bg_passive_tab_pane_g1_cp2

0x5bd6,	// (0x00023deb) bg_passive_tab_pane_g2_cp2

0xa8c2,	// (0x00028ad7) bg_passive_tab_pane_g3_cp2

0xa8cb,	// (0x00028ae0) bg_active_tab_pane_g1_cp3

0x5bd6,	// (0x00023deb) bg_active_tab_pane_g2_cp3

0xa8d4,	// (0x00028ae9) bg_active_tab_pane_g3_cp3

0xa8cb,	// (0x00028ae0) bg_passive_tab_pane_g1_cp3

0x5bd6,	// (0x00023deb) bg_passive_tab_pane_g2_cp3

0xa8d4,	// (0x00028ae9) bg_passive_tab_pane_g3_cp3

0xa8dd,	// (0x00028af2) bg_active_tab_pane_g1_cp4

0x5bd6,	// (0x00023deb) bg_active_tab_pane_g2_cp4

0xa8e6,	// (0x00028afb) bg_active_tab_pane_g3_cp4

0xa8dd,	// (0x00028af2) bg_passive_tab_pane_g1_cp4

0x5bd6,	// (0x00023deb) bg_passive_tab_pane_g2_cp4

0xa8e6,	// (0x00028afb) bg_passive_tab_pane_g3_cp4

0x5c26,	// (0x00023e3b) bg_active_tab_pane_g1_cp5

0x5bd6,	// (0x00023deb) bg_active_tab_pane_g2_cp5

0x5c1d,	// (0x00023e32) bg_active_tab_pane_g3_cp5

0x5c26,	// (0x00023e3b) bg_passive_tab_pane_g1_cp5

0x5bd6,	// (0x00023deb) bg_passive_tab_pane_g2_cp5

0x5c1d,	// (0x00023e32) bg_passive_tab_pane_g3_cp5

0xaa1c,	// (0x00028c31) list_set_graphic_pane_ParamLimits

0xaa1c,	// (0x00028c31) list_set_graphic_pane

0x4ee3,	// (0x000230f8) bg_set_opt_pane_cp4

0x5c2f,	// (0x00023e44) list_set_graphic_pane_g1_ParamLimits

0x5c2f,	// (0x00023e44) list_set_graphic_pane_g1

0x5c3b,	// (0x00023e50) list_set_graphic_pane_g2_ParamLimits

0x5c3b,	// (0x00023e50) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x0002d943) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x0002d943) list_set_graphic_pane_g

0x0009,

0xfab5,	// (0x0002dcca) volume_small_pane_cp_g

0x5c5d,	// (0x00023e72) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x5c5d,	// (0x00023e72) list_double2_large_graphic_pane_g1_cp2

0x5c69,	// (0x00023e7e) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x5c69,	// (0x00023e7e) list_double2_large_graphic_pane_g2_cp2

0x5c78,	// (0x00023e8d) list_double2_large_graphic_pane_g3_cp2

0x5c80,	// (0x00023e95) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x5c80,	// (0x00023e95) list_double2_large_graphic_pane_t1_cp2

0x5c96,	// (0x00023eab) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x5c96,	// (0x00023eab) list_double2_large_graphic_pane_t2_cp2

0x71d9,	// (0x000253ee) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x71d9,	// (0x000253ee) list_double_large_graphic_pane_g1_cp2

0x71ea,	// (0x000253ff) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x71ea,	// (0x000253ff) list_double_large_graphic_pane_g2_cp2

0x5dc3,	// (0x00023fd8) list_double_large_graphic_pane_g3_cp2

0x71f9,	// (0x0002540e) list_double_large_graphic_pane_g4_cp

0x7201,	// (0x00025416) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x7201,	// (0x00025416) list_double_large_graphic_pane_t1_cp2

0x7218,	// (0x0002542d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x7218,	// (0x0002542d) list_double_large_graphic_pane_t2_cp2

0x5cf6,	// (0x00023f0b) list_double2_graphic_pane_g1_cp2_ParamLimits

0x5cf6,	// (0x00023f0b) list_double2_graphic_pane_g1_cp2

0x5d02,	// (0x00023f17) list_double2_graphic_pane_g2_cp2_ParamLimits

0x5d02,	// (0x00023f17) list_double2_graphic_pane_g2_cp2

0x5d11,	// (0x00023f26) list_double2_graphic_pane_g3_cp2

0x5d19,	// (0x00023f2e) list_double2_graphic_pane_t1_cp2_ParamLimits

0x5d19,	// (0x00023f2e) list_double2_graphic_pane_t1_cp2

0x5d2f,	// (0x00023f44) list_double2_graphic_pane_t2_cp2_ParamLimits

0x5d2f,	// (0x00023f44) list_double2_graphic_pane_t2_cp2

0x5d41,	// (0x00023f56) list_single_number_heading_pane_g1_cp2_ParamLimits

0x5d41,	// (0x00023f56) list_single_number_heading_pane_g1_cp2

0x5d4d,	// (0x00023f62) list_single_number_heading_pane_g2_cp2

0x5d55,	// (0x00023f6a) list_single_number_heading_pane_t1_cp2_ParamLimits

0x5d55,	// (0x00023f6a) list_single_number_heading_pane_t1_cp2

0x5d6b,	// (0x00023f80) list_single_number_heading_pane_t2_cp2_ParamLimits

0x5d6b,	// (0x00023f80) list_single_number_heading_pane_t2_cp2

0x5d7d,	// (0x00023f92) list_single_number_heading_pane_t3_cp2_ParamLimits

0x5d7d,	// (0x00023f92) list_single_number_heading_pane_t3_cp2

0x5d41,	// (0x00023f56) list_single_heading_pane_g1_cp2_ParamLimits

0x5d41,	// (0x00023f56) list_single_heading_pane_g1_cp2

0x5d4d,	// (0x00023f62) list_single_heading_pane_g2_cp2

0x5d55,	// (0x00023f6a) list_single_heading_pane_t1_cp2_ParamLimits

0x5d55,	// (0x00023f6a) list_single_heading_pane_t1_cp2

0x6fe3,	// (0x000251f8) list_single_heading_pane_t2_cp2_ParamLimits

0x6fe3,	// (0x000251f8) list_single_heading_pane_t2_cp2

0x6f68,	// (0x0002517d) list_double_graphic_pane_g1_cp2_ParamLimits

0x6f68,	// (0x0002517d) list_double_graphic_pane_g1_cp2

0x6f74,	// (0x00025189) list_double_graphic_pane_g2_cp2_ParamLimits

0x6f74,	// (0x00025189) list_double_graphic_pane_g2_cp2

0x6f83,	// (0x00025198) list_double_graphic_pane_g3_cp2

0x6f8b,	// (0x000251a0) list_double_graphic_pane_t1_cp2_ParamLimits

0x6f8b,	// (0x000251a0) list_double_graphic_pane_t1_cp2

0x6fa1,	// (0x000251b6) list_double_graphic_pane_t2_cp2_ParamLimits

0x6fa1,	// (0x000251b6) list_double_graphic_pane_t2_cp2

0x5db7,	// (0x00023fcc) list_double_number_pane_g1_cp2_ParamLimits

0x5db7,	// (0x00023fcc) list_double_number_pane_g1_cp2

0x5dc3,	// (0x00023fd8) list_double_number_pane_g2_cp2

0x6f2e,	// (0x00025143) list_double_number_pane_t1_cp2_ParamLimits

0x6f2e,	// (0x00025143) list_double_number_pane_t1_cp2

0x6f40,	// (0x00025155) list_double_number_pane_t2_cp2_ParamLimits

0x6f40,	// (0x00025155) list_double_number_pane_t2_cp2

0x6f56,	// (0x0002516b) list_double_number_pane_t3_cp2_ParamLimits

0x6f56,	// (0x0002516b) list_double_number_pane_t3_cp2

0x6ea6,	// (0x000250bb) list_single_graphic_pane_g1_cp2_ParamLimits

0x6ea6,	// (0x000250bb) list_single_graphic_pane_g1_cp2

0x5d41,	// (0x00023f56) list_single_graphic_pane_g2_cp2_ParamLimits

0x5d41,	// (0x00023f56) list_single_graphic_pane_g2_cp2

0x5d4d,	// (0x00023f62) list_single_graphic_pane_g3_cp2

0x6e7e,	// (0x00025093) list_single_graphic_pane_t1_cp2_ParamLimits

0x6e7e,	// (0x00025093) list_single_graphic_pane_t1_cp2

0x5d41,	// (0x00023f56) list_single_number_pane_g1_cp2_ParamLimits

0x5d41,	// (0x00023f56) list_single_number_pane_g1_cp2

0x5d4d,	// (0x00023f62) list_single_number_pane_g2_cp2

0x6e7e,	// (0x00025093) list_single_number_pane_t1_cp2_ParamLimits

0x6e7e,	// (0x00025093) list_single_number_pane_t1_cp2

0x6e94,	// (0x000250a9) list_single_number_pane_t2_cp2_ParamLimits

0x6e94,	// (0x000250a9) list_single_number_pane_t2_cp2

0x5c69,	// (0x00023e7e) list_double2_pane_g1_cp2_ParamLimits

0x5c69,	// (0x00023e7e) list_double2_pane_g1_cp2

0x5c78,	// (0x00023e8d) list_double2_pane_g2_cp2

0x5d8f,	// (0x00023fa4) list_double2_pane_t1_cp2_ParamLimits

0x5d8f,	// (0x00023fa4) list_double2_pane_t1_cp2

0x5da5,	// (0x00023fba) list_double2_pane_t2_cp2_ParamLimits

0x5da5,	// (0x00023fba) list_double2_pane_t2_cp2

0x5db7,	// (0x00023fcc) list_double_pane_g1_cp2_ParamLimits

0x5db7,	// (0x00023fcc) list_double_pane_g1_cp2

0x5dc3,	// (0x00023fd8) list_double_pane_g2_cp2

0x5dcb,	// (0x00023fe0) list_double_pane_t1_cp2_ParamLimits

0x5dcb,	// (0x00023fe0) list_double_pane_t1_cp2

0x5de1,	// (0x00023ff6) list_double_pane_t2_cp2_ParamLimits

0x5de1,	// (0x00023ff6) list_double_pane_t2_cp2

0x5e10,	// (0x00024025) list_single_pane_cp2_g3

0x5d41,	// (0x00023f56) list_single_pane_g1_cp2_ParamLimits

0x5d41,	// (0x00023f56) list_single_pane_g1_cp2

0x5d4d,	// (0x00023f62) list_single_pane_g2_cp2

0x5e20,	// (0x00024035) list_single_pane_t1_cp2_ParamLimits

0x5e20,	// (0x00024035) list_single_pane_t1_cp2

0x5e38,	// (0x0002404d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x5e38,	// (0x0002404d) list_single_large_graphic_pane_g1_cp2

0x5e44,	// (0x00024059) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x5e44,	// (0x00024059) list_single_large_graphic_pane_g2_cp2

0x5e50,	// (0x00024065) list_single_large_graphic_pane_g3_cp2

0x5e58,	// (0x0002406d) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x5e58,	// (0x0002406d) list_single_large_graphic_pane_g4_cp1

0x5e72,	// (0x00024087) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x5e72,	// (0x00024087) list_single_large_graphic_pane_t1_cp2

0x6e60,	// (0x00025075) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x6e60,	// (0x00025075) list_single_graphic_heading_pane_g1_cp2

0x6e3b,	// (0x00025050) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x6e3b,	// (0x00025050) list_single_graphic_heading_pane_g4_cp2

0x5d4d,	// (0x00023f62) list_single_graphic_heading_pane_g5_cp2

0x5d55,	// (0x00023f6a) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5d55,	// (0x00023f6a) list_single_graphic_heading_pane_t1_cp2

0x6e6c,	// (0x00025081) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x6e6c,	// (0x00025081) list_single_graphic_heading_pane_t2_cp2

0x6e2f,	// (0x00025044) list_single_2graphic_pane_g1_cp2_ParamLimits

0x6e2f,	// (0x00025044) list_single_2graphic_pane_g1_cp2

0x6e3b,	// (0x00025050) list_single_2graphic_pane_g2_cp2_ParamLimits

0x6e3b,	// (0x00025050) list_single_2graphic_pane_g2_cp2

0x5d4d,	// (0x00023f62) list_single_2graphic_pane_g3_cp2

0x67ef,	// (0x00024a04) list_single_2graphic_pane_g4_cp2_ParamLimits

0x67ef,	// (0x00024a04) list_single_2graphic_pane_g4_cp2

0x6e4a,	// (0x0002505f) list_single_2graphic_pane_t1_cp2_ParamLimits

0x6e4a,	// (0x0002505f) list_single_2graphic_pane_t1_cp2

0x4e61,	// (0x00023076) list_highlight_pane_g10_cp1

0x6a41,	// (0x00024c56) list_highlight_pane_g1_cp1

0x6a49,	// (0x00024c5e) list_highlight_pane_g2_cp1

0x6a51,	// (0x00024c66) list_highlight_pane_g3_cp1

0x6a59,	// (0x00024c6e) list_highlight_pane_g4_cp1

0x6a61,	// (0x00024c76) list_highlight_pane_g5_cp1

0x6a69,	// (0x00024c7e) list_highlight_pane_g6_cp1

0x6a71,	// (0x00024c86) list_highlight_pane_g7_cp1

0x6a79,	// (0x00024c8e) list_highlight_pane_g8_cp1

0x6a81,	// (0x00024c96) list_highlight_pane_g9_cp1

0xb68c,	// (0x000298a1) form_field_slider_pane_t3

0xb69a,	// (0x000298af) form_field_slider_pane_t4

0x698b,	// (0x00024ba0) slider_form_pane_ParamLimits

0x698b,	// (0x00024ba0) slider_form_pane

0x4ee3,	// (0x000230f8) control_abbreviations

0x4ee3,	// (0x000230f8) control_conventions

0x4ee3,	// (0x000230f8) control_definitions

0x4ee3,	// (0x000230f8) format_table_attribute

0x702d,	// (0x00025242) bg_popup_preview_window_pane_g9

0x4ee3,	// (0x000230f8) format_table_data2

0x4ee3,	// (0x000230f8) format_table_data3

0x4ee3,	// (0x000230f8) format_table_data_example

0x0008,

0x4ee3,	// (0x000230f8) intro_purpose

0xf8c5,	// (0x0002dada) bg_popup_preview_window_pane_g

0x4ee3,	// (0x000230f8) texts_category

0x4ee3,	// (0x000230f8) texts_graphics

0x5e88,	// (0x0002409d) text_digital

0x5e97,	// (0x000240ac) text_primary

0x5ea6,	// (0x000240bb) text_primary_small

0x5eb5,	// (0x000240ca) text_secondary

0x5ec4,	// (0x000240d9) text_title

0x74be,	// (0x000256d3) bg_passive_tab_pane_g1_cp3_srt

0x5bd6,	// (0x00023deb) bg_passive_tab_pane_g2_cp3_srt

0x74b5,	// (0x000256ca) bg_passive_tab_pane_g3_cp3_srt

0x4f47,	// (0x0002315c) bg_active_tab_pane_cp3_srt_ParamLimits

0x4f47,	// (0x0002315c) bg_active_tab_pane_cp3_srt

0x67cd,	// (0x000249e2) tabs_4_active_pane_srt_g1

0xa205,	// (0x0002841a) tabs_4_active_pane_srt_t1_ParamLimits

0xa205,	// (0x0002841a) tabs_4_active_pane_srt_t1

0x74be,	// (0x000256d3) bg_active_tab_pane_g1_cp3_copy1

0x5bd6,	// (0x00023deb) bg_active_tab_pane_g2_cp3_copy1

0x74b5,	// (0x000256ca) bg_active_tab_pane_g3_cp3_copy1

0x4f47,	// (0x0002315c) tabs_2_long_active_pane_srt_ParamLimits

0x4f47,	// (0x0002315c) tabs_2_long_active_pane_srt

0x4f47,	// (0x0002315c) tabs_2_long_passive_pane_srt_ParamLimits

0x4f47,	// (0x0002315c) tabs_2_long_passive_pane_srt

0xa4c1,	// (0x000286d6) bg_passive_tab_pane_cp4_srt_ParamLimits

0xa4c1,	// (0x000286d6) bg_passive_tab_pane_cp4_srt

0x73e5,	// (0x000255fa) bg_passive_tab_pane_g1_cp4_srt

0x5bd6,	// (0x00023deb) bg_passive_tab_pane_g2_cp4_srt

0x73dc,	// (0x000255f1) bg_passive_tab_pane_g3_cp4_srt

0xa4a0,	// (0x000286b5) bg_active_tab_pane_cp4_srt_ParamLimits

0xa4a0,	// (0x000286b5) bg_active_tab_pane_cp4_srt

0xa4ae,	// (0x000286c3) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa4ae,	// (0x000286c3) tabs_2_long_active_pane_srt_t1

0x73e5,	// (0x000255fa) bg_active_tab_pane_g1_cp4_srt

0x5bd6,	// (0x00023deb) bg_active_tab_pane_g2_cp4_srt

0x73dc,	// (0x000255f1) bg_active_tab_pane_g3_cp4_srt

0x4f31,	// (0x00023146) tabs_3_long_active_pane_srt_ParamLimits

0x4f31,	// (0x00023146) tabs_3_long_active_pane_srt

0x4f31,	// (0x00023146) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x4f31,	// (0x00023146) tabs_3_long_passive_pane_cp_srt

0x4f31,	// (0x00023146) tabs_3_long_passive_pane_srt_ParamLimits

0x4f31,	// (0x00023146) tabs_3_long_passive_pane_srt

0xa4c1,	// (0x000286d6) bg_passive_tab_pane_cp5_srt_ParamLimits

0xa4c1,	// (0x000286d6) bg_passive_tab_pane_cp5_srt

0x5c26,	// (0x00023e3b) bg_passive_tab_pane_g1_cp5_srt

0x5bd6,	// (0x00023deb) bg_passive_tab_pane_g2_cp5_srt

0x5c1d,	// (0x00023e32) bg_passive_tab_pane_g3_cp5_srt

0xa4a0,	// (0x000286b5) bg_active_tab_pane_cp5_srt_ParamLimits

0xa4a0,	// (0x000286b5) bg_active_tab_pane_cp5_srt

0xa4cd,	// (0x000286e2) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa4cd,	// (0x000286e2) tabs_3_long_active_pane_srt_t1

0x5c26,	// (0x00023e3b) bg_active_tab_pane_g1_cp5_srt

0x5bd6,	// (0x00023deb) bg_active_tab_pane_g2_cp5_srt

0x5c1d,	// (0x00023e32) bg_active_tab_pane_g3_cp5_srt

0x73ce,	// (0x000255e3) navi_text_pane_srt_t1

0x73c6,	// (0x000255db) navi_icon_pane_srt_g1

0x5fdc,	// (0x000241f1) midp_editing_number_pane_srt

0x5ed3,	// (0x000240e8) midp_ticker_pane_srt

0x5fe4,	// (0x000241f9) midp_ticker_pane_srt_g1

0x5fec,	// (0x00024201) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x0002d962) midp_ticker_pane_srt_g

0x5ff4,	// (0x00024209) midp_ticker_pane_srt_t1

0x73b7,	// (0x000255cc) midp_editing_number_pane_t1_copy1

0xaa33,	// (0x00028c48) listscroll_midp_pane

0xaa33,	// (0x00028c48) midp_form_pane

0x5edb,	// (0x000240f0) midp_info_popup_window_ParamLimits

0x5edb,	// (0x000240f0) midp_info_popup_window

0x5622,	// (0x00023837) bg_popup_sub_pane_cp50_ParamLimits

0x5622,	// (0x00023837) bg_popup_sub_pane_cp50

0x6656,	// (0x0002486b) listscroll_midp_info_pane_ParamLimits

0x6656,	// (0x0002486b) listscroll_midp_info_pane

0x663e,	// (0x00024853) listscroll_form_midp_pane_ParamLimits

0x663e,	// (0x00024853) listscroll_form_midp_pane

0x664a,	// (0x0002485f) scroll_bar_cp050

0xb674,	// (0x00029889) list_midp_pane

0x7cf2,	// (0x00025f07) signal_pane_g2_cp

0x6570,	// (0x00024785) listscroll_midp_info_pane_t1_ParamLimits

0x6570,	// (0x00024785) listscroll_midp_info_pane_t1

0x6588,	// (0x0002479d) listscroll_midp_info_pane_t2_ParamLimits

0x6588,	// (0x0002479d) listscroll_midp_info_pane_t2

0x65c6,	// (0x000247db) listscroll_midp_info_pane_t3_ParamLimits

0x65c6,	// (0x000247db) listscroll_midp_info_pane_t3

0x6600,	// (0x00024815) listscroll_midp_info_pane_t4_ParamLimits

0x6600,	// (0x00024815) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x0002da15) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x0002da15) listscroll_midp_info_pane_t

0x5677,	// (0x0002388c) scroll_pane_cp21

0x6514,	// (0x00024729) form_midp_field_choice_group_pane

0x651d,	// (0x00024732) form_midp_field_text_pane

0x6556,	// (0x0002476b) form_midp_field_time_pane

0x655e,	// (0x00024773) form_midp_gauge_slider_pane

0x6567,	// (0x0002477c) form_midp_gauge_wait_pane

0x4ee3,	// (0x000230f8) form_midp_image_pane

0xe1b7,	// (0x0002c3cc) list_single_midp_pane_ParamLimits

0xe1b7,	// (0x0002c3cc) list_single_midp_pane

0x64e2,	// (0x000246f7) form_midp_field_text_pane_t1

0x6338,	// (0x0002454d) input_focus_pane_cp050

0x6503,	// (0x00024718) list_midp_form_text_pane

0x64b1,	// (0x000246c6) form_midp_field_choice_group_pane_t1

0x64bf,	// (0x000246d4) input_focus_pane_cp051

0x64d3,	// (0x000246e8) list_midp_choice_pane

0x4ee3,	// (0x000230f8) status_idle_pane

0x6495,	// (0x000246aa) form_midp_field_time_pane_t1

0x4e61,	// (0x00023076) wait_anim_pane_g2_copy1

0x64a3,	// (0x000246b8) form_midp_field_time_pane_t2

0x0001,

0x5f46,	// (0x0002415b) aid_navinavi_width_2_pane

0xf7fb,	// (0x0002da10) form_midp_field_time_pane_t

0x4ee3,	// (0x000230f8) input_focus_pane_cp052

0x4ee3,	// (0x000230f8) bg_input_focus_pane_cp040

0x6471,	// (0x00024686) form_midp_gauge_slider_pane_t1

0x647f,	// (0x00024694) form_midp_gauge_slider_pane_t2

0xb658,	// (0x0002986d) form_midp_gauge_slider_pane_t3

0xb666,	// (0x0002987b) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x0002da07) form_midp_gauge_slider_pane_t

0x648d,	// (0x000246a2) form_midp_slider_pane

0x4f47,	// (0x0002315c) bg_input_focus_pane_cp041_ParamLimits

0x4f47,	// (0x0002315c) bg_input_focus_pane_cp041

0x6441,	// (0x00024656) form_midp_gauge_wait_pane_t1_ParamLimits

0x6441,	// (0x00024656) form_midp_gauge_wait_pane_t1

0x6453,	// (0x00024668) form_midp_gauge_wait_pane_t2_ParamLimits

0x6453,	// (0x00024668) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x0002da02) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x0002da02) form_midp_gauge_wait_pane_t

0x6465,	// (0x0002467a) form_midp_wait_pane_ParamLimits

0x6465,	// (0x0002467a) form_midp_wait_pane

0x640b,	// (0x00024620) form_midp_image_pane_g1

0x6414,	// (0x00024629) form_midp_image_pane_t1

0x6423,	// (0x00024638) form_midp_image_pane_t2

0x6432,	// (0x00024647) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x0002d9fb) form_midp_image_pane_t

0x6402,	// (0x00024617) list_single_midp_pane_g1

0xe1a8,	// (0x0002c3bd) list_single_midp_pane_t1

0x63ee,	// (0x00024603) list_midp_form_item_pane_ParamLimits

0x63ee,	// (0x00024603) list_midp_form_item_pane

0x5eee,	// (0x00024103) list_midp_form_item_pane_t1

0x5efd,	// (0x00024112) midp_ticker_pane_g1

0x5f09,	// (0x0002411e) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x0002d948) midp_ticker_pane_g

0x5f15,	// (0x0002412a) midp_ticker_pane_t1

0x73b7,	// (0x000255cc) midp_editing_number_pane_t1

0x744b,	// (0x00025660) midp_editing_number_pane

0x7457,	// (0x0002566c) midp_ticker_pane

0x73a7,	// (0x000255bc) ai_message_heading_pane

0x4ee3,	// (0x000230f8) bg_popup_window_pane_cp14

0x73af,	// (0x000255c4) listscroll_ai_message_pane

0x7331,	// (0x00025546) ai_message_heading_pane_g1_ParamLimits

0x7331,	// (0x00025546) ai_message_heading_pane_g1

0x733d,	// (0x00025552) ai_message_heading_pane_g2_ParamLimits

0x733d,	// (0x00025552) ai_message_heading_pane_g2

0x7349,	// (0x0002555e) ai_message_heading_pane_g3_ParamLimits

0x7349,	// (0x0002555e) ai_message_heading_pane_g3

0x7355,	// (0x0002556a) ai_message_heading_pane_g4_ParamLimits

0x7355,	// (0x0002556a) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x0002db3c) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x0002db3c) ai_message_heading_pane_g

0x7361,	// (0x00025576) ai_message_heading_pane_t1_ParamLimits

0x7361,	// (0x00025576) ai_message_heading_pane_t1

0x737b,	// (0x00025590) ai_message_heading_pane_t2_ParamLimits

0x737b,	// (0x00025590) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x0002db45) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x0002db45) ai_message_heading_pane_t

0x738d,	// (0x000255a2) bg_popup_heading_pane_cp1_ParamLimits

0x738d,	// (0x000255a2) bg_popup_heading_pane_cp1

0x731f,	// (0x00025534) list_ai_message_pane_ParamLimits

0x731f,	// (0x00025534) list_ai_message_pane

0x5677,	// (0x0002388c) scroll_pane_cp10

0x72bb,	// (0x000254d0) list_ai_message_pane_g1

0x72c3,	// (0x000254d8) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x0002db19) list_ai_message_pane_g

0x72cb,	// (0x000254e0) list_ai_message_pane_t1_ParamLimits

0x72cb,	// (0x000254e0) list_ai_message_pane_t1

0x72e0,	// (0x000254f5) list_ai_message_pane_t2_ParamLimits

0x72e0,	// (0x000254f5) list_ai_message_pane_t2

0x72f5,	// (0x0002550a) list_ai_message_pane_t3_ParamLimits

0x72f5,	// (0x0002550a) list_ai_message_pane_t3

0x730a,	// (0x0002551f) list_ai_message_pane_t4_ParamLimits

0x730a,	// (0x0002551f) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x0002db1e) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x0002db1e) list_ai_message_pane_t

0x72a9,	// (0x000254be) cell_ai_soft_ind_pane_ParamLimits

0x72a9,	// (0x000254be) cell_ai_soft_ind_pane

0x5f27,	// (0x0002413c) cell_ai_soft_ind_pane_g1_ParamLimits

0x5f27,	// (0x0002413c) cell_ai_soft_ind_pane_g1

0x4ee3,	// (0x000230f8) grid_highlight_cp1

0x5f34,	// (0x00024149) text_secondary_cp56_ParamLimits

0x5f34,	// (0x00024149) text_secondary_cp56

0x727e,	// (0x00025493) example_general_pane_ParamLimits

0x727e,	// (0x00025493) example_general_pane

0x728a,	// (0x0002549f) example_parent_pane_g1_ParamLimits

0x728a,	// (0x0002549f) example_parent_pane_g1

0x7296,	// (0x000254ab) example_parent_pane_t1_ParamLimits

0x7296,	// (0x000254ab) example_parent_pane_t1

0xb01f,	// (0x00029234) popup_preview_text_window_ParamLimits

0xb01f,	// (0x00029234) popup_preview_text_window

0x5e18,	// (0x0002402d) list_single_pane_cp2_g4

0x5148,	// (0x0002335d) bg_popup_preview_window_pane_ParamLimits

0x5148,	// (0x0002335d) bg_popup_preview_window_pane

0x7035,	// (0x0002524a) popup_preview_text_window_t1_ParamLimits

0x7035,	// (0x0002524a) popup_preview_text_window_t1

0x7053,	// (0x00025268) popup_preview_text_window_t2_ParamLimits

0x7053,	// (0x00025268) popup_preview_text_window_t2

0x709c,	// (0x000252b1) popup_preview_text_window_t3_ParamLimits

0x709c,	// (0x000252b1) popup_preview_text_window_t3

0x70e1,	// (0x000252f6) popup_preview_text_window_t4_ParamLimits

0x70e1,	// (0x000252f6) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x0002daed) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x0002daed) popup_preview_text_window_t

0x715f,	// (0x00025374) scroll_pane_cp11

0x62ac,	// (0x000244c1) bg_popup_preview_window_pane_g1

0x6ff5,	// (0x0002520a) bg_popup_preview_window_pane_g2

0x6ffd,	// (0x00025212) bg_popup_preview_window_pane_g3

0x7005,	// (0x0002521a) bg_popup_preview_window_pane_g4

0x700d,	// (0x00025222) bg_popup_preview_window_pane_g5

0x7015,	// (0x0002522a) bg_popup_preview_window_pane_g6

0x701d,	// (0x00025232) bg_popup_preview_window_pane_g7

0x7025,	// (0x0002523a) bg_popup_preview_window_pane_g8

0x9e6f,	// (0x00028084) aid_popup_width_pane

0xb001,	// (0x00029216) popup_midp_note_alarm_window_ParamLimits

0xb001,	// (0x00029216) popup_midp_note_alarm_window

0x5509,	// (0x0002371e) data_form_pane_ParamLimits

0xdef2,	// (0x0002c107) form_field_data_pane_g1

0xa462,	// (0x00028677) form_field_data_pane_t1_ParamLimits

0x5515,	// (0x0002372a) input_focus_pane_ParamLimits

0x5523,	// (0x00023738) data_form_wide_pane_ParamLimits

0xdefa,	// (0x0002c10f) form_field_data_wide_pane_g1

0xdf06,	// (0x0002c11b) form_field_data_wide_pane_t1_ParamLimits

0x533b,	// (0x00023550) input_focus_pane_cp6_ParamLimits

0xa47a,	// (0x0002868f) input_popup_find_pane_g1_ParamLimits

0xa47a,	// (0x0002868f) input_popup_find_pane_g1

0xa599,	// (0x000287ae) aid_navi_side_left_pane

0xa5a9,	// (0x000287be) aid_navi_side_right_pane

0x6b12,	// (0x00024d27) bg_popup_window_pane_cp30_ParamLimits

0x6b12,	// (0x00024d27) bg_popup_window_pane_cp30

0x6b8c,	// (0x00024da1) popup_midp_note_alarm_window_g1_ParamLimits

0x6b8c,	// (0x00024da1) popup_midp_note_alarm_window_g1

0x6bbc,	// (0x00024dd1) popup_midp_note_alarm_window_t1_ParamLimits

0x6bbc,	// (0x00024dd1) popup_midp_note_alarm_window_t1

0x6c5d,	// (0x00024e72) popup_midp_note_alarm_window_t2_ParamLimits

0x6c5d,	// (0x00024e72) popup_midp_note_alarm_window_t2

0x6d0b,	// (0x00024f20) popup_midp_note_alarm_window_t3_ParamLimits

0x6d0b,	// (0x00024f20) popup_midp_note_alarm_window_t3

0x6d33,	// (0x00024f48) popup_midp_note_alarm_window_t4_ParamLimits

0x6d33,	// (0x00024f48) popup_midp_note_alarm_window_t4

0x6d53,	// (0x00024f68) popup_midp_note_alarm_window_t5_ParamLimits

0x6d53,	// (0x00024f68) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x0002da8a) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x0002da8a) popup_midp_note_alarm_window_t

0x6dff,	// (0x00025014) wait_bar_pane_cp1_ParamLimits

0x6dff,	// (0x00025014) wait_bar_pane_cp1

0x4ee3,	// (0x000230f8) wait_anim_pane_copy1

0x4ee3,	// (0x000230f8) wait_border_pane_copy1

0x6858,	// (0x00024a6d) wait_border_pane_g1_copy1

0xdf20,	// (0x0002c135) form_field_popup_pane_g1

0xdf28,	// (0x0002c13d) form_field_popup_pane_t1_ParamLimits

0x5515,	// (0x0002372a) input_focus_pane_cp7_ParamLimits

0x5509,	// (0x0002371e) list_form_pane_ParamLimits

0xdf40,	// (0x0002c155) form_field_popup_wide_pane_g1

0xdf48,	// (0x0002c15d) form_field_popup_wide_pane_t1_ParamLimits

0x5515,	// (0x0002372a) input_focus_pane_cp8_ParamLimits

0x554f,	// (0x00023764) list_form_wide_pane_ParamLimits

0x74e6,	// (0x000256fb) aid_size_cell_graphic_pane

0xdfcd,	// (0x0002c1e2) data_form_pane_t1_ParamLimits

0xe1df,	// (0x0002c3f4) data_form_wide_pane_t1_ParamLimits

0xb28f,	// (0x000294a4) bg_status_flat_pane

0xa183,	// (0x00028398) title_pane_t1_ParamLimits

0x4ef9,	// (0x0002310e) title_pane_t2_ParamLimits

0x4f1f,	// (0x00023134) title_pane_t3_ParamLimits

0xf532,	// (0x0002d747) title_pane_t_ParamLimits

0xa6d1,	// (0x000288e6) level_1_signal_ParamLimits

0xa6de,	// (0x000288f3) level_2_signal_ParamLimits

0xa6eb,	// (0x00028900) level_3_signal_ParamLimits

0xa6f8,	// (0x0002890d) level_4_signal_ParamLimits

0xa705,	// (0x0002891a) level_5_signal_ParamLimits

0xa712,	// (0x00028927) level_6_signal_ParamLimits

0xa71f,	// (0x00028934) level_7_signal_ParamLimits

0xa6d1,	// (0x000288e6) level_1_battery_ParamLimits

0xa6de,	// (0x000288f3) level_2_battery_ParamLimits

0xa6eb,	// (0x00028900) level_3_battery_ParamLimits

0xa6f8,	// (0x0002890d) level_4_battery_ParamLimits

0xa705,	// (0x0002891a) level_5_battery_ParamLimits

0xa712,	// (0x00028927) level_6_battery_ParamLimits

0xa71f,	// (0x00028934) level_7_battery_ParamLimits

0x6a41,	// (0x00024c56) bg_status_flat_pane_g1

0x6a49,	// (0x00024c5e) bg_status_flat_pane_g2

0x6a51,	// (0x00024c66) bg_status_flat_pane_g3

0x6a59,	// (0x00024c6e) bg_status_flat_pane_g4

0x6a61,	// (0x00024c76) bg_status_flat_pane_g5

0x6a69,	// (0x00024c7e) bg_status_flat_pane_g6

0x6a71,	// (0x00024c86) bg_status_flat_pane_g7

0xa1eb,	// (0x00028400) tabs_3_active_pane_t1_ParamLimits

0xa1eb,	// (0x00028400) tabs_3_passive_pane_t1_ParamLimits

0xa205,	// (0x0002841a) tabs_4_active_pane_t1_ParamLimits

0xa205,	// (0x0002841a) tabs_4_1_passive_pane_t1_ParamLimits

0xa48e,	// (0x000286a3) tabs_2_active_pane_t1_ParamLimits

0xa48e,	// (0x000286a3) tabs_2_passive_pane_t1_ParamLimits

0xa4a0,	// (0x000286b5) bg_active_tab_pane_cp4_ParamLimits

0xa4ae,	// (0x000286c3) tabs_2_long_active_pane_t1_ParamLimits

0xa4c1,	// (0x000286d6) bg_passive_tab_pane_cp4_ParamLimits

0xb581,	// (0x00029796) list_single_midp_graphic_pane_t1_ParamLimits

0xa4a0,	// (0x000286b5) bg_active_tab_pane_cp5_ParamLimits

0xa4cd,	// (0x000286e2) tabs_3_long_active_pane_t1_ParamLimits

0xa4c1,	// (0x000286d6) bg_passive_tab_pane_cp5_ParamLimits

0xb581,	// (0x00029796) list_single_midp_graphic_pane_t1

0xb28f,	// (0x000294a4) bg_status_flat_pane_ParamLimits

0x618b,	// (0x000243a0) indicator_pane_cp2_ParamLimits

0x618b,	// (0x000243a0) indicator_pane_cp2

0xb3d8,	// (0x000295ed) navi_pane_srt_ParamLimits

0xb3d8,	// (0x000295ed) navi_pane_srt

0x61b3,	// (0x000243c8) popup_clock_digital_analogue_window_cp1

0x4f8b,	// (0x000231a0) indicator_pane_t1

0x5ed3,	// (0x000240e8) copy_highlight_pane

0x5ed3,	// (0x000240e8) cursor_graphics_pane

0x5ed3,	// (0x000240e8) graphic_within_text_pane

0x5ed3,	// (0x000240e8) link_highlight_pane

0x7122,	// (0x00025337) popup_preview_text_window_t5_ParamLimits

0x7122,	// (0x00025337) popup_preview_text_window_t5

0x5f4e,	// (0x00024163) cursor_digital_pane

0x5f4e,	// (0x00024163) cursor_primary_pane

0x5f5f,	// (0x00024174) cursor_primary_small_pane

0x5f67,	// (0x0002417c) cursor_secondary_pane

0x5f6f,	// (0x00024184) cursor_title_pane

0x5f4e,	// (0x00024163) link_highlight_digital_pane

0x5f56,	// (0x0002416b) link_highlight_primary_pane

0x5f5f,	// (0x00024174) link_highlight_primary_small_pane

0x5f67,	// (0x0002417c) link_highlight_secondary_pane

0x5f6f,	// (0x00024184) link_highlight_title_pane

0x5f4e,	// (0x00024163) copy_highlight_digital_pane

0x5f4e,	// (0x00024163) copy_highlight_primary_pane

0x5f5f,	// (0x00024174) copy_highlight_primary_small_pane

0x5f67,	// (0x0002417c) copy_highlight_secondary_pane

0x5f6f,	// (0x00024184) copy_highlight_title_pane

0x5f67,	// (0x0002417c) graphic_text_digital_pane

0x6ac1,	// (0x00024cd6) graphic_text_primary_pane

0x6aca,	// (0x00024cdf) graphic_text_primary_small_pane

0x5f5f,	// (0x00024174) graphic_text_secondary_pane

0x5f4e,	// (0x00024163) graphic_text_title_pane

0xaada,	// (0x00028cef) cursor_primary_pane_g1

0x6ab3,	// (0x00024cc8) cursor_text_primary_t1

0xb6b8,	// (0x000298cd) cursor_primary_small_pane_g1

0x6aa5,	// (0x00024cba) cursor_text_primary_small_t1

0xb6b0,	// (0x000298c5) cursor_primary_small_pane_g1_copy1

0x6a97,	// (0x00024cac) cursor_text_primary_small_t1_copy1

0x6a89,	// (0x00024c9e) cursor_text_title_t1

0xb6a8,	// (0x000298bd) cursor_title_pane_g1

0xaada,	// (0x00028cef) cursor_digital_pane_g1

0x5f77,	// (0x0002418c) cursor_text_digital_t1

0x5f85,	// (0x0002419a) link_highlight_primary_pane_g1

0x6a32,	// (0x00024c47) link_highlight_primary_pane_t1

0x5f85,	// (0x0002419a) link_highlight_primary_small_pane_g1

0x5f8d,	// (0x000241a2) link_highlight_primary_small_pane_t1

0x5f9c,	// (0x000241b1) link_highlight_secondary_pane_g1

0x5fa4,	// (0x000241b9) link_highlight_secondary_pane_t1

0x6997,	// (0x00024bac) link_highlight_title_pane_g1

0x69ae,	// (0x00024bc3) link_highlight_title_pane_t1

0x6997,	// (0x00024bac) link_highlight_digital_pane_g1

0x699f,	// (0x00024bb4) link_highlight_digital_pane_t1

0x6873,	// (0x00024a88) copy_highlight_primary_pane_g1

0x6899,	// (0x00024aae) copy_highlight_primary_pane_t1

0x6873,	// (0x00024a88) copy_highlight_primary_small_pane_g1

0x688a,	// (0x00024a9f) copy_highlight_primary_small_pane_t1

0x5fb3,	// (0x000241c8) copy_highlight_secondary_pane_g1

0x5fbb,	// (0x000241d0) copy_highlight_secondary_pane_t1

0x6873,	// (0x00024a88) copy_highlight_title_pane_g1

0x687b,	// (0x00024a90) copy_highlight_title_pane_t1

0x6873,	// (0x00024a88) copy_highlight_digital_pane_g1

0x7616,	// (0x0002582b) copy_highlight_digital_pane_t1

0x756a,	// (0x0002577f) graphic_text_primary_pane_g1

0x75fa,	// (0x0002580f) graphic_text_primary_pane_t1

0x7608,	// (0x0002581d) graphic_text_primary_pane_t2

0x0001,

0xf99f,	// (0x0002dbb4) graphic_text_primary_pane_t

0x75d6,	// (0x000257eb) graphic_text_primary_small_pane_g1

0x75de,	// (0x000257f3) graphic_text_primary_small_pane_t1

0x75ec,	// (0x00025801) graphic_text_primary_small_pane_t2

0x0001,

0xf99a,	// (0x0002dbaf) graphic_text_primary_small_pane_t

0x75b2,	// (0x000257c7) graphic_text_secondary_pane_g1

0x75ba,	// (0x000257cf) graphic_text_secondary_pane_t1

0x75c8,	// (0x000257dd) graphic_text_secondary_pane_t2

0x0001,

0xf995,	// (0x0002dbaa) graphic_text_secondary_pane_t

0x758e,	// (0x000257a3) graphic_text_title_pane_g1

0x7596,	// (0x000257ab) graphic_text_title_pane_t1

0x75a4,	// (0x000257b9) graphic_text_title_pane_t2

0x0001,

0xf990,	// (0x0002dba5) graphic_text_title_pane_t

0x756a,	// (0x0002577f) graphic_text_digital_pane_g1

0x7572,	// (0x00025787) graphic_text_digital_pane_t1

0x7580,	// (0x00025795) graphic_text_digital_pane_t2

0x0001,

0xf98b,	// (0x0002dba0) graphic_text_digital_pane_t

0x4f47,	// (0x0002315c) navi_icon_pane_srt_ParamLimits

0x4f47,	// (0x0002315c) navi_icon_pane_srt

0x4ee3,	// (0x000230f8) navi_midp_pane_srt

0x4ee3,	// (0x000230f8) navi_navi_pane_srt

0x4f47,	// (0x0002315c) navi_text_pane_srt_ParamLimits

0x4f47,	// (0x0002315c) navi_text_pane_srt

0x7535,	// (0x0002574a) navi_navi_icon_text_pane_srt

0x754f,	// (0x00025764) navi_navi_pane_srt_g1_ParamLimits

0x754f,	// (0x00025764) navi_navi_pane_srt_g1

0x753d,	// (0x00025752) navi_navi_pane_srt_g2_ParamLimits

0x753d,	// (0x00025752) navi_navi_pane_srt_g2

0x0001,

0xf8c0,	// (0x0002dad5) navi_navi_pane_srt_g_ParamLimits

0xf8c0,	// (0x0002dad5) navi_navi_pane_srt_g

0x7561,	// (0x00025776) navi_navi_tabs_pane_srt

0x7535,	// (0x0002574a) navi_navi_text_pane_srt

0x7535,	// (0x0002574a) navi_navi_volume_pane_srt

0x7526,	// (0x0002573b) navi_navi_text_pane_srt_t1

0xbcc7,	// (0x00029edc) navi_navi_volume_pane_srt_g1

0xbccf,	// (0x00029ee4) volume_small_pane_srt_ParamLimits

0xbccf,	// (0x00029ee4) volume_small_pane_srt

0xaae2,	// (0x00028cf7) volume_small_pane_srt_g1_ParamLimits

0xaae2,	// (0x00028cf7) volume_small_pane_srt_g1

0xaaf2,	// (0x00028d07) volume_small_pane_srt_g2_ParamLimits

0xaaf2,	// (0x00028d07) volume_small_pane_srt_g2

0xab03,	// (0x00028d18) volume_small_pane_srt_g3_ParamLimits

0xab03,	// (0x00028d18) volume_small_pane_srt_g3

0xab14,	// (0x00028d29) volume_small_pane_srt_g4_ParamLimits

0xab14,	// (0x00028d29) volume_small_pane_srt_g4

0xab25,	// (0x00028d3a) volume_small_pane_srt_g5_ParamLimits

0xab25,	// (0x00028d3a) volume_small_pane_srt_g5

0xab36,	// (0x00028d4b) volume_small_pane_srt_g6_ParamLimits

0xab36,	// (0x00028d4b) volume_small_pane_srt_g6

0xab47,	// (0x00028d5c) volume_small_pane_srt_g7_ParamLimits

0xab47,	// (0x00028d5c) volume_small_pane_srt_g7

0xab58,	// (0x00028d6d) volume_small_pane_srt_g8_ParamLimits

0xab58,	// (0x00028d6d) volume_small_pane_srt_g8

0xab69,	// (0x00028d7e) volume_small_pane_srt_g9_ParamLimits

0xab69,	// (0x00028d7e) volume_small_pane_srt_g9

0xab7a,	// (0x00028d8f) volume_small_pane_srt_g10_ParamLimits

0xab7a,	// (0x00028d8f) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x0002d94d) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x0002d94d) volume_small_pane_srt_g

0x51f1,	// (0x00023406) query_popup_data_pane_cp2

0x750c,	// (0x00025721) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x750c,	// (0x00025721) navi_navi_icon_text_pane_srt_t1

0x6ac1,	// (0x00024cd6) navi_tabs_2_long_pane_srt

0x6ac1,	// (0x00024cd6) navi_tabs_2_pane_srt

0x6ac1,	// (0x00024cd6) navi_tabs_3_long_pane_srt

0x6ac1,	// (0x00024cd6) navi_tabs_3_pane_srt

0x6ac1,	// (0x00024cd6) navi_tabs_4_pane_srt

0xbca7,	// (0x00029ebc) tabs_2_active_pane_srt_ParamLimits

0xbca7,	// (0x00029ebc) tabs_2_active_pane_srt

0xbcb7,	// (0x00029ecc) tabs_2_passive_pane_srt_ParamLimits

0xbcb7,	// (0x00029ecc) tabs_2_passive_pane_srt

0x56ae,	// (0x000238c3) bg_passive_tab_pane_cp1_srt_ParamLimits

0x56ae,	// (0x000238c3) bg_passive_tab_pane_cp1_srt

0x67e6,	// (0x000249fb) bg_passive_tab_pane_g1_cp1_srt

0x5bd6,	// (0x00023deb) bg_passive_tab_pane_g2_cp1_srt

0x67dd,	// (0x000249f2) bg_passive_tab_pane_g3_cp1_srt

0x4f47,	// (0x0002315c) bg_active_tab_pane_cp1_srt_ParamLimits

0x4f47,	// (0x0002315c) bg_active_tab_pane_cp1_srt

0x67d5,	// (0x000249ea) tabs_2_active_pane_srt_g1

0xa48e,	// (0x000286a3) tabs_2_active_pane_srt_t1_ParamLimits

0xa48e,	// (0x000286a3) tabs_2_active_pane_srt_t1

0x67e6,	// (0x000249fb) bg_active_tab_pane_g1_cp1_srt

0x5bd6,	// (0x00023deb) bg_active_tab_pane_g2_cp1_srt

0x67dd,	// (0x000249f2) bg_active_tab_pane_g3_cp1_srt

0xbc74,	// (0x00029e89) tabs_3_active_pane_srt_ParamLimits

0xbc74,	// (0x00029e89) tabs_3_active_pane_srt

0xbc85,	// (0x00029e9a) tabs_3_passive_pane_cp_srt_ParamLimits

0xbc85,	// (0x00029e9a) tabs_3_passive_pane_cp_srt

0xbc96,	// (0x00029eab) tabs_3_passive_pane_srt_ParamLimits

0xbc96,	// (0x00029eab) tabs_3_passive_pane_srt

0x56ae,	// (0x000238c3) bg_passive_tab_pane_cp2_srt_ParamLimits

0x56ae,	// (0x000238c3) bg_passive_tab_pane_cp2_srt

0x5fd3,	// (0x000241e8) bg_passive_tab_pane_g1_cp2_srt

0x5bd6,	// (0x00023deb) bg_passive_tab_pane_g2_cp2_srt

0x5fca,	// (0x000241df) bg_passive_tab_pane_g3_cp2_srt

0x4f47,	// (0x0002315c) bg_active_tab_pane_cp2_srt_ParamLimits

0x4f47,	// (0x0002315c) bg_active_tab_pane_cp2_srt

0x74fc,	// (0x00025711) tabs_3_active_pane_srt_g1

0xa1eb,	// (0x00028400) tabs_3_active_pane_srt_t1_ParamLimits

0xa1eb,	// (0x00028400) tabs_3_active_pane_srt_t1

0x5fd3,	// (0x000241e8) bg_active_tab_pane_g1_cp2_srt

0x5bd6,	// (0x00023deb) bg_active_tab_pane_g2_cp2_srt

0x5fca,	// (0x000241df) bg_active_tab_pane_g3_cp2_srt

0xbc2c,	// (0x00029e41) tabs_4_active_pane_srt_ParamLimits

0xbc2c,	// (0x00029e41) tabs_4_active_pane_srt

0xbc3e,	// (0x00029e53) tabs_4_passive_pane_cp2_srt_ParamLimits

0xbc3e,	// (0x00029e53) tabs_4_passive_pane_cp2_srt

0xad3e,	// (0x00028f53) aid_size_cell_toolbar

0xa4c1,	// (0x000286d6) main_idle_act_pane_ParamLimits

0xaeb9,	// (0x000290ce) popup_large_graphic_colour_window_ParamLimits

0xb170,	// (0x00029385) popup_toolbar_window_ParamLimits

0xb170,	// (0x00029385) popup_toolbar_window

0x746a,	// (0x0002567f) list_single_graphic_2heading_pane_ParamLimits

0x746a,	// (0x0002567f) list_single_graphic_2heading_pane

0x5873,	// (0x00023a88) aid_size_cell_apps_grid_lsc_pane

0x5885,	// (0x00023a9a) aid_size_cell_apps_grid_prt_pane

0x56ae,	// (0x000238c3) bg_wml_button_pane_cp1_ParamLimits

0x56ae,	// (0x000238c3) bg_wml_button_pane_cp1

0x64e2,	// (0x000246f7) form_midp_field_text_pane_t1_ParamLimits

0x6338,	// (0x0002454d) input_focus_pane_cp050_ParamLimits

0x6503,	// (0x00024718) list_midp_form_text_pane_ParamLimits

0x64bf,	// (0x000246d4) input_focus_pane_cp051_ParamLimits

0x64d3,	// (0x000246e8) list_midp_choice_pane_ParamLimits

0x63bc,	// (0x000245d1) list_single_2graphic_pane_cp3_ParamLimits

0x63bc,	// (0x000245d1) list_single_2graphic_pane_cp3

0x63cf,	// (0x000245e4) list_single_midp_graphic_pane_ParamLimits

0x63cf,	// (0x000245e4) list_single_midp_graphic_pane

0x9de5,	// (0x00027ffa) list_single_graphic_2heading_pane_g1_ParamLimits

0x9de5,	// (0x00027ffa) list_single_graphic_2heading_pane_g1

0x9df1,	// (0x00028006) list_single_graphic_2heading_pane_g4_ParamLimits

0x9df1,	// (0x00028006) list_single_graphic_2heading_pane_g4

0x9dfd,	// (0x00028012) list_single_graphic_2heading_pane_g5_ParamLimits

0x9dfd,	// (0x00028012) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x0002d9a0) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x0002d9a0) list_single_graphic_2heading_pane_g

0x9e09,	// (0x0002801e) list_single_graphic_2heading_pane_t1_ParamLimits

0x9e09,	// (0x0002801e) list_single_graphic_2heading_pane_t1

0x9e1d,	// (0x00028032) list_single_graphic_2heading_pane_t2_ParamLimits

0x9e1d,	// (0x00028032) list_single_graphic_2heading_pane_t2

0x9e37,	// (0x0002804c) list_single_graphic_2heading_pane_t3_ParamLimits

0x9e37,	// (0x0002804c) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x0002d9a7) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x0002d9a7) list_single_graphic_2heading_pane_t

0x61f6,	// (0x0002440b) bg_popup_sub_pane_cp2

0x621c,	// (0x00024431) grid_toobar_pane

0xb4fd,	// (0x00029712) cell_toolbar_pane_ParamLimits

0xb4fd,	// (0x00029712) cell_toolbar_pane

0x6252,	// (0x00024467) cell_toolbar_pane_g1_ParamLimits

0x6252,	// (0x00024467) cell_toolbar_pane_g1

0x6264,	// (0x00024479) cell_toolbar_pane_g2_ParamLimits

0x6264,	// (0x00024479) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x0002d9b5) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x0002d9b5) cell_toolbar_pane_g

0x6286,	// (0x0002449b) grid_highlight_pane_cp2_ParamLimits

0x6286,	// (0x0002449b) grid_highlight_pane_cp2

0x62a0,	// (0x000244b5) toolbar_button_pane

0x62ac,	// (0x000244c1) toolbar_button_pane_g1

0x62bc,	// (0x000244d1) toolbar_button_pane_g2

0x62b4,	// (0x000244c9) toolbar_button_pane_g3

0x62cc,	// (0x000244e1) toolbar_button_pane_g4

0x62c4,	// (0x000244d9) toolbar_button_pane_g5

0x62d4,	// (0x000244e9) toolbar_button_pane_g6

0x62dc,	// (0x000244f1) toolbar_button_pane_g7

0x62ec,	// (0x00024501) toolbar_button_pane_g8

0x62e4,	// (0x000244f9) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x0002d9ba) toolbar_button_pane_g

0xb52c,	// (0x00029741) list_single_2graphic_pane_g1_cp3_ParamLimits

0xb52c,	// (0x00029741) list_single_2graphic_pane_g1_cp3

0xb538,	// (0x0002974d) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb538,	// (0x0002974d) list_single_2graphic_pane_g2_cp3

0xb547,	// (0x0002975c) list_single_2graphic_pane_g3_cp3

0xb54f,	// (0x00029764) list_single_2graphic_pane_g4_cp3_ParamLimits

0xb54f,	// (0x00029764) list_single_2graphic_pane_g4_cp3

0xb55b,	// (0x00029770) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb55b,	// (0x00029770) list_single_2graphic_pane_t1_cp3

0xb575,	// (0x0002978a) list_single_midp_graphic_pane_g2_ParamLimits

0xb575,	// (0x0002978a) list_single_midp_graphic_pane_g2

0xad46,	// (0x00028f5b) aid_zoom_text_primary

0x9ddd,	// (0x00027ff2) aid_zoom_text_secondary

0x606a,	// (0x0002427f) status_small_pane_g7_ParamLimits

0x606a,	// (0x0002427f) status_small_pane_g7

0x608d,	// (0x000242a2) status_small_pane_t1_ParamLimits

0xa166,	// (0x0002837b) title_pane_g2

0x0003,

0xf529,	// (0x0002d73e) title_pane_g

0xa3b8,	// (0x000285cd) aid_size_cell_colour_1_pane_ParamLimits

0xa3b8,	// (0x000285cd) aid_size_cell_colour_1_pane

0xa3cc,	// (0x000285e1) aid_size_cell_colour_2_pane_ParamLimits

0xa3cc,	// (0x000285e1) aid_size_cell_colour_2_pane

0xa3e0,	// (0x000285f5) aid_size_cell_colour_3_pane_ParamLimits

0xa3e0,	// (0x000285f5) aid_size_cell_colour_3_pane

0xa3f4,	// (0x00028609) aid_size_cell_colour_4_pane_ParamLimits

0xa3f4,	// (0x00028609) aid_size_cell_colour_4_pane

0xa4fb,	// (0x00028710) title_pane_stacon_g1_ParamLimits

0xa4fb,	// (0x00028710) title_pane_stacon_g1

0x68f0,	// (0x00024b05) popup_note_wait_window_g3_ParamLimits

0x68f0,	// (0x00024b05) popup_note_wait_window_g3

0x6966,	// (0x00024b7b) popup_note_wait_window_t5_ParamLimits

0x6966,	// (0x00024b7b) popup_note_wait_window_t5

0x4ee3,	// (0x000230f8) main_feb_china_hwr_fs_writing_pane

0xadce,	// (0x00028fe3) popup_feb_china_hwr_fs_window_ParamLimits

0xadce,	// (0x00028fe3) popup_feb_china_hwr_fs_window

0xb597,	// (0x000297ac) aid_size_cell_hwr_fs_ParamLimits

0xb597,	// (0x000297ac) aid_size_cell_hwr_fs

0x6338,	// (0x0002454d) bg_popup_sub_pane_cp3_ParamLimits

0x6338,	// (0x0002454d) bg_popup_sub_pane_cp3

0xb5ac,	// (0x000297c1) grid_hwr_fs_pane_ParamLimits

0xb5ac,	// (0x000297c1) grid_hwr_fs_pane

0xb5c0,	// (0x000297d5) linegrid_hwr_fs_pane_ParamLimits

0xb5c0,	// (0x000297d5) linegrid_hwr_fs_pane

0xb5d0,	// (0x000297e5) cell_hwr_fs_pane_ParamLimits

0xb5d0,	// (0x000297e5) cell_hwr_fs_pane

0x6344,	// (0x00024559) linegrid_hwr_fs_pane_g1_ParamLimits

0x6344,	// (0x00024559) linegrid_hwr_fs_pane_g1

0xb5ee,	// (0x00029803) linegrid_hwr_fs_pane_g2_ParamLimits

0xb5ee,	// (0x00029803) linegrid_hwr_fs_pane_g2

0x6350,	// (0x00024565) linegrid_hwr_fs_pane_g3_ParamLimits

0x6350,	// (0x00024565) linegrid_hwr_fs_pane_g3

0xb600,	// (0x00029815) linegrid_hwr_fs_pane_g4_ParamLimits

0xb600,	// (0x00029815) linegrid_hwr_fs_pane_g4

0xb61a,	// (0x0002982f) linegrid_hwr_fs_pane_g5_ParamLimits

0xb61a,	// (0x0002982f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x0002d9e0) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x0002d9e0) linegrid_hwr_fs_pane_g

0x635c,	// (0x00024571) cell_hwr_fs_pane_g1_ParamLimits

0x635c,	// (0x00024571) cell_hwr_fs_pane_g1

0x61c4,	// (0x000243d9) cell_hwr_fs_pane_g2_ParamLimits

0x61c4,	// (0x000243d9) cell_hwr_fs_pane_g2

0xb630,	// (0x00029845) cell_hwr_fs_pane_g3_ParamLimits

0xb630,	// (0x00029845) cell_hwr_fs_pane_g3

0xb63d,	// (0x00029852) cell_hwr_fs_pane_g4_ParamLimits

0xb63d,	// (0x00029852) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x0002d9eb) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x0002d9eb) cell_hwr_fs_pane_g

0xb64a,	// (0x0002985f) cell_hwr_fs_pane_t1

0x4ee3,	// (0x000230f8) grid_highlight_pane_cp6

0x4ee3,	// (0x000230f8) main_idle_act2_pane

0x565e,	// (0x00023873) aid_inside_area_popup_secondary

0xb81b,	// (0x00029a30) aid_inside_area_window_primary_ParamLimits

0xb81b,	// (0x00029a30) aid_inside_area_window_primary

0x7625,	// (0x0002583a) ai2_news_ticker_pane

0x762d,	// (0x00025842) aid_size_cell_ai1_link_ParamLimits

0x762d,	// (0x00025842) aid_size_cell_ai1_link

0xbce4,	// (0x00029ef9) popup_ai2_data_window_ParamLimits

0xbce4,	// (0x00029ef9) popup_ai2_data_window

0x7647,	// (0x0002585c) popup_ai2_link_window_ParamLimits

0x7647,	// (0x0002585c) popup_ai2_link_window

0x6338,	// (0x0002454d) bg_popup_sub_pane_cp4_ParamLimits

0x6338,	// (0x0002454d) bg_popup_sub_pane_cp4

0x765b,	// (0x00025870) grid_ai2_link_pane_ParamLimits

0x765b,	// (0x00025870) grid_ai2_link_pane

0x7672,	// (0x00025887) popup_ai2_link_window_g1_ParamLimits

0x7672,	// (0x00025887) popup_ai2_link_window_g1

0x767e,	// (0x00025893) popup_ai2_link_window_g2_ParamLimits

0x767e,	// (0x00025893) popup_ai2_link_window_g2

0x0001,

0xf9a4,	// (0x0002dbb9) popup_ai2_link_window_g_ParamLimits

0xf9a4,	// (0x0002dbb9) popup_ai2_link_window_g

0x768d,	// (0x000258a2) ai2_mp_button_pane

0x7695,	// (0x000258aa) ai2_mp_volume_pane

0x64bf,	// (0x000246d4) bg_popup_sub_pane_cp5_ParamLimits

0x64bf,	// (0x000246d4) bg_popup_sub_pane_cp5

0x769d,	// (0x000258b2) heading_ai2_gene_pane_ParamLimits

0x769d,	// (0x000258b2) heading_ai2_gene_pane

0x76a9,	// (0x000258be) list_ai2_gene_pane_ParamLimits

0x76a9,	// (0x000258be) list_ai2_gene_pane

0x76f1,	// (0x00025906) cell_ai2_link_pane_ParamLimits

0x76f1,	// (0x00025906) cell_ai2_link_pane

0x7707,	// (0x0002591c) cell_ai2_link_pane_g1

0x4ee3,	// (0x000230f8) grid_highlight_pane_cp7

0xbd2b,	// (0x00029f40) ai2_mp_volume_pane_g1

0x77ac,	// (0x000259c1) ai2_mp_volume_pane_g2

0xbd0f,	// (0x00029f24) list_ai2_gene_pane_t1

0x77a4,	// (0x000259b9) ai2_mp_volume_pane_g3

0x0002,

0xf9bd,	// (0x0002dbd2) ai2_mp_volume_pane_g

0xbd33,	// (0x00029f48) volume_small_pane_cp3

0x77b4,	// (0x000259c9) aid_size_cell_ai2_button

0x77bc,	// (0x000259d1) grid_ai2_button_pane

0x77c5,	// (0x000259da) cell_ai2_button_pane_ParamLimits

0x77c5,	// (0x000259da) cell_ai2_button_pane

0x4e61,	// (0x00023076) cell_ai2_button_pane_g1

0x4ee3,	// (0x000230f8) grid_highlight_pane_cp8

0x7764,	// (0x00025979) ai2_gene_pane_t1_ParamLimits

0x7764,	// (0x00025979) ai2_gene_pane_t1

0xad34,	// (0x00028f49) aid_height_parent_landscape

0x7403,	// (0x00025618) aid_height_set_list

0x740f,	// (0x00025624) aid_size_parent

0x74e6,	// (0x000256fb) aid_size_cell_graphic_pane_ParamLimits

0x76b9,	// (0x000258ce) popup_ai2_data_window_g1_ParamLimits

0x76b9,	// (0x000258ce) popup_ai2_data_window_g1

0x76c5,	// (0x000258da) ai2_news_ticker_pane_g1

0x76cd,	// (0x000258e2) ai2_news_ticker_pane_g2

0x0001,

0xf9a9,	// (0x0002dbbe) ai2_news_ticker_pane_g

0x76d5,	// (0x000258ea) ai2_news_ticker_pane_t1

0x76e3,	// (0x000258f8) ai2_news_ticker_pane_t2

0x0001,

0xf9ae,	// (0x0002dbc3) ai2_news_ticker_pane_t

0x7710,	// (0x00025925) heading_ai2_gene_pane_g1

0x7718,	// (0x0002592d) heading_ai2_gene_pane_t1_ParamLimits

0x7718,	// (0x0002592d) heading_ai2_gene_pane_t1

0x772d,	// (0x00025942) list_highlight_pane_cp6

0xbcf8,	// (0x00029f0d) ai2_gene_pane_ParamLimits

0xbcf8,	// (0x00029f0d) ai2_gene_pane

0xbd1d,	// (0x00029f32) list_ai2_gene_pane_t2

0x0001,

0xf9b3,	// (0x0002dbc8) list_ai2_gene_pane_t

0x7735,	// (0x0002594a) list_highlight_pane_cp8_ParamLimits

0x7735,	// (0x0002594a) list_highlight_pane_cp8

0x7746,	// (0x0002595b) ai2_gene_pane_g1_ParamLimits

0x7746,	// (0x0002595b) ai2_gene_pane_g1

0x7758,	// (0x0002596d) ai2_gene_pane_g2_ParamLimits

0x7758,	// (0x0002596d) ai2_gene_pane_g2

0x0001,

0xf9b8,	// (0x0002dbcd) ai2_gene_pane_g_ParamLimits

0xf9b8,	// (0x0002dbcd) ai2_gene_pane_g

0x54bc,	// (0x000236d1) scroll_pane_cp12

0xaceb,	// (0x00028f00) control_pane_t3_ParamLimits

0xaceb,	// (0x00028f00) control_pane_t3

0x607e,	// (0x00024293) status_small_pane_g8_ParamLimits

0x607e,	// (0x00024293) status_small_pane_g8

0xae8e,	// (0x000290a3) popup_find_window_ParamLimits

0xb013,	// (0x00029228) popup_note_image_window_ParamLimits

0xe108,	// (0x0002c31d) list_double2_graphic_pane_vc_g1_ParamLimits

0xe108,	// (0x0002c31d) list_double2_graphic_pane_vc_g1

0xe114,	// (0x0002c329) list_double2_graphic_pane_vc_g2_ParamLimits

0xe114,	// (0x0002c329) list_double2_graphic_pane_vc_g2

0xe120,	// (0x0002c335) list_double2_graphic_pane_vc_g3_ParamLimits

0xe120,	// (0x0002c335) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x0002d9ae) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x0002d9ae) list_double2_graphic_pane_vc_g

0xd9c1,	// (0x0002bbd6) list_double2_graphic_pane_vc_t1_ParamLimits

0xd9c1,	// (0x0002bbd6) list_double2_graphic_pane_vc_t1

0xd9a9,	// (0x0002bbbe) list_single_heading_pane_vc_g1_ParamLimits

0xd9a9,	// (0x0002bbbe) list_single_heading_pane_vc_g1

0xd9b5,	// (0x0002bbca) list_single_heading_pane_vc_g2_ParamLimits

0xd9b5,	// (0x0002bbca) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002d7b8) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002d7b8) list_single_heading_pane_vc_g

0xe12c,	// (0x0002c341) list_single_heading_pane_vc_t1_ParamLimits

0xe12c,	// (0x0002c341) list_single_heading_pane_vc_t1

0xe142,	// (0x0002c357) list_single_heading_pane_vc_t2_ParamLimits

0xe142,	// (0x0002c357) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x0002d9cf) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x0002d9cf) list_single_heading_pane_vc_t

0x62f4,	// (0x00024509) list_setting_number_pane_vc_g1_ParamLimits

0x62f4,	// (0x00024509) list_setting_number_pane_vc_g1

0x6300,	// (0x00024515) list_setting_number_pane_vc_g2_ParamLimits

0x6300,	// (0x00024515) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x0002d9d4) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x0002d9d4) list_setting_number_pane_vc_g

0xe154,	// (0x0002c369) list_setting_number_pane_vc_t1_ParamLimits

0xe154,	// (0x0002c369) list_setting_number_pane_vc_t1

0xe168,	// (0x0002c37d) list_setting_number_pane_vc_t2_ParamLimits

0xe168,	// (0x0002c37d) list_setting_number_pane_vc_t2

0xe184,	// (0x0002c399) list_setting_number_pane_vc_t3_ParamLimits

0xe184,	// (0x0002c399) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x0002d9d9) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x0002d9d9) list_setting_number_pane_vc_t

0xe19c,	// (0x0002c3b1) set_value_pane_vc_ParamLimits

0xe19c,	// (0x0002c3b1) set_value_pane_vc

0x746a,	// (0x0002567f) list_double2_graphic_pane_vc_ParamLimits

0x746a,	// (0x0002567f) list_double2_graphic_pane_vc

0xe235,	// (0x0002c44a) list_double2_large_graphic_pane_vc_ParamLimits

0xe235,	// (0x0002c44a) list_double2_large_graphic_pane_vc

0x746a,	// (0x0002567f) list_double2_pane_vc_ParamLimits

0x746a,	// (0x0002567f) list_double2_pane_vc

0x746a,	// (0x0002567f) list_double_graphic_heading_pane_vc_ParamLimits

0x746a,	// (0x0002567f) list_double_graphic_heading_pane_vc

0x746a,	// (0x0002567f) list_double_graphic_pane_vc_ParamLimits

0x746a,	// (0x0002567f) list_double_graphic_pane_vc

0x746a,	// (0x0002567f) list_double_heading_pane_vc_ParamLimits

0x746a,	// (0x0002567f) list_double_heading_pane_vc

0xe247,	// (0x0002c45c) list_double_large_graphic_pane_vc_ParamLimits

0xe247,	// (0x0002c45c) list_double_large_graphic_pane_vc

0x746a,	// (0x0002567f) list_double_number_pane_vc_ParamLimits

0x746a,	// (0x0002567f) list_double_number_pane_vc

0x746a,	// (0x0002567f) list_double_pane_vc_ParamLimits

0x746a,	// (0x0002567f) list_double_pane_vc

0x746a,	// (0x0002567f) list_double_time_pane_vc_ParamLimits

0x746a,	// (0x0002567f) list_double_time_pane_vc

0x746a,	// (0x0002567f) list_setting_number_pane_vc_ParamLimits

0x746a,	// (0x0002567f) list_setting_number_pane_vc

0x746a,	// (0x0002567f) list_setting_pane_vc_ParamLimits

0x746a,	// (0x0002567f) list_setting_pane_vc

0x746a,	// (0x0002567f) list_single_graphic_heading_pane_vc_ParamLimits

0x746a,	// (0x0002567f) list_single_graphic_heading_pane_vc

0x746a,	// (0x0002567f) list_single_heading_pane_vc_ParamLimits

0x746a,	// (0x0002567f) list_single_heading_pane_vc

0xe265,	// (0x0002c47a) list_single_number_heading_pane_vc_ParamLimits

0xe265,	// (0x0002c47a) list_single_number_heading_pane_vc

0xe108,	// (0x0002c31d) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe108,	// (0x0002c31d) list_double_graphic_heading_pane_vc_g1

0xd9a9,	// (0x0002bbbe) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xd9a9,	// (0x0002bbbe) list_double_graphic_heading_pane_vc_g2

0xd9b5,	// (0x0002bbca) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xd9b5,	// (0x0002bbca) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c4,	// (0x0002dbd9) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c4,	// (0x0002dbd9) list_double_graphic_heading_pane_vc_g

0xe2a9,	// (0x0002c4be) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xe2a9,	// (0x0002c4be) list_double_graphic_heading_pane_vc_t1

0xe2bf,	// (0x0002c4d4) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xe2bf,	// (0x0002c4d4) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9cb,	// (0x0002dbe0) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9cb,	// (0x0002dbe0) list_double_graphic_heading_pane_vc_t

0x62f4,	// (0x00024509) list_setting_pane_vc_g1_ParamLimits

0x62f4,	// (0x00024509) list_setting_pane_vc_g1

0x6300,	// (0x00024515) list_setting_pane_vc_g2_ParamLimits

0x6300,	// (0x00024515) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x0002d9d4) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x0002d9d4) list_setting_pane_vc_g

0xe2d7,	// (0x0002c4ec) list_setting_pane_vc_t1_ParamLimits

0xe2d7,	// (0x0002c4ec) list_setting_pane_vc_t1

0xe2eb,	// (0x0002c500) list_setting_pane_vc_t2_ParamLimits

0xe2eb,	// (0x0002c500) list_setting_pane_vc_t2

0x0001,

0xfa0e,	// (0x0002dc23) list_setting_pane_vc_t_ParamLimits

0xfa0e,	// (0x0002dc23) list_setting_pane_vc_t

0xe19c,	// (0x0002c3b1) set_value_pane_cp_vc_ParamLimits

0xe19c,	// (0x0002c3b1) set_value_pane_cp_vc

0xd9a9,	// (0x0002bbbe) list_single_number_heading_pane_vc_g1_ParamLimits

0xd9a9,	// (0x0002bbbe) list_single_number_heading_pane_vc_g1

0xd9b5,	// (0x0002bbca) list_single_number_heading_pane_vc_g2_ParamLimits

0xd9b5,	// (0x0002bbca) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002d7b8) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002d7b8) list_single_number_heading_pane_vc_g

0xe12c,	// (0x0002c341) list_single_number_heading_pane_vc_t1_ParamLimits

0xe12c,	// (0x0002c341) list_single_number_heading_pane_vc_t1

0xe2ff,	// (0x0002c514) list_single_number_heading_pane_vc_t2_ParamLimits

0xe2ff,	// (0x0002c514) list_single_number_heading_pane_vc_t2

0xda11,	// (0x0002bc26) list_single_number_heading_pane_vc_t3_ParamLimits

0xda11,	// (0x0002bc26) list_single_number_heading_pane_vc_t3

0x0002,

0xfa13,	// (0x0002dc28) list_single_number_heading_pane_vc_t_ParamLimits

0xfa13,	// (0x0002dc28) list_single_number_heading_pane_vc_t

0xe108,	// (0x0002c31d) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe108,	// (0x0002c31d) list_single_graphic_heading_pane_vc_g1

0xd9a9,	// (0x0002bbbe) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xd9a9,	// (0x0002bbbe) list_single_graphic_heading_pane_vc_g4

0xd9b5,	// (0x0002bbca) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xd9b5,	// (0x0002bbca) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9c4,	// (0x0002dbd9) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9c4,	// (0x0002dbd9) list_single_graphic_heading_pane_vc_g

0xe12c,	// (0x0002c341) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe12c,	// (0x0002c341) list_single_graphic_heading_pane_vc_t1

0xe311,	// (0x0002c526) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xe311,	// (0x0002c526) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa1a,	// (0x0002dc2f) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa1a,	// (0x0002dc2f) list_single_graphic_heading_pane_vc_t

0xd9a9,	// (0x0002bbbe) list_double2_pane_vc_g1_ParamLimits

0xd9a9,	// (0x0002bbbe) list_double2_pane_vc_g1

0xd9b5,	// (0x0002bbca) list_double2_pane_vc_g2_ParamLimits

0xd9b5,	// (0x0002bbca) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002d7b8) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002d7b8) list_double2_pane_vc_g

0xe20c,	// (0x0002c421) list_double2_pane_vc_t1_ParamLimits

0xe20c,	// (0x0002c421) list_double2_pane_vc_t1

0xe323,	// (0x0002c538) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xe323,	// (0x0002c538) list_double2_large_graphic_pane_vc_g1

0xe32f,	// (0x0002c544) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe32f,	// (0x0002c544) list_double2_large_graphic_pane_vc_g2

0xe33b,	// (0x0002c550) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xe33b,	// (0x0002c550) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa1f,	// (0x0002dc34) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa1f,	// (0x0002dc34) list_double2_large_graphic_pane_vc_g

0xe347,	// (0x0002c55c) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe347,	// (0x0002c55c) list_double2_large_graphic_pane_vc_t1

0xe35d,	// (0x0002c572) list_double_time_pane_vc_g1_ParamLimits

0xe35d,	// (0x0002c572) list_double_time_pane_vc_g1

0xe369,	// (0x0002c57e) list_double_time_pane_vc_g2_ParamLimits

0xe369,	// (0x0002c57e) list_double_time_pane_vc_g2

0x0001,

0xfa26,	// (0x0002dc3b) list_double_time_pane_vc_g_ParamLimits

0xfa26,	// (0x0002dc3b) list_double_time_pane_vc_g

0xe375,	// (0x0002c58a) list_double_time_pane_vc_t1_ParamLimits

0xe375,	// (0x0002c58a) list_double_time_pane_vc_t1

0xe393,	// (0x0002c5a8) list_double_time_pane_vc_t2_ParamLimits

0xe393,	// (0x0002c5a8) list_double_time_pane_vc_t2

0xe3dc,	// (0x0002c5f1) list_double_time_pane_vc_t3_ParamLimits

0xe3dc,	// (0x0002c5f1) list_double_time_pane_vc_t3

0xe3ee,	// (0x0002c603) list_double_time_pane_vc_t4_ParamLimits

0xe3ee,	// (0x0002c603) list_double_time_pane_vc_t4

0x0003,

0xfa2b,	// (0x0002dc40) list_double_time_pane_vc_t_ParamLimits

0xfa2b,	// (0x0002dc40) list_double_time_pane_vc_t

0xd9a9,	// (0x0002bbbe) list_double_pane_vc_g1_ParamLimits

0xd9a9,	// (0x0002bbbe) list_double_pane_vc_g1

0xd9b5,	// (0x0002bbca) list_double_pane_vc_g2_ParamLimits

0xd9b5,	// (0x0002bbca) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002d7b8) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002d7b8) list_double_pane_vc_g

0xe400,	// (0x0002c615) list_double_pane_vc_t1_ParamLimits

0xe400,	// (0x0002c615) list_double_pane_vc_t1

0xe412,	// (0x0002c627) list_double_pane_vc_t2_ParamLimits

0xe412,	// (0x0002c627) list_double_pane_vc_t2

0x0001,

0xfa34,	// (0x0002dc49) list_double_pane_vc_t_ParamLimits

0xfa34,	// (0x0002dc49) list_double_pane_vc_t

0xd9a9,	// (0x0002bbbe) list_double_number_pane_vc_g1_ParamLimits

0xd9a9,	// (0x0002bbbe) list_double_number_pane_vc_g1

0xd9b5,	// (0x0002bbca) list_double_number_pane_vc_g2_ParamLimits

0xd9b5,	// (0x0002bbca) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002d7b8) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002d7b8) list_double_number_pane_vc_g

0xe428,	// (0x0002c63d) list_double_number_pane_vc_t1_ParamLimits

0xe428,	// (0x0002c63d) list_double_number_pane_vc_t1

0xe43c,	// (0x0002c651) list_double_number_pane_vc_t2_ParamLimits

0xe43c,	// (0x0002c651) list_double_number_pane_vc_t2

0xe44e,	// (0x0002c663) list_double_number_pane_vc_t3_ParamLimits

0xe44e,	// (0x0002c663) list_double_number_pane_vc_t3

0x0002,

0xfa39,	// (0x0002dc4e) list_double_number_pane_vc_t_ParamLimits

0xfa39,	// (0x0002dc4e) list_double_number_pane_vc_t

0xe464,	// (0x0002c679) list_double_large_graphic_pane_vc_g1_ParamLimits

0xe464,	// (0x0002c679) list_double_large_graphic_pane_vc_g1

0xe48c,	// (0x0002c6a1) list_double_large_graphic_pane_vc_g2_ParamLimits

0xe48c,	// (0x0002c6a1) list_double_large_graphic_pane_vc_g2

0xe4a0,	// (0x0002c6b5) list_double_large_graphic_pane_vc_g3_ParamLimits

0xe4a0,	// (0x0002c6b5) list_double_large_graphic_pane_vc_g3

0xe4af,	// (0x0002c6c4) list_double_large_graphic_pane_vc_g4_ParamLimits

0xe4af,	// (0x0002c6c4) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa40,	// (0x0002dc55) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa40,	// (0x0002dc55) list_double_large_graphic_pane_vc_g

0xe4bf,	// (0x0002c6d4) list_double_large_graphic_pane_vc_t1_ParamLimits

0xe4bf,	// (0x0002c6d4) list_double_large_graphic_pane_vc_t1

0xe4d9,	// (0x0002c6ee) list_double_large_graphic_pane_vc_t2_ParamLimits

0xe4d9,	// (0x0002c6ee) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa49,	// (0x0002dc5e) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa49,	// (0x0002dc5e) list_double_large_graphic_pane_vc_t

0xd9a9,	// (0x0002bbbe) list_double_heading_pane_vc_g1_ParamLimits

0xd9a9,	// (0x0002bbbe) list_double_heading_pane_vc_g1

0xd9b5,	// (0x0002bbca) list_double_heading_pane_vc_g2_ParamLimits

0xd9b5,	// (0x0002bbca) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002d7b8) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002d7b8) list_double_heading_pane_vc_g

0xe4f9,	// (0x0002c70e) list_double_heading_pane_vc_t1_ParamLimits

0xe4f9,	// (0x0002c70e) list_double_heading_pane_vc_t1

0xe12c,	// (0x0002c341) list_double_heading_pane_vc_t2_ParamLimits

0xe12c,	// (0x0002c341) list_double_heading_pane_vc_t2

0x0001,

0xfa4e,	// (0x0002dc63) list_double_heading_pane_vc_t_ParamLimits

0xfa4e,	// (0x0002dc63) list_double_heading_pane_vc_t

0xe50b,	// (0x0002c720) list_double_graphic_pane_vc_g1_ParamLimits

0xe50b,	// (0x0002c720) list_double_graphic_pane_vc_g1

0xe517,	// (0x0002c72c) list_double_graphic_pane_vc_g2_ParamLimits

0xe517,	// (0x0002c72c) list_double_graphic_pane_vc_g2

0xd9a9,	// (0x0002bbbe) list_double_graphic_pane_vc_g3_ParamLimits

0xd9a9,	// (0x0002bbbe) list_double_graphic_pane_vc_g3

0x0003,

0xfa53,	// (0x0002dc68) list_double_graphic_pane_vc_g_ParamLimits

0xfa53,	// (0x0002dc68) list_double_graphic_pane_vc_g

0xe534,	// (0x0002c749) list_double_graphic_pane_vc_t1_ParamLimits

0xe534,	// (0x0002c749) list_double_graphic_pane_vc_t1

0xe552,	// (0x0002c767) list_double_graphic_pane_vc_t2_ParamLimits

0xe552,	// (0x0002c767) list_double_graphic_pane_vc_t2

0x0001,

0xfa5c,	// (0x0002dc71) list_double_graphic_pane_vc_t_ParamLimits

0xfa5c,	// (0x0002dc71) list_double_graphic_pane_vc_t

0x9e77,	// (0x0002808c) aid_size_cell_fastswap

0x9e7f,	// (0x00028094) aid_size_cell_touch_ParamLimits

0x9e7f,	// (0x00028094) aid_size_cell_touch

0xa033,	// (0x00028248) popup_fast_swap_wide_window_ParamLimits

0xa033,	// (0x00028248) popup_fast_swap_wide_window

0xa0f9,	// (0x0002830e) touch_pane_ParamLimits

0xa0f9,	// (0x0002830e) touch_pane

0xde56,	// (0x0002c06b) button_value_adjust_pane_cp2

0x7a46,	// (0x00025c5b) button_value_adjust_pane_cp4

0xde76,	// (0x0002c08b) form_field_data_pane_cp2

0xde95,	// (0x0002c0aa) form_field_data_wide_pane_cp2

0x58aa,	// (0x00023abf) bg_scroll_pane_ParamLimits

0xa6a8,	// (0x000288bd) scroll_handle_pane_ParamLimits

0xa6bc,	// (0x000288d1) scroll_sc2_down_pane_ParamLimits

0xa6bc,	// (0x000288d1) scroll_sc2_down_pane

0x58db,	// (0x00023af0) scroll_sc2_up_pane_ParamLimits

0x58db,	// (0x00023af0) scroll_sc2_up_pane

0xbeb6,	// (0x0002a0cb) grid_wheel_folder_pane_g1_ParamLimits

0xbeb6,	// (0x0002a0cb) grid_wheel_folder_pane_g1

0xa9c0,	// (0x00028bd5) clock_nsta_pane_cp2_ParamLimits

0xa9c0,	// (0x00028bd5) clock_nsta_pane_cp2

0xaa33,	// (0x00028c48) listscroll_midp_pane_ParamLimits

0xaa3f,	// (0x00028c54) midp_canvas_pane

0xad2c,	// (0x00028f41) nsta_clock_indic_pane

0x60d5,	// (0x000242ea) listscroll_form_pane_vc

0x60dd,	// (0x000242f2) listscroll_set_pane_vc_ParamLimits

0x60dd,	// (0x000242f2) listscroll_set_pane_vc

0xb2ab,	// (0x000294c0) clock_nsta_pane

0xb2be,	// (0x000294d3) indicator_nsta_pane

0x61f6,	// (0x0002440b) bg_popup_sub_pane_cp2_ParamLimits

0x620a,	// (0x0002441f) find_pane_cp2_ParamLimits

0x620a,	// (0x0002441f) find_pane_cp2

0x621c,	// (0x00024431) grid_toobar_pane_ParamLimits

0x630c,	// (0x00024521) list_form_gen_pane_vc_ParamLimits

0x630c,	// (0x00024521) list_form_gen_pane_vc

0x6322,	// (0x00024537) scroll_pane_cp8_vc_ParamLimits

0x6322,	// (0x00024537) scroll_pane_cp8_vc

0x6372,	// (0x00024587) data_form_wide_pane_vc_ParamLimits

0x6372,	// (0x00024587) data_form_wide_pane_vc

0x637e,	// (0x00024593) form_field_data_wide_pane_vc_g1

0x6386,	// (0x0002459b) form_field_data_wide_pane_vc_t1_ParamLimits

0x6386,	// (0x0002459b) form_field_data_wide_pane_vc_t1

0x5515,	// (0x0002372a) input_focus_pane_cp6_vc_ParamLimits

0x5515,	// (0x0002372a) input_focus_pane_cp6_vc

0xb674,	// (0x00029889) list_midp_pane_ParamLimits

0xb680,	// (0x00029895) scroll_pane_cp16_ParamLimits

0xb680,	// (0x00029895) scroll_pane_cp16

0x668c,	// (0x000248a1) button_value_adjust_pane_ParamLimits

0x668c,	// (0x000248a1) button_value_adjust_pane

0xb9ef,	// (0x00029c04) button_value_adjust_pane_cp6_ParamLimits

0xb9ef,	// (0x00029c04) button_value_adjust_pane_cp6

0xbaf7,	// (0x00029d0c) settings_code_pane_cp_ParamLimits

0xbaf7,	// (0x00029d0c) settings_code_pane_cp

0x4e61,	// (0x00023076) cell_touch_pane_g1

0x4e61,	// (0x00023076) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x0002d8f3) cell_touch_pane_g

0xbd3c,	// (0x00029f51) cell_touch_pane_cp_ParamLimits

0xbd3c,	// (0x00029f51) cell_touch_pane_cp

0xbd4c,	// (0x00029f61) cell_touch_pane_ParamLimits

0xbd4c,	// (0x00029f61) cell_touch_pane

0x4e61,	// (0x00023076) scroll_sc2_down_pane_g1

0x4e61,	// (0x00023076) scroll_sc2_up_pane_g1

0x4ee3,	// (0x000230f8) bg_set_opt_pane_cp4_vc

0x77d7,	// (0x000259ec) list_set_graphic_pane_vc_g1_ParamLimits

0x77d7,	// (0x000259ec) list_set_graphic_pane_vc_g1

0x77e3,	// (0x000259f8) list_set_graphic_pane_vc_g2_ParamLimits

0x77e3,	// (0x000259f8) list_set_graphic_pane_vc_g2

0x0001,

0xf9d0,	// (0x0002dbe5) list_set_graphic_pane_vc_g_ParamLimits

0xf9d0,	// (0x0002dbe5) list_set_graphic_pane_vc_g

0x77ef,	// (0x00025a04) text_primary_small_cp13_vc_ParamLimits

0x77ef,	// (0x00025a04) text_primary_small_cp13_vc

0x7807,	// (0x00025a1c) list_set_graphic_pane_vc_ParamLimits

0x7807,	// (0x00025a1c) list_set_graphic_pane_vc

0x4ee3,	// (0x000230f8) input_focus_pane_cp2_vc

0x4e61,	// (0x00023076) setting_code_pane_vc_g1

0x781a,	// (0x00025a2f) setting_code_pane_vc_t1

0x7828,	// (0x00025a3d) set_text_pane_vc_t1_ParamLimits

0x7828,	// (0x00025a3d) set_text_pane_vc_t1

0x4ee3,	// (0x000230f8) input_focus_pane_cp1_vc

0x7843,	// (0x00025a58) list_set_text_pane_vc

0x4e61,	// (0x00023076) setting_text_pane_vc_g1

0x4ee3,	// (0x000230f8) bg_set_opt_pane_cp2_vc

0x784d,	// (0x00025a62) setting_slider_graphic_pane_vc_g1

0x7855,	// (0x00025a6a) setting_slider_graphic_pane_vc_t1

0x7863,	// (0x00025a78) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d5,	// (0x0002dbea) setting_slider_graphic_pane_vc_t

0x7871,	// (0x00025a86) slider_set_pane_cp_vc

0x7879,	// (0x00025a8e) slider_set_pane_vc_g1

0x7882,	// (0x00025a97) slider_set_pane_vc_g2

0x0006,

0xf9da,	// (0x0002dbef) slider_set_pane_vc_g

0x5570,	// (0x00023785) set_opt_bg_pane_g1_copy1

0x5578,	// (0x0002378d) set_opt_bg_pane_g2_copy1

0x78ae,	// (0x00025ac3) set_opt_bg_pane_g3_copy1

0x5588,	// (0x0002379d) set_opt_bg_pane_g4_copy1

0x5590,	// (0x000237a5) set_opt_bg_pane_g5_copy1

0x5598,	// (0x000237ad) set_opt_bg_pane_g6_copy1

0x78b6,	// (0x00025acb) set_opt_bg_pane_g7_copy1

0x78be,	// (0x00025ad3) set_opt_bg_pane_g8_copy1

0x78c6,	// (0x00025adb) set_opt_bg_pane_g9_copy1

0x4ee3,	// (0x000230f8) bg_set_opt_pane_cp_vc

0x78ce,	// (0x00025ae3) setting_slider_pane_vc_t1

0x7855,	// (0x00025a6a) setting_slider_pane_vc_t2

0x7863,	// (0x00025a78) setting_slider_pane_vc_t3

0x0002,

0xf9e9,	// (0x0002dbfe) setting_slider_pane_vc_t

0x7871,	// (0x00025a86) slider_set_pane_vc

0xb6c0,	// (0x000298d5) volume_set_pane_vc_g1

0xbd5e,	// (0x00029f73) volume_set_pane_vc_g2

0xbd67,	// (0x00029f7c) volume_set_pane_vc_g3

0xbd70,	// (0x00029f85) volume_set_pane_vc_g4

0xbd79,	// (0x00029f8e) volume_set_pane_vc_g5

0xbd82,	// (0x00029f97) volume_set_pane_vc_g6

0xbd8b,	// (0x00029fa0) volume_set_pane_vc_g7

0xbd94,	// (0x00029fa9) volume_set_pane_vc_g8

0xbd9d,	// (0x00029fb2) volume_set_pane_vc_g9

0xbda6,	// (0x00029fbb) volume_set_pane_vc_g10

0x0009,

0xf9f0,	// (0x0002dc05) volume_set_pane_vc_g

0x78dd,	// (0x00025af2) volume_set_pane_vc

0x78e5,	// (0x00025afa) button_value_adjust_pane_cp1_vc

0x78ef,	// (0x00025b04) list_highlight_pane_cp2_vc

0x78f8,	// (0x00025b0d) list_set_pane_vc_ParamLimits

0x78f8,	// (0x00025b0d) list_set_pane_vc

0x794a,	// (0x00025b5f) main_pane_set_vc_t1_ParamLimits

0x794a,	// (0x00025b5f) main_pane_set_vc_t1

0x795f,	// (0x00025b74) main_pane_set_vc_t2_ParamLimits

0x795f,	// (0x00025b74) main_pane_set_vc_t2

0x7971,	// (0x00025b86) main_pane_set_vc_t3_ParamLimits

0x7971,	// (0x00025b86) main_pane_set_vc_t3

0x7983,	// (0x00025b98) main_pane_set_vc_t4_ParamLimits

0x7983,	// (0x00025b98) main_pane_set_vc_t4

0x0003,

0xfa05,	// (0x0002dc1a) main_pane_set_vc_t_ParamLimits

0xfa05,	// (0x0002dc1a) main_pane_set_vc_t

0x7995,	// (0x00025baa) setting_code_pane_vc_ParamLimits

0x7995,	// (0x00025baa) setting_code_pane_vc

0x79a4,	// (0x00025bb9) setting_slider_graphic_pane_vc

0x79a4,	// (0x00025bb9) setting_slider_pane_vc

0x79a4,	// (0x00025bb9) setting_text_pane_vc

0x79a4,	// (0x00025bb9) setting_volume_pane_vc

0x79ac,	// (0x00025bc1) scroll_pane_cp121_vc

0x5500,	// (0x00023715) set_content_pane_vc

0x79b4,	// (0x00025bc9) button_value_adjust_pane_g1

0x79bd,	// (0x00025bd2) button_value_adjust_pane_g2

0x0001,

0xfa61,	// (0x0002dc76) button_value_adjust_pane_g

0x79c6,	// (0x00025bdb) form_field_slider_wide_pane_vc_t1_ParamLimits

0x79c6,	// (0x00025bdb) form_field_slider_wide_pane_vc_t1

0x79dc,	// (0x00025bf1) form_field_slider_wide_pane_vc_t2_ParamLimits

0x79dc,	// (0x00025bf1) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa66,	// (0x0002dc7b) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa66,	// (0x0002dc7b) form_field_slider_wide_pane_vc_t

0x4f31,	// (0x00023146) input_focus_pane_cp10_vc_ParamLimits

0x4f31,	// (0x00023146) input_focus_pane_cp10_vc

0x7a07,	// (0x00025c1c) slider_cont_pane_cp1_vc_ParamLimits

0x7a07,	// (0x00025c1c) slider_cont_pane_cp1_vc

0x7879,	// (0x00025a8e) slider_form_pane_g1_cp2

0x7882,	// (0x00025a97) slider_form_pane_g2_cp2

0x7a22,	// (0x00025c37) form_field_slider_pane_vc_t3

0x7a4e,	// (0x00025c63) form_field_slider_pane_vc_t4

0x7a5c,	// (0x00025c71) slider_form_pane_vc_ParamLimits

0x7a5c,	// (0x00025c71) slider_form_pane_vc

0x7a69,	// (0x00025c7e) form_field_slider_pane_vc_t1_ParamLimits

0x7a69,	// (0x00025c7e) form_field_slider_pane_vc_t1

0x7a7f,	// (0x00025c94) form_field_slider_pane_vc_t2_ParamLimits

0x7a7f,	// (0x00025c94) form_field_slider_pane_vc_t2

0x0001,

0xfa78,	// (0x0002dc8d) form_field_slider_pane_vc_t_ParamLimits

0xfa78,	// (0x0002dc8d) form_field_slider_pane_vc_t

0x4f31,	// (0x00023146) input_focus_pane_cp9_vc_ParamLimits

0x4f31,	// (0x00023146) input_focus_pane_cp9_vc

0x7a91,	// (0x00025ca6) slider_cont_pane_vc_ParamLimits

0x7a91,	// (0x00025ca6) slider_cont_pane_vc

0x7aa3,	// (0x00025cb8) list_form_graphic_pane_cp_vc_ParamLimits

0x7aa3,	// (0x00025cb8) list_form_graphic_pane_cp_vc

0x637e,	// (0x00024593) form_field_popup_wide_pane_vc_g1

0x7ab8,	// (0x00025ccd) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7ab8,	// (0x00025ccd) form_field_popup_wide_pane_vc_t1

0x5515,	// (0x0002372a) input_focus_pane_cp8_vc_ParamLimits

0x5515,	// (0x0002372a) input_focus_pane_cp8_vc

0x7af7,	// (0x00025d0c) list_form_wide_pane_vc_ParamLimits

0x7af7,	// (0x00025d0c) list_form_wide_pane_vc

0x7b03,	// (0x00025d18) list_form_graphic_pane_vc_g1

0x7b0b,	// (0x00025d20) list_form_graphic_pane_vc_t1_ParamLimits

0x7b0b,	// (0x00025d20) list_form_graphic_pane_vc_t1

0x4f47,	// (0x0002315c) list_highlight_pane_cp5_vc_ParamLimits

0x4f47,	// (0x0002315c) list_highlight_pane_cp5_vc

0x7b27,	// (0x00025d3c) list_form_graphic_pane_vc_ParamLimits

0x7b27,	// (0x00025d3c) list_form_graphic_pane_vc

0x637e,	// (0x00024593) form_field_popup_pane_vc_g1

0x7b3d,	// (0x00025d52) form_field_popup_pane_vc_t1_ParamLimits

0x7b3d,	// (0x00025d52) form_field_popup_pane_vc_t1

0x5515,	// (0x0002372a) input_focus_pane_cp7_vc_ParamLimits

0x5515,	// (0x0002372a) input_focus_pane_cp7_vc

0x7b52,	// (0x00025d67) list_form_pane_vc_ParamLimits

0x7b52,	// (0x00025d67) list_form_pane_vc

0x7b5e,	// (0x00025d73) data_form_pane_vc_t1_ParamLimits

0x7b5e,	// (0x00025d73) data_form_pane_vc_t1

0x5570,	// (0x00023785) input_focus_pane_vc_g1

0x5578,	// (0x0002378d) input_focus_pane_vc_g2

0x5580,	// (0x00023795) input_focus_pane_vc_g3

0x5588,	// (0x0002379d) input_focus_pane_vc_g4

0x5590,	// (0x000237a5) input_focus_pane_vc_g5

0x5598,	// (0x000237ad) input_focus_pane_vc_g6

0x55a0,	// (0x000237b5) input_focus_pane_vc_g7

0x55a8,	// (0x000237bd) input_focus_pane_vc_g8

0x55b0,	// (0x000237c5) input_focus_pane_vc_g9

0x4e61,	// (0x00023076) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x0002d87c) input_focus_pane_vc_g

0x6372,	// (0x00024587) data_form_pane_vc_ParamLimits

0x6372,	// (0x00024587) data_form_pane_vc

0x637e,	// (0x00024593) form_field_data_pane_vc_g1

0x7b79,	// (0x00025d8e) form_field_data_pane_vc_t1_ParamLimits

0x7b79,	// (0x00025d8e) form_field_data_pane_vc_t1

0x5515,	// (0x0002372a) input_focus_pane_vc_ParamLimits

0x5515,	// (0x0002372a) input_focus_pane_vc

0x67bd,	// (0x000249d2) button_value_adjust_pane_cp3_vc

0x7a46,	// (0x00025c5b) button_value_adjust_pane_cp5_vc

0x7b8f,	// (0x00025da4) form_field_data_pane_vc_ParamLimits

0x7b8f,	// (0x00025da4) form_field_data_pane_vc

0x67c5,	// (0x000249da) form_field_data_pane_vc_cp2

0x7ba6,	// (0x00025dbb) form_field_data_wide_pane_vc_ParamLimits

0x7ba6,	// (0x00025dbb) form_field_data_wide_pane_vc

0x7bbc,	// (0x00025dd1) form_field_data_wide_pane_vc_cp2

0x7bc4,	// (0x00025dd9) form_field_popup_pane_vc_ParamLimits

0x7bc4,	// (0x00025dd9) form_field_popup_pane_vc

0x7bdb,	// (0x00025df0) form_field_popup_wide_pane_vc_ParamLimits

0x7bdb,	// (0x00025df0) form_field_popup_wide_pane_vc

0x7bf1,	// (0x00025e06) form_field_slider_pane_vc_ParamLimits

0x7bf1,	// (0x00025e06) form_field_slider_pane_vc

0x7c04,	// (0x00025e19) form_field_slider_wide_pane_vc_ParamLimits

0x7c04,	// (0x00025e19) form_field_slider_wide_pane_vc

0xbdaf,	// (0x00029fc4) grid_touch_1_pane_ParamLimits

0xbdaf,	// (0x00029fc4) grid_touch_1_pane

0xbdbb,	// (0x00029fd0) grid_touch_2_pane_ParamLimits

0xbdbb,	// (0x00029fd0) grid_touch_2_pane

0x60a7,	// (0x000242bc) touch_pane_g1_ParamLimits

0x60a7,	// (0x000242bc) touch_pane_g1

0x7c25,	// (0x00025e3a) cell_app_pane_cp_wide_ParamLimits

0x7c25,	// (0x00025e3a) cell_app_pane_cp_wide

0x7c35,	// (0x00025e4a) grid_popup_fast_wide_pane_ParamLimits

0x7c35,	// (0x00025e4a) grid_popup_fast_wide_pane

0x7c49,	// (0x00025e5e) scroll_pane_cp19_ParamLimits

0x7c49,	// (0x00025e5e) scroll_pane_cp19

0x4ee3,	// (0x000230f8) bg_popup_window_pane_cp20

0x7c5d,	// (0x00025e72) listscroll_popup_fast_wide_pane

0xbdd3,	// (0x00029fe8) grid_indicator_nsta_pane

0x7c65,	// (0x00025e7a) clock_nsta_pane_g1

0x7c6e,	// (0x00025e83) clock_nsta_pane_t1

0xbde5,	// (0x00029ffa) cell_indicator_nsta_pane_ParamLimits

0xbde5,	// (0x00029ffa) cell_indicator_nsta_pane

0x7c17,	// (0x00025e2c) cell_indicator_nsta_pane_g1

0xbe16,	// (0x0002a02b) cell_indicator_nsta_pane_g2

0x0001,

0xfa89,	// (0x0002dc9e) cell_indicator_nsta_pane_g

0x7c8a,	// (0x00025e9f) clock_nsta_pane_cp

0x7c92,	// (0x00025ea7) indicator_nsta_pane_cp

0x7c9b,	// (0x00025eb0) nsta_clock_indic_pane_g1

0x4f83,	// (0x00023198) grid_indicator_pane

0x59cd,	// (0x00023be2) scroll_pane_cp29

0xa917,	// (0x00028b2c) indicator_nsta_pane_cp2_ParamLimits

0xa917,	// (0x00028b2c) indicator_nsta_pane_cp2

0x4f47,	// (0x0002315c) main_apps_wheel_pane

0x651d,	// (0x00024732) form_midp_field_text_pane_ParamLimits

0x664a,	// (0x0002485f) scroll_bar_cp050_ParamLimits

0x7d04,	// (0x00025f19) cell_indicator_pane_ParamLimits

0x7d04,	// (0x00025f19) cell_indicator_pane

0x7d1a,	// (0x00025f2f) cell_indicator_pane_g1

0xbe26,	// (0x0002a03b) grid_wheel_folder_pane_ParamLimits

0xbe26,	// (0x0002a03b) grid_wheel_folder_pane

0xbe38,	// (0x0002a04d) list_wheel_apps_pane_ParamLimits

0xbe38,	// (0x0002a04d) list_wheel_apps_pane

0xbe47,	// (0x0002a05c) main_apps_wheel_pane_g1_ParamLimits

0xbe47,	// (0x0002a05c) main_apps_wheel_pane_g1

0xbe5b,	// (0x0002a070) main_apps_wheel_pane_g2_ParamLimits

0xbe5b,	// (0x0002a070) main_apps_wheel_pane_g2

0x0001,

0xfaa5,	// (0x0002dcba) main_apps_wheel_pane_g_ParamLimits

0xfaa5,	// (0x0002dcba) main_apps_wheel_pane_g

0xbe6f,	// (0x0002a084) main_apps_wheel_pane_t1_ParamLimits

0xbe6f,	// (0x0002a084) main_apps_wheel_pane_t1

0xbe8e,	// (0x0002a0a3) list_wheel_apps_pane_g1

0xbe96,	// (0x0002a0ab) list_wheel_apps_pane_g2

0xbe9e,	// (0x0002a0b3) list_wheel_apps_pane_g3

0xbea6,	// (0x0002a0bb) list_wheel_apps_pane_g4

0xbeae,	// (0x0002a0c3) list_wheel_apps_pane_g5

0x0004,

0xfaaa,	// (0x0002dcbf) list_wheel_apps_pane_g

0x4f47,	// (0x0002315c) navi_icon_text_pane

0xb1ff,	// (0x00029414) aid_fill_nsta

0x7d24,	// (0x00025f39) navi_icon_text_pane_g1

0x7d30,	// (0x00025f45) navi_icon_text_pane_t1

0x5c47,	// (0x00023e5c) list_set_graphic_pane_t1_ParamLimits

0x5c47,	// (0x00023e5c) list_set_graphic_pane_t1

0x6d82,	// (0x00024f97) popup_midp_note_alarm_window_t6_ParamLimits

0x6d82,	// (0x00024f97) popup_midp_note_alarm_window_t6

0x6d94,	// (0x00024fa9) popup_midp_note_alarm_window_t7_ParamLimits

0x6d94,	// (0x00024fa9) popup_midp_note_alarm_window_t7

0x6da6,	// (0x00024fbb) popup_midp_note_alarm_window_t8_ParamLimits

0x6da6,	// (0x00024fbb) popup_midp_note_alarm_window_t8

0x6db8,	// (0x00024fcd) popup_midp_note_alarm_window_t9_ParamLimits

0x6db8,	// (0x00024fcd) popup_midp_note_alarm_window_t9

0x6dca,	// (0x00024fdf) popup_midp_note_alarm_window_t10_ParamLimits

0x6dca,	// (0x00024fdf) popup_midp_note_alarm_window_t10

0x6ddc,	// (0x00024ff1) popup_midp_note_alarm_window_t11_ParamLimits

0x6ddc,	// (0x00024ff1) popup_midp_note_alarm_window_t11

0x6dee,	// (0x00025003) scroll_pane_cp17_ParamLimits

0x6dee,	// (0x00025003) scroll_pane_cp17

0xb6c0,	// (0x000298d5) volume_small_pane_cp_g1

0xbecd,	// (0x0002a0e2) volume_small_pane_cp_g2

0xbed6,	// (0x0002a0eb) volume_small_pane_cp_g3

0xbedf,	// (0x0002a0f4) volume_small_pane_cp_g4

0xb6ed,	// (0x00029902) volume_small_pane_cp_g5

0xbee8,	// (0x0002a0fd) volume_small_pane_cp_g6

0xbef1,	// (0x0002a106) volume_small_pane_cp_g7

0xbefa,	// (0x0002a10f) volume_small_pane_cp_g8

0xbf03,	// (0x0002a118) volume_small_pane_cp_g9

0xbf0c,	// (0x0002a121) volume_small_pane_cp_g10

0x5efd,	// (0x00024112) midp_ticker_pane_g1_ParamLimits

0x5f09,	// (0x0002411e) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x0002d948) midp_ticker_pane_g_ParamLimits

0x5f15,	// (0x0002412a) midp_ticker_pane_t1_ParamLimits

0xb20f,	// (0x00029424) aid_fill_nsta_2

0x6636,	// (0x0002484b) list_form2_midp_pane

0x744b,	// (0x00025660) midp_editing_number_pane_ParamLimits

0x7457,	// (0x0002566c) midp_ticker_pane_ParamLimits

0x7d42,	// (0x00025f57) form2_midp_field_pane

0x7d4a,	// (0x00025f5f) scroll_pane_cp51

0x7d6a,	// (0x00025f7f) form2_midp_button_pane_ParamLimits

0x7d6a,	// (0x00025f7f) form2_midp_button_pane

0x7d7c,	// (0x00025f91) form2_midp_content_pane_ParamLimits

0x7d7c,	// (0x00025f91) form2_midp_content_pane

0x7d96,	// (0x00025fab) form2_midp_field_choice_group_pane

0x7d9e,	// (0x00025fb3) form2_midp_field_pane_g1

0x7da6,	// (0x00025fbb) form2_midp_field_pane_g2

0x7dae,	// (0x00025fc3) form2_midp_field_pane_g3

0x7db6,	// (0x00025fcb) form2_midp_field_pane_g4

0x0003,

0xfacf,	// (0x0002dce4) form2_midp_field_pane_g

0x7dbe,	// (0x00025fd3) form2_midp_gauge_slider_pane

0x7dc6,	// (0x00025fdb) form2_midp_gauge_wait_pane

0x7dce,	// (0x00025fe3) form2_midp_image_pane_ParamLimits

0x7dce,	// (0x00025fe3) form2_midp_image_pane

0x7de9,	// (0x00025ffe) form2_midp_label_pane_ParamLimits

0x7de9,	// (0x00025ffe) form2_midp_label_pane

0xbf31,	// (0x0002a146) form2_midp_label_pane_cp_ParamLimits

0xbf31,	// (0x0002a146) form2_midp_label_pane_cp

0x7e02,	// (0x00026017) form2_midp_string_pane_ParamLimits

0x7e02,	// (0x00026017) form2_midp_string_pane

0xe570,	// (0x0002c785) form2_midp_text_pane_ParamLimits

0xe570,	// (0x0002c785) form2_midp_text_pane

0x7e14,	// (0x00026029) form2_midp_time_pane

0x7e24,	// (0x00026039) input_focus_pane_cp51_ParamLimits

0x7e24,	// (0x00026039) input_focus_pane_cp51

0x7e3c,	// (0x00026051) form2_midp_label_pane_t1_ParamLimits

0x7e3c,	// (0x00026051) form2_midp_label_pane_t1

0xe589,	// (0x0002c79e) form2_mdip_text_pane_t1_ParamLimits

0xe589,	// (0x0002c79e) form2_mdip_text_pane_t1

0xe5a4,	// (0x0002c7b9) form2_midp_time_pane_t1

0x7e84,	// (0x00026099) form2_midp_gauge_slider_pane_t1

0xbf50,	// (0x0002a165) form2_midp_gauge_slider_pane_t2

0xbf62,	// (0x0002a177) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad8,	// (0x0002dced) form2_midp_gauge_slider_pane_t

0x7e96,	// (0x000260ab) form2_midp_slider_pane

0x7ea2,	// (0x000260b7) form2_midp_gauge_wait_pane_t1

0x7eb0,	// (0x000260c5) form2_midp_wait_pane_ParamLimits

0x7eb0,	// (0x000260c5) form2_midp_wait_pane

0x63bc,	// (0x000245d1) list_single_2graphic_pane_cp4_ParamLimits

0x63bc,	// (0x000245d1) list_single_2graphic_pane_cp4

0x7edb,	// (0x000260f0) list_single_midp_graphic_pane_cp_ParamLimits

0x7edb,	// (0x000260f0) list_single_midp_graphic_pane_cp

0x4ee3,	// (0x000230f8) list_highlight_pane_cp20

0x7ef9,	// (0x0002610e) list_single_2graphic_pane_g1_cp4

0x7710,	// (0x00025925) list_single_2graphic_pane_g2_cp4

0x7f01,	// (0x00026116) list_single_2graphic_pane_t1_cp4

0x4f47,	// (0x0002315c) list_highlight_pane_cp21

0x7f10,	// (0x00026125) list_single_midp_graphic_pane_g4_cp

0x7f1f,	// (0x00026134) list_single_midp_graphic_pane_t1_cp

0x7f34,	// (0x00026149) form2_mdip_string_pane_t1_ParamLimits

0x7f34,	// (0x00026149) form2_mdip_string_pane_t1

0x4ee3,	// (0x000230f8) bg_wml_button_pane_cp2

0x4e61,	// (0x00023076) form2_midp_image_pane_g1

0xdc0f,	// (0x0002be24) list_double_large_graphic_pane_g5_ParamLimits

0xdc0f,	// (0x0002be24) list_double_large_graphic_pane_g5

0xaa33,	// (0x00028c48) midp_form_pane_ParamLimits

0x4f47,	// (0x0002315c) main_apps_wheel_pane_ParamLimits

0xb037,	// (0x0002924c) popup_preview_window_ParamLimits

0xb037,	// (0x0002924c) popup_preview_window

0xb1b2,	// (0x000293c7) popup_touch_info_window_ParamLimits

0xb1b2,	// (0x000293c7) popup_touch_info_window

0xb1d0,	// (0x000293e5) popup_touch_menu_window_ParamLimits

0xb1d0,	// (0x000293e5) popup_touch_menu_window

0x4e57,	// (0x0002306c) bg_popup_sub_pane_cp6

0x7f9e,	// (0x000261b3) list_touch_menu_pane

0x7fa6,	// (0x000261bb) list_single_touch_menu_pane_ParamLimits

0x7fa6,	// (0x000261bb) list_single_touch_menu_pane

0x7fbd,	// (0x000261d2) list_single_touch_menu_pane_t1

0x4f47,	// (0x0002315c) bg_popup_sub_pane_cp7_ParamLimits

0x4f47,	// (0x0002315c) bg_popup_sub_pane_cp7

0x7fcb,	// (0x000261e0) heading_sub_pane

0x7fd3,	// (0x000261e8) list_touch_info_pane_ParamLimits

0x7fd3,	// (0x000261e8) list_touch_info_pane

0x7fe2,	// (0x000261f7) list_single_touch_info_pane_ParamLimits

0x7fe2,	// (0x000261f7) list_single_touch_info_pane

0x7ff3,	// (0x00026208) list_single_touch_info_pane_t1

0x8001,	// (0x00026216) list_single_touch_info_pane_t2

0x0001,

0xfae6,	// (0x0002dcfb) list_single_touch_info_pane_t

0x5ed3,	// (0x000240e8) bg_popup_heading_pane_cp

0x800f,	// (0x00026224) heading_sub_pane_t1

0x6338,	// (0x0002454d) bg_popup_preview_window_pane_cp_ParamLimits

0x6338,	// (0x0002454d) bg_popup_preview_window_pane_cp

0x7fcb,	// (0x000261e0) heading_preview_pane

0x7fd3,	// (0x000261e8) list_preview_pane_ParamLimits

0x7fd3,	// (0x000261e8) list_preview_pane

0x801d,	// (0x00026232) popup_preview_window_g1

0x7fe2,	// (0x000261f7) list_single_preview_pane_ParamLimits

0x7fe2,	// (0x000261f7) list_single_preview_pane

0x8025,	// (0x0002623a) list_single_preview_pane_g1

0x802d,	// (0x00026242) list_single_preview_pane_t1

0x7ff3,	// (0x00026208) list_single_preview_pane_t2

0x0001,

0xfaeb,	// (0x0002dd00) list_single_preview_pane_t

0x803b,	// (0x00026250) bg_popup_heading_pane_cp2_ParamLimits

0x803b,	// (0x00026250) bg_popup_heading_pane_cp2

0x8051,	// (0x00026266) heading_preview_pane_g1

0x8059,	// (0x0002626e) heading_preview_pane_t1_ParamLimits

0x8059,	// (0x0002626e) heading_preview_pane_t1

0x4f9a,	// (0x000231af) soft_indicator_pane_t1_ParamLimits

0x5498,	// (0x000236ad) scroll_pane_ParamLimits

0x58d2,	// (0x00023ae7) scroll_sc2_left_pane

0x58c9,	// (0x00023ade) scroll_sc2_right_pane

0x58f1,	// (0x00023b06) scroll_bg_pane_g1_ParamLimits

0x5906,	// (0x00023b1b) scroll_bg_pane_g2_ParamLimits

0x591e,	// (0x00023b33) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x0002d8d3) scroll_bg_pane_g_ParamLimits

0x58f1,	// (0x00023b06) scroll_handle_pane_g1_ParamLimits

0x5940,	// (0x00023b55) scroll_handle_pane_g2_ParamLimits

0x591e,	// (0x00023b33) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x0002d8da) scroll_handle_pane_g_ParamLimits

0xad7c,	// (0x00028f91) popup_choice_list_window_ParamLimits

0xad7c,	// (0x00028f91) popup_choice_list_window

0x6202,	// (0x00024417) choice_list_pane

0x6278,	// (0x0002448d) cell_toolbar_pane_t1

0x62a0,	// (0x000244b5) toolbar_button_pane_ParamLimits

0x71b4,	// (0x000253c9) ai_gene_pane_1_t2_ParamLimits

0x71b4,	// (0x000253c9) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x0002dafd) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x0002dafd) ai_gene_pane_1_t

0x8076,	// (0x0002628b) scroll_sc2_left_pane_g1

0x8076,	// (0x0002628b) scroll_sc2_right_pane_g1

0x56ae,	// (0x000238c3) bg_popup_sub_pane_cp10

0x8080,	// (0x00026295) list_choice_list_pane

0x8097,	// (0x000262ac) list_single_choice_list_pane_ParamLimits

0x8097,	// (0x000262ac) list_single_choice_list_pane

0x80a9,	// (0x000262be) list_single_choice_list_pane_g1

0x5699,	// (0x000238ae) list_single_choice_list_pane_t1_ParamLimits

0x5699,	// (0x000238ae) list_single_choice_list_pane_t1

0x80b1,	// (0x000262c6) choice_list_pane_g1

0x80b9,	// (0x000262ce) choice_list_pane_t1

0x4e57,	// (0x0002306c) input_focus_pane_cp11

0x5830,	// (0x00023a45) title_pane_stacon_g2_ParamLimits

0x5830,	// (0x00023a45) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x0002d8b9) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0002d8b9) title_pane_stacon_g

0x5ed3,	// (0x000240e8) cursor_press_pane

0xae18,	// (0x0002902d) popup_fep_hwr_window_ParamLimits

0xae18,	// (0x0002902d) popup_fep_hwr_window

0xae74,	// (0x00029089) popup_fep_vkb_window_ParamLimits

0xae74,	// (0x00029089) popup_fep_vkb_window

0x80c7,	// (0x000262dc) cursor_press_pane_g1

0x0002,

0xfb14,	// (0x0002dd29) fep_vkb_side_pane_g_ParamLimits

0xbfa9,	// (0x0002a1be) fep_hwr_candidate_pane_ParamLimits

0xbfa9,	// (0x0002a1be) fep_hwr_candidate_pane

0xbfd1,	// (0x0002a1e6) fep_hwr_side_pane_ParamLimits

0xbfd1,	// (0x0002a1e6) fep_hwr_side_pane

0xbff1,	// (0x0002a206) fep_hwr_top_pane_ParamLimits

0xbff1,	// (0x0002a206) fep_hwr_top_pane

0xc009,	// (0x0002a21e) fep_hwr_write_pane_ParamLimits

0xc009,	// (0x0002a21e) fep_hwr_write_pane

0xfb14,	// (0x0002dd29) fep_vkb_side_pane_g

0x80e1,	// (0x000262f6) fep_hwr_top_pane_g1

0x80cf,	// (0x000262e4) fep_hwr_top_pane_g2

0xc043,	// (0x0002a258) fep_hwr_top_pane_g3

0x0002,

0xfaf0,	// (0x0002dd05) fep_hwr_top_pane_g

0xc058,	// (0x0002a26d) fep_hwr_top_text_pane

0x5a3a,	// (0x00023c4f) fep_hwr_top_text_pane_g1

0x8117,	// (0x0002632c) fep_hwr_top_text_pane_t1

0xc146,	// (0x0002a35b) fep_hwr_candidate_pane_g1

0x82e0,	// (0x000264f5) fep_vkb_keypad_pane_g3_ParamLimits

0x82e0,	// (0x000264f5) fep_vkb_keypad_pane_g3

0x8302,	// (0x00026517) fep_vkb_keypad_pane_g4_ParamLimits

0x8302,	// (0x00026517) fep_vkb_keypad_pane_g4

0x8371,	// (0x00026586) fep_vkb_bottom_pane_g2_ParamLimits

0x8371,	// (0x00026586) fep_vkb_bottom_pane_g2

0x0001,

0xfb1b,	// (0x0002dd30) fep_vkb_bottom_pane_g_ParamLimits

0xfb1b,	// (0x0002dd30) fep_vkb_bottom_pane_g

0x8076,	// (0x0002628b) cell_vkb_side_pane_g2

0x0001,

0xfb25,	// (0x0002dd3a) cell_vkb_side_pane_g

0x83b5,	// (0x000265ca) cell_vkb_side_pane_t1

0x83c3,	// (0x000265d8) cell_vkb_side_pane_t1_copy1

0x8076,	// (0x0002628b) bg_fep_vkb_candidate_pane_g2

0x8491,	// (0x000266a6) cell_vkb_candidate_pane_ParamLimits

0x8125,	// (0x0002633a) aid_size_cell_vkb_ParamLimits

0x8125,	// (0x0002633a) aid_size_cell_vkb

0x8491,	// (0x000266a6) cell_vkb_candidate_pane

0xc251,	// (0x0002a466) bg_popup_fep_shadow_pane_g1

0x818f,	// (0x000263a4) fep_vkb_bottom_pane_ParamLimits

0x818f,	// (0x000263a4) fep_vkb_bottom_pane

0x81cc,	// (0x000263e1) fep_vkb_candidate_pane_ParamLimits

0x81cc,	// (0x000263e1) fep_vkb_candidate_pane

0x81e8,	// (0x000263fd) fep_vkb_keypad_pane_ParamLimits

0x81e8,	// (0x000263fd) fep_vkb_keypad_pane

0x821c,	// (0x00026431) fep_vkb_side_pane_ParamLimits

0x821c,	// (0x00026431) fep_vkb_side_pane

0x8248,	// (0x0002645d) fep_vkb_top_pane_ParamLimits

0x8248,	// (0x0002645d) fep_vkb_top_pane

0x8274,	// (0x00026489) fep_vkb_top_pane_g1_ParamLimits

0x8274,	// (0x00026489) fep_vkb_top_pane_g1

0x8283,	// (0x00026498) fep_vkb_top_pane_g2_ParamLimits

0x8283,	// (0x00026498) fep_vkb_top_pane_g2

0x8292,	// (0x000264a7) fep_vkb_top_pane_g3_ParamLimits

0x8292,	// (0x000264a7) fep_vkb_top_pane_g3

0x0003,

0xfb0b,	// (0x0002dd20) fep_vkb_top_pane_g_ParamLimits

0xfb0b,	// (0x0002dd20) fep_vkb_top_pane_g

0x82b0,	// (0x000264c5) fep_vkb_top_text_pane_ParamLimits

0x82b0,	// (0x000264c5) fep_vkb_top_text_pane

0xc179,	// (0x0002a38e) fep_vkb_side_pane_g1_ParamLimits

0xc179,	// (0x0002a38e) fep_vkb_side_pane_g1

0x82cf,	// (0x000264e4) grid_vkb_side_pane_ParamLimits

0x82cf,	// (0x000264e4) grid_vkb_side_pane

0xc259,	// (0x0002a46e) bg_popup_fep_shadow_pane_g2

0xc262,	// (0x0002a477) bg_popup_fep_shadow_pane_g3

0xc26a,	// (0x0002a47f) bg_popup_fep_shadow_pane_g4

0xc273,	// (0x0002a488) bg_popup_fep_shadow_pane_g5

0xc27b,	// (0x0002a490) bg_popup_fep_shadow_pane_g6

0xc283,	// (0x0002a498) bg_popup_fep_shadow_pane_g7

0x5588,	// (0x0002379d) bg_popup_fep_shadow_pane_g8

0x8320,	// (0x00026535) grid_vkb_keypad_number_pane_ParamLimits

0x8320,	// (0x00026535) grid_vkb_keypad_number_pane

0x8330,	// (0x00026545) grid_vkb_keypad_pane_ParamLimits

0x8330,	// (0x00026545) grid_vkb_keypad_pane

0x8356,	// (0x0002656b) fep_vkb_bottom_pane_g1_ParamLimits

0x8356,	// (0x0002656b) fep_vkb_bottom_pane_g1

0x837f,	// (0x00026594) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x837f,	// (0x00026594) grid_vkb_keypad_bottom_left_pane

0x8394,	// (0x000265a9) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x8394,	// (0x000265a9) grid_vkb_keypad_bottom_right_pane

0x83a9,	// (0x000265be) fep_vkb_top_text_pane_g1

0xc1c3,	// (0x0002a3d8) fep_vkb_top_text_pane_t1

0xc1d8,	// (0x0002a3ed) cell_vkb_side_pane_ParamLimits

0xc1d8,	// (0x0002a3ed) cell_vkb_side_pane

0x8076,	// (0x0002628b) cell_vkb_side_pane_g1

0x83d1,	// (0x000265e6) cell_vkb_keypad_pane_ParamLimits

0x83d1,	// (0x000265e6) cell_vkb_keypad_pane

0x843e,	// (0x00026653) cell_vkb_keypad_pane_g1

0x0008,

0xfb38,	// (0x0002dd4d) bg_popup_fep_shadow_pane_g

0xc293,	// (0x0002a4a8) cell_hwr_side_pane_g1

0xc293,	// (0x0002a4a8) cell_hwr_side_pane_g2

0x8448,	// (0x0002665d) cell_vkb_keypad_pane_t1

0xc1fb,	// (0x0002a410) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc1fb,	// (0x0002a410) cell_vkb_keypad_bottom_left_pane

0xc218,	// (0x0002a42d) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc218,	// (0x0002a42d) cell_vkb_keypad_bottom_right_pane

0x8076,	// (0x0002628b) cell_vkb_keypad_bottom_left_pane_g1

0x8076,	// (0x0002628b) cell_vkb_keypad_bottom_right_pane_g1

0x8456,	// (0x0002666b) cell_vkb_keypad_number_pane_ParamLimits

0x8456,	// (0x0002666b) cell_vkb_keypad_number_pane

0x8475,	// (0x0002668a) cell_vkb_keypad_number_pane_g1

0x847f,	// (0x00026694) cell_vkb_keypad_number_pane_g2

0x8488,	// (0x0002669d) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb2a,	// (0x0002dd3f) cell_vkb_keypad_number_pane_g

0x8448,	// (0x0002665d) cell_vkb_keypad_number_pane_t1

0x84aa,	// (0x000266bf) fep_vkb_candidate_pane_g1

0x0001,

0xfb4b,	// (0x0002dd60) cell_hwr_side_pane_g

0x84c3,	// (0x000266d8) cell_hwr_side_pane_t1

0xc29d,	// (0x0002a4b2) cell_hwr_side_pane_t1_copy1

0xc2ab,	// (0x0002a4c0) cell_hwr_candidate_pane_g1

0xc2da,	// (0x0002a4ef) cell_hwr_candidate_pane_t1

0x8076,	// (0x0002628b) cell_vkb_candidate_pane_g2

0x8549,	// (0x0002675e) cell_vkb_candidate_pane_t1

0xbf74,	// (0x0002a189) bg_popup_fep_shadow_pane_ParamLimits

0xbf74,	// (0x0002a189) bg_popup_fep_shadow_pane

0xc023,	// (0x0002a238) bg_fep_hwr_top_pane_g4

0x80f3,	// (0x00026308) bg_hwr_side_pane_g1_ParamLimits

0x80f3,	// (0x00026308) bg_hwr_side_pane_g1

0xc094,	// (0x0002a2a9) cell_hwr_side_pane_ParamLimits

0xc094,	// (0x0002a2a9) cell_hwr_side_pane

0xc0cf,	// (0x0002a2e4) fep_hwr_write_pane_g1_ParamLimits

0xc0cf,	// (0x0002a2e4) fep_hwr_write_pane_g1

0xc0dc,	// (0x0002a2f1) fep_hwr_write_pane_g2_ParamLimits

0xc0dc,	// (0x0002a2f1) fep_hwr_write_pane_g2

0xc0e9,	// (0x0002a2fe) fep_hwr_write_pane_g3_ParamLimits

0xc0e9,	// (0x0002a2fe) fep_hwr_write_pane_g3

0xc0f7,	// (0x0002a30c) fep_hwr_write_pane_g4_ParamLimits

0xc0f7,	// (0x0002a30c) fep_hwr_write_pane_g4

0x0005,

0xfaf7,	// (0x0002dd0c) fep_hwr_write_pane_g_ParamLimits

0xfaf7,	// (0x0002dd0c) fep_hwr_write_pane_g

0xc023,	// (0x0002a238) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xc023,	// (0x0002a238) bg_fep_hwr_candidate_pane_g2

0xc10c,	// (0x0002a321) cell_hwr_candidate_pane_ParamLimits

0xc10c,	// (0x0002a321) cell_hwr_candidate_pane

0xc146,	// (0x0002a35b) fep_hwr_candidate_pane_g1_ParamLimits

0x8153,	// (0x00026368) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x8153,	// (0x00026368) bg_popup_fep_shadow_pane_cp2

0x82a2,	// (0x000264b7) fep_vkb_top_pane_g4_ParamLimits

0x82a2,	// (0x000264b7) fep_vkb_top_pane_g4

0x82c1,	// (0x000264d6) fep_vkb_side_pane_g2_ParamLimits

0x82c1,	// (0x000264d6) fep_vkb_side_pane_g2

0xdd87,	// (0x0002bf9c) list_setting_pane_t4_ParamLimits

0xdd87,	// (0x0002bf9c) list_setting_pane_t4

0xde1d,	// (0x0002c032) list_setting_number_pane_t5_ParamLimits

0xde1d,	// (0x0002c032) list_setting_number_pane_t5

0xa74b,	// (0x00028960) list_double_heading_pane_cp2_ParamLimits

0xa74b,	// (0x00028960) list_double_heading_pane_cp2

0x5d41,	// (0x00023f56) list_double_heading_pane_g1_cp2_ParamLimits

0x5d41,	// (0x00023f56) list_double_heading_pane_g1_cp2

0x8557,	// (0x0002676c) list_double_heading_pane_g2_cp2_ParamLimits

0x8557,	// (0x0002676c) list_double_heading_pane_g2_cp2

0x856b,	// (0x00026780) list_double_heading_pane_t1_cp2_ParamLimits

0x856b,	// (0x00026780) list_double_heading_pane_t1_cp2

0x8581,	// (0x00026796) list_double_heading_pane_t2_cp2_ParamLimits

0x8581,	// (0x00026796) list_double_heading_pane_t2_cp2

0x4e4f,	// (0x00023064) aid_value_unit2

0xa06f,	// (0x00028284) popup_preview_fixed_window

0x507a,	// (0x0002328f) bg_popup_preview_window_pane_cp02

0x8593,	// (0x000267a8) list_preview_fixed_pane

0x85d9,	// (0x000267ee) list_empty_pane_fp_ParamLimits

0x85d9,	// (0x000267ee) list_empty_pane_fp

0x85d9,	// (0x000267ee) list_single_cale_day_pane_fp_ParamLimits

0x85d9,	// (0x000267ee) list_single_cale_day_pane_fp

0x85d9,	// (0x000267ee) list_single_graphic_heading_pane_fp_ParamLimits

0x85d9,	// (0x000267ee) list_single_graphic_heading_pane_fp

0x85d9,	// (0x000267ee) list_single_graphic_pane_fp_ParamLimits

0x85d9,	// (0x000267ee) list_single_graphic_pane_fp

0x85d9,	// (0x000267ee) list_single_heading_pane_fp_ParamLimits

0x85d9,	// (0x000267ee) list_single_heading_pane_fp

0x85d9,	// (0x000267ee) list_single_pane_fp_ParamLimits

0x85d9,	// (0x000267ee) list_single_pane_fp

0x85ed,	// (0x00026802) list_single_pane_fp_g1_ParamLimits

0x85ed,	// (0x00026802) list_single_pane_fp_g1

0xe5d8,	// (0x0002c7ed) list_single_pane_fp_g2_ParamLimits

0xe5d8,	// (0x0002c7ed) list_single_pane_fp_g2

0xe5e4,	// (0x0002c7f9) list_single_pane_fp_g3_ParamLimits

0xe5e4,	// (0x0002c7f9) list_single_pane_fp_g3

0x85f9,	// (0x0002680e) list_single_pane_fp_g4_ParamLimits

0x85f9,	// (0x0002680e) list_single_pane_fp_g4

0x0003,

0xfb5e,	// (0x0002dd73) list_single_pane_fp_g_ParamLimits

0xfb5e,	// (0x0002dd73) list_single_pane_fp_g

0xe5f8,	// (0x0002c80d) list_single_pane_fp_t1_ParamLimits

0xe5f8,	// (0x0002c80d) list_single_pane_fp_t1

0xe60f,	// (0x0002c824) list_single_graphic_pane_fp_g1_ParamLimits

0xe60f,	// (0x0002c824) list_single_graphic_pane_fp_g1

0x85ed,	// (0x00026802) list_single_graphic_pane_fp_g2_ParamLimits

0x85ed,	// (0x00026802) list_single_graphic_pane_fp_g2

0xe5d8,	// (0x0002c7ed) list_single_graphic_pane_fp_g3_ParamLimits

0xe5d8,	// (0x0002c7ed) list_single_graphic_pane_fp_g3

0xe5e4,	// (0x0002c7f9) list_single_graphic_pane_fp_g4_ParamLimits

0xe5e4,	// (0x0002c7f9) list_single_graphic_pane_fp_g4

0x85f9,	// (0x0002680e) list_single_graphic_pane_fp_g5_ParamLimits

0x85f9,	// (0x0002680e) list_single_graphic_pane_fp_g5

0x0004,

0xfb67,	// (0x0002dd7c) list_single_graphic_pane_fp_g_ParamLimits

0xfb67,	// (0x0002dd7c) list_single_graphic_pane_fp_g

0xe61b,	// (0x0002c830) list_single_graphic_pane_fp_t1_ParamLimits

0xe61b,	// (0x0002c830) list_single_graphic_pane_fp_t1

0xe60f,	// (0x0002c824) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xe60f,	// (0x0002c824) list_single_graphic_heading_pane_fp_g1

0x85ed,	// (0x00026802) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x85ed,	// (0x00026802) list_single_graphic_heading_pane_fp_g2

0xe5d8,	// (0x0002c7ed) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xe5d8,	// (0x0002c7ed) list_single_graphic_heading_pane_fp_g3

0xe5e4,	// (0x0002c7f9) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xe5e4,	// (0x0002c7f9) list_single_graphic_heading_pane_fp_g4

0x85f9,	// (0x0002680e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x85f9,	// (0x0002680e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb67,	// (0x0002dd7c) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb67,	// (0x0002dd7c) list_single_graphic_heading_pane_fp_g

0xe631,	// (0x0002c846) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xe631,	// (0x0002c846) list_single_graphic_heading_pane_fp_t1

0xe647,	// (0x0002c85c) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xe647,	// (0x0002c85c) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb72,	// (0x0002dd87) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb72,	// (0x0002dd87) list_single_graphic_heading_pane_fp_t

0xe659,	// (0x0002c86e) list_single_cale_day_pane_fp_g1_ParamLimits

0xe659,	// (0x0002c86e) list_single_cale_day_pane_fp_g1

0x8605,	// (0x0002681a) list_single_cale_day_pane_fp_g2_ParamLimits

0x8605,	// (0x0002681a) list_single_cale_day_pane_fp_g2

0xe691,	// (0x0002c8a6) list_single_cale_day_pane_fp_g3_ParamLimits

0xe691,	// (0x0002c8a6) list_single_cale_day_pane_fp_g3

0xe6b9,	// (0x0002c8ce) list_single_cale_day_pane_fp_g4_ParamLimits

0xe6b9,	// (0x0002c8ce) list_single_cale_day_pane_fp_g4

0xe6dd,	// (0x0002c8f2) list_single_cale_day_pane_fp_g5_ParamLimits

0xe6dd,	// (0x0002c8f2) list_single_cale_day_pane_fp_g5

0x0004,

0xfb77,	// (0x0002dd8c) list_single_cale_day_pane_fp_g_ParamLimits

0xfb77,	// (0x0002dd8c) list_single_cale_day_pane_fp_g

0xe701,	// (0x0002c916) list_single_cale_day_pane_fp_t1_ParamLimits

0xe701,	// (0x0002c916) list_single_cale_day_pane_fp_t1

0xe727,	// (0x0002c93c) list_single_cale_day_pane_fp_t2_ParamLimits

0xe727,	// (0x0002c93c) list_single_cale_day_pane_fp_t2

0xe740,	// (0x0002c955) list_single_cale_day_pane_fp_t3_ParamLimits

0xe740,	// (0x0002c955) list_single_cale_day_pane_fp_t3

0x0002,

0xfb82,	// (0x0002dd97) list_single_cale_day_pane_fp_t_ParamLimits

0xfb82,	// (0x0002dd97) list_single_cale_day_pane_fp_t

0x85ed,	// (0x00026802) list_empty_pane_fp_g1_ParamLimits

0x85ed,	// (0x00026802) list_empty_pane_fp_g1

0xe759,	// (0x0002c96e) list_empty_pane_fp_t1

0xe767,	// (0x0002c97c) list_empty_pane_fp_t2

0x0001,

0xfb89,	// (0x0002dd9e) list_empty_pane_fp_t

0x85ed,	// (0x00026802) list_single_heading_pane_fp_g1_ParamLimits

0x85ed,	// (0x00026802) list_single_heading_pane_fp_g1

0xe5d8,	// (0x0002c7ed) list_single_heading_pane_fp_g2_ParamLimits

0xe5d8,	// (0x0002c7ed) list_single_heading_pane_fp_g2

0xe5e4,	// (0x0002c7f9) list_single_heading_pane_fp_g3_ParamLimits

0xe5e4,	// (0x0002c7f9) list_single_heading_pane_fp_g3

0x0002,

0xfb8e,	// (0x0002dda3) list_single_heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0002dda3) list_single_heading_pane_fp_g

0xe775,	// (0x0002c98a) list_single_heading_pane_fp_t1_ParamLimits

0xe775,	// (0x0002c98a) list_single_heading_pane_fp_t1

0xe787,	// (0x0002c99c) list_single_heading_pane_fp_t2_ParamLimits

0xe787,	// (0x0002c99c) list_single_heading_pane_fp_t2

0x0001,

0xfb95,	// (0x0002ddaa) list_single_heading_pane_fp_t_ParamLimits

0xfb95,	// (0x0002ddaa) list_single_heading_pane_fp_t

0x56ba,	// (0x000238cf) aid_size_cell_fast

0x505d,	// (0x00023272) soft_indicator_pane_cp1_t1

0x56f7,	// (0x0002390c) cell_app_pane_cp2_ParamLimits

0x56f7,	// (0x0002390c) cell_app_pane_cp2

0xbf96,	// (0x0002a1ab) fep_hwr_candidate_drop_down_list_pane

0xc160,	// (0x0002a375) fep_hwr_candidate_pane_g3_ParamLimits

0xc160,	// (0x0002a375) fep_hwr_candidate_pane_g3

0x45c0,	// (0x000227d5) fep_hwr_candidate_pane_g4_ParamLimits

0x45c0,	// (0x000227d5) fep_hwr_candidate_pane_g4

0x0002,

0xfb04,	// (0x0002dd19) fep_hwr_candidate_pane_g_ParamLimits

0xfb04,	// (0x0002dd19) fep_hwr_candidate_pane_g

0x81bb,	// (0x000263d0) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x81bb,	// (0x000263d0) fep_vkb_candidate_drop_down_list_pane

0x84b2,	// (0x000266c7) fep_vkb_candidate_pane_g3

0x84ba,	// (0x000266cf) fep_vkb_candidate_pane_g4

0x0002,

0xfb31,	// (0x0002dd46) fep_vkb_candidate_pane_g

0xc2ab,	// (0x0002a4c0) cell_hwr_candidate_pane_g1_ParamLimits

0xc2b9,	// (0x0002a4ce) cell_hwr_candidate_pane_g3_ParamLimits

0xc2b9,	// (0x0002a4ce) cell_hwr_candidate_pane_g3

0xe5b7,	// (0x0002c7cc) cell_hwr_candidate_pane_g4_ParamLimits

0xe5b7,	// (0x0002c7cc) cell_hwr_candidate_pane_g4

0x0002,

0xfb50,	// (0x0002dd65) cell_hwr_candidate_pane_g_ParamLimits

0xfb50,	// (0x0002dd65) cell_hwr_candidate_pane_g

0x8513,	// (0x00026728) cell_vkb_candidate_pane_g3_ParamLimits

0x8513,	// (0x00026728) cell_vkb_candidate_pane_g3

0x852e,	// (0x00026743) cell_vkb_candidate_pane_g4_ParamLimits

0x852e,	// (0x00026743) cell_vkb_candidate_pane_g4

0x8611,	// (0x00026826) cell_app_pane_cp2_g1_ParamLimits

0x8611,	// (0x00026826) cell_app_pane_cp2_g1

0x862f,	// (0x00026844) cell_app_pane_cp2_g2_ParamLimits

0x862f,	// (0x00026844) cell_app_pane_cp2_g2

0x0001,

0xfb9a,	// (0x0002ddaf) cell_app_pane_cp2_g_ParamLimits

0xfb9a,	// (0x0002ddaf) cell_app_pane_cp2_g

0x863b,	// (0x00026850) cell_app_pane_cp2_t1_ParamLimits

0x863b,	// (0x00026850) cell_app_pane_cp2_t1

0x5515,	// (0x0002372a) grid_highlight_pane_cp1_ParamLimits

0x5515,	// (0x0002372a) grid_highlight_pane_cp1

0xc2f7,	// (0x0002a50c) cell_hwr_candidate_pane_cp1_ParamLimits

0xc2f7,	// (0x0002a50c) cell_hwr_candidate_pane_cp1

0xc2ab,	// (0x0002a4c0) fep_hwr_candidate_drop_down_list_pane_g1

0xc315,	// (0x0002a52a) fep_hwr_candidate_drop_down_list_pane_g2

0xc322,	// (0x0002a537) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9f,	// (0x0002ddb4) fep_hwr_candidate_drop_down_list_pane_g

0xc32f,	// (0x0002a544) fep_hwr_candidate_drop_down_list_scroll_pane

0xc338,	// (0x0002a54d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc338,	// (0x0002a54d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xc345,	// (0x0002a55a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc345,	// (0x0002a55a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xc352,	// (0x0002a567) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc352,	// (0x0002a567) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc35f,	// (0x0002a574) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc35f,	// (0x0002a574) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc37a,	// (0x0002a58f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc37a,	// (0x0002a58f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xc395,	// (0x0002a5aa) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc395,	// (0x0002a5aa) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xc3b0,	// (0x0002a5c5) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc3b0,	// (0x0002a5c5) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xc3cb,	// (0x0002a5e0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc3cb,	// (0x0002a5e0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba6,	// (0x0002ddbb) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba6,	// (0x0002ddbb) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc3e6,	// (0x0002a5fb) cell_vkb_candidate_pane_cp1_ParamLimits

0xc3e6,	// (0x0002a5fb) cell_vkb_candidate_pane_cp1

0x82a2,	// (0x000264b7) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x82a2,	// (0x000264b7) fep_vkb_candidate_drop_down_list_pane_g1

0x864d,	// (0x00026862) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x864d,	// (0x00026862) fep_vkb_candidate_drop_down_list_pane_g2

0x865a,	// (0x0002686f) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x865a,	// (0x0002686f) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb7,	// (0x0002ddcc) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb7,	// (0x0002ddcc) fep_vkb_candidate_drop_down_list_pane_g

0x8667,	// (0x0002687c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x8667,	// (0x0002687c) fep_vkb_candidate_drop_down_list_scroll_pane

0x8674,	// (0x00026889) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8674,	// (0x00026889) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x8681,	// (0x00026896) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8681,	// (0x00026896) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x868d,	// (0x000268a2) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x868d,	// (0x000268a2) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x84d1,	// (0x000266e6) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x84d1,	// (0x000266e6) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x84f2,	// (0x00026707) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x84f2,	// (0x00026707) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x8699,	// (0x000268ae) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8699,	// (0x000268ae) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x86ba,	// (0x000268cf) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x86ba,	// (0x000268cf) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x86db,	// (0x000268f0) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x86db,	// (0x000268f0) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbe,	// (0x0002ddd3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbe,	// (0x0002ddd3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa159,	// (0x0002836e) title_pane_g1_ParamLimits

0xa166,	// (0x0002837b) title_pane_g2_ParamLimits

0xf529,	// (0x0002d73e) title_pane_g_ParamLimits

0x5a32,	// (0x00023c47) aid_call2_pane

0x5a2a,	// (0x00023c3f) aid_call_pane

0x5a3a,	// (0x00023c4f) popup_clock_analogue_window_g1

0x5a3a,	// (0x00023c4f) popup_clock_analogue_window_g2

0xa72c,	// (0x00028941) popup_clock_analogue_window_g3

0xa735,	// (0x0002894a) popup_clock_analogue_window_g4

0x4e61,	// (0x00023076) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x0002d8e8) popup_clock_analogue_window_g

0xa73d,	// (0x00028952) popup_clock_analogue_window_t1

0xa796,	// (0x000289ab) clock_digital_number_pane_ParamLimits

0xa796,	// (0x000289ab) clock_digital_number_pane

0xa7a2,	// (0x000289b7) clock_digital_number_pane_cp02_ParamLimits

0xa7a2,	// (0x000289b7) clock_digital_number_pane_cp02

0xa7ae,	// (0x000289c3) clock_digital_number_pane_cp03_ParamLimits

0xa7ae,	// (0x000289c3) clock_digital_number_pane_cp03

0xa7ba,	// (0x000289cf) clock_digital_number_pane_cp04_ParamLimits

0xa7ba,	// (0x000289cf) clock_digital_number_pane_cp04

0xa7c6,	// (0x000289db) clock_digital_separator_pane_ParamLimits

0xa7c6,	// (0x000289db) clock_digital_separator_pane

0xa7d2,	// (0x000289e7) popup_clock_digital_window_t1_ParamLimits

0xa7d2,	// (0x000289e7) popup_clock_digital_window_t1

0x4e61,	// (0x00023076) clock_digital_number_pane_g1

0x4e61,	// (0x00023076) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x0002d8f3) clock_digital_number_pane_g

0x4e61,	// (0x00023076) clock_digital_separator_pane_g1

0x4e61,	// (0x00023076) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x0002d8f3) clock_digital_separator_pane_g

0xb1ff,	// (0x00029414) aid_fill_nsta_ParamLimits

0xb2be,	// (0x000294d3) indicator_nsta_pane_ParamLimits

0x61ab,	// (0x000243c0) popup_clock_analogue_window

0x61ab,	// (0x000243c0) popup_clock_digital_window

0xbdd3,	// (0x00029fe8) grid_indicator_nsta_pane_ParamLimits

0x7c7c,	// (0x00025e91) clock_nsta_pane_t2

0x0001,

0xfa84,	// (0x0002dc99) clock_nsta_pane_t

0xa695,	// (0x000288aa) aid_size_max_handle

0xa69f,	// (0x000288b4) aid_size_min_handle

0x5ed3,	// (0x000240e8) editor_scroll_pane

0x86f6,	// (0x0002690b) ex_editor_pane

0x5677,	// (0x0002388c) scroll_pane_cp13

0x54c5,	// (0x000236da) scroll_pane_cp14

0x5a69,	// (0x00023c7e) scroll_pane_cp36

0xa75b,	// (0x00028970) list_single_graphic_hl_pane_cp2_ParamLimits

0xa75b,	// (0x00028970) list_single_graphic_hl_pane_cp2

0xbb45,	// (0x00029d5a) list_single_graphic_hl_pane_ParamLimits

0xbb45,	// (0x00029d5a) list_single_graphic_hl_pane

0xe79d,	// (0x0002c9b2) aid_size_min_hl_cp1

0x86fe,	// (0x00026913) list_highlight_pane_cp34_ParamLimits

0x86fe,	// (0x00026913) list_highlight_pane_cp34

0x870f,	// (0x00026924) list_single_graphic_hl_pane_g1_ParamLimits

0x870f,	// (0x00026924) list_single_graphic_hl_pane_g1

0xe7a6,	// (0x0002c9bb) list_single_graphic_hl_pane_g2_ParamLimits

0xe7a6,	// (0x0002c9bb) list_single_graphic_hl_pane_g2

0xe7a6,	// (0x0002c9bb) list_single_graphic_hl_pane_g3_ParamLimits

0xe7a6,	// (0x0002c9bb) list_single_graphic_hl_pane_g3

0xe114,	// (0x0002c329) list_single_graphic_hl_pane_g4_ParamLimits

0xe114,	// (0x0002c329) list_single_graphic_hl_pane_g4

0xe7b2,	// (0x0002c9c7) list_single_graphic_hl_pane_g5_ParamLimits

0xe7b2,	// (0x0002c9c7) list_single_graphic_hl_pane_g5

0x0004,

0xfbcf,	// (0x0002dde4) list_single_graphic_hl_pane_g_ParamLimits

0xfbcf,	// (0x0002dde4) list_single_graphic_hl_pane_g

0xe7c6,	// (0x0002c9db) list_single_graphic_hl_pane_t1_ParamLimits

0xe7c6,	// (0x0002c9db) list_single_graphic_hl_pane_t1

0x871c,	// (0x00026931) aid_size_min_hl_cp2

0x8725,	// (0x0002693a) list_highlight_pane_cp34_cp2_ParamLimits

0x8725,	// (0x0002693a) list_highlight_pane_cp34_cp2

0x870f,	// (0x00026924) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x870f,	// (0x00026924) list_single_graphic_hl_pane_g1_cp2

0x8732,	// (0x00026947) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x8732,	// (0x00026947) list_single_graphic_hl_pane_g2_cp2

0x873e,	// (0x00026953) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x873e,	// (0x00026953) list_single_graphic_hl_pane_g3_cp2

0x5d41,	// (0x00023f56) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5d41,	// (0x00023f56) list_single_graphic_hl_pane_g4_cp2

0x8557,	// (0x0002676c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x8557,	// (0x0002676c) list_single_graphic_hl_pane_g5_cp2

0xac01,	// (0x00028e16) control_pane_g4_ParamLimits

0xac01,	// (0x00028e16) control_pane_g4

0x56ae,	// (0x000238c3) bg_popup_sub_pane_cp10_ParamLimits

0x8080,	// (0x00026295) list_choice_list_pane_ParamLimits

0x808f,	// (0x000262a4) scroll_pane_cp23

0x507a,	// (0x0002328f) bg_popup_preview_window_pane_cp02_ParamLimits

0x8593,	// (0x000267a8) list_preview_fixed_pane_ParamLimits

0x85a9,	// (0x000267be) list_preview_fixed_pane_cp_ParamLimits

0x85a9,	// (0x000267be) list_preview_fixed_pane_cp

0x85b5,	// (0x000267ca) popup_preview_fixed_window_g1_ParamLimits

0x85b5,	// (0x000267ca) popup_preview_fixed_window_g1

0x85c1,	// (0x000267d6) popup_preview_fixed_window_g2_ParamLimits

0x85c1,	// (0x000267d6) popup_preview_fixed_window_g2

0x0002,

0xfb57,	// (0x0002dd6c) popup_preview_fixed_window_g_ParamLimits

0xfb57,	// (0x0002dd6c) popup_preview_fixed_window_g

0xa599,	// (0x000287ae) aid_navi_side_left_pane_ParamLimits

0xa5a9,	// (0x000287be) aid_navi_side_right_pane_ParamLimits

0xa5b8,	// (0x000287cd) navi_icon_pane_stacon_ParamLimits

0xa5c8,	// (0x000287dd) navi_navi_pane_stacon_ParamLimits

0xa5b8,	// (0x000287cd) navi_text_pane_stacon_ParamLimits

0x9f50,	// (0x00028165) main_text_info_pane

0x8760,	// (0x00026975) listscroll_text_info_pane

0x8768,	// (0x0002697d) list_text_info_pane_ParamLimits

0x8768,	// (0x0002697d) list_text_info_pane

0x8777,	// (0x0002698c) scroll_pane_cp24_ParamLimits

0x8777,	// (0x0002698c) scroll_pane_cp24

0xc409,	// (0x0002a61e) list_text_info_pane_t1_ParamLimits

0xc409,	// (0x0002a61e) list_text_info_pane_t1

0xad96,	// (0x00028fab) popup_fast_swap2_window_ParamLimits

0xad96,	// (0x00028fab) popup_fast_swap2_window

0x8795,	// (0x000269aa) aid_size_cell_fast2

0x4e57,	// (0x0002306c) bg_popup_window_pane_cp17

0x6662,	// (0x00024877) heading_pane_cp2

0x666a,	// (0x0002487f) listscroll_fast2_pane

0x879f,	// (0x000269b4) grid_fast2_pane

0x87a7,	// (0x000269bc) listscroll_fast2_pane_g1

0x87af,	// (0x000269c4) listscroll_fast2_pane_g2

0x0001,

0xfbda,	// (0x0002ddef) listscroll_fast2_pane_g

0x5677,	// (0x0002388c) scroll_pane_cp26

0x87b7,	// (0x000269cc) cell_fast2_pane_ParamLimits

0x87b7,	// (0x000269cc) cell_fast2_pane

0x87cd,	// (0x000269e2) cell_fast2_pane_g1

0x87d6,	// (0x000269eb) cell_fast2_pane_g2

0x87df,	// (0x000269f4) cell_fast2_pane_g3

0x0002,

0xfbdf,	// (0x0002ddf4) cell_fast2_pane_g

0x5326,	// (0x0002353b) grid_highlight_pane_cp9

0xad62,	// (0x00028f77) main_eswt_pane_ParamLimits

0xad62,	// (0x00028f77) main_eswt_pane

0x878c,	// (0x000269a1) list_single_text_info_pane

0x87e7,	// (0x000269fc) eswt_ctrl_button_pane

0x87e7,	// (0x000269fc) eswt_ctrl_canvas_pane

0x87ef,	// (0x00026a04) eswt_ctrl_combo_pane

0x87e7,	// (0x000269fc) eswt_ctrl_default_pane

0x87e7,	// (0x000269fc) eswt_ctrl_label_pane

0x87f7,	// (0x00026a0c) eswt_ctrl_wait_pane

0x87ff,	// (0x00026a14) eswt_shell_pane

0x4e57,	// (0x0002306c) listscroll_eswt_app_pane

0x881b,	// (0x00026a30) popup_eswt_tasktip_window_ParamLimits

0x881b,	// (0x00026a30) popup_eswt_tasktip_window

0x6338,	// (0x0002454d) bg_popup_window_pane_cp18

0x882c,	// (0x00026a41) eswt_control_pane_g1_ParamLimits

0x882c,	// (0x00026a41) eswt_control_pane_g1

0x8839,	// (0x00026a4e) eswt_control_pane_g2_ParamLimits

0x8839,	// (0x00026a4e) eswt_control_pane_g2

0x8846,	// (0x00026a5b) eswt_control_pane_g3_ParamLimits

0x8846,	// (0x00026a5b) eswt_control_pane_g3

0x8853,	// (0x00026a68) eswt_control_pane_g4_ParamLimits

0x8853,	// (0x00026a68) eswt_control_pane_g4

0x0003,

0xfbe6,	// (0x0002ddfb) eswt_control_pane_g_ParamLimits

0xfbe6,	// (0x0002ddfb) eswt_control_pane_g

0x5515,	// (0x0002372a) bg_button_pane_ParamLimits

0x5515,	// (0x0002372a) bg_button_pane

0x533b,	// (0x00023550) common_borders_pane_copy2_ParamLimits

0x533b,	// (0x00023550) common_borders_pane_copy2

0x8860,	// (0x00026a75) control_button_pane_g1_ParamLimits

0x8860,	// (0x00026a75) control_button_pane_g1

0x886c,	// (0x00026a81) control_button_pane_g2_ParamLimits

0x886c,	// (0x00026a81) control_button_pane_g2

0x8878,	// (0x00026a8d) control_button_pane_g3_ParamLimits

0x8878,	// (0x00026a8d) control_button_pane_g3

0x0002,

0xfbef,	// (0x0002de04) control_button_pane_g_ParamLimits

0xfbef,	// (0x0002de04) control_button_pane_g

0x888c,	// (0x00026aa1) control_button_pane_t1

0x889a,	// (0x00026aaf) control_button_pane_t2

0x0001,

0xfbf6,	// (0x0002de0b) control_button_pane_t

0x62ac,	// (0x000244c1) bg_button_pane_g1

0x62b4,	// (0x000244c9) bg_button_pane_g2

0x62bc,	// (0x000244d1) bg_button_pane_g3

0x62c4,	// (0x000244d9) bg_button_pane_g4

0x62cc,	// (0x000244e1) bg_button_pane_g5

0x62d4,	// (0x000244e9) bg_button_pane_g6

0x62dc,	// (0x000244f1) bg_button_pane_g7

0x62e4,	// (0x000244f9) bg_button_pane_g8

0x62ec,	// (0x00024501) bg_button_pane_g9

0x0008,

0xf83c,	// (0x0002da51) bg_button_pane_g

0x803b,	// (0x00026250) common_borders_pane_ParamLimits

0x803b,	// (0x00026250) common_borders_pane

0x882c,	// (0x00026a41) eswt_control_pane_g1_copy1_ParamLimits

0x882c,	// (0x00026a41) eswt_control_pane_g1_copy1

0x8839,	// (0x00026a4e) eswt_control_pane_g2_copy1_ParamLimits

0x8839,	// (0x00026a4e) eswt_control_pane_g2_copy1

0x8846,	// (0x00026a5b) eswt_control_pane_g3_copy1_ParamLimits

0x8846,	// (0x00026a5b) eswt_control_pane_g3_copy1

0x8853,	// (0x00026a68) eswt_control_pane_g4_copy1_ParamLimits

0x8853,	// (0x00026a68) eswt_control_pane_g4_copy1

0x8076,	// (0x0002628b) bg_eswt_ctrl_canvas_pane_g1

0x803b,	// (0x00026250) common_borders_pane_cp2_ParamLimits

0x803b,	// (0x00026250) common_borders_pane_cp2

0x803b,	// (0x00026250) common_borders_pane_cp3_ParamLimits

0x803b,	// (0x00026250) common_borders_pane_cp3

0x88a8,	// (0x00026abd) separator_horizontal_pane

0x58c9,	// (0x00023ade) separator_vertical_pane

0x882c,	// (0x00026a41) eswt_control_pane_g1_copy2_ParamLimits

0x882c,	// (0x00026a41) eswt_control_pane_g1_copy2

0x8839,	// (0x00026a4e) eswt_control_pane_g2_copy2_ParamLimits

0x8839,	// (0x00026a4e) eswt_control_pane_g2_copy2

0x8846,	// (0x00026a5b) eswt_control_pane_g3_copy2_ParamLimits

0x8846,	// (0x00026a5b) eswt_control_pane_g3_copy2

0x8853,	// (0x00026a68) eswt_control_pane_g4_copy2_ParamLimits

0x8853,	// (0x00026a68) eswt_control_pane_g4_copy2

0x4e57,	// (0x0002306c) common_borders_pane_cp4

0x88b0,	// (0x00026ac5) separator_horizontal_pane_g1

0x88b9,	// (0x00026ace) separator_horizontal_pane_g2

0x88c2,	// (0x00026ad7) separator_horizontal_pane_g3

0x0002,

0xfbfb,	// (0x0002de10) separator_horizontal_pane_g

0x882c,	// (0x00026a41) eswt_control_pane_g1_copy3_ParamLimits

0x882c,	// (0x00026a41) eswt_control_pane_g1_copy3

0x8839,	// (0x00026a4e) eswt_control_pane_g2_copy3_ParamLimits

0x8839,	// (0x00026a4e) eswt_control_pane_g2_copy3

0x8846,	// (0x00026a5b) eswt_control_pane_g3_copy3_ParamLimits

0x8846,	// (0x00026a5b) eswt_control_pane_g3_copy3

0x8853,	// (0x00026a68) eswt_control_pane_g4_copy3_ParamLimits

0x8853,	// (0x00026a68) eswt_control_pane_g4_copy3

0x4e57,	// (0x0002306c) common_borders_pane_cp5

0x88cb,	// (0x00026ae0) separator_vertical_pane_g1

0x88d4,	// (0x00026ae9) separator_vertical_pane_g2

0x88dd,	// (0x00026af2) separator_vertical_pane_g3

0x0002,

0xfc02,	// (0x0002de17) separator_vertical_pane_g

0x882c,	// (0x00026a41) eswt_control_pane_g1_copy4_ParamLimits

0x882c,	// (0x00026a41) eswt_control_pane_g1_copy4

0x8839,	// (0x00026a4e) eswt_control_pane_g2_copy4_ParamLimits

0x8839,	// (0x00026a4e) eswt_control_pane_g2_copy4

0x8846,	// (0x00026a5b) eswt_control_pane_g3_copy4_ParamLimits

0x8846,	// (0x00026a5b) eswt_control_pane_g3_copy4

0x8853,	// (0x00026a68) eswt_control_pane_g4_copy4_ParamLimits

0x8853,	// (0x00026a68) eswt_control_pane_g4_copy4

0xc426,	// (0x0002a63b) eswt_ctrl_combo_button_pane

0xc42e,	// (0x0002a643) eswt_ctrl_input_pane

0xc436,	// (0x0002a64b) popup_choice_list_window_cp70

0xc43e,	// (0x0002a653) eswt_ctrl_input_pane_t1

0x4e57,	// (0x0002306c) input_focus_pane_cp70

0x803b,	// (0x00026250) bg_button_pane_cp70_ParamLimits

0x803b,	// (0x00026250) bg_button_pane_cp70

0xc44c,	// (0x0002a661) eswt_ctrl_combo_button_pane_g1

0x88e6,	// (0x00026afb) wait_bar_pane_cp70

0x6338,	// (0x0002454d) bg_popup_window_pane_cp70_ParamLimits

0x6338,	// (0x0002454d) bg_popup_window_pane_cp70

0x88ee,	// (0x00026b03) popup_eswt_tasktip_window_t1

0x8904,	// (0x00026b19) wait_bar_pane_cp71_ParamLimits

0x8904,	// (0x00026b19) wait_bar_pane_cp71

0x8910,	// (0x00026b25) grid_eswt_app_pane

0x58d2,	// (0x00023ae7) scroll_pane_cp70

0xc454,	// (0x0002a669) cell_eswt_app_pane_ParamLimits

0xc454,	// (0x0002a669) cell_eswt_app_pane

0xc47c,	// (0x0002a691) cell_eswt_app_pane_g1_ParamLimits

0xc47c,	// (0x0002a691) cell_eswt_app_pane_g1

0xc4ab,	// (0x0002a6c0) cell_eswt_app_pane_g2_ParamLimits

0xc4ab,	// (0x0002a6c0) cell_eswt_app_pane_g2

0x0001,

0xfc09,	// (0x0002de1e) cell_eswt_app_pane_g_ParamLimits

0xfc09,	// (0x0002de1e) cell_eswt_app_pane_g

0xc4d4,	// (0x0002a6e9) cell_eswt_app_pane_t1_ParamLimits

0xc4d4,	// (0x0002a6e9) cell_eswt_app_pane_t1

0x8919,	// (0x00026b2e) grid_highlight_pane_cp70_ParamLimits

0x8919,	// (0x00026b2e) grid_highlight_pane_cp70

0x552f,	// (0x00023744) set_content_pane_g1

0xaba3,	// (0x00028db8) status_small_volume_pane

0xc506,	// (0x0002a71b) status_small_volume_pane_g1

0xc50e,	// (0x0002a723) volume_small2_pane

0xc517,	// (0x0002a72c) volume_small2_pane_g1

0xc520,	// (0x0002a735) volume_small2_pane_g2

0xc529,	// (0x0002a73e) volume_small2_pane_g3

0xc532,	// (0x0002a747) volume_small2_pane_g4

0xc53b,	// (0x0002a750) volume_small2_pane_g5

0xc544,	// (0x0002a759) volume_small2_pane_g6

0xc54d,	// (0x0002a762) volume_small2_pane_g7

0xc556,	// (0x0002a76b) volume_small2_pane_g8

0xc55f,	// (0x0002a774) volume_small2_pane_g9

0xc568,	// (0x0002a77d) volume_small2_pane_g10

0x0009,

0xfc0e,	// (0x0002de23) volume_small2_pane_g

0x83a9,	// (0x000265be) fep_vkb_top_text_pane_g1_ParamLimits

0xc1c3,	// (0x0002a3d8) fep_vkb_top_text_pane_t1_ParamLimits

0x85cd,	// (0x000267e2) popup_preview_fixed_window_g3_ParamLimits

0x85cd,	// (0x000267e2) popup_preview_fixed_window_g3

0xb15b,	// (0x00029370) popup_toolbar_trans_pane

0x7403,	// (0x00025618) aid_height_set_list_ParamLimits

0x740f,	// (0x00025624) aid_size_parent_ParamLimits

0x56ae,	// (0x000238c3) list_highlight_pane_cp2_ParamLimits

0x552f,	// (0x00023744) set_content_pane_g1_ParamLimits

0xbb5a,	// (0x00029d6f) list_single_image_pane_ParamLimits

0xbb5a,	// (0x00029d6f) list_single_image_pane

0xc571,	// (0x0002a786) aid_size_cell_image_ParamLimits

0xc571,	// (0x0002a786) aid_size_cell_image

0xc57e,	// (0x0002a793) grid_single_image_pane_ParamLimits

0xc57e,	// (0x0002a793) grid_single_image_pane

0x552f,	// (0x00023744) list_single_image_pane_g1_ParamLimits

0x552f,	// (0x00023744) list_single_image_pane_g1

0x553b,	// (0x00023750) list_single_image_pane_g2_ParamLimits

0x553b,	// (0x00023750) list_single_image_pane_g2

0x0001,

0xfc23,	// (0x0002de38) list_single_image_pane_g_ParamLimits

0xfc23,	// (0x0002de38) list_single_image_pane_g

0x7a30,	// (0x00025c45) list_single_image_pane_t1_ParamLimits

0x7a30,	// (0x00025c45) list_single_image_pane_t1

0xc58a,	// (0x0002a79f) cell_image_list_pane_ParamLimits

0xc58a,	// (0x0002a79f) cell_image_list_pane

0xc59d,	// (0x0002a7b2) cell_image_list_pane_g1

0xc5a6,	// (0x0002a7bb) cell_image_list_pane_g2

0x0001,

0xfc28,	// (0x0002de3d) cell_image_list_pane_g

0x8925,	// (0x00026b3a) aid_size_cell_tb_trans_pane

0x5515,	// (0x0002372a) bg_tb_trans_pane

0x8937,	// (0x00026b4c) grid_tb_trans_pane

0x62ac,	// (0x000244c1) bg_tb_trans_pane_g1

0x62b4,	// (0x000244c9) bg_tb_trans_pane_g2

0x62bc,	// (0x000244d1) bg_tb_trans_pane_g3

0x62c4,	// (0x000244d9) bg_tb_trans_pane_g4

0x62cc,	// (0x000244e1) bg_tb_trans_pane_g5

0x62e4,	// (0x000244f9) bg_tb_trans_pane_g6

0x62ec,	// (0x00024501) bg_tb_trans_pane_g7

0x62d4,	// (0x000244e9) bg_tb_trans_pane_g8

0x62dc,	// (0x000244f1) bg_tb_trans_pane_g9

0x0008,

0xfc2d,	// (0x0002de42) bg_tb_trans_pane_g

0x894b,	// (0x00026b60) cell_toolbar_trans_pane_ParamLimits

0x894b,	// (0x00026b60) cell_toolbar_trans_pane

0x8076,	// (0x0002628b) cell_toolbar_trans_pane_g1

0xbf15,	// (0x0002a12a) list_form2_midp_pane_t1

0xbf23,	// (0x0002a138) list_form2_midp_pane_t2

0x0001,

0xfaca,	// (0x0002dcdf) list_form2_midp_pane_t

0x7d4a,	// (0x00025f5f) scroll_pane_cp51_ParamLimits

0x7ec0,	// (0x000260d5) form2_midp_wait_pane_g1

0x7ec9,	// (0x000260de) form2_midp_wait_pane_g2

0x7ed2,	// (0x000260e7) form2_midp_wait_pane_g3

0x0002,

0xfadf,	// (0x0002dcf4) form2_midp_wait_pane_g

0x4f47,	// (0x0002315c) list_highlight_pane_cp21_ParamLimits

0x7f10,	// (0x00026125) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7f1f,	// (0x00026134) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xe265,	// (0x0002c47a) list_single_2graphic_im_pane_ParamLimits

0xe265,	// (0x0002c47a) list_single_2graphic_im_pane

0xc5af,	// (0x0002a7c4) list_single_2graphic_im_pane_g1_ParamLimits

0xc5af,	// (0x0002a7c4) list_single_2graphic_im_pane_g1

0xc5c0,	// (0x0002a7d5) list_single_2graphic_im_pane_g2_ParamLimits

0xc5c0,	// (0x0002a7d5) list_single_2graphic_im_pane_g2

0xc5cc,	// (0x0002a7e1) list_single_2graphic_im_pane_g3_ParamLimits

0xc5cc,	// (0x0002a7e1) list_single_2graphic_im_pane_g3

0x0003,

0xfc40,	// (0x0002de55) list_single_2graphic_im_pane_g_ParamLimits

0xfc40,	// (0x0002de55) list_single_2graphic_im_pane_g

0xc5e0,	// (0x0002a7f5) list_single_2graphic_im_pane_t1_ParamLimits

0xc5e0,	// (0x0002a7f5) list_single_2graphic_im_pane_t1

0x85d9,	// (0x000267ee) list_single_graphic_2heading_pane_fp_ParamLimits

0x85d9,	// (0x000267ee) list_single_graphic_2heading_pane_fp

0xe60f,	// (0x0002c824) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xe60f,	// (0x0002c824) list_single_graphic_2heading_pane_fp_g1

0x85ed,	// (0x00026802) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x85ed,	// (0x00026802) list_single_graphic_2heading_pane_fp_g2

0xe5d8,	// (0x0002c7ed) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xe5d8,	// (0x0002c7ed) list_single_graphic_2heading_pane_fp_g3

0xe5e4,	// (0x0002c7f9) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xe5e4,	// (0x0002c7f9) list_single_graphic_2heading_pane_fp_g4

0x85f9,	// (0x0002680e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x85f9,	// (0x0002680e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb67,	// (0x0002dd7c) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb67,	// (0x0002dd7c) list_single_graphic_2heading_pane_fp_g

0xe7dc,	// (0x0002c9f1) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe7dc,	// (0x0002c9f1) list_single_graphic_2heading_pane_fp_t1

0xe647,	// (0x0002c85c) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xe647,	// (0x0002c85c) list_single_graphic_2heading_pane_fp_t2

0xe7f2,	// (0x0002ca07) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe7f2,	// (0x0002ca07) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc49,	// (0x0002de5e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc49,	// (0x0002de5e) list_single_graphic_2heading_pane_fp_t

0x80ff,	// (0x00026314) fep_hwr_write_pane_g5_ParamLimits

0x80ff,	// (0x00026314) fep_hwr_write_pane_g5

0x810b,	// (0x00026320) fep_hwr_write_pane_g6_ParamLimits

0x810b,	// (0x00026320) fep_hwr_write_pane_g6

0x87ff,	// (0x00026a14) eswt_shell_pane_ParamLimits

0x6338,	// (0x0002454d) bg_popup_window_pane_cp18_ParamLimits

0x73a7,	// (0x000255bc) heading_pane_cp70

0x88ee,	// (0x00026b03) popup_eswt_tasktip_window_t1_ParamLimits

0xb235,	// (0x0002944a) aid_touch_tab_arrow_left

0xb241,	// (0x00029456) aid_touch_tab_arrow_right

0xa177,	// (0x0002838c) title_pane_g3_ParamLimits

0xa177,	// (0x0002838c) title_pane_g3

0x54e5,	// (0x000236fa) set_value_pane_g1

0xb15b,	// (0x00029370) popup_toolbar_trans_pane_ParamLimits

0x8925,	// (0x00026b3a) aid_size_cell_tb_trans_pane_ParamLimits

0x5515,	// (0x0002372a) bg_tb_trans_pane_ParamLimits

0x8937,	// (0x00026b4c) grid_tb_trans_pane_ParamLimits

0x507a,	// (0x0002328f) cont_note_pane_ParamLimits

0x507a,	// (0x0002328f) cont_note_pane

0x533b,	// (0x00023550) cont_snote2_single_text_pane_ParamLimits

0x533b,	// (0x00023550) cont_snote2_single_text_pane

0x533b,	// (0x00023550) cont_snote2_single_graphic_pane_ParamLimits

0x533b,	// (0x00023550) cont_snote2_single_graphic_pane

0x68ca,	// (0x00024adf) cont_note_wait_pane_ParamLimits

0x68ca,	// (0x00024adf) cont_note_wait_pane

0x68ca,	// (0x00024adf) cont_note_image_pane_ParamLimits

0x68ca,	// (0x00024adf) cont_note_image_pane

0x897d,	// (0x00026b92) popup_note2_window_g1_ParamLimits

0x897d,	// (0x00026b92) popup_note2_window_g1

0x89ae,	// (0x00026bc3) popup_note2_window_t1_ParamLimits

0x89ae,	// (0x00026bc3) popup_note2_window_t1

0x89f3,	// (0x00026c08) popup_note2_window_t2_ParamLimits

0x89f3,	// (0x00026c08) popup_note2_window_t2

0x8a38,	// (0x00026c4d) popup_note2_window_t3_ParamLimits

0x8a38,	// (0x00026c4d) popup_note2_window_t3

0x8a7d,	// (0x00026c92) popup_note2_window_t4_ParamLimits

0x8a7d,	// (0x00026c92) popup_note2_window_t4

0x50fe,	// (0x00023313) popup_note2_window_t5_ParamLimits

0x50fe,	// (0x00023313) popup_note2_window_t5

0x0004,

0xfc55,	// (0x0002de6a) popup_note2_window_t_ParamLimits

0xfc55,	// (0x0002de6a) popup_note2_window_t

0x8aac,	// (0x00026cc1) popup_note2_image_window_g1_ParamLimits

0x8aac,	// (0x00026cc1) popup_note2_image_window_g1

0x8ab8,	// (0x00026ccd) popup_note2_image_window_g2_ParamLimits

0x8ab8,	// (0x00026ccd) popup_note2_image_window_g2

0x0001,

0xfc60,	// (0x0002de75) popup_note2_image_window_g_ParamLimits

0xfc60,	// (0x0002de75) popup_note2_image_window_g

0x8aca,	// (0x00026cdf) popup_note2_image_window_t1_ParamLimits

0x8aca,	// (0x00026cdf) popup_note2_image_window_t1

0x8ae2,	// (0x00026cf7) popup_note2_image_window_t2_ParamLimits

0x8ae2,	// (0x00026cf7) popup_note2_image_window_t2

0x8afa,	// (0x00026d0f) popup_note2_image_window_t3_ParamLimits

0x8afa,	// (0x00026d0f) popup_note2_image_window_t3

0x0002,

0xfc65,	// (0x0002de7a) popup_note2_image_window_t_ParamLimits

0xfc65,	// (0x0002de7a) popup_note2_image_window_t

0x68d8,	// (0x00024aed) popup_note2_wait_window_g1_ParamLimits

0x68d8,	// (0x00024aed) popup_note2_wait_window_g1

0x68e4,	// (0x00024af9) popup_note2_wait_window_g2_ParamLimits

0x68e4,	// (0x00024af9) popup_note2_wait_window_g2

0x68f0,	// (0x00024b05) popup_note2_wait_window_g3_ParamLimits

0x68f0,	// (0x00024b05) popup_note2_wait_window_g3

0x0002,

0xf81e,	// (0x0002da33) popup_note2_wait_window_g_ParamLimits

0xf81e,	// (0x0002da33) popup_note2_wait_window_g

0x8b16,	// (0x00026d2b) popup_note2_wait_window_t1_ParamLimits

0x8b16,	// (0x00026d2b) popup_note2_wait_window_t1

0x8b34,	// (0x00026d49) popup_note2_wait_window_t2_ParamLimits

0x8b34,	// (0x00026d49) popup_note2_wait_window_t2

0x8b52,	// (0x00026d67) popup_note2_wait_window_t3_ParamLimits

0x8b52,	// (0x00026d67) popup_note2_wait_window_t3

0x8b64,	// (0x00026d79) popup_note2_wait_window_t4_ParamLimits

0x8b64,	// (0x00026d79) popup_note2_wait_window_t4

0x0003,

0xfc6c,	// (0x0002de81) popup_note2_wait_window_t_ParamLimits

0xfc6c,	// (0x0002de81) popup_note2_wait_window_t

0x8b76,	// (0x00026d8b) wait_bar2_pane_ParamLimits

0x8b76,	// (0x00026d8b) wait_bar2_pane

0x8b8e,	// (0x00026da3) popup_snote2_single_text_window_g1_ParamLimits

0x8b8e,	// (0x00026da3) popup_snote2_single_text_window_g1

0x8bb6,	// (0x00026dcb) popup_snote2_single_text_window_t1_ParamLimits

0x8bb6,	// (0x00026dcb) popup_snote2_single_text_window_t1

0x8c02,	// (0x00026e17) popup_snote2_single_text_window_t2_ParamLimits

0x8c02,	// (0x00026e17) popup_snote2_single_text_window_t2

0x8c4e,	// (0x00026e63) popup_snote2_single_text_window_t3_ParamLimits

0x8c4e,	// (0x00026e63) popup_snote2_single_text_window_t3

0x8c8f,	// (0x00026ea4) popup_snote2_single_text_window_t4_ParamLimits

0x8c8f,	// (0x00026ea4) popup_snote2_single_text_window_t4

0x8cc5,	// (0x00026eda) popup_snote2_single_text_window_t5_ParamLimits

0x8cc5,	// (0x00026eda) popup_snote2_single_text_window_t5

0x0004,

0xfc75,	// (0x0002de8a) popup_snote2_single_text_window_t_ParamLimits

0xfc75,	// (0x0002de8a) popup_snote2_single_text_window_t

0x8cf0,	// (0x00026f05) popup_snote2_single_graphic_window_g1_ParamLimits

0x8cf0,	// (0x00026f05) popup_snote2_single_graphic_window_g1

0x8d18,	// (0x00026f2d) popup_snote2_single_graphic_window_g2_ParamLimits

0x8d18,	// (0x00026f2d) popup_snote2_single_graphic_window_g2

0x0001,

0xfc80,	// (0x0002de95) popup_snote2_single_graphic_window_g_ParamLimits

0xfc80,	// (0x0002de95) popup_snote2_single_graphic_window_g

0x8d40,	// (0x00026f55) popup_snote2_single_graphic_window_t1_ParamLimits

0x8d40,	// (0x00026f55) popup_snote2_single_graphic_window_t1

0x8d8c,	// (0x00026fa1) popup_snote2_single_graphic_window_t2_ParamLimits

0x8d8c,	// (0x00026fa1) popup_snote2_single_graphic_window_t2

0x8c4e,	// (0x00026e63) popup_snote2_single_graphic_window_t3_ParamLimits

0x8c4e,	// (0x00026e63) popup_snote2_single_graphic_window_t3

0x8c8f,	// (0x00026ea4) popup_snote2_single_graphic_window_t4_ParamLimits

0x8c8f,	// (0x00026ea4) popup_snote2_single_graphic_window_t4

0x8cc5,	// (0x00026eda) popup_snote2_single_graphic_window_t5_ParamLimits

0x8cc5,	// (0x00026eda) popup_snote2_single_graphic_window_t5

0x0004,

0xfc85,	// (0x0002de9a) popup_snote2_single_graphic_window_t_ParamLimits

0xfc85,	// (0x0002de9a) popup_snote2_single_graphic_window_t

0x7ce3,	// (0x00025ef8) clock_nsta_pane_cp2_t1

0x7ce3,	// (0x00025ef8) clock_nsta_pane_cp2_t2

0x0001,

0xfaa0,	// (0x0002dcb5) clock_nsta_pane_cp2_t

0xdefa,	// (0x0002c10f) form_field_data_wide_pane_g1_ParamLimits

0x552f,	// (0x00023744) form_field_data_wide_pane_g2_ParamLimits

0x552f,	// (0x00023744) form_field_data_wide_pane_g2

0x553b,	// (0x00023750) form_field_data_wide_pane_g3_ParamLimits

0x553b,	// (0x00023750) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x0002d86b) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x0002d86b) form_field_data_wide_pane_g

0xbdc7,	// (0x00029fdc) grid_touch_3_pane_ParamLimits

0xbdc7,	// (0x00029fdc) grid_touch_3_pane

0xc611,	// (0x0002a826) cell_touch_3_pane_ParamLimits

0xc611,	// (0x0002a826) cell_touch_3_pane

0x8076,	// (0x0002628b) cell_touch_3_pane_g1

0x8076,	// (0x0002628b) cell_touch_3_pane_g2

0x0001,

0xfb25,	// (0x0002dd3a) cell_touch_3_pane_g

0x5156,	// (0x0002336b) cont_query_data_pane

0x515e,	// (0x00023373) cont_query_data_pane_cp1

0x8dd8,	// (0x00026fed) button_value_adjust_pane_cp7

0x8de0,	// (0x00026ff5) query_popup_pane_cp3

0x5a7a,	// (0x00023c8f) bg_popup_sub_pane_cp22_ParamLimits

0xa853,	// (0x00028a68) navi_navi_volume_pane_cp2

0xa86b,	// (0x00028a80) popup_side_volume_key_window_g2

0xa877,	// (0x00028a8c) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x0002d901) popup_side_volume_key_window_g

0xa891,	// (0x00028aa6) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x0002d908) popup_side_volume_key_window_t

0x5cc4,	// (0x00023ed9) popup_side_volume_key_window_ParamLimits

0xdb5e,	// (0x0002bd73) list_double_graphic_pane_g4_ParamLimits

0xdb5e,	// (0x0002bd73) list_double_graphic_pane_g4

0xbb2e,	// (0x00029d43) list_single_2heading_msg_pane_ParamLimits

0xbb2e,	// (0x00029d43) list_single_2heading_msg_pane

0xe810,	// (0x0002ca25) list_single_2heading_msg_pane_g1_ParamLimits

0xe810,	// (0x0002ca25) list_single_2heading_msg_pane_g1

0xd9a9,	// (0x0002bbbe) list_single_2heading_msg_pane_g2_ParamLimits

0xd9a9,	// (0x0002bbbe) list_single_2heading_msg_pane_g2

0xe35d,	// (0x0002c572) list_single_2heading_msg_pane_g3_ParamLimits

0xe35d,	// (0x0002c572) list_single_2heading_msg_pane_g3

0xf3db,	// (0x0002d5f0) list_single_2heading_msg_pane_g4_ParamLimits

0xf3db,	// (0x0002d5f0) list_single_2heading_msg_pane_g4

0x0003,

0xfc90,	// (0x0002dea5) list_single_2heading_msg_pane_g_ParamLimits

0xfc90,	// (0x0002dea5) list_single_2heading_msg_pane_g

0xf3f3,	// (0x0002d608) list_single_2heading_msg_pane_t1_ParamLimits

0xf3f3,	// (0x0002d608) list_single_2heading_msg_pane_t1

0xf41b,	// (0x0002d630) list_single_2heading_msg_pane_t2_ParamLimits

0xf41b,	// (0x0002d630) list_single_2heading_msg_pane_t2

0xf44f,	// (0x0002d664) list_single_2heading_msg_pane_t3_ParamLimits

0xf44f,	// (0x0002d664) list_single_2heading_msg_pane_t3

0xf488,	// (0x0002d69d) list_single_2heading_msg_pane_t4_ParamLimits

0xf488,	// (0x0002d69d) list_single_2heading_msg_pane_t4

0x0003,

0xfc99,	// (0x0002deae) list_single_2heading_msg_pane_t_ParamLimits

0xfc99,	// (0x0002deae) list_single_2heading_msg_pane_t

0x4eed,	// (0x00023102) title_pane_g4_ParamLimits

0x4eed,	// (0x00023102) title_pane_g4

0xa50f,	// (0x00028724) title_pane_stacon_g3_ParamLimits

0xa50f,	// (0x00028724) title_pane_stacon_g3

0x8971,	// (0x00026b86) list_single_2graphic_im_pane_g4_ParamLimits

0x8971,	// (0x00026b86) list_single_2graphic_im_pane_g4

0x71d1,	// (0x000253e6) popup_side_volume_key_window_cp

0x7639,	// (0x0002584e) main_idle_act2_pane_t1

0xb524,	// (0x00029739) toolbar_button_pane_g10

0xa45a,	// (0x0002866f) popup_toolbar_window_cp1

0x7cd4,	// (0x00025ee9) clock_nsta_pane_cp_t1

0x7cd4,	// (0x00025ee9) clock_nsta_pane_cp_t2

0x0001,

0xfa9b,	// (0x0002dcb0) clock_nsta_pane_cp_t

0xa853,	// (0x00028a68) navi_navi_volume_pane_cp2_ParamLimits

0xa85f,	// (0x00028a74) popup_side_volume_key_window_g1_ParamLimits

0xa86b,	// (0x00028a80) popup_side_volume_key_window_g2_ParamLimits

0xa877,	// (0x00028a8c) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x0002d901) popup_side_volume_key_window_g_ParamLimits

0xbf82,	// (0x0002a197) fep_hwr_aid_pane

0xc023,	// (0x0002a238) bg_fep_hwr_top_pane_g4_ParamLimits

0x80e1,	// (0x000262f6) fep_hwr_top_pane_g1_ParamLimits

0x80cf,	// (0x000262e4) fep_hwr_top_pane_g2_ParamLimits

0xc043,	// (0x0002a258) fep_hwr_top_pane_g3_ParamLimits

0xfaf0,	// (0x0002dd05) fep_hwr_top_pane_g_ParamLimits

0xc058,	// (0x0002a26d) fep_hwr_top_text_pane_ParamLimits

0x6fda,	// (0x000251ef) aid_touch_tab_arrow_arrow_2

0x6fd1,	// (0x000251e6) aid_touch_tab_arrow_left_2

0xbf96,	// (0x0002a1ab) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xbfc9,	// (0x0002a1de) fep_hwr_prediction_pane

0x8214,	// (0x00026429) fep_vkb_prediction_pane

0xc1a0,	// (0x0002a3b5) fep_vkb_side_pane_g3_ParamLimits

0xc1a0,	// (0x0002a3b5) fep_vkb_side_pane_g3

0xc2ab,	// (0x0002a4c0) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc315,	// (0x0002a52a) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc322,	// (0x0002a537) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9f,	// (0x0002ddb4) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xc652,	// (0x0002a867) fep_hwr_prediction_pane_g1

0xc65c,	// (0x0002a871) fep_hwr_prediction_pane_g2

0xc664,	// (0x0002a879) fep_hwr_prediction_pane_g3

0xc66c,	// (0x0002a881) fep_hwr_prediction_pane_g4

0x0003,

0xfca2,	// (0x0002deb7) fep_hwr_prediction_pane_g

0x8df1,	// (0x00027006) fep_vkb_prediction_pane_g1

0x8dfb,	// (0x00027010) fep_vkb_prediction_pane_g2

0x8e03,	// (0x00027018) fep_vkb_prediction_pane_g3

0x8e0b,	// (0x00027020) fep_vkb_prediction_pane_g4

0x0003,

0xfcab,	// (0x0002dec0) fep_vkb_prediction_pane_g

0xb977,	// (0x00029b8c) slider_set_pane_g3

0xb98b,	// (0x00029ba0) slider_set_pane_g4

0xb9a3,	// (0x00029bb8) slider_set_pane_g5

0xb977,	// (0x00029b8c) slider_set_pane_g6

0xb9b9,	// (0x00029bce) slider_set_pane_g7

0x7432,	// (0x00025647) slider_form_pane_g3

0x743b,	// (0x00025650) slider_form_pane_g4

0x7443,	// (0x00025658) slider_form_pane_g5

0x7432,	// (0x00025647) slider_form_pane_g6

0xbb13,	// (0x00029d28) slider_form_pane_g7

0x788a,	// (0x00025a9f) slider_set_pane_vc_g3

0x7893,	// (0x00025aa8) slider_set_pane_vc_g4

0x789c,	// (0x00025ab1) slider_set_pane_vc_g5

0x788a,	// (0x00025a9f) slider_set_pane_vc_g6

0x78a5,	// (0x00025aba) slider_set_pane_vc_g7

0x788a,	// (0x00025a9f) slider_form_pane_vc_g1

0x7893,	// (0x00025aa8) slider_form_pane_vc_g2

0x789c,	// (0x00025ab1) slider_form_pane_vc_g3

0x788a,	// (0x00025a9f) slider_form_pane_vc_g4

0x7a19,	// (0x00025c2e) slider_form_pane_vc_g5

0x0004,

0xfa6d,	// (0x0002dc82) slider_form_pane_vc_g

0x9f50,	// (0x00028165) main_idle_act3_pane

0x8e13,	// (0x00027028) ai3_links_pane

0xc674,	// (0x0002a889) popup_ai3_data_window_ParamLimits

0xc674,	// (0x0002a889) popup_ai3_data_window

0x4e57,	// (0x0002306c) grid_ai3_links_pane

0xc68c,	// (0x0002a8a1) cell_ai3_links_pane_ParamLimits

0xc68c,	// (0x0002a8a1) cell_ai3_links_pane

0x8e1c,	// (0x00027031) bg_popup_sub_pane_cp11

0x8e29,	// (0x0002703e) cell_ai3_links_pane_g1

0x4e57,	// (0x0002306c) bg_popup_sub_pane_cp12

0x8e4e,	// (0x00027063) heading_ai3_data_pane

0x8e56,	// (0x0002706b) list_ai3_gene_pane

0x8e62,	// (0x00027077) popup_ai3_data_window_g1

0x8e6a,	// (0x0002707f) heading_ai3_data_pane_g1

0x8e72,	// (0x00027087) heading_ai3_data_pane_t1

0x8e80,	// (0x00027095) list_double_ai3_gene_pane_ParamLimits

0x8e80,	// (0x00027095) list_double_ai3_gene_pane

0x8e8d,	// (0x000270a2) list_single_ai3_gene_pane_ParamLimits

0x8e8d,	// (0x000270a2) list_single_ai3_gene_pane

0x803b,	// (0x00026250) list_highlight_pane_cp7_ParamLimits

0x803b,	// (0x00026250) list_highlight_pane_cp7

0x8e9a,	// (0x000270af) list_single_a13_gene_pane_t1_ParamLimits

0x8e9a,	// (0x000270af) list_single_a13_gene_pane_t1

0x8eb1,	// (0x000270c6) list_single_ai3_gene_pane_g1

0x8eba,	// (0x000270cf) list_single_ai3_gene_pane_g2

0x0001,

0xfcb4,	// (0x0002dec9) list_single_ai3_gene_pane_g

0x8ec2,	// (0x000270d7) list_double_ai3_gene_pane_g1_ParamLimits

0x8ec2,	// (0x000270d7) list_double_ai3_gene_pane_g1

0x8ece,	// (0x000270e3) list_double_ai3_gene_pane_t1_ParamLimits

0x8ece,	// (0x000270e3) list_double_ai3_gene_pane_t1

0x8eea,	// (0x000270ff) list_double_ai3_gene_pane_t2_ParamLimits

0x8eea,	// (0x000270ff) list_double_ai3_gene_pane_t2

0x8eff,	// (0x00027114) list_double_ai3_gene_pane_t3_ParamLimits

0x8eff,	// (0x00027114) list_double_ai3_gene_pane_t3

0x0002,

0xfcb9,	// (0x0002dece) list_double_ai3_gene_pane_t_ParamLimits

0xfcb9,	// (0x0002dece) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe808,	// (0x0002ca1d) aid_size_min_col_2

0xc63e,	// (0x0002a853) aid_size_min_msg_ParamLimits

0xc63e,	// (0x0002a853) aid_size_min_msg

0xc1b4,	// (0x0002a3c9) fep_vkb_top_text_pane_g2_ParamLimits

0xc1b4,	// (0x0002a3c9) fep_vkb_top_text_pane_g2

0x0001,

0xfb20,	// (0x0002dd35) fep_vkb_top_text_pane_g_ParamLimits

0xfb20,	// (0x0002dd35) fep_vkb_top_text_pane_g

0x9f50,	// (0x00028165) main_hc_apps_shell_pane

0x8f1c,	// (0x00027131) grid_hc_apps_pane_ParamLimits

0x8f1c,	// (0x00027131) grid_hc_apps_pane

0x8f2e,	// (0x00027143) list_hc_apps_pane

0x8f36,	// (0x0002714b) scroll_pane_cp37_ParamLimits

0x8f36,	// (0x0002714b) scroll_pane_cp37

0xc6a0,	// (0x0002a8b5) cell_hc_apps_pane_ParamLimits

0xc6a0,	// (0x0002a8b5) cell_hc_apps_pane

0xc72e,	// (0x0002a943) cell_hc_apps_pane_g1_ParamLimits

0xc72e,	// (0x0002a943) cell_hc_apps_pane_g1

0x8f42,	// (0x00027157) cell_hc_apps_pane_g2_ParamLimits

0x8f42,	// (0x00027157) cell_hc_apps_pane_g2

0x8f5e,	// (0x00027173) cell_hc_apps_pane_g3_ParamLimits

0x8f5e,	// (0x00027173) cell_hc_apps_pane_g3

0x0002,

0xfcc0,	// (0x0002ded5) cell_hc_apps_pane_g_ParamLimits

0xfcc0,	// (0x0002ded5) cell_hc_apps_pane_g

0xc75a,	// (0x0002a96f) cell_hc_apps_pane_t1_ParamLimits

0xc75a,	// (0x0002a96f) cell_hc_apps_pane_t1

0x507a,	// (0x0002328f) grid_highlight_pane_cp10_ParamLimits

0x507a,	// (0x0002328f) grid_highlight_pane_cp10

0xc798,	// (0x0002a9ad) list_single_hc_apps_pane_ParamLimits

0xc798,	// (0x0002a9ad) list_single_hc_apps_pane

0xc7c8,	// (0x0002a9dd) list_single_hc_apps_pane_g1

0xf4ad,	// (0x0002d6c2) list_single_hc_apps_pane_g2

0x0001,

0xfcc7,	// (0x0002dedc) list_single_hc_apps_pane_g

0xf4c6,	// (0x0002d6db) list_single_hc_apps_pane_g2_copy1

0xf4e2,	// (0x0002d6f7) list_single_hc_apps_pane_t1

0x4f47,	// (0x0002315c) bg_set_opt_pane_cp_ParamLimits

0xa21f,	// (0x00028434) setting_slider_pane_t1_ParamLimits

0xa235,	// (0x0002844a) setting_slider_pane_t2_ParamLimits

0xa24e,	// (0x00028463) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0002d74e) setting_slider_pane_t_ParamLimits

0xa265,	// (0x0002847a) slider_set_pane_ParamLimits

0xac15,	// (0x00028e2a) control_pane_g5_ParamLimits

0xac15,	// (0x00028e2a) control_pane_g5

0x73ee,	// (0x00025603) slider_set_pane_g1_ParamLimits

0xb96b,	// (0x00029b80) slider_set_pane_g2_ParamLimits

0xb977,	// (0x00029b8c) slider_set_pane_g3_ParamLimits

0xb98b,	// (0x00029ba0) slider_set_pane_g4_ParamLimits

0xb9a3,	// (0x00029bb8) slider_set_pane_g5_ParamLimits

0xb977,	// (0x00029b8c) slider_set_pane_g6_ParamLimits

0xb9b9,	// (0x00029bce) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x0002db4f) slider_set_pane_g_ParamLimits

0x4f47,	// (0x0002315c) navi_icon_text_pane_ParamLimits

0xb20f,	// (0x00029424) aid_fill_nsta_2_ParamLimits

0xb235,	// (0x0002944a) aid_touch_tab_arrow_left_ParamLimits

0xb241,	// (0x00029456) aid_touch_tab_arrow_right_ParamLimits

0xb2ab,	// (0x000294c0) clock_nsta_pane_ParamLimits

0x6fb3,	// (0x000251c8) navi_icon_pane_g1_ParamLimits

0x6fbf,	// (0x000251d4) navi_text_pane_t1_ParamLimits

0x7d24,	// (0x00025f39) navi_icon_text_pane_g1_ParamLimits

0x7d30,	// (0x00025f45) navi_icon_text_pane_t1_ParamLimits

0xc7c8,	// (0x0002a9dd) list_single_hc_apps_pane_g1_ParamLimits

0xf4ad,	// (0x0002d6c2) list_single_hc_apps_pane_g2_ParamLimits

0xfcc7,	// (0x0002dedc) list_single_hc_apps_pane_g_ParamLimits

0xf4c6,	// (0x0002d6db) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xf4e2,	// (0x0002d6f7) list_single_hc_apps_pane_t1_ParamLimits

0xa093,	// (0x000282a8) popup_toolbar2_fixed_window_ParamLimits

0xa093,	// (0x000282a8) popup_toolbar2_fixed_window

0xb153,	// (0x00029368) popup_toolbar2_float_window

0x4e57,	// (0x0002306c) bg_popup_sub_pane_cp27

0x8f80,	// (0x00027195) grid_toolbar2_float_pane

0x4e57,	// (0x0002306c) bg_popup_sub_pane_cp26

0x8f80,	// (0x00027195) grid_toolbar2_fixed_pane

0xc7e1,	// (0x0002a9f6) cell_toolbar2_fixed_pane_ParamLimits

0xc7e1,	// (0x0002a9f6) cell_toolbar2_fixed_pane

0xc7f2,	// (0x0002aa07) cell_toolbar2_fixed_pane_g1

0x8f88,	// (0x0002719d) toolbar2_fixed_button_pane

0x62ac,	// (0x000244c1) toolbar2_fixed_button_pane_g1

0x62b4,	// (0x000244c9) toolbar2_fixed_button_pane_g2

0x62bc,	// (0x000244d1) toolbar2_fixed_button_pane_g3

0x62c4,	// (0x000244d9) toolbar2_fixed_button_pane_g4

0x62cc,	// (0x000244e1) toolbar2_fixed_button_pane_g5

0x62d4,	// (0x000244e9) toolbar2_fixed_button_pane_g6

0x62dc,	// (0x000244f1) toolbar2_fixed_button_pane_g7

0x62e4,	// (0x000244f9) toolbar2_fixed_button_pane_g8

0x62ec,	// (0x00024501) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x0002da51) toolbar2_fixed_button_pane_g

0x8f90,	// (0x000271a5) cell_toolbar2_float_pane_ParamLimits

0x8f90,	// (0x000271a5) cell_toolbar2_float_pane

0x8fa1,	// (0x000271b6) cell_toolbar2_float_pane_g1

0x8f88,	// (0x0002719d) toolbar2_fixed_button_pane_cp

0xc16d,	// (0x0002a382) fep_vkb_accented_list_pane_ParamLimits

0xc16d,	// (0x0002a382) fep_vkb_accented_list_pane

0xc28b,	// (0x0002a4a0) bg_popup_fep_shadow_pane_g9

0x5ed3,	// (0x000240e8) bg_popup_fep_shadow_pane_cp3

0x565e,	// (0x00023873) list_accented_list_pane

0x8faa,	// (0x000271bf) list_single_accented_list_pane_ParamLimits

0x8faa,	// (0x000271bf) list_single_accented_list_pane

0x5ed3,	// (0x000240e8) list_highlight_pane_cp10

0x8fbb,	// (0x000271d0) list_single_accented_list_pane_t1

0xb0b9,	// (0x000292ce) popup_slider_window_ParamLimits

0xb0b9,	// (0x000292ce) popup_slider_window

0x8de8,	// (0x00026ffd) aid_indentation_list_msg

0xc88d,	// (0x0002aaa2) bg_popup_window_pane_cp19

0x9021,	// (0x00027236) popup_slider_window_g1

0x903d,	// (0x00027252) popup_slider_window_g2

0x9059,	// (0x0002726e) popup_slider_window_g3

0x0005,

0xfccc,	// (0x0002dee1) popup_slider_window_g

0x9075,	// (0x0002728a) popup_slider_window_t1

0x90b9,	// (0x000272ce) small_volume_slider_vertical_pane

0x8076,	// (0x0002628b) small_volume_slider_vertical_pane_g1

0x8076,	// (0x0002628b) small_volume_slider_vertical_pane_g2

0x90d5,	// (0x000272ea) small_volume_slider_vertical_pane_g3

0x0002,

0xfcde,	// (0x0002def3) small_volume_slider_vertical_pane_g

0x9f07,	// (0x0002811c) area_side_right_pane_ParamLimits

0x9f07,	// (0x0002811c) area_side_right_pane

0xc907,	// (0x0002ab1c) aid_size_side_button_ParamLimits

0xc907,	// (0x0002ab1c) aid_size_side_button

0xc91b,	// (0x0002ab30) grid_sctrl_middle_pane_ParamLimits

0xc91b,	// (0x0002ab30) grid_sctrl_middle_pane

0xc937,	// (0x0002ab4c) sctrl_sk_bottom_pane

0xc948,	// (0x0002ab5d) sctrl_sk_top_pane

0xc95a,	// (0x0002ab6f) aid_touch_sctrl_top

0xc967,	// (0x0002ab7c) bg_sctrl_sk_pane_ParamLimits

0xc967,	// (0x0002ab7c) bg_sctrl_sk_pane

0xc975,	// (0x0002ab8a) sctrl_sk_top_pane_g1

0xc982,	// (0x0002ab97) sctrl_sk_top_pane_t1

0xc95a,	// (0x0002ab6f) aid_touch_sctrl_bottom

0xc967,	// (0x0002ab7c) bg_sctrl_sk_pane_cp_ParamLimits

0xc967,	// (0x0002ab7c) bg_sctrl_sk_pane_cp

0xc99d,	// (0x0002abb2) sctrl_sk_bottom_pane_g1

0xc982,	// (0x0002ab97) sctrl_sk_bottom_pane_t1

0xc9a6,	// (0x0002abbb) cell_sctrl_middle_pane_ParamLimits

0xc9a6,	// (0x0002abbb) cell_sctrl_middle_pane

0xc9c1,	// (0x0002abd6) aid_touch_sctrl_middle_ParamLimits

0xc9c1,	// (0x0002abd6) aid_touch_sctrl_middle

0xc9d2,	// (0x0002abe7) bg_sctrl_middle_pane_ParamLimits

0xc9d2,	// (0x0002abe7) bg_sctrl_middle_pane

0xc2ab,	// (0x0002a4c0) cell_sctrl_middle_pane_g1_ParamLimits

0xc2ab,	// (0x0002a4c0) cell_sctrl_middle_pane_g1

0xc9e0,	// (0x0002abf5) cell_sctrl_middle_pane_g2_ParamLimits

0xc9e0,	// (0x0002abf5) cell_sctrl_middle_pane_g2

0x0001,

0xfcea,	// (0x0002deff) cell_sctrl_middle_pane_g_ParamLimits

0xfcea,	// (0x0002deff) cell_sctrl_middle_pane_g

0x62ac,	// (0x000244c1) bg_sctrl_middle_pane_g1

0x62bc,	// (0x000244d1) bg_sctrl_middle_pane_g2

0x62b4,	// (0x000244c9) bg_sctrl_middle_pane_g3

0x62cc,	// (0x000244e1) bg_sctrl_middle_pane_g4

0x62c4,	// (0x000244d9) bg_sctrl_middle_pane_g5

0x62d4,	// (0x000244e9) bg_sctrl_middle_pane_g6

0x62dc,	// (0x000244f1) bg_sctrl_middle_pane_g7

0x62ec,	// (0x00024501) bg_sctrl_middle_pane_g8

0x0007,

0xfcef,	// (0x0002df04) bg_sctrl_middle_pane_g

0x62e4,	// (0x000244f9) bg_sctrl_middle_pane_g8_copy1

0x62ac,	// (0x000244c1) bg_sctrl_sk_pane_g1

0x62b4,	// (0x000244c9) bg_sctrl_sk_pane_g2

0x62bc,	// (0x000244d1) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x0002da51) bg_sctrl_sk_pane_g

0x545d,	// (0x00023672) aid_size_touch_scroll_bar

0x62c4,	// (0x000244d9) bg_sctrl_sk_pane_g4

0x62cc,	// (0x000244e1) bg_sctrl_sk_pane_g5

0x62d4,	// (0x000244e9) bg_sctrl_sk_pane_g6

0x62dc,	// (0x000244f1) bg_sctrl_sk_pane_g7

0x62e4,	// (0x000244f9) bg_sctrl_sk_pane_g8

0x62ec,	// (0x00024501) bg_sctrl_sk_pane_g9

0xadec,	// (0x00029001) popup_fep_china_hwr2_fs_candidate_window

0xadf4,	// (0x00029009) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xadf4,	// (0x00029009) popup_fep_china_hwr2_fs_control_window

0xc2ab,	// (0x0002a4c0) sctrl_sk_top_pane_g2

0x0001,

0xfce5,	// (0x0002defa) sctrl_sk_top_pane_g

0xc9f6,	// (0x0002ac0b) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc9f6,	// (0x0002ac0b) aid_fep_china_hwr2_fs_cell

0xca07,	// (0x0002ac1c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xca07,	// (0x0002ac1c) bg_popup_fep_shadow_pane_cp4

0xca1e,	// (0x0002ac33) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xca1e,	// (0x0002ac33) bg_popup_fep_shadow_pane_cp5

0xca30,	// (0x0002ac45) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xca30,	// (0x0002ac45) popup_fep_china_hwr2_fs_control_bar_grid

0xca40,	// (0x0002ac55) popup_fep_china_hwr2_fs_control_funtion_grid

0x90ec,	// (0x00027301) aid_fep_china_hwr2_fs_candi_cell

0x4e57,	// (0x0002306c) bg_popup_fep_shadow_pane_cp6

0x90f6,	// (0x0002730b) popup_fep_china_hwr2_fs_candidate_grid

0xca48,	// (0x0002ac5d) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xca48,	// (0x0002ac5d) cell_fep_china_hwr2_fs_funtion_grid

0x8076,	// (0x0002628b) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x90de,	// (0x000272f3) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x90de,	// (0x000272f3) cell_fep_china_hwr2_fs_funtion_grid_g1

0x90fe,	// (0x00027313) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x90fe,	// (0x00027313) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd00,	// (0x0002df15) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd00,	// (0x0002df15) cell_fep_china_hwr2_fs_funtion_grid_g

0xca60,	// (0x0002ac75) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xca60,	// (0x0002ac75) cell_fep_china_hwr2_fs_funtion_grid_t1

0xca75,	// (0x0002ac8a) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xca75,	// (0x0002ac8a) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd05,	// (0x0002df1a) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd05,	// (0x0002df1a) cell_fep_china_hwr2_fs_funtion_grid_t

0x9114,	// (0x00027329) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x911c,	// (0x00027331) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x9124,	// (0x00027339) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0a,	// (0x0002df1f) popup_fep_china_hwr2_fs_control_bar_grid_g

0x912c,	// (0x00027341) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x912c,	// (0x00027341) cell_fep_china_hwr2_fs_candidate_grid

0x9145,	// (0x0002735a) popup_fep_china_hwr2_fs_candidate_grid_g20

0x914d,	// (0x00027362) popup_fep_china_hwr2_fs_candidate_grid_g21

0x8076,	// (0x0002628b) cell_fep_china_hwr2_fs_candidate_grid_g1

0x8076,	// (0x0002628b) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb25,	// (0x0002dd3a) cell_fep_china_hwr2_fs_candidate_grid_g

0x9155,	// (0x0002736a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x6111,	// (0x00024326) clock_nsta_pane_cp_24_ParamLimits

0x6111,	// (0x00024326) clock_nsta_pane_cp_24

0x616e,	// (0x00024383) indicator_nsta_pane_cp_24_ParamLimits

0x616e,	// (0x00024383) indicator_nsta_pane_cp_24

0x6ebe,	// (0x000250d3) heading_pane_g1

0x0001,

0xf8a1,	// (0x0002dab6) heading_pane_g

0xbbfc,	// (0x00029e11) grid_sct_catagory_button_pane

0x67fb,	// (0x00024a10) scroll_pane_cp5_ParamLimits

0x7d56,	// (0x00025f6b) button_value_adjust_pane_cp5_ParamLimits

0x7d56,	// (0x00025f6b) button_value_adjust_pane_cp5

0x7e14,	// (0x00026029) form2_midp_time_pane_ParamLimits

0x9163,	// (0x00027378) cell_sct_catagory_button_pane_ParamLimits

0x9163,	// (0x00027378) cell_sct_catagory_button_pane

0x803b,	// (0x00026250) bg_button_pane_cp01_ParamLimits

0x803b,	// (0x00026250) bg_button_pane_cp01

0x8076,	// (0x0002628b) cell_sct_catagory_button_pane_g1

0xb0f0,	// (0x00029305) popup_tb_extension_window

0xca91,	// (0x0002aca6) aid_size_cell_ext_ParamLimits

0xca91,	// (0x0002aca6) aid_size_cell_ext

0x507a,	// (0x0002328f) bg_tb_trans_pane_cp1_ParamLimits

0x507a,	// (0x0002328f) bg_tb_trans_pane_cp1

0xcab1,	// (0x0002acc6) grid_tb_ext_pane_ParamLimits

0xcab1,	// (0x0002acc6) grid_tb_ext_pane

0xcad7,	// (0x0002acec) cell_tb_ext_pane_ParamLimits

0xcad7,	// (0x0002acec) cell_tb_ext_pane

0xcaec,	// (0x0002ad01) cell_tb_ext_pane_g1_ParamLimits

0xcaec,	// (0x0002ad01) cell_tb_ext_pane_g1

0x9175,	// (0x0002738a) cell_tb_ext_pane_t1

0x507a,	// (0x0002328f) list_highlight_pane_cp11_ParamLimits

0x507a,	// (0x0002328f) list_highlight_pane_cp11

0xa0b2,	// (0x000282c7) popup_uni_indicator_window_ParamLimits

0xa0b2,	// (0x000282c7) popup_uni_indicator_window

0x5515,	// (0x0002372a) bg_popup_sub_pane_cp14

0x9190,	// (0x000273a5) list_uniindi_pane

0x919c,	// (0x000273b1) uniindi_top_pane

0x507a,	// (0x0002328f) bg_uniindi_top_pane

0x91bb,	// (0x000273d0) uniindi_top_pane_g1

0x91d1,	// (0x000273e6) uniindi_top_pane_g2

0x0003,

0xfd11,	// (0x0002df26) uniindi_top_pane_g

0x91fb,	// (0x00027410) uniindi_top_pane_t1

0x9225,	// (0x0002743a) list_single_uniindi_pane_ParamLimits

0x9225,	// (0x0002743a) list_single_uniindi_pane

0x8076,	// (0x0002628b) bg_uniindi_top_pane_g1

0x9237,	// (0x0002744c) list_single_uniindi_pane_g1

0x924a,	// (0x0002745f) list_single_uniindi_pane_t1

0x9f50,	// (0x00028165) control_bg_pane

0x926f,	// (0x00027484) bg_sctrl_sk_pane_cp1

0x9278,	// (0x0002748d) bg_sctrl_sk_pane_cp2

0x9281,	// (0x00027496) control_bg_pane_g1

0x928a,	// (0x0002749f) control_bg_pane_g2

0x0001,

0xfd1a,	// (0x0002df2f) control_bg_pane_g

0x7c17,	// (0x00025e2c) cell_indicator_nsta_pane_g1_ParamLimits

0xbe16,	// (0x0002a02b) cell_indicator_nsta_pane_g2_ParamLimits

0xfa89,	// (0x0002dc9e) cell_indicator_nsta_pane_g_ParamLimits

0xe5a4,	// (0x0002c7b9) form2_midp_time_pane_t1_ParamLimits

0xad62,	// (0x00028f77) main_idle_act4_pane_ParamLimits

0xad62,	// (0x00028f77) main_idle_act4_pane

0xb0f0,	// (0x00029305) popup_tb_extension_window_ParamLimits

0xcacb,	// (0x0002ace0) tb_ext_find_pane_ParamLimits

0xcacb,	// (0x0002ace0) tb_ext_find_pane

0x9293,	// (0x000274a8) ai_gene_pane_1_cp1

0x5f67,	// (0x0002417c) ai_gene_pane_2_cp1

0x929b,	// (0x000274b0) list_single_idle_plugin_calendar_pane

0x92a4,	// (0x000274b9) list_single_idle_plugin_notification_pane

0x92ad,	// (0x000274c2) list_single_idle_plugin_player_pane

0xcb09,	// (0x0002ad1e) list_single_idle_plugin_shortcut_pane_ParamLimits

0xcb09,	// (0x0002ad1e) list_single_idle_plugin_shortcut_pane

0xcb2b,	// (0x0002ad40) main_idle_act4_pane_t1

0xcb3d,	// (0x0002ad52) main_idle_act4_pane_t2

0x0001,

0xfd1f,	// (0x0002df34) main_idle_act4_pane_t

0xcb4f,	// (0x0002ad64) middle_sk_idle_act4_pane_ParamLimits

0xcb4f,	// (0x0002ad64) middle_sk_idle_act4_pane

0xcb65,	// (0x0002ad7a) popup_clock_digital_analogue_window_cp2

0xcb7f,	// (0x0002ad94) shortcut_wheel_idle_act4_pane_ParamLimits

0xcb7f,	// (0x0002ad94) shortcut_wheel_idle_act4_pane

0x8076,	// (0x0002628b) shortcut_wheel_idle_act4_pane_g1

0x8076,	// (0x0002628b) shortcut_wheel_idle_act4_pane_g2

0x8076,	// (0x0002628b) shortcut_wheel_idle_act4_pane_g3

0x8076,	// (0x0002628b) shortcut_wheel_idle_act4_pane_g4

0x8076,	// (0x0002628b) shortcut_wheel_idle_act4_pane_g5

0x92b6,	// (0x000274cb) shortcut_wheel_idle_act4_pane_g6

0x92be,	// (0x000274d3) shortcut_wheel_idle_act4_pane_g7

0x92c6,	// (0x000274db) shortcut_wheel_idle_act4_pane_g8

0x92ce,	// (0x000274e3) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd24,	// (0x0002df39) shortcut_wheel_idle_act4_pane_g

0x82a2,	// (0x000264b7) middle_sk_idle_act4_pane_g1_ParamLimits

0x82a2,	// (0x000264b7) middle_sk_idle_act4_pane_g1

0xcbef,	// (0x0002ae04) middle_sk_idle_act4_pane_g2_ParamLimits

0xcbef,	// (0x0002ae04) middle_sk_idle_act4_pane_g2

0x0001,

0xfd47,	// (0x0002df5c) middle_sk_idle_act4_pane_g_ParamLimits

0xfd47,	// (0x0002df5c) middle_sk_idle_act4_pane_g

0xcbfb,	// (0x0002ae10) middle_sk_idle_act4_pane_t1_ParamLimits

0xcbfb,	// (0x0002ae10) middle_sk_idle_act4_pane_t1

0xcc18,	// (0x0002ae2d) grid_ai_shortcut_pane_ParamLimits

0xcc18,	// (0x0002ae2d) grid_ai_shortcut_pane

0xcc31,	// (0x0002ae46) list_highlight_pane_cp16_ParamLimits

0xcc31,	// (0x0002ae46) list_highlight_pane_cp16

0xcc3e,	// (0x0002ae53) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xcc3e,	// (0x0002ae53) list_single_idle_plugin_shortcut_pane_g1

0xcc4a,	// (0x0002ae5f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xcc4a,	// (0x0002ae5f) list_single_idle_plugin_shortcut_pane_g2

0xcc62,	// (0x0002ae77) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xcc62,	// (0x0002ae77) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4c,	// (0x0002df61) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4c,	// (0x0002df61) list_single_idle_plugin_shortcut_pane_g

0xcc75,	// (0x0002ae8a) cell_ai_shortcut_pane_ParamLimits

0xcc75,	// (0x0002ae8a) cell_ai_shortcut_pane

0xcc96,	// (0x0002aeab) cell_ai_shortcut_pane_g1_ParamLimits

0xcc96,	// (0x0002aeab) cell_ai_shortcut_pane_g1

0x9293,	// (0x000274a8) ai_gene_pane_1_cp2

0x92d6,	// (0x000274eb) ai_gene_pane_2_cp2

0x92de,	// (0x000274f3) list_highlight_pane_cp15

0x92e7,	// (0x000274fc) list_single_idle_plugin_calendar_pane_g1

0x92de,	// (0x000274f3) list_highlight_pane_cp17

0x92ef,	// (0x00027504) list_single_idle_plugin_calendar_pane_g1_copy1

0x92f7,	// (0x0002750c) list_single_idle_plugin_player_pane_g1

0x76c5,	// (0x000258da) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd53,	// (0x0002df68) list_single_idle_plugin_player_pane_g

0x92ff,	// (0x00027514) list_single_idle_plugin_player_pane_t1

0x930d,	// (0x00027522) list_single_idle_plugin_player_pane_t2

0x931b,	// (0x00027530) list_single_idle_plugin_player_pane_t3

0x9329,	// (0x0002753e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd58,	// (0x0002df6d) list_single_idle_plugin_player_pane_t

0x9337,	// (0x0002754c) wait_bar_pane_cp15

0x933f,	// (0x00027554) grid_ai_notification_pane

0x76c5,	// (0x000258da) list_single_idle_plugin_notification_pane_g1

0xccb8,	// (0x0002aecd) cell_ai_notification_pane_ParamLimits

0xccb8,	// (0x0002aecd) cell_ai_notification_pane

0x9348,	// (0x0002755d) cell_ai_notification_pane_g1

0x9350,	// (0x00027565) cell_ai_notification_pane_t1

0xccc5,	// (0x0002aeda) tb_ext_find_button_pane

0xcccd,	// (0x0002aee2) tb_ext_find_pane_g1

0xccd5,	// (0x0002aeea) tb_ext_find_pane_t1

0x5a3a,	// (0x00023c4f) tb_ext_find_button_pane_g1

0x935e,	// (0x00027573) tb_ext_find_button_pane_g2

0x0001,

0xfd61,	// (0x0002df76) tb_ext_find_button_pane_g

0xcb2b,	// (0x0002ad40) main_idle_act4_pane_t1_ParamLimits

0xcb3d,	// (0x0002ad52) main_idle_act4_pane_t2_ParamLimits

0xfd1f,	// (0x0002df34) main_idle_act4_pane_t_ParamLimits

0xcb65,	// (0x0002ad7a) popup_clock_digital_analogue_window_cp2_ParamLimits

0xcb73,	// (0x0002ad88) sat_plugin_idle_act4_pane_ParamLimits

0xcb73,	// (0x0002ad88) sat_plugin_idle_act4_pane

0xcce3,	// (0x0002aef8) sat_plugin_idle_act4_pane_t1_ParamLimits

0xcce3,	// (0x0002aef8) sat_plugin_idle_act4_pane_t1

0xccf6,	// (0x0002af0b) sat_plugin_idle_act4_pane_t2_ParamLimits

0xccf6,	// (0x0002af0b) sat_plugin_idle_act4_pane_t2

0xcd09,	// (0x0002af1e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xcd09,	// (0x0002af1e) sat_plugin_idle_act4_pane_t3

0xcd1c,	// (0x0002af31) sat_plugin_idle_act4_pane_t4_ParamLimits

0xcd1c,	// (0x0002af31) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd66,	// (0x0002df7b) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd66,	// (0x0002df7b) sat_plugin_idle_act4_pane_t

0xa013,	// (0x00028228) popup_battery_window_ParamLimits

0xa013,	// (0x00028228) popup_battery_window

0x507a,	// (0x0002328f) bg_popup_sub_pane_cp25_ParamLimits

0x507a,	// (0x0002328f) bg_popup_sub_pane_cp25

0x9367,	// (0x0002757c) popup_battery_window_g1_ParamLimits

0x9367,	// (0x0002757c) popup_battery_window_g1

0x9373,	// (0x00027588) popup_battery_window_t1_ParamLimits

0x9373,	// (0x00027588) popup_battery_window_t1

0x9385,	// (0x0002759a) popup_battery_window_t2_ParamLimits

0x9385,	// (0x0002759a) popup_battery_window_t2

0x0001,

0xfd6f,	// (0x0002df84) popup_battery_window_t_ParamLimits

0xfd6f,	// (0x0002df84) popup_battery_window_t

0xaa3f,	// (0x00028c54) midp_canvas_pane_ParamLimits

0xaa9b,	// (0x00028cb0) midp_keypad_pane_ParamLimits

0xaa9b,	// (0x00028cb0) midp_keypad_pane

0x56ae,	// (0x000238c3) main_midp_pane_ParamLimits

0x7cf2,	// (0x00025f07) signal_pane_g2_cp_ParamLimits

0xcd2f,	// (0x0002af44) aid_size_cell_midp_keypad_ParamLimits

0xcd2f,	// (0x0002af44) aid_size_cell_midp_keypad

0xcd49,	// (0x0002af5e) midp_keyp_game_grid_pane_ParamLimits

0xcd49,	// (0x0002af5e) midp_keyp_game_grid_pane

0xcd63,	// (0x0002af78) midp_keyp_rocker_pane_ParamLimits

0xcd63,	// (0x0002af78) midp_keyp_rocker_pane

0xcd90,	// (0x0002afa5) midp_keyp_sk_left_pane_ParamLimits

0xcd90,	// (0x0002afa5) midp_keyp_sk_left_pane

0xcde8,	// (0x0002affd) midp_keyp_sk_right_pane_ParamLimits

0xcde8,	// (0x0002affd) midp_keyp_sk_right_pane

0x4e57,	// (0x0002306c) bg_button_pane_cp03

0xce3a,	// (0x0002b04f) midp_keyp_sk_left_pane_g1

0x4e57,	// (0x0002306c) bg_button_pane_cp04

0xce3a,	// (0x0002b04f) midp_keyp_sk_right_pane_g1

0x8076,	// (0x0002628b) midp_keyp_rocker_pane_g1

0xce43,	// (0x0002b058) keyp_game_cell_pane_ParamLimits

0xce43,	// (0x0002b058) keyp_game_cell_pane

0x4e57,	// (0x0002306c) bg_button_pane_cp02

0xce54,	// (0x0002b069) keyp_game_cell_pane_g1

0xa049,	// (0x0002825e) popup_fep_vkb2_window_ParamLimits

0xa049,	// (0x0002825e) popup_fep_vkb2_window

0xce6b,	// (0x0002b080) aid_size_cell_vkb2_ParamLimits

0xce6b,	// (0x0002b080) aid_size_cell_vkb2

0xceb7,	// (0x0002b0cc) popup_fep_vkb2_window_g1_ParamLimits

0xceb7,	// (0x0002b0cc) popup_fep_vkb2_window_g1

0xceff,	// (0x0002b114) vkb2_area_bottom_pane_ParamLimits

0xceff,	// (0x0002b114) vkb2_area_bottom_pane

0xcf37,	// (0x0002b14c) vkb2_area_keypad_pane_ParamLimits

0xcf37,	// (0x0002b14c) vkb2_area_keypad_pane

0xcf6f,	// (0x0002b184) vkb2_area_top_pane_ParamLimits

0xcf6f,	// (0x0002b184) vkb2_area_top_pane

0xcfe4,	// (0x0002b1f9) vkb2_top_entry_pane_ParamLimits

0xcfe4,	// (0x0002b1f9) vkb2_top_entry_pane

0xd00e,	// (0x0002b223) vkb2_top_grid_left_pane_ParamLimits

0xd00e,	// (0x0002b223) vkb2_top_grid_left_pane

0xd02d,	// (0x0002b242) vkb2_top_grid_right_pane_ParamLimits

0xd02d,	// (0x0002b242) vkb2_top_grid_right_pane

0xd04c,	// (0x0002b261) vkb2_cell_keypad_pane_ParamLimits

0xd04c,	// (0x0002b261) vkb2_cell_keypad_pane

0xd0fd,	// (0x0002b312) vkb2_area_bottom_grid_pane_ParamLimits

0xd0fd,	// (0x0002b312) vkb2_area_bottom_grid_pane

0xd121,	// (0x0002b336) vkb2_area_bottom_pane_g1_ParamLimits

0xd121,	// (0x0002b336) vkb2_area_bottom_pane_g1

0xd145,	// (0x0002b35a) vkb2_area_bottom_pane_g2_ParamLimits

0xd145,	// (0x0002b35a) vkb2_area_bottom_pane_g2

0xd173,	// (0x0002b388) vkb2_area_bottom_pane_g3_ParamLimits

0xd173,	// (0x0002b388) vkb2_area_bottom_pane_g3

0x0002,

0xfd74,	// (0x0002df89) vkb2_area_bottom_pane_g_ParamLimits

0xfd74,	// (0x0002df89) vkb2_area_bottom_pane_g

0xd1c4,	// (0x0002b3d9) vkb2_top_cell_left_pane_ParamLimits

0xd1c4,	// (0x0002b3d9) vkb2_top_cell_left_pane

0xd1e4,	// (0x0002b3f9) vkb2_top_entry_pane_g1_ParamLimits

0xd1e4,	// (0x0002b3f9) vkb2_top_entry_pane_g1

0xd1f2,	// (0x0002b407) vkb2_top_entry_pane_t1_ParamLimits

0xd1f2,	// (0x0002b407) vkb2_top_entry_pane_t1

0x93aa,	// (0x000275bf) vkb2_top_entry_pane_t2_ParamLimits

0x93aa,	// (0x000275bf) vkb2_top_entry_pane_t2

0x93dc,	// (0x000275f1) vkb2_top_entry_pane_t3_ParamLimits

0x93dc,	// (0x000275f1) vkb2_top_entry_pane_t3

0x0002,

0xfd7b,	// (0x0002df90) vkb2_top_entry_pane_t_ParamLimits

0xfd7b,	// (0x0002df90) vkb2_top_entry_pane_t

0xd251,	// (0x0002b466) vkb2_top_grid_right_pane_g1_ParamLimits

0xd251,	// (0x0002b466) vkb2_top_grid_right_pane_g1

0xd267,	// (0x0002b47c) vkb2_top_grid_right_pane_g2_ParamLimits

0xd267,	// (0x0002b47c) vkb2_top_grid_right_pane_g2

0xd27f,	// (0x0002b494) vkb2_top_grid_right_pane_g3_ParamLimits

0xd27f,	// (0x0002b494) vkb2_top_grid_right_pane_g3

0xd297,	// (0x0002b4ac) vkb2_top_grid_right_pane_g4_ParamLimits

0xd297,	// (0x0002b4ac) vkb2_top_grid_right_pane_g4

0x0003,

0xfd82,	// (0x0002df97) vkb2_top_grid_right_pane_g_ParamLimits

0xfd82,	// (0x0002df97) vkb2_top_grid_right_pane_g

0xd2ad,	// (0x0002b4c2) vkb2_top_cell_left_pane_g1

0xd2c4,	// (0x0002b4d9) vkb2_cell_keypad_pane_g1_ParamLimits

0xd2c4,	// (0x0002b4d9) vkb2_cell_keypad_pane_g1

0x93f2,	// (0x00027607) vkb2_cell_keypad_pane_t1_ParamLimits

0x93f2,	// (0x00027607) vkb2_cell_keypad_pane_t1

0xd2d2,	// (0x0002b4e7) vkb2_cell_bottom_grid_pane_ParamLimits

0xd2d2,	// (0x0002b4e7) vkb2_cell_bottom_grid_pane

0xd30b,	// (0x0002b520) vkb2_cell_bottom_grid_pane_g1

0xcb93,	// (0x0002ada8) aid_call2_pane_cp02

0xcb9b,	// (0x0002adb0) aid_call_pane_cp02

0xcba3,	// (0x0002adb8) clock_digital_number_pane_cp10

0xcbab,	// (0x0002adc0) clock_digital_number_pane_cp11

0xcbb3,	// (0x0002adc8) clock_digital_number_pane_cp12

0xcbbb,	// (0x0002add0) clock_digital_number_pane_cp13

0xcbc3,	// (0x0002add8) clock_digital_separator_pane_cp10

0x5a3a,	// (0x00023c4f) popup_clock_digital_analogue_window_cp2_g1

0x5a3a,	// (0x00023c4f) popup_clock_digital_analogue_window_cp2_g2

0xcbcb,	// (0x0002ade0) popup_clock_digital_analogue_window_cp2_g3

0x5a3a,	// (0x00023c4f) popup_clock_digital_analogue_window_cp2_g4

0xcbcb,	// (0x0002ade0) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd37,	// (0x0002df4c) popup_clock_digital_analogue_window_cp2_g

0xcbd3,	// (0x0002ade8) popup_clock_digital_analogue_window_cp2_t1

0xcbe1,	// (0x0002adf6) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd42,	// (0x0002df57) popup_clock_digital_analogue_window_cp2_t

0x8076,	// (0x0002628b) clock_digital_number_pane_cp10_g1

0x8076,	// (0x0002628b) clock_digital_number_pane_cp10_g2

0x0001,

0xfb25,	// (0x0002dd3a) clock_digital_number_pane_cp10_g

0x8076,	// (0x0002628b) clock_digital_separator_pane_cp10_g1

0x8076,	// (0x0002628b) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb25,	// (0x0002dd3a) clock_digital_separator_pane_cp10_g

0x91dd,	// (0x000273f2) uniindi_top_pane_g3

0x91ee,	// (0x00027403) uniindi_top_pane_g4

0xd0b7,	// (0x0002b2cc) vkb2_row_keypad_pane_ParamLimits

0xd0b7,	// (0x0002b2cc) vkb2_row_keypad_pane

0xd327,	// (0x0002b53c) vkb2_cell_t_keypad_pane_ParamLimits

0xd327,	// (0x0002b53c) vkb2_cell_t_keypad_pane

0xd334,	// (0x0002b549) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xd334,	// (0x0002b549) vkb2_cell_t_keypad_pane_cp08

0xd344,	// (0x0002b559) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xd344,	// (0x0002b559) vkb2_cell_t_keypad_pane_cp09

0xd355,	// (0x0002b56a) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xd355,	// (0x0002b56a) vkb2_cell_t_keypad_pane_cp01

0xd365,	// (0x0002b57a) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xd365,	// (0x0002b57a) vkb2_cell_t_keypad_pane_cp02

0xd375,	// (0x0002b58a) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xd375,	// (0x0002b58a) vkb2_cell_t_keypad_pane_cp03

0xd385,	// (0x0002b59a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xd385,	// (0x0002b59a) vkb2_cell_t_keypad_pane_cp04

0xd395,	// (0x0002b5aa) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xd395,	// (0x0002b5aa) vkb2_cell_t_keypad_pane_cp05

0xd3a5,	// (0x0002b5ba) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xd3a5,	// (0x0002b5ba) vkb2_cell_t_keypad_pane_cp06

0xd3b5,	// (0x0002b5ca) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xd3b5,	// (0x0002b5ca) vkb2_cell_t_keypad_pane_cp07

0xd3c5,	// (0x0002b5da) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xd3c5,	// (0x0002b5da) vkb2_cell_t_keypad_pane_cp10

0xc2ab,	// (0x0002a4c0) vkb2_cell_t_keypad_pane_g1

0xe81c,	// (0x0002ca31) vkb2_cell_t_keypad_pane_t1

0x9f50,	// (0x00028165) popup_grid_graphic2_window

0x00c8,	// (0x0001e2dd) aid_size_cell_graphic2_ParamLimits

0x00c8,	// (0x0001e2dd) aid_size_cell_graphic2

0x0100,	// (0x0001e315) bg_popup_window_pane_cp21_ParamLimits

0x0100,	// (0x0001e315) bg_popup_window_pane_cp21

0x010e,	// (0x0001e323) graphic2_pages_pane_ParamLimits

0x010e,	// (0x0001e323) graphic2_pages_pane

0x0148,	// (0x0001e35d) grid_graphic2_control_pane_ParamLimits

0x0148,	// (0x0001e35d) grid_graphic2_control_pane

0x017e,	// (0x0001e393) grid_graphic2_pane_ParamLimits

0x017e,	// (0x0001e393) grid_graphic2_pane

0x01de,	// (0x0001e3f3) cell_graphic2_pane

0x9f50,	// (0x00028165) main_comp_mode_pane

0x8e56,	// (0x0002706b) list_ai3_gene_pane_ParamLimits

0xc88d,	// (0x0002aaa2) bg_popup_window_pane_cp19_ParamLimits

0x8fc9,	// (0x000271de) bg_touch_area_indi_pane_ParamLimits

0x8fc9,	// (0x000271de) bg_touch_area_indi_pane

0x8fdf,	// (0x000271f4) bg_touch_area_indi_pane_cp01_ParamLimits

0x8fdf,	// (0x000271f4) bg_touch_area_indi_pane_cp01

0x8ff5,	// (0x0002720a) bg_touch_area_indi_pane_cp02_ParamLimits

0x8ff5,	// (0x0002720a) bg_touch_area_indi_pane_cp02

0x900b,	// (0x00027220) bg_touch_area_indi_pane_cp03_ParamLimits

0x900b,	// (0x00027220) bg_touch_area_indi_pane_cp03

0x9021,	// (0x00027236) popup_slider_window_g1_ParamLimits

0x903d,	// (0x00027252) popup_slider_window_g2_ParamLimits

0x9059,	// (0x0002726e) popup_slider_window_g3_ParamLimits

0xfccc,	// (0x0002dee1) popup_slider_window_g_ParamLimits

0x9075,	// (0x0002728a) popup_slider_window_t1_ParamLimits

0x90b9,	// (0x000272ce) small_volume_slider_vertical_pane_ParamLimits

0x01de,	// (0x0001e3f3) cell_graphic2_pane_ParamLimits

0x021a,	// (0x0001e42f) bg_button_pane_cp10_ParamLimits

0x021a,	// (0x0001e42f) bg_button_pane_cp10

0x022b,	// (0x0001e440) bg_button_pane_cp11_ParamLimits

0x022b,	// (0x0001e440) bg_button_pane_cp11

0x023c,	// (0x0001e451) graphic2_pages_pane_g1_ParamLimits

0x023c,	// (0x0001e451) graphic2_pages_pane_g1

0x024f,	// (0x0001e464) graphic2_pages_pane_g2_ParamLimits

0x024f,	// (0x0001e464) graphic2_pages_pane_g2

0x0001,

0xfd90,	// (0x0002dfa5) graphic2_pages_pane_g_ParamLimits

0xfd90,	// (0x0002dfa5) graphic2_pages_pane_g

0x0265,	// (0x0001e47a) graphic2_pages_pane_t1_ParamLimits

0x0265,	// (0x0001e47a) graphic2_pages_pane_t1

0x027b,	// (0x0001e490) cell_graphic2_control_pane_ParamLimits

0x027b,	// (0x0001e490) cell_graphic2_control_pane

0x029a,	// (0x0001e4af) cell_graphic2_pane_g1_ParamLimits

0x029a,	// (0x0001e4af) cell_graphic2_pane_g1

0x02a7,	// (0x0001e4bc) cell_graphic2_pane_g2_ParamLimits

0x02a7,	// (0x0001e4bc) cell_graphic2_pane_g2

0x02b4,	// (0x0001e4c9) cell_graphic2_pane_g3_ParamLimits

0x02b4,	// (0x0001e4c9) cell_graphic2_pane_g3

0x02c1,	// (0x0001e4d6) cell_graphic2_pane_g4_ParamLimits

0x02c1,	// (0x0001e4d6) cell_graphic2_pane_g4

0x02ce,	// (0x0001e4e3) cell_graphic2_pane_g5_ParamLimits

0x02ce,	// (0x0001e4e3) cell_graphic2_pane_g5

0x0004,

0xfd95,	// (0x0002dfaa) cell_graphic2_pane_g_ParamLimits

0xfd95,	// (0x0002dfaa) cell_graphic2_pane_g

0x02e7,	// (0x0001e4fc) cell_graphic2_pane_t1_ParamLimits

0x02e7,	// (0x0001e4fc) cell_graphic2_pane_t1

0x6338,	// (0x0002454d) grid_highlight_pane_cp11_ParamLimits

0x6338,	// (0x0002454d) grid_highlight_pane_cp11

0x507a,	// (0x0002328f) bg_button_pane_cp05

0x030f,	// (0x0001e524) cell_graphic2_control_pane_g1

0x8076,	// (0x0002628b) bg_touch_area_indi_pane_g1

0xe82e,	// (0x0002ca43) aid_cmod_rocker_key_size

0xe838,	// (0x0002ca4d) aid_cmode_itu_key_size

0xe842,	// (0x0002ca57) main_cmode_video_pane

0xe84a,	// (0x0002ca5f) main_comp_mode_itu_pane

0xe854,	// (0x0002ca69) main_comp_mode_rocker_pane

0xe85c,	// (0x0002ca71) cell_cmode_rocker_pane_ParamLimits

0xe85c,	// (0x0002ca71) cell_cmode_rocker_pane

0xe86e,	// (0x0002ca83) cell_cmode_itu_pane_ParamLimits

0xe86e,	// (0x0002ca83) cell_cmode_itu_pane

0x5515,	// (0x0002372a) bg_button_pane_cp06_ParamLimits

0x5515,	// (0x0002372a) bg_button_pane_cp06

0x82a2,	// (0x000264b7) cell_cmode_rocker_pane_g1_ParamLimits

0x82a2,	// (0x000264b7) cell_cmode_rocker_pane_g1

0x90de,	// (0x000272f3) cell_cmode_rocker_pane_g2_ParamLimits

0x90de,	// (0x000272f3) cell_cmode_rocker_pane_g2

0x0001,

0xfda5,	// (0x0002dfba) cell_cmode_rocker_pane_g_ParamLimits

0xfda5,	// (0x0002dfba) cell_cmode_rocker_pane_g

0x4e57,	// (0x0002306c) bg_button_pane_cp07

0xe883,	// (0x0002ca98) cell_cmode_itu_pane_g1

0xe88c,	// (0x0002caa1) cell_cmode_itu_pane_t1

0xe89a,	// (0x0002caaf) cell_cmode_itu_pane_t2

0x0001,

0xfdaa,	// (0x0002dfbf) cell_cmode_itu_pane_t

0x925f,	// (0x00027474) aid_touch_ctrl_left

0x9267,	// (0x0002747c) aid_touch_ctrl_right

0x4e57,	// (0x0002306c) compa_mode_pane

0x0337,	// (0x0001e54c) aid_cmod_rocker_key_size_cp

0x0341,	// (0x0001e556) aid_cmode_itu_key_size_cp

0xe8a8,	// (0x0002cabd) compa_mode_pane_g1

0xe8b0,	// (0x0002cac5) compa_mode_pane_g2

0xe8b8,	// (0x0002cacd) compa_mode_pane_g3

0x0002,

0xfdaf,	// (0x0002dfc4) compa_mode_pane_g

0x034b,	// (0x0001e560) main_comp_mode_itu_pane_cp

0x0353,	// (0x0001e568) main_comp_mode_rocker_pane_cp

0x035b,	// (0x0001e570) cell_cmode_itu_pane_cp_ParamLimits

0x035b,	// (0x0001e570) cell_cmode_itu_pane_cp

0x0370,	// (0x0001e585) cell_cmode_rocker_pane_cp_ParamLimits

0x0370,	// (0x0001e585) cell_cmode_rocker_pane_cp

0x5515,	// (0x0002372a) bg_button_pane_cp06_cp_ParamLimits

0x5515,	// (0x0002372a) bg_button_pane_cp06_cp

0x82a2,	// (0x000264b7) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x82a2,	// (0x000264b7) cell_cmode_rocker_pane_g1_cp

0x8076,	// (0x0002628b) cell_cmode_rocker_pane_g2_cp

0x4e57,	// (0x0002306c) bg_button_pane_cp07_cp

0x0382,	// (0x0001e597) cell_cmode_itu_pane_g1_cp

0x038b,	// (0x0001e5a0) cell_cmode_itu_pane_t1_cp

0x0399,	// (0x0001e5ae) cell_cmode_itu_pane_t2_cp

0xbb0b,	// (0x00029d20) settings_code_pane_cp2

0x4f47,	// (0x0002315c) bg_popup_window_pane_cp3_ParamLimits

0x5278,	// (0x0002348d) heading_pane_cp3_ParamLimits

0x5287,	// (0x0002349c) listscroll_popup_graphic_pane_ParamLimits

0xbf82,	// (0x0002a197) fep_hwr_aid_pane_ParamLimits

0xc95a,	// (0x0002ab6f) aid_touch_sctrl_top_ParamLimits

0xc975,	// (0x0002ab8a) sctrl_sk_top_pane_g1_ParamLimits

0xc2ab,	// (0x0002a4c0) sctrl_sk_top_pane_g2_ParamLimits

0xfce5,	// (0x0002defa) sctrl_sk_top_pane_g_ParamLimits

0xc982,	// (0x0002ab97) sctrl_sk_top_pane_t1_ParamLimits

0xc95a,	// (0x0002ab6f) aid_touch_sctrl_bottom_ParamLimits

0xc982,	// (0x0002ab97) sctrl_sk_bottom_pane_t1_ParamLimits

0x91a9,	// (0x000273be) aid_area_touch_clock

0xcfab,	// (0x0002b1c0) aid_vkb2_area_top_pane_cell_ParamLimits

0xcfab,	// (0x0002b1c0) aid_vkb2_area_top_pane_cell

0xd0d9,	// (0x0002b2ee) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd0d9,	// (0x0002b2ee) aid_vkb2_area_bottom_pane_cell

0x93a2,	// (0x000275b7) popup_char_count_window

0xe8c0,	// (0x0002cad5) popup_char_count_window_g1

0xe8c9,	// (0x0002cade) popup_char_count_window_g2

0xe8d2,	// (0x0002cae7) popup_char_count_window_g3

0x0002,

0xfdb6,	// (0x0002dfcb) popup_char_count_window_g

0xe8db,	// (0x0002caf0) popup_char_count_window_t1

0xce95,	// (0x0002b0aa) popup_fep_char_preview_window_ParamLimits

0xce95,	// (0x0002b0aa) popup_fep_char_preview_window

0xcfc9,	// (0x0002b1de) vkb2_top_candi_pane_ParamLimits

0xcfc9,	// (0x0002b1de) vkb2_top_candi_pane

0x03a7,	// (0x0001e5bc) cell_vkb2_top_candi_pane_ParamLimits

0x03a7,	// (0x0001e5bc) cell_vkb2_top_candi_pane

0xd3da,	// (0x0002b5ef) bg_popup_fep_char_preview_window_ParamLimits

0xd3da,	// (0x0002b5ef) bg_popup_fep_char_preview_window

0xd3e8,	// (0x0002b5fd) popup_fep_char_preview_window_t1_ParamLimits

0xd3e8,	// (0x0002b5fd) popup_fep_char_preview_window_t1

0xe8e9,	// (0x0002cafe) bg_popup_fep_char_preview_window_g1

0xe8f1,	// (0x0002cb06) bg_popup_fep_char_preview_window_g2

0xe8f9,	// (0x0002cb0e) bg_popup_fep_char_preview_window_g3

0xe901,	// (0x0002cb16) bg_popup_fep_char_preview_window_g4

0xe909,	// (0x0002cb1e) bg_popup_fep_char_preview_window_g5

0xe911,	// (0x0002cb26) bg_popup_fep_char_preview_window_g6

0xe919,	// (0x0002cb2e) bg_popup_fep_char_preview_window_g7

0xe921,	// (0x0002cb36) bg_popup_fep_char_preview_window_g8

0xe929,	// (0x0002cb3e) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdbd,	// (0x0002dfd2) bg_popup_fep_char_preview_window_g

0xc2ab,	// (0x0002a4c0) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc2ab,	// (0x0002a4c0) cell_vkb2_top_candi_pane_g1

0xc2b9,	// (0x0002a4ce) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc2b9,	// (0x0002a4ce) cell_vkb2_top_candi_pane_g2

0xe5b7,	// (0x0002c7cc) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe5b7,	// (0x0002c7cc) cell_vkb2_top_candi_pane_g3

0xd42a,	// (0x0002b63f) cell_vkb2_top_candi_pane_g4_ParamLimits

0xd42a,	// (0x0002b63f) cell_vkb2_top_candi_pane_g4

0x84f2,	// (0x00026707) cell_vkb2_top_candi_pane_g5_ParamLimits

0x84f2,	// (0x00026707) cell_vkb2_top_candi_pane_g5

0xd44b,	// (0x0002b660) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd44b,	// (0x0002b660) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd2,	// (0x0002dfe7) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd2,	// (0x0002dfe7) cell_vkb2_top_candi_pane_g

0xd459,	// (0x0002b66e) cell_vkb2_top_candi_pane_t1

0xb957,	// (0x00029b6c) aid_size_touch_slider_mark_ParamLimits

0xb957,	// (0x00029b6c) aid_size_touch_slider_mark

0x013c,	// (0x0001e351) grid_graphic2_catg_pane_ParamLimits

0x013c,	// (0x0001e351) grid_graphic2_catg_pane

0x01ba,	// (0x0001e3cf) popup_grid_graphic2_window_t1_ParamLimits

0x01ba,	// (0x0001e3cf) popup_grid_graphic2_window_t1

0x01cc,	// (0x0001e3e1) popup_grid_graphic2_window_t2_ParamLimits

0x01cc,	// (0x0001e3e1) popup_grid_graphic2_window_t2

0x0001,

0xfd8b,	// (0x0002dfa0) popup_grid_graphic2_window_t_ParamLimits

0xfd8b,	// (0x0002dfa0) popup_grid_graphic2_window_t

0x507a,	// (0x0002328f) bg_button_pane_cp05_ParamLimits

0x030f,	// (0x0001e524) cell_graphic2_control_pane_g1_ParamLimits

0x0457,	// (0x0001e66c) cell_graphic2_catg_pane_ParamLimits

0x0457,	// (0x0001e66c) cell_graphic2_catg_pane

0x4e57,	// (0x0002306c) bg_button_pane_cp12

0x0469,	// (0x0001e67e) cell_graphic2_catg_pane_g1

0x9175,	// (0x0002738a) cell_tb_ext_pane_t1_ParamLimits

0xd224,	// (0x0002b439) vkb2_top_cell_right_narrow_pane_ParamLimits

0xd224,	// (0x0002b439) vkb2_top_cell_right_narrow_pane

0xd23c,	// (0x0002b451) vkb2_top_cell_right_wide_pane_ParamLimits

0xd23c,	// (0x0002b451) vkb2_top_cell_right_wide_pane

0xbf74,	// (0x0002a189) bg_vkb2_func_pane_ParamLimits

0xbf74,	// (0x0002a189) bg_vkb2_func_pane

0xd2ad,	// (0x0002b4c2) vkb2_top_cell_left_pane_g1_ParamLimits

0xbf74,	// (0x0002a189) bg_vkb2_fuc_pane_cp03_ParamLimits

0xbf74,	// (0x0002a189) bg_vkb2_fuc_pane_cp03

0xd30b,	// (0x0002b520) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x62bc,	// (0x000244d1) bg_vkb2_func_pane_g1

0x62b4,	// (0x000244c9) bg_vkb2_func_pane_g2

0x62c4,	// (0x000244d9) bg_vkb2_func_pane_g3

0x62cc,	// (0x000244e1) bg_vkb2_func_pane_g4

0x62d4,	// (0x000244e9) bg_vkb2_func_pane_g5

0x62dc,	// (0x000244f1) bg_vkb2_func_pane_g6

0x62ec,	// (0x00024501) bg_vkb2_func_pane_g7

0x62e4,	// (0x000244f9) bg_vkb2_func_pane_g8

0x62ac,	// (0x000244c1) bg_vkb2_func_pane_g9

0x0008,

0xfddf,	// (0x0002dff4) bg_vkb2_func_pane_g

0xbf74,	// (0x0002a189) bg_vkb2_fuc_pane_cp01_ParamLimits

0xbf74,	// (0x0002a189) bg_vkb2_fuc_pane_cp01

0xd2ad,	// (0x0002b4c2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xd2ad,	// (0x0002b4c2) vkb2_top_cell_right_wide_pane_g1

0xbf74,	// (0x0002a189) bg_vkb2_fuc_pane_cp02_ParamLimits

0xbf74,	// (0x0002a189) bg_vkb2_fuc_pane_cp02

0xd30b,	// (0x0002b520) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xd30b,	// (0x0002b520) vkb2_top_cell_right_narrow_pane_g1

0xc81f,	// (0x0002aa34) aid_touch_area_decrease_ParamLimits

0xc81f,	// (0x0002aa34) aid_touch_area_decrease

0xc837,	// (0x0002aa4c) aid_touch_area_increase_ParamLimits

0xc837,	// (0x0002aa4c) aid_touch_area_increase

0xc843,	// (0x0002aa58) aid_touch_area_mute_ParamLimits

0xc843,	// (0x0002aa58) aid_touch_area_mute

0xc85f,	// (0x0002aa74) aid_touch_area_slider_ParamLimits

0xc85f,	// (0x0002aa74) aid_touch_area_slider

0xc899,	// (0x0002aaae) popup_slider_window_g4_ParamLimits

0xc899,	// (0x0002aaae) popup_slider_window_g4

0xc8a5,	// (0x0002aaba) popup_slider_window_g5_ParamLimits

0xc8a5,	// (0x0002aaba) popup_slider_window_g5

0xc8c7,	// (0x0002aadc) popup_slider_window_g6_ParamLimits

0xc8c7,	// (0x0002aadc) popup_slider_window_g6

0x90a1,	// (0x000272b6) popup_slider_window_t2_ParamLimits

0x90a1,	// (0x000272b6) popup_slider_window_t2

0x0001,

0xfcd9,	// (0x0002deee) popup_slider_window_t_ParamLimits

0xfcd9,	// (0x0002deee) popup_slider_window_t

0xc8d9,	// (0x0002aaee) slider_pane_ParamLimits

0xc8d9,	// (0x0002aaee) slider_pane

0xe931,	// (0x0002cb46) slider_pane_g1_ParamLimits

0xe931,	// (0x0002cb46) slider_pane_g1

0xe945,	// (0x0002cb5a) slider_pane_g2_ParamLimits

0xe945,	// (0x0002cb5a) slider_pane_g2

0xe95b,	// (0x0002cb70) slider_pane_g3_ParamLimits

0xe95b,	// (0x0002cb70) slider_pane_g3

0x0003,

0xfdf2,	// (0x0002e007) slider_pane_g_ParamLimits

0xfdf2,	// (0x0002e007) slider_pane_g

0xb140,	// (0x00029355) popup_tb_float_extension_window_ParamLimits

0xb140,	// (0x00029355) popup_tb_float_extension_window

0xe987,	// (0x0002cb9c) aid_size_cell_tb_float_ext

0x4e57,	// (0x0002306c) bg_popup_sub_window_cp28

0xe992,	// (0x0002cba7) grid_tb_float_ext_pane

0xe99a,	// (0x0002cbaf) cell_tb_float_ext_pane_ParamLimits

0xe99a,	// (0x0002cbaf) cell_tb_float_ext_pane

0xe9b2,	// (0x0002cbc7) cell_tb_float_ext_pane_g1

0xe9bb,	// (0x0002cbd0) grid_highlight_pane_cp12

0xc0bd,	// (0x0002a2d2) cell_last_hwr_side_pane_ParamLimits

0xc0bd,	// (0x0002a2d2) cell_last_hwr_side_pane

0x8076,	// (0x0002628b) cell_last_hwr_side_pane_g1

0xe9c4,	// (0x0002cbd9) cell_last_hwr_side_pane_g2

0x0001,

0xfdfb,	// (0x0002e010) cell_last_hwr_side_pane_g

0xd1a1,	// (0x0002b3b6) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd1a1,	// (0x0002b3b6) vkb2_area_bottom_space_btn_pane

0xc2ab,	// (0x0002a4c0) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe81c,	// (0x0002ca31) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xd459,	// (0x0002b66e) cell_vkb2_top_candi_pane_t1_ParamLimits

0xd470,	// (0x0002b685) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xd470,	// (0x0002b685) vkb2_area_bottom_space_btn_pane_g1

0xd4a6,	// (0x0002b6bb) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xd4a6,	// (0x0002b6bb) vkb2_area_bottom_space_btn_pane_g2

0xd4dc,	// (0x0002b6f1) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xd4dc,	// (0x0002b6f1) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe00,	// (0x0002e015) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe00,	// (0x0002e015) vkb2_area_bottom_space_btn_pane_g

0xc031,	// (0x0002a246) cel_fep_hwr_func_pane_ParamLimits

0xc031,	// (0x0002a246) cel_fep_hwr_func_pane

0xc06d,	// (0x0002a282) cell_hwr_side_button_pane_ParamLimits

0xc06d,	// (0x0002a282) cell_hwr_side_button_pane

0x91a9,	// (0x000273be) aid_area_touch_clock_ParamLimits

0x507a,	// (0x0002328f) bg_uniindi_top_pane_ParamLimits

0x91bb,	// (0x000273d0) uniindi_top_pane_g1_ParamLimits

0x91d1,	// (0x000273e6) uniindi_top_pane_g2_ParamLimits

0x91dd,	// (0x000273f2) uniindi_top_pane_g3_ParamLimits

0x91ee,	// (0x00027403) uniindi_top_pane_g4_ParamLimits

0xfd11,	// (0x0002df26) uniindi_top_pane_g_ParamLimits

0x91fb,	// (0x00027410) uniindi_top_pane_t1_ParamLimits

0x507a,	// (0x0002328f) bg_vkb2_func_pane_cp01_ParamLimits

0x507a,	// (0x0002328f) bg_vkb2_func_pane_cp01

0xe9cd,	// (0x0002cbe2) cel_fep_hwr_func_pane_g1_ParamLimits

0xe9cd,	// (0x0002cbe2) cel_fep_hwr_func_pane_g1

0x507a,	// (0x0002328f) bg_vkb2_func_pane_cp02_ParamLimits

0x507a,	// (0x0002328f) bg_vkb2_func_pane_cp02

0xe9cd,	// (0x0002cbe2) cell_hwr_side_button_pane_g1_ParamLimits

0xe9cd,	// (0x0002cbe2) cell_hwr_side_button_pane_g1

0x61d0,	// (0x000243e5) status_pane_g4_ParamLimits

0x61d0,	// (0x000243e5) status_pane_g4

0x61e8,	// (0x000243fd) status_pane_t1

0x7e7c,	// (0x00026091) form2_midp_gauge_slider_cont_pane

0x7e84,	// (0x00026099) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbf50,	// (0x0002a165) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbf62,	// (0x0002a177) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad8,	// (0x0002dced) form2_midp_gauge_slider_pane_t_ParamLimits

0x7e96,	// (0x000260ab) form2_midp_slider_pane_ParamLimits

0xce5d,	// (0x0002b072) aid_size_cell_func_vkb2_ParamLimits

0xce5d,	// (0x0002b072) aid_size_cell_func_vkb2

0xe973,	// (0x0002cb88) slider_pane_g4_ParamLimits

0xe973,	// (0x0002cb88) slider_pane_g4

0xd522,	// (0x0002b737) form2_midp_gauge_slider_pane_t2_cp01

0xd530,	// (0x0002b745) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd530,	// (0x0002b745) form2_midp_gauge_slider_pane_t3_cp01

0xd54d,	// (0x0002b762) form2_midp_slider_pane_cp01

0x4e57,	// (0x0002306c) navi_smil_pane

0xe9fd,	// (0x0002cc12) navi_smil_pane_g1

0xea05,	// (0x0002cc1a) navi_smil_pane_t1

0xe9db,	// (0x0002cbf0) form2_midp_slider_pane_g1

0xe9e4,	// (0x0002cbf9) form2_midp_slider_pane_g2

0xe9ec,	// (0x0002cc01) form2_midp_slider_pane_g3

0xe9db,	// (0x0002cbf0) form2_midp_slider_pane_g4

0x0558,	// (0x0001e76d) form2_midp_slider_pane_g5

0x0004,

0xfe09,	// (0x0002e01e) form2_midp_slider_pane_g

0xd512,	// (0x0002b727) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xd512,	// (0x0002b727) vkb2_area_bottom_space_btn_pane_g4

0xb2d4,	// (0x000294e9) lc0_navi_pane_ParamLimits

0xb2d4,	// (0x000294e9) lc0_navi_pane

0xb34a,	// (0x0002955f) lc0_stat_indi_pane_ParamLimits

0xb34a,	// (0x0002955f) lc0_stat_indi_pane

0xb361,	// (0x00029576) ls0_title_pane_ParamLimits

0xb361,	// (0x00029576) ls0_title_pane

0x5515,	// (0x0002372a) bg_popup_sub_pane_cp14_ParamLimits

0x9190,	// (0x000273a5) list_uniindi_pane_ParamLimits

0x919c,	// (0x000273b1) uniindi_top_pane_ParamLimits

0x9237,	// (0x0002744c) list_single_uniindi_pane_g1_ParamLimits

0x924a,	// (0x0002745f) list_single_uniindi_pane_t1_ParamLimits

0xd556,	// (0x0002b76b) lc0_stat_clock_pane_ParamLimits

0xd556,	// (0x0002b76b) lc0_stat_clock_pane

0x057b,	// (0x0001e790) lc0_stat_indi_pane_g1_ParamLimits

0x057b,	// (0x0001e790) lc0_stat_indi_pane_g1

0x056e,	// (0x0001e783) lc0_stat_indi_pane_g2_ParamLimits

0x056e,	// (0x0001e783) lc0_stat_indi_pane_g2

0x0001,

0xfe14,	// (0x0002e029) lc0_stat_indi_pane_g_ParamLimits

0xfe14,	// (0x0002e029) lc0_stat_indi_pane_g

0xd563,	// (0x0002b778) lc0_uni_indicator_pane_ParamLimits

0xd563,	// (0x0002b778) lc0_uni_indicator_pane

0xea13,	// (0x0002cc28) ls0_title_pane_g1_ParamLimits

0xea13,	// (0x0002cc28) ls0_title_pane_g1

0x0595,	// (0x0001e7aa) ls0_title_pane_t1_ParamLimits

0x0595,	// (0x0001e7aa) ls0_title_pane_t1

0xd570,	// (0x0002b785) lc0_uni_indicator_pane_g1_ParamLimits

0xd570,	// (0x0002b785) lc0_uni_indicator_pane_g1

0xea27,	// (0x0002cc3c) lc0_stat_clock_pane_t1

0x9f50,	// (0x00028165) main_ai5_pane

0xea35,	// (0x0002cc4a) ai5_sk_pane_ParamLimits

0xea35,	// (0x0002cc4a) ai5_sk_pane

0x05dd,	// (0x0001e7f2) cell_ai5_widget_pane_ParamLimits

0x05dd,	// (0x0001e7f2) cell_ai5_widget_pane

0xea42,	// (0x0002cc57) aid_size_cell_widget_grid

0xea4f,	// (0x0002cc64) bg_ai5_widget_pane_ParamLimits

0xea4f,	// (0x0002cc64) bg_ai5_widget_pane

0x0670,	// (0x0001e885) cell_ai5_widget_pane_g2

0x0684,	// (0x0001e899) cell_ai5_widget_pane_g3

0x069e,	// (0x0001e8b3) cell_ai5_widget_pane_g4

0x06ae,	// (0x0001e8c3) cell_ai5_widget_pane_g5

0x06be,	// (0x0001e8d3) cell_ai5_widget_pane_g6

0x06ca,	// (0x0001e8df) cell_ai5_widget_pane_g7

0x0736,	// (0x0001e94b) cell_ai5_widget_pane_t1_ParamLimits

0x0736,	// (0x0001e94b) cell_ai5_widget_pane_t1

0x0753,	// (0x0001e968) cell_ai5_widget_pane_t2_ParamLimits

0x0753,	// (0x0001e968) cell_ai5_widget_pane_t2

0x076b,	// (0x0001e980) cell_ai5_widget_pane_t3_ParamLimits

0x076b,	// (0x0001e980) cell_ai5_widget_pane_t3

0x0783,	// (0x0001e998) cell_ai5_widget_pane_t4_ParamLimits

0x0783,	// (0x0001e998) cell_ai5_widget_pane_t4

0x07a9,	// (0x0001e9be) cell_ai5_widget_pane_t5_ParamLimits

0x07a9,	// (0x0001e9be) cell_ai5_widget_pane_t5

0xea89,	// (0x0002cc9e) cell_ai5_widget_pane_t6_ParamLimits

0xea89,	// (0x0002cc9e) cell_ai5_widget_pane_t6

0xea9b,	// (0x0002ccb0) cell_ai5_widget_pane_t7_ParamLimits

0xea9b,	// (0x0002ccb0) cell_ai5_widget_pane_t7

0x07c8,	// (0x0001e9dd) cell_ai5_widget_pane_t8_ParamLimits

0x07c8,	// (0x0001e9dd) cell_ai5_widget_pane_t8

0x000b,

0xfe34,	// (0x0002e049) cell_ai5_widget_pane_t_ParamLimits

0xfe34,	// (0x0002e049) cell_ai5_widget_pane_t

0x084b,	// (0x0001ea60) grid_ai5_widget_pane

0x5515,	// (0x0002372a) highlight_cell_ai5_widget_pane_ParamLimits

0x5515,	// (0x0002372a) highlight_cell_ai5_widget_pane

0x0857,	// (0x0001ea6c) ai5_sk_left_pane

0x0861,	// (0x0001ea76) ai5_sk_middle_pane

0x086b,	// (0x0001ea80) ai5_sk_right_pane

0xeaba,	// (0x0002cccf) bg_ai5_widget_pane_g1_ParamLimits

0xeaba,	// (0x0002cccf) bg_ai5_widget_pane_g1

0xeac6,	// (0x0002ccdb) bg_ai5_widget_pane_g2_ParamLimits

0xeac6,	// (0x0002ccdb) bg_ai5_widget_pane_g2

0xead2,	// (0x0002cce7) bg_ai5_widget_pane_g3_ParamLimits

0xead2,	// (0x0002cce7) bg_ai5_widget_pane_g3

0xeade,	// (0x0002ccf3) bg_ai5_widget_pane_g4_ParamLimits

0xeade,	// (0x0002ccf3) bg_ai5_widget_pane_g4

0xeaea,	// (0x0002ccff) bg_ai5_widget_pane_g5_ParamLimits

0xeaea,	// (0x0002ccff) bg_ai5_widget_pane_g5

0xeaf6,	// (0x0002cd0b) bg_ai5_widget_pane_g6_ParamLimits

0xeaf6,	// (0x0002cd0b) bg_ai5_widget_pane_g6

0xeb02,	// (0x0002cd17) bg_ai5_widget_pane_g7_ParamLimits

0xeb02,	// (0x0002cd17) bg_ai5_widget_pane_g7

0xeb0e,	// (0x0002cd23) bg_ai5_widget_pane_g8_ParamLimits

0xeb0e,	// (0x0002cd23) bg_ai5_widget_pane_g8

0xeb1a,	// (0x0002cd2f) bg_ai5_widget_pane_g9_ParamLimits

0xeb1a,	// (0x0002cd2f) bg_ai5_widget_pane_g9

0x0008,

0xfe4d,	// (0x0002e062) bg_ai5_widget_pane_g_ParamLimits

0xfe4d,	// (0x0002e062) bg_ai5_widget_pane_g

0xeb4a,	// (0x0002cd5f) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb4a,	// (0x0002cd5f) cell_shortcut_ai5_widget_pane

0xeb5b,	// (0x0002cd70) bg_cell_shortcut_ai5_widget_pane

0x5234,	// (0x00023449) cell_grid_ai5_widget_pane_g1

0x5ed3,	// (0x000240e8) highlight_cell_shortcut_ai5_widget_pane

0x62bc,	// (0x000244d1) ai5_sk_left_pane_g1

0xeb63,	// (0x0002cd78) ai5_sk_left_pane_g2

0xeb6b,	// (0x0002cd80) ai5_sk_left_pane_g3

0xeb73,	// (0x0002cd88) ai5_sk_left_pane_g4

0x0003,

0xfe60,	// (0x0002e075) ai5_sk_left_pane_g

0xeb7b,	// (0x0002cd90) ai5_sk_left_pane_t1

0x62b4,	// (0x000244c9) ai5_sk_right_pane_g1

0xeb89,	// (0x0002cd9e) ai5_sk_right_pane_g2

0xeb91,	// (0x0002cda6) ai5_sk_right_pane_g3

0xeb99,	// (0x0002cdae) ai5_sk_right_pane_g4

0x0003,

0xfe69,	// (0x0002e07e) ai5_sk_right_pane_g

0xeba1,	// (0x0002cdb6) ai5_sk_right_pane_t1

0x62b4,	// (0x000244c9) ai5_sk_middle_pane_g1

0x62bc,	// (0x000244d1) ai5_sk_middle_pane_g2

0x62d4,	// (0x000244e9) ai5_sk_middle_pane_g3

0xeb91,	// (0x0002cda6) ai5_sk_middle_pane_g4

0xeb6b,	// (0x0002cd80) ai5_sk_middle_pane_g5

0xebaf,	// (0x0002cdc4) ai5_sk_middle_pane_g6

0x0875,	// (0x0001ea8a) ai5_sk_middle_pane_g7

0x0006,

0xfe72,	// (0x0002e087) ai5_sk_middle_pane_g

0xb21b,	// (0x00029430) aid_touch_area_size_lc0_ParamLimits

0xb21b,	// (0x00029430) aid_touch_area_size_lc0

0xc2da,	// (0x0002a4ef) cell_hwr_candidate_pane_t1_ParamLimits

0x6105,	// (0x0002431a) aid_touch_navi_pane

0xb433,	// (0x00029648) status_dt_navi_pane_ParamLimits

0xb433,	// (0x00029648) status_dt_navi_pane

0xb440,	// (0x00029655) status_dt_sta_pane_ParamLimits

0xb440,	// (0x00029655) status_dt_sta_pane

0x087d,	// (0x0001ea92) dt_sta_controll_pane

0x088a,	// (0x0001ea9f) dt_sta_indi_pane

0x089b,	// (0x0001eab0) dt_sta_title_pane

0x507a,	// (0x0002328f) bg_dt_sta_indi_pane_ParamLimits

0x507a,	// (0x0002328f) bg_dt_sta_indi_pane

0x08ae,	// (0x0001eac3) dt_sta_battery_pane

0x08b6,	// (0x0001eacb) dt_sta_indi_pane_g1

0x08bf,	// (0x0001ead4) dt_sta_indi_pane_g2

0x08c8,	// (0x0001eadd) dt_sta_indi_pane_g3

0x0002,

0xfe81,	// (0x0002e096) dt_sta_indi_pane_g

0x08d1,	// (0x0001eae6) dt_sta_signal_pane

0x5515,	// (0x0002372a) bg_dt_sta_title_pane_ParamLimits

0x5515,	// (0x0002372a) bg_dt_sta_title_pane

0x08da,	// (0x0001eaef) dt_sta_title_pane_g1

0x08e2,	// (0x0001eaf7) dt_sta_title_pane_t1_ParamLimits

0x08e2,	// (0x0001eaf7) dt_sta_title_pane_t1

0x4e57,	// (0x0002306c) bg_dt_sta_control_pane

0x08f7,	// (0x0001eb0c) dt_sta_controll_pane_g1

0x0900,	// (0x0001eb15) bg_dt_sta_title_pane_g1

0x0909,	// (0x0001eb1e) bg_dt_sta_title_pane_g2

0x0912,	// (0x0001eb27) bg_dt_sta_title_pane_g3

0x0002,

0xfe88,	// (0x0002e09d) bg_dt_sta_title_pane_g

0x8076,	// (0x0002628b) bg_dt_sta_indi_pane_g1

0x091b,	// (0x0001eb30) dt_sta_signal_pane_g1

0x0923,	// (0x0001eb38) dt_sta_signal_pane_g2

0x0001,

0xfe8f,	// (0x0002e0a4) dt_sta_signal_pane_g

0xebb7,	// (0x0002cdcc) dt_sta_battery_pane_g1

0xebc0,	// (0x0002cdd5) dt_sta_battery_pane_t1

0x8076,	// (0x0002628b) bg_dt_sta_control_pane_g1

0x5a9c,	// (0x00023cb1) fep_china_uni_eep_pane

0x5aa4,	// (0x00023cb9) fep_china_uni_entry_pane_ParamLimits

0x5ab4,	// (0x00023cc9) popup_fep_china_uni_window_g1_ParamLimits

0x5ac4,	// (0x00023cd9) popup_fep_china_uni_window_g2_ParamLimits

0x5ac4,	// (0x00023cd9) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x0002d90d) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x0002d90d) popup_fep_china_uni_window_g

0xebcf,	// (0x0002cde4) fep_china_uni_eep_pane_g1

0xebd7,	// (0x0002cdec) fep_china_uni_eep_pane_t1

0xe9f4,	// (0x0002cc09) aid_touch_area_size_smil_player

0x61a3,	// (0x000243b8) lc0_clock_pane

0x61dc,	// (0x000243f1) status_pane_g5_ParamLimits

0x61dc,	// (0x000243f1) status_pane_g5

0xaeb1,	// (0x000290c6) popup_keymap_window

0x61bc,	// (0x000243d1) status_icon_pane

0x0684,	// (0x0001e899) cell_ai5_widget_pane_g3_ParamLimits

0x069e,	// (0x0001e8b3) cell_ai5_widget_pane_g4_ParamLimits

0x06ae,	// (0x0001e8c3) cell_ai5_widget_pane_g5_ParamLimits

0x06d6,	// (0x0001e8eb) cell_ai5_widget_pane_g8_ParamLimits

0x06d6,	// (0x0001e8eb) cell_ai5_widget_pane_g8

0x06ea,	// (0x0001e8ff) cell_ai5_widget_pane_g9_ParamLimits

0x06ea,	// (0x0001e8ff) cell_ai5_widget_pane_g9

0x06fe,	// (0x0001e913) cell_ai5_widget_pane_g10_ParamLimits

0x06fe,	// (0x0001e913) cell_ai5_widget_pane_g10

0xebe6,	// (0x0002cdfb) status_icon_pane_g1

0x4e57,	// (0x0002306c) bg_popup_sub_pane_cp13

0xebee,	// (0x0002ce03) popup_keymap_window_t1

0xac22,	// (0x00028e37) control_pane_g6_ParamLimits

0xac22,	// (0x00028e37) control_pane_g6

0xac2f,	// (0x00028e44) control_pane_g7_ParamLimits

0xac2f,	// (0x00028e44) control_pane_g7

0xac3c,	// (0x00028e51) control_pane_g8_ParamLimits

0xac3c,	// (0x00028e51) control_pane_g8

0x087d,	// (0x0001ea92) dt_sta_controll_pane_ParamLimits

0x088a,	// (0x0001ea9f) dt_sta_indi_pane_ParamLimits

0x089b,	// (0x0001eab0) dt_sta_title_pane_ParamLimits

0x5466,	// (0x0002367b) aid_size_touch_scroll_bar_cale

0xa027,	// (0x0002823c) popup_discreet_window_ParamLimits

0xa027,	// (0x0002823c) popup_discreet_window

0xa08b,	// (0x000282a0) popup_sk_window

0x68ca,	// (0x00024adf) bg_popup_sub_pane_cp28_ParamLimits

0x68ca,	// (0x00024adf) bg_popup_sub_pane_cp28

0xebfc,	// (0x0002ce11) popup_discreet_window_g1_ParamLimits

0xebfc,	// (0x0002ce11) popup_discreet_window_g1

0xec1c,	// (0x0002ce31) popup_discreet_window_t1_ParamLimits

0xec1c,	// (0x0002ce31) popup_discreet_window_t1

0xec3a,	// (0x0002ce4f) popup_discreet_window_t2_ParamLimits

0xec3a,	// (0x0002ce4f) popup_discreet_window_t2

0x0002,

0xfe94,	// (0x0002e0a9) popup_discreet_window_t_ParamLimits

0xfe94,	// (0x0002e0a9) popup_discreet_window_t

0xd582,	// (0x0002b797) popup_sk_window_g1

0xd58b,	// (0x0002b7a0) popup_sk_window_g2

0x0001,

0xfe9b,	// (0x0002e0b0) popup_sk_window_g

0xd594,	// (0x0002b7a9) popup_sk_window_t1

0xd5a2,	// (0x0002b7b7) popup_sk_window_t1_copy1

0x0670,	// (0x0001e885) cell_ai5_widget_pane_g2_ParamLimits

0x07da,	// (0x0001e9ef) cell_ai5_widget_pane_t9_ParamLimits

0x07da,	// (0x0001e9ef) cell_ai5_widget_pane_t9

0x4e57,	// (0x0002306c) main_fep_fshwr2_pane

0xd5b0,	// (0x0002b7c5) aid_fshwr2_btn_pane

0xd5c0,	// (0x0002b7d5) aid_fshwr2_syb_pane

0xd5d4,	// (0x0002b7e9) aid_fshwr2_txt_pane

0xd5e4,	// (0x0002b7f9) fshwr2_func_candi_pane

0xd5fc,	// (0x0002b811) fshwr2_hwr_syb_pane

0xd60e,	// (0x0002b823) fshwr2_icf_pane

0x9f50,	// (0x00028165) fshwr2_icf_bg_pane

0xd636,	// (0x0002b84b) fshwr2_icf_pane_t1_ParamLimits

0xd636,	// (0x0002b84b) fshwr2_icf_pane_t1

0x5a3a,	// (0x00023c4f) fshwr2_func_candi_pane_g1

0x09f7,	// (0x0001ec0c) fshwr2_func_candi_row_pane_ParamLimits

0x09f7,	// (0x0001ec0c) fshwr2_func_candi_row_pane

0xd64e,	// (0x0002b863) cell_fshwr2_syb_pane_ParamLimits

0xd64e,	// (0x0002b863) cell_fshwr2_syb_pane

0xd66d,	// (0x0002b882) fshwr2_hwr_syb_pane_g1_ParamLimits

0xd66d,	// (0x0002b882) fshwr2_hwr_syb_pane_g1

0x9f50,	// (0x00028165) bg_popup_call_pane_cp01

0xd67b,	// (0x0002b890) fshwr2_func_candi_cell_pane_ParamLimits

0xd67b,	// (0x0002b890) fshwr2_func_candi_cell_pane

0x6eb2,	// (0x000250c7) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x6eb2,	// (0x000250c7) fshwr2_func_candi_cell_bg_pane

0xd6ba,	// (0x0002b8cf) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd6ba,	// (0x0002b8cf) fshwr2_func_candi_cell_pane_g1

0xd6e5,	// (0x0002b8fa) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd6e5,	// (0x0002b8fa) fshwr2_func_candi_cell_pane_t1

0x9f50,	// (0x00028165) bg_button_pane_cp08

0x56ae,	// (0x000238c3) cell_fshwr2_syb_bg_pane

0xd6f8,	// (0x0002b90d) cell_fshwr2_syb_bg_pane_g1

0xd70c,	// (0x0002b921) cell_fshwr2_syb_bg_pane_t1

0x5515,	// (0x0002372a) main_tmo_pane

0xb8c9,	// (0x00029ade) uni_indicator_pane_g1_ParamLimits

0xb8dd,	// (0x00029af2) uni_indicator_pane_g2_ParamLimits

0xb8f2,	// (0x00029b07) uni_indicator_pane_g3_ParamLimits

0x7256,	// (0x0002546b) uni_indicator_pane_g4_ParamLimits

0x7256,	// (0x0002546b) uni_indicator_pane_g4

0x726a,	// (0x0002547f) uni_indicator_pane_g5_ParamLimits

0x726a,	// (0x0002547f) uni_indicator_pane_g5

0x726a,	// (0x0002547f) uni_indicator_pane_g6_ParamLimits

0x726a,	// (0x0002547f) uni_indicator_pane_g6

0xf8f7,	// (0x0002db0c) uni_indicator_pane_g_ParamLimits

0xc803,	// (0x0002aa18) popup_tmo_note_window_ParamLimits

0xc803,	// (0x0002aa18) popup_tmo_note_window

0xc9d2,	// (0x0002abe7) fshwr2_bg_pane

0xd6d6,	// (0x0002b8eb) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd6d6,	// (0x0002b8eb) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea0,	// (0x0002e0b5) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea0,	// (0x0002e0b5) fshwr2_func_candi_cell_pane_g

0xc293,	// (0x0002a4a8) bg_popup_window_pane_cp01

0xd722,	// (0x0002b937) bg_popup_window_pane_g1_cp01

0xec8c,	// (0x0002cea1) bg_popup_window_pane_cp22_ParamLimits

0xec8c,	// (0x0002cea1) bg_popup_window_pane_cp22

0xec9a,	// (0x0002ceaf) listscroll_tmo_link_pane_ParamLimits

0xec9a,	// (0x0002ceaf) listscroll_tmo_link_pane

0xecda,	// (0x0002ceef) popup_tmo_note_window_g1_ParamLimits

0xecda,	// (0x0002ceef) popup_tmo_note_window_g1

0xece7,	// (0x0002cefc) tmo_note_info_pane_ParamLimits

0xece7,	// (0x0002cefc) tmo_note_info_pane

0x0ae9,	// (0x0001ecfe) list_tmo_note_info_pane_g1_ParamLimits

0x0ae9,	// (0x0001ecfe) list_tmo_note_info_pane_g1

0xed01,	// (0x0002cf16) list_tmo_note_info_pane_g2_ParamLimits

0xed01,	// (0x0002cf16) list_tmo_note_info_pane_g2

0x0001,

0xfea5,	// (0x0002e0ba) list_tmo_note_info_pane_g_ParamLimits

0xfea5,	// (0x0002e0ba) list_tmo_note_info_pane_g

0xed1d,	// (0x0002cf32) list_tmo_note_info_text_pane_ParamLimits

0xed1d,	// (0x0002cf32) list_tmo_note_info_text_pane

0xed5f,	// (0x0002cf74) list_tmo_link_pane

0xed6c,	// (0x0002cf81) scroll_pane_cp20

0xed79,	// (0x0002cf8e) list_single_tmo_link_pane_ParamLimits

0xed79,	// (0x0002cf8e) list_single_tmo_link_pane

0xed89,	// (0x0002cf9e) list_single_tmo_link_pane_t1

0xed97,	// (0x0002cfac) list_tmo_note_info_text_pane_t1_ParamLimits

0xed97,	// (0x0002cfac) list_tmo_note_info_text_pane_t1

0x55d4,	// (0x000237e9) aid_size_touch_scroll_bar_cp01_ParamLimits

0x55d4,	// (0x000237e9) aid_size_touch_scroll_bar_cp01

0xdf5d,	// (0x0002c172) aid_size_touch_slider_marker

0xa077,	// (0x0002828c) popup_settings_window_ParamLimits

0xa077,	// (0x0002828c) popup_settings_window

0xe100,	// (0x0002c315) popup_candi_list_indi_window

0x6105,	// (0x0002431a) aid_touch_navi_pane_ParamLimits

0xc92e,	// (0x0002ab43) rs_clock_indi_pane

0xc937,	// (0x0002ab4c) sctrl_sk_bottom_pane_ParamLimits

0xc948,	// (0x0002ab5d) sctrl_sk_top_pane_ParamLimits

0xceaf,	// (0x0002b0c4) popup_fep_tooltip_window

0xea42,	// (0x0002cc57) aid_size_cell_widget_grid_ParamLimits

0x065c,	// (0x0001e871) cell_ai5_widget_pane_g1_ParamLimits

0x065c,	// (0x0001e871) cell_ai5_widget_pane_g1

0x06be,	// (0x0001e8d3) cell_ai5_widget_pane_g6_ParamLimits

0x06ca,	// (0x0001e8df) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe19,	// (0x0002e02e) cell_ai5_widget_pane_g_ParamLimits

0xfe19,	// (0x0002e02e) cell_ai5_widget_pane_g

0x0809,	// (0x0001ea1e) cell_ai5_widget_pane_t10_ParamLimits

0x0809,	// (0x0001ea1e) cell_ai5_widget_pane_t10

0x084b,	// (0x0001ea60) grid_ai5_widget_pane_ParamLimits

0xeb26,	// (0x0002cd3b) cell_contacts_ai5_widget_pane_ParamLimits

0xeb26,	// (0x0002cd3b) cell_contacts_ai5_widget_pane

0xec4f,	// (0x0002ce64) popup_discreet_window_t3_ParamLimits

0xec4f,	// (0x0002ce64) popup_discreet_window_t3

0xd624,	// (0x0002b839) popup_fshwr2_char_preview_window_ParamLimits

0xd624,	// (0x0002b839) popup_fshwr2_char_preview_window

0x0b00,	// (0x0001ed15) tmo_note_info_pane_t1

0x0b15,	// (0x0001ed2a) tmo_note_info_pane_t2

0x0b2a,	// (0x0001ed3f) tmo_note_info_pane_t3

0xed3b,	// (0x0002cf50) tmo_note_info_pane_t4

0xed4d,	// (0x0002cf62) tmo_note_info_pane_t5

0x0004,

0xfeaa,	// (0x0002e0bf) tmo_note_info_pane_t

0xed5f,	// (0x0002cf74) list_tmo_link_pane_ParamLimits

0xed6c,	// (0x0002cf81) scroll_pane_cp20_ParamLimits

0x9f50,	// (0x00028165) bg_popup_fep_char_preview_window_cp01

0xedb0,	// (0x0002cfc5) popup_fshwr2_char_preview_window_t1

0xedbe,	// (0x0002cfd3) popup_candi_list_indi_window_g1

0xedc7,	// (0x0002cfdc) bg_cell_contacts_ai5_widget_pane

0xedd3,	// (0x0002cfe8) cell_contacts_ai5_widget_pane_g1

0xede8,	// (0x0002cffd) cell_contacts_ai5_widget_pane_g2

0xedf4,	// (0x0002d009) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb5,	// (0x0002e0ca) cell_contacts_ai5_widget_pane_g

0xee00,	// (0x0002d015) cell_contacts_ai5_widget_pane_t1

0x5515,	// (0x0002372a) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee75,	// (0x0002d08a) settings_container_pane

0x5ed3,	// (0x000240e8) listscroll_set_pane_copy1

0x79ac,	// (0x00025bc1) scroll_pane_cp121_copy1

0xee81,	// (0x0002d096) set_content_pane_copy1

0xee89,	// (0x0002d09e) aid_height_set_list_copy1_ParamLimits

0xee89,	// (0x0002d09e) aid_height_set_list_copy1

0x740f,	// (0x00025624) aid_size_parent_copy1_ParamLimits

0x740f,	// (0x00025624) aid_size_parent_copy1

0xee95,	// (0x0002d0aa) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee95,	// (0x0002d0aa) button_value_adjust_pane_cp6_copy1

0x56ae,	// (0x000238c3) list_highlight_pane_cp2_copy1_ParamLimits

0x56ae,	// (0x000238c3) list_highlight_pane_cp2_copy1

0xeea9,	// (0x0002d0be) list_set_pane_copy1_ParamLimits

0xeea9,	// (0x0002d0be) list_set_pane_copy1

0xee12,	// (0x0002d027) main_pane_set_t1_copy1_ParamLimits

0xee12,	// (0x0002d027) main_pane_set_t1_copy1

0xee4c,	// (0x0002d061) main_pane_set_t2_copy1_ParamLimits

0xee4c,	// (0x0002d061) main_pane_set_t2_copy1

0xef37,	// (0x0002d14c) main_pane_set_t3_copy1

0xef45,	// (0x0002d15a) main_pane_set_t4_copy1

0xee69,	// (0x0002d07e) set_content_pane_g1_copy1_ParamLimits

0xee69,	// (0x0002d07e) set_content_pane_g1_copy1

0xef53,	// (0x0002d168) setting_code_pane_copy1

0xef5b,	// (0x0002d170) setting_slider_graphic_pane_copy1

0xef5b,	// (0x0002d170) setting_slider_pane_copy1

0xef5b,	// (0x0002d170) setting_text_pane_copy1

0xef5b,	// (0x0002d170) setting_volume_pane_copy1

0xef63,	// (0x0002d178) settings_code_pane_cp2_copy1

0xef6b,	// (0x0002d180) settings_code_pane_cp_copy1_ParamLimits

0xef6b,	// (0x0002d180) settings_code_pane_cp_copy1

0xd72b,	// (0x0002b940) volume_set_pane_copy1

0xef7f,	// (0x0002d194) volume_set_pane_g10_copy1

0xef87,	// (0x0002d19c) volume_set_pane_g1_copy1

0xef8f,	// (0x0002d1a4) volume_set_pane_g2_copy1

0xef97,	// (0x0002d1ac) volume_set_pane_g3_copy1

0xef9f,	// (0x0002d1b4) volume_set_pane_g4_copy1

0xefa7,	// (0x0002d1bc) volume_set_pane_g5_copy1

0xefaf,	// (0x0002d1c4) volume_set_pane_g6_copy1

0xefb7,	// (0x0002d1cc) volume_set_pane_g7_copy1

0xefbf,	// (0x0002d1d4) volume_set_pane_g8_copy1

0xefc7,	// (0x0002d1dc) volume_set_pane_g9_copy1

0x4f47,	// (0x0002315c) bg_set_opt_pane_cp_copy1_ParamLimits

0x4f47,	// (0x0002315c) bg_set_opt_pane_cp_copy1

0xd733,	// (0x0002b948) setting_slider_pane_t1_copy1_ParamLimits

0xd733,	// (0x0002b948) setting_slider_pane_t1_copy1

0xd74a,	// (0x0002b95f) setting_slider_pane_t2_copy1_ParamLimits

0xd74a,	// (0x0002b95f) setting_slider_pane_t2_copy1

0xd763,	// (0x0002b978) setting_slider_pane_t3_copy1_ParamLimits

0xd763,	// (0x0002b978) setting_slider_pane_t3_copy1

0xa265,	// (0x0002847a) slider_set_pane_copy1_ParamLimits

0xa265,	// (0x0002847a) slider_set_pane_copy1

0x5570,	// (0x00023785) set_opt_bg_pane_g1_copy2

0x5578,	// (0x0002378d) set_opt_bg_pane_g2_copy2

0xefcf,	// (0x0002d1e4) set_opt_bg_pane_g3_copy2

0x5588,	// (0x0002379d) set_opt_bg_pane_g4_copy2

0x5590,	// (0x000237a5) set_opt_bg_pane_g5_copy2

0x5598,	// (0x000237ad) set_opt_bg_pane_g6_copy2

0xefd7,	// (0x0002d1ec) set_opt_bg_pane_g7_copy2

0xefdf,	// (0x0002d1f4) set_opt_bg_pane_g8_copy2

0xefe7,	// (0x0002d1fc) set_opt_bg_pane_g9_copy2

0xb957,	// (0x00029b6c) aid_size_touch_slider_mark_copy1_ParamLimits

0xb957,	// (0x00029b6c) aid_size_touch_slider_mark_copy1

0x7421,	// (0x00025636) slider_set_pane_g1_copy1

0x7443,	// (0x00025658) slider_set_pane_g2_copy1

0xb977,	// (0x00029b8c) slider_set_pane_g3_copy1_ParamLimits

0xb977,	// (0x00029b8c) slider_set_pane_g3_copy1

0xb98b,	// (0x00029ba0) slider_set_pane_g4_copy1_ParamLimits

0xb98b,	// (0x00029ba0) slider_set_pane_g4_copy1

0xb9a3,	// (0x00029bb8) slider_set_pane_g5_copy1_ParamLimits

0xb9a3,	// (0x00029bb8) slider_set_pane_g5_copy1

0xb977,	// (0x00029b8c) slider_set_pane_g6_copy1_ParamLimits

0xb977,	// (0x00029b8c) slider_set_pane_g6_copy1

0xd77a,	// (0x0002b98f) slider_set_pane_g7_copy1_ParamLimits

0xd77a,	// (0x0002b98f) slider_set_pane_g7_copy1

0x4ee3,	// (0x000230f8) bg_set_opt_pane_cp2_copy1

0x4f55,	// (0x0002316a) setting_slider_graphic_pane_g1_copy1

0xd790,	// (0x0002b9a5) setting_slider_graphic_pane_t1_copy1

0xd79f,	// (0x0002b9b4) setting_slider_graphic_pane_t2_copy1

0xd7ae,	// (0x0002b9c3) slider_set_pane_cp_copy1

0xeff7,	// (0x0002d20c) input_focus_pane_cp1_copy1

0xf000,	// (0x0002d215) list_set_text_pane_copy1

0xf008,	// (0x0002d21d) setting_text_pane_g1_copy1

0xf510,	// (0x0002d725) set_text_pane_t1_copy1

0xeff7,	// (0x0002d20c) input_focus_pane_cp2_copy1

0xf008,	// (0x0002d21d) setting_code_pane_g1_copy1

0xf011,	// (0x0002d226) setting_code_pane_t1_copy1

0xf01f,	// (0x0002d234) list_set_graphic_pane_copy1

0x4ee3,	// (0x000230f8) bg_set_opt_pane_cp4_copy1

0x5c2f,	// (0x00023e44) list_set_graphic_pane_g1_copy1_ParamLimits

0x5c2f,	// (0x00023e44) list_set_graphic_pane_g1_copy1

0xf034,	// (0x0002d249) list_set_graphic_pane_g2_copy1

0x5c47,	// (0x00023e5c) list_set_graphic_pane_t1_copy1_ParamLimits

0x5c47,	// (0x00023e5c) list_set_graphic_pane_t1_copy1

0x8076,	// (0x0002628b) rs_clock_indi_pane_g1

0xf03c,	// (0x0002d251) rs_clock_indi_pane_t1

0xf04a,	// (0x0002d25f) rs_indi_pane

0xf052,	// (0x0002d267) rs_indi_pane_g1

0xf05b,	// (0x0002d270) rs_indi_pane_g2

0xedbe,	// (0x0002cfd3) rs_indi_pane_g3

0x0002,

0xfebc,	// (0x0002e0d1) rs_indi_pane_g

0x5ed3,	// (0x000240e8) bg_popup_preview_window_pane_cp03

0xf064,	// (0x0002d279) popup_fep_tooltip_window_t1

0x89a1,	// (0x00026bb6) popup_note2_window_g2_ParamLimits

0x89a1,	// (0x00026bb6) popup_note2_window_g2

0x0001,

0xfc50,	// (0x0002de65) popup_note2_window_g_ParamLimits

0xfc50,	// (0x0002de65) popup_note2_window_g

0x8e1c,	// (0x00027031) bg_popup_sub_pane_cp11_ParamLimits

0x8e29,	// (0x0002703e) cell_ai3_links_pane_g1_ParamLimits

0x8e40,	// (0x00027055) cell_ai3_links_pane_t1

0xf510,	// (0x0002d725) set_text_pane_t1_copy1_ParamLimits

0x5df3,	// (0x00024008) cell_graphic_popup_pane_cp2_ParamLimits

0x5df3,	// (0x00024008) cell_graphic_popup_pane_cp2

0xf072,	// (0x0002d287) cell_graphic_popup_pane_g1_cp2

0x5315,	// (0x0002352a) cell_graphic_popup_pane_g2_cp2

0xf07a,	// (0x0002d28f) cell_graphic_popup_pane_g3_cp2

0xf082,	// (0x0002d297) cell_graphic_popup_pane_t2_cp2

0x5326,	// (0x0002353b) grid_highlight_pane_cp3_cp2

0x5873,	// (0x00023a88) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x5515,	// (0x0002372a) main_tmo_pane_ParamLimits

0xc7fb,	// (0x0002aa10) popup_tmo_big_image_note_window

0xea81,	// (0x0002cc96) cell_ai5_widget_list_pane

0x0653,	// (0x0001e868) cell_ai5_widget_lrg_icon_pane

0x0b00,	// (0x0001ed15) tmo_note_info_pane_t1_ParamLimits

0x0b15,	// (0x0001ed2a) tmo_note_info_pane_t2_ParamLimits

0x0b2a,	// (0x0001ed3f) tmo_note_info_pane_t3_ParamLimits

0xed3b,	// (0x0002cf50) tmo_note_info_pane_t4_ParamLimits

0xed4d,	// (0x0002cf62) tmo_note_info_pane_t5_ParamLimits

0xfeaa,	// (0x0002e0bf) tmo_note_info_pane_t_ParamLimits

0xee75,	// (0x0002d08a) settings_container_pane_ParamLimits

0xefef,	// (0x0002d204) indicator_popup_pane_cp5

0xefef,	// (0x0002d204) indicator_popup_pane_cp6

0xf01f,	// (0x0002d234) list_set_graphic_pane_copy1_ParamLimits

0x4e57,	// (0x0002306c) bg_popup_window_pane_cp23

0xf090,	// (0x0002d2a5) popup_tmo_big_image_note_window_g1

0xf099,	// (0x0002d2ae) popup_tmo_big_image_note_window_t1

0xf0a7,	// (0x0002d2bc) popup_tmo_big_image_note_window_t2

0xf0b5,	// (0x0002d2ca) popup_tmo_big_image_note_window_t3

0x0002,

0xfec3,	// (0x0002e0d8) popup_tmo_big_image_note_window_t

0x8076,	// (0x0002628b) cell_ai5_widget_lrg_icon_pane_g1

0xf0c3,	// (0x0002d2d8) cell_ai5_widget_lrg_icon_pane_t1

0x0bca,	// (0x0001eddf) cell_ai5_widget_list_row_pane_ParamLimits

0x0bca,	// (0x0001eddf) cell_ai5_widget_list_row_pane

0x0be1,	// (0x0001edf6) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x0be1,	// (0x0001edf6) cell_ai5_widget_list_row_pane_g1

0x0bee,	// (0x0001ee03) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x0bee,	// (0x0001ee03) cell_ai5_widget_list_row_pane_t1

0x0c1c,	// (0x0001ee31) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x0c1c,	// (0x0001ee31) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeca,	// (0x0002e0df) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeca,	// (0x0002e0df) cell_ai5_widget_list_row_pane_t

0x9f50,	// (0x00028165) main_fep_vtchi_ss_pane

0xf0de,	// (0x0002d2f3) popup_fep_char_pre_window

0xf0e6,	// (0x0002d2fb) popup_fep_ituss_window

0x0c74,	// (0x0001ee89) popup_fep_vkbss_window

0xf121,	// (0x0002d336) grid_vkbss_keypad_pane_ParamLimits

0xf121,	// (0x0002d336) grid_vkbss_keypad_pane

0xf131,	// (0x0002d346) ituss_keypad_pane

0xd7be,	// (0x0002b9d3) aid_vkbss_key_offset_ParamLimits

0xd7be,	// (0x0002b9d3) aid_vkbss_key_offset

0xd7ca,	// (0x0002b9df) cell_vkbss_key_pane_ParamLimits

0xd7ca,	// (0x0002b9df) cell_vkbss_key_pane

0xf13d,	// (0x0002d352) bg_cell_vkbss_key_g1_ParamLimits

0xf13d,	// (0x0002d352) bg_cell_vkbss_key_g1

0xf149,	// (0x0002d35e) cell_vkbss_key_3p_pane_ParamLimits

0xf149,	// (0x0002d35e) cell_vkbss_key_3p_pane

0xf17f,	// (0x0002d394) cell_vkbss_key_g1_ParamLimits

0xf17f,	// (0x0002d394) cell_vkbss_key_g1

0xf1b5,	// (0x0002d3ca) cell_vkbss_key_t1_ParamLimits

0xf1b5,	// (0x0002d3ca) cell_vkbss_key_t1

0xd7fe,	// (0x0002ba13) cell_ituss_key_pane_ParamLimits

0xd7fe,	// (0x0002ba13) cell_ituss_key_pane

0xf225,	// (0x0002d43a) bg_cell_ituss_key_g1_ParamLimits

0xf225,	// (0x0002d43a) bg_cell_ituss_key_g1

0xf231,	// (0x0002d446) cell_ituss_key_pane_g1_ParamLimits

0xf231,	// (0x0002d446) cell_ituss_key_pane_g1

0xd80f,	// (0x0002ba24) cell_ituss_key_pane_g2_ParamLimits

0xd80f,	// (0x0002ba24) cell_ituss_key_pane_g2

0x0005,

0xfed1,	// (0x0002e0e6) cell_ituss_key_pane_g_ParamLimits

0xfed1,	// (0x0002e0e6) cell_ituss_key_pane_g

0xd893,	// (0x0002baa8) cell_ituss_key_t1_ParamLimits

0xd893,	// (0x0002baa8) cell_ituss_key_t1

0xd8c9,	// (0x0002bade) cell_ituss_key_t2_ParamLimits

0xd8c9,	// (0x0002bade) cell_ituss_key_t2

0xd8fb,	// (0x0002bb10) cell_ituss_key_t3_ParamLimits

0xd8fb,	// (0x0002bb10) cell_ituss_key_t3

0xd92c,	// (0x0002bb41) cell_ituss_key_t4_ParamLimits

0xd92c,	// (0x0002bb41) cell_ituss_key_t4

0x0004,

0xfede,	// (0x0002e0f3) cell_ituss_key_t_ParamLimits

0xfede,	// (0x0002e0f3) cell_ituss_key_t

0xf257,	// (0x0002d46c) cell_vkbss_key_3p_pane_g1

0xf25f,	// (0x0002d474) cell_vkbss_key_3p_pane_g2

0xf267,	// (0x0002d47c) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee9,	// (0x0002e0fe) cell_vkbss_key_3p_pane_g

0x5ed3,	// (0x000240e8) bg_popup_fep_char_preview_window_cp02

0xf26f,	// (0x0002d484) popup_fep_char_pre_window_t1

0x0640,	// (0x0001e855) main_ai5_sk_pane

0xedc7,	// (0x0002cfdc) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xedd3,	// (0x0002cfe8) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xede8,	// (0x0002cffd) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xedf4,	// (0x0002d009) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb5,	// (0x0002e0ca) cell_contacts_ai5_widget_pane_g_ParamLimits

0xee00,	// (0x0002d015) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x5515,	// (0x0002372a) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x0e40,	// (0x0001f055) main_ai5_sk_pane_g1

0x66ca,	// (0x000248df) popup_query_code_window_g1

0x0c5f,	// (0x0001ee74) popup_fep_vkb_icf_pane

0xf0f8,	// (0x0002d30d) popup_fep_vtchi_icf_pane

0xf27d,	// (0x0002d492) bg_icf_pane

0xf27d,	// (0x0002d492) list_vkb_icf_pane

0xf289,	// (0x0002d49e) bg_icf_pane_cp01

0xf29c,	// (0x0002d4b1) vtchi_icf_list_pane

0x0e89,	// (0x0001f09e) list_vkb_icf_pane_t1_ParamLimits

0x0e89,	// (0x0001f09e) list_vkb_icf_pane_t1

0xf2ac,	// (0x0002d4c1) vtchi_icf_list_pane_t1_ParamLimits

0xf2ac,	// (0x0002d4c1) vtchi_icf_list_pane_t1

0xf0e6,	// (0x0002d2fb) popup_fep_ituss_window_ParamLimits

0xf0f8,	// (0x0002d30d) popup_fep_vtchi_icf_pane_ParamLimits

0xf131,	// (0x0002d346) ituss_keypad_pane_ParamLimits

0xd7b6,	// (0x0002b9cb) ituss_sks_pane

0xf27d,	// (0x0002d492) bg_icf_pane_ParamLimits

0x0c44,	// (0x0001ee59) icf_edit_indi_pane_ParamLimits

0x0c44,	// (0x0001ee59) icf_edit_indi_pane

0xf27d,	// (0x0002d492) list_vkb_icf_pane_ParamLimits

0xf289,	// (0x0002d49e) bg_icf_pane_cp01_ParamLimits

0xf0d1,	// (0x0002d2e6) icf_edit_indi_pane_cp01_ParamLimits

0xf0d1,	// (0x0002d2e6) icf_edit_indi_pane_cp01

0xf2a4,	// (0x0002d4b9) vtchi_query_pane

0xe9cd,	// (0x0002cbe2) icf_edit_indi_pane_g1_ParamLimits

0xe9cd,	// (0x0002cbe2) icf_edit_indi_pane_g1

0x0eb3,	// (0x0001f0c8) icf_edit_indi_pane_g2_ParamLimits

0x0eb3,	// (0x0001f0c8) icf_edit_indi_pane_g2

0x0001,

0xff14,	// (0x0002e129) icf_edit_indi_pane_g_ParamLimits

0xff14,	// (0x0002e129) icf_edit_indi_pane_g

0x0ec5,	// (0x0001f0da) icf_edit_indi_pane_t1

0xf2c4,	// (0x0002d4d9) bg_input_focus_pane_cp042

0xf2cd,	// (0x0002d4e2) vtchi_button_pane

0xf2d6,	// (0x0002d4eb) vtchi_query_pane_t1

0xf2e4,	// (0x0002d4f9) vtchi_query_pane_t2

0xf2f2,	// (0x0002d507) vtchi_query_pane_t3

0x0002,

0xff03,	// (0x0002e118) vtchi_query_pane_t

0x9f50,	// (0x00028165) bg_button_pane_cp13

0xf300,	// (0x0002d515) vtchi_button_pane_g1

0xd96f,	// (0x0002bb84) ituss_sks_pane_g1

0xd978,	// (0x0002bb8d) ituss_sks_pane_g2

0x0001,

0xff0a,	// (0x0002e11f) ituss_sks_pane_g

0xf308,	// (0x0002d51d) ituss_sks_pane_t1

0xf316,	// (0x0002d52b) ituss_sks_pane_t2

0x0001,

0xff0f,	// (0x0002e124) ituss_sks_pane_t

0x7ca3,	// (0x00025eb8) indicator_nsta_pane_cp_g1

0x7cac,	// (0x00025ec1) indicator_nsta_pane_cp_g2

0x7cb4,	// (0x00025ec9) indicator_nsta_pane_cp_g3

0x7cbc,	// (0x00025ed1) indicator_nsta_pane_cp_g4

0x7cc4,	// (0x00025ed9) indicator_nsta_pane_cp_g5

0x7ccc,	// (0x00025ee1) indicator_nsta_pane_cp_g6

0x0005,

0xfa8e,	// (0x0002dca3) indicator_nsta_pane_cp_g

0x02fd,	// (0x0001e512) cell_graphic2_pane_t2_ParamLimits

0x02fd,	// (0x0001e512) cell_graphic2_pane_t2

0x0001,

0xfda0,	// (0x0002dfb5) cell_graphic2_pane_t_ParamLimits

0xfda0,	// (0x0002dfb5) cell_graphic2_pane_t

0x0329,	// (0x0001e53e) cell_graphic2_control_pane_t1

0xa82e,	// (0x00028a43) signal_pane_g3_ParamLimits

0xa82e,	// (0x00028a43) signal_pane_g3

0xa83f,	// (0x00028a54) signal_pane_g4_ParamLimits

0xa83f,	// (0x00028a54) signal_pane_g4

0x0c2e,	// (0x0001ee43) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x0c2e,	// (0x0001ee43) cell_ai5_widget_list_row_pane_t3

0xf245,	// (0x0002d45a) cell_ituss_key_pane_t1_ParamLimits

0xf245,	// (0x0002d45a) cell_ituss_key_pane_t1

0x6398,	// (0x000245ad) form_field_data_wide_pane_vc_t2_ParamLimits

0x6398,	// (0x000245ad) form_field_data_wide_pane_vc_t2

0x63aa,	// (0x000245bf) form_field_data_wide_pane_vc_t3_ParamLimits

0x63aa,	// (0x000245bf) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x0002d9f4) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x0002d9f4) form_field_data_wide_pane_vc_t

0x79f1,	// (0x00025c06) form_field_slider_wide_pane_vc_t3_ParamLimits

0x79f1,	// (0x00025c06) form_field_slider_wide_pane_vc_t3

0x7acd,	// (0x00025ce2) form_field_popup_wide_pane_vc_t2_ParamLimits

0x7acd,	// (0x00025ce2) form_field_popup_wide_pane_vc_t2

0x7ae2,	// (0x00025cf7) form_field_popup_wide_pane_vc_t3_ParamLimits

0x7ae2,	// (0x00025cf7) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7d,	// (0x0002dc92) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7d,	// (0x0002dc92) form_field_popup_wide_pane_vc_t

0xd5b0,	// (0x0002b7c5) aid_fshwr2_btn_pane_ParamLimits

0xd5c0,	// (0x0002b7d5) aid_fshwr2_syb_pane_ParamLimits

0xd5d4,	// (0x0002b7e9) aid_fshwr2_txt_pane_ParamLimits

0xc9d2,	// (0x0002abe7) fshwr2_bg_pane_ParamLimits

0xd5e4,	// (0x0002b7f9) fshwr2_func_candi_pane_ParamLimits

0xd5fc,	// (0x0002b811) fshwr2_hwr_syb_pane_ParamLimits

0xd60e,	// (0x0002b823) fshwr2_icf_pane_ParamLimits

0xe528,	// (0x0002c73d) list_double_graphic_pane_vc_g4_ParamLimits

0xe528,	// (0x0002c73d) list_double_graphic_pane_vc_g4

0xd82f,	// (0x0002ba44) cell_ituss_key_pane_g3_ParamLimits

0xd82f,	// (0x0002ba44) cell_ituss_key_pane_g3

0xd95d,	// (0x0002bb72) cell_ituss_key_t5_ParamLimits

0xd95d,	// (0x0002bb72) cell_ituss_key_t5

0x0c74,	// (0x0001ee89) popup_fep_vkbss_window_ParamLimits

0x064a,	// (0x0001e85f) aid_cell_ai5_quarter

0x0ec5,	// (0x0001f0da) icf_edit_indi_pane_t1_ParamLimits

0x5122,	// (0x00023337) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x5122,	// (0x00023337) aid_tch_indicator_popup_pane_cp2

0x5135,	// (0x0002334a) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x5135,	// (0x0002334a) aid_tch_query_popup_data_pane_cp2

0x6672,	// (0x00024887) aid_tch_query_popup_pane_ParamLimits

0x6672,	// (0x00024887) aid_tch_query_popup_pane

0x6672,	// (0x00024887) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x6672,	// (0x00024887) aid_tch_query_popup_data_pane_cp1

0x56ae,	// (0x000238c3) cell_fshwr2_syb_bg_pane_ParamLimits

0xd6f8,	// (0x0002b90d) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xd70c,	// (0x0002b921) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0x0c5f,	// (0x0001ee74) popup_fep_vkb_icf_pane_ParamLimits

0xd422,	// (0x0002b637) bg_popup_fep_char_preview_window_g10

0x0712,	// (0x0001e927) cell_ai5_widget_pane_g11_ParamLimits

0x0712,	// (0x0001e927) cell_ai5_widget_pane_g11

0x071e,	// (0x0001e933) cell_ai5_widget_pane_g12_ParamLimits

0x071e,	// (0x0001e933) cell_ai5_widget_pane_g12

0x072a,	// (0x0001e93f) cell_ai5_widget_pane_g13_ParamLimits

0x072a,	// (0x0001e93f) cell_ai5_widget_pane_g13

0x0827,	// (0x0001ea3c) cell_ai5_widget_pane_t11_ParamLimits

0x0827,	// (0x0001ea3c) cell_ai5_widget_pane_t11

0x0839,	// (0x0001ea4e) cell_ai5_widget_pane_t12_ParamLimits

0x0839,	// (0x0001ea4e) cell_ai5_widget_pane_t12

0xd83b,	// (0x0002ba50) cell_ituss_key_pane_g4_ParamLimits

0xd83b,	// (0x0002ba50) cell_ituss_key_pane_g4

0xd857,	// (0x0002ba6c) cell_ituss_key_pane_g5_ParamLimits

0xd857,	// (0x0002ba6c) cell_ituss_key_pane_g5

0xd873,	// (0x0002ba88) cell_ituss_key_pane_g6_ParamLimits

0xd873,	// (0x0002ba88) cell_ituss_key_pane_g6

0x62ac,	// (0x000244c1) bg_icf_pane_g1

0x0e49,	// (0x0001f05e) bg_icf_pane_g2

0x0e51,	// (0x0001f066) bg_icf_pane_g3

0x0e59,	// (0x0001f06e) bg_icf_pane_g4

0x0e61,	// (0x0001f076) bg_icf_pane_g5

0x0e69,	// (0x0001f07e) bg_icf_pane_g6

0x0e71,	// (0x0001f086) bg_icf_pane_g7

0x0e79,	// (0x0001f08e) bg_icf_pane_g8

0x0e81,	// (0x0001f096) bg_icf_pane_g9

0x0008,

0xfef0,	// (0x0002e105) bg_icf_pane_g

0xf10e,	// (0x0002d323) popup_hyb_candi_window_ParamLimits

0xf10e,	// (0x0002d323) popup_hyb_candi_window

0x6338,	// (0x0002454d) bg_popup_sub_pane_cp01_ParamLimits

0x6338,	// (0x0002454d) bg_popup_sub_pane_cp01

0xf324,	// (0x0002d539) entry_hyb_candi_pane_ParamLimits

0xf324,	// (0x0002d539) entry_hyb_candi_pane

0xf333,	// (0x0002d548) grid_hyb_candi_pane_ParamLimits

0xf333,	// (0x0002d548) grid_hyb_candi_pane

0xf348,	// (0x0002d55d) grid_hyb_phrase_pane_ParamLimits

0xf348,	// (0x0002d55d) grid_hyb_phrase_pane

0xf357,	// (0x0002d56c) cell_hyb_candi_pane_ParamLimits

0xf357,	// (0x0002d56c) cell_hyb_candi_pane

0xf36f,	// (0x0002d584) cell_hyb_candi_scroll_pane

0x5a3a,	// (0x00023c4f) cell_hyb_candi_pane_g1

0xf378,	// (0x0002d58d) cell_hyb_candi_pane_t1

0xf386,	// (0x0002d59b) cell_hyb_phrase_pane

0x5a3a,	// (0x00023c4f) cell_hyb_phrase_pane_g1

0xf38f,	// (0x0002d5a4) cell_hyb_phrase_pane_t1

0xf39d,	// (0x0002d5b2) entry_hyb_candi_pane_t1

0x5ed3,	// (0x000240e8) input_focus_pane_cp06

0xf3ab,	// (0x0002d5c0) cell_hyb_candi_scroll_pane_g1

0xf3b3,	// (0x0002d5c8) cell_hyb_candi_scroll_pane_g1_aid

0xf3bb,	// (0x0002d5d0) cell_hyb_candi_scroll_pane_g2

0xf3c3,	// (0x0002d5d8) cell_hyb_candi_scroll_pane_g2_aid

0xf3cb,	// (0x0002d5e0) cell_hyb_candi_scroll_pane_g3

0xf3d3,	// (0x0002d5e8) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Small
