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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00025f89 };

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
0x9782,	// (0x0002f70b) Screen

0x978e,	// (0x0002f717) application_window_ParamLimits

0x978e,	// (0x0002f717) application_window

0xc839,	// (0x000327c2) screen_g1

0x97c6,	// (0x0002f74f) area_bottom_pane_ParamLimits

0x97c6,	// (0x0002f74f) area_bottom_pane

0xf3df,	// (0x00035368) area_top_pane_ParamLimits

0xf3df,	// (0x00035368) area_top_pane

0xf473,	// (0x000353fc) main_pane_ParamLimits

0xf473,	// (0x000353fc) main_pane

0xc843,	// (0x000327cc) misc_graphics

0xaf54,	// (0x00030edd) battery_pane_ParamLimits

0xaf54,	// (0x00030edd) battery_pane

0x35bd,	// (0x00029546) bg_status_flat_pane_g8

0x35c5,	// (0x0002954e) bg_status_flat_pane_g9

0x1620,	// (0x000275a9) context_pane_ParamLimits

0x1620,	// (0x000275a9) context_pane

0xb0bf,	// (0x00031048) navi_pane_ParamLimits

0xb0bf,	// (0x00031048) navi_pane

0xb13d,	// (0x000310c6) signal_pane_ParamLimits

0xb13d,	// (0x000310c6) signal_pane

0x0008,

0xf86f,	// (0x000357f8) bg_status_flat_pane_g

0xb1cd,	// (0x00031156) status_pane_g1_ParamLimits

0xb1cd,	// (0x00031156) status_pane_g1

0xb1e3,	// (0x0003116c) status_pane_g2_ParamLimits

0xb1e3,	// (0x0003116c) status_pane_g2

0x1847,	// (0x000277d0) status_pane_g3_ParamLimits

0x1847,	// (0x000277d0) status_pane_g3

0x0004,

0xf79b,	// (0x00035724) status_pane_g_ParamLimits

0xf79b,	// (0x00035724) status_pane_g

0xb1ef,	// (0x00031178) title_pane_ParamLimits

0xb1ef,	// (0x00031178) title_pane

0xb252,	// (0x000311db) uni_indicator_pane_ParamLimits

0xb252,	// (0x000311db) uni_indicator_pane

0x0ed9,	// (0x00026e62) bg_list_pane_ParamLimits

0x0ed9,	// (0x00026e62) bg_list_pane

0xec8b,	// (0x00034c14) find_pane

0xa728,	// (0x000306b1) listscroll_app_pane_ParamLimits

0xa728,	// (0x000306b1) listscroll_app_pane

0x0f05,	// (0x00026e8e) listscroll_form_pane

0xec93,	// (0x00034c1c) listscroll_gen_pane_ParamLimits

0xec93,	// (0x00034c1c) listscroll_gen_pane

0x0f0d,	// (0x00026e96) listscroll_set_pane

0x412e,	// (0x0002a0b7) main_idle_act_pane

0x09d8,	// (0x00026961) main_idle_trad_pane

0x09d8,	// (0x00026961) main_list_empty_pane

0x0f27,	// (0x00026eb0) main_midp_pane

0x0f33,	// (0x00026ebc) main_pane_g1_ParamLimits

0x0f33,	// (0x00026ebc) main_pane_g1

0xa738,	// (0x000306c1) popup_ai_message_window_ParamLimits

0xa738,	// (0x000306c1) popup_ai_message_window

0xa7e9,	// (0x00030772) popup_fep_china_uni_window_ParamLimits

0xa7e9,	// (0x00030772) popup_fep_china_uni_window

0xa843,	// (0x000307cc) popup_fep_japan_candidate_window_ParamLimits

0xa843,	// (0x000307cc) popup_fep_japan_candidate_window

0xa861,	// (0x000307ea) popup_fep_japan_predictive_window_ParamLimits

0xa861,	// (0x000307ea) popup_fep_japan_predictive_window

0xa873,	// (0x000307fc) popup_find_window

0xa890,	// (0x00030819) popup_grid_graphic_window_ParamLimits

0xa890,	// (0x00030819) popup_grid_graphic_window

0xa92e,	// (0x000308b7) popup_large_graphic_colour_window

0xa954,	// (0x000308dd) popup_menu_window_ParamLimits

0xa954,	// (0x000308dd) popup_menu_window

0xab26,	// (0x00030aaf) popup_note_image_window

0xaaec,	// (0x00030a75) popup_note_wait_window_ParamLimits

0xaaec,	// (0x00030a75) popup_note_wait_window

0xab3e,	// (0x00030ac7) popup_note_window_ParamLimits

0xab3e,	// (0x00030ac7) popup_note_window

0xabed,	// (0x00030b76) popup_query_code_window_ParamLimits

0xabed,	// (0x00030b76) popup_query_code_window

0xac27,	// (0x00030bb0) popup_query_data_code_window_ParamLimits

0xac27,	// (0x00030bb0) popup_query_data_code_window

0xac44,	// (0x00030bcd) popup_query_data_window_ParamLimits

0xac44,	// (0x00030bcd) popup_query_data_window

0xacc6,	// (0x00030c4f) popup_query_sat_info_window_ParamLimits

0xacc6,	// (0x00030c4f) popup_query_sat_info_window

0xad5d,	// (0x00030ce6) popup_snote_single_graphic_window_ParamLimits

0xad5d,	// (0x00030ce6) popup_snote_single_graphic_window

0xad5d,	// (0x00030ce6) popup_snote_single_text_window_ParamLimits

0xad5d,	// (0x00030ce6) popup_snote_single_text_window

0x1397,	// (0x00027320) popup_sub_window_general

0xaeba,	// (0x00030e43) popup_window_general_ParamLimits

0xaeba,	// (0x00030e43) popup_window_general

0x14dc,	// (0x00027465) power_save_pane

0xa590,	// (0x00030519) control_pane_g1_ParamLimits

0xa590,	// (0x00030519) control_pane_g1

0xa5b9,	// (0x00030542) control_pane_g2_ParamLimits

0xa5b9,	// (0x00030542) control_pane_g2

0x0d86,	// (0x00026d0f) control_pane_g3_ParamLimits

0x0d86,	// (0x00026d0f) control_pane_g3

0x0007,

0xf783,	// (0x0003570c) control_pane_g_ParamLimits

0xf783,	// (0x0003570c) control_pane_g

0xa621,	// (0x000305aa) control_pane_t1_ParamLimits

0xa621,	// (0x000305aa) control_pane_t1

0xa67f,	// (0x00030608) control_pane_t2_ParamLimits

0xa67f,	// (0x00030608) control_pane_t2

0x0002,

0xf794,	// (0x0003571d) control_pane_t_ParamLimits

0xf794,	// (0x0003571d) control_pane_t

0xa4e9,	// (0x00030472) navi_navi_volume_pane_cp1

0xa4f1,	// (0x0003047a) status_small_icon_pane

0x0c6d,	// (0x00026bf6) status_small_pane_g1_ParamLimits

0x0c6d,	// (0x00026bf6) status_small_pane_g1

0xa4f9,	// (0x00030482) status_small_pane_g2_ParamLimits

0xa4f9,	// (0x00030482) status_small_pane_g2

0xa505,	// (0x0003048e) status_small_pane_g3_ParamLimits

0xa505,	// (0x0003048e) status_small_pane_g3

0xa511,	// (0x0003049a) status_small_pane_g4_ParamLimits

0xa511,	// (0x0003049a) status_small_pane_g4

0xa51d,	// (0x000304a6) status_small_pane_g5_ParamLimits

0xa51d,	// (0x000304a6) status_small_pane_g5

0xa52b,	// (0x000304b4) status_small_pane_g6_ParamLimits

0xa52b,	// (0x000304b4) status_small_pane_g6

0x0007,

0xf772,	// (0x000356fb) status_small_pane_g_ParamLimits

0xf772,	// (0x000356fb) status_small_pane_g

0xa55a,	// (0x000304e3) status_small_pane_t1

0xa57c,	// (0x00030505) status_small_wait_pane_ParamLimits

0xa57c,	// (0x00030505) status_small_wait_pane

0xa25d,	// (0x000301e6) aid_levels_signal_ParamLimits

0xa25d,	// (0x000301e6) aid_levels_signal

0xa275,	// (0x000301fe) signal_pane_g1_ParamLimits

0xa275,	// (0x000301fe) signal_pane_g1

0xa290,	// (0x00030219) signal_pane_g2_ParamLimits

0xa290,	// (0x00030219) signal_pane_g2

0x0003,

0xf703,	// (0x0003568c) signal_pane_g_ParamLimits

0xf703,	// (0x0003568c) signal_pane_g

0xd0df,	// (0x00033068) context_pane_g1

0x99c4,	// (0x0002f94d) title_pane_g1

0x99fb,	// (0x0002f984) title_pane_t1

0xc859,	// (0x000327e2) title_pane_t2

0xc87f,	// (0x00032808) title_pane_t3

0x0002,

0xf557,	// (0x000354e0) title_pane_t

0xb27a,	// (0x00031203) aid_levels_battery_ParamLimits

0xb27a,	// (0x00031203) aid_levels_battery

0xb296,	// (0x0003121f) battery_pane_g1_ParamLimits

0xb296,	// (0x0003121f) battery_pane_g1

0xb2b3,	// (0x0003123c) battery_pane_g2_ParamLimits

0xb2b3,	// (0x0003123c) battery_pane_g2

0x0001,

0xf7a6,	// (0x0003572f) battery_pane_g_ParamLimits

0xf7a6,	// (0x0003572f) battery_pane_g

0xb936,	// (0x000318bf) uni_indicator_pane_g1

0xb94c,	// (0x000318d5) uni_indicator_pane_g2

0xb962,	// (0x000318eb) uni_indicator_pane_g3

0x0005,

0xf917,	// (0x000358a0) uni_indicator_pane_g

0x084a,	// (0x000267d3) navi_icon_pane_ParamLimits

0x084a,	// (0x000267d3) navi_icon_pane

0x0794,	// (0x0002671d) navi_midp_pane

0x0866,	// (0x000267ef) navi_navi_pane

0x0870,	// (0x000267f9) navi_text_pane_ParamLimits

0x0870,	// (0x000267f9) navi_text_pane

0xc839,	// (0x000327c2) status_small_wait_pane_g1

0xcad0,	// (0x00032a59) status_small_wait_pane_g2

0x0001,

0xf912,	// (0x0003589b) status_small_wait_pane_g

0xb88f,	// (0x00031818) navi_navi_icon_text_pane

0x3c10,	// (0x00029b99) navi_navi_pane_g1_ParamLimits

0x3c10,	// (0x00029b99) navi_navi_pane_g1

0x3c22,	// (0x00029bab) navi_navi_pane_g2_ParamLimits

0x3c22,	// (0x00029bab) navi_navi_pane_g2

0x0001,

0xf8e0,	// (0x00035869) navi_navi_pane_g_ParamLimits

0xf8e0,	// (0x00035869) navi_navi_pane_g

0x3c34,	// (0x00029bbd) navi_navi_tabs_pane

0x3c3d,	// (0x00029bc6) navi_navi_text_pane

0xb88f,	// (0x00031818) navi_navi_volume_pane

0x3be4,	// (0x00029b6d) navi_text_pane_t1

0x3bd8,	// (0x00029b61) navi_icon_pane_g1

0x3b2b,	// (0x00029ab4) navi_navi_text_pane_t1

0xb87b,	// (0x00031804) navi_navi_volume_pane_g1

0x1ca8,	// (0x00027c31) volume_small_pane

0x3a91,	// (0x00029a1a) navi_navi_icon_text_pane_g1

0xb7df,	// (0x00031768) navi_navi_icon_text_pane_t1

0x0866,	// (0x000267ef) navi_tabs_2_long_pane

0x0866,	// (0x000267ef) navi_tabs_2_pane

0x0866,	// (0x000267ef) navi_tabs_3_long_pane

0x0866,	// (0x000267ef) navi_tabs_3_pane

0x0866,	// (0x000267ef) navi_tabs_4_pane

0x1c80,	// (0x00027c09) tabs_2_active_pane_ParamLimits

0x1c80,	// (0x00027c09) tabs_2_active_pane

0x1c90,	// (0x00027c19) tabs_2_passive_pane_ParamLimits

0x1c90,	// (0x00027c19) tabs_2_passive_pane

0x1c4e,	// (0x00027bd7) tabs_3_active_pane_ParamLimits

0x1c4e,	// (0x00027bd7) tabs_3_active_pane

0x1c5e,	// (0x00027be7) tabs_3_passive_pane_ParamLimits

0x1c5e,	// (0x00027be7) tabs_3_passive_pane

0x1c6f,	// (0x00027bf8) tabs_3_passive_pane_cp_ParamLimits

0x1c6f,	// (0x00027bf8) tabs_3_passive_pane_cp

0x1c0a,	// (0x00027b93) tabs_4_active_pane_ParamLimits

0x1c0a,	// (0x00027b93) tabs_4_active_pane

0x1c1b,	// (0x00027ba4) tabs_4_passive_pane_ParamLimits

0x1c1b,	// (0x00027ba4) tabs_4_passive_pane

0x1c2c,	// (0x00027bb5) tabs_4_passive_pane_cp_ParamLimits

0x1c2c,	// (0x00027bb5) tabs_4_passive_pane_cp

0x1c3d,	// (0x00027bc6) tabs_4_passive_pane_cp2_ParamLimits

0x1c3d,	// (0x00027bc6) tabs_4_passive_pane_cp2

0x1be6,	// (0x00027b6f) tabs_2_long_active_pane_ParamLimits

0x1be6,	// (0x00027b6f) tabs_2_long_active_pane

0x1bf8,	// (0x00027b81) tabs_2_long_passive_pane_ParamLimits

0x1bf8,	// (0x00027b81) tabs_2_long_passive_pane

0x1ba1,	// (0x00027b2a) tabs_3_long_active_pane_ParamLimits

0x1ba1,	// (0x00027b2a) tabs_3_long_active_pane

0x1bba,	// (0x00027b43) tabs_3_long_passive_pane_ParamLimits

0x1bba,	// (0x00027b43) tabs_3_long_passive_pane

0x1bcd,	// (0x00027b56) tabs_3_long_passive_pane_cp_ParamLimits

0x1bcd,	// (0x00027b56) tabs_3_long_passive_pane_cp

0x1b47,	// (0x00027ad0) volume_small_pane_g1

0x1b50,	// (0x00027ad9) volume_small_pane_g2

0x1b59,	// (0x00027ae2) volume_small_pane_g3

0x1b62,	// (0x00027aeb) volume_small_pane_g4

0x1b6b,	// (0x00027af4) volume_small_pane_g5

0x1b74,	// (0x00027afd) volume_small_pane_g6

0x1b7d,	// (0x00027b06) volume_small_pane_g7

0x1b86,	// (0x00027b0f) volume_small_pane_g8

0x1b8f,	// (0x00027b18) volume_small_pane_g9

0x1b98,	// (0x00027b21) volume_small_pane_g10

0x0009,

0xf8ac,	// (0x00035835) volume_small_pane_g

0xc891,	// (0x0003281a) bg_active_tab_pane_cp2_ParamLimits

0xc891,	// (0x0003281a) bg_active_tab_pane_cp2

0x9a87,	// (0x0002fa10) tabs_3_active_pane_g1

0x9a8f,	// (0x0002fa18) tabs_3_active_pane_t1

0xc891,	// (0x0003281a) bg_passive_tab_pane_cp2_ParamLimits

0xc891,	// (0x0003281a) bg_passive_tab_pane_cp2

0x9a87,	// (0x0002fa10) tabs_3_passive_pane_g1

0x9a8f,	// (0x0002fa18) tabs_3_passive_pane_t1

0xc891,	// (0x0003281a) bg_active_tab_pane_cp3_ParamLimits

0xc891,	// (0x0003281a) bg_active_tab_pane_cp3

0x9aa1,	// (0x0002fa2a) tabs_4_active_pane_g1

0x9aa9,	// (0x0002fa32) tabs_4_active_pane_t1

0xc891,	// (0x0003281a) bg_passive_tab_pane_cp3_ParamLimits

0xc891,	// (0x0003281a) bg_passive_tab_pane_cp3

0x9aa1,	// (0x0002fa2a) tabs_4_1_passive_pane_g1

0x9aa9,	// (0x0002fa32) tabs_4_1_passive_pane_t1

0x0f27,	// (0x00026eb0) list_highlight_pane_cp2

0xbb26,	// (0x00031aaf) list_set_pane_ParamLimits

0xbb26,	// (0x00031aaf) list_set_pane

0xbbc0,	// (0x00031b49) main_pane_set_t1_ParamLimits

0xbbc0,	// (0x00031b49) main_pane_set_t1

0xbbe0,	// (0x00031b69) main_pane_set_t2_ParamLimits

0xbbe0,	// (0x00031b69) main_pane_set_t2

0xbbf4,	// (0x00031b7d) main_pane_set_t3_ParamLimits

0xbbf4,	// (0x00031b7d) main_pane_set_t3

0xbc06,	// (0x00031b8f) main_pane_set_t4_ParamLimits

0xbc06,	// (0x00031b8f) main_pane_set_t4

0x0003,

0xf97c,	// (0x00035905) main_pane_set_t_ParamLimits

0xf97c,	// (0x00035905) main_pane_set_t

0xbc18,	// (0x00031ba1) setting_code_pane

0xbc22,	// (0x00031bab) setting_slider_graphic_pane

0xbc22,	// (0x00031bab) setting_slider_pane

0xbc22,	// (0x00031bab) setting_text_pane

0xbc22,	// (0x00031bab) setting_volume_pane

0x9abb,	// (0x0002fa44) volume_set_pane

0xc89f,	// (0x00032828) bg_set_opt_pane_cp

0x9ac3,	// (0x0002fa4c) setting_slider_pane_t1

0x9adc,	// (0x0002fa65) setting_slider_pane_t2

0x9af6,	// (0x0002fa7f) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x000354e7) setting_slider_pane_t

0x9b0e,	// (0x0002fa97) slider_set_pane

0xc843,	// (0x000327cc) bg_set_opt_pane_cp2

0xc8ad,	// (0x00032836) setting_slider_graphic_pane_g1

0x9b24,	// (0x0002faad) setting_slider_graphic_pane_t1

0x9b34,	// (0x0002fabd) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x000354ee) setting_slider_graphic_pane_t

0x9b44,	// (0x0002facd) slider_set_pane_cp

0xc843,	// (0x000327cc) input_focus_pane_cp1

0x4115,	// (0x0002a09e) list_set_text_pane

0xc839,	// (0x000327c2) setting_text_pane_g1

0xc843,	// (0x000327cc) input_focus_pane_cp2

0xc839,	// (0x000327c2) setting_code_pane_g1

0xc8b6,	// (0x0003283f) setting_code_pane_t1

0xeb1b,	// (0x00034aa4) set_text_pane_t1_ParamLimits

0xeb1b,	// (0x00034aa4) set_text_pane_t1

0xccac,	// (0x00032c35) set_opt_bg_pane_g1

0xccb4,	// (0x00032c3d) set_opt_bg_pane_g2

0xbadb,	// (0x00031a64) set_opt_bg_pane_g3

0xccc4,	// (0x00032c4d) set_opt_bg_pane_g4

0xcccc,	// (0x00032c55) set_opt_bg_pane_g5

0xccd4,	// (0x00032c5d) set_opt_bg_pane_g6

0xbae5,	// (0x00031a6e) set_opt_bg_pane_g7

0xbaed,	// (0x00031a76) set_opt_bg_pane_g8

0xbaf7,	// (0x00031a80) set_opt_bg_pane_g9

0x0008,

0xf969,	// (0x000358f2) set_opt_bg_pane_g

0xba76,	// (0x000319ff) slider_set_pane_g1

0x1d15,	// (0x00027c9e) slider_set_pane_g2

0x0006,

0xf95a,	// (0x000358e3) slider_set_pane_g

0xb99b,	// (0x00031924) volume_set_pane_g1

0xb9a3,	// (0x0003192c) volume_set_pane_g2

0xb9ab,	// (0x00031934) volume_set_pane_g3

0xb9b3,	// (0x0003193c) volume_set_pane_g4

0xb9bb,	// (0x00031944) volume_set_pane_g5

0xb9c3,	// (0x0003194c) volume_set_pane_g6

0xb9cb,	// (0x00031954) volume_set_pane_g7

0xb9d3,	// (0x0003195c) volume_set_pane_g8

0xb9db,	// (0x00031964) volume_set_pane_g9

0xb9e3,	// (0x0003196c) volume_set_pane_g10

0x0009,

0xf932,	// (0x000358bb) volume_set_pane_g

0x9b4c,	// (0x0002fad5) indicator_pane_ParamLimits

0x9b4c,	// (0x0002fad5) indicator_pane

0x9b74,	// (0x0002fafd) main_idle_pane_g2_ParamLimits

0x9b74,	// (0x0002fafd) main_idle_pane_g2

0x9bac,	// (0x0002fb35) main_pane_idle_g1_ParamLimits

0x9bac,	// (0x0002fb35) main_pane_idle_g1

0xc8c4,	// (0x0003284d) popup_clock_digital_analogue_window_ParamLimits

0xc8c4,	// (0x0003284d) popup_clock_digital_analogue_window

0x9bd3,	// (0x0002fb5c) soft_indicator_pane_ParamLimits

0x9bd3,	// (0x0002fb5c) soft_indicator_pane

0x9bf7,	// (0x0002fb80) wallpaper_pane_ParamLimits

0x9bf7,	// (0x0002fb80) wallpaper_pane

0xc839,	// (0x000327c2) wallpaper_pane_g1

0x9c09,	// (0x0002fb92) indicator_pane_g1_ParamLimits

0x9c09,	// (0x0002fb92) indicator_pane_g1

0x451d,	// (0x0002a4a6) navi_navi_icon_text_pane_srt_g1

0xc8f2,	// (0x0003287b) soft_indicator_pane_t1

0xc90c,	// (0x00032895) aid_ps_area_pane

0x9c1f,	// (0x0002fba8) aid_ps_clock_pane

0xc91d,	// (0x000328a6) aid_ps_indicator_pane

0xc929,	// (0x000328b2) indicator_ps_pane_ParamLimits

0xc929,	// (0x000328b2) indicator_ps_pane

0xc938,	// (0x000328c1) power_save_pane_g1_ParamLimits

0xc938,	// (0x000328c1) power_save_pane_g1

0xc944,	// (0x000328cd) power_save_pane_g2_ParamLimits

0xc944,	// (0x000328cd) power_save_pane_g2

0xf3bf,	// (0x00035348) aid_navinavi_width_pane

0xc90c,	// (0x00032895) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x000354f3) power_save_pane_g_ParamLimits

0xf56a,	// (0x000354f3) power_save_pane_g

0xc952,	// (0x000328db) power_save_pane_t1_ParamLimits

0xc952,	// (0x000328db) power_save_pane_t1

0x9c1f,	// (0x0002fba8) aid_ps_clock_pane_ParamLimits

0xc91d,	// (0x000328a6) aid_ps_indicator_pane_ParamLimits

0xc964,	// (0x000328ed) power_save_pane_t4_ParamLimits

0xc964,	// (0x000328ed) power_save_pane_t4

0x0001,

0xf56f,	// (0x000354f8) power_save_pane_t_ParamLimits

0xf56f,	// (0x000354f8) power_save_pane_t

0xc98e,	// (0x00032917) power_save_t3_ParamLimits

0xc98e,	// (0x00032917) power_save_t3

0xc979,	// (0x00032902) power_save_t2_ParamLimits

0xc979,	// (0x00032902) power_save_t2

0xc9a3,	// (0x0003292c) indicator_ps_pane_g1

0x9c2d,	// (0x0002fbb6) ai_gene_pane_ParamLimits

0x9c2d,	// (0x0002fbb6) ai_gene_pane

0x9c44,	// (0x0002fbcd) ai_links_pane_ParamLimits

0x9c44,	// (0x0002fbcd) ai_links_pane

0x9c5c,	// (0x0002fbe5) indicator_pane_cp1_ParamLimits

0x9c5c,	// (0x0002fbe5) indicator_pane_cp1

0x9c6b,	// (0x0002fbf4) main_pane_idle_g1_cp_ParamLimits

0x9c6b,	// (0x0002fbf4) main_pane_idle_g1_cp

0x9c83,	// (0x0002fc0c) popup_ai_links_title_window

0x9c8c,	// (0x0002fc15) soft_indicator_pane_cp1_ParamLimits

0x9c8c,	// (0x0002fc15) soft_indicator_pane_cp1

0x3ecf,	// (0x00029e58) ai_links_pane_g1

0x3ed8,	// (0x00029e61) grid_ai_links_pane

0xb92d,	// (0x000318b6) ai_gene_pane_1

0x3ebd,	// (0x00029e46) ai_gene_pane_2

0x3ec6,	// (0x00029e4f) list_highlight_pane_cp4

0xb909,	// (0x00031892) cell_ai_link_pane_ParamLimits

0xb909,	// (0x00031892) cell_ai_link_pane

0x3e8e,	// (0x00029e17) cell_ai_link_pane_g1

0xcad0,	// (0x00032a59) cell_ai_link_pane_g2

0x0001,

0xf90d,	// (0x00035896) cell_ai_link_pane_g

0xc843,	// (0x000327cc) grid_highlight_cp2

0xc843,	// (0x000327cc) bg_popup_sub_pane_cp1

0xc9ba,	// (0x00032943) popup_ai_links_title_window_t1

0x3dde,	// (0x00029d67) ai_gene_pane_1_g1_ParamLimits

0x3dde,	// (0x00029d67) ai_gene_pane_1_g1

0x3dea,	// (0x00029d73) ai_gene_pane_1_g2_ParamLimits

0x3dea,	// (0x00029d73) ai_gene_pane_1_g2

0x0001,

0xf903,	// (0x0003588c) ai_gene_pane_1_g_ParamLimits

0xf903,	// (0x0003588c) ai_gene_pane_1_g

0x3df7,	// (0x00029d80) ai_gene_pane_1_t1_ParamLimits

0x3df7,	// (0x00029d80) ai_gene_pane_1_t1

0x3e2b,	// (0x00029db4) grid_ai_soft_ind_pane

0x3dc9,	// (0x00029d52) ai_gene_pane_2_t1_ParamLimits

0x3dc9,	// (0x00029d52) ai_gene_pane_2_t1

0x9ca0,	// (0x0002fc29) main_pane_empty_t1_ParamLimits

0x9ca0,	// (0x0002fc29) main_pane_empty_t1

0x9cb8,	// (0x0002fc41) main_pane_empty_t2_ParamLimits

0x9cb8,	// (0x0002fc41) main_pane_empty_t2

0x9ccd,	// (0x0002fc56) main_pane_empty_t3_ParamLimits

0x9ccd,	// (0x0002fc56) main_pane_empty_t3

0x9cdf,	// (0x0002fc68) main_pane_empty_t4_ParamLimits

0x9cdf,	// (0x0002fc68) main_pane_empty_t4

0x9cf1,	// (0x0002fc7a) main_pane_empty_t5_ParamLimits

0x9cf1,	// (0x0002fc7a) main_pane_empty_t5

0x0004,

0xf574,	// (0x000354fd) main_pane_empty_t_ParamLimits

0xf574,	// (0x000354fd) main_pane_empty_t

0xccfd,	// (0x00032c86) bg_popup_window_pane_ParamLimits

0xccfd,	// (0x00032c86) bg_popup_window_pane

0xb883,	// (0x0003180c) find_popup_pane_cp2_ParamLimits

0xb883,	// (0x0003180c) find_popup_pane_cp2

0x3b45,	// (0x00029ace) heading_pane_ParamLimits

0x3b45,	// (0x00029ace) heading_pane

0xc843,	// (0x000327cc) bg_popup_sub_pane

0xb7fc,	// (0x00031785) bg_popup_window_pane_g1_ParamLimits

0xb7fc,	// (0x00031785) bg_popup_window_pane_g1

0xb80b,	// (0x00031794) bg_popup_window_pane_g2_ParamLimits

0xb80b,	// (0x00031794) bg_popup_window_pane_g2

0xb817,	// (0x000317a0) bg_popup_window_pane_g3_ParamLimits

0xb817,	// (0x000317a0) bg_popup_window_pane_g3

0xb823,	// (0x000317ac) bg_popup_window_pane_g4_ParamLimits

0xb823,	// (0x000317ac) bg_popup_window_pane_g4

0xb832,	// (0x000317bb) bg_popup_window_pane_g5_ParamLimits

0xb832,	// (0x000317bb) bg_popup_window_pane_g5

0xb842,	// (0x000317cb) bg_popup_window_pane_g6_ParamLimits

0xb842,	// (0x000317cb) bg_popup_window_pane_g6

0xb84e,	// (0x000317d7) bg_popup_window_pane_g7_ParamLimits

0xb84e,	// (0x000317d7) bg_popup_window_pane_g7

0xb85d,	// (0x000317e6) bg_popup_window_pane_g8_ParamLimits

0xb85d,	// (0x000317e6) bg_popup_window_pane_g8

0xb86c,	// (0x000317f5) bg_popup_window_pane_g9_ParamLimits

0xb86c,	// (0x000317f5) bg_popup_window_pane_g9

0x3b1f,	// (0x00029aa8) bg_popup_window_pane_g10_ParamLimits

0x3b1f,	// (0x00029aa8) bg_popup_window_pane_g10

0x0009,

0xf8cb,	// (0x00035854) bg_popup_window_pane_g_ParamLimits

0xf8cb,	// (0x00035854) bg_popup_window_pane_g

0x3a48,	// (0x000299d1) bg_popup_heading_pane_ParamLimits

0x3a48,	// (0x000299d1) bg_popup_heading_pane

0x1d9d,	// (0x00027d26) tabs_4_passive_pane_cp_srt_ParamLimits

0x1d9d,	// (0x00027d26) tabs_4_passive_pane_cp_srt

0x1daf,	// (0x00027d38) tabs_4_passive_pane_srt_ParamLimits

0x3a5c,	// (0x000299e5) heading_pane_g2

0x1daf,	// (0x00027d38) tabs_4_passive_pane_srt

0x2dee,	// (0x00028d77) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2dee,	// (0x00028d77) bg_passive_tab_pane_cp3_srt

0x3a64,	// (0x000299ed) heading_pane_t1_ParamLimits

0x3a64,	// (0x000299ed) heading_pane_t1

0x3a7b,	// (0x00029a04) heading_pane_t2_ParamLimits

0x3a7b,	// (0x00029a04) heading_pane_t2

0x0001,

0xf8c6,	// (0x0003584f) heading_pane_t_ParamLimits

0xf8c6,	// (0x0003584f) heading_pane_t

0x3585,	// (0x0002950e) bg_popup_heading_pane_g1

0x3634,	// (0x000295bd) bg_popup_heading_pane_g2

0x363e,	// (0x000295c7) bg_popup_heading_pane_g3

0x3648,	// (0x000295d1) bg_popup_heading_pane_g4

0x3652,	// (0x000295db) bg_popup_heading_pane_g5

0x365c,	// (0x000295e5) bg_popup_heading_pane_g6

0x3664,	// (0x000295ed) bg_popup_heading_pane_g7

0x366c,	// (0x000295f5) bg_popup_heading_pane_g8

0x3676,	// (0x000295ff) bg_popup_heading_pane_g9

0x0008,

0xf882,	// (0x0003580b) bg_popup_heading_pane_g

0x19ff,	// (0x00027988) bg_popup_sub_pane_g1

0x1a07,	// (0x00027990) bg_popup_sub_pane_g2

0x1a0f,	// (0x00027998) bg_popup_sub_pane_g3

0x1a17,	// (0x000279a0) bg_popup_sub_pane_g4

0x1a1f,	// (0x000279a8) bg_popup_sub_pane_g5

0x1a27,	// (0x000279b0) bg_popup_sub_pane_g6

0x1a2f,	// (0x000279b8) bg_popup_sub_pane_g7

0x1a37,	// (0x000279c0) bg_popup_sub_pane_g8

0x1a3f,	// (0x000279c8) bg_popup_sub_pane_g9

0x0008,

0xf85c,	// (0x000357e5) bg_popup_sub_pane_g

0xc891,	// (0x0003281a) bg_popup_window_pane_cp5_ParamLimits

0xc891,	// (0x0003281a) bg_popup_window_pane_cp5

0xc9d7,	// (0x00032960) popup_note_window_g1_ParamLimits

0xc9d7,	// (0x00032960) popup_note_window_g1

0xc9e3,	// (0x0003296c) popup_note_window_t1_ParamLimits

0xc9e3,	// (0x0003296c) popup_note_window_t1

0xc9f9,	// (0x00032982) popup_note_window_t2_ParamLimits

0xc9f9,	// (0x00032982) popup_note_window_t2

0xca0f,	// (0x00032998) popup_note_window_t3_ParamLimits

0xca0f,	// (0x00032998) popup_note_window_t3

0xca25,	// (0x000329ae) popup_note_window_t4_ParamLimits

0xca25,	// (0x000329ae) popup_note_window_t4

0xca4d,	// (0x000329d6) popup_note_window_t5_ParamLimits

0xca4d,	// (0x000329d6) popup_note_window_t5

0x0004,

0xf57f,	// (0x00035508) popup_note_window_t_ParamLimits

0xf57f,	// (0x00035508) popup_note_window_t

0xca71,	// (0x000329fa) bg_popup_window_pane_cp6_ParamLimits

0xca71,	// (0x000329fa) bg_popup_window_pane_cp6

0x3501,	// (0x0002948a) popup_note_image_window_g1_ParamLimits

0x3501,	// (0x0002948a) popup_note_image_window_g1

0xb6a1,	// (0x0003162a) popup_note_image_window_g2_ParamLimits

0xb6a1,	// (0x0003162a) popup_note_image_window_g2

0x0001,

0xf850,	// (0x000357d9) popup_note_image_window_g_ParamLimits

0xf850,	// (0x000357d9) popup_note_image_window_g

0x3526,	// (0x000294af) popup_note_image_window_t1_ParamLimits

0x3526,	// (0x000294af) popup_note_image_window_t1

0x353f,	// (0x000294c8) popup_note_image_window_t2_ParamLimits

0x353f,	// (0x000294c8) popup_note_image_window_t2

0x3558,	// (0x000294e1) popup_note_image_window_t3_ParamLimits

0x3558,	// (0x000294e1) popup_note_image_window_t3

0x0002,

0xf855,	// (0x000357de) popup_note_image_window_t_ParamLimits

0xf855,	// (0x000357de) popup_note_image_window_t

0x33ca,	// (0x00029353) bg_popup_window_pane_cp7_ParamLimits

0x33ca,	// (0x00029353) bg_popup_window_pane_cp7

0x33fa,	// (0x00029383) popup_note_wait_window_g1_ParamLimits

0x33fa,	// (0x00029383) popup_note_wait_window_g1

0x3406,	// (0x0002938f) popup_note_wait_window_g2_ParamLimits

0x3406,	// (0x0002938f) popup_note_wait_window_g2

0x0002,

0xf83e,	// (0x000357c7) popup_note_wait_window_g_ParamLimits

0xf83e,	// (0x000357c7) popup_note_wait_window_g

0x341e,	// (0x000293a7) popup_note_wait_window_t1_ParamLimits

0x341e,	// (0x000293a7) popup_note_wait_window_t1

0xb642,	// (0x000315cb) popup_note_wait_window_t2_ParamLimits

0xb642,	// (0x000315cb) popup_note_wait_window_t2

0xb65f,	// (0x000315e8) popup_note_wait_window_t3_ParamLimits

0xb65f,	// (0x000315e8) popup_note_wait_window_t3

0xb672,	// (0x000315fb) popup_note_wait_window_t4_ParamLimits

0xb672,	// (0x000315fb) popup_note_wait_window_t4

0x0004,

0xf845,	// (0x000357ce) popup_note_wait_window_t_ParamLimits

0xf845,	// (0x000357ce) popup_note_wait_window_t

0x349a,	// (0x00029423) wait_bar_pane_ParamLimits

0x349a,	// (0x00029423) wait_bar_pane

0xc843,	// (0x000327cc) wait_anim_pane

0xc843,	// (0x000327cc) wait_border_pane

0xc839,	// (0x000327c2) wait_anim_pane_g1

0xc839,	// (0x000327c2) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x00035687) wait_anim_pane_g

0x3376,	// (0x000292ff) wait_border_pane_g1

0x3381,	// (0x0002930a) wait_border_pane_g2

0x338a,	// (0x00029313) wait_border_pane_g3

0x0002,

0xf837,	// (0x000357c0) wait_border_pane_g

0x31e1,	// (0x0002916a) bg_popup_window_pane_cp16_ParamLimits

0x31e1,	// (0x0002916a) bg_popup_window_pane_cp16

0xb5f2,	// (0x0003157b) indicator_popup_pane_cp4_ParamLimits

0xb5f2,	// (0x0003157b) indicator_popup_pane_cp4

0x32f5,	// (0x0002927e) popup_query_data_window_t1_ParamLimits

0x32f5,	// (0x0002927e) popup_query_data_window_t1

0x3307,	// (0x00029290) popup_query_data_window_t2_ParamLimits

0x3307,	// (0x00029290) popup_query_data_window_t2

0x3320,	// (0x000292a9) popup_query_data_window_t3_ParamLimits

0x3320,	// (0x000292a9) popup_query_data_window_t3

0x0002,

0xf830,	// (0x000357b9) popup_query_data_window_t_ParamLimits

0xf830,	// (0x000357b9) popup_query_data_window_t

0xb606,	// (0x0003158f) query_popup_data_pane_ParamLimits

0xb606,	// (0x0003158f) query_popup_data_pane

0xb61a,	// (0x000315a3) query_popup_data_pane_cp1_ParamLimits

0xb61a,	// (0x000315a3) query_popup_data_pane_cp1

0x31e1,	// (0x0002916a) bg_popup_window_pane_cp10_ParamLimits

0x31e1,	// (0x0002916a) bg_popup_window_pane_cp10

0xb56d,	// (0x000314f6) indicator_popup_pane_ParamLimits

0xb56d,	// (0x000314f6) indicator_popup_pane

0xb58f,	// (0x00031518) popup_query_code_window_t1_ParamLimits

0xb58f,	// (0x00031518) popup_query_code_window_t1

0xb5a9,	// (0x00031532) popup_query_code_window_t2_ParamLimits

0xb5a9,	// (0x00031532) popup_query_code_window_t2

0x3298,	// (0x00029221) popup_query_code_window_t3_ParamLimits

0x3298,	// (0x00029221) popup_query_code_window_t3

0x0002,

0xf829,	// (0x000357b2) popup_query_code_window_t_ParamLimits

0xf829,	// (0x000357b2) popup_query_code_window_t

0x32c7,	// (0x00029250) query_popup_pane_ParamLimits

0x32c7,	// (0x00029250) query_popup_pane

0xca71,	// (0x000329fa) bg_popup_window_pane_cp15_ParamLimits

0xca71,	// (0x000329fa) bg_popup_window_pane_cp15

0x9d03,	// (0x0002fc8c) indicator_popup_pane_cp1_ParamLimits

0x9d03,	// (0x0002fc8c) indicator_popup_pane_cp1

0x9d16,	// (0x0002fc9f) indicator_popup_pane_cp2_ParamLimits

0x9d16,	// (0x0002fc9f) indicator_popup_pane_cp2

0x9d29,	// (0x0002fcb2) popup_query_data_code_window_g1_ParamLimits

0x9d29,	// (0x0002fcb2) popup_query_data_code_window_g1

0xca8f,	// (0x00032a18) popup_query_data_code_window_t1_ParamLimits

0xca8f,	// (0x00032a18) popup_query_data_code_window_t1

0xcaa1,	// (0x00032a2a) popup_query_data_code_window_t2_ParamLimits

0xcaa1,	// (0x00032a2a) popup_query_data_code_window_t2

0x9d3c,	// (0x0002fcc5) popup_query_data_code_window_t3_ParamLimits

0x9d3c,	// (0x0002fcc5) popup_query_data_code_window_t3

0x9d52,	// (0x0002fcdb) popup_query_data_code_window_t4_ParamLimits

0x9d52,	// (0x0002fcdb) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00035513) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00035513) popup_query_data_code_window_t

0x0808,	// (0x00026791) list_single_midp_graphic_pane_g3

0x9d6a,	// (0x0002fcf3) query_popup_data_pane_cp2_ParamLimits

0x9d7d,	// (0x0002fd06) query_popup_pane_cp2_ParamLimits

0x9d7d,	// (0x0002fd06) query_popup_pane_cp2

0xc843,	// (0x000327cc) bg_popup_window_pane_cp11

0x31d9,	// (0x00029162) heading_pane_cp5

0xcafd,	// (0x00032a86) listscroll_popup_info_pane

0xc843,	// (0x000327cc) input_focus_pane_cp3

0xcab3,	// (0x00032a3c) query_popup_pane_t1

0xcac1,	// (0x00032a4a) list_popup_info_pane_ParamLimits

0xcac1,	// (0x00032a4a) list_popup_info_pane

0xcad0,	// (0x00032a59) listscroll_popup_info_pane_g1

0xcad8,	// (0x00032a61) scroll_pane_cp7

0x9d90,	// (0x0002fd19) popup_info_list_pane_t1_ParamLimits

0x9d90,	// (0x0002fd19) popup_info_list_pane_t1

0x9daa,	// (0x0002fd33) popup_info_list_pane_t2_ParamLimits

0x9daa,	// (0x0002fd33) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0003551c) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0003551c) popup_info_list_pane_t

0xc843,	// (0x000327cc) bg_popup_window_pane_cp12

0xbe1c,	// (0x00031da5) find_popup_pane

0xc89f,	// (0x00032828) bg_popup_window_pane_cp3

0xcae2,	// (0x00032a6b) heading_pane_cp3

0xcaee,	// (0x00032a77) listscroll_popup_graphic_pane

0xc843,	// (0x000327cc) bg_popup_window_pane_cp4

0x9e14,	// (0x0002fd9d) heading_pane_cp4

0xcafd,	// (0x00032a86) listscroll_popup_colour_pane

0x9e1c,	// (0x0002fda5) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9e1c,	// (0x0002fda5) cell_large_graphic_colour_none_popup_pane

0x9e30,	// (0x0002fdb9) grid_large_graphic_colour_popup_pane_ParamLimits

0x9e30,	// (0x0002fdb9) grid_large_graphic_colour_popup_pane

0x9e54,	// (0x0002fddd) listscroll_popup_colour_pane_g1_ParamLimits

0x9e54,	// (0x0002fddd) listscroll_popup_colour_pane_g1

0x9e6b,	// (0x0002fdf4) listscroll_popup_colour_pane_g2_ParamLimits

0x9e6b,	// (0x0002fdf4) listscroll_popup_colour_pane_g2

0x9e82,	// (0x0002fe0b) listscroll_popup_colour_pane_g3_ParamLimits

0x9e82,	// (0x0002fe0b) listscroll_popup_colour_pane_g3

0x9e92,	// (0x0002fe1b) listscroll_popup_colour_pane_g4_ParamLimits

0x9e92,	// (0x0002fe1b) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00035521) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00035521) listscroll_popup_colour_pane_g

0xcb05,	// (0x00032a8e) scroll_pane_cp6_ParamLimits

0xcb05,	// (0x00032a8e) scroll_pane_cp6

0x9ea2,	// (0x0002fe2b) cell_large_graphic_colour_popup_pane_ParamLimits

0x9ea2,	// (0x0002fe2b) cell_large_graphic_colour_popup_pane

0x9ec1,	// (0x0002fe4a) cell_large_graphic_colour_none_popup_pane_t1

0xc843,	// (0x000327cc) grid_highlight_pane_cp5

0xcb17,	// (0x00032aa0) cell_large_graphic_colour_popup_pane_g1

0xcb1f,	// (0x00032aa8) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0003552a) cell_large_graphic_colour_popup_pane_g

0xcb27,	// (0x00032ab0) cell_large_graphic_colour_popup_pane_g2_copy1

0xcb30,	// (0x00032ab9) grid_highlight_pane_cp4

0xcb38,	// (0x00032ac1) bg_popup_window_pane_cp8_ParamLimits

0xcb38,	// (0x00032ac1) bg_popup_window_pane_cp8

0x9ed0,	// (0x0002fe59) popup_snote_single_text_window_g1_ParamLimits

0x9ed0,	// (0x0002fe59) popup_snote_single_text_window_g1

0x9ee2,	// (0x0002fe6b) popup_snote_single_text_window_t1_ParamLimits

0x9ee2,	// (0x0002fe6b) popup_snote_single_text_window_t1

0x9ef5,	// (0x0002fe7e) popup_snote_single_text_window_t2_ParamLimits

0x9ef5,	// (0x0002fe7e) popup_snote_single_text_window_t2

0x9f08,	// (0x0002fe91) popup_snote_single_text_window_t3_ParamLimits

0x9f08,	// (0x0002fe91) popup_snote_single_text_window_t3

0x9f41,	// (0x0002feca) popup_snote_single_text_window_t4_ParamLimits

0x9f41,	// (0x0002feca) popup_snote_single_text_window_t4

0x9f75,	// (0x0002fefe) popup_snote_single_text_window_t5_ParamLimits

0x9f75,	// (0x0002fefe) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0003552f) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0003552f) popup_snote_single_text_window_t

0xcb53,	// (0x00032adc) bg_popup_window_pane_cp9_ParamLimits

0xcb53,	// (0x00032adc) bg_popup_window_pane_cp9

0x9ed0,	// (0x0002fe59) popup_snote_single_graphic_window_g1_ParamLimits

0x9ed0,	// (0x0002fe59) popup_snote_single_graphic_window_g1

0xcb61,	// (0x00032aea) popup_snote_single_graphic_window_g2_ParamLimits

0xcb61,	// (0x00032aea) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0003553a) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0003553a) popup_snote_single_graphic_window_g

0xcb6d,	// (0x00032af6) popup_snote_single_graphic_window_t1_ParamLimits

0xcb6d,	// (0x00032af6) popup_snote_single_graphic_window_t1

0xcb80,	// (0x00032b09) popup_snote_single_graphic_window_t2_ParamLimits

0xcb80,	// (0x00032b09) popup_snote_single_graphic_window_t2

0x9f08,	// (0x0002fe91) popup_snote_single_graphic_window_t3_ParamLimits

0x9f08,	// (0x0002fe91) popup_snote_single_graphic_window_t3

0x9f41,	// (0x0002feca) popup_snote_single_graphic_window_t4_ParamLimits

0x9f41,	// (0x0002feca) popup_snote_single_graphic_window_t4

0x9fa4,	// (0x0002ff2d) popup_snote_single_graphic_window_t5_ParamLimits

0x9fa4,	// (0x0002ff2d) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0003553f) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0003553f) popup_snote_single_graphic_window_t

0x447b,	// (0x0002a404) grid_graphic_popup_pane_ParamLimits

0x447b,	// (0x0002a404) grid_graphic_popup_pane

0x44a3,	// (0x0002a42c) listscroll_popup_graphic_pane_g1_ParamLimits

0x44a3,	// (0x0002a42c) listscroll_popup_graphic_pane_g1

0xbd67,	// (0x00031cf0) listscroll_popup_graphic_pane_g2_ParamLimits

0xbd67,	// (0x00031cf0) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a6,	// (0x0003592f) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a6,	// (0x0003592f) listscroll_popup_graphic_pane_g

0x44cb,	// (0x0002a454) scroll_pane_cp5

0xbd22,	// (0x00031cab) cell_graphic_popup_pane_ParamLimits

0xbd22,	// (0x00031cab) cell_graphic_popup_pane

0x43f9,	// (0x0002a382) cell_graphic_popup_pane_g1

0x4401,	// (0x0002a38a) cell_graphic_popup_pane_g2

0xcb27,	// (0x00032ab0) cell_graphic_popup_pane_g3

0x0002,

0xf99f,	// (0x00035928) cell_graphic_popup_pane_g

0x440a,	// (0x0002a393) cell_graphic_popup_pane_t2

0xcb30,	// (0x00032ab9) grid_highlight_pane_cp3

0xcba5,	// (0x00032b2e) list_gen_pane_ParamLimits

0xcba5,	// (0x00032b2e) list_gen_pane

0xcbcd,	// (0x00032b56) scroll_pane

0xbc8c,	// (0x00031c15) bg_list_pane_g1_ParamLimits

0xbc8c,	// (0x00031c15) bg_list_pane_g1

0xbca7,	// (0x00031c30) bg_list_pane_g2_ParamLimits

0xbca7,	// (0x00031c30) bg_list_pane_g2

0xbcba,	// (0x00031c43) bg_list_pane_g3_ParamLimits

0xbcba,	// (0x00031c43) bg_list_pane_g3

0xbccc,	// (0x00031c55) bg_list_pane_g4_ParamLimits

0xbccc,	// (0x00031c55) bg_list_pane_g4

0xbcde,	// (0x00031c67) bg_list_pane_g5_ParamLimits

0xbcde,	// (0x00031c67) bg_list_pane_g5

0x0004,

0xf994,	// (0x0003591d) bg_list_pane_g_ParamLimits

0xf994,	// (0x0003591d) bg_list_pane_g

0xbc55,	// (0x00031bde) list_double2_graphic_large_graphic_pane_ParamLimits

0xbc55,	// (0x00031bde) list_double2_graphic_large_graphic_pane

0xbc55,	// (0x00031bde) list_double2_graphic_pane_ParamLimits

0xbc55,	// (0x00031bde) list_double2_graphic_pane

0xbc55,	// (0x00031bde) list_double2_large_graphic_pane_ParamLimits

0xbc55,	// (0x00031bde) list_double2_large_graphic_pane

0xbc55,	// (0x00031bde) list_double2_pane_ParamLimits

0xbc55,	// (0x00031bde) list_double2_pane

0xbc55,	// (0x00031bde) list_double_graphic_heading_pane_ParamLimits

0xbc55,	// (0x00031bde) list_double_graphic_heading_pane

0xbc55,	// (0x00031bde) list_double_graphic_pane_ParamLimits

0xbc55,	// (0x00031bde) list_double_graphic_pane

0xbc55,	// (0x00031bde) list_double_heading_pane_ParamLimits

0xbc55,	// (0x00031bde) list_double_heading_pane

0xbc55,	// (0x00031bde) list_double_large_graphic_pane_ParamLimits

0xbc55,	// (0x00031bde) list_double_large_graphic_pane

0xbc55,	// (0x00031bde) list_double_number_pane_ParamLimits

0xbc55,	// (0x00031bde) list_double_number_pane

0xbc55,	// (0x00031bde) list_double_pane_ParamLimits

0xbc55,	// (0x00031bde) list_double_pane

0xbc55,	// (0x00031bde) list_double_time_pane_ParamLimits

0xbc55,	// (0x00031bde) list_double_time_pane

0xbc55,	// (0x00031bde) list_setting_number_pane_ParamLimits

0xbc55,	// (0x00031bde) list_setting_number_pane

0xbc55,	// (0x00031bde) list_setting_pane_ParamLimits

0xbc55,	// (0x00031bde) list_setting_pane

0x95b4,	// (0x0002f53d) list_single_2graphic_pane_ParamLimits

0x95b4,	// (0x0002f53d) list_single_2graphic_pane

0x95b4,	// (0x0002f53d) list_single_graphic_heading_pane_ParamLimits

0x95b4,	// (0x0002f53d) list_single_graphic_heading_pane

0x95b4,	// (0x0002f53d) list_single_graphic_pane_ParamLimits

0x95b4,	// (0x0002f53d) list_single_graphic_pane

0x95b4,	// (0x0002f53d) list_single_heading_pane_ParamLimits

0x95b4,	// (0x0002f53d) list_single_heading_pane

0xbc55,	// (0x00031bde) list_single_large_graphic_pane_ParamLimits

0xbc55,	// (0x00031bde) list_single_large_graphic_pane

0x95b4,	// (0x0002f53d) list_single_number_heading_pane_ParamLimits

0x95b4,	// (0x0002f53d) list_single_number_heading_pane

0x95b4,	// (0x0002f53d) list_single_number_pane_ParamLimits

0x95b4,	// (0x0002f53d) list_single_number_pane

0x95b4,	// (0x0002f53d) list_single_pane_ParamLimits

0x95b4,	// (0x0002f53d) list_single_pane

0xc843,	// (0x000327cc) list_highlight_pane_cp1

0xeb36,	// (0x00034abf) list_single_pane_g1_ParamLimits

0xeb36,	// (0x00034abf) list_single_pane_g1

0xeb42,	// (0x00034acb) list_single_pane_g2_ParamLimits

0xeb42,	// (0x00034acb) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00035551) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00035551) list_single_pane_g

0xedf0,	// (0x00034d79) list_single_pane_t1_ParamLimits

0xedf0,	// (0x00034d79) list_single_pane_t1

0xeb36,	// (0x00034abf) list_single_number_pane_g1_ParamLimits

0xeb36,	// (0x00034abf) list_single_number_pane_g1

0xeb42,	// (0x00034acb) list_single_number_pane_g2_ParamLimits

0xeb42,	// (0x00034acb) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00035551) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00035551) list_single_number_pane_g

0xed01,	// (0x00034c8a) list_single_number_pane_t1_ParamLimits

0xed01,	// (0x00034c8a) list_single_number_pane_t1

0xedde,	// (0x00034d67) list_single_number_pane_t2_ParamLimits

0xedde,	// (0x00034d67) list_single_number_pane_t2

0x0001,

0xf955,	// (0x000358de) list_single_number_pane_t_ParamLimits

0xf955,	// (0x000358de) list_single_number_pane_t

0x8f8c,	// (0x0002ef15) list_single_graphic_pane_g1_ParamLimits

0x8f8c,	// (0x0002ef15) list_single_graphic_pane_g1

0xeb36,	// (0x00034abf) list_single_graphic_pane_g2_ParamLimits

0xeb36,	// (0x00034abf) list_single_graphic_pane_g2

0xeb42,	// (0x00034acb) list_single_graphic_pane_g3_ParamLimits

0xeb42,	// (0x00034acb) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0003554a) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0003554a) list_single_graphic_pane_g

0xeb4e,	// (0x00034ad7) list_single_graphic_pane_t1_ParamLimits

0xeb4e,	// (0x00034ad7) list_single_graphic_pane_t1

0xeb36,	// (0x00034abf) list_single_heading_pane_g1_ParamLimits

0xeb36,	// (0x00034abf) list_single_heading_pane_g1

0xeb42,	// (0x00034acb) list_single_heading_pane_g2_ParamLimits

0xeb42,	// (0x00034acb) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00035551) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00035551) list_single_heading_pane_g

0xeb64,	// (0x00034aed) list_single_heading_pane_t1_ParamLimits

0xeb64,	// (0x00034aed) list_single_heading_pane_t1

0xeb7a,	// (0x00034b03) list_single_heading_pane_t2_ParamLimits

0xeb7a,	// (0x00034b03) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00035556) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00035556) list_single_heading_pane_t

0xeb36,	// (0x00034abf) list_single_number_heading_pane_g1_ParamLimits

0xeb36,	// (0x00034abf) list_single_number_heading_pane_g1

0xeb42,	// (0x00034acb) list_single_number_heading_pane_g2_ParamLimits

0xeb42,	// (0x00034acb) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00035551) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00035551) list_single_number_heading_pane_g

0xeb64,	// (0x00034aed) list_single_number_heading_pane_t1_ParamLimits

0xeb64,	// (0x00034aed) list_single_number_heading_pane_t1

0xeb8c,	// (0x00034b15) list_single_number_heading_pane_t2_ParamLimits

0xeb8c,	// (0x00034b15) list_single_number_heading_pane_t2

0xeb9e,	// (0x00034b27) list_single_number_heading_pane_t3_ParamLimits

0xeb9e,	// (0x00034b27) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0003555b) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0003555b) list_single_number_heading_pane_t

0xebb0,	// (0x00034b39) list_single_graphic_heading_pane_g1_ParamLimits

0xebb0,	// (0x00034b39) list_single_graphic_heading_pane_g1

0x8f98,	// (0x0002ef21) list_single_graphic_heading_pane_g4_ParamLimits

0x8f98,	// (0x0002ef21) list_single_graphic_heading_pane_g4

0xeb42,	// (0x00034acb) list_single_graphic_heading_pane_g5_ParamLimits

0xeb42,	// (0x00034acb) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00035562) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00035562) list_single_graphic_heading_pane_g

0xeb64,	// (0x00034aed) list_single_graphic_heading_pane_t1_ParamLimits

0xeb64,	// (0x00034aed) list_single_graphic_heading_pane_t1

0x8fa9,	// (0x0002ef32) list_single_graphic_heading_pane_t2_ParamLimits

0x8fa9,	// (0x0002ef32) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00035569) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00035569) list_single_graphic_heading_pane_t

0xebbc,	// (0x00034b45) list_single_large_graphic_pane_g1_ParamLimits

0xebbc,	// (0x00034b45) list_single_large_graphic_pane_g1

0xebc8,	// (0x00034b51) list_single_large_graphic_pane_g2_ParamLimits

0xebc8,	// (0x00034b51) list_single_large_graphic_pane_g2

0xebd4,	// (0x00034b5d) list_single_large_graphic_pane_g3_ParamLimits

0xebd4,	// (0x00034b5d) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0003556e) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0003556e) list_single_large_graphic_pane_g

0x3381,	// (0x0002930a) wait_border_pane_g2_copy1

0x8fbb,	// (0x0002ef44) list_single_large_graphic_pane_g4_cp2

0xebe0,	// (0x00034b69) list_single_large_graphic_pane_t1_ParamLimits

0xebe0,	// (0x00034b69) list_single_large_graphic_pane_t1

0x8fc3,	// (0x0002ef4c) list_double_pane_g1_ParamLimits

0x8fc3,	// (0x0002ef4c) list_double_pane_g1

0xebf6,	// (0x00034b7f) list_double_pane_g2_ParamLimits

0xebf6,	// (0x00034b7f) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00035575) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00035575) list_double_pane_g

0xec02,	// (0x00034b8b) list_double_pane_t1_ParamLimits

0xec02,	// (0x00034b8b) list_double_pane_t1

0x8fcf,	// (0x0002ef58) list_double_pane_t2_ParamLimits

0x8fcf,	// (0x0002ef58) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0003557a) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0003557a) list_double_pane_t

0x8fe1,	// (0x0002ef6a) list_double2_pane_g1_ParamLimits

0x8fe1,	// (0x0002ef6a) list_double2_pane_g1

0xebf6,	// (0x00034b7f) list_double2_pane_g2_ParamLimits

0xebf6,	// (0x00034b7f) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0003557f) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0003557f) list_double2_pane_g

0xec02,	// (0x00034b8b) list_double2_pane_t1_ParamLimits

0xec02,	// (0x00034b8b) list_double2_pane_t1

0xec18,	// (0x00034ba1) list_double2_pane_t2_ParamLimits

0xec18,	// (0x00034ba1) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00035584) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00035584) list_double2_pane_t

0x8fc3,	// (0x0002ef4c) list_double_number_pane_g1_ParamLimits

0x8fc3,	// (0x0002ef4c) list_double_number_pane_g1

0xebf6,	// (0x00034b7f) list_double_number_pane_g2_ParamLimits

0xebf6,	// (0x00034b7f) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00035575) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00035575) list_double_number_pane_g

0x8ff2,	// (0x0002ef7b) list_double_number_pane_t1_ParamLimits

0x8ff2,	// (0x0002ef7b) list_double_number_pane_t1

0x9004,	// (0x0002ef8d) list_double_number_pane_t2_ParamLimits

0x9004,	// (0x0002ef8d) list_double_number_pane_t2

0x901a,	// (0x0002efa3) list_double_number_pane_t3_ParamLimits

0x901a,	// (0x0002efa3) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00035589) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00035589) list_double_number_pane_t

0x902c,	// (0x0002efb5) list_double_graphic_pane_g1_ParamLimits

0x902c,	// (0x0002efb5) list_double_graphic_pane_g1

0x9038,	// (0x0002efc1) list_double_graphic_pane_g2_ParamLimits

0x9038,	// (0x0002efc1) list_double_graphic_pane_g2

0x9047,	// (0x0002efd0) list_double_graphic_pane_g3_ParamLimits

0x9047,	// (0x0002efd0) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00035590) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00035590) list_double_graphic_pane_g

0x905f,	// (0x0002efe8) list_double_graphic_pane_t1_ParamLimits

0x905f,	// (0x0002efe8) list_double_graphic_pane_t1

0x9075,	// (0x0002effe) list_double_graphic_pane_t2_ParamLimits

0x9075,	// (0x0002effe) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00035599) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00035599) list_double_graphic_pane_t

0x902c,	// (0x0002efb5) list_double2_graphic_pane_g1_ParamLimits

0x902c,	// (0x0002efb5) list_double2_graphic_pane_g1

0x9087,	// (0x0002f010) list_double2_graphic_pane_g2_ParamLimits

0x9087,	// (0x0002f010) list_double2_graphic_pane_g2

0x9093,	// (0x0002f01c) list_double2_graphic_pane_g3_ParamLimits

0x9093,	// (0x0002f01c) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0003559e) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0003559e) list_double2_graphic_pane_g

0x9004,	// (0x0002ef8d) list_double2_graphic_pane_t1_ParamLimits

0x9004,	// (0x0002ef8d) list_double2_graphic_pane_t1

0x909f,	// (0x0002f028) list_double2_graphic_pane_t2_ParamLimits

0x909f,	// (0x0002f028) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x000355a5) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x000355a5) list_double2_graphic_pane_t

0x90b1,	// (0x0002f03a) list_double_large_graphic_pane_g1_ParamLimits

0x90b1,	// (0x0002f03a) list_double_large_graphic_pane_g1

0x8fe1,	// (0x0002ef6a) list_double_large_graphic_pane_g2_ParamLimits

0x8fe1,	// (0x0002ef6a) list_double_large_graphic_pane_g2

0xebf6,	// (0x00034b7f) list_double_large_graphic_pane_g3_ParamLimits

0xebf6,	// (0x00034b7f) list_double_large_graphic_pane_g3

0x90d0,	// (0x0002f059) list_double_large_graphic_pane_g4_ParamLimits

0x90d0,	// (0x0002f059) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x000355aa) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x000355aa) list_double_large_graphic_pane_g

0x90e3,	// (0x0002f06c) list_double_large_graphic_pane_t1_ParamLimits

0x90e3,	// (0x0002f06c) list_double_large_graphic_pane_t1

0x90fc,	// (0x0002f085) list_double_large_graphic_pane_t2_ParamLimits

0x90fc,	// (0x0002f085) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x000355b5) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x000355b5) list_double_large_graphic_pane_t

0x910e,	// (0x0002f097) list_double2_large_graphic_pane_g1_ParamLimits

0x910e,	// (0x0002f097) list_double2_large_graphic_pane_g1

0x8fe1,	// (0x0002ef6a) list_double2_large_graphic_pane_g2_ParamLimits

0x8fe1,	// (0x0002ef6a) list_double2_large_graphic_pane_g2

0xebf6,	// (0x00034b7f) list_double2_large_graphic_pane_g3_ParamLimits

0xebf6,	// (0x00034b7f) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x000355ba) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x000355ba) list_double2_large_graphic_pane_g

0x911a,	// (0x0002f0a3) list_double2_large_graphic_pane_t1_ParamLimits

0x911a,	// (0x0002f0a3) list_double2_large_graphic_pane_t1

0x9130,	// (0x0002f0b9) list_double2_large_graphic_pane_t2_ParamLimits

0x9130,	// (0x0002f0b9) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x000355c1) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x000355c1) list_double2_large_graphic_pane_t

0x9142,	// (0x0002f0cb) list_double_heading_pane_g1_ParamLimits

0x9142,	// (0x0002f0cb) list_double_heading_pane_g1

0x9153,	// (0x0002f0dc) list_double_heading_pane_g2_ParamLimits

0x9153,	// (0x0002f0dc) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x000355c6) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x000355c6) list_double_heading_pane_g

0x915f,	// (0x0002f0e8) list_double_heading_pane_t1_ParamLimits

0x915f,	// (0x0002f0e8) list_double_heading_pane_t1

0xec18,	// (0x00034ba1) list_double_heading_pane_t2_ParamLimits

0xec18,	// (0x00034ba1) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x000355cb) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x000355cb) list_double_heading_pane_t

0x9175,	// (0x0002f0fe) list_double_graphic_heading_pane_g1_ParamLimits

0x9175,	// (0x0002f0fe) list_double_graphic_heading_pane_g1

0x9142,	// (0x0002f0cb) list_double_graphic_heading_pane_g2_ParamLimits

0x9142,	// (0x0002f0cb) list_double_graphic_heading_pane_g2

0x9153,	// (0x0002f0dc) list_double_graphic_heading_pane_g3_ParamLimits

0x9153,	// (0x0002f0dc) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x000355d0) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x000355d0) list_double_graphic_heading_pane_g

0x9181,	// (0x0002f10a) list_double_graphic_heading_pane_t1_ParamLimits

0x9181,	// (0x0002f10a) list_double_graphic_heading_pane_t1

0x909f,	// (0x0002f028) list_double_graphic_heading_pane_t2_ParamLimits

0x909f,	// (0x0002f028) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x000355d7) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x000355d7) list_double_graphic_heading_pane_t

0x8fe1,	// (0x0002ef6a) list_double_time_pane_g1_ParamLimits

0x8fe1,	// (0x0002ef6a) list_double_time_pane_g1

0xebf6,	// (0x00034b7f) list_double_time_pane_g2_ParamLimits

0xebf6,	// (0x00034b7f) list_double_time_pane_g2

0x0001,

0xf5f6,	// (0x0003557f) list_double_time_pane_g_ParamLimits

0xf5f6,	// (0x0003557f) list_double_time_pane_g

0x9197,	// (0x0002f120) list_double_time_pane_t1_ParamLimits

0x9197,	// (0x0002f120) list_double_time_pane_t1

0x91ad,	// (0x0002f136) list_double_time_pane_t2_ParamLimits

0x91ad,	// (0x0002f136) list_double_time_pane_t2

0x91bf,	// (0x0002f148) list_double_time_pane_t3_ParamLimits

0x91bf,	// (0x0002f148) list_double_time_pane_t3

0x91d1,	// (0x0002f15a) list_double_time_pane_t4_ParamLimits

0x91d1,	// (0x0002f15a) list_double_time_pane_t4

0x0003,

0xf653,	// (0x000355dc) list_double_time_pane_t_ParamLimits

0xf653,	// (0x000355dc) list_double_time_pane_t

0x91e3,	// (0x0002f16c) list_setting_pane_g1_ParamLimits

0x91e3,	// (0x0002f16c) list_setting_pane_g1

0x91ef,	// (0x0002f178) list_setting_pane_g2_ParamLimits

0x91ef,	// (0x0002f178) list_setting_pane_g2

0x0001,

0xf65c,	// (0x000355e5) list_setting_pane_g_ParamLimits

0xf65c,	// (0x000355e5) list_setting_pane_g

0x91fb,	// (0x0002f184) list_setting_pane_t1_ParamLimits

0x91fb,	// (0x0002f184) list_setting_pane_t1

0x9215,	// (0x0002f19e) list_setting_pane_t2_ParamLimits

0x9215,	// (0x0002f19e) list_setting_pane_t2

0x0002,

0xf661,	// (0x000355ea) list_setting_pane_t_ParamLimits

0xf661,	// (0x000355ea) list_setting_pane_t

0x9254,	// (0x0002f1dd) set_value_pane_cp_ParamLimits

0x9254,	// (0x0002f1dd) set_value_pane_cp

0x9260,	// (0x0002f1e9) list_setting_number_pane_g1_ParamLimits

0x9260,	// (0x0002f1e9) list_setting_number_pane_g1

0x926c,	// (0x0002f1f5) list_setting_number_pane_g2_ParamLimits

0x926c,	// (0x0002f1f5) list_setting_number_pane_g2

0x0001,

0xf668,	// (0x000355f1) list_setting_number_pane_g_ParamLimits

0xf668,	// (0x000355f1) list_setting_number_pane_g

0x9278,	// (0x0002f201) list_setting_number_pane_t1_ParamLimits

0x9278,	// (0x0002f201) list_setting_number_pane_t1

0x9291,	// (0x0002f21a) list_setting_number_pane_t2_ParamLimits

0x9291,	// (0x0002f21a) list_setting_number_pane_t2

0x92ab,	// (0x0002f234) list_setting_number_pane_t3_ParamLimits

0x92ab,	// (0x0002f234) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x000355f6) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x000355f6) list_setting_number_pane_t

0x9254,	// (0x0002f1dd) set_value_pane_ParamLimits

0x9254,	// (0x0002f1dd) set_value_pane

0xcc01,	// (0x00032b8a) bg_set_opt_pane_ParamLimits

0xcc01,	// (0x00032b8a) bg_set_opt_pane

0x92ee,	// (0x0002f277) set_value_pane_t1

0xcc22,	// (0x00032bab) slider_set_pane_cp3

0x9fdd,	// (0x0002ff66) volume_small_pane_cp

0xcc2b,	// (0x00032bb4) list_form_gen_pane

0xcc34,	// (0x00032bbd) scroll_pane_cp8

0x92fc,	// (0x0002f285) form_field_data_pane_ParamLimits

0x92fc,	// (0x0002f285) form_field_data_pane

0x9313,	// (0x0002f29c) form_field_data_wide_pane_ParamLimits

0x9313,	// (0x0002f29c) form_field_data_wide_pane

0x9333,	// (0x0002f2bc) form_field_popup_pane_ParamLimits

0x9333,	// (0x0002f2bc) form_field_popup_pane

0x934b,	// (0x0002f2d4) form_field_popup_wide_pane_ParamLimits

0x934b,	// (0x0002f2d4) form_field_popup_wide_pane

0xec4f,	// (0x00034bd8) form_field_slider_pane_ParamLimits

0xec4f,	// (0x00034bd8) form_field_slider_pane

0x9362,	// (0x0002f2eb) form_field_slider_wide_pane_ParamLimits

0x9362,	// (0x0002f2eb) form_field_slider_wide_pane

0xcc45,	// (0x00032bce) data_form_pane

0x937f,	// (0x0002f308) form_field_data_pane_t1

0xcc51,	// (0x00032bda) input_focus_pane

0x9399,	// (0x0002f322) data_form_wide_pane

0x93a5,	// (0x0002f32e) form_field_data_wide_pane_t1

0xcb45,	// (0x00032ace) input_focus_pane_cp6

0x93c4,	// (0x0002f34d) form_field_popup_pane_t1

0xcc51,	// (0x00032bda) input_focus_pane_cp7

0xcc7f,	// (0x00032c08) list_form_pane

0x93e6,	// (0x0002f36f) form_field_popup_wide_pane_t1

0xcc51,	// (0x00032bda) input_focus_pane_cp8

0xcc8b,	// (0x00032c14) list_form_wide_pane

0x9403,	// (0x0002f38c) form_field_slider_pane_t1_ParamLimits

0x9403,	// (0x0002f38c) form_field_slider_pane_t1

0x941b,	// (0x0002f3a4) form_field_slider_pane_t2_ParamLimits

0x941b,	// (0x0002f3a4) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x00035606) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x00035606) form_field_slider_pane_t

0xc891,	// (0x0003281a) input_focus_pane_cp9_ParamLimits

0xc891,	// (0x0003281a) input_focus_pane_cp9

0x9430,	// (0x0002f3b9) slider_cont_pane_ParamLimits

0x9430,	// (0x0002f3b9) slider_cont_pane

0xcc9a,	// (0x00032c23) form_field_slider_wide_pane_t1_ParamLimits

0xcc9a,	// (0x00032c23) form_field_slider_wide_pane_t1

0x9444,	// (0x0002f3cd) form_field_slider_wide_pane_t2_ParamLimits

0x9444,	// (0x0002f3cd) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0003560b) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0003560b) form_field_slider_wide_pane_t

0xc891,	// (0x0003281a) input_focus_pane_cp10_ParamLimits

0xc891,	// (0x0003281a) input_focus_pane_cp10

0x9456,	// (0x0002f3df) slider_cont_pane_cp1_ParamLimits

0x9456,	// (0x0002f3df) slider_cont_pane_cp1

0x946a,	// (0x0002f3f3) slider_form_pane_cp

0xccac,	// (0x00032c35) input_focus_pane_g1

0xccb4,	// (0x00032c3d) input_focus_pane_g2

0xccbc,	// (0x00032c45) input_focus_pane_g3

0xccc4,	// (0x00032c4d) input_focus_pane_g4

0xcccc,	// (0x00032c55) input_focus_pane_g5

0xccd4,	// (0x00032c5d) input_focus_pane_g6

0xccdc,	// (0x00032c65) input_focus_pane_g7

0xcce4,	// (0x00032c6d) input_focus_pane_g8

0xccec,	// (0x00032c75) input_focus_pane_g9

0xc839,	// (0x000327c2) input_focus_pane_g10

0x0009,

0xf687,	// (0x00035610) input_focus_pane_g

0x338a,	// (0x00029313) wait_border_pane_g3_copy1

0x9472,	// (0x0002f3fb) data_form_pane_t1

0xc839,	// (0x000327c2) wait_anim_pane_g1_copy1

0x9588,	// (0x0002f511) data_form_wide_pane_t1

0x948c,	// (0x0002f415) list_form_graphic_pane_cp_ParamLimits

0x948c,	// (0x0002f415) list_form_graphic_pane_cp

0x428a,	// (0x0002a213) slider_form_pane_g1

0x4293,	// (0x0002a21c) slider_form_pane_g2

0x0006,

0xf985,	// (0x0003590e) slider_form_pane_g

0x949e,	// (0x0002f427) list_form_graphic_pane_ParamLimits

0x949e,	// (0x0002f427) list_form_graphic_pane

0x94b1,	// (0x0002f43a) list_form_graphic_pane_g1

0x94b9,	// (0x0002f442) list_form_graphic_pane_t1_ParamLimits

0x94b9,	// (0x0002f442) list_form_graphic_pane_t1

0xc89f,	// (0x00032828) list_highlight_pane_cp5_ParamLimits

0xc89f,	// (0x00032828) list_highlight_pane_cp5

0xec6e,	// (0x00034bf7) find_pane_g1

0xccf4,	// (0x00032c7d) input_find_pane

0x94ce,	// (0x0002f457) input_find_pane_g1_ParamLimits

0x94ce,	// (0x0002f457) input_find_pane_g1

0x94da,	// (0x0002f463) input_find_pane_t1_ParamLimits

0x94da,	// (0x0002f463) input_find_pane_t1

0x94ef,	// (0x0002f478) input_find_pane_t2_ParamLimits

0x94ef,	// (0x0002f478) input_find_pane_t2

0x0001,

0xf69c,	// (0x00035625) input_find_pane_t_ParamLimits

0xf69c,	// (0x00035625) input_find_pane_t

0xccfd,	// (0x00032c86) input_focus_pane_cp5_ParamLimits

0xccfd,	// (0x00032c86) input_focus_pane_cp5

0xcd0b,	// (0x00032c94) bg_popup_window_pane_cp2_ParamLimits

0xcd0b,	// (0x00032c94) bg_popup_window_pane_cp2

0xcd18,	// (0x00032ca1) listscroll_menu_pane_ParamLimits

0xcd18,	// (0x00032ca1) listscroll_menu_pane

0x9ff2,	// (0x0002ff7b) popup_submenu_window_ParamLimits

0x9ff2,	// (0x0002ff7b) popup_submenu_window

0xcd24,	// (0x00032cad) find_popup_pane_g1

0xa01a,	// (0x0002ffa3) input_popup_find_pane_cp

0xccfd,	// (0x00032c86) input_focus_pane_cp4_ParamLimits

0xccfd,	// (0x00032c86) input_focus_pane_cp4

0xcd2c,	// (0x00032cb5) input_popup_find_pane_t1_ParamLimits

0xcd2c,	// (0x00032cb5) input_popup_find_pane_t1

0xc843,	// (0x000327cc) bg_popup_sub_pane_cp

0xcd5a,	// (0x00032ce3) listscroll_popup_sub_pane

0xcd62,	// (0x00032ceb) list_submenu_pane_ParamLimits

0xcd62,	// (0x00032ceb) list_submenu_pane

0xcd73,	// (0x00032cfc) scroll_pane_cp4

0xa032,	// (0x0002ffbb) list_single_popup_submenu_pane_ParamLimits

0xa032,	// (0x0002ffbb) list_single_popup_submenu_pane

0xa046,	// (0x0002ffcf) list_single_popup_submenu_pane_g1

0xa04e,	// (0x0002ffd7) list_single_popup_submenu_pane_t1_ParamLimits

0xa04e,	// (0x0002ffd7) list_single_popup_submenu_pane_t1

0xc891,	// (0x0003281a) bg_active_tab_pane_cp1_ParamLimits

0xc891,	// (0x0003281a) bg_active_tab_pane_cp1

0xcd7b,	// (0x00032d04) tabs_2_active_pane_g1

0xa063,	// (0x0002ffec) tabs_2_active_pane_t1

0xc891,	// (0x0003281a) bg_passive_tab_pane_cp1_ParamLimits

0xc891,	// (0x0003281a) bg_passive_tab_pane_cp1

0xcd7b,	// (0x00032d04) tabs_2_passive_pane_g1

0xa063,	// (0x0002ffec) tabs_2_passive_pane_t1

0xc89f,	// (0x00032828) bg_active_tab_pane_cp4

0xa075,	// (0x0002fffe) tabs_2_long_active_pane_t1

0x0f27,	// (0x00026eb0) bg_passive_tab_pane_cp4

0x1a6c,	// (0x000279f5) list_single_midp_graphic_pane_g4_ParamLimits

0xc89f,	// (0x00032828) bg_active_tab_pane_cp5

0xa088,	// (0x00030011) tabs_3_long_active_pane_t1

0x0f27,	// (0x00026eb0) bg_passive_tab_pane_cp5

0x1a6c,	// (0x000279f5) list_single_midp_graphic_pane_g4

0xc89f,	// (0x00032828) bg_popup_window_pane_cp13_ParamLimits

0xc89f,	// (0x00032828) bg_popup_window_pane_cp13

0xcd83,	// (0x00032d0c) listscroll_popup_fast_pane_ParamLimits

0xcd83,	// (0x00032d0c) listscroll_popup_fast_pane

0xcd8f,	// (0x00032d18) grid_popup_fast_pane_ParamLimits

0xcd8f,	// (0x00032d18) grid_popup_fast_pane

0xcda1,	// (0x00032d2a) scroll_pane_cp9_ParamLimits

0xcda1,	// (0x00032d2a) scroll_pane_cp9

0x5bab,	// (0x0002bb34) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5bab,	// (0x0002bb34) list_single_graphic_hl_pane_t1_cp2

0xcdb4,	// (0x00032d3d) input_focus_pane_cp20_ParamLimits

0xcdb4,	// (0x00032d3d) input_focus_pane_cp20

0xcdc2,	// (0x00032d4b) query_popup_data_pane_t1_ParamLimits

0xcdc2,	// (0x00032d4b) query_popup_data_pane_t1

0xcdd5,	// (0x00032d5e) query_popup_data_pane_t2_ParamLimits

0xcdd5,	// (0x00032d5e) query_popup_data_pane_t2

0xce1b,	// (0x00032da4) query_popup_data_pane_t3_ParamLimits

0xce1b,	// (0x00032da4) query_popup_data_pane_t3

0xce5c,	// (0x00032de5) query_popup_data_pane_t4_ParamLimits

0xce5c,	// (0x00032de5) query_popup_data_pane_t4

0xce98,	// (0x00032e21) query_popup_data_pane_t5_ParamLimits

0xce98,	// (0x00032e21) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0003562a) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0003562a) query_popup_data_pane_t

0xccac,	// (0x00032c35) bg_set_opt_pane_g1

0xccb4,	// (0x00032c3d) bg_set_opt_pane_g2

0xccbc,	// (0x00032c45) bg_set_opt_pane_g3

0xccc4,	// (0x00032c4d) bg_set_opt_pane_g4

0xcccc,	// (0x00032c55) bg_set_opt_pane_g5

0xccd4,	// (0x00032c5d) bg_set_opt_pane_g6

0xccdc,	// (0x00032c65) bg_set_opt_pane_g7

0xcce4,	// (0x00032c6d) bg_set_opt_pane_g8

0xccec,	// (0x00032c75) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x00035635) bg_set_opt_pane_g

0x0532,	// (0x000264bb) control_top_pane_stacon_ParamLimits

0x0532,	// (0x000264bb) control_top_pane_stacon

0x0585,	// (0x0002650e) signal_pane_stacon_ParamLimits

0x0585,	// (0x0002650e) signal_pane_stacon

0x05aa,	// (0x00026533) stacon_top_pane_g1_ParamLimits

0x05aa,	// (0x00026533) stacon_top_pane_g1

0x05cc,	// (0x00026555) title_pane_stacon_ParamLimits

0x05cc,	// (0x00026555) title_pane_stacon

0x05f6,	// (0x0002657f) uni_indicator_pane_stacon_ParamLimits

0x05f6,	// (0x0002657f) uni_indicator_pane_stacon

0x060b,	// (0x00026594) battery_pane_stacon_ParamLimits

0x060b,	// (0x00026594) battery_pane_stacon

0x064f,	// (0x000265d8) control_bottom_pane_stacon_ParamLimits

0x064f,	// (0x000265d8) control_bottom_pane_stacon

0x0672,	// (0x000265fb) navi_pane_stacon_ParamLimits

0x0672,	// (0x000265fb) navi_pane_stacon

0x0695,	// (0x0002661e) stacon_bottom_pane_g1_ParamLimits

0x0695,	// (0x0002661e) stacon_bottom_pane_g1

0x0071,	// (0x00025ffa) aid_levels_signal_lsc_ParamLimits

0x0071,	// (0x00025ffa) aid_levels_signal_lsc

0x0087,	// (0x00026010) signal_pane_stacon_g1_ParamLimits

0x0087,	// (0x00026010) signal_pane_stacon_g1

0x009b,	// (0x00026024) signal_pane_stacon_g2_ParamLimits

0x009b,	// (0x00026024) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x00035648) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x00035648) signal_pane_stacon_g

0x00d0,	// (0x00026059) title_pane_stacon_t1_ParamLimits

0x00d0,	// (0x00026059) title_pane_stacon_t1

0xcedc,	// (0x00032e65) uni_indicator_pane_stacon_g1

0xcee6,	// (0x00032e6f) uni_indicator_pane_stacon_g2

0xcef0,	// (0x00032e79) uni_indicator_pane_stacon_g3

0xcefa,	// (0x00032e83) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x00035654) uni_indicator_pane_stacon_g

0x00f5,	// (0x0002607e) control_top_pane_stacon_g1

0x00fd,	// (0x00026086) control_top_pane_stacon_t1_ParamLimits

0x00fd,	// (0x00026086) control_top_pane_stacon_t1

0x0134,	// (0x000260bd) aid_levels_battery_lsc_ParamLimits

0x0134,	// (0x000260bd) aid_levels_battery_lsc

0x014b,	// (0x000260d4) battery_pane_stacon_g1_ParamLimits

0x014b,	// (0x000260d4) battery_pane_stacon_g1

0x015e,	// (0x000260e7) battery_pane_stacon_g2_ParamLimits

0x015e,	// (0x000260e7) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0003565d) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0003565d) battery_pane_stacon_g

0x019c,	// (0x00026125) navi_icon_pane_stacon

0x01b0,	// (0x00026139) navi_navi_pane_stacon

0x019c,	// (0x00026125) navi_text_pane_stacon

0x00f5,	// (0x0002607e) control_bottom_pane_stacon_g1

0x01c4,	// (0x0002614d) control_bottom_pane_stacon_t1_ParamLimits

0x01c4,	// (0x0002614d) control_bottom_pane_stacon_t1

0xa0b4,	// (0x0003003d) grid_app_pane_ParamLimits

0xa0b4,	// (0x0003003d) grid_app_pane

0xa0ec,	// (0x00030075) scroll_pane_cp15_ParamLimits

0xa0ec,	// (0x00030075) scroll_pane_cp15

0xa101,	// (0x0003008a) cell_app_pane_ParamLimits

0xa101,	// (0x0003008a) cell_app_pane

0xa146,	// (0x000300cf) cell_app_pane_g1_ParamLimits

0xa146,	// (0x000300cf) cell_app_pane_g1

0xcf1e,	// (0x00032ea7) cell_app_pane_g2_ParamLimits

0xcf1e,	// (0x00032ea7) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x00035662) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x00035662) cell_app_pane_g

0xa16a,	// (0x000300f3) cell_app_pane_t1_ParamLimits

0xa16a,	// (0x000300f3) cell_app_pane_t1

0xcf2a,	// (0x00032eb3) grid_highlight_pane_ParamLimits

0xcf2a,	// (0x00032eb3) grid_highlight_pane

0xccac,	// (0x00032c35) cell_highlight_pane_g1

0xccb4,	// (0x00032c3d) cell_highlight_pane_g2

0xccbc,	// (0x00032c45) cell_highlight_pane_g3

0xccc4,	// (0x00032c4d) cell_highlight_pane_g4

0xcccc,	// (0x00032c55) cell_highlight_pane_g5

0xccd4,	// (0x00032c5d) cell_highlight_pane_g6

0xccdc,	// (0x00032c65) cell_highlight_pane_g7

0xcce4,	// (0x00032c6d) cell_highlight_pane_g8

0xccec,	// (0x00032c75) cell_highlight_pane_g9

0xc839,	// (0x000327c2) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x00035610) cell_highlight_pane_g

0xcf3b,	// (0x00032ec4) bg_scroll_pane

0xa18a,	// (0x00030113) scroll_handle_pane

0xcf82,	// (0x00032f0b) scroll_bg_pane_g1

0xcf97,	// (0x00032f20) scroll_bg_pane_g2

0xcfaf,	// (0x00032f38) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x00035667) scroll_bg_pane_g

0xa19e,	// (0x00030127) scroll_handle_focus_pane_ParamLimits

0xa19e,	// (0x00030127) scroll_handle_focus_pane

0xcf82,	// (0x00032f0b) scroll_handle_pane_g1

0xcfc4,	// (0x00032f4d) scroll_handle_pane_g2

0xcfaf,	// (0x00032f38) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0003566e) scroll_handle_pane_g

0xccfd,	// (0x00032c86) bg_popup_sub_pane_cp21_ParamLimits

0xccfd,	// (0x00032c86) bg_popup_sub_pane_cp21

0xa1ab,	// (0x00030134) popup_fep_japan_predictive_window_t1_ParamLimits

0xa1ab,	// (0x00030134) popup_fep_japan_predictive_window_t1

0xa1c2,	// (0x0003014b) popup_fep_japan_predictive_window_t2_ParamLimits

0xa1c2,	// (0x0003014b) popup_fep_japan_predictive_window_t2

0xa1f5,	// (0x0003017e) popup_fep_japan_predictive_window_t3_ParamLimits

0xa1f5,	// (0x0003017e) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x00035675) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x00035675) popup_fep_japan_predictive_window_t

0xc843,	// (0x000327cc) bg_popup_sub_pane_cp23

0xa22c,	// (0x000301b5) listscroll_japin_cand_pane

0xcfd8,	// (0x00032f61) popup_fep_japan_candidate_window_t1

0xcfe6,	// (0x00032f6f) candidate_pane_ParamLimits

0xcfe6,	// (0x00032f6f) candidate_pane

0xa234,	// (0x000301bd) scroll_pane_cp30

0xcff8,	// (0x00032f81) list_single_popup_jap_candidate_pane_ParamLimits

0xcff8,	// (0x00032f81) list_single_popup_jap_candidate_pane

0xc843,	// (0x000327cc) list_highlight_pane_cp30

0xd00d,	// (0x00032f96) list_single_popup_jap_candidate_pane_t1

0xd01c,	// (0x00032fa5) level_1_signal

0xd029,	// (0x00032fb2) level_2_signal

0xd036,	// (0x00032fbf) level_3_signal

0xd043,	// (0x00032fcc) level_4_signal

0xd050,	// (0x00032fd9) level_5_signal

0xd05d,	// (0x00032fe6) level_6_signal

0xd06a,	// (0x00032ff3) level_7_signal

0xd01c,	// (0x00032fa5) level_1_battery

0xd029,	// (0x00032fb2) level_2_battery

0xd036,	// (0x00032fbf) level_3_battery

0xd043,	// (0x00032fcc) level_4_battery

0xd050,	// (0x00032fd9) level_5_battery

0xd05d,	// (0x00032fe6) level_6_battery

0xd06a,	// (0x00032ff3) level_7_battery

0xd08f,	// (0x00033018) list_menu_pane_ParamLimits

0xd08f,	// (0x00033018) list_menu_pane

0xd0a5,	// (0x0003302e) scroll_pane_cp25_ParamLimits

0xd0a5,	// (0x0003302e) scroll_pane_cp25

0xa23c,	// (0x000301c5) list_double2_graphic_pane_cp2_ParamLimits

0xa23c,	// (0x000301c5) list_double2_graphic_pane_cp2

0xa23c,	// (0x000301c5) list_double2_large_graphic_pane_cp2_ParamLimits

0xa23c,	// (0x000301c5) list_double2_large_graphic_pane_cp2

0xa23c,	// (0x000301c5) list_double2_pane_cp2_ParamLimits

0xa23c,	// (0x000301c5) list_double2_pane_cp2

0xa23c,	// (0x000301c5) list_double_graphic_pane_cp2_ParamLimits

0xa23c,	// (0x000301c5) list_double_graphic_pane_cp2

0xa23c,	// (0x000301c5) list_double_large_graphic_pane_cp2_ParamLimits

0xa23c,	// (0x000301c5) list_double_large_graphic_pane_cp2

0xa23c,	// (0x000301c5) list_double_number_pane_cp2_ParamLimits

0xa23c,	// (0x000301c5) list_double_number_pane_cp2

0xa23c,	// (0x000301c5) list_double_pane_cp2_ParamLimits

0xa23c,	// (0x000301c5) list_double_pane_cp2

0xa24b,	// (0x000301d4) list_single_2graphic_pane_cp2_ParamLimits

0xa24b,	// (0x000301d4) list_single_2graphic_pane_cp2

0xa24b,	// (0x000301d4) list_single_graphic_heading_pane_cp2_ParamLimits

0xa24b,	// (0x000301d4) list_single_graphic_heading_pane_cp2

0xa24b,	// (0x000301d4) list_single_graphic_pane_cp2_ParamLimits

0xa24b,	// (0x000301d4) list_single_graphic_pane_cp2

0xa24b,	// (0x000301d4) list_single_heading_pane_cp2_ParamLimits

0xa24b,	// (0x000301d4) list_single_heading_pane_cp2

0xd0ce,	// (0x00033057) list_single_large_graphic_pane_cp2_ParamLimits

0xd0ce,	// (0x00033057) list_single_large_graphic_pane_cp2

0xa24b,	// (0x000301d4) list_single_number_heading_pane_cp2_ParamLimits

0xa24b,	// (0x000301d4) list_single_number_heading_pane_cp2

0xa24b,	// (0x000301d4) list_single_number_pane_cp2_ParamLimits

0xa24b,	// (0x000301d4) list_single_number_pane_cp2

0xa24b,	// (0x000301d4) list_single_pane_cp2_ParamLimits

0xa24b,	// (0x000301d4) list_single_pane_cp2

0xd0e8,	// (0x00033071) bg_popup_sub_pane_cp22

0x0475,	// (0x000263fe) popup_side_volume_key_window_g1

0x0499,	// (0x00026422) popup_side_volume_key_window_t1

0xa313,	// (0x0003029c) volume_small_pane_cp1

0xc891,	// (0x0003281a) bg_popup_sub_pane_cp24_ParamLimits

0xc891,	// (0x0003281a) bg_popup_sub_pane_cp24

0xd0fe,	// (0x00033087) fep_china_uni_candidate_pane_ParamLimits

0xd0fe,	// (0x00033087) fep_china_uni_candidate_pane

0xd112,	// (0x0003309b) fep_china_uni_entry_pane

0xd122,	// (0x000330ab) popup_fep_china_uni_window_g1

0xa31b,	// (0x000302a4) fep_china_uni_entry_pane_g1

0xa323,	// (0x000302ac) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x000356a6) fep_china_uni_entry_pane_g

0xd13e,	// (0x000330c7) fep_entry_item_pane

0xd148,	// (0x000330d1) fep_candidate_item_pane

0xa32b,	// (0x000302b4) fep_china_uni_candidate_pane_g1

0xd150,	// (0x000330d9) fep_china_uni_candidate_pane_g2

0xd158,	// (0x000330e1) fep_china_uni_candidate_pane_g3

0xa333,	// (0x000302bc) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x000356ab) fep_china_uni_candidate_pane_g

0xc839,	// (0x000327c2) fep_entry_item_pane_g1

0xd160,	// (0x000330e9) fep_entry_item_pane_t1_ParamLimits

0xd160,	// (0x000330e9) fep_entry_item_pane_t1

0xd176,	// (0x000330ff) fep_candidate_item_pane_t1_ParamLimits

0xd176,	// (0x000330ff) fep_candidate_item_pane_t1

0xd18b,	// (0x00033114) fep_candidate_item_pane_t2_ParamLimits

0xd18b,	// (0x00033114) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x000356b4) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x000356b4) fep_candidate_item_pane_t

0xc89f,	// (0x00032828) list_highlight_pane_cp31_ParamLimits

0xc89f,	// (0x00032828) list_highlight_pane_cp31

0xd19d,	// (0x00033126) level_1_signal_lsc

0xd1a6,	// (0x0003312f) level_2_signal_lsc

0xd1af,	// (0x00033138) level_3_signal_lsc

0xd1b8,	// (0x00033141) level_4_signal_lsc

0xd1c1,	// (0x0003314a) level_5_signal_lsc

0xd1ca,	// (0x00033153) level_6_signal_lsc

0xd1d3,	// (0x0003315c) level_7_signal_lsc

0xd1d3,	// (0x0003315c) level_1_battery_lsc

0xd1dc,	// (0x00033165) level_2_battery_lsc

0xd1e5,	// (0x0003316e) level_3_battery_lsc

0xd1ee,	// (0x00033177) level_4_battery_lsc

0xd1f7,	// (0x00033180) level_5_battery_lsc

0xd200,	// (0x00033189) level_6_battery_lsc

0xd19d,	// (0x00033126) level_7_battery_lsc

0xd209,	// (0x00033192) scroll_handle_focus_pane_g1

0xd212,	// (0x0003319b) scroll_handle_focus_pane_g2

0xd21b,	// (0x000331a4) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x000356b9) scroll_handle_focus_pane_g

0x9504,	// (0x0002f48d) list_single_2graphic_pane_g1_ParamLimits

0x9504,	// (0x0002f48d) list_single_2graphic_pane_g1

0x8f98,	// (0x0002ef21) list_single_2graphic_pane_g2_ParamLimits

0x8f98,	// (0x0002ef21) list_single_2graphic_pane_g2

0xeb42,	// (0x00034acb) list_single_2graphic_pane_g3_ParamLimits

0xeb42,	// (0x00034acb) list_single_2graphic_pane_g3

0xec77,	// (0x00034c00) list_single_2graphic_pane_g4_ParamLimits

0xec77,	// (0x00034c00) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x000356c0) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x000356c0) list_single_2graphic_pane_g

0x9510,	// (0x0002f499) list_single_2graphic_pane_t1_ParamLimits

0x9510,	// (0x0002f499) list_single_2graphic_pane_t1

0x953e,	// (0x0002f4c7) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x953e,	// (0x0002f4c7) list_double2_graphic_large_graphic_pane_g1

0x8fe1,	// (0x0002ef6a) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8fe1,	// (0x0002ef6a) list_double2_graphic_large_graphic_pane_g2

0xebf6,	// (0x00034b7f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xebf6,	// (0x00034b7f) list_double2_graphic_large_graphic_pane_g3

0x9550,	// (0x0002f4d9) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9550,	// (0x0002f4d9) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x000356c9) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x000356c9) list_double2_graphic_large_graphic_pane_g

0x9197,	// (0x0002f120) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9197,	// (0x0002f120) list_double2_graphic_large_graphic_pane_t1

0x955c,	// (0x0002f4e5) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x955c,	// (0x0002f4e5) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x000356d2) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x000356d2) list_double2_graphic_large_graphic_pane_t

0xa3ae,	// (0x00030337) popup_fast_swap_window_ParamLimits

0xa3ae,	// (0x00030337) popup_fast_swap_window

0xa3ca,	// (0x00030353) popup_side_volume_key_window

0x0794,	// (0x0002671d) stacon_top_pane

0x079e,	// (0x00026727) status_pane_ParamLimits

0x079e,	// (0x00026727) status_pane

0xa3e4,	// (0x0003036d) status_small_pane

0xc843,	// (0x000327cc) control_pane

0xc843,	// (0x000327cc) stacon_bottom_pane

0xcc34,	// (0x00032bbd) scroll_pane_cp121

0xcc2b,	// (0x00032bb4) set_content_pane

0xa33b,	// (0x000302c4) bg_active_tab_pane_g1_cp1

0xa344,	// (0x000302cd) bg_active_tab_pane_g2_cp1

0xa34d,	// (0x000302d6) bg_active_tab_pane_g3_cp1

0xa33b,	// (0x000302c4) bg_passive_tab_pane_g1_cp1

0xa344,	// (0x000302cd) bg_passive_tab_pane_g2_cp1

0xa34d,	// (0x000302d6) bg_passive_tab_pane_g3_cp1

0xa356,	// (0x000302df) bg_active_tab_pane_g1_cp2

0xa344,	// (0x000302cd) bg_active_tab_pane_g2_cp2

0xa35f,	// (0x000302e8) bg_active_tab_pane_g3_cp2

0xa356,	// (0x000302df) bg_passive_tab_pane_g1_cp2

0xa344,	// (0x000302cd) bg_passive_tab_pane_g2_cp2

0xa35f,	// (0x000302e8) bg_passive_tab_pane_g3_cp2

0xa368,	// (0x000302f1) bg_active_tab_pane_g1_cp3

0xa344,	// (0x000302cd) bg_active_tab_pane_g2_cp3

0xa371,	// (0x000302fa) bg_active_tab_pane_g3_cp3

0xa368,	// (0x000302f1) bg_passive_tab_pane_g1_cp3

0xa344,	// (0x000302cd) bg_passive_tab_pane_g2_cp3

0xa371,	// (0x000302fa) bg_passive_tab_pane_g3_cp3

0xa37a,	// (0x00030303) bg_active_tab_pane_g1_cp4

0xa344,	// (0x000302cd) bg_active_tab_pane_g2_cp4

0xa385,	// (0x0003030e) bg_active_tab_pane_g3_cp4

0xa37a,	// (0x00030303) bg_passive_tab_pane_g1_cp4

0xa344,	// (0x000302cd) bg_passive_tab_pane_g2_cp4

0xa385,	// (0x0003030e) bg_passive_tab_pane_g3_cp4

0xa390,	// (0x00030319) bg_active_tab_pane_g1_cp5

0xa344,	// (0x000302cd) bg_active_tab_pane_g2_cp5

0xa399,	// (0x00030322) bg_active_tab_pane_g3_cp5

0xa390,	// (0x00030319) bg_passive_tab_pane_g1_cp5

0xa344,	// (0x000302cd) bg_passive_tab_pane_g2_cp5

0xa399,	// (0x00030322) bg_passive_tab_pane_g3_cp5

0x488b,	// (0x0002a814) list_set_graphic_pane_ParamLimits

0x488b,	// (0x0002a814) list_set_graphic_pane

0xc843,	// (0x000327cc) bg_set_opt_pane_cp4

0x06e3,	// (0x0002666c) list_set_graphic_pane_g1_ParamLimits

0x06e3,	// (0x0002666c) list_set_graphic_pane_g1

0x06ef,	// (0x00026678) list_set_graphic_pane_g2_ParamLimits

0x06ef,	// (0x00026678) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x000356d7) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x000356d7) list_set_graphic_pane_g

0x0009,

0xfacc,	// (0x00035a55) volume_small_pane_cp_g

0xa3a2,	// (0x0003032b) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa3a2,	// (0x0003032b) list_double2_large_graphic_pane_g1_cp2

0x071d,	// (0x000266a6) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x071d,	// (0x000266a6) list_double2_large_graphic_pane_g2_cp2

0x072e,	// (0x000266b7) list_double2_large_graphic_pane_g3_cp2

0x0736,	// (0x000266bf) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x0736,	// (0x000266bf) list_double2_large_graphic_pane_t1_cp2

0x074c,	// (0x000266d5) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x074c,	// (0x000266d5) list_double2_large_graphic_pane_t2_cp2

0xb8f8,	// (0x00031881) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb8f8,	// (0x00031881) list_double_large_graphic_pane_g1_cp2

0x3e4c,	// (0x00029dd5) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3e4c,	// (0x00029dd5) list_double_large_graphic_pane_g2_cp2

0x08b9,	// (0x00026842) list_double_large_graphic_pane_g3_cp2

0x3e5d,	// (0x00029de6) list_double_large_graphic_pane_g4_cp

0x3e65,	// (0x00029dee) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3e65,	// (0x00029dee) list_double_large_graphic_pane_t1_cp2

0x3e7c,	// (0x00029e05) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3e7c,	// (0x00029e05) list_double_large_graphic_pane_t2_cp2

0x07b7,	// (0x00026740) list_double2_graphic_pane_g1_cp2_ParamLimits

0x07b7,	// (0x00026740) list_double2_graphic_pane_g1_cp2

0x07c5,	// (0x0002674e) list_double2_graphic_pane_g2_cp2_ParamLimits

0x07c5,	// (0x0002674e) list_double2_graphic_pane_g2_cp2

0x07d6,	// (0x0002675f) list_double2_graphic_pane_g3_cp2

0x07e0,	// (0x00026769) list_double2_graphic_pane_t1_cp2_ParamLimits

0x07e0,	// (0x00026769) list_double2_graphic_pane_t1_cp2

0x07f6,	// (0x0002677f) list_double2_graphic_pane_t2_cp2_ParamLimits

0x07f6,	// (0x0002677f) list_double2_graphic_pane_t2_cp2

0xd224,	// (0x000331ad) list_single_number_heading_pane_g1_cp2_ParamLimits

0xd224,	// (0x000331ad) list_single_number_heading_pane_g1_cp2

0x0808,	// (0x00026791) list_single_number_heading_pane_g2_cp2

0x0810,	// (0x00026799) list_single_number_heading_pane_t1_cp2_ParamLimits

0x0810,	// (0x00026799) list_single_number_heading_pane_t1_cp2

0x0826,	// (0x000267af) list_single_number_heading_pane_t2_cp2_ParamLimits

0x0826,	// (0x000267af) list_single_number_heading_pane_t2_cp2

0x0838,	// (0x000267c1) list_single_number_heading_pane_t3_cp2_ParamLimits

0x0838,	// (0x000267c1) list_single_number_heading_pane_t3_cp2

0xd224,	// (0x000331ad) list_single_heading_pane_g1_cp2_ParamLimits

0xd224,	// (0x000331ad) list_single_heading_pane_g1_cp2

0x0808,	// (0x00026791) list_single_heading_pane_g2_cp2

0x0810,	// (0x00026799) list_single_heading_pane_t1_cp2_ParamLimits

0x0810,	// (0x00026799) list_single_heading_pane_t1_cp2

0x3c45,	// (0x00029bce) list_single_heading_pane_t2_cp2_ParamLimits

0x3c45,	// (0x00029bce) list_single_heading_pane_t2_cp2

0x3b8d,	// (0x00029b16) list_double_graphic_pane_g1_cp2_ParamLimits

0x3b8d,	// (0x00029b16) list_double_graphic_pane_g1_cp2

0x3b99,	// (0x00029b22) list_double_graphic_pane_g2_cp2_ParamLimits

0x3b99,	// (0x00029b22) list_double_graphic_pane_g2_cp2

0x3ba8,	// (0x00029b31) list_double_graphic_pane_g3_cp2

0x3bb0,	// (0x00029b39) list_double_graphic_pane_t1_cp2_ParamLimits

0x3bb0,	// (0x00029b39) list_double_graphic_pane_t1_cp2

0x3bc6,	// (0x00029b4f) list_double_graphic_pane_t2_cp2_ParamLimits

0x3bc6,	// (0x00029b4f) list_double_graphic_pane_t2_cp2

0x08ad,	// (0x00026836) list_double_number_pane_g1_cp2_ParamLimits

0x08ad,	// (0x00026836) list_double_number_pane_g1_cp2

0x08b9,	// (0x00026842) list_double_number_pane_g2_cp2

0x3b51,	// (0x00029ada) list_double_number_pane_t1_cp2_ParamLimits

0x3b51,	// (0x00029ada) list_double_number_pane_t1_cp2

0x3b65,	// (0x00029aee) list_double_number_pane_t2_cp2_ParamLimits

0x3b65,	// (0x00029aee) list_double_number_pane_t2_cp2

0x3b7b,	// (0x00029b04) list_double_number_pane_t3_cp2_ParamLimits

0x3b7b,	// (0x00029b04) list_double_number_pane_t3_cp2

0x3a3a,	// (0x000299c3) list_single_graphic_pane_g1_cp2_ParamLimits

0x3a3a,	// (0x000299c3) list_single_graphic_pane_g1_cp2

0x0911,	// (0x0002689a) list_single_graphic_pane_g2_cp2_ParamLimits

0x0911,	// (0x0002689a) list_single_graphic_pane_g2_cp2

0x091d,	// (0x000268a6) list_single_graphic_pane_g3_cp2

0x3a10,	// (0x00029999) list_single_graphic_pane_t1_cp2_ParamLimits

0x3a10,	// (0x00029999) list_single_graphic_pane_t1_cp2

0x0911,	// (0x0002689a) list_single_number_pane_g1_cp2_ParamLimits

0x0911,	// (0x0002689a) list_single_number_pane_g1_cp2

0x091d,	// (0x000268a6) list_single_number_pane_g2_cp2

0x3a10,	// (0x00029999) list_single_number_pane_t1_cp2_ParamLimits

0x3a10,	// (0x00029999) list_single_number_pane_t1_cp2

0x3a26,	// (0x000299af) list_single_number_pane_t2_cp2_ParamLimits

0x3a26,	// (0x000299af) list_single_number_pane_t2_cp2

0x071d,	// (0x000266a6) list_double2_pane_g1_cp2_ParamLimits

0x071d,	// (0x000266a6) list_double2_pane_g1_cp2

0x072e,	// (0x000266b7) list_double2_pane_g2_cp2

0x0885,	// (0x0002680e) list_double2_pane_t1_cp2_ParamLimits

0x0885,	// (0x0002680e) list_double2_pane_t1_cp2

0x089b,	// (0x00026824) list_double2_pane_t2_cp2_ParamLimits

0x089b,	// (0x00026824) list_double2_pane_t2_cp2

0x08ad,	// (0x00026836) list_double_pane_g1_cp2_ParamLimits

0x08ad,	// (0x00026836) list_double_pane_g1_cp2

0x08b9,	// (0x00026842) list_double_pane_g2_cp2

0x08c1,	// (0x0002684a) list_double_pane_t1_cp2_ParamLimits

0x08c1,	// (0x0002684a) list_double_pane_t1_cp2

0x08d7,	// (0x00026860) list_double_pane_t2_cp2_ParamLimits

0x08d7,	// (0x00026860) list_double_pane_t2_cp2

0xa3ef,	// (0x00030378) list_single_pane_cp2_g3

0x0911,	// (0x0002689a) list_single_pane_g1_cp2_ParamLimits

0x0911,	// (0x0002689a) list_single_pane_g1_cp2

0x091d,	// (0x000268a6) list_single_pane_g2_cp2

0x0925,	// (0x000268ae) list_single_pane_t1_cp2_ParamLimits

0x0925,	// (0x000268ae) list_single_pane_t1_cp2

0xa3f7,	// (0x00030380) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa3f7,	// (0x00030380) list_single_large_graphic_pane_g1_cp2

0x0949,	// (0x000268d2) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x0949,	// (0x000268d2) list_single_large_graphic_pane_g2_cp2

0x0955,	// (0x000268de) list_single_large_graphic_pane_g3_cp2

0xa403,	// (0x0003038c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa403,	// (0x0003038c) list_single_large_graphic_pane_g4_cp1

0x0977,	// (0x00026900) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x0977,	// (0x00026900) list_single_large_graphic_pane_t1_cp2

0x39dc,	// (0x00029965) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x39dc,	// (0x00029965) list_single_graphic_heading_pane_g1_cp2

0x39a9,	// (0x00029932) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x39a9,	// (0x00029932) list_single_graphic_heading_pane_g4_cp2

0x091d,	// (0x000268a6) list_single_graphic_heading_pane_g5_cp2

0x39e8,	// (0x00029971) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x39e8,	// (0x00029971) list_single_graphic_heading_pane_t1_cp2

0x39fe,	// (0x00029987) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x39fe,	// (0x00029987) list_single_graphic_heading_pane_t2_cp2

0x399d,	// (0x00029926) list_single_2graphic_pane_g1_cp2_ParamLimits

0x399d,	// (0x00029926) list_single_2graphic_pane_g1_cp2

0x39a9,	// (0x00029932) list_single_2graphic_pane_g2_cp2_ParamLimits

0x39a9,	// (0x00029932) list_single_2graphic_pane_g2_cp2

0x091d,	// (0x000268a6) list_single_2graphic_pane_g3_cp2

0x39ba,	// (0x00029943) list_single_2graphic_pane_g4_cp2_ParamLimits

0x39ba,	// (0x00029943) list_single_2graphic_pane_g4_cp2

0x39c6,	// (0x0002994f) list_single_2graphic_pane_t1_cp2_ParamLimits

0x39c6,	// (0x0002994f) list_single_2graphic_pane_t1_cp2

0xc839,	// (0x000327c2) list_highlight_pane_g10_cp1

0x3585,	// (0x0002950e) list_highlight_pane_g1_cp1

0x358d,	// (0x00029516) list_highlight_pane_g2_cp1

0x3595,	// (0x0002951e) list_highlight_pane_g3_cp1

0x359d,	// (0x00029526) list_highlight_pane_g4_cp1

0x35a5,	// (0x0002952e) list_highlight_pane_g5_cp1

0x35ad,	// (0x00029536) list_highlight_pane_g6_cp1

0x35b5,	// (0x0002953e) list_highlight_pane_g7_cp1

0x35bd,	// (0x00029546) list_highlight_pane_g8_cp1

0x35c5,	// (0x0002954e) list_highlight_pane_g9_cp1

0xb685,	// (0x0003160e) form_field_slider_pane_t3

0xb693,	// (0x0003161c) form_field_slider_pane_t4

0x34c9,	// (0x00029452) slider_form_pane_ParamLimits

0x34c9,	// (0x00029452) slider_form_pane

0xc843,	// (0x000327cc) control_abbreviations

0xc843,	// (0x000327cc) control_conventions

0xc843,	// (0x000327cc) control_definitions

0xc843,	// (0x000327cc) format_table_attribute

0xb8cf,	// (0x00031858) bg_popup_preview_window_pane_g9

0xc843,	// (0x000327cc) format_table_data2

0xc843,	// (0x000327cc) format_table_data3

0xc843,	// (0x000327cc) format_table_data_example

0x0008,

0xc843,	// (0x000327cc) intro_purpose

0xf8e5,	// (0x0003586e) bg_popup_preview_window_pane_g

0xc843,	// (0x000327cc) texts_category

0xc843,	// (0x000327cc) texts_graphics

0x098d,	// (0x00026916) text_digital

0x099c,	// (0x00026925) text_primary

0x09ab,	// (0x00026934) text_primary_small

0x09ba,	// (0x00026943) text_secondary

0x09c9,	// (0x00026952) text_title

0xbcf2,	// (0x00031c7b) bg_passive_tab_pane_g1_cp3_srt

0xa344,	// (0x000302cd) bg_passive_tab_pane_g2_cp3_srt

0xbcfb,	// (0x00031c84) bg_passive_tab_pane_g3_cp3_srt

0xc891,	// (0x0003281a) bg_active_tab_pane_cp3_srt_ParamLimits

0xc891,	// (0x0003281a) bg_active_tab_pane_cp3_srt

0xbd04,	// (0x00031c8d) tabs_4_active_pane_srt_g1

0xbd0c,	// (0x00031c95) tabs_4_active_pane_srt_t1_ParamLimits

0xbd0c,	// (0x00031c95) tabs_4_active_pane_srt_t1

0xbcf2,	// (0x00031c7b) bg_active_tab_pane_g1_cp3_copy1

0xa344,	// (0x000302cd) bg_active_tab_pane_g2_cp3_copy1

0xbcfb,	// (0x00031c84) bg_active_tab_pane_g3_cp3_copy1

0xc89f,	// (0x00032828) tabs_2_long_active_pane_srt_ParamLimits

0xc89f,	// (0x00032828) tabs_2_long_active_pane_srt

0xc89f,	// (0x00032828) tabs_2_long_passive_pane_srt_ParamLimits

0xc89f,	// (0x00032828) tabs_2_long_passive_pane_srt

0x0f27,	// (0x00026eb0) bg_passive_tab_pane_cp4_srt_ParamLimits

0x0f27,	// (0x00026eb0) bg_passive_tab_pane_cp4_srt

0xba39,	// (0x000319c2) bg_passive_tab_pane_g1_cp4_srt

0xa344,	// (0x000302cd) bg_passive_tab_pane_g2_cp4_srt

0xba42,	// (0x000319cb) bg_passive_tab_pane_g3_cp4_srt

0xc89f,	// (0x00032828) bg_active_tab_pane_cp4_srt_ParamLimits

0xc89f,	// (0x00032828) bg_active_tab_pane_cp4_srt

0xba4b,	// (0x000319d4) tabs_2_long_active_pane_srt_t1_ParamLimits

0xba4b,	// (0x000319d4) tabs_2_long_active_pane_srt_t1

0xba39,	// (0x000319c2) bg_active_tab_pane_g1_cp4_srt

0xa344,	// (0x000302cd) bg_active_tab_pane_g2_cp4_srt

0xba42,	// (0x000319cb) bg_active_tab_pane_g3_cp4_srt

0xc891,	// (0x0003281a) tabs_3_long_active_pane_srt_ParamLimits

0xc891,	// (0x0003281a) tabs_3_long_active_pane_srt

0xc891,	// (0x0003281a) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc891,	// (0x0003281a) tabs_3_long_passive_pane_cp_srt

0xc891,	// (0x0003281a) tabs_3_long_passive_pane_srt_ParamLimits

0xc891,	// (0x0003281a) tabs_3_long_passive_pane_srt

0x0f27,	// (0x00026eb0) bg_passive_tab_pane_cp5_srt_ParamLimits

0x0f27,	// (0x00026eb0) bg_passive_tab_pane_cp5_srt

0xa390,	// (0x00030319) bg_passive_tab_pane_g1_cp5_srt

0xa344,	// (0x000302cd) bg_passive_tab_pane_g2_cp5_srt

0xa399,	// (0x00030322) bg_passive_tab_pane_g3_cp5_srt

0xc89f,	// (0x00032828) bg_active_tab_pane_cp5_srt_ParamLimits

0xc89f,	// (0x00032828) bg_active_tab_pane_cp5_srt

0xba23,	// (0x000319ac) tabs_3_long_active_pane_srt_t1_ParamLimits

0xba23,	// (0x000319ac) tabs_3_long_active_pane_srt_t1

0xa390,	// (0x00030319) bg_active_tab_pane_g1_cp5_srt

0xa344,	// (0x000302cd) bg_active_tab_pane_g2_cp5_srt

0xa399,	// (0x00030322) bg_active_tab_pane_g3_cp5_srt

0x409d,	// (0x0002a026) navi_text_pane_srt_t1

0x4095,	// (0x0002a01e) navi_icon_pane_srt_g1

0x0c37,	// (0x00026bc0) midp_editing_number_pane_srt

0x09d8,	// (0x00026961) midp_ticker_pane_srt

0x0c3f,	// (0x00026bc8) midp_ticker_pane_srt_g1

0x0c47,	// (0x00026bd0) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x000356f6) midp_ticker_pane_srt_g

0x0c4f,	// (0x00026bd8) midp_ticker_pane_srt_t1

0x4086,	// (0x0002a00f) midp_editing_number_pane_t1_copy1

0x0f27,	// (0x00026eb0) listscroll_midp_pane

0x0f27,	// (0x00026eb0) midp_form_pane

0xa47c,	// (0x00030405) midp_info_popup_window_ParamLimits

0xa47c,	// (0x00030405) midp_info_popup_window

0xccfd,	// (0x00032c86) bg_popup_sub_pane_cp50_ParamLimits

0xccfd,	// (0x00032c86) bg_popup_sub_pane_cp50

0x31cd,	// (0x00029156) listscroll_midp_info_pane_ParamLimits

0x31cd,	// (0x00029156) listscroll_midp_info_pane

0x31b5,	// (0x0002913e) listscroll_form_midp_pane_ParamLimits

0x31b5,	// (0x0002913e) listscroll_form_midp_pane

0x31c1,	// (0x0002914a) scroll_bar_cp050

0xb561,	// (0x000314ea) list_midp_pane

0xbee6,	// (0x00031e6f) signal_pane_g2_cp

0x30cf,	// (0x00029058) listscroll_midp_info_pane_t1_ParamLimits

0x30cf,	// (0x00029058) listscroll_midp_info_pane_t1

0xb4b3,	// (0x0003143c) listscroll_midp_info_pane_t2_ParamLimits

0xb4b3,	// (0x0003143c) listscroll_midp_info_pane_t2

0xb4f1,	// (0x0003147a) listscroll_midp_info_pane_t3_ParamLimits

0xb4f1,	// (0x0003147a) listscroll_midp_info_pane_t3

0xb52b,	// (0x000314b4) listscroll_midp_info_pane_t4_ParamLimits

0xb52b,	// (0x000314b4) listscroll_midp_info_pane_t4

0x0003,

0xf820,	// (0x000357a9) listscroll_midp_info_pane_t_ParamLimits

0xf820,	// (0x000357a9) listscroll_midp_info_pane_t

0xcd73,	// (0x00032cfc) scroll_pane_cp21

0x306f,	// (0x00028ff8) form_midp_field_choice_group_pane

0xb476,	// (0x000313ff) form_midp_field_text_pane

0x30b5,	// (0x0002903e) form_midp_field_time_pane

0x30bd,	// (0x00029046) form_midp_gauge_slider_pane

0x30c6,	// (0x0002904f) form_midp_gauge_wait_pane

0xc843,	// (0x000327cc) form_midp_image_pane

0x956e,	// (0x0002f4f7) list_single_midp_pane_ParamLimits

0x956e,	// (0x0002f4f7) list_single_midp_pane

0xb454,	// (0x000313dd) form_midp_field_text_pane_t1

0x2dee,	// (0x00028d77) input_focus_pane_cp050

0x305e,	// (0x00028fe7) list_midp_form_text_pane

0x2ff3,	// (0x00028f7c) form_midp_field_choice_group_pane_t1

0x3001,	// (0x00028f8a) input_focus_pane_cp051

0x3015,	// (0x00028f9e) list_midp_choice_pane

0xc843,	// (0x000327cc) status_idle_pane

0x2fd7,	// (0x00028f60) form_midp_field_time_pane_t1

0xc839,	// (0x000327c2) wait_anim_pane_g2_copy1

0x2fe5,	// (0x00028f6e) form_midp_field_time_pane_t2

0x0001,

0x0af6,	// (0x00026a7f) aid_navinavi_width_2_pane

0xf81b,	// (0x000357a4) form_midp_field_time_pane_t

0xc843,	// (0x000327cc) input_focus_pane_cp052

0xc843,	// (0x000327cc) bg_input_focus_pane_cp040

0x2f97,	// (0x00028f20) form_midp_gauge_slider_pane_t1

0x2fa5,	// (0x00028f2e) form_midp_gauge_slider_pane_t2

0xb438,	// (0x000313c1) form_midp_gauge_slider_pane_t3

0xb446,	// (0x000313cf) form_midp_gauge_slider_pane_t4

0x0003,

0xf812,	// (0x0003579b) form_midp_gauge_slider_pane_t

0x2fcf,	// (0x00028f58) form_midp_slider_pane

0xc89f,	// (0x00032828) bg_input_focus_pane_cp041_ParamLimits

0xc89f,	// (0x00032828) bg_input_focus_pane_cp041

0x2f64,	// (0x00028eed) form_midp_gauge_wait_pane_t1_ParamLimits

0x2f64,	// (0x00028eed) form_midp_gauge_wait_pane_t1

0x2f76,	// (0x00028eff) form_midp_gauge_wait_pane_t2_ParamLimits

0x2f76,	// (0x00028eff) form_midp_gauge_wait_pane_t2

0x0001,

0xf80d,	// (0x00035796) form_midp_gauge_wait_pane_t_ParamLimits

0xf80d,	// (0x00035796) form_midp_gauge_wait_pane_t

0x2f88,	// (0x00028f11) form_midp_wait_pane_ParamLimits

0x2f88,	// (0x00028f11) form_midp_wait_pane

0xb402,	// (0x0003138b) form_midp_image_pane_g1

0xb40b,	// (0x00031394) form_midp_image_pane_t1

0xb41a,	// (0x000313a3) form_midp_image_pane_t2

0xb429,	// (0x000313b2) form_midp_image_pane_t3

0x0002,

0xf806,	// (0x0003578f) form_midp_image_pane_t

0x2f25,	// (0x00028eae) list_single_midp_pane_g1

0xedcf,	// (0x00034d58) list_single_midp_pane_t1

0xb3ec,	// (0x00031375) list_midp_form_item_pane_ParamLimits

0xb3ec,	// (0x00031375) list_midp_form_item_pane

0x0a9e,	// (0x00026a27) list_midp_form_item_pane_t1

0x0aad,	// (0x00026a36) midp_ticker_pane_g1

0x0ab9,	// (0x00026a42) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x000356dc) midp_ticker_pane_g

0x0ac5,	// (0x00026a4e) midp_ticker_pane_t1

0x42d7,	// (0x0002a260) midp_editing_number_pane_t1

0x42b5,	// (0x0002a23e) midp_editing_number_pane

0x42c4,	// (0x0002a24d) midp_ticker_pane

0x4076,	// (0x00029fff) ai_message_heading_pane

0xc843,	// (0x000327cc) bg_popup_window_pane_cp14

0x407e,	// (0x0002a007) listscroll_ai_message_pane

0x4000,	// (0x00029f89) ai_message_heading_pane_g1_ParamLimits

0x4000,	// (0x00029f89) ai_message_heading_pane_g1

0xb9eb,	// (0x00031974) ai_message_heading_pane_g2_ParamLimits

0xb9eb,	// (0x00031974) ai_message_heading_pane_g2

0x4018,	// (0x00029fa1) ai_message_heading_pane_g3_ParamLimits

0x4018,	// (0x00029fa1) ai_message_heading_pane_g3

0x4024,	// (0x00029fad) ai_message_heading_pane_g4_ParamLimits

0x4024,	// (0x00029fad) ai_message_heading_pane_g4

0x0003,

0xf947,	// (0x000358d0) ai_message_heading_pane_g_ParamLimits

0xf947,	// (0x000358d0) ai_message_heading_pane_g

0xb9f7,	// (0x00031980) ai_message_heading_pane_t1_ParamLimits

0xb9f7,	// (0x00031980) ai_message_heading_pane_t1

0xba11,	// (0x0003199a) ai_message_heading_pane_t2_ParamLimits

0xba11,	// (0x0003199a) ai_message_heading_pane_t2

0x0001,

0xf950,	// (0x000358d9) ai_message_heading_pane_t_ParamLimits

0xf950,	// (0x000358d9) ai_message_heading_pane_t

0x405c,	// (0x00029fe5) bg_popup_heading_pane_cp1_ParamLimits

0x405c,	// (0x00029fe5) bg_popup_heading_pane_cp1

0x3fee,	// (0x00029f77) list_ai_message_pane_ParamLimits

0x3fee,	// (0x00029f77) list_ai_message_pane

0xcd73,	// (0x00032cfc) scroll_pane_cp10

0x3f8a,	// (0x00029f13) list_ai_message_pane_g1

0x3f92,	// (0x00029f1b) list_ai_message_pane_g2

0x0001,

0xf924,	// (0x000358ad) list_ai_message_pane_g

0x3f9a,	// (0x00029f23) list_ai_message_pane_t1_ParamLimits

0x3f9a,	// (0x00029f23) list_ai_message_pane_t1

0x3faf,	// (0x00029f38) list_ai_message_pane_t2_ParamLimits

0x3faf,	// (0x00029f38) list_ai_message_pane_t2

0x3fc4,	// (0x00029f4d) list_ai_message_pane_t3_ParamLimits

0x3fc4,	// (0x00029f4d) list_ai_message_pane_t3

0x3fd9,	// (0x00029f62) list_ai_message_pane_t4_ParamLimits

0x3fd9,	// (0x00029f62) list_ai_message_pane_t4

0x0003,

0xf929,	// (0x000358b2) list_ai_message_pane_t_ParamLimits

0xf929,	// (0x000358b2) list_ai_message_pane_t

0xb977,	// (0x00031900) cell_ai_soft_ind_pane_ParamLimits

0xb977,	// (0x00031900) cell_ai_soft_ind_pane

0x0ad7,	// (0x00026a60) cell_ai_soft_ind_pane_g1_ParamLimits

0x0ad7,	// (0x00026a60) cell_ai_soft_ind_pane_g1

0xc843,	// (0x000327cc) grid_highlight_cp1

0x0ae4,	// (0x00026a6d) text_secondary_cp56_ParamLimits

0x0ae4,	// (0x00026a6d) text_secondary_cp56

0x3f4a,	// (0x00029ed3) example_general_pane_ParamLimits

0x3f4a,	// (0x00029ed3) example_general_pane

0x3f56,	// (0x00029edf) example_parent_pane_g1_ParamLimits

0x3f56,	// (0x00029edf) example_parent_pane_g1

0x3f62,	// (0x00029eeb) example_parent_pane_t1_ParamLimits

0x3f62,	// (0x00029eeb) example_parent_pane_t1

0xab70,	// (0x00030af9) popup_preview_text_window_ParamLimits

0xab70,	// (0x00030af9) popup_preview_text_window

0x0909,	// (0x00026892) list_single_pane_cp2_g4

0xca71,	// (0x000329fa) bg_popup_preview_window_pane_ParamLimits

0xca71,	// (0x000329fa) bg_popup_preview_window_pane

0xb8d7,	// (0x00031860) popup_preview_text_window_t1_ParamLimits

0xb8d7,	// (0x00031860) popup_preview_text_window_t1

0x3cb5,	// (0x00029c3e) popup_preview_text_window_t2_ParamLimits

0x3cb5,	// (0x00029c3e) popup_preview_text_window_t2

0x3cfe,	// (0x00029c87) popup_preview_text_window_t3_ParamLimits

0x3cfe,	// (0x00029c87) popup_preview_text_window_t3

0x3d43,	// (0x00029ccc) popup_preview_text_window_t4_ParamLimits

0x3d43,	// (0x00029ccc) popup_preview_text_window_t4

0x0004,

0xf8f8,	// (0x00035881) popup_preview_text_window_t_ParamLimits

0xf8f8,	// (0x00035881) popup_preview_text_window_t

0x3dc1,	// (0x00029d4a) scroll_pane_cp11

0x19ff,	// (0x00027988) bg_popup_preview_window_pane_g1

0xb897,	// (0x00031820) bg_popup_preview_window_pane_g2

0xb89f,	// (0x00031828) bg_popup_preview_window_pane_g3

0xb8a7,	// (0x00031830) bg_popup_preview_window_pane_g4

0xb8af,	// (0x00031838) bg_popup_preview_window_pane_g5

0xb8b7,	// (0x00031840) bg_popup_preview_window_pane_g6

0xb8bf,	// (0x00031848) bg_popup_preview_window_pane_g7

0xb8c7,	// (0x00031850) bg_popup_preview_window_pane_g8

0xf3cb,	// (0x00035354) aid_popup_width_pane

0xaaec,	// (0x00030a75) popup_midp_note_alarm_window_ParamLimits

0xaaec,	// (0x00030a75) popup_midp_note_alarm_window

0xcc45,	// (0x00032bce) data_form_pane_ParamLimits

0x9375,	// (0x0002f2fe) form_field_data_pane_g1

0x937f,	// (0x0002f308) form_field_data_pane_t1_ParamLimits

0xcc51,	// (0x00032bda) input_focus_pane_ParamLimits

0x9399,	// (0x0002f322) data_form_wide_pane_ParamLimits

0xec62,	// (0x00034beb) form_field_data_wide_pane_g1

0x93a5,	// (0x0002f32e) form_field_data_wide_pane_t1_ParamLimits

0xcb45,	// (0x00032ace) input_focus_pane_cp6_ParamLimits

0xa024,	// (0x0002ffad) input_popup_find_pane_g1_ParamLimits

0xa024,	// (0x0002ffad) input_popup_find_pane_g1

0x016f,	// (0x000260f8) aid_navi_side_left_pane

0x0184,	// (0x0002610d) aid_navi_side_right_pane

0x3680,	// (0x00029609) bg_popup_window_pane_cp30_ParamLimits

0x3680,	// (0x00029609) bg_popup_window_pane_cp30

0x36fa,	// (0x00029683) popup_midp_note_alarm_window_g1_ParamLimits

0x36fa,	// (0x00029683) popup_midp_note_alarm_window_g1

0x372a,	// (0x000296b3) popup_midp_note_alarm_window_t1_ParamLimits

0x372a,	// (0x000296b3) popup_midp_note_alarm_window_t1

0xb6d8,	// (0x00031661) popup_midp_note_alarm_window_t2_ParamLimits

0xb6d8,	// (0x00031661) popup_midp_note_alarm_window_t2

0xb786,	// (0x0003170f) popup_midp_note_alarm_window_t3_ParamLimits

0xb786,	// (0x0003170f) popup_midp_note_alarm_window_t3

0xb7ae,	// (0x00031737) popup_midp_note_alarm_window_t4_ParamLimits

0xb7ae,	// (0x00031737) popup_midp_note_alarm_window_t4

0x38c1,	// (0x0002984a) popup_midp_note_alarm_window_t5_ParamLimits

0x38c1,	// (0x0002984a) popup_midp_note_alarm_window_t5

0x000a,

0xf895,	// (0x0003581e) popup_midp_note_alarm_window_t_ParamLimits

0xf895,	// (0x0003581e) popup_midp_note_alarm_window_t

0x396d,	// (0x000298f6) wait_bar_pane_cp1_ParamLimits

0x396d,	// (0x000298f6) wait_bar_pane_cp1

0xc843,	// (0x000327cc) wait_anim_pane_copy1

0xc843,	// (0x000327cc) wait_border_pane_copy1

0x3376,	// (0x000292ff) wait_border_pane_g1_copy1

0x93bc,	// (0x0002f345) form_field_popup_pane_g1

0x93c4,	// (0x0002f34d) form_field_popup_pane_t1_ParamLimits

0xcc51,	// (0x00032bda) input_focus_pane_cp7_ParamLimits

0xcc7f,	// (0x00032c08) list_form_pane_ParamLimits

0x93de,	// (0x0002f367) form_field_popup_wide_pane_g1

0x93e6,	// (0x0002f36f) form_field_popup_wide_pane_t1_ParamLimits

0xcc51,	// (0x00032bda) input_focus_pane_cp8_ParamLimits

0xcc8b,	// (0x00032c14) list_form_wide_pane_ParamLimits

0x4465,	// (0x0002a3ee) aid_size_cell_graphic_pane

0x9472,	// (0x0002f3fb) data_form_pane_t1_ParamLimits

0x9588,	// (0x0002f511) data_form_wide_pane_t1_ParamLimits

0xafb3,	// (0x00030f3c) bg_status_flat_pane

0x99fb,	// (0x0002f984) title_pane_t1_ParamLimits

0xc859,	// (0x000327e2) title_pane_t2_ParamLimits

0xc87f,	// (0x00032808) title_pane_t3_ParamLimits

0xf557,	// (0x000354e0) title_pane_t_ParamLimits

0xd01c,	// (0x00032fa5) level_1_signal_ParamLimits

0xd029,	// (0x00032fb2) level_2_signal_ParamLimits

0xd036,	// (0x00032fbf) level_3_signal_ParamLimits

0xd043,	// (0x00032fcc) level_4_signal_ParamLimits

0xd050,	// (0x00032fd9) level_5_signal_ParamLimits

0xd05d,	// (0x00032fe6) level_6_signal_ParamLimits

0xd06a,	// (0x00032ff3) level_7_signal_ParamLimits

0xd01c,	// (0x00032fa5) level_1_battery_ParamLimits

0xd029,	// (0x00032fb2) level_2_battery_ParamLimits

0xd036,	// (0x00032fbf) level_3_battery_ParamLimits

0xd043,	// (0x00032fcc) level_4_battery_ParamLimits

0xd050,	// (0x00032fd9) level_5_battery_ParamLimits

0xd05d,	// (0x00032fe6) level_6_battery_ParamLimits

0xd06a,	// (0x00032ff3) level_7_battery_ParamLimits

0x3585,	// (0x0002950e) bg_status_flat_pane_g1

0x358d,	// (0x00029516) bg_status_flat_pane_g2

0x3595,	// (0x0002951e) bg_status_flat_pane_g3

0x359d,	// (0x00029526) bg_status_flat_pane_g4

0x35a5,	// (0x0002952e) bg_status_flat_pane_g5

0x35ad,	// (0x00029536) bg_status_flat_pane_g6

0x35b5,	// (0x0002953e) bg_status_flat_pane_g7

0x9a8f,	// (0x0002fa18) tabs_3_active_pane_t1_ParamLimits

0x9a8f,	// (0x0002fa18) tabs_3_passive_pane_t1_ParamLimits

0x9aa9,	// (0x0002fa32) tabs_4_active_pane_t1_ParamLimits

0x9aa9,	// (0x0002fa32) tabs_4_1_passive_pane_t1_ParamLimits

0xa063,	// (0x0002ffec) tabs_2_active_pane_t1_ParamLimits

0xa063,	// (0x0002ffec) tabs_2_passive_pane_t1_ParamLimits

0xc89f,	// (0x00032828) bg_active_tab_pane_cp4_ParamLimits

0xa075,	// (0x0002fffe) tabs_2_long_active_pane_t1_ParamLimits

0x0f27,	// (0x00026eb0) bg_passive_tab_pane_cp4_ParamLimits

0x1a94,	// (0x00027a1d) list_single_midp_graphic_pane_t1_ParamLimits

0xc89f,	// (0x00032828) bg_active_tab_pane_cp5_ParamLimits

0xa088,	// (0x00030011) tabs_3_long_active_pane_t1_ParamLimits

0x0f27,	// (0x00026eb0) bg_passive_tab_pane_cp5_ParamLimits

0x1a94,	// (0x00027a1d) list_single_midp_graphic_pane_t1

0xafb3,	// (0x00030f3c) bg_status_flat_pane_ParamLimits

0x1662,	// (0x000275eb) indicator_pane_cp2_ParamLimits

0x1662,	// (0x000275eb) indicator_pane_cp2

0xb131,	// (0x000310ba) navi_pane_srt_ParamLimits

0xb131,	// (0x000310ba) navi_pane_srt

0x17b1,	// (0x0002773a) popup_clock_digital_analogue_window_cp1

0xc8e3,	// (0x0003286c) indicator_pane_t1

0x09d8,	// (0x00026961) copy_highlight_pane

0x09d8,	// (0x00026961) cursor_graphics_pane

0x09d8,	// (0x00026961) graphic_within_text_pane

0x09d8,	// (0x00026961) link_highlight_pane

0x3d84,	// (0x00029d0d) popup_preview_text_window_t5_ParamLimits

0x3d84,	// (0x00029d0d) popup_preview_text_window_t5

0x0afe,	// (0x00026a87) cursor_digital_pane

0x0afe,	// (0x00026a87) cursor_primary_pane

0x0b0f,	// (0x00026a98) cursor_primary_small_pane

0x0b17,	// (0x00026aa0) cursor_secondary_pane

0x0b1f,	// (0x00026aa8) cursor_title_pane

0x0afe,	// (0x00026a87) link_highlight_digital_pane

0x0b06,	// (0x00026a8f) link_highlight_primary_pane

0x0b0f,	// (0x00026a98) link_highlight_primary_small_pane

0x0b17,	// (0x00026aa0) link_highlight_secondary_pane

0x0b1f,	// (0x00026aa8) link_highlight_title_pane

0x0afe,	// (0x00026a87) copy_highlight_digital_pane

0x0afe,	// (0x00026a87) copy_highlight_primary_pane

0x0b0f,	// (0x00026a98) copy_highlight_primary_small_pane

0x0b17,	// (0x00026aa0) copy_highlight_secondary_pane

0x0b1f,	// (0x00026aa8) copy_highlight_title_pane

0x0b17,	// (0x00026aa0) graphic_text_digital_pane

0x3623,	// (0x000295ac) graphic_text_primary_pane

0x362c,	// (0x000295b5) graphic_text_primary_small_pane

0x0b0f,	// (0x00026a98) graphic_text_secondary_pane

0x0afe,	// (0x00026a87) graphic_text_title_pane

0xa4cd,	// (0x00030456) cursor_primary_pane_g1

0x3615,	// (0x0002959e) cursor_text_primary_t1

0xb6ce,	// (0x00031657) cursor_primary_small_pane_g1

0x3607,	// (0x00029590) cursor_text_primary_small_t1

0xb6c4,	// (0x0003164d) cursor_primary_small_pane_g1_copy1

0x35ef,	// (0x00029578) cursor_text_primary_small_t1_copy1

0x35cd,	// (0x00029556) cursor_text_title_t1

0xb6ba,	// (0x00031643) cursor_title_pane_g1

0xa4cd,	// (0x00030456) cursor_digital_pane_g1

0x0b31,	// (0x00026aba) cursor_text_digital_t1

0x0b3f,	// (0x00026ac8) link_highlight_primary_pane_g1

0x3576,	// (0x000294ff) link_highlight_primary_pane_t1

0x0b3f,	// (0x00026ac8) link_highlight_primary_small_pane_g1

0x0b47,	// (0x00026ad0) link_highlight_primary_small_pane_t1

0x0b3f,	// (0x00026ac8) link_highlight_secondary_pane_g1

0x0b56,	// (0x00026adf) link_highlight_secondary_pane_t1

0x34db,	// (0x00029464) link_highlight_title_pane_g1

0x34f2,	// (0x0002947b) link_highlight_title_pane_t1

0x34db,	// (0x00029464) link_highlight_digital_pane_g1

0x34e3,	// (0x0002946c) link_highlight_digital_pane_t1

0x3395,	// (0x0002931e) copy_highlight_primary_pane_g1

0x33bb,	// (0x00029344) copy_highlight_primary_pane_t1

0x3395,	// (0x0002931e) copy_highlight_primary_small_pane_g1

0x33ac,	// (0x00029335) copy_highlight_primary_small_pane_t1

0x0b65,	// (0x00026aee) copy_highlight_secondary_pane_g1

0x0b6d,	// (0x00026af6) copy_highlight_secondary_pane_t1

0x3395,	// (0x0002931e) copy_highlight_title_pane_g1

0x339d,	// (0x00029326) copy_highlight_title_pane_t1

0x3395,	// (0x0002931e) copy_highlight_digital_pane_g1

0x462f,	// (0x0002a5b8) copy_highlight_digital_pane_t1

0x4583,	// (0x0002a50c) graphic_text_primary_pane_g1

0x4613,	// (0x0002a59c) graphic_text_primary_pane_t1

0x4621,	// (0x0002a5aa) graphic_text_primary_pane_t2

0x0001,

0xf9c4,	// (0x0003594d) graphic_text_primary_pane_t

0x45ef,	// (0x0002a578) graphic_text_primary_small_pane_g1

0x45f7,	// (0x0002a580) graphic_text_primary_small_pane_t1

0x4605,	// (0x0002a58e) graphic_text_primary_small_pane_t2

0x0001,

0xf9bf,	// (0x00035948) graphic_text_primary_small_pane_t

0x45cb,	// (0x0002a554) graphic_text_secondary_pane_g1

0x45d3,	// (0x0002a55c) graphic_text_secondary_pane_t1

0x45e1,	// (0x0002a56a) graphic_text_secondary_pane_t2

0x0001,

0xf9ba,	// (0x00035943) graphic_text_secondary_pane_t

0x45a7,	// (0x0002a530) graphic_text_title_pane_g1

0x45af,	// (0x0002a538) graphic_text_title_pane_t1

0x45bd,	// (0x0002a546) graphic_text_title_pane_t2

0x0001,

0xf9b5,	// (0x0003593e) graphic_text_title_pane_t

0x4583,	// (0x0002a50c) graphic_text_digital_pane_g1

0x458b,	// (0x0002a514) graphic_text_digital_pane_t1

0x4599,	// (0x0002a522) graphic_text_digital_pane_t2

0x0001,

0xf9b0,	// (0x00035939) graphic_text_digital_pane_t

0xc89f,	// (0x00032828) navi_icon_pane_srt_ParamLimits

0xc89f,	// (0x00032828) navi_icon_pane_srt

0xc843,	// (0x000327cc) navi_midp_pane_srt

0xc843,	// (0x000327cc) navi_navi_pane_srt

0xc89f,	// (0x00032828) navi_text_pane_srt_ParamLimits

0xc89f,	// (0x00032828) navi_text_pane_srt

0x454e,	// (0x0002a4d7) navi_navi_icon_text_pane_srt

0x4556,	// (0x0002a4df) navi_navi_pane_srt_g1_ParamLimits

0x4556,	// (0x0002a4df) navi_navi_pane_srt_g1

0x4568,	// (0x0002a4f1) navi_navi_pane_srt_g2_ParamLimits

0x4568,	// (0x0002a4f1) navi_navi_pane_srt_g2

0x0001,

0xf9ab,	// (0x00035934) navi_navi_pane_srt_g_ParamLimits

0xf9ab,	// (0x00035934) navi_navi_pane_srt_g

0x457a,	// (0x0002a503) navi_navi_tabs_pane_srt

0x454e,	// (0x0002a4d7) navi_navi_text_pane_srt

0x454e,	// (0x0002a4d7) navi_navi_volume_pane_srt

0x453f,	// (0x0002a4c8) navi_navi_text_pane_srt_t1

0x1e14,	// (0x00027d9d) navi_navi_volume_pane_srt_g1

0x1e1c,	// (0x00027da5) volume_small_pane_srt_ParamLimits

0x1e1c,	// (0x00027da5) volume_small_pane_srt

0x0b7c,	// (0x00026b05) volume_small_pane_srt_g1_ParamLimits

0x0b7c,	// (0x00026b05) volume_small_pane_srt_g1

0x0b8c,	// (0x00026b15) volume_small_pane_srt_g2_ParamLimits

0x0b8c,	// (0x00026b15) volume_small_pane_srt_g2

0x0b9d,	// (0x00026b26) volume_small_pane_srt_g3_ParamLimits

0x0b9d,	// (0x00026b26) volume_small_pane_srt_g3

0x0bae,	// (0x00026b37) volume_small_pane_srt_g4_ParamLimits

0x0bae,	// (0x00026b37) volume_small_pane_srt_g4

0x0bbf,	// (0x00026b48) volume_small_pane_srt_g5_ParamLimits

0x0bbf,	// (0x00026b48) volume_small_pane_srt_g5

0x0bd0,	// (0x00026b59) volume_small_pane_srt_g6_ParamLimits

0x0bd0,	// (0x00026b59) volume_small_pane_srt_g6

0x0be1,	// (0x00026b6a) volume_small_pane_srt_g7_ParamLimits

0x0be1,	// (0x00026b6a) volume_small_pane_srt_g7

0x0bf2,	// (0x00026b7b) volume_small_pane_srt_g8_ParamLimits

0x0bf2,	// (0x00026b7b) volume_small_pane_srt_g8

0x0c03,	// (0x00026b8c) volume_small_pane_srt_g9_ParamLimits

0x0c03,	// (0x00026b8c) volume_small_pane_srt_g9

0x0c14,	// (0x00026b9d) volume_small_pane_srt_g10_ParamLimits

0x0c14,	// (0x00026b9d) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x000356e1) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x000356e1) volume_small_pane_srt_g

0x9d6a,	// (0x0002fcf3) query_popup_data_pane_cp2

0x4525,	// (0x0002a4ae) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4525,	// (0x0002a4ae) navi_navi_icon_text_pane_srt_t1

0x3623,	// (0x000295ac) navi_tabs_2_long_pane_srt

0x3623,	// (0x000295ac) navi_tabs_2_pane_srt

0x3623,	// (0x000295ac) navi_tabs_3_long_pane_srt

0x3623,	// (0x000295ac) navi_tabs_3_pane_srt

0x3623,	// (0x000295ac) navi_tabs_4_pane_srt

0xbdfc,	// (0x00031d85) tabs_2_active_pane_srt_ParamLimits

0xbdfc,	// (0x00031d85) tabs_2_active_pane_srt

0xbe0c,	// (0x00031d95) tabs_2_passive_pane_srt_ParamLimits

0xbe0c,	// (0x00031d95) tabs_2_passive_pane_srt

0x2dee,	// (0x00028d77) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2dee,	// (0x00028d77) bg_passive_tab_pane_cp1_srt

0xbdcc,	// (0x00031d55) bg_passive_tab_pane_g1_cp1_srt

0xa344,	// (0x000302cd) bg_passive_tab_pane_g2_cp1_srt

0xbdd5,	// (0x00031d5e) bg_passive_tab_pane_g3_cp1_srt

0xc891,	// (0x0003281a) bg_active_tab_pane_cp1_srt_ParamLimits

0xc891,	// (0x0003281a) bg_active_tab_pane_cp1_srt

0xbdde,	// (0x00031d67) tabs_2_active_pane_srt_g1

0xbde6,	// (0x00031d6f) tabs_2_active_pane_srt_t1_ParamLimits

0xbde6,	// (0x00031d6f) tabs_2_active_pane_srt_t1

0xbdcc,	// (0x00031d55) bg_active_tab_pane_g1_cp1_srt

0xa344,	// (0x000302cd) bg_active_tab_pane_g2_cp1_srt

0xbdd5,	// (0x00031d5e) bg_active_tab_pane_g3_cp1_srt

0xbd99,	// (0x00031d22) tabs_3_active_pane_srt_ParamLimits

0xbd99,	// (0x00031d22) tabs_3_active_pane_srt

0xbdaa,	// (0x00031d33) tabs_3_passive_pane_cp_srt_ParamLimits

0xbdaa,	// (0x00031d33) tabs_3_passive_pane_cp_srt

0xbdbb,	// (0x00031d44) tabs_3_passive_pane_srt_ParamLimits

0xbdbb,	// (0x00031d44) tabs_3_passive_pane_srt

0x2dee,	// (0x00028d77) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2dee,	// (0x00028d77) bg_passive_tab_pane_cp2_srt

0xa4d7,	// (0x00030460) bg_passive_tab_pane_g1_cp2_srt

0xa344,	// (0x000302cd) bg_passive_tab_pane_g2_cp2_srt

0xa4e0,	// (0x00030469) bg_passive_tab_pane_g3_cp2_srt

0xc891,	// (0x0003281a) bg_active_tab_pane_cp2_srt_ParamLimits

0xc891,	// (0x0003281a) bg_active_tab_pane_cp2_srt

0xbd7b,	// (0x00031d04) tabs_3_active_pane_srt_g1

0xbd83,	// (0x00031d0c) tabs_3_active_pane_srt_t1_ParamLimits

0xbd83,	// (0x00031d0c) tabs_3_active_pane_srt_t1

0xa4d7,	// (0x00030460) bg_active_tab_pane_g1_cp2_srt

0xa344,	// (0x000302cd) bg_active_tab_pane_g2_cp2_srt

0xa4e0,	// (0x00030469) bg_active_tab_pane_g3_cp2_srt

0x1d79,	// (0x00027d02) tabs_4_active_pane_srt_ParamLimits

0x1d79,	// (0x00027d02) tabs_4_active_pane_srt

0x1d8b,	// (0x00027d14) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1d8b,	// (0x00027d14) tabs_4_passive_pane_cp2_srt

0x0ec9,	// (0x00026e52) aid_size_cell_toolbar

0x412e,	// (0x0002a0b7) main_idle_act_pane_ParamLimits

0xa92e,	// (0x000308b7) popup_large_graphic_colour_window_ParamLimits

0xae22,	// (0x00030dab) popup_toolbar_window_ParamLimits

0xae22,	// (0x00030dab) popup_toolbar_window

0xee06,	// (0x00034d8f) list_single_graphic_2heading_pane_ParamLimits

0xee06,	// (0x00034d8f) list_single_graphic_2heading_pane

0xcf04,	// (0x00032e8d) aid_size_cell_apps_grid_lsc_pane

0xcf16,	// (0x00032e9f) aid_size_cell_apps_grid_prt_pane

0x0f27,	// (0x00026eb0) bg_wml_button_pane_cp1_ParamLimits

0x0f27,	// (0x00026eb0) bg_wml_button_pane_cp1

0xb454,	// (0x000313dd) form_midp_field_text_pane_t1_ParamLimits

0x2dee,	// (0x00028d77) input_focus_pane_cp050_ParamLimits

0x305e,	// (0x00028fe7) list_midp_form_text_pane_ParamLimits

0x3001,	// (0x00028f8a) input_focus_pane_cp051_ParamLimits

0x3015,	// (0x00028f9e) list_midp_choice_pane_ParamLimits

0xb3b8,	// (0x00031341) list_single_2graphic_pane_cp3_ParamLimits

0xb3b8,	// (0x00031341) list_single_2graphic_pane_cp3

0xb3cc,	// (0x00031355) list_single_midp_graphic_pane_ParamLimits

0xb3cc,	// (0x00031355) list_single_midp_graphic_pane

0xecaf,	// (0x00034c38) list_single_graphic_2heading_pane_g1_ParamLimits

0xecaf,	// (0x00034c38) list_single_graphic_2heading_pane_g1

0xeb36,	// (0x00034abf) list_single_graphic_2heading_pane_g4_ParamLimits

0xeb36,	// (0x00034abf) list_single_graphic_2heading_pane_g4

0xeb42,	// (0x00034acb) list_single_graphic_2heading_pane_g5_ParamLimits

0xeb42,	// (0x00034acb) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x00035734) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x00035734) list_single_graphic_2heading_pane_g

0xecbb,	// (0x00034c44) list_single_graphic_2heading_pane_t1_ParamLimits

0xecbb,	// (0x00034c44) list_single_graphic_2heading_pane_t1

0xeccf,	// (0x00034c58) list_single_graphic_2heading_pane_t2_ParamLimits

0xeccf,	// (0x00034c58) list_single_graphic_2heading_pane_t2

0xece9,	// (0x00034c72) list_single_graphic_2heading_pane_t3_ParamLimits

0xece9,	// (0x00034c72) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0003573b) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0003573b) list_single_graphic_2heading_pane_t

0x190d,	// (0x00027896) bg_popup_sub_pane_cp2

0x1937,	// (0x000278c0) grid_toobar_pane

0x1973,	// (0x000278fc) cell_toolbar_pane_ParamLimits

0x1973,	// (0x000278fc) cell_toolbar_pane

0x19a3,	// (0x0002792c) cell_toolbar_pane_g1_ParamLimits

0x19a3,	// (0x0002792c) cell_toolbar_pane_g1

0xb2d0,	// (0x00031259) cell_toolbar_pane_g2_ParamLimits

0xb2d0,	// (0x00031259) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x00035749) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x00035749) cell_toolbar_pane_g

0x19d9,	// (0x00027962) grid_highlight_pane_cp2_ParamLimits

0x19d9,	// (0x00027962) grid_highlight_pane_cp2

0x19f3,	// (0x0002797c) toolbar_button_pane

0x19ff,	// (0x00027988) toolbar_button_pane_g1

0x1a07,	// (0x00027990) toolbar_button_pane_g2

0x1a0f,	// (0x00027998) toolbar_button_pane_g3

0x1a17,	// (0x000279a0) toolbar_button_pane_g4

0x1a1f,	// (0x000279a8) toolbar_button_pane_g5

0x1a27,	// (0x000279b0) toolbar_button_pane_g6

0x1a2f,	// (0x000279b8) toolbar_button_pane_g7

0x1a37,	// (0x000279c0) toolbar_button_pane_g8

0x1a3f,	// (0x000279c8) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0003574e) toolbar_button_pane_g

0x1a4f,	// (0x000279d8) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1a4f,	// (0x000279d8) list_single_2graphic_pane_g1_cp3

0xb2e4,	// (0x0003126d) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb2e4,	// (0x0003126d) list_single_2graphic_pane_g2_cp3

0x0808,	// (0x00026791) list_single_2graphic_pane_g3_cp3

0x1a6c,	// (0x000279f5) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1a6c,	// (0x000279f5) list_single_2graphic_pane_g4_cp3

0xb2f5,	// (0x0003127e) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb2f5,	// (0x0003127e) list_single_2graphic_pane_t1_cp3

0xd224,	// (0x000331ad) list_single_midp_graphic_pane_g2_ParamLimits

0xd224,	// (0x000331ad) list_single_midp_graphic_pane_g2

0x0ed1,	// (0x00026e5a) aid_zoom_text_primary

0xec83,	// (0x00034c0c) aid_zoom_text_secondary

0xa537,	// (0x000304c0) status_small_pane_g7_ParamLimits

0xa537,	// (0x000304c0) status_small_pane_g7

0xa55a,	// (0x000304e3) status_small_pane_t1_ParamLimits

0x99d7,	// (0x0002f960) title_pane_g2

0x0003,

0xf54e,	// (0x000354d7) title_pane_g

0x9dc4,	// (0x0002fd4d) aid_size_cell_colour_1_pane_ParamLimits

0x9dc4,	// (0x0002fd4d) aid_size_cell_colour_1_pane

0x9dd8,	// (0x0002fd61) aid_size_cell_colour_2_pane_ParamLimits

0x9dd8,	// (0x0002fd61) aid_size_cell_colour_2_pane

0x9dec,	// (0x0002fd75) aid_size_cell_colour_3_pane_ParamLimits

0x9dec,	// (0x0002fd75) aid_size_cell_colour_3_pane

0x9e00,	// (0x0002fd89) aid_size_cell_colour_4_pane_ParamLimits

0x9e00,	// (0x0002fd89) aid_size_cell_colour_4_pane

0x00ac,	// (0x00026035) title_pane_stacon_g1_ParamLimits

0x00ac,	// (0x00026035) title_pane_stacon_g1

0x3412,	// (0x0002939b) popup_note_wait_window_g3_ParamLimits

0x3412,	// (0x0002939b) popup_note_wait_window_g3

0x3488,	// (0x00029411) popup_note_wait_window_t5_ParamLimits

0x3488,	// (0x00029411) popup_note_wait_window_t5

0xc843,	// (0x000327cc) main_feb_china_hwr_fs_writing_pane

0xa7b0,	// (0x00030739) popup_feb_china_hwr_fs_window_ParamLimits

0xa7b0,	// (0x00030739) popup_feb_china_hwr_fs_window

0xb311,	// (0x0003129a) aid_size_cell_hwr_fs_ParamLimits

0xb311,	// (0x0003129a) aid_size_cell_hwr_fs

0x2dee,	// (0x00028d77) bg_popup_sub_pane_cp3_ParamLimits

0x2dee,	// (0x00028d77) bg_popup_sub_pane_cp3

0xb326,	// (0x000312af) grid_hwr_fs_pane_ParamLimits

0xb326,	// (0x000312af) grid_hwr_fs_pane

0x1ad7,	// (0x00027a60) linegrid_hwr_fs_pane_ParamLimits

0x1ad7,	// (0x00027a60) linegrid_hwr_fs_pane

0xb33e,	// (0x000312c7) cell_hwr_fs_pane_ParamLimits

0xb33e,	// (0x000312c7) cell_hwr_fs_pane

0x2dfa,	// (0x00028d83) linegrid_hwr_fs_pane_g1_ParamLimits

0x2dfa,	// (0x00028d83) linegrid_hwr_fs_pane_g1

0xb364,	// (0x000312ed) linegrid_hwr_fs_pane_g2_ParamLimits

0xb364,	// (0x000312ed) linegrid_hwr_fs_pane_g2

0x2e18,	// (0x00028da1) linegrid_hwr_fs_pane_g3_ParamLimits

0x2e18,	// (0x00028da1) linegrid_hwr_fs_pane_g3

0xb376,	// (0x000312ff) linegrid_hwr_fs_pane_g4_ParamLimits

0xb376,	// (0x000312ff) linegrid_hwr_fs_pane_g4

0x1b23,	// (0x00027aac) linegrid_hwr_fs_pane_g5_ParamLimits

0x1b23,	// (0x00027aac) linegrid_hwr_fs_pane_g5

0x0004,

0xf7eb,	// (0x00035774) linegrid_hwr_fs_pane_g_ParamLimits

0xf7eb,	// (0x00035774) linegrid_hwr_fs_pane_g

0x2e24,	// (0x00028dad) cell_hwr_fs_pane_g1_ParamLimits

0x2e24,	// (0x00028dad) cell_hwr_fs_pane_g1

0x1847,	// (0x000277d0) cell_hwr_fs_pane_g2_ParamLimits

0x1847,	// (0x000277d0) cell_hwr_fs_pane_g2

0xb390,	// (0x00031319) cell_hwr_fs_pane_g3_ParamLimits

0xb390,	// (0x00031319) cell_hwr_fs_pane_g3

0xb39d,	// (0x00031326) cell_hwr_fs_pane_g4_ParamLimits

0xb39d,	// (0x00031326) cell_hwr_fs_pane_g4

0x0003,

0xf7f6,	// (0x0003577f) cell_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0003577f) cell_hwr_fs_pane_g

0xb3aa,	// (0x00031333) cell_hwr_fs_pane_t1

0xc843,	// (0x000327cc) grid_highlight_pane_cp6

0xc843,	// (0x000327cc) main_idle_act2_pane

0xcd5a,	// (0x00032ce3) aid_inside_area_popup_secondary

0xb7ed,	// (0x00031776) aid_inside_area_window_primary_ParamLimits

0xb7ed,	// (0x00031776) aid_inside_area_window_primary

0xbe24,	// (0x00031dad) ai2_news_ticker_pane

0x4646,	// (0x0002a5cf) aid_size_cell_ai1_link_ParamLimits

0x4646,	// (0x0002a5cf) aid_size_cell_ai1_link

0xbe2c,	// (0x00031db5) popup_ai2_data_window_ParamLimits

0xbe2c,	// (0x00031db5) popup_ai2_data_window

0x4676,	// (0x0002a5ff) popup_ai2_link_window_ParamLimits

0x4676,	// (0x0002a5ff) popup_ai2_link_window

0x2dee,	// (0x00028d77) bg_popup_sub_pane_cp4_ParamLimits

0x2dee,	// (0x00028d77) bg_popup_sub_pane_cp4

0x468a,	// (0x0002a613) grid_ai2_link_pane_ParamLimits

0x468a,	// (0x0002a613) grid_ai2_link_pane

0x46a1,	// (0x0002a62a) popup_ai2_link_window_g1_ParamLimits

0x46a1,	// (0x0002a62a) popup_ai2_link_window_g1

0x46ad,	// (0x0002a636) popup_ai2_link_window_g2_ParamLimits

0x46ad,	// (0x0002a636) popup_ai2_link_window_g2

0x0001,

0xf9c9,	// (0x00035952) popup_ai2_link_window_g_ParamLimits

0xf9c9,	// (0x00035952) popup_ai2_link_window_g

0x46bc,	// (0x0002a645) ai2_mp_button_pane

0x46c4,	// (0x0002a64d) ai2_mp_volume_pane

0x3001,	// (0x00028f8a) bg_popup_sub_pane_cp5_ParamLimits

0x3001,	// (0x00028f8a) bg_popup_sub_pane_cp5

0x46cc,	// (0x0002a655) heading_ai2_gene_pane_ParamLimits

0x46cc,	// (0x0002a655) heading_ai2_gene_pane

0x46d8,	// (0x0002a661) list_ai2_gene_pane_ParamLimits

0x46d8,	// (0x0002a661) list_ai2_gene_pane

0x4720,	// (0x0002a6a9) cell_ai2_link_pane_ParamLimits

0x4720,	// (0x0002a6a9) cell_ai2_link_pane

0x4736,	// (0x0002a6bf) cell_ai2_link_pane_g1

0xc843,	// (0x000327cc) grid_highlight_pane_cp7

0x1e31,	// (0x00027dba) ai2_mp_volume_pane_g1

0x4806,	// (0x0002a78f) ai2_mp_volume_pane_g2

0x477b,	// (0x0002a704) list_ai2_gene_pane_t1

0x480e,	// (0x0002a797) ai2_mp_volume_pane_g3

0x0002,

0xf9e2,	// (0x0003596b) ai2_mp_volume_pane_g

0xbe42,	// (0x00031dcb) volume_small_pane_cp3

0x4816,	// (0x0002a79f) aid_size_cell_ai2_button

0x481e,	// (0x0002a7a7) grid_ai2_button_pane

0x4827,	// (0x0002a7b0) cell_ai2_button_pane_ParamLimits

0x4827,	// (0x0002a7b0) cell_ai2_button_pane

0xc839,	// (0x000327c2) cell_ai2_button_pane_g1

0xc843,	// (0x000327cc) grid_highlight_pane_cp8

0x47c6,	// (0x0002a74f) ai2_gene_pane_t1_ParamLimits

0x47c6,	// (0x0002a74f) ai2_gene_pane_t1

0xa71e,	// (0x000306a7) aid_height_parent_landscape

0xbb01,	// (0x00031a8a) aid_height_set_list

0x412e,	// (0x0002a0b7) aid_size_parent

0x4465,	// (0x0002a3ee) aid_size_cell_graphic_pane_ParamLimits

0x46e8,	// (0x0002a671) popup_ai2_data_window_g1_ParamLimits

0x46e8,	// (0x0002a671) popup_ai2_data_window_g1

0x46f4,	// (0x0002a67d) ai2_news_ticker_pane_g1

0x46fc,	// (0x0002a685) ai2_news_ticker_pane_g2

0x0001,

0xf9ce,	// (0x00035957) ai2_news_ticker_pane_g

0x4704,	// (0x0002a68d) ai2_news_ticker_pane_t1

0x4712,	// (0x0002a69b) ai2_news_ticker_pane_t2

0x0001,

0xf9d3,	// (0x0003595c) ai2_news_ticker_pane_t

0x473f,	// (0x0002a6c8) heading_ai2_gene_pane_g1

0x4747,	// (0x0002a6d0) heading_ai2_gene_pane_t1_ParamLimits

0x4747,	// (0x0002a6d0) heading_ai2_gene_pane_t1

0x475c,	// (0x0002a6e5) list_highlight_pane_cp6

0x4764,	// (0x0002a6ed) ai2_gene_pane_ParamLimits

0x4764,	// (0x0002a6ed) ai2_gene_pane

0x4789,	// (0x0002a712) list_ai2_gene_pane_t2

0x0001,

0xf9d8,	// (0x00035961) list_ai2_gene_pane_t

0x4797,	// (0x0002a720) list_highlight_pane_cp8_ParamLimits

0x4797,	// (0x0002a720) list_highlight_pane_cp8

0x47a8,	// (0x0002a731) ai2_gene_pane_g1_ParamLimits

0x47a8,	// (0x0002a731) ai2_gene_pane_g1

0x47ba,	// (0x0002a743) ai2_gene_pane_g2_ParamLimits

0x47ba,	// (0x0002a743) ai2_gene_pane_g2

0x0001,

0xf9dd,	// (0x00035966) ai2_gene_pane_g_ParamLimits

0xf9dd,	// (0x00035966) ai2_gene_pane_g

0xcbf0,	// (0x00032b79) scroll_pane_cp12

0xa6dd,	// (0x00030666) control_pane_t3_ParamLimits

0xa6dd,	// (0x00030666) control_pane_t3

0xa54b,	// (0x000304d4) status_small_pane_g8_ParamLimits

0xa54b,	// (0x000304d4) status_small_pane_g8

0xa873,	// (0x000307fc) popup_find_window_ParamLimits

0xab26,	// (0x00030aaf) popup_note_image_window_ParamLimits

0xebb0,	// (0x00034b39) list_double2_graphic_pane_vc_g1_ParamLimits

0xebb0,	// (0x00034b39) list_double2_graphic_pane_vc_g1

0xeb36,	// (0x00034abf) list_double2_graphic_pane_vc_g2_ParamLimits

0xeb36,	// (0x00034abf) list_double2_graphic_pane_vc_g2

0xeb42,	// (0x00034acb) list_double2_graphic_pane_vc_g3_ParamLimits

0xeb42,	// (0x00034acb) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x00035742) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x00035742) list_double2_graphic_pane_vc_g

0xed01,	// (0x00034c8a) list_double2_graphic_pane_vc_t1_ParamLimits

0xed01,	// (0x00034c8a) list_double2_graphic_pane_vc_t1

0xeb36,	// (0x00034abf) list_single_heading_pane_vc_g1_ParamLimits

0xeb36,	// (0x00034abf) list_single_heading_pane_vc_g1

0xeb42,	// (0x00034acb) list_single_heading_pane_vc_g2_ParamLimits

0xeb42,	// (0x00034acb) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035551) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035551) list_single_heading_pane_vc_g

0xed17,	// (0x00034ca0) list_single_heading_pane_vc_t1_ParamLimits

0xed17,	// (0x00034ca0) list_single_heading_pane_vc_t1

0xed2f,	// (0x00034cb8) list_single_heading_pane_vc_t2_ParamLimits

0xed2f,	// (0x00034cb8) list_single_heading_pane_vc_t2

0x0001,

0xf7da,	// (0x00035763) list_single_heading_pane_vc_t_ParamLimits

0xf7da,	// (0x00035763) list_single_heading_pane_vc_t

0xed4b,	// (0x00034cd4) list_setting_number_pane_vc_g1_ParamLimits

0xed4b,	// (0x00034cd4) list_setting_number_pane_vc_g1

0xed57,	// (0x00034ce0) list_setting_number_pane_vc_g2_ParamLimits

0xed57,	// (0x00034ce0) list_setting_number_pane_vc_g2

0x0001,

0xf7df,	// (0x00035768) list_setting_number_pane_vc_g_ParamLimits

0xf7df,	// (0x00035768) list_setting_number_pane_vc_g

0xed63,	// (0x00034cec) list_setting_number_pane_vc_t1_ParamLimits

0xed63,	// (0x00034cec) list_setting_number_pane_vc_t1

0xed77,	// (0x00034d00) list_setting_number_pane_vc_t2_ParamLimits

0xed77,	// (0x00034d00) list_setting_number_pane_vc_t2

0xed93,	// (0x00034d1c) list_setting_number_pane_vc_t3_ParamLimits

0xed93,	// (0x00034d1c) list_setting_number_pane_vc_t3

0x0002,

0xf7e4,	// (0x0003576d) list_setting_number_pane_vc_t_ParamLimits

0xf7e4,	// (0x0003576d) list_setting_number_pane_vc_t

0xedbf,	// (0x00034d48) set_value_pane_vc_ParamLimits

0xedbf,	// (0x00034d48) set_value_pane_vc

0xee06,	// (0x00034d8f) list_double2_graphic_pane_vc_ParamLimits

0xee06,	// (0x00034d8f) list_double2_graphic_pane_vc

0x4302,	// (0x0002a28b) list_double2_large_graphic_pane_vc_ParamLimits

0x4302,	// (0x0002a28b) list_double2_large_graphic_pane_vc

0xee06,	// (0x00034d8f) list_double2_pane_vc_ParamLimits

0xee06,	// (0x00034d8f) list_double2_pane_vc

0xee06,	// (0x00034d8f) list_double_graphic_heading_pane_vc_ParamLimits

0xee06,	// (0x00034d8f) list_double_graphic_heading_pane_vc

0xee06,	// (0x00034d8f) list_double_graphic_pane_vc_ParamLimits

0xee06,	// (0x00034d8f) list_double_graphic_pane_vc

0xee06,	// (0x00034d8f) list_double_heading_pane_vc_ParamLimits

0xee06,	// (0x00034d8f) list_double_heading_pane_vc

0x4314,	// (0x0002a29d) list_double_large_graphic_pane_vc_ParamLimits

0x4314,	// (0x0002a29d) list_double_large_graphic_pane_vc

0xee06,	// (0x00034d8f) list_double_number_pane_vc_ParamLimits

0xee06,	// (0x00034d8f) list_double_number_pane_vc

0xee06,	// (0x00034d8f) list_double_pane_vc_ParamLimits

0xee06,	// (0x00034d8f) list_double_pane_vc

0xee06,	// (0x00034d8f) list_double_time_pane_vc_ParamLimits

0xee06,	// (0x00034d8f) list_double_time_pane_vc

0xee06,	// (0x00034d8f) list_setting_number_pane_vc_ParamLimits

0xee06,	// (0x00034d8f) list_setting_number_pane_vc

0xee06,	// (0x00034d8f) list_setting_pane_vc_ParamLimits

0xee06,	// (0x00034d8f) list_setting_pane_vc

0xee06,	// (0x00034d8f) list_single_graphic_heading_pane_vc_ParamLimits

0xee06,	// (0x00034d8f) list_single_graphic_heading_pane_vc

0xee06,	// (0x00034d8f) list_single_heading_pane_vc_ParamLimits

0xee06,	// (0x00034d8f) list_single_heading_pane_vc

0xee06,	// (0x00034d8f) list_single_number_heading_pane_vc_ParamLimits

0xee06,	// (0x00034d8f) list_single_number_heading_pane_vc

0xebb0,	// (0x00034b39) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xebb0,	// (0x00034b39) list_double_graphic_heading_pane_vc_g1

0xeb36,	// (0x00034abf) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xeb36,	// (0x00034abf) list_double_graphic_heading_pane_vc_g2

0xeb42,	// (0x00034acb) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xeb42,	// (0x00034acb) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7b9,	// (0x00035742) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x00035742) list_double_graphic_heading_pane_vc_g

0xee19,	// (0x00034da2) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xee19,	// (0x00034da2) list_double_graphic_heading_pane_vc_t1

0xee35,	// (0x00034dbe) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xee35,	// (0x00034dbe) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e9,	// (0x00035972) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e9,	// (0x00035972) list_double_graphic_heading_pane_vc_t

0xed4b,	// (0x00034cd4) list_setting_pane_vc_g1_ParamLimits

0xed4b,	// (0x00034cd4) list_setting_pane_vc_g1

0xed57,	// (0x00034ce0) list_setting_pane_vc_g2_ParamLimits

0xed57,	// (0x00034ce0) list_setting_pane_vc_g2

0x0001,

0xf7df,	// (0x00035768) list_setting_pane_vc_g_ParamLimits

0xf7df,	// (0x00035768) list_setting_pane_vc_g

0xee53,	// (0x00034ddc) list_setting_pane_vc_t1_ParamLimits

0xee53,	// (0x00034ddc) list_setting_pane_vc_t1

0xee6f,	// (0x00034df8) list_setting_pane_vc_t2_ParamLimits

0xee6f,	// (0x00034df8) list_setting_pane_vc_t2

0x0001,

0xfa2c,	// (0x000359b5) list_setting_pane_vc_t_ParamLimits

0xfa2c,	// (0x000359b5) list_setting_pane_vc_t

0xedbf,	// (0x00034d48) set_value_pane_cp_vc_ParamLimits

0xedbf,	// (0x00034d48) set_value_pane_cp_vc

0xeb36,	// (0x00034abf) list_single_number_heading_pane_vc_g1_ParamLimits

0xeb36,	// (0x00034abf) list_single_number_heading_pane_vc_g1

0xeb42,	// (0x00034acb) list_single_number_heading_pane_vc_g2_ParamLimits

0xeb42,	// (0x00034acb) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035551) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035551) list_single_number_heading_pane_vc_g

0xed17,	// (0x00034ca0) list_single_number_heading_pane_vc_t1_ParamLimits

0xed17,	// (0x00034ca0) list_single_number_heading_pane_vc_t1

0xee89,	// (0x00034e12) list_single_number_heading_pane_vc_t2_ParamLimits

0xee89,	// (0x00034e12) list_single_number_heading_pane_vc_t2

0xeb9e,	// (0x00034b27) list_single_number_heading_pane_vc_t3_ParamLimits

0xeb9e,	// (0x00034b27) list_single_number_heading_pane_vc_t3

0x0002,

0xfa31,	// (0x000359ba) list_single_number_heading_pane_vc_t_ParamLimits

0xfa31,	// (0x000359ba) list_single_number_heading_pane_vc_t

0xebb0,	// (0x00034b39) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xebb0,	// (0x00034b39) list_single_graphic_heading_pane_vc_g1

0xeb36,	// (0x00034abf) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xeb36,	// (0x00034abf) list_single_graphic_heading_pane_vc_g4

0xeb42,	// (0x00034acb) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xeb42,	// (0x00034acb) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x00035742) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x00035742) list_single_graphic_heading_pane_vc_g

0xed17,	// (0x00034ca0) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xed17,	// (0x00034ca0) list_single_graphic_heading_pane_vc_t1

0xee9d,	// (0x00034e26) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xee9d,	// (0x00034e26) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa38,	// (0x000359c1) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x000359c1) list_single_graphic_heading_pane_vc_t

0xeb36,	// (0x00034abf) list_double2_pane_vc_g1_ParamLimits

0xeb36,	// (0x00034abf) list_double2_pane_vc_g1

0xeb42,	// (0x00034acb) list_double2_pane_vc_g2_ParamLimits

0xeb42,	// (0x00034acb) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035551) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035551) list_double2_pane_vc_g

0xedf0,	// (0x00034d79) list_double2_pane_vc_t1_ParamLimits

0xedf0,	// (0x00034d79) list_double2_pane_vc_t1

0xebbc,	// (0x00034b45) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xebbc,	// (0x00034b45) list_double2_large_graphic_pane_vc_g1

0xebc8,	// (0x00034b51) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xebc8,	// (0x00034b51) list_double2_large_graphic_pane_vc_g2

0xebd4,	// (0x00034b5d) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xebd4,	// (0x00034b5d) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0003556e) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0003556e) list_double2_large_graphic_pane_vc_g

0xebe0,	// (0x00034b69) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xebe0,	// (0x00034b69) list_double2_large_graphic_pane_vc_t1

0xeeb1,	// (0x00034e3a) list_double_time_pane_vc_g1_ParamLimits

0xeeb1,	// (0x00034e3a) list_double_time_pane_vc_g1

0xeebd,	// (0x00034e46) list_double_time_pane_vc_g2_ParamLimits

0xeebd,	// (0x00034e46) list_double_time_pane_vc_g2

0x0001,

0xfa3d,	// (0x000359c6) list_double_time_pane_vc_g_ParamLimits

0xfa3d,	// (0x000359c6) list_double_time_pane_vc_g

0xeec9,	// (0x00034e52) list_double_time_pane_vc_t1_ParamLimits

0xeec9,	// (0x00034e52) list_double_time_pane_vc_t1

0xeeed,	// (0x00034e76) list_double_time_pane_vc_t2_ParamLimits

0xeeed,	// (0x00034e76) list_double_time_pane_vc_t2

0xef3c,	// (0x00034ec5) list_double_time_pane_vc_t3_ParamLimits

0xef3c,	// (0x00034ec5) list_double_time_pane_vc_t3

0xef4e,	// (0x00034ed7) list_double_time_pane_vc_t4_ParamLimits

0xef4e,	// (0x00034ed7) list_double_time_pane_vc_t4

0x0003,

0xfa42,	// (0x000359cb) list_double_time_pane_vc_t_ParamLimits

0xfa42,	// (0x000359cb) list_double_time_pane_vc_t

0xeb36,	// (0x00034abf) list_double_pane_vc_g1_ParamLimits

0xeb36,	// (0x00034abf) list_double_pane_vc_g1

0xeb42,	// (0x00034acb) list_double_pane_vc_g2_ParamLimits

0xeb42,	// (0x00034acb) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035551) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035551) list_double_pane_vc_g

0xef62,	// (0x00034eeb) list_double_pane_vc_t1_ParamLimits

0xef62,	// (0x00034eeb) list_double_pane_vc_t1

0xef76,	// (0x00034eff) list_double_pane_vc_t2_ParamLimits

0xef76,	// (0x00034eff) list_double_pane_vc_t2

0x0001,

0xfa4b,	// (0x000359d4) list_double_pane_vc_t_ParamLimits

0xfa4b,	// (0x000359d4) list_double_pane_vc_t

0xeb36,	// (0x00034abf) list_double_number_pane_vc_g1_ParamLimits

0xeb36,	// (0x00034abf) list_double_number_pane_vc_g1

0xeb42,	// (0x00034acb) list_double_number_pane_vc_g2_ParamLimits

0xeb42,	// (0x00034acb) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035551) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035551) list_double_number_pane_vc_g

0xef8e,	// (0x00034f17) list_double_number_pane_vc_t1_ParamLimits

0xef8e,	// (0x00034f17) list_double_number_pane_vc_t1

0xefa0,	// (0x00034f29) list_double_number_pane_vc_t2_ParamLimits

0xefa0,	// (0x00034f29) list_double_number_pane_vc_t2

0xefb4,	// (0x00034f3d) list_double_number_pane_vc_t3_ParamLimits

0xefb4,	// (0x00034f3d) list_double_number_pane_vc_t3

0x0002,

0xfa50,	// (0x000359d9) list_double_number_pane_vc_t_ParamLimits

0xfa50,	// (0x000359d9) list_double_number_pane_vc_t

0xefcc,	// (0x00034f55) list_double_large_graphic_pane_vc_g1_ParamLimits

0xefcc,	// (0x00034f55) list_double_large_graphic_pane_vc_g1

0xefee,	// (0x00034f77) list_double_large_graphic_pane_vc_g2_ParamLimits

0xefee,	// (0x00034f77) list_double_large_graphic_pane_vc_g2

0xf002,	// (0x00034f8b) list_double_large_graphic_pane_vc_g3_ParamLimits

0xf002,	// (0x00034f8b) list_double_large_graphic_pane_vc_g3

0xf011,	// (0x00034f9a) list_double_large_graphic_pane_vc_g4_ParamLimits

0xf011,	// (0x00034f9a) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa57,	// (0x000359e0) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa57,	// (0x000359e0) list_double_large_graphic_pane_vc_g

0xf01d,	// (0x00034fa6) list_double_large_graphic_pane_vc_t1_ParamLimits

0xf01d,	// (0x00034fa6) list_double_large_graphic_pane_vc_t1

0xf039,	// (0x00034fc2) list_double_large_graphic_pane_vc_t2_ParamLimits

0xf039,	// (0x00034fc2) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa60,	// (0x000359e9) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa60,	// (0x000359e9) list_double_large_graphic_pane_vc_t

0xeb36,	// (0x00034abf) list_double_heading_pane_vc_g1_ParamLimits

0xeb36,	// (0x00034abf) list_double_heading_pane_vc_g1

0xeb42,	// (0x00034acb) list_double_heading_pane_vc_g2_ParamLimits

0xeb42,	// (0x00034acb) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035551) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035551) list_double_heading_pane_vc_g

0xf05b,	// (0x00034fe4) list_double_heading_pane_vc_t1_ParamLimits

0xf05b,	// (0x00034fe4) list_double_heading_pane_vc_t1

0xed17,	// (0x00034ca0) list_double_heading_pane_vc_t2_ParamLimits

0xed17,	// (0x00034ca0) list_double_heading_pane_vc_t2

0x0001,

0xfa65,	// (0x000359ee) list_double_heading_pane_vc_t_ParamLimits

0xfa65,	// (0x000359ee) list_double_heading_pane_vc_t

0xf06f,	// (0x00034ff8) list_double_graphic_pane_vc_g1_ParamLimits

0xf06f,	// (0x00034ff8) list_double_graphic_pane_vc_g1

0xf082,	// (0x0003500b) list_double_graphic_pane_vc_g2_ParamLimits

0xf082,	// (0x0003500b) list_double_graphic_pane_vc_g2

0xeb36,	// (0x00034abf) list_double_graphic_pane_vc_g3_ParamLimits

0xeb36,	// (0x00034abf) list_double_graphic_pane_vc_g3

0x0003,

0xfa6a,	// (0x000359f3) list_double_graphic_pane_vc_g_ParamLimits

0xfa6a,	// (0x000359f3) list_double_graphic_pane_vc_g

0xf09f,	// (0x00035028) list_double_graphic_pane_vc_t1_ParamLimits

0xf09f,	// (0x00035028) list_double_graphic_pane_vc_t1

0xf0c3,	// (0x0003504c) list_double_graphic_pane_vc_t2_ParamLimits

0xf0c3,	// (0x0003504c) list_double_graphic_pane_vc_t2

0x0001,

0xfa73,	// (0x000359fc) list_double_graphic_pane_vc_t_ParamLimits

0xfa73,	// (0x000359fc) list_double_graphic_pane_vc_t

0xf3d7,	// (0x00035360) aid_size_cell_fastswap

0x979e,	// (0x0002f727) aid_size_cell_touch_ParamLimits

0x979e,	// (0x0002f727) aid_size_cell_touch

0xf52e,	// (0x000354b7) popup_fast_swap_wide_window_ParamLimits

0xf52e,	// (0x000354b7) popup_fast_swap_wide_window

0x996e,	// (0x0002f8f7) touch_pane_ParamLimits

0x996e,	// (0x0002f8f7) touch_pane

0xcc3d,	// (0x00032bc6) button_value_adjust_pane_cp2

0xec3f,	// (0x00034bc8) button_value_adjust_pane_cp4

0xec47,	// (0x00034bd0) form_field_data_pane_cp2

0x9329,	// (0x0002f2b2) form_field_data_wide_pane_cp2

0xcf3b,	// (0x00032ec4) bg_scroll_pane_ParamLimits

0xa18a,	// (0x00030113) scroll_handle_pane_ParamLimits

0x02bc,	// (0x00026245) scroll_sc2_down_pane_ParamLimits

0x02bc,	// (0x00026245) scroll_sc2_down_pane

0xcf6c,	// (0x00032ef5) scroll_sc2_up_pane_ParamLimits

0xcf6c,	// (0x00032ef5) scroll_sc2_up_pane

0xbf6e,	// (0x00031ef7) grid_wheel_folder_pane_g1_ParamLimits

0xbf6e,	// (0x00031ef7) grid_wheel_folder_pane_g1

0x062d,	// (0x000265b6) clock_nsta_pane_cp2_ParamLimits

0x062d,	// (0x000265b6) clock_nsta_pane_cp2

0x0f27,	// (0x00026eb0) listscroll_midp_pane_ParamLimits

0xa41d,	// (0x000303a6) midp_canvas_pane

0x0eb7,	// (0x00026e40) nsta_clock_indic_pane

0x0f05,	// (0x00026e8e) listscroll_form_pane_vc

0x0f15,	// (0x00026e9e) listscroll_set_pane_vc_ParamLimits

0x0f15,	// (0x00026e9e) listscroll_set_pane_vc

0xafdb,	// (0x00030f64) clock_nsta_pane

0xb005,	// (0x00030f8e) indicator_nsta_pane

0x190d,	// (0x00027896) bg_popup_sub_pane_cp2_ParamLimits

0x1921,	// (0x000278aa) find_pane_cp2_ParamLimits

0x1921,	// (0x000278aa) find_pane_cp2

0x1937,	// (0x000278c0) grid_toobar_pane_ParamLimits

0x2dc2,	// (0x00028d4b) list_form_gen_pane_vc_ParamLimits

0x2dc2,	// (0x00028d4b) list_form_gen_pane_vc

0x2dd8,	// (0x00028d61) scroll_pane_cp8_vc_ParamLimits

0x2dd8,	// (0x00028d61) scroll_pane_cp8_vc

0x2e54,	// (0x00028ddd) data_form_wide_pane_vc_ParamLimits

0x2e54,	// (0x00028ddd) data_form_wide_pane_vc

0x2e60,	// (0x00028de9) form_field_data_wide_pane_vc_g1

0x2e68,	// (0x00028df1) form_field_data_wide_pane_vc_t1_ParamLimits

0x2e68,	// (0x00028df1) form_field_data_wide_pane_vc_t1

0xcc51,	// (0x00032bda) input_focus_pane_cp6_vc_ParamLimits

0xcc51,	// (0x00032bda) input_focus_pane_cp6_vc

0xb561,	// (0x000314ea) list_midp_pane_ParamLimits

0x44cb,	// (0x0002a454) scroll_pane_cp16_ParamLimits

0x44cb,	// (0x0002a454) scroll_pane_cp16

0x31ef,	// (0x00029178) button_value_adjust_pane_ParamLimits

0x31ef,	// (0x00029178) button_value_adjust_pane

0xbb12,	// (0x00031a9b) button_value_adjust_pane_cp6_ParamLimits

0xbb12,	// (0x00031a9b) button_value_adjust_pane_cp6

0xbc2c,	// (0x00031bb5) settings_code_pane_cp_ParamLimits

0xbc2c,	// (0x00031bb5) settings_code_pane_cp

0xc839,	// (0x000327c2) cell_touch_pane_g1

0xc839,	// (0x000327c2) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x00035687) cell_touch_pane_g

0xbe4b,	// (0x00031dd4) cell_touch_pane_cp_ParamLimits

0xbe4b,	// (0x00031dd4) cell_touch_pane_cp

0xbe67,	// (0x00031df0) cell_touch_pane_ParamLimits

0xbe67,	// (0x00031df0) cell_touch_pane

0xc839,	// (0x000327c2) scroll_sc2_down_pane_g1

0xc839,	// (0x000327c2) scroll_sc2_up_pane_g1

0xc843,	// (0x000327cc) bg_set_opt_pane_cp4_vc

0x485b,	// (0x0002a7e4) list_set_graphic_pane_vc_g1_ParamLimits

0x485b,	// (0x0002a7e4) list_set_graphic_pane_vc_g1

0x4867,	// (0x0002a7f0) list_set_graphic_pane_vc_g2_ParamLimits

0x4867,	// (0x0002a7f0) list_set_graphic_pane_vc_g2

0x0001,

0xf9ee,	// (0x00035977) list_set_graphic_pane_vc_g_ParamLimits

0xf9ee,	// (0x00035977) list_set_graphic_pane_vc_g

0x4873,	// (0x0002a7fc) text_primary_small_cp13_vc_ParamLimits

0x4873,	// (0x0002a7fc) text_primary_small_cp13_vc

0x488b,	// (0x0002a814) list_set_graphic_pane_vc_ParamLimits

0x488b,	// (0x0002a814) list_set_graphic_pane_vc

0xc843,	// (0x000327cc) input_focus_pane_cp2_vc

0xc839,	// (0x000327c2) setting_code_pane_vc_g1

0xc8b6,	// (0x0003283f) setting_code_pane_vc_t1

0x489e,	// (0x0002a827) set_text_pane_vc_t1_ParamLimits

0x489e,	// (0x0002a827) set_text_pane_vc_t1

0xc843,	// (0x000327cc) input_focus_pane_cp1_vc

0x48ba,	// (0x0002a843) list_set_text_pane_vc

0xc839,	// (0x000327c2) setting_text_pane_vc_g1

0xc843,	// (0x000327cc) bg_set_opt_pane_cp2_vc

0xc8ad,	// (0x00032836) setting_slider_graphic_pane_vc_g1

0x48c4,	// (0x0002a84d) setting_slider_graphic_pane_vc_t1

0x48d4,	// (0x0002a85d) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f3,	// (0x0003597c) setting_slider_graphic_pane_vc_t

0x48e4,	// (0x0002a86d) slider_set_pane_cp_vc

0x48ec,	// (0x0002a875) slider_set_pane_vc_g1

0x48f5,	// (0x0002a87e) slider_set_pane_vc_g2

0x0006,

0xf9f8,	// (0x00035981) slider_set_pane_vc_g

0xccac,	// (0x00032c35) set_opt_bg_pane_g1_copy1

0xccb4,	// (0x00032c3d) set_opt_bg_pane_g2_copy1

0x4921,	// (0x0002a8aa) set_opt_bg_pane_g3_copy1

0xccc4,	// (0x00032c4d) set_opt_bg_pane_g4_copy1

0xcccc,	// (0x00032c55) set_opt_bg_pane_g5_copy1

0xccd4,	// (0x00032c5d) set_opt_bg_pane_g6_copy1

0x4929,	// (0x0002a8b2) set_opt_bg_pane_g7_copy1

0x4931,	// (0x0002a8ba) set_opt_bg_pane_g8_copy1

0x4939,	// (0x0002a8c2) set_opt_bg_pane_g9_copy1

0xc843,	// (0x000327cc) bg_set_opt_pane_cp_vc

0x4941,	// (0x0002a8ca) setting_slider_pane_vc_t1

0x4950,	// (0x0002a8d9) setting_slider_pane_vc_t2

0x4960,	// (0x0002a8e9) setting_slider_pane_vc_t3

0x0002,

0xfa07,	// (0x00035990) setting_slider_pane_vc_t

0x4970,	// (0x0002a8f9) slider_set_pane_vc

0x1b47,	// (0x00027ad0) volume_set_pane_vc_g1

0x1e42,	// (0x00027dcb) volume_set_pane_vc_g2

0x1e4b,	// (0x00027dd4) volume_set_pane_vc_g3

0x1e54,	// (0x00027ddd) volume_set_pane_vc_g4

0x1e5d,	// (0x00027de6) volume_set_pane_vc_g5

0x1e66,	// (0x00027def) volume_set_pane_vc_g6

0x1e6f,	// (0x00027df8) volume_set_pane_vc_g7

0x1e78,	// (0x00027e01) volume_set_pane_vc_g8

0x1e81,	// (0x00027e0a) volume_set_pane_vc_g9

0x1e8a,	// (0x00027e13) volume_set_pane_vc_g10

0x0009,

0xfa0e,	// (0x00035997) volume_set_pane_vc_g

0x4978,	// (0x0002a901) volume_set_pane_vc

0x4980,	// (0x0002a909) button_value_adjust_pane_cp1_vc

0x498a,	// (0x0002a913) list_highlight_pane_cp2_vc

0x4993,	// (0x0002a91c) list_set_pane_vc_ParamLimits

0x4993,	// (0x0002a91c) list_set_pane_vc

0x49f1,	// (0x0002a97a) main_pane_set_vc_t1_ParamLimits

0x49f1,	// (0x0002a97a) main_pane_set_vc_t1

0x4a06,	// (0x0002a98f) main_pane_set_vc_t2_ParamLimits

0x4a06,	// (0x0002a98f) main_pane_set_vc_t2

0x4a18,	// (0x0002a9a1) main_pane_set_vc_t3_ParamLimits

0x4a18,	// (0x0002a9a1) main_pane_set_vc_t3

0x4a2a,	// (0x0002a9b3) main_pane_set_vc_t4_ParamLimits

0x4a2a,	// (0x0002a9b3) main_pane_set_vc_t4

0x0003,

0xfa23,	// (0x000359ac) main_pane_set_vc_t_ParamLimits

0xfa23,	// (0x000359ac) main_pane_set_vc_t

0x4a3c,	// (0x0002a9c5) setting_code_pane_vc_ParamLimits

0x4a3c,	// (0x0002a9c5) setting_code_pane_vc

0x4a4b,	// (0x0002a9d4) setting_slider_graphic_pane_vc

0x4a4b,	// (0x0002a9d4) setting_slider_pane_vc

0x4a4b,	// (0x0002a9d4) setting_text_pane_vc

0x4a4b,	// (0x0002a9d4) setting_volume_pane_vc

0x4a53,	// (0x0002a9dc) scroll_pane_cp121_vc

0xcc2b,	// (0x00032bb4) set_content_pane_vc

0x4a5b,	// (0x0002a9e4) button_value_adjust_pane_g1

0x4a64,	// (0x0002a9ed) button_value_adjust_pane_g2

0x0001,

0xfa78,	// (0x00035a01) button_value_adjust_pane_g

0x4a6d,	// (0x0002a9f6) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4a6d,	// (0x0002a9f6) form_field_slider_wide_pane_vc_t1

0x4a81,	// (0x0002aa0a) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4a81,	// (0x0002aa0a) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7d,	// (0x00035a06) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7d,	// (0x00035a06) form_field_slider_wide_pane_vc_t

0xc891,	// (0x0003281a) input_focus_pane_cp10_vc_ParamLimits

0xc891,	// (0x0003281a) input_focus_pane_cp10_vc

0x4aaf,	// (0x0002aa38) slider_cont_pane_cp1_vc_ParamLimits

0x4aaf,	// (0x0002aa38) slider_cont_pane_cp1_vc

0x4ac1,	// (0x0002aa4a) slider_form_pane_g1_cp2

0x48f5,	// (0x0002a87e) slider_form_pane_g2_cp2

0x4aee,	// (0x0002aa77) form_field_slider_pane_vc_t3

0x4afc,	// (0x0002aa85) form_field_slider_pane_vc_t4

0x4b0a,	// (0x0002aa93) slider_form_pane_vc_ParamLimits

0x4b0a,	// (0x0002aa93) slider_form_pane_vc

0x4b17,	// (0x0002aaa0) form_field_slider_pane_vc_t1_ParamLimits

0x4b17,	// (0x0002aaa0) form_field_slider_pane_vc_t1

0x4a81,	// (0x0002aa0a) form_field_slider_pane_vc_t2_ParamLimits

0x4a81,	// (0x0002aa0a) form_field_slider_pane_vc_t2

0x0001,

0xfa8f,	// (0x00035a18) form_field_slider_pane_vc_t_ParamLimits

0xfa8f,	// (0x00035a18) form_field_slider_pane_vc_t

0xc891,	// (0x0003281a) input_focus_pane_cp9_vc_ParamLimits

0xc891,	// (0x0003281a) input_focus_pane_cp9_vc

0x4b33,	// (0x0002aabc) slider_cont_pane_vc_ParamLimits

0x4b33,	// (0x0002aabc) slider_cont_pane_vc

0x4b47,	// (0x0002aad0) list_form_graphic_pane_cp_vc_ParamLimits

0x4b47,	// (0x0002aad0) list_form_graphic_pane_cp_vc

0x2e60,	// (0x00028de9) form_field_popup_wide_pane_vc_g1

0x4b5c,	// (0x0002aae5) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4b5c,	// (0x0002aae5) form_field_popup_wide_pane_vc_t1

0xcc51,	// (0x00032bda) input_focus_pane_cp8_vc_ParamLimits

0xcc51,	// (0x00032bda) input_focus_pane_cp8_vc

0x4ba1,	// (0x0002ab2a) list_form_wide_pane_vc_ParamLimits

0x4ba1,	// (0x0002ab2a) list_form_wide_pane_vc

0x4bad,	// (0x0002ab36) list_form_graphic_pane_vc_g1

0x4bb5,	// (0x0002ab3e) list_form_graphic_pane_vc_t1_ParamLimits

0x4bb5,	// (0x0002ab3e) list_form_graphic_pane_vc_t1

0xc89f,	// (0x00032828) list_highlight_pane_cp5_vc_ParamLimits

0xc89f,	// (0x00032828) list_highlight_pane_cp5_vc

0x4bd1,	// (0x0002ab5a) list_form_graphic_pane_vc_ParamLimits

0x4bd1,	// (0x0002ab5a) list_form_graphic_pane_vc

0x2e60,	// (0x00028de9) form_field_popup_pane_vc_g1

0x4be7,	// (0x0002ab70) form_field_popup_pane_vc_t1_ParamLimits

0x4be7,	// (0x0002ab70) form_field_popup_pane_vc_t1

0xcc51,	// (0x00032bda) input_focus_pane_cp7_vc_ParamLimits

0xcc51,	// (0x00032bda) input_focus_pane_cp7_vc

0x4bfe,	// (0x0002ab87) list_form_pane_vc_ParamLimits

0x4bfe,	// (0x0002ab87) list_form_pane_vc

0x4c0a,	// (0x0002ab93) data_form_pane_vc_t1_ParamLimits

0x4c0a,	// (0x0002ab93) data_form_pane_vc_t1

0xccac,	// (0x00032c35) input_focus_pane_vc_g1

0xccb4,	// (0x00032c3d) input_focus_pane_vc_g2

0xccbc,	// (0x00032c45) input_focus_pane_vc_g3

0xccc4,	// (0x00032c4d) input_focus_pane_vc_g4

0xcccc,	// (0x00032c55) input_focus_pane_vc_g5

0xccd4,	// (0x00032c5d) input_focus_pane_vc_g6

0xccdc,	// (0x00032c65) input_focus_pane_vc_g7

0xcce4,	// (0x00032c6d) input_focus_pane_vc_g8

0xccec,	// (0x00032c75) input_focus_pane_vc_g9

0xc839,	// (0x000327c2) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x00035610) input_focus_pane_vc_g

0x2e54,	// (0x00028ddd) data_form_pane_vc_ParamLimits

0x2e54,	// (0x00028ddd) data_form_pane_vc

0x2e60,	// (0x00028de9) form_field_data_pane_vc_g1

0x4c25,	// (0x0002abae) form_field_data_pane_vc_t1_ParamLimits

0x4c25,	// (0x0002abae) form_field_data_pane_vc_t1

0xcc51,	// (0x00032bda) input_focus_pane_vc_ParamLimits

0xcc51,	// (0x00032bda) input_focus_pane_vc

0x4c3f,	// (0x0002abc8) button_value_adjust_pane_cp3_vc

0x4c47,	// (0x0002abd0) button_value_adjust_pane_cp5_vc

0x4c4f,	// (0x0002abd8) form_field_data_pane_vc_ParamLimits

0x4c4f,	// (0x0002abd8) form_field_data_pane_vc

0x4c66,	// (0x0002abef) form_field_data_pane_vc_cp2

0x4c6e,	// (0x0002abf7) form_field_data_wide_pane_vc_ParamLimits

0x4c6e,	// (0x0002abf7) form_field_data_wide_pane_vc

0x4c84,	// (0x0002ac0d) form_field_data_wide_pane_vc_cp2

0x4c8c,	// (0x0002ac15) form_field_popup_pane_vc_ParamLimits

0x4c8c,	// (0x0002ac15) form_field_popup_pane_vc

0x4ca3,	// (0x0002ac2c) form_field_popup_wide_pane_vc_ParamLimits

0x4ca3,	// (0x0002ac2c) form_field_popup_wide_pane_vc

0x4cb9,	// (0x0002ac42) form_field_slider_pane_vc_ParamLimits

0x4cb9,	// (0x0002ac42) form_field_slider_pane_vc

0x4ccc,	// (0x0002ac55) form_field_slider_wide_pane_vc_ParamLimits

0x4ccc,	// (0x0002ac55) form_field_slider_wide_pane_vc

0xbe84,	// (0x00031e0d) grid_touch_1_pane_ParamLimits

0xbe84,	// (0x00031e0d) grid_touch_1_pane

0xbe98,	// (0x00031e21) grid_touch_2_pane_ParamLimits

0xbe98,	// (0x00031e21) grid_touch_2_pane

0x4d9a,	// (0x0002ad23) touch_pane_g1_ParamLimits

0x4d9a,	// (0x0002ad23) touch_pane_g1

0x4d03,	// (0x0002ac8c) cell_app_pane_cp_wide_ParamLimits

0x4d03,	// (0x0002ac8c) cell_app_pane_cp_wide

0x4d14,	// (0x0002ac9d) grid_popup_fast_wide_pane_ParamLimits

0x4d14,	// (0x0002ac9d) grid_popup_fast_wide_pane

0x4d28,	// (0x0002acb1) scroll_pane_cp19_ParamLimits

0x4d28,	// (0x0002acb1) scroll_pane_cp19

0xc843,	// (0x000327cc) bg_popup_window_pane_cp20

0x4d3c,	// (0x0002acc5) listscroll_popup_fast_wide_pane

0xd230,	// (0x000331b9) grid_indicator_nsta_pane

0x4d44,	// (0x0002accd) clock_nsta_pane_g1

0x4d4d,	// (0x0002acd6) clock_nsta_pane_t1

0xbec2,	// (0x00031e4b) cell_indicator_nsta_pane_ParamLimits

0xbec2,	// (0x00031e4b) cell_indicator_nsta_pane

0x4d9a,	// (0x0002ad23) cell_indicator_nsta_pane_g1

0xbed9,	// (0x00031e62) cell_indicator_nsta_pane_g2

0x0001,

0xfaa0,	// (0x00035a29) cell_indicator_nsta_pane_g

0x4db5,	// (0x0002ad3e) clock_nsta_pane_cp

0x4dbd,	// (0x0002ad46) indicator_nsta_pane_cp

0x4dc5,	// (0x0002ad4e) nsta_clock_indic_pane_g1

0xc8db,	// (0x00032864) grid_indicator_pane

0xa224,	// (0x000301ad) scroll_pane_cp29

0x055a,	// (0x000264e3) indicator_nsta_pane_cp2_ParamLimits

0x055a,	// (0x000264e3) indicator_nsta_pane_cp2

0xc89f,	// (0x00032828) main_apps_wheel_pane

0xb476,	// (0x000313ff) form_midp_field_text_pane_ParamLimits

0x31c1,	// (0x0002914a) scroll_bar_cp050_ParamLimits

0x4e26,	// (0x0002adaf) cell_indicator_pane_ParamLimits

0x4e26,	// (0x0002adaf) cell_indicator_pane

0x4e3f,	// (0x0002adc8) cell_indicator_pane_g1

0xbef8,	// (0x00031e81) grid_wheel_folder_pane_ParamLimits

0xbef8,	// (0x00031e81) grid_wheel_folder_pane

0xbf06,	// (0x00031e8f) list_wheel_apps_pane_ParamLimits

0xbf06,	// (0x00031e8f) list_wheel_apps_pane

0xbf14,	// (0x00031e9d) main_apps_wheel_pane_g1_ParamLimits

0xbf14,	// (0x00031e9d) main_apps_wheel_pane_g1

0xbf20,	// (0x00031ea9) main_apps_wheel_pane_g2_ParamLimits

0xbf20,	// (0x00031ea9) main_apps_wheel_pane_g2

0x0001,

0xfabc,	// (0x00035a45) main_apps_wheel_pane_g_ParamLimits

0xfabc,	// (0x00035a45) main_apps_wheel_pane_g

0xbf2e,	// (0x00031eb7) main_apps_wheel_pane_t1_ParamLimits

0xbf2e,	// (0x00031eb7) main_apps_wheel_pane_t1

0xbf42,	// (0x00031ecb) list_wheel_apps_pane_g1

0xbf4a,	// (0x00031ed3) list_wheel_apps_pane_g2

0xbf52,	// (0x00031edb) list_wheel_apps_pane_g3

0xbf5a,	// (0x00031ee3) list_wheel_apps_pane_g4

0xbf64,	// (0x00031eed) list_wheel_apps_pane_g5

0x0004,

0xfac1,	// (0x00035a4a) list_wheel_apps_pane_g

0x0858,	// (0x000267e1) navi_icon_text_pane

0xaecf,	// (0x00030e58) aid_fill_nsta

0x4f06,	// (0x0002ae8f) navi_icon_text_pane_g1

0x4f12,	// (0x0002ae9b) navi_icon_text_pane_t1

0x06fb,	// (0x00026684) list_set_graphic_pane_t1_ParamLimits

0x06fb,	// (0x00026684) list_set_graphic_pane_t1

0x38f0,	// (0x00029879) popup_midp_note_alarm_window_t6_ParamLimits

0x38f0,	// (0x00029879) popup_midp_note_alarm_window_t6

0x3902,	// (0x0002988b) popup_midp_note_alarm_window_t7_ParamLimits

0x3902,	// (0x0002988b) popup_midp_note_alarm_window_t7

0x3914,	// (0x0002989d) popup_midp_note_alarm_window_t8_ParamLimits

0x3914,	// (0x0002989d) popup_midp_note_alarm_window_t8

0x3926,	// (0x000298af) popup_midp_note_alarm_window_t9_ParamLimits

0x3926,	// (0x000298af) popup_midp_note_alarm_window_t9

0x3938,	// (0x000298c1) popup_midp_note_alarm_window_t10_ParamLimits

0x3938,	// (0x000298c1) popup_midp_note_alarm_window_t10

0x394a,	// (0x000298d3) popup_midp_note_alarm_window_t11_ParamLimits

0x394a,	// (0x000298d3) popup_midp_note_alarm_window_t11

0xb7ce,	// (0x00031757) scroll_pane_cp17_ParamLimits

0xb7ce,	// (0x00031757) scroll_pane_cp17

0x1b47,	// (0x00027ad0) volume_small_pane_cp_g1

0x1e93,	// (0x00027e1c) volume_small_pane_cp_g2

0x1e9c,	// (0x00027e25) volume_small_pane_cp_g3

0x1ea5,	// (0x00027e2e) volume_small_pane_cp_g4

0x1eae,	// (0x00027e37) volume_small_pane_cp_g5

0x1e5d,	// (0x00027de6) volume_small_pane_cp_g6

0x1eb7,	// (0x00027e40) volume_small_pane_cp_g7

0x1ec0,	// (0x00027e49) volume_small_pane_cp_g8

0x1ec9,	// (0x00027e52) volume_small_pane_cp_g9

0x1ed2,	// (0x00027e5b) volume_small_pane_cp_g10

0x0aad,	// (0x00026a36) midp_ticker_pane_g1_ParamLimits

0x0ab9,	// (0x00026a42) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x000356dc) midp_ticker_pane_g_ParamLimits

0x0ac5,	// (0x00026a4e) midp_ticker_pane_t1_ParamLimits

0xaef3,	// (0x00030e7c) aid_fill_nsta_2

0x31ad,	// (0x00029136) list_form2_midp_pane

0x42b5,	// (0x0002a23e) midp_editing_number_pane_ParamLimits

0x42c4,	// (0x0002a24d) midp_ticker_pane_ParamLimits

0x4f24,	// (0x0002aead) form2_midp_field_pane

0x4f48,	// (0x0002aed1) scroll_pane_cp51

0x4f68,	// (0x0002aef1) form2_midp_button_pane_ParamLimits

0x4f68,	// (0x0002aef1) form2_midp_button_pane

0x4f7a,	// (0x0002af03) form2_midp_content_pane_ParamLimits

0x4f7a,	// (0x0002af03) form2_midp_content_pane

0x4f94,	// (0x0002af1d) form2_midp_field_choice_group_pane

0x4f9c,	// (0x0002af25) form2_midp_field_pane_g1

0x4fa4,	// (0x0002af2d) form2_midp_field_pane_g2

0x4fac,	// (0x0002af35) form2_midp_field_pane_g3

0x4fb4,	// (0x0002af3d) form2_midp_field_pane_g4

0x0003,

0xfae6,	// (0x00035a6f) form2_midp_field_pane_g

0x4fbc,	// (0x0002af45) form2_midp_gauge_slider_pane

0x4fc4,	// (0x0002af4d) form2_midp_gauge_wait_pane

0x4fcc,	// (0x0002af55) form2_midp_image_pane_ParamLimits

0x4fcc,	// (0x0002af55) form2_midp_image_pane

0xbf97,	// (0x00031f20) form2_midp_label_pane_ParamLimits

0xbf97,	// (0x00031f20) form2_midp_label_pane

0xbfb0,	// (0x00031f39) form2_midp_label_pane_cp_ParamLimits

0xbfb0,	// (0x00031f39) form2_midp_label_pane_cp

0x5021,	// (0x0002afaa) form2_midp_string_pane_ParamLimits

0x5021,	// (0x0002afaa) form2_midp_string_pane

0xf0ed,	// (0x00035076) form2_midp_text_pane_ParamLimits

0xf0ed,	// (0x00035076) form2_midp_text_pane

0x5033,	// (0x0002afbc) form2_midp_time_pane

0x5043,	// (0x0002afcc) input_focus_pane_cp51_ParamLimits

0x5043,	// (0x0002afcc) input_focus_pane_cp51

0xbfcf,	// (0x00031f58) form2_midp_label_pane_t1_ParamLimits

0xbfcf,	// (0x00031f58) form2_midp_label_pane_t1

0xf106,	// (0x0003508f) form2_mdip_text_pane_t1_ParamLimits

0xf106,	// (0x0003508f) form2_mdip_text_pane_t1

0xf124,	// (0x000350ad) form2_midp_time_pane_t1

0x50a4,	// (0x0002b02d) form2_midp_gauge_slider_pane_t1

0xc00f,	// (0x00031f98) form2_midp_gauge_slider_pane_t2

0xc021,	// (0x00031faa) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaef,	// (0x00035a78) form2_midp_gauge_slider_pane_t

0x50da,	// (0x0002b063) form2_midp_slider_pane

0x50e6,	// (0x0002b06f) form2_midp_gauge_wait_pane_t1

0x50f4,	// (0x0002b07d) form2_midp_wait_pane_ParamLimits

0x50f4,	// (0x0002b07d) form2_midp_wait_pane

0xc033,	// (0x00031fbc) list_single_2graphic_pane_cp4_ParamLimits

0xc033,	// (0x00031fbc) list_single_2graphic_pane_cp4

0xb3cc,	// (0x00031355) list_single_midp_graphic_pane_cp_ParamLimits

0xb3cc,	// (0x00031355) list_single_midp_graphic_pane_cp

0xc843,	// (0x000327cc) list_highlight_pane_cp20

0x5147,	// (0x0002b0d0) list_single_2graphic_pane_g1_cp4

0x473f,	// (0x0002a6c8) list_single_2graphic_pane_g2_cp4

0x514f,	// (0x0002b0d8) list_single_2graphic_pane_t1_cp4

0xc89f,	// (0x00032828) list_highlight_pane_cp21

0x515e,	// (0x0002b0e7) list_single_midp_graphic_pane_g4_cp

0x516d,	// (0x0002b0f6) list_single_midp_graphic_pane_t1_cp

0xc048,	// (0x00031fd1) form2_mdip_string_pane_t1_ParamLimits

0xc048,	// (0x00031fd1) form2_mdip_string_pane_t1

0xc843,	// (0x000327cc) bg_wml_button_pane_cp2

0xc839,	// (0x000327c2) form2_midp_image_pane_g1

0xec2a,	// (0x00034bb3) list_double_large_graphic_pane_g5_ParamLimits

0xec2a,	// (0x00034bb3) list_double_large_graphic_pane_g5

0x0f27,	// (0x00026eb0) midp_form_pane_ParamLimits

0xc89f,	// (0x00032828) main_apps_wheel_pane_ParamLimits

0xabad,	// (0x00030b36) popup_preview_window_ParamLimits

0xabad,	// (0x00030b36) popup_preview_window

0xae7a,	// (0x00030e03) popup_touch_info_window_ParamLimits

0xae7a,	// (0x00030e03) popup_touch_info_window

0xae98,	// (0x00030e21) popup_touch_menu_window_ParamLimits

0xae98,	// (0x00030e21) popup_touch_menu_window

0xc82f,	// (0x000327b8) bg_popup_sub_pane_cp6

0x528f,	// (0x0002b218) list_touch_menu_pane

0xc0c0,	// (0x00032049) list_single_touch_menu_pane_ParamLimits

0xc0c0,	// (0x00032049) list_single_touch_menu_pane

0xc0d4,	// (0x0003205d) list_single_touch_menu_pane_t1

0xc89f,	// (0x00032828) bg_popup_sub_pane_cp7_ParamLimits

0xc89f,	// (0x00032828) bg_popup_sub_pane_cp7

0x52bb,	// (0x0002b244) heading_sub_pane

0x52c3,	// (0x0002b24c) list_touch_info_pane_ParamLimits

0x52c3,	// (0x0002b24c) list_touch_info_pane

0x52d2,	// (0x0002b25b) list_single_touch_info_pane_ParamLimits

0x52d2,	// (0x0002b25b) list_single_touch_info_pane

0x52e4,	// (0x0002b26d) list_single_touch_info_pane_t1

0x52f2,	// (0x0002b27b) list_single_touch_info_pane_t2

0x0001,

0xfafd,	// (0x00035a86) list_single_touch_info_pane_t

0x09d8,	// (0x00026961) bg_popup_heading_pane_cp

0x5300,	// (0x0002b289) heading_sub_pane_t1

0x2dee,	// (0x00028d77) bg_popup_preview_window_pane_cp_ParamLimits

0x2dee,	// (0x00028d77) bg_popup_preview_window_pane_cp

0x52bb,	// (0x0002b244) heading_preview_pane

0x52c3,	// (0x0002b24c) list_preview_pane_ParamLimits

0x52c3,	// (0x0002b24c) list_preview_pane

0x530e,	// (0x0002b297) popup_preview_window_g1

0x52d2,	// (0x0002b25b) list_single_preview_pane_ParamLimits

0x52d2,	// (0x0002b25b) list_single_preview_pane

0x5316,	// (0x0002b29f) list_single_preview_pane_g1

0x531e,	// (0x0002b2a7) list_single_preview_pane_t1

0x52e4,	// (0x0002b26d) list_single_preview_pane_t2

0x0001,

0xfb02,	// (0x00035a8b) list_single_preview_pane_t

0x532c,	// (0x0002b2b5) bg_popup_heading_pane_cp2_ParamLimits

0x532c,	// (0x0002b2b5) bg_popup_heading_pane_cp2

0x5342,	// (0x0002b2cb) heading_preview_pane_g1

0x534a,	// (0x0002b2d3) heading_preview_pane_t1_ParamLimits

0x534a,	// (0x0002b2d3) heading_preview_pane_t1

0xc8f2,	// (0x0003287b) soft_indicator_pane_t1_ParamLimits

0xcbcd,	// (0x00032b56) scroll_pane_ParamLimits

0xcf5a,	// (0x00032ee3) scroll_sc2_left_pane

0xcf63,	// (0x00032eec) scroll_sc2_right_pane

0xcf82,	// (0x00032f0b) scroll_bg_pane_g1_ParamLimits

0xcf97,	// (0x00032f20) scroll_bg_pane_g2_ParamLimits

0xcfaf,	// (0x00032f38) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x00035667) scroll_bg_pane_g_ParamLimits

0xcf82,	// (0x00032f0b) scroll_handle_pane_g1_ParamLimits

0xcfc4,	// (0x00032f4d) scroll_handle_pane_g2_ParamLimits

0xcfaf,	// (0x00032f38) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0003566e) scroll_handle_pane_g_ParamLimits

0xa754,	// (0x000306dd) popup_choice_list_window_ParamLimits

0xa754,	// (0x000306dd) popup_choice_list_window

0x1919,	// (0x000278a2) choice_list_pane

0x19cb,	// (0x00027954) cell_toolbar_pane_t1

0x19f3,	// (0x0002797c) toolbar_button_pane_ParamLimits

0x3e16,	// (0x00029d9f) ai_gene_pane_1_t2_ParamLimits

0x3e16,	// (0x00029d9f) ai_gene_pane_1_t2

0x0001,

0xf908,	// (0x00035891) ai_gene_pane_1_t_ParamLimits

0xf908,	// (0x00035891) ai_gene_pane_1_t

0x5367,	// (0x0002b2f0) scroll_sc2_left_pane_g1

0x5367,	// (0x0002b2f0) scroll_sc2_right_pane_g1

0x0f27,	// (0x00026eb0) bg_popup_sub_pane_cp10

0x5371,	// (0x0002b2fa) list_choice_list_pane

0xc0e2,	// (0x0003206b) list_single_choice_list_pane_ParamLimits

0xc0e2,	// (0x0003206b) list_single_choice_list_pane

0xd23e,	// (0x000331c7) list_single_choice_list_pane_g1

0xa04e,	// (0x0002ffd7) list_single_choice_list_pane_t1_ParamLimits

0xa04e,	// (0x0002ffd7) list_single_choice_list_pane_t1

0x53a5,	// (0x0002b32e) choice_list_pane_g1

0xc0f5,	// (0x0003207e) choice_list_pane_t1

0xc82f,	// (0x000327b8) input_focus_pane_cp11

0xcecf,	// (0x00032e58) title_pane_stacon_g2_ParamLimits

0xcecf,	// (0x00032e58) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0003564d) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0003564d) title_pane_stacon_g

0x09d8,	// (0x00026961) cursor_press_pane

0xa7fb,	// (0x00030784) popup_fep_hwr_window_ParamLimits

0xa7fb,	// (0x00030784) popup_fep_hwr_window

0x106f,	// (0x00026ff8) popup_fep_vkb_window_ParamLimits

0x106f,	// (0x00026ff8) popup_fep_vkb_window

0xc103,	// (0x0003208c) cursor_press_pane_g1

0x0002,

0xfb2b,	// (0x00035ab4) fep_vkb_side_pane_g_ParamLimits

0x1f14,	// (0x00027e9d) fep_hwr_candidate_pane_ParamLimits

0x1f14,	// (0x00027e9d) fep_hwr_candidate_pane

0x1f3e,	// (0x00027ec7) fep_hwr_side_pane_ParamLimits

0x1f3e,	// (0x00027ec7) fep_hwr_side_pane

0x1f5e,	// (0x00027ee7) fep_hwr_top_pane_ParamLimits

0x1f5e,	// (0x00027ee7) fep_hwr_top_pane

0x1f76,	// (0x00027eff) fep_hwr_write_pane_ParamLimits

0x1f76,	// (0x00027eff) fep_hwr_write_pane

0xfb2b,	// (0x00035ab4) fep_vkb_side_pane_g

0x53c3,	// (0x0002b34c) fep_hwr_top_pane_g1

0x53d5,	// (0x0002b35e) fep_hwr_top_pane_g2

0x1fa2,	// (0x00027f2b) fep_hwr_top_pane_g3

0x0002,

0xfb07,	// (0x00035a90) fep_hwr_top_pane_g

0x1fb7,	// (0x00027f40) fep_hwr_top_text_pane

0xd087,	// (0x00033010) fep_hwr_top_text_pane_g1

0x540b,	// (0x0002b394) fep_hwr_top_text_pane_t1

0x20ad,	// (0x00028036) fep_hwr_candidate_pane_g1

0x5650,	// (0x0002b5d9) fep_vkb_keypad_pane_g3_ParamLimits

0x5650,	// (0x0002b5d9) fep_vkb_keypad_pane_g3

0x5678,	// (0x0002b601) fep_vkb_keypad_pane_g4_ParamLimits

0x5678,	// (0x0002b601) fep_vkb_keypad_pane_g4

0x56e7,	// (0x0002b670) fep_vkb_bottom_pane_g2_ParamLimits

0x56e7,	// (0x0002b670) fep_vkb_bottom_pane_g2

0x0001,

0xfb32,	// (0x00035abb) fep_vkb_bottom_pane_g_ParamLimits

0xfb32,	// (0x00035abb) fep_vkb_bottom_pane_g

0x5367,	// (0x0002b2f0) cell_vkb_side_pane_g2

0x0001,

0xfb3c,	// (0x00035ac5) cell_vkb_side_pane_g

0x5772,	// (0x0002b6fb) cell_vkb_side_pane_t1

0x5780,	// (0x0002b709) cell_vkb_side_pane_t1_copy1

0x5367,	// (0x0002b2f0) bg_fep_vkb_candidate_pane_g2

0x58ac,	// (0x0002b835) cell_vkb_candidate_pane_ParamLimits

0x5419,	// (0x0002b3a2) aid_size_cell_vkb_ParamLimits

0x5419,	// (0x0002b3a2) aid_size_cell_vkb

0x58ac,	// (0x0002b835) cell_vkb_candidate_pane

0x20c7,	// (0x00028050) bg_popup_fep_shadow_pane_g1

0xd26e,	// (0x000331f7) fep_vkb_bottom_pane_ParamLimits

0xd26e,	// (0x000331f7) fep_vkb_bottom_pane

0x54dd,	// (0x0002b466) fep_vkb_candidate_pane_ParamLimits

0x54dd,	// (0x0002b466) fep_vkb_candidate_pane

0xd293,	// (0x0003321c) fep_vkb_keypad_pane_ParamLimits

0xd293,	// (0x0003321c) fep_vkb_keypad_pane

0xd2c8,	// (0x00033251) fep_vkb_side_pane_ParamLimits

0xd2c8,	// (0x00033251) fep_vkb_side_pane

0xd304,	// (0x0003328d) fep_vkb_top_pane_ParamLimits

0xd304,	// (0x0003328d) fep_vkb_top_pane

0x55a9,	// (0x0002b532) fep_vkb_top_pane_g1_ParamLimits

0x55a9,	// (0x0002b532) fep_vkb_top_pane_g1

0x55b8,	// (0x0002b541) fep_vkb_top_pane_g2_ParamLimits

0x55b8,	// (0x0002b541) fep_vkb_top_pane_g2

0x55c7,	// (0x0002b550) fep_vkb_top_pane_g3_ParamLimits

0x55c7,	// (0x0002b550) fep_vkb_top_pane_g3

0x0003,

0xfb22,	// (0x00035aab) fep_vkb_top_pane_g_ParamLimits

0xfb22,	// (0x00035aab) fep_vkb_top_pane_g

0x55e5,	// (0x0002b56e) fep_vkb_top_text_pane_ParamLimits

0x55e5,	// (0x0002b56e) fep_vkb_top_text_pane

0xd339,	// (0x000332c2) fep_vkb_side_pane_g1_ParamLimits

0xd339,	// (0x000332c2) fep_vkb_side_pane_g1

0x563f,	// (0x0002b5c8) grid_vkb_side_pane_ParamLimits

0x563f,	// (0x0002b5c8) grid_vkb_side_pane

0x20cf,	// (0x00028058) bg_popup_fep_shadow_pane_g2

0x20d8,	// (0x00028061) bg_popup_fep_shadow_pane_g3

0x20e0,	// (0x00028069) bg_popup_fep_shadow_pane_g4

0x20e9,	// (0x00028072) bg_popup_fep_shadow_pane_g5

0x20f3,	// (0x0002807c) bg_popup_fep_shadow_pane_g6

0x20fb,	// (0x00028084) bg_popup_fep_shadow_pane_g7

0xcccc,	// (0x00032c55) bg_popup_fep_shadow_pane_g8

0x5696,	// (0x0002b61f) grid_vkb_keypad_number_pane_ParamLimits

0x5696,	// (0x0002b61f) grid_vkb_keypad_number_pane

0x56a6,	// (0x0002b62f) grid_vkb_keypad_pane_ParamLimits

0x56a6,	// (0x0002b62f) grid_vkb_keypad_pane

0x56cc,	// (0x0002b655) fep_vkb_bottom_pane_g1_ParamLimits

0x56cc,	// (0x0002b655) fep_vkb_bottom_pane_g1

0x56f5,	// (0x0002b67e) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x56f5,	// (0x0002b67e) grid_vkb_keypad_bottom_left_pane

0x570a,	// (0x0002b693) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x570a,	// (0x0002b693) grid_vkb_keypad_bottom_right_pane

0x571f,	// (0x0002b6a8) fep_vkb_top_text_pane_g1

0xd380,	// (0x00033309) fep_vkb_top_text_pane_t1

0xd392,	// (0x0003331b) cell_vkb_side_pane_ParamLimits

0xd392,	// (0x0003331b) cell_vkb_side_pane

0x5367,	// (0x0002b2f0) cell_vkb_side_pane_g1

0x578e,	// (0x0002b717) cell_vkb_keypad_pane_ParamLimits

0x578e,	// (0x0002b717) cell_vkb_keypad_pane

0x5803,	// (0x0002b78c) cell_vkb_keypad_pane_g1

0x0008,

0xfb4f,	// (0x00035ad8) bg_popup_fep_shadow_pane_g

0x5367,	// (0x0002b2f0) cell_hwr_side_pane_g1

0x5367,	// (0x0002b2f0) cell_hwr_side_pane_g2

0x580d,	// (0x0002b796) cell_vkb_keypad_pane_t1

0xd3a8,	// (0x00033331) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd3a8,	// (0x00033331) cell_vkb_keypad_bottom_left_pane

0xd3bd,	// (0x00033346) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd3bd,	// (0x00033346) cell_vkb_keypad_bottom_right_pane

0x5367,	// (0x0002b2f0) cell_vkb_keypad_bottom_left_pane_g1

0x5367,	// (0x0002b2f0) cell_vkb_keypad_bottom_right_pane_g1

0x5871,	// (0x0002b7fa) cell_vkb_keypad_number_pane_ParamLimits

0x5871,	// (0x0002b7fa) cell_vkb_keypad_number_pane

0x5890,	// (0x0002b819) cell_vkb_keypad_number_pane_g1

0x589a,	// (0x0002b823) cell_vkb_keypad_number_pane_g2

0x58a3,	// (0x0002b82c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb41,	// (0x00035aca) cell_vkb_keypad_number_pane_g

0x580d,	// (0x0002b796) cell_vkb_keypad_number_pane_t1

0x58c7,	// (0x0002b850) fep_vkb_candidate_pane_g1

0x0001,

0xfb3c,	// (0x00035ac5) cell_hwr_side_pane_g

0x58e0,	// (0x0002b869) cell_hwr_side_pane_t1

0x210d,	// (0x00028096) cell_hwr_side_pane_t1_copy1

0x55d7,	// (0x0002b560) cell_hwr_candidate_pane_g1

0x211b,	// (0x000280a4) cell_hwr_candidate_pane_t1

0x5367,	// (0x0002b2f0) cell_vkb_candidate_pane_g2

0x5966,	// (0x0002b8ef) cell_vkb_candidate_pane_t1

0x1edb,	// (0x00027e64) bg_popup_fep_shadow_pane_ParamLimits

0x1edb,	// (0x00027e64) bg_popup_fep_shadow_pane

0xd246,	// (0x000331cf) bg_fep_hwr_top_pane_g4

0x53e7,	// (0x0002b370) bg_hwr_side_pane_g1_ParamLimits

0x53e7,	// (0x0002b370) bg_hwr_side_pane_g1

0xc123,	// (0x000320ac) cell_hwr_side_pane_ParamLimits

0xc123,	// (0x000320ac) cell_hwr_side_pane

0x202e,	// (0x00027fb7) fep_hwr_write_pane_g1_ParamLimits

0x202e,	// (0x00027fb7) fep_hwr_write_pane_g1

0x203b,	// (0x00027fc4) fep_hwr_write_pane_g2_ParamLimits

0x203b,	// (0x00027fc4) fep_hwr_write_pane_g2

0x2048,	// (0x00027fd1) fep_hwr_write_pane_g3_ParamLimits

0x2048,	// (0x00027fd1) fep_hwr_write_pane_g3

0xc143,	// (0x000320cc) fep_hwr_write_pane_g4_ParamLimits

0xc143,	// (0x000320cc) fep_hwr_write_pane_g4

0x0005,

0xfb0e,	// (0x00035a97) fep_hwr_write_pane_g_ParamLimits

0xfb0e,	// (0x00035a97) fep_hwr_write_pane_g

0xd246,	// (0x000331cf) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd246,	// (0x000331cf) bg_fep_hwr_candidate_pane_g2

0x206b,	// (0x00027ff4) cell_hwr_candidate_pane_ParamLimits

0x206b,	// (0x00027ff4) cell_hwr_candidate_pane

0x20ad,	// (0x00028036) fep_hwr_candidate_pane_g1_ParamLimits

0x5447,	// (0x0002b3d0) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x5447,	// (0x0002b3d0) bg_popup_fep_shadow_pane_cp2

0x55d7,	// (0x0002b560) fep_vkb_top_pane_g4_ParamLimits

0x55d7,	// (0x0002b560) fep_vkb_top_pane_g4

0x561d,	// (0x0002b5a6) fep_vkb_side_pane_g2_ParamLimits

0x561d,	// (0x0002b5a6) fep_vkb_side_pane_g2

0x9229,	// (0x0002f1b2) list_setting_pane_t4_ParamLimits

0x9229,	// (0x0002f1b2) list_setting_pane_t4

0x92c3,	// (0x0002f24c) list_setting_number_pane_t5_ParamLimits

0x92c3,	// (0x0002f24c) list_setting_number_pane_t5

0xd0be,	// (0x00033047) list_double_heading_pane_cp2_ParamLimits

0xd0be,	// (0x00033047) list_double_heading_pane_cp2

0x5974,	// (0x0002b8fd) list_double_heading_pane_g1_cp2_ParamLimits

0x5974,	// (0x0002b8fd) list_double_heading_pane_g1_cp2

0x5980,	// (0x0002b909) list_double_heading_pane_g2_cp2_ParamLimits

0x5980,	// (0x0002b909) list_double_heading_pane_g2_cp2

0x5994,	// (0x0002b91d) list_double_heading_pane_t1_cp2_ParamLimits

0x5994,	// (0x0002b91d) list_double_heading_pane_t1_cp2

0x59aa,	// (0x0002b933) list_double_heading_pane_t2_cp2_ParamLimits

0x59aa,	// (0x0002b933) list_double_heading_pane_t2_cp2

0xc827,	// (0x000327b0) aid_value_unit2

0xf544,	// (0x000354cd) popup_preview_fixed_window

0xc9c9,	// (0x00032952) bg_popup_preview_window_pane_cp02

0x59bc,	// (0x0002b945) list_preview_fixed_pane

0x5a02,	// (0x0002b98b) list_empty_pane_fp_ParamLimits

0x5a02,	// (0x0002b98b) list_empty_pane_fp

0x5a02,	// (0x0002b98b) list_single_cale_day_pane_fp_ParamLimits

0x5a02,	// (0x0002b98b) list_single_cale_day_pane_fp

0x5a02,	// (0x0002b98b) list_single_graphic_heading_pane_fp_ParamLimits

0x5a02,	// (0x0002b98b) list_single_graphic_heading_pane_fp

0x5a02,	// (0x0002b98b) list_single_graphic_pane_fp_ParamLimits

0x5a02,	// (0x0002b98b) list_single_graphic_pane_fp

0x5a02,	// (0x0002b98b) list_single_heading_pane_fp_ParamLimits

0x5a02,	// (0x0002b98b) list_single_heading_pane_fp

0x5a02,	// (0x0002b98b) list_single_pane_fp_ParamLimits

0x5a02,	// (0x0002b98b) list_single_pane_fp

0x5a18,	// (0x0002b9a1) list_single_pane_fp_g1_ParamLimits

0x5a18,	// (0x0002b9a1) list_single_pane_fp_g1

0xf137,	// (0x000350c0) list_single_pane_fp_g2_ParamLimits

0xf137,	// (0x000350c0) list_single_pane_fp_g2

0xf143,	// (0x000350cc) list_single_pane_fp_g3_ParamLimits

0xf143,	// (0x000350cc) list_single_pane_fp_g3

0x5a24,	// (0x0002b9ad) list_single_pane_fp_g4_ParamLimits

0x5a24,	// (0x0002b9ad) list_single_pane_fp_g4

0x0003,

0xfb70,	// (0x00035af9) list_single_pane_fp_g_ParamLimits

0xfb70,	// (0x00035af9) list_single_pane_fp_g

0xf157,	// (0x000350e0) list_single_pane_fp_t1_ParamLimits

0xf157,	// (0x000350e0) list_single_pane_fp_t1

0xf16e,	// (0x000350f7) list_single_graphic_pane_fp_g1_ParamLimits

0xf16e,	// (0x000350f7) list_single_graphic_pane_fp_g1

0x5a18,	// (0x0002b9a1) list_single_graphic_pane_fp_g2_ParamLimits

0x5a18,	// (0x0002b9a1) list_single_graphic_pane_fp_g2

0xf137,	// (0x000350c0) list_single_graphic_pane_fp_g3_ParamLimits

0xf137,	// (0x000350c0) list_single_graphic_pane_fp_g3

0xf143,	// (0x000350cc) list_single_graphic_pane_fp_g4_ParamLimits

0xf143,	// (0x000350cc) list_single_graphic_pane_fp_g4

0x5a24,	// (0x0002b9ad) list_single_graphic_pane_fp_g5_ParamLimits

0x5a24,	// (0x0002b9ad) list_single_graphic_pane_fp_g5

0x0004,

0xfb79,	// (0x00035b02) list_single_graphic_pane_fp_g_ParamLimits

0xfb79,	// (0x00035b02) list_single_graphic_pane_fp_g

0xf17a,	// (0x00035103) list_single_graphic_pane_fp_t1_ParamLimits

0xf17a,	// (0x00035103) list_single_graphic_pane_fp_t1

0xf16e,	// (0x000350f7) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf16e,	// (0x000350f7) list_single_graphic_heading_pane_fp_g1

0x5a18,	// (0x0002b9a1) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5a18,	// (0x0002b9a1) list_single_graphic_heading_pane_fp_g2

0xf137,	// (0x000350c0) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xf137,	// (0x000350c0) list_single_graphic_heading_pane_fp_g3

0xf143,	// (0x000350cc) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xf143,	// (0x000350cc) list_single_graphic_heading_pane_fp_g4

0x5a24,	// (0x0002b9ad) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5a24,	// (0x0002b9ad) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb79,	// (0x00035b02) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb79,	// (0x00035b02) list_single_graphic_heading_pane_fp_g

0xf190,	// (0x00035119) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf190,	// (0x00035119) list_single_graphic_heading_pane_fp_t1

0xf1a6,	// (0x0003512f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf1a6,	// (0x0003512f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb84,	// (0x00035b0d) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb84,	// (0x00035b0d) list_single_graphic_heading_pane_fp_t

0xf1b8,	// (0x00035141) list_single_cale_day_pane_fp_g1_ParamLimits

0xf1b8,	// (0x00035141) list_single_cale_day_pane_fp_g1

0x5a30,	// (0x0002b9b9) list_single_cale_day_pane_fp_g2_ParamLimits

0x5a30,	// (0x0002b9b9) list_single_cale_day_pane_fp_g2

0xf1f0,	// (0x00035179) list_single_cale_day_pane_fp_g3_ParamLimits

0xf1f0,	// (0x00035179) list_single_cale_day_pane_fp_g3

0xf218,	// (0x000351a1) list_single_cale_day_pane_fp_g4_ParamLimits

0xf218,	// (0x000351a1) list_single_cale_day_pane_fp_g4

0xf23c,	// (0x000351c5) list_single_cale_day_pane_fp_g5_ParamLimits

0xf23c,	// (0x000351c5) list_single_cale_day_pane_fp_g5

0x0004,

0xfb89,	// (0x00035b12) list_single_cale_day_pane_fp_g_ParamLimits

0xfb89,	// (0x00035b12) list_single_cale_day_pane_fp_g

0xf260,	// (0x000351e9) list_single_cale_day_pane_fp_t1_ParamLimits

0xf260,	// (0x000351e9) list_single_cale_day_pane_fp_t1

0xf286,	// (0x0003520f) list_single_cale_day_pane_fp_t2_ParamLimits

0xf286,	// (0x0003520f) list_single_cale_day_pane_fp_t2

0xf29f,	// (0x00035228) list_single_cale_day_pane_fp_t3_ParamLimits

0xf29f,	// (0x00035228) list_single_cale_day_pane_fp_t3

0x0002,

0xfb94,	// (0x00035b1d) list_single_cale_day_pane_fp_t_ParamLimits

0xfb94,	// (0x00035b1d) list_single_cale_day_pane_fp_t

0x5a18,	// (0x0002b9a1) list_empty_pane_fp_g1_ParamLimits

0x5a18,	// (0x0002b9a1) list_empty_pane_fp_g1

0xf2b8,	// (0x00035241) list_empty_pane_fp_t1

0xf2c6,	// (0x0003524f) list_empty_pane_fp_t2

0x0001,

0xfb9b,	// (0x00035b24) list_empty_pane_fp_t

0x5a18,	// (0x0002b9a1) list_single_heading_pane_fp_g1_ParamLimits

0x5a18,	// (0x0002b9a1) list_single_heading_pane_fp_g1

0xf137,	// (0x000350c0) list_single_heading_pane_fp_g2_ParamLimits

0xf137,	// (0x000350c0) list_single_heading_pane_fp_g2

0xf143,	// (0x000350cc) list_single_heading_pane_fp_g3_ParamLimits

0xf143,	// (0x000350cc) list_single_heading_pane_fp_g3

0x0002,

0xfba0,	// (0x00035b29) list_single_heading_pane_fp_g_ParamLimits

0xfba0,	// (0x00035b29) list_single_heading_pane_fp_g

0xf2d4,	// (0x0003525d) list_single_heading_pane_fp_t1_ParamLimits

0xf2d4,	// (0x0003525d) list_single_heading_pane_fp_t1

0xf2e6,	// (0x0003526f) list_single_heading_pane_fp_t2_ParamLimits

0xf2e6,	// (0x0003526f) list_single_heading_pane_fp_t2

0x0001,

0xfba7,	// (0x00035b30) list_single_heading_pane_fp_t_ParamLimits

0xfba7,	// (0x00035b30) list_single_heading_pane_fp_t

0xa09a,	// (0x00030023) aid_size_cell_fast

0xc9ac,	// (0x00032935) soft_indicator_pane_cp1_t1

0xa0a3,	// (0x0003002c) cell_app_pane_cp2_ParamLimits

0xa0a3,	// (0x0003002c) cell_app_pane_cp2

0x1efd,	// (0x00027e86) fep_hwr_candidate_drop_down_list_pane

0xd254,	// (0x000331dd) fep_hwr_candidate_pane_g3_ParamLimits

0xd254,	// (0x000331dd) fep_hwr_candidate_pane_g3

0xd261,	// (0x000331ea) fep_hwr_candidate_pane_g4_ParamLimits

0xd261,	// (0x000331ea) fep_hwr_candidate_pane_g4

0x0002,

0xfb1b,	// (0x00035aa4) fep_hwr_candidate_pane_g_ParamLimits

0xfb1b,	// (0x00035aa4) fep_hwr_candidate_pane_g

0x54cc,	// (0x0002b455) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x54cc,	// (0x0002b455) fep_vkb_candidate_drop_down_list_pane

0x58cf,	// (0x0002b858) fep_vkb_candidate_pane_g3

0x58d7,	// (0x0002b860) fep_vkb_candidate_pane_g4

0x0002,

0xfb48,	// (0x00035ad1) fep_vkb_candidate_pane_g

0x55d7,	// (0x0002b560) cell_hwr_candidate_pane_g1_ParamLimits

0x58ee,	// (0x0002b877) cell_hwr_candidate_pane_g3_ParamLimits

0x58ee,	// (0x0002b877) cell_hwr_candidate_pane_g3

0x590f,	// (0x0002b898) cell_hwr_candidate_pane_g4_ParamLimits

0x590f,	// (0x0002b898) cell_hwr_candidate_pane_g4

0x0002,

0xfb62,	// (0x00035aeb) cell_hwr_candidate_pane_g_ParamLimits

0xfb62,	// (0x00035aeb) cell_hwr_candidate_pane_g

0x5930,	// (0x0002b8b9) cell_vkb_candidate_pane_g3_ParamLimits

0x5930,	// (0x0002b8b9) cell_vkb_candidate_pane_g3

0x594b,	// (0x0002b8d4) cell_vkb_candidate_pane_g4_ParamLimits

0x594b,	// (0x0002b8d4) cell_vkb_candidate_pane_g4

0xd3d8,	// (0x00033361) cell_app_pane_cp2_g1_ParamLimits

0xd3d8,	// (0x00033361) cell_app_pane_cp2_g1

0x5a5a,	// (0x0002b9e3) cell_app_pane_cp2_g2_ParamLimits

0x5a5a,	// (0x0002b9e3) cell_app_pane_cp2_g2

0x0001,

0xfbac,	// (0x00035b35) cell_app_pane_cp2_g_ParamLimits

0xfbac,	// (0x00035b35) cell_app_pane_cp2_g

0x5a66,	// (0x0002b9ef) cell_app_pane_cp2_t1_ParamLimits

0x5a66,	// (0x0002b9ef) cell_app_pane_cp2_t1

0xcc51,	// (0x00032bda) grid_highlight_pane_cp1_ParamLimits

0xcc51,	// (0x00032bda) grid_highlight_pane_cp1

0x2139,	// (0x000280c2) cell_hwr_candidate_pane_cp1_ParamLimits

0x2139,	// (0x000280c2) cell_hwr_candidate_pane_cp1

0x55d7,	// (0x0002b560) fep_hwr_candidate_drop_down_list_pane_g1

0x5a78,	// (0x0002ba01) fep_hwr_candidate_drop_down_list_pane_g2

0x5a85,	// (0x0002ba0e) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb1,	// (0x00035b3a) fep_hwr_candidate_drop_down_list_pane_g

0x2158,	// (0x000280e1) fep_hwr_candidate_drop_down_list_scroll_pane

0x2161,	// (0x000280ea) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2161,	// (0x000280ea) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x216e,	// (0x000280f7) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x216e,	// (0x000280f7) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x217b,	// (0x00028104) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x217b,	// (0x00028104) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5930,	// (0x0002b8b9) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5930,	// (0x0002b8b9) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x594b,	// (0x0002b8d4) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x594b,	// (0x0002b8d4) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2188,	// (0x00028111) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2188,	// (0x00028111) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x21a3,	// (0x0002812c) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x21a3,	// (0x0002812c) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x21be,	// (0x00028147) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x21be,	// (0x00028147) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb8,	// (0x00035b41) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb8,	// (0x00035b41) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5a92,	// (0x0002ba1b) cell_vkb_candidate_pane_cp1_ParamLimits

0x5a92,	// (0x0002ba1b) cell_vkb_candidate_pane_cp1

0x55d7,	// (0x0002b560) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x55d7,	// (0x0002b560) fep_vkb_candidate_drop_down_list_pane_g1

0x5a78,	// (0x0002ba01) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5a78,	// (0x0002ba01) fep_vkb_candidate_drop_down_list_pane_g2

0x5a85,	// (0x0002ba0e) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5a85,	// (0x0002ba0e) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb1,	// (0x00035b3a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb1,	// (0x00035b3a) fep_vkb_candidate_drop_down_list_pane_g

0x5ab2,	// (0x0002ba3b) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5ab2,	// (0x0002ba3b) fep_vkb_candidate_drop_down_list_scroll_pane

0x5abf,	// (0x0002ba48) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5abf,	// (0x0002ba48) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5acc,	// (0x0002ba55) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5acc,	// (0x0002ba55) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5ad8,	// (0x0002ba61) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5ad8,	// (0x0002ba61) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x58ee,	// (0x0002b877) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x58ee,	// (0x0002b877) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x590f,	// (0x0002b898) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x590f,	// (0x0002b898) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5ae4,	// (0x0002ba6d) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5ae4,	// (0x0002ba6d) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5b05,	// (0x0002ba8e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5b05,	// (0x0002ba8e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5b26,	// (0x0002baaf) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5b26,	// (0x0002baaf) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x00035b52) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x00035b52) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x99c4,	// (0x0002f94d) title_pane_g1_ParamLimits

0x99d7,	// (0x0002f960) title_pane_g2_ParamLimits

0xf54e,	// (0x000354d7) title_pane_g_ParamLimits

0xd077,	// (0x00033000) aid_call2_pane

0xd07f,	// (0x00033008) aid_call_pane

0xd087,	// (0x00033010) popup_clock_analogue_window_g1

0xd087,	// (0x00033010) popup_clock_analogue_window_g2

0x036a,	// (0x000262f3) popup_clock_analogue_window_g3

0x0373,	// (0x000262fc) popup_clock_analogue_window_g4

0xc839,	// (0x000327c2) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0003567c) popup_clock_analogue_window_g

0x037b,	// (0x00026304) popup_clock_analogue_window_t1

0x03b3,	// (0x0002633c) clock_digital_number_pane_ParamLimits

0x03b3,	// (0x0002633c) clock_digital_number_pane

0x03bf,	// (0x00026348) clock_digital_number_pane_cp02_ParamLimits

0x03bf,	// (0x00026348) clock_digital_number_pane_cp02

0x03cb,	// (0x00026354) clock_digital_number_pane_cp03_ParamLimits

0x03cb,	// (0x00026354) clock_digital_number_pane_cp03

0x03d7,	// (0x00026360) clock_digital_number_pane_cp04_ParamLimits

0x03d7,	// (0x00026360) clock_digital_number_pane_cp04

0x03e3,	// (0x0002636c) clock_digital_separator_pane_ParamLimits

0x03e3,	// (0x0002636c) clock_digital_separator_pane

0x03ef,	// (0x00026378) popup_clock_digital_window_t1_ParamLimits

0x03ef,	// (0x00026378) popup_clock_digital_window_t1

0xc839,	// (0x000327c2) clock_digital_number_pane_g1

0xc839,	// (0x000327c2) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x00035687) clock_digital_number_pane_g

0xc839,	// (0x000327c2) clock_digital_separator_pane_g1

0xc839,	// (0x000327c2) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x00035687) clock_digital_separator_pane_g

0xaecf,	// (0x00030e58) aid_fill_nsta_ParamLimits

0xb005,	// (0x00030f8e) indicator_nsta_pane_ParamLimits

0x17a9,	// (0x00027732) popup_clock_analogue_window

0x17a9,	// (0x00027732) popup_clock_digital_window

0xd230,	// (0x000331b9) grid_indicator_nsta_pane_ParamLimits

0x4d5b,	// (0x0002ace4) clock_nsta_pane_t2

0x0001,

0xfa9b,	// (0x00035a24) clock_nsta_pane_t

0x0295,	// (0x0002621e) aid_size_max_handle

0xa181,	// (0x0003010a) aid_size_min_handle

0x09d8,	// (0x00026961) editor_scroll_pane

0x5b41,	// (0x0002baca) ex_editor_pane

0xcd73,	// (0x00032cfc) scroll_pane_cp13

0xcbf9,	// (0x00032b82) scroll_pane_cp14

0xd0b6,	// (0x0003303f) scroll_pane_cp36

0xa24b,	// (0x000301d4) list_single_graphic_hl_pane_cp2_ParamLimits

0xa24b,	// (0x000301d4) list_single_graphic_hl_pane_cp2

0xbc68,	// (0x00031bf1) list_single_graphic_hl_pane_ParamLimits

0xbc68,	// (0x00031bf1) list_single_graphic_hl_pane

0x95dc,	// (0x0002f565) aid_size_min_hl_cp1

0x5b49,	// (0x0002bad2) list_highlight_pane_cp34_ParamLimits

0x5b49,	// (0x0002bad2) list_highlight_pane_cp34

0x5b5a,	// (0x0002bae3) list_single_graphic_hl_pane_g1_ParamLimits

0x5b5a,	// (0x0002bae3) list_single_graphic_hl_pane_g1

0x95e5,	// (0x0002f56e) list_single_graphic_hl_pane_g2_ParamLimits

0x95e5,	// (0x0002f56e) list_single_graphic_hl_pane_g2

0x95e5,	// (0x0002f56e) list_single_graphic_hl_pane_g3_ParamLimits

0x95e5,	// (0x0002f56e) list_single_graphic_hl_pane_g3

0xf2fc,	// (0x00035285) list_single_graphic_hl_pane_g4_ParamLimits

0xf2fc,	// (0x00035285) list_single_graphic_hl_pane_g4

0x95f1,	// (0x0002f57a) list_single_graphic_hl_pane_g5_ParamLimits

0x95f1,	// (0x0002f57a) list_single_graphic_hl_pane_g5

0x0004,

0xfbda,	// (0x00035b63) list_single_graphic_hl_pane_g_ParamLimits

0xfbda,	// (0x00035b63) list_single_graphic_hl_pane_g

0x9605,	// (0x0002f58e) list_single_graphic_hl_pane_t1_ParamLimits

0x9605,	// (0x0002f58e) list_single_graphic_hl_pane_t1

0x5b67,	// (0x0002baf0) aid_size_min_hl_cp2

0x5b70,	// (0x0002baf9) list_highlight_pane_cp34_cp2_ParamLimits

0x5b70,	// (0x0002baf9) list_highlight_pane_cp34_cp2

0x5b5a,	// (0x0002bae3) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5b5a,	// (0x0002bae3) list_single_graphic_hl_pane_g1_cp2

0x5b7d,	// (0x0002bb06) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5b7d,	// (0x0002bb06) list_single_graphic_hl_pane_g2_cp2

0xd3f6,	// (0x0003337f) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd3f6,	// (0x0003337f) list_single_graphic_hl_pane_g3_cp2

0x0911,	// (0x0002689a) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x0911,	// (0x0002689a) list_single_graphic_hl_pane_g4_cp2

0x5b97,	// (0x0002bb20) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5b97,	// (0x0002bb20) list_single_graphic_hl_pane_g5_cp2

0xa5e2,	// (0x0003056b) control_pane_g4_ParamLimits

0xa5e2,	// (0x0003056b) control_pane_g4

0x0f27,	// (0x00026eb0) bg_popup_sub_pane_cp10_ParamLimits

0x5371,	// (0x0002b2fa) list_choice_list_pane_ParamLimits

0x5380,	// (0x0002b309) scroll_pane_cp23

0xc9c9,	// (0x00032952) bg_popup_preview_window_pane_cp02_ParamLimits

0x59bc,	// (0x0002b945) list_preview_fixed_pane_ParamLimits

0x59d2,	// (0x0002b95b) list_preview_fixed_pane_cp_ParamLimits

0x59d2,	// (0x0002b95b) list_preview_fixed_pane_cp

0x59de,	// (0x0002b967) popup_preview_fixed_window_g1_ParamLimits

0x59de,	// (0x0002b967) popup_preview_fixed_window_g1

0x59ea,	// (0x0002b973) popup_preview_fixed_window_g2_ParamLimits

0x59ea,	// (0x0002b973) popup_preview_fixed_window_g2

0x0002,

0xfb69,	// (0x00035af2) popup_preview_fixed_window_g_ParamLimits

0xfb69,	// (0x00035af2) popup_preview_fixed_window_g

0x016f,	// (0x000260f8) aid_navi_side_left_pane_ParamLimits

0x0184,	// (0x0002610d) aid_navi_side_right_pane_ParamLimits

0x019c,	// (0x00026125) navi_icon_pane_stacon_ParamLimits

0x01b0,	// (0x00026139) navi_navi_pane_stacon_ParamLimits

0x019c,	// (0x00026125) navi_text_pane_stacon_ParamLimits

0xc82f,	// (0x000327b8) main_text_info_pane

0x5bc1,	// (0x0002bb4a) listscroll_text_info_pane

0x5bc9,	// (0x0002bb52) list_text_info_pane_ParamLimits

0x5bc9,	// (0x0002bb52) list_text_info_pane

0x5bd8,	// (0x0002bb61) scroll_pane_cp24_ParamLimits

0x5bd8,	// (0x0002bb61) scroll_pane_cp24

0xd404,	// (0x0003338d) list_text_info_pane_t1_ParamLimits

0xd404,	// (0x0003338d) list_text_info_pane_t1

0xa770,	// (0x000306f9) popup_fast_swap2_window_ParamLimits

0xa770,	// (0x000306f9) popup_fast_swap2_window

0x5c2a,	// (0x0002bbb3) aid_size_cell_fast2

0xc82f,	// (0x000327b8) bg_popup_window_pane_cp17

0x31d9,	// (0x00029162) heading_pane_cp2

0xcafd,	// (0x00032a86) listscroll_fast2_pane

0x5c34,	// (0x0002bbbd) grid_fast2_pane

0x5c3e,	// (0x0002bbc7) listscroll_fast2_pane_g1

0x5c46,	// (0x0002bbcf) listscroll_fast2_pane_g2

0x0001,

0xfbe5,	// (0x00035b6e) listscroll_fast2_pane_g

0xcd73,	// (0x00032cfc) scroll_pane_cp26

0x5c50,	// (0x0002bbd9) cell_fast2_pane_ParamLimits

0x5c50,	// (0x0002bbd9) cell_fast2_pane

0x5c65,	// (0x0002bbee) cell_fast2_pane_g1

0x5c6e,	// (0x0002bbf7) cell_fast2_pane_g2

0x5c77,	// (0x0002bc00) cell_fast2_pane_g3

0x0002,

0xfbea,	// (0x00035b73) cell_fast2_pane_g

0xcb30,	// (0x00032ab9) grid_highlight_pane_cp9

0xcb45,	// (0x00032ace) main_eswt_pane_ParamLimits

0xcb45,	// (0x00032ace) main_eswt_pane

0x5bed,	// (0x0002bb76) list_single_text_info_pane

0x5c7f,	// (0x0002bc08) eswt_ctrl_button_pane

0x5c7f,	// (0x0002bc08) eswt_ctrl_canvas_pane

0xd420,	// (0x000333a9) eswt_ctrl_combo_pane

0x5c7f,	// (0x0002bc08) eswt_ctrl_default_pane

0x5c7f,	// (0x0002bc08) eswt_ctrl_label_pane

0x5c8f,	// (0x0002bc18) eswt_ctrl_wait_pane

0xd428,	// (0x000333b1) eswt_shell_pane

0xc82f,	// (0x000327b8) listscroll_eswt_app_pane

0x5cb7,	// (0x0002bc40) popup_eswt_tasktip_window_ParamLimits

0x5cb7,	// (0x0002bc40) popup_eswt_tasktip_window

0x2dee,	// (0x00028d77) bg_popup_window_pane_cp18

0x5cc8,	// (0x0002bc51) eswt_control_pane_g1_ParamLimits

0x5cc8,	// (0x0002bc51) eswt_control_pane_g1

0x5cd5,	// (0x0002bc5e) eswt_control_pane_g2_ParamLimits

0x5cd5,	// (0x0002bc5e) eswt_control_pane_g2

0x5ce2,	// (0x0002bc6b) eswt_control_pane_g3_ParamLimits

0x5ce2,	// (0x0002bc6b) eswt_control_pane_g3

0x5cef,	// (0x0002bc78) eswt_control_pane_g4_ParamLimits

0x5cef,	// (0x0002bc78) eswt_control_pane_g4

0x0003,

0xfbf1,	// (0x00035b7a) eswt_control_pane_g_ParamLimits

0xfbf1,	// (0x00035b7a) eswt_control_pane_g

0xcc51,	// (0x00032bda) bg_button_pane_ParamLimits

0xcc51,	// (0x00032bda) bg_button_pane

0xcb45,	// (0x00032ace) common_borders_pane_copy2_ParamLimits

0xcb45,	// (0x00032ace) common_borders_pane_copy2

0x5cfc,	// (0x0002bc85) control_button_pane_g1_ParamLimits

0x5cfc,	// (0x0002bc85) control_button_pane_g1

0x5d08,	// (0x0002bc91) control_button_pane_g2_ParamLimits

0x5d08,	// (0x0002bc91) control_button_pane_g2

0x5d14,	// (0x0002bc9d) control_button_pane_g3_ParamLimits

0x5d14,	// (0x0002bc9d) control_button_pane_g3

0x0002,

0xfbfa,	// (0x00035b83) control_button_pane_g_ParamLimits

0xfbfa,	// (0x00035b83) control_button_pane_g

0x5d28,	// (0x0002bcb1) control_button_pane_t1

0x5d36,	// (0x0002bcbf) control_button_pane_t2

0x0001,

0xfc01,	// (0x00035b8a) control_button_pane_t

0x19ff,	// (0x00027988) bg_button_pane_g1

0x1a07,	// (0x00027990) bg_button_pane_g2

0x1a0f,	// (0x00027998) bg_button_pane_g3

0x1a17,	// (0x000279a0) bg_button_pane_g4

0x1a1f,	// (0x000279a8) bg_button_pane_g5

0x1a27,	// (0x000279b0) bg_button_pane_g6

0x1a2f,	// (0x000279b8) bg_button_pane_g7

0x1a37,	// (0x000279c0) bg_button_pane_g8

0x1a3f,	// (0x000279c8) bg_button_pane_g9

0x0008,

0xf85c,	// (0x000357e5) bg_button_pane_g

0x532c,	// (0x0002b2b5) common_borders_pane_ParamLimits

0x532c,	// (0x0002b2b5) common_borders_pane

0x5cc8,	// (0x0002bc51) eswt_control_pane_g1_copy1_ParamLimits

0x5cc8,	// (0x0002bc51) eswt_control_pane_g1_copy1

0x5cd5,	// (0x0002bc5e) eswt_control_pane_g2_copy1_ParamLimits

0x5cd5,	// (0x0002bc5e) eswt_control_pane_g2_copy1

0x5ce2,	// (0x0002bc6b) eswt_control_pane_g3_copy1_ParamLimits

0x5ce2,	// (0x0002bc6b) eswt_control_pane_g3_copy1

0x5cef,	// (0x0002bc78) eswt_control_pane_g4_copy1_ParamLimits

0x5cef,	// (0x0002bc78) eswt_control_pane_g4_copy1

0x5367,	// (0x0002b2f0) bg_eswt_ctrl_canvas_pane_g1

0x532c,	// (0x0002b2b5) common_borders_pane_cp2_ParamLimits

0x532c,	// (0x0002b2b5) common_borders_pane_cp2

0x532c,	// (0x0002b2b5) common_borders_pane_cp3_ParamLimits

0x532c,	// (0x0002b2b5) common_borders_pane_cp3

0x5d44,	// (0x0002bccd) separator_horizontal_pane

0x5d4c,	// (0x0002bcd5) separator_vertical_pane

0x5cc8,	// (0x0002bc51) eswt_control_pane_g1_copy2_ParamLimits

0x5cc8,	// (0x0002bc51) eswt_control_pane_g1_copy2

0x5cd5,	// (0x0002bc5e) eswt_control_pane_g2_copy2_ParamLimits

0x5cd5,	// (0x0002bc5e) eswt_control_pane_g2_copy2

0x5ce2,	// (0x0002bc6b) eswt_control_pane_g3_copy2_ParamLimits

0x5ce2,	// (0x0002bc6b) eswt_control_pane_g3_copy2

0x5cef,	// (0x0002bc78) eswt_control_pane_g4_copy2_ParamLimits

0x5cef,	// (0x0002bc78) eswt_control_pane_g4_copy2

0xc82f,	// (0x000327b8) common_borders_pane_cp4

0x5d55,	// (0x0002bcde) separator_horizontal_pane_g1

0x5d5e,	// (0x0002bce7) separator_horizontal_pane_g2

0x5d67,	// (0x0002bcf0) separator_horizontal_pane_g3

0x0002,

0xfc06,	// (0x00035b8f) separator_horizontal_pane_g

0x5cc8,	// (0x0002bc51) eswt_control_pane_g1_copy3_ParamLimits

0x5cc8,	// (0x0002bc51) eswt_control_pane_g1_copy3

0x5cd5,	// (0x0002bc5e) eswt_control_pane_g2_copy3_ParamLimits

0x5cd5,	// (0x0002bc5e) eswt_control_pane_g2_copy3

0x5ce2,	// (0x0002bc6b) eswt_control_pane_g3_copy3_ParamLimits

0x5ce2,	// (0x0002bc6b) eswt_control_pane_g3_copy3

0x5cef,	// (0x0002bc78) eswt_control_pane_g4_copy3_ParamLimits

0x5cef,	// (0x0002bc78) eswt_control_pane_g4_copy3

0xc82f,	// (0x000327b8) common_borders_pane_cp5

0x5d70,	// (0x0002bcf9) separator_vertical_pane_g1

0x5d79,	// (0x0002bd02) separator_vertical_pane_g2

0x5d82,	// (0x0002bd0b) separator_vertical_pane_g3

0x0002,

0xfc0d,	// (0x00035b96) separator_vertical_pane_g

0x5cc8,	// (0x0002bc51) eswt_control_pane_g1_copy4_ParamLimits

0x5cc8,	// (0x0002bc51) eswt_control_pane_g1_copy4

0x5cd5,	// (0x0002bc5e) eswt_control_pane_g2_copy4_ParamLimits

0x5cd5,	// (0x0002bc5e) eswt_control_pane_g2_copy4

0x5ce2,	// (0x0002bc6b) eswt_control_pane_g3_copy4_ParamLimits

0x5ce2,	// (0x0002bc6b) eswt_control_pane_g3_copy4

0x5cef,	// (0x0002bc78) eswt_control_pane_g4_copy4_ParamLimits

0x5cef,	// (0x0002bc78) eswt_control_pane_g4_copy4

0xd448,	// (0x000333d1) eswt_ctrl_combo_button_pane

0xd450,	// (0x000333d9) eswt_ctrl_input_pane

0xd458,	// (0x000333e1) popup_choice_list_window_cp70

0xd460,	// (0x000333e9) eswt_ctrl_input_pane_t1

0xc82f,	// (0x000327b8) input_focus_pane_cp70

0x532c,	// (0x0002b2b5) bg_button_pane_cp70_ParamLimits

0x532c,	// (0x0002b2b5) bg_button_pane_cp70

0xd46e,	// (0x000333f7) eswt_ctrl_combo_button_pane_g1

0x5db9,	// (0x0002bd42) wait_bar_pane_cp70

0x2dee,	// (0x00028d77) bg_popup_window_pane_cp70_ParamLimits

0x2dee,	// (0x00028d77) bg_popup_window_pane_cp70

0x5dc1,	// (0x0002bd4a) popup_eswt_tasktip_window_t1

0x5dd7,	// (0x0002bd60) wait_bar_pane_cp71_ParamLimits

0x5dd7,	// (0x0002bd60) wait_bar_pane_cp71

0x5de3,	// (0x0002bd6c) grid_eswt_app_pane

0xcf63,	// (0x00032eec) scroll_pane_cp70

0xd476,	// (0x000333ff) cell_eswt_app_pane_ParamLimits

0xd476,	// (0x000333ff) cell_eswt_app_pane

0xd4a0,	// (0x00033429) cell_eswt_app_pane_g1_ParamLimits

0xd4a0,	// (0x00033429) cell_eswt_app_pane_g1

0xd4cf,	// (0x00033458) cell_eswt_app_pane_g2_ParamLimits

0xd4cf,	// (0x00033458) cell_eswt_app_pane_g2

0x0001,

0xfc14,	// (0x00035b9d) cell_eswt_app_pane_g_ParamLimits

0xfc14,	// (0x00035b9d) cell_eswt_app_pane_g

0xd4f3,	// (0x0003347c) cell_eswt_app_pane_t1_ParamLimits

0xd4f3,	// (0x0003347c) cell_eswt_app_pane_t1

0x5ea1,	// (0x0002be2a) grid_highlight_pane_cp70_ParamLimits

0x5ea1,	// (0x0002be2a) grid_highlight_pane_cp70

0x08ad,	// (0x00026836) set_content_pane_g1

0xa574,	// (0x000304fd) status_small_volume_pane

0xc16a,	// (0x000320f3) status_small_volume_pane_g1

0xc172,	// (0x000320fb) volume_small2_pane

0xc17b,	// (0x00032104) volume_small2_pane_g1

0xc184,	// (0x0003210d) volume_small2_pane_g2

0xc18d,	// (0x00032116) volume_small2_pane_g3

0xc196,	// (0x0003211f) volume_small2_pane_g4

0xc19f,	// (0x00032128) volume_small2_pane_g5

0xc1a8,	// (0x00032131) volume_small2_pane_g6

0xc1b1,	// (0x0003213a) volume_small2_pane_g7

0xc1ba,	// (0x00032143) volume_small2_pane_g8

0xc1c3,	// (0x0003214c) volume_small2_pane_g9

0xc1cc,	// (0x00032155) volume_small2_pane_g10

0x0009,

0xfc19,	// (0x00035ba2) volume_small2_pane_g

0x571f,	// (0x0002b6a8) fep_vkb_top_text_pane_g1_ParamLimits

0xd380,	// (0x00033309) fep_vkb_top_text_pane_t1_ParamLimits

0x59f6,	// (0x0002b97f) popup_preview_fixed_window_g3_ParamLimits

0x59f6,	// (0x0002b97f) popup_preview_fixed_window_g3

0xae0d,	// (0x00030d96) popup_toolbar_trans_pane

0xbb01,	// (0x00031a8a) aid_height_set_list_ParamLimits

0x412e,	// (0x0002a0b7) aid_size_parent_ParamLimits

0x0f27,	// (0x00026eb0) list_highlight_pane_cp2_ParamLimits

0x08ad,	// (0x00026836) set_content_pane_g1_ParamLimits

0xbc7a,	// (0x00031c03) list_single_image_pane_ParamLimits

0xbc7a,	// (0x00031c03) list_single_image_pane

0xd525,	// (0x000334ae) aid_size_cell_image_ParamLimits

0xd525,	// (0x000334ae) aid_size_cell_image

0xd532,	// (0x000334bb) grid_single_image_pane_ParamLimits

0xd532,	// (0x000334bb) grid_single_image_pane

0x5ec8,	// (0x0002be51) list_single_image_pane_g1_ParamLimits

0x5ec8,	// (0x0002be51) list_single_image_pane_g1

0x5ed4,	// (0x0002be5d) list_single_image_pane_g2_ParamLimits

0x5ed4,	// (0x0002be5d) list_single_image_pane_g2

0x0001,

0xfc2e,	// (0x00035bb7) list_single_image_pane_g_ParamLimits

0xfc2e,	// (0x00035bb7) list_single_image_pane_g

0x5ee8,	// (0x0002be71) list_single_image_pane_t1_ParamLimits

0x5ee8,	// (0x0002be71) list_single_image_pane_t1

0xd53e,	// (0x000334c7) cell_image_list_pane_ParamLimits

0xd53e,	// (0x000334c7) cell_image_list_pane

0xd552,	// (0x000334db) cell_image_list_pane_g1

0xd55b,	// (0x000334e4) cell_image_list_pane_g2

0x0001,

0xfc33,	// (0x00035bbc) cell_image_list_pane_g

0xd564,	// (0x000334ed) aid_size_cell_tb_trans_pane

0xcc51,	// (0x00032bda) bg_tb_trans_pane

0xd576,	// (0x000334ff) grid_tb_trans_pane

0x19ff,	// (0x00027988) bg_tb_trans_pane_g1

0x1a07,	// (0x00027990) bg_tb_trans_pane_g2

0x1a0f,	// (0x00027998) bg_tb_trans_pane_g3

0x1a17,	// (0x000279a0) bg_tb_trans_pane_g4

0x1a1f,	// (0x000279a8) bg_tb_trans_pane_g5

0x1a37,	// (0x000279c0) bg_tb_trans_pane_g6

0x1a3f,	// (0x000279c8) bg_tb_trans_pane_g7

0x1a27,	// (0x000279b0) bg_tb_trans_pane_g8

0x1a2f,	// (0x000279b8) bg_tb_trans_pane_g9

0x0008,

0xfc38,	// (0x00035bc1) bg_tb_trans_pane_g

0xd58a,	// (0x00033513) cell_toolbar_trans_pane_ParamLimits

0xd58a,	// (0x00033513) cell_toolbar_trans_pane

0x5367,	// (0x0002b2f0) cell_toolbar_trans_pane_g1

0xbf7b,	// (0x00031f04) list_form2_midp_pane_t1

0xbf89,	// (0x00031f12) list_form2_midp_pane_t2

0x0001,

0xfae1,	// (0x00035a6a) list_form2_midp_pane_t

0x4f48,	// (0x0002aed1) scroll_pane_cp51_ParamLimits

0x5104,	// (0x0002b08d) form2_midp_wait_pane_g1

0x510d,	// (0x0002b096) form2_midp_wait_pane_g2

0x5116,	// (0x0002b09f) form2_midp_wait_pane_g3

0x0002,

0xfaf6,	// (0x00035a7f) form2_midp_wait_pane_g

0xc89f,	// (0x00032828) list_highlight_pane_cp21_ParamLimits

0x515e,	// (0x0002b0e7) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x516d,	// (0x0002b0f6) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xee06,	// (0x00034d8f) list_single_2graphic_im_pane_ParamLimits

0xee06,	// (0x00034d8f) list_single_2graphic_im_pane

0xd5b0,	// (0x00033539) list_single_2graphic_im_pane_g1_ParamLimits

0xd5b0,	// (0x00033539) list_single_2graphic_im_pane_g1

0xd5c1,	// (0x0003354a) list_single_2graphic_im_pane_g2_ParamLimits

0xd5c1,	// (0x0003354a) list_single_2graphic_im_pane_g2

0xd5cd,	// (0x00033556) list_single_2graphic_im_pane_g3_ParamLimits

0xd5cd,	// (0x00033556) list_single_2graphic_im_pane_g3

0x0003,

0xfc4b,	// (0x00035bd4) list_single_2graphic_im_pane_g_ParamLimits

0xfc4b,	// (0x00035bd4) list_single_2graphic_im_pane_g

0xd5e1,	// (0x0003356a) list_single_2graphic_im_pane_t1_ParamLimits

0xd5e1,	// (0x0003356a) list_single_2graphic_im_pane_t1

0x5a02,	// (0x0002b98b) list_single_graphic_2heading_pane_fp_ParamLimits

0x5a02,	// (0x0002b98b) list_single_graphic_2heading_pane_fp

0xf16e,	// (0x000350f7) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf16e,	// (0x000350f7) list_single_graphic_2heading_pane_fp_g1

0x5a18,	// (0x0002b9a1) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5a18,	// (0x0002b9a1) list_single_graphic_2heading_pane_fp_g2

0xf137,	// (0x000350c0) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xf137,	// (0x000350c0) list_single_graphic_2heading_pane_fp_g3

0xf143,	// (0x000350cc) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xf143,	// (0x000350cc) list_single_graphic_2heading_pane_fp_g4

0x5a24,	// (0x0002b9ad) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5a24,	// (0x0002b9ad) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb79,	// (0x00035b02) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb79,	// (0x00035b02) list_single_graphic_2heading_pane_fp_g

0xf308,	// (0x00035291) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf308,	// (0x00035291) list_single_graphic_2heading_pane_fp_t1

0xf1a6,	// (0x0003512f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf1a6,	// (0x0003512f) list_single_graphic_2heading_pane_fp_t2

0xf31e,	// (0x000352a7) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf31e,	// (0x000352a7) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc54,	// (0x00035bdd) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc54,	// (0x00035bdd) list_single_graphic_2heading_pane_fp_t

0x53f3,	// (0x0002b37c) fep_hwr_write_pane_g5_ParamLimits

0x53f3,	// (0x0002b37c) fep_hwr_write_pane_g5

0x53ff,	// (0x0002b388) fep_hwr_write_pane_g6_ParamLimits

0x53ff,	// (0x0002b388) fep_hwr_write_pane_g6

0xd428,	// (0x000333b1) eswt_shell_pane_ParamLimits

0x2dee,	// (0x00028d77) bg_popup_window_pane_cp18_ParamLimits

0x4076,	// (0x00029fff) heading_pane_cp70

0x5dc1,	// (0x0002bd4a) popup_eswt_tasktip_window_t1_ParamLimits

0xaf2a,	// (0x00030eb3) aid_touch_tab_arrow_left

0xaf40,	// (0x00030ec9) aid_touch_tab_arrow_right

0x99ef,	// (0x0002f978) title_pane_g3_ParamLimits

0x99ef,	// (0x0002f978) title_pane_g3

0xcc19,	// (0x00032ba2) set_value_pane_g1

0xae0d,	// (0x00030d96) popup_toolbar_trans_pane_ParamLimits

0xd564,	// (0x000334ed) aid_size_cell_tb_trans_pane_ParamLimits

0xcc51,	// (0x00032bda) bg_tb_trans_pane_ParamLimits

0xd576,	// (0x000334ff) grid_tb_trans_pane_ParamLimits

0xc9c9,	// (0x00032952) cont_note_pane_ParamLimits

0xc9c9,	// (0x00032952) cont_note_pane

0xcb45,	// (0x00032ace) cont_snote2_single_text_pane_ParamLimits

0xcb45,	// (0x00032ace) cont_snote2_single_text_pane

0xcb45,	// (0x00032ace) cont_snote2_single_graphic_pane_ParamLimits

0xcb45,	// (0x00032ace) cont_snote2_single_graphic_pane

0x33ec,	// (0x00029375) cont_note_wait_pane_ParamLimits

0x33ec,	// (0x00029375) cont_note_wait_pane

0x33ec,	// (0x00029375) cont_note_image_pane_ParamLimits

0x33ec,	// (0x00029375) cont_note_image_pane

0x5fde,	// (0x0002bf67) popup_note2_window_g1_ParamLimits

0x5fde,	// (0x0002bf67) popup_note2_window_g1

0xd61f,	// (0x000335a8) popup_note2_window_t1_ParamLimits

0xd61f,	// (0x000335a8) popup_note2_window_t1

0xd664,	// (0x000335ed) popup_note2_window_t2_ParamLimits

0xd664,	// (0x000335ed) popup_note2_window_t2

0xd6a9,	// (0x00033632) popup_note2_window_t3_ParamLimits

0xd6a9,	// (0x00033632) popup_note2_window_t3

0x60de,	// (0x0002c067) popup_note2_window_t4_ParamLimits

0x60de,	// (0x0002c067) popup_note2_window_t4

0xca4d,	// (0x000329d6) popup_note2_window_t5_ParamLimits

0xca4d,	// (0x000329d6) popup_note2_window_t5

0x0004,

0xfc60,	// (0x00035be9) popup_note2_window_t_ParamLimits

0xfc60,	// (0x00035be9) popup_note2_window_t

0x610d,	// (0x0002c096) popup_note2_image_window_g1_ParamLimits

0x610d,	// (0x0002c096) popup_note2_image_window_g1

0xd6ee,	// (0x00033677) popup_note2_image_window_g2_ParamLimits

0xd6ee,	// (0x00033677) popup_note2_image_window_g2

0x0001,

0xfc6b,	// (0x00035bf4) popup_note2_image_window_g_ParamLimits

0xfc6b,	// (0x00035bf4) popup_note2_image_window_g

0x612b,	// (0x0002c0b4) popup_note2_image_window_t1_ParamLimits

0x612b,	// (0x0002c0b4) popup_note2_image_window_t1

0x6143,	// (0x0002c0cc) popup_note2_image_window_t2_ParamLimits

0x6143,	// (0x0002c0cc) popup_note2_image_window_t2

0x615b,	// (0x0002c0e4) popup_note2_image_window_t3_ParamLimits

0x615b,	// (0x0002c0e4) popup_note2_image_window_t3

0x0002,

0xfc70,	// (0x00035bf9) popup_note2_image_window_t_ParamLimits

0xfc70,	// (0x00035bf9) popup_note2_image_window_t

0x33fa,	// (0x00029383) popup_note2_wait_window_g1_ParamLimits

0x33fa,	// (0x00029383) popup_note2_wait_window_g1

0x3406,	// (0x0002938f) popup_note2_wait_window_g2_ParamLimits

0x3406,	// (0x0002938f) popup_note2_wait_window_g2

0x3412,	// (0x0002939b) popup_note2_wait_window_g3_ParamLimits

0x3412,	// (0x0002939b) popup_note2_wait_window_g3

0x0002,

0xf83e,	// (0x000357c7) popup_note2_wait_window_g_ParamLimits

0xf83e,	// (0x000357c7) popup_note2_wait_window_g

0x6177,	// (0x0002c100) popup_note2_wait_window_t1_ParamLimits

0x6177,	// (0x0002c100) popup_note2_wait_window_t1

0x6195,	// (0x0002c11e) popup_note2_wait_window_t2_ParamLimits

0x6195,	// (0x0002c11e) popup_note2_wait_window_t2

0x61b3,	// (0x0002c13c) popup_note2_wait_window_t3_ParamLimits

0x61b3,	// (0x0002c13c) popup_note2_wait_window_t3

0x61c5,	// (0x0002c14e) popup_note2_wait_window_t4_ParamLimits

0x61c5,	// (0x0002c14e) popup_note2_wait_window_t4

0x0003,

0xfc77,	// (0x00035c00) popup_note2_wait_window_t_ParamLimits

0xfc77,	// (0x00035c00) popup_note2_wait_window_t

0x61d7,	// (0x0002c160) wait_bar2_pane_ParamLimits

0x61d7,	// (0x0002c160) wait_bar2_pane

0x61ef,	// (0x0002c178) popup_snote2_single_text_window_g1_ParamLimits

0x61ef,	// (0x0002c178) popup_snote2_single_text_window_g1

0x6217,	// (0x0002c1a0) popup_snote2_single_text_window_t1_ParamLimits

0x6217,	// (0x0002c1a0) popup_snote2_single_text_window_t1

0x6263,	// (0x0002c1ec) popup_snote2_single_text_window_t2_ParamLimits

0x6263,	// (0x0002c1ec) popup_snote2_single_text_window_t2

0x62af,	// (0x0002c238) popup_snote2_single_text_window_t3_ParamLimits

0x62af,	// (0x0002c238) popup_snote2_single_text_window_t3

0x62f0,	// (0x0002c279) popup_snote2_single_text_window_t4_ParamLimits

0x62f0,	// (0x0002c279) popup_snote2_single_text_window_t4

0x6326,	// (0x0002c2af) popup_snote2_single_text_window_t5_ParamLimits

0x6326,	// (0x0002c2af) popup_snote2_single_text_window_t5

0x0004,

0xfc80,	// (0x00035c09) popup_snote2_single_text_window_t_ParamLimits

0xfc80,	// (0x00035c09) popup_snote2_single_text_window_t

0xd700,	// (0x00033689) popup_snote2_single_graphic_window_g1_ParamLimits

0xd700,	// (0x00033689) popup_snote2_single_graphic_window_g1

0x6379,	// (0x0002c302) popup_snote2_single_graphic_window_g2_ParamLimits

0x6379,	// (0x0002c302) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8b,	// (0x00035c14) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8b,	// (0x00035c14) popup_snote2_single_graphic_window_g

0x63a1,	// (0x0002c32a) popup_snote2_single_graphic_window_t1_ParamLimits

0x63a1,	// (0x0002c32a) popup_snote2_single_graphic_window_t1

0x63ed,	// (0x0002c376) popup_snote2_single_graphic_window_t2_ParamLimits

0x63ed,	// (0x0002c376) popup_snote2_single_graphic_window_t2

0x62af,	// (0x0002c238) popup_snote2_single_graphic_window_t3_ParamLimits

0x62af,	// (0x0002c238) popup_snote2_single_graphic_window_t3

0x62f0,	// (0x0002c279) popup_snote2_single_graphic_window_t4_ParamLimits

0x62f0,	// (0x0002c279) popup_snote2_single_graphic_window_t4

0x6326,	// (0x0002c2af) popup_snote2_single_graphic_window_t5_ParamLimits

0x6326,	// (0x0002c2af) popup_snote2_single_graphic_window_t5

0x0004,

0xfc90,	// (0x00035c19) popup_snote2_single_graphic_window_t_ParamLimits

0xfc90,	// (0x00035c19) popup_snote2_single_graphic_window_t

0x4e05,	// (0x0002ad8e) clock_nsta_pane_cp2_t1

0x4e05,	// (0x0002ad8e) clock_nsta_pane_cp2_t2

0x0001,

0xfab7,	// (0x00035a40) clock_nsta_pane_cp2_t

0xec62,	// (0x00034beb) form_field_data_wide_pane_g1_ParamLimits

0xcc5f,	// (0x00032be8) form_field_data_wide_pane_g2_ParamLimits

0xcc5f,	// (0x00032be8) form_field_data_wide_pane_g2

0xcc6b,	// (0x00032bf4) form_field_data_wide_pane_g3_ParamLimits

0xcc6b,	// (0x00032bf4) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x000355ff) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x000355ff) form_field_data_wide_pane_g

0xbeac,	// (0x00031e35) grid_touch_3_pane_ParamLimits

0xbeac,	// (0x00031e35) grid_touch_3_pane

0xd728,	// (0x000336b1) cell_touch_3_pane_ParamLimits

0xd728,	// (0x000336b1) cell_touch_3_pane

0x5367,	// (0x0002b2f0) cell_touch_3_pane_g1

0x5367,	// (0x0002b2f0) cell_touch_3_pane_g2

0x0001,

0xfb3c,	// (0x00035ac5) cell_touch_3_pane_g

0xca7f,	// (0x00032a08) cont_query_data_pane

0xca87,	// (0x00032a10) cont_query_data_pane_cp1

0x6467,	// (0x0002c3f0) button_value_adjust_pane_cp7

0x646f,	// (0x0002c3f8) query_popup_pane_cp3

0xd0e8,	// (0x00033071) bg_popup_sub_pane_cp22_ParamLimits

0xa2d8,	// (0x00030261) navi_navi_volume_pane_cp2

0xa2e7,	// (0x00030270) popup_side_volume_key_window_g2

0xa2f6,	// (0x0003027f) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x00035695) popup_side_volume_key_window_g

0xa305,	// (0x0003028e) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0003569c) popup_side_volume_key_window_t

0xa3ca,	// (0x00030353) popup_side_volume_key_window_ParamLimits

0x9053,	// (0x0002efdc) list_double_graphic_pane_g4_ParamLimits

0x9053,	// (0x0002efdc) list_double_graphic_pane_g4

0x95c8,	// (0x0002f551) list_single_2heading_msg_pane_ParamLimits

0x95c8,	// (0x0002f551) list_single_2heading_msg_pane

0x961b,	// (0x0002f5a4) list_single_2heading_msg_pane_g1_ParamLimits

0x961b,	// (0x0002f5a4) list_single_2heading_msg_pane_g1

0x9627,	// (0x0002f5b0) list_single_2heading_msg_pane_g2_ParamLimits

0x9627,	// (0x0002f5b0) list_single_2heading_msg_pane_g2

0x963a,	// (0x0002f5c3) list_single_2heading_msg_pane_g3_ParamLimits

0x963a,	// (0x0002f5c3) list_single_2heading_msg_pane_g3

0xf33e,	// (0x000352c7) list_single_2heading_msg_pane_g4_ParamLimits

0xf33e,	// (0x000352c7) list_single_2heading_msg_pane_g4

0x0003,

0xfc9b,	// (0x00035c24) list_single_2heading_msg_pane_g_ParamLimits

0xfc9b,	// (0x00035c24) list_single_2heading_msg_pane_g

0xf356,	// (0x000352df) list_single_2heading_msg_pane_t1_ParamLimits

0xf356,	// (0x000352df) list_single_2heading_msg_pane_t1

0x9646,	// (0x0002f5cf) list_single_2heading_msg_pane_t2_ParamLimits

0x9646,	// (0x0002f5cf) list_single_2heading_msg_pane_t2

0x96b1,	// (0x0002f63a) list_single_2heading_msg_pane_t3_ParamLimits

0x96b1,	// (0x0002f63a) list_single_2heading_msg_pane_t3

0xf37e,	// (0x00035307) list_single_2heading_msg_pane_t4_ParamLimits

0xf37e,	// (0x00035307) list_single_2heading_msg_pane_t4

0x0003,

0xfca4,	// (0x00035c2d) list_single_2heading_msg_pane_t_ParamLimits

0xfca4,	// (0x00035c2d) list_single_2heading_msg_pane_t

0xc84d,	// (0x000327d6) title_pane_g4_ParamLimits

0xc84d,	// (0x000327d6) title_pane_g4

0x00c0,	// (0x00026049) title_pane_stacon_g3_ParamLimits

0x00c0,	// (0x00026049) title_pane_stacon_g3

0x5fa1,	// (0x0002bf2a) list_single_2graphic_im_pane_g4_ParamLimits

0x5fa1,	// (0x0002bf2a) list_single_2graphic_im_pane_g4

0xb8f0,	// (0x00031879) popup_side_volume_key_window_cp

0x4652,	// (0x0002a5db) main_idle_act2_pane_t1

0x1a47,	// (0x000279d0) toolbar_button_pane_g10

0x9fd3,	// (0x0002ff5c) popup_toolbar_window_cp1

0x4df6,	// (0x0002ad7f) clock_nsta_pane_cp_t1

0x4df6,	// (0x0002ad7f) clock_nsta_pane_cp_t2

0x0001,

0xfab2,	// (0x00035a3b) clock_nsta_pane_cp_t

0xa2d8,	// (0x00030261) navi_navi_volume_pane_cp2_ParamLimits

0x0475,	// (0x000263fe) popup_side_volume_key_window_g1_ParamLimits

0xa2e7,	// (0x00030270) popup_side_volume_key_window_g2_ParamLimits

0xa2f6,	// (0x0003027f) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x00035695) popup_side_volume_key_window_g_ParamLimits

0x1ee9,	// (0x00027e72) fep_hwr_aid_pane

0xd246,	// (0x000331cf) bg_fep_hwr_top_pane_g4_ParamLimits

0x53c3,	// (0x0002b34c) fep_hwr_top_pane_g1_ParamLimits

0x53d5,	// (0x0002b35e) fep_hwr_top_pane_g2_ParamLimits

0x1fa2,	// (0x00027f2b) fep_hwr_top_pane_g3_ParamLimits

0xfb07,	// (0x00035a90) fep_hwr_top_pane_g_ParamLimits

0x1fb7,	// (0x00027f40) fep_hwr_top_text_pane_ParamLimits

0x3bf6,	// (0x00029b7f) aid_touch_tab_arrow_arrow_2

0x3bff,	// (0x00029b88) aid_touch_tab_arrow_left_2

0x1efd,	// (0x00027e86) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1f34,	// (0x00027ebd) fep_hwr_prediction_pane

0x552e,	// (0x0002b4b7) fep_vkb_prediction_pane

0xd360,	// (0x000332e9) fep_vkb_side_pane_g3_ParamLimits

0xd360,	// (0x000332e9) fep_vkb_side_pane_g3

0x55d7,	// (0x0002b560) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5a78,	// (0x0002ba01) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5a85,	// (0x0002ba0e) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb1,	// (0x00035b3a) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6494,	// (0x0002c41d) fep_hwr_prediction_pane_g1

0x2244,	// (0x000281cd) fep_hwr_prediction_pane_g2

0x224c,	// (0x000281d5) fep_hwr_prediction_pane_g3

0x2254,	// (0x000281dd) fep_hwr_prediction_pane_g4

0x0003,

0xfcad,	// (0x00035c36) fep_hwr_prediction_pane_g

0x6494,	// (0x0002c41d) fep_vkb_prediction_pane_g1

0x649e,	// (0x0002c427) fep_vkb_prediction_pane_g2

0x64a6,	// (0x0002c42f) fep_vkb_prediction_pane_g3

0x64ae,	// (0x0002c437) fep_vkb_prediction_pane_g4

0x0003,

0xfcb6,	// (0x00035c3f) fep_vkb_prediction_pane_g

0xba83,	// (0x00031a0c) slider_set_pane_g3

0xba97,	// (0x00031a20) slider_set_pane_g4

0xbaaf,	// (0x00031a38) slider_set_pane_g5

0xba83,	// (0x00031a0c) slider_set_pane_g6

0xbac5,	// (0x00031a4e) slider_set_pane_g7

0x4293,	// (0x0002a21c) slider_form_pane_g3

0x429c,	// (0x0002a225) slider_form_pane_g4

0x42a4,	// (0x0002a22d) slider_form_pane_g5

0x4293,	// (0x0002a21c) slider_form_pane_g6

0xbc4c,	// (0x00031bd5) slider_form_pane_g7

0x48fd,	// (0x0002a886) slider_set_pane_vc_g3

0x4906,	// (0x0002a88f) slider_set_pane_vc_g4

0x490f,	// (0x0002a898) slider_set_pane_vc_g5

0x48fd,	// (0x0002a886) slider_set_pane_vc_g6

0x4918,	// (0x0002a8a1) slider_set_pane_vc_g7

0x4aca,	// (0x0002aa53) slider_form_pane_vc_g1

0x4ad3,	// (0x0002aa5c) slider_form_pane_vc_g2

0x4adc,	// (0x0002aa65) slider_form_pane_vc_g3

0x4aca,	// (0x0002aa53) slider_form_pane_vc_g4

0x4ae5,	// (0x0002aa6e) slider_form_pane_vc_g5

0x0004,

0xfa84,	// (0x00035a0d) slider_form_pane_vc_g

0xc82f,	// (0x000327b8) main_idle_act3_pane

0x64b6,	// (0x0002c43f) ai3_links_pane

0xd771,	// (0x000336fa) popup_ai3_data_window_ParamLimits

0xd771,	// (0x000336fa) popup_ai3_data_window

0xc82f,	// (0x000327b8) grid_ai3_links_pane

0xd789,	// (0x00033712) cell_ai3_links_pane_ParamLimits

0xd789,	// (0x00033712) cell_ai3_links_pane

0x64ef,	// (0x0002c478) bg_popup_sub_pane_cp11

0x64fc,	// (0x0002c485) cell_ai3_links_pane_g1

0xc82f,	// (0x000327b8) bg_popup_sub_pane_cp12

0x6521,	// (0x0002c4aa) heading_ai3_data_pane

0x6529,	// (0x0002c4b2) list_ai3_gene_pane

0x6535,	// (0x0002c4be) popup_ai3_data_window_g1

0x653d,	// (0x0002c4c6) heading_ai3_data_pane_g1

0x6545,	// (0x0002c4ce) heading_ai3_data_pane_t1

0xd7a3,	// (0x0003372c) list_double_ai3_gene_pane_ParamLimits

0xd7a3,	// (0x0003372c) list_double_ai3_gene_pane

0x6560,	// (0x0002c4e9) list_single_ai3_gene_pane_ParamLimits

0x6560,	// (0x0002c4e9) list_single_ai3_gene_pane

0x532c,	// (0x0002b2b5) list_highlight_pane_cp7_ParamLimits

0x532c,	// (0x0002b2b5) list_highlight_pane_cp7

0x656d,	// (0x0002c4f6) list_single_a13_gene_pane_t1_ParamLimits

0x656d,	// (0x0002c4f6) list_single_a13_gene_pane_t1

0x6584,	// (0x0002c50d) list_single_ai3_gene_pane_g1

0x658d,	// (0x0002c516) list_single_ai3_gene_pane_g2

0x0001,

0xfcbf,	// (0x00035c48) list_single_ai3_gene_pane_g

0x6595,	// (0x0002c51e) list_double_ai3_gene_pane_g1_ParamLimits

0x6595,	// (0x0002c51e) list_double_ai3_gene_pane_g1

0xd7b0,	// (0x00033739) list_double_ai3_gene_pane_t1_ParamLimits

0xd7b0,	// (0x00033739) list_double_ai3_gene_pane_t1

0x65bd,	// (0x0002c546) list_double_ai3_gene_pane_t2_ParamLimits

0x65bd,	// (0x0002c546) list_double_ai3_gene_pane_t2

0x65d2,	// (0x0002c55b) list_double_ai3_gene_pane_t3_ParamLimits

0x65d2,	// (0x0002c55b) list_double_ai3_gene_pane_t3

0x0002,

0xfcc4,	// (0x00035c4d) list_double_ai3_gene_pane_t_ParamLimits

0xfcc4,	// (0x00035c4d) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf334,	// (0x000352bd) aid_size_min_col_2

0xd75b,	// (0x000336e4) aid_size_min_msg_ParamLimits

0xd75b,	// (0x000336e4) aid_size_min_msg

0xd374,	// (0x000332fd) fep_vkb_top_text_pane_g2_ParamLimits

0xd374,	// (0x000332fd) fep_vkb_top_text_pane_g2

0x0001,

0xfb37,	// (0x00035ac0) fep_vkb_top_text_pane_g_ParamLimits

0xfb37,	// (0x00035ac0) fep_vkb_top_text_pane_g

0xc82f,	// (0x000327b8) main_hc_apps_shell_pane

0x65ef,	// (0x0002c578) grid_hc_apps_pane_ParamLimits

0x65ef,	// (0x0002c578) grid_hc_apps_pane

0x65fe,	// (0x0002c587) list_hc_apps_pane

0x6606,	// (0x0002c58f) scroll_pane_cp37_ParamLimits

0x6606,	// (0x0002c58f) scroll_pane_cp37

0xd7cc,	// (0x00033755) cell_hc_apps_pane_ParamLimits

0xd7cc,	// (0x00033755) cell_hc_apps_pane

0xd88a,	// (0x00033813) cell_hc_apps_pane_g1_ParamLimits

0xd88a,	// (0x00033813) cell_hc_apps_pane_g1

0x66f1,	// (0x0002c67a) cell_hc_apps_pane_g2_ParamLimits

0x66f1,	// (0x0002c67a) cell_hc_apps_pane_g2

0x670d,	// (0x0002c696) cell_hc_apps_pane_g3_ParamLimits

0x670d,	// (0x0002c696) cell_hc_apps_pane_g3

0x0002,

0xfccb,	// (0x00035c54) cell_hc_apps_pane_g_ParamLimits

0xfccb,	// (0x00035c54) cell_hc_apps_pane_g

0xd8b7,	// (0x00033840) cell_hc_apps_pane_t1_ParamLimits

0xd8b7,	// (0x00033840) cell_hc_apps_pane_t1

0xc9c9,	// (0x00032952) grid_highlight_pane_cp10_ParamLimits

0xc9c9,	// (0x00032952) grid_highlight_pane_cp10

0xd8f5,	// (0x0003387e) list_single_hc_apps_pane_ParamLimits

0xd8f5,	// (0x0003387e) list_single_hc_apps_pane

0xd925,	// (0x000338ae) list_single_hc_apps_pane_g1

0x971f,	// (0x0002f6a8) list_single_hc_apps_pane_g2

0x0001,

0xfcd2,	// (0x00035c5b) list_single_hc_apps_pane_g

0x9738,	// (0x0002f6c1) list_single_hc_apps_pane_g2_copy1

0x9754,	// (0x0002f6dd) list_single_hc_apps_pane_t1

0xc89f,	// (0x00032828) bg_set_opt_pane_cp_ParamLimits

0x9ac3,	// (0x0002fa4c) setting_slider_pane_t1_ParamLimits

0x9adc,	// (0x0002fa65) setting_slider_pane_t2_ParamLimits

0x9af6,	// (0x0002fa7f) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x000354e7) setting_slider_pane_t_ParamLimits

0x9b0e,	// (0x0002fa97) slider_set_pane_ParamLimits

0x0da8,	// (0x00026d31) control_pane_g5_ParamLimits

0x0da8,	// (0x00026d31) control_pane_g5

0xba76,	// (0x000319ff) slider_set_pane_g1_ParamLimits

0x1d15,	// (0x00027c9e) slider_set_pane_g2_ParamLimits

0xba83,	// (0x00031a0c) slider_set_pane_g3_ParamLimits

0xba97,	// (0x00031a20) slider_set_pane_g4_ParamLimits

0xbaaf,	// (0x00031a38) slider_set_pane_g5_ParamLimits

0xba83,	// (0x00031a0c) slider_set_pane_g6_ParamLimits

0xbac5,	// (0x00031a4e) slider_set_pane_g7_ParamLimits

0xf95a,	// (0x000358e3) slider_set_pane_g_ParamLimits

0x0858,	// (0x000267e1) navi_icon_text_pane_ParamLimits

0xaef3,	// (0x00030e7c) aid_fill_nsta_2_ParamLimits

0xaf2a,	// (0x00030eb3) aid_touch_tab_arrow_left_ParamLimits

0xaf40,	// (0x00030ec9) aid_touch_tab_arrow_right_ParamLimits

0xafdb,	// (0x00030f64) clock_nsta_pane_ParamLimits

0x3bd8,	// (0x00029b61) navi_icon_pane_g1_ParamLimits

0x3be4,	// (0x00029b6d) navi_text_pane_t1_ParamLimits

0x4f06,	// (0x0002ae8f) navi_icon_text_pane_g1_ParamLimits

0x4f12,	// (0x0002ae9b) navi_icon_text_pane_t1_ParamLimits

0xd925,	// (0x000338ae) list_single_hc_apps_pane_g1_ParamLimits

0x971f,	// (0x0002f6a8) list_single_hc_apps_pane_g2_ParamLimits

0xfcd2,	// (0x00035c5b) list_single_hc_apps_pane_g_ParamLimits

0x9738,	// (0x0002f6c1) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x9754,	// (0x0002f6dd) list_single_hc_apps_pane_t1_ParamLimits

0x98f4,	// (0x0002f87d) popup_toolbar2_fixed_window_ParamLimits

0x98f4,	// (0x0002f87d) popup_toolbar2_fixed_window

0xae03,	// (0x00030d8c) popup_toolbar2_float_window

0xc82f,	// (0x000327b8) bg_popup_sub_pane_cp27

0x67eb,	// (0x0002c774) grid_toolbar2_float_pane

0xc82f,	// (0x000327b8) bg_popup_sub_pane_cp26

0x67eb,	// (0x0002c774) grid_toolbar2_fixed_pane

0xd93e,	// (0x000338c7) cell_toolbar2_fixed_pane_ParamLimits

0xd93e,	// (0x000338c7) cell_toolbar2_fixed_pane

0xd958,	// (0x000338e1) cell_toolbar2_fixed_pane_g1

0x194f,	// (0x000278d8) toolbar2_fixed_button_pane

0x19ff,	// (0x00027988) toolbar2_fixed_button_pane_g1

0x1a07,	// (0x00027990) toolbar2_fixed_button_pane_g2

0x1a0f,	// (0x00027998) toolbar2_fixed_button_pane_g3

0x1a17,	// (0x000279a0) toolbar2_fixed_button_pane_g4

0x1a1f,	// (0x000279a8) toolbar2_fixed_button_pane_g5

0x1a27,	// (0x000279b0) toolbar2_fixed_button_pane_g6

0x1a2f,	// (0x000279b8) toolbar2_fixed_button_pane_g7

0x1a37,	// (0x000279c0) toolbar2_fixed_button_pane_g8

0x1a3f,	// (0x000279c8) toolbar2_fixed_button_pane_g9

0x0008,

0xf85c,	// (0x000357e5) toolbar2_fixed_button_pane_g

0x680c,	// (0x0002c795) cell_toolbar2_float_pane_ParamLimits

0x680c,	// (0x0002c795) cell_toolbar2_float_pane

0x681d,	// (0x0002c7a6) cell_toolbar2_float_pane_g1

0x194f,	// (0x000278d8) toolbar2_fixed_button_pane_cp

0xc158,	// (0x000320e1) fep_vkb_accented_list_pane_ParamLimits

0xc158,	// (0x000320e1) fep_vkb_accented_list_pane

0x2105,	// (0x0002808e) bg_popup_fep_shadow_pane_g9

0x09d8,	// (0x00026961) bg_popup_fep_shadow_pane_cp3

0xcd5a,	// (0x00032ce3) list_accented_list_pane

0x6826,	// (0x0002c7af) list_single_accented_list_pane_ParamLimits

0x6826,	// (0x0002c7af) list_single_accented_list_pane

0x09d8,	// (0x00026961) list_highlight_pane_cp10

0x6837,	// (0x0002c7c0) list_single_accented_list_pane_t1

0xad2d,	// (0x00030cb6) popup_slider_window_ParamLimits

0xad2d,	// (0x00030cb6) popup_slider_window

0x6477,	// (0x0002c400) aid_indentation_list_msg

0xda4d,	// (0x000339d6) bg_popup_window_pane_cp19

0x6957,	// (0x0002c8e0) popup_slider_window_g1

0x6973,	// (0x0002c8fc) popup_slider_window_g2

0x698f,	// (0x0002c918) popup_slider_window_g3

0x0005,

0xfcd7,	// (0x00035c60) popup_slider_window_g

0x69eb,	// (0x0002c974) popup_slider_window_t1

0x6a5f,	// (0x0002c9e8) small_volume_slider_vertical_pane

0x5367,	// (0x0002b2f0) small_volume_slider_vertical_pane_g1

0x5367,	// (0x0002b2f0) small_volume_slider_vertical_pane_g2

0x6a7b,	// (0x0002ca04) small_volume_slider_vertical_pane_g3

0x0002,

0xfce9,	// (0x00035c72) small_volume_slider_vertical_pane_g

0x9842,	// (0x0002f7cb) area_side_right_pane_ParamLimits

0x9842,	// (0x0002f7cb) area_side_right_pane

0xc1d5,	// (0x0003215e) aid_size_side_button_ParamLimits

0xc1d5,	// (0x0003215e) aid_size_side_button

0xc1ee,	// (0x00032177) grid_sctrl_middle_pane_ParamLimits

0xc1ee,	// (0x00032177) grid_sctrl_middle_pane

0x228f,	// (0x00028218) sctrl_sk_bottom_pane

0x22a0,	// (0x00028229) sctrl_sk_top_pane

0x22b2,	// (0x0002823b) aid_touch_sctrl_top

0xc9c9,	// (0x00032952) bg_sctrl_sk_pane_ParamLimits

0xc9c9,	// (0x00032952) bg_sctrl_sk_pane

0x22bf,	// (0x00028248) sctrl_sk_top_pane_g1

0x22cc,	// (0x00028255) sctrl_sk_top_pane_t1

0x22b2,	// (0x0002823b) aid_touch_sctrl_bottom

0xc9c9,	// (0x00032952) bg_sctrl_sk_pane_cp_ParamLimits

0xc9c9,	// (0x00032952) bg_sctrl_sk_pane_cp

0x22e7,	// (0x00028270) sctrl_sk_bottom_pane_g1

0x22cc,	// (0x00028255) sctrl_sk_bottom_pane_t1

0xc208,	// (0x00032191) cell_sctrl_middle_pane_ParamLimits

0xc208,	// (0x00032191) cell_sctrl_middle_pane

0xc219,	// (0x000321a2) aid_touch_sctrl_middle_ParamLimits

0xc219,	// (0x000321a2) aid_touch_sctrl_middle

0xc226,	// (0x000321af) bg_sctrl_middle_pane_ParamLimits

0xc226,	// (0x000321af) bg_sctrl_middle_pane

0x6b03,	// (0x0002ca8c) cell_sctrl_middle_pane_g1_ParamLimits

0x6b03,	// (0x0002ca8c) cell_sctrl_middle_pane_g1

0xc234,	// (0x000321bd) cell_sctrl_middle_pane_g2_ParamLimits

0xc234,	// (0x000321bd) cell_sctrl_middle_pane_g2

0x0001,

0xfcf5,	// (0x00035c7e) cell_sctrl_middle_pane_g_ParamLimits

0xfcf5,	// (0x00035c7e) cell_sctrl_middle_pane_g

0x19ff,	// (0x00027988) bg_sctrl_middle_pane_g1

0x1a07,	// (0x00027990) bg_sctrl_middle_pane_g2

0x1a0f,	// (0x00027998) bg_sctrl_middle_pane_g3

0x1a17,	// (0x000279a0) bg_sctrl_middle_pane_g4

0x1a1f,	// (0x000279a8) bg_sctrl_middle_pane_g5

0x1a27,	// (0x000279b0) bg_sctrl_middle_pane_g6

0x1a2f,	// (0x000279b8) bg_sctrl_middle_pane_g7

0x1a37,	// (0x000279c0) bg_sctrl_middle_pane_g8

0x0007,

0xfcfa,	// (0x00035c83) bg_sctrl_middle_pane_g

0x1a3f,	// (0x000279c8) bg_sctrl_middle_pane_g8_copy1

0x19ff,	// (0x00027988) bg_sctrl_sk_pane_g1

0x1a07,	// (0x00027990) bg_sctrl_sk_pane_g2

0x1a0f,	// (0x00027998) bg_sctrl_sk_pane_g3

0x0008,

0xf85c,	// (0x000357e5) bg_sctrl_sk_pane_g

0xcb93,	// (0x00032b1c) aid_size_touch_scroll_bar

0x1a17,	// (0x000279a0) bg_sctrl_sk_pane_g4

0x1a1f,	// (0x000279a8) bg_sctrl_sk_pane_g5

0x1a27,	// (0x000279b0) bg_sctrl_sk_pane_g6

0x1a2f,	// (0x000279b8) bg_sctrl_sk_pane_g7

0x1a37,	// (0x000279c0) bg_sctrl_sk_pane_g8

0x1a3f,	// (0x000279c8) bg_sctrl_sk_pane_g9

0x0fc9,	// (0x00026f52) popup_fep_china_hwr2_fs_candidate_window

0xa7cd,	// (0x00030756) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa7cd,	// (0x00030756) popup_fep_china_hwr2_fs_control_window

0x55d7,	// (0x0002b560) sctrl_sk_top_pane_g2

0x0001,

0xfcf0,	// (0x00035c79) sctrl_sk_top_pane_g

0xdb05,	// (0x00033a8e) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdb05,	// (0x00033a8e) aid_fep_china_hwr2_fs_cell

0xdb19,	// (0x00033aa2) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdb19,	// (0x00033aa2) bg_popup_fep_shadow_pane_cp4

0xdb30,	// (0x00033ab9) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdb30,	// (0x00033ab9) bg_popup_fep_shadow_pane_cp5

0xdb42,	// (0x00033acb) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdb42,	// (0x00033acb) popup_fep_china_hwr2_fs_control_bar_grid

0xdb56,	// (0x00033adf) popup_fep_china_hwr2_fs_control_funtion_grid

0x6ad7,	// (0x0002ca60) aid_fep_china_hwr2_fs_candi_cell

0xc82f,	// (0x000327b8) bg_popup_fep_shadow_pane_cp6

0x6ae1,	// (0x0002ca6a) popup_fep_china_hwr2_fs_candidate_grid

0xdb5e,	// (0x00033ae7) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdb5e,	// (0x00033ae7) cell_fep_china_hwr2_fs_funtion_grid

0x5367,	// (0x0002b2f0) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6b03,	// (0x0002ca8c) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6b03,	// (0x0002ca8c) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6b11,	// (0x0002ca9a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6b11,	// (0x0002ca9a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0b,	// (0x00035c94) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0b,	// (0x00035c94) cell_fep_china_hwr2_fs_funtion_grid_g

0xdb76,	// (0x00033aff) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdb76,	// (0x00033aff) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdb8b,	// (0x00033b14) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdb8b,	// (0x00033b14) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd10,	// (0x00035c99) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd10,	// (0x00035c99) cell_fep_china_hwr2_fs_funtion_grid_t

0x6b58,	// (0x0002cae1) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6b60,	// (0x0002cae9) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6b68,	// (0x0002caf1) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd15,	// (0x00035c9e) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6b70,	// (0x0002caf9) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6b70,	// (0x0002caf9) cell_fep_china_hwr2_fs_candidate_grid

0x6b89,	// (0x0002cb12) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6b91,	// (0x0002cb1a) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5367,	// (0x0002b2f0) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5367,	// (0x0002b2f0) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3c,	// (0x00035ac5) cell_fep_china_hwr2_fs_candidate_grid_g

0x6b99,	// (0x0002cb22) cell_fep_china_hwr2_fs_candidate_grid_t1

0x15c8,	// (0x00027551) clock_nsta_pane_cp_24_ParamLimits

0x15c8,	// (0x00027551) clock_nsta_pane_cp_24

0x1646,	// (0x000275cf) indicator_nsta_pane_cp_24_ParamLimits

0x1646,	// (0x000275cf) indicator_nsta_pane_cp_24

0x3a54,	// (0x000299dd) heading_pane_g1

0x0001,

0xf8c1,	// (0x0003584a) heading_pane_g

0x449b,	// (0x0002a424) grid_sct_catagory_button_pane

0x44cb,	// (0x0002a454) scroll_pane_cp5_ParamLimits

0x4f54,	// (0x0002aedd) button_value_adjust_pane_cp5_ParamLimits

0x4f54,	// (0x0002aedd) button_value_adjust_pane_cp5

0x5033,	// (0x0002afbc) form2_midp_time_pane_ParamLimits

0x6ba7,	// (0x0002cb30) cell_sct_catagory_button_pane_ParamLimits

0x6ba7,	// (0x0002cb30) cell_sct_catagory_button_pane

0x532c,	// (0x0002b2b5) bg_button_pane_cp01_ParamLimits

0x532c,	// (0x0002b2b5) bg_button_pane_cp01

0x5367,	// (0x0002b2f0) cell_sct_catagory_button_pane_g1

0xada6,	// (0x00030d2f) popup_tb_extension_window

0xdba7,	// (0x00033b30) aid_size_cell_ext_ParamLimits

0xdba7,	// (0x00033b30) aid_size_cell_ext

0xcb45,	// (0x00032ace) bg_tb_trans_pane_cp1_ParamLimits

0xcb45,	// (0x00032ace) bg_tb_trans_pane_cp1

0xdbcd,	// (0x00033b56) grid_tb_ext_pane_ParamLimits

0xdbcd,	// (0x00033b56) grid_tb_ext_pane

0xdc0c,	// (0x00033b95) cell_tb_ext_pane_ParamLimits

0xdc0c,	// (0x00033b95) cell_tb_ext_pane

0xdc34,	// (0x00033bbd) cell_tb_ext_pane_g1_ParamLimits

0xdc34,	// (0x00033bbd) cell_tb_ext_pane_g1

0x6c3d,	// (0x0002cbc6) cell_tb_ext_pane_t1

0xc9c9,	// (0x00032952) list_highlight_pane_cp11_ParamLimits

0xc9c9,	// (0x00032952) list_highlight_pane_cp11

0x9909,	// (0x0002f892) popup_uni_indicator_window_ParamLimits

0x9909,	// (0x0002f892) popup_uni_indicator_window

0xcc51,	// (0x00032bda) bg_popup_sub_pane_cp14

0xdc51,	// (0x00033bda) list_uniindi_pane

0xdc5d,	// (0x00033be6) uniindi_top_pane

0xc9c9,	// (0x00032952) bg_uniindi_top_pane

0xdc7c,	// (0x00033c05) uniindi_top_pane_g1

0xdc92,	// (0x00033c1b) uniindi_top_pane_g2

0x0003,

0xfd1c,	// (0x00035ca5) uniindi_top_pane_g

0xdcaf,	// (0x00033c38) uniindi_top_pane_t1

0x6ced,	// (0x0002cc76) list_single_uniindi_pane_ParamLimits

0x6ced,	// (0x0002cc76) list_single_uniindi_pane

0x5367,	// (0x0002b2f0) bg_uniindi_top_pane_g1

0x6cff,	// (0x0002cc88) list_single_uniindi_pane_g1

0x6d12,	// (0x0002cc9b) list_single_uniindi_pane_t1

0xc82f,	// (0x000327b8) control_bg_pane

0x6d37,	// (0x0002ccc0) bg_sctrl_sk_pane_cp1

0x6d40,	// (0x0002ccc9) bg_sctrl_sk_pane_cp2

0x6d49,	// (0x0002ccd2) control_bg_pane_g1

0x6d52,	// (0x0002ccdb) control_bg_pane_g2

0x0001,

0xfd25,	// (0x00035cae) control_bg_pane_g

0x4d9a,	// (0x0002ad23) cell_indicator_nsta_pane_g1_ParamLimits

0xbed9,	// (0x00031e62) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa0,	// (0x00035a29) cell_indicator_nsta_pane_g_ParamLimits

0xf124,	// (0x000350ad) form2_midp_time_pane_t1_ParamLimits

0x1edb,	// (0x00027e64) main_idle_act4_pane_ParamLimits

0x1edb,	// (0x00027e64) main_idle_act4_pane

0xada6,	// (0x00030d2f) popup_tb_extension_window_ParamLimits

0xdbf2,	// (0x00033b7b) tb_ext_find_pane_ParamLimits

0xdbf2,	// (0x00033b7b) tb_ext_find_pane

0x6d5b,	// (0x0002cce4) ai_gene_pane_1_cp1

0x0b17,	// (0x00026aa0) ai_gene_pane_2_cp1

0xdcd9,	// (0x00033c62) list_single_idle_plugin_calendar_pane

0x6d6c,	// (0x0002ccf5) list_single_idle_plugin_notification_pane

0x6d75,	// (0x0002ccfe) list_single_idle_plugin_player_pane

0xdce2,	// (0x00033c6b) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdce2,	// (0x00033c6b) list_single_idle_plugin_shortcut_pane

0xdd0a,	// (0x00033c93) main_idle_act4_pane_t1

0xdd21,	// (0x00033caa) main_idle_act4_pane_t2

0x0001,

0xfd2a,	// (0x00035cb3) main_idle_act4_pane_t

0xdd38,	// (0x00033cc1) middle_sk_idle_act4_pane_ParamLimits

0xdd38,	// (0x00033cc1) middle_sk_idle_act4_pane

0xdd54,	// (0x00033cdd) popup_clock_digital_analogue_window_cp2

0xdd80,	// (0x00033d09) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd80,	// (0x00033d09) shortcut_wheel_idle_act4_pane

0x5367,	// (0x0002b2f0) shortcut_wheel_idle_act4_pane_g1

0x5367,	// (0x0002b2f0) shortcut_wheel_idle_act4_pane_g2

0x5367,	// (0x0002b2f0) shortcut_wheel_idle_act4_pane_g3

0x5367,	// (0x0002b2f0) shortcut_wheel_idle_act4_pane_g4

0x5367,	// (0x0002b2f0) shortcut_wheel_idle_act4_pane_g5

0x6e08,	// (0x0002cd91) shortcut_wheel_idle_act4_pane_g6

0x6e10,	// (0x0002cd99) shortcut_wheel_idle_act4_pane_g7

0x6e18,	// (0x0002cda1) shortcut_wheel_idle_act4_pane_g8

0x6e20,	// (0x0002cda9) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2f,	// (0x00035cb8) shortcut_wheel_idle_act4_pane_g

0xd246,	// (0x000331cf) middle_sk_idle_act4_pane_g1_ParamLimits

0xd246,	// (0x000331cf) middle_sk_idle_act4_pane_g1

0xddfd,	// (0x00033d86) middle_sk_idle_act4_pane_g2_ParamLimits

0xddfd,	// (0x00033d86) middle_sk_idle_act4_pane_g2

0x0001,

0xfd52,	// (0x00035cdb) middle_sk_idle_act4_pane_g_ParamLimits

0xfd52,	// (0x00035cdb) middle_sk_idle_act4_pane_g

0xde15,	// (0x00033d9e) middle_sk_idle_act4_pane_t1_ParamLimits

0xde15,	// (0x00033d9e) middle_sk_idle_act4_pane_t1

0xde44,	// (0x00033dcd) grid_ai_shortcut_pane_ParamLimits

0xde44,	// (0x00033dcd) grid_ai_shortcut_pane

0xde61,	// (0x00033dea) list_highlight_pane_cp16_ParamLimits

0xde61,	// (0x00033dea) list_highlight_pane_cp16

0xde6e,	// (0x00033df7) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde6e,	// (0x00033df7) list_single_idle_plugin_shortcut_pane_g1

0xde7a,	// (0x00033e03) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde7a,	// (0x00033e03) list_single_idle_plugin_shortcut_pane_g2

0xde96,	// (0x00033e1f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde96,	// (0x00033e1f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd57,	// (0x00035ce0) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd57,	// (0x00035ce0) list_single_idle_plugin_shortcut_pane_g

0xdeab,	// (0x00033e34) cell_ai_shortcut_pane_ParamLimits

0xdeab,	// (0x00033e34) cell_ai_shortcut_pane

0xdec1,	// (0x00033e4a) cell_ai_shortcut_pane_g1_ParamLimits

0xdec1,	// (0x00033e4a) cell_ai_shortcut_pane_g1

0x6d5b,	// (0x0002cce4) ai_gene_pane_1_cp2

0x6f50,	// (0x0002ced9) ai_gene_pane_2_cp2

0x6f58,	// (0x0002cee1) list_highlight_pane_cp15

0xdee3,	// (0x00033e6c) list_single_idle_plugin_calendar_pane_g1

0x6f58,	// (0x0002cee1) list_highlight_pane_cp17

0x6f69,	// (0x0002cef2) list_single_idle_plugin_calendar_pane_g1_copy1

0x6f71,	// (0x0002cefa) list_single_idle_plugin_player_pane_g1

0x46f4,	// (0x0002a67d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5e,	// (0x00035ce7) list_single_idle_plugin_player_pane_g

0x6f79,	// (0x0002cf02) list_single_idle_plugin_player_pane_t1

0x6f87,	// (0x0002cf10) list_single_idle_plugin_player_pane_t2

0x6f95,	// (0x0002cf1e) list_single_idle_plugin_player_pane_t3

0x6fa3,	// (0x0002cf2c) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd63,	// (0x00035cec) list_single_idle_plugin_player_pane_t

0x6fb1,	// (0x0002cf3a) wait_bar_pane_cp15

0x6fb9,	// (0x0002cf42) grid_ai_notification_pane

0x46f4,	// (0x0002a67d) list_single_idle_plugin_notification_pane_g1

0xdeeb,	// (0x00033e74) cell_ai_notification_pane_ParamLimits

0xdeeb,	// (0x00033e74) cell_ai_notification_pane

0x6fcf,	// (0x0002cf58) cell_ai_notification_pane_g1

0x6fd7,	// (0x0002cf60) cell_ai_notification_pane_t1

0xdef8,	// (0x00033e81) tb_ext_find_button_pane

0xdf00,	// (0x00033e89) tb_ext_find_pane_g1

0xdf08,	// (0x00033e91) tb_ext_find_pane_t1

0xd087,	// (0x00033010) tb_ext_find_button_pane_g1

0xdf16,	// (0x00033e9f) tb_ext_find_button_pane_g2

0x0001,

0xfd6c,	// (0x00035cf5) tb_ext_find_button_pane_g

0xdd0a,	// (0x00033c93) main_idle_act4_pane_t1_ParamLimits

0xdd21,	// (0x00033caa) main_idle_act4_pane_t2_ParamLimits

0xfd2a,	// (0x00035cb3) main_idle_act4_pane_t_ParamLimits

0xdd54,	// (0x00033cdd) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd6c,	// (0x00033cf5) sat_plugin_idle_act4_pane_ParamLimits

0xdd6c,	// (0x00033cf5) sat_plugin_idle_act4_pane

0xdf1f,	// (0x00033ea8) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf1f,	// (0x00033ea8) sat_plugin_idle_act4_pane_t1

0xdf37,	// (0x00033ec0) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf37,	// (0x00033ec0) sat_plugin_idle_act4_pane_t2

0xdf4f,	// (0x00033ed8) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf4f,	// (0x00033ed8) sat_plugin_idle_act4_pane_t3

0xdf67,	// (0x00033ef0) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf67,	// (0x00033ef0) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd71,	// (0x00035cfa) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd71,	// (0x00035cfa) sat_plugin_idle_act4_pane_t

0x9884,	// (0x0002f80d) popup_battery_window_ParamLimits

0x9884,	// (0x0002f80d) popup_battery_window

0xc9c9,	// (0x00032952) bg_popup_sub_pane_cp25_ParamLimits

0xc9c9,	// (0x00032952) bg_popup_sub_pane_cp25

0x7058,	// (0x0002cfe1) popup_battery_window_g1_ParamLimits

0x7058,	// (0x0002cfe1) popup_battery_window_g1

0x7064,	// (0x0002cfed) popup_battery_window_t1_ParamLimits

0x7064,	// (0x0002cfed) popup_battery_window_t1

0x7076,	// (0x0002cfff) popup_battery_window_t2_ParamLimits

0x7076,	// (0x0002cfff) popup_battery_window_t2

0x0001,

0xfd7a,	// (0x00035d03) popup_battery_window_t_ParamLimits

0xfd7a,	// (0x00035d03) popup_battery_window_t

0xa41d,	// (0x000303a6) midp_canvas_pane_ParamLimits

0xa48f,	// (0x00030418) midp_keypad_pane_ParamLimits

0xa48f,	// (0x00030418) midp_keypad_pane

0x0f27,	// (0x00026eb0) main_midp_pane_ParamLimits

0xbee6,	// (0x00031e6f) signal_pane_g2_cp_ParamLimits

0xdf7f,	// (0x00033f08) aid_size_cell_midp_keypad_ParamLimits

0xdf7f,	// (0x00033f08) aid_size_cell_midp_keypad

0xdf9d,	// (0x00033f26) midp_keyp_game_grid_pane_ParamLimits

0xdf9d,	// (0x00033f26) midp_keyp_game_grid_pane

0xdfc4,	// (0x00033f4d) midp_keyp_rocker_pane_ParamLimits

0xdfc4,	// (0x00033f4d) midp_keyp_rocker_pane

0xe015,	// (0x00033f9e) midp_keyp_sk_left_pane_ParamLimits

0xe015,	// (0x00033f9e) midp_keyp_sk_left_pane

0xe069,	// (0x00033ff2) midp_keyp_sk_right_pane_ParamLimits

0xe069,	// (0x00033ff2) midp_keyp_sk_right_pane

0xc82f,	// (0x000327b8) bg_button_pane_cp03

0xe0bd,	// (0x00034046) midp_keyp_sk_left_pane_g1

0xc82f,	// (0x000327b8) bg_button_pane_cp04

0xe0bd,	// (0x00034046) midp_keyp_sk_right_pane_g1

0x5367,	// (0x0002b2f0) midp_keyp_rocker_pane_g1

0xe0c6,	// (0x0003404f) keyp_game_cell_pane_ParamLimits

0xe0c6,	// (0x0003404f) keyp_game_cell_pane

0xc82f,	// (0x000327b8) bg_button_pane_cp02

0xe0ea,	// (0x00034073) keyp_game_cell_pane_g1

0x98a4,	// (0x0002f82d) popup_fep_vkb2_window_ParamLimits

0x98a4,	// (0x0002f82d) popup_fep_vkb2_window

0xc240,	// (0x000321c9) aid_size_cell_vkb2_ParamLimits

0xc240,	// (0x000321c9) aid_size_cell_vkb2

0xc27e,	// (0x00032207) popup_fep_vkb2_window_g1_ParamLimits

0xc27e,	// (0x00032207) popup_fep_vkb2_window_g1

0xc2ce,	// (0x00032257) vkb2_area_bottom_pane_ParamLimits

0xc2ce,	// (0x00032257) vkb2_area_bottom_pane

0xc322,	// (0x000322ab) vkb2_area_keypad_pane_ParamLimits

0xc322,	// (0x000322ab) vkb2_area_keypad_pane

0xc36a,	// (0x000322f3) vkb2_area_top_pane_ParamLimits

0xc36a,	// (0x000322f3) vkb2_area_top_pane

0xc3f0,	// (0x00032379) vkb2_top_entry_pane_ParamLimits

0xc3f0,	// (0x00032379) vkb2_top_entry_pane

0xc41d,	// (0x000323a6) vkb2_top_grid_left_pane_ParamLimits

0xc41d,	// (0x000323a6) vkb2_top_grid_left_pane

0xc43d,	// (0x000323c6) vkb2_top_grid_right_pane_ParamLimits

0xc43d,	// (0x000323c6) vkb2_top_grid_right_pane

0x2545,	// (0x000284ce) vkb2_cell_keypad_pane_ParamLimits

0x2545,	// (0x000284ce) vkb2_cell_keypad_pane

0xc483,	// (0x0003240c) vkb2_area_bottom_grid_pane_ParamLimits

0xc483,	// (0x0003240c) vkb2_area_bottom_grid_pane

0xc4ad,	// (0x00032436) vkb2_area_bottom_pane_g1_ParamLimits

0xc4ad,	// (0x00032436) vkb2_area_bottom_pane_g1

0xc4d3,	// (0x0003245c) vkb2_area_bottom_pane_g2_ParamLimits

0xc4d3,	// (0x0003245c) vkb2_area_bottom_pane_g2

0xc504,	// (0x0003248d) vkb2_area_bottom_pane_g3_ParamLimits

0xc504,	// (0x0003248d) vkb2_area_bottom_pane_g3

0x0002,

0xfd7f,	// (0x00035d08) vkb2_area_bottom_pane_g_ParamLimits

0xfd7f,	// (0x00035d08) vkb2_area_bottom_pane_g

0x26ef,	// (0x00028678) vkb2_top_cell_left_pane_ParamLimits

0x26ef,	// (0x00028678) vkb2_top_cell_left_pane

0xe0f3,	// (0x0003407c) vkb2_top_entry_pane_g1_ParamLimits

0xe0f3,	// (0x0003407c) vkb2_top_entry_pane_g1

0xe101,	// (0x0003408a) vkb2_top_entry_pane_t1_ParamLimits

0xe101,	// (0x0003408a) vkb2_top_entry_pane_t1

0x7227,	// (0x0002d1b0) vkb2_top_entry_pane_t2_ParamLimits

0x7227,	// (0x0002d1b0) vkb2_top_entry_pane_t2

0x7259,	// (0x0002d1e2) vkb2_top_entry_pane_t3_ParamLimits

0x7259,	// (0x0002d1e2) vkb2_top_entry_pane_t3

0x0002,

0xfd86,	// (0x00035d0f) vkb2_top_entry_pane_t_ParamLimits

0xfd86,	// (0x00035d0f) vkb2_top_entry_pane_t

0xc56e,	// (0x000324f7) vkb2_top_grid_right_pane_g1_ParamLimits

0xc56e,	// (0x000324f7) vkb2_top_grid_right_pane_g1

0x2752,	// (0x000286db) vkb2_top_grid_right_pane_g2_ParamLimits

0x2752,	// (0x000286db) vkb2_top_grid_right_pane_g2

0x276a,	// (0x000286f3) vkb2_top_grid_right_pane_g3_ParamLimits

0x276a,	// (0x000286f3) vkb2_top_grid_right_pane_g3

0xc584,	// (0x0003250d) vkb2_top_grid_right_pane_g4_ParamLimits

0xc584,	// (0x0003250d) vkb2_top_grid_right_pane_g4

0x0003,

0xfd8d,	// (0x00035d16) vkb2_top_grid_right_pane_g_ParamLimits

0xfd8d,	// (0x00035d16) vkb2_top_grid_right_pane_g

0x2798,	// (0x00028721) vkb2_top_cell_left_pane_g1

0x27af,	// (0x00028738) vkb2_cell_keypad_pane_g1_ParamLimits

0x27af,	// (0x00028738) vkb2_cell_keypad_pane_g1

0x727d,	// (0x0002d206) vkb2_cell_keypad_pane_t1_ParamLimits

0x727d,	// (0x0002d206) vkb2_cell_keypad_pane_t1

0x27bd,	// (0x00028746) vkb2_cell_bottom_grid_pane_ParamLimits

0x27bd,	// (0x00028746) vkb2_cell_bottom_grid_pane

0x27f6,	// (0x0002877f) vkb2_cell_bottom_grid_pane_g1

0xdda1,	// (0x00033d2a) aid_call2_pane_cp02

0xdda9,	// (0x00033d32) aid_call_pane_cp02

0xddb1,	// (0x00033d3a) clock_digital_number_pane_cp10

0xddb9,	// (0x00033d42) clock_digital_number_pane_cp11

0xddc1,	// (0x00033d4a) clock_digital_number_pane_cp12

0xddc9,	// (0x00033d52) clock_digital_number_pane_cp13

0xddd1,	// (0x00033d5a) clock_digital_separator_pane_cp10

0xd087,	// (0x00033010) popup_clock_digital_analogue_window_cp2_g1

0xd087,	// (0x00033010) popup_clock_digital_analogue_window_cp2_g2

0xddd9,	// (0x00033d62) popup_clock_digital_analogue_window_cp2_g3

0xd087,	// (0x00033010) popup_clock_digital_analogue_window_cp2_g4

0xddd9,	// (0x00033d62) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd42,	// (0x00035ccb) popup_clock_digital_analogue_window_cp2_g

0xdde1,	// (0x00033d6a) popup_clock_digital_analogue_window_cp2_t1

0xddef,	// (0x00033d78) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd4d,	// (0x00035cd6) popup_clock_digital_analogue_window_cp2_t

0x5367,	// (0x0002b2f0) clock_digital_number_pane_cp10_g1

0x5367,	// (0x0002b2f0) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3c,	// (0x00035ac5) clock_digital_number_pane_cp10_g

0x5367,	// (0x0002b2f0) clock_digital_separator_pane_cp10_g1

0x5367,	// (0x0002b2f0) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3c,	// (0x00035ac5) clock_digital_separator_pane_cp10_g

0xdc9e,	// (0x00033c27) uniindi_top_pane_g3

0x6cb6,	// (0x0002cc3f) uniindi_top_pane_g4

0x25d0,	// (0x00028559) vkb2_row_keypad_pane_ParamLimits

0x25d0,	// (0x00028559) vkb2_row_keypad_pane

0x2812,	// (0x0002879b) vkb2_cell_t_keypad_pane_ParamLimits

0x2812,	// (0x0002879b) vkb2_cell_t_keypad_pane

0x2822,	// (0x000287ab) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2822,	// (0x000287ab) vkb2_cell_t_keypad_pane_cp08

0x2835,	// (0x000287be) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2835,	// (0x000287be) vkb2_cell_t_keypad_pane_cp09

0x2849,	// (0x000287d2) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2849,	// (0x000287d2) vkb2_cell_t_keypad_pane_cp01

0x285a,	// (0x000287e3) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x285a,	// (0x000287e3) vkb2_cell_t_keypad_pane_cp02

0x286b,	// (0x000287f4) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x286b,	// (0x000287f4) vkb2_cell_t_keypad_pane_cp03

0x287c,	// (0x00028805) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x287c,	// (0x00028805) vkb2_cell_t_keypad_pane_cp04

0x288d,	// (0x00028816) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x288d,	// (0x00028816) vkb2_cell_t_keypad_pane_cp05

0x289e,	// (0x00028827) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x289e,	// (0x00028827) vkb2_cell_t_keypad_pane_cp06

0x28af,	// (0x00028838) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x28af,	// (0x00028838) vkb2_cell_t_keypad_pane_cp07

0x28c0,	// (0x00028849) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x28c0,	// (0x00028849) vkb2_cell_t_keypad_pane_cp10

0x55d7,	// (0x0002b560) vkb2_cell_t_keypad_pane_g1

0x7294,	// (0x0002d21d) vkb2_cell_t_keypad_pane_t1

0xc82f,	// (0x000327b8) popup_grid_graphic2_window

0xe13a,	// (0x000340c3) aid_size_cell_graphic2_ParamLimits

0xe13a,	// (0x000340c3) aid_size_cell_graphic2

0xe178,	// (0x00034101) bg_popup_window_pane_cp21_ParamLimits

0xe178,	// (0x00034101) bg_popup_window_pane_cp21

0xe186,	// (0x0003410f) graphic2_pages_pane_ParamLimits

0xe186,	// (0x0003410f) graphic2_pages_pane

0xe1dc,	// (0x00034165) grid_graphic2_control_pane_ParamLimits

0xe1dc,	// (0x00034165) grid_graphic2_control_pane

0xe224,	// (0x000341ad) grid_graphic2_pane_ParamLimits

0xe224,	// (0x000341ad) grid_graphic2_pane

0xe2ab,	// (0x00034234) cell_graphic2_pane

0xc82f,	// (0x000327b8) main_comp_mode_pane

0x6529,	// (0x0002c4b2) list_ai3_gene_pane_ParamLimits

0xda4d,	// (0x000339d6) bg_popup_window_pane_cp19_ParamLimits

0x68f9,	// (0x0002c882) bg_touch_area_indi_pane_ParamLimits

0x68f9,	// (0x0002c882) bg_touch_area_indi_pane

0x690f,	// (0x0002c898) bg_touch_area_indi_pane_cp01_ParamLimits

0x690f,	// (0x0002c898) bg_touch_area_indi_pane_cp01

0x6925,	// (0x0002c8ae) bg_touch_area_indi_pane_cp02_ParamLimits

0x6925,	// (0x0002c8ae) bg_touch_area_indi_pane_cp02

0x693d,	// (0x0002c8c6) bg_touch_area_indi_pane_cp03_ParamLimits

0x693d,	// (0x0002c8c6) bg_touch_area_indi_pane_cp03

0x6957,	// (0x0002c8e0) popup_slider_window_g1_ParamLimits

0x6973,	// (0x0002c8fc) popup_slider_window_g2_ParamLimits

0x698f,	// (0x0002c918) popup_slider_window_g3_ParamLimits

0xfcd7,	// (0x00035c60) popup_slider_window_g_ParamLimits

0x69eb,	// (0x0002c974) popup_slider_window_t1_ParamLimits

0x6a5f,	// (0x0002c9e8) small_volume_slider_vertical_pane_ParamLimits

0xe2ab,	// (0x00034234) cell_graphic2_pane_ParamLimits

0xe308,	// (0x00034291) bg_button_pane_cp10_ParamLimits

0xe308,	// (0x00034291) bg_button_pane_cp10

0xe31b,	// (0x000342a4) bg_button_pane_cp11_ParamLimits

0xe31b,	// (0x000342a4) bg_button_pane_cp11

0xe32e,	// (0x000342b7) graphic2_pages_pane_g1_ParamLimits

0xe32e,	// (0x000342b7) graphic2_pages_pane_g1

0xe349,	// (0x000342d2) graphic2_pages_pane_g2_ParamLimits

0xe349,	// (0x000342d2) graphic2_pages_pane_g2

0x0001,

0xfd9b,	// (0x00035d24) graphic2_pages_pane_g_ParamLimits

0xfd9b,	// (0x00035d24) graphic2_pages_pane_g

0xe361,	// (0x000342ea) graphic2_pages_pane_t1_ParamLimits

0xe361,	// (0x000342ea) graphic2_pages_pane_t1

0xe379,	// (0x00034302) cell_graphic2_control_pane_ParamLimits

0xe379,	// (0x00034302) cell_graphic2_control_pane

0xe3ab,	// (0x00034334) cell_graphic2_pane_g1_ParamLimits

0xe3ab,	// (0x00034334) cell_graphic2_pane_g1

0xd254,	// (0x000331dd) cell_graphic2_pane_g2_ParamLimits

0xd254,	// (0x000331dd) cell_graphic2_pane_g2

0xe3b8,	// (0x00034341) cell_graphic2_pane_g3_ParamLimits

0xe3b8,	// (0x00034341) cell_graphic2_pane_g3

0xd261,	// (0x000331ea) cell_graphic2_pane_g4_ParamLimits

0xd261,	// (0x000331ea) cell_graphic2_pane_g4

0xe3c5,	// (0x0003434e) cell_graphic2_pane_g5_ParamLimits

0xe3c5,	// (0x0003434e) cell_graphic2_pane_g5

0x0004,

0xfda0,	// (0x00035d29) cell_graphic2_pane_g_ParamLimits

0xfda0,	// (0x00035d29) cell_graphic2_pane_g

0xe3e5,	// (0x0003436e) cell_graphic2_pane_t1_ParamLimits

0xe3e5,	// (0x0003436e) cell_graphic2_pane_t1

0x3a48,	// (0x000299d1) grid_highlight_pane_cp11_ParamLimits

0x3a48,	// (0x000299d1) grid_highlight_pane_cp11

0xc9c9,	// (0x00032952) bg_button_pane_cp05

0xe41c,	// (0x000343a5) cell_graphic2_control_pane_g1

0x5367,	// (0x0002b2f0) bg_touch_area_indi_pane_g1

0x7564,	// (0x0002d4ed) aid_cmod_rocker_key_size

0x756e,	// (0x0002d4f7) aid_cmode_itu_key_size

0x7578,	// (0x0002d501) main_cmode_video_pane

0x7582,	// (0x0002d50b) main_comp_mode_itu_pane

0x758e,	// (0x0002d517) main_comp_mode_rocker_pane

0x759a,	// (0x0002d523) cell_cmode_rocker_pane_ParamLimits

0x759a,	// (0x0002d523) cell_cmode_rocker_pane

0x75ac,	// (0x0002d535) cell_cmode_itu_pane_ParamLimits

0x75ac,	// (0x0002d535) cell_cmode_itu_pane

0xcc51,	// (0x00032bda) bg_button_pane_cp06_ParamLimits

0xcc51,	// (0x00032bda) bg_button_pane_cp06

0x55d7,	// (0x0002b560) cell_cmode_rocker_pane_g1_ParamLimits

0x55d7,	// (0x0002b560) cell_cmode_rocker_pane_g1

0x6b03,	// (0x0002ca8c) cell_cmode_rocker_pane_g2_ParamLimits

0x6b03,	// (0x0002ca8c) cell_cmode_rocker_pane_g2

0x0001,

0xfdb0,	// (0x00035d39) cell_cmode_rocker_pane_g_ParamLimits

0xfdb0,	// (0x00035d39) cell_cmode_rocker_pane_g

0xc82f,	// (0x000327b8) bg_button_pane_cp07

0x75c1,	// (0x0002d54a) cell_cmode_itu_pane_g1

0x75ca,	// (0x0002d553) cell_cmode_itu_pane_t1

0x75d8,	// (0x0002d561) cell_cmode_itu_pane_t2

0x0001,

0xfdb5,	// (0x00035d3e) cell_cmode_itu_pane_t

0x6d27,	// (0x0002ccb0) aid_touch_ctrl_left

0x6d2f,	// (0x0002ccb8) aid_touch_ctrl_right

0xc82f,	// (0x000327b8) compa_mode_pane

0xe444,	// (0x000343cd) aid_cmod_rocker_key_size_cp

0xe44e,	// (0x000343d7) aid_cmode_itu_key_size_cp

0x75fa,	// (0x0002d583) compa_mode_pane_g1

0x7602,	// (0x0002d58b) compa_mode_pane_g2

0x760a,	// (0x0002d593) compa_mode_pane_g3

0x0002,

0xfdba,	// (0x00035d43) compa_mode_pane_g

0xe458,	// (0x000343e1) main_comp_mode_itu_pane_cp

0xe460,	// (0x000343e9) main_comp_mode_rocker_pane_cp

0xe468,	// (0x000343f1) cell_cmode_itu_pane_cp_ParamLimits

0xe468,	// (0x000343f1) cell_cmode_itu_pane_cp

0xe47d,	// (0x00034406) cell_cmode_rocker_pane_cp_ParamLimits

0xe47d,	// (0x00034406) cell_cmode_rocker_pane_cp

0xcc51,	// (0x00032bda) bg_button_pane_cp06_cp_ParamLimits

0xcc51,	// (0x00032bda) bg_button_pane_cp06_cp

0x55d7,	// (0x0002b560) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x55d7,	// (0x0002b560) cell_cmode_rocker_pane_g1_cp

0x5367,	// (0x0002b2f0) cell_cmode_rocker_pane_g2_cp

0xc82f,	// (0x000327b8) bg_button_pane_cp07_cp

0xe48f,	// (0x00034418) cell_cmode_itu_pane_g1_cp

0xe498,	// (0x00034421) cell_cmode_itu_pane_t1_cp

0xe498,	// (0x00034421) cell_cmode_itu_pane_t2_cp

0xbc42,	// (0x00031bcb) settings_code_pane_cp2

0xc89f,	// (0x00032828) bg_popup_window_pane_cp3_ParamLimits

0xcae2,	// (0x00032a6b) heading_pane_cp3_ParamLimits

0xcaee,	// (0x00032a77) listscroll_popup_graphic_pane_ParamLimits

0x1ee9,	// (0x00027e72) fep_hwr_aid_pane_ParamLimits

0x22b2,	// (0x0002823b) aid_touch_sctrl_top_ParamLimits

0x22bf,	// (0x00028248) sctrl_sk_top_pane_g1_ParamLimits

0x55d7,	// (0x0002b560) sctrl_sk_top_pane_g2_ParamLimits

0xfcf0,	// (0x00035c79) sctrl_sk_top_pane_g_ParamLimits

0x22cc,	// (0x00028255) sctrl_sk_top_pane_t1_ParamLimits

0x22b2,	// (0x0002823b) aid_touch_sctrl_bottom_ParamLimits

0x22cc,	// (0x00028255) sctrl_sk_bottom_pane_t1_ParamLimits

0xdc6a,	// (0x00033bf3) aid_area_touch_clock

0xc3b2,	// (0x0003233b) aid_vkb2_area_top_pane_cell_ParamLimits

0xc3b2,	// (0x0003233b) aid_vkb2_area_top_pane_cell

0xc45d,	// (0x000323e6) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc45d,	// (0x000323e6) aid_vkb2_area_bottom_pane_cell

0x71df,	// (0x0002d168) popup_char_count_window

0x7660,	// (0x0002d5e9) popup_char_count_window_g1

0x7669,	// (0x0002d5f2) popup_char_count_window_g2

0x7672,	// (0x0002d5fb) popup_char_count_window_g3

0x0002,

0xfdc1,	// (0x00035d4a) popup_char_count_window_g

0x767b,	// (0x0002d604) popup_char_count_window_t1

0x236d,	// (0x000282f6) popup_fep_char_preview_window_ParamLimits

0x236d,	// (0x000282f6) popup_fep_char_preview_window

0xc3d2,	// (0x0003235b) vkb2_top_candi_pane_ParamLimits

0xc3d2,	// (0x0003235b) vkb2_top_candi_pane

0xe4a6,	// (0x0003442f) cell_vkb2_top_candi_pane_ParamLimits

0xe4a6,	// (0x0003442f) cell_vkb2_top_candi_pane

0x33ec,	// (0x00029375) bg_popup_fep_char_preview_window_ParamLimits

0x33ec,	// (0x00029375) bg_popup_fep_char_preview_window

0x28d5,	// (0x0002885e) popup_fep_char_preview_window_t1_ParamLimits

0x28d5,	// (0x0002885e) popup_fep_char_preview_window_t1

0x76d6,	// (0x0002d65f) bg_popup_fep_char_preview_window_g1

0x76de,	// (0x0002d667) bg_popup_fep_char_preview_window_g2

0x76e6,	// (0x0002d66f) bg_popup_fep_char_preview_window_g3

0x76ee,	// (0x0002d677) bg_popup_fep_char_preview_window_g4

0x76f6,	// (0x0002d67f) bg_popup_fep_char_preview_window_g5

0x290f,	// (0x00028898) bg_popup_fep_char_preview_window_g6

0x76fe,	// (0x0002d687) bg_popup_fep_char_preview_window_g7

0x7706,	// (0x0002d68f) bg_popup_fep_char_preview_window_g8

0x770e,	// (0x0002d697) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdc8,	// (0x00035d51) bg_popup_fep_char_preview_window_g

0x55d7,	// (0x0002b560) cell_vkb2_top_candi_pane_g1_ParamLimits

0x55d7,	// (0x0002b560) cell_vkb2_top_candi_pane_g1

0x58ee,	// (0x0002b877) cell_vkb2_top_candi_pane_g2_ParamLimits

0x58ee,	// (0x0002b877) cell_vkb2_top_candi_pane_g2

0x590f,	// (0x0002b898) cell_vkb2_top_candi_pane_g3_ParamLimits

0x590f,	// (0x0002b898) cell_vkb2_top_candi_pane_g3

0x2917,	// (0x000288a0) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2917,	// (0x000288a0) cell_vkb2_top_candi_pane_g4

0x7716,	// (0x0002d69f) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7716,	// (0x0002d69f) cell_vkb2_top_candi_pane_g5

0x6b03,	// (0x0002ca8c) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6b03,	// (0x0002ca8c) cell_vkb2_top_candi_pane_g6

0x0005,

0xfddb,	// (0x00035d64) cell_vkb2_top_candi_pane_g_ParamLimits

0xfddb,	// (0x00035d64) cell_vkb2_top_candi_pane_g

0x2938,	// (0x000288c1) cell_vkb2_top_candi_pane_t1

0xba62,	// (0x000319eb) aid_size_touch_slider_mark_ParamLimits

0xba62,	// (0x000319eb) aid_size_touch_slider_mark

0xe1c2,	// (0x0003414b) grid_graphic2_catg_pane_ParamLimits

0xe1c2,	// (0x0003414b) grid_graphic2_catg_pane

0xe27e,	// (0x00034207) popup_grid_graphic2_window_t1_ParamLimits

0xe27e,	// (0x00034207) popup_grid_graphic2_window_t1

0xe294,	// (0x0003421d) popup_grid_graphic2_window_t2_ParamLimits

0xe294,	// (0x0003421d) popup_grid_graphic2_window_t2

0x0001,

0xfd96,	// (0x00035d1f) popup_grid_graphic2_window_t_ParamLimits

0xfd96,	// (0x00035d1f) popup_grid_graphic2_window_t

0xc9c9,	// (0x00032952) bg_button_pane_cp05_ParamLimits

0xe41c,	// (0x000343a5) cell_graphic2_control_pane_g1_ParamLimits

0xe50c,	// (0x00034495) cell_graphic2_catg_pane_ParamLimits

0xe50c,	// (0x00034495) cell_graphic2_catg_pane

0xc82f,	// (0x000327b8) bg_button_pane_cp12

0xe51e,	// (0x000344a7) cell_graphic2_catg_pane_g1

0x6c3d,	// (0x0002cbc6) cell_tb_ext_pane_t1_ParamLimits

0x270f,	// (0x00028698) vkb2_top_cell_right_narrow_pane_ParamLimits

0x270f,	// (0x00028698) vkb2_top_cell_right_narrow_pane

0x2727,	// (0x000286b0) vkb2_top_cell_right_wide_pane_ParamLimits

0x2727,	// (0x000286b0) vkb2_top_cell_right_wide_pane

0x1edb,	// (0x00027e64) bg_vkb2_func_pane_ParamLimits

0x1edb,	// (0x00027e64) bg_vkb2_func_pane

0x2798,	// (0x00028721) vkb2_top_cell_left_pane_g1_ParamLimits

0x1edb,	// (0x00027e64) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1edb,	// (0x00027e64) bg_vkb2_fuc_pane_cp03

0x27f6,	// (0x0002877f) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1a07,	// (0x00027990) bg_vkb2_func_pane_g1

0x1a0f,	// (0x00027998) bg_vkb2_func_pane_g2

0x1a1f,	// (0x000279a8) bg_vkb2_func_pane_g3

0x1a17,	// (0x000279a0) bg_vkb2_func_pane_g4

0x1a27,	// (0x000279b0) bg_vkb2_func_pane_g5

0x1a2f,	// (0x000279b8) bg_vkb2_func_pane_g6

0x1a37,	// (0x000279c0) bg_vkb2_func_pane_g7

0x1a3f,	// (0x000279c8) bg_vkb2_func_pane_g8

0x19ff,	// (0x00027988) bg_vkb2_func_pane_g9

0x0008,

0xfde8,	// (0x00035d71) bg_vkb2_func_pane_g

0x1edb,	// (0x00027e64) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1edb,	// (0x00027e64) bg_vkb2_fuc_pane_cp01

0x2798,	// (0x00028721) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2798,	// (0x00028721) vkb2_top_cell_right_wide_pane_g1

0x1edb,	// (0x00027e64) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1edb,	// (0x00027e64) bg_vkb2_fuc_pane_cp02

0x27f6,	// (0x0002877f) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x27f6,	// (0x0002877f) vkb2_top_cell_right_narrow_pane_g1

0xd98b,	// (0x00033914) aid_touch_area_decrease_ParamLimits

0xd98b,	// (0x00033914) aid_touch_area_decrease

0xd9c1,	// (0x0003394a) aid_touch_area_increase_ParamLimits

0xd9c1,	// (0x0003394a) aid_touch_area_increase

0xd9e9,	// (0x00033972) aid_touch_area_mute_ParamLimits

0xd9e9,	// (0x00033972) aid_touch_area_mute

0xda19,	// (0x000339a2) aid_touch_area_slider_ParamLimits

0xda19,	// (0x000339a2) aid_touch_area_slider

0xda59,	// (0x000339e2) popup_slider_window_g4_ParamLimits

0xda59,	// (0x000339e2) popup_slider_window_g4

0xda81,	// (0x00033a0a) popup_slider_window_g5_ParamLimits

0xda81,	// (0x00033a0a) popup_slider_window_g5

0xdab5,	// (0x00033a3e) popup_slider_window_g6_ParamLimits

0xdab5,	// (0x00033a3e) popup_slider_window_g6

0x6a19,	// (0x0002c9a2) popup_slider_window_t2_ParamLimits

0x6a19,	// (0x0002c9a2) popup_slider_window_t2

0x0001,

0xfce4,	// (0x00035c6d) popup_slider_window_t_ParamLimits

0xfce4,	// (0x00035c6d) popup_slider_window_t

0xdad1,	// (0x00033a5a) slider_pane_ParamLimits

0xdad1,	// (0x00033a5a) slider_pane

0x7752,	// (0x0002d6db) slider_pane_g1_ParamLimits

0x7752,	// (0x0002d6db) slider_pane_g1

0x7766,	// (0x0002d6ef) slider_pane_g2_ParamLimits

0x7766,	// (0x0002d6ef) slider_pane_g2

0x777c,	// (0x0002d705) slider_pane_g3_ParamLimits

0x777c,	// (0x0002d705) slider_pane_g3

0x0003,

0xfdfb,	// (0x00035d84) slider_pane_g_ParamLimits

0xfdfb,	// (0x00035d84) slider_pane_g

0xadee,	// (0x00030d77) popup_tb_float_extension_window_ParamLimits

0xadee,	// (0x00030d77) popup_tb_float_extension_window

0x77a8,	// (0x0002d731) aid_size_cell_tb_float_ext

0xc82f,	// (0x000327b8) bg_popup_sub_window_cp28

0xe527,	// (0x000344b0) grid_tb_float_ext_pane

0xe531,	// (0x000344ba) cell_tb_float_ext_pane_ParamLimits

0xe531,	// (0x000344ba) cell_tb_float_ext_pane

0xe54b,	// (0x000344d4) cell_tb_float_ext_pane_g1

0xe554,	// (0x000344dd) grid_highlight_pane_cp12

0xc136,	// (0x000320bf) cell_last_hwr_side_pane_ParamLimits

0xc136,	// (0x000320bf) cell_last_hwr_side_pane

0x5367,	// (0x0002b2f0) cell_last_hwr_side_pane_g1

0x77ea,	// (0x0002d773) cell_last_hwr_side_pane_g2

0x0001,

0xfe04,	// (0x00035d8d) cell_last_hwr_side_pane_g

0xc539,	// (0x000324c2) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc539,	// (0x000324c2) vkb2_area_bottom_space_btn_pane

0x55d7,	// (0x0002b560) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7294,	// (0x0002d21d) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2938,	// (0x000288c1) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2957,	// (0x000288e0) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2957,	// (0x000288e0) vkb2_area_bottom_space_btn_pane_g1

0x2991,	// (0x0002891a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2991,	// (0x0002891a) vkb2_area_bottom_space_btn_pane_g2

0x29c7,	// (0x00028950) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x29c7,	// (0x00028950) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe09,	// (0x00035d92) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe09,	// (0x00035d92) vkb2_area_bottom_space_btn_pane_g

0x1f90,	// (0x00027f19) cel_fep_hwr_func_pane_ParamLimits

0x1f90,	// (0x00027f19) cel_fep_hwr_func_pane

0xc10b,	// (0x00032094) cell_hwr_side_button_pane_ParamLimits

0xc10b,	// (0x00032094) cell_hwr_side_button_pane

0xdc6a,	// (0x00033bf3) aid_area_touch_clock_ParamLimits

0xc9c9,	// (0x00032952) bg_uniindi_top_pane_ParamLimits

0xdc7c,	// (0x00033c05) uniindi_top_pane_g1_ParamLimits

0xdc92,	// (0x00033c1b) uniindi_top_pane_g2_ParamLimits

0xdc9e,	// (0x00033c27) uniindi_top_pane_g3_ParamLimits

0x6cb6,	// (0x0002cc3f) uniindi_top_pane_g4_ParamLimits

0xfd1c,	// (0x00035ca5) uniindi_top_pane_g_ParamLimits

0xdcaf,	// (0x00033c38) uniindi_top_pane_t1_ParamLimits

0xc9c9,	// (0x00032952) bg_vkb2_func_pane_cp01_ParamLimits

0xc9c9,	// (0x00032952) bg_vkb2_func_pane_cp01

0x77f3,	// (0x0002d77c) cel_fep_hwr_func_pane_g1_ParamLimits

0x77f3,	// (0x0002d77c) cel_fep_hwr_func_pane_g1

0xc9c9,	// (0x00032952) bg_vkb2_func_pane_cp02_ParamLimits

0xc9c9,	// (0x00032952) bg_vkb2_func_pane_cp02

0x77f3,	// (0x0002d77c) cell_hwr_side_button_pane_g1_ParamLimits

0x77f3,	// (0x0002d77c) cell_hwr_side_button_pane_g1

0x1853,	// (0x000277dc) status_pane_g4_ParamLimits

0x1853,	// (0x000277dc) status_pane_g4

0x186d,	// (0x000277f6) status_pane_t1

0x509c,	// (0x0002b025) form2_midp_gauge_slider_cont_pane

0x50a4,	// (0x0002b02d) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc00f,	// (0x00031f98) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc021,	// (0x00031faa) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaef,	// (0x00035a78) form2_midp_gauge_slider_pane_t_ParamLimits

0x50da,	// (0x0002b063) form2_midp_slider_pane_ParamLimits

0x232d,	// (0x000282b6) aid_size_cell_func_vkb2_ParamLimits

0x232d,	// (0x000282b6) aid_size_cell_func_vkb2

0x7794,	// (0x0002d71d) slider_pane_g4_ParamLimits

0x7794,	// (0x0002d71d) slider_pane_g4

0xc59a,	// (0x00032523) form2_midp_gauge_slider_pane_t2_cp01

0xc5a8,	// (0x00032531) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc5a8,	// (0x00032531) form2_midp_gauge_slider_pane_t3_cp01

0x2a3c,	// (0x000289c5) form2_midp_slider_pane_cp01

0xc82f,	// (0x000327b8) navi_smil_pane

0x782c,	// (0x0002d7b5) navi_smil_pane_g1

0x7834,	// (0x0002d7bd) navi_smil_pane_t1

0x7801,	// (0x0002d78a) form2_midp_slider_pane_g1

0x780a,	// (0x0002d793) form2_midp_slider_pane_g2

0x7812,	// (0x0002d79b) form2_midp_slider_pane_g3

0x7801,	// (0x0002d78a) form2_midp_slider_pane_g4

0xe55d,	// (0x000344e6) form2_midp_slider_pane_g5

0x0004,

0xfe12,	// (0x00035d9b) form2_midp_slider_pane_g

0x2a01,	// (0x0002898a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2a01,	// (0x0002898a) vkb2_area_bottom_space_btn_pane_g4

0xb026,	// (0x00030faf) lc0_navi_pane_ParamLimits

0xb026,	// (0x00030faf) lc0_navi_pane

0xb090,	// (0x00031019) lc0_stat_indi_pane_ParamLimits

0xb090,	// (0x00031019) lc0_stat_indi_pane

0xb0a5,	// (0x0003102e) ls0_title_pane_ParamLimits

0xb0a5,	// (0x0003102e) ls0_title_pane

0xcc51,	// (0x00032bda) bg_popup_sub_pane_cp14_ParamLimits

0xdc51,	// (0x00033bda) list_uniindi_pane_ParamLimits

0xdc5d,	// (0x00033be6) uniindi_top_pane_ParamLimits

0x6cff,	// (0x0002cc88) list_single_uniindi_pane_g1_ParamLimits

0x6d12,	// (0x0002cc9b) list_single_uniindi_pane_t1_ParamLimits

0xc5c5,	// (0x0003254e) lc0_stat_clock_pane_ParamLimits

0xc5c5,	// (0x0003254e) lc0_stat_clock_pane

0xe568,	// (0x000344f1) lc0_stat_indi_pane_g1_ParamLimits

0xe568,	// (0x000344f1) lc0_stat_indi_pane_g1

0xe575,	// (0x000344fe) lc0_stat_indi_pane_g2_ParamLimits

0xe575,	// (0x000344fe) lc0_stat_indi_pane_g2

0x0001,

0xfe1d,	// (0x00035da6) lc0_stat_indi_pane_g_ParamLimits

0xfe1d,	// (0x00035da6) lc0_stat_indi_pane_g

0xc5d5,	// (0x0003255e) lc0_uni_indicator_pane_ParamLimits

0xc5d5,	// (0x0003255e) lc0_uni_indicator_pane

0xe582,	// (0x0003450b) ls0_title_pane_g1_ParamLimits

0xe582,	// (0x0003450b) ls0_title_pane_g1

0xe596,	// (0x0003451f) ls0_title_pane_t1_ParamLimits

0xe596,	// (0x0003451f) ls0_title_pane_t1

0xc5e5,	// (0x0003256e) lc0_uni_indicator_pane_g1_ParamLimits

0xc5e5,	// (0x0003256e) lc0_uni_indicator_pane_g1

0x78a6,	// (0x0002d82f) lc0_stat_clock_pane_t1

0xc82f,	// (0x000327b8) main_ai5_pane

0x78b4,	// (0x0002d83d) ai5_sk_pane_ParamLimits

0x78b4,	// (0x0002d83d) ai5_sk_pane

0xe5c4,	// (0x0003454d) cell_ai5_widget_pane_ParamLimits

0xe5c4,	// (0x0003454d) cell_ai5_widget_pane

0xe62e,	// (0x000345b7) aid_size_cell_widget_grid

0x798b,	// (0x0002d914) bg_ai5_widget_pane_ParamLimits

0x798b,	// (0x0002d914) bg_ai5_widget_pane

0xe662,	// (0x000345eb) cell_ai5_widget_pane_g2

0x7a0f,	// (0x0002d998) cell_ai5_widget_pane_g3

0x7a26,	// (0x0002d9af) cell_ai5_widget_pane_g4

0x7a32,	// (0x0002d9bb) cell_ai5_widget_pane_g5

0xe672,	// (0x000345fb) cell_ai5_widget_pane_g6

0xe67e,	// (0x00034607) cell_ai5_widget_pane_g7

0x7a92,	// (0x0002da1b) cell_ai5_widget_pane_t1_ParamLimits

0x7a92,	// (0x0002da1b) cell_ai5_widget_pane_t1

0x7aaf,	// (0x0002da38) cell_ai5_widget_pane_t2_ParamLimits

0x7aaf,	// (0x0002da38) cell_ai5_widget_pane_t2

0x7ac7,	// (0x0002da50) cell_ai5_widget_pane_t3_ParamLimits

0x7ac7,	// (0x0002da50) cell_ai5_widget_pane_t3

0xe68a,	// (0x00034613) cell_ai5_widget_pane_t4_ParamLimits

0xe68a,	// (0x00034613) cell_ai5_widget_pane_t4

0xe6a7,	// (0x00034630) cell_ai5_widget_pane_t5_ParamLimits

0xe6a7,	// (0x00034630) cell_ai5_widget_pane_t5

0x7b1b,	// (0x0002daa4) cell_ai5_widget_pane_t6_ParamLimits

0x7b1b,	// (0x0002daa4) cell_ai5_widget_pane_t6

0x7b2d,	// (0x0002dab6) cell_ai5_widget_pane_t7_ParamLimits

0x7b2d,	// (0x0002dab6) cell_ai5_widget_pane_t7

0x7b46,	// (0x0002dacf) cell_ai5_widget_pane_t8_ParamLimits

0x7b46,	// (0x0002dacf) cell_ai5_widget_pane_t8

0x0009,

0xfe37,	// (0x00035dc0) cell_ai5_widget_pane_t_ParamLimits

0xfe37,	// (0x00035dc0) cell_ai5_widget_pane_t

0xe6c6,	// (0x0003464f) grid_ai5_widget_pane

0xcc51,	// (0x00032bda) highlight_cell_ai5_widget_pane_ParamLimits

0xcc51,	// (0x00032bda) highlight_cell_ai5_widget_pane

0xe6de,	// (0x00034667) ai5_sk_left_pane

0xe6e8,	// (0x00034671) ai5_sk_middle_pane

0xe6f2,	// (0x0003467b) ai5_sk_right_pane

0x7bc6,	// (0x0002db4f) bg_ai5_widget_pane_g1_ParamLimits

0x7bc6,	// (0x0002db4f) bg_ai5_widget_pane_g1

0x7bd2,	// (0x0002db5b) bg_ai5_widget_pane_g2_ParamLimits

0x7bd2,	// (0x0002db5b) bg_ai5_widget_pane_g2

0x7bde,	// (0x0002db67) bg_ai5_widget_pane_g3_ParamLimits

0x7bde,	// (0x0002db67) bg_ai5_widget_pane_g3

0x7bea,	// (0x0002db73) bg_ai5_widget_pane_g4_ParamLimits

0x7bea,	// (0x0002db73) bg_ai5_widget_pane_g4

0x7bf6,	// (0x0002db7f) bg_ai5_widget_pane_g5_ParamLimits

0x7bf6,	// (0x0002db7f) bg_ai5_widget_pane_g5

0x7c02,	// (0x0002db8b) bg_ai5_widget_pane_g6_ParamLimits

0x7c02,	// (0x0002db8b) bg_ai5_widget_pane_g6

0x7c0e,	// (0x0002db97) bg_ai5_widget_pane_g7_ParamLimits

0x7c0e,	// (0x0002db97) bg_ai5_widget_pane_g7

0x7c1a,	// (0x0002dba3) bg_ai5_widget_pane_g8_ParamLimits

0x7c1a,	// (0x0002dba3) bg_ai5_widget_pane_g8

0x7c26,	// (0x0002dbaf) bg_ai5_widget_pane_g9_ParamLimits

0x7c26,	// (0x0002dbaf) bg_ai5_widget_pane_g9

0x0008,

0xfe4c,	// (0x00035dd5) bg_ai5_widget_pane_g_ParamLimits

0xfe4c,	// (0x00035dd5) bg_ai5_widget_pane_g

0xe722,	// (0x000346ab) cell_shortcut_ai5_widget_pane_ParamLimits

0xe722,	// (0x000346ab) cell_shortcut_ai5_widget_pane

0x09d8,	// (0x00026961) bg_cell_shortcut_ai5_widget_pane

0x7c69,	// (0x0002dbf2) cell_grid_ai5_widget_pane_g1

0x09d8,	// (0x00026961) highlight_cell_shortcut_ai5_widget_pane

0x1a0f,	// (0x00027998) ai5_sk_left_pane_g1

0x7c72,	// (0x0002dbfb) ai5_sk_left_pane_g2

0x7c7a,	// (0x0002dc03) ai5_sk_left_pane_g3

0x7c82,	// (0x0002dc0b) ai5_sk_left_pane_g4

0x0003,

0xfe5f,	// (0x00035de8) ai5_sk_left_pane_g

0x7c8a,	// (0x0002dc13) ai5_sk_left_pane_t1

0x1a07,	// (0x00027990) ai5_sk_right_pane_g1

0x7c98,	// (0x0002dc21) ai5_sk_right_pane_g2

0x7ca0,	// (0x0002dc29) ai5_sk_right_pane_g3

0x7ca8,	// (0x0002dc31) ai5_sk_right_pane_g4

0x0003,

0xfe68,	// (0x00035df1) ai5_sk_right_pane_g

0x7cb0,	// (0x0002dc39) ai5_sk_right_pane_t1

0x1a07,	// (0x00027990) ai5_sk_middle_pane_g1

0x1a0f,	// (0x00027998) ai5_sk_middle_pane_g2

0x1a27,	// (0x000279b0) ai5_sk_middle_pane_g3

0x7ca0,	// (0x0002dc29) ai5_sk_middle_pane_g4

0x7c7a,	// (0x0002dc03) ai5_sk_middle_pane_g5

0x7cbe,	// (0x0002dc47) ai5_sk_middle_pane_g6

0xe733,	// (0x000346bc) ai5_sk_middle_pane_g7

0x0006,

0xfe71,	// (0x00035dfa) ai5_sk_middle_pane_g

0xaf12,	// (0x00030e9b) aid_touch_area_size_lc0_ParamLimits

0xaf12,	// (0x00030e9b) aid_touch_area_size_lc0

0x211b,	// (0x000280a4) cell_hwr_candidate_pane_t1_ParamLimits

0x1524,	// (0x000274ad) aid_touch_navi_pane

0xb19e,	// (0x00031127) status_dt_navi_pane_ParamLimits

0xb19e,	// (0x00031127) status_dt_navi_pane

0xb1b6,	// (0x0003113f) status_dt_sta_pane_ParamLimits

0xb1b6,	// (0x0003113f) status_dt_sta_pane

0xe73b,	// (0x000346c4) dt_sta_controll_pane

0xe748,	// (0x000346d1) dt_sta_indi_pane

0xe755,	// (0x000346de) dt_sta_title_pane

0xc9c9,	// (0x00032952) bg_dt_sta_indi_pane_ParamLimits

0xc9c9,	// (0x00032952) bg_dt_sta_indi_pane

0xe767,	// (0x000346f0) dt_sta_battery_pane

0xe76f,	// (0x000346f8) dt_sta_indi_pane_g1

0x7d10,	// (0x0002dc99) dt_sta_indi_pane_g2

0x7d19,	// (0x0002dca2) dt_sta_indi_pane_g3

0x0002,

0xfe80,	// (0x00035e09) dt_sta_indi_pane_g

0x7d22,	// (0x0002dcab) dt_sta_signal_pane

0xcc51,	// (0x00032bda) bg_dt_sta_title_pane_ParamLimits

0xcc51,	// (0x00032bda) bg_dt_sta_title_pane

0x3ba8,	// (0x00029b31) dt_sta_title_pane_g1

0xe778,	// (0x00034701) dt_sta_title_pane_t1_ParamLimits

0xe778,	// (0x00034701) dt_sta_title_pane_t1

0xc82f,	// (0x000327b8) bg_dt_sta_control_pane

0xe78d,	// (0x00034716) dt_sta_controll_pane_g1

0xe796,	// (0x0003471f) bg_dt_sta_title_pane_g1

0xe79f,	// (0x00034728) bg_dt_sta_title_pane_g2

0xe7a8,	// (0x00034731) bg_dt_sta_title_pane_g3

0x0002,

0xfe87,	// (0x00035e10) bg_dt_sta_title_pane_g

0x5367,	// (0x0002b2f0) bg_dt_sta_indi_pane_g1

0x7d64,	// (0x0002dced) dt_sta_signal_pane_g1

0x7d6c,	// (0x0002dcf5) dt_sta_signal_pane_g2

0x0001,

0xfe8e,	// (0x00035e17) dt_sta_signal_pane_g

0x7d74,	// (0x0002dcfd) dt_sta_battery_pane_g1

0x7d7d,	// (0x0002dd06) dt_sta_battery_pane_t1

0x5367,	// (0x0002b2f0) bg_dt_sta_control_pane_g1

0xd10a,	// (0x00033093) fep_china_uni_eep_pane

0xd112,	// (0x0003309b) fep_china_uni_entry_pane_ParamLimits

0xd122,	// (0x000330ab) popup_fep_china_uni_window_g1_ParamLimits

0xd132,	// (0x000330bb) popup_fep_china_uni_window_g2_ParamLimits

0xd132,	// (0x000330bb) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x000356a1) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x000356a1) popup_fep_china_uni_window_g

0x7d8c,	// (0x0002dd15) fep_china_uni_eep_pane_g1

0x7d94,	// (0x0002dd1d) fep_china_uni_eep_pane_t1

0x7823,	// (0x0002d7ac) aid_touch_area_size_smil_player

0x167a,	// (0x00027603) lc0_clock_pane

0x1861,	// (0x000277ea) status_pane_g5_ParamLimits

0x1861,	// (0x000277ea) status_pane_g5

0xa924,	// (0x000308ad) popup_keymap_window

0x181f,	// (0x000277a8) status_icon_pane

0x7a0f,	// (0x0002d998) cell_ai5_widget_pane_g3_ParamLimits

0x7a26,	// (0x0002d9af) cell_ai5_widget_pane_g4_ParamLimits

0x7a32,	// (0x0002d9bb) cell_ai5_widget_pane_g5_ParamLimits

0x7a56,	// (0x0002d9df) cell_ai5_widget_pane_g8_ParamLimits

0x7a56,	// (0x0002d9df) cell_ai5_widget_pane_g8

0x7a6a,	// (0x0002d9f3) cell_ai5_widget_pane_g9_ParamLimits

0x7a6a,	// (0x0002d9f3) cell_ai5_widget_pane_g9

0x7a7e,	// (0x0002da07) cell_ai5_widget_pane_g10_ParamLimits

0x7a7e,	// (0x0002da07) cell_ai5_widget_pane_g10

0x7da3,	// (0x0002dd2c) status_icon_pane_g1

0xc82f,	// (0x000327b8) bg_popup_sub_pane_cp13

0x7dab,	// (0x0002dd34) popup_keymap_window_t1

0xa5fa,	// (0x00030583) control_pane_g6_ParamLimits

0xa5fa,	// (0x00030583) control_pane_g6

0xa607,	// (0x00030590) control_pane_g7_ParamLimits

0xa607,	// (0x00030590) control_pane_g7

0xa614,	// (0x0003059d) control_pane_g8_ParamLimits

0xa614,	// (0x0003059d) control_pane_g8

0xe73b,	// (0x000346c4) dt_sta_controll_pane_ParamLimits

0xe748,	// (0x000346d1) dt_sta_indi_pane_ParamLimits

0xe755,	// (0x000346de) dt_sta_title_pane_ParamLimits

0xcb9c,	// (0x00032b25) aid_size_touch_scroll_bar_cale

0x9898,	// (0x0002f821) popup_discreet_window_ParamLimits

0x9898,	// (0x0002f821) popup_discreet_window

0x98ea,	// (0x0002f873) popup_sk_window

0x33ec,	// (0x00029375) bg_popup_sub_pane_cp28_ParamLimits

0x33ec,	// (0x00029375) bg_popup_sub_pane_cp28

0x7db9,	// (0x0002dd42) popup_discreet_window_g1_ParamLimits

0x7db9,	// (0x0002dd42) popup_discreet_window_g1

0xe7b1,	// (0x0003473a) popup_discreet_window_t1_ParamLimits

0xe7b1,	// (0x0003473a) popup_discreet_window_t1

0x7df7,	// (0x0002dd80) popup_discreet_window_t2_ParamLimits

0x7df7,	// (0x0002dd80) popup_discreet_window_t2

0x0002,

0xfe93,	// (0x00035e1c) popup_discreet_window_t_ParamLimits

0xfe93,	// (0x00035e1c) popup_discreet_window_t

0x2a73,	// (0x000289fc) popup_sk_window_g1

0x2a7d,	// (0x00028a06) popup_sk_window_g2

0x0001,

0xfe9a,	// (0x00035e23) popup_sk_window_g

0xc610,	// (0x00032599) popup_sk_window_t1

0xc61e,	// (0x000325a7) popup_sk_window_t1_copy1

0xe662,	// (0x000345eb) cell_ai5_widget_pane_g2_ParamLimits

0x7b58,	// (0x0002dae1) cell_ai5_widget_pane_t9_ParamLimits

0x7b58,	// (0x0002dae1) cell_ai5_widget_pane_t9

0xc82f,	// (0x000327b8) main_fep_fshwr2_pane

0xc62c,	// (0x000325b5) aid_fshwr2_btn_pane

0xc63e,	// (0x000325c7) aid_fshwr2_syb_pane

0xc650,	// (0x000325d9) aid_fshwr2_txt_pane

0xc65f,	// (0x000325e8) fshwr2_func_candi_pane

0xc67e,	// (0x00032607) fshwr2_hwr_syb_pane

0xc699,	// (0x00032622) fshwr2_icf_pane

0xc82f,	// (0x000327b8) fshwr2_icf_bg_pane

0x2b15,	// (0x00028a9e) fshwr2_icf_pane_t1_ParamLimits

0x2b15,	// (0x00028a9e) fshwr2_icf_pane_t1

0xd087,	// (0x00033010) fshwr2_func_candi_pane_g1

0xe7cf,	// (0x00034758) fshwr2_func_candi_row_pane_ParamLimits

0xe7cf,	// (0x00034758) fshwr2_func_candi_row_pane

0xc6c5,	// (0x0003264e) cell_fshwr2_syb_pane_ParamLimits

0xc6c5,	// (0x0003264e) cell_fshwr2_syb_pane

0x55d7,	// (0x0002b560) fshwr2_hwr_syb_pane_g1_ParamLimits

0x55d7,	// (0x0002b560) fshwr2_hwr_syb_pane_g1

0xc82f,	// (0x000327b8) bg_popup_call_pane_cp01

0xc6db,	// (0x00032664) fshwr2_func_candi_cell_pane_ParamLimits

0xc6db,	// (0x00032664) fshwr2_func_candi_cell_pane

0xe7f2,	// (0x0003477b) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe7f2,	// (0x0003477b) fshwr2_func_candi_cell_bg_pane

0xc726,	// (0x000326af) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc726,	// (0x000326af) fshwr2_func_candi_cell_pane_g1

0xc75d,	// (0x000326e6) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc75d,	// (0x000326e6) fshwr2_func_candi_cell_pane_t1

0xc82f,	// (0x000327b8) bg_button_pane_cp08

0x7e59,	// (0x0002dde2) cell_fshwr2_syb_bg_pane

0xc778,	// (0x00032701) cell_fshwr2_syb_bg_pane_g1

0xc780,	// (0x00032709) cell_fshwr2_syb_bg_pane_t1

0xcc51,	// (0x00032bda) main_tmo_pane

0xb936,	// (0x000318bf) uni_indicator_pane_g1_ParamLimits

0xb94c,	// (0x000318d5) uni_indicator_pane_g2_ParamLimits

0xb962,	// (0x000318eb) uni_indicator_pane_g3_ParamLimits

0x3f22,	// (0x00029eab) uni_indicator_pane_g4_ParamLimits

0x3f22,	// (0x00029eab) uni_indicator_pane_g4

0x3f36,	// (0x00029ebf) uni_indicator_pane_g5_ParamLimits

0x3f36,	// (0x00029ebf) uni_indicator_pane_g5

0x3f36,	// (0x00029ebf) uni_indicator_pane_g6_ParamLimits

0x3f36,	// (0x00029ebf) uni_indicator_pane_g6

0xf917,	// (0x000358a0) uni_indicator_pane_g_ParamLimits

0xd96d,	// (0x000338f6) popup_tmo_note_window_ParamLimits

0xd96d,	// (0x000338f6) popup_tmo_note_window

0xcc51,	// (0x00032bda) fshwr2_bg_pane

0xc74e,	// (0x000326d7) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc74e,	// (0x000326d7) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9f,	// (0x00035e28) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9f,	// (0x00035e28) fshwr2_func_candi_cell_pane_g

0x5367,	// (0x0002b2f0) bg_popup_window_pane_cp01

0x2bde,	// (0x00028b67) bg_popup_window_pane_g1_cp01

0x7e61,	// (0x0002ddea) bg_popup_window_pane_cp22_ParamLimits

0x7e61,	// (0x0002ddea) bg_popup_window_pane_cp22

0xe7fe,	// (0x00034787) listscroll_tmo_link_pane_ParamLimits

0xe7fe,	// (0x00034787) listscroll_tmo_link_pane

0x7eaf,	// (0x0002de38) popup_tmo_note_window_g1_ParamLimits

0x7eaf,	// (0x0002de38) popup_tmo_note_window_g1

0xe83e,	// (0x000347c7) tmo_note_info_pane_ParamLimits

0xe83e,	// (0x000347c7) tmo_note_info_pane

0xe858,	// (0x000347e1) list_tmo_note_info_pane_g1_ParamLimits

0xe858,	// (0x000347e1) list_tmo_note_info_pane_g1

0x7eed,	// (0x0002de76) list_tmo_note_info_pane_g2_ParamLimits

0x7eed,	// (0x0002de76) list_tmo_note_info_pane_g2

0x0001,

0xfea4,	// (0x00035e2d) list_tmo_note_info_pane_g_ParamLimits

0xfea4,	// (0x00035e2d) list_tmo_note_info_pane_g

0x7f09,	// (0x0002de92) list_tmo_note_info_text_pane_ParamLimits

0x7f09,	// (0x0002de92) list_tmo_note_info_text_pane

0x7f8a,	// (0x0002df13) list_tmo_link_pane

0x7f97,	// (0x0002df20) scroll_pane_cp20

0x7fa4,	// (0x0002df2d) list_single_tmo_link_pane_ParamLimits

0x7fa4,	// (0x0002df2d) list_single_tmo_link_pane

0x7fb4,	// (0x0002df3d) list_single_tmo_link_pane_t1

0x7fc2,	// (0x0002df4b) list_tmo_note_info_text_pane_t1_ParamLimits

0x7fc2,	// (0x0002df4b) list_tmo_note_info_text_pane_t1

0x9fe6,	// (0x0002ff6f) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9fe6,	// (0x0002ff6f) aid_size_touch_scroll_bar_cp01

0x93fb,	// (0x0002f384) aid_size_touch_slider_marker

0x98da,	// (0x0002f863) popup_settings_window_ParamLimits

0x98da,	// (0x0002f863) popup_settings_window

0xeca7,	// (0x00034c30) popup_candi_list_indi_window

0x1524,	// (0x000274ad) aid_touch_navi_pane_ParamLimits

0x2286,	// (0x0002820f) rs_clock_indi_pane

0x228f,	// (0x00028218) sctrl_sk_bottom_pane_ParamLimits

0x22a0,	// (0x00028229) sctrl_sk_top_pane_ParamLimits

0xc276,	// (0x000321ff) popup_fep_tooltip_window

0xe62e,	// (0x000345b7) aid_size_cell_widget_grid_ParamLimits

0xe64d,	// (0x000345d6) cell_ai5_widget_pane_g1_ParamLimits

0xe64d,	// (0x000345d6) cell_ai5_widget_pane_g1

0xe672,	// (0x000345fb) cell_ai5_widget_pane_g6_ParamLimits

0xe67e,	// (0x00034607) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe22,	// (0x00035dab) cell_ai5_widget_pane_g_ParamLimits

0xfe22,	// (0x00035dab) cell_ai5_widget_pane_g

0x7b7c,	// (0x0002db05) cell_ai5_widget_pane_t10_ParamLimits

0x7b7c,	// (0x0002db05) cell_ai5_widget_pane_t10

0xe6c6,	// (0x0003464f) grid_ai5_widget_pane_ParamLimits

0xe6fc,	// (0x00034685) cell_contacts_ai5_widget_pane_ParamLimits

0xe6fc,	// (0x00034685) cell_contacts_ai5_widget_pane

0x7e0c,	// (0x0002dd95) popup_discreet_window_t3_ParamLimits

0x7e0c,	// (0x0002dd95) popup_discreet_window_t3

0xc6b1,	// (0x0003263a) popup_fshwr2_char_preview_window_ParamLimits

0xc6b1,	// (0x0003263a) popup_fshwr2_char_preview_window

0xe86f,	// (0x000347f8) tmo_note_info_pane_t1

0xe884,	// (0x0003480d) tmo_note_info_pane_t2

0xe89b,	// (0x00034824) tmo_note_info_pane_t3

0x7f66,	// (0x0002deef) tmo_note_info_pane_t4

0x7f78,	// (0x0002df01) tmo_note_info_pane_t5

0x0004,

0xfea9,	// (0x00035e32) tmo_note_info_pane_t

0x7f8a,	// (0x0002df13) list_tmo_link_pane_ParamLimits

0x7f97,	// (0x0002df20) scroll_pane_cp20_ParamLimits

0xc82f,	// (0x000327b8) bg_popup_fep_char_preview_window_cp01

0x7fdb,	// (0x0002df64) popup_fshwr2_char_preview_window_t1

0x7fe9,	// (0x0002df72) popup_candi_list_indi_window_g1

0x7ff2,	// (0x0002df7b) bg_cell_contacts_ai5_widget_pane

0x7ffe,	// (0x0002df87) cell_contacts_ai5_widget_pane_g1

0x5a5a,	// (0x0002b9e3) cell_contacts_ai5_widget_pane_g2

0x8013,	// (0x0002df9c) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb4,	// (0x00035e3d) cell_contacts_ai5_widget_pane_g

0x801f,	// (0x0002dfa8) cell_contacts_ai5_widget_pane_t1

0xcc51,	// (0x00032bda) highlight_cell_shortcut_ai5_widget_pane_cp01

0x8096,	// (0x0002e01f) settings_container_pane

0x09d8,	// (0x00026961) listscroll_set_pane_copy1

0x4a53,	// (0x0002a9dc) scroll_pane_cp121_copy1

0x80a2,	// (0x0002e02b) set_content_pane_copy1

0xe915,	// (0x0003489e) aid_height_set_list_copy1_ParamLimits

0xe915,	// (0x0003489e) aid_height_set_list_copy1

0x412e,	// (0x0002a0b7) aid_size_parent_copy1_ParamLimits

0x412e,	// (0x0002a0b7) aid_size_parent_copy1

0xe921,	// (0x000348aa) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe921,	// (0x000348aa) button_value_adjust_pane_cp6_copy1

0x0f27,	// (0x00026eb0) list_highlight_pane_cp2_copy1_ParamLimits

0x0f27,	// (0x00026eb0) list_highlight_pane_cp2_copy1

0xe935,	// (0x000348be) list_set_pane_copy1_ParamLimits

0xe935,	// (0x000348be) list_set_pane_copy1

0xe8b0,	// (0x00034839) main_pane_set_t1_copy1_ParamLimits

0xe8b0,	// (0x00034839) main_pane_set_t1_copy1

0xe8ea,	// (0x00034873) main_pane_set_t2_copy1_ParamLimits

0xe8ea,	// (0x00034873) main_pane_set_t2_copy1

0xe9e2,	// (0x0003496b) main_pane_set_t3_copy1

0xe9f0,	// (0x00034979) main_pane_set_t4_copy1

0xe909,	// (0x00034892) set_content_pane_g1_copy1_ParamLimits

0xe909,	// (0x00034892) set_content_pane_g1_copy1

0xe9fe,	// (0x00034987) setting_code_pane_copy1

0x819b,	// (0x0002e124) setting_slider_graphic_pane_copy1

0x819b,	// (0x0002e124) setting_slider_pane_copy1

0x819b,	// (0x0002e124) setting_text_pane_copy1

0x819b,	// (0x0002e124) setting_volume_pane_copy1

0xe9fe,	// (0x00034987) settings_code_pane_cp2_copy1

0xea06,	// (0x0003498f) settings_code_pane_cp_copy1_ParamLimits

0xea06,	// (0x0003498f) settings_code_pane_cp_copy1

0xc78f,	// (0x00032718) volume_set_pane_copy1

0xea1a,	// (0x000349a3) volume_set_pane_g10_copy1

0xea22,	// (0x000349ab) volume_set_pane_g1_copy1

0xea2a,	// (0x000349b3) volume_set_pane_g2_copy1

0xea32,	// (0x000349bb) volume_set_pane_g3_copy1

0xea3a,	// (0x000349c3) volume_set_pane_g4_copy1

0xea42,	// (0x000349cb) volume_set_pane_g5_copy1

0xea4a,	// (0x000349d3) volume_set_pane_g6_copy1

0xea52,	// (0x000349db) volume_set_pane_g7_copy1

0xea5a,	// (0x000349e3) volume_set_pane_g8_copy1

0xea62,	// (0x000349eb) volume_set_pane_g9_copy1

0xc89f,	// (0x00032828) bg_set_opt_pane_cp_copy1_ParamLimits

0xc89f,	// (0x00032828) bg_set_opt_pane_cp_copy1

0xc797,	// (0x00032720) setting_slider_pane_t1_copy1_ParamLimits

0xc797,	// (0x00032720) setting_slider_pane_t1_copy1

0xc7b5,	// (0x0003273e) setting_slider_pane_t2_copy1_ParamLimits

0xc7b5,	// (0x0003273e) setting_slider_pane_t2_copy1

0xc7cf,	// (0x00032758) setting_slider_pane_t3_copy1_ParamLimits

0xc7cf,	// (0x00032758) setting_slider_pane_t3_copy1

0xc7e7,	// (0x00032770) slider_set_pane_copy1_ParamLimits

0xc7e7,	// (0x00032770) slider_set_pane_copy1

0xccac,	// (0x00032c35) set_opt_bg_pane_g1_copy2

0xccb4,	// (0x00032c3d) set_opt_bg_pane_g2_copy2

0x8207,	// (0x0002e190) set_opt_bg_pane_g3_copy2

0xccc4,	// (0x00032c4d) set_opt_bg_pane_g4_copy2

0xcccc,	// (0x00032c55) set_opt_bg_pane_g5_copy2

0xccd4,	// (0x00032c5d) set_opt_bg_pane_g6_copy2

0xea6a,	// (0x000349f3) set_opt_bg_pane_g7_copy2

0x8219,	// (0x0002e1a2) set_opt_bg_pane_g8_copy2

0x8223,	// (0x0002e1ac) set_opt_bg_pane_g9_copy2

0xc7fd,	// (0x00032786) aid_size_touch_slider_mark_copy1_ParamLimits

0xc7fd,	// (0x00032786) aid_size_touch_slider_mark_copy1

0xea72,	// (0x000349fb) slider_set_pane_g1_copy1

0x2c69,	// (0x00028bf2) slider_set_pane_g2_copy1

0xba83,	// (0x00031a0c) slider_set_pane_g3_copy1_ParamLimits

0xba83,	// (0x00031a0c) slider_set_pane_g3_copy1

0xba97,	// (0x00031a20) slider_set_pane_g4_copy1_ParamLimits

0xba97,	// (0x00031a20) slider_set_pane_g4_copy1

0xbaaf,	// (0x00031a38) slider_set_pane_g5_copy1_ParamLimits

0xbaaf,	// (0x00031a38) slider_set_pane_g5_copy1

0xba83,	// (0x00031a0c) slider_set_pane_g6_copy1_ParamLimits

0xba83,	// (0x00031a0c) slider_set_pane_g6_copy1

0xc811,	// (0x0003279a) slider_set_pane_g7_copy1_ParamLimits

0xc811,	// (0x0003279a) slider_set_pane_g7_copy1

0xc843,	// (0x000327cc) bg_set_opt_pane_cp2_copy1

0xea7b,	// (0x00034a04) setting_slider_graphic_pane_g1_copy1

0xea84,	// (0x00034a0d) setting_slider_graphic_pane_t1_copy1

0xea94,	// (0x00034a1d) setting_slider_graphic_pane_t2_copy1

0xeaa4,	// (0x00034a2d) slider_set_pane_cp_copy1

0x826f,	// (0x0002e1f8) input_focus_pane_cp1_copy1

0x8278,	// (0x0002e201) list_set_text_pane_copy1

0x8280,	// (0x0002e209) setting_text_pane_g1_copy1

0xf3a3,	// (0x0003532c) set_text_pane_t1_copy1

0x826f,	// (0x0002e1f8) input_focus_pane_cp2_copy1

0x8280,	// (0x0002e209) setting_code_pane_g1_copy1

0x8289,	// (0x0002e212) setting_code_pane_t1_copy1

0x488b,	// (0x0002a814) list_set_graphic_pane_copy1

0xc843,	// (0x000327cc) bg_set_opt_pane_cp4_copy1

0x06e3,	// (0x0002666c) list_set_graphic_pane_g1_copy1_ParamLimits

0x06e3,	// (0x0002666c) list_set_graphic_pane_g1_copy1

0x8297,	// (0x0002e220) list_set_graphic_pane_g2_copy1

0x06fb,	// (0x00026684) list_set_graphic_pane_t1_copy1_ParamLimits

0x06fb,	// (0x00026684) list_set_graphic_pane_t1_copy1

0x5367,	// (0x0002b2f0) rs_clock_indi_pane_g1

0x829f,	// (0x0002e228) rs_clock_indi_pane_t1

0x82ad,	// (0x0002e236) rs_indi_pane

0x82b5,	// (0x0002e23e) rs_indi_pane_g1

0x82be,	// (0x0002e247) rs_indi_pane_g2

0x7fe9,	// (0x0002df72) rs_indi_pane_g3

0x0002,

0xfebb,	// (0x00035e44) rs_indi_pane_g

0x09d8,	// (0x00026961) bg_popup_preview_window_pane_cp03

0x82c7,	// (0x0002e250) popup_fep_tooltip_window_t1

0xd612,	// (0x0003359b) popup_note2_window_g2_ParamLimits

0xd612,	// (0x0003359b) popup_note2_window_g2

0x0001,

0xfc5b,	// (0x00035be4) popup_note2_window_g_ParamLimits

0xfc5b,	// (0x00035be4) popup_note2_window_g

0x64ef,	// (0x0002c478) bg_popup_sub_pane_cp11_ParamLimits

0x64fc,	// (0x0002c485) cell_ai3_links_pane_g1_ParamLimits

0x6513,	// (0x0002c49c) cell_ai3_links_pane_t1

0xf3a3,	// (0x0003532c) set_text_pane_t1_copy1_ParamLimits

0x08e9,	// (0x00026872) cell_graphic_popup_pane_cp2_ParamLimits

0x08e9,	// (0x00026872) cell_graphic_popup_pane_cp2

0xeab4,	// (0x00034a3d) cell_graphic_popup_pane_g1_cp2

0xcb1f,	// (0x00032aa8) cell_graphic_popup_pane_g2_cp2

0x82dd,	// (0x0002e266) cell_graphic_popup_pane_g3_cp2

0xeabc,	// (0x00034a45) cell_graphic_popup_pane_t2_cp2

0xcb30,	// (0x00032ab9) grid_highlight_pane_cp3_cp2

0xcf04,	// (0x00032e8d) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xcc51,	// (0x00032bda) main_tmo_pane_ParamLimits

0xd961,	// (0x000338ea) popup_tmo_big_image_note_window

0x79d9,	// (0x0002d962) cell_ai5_widget_list_pane

0xe644,	// (0x000345cd) cell_ai5_widget_lrg_icon_pane

0xe86f,	// (0x000347f8) tmo_note_info_pane_t1_ParamLimits

0xe884,	// (0x0003480d) tmo_note_info_pane_t2_ParamLimits

0xe89b,	// (0x00034824) tmo_note_info_pane_t3_ParamLimits

0x7f66,	// (0x0002deef) tmo_note_info_pane_t4_ParamLimits

0x7f78,	// (0x0002df01) tmo_note_info_pane_t5_ParamLimits

0xfea9,	// (0x00035e32) tmo_note_info_pane_t_ParamLimits

0x8096,	// (0x0002e01f) settings_container_pane_ParamLimits

0xeaac,	// (0x00034a35) indicator_popup_pane_cp5

0xeaac,	// (0x00034a35) indicator_popup_pane_cp6

0x488b,	// (0x0002a814) list_set_graphic_pane_copy1_ParamLimits

0xc82f,	// (0x000327b8) bg_popup_window_pane_cp23

0x82f3,	// (0x0002e27c) popup_tmo_big_image_note_window_g1

0x82fc,	// (0x0002e285) popup_tmo_big_image_note_window_t1

0x830c,	// (0x0002e295) popup_tmo_big_image_note_window_t2

0x831c,	// (0x0002e2a5) popup_tmo_big_image_note_window_t3

0x0002,

0xfec2,	// (0x00035e4b) popup_tmo_big_image_note_window_t

0x5367,	// (0x0002b2f0) cell_ai5_widget_lrg_icon_pane_g1

0x832c,	// (0x0002e2b5) cell_ai5_widget_lrg_icon_pane_t1

0xeaca,	// (0x00034a53) cell_ai5_widget_list_row_pane_ParamLimits

0xeaca,	// (0x00034a53) cell_ai5_widget_list_row_pane

0x8351,	// (0x0002e2da) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x8351,	// (0x0002e2da) cell_ai5_widget_list_row_pane_g1

0xeae1,	// (0x00034a6a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xeae1,	// (0x00034a6a) cell_ai5_widget_list_row_pane_t1

0x8389,	// (0x0002e312) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x8389,	// (0x0002e312) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec9,	// (0x00035e52) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec9,	// (0x00035e52) cell_ai5_widget_list_row_pane_t

0xc82f,	// (0x000327b8) main_fep_vtchi_ss_pane

0x83cd,	// (0x0002e356) popup_fep_char_pre_window

0x83d5,	// (0x0002e35e) popup_fep_ituss_window

0x83f6,	// (0x0002e37f) popup_fep_vkbss_window

0x8415,	// (0x0002e39e) grid_vkbss_keypad_pane_ParamLimits

0x8415,	// (0x0002e39e) grid_vkbss_keypad_pane

0x8425,	// (0x0002e3ae) ituss_keypad_pane

0x2c93,	// (0x00028c1c) aid_vkbss_key_offset_ParamLimits

0x2c93,	// (0x00028c1c) aid_vkbss_key_offset

0x2c9f,	// (0x00028c28) cell_vkbss_key_pane_ParamLimits

0x2c9f,	// (0x00028c28) cell_vkbss_key_pane

0x183b,	// (0x000277c4) bg_cell_vkbss_key_g1_ParamLimits

0x183b,	// (0x000277c4) bg_cell_vkbss_key_g1

0x8434,	// (0x0002e3bd) cell_vkbss_key_3p_pane_ParamLimits

0x8434,	// (0x0002e3bd) cell_vkbss_key_3p_pane

0x844e,	// (0x0002e3d7) cell_vkbss_key_g1_ParamLimits

0x844e,	// (0x0002e3d7) cell_vkbss_key_g1

0x8468,	// (0x0002e3f1) cell_vkbss_key_t1_ParamLimits

0x8468,	// (0x0002e3f1) cell_vkbss_key_t1

0x2cb5,	// (0x00028c3e) cell_ituss_key_pane_ParamLimits

0x2cb5,	// (0x00028c3e) cell_ituss_key_pane

0x8493,	// (0x0002e41c) bg_cell_ituss_key_g1_ParamLimits

0x8493,	// (0x0002e41c) bg_cell_ituss_key_g1

0x849f,	// (0x0002e428) cell_ituss_key_pane_g1_ParamLimits

0x849f,	// (0x0002e428) cell_ituss_key_pane_g1

0x2cc6,	// (0x00028c4f) cell_ituss_key_pane_g2_ParamLimits

0x2cc6,	// (0x00028c4f) cell_ituss_key_pane_g2

0x0002,

0xfed0,	// (0x00035e59) cell_ituss_key_pane_g_ParamLimits

0xfed0,	// (0x00035e59) cell_ituss_key_pane_g

0x2cf2,	// (0x00028c7b) cell_ituss_key_t1_ParamLimits

0x2cf2,	// (0x00028c7b) cell_ituss_key_t1

0x2d2c,	// (0x00028cb5) cell_ituss_key_t2_ParamLimits

0x2d2c,	// (0x00028cb5) cell_ituss_key_t2

0x2d5d,	// (0x00028ce6) cell_ituss_key_t3_ParamLimits

0x2d5d,	// (0x00028ce6) cell_ituss_key_t3

0x2d2c,	// (0x00028cb5) cell_ituss_key_t4_ParamLimits

0x2d2c,	// (0x00028cb5) cell_ituss_key_t4

0x0004,

0xfed7,	// (0x00035e60) cell_ituss_key_t_ParamLimits

0xfed7,	// (0x00035e60) cell_ituss_key_t

0x84cb,	// (0x0002e454) cell_vkbss_key_3p_pane_g1

0x84d3,	// (0x0002e45c) cell_vkbss_key_3p_pane_g2

0x84db,	// (0x0002e464) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee2,	// (0x00035e6b) cell_vkbss_key_3p_pane_g

0xc82f,	// (0x000327b8) bg_popup_fep_char_preview_window_cp02

0x2da0,	// (0x00028d29) popup_fep_char_pre_window_t1

0xe624,	// (0x000345ad) main_ai5_sk_pane

0x7ff2,	// (0x0002df7b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7ffe,	// (0x0002df87) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x5a5a,	// (0x0002b9e3) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8013,	// (0x0002df9c) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb4,	// (0x00035e3d) cell_contacts_ai5_widget_pane_g_ParamLimits

0x801f,	// (0x0002dfa8) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xcc51,	// (0x00032bda) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xeb12,	// (0x00034a9b) main_ai5_sk_pane_g1

0xb587,	// (0x00031510) popup_query_code_window_g1

0x83eb,	// (0x0002e374) popup_fep_vkb_icf_pane

0x83ff,	// (0x0002e388) popup_fep_vtchi_icf_pane

0x84ec,	// (0x0002e475) bg_icf_pane

0x84f8,	// (0x0002e481) list_vkb_icf_pane

0x8507,	// (0x0002e490) bg_icf_pane_cp01

0x851a,	// (0x0002e4a3) vtchi_icf_list_pane

0x852a,	// (0x0002e4b3) list_vkb_icf_pane_t1_ParamLimits

0x852a,	// (0x0002e4b3) list_vkb_icf_pane_t1

0x8540,	// (0x0002e4c9) vtchi_icf_list_pane_t1_ParamLimits

0x8540,	// (0x0002e4c9) vtchi_icf_list_pane_t1

0x83d5,	// (0x0002e35e) popup_fep_ituss_window_ParamLimits

0x83ff,	// (0x0002e388) popup_fep_vtchi_icf_pane_ParamLimits

0x8425,	// (0x0002e3ae) ituss_keypad_pane_ParamLimits

0x2c87,	// (0x00028c10) ituss_sks_pane

0x84ec,	// (0x0002e475) bg_icf_pane_ParamLimits

0x83b1,	// (0x0002e33a) icf_edit_indi_pane_ParamLimits

0x83b1,	// (0x0002e33a) icf_edit_indi_pane

0x84f8,	// (0x0002e481) list_vkb_icf_pane_ParamLimits

0x8507,	// (0x0002e490) bg_icf_pane_cp01_ParamLimits

0x83c0,	// (0x0002e349) icf_edit_indi_pane_cp01_ParamLimits

0x83c0,	// (0x0002e349) icf_edit_indi_pane_cp01

0x8522,	// (0x0002e4ab) vtchi_query_pane

0x55d7,	// (0x0002b560) icf_edit_indi_pane_g1_ParamLimits

0x55d7,	// (0x0002b560) icf_edit_indi_pane_g1

0x85b2,	// (0x0002e53b) icf_edit_indi_pane_g2_ParamLimits

0x85b2,	// (0x0002e53b) icf_edit_indi_pane_g2

0x0001,

0xfefa,	// (0x00035e83) icf_edit_indi_pane_g_ParamLimits

0xfefa,	// (0x00035e83) icf_edit_indi_pane_g

0x85c1,	// (0x0002e54a) icf_edit_indi_pane_t1

0x855b,	// (0x0002e4e4) bg_input_focus_pane_cp042

0xcb93,	// (0x00032b1c) vtchi_button_pane

0x8564,	// (0x0002e4ed) vtchi_query_pane_t1

0x8572,	// (0x0002e4fb) vtchi_query_pane_t2

0x8580,	// (0x0002e509) vtchi_query_pane_t3

0x0002,

0xfee9,	// (0x00035e72) vtchi_query_pane_t

0xc82f,	// (0x000327b8) bg_button_pane_cp13

0x858e,	// (0x0002e517) vtchi_button_pane_g1

0x2daf,	// (0x00028d38) ituss_sks_pane_g1

0x2dba,	// (0x00028d43) ituss_sks_pane_g2

0x0001,

0xfef0,	// (0x00035e79) ituss_sks_pane_g

0x8596,	// (0x0002e51f) ituss_sks_pane_t1

0x85a4,	// (0x0002e52d) ituss_sks_pane_t2

0x0001,

0xfef5,	// (0x00035e7e) ituss_sks_pane_t

0x4dcd,	// (0x0002ad56) indicator_nsta_pane_cp_g1

0x4dd6,	// (0x0002ad5f) indicator_nsta_pane_cp_g2

0x4dde,	// (0x0002ad67) indicator_nsta_pane_cp_g3

0x4de6,	// (0x0002ad6f) indicator_nsta_pane_cp_g4

0x4dee,	// (0x0002ad77) indicator_nsta_pane_cp_g5

0x4dee,	// (0x0002ad77) indicator_nsta_pane_cp_g6

0x0005,

0xfaa5,	// (0x00035a2e) indicator_nsta_pane_cp_g

0xe3fc,	// (0x00034385) cell_graphic2_pane_t2_ParamLimits

0xe3fc,	// (0x00034385) cell_graphic2_pane_t2

0x0001,

0xfdab,	// (0x00035d34) cell_graphic2_pane_t_ParamLimits

0xfdab,	// (0x00035d34) cell_graphic2_pane_t

0xe436,	// (0x000343bf) cell_graphic2_control_pane_t1

0xa2ac,	// (0x00030235) signal_pane_g3_ParamLimits

0xa2ac,	// (0x00030235) signal_pane_g3

0xa2c0,	// (0x00030249) signal_pane_g4_ParamLimits

0xa2c0,	// (0x00030249) signal_pane_g4

0x839b,	// (0x0002e324) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x839b,	// (0x0002e324) cell_ai5_widget_list_row_pane_t3

0x84b9,	// (0x0002e442) cell_ituss_key_pane_t1_ParamLimits

0x84b9,	// (0x0002e442) cell_ituss_key_pane_t1

0x2e7c,	// (0x00028e05) form_field_data_wide_pane_vc_t2_ParamLimits

0x2e7c,	// (0x00028e05) form_field_data_wide_pane_vc_t2

0x2e90,	// (0x00028e19) form_field_data_wide_pane_vc_t3_ParamLimits

0x2e90,	// (0x00028e19) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ff,	// (0x00035788) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ff,	// (0x00035788) form_field_data_wide_pane_vc_t

0x4a95,	// (0x0002aa1e) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4a95,	// (0x0002aa1e) form_field_slider_wide_pane_vc_t3

0x4b73,	// (0x0002aafc) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4b73,	// (0x0002aafc) form_field_popup_wide_pane_vc_t2

0x4b8a,	// (0x0002ab13) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4b8a,	// (0x0002ab13) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa94,	// (0x00035a1d) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa94,	// (0x00035a1d) form_field_popup_wide_pane_vc_t

0xc62c,	// (0x000325b5) aid_fshwr2_btn_pane_ParamLimits

0xc63e,	// (0x000325c7) aid_fshwr2_syb_pane_ParamLimits

0xc650,	// (0x000325d9) aid_fshwr2_txt_pane_ParamLimits

0xcc51,	// (0x00032bda) fshwr2_bg_pane_ParamLimits

0xc65f,	// (0x000325e8) fshwr2_func_candi_pane_ParamLimits

0xc67e,	// (0x00032607) fshwr2_hwr_syb_pane_ParamLimits

0xc699,	// (0x00032622) fshwr2_icf_pane_ParamLimits

0xf093,	// (0x0003501c) list_double_graphic_pane_vc_g4_ParamLimits

0xf093,	// (0x0003501c) list_double_graphic_pane_vc_g4

0x2ce6,	// (0x00028c6f) cell_ituss_key_pane_g3_ParamLimits

0x2ce6,	// (0x00028c6f) cell_ituss_key_pane_g3

0x2d8e,	// (0x00028d17) cell_ituss_key_t5_ParamLimits

0x2d8e,	// (0x00028d17) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small
