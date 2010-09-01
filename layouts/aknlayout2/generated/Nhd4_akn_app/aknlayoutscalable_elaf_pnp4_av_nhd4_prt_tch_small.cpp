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

#include "aknlayoutscalable_elaf_pnp4_av_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0001fdbf };

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
0x65d7,	// (0x00026396) Screen

0x65e3,	// (0x000263a2) application_window_ParamLimits

0x65e3,	// (0x000263a2) application_window

0x1865,	// (0x00021624) screen_g1

0x663f,	// (0x000263fe) area_bottom_pane_ParamLimits

0x663f,	// (0x000263fe) area_bottom_pane

0x66ff,	// (0x000264be) area_top_pane_ParamLimits

0x66ff,	// (0x000264be) area_top_pane

0x6793,	// (0x00026552) main_pane_ParamLimits

0x6793,	// (0x00026552) main_pane

0x186f,	// (0x0002162e) misc_graphics

0x814d,	// (0x00027f0c) battery_pane_ParamLimits

0x814d,	// (0x00027f0c) battery_pane

0xa289,	// (0x0002a048) bg_status_flat_pane_g8

0xa291,	// (0x0002a050) bg_status_flat_pane_g9

0x8215,	// (0x00027fd4) context_pane_ParamLimits

0x8215,	// (0x00027fd4) context_pane

0x832b,	// (0x000280ea) navi_pane_ParamLimits

0x832b,	// (0x000280ea) navi_pane

0x83af,	// (0x0002816e) signal_pane_ParamLimits

0x83af,	// (0x0002816e) signal_pane

0x0008,

0xf840,	// (0x0002f5ff) bg_status_flat_pane_g

0x841c,	// (0x000281db) status_pane_g1_ParamLimits

0x841c,	// (0x000281db) status_pane_g1

0x8430,	// (0x000281ef) status_pane_g2_ParamLimits

0x8430,	// (0x000281ef) status_pane_g2

0x843c,	// (0x000281fb) status_pane_g3_ParamLimits

0x843c,	// (0x000281fb) status_pane_g3

0x0004,

0xf76c,	// (0x0002f52b) status_pane_g_ParamLimits

0xf76c,	// (0x0002f52b) status_pane_g

0x8470,	// (0x0002822f) title_pane_ParamLimits

0x8470,	// (0x0002822f) title_pane

0x84ad,	// (0x0002826c) uni_indicator_pane_ParamLimits

0x84ad,	// (0x0002826c) uni_indicator_pane

0x2742,	// (0x00022501) bg_list_pane_ParamLimits

0x2742,	// (0x00022501) bg_list_pane

0x5c58,	// (0x00025a17) find_pane

0x1eb5,	// (0x00021c74) listscroll_app_pane_ParamLimits

0x1eb5,	// (0x00021c74) listscroll_app_pane

0x2762,	// (0x00022521) listscroll_form_pane

0x5c60,	// (0x00025a1f) listscroll_gen_pane_ParamLimits

0x5c60,	// (0x00025a1f) listscroll_gen_pane

0x7b2e,	// (0x000278ed) listscroll_set_pane

0x7068,	// (0x00026e27) main_idle_act_pane

0x25f6,	// (0x000223b5) main_idle_trad_pane

0x25f6,	// (0x000223b5) main_list_empty_pane

0x1eb5,	// (0x00021c74) main_midp_pane

0x277c,	// (0x0002253b) main_pane_g1_ParamLimits

0x277c,	// (0x0002253b) main_pane_g1

0x7b36,	// (0x000278f5) popup_ai_message_window_ParamLimits

0x7b36,	// (0x000278f5) popup_ai_message_window

0x7bda,	// (0x00027999) popup_fep_china_uni_window_ParamLimits

0x7bda,	// (0x00027999) popup_fep_china_uni_window

0x7c34,	// (0x000279f3) popup_fep_japan_candidate_window_ParamLimits

0x7c34,	// (0x000279f3) popup_fep_japan_candidate_window

0x7c52,	// (0x00027a11) popup_fep_japan_predictive_window_ParamLimits

0x7c52,	// (0x00027a11) popup_fep_japan_predictive_window

0x7c82,	// (0x00027a41) popup_find_window

0x7c8f,	// (0x00027a4e) popup_grid_graphic_window_ParamLimits

0x7c8f,	// (0x00027a4e) popup_grid_graphic_window

0x7cb9,	// (0x00027a78) popup_large_graphic_colour_window

0x7cdf,	// (0x00027a9e) popup_menu_window_ParamLimits

0x7cdf,	// (0x00027a9e) popup_menu_window

0x7e9b,	// (0x00027c5a) popup_note_image_window

0x7e87,	// (0x00027c46) popup_note_wait_window_ParamLimits

0x7e87,	// (0x00027c46) popup_note_wait_window

0x7e87,	// (0x00027c46) popup_note_window_ParamLimits

0x7e87,	// (0x00027c46) popup_note_window

0x7ef1,	// (0x00027cb0) popup_query_code_window_ParamLimits

0x7ef1,	// (0x00027cb0) popup_query_code_window

0x7f05,	// (0x00027cc4) popup_query_data_code_window_ParamLimits

0x7f05,	// (0x00027cc4) popup_query_data_code_window

0x7f22,	// (0x00027ce1) popup_query_data_window_ParamLimits

0x7f22,	// (0x00027ce1) popup_query_data_window

0x7f3e,	// (0x00027cfd) popup_query_sat_info_window_ParamLimits

0x7f3e,	// (0x00027cfd) popup_query_sat_info_window

0x7f77,	// (0x00027d36) popup_snote_single_graphic_window_ParamLimits

0x7f77,	// (0x00027d36) popup_snote_single_graphic_window

0x7f77,	// (0x00027d36) popup_snote_single_text_window_ParamLimits

0x7f77,	// (0x00027d36) popup_snote_single_text_window

0x7f8c,	// (0x00027d4b) popup_sub_window_general

0x80bc,	// (0x00027e7b) popup_window_general_ParamLimits

0x80bc,	// (0x00027e7b) popup_window_general

0x80d1,	// (0x00027e90) power_save_pane

0x7999,	// (0x00027758) control_pane_g1_ParamLimits

0x7999,	// (0x00027758) control_pane_g1

0x79c0,	// (0x0002777f) control_pane_g2_ParamLimits

0x79c0,	// (0x0002777f) control_pane_g2

0x272c,	// (0x000224eb) control_pane_g3_ParamLimits

0x272c,	// (0x000224eb) control_pane_g3

0x0007,

0xf754,	// (0x0002f513) control_pane_g_ParamLimits

0xf754,	// (0x0002f513) control_pane_g

0x7a31,	// (0x000277f0) control_pane_t1_ParamLimits

0x7a31,	// (0x000277f0) control_pane_t1

0x7a85,	// (0x00027844) control_pane_t2_ParamLimits

0x7a85,	// (0x00027844) control_pane_t2

0x0002,

0xf765,	// (0x0002f524) control_pane_t_ParamLimits

0xf765,	// (0x0002f524) control_pane_t

0x78f2,	// (0x000276b1) navi_navi_volume_pane_cp1

0x78fa,	// (0x000276b9) status_small_icon_pane

0x26f8,	// (0x000224b7) status_small_pane_g1_ParamLimits

0x26f8,	// (0x000224b7) status_small_pane_g1

0x7902,	// (0x000276c1) status_small_pane_g2_ParamLimits

0x7902,	// (0x000276c1) status_small_pane_g2

0x790e,	// (0x000276cd) status_small_pane_g3_ParamLimits

0x790e,	// (0x000276cd) status_small_pane_g3

0x791a,	// (0x000276d9) status_small_pane_g4_ParamLimits

0x791a,	// (0x000276d9) status_small_pane_g4

0x7926,	// (0x000276e5) status_small_pane_g5_ParamLimits

0x7926,	// (0x000276e5) status_small_pane_g5

0x7934,	// (0x000276f3) status_small_pane_g6_ParamLimits

0x7934,	// (0x000276f3) status_small_pane_g6

0x0007,

0xf743,	// (0x0002f502) status_small_pane_g_ParamLimits

0xf743,	// (0x0002f502) status_small_pane_g

0x7963,	// (0x00027722) status_small_pane_t1

0x7985,	// (0x00027744) status_small_wait_pane_ParamLimits

0x7985,	// (0x00027744) status_small_wait_pane

0x743b,	// (0x000271fa) aid_levels_signal_ParamLimits

0x743b,	// (0x000271fa) aid_levels_signal

0x744d,	// (0x0002720c) signal_pane_g1_ParamLimits

0x744d,	// (0x0002720c) signal_pane_g1

0x7462,	// (0x00027221) signal_pane_g2_ParamLimits

0x7462,	// (0x00027221) signal_pane_g2

0x0003,

0xf6d4,	// (0x0002f493) signal_pane_g_ParamLimits

0xf6d4,	// (0x0002f493) signal_pane_g

0x221d,	// (0x00021fdc) context_pane_g1

0x69d4,	// (0x00026793) title_pane_g1

0x69fe,	// (0x000267bd) title_pane_t1

0x1885,	// (0x00021644) title_pane_t2

0x18ab,	// (0x0002166a) title_pane_t3

0x0002,

0xf532,	// (0x0002f2f1) title_pane_t

0x84c5,	// (0x00028284) aid_levels_battery_ParamLimits

0x84c5,	// (0x00028284) aid_levels_battery

0x84d9,	// (0x00028298) battery_pane_g1_ParamLimits

0x84d9,	// (0x00028298) battery_pane_g1

0x84ef,	// (0x000282ae) battery_pane_g2_ParamLimits

0x84ef,	// (0x000282ae) battery_pane_g2

0x0001,

0xf777,	// (0x0002f536) battery_pane_g_ParamLimits

0xf777,	// (0x0002f536) battery_pane_g

0xabad,	// (0x0002a96c) uni_indicator_pane_g1

0xabc0,	// (0x0002a97f) uni_indicator_pane_g2

0xabd2,	// (0x0002a991) uni_indicator_pane_g3

0x0005,

0xf8e8,	// (0x0002f6a7) uni_indicator_pane_g

0x24ba,	// (0x00022279) navi_icon_pane_ParamLimits

0x24ba,	// (0x00022279) navi_icon_pane

0x240f,	// (0x000221ce) navi_midp_pane

0x24d6,	// (0x00022295) navi_navi_pane

0x24e0,	// (0x0002229f) navi_text_pane_ParamLimits

0x24e0,	// (0x0002229f) navi_text_pane

0x1865,	// (0x00021624) status_small_wait_pane_g1

0x1b16,	// (0x000218d5) status_small_wait_pane_g2

0x0001,

0xf8e3,	// (0x0002f6a2) status_small_wait_pane_g

0xa8d4,	// (0x0002a693) navi_navi_icon_text_pane

0xa8dc,	// (0x0002a69b) navi_navi_pane_g1_ParamLimits

0xa8dc,	// (0x0002a69b) navi_navi_pane_g1

0xa8ee,	// (0x0002a6ad) navi_navi_pane_g2_ParamLimits

0xa8ee,	// (0x0002a6ad) navi_navi_pane_g2

0x0001,

0xf8b1,	// (0x0002f670) navi_navi_pane_g_ParamLimits

0xf8b1,	// (0x0002f670) navi_navi_pane_g

0xa900,	// (0x0002a6bf) navi_navi_tabs_pane

0xa909,	// (0x0002a6c8) navi_navi_text_pane

0xa8d4,	// (0x0002a693) navi_navi_volume_pane

0xa8b0,	// (0x0002a66f) navi_text_pane_t1

0xa8a4,	// (0x0002a663) navi_icon_pane_g1

0xa7f7,	// (0x0002a5b6) navi_navi_text_pane_t1

0x8ff9,	// (0x00028db8) navi_navi_volume_pane_g1

0x9001,	// (0x00028dc0) volume_small_pane

0xa75d,	// (0x0002a51c) navi_navi_icon_text_pane_g1

0xa765,	// (0x0002a524) navi_navi_icon_text_pane_t1

0x24d6,	// (0x00022295) navi_tabs_2_long_pane

0x24d6,	// (0x00022295) navi_tabs_2_pane

0x24d6,	// (0x00022295) navi_tabs_3_long_pane

0x24d6,	// (0x00022295) navi_tabs_3_pane

0x24d6,	// (0x00022295) navi_tabs_4_pane

0x8fd9,	// (0x00028d98) tabs_2_active_pane_ParamLimits

0x8fd9,	// (0x00028d98) tabs_2_active_pane

0x8fe9,	// (0x00028da8) tabs_2_passive_pane_ParamLimits

0x8fe9,	// (0x00028da8) tabs_2_passive_pane

0x8fa7,	// (0x00028d66) tabs_3_active_pane_ParamLimits

0x8fa7,	// (0x00028d66) tabs_3_active_pane

0x8fb7,	// (0x00028d76) tabs_3_passive_pane_ParamLimits

0x8fb7,	// (0x00028d76) tabs_3_passive_pane

0x8fc8,	// (0x00028d87) tabs_3_passive_pane_cp_ParamLimits

0x8fc8,	// (0x00028d87) tabs_3_passive_pane_cp

0x8f63,	// (0x00028d22) tabs_4_active_pane_ParamLimits

0x8f63,	// (0x00028d22) tabs_4_active_pane

0x8f74,	// (0x00028d33) tabs_4_passive_pane_ParamLimits

0x8f74,	// (0x00028d33) tabs_4_passive_pane

0x8f85,	// (0x00028d44) tabs_4_passive_pane_cp_ParamLimits

0x8f85,	// (0x00028d44) tabs_4_passive_pane_cp

0x8f96,	// (0x00028d55) tabs_4_passive_pane_cp2_ParamLimits

0x8f96,	// (0x00028d55) tabs_4_passive_pane_cp2

0x8f3f,	// (0x00028cfe) tabs_2_long_active_pane_ParamLimits

0x8f3f,	// (0x00028cfe) tabs_2_long_active_pane

0x8f51,	// (0x00028d10) tabs_2_long_passive_pane_ParamLimits

0x8f51,	// (0x00028d10) tabs_2_long_passive_pane

0x8efa,	// (0x00028cb9) tabs_3_long_active_pane_ParamLimits

0x8efa,	// (0x00028cb9) tabs_3_long_active_pane

0x8f13,	// (0x00028cd2) tabs_3_long_passive_pane_ParamLimits

0x8f13,	// (0x00028cd2) tabs_3_long_passive_pane

0x8f26,	// (0x00028ce5) tabs_3_long_passive_pane_cp_ParamLimits

0x8f26,	// (0x00028ce5) tabs_3_long_passive_pane_cp

0x8ea0,	// (0x00028c5f) volume_small_pane_g1

0x8ea9,	// (0x00028c68) volume_small_pane_g2

0x8eb2,	// (0x00028c71) volume_small_pane_g3

0x8ebb,	// (0x00028c7a) volume_small_pane_g4

0x8ec4,	// (0x00028c83) volume_small_pane_g5

0x8ecd,	// (0x00028c8c) volume_small_pane_g6

0x8ed6,	// (0x00028c95) volume_small_pane_g7

0x8edf,	// (0x00028c9e) volume_small_pane_g8

0x8ee8,	// (0x00028ca7) volume_small_pane_g9

0x8ef1,	// (0x00028cb0) volume_small_pane_g10

0x0009,

0xf87d,	// (0x0002f63c) volume_small_pane_g

0x18cb,	// (0x0002168a) bg_active_tab_pane_cp2_ParamLimits

0x18cb,	// (0x0002168a) bg_active_tab_pane_cp2

0x6a66,	// (0x00026825) tabs_3_active_pane_g1

0x6a6e,	// (0x0002682d) tabs_3_active_pane_t1

0x18cb,	// (0x0002168a) bg_passive_tab_pane_cp2_ParamLimits

0x18cb,	// (0x0002168a) bg_passive_tab_pane_cp2

0x6a66,	// (0x00026825) tabs_3_passive_pane_g1

0x6a6e,	// (0x0002682d) tabs_3_passive_pane_t1

0x18cb,	// (0x0002168a) bg_active_tab_pane_cp3_ParamLimits

0x18cb,	// (0x0002168a) bg_active_tab_pane_cp3

0x6a80,	// (0x0002683f) tabs_4_active_pane_g1

0x6a88,	// (0x00026847) tabs_4_active_pane_t1

0x18cb,	// (0x0002168a) bg_passive_tab_pane_cp3_ParamLimits

0x18cb,	// (0x0002168a) bg_passive_tab_pane_cp3

0x6a80,	// (0x0002683f) tabs_4_1_passive_pane_g1

0x6a88,	// (0x00026847) tabs_4_1_passive_pane_t1

0x1eb5,	// (0x00021c74) list_highlight_pane_cp2

0xae15,	// (0x0002abd4) list_set_pane_ParamLimits

0xae15,	// (0x0002abd4) list_set_pane

0xaeb7,	// (0x0002ac76) main_pane_set_t1_ParamLimits

0xaeb7,	// (0x0002ac76) main_pane_set_t1

0xaed7,	// (0x0002ac96) main_pane_set_t2_ParamLimits

0xaed7,	// (0x0002ac96) main_pane_set_t2

0xaeeb,	// (0x0002acaa) main_pane_set_t3_ParamLimits

0xaeeb,	// (0x0002acaa) main_pane_set_t3

0xaefd,	// (0x0002acbc) main_pane_set_t4_ParamLimits

0xaefd,	// (0x0002acbc) main_pane_set_t4

0x0003,

0xf94d,	// (0x0002f70c) main_pane_set_t_ParamLimits

0xf94d,	// (0x0002f70c) main_pane_set_t

0xaf0f,	// (0x0002acce) setting_code_pane

0xaf1b,	// (0x0002acda) setting_slider_graphic_pane

0xaf1b,	// (0x0002acda) setting_slider_pane

0xaf1b,	// (0x0002acda) setting_text_pane

0xaf1b,	// (0x0002acda) setting_volume_pane

0x6a9a,	// (0x00026859) volume_set_pane

0x18cb,	// (0x0002168a) bg_set_opt_pane_cp

0x6aa2,	// (0x00026861) setting_slider_pane_t1

0x6abb,	// (0x0002687a) setting_slider_pane_t2

0x6ad5,	// (0x00026894) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0002f2f8) setting_slider_pane_t

0x6aed,	// (0x000268ac) slider_set_pane

0x186f,	// (0x0002162e) bg_set_opt_pane_cp2

0x18d9,	// (0x00021698) setting_slider_graphic_pane_g1

0x6b03,	// (0x000268c2) setting_slider_graphic_pane_t1

0x6b13,	// (0x000268d2) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0002f2ff) setting_slider_graphic_pane_t

0x6b23,	// (0x000268e2) slider_set_pane_cp

0x186f,	// (0x0002162e) input_focus_pane_cp1

0xadd4,	// (0x0002ab93) list_set_text_pane

0x1865,	// (0x00021624) setting_text_pane_g1

0x186f,	// (0x0002162e) input_focus_pane_cp2

0x1865,	// (0x00021624) setting_code_pane_g1

0x18e2,	// (0x000216a1) setting_code_pane_t1

0x555b,	// (0x0002531a) set_text_pane_t1_ParamLimits

0x555b,	// (0x0002531a) set_text_pane_t1

0x1dcb,	// (0x00021b8a) set_opt_bg_pane_g1

0x1dd3,	// (0x00021b92) set_opt_bg_pane_g2

0xadae,	// (0x0002ab6d) set_opt_bg_pane_g3

0x1de3,	// (0x00021ba2) set_opt_bg_pane_g4

0x1deb,	// (0x00021baa) set_opt_bg_pane_g5

0x1df3,	// (0x00021bb2) set_opt_bg_pane_g6

0xadb8,	// (0x0002ab77) set_opt_bg_pane_g7

0xadc0,	// (0x0002ab7f) set_opt_bg_pane_g8

0xadca,	// (0x0002ab89) set_opt_bg_pane_g9

0x0008,

0xf93a,	// (0x0002f6f9) set_opt_bg_pane_g

0xada1,	// (0x0002ab60) slider_set_pane_g1

0x906e,	// (0x00028e2d) slider_set_pane_g2

0x0006,

0xf92b,	// (0x0002f6ea) slider_set_pane_g

0x900a,	// (0x00028dc9) volume_set_pane_g1

0x9012,	// (0x00028dd1) volume_set_pane_g2

0x901a,	// (0x00028dd9) volume_set_pane_g3

0x9022,	// (0x00028de1) volume_set_pane_g4

0x902a,	// (0x00028de9) volume_set_pane_g5

0x9032,	// (0x00028df1) volume_set_pane_g6

0x903a,	// (0x00028df9) volume_set_pane_g7

0x9042,	// (0x00028e01) volume_set_pane_g8

0x904a,	// (0x00028e09) volume_set_pane_g9

0x9052,	// (0x00028e11) volume_set_pane_g10

0x0009,

0xf903,	// (0x0002f6c2) volume_set_pane_g

0x6b2b,	// (0x000268ea) indicator_pane_ParamLimits

0x6b2b,	// (0x000268ea) indicator_pane

0x6b37,	// (0x000268f6) main_idle_pane_g2_ParamLimits

0x6b37,	// (0x000268f6) main_idle_pane_g2

0x6b5f,	// (0x0002691e) main_pane_idle_g1_ParamLimits

0x6b5f,	// (0x0002691e) main_pane_idle_g1

0x190a,	// (0x000216c9) popup_clock_digital_analogue_window_ParamLimits

0x190a,	// (0x000216c9) popup_clock_digital_analogue_window

0x6b6c,	// (0x0002692b) soft_indicator_pane_ParamLimits

0x6b6c,	// (0x0002692b) soft_indicator_pane

0x6b78,	// (0x00026937) wallpaper_pane_ParamLimits

0x6b78,	// (0x00026937) wallpaper_pane

0x1865,	// (0x00021624) wallpaper_pane_g1

0x6b84,	// (0x00026943) indicator_pane_g1_ParamLimits

0x6b84,	// (0x00026943) indicator_pane_g1

0xb1e7,	// (0x0002afa6) navi_navi_icon_text_pane_srt_g1

0x1938,	// (0x000216f7) soft_indicator_pane_t1

0x1952,	// (0x00021711) aid_ps_area_pane

0x6b90,	// (0x0002694f) aid_ps_clock_pane

0x1963,	// (0x00021722) aid_ps_indicator_pane

0x196f,	// (0x0002172e) indicator_ps_pane_ParamLimits

0x196f,	// (0x0002172e) indicator_ps_pane

0x197e,	// (0x0002173d) power_save_pane_g1_ParamLimits

0x197e,	// (0x0002173d) power_save_pane_g1

0x198a,	// (0x00021749) power_save_pane_g2_ParamLimits

0x198a,	// (0x00021749) power_save_pane_g2

0x65f3,	// (0x000263b2) aid_navinavi_width_pane

0x1952,	// (0x00021711) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0002f304) power_save_pane_g_ParamLimits

0xf545,	// (0x0002f304) power_save_pane_g

0x1998,	// (0x00021757) power_save_pane_t1_ParamLimits

0x1998,	// (0x00021757) power_save_pane_t1

0x6b90,	// (0x0002694f) aid_ps_clock_pane_ParamLimits

0x1963,	// (0x00021722) aid_ps_indicator_pane_ParamLimits

0x19aa,	// (0x00021769) power_save_pane_t4_ParamLimits

0x19aa,	// (0x00021769) power_save_pane_t4

0x0001,

0xf54a,	// (0x0002f309) power_save_pane_t_ParamLimits

0xf54a,	// (0x0002f309) power_save_pane_t

0x19d4,	// (0x00021793) power_save_t3_ParamLimits

0x19d4,	// (0x00021793) power_save_t3

0x19bf,	// (0x0002177e) power_save_t2_ParamLimits

0x19bf,	// (0x0002177e) power_save_t2

0x19e9,	// (0x000217a8) indicator_ps_pane_g1

0x6b9e,	// (0x0002695d) ai_gene_pane_ParamLimits

0x6b9e,	// (0x0002695d) ai_gene_pane

0x6baa,	// (0x00026969) ai_links_pane_ParamLimits

0x6baa,	// (0x00026969) ai_links_pane

0x6bb6,	// (0x00026975) indicator_pane_cp1_ParamLimits

0x6bb6,	// (0x00026975) indicator_pane_cp1

0x6bc2,	// (0x00026981) main_pane_idle_g1_cp_ParamLimits

0x6bc2,	// (0x00026981) main_pane_idle_g1_cp

0x6bce,	// (0x0002698d) popup_ai_links_title_window

0x6bd7,	// (0x00026996) soft_indicator_pane_cp1_ParamLimits

0x6bd7,	// (0x00026996) soft_indicator_pane_cp1

0xab9b,	// (0x0002a95a) ai_links_pane_g1

0xaba4,	// (0x0002a963) grid_ai_links_pane

0xab7e,	// (0x0002a93d) ai_gene_pane_1

0xab89,	// (0x0002a948) ai_gene_pane_2

0xab92,	// (0x0002a951) list_highlight_pane_cp4

0xab62,	// (0x0002a921) cell_ai_link_pane_ParamLimits

0xab62,	// (0x0002a921) cell_ai_link_pane

0xab5a,	// (0x0002a919) cell_ai_link_pane_g1

0x1b16,	// (0x000218d5) cell_ai_link_pane_g2

0x0001,

0xf8de,	// (0x0002f69d) cell_ai_link_pane_g

0x186f,	// (0x0002162e) grid_highlight_cp2

0x186f,	// (0x0002162e) bg_popup_sub_pane_cp1

0x1a00,	// (0x000217bf) popup_ai_links_title_window_t1

0xaaaa,	// (0x0002a869) ai_gene_pane_1_g1_ParamLimits

0xaaaa,	// (0x0002a869) ai_gene_pane_1_g1

0xaab6,	// (0x0002a875) ai_gene_pane_1_g2_ParamLimits

0xaab6,	// (0x0002a875) ai_gene_pane_1_g2

0x0001,

0xf8d4,	// (0x0002f693) ai_gene_pane_1_g_ParamLimits

0xf8d4,	// (0x0002f693) ai_gene_pane_1_g

0xaac3,	// (0x0002a882) ai_gene_pane_1_t1_ParamLimits

0xaac3,	// (0x0002a882) ai_gene_pane_1_t1

0xaaf7,	// (0x0002a8b6) grid_ai_soft_ind_pane

0xaa95,	// (0x0002a854) ai_gene_pane_2_t1_ParamLimits

0xaa95,	// (0x0002a854) ai_gene_pane_2_t1

0x6be3,	// (0x000269a2) main_pane_empty_t1_ParamLimits

0x6be3,	// (0x000269a2) main_pane_empty_t1

0x6bfb,	// (0x000269ba) main_pane_empty_t2_ParamLimits

0x6bfb,	// (0x000269ba) main_pane_empty_t2

0x6c10,	// (0x000269cf) main_pane_empty_t3_ParamLimits

0x6c10,	// (0x000269cf) main_pane_empty_t3

0x6c22,	// (0x000269e1) main_pane_empty_t4_ParamLimits

0x6c22,	// (0x000269e1) main_pane_empty_t4

0x6c34,	// (0x000269f3) main_pane_empty_t5_ParamLimits

0x6c34,	// (0x000269f3) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0002f30e) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0002f30e) main_pane_empty_t

0x1e50,	// (0x00021c0f) bg_popup_window_pane_ParamLimits

0x1e50,	// (0x00021c0f) bg_popup_window_pane

0xa805,	// (0x0002a5c4) find_popup_pane_cp2_ParamLimits

0xa805,	// (0x0002a5c4) find_popup_pane_cp2

0xa811,	// (0x0002a5d0) heading_pane_ParamLimits

0xa811,	// (0x0002a5d0) heading_pane

0x186f,	// (0x0002162e) bg_popup_sub_pane

0xa77f,	// (0x0002a53e) bg_popup_window_pane_g1_ParamLimits

0xa77f,	// (0x0002a53e) bg_popup_window_pane_g1

0xa78b,	// (0x0002a54a) bg_popup_window_pane_g2_ParamLimits

0xa78b,	// (0x0002a54a) bg_popup_window_pane_g2

0xa797,	// (0x0002a556) bg_popup_window_pane_g3_ParamLimits

0xa797,	// (0x0002a556) bg_popup_window_pane_g3

0xa7a3,	// (0x0002a562) bg_popup_window_pane_g4_ParamLimits

0xa7a3,	// (0x0002a562) bg_popup_window_pane_g4

0xa7af,	// (0x0002a56e) bg_popup_window_pane_g5_ParamLimits

0xa7af,	// (0x0002a56e) bg_popup_window_pane_g5

0xa7bb,	// (0x0002a57a) bg_popup_window_pane_g6_ParamLimits

0xa7bb,	// (0x0002a57a) bg_popup_window_pane_g6

0xa7c7,	// (0x0002a586) bg_popup_window_pane_g7_ParamLimits

0xa7c7,	// (0x0002a586) bg_popup_window_pane_g7

0xa7d3,	// (0x0002a592) bg_popup_window_pane_g8_ParamLimits

0xa7d3,	// (0x0002a592) bg_popup_window_pane_g8

0xa7df,	// (0x0002a59e) bg_popup_window_pane_g9_ParamLimits

0xa7df,	// (0x0002a59e) bg_popup_window_pane_g9

0xa7eb,	// (0x0002a5aa) bg_popup_window_pane_g10_ParamLimits

0xa7eb,	// (0x0002a5aa) bg_popup_window_pane_g10

0x0009,

0xf89c,	// (0x0002f65b) bg_popup_window_pane_g_ParamLimits

0xf89c,	// (0x0002f65b) bg_popup_window_pane_g

0xa714,	// (0x0002a4d3) bg_popup_heading_pane_ParamLimits

0xa714,	// (0x0002a4d3) bg_popup_heading_pane

0x90f6,	// (0x00028eb5) tabs_4_passive_pane_cp_srt_ParamLimits

0x90f6,	// (0x00028eb5) tabs_4_passive_pane_cp_srt

0x9108,	// (0x00028ec7) tabs_4_passive_pane_srt_ParamLimits

0xa728,	// (0x0002a4e7) heading_pane_g2

0x9108,	// (0x00028ec7) tabs_4_passive_pane_srt

0x1eb5,	// (0x00021c74) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1eb5,	// (0x00021c74) bg_passive_tab_pane_cp3_srt

0xa730,	// (0x0002a4ef) heading_pane_t1_ParamLimits

0xa730,	// (0x0002a4ef) heading_pane_t1

0xa747,	// (0x0002a506) heading_pane_t2_ParamLimits

0xa747,	// (0x0002a506) heading_pane_t2

0x0001,

0xf897,	// (0x0002f656) heading_pane_t_ParamLimits

0xf897,	// (0x0002f656) heading_pane_t

0xa251,	// (0x0002a010) bg_popup_heading_pane_g1

0xa300,	// (0x0002a0bf) bg_popup_heading_pane_g2

0xa30a,	// (0x0002a0c9) bg_popup_heading_pane_g3

0xa314,	// (0x0002a0d3) bg_popup_heading_pane_g4

0xa31e,	// (0x0002a0dd) bg_popup_heading_pane_g5

0xa328,	// (0x0002a0e7) bg_popup_heading_pane_g6

0xa330,	// (0x0002a0ef) bg_popup_heading_pane_g7

0xa338,	// (0x0002a0f7) bg_popup_heading_pane_g8

0xa342,	// (0x0002a101) bg_popup_heading_pane_g9

0x0008,

0xf853,	// (0x0002f612) bg_popup_heading_pane_g

0x85f4,	// (0x000283b3) bg_popup_sub_pane_g1

0x85fc,	// (0x000283bb) bg_popup_sub_pane_g2

0x8604,	// (0x000283c3) bg_popup_sub_pane_g3

0x860c,	// (0x000283cb) bg_popup_sub_pane_g4

0x8614,	// (0x000283d3) bg_popup_sub_pane_g5

0x861c,	// (0x000283db) bg_popup_sub_pane_g6

0x8624,	// (0x000283e3) bg_popup_sub_pane_g7

0x862c,	// (0x000283eb) bg_popup_sub_pane_g8

0x8634,	// (0x000283f3) bg_popup_sub_pane_g9

0x0008,

0xf82d,	// (0x0002f5ec) bg_popup_sub_pane_g

0x18bd,	// (0x0002167c) bg_popup_window_pane_cp5_ParamLimits

0x18bd,	// (0x0002167c) bg_popup_window_pane_cp5

0x1a1d,	// (0x000217dc) popup_note_window_g1_ParamLimits

0x1a1d,	// (0x000217dc) popup_note_window_g1

0x1a29,	// (0x000217e8) popup_note_window_t1_ParamLimits

0x1a29,	// (0x000217e8) popup_note_window_t1

0x1a3f,	// (0x000217fe) popup_note_window_t2_ParamLimits

0x1a3f,	// (0x000217fe) popup_note_window_t2

0x1a55,	// (0x00021814) popup_note_window_t3_ParamLimits

0x1a55,	// (0x00021814) popup_note_window_t3

0x1a6b,	// (0x0002182a) popup_note_window_t4_ParamLimits

0x1a6b,	// (0x0002182a) popup_note_window_t4

0x1a93,	// (0x00021852) popup_note_window_t5_ParamLimits

0x1a93,	// (0x00021852) popup_note_window_t5

0x0004,

0xf55a,	// (0x0002f319) popup_note_window_t_ParamLimits

0xf55a,	// (0x0002f319) popup_note_window_t

0x1ab7,	// (0x00021876) bg_popup_window_pane_cp6_ParamLimits

0x1ab7,	// (0x00021876) bg_popup_window_pane_cp6

0xa1cd,	// (0x00029f8c) popup_note_image_window_g1_ParamLimits

0xa1cd,	// (0x00029f8c) popup_note_image_window_g1

0xa1d9,	// (0x00029f98) popup_note_image_window_g2_ParamLimits

0xa1d9,	// (0x00029f98) popup_note_image_window_g2

0x0001,

0xf821,	// (0x0002f5e0) popup_note_image_window_g_ParamLimits

0xf821,	// (0x0002f5e0) popup_note_image_window_g

0xa1f2,	// (0x00029fb1) popup_note_image_window_t1_ParamLimits

0xa1f2,	// (0x00029fb1) popup_note_image_window_t1

0xa20b,	// (0x00029fca) popup_note_image_window_t2_ParamLimits

0xa20b,	// (0x00029fca) popup_note_image_window_t2

0xa224,	// (0x00029fe3) popup_note_image_window_t3_ParamLimits

0xa224,	// (0x00029fe3) popup_note_image_window_t3

0x0002,

0xf826,	// (0x0002f5e5) popup_note_image_window_t_ParamLimits

0xf826,	// (0x0002f5e5) popup_note_image_window_t

0x8d78,	// (0x00028b37) bg_popup_window_pane_cp7_ParamLimits

0x8d78,	// (0x00028b37) bg_popup_window_pane_cp7

0x8da8,	// (0x00028b67) popup_note_wait_window_g1_ParamLimits

0x8da8,	// (0x00028b67) popup_note_wait_window_g1

0x8db4,	// (0x00028b73) popup_note_wait_window_g2_ParamLimits

0x8db4,	// (0x00028b73) popup_note_wait_window_g2

0x0002,

0xf80f,	// (0x0002f5ce) popup_note_wait_window_g_ParamLimits

0xf80f,	// (0x0002f5ce) popup_note_wait_window_g

0x8dcc,	// (0x00028b8b) popup_note_wait_window_t1_ParamLimits

0x8dcc,	// (0x00028b8b) popup_note_wait_window_t1

0x8df3,	// (0x00028bb2) popup_note_wait_window_t2_ParamLimits

0x8df3,	// (0x00028bb2) popup_note_wait_window_t2

0x8e10,	// (0x00028bcf) popup_note_wait_window_t3_ParamLimits

0x8e10,	// (0x00028bcf) popup_note_wait_window_t3

0x8e23,	// (0x00028be2) popup_note_wait_window_t4_ParamLimits

0x8e23,	// (0x00028be2) popup_note_wait_window_t4

0x0004,

0xf816,	// (0x0002f5d5) popup_note_wait_window_t_ParamLimits

0xf816,	// (0x0002f5d5) popup_note_wait_window_t

0x8e48,	// (0x00028c07) wait_bar_pane_ParamLimits

0x8e48,	// (0x00028c07) wait_bar_pane

0x186f,	// (0x0002162e) wait_anim_pane

0x186f,	// (0x0002162e) wait_border_pane

0x1865,	// (0x00021624) wait_anim_pane_g1

0x1865,	// (0x00021624) wait_anim_pane_g2

0x0001,

0xf6cf,	// (0x0002f48e) wait_anim_pane_g

0x8d24,	// (0x00028ae3) wait_border_pane_g1

0x8d2f,	// (0x00028aee) wait_border_pane_g2

0x8d38,	// (0x00028af7) wait_border_pane_g3

0x0002,

0xf808,	// (0x0002f5c7) wait_border_pane_g

0x8b8f,	// (0x0002894e) bg_popup_window_pane_cp16_ParamLimits

0x8b8f,	// (0x0002894e) bg_popup_window_pane_cp16

0x8c8f,	// (0x00028a4e) indicator_popup_pane_cp4_ParamLimits

0x8c8f,	// (0x00028a4e) indicator_popup_pane_cp4

0x8ca3,	// (0x00028a62) popup_query_data_window_t1_ParamLimits

0x8ca3,	// (0x00028a62) popup_query_data_window_t1

0x8cb5,	// (0x00028a74) popup_query_data_window_t2_ParamLimits

0x8cb5,	// (0x00028a74) popup_query_data_window_t2

0x8cce,	// (0x00028a8d) popup_query_data_window_t3_ParamLimits

0x8cce,	// (0x00028a8d) popup_query_data_window_t3

0x0002,

0xf801,	// (0x0002f5c0) popup_query_data_window_t_ParamLimits

0xf801,	// (0x0002f5c0) popup_query_data_window_t

0x8ce8,	// (0x00028aa7) query_popup_data_pane_ParamLimits

0x8ce8,	// (0x00028aa7) query_popup_data_pane

0x8cfc,	// (0x00028abb) query_popup_data_pane_cp1_ParamLimits

0x8cfc,	// (0x00028abb) query_popup_data_pane_cp1

0x8b8f,	// (0x0002894e) bg_popup_window_pane_cp10_ParamLimits

0x8b8f,	// (0x0002894e) bg_popup_window_pane_cp10

0x8bc1,	// (0x00028980) indicator_popup_pane_ParamLimits

0x8bc1,	// (0x00028980) indicator_popup_pane

0x8be3,	// (0x000289a2) popup_query_code_window_t1_ParamLimits

0x8be3,	// (0x000289a2) popup_query_code_window_t1

0x8bfd,	// (0x000289bc) popup_query_code_window_t2_ParamLimits

0x8bfd,	// (0x000289bc) popup_query_code_window_t2

0x8c46,	// (0x00028a05) popup_query_code_window_t3_ParamLimits

0x8c46,	// (0x00028a05) popup_query_code_window_t3

0x0002,

0xf7fa,	// (0x0002f5b9) popup_query_code_window_t_ParamLimits

0xf7fa,	// (0x0002f5b9) popup_query_code_window_t

0x8c75,	// (0x00028a34) query_popup_pane_ParamLimits

0x8c75,	// (0x00028a34) query_popup_pane

0x1ab7,	// (0x00021876) bg_popup_window_pane_cp15_ParamLimits

0x1ab7,	// (0x00021876) bg_popup_window_pane_cp15

0x6c6e,	// (0x00026a2d) indicator_popup_pane_cp1_ParamLimits

0x6c6e,	// (0x00026a2d) indicator_popup_pane_cp1

0x6c81,	// (0x00026a40) indicator_popup_pane_cp2_ParamLimits

0x6c81,	// (0x00026a40) indicator_popup_pane_cp2

0x6c94,	// (0x00026a53) popup_query_data_code_window_g1_ParamLimits

0x6c94,	// (0x00026a53) popup_query_data_code_window_g1

0x1ad5,	// (0x00021894) popup_query_data_code_window_t1_ParamLimits

0x1ad5,	// (0x00021894) popup_query_data_code_window_t1

0x1ae7,	// (0x000218a6) popup_query_data_code_window_t2_ParamLimits

0x1ae7,	// (0x000218a6) popup_query_data_code_window_t2

0x6ca7,	// (0x00026a66) popup_query_data_code_window_t3_ParamLimits

0x6ca7,	// (0x00026a66) popup_query_data_code_window_t3

0x6cbd,	// (0x00026a7c) popup_query_data_code_window_t4_ParamLimits

0x6cbd,	// (0x00026a7c) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0002f324) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0002f324) popup_query_data_code_window_t

0x2478,	// (0x00022237) list_single_midp_graphic_pane_g3

0x6cd5,	// (0x00026a94) query_popup_data_pane_cp2_ParamLimits

0x6ce8,	// (0x00026aa7) query_popup_pane_cp2_ParamLimits

0x6ce8,	// (0x00026aa7) query_popup_pane_cp2

0x186f,	// (0x0002162e) bg_popup_window_pane_cp11

0x8b73,	// (0x00028932) heading_pane_cp5

0x8b7b,	// (0x0002893a) listscroll_popup_info_pane

0x186f,	// (0x0002162e) input_focus_pane_cp3

0x1af9,	// (0x000218b8) query_popup_pane_t1

0x1b07,	// (0x000218c6) list_popup_info_pane_ParamLimits

0x1b07,	// (0x000218c6) list_popup_info_pane

0x1b16,	// (0x000218d5) listscroll_popup_info_pane_g1

0x1b1e,	// (0x000218dd) scroll_pane_cp7

0x6cfb,	// (0x00026aba) popup_info_list_pane_t1_ParamLimits

0x6cfb,	// (0x00026aba) popup_info_list_pane_t1

0x6d15,	// (0x00026ad4) popup_info_list_pane_t2_ParamLimits

0x6d15,	// (0x00026ad4) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0002f32d) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0002f32d) popup_info_list_pane_t

0x186f,	// (0x0002162e) bg_popup_window_pane_cp12

0xb201,	// (0x0002afc0) find_popup_pane

0x18cb,	// (0x0002168a) bg_popup_window_pane_cp3

0x1b28,	// (0x000218e7) heading_pane_cp3

0x1b37,	// (0x000218f6) listscroll_popup_graphic_pane

0x186f,	// (0x0002162e) bg_popup_window_pane_cp4

0x6d7f,	// (0x00026b3e) heading_pane_cp4

0x1b47,	// (0x00021906) listscroll_popup_colour_pane

0x6d89,	// (0x00026b48) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6d89,	// (0x00026b48) cell_large_graphic_colour_none_popup_pane

0x6d9d,	// (0x00026b5c) grid_large_graphic_colour_popup_pane_ParamLimits

0x6d9d,	// (0x00026b5c) grid_large_graphic_colour_popup_pane

0x6dc1,	// (0x00026b80) listscroll_popup_colour_pane_g1_ParamLimits

0x6dc1,	// (0x00026b80) listscroll_popup_colour_pane_g1

0x6dd8,	// (0x00026b97) listscroll_popup_colour_pane_g2_ParamLimits

0x6dd8,	// (0x00026b97) listscroll_popup_colour_pane_g2

0x6def,	// (0x00026bae) listscroll_popup_colour_pane_g3_ParamLimits

0x6def,	// (0x00026bae) listscroll_popup_colour_pane_g3

0x6dff,	// (0x00026bbe) listscroll_popup_colour_pane_g4_ParamLimits

0x6dff,	// (0x00026bbe) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0002f332) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0002f332) listscroll_popup_colour_pane_g

0x1b4f,	// (0x0002190e) scroll_pane_cp6_ParamLimits

0x1b4f,	// (0x0002190e) scroll_pane_cp6

0x6e0f,	// (0x00026bce) cell_large_graphic_colour_popup_pane_ParamLimits

0x6e0f,	// (0x00026bce) cell_large_graphic_colour_popup_pane

0x6e2e,	// (0x00026bed) cell_large_graphic_colour_none_popup_pane_t1

0x186f,	// (0x0002162e) grid_highlight_pane_cp5

0x1b61,	// (0x00021920) cell_large_graphic_colour_popup_pane_g1

0x1b69,	// (0x00021928) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0002f33b) cell_large_graphic_colour_popup_pane_g

0x1b71,	// (0x00021930) cell_large_graphic_colour_popup_pane_g2_copy1

0x1b7a,	// (0x00021939) grid_highlight_pane_cp4

0x1b82,	// (0x00021941) bg_popup_window_pane_cp8_ParamLimits

0x1b82,	// (0x00021941) bg_popup_window_pane_cp8

0x6e3d,	// (0x00026bfc) popup_snote_single_text_window_g1_ParamLimits

0x6e3d,	// (0x00026bfc) popup_snote_single_text_window_g1

0x6e4f,	// (0x00026c0e) popup_snote_single_text_window_t1_ParamLimits

0x6e4f,	// (0x00026c0e) popup_snote_single_text_window_t1

0x6e62,	// (0x00026c21) popup_snote_single_text_window_t2_ParamLimits

0x6e62,	// (0x00026c21) popup_snote_single_text_window_t2

0x6e75,	// (0x00026c34) popup_snote_single_text_window_t3_ParamLimits

0x6e75,	// (0x00026c34) popup_snote_single_text_window_t3

0x6eae,	// (0x00026c6d) popup_snote_single_text_window_t4_ParamLimits

0x6eae,	// (0x00026c6d) popup_snote_single_text_window_t4

0x6ee2,	// (0x00026ca1) popup_snote_single_text_window_t5_ParamLimits

0x6ee2,	// (0x00026ca1) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0002f340) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0002f340) popup_snote_single_text_window_t

0x1b9d,	// (0x0002195c) bg_popup_window_pane_cp9_ParamLimits

0x1b9d,	// (0x0002195c) bg_popup_window_pane_cp9

0x6e3d,	// (0x00026bfc) popup_snote_single_graphic_window_g1_ParamLimits

0x6e3d,	// (0x00026bfc) popup_snote_single_graphic_window_g1

0x1bab,	// (0x0002196a) popup_snote_single_graphic_window_g2_ParamLimits

0x1bab,	// (0x0002196a) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0002f34b) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0002f34b) popup_snote_single_graphic_window_g

0x1bb7,	// (0x00021976) popup_snote_single_graphic_window_t1_ParamLimits

0x1bb7,	// (0x00021976) popup_snote_single_graphic_window_t1

0x1bca,	// (0x00021989) popup_snote_single_graphic_window_t2_ParamLimits

0x1bca,	// (0x00021989) popup_snote_single_graphic_window_t2

0x6f11,	// (0x00026cd0) popup_snote_single_graphic_window_t3_ParamLimits

0x6f11,	// (0x00026cd0) popup_snote_single_graphic_window_t3

0x6f4a,	// (0x00026d09) popup_snote_single_graphic_window_t4_ParamLimits

0x6f4a,	// (0x00026d09) popup_snote_single_graphic_window_t4

0x6f7e,	// (0x00026d3d) popup_snote_single_graphic_window_t5_ParamLimits

0x6f7e,	// (0x00026d3d) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0002f350) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0002f350) popup_snote_single_graphic_window_t

0xb143,	// (0x0002af02) grid_graphic_popup_pane_ParamLimits

0xb143,	// (0x0002af02) grid_graphic_popup_pane

0xb16d,	// (0x0002af2c) listscroll_popup_graphic_pane_g1_ParamLimits

0xb16d,	// (0x0002af2c) listscroll_popup_graphic_pane_g1

0xb181,	// (0x0002af40) listscroll_popup_graphic_pane_g2_ParamLimits

0xb181,	// (0x0002af40) listscroll_popup_graphic_pane_g2

0x0001,

0xf977,	// (0x0002f736) listscroll_popup_graphic_pane_g_ParamLimits

0xf977,	// (0x0002f736) listscroll_popup_graphic_pane_g

0xb195,	// (0x0002af54) scroll_pane_cp5

0xb0d9,	// (0x0002ae98) cell_graphic_popup_pane_ParamLimits

0xb0d9,	// (0x0002ae98) cell_graphic_popup_pane

0xb0ba,	// (0x0002ae79) cell_graphic_popup_pane_g1

0xb0c2,	// (0x0002ae81) cell_graphic_popup_pane_g2

0x1b71,	// (0x00021930) cell_graphic_popup_pane_g3

0x0002,

0xf970,	// (0x0002f72f) cell_graphic_popup_pane_g

0xb0cb,	// (0x0002ae8a) cell_graphic_popup_pane_t2

0x1b7a,	// (0x00021939) grid_highlight_pane_cp3

0x1bef,	// (0x000219ae) list_gen_pane_ParamLimits

0x1bef,	// (0x000219ae) list_gen_pane

0x1c17,	// (0x000219d6) scroll_pane

0xb012,	// (0x0002add1) bg_list_pane_g1_ParamLimits

0xb012,	// (0x0002add1) bg_list_pane_g1

0xb02f,	// (0x0002adee) bg_list_pane_g2_ParamLimits

0xb02f,	// (0x0002adee) bg_list_pane_g2

0xb044,	// (0x0002ae03) bg_list_pane_g3_ParamLimits

0xb044,	// (0x0002ae03) bg_list_pane_g3

0xb058,	// (0x0002ae17) bg_list_pane_g4_ParamLimits

0xb058,	// (0x0002ae17) bg_list_pane_g4

0xb06c,	// (0x0002ae2b) bg_list_pane_g5_ParamLimits

0xb06c,	// (0x0002ae2b) bg_list_pane_g5

0x0004,

0xf965,	// (0x0002f724) bg_list_pane_g_ParamLimits

0xf965,	// (0x0002f724) bg_list_pane_g

0x5e30,	// (0x00025bef) list_double2_graphic_large_graphic_pane_ParamLimits

0x5e30,	// (0x00025bef) list_double2_graphic_large_graphic_pane

0x5e30,	// (0x00025bef) list_double2_graphic_pane_ParamLimits

0x5e30,	// (0x00025bef) list_double2_graphic_pane

0x5e30,	// (0x00025bef) list_double2_large_graphic_pane_ParamLimits

0x5e30,	// (0x00025bef) list_double2_large_graphic_pane

0x5e30,	// (0x00025bef) list_double2_pane_ParamLimits

0x5e30,	// (0x00025bef) list_double2_pane

0x5e30,	// (0x00025bef) list_double_graphic_heading_pane_ParamLimits

0x5e30,	// (0x00025bef) list_double_graphic_heading_pane

0x5e30,	// (0x00025bef) list_double_graphic_pane_ParamLimits

0x5e30,	// (0x00025bef) list_double_graphic_pane

0x5e30,	// (0x00025bef) list_double_heading_pane_ParamLimits

0x5e30,	// (0x00025bef) list_double_heading_pane

0x5e30,	// (0x00025bef) list_double_large_graphic_pane_ParamLimits

0x5e30,	// (0x00025bef) list_double_large_graphic_pane

0x5e30,	// (0x00025bef) list_double_number_pane_ParamLimits

0x5e30,	// (0x00025bef) list_double_number_pane

0x5e30,	// (0x00025bef) list_double_pane_ParamLimits

0x5e30,	// (0x00025bef) list_double_pane

0x5e30,	// (0x00025bef) list_double_time_pane_ParamLimits

0x5e30,	// (0x00025bef) list_double_time_pane

0x5e30,	// (0x00025bef) list_setting_number_pane_ParamLimits

0x5e30,	// (0x00025bef) list_setting_number_pane

0x5e30,	// (0x00025bef) list_setting_pane_ParamLimits

0x5e30,	// (0x00025bef) list_setting_pane

0x5e90,	// (0x00025c4f) list_single_2graphic_pane_ParamLimits

0x5e90,	// (0x00025c4f) list_single_2graphic_pane

0x5e90,	// (0x00025c4f) list_single_graphic_heading_pane_ParamLimits

0x5e90,	// (0x00025c4f) list_single_graphic_heading_pane

0x5e90,	// (0x00025c4f) list_single_graphic_pane_ParamLimits

0x5e90,	// (0x00025c4f) list_single_graphic_pane

0x5e90,	// (0x00025c4f) list_single_heading_pane_ParamLimits

0x5e90,	// (0x00025c4f) list_single_heading_pane

0xafef,	// (0x0002adae) list_single_large_graphic_pane_ParamLimits

0xafef,	// (0x0002adae) list_single_large_graphic_pane

0x5e90,	// (0x00025c4f) list_single_number_heading_pane_ParamLimits

0x5e90,	// (0x00025c4f) list_single_number_heading_pane

0x5e90,	// (0x00025c4f) list_single_number_pane_ParamLimits

0x5e90,	// (0x00025c4f) list_single_number_pane

0x5e90,	// (0x00025c4f) list_single_pane_ParamLimits

0x5e90,	// (0x00025c4f) list_single_pane

0x186f,	// (0x0002162e) list_highlight_pane_cp1

0x5582,	// (0x00025341) list_single_pane_g1_ParamLimits

0x5582,	// (0x00025341) list_single_pane_g1

0x558e,	// (0x0002534d) list_single_pane_g2_ParamLimits

0x558e,	// (0x0002534d) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0002f362) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0002f362) list_single_pane_g

0x5e1a,	// (0x00025bd9) list_single_pane_t1_ParamLimits

0x5e1a,	// (0x00025bd9) list_single_pane_t1

0x5582,	// (0x00025341) list_single_number_pane_g1_ParamLimits

0x5582,	// (0x00025341) list_single_number_pane_g1

0x558e,	// (0x0002534d) list_single_number_pane_g2_ParamLimits

0x558e,	// (0x0002534d) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0002f362) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0002f362) list_single_number_pane_g

0x559a,	// (0x00025359) list_single_number_pane_t1_ParamLimits

0x559a,	// (0x00025359) list_single_number_pane_t1

0x5ddc,	// (0x00025b9b) list_single_number_pane_t2_ParamLimits

0x5ddc,	// (0x00025b9b) list_single_number_pane_t2

0x0001,

0xf926,	// (0x0002f6e5) list_single_number_pane_t_ParamLimits

0xf926,	// (0x0002f6e5) list_single_number_pane_t

0x5576,	// (0x00025335) list_single_graphic_pane_g1_ParamLimits

0x5576,	// (0x00025335) list_single_graphic_pane_g1

0x5582,	// (0x00025341) list_single_graphic_pane_g2_ParamLimits

0x5582,	// (0x00025341) list_single_graphic_pane_g2

0x558e,	// (0x0002534d) list_single_graphic_pane_g3_ParamLimits

0x558e,	// (0x0002534d) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0002f35b) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0002f35b) list_single_graphic_pane_g

0x559a,	// (0x00025359) list_single_graphic_pane_t1_ParamLimits

0x559a,	// (0x00025359) list_single_graphic_pane_t1

0x5582,	// (0x00025341) list_single_heading_pane_g1_ParamLimits

0x5582,	// (0x00025341) list_single_heading_pane_g1

0x558e,	// (0x0002534d) list_single_heading_pane_g2_ParamLimits

0x558e,	// (0x0002534d) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002f362) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002f362) list_single_heading_pane_g

0x55b0,	// (0x0002536f) list_single_heading_pane_t1_ParamLimits

0x55b0,	// (0x0002536f) list_single_heading_pane_t1

0x55c6,	// (0x00025385) list_single_heading_pane_t2_ParamLimits

0x55c6,	// (0x00025385) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0002f367) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0002f367) list_single_heading_pane_t

0x5582,	// (0x00025341) list_single_number_heading_pane_g1_ParamLimits

0x5582,	// (0x00025341) list_single_number_heading_pane_g1

0x558e,	// (0x0002534d) list_single_number_heading_pane_g2_ParamLimits

0x558e,	// (0x0002534d) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002f362) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002f362) list_single_number_heading_pane_g

0x55b0,	// (0x0002536f) list_single_number_heading_pane_t1_ParamLimits

0x55b0,	// (0x0002536f) list_single_number_heading_pane_t1

0x55d8,	// (0x00025397) list_single_number_heading_pane_t2_ParamLimits

0x55d8,	// (0x00025397) list_single_number_heading_pane_t2

0x55ea,	// (0x000253a9) list_single_number_heading_pane_t3_ParamLimits

0x55ea,	// (0x000253a9) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0002f36c) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0002f36c) list_single_number_heading_pane_t

0x55fc,	// (0x000253bb) list_single_graphic_heading_pane_g1_ParamLimits

0x55fc,	// (0x000253bb) list_single_graphic_heading_pane_g1

0x5608,	// (0x000253c7) list_single_graphic_heading_pane_g4_ParamLimits

0x5608,	// (0x000253c7) list_single_graphic_heading_pane_g4

0x558e,	// (0x0002534d) list_single_graphic_heading_pane_g5_ParamLimits

0x558e,	// (0x0002534d) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0002f373) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0002f373) list_single_graphic_heading_pane_g

0x55b0,	// (0x0002536f) list_single_graphic_heading_pane_t1_ParamLimits

0x55b0,	// (0x0002536f) list_single_graphic_heading_pane_t1

0x5619,	// (0x000253d8) list_single_graphic_heading_pane_t2_ParamLimits

0x5619,	// (0x000253d8) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0002f37a) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0002f37a) list_single_graphic_heading_pane_t

0x562b,	// (0x000253ea) list_single_large_graphic_pane_g1_ParamLimits

0x562b,	// (0x000253ea) list_single_large_graphic_pane_g1

0x5637,	// (0x000253f6) list_single_large_graphic_pane_g2_ParamLimits

0x5637,	// (0x000253f6) list_single_large_graphic_pane_g2

0x5643,	// (0x00025402) list_single_large_graphic_pane_g3_ParamLimits

0x5643,	// (0x00025402) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0002f37f) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0002f37f) list_single_large_graphic_pane_g

0x8d2f,	// (0x00028aee) wait_border_pane_g2_copy1

0x564f,	// (0x0002540e) list_single_large_graphic_pane_g4_cp2

0x5657,	// (0x00025416) list_single_large_graphic_pane_t1_ParamLimits

0x5657,	// (0x00025416) list_single_large_graphic_pane_t1

0x566d,	// (0x0002542c) list_double_pane_g1_ParamLimits

0x566d,	// (0x0002542c) list_double_pane_g1

0x5679,	// (0x00025438) list_double_pane_g2_ParamLimits

0x5679,	// (0x00025438) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0002f386) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0002f386) list_double_pane_g

0x5685,	// (0x00025444) list_double_pane_t1_ParamLimits

0x5685,	// (0x00025444) list_double_pane_t1

0x569b,	// (0x0002545a) list_double_pane_t2_ParamLimits

0x569b,	// (0x0002545a) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0002f38b) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0002f38b) list_double_pane_t

0x56ad,	// (0x0002546c) list_double2_pane_g1_ParamLimits

0x56ad,	// (0x0002546c) list_double2_pane_g1

0x5679,	// (0x00025438) list_double2_pane_g2_ParamLimits

0x5679,	// (0x00025438) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0002f390) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0002f390) list_double2_pane_g

0x5685,	// (0x00025444) list_double2_pane_t1_ParamLimits

0x5685,	// (0x00025444) list_double2_pane_t1

0x56be,	// (0x0002547d) list_double2_pane_t2_ParamLimits

0x56be,	// (0x0002547d) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0002f395) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0002f395) list_double2_pane_t

0x566d,	// (0x0002542c) list_double_number_pane_g1_ParamLimits

0x566d,	// (0x0002542c) list_double_number_pane_g1

0x5679,	// (0x00025438) list_double_number_pane_g2_ParamLimits

0x5679,	// (0x00025438) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0002f386) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0002f386) list_double_number_pane_g

0x56d0,	// (0x0002548f) list_double_number_pane_t1_ParamLimits

0x56d0,	// (0x0002548f) list_double_number_pane_t1

0x56e2,	// (0x000254a1) list_double_number_pane_t2_ParamLimits

0x56e2,	// (0x000254a1) list_double_number_pane_t2

0x56f8,	// (0x000254b7) list_double_number_pane_t3_ParamLimits

0x56f8,	// (0x000254b7) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0002f39a) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0002f39a) list_double_number_pane_t

0x570a,	// (0x000254c9) list_double_graphic_pane_g1_ParamLimits

0x570a,	// (0x000254c9) list_double_graphic_pane_g1

0x5716,	// (0x000254d5) list_double_graphic_pane_g2_ParamLimits

0x5716,	// (0x000254d5) list_double_graphic_pane_g2

0x5725,	// (0x000254e4) list_double_graphic_pane_g3_ParamLimits

0x5725,	// (0x000254e4) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0002f3a1) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0002f3a1) list_double_graphic_pane_g

0x56e2,	// (0x000254a1) list_double_graphic_pane_t1_ParamLimits

0x56e2,	// (0x000254a1) list_double_graphic_pane_t1

0x56f8,	// (0x000254b7) list_double_graphic_pane_t2_ParamLimits

0x56f8,	// (0x000254b7) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0002f3aa) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0002f3aa) list_double_graphic_pane_t

0x570a,	// (0x000254c9) list_double2_graphic_pane_g1_ParamLimits

0x570a,	// (0x000254c9) list_double2_graphic_pane_g1

0x573d,	// (0x000254fc) list_double2_graphic_pane_g2_ParamLimits

0x573d,	// (0x000254fc) list_double2_graphic_pane_g2

0x5749,	// (0x00025508) list_double2_graphic_pane_g3_ParamLimits

0x5749,	// (0x00025508) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0002f3af) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0002f3af) list_double2_graphic_pane_g

0x56e2,	// (0x000254a1) list_double2_graphic_pane_t1_ParamLimits

0x56e2,	// (0x000254a1) list_double2_graphic_pane_t1

0x5755,	// (0x00025514) list_double2_graphic_pane_t2_ParamLimits

0x5755,	// (0x00025514) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0002f3b6) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0002f3b6) list_double2_graphic_pane_t

0x5767,	// (0x00025526) list_double_large_graphic_pane_g1_ParamLimits

0x5767,	// (0x00025526) list_double_large_graphic_pane_g1

0x56ad,	// (0x0002546c) list_double_large_graphic_pane_g2_ParamLimits

0x56ad,	// (0x0002546c) list_double_large_graphic_pane_g2

0x5679,	// (0x00025438) list_double_large_graphic_pane_g3_ParamLimits

0x5679,	// (0x00025438) list_double_large_graphic_pane_g3

0x577a,	// (0x00025539) list_double_large_graphic_pane_g4_ParamLimits

0x577a,	// (0x00025539) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0002f3bb) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0002f3bb) list_double_large_graphic_pane_g

0x57a1,	// (0x00025560) list_double_large_graphic_pane_t1_ParamLimits

0x57a1,	// (0x00025560) list_double_large_graphic_pane_t1

0x57ba,	// (0x00025579) list_double_large_graphic_pane_t2_ParamLimits

0x57ba,	// (0x00025579) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0002f3c6) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0002f3c6) list_double_large_graphic_pane_t

0x57cc,	// (0x0002558b) list_double2_large_graphic_pane_g1_ParamLimits

0x57cc,	// (0x0002558b) list_double2_large_graphic_pane_g1

0x56ad,	// (0x0002546c) list_double2_large_graphic_pane_g2_ParamLimits

0x56ad,	// (0x0002546c) list_double2_large_graphic_pane_g2

0x5679,	// (0x00025438) list_double2_large_graphic_pane_g3_ParamLimits

0x5679,	// (0x00025438) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0002f3cb) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0002f3cb) list_double2_large_graphic_pane_g

0x56e2,	// (0x000254a1) list_double2_large_graphic_pane_t1_ParamLimits

0x56e2,	// (0x000254a1) list_double2_large_graphic_pane_t1

0x5755,	// (0x00025514) list_double2_large_graphic_pane_t2_ParamLimits

0x5755,	// (0x00025514) list_double2_large_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0002f3b6) list_double2_large_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0002f3b6) list_double2_large_graphic_pane_t

0x57d8,	// (0x00025597) list_double_heading_pane_g1_ParamLimits

0x57d8,	// (0x00025597) list_double_heading_pane_g1

0x57e9,	// (0x000255a8) list_double_heading_pane_g2_ParamLimits

0x57e9,	// (0x000255a8) list_double_heading_pane_g2

0x0001,

0xf613,	// (0x0002f3d2) list_double_heading_pane_g_ParamLimits

0xf613,	// (0x0002f3d2) list_double_heading_pane_g

0x57f5,	// (0x000255b4) list_double_heading_pane_t1_ParamLimits

0x57f5,	// (0x000255b4) list_double_heading_pane_t1

0x5755,	// (0x00025514) list_double_heading_pane_t2_ParamLimits

0x5755,	// (0x00025514) list_double_heading_pane_t2

0x0001,

0xf618,	// (0x0002f3d7) list_double_heading_pane_t_ParamLimits

0xf618,	// (0x0002f3d7) list_double_heading_pane_t

0x580b,	// (0x000255ca) list_double_graphic_heading_pane_g1_ParamLimits

0x580b,	// (0x000255ca) list_double_graphic_heading_pane_g1

0x57d8,	// (0x00025597) list_double_graphic_heading_pane_g2_ParamLimits

0x57d8,	// (0x00025597) list_double_graphic_heading_pane_g2

0x57e9,	// (0x000255a8) list_double_graphic_heading_pane_g3_ParamLimits

0x57e9,	// (0x000255a8) list_double_graphic_heading_pane_g3

0x0002,

0xf61d,	// (0x0002f3dc) list_double_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0002f3dc) list_double_graphic_heading_pane_g

0x57f5,	// (0x000255b4) list_double_graphic_heading_pane_t1_ParamLimits

0x57f5,	// (0x000255b4) list_double_graphic_heading_pane_t1

0x5755,	// (0x00025514) list_double_graphic_heading_pane_t2_ParamLimits

0x5755,	// (0x00025514) list_double_graphic_heading_pane_t2

0x0001,

0xf618,	// (0x0002f3d7) list_double_graphic_heading_pane_t_ParamLimits

0xf618,	// (0x0002f3d7) list_double_graphic_heading_pane_t

0x56ad,	// (0x0002546c) list_double_time_pane_g1_ParamLimits

0x56ad,	// (0x0002546c) list_double_time_pane_g1

0x5679,	// (0x00025438) list_double_time_pane_g2_ParamLimits

0x5679,	// (0x00025438) list_double_time_pane_g2

0x0001,

0xf5d1,	// (0x0002f390) list_double_time_pane_g_ParamLimits

0xf5d1,	// (0x0002f390) list_double_time_pane_g

0x5817,	// (0x000255d6) list_double_time_pane_t1_ParamLimits

0x5817,	// (0x000255d6) list_double_time_pane_t1

0x582d,	// (0x000255ec) list_double_time_pane_t2_ParamLimits

0x582d,	// (0x000255ec) list_double_time_pane_t2

0x583f,	// (0x000255fe) list_double_time_pane_t3_ParamLimits

0x583f,	// (0x000255fe) list_double_time_pane_t3

0x5851,	// (0x00025610) list_double_time_pane_t4_ParamLimits

0x5851,	// (0x00025610) list_double_time_pane_t4

0x0003,

0xf624,	// (0x0002f3e3) list_double_time_pane_t_ParamLimits

0xf624,	// (0x0002f3e3) list_double_time_pane_t

0x5863,	// (0x00025622) list_setting_pane_g1_ParamLimits

0x5863,	// (0x00025622) list_setting_pane_g1

0x586f,	// (0x0002562e) list_setting_pane_g2_ParamLimits

0x586f,	// (0x0002562e) list_setting_pane_g2

0x0001,

0xf62d,	// (0x0002f3ec) list_setting_pane_g_ParamLimits

0xf62d,	// (0x0002f3ec) list_setting_pane_g

0x587b,	// (0x0002563a) list_setting_pane_t1_ParamLimits

0x587b,	// (0x0002563a) list_setting_pane_t1

0x5892,	// (0x00025651) list_setting_pane_t2_ParamLimits

0x5892,	// (0x00025651) list_setting_pane_t2

0x0002,

0xf632,	// (0x0002f3f1) list_setting_pane_t_ParamLimits

0xf632,	// (0x0002f3f1) list_setting_pane_t

0x58cf,	// (0x0002568e) set_value_pane_cp_ParamLimits

0x58cf,	// (0x0002568e) set_value_pane_cp

0x58db,	// (0x0002569a) list_setting_number_pane_g1_ParamLimits

0x58db,	// (0x0002569a) list_setting_number_pane_g1

0x58e7,	// (0x000256a6) list_setting_number_pane_g2_ParamLimits

0x58e7,	// (0x000256a6) list_setting_number_pane_g2

0x0001,

0xf639,	// (0x0002f3f8) list_setting_number_pane_g_ParamLimits

0xf639,	// (0x0002f3f8) list_setting_number_pane_g

0x58f3,	// (0x000256b2) list_setting_number_pane_t1_ParamLimits

0x58f3,	// (0x000256b2) list_setting_number_pane_t1

0x5907,	// (0x000256c6) list_setting_number_pane_t2_ParamLimits

0x5907,	// (0x000256c6) list_setting_number_pane_t2

0x591e,	// (0x000256dd) list_setting_number_pane_t3_ParamLimits

0x591e,	// (0x000256dd) list_setting_number_pane_t3

0x0003,

0xf63e,	// (0x0002f3fd) list_setting_number_pane_t_ParamLimits

0xf63e,	// (0x0002f3fd) list_setting_number_pane_t

0x58cf,	// (0x0002568e) set_value_pane_ParamLimits

0x58cf,	// (0x0002568e) set_value_pane

0x1c84,	// (0x00021a43) bg_set_opt_pane_ParamLimits

0x1c84,	// (0x00021a43) bg_set_opt_pane

0x5961,	// (0x00025720) set_value_pane_t1

0x1cb3,	// (0x00021a72) slider_set_pane_cp3

0x6fb7,	// (0x00026d76) volume_small_pane_cp

0x1cbc,	// (0x00021a7b) list_form_gen_pane

0x1cc5,	// (0x00021a84) scroll_pane_cp8

0x5977,	// (0x00025736) form_field_data_pane_ParamLimits

0x5977,	// (0x00025736) form_field_data_pane

0x5997,	// (0x00025756) form_field_data_wide_pane_ParamLimits

0x5997,	// (0x00025756) form_field_data_wide_pane

0x59b8,	// (0x00025777) form_field_popup_pane_ParamLimits

0x59b8,	// (0x00025777) form_field_popup_pane

0x59d6,	// (0x00025795) form_field_popup_wide_pane_ParamLimits

0x59d6,	// (0x00025795) form_field_popup_wide_pane

0x59f3,	// (0x000257b2) form_field_slider_pane_ParamLimits

0x59f3,	// (0x000257b2) form_field_slider_pane

0x5a06,	// (0x000257c5) form_field_slider_wide_pane_ParamLimits

0x5a06,	// (0x000257c5) form_field_slider_wide_pane

0x1cf9,	// (0x00021ab8) data_form_pane

0x5a23,	// (0x000257e2) form_field_data_pane_t1

0x1d05,	// (0x00021ac4) input_focus_pane

0x5a3b,	// (0x000257fa) data_form_wide_pane

0x5a58,	// (0x00025817) form_field_data_wide_pane_t1

0x1b8f,	// (0x0002194e) input_focus_pane_cp6

0x5a7a,	// (0x00025839) form_field_popup_pane_t1

0x1d05,	// (0x00021ac4) input_focus_pane_cp7

0x1d72,	// (0x00021b31) list_form_pane

0x5a9a,	// (0x00025859) form_field_popup_wide_pane_t1

0x1d05,	// (0x00021ac4) input_focus_pane_cp8

0x1d9b,	// (0x00021b5a) list_form_wide_pane

0x5ab7,	// (0x00025876) form_field_slider_pane_t1_ParamLimits

0x5ab7,	// (0x00025876) form_field_slider_pane_t1

0x5acd,	// (0x0002588c) form_field_slider_pane_t2_ParamLimits

0x5acd,	// (0x0002588c) form_field_slider_pane_t2

0x0001,

0xf64e,	// (0x0002f40d) form_field_slider_pane_t_ParamLimits

0xf64e,	// (0x0002f40d) form_field_slider_pane_t

0x18bd,	// (0x0002167c) input_focus_pane_cp9_ParamLimits

0x18bd,	// (0x0002167c) input_focus_pane_cp9

0x5ae2,	// (0x000258a1) slider_cont_pane_ParamLimits

0x5ae2,	// (0x000258a1) slider_cont_pane

0x1da7,	// (0x00021b66) form_field_slider_wide_pane_t1_ParamLimits

0x1da7,	// (0x00021b66) form_field_slider_wide_pane_t1

0x5af6,	// (0x000258b5) form_field_slider_wide_pane_t2_ParamLimits

0x5af6,	// (0x000258b5) form_field_slider_wide_pane_t2

0x0001,

0xf653,	// (0x0002f412) form_field_slider_wide_pane_t_ParamLimits

0xf653,	// (0x0002f412) form_field_slider_wide_pane_t

0x18bd,	// (0x0002167c) input_focus_pane_cp10_ParamLimits

0x18bd,	// (0x0002167c) input_focus_pane_cp10

0x5b08,	// (0x000258c7) slider_cont_pane_cp1_ParamLimits

0x5b08,	// (0x000258c7) slider_cont_pane_cp1

0x5b1c,	// (0x000258db) slider_form_pane_cp

0x1dcb,	// (0x00021b8a) input_focus_pane_g1

0x1dd3,	// (0x00021b92) input_focus_pane_g2

0x1ddb,	// (0x00021b9a) input_focus_pane_g3

0x1de3,	// (0x00021ba2) input_focus_pane_g4

0x1deb,	// (0x00021baa) input_focus_pane_g5

0x1df3,	// (0x00021bb2) input_focus_pane_g6

0x1dfb,	// (0x00021bba) input_focus_pane_g7

0x1e03,	// (0x00021bc2) input_focus_pane_g8

0x1e0b,	// (0x00021bca) input_focus_pane_g9

0x1865,	// (0x00021624) input_focus_pane_g10

0x0009,

0xf658,	// (0x0002f417) input_focus_pane_g

0x8d38,	// (0x00028af7) wait_border_pane_g3_copy1

0x5b24,	// (0x000258e3) data_form_pane_t1

0x1865,	// (0x00021624) wait_anim_pane_g1_copy1

0x5dee,	// (0x00025bad) data_form_wide_pane_t1

0x5b3f,	// (0x000258fe) list_form_graphic_pane_cp_ParamLimits

0x5b3f,	// (0x000258fe) list_form_graphic_pane_cp

0xaf45,	// (0x0002ad04) slider_form_pane_g1

0xaf4e,	// (0x0002ad0d) slider_form_pane_g2

0x0006,

0xf956,	// (0x0002f715) slider_form_pane_g

0x5b53,	// (0x00025912) list_form_graphic_pane_ParamLimits

0x5b53,	// (0x00025912) list_form_graphic_pane

0x5b6a,	// (0x00025929) list_form_graphic_pane_g1

0x5b72,	// (0x00025931) list_form_graphic_pane_t1_ParamLimits

0x5b72,	// (0x00025931) list_form_graphic_pane_t1

0x18cb,	// (0x0002168a) list_highlight_pane_cp5_ParamLimits

0x18cb,	// (0x0002168a) list_highlight_pane_cp5

0x5b87,	// (0x00025946) find_pane_g1

0x1e13,	// (0x00021bd2) input_find_pane

0x5b90,	// (0x0002594f) input_find_pane_g1_ParamLimits

0x5b90,	// (0x0002594f) input_find_pane_g1

0x5b9c,	// (0x0002595b) input_find_pane_t1_ParamLimits

0x5b9c,	// (0x0002595b) input_find_pane_t1

0x5bb1,	// (0x00025970) input_find_pane_t2_ParamLimits

0x5bb1,	// (0x00025970) input_find_pane_t2

0x0001,

0xf66d,	// (0x0002f42c) input_find_pane_t_ParamLimits

0xf66d,	// (0x0002f42c) input_find_pane_t

0x1e1c,	// (0x00021bdb) input_focus_pane_cp5_ParamLimits

0x1e1c,	// (0x00021bdb) input_focus_pane_cp5

0x1e2f,	// (0x00021bee) bg_popup_window_pane_cp2_ParamLimits

0x1e2f,	// (0x00021bee) bg_popup_window_pane_cp2

0x1e3c,	// (0x00021bfb) listscroll_menu_pane_ParamLimits

0x1e3c,	// (0x00021bfb) listscroll_menu_pane

0x6fcc,	// (0x00026d8b) popup_submenu_window_ParamLimits

0x6fcc,	// (0x00026d8b) popup_submenu_window

0x1e48,	// (0x00021c07) find_popup_pane_g1

0x6ff4,	// (0x00026db3) input_popup_find_pane_cp

0x1e50,	// (0x00021c0f) input_focus_pane_cp4_ParamLimits

0x1e50,	// (0x00021c0f) input_focus_pane_cp4

0x1e5e,	// (0x00021c1d) input_popup_find_pane_t1_ParamLimits

0x1e5e,	// (0x00021c1d) input_popup_find_pane_t1

0x186f,	// (0x0002162e) bg_popup_sub_pane_cp

0x1e8c,	// (0x00021c4b) listscroll_popup_sub_pane

0x1e94,	// (0x00021c53) list_submenu_pane_ParamLimits

0x1e94,	// (0x00021c53) list_submenu_pane

0x1ea5,	// (0x00021c64) scroll_pane_cp4

0x700c,	// (0x00026dcb) list_single_popup_submenu_pane_ParamLimits

0x700c,	// (0x00026dcb) list_single_popup_submenu_pane

0x2792,	// (0x00022551) list_single_popup_submenu_pane_g1

0x7020,	// (0x00026ddf) list_single_popup_submenu_pane_t1_ParamLimits

0x7020,	// (0x00026ddf) list_single_popup_submenu_pane_t1

0x18cb,	// (0x0002168a) bg_active_tab_pane_cp1_ParamLimits

0x18cb,	// (0x0002168a) bg_active_tab_pane_cp1

0x1ead,	// (0x00021c6c) tabs_2_active_pane_g1

0x7035,	// (0x00026df4) tabs_2_active_pane_t1

0x18cb,	// (0x0002168a) bg_passive_tab_pane_cp1_ParamLimits

0x18cb,	// (0x0002168a) bg_passive_tab_pane_cp1

0x1ead,	// (0x00021c6c) tabs_2_passive_pane_g1

0x7035,	// (0x00026df4) tabs_2_passive_pane_t1

0x7047,	// (0x00026e06) bg_active_tab_pane_cp4

0x7055,	// (0x00026e14) tabs_2_long_active_pane_t1

0x7068,	// (0x00026e27) bg_passive_tab_pane_cp4

0x8661,	// (0x00028420) list_single_midp_graphic_pane_g4_ParamLimits

0x7047,	// (0x00026e06) bg_active_tab_pane_cp5

0x7074,	// (0x00026e33) tabs_3_long_active_pane_t1

0x7068,	// (0x00026e27) bg_passive_tab_pane_cp5

0x8661,	// (0x00028420) list_single_midp_graphic_pane_g4

0x18cb,	// (0x0002168a) bg_popup_window_pane_cp13_ParamLimits

0x18cb,	// (0x0002168a) bg_popup_window_pane_cp13

0x1ec1,	// (0x00021c80) listscroll_popup_fast_pane_ParamLimits

0x1ec1,	// (0x00021c80) listscroll_popup_fast_pane

0x1ecd,	// (0x00021c8c) grid_popup_fast_pane_ParamLimits

0x1ecd,	// (0x00021c8c) grid_popup_fast_pane

0x1edf,	// (0x00021c9e) scroll_pane_cp9_ParamLimits

0x1edf,	// (0x00021c9e) scroll_pane_cp9

0xc87e,	// (0x0002c63d) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc87e,	// (0x0002c63d) list_single_graphic_hl_pane_t1_cp2

0x1ef2,	// (0x00021cb1) input_focus_pane_cp20_ParamLimits

0x1ef2,	// (0x00021cb1) input_focus_pane_cp20

0x1f00,	// (0x00021cbf) query_popup_data_pane_t1_ParamLimits

0x1f00,	// (0x00021cbf) query_popup_data_pane_t1

0x1f13,	// (0x00021cd2) query_popup_data_pane_t2_ParamLimits

0x1f13,	// (0x00021cd2) query_popup_data_pane_t2

0x1f59,	// (0x00021d18) query_popup_data_pane_t3_ParamLimits

0x1f59,	// (0x00021d18) query_popup_data_pane_t3

0x1f9a,	// (0x00021d59) query_popup_data_pane_t4_ParamLimits

0x1f9a,	// (0x00021d59) query_popup_data_pane_t4

0x1fd6,	// (0x00021d95) query_popup_data_pane_t5_ParamLimits

0x1fd6,	// (0x00021d95) query_popup_data_pane_t5

0x0004,

0xf672,	// (0x0002f431) query_popup_data_pane_t_ParamLimits

0xf672,	// (0x0002f431) query_popup_data_pane_t

0x1dcb,	// (0x00021b8a) bg_set_opt_pane_g1

0x1dd3,	// (0x00021b92) bg_set_opt_pane_g2

0x1ddb,	// (0x00021b9a) bg_set_opt_pane_g3

0x1de3,	// (0x00021ba2) bg_set_opt_pane_g4

0x1deb,	// (0x00021baa) bg_set_opt_pane_g5

0x1df3,	// (0x00021bb2) bg_set_opt_pane_g6

0x1dfb,	// (0x00021bba) bg_set_opt_pane_g7

0x1e03,	// (0x00021bc2) bg_set_opt_pane_g8

0x1e0b,	// (0x00021bca) bg_set_opt_pane_g9

0x0008,

0xf67d,	// (0x0002f43c) bg_set_opt_pane_g

0x755f,	// (0x0002731e) control_top_pane_stacon_ParamLimits

0x755f,	// (0x0002731e) control_top_pane_stacon

0x75b2,	// (0x00027371) signal_pane_stacon_ParamLimits

0x75b2,	// (0x00027371) signal_pane_stacon

0x2362,	// (0x00022121) stacon_top_pane_g1_ParamLimits

0x2362,	// (0x00022121) stacon_top_pane_g1

0x75d7,	// (0x00027396) title_pane_stacon_ParamLimits

0x75d7,	// (0x00027396) title_pane_stacon

0x7601,	// (0x000273c0) uni_indicator_pane_stacon_ParamLimits

0x7601,	// (0x000273c0) uni_indicator_pane_stacon

0x7616,	// (0x000273d5) battery_pane_stacon_ParamLimits

0x7616,	// (0x000273d5) battery_pane_stacon

0x765a,	// (0x00027419) control_bottom_pane_stacon_ParamLimits

0x765a,	// (0x00027419) control_bottom_pane_stacon

0x767d,	// (0x0002743c) navi_pane_stacon_ParamLimits

0x767d,	// (0x0002743c) navi_pane_stacon

0x2384,	// (0x00022143) stacon_bottom_pane_g1_ParamLimits

0x2384,	// (0x00022143) stacon_bottom_pane_g1

0x70a0,	// (0x00026e5f) aid_levels_signal_lsc_ParamLimits

0x70a0,	// (0x00026e5f) aid_levels_signal_lsc

0x70b6,	// (0x00026e75) signal_pane_stacon_g1_ParamLimits

0x70b6,	// (0x00026e75) signal_pane_stacon_g1

0x70ca,	// (0x00026e89) signal_pane_stacon_g2_ParamLimits

0x70ca,	// (0x00026e89) signal_pane_stacon_g2

0x0001,

0xf690,	// (0x0002f44f) signal_pane_stacon_g_ParamLimits

0xf690,	// (0x0002f44f) signal_pane_stacon_g

0x70ff,	// (0x00026ebe) title_pane_stacon_t1_ParamLimits

0x70ff,	// (0x00026ebe) title_pane_stacon_t1

0x202e,	// (0x00021ded) uni_indicator_pane_stacon_g1

0x2038,	// (0x00021df7) uni_indicator_pane_stacon_g2

0x201a,	// (0x00021dd9) uni_indicator_pane_stacon_g3

0x2024,	// (0x00021de3) uni_indicator_pane_stacon_g4

0x0003,

0xf69c,	// (0x0002f45b) uni_indicator_pane_stacon_g

0x7124,	// (0x00026ee3) control_top_pane_stacon_g1

0x712c,	// (0x00026eeb) control_top_pane_stacon_t1_ParamLimits

0x712c,	// (0x00026eeb) control_top_pane_stacon_t1

0x7163,	// (0x00026f22) aid_levels_battery_lsc_ParamLimits

0x7163,	// (0x00026f22) aid_levels_battery_lsc

0x717a,	// (0x00026f39) battery_pane_stacon_g1_ParamLimits

0x717a,	// (0x00026f39) battery_pane_stacon_g1

0x718d,	// (0x00026f4c) battery_pane_stacon_g2_ParamLimits

0x718d,	// (0x00026f4c) battery_pane_stacon_g2

0x0001,

0xf6a5,	// (0x0002f464) battery_pane_stacon_g_ParamLimits

0xf6a5,	// (0x0002f464) battery_pane_stacon_g

0x71cb,	// (0x00026f8a) navi_icon_pane_stacon

0x71df,	// (0x00026f9e) navi_navi_pane_stacon

0x71cb,	// (0x00026f8a) navi_text_pane_stacon

0x7124,	// (0x00026ee3) control_bottom_pane_stacon_g1

0x71f3,	// (0x00026fb2) control_bottom_pane_stacon_t1_ParamLimits

0x71f3,	// (0x00026fb2) control_bottom_pane_stacon_t1

0x722a,	// (0x00026fe9) grid_app_pane_ParamLimits

0x722a,	// (0x00026fe9) grid_app_pane

0x724c,	// (0x0002700b) scroll_pane_cp15_ParamLimits

0x724c,	// (0x0002700b) scroll_pane_cp15

0x725f,	// (0x0002701e) cell_app_pane_ParamLimits

0x725f,	// (0x0002701e) cell_app_pane

0x7287,	// (0x00027046) cell_app_pane_g1_ParamLimits

0x7287,	// (0x00027046) cell_app_pane_g1

0x205c,	// (0x00021e1b) cell_app_pane_g2_ParamLimits

0x205c,	// (0x00021e1b) cell_app_pane_g2

0x0001,

0xf6aa,	// (0x0002f469) cell_app_pane_g_ParamLimits

0xf6aa,	// (0x0002f469) cell_app_pane_g

0x72ab,	// (0x0002706a) cell_app_pane_t1_ParamLimits

0x72ab,	// (0x0002706a) cell_app_pane_t1

0x2068,	// (0x00021e27) grid_highlight_pane_ParamLimits

0x2068,	// (0x00021e27) grid_highlight_pane

0x1dcb,	// (0x00021b8a) cell_highlight_pane_g1

0x1dd3,	// (0x00021b92) cell_highlight_pane_g2

0x1ddb,	// (0x00021b9a) cell_highlight_pane_g3

0x1de3,	// (0x00021ba2) cell_highlight_pane_g4

0x1deb,	// (0x00021baa) cell_highlight_pane_g5

0x1df3,	// (0x00021bb2) cell_highlight_pane_g6

0x1dfb,	// (0x00021bba) cell_highlight_pane_g7

0x1e03,	// (0x00021bc2) cell_highlight_pane_g8

0x1e0b,	// (0x00021bca) cell_highlight_pane_g9

0x1865,	// (0x00021624) cell_highlight_pane_g10

0x0009,

0xf658,	// (0x0002f417) cell_highlight_pane_g

0x2079,	// (0x00021e38) bg_scroll_pane

0x72d5,	// (0x00027094) scroll_handle_pane

0x20c0,	// (0x00021e7f) scroll_bg_pane_g1

0x20d5,	// (0x00021e94) scroll_bg_pane_g2

0x20ed,	// (0x00021eac) scroll_bg_pane_g3

0x0002,

0xf6af,	// (0x0002f46e) scroll_bg_pane_g

0x72fe,	// (0x000270bd) scroll_handle_focus_pane_ParamLimits

0x72fe,	// (0x000270bd) scroll_handle_focus_pane

0x20c0,	// (0x00021e7f) scroll_handle_pane_g1

0x2102,	// (0x00021ec1) scroll_handle_pane_g2

0x20ed,	// (0x00021eac) scroll_handle_pane_g3

0x0002,

0xf6b6,	// (0x0002f475) scroll_handle_pane_g

0x1e50,	// (0x00021c0f) bg_popup_sub_pane_cp21_ParamLimits

0x1e50,	// (0x00021c0f) bg_popup_sub_pane_cp21

0x730b,	// (0x000270ca) popup_fep_japan_predictive_window_t1_ParamLimits

0x730b,	// (0x000270ca) popup_fep_japan_predictive_window_t1

0x7325,	// (0x000270e4) popup_fep_japan_predictive_window_t2_ParamLimits

0x7325,	// (0x000270e4) popup_fep_japan_predictive_window_t2

0x7358,	// (0x00027117) popup_fep_japan_predictive_window_t3_ParamLimits

0x7358,	// (0x00027117) popup_fep_japan_predictive_window_t3

0x0002,

0xf6bd,	// (0x0002f47c) popup_fep_japan_predictive_window_t_ParamLimits

0xf6bd,	// (0x0002f47c) popup_fep_japan_predictive_window_t

0x186f,	// (0x0002162e) bg_popup_sub_pane_cp23

0x2810,	// (0x000225cf) listscroll_japin_cand_pane

0x2116,	// (0x00021ed5) popup_fep_japan_candidate_window_t1

0x2124,	// (0x00021ee3) candidate_pane_ParamLimits

0x2124,	// (0x00021ee3) candidate_pane

0x738f,	// (0x0002714e) scroll_pane_cp30

0x2136,	// (0x00021ef5) list_single_popup_jap_candidate_pane_ParamLimits

0x2136,	// (0x00021ef5) list_single_popup_jap_candidate_pane

0x186f,	// (0x0002162e) list_highlight_pane_cp30

0x214b,	// (0x00021f0a) list_single_popup_jap_candidate_pane_t1

0x215a,	// (0x00021f19) level_1_signal

0x2167,	// (0x00021f26) level_2_signal

0x2174,	// (0x00021f33) level_3_signal

0x2181,	// (0x00021f40) level_4_signal

0x218e,	// (0x00021f4d) level_5_signal

0x219b,	// (0x00021f5a) level_6_signal

0x21a8,	// (0x00021f67) level_7_signal

0x215a,	// (0x00021f19) level_1_battery

0x2167,	// (0x00021f26) level_2_battery

0x2174,	// (0x00021f33) level_3_battery

0x2181,	// (0x00021f40) level_4_battery

0x218e,	// (0x00021f4d) level_5_battery

0x219b,	// (0x00021f5a) level_6_battery

0x21a8,	// (0x00021f67) level_7_battery

0x21cd,	// (0x00021f8c) list_menu_pane_ParamLimits

0x21cd,	// (0x00021f8c) list_menu_pane

0x21e3,	// (0x00021fa2) scroll_pane_cp25_ParamLimits

0x21e3,	// (0x00021fa2) scroll_pane_cp25

0x21fc,	// (0x00021fbb) list_double2_graphic_pane_cp2_ParamLimits

0x21fc,	// (0x00021fbb) list_double2_graphic_pane_cp2

0x21fc,	// (0x00021fbb) list_double2_large_graphic_pane_cp2_ParamLimits

0x21fc,	// (0x00021fbb) list_double2_large_graphic_pane_cp2

0x21fc,	// (0x00021fbb) list_double2_pane_cp2_ParamLimits

0x21fc,	// (0x00021fbb) list_double2_pane_cp2

0x21fc,	// (0x00021fbb) list_double_graphic_pane_cp2_ParamLimits

0x21fc,	// (0x00021fbb) list_double_graphic_pane_cp2

0x21fc,	// (0x00021fbb) list_double_large_graphic_pane_cp2_ParamLimits

0x21fc,	// (0x00021fbb) list_double_large_graphic_pane_cp2

0x21fc,	// (0x00021fbb) list_double_number_pane_cp2_ParamLimits

0x21fc,	// (0x00021fbb) list_double_number_pane_cp2

0x21fc,	// (0x00021fbb) list_double_pane_cp2_ParamLimits

0x21fc,	// (0x00021fbb) list_double_pane_cp2

0x73ca,	// (0x00027189) list_single_2graphic_pane_cp2_ParamLimits

0x73ca,	// (0x00027189) list_single_2graphic_pane_cp2

0x73ca,	// (0x00027189) list_single_graphic_heading_pane_cp2_ParamLimits

0x73ca,	// (0x00027189) list_single_graphic_heading_pane_cp2

0x73ca,	// (0x00027189) list_single_graphic_pane_cp2_ParamLimits

0x73ca,	// (0x00027189) list_single_graphic_pane_cp2

0x73ca,	// (0x00027189) list_single_heading_pane_cp2_ParamLimits

0x73ca,	// (0x00027189) list_single_heading_pane_cp2

0x220c,	// (0x00021fcb) list_single_large_graphic_pane_cp2_ParamLimits

0x220c,	// (0x00021fcb) list_single_large_graphic_pane_cp2

0x73ca,	// (0x00027189) list_single_number_heading_pane_cp2_ParamLimits

0x73ca,	// (0x00027189) list_single_number_heading_pane_cp2

0x73ca,	// (0x00027189) list_single_number_pane_cp2_ParamLimits

0x73ca,	// (0x00027189) list_single_number_pane_cp2

0x73ca,	// (0x00027189) list_single_pane_cp2_ParamLimits

0x73ca,	// (0x00027189) list_single_pane_cp2

0x2226,	// (0x00021fe5) bg_popup_sub_pane_cp22

0x74a2,	// (0x00027261) popup_side_volume_key_window_g1

0x74c6,	// (0x00027285) popup_side_volume_key_window_t1

0x74e2,	// (0x000272a1) volume_small_pane_cp1

0x18bd,	// (0x0002167c) bg_popup_sub_pane_cp24_ParamLimits

0x18bd,	// (0x0002167c) bg_popup_sub_pane_cp24

0x223c,	// (0x00021ffb) fep_china_uni_candidate_pane_ParamLimits

0x223c,	// (0x00021ffb) fep_china_uni_candidate_pane

0x2250,	// (0x0002200f) fep_china_uni_entry_pane

0x2260,	// (0x0002201f) popup_fep_china_uni_window_g1

0x74ea,	// (0x000272a9) fep_china_uni_entry_pane_g1

0x74f2,	// (0x000272b1) fep_china_uni_entry_pane_g2

0x0001,

0xf6ee,	// (0x0002f4ad) fep_china_uni_entry_pane_g

0x227c,	// (0x0002203b) fep_entry_item_pane

0x2286,	// (0x00022045) fep_candidate_item_pane

0x74fa,	// (0x000272b9) fep_china_uni_candidate_pane_g1

0x228e,	// (0x0002204d) fep_china_uni_candidate_pane_g2

0x2296,	// (0x00022055) fep_china_uni_candidate_pane_g3

0x7502,	// (0x000272c1) fep_china_uni_candidate_pane_g4

0x0003,

0xf6f3,	// (0x0002f4b2) fep_china_uni_candidate_pane_g

0x1865,	// (0x00021624) fep_entry_item_pane_g1

0x229e,	// (0x0002205d) fep_entry_item_pane_t1_ParamLimits

0x229e,	// (0x0002205d) fep_entry_item_pane_t1

0x22b4,	// (0x00022073) fep_candidate_item_pane_t1_ParamLimits

0x22b4,	// (0x00022073) fep_candidate_item_pane_t1

0x22c9,	// (0x00022088) fep_candidate_item_pane_t2_ParamLimits

0x22c9,	// (0x00022088) fep_candidate_item_pane_t2

0x0001,

0xf6fc,	// (0x0002f4bb) fep_candidate_item_pane_t_ParamLimits

0xf6fc,	// (0x0002f4bb) fep_candidate_item_pane_t

0x18cb,	// (0x0002168a) list_highlight_pane_cp31_ParamLimits

0x18cb,	// (0x0002168a) list_highlight_pane_cp31

0x22db,	// (0x0002209a) level_1_signal_lsc

0x22e4,	// (0x000220a3) level_2_signal_lsc

0x22ed,	// (0x000220ac) level_3_signal_lsc

0x22f6,	// (0x000220b5) level_4_signal_lsc

0x22ff,	// (0x000220be) level_5_signal_lsc

0x2308,	// (0x000220c7) level_6_signal_lsc

0x2311,	// (0x000220d0) level_7_signal_lsc

0x2311,	// (0x000220d0) level_1_battery_lsc

0x231a,	// (0x000220d9) level_2_battery_lsc

0x2323,	// (0x000220e2) level_3_battery_lsc

0x232c,	// (0x000220eb) level_4_battery_lsc

0x2335,	// (0x000220f4) level_5_battery_lsc

0x233e,	// (0x000220fd) level_6_battery_lsc

0x22db,	// (0x0002209a) level_7_battery_lsc

0x2347,	// (0x00022106) scroll_handle_focus_pane_g1

0x2350,	// (0x0002210f) scroll_handle_focus_pane_g2

0x2359,	// (0x00022118) scroll_handle_focus_pane_g3

0x0002,

0xf701,	// (0x0002f4c0) scroll_handle_focus_pane_g

0x5bc6,	// (0x00025985) list_single_2graphic_pane_g1_ParamLimits

0x5bc6,	// (0x00025985) list_single_2graphic_pane_g1

0x5608,	// (0x000253c7) list_single_2graphic_pane_g2_ParamLimits

0x5608,	// (0x000253c7) list_single_2graphic_pane_g2

0x558e,	// (0x0002534d) list_single_2graphic_pane_g3_ParamLimits

0x558e,	// (0x0002534d) list_single_2graphic_pane_g3

0x5bd2,	// (0x00025991) list_single_2graphic_pane_g4_ParamLimits

0x5bd2,	// (0x00025991) list_single_2graphic_pane_g4

0x0003,

0xf708,	// (0x0002f4c7) list_single_2graphic_pane_g_ParamLimits

0xf708,	// (0x0002f4c7) list_single_2graphic_pane_g

0x5bde,	// (0x0002599d) list_single_2graphic_pane_t1_ParamLimits

0x5bde,	// (0x0002599d) list_single_2graphic_pane_t1

0x5c0c,	// (0x000259cb) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5c0c,	// (0x000259cb) list_double2_graphic_large_graphic_pane_g1

0x56ad,	// (0x0002546c) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x56ad,	// (0x0002546c) list_double2_graphic_large_graphic_pane_g2

0x5679,	// (0x00025438) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5679,	// (0x00025438) list_double2_graphic_large_graphic_pane_g3

0x5c1c,	// (0x000259db) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5c1c,	// (0x000259db) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf711,	// (0x0002f4d0) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf711,	// (0x0002f4d0) list_double2_graphic_large_graphic_pane_g

0x5c28,	// (0x000259e7) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5c28,	// (0x000259e7) list_double2_graphic_large_graphic_pane_t1

0x5c3e,	// (0x000259fd) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5c3e,	// (0x000259fd) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf71a,	// (0x0002f4d9) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf71a,	// (0x0002f4d9) list_double2_graphic_large_graphic_pane_t

0x76dc,	// (0x0002749b) popup_fast_swap_window_ParamLimits

0x76dc,	// (0x0002749b) popup_fast_swap_window

0x76f8,	// (0x000274b7) popup_side_volume_key_window

0x240f,	// (0x000221ce) stacon_top_pane

0x2419,	// (0x000221d8) status_pane_ParamLimits

0x2419,	// (0x000221d8) status_pane

0x7712,	// (0x000274d1) status_small_pane

0x186f,	// (0x0002162e) control_pane

0x186f,	// (0x0002162e) stacon_bottom_pane

0x1cc5,	// (0x00021a84) scroll_pane_cp121

0x1cbc,	// (0x00021a7b) set_content_pane

0x750a,	// (0x000272c9) bg_active_tab_pane_g1_cp1

0x7513,	// (0x000272d2) bg_active_tab_pane_g2_cp1

0x751c,	// (0x000272db) bg_active_tab_pane_g3_cp1

0x750a,	// (0x000272c9) bg_passive_tab_pane_g1_cp1

0x7513,	// (0x000272d2) bg_passive_tab_pane_g2_cp1

0x751c,	// (0x000272db) bg_passive_tab_pane_g3_cp1

0x7525,	// (0x000272e4) bg_active_tab_pane_g1_cp2

0x7513,	// (0x000272d2) bg_active_tab_pane_g2_cp2

0x752e,	// (0x000272ed) bg_active_tab_pane_g3_cp2

0x7525,	// (0x000272e4) bg_passive_tab_pane_g1_cp2

0x7513,	// (0x000272d2) bg_passive_tab_pane_g2_cp2

0x752e,	// (0x000272ed) bg_passive_tab_pane_g3_cp2

0x7537,	// (0x000272f6) bg_active_tab_pane_g1_cp3

0x7513,	// (0x000272d2) bg_active_tab_pane_g2_cp3

0x7540,	// (0x000272ff) bg_active_tab_pane_g3_cp3

0x7537,	// (0x000272f6) bg_passive_tab_pane_g1_cp3

0x7513,	// (0x000272d2) bg_passive_tab_pane_g2_cp3

0x7540,	// (0x000272ff) bg_passive_tab_pane_g3_cp3

0x7549,	// (0x00027308) bg_active_tab_pane_g1_cp4

0x7513,	// (0x000272d2) bg_active_tab_pane_g2_cp4

0x7554,	// (0x00027313) bg_active_tab_pane_g3_cp4

0x7549,	// (0x00027308) bg_passive_tab_pane_g1_cp4

0x7513,	// (0x000272d2) bg_passive_tab_pane_g2_cp4

0x7554,	// (0x00027313) bg_passive_tab_pane_g3_cp4

0x76a0,	// (0x0002745f) bg_active_tab_pane_g1_cp5

0x7513,	// (0x000272d2) bg_active_tab_pane_g2_cp5

0x76a9,	// (0x00027468) bg_active_tab_pane_g3_cp5

0x76a0,	// (0x0002745f) bg_passive_tab_pane_g1_cp5

0x7513,	// (0x000272d2) bg_passive_tab_pane_g2_cp5

0x76a9,	// (0x00027468) bg_passive_tab_pane_g3_cp5

0x76b2,	// (0x00027471) list_set_graphic_pane_ParamLimits

0x76b2,	// (0x00027471) list_set_graphic_pane

0x186f,	// (0x0002162e) bg_set_opt_pane_cp4

0x23a0,	// (0x0002215f) list_set_graphic_pane_g1_ParamLimits

0x23a0,	// (0x0002215f) list_set_graphic_pane_g1

0x23ac,	// (0x0002216b) list_set_graphic_pane_g2_ParamLimits

0x23ac,	// (0x0002216b) list_set_graphic_pane_g2

0x0001,

0xf71f,	// (0x0002f4de) list_set_graphic_pane_g_ParamLimits

0xf71f,	// (0x0002f4de) list_set_graphic_pane_g

0x0009,

0xfab7,	// (0x0002f876) volume_small_pane_cp_g

0x76d0,	// (0x0002748f) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x76d0,	// (0x0002748f) list_double2_large_graphic_pane_g1_cp2

0x23ce,	// (0x0002218d) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x23ce,	// (0x0002218d) list_double2_large_graphic_pane_g2_cp2

0x23df,	// (0x0002219e) list_double2_large_graphic_pane_g3_cp2

0x23e7,	// (0x000221a6) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x23e7,	// (0x000221a6) list_double2_large_graphic_pane_t1_cp2

0x23fd,	// (0x000221bc) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x23fd,	// (0x000221bc) list_double2_large_graphic_pane_t2_cp2

0xab07,	// (0x0002a8c6) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xab07,	// (0x0002a8c6) list_double_large_graphic_pane_g1_cp2

0xab18,	// (0x0002a8d7) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xab18,	// (0x0002a8d7) list_double_large_graphic_pane_g2_cp2

0x2529,	// (0x000222e8) list_double_large_graphic_pane_g3_cp2

0xab29,	// (0x0002a8e8) list_double_large_graphic_pane_g4_cp

0xab31,	// (0x0002a8f0) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab31,	// (0x0002a8f0) list_double_large_graphic_pane_t1_cp2

0xab48,	// (0x0002a907) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab48,	// (0x0002a907) list_double_large_graphic_pane_t2_cp2

0x2427,	// (0x000221e6) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2427,	// (0x000221e6) list_double2_graphic_pane_g1_cp2

0x2435,	// (0x000221f4) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2435,	// (0x000221f4) list_double2_graphic_pane_g2_cp2

0x2446,	// (0x00022205) list_double2_graphic_pane_g3_cp2

0x2450,	// (0x0002220f) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2450,	// (0x0002220f) list_double2_graphic_pane_t1_cp2

0x2466,	// (0x00022225) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2466,	// (0x00022225) list_double2_graphic_pane_t2_cp2

0x1c57,	// (0x00021a16) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1c57,	// (0x00021a16) list_single_number_heading_pane_g1_cp2

0x2478,	// (0x00022237) list_single_number_heading_pane_g2_cp2

0x2480,	// (0x0002223f) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2480,	// (0x0002223f) list_single_number_heading_pane_t1_cp2

0x2496,	// (0x00022255) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2496,	// (0x00022255) list_single_number_heading_pane_t2_cp2

0x24a8,	// (0x00022267) list_single_number_heading_pane_t3_cp2_ParamLimits

0x24a8,	// (0x00022267) list_single_number_heading_pane_t3_cp2

0x1c57,	// (0x00021a16) list_single_heading_pane_g1_cp2_ParamLimits

0x1c57,	// (0x00021a16) list_single_heading_pane_g1_cp2

0x2478,	// (0x00022237) list_single_heading_pane_g2_cp2

0x2480,	// (0x0002223f) list_single_heading_pane_t1_cp2_ParamLimits

0x2480,	// (0x0002223f) list_single_heading_pane_t1_cp2

0xa911,	// (0x0002a6d0) list_single_heading_pane_t2_cp2_ParamLimits

0xa911,	// (0x0002a6d0) list_single_heading_pane_t2_cp2

0xa859,	// (0x0002a618) list_double_graphic_pane_g1_cp2_ParamLimits

0xa859,	// (0x0002a618) list_double_graphic_pane_g1_cp2

0xa865,	// (0x0002a624) list_double_graphic_pane_g2_cp2_ParamLimits

0xa865,	// (0x0002a624) list_double_graphic_pane_g2_cp2

0xa874,	// (0x0002a633) list_double_graphic_pane_g3_cp2

0xa87c,	// (0x0002a63b) list_double_graphic_pane_t1_cp2_ParamLimits

0xa87c,	// (0x0002a63b) list_double_graphic_pane_t1_cp2

0xa892,	// (0x0002a651) list_double_graphic_pane_t2_cp2_ParamLimits

0xa892,	// (0x0002a651) list_double_graphic_pane_t2_cp2

0x251d,	// (0x000222dc) list_double_number_pane_g1_cp2_ParamLimits

0x251d,	// (0x000222dc) list_double_number_pane_g1_cp2

0x2529,	// (0x000222e8) list_double_number_pane_g2_cp2

0xa81d,	// (0x0002a5dc) list_double_number_pane_t1_cp2_ParamLimits

0xa81d,	// (0x0002a5dc) list_double_number_pane_t1_cp2

0xa831,	// (0x0002a5f0) list_double_number_pane_t2_cp2_ParamLimits

0xa831,	// (0x0002a5f0) list_double_number_pane_t2_cp2

0xa847,	// (0x0002a606) list_double_number_pane_t3_cp2_ParamLimits

0xa847,	// (0x0002a606) list_double_number_pane_t3_cp2

0xa706,	// (0x0002a4c5) list_single_graphic_pane_g1_cp2_ParamLimits

0xa706,	// (0x0002a4c5) list_single_graphic_pane_g1_cp2

0x1c4b,	// (0x00021a0a) list_single_graphic_pane_g2_cp2_ParamLimits

0x1c4b,	// (0x00021a0a) list_single_graphic_pane_g2_cp2

0x2561,	// (0x00022320) list_single_graphic_pane_g3_cp2

0xa6dc,	// (0x0002a49b) list_single_graphic_pane_t1_cp2_ParamLimits

0xa6dc,	// (0x0002a49b) list_single_graphic_pane_t1_cp2

0x1c4b,	// (0x00021a0a) list_single_number_pane_g1_cp2_ParamLimits

0x1c4b,	// (0x00021a0a) list_single_number_pane_g1_cp2

0x2561,	// (0x00022320) list_single_number_pane_g2_cp2

0xa6dc,	// (0x0002a49b) list_single_number_pane_t1_cp2_ParamLimits

0xa6dc,	// (0x0002a49b) list_single_number_pane_t1_cp2

0xa6f2,	// (0x0002a4b1) list_single_number_pane_t2_cp2_ParamLimits

0xa6f2,	// (0x0002a4b1) list_single_number_pane_t2_cp2

0x23ce,	// (0x0002218d) list_double2_pane_g1_cp2_ParamLimits

0x23ce,	// (0x0002218d) list_double2_pane_g1_cp2

0x23df,	// (0x0002219e) list_double2_pane_g2_cp2

0x24f5,	// (0x000222b4) list_double2_pane_t1_cp2_ParamLimits

0x24f5,	// (0x000222b4) list_double2_pane_t1_cp2

0x250b,	// (0x000222ca) list_double2_pane_t2_cp2_ParamLimits

0x250b,	// (0x000222ca) list_double2_pane_t2_cp2

0x251d,	// (0x000222dc) list_double_pane_g1_cp2_ParamLimits

0x251d,	// (0x000222dc) list_double_pane_g1_cp2

0x2529,	// (0x000222e8) list_double_pane_g2_cp2

0x2531,	// (0x000222f0) list_double_pane_t1_cp2_ParamLimits

0x2531,	// (0x000222f0) list_double_pane_t1_cp2

0x2547,	// (0x00022306) list_double_pane_t2_cp2_ParamLimits

0x2547,	// (0x00022306) list_double_pane_t2_cp2

0x7735,	// (0x000274f4) list_single_pane_cp2_g3

0x1c4b,	// (0x00021a0a) list_single_pane_g1_cp2_ParamLimits

0x1c4b,	// (0x00021a0a) list_single_pane_g1_cp2

0x2561,	// (0x00022320) list_single_pane_g2_cp2

0x2569,	// (0x00022328) list_single_pane_t1_cp2_ParamLimits

0x2569,	// (0x00022328) list_single_pane_t1_cp2

0x773d,	// (0x000274fc) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x773d,	// (0x000274fc) list_single_large_graphic_pane_g1_cp2

0x2581,	// (0x00022340) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2581,	// (0x00022340) list_single_large_graphic_pane_g2_cp2

0x258d,	// (0x0002234c) list_single_large_graphic_pane_g3_cp2

0x7749,	// (0x00027508) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x7749,	// (0x00027508) list_single_large_graphic_pane_g4_cp1

0x2595,	// (0x00022354) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2595,	// (0x00022354) list_single_large_graphic_pane_t1_cp2

0xa6a8,	// (0x0002a467) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa6a8,	// (0x0002a467) list_single_graphic_heading_pane_g1_cp2

0xa675,	// (0x0002a434) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa675,	// (0x0002a434) list_single_graphic_heading_pane_g4_cp2

0x2561,	// (0x00022320) list_single_graphic_heading_pane_g5_cp2

0xa6b4,	// (0x0002a473) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa6b4,	// (0x0002a473) list_single_graphic_heading_pane_t1_cp2

0xa6ca,	// (0x0002a489) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa6ca,	// (0x0002a489) list_single_graphic_heading_pane_t2_cp2

0xa669,	// (0x0002a428) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa669,	// (0x0002a428) list_single_2graphic_pane_g1_cp2

0xa675,	// (0x0002a434) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa675,	// (0x0002a434) list_single_2graphic_pane_g2_cp2

0x2561,	// (0x00022320) list_single_2graphic_pane_g3_cp2

0xa686,	// (0x0002a445) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa686,	// (0x0002a445) list_single_2graphic_pane_g4_cp2

0xa692,	// (0x0002a451) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa692,	// (0x0002a451) list_single_2graphic_pane_t1_cp2

0x1865,	// (0x00021624) list_highlight_pane_g10_cp1

0xa251,	// (0x0002a010) list_highlight_pane_g1_cp1

0xa259,	// (0x0002a018) list_highlight_pane_g2_cp1

0xa261,	// (0x0002a020) list_highlight_pane_g3_cp1

0xa269,	// (0x0002a028) list_highlight_pane_g4_cp1

0xa271,	// (0x0002a030) list_highlight_pane_g5_cp1

0xa279,	// (0x0002a038) list_highlight_pane_g6_cp1

0xa281,	// (0x0002a040) list_highlight_pane_g7_cp1

0xa289,	// (0x0002a048) list_highlight_pane_g8_cp1

0xa291,	// (0x0002a050) list_highlight_pane_g9_cp1

0x8e5b,	// (0x00028c1a) form_field_slider_pane_t3

0x8e69,	// (0x00028c28) form_field_slider_pane_t4

0x8e77,	// (0x00028c36) slider_form_pane_ParamLimits

0x8e77,	// (0x00028c36) slider_form_pane

0x186f,	// (0x0002162e) control_abbreviations

0x186f,	// (0x0002162e) control_conventions

0x186f,	// (0x0002162e) control_definitions

0x186f,	// (0x0002162e) format_table_attribute

0xa95b,	// (0x0002a71a) bg_popup_preview_window_pane_g9

0x186f,	// (0x0002162e) format_table_data2

0x186f,	// (0x0002162e) format_table_data3

0x186f,	// (0x0002162e) format_table_data_example

0x0008,

0x186f,	// (0x0002162e) intro_purpose

0xf8b6,	// (0x0002f675) bg_popup_preview_window_pane_g

0x186f,	// (0x0002162e) texts_category

0x186f,	// (0x0002162e) texts_graphics

0x25ab,	// (0x0002236a) text_digital

0x25ba,	// (0x00022379) text_primary

0x25c9,	// (0x00022388) text_primary_small

0x25d8,	// (0x00022397) text_secondary

0x25e7,	// (0x000223a6) text_title

0xb08e,	// (0x0002ae4d) bg_passive_tab_pane_g1_cp3_srt

0x7513,	// (0x000272d2) bg_passive_tab_pane_g2_cp3_srt

0xb097,	// (0x0002ae56) bg_passive_tab_pane_g3_cp3_srt

0x18cb,	// (0x0002168a) bg_active_tab_pane_cp3_srt_ParamLimits

0x18cb,	// (0x0002168a) bg_active_tab_pane_cp3_srt

0xb0a0,	// (0x0002ae5f) tabs_4_active_pane_srt_g1

0xb0a8,	// (0x0002ae67) tabs_4_active_pane_srt_t1_ParamLimits

0xb0a8,	// (0x0002ae67) tabs_4_active_pane_srt_t1

0xb08e,	// (0x0002ae4d) bg_active_tab_pane_g1_cp3_copy1

0x7513,	// (0x000272d2) bg_active_tab_pane_g2_cp3_copy1

0xb097,	// (0x0002ae56) bg_active_tab_pane_g3_cp3_copy1

0x18cb,	// (0x0002168a) tabs_2_long_active_pane_srt_ParamLimits

0x18cb,	// (0x0002168a) tabs_2_long_active_pane_srt

0x18cb,	// (0x0002168a) tabs_2_long_passive_pane_srt_ParamLimits

0x18cb,	// (0x0002168a) tabs_2_long_passive_pane_srt

0x7068,	// (0x00026e27) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7068,	// (0x00026e27) bg_passive_tab_pane_cp4_srt

0xad7c,	// (0x0002ab3b) bg_passive_tab_pane_g1_cp4_srt

0x7513,	// (0x000272d2) bg_passive_tab_pane_g2_cp4_srt

0xad85,	// (0x0002ab44) bg_passive_tab_pane_g3_cp4_srt

0x7047,	// (0x00026e06) bg_active_tab_pane_cp4_srt_ParamLimits

0x7047,	// (0x00026e06) bg_active_tab_pane_cp4_srt

0xad8e,	// (0x0002ab4d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad8e,	// (0x0002ab4d) tabs_2_long_active_pane_srt_t1

0xad7c,	// (0x0002ab3b) bg_active_tab_pane_g1_cp4_srt

0x7513,	// (0x000272d2) bg_active_tab_pane_g2_cp4_srt

0xad85,	// (0x0002ab44) bg_active_tab_pane_g3_cp4_srt

0x18bd,	// (0x0002167c) tabs_3_long_active_pane_srt_ParamLimits

0x18bd,	// (0x0002167c) tabs_3_long_active_pane_srt

0x18bd,	// (0x0002167c) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x18bd,	// (0x0002167c) tabs_3_long_passive_pane_cp_srt

0x18bd,	// (0x0002167c) tabs_3_long_passive_pane_srt_ParamLimits

0x18bd,	// (0x0002167c) tabs_3_long_passive_pane_srt

0x7068,	// (0x00026e27) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7068,	// (0x00026e27) bg_passive_tab_pane_cp5_srt

0x76a0,	// (0x0002745f) bg_passive_tab_pane_g1_cp5_srt

0x7513,	// (0x000272d2) bg_passive_tab_pane_g2_cp5_srt

0x76a9,	// (0x00027468) bg_passive_tab_pane_g3_cp5_srt

0x7047,	// (0x00026e06) bg_active_tab_pane_cp5_srt_ParamLimits

0x7047,	// (0x00026e06) bg_active_tab_pane_cp5_srt

0xad6a,	// (0x0002ab29) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad6a,	// (0x0002ab29) tabs_3_long_active_pane_srt_t1

0x76a0,	// (0x0002745f) bg_active_tab_pane_g1_cp5_srt

0x7513,	// (0x000272d2) bg_active_tab_pane_g2_cp5_srt

0x76a9,	// (0x00027468) bg_active_tab_pane_g3_cp5_srt

0xad5c,	// (0x0002ab1b) navi_text_pane_srt_t1

0xad54,	// (0x0002ab13) navi_icon_pane_srt_g1

0x26d2,	// (0x00022491) midp_editing_number_pane_srt

0x25f6,	// (0x000223b5) midp_ticker_pane_srt

0x26da,	// (0x00022499) midp_ticker_pane_srt_g1

0x26e2,	// (0x000224a1) midp_ticker_pane_srt_g2

0x0001,

0xf73e,	// (0x0002f4fd) midp_ticker_pane_srt_g

0x26ea,	// (0x000224a9) midp_ticker_pane_srt_t1

0xad45,	// (0x0002ab04) midp_editing_number_pane_t1_copy1

0x7763,	// (0x00027522) listscroll_midp_pane

0x7763,	// (0x00027522) midp_form_pane

0x77d5,	// (0x00027594) midp_info_popup_window_ParamLimits

0x77d5,	// (0x00027594) midp_info_popup_window

0x1e50,	// (0x00021c0f) bg_popup_sub_pane_cp50_ParamLimits

0x1e50,	// (0x00021c0f) bg_popup_sub_pane_cp50

0x8b67,	// (0x00028926) listscroll_midp_info_pane_ParamLimits

0x8b67,	// (0x00028926) listscroll_midp_info_pane

0x8b47,	// (0x00028906) listscroll_form_midp_pane_ParamLimits

0x8b47,	// (0x00028906) listscroll_form_midp_pane

0x8b53,	// (0x00028912) scroll_bar_cp050

0x8b27,	// (0x000288e6) list_midp_pane

0xbaf9,	// (0x0002b8b8) signal_pane_g2_cp

0x8a61,	// (0x00028820) listscroll_midp_info_pane_t1_ParamLimits

0x8a61,	// (0x00028820) listscroll_midp_info_pane_t1

0x8a79,	// (0x00028838) listscroll_midp_info_pane_t2_ParamLimits

0x8a79,	// (0x00028838) listscroll_midp_info_pane_t2

0x8ab7,	// (0x00028876) listscroll_midp_info_pane_t3_ParamLimits

0x8ab7,	// (0x00028876) listscroll_midp_info_pane_t3

0x8af1,	// (0x000288b0) listscroll_midp_info_pane_t4_ParamLimits

0x8af1,	// (0x000288b0) listscroll_midp_info_pane_t4

0x0003,

0xf7f1,	// (0x0002f5b0) listscroll_midp_info_pane_t_ParamLimits

0xf7f1,	// (0x0002f5b0) listscroll_midp_info_pane_t

0x1ea5,	// (0x00021c64) scroll_pane_cp21

0x8a01,	// (0x000287c0) form_midp_field_choice_group_pane

0x8a0a,	// (0x000287c9) form_midp_field_text_pane

0x8a47,	// (0x00028806) form_midp_field_time_pane

0x8a4f,	// (0x0002880e) form_midp_gauge_slider_pane

0x8a58,	// (0x00028817) form_midp_gauge_wait_pane

0x186f,	// (0x0002162e) form_midp_image_pane

0x5da9,	// (0x00025b68) list_single_midp_pane_ParamLimits

0x5da9,	// (0x00025b68) list_single_midp_pane

0x89b6,	// (0x00028775) form_midp_field_text_pane_t1

0x86f8,	// (0x000284b7) input_focus_pane_cp050

0x89f0,	// (0x000287af) list_midp_form_text_pane

0x8985,	// (0x00028744) form_midp_field_choice_group_pane_t1

0x8993,	// (0x00028752) input_focus_pane_cp051

0x89a7,	// (0x00028766) list_midp_choice_pane

0x186f,	// (0x0002162e) status_idle_pane

0x8969,	// (0x00028728) form_midp_field_time_pane_t1

0x1865,	// (0x00021624) wait_anim_pane_g2_copy1

0x8977,	// (0x00028736) form_midp_field_time_pane_t2

0x0001,

0x2656,	// (0x00022415) aid_navinavi_width_2_pane

0xf7ec,	// (0x0002f5ab) form_midp_field_time_pane_t

0x186f,	// (0x0002162e) input_focus_pane_cp052

0x186f,	// (0x0002162e) bg_input_focus_pane_cp040

0x8929,	// (0x000286e8) form_midp_gauge_slider_pane_t1

0x8937,	// (0x000286f6) form_midp_gauge_slider_pane_t2

0x8945,	// (0x00028704) form_midp_gauge_slider_pane_t3

0x8953,	// (0x00028712) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e3,	// (0x0002f5a2) form_midp_gauge_slider_pane_t

0x8961,	// (0x00028720) form_midp_slider_pane

0x18cb,	// (0x0002168a) bg_input_focus_pane_cp041_ParamLimits

0x18cb,	// (0x0002168a) bg_input_focus_pane_cp041

0x88f6,	// (0x000286b5) form_midp_gauge_wait_pane_t1_ParamLimits

0x88f6,	// (0x000286b5) form_midp_gauge_wait_pane_t1

0x8908,	// (0x000286c7) form_midp_gauge_wait_pane_t2_ParamLimits

0x8908,	// (0x000286c7) form_midp_gauge_wait_pane_t2

0x0001,

0xf7de,	// (0x0002f59d) form_midp_gauge_wait_pane_t_ParamLimits

0xf7de,	// (0x0002f59d) form_midp_gauge_wait_pane_t

0x891a,	// (0x000286d9) form_midp_wait_pane_ParamLimits

0x891a,	// (0x000286d9) form_midp_wait_pane

0x88c0,	// (0x0002867f) form_midp_image_pane_g1

0x88c9,	// (0x00028688) form_midp_image_pane_t1

0x88d8,	// (0x00028697) form_midp_image_pane_t2

0x88e7,	// (0x000286a6) form_midp_image_pane_t3

0x0002,

0xf7d7,	// (0x0002f596) form_midp_image_pane_t

0x88b7,	// (0x00028676) list_single_midp_pane_g1

0x5d9a,	// (0x00025b59) list_single_midp_pane_t1

0x888e,	// (0x0002864d) list_midp_form_item_pane_ParamLimits

0x888e,	// (0x0002864d) list_midp_form_item_pane

0x25fe,	// (0x000223bd) list_midp_form_item_pane_t1

0x260d,	// (0x000223cc) midp_ticker_pane_g1

0x2619,	// (0x000223d8) midp_ticker_pane_g2

0x0001,

0xf724,	// (0x0002f4e3) midp_ticker_pane_g

0x2625,	// (0x000223e4) midp_ticker_pane_t1

0xaf92,	// (0x0002ad51) midp_editing_number_pane_t1

0xaf70,	// (0x0002ad2f) midp_editing_number_pane

0xaf7f,	// (0x0002ad3e) midp_ticker_pane

0xad35,	// (0x0002aaf4) ai_message_heading_pane

0x186f,	// (0x0002162e) bg_popup_window_pane_cp14

0xad3d,	// (0x0002aafc) listscroll_ai_message_pane

0xacbf,	// (0x0002aa7e) ai_message_heading_pane_g1_ParamLimits

0xacbf,	// (0x0002aa7e) ai_message_heading_pane_g1

0xaccb,	// (0x0002aa8a) ai_message_heading_pane_g2_ParamLimits

0xaccb,	// (0x0002aa8a) ai_message_heading_pane_g2

0xacd7,	// (0x0002aa96) ai_message_heading_pane_g3_ParamLimits

0xacd7,	// (0x0002aa96) ai_message_heading_pane_g3

0xace3,	// (0x0002aaa2) ai_message_heading_pane_g4_ParamLimits

0xace3,	// (0x0002aaa2) ai_message_heading_pane_g4

0x0003,

0xf918,	// (0x0002f6d7) ai_message_heading_pane_g_ParamLimits

0xf918,	// (0x0002f6d7) ai_message_heading_pane_g

0xacef,	// (0x0002aaae) ai_message_heading_pane_t1_ParamLimits

0xacef,	// (0x0002aaae) ai_message_heading_pane_t1

0xad09,	// (0x0002aac8) ai_message_heading_pane_t2_ParamLimits

0xad09,	// (0x0002aac8) ai_message_heading_pane_t2

0x0001,

0xf921,	// (0x0002f6e0) ai_message_heading_pane_t_ParamLimits

0xf921,	// (0x0002f6e0) ai_message_heading_pane_t

0xad1b,	// (0x0002aada) bg_popup_heading_pane_cp1_ParamLimits

0xad1b,	// (0x0002aada) bg_popup_heading_pane_cp1

0xacad,	// (0x0002aa6c) list_ai_message_pane_ParamLimits

0xacad,	// (0x0002aa6c) list_ai_message_pane

0x1ea5,	// (0x00021c64) scroll_pane_cp10

0xac49,	// (0x0002aa08) list_ai_message_pane_g1

0xac51,	// (0x0002aa10) list_ai_message_pane_g2

0x0001,

0xf8f5,	// (0x0002f6b4) list_ai_message_pane_g

0xac59,	// (0x0002aa18) list_ai_message_pane_t1_ParamLimits

0xac59,	// (0x0002aa18) list_ai_message_pane_t1

0xac6e,	// (0x0002aa2d) list_ai_message_pane_t2_ParamLimits

0xac6e,	// (0x0002aa2d) list_ai_message_pane_t2

0xac83,	// (0x0002aa42) list_ai_message_pane_t3_ParamLimits

0xac83,	// (0x0002aa42) list_ai_message_pane_t3

0xac98,	// (0x0002aa57) list_ai_message_pane_t4_ParamLimits

0xac98,	// (0x0002aa57) list_ai_message_pane_t4

0x0003,

0xf8fa,	// (0x0002f6b9) list_ai_message_pane_t_ParamLimits

0xf8fa,	// (0x0002f6b9) list_ai_message_pane_t

0xac34,	// (0x0002a9f3) cell_ai_soft_ind_pane_ParamLimits

0xac34,	// (0x0002a9f3) cell_ai_soft_ind_pane

0x2637,	// (0x000223f6) cell_ai_soft_ind_pane_g1_ParamLimits

0x2637,	// (0x000223f6) cell_ai_soft_ind_pane_g1

0x186f,	// (0x0002162e) grid_highlight_cp1

0x2644,	// (0x00022403) text_secondary_cp56_ParamLimits

0x2644,	// (0x00022403) text_secondary_cp56

0xac09,	// (0x0002a9c8) example_general_pane_ParamLimits

0xac09,	// (0x0002a9c8) example_general_pane

0xac15,	// (0x0002a9d4) example_parent_pane_g1_ParamLimits

0xac15,	// (0x0002a9d4) example_parent_pane_g1

0xac21,	// (0x0002a9e0) example_parent_pane_t1_ParamLimits

0xac21,	// (0x0002a9e0) example_parent_pane_t1

0x7ea9,	// (0x00027c68) popup_preview_text_window_ParamLimits

0x7ea9,	// (0x00027c68) popup_preview_text_window

0x2559,	// (0x00022318) list_single_pane_cp2_g4

0x1ab7,	// (0x00021876) bg_popup_preview_window_pane_ParamLimits

0x1ab7,	// (0x00021876) bg_popup_preview_window_pane

0xa963,	// (0x0002a722) popup_preview_text_window_t1_ParamLimits

0xa963,	// (0x0002a722) popup_preview_text_window_t1

0xa981,	// (0x0002a740) popup_preview_text_window_t2_ParamLimits

0xa981,	// (0x0002a740) popup_preview_text_window_t2

0xa9ca,	// (0x0002a789) popup_preview_text_window_t3_ParamLimits

0xa9ca,	// (0x0002a789) popup_preview_text_window_t3

0xaa0f,	// (0x0002a7ce) popup_preview_text_window_t4_ParamLimits

0xaa0f,	// (0x0002a7ce) popup_preview_text_window_t4

0x0004,

0xf8c9,	// (0x0002f688) popup_preview_text_window_t_ParamLimits

0xf8c9,	// (0x0002f688) popup_preview_text_window_t

0xaa8d,	// (0x0002a84c) scroll_pane_cp11

0x85f4,	// (0x000283b3) bg_popup_preview_window_pane_g1

0xa923,	// (0x0002a6e2) bg_popup_preview_window_pane_g2

0xa92b,	// (0x0002a6ea) bg_popup_preview_window_pane_g3

0xa933,	// (0x0002a6f2) bg_popup_preview_window_pane_g4

0xa93b,	// (0x0002a6fa) bg_popup_preview_window_pane_g5

0xa943,	// (0x0002a702) bg_popup_preview_window_pane_g6

0xa94b,	// (0x0002a70a) bg_popup_preview_window_pane_g7

0xa953,	// (0x0002a712) bg_popup_preview_window_pane_g8

0x65ff,	// (0x000263be) aid_popup_width_pane

0x7e87,	// (0x00027c46) popup_midp_note_alarm_window_ParamLimits

0x7e87,	// (0x00027c46) popup_midp_note_alarm_window

0x1cf9,	// (0x00021ab8) data_form_pane_ParamLimits

0x5a19,	// (0x000257d8) form_field_data_pane_g1

0x5a23,	// (0x000257e2) form_field_data_pane_t1_ParamLimits

0x1d05,	// (0x00021ac4) input_focus_pane_ParamLimits

0x5a3b,	// (0x000257fa) data_form_wide_pane_ParamLimits

0x5a4c,	// (0x0002580b) form_field_data_wide_pane_g1

0x5a58,	// (0x00025817) form_field_data_wide_pane_t1_ParamLimits

0x1b8f,	// (0x0002194e) input_focus_pane_cp6_ParamLimits

0x6ffe,	// (0x00026dbd) input_popup_find_pane_g1_ParamLimits

0x6ffe,	// (0x00026dbd) input_popup_find_pane_g1

0x719e,	// (0x00026f5d) aid_navi_side_left_pane

0x71b3,	// (0x00026f72) aid_navi_side_right_pane

0xa34c,	// (0x0002a10b) bg_popup_window_pane_cp30_ParamLimits

0xa34c,	// (0x0002a10b) bg_popup_window_pane_cp30

0xa3c6,	// (0x0002a185) popup_midp_note_alarm_window_g1_ParamLimits

0xa3c6,	// (0x0002a185) popup_midp_note_alarm_window_g1

0xa3f6,	// (0x0002a1b5) popup_midp_note_alarm_window_t1_ParamLimits

0xa3f6,	// (0x0002a1b5) popup_midp_note_alarm_window_t1

0xa497,	// (0x0002a256) popup_midp_note_alarm_window_t2_ParamLimits

0xa497,	// (0x0002a256) popup_midp_note_alarm_window_t2

0xa545,	// (0x0002a304) popup_midp_note_alarm_window_t3_ParamLimits

0xa545,	// (0x0002a304) popup_midp_note_alarm_window_t3

0xa56d,	// (0x0002a32c) popup_midp_note_alarm_window_t4_ParamLimits

0xa56d,	// (0x0002a32c) popup_midp_note_alarm_window_t4

0xa58d,	// (0x0002a34c) popup_midp_note_alarm_window_t5_ParamLimits

0xa58d,	// (0x0002a34c) popup_midp_note_alarm_window_t5

0x000a,

0xf866,	// (0x0002f625) popup_midp_note_alarm_window_t_ParamLimits

0xf866,	// (0x0002f625) popup_midp_note_alarm_window_t

0xa639,	// (0x0002a3f8) wait_bar_pane_cp1_ParamLimits

0xa639,	// (0x0002a3f8) wait_bar_pane_cp1

0x186f,	// (0x0002162e) wait_anim_pane_copy1

0x186f,	// (0x0002162e) wait_border_pane_copy1

0x8d24,	// (0x00028ae3) wait_border_pane_g1_copy1

0x5a72,	// (0x00025831) form_field_popup_pane_g1

0x5a7a,	// (0x00025839) form_field_popup_pane_t1_ParamLimits

0x1d05,	// (0x00021ac4) input_focus_pane_cp7_ParamLimits

0x1d72,	// (0x00021b31) list_form_pane_ParamLimits

0x5a92,	// (0x00025851) form_field_popup_wide_pane_g1

0x5a9a,	// (0x00025859) form_field_popup_wide_pane_t1_ParamLimits

0x1d05,	// (0x00021ac4) input_focus_pane_cp8_ParamLimits

0x1d9b,	// (0x00021b5a) list_form_wide_pane_ParamLimits

0xb12b,	// (0x0002aeea) aid_size_cell_graphic_pane

0x5b24,	// (0x000258e3) data_form_pane_t1_ParamLimits

0x5dee,	// (0x00025bad) data_form_wide_pane_t1_ParamLimits

0x818e,	// (0x00027f4d) bg_status_flat_pane

0x69fe,	// (0x000267bd) title_pane_t1_ParamLimits

0x1885,	// (0x00021644) title_pane_t2_ParamLimits

0x18ab,	// (0x0002166a) title_pane_t3_ParamLimits

0xf532,	// (0x0002f2f1) title_pane_t_ParamLimits

0x215a,	// (0x00021f19) level_1_signal_ParamLimits

0x2167,	// (0x00021f26) level_2_signal_ParamLimits

0x2174,	// (0x00021f33) level_3_signal_ParamLimits

0x2181,	// (0x00021f40) level_4_signal_ParamLimits

0x218e,	// (0x00021f4d) level_5_signal_ParamLimits

0x219b,	// (0x00021f5a) level_6_signal_ParamLimits

0x21a8,	// (0x00021f67) level_7_signal_ParamLimits

0x215a,	// (0x00021f19) level_1_battery_ParamLimits

0x2167,	// (0x00021f26) level_2_battery_ParamLimits

0x2174,	// (0x00021f33) level_3_battery_ParamLimits

0x2181,	// (0x00021f40) level_4_battery_ParamLimits

0x218e,	// (0x00021f4d) level_5_battery_ParamLimits

0x219b,	// (0x00021f5a) level_6_battery_ParamLimits

0x21a8,	// (0x00021f67) level_7_battery_ParamLimits

0xa251,	// (0x0002a010) bg_status_flat_pane_g1

0xa259,	// (0x0002a018) bg_status_flat_pane_g2

0xa261,	// (0x0002a020) bg_status_flat_pane_g3

0xa269,	// (0x0002a028) bg_status_flat_pane_g4

0xa271,	// (0x0002a030) bg_status_flat_pane_g5

0xa279,	// (0x0002a038) bg_status_flat_pane_g6

0xa281,	// (0x0002a040) bg_status_flat_pane_g7

0x6a6e,	// (0x0002682d) tabs_3_active_pane_t1_ParamLimits

0x6a6e,	// (0x0002682d) tabs_3_passive_pane_t1_ParamLimits

0x6a88,	// (0x00026847) tabs_4_active_pane_t1_ParamLimits

0x6a88,	// (0x00026847) tabs_4_1_passive_pane_t1_ParamLimits

0x7035,	// (0x00026df4) tabs_2_active_pane_t1_ParamLimits

0x7035,	// (0x00026df4) tabs_2_passive_pane_t1_ParamLimits

0x7047,	// (0x00026e06) bg_active_tab_pane_cp4_ParamLimits

0x7055,	// (0x00026e14) tabs_2_long_active_pane_t1_ParamLimits

0x7068,	// (0x00026e27) bg_passive_tab_pane_cp4_ParamLimits

0x8689,	// (0x00028448) list_single_midp_graphic_pane_t1_ParamLimits

0x7047,	// (0x00026e06) bg_active_tab_pane_cp5_ParamLimits

0x7074,	// (0x00026e33) tabs_3_long_active_pane_t1_ParamLimits

0x7068,	// (0x00026e27) bg_passive_tab_pane_cp5_ParamLimits

0x8689,	// (0x00028448) list_single_midp_graphic_pane_t1

0x818e,	// (0x00027f4d) bg_status_flat_pane_ParamLimits

0x8257,	// (0x00028016) indicator_pane_cp2_ParamLimits

0x8257,	// (0x00028016) indicator_pane_cp2

0x8382,	// (0x00028141) navi_pane_srt_ParamLimits

0x8382,	// (0x00028141) navi_pane_srt

0x83a6,	// (0x00028165) popup_clock_digital_analogue_window_cp1

0x1929,	// (0x000216e8) indicator_pane_t1

0x25f6,	// (0x000223b5) copy_highlight_pane

0x25f6,	// (0x000223b5) cursor_graphics_pane

0x25f6,	// (0x000223b5) graphic_within_text_pane

0x25f6,	// (0x000223b5) link_highlight_pane

0xaa50,	// (0x0002a80f) popup_preview_text_window_t5_ParamLimits

0xaa50,	// (0x0002a80f) popup_preview_text_window_t5

0x265e,	// (0x0002241d) cursor_digital_pane

0x265e,	// (0x0002241d) cursor_primary_pane

0x266f,	// (0x0002242e) cursor_primary_small_pane

0x2677,	// (0x00022436) cursor_secondary_pane

0x267f,	// (0x0002243e) cursor_title_pane

0x265e,	// (0x0002241d) link_highlight_digital_pane

0x2666,	// (0x00022425) link_highlight_primary_pane

0x266f,	// (0x0002242e) link_highlight_primary_small_pane

0x2677,	// (0x00022436) link_highlight_secondary_pane

0x267f,	// (0x0002243e) link_highlight_title_pane

0x265e,	// (0x0002241d) copy_highlight_digital_pane

0x265e,	// (0x0002241d) copy_highlight_primary_pane

0x266f,	// (0x0002242e) copy_highlight_primary_small_pane

0x2677,	// (0x00022436) copy_highlight_secondary_pane

0x267f,	// (0x0002243e) copy_highlight_title_pane

0x2677,	// (0x00022436) graphic_text_digital_pane

0xa2ef,	// (0x0002a0ae) graphic_text_primary_pane

0xa2f8,	// (0x0002a0b7) graphic_text_primary_small_pane

0x266f,	// (0x0002242e) graphic_text_secondary_pane

0x265e,	// (0x0002241d) graphic_text_title_pane

0x782d,	// (0x000275ec) cursor_primary_pane_g1

0xa2e1,	// (0x0002a0a0) cursor_text_primary_t1

0xa2c9,	// (0x0002a088) cursor_primary_small_pane_g1

0xa2d3,	// (0x0002a092) cursor_text_primary_small_t1

0xa2b1,	// (0x0002a070) cursor_primary_small_pane_g1_copy1

0xa2bb,	// (0x0002a07a) cursor_text_primary_small_t1_copy1

0xa299,	// (0x0002a058) cursor_text_title_t1

0xa2a7,	// (0x0002a066) cursor_title_pane_g1

0x782d,	// (0x000275ec) cursor_digital_pane_g1

0x2687,	// (0x00022446) cursor_text_digital_t1

0x2695,	// (0x00022454) link_highlight_primary_pane_g1

0xa242,	// (0x0002a001) link_highlight_primary_pane_t1

0x2695,	// (0x00022454) link_highlight_primary_small_pane_g1

0x269d,	// (0x0002245c) link_highlight_primary_small_pane_t1

0x2695,	// (0x00022454) link_highlight_secondary_pane_g1

0x26ac,	// (0x0002246b) link_highlight_secondary_pane_t1

0x8e89,	// (0x00028c48) link_highlight_title_pane_g1

0xa1be,	// (0x00029f7d) link_highlight_title_pane_t1

0x8e89,	// (0x00028c48) link_highlight_digital_pane_g1

0x8e91,	// (0x00028c50) link_highlight_digital_pane_t1

0x8d43,	// (0x00028b02) copy_highlight_primary_pane_g1

0x8d69,	// (0x00028b28) copy_highlight_primary_pane_t1

0x8d43,	// (0x00028b02) copy_highlight_primary_small_pane_g1

0x8d5a,	// (0x00028b19) copy_highlight_primary_small_pane_t1

0x26bb,	// (0x0002247a) copy_highlight_secondary_pane_g1

0x26c3,	// (0x00022482) copy_highlight_secondary_pane_t1

0x8d43,	// (0x00028b02) copy_highlight_title_pane_g1

0x8d4b,	// (0x00028b0a) copy_highlight_title_pane_t1

0x8d43,	// (0x00028b02) copy_highlight_digital_pane_g1

0xb2f9,	// (0x0002b0b8) copy_highlight_digital_pane_t1

0xb24d,	// (0x0002b00c) graphic_text_primary_pane_g1

0xb2dd,	// (0x0002b09c) graphic_text_primary_pane_t1

0xb2eb,	// (0x0002b0aa) graphic_text_primary_pane_t2

0x0001,

0xf995,	// (0x0002f754) graphic_text_primary_pane_t

0xb2b9,	// (0x0002b078) graphic_text_primary_small_pane_g1

0xb2c1,	// (0x0002b080) graphic_text_primary_small_pane_t1

0xb2cf,	// (0x0002b08e) graphic_text_primary_small_pane_t2

0x0001,

0xf990,	// (0x0002f74f) graphic_text_primary_small_pane_t

0xb295,	// (0x0002b054) graphic_text_secondary_pane_g1

0xb29d,	// (0x0002b05c) graphic_text_secondary_pane_t1

0xb2ab,	// (0x0002b06a) graphic_text_secondary_pane_t2

0x0001,

0xf98b,	// (0x0002f74a) graphic_text_secondary_pane_t

0xb271,	// (0x0002b030) graphic_text_title_pane_g1

0xb279,	// (0x0002b038) graphic_text_title_pane_t1

0xb287,	// (0x0002b046) graphic_text_title_pane_t2

0x0001,

0xf986,	// (0x0002f745) graphic_text_title_pane_t

0xb24d,	// (0x0002b00c) graphic_text_digital_pane_g1

0xb255,	// (0x0002b014) graphic_text_digital_pane_t1

0xb263,	// (0x0002b022) graphic_text_digital_pane_t2

0x0001,

0xf981,	// (0x0002f740) graphic_text_digital_pane_t

0x18cb,	// (0x0002168a) navi_icon_pane_srt_ParamLimits

0x18cb,	// (0x0002168a) navi_icon_pane_srt

0x186f,	// (0x0002162e) navi_midp_pane_srt

0x186f,	// (0x0002162e) navi_navi_pane_srt

0x18cb,	// (0x0002168a) navi_text_pane_srt_ParamLimits

0x18cb,	// (0x0002168a) navi_text_pane_srt

0xb218,	// (0x0002afd7) navi_navi_icon_text_pane_srt

0xb220,	// (0x0002afdf) navi_navi_pane_srt_g1_ParamLimits

0xb220,	// (0x0002afdf) navi_navi_pane_srt_g1

0xb232,	// (0x0002aff1) navi_navi_pane_srt_g2_ParamLimits

0xb232,	// (0x0002aff1) navi_navi_pane_srt_g2

0x0001,

0xf97c,	// (0x0002f73b) navi_navi_pane_srt_g_ParamLimits

0xf97c,	// (0x0002f73b) navi_navi_pane_srt_g

0xb244,	// (0x0002b003) navi_navi_tabs_pane_srt

0xb218,	// (0x0002afd7) navi_navi_text_pane_srt

0xb218,	// (0x0002afd7) navi_navi_volume_pane_srt

0xb209,	// (0x0002afc8) navi_navi_text_pane_srt_t1

0x916d,	// (0x00028f2c) navi_navi_volume_pane_srt_g1

0x9175,	// (0x00028f34) volume_small_pane_srt_ParamLimits

0x9175,	// (0x00028f34) volume_small_pane_srt

0x7837,	// (0x000275f6) volume_small_pane_srt_g1_ParamLimits

0x7837,	// (0x000275f6) volume_small_pane_srt_g1

0x7847,	// (0x00027606) volume_small_pane_srt_g2_ParamLimits

0x7847,	// (0x00027606) volume_small_pane_srt_g2

0x7858,	// (0x00027617) volume_small_pane_srt_g3_ParamLimits

0x7858,	// (0x00027617) volume_small_pane_srt_g3

0x7869,	// (0x00027628) volume_small_pane_srt_g4_ParamLimits

0x7869,	// (0x00027628) volume_small_pane_srt_g4

0x787a,	// (0x00027639) volume_small_pane_srt_g5_ParamLimits

0x787a,	// (0x00027639) volume_small_pane_srt_g5

0x788b,	// (0x0002764a) volume_small_pane_srt_g6_ParamLimits

0x788b,	// (0x0002764a) volume_small_pane_srt_g6

0x789c,	// (0x0002765b) volume_small_pane_srt_g7_ParamLimits

0x789c,	// (0x0002765b) volume_small_pane_srt_g7

0x78ad,	// (0x0002766c) volume_small_pane_srt_g8_ParamLimits

0x78ad,	// (0x0002766c) volume_small_pane_srt_g8

0x78be,	// (0x0002767d) volume_small_pane_srt_g9_ParamLimits

0x78be,	// (0x0002767d) volume_small_pane_srt_g9

0x78cf,	// (0x0002768e) volume_small_pane_srt_g10_ParamLimits

0x78cf,	// (0x0002768e) volume_small_pane_srt_g10

0x0009,

0xf729,	// (0x0002f4e8) volume_small_pane_srt_g_ParamLimits

0xf729,	// (0x0002f4e8) volume_small_pane_srt_g

0x6cd5,	// (0x00026a94) query_popup_data_pane_cp2

0xb1ef,	// (0x0002afae) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1ef,	// (0x0002afae) navi_navi_icon_text_pane_srt_t1

0xa2ef,	// (0x0002a0ae) navi_tabs_2_long_pane_srt

0xa2ef,	// (0x0002a0ae) navi_tabs_2_pane_srt

0xa2ef,	// (0x0002a0ae) navi_tabs_3_long_pane_srt

0xa2ef,	// (0x0002a0ae) navi_tabs_3_pane_srt

0xa2ef,	// (0x0002a0ae) navi_tabs_4_pane_srt

0x914d,	// (0x00028f0c) tabs_2_active_pane_srt_ParamLimits

0x914d,	// (0x00028f0c) tabs_2_active_pane_srt

0x915d,	// (0x00028f1c) tabs_2_passive_pane_srt_ParamLimits

0x915d,	// (0x00028f1c) tabs_2_passive_pane_srt

0x1eb5,	// (0x00021c74) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1eb5,	// (0x00021c74) bg_passive_tab_pane_cp1_srt

0xb1bb,	// (0x0002af7a) bg_passive_tab_pane_g1_cp1_srt

0x7513,	// (0x000272d2) bg_passive_tab_pane_g2_cp1_srt

0xb1c4,	// (0x0002af83) bg_passive_tab_pane_g3_cp1_srt

0x18cb,	// (0x0002168a) bg_active_tab_pane_cp1_srt_ParamLimits

0x18cb,	// (0x0002168a) bg_active_tab_pane_cp1_srt

0xb1cd,	// (0x0002af8c) tabs_2_active_pane_srt_g1

0xb1d5,	// (0x0002af94) tabs_2_active_pane_srt_t1_ParamLimits

0xb1d5,	// (0x0002af94) tabs_2_active_pane_srt_t1

0xb1bb,	// (0x0002af7a) bg_active_tab_pane_g1_cp1_srt

0x7513,	// (0x000272d2) bg_active_tab_pane_g2_cp1_srt

0xb1c4,	// (0x0002af83) bg_active_tab_pane_g3_cp1_srt

0x911a,	// (0x00028ed9) tabs_3_active_pane_srt_ParamLimits

0x911a,	// (0x00028ed9) tabs_3_active_pane_srt

0x912b,	// (0x00028eea) tabs_3_passive_pane_cp_srt_ParamLimits

0x912b,	// (0x00028eea) tabs_3_passive_pane_cp_srt

0x913c,	// (0x00028efb) tabs_3_passive_pane_srt_ParamLimits

0x913c,	// (0x00028efb) tabs_3_passive_pane_srt

0x1eb5,	// (0x00021c74) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1eb5,	// (0x00021c74) bg_passive_tab_pane_cp2_srt

0x78e0,	// (0x0002769f) bg_passive_tab_pane_g1_cp2_srt

0x7513,	// (0x000272d2) bg_passive_tab_pane_g2_cp2_srt

0x78e9,	// (0x000276a8) bg_passive_tab_pane_g3_cp2_srt

0x18cb,	// (0x0002168a) bg_active_tab_pane_cp2_srt_ParamLimits

0x18cb,	// (0x0002168a) bg_active_tab_pane_cp2_srt

0xb1a1,	// (0x0002af60) tabs_3_active_pane_srt_g1

0xb1a9,	// (0x0002af68) tabs_3_active_pane_srt_t1_ParamLimits

0xb1a9,	// (0x0002af68) tabs_3_active_pane_srt_t1

0x78e0,	// (0x0002769f) bg_active_tab_pane_g1_cp2_srt

0x7513,	// (0x000272d2) bg_active_tab_pane_g2_cp2_srt

0x78e9,	// (0x000276a8) bg_active_tab_pane_g3_cp2_srt

0x90d2,	// (0x00028e91) tabs_4_active_pane_srt_ParamLimits

0x90d2,	// (0x00028e91) tabs_4_active_pane_srt

0x90e4,	// (0x00028ea3) tabs_4_passive_pane_cp2_srt_ParamLimits

0x90e4,	// (0x00028ea3) tabs_4_passive_pane_cp2_srt

0x7b1e,	// (0x000278dd) aid_size_cell_toolbar

0x7068,	// (0x00026e27) main_idle_act_pane_ParamLimits

0x7cb9,	// (0x00027a78) popup_large_graphic_colour_window_ParamLimits

0x8024,	// (0x00027de3) popup_toolbar_window_ParamLimits

0x8024,	// (0x00027de3) popup_toolbar_window

0xafa1,	// (0x0002ad60) list_single_graphic_2heading_pane_ParamLimits

0xafa1,	// (0x0002ad60) list_single_graphic_2heading_pane

0x2042,	// (0x00021e01) aid_size_cell_apps_grid_lsc_pane

0x2054,	// (0x00021e13) aid_size_cell_apps_grid_prt_pane

0x1eb5,	// (0x00021c74) bg_wml_button_pane_cp1_ParamLimits

0x1eb5,	// (0x00021c74) bg_wml_button_pane_cp1

0x89b6,	// (0x00028775) form_midp_field_text_pane_t1_ParamLimits

0x86f8,	// (0x000284b7) input_focus_pane_cp050_ParamLimits

0x89f0,	// (0x000287af) list_midp_form_text_pane_ParamLimits

0x8993,	// (0x00028752) input_focus_pane_cp051_ParamLimits

0x89a7,	// (0x00028766) list_midp_choice_pane_ParamLimits

0x8836,	// (0x000285f5) list_single_2graphic_pane_cp3_ParamLimits

0x8836,	// (0x000285f5) list_single_2graphic_pane_cp3

0x885b,	// (0x0002861a) list_single_midp_graphic_pane_ParamLimits

0x885b,	// (0x0002861a) list_single_midp_graphic_pane

0x5c7c,	// (0x00025a3b) list_single_graphic_2heading_pane_g1_ParamLimits

0x5c7c,	// (0x00025a3b) list_single_graphic_2heading_pane_g1

0x5582,	// (0x00025341) list_single_graphic_2heading_pane_g4_ParamLimits

0x5582,	// (0x00025341) list_single_graphic_2heading_pane_g4

0x558e,	// (0x0002534d) list_single_graphic_2heading_pane_g5_ParamLimits

0x558e,	// (0x0002534d) list_single_graphic_2heading_pane_g5

0x0002,

0xf77c,	// (0x0002f53b) list_single_graphic_2heading_pane_g_ParamLimits

0xf77c,	// (0x0002f53b) list_single_graphic_2heading_pane_g

0x5c88,	// (0x00025a47) list_single_graphic_2heading_pane_t1_ParamLimits

0x5c88,	// (0x00025a47) list_single_graphic_2heading_pane_t1

0x5c9c,	// (0x00025a5b) list_single_graphic_2heading_pane_t2_ParamLimits

0x5c9c,	// (0x00025a5b) list_single_graphic_2heading_pane_t2

0x5cb6,	// (0x00025a75) list_single_graphic_2heading_pane_t3_ParamLimits

0x5cb6,	// (0x00025a75) list_single_graphic_2heading_pane_t3

0x0002,

0xf783,	// (0x0002f542) list_single_graphic_2heading_pane_t_ParamLimits

0xf783,	// (0x0002f542) list_single_graphic_2heading_pane_t

0x8502,	// (0x000282c1) bg_popup_sub_pane_cp2

0x852c,	// (0x000282eb) grid_toobar_pane

0x8568,	// (0x00028327) cell_toolbar_pane_ParamLimits

0x8568,	// (0x00028327) cell_toolbar_pane

0x8598,	// (0x00028357) cell_toolbar_pane_g1_ParamLimits

0x8598,	// (0x00028357) cell_toolbar_pane_g1

0x85ac,	// (0x0002836b) cell_toolbar_pane_g2_ParamLimits

0x85ac,	// (0x0002836b) cell_toolbar_pane_g2

0x0001,

0xf791,	// (0x0002f550) cell_toolbar_pane_g_ParamLimits

0xf791,	// (0x0002f550) cell_toolbar_pane_g

0x85ce,	// (0x0002838d) grid_highlight_pane_cp2_ParamLimits

0x85ce,	// (0x0002838d) grid_highlight_pane_cp2

0x85e8,	// (0x000283a7) toolbar_button_pane

0x85f4,	// (0x000283b3) toolbar_button_pane_g1

0x85fc,	// (0x000283bb) toolbar_button_pane_g2

0x8604,	// (0x000283c3) toolbar_button_pane_g3

0x860c,	// (0x000283cb) toolbar_button_pane_g4

0x8614,	// (0x000283d3) toolbar_button_pane_g5

0x861c,	// (0x000283db) toolbar_button_pane_g6

0x8624,	// (0x000283e3) toolbar_button_pane_g7

0x862c,	// (0x000283eb) toolbar_button_pane_g8

0x8634,	// (0x000283f3) toolbar_button_pane_g9

0x0009,

0xf796,	// (0x0002f555) toolbar_button_pane_g

0x8644,	// (0x00028403) list_single_2graphic_pane_g1_cp3_ParamLimits

0x8644,	// (0x00028403) list_single_2graphic_pane_g1_cp3

0x8650,	// (0x0002840f) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8650,	// (0x0002840f) list_single_2graphic_pane_g2_cp3

0x2478,	// (0x00022237) list_single_2graphic_pane_g3_cp3

0x8661,	// (0x00028420) list_single_2graphic_pane_g4_cp3_ParamLimits

0x8661,	// (0x00028420) list_single_2graphic_pane_g4_cp3

0x866d,	// (0x0002842c) list_single_2graphic_pane_t1_cp3_ParamLimits

0x866d,	// (0x0002842c) list_single_2graphic_pane_t1_cp3

0x1c57,	// (0x00021a16) list_single_midp_graphic_pane_g2_ParamLimits

0x1c57,	// (0x00021a16) list_single_midp_graphic_pane_g2

0x7b26,	// (0x000278e5) aid_zoom_text_primary

0x5c50,	// (0x00025a0f) aid_zoom_text_secondary

0x7940,	// (0x000276ff) status_small_pane_g7_ParamLimits

0x7940,	// (0x000276ff) status_small_pane_g7

0x7963,	// (0x00027722) status_small_pane_t1_ParamLimits

0x69e1,	// (0x000267a0) title_pane_g2

0x0003,

0xf529,	// (0x0002f2e8) title_pane_g

0x6d2f,	// (0x00026aee) aid_size_cell_colour_1_pane_ParamLimits

0x6d2f,	// (0x00026aee) aid_size_cell_colour_1_pane

0x6d43,	// (0x00026b02) aid_size_cell_colour_2_pane_ParamLimits

0x6d43,	// (0x00026b02) aid_size_cell_colour_2_pane

0x6d57,	// (0x00026b16) aid_size_cell_colour_3_pane_ParamLimits

0x6d57,	// (0x00026b16) aid_size_cell_colour_3_pane

0x6d6b,	// (0x00026b2a) aid_size_cell_colour_4_pane_ParamLimits

0x6d6b,	// (0x00026b2a) aid_size_cell_colour_4_pane

0x70db,	// (0x00026e9a) title_pane_stacon_g1_ParamLimits

0x70db,	// (0x00026e9a) title_pane_stacon_g1

0x8dc0,	// (0x00028b7f) popup_note_wait_window_g3_ParamLimits

0x8dc0,	// (0x00028b7f) popup_note_wait_window_g3

0x8e36,	// (0x00028bf5) popup_note_wait_window_t5_ParamLimits

0x8e36,	// (0x00028bf5) popup_note_wait_window_t5

0x186f,	// (0x0002162e) main_feb_china_hwr_fs_writing_pane

0x7ba0,	// (0x0002795f) popup_feb_china_hwr_fs_window_ParamLimits

0x7ba0,	// (0x0002795f) popup_feb_china_hwr_fs_window

0x86e3,	// (0x000284a2) aid_size_cell_hwr_fs_ParamLimits

0x86e3,	// (0x000284a2) aid_size_cell_hwr_fs

0x86f8,	// (0x000284b7) bg_popup_sub_pane_cp3_ParamLimits

0x86f8,	// (0x000284b7) bg_popup_sub_pane_cp3

0x8704,	// (0x000284c3) grid_hwr_fs_pane_ParamLimits

0x8704,	// (0x000284c3) grid_hwr_fs_pane

0x871c,	// (0x000284db) linegrid_hwr_fs_pane_ParamLimits

0x871c,	// (0x000284db) linegrid_hwr_fs_pane

0x872c,	// (0x000284eb) cell_hwr_fs_pane_ParamLimits

0x872c,	// (0x000284eb) cell_hwr_fs_pane

0x874e,	// (0x0002850d) linegrid_hwr_fs_pane_g1_ParamLimits

0x874e,	// (0x0002850d) linegrid_hwr_fs_pane_g1

0x875a,	// (0x00028519) linegrid_hwr_fs_pane_g2_ParamLimits

0x875a,	// (0x00028519) linegrid_hwr_fs_pane_g2

0x876c,	// (0x0002852b) linegrid_hwr_fs_pane_g3_ParamLimits

0x876c,	// (0x0002852b) linegrid_hwr_fs_pane_g3

0x8778,	// (0x00028537) linegrid_hwr_fs_pane_g4_ParamLimits

0x8778,	// (0x00028537) linegrid_hwr_fs_pane_g4

0x8792,	// (0x00028551) linegrid_hwr_fs_pane_g5_ParamLimits

0x8792,	// (0x00028551) linegrid_hwr_fs_pane_g5

0x0004,

0xf7bc,	// (0x0002f57b) linegrid_hwr_fs_pane_g_ParamLimits

0xf7bc,	// (0x0002f57b) linegrid_hwr_fs_pane_g

0x87a8,	// (0x00028567) cell_hwr_fs_pane_g1_ParamLimits

0x87a8,	// (0x00028567) cell_hwr_fs_pane_g1

0x843c,	// (0x000281fb) cell_hwr_fs_pane_g2_ParamLimits

0x843c,	// (0x000281fb) cell_hwr_fs_pane_g2

0x87be,	// (0x0002857d) cell_hwr_fs_pane_g3_ParamLimits

0x87be,	// (0x0002857d) cell_hwr_fs_pane_g3

0x87cb,	// (0x0002858a) cell_hwr_fs_pane_g4_ParamLimits

0x87cb,	// (0x0002858a) cell_hwr_fs_pane_g4

0x0003,

0xf7c7,	// (0x0002f586) cell_hwr_fs_pane_g_ParamLimits

0xf7c7,	// (0x0002f586) cell_hwr_fs_pane_g

0x87d8,	// (0x00028597) cell_hwr_fs_pane_t1

0x186f,	// (0x0002162e) grid_highlight_pane_cp6

0x186f,	// (0x0002162e) main_idle_act2_pane

0x1e8c,	// (0x00021c4b) aid_inside_area_popup_secondary

0xa773,	// (0x0002a532) aid_inside_area_window_primary_ParamLimits

0xa773,	// (0x0002a532) aid_inside_area_window_primary

0xb308,	// (0x0002b0c7) ai2_news_ticker_pane

0xb310,	// (0x0002b0cf) aid_size_cell_ai1_link_ParamLimits

0xb310,	// (0x0002b0cf) aid_size_cell_ai1_link

0xb32a,	// (0x0002b0e9) popup_ai2_data_window_ParamLimits

0xb32a,	// (0x0002b0e9) popup_ai2_data_window

0xb340,	// (0x0002b0ff) popup_ai2_link_window_ParamLimits

0xb340,	// (0x0002b0ff) popup_ai2_link_window

0x86f8,	// (0x000284b7) bg_popup_sub_pane_cp4_ParamLimits

0x86f8,	// (0x000284b7) bg_popup_sub_pane_cp4

0xb354,	// (0x0002b113) grid_ai2_link_pane_ParamLimits

0xb354,	// (0x0002b113) grid_ai2_link_pane

0xb36b,	// (0x0002b12a) popup_ai2_link_window_g1_ParamLimits

0xb36b,	// (0x0002b12a) popup_ai2_link_window_g1

0xb377,	// (0x0002b136) popup_ai2_link_window_g2_ParamLimits

0xb377,	// (0x0002b136) popup_ai2_link_window_g2

0x0001,

0xf99a,	// (0x0002f759) popup_ai2_link_window_g_ParamLimits

0xf99a,	// (0x0002f759) popup_ai2_link_window_g

0xb386,	// (0x0002b145) ai2_mp_button_pane

0xb38e,	// (0x0002b14d) ai2_mp_volume_pane

0x8993,	// (0x00028752) bg_popup_sub_pane_cp5_ParamLimits

0x8993,	// (0x00028752) bg_popup_sub_pane_cp5

0xb396,	// (0x0002b155) heading_ai2_gene_pane_ParamLimits

0xb396,	// (0x0002b155) heading_ai2_gene_pane

0xb3a2,	// (0x0002b161) list_ai2_gene_pane_ParamLimits

0xb3a2,	// (0x0002b161) list_ai2_gene_pane

0xb3ea,	// (0x0002b1a9) cell_ai2_link_pane_ParamLimits

0xb3ea,	// (0x0002b1a9) cell_ai2_link_pane

0xb400,	// (0x0002b1bf) cell_ai2_link_pane_g1

0x186f,	// (0x0002162e) grid_highlight_pane_cp7

0x918a,	// (0x00028f49) ai2_mp_volume_pane_g1

0xb4d0,	// (0x0002b28f) ai2_mp_volume_pane_g2

0xb445,	// (0x0002b204) list_ai2_gene_pane_t1

0xb4d8,	// (0x0002b297) ai2_mp_volume_pane_g3

0x0002,

0xf9b3,	// (0x0002f772) ai2_mp_volume_pane_g

0x9192,	// (0x00028f51) volume_small_pane_cp3

0xb4e0,	// (0x0002b29f) aid_size_cell_ai2_button

0xb4e8,	// (0x0002b2a7) grid_ai2_button_pane

0xb4f1,	// (0x0002b2b0) cell_ai2_button_pane_ParamLimits

0xb4f1,	// (0x0002b2b0) cell_ai2_button_pane

0x1865,	// (0x00021624) cell_ai2_button_pane_g1

0x186f,	// (0x0002162e) grid_highlight_pane_cp8

0xb490,	// (0x0002b24f) ai2_gene_pane_t1_ParamLimits

0xb490,	// (0x0002b24f) ai2_gene_pane_t1

0x7b14,	// (0x000278d3) aid_height_parent_landscape

0xaddc,	// (0x0002ab9b) aid_height_set_list

0xaded,	// (0x0002abac) aid_size_parent

0xb12b,	// (0x0002aeea) aid_size_cell_graphic_pane_ParamLimits

0xb3b2,	// (0x0002b171) popup_ai2_data_window_g1_ParamLimits

0xb3b2,	// (0x0002b171) popup_ai2_data_window_g1

0xb3be,	// (0x0002b17d) ai2_news_ticker_pane_g1

0xb3c6,	// (0x0002b185) ai2_news_ticker_pane_g2

0x0001,

0xf99f,	// (0x0002f75e) ai2_news_ticker_pane_g

0xb3ce,	// (0x0002b18d) ai2_news_ticker_pane_t1

0xb3dc,	// (0x0002b19b) ai2_news_ticker_pane_t2

0x0001,

0xf9a4,	// (0x0002f763) ai2_news_ticker_pane_t

0xb409,	// (0x0002b1c8) heading_ai2_gene_pane_g1

0xb411,	// (0x0002b1d0) heading_ai2_gene_pane_t1_ParamLimits

0xb411,	// (0x0002b1d0) heading_ai2_gene_pane_t1

0xb426,	// (0x0002b1e5) list_highlight_pane_cp6

0xb42e,	// (0x0002b1ed) ai2_gene_pane_ParamLimits

0xb42e,	// (0x0002b1ed) ai2_gene_pane

0xb453,	// (0x0002b212) list_ai2_gene_pane_t2

0x0001,

0xf9a9,	// (0x0002f768) list_ai2_gene_pane_t

0xb461,	// (0x0002b220) list_highlight_pane_cp8_ParamLimits

0xb461,	// (0x0002b220) list_highlight_pane_cp8

0xb472,	// (0x0002b231) ai2_gene_pane_g1_ParamLimits

0xb472,	// (0x0002b231) ai2_gene_pane_g1

0xb484,	// (0x0002b243) ai2_gene_pane_g2_ParamLimits

0xb484,	// (0x0002b243) ai2_gene_pane_g2

0x0001,

0xf9ae,	// (0x0002f76d) ai2_gene_pane_g_ParamLimits

0xf9ae,	// (0x0002f76d) ai2_gene_pane_g

0x1c3a,	// (0x000219f9) scroll_pane_cp12

0x7ad1,	// (0x00027890) control_pane_t3_ParamLimits

0x7ad1,	// (0x00027890) control_pane_t3

0x7954,	// (0x00027713) status_small_pane_g8_ParamLimits

0x7954,	// (0x00027713) status_small_pane_g8

0x7c82,	// (0x00027a41) popup_find_window_ParamLimits

0x7e9b,	// (0x00027c5a) popup_note_image_window_ParamLimits

0x5cce,	// (0x00025a8d) list_double2_graphic_pane_vc_g1_ParamLimits

0x5cce,	// (0x00025a8d) list_double2_graphic_pane_vc_g1

0x5cda,	// (0x00025a99) list_double2_graphic_pane_vc_g2_ParamLimits

0x5cda,	// (0x00025a99) list_double2_graphic_pane_vc_g2

0x5ce6,	// (0x00025aa5) list_double2_graphic_pane_vc_g3_ParamLimits

0x5ce6,	// (0x00025aa5) list_double2_graphic_pane_vc_g3

0x0002,

0xf78a,	// (0x0002f549) list_double2_graphic_pane_vc_g_ParamLimits

0xf78a,	// (0x0002f549) list_double2_graphic_pane_vc_g

0x5cf2,	// (0x00025ab1) list_double2_graphic_pane_vc_t1_ParamLimits

0x5cf2,	// (0x00025ab1) list_double2_graphic_pane_vc_t1

0x5582,	// (0x00025341) list_single_heading_pane_vc_g1_ParamLimits

0x5582,	// (0x00025341) list_single_heading_pane_vc_g1

0x558e,	// (0x0002534d) list_single_heading_pane_vc_g2_ParamLimits

0x558e,	// (0x0002534d) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002f362) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002f362) list_single_heading_pane_vc_g

0x5d08,	// (0x00025ac7) list_single_heading_pane_vc_t1_ParamLimits

0x5d08,	// (0x00025ac7) list_single_heading_pane_vc_t1

0x5d1e,	// (0x00025add) list_single_heading_pane_vc_t2_ParamLimits

0x5d1e,	// (0x00025add) list_single_heading_pane_vc_t2

0x0001,

0xf7ab,	// (0x0002f56a) list_single_heading_pane_vc_t_ParamLimits

0xf7ab,	// (0x0002f56a) list_single_heading_pane_vc_t

0x869f,	// (0x0002845e) list_setting_number_pane_vc_g1_ParamLimits

0x869f,	// (0x0002845e) list_setting_number_pane_vc_g1

0x86ab,	// (0x0002846a) list_setting_number_pane_vc_g2_ParamLimits

0x86ab,	// (0x0002846a) list_setting_number_pane_vc_g2

0x0001,

0xf7b0,	// (0x0002f56f) list_setting_number_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002f56f) list_setting_number_pane_vc_g

0x5d30,	// (0x00025aef) list_setting_number_pane_vc_t1_ParamLimits

0x5d30,	// (0x00025aef) list_setting_number_pane_vc_t1

0x5d44,	// (0x00025b03) list_setting_number_pane_vc_t2_ParamLimits

0x5d44,	// (0x00025b03) list_setting_number_pane_vc_t2

0x5d60,	// (0x00025b1f) list_setting_number_pane_vc_t3_ParamLimits

0x5d60,	// (0x00025b1f) list_setting_number_pane_vc_t3

0x0002,

0xf7b5,	// (0x0002f574) list_setting_number_pane_vc_t_ParamLimits

0xf7b5,	// (0x0002f574) list_setting_number_pane_vc_t

0x5d8a,	// (0x00025b49) set_value_pane_vc_ParamLimits

0x5d8a,	// (0x00025b49) set_value_pane_vc

0xafa1,	// (0x0002ad60) list_double2_graphic_pane_vc_ParamLimits

0xafa1,	// (0x0002ad60) list_double2_graphic_pane_vc

0xafa1,	// (0x0002ad60) list_double2_large_graphic_pane_vc_ParamLimits

0xafa1,	// (0x0002ad60) list_double2_large_graphic_pane_vc

0xafa1,	// (0x0002ad60) list_double2_pane_vc_ParamLimits

0xafa1,	// (0x0002ad60) list_double2_pane_vc

0xafa1,	// (0x0002ad60) list_double_graphic_heading_pane_vc_ParamLimits

0xafa1,	// (0x0002ad60) list_double_graphic_heading_pane_vc

0xafa1,	// (0x0002ad60) list_double_graphic_pane_vc_ParamLimits

0xafa1,	// (0x0002ad60) list_double_graphic_pane_vc

0xafa1,	// (0x0002ad60) list_double_heading_pane_vc_ParamLimits

0xafa1,	// (0x0002ad60) list_double_heading_pane_vc

0x5e4f,	// (0x00025c0e) list_double_large_graphic_pane_vc_ParamLimits

0x5e4f,	// (0x00025c0e) list_double_large_graphic_pane_vc

0xafa1,	// (0x0002ad60) list_double_number_pane_vc_ParamLimits

0xafa1,	// (0x0002ad60) list_double_number_pane_vc

0xafa1,	// (0x0002ad60) list_double_pane_vc_ParamLimits

0xafa1,	// (0x0002ad60) list_double_pane_vc

0xafa1,	// (0x0002ad60) list_double_time_pane_vc_ParamLimits

0xafa1,	// (0x0002ad60) list_double_time_pane_vc

0xafa1,	// (0x0002ad60) list_setting_number_pane_vc_ParamLimits

0xafa1,	// (0x0002ad60) list_setting_number_pane_vc

0xafa1,	// (0x0002ad60) list_setting_pane_vc_ParamLimits

0xafa1,	// (0x0002ad60) list_setting_pane_vc

0xafa1,	// (0x0002ad60) list_single_graphic_heading_pane_vc_ParamLimits

0xafa1,	// (0x0002ad60) list_single_graphic_heading_pane_vc

0xafa1,	// (0x0002ad60) list_single_heading_pane_vc_ParamLimits

0xafa1,	// (0x0002ad60) list_single_heading_pane_vc

0x5e6e,	// (0x00025c2d) list_single_number_heading_pane_vc_ParamLimits

0x5e6e,	// (0x00025c2d) list_single_number_heading_pane_vc

0x5ed6,	// (0x00025c95) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5ed6,	// (0x00025c95) list_double_graphic_heading_pane_vc_g1

0x5cda,	// (0x00025a99) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5cda,	// (0x00025a99) list_double_graphic_heading_pane_vc_g2

0x5ce6,	// (0x00025aa5) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5ce6,	// (0x00025aa5) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ba,	// (0x0002f779) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ba,	// (0x0002f779) list_double_graphic_heading_pane_vc_g

0x5ee2,	// (0x00025ca1) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5ee2,	// (0x00025ca1) list_double_graphic_heading_pane_vc_t1

0x5ef6,	// (0x00025cb5) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5ef6,	// (0x00025cb5) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c1,	// (0x0002f780) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c1,	// (0x0002f780) list_double_graphic_heading_pane_vc_t

0x869f,	// (0x0002845e) list_setting_pane_vc_g1_ParamLimits

0x869f,	// (0x0002845e) list_setting_pane_vc_g1

0x86ab,	// (0x0002846a) list_setting_pane_vc_g2_ParamLimits

0x86ab,	// (0x0002846a) list_setting_pane_vc_g2

0x0001,

0xf7b0,	// (0x0002f56f) list_setting_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002f56f) list_setting_pane_vc_g

0x5f0e,	// (0x00025ccd) list_setting_pane_vc_t1_ParamLimits

0x5f0e,	// (0x00025ccd) list_setting_pane_vc_t1

0x5f2a,	// (0x00025ce9) list_setting_pane_vc_t2_ParamLimits

0x5f2a,	// (0x00025ce9) list_setting_pane_vc_t2

0x0001,

0xfa04,	// (0x0002f7c3) list_setting_pane_vc_t_ParamLimits

0xfa04,	// (0x0002f7c3) list_setting_pane_vc_t

0x5d8a,	// (0x00025b49) set_value_pane_cp_vc_ParamLimits

0x5d8a,	// (0x00025b49) set_value_pane_cp_vc

0x5582,	// (0x00025341) list_single_number_heading_pane_vc_g1_ParamLimits

0x5582,	// (0x00025341) list_single_number_heading_pane_vc_g1

0x558e,	// (0x0002534d) list_single_number_heading_pane_vc_g2_ParamLimits

0x558e,	// (0x0002534d) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002f362) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002f362) list_single_number_heading_pane_vc_g

0x5f44,	// (0x00025d03) list_single_number_heading_pane_vc_t1_ParamLimits

0x5f44,	// (0x00025d03) list_single_number_heading_pane_vc_t1

0x5f5a,	// (0x00025d19) list_single_number_heading_pane_vc_t2_ParamLimits

0x5f5a,	// (0x00025d19) list_single_number_heading_pane_vc_t2

0x5f6c,	// (0x00025d2b) list_single_number_heading_pane_vc_t3_ParamLimits

0x5f6c,	// (0x00025d2b) list_single_number_heading_pane_vc_t3

0x0002,

0xfa09,	// (0x0002f7c8) list_single_number_heading_pane_vc_t_ParamLimits

0xfa09,	// (0x0002f7c8) list_single_number_heading_pane_vc_t

0x5f7e,	// (0x00025d3d) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5f7e,	// (0x00025d3d) list_single_graphic_heading_pane_vc_g1

0x5582,	// (0x00025341) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x5582,	// (0x00025341) list_single_graphic_heading_pane_vc_g4

0x558e,	// (0x0002534d) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x558e,	// (0x0002534d) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa10,	// (0x0002f7cf) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa10,	// (0x0002f7cf) list_single_graphic_heading_pane_vc_g

0x5f8a,	// (0x00025d49) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5f8a,	// (0x00025d49) list_single_graphic_heading_pane_vc_t1

0x5fa0,	// (0x00025d5f) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5fa0,	// (0x00025d5f) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa17,	// (0x0002f7d6) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa17,	// (0x0002f7d6) list_single_graphic_heading_pane_vc_t

0x5582,	// (0x00025341) list_double2_pane_vc_g1_ParamLimits

0x5582,	// (0x00025341) list_double2_pane_vc_g1

0x558e,	// (0x0002534d) list_double2_pane_vc_g2_ParamLimits

0x558e,	// (0x0002534d) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002f362) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002f362) list_double2_pane_vc_g

0x5fb2,	// (0x00025d71) list_double2_pane_vc_t1_ParamLimits

0x5fb2,	// (0x00025d71) list_double2_pane_vc_t1

0x5fca,	// (0x00025d89) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5fca,	// (0x00025d89) list_double2_large_graphic_pane_vc_g1

0x5582,	// (0x00025341) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5582,	// (0x00025341) list_double2_large_graphic_pane_vc_g2

0x558e,	// (0x0002534d) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x558e,	// (0x0002534d) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa1c,	// (0x0002f7db) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa1c,	// (0x0002f7db) list_double2_large_graphic_pane_vc_g

0x5cf2,	// (0x00025ab1) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5cf2,	// (0x00025ab1) list_double2_large_graphic_pane_vc_t1

0x5fd6,	// (0x00025d95) list_double_time_pane_vc_g1_ParamLimits

0x5fd6,	// (0x00025d95) list_double_time_pane_vc_g1

0x5fe2,	// (0x00025da1) list_double_time_pane_vc_g2_ParamLimits

0x5fe2,	// (0x00025da1) list_double_time_pane_vc_g2

0x0001,

0xfa23,	// (0x0002f7e2) list_double_time_pane_vc_g_ParamLimits

0xfa23,	// (0x0002f7e2) list_double_time_pane_vc_g

0x5fee,	// (0x00025dad) list_double_time_pane_vc_t1_ParamLimits

0x5fee,	// (0x00025dad) list_double_time_pane_vc_t1

0x6012,	// (0x00025dd1) list_double_time_pane_vc_t2_ParamLimits

0x6012,	// (0x00025dd1) list_double_time_pane_vc_t2

0x6061,	// (0x00025e20) list_double_time_pane_vc_t3_ParamLimits

0x6061,	// (0x00025e20) list_double_time_pane_vc_t3

0x6073,	// (0x00025e32) list_double_time_pane_vc_t4_ParamLimits

0x6073,	// (0x00025e32) list_double_time_pane_vc_t4

0x0003,

0xfa28,	// (0x0002f7e7) list_double_time_pane_vc_t_ParamLimits

0xfa28,	// (0x0002f7e7) list_double_time_pane_vc_t

0x5582,	// (0x00025341) list_double_pane_vc_g1_ParamLimits

0x5582,	// (0x00025341) list_double_pane_vc_g1

0x558e,	// (0x0002534d) list_double_pane_vc_g2_ParamLimits

0x558e,	// (0x0002534d) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002f362) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002f362) list_double_pane_vc_g

0x6087,	// (0x00025e46) list_double_pane_vc_t1_ParamLimits

0x6087,	// (0x00025e46) list_double_pane_vc_t1

0x609b,	// (0x00025e5a) list_double_pane_vc_t2_ParamLimits

0x609b,	// (0x00025e5a) list_double_pane_vc_t2

0x0001,

0xfa31,	// (0x0002f7f0) list_double_pane_vc_t_ParamLimits

0xfa31,	// (0x0002f7f0) list_double_pane_vc_t

0x5582,	// (0x00025341) list_double_number_pane_vc_g1_ParamLimits

0x5582,	// (0x00025341) list_double_number_pane_vc_g1

0x558e,	// (0x0002534d) list_double_number_pane_vc_g2_ParamLimits

0x558e,	// (0x0002534d) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002f362) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002f362) list_double_number_pane_vc_g

0x60b3,	// (0x00025e72) list_double_number_pane_vc_t1_ParamLimits

0x60b3,	// (0x00025e72) list_double_number_pane_vc_t1

0x6087,	// (0x00025e46) list_double_number_pane_vc_t2_ParamLimits

0x6087,	// (0x00025e46) list_double_number_pane_vc_t2

0x60c5,	// (0x00025e84) list_double_number_pane_vc_t3_ParamLimits

0x60c5,	// (0x00025e84) list_double_number_pane_vc_t3

0x0002,

0xfa36,	// (0x0002f7f5) list_double_number_pane_vc_t_ParamLimits

0xfa36,	// (0x0002f7f5) list_double_number_pane_vc_t

0x60dd,	// (0x00025e9c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x60dd,	// (0x00025e9c) list_double_large_graphic_pane_vc_g1

0x60f9,	// (0x00025eb8) list_double_large_graphic_pane_vc_g2_ParamLimits

0x60f9,	// (0x00025eb8) list_double_large_graphic_pane_vc_g2

0x610d,	// (0x00025ecc) list_double_large_graphic_pane_vc_g3_ParamLimits

0x610d,	// (0x00025ecc) list_double_large_graphic_pane_vc_g3

0x611c,	// (0x00025edb) list_double_large_graphic_pane_vc_g4_ParamLimits

0x611c,	// (0x00025edb) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3d,	// (0x0002f7fc) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3d,	// (0x0002f7fc) list_double_large_graphic_pane_vc_g

0x6128,	// (0x00025ee7) list_double_large_graphic_pane_vc_t1_ParamLimits

0x6128,	// (0x00025ee7) list_double_large_graphic_pane_vc_t1

0x6144,	// (0x00025f03) list_double_large_graphic_pane_vc_t2_ParamLimits

0x6144,	// (0x00025f03) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa46,	// (0x0002f805) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa46,	// (0x0002f805) list_double_large_graphic_pane_vc_t

0x5cda,	// (0x00025a99) list_double_heading_pane_vc_g1_ParamLimits

0x5cda,	// (0x00025a99) list_double_heading_pane_vc_g1

0x5ce6,	// (0x00025aa5) list_double_heading_pane_vc_g2_ParamLimits

0x5ce6,	// (0x00025aa5) list_double_heading_pane_vc_g2

0x0001,

0xfa4b,	// (0x0002f80a) list_double_heading_pane_vc_g_ParamLimits

0xfa4b,	// (0x0002f80a) list_double_heading_pane_vc_g

0x6166,	// (0x00025f25) list_double_heading_pane_vc_t1_ParamLimits

0x6166,	// (0x00025f25) list_double_heading_pane_vc_t1

0x617a,	// (0x00025f39) list_double_heading_pane_vc_t2_ParamLimits

0x617a,	// (0x00025f39) list_double_heading_pane_vc_t2

0x0001,

0xfa50,	// (0x0002f80f) list_double_heading_pane_vc_t_ParamLimits

0xfa50,	// (0x0002f80f) list_double_heading_pane_vc_t

0x6192,	// (0x00025f51) list_double_graphic_pane_vc_g1_ParamLimits

0x6192,	// (0x00025f51) list_double_graphic_pane_vc_g1

0x61a5,	// (0x00025f64) list_double_graphic_pane_vc_g2_ParamLimits

0x61a5,	// (0x00025f64) list_double_graphic_pane_vc_g2

0x5582,	// (0x00025341) list_double_graphic_pane_vc_g3_ParamLimits

0x5582,	// (0x00025341) list_double_graphic_pane_vc_g3

0x0003,

0xfa55,	// (0x0002f814) list_double_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x0002f814) list_double_graphic_pane_vc_g

0x61c2,	// (0x00025f81) list_double_graphic_pane_vc_t1_ParamLimits

0x61c2,	// (0x00025f81) list_double_graphic_pane_vc_t1

0x61e1,	// (0x00025fa0) list_double_graphic_pane_vc_t2_ParamLimits

0x61e1,	// (0x00025fa0) list_double_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x0002f81d) list_double_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x0002f81d) list_double_graphic_pane_vc_t

0x660b,	// (0x000263ca) aid_size_cell_fastswap

0x6613,	// (0x000263d2) aid_size_cell_touch_ParamLimits

0x6613,	// (0x000263d2) aid_size_cell_touch

0x686e,	// (0x0002662d) popup_fast_swap_wide_window_ParamLimits

0x686e,	// (0x0002662d) popup_fast_swap_wide_window

0x6974,	// (0x00026733) touch_pane_ParamLimits

0x6974,	// (0x00026733) touch_pane

0x1cce,	// (0x00021a8d) button_value_adjust_pane_cp2

0x596f,	// (0x0002572e) button_value_adjust_pane_cp4

0x598f,	// (0x0002574e) form_field_data_pane_cp2

0x59ae,	// (0x0002576d) form_field_data_wide_pane_cp2

0x2079,	// (0x00021e38) bg_scroll_pane_ParamLimits

0x72d5,	// (0x00027094) scroll_handle_pane_ParamLimits

0x72e9,	// (0x000270a8) scroll_sc2_down_pane_ParamLimits

0x72e9,	// (0x000270a8) scroll_sc2_down_pane

0x20aa,	// (0x00021e69) scroll_sc2_up_pane_ParamLimits

0x20aa,	// (0x00021e69) scroll_sc2_up_pane

0xbbd2,	// (0x0002b991) grid_wheel_folder_pane_g1_ParamLimits

0xbbd2,	// (0x0002b991) grid_wheel_folder_pane_g1

0x7638,	// (0x000273f7) clock_nsta_pane_cp2_ParamLimits

0x7638,	// (0x000273f7) clock_nsta_pane_cp2

0x7763,	// (0x00027522) listscroll_midp_pane_ParamLimits

0x776f,	// (0x0002752e) midp_canvas_pane

0x273a,	// (0x000224f9) nsta_clock_indic_pane

0x2762,	// (0x00022521) listscroll_form_pane_vc

0x276a,	// (0x00022529) listscroll_set_pane_vc_ParamLimits

0x276a,	// (0x00022529) listscroll_set_pane_vc

0x81aa,	// (0x00027f69) clock_nsta_pane

0x8225,	// (0x00027fe4) indicator_nsta_pane

0x8502,	// (0x000282c1) bg_popup_sub_pane_cp2_ParamLimits

0x8516,	// (0x000282d5) find_pane_cp2_ParamLimits

0x8516,	// (0x000282d5) find_pane_cp2

0x852c,	// (0x000282eb) grid_toobar_pane_ParamLimits

0x86b7,	// (0x00028476) list_form_gen_pane_vc_ParamLimits

0x86b7,	// (0x00028476) list_form_gen_pane_vc

0x86cd,	// (0x0002848c) scroll_pane_cp8_vc_ParamLimits

0x86cd,	// (0x0002848c) scroll_pane_cp8_vc

0x87e6,	// (0x000285a5) data_form_wide_pane_vc_ParamLimits

0x87e6,	// (0x000285a5) data_form_wide_pane_vc

0x87f2,	// (0x000285b1) form_field_data_wide_pane_vc_g1

0x87fa,	// (0x000285b9) form_field_data_wide_pane_vc_t1_ParamLimits

0x87fa,	// (0x000285b9) form_field_data_wide_pane_vc_t1

0x1d05,	// (0x00021ac4) input_focus_pane_cp6_vc_ParamLimits

0x1d05,	// (0x00021ac4) input_focus_pane_cp6_vc

0x8b27,	// (0x000288e6) list_midp_pane_ParamLimits

0x8b33,	// (0x000288f2) scroll_pane_cp16_ParamLimits

0x8b33,	// (0x000288f2) scroll_pane_cp16

0x8b9d,	// (0x0002895c) button_value_adjust_pane_ParamLimits

0x8b9d,	// (0x0002895c) button_value_adjust_pane

0xadff,	// (0x0002abbe) button_value_adjust_pane_cp6_ParamLimits

0xadff,	// (0x0002abbe) button_value_adjust_pane_cp6

0xaf25,	// (0x0002ace4) settings_code_pane_cp_ParamLimits

0xaf25,	// (0x0002ace4) settings_code_pane_cp

0x1865,	// (0x00021624) cell_touch_pane_g1

0x1865,	// (0x00021624) cell_touch_pane_g2

0x0001,

0xf6cf,	// (0x0002f48e) cell_touch_pane_g

0xb503,	// (0x0002b2c2) cell_touch_pane_cp_ParamLimits

0xb503,	// (0x0002b2c2) cell_touch_pane_cp

0xb513,	// (0x0002b2d2) cell_touch_pane_ParamLimits

0xb513,	// (0x0002b2d2) cell_touch_pane

0x1865,	// (0x00021624) scroll_sc2_down_pane_g1

0x1865,	// (0x00021624) scroll_sc2_up_pane_g1

0x186f,	// (0x0002162e) bg_set_opt_pane_cp4_vc

0xb525,	// (0x0002b2e4) list_set_graphic_pane_vc_g1_ParamLimits

0xb525,	// (0x0002b2e4) list_set_graphic_pane_vc_g1

0xb531,	// (0x0002b2f0) list_set_graphic_pane_vc_g2_ParamLimits

0xb531,	// (0x0002b2f0) list_set_graphic_pane_vc_g2

0x0001,

0xf9c6,	// (0x0002f785) list_set_graphic_pane_vc_g_ParamLimits

0xf9c6,	// (0x0002f785) list_set_graphic_pane_vc_g

0xb53d,	// (0x0002b2fc) text_primary_small_cp13_vc_ParamLimits

0xb53d,	// (0x0002b2fc) text_primary_small_cp13_vc

0xb555,	// (0x0002b314) list_set_graphic_pane_vc_ParamLimits

0xb555,	// (0x0002b314) list_set_graphic_pane_vc

0x186f,	// (0x0002162e) input_focus_pane_cp2_vc

0x1865,	// (0x00021624) setting_code_pane_vc_g1

0x18e2,	// (0x000216a1) setting_code_pane_vc_t1

0xb568,	// (0x0002b327) set_text_pane_vc_t1_ParamLimits

0xb568,	// (0x0002b327) set_text_pane_vc_t1

0x186f,	// (0x0002162e) input_focus_pane_cp1_vc

0xb585,	// (0x0002b344) list_set_text_pane_vc

0x1865,	// (0x00021624) setting_text_pane_vc_g1

0x186f,	// (0x0002162e) bg_set_opt_pane_cp2_vc

0x18d9,	// (0x00021698) setting_slider_graphic_pane_vc_g1

0xb58f,	// (0x0002b34e) setting_slider_graphic_pane_vc_t1

0xb59f,	// (0x0002b35e) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9cb,	// (0x0002f78a) setting_slider_graphic_pane_vc_t

0xb5af,	// (0x0002b36e) slider_set_pane_cp_vc

0xb5b7,	// (0x0002b376) slider_set_pane_vc_g1

0xb5c0,	// (0x0002b37f) slider_set_pane_vc_g2

0x0006,

0xf9d0,	// (0x0002f78f) slider_set_pane_vc_g

0x1dcb,	// (0x00021b8a) set_opt_bg_pane_g1_copy1

0x1dd3,	// (0x00021b92) set_opt_bg_pane_g2_copy1

0xb5ec,	// (0x0002b3ab) set_opt_bg_pane_g3_copy1

0x1de3,	// (0x00021ba2) set_opt_bg_pane_g4_copy1

0x1deb,	// (0x00021baa) set_opt_bg_pane_g5_copy1

0x1df3,	// (0x00021bb2) set_opt_bg_pane_g6_copy1

0xb5f4,	// (0x0002b3b3) set_opt_bg_pane_g7_copy1

0xb5fe,	// (0x0002b3bd) set_opt_bg_pane_g8_copy1

0xb606,	// (0x0002b3c5) set_opt_bg_pane_g9_copy1

0x186f,	// (0x0002162e) bg_set_opt_pane_cp_vc

0xb60e,	// (0x0002b3cd) setting_slider_pane_vc_t1

0xb61d,	// (0x0002b3dc) setting_slider_pane_vc_t2

0xb62d,	// (0x0002b3ec) setting_slider_pane_vc_t3

0x0002,

0xf9df,	// (0x0002f79e) setting_slider_pane_vc_t

0xb63d,	// (0x0002b3fc) slider_set_pane_vc

0x8ea0,	// (0x00028c5f) volume_set_pane_vc_g1

0x919b,	// (0x00028f5a) volume_set_pane_vc_g2

0x91a4,	// (0x00028f63) volume_set_pane_vc_g3

0x91ad,	// (0x00028f6c) volume_set_pane_vc_g4

0x91b6,	// (0x00028f75) volume_set_pane_vc_g5

0x91bf,	// (0x00028f7e) volume_set_pane_vc_g6

0x91c8,	// (0x00028f87) volume_set_pane_vc_g7

0x91d1,	// (0x00028f90) volume_set_pane_vc_g8

0x91da,	// (0x00028f99) volume_set_pane_vc_g9

0x91e3,	// (0x00028fa2) volume_set_pane_vc_g10

0x0009,

0xf9e6,	// (0x0002f7a5) volume_set_pane_vc_g

0xb645,	// (0x0002b404) volume_set_pane_vc

0xb64f,	// (0x0002b40e) button_value_adjust_pane_cp1_vc

0xb659,	// (0x0002b418) list_highlight_pane_cp2_vc

0xb662,	// (0x0002b421) list_set_pane_vc_ParamLimits

0xb662,	// (0x0002b421) list_set_pane_vc

0xb6c0,	// (0x0002b47f) main_pane_set_vc_t1_ParamLimits

0xb6c0,	// (0x0002b47f) main_pane_set_vc_t1

0xb6d5,	// (0x0002b494) main_pane_set_vc_t2_ParamLimits

0xb6d5,	// (0x0002b494) main_pane_set_vc_t2

0xb6e7,	// (0x0002b4a6) main_pane_set_vc_t3_ParamLimits

0xb6e7,	// (0x0002b4a6) main_pane_set_vc_t3

0xb6f9,	// (0x0002b4b8) main_pane_set_vc_t4_ParamLimits

0xb6f9,	// (0x0002b4b8) main_pane_set_vc_t4

0x0003,

0xf9fb,	// (0x0002f7ba) main_pane_set_vc_t_ParamLimits

0xf9fb,	// (0x0002f7ba) main_pane_set_vc_t

0xb70b,	// (0x0002b4ca) setting_code_pane_vc_ParamLimits

0xb70b,	// (0x0002b4ca) setting_code_pane_vc

0xb71a,	// (0x0002b4d9) setting_slider_graphic_pane_vc

0xb71a,	// (0x0002b4d9) setting_slider_pane_vc

0xb71a,	// (0x0002b4d9) setting_text_pane_vc

0xb71a,	// (0x0002b4d9) setting_volume_pane_vc

0xb722,	// (0x0002b4e1) scroll_pane_cp121_vc

0x1cbc,	// (0x00021a7b) set_content_pane_vc

0xb72a,	// (0x0002b4e9) button_value_adjust_pane_g1

0xb733,	// (0x0002b4f2) button_value_adjust_pane_g2

0x0001,

0xfa63,	// (0x0002f822) button_value_adjust_pane_g

0xb73c,	// (0x0002b4fb) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb73c,	// (0x0002b4fb) form_field_slider_wide_pane_vc_t1

0xb750,	// (0x0002b50f) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb750,	// (0x0002b50f) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa68,	// (0x0002f827) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa68,	// (0x0002f827) form_field_slider_wide_pane_vc_t

0x18bd,	// (0x0002167c) input_focus_pane_cp10_vc_ParamLimits

0x18bd,	// (0x0002167c) input_focus_pane_cp10_vc

0xb77e,	// (0x0002b53d) slider_cont_pane_cp1_vc_ParamLimits

0xb77e,	// (0x0002b53d) slider_cont_pane_cp1_vc

0xb790,	// (0x0002b54f) slider_form_pane_g1_cp2

0xb5c0,	// (0x0002b37f) slider_form_pane_g2_cp2

0xb7bd,	// (0x0002b57c) form_field_slider_pane_vc_t3

0xb7cb,	// (0x0002b58a) form_field_slider_pane_vc_t4

0xb7d9,	// (0x0002b598) slider_form_pane_vc_ParamLimits

0xb7d9,	// (0x0002b598) slider_form_pane_vc

0xb7e6,	// (0x0002b5a5) form_field_slider_pane_vc_t1_ParamLimits

0xb7e6,	// (0x0002b5a5) form_field_slider_pane_vc_t1

0xb750,	// (0x0002b50f) form_field_slider_pane_vc_t2_ParamLimits

0xb750,	// (0x0002b50f) form_field_slider_pane_vc_t2

0x0001,

0xfa7a,	// (0x0002f839) form_field_slider_pane_vc_t_ParamLimits

0xfa7a,	// (0x0002f839) form_field_slider_pane_vc_t

0x18bd,	// (0x0002167c) input_focus_pane_cp9_vc_ParamLimits

0x18bd,	// (0x0002167c) input_focus_pane_cp9_vc

0xb802,	// (0x0002b5c1) slider_cont_pane_vc_ParamLimits

0xb802,	// (0x0002b5c1) slider_cont_pane_vc

0xb816,	// (0x0002b5d5) list_form_graphic_pane_cp_vc_ParamLimits

0xb816,	// (0x0002b5d5) list_form_graphic_pane_cp_vc

0x87f2,	// (0x000285b1) form_field_popup_wide_pane_vc_g1

0xb82b,	// (0x0002b5ea) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb82b,	// (0x0002b5ea) form_field_popup_wide_pane_vc_t1

0x1d05,	// (0x00021ac4) input_focus_pane_cp8_vc_ParamLimits

0x1d05,	// (0x00021ac4) input_focus_pane_cp8_vc

0xb870,	// (0x0002b62f) list_form_wide_pane_vc_ParamLimits

0xb870,	// (0x0002b62f) list_form_wide_pane_vc

0xb87c,	// (0x0002b63b) list_form_graphic_pane_vc_g1

0xb884,	// (0x0002b643) list_form_graphic_pane_vc_t1_ParamLimits

0xb884,	// (0x0002b643) list_form_graphic_pane_vc_t1

0x18cb,	// (0x0002168a) list_highlight_pane_cp5_vc_ParamLimits

0x18cb,	// (0x0002168a) list_highlight_pane_cp5_vc

0xb8a0,	// (0x0002b65f) list_form_graphic_pane_vc_ParamLimits

0xb8a0,	// (0x0002b65f) list_form_graphic_pane_vc

0x87f2,	// (0x000285b1) form_field_popup_pane_vc_g1

0xb8b6,	// (0x0002b675) form_field_popup_pane_vc_t1_ParamLimits

0xb8b6,	// (0x0002b675) form_field_popup_pane_vc_t1

0x1d05,	// (0x00021ac4) input_focus_pane_cp7_vc_ParamLimits

0x1d05,	// (0x00021ac4) input_focus_pane_cp7_vc

0xb8cd,	// (0x0002b68c) list_form_pane_vc_ParamLimits

0xb8cd,	// (0x0002b68c) list_form_pane_vc

0xb8d9,	// (0x0002b698) data_form_pane_vc_t1_ParamLimits

0xb8d9,	// (0x0002b698) data_form_pane_vc_t1

0x1dcb,	// (0x00021b8a) input_focus_pane_vc_g1

0x1dd3,	// (0x00021b92) input_focus_pane_vc_g2

0x1ddb,	// (0x00021b9a) input_focus_pane_vc_g3

0x1de3,	// (0x00021ba2) input_focus_pane_vc_g4

0x1deb,	// (0x00021baa) input_focus_pane_vc_g5

0x1df3,	// (0x00021bb2) input_focus_pane_vc_g6

0x1dfb,	// (0x00021bba) input_focus_pane_vc_g7

0x1e03,	// (0x00021bc2) input_focus_pane_vc_g8

0x1e0b,	// (0x00021bca) input_focus_pane_vc_g9

0x1865,	// (0x00021624) input_focus_pane_vc_g10

0x0009,

0xf658,	// (0x0002f417) input_focus_pane_vc_g

0x87e6,	// (0x000285a5) data_form_pane_vc_ParamLimits

0x87e6,	// (0x000285a5) data_form_pane_vc

0x87f2,	// (0x000285b1) form_field_data_pane_vc_g1

0xb8f4,	// (0x0002b6b3) form_field_data_pane_vc_t1_ParamLimits

0xb8f4,	// (0x0002b6b3) form_field_data_pane_vc_t1

0x1d05,	// (0x00021ac4) input_focus_pane_vc_ParamLimits

0x1d05,	// (0x00021ac4) input_focus_pane_vc

0xb90e,	// (0x0002b6cd) button_value_adjust_pane_cp3_vc

0xb916,	// (0x0002b6d5) button_value_adjust_pane_cp5_vc

0xb91e,	// (0x0002b6dd) form_field_data_pane_vc_ParamLimits

0xb91e,	// (0x0002b6dd) form_field_data_pane_vc

0xb935,	// (0x0002b6f4) form_field_data_pane_vc_cp2

0xb93d,	// (0x0002b6fc) form_field_data_wide_pane_vc_ParamLimits

0xb93d,	// (0x0002b6fc) form_field_data_wide_pane_vc

0xb953,	// (0x0002b712) form_field_data_wide_pane_vc_cp2

0xb95b,	// (0x0002b71a) form_field_popup_pane_vc_ParamLimits

0xb95b,	// (0x0002b71a) form_field_popup_pane_vc

0xb972,	// (0x0002b731) form_field_popup_wide_pane_vc_ParamLimits

0xb972,	// (0x0002b731) form_field_popup_wide_pane_vc

0xb988,	// (0x0002b747) form_field_slider_pane_vc_ParamLimits

0xb988,	// (0x0002b747) form_field_slider_pane_vc

0xb99b,	// (0x0002b75a) form_field_slider_wide_pane_vc_ParamLimits

0xb99b,	// (0x0002b75a) form_field_slider_wide_pane_vc

0xb9ae,	// (0x0002b76d) grid_touch_1_pane_ParamLimits

0xb9ae,	// (0x0002b76d) grid_touch_1_pane

0xb9ba,	// (0x0002b779) grid_touch_2_pane_ParamLimits

0xb9ba,	// (0x0002b779) grid_touch_2_pane

0x272c,	// (0x000224eb) touch_pane_g1_ParamLimits

0x272c,	// (0x000224eb) touch_pane_g1

0xb9d2,	// (0x0002b791) cell_app_pane_cp_wide_ParamLimits

0xb9d2,	// (0x0002b791) cell_app_pane_cp_wide

0xb9e3,	// (0x0002b7a2) grid_popup_fast_wide_pane_ParamLimits

0xb9e3,	// (0x0002b7a2) grid_popup_fast_wide_pane

0xb9f7,	// (0x0002b7b6) scroll_pane_cp19_ParamLimits

0xb9f7,	// (0x0002b7b6) scroll_pane_cp19

0x186f,	// (0x0002162e) bg_popup_window_pane_cp20

0xba0b,	// (0x0002b7ca) listscroll_popup_fast_wide_pane

0xba13,	// (0x0002b7d2) grid_indicator_nsta_pane

0xba25,	// (0x0002b7e4) clock_nsta_pane_g1

0xba2e,	// (0x0002b7ed) clock_nsta_pane_t1

0xba4a,	// (0x0002b809) cell_indicator_nsta_pane_ParamLimits

0xba4a,	// (0x0002b809) cell_indicator_nsta_pane

0xba7f,	// (0x0002b83e) cell_indicator_nsta_pane_g1

0xba8d,	// (0x0002b84c) cell_indicator_nsta_pane_g2

0x0001,

0xfa8b,	// (0x0002f84a) cell_indicator_nsta_pane_g

0xba9f,	// (0x0002b85e) clock_nsta_pane_cp

0xbaa8,	// (0x0002b867) indicator_nsta_pane_cp

0xbab2,	// (0x0002b871) nsta_clock_indic_pane_g1

0x1921,	// (0x000216e0) grid_indicator_pane

0x7387,	// (0x00027146) scroll_pane_cp29

0x7587,	// (0x00027346) indicator_nsta_pane_cp2_ParamLimits

0x7587,	// (0x00027346) indicator_nsta_pane_cp2

0x18cb,	// (0x0002168a) main_apps_wheel_pane

0x8a0a,	// (0x000287c9) form_midp_field_text_pane_ParamLimits

0x8b53,	// (0x00028912) scroll_bar_cp050_ParamLimits

0xbb0b,	// (0x0002b8ca) cell_indicator_pane_ParamLimits

0xbb0b,	// (0x0002b8ca) cell_indicator_pane

0xbb24,	// (0x0002b8e3) cell_indicator_pane_g1

0xbb2e,	// (0x0002b8ed) grid_wheel_folder_pane_ParamLimits

0xbb2e,	// (0x0002b8ed) grid_wheel_folder_pane

0xbb44,	// (0x0002b903) list_wheel_apps_pane_ParamLimits

0xbb44,	// (0x0002b903) list_wheel_apps_pane

0xbb55,	// (0x0002b914) main_apps_wheel_pane_g1_ParamLimits

0xbb55,	// (0x0002b914) main_apps_wheel_pane_g1

0xbb69,	// (0x0002b928) main_apps_wheel_pane_g2_ParamLimits

0xbb69,	// (0x0002b928) main_apps_wheel_pane_g2

0x0001,

0xfaa7,	// (0x0002f866) main_apps_wheel_pane_g_ParamLimits

0xfaa7,	// (0x0002f866) main_apps_wheel_pane_g

0xbb81,	// (0x0002b940) main_apps_wheel_pane_t1_ParamLimits

0xbb81,	// (0x0002b940) main_apps_wheel_pane_t1

0xbba4,	// (0x0002b963) list_wheel_apps_pane_g1

0xbbac,	// (0x0002b96b) list_wheel_apps_pane_g2

0xbbb4,	// (0x0002b973) list_wheel_apps_pane_g3

0xbbbe,	// (0x0002b97d) list_wheel_apps_pane_g4

0xbbc8,	// (0x0002b987) list_wheel_apps_pane_g5

0x0004,

0xfaac,	// (0x0002f86b) list_wheel_apps_pane_g

0x24c8,	// (0x00022287) navi_icon_text_pane

0x80d9,	// (0x00027e98) aid_fill_nsta

0xbbeb,	// (0x0002b9aa) navi_icon_text_pane_g1

0xbbf7,	// (0x0002b9b6) navi_icon_text_pane_t1

0x23b8,	// (0x00022177) list_set_graphic_pane_t1_ParamLimits

0x23b8,	// (0x00022177) list_set_graphic_pane_t1

0xa5bc,	// (0x0002a37b) popup_midp_note_alarm_window_t6_ParamLimits

0xa5bc,	// (0x0002a37b) popup_midp_note_alarm_window_t6

0xa5ce,	// (0x0002a38d) popup_midp_note_alarm_window_t7_ParamLimits

0xa5ce,	// (0x0002a38d) popup_midp_note_alarm_window_t7

0xa5e0,	// (0x0002a39f) popup_midp_note_alarm_window_t8_ParamLimits

0xa5e0,	// (0x0002a39f) popup_midp_note_alarm_window_t8

0xa5f2,	// (0x0002a3b1) popup_midp_note_alarm_window_t9_ParamLimits

0xa5f2,	// (0x0002a3b1) popup_midp_note_alarm_window_t9

0xa604,	// (0x0002a3c3) popup_midp_note_alarm_window_t10_ParamLimits

0xa604,	// (0x0002a3c3) popup_midp_note_alarm_window_t10

0xa616,	// (0x0002a3d5) popup_midp_note_alarm_window_t11_ParamLimits

0xa616,	// (0x0002a3d5) popup_midp_note_alarm_window_t11

0xa628,	// (0x0002a3e7) scroll_pane_cp17_ParamLimits

0xa628,	// (0x0002a3e7) scroll_pane_cp17

0x8ea0,	// (0x00028c5f) volume_small_pane_cp_g1

0x91ec,	// (0x00028fab) volume_small_pane_cp_g2

0x91f5,	// (0x00028fb4) volume_small_pane_cp_g3

0x91fe,	// (0x00028fbd) volume_small_pane_cp_g4

0x9207,	// (0x00028fc6) volume_small_pane_cp_g5

0x91b6,	// (0x00028f75) volume_small_pane_cp_g6

0x9210,	// (0x00028fcf) volume_small_pane_cp_g7

0x9219,	// (0x00028fd8) volume_small_pane_cp_g8

0x9222,	// (0x00028fe1) volume_small_pane_cp_g9

0x922b,	// (0x00028fea) volume_small_pane_cp_g10

0x260d,	// (0x000223cc) midp_ticker_pane_g1_ParamLimits

0x2619,	// (0x000223d8) midp_ticker_pane_g2_ParamLimits

0xf724,	// (0x0002f4e3) midp_ticker_pane_g_ParamLimits

0x2625,	// (0x000223e4) midp_ticker_pane_t1_ParamLimits

0x80ef,	// (0x00027eae) aid_fill_nsta_2

0x8b3f,	// (0x000288fe) list_form2_midp_pane

0xaf70,	// (0x0002ad2f) midp_editing_number_pane_ParamLimits

0xaf7f,	// (0x0002ad3e) midp_ticker_pane_ParamLimits

0xbc09,	// (0x0002b9c8) form2_midp_field_pane

0xbc2d,	// (0x0002b9ec) scroll_pane_cp51

0xbc4d,	// (0x0002ba0c) form2_midp_button_pane_ParamLimits

0xbc4d,	// (0x0002ba0c) form2_midp_button_pane

0xbc5f,	// (0x0002ba1e) form2_midp_content_pane_ParamLimits

0xbc5f,	// (0x0002ba1e) form2_midp_content_pane

0xbc79,	// (0x0002ba38) form2_midp_field_choice_group_pane

0xbc81,	// (0x0002ba40) form2_midp_field_pane_g1

0xbc89,	// (0x0002ba48) form2_midp_field_pane_g2

0xbc91,	// (0x0002ba50) form2_midp_field_pane_g3

0xbc99,	// (0x0002ba58) form2_midp_field_pane_g4

0x0003,

0xfad1,	// (0x0002f890) form2_midp_field_pane_g

0xbca1,	// (0x0002ba60) form2_midp_gauge_slider_pane

0xbca9,	// (0x0002ba68) form2_midp_gauge_wait_pane

0xbcb1,	// (0x0002ba70) form2_midp_image_pane_ParamLimits

0xbcb1,	// (0x0002ba70) form2_midp_image_pane

0xbccc,	// (0x0002ba8b) form2_midp_label_pane_ParamLimits

0xbccc,	// (0x0002ba8b) form2_midp_label_pane

0xbce5,	// (0x0002baa4) form2_midp_label_pane_cp_ParamLimits

0xbce5,	// (0x0002baa4) form2_midp_label_pane_cp

0xbd06,	// (0x0002bac5) form2_midp_string_pane_ParamLimits

0xbd06,	// (0x0002bac5) form2_midp_string_pane

0x620b,	// (0x00025fca) form2_midp_text_pane_ParamLimits

0x620b,	// (0x00025fca) form2_midp_text_pane

0xbd18,	// (0x0002bad7) form2_midp_time_pane

0xbd28,	// (0x0002bae7) input_focus_pane_cp51_ParamLimits

0xbd28,	// (0x0002bae7) input_focus_pane_cp51

0xbd40,	// (0x0002baff) form2_midp_label_pane_t1_ParamLimits

0xbd40,	// (0x0002baff) form2_midp_label_pane_t1

0x6224,	// (0x00025fe3) form2_mdip_text_pane_t1_ParamLimits

0x6224,	// (0x00025fe3) form2_mdip_text_pane_t1

0x6242,	// (0x00026001) form2_midp_time_pane_t1

0xbd89,	// (0x0002bb48) form2_midp_gauge_slider_pane_t1

0xbd9b,	// (0x0002bb5a) form2_midp_gauge_slider_pane_t2

0xbdad,	// (0x0002bb6c) form2_midp_gauge_slider_pane_t3

0x0002,

0xfada,	// (0x0002f899) form2_midp_gauge_slider_pane_t

0xbdbf,	// (0x0002bb7e) form2_midp_slider_pane

0xbdcb,	// (0x0002bb8a) form2_midp_gauge_wait_pane_t1

0xbdd9,	// (0x0002bb98) form2_midp_wait_pane_ParamLimits

0xbdd9,	// (0x0002bb98) form2_midp_wait_pane

0xbe04,	// (0x0002bbc3) list_single_2graphic_pane_cp4_ParamLimits

0xbe04,	// (0x0002bbc3) list_single_2graphic_pane_cp4

0x885b,	// (0x0002861a) list_single_midp_graphic_pane_cp_ParamLimits

0x885b,	// (0x0002861a) list_single_midp_graphic_pane_cp

0x186f,	// (0x0002162e) list_highlight_pane_cp20

0xbe2c,	// (0x0002bbeb) list_single_2graphic_pane_g1_cp4

0xb409,	// (0x0002b1c8) list_single_2graphic_pane_g2_cp4

0xbe34,	// (0x0002bbf3) list_single_2graphic_pane_t1_cp4

0x18cb,	// (0x0002168a) list_highlight_pane_cp21

0xbe43,	// (0x0002bc02) list_single_midp_graphic_pane_g4_cp

0xbe52,	// (0x0002bc11) list_single_midp_graphic_pane_t1_cp

0xbe67,	// (0x0002bc26) form2_mdip_string_pane_t1_ParamLimits

0xbe67,	// (0x0002bc26) form2_mdip_string_pane_t1

0x186f,	// (0x0002162e) bg_wml_button_pane_cp2

0x1865,	// (0x00021624) form2_midp_image_pane_g1

0x578c,	// (0x0002554b) list_double_large_graphic_pane_g5_ParamLimits

0x578c,	// (0x0002554b) list_double_large_graphic_pane_g5

0x7763,	// (0x00027522) midp_form_pane_ParamLimits

0x18cb,	// (0x0002168a) main_apps_wheel_pane_ParamLimits

0x7ec1,	// (0x00027c80) popup_preview_window_ParamLimits

0x7ec1,	// (0x00027c80) popup_preview_window

0x807c,	// (0x00027e3b) popup_touch_info_window_ParamLimits

0x807c,	// (0x00027e3b) popup_touch_info_window

0x809a,	// (0x00027e59) popup_touch_menu_window_ParamLimits

0x809a,	// (0x00027e59) popup_touch_menu_window

0x185b,	// (0x0002161a) bg_popup_sub_pane_cp6

0xbf6e,	// (0x0002bd2d) list_touch_menu_pane

0xbf76,	// (0x0002bd35) list_single_touch_menu_pane_ParamLimits

0xbf76,	// (0x0002bd35) list_single_touch_menu_pane

0xbf8c,	// (0x0002bd4b) list_single_touch_menu_pane_t1

0x18cb,	// (0x0002168a) bg_popup_sub_pane_cp7_ParamLimits

0x18cb,	// (0x0002168a) bg_popup_sub_pane_cp7

0xbf9a,	// (0x0002bd59) heading_sub_pane

0xbfa2,	// (0x0002bd61) list_touch_info_pane_ParamLimits

0xbfa2,	// (0x0002bd61) list_touch_info_pane

0xbfb1,	// (0x0002bd70) list_single_touch_info_pane_ParamLimits

0xbfb1,	// (0x0002bd70) list_single_touch_info_pane

0xbfc3,	// (0x0002bd82) list_single_touch_info_pane_t1

0xbfd1,	// (0x0002bd90) list_single_touch_info_pane_t2

0x0001,

0xfae8,	// (0x0002f8a7) list_single_touch_info_pane_t

0x25f6,	// (0x000223b5) bg_popup_heading_pane_cp

0xbfdf,	// (0x0002bd9e) heading_sub_pane_t1

0x86f8,	// (0x000284b7) bg_popup_preview_window_pane_cp_ParamLimits

0x86f8,	// (0x000284b7) bg_popup_preview_window_pane_cp

0xbf9a,	// (0x0002bd59) heading_preview_pane

0xbfa2,	// (0x0002bd61) list_preview_pane_ParamLimits

0xbfa2,	// (0x0002bd61) list_preview_pane

0xbfed,	// (0x0002bdac) popup_preview_window_g1

0xbfb1,	// (0x0002bd70) list_single_preview_pane_ParamLimits

0xbfb1,	// (0x0002bd70) list_single_preview_pane

0xbff5,	// (0x0002bdb4) list_single_preview_pane_g1

0xbffd,	// (0x0002bdbc) list_single_preview_pane_t1

0xbfc3,	// (0x0002bd82) list_single_preview_pane_t2

0x0001,

0xfaed,	// (0x0002f8ac) list_single_preview_pane_t

0xc00b,	// (0x0002bdca) bg_popup_heading_pane_cp2_ParamLimits

0xc00b,	// (0x0002bdca) bg_popup_heading_pane_cp2

0xc021,	// (0x0002bde0) heading_preview_pane_g1

0xc029,	// (0x0002bde8) heading_preview_pane_t1_ParamLimits

0xc029,	// (0x0002bde8) heading_preview_pane_t1

0x1938,	// (0x000216f7) soft_indicator_pane_t1_ParamLimits

0x1c17,	// (0x000219d6) scroll_pane_ParamLimits

0x20a1,	// (0x00021e60) scroll_sc2_left_pane

0x2098,	// (0x00021e57) scroll_sc2_right_pane

0x20c0,	// (0x00021e7f) scroll_bg_pane_g1_ParamLimits

0x20d5,	// (0x00021e94) scroll_bg_pane_g2_ParamLimits

0x20ed,	// (0x00021eac) scroll_bg_pane_g3_ParamLimits

0xf6af,	// (0x0002f46e) scroll_bg_pane_g_ParamLimits

0x20c0,	// (0x00021e7f) scroll_handle_pane_g1_ParamLimits

0x2102,	// (0x00021ec1) scroll_handle_pane_g2_ParamLimits

0x20ed,	// (0x00021eac) scroll_handle_pane_g3_ParamLimits

0xf6b6,	// (0x0002f475) scroll_handle_pane_g_ParamLimits

0x7b44,	// (0x00027903) popup_choice_list_window_ParamLimits

0x7b44,	// (0x00027903) popup_choice_list_window

0x850e,	// (0x000282cd) choice_list_pane

0x85c0,	// (0x0002837f) cell_toolbar_pane_t1

0x85e8,	// (0x000283a7) toolbar_button_pane_ParamLimits

0xaae2,	// (0x0002a8a1) ai_gene_pane_1_t2_ParamLimits

0xaae2,	// (0x0002a8a1) ai_gene_pane_1_t2

0x0001,

0xf8d9,	// (0x0002f698) ai_gene_pane_1_t_ParamLimits

0xf8d9,	// (0x0002f698) ai_gene_pane_1_t

0xc046,	// (0x0002be05) scroll_sc2_left_pane_g1

0xc046,	// (0x0002be05) scroll_sc2_right_pane_g1

0x1eb5,	// (0x00021c74) bg_popup_sub_pane_cp10

0xc050,	// (0x0002be0f) list_choice_list_pane

0xc069,	// (0x0002be28) list_single_choice_list_pane_ParamLimits

0xc069,	// (0x0002be28) list_single_choice_list_pane

0xc07c,	// (0x0002be3b) list_single_choice_list_pane_g1

0x7020,	// (0x00026ddf) list_single_choice_list_pane_t1_ParamLimits

0x7020,	// (0x00026ddf) list_single_choice_list_pane_t1

0xc084,	// (0x0002be43) choice_list_pane_g1

0xc08c,	// (0x0002be4b) choice_list_pane_t1

0x185b,	// (0x0002161a) input_focus_pane_cp11

0x200d,	// (0x00021dcc) title_pane_stacon_g2_ParamLimits

0x200d,	// (0x00021dcc) title_pane_stacon_g2

0x0002,

0xf695,	// (0x0002f454) title_pane_stacon_g_ParamLimits

0xf695,	// (0x0002f454) title_pane_stacon_g

0x25f6,	// (0x000223b5) cursor_press_pane

0x7bec,	// (0x000279ab) popup_fep_hwr_window_ParamLimits

0x7bec,	// (0x000279ab) popup_fep_hwr_window

0x7c64,	// (0x00027a23) popup_fep_vkb_window_ParamLimits

0x7c64,	// (0x00027a23) popup_fep_vkb_window

0xc09a,	// (0x0002be59) cursor_press_pane_g1

0x0002,

0xfb16,	// (0x0002f8d5) fep_vkb_side_pane_g_ParamLimits

0x926d,	// (0x0002902c) fep_hwr_candidate_pane_ParamLimits

0x926d,	// (0x0002902c) fep_hwr_candidate_pane

0x9297,	// (0x00029056) fep_hwr_side_pane_ParamLimits

0x9297,	// (0x00029056) fep_hwr_side_pane

0x92b7,	// (0x00029076) fep_hwr_top_pane_ParamLimits

0x92b7,	// (0x00029076) fep_hwr_top_pane

0x92cf,	// (0x0002908e) fep_hwr_write_pane_ParamLimits

0x92cf,	// (0x0002908e) fep_hwr_write_pane

0xfb16,	// (0x0002f8d5) fep_vkb_side_pane_g

0xc0a2,	// (0x0002be61) fep_hwr_top_pane_g1

0xc0b4,	// (0x0002be73) fep_hwr_top_pane_g2

0x92fb,	// (0x000290ba) fep_hwr_top_pane_g3

0x0002,

0xfaf2,	// (0x0002f8b1) fep_hwr_top_pane_g

0x9310,	// (0x000290cf) fep_hwr_top_text_pane

0x21c5,	// (0x00021f84) fep_hwr_top_text_pane_g1

0xc0ea,	// (0x0002bea9) fep_hwr_top_text_pane_t1

0x9406,	// (0x000291c5) fep_hwr_candidate_pane_g1

0xc32f,	// (0x0002c0ee) fep_vkb_keypad_pane_g3_ParamLimits

0xc32f,	// (0x0002c0ee) fep_vkb_keypad_pane_g3

0xc357,	// (0x0002c116) fep_vkb_keypad_pane_g4_ParamLimits

0xc357,	// (0x0002c116) fep_vkb_keypad_pane_g4

0xc3c6,	// (0x0002c185) fep_vkb_bottom_pane_g2_ParamLimits

0xc3c6,	// (0x0002c185) fep_vkb_bottom_pane_g2

0x0001,

0xfb1d,	// (0x0002f8dc) fep_vkb_bottom_pane_g_ParamLimits

0xfb1d,	// (0x0002f8dc) fep_vkb_bottom_pane_g

0xc046,	// (0x0002be05) cell_vkb_side_pane_g2

0x0001,

0xfb27,	// (0x0002f8e6) cell_vkb_side_pane_g

0xc451,	// (0x0002c210) cell_vkb_side_pane_t1

0xc45f,	// (0x0002c21e) cell_vkb_side_pane_t1_copy1

0xc046,	// (0x0002be05) bg_fep_vkb_candidate_pane_g2

0xc58b,	// (0x0002c34a) cell_vkb_candidate_pane_ParamLimits

0xc0f8,	// (0x0002beb7) aid_size_cell_vkb_ParamLimits

0xc0f8,	// (0x0002beb7) aid_size_cell_vkb

0xc58b,	// (0x0002c34a) cell_vkb_candidate_pane

0x9420,	// (0x000291df) bg_popup_fep_shadow_pane_g1

0xc186,	// (0x0002bf45) fep_vkb_bottom_pane_ParamLimits

0xc186,	// (0x0002bf45) fep_vkb_bottom_pane

0xc1bc,	// (0x0002bf7b) fep_vkb_candidate_pane_ParamLimits

0xc1bc,	// (0x0002bf7b) fep_vkb_candidate_pane

0xc1d8,	// (0x0002bf97) fep_vkb_keypad_pane_ParamLimits

0xc1d8,	// (0x0002bf97) fep_vkb_keypad_pane

0xc217,	// (0x0002bfd6) fep_vkb_side_pane_ParamLimits

0xc217,	// (0x0002bfd6) fep_vkb_side_pane

0xc253,	// (0x0002c012) fep_vkb_top_pane_ParamLimits

0xc253,	// (0x0002c012) fep_vkb_top_pane

0xc288,	// (0x0002c047) fep_vkb_top_pane_g1_ParamLimits

0xc288,	// (0x0002c047) fep_vkb_top_pane_g1

0xc297,	// (0x0002c056) fep_vkb_top_pane_g2_ParamLimits

0xc297,	// (0x0002c056) fep_vkb_top_pane_g2

0xc2a6,	// (0x0002c065) fep_vkb_top_pane_g3_ParamLimits

0xc2a6,	// (0x0002c065) fep_vkb_top_pane_g3

0x0003,

0xfb0d,	// (0x0002f8cc) fep_vkb_top_pane_g_ParamLimits

0xfb0d,	// (0x0002f8cc) fep_vkb_top_pane_g

0xc2c4,	// (0x0002c083) fep_vkb_top_text_pane_ParamLimits

0xc2c4,	// (0x0002c083) fep_vkb_top_text_pane

0xc2d5,	// (0x0002c094) fep_vkb_side_pane_g1_ParamLimits

0xc2d5,	// (0x0002c094) fep_vkb_side_pane_g1

0xc31e,	// (0x0002c0dd) grid_vkb_side_pane_ParamLimits

0xc31e,	// (0x0002c0dd) grid_vkb_side_pane

0x9428,	// (0x000291e7) bg_popup_fep_shadow_pane_g2

0x9431,	// (0x000291f0) bg_popup_fep_shadow_pane_g3

0x9439,	// (0x000291f8) bg_popup_fep_shadow_pane_g4

0x9442,	// (0x00029201) bg_popup_fep_shadow_pane_g5

0x944c,	// (0x0002920b) bg_popup_fep_shadow_pane_g6

0x9454,	// (0x00029213) bg_popup_fep_shadow_pane_g7

0x1deb,	// (0x00021baa) bg_popup_fep_shadow_pane_g8

0xc375,	// (0x0002c134) grid_vkb_keypad_number_pane_ParamLimits

0xc375,	// (0x0002c134) grid_vkb_keypad_number_pane

0xc385,	// (0x0002c144) grid_vkb_keypad_pane_ParamLimits

0xc385,	// (0x0002c144) grid_vkb_keypad_pane

0xc3ab,	// (0x0002c16a) fep_vkb_bottom_pane_g1_ParamLimits

0xc3ab,	// (0x0002c16a) fep_vkb_bottom_pane_g1

0xc3d4,	// (0x0002c193) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc3d4,	// (0x0002c193) grid_vkb_keypad_bottom_left_pane

0xc3e9,	// (0x0002c1a8) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3e9,	// (0x0002c1a8) grid_vkb_keypad_bottom_right_pane

0xc3fe,	// (0x0002c1bd) fep_vkb_top_text_pane_g1

0xc419,	// (0x0002c1d8) fep_vkb_top_text_pane_t1

0xc42e,	// (0x0002c1ed) cell_vkb_side_pane_ParamLimits

0xc42e,	// (0x0002c1ed) cell_vkb_side_pane

0xc046,	// (0x0002be05) cell_vkb_side_pane_g1

0xc46d,	// (0x0002c22c) cell_vkb_keypad_pane_ParamLimits

0xc46d,	// (0x0002c22c) cell_vkb_keypad_pane

0xc4e2,	// (0x0002c2a1) cell_vkb_keypad_pane_g1

0x0008,

0xfb3a,	// (0x0002f8f9) bg_popup_fep_shadow_pane_g

0xc046,	// (0x0002be05) cell_hwr_side_pane_g1

0xc046,	// (0x0002be05) cell_hwr_side_pane_g2

0xc4ec,	// (0x0002c2ab) cell_vkb_keypad_pane_t1

0xc4fa,	// (0x0002c2b9) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4fa,	// (0x0002c2b9) cell_vkb_keypad_bottom_left_pane

0xc517,	// (0x0002c2d6) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc517,	// (0x0002c2d6) cell_vkb_keypad_bottom_right_pane

0xc046,	// (0x0002be05) cell_vkb_keypad_bottom_left_pane_g1

0xc046,	// (0x0002be05) cell_vkb_keypad_bottom_right_pane_g1

0xc550,	// (0x0002c30f) cell_vkb_keypad_number_pane_ParamLimits

0xc550,	// (0x0002c30f) cell_vkb_keypad_number_pane

0xc56f,	// (0x0002c32e) cell_vkb_keypad_number_pane_g1

0xc579,	// (0x0002c338) cell_vkb_keypad_number_pane_g2

0xc582,	// (0x0002c341) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb2c,	// (0x0002f8eb) cell_vkb_keypad_number_pane_g

0xc4ec,	// (0x0002c2ab) cell_vkb_keypad_number_pane_t1

0xc5a6,	// (0x0002c365) fep_vkb_candidate_pane_g1

0x0001,

0xfb27,	// (0x0002f8e6) cell_hwr_side_pane_g

0xc5bf,	// (0x0002c37e) cell_hwr_side_pane_t1

0x9466,	// (0x00029225) cell_hwr_side_pane_t1_copy1

0xc2b6,	// (0x0002c075) cell_hwr_candidate_pane_g1

0x9474,	// (0x00029233) cell_hwr_candidate_pane_t1

0xc046,	// (0x0002be05) cell_vkb_candidate_pane_g2

0xc645,	// (0x0002c404) cell_vkb_candidate_pane_t1

0x9234,	// (0x00028ff3) bg_popup_fep_shadow_pane_ParamLimits

0x9234,	// (0x00028ff3) bg_popup_fep_shadow_pane

0x182b,	// (0x000215ea) bg_fep_hwr_top_pane_g4

0xc0c6,	// (0x0002be85) bg_hwr_side_pane_g1_ParamLimits

0xc0c6,	// (0x0002be85) bg_hwr_side_pane_g1

0x934c,	// (0x0002910b) cell_hwr_side_pane_ParamLimits

0x934c,	// (0x0002910b) cell_hwr_side_pane

0x9387,	// (0x00029146) fep_hwr_write_pane_g1_ParamLimits

0x9387,	// (0x00029146) fep_hwr_write_pane_g1

0x9394,	// (0x00029153) fep_hwr_write_pane_g2_ParamLimits

0x9394,	// (0x00029153) fep_hwr_write_pane_g2

0x93a1,	// (0x00029160) fep_hwr_write_pane_g3_ParamLimits

0x93a1,	// (0x00029160) fep_hwr_write_pane_g3

0x93af,	// (0x0002916e) fep_hwr_write_pane_g4_ParamLimits

0x93af,	// (0x0002916e) fep_hwr_write_pane_g4

0x0005,

0xfaf9,	// (0x0002f8b8) fep_hwr_write_pane_g_ParamLimits

0xfaf9,	// (0x0002f8b8) fep_hwr_write_pane_g

0x182b,	// (0x000215ea) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x182b,	// (0x000215ea) bg_fep_hwr_candidate_pane_g2

0x93c4,	// (0x00029183) cell_hwr_candidate_pane_ParamLimits

0x93c4,	// (0x00029183) cell_hwr_candidate_pane

0x9406,	// (0x000291c5) fep_hwr_candidate_pane_g1_ParamLimits

0xc126,	// (0x0002bee5) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc126,	// (0x0002bee5) bg_popup_fep_shadow_pane_cp2

0xc2b6,	// (0x0002c075) fep_vkb_top_pane_g4_ParamLimits

0xc2b6,	// (0x0002c075) fep_vkb_top_pane_g4

0xc2fc,	// (0x0002c0bb) fep_vkb_side_pane_g2_ParamLimits

0xc2fc,	// (0x0002c0bb) fep_vkb_side_pane_g2

0x58a4,	// (0x00025663) list_setting_pane_t4_ParamLimits

0x58a4,	// (0x00025663) list_setting_pane_t4

0x5936,	// (0x000256f5) list_setting_number_pane_t5_ParamLimits

0x5936,	// (0x000256f5) list_setting_number_pane_t5

0x73b6,	// (0x00027175) list_double_heading_pane_cp2_ParamLimits

0x73b6,	// (0x00027175) list_double_heading_pane_cp2

0x27a7,	// (0x00022566) list_double_heading_pane_g1_cp2_ParamLimits

0x27a7,	// (0x00022566) list_double_heading_pane_g1_cp2

0xc653,	// (0x0002c412) list_double_heading_pane_g2_cp2_ParamLimits

0xc653,	// (0x0002c412) list_double_heading_pane_g2_cp2

0xc667,	// (0x0002c426) list_double_heading_pane_t1_cp2_ParamLimits

0xc667,	// (0x0002c426) list_double_heading_pane_t1_cp2

0xc67d,	// (0x0002c43c) list_double_heading_pane_t2_cp2_ParamLimits

0xc67d,	// (0x0002c43c) list_double_heading_pane_t2_cp2

0x1853,	// (0x00021612) aid_value_unit2

0x68ba,	// (0x00026679) popup_preview_fixed_window

0x1a0f,	// (0x000217ce) bg_popup_preview_window_pane_cp02

0xc68f,	// (0x0002c44e) list_preview_fixed_pane

0xc6d5,	// (0x0002c494) list_empty_pane_fp_ParamLimits

0xc6d5,	// (0x0002c494) list_empty_pane_fp

0xc6d5,	// (0x0002c494) list_single_cale_day_pane_fp_ParamLimits

0xc6d5,	// (0x0002c494) list_single_cale_day_pane_fp

0xc6d5,	// (0x0002c494) list_single_graphic_heading_pane_fp_ParamLimits

0xc6d5,	// (0x0002c494) list_single_graphic_heading_pane_fp

0xc6d5,	// (0x0002c494) list_single_graphic_pane_fp_ParamLimits

0xc6d5,	// (0x0002c494) list_single_graphic_pane_fp

0xc6d5,	// (0x0002c494) list_single_heading_pane_fp_ParamLimits

0xc6d5,	// (0x0002c494) list_single_heading_pane_fp

0xc6d5,	// (0x0002c494) list_single_pane_fp_ParamLimits

0xc6d5,	// (0x0002c494) list_single_pane_fp

0xc6eb,	// (0x0002c4aa) list_single_pane_fp_g1_ParamLimits

0xc6eb,	// (0x0002c4aa) list_single_pane_fp_g1

0x573d,	// (0x000254fc) list_single_pane_fp_g2_ParamLimits

0x573d,	// (0x000254fc) list_single_pane_fp_g2

0x6255,	// (0x00026014) list_single_pane_fp_g3_ParamLimits

0x6255,	// (0x00026014) list_single_pane_fp_g3

0xc6f7,	// (0x0002c4b6) list_single_pane_fp_g4_ParamLimits

0xc6f7,	// (0x0002c4b6) list_single_pane_fp_g4

0x0003,

0xfb5b,	// (0x0002f91a) list_single_pane_fp_g_ParamLimits

0xfb5b,	// (0x0002f91a) list_single_pane_fp_g

0x6269,	// (0x00026028) list_single_pane_fp_t1_ParamLimits

0x6269,	// (0x00026028) list_single_pane_fp_t1

0x6280,	// (0x0002603f) list_single_graphic_pane_fp_g1_ParamLimits

0x6280,	// (0x0002603f) list_single_graphic_pane_fp_g1

0xc6eb,	// (0x0002c4aa) list_single_graphic_pane_fp_g2_ParamLimits

0xc6eb,	// (0x0002c4aa) list_single_graphic_pane_fp_g2

0x573d,	// (0x000254fc) list_single_graphic_pane_fp_g3_ParamLimits

0x573d,	// (0x000254fc) list_single_graphic_pane_fp_g3

0x6255,	// (0x00026014) list_single_graphic_pane_fp_g4_ParamLimits

0x6255,	// (0x00026014) list_single_graphic_pane_fp_g4

0xc6f7,	// (0x0002c4b6) list_single_graphic_pane_fp_g5_ParamLimits

0xc6f7,	// (0x0002c4b6) list_single_graphic_pane_fp_g5

0x0004,

0xfb64,	// (0x0002f923) list_single_graphic_pane_fp_g_ParamLimits

0xfb64,	// (0x0002f923) list_single_graphic_pane_fp_g

0x628c,	// (0x0002604b) list_single_graphic_pane_fp_t1_ParamLimits

0x628c,	// (0x0002604b) list_single_graphic_pane_fp_t1

0x6280,	// (0x0002603f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6280,	// (0x0002603f) list_single_graphic_heading_pane_fp_g1

0xc6eb,	// (0x0002c4aa) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6eb,	// (0x0002c4aa) list_single_graphic_heading_pane_fp_g2

0x573d,	// (0x000254fc) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x573d,	// (0x000254fc) list_single_graphic_heading_pane_fp_g3

0x6255,	// (0x00026014) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6255,	// (0x00026014) list_single_graphic_heading_pane_fp_g4

0xc6f7,	// (0x0002c4b6) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6f7,	// (0x0002c4b6) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb64,	// (0x0002f923) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb64,	// (0x0002f923) list_single_graphic_heading_pane_fp_g

0x62a2,	// (0x00026061) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x62a2,	// (0x00026061) list_single_graphic_heading_pane_fp_t1

0x62b8,	// (0x00026077) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x62b8,	// (0x00026077) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6f,	// (0x0002f92e) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6f,	// (0x0002f92e) list_single_graphic_heading_pane_fp_t

0x62ca,	// (0x00026089) list_single_cale_day_pane_fp_g1_ParamLimits

0x62ca,	// (0x00026089) list_single_cale_day_pane_fp_g1

0xc703,	// (0x0002c4c2) list_single_cale_day_pane_fp_g2_ParamLimits

0xc703,	// (0x0002c4c2) list_single_cale_day_pane_fp_g2

0x6302,	// (0x000260c1) list_single_cale_day_pane_fp_g3_ParamLimits

0x6302,	// (0x000260c1) list_single_cale_day_pane_fp_g3

0x632a,	// (0x000260e9) list_single_cale_day_pane_fp_g4_ParamLimits

0x632a,	// (0x000260e9) list_single_cale_day_pane_fp_g4

0x634e,	// (0x0002610d) list_single_cale_day_pane_fp_g5_ParamLimits

0x634e,	// (0x0002610d) list_single_cale_day_pane_fp_g5

0x0004,

0xfb74,	// (0x0002f933) list_single_cale_day_pane_fp_g_ParamLimits

0xfb74,	// (0x0002f933) list_single_cale_day_pane_fp_g

0x6372,	// (0x00026131) list_single_cale_day_pane_fp_t1_ParamLimits

0x6372,	// (0x00026131) list_single_cale_day_pane_fp_t1

0x6398,	// (0x00026157) list_single_cale_day_pane_fp_t2_ParamLimits

0x6398,	// (0x00026157) list_single_cale_day_pane_fp_t2

0x63b1,	// (0x00026170) list_single_cale_day_pane_fp_t3_ParamLimits

0x63b1,	// (0x00026170) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7f,	// (0x0002f93e) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7f,	// (0x0002f93e) list_single_cale_day_pane_fp_t

0xc6eb,	// (0x0002c4aa) list_empty_pane_fp_g1_ParamLimits

0xc6eb,	// (0x0002c4aa) list_empty_pane_fp_g1

0x63ca,	// (0x00026189) list_empty_pane_fp_t1

0x63d8,	// (0x00026197) list_empty_pane_fp_t2

0x0001,

0xfb86,	// (0x0002f945) list_empty_pane_fp_t

0xc6eb,	// (0x0002c4aa) list_single_heading_pane_fp_g1_ParamLimits

0xc6eb,	// (0x0002c4aa) list_single_heading_pane_fp_g1

0x573d,	// (0x000254fc) list_single_heading_pane_fp_g2_ParamLimits

0x573d,	// (0x000254fc) list_single_heading_pane_fp_g2

0x6255,	// (0x00026014) list_single_heading_pane_fp_g3_ParamLimits

0x6255,	// (0x00026014) list_single_heading_pane_fp_g3

0x0002,

0xfb8b,	// (0x0002f94a) list_single_heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x0002f94a) list_single_heading_pane_fp_g

0x63e6,	// (0x000261a5) list_single_heading_pane_fp_t1_ParamLimits

0x63e6,	// (0x000261a5) list_single_heading_pane_fp_t1

0x63f8,	// (0x000261b7) list_single_heading_pane_fp_t2_ParamLimits

0x63f8,	// (0x000261b7) list_single_heading_pane_fp_t2

0x0001,

0xfb92,	// (0x0002f951) list_single_heading_pane_fp_t_ParamLimits

0xfb92,	// (0x0002f951) list_single_heading_pane_fp_t

0x7086,	// (0x00026e45) aid_size_cell_fast

0x19f2,	// (0x000217b1) soft_indicator_pane_cp1_t1

0x708f,	// (0x00026e4e) cell_app_pane_cp2_ParamLimits

0x708f,	// (0x00026e4e) cell_app_pane_cp2

0x9256,	// (0x00029015) fep_hwr_candidate_drop_down_list_pane

0x1839,	// (0x000215f8) fep_hwr_candidate_pane_g3_ParamLimits

0x1839,	// (0x000215f8) fep_hwr_candidate_pane_g3

0x1846,	// (0x00021605) fep_hwr_candidate_pane_g4_ParamLimits

0x1846,	// (0x00021605) fep_hwr_candidate_pane_g4

0x0002,

0xfb06,	// (0x0002f8c5) fep_hwr_candidate_pane_g_ParamLimits

0xfb06,	// (0x0002f8c5) fep_hwr_candidate_pane_g

0xc1ab,	// (0x0002bf6a) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc1ab,	// (0x0002bf6a) fep_vkb_candidate_drop_down_list_pane

0xc5ae,	// (0x0002c36d) fep_vkb_candidate_pane_g3

0xc5b6,	// (0x0002c375) fep_vkb_candidate_pane_g4

0x0002,

0xfb33,	// (0x0002f8f2) fep_vkb_candidate_pane_g

0xc2b6,	// (0x0002c075) cell_hwr_candidate_pane_g1_ParamLimits

0xc5cd,	// (0x0002c38c) cell_hwr_candidate_pane_g3_ParamLimits

0xc5cd,	// (0x0002c38c) cell_hwr_candidate_pane_g3

0xc5ee,	// (0x0002c3ad) cell_hwr_candidate_pane_g4_ParamLimits

0xc5ee,	// (0x0002c3ad) cell_hwr_candidate_pane_g4

0x0002,

0xfb4d,	// (0x0002f90c) cell_hwr_candidate_pane_g_ParamLimits

0xfb4d,	// (0x0002f90c) cell_hwr_candidate_pane_g

0xc60f,	// (0x0002c3ce) cell_vkb_candidate_pane_g3_ParamLimits

0xc60f,	// (0x0002c3ce) cell_vkb_candidate_pane_g3

0xc62a,	// (0x0002c3e9) cell_vkb_candidate_pane_g4_ParamLimits

0xc62a,	// (0x0002c3e9) cell_vkb_candidate_pane_g4

0xc70f,	// (0x0002c4ce) cell_app_pane_cp2_g1_ParamLimits

0xc70f,	// (0x0002c4ce) cell_app_pane_cp2_g1

0xc72d,	// (0x0002c4ec) cell_app_pane_cp2_g2_ParamLimits

0xc72d,	// (0x0002c4ec) cell_app_pane_cp2_g2

0x0001,

0xfb97,	// (0x0002f956) cell_app_pane_cp2_g_ParamLimits

0xfb97,	// (0x0002f956) cell_app_pane_cp2_g

0xc739,	// (0x0002c4f8) cell_app_pane_cp2_t1_ParamLimits

0xc739,	// (0x0002c4f8) cell_app_pane_cp2_t1

0x1d05,	// (0x00021ac4) grid_highlight_pane_cp1_ParamLimits

0x1d05,	// (0x00021ac4) grid_highlight_pane_cp1

0x9492,	// (0x00029251) cell_hwr_candidate_pane_cp1_ParamLimits

0x9492,	// (0x00029251) cell_hwr_candidate_pane_cp1

0xc2b6,	// (0x0002c075) fep_hwr_candidate_drop_down_list_pane_g1

0xc74b,	// (0x0002c50a) fep_hwr_candidate_drop_down_list_pane_g2

0xc758,	// (0x0002c517) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9c,	// (0x0002f95b) fep_hwr_candidate_drop_down_list_pane_g

0x94b1,	// (0x00029270) fep_hwr_candidate_drop_down_list_scroll_pane

0x94ba,	// (0x00029279) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x94ba,	// (0x00029279) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x94c7,	// (0x00029286) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x94c7,	// (0x00029286) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x94d4,	// (0x00029293) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x94d4,	// (0x00029293) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc60f,	// (0x0002c3ce) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc60f,	// (0x0002c3ce) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc62a,	// (0x0002c3e9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc62a,	// (0x0002c3e9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x94e1,	// (0x000292a0) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x94e1,	// (0x000292a0) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x94fc,	// (0x000292bb) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x94fc,	// (0x000292bb) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x9517,	// (0x000292d6) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x9517,	// (0x000292d6) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba3,	// (0x0002f962) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba3,	// (0x0002f962) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc765,	// (0x0002c524) cell_vkb_candidate_pane_cp1_ParamLimits

0xc765,	// (0x0002c524) cell_vkb_candidate_pane_cp1

0xc2b6,	// (0x0002c075) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc2b6,	// (0x0002c075) fep_vkb_candidate_drop_down_list_pane_g1

0xc74b,	// (0x0002c50a) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc74b,	// (0x0002c50a) fep_vkb_candidate_drop_down_list_pane_g2

0xc758,	// (0x0002c517) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc758,	// (0x0002c517) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb9c,	// (0x0002f95b) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb9c,	// (0x0002f95b) fep_vkb_candidate_drop_down_list_pane_g

0xc785,	// (0x0002c544) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc785,	// (0x0002c544) fep_vkb_candidate_drop_down_list_scroll_pane

0xc792,	// (0x0002c551) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc792,	// (0x0002c551) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc79f,	// (0x0002c55e) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc79f,	// (0x0002c55e) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc7ab,	// (0x0002c56a) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc7ab,	// (0x0002c56a) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc5cd,	// (0x0002c38c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5cd,	// (0x0002c38c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc5ee,	// (0x0002c3ad) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5ee,	// (0x0002c3ad) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc7b7,	// (0x0002c576) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc7b7,	// (0x0002c576) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7d8,	// (0x0002c597) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7d8,	// (0x0002c597) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7f9,	// (0x0002c5b8) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7f9,	// (0x0002c5b8) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb4,	// (0x0002f973) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb4,	// (0x0002f973) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x69d4,	// (0x00026793) title_pane_g1_ParamLimits

0x69e1,	// (0x000267a0) title_pane_g2_ParamLimits

0xf529,	// (0x0002f2e8) title_pane_g_ParamLimits

0x21bd,	// (0x00021f7c) aid_call2_pane

0x21b5,	// (0x00021f74) aid_call_pane

0x21c5,	// (0x00021f84) popup_clock_analogue_window_g1

0x21c5,	// (0x00021f84) popup_clock_analogue_window_g2

0x7397,	// (0x00027156) popup_clock_analogue_window_g3

0x73a0,	// (0x0002715f) popup_clock_analogue_window_g4

0x1865,	// (0x00021624) popup_clock_analogue_window_g5

0x0004,

0xf6c4,	// (0x0002f483) popup_clock_analogue_window_g

0x73a8,	// (0x00027167) popup_clock_analogue_window_t1

0x73e0,	// (0x0002719f) clock_digital_number_pane_ParamLimits

0x73e0,	// (0x0002719f) clock_digital_number_pane

0x73ec,	// (0x000271ab) clock_digital_number_pane_cp02_ParamLimits

0x73ec,	// (0x000271ab) clock_digital_number_pane_cp02

0x73f8,	// (0x000271b7) clock_digital_number_pane_cp03_ParamLimits

0x73f8,	// (0x000271b7) clock_digital_number_pane_cp03

0x7404,	// (0x000271c3) clock_digital_number_pane_cp04_ParamLimits

0x7404,	// (0x000271c3) clock_digital_number_pane_cp04

0x7410,	// (0x000271cf) clock_digital_separator_pane_ParamLimits

0x7410,	// (0x000271cf) clock_digital_separator_pane

0x741c,	// (0x000271db) popup_clock_digital_window_t1_ParamLimits

0x741c,	// (0x000271db) popup_clock_digital_window_t1

0x1865,	// (0x00021624) clock_digital_number_pane_g1

0x1865,	// (0x00021624) clock_digital_number_pane_g2

0x0001,

0xf6cf,	// (0x0002f48e) clock_digital_number_pane_g

0x1865,	// (0x00021624) clock_digital_separator_pane_g1

0x1865,	// (0x00021624) clock_digital_separator_pane_g2

0x0001,

0xf6cf,	// (0x0002f48e) clock_digital_separator_pane_g

0x80d9,	// (0x00027e98) aid_fill_nsta_ParamLimits

0x8225,	// (0x00027fe4) indicator_nsta_pane_ParamLimits

0x839e,	// (0x0002815d) popup_clock_analogue_window

0x839e,	// (0x0002815d) popup_clock_digital_window

0xba13,	// (0x0002b7d2) grid_indicator_nsta_pane_ParamLimits

0xba3c,	// (0x0002b7fb) clock_nsta_pane_t2

0x0001,

0xfa86,	// (0x0002f845) clock_nsta_pane_t

0x72c2,	// (0x00027081) aid_size_max_handle

0x72cc,	// (0x0002708b) aid_size_min_handle

0x25f6,	// (0x000223b5) editor_scroll_pane

0xc814,	// (0x0002c5d3) ex_editor_pane

0x1ea5,	// (0x00021c64) scroll_pane_cp13

0x1c43,	// (0x00021a02) scroll_pane_cp14

0x21f4,	// (0x00021fb3) scroll_pane_cp36

0x73ca,	// (0x00027189) list_single_graphic_hl_pane_cp2_ParamLimits

0x73ca,	// (0x00027189) list_single_graphic_hl_pane_cp2

0xafb4,	// (0x0002ad73) list_single_graphic_hl_pane_ParamLimits

0xafb4,	// (0x0002ad73) list_single_graphic_hl_pane

0xd5f4,	// (0x0002d3b3) aid_size_min_hl_cp1

0xc81c,	// (0x0002c5db) list_highlight_pane_cp34_ParamLimits

0xc81c,	// (0x0002c5db) list_highlight_pane_cp34

0xc82d,	// (0x0002c5ec) list_single_graphic_hl_pane_g1_ParamLimits

0xc82d,	// (0x0002c5ec) list_single_graphic_hl_pane_g1

0x640e,	// (0x000261cd) list_single_graphic_hl_pane_g2_ParamLimits

0x640e,	// (0x000261cd) list_single_graphic_hl_pane_g2

0x640e,	// (0x000261cd) list_single_graphic_hl_pane_g3_ParamLimits

0x640e,	// (0x000261cd) list_single_graphic_hl_pane_g3

0x5cda,	// (0x00025a99) list_single_graphic_hl_pane_g4_ParamLimits

0x5cda,	// (0x00025a99) list_single_graphic_hl_pane_g4

0x641a,	// (0x000261d9) list_single_graphic_hl_pane_g5_ParamLimits

0x641a,	// (0x000261d9) list_single_graphic_hl_pane_g5

0x0004,

0xfbc5,	// (0x0002f984) list_single_graphic_hl_pane_g_ParamLimits

0xfbc5,	// (0x0002f984) list_single_graphic_hl_pane_g

0x642e,	// (0x000261ed) list_single_graphic_hl_pane_t1_ParamLimits

0x642e,	// (0x000261ed) list_single_graphic_hl_pane_t1

0xc83a,	// (0x0002c5f9) aid_size_min_hl_cp2

0xc843,	// (0x0002c602) list_highlight_pane_cp34_cp2_ParamLimits

0xc843,	// (0x0002c602) list_highlight_pane_cp34_cp2

0xc82d,	// (0x0002c5ec) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc82d,	// (0x0002c5ec) list_single_graphic_hl_pane_g1_cp2

0xc850,	// (0x0002c60f) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc850,	// (0x0002c60f) list_single_graphic_hl_pane_g2_cp2

0xc85c,	// (0x0002c61b) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc85c,	// (0x0002c61b) list_single_graphic_hl_pane_g3_cp2

0x1c4b,	// (0x00021a0a) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x1c4b,	// (0x00021a0a) list_single_graphic_hl_pane_g4_cp2

0xc86a,	// (0x0002c629) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc86a,	// (0x0002c629) list_single_graphic_hl_pane_g5_cp2

0x79e7,	// (0x000277a6) control_pane_g4_ParamLimits

0x79e7,	// (0x000277a6) control_pane_g4

0x1eb5,	// (0x00021c74) bg_popup_sub_pane_cp10_ParamLimits

0xc050,	// (0x0002be0f) list_choice_list_pane_ParamLimits

0xc05f,	// (0x0002be1e) scroll_pane_cp23

0x1a0f,	// (0x000217ce) bg_popup_preview_window_pane_cp02_ParamLimits

0xc68f,	// (0x0002c44e) list_preview_fixed_pane_ParamLimits

0xc6a5,	// (0x0002c464) list_preview_fixed_pane_cp_ParamLimits

0xc6a5,	// (0x0002c464) list_preview_fixed_pane_cp

0xc6b1,	// (0x0002c470) popup_preview_fixed_window_g1_ParamLimits

0xc6b1,	// (0x0002c470) popup_preview_fixed_window_g1

0xc6bd,	// (0x0002c47c) popup_preview_fixed_window_g2_ParamLimits

0xc6bd,	// (0x0002c47c) popup_preview_fixed_window_g2

0x0002,

0xfb54,	// (0x0002f913) popup_preview_fixed_window_g_ParamLimits

0xfb54,	// (0x0002f913) popup_preview_fixed_window_g

0x719e,	// (0x00026f5d) aid_navi_side_left_pane_ParamLimits

0x71b3,	// (0x00026f72) aid_navi_side_right_pane_ParamLimits

0x71cb,	// (0x00026f8a) navi_icon_pane_stacon_ParamLimits

0x71df,	// (0x00026f9e) navi_navi_pane_stacon_ParamLimits

0x71cb,	// (0x00026f8a) navi_text_pane_stacon_ParamLimits

0x185b,	// (0x0002161a) main_text_info_pane

0xc894,	// (0x0002c653) listscroll_text_info_pane

0xc89c,	// (0x0002c65b) list_text_info_pane_ParamLimits

0xc89c,	// (0x0002c65b) list_text_info_pane

0xc8ab,	// (0x0002c66a) scroll_pane_cp24_ParamLimits

0xc8ab,	// (0x0002c66a) scroll_pane_cp24

0xc8c9,	// (0x0002c688) list_text_info_pane_t1_ParamLimits

0xc8c9,	// (0x0002c688) list_text_info_pane_t1

0x7b60,	// (0x0002791f) popup_fast_swap2_window_ParamLimits

0x7b60,	// (0x0002791f) popup_fast_swap2_window

0xc8fd,	// (0x0002c6bc) aid_size_cell_fast2

0x185b,	// (0x0002161a) bg_popup_window_pane_cp17

0x8b73,	// (0x00028932) heading_pane_cp2

0x8b7b,	// (0x0002893a) listscroll_fast2_pane

0xc907,	// (0x0002c6c6) grid_fast2_pane

0xc911,	// (0x0002c6d0) listscroll_fast2_pane_g1

0xc919,	// (0x0002c6d8) listscroll_fast2_pane_g2

0x0001,

0xfbd0,	// (0x0002f98f) listscroll_fast2_pane_g

0x1ea5,	// (0x00021c64) scroll_pane_cp26

0xc923,	// (0x0002c6e2) cell_fast2_pane_ParamLimits

0xc923,	// (0x0002c6e2) cell_fast2_pane

0xc938,	// (0x0002c6f7) cell_fast2_pane_g1

0xc941,	// (0x0002c700) cell_fast2_pane_g2

0xc94a,	// (0x0002c709) cell_fast2_pane_g3

0x0002,

0xfbd5,	// (0x0002f994) cell_fast2_pane_g

0x1b7a,	// (0x00021939) grid_highlight_pane_cp9

0x1b8f,	// (0x0002194e) main_eswt_pane_ParamLimits

0x1b8f,	// (0x0002194e) main_eswt_pane

0xc8c0,	// (0x0002c67f) list_single_text_info_pane

0xc952,	// (0x0002c711) eswt_ctrl_button_pane

0xc952,	// (0x0002c711) eswt_ctrl_canvas_pane

0xc95a,	// (0x0002c719) eswt_ctrl_combo_pane

0xc952,	// (0x0002c711) eswt_ctrl_default_pane

0xc952,	// (0x0002c711) eswt_ctrl_label_pane

0xc962,	// (0x0002c721) eswt_ctrl_wait_pane

0xc96a,	// (0x0002c729) eswt_shell_pane

0x185b,	// (0x0002161a) listscroll_eswt_app_pane

0xc98a,	// (0x0002c749) popup_eswt_tasktip_window_ParamLimits

0xc98a,	// (0x0002c749) popup_eswt_tasktip_window

0x86f8,	// (0x000284b7) bg_popup_window_pane_cp18

0xc99b,	// (0x0002c75a) eswt_control_pane_g1_ParamLimits

0xc99b,	// (0x0002c75a) eswt_control_pane_g1

0xc9a8,	// (0x0002c767) eswt_control_pane_g2_ParamLimits

0xc9a8,	// (0x0002c767) eswt_control_pane_g2

0xc9b5,	// (0x0002c774) eswt_control_pane_g3_ParamLimits

0xc9b5,	// (0x0002c774) eswt_control_pane_g3

0xc9c2,	// (0x0002c781) eswt_control_pane_g4_ParamLimits

0xc9c2,	// (0x0002c781) eswt_control_pane_g4

0x0003,

0xfbdc,	// (0x0002f99b) eswt_control_pane_g_ParamLimits

0xfbdc,	// (0x0002f99b) eswt_control_pane_g

0x1d05,	// (0x00021ac4) bg_button_pane_ParamLimits

0x1d05,	// (0x00021ac4) bg_button_pane

0x1b8f,	// (0x0002194e) common_borders_pane_copy2_ParamLimits

0x1b8f,	// (0x0002194e) common_borders_pane_copy2

0xc9cf,	// (0x0002c78e) control_button_pane_g1_ParamLimits

0xc9cf,	// (0x0002c78e) control_button_pane_g1

0xc9db,	// (0x0002c79a) control_button_pane_g2_ParamLimits

0xc9db,	// (0x0002c79a) control_button_pane_g2

0xc9e7,	// (0x0002c7a6) control_button_pane_g3_ParamLimits

0xc9e7,	// (0x0002c7a6) control_button_pane_g3

0x0002,

0xfbe5,	// (0x0002f9a4) control_button_pane_g_ParamLimits

0xfbe5,	// (0x0002f9a4) control_button_pane_g

0xc9fb,	// (0x0002c7ba) control_button_pane_t1

0xca09,	// (0x0002c7c8) control_button_pane_t2

0x0001,

0xfbec,	// (0x0002f9ab) control_button_pane_t

0x85f4,	// (0x000283b3) bg_button_pane_g1

0x85fc,	// (0x000283bb) bg_button_pane_g2

0x8604,	// (0x000283c3) bg_button_pane_g3

0x860c,	// (0x000283cb) bg_button_pane_g4

0x8614,	// (0x000283d3) bg_button_pane_g5

0x861c,	// (0x000283db) bg_button_pane_g6

0x8624,	// (0x000283e3) bg_button_pane_g7

0x862c,	// (0x000283eb) bg_button_pane_g8

0x8634,	// (0x000283f3) bg_button_pane_g9

0x0008,

0xf82d,	// (0x0002f5ec) bg_button_pane_g

0xc00b,	// (0x0002bdca) common_borders_pane_ParamLimits

0xc00b,	// (0x0002bdca) common_borders_pane

0xc99b,	// (0x0002c75a) eswt_control_pane_g1_copy1_ParamLimits

0xc99b,	// (0x0002c75a) eswt_control_pane_g1_copy1

0xc9a8,	// (0x0002c767) eswt_control_pane_g2_copy1_ParamLimits

0xc9a8,	// (0x0002c767) eswt_control_pane_g2_copy1

0xc9b5,	// (0x0002c774) eswt_control_pane_g3_copy1_ParamLimits

0xc9b5,	// (0x0002c774) eswt_control_pane_g3_copy1

0xc9c2,	// (0x0002c781) eswt_control_pane_g4_copy1_ParamLimits

0xc9c2,	// (0x0002c781) eswt_control_pane_g4_copy1

0xc046,	// (0x0002be05) bg_eswt_ctrl_canvas_pane_g1

0xc00b,	// (0x0002bdca) common_borders_pane_cp2_ParamLimits

0xc00b,	// (0x0002bdca) common_borders_pane_cp2

0xc00b,	// (0x0002bdca) common_borders_pane_cp3_ParamLimits

0xc00b,	// (0x0002bdca) common_borders_pane_cp3

0xca17,	// (0x0002c7d6) separator_horizontal_pane

0xca1f,	// (0x0002c7de) separator_vertical_pane

0xc99b,	// (0x0002c75a) eswt_control_pane_g1_copy2_ParamLimits

0xc99b,	// (0x0002c75a) eswt_control_pane_g1_copy2

0xc9a8,	// (0x0002c767) eswt_control_pane_g2_copy2_ParamLimits

0xc9a8,	// (0x0002c767) eswt_control_pane_g2_copy2

0xc9b5,	// (0x0002c774) eswt_control_pane_g3_copy2_ParamLimits

0xc9b5,	// (0x0002c774) eswt_control_pane_g3_copy2

0xc9c2,	// (0x0002c781) eswt_control_pane_g4_copy2_ParamLimits

0xc9c2,	// (0x0002c781) eswt_control_pane_g4_copy2

0x185b,	// (0x0002161a) common_borders_pane_cp4

0xca28,	// (0x0002c7e7) separator_horizontal_pane_g1

0xca31,	// (0x0002c7f0) separator_horizontal_pane_g2

0xca3a,	// (0x0002c7f9) separator_horizontal_pane_g3

0x0002,

0xfbf1,	// (0x0002f9b0) separator_horizontal_pane_g

0xc99b,	// (0x0002c75a) eswt_control_pane_g1_copy3_ParamLimits

0xc99b,	// (0x0002c75a) eswt_control_pane_g1_copy3

0xc9a8,	// (0x0002c767) eswt_control_pane_g2_copy3_ParamLimits

0xc9a8,	// (0x0002c767) eswt_control_pane_g2_copy3

0xc9b5,	// (0x0002c774) eswt_control_pane_g3_copy3_ParamLimits

0xc9b5,	// (0x0002c774) eswt_control_pane_g3_copy3

0xc9c2,	// (0x0002c781) eswt_control_pane_g4_copy3_ParamLimits

0xc9c2,	// (0x0002c781) eswt_control_pane_g4_copy3

0x185b,	// (0x0002161a) common_borders_pane_cp5

0xca43,	// (0x0002c802) separator_vertical_pane_g1

0xca4c,	// (0x0002c80b) separator_vertical_pane_g2

0xca55,	// (0x0002c814) separator_vertical_pane_g3

0x0002,

0xfbf8,	// (0x0002f9b7) separator_vertical_pane_g

0xc99b,	// (0x0002c75a) eswt_control_pane_g1_copy4_ParamLimits

0xc99b,	// (0x0002c75a) eswt_control_pane_g1_copy4

0xc9a8,	// (0x0002c767) eswt_control_pane_g2_copy4_ParamLimits

0xc9a8,	// (0x0002c767) eswt_control_pane_g2_copy4

0xc9b5,	// (0x0002c774) eswt_control_pane_g3_copy4_ParamLimits

0xc9b5,	// (0x0002c774) eswt_control_pane_g3_copy4

0xc9c2,	// (0x0002c781) eswt_control_pane_g4_copy4_ParamLimits

0xc9c2,	// (0x0002c781) eswt_control_pane_g4_copy4

0xca5e,	// (0x0002c81d) eswt_ctrl_combo_button_pane

0xca66,	// (0x0002c825) eswt_ctrl_input_pane

0xca6e,	// (0x0002c82d) popup_choice_list_window_cp70

0xca76,	// (0x0002c835) eswt_ctrl_input_pane_t1

0x185b,	// (0x0002161a) input_focus_pane_cp70

0xc00b,	// (0x0002bdca) bg_button_pane_cp70_ParamLimits

0xc00b,	// (0x0002bdca) bg_button_pane_cp70

0xca84,	// (0x0002c843) eswt_ctrl_combo_button_pane_g1

0xca8c,	// (0x0002c84b) wait_bar_pane_cp70

0x86f8,	// (0x000284b7) bg_popup_window_pane_cp70_ParamLimits

0x86f8,	// (0x000284b7) bg_popup_window_pane_cp70

0xca94,	// (0x0002c853) popup_eswt_tasktip_window_t1

0xcaaa,	// (0x0002c869) wait_bar_pane_cp71_ParamLimits

0xcaaa,	// (0x0002c869) wait_bar_pane_cp71

0xcab6,	// (0x0002c875) grid_eswt_app_pane

0x2098,	// (0x00021e57) scroll_pane_cp70

0xcabf,	// (0x0002c87e) cell_eswt_app_pane_ParamLimits

0xcabf,	// (0x0002c87e) cell_eswt_app_pane

0xcaef,	// (0x0002c8ae) cell_eswt_app_pane_g1_ParamLimits

0xcaef,	// (0x0002c8ae) cell_eswt_app_pane_g1

0xcb1e,	// (0x0002c8dd) cell_eswt_app_pane_g2_ParamLimits

0xcb1e,	// (0x0002c8dd) cell_eswt_app_pane_g2

0x0001,

0xfbff,	// (0x0002f9be) cell_eswt_app_pane_g_ParamLimits

0xfbff,	// (0x0002f9be) cell_eswt_app_pane_g

0xcb42,	// (0x0002c901) cell_eswt_app_pane_t1_ParamLimits

0xcb42,	// (0x0002c901) cell_eswt_app_pane_t1

0xcb74,	// (0x0002c933) grid_highlight_pane_cp70_ParamLimits

0xcb74,	// (0x0002c933) grid_highlight_pane_cp70

0x251d,	// (0x000222dc) set_content_pane_g1

0x797d,	// (0x0002773c) status_small_volume_pane

0x9532,	// (0x000292f1) status_small_volume_pane_g1

0x953a,	// (0x000292f9) volume_small2_pane

0x9543,	// (0x00029302) volume_small2_pane_g1

0x954c,	// (0x0002930b) volume_small2_pane_g2

0x9555,	// (0x00029314) volume_small2_pane_g3

0x955e,	// (0x0002931d) volume_small2_pane_g4

0x9567,	// (0x00029326) volume_small2_pane_g5

0x9570,	// (0x0002932f) volume_small2_pane_g6

0x9579,	// (0x00029338) volume_small2_pane_g7

0x9582,	// (0x00029341) volume_small2_pane_g8

0x958b,	// (0x0002934a) volume_small2_pane_g9

0x9594,	// (0x00029353) volume_small2_pane_g10

0x0009,

0xfc04,	// (0x0002f9c3) volume_small2_pane_g

0xc3fe,	// (0x0002c1bd) fep_vkb_top_text_pane_g1_ParamLimits

0xc419,	// (0x0002c1d8) fep_vkb_top_text_pane_t1_ParamLimits

0xc6c9,	// (0x0002c488) popup_preview_fixed_window_g3_ParamLimits

0xc6c9,	// (0x0002c488) popup_preview_fixed_window_g3

0x800f,	// (0x00027dce) popup_toolbar_trans_pane

0xaddc,	// (0x0002ab9b) aid_height_set_list_ParamLimits

0xaded,	// (0x0002abac) aid_size_parent_ParamLimits

0x1eb5,	// (0x00021c74) list_highlight_pane_cp2_ParamLimits

0x251d,	// (0x000222dc) set_content_pane_g1_ParamLimits

0xafd3,	// (0x0002ad92) list_single_image_pane_ParamLimits

0xafd3,	// (0x0002ad92) list_single_image_pane

0xcb80,	// (0x0002c93f) aid_size_cell_image_ParamLimits

0xcb80,	// (0x0002c93f) aid_size_cell_image

0xcb8d,	// (0x0002c94c) grid_single_image_pane_ParamLimits

0xcb8d,	// (0x0002c94c) grid_single_image_pane

0x27b3,	// (0x00022572) list_single_image_pane_g1_ParamLimits

0x27b3,	// (0x00022572) list_single_image_pane_g1

0xcb99,	// (0x0002c958) list_single_image_pane_g2_ParamLimits

0xcb99,	// (0x0002c958) list_single_image_pane_g2

0x0001,

0xfc19,	// (0x0002f9d8) list_single_image_pane_g_ParamLimits

0xfc19,	// (0x0002f9d8) list_single_image_pane_g

0xcbad,	// (0x0002c96c) list_single_image_pane_t1_ParamLimits

0xcbad,	// (0x0002c96c) list_single_image_pane_t1

0xcbc3,	// (0x0002c982) cell_image_list_pane_ParamLimits

0xcbc3,	// (0x0002c982) cell_image_list_pane

0xcbd7,	// (0x0002c996) cell_image_list_pane_g1

0xcbe0,	// (0x0002c99f) cell_image_list_pane_g2

0x0001,

0xfc1e,	// (0x0002f9dd) cell_image_list_pane_g

0xcbe9,	// (0x0002c9a8) aid_size_cell_tb_trans_pane

0x1d05,	// (0x00021ac4) bg_tb_trans_pane

0xcbfb,	// (0x0002c9ba) grid_tb_trans_pane

0x85f4,	// (0x000283b3) bg_tb_trans_pane_g1

0x85fc,	// (0x000283bb) bg_tb_trans_pane_g2

0x8604,	// (0x000283c3) bg_tb_trans_pane_g3

0x860c,	// (0x000283cb) bg_tb_trans_pane_g4

0x8614,	// (0x000283d3) bg_tb_trans_pane_g5

0x862c,	// (0x000283eb) bg_tb_trans_pane_g6

0x8634,	// (0x000283f3) bg_tb_trans_pane_g7

0x861c,	// (0x000283db) bg_tb_trans_pane_g8

0x8624,	// (0x000283e3) bg_tb_trans_pane_g9

0x0008,

0xfc23,	// (0x0002f9e2) bg_tb_trans_pane_g

0xcc0f,	// (0x0002c9ce) cell_toolbar_trans_pane_ParamLimits

0xcc0f,	// (0x0002c9ce) cell_toolbar_trans_pane

0xc046,	// (0x0002be05) cell_toolbar_trans_pane_g1

0xbc11,	// (0x0002b9d0) list_form2_midp_pane_t1

0xbc1f,	// (0x0002b9de) list_form2_midp_pane_t2

0x0001,

0xfacc,	// (0x0002f88b) list_form2_midp_pane_t

0xbc2d,	// (0x0002b9ec) scroll_pane_cp51_ParamLimits

0xbde9,	// (0x0002bba8) form2_midp_wait_pane_g1

0xbdf2,	// (0x0002bbb1) form2_midp_wait_pane_g2

0xbdfb,	// (0x0002bbba) form2_midp_wait_pane_g3

0x0002,

0xfae1,	// (0x0002f8a0) form2_midp_wait_pane_g

0x18cb,	// (0x0002168a) list_highlight_pane_cp21_ParamLimits

0xbe43,	// (0x0002bc02) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe52,	// (0x0002bc11) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5e6e,	// (0x00025c2d) list_single_2graphic_im_pane_ParamLimits

0x5e6e,	// (0x00025c2d) list_single_2graphic_im_pane

0xcc35,	// (0x0002c9f4) list_single_2graphic_im_pane_g1_ParamLimits

0xcc35,	// (0x0002c9f4) list_single_2graphic_im_pane_g1

0xcc46,	// (0x0002ca05) list_single_2graphic_im_pane_g2_ParamLimits

0xcc46,	// (0x0002ca05) list_single_2graphic_im_pane_g2

0xcc52,	// (0x0002ca11) list_single_2graphic_im_pane_g3_ParamLimits

0xcc52,	// (0x0002ca11) list_single_2graphic_im_pane_g3

0x0003,

0xfc36,	// (0x0002f9f5) list_single_2graphic_im_pane_g_ParamLimits

0xfc36,	// (0x0002f9f5) list_single_2graphic_im_pane_g

0xcc72,	// (0x0002ca31) list_single_2graphic_im_pane_t1_ParamLimits

0xcc72,	// (0x0002ca31) list_single_2graphic_im_pane_t1

0xc6d5,	// (0x0002c494) list_single_graphic_2heading_pane_fp_ParamLimits

0xc6d5,	// (0x0002c494) list_single_graphic_2heading_pane_fp

0x6280,	// (0x0002603f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6280,	// (0x0002603f) list_single_graphic_2heading_pane_fp_g1

0xc6eb,	// (0x0002c4aa) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6eb,	// (0x0002c4aa) list_single_graphic_2heading_pane_fp_g2

0x573d,	// (0x000254fc) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x573d,	// (0x000254fc) list_single_graphic_2heading_pane_fp_g3

0x6255,	// (0x00026014) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6255,	// (0x00026014) list_single_graphic_2heading_pane_fp_g4

0xc6f7,	// (0x0002c4b6) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6f7,	// (0x0002c4b6) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb64,	// (0x0002f923) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb64,	// (0x0002f923) list_single_graphic_2heading_pane_fp_g

0x6444,	// (0x00026203) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x6444,	// (0x00026203) list_single_graphic_2heading_pane_fp_t1

0x62b8,	// (0x00026077) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x62b8,	// (0x00026077) list_single_graphic_2heading_pane_fp_t2

0x645a,	// (0x00026219) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x645a,	// (0x00026219) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3f,	// (0x0002f9fe) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3f,	// (0x0002f9fe) list_single_graphic_2heading_pane_fp_t

0xc0d2,	// (0x0002be91) fep_hwr_write_pane_g5_ParamLimits

0xc0d2,	// (0x0002be91) fep_hwr_write_pane_g5

0xc0de,	// (0x0002be9d) fep_hwr_write_pane_g6_ParamLimits

0xc0de,	// (0x0002be9d) fep_hwr_write_pane_g6

0xc96a,	// (0x0002c729) eswt_shell_pane_ParamLimits

0x86f8,	// (0x000284b7) bg_popup_window_pane_cp18_ParamLimits

0xad35,	// (0x0002aaf4) heading_pane_cp70

0xca94,	// (0x0002c853) popup_eswt_tasktip_window_t1_ParamLimits

0x812e,	// (0x00027eed) aid_touch_tab_arrow_left

0x813d,	// (0x00027efc) aid_touch_tab_arrow_right

0x69f2,	// (0x000267b1) title_pane_g3_ParamLimits

0x69f2,	// (0x000267b1) title_pane_g3

0x1c9c,	// (0x00021a5b) set_value_pane_g1

0x800f,	// (0x00027dce) popup_toolbar_trans_pane_ParamLimits

0xcbe9,	// (0x0002c9a8) aid_size_cell_tb_trans_pane_ParamLimits

0x1d05,	// (0x00021ac4) bg_tb_trans_pane_ParamLimits

0xcbfb,	// (0x0002c9ba) grid_tb_trans_pane_ParamLimits

0x1a0f,	// (0x000217ce) cont_note_pane_ParamLimits

0x1a0f,	// (0x000217ce) cont_note_pane

0x1b8f,	// (0x0002194e) cont_snote2_single_text_pane_ParamLimits

0x1b8f,	// (0x0002194e) cont_snote2_single_text_pane

0x1b8f,	// (0x0002194e) cont_snote2_single_graphic_pane_ParamLimits

0x1b8f,	// (0x0002194e) cont_snote2_single_graphic_pane

0x8d9a,	// (0x00028b59) cont_note_wait_pane_ParamLimits

0x8d9a,	// (0x00028b59) cont_note_wait_pane

0x8d9a,	// (0x00028b59) cont_note_image_pane_ParamLimits

0x8d9a,	// (0x00028b59) cont_note_image_pane

0xcca3,	// (0x0002ca62) popup_note2_window_g1_ParamLimits

0xcca3,	// (0x0002ca62) popup_note2_window_g1

0xccd4,	// (0x0002ca93) popup_note2_window_t1_ParamLimits

0xccd4,	// (0x0002ca93) popup_note2_window_t1

0xcd19,	// (0x0002cad8) popup_note2_window_t2_ParamLimits

0xcd19,	// (0x0002cad8) popup_note2_window_t2

0xcd5e,	// (0x0002cb1d) popup_note2_window_t3_ParamLimits

0xcd5e,	// (0x0002cb1d) popup_note2_window_t3

0xcda3,	// (0x0002cb62) popup_note2_window_t4_ParamLimits

0xcda3,	// (0x0002cb62) popup_note2_window_t4

0x1a93,	// (0x00021852) popup_note2_window_t5_ParamLimits

0x1a93,	// (0x00021852) popup_note2_window_t5

0x0004,

0xfc4b,	// (0x0002fa0a) popup_note2_window_t_ParamLimits

0xfc4b,	// (0x0002fa0a) popup_note2_window_t

0xcdd2,	// (0x0002cb91) popup_note2_image_window_g1_ParamLimits

0xcdd2,	// (0x0002cb91) popup_note2_image_window_g1

0xcdde,	// (0x0002cb9d) popup_note2_image_window_g2_ParamLimits

0xcdde,	// (0x0002cb9d) popup_note2_image_window_g2

0x0001,

0xfc56,	// (0x0002fa15) popup_note2_image_window_g_ParamLimits

0xfc56,	// (0x0002fa15) popup_note2_image_window_g

0xcdf0,	// (0x0002cbaf) popup_note2_image_window_t1_ParamLimits

0xcdf0,	// (0x0002cbaf) popup_note2_image_window_t1

0xce08,	// (0x0002cbc7) popup_note2_image_window_t2_ParamLimits

0xce08,	// (0x0002cbc7) popup_note2_image_window_t2

0xce20,	// (0x0002cbdf) popup_note2_image_window_t3_ParamLimits

0xce20,	// (0x0002cbdf) popup_note2_image_window_t3

0x0002,

0xfc5b,	// (0x0002fa1a) popup_note2_image_window_t_ParamLimits

0xfc5b,	// (0x0002fa1a) popup_note2_image_window_t

0x8da8,	// (0x00028b67) popup_note2_wait_window_g1_ParamLimits

0x8da8,	// (0x00028b67) popup_note2_wait_window_g1

0x8db4,	// (0x00028b73) popup_note2_wait_window_g2_ParamLimits

0x8db4,	// (0x00028b73) popup_note2_wait_window_g2

0x8dc0,	// (0x00028b7f) popup_note2_wait_window_g3_ParamLimits

0x8dc0,	// (0x00028b7f) popup_note2_wait_window_g3

0x0002,

0xf80f,	// (0x0002f5ce) popup_note2_wait_window_g_ParamLimits

0xf80f,	// (0x0002f5ce) popup_note2_wait_window_g

0xce3c,	// (0x0002cbfb) popup_note2_wait_window_t1_ParamLimits

0xce3c,	// (0x0002cbfb) popup_note2_wait_window_t1

0xce5a,	// (0x0002cc19) popup_note2_wait_window_t2_ParamLimits

0xce5a,	// (0x0002cc19) popup_note2_wait_window_t2

0xce78,	// (0x0002cc37) popup_note2_wait_window_t3_ParamLimits

0xce78,	// (0x0002cc37) popup_note2_wait_window_t3

0xce8a,	// (0x0002cc49) popup_note2_wait_window_t4_ParamLimits

0xce8a,	// (0x0002cc49) popup_note2_wait_window_t4

0x0003,

0xfc62,	// (0x0002fa21) popup_note2_wait_window_t_ParamLimits

0xfc62,	// (0x0002fa21) popup_note2_wait_window_t

0xce9c,	// (0x0002cc5b) wait_bar2_pane_ParamLimits

0xce9c,	// (0x0002cc5b) wait_bar2_pane

0xceb4,	// (0x0002cc73) popup_snote2_single_text_window_g1_ParamLimits

0xceb4,	// (0x0002cc73) popup_snote2_single_text_window_g1

0xcedc,	// (0x0002cc9b) popup_snote2_single_text_window_t1_ParamLimits

0xcedc,	// (0x0002cc9b) popup_snote2_single_text_window_t1

0xcf28,	// (0x0002cce7) popup_snote2_single_text_window_t2_ParamLimits

0xcf28,	// (0x0002cce7) popup_snote2_single_text_window_t2

0xcf74,	// (0x0002cd33) popup_snote2_single_text_window_t3_ParamLimits

0xcf74,	// (0x0002cd33) popup_snote2_single_text_window_t3

0xcfb5,	// (0x0002cd74) popup_snote2_single_text_window_t4_ParamLimits

0xcfb5,	// (0x0002cd74) popup_snote2_single_text_window_t4

0xcfeb,	// (0x0002cdaa) popup_snote2_single_text_window_t5_ParamLimits

0xcfeb,	// (0x0002cdaa) popup_snote2_single_text_window_t5

0x0004,

0xfc6b,	// (0x0002fa2a) popup_snote2_single_text_window_t_ParamLimits

0xfc6b,	// (0x0002fa2a) popup_snote2_single_text_window_t

0xd016,	// (0x0002cdd5) popup_snote2_single_graphic_window_g1_ParamLimits

0xd016,	// (0x0002cdd5) popup_snote2_single_graphic_window_g1

0xd03e,	// (0x0002cdfd) popup_snote2_single_graphic_window_g2_ParamLimits

0xd03e,	// (0x0002cdfd) popup_snote2_single_graphic_window_g2

0x0001,

0xfc76,	// (0x0002fa35) popup_snote2_single_graphic_window_g_ParamLimits

0xfc76,	// (0x0002fa35) popup_snote2_single_graphic_window_g

0xd066,	// (0x0002ce25) popup_snote2_single_graphic_window_t1_ParamLimits

0xd066,	// (0x0002ce25) popup_snote2_single_graphic_window_t1

0xd0b2,	// (0x0002ce71) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0b2,	// (0x0002ce71) popup_snote2_single_graphic_window_t2

0xcf74,	// (0x0002cd33) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf74,	// (0x0002cd33) popup_snote2_single_graphic_window_t3

0xcfb5,	// (0x0002cd74) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfb5,	// (0x0002cd74) popup_snote2_single_graphic_window_t4

0xcfeb,	// (0x0002cdaa) popup_snote2_single_graphic_window_t5_ParamLimits

0xcfeb,	// (0x0002cdaa) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7b,	// (0x0002fa3a) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7b,	// (0x0002fa3a) popup_snote2_single_graphic_window_t

0xbaea,	// (0x0002b8a9) clock_nsta_pane_cp2_t1

0xbaea,	// (0x0002b8a9) clock_nsta_pane_cp2_t2

0x0001,

0xfaa2,	// (0x0002f861) clock_nsta_pane_cp2_t

0x5a4c,	// (0x0002580b) form_field_data_wide_pane_g1_ParamLimits

0x1d30,	// (0x00021aef) form_field_data_wide_pane_g2_ParamLimits

0x1d30,	// (0x00021aef) form_field_data_wide_pane_g2

0x1d3c,	// (0x00021afb) form_field_data_wide_pane_g3_ParamLimits

0x1d3c,	// (0x00021afb) form_field_data_wide_pane_g3

0x0002,

0xf647,	// (0x0002f406) form_field_data_wide_pane_g_ParamLimits

0xf647,	// (0x0002f406) form_field_data_wide_pane_g

0xb9c6,	// (0x0002b785) grid_touch_3_pane_ParamLimits

0xb9c6,	// (0x0002b785) grid_touch_3_pane

0xd0fe,	// (0x0002cebd) cell_touch_3_pane_ParamLimits

0xd0fe,	// (0x0002cebd) cell_touch_3_pane

0xc046,	// (0x0002be05) cell_touch_3_pane_g1

0xc046,	// (0x0002be05) cell_touch_3_pane_g2

0x0001,

0xfb27,	// (0x0002f8e6) cell_touch_3_pane_g

0x1ac5,	// (0x00021884) cont_query_data_pane

0x1acd,	// (0x0002188c) cont_query_data_pane_cp1

0xd12c,	// (0x0002ceeb) button_value_adjust_pane_cp7

0xd134,	// (0x0002cef3) query_popup_pane_cp3

0x2226,	// (0x00021fe5) bg_popup_sub_pane_cp22_ParamLimits

0x7496,	// (0x00027255) navi_navi_volume_pane_cp2

0x74ae,	// (0x0002726d) popup_side_volume_key_window_g2

0x74ba,	// (0x00027279) popup_side_volume_key_window_g3

0x0002,

0xf6dd,	// (0x0002f49c) popup_side_volume_key_window_g

0x74d4,	// (0x00027293) popup_side_volume_key_window_t2

0x0001,

0xf6e4,	// (0x0002f4a3) popup_side_volume_key_window_t

0x76f8,	// (0x000274b7) popup_side_volume_key_window_ParamLimits

0x5731,	// (0x000254f0) list_double_graphic_pane_g4_ParamLimits

0x5731,	// (0x000254f0) list_double_graphic_pane_g4

0x5eb3,	// (0x00025c72) list_single_2heading_msg_pane_ParamLimits

0x5eb3,	// (0x00025c72) list_single_2heading_msg_pane

0x647a,	// (0x00026239) list_single_2heading_msg_pane_g1_ParamLimits

0x647a,	// (0x00026239) list_single_2heading_msg_pane_g1

0x5582,	// (0x00025341) list_single_2heading_msg_pane_g2_ParamLimits

0x5582,	// (0x00025341) list_single_2heading_msg_pane_g2

0x5fd6,	// (0x00025d95) list_single_2heading_msg_pane_g3_ParamLimits

0x5fd6,	// (0x00025d95) list_single_2heading_msg_pane_g3

0x6486,	// (0x00026245) list_single_2heading_msg_pane_g4_ParamLimits

0x6486,	// (0x00026245) list_single_2heading_msg_pane_g4

0x0003,

0xfc86,	// (0x0002fa45) list_single_2heading_msg_pane_g_ParamLimits

0xfc86,	// (0x0002fa45) list_single_2heading_msg_pane_g

0x649e,	// (0x0002625d) list_single_2heading_msg_pane_t1_ParamLimits

0x649e,	// (0x0002625d) list_single_2heading_msg_pane_t1

0x64c6,	// (0x00026285) list_single_2heading_msg_pane_t2_ParamLimits

0x64c6,	// (0x00026285) list_single_2heading_msg_pane_t2

0x64fa,	// (0x000262b9) list_single_2heading_msg_pane_t3_ParamLimits

0x64fa,	// (0x000262b9) list_single_2heading_msg_pane_t3

0x6533,	// (0x000262f2) list_single_2heading_msg_pane_t4_ParamLimits

0x6533,	// (0x000262f2) list_single_2heading_msg_pane_t4

0x0003,

0xfc8f,	// (0x0002fa4e) list_single_2heading_msg_pane_t_ParamLimits

0xfc8f,	// (0x0002fa4e) list_single_2heading_msg_pane_t

0x1879,	// (0x00021638) title_pane_g4_ParamLimits

0x1879,	// (0x00021638) title_pane_g4

0x70ef,	// (0x00026eae) title_pane_stacon_g3_ParamLimits

0x70ef,	// (0x00026eae) title_pane_stacon_g3

0xcc66,	// (0x0002ca25) list_single_2graphic_im_pane_g4_ParamLimits

0xcc66,	// (0x0002ca25) list_single_2graphic_im_pane_g4

0xaaff,	// (0x0002a8be) popup_side_volume_key_window_cp

0xb31c,	// (0x0002b0db) main_idle_act2_pane_t1

0x863c,	// (0x000283fb) toolbar_button_pane_g10

0x6fad,	// (0x00026d6c) popup_toolbar_window_cp1

0xbadb,	// (0x0002b89a) clock_nsta_pane_cp_t1

0xbadb,	// (0x0002b89a) clock_nsta_pane_cp_t2

0x0001,

0xfa9d,	// (0x0002f85c) clock_nsta_pane_cp_t

0x7496,	// (0x00027255) navi_navi_volume_pane_cp2_ParamLimits

0x74a2,	// (0x00027261) popup_side_volume_key_window_g1_ParamLimits

0x74ae,	// (0x0002726d) popup_side_volume_key_window_g2_ParamLimits

0x74ba,	// (0x00027279) popup_side_volume_key_window_g3_ParamLimits

0xf6dd,	// (0x0002f49c) popup_side_volume_key_window_g_ParamLimits

0x9242,	// (0x00029001) fep_hwr_aid_pane

0x182b,	// (0x000215ea) bg_fep_hwr_top_pane_g4_ParamLimits

0xc0a2,	// (0x0002be61) fep_hwr_top_pane_g1_ParamLimits

0xc0b4,	// (0x0002be73) fep_hwr_top_pane_g2_ParamLimits

0x92fb,	// (0x000290ba) fep_hwr_top_pane_g3_ParamLimits

0xfaf2,	// (0x0002f8b1) fep_hwr_top_pane_g_ParamLimits

0x9310,	// (0x000290cf) fep_hwr_top_text_pane_ParamLimits

0xa8c2,	// (0x0002a681) aid_touch_tab_arrow_arrow_2

0xa8cb,	// (0x0002a68a) aid_touch_tab_arrow_left_2

0x9256,	// (0x00029015) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x928d,	// (0x0002904c) fep_hwr_prediction_pane

0xc20d,	// (0x0002bfcc) fep_vkb_prediction_pane

0xc30a,	// (0x0002c0c9) fep_vkb_side_pane_g3_ParamLimits

0xc30a,	// (0x0002c0c9) fep_vkb_side_pane_g3

0xc2b6,	// (0x0002c075) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc74b,	// (0x0002c50a) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc758,	// (0x0002c517) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9c,	// (0x0002f95b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd159,	// (0x0002cf18) fep_hwr_prediction_pane_g1

0x959d,	// (0x0002935c) fep_hwr_prediction_pane_g2

0x95a5,	// (0x00029364) fep_hwr_prediction_pane_g3

0x95ad,	// (0x0002936c) fep_hwr_prediction_pane_g4

0x0003,

0xfc98,	// (0x0002fa57) fep_hwr_prediction_pane_g

0xd159,	// (0x0002cf18) fep_vkb_prediction_pane_g1

0xd163,	// (0x0002cf22) fep_vkb_prediction_pane_g2

0xd16b,	// (0x0002cf2a) fep_vkb_prediction_pane_g3

0xd173,	// (0x0002cf32) fep_vkb_prediction_pane_g4

0x0003,

0xfca1,	// (0x0002fa60) fep_vkb_prediction_pane_g

0x907a,	// (0x00028e39) slider_set_pane_g3

0x908e,	// (0x00028e4d) slider_set_pane_g4

0x90a6,	// (0x00028e65) slider_set_pane_g5

0x907a,	// (0x00028e39) slider_set_pane_g6

0x90bc,	// (0x00028e7b) slider_set_pane_g7

0xaf4e,	// (0x0002ad0d) slider_form_pane_g3

0xaf57,	// (0x0002ad16) slider_form_pane_g4

0xaf5f,	// (0x0002ad1e) slider_form_pane_g5

0xaf4e,	// (0x0002ad0d) slider_form_pane_g6

0xaf67,	// (0x0002ad26) slider_form_pane_g7

0xb5c8,	// (0x0002b387) slider_set_pane_vc_g3

0xb5d1,	// (0x0002b390) slider_set_pane_vc_g4

0xb5da,	// (0x0002b399) slider_set_pane_vc_g5

0xb5c8,	// (0x0002b387) slider_set_pane_vc_g6

0xb5e3,	// (0x0002b3a2) slider_set_pane_vc_g7

0xb799,	// (0x0002b558) slider_form_pane_vc_g1

0xb7a2,	// (0x0002b561) slider_form_pane_vc_g2

0xb7ab,	// (0x0002b56a) slider_form_pane_vc_g3

0xb799,	// (0x0002b558) slider_form_pane_vc_g4

0xb7b4,	// (0x0002b573) slider_form_pane_vc_g5

0x0004,

0xfa6f,	// (0x0002f82e) slider_form_pane_vc_g

0x185b,	// (0x0002161a) main_idle_act3_pane

0xd17b,	// (0x0002cf3a) ai3_links_pane

0xd184,	// (0x0002cf43) popup_ai3_data_window_ParamLimits

0xd184,	// (0x0002cf43) popup_ai3_data_window

0x185b,	// (0x0002161a) grid_ai3_links_pane

0xd19c,	// (0x0002cf5b) cell_ai3_links_pane_ParamLimits

0xd19c,	// (0x0002cf5b) cell_ai3_links_pane

0xd1b4,	// (0x0002cf73) bg_popup_sub_pane_cp11

0xd1c1,	// (0x0002cf80) cell_ai3_links_pane_g1

0x185b,	// (0x0002161a) bg_popup_sub_pane_cp12

0xd1e6,	// (0x0002cfa5) heading_ai3_data_pane

0xd1ee,	// (0x0002cfad) list_ai3_gene_pane

0xd1fa,	// (0x0002cfb9) popup_ai3_data_window_g1

0xd202,	// (0x0002cfc1) heading_ai3_data_pane_g1

0xd20a,	// (0x0002cfc9) heading_ai3_data_pane_t1

0xd218,	// (0x0002cfd7) list_double_ai3_gene_pane_ParamLimits

0xd218,	// (0x0002cfd7) list_double_ai3_gene_pane

0xd225,	// (0x0002cfe4) list_single_ai3_gene_pane_ParamLimits

0xd225,	// (0x0002cfe4) list_single_ai3_gene_pane

0xc00b,	// (0x0002bdca) list_highlight_pane_cp7_ParamLimits

0xc00b,	// (0x0002bdca) list_highlight_pane_cp7

0xd232,	// (0x0002cff1) list_single_a13_gene_pane_t1_ParamLimits

0xd232,	// (0x0002cff1) list_single_a13_gene_pane_t1

0xd249,	// (0x0002d008) list_single_ai3_gene_pane_g1

0xd252,	// (0x0002d011) list_single_ai3_gene_pane_g2

0x0001,

0xfcaa,	// (0x0002fa69) list_single_ai3_gene_pane_g

0xd25a,	// (0x0002d019) list_double_ai3_gene_pane_g1_ParamLimits

0xd25a,	// (0x0002d019) list_double_ai3_gene_pane_g1

0xd266,	// (0x0002d025) list_double_ai3_gene_pane_t1_ParamLimits

0xd266,	// (0x0002d025) list_double_ai3_gene_pane_t1

0xd282,	// (0x0002d041) list_double_ai3_gene_pane_t2_ParamLimits

0xd282,	// (0x0002d041) list_double_ai3_gene_pane_t2

0xd297,	// (0x0002d056) list_double_ai3_gene_pane_t3_ParamLimits

0xd297,	// (0x0002d056) list_double_ai3_gene_pane_t3

0x0002,

0xfcaf,	// (0x0002fa6e) list_double_ai3_gene_pane_t_ParamLimits

0xfcaf,	// (0x0002fa6e) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x6470,	// (0x0002622f) aid_size_min_col_2

0xd145,	// (0x0002cf04) aid_size_min_msg_ParamLimits

0xd145,	// (0x0002cf04) aid_size_min_msg

0xc40a,	// (0x0002c1c9) fep_vkb_top_text_pane_g2_ParamLimits

0xc40a,	// (0x0002c1c9) fep_vkb_top_text_pane_g2

0x0001,

0xfb22,	// (0x0002f8e1) fep_vkb_top_text_pane_g_ParamLimits

0xfb22,	// (0x0002f8e1) fep_vkb_top_text_pane_g

0x185b,	// (0x0002161a) main_hc_apps_shell_pane

0xd2b4,	// (0x0002d073) grid_hc_apps_pane_ParamLimits

0xd2b4,	// (0x0002d073) grid_hc_apps_pane

0xd2c6,	// (0x0002d085) list_hc_apps_pane

0xd2ce,	// (0x0002d08d) scroll_pane_cp37_ParamLimits

0xd2ce,	// (0x0002d08d) scroll_pane_cp37

0xd2da,	// (0x0002d099) cell_hc_apps_pane_ParamLimits

0xd2da,	// (0x0002d099) cell_hc_apps_pane

0xd388,	// (0x0002d147) cell_hc_apps_pane_g1_ParamLimits

0xd388,	// (0x0002d147) cell_hc_apps_pane_g1

0xd3b8,	// (0x0002d177) cell_hc_apps_pane_g2_ParamLimits

0xd3b8,	// (0x0002d177) cell_hc_apps_pane_g2

0xd3d4,	// (0x0002d193) cell_hc_apps_pane_g3_ParamLimits

0xd3d4,	// (0x0002d193) cell_hc_apps_pane_g3

0x0002,

0xfcb6,	// (0x0002fa75) cell_hc_apps_pane_g_ParamLimits

0xfcb6,	// (0x0002fa75) cell_hc_apps_pane_g

0xd3f6,	// (0x0002d1b5) cell_hc_apps_pane_t1_ParamLimits

0xd3f6,	// (0x0002d1b5) cell_hc_apps_pane_t1

0x1a0f,	// (0x000217ce) grid_highlight_pane_cp10_ParamLimits

0x1a0f,	// (0x000217ce) grid_highlight_pane_cp10

0xd436,	// (0x0002d1f5) list_single_hc_apps_pane_ParamLimits

0xd436,	// (0x0002d1f5) list_single_hc_apps_pane

0xd499,	// (0x0002d258) list_single_hc_apps_pane_g1

0x6558,	// (0x00026317) list_single_hc_apps_pane_g2

0x0001,

0xfcbd,	// (0x0002fa7c) list_single_hc_apps_pane_g

0x6571,	// (0x00026330) list_single_hc_apps_pane_g2_copy1

0x658d,	// (0x0002634c) list_single_hc_apps_pane_t1

0x18cb,	// (0x0002168a) bg_set_opt_pane_cp_ParamLimits

0x6aa2,	// (0x00026861) setting_slider_pane_t1_ParamLimits

0x6abb,	// (0x0002687a) setting_slider_pane_t2_ParamLimits

0x6ad5,	// (0x00026894) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0002f2f8) setting_slider_pane_t_ParamLimits

0x6aed,	// (0x000268ac) slider_set_pane_ParamLimits

0x79fb,	// (0x000277ba) control_pane_g5_ParamLimits

0x79fb,	// (0x000277ba) control_pane_g5

0xada1,	// (0x0002ab60) slider_set_pane_g1_ParamLimits

0x906e,	// (0x00028e2d) slider_set_pane_g2_ParamLimits

0x907a,	// (0x00028e39) slider_set_pane_g3_ParamLimits

0x908e,	// (0x00028e4d) slider_set_pane_g4_ParamLimits

0x90a6,	// (0x00028e65) slider_set_pane_g5_ParamLimits

0x907a,	// (0x00028e39) slider_set_pane_g6_ParamLimits

0x90bc,	// (0x00028e7b) slider_set_pane_g7_ParamLimits

0xf92b,	// (0x0002f6ea) slider_set_pane_g_ParamLimits

0x24c8,	// (0x00022287) navi_icon_text_pane_ParamLimits

0x80ef,	// (0x00027eae) aid_fill_nsta_2_ParamLimits

0x812e,	// (0x00027eed) aid_touch_tab_arrow_left_ParamLimits

0x813d,	// (0x00027efc) aid_touch_tab_arrow_right_ParamLimits

0x81aa,	// (0x00027f69) clock_nsta_pane_ParamLimits

0xa8a4,	// (0x0002a663) navi_icon_pane_g1_ParamLimits

0xa8b0,	// (0x0002a66f) navi_text_pane_t1_ParamLimits

0xbbeb,	// (0x0002b9aa) navi_icon_text_pane_g1_ParamLimits

0xbbf7,	// (0x0002b9b6) navi_icon_text_pane_t1_ParamLimits

0xd499,	// (0x0002d258) list_single_hc_apps_pane_g1_ParamLimits

0x6558,	// (0x00026317) list_single_hc_apps_pane_g2_ParamLimits

0xfcbd,	// (0x0002fa7c) list_single_hc_apps_pane_g_ParamLimits

0x6571,	// (0x00026330) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x658d,	// (0x0002634c) list_single_hc_apps_pane_t1_ParamLimits

0x68e6,	// (0x000266a5) popup_toolbar2_fixed_window_ParamLimits

0x68e6,	// (0x000266a5) popup_toolbar2_fixed_window

0x8005,	// (0x00027dc4) popup_toolbar2_float_window

0x185b,	// (0x0002161a) bg_popup_sub_pane_cp27

0xd4b2,	// (0x0002d271) grid_toolbar2_float_pane

0x185b,	// (0x0002161a) bg_popup_sub_pane_cp26

0xd4b2,	// (0x0002d271) grid_toolbar2_fixed_pane

0xd4ba,	// (0x0002d279) cell_toolbar2_fixed_pane_ParamLimits

0xd4ba,	// (0x0002d279) cell_toolbar2_fixed_pane

0xd4ca,	// (0x0002d289) cell_toolbar2_fixed_pane_g1

0x8544,	// (0x00028303) toolbar2_fixed_button_pane

0x85f4,	// (0x000283b3) toolbar2_fixed_button_pane_g1

0x85fc,	// (0x000283bb) toolbar2_fixed_button_pane_g2

0x8604,	// (0x000283c3) toolbar2_fixed_button_pane_g3

0x860c,	// (0x000283cb) toolbar2_fixed_button_pane_g4

0x8614,	// (0x000283d3) toolbar2_fixed_button_pane_g5

0x861c,	// (0x000283db) toolbar2_fixed_button_pane_g6

0x8624,	// (0x000283e3) toolbar2_fixed_button_pane_g7

0x862c,	// (0x000283eb) toolbar2_fixed_button_pane_g8

0x8634,	// (0x000283f3) toolbar2_fixed_button_pane_g9

0x0008,

0xf82d,	// (0x0002f5ec) toolbar2_fixed_button_pane_g

0xd4d3,	// (0x0002d292) cell_toolbar2_float_pane_ParamLimits

0xd4d3,	// (0x0002d292) cell_toolbar2_float_pane

0xd4e4,	// (0x0002d2a3) cell_toolbar2_float_pane_g1

0x8544,	// (0x00028303) toolbar2_fixed_button_pane_cp

0xc174,	// (0x0002bf33) fep_vkb_accented_list_pane_ParamLimits

0xc174,	// (0x0002bf33) fep_vkb_accented_list_pane

0x945e,	// (0x0002921d) bg_popup_fep_shadow_pane_g9

0x25f6,	// (0x000223b5) bg_popup_fep_shadow_pane_cp3

0x1e8c,	// (0x00021c4b) list_accented_list_pane

0xd4ed,	// (0x0002d2ac) list_single_accented_list_pane_ParamLimits

0xd4ed,	// (0x0002d2ac) list_single_accented_list_pane

0x25f6,	// (0x000223b5) list_highlight_pane_cp10

0xd4fe,	// (0x0002d2bd) list_single_accented_list_pane_t1

0x7f55,	// (0x00027d14) popup_slider_window_ParamLimits

0x7f55,	// (0x00027d14) popup_slider_window

0xd13c,	// (0x0002cefb) aid_indentation_list_msg

0xd5bc,	// (0x0002d37b) bg_popup_window_pane_cp19

0xd62d,	// (0x0002d3ec) popup_slider_window_g1

0xd649,	// (0x0002d408) popup_slider_window_g2

0xd665,	// (0x0002d424) popup_slider_window_g3

0x0005,

0xfcc2,	// (0x0002fa81) popup_slider_window_g

0xd6cb,	// (0x0002d48a) popup_slider_window_t1

0xd73f,	// (0x0002d4fe) small_volume_slider_vertical_pane

0xc046,	// (0x0002be05) small_volume_slider_vertical_pane_g1

0xc046,	// (0x0002be05) small_volume_slider_vertical_pane_g2

0xd75b,	// (0x0002d51a) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd4,	// (0x0002fa93) small_volume_slider_vertical_pane_g

0x66b6,	// (0x00026475) area_side_right_pane_ParamLimits

0x66b6,	// (0x00026475) area_side_right_pane

0x95b5,	// (0x00029374) aid_size_side_button_ParamLimits

0x95b5,	// (0x00029374) aid_size_side_button

0x95c9,	// (0x00029388) grid_sctrl_middle_pane_ParamLimits

0x95c9,	// (0x00029388) grid_sctrl_middle_pane

0x95e8,	// (0x000293a7) sctrl_sk_bottom_pane

0x95f9,	// (0x000293b8) sctrl_sk_top_pane

0x960b,	// (0x000293ca) aid_touch_sctrl_top

0x1a0f,	// (0x000217ce) bg_sctrl_sk_pane_ParamLimits

0x1a0f,	// (0x000217ce) bg_sctrl_sk_pane

0x9618,	// (0x000293d7) sctrl_sk_top_pane_g1

0x9625,	// (0x000293e4) sctrl_sk_top_pane_t1

0x960b,	// (0x000293ca) aid_touch_sctrl_bottom

0x1a0f,	// (0x000217ce) bg_sctrl_sk_pane_cp_ParamLimits

0x1a0f,	// (0x000217ce) bg_sctrl_sk_pane_cp

0x9640,	// (0x000293ff) sctrl_sk_bottom_pane_g1

0x9625,	// (0x000293e4) sctrl_sk_bottom_pane_t1

0x9649,	// (0x00029408) cell_sctrl_middle_pane_ParamLimits

0x9649,	// (0x00029408) cell_sctrl_middle_pane

0x9664,	// (0x00029423) aid_touch_sctrl_middle_ParamLimits

0x9664,	// (0x00029423) aid_touch_sctrl_middle

0x1d05,	// (0x00021ac4) bg_sctrl_middle_pane_ParamLimits

0x1d05,	// (0x00021ac4) bg_sctrl_middle_pane

0xc2b6,	// (0x0002c075) cell_sctrl_middle_pane_g1_ParamLimits

0xc2b6,	// (0x0002c075) cell_sctrl_middle_pane_g1

0x9676,	// (0x00029435) cell_sctrl_middle_pane_g2_ParamLimits

0x9676,	// (0x00029435) cell_sctrl_middle_pane_g2

0x0001,

0xfce0,	// (0x0002fa9f) cell_sctrl_middle_pane_g_ParamLimits

0xfce0,	// (0x0002fa9f) cell_sctrl_middle_pane_g

0x85f4,	// (0x000283b3) bg_sctrl_middle_pane_g1

0x85fc,	// (0x000283bb) bg_sctrl_middle_pane_g2

0x8604,	// (0x000283c3) bg_sctrl_middle_pane_g3

0x860c,	// (0x000283cb) bg_sctrl_middle_pane_g4

0x8614,	// (0x000283d3) bg_sctrl_middle_pane_g5

0x861c,	// (0x000283db) bg_sctrl_middle_pane_g6

0x8624,	// (0x000283e3) bg_sctrl_middle_pane_g7

0x862c,	// (0x000283eb) bg_sctrl_middle_pane_g8

0x0007,

0xfce5,	// (0x0002faa4) bg_sctrl_middle_pane_g

0x8634,	// (0x000283f3) bg_sctrl_middle_pane_g8_copy1

0x85f4,	// (0x000283b3) bg_sctrl_sk_pane_g1

0x85fc,	// (0x000283bb) bg_sctrl_sk_pane_g2

0x8604,	// (0x000283c3) bg_sctrl_sk_pane_g3

0x0008,

0xf82d,	// (0x0002f5ec) bg_sctrl_sk_pane_g

0x1bdd,	// (0x0002199c) aid_size_touch_scroll_bar

0x860c,	// (0x000283cb) bg_sctrl_sk_pane_g4

0x8614,	// (0x000283d3) bg_sctrl_sk_pane_g5

0x861c,	// (0x000283db) bg_sctrl_sk_pane_g6

0x8624,	// (0x000283e3) bg_sctrl_sk_pane_g7

0x862c,	// (0x000283eb) bg_sctrl_sk_pane_g8

0x8634,	// (0x000283f3) bg_sctrl_sk_pane_g9

0x7bbe,	// (0x0002797d) popup_fep_china_hwr2_fs_candidate_window

0x7bc8,	// (0x00027987) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7bc8,	// (0x00027987) popup_fep_china_hwr2_fs_control_window

0xc2b6,	// (0x0002c075) sctrl_sk_top_pane_g2

0x0001,

0xfcdb,	// (0x0002fa9a) sctrl_sk_top_pane_g

0xd764,	// (0x0002d523) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd764,	// (0x0002d523) aid_fep_china_hwr2_fs_cell

0xd776,	// (0x0002d535) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd776,	// (0x0002d535) bg_popup_fep_shadow_pane_cp4

0xd78d,	// (0x0002d54c) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd78d,	// (0x0002d54c) bg_popup_fep_shadow_pane_cp5

0xd79f,	// (0x0002d55e) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd79f,	// (0x0002d55e) popup_fep_china_hwr2_fs_control_bar_grid

0xd7af,	// (0x0002d56e) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7b7,	// (0x0002d576) aid_fep_china_hwr2_fs_candi_cell

0x185b,	// (0x0002161a) bg_popup_fep_shadow_pane_cp6

0xd7c1,	// (0x0002d580) popup_fep_china_hwr2_fs_candidate_grid

0xd7cb,	// (0x0002d58a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7cb,	// (0x0002d58a) cell_fep_china_hwr2_fs_funtion_grid

0xc046,	// (0x0002be05) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7e3,	// (0x0002d5a2) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7e3,	// (0x0002d5a2) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7f1,	// (0x0002d5b0) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7f1,	// (0x0002d5b0) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf6,	// (0x0002fab5) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf6,	// (0x0002fab5) cell_fep_china_hwr2_fs_funtion_grid_g

0xd807,	// (0x0002d5c6) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd807,	// (0x0002d5c6) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd81c,	// (0x0002d5db) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd81c,	// (0x0002d5db) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcfb,	// (0x0002faba) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcfb,	// (0x0002faba) cell_fep_china_hwr2_fs_funtion_grid_t

0xd838,	// (0x0002d5f7) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd840,	// (0x0002d5ff) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd848,	// (0x0002d607) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd00,	// (0x0002fabf) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd850,	// (0x0002d60f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd850,	// (0x0002d60f) cell_fep_china_hwr2_fs_candidate_grid

0xd869,	// (0x0002d628) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd871,	// (0x0002d630) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc046,	// (0x0002be05) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc046,	// (0x0002be05) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb27,	// (0x0002f8e6) cell_fep_china_hwr2_fs_candidate_grid_g

0xd879,	// (0x0002d638) cell_fep_china_hwr2_fs_candidate_grid_t1

0x81bd,	// (0x00027f7c) clock_nsta_pane_cp_24_ParamLimits

0x81bd,	// (0x00027f7c) clock_nsta_pane_cp_24

0x823b,	// (0x00027ffa) indicator_nsta_pane_cp_24_ParamLimits

0x823b,	// (0x00027ffa) indicator_nsta_pane_cp_24

0xa720,	// (0x0002a4df) heading_pane_g1

0x0001,

0xf892,	// (0x0002f651) heading_pane_g

0xb165,	// (0x0002af24) grid_sct_catagory_button_pane

0xb195,	// (0x0002af54) scroll_pane_cp5_ParamLimits

0xbc39,	// (0x0002b9f8) button_value_adjust_pane_cp5_ParamLimits

0xbc39,	// (0x0002b9f8) button_value_adjust_pane_cp5

0xbd18,	// (0x0002bad7) form2_midp_time_pane_ParamLimits

0xd887,	// (0x0002d646) cell_sct_catagory_button_pane_ParamLimits

0xd887,	// (0x0002d646) cell_sct_catagory_button_pane

0xc00b,	// (0x0002bdca) bg_button_pane_cp01_ParamLimits

0xc00b,	// (0x0002bdca) bg_button_pane_cp01

0xc046,	// (0x0002be05) cell_sct_catagory_button_pane_g1

0x7f94,	// (0x00027d53) popup_tb_extension_window

0xd899,	// (0x0002d658) aid_size_cell_ext_ParamLimits

0xd899,	// (0x0002d658) aid_size_cell_ext

0x1a0f,	// (0x000217ce) bg_tb_trans_pane_cp1_ParamLimits

0x1a0f,	// (0x000217ce) bg_tb_trans_pane_cp1

0xd8b9,	// (0x0002d678) grid_tb_ext_pane_ParamLimits

0xd8b9,	// (0x0002d678) grid_tb_ext_pane

0xd8e9,	// (0x0002d6a8) cell_tb_ext_pane_ParamLimits

0xd8e9,	// (0x0002d6a8) cell_tb_ext_pane

0xd900,	// (0x0002d6bf) cell_tb_ext_pane_g1_ParamLimits

0xd900,	// (0x0002d6bf) cell_tb_ext_pane_g1

0xd91d,	// (0x0002d6dc) cell_tb_ext_pane_t1

0x1a0f,	// (0x000217ce) list_highlight_pane_cp11_ParamLimits

0x1a0f,	// (0x000217ce) list_highlight_pane_cp11

0x6905,	// (0x000266c4) popup_uni_indicator_window_ParamLimits

0x6905,	// (0x000266c4) popup_uni_indicator_window

0x1d05,	// (0x00021ac4) bg_popup_sub_pane_cp14

0xd939,	// (0x0002d6f8) list_uniindi_pane

0xd945,	// (0x0002d704) uniindi_top_pane

0x1a0f,	// (0x000217ce) bg_uniindi_top_pane

0xd964,	// (0x0002d723) uniindi_top_pane_g1

0xd97a,	// (0x0002d739) uniindi_top_pane_g2

0x0003,

0xfd07,	// (0x0002fac6) uniindi_top_pane_g

0xd9a4,	// (0x0002d763) uniindi_top_pane_t1

0xd9ce,	// (0x0002d78d) list_single_uniindi_pane_ParamLimits

0xd9ce,	// (0x0002d78d) list_single_uniindi_pane

0xc046,	// (0x0002be05) bg_uniindi_top_pane_g1

0xd9e1,	// (0x0002d7a0) list_single_uniindi_pane_g1

0xd9f4,	// (0x0002d7b3) list_single_uniindi_pane_t1

0x185b,	// (0x0002161a) control_bg_pane

0xda19,	// (0x0002d7d8) bg_sctrl_sk_pane_cp1

0xda22,	// (0x0002d7e1) bg_sctrl_sk_pane_cp2

0xda2b,	// (0x0002d7ea) control_bg_pane_g1

0xda34,	// (0x0002d7f3) control_bg_pane_g2

0x0001,

0xfd10,	// (0x0002facf) control_bg_pane_g

0xba7f,	// (0x0002b83e) cell_indicator_nsta_pane_g1_ParamLimits

0xba8d,	// (0x0002b84c) cell_indicator_nsta_pane_g2_ParamLimits

0xfa8b,	// (0x0002f84a) cell_indicator_nsta_pane_g_ParamLimits

0x6242,	// (0x00026001) form2_midp_time_pane_t1_ParamLimits

0x1b8f,	// (0x0002194e) main_idle_act4_pane_ParamLimits

0x1b8f,	// (0x0002194e) main_idle_act4_pane

0x7f94,	// (0x00027d53) popup_tb_extension_window_ParamLimits

0xd8d9,	// (0x0002d698) tb_ext_find_pane_ParamLimits

0xd8d9,	// (0x0002d698) tb_ext_find_pane

0xda3d,	// (0x0002d7fc) ai_gene_pane_1_cp1

0x2677,	// (0x00022436) ai_gene_pane_2_cp1

0xda45,	// (0x0002d804) list_single_idle_plugin_calendar_pane

0xda4e,	// (0x0002d80d) list_single_idle_plugin_notification_pane

0xda57,	// (0x0002d816) list_single_idle_plugin_player_pane

0xda60,	// (0x0002d81f) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda60,	// (0x0002d81f) list_single_idle_plugin_shortcut_pane

0xda82,	// (0x0002d841) main_idle_act4_pane_t1

0xda94,	// (0x0002d853) main_idle_act4_pane_t2

0x0001,

0xfd15,	// (0x0002fad4) main_idle_act4_pane_t

0xdaa6,	// (0x0002d865) middle_sk_idle_act4_pane_ParamLimits

0xdaa6,	// (0x0002d865) middle_sk_idle_act4_pane

0xdabc,	// (0x0002d87b) popup_clock_digital_analogue_window_cp2

0xdad6,	// (0x0002d895) shortcut_wheel_idle_act4_pane_ParamLimits

0xdad6,	// (0x0002d895) shortcut_wheel_idle_act4_pane

0xc046,	// (0x0002be05) shortcut_wheel_idle_act4_pane_g1

0xc046,	// (0x0002be05) shortcut_wheel_idle_act4_pane_g2

0xc046,	// (0x0002be05) shortcut_wheel_idle_act4_pane_g3

0xc046,	// (0x0002be05) shortcut_wheel_idle_act4_pane_g4

0xc046,	// (0x0002be05) shortcut_wheel_idle_act4_pane_g5

0xdaea,	// (0x0002d8a9) shortcut_wheel_idle_act4_pane_g6

0xdaf2,	// (0x0002d8b1) shortcut_wheel_idle_act4_pane_g7

0xdafa,	// (0x0002d8b9) shortcut_wheel_idle_act4_pane_g8

0xdb02,	// (0x0002d8c1) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1a,	// (0x0002fad9) shortcut_wheel_idle_act4_pane_g

0xc2b6,	// (0x0002c075) middle_sk_idle_act4_pane_g1_ParamLimits

0xc2b6,	// (0x0002c075) middle_sk_idle_act4_pane_g1

0xdb66,	// (0x0002d925) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb66,	// (0x0002d925) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3d,	// (0x0002fafc) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3d,	// (0x0002fafc) middle_sk_idle_act4_pane_g

0xdb72,	// (0x0002d931) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb72,	// (0x0002d931) middle_sk_idle_act4_pane_t1

0xdb8f,	// (0x0002d94e) grid_ai_shortcut_pane_ParamLimits

0xdb8f,	// (0x0002d94e) grid_ai_shortcut_pane

0xdba8,	// (0x0002d967) list_highlight_pane_cp16_ParamLimits

0xdba8,	// (0x0002d967) list_highlight_pane_cp16

0xdbb5,	// (0x0002d974) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbb5,	// (0x0002d974) list_single_idle_plugin_shortcut_pane_g1

0xdbc1,	// (0x0002d980) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbc1,	// (0x0002d980) list_single_idle_plugin_shortcut_pane_g2

0xdbd9,	// (0x0002d998) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbd9,	// (0x0002d998) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd42,	// (0x0002fb01) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd42,	// (0x0002fb01) list_single_idle_plugin_shortcut_pane_g

0xdbec,	// (0x0002d9ab) cell_ai_shortcut_pane_ParamLimits

0xdbec,	// (0x0002d9ab) cell_ai_shortcut_pane

0xdc10,	// (0x0002d9cf) cell_ai_shortcut_pane_g1_ParamLimits

0xdc10,	// (0x0002d9cf) cell_ai_shortcut_pane_g1

0xda3d,	// (0x0002d7fc) ai_gene_pane_1_cp2

0xdc32,	// (0x0002d9f1) ai_gene_pane_2_cp2

0xdc3a,	// (0x0002d9f9) list_highlight_pane_cp15

0xdc43,	// (0x0002da02) list_single_idle_plugin_calendar_pane_g1

0xdc3a,	// (0x0002d9f9) list_highlight_pane_cp17

0xdc4b,	// (0x0002da0a) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc53,	// (0x0002da12) list_single_idle_plugin_player_pane_g1

0xb3be,	// (0x0002b17d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd49,	// (0x0002fb08) list_single_idle_plugin_player_pane_g

0xdc5b,	// (0x0002da1a) list_single_idle_plugin_player_pane_t1

0xdc69,	// (0x0002da28) list_single_idle_plugin_player_pane_t2

0xdc77,	// (0x0002da36) list_single_idle_plugin_player_pane_t3

0xdc85,	// (0x0002da44) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4e,	// (0x0002fb0d) list_single_idle_plugin_player_pane_t

0xdc93,	// (0x0002da52) wait_bar_pane_cp15

0xdc9b,	// (0x0002da5a) grid_ai_notification_pane

0xb3be,	// (0x0002b17d) list_single_idle_plugin_notification_pane_g1

0xdca4,	// (0x0002da63) cell_ai_notification_pane_ParamLimits

0xdca4,	// (0x0002da63) cell_ai_notification_pane

0xdcb1,	// (0x0002da70) cell_ai_notification_pane_g1

0xdcb9,	// (0x0002da78) cell_ai_notification_pane_t1

0xdcc7,	// (0x0002da86) tb_ext_find_button_pane

0xdccf,	// (0x0002da8e) tb_ext_find_pane_g1

0xdcd7,	// (0x0002da96) tb_ext_find_pane_t1

0x21c5,	// (0x00021f84) tb_ext_find_button_pane_g1

0xdce5,	// (0x0002daa4) tb_ext_find_button_pane_g2

0x0001,

0xfd57,	// (0x0002fb16) tb_ext_find_button_pane_g

0xda82,	// (0x0002d841) main_idle_act4_pane_t1_ParamLimits

0xda94,	// (0x0002d853) main_idle_act4_pane_t2_ParamLimits

0xfd15,	// (0x0002fad4) main_idle_act4_pane_t_ParamLimits

0xdabc,	// (0x0002d87b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdaca,	// (0x0002d889) sat_plugin_idle_act4_pane_ParamLimits

0xdaca,	// (0x0002d889) sat_plugin_idle_act4_pane

0xdcee,	// (0x0002daad) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcee,	// (0x0002daad) sat_plugin_idle_act4_pane_t1

0xdd01,	// (0x0002dac0) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd01,	// (0x0002dac0) sat_plugin_idle_act4_pane_t2

0xdd14,	// (0x0002dad3) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd14,	// (0x0002dad3) sat_plugin_idle_act4_pane_t3

0xdd27,	// (0x0002dae6) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd27,	// (0x0002dae6) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5c,	// (0x0002fb1b) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5c,	// (0x0002fb1b) sat_plugin_idle_act4_pane_t

0x684e,	// (0x0002660d) popup_battery_window_ParamLimits

0x684e,	// (0x0002660d) popup_battery_window

0x1a0f,	// (0x000217ce) bg_popup_sub_pane_cp25_ParamLimits

0x1a0f,	// (0x000217ce) bg_popup_sub_pane_cp25

0xdd3a,	// (0x0002daf9) popup_battery_window_g1_ParamLimits

0xdd3a,	// (0x0002daf9) popup_battery_window_g1

0xdd46,	// (0x0002db05) popup_battery_window_t1_ParamLimits

0xdd46,	// (0x0002db05) popup_battery_window_t1

0xdd58,	// (0x0002db17) popup_battery_window_t2_ParamLimits

0xdd58,	// (0x0002db17) popup_battery_window_t2

0x0001,

0xfd65,	// (0x0002fb24) popup_battery_window_t_ParamLimits

0xfd65,	// (0x0002fb24) popup_battery_window_t

0x776f,	// (0x0002752e) midp_canvas_pane_ParamLimits

0x77e8,	// (0x000275a7) midp_keypad_pane_ParamLimits

0x77e8,	// (0x000275a7) midp_keypad_pane

0x1eb5,	// (0x00021c74) main_midp_pane_ParamLimits

0xbaf9,	// (0x0002b8b8) signal_pane_g2_cp_ParamLimits

0xdd75,	// (0x0002db34) aid_size_cell_midp_keypad_ParamLimits

0xdd75,	// (0x0002db34) aid_size_cell_midp_keypad

0xdd8f,	// (0x0002db4e) midp_keyp_game_grid_pane_ParamLimits

0xdd8f,	// (0x0002db4e) midp_keyp_game_grid_pane

0xddaf,	// (0x0002db6e) midp_keyp_rocker_pane_ParamLimits

0xddaf,	// (0x0002db6e) midp_keyp_rocker_pane

0xdde8,	// (0x0002dba7) midp_keyp_sk_left_pane_ParamLimits

0xdde8,	// (0x0002dba7) midp_keyp_sk_left_pane

0xde42,	// (0x0002dc01) midp_keyp_sk_right_pane_ParamLimits

0xde42,	// (0x0002dc01) midp_keyp_sk_right_pane

0x185b,	// (0x0002161a) bg_button_pane_cp03

0xde9c,	// (0x0002dc5b) midp_keyp_sk_left_pane_g1

0x185b,	// (0x0002161a) bg_button_pane_cp04

0xde9c,	// (0x0002dc5b) midp_keyp_sk_right_pane_g1

0xc046,	// (0x0002be05) midp_keyp_rocker_pane_g1

0xdea5,	// (0x0002dc64) keyp_game_cell_pane_ParamLimits

0xdea5,	// (0x0002dc64) keyp_game_cell_pane

0x185b,	// (0x0002161a) bg_button_pane_cp02

0xdeb8,	// (0x0002dc77) keyp_game_cell_pane_g1

0x6884,	// (0x00026643) popup_fep_vkb2_window_ParamLimits

0x6884,	// (0x00026643) popup_fep_vkb2_window

0x9694,	// (0x00029453) aid_size_cell_vkb2_ParamLimits

0x9694,	// (0x00029453) aid_size_cell_vkb2

0x96e8,	// (0x000294a7) popup_fep_vkb2_window_g1_ParamLimits

0x96e8,	// (0x000294a7) popup_fep_vkb2_window_g1

0x9730,	// (0x000294ef) vkb2_area_bottom_pane_ParamLimits

0x9730,	// (0x000294ef) vkb2_area_bottom_pane

0x977c,	// (0x0002953b) vkb2_area_keypad_pane_ParamLimits

0x977c,	// (0x0002953b) vkb2_area_keypad_pane

0x97be,	// (0x0002957d) vkb2_area_top_pane_ParamLimits

0x97be,	// (0x0002957d) vkb2_area_top_pane

0x9838,	// (0x000295f7) vkb2_top_entry_pane_ParamLimits

0x9838,	// (0x000295f7) vkb2_top_entry_pane

0x9862,	// (0x00029621) vkb2_top_grid_left_pane_ParamLimits

0x9862,	// (0x00029621) vkb2_top_grid_left_pane

0x9880,	// (0x0002963f) vkb2_top_grid_right_pane_ParamLimits

0x9880,	// (0x0002963f) vkb2_top_grid_right_pane

0x989e,	// (0x0002965d) vkb2_cell_keypad_pane_ParamLimits

0x989e,	// (0x0002965d) vkb2_cell_keypad_pane

0x996f,	// (0x0002972e) vkb2_area_bottom_grid_pane_ParamLimits

0x996f,	// (0x0002972e) vkb2_area_bottom_grid_pane

0x9995,	// (0x00029754) vkb2_area_bottom_pane_g1_ParamLimits

0x9995,	// (0x00029754) vkb2_area_bottom_pane_g1

0x99b9,	// (0x00029778) vkb2_area_bottom_pane_g2_ParamLimits

0x99b9,	// (0x00029778) vkb2_area_bottom_pane_g2

0x99e7,	// (0x000297a6) vkb2_area_bottom_pane_g3_ParamLimits

0x99e7,	// (0x000297a6) vkb2_area_bottom_pane_g3

0x0002,

0xfd6a,	// (0x0002fb29) vkb2_area_bottom_pane_g_ParamLimits

0xfd6a,	// (0x0002fb29) vkb2_area_bottom_pane_g

0x9a48,	// (0x00029807) vkb2_top_cell_left_pane_ParamLimits

0x9a48,	// (0x00029807) vkb2_top_cell_left_pane

0xdec9,	// (0x0002dc88) vkb2_top_entry_pane_g1_ParamLimits

0xdec9,	// (0x0002dc88) vkb2_top_entry_pane_g1

0xded7,	// (0x0002dc96) vkb2_top_entry_pane_t1_ParamLimits

0xded7,	// (0x0002dc96) vkb2_top_entry_pane_t1

0xdf09,	// (0x0002dcc8) vkb2_top_entry_pane_t2_ParamLimits

0xdf09,	// (0x0002dcc8) vkb2_top_entry_pane_t2

0xdf3b,	// (0x0002dcfa) vkb2_top_entry_pane_t3_ParamLimits

0xdf3b,	// (0x0002dcfa) vkb2_top_entry_pane_t3

0x0002,

0xfd71,	// (0x0002fb30) vkb2_top_entry_pane_t_ParamLimits

0xfd71,	// (0x0002fb30) vkb2_top_entry_pane_t

0x9a95,	// (0x00029854) vkb2_top_grid_right_pane_g1_ParamLimits

0x9a95,	// (0x00029854) vkb2_top_grid_right_pane_g1

0x9aab,	// (0x0002986a) vkb2_top_grid_right_pane_g2_ParamLimits

0x9aab,	// (0x0002986a) vkb2_top_grid_right_pane_g2

0x9ac3,	// (0x00029882) vkb2_top_grid_right_pane_g3_ParamLimits

0x9ac3,	// (0x00029882) vkb2_top_grid_right_pane_g3

0x9adb,	// (0x0002989a) vkb2_top_grid_right_pane_g4_ParamLimits

0x9adb,	// (0x0002989a) vkb2_top_grid_right_pane_g4

0x0003,

0xfd78,	// (0x0002fb37) vkb2_top_grid_right_pane_g_ParamLimits

0xfd78,	// (0x0002fb37) vkb2_top_grid_right_pane_g

0x9af1,	// (0x000298b0) vkb2_top_cell_left_pane_g1

0x9b08,	// (0x000298c7) vkb2_cell_keypad_pane_g1_ParamLimits

0x9b08,	// (0x000298c7) vkb2_cell_keypad_pane_g1

0xdf5f,	// (0x0002dd1e) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf5f,	// (0x0002dd1e) vkb2_cell_keypad_pane_t1

0x9b16,	// (0x000298d5) vkb2_cell_bottom_grid_pane_ParamLimits

0x9b16,	// (0x000298d5) vkb2_cell_bottom_grid_pane

0x9b4f,	// (0x0002990e) vkb2_cell_bottom_grid_pane_g1

0xdb0a,	// (0x0002d8c9) aid_call2_pane_cp02

0xdb12,	// (0x0002d8d1) aid_call_pane_cp02

0xdb1a,	// (0x0002d8d9) clock_digital_number_pane_cp10

0xdb22,	// (0x0002d8e1) clock_digital_number_pane_cp11

0xdb2a,	// (0x0002d8e9) clock_digital_number_pane_cp12

0xdb32,	// (0x0002d8f1) clock_digital_number_pane_cp13

0xdb3a,	// (0x0002d8f9) clock_digital_separator_pane_cp10

0x21c5,	// (0x00021f84) popup_clock_digital_analogue_window_cp2_g1

0x21c5,	// (0x00021f84) popup_clock_digital_analogue_window_cp2_g2

0xdb42,	// (0x0002d901) popup_clock_digital_analogue_window_cp2_g3

0x21c5,	// (0x00021f84) popup_clock_digital_analogue_window_cp2_g4

0xdb42,	// (0x0002d901) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2d,	// (0x0002faec) popup_clock_digital_analogue_window_cp2_g

0xdb4a,	// (0x0002d909) popup_clock_digital_analogue_window_cp2_t1

0xdb58,	// (0x0002d917) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd38,	// (0x0002faf7) popup_clock_digital_analogue_window_cp2_t

0xc046,	// (0x0002be05) clock_digital_number_pane_cp10_g1

0xc046,	// (0x0002be05) clock_digital_number_pane_cp10_g2

0x0001,

0xfb27,	// (0x0002f8e6) clock_digital_number_pane_cp10_g

0xc046,	// (0x0002be05) clock_digital_separator_pane_cp10_g1

0xc046,	// (0x0002be05) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb27,	// (0x0002f8e6) clock_digital_separator_pane_cp10_g

0xd986,	// (0x0002d745) uniindi_top_pane_g3

0xd997,	// (0x0002d756) uniindi_top_pane_g4

0x9929,	// (0x000296e8) vkb2_row_keypad_pane_ParamLimits

0x9929,	// (0x000296e8) vkb2_row_keypad_pane

0x9b6b,	// (0x0002992a) vkb2_cell_t_keypad_pane_ParamLimits

0x9b6b,	// (0x0002992a) vkb2_cell_t_keypad_pane

0x9b7b,	// (0x0002993a) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9b7b,	// (0x0002993a) vkb2_cell_t_keypad_pane_cp08

0x9b8e,	// (0x0002994d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x9b8e,	// (0x0002994d) vkb2_cell_t_keypad_pane_cp09

0x9ba2,	// (0x00029961) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x9ba2,	// (0x00029961) vkb2_cell_t_keypad_pane_cp01

0x9bb3,	// (0x00029972) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x9bb3,	// (0x00029972) vkb2_cell_t_keypad_pane_cp02

0x9bc4,	// (0x00029983) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x9bc4,	// (0x00029983) vkb2_cell_t_keypad_pane_cp03

0x9bd5,	// (0x00029994) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x9bd5,	// (0x00029994) vkb2_cell_t_keypad_pane_cp04

0x9be6,	// (0x000299a5) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x9be6,	// (0x000299a5) vkb2_cell_t_keypad_pane_cp05

0x9bf7,	// (0x000299b6) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x9bf7,	// (0x000299b6) vkb2_cell_t_keypad_pane_cp06

0x9c08,	// (0x000299c7) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9c08,	// (0x000299c7) vkb2_cell_t_keypad_pane_cp07

0x9c19,	// (0x000299d8) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9c19,	// (0x000299d8) vkb2_cell_t_keypad_pane_cp10

0xc2b6,	// (0x0002c075) vkb2_cell_t_keypad_pane_g1

0xdf76,	// (0x0002dd35) vkb2_cell_t_keypad_pane_t1

0x185b,	// (0x0002161a) popup_grid_graphic2_window

0xdf88,	// (0x0002dd47) aid_size_cell_graphic2_ParamLimits

0xdf88,	// (0x0002dd47) aid_size_cell_graphic2

0xdfc0,	// (0x0002dd7f) bg_popup_window_pane_cp21_ParamLimits

0xdfc0,	// (0x0002dd7f) bg_popup_window_pane_cp21

0xdfce,	// (0x0002dd8d) graphic2_pages_pane_ParamLimits

0xdfce,	// (0x0002dd8d) graphic2_pages_pane

0xe014,	// (0x0002ddd3) grid_graphic2_control_pane_ParamLimits

0xe014,	// (0x0002ddd3) grid_graphic2_control_pane

0xe052,	// (0x0002de11) grid_graphic2_pane_ParamLimits

0xe052,	// (0x0002de11) grid_graphic2_pane

0xe0c6,	// (0x0002de85) cell_graphic2_pane

0x185b,	// (0x0002161a) main_comp_mode_pane

0xd1ee,	// (0x0002cfad) list_ai3_gene_pane_ParamLimits

0xd5bc,	// (0x0002d37b) bg_popup_window_pane_cp19_ParamLimits

0xd5c8,	// (0x0002d387) bg_touch_area_indi_pane_ParamLimits

0xd5c8,	// (0x0002d387) bg_touch_area_indi_pane

0xd5de,	// (0x0002d39d) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5de,	// (0x0002d39d) bg_touch_area_indi_pane_cp01

0xd5fd,	// (0x0002d3bc) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5fd,	// (0x0002d3bc) bg_touch_area_indi_pane_cp02

0xd613,	// (0x0002d3d2) bg_touch_area_indi_pane_cp03_ParamLimits

0xd613,	// (0x0002d3d2) bg_touch_area_indi_pane_cp03

0xd62d,	// (0x0002d3ec) popup_slider_window_g1_ParamLimits

0xd649,	// (0x0002d408) popup_slider_window_g2_ParamLimits

0xd665,	// (0x0002d424) popup_slider_window_g3_ParamLimits

0xfcc2,	// (0x0002fa81) popup_slider_window_g_ParamLimits

0xd6cb,	// (0x0002d48a) popup_slider_window_t1_ParamLimits

0xd73f,	// (0x0002d4fe) small_volume_slider_vertical_pane_ParamLimits

0xe0c6,	// (0x0002de85) cell_graphic2_pane_ParamLimits

0xe115,	// (0x0002ded4) bg_button_pane_cp10_ParamLimits

0xe115,	// (0x0002ded4) bg_button_pane_cp10

0xe128,	// (0x0002dee7) bg_button_pane_cp11_ParamLimits

0xe128,	// (0x0002dee7) bg_button_pane_cp11

0xe13b,	// (0x0002defa) graphic2_pages_pane_g1_ParamLimits

0xe13b,	// (0x0002defa) graphic2_pages_pane_g1

0xe156,	// (0x0002df15) graphic2_pages_pane_g2_ParamLimits

0xe156,	// (0x0002df15) graphic2_pages_pane_g2

0x0001,

0xfd86,	// (0x0002fb45) graphic2_pages_pane_g_ParamLimits

0xfd86,	// (0x0002fb45) graphic2_pages_pane_g

0xe16e,	// (0x0002df2d) graphic2_pages_pane_t1_ParamLimits

0xe16e,	// (0x0002df2d) graphic2_pages_pane_t1

0xe186,	// (0x0002df45) cell_graphic2_control_pane_ParamLimits

0xe186,	// (0x0002df45) cell_graphic2_control_pane

0xe1a4,	// (0x0002df63) cell_graphic2_pane_g1_ParamLimits

0xe1a4,	// (0x0002df63) cell_graphic2_pane_g1

0xe1b1,	// (0x0002df70) cell_graphic2_pane_g2_ParamLimits

0xe1b1,	// (0x0002df70) cell_graphic2_pane_g2

0xe1be,	// (0x0002df7d) cell_graphic2_pane_g3_ParamLimits

0xe1be,	// (0x0002df7d) cell_graphic2_pane_g3

0xe1cb,	// (0x0002df8a) cell_graphic2_pane_g4_ParamLimits

0xe1cb,	// (0x0002df8a) cell_graphic2_pane_g4

0xe1d8,	// (0x0002df97) cell_graphic2_pane_g5_ParamLimits

0xe1d8,	// (0x0002df97) cell_graphic2_pane_g5

0x0004,

0xfd8b,	// (0x0002fb4a) cell_graphic2_pane_g_ParamLimits

0xfd8b,	// (0x0002fb4a) cell_graphic2_pane_g

0xe1f1,	// (0x0002dfb0) cell_graphic2_pane_t1_ParamLimits

0xe1f1,	// (0x0002dfb0) cell_graphic2_pane_t1

0x86f8,	// (0x000284b7) grid_highlight_pane_cp11_ParamLimits

0x86f8,	// (0x000284b7) grid_highlight_pane_cp11

0x1a0f,	// (0x000217ce) bg_button_pane_cp05

0xe227,	// (0x0002dfe6) cell_graphic2_control_pane_g1

0xc046,	// (0x0002be05) bg_touch_area_indi_pane_g1

0xe24f,	// (0x0002e00e) aid_cmod_rocker_key_size

0xe259,	// (0x0002e018) aid_cmode_itu_key_size

0xe263,	// (0x0002e022) main_cmode_video_pane

0xe26d,	// (0x0002e02c) main_comp_mode_itu_pane

0xe279,	// (0x0002e038) main_comp_mode_rocker_pane

0xe285,	// (0x0002e044) cell_cmode_rocker_pane_ParamLimits

0xe285,	// (0x0002e044) cell_cmode_rocker_pane

0xe297,	// (0x0002e056) cell_cmode_itu_pane_ParamLimits

0xe297,	// (0x0002e056) cell_cmode_itu_pane

0x1d05,	// (0x00021ac4) bg_button_pane_cp06_ParamLimits

0x1d05,	// (0x00021ac4) bg_button_pane_cp06

0xc2b6,	// (0x0002c075) cell_cmode_rocker_pane_g1_ParamLimits

0xc2b6,	// (0x0002c075) cell_cmode_rocker_pane_g1

0xd7e3,	// (0x0002d5a2) cell_cmode_rocker_pane_g2_ParamLimits

0xd7e3,	// (0x0002d5a2) cell_cmode_rocker_pane_g2

0x0001,

0xfd9b,	// (0x0002fb5a) cell_cmode_rocker_pane_g_ParamLimits

0xfd9b,	// (0x0002fb5a) cell_cmode_rocker_pane_g

0x185b,	// (0x0002161a) bg_button_pane_cp07

0xe2ac,	// (0x0002e06b) cell_cmode_itu_pane_g1

0xe2b5,	// (0x0002e074) cell_cmode_itu_pane_t1

0xe2c3,	// (0x0002e082) cell_cmode_itu_pane_t2

0x0001,

0xfda0,	// (0x0002fb5f) cell_cmode_itu_pane_t

0xda09,	// (0x0002d7c8) aid_touch_ctrl_left

0xda11,	// (0x0002d7d0) aid_touch_ctrl_right

0x185b,	// (0x0002161a) compa_mode_pane

0xe2d1,	// (0x0002e090) aid_cmod_rocker_key_size_cp

0xe2db,	// (0x0002e09a) aid_cmode_itu_key_size_cp

0xe2e5,	// (0x0002e0a4) compa_mode_pane_g1

0xe2ed,	// (0x0002e0ac) compa_mode_pane_g2

0xe2f5,	// (0x0002e0b4) compa_mode_pane_g3

0x0002,

0xfda5,	// (0x0002fb64) compa_mode_pane_g

0xe2fd,	// (0x0002e0bc) main_comp_mode_itu_pane_cp

0xe305,	// (0x0002e0c4) main_comp_mode_rocker_pane_cp

0xe30d,	// (0x0002e0cc) cell_cmode_itu_pane_cp_ParamLimits

0xe30d,	// (0x0002e0cc) cell_cmode_itu_pane_cp

0xe322,	// (0x0002e0e1) cell_cmode_rocker_pane_cp_ParamLimits

0xe322,	// (0x0002e0e1) cell_cmode_rocker_pane_cp

0x1d05,	// (0x00021ac4) bg_button_pane_cp06_cp_ParamLimits

0x1d05,	// (0x00021ac4) bg_button_pane_cp06_cp

0xc2b6,	// (0x0002c075) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc2b6,	// (0x0002c075) cell_cmode_rocker_pane_g1_cp

0xc046,	// (0x0002be05) cell_cmode_rocker_pane_g2_cp

0x185b,	// (0x0002161a) bg_button_pane_cp07_cp

0xe334,	// (0x0002e0f3) cell_cmode_itu_pane_g1_cp

0xe33d,	// (0x0002e0fc) cell_cmode_itu_pane_t1_cp

0xe33d,	// (0x0002e0fc) cell_cmode_itu_pane_t2_cp

0xaf3b,	// (0x0002acfa) settings_code_pane_cp2

0x18cb,	// (0x0002168a) bg_popup_window_pane_cp3_ParamLimits

0x1b28,	// (0x000218e7) heading_pane_cp3_ParamLimits

0x1b37,	// (0x000218f6) listscroll_popup_graphic_pane_ParamLimits

0x9242,	// (0x00029001) fep_hwr_aid_pane_ParamLimits

0x960b,	// (0x000293ca) aid_touch_sctrl_top_ParamLimits

0x9618,	// (0x000293d7) sctrl_sk_top_pane_g1_ParamLimits

0xc2b6,	// (0x0002c075) sctrl_sk_top_pane_g2_ParamLimits

0xfcdb,	// (0x0002fa9a) sctrl_sk_top_pane_g_ParamLimits

0x9625,	// (0x000293e4) sctrl_sk_top_pane_t1_ParamLimits

0x960b,	// (0x000293ca) aid_touch_sctrl_bottom_ParamLimits

0x9625,	// (0x000293e4) sctrl_sk_bottom_pane_t1_ParamLimits

0xd952,	// (0x0002d711) aid_area_touch_clock

0x9800,	// (0x000295bf) aid_vkb2_area_top_pane_cell_ParamLimits

0x9800,	// (0x000295bf) aid_vkb2_area_top_pane_cell

0x994b,	// (0x0002970a) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x994b,	// (0x0002970a) aid_vkb2_area_bottom_pane_cell

0xdec1,	// (0x0002dc80) popup_char_count_window

0xe34b,	// (0x0002e10a) popup_char_count_window_g1

0xe354,	// (0x0002e113) popup_char_count_window_g2

0xe35d,	// (0x0002e11c) popup_char_count_window_g3

0x0002,

0xfdac,	// (0x0002fb6b) popup_char_count_window_g

0xe366,	// (0x0002e125) popup_char_count_window_t1

0x96c6,	// (0x00029485) popup_fep_char_preview_window_ParamLimits

0x96c6,	// (0x00029485) popup_fep_char_preview_window

0x981e,	// (0x000295dd) vkb2_top_candi_pane_ParamLimits

0x981e,	// (0x000295dd) vkb2_top_candi_pane

0xe374,	// (0x0002e133) cell_vkb2_top_candi_pane_ParamLimits

0xe374,	// (0x0002e133) cell_vkb2_top_candi_pane

0x8d9a,	// (0x00028b59) bg_popup_fep_char_preview_window_ParamLimits

0x8d9a,	// (0x00028b59) bg_popup_fep_char_preview_window

0x9c2e,	// (0x000299ed) popup_fep_char_preview_window_t1_ParamLimits

0x9c2e,	// (0x000299ed) popup_fep_char_preview_window_t1

0xe3c1,	// (0x0002e180) bg_popup_fep_char_preview_window_g1

0xe3c9,	// (0x0002e188) bg_popup_fep_char_preview_window_g2

0xe3d1,	// (0x0002e190) bg_popup_fep_char_preview_window_g3

0xe3d9,	// (0x0002e198) bg_popup_fep_char_preview_window_g4

0xe3e1,	// (0x0002e1a0) bg_popup_fep_char_preview_window_g5

0xe3e9,	// (0x0002e1a8) bg_popup_fep_char_preview_window_g6

0xe3f1,	// (0x0002e1b0) bg_popup_fep_char_preview_window_g7

0xe3f9,	// (0x0002e1b8) bg_popup_fep_char_preview_window_g8

0xe401,	// (0x0002e1c0) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb3,	// (0x0002fb72) bg_popup_fep_char_preview_window_g

0xc2b6,	// (0x0002c075) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc2b6,	// (0x0002c075) cell_vkb2_top_candi_pane_g1

0xc5cd,	// (0x0002c38c) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc5cd,	// (0x0002c38c) cell_vkb2_top_candi_pane_g2

0xc5ee,	// (0x0002c3ad) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc5ee,	// (0x0002c3ad) cell_vkb2_top_candi_pane_g3

0x9c70,	// (0x00029a2f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x9c70,	// (0x00029a2f) cell_vkb2_top_candi_pane_g4

0xe409,	// (0x0002e1c8) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe409,	// (0x0002e1c8) cell_vkb2_top_candi_pane_g5

0xd7e3,	// (0x0002d5a2) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd7e3,	// (0x0002d5a2) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc8,	// (0x0002fb87) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc8,	// (0x0002fb87) cell_vkb2_top_candi_pane_g

0x9c91,	// (0x00029a50) cell_vkb2_top_candi_pane_t1

0x905a,	// (0x00028e19) aid_size_touch_slider_mark_ParamLimits

0x905a,	// (0x00028e19) aid_size_touch_slider_mark

0xe004,	// (0x0002ddc3) grid_graphic2_catg_pane_ParamLimits

0xe004,	// (0x0002ddc3) grid_graphic2_catg_pane

0xe0a2,	// (0x0002de61) popup_grid_graphic2_window_t1_ParamLimits

0xe0a2,	// (0x0002de61) popup_grid_graphic2_window_t1

0xe0b4,	// (0x0002de73) popup_grid_graphic2_window_t2_ParamLimits

0xe0b4,	// (0x0002de73) popup_grid_graphic2_window_t2

0x0001,

0xfd81,	// (0x0002fb40) popup_grid_graphic2_window_t_ParamLimits

0xfd81,	// (0x0002fb40) popup_grid_graphic2_window_t

0x1a0f,	// (0x000217ce) bg_button_pane_cp05_ParamLimits

0xe227,	// (0x0002dfe6) cell_graphic2_control_pane_g1_ParamLimits

0xe42a,	// (0x0002e1e9) cell_graphic2_catg_pane_ParamLimits

0xe42a,	// (0x0002e1e9) cell_graphic2_catg_pane

0x185b,	// (0x0002161a) bg_button_pane_cp12

0xe43c,	// (0x0002e1fb) cell_graphic2_catg_pane_g1

0xd91d,	// (0x0002d6dc) cell_tb_ext_pane_t1_ParamLimits

0x9a68,	// (0x00029827) vkb2_top_cell_right_narrow_pane_ParamLimits

0x9a68,	// (0x00029827) vkb2_top_cell_right_narrow_pane

0x9a80,	// (0x0002983f) vkb2_top_cell_right_wide_pane_ParamLimits

0x9a80,	// (0x0002983f) vkb2_top_cell_right_wide_pane

0x9234,	// (0x00028ff3) bg_vkb2_func_pane_ParamLimits

0x9234,	// (0x00028ff3) bg_vkb2_func_pane

0x9af1,	// (0x000298b0) vkb2_top_cell_left_pane_g1_ParamLimits

0x9234,	// (0x00028ff3) bg_vkb2_fuc_pane_cp03_ParamLimits

0x9234,	// (0x00028ff3) bg_vkb2_fuc_pane_cp03

0x9b4f,	// (0x0002990e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x85fc,	// (0x000283bb) bg_vkb2_func_pane_g1

0x8604,	// (0x000283c3) bg_vkb2_func_pane_g2

0x8614,	// (0x000283d3) bg_vkb2_func_pane_g3

0x860c,	// (0x000283cb) bg_vkb2_func_pane_g4

0x861c,	// (0x000283db) bg_vkb2_func_pane_g5

0x8624,	// (0x000283e3) bg_vkb2_func_pane_g6

0x862c,	// (0x000283eb) bg_vkb2_func_pane_g7

0x8634,	// (0x000283f3) bg_vkb2_func_pane_g8

0x85f4,	// (0x000283b3) bg_vkb2_func_pane_g9

0x0008,

0xfdd5,	// (0x0002fb94) bg_vkb2_func_pane_g

0x9234,	// (0x00028ff3) bg_vkb2_fuc_pane_cp01_ParamLimits

0x9234,	// (0x00028ff3) bg_vkb2_fuc_pane_cp01

0x9af1,	// (0x000298b0) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x9af1,	// (0x000298b0) vkb2_top_cell_right_wide_pane_g1

0x9234,	// (0x00028ff3) bg_vkb2_fuc_pane_cp02_ParamLimits

0x9234,	// (0x00028ff3) bg_vkb2_fuc_pane_cp02

0x9b4f,	// (0x0002990e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9b4f,	// (0x0002990e) vkb2_top_cell_right_narrow_pane_g1

0xd536,	// (0x0002d2f5) aid_touch_area_decrease_ParamLimits

0xd536,	// (0x0002d2f5) aid_touch_area_decrease

0xd55a,	// (0x0002d319) aid_touch_area_increase_ParamLimits

0xd55a,	// (0x0002d319) aid_touch_area_increase

0xd572,	// (0x0002d331) aid_touch_area_mute_ParamLimits

0xd572,	// (0x0002d331) aid_touch_area_mute

0xd58e,	// (0x0002d34d) aid_touch_area_slider_ParamLimits

0xd58e,	// (0x0002d34d) aid_touch_area_slider

0xd681,	// (0x0002d440) popup_slider_window_g4_ParamLimits

0xd681,	// (0x0002d440) popup_slider_window_g4

0xd699,	// (0x0002d458) popup_slider_window_g5_ParamLimits

0xd699,	// (0x0002d458) popup_slider_window_g5

0xd6bb,	// (0x0002d47a) popup_slider_window_g6_ParamLimits

0xd6bb,	// (0x0002d47a) popup_slider_window_g6

0xd6f9,	// (0x0002d4b8) popup_slider_window_t2_ParamLimits

0xd6f9,	// (0x0002d4b8) popup_slider_window_t2

0x0001,

0xfccf,	// (0x0002fa8e) popup_slider_window_t_ParamLimits

0xfccf,	// (0x0002fa8e) popup_slider_window_t

0xd711,	// (0x0002d4d0) slider_pane_ParamLimits

0xd711,	// (0x0002d4d0) slider_pane

0xe445,	// (0x0002e204) slider_pane_g1_ParamLimits

0xe445,	// (0x0002e204) slider_pane_g1

0xe459,	// (0x0002e218) slider_pane_g2_ParamLimits

0xe459,	// (0x0002e218) slider_pane_g2

0xe46f,	// (0x0002e22e) slider_pane_g3_ParamLimits

0xe46f,	// (0x0002e22e) slider_pane_g3

0x0003,

0xfde8,	// (0x0002fba7) slider_pane_g_ParamLimits

0xfde8,	// (0x0002fba7) slider_pane_g

0x7ff0,	// (0x00027daf) popup_tb_float_extension_window_ParamLimits

0x7ff0,	// (0x00027daf) popup_tb_float_extension_window

0xe49b,	// (0x0002e25a) aid_size_cell_tb_float_ext

0x185b,	// (0x0002161a) bg_popup_sub_window_cp28

0xe4a7,	// (0x0002e266) grid_tb_float_ext_pane

0xe4b1,	// (0x0002e270) cell_tb_float_ext_pane_ParamLimits

0xe4b1,	// (0x0002e270) cell_tb_float_ext_pane

0xe4cb,	// (0x0002e28a) cell_tb_float_ext_pane_g1

0xe4d4,	// (0x0002e293) grid_highlight_pane_cp12

0x9375,	// (0x00029134) cell_last_hwr_side_pane_ParamLimits

0x9375,	// (0x00029134) cell_last_hwr_side_pane

0xc046,	// (0x0002be05) cell_last_hwr_side_pane_g1

0xe4dd,	// (0x0002e29c) cell_last_hwr_side_pane_g2

0x0001,

0xfdf1,	// (0x0002fbb0) cell_last_hwr_side_pane_g

0x9a17,	// (0x000297d6) vkb2_area_bottom_space_btn_pane_ParamLimits

0x9a17,	// (0x000297d6) vkb2_area_bottom_space_btn_pane

0xc2b6,	// (0x0002c075) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf76,	// (0x0002dd35) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9c91,	// (0x00029a50) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9cb0,	// (0x00029a6f) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9cb0,	// (0x00029a6f) vkb2_area_bottom_space_btn_pane_g1

0x9cea,	// (0x00029aa9) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9cea,	// (0x00029aa9) vkb2_area_bottom_space_btn_pane_g2

0x9d20,	// (0x00029adf) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9d20,	// (0x00029adf) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf6,	// (0x0002fbb5) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf6,	// (0x0002fbb5) vkb2_area_bottom_space_btn_pane_g

0x92e9,	// (0x000290a8) cel_fep_hwr_func_pane_ParamLimits

0x92e9,	// (0x000290a8) cel_fep_hwr_func_pane

0x9325,	// (0x000290e4) cell_hwr_side_button_pane_ParamLimits

0x9325,	// (0x000290e4) cell_hwr_side_button_pane

0xd952,	// (0x0002d711) aid_area_touch_clock_ParamLimits

0x1a0f,	// (0x000217ce) bg_uniindi_top_pane_ParamLimits

0xd964,	// (0x0002d723) uniindi_top_pane_g1_ParamLimits

0xd97a,	// (0x0002d739) uniindi_top_pane_g2_ParamLimits

0xd986,	// (0x0002d745) uniindi_top_pane_g3_ParamLimits

0xd997,	// (0x0002d756) uniindi_top_pane_g4_ParamLimits

0xfd07,	// (0x0002fac6) uniindi_top_pane_g_ParamLimits

0xd9a4,	// (0x0002d763) uniindi_top_pane_t1_ParamLimits

0x1a0f,	// (0x000217ce) bg_vkb2_func_pane_cp01_ParamLimits

0x1a0f,	// (0x000217ce) bg_vkb2_func_pane_cp01

0xe4e6,	// (0x0002e2a5) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4e6,	// (0x0002e2a5) cel_fep_hwr_func_pane_g1

0x1a0f,	// (0x000217ce) bg_vkb2_func_pane_cp02_ParamLimits

0x1a0f,	// (0x000217ce) bg_vkb2_func_pane_cp02

0xe4e6,	// (0x0002e2a5) cell_hwr_side_button_pane_g1_ParamLimits

0xe4e6,	// (0x0002e2a5) cell_hwr_side_button_pane_g1

0x8448,	// (0x00028207) status_pane_g4_ParamLimits

0x8448,	// (0x00028207) status_pane_g4

0x8462,	// (0x00028221) status_pane_t1

0xbd81,	// (0x0002bb40) form2_midp_gauge_slider_cont_pane

0xbd89,	// (0x0002bb48) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd9b,	// (0x0002bb5a) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbdad,	// (0x0002bb6c) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfada,	// (0x0002f899) form2_midp_gauge_slider_pane_t_ParamLimits

0xbdbf,	// (0x0002bb7e) form2_midp_slider_pane_ParamLimits

0x9686,	// (0x00029445) aid_size_cell_func_vkb2_ParamLimits

0x9686,	// (0x00029445) aid_size_cell_func_vkb2

0xe487,	// (0x0002e246) slider_pane_g4_ParamLimits

0xe487,	// (0x0002e246) slider_pane_g4

0x9d6a,	// (0x00029b29) form2_midp_gauge_slider_pane_t2_cp01

0x9d78,	// (0x00029b37) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9d78,	// (0x00029b37) form2_midp_gauge_slider_pane_t3_cp01

0x9d95,	// (0x00029b54) form2_midp_slider_pane_cp01

0x185b,	// (0x0002161a) navi_smil_pane

0xe51f,	// (0x0002e2de) navi_smil_pane_g1

0xe527,	// (0x0002e2e6) navi_smil_pane_t1

0xe4f4,	// (0x0002e2b3) form2_midp_slider_pane_g1

0xe4fd,	// (0x0002e2bc) form2_midp_slider_pane_g2

0xe505,	// (0x0002e2c4) form2_midp_slider_pane_g3

0xe4f4,	// (0x0002e2b3) form2_midp_slider_pane_g4

0xe50d,	// (0x0002e2cc) form2_midp_slider_pane_g5

0x0004,

0xfdff,	// (0x0002fbbe) form2_midp_slider_pane_g

0x9d5a,	// (0x00029b19) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9d5a,	// (0x00029b19) vkb2_area_bottom_space_btn_pane_g4

0x8277,	// (0x00028036) lc0_navi_pane_ParamLimits

0x8277,	// (0x00028036) lc0_navi_pane

0x82ed,	// (0x000280ac) lc0_stat_indi_pane_ParamLimits

0x82ed,	// (0x000280ac) lc0_stat_indi_pane

0x8304,	// (0x000280c3) ls0_title_pane_ParamLimits

0x8304,	// (0x000280c3) ls0_title_pane

0x1d05,	// (0x00021ac4) bg_popup_sub_pane_cp14_ParamLimits

0xd939,	// (0x0002d6f8) list_uniindi_pane_ParamLimits

0xd945,	// (0x0002d704) uniindi_top_pane_ParamLimits

0xd9e1,	// (0x0002d7a0) list_single_uniindi_pane_g1_ParamLimits

0xd9f4,	// (0x0002d7b3) list_single_uniindi_pane_t1_ParamLimits

0x9d9e,	// (0x00029b5d) lc0_stat_clock_pane_ParamLimits

0x9d9e,	// (0x00029b5d) lc0_stat_clock_pane

0xe535,	// (0x0002e2f4) lc0_stat_indi_pane_g1_ParamLimits

0xe535,	// (0x0002e2f4) lc0_stat_indi_pane_g1

0xe542,	// (0x0002e301) lc0_stat_indi_pane_g2_ParamLimits

0xe542,	// (0x0002e301) lc0_stat_indi_pane_g2

0x0001,

0xfe0a,	// (0x0002fbc9) lc0_stat_indi_pane_g_ParamLimits

0xfe0a,	// (0x0002fbc9) lc0_stat_indi_pane_g

0x9dab,	// (0x00029b6a) lc0_uni_indicator_pane_ParamLimits

0x9dab,	// (0x00029b6a) lc0_uni_indicator_pane

0xe54f,	// (0x0002e30e) ls0_title_pane_g1_ParamLimits

0xe54f,	// (0x0002e30e) ls0_title_pane_g1

0xe563,	// (0x0002e322) ls0_title_pane_t1_ParamLimits

0xe563,	// (0x0002e322) ls0_title_pane_t1

0x9db8,	// (0x00029b77) lc0_uni_indicator_pane_g1_ParamLimits

0x9db8,	// (0x00029b77) lc0_uni_indicator_pane_g1

0xe599,	// (0x0002e358) lc0_stat_clock_pane_t1

0x185b,	// (0x0002161a) main_ai5_pane

0xe5a7,	// (0x0002e366) ai5_sk_pane_ParamLimits

0xe5a7,	// (0x0002e366) ai5_sk_pane

0xe5b4,	// (0x0002e373) cell_ai5_widget_pane_ParamLimits

0xe5b4,	// (0x0002e373) cell_ai5_widget_pane

0xe674,	// (0x0002e433) aid_size_cell_widget_grid

0xe682,	// (0x0002e441) bg_ai5_widget_pane_ParamLimits

0xe682,	// (0x0002e441) bg_ai5_widget_pane

0xe6fe,	// (0x0002e4bd) cell_ai5_widget_pane_g2

0xe712,	// (0x0002e4d1) cell_ai5_widget_pane_g3

0xe72c,	// (0x0002e4eb) cell_ai5_widget_pane_g4

0xe73c,	// (0x0002e4fb) cell_ai5_widget_pane_g5

0xe74c,	// (0x0002e50b) cell_ai5_widget_pane_g6

0xe758,	// (0x0002e517) cell_ai5_widget_pane_g7

0xe7c4,	// (0x0002e583) cell_ai5_widget_pane_t1_ParamLimits

0xe7c4,	// (0x0002e583) cell_ai5_widget_pane_t1

0xe7e1,	// (0x0002e5a0) cell_ai5_widget_pane_t2_ParamLimits

0xe7e1,	// (0x0002e5a0) cell_ai5_widget_pane_t2

0xe7f9,	// (0x0002e5b8) cell_ai5_widget_pane_t3_ParamLimits

0xe7f9,	// (0x0002e5b8) cell_ai5_widget_pane_t3

0xe811,	// (0x0002e5d0) cell_ai5_widget_pane_t4_ParamLimits

0xe811,	// (0x0002e5d0) cell_ai5_widget_pane_t4

0xe837,	// (0x0002e5f6) cell_ai5_widget_pane_t5_ParamLimits

0xe837,	// (0x0002e5f6) cell_ai5_widget_pane_t5

0xe856,	// (0x0002e615) cell_ai5_widget_pane_t6_ParamLimits

0xe856,	// (0x0002e615) cell_ai5_widget_pane_t6

0xe868,	// (0x0002e627) cell_ai5_widget_pane_t7_ParamLimits

0xe868,	// (0x0002e627) cell_ai5_widget_pane_t7

0xe887,	// (0x0002e646) cell_ai5_widget_pane_t8_ParamLimits

0xe887,	// (0x0002e646) cell_ai5_widget_pane_t8

0x000b,

0xfe2a,	// (0x0002fbe9) cell_ai5_widget_pane_t_ParamLimits

0xfe2a,	// (0x0002fbe9) cell_ai5_widget_pane_t

0xe90b,	// (0x0002e6ca) grid_ai5_widget_pane

0x1d05,	// (0x00021ac4) highlight_cell_ai5_widget_pane_ParamLimits

0x1d05,	// (0x00021ac4) highlight_cell_ai5_widget_pane

0xe919,	// (0x0002e6d8) ai5_sk_left_pane

0xe923,	// (0x0002e6e2) ai5_sk_middle_pane

0xe92d,	// (0x0002e6ec) ai5_sk_right_pane

0xe937,	// (0x0002e6f6) bg_ai5_widget_pane_g1_ParamLimits

0xe937,	// (0x0002e6f6) bg_ai5_widget_pane_g1

0xe943,	// (0x0002e702) bg_ai5_widget_pane_g2_ParamLimits

0xe943,	// (0x0002e702) bg_ai5_widget_pane_g2

0xe94f,	// (0x0002e70e) bg_ai5_widget_pane_g3_ParamLimits

0xe94f,	// (0x0002e70e) bg_ai5_widget_pane_g3

0xe95b,	// (0x0002e71a) bg_ai5_widget_pane_g4_ParamLimits

0xe95b,	// (0x0002e71a) bg_ai5_widget_pane_g4

0xe967,	// (0x0002e726) bg_ai5_widget_pane_g5_ParamLimits

0xe967,	// (0x0002e726) bg_ai5_widget_pane_g5

0xe973,	// (0x0002e732) bg_ai5_widget_pane_g6_ParamLimits

0xe973,	// (0x0002e732) bg_ai5_widget_pane_g6

0xe97f,	// (0x0002e73e) bg_ai5_widget_pane_g7_ParamLimits

0xe97f,	// (0x0002e73e) bg_ai5_widget_pane_g7

0xe98b,	// (0x0002e74a) bg_ai5_widget_pane_g8_ParamLimits

0xe98b,	// (0x0002e74a) bg_ai5_widget_pane_g8

0xe997,	// (0x0002e756) bg_ai5_widget_pane_g9_ParamLimits

0xe997,	// (0x0002e756) bg_ai5_widget_pane_g9

0x0008,

0xfe43,	// (0x0002fc02) bg_ai5_widget_pane_g_ParamLimits

0xfe43,	// (0x0002fc02) bg_ai5_widget_pane_g

0xe9c9,	// (0x0002e788) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9c9,	// (0x0002e788) cell_shortcut_ai5_widget_pane

0x25f6,	// (0x000223b5) bg_cell_shortcut_ai5_widget_pane

0xe9da,	// (0x0002e799) cell_grid_ai5_widget_pane_g1

0x25f6,	// (0x000223b5) highlight_cell_shortcut_ai5_widget_pane

0x8604,	// (0x000283c3) ai5_sk_left_pane_g1

0xe9e3,	// (0x0002e7a2) ai5_sk_left_pane_g2

0xe9eb,	// (0x0002e7aa) ai5_sk_left_pane_g3

0xe9f3,	// (0x0002e7b2) ai5_sk_left_pane_g4

0x0003,

0xfe56,	// (0x0002fc15) ai5_sk_left_pane_g

0xe9fb,	// (0x0002e7ba) ai5_sk_left_pane_t1

0x85fc,	// (0x000283bb) ai5_sk_right_pane_g1

0xea09,	// (0x0002e7c8) ai5_sk_right_pane_g2

0xea11,	// (0x0002e7d0) ai5_sk_right_pane_g3

0xea19,	// (0x0002e7d8) ai5_sk_right_pane_g4

0x0003,

0xfe5f,	// (0x0002fc1e) ai5_sk_right_pane_g

0xea21,	// (0x0002e7e0) ai5_sk_right_pane_t1

0x85fc,	// (0x000283bb) ai5_sk_middle_pane_g1

0x8604,	// (0x000283c3) ai5_sk_middle_pane_g2

0x861c,	// (0x000283db) ai5_sk_middle_pane_g3

0xea11,	// (0x0002e7d0) ai5_sk_middle_pane_g4

0xe9eb,	// (0x0002e7aa) ai5_sk_middle_pane_g5

0xea2f,	// (0x0002e7ee) ai5_sk_middle_pane_g6

0xea37,	// (0x0002e7f6) ai5_sk_middle_pane_g7

0x0006,

0xfe68,	// (0x0002fc27) ai5_sk_middle_pane_g

0x80fd,	// (0x00027ebc) aid_touch_area_size_lc0_ParamLimits

0x80fd,	// (0x00027ebc) aid_touch_area_size_lc0

0x9474,	// (0x00029233) cell_hwr_candidate_pane_t1_ParamLimits

0x8119,	// (0x00027ed8) aid_touch_navi_pane

0x83f2,	// (0x000281b1) status_dt_navi_pane_ParamLimits

0x83f2,	// (0x000281b1) status_dt_navi_pane

0x83ff,	// (0x000281be) status_dt_sta_pane_ParamLimits

0x83ff,	// (0x000281be) status_dt_sta_pane

0xea3f,	// (0x0002e7fe) dt_sta_controll_pane

0xea4c,	// (0x0002e80b) dt_sta_indi_pane

0xea5d,	// (0x0002e81c) dt_sta_title_pane

0x1a0f,	// (0x000217ce) bg_dt_sta_indi_pane_ParamLimits

0x1a0f,	// (0x000217ce) bg_dt_sta_indi_pane

0xea70,	// (0x0002e82f) dt_sta_battery_pane

0xea78,	// (0x0002e837) dt_sta_indi_pane_g1

0xea81,	// (0x0002e840) dt_sta_indi_pane_g2

0xea8a,	// (0x0002e849) dt_sta_indi_pane_g3

0x0002,

0xfe77,	// (0x0002fc36) dt_sta_indi_pane_g

0xea93,	// (0x0002e852) dt_sta_signal_pane

0x1d05,	// (0x00021ac4) bg_dt_sta_title_pane_ParamLimits

0x1d05,	// (0x00021ac4) bg_dt_sta_title_pane

0xa874,	// (0x0002a633) dt_sta_title_pane_g1

0xea9c,	// (0x0002e85b) dt_sta_title_pane_t1_ParamLimits

0xea9c,	// (0x0002e85b) dt_sta_title_pane_t1

0x185b,	// (0x0002161a) bg_dt_sta_control_pane

0xeab1,	// (0x0002e870) dt_sta_controll_pane_g1

0xeaba,	// (0x0002e879) bg_dt_sta_title_pane_g1

0xeac3,	// (0x0002e882) bg_dt_sta_title_pane_g2

0xeacc,	// (0x0002e88b) bg_dt_sta_title_pane_g3

0x0002,

0xfe7e,	// (0x0002fc3d) bg_dt_sta_title_pane_g

0xc046,	// (0x0002be05) bg_dt_sta_indi_pane_g1

0xead5,	// (0x0002e894) dt_sta_signal_pane_g1

0xeadd,	// (0x0002e89c) dt_sta_signal_pane_g2

0x0001,

0xfe85,	// (0x0002fc44) dt_sta_signal_pane_g

0xeae5,	// (0x0002e8a4) dt_sta_battery_pane_g1

0xeaee,	// (0x0002e8ad) dt_sta_battery_pane_t1

0xc046,	// (0x0002be05) bg_dt_sta_control_pane_g1

0x2248,	// (0x00022007) fep_china_uni_eep_pane

0x2250,	// (0x0002200f) fep_china_uni_entry_pane_ParamLimits

0x2260,	// (0x0002201f) popup_fep_china_uni_window_g1_ParamLimits

0x2270,	// (0x0002202f) popup_fep_china_uni_window_g2_ParamLimits

0x2270,	// (0x0002202f) popup_fep_china_uni_window_g2

0x0001,

0xf6e9,	// (0x0002f4a8) popup_fep_china_uni_window_g_ParamLimits

0xf6e9,	// (0x0002f4a8) popup_fep_china_uni_window_g

0xeafd,	// (0x0002e8bc) fep_china_uni_eep_pane_g1

0xeb05,	// (0x0002e8c4) fep_china_uni_eep_pane_t1

0xe516,	// (0x0002e2d5) aid_touch_area_size_smil_player

0x826f,	// (0x0002802e) lc0_clock_pane

0x8456,	// (0x00028215) status_pane_g5_ParamLimits

0x8456,	// (0x00028215) status_pane_g5

0x7cb1,	// (0x00027a70) popup_keymap_window

0x8414,	// (0x000281d3) status_icon_pane

0xe712,	// (0x0002e4d1) cell_ai5_widget_pane_g3_ParamLimits

0xe72c,	// (0x0002e4eb) cell_ai5_widget_pane_g4_ParamLimits

0xe73c,	// (0x0002e4fb) cell_ai5_widget_pane_g5_ParamLimits

0xe764,	// (0x0002e523) cell_ai5_widget_pane_g8_ParamLimits

0xe764,	// (0x0002e523) cell_ai5_widget_pane_g8

0xe778,	// (0x0002e537) cell_ai5_widget_pane_g9_ParamLimits

0xe778,	// (0x0002e537) cell_ai5_widget_pane_g9

0xe78c,	// (0x0002e54b) cell_ai5_widget_pane_g10_ParamLimits

0xe78c,	// (0x0002e54b) cell_ai5_widget_pane_g10

0xeb14,	// (0x0002e8d3) status_icon_pane_g1

0x185b,	// (0x0002161a) bg_popup_sub_pane_cp13

0xeb1c,	// (0x0002e8db) popup_keymap_window_t1

0x7a0a,	// (0x000277c9) control_pane_g6_ParamLimits

0x7a0a,	// (0x000277c9) control_pane_g6

0x7a17,	// (0x000277d6) control_pane_g7_ParamLimits

0x7a17,	// (0x000277d6) control_pane_g7

0x7a24,	// (0x000277e3) control_pane_g8_ParamLimits

0x7a24,	// (0x000277e3) control_pane_g8

0xea3f,	// (0x0002e7fe) dt_sta_controll_pane_ParamLimits

0xea4c,	// (0x0002e80b) dt_sta_indi_pane_ParamLimits

0xea5d,	// (0x0002e81c) dt_sta_title_pane_ParamLimits

0x1be6,	// (0x000219a5) aid_size_touch_scroll_bar_cale

0x6862,	// (0x00026621) popup_discreet_window_ParamLimits

0x6862,	// (0x00026621) popup_discreet_window

0x68dc,	// (0x0002669b) popup_sk_window

0x8d9a,	// (0x00028b59) bg_popup_sub_pane_cp28_ParamLimits

0x8d9a,	// (0x00028b59) bg_popup_sub_pane_cp28

0xeb2a,	// (0x0002e8e9) popup_discreet_window_g1_ParamLimits

0xeb2a,	// (0x0002e8e9) popup_discreet_window_g1

0xeb4a,	// (0x0002e909) popup_discreet_window_t1_ParamLimits

0xeb4a,	// (0x0002e909) popup_discreet_window_t1

0xeb68,	// (0x0002e927) popup_discreet_window_t2_ParamLimits

0xeb68,	// (0x0002e927) popup_discreet_window_t2

0x0002,

0xfe8a,	// (0x0002fc49) popup_discreet_window_t_ParamLimits

0xfe8a,	// (0x0002fc49) popup_discreet_window_t

0x9dcc,	// (0x00029b8b) popup_sk_window_g1

0x9dd6,	// (0x00029b95) popup_sk_window_g2

0x0001,

0xfe91,	// (0x0002fc50) popup_sk_window_g

0x9dde,	// (0x00029b9d) popup_sk_window_t1

0x9dec,	// (0x00029bab) popup_sk_window_t1_copy1

0xe6fe,	// (0x0002e4bd) cell_ai5_widget_pane_g2_ParamLimits

0xe899,	// (0x0002e658) cell_ai5_widget_pane_t9_ParamLimits

0xe899,	// (0x0002e658) cell_ai5_widget_pane_t9

0x185b,	// (0x0002161a) main_fep_fshwr2_pane

0x9dfa,	// (0x00029bb9) aid_fshwr2_btn_pane

0x9e0c,	// (0x00029bcb) aid_fshwr2_syb_pane

0x9e1e,	// (0x00029bdd) aid_fshwr2_txt_pane

0x9e2a,	// (0x00029be9) fshwr2_func_candi_pane

0x9e46,	// (0x00029c05) fshwr2_hwr_syb_pane

0x9e60,	// (0x00029c1f) fshwr2_icf_pane

0x185b,	// (0x0002161a) fshwr2_icf_bg_pane

0x9e8e,	// (0x00029c4d) fshwr2_icf_pane_t1_ParamLimits

0x9e8e,	// (0x00029c4d) fshwr2_icf_pane_t1

0x21c5,	// (0x00021f84) fshwr2_func_candi_pane_g1

0xebba,	// (0x0002e979) fshwr2_func_candi_row_pane_ParamLimits

0xebba,	// (0x0002e979) fshwr2_func_candi_row_pane

0x9ea7,	// (0x00029c66) cell_fshwr2_syb_pane_ParamLimits

0x9ea7,	// (0x00029c66) cell_fshwr2_syb_pane

0xe4e6,	// (0x0002e2a5) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe4e6,	// (0x0002e2a5) fshwr2_hwr_syb_pane_g1

0x185b,	// (0x0002161a) bg_popup_call_pane_cp01

0x9eca,	// (0x00029c89) fshwr2_func_candi_cell_pane_ParamLimits

0x9eca,	// (0x00029c89) fshwr2_func_candi_cell_pane

0xa714,	// (0x0002a4d3) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa714,	// (0x0002a4d3) fshwr2_func_candi_cell_bg_pane

0x9f15,	// (0x00029cd4) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9f15,	// (0x00029cd4) fshwr2_func_candi_cell_pane_g1

0x9f35,	// (0x00029cf4) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9f35,	// (0x00029cf4) fshwr2_func_candi_cell_pane_t1

0x185b,	// (0x0002161a) bg_button_pane_cp08

0x1eb5,	// (0x00021c74) cell_fshwr2_syb_bg_pane

0x9f48,	// (0x00029d07) cell_fshwr2_syb_bg_pane_g1

0x9f5c,	// (0x00029d1b) cell_fshwr2_syb_bg_pane_t1

0x1d05,	// (0x00021ac4) main_tmo_pane

0xabad,	// (0x0002a96c) uni_indicator_pane_g1_ParamLimits

0xabc0,	// (0x0002a97f) uni_indicator_pane_g2_ParamLimits

0xabd2,	// (0x0002a991) uni_indicator_pane_g3_ParamLimits

0xabe1,	// (0x0002a9a0) uni_indicator_pane_g4_ParamLimits

0xabe1,	// (0x0002a9a0) uni_indicator_pane_g4

0xabf5,	// (0x0002a9b4) uni_indicator_pane_g5_ParamLimits

0xabf5,	// (0x0002a9b4) uni_indicator_pane_g5

0xabf5,	// (0x0002a9b4) uni_indicator_pane_g6_ParamLimits

0xabf5,	// (0x0002a9b4) uni_indicator_pane_g6

0xf8e8,	// (0x0002f6a7) uni_indicator_pane_g_ParamLimits

0xd518,	// (0x0002d2d7) popup_tmo_note_window_ParamLimits

0xd518,	// (0x0002d2d7) popup_tmo_note_window

0x1d05,	// (0x00021ac4) fshwr2_bg_pane

0x9f26,	// (0x00029ce5) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9f26,	// (0x00029ce5) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe96,	// (0x0002fc55) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe96,	// (0x0002fc55) fshwr2_func_candi_cell_pane_g

0xc046,	// (0x0002be05) bg_popup_window_pane_cp01

0x9f72,	// (0x00029d31) bg_popup_window_pane_g1_cp01

0xebe1,	// (0x0002e9a0) bg_popup_window_pane_cp22_ParamLimits

0xebe1,	// (0x0002e9a0) bg_popup_window_pane_cp22

0xebef,	// (0x0002e9ae) listscroll_tmo_link_pane_ParamLimits

0xebef,	// (0x0002e9ae) listscroll_tmo_link_pane

0xec2f,	// (0x0002e9ee) popup_tmo_note_window_g1_ParamLimits

0xec2f,	// (0x0002e9ee) popup_tmo_note_window_g1

0xec3c,	// (0x0002e9fb) tmo_note_info_pane_ParamLimits

0xec3c,	// (0x0002e9fb) tmo_note_info_pane

0xec56,	// (0x0002ea15) list_tmo_note_info_pane_g1_ParamLimits

0xec56,	// (0x0002ea15) list_tmo_note_info_pane_g1

0xec6d,	// (0x0002ea2c) list_tmo_note_info_pane_g2_ParamLimits

0xec6d,	// (0x0002ea2c) list_tmo_note_info_pane_g2

0x0001,

0xfe9b,	// (0x0002fc5a) list_tmo_note_info_pane_g_ParamLimits

0xfe9b,	// (0x0002fc5a) list_tmo_note_info_pane_g

0xec89,	// (0x0002ea48) list_tmo_note_info_text_pane_ParamLimits

0xec89,	// (0x0002ea48) list_tmo_note_info_text_pane

0xed0a,	// (0x0002eac9) list_tmo_link_pane

0xed17,	// (0x0002ead6) scroll_pane_cp20

0xed24,	// (0x0002eae3) list_single_tmo_link_pane_ParamLimits

0xed24,	// (0x0002eae3) list_single_tmo_link_pane

0xed34,	// (0x0002eaf3) list_single_tmo_link_pane_t1

0xed42,	// (0x0002eb01) list_tmo_note_info_text_pane_t1_ParamLimits

0xed42,	// (0x0002eb01) list_tmo_note_info_text_pane_t1

0x6fc0,	// (0x00026d7f) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6fc0,	// (0x00026d7f) aid_size_touch_scroll_bar_cp01

0x5aaf,	// (0x0002586e) aid_size_touch_slider_marker

0x68c4,	// (0x00026683) popup_settings_window_ParamLimits

0x68c4,	// (0x00026683) popup_settings_window

0x5c74,	// (0x00025a33) popup_candi_list_indi_window

0x8119,	// (0x00027ed8) aid_touch_navi_pane_ParamLimits

0x95df,	// (0x0002939e) rs_clock_indi_pane

0x95e8,	// (0x000293a7) sctrl_sk_bottom_pane_ParamLimits

0x95f9,	// (0x000293b8) sctrl_sk_top_pane_ParamLimits

0x96e0,	// (0x0002949f) popup_fep_tooltip_window

0xe674,	// (0x0002e433) aid_size_cell_widget_grid_ParamLimits

0xe6e9,	// (0x0002e4a8) cell_ai5_widget_pane_g1_ParamLimits

0xe6e9,	// (0x0002e4a8) cell_ai5_widget_pane_g1

0xe74c,	// (0x0002e50b) cell_ai5_widget_pane_g6_ParamLimits

0xe758,	// (0x0002e517) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe0f,	// (0x0002fbce) cell_ai5_widget_pane_g_ParamLimits

0xfe0f,	// (0x0002fbce) cell_ai5_widget_pane_g

0xe8c8,	// (0x0002e687) cell_ai5_widget_pane_t10_ParamLimits

0xe8c8,	// (0x0002e687) cell_ai5_widget_pane_t10

0xe90b,	// (0x0002e6ca) grid_ai5_widget_pane_ParamLimits

0xe9a3,	// (0x0002e762) cell_contacts_ai5_widget_pane_ParamLimits

0xe9a3,	// (0x0002e762) cell_contacts_ai5_widget_pane

0xeb7d,	// (0x0002e93c) popup_discreet_window_t3_ParamLimits

0xeb7d,	// (0x0002e93c) popup_discreet_window_t3

0x9e78,	// (0x00029c37) popup_fshwr2_char_preview_window_ParamLimits

0x9e78,	// (0x00029c37) popup_fshwr2_char_preview_window

0xeca7,	// (0x0002ea66) tmo_note_info_pane_t1

0xecbc,	// (0x0002ea7b) tmo_note_info_pane_t2

0xecd1,	// (0x0002ea90) tmo_note_info_pane_t3

0xece6,	// (0x0002eaa5) tmo_note_info_pane_t4

0xecf8,	// (0x0002eab7) tmo_note_info_pane_t5

0x0004,

0xfea0,	// (0x0002fc5f) tmo_note_info_pane_t

0xed0a,	// (0x0002eac9) list_tmo_link_pane_ParamLimits

0xed17,	// (0x0002ead6) scroll_pane_cp20_ParamLimits

0x185b,	// (0x0002161a) bg_popup_fep_char_preview_window_cp01

0xed5b,	// (0x0002eb1a) popup_fshwr2_char_preview_window_t1

0xed69,	// (0x0002eb28) popup_candi_list_indi_window_g1

0xed72,	// (0x0002eb31) bg_cell_contacts_ai5_widget_pane

0xed7e,	// (0x0002eb3d) cell_contacts_ai5_widget_pane_g1

0xc72d,	// (0x0002c4ec) cell_contacts_ai5_widget_pane_g2

0xed93,	// (0x0002eb52) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeab,	// (0x0002fc6a) cell_contacts_ai5_widget_pane_g

0xed9f,	// (0x0002eb5e) cell_contacts_ai5_widget_pane_t1

0x1d05,	// (0x00021ac4) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee16,	// (0x0002ebd5) settings_container_pane

0x25f6,	// (0x000223b5) listscroll_set_pane_copy1

0xb722,	// (0x0002b4e1) scroll_pane_cp121_copy1

0x8b3f,	// (0x000288fe) set_content_pane_copy1

0xee22,	// (0x0002ebe1) aid_height_set_list_copy1_ParamLimits

0xee22,	// (0x0002ebe1) aid_height_set_list_copy1

0xaded,	// (0x0002abac) aid_size_parent_copy1_ParamLimits

0xaded,	// (0x0002abac) aid_size_parent_copy1

0xee2e,	// (0x0002ebed) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee2e,	// (0x0002ebed) button_value_adjust_pane_cp6_copy1

0x1eb5,	// (0x00021c74) list_highlight_pane_cp2_copy1_ParamLimits

0x1eb5,	// (0x00021c74) list_highlight_pane_cp2_copy1

0xee42,	// (0x0002ec01) list_set_pane_copy1_ParamLimits

0xee42,	// (0x0002ec01) list_set_pane_copy1

0xedb1,	// (0x0002eb70) main_pane_set_t1_copy1_ParamLimits

0xedb1,	// (0x0002eb70) main_pane_set_t1_copy1

0xedeb,	// (0x0002ebaa) main_pane_set_t2_copy1_ParamLimits

0xedeb,	// (0x0002ebaa) main_pane_set_t2_copy1

0xeeef,	// (0x0002ecae) main_pane_set_t3_copy1

0xeefd,	// (0x0002ecbc) main_pane_set_t4_copy1

0xee0a,	// (0x0002ebc9) set_content_pane_g1_copy1_ParamLimits

0xee0a,	// (0x0002ebc9) set_content_pane_g1_copy1

0xef0b,	// (0x0002ecca) setting_code_pane_copy1

0xef13,	// (0x0002ecd2) setting_slider_graphic_pane_copy1

0xef13,	// (0x0002ecd2) setting_slider_pane_copy1

0xef1b,	// (0x0002ecda) setting_text_pane_copy1

0xef1b,	// (0x0002ecda) setting_volume_pane_copy1

0xef0b,	// (0x0002ecca) settings_code_pane_cp2_copy1

0xef23,	// (0x0002ece2) settings_code_pane_cp_copy1_ParamLimits

0xef23,	// (0x0002ece2) settings_code_pane_cp_copy1

0x9f7b,	// (0x00029d3a) volume_set_pane_copy1

0xef37,	// (0x0002ecf6) volume_set_pane_g10_copy1

0xef3f,	// (0x0002ecfe) volume_set_pane_g1_copy1

0xef47,	// (0x0002ed06) volume_set_pane_g2_copy1

0xef4f,	// (0x0002ed0e) volume_set_pane_g3_copy1

0xef57,	// (0x0002ed16) volume_set_pane_g4_copy1

0xef5f,	// (0x0002ed1e) volume_set_pane_g5_copy1

0xef67,	// (0x0002ed26) volume_set_pane_g6_copy1

0xef6f,	// (0x0002ed2e) volume_set_pane_g7_copy1

0xef77,	// (0x0002ed36) volume_set_pane_g8_copy1

0xef7f,	// (0x0002ed3e) volume_set_pane_g9_copy1

0x18cb,	// (0x0002168a) bg_set_opt_pane_cp_copy1_ParamLimits

0x18cb,	// (0x0002168a) bg_set_opt_pane_cp_copy1

0x9f83,	// (0x00029d42) setting_slider_pane_t1_copy1_ParamLimits

0x9f83,	// (0x00029d42) setting_slider_pane_t1_copy1

0x9fa2,	// (0x00029d61) setting_slider_pane_t2_copy1_ParamLimits

0x9fa2,	// (0x00029d61) setting_slider_pane_t2_copy1

0x9fbc,	// (0x00029d7b) setting_slider_pane_t3_copy1_ParamLimits

0x9fbc,	// (0x00029d7b) setting_slider_pane_t3_copy1

0x9fd4,	// (0x00029d93) slider_set_pane_copy1_ParamLimits

0x9fd4,	// (0x00029d93) slider_set_pane_copy1

0x1dcb,	// (0x00021b8a) set_opt_bg_pane_g1_copy2

0x1dd3,	// (0x00021b92) set_opt_bg_pane_g2_copy2

0xef87,	// (0x0002ed46) set_opt_bg_pane_g3_copy2

0x1de3,	// (0x00021ba2) set_opt_bg_pane_g4_copy2

0x1deb,	// (0x00021baa) set_opt_bg_pane_g5_copy2

0x1df3,	// (0x00021bb2) set_opt_bg_pane_g6_copy2

0xef91,	// (0x0002ed50) set_opt_bg_pane_g7_copy2

0xef99,	// (0x0002ed58) set_opt_bg_pane_g8_copy2

0xefa3,	// (0x0002ed62) set_opt_bg_pane_g9_copy2

0x9fea,	// (0x00029da9) aid_size_touch_slider_mark_copy1_ParamLimits

0x9fea,	// (0x00029da9) aid_size_touch_slider_mark_copy1

0xefad,	// (0x0002ed6c) slider_set_pane_g1_copy1

0x9ffe,	// (0x00029dbd) slider_set_pane_g2_copy1

0x907a,	// (0x00028e39) slider_set_pane_g3_copy1_ParamLimits

0x907a,	// (0x00028e39) slider_set_pane_g3_copy1

0x908e,	// (0x00028e4d) slider_set_pane_g4_copy1_ParamLimits

0x908e,	// (0x00028e4d) slider_set_pane_g4_copy1

0x90a6,	// (0x00028e65) slider_set_pane_g5_copy1_ParamLimits

0x90a6,	// (0x00028e65) slider_set_pane_g5_copy1

0x907a,	// (0x00028e39) slider_set_pane_g6_copy1_ParamLimits

0x907a,	// (0x00028e39) slider_set_pane_g6_copy1

0xa006,	// (0x00029dc5) slider_set_pane_g7_copy1_ParamLimits

0xa006,	// (0x00029dc5) slider_set_pane_g7_copy1

0x186f,	// (0x0002162e) bg_set_opt_pane_cp2_copy1

0xefb6,	// (0x0002ed75) setting_slider_graphic_pane_g1_copy1

0xefbf,	// (0x0002ed7e) setting_slider_graphic_pane_t1_copy1

0xefcf,	// (0x0002ed8e) setting_slider_graphic_pane_t2_copy1

0xefdf,	// (0x0002ed9e) slider_set_pane_cp_copy1

0xefef,	// (0x0002edae) input_focus_pane_cp1_copy1

0xeff8,	// (0x0002edb7) list_set_text_pane_copy1

0xf000,	// (0x0002edbf) setting_text_pane_g1_copy1

0x65bb,	// (0x0002637a) set_text_pane_t1_copy1

0xefef,	// (0x0002edae) input_focus_pane_cp2_copy1

0xf000,	// (0x0002edbf) setting_code_pane_g1_copy1

0xf009,	// (0x0002edc8) setting_code_pane_t1_copy1

0xf017,	// (0x0002edd6) list_set_graphic_pane_copy1

0x186f,	// (0x0002162e) bg_set_opt_pane_cp4_copy1

0x23a0,	// (0x0002215f) list_set_graphic_pane_g1_copy1_ParamLimits

0x23a0,	// (0x0002215f) list_set_graphic_pane_g1_copy1

0xf02b,	// (0x0002edea) list_set_graphic_pane_g2_copy1

0x23b8,	// (0x00022177) list_set_graphic_pane_t1_copy1_ParamLimits

0x23b8,	// (0x00022177) list_set_graphic_pane_t1_copy1

0xc046,	// (0x0002be05) rs_clock_indi_pane_g1

0xf033,	// (0x0002edf2) rs_clock_indi_pane_t1

0xf041,	// (0x0002ee00) rs_indi_pane

0xf049,	// (0x0002ee08) rs_indi_pane_g1

0xf052,	// (0x0002ee11) rs_indi_pane_g2

0xed69,	// (0x0002eb28) rs_indi_pane_g3

0x0002,

0xfeb2,	// (0x0002fc71) rs_indi_pane_g

0x25f6,	// (0x000223b5) bg_popup_preview_window_pane_cp03

0xf05b,	// (0x0002ee1a) popup_fep_tooltip_window_t1

0xccc7,	// (0x0002ca86) popup_note2_window_g2_ParamLimits

0xccc7,	// (0x0002ca86) popup_note2_window_g2

0x0001,

0xfc46,	// (0x0002fa05) popup_note2_window_g_ParamLimits

0xfc46,	// (0x0002fa05) popup_note2_window_g

0xd1b4,	// (0x0002cf73) bg_popup_sub_pane_cp11_ParamLimits

0xd1c1,	// (0x0002cf80) cell_ai3_links_pane_g1_ParamLimits

0xd1d8,	// (0x0002cf97) cell_ai3_links_pane_t1

0x65bb,	// (0x0002637a) set_text_pane_t1_copy1_ParamLimits

0x771d,	// (0x000274dc) cell_graphic_popup_pane_cp2_ParamLimits

0x771d,	// (0x000274dc) cell_graphic_popup_pane_cp2

0xf069,	// (0x0002ee28) cell_graphic_popup_pane_g1_cp2

0x1b69,	// (0x00021928) cell_graphic_popup_pane_g2_cp2

0xf071,	// (0x0002ee30) cell_graphic_popup_pane_g3_cp2

0xf079,	// (0x0002ee38) cell_graphic_popup_pane_t2_cp2

0x1b7a,	// (0x00021939) grid_highlight_pane_cp3_cp2

0x2042,	// (0x00021e01) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1d05,	// (0x00021ac4) main_tmo_pane_ParamLimits

0xd50c,	// (0x0002d2cb) popup_tmo_big_image_note_window

0xe6d8,	// (0x0002e497) cell_ai5_widget_list_pane

0xe6e0,	// (0x0002e49f) cell_ai5_widget_lrg_icon_pane

0xeca7,	// (0x0002ea66) tmo_note_info_pane_t1_ParamLimits

0xecbc,	// (0x0002ea7b) tmo_note_info_pane_t2_ParamLimits

0xecd1,	// (0x0002ea90) tmo_note_info_pane_t3_ParamLimits

0xece6,	// (0x0002eaa5) tmo_note_info_pane_t4_ParamLimits

0xecf8,	// (0x0002eab7) tmo_note_info_pane_t5_ParamLimits

0xfea0,	// (0x0002fc5f) tmo_note_info_pane_t_ParamLimits

0xee16,	// (0x0002ebd5) settings_container_pane_ParamLimits

0xefe7,	// (0x0002eda6) indicator_popup_pane_cp5

0xefe7,	// (0x0002eda6) indicator_popup_pane_cp6

0xf017,	// (0x0002edd6) list_set_graphic_pane_copy1_ParamLimits

0x185b,	// (0x0002161a) bg_popup_window_pane_cp23

0xf087,	// (0x0002ee46) popup_tmo_big_image_note_window_g1

0xf090,	// (0x0002ee4f) popup_tmo_big_image_note_window_t1

0xf0a0,	// (0x0002ee5f) popup_tmo_big_image_note_window_t2

0xf0b0,	// (0x0002ee6f) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb9,	// (0x0002fc78) popup_tmo_big_image_note_window_t

0xc046,	// (0x0002be05) cell_ai5_widget_lrg_icon_pane_g1

0xf0c0,	// (0x0002ee7f) cell_ai5_widget_lrg_icon_pane_t1

0xf0ce,	// (0x0002ee8d) cell_ai5_widget_list_row_pane_ParamLimits

0xf0ce,	// (0x0002ee8d) cell_ai5_widget_list_row_pane

0xf0e5,	// (0x0002eea4) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0e5,	// (0x0002eea4) cell_ai5_widget_list_row_pane_g1

0xf0f2,	// (0x0002eeb1) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0f2,	// (0x0002eeb1) cell_ai5_widget_list_row_pane_t1

0xf11d,	// (0x0002eedc) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf11d,	// (0x0002eedc) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec0,	// (0x0002fc7f) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec0,	// (0x0002fc7f) cell_ai5_widget_list_row_pane_t

0x185b,	// (0x0002161a) main_fep_vtchi_ss_pane

0xf16d,	// (0x0002ef2c) popup_fep_char_pre_window

0xf175,	// (0x0002ef34) popup_fep_ituss_window

0xf1a1,	// (0x0002ef60) popup_fep_vkbss_window

0x1eb5,	// (0x00021c74) grid_vkbss_keypad_pane_ParamLimits

0x1eb5,	// (0x00021c74) grid_vkbss_keypad_pane

0xf1e1,	// (0x0002efa0) ituss_keypad_pane

0xa028,	// (0x00029de7) aid_vkbss_key_offset_ParamLimits

0xa028,	// (0x00029de7) aid_vkbss_key_offset

0xa034,	// (0x00029df3) cell_vkbss_key_pane_ParamLimits

0xa034,	// (0x00029df3) cell_vkbss_key_pane

0xf1f0,	// (0x0002efaf) bg_cell_vkbss_key_g1_ParamLimits

0xf1f0,	// (0x0002efaf) bg_cell_vkbss_key_g1

0xf1fc,	// (0x0002efbb) cell_vkbss_key_3p_pane_ParamLimits

0xf1fc,	// (0x0002efbb) cell_vkbss_key_3p_pane

0xf232,	// (0x0002eff1) cell_vkbss_key_g1_ParamLimits

0xf232,	// (0x0002eff1) cell_vkbss_key_g1

0xf268,	// (0x0002f027) cell_vkbss_key_t1_ParamLimits

0xf268,	// (0x0002f027) cell_vkbss_key_t1

0xa068,	// (0x00029e27) cell_ituss_key_pane_ParamLimits

0xa068,	// (0x00029e27) cell_ituss_key_pane

0xf2c4,	// (0x0002f083) bg_cell_ituss_key_g1_ParamLimits

0xf2c4,	// (0x0002f083) bg_cell_ituss_key_g1

0xf2d0,	// (0x0002f08f) cell_ituss_key_pane_g1_ParamLimits

0xf2d0,	// (0x0002f08f) cell_ituss_key_pane_g1

0xa079,	// (0x00029e38) cell_ituss_key_pane_g2_ParamLimits

0xa079,	// (0x00029e38) cell_ituss_key_pane_g2

0x0005,

0xfec7,	// (0x0002fc86) cell_ituss_key_pane_g_ParamLimits

0xfec7,	// (0x0002fc86) cell_ituss_key_pane_g

0xa0fd,	// (0x00029ebc) cell_ituss_key_t1_ParamLimits

0xa0fd,	// (0x00029ebc) cell_ituss_key_t1

0xa137,	// (0x00029ef6) cell_ituss_key_t2_ParamLimits

0xa137,	// (0x00029ef6) cell_ituss_key_t2

0xa168,	// (0x00029f27) cell_ituss_key_t3_ParamLimits

0xa168,	// (0x00029f27) cell_ituss_key_t3

0xa137,	// (0x00029ef6) cell_ituss_key_t4_ParamLimits

0xa137,	// (0x00029ef6) cell_ituss_key_t4

0x0004,

0xfed4,	// (0x0002fc93) cell_ituss_key_t_ParamLimits

0xfed4,	// (0x0002fc93) cell_ituss_key_t

0xf2f6,	// (0x0002f0b5) cell_vkbss_key_3p_pane_g1

0xf2fe,	// (0x0002f0bd) cell_vkbss_key_3p_pane_g2

0xf306,	// (0x0002f0c5) cell_vkbss_key_3p_pane_g3

0x0002,

0xfedf,	// (0x0002fc9e) cell_vkbss_key_3p_pane_g

0x25f6,	// (0x000223b5) bg_popup_fep_char_preview_window_cp02

0xf30e,	// (0x0002f0cd) popup_fep_char_pre_window_t1

0xe66a,	// (0x0002e429) main_ai5_sk_pane

0xed72,	// (0x0002eb31) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed7e,	// (0x0002eb3d) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc72d,	// (0x0002c4ec) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed93,	// (0x0002eb52) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeab,	// (0x0002fc6a) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed9f,	// (0x0002eb5e) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1d05,	// (0x00021ac4) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf31c,	// (0x0002f0db) main_ai5_sk_pane_g1

0x8bdb,	// (0x0002899a) popup_query_code_window_g1

0xf18b,	// (0x0002ef4a) popup_fep_vkb_icf_pane

0xf1b8,	// (0x0002ef77) popup_fep_vtchi_icf_pane

0x1eb5,	// (0x00021c74) bg_icf_pane

0x1eb5,	// (0x00021c74) list_vkb_icf_pane

0xf325,	// (0x0002f0e4) bg_icf_pane_cp01

0xf338,	// (0x0002f0f7) vtchi_icf_list_pane

0xf3a0,	// (0x0002f15f) list_vkb_icf_pane_t1_ParamLimits

0xf3a0,	// (0x0002f15f) list_vkb_icf_pane_t1

0xf3c2,	// (0x0002f181) vtchi_icf_list_pane_t1_ParamLimits

0xf3c2,	// (0x0002f181) vtchi_icf_list_pane_t1

0xf175,	// (0x0002ef34) popup_fep_ituss_window_ParamLimits

0xf1b8,	// (0x0002ef77) popup_fep_vtchi_icf_pane_ParamLimits

0xf1e1,	// (0x0002efa0) ituss_keypad_pane_ParamLimits

0xa01c,	// (0x00029ddb) ituss_sks_pane

0x1eb5,	// (0x00021c74) bg_icf_pane_ParamLimits

0xf145,	// (0x0002ef04) icf_edit_indi_pane_ParamLimits

0xf145,	// (0x0002ef04) icf_edit_indi_pane

0x1eb5,	// (0x00021c74) list_vkb_icf_pane_ParamLimits

0xf325,	// (0x0002f0e4) bg_icf_pane_cp01_ParamLimits

0xf160,	// (0x0002ef1f) icf_edit_indi_pane_cp01_ParamLimits

0xf160,	// (0x0002ef1f) icf_edit_indi_pane_cp01

0xf340,	// (0x0002f0ff) vtchi_query_pane

0xe4e6,	// (0x0002e2a5) icf_edit_indi_pane_g1_ParamLimits

0xe4e6,	// (0x0002e2a5) icf_edit_indi_pane_g1

0xf43a,	// (0x0002f1f9) icf_edit_indi_pane_g2_ParamLimits

0xf43a,	// (0x0002f1f9) icf_edit_indi_pane_g2

0x0001,

0xff0a,	// (0x0002fcc9) icf_edit_indi_pane_g_ParamLimits

0xff0a,	// (0x0002fcc9) icf_edit_indi_pane_g

0xf44e,	// (0x0002f20d) icf_edit_indi_pane_t1

0xf3e3,	// (0x0002f1a2) bg_input_focus_pane_cp042

0x1bdd,	// (0x0002199c) vtchi_button_pane

0xf3ec,	// (0x0002f1ab) vtchi_query_pane_t1

0xf3fa,	// (0x0002f1b9) vtchi_query_pane_t2

0xf408,	// (0x0002f1c7) vtchi_query_pane_t3

0x0002,

0xfef9,	// (0x0002fcb8) vtchi_query_pane_t

0x185b,	// (0x0002161a) bg_button_pane_cp13

0xf416,	// (0x0002f1d5) vtchi_button_pane_g1

0xa1ab,	// (0x00029f6a) ituss_sks_pane_g1

0xa1b6,	// (0x00029f75) ituss_sks_pane_g2

0x0001,

0xff00,	// (0x0002fcbf) ituss_sks_pane_g

0xf41e,	// (0x0002f1dd) ituss_sks_pane_t1

0xf42c,	// (0x0002f1eb) ituss_sks_pane_t2

0x0001,

0xff05,	// (0x0002fcc4) ituss_sks_pane_t

0xbaba,	// (0x0002b879) indicator_nsta_pane_cp_g1

0xbac3,	// (0x0002b882) indicator_nsta_pane_cp_g2

0xbacb,	// (0x0002b88a) indicator_nsta_pane_cp_g3

0xbad3,	// (0x0002b892) indicator_nsta_pane_cp_g4

0xbac3,	// (0x0002b882) indicator_nsta_pane_cp_g5

0xbacb,	// (0x0002b88a) indicator_nsta_pane_cp_g6

0x0005,

0xfa90,	// (0x0002f84f) indicator_nsta_pane_cp_g

0xe215,	// (0x0002dfd4) cell_graphic2_pane_t2_ParamLimits

0xe215,	// (0x0002dfd4) cell_graphic2_pane_t2

0x0001,

0xfd96,	// (0x0002fb55) cell_graphic2_pane_t_ParamLimits

0xfd96,	// (0x0002fb55) cell_graphic2_pane_t

0xe241,	// (0x0002e000) cell_graphic2_control_pane_t1

0x7474,	// (0x00027233) signal_pane_g3_ParamLimits

0x7474,	// (0x00027233) signal_pane_g3

0x7486,	// (0x00027245) signal_pane_g4_ParamLimits

0x7486,	// (0x00027245) signal_pane_g4

0xf12f,	// (0x0002eeee) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf12f,	// (0x0002eeee) cell_ai5_widget_list_row_pane_t3

0xf2e4,	// (0x0002f0a3) cell_ituss_key_pane_t1_ParamLimits

0xf2e4,	// (0x0002f0a3) cell_ituss_key_pane_t1

0x880e,	// (0x000285cd) form_field_data_wide_pane_vc_t2_ParamLimits

0x880e,	// (0x000285cd) form_field_data_wide_pane_vc_t2

0x8822,	// (0x000285e1) form_field_data_wide_pane_vc_t3_ParamLimits

0x8822,	// (0x000285e1) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d0,	// (0x0002f58f) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d0,	// (0x0002f58f) form_field_data_wide_pane_vc_t

0xb764,	// (0x0002b523) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb764,	// (0x0002b523) form_field_slider_wide_pane_vc_t3

0xb842,	// (0x0002b601) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb842,	// (0x0002b601) form_field_popup_wide_pane_vc_t2

0xb859,	// (0x0002b618) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb859,	// (0x0002b618) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7f,	// (0x0002f83e) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7f,	// (0x0002f83e) form_field_popup_wide_pane_vc_t

0x9dfa,	// (0x00029bb9) aid_fshwr2_btn_pane_ParamLimits

0x9e0c,	// (0x00029bcb) aid_fshwr2_syb_pane_ParamLimits

0x9e1e,	// (0x00029bdd) aid_fshwr2_txt_pane_ParamLimits

0x1d05,	// (0x00021ac4) fshwr2_bg_pane_ParamLimits

0x9e2a,	// (0x00029be9) fshwr2_func_candi_pane_ParamLimits

0x9e46,	// (0x00029c05) fshwr2_hwr_syb_pane_ParamLimits

0x9e60,	// (0x00029c1f) fshwr2_icf_pane_ParamLimits

0x61b6,	// (0x00025f75) list_double_graphic_pane_vc_g4_ParamLimits

0x61b6,	// (0x00025f75) list_double_graphic_pane_vc_g4

0xa099,	// (0x00029e58) cell_ituss_key_pane_g3_ParamLimits

0xa099,	// (0x00029e58) cell_ituss_key_pane_g3

0xa199,	// (0x00029f58) cell_ituss_key_t5_ParamLimits

0xa199,	// (0x00029f58) cell_ituss_key_t5

0xf1a1,	// (0x0002ef60) popup_fep_vkbss_window_ParamLimits

0xd5f4,	// (0x0002d3b3) aid_cell_ai5_quarter

0xf44e,	// (0x0002f20d) icf_edit_indi_pane_t1_ParamLimits

0x6c48,	// (0x00026a07) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x6c48,	// (0x00026a07) aid_tch_indicator_popup_pane_cp2

0x6c5b,	// (0x00026a1a) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x6c5b,	// (0x00026a1a) aid_tch_query_popup_data_pane_cp2

0x8b83,	// (0x00028942) aid_tch_query_popup_pane_ParamLimits

0x8b83,	// (0x00028942) aid_tch_query_popup_pane

0x8b83,	// (0x00028942) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x8b83,	// (0x00028942) aid_tch_query_popup_data_pane_cp1

0x1eb5,	// (0x00021c74) cell_fshwr2_syb_bg_pane_ParamLimits

0x9f48,	// (0x00029d07) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x9f5c,	// (0x00029d1b) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf18b,	// (0x0002ef4a) popup_fep_vkb_icf_pane_ParamLimits

0x9c68,	// (0x00029a27) bg_popup_fep_char_preview_window_g10

0xe7a0,	// (0x0002e55f) cell_ai5_widget_pane_g11_ParamLimits

0xe7a0,	// (0x0002e55f) cell_ai5_widget_pane_g11

0xe7ac,	// (0x0002e56b) cell_ai5_widget_pane_g12_ParamLimits

0xe7ac,	// (0x0002e56b) cell_ai5_widget_pane_g12

0xe7b8,	// (0x0002e577) cell_ai5_widget_pane_g13_ParamLimits

0xe7b8,	// (0x0002e577) cell_ai5_widget_pane_g13

0xe8e7,	// (0x0002e6a6) cell_ai5_widget_pane_t11_ParamLimits

0xe8e7,	// (0x0002e6a6) cell_ai5_widget_pane_t11

0xe8f9,	// (0x0002e6b8) cell_ai5_widget_pane_t12_ParamLimits

0xe8f9,	// (0x0002e6b8) cell_ai5_widget_pane_t12

0xa0a5,	// (0x00029e64) cell_ituss_key_pane_g4_ParamLimits

0xa0a5,	// (0x00029e64) cell_ituss_key_pane_g4

0xa0c1,	// (0x00029e80) cell_ituss_key_pane_g5_ParamLimits

0xa0c1,	// (0x00029e80) cell_ituss_key_pane_g5

0xa0dd,	// (0x00029e9c) cell_ituss_key_pane_g6_ParamLimits

0xa0dd,	// (0x00029e9c) cell_ituss_key_pane_g6

0x85f4,	// (0x000283b3) bg_icf_pane_g1

0xf348,	// (0x0002f107) bg_icf_pane_g2

0xf354,	// (0x0002f113) bg_icf_pane_g3

0xf35e,	// (0x0002f11d) bg_icf_pane_g4

0xf36a,	// (0x0002f129) bg_icf_pane_g5

0xf374,	// (0x0002f133) bg_icf_pane_g6

0xf380,	// (0x0002f13f) bg_icf_pane_g7

0xf38a,	// (0x0002f149) bg_icf_pane_g8

0xf396,	// (0x0002f155) bg_icf_pane_g9

0x0008,

0xfee6,	// (0x0002fca5) bg_icf_pane_g

0xf1ce,	// (0x0002ef8d) popup_hyb_candi_window_ParamLimits

0xf1ce,	// (0x0002ef8d) popup_hyb_candi_window

0x86f8,	// (0x000284b7) bg_popup_sub_pane_cp01_ParamLimits

0x86f8,	// (0x000284b7) bg_popup_sub_pane_cp01

0xf467,	// (0x0002f226) entry_hyb_candi_pane_ParamLimits

0xf467,	// (0x0002f226) entry_hyb_candi_pane

0xf476,	// (0x0002f235) grid_hyb_candi_pane_ParamLimits

0xf476,	// (0x0002f235) grid_hyb_candi_pane

0xf48b,	// (0x0002f24a) grid_hyb_phrase_pane_ParamLimits

0xf48b,	// (0x0002f24a) grid_hyb_phrase_pane

0xf49a,	// (0x0002f259) cell_hyb_candi_pane_ParamLimits

0xf49a,	// (0x0002f259) cell_hyb_candi_pane

0xf4bd,	// (0x0002f27c) cell_hyb_candi_scroll_pane

0x21c5,	// (0x00021f84) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0002f285) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0002f293) cell_hyb_phrase_pane

0x21c5,	// (0x00021f84) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0002f29c) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0002f2aa) entry_hyb_candi_pane_t1

0x25f6,	// (0x000223b5) input_focus_pane_cp06

0xf4f9,	// (0x0002f2b8) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0002f2c0) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0002f2c8) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0002f2d0) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0002f2d8) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0002f2e0) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small
