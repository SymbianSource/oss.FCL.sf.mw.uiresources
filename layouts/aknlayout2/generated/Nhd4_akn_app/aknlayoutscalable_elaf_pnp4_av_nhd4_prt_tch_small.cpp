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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0001f003 };

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
0x64c6,	// (0x000254c9) Screen

0x64d2,	// (0x000254d5) application_window_ParamLimits

0x64d2,	// (0x000254d5) application_window

0x15f3,	// (0x000205f6) screen_g1

0x652e,	// (0x00025531) area_bottom_pane_ParamLimits

0x652e,	// (0x00025531) area_bottom_pane

0x65ee,	// (0x000255f1) area_top_pane_ParamLimits

0x65ee,	// (0x000255f1) area_top_pane

0x6682,	// (0x00025685) main_pane_ParamLimits

0x6682,	// (0x00025685) main_pane

0x15fd,	// (0x00020600) misc_graphics

0x847e,	// (0x00027481) battery_pane_ParamLimits

0x847e,	// (0x00027481) battery_pane

0xa4f8,	// (0x000294fb) bg_status_flat_pane_g8

0xa500,	// (0x00029503) bg_status_flat_pane_g9

0x8546,	// (0x00027549) context_pane_ParamLimits

0x8546,	// (0x00027549) context_pane

0x865c,	// (0x0002765f) navi_pane_ParamLimits

0x865c,	// (0x0002765f) navi_pane

0x86e0,	// (0x000276e3) signal_pane_ParamLimits

0x86e0,	// (0x000276e3) signal_pane

0x0008,

0xf86a,	// (0x0002e86d) bg_status_flat_pane_g

0x874d,	// (0x00027750) status_pane_g1_ParamLimits

0x874d,	// (0x00027750) status_pane_g1

0x8761,	// (0x00027764) status_pane_g2_ParamLimits

0x8761,	// (0x00027764) status_pane_g2

0x876d,	// (0x00027770) status_pane_g3_ParamLimits

0x876d,	// (0x00027770) status_pane_g3

0x0004,

0xf796,	// (0x0002e799) status_pane_g_ParamLimits

0xf796,	// (0x0002e799) status_pane_g

0x87a1,	// (0x000277a4) title_pane_ParamLimits

0x87a1,	// (0x000277a4) title_pane

0x87de,	// (0x000277e1) uni_indicator_pane_ParamLimits

0x87de,	// (0x000277e1) uni_indicator_pane

0x7e0b,	// (0x00026e0e) bg_list_pane_ParamLimits

0x7e0b,	// (0x00026e0e) bg_list_pane

0x5acd,	// (0x00024ad0) find_pane

0x7e2b,	// (0x00026e2e) listscroll_app_pane_ParamLimits

0x7e2b,	// (0x00026e2e) listscroll_app_pane

0x7e37,	// (0x00026e3a) listscroll_form_pane

0x5ad5,	// (0x00024ad8) listscroll_gen_pane_ParamLimits

0x5ad5,	// (0x00024ad8) listscroll_gen_pane

0x7e3f,	// (0x00026e42) listscroll_set_pane

0x6f59,	// (0x00025f5c) main_idle_act_pane

0x78f4,	// (0x000268f7) main_idle_trad_pane

0x78f4,	// (0x000268f7) main_list_empty_pane

0x7e2b,	// (0x00026e2e) main_midp_pane

0x7e59,	// (0x00026e5c) main_pane_g1_ParamLimits

0x7e59,	// (0x00026e5c) main_pane_g1

0x7e67,	// (0x00026e6a) popup_ai_message_window_ParamLimits

0x7e67,	// (0x00026e6a) popup_ai_message_window

0x7f0b,	// (0x00026f0e) popup_fep_china_uni_window_ParamLimits

0x7f0b,	// (0x00026f0e) popup_fep_china_uni_window

0x7f65,	// (0x00026f68) popup_fep_japan_candidate_window_ParamLimits

0x7f65,	// (0x00026f68) popup_fep_japan_candidate_window

0x7f83,	// (0x00026f86) popup_fep_japan_predictive_window_ParamLimits

0x7f83,	// (0x00026f86) popup_fep_japan_predictive_window

0x7fb3,	// (0x00026fb6) popup_find_window

0x7fc0,	// (0x00026fc3) popup_grid_graphic_window_ParamLimits

0x7fc0,	// (0x00026fc3) popup_grid_graphic_window

0x7fea,	// (0x00026fed) popup_large_graphic_colour_window

0x8010,	// (0x00027013) popup_menu_window_ParamLimits

0x8010,	// (0x00027013) popup_menu_window

0x81cc,	// (0x000271cf) popup_note_image_window

0x81b8,	// (0x000271bb) popup_note_wait_window_ParamLimits

0x81b8,	// (0x000271bb) popup_note_wait_window

0x81b8,	// (0x000271bb) popup_note_window_ParamLimits

0x81b8,	// (0x000271bb) popup_note_window

0x8222,	// (0x00027225) popup_query_code_window_ParamLimits

0x8222,	// (0x00027225) popup_query_code_window

0x8236,	// (0x00027239) popup_query_data_code_window_ParamLimits

0x8236,	// (0x00027239) popup_query_data_code_window

0x8253,	// (0x00027256) popup_query_data_window_ParamLimits

0x8253,	// (0x00027256) popup_query_data_window

0x826f,	// (0x00027272) popup_query_sat_info_window_ParamLimits

0x826f,	// (0x00027272) popup_query_sat_info_window

0x82a8,	// (0x000272ab) popup_snote_single_graphic_window_ParamLimits

0x82a8,	// (0x000272ab) popup_snote_single_graphic_window

0x82a8,	// (0x000272ab) popup_snote_single_text_window_ParamLimits

0x82a8,	// (0x000272ab) popup_snote_single_text_window

0x82bd,	// (0x000272c0) popup_sub_window_general

0x83ed,	// (0x000273f0) popup_window_general_ParamLimits

0x83ed,	// (0x000273f0) popup_window_general

0x8402,	// (0x00027405) power_save_pane

0x7c60,	// (0x00026c63) control_pane_g1_ParamLimits

0x7c60,	// (0x00026c63) control_pane_g1

0x7c87,	// (0x00026c8a) control_pane_g2_ParamLimits

0x7c87,	// (0x00026c8a) control_pane_g2

0x7cae,	// (0x00026cb1) control_pane_g3_ParamLimits

0x7cae,	// (0x00026cb1) control_pane_g3

0x0007,

0xf77e,	// (0x0002e781) control_pane_g_ParamLimits

0xf77e,	// (0x0002e781) control_pane_g

0x7d06,	// (0x00026d09) control_pane_t1_ParamLimits

0x7d06,	// (0x00026d09) control_pane_t1

0x7d5a,	// (0x00026d5d) control_pane_t2_ParamLimits

0x7d5a,	// (0x00026d5d) control_pane_t2

0x0002,

0xf78f,	// (0x0002e792) control_pane_t_ParamLimits

0xf78f,	// (0x0002e792) control_pane_t

0x7b85,	// (0x00026b88) navi_navi_volume_pane_cp1

0x7b8d,	// (0x00026b90) status_small_icon_pane

0x7b95,	// (0x00026b98) status_small_pane_g1_ParamLimits

0x7b95,	// (0x00026b98) status_small_pane_g1

0x7bc9,	// (0x00026bcc) status_small_pane_g2_ParamLimits

0x7bc9,	// (0x00026bcc) status_small_pane_g2

0x7bd5,	// (0x00026bd8) status_small_pane_g3_ParamLimits

0x7bd5,	// (0x00026bd8) status_small_pane_g3

0x7be1,	// (0x00026be4) status_small_pane_g4_ParamLimits

0x7be1,	// (0x00026be4) status_small_pane_g4

0x7bed,	// (0x00026bf0) status_small_pane_g5_ParamLimits

0x7bed,	// (0x00026bf0) status_small_pane_g5

0x7bfb,	// (0x00026bfe) status_small_pane_g6_ParamLimits

0x7bfb,	// (0x00026bfe) status_small_pane_g6

0x0007,

0xf76d,	// (0x0002e770) status_small_pane_g_ParamLimits

0xf76d,	// (0x0002e770) status_small_pane_g

0x7c2a,	// (0x00026c2d) status_small_pane_t1

0x7c4c,	// (0x00026c4f) status_small_wait_pane_ParamLimits

0x7c4c,	// (0x00026c4f) status_small_wait_pane

0x732c,	// (0x0002632f) aid_levels_signal_ParamLimits

0x732c,	// (0x0002632f) aid_levels_signal

0x733e,	// (0x00026341) signal_pane_g1_ParamLimits

0x733e,	// (0x00026341) signal_pane_g1

0x7353,	// (0x00026356) signal_pane_g2_ParamLimits

0x7353,	// (0x00026356) signal_pane_g2

0x0003,

0xf6fe,	// (0x0002e701) signal_pane_g_ParamLimits

0xf6fe,	// (0x0002e701) signal_pane_g

0x3975,	// (0x00022978) context_pane_g1

0x68c3,	// (0x000258c6) title_pane_g1

0x68ed,	// (0x000258f0) title_pane_t1

0x1613,	// (0x00020616) title_pane_t2

0x1639,	// (0x0002063c) title_pane_t3

0x0002,

0xf557,	// (0x0002e55a) title_pane_t

0x87f6,	// (0x000277f9) aid_levels_battery_ParamLimits

0x87f6,	// (0x000277f9) aid_levels_battery

0x880a,	// (0x0002780d) battery_pane_g1_ParamLimits

0x880a,	// (0x0002780d) battery_pane_g1

0x8820,	// (0x00027823) battery_pane_g2_ParamLimits

0x8820,	// (0x00027823) battery_pane_g2

0x0001,

0xf7a1,	// (0x0002e7a4) battery_pane_g_ParamLimits

0xf7a1,	// (0x0002e7a4) battery_pane_g

0xae1c,	// (0x00029e1f) uni_indicator_pane_g1

0xae2f,	// (0x00029e32) uni_indicator_pane_g2

0xae41,	// (0x00029e44) uni_indicator_pane_g3

0x0005,

0xf912,	// (0x0002e915) uni_indicator_pane_g

0x7766,	// (0x00026769) navi_icon_pane_ParamLimits

0x7766,	// (0x00026769) navi_icon_pane

0x76b0,	// (0x000266b3) navi_midp_pane

0x7782,	// (0x00026785) navi_navi_pane

0x778c,	// (0x0002678f) navi_text_pane_ParamLimits

0x778c,	// (0x0002678f) navi_text_pane

0x15f3,	// (0x000205f6) status_small_wait_pane_g1

0x18a4,	// (0x000208a7) status_small_wait_pane_g2

0x0001,

0xf90d,	// (0x0002e910) status_small_wait_pane_g

0xab43,	// (0x00029b46) navi_navi_icon_text_pane

0xab4b,	// (0x00029b4e) navi_navi_pane_g1_ParamLimits

0xab4b,	// (0x00029b4e) navi_navi_pane_g1

0xab5d,	// (0x00029b60) navi_navi_pane_g2_ParamLimits

0xab5d,	// (0x00029b60) navi_navi_pane_g2

0x0001,

0xf8db,	// (0x0002e8de) navi_navi_pane_g_ParamLimits

0xf8db,	// (0x0002e8de) navi_navi_pane_g

0xab6f,	// (0x00029b72) navi_navi_tabs_pane

0xab78,	// (0x00029b7b) navi_navi_text_pane

0xab43,	// (0x00029b46) navi_navi_volume_pane

0xab1f,	// (0x00029b22) navi_text_pane_t1

0xab13,	// (0x00029b16) navi_icon_pane_g1

0xaa66,	// (0x00029a69) navi_navi_text_pane_t1

0x8bc6,	// (0x00027bc9) navi_navi_volume_pane_g1

0x8bce,	// (0x00027bd1) volume_small_pane

0xa9cc,	// (0x000299cf) navi_navi_icon_text_pane_g1

0xa9d4,	// (0x000299d7) navi_navi_icon_text_pane_t1

0x7782,	// (0x00026785) navi_tabs_2_long_pane

0x7782,	// (0x00026785) navi_tabs_2_pane

0x7782,	// (0x00026785) navi_tabs_3_long_pane

0x7782,	// (0x00026785) navi_tabs_3_pane

0x7782,	// (0x00026785) navi_tabs_4_pane

0x8ba6,	// (0x00027ba9) tabs_2_active_pane_ParamLimits

0x8ba6,	// (0x00027ba9) tabs_2_active_pane

0x8bb6,	// (0x00027bb9) tabs_2_passive_pane_ParamLimits

0x8bb6,	// (0x00027bb9) tabs_2_passive_pane

0x8b74,	// (0x00027b77) tabs_3_active_pane_ParamLimits

0x8b74,	// (0x00027b77) tabs_3_active_pane

0x8b84,	// (0x00027b87) tabs_3_passive_pane_ParamLimits

0x8b84,	// (0x00027b87) tabs_3_passive_pane

0x8b95,	// (0x00027b98) tabs_3_passive_pane_cp_ParamLimits

0x8b95,	// (0x00027b98) tabs_3_passive_pane_cp

0x8b30,	// (0x00027b33) tabs_4_active_pane_ParamLimits

0x8b30,	// (0x00027b33) tabs_4_active_pane

0x8b41,	// (0x00027b44) tabs_4_passive_pane_ParamLimits

0x8b41,	// (0x00027b44) tabs_4_passive_pane

0x8b52,	// (0x00027b55) tabs_4_passive_pane_cp_ParamLimits

0x8b52,	// (0x00027b55) tabs_4_passive_pane_cp

0x8b63,	// (0x00027b66) tabs_4_passive_pane_cp2_ParamLimits

0x8b63,	// (0x00027b66) tabs_4_passive_pane_cp2

0x8b0c,	// (0x00027b0f) tabs_2_long_active_pane_ParamLimits

0x8b0c,	// (0x00027b0f) tabs_2_long_active_pane

0x8b1e,	// (0x00027b21) tabs_2_long_passive_pane_ParamLimits

0x8b1e,	// (0x00027b21) tabs_2_long_passive_pane

0x8ac7,	// (0x00027aca) tabs_3_long_active_pane_ParamLimits

0x8ac7,	// (0x00027aca) tabs_3_long_active_pane

0x8ae0,	// (0x00027ae3) tabs_3_long_passive_pane_ParamLimits

0x8ae0,	// (0x00027ae3) tabs_3_long_passive_pane

0x8af3,	// (0x00027af6) tabs_3_long_passive_pane_cp_ParamLimits

0x8af3,	// (0x00027af6) tabs_3_long_passive_pane_cp

0x8a6d,	// (0x00027a70) volume_small_pane_g1

0x8a76,	// (0x00027a79) volume_small_pane_g2

0x8a7f,	// (0x00027a82) volume_small_pane_g3

0x8a88,	// (0x00027a8b) volume_small_pane_g4

0x8a91,	// (0x00027a94) volume_small_pane_g5

0x8a9a,	// (0x00027a9d) volume_small_pane_g6

0x8aa3,	// (0x00027aa6) volume_small_pane_g7

0x8aac,	// (0x00027aaf) volume_small_pane_g8

0x8ab5,	// (0x00027ab8) volume_small_pane_g9

0x8abe,	// (0x00027ac1) volume_small_pane_g10

0x0009,

0xf8a7,	// (0x0002e8aa) volume_small_pane_g

0x1659,	// (0x0002065c) bg_active_tab_pane_cp2_ParamLimits

0x1659,	// (0x0002065c) bg_active_tab_pane_cp2

0x6955,	// (0x00025958) tabs_3_active_pane_g1

0x695d,	// (0x00025960) tabs_3_active_pane_t1

0x1659,	// (0x0002065c) bg_passive_tab_pane_cp2_ParamLimits

0x1659,	// (0x0002065c) bg_passive_tab_pane_cp2

0x6955,	// (0x00025958) tabs_3_passive_pane_g1

0x695d,	// (0x00025960) tabs_3_passive_pane_t1

0x1659,	// (0x0002065c) bg_active_tab_pane_cp3_ParamLimits

0x1659,	// (0x0002065c) bg_active_tab_pane_cp3

0x696f,	// (0x00025972) tabs_4_active_pane_g1

0x6977,	// (0x0002597a) tabs_4_active_pane_t1

0x1659,	// (0x0002065c) bg_passive_tab_pane_cp3_ParamLimits

0x1659,	// (0x0002065c) bg_passive_tab_pane_cp3

0x696f,	// (0x00025972) tabs_4_1_passive_pane_g1

0x6977,	// (0x0002597a) tabs_4_1_passive_pane_t1

0x7e2b,	// (0x00026e2e) list_highlight_pane_cp2

0xb084,	// (0x0002a087) list_set_pane_ParamLimits

0xb084,	// (0x0002a087) list_set_pane

0xb126,	// (0x0002a129) main_pane_set_t1_ParamLimits

0xb126,	// (0x0002a129) main_pane_set_t1

0xb146,	// (0x0002a149) main_pane_set_t2_ParamLimits

0xb146,	// (0x0002a149) main_pane_set_t2

0xb15a,	// (0x0002a15d) main_pane_set_t3_ParamLimits

0xb15a,	// (0x0002a15d) main_pane_set_t3

0xb16c,	// (0x0002a16f) main_pane_set_t4_ParamLimits

0xb16c,	// (0x0002a16f) main_pane_set_t4

0x0003,

0xf977,	// (0x0002e97a) main_pane_set_t_ParamLimits

0xf977,	// (0x0002e97a) main_pane_set_t

0xb17e,	// (0x0002a181) setting_code_pane

0xb18a,	// (0x0002a18d) setting_slider_graphic_pane

0xb18a,	// (0x0002a18d) setting_slider_pane

0xb18a,	// (0x0002a18d) setting_text_pane

0xb18a,	// (0x0002a18d) setting_volume_pane

0x6989,	// (0x0002598c) volume_set_pane

0x1659,	// (0x0002065c) bg_set_opt_pane_cp

0x6991,	// (0x00025994) setting_slider_pane_t1

0x69aa,	// (0x000259ad) setting_slider_pane_t2

0x69c4,	// (0x000259c7) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0002e561) setting_slider_pane_t

0x69dc,	// (0x000259df) slider_set_pane

0x15fd,	// (0x00020600) bg_set_opt_pane_cp2

0x1667,	// (0x0002066a) setting_slider_graphic_pane_g1

0x69f2,	// (0x000259f5) setting_slider_graphic_pane_t1

0x6a02,	// (0x00025a05) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0002e568) setting_slider_graphic_pane_t

0x6a12,	// (0x00025a15) slider_set_pane_cp

0x15fd,	// (0x00020600) input_focus_pane_cp1

0xb043,	// (0x0002a046) list_set_text_pane

0x15f3,	// (0x000205f6) setting_text_pane_g1

0x15fd,	// (0x00020600) input_focus_pane_cp2

0x15f3,	// (0x000205f6) setting_code_pane_g1

0x1670,	// (0x00020673) setting_code_pane_t1

0x537b,	// (0x0002437e) set_text_pane_t1_ParamLimits

0x537b,	// (0x0002437e) set_text_pane_t1

0x1b49,	// (0x00020b4c) set_opt_bg_pane_g1

0x1b51,	// (0x00020b54) set_opt_bg_pane_g2

0xb01d,	// (0x0002a020) set_opt_bg_pane_g3

0x1b61,	// (0x00020b64) set_opt_bg_pane_g4

0x1b69,	// (0x00020b6c) set_opt_bg_pane_g5

0x1b71,	// (0x00020b74) set_opt_bg_pane_g6

0xb027,	// (0x0002a02a) set_opt_bg_pane_g7

0xb02f,	// (0x0002a032) set_opt_bg_pane_g8

0xb039,	// (0x0002a03c) set_opt_bg_pane_g9

0x0008,

0xf964,	// (0x0002e967) set_opt_bg_pane_g

0xb010,	// (0x0002a013) slider_set_pane_g1

0x8c3b,	// (0x00027c3e) slider_set_pane_g2

0x0006,

0xf955,	// (0x0002e958) slider_set_pane_g

0x8bd7,	// (0x00027bda) volume_set_pane_g1

0x8bdf,	// (0x00027be2) volume_set_pane_g2

0x8be7,	// (0x00027bea) volume_set_pane_g3

0x8bef,	// (0x00027bf2) volume_set_pane_g4

0x8bf7,	// (0x00027bfa) volume_set_pane_g5

0x8bff,	// (0x00027c02) volume_set_pane_g6

0x8c07,	// (0x00027c0a) volume_set_pane_g7

0x8c0f,	// (0x00027c12) volume_set_pane_g8

0x8c17,	// (0x00027c1a) volume_set_pane_g9

0x8c1f,	// (0x00027c22) volume_set_pane_g10

0x0009,

0xf92d,	// (0x0002e930) volume_set_pane_g

0x6a1a,	// (0x00025a1d) indicator_pane_ParamLimits

0x6a1a,	// (0x00025a1d) indicator_pane

0x6a26,	// (0x00025a29) main_idle_pane_g2_ParamLimits

0x6a26,	// (0x00025a29) main_idle_pane_g2

0x6a4e,	// (0x00025a51) main_pane_idle_g1_ParamLimits

0x6a4e,	// (0x00025a51) main_pane_idle_g1

0x1698,	// (0x0002069b) popup_clock_digital_analogue_window_ParamLimits

0x1698,	// (0x0002069b) popup_clock_digital_analogue_window

0x6a5b,	// (0x00025a5e) soft_indicator_pane_ParamLimits

0x6a5b,	// (0x00025a5e) soft_indicator_pane

0x6a67,	// (0x00025a6a) wallpaper_pane_ParamLimits

0x6a67,	// (0x00025a6a) wallpaper_pane

0x15f3,	// (0x000205f6) wallpaper_pane_g1

0x6a73,	// (0x00025a76) indicator_pane_g1_ParamLimits

0x6a73,	// (0x00025a76) indicator_pane_g1

0xb447,	// (0x0002a44a) navi_navi_icon_text_pane_srt_g1

0x16c6,	// (0x000206c9) soft_indicator_pane_t1

0x16e0,	// (0x000206e3) aid_ps_area_pane

0x6a7f,	// (0x00025a82) aid_ps_clock_pane

0x16f1,	// (0x000206f4) aid_ps_indicator_pane

0x16fd,	// (0x00020700) indicator_ps_pane_ParamLimits

0x16fd,	// (0x00020700) indicator_ps_pane

0x170c,	// (0x0002070f) power_save_pane_g1_ParamLimits

0x170c,	// (0x0002070f) power_save_pane_g1

0x1718,	// (0x0002071b) power_save_pane_g2_ParamLimits

0x1718,	// (0x0002071b) power_save_pane_g2

0x64e2,	// (0x000254e5) aid_navinavi_width_pane

0x16e0,	// (0x000206e3) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0002e56d) power_save_pane_g_ParamLimits

0xf56a,	// (0x0002e56d) power_save_pane_g

0x1726,	// (0x00020729) power_save_pane_t1_ParamLimits

0x1726,	// (0x00020729) power_save_pane_t1

0x6a7f,	// (0x00025a82) aid_ps_clock_pane_ParamLimits

0x16f1,	// (0x000206f4) aid_ps_indicator_pane_ParamLimits

0x1738,	// (0x0002073b) power_save_pane_t4_ParamLimits

0x1738,	// (0x0002073b) power_save_pane_t4

0x0001,

0xf56f,	// (0x0002e572) power_save_pane_t_ParamLimits

0xf56f,	// (0x0002e572) power_save_pane_t

0x1762,	// (0x00020765) power_save_t3_ParamLimits

0x1762,	// (0x00020765) power_save_t3

0x174d,	// (0x00020750) power_save_t2_ParamLimits

0x174d,	// (0x00020750) power_save_t2

0x1777,	// (0x0002077a) indicator_ps_pane_g1

0x6a8d,	// (0x00025a90) ai_gene_pane_ParamLimits

0x6a8d,	// (0x00025a90) ai_gene_pane

0x6a99,	// (0x00025a9c) ai_links_pane_ParamLimits

0x6a99,	// (0x00025a9c) ai_links_pane

0x6aa5,	// (0x00025aa8) indicator_pane_cp1_ParamLimits

0x6aa5,	// (0x00025aa8) indicator_pane_cp1

0x6ab1,	// (0x00025ab4) main_pane_idle_g1_cp_ParamLimits

0x6ab1,	// (0x00025ab4) main_pane_idle_g1_cp

0x6abd,	// (0x00025ac0) popup_ai_links_title_window

0x6ac6,	// (0x00025ac9) soft_indicator_pane_cp1_ParamLimits

0x6ac6,	// (0x00025ac9) soft_indicator_pane_cp1

0xae0a,	// (0x00029e0d) ai_links_pane_g1

0xae13,	// (0x00029e16) grid_ai_links_pane

0xaded,	// (0x00029df0) ai_gene_pane_1

0xadf8,	// (0x00029dfb) ai_gene_pane_2

0xae01,	// (0x00029e04) list_highlight_pane_cp4

0xadd1,	// (0x00029dd4) cell_ai_link_pane_ParamLimits

0xadd1,	// (0x00029dd4) cell_ai_link_pane

0xadc9,	// (0x00029dcc) cell_ai_link_pane_g1

0x18a4,	// (0x000208a7) cell_ai_link_pane_g2

0x0001,

0xf908,	// (0x0002e90b) cell_ai_link_pane_g

0x15fd,	// (0x00020600) grid_highlight_cp2

0x15fd,	// (0x00020600) bg_popup_sub_pane_cp1

0x178e,	// (0x00020791) popup_ai_links_title_window_t1

0xad19,	// (0x00029d1c) ai_gene_pane_1_g1_ParamLimits

0xad19,	// (0x00029d1c) ai_gene_pane_1_g1

0xad25,	// (0x00029d28) ai_gene_pane_1_g2_ParamLimits

0xad25,	// (0x00029d28) ai_gene_pane_1_g2

0x0001,

0xf8fe,	// (0x0002e901) ai_gene_pane_1_g_ParamLimits

0xf8fe,	// (0x0002e901) ai_gene_pane_1_g

0xad32,	// (0x00029d35) ai_gene_pane_1_t1_ParamLimits

0xad32,	// (0x00029d35) ai_gene_pane_1_t1

0xad66,	// (0x00029d69) grid_ai_soft_ind_pane

0xad04,	// (0x00029d07) ai_gene_pane_2_t1_ParamLimits

0xad04,	// (0x00029d07) ai_gene_pane_2_t1

0x6ad2,	// (0x00025ad5) main_pane_empty_t1_ParamLimits

0x6ad2,	// (0x00025ad5) main_pane_empty_t1

0x6aea,	// (0x00025aed) main_pane_empty_t2_ParamLimits

0x6aea,	// (0x00025aed) main_pane_empty_t2

0x6aff,	// (0x00025b02) main_pane_empty_t3_ParamLimits

0x6aff,	// (0x00025b02) main_pane_empty_t3

0x6b11,	// (0x00025b14) main_pane_empty_t4_ParamLimits

0x6b11,	// (0x00025b14) main_pane_empty_t4

0x6b23,	// (0x00025b26) main_pane_empty_t5_ParamLimits

0x6b23,	// (0x00025b26) main_pane_empty_t5

0x0004,

0xf574,	// (0x0002e577) main_pane_empty_t_ParamLimits

0xf574,	// (0x0002e577) main_pane_empty_t

0x1b9a,	// (0x00020b9d) bg_popup_window_pane_ParamLimits

0x1b9a,	// (0x00020b9d) bg_popup_window_pane

0xaa74,	// (0x00029a77) find_popup_pane_cp2_ParamLimits

0xaa74,	// (0x00029a77) find_popup_pane_cp2

0xaa80,	// (0x00029a83) heading_pane_ParamLimits

0xaa80,	// (0x00029a83) heading_pane

0x15fd,	// (0x00020600) bg_popup_sub_pane

0xa9ee,	// (0x000299f1) bg_popup_window_pane_g1_ParamLimits

0xa9ee,	// (0x000299f1) bg_popup_window_pane_g1

0xa9fa,	// (0x000299fd) bg_popup_window_pane_g2_ParamLimits

0xa9fa,	// (0x000299fd) bg_popup_window_pane_g2

0xaa06,	// (0x00029a09) bg_popup_window_pane_g3_ParamLimits

0xaa06,	// (0x00029a09) bg_popup_window_pane_g3

0xaa12,	// (0x00029a15) bg_popup_window_pane_g4_ParamLimits

0xaa12,	// (0x00029a15) bg_popup_window_pane_g4

0xaa1e,	// (0x00029a21) bg_popup_window_pane_g5_ParamLimits

0xaa1e,	// (0x00029a21) bg_popup_window_pane_g5

0xaa2a,	// (0x00029a2d) bg_popup_window_pane_g6_ParamLimits

0xaa2a,	// (0x00029a2d) bg_popup_window_pane_g6

0xaa36,	// (0x00029a39) bg_popup_window_pane_g7_ParamLimits

0xaa36,	// (0x00029a39) bg_popup_window_pane_g7

0xaa42,	// (0x00029a45) bg_popup_window_pane_g8_ParamLimits

0xaa42,	// (0x00029a45) bg_popup_window_pane_g8

0xaa4e,	// (0x00029a51) bg_popup_window_pane_g9_ParamLimits

0xaa4e,	// (0x00029a51) bg_popup_window_pane_g9

0xaa5a,	// (0x00029a5d) bg_popup_window_pane_g10_ParamLimits

0xaa5a,	// (0x00029a5d) bg_popup_window_pane_g10

0x0009,

0xf8c6,	// (0x0002e8c9) bg_popup_window_pane_g_ParamLimits

0xf8c6,	// (0x0002e8c9) bg_popup_window_pane_g

0xa983,	// (0x00029986) bg_popup_heading_pane_ParamLimits

0xa983,	// (0x00029986) bg_popup_heading_pane

0x8cc3,	// (0x00027cc6) tabs_4_passive_pane_cp_srt_ParamLimits

0x8cc3,	// (0x00027cc6) tabs_4_passive_pane_cp_srt

0x8cd5,	// (0x00027cd8) tabs_4_passive_pane_srt_ParamLimits

0xa997,	// (0x0002999a) heading_pane_g2

0x8cd5,	// (0x00027cd8) tabs_4_passive_pane_srt

0x7e2b,	// (0x00026e2e) bg_passive_tab_pane_cp3_srt_ParamLimits

0x7e2b,	// (0x00026e2e) bg_passive_tab_pane_cp3_srt

0xa99f,	// (0x000299a2) heading_pane_t1_ParamLimits

0xa99f,	// (0x000299a2) heading_pane_t1

0xa9b6,	// (0x000299b9) heading_pane_t2_ParamLimits

0xa9b6,	// (0x000299b9) heading_pane_t2

0x0001,

0xf8c1,	// (0x0002e8c4) heading_pane_t_ParamLimits

0xf8c1,	// (0x0002e8c4) heading_pane_t

0xa4c0,	// (0x000294c3) bg_popup_heading_pane_g1

0xa56f,	// (0x00029572) bg_popup_heading_pane_g2

0xa579,	// (0x0002957c) bg_popup_heading_pane_g3

0xa583,	// (0x00029586) bg_popup_heading_pane_g4

0xa58d,	// (0x00029590) bg_popup_heading_pane_g5

0xa597,	// (0x0002959a) bg_popup_heading_pane_g6

0xa59f,	// (0x000295a2) bg_popup_heading_pane_g7

0xa5a7,	// (0x000295aa) bg_popup_heading_pane_g8

0xa5b1,	// (0x000295b4) bg_popup_heading_pane_g9

0x0008,

0xf87d,	// (0x0002e880) bg_popup_heading_pane_g

0x8925,	// (0x00027928) bg_popup_sub_pane_g1

0x892d,	// (0x00027930) bg_popup_sub_pane_g2

0x8935,	// (0x00027938) bg_popup_sub_pane_g3

0x893d,	// (0x00027940) bg_popup_sub_pane_g4

0x8945,	// (0x00027948) bg_popup_sub_pane_g5

0x894d,	// (0x00027950) bg_popup_sub_pane_g6

0x8955,	// (0x00027958) bg_popup_sub_pane_g7

0x895d,	// (0x00027960) bg_popup_sub_pane_g8

0x8965,	// (0x00027968) bg_popup_sub_pane_g9

0x0008,

0xf857,	// (0x0002e85a) bg_popup_sub_pane_g

0x164b,	// (0x0002064e) bg_popup_window_pane_cp5_ParamLimits

0x164b,	// (0x0002064e) bg_popup_window_pane_cp5

0x17ab,	// (0x000207ae) popup_note_window_g1_ParamLimits

0x17ab,	// (0x000207ae) popup_note_window_g1

0x17b7,	// (0x000207ba) popup_note_window_t1_ParamLimits

0x17b7,	// (0x000207ba) popup_note_window_t1

0x17cd,	// (0x000207d0) popup_note_window_t2_ParamLimits

0x17cd,	// (0x000207d0) popup_note_window_t2

0x17e3,	// (0x000207e6) popup_note_window_t3_ParamLimits

0x17e3,	// (0x000207e6) popup_note_window_t3

0x17f9,	// (0x000207fc) popup_note_window_t4_ParamLimits

0x17f9,	// (0x000207fc) popup_note_window_t4

0x1821,	// (0x00020824) popup_note_window_t5_ParamLimits

0x1821,	// (0x00020824) popup_note_window_t5

0x0004,

0xf57f,	// (0x0002e582) popup_note_window_t_ParamLimits

0xf57f,	// (0x0002e582) popup_note_window_t

0x1845,	// (0x00020848) bg_popup_window_pane_cp6_ParamLimits

0x1845,	// (0x00020848) bg_popup_window_pane_cp6

0xa43c,	// (0x0002943f) popup_note_image_window_g1_ParamLimits

0xa43c,	// (0x0002943f) popup_note_image_window_g1

0xa448,	// (0x0002944b) popup_note_image_window_g2_ParamLimits

0xa448,	// (0x0002944b) popup_note_image_window_g2

0x0001,

0xf84b,	// (0x0002e84e) popup_note_image_window_g_ParamLimits

0xf84b,	// (0x0002e84e) popup_note_image_window_g

0xa461,	// (0x00029464) popup_note_image_window_t1_ParamLimits

0xa461,	// (0x00029464) popup_note_image_window_t1

0xa47a,	// (0x0002947d) popup_note_image_window_t2_ParamLimits

0xa47a,	// (0x0002947d) popup_note_image_window_t2

0xa493,	// (0x00029496) popup_note_image_window_t3_ParamLimits

0xa493,	// (0x00029496) popup_note_image_window_t3

0x0002,

0xf850,	// (0x0002e853) popup_note_image_window_t_ParamLimits

0xf850,	// (0x0002e853) popup_note_image_window_t

0xa305,	// (0x00029308) bg_popup_window_pane_cp7_ParamLimits

0xa305,	// (0x00029308) bg_popup_window_pane_cp7

0xa335,	// (0x00029338) popup_note_wait_window_g1_ParamLimits

0xa335,	// (0x00029338) popup_note_wait_window_g1

0xa341,	// (0x00029344) popup_note_wait_window_g2_ParamLimits

0xa341,	// (0x00029344) popup_note_wait_window_g2

0x0002,

0xf839,	// (0x0002e83c) popup_note_wait_window_g_ParamLimits

0xf839,	// (0x0002e83c) popup_note_wait_window_g

0xa359,	// (0x0002935c) popup_note_wait_window_t1_ParamLimits

0xa359,	// (0x0002935c) popup_note_wait_window_t1

0xa380,	// (0x00029383) popup_note_wait_window_t2_ParamLimits

0xa380,	// (0x00029383) popup_note_wait_window_t2

0xa39d,	// (0x000293a0) popup_note_wait_window_t3_ParamLimits

0xa39d,	// (0x000293a0) popup_note_wait_window_t3

0xa3b0,	// (0x000293b3) popup_note_wait_window_t4_ParamLimits

0xa3b0,	// (0x000293b3) popup_note_wait_window_t4

0x0004,

0xf840,	// (0x0002e843) popup_note_wait_window_t_ParamLimits

0xf840,	// (0x0002e843) popup_note_wait_window_t

0xa3d5,	// (0x000293d8) wait_bar_pane_ParamLimits

0xa3d5,	// (0x000293d8) wait_bar_pane

0x15fd,	// (0x00020600) wait_anim_pane

0x15fd,	// (0x00020600) wait_border_pane

0x15f3,	// (0x000205f6) wait_anim_pane_g1

0x15f3,	// (0x000205f6) wait_anim_pane_g2

0x0001,

0xf6f9,	// (0x0002e6fc) wait_anim_pane_g

0xa2b1,	// (0x000292b4) wait_border_pane_g1

0xa2bc,	// (0x000292bf) wait_border_pane_g2

0xa2c5,	// (0x000292c8) wait_border_pane_g3

0x0002,

0xf832,	// (0x0002e835) wait_border_pane_g

0xa11c,	// (0x0002911f) bg_popup_window_pane_cp16_ParamLimits

0xa11c,	// (0x0002911f) bg_popup_window_pane_cp16

0xa21c,	// (0x0002921f) indicator_popup_pane_cp4_ParamLimits

0xa21c,	// (0x0002921f) indicator_popup_pane_cp4

0xa230,	// (0x00029233) popup_query_data_window_t1_ParamLimits

0xa230,	// (0x00029233) popup_query_data_window_t1

0xa242,	// (0x00029245) popup_query_data_window_t2_ParamLimits

0xa242,	// (0x00029245) popup_query_data_window_t2

0xa25b,	// (0x0002925e) popup_query_data_window_t3_ParamLimits

0xa25b,	// (0x0002925e) popup_query_data_window_t3

0x0002,

0xf82b,	// (0x0002e82e) popup_query_data_window_t_ParamLimits

0xf82b,	// (0x0002e82e) popup_query_data_window_t

0xa275,	// (0x00029278) query_popup_data_pane_ParamLimits

0xa275,	// (0x00029278) query_popup_data_pane

0xa289,	// (0x0002928c) query_popup_data_pane_cp1_ParamLimits

0xa289,	// (0x0002928c) query_popup_data_pane_cp1

0xa11c,	// (0x0002911f) bg_popup_window_pane_cp10_ParamLimits

0xa11c,	// (0x0002911f) bg_popup_window_pane_cp10

0xa14e,	// (0x00029151) indicator_popup_pane_ParamLimits

0xa14e,	// (0x00029151) indicator_popup_pane

0xa170,	// (0x00029173) popup_query_code_window_t1_ParamLimits

0xa170,	// (0x00029173) popup_query_code_window_t1

0xa18a,	// (0x0002918d) popup_query_code_window_t2_ParamLimits

0xa18a,	// (0x0002918d) popup_query_code_window_t2

0xa1d3,	// (0x000291d6) popup_query_code_window_t3_ParamLimits

0xa1d3,	// (0x000291d6) popup_query_code_window_t3

0x0002,

0xf824,	// (0x0002e827) popup_query_code_window_t_ParamLimits

0xf824,	// (0x0002e827) popup_query_code_window_t

0xa202,	// (0x00029205) query_popup_pane_ParamLimits

0xa202,	// (0x00029205) query_popup_pane

0x1845,	// (0x00020848) bg_popup_window_pane_cp15_ParamLimits

0x1845,	// (0x00020848) bg_popup_window_pane_cp15

0x6b5d,	// (0x00025b60) indicator_popup_pane_cp1_ParamLimits

0x6b5d,	// (0x00025b60) indicator_popup_pane_cp1

0x6b70,	// (0x00025b73) indicator_popup_pane_cp2_ParamLimits

0x6b70,	// (0x00025b73) indicator_popup_pane_cp2

0x6b83,	// (0x00025b86) popup_query_data_code_window_g1_ParamLimits

0x6b83,	// (0x00025b86) popup_query_data_code_window_g1

0x1863,	// (0x00020866) popup_query_data_code_window_t1_ParamLimits

0x1863,	// (0x00020866) popup_query_data_code_window_t1

0x1875,	// (0x00020878) popup_query_data_code_window_t2_ParamLimits

0x1875,	// (0x00020878) popup_query_data_code_window_t2

0x6b96,	// (0x00025b99) popup_query_data_code_window_t3_ParamLimits

0x6b96,	// (0x00025b99) popup_query_data_code_window_t3

0x6bac,	// (0x00025baf) popup_query_data_code_window_t4_ParamLimits

0x6bac,	// (0x00025baf) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0002e58d) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0002e58d) popup_query_data_code_window_t

0x7724,	// (0x00026727) list_single_midp_graphic_pane_g3

0x6bc4,	// (0x00025bc7) query_popup_data_pane_cp2_ParamLimits

0x6bd7,	// (0x00025bda) query_popup_pane_cp2_ParamLimits

0x6bd7,	// (0x00025bda) query_popup_pane_cp2

0x15fd,	// (0x00020600) bg_popup_window_pane_cp11

0xa108,	// (0x0002910b) heading_pane_cp5

0x18d1,	// (0x000208d4) listscroll_popup_info_pane

0x15fd,	// (0x00020600) input_focus_pane_cp3

0x1887,	// (0x0002088a) query_popup_pane_t1

0x1895,	// (0x00020898) list_popup_info_pane_ParamLimits

0x1895,	// (0x00020898) list_popup_info_pane

0x18a4,	// (0x000208a7) listscroll_popup_info_pane_g1

0x18ac,	// (0x000208af) scroll_pane_cp7

0x6bea,	// (0x00025bed) popup_info_list_pane_t1_ParamLimits

0x6bea,	// (0x00025bed) popup_info_list_pane_t1

0x6c04,	// (0x00025c07) popup_info_list_pane_t2_ParamLimits

0x6c04,	// (0x00025c07) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0002e596) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0002e596) popup_info_list_pane_t

0x15fd,	// (0x00020600) bg_popup_window_pane_cp12

0xb461,	// (0x0002a464) find_popup_pane

0x1659,	// (0x0002065c) bg_popup_window_pane_cp3

0x18b6,	// (0x000208b9) heading_pane_cp3

0x18c2,	// (0x000208c5) listscroll_popup_graphic_pane

0x15fd,	// (0x00020600) bg_popup_window_pane_cp4

0x6c6e,	// (0x00025c71) heading_pane_cp4

0x18d1,	// (0x000208d4) listscroll_popup_colour_pane

0x6c78,	// (0x00025c7b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6c78,	// (0x00025c7b) cell_large_graphic_colour_none_popup_pane

0x6c8c,	// (0x00025c8f) grid_large_graphic_colour_popup_pane_ParamLimits

0x6c8c,	// (0x00025c8f) grid_large_graphic_colour_popup_pane

0x6cb4,	// (0x00025cb7) listscroll_popup_colour_pane_g1_ParamLimits

0x6cb4,	// (0x00025cb7) listscroll_popup_colour_pane_g1

0x6ccb,	// (0x00025cce) listscroll_popup_colour_pane_g2_ParamLimits

0x6ccb,	// (0x00025cce) listscroll_popup_colour_pane_g2

0x6ce2,	// (0x00025ce5) listscroll_popup_colour_pane_g3_ParamLimits

0x6ce2,	// (0x00025ce5) listscroll_popup_colour_pane_g3

0x6cf2,	// (0x00025cf5) listscroll_popup_colour_pane_g4_ParamLimits

0x6cf2,	// (0x00025cf5) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0002e59b) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0002e59b) listscroll_popup_colour_pane_g

0x18d9,	// (0x000208dc) scroll_pane_cp6_ParamLimits

0x18d9,	// (0x000208dc) scroll_pane_cp6

0x6d02,	// (0x00025d05) cell_large_graphic_colour_popup_pane_ParamLimits

0x6d02,	// (0x00025d05) cell_large_graphic_colour_popup_pane

0x6d21,	// (0x00025d24) cell_large_graphic_colour_none_popup_pane_t1

0x15fd,	// (0x00020600) grid_highlight_pane_cp5

0x18eb,	// (0x000208ee) cell_large_graphic_colour_popup_pane_g1

0x18f3,	// (0x000208f6) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0002e5a4) cell_large_graphic_colour_popup_pane_g

0x18fb,	// (0x000208fe) cell_large_graphic_colour_popup_pane_g2_copy1

0x1904,	// (0x00020907) grid_highlight_pane_cp4

0x190c,	// (0x0002090f) bg_popup_window_pane_cp8_ParamLimits

0x190c,	// (0x0002090f) bg_popup_window_pane_cp8

0x6d30,	// (0x00025d33) popup_snote_single_text_window_g1_ParamLimits

0x6d30,	// (0x00025d33) popup_snote_single_text_window_g1

0x6d42,	// (0x00025d45) popup_snote_single_text_window_t1_ParamLimits

0x6d42,	// (0x00025d45) popup_snote_single_text_window_t1

0x6d55,	// (0x00025d58) popup_snote_single_text_window_t2_ParamLimits

0x6d55,	// (0x00025d58) popup_snote_single_text_window_t2

0x6d68,	// (0x00025d6b) popup_snote_single_text_window_t3_ParamLimits

0x6d68,	// (0x00025d6b) popup_snote_single_text_window_t3

0x6da1,	// (0x00025da4) popup_snote_single_text_window_t4_ParamLimits

0x6da1,	// (0x00025da4) popup_snote_single_text_window_t4

0x6dd5,	// (0x00025dd8) popup_snote_single_text_window_t5_ParamLimits

0x6dd5,	// (0x00025dd8) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0002e5a9) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0002e5a9) popup_snote_single_text_window_t

0x1927,	// (0x0002092a) bg_popup_window_pane_cp9_ParamLimits

0x1927,	// (0x0002092a) bg_popup_window_pane_cp9

0x6d30,	// (0x00025d33) popup_snote_single_graphic_window_g1_ParamLimits

0x6d30,	// (0x00025d33) popup_snote_single_graphic_window_g1

0x1935,	// (0x00020938) popup_snote_single_graphic_window_g2_ParamLimits

0x1935,	// (0x00020938) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0002e5b4) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0002e5b4) popup_snote_single_graphic_window_g

0x1941,	// (0x00020944) popup_snote_single_graphic_window_t1_ParamLimits

0x1941,	// (0x00020944) popup_snote_single_graphic_window_t1

0x1954,	// (0x00020957) popup_snote_single_graphic_window_t2_ParamLimits

0x1954,	// (0x00020957) popup_snote_single_graphic_window_t2

0x6e04,	// (0x00025e07) popup_snote_single_graphic_window_t3_ParamLimits

0x6e04,	// (0x00025e07) popup_snote_single_graphic_window_t3

0x6e3d,	// (0x00025e40) popup_snote_single_graphic_window_t4_ParamLimits

0x6e3d,	// (0x00025e40) popup_snote_single_graphic_window_t4

0x6e71,	// (0x00025e74) popup_snote_single_graphic_window_t5_ParamLimits

0x6e71,	// (0x00025e74) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0002e5b9) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0002e5b9) popup_snote_single_graphic_window_t

0xb3a3,	// (0x0002a3a6) grid_graphic_popup_pane_ParamLimits

0xb3a3,	// (0x0002a3a6) grid_graphic_popup_pane

0xb3cd,	// (0x0002a3d0) listscroll_popup_graphic_pane_g1_ParamLimits

0xb3cd,	// (0x0002a3d0) listscroll_popup_graphic_pane_g1

0xb3e1,	// (0x0002a3e4) listscroll_popup_graphic_pane_g2_ParamLimits

0xb3e1,	// (0x0002a3e4) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a1,	// (0x0002e9a4) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a1,	// (0x0002e9a4) listscroll_popup_graphic_pane_g

0xb3f5,	// (0x0002a3f8) scroll_pane_cp5

0xb342,	// (0x0002a345) cell_graphic_popup_pane_ParamLimits

0xb342,	// (0x0002a345) cell_graphic_popup_pane

0xb323,	// (0x0002a326) cell_graphic_popup_pane_g1

0xb32b,	// (0x0002a32e) cell_graphic_popup_pane_g2

0x18fb,	// (0x000208fe) cell_graphic_popup_pane_g3

0x0002,

0xf99a,	// (0x0002e99d) cell_graphic_popup_pane_g

0xb334,	// (0x0002a337) cell_graphic_popup_pane_t2

0x1904,	// (0x00020907) grid_highlight_pane_cp3

0x1979,	// (0x0002097c) list_gen_pane_ParamLimits

0x1979,	// (0x0002097c) list_gen_pane

0x19a1,	// (0x000209a4) scroll_pane

0xb27b,	// (0x0002a27e) bg_list_pane_g1_ParamLimits

0xb27b,	// (0x0002a27e) bg_list_pane_g1

0xb298,	// (0x0002a29b) bg_list_pane_g2_ParamLimits

0xb298,	// (0x0002a29b) bg_list_pane_g2

0xb2ad,	// (0x0002a2b0) bg_list_pane_g3_ParamLimits

0xb2ad,	// (0x0002a2b0) bg_list_pane_g3

0xb2c1,	// (0x0002a2c4) bg_list_pane_g4_ParamLimits

0xb2c1,	// (0x0002a2c4) bg_list_pane_g4

0xb2d5,	// (0x0002a2d8) bg_list_pane_g5_ParamLimits

0xb2d5,	// (0x0002a2d8) bg_list_pane_g5

0x0004,

0xf98f,	// (0x0002e992) bg_list_pane_g_ParamLimits

0xf98f,	// (0x0002e992) bg_list_pane_g

0xb210,	// (0x0002a213) list_double2_graphic_large_graphic_pane_ParamLimits

0xb210,	// (0x0002a213) list_double2_graphic_large_graphic_pane

0xb210,	// (0x0002a213) list_double2_graphic_pane_ParamLimits

0xb210,	// (0x0002a213) list_double2_graphic_pane

0xb210,	// (0x0002a213) list_double2_large_graphic_pane_ParamLimits

0xb210,	// (0x0002a213) list_double2_large_graphic_pane

0x5cba,	// (0x00024cbd) list_double2_pane_ParamLimits

0x5cba,	// (0x00024cbd) list_double2_pane

0xb210,	// (0x0002a213) list_double_graphic_heading_pane_ParamLimits

0xb210,	// (0x0002a213) list_double_graphic_heading_pane

0xb210,	// (0x0002a213) list_double_graphic_pane_ParamLimits

0xb210,	// (0x0002a213) list_double_graphic_pane

0xb210,	// (0x0002a213) list_double_heading_pane_ParamLimits

0xb210,	// (0x0002a213) list_double_heading_pane

0xb210,	// (0x0002a213) list_double_large_graphic_pane_ParamLimits

0xb210,	// (0x0002a213) list_double_large_graphic_pane

0xb210,	// (0x0002a213) list_double_number_pane_ParamLimits

0xb210,	// (0x0002a213) list_double_number_pane

0xb210,	// (0x0002a213) list_double_pane_ParamLimits

0xb210,	// (0x0002a213) list_double_pane

0xb210,	// (0x0002a213) list_double_time_pane_ParamLimits

0xb210,	// (0x0002a213) list_double_time_pane

0xb210,	// (0x0002a213) list_setting_number_pane_ParamLimits

0xb210,	// (0x0002a213) list_setting_number_pane

0xb210,	// (0x0002a213) list_setting_pane_ParamLimits

0xb210,	// (0x0002a213) list_setting_pane

0x5cfb,	// (0x00024cfe) list_single_2graphic_pane_ParamLimits

0x5cfb,	// (0x00024cfe) list_single_2graphic_pane

0x5cfb,	// (0x00024cfe) list_single_graphic_heading_pane_ParamLimits

0x5cfb,	// (0x00024cfe) list_single_graphic_heading_pane

0x5cfb,	// (0x00024cfe) list_single_graphic_pane_ParamLimits

0x5cfb,	// (0x00024cfe) list_single_graphic_pane

0x5cfb,	// (0x00024cfe) list_single_heading_pane_ParamLimits

0x5cfb,	// (0x00024cfe) list_single_heading_pane

0x5d5d,	// (0x00024d60) list_single_large_graphic_pane_ParamLimits

0x5d5d,	// (0x00024d60) list_single_large_graphic_pane

0x5cfb,	// (0x00024cfe) list_single_number_heading_pane_ParamLimits

0x5cfb,	// (0x00024cfe) list_single_number_heading_pane

0x5cfb,	// (0x00024cfe) list_single_number_pane_ParamLimits

0x5cfb,	// (0x00024cfe) list_single_number_pane

0x5cfb,	// (0x00024cfe) list_single_pane_ParamLimits

0x5cfb,	// (0x00024cfe) list_single_pane

0x15fd,	// (0x00020600) list_highlight_pane_cp1

0x53a2,	// (0x000243a5) list_single_pane_g1_ParamLimits

0x53a2,	// (0x000243a5) list_single_pane_g1

0x53ae,	// (0x000243b1) list_single_pane_g2_ParamLimits

0x53ae,	// (0x000243b1) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0002e5cb) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0002e5cb) list_single_pane_g

0x5c91,	// (0x00024c94) list_single_pane_t1_ParamLimits

0x5c91,	// (0x00024c94) list_single_pane_t1

0x53a2,	// (0x000243a5) list_single_number_pane_g1_ParamLimits

0x53a2,	// (0x000243a5) list_single_number_pane_g1

0x53ae,	// (0x000243b1) list_single_number_pane_g2_ParamLimits

0x53ae,	// (0x000243b1) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0002e5cb) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0002e5cb) list_single_number_pane_g

0x53ba,	// (0x000243bd) list_single_number_pane_t1_ParamLimits

0x53ba,	// (0x000243bd) list_single_number_pane_t1

0x5c53,	// (0x00024c56) list_single_number_pane_t2_ParamLimits

0x5c53,	// (0x00024c56) list_single_number_pane_t2

0x0001,

0xf950,	// (0x0002e953) list_single_number_pane_t_ParamLimits

0xf950,	// (0x0002e953) list_single_number_pane_t

0x5396,	// (0x00024399) list_single_graphic_pane_g1_ParamLimits

0x5396,	// (0x00024399) list_single_graphic_pane_g1

0x53a2,	// (0x000243a5) list_single_graphic_pane_g2_ParamLimits

0x53a2,	// (0x000243a5) list_single_graphic_pane_g2

0x53ae,	// (0x000243b1) list_single_graphic_pane_g3_ParamLimits

0x53ae,	// (0x000243b1) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0002e5c4) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0002e5c4) list_single_graphic_pane_g

0x53ba,	// (0x000243bd) list_single_graphic_pane_t1_ParamLimits

0x53ba,	// (0x000243bd) list_single_graphic_pane_t1

0x53a2,	// (0x000243a5) list_single_heading_pane_g1_ParamLimits

0x53a2,	// (0x000243a5) list_single_heading_pane_g1

0x53ae,	// (0x000243b1) list_single_heading_pane_g2_ParamLimits

0x53ae,	// (0x000243b1) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002e5cb) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002e5cb) list_single_heading_pane_g

0x53d0,	// (0x000243d3) list_single_heading_pane_t1_ParamLimits

0x53d0,	// (0x000243d3) list_single_heading_pane_t1

0x53e6,	// (0x000243e9) list_single_heading_pane_t2_ParamLimits

0x53e6,	// (0x000243e9) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0002e5d0) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0002e5d0) list_single_heading_pane_t

0x53a2,	// (0x000243a5) list_single_number_heading_pane_g1_ParamLimits

0x53a2,	// (0x000243a5) list_single_number_heading_pane_g1

0x53ae,	// (0x000243b1) list_single_number_heading_pane_g2_ParamLimits

0x53ae,	// (0x000243b1) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002e5cb) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002e5cb) list_single_number_heading_pane_g

0x53d0,	// (0x000243d3) list_single_number_heading_pane_t1_ParamLimits

0x53d0,	// (0x000243d3) list_single_number_heading_pane_t1

0x53f8,	// (0x000243fb) list_single_number_heading_pane_t2_ParamLimits

0x53f8,	// (0x000243fb) list_single_number_heading_pane_t2

0x540a,	// (0x0002440d) list_single_number_heading_pane_t3_ParamLimits

0x540a,	// (0x0002440d) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0002e5d5) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0002e5d5) list_single_number_heading_pane_t

0x541c,	// (0x0002441f) list_single_graphic_heading_pane_g1_ParamLimits

0x541c,	// (0x0002441f) list_single_graphic_heading_pane_g1

0x5428,	// (0x0002442b) list_single_graphic_heading_pane_g4_ParamLimits

0x5428,	// (0x0002442b) list_single_graphic_heading_pane_g4

0x53ae,	// (0x000243b1) list_single_graphic_heading_pane_g5_ParamLimits

0x53ae,	// (0x000243b1) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0002e5dc) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0002e5dc) list_single_graphic_heading_pane_g

0x53d0,	// (0x000243d3) list_single_graphic_heading_pane_t1_ParamLimits

0x53d0,	// (0x000243d3) list_single_graphic_heading_pane_t1

0x5439,	// (0x0002443c) list_single_graphic_heading_pane_t2_ParamLimits

0x5439,	// (0x0002443c) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0002e5e3) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0002e5e3) list_single_graphic_heading_pane_t

0x544b,	// (0x0002444e) list_single_large_graphic_pane_g1_ParamLimits

0x544b,	// (0x0002444e) list_single_large_graphic_pane_g1

0x5457,	// (0x0002445a) list_single_large_graphic_pane_g2_ParamLimits

0x5457,	// (0x0002445a) list_single_large_graphic_pane_g2

0x5463,	// (0x00024466) list_single_large_graphic_pane_g3_ParamLimits

0x5463,	// (0x00024466) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0002e5e8) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0002e5e8) list_single_large_graphic_pane_g

0xa2bc,	// (0x000292bf) wait_border_pane_g2_copy1

0x546f,	// (0x00024472) list_single_large_graphic_pane_g4_cp2

0x5477,	// (0x0002447a) list_single_large_graphic_pane_t1_ParamLimits

0x5477,	// (0x0002447a) list_single_large_graphic_pane_t1

0x548d,	// (0x00024490) list_double_pane_g1_ParamLimits

0x548d,	// (0x00024490) list_double_pane_g1

0x5499,	// (0x0002449c) list_double_pane_g2_ParamLimits

0x5499,	// (0x0002449c) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0002e5ef) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0002e5ef) list_double_pane_g

0x54a5,	// (0x000244a8) list_double_pane_t1_ParamLimits

0x54a5,	// (0x000244a8) list_double_pane_t1

0x54bb,	// (0x000244be) list_double_pane_t2_ParamLimits

0x54bb,	// (0x000244be) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0002e5f4) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0002e5f4) list_double_pane_t

0x54cd,	// (0x000244d0) list_double2_pane_g1_ParamLimits

0x54cd,	// (0x000244d0) list_double2_pane_g1

0x54de,	// (0x000244e1) list_double2_pane_g2_ParamLimits

0x54de,	// (0x000244e1) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0002e5f9) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0002e5f9) list_double2_pane_g

0x54ea,	// (0x000244ed) list_double2_pane_t1_ParamLimits

0x54ea,	// (0x000244ed) list_double2_pane_t1

0x5500,	// (0x00024503) list_double2_pane_t2_ParamLimits

0x5500,	// (0x00024503) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0002e5fe) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0002e5fe) list_double2_pane_t

0x548d,	// (0x00024490) list_double_number_pane_g1_ParamLimits

0x548d,	// (0x00024490) list_double_number_pane_g1

0x5499,	// (0x0002449c) list_double_number_pane_g2_ParamLimits

0x5499,	// (0x0002449c) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0002e5ef) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0002e5ef) list_double_number_pane_g

0x5512,	// (0x00024515) list_double_number_pane_t1_ParamLimits

0x5512,	// (0x00024515) list_double_number_pane_t1

0x5524,	// (0x00024527) list_double_number_pane_t2_ParamLimits

0x5524,	// (0x00024527) list_double_number_pane_t2

0x553a,	// (0x0002453d) list_double_number_pane_t3_ParamLimits

0x553a,	// (0x0002453d) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0002e603) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0002e603) list_double_number_pane_t

0x554c,	// (0x0002454f) list_double_graphic_pane_g1_ParamLimits

0x554c,	// (0x0002454f) list_double_graphic_pane_g1

0x5558,	// (0x0002455b) list_double_graphic_pane_g2_ParamLimits

0x5558,	// (0x0002455b) list_double_graphic_pane_g2

0x5567,	// (0x0002456a) list_double_graphic_pane_g3_ParamLimits

0x5567,	// (0x0002456a) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0002e60a) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0002e60a) list_double_graphic_pane_g

0x5524,	// (0x00024527) list_double_graphic_pane_t1_ParamLimits

0x5524,	// (0x00024527) list_double_graphic_pane_t1

0x553a,	// (0x0002453d) list_double_graphic_pane_t2_ParamLimits

0x553a,	// (0x0002453d) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0002e613) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0002e613) list_double_graphic_pane_t

0x557f,	// (0x00024582) list_double2_graphic_pane_g1_ParamLimits

0x557f,	// (0x00024582) list_double2_graphic_pane_g1

0x548d,	// (0x00024490) list_double2_graphic_pane_g2_ParamLimits

0x548d,	// (0x00024490) list_double2_graphic_pane_g2

0x5499,	// (0x0002449c) list_double2_graphic_pane_g3_ParamLimits

0x5499,	// (0x0002449c) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0002e618) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0002e618) list_double2_graphic_pane_g

0x558b,	// (0x0002458e) list_double2_graphic_pane_t1_ParamLimits

0x558b,	// (0x0002458e) list_double2_graphic_pane_t1

0x55a1,	// (0x000245a4) list_double2_graphic_pane_t2_ParamLimits

0x55a1,	// (0x000245a4) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002e61f) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002e61f) list_double2_graphic_pane_t

0x55b3,	// (0x000245b6) list_double_large_graphic_pane_g1_ParamLimits

0x55b3,	// (0x000245b6) list_double_large_graphic_pane_g1

0x55d2,	// (0x000245d5) list_double_large_graphic_pane_g2_ParamLimits

0x55d2,	// (0x000245d5) list_double_large_graphic_pane_g2

0x5499,	// (0x0002449c) list_double_large_graphic_pane_g3_ParamLimits

0x5499,	// (0x0002449c) list_double_large_graphic_pane_g3

0x55e3,	// (0x000245e6) list_double_large_graphic_pane_g4_ParamLimits

0x55e3,	// (0x000245e6) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0002e624) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0002e624) list_double_large_graphic_pane_g

0x560b,	// (0x0002460e) list_double_large_graphic_pane_t1_ParamLimits

0x560b,	// (0x0002460e) list_double_large_graphic_pane_t1

0x5624,	// (0x00024627) list_double_large_graphic_pane_t2_ParamLimits

0x5624,	// (0x00024627) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002e62f) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002e62f) list_double_large_graphic_pane_t

0x6eaa,	// (0x00025ead) list_double2_large_graphic_pane_g1_ParamLimits

0x6eaa,	// (0x00025ead) list_double2_large_graphic_pane_g1

0x5636,	// (0x00024639) list_double2_large_graphic_pane_g2_ParamLimits

0x5636,	// (0x00024639) list_double2_large_graphic_pane_g2

0x5647,	// (0x0002464a) list_double2_large_graphic_pane_g3_ParamLimits

0x5647,	// (0x0002464a) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0002e634) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0002e634) list_double2_large_graphic_pane_g

0x558b,	// (0x0002458e) list_double2_large_graphic_pane_t1_ParamLimits

0x558b,	// (0x0002458e) list_double2_large_graphic_pane_t1

0x55a1,	// (0x000245a4) list_double2_large_graphic_pane_t2_ParamLimits

0x55a1,	// (0x000245a4) list_double2_large_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002e61f) list_double2_large_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002e61f) list_double2_large_graphic_pane_t

0x5653,	// (0x00024656) list_double_heading_pane_g1_ParamLimits

0x5653,	// (0x00024656) list_double_heading_pane_g1

0x5664,	// (0x00024667) list_double_heading_pane_g2_ParamLimits

0x5664,	// (0x00024667) list_double_heading_pane_g2

0x0001,

0xf638,	// (0x0002e63b) list_double_heading_pane_g_ParamLimits

0xf638,	// (0x0002e63b) list_double_heading_pane_g

0x5670,	// (0x00024673) list_double_heading_pane_t1_ParamLimits

0x5670,	// (0x00024673) list_double_heading_pane_t1

0x5686,	// (0x00024689) list_double_heading_pane_t2_ParamLimits

0x5686,	// (0x00024689) list_double_heading_pane_t2

0x0001,

0xf63d,	// (0x0002e640) list_double_heading_pane_t_ParamLimits

0xf63d,	// (0x0002e640) list_double_heading_pane_t

0x557f,	// (0x00024582) list_double_graphic_heading_pane_g1_ParamLimits

0x557f,	// (0x00024582) list_double_graphic_heading_pane_g1

0x5653,	// (0x00024656) list_double_graphic_heading_pane_g2_ParamLimits

0x5653,	// (0x00024656) list_double_graphic_heading_pane_g2

0x5664,	// (0x00024667) list_double_graphic_heading_pane_g3_ParamLimits

0x5664,	// (0x00024667) list_double_graphic_heading_pane_g3

0x0002,

0xf642,	// (0x0002e645) list_double_graphic_heading_pane_g_ParamLimits

0xf642,	// (0x0002e645) list_double_graphic_heading_pane_g

0x5670,	// (0x00024673) list_double_graphic_heading_pane_t1_ParamLimits

0x5670,	// (0x00024673) list_double_graphic_heading_pane_t1

0x5686,	// (0x00024689) list_double_graphic_heading_pane_t2_ParamLimits

0x5686,	// (0x00024689) list_double_graphic_heading_pane_t2

0x0001,

0xf63d,	// (0x0002e640) list_double_graphic_heading_pane_t_ParamLimits

0xf63d,	// (0x0002e640) list_double_graphic_heading_pane_t

0x55d2,	// (0x000245d5) list_double_time_pane_g1_ParamLimits

0x55d2,	// (0x000245d5) list_double_time_pane_g1

0x5499,	// (0x0002449c) list_double_time_pane_g2_ParamLimits

0x5499,	// (0x0002449c) list_double_time_pane_g2

0x0001,

0xf649,	// (0x0002e64c) list_double_time_pane_g_ParamLimits

0xf649,	// (0x0002e64c) list_double_time_pane_g

0x5698,	// (0x0002469b) list_double_time_pane_t1_ParamLimits

0x5698,	// (0x0002469b) list_double_time_pane_t1

0x56ae,	// (0x000246b1) list_double_time_pane_t2_ParamLimits

0x56ae,	// (0x000246b1) list_double_time_pane_t2

0x56c0,	// (0x000246c3) list_double_time_pane_t3_ParamLimits

0x56c0,	// (0x000246c3) list_double_time_pane_t3

0x56d2,	// (0x000246d5) list_double_time_pane_t4_ParamLimits

0x56d2,	// (0x000246d5) list_double_time_pane_t4

0x0003,

0xf64e,	// (0x0002e651) list_double_time_pane_t_ParamLimits

0xf64e,	// (0x0002e651) list_double_time_pane_t

0x56e4,	// (0x000246e7) list_setting_pane_g1_ParamLimits

0x56e4,	// (0x000246e7) list_setting_pane_g1

0x5664,	// (0x00024667) list_setting_pane_g2_ParamLimits

0x5664,	// (0x00024667) list_setting_pane_g2

0x0001,

0xf657,	// (0x0002e65a) list_setting_pane_g_ParamLimits

0xf657,	// (0x0002e65a) list_setting_pane_g

0x56f0,	// (0x000246f3) list_setting_pane_t1_ParamLimits

0x56f0,	// (0x000246f3) list_setting_pane_t1

0x5707,	// (0x0002470a) list_setting_pane_t2_ParamLimits

0x5707,	// (0x0002470a) list_setting_pane_t2

0x0002,

0xf65c,	// (0x0002e65f) list_setting_pane_t_ParamLimits

0xf65c,	// (0x0002e65f) list_setting_pane_t

0x5744,	// (0x00024747) set_value_pane_cp_ParamLimits

0x5744,	// (0x00024747) set_value_pane_cp

0x5750,	// (0x00024753) list_setting_number_pane_g1_ParamLimits

0x5750,	// (0x00024753) list_setting_number_pane_g1

0x575c,	// (0x0002475f) list_setting_number_pane_g2_ParamLimits

0x575c,	// (0x0002475f) list_setting_number_pane_g2

0x0001,

0xf663,	// (0x0002e666) list_setting_number_pane_g_ParamLimits

0xf663,	// (0x0002e666) list_setting_number_pane_g

0x5768,	// (0x0002476b) list_setting_number_pane_t1_ParamLimits

0x5768,	// (0x0002476b) list_setting_number_pane_t1

0x577c,	// (0x0002477f) list_setting_number_pane_t2_ParamLimits

0x577c,	// (0x0002477f) list_setting_number_pane_t2

0x5793,	// (0x00024796) list_setting_number_pane_t3_ParamLimits

0x5793,	// (0x00024796) list_setting_number_pane_t3

0x0003,

0xf668,	// (0x0002e66b) list_setting_number_pane_t_ParamLimits

0xf668,	// (0x0002e66b) list_setting_number_pane_t

0x5744,	// (0x00024747) set_value_pane_ParamLimits

0x5744,	// (0x00024747) set_value_pane

0x1a02,	// (0x00020a05) bg_set_opt_pane_ParamLimits

0x1a02,	// (0x00020a05) bg_set_opt_pane

0x57d6,	// (0x000247d9) set_value_pane_t1

0x1a31,	// (0x00020a34) slider_set_pane_cp3

0x6eb6,	// (0x00025eb9) volume_small_pane_cp

0x1a3a,	// (0x00020a3d) list_form_gen_pane

0x1a43,	// (0x00020a46) scroll_pane_cp8

0x57ec,	// (0x000247ef) form_field_data_pane_ParamLimits

0x57ec,	// (0x000247ef) form_field_data_pane

0x580c,	// (0x0002480f) form_field_data_wide_pane_ParamLimits

0x580c,	// (0x0002480f) form_field_data_wide_pane

0x582d,	// (0x00024830) form_field_popup_pane_ParamLimits

0x582d,	// (0x00024830) form_field_popup_pane

0x584b,	// (0x0002484e) form_field_popup_wide_pane_ParamLimits

0x584b,	// (0x0002484e) form_field_popup_wide_pane

0x5868,	// (0x0002486b) form_field_slider_pane_ParamLimits

0x5868,	// (0x0002486b) form_field_slider_pane

0x587b,	// (0x0002487e) form_field_slider_wide_pane_ParamLimits

0x587b,	// (0x0002487e) form_field_slider_wide_pane

0x1a77,	// (0x00020a7a) data_form_pane

0x5898,	// (0x0002489b) form_field_data_pane_t1

0x1a83,	// (0x00020a86) input_focus_pane

0x58b0,	// (0x000248b3) data_form_wide_pane

0x58cd,	// (0x000248d0) form_field_data_wide_pane_t1

0x1919,	// (0x0002091c) input_focus_pane_cp6

0x58ef,	// (0x000248f2) form_field_popup_pane_t1

0x1a83,	// (0x00020a86) input_focus_pane_cp7

0x1af0,	// (0x00020af3) list_form_pane

0x590f,	// (0x00024912) form_field_popup_wide_pane_t1

0x1a83,	// (0x00020a86) input_focus_pane_cp8

0x1b19,	// (0x00020b1c) list_form_wide_pane

0x592c,	// (0x0002492f) form_field_slider_pane_t1_ParamLimits

0x592c,	// (0x0002492f) form_field_slider_pane_t1

0x5942,	// (0x00024945) form_field_slider_pane_t2_ParamLimits

0x5942,	// (0x00024945) form_field_slider_pane_t2

0x0001,

0xf678,	// (0x0002e67b) form_field_slider_pane_t_ParamLimits

0xf678,	// (0x0002e67b) form_field_slider_pane_t

0x164b,	// (0x0002064e) input_focus_pane_cp9_ParamLimits

0x164b,	// (0x0002064e) input_focus_pane_cp9

0x5957,	// (0x0002495a) slider_cont_pane_ParamLimits

0x5957,	// (0x0002495a) slider_cont_pane

0x1b25,	// (0x00020b28) form_field_slider_wide_pane_t1_ParamLimits

0x1b25,	// (0x00020b28) form_field_slider_wide_pane_t1

0x596b,	// (0x0002496e) form_field_slider_wide_pane_t2_ParamLimits

0x596b,	// (0x0002496e) form_field_slider_wide_pane_t2

0x0001,

0xf67d,	// (0x0002e680) form_field_slider_wide_pane_t_ParamLimits

0xf67d,	// (0x0002e680) form_field_slider_wide_pane_t

0x164b,	// (0x0002064e) input_focus_pane_cp10_ParamLimits

0x164b,	// (0x0002064e) input_focus_pane_cp10

0x597d,	// (0x00024980) slider_cont_pane_cp1_ParamLimits

0x597d,	// (0x00024980) slider_cont_pane_cp1

0x5991,	// (0x00024994) slider_form_pane_cp

0x1b49,	// (0x00020b4c) input_focus_pane_g1

0x1b51,	// (0x00020b54) input_focus_pane_g2

0x1b59,	// (0x00020b5c) input_focus_pane_g3

0x1b61,	// (0x00020b64) input_focus_pane_g4

0x1b69,	// (0x00020b6c) input_focus_pane_g5

0x1b71,	// (0x00020b74) input_focus_pane_g6

0x1b79,	// (0x00020b7c) input_focus_pane_g7

0x1b81,	// (0x00020b84) input_focus_pane_g8

0x1b89,	// (0x00020b8c) input_focus_pane_g9

0x15f3,	// (0x000205f6) input_focus_pane_g10

0x0009,

0xf682,	// (0x0002e685) input_focus_pane_g

0xa2c5,	// (0x000292c8) wait_border_pane_g3_copy1

0x5999,	// (0x0002499c) data_form_pane_t1

0x15f3,	// (0x000205f6) wait_anim_pane_g1_copy1

0x5c65,	// (0x00024c68) data_form_wide_pane_t1

0x59b4,	// (0x000249b7) list_form_graphic_pane_cp_ParamLimits

0x59b4,	// (0x000249b7) list_form_graphic_pane_cp

0xb1b4,	// (0x0002a1b7) slider_form_pane_g1

0xb1bd,	// (0x0002a1c0) slider_form_pane_g2

0x0006,

0xf980,	// (0x0002e983) slider_form_pane_g

0x59c8,	// (0x000249cb) list_form_graphic_pane_ParamLimits

0x59c8,	// (0x000249cb) list_form_graphic_pane

0x59df,	// (0x000249e2) list_form_graphic_pane_g1

0x59e7,	// (0x000249ea) list_form_graphic_pane_t1_ParamLimits

0x59e7,	// (0x000249ea) list_form_graphic_pane_t1

0x1659,	// (0x0002065c) list_highlight_pane_cp5_ParamLimits

0x1659,	// (0x0002065c) list_highlight_pane_cp5

0x59fc,	// (0x000249ff) find_pane_g1

0x1b91,	// (0x00020b94) input_find_pane

0x5a05,	// (0x00024a08) input_find_pane_g1_ParamLimits

0x5a05,	// (0x00024a08) input_find_pane_g1

0x5a11,	// (0x00024a14) input_find_pane_t1_ParamLimits

0x5a11,	// (0x00024a14) input_find_pane_t1

0x5a26,	// (0x00024a29) input_find_pane_t2_ParamLimits

0x5a26,	// (0x00024a29) input_find_pane_t2

0x0001,

0xf697,	// (0x0002e69a) input_find_pane_t_ParamLimits

0xf697,	// (0x0002e69a) input_find_pane_t

0x1b9a,	// (0x00020b9d) input_focus_pane_cp5_ParamLimits

0x1b9a,	// (0x00020b9d) input_focus_pane_cp5

0x1ba8,	// (0x00020bab) bg_popup_window_pane_cp2_ParamLimits

0x1ba8,	// (0x00020bab) bg_popup_window_pane_cp2

0x1bb5,	// (0x00020bb8) listscroll_menu_pane_ParamLimits

0x1bb5,	// (0x00020bb8) listscroll_menu_pane

0x6ecb,	// (0x00025ece) popup_submenu_window_ParamLimits

0x6ecb,	// (0x00025ece) popup_submenu_window

0x1bc1,	// (0x00020bc4) find_popup_pane_g1

0x6ef3,	// (0x00025ef6) input_popup_find_pane_cp

0x1b9a,	// (0x00020b9d) input_focus_pane_cp4_ParamLimits

0x1b9a,	// (0x00020b9d) input_focus_pane_cp4

0x1bc9,	// (0x00020bcc) input_popup_find_pane_t1_ParamLimits

0x1bc9,	// (0x00020bcc) input_popup_find_pane_t1

0x15fd,	// (0x00020600) bg_popup_sub_pane_cp

0x1bf7,	// (0x00020bfa) listscroll_popup_sub_pane

0x1bff,	// (0x00020c02) list_submenu_pane_ParamLimits

0x1bff,	// (0x00020c02) list_submenu_pane

0x1c10,	// (0x00020c13) scroll_pane_cp4

0x6f0b,	// (0x00025f0e) list_single_popup_submenu_pane_ParamLimits

0x6f0b,	// (0x00025f0e) list_single_popup_submenu_pane

0x1dbb,	// (0x00020dbe) list_single_popup_submenu_pane_g1

0x6f1f,	// (0x00025f22) list_single_popup_submenu_pane_t1_ParamLimits

0x6f1f,	// (0x00025f22) list_single_popup_submenu_pane_t1

0x1659,	// (0x0002065c) bg_active_tab_pane_cp1_ParamLimits

0x1659,	// (0x0002065c) bg_active_tab_pane_cp1

0x1c18,	// (0x00020c1b) tabs_2_active_pane_g1

0x6f34,	// (0x00025f37) tabs_2_active_pane_t1

0x1659,	// (0x0002065c) bg_passive_tab_pane_cp1_ParamLimits

0x1659,	// (0x0002065c) bg_passive_tab_pane_cp1

0x1c18,	// (0x00020c1b) tabs_2_passive_pane_g1

0x6f34,	// (0x00025f37) tabs_2_passive_pane_t1

0x1dad,	// (0x00020db0) bg_active_tab_pane_cp4

0x6f46,	// (0x00025f49) tabs_2_long_active_pane_t1

0x6f59,	// (0x00025f5c) bg_passive_tab_pane_cp4

0x8992,	// (0x00027995) list_single_midp_graphic_pane_g4_ParamLimits

0x1dad,	// (0x00020db0) bg_active_tab_pane_cp5

0x6f65,	// (0x00025f68) tabs_3_long_active_pane_t1

0x6f59,	// (0x00025f5c) bg_passive_tab_pane_cp5

0x8992,	// (0x00027995) list_single_midp_graphic_pane_g4

0x1659,	// (0x0002065c) bg_popup_window_pane_cp13_ParamLimits

0x1659,	// (0x0002065c) bg_popup_window_pane_cp13

0x1c20,	// (0x00020c23) listscroll_popup_fast_pane_ParamLimits

0x1c20,	// (0x00020c23) listscroll_popup_fast_pane

0x1c2c,	// (0x00020c2f) grid_popup_fast_pane_ParamLimits

0x1c2c,	// (0x00020c2f) grid_popup_fast_pane

0x1c3e,	// (0x00020c41) scroll_pane_cp9_ParamLimits

0x1c3e,	// (0x00020c41) scroll_pane_cp9

0xcabf,	// (0x0002bac2) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcabf,	// (0x0002bac2) list_single_graphic_hl_pane_t1_cp2

0x1c51,	// (0x00020c54) input_focus_pane_cp20_ParamLimits

0x1c51,	// (0x00020c54) input_focus_pane_cp20

0x1c5f,	// (0x00020c62) query_popup_data_pane_t1_ParamLimits

0x1c5f,	// (0x00020c62) query_popup_data_pane_t1

0x1c72,	// (0x00020c75) query_popup_data_pane_t2_ParamLimits

0x1c72,	// (0x00020c75) query_popup_data_pane_t2

0x1cb8,	// (0x00020cbb) query_popup_data_pane_t3_ParamLimits

0x1cb8,	// (0x00020cbb) query_popup_data_pane_t3

0x1cf9,	// (0x00020cfc) query_popup_data_pane_t4_ParamLimits

0x1cf9,	// (0x00020cfc) query_popup_data_pane_t4

0x1d35,	// (0x00020d38) query_popup_data_pane_t5_ParamLimits

0x1d35,	// (0x00020d38) query_popup_data_pane_t5

0x0004,

0xf69c,	// (0x0002e69f) query_popup_data_pane_t_ParamLimits

0xf69c,	// (0x0002e69f) query_popup_data_pane_t

0x1b49,	// (0x00020b4c) bg_set_opt_pane_g1

0x1b51,	// (0x00020b54) bg_set_opt_pane_g2

0x1b59,	// (0x00020b5c) bg_set_opt_pane_g3

0x1b61,	// (0x00020b64) bg_set_opt_pane_g4

0x1b69,	// (0x00020b6c) bg_set_opt_pane_g5

0x1b71,	// (0x00020b74) bg_set_opt_pane_g6

0x1b79,	// (0x00020b7c) bg_set_opt_pane_g7

0x1b81,	// (0x00020b84) bg_set_opt_pane_g8

0x1b89,	// (0x00020b8c) bg_set_opt_pane_g9

0x0008,

0xf6a7,	// (0x0002e6aa) bg_set_opt_pane_g

0x7450,	// (0x00026453) control_top_pane_stacon_ParamLimits

0x7450,	// (0x00026453) control_top_pane_stacon

0x74a3,	// (0x000264a6) signal_pane_stacon_ParamLimits

0x74a3,	// (0x000264a6) signal_pane_stacon

0x74c8,	// (0x000264cb) stacon_top_pane_g1_ParamLimits

0x74c8,	// (0x000264cb) stacon_top_pane_g1

0x74ea,	// (0x000264ed) title_pane_stacon_ParamLimits

0x74ea,	// (0x000264ed) title_pane_stacon

0x7514,	// (0x00026517) uni_indicator_pane_stacon_ParamLimits

0x7514,	// (0x00026517) uni_indicator_pane_stacon

0x7529,	// (0x0002652c) battery_pane_stacon_ParamLimits

0x7529,	// (0x0002652c) battery_pane_stacon

0x756d,	// (0x00026570) control_bottom_pane_stacon_ParamLimits

0x756d,	// (0x00026570) control_bottom_pane_stacon

0x7590,	// (0x00026593) navi_pane_stacon_ParamLimits

0x7590,	// (0x00026593) navi_pane_stacon

0x75b3,	// (0x000265b6) stacon_bottom_pane_g1_ParamLimits

0x75b3,	// (0x000265b6) stacon_bottom_pane_g1

0x6f91,	// (0x00025f94) aid_levels_signal_lsc_ParamLimits

0x6f91,	// (0x00025f94) aid_levels_signal_lsc

0x6fa7,	// (0x00025faa) signal_pane_stacon_g1_ParamLimits

0x6fa7,	// (0x00025faa) signal_pane_stacon_g1

0x6fbb,	// (0x00025fbe) signal_pane_stacon_g2_ParamLimits

0x6fbb,	// (0x00025fbe) signal_pane_stacon_g2

0x0001,

0xf6ba,	// (0x0002e6bd) signal_pane_stacon_g_ParamLimits

0xf6ba,	// (0x0002e6bd) signal_pane_stacon_g

0x6ff0,	// (0x00025ff3) title_pane_stacon_t1_ParamLimits

0x6ff0,	// (0x00025ff3) title_pane_stacon_t1

0x1d8d,	// (0x00020d90) uni_indicator_pane_stacon_g1

0x1d97,	// (0x00020d9a) uni_indicator_pane_stacon_g2

0x1d79,	// (0x00020d7c) uni_indicator_pane_stacon_g3

0x1d83,	// (0x00020d86) uni_indicator_pane_stacon_g4

0x0003,

0xf6c6,	// (0x0002e6c9) uni_indicator_pane_stacon_g

0x7015,	// (0x00026018) control_top_pane_stacon_g1

0x701d,	// (0x00026020) control_top_pane_stacon_t1_ParamLimits

0x701d,	// (0x00026020) control_top_pane_stacon_t1

0x7054,	// (0x00026057) aid_levels_battery_lsc_ParamLimits

0x7054,	// (0x00026057) aid_levels_battery_lsc

0x706b,	// (0x0002606e) battery_pane_stacon_g1_ParamLimits

0x706b,	// (0x0002606e) battery_pane_stacon_g1

0x707e,	// (0x00026081) battery_pane_stacon_g2_ParamLimits

0x707e,	// (0x00026081) battery_pane_stacon_g2

0x0001,

0xf6cf,	// (0x0002e6d2) battery_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0002e6d2) battery_pane_stacon_g

0x70bc,	// (0x000260bf) navi_icon_pane_stacon

0x70d0,	// (0x000260d3) navi_navi_pane_stacon

0x70bc,	// (0x000260bf) navi_text_pane_stacon

0x7015,	// (0x00026018) control_bottom_pane_stacon_g1

0x70e4,	// (0x000260e7) control_bottom_pane_stacon_t1_ParamLimits

0x70e4,	// (0x000260e7) control_bottom_pane_stacon_t1

0x711b,	// (0x0002611e) grid_app_pane_ParamLimits

0x711b,	// (0x0002611e) grid_app_pane

0x713d,	// (0x00026140) scroll_pane_cp15_ParamLimits

0x713d,	// (0x00026140) scroll_pane_cp15

0x7150,	// (0x00026153) cell_app_pane_ParamLimits

0x7150,	// (0x00026153) cell_app_pane

0x7178,	// (0x0002617b) cell_app_pane_g1_ParamLimits

0x7178,	// (0x0002617b) cell_app_pane_g1

0x371b,	// (0x0002271e) cell_app_pane_g2_ParamLimits

0x371b,	// (0x0002271e) cell_app_pane_g2

0x0001,

0xf6d4,	// (0x0002e6d7) cell_app_pane_g_ParamLimits

0xf6d4,	// (0x0002e6d7) cell_app_pane_g

0x719c,	// (0x0002619f) cell_app_pane_t1_ParamLimits

0x719c,	// (0x0002619f) cell_app_pane_t1

0x3727,	// (0x0002272a) grid_highlight_pane_ParamLimits

0x3727,	// (0x0002272a) grid_highlight_pane

0x1b49,	// (0x00020b4c) cell_highlight_pane_g1

0x1b51,	// (0x00020b54) cell_highlight_pane_g2

0x1b59,	// (0x00020b5c) cell_highlight_pane_g3

0x1b61,	// (0x00020b64) cell_highlight_pane_g4

0x1b69,	// (0x00020b6c) cell_highlight_pane_g5

0x1b71,	// (0x00020b74) cell_highlight_pane_g6

0x1b79,	// (0x00020b7c) cell_highlight_pane_g7

0x1b81,	// (0x00020b84) cell_highlight_pane_g8

0x1b89,	// (0x00020b8c) cell_highlight_pane_g9

0x15f3,	// (0x000205f6) cell_highlight_pane_g10

0x0009,

0xf682,	// (0x0002e685) cell_highlight_pane_g

0x3742,	// (0x00022745) bg_scroll_pane

0x71c6,	// (0x000261c9) scroll_handle_pane

0x379e,	// (0x000227a1) scroll_bg_pane_g1

0x37b3,	// (0x000227b6) scroll_bg_pane_g2

0x37cb,	// (0x000227ce) scroll_bg_pane_g3

0x0002,

0xf6d9,	// (0x0002e6dc) scroll_bg_pane_g

0x71ef,	// (0x000261f2) scroll_handle_focus_pane_ParamLimits

0x71ef,	// (0x000261f2) scroll_handle_focus_pane

0x379e,	// (0x000227a1) scroll_handle_pane_g1

0x37e0,	// (0x000227e3) scroll_handle_pane_g2

0x37cb,	// (0x000227ce) scroll_handle_pane_g3

0x0002,

0xf6e0,	// (0x0002e6e3) scroll_handle_pane_g

0x1b9a,	// (0x00020b9d) bg_popup_sub_pane_cp21_ParamLimits

0x1b9a,	// (0x00020b9d) bg_popup_sub_pane_cp21

0x71fc,	// (0x000261ff) popup_fep_japan_predictive_window_t1_ParamLimits

0x71fc,	// (0x000261ff) popup_fep_japan_predictive_window_t1

0x7216,	// (0x00026219) popup_fep_japan_predictive_window_t2_ParamLimits

0x7216,	// (0x00026219) popup_fep_japan_predictive_window_t2

0x7249,	// (0x0002624c) popup_fep_japan_predictive_window_t3_ParamLimits

0x7249,	// (0x0002624c) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e7,	// (0x0002e6ea) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e7,	// (0x0002e6ea) popup_fep_japan_predictive_window_t

0x15fd,	// (0x00020600) bg_popup_sub_pane_cp23

0x3d2b,	// (0x00022d2e) listscroll_japin_cand_pane

0x37f4,	// (0x000227f7) popup_fep_japan_candidate_window_t1

0x3802,	// (0x00022805) candidate_pane_ParamLimits

0x3802,	// (0x00022805) candidate_pane

0x7280,	// (0x00026283) scroll_pane_cp30

0x3814,	// (0x00022817) list_single_popup_jap_candidate_pane_ParamLimits

0x3814,	// (0x00022817) list_single_popup_jap_candidate_pane

0x15fd,	// (0x00020600) list_highlight_pane_cp30

0x3829,	// (0x0002282c) list_single_popup_jap_candidate_pane_t1

0x3838,	// (0x0002283b) level_1_signal

0x3845,	// (0x00022848) level_2_signal

0x3852,	// (0x00022855) level_3_signal

0x385f,	// (0x00022862) level_4_signal

0x386c,	// (0x0002286f) level_5_signal

0x3879,	// (0x0002287c) level_6_signal

0x3886,	// (0x00022889) level_7_signal

0x3838,	// (0x0002283b) level_1_battery

0x3845,	// (0x00022848) level_2_battery

0x3852,	// (0x00022855) level_3_battery

0x385f,	// (0x00022862) level_4_battery

0x386c,	// (0x0002286f) level_5_battery

0x3879,	// (0x0002287c) level_6_battery

0x3886,	// (0x00022889) level_7_battery

0x38ca,	// (0x000228cd) list_menu_pane_ParamLimits

0x38ca,	// (0x000228cd) list_menu_pane

0x38e0,	// (0x000228e3) scroll_pane_cp25_ParamLimits

0x38e0,	// (0x000228e3) scroll_pane_cp25

0x38f9,	// (0x000228fc) list_double2_graphic_pane_cp2_ParamLimits

0x38f9,	// (0x000228fc) list_double2_graphic_pane_cp2

0x38f9,	// (0x000228fc) list_double2_large_graphic_pane_cp2_ParamLimits

0x38f9,	// (0x000228fc) list_double2_large_graphic_pane_cp2

0x38f9,	// (0x000228fc) list_double2_pane_cp2_ParamLimits

0x38f9,	// (0x000228fc) list_double2_pane_cp2

0x38f9,	// (0x000228fc) list_double_graphic_pane_cp2_ParamLimits

0x38f9,	// (0x000228fc) list_double_graphic_pane_cp2

0x38f9,	// (0x000228fc) list_double_large_graphic_pane_cp2_ParamLimits

0x38f9,	// (0x000228fc) list_double_large_graphic_pane_cp2

0x38f9,	// (0x000228fc) list_double_number_pane_cp2_ParamLimits

0x38f9,	// (0x000228fc) list_double_number_pane_cp2

0x38f9,	// (0x000228fc) list_double_pane_cp2_ParamLimits

0x38f9,	// (0x000228fc) list_double_pane_cp2

0x72bb,	// (0x000262be) list_single_2graphic_pane_cp2_ParamLimits

0x72bb,	// (0x000262be) list_single_2graphic_pane_cp2

0x72bb,	// (0x000262be) list_single_graphic_heading_pane_cp2_ParamLimits

0x72bb,	// (0x000262be) list_single_graphic_heading_pane_cp2

0x72bb,	// (0x000262be) list_single_graphic_pane_cp2_ParamLimits

0x72bb,	// (0x000262be) list_single_graphic_pane_cp2

0x72bb,	// (0x000262be) list_single_heading_pane_cp2_ParamLimits

0x72bb,	// (0x000262be) list_single_heading_pane_cp2

0x3909,	// (0x0002290c) list_single_large_graphic_pane_cp2_ParamLimits

0x3909,	// (0x0002290c) list_single_large_graphic_pane_cp2

0x72bb,	// (0x000262be) list_single_number_heading_pane_cp2_ParamLimits

0x72bb,	// (0x000262be) list_single_number_heading_pane_cp2

0x72bb,	// (0x000262be) list_single_number_pane_cp2_ParamLimits

0x72bb,	// (0x000262be) list_single_number_pane_cp2

0x72bb,	// (0x000262be) list_single_pane_cp2_ParamLimits

0x72bb,	// (0x000262be) list_single_pane_cp2

0x397e,	// (0x00022981) bg_popup_sub_pane_cp22

0x7393,	// (0x00026396) popup_side_volume_key_window_g1

0x73b7,	// (0x000263ba) popup_side_volume_key_window_t1

0x73d3,	// (0x000263d6) volume_small_pane_cp1

0x164b,	// (0x0002064e) bg_popup_sub_pane_cp24_ParamLimits

0x164b,	// (0x0002064e) bg_popup_sub_pane_cp24

0x39ae,	// (0x000229b1) fep_china_uni_candidate_pane_ParamLimits

0x39ae,	// (0x000229b1) fep_china_uni_candidate_pane

0x39c2,	// (0x000229c5) fep_china_uni_entry_pane

0x39d2,	// (0x000229d5) popup_fep_china_uni_window_g1

0x73db,	// (0x000263de) fep_china_uni_entry_pane_g1

0x73e3,	// (0x000263e6) fep_china_uni_entry_pane_g2

0x0001,

0xf718,	// (0x0002e71b) fep_china_uni_entry_pane_g

0x39ee,	// (0x000229f1) fep_entry_item_pane

0x39f8,	// (0x000229fb) fep_candidate_item_pane

0x73eb,	// (0x000263ee) fep_china_uni_candidate_pane_g1

0x3a00,	// (0x00022a03) fep_china_uni_candidate_pane_g2

0x3a08,	// (0x00022a0b) fep_china_uni_candidate_pane_g3

0x73f3,	// (0x000263f6) fep_china_uni_candidate_pane_g4

0x0003,

0xf71d,	// (0x0002e720) fep_china_uni_candidate_pane_g

0x15f3,	// (0x000205f6) fep_entry_item_pane_g1

0x3a10,	// (0x00022a13) fep_entry_item_pane_t1_ParamLimits

0x3a10,	// (0x00022a13) fep_entry_item_pane_t1

0x3a26,	// (0x00022a29) fep_candidate_item_pane_t1_ParamLimits

0x3a26,	// (0x00022a29) fep_candidate_item_pane_t1

0x3a3b,	// (0x00022a3e) fep_candidate_item_pane_t2_ParamLimits

0x3a3b,	// (0x00022a3e) fep_candidate_item_pane_t2

0x0001,

0xf726,	// (0x0002e729) fep_candidate_item_pane_t_ParamLimits

0xf726,	// (0x0002e729) fep_candidate_item_pane_t

0x1659,	// (0x0002065c) list_highlight_pane_cp31_ParamLimits

0x1659,	// (0x0002065c) list_highlight_pane_cp31

0x3a4d,	// (0x00022a50) level_1_signal_lsc

0x3a56,	// (0x00022a59) level_2_signal_lsc

0x3a5f,	// (0x00022a62) level_3_signal_lsc

0x3a68,	// (0x00022a6b) level_4_signal_lsc

0x3a71,	// (0x00022a74) level_5_signal_lsc

0x3a7a,	// (0x00022a7d) level_6_signal_lsc

0x3a83,	// (0x00022a86) level_7_signal_lsc

0x3a83,	// (0x00022a86) level_1_battery_lsc

0x3a8c,	// (0x00022a8f) level_2_battery_lsc

0x3a95,	// (0x00022a98) level_3_battery_lsc

0x3a9e,	// (0x00022aa1) level_4_battery_lsc

0x3aa7,	// (0x00022aaa) level_5_battery_lsc

0x3ab0,	// (0x00022ab3) level_6_battery_lsc

0x3a4d,	// (0x00022a50) level_7_battery_lsc

0x3ab9,	// (0x00022abc) scroll_handle_focus_pane_g1

0x3ac2,	// (0x00022ac5) scroll_handle_focus_pane_g2

0x3acb,	// (0x00022ace) scroll_handle_focus_pane_g3

0x0002,

0xf72b,	// (0x0002e72e) scroll_handle_focus_pane_g

0x5a3b,	// (0x00024a3e) list_single_2graphic_pane_g1_ParamLimits

0x5a3b,	// (0x00024a3e) list_single_2graphic_pane_g1

0x5428,	// (0x0002442b) list_single_2graphic_pane_g2_ParamLimits

0x5428,	// (0x0002442b) list_single_2graphic_pane_g2

0x53ae,	// (0x000243b1) list_single_2graphic_pane_g3_ParamLimits

0x53ae,	// (0x000243b1) list_single_2graphic_pane_g3

0x5a47,	// (0x00024a4a) list_single_2graphic_pane_g4_ParamLimits

0x5a47,	// (0x00024a4a) list_single_2graphic_pane_g4

0x0003,

0xf732,	// (0x0002e735) list_single_2graphic_pane_g_ParamLimits

0xf732,	// (0x0002e735) list_single_2graphic_pane_g

0x5a53,	// (0x00024a56) list_single_2graphic_pane_t1_ParamLimits

0x5a53,	// (0x00024a56) list_single_2graphic_pane_t1

0x5a81,	// (0x00024a84) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5a81,	// (0x00024a84) list_double2_graphic_large_graphic_pane_g1

0x5636,	// (0x00024639) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5636,	// (0x00024639) list_double2_graphic_large_graphic_pane_g2

0x5647,	// (0x0002464a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5647,	// (0x0002464a) list_double2_graphic_large_graphic_pane_g3

0x5a91,	// (0x00024a94) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5a91,	// (0x00024a94) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf73b,	// (0x0002e73e) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf73b,	// (0x0002e73e) list_double2_graphic_large_graphic_pane_g

0x5a9d,	// (0x00024aa0) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5a9d,	// (0x00024aa0) list_double2_graphic_large_graphic_pane_t1

0x5ab3,	// (0x00024ab6) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5ab3,	// (0x00024ab6) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf744,	// (0x0002e747) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf744,	// (0x0002e747) list_double2_graphic_large_graphic_pane_t

0x767a,	// (0x0002667d) popup_fast_swap_window_ParamLimits

0x767a,	// (0x0002667d) popup_fast_swap_window

0x7696,	// (0x00026699) popup_side_volume_key_window

0x76b0,	// (0x000266b3) stacon_top_pane

0x76ba,	// (0x000266bd) status_pane_ParamLimits

0x76ba,	// (0x000266bd) status_pane

0x76c8,	// (0x000266cb) status_small_pane

0x15fd,	// (0x00020600) control_pane

0x15fd,	// (0x00020600) stacon_bottom_pane

0x1a43,	// (0x00020a46) scroll_pane_cp121

0x1a3a,	// (0x00020a3d) set_content_pane

0x73fb,	// (0x000263fe) bg_active_tab_pane_g1_cp1

0x7404,	// (0x00026407) bg_active_tab_pane_g2_cp1

0x740d,	// (0x00026410) bg_active_tab_pane_g3_cp1

0x73fb,	// (0x000263fe) bg_passive_tab_pane_g1_cp1

0x7404,	// (0x00026407) bg_passive_tab_pane_g2_cp1

0x740d,	// (0x00026410) bg_passive_tab_pane_g3_cp1

0x7416,	// (0x00026419) bg_active_tab_pane_g1_cp2

0x7404,	// (0x00026407) bg_active_tab_pane_g2_cp2

0x741f,	// (0x00026422) bg_active_tab_pane_g3_cp2

0x7416,	// (0x00026419) bg_passive_tab_pane_g1_cp2

0x7404,	// (0x00026407) bg_passive_tab_pane_g2_cp2

0x741f,	// (0x00026422) bg_passive_tab_pane_g3_cp2

0x7428,	// (0x0002642b) bg_active_tab_pane_g1_cp3

0x7404,	// (0x00026407) bg_active_tab_pane_g2_cp3

0x7431,	// (0x00026434) bg_active_tab_pane_g3_cp3

0x7428,	// (0x0002642b) bg_passive_tab_pane_g1_cp3

0x7404,	// (0x00026407) bg_passive_tab_pane_g2_cp3

0x7431,	// (0x00026434) bg_passive_tab_pane_g3_cp3

0x743a,	// (0x0002643d) bg_active_tab_pane_g1_cp4

0x7404,	// (0x00026407) bg_active_tab_pane_g2_cp4

0x7445,	// (0x00026448) bg_active_tab_pane_g3_cp4

0x743a,	// (0x0002643d) bg_passive_tab_pane_g1_cp4

0x7404,	// (0x00026407) bg_passive_tab_pane_g2_cp4

0x7445,	// (0x00026448) bg_passive_tab_pane_g3_cp4

0x75cf,	// (0x000265d2) bg_active_tab_pane_g1_cp5

0x7404,	// (0x00026407) bg_active_tab_pane_g2_cp5

0x75d8,	// (0x000265db) bg_active_tab_pane_g3_cp5

0x75cf,	// (0x000265d2) bg_passive_tab_pane_g1_cp5

0x7404,	// (0x00026407) bg_passive_tab_pane_g2_cp5

0x75d8,	// (0x000265db) bg_passive_tab_pane_g3_cp5

0x75e1,	// (0x000265e4) list_set_graphic_pane_ParamLimits

0x75e1,	// (0x000265e4) list_set_graphic_pane

0x15fd,	// (0x00020600) bg_set_opt_pane_cp4

0x75ff,	// (0x00026602) list_set_graphic_pane_g1_ParamLimits

0x75ff,	// (0x00026602) list_set_graphic_pane_g1

0x760b,	// (0x0002660e) list_set_graphic_pane_g2_ParamLimits

0x760b,	// (0x0002660e) list_set_graphic_pane_g2

0x0001,

0xf749,	// (0x0002e74c) list_set_graphic_pane_g_ParamLimits

0xf749,	// (0x0002e74c) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x0002eadf) volume_small_pane_cp_g

0x762d,	// (0x00026630) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x762d,	// (0x00026630) list_double2_large_graphic_pane_g1_cp2

0x7639,	// (0x0002663c) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x7639,	// (0x0002663c) list_double2_large_graphic_pane_g2_cp2

0x764a,	// (0x0002664d) list_double2_large_graphic_pane_g3_cp2

0x7652,	// (0x00026655) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x7652,	// (0x00026655) list_double2_large_graphic_pane_t1_cp2

0x7668,	// (0x0002666b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x7668,	// (0x0002666b) list_double2_large_graphic_pane_t2_cp2

0xad76,	// (0x00029d79) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xad76,	// (0x00029d79) list_double_large_graphic_pane_g1_cp2

0xad87,	// (0x00029d8a) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xad87,	// (0x00029d8a) list_double_large_graphic_pane_g2_cp2

0x77d5,	// (0x000267d8) list_double_large_graphic_pane_g3_cp2

0xad98,	// (0x00029d9b) list_double_large_graphic_pane_g4_cp

0xada0,	// (0x00029da3) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xada0,	// (0x00029da3) list_double_large_graphic_pane_t1_cp2

0xadb7,	// (0x00029dba) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xadb7,	// (0x00029dba) list_double_large_graphic_pane_t2_cp2

0x76d3,	// (0x000266d6) list_double2_graphic_pane_g1_cp2_ParamLimits

0x76d3,	// (0x000266d6) list_double2_graphic_pane_g1_cp2

0x76e1,	// (0x000266e4) list_double2_graphic_pane_g2_cp2_ParamLimits

0x76e1,	// (0x000266e4) list_double2_graphic_pane_g2_cp2

0x76f2,	// (0x000266f5) list_double2_graphic_pane_g3_cp2

0x76fc,	// (0x000266ff) list_double2_graphic_pane_t1_cp2_ParamLimits

0x76fc,	// (0x000266ff) list_double2_graphic_pane_t1_cp2

0x7712,	// (0x00026715) list_double2_graphic_pane_t2_cp2_ParamLimits

0x7712,	// (0x00026715) list_double2_graphic_pane_t2_cp2

0x1da1,	// (0x00020da4) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1da1,	// (0x00020da4) list_single_number_heading_pane_g1_cp2

0x7724,	// (0x00026727) list_single_number_heading_pane_g2_cp2

0x772c,	// (0x0002672f) list_single_number_heading_pane_t1_cp2_ParamLimits

0x772c,	// (0x0002672f) list_single_number_heading_pane_t1_cp2

0x7742,	// (0x00026745) list_single_number_heading_pane_t2_cp2_ParamLimits

0x7742,	// (0x00026745) list_single_number_heading_pane_t2_cp2

0x7754,	// (0x00026757) list_single_number_heading_pane_t3_cp2_ParamLimits

0x7754,	// (0x00026757) list_single_number_heading_pane_t3_cp2

0x1da1,	// (0x00020da4) list_single_heading_pane_g1_cp2_ParamLimits

0x1da1,	// (0x00020da4) list_single_heading_pane_g1_cp2

0x7724,	// (0x00026727) list_single_heading_pane_g2_cp2

0x772c,	// (0x0002672f) list_single_heading_pane_t1_cp2_ParamLimits

0x772c,	// (0x0002672f) list_single_heading_pane_t1_cp2

0xab80,	// (0x00029b83) list_single_heading_pane_t2_cp2_ParamLimits

0xab80,	// (0x00029b83) list_single_heading_pane_t2_cp2

0xaac8,	// (0x00029acb) list_double_graphic_pane_g1_cp2_ParamLimits

0xaac8,	// (0x00029acb) list_double_graphic_pane_g1_cp2

0xaad4,	// (0x00029ad7) list_double_graphic_pane_g2_cp2_ParamLimits

0xaad4,	// (0x00029ad7) list_double_graphic_pane_g2_cp2

0xaae3,	// (0x00029ae6) list_double_graphic_pane_g3_cp2

0xaaeb,	// (0x00029aee) list_double_graphic_pane_t1_cp2_ParamLimits

0xaaeb,	// (0x00029aee) list_double_graphic_pane_t1_cp2

0xab01,	// (0x00029b04) list_double_graphic_pane_t2_cp2_ParamLimits

0xab01,	// (0x00029b04) list_double_graphic_pane_t2_cp2

0x77c9,	// (0x000267cc) list_double_number_pane_g1_cp2_ParamLimits

0x77c9,	// (0x000267cc) list_double_number_pane_g1_cp2

0x77d5,	// (0x000267d8) list_double_number_pane_g2_cp2

0xaa8c,	// (0x00029a8f) list_double_number_pane_t1_cp2_ParamLimits

0xaa8c,	// (0x00029a8f) list_double_number_pane_t1_cp2

0xaaa0,	// (0x00029aa3) list_double_number_pane_t2_cp2_ParamLimits

0xaaa0,	// (0x00029aa3) list_double_number_pane_t2_cp2

0xaab6,	// (0x00029ab9) list_double_number_pane_t3_cp2_ParamLimits

0xaab6,	// (0x00029ab9) list_double_number_pane_t3_cp2

0xa975,	// (0x00029978) list_single_graphic_pane_g1_cp2_ParamLimits

0xa975,	// (0x00029978) list_single_graphic_pane_g1_cp2

0x782d,	// (0x00026830) list_single_graphic_pane_g2_cp2_ParamLimits

0x782d,	// (0x00026830) list_single_graphic_pane_g2_cp2

0x7839,	// (0x0002683c) list_single_graphic_pane_g3_cp2

0xa94b,	// (0x0002994e) list_single_graphic_pane_t1_cp2_ParamLimits

0xa94b,	// (0x0002994e) list_single_graphic_pane_t1_cp2

0x782d,	// (0x00026830) list_single_number_pane_g1_cp2_ParamLimits

0x782d,	// (0x00026830) list_single_number_pane_g1_cp2

0x7839,	// (0x0002683c) list_single_number_pane_g2_cp2

0xa94b,	// (0x0002994e) list_single_number_pane_t1_cp2_ParamLimits

0xa94b,	// (0x0002994e) list_single_number_pane_t1_cp2

0xa961,	// (0x00029964) list_single_number_pane_t2_cp2_ParamLimits

0xa961,	// (0x00029964) list_single_number_pane_t2_cp2

0x7639,	// (0x0002663c) list_double2_pane_g1_cp2_ParamLimits

0x7639,	// (0x0002663c) list_double2_pane_g1_cp2

0x764a,	// (0x0002664d) list_double2_pane_g2_cp2

0x77a1,	// (0x000267a4) list_double2_pane_t1_cp2_ParamLimits

0x77a1,	// (0x000267a4) list_double2_pane_t1_cp2

0x77b7,	// (0x000267ba) list_double2_pane_t2_cp2_ParamLimits

0x77b7,	// (0x000267ba) list_double2_pane_t2_cp2

0x77c9,	// (0x000267cc) list_double_pane_g1_cp2_ParamLimits

0x77c9,	// (0x000267cc) list_double_pane_g1_cp2

0x77d5,	// (0x000267d8) list_double_pane_g2_cp2

0x77dd,	// (0x000267e0) list_double_pane_t1_cp2_ParamLimits

0x77dd,	// (0x000267e0) list_double_pane_t1_cp2

0x77f3,	// (0x000267f6) list_double_pane_t2_cp2_ParamLimits

0x77f3,	// (0x000267f6) list_double_pane_t2_cp2

0x781d,	// (0x00026820) list_single_pane_cp2_g3

0x782d,	// (0x00026830) list_single_pane_g1_cp2_ParamLimits

0x782d,	// (0x00026830) list_single_pane_g1_cp2

0x7839,	// (0x0002683c) list_single_pane_g2_cp2

0x7841,	// (0x00026844) list_single_pane_t1_cp2_ParamLimits

0x7841,	// (0x00026844) list_single_pane_t1_cp2

0x7859,	// (0x0002685c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x7859,	// (0x0002685c) list_single_large_graphic_pane_g1_cp2

0x7865,	// (0x00026868) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x7865,	// (0x00026868) list_single_large_graphic_pane_g2_cp2

0x7871,	// (0x00026874) list_single_large_graphic_pane_g3_cp2

0x7879,	// (0x0002687c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x7879,	// (0x0002687c) list_single_large_graphic_pane_g4_cp1

0x7893,	// (0x00026896) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x7893,	// (0x00026896) list_single_large_graphic_pane_t1_cp2

0xa917,	// (0x0002991a) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa917,	// (0x0002991a) list_single_graphic_heading_pane_g1_cp2

0xa8e4,	// (0x000298e7) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa8e4,	// (0x000298e7) list_single_graphic_heading_pane_g4_cp2

0x7839,	// (0x0002683c) list_single_graphic_heading_pane_g5_cp2

0xa923,	// (0x00029926) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa923,	// (0x00029926) list_single_graphic_heading_pane_t1_cp2

0xa939,	// (0x0002993c) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa939,	// (0x0002993c) list_single_graphic_heading_pane_t2_cp2

0xa8d8,	// (0x000298db) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa8d8,	// (0x000298db) list_single_2graphic_pane_g1_cp2

0xa8e4,	// (0x000298e7) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa8e4,	// (0x000298e7) list_single_2graphic_pane_g2_cp2

0x7839,	// (0x0002683c) list_single_2graphic_pane_g3_cp2

0xa8f5,	// (0x000298f8) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa8f5,	// (0x000298f8) list_single_2graphic_pane_g4_cp2

0xa901,	// (0x00029904) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa901,	// (0x00029904) list_single_2graphic_pane_t1_cp2

0x15f3,	// (0x000205f6) list_highlight_pane_g10_cp1

0xa4c0,	// (0x000294c3) list_highlight_pane_g1_cp1

0xa4c8,	// (0x000294cb) list_highlight_pane_g2_cp1

0xa4d0,	// (0x000294d3) list_highlight_pane_g3_cp1

0xa4d8,	// (0x000294db) list_highlight_pane_g4_cp1

0xa4e0,	// (0x000294e3) list_highlight_pane_g5_cp1

0xa4e8,	// (0x000294eb) list_highlight_pane_g6_cp1

0xa4f0,	// (0x000294f3) list_highlight_pane_g7_cp1

0xa4f8,	// (0x000294fb) list_highlight_pane_g8_cp1

0xa500,	// (0x00029503) list_highlight_pane_g9_cp1

0xa3e8,	// (0x000293eb) form_field_slider_pane_t3

0xa3f6,	// (0x000293f9) form_field_slider_pane_t4

0xa404,	// (0x00029407) slider_form_pane_ParamLimits

0xa404,	// (0x00029407) slider_form_pane

0x15fd,	// (0x00020600) control_abbreviations

0x15fd,	// (0x00020600) control_conventions

0x15fd,	// (0x00020600) control_definitions

0x15fd,	// (0x00020600) format_table_attribute

0xabca,	// (0x00029bcd) bg_popup_preview_window_pane_g9

0x15fd,	// (0x00020600) format_table_data2

0x15fd,	// (0x00020600) format_table_data3

0x15fd,	// (0x00020600) format_table_data_example

0x0008,

0x15fd,	// (0x00020600) intro_purpose

0xf8e0,	// (0x0002e8e3) bg_popup_preview_window_pane_g

0x15fd,	// (0x00020600) texts_category

0x15fd,	// (0x00020600) texts_graphics

0x78a9,	// (0x000268ac) text_digital

0x78b8,	// (0x000268bb) text_primary

0x78c7,	// (0x000268ca) text_primary_small

0x78d6,	// (0x000268d9) text_secondary

0x78e5,	// (0x000268e8) text_title

0xb2f7,	// (0x0002a2fa) bg_passive_tab_pane_g1_cp3_srt

0x7404,	// (0x00026407) bg_passive_tab_pane_g2_cp3_srt

0xb300,	// (0x0002a303) bg_passive_tab_pane_g3_cp3_srt

0x1659,	// (0x0002065c) bg_active_tab_pane_cp3_srt_ParamLimits

0x1659,	// (0x0002065c) bg_active_tab_pane_cp3_srt

0xb309,	// (0x0002a30c) tabs_4_active_pane_srt_g1

0xb311,	// (0x0002a314) tabs_4_active_pane_srt_t1_ParamLimits

0xb311,	// (0x0002a314) tabs_4_active_pane_srt_t1

0xb2f7,	// (0x0002a2fa) bg_active_tab_pane_g1_cp3_copy1

0x7404,	// (0x00026407) bg_active_tab_pane_g2_cp3_copy1

0xb300,	// (0x0002a303) bg_active_tab_pane_g3_cp3_copy1

0x1659,	// (0x0002065c) tabs_2_long_active_pane_srt_ParamLimits

0x1659,	// (0x0002065c) tabs_2_long_active_pane_srt

0x1659,	// (0x0002065c) tabs_2_long_passive_pane_srt_ParamLimits

0x1659,	// (0x0002065c) tabs_2_long_passive_pane_srt

0x6f59,	// (0x00025f5c) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6f59,	// (0x00025f5c) bg_passive_tab_pane_cp4_srt

0xafeb,	// (0x00029fee) bg_passive_tab_pane_g1_cp4_srt

0x7404,	// (0x00026407) bg_passive_tab_pane_g2_cp4_srt

0xaff4,	// (0x00029ff7) bg_passive_tab_pane_g3_cp4_srt

0x1dad,	// (0x00020db0) bg_active_tab_pane_cp4_srt_ParamLimits

0x1dad,	// (0x00020db0) bg_active_tab_pane_cp4_srt

0xaffd,	// (0x0002a000) tabs_2_long_active_pane_srt_t1_ParamLimits

0xaffd,	// (0x0002a000) tabs_2_long_active_pane_srt_t1

0xafeb,	// (0x00029fee) bg_active_tab_pane_g1_cp4_srt

0x7404,	// (0x00026407) bg_active_tab_pane_g2_cp4_srt

0xaff4,	// (0x00029ff7) bg_active_tab_pane_g3_cp4_srt

0x164b,	// (0x0002064e) tabs_3_long_active_pane_srt_ParamLimits

0x164b,	// (0x0002064e) tabs_3_long_active_pane_srt

0x164b,	// (0x0002064e) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x164b,	// (0x0002064e) tabs_3_long_passive_pane_cp_srt

0x164b,	// (0x0002064e) tabs_3_long_passive_pane_srt_ParamLimits

0x164b,	// (0x0002064e) tabs_3_long_passive_pane_srt

0x6f59,	// (0x00025f5c) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6f59,	// (0x00025f5c) bg_passive_tab_pane_cp5_srt

0x75cf,	// (0x000265d2) bg_passive_tab_pane_g1_cp5_srt

0x7404,	// (0x00026407) bg_passive_tab_pane_g2_cp5_srt

0x75d8,	// (0x000265db) bg_passive_tab_pane_g3_cp5_srt

0x1dad,	// (0x00020db0) bg_active_tab_pane_cp5_srt_ParamLimits

0x1dad,	// (0x00020db0) bg_active_tab_pane_cp5_srt

0xafd9,	// (0x00029fdc) tabs_3_long_active_pane_srt_t1_ParamLimits

0xafd9,	// (0x00029fdc) tabs_3_long_active_pane_srt_t1

0x75cf,	// (0x000265d2) bg_active_tab_pane_g1_cp5_srt

0x7404,	// (0x00026407) bg_active_tab_pane_g2_cp5_srt

0x75d8,	// (0x000265db) bg_active_tab_pane_g3_cp5_srt

0xafcb,	// (0x00029fce) navi_text_pane_srt_t1

0xafc3,	// (0x00029fc6) navi_icon_pane_srt_g1

0x7b5f,	// (0x00026b62) midp_editing_number_pane_srt

0x78f4,	// (0x000268f7) midp_ticker_pane_srt

0x7b67,	// (0x00026b6a) midp_ticker_pane_srt_g1

0x7b6f,	// (0x00026b72) midp_ticker_pane_srt_g2

0x0001,

0xf768,	// (0x0002e76b) midp_ticker_pane_srt_g

0x7b77,	// (0x00026b7a) midp_ticker_pane_srt_t1

0xafb4,	// (0x00029fb7) midp_editing_number_pane_t1_copy1

0x78fc,	// (0x000268ff) listscroll_midp_pane

0x78fc,	// (0x000268ff) midp_form_pane

0x796e,	// (0x00026971) midp_info_popup_window_ParamLimits

0x796e,	// (0x00026971) midp_info_popup_window

0x1b9a,	// (0x00020b9d) bg_popup_sub_pane_cp50_ParamLimits

0x1b9a,	// (0x00020b9d) bg_popup_sub_pane_cp50

0xa0fc,	// (0x000290ff) listscroll_midp_info_pane_ParamLimits

0xa0fc,	// (0x000290ff) listscroll_midp_info_pane

0xa0dc,	// (0x000290df) listscroll_form_midp_pane_ParamLimits

0xa0dc,	// (0x000290df) listscroll_form_midp_pane

0xa0e8,	// (0x000290eb) scroll_bar_cp050

0xa0bc,	// (0x000290bf) list_midp_pane

0xbd2e,	// (0x0002ad31) signal_pane_g2_cp

0x9ff6,	// (0x00028ff9) listscroll_midp_info_pane_t1_ParamLimits

0x9ff6,	// (0x00028ff9) listscroll_midp_info_pane_t1

0xa00e,	// (0x00029011) listscroll_midp_info_pane_t2_ParamLimits

0xa00e,	// (0x00029011) listscroll_midp_info_pane_t2

0xa04c,	// (0x0002904f) listscroll_midp_info_pane_t3_ParamLimits

0xa04c,	// (0x0002904f) listscroll_midp_info_pane_t3

0xa086,	// (0x00029089) listscroll_midp_info_pane_t4_ParamLimits

0xa086,	// (0x00029089) listscroll_midp_info_pane_t4

0x0003,

0xf81b,	// (0x0002e81e) listscroll_midp_info_pane_t_ParamLimits

0xf81b,	// (0x0002e81e) listscroll_midp_info_pane_t

0x1c10,	// (0x00020c13) scroll_pane_cp21

0x9f96,	// (0x00028f99) form_midp_field_choice_group_pane

0x9f9f,	// (0x00028fa2) form_midp_field_text_pane

0x9fdc,	// (0x00028fdf) form_midp_field_time_pane

0x9fe4,	// (0x00028fe7) form_midp_gauge_slider_pane

0x9fed,	// (0x00028ff0) form_midp_gauge_wait_pane

0x15fd,	// (0x00020600) form_midp_image_pane

0x5c20,	// (0x00024c23) list_single_midp_pane_ParamLimits

0x5c20,	// (0x00024c23) list_single_midp_pane

0x9f4b,	// (0x00028f4e) form_midp_field_text_pane_t1

0x9d15,	// (0x00028d18) input_focus_pane_cp050

0x9f85,	// (0x00028f88) list_midp_form_text_pane

0x9f1a,	// (0x00028f1d) form_midp_field_choice_group_pane_t1

0x9f28,	// (0x00028f2b) input_focus_pane_cp051

0x9f3c,	// (0x00028f3f) list_midp_choice_pane

0x15fd,	// (0x00020600) status_idle_pane

0x9efe,	// (0x00028f01) form_midp_field_time_pane_t1

0x15f3,	// (0x000205f6) wait_anim_pane_g2_copy1

0x9f0c,	// (0x00028f0f) form_midp_field_time_pane_t2

0x0001,

0x7a1e,	// (0x00026a21) aid_navinavi_width_2_pane

0xf816,	// (0x0002e819) form_midp_field_time_pane_t

0x15fd,	// (0x00020600) input_focus_pane_cp052

0x15fd,	// (0x00020600) bg_input_focus_pane_cp040

0x9ebe,	// (0x00028ec1) form_midp_gauge_slider_pane_t1

0x9ecc,	// (0x00028ecf) form_midp_gauge_slider_pane_t2

0x9eda,	// (0x00028edd) form_midp_gauge_slider_pane_t3

0x9ee8,	// (0x00028eeb) form_midp_gauge_slider_pane_t4

0x0003,

0xf80d,	// (0x0002e810) form_midp_gauge_slider_pane_t

0x9ef6,	// (0x00028ef9) form_midp_slider_pane

0x1659,	// (0x0002065c) bg_input_focus_pane_cp041_ParamLimits

0x1659,	// (0x0002065c) bg_input_focus_pane_cp041

0x9e8b,	// (0x00028e8e) form_midp_gauge_wait_pane_t1_ParamLimits

0x9e8b,	// (0x00028e8e) form_midp_gauge_wait_pane_t1

0x9e9d,	// (0x00028ea0) form_midp_gauge_wait_pane_t2_ParamLimits

0x9e9d,	// (0x00028ea0) form_midp_gauge_wait_pane_t2

0x0001,

0xf808,	// (0x0002e80b) form_midp_gauge_wait_pane_t_ParamLimits

0xf808,	// (0x0002e80b) form_midp_gauge_wait_pane_t

0x9eaf,	// (0x00028eb2) form_midp_wait_pane_ParamLimits

0x9eaf,	// (0x00028eb2) form_midp_wait_pane

0x9e55,	// (0x00028e58) form_midp_image_pane_g1

0x9e5e,	// (0x00028e61) form_midp_image_pane_t1

0x9e6d,	// (0x00028e70) form_midp_image_pane_t2

0x9e7c,	// (0x00028e7f) form_midp_image_pane_t3

0x0002,

0xf801,	// (0x0002e804) form_midp_image_pane_t

0x9e4c,	// (0x00028e4f) list_single_midp_pane_g1

0x5c11,	// (0x00024c14) list_single_midp_pane_t1

0x9e23,	// (0x00028e26) list_midp_form_item_pane_ParamLimits

0x9e23,	// (0x00028e26) list_midp_form_item_pane

0x79c6,	// (0x000269c9) list_midp_form_item_pane_t1

0x79d5,	// (0x000269d8) midp_ticker_pane_g1

0x79e1,	// (0x000269e4) midp_ticker_pane_g2

0x0001,

0xf74e,	// (0x0002e751) midp_ticker_pane_g

0x79ed,	// (0x000269f0) midp_ticker_pane_t1

0xb201,	// (0x0002a204) midp_editing_number_pane_t1

0xb1df,	// (0x0002a1e2) midp_editing_number_pane

0xb1ee,	// (0x0002a1f1) midp_ticker_pane

0xafa4,	// (0x00029fa7) ai_message_heading_pane

0x15fd,	// (0x00020600) bg_popup_window_pane_cp14

0xafac,	// (0x00029faf) listscroll_ai_message_pane

0xaf2e,	// (0x00029f31) ai_message_heading_pane_g1_ParamLimits

0xaf2e,	// (0x00029f31) ai_message_heading_pane_g1

0xaf3a,	// (0x00029f3d) ai_message_heading_pane_g2_ParamLimits

0xaf3a,	// (0x00029f3d) ai_message_heading_pane_g2

0xaf46,	// (0x00029f49) ai_message_heading_pane_g3_ParamLimits

0xaf46,	// (0x00029f49) ai_message_heading_pane_g3

0xaf52,	// (0x00029f55) ai_message_heading_pane_g4_ParamLimits

0xaf52,	// (0x00029f55) ai_message_heading_pane_g4

0x0003,

0xf942,	// (0x0002e945) ai_message_heading_pane_g_ParamLimits

0xf942,	// (0x0002e945) ai_message_heading_pane_g

0xaf5e,	// (0x00029f61) ai_message_heading_pane_t1_ParamLimits

0xaf5e,	// (0x00029f61) ai_message_heading_pane_t1

0xaf78,	// (0x00029f7b) ai_message_heading_pane_t2_ParamLimits

0xaf78,	// (0x00029f7b) ai_message_heading_pane_t2

0x0001,

0xf94b,	// (0x0002e94e) ai_message_heading_pane_t_ParamLimits

0xf94b,	// (0x0002e94e) ai_message_heading_pane_t

0xaf8a,	// (0x00029f8d) bg_popup_heading_pane_cp1_ParamLimits

0xaf8a,	// (0x00029f8d) bg_popup_heading_pane_cp1

0xaf1c,	// (0x00029f1f) list_ai_message_pane_ParamLimits

0xaf1c,	// (0x00029f1f) list_ai_message_pane

0x1c10,	// (0x00020c13) scroll_pane_cp10

0xaeb8,	// (0x00029ebb) list_ai_message_pane_g1

0xaec0,	// (0x00029ec3) list_ai_message_pane_g2

0x0001,

0xf91f,	// (0x0002e922) list_ai_message_pane_g

0xaec8,	// (0x00029ecb) list_ai_message_pane_t1_ParamLimits

0xaec8,	// (0x00029ecb) list_ai_message_pane_t1

0xaedd,	// (0x00029ee0) list_ai_message_pane_t2_ParamLimits

0xaedd,	// (0x00029ee0) list_ai_message_pane_t2

0xaef2,	// (0x00029ef5) list_ai_message_pane_t3_ParamLimits

0xaef2,	// (0x00029ef5) list_ai_message_pane_t3

0xaf07,	// (0x00029f0a) list_ai_message_pane_t4_ParamLimits

0xaf07,	// (0x00029f0a) list_ai_message_pane_t4

0x0003,

0xf924,	// (0x0002e927) list_ai_message_pane_t_ParamLimits

0xf924,	// (0x0002e927) list_ai_message_pane_t

0xaea3,	// (0x00029ea6) cell_ai_soft_ind_pane_ParamLimits

0xaea3,	// (0x00029ea6) cell_ai_soft_ind_pane

0x79ff,	// (0x00026a02) cell_ai_soft_ind_pane_g1_ParamLimits

0x79ff,	// (0x00026a02) cell_ai_soft_ind_pane_g1

0x15fd,	// (0x00020600) grid_highlight_cp1

0x7a0c,	// (0x00026a0f) text_secondary_cp56_ParamLimits

0x7a0c,	// (0x00026a0f) text_secondary_cp56

0xae78,	// (0x00029e7b) example_general_pane_ParamLimits

0xae78,	// (0x00029e7b) example_general_pane

0xae84,	// (0x00029e87) example_parent_pane_g1_ParamLimits

0xae84,	// (0x00029e87) example_parent_pane_g1

0xae90,	// (0x00029e93) example_parent_pane_t1_ParamLimits

0xae90,	// (0x00029e93) example_parent_pane_t1

0x81da,	// (0x000271dd) popup_preview_text_window_ParamLimits

0x81da,	// (0x000271dd) popup_preview_text_window

0x7825,	// (0x00026828) list_single_pane_cp2_g4

0x1845,	// (0x00020848) bg_popup_preview_window_pane_ParamLimits

0x1845,	// (0x00020848) bg_popup_preview_window_pane

0xabd2,	// (0x00029bd5) popup_preview_text_window_t1_ParamLimits

0xabd2,	// (0x00029bd5) popup_preview_text_window_t1

0xabf0,	// (0x00029bf3) popup_preview_text_window_t2_ParamLimits

0xabf0,	// (0x00029bf3) popup_preview_text_window_t2

0xac39,	// (0x00029c3c) popup_preview_text_window_t3_ParamLimits

0xac39,	// (0x00029c3c) popup_preview_text_window_t3

0xac7e,	// (0x00029c81) popup_preview_text_window_t4_ParamLimits

0xac7e,	// (0x00029c81) popup_preview_text_window_t4

0x0004,

0xf8f3,	// (0x0002e8f6) popup_preview_text_window_t_ParamLimits

0xf8f3,	// (0x0002e8f6) popup_preview_text_window_t

0xacfc,	// (0x00029cff) scroll_pane_cp11

0x8925,	// (0x00027928) bg_popup_preview_window_pane_g1

0xab92,	// (0x00029b95) bg_popup_preview_window_pane_g2

0xab9a,	// (0x00029b9d) bg_popup_preview_window_pane_g3

0xaba2,	// (0x00029ba5) bg_popup_preview_window_pane_g4

0xabaa,	// (0x00029bad) bg_popup_preview_window_pane_g5

0xabb2,	// (0x00029bb5) bg_popup_preview_window_pane_g6

0xabba,	// (0x00029bbd) bg_popup_preview_window_pane_g7

0xabc2,	// (0x00029bc5) bg_popup_preview_window_pane_g8

0x64ee,	// (0x000254f1) aid_popup_width_pane

0x81b8,	// (0x000271bb) popup_midp_note_alarm_window_ParamLimits

0x81b8,	// (0x000271bb) popup_midp_note_alarm_window

0x1a77,	// (0x00020a7a) data_form_pane_ParamLimits

0x588e,	// (0x00024891) form_field_data_pane_g1

0x5898,	// (0x0002489b) form_field_data_pane_t1_ParamLimits

0x1a83,	// (0x00020a86) input_focus_pane_ParamLimits

0x58b0,	// (0x000248b3) data_form_wide_pane_ParamLimits

0x58c1,	// (0x000248c4) form_field_data_wide_pane_g1

0x58cd,	// (0x000248d0) form_field_data_wide_pane_t1_ParamLimits

0x1919,	// (0x0002091c) input_focus_pane_cp6_ParamLimits

0x6efd,	// (0x00025f00) input_popup_find_pane_g1_ParamLimits

0x6efd,	// (0x00025f00) input_popup_find_pane_g1

0x708f,	// (0x00026092) aid_navi_side_left_pane

0x70a4,	// (0x000260a7) aid_navi_side_right_pane

0xa5bb,	// (0x000295be) bg_popup_window_pane_cp30_ParamLimits

0xa5bb,	// (0x000295be) bg_popup_window_pane_cp30

0xa635,	// (0x00029638) popup_midp_note_alarm_window_g1_ParamLimits

0xa635,	// (0x00029638) popup_midp_note_alarm_window_g1

0xa665,	// (0x00029668) popup_midp_note_alarm_window_t1_ParamLimits

0xa665,	// (0x00029668) popup_midp_note_alarm_window_t1

0xa706,	// (0x00029709) popup_midp_note_alarm_window_t2_ParamLimits

0xa706,	// (0x00029709) popup_midp_note_alarm_window_t2

0xa7b4,	// (0x000297b7) popup_midp_note_alarm_window_t3_ParamLimits

0xa7b4,	// (0x000297b7) popup_midp_note_alarm_window_t3

0xa7dc,	// (0x000297df) popup_midp_note_alarm_window_t4_ParamLimits

0xa7dc,	// (0x000297df) popup_midp_note_alarm_window_t4

0xa7fc,	// (0x000297ff) popup_midp_note_alarm_window_t5_ParamLimits

0xa7fc,	// (0x000297ff) popup_midp_note_alarm_window_t5

0x000a,

0xf890,	// (0x0002e893) popup_midp_note_alarm_window_t_ParamLimits

0xf890,	// (0x0002e893) popup_midp_note_alarm_window_t

0xa8a8,	// (0x000298ab) wait_bar_pane_cp1_ParamLimits

0xa8a8,	// (0x000298ab) wait_bar_pane_cp1

0x15fd,	// (0x00020600) wait_anim_pane_copy1

0x15fd,	// (0x00020600) wait_border_pane_copy1

0xa2b1,	// (0x000292b4) wait_border_pane_g1_copy1

0x58e7,	// (0x000248ea) form_field_popup_pane_g1

0x58ef,	// (0x000248f2) form_field_popup_pane_t1_ParamLimits

0x1a83,	// (0x00020a86) input_focus_pane_cp7_ParamLimits

0x1af0,	// (0x00020af3) list_form_pane_ParamLimits

0x5907,	// (0x0002490a) form_field_popup_wide_pane_g1

0x590f,	// (0x00024912) form_field_popup_wide_pane_t1_ParamLimits

0x1a83,	// (0x00020a86) input_focus_pane_cp8_ParamLimits

0x1b19,	// (0x00020b1c) list_form_wide_pane_ParamLimits

0xb38b,	// (0x0002a38e) aid_size_cell_graphic_pane

0x5999,	// (0x0002499c) data_form_pane_t1_ParamLimits

0x5c65,	// (0x00024c68) data_form_wide_pane_t1_ParamLimits

0x84bf,	// (0x000274c2) bg_status_flat_pane

0x68ed,	// (0x000258f0) title_pane_t1_ParamLimits

0x1613,	// (0x00020616) title_pane_t2_ParamLimits

0x1639,	// (0x0002063c) title_pane_t3_ParamLimits

0xf557,	// (0x0002e55a) title_pane_t_ParamLimits

0x3838,	// (0x0002283b) level_1_signal_ParamLimits

0x3845,	// (0x00022848) level_2_signal_ParamLimits

0x3852,	// (0x00022855) level_3_signal_ParamLimits

0x385f,	// (0x00022862) level_4_signal_ParamLimits

0x386c,	// (0x0002286f) level_5_signal_ParamLimits

0x3879,	// (0x0002287c) level_6_signal_ParamLimits

0x3886,	// (0x00022889) level_7_signal_ParamLimits

0x3838,	// (0x0002283b) level_1_battery_ParamLimits

0x3845,	// (0x00022848) level_2_battery_ParamLimits

0x3852,	// (0x00022855) level_3_battery_ParamLimits

0x385f,	// (0x00022862) level_4_battery_ParamLimits

0x386c,	// (0x0002286f) level_5_battery_ParamLimits

0x3879,	// (0x0002287c) level_6_battery_ParamLimits

0x3886,	// (0x00022889) level_7_battery_ParamLimits

0xa4c0,	// (0x000294c3) bg_status_flat_pane_g1

0xa4c8,	// (0x000294cb) bg_status_flat_pane_g2

0xa4d0,	// (0x000294d3) bg_status_flat_pane_g3

0xa4d8,	// (0x000294db) bg_status_flat_pane_g4

0xa4e0,	// (0x000294e3) bg_status_flat_pane_g5

0xa4e8,	// (0x000294eb) bg_status_flat_pane_g6

0xa4f0,	// (0x000294f3) bg_status_flat_pane_g7

0x695d,	// (0x00025960) tabs_3_active_pane_t1_ParamLimits

0x695d,	// (0x00025960) tabs_3_passive_pane_t1_ParamLimits

0x6977,	// (0x0002597a) tabs_4_active_pane_t1_ParamLimits

0x6977,	// (0x0002597a) tabs_4_1_passive_pane_t1_ParamLimits

0x6f34,	// (0x00025f37) tabs_2_active_pane_t1_ParamLimits

0x6f34,	// (0x00025f37) tabs_2_passive_pane_t1_ParamLimits

0x1dad,	// (0x00020db0) bg_active_tab_pane_cp4_ParamLimits

0x6f46,	// (0x00025f49) tabs_2_long_active_pane_t1_ParamLimits

0x6f59,	// (0x00025f5c) bg_passive_tab_pane_cp4_ParamLimits

0x89ba,	// (0x000279bd) list_single_midp_graphic_pane_t1_ParamLimits

0x1dad,	// (0x00020db0) bg_active_tab_pane_cp5_ParamLimits

0x6f65,	// (0x00025f68) tabs_3_long_active_pane_t1_ParamLimits

0x6f59,	// (0x00025f5c) bg_passive_tab_pane_cp5_ParamLimits

0x89ba,	// (0x000279bd) list_single_midp_graphic_pane_t1

0x84bf,	// (0x000274c2) bg_status_flat_pane_ParamLimits

0x8588,	// (0x0002758b) indicator_pane_cp2_ParamLimits

0x8588,	// (0x0002758b) indicator_pane_cp2

0x86b3,	// (0x000276b6) navi_pane_srt_ParamLimits

0x86b3,	// (0x000276b6) navi_pane_srt

0x86d7,	// (0x000276da) popup_clock_digital_analogue_window_cp1

0x16b7,	// (0x000206ba) indicator_pane_t1

0x78f4,	// (0x000268f7) copy_highlight_pane

0x78f4,	// (0x000268f7) cursor_graphics_pane

0x78f4,	// (0x000268f7) graphic_within_text_pane

0x78f4,	// (0x000268f7) link_highlight_pane

0xacbf,	// (0x00029cc2) popup_preview_text_window_t5_ParamLimits

0xacbf,	// (0x00029cc2) popup_preview_text_window_t5

0x7a26,	// (0x00026a29) cursor_digital_pane

0x7a26,	// (0x00026a29) cursor_primary_pane

0x7a37,	// (0x00026a3a) cursor_primary_small_pane

0x7a3f,	// (0x00026a42) cursor_secondary_pane

0x7a47,	// (0x00026a4a) cursor_title_pane

0x7a26,	// (0x00026a29) link_highlight_digital_pane

0x7a2e,	// (0x00026a31) link_highlight_primary_pane

0x7a37,	// (0x00026a3a) link_highlight_primary_small_pane

0x7a3f,	// (0x00026a42) link_highlight_secondary_pane

0x7a47,	// (0x00026a4a) link_highlight_title_pane

0x7a26,	// (0x00026a29) copy_highlight_digital_pane

0x7a26,	// (0x00026a29) copy_highlight_primary_pane

0x7a37,	// (0x00026a3a) copy_highlight_primary_small_pane

0x7a3f,	// (0x00026a42) copy_highlight_secondary_pane

0x7a47,	// (0x00026a4a) copy_highlight_title_pane

0x7a3f,	// (0x00026a42) graphic_text_digital_pane

0xa55e,	// (0x00029561) graphic_text_primary_pane

0xa567,	// (0x0002956a) graphic_text_primary_small_pane

0x7a37,	// (0x00026a3a) graphic_text_secondary_pane

0x7a26,	// (0x00026a29) graphic_text_title_pane

0x7a4f,	// (0x00026a52) cursor_primary_pane_g1

0xa550,	// (0x00029553) cursor_text_primary_t1

0xa538,	// (0x0002953b) cursor_primary_small_pane_g1

0xa542,	// (0x00029545) cursor_text_primary_small_t1

0xa520,	// (0x00029523) cursor_primary_small_pane_g1_copy1

0xa52a,	// (0x0002952d) cursor_text_primary_small_t1_copy1

0xa508,	// (0x0002950b) cursor_text_title_t1

0xa516,	// (0x00029519) cursor_title_pane_g1

0x7a4f,	// (0x00026a52) cursor_digital_pane_g1

0x7a59,	// (0x00026a5c) cursor_text_digital_t1

0x7a67,	// (0x00026a6a) link_highlight_primary_pane_g1

0xa4b1,	// (0x000294b4) link_highlight_primary_pane_t1

0x7a67,	// (0x00026a6a) link_highlight_primary_small_pane_g1

0x7a6f,	// (0x00026a72) link_highlight_primary_small_pane_t1

0x7a67,	// (0x00026a6a) link_highlight_secondary_pane_g1

0x7a7e,	// (0x00026a81) link_highlight_secondary_pane_t1

0xa416,	// (0x00029419) link_highlight_title_pane_g1

0xa42d,	// (0x00029430) link_highlight_title_pane_t1

0xa416,	// (0x00029419) link_highlight_digital_pane_g1

0xa41e,	// (0x00029421) link_highlight_digital_pane_t1

0xa2d0,	// (0x000292d3) copy_highlight_primary_pane_g1

0xa2f6,	// (0x000292f9) copy_highlight_primary_pane_t1

0xa2d0,	// (0x000292d3) copy_highlight_primary_small_pane_g1

0xa2e7,	// (0x000292ea) copy_highlight_primary_small_pane_t1

0x7a8d,	// (0x00026a90) copy_highlight_secondary_pane_g1

0x7a95,	// (0x00026a98) copy_highlight_secondary_pane_t1

0xa2d0,	// (0x000292d3) copy_highlight_title_pane_g1

0xa2d8,	// (0x000292db) copy_highlight_title_pane_t1

0xa2d0,	// (0x000292d3) copy_highlight_digital_pane_g1

0xb559,	// (0x0002a55c) copy_highlight_digital_pane_t1

0xb4ad,	// (0x0002a4b0) graphic_text_primary_pane_g1

0xb53d,	// (0x0002a540) graphic_text_primary_pane_t1

0xb54b,	// (0x0002a54e) graphic_text_primary_pane_t2

0x0001,

0xf9bf,	// (0x0002e9c2) graphic_text_primary_pane_t

0xb519,	// (0x0002a51c) graphic_text_primary_small_pane_g1

0xb521,	// (0x0002a524) graphic_text_primary_small_pane_t1

0xb52f,	// (0x0002a532) graphic_text_primary_small_pane_t2

0x0001,

0xf9ba,	// (0x0002e9bd) graphic_text_primary_small_pane_t

0xb4f5,	// (0x0002a4f8) graphic_text_secondary_pane_g1

0xb4fd,	// (0x0002a500) graphic_text_secondary_pane_t1

0xb50b,	// (0x0002a50e) graphic_text_secondary_pane_t2

0x0001,

0xf9b5,	// (0x0002e9b8) graphic_text_secondary_pane_t

0xb4d1,	// (0x0002a4d4) graphic_text_title_pane_g1

0xb4d9,	// (0x0002a4dc) graphic_text_title_pane_t1

0xb4e7,	// (0x0002a4ea) graphic_text_title_pane_t2

0x0001,

0xf9b0,	// (0x0002e9b3) graphic_text_title_pane_t

0xb4ad,	// (0x0002a4b0) graphic_text_digital_pane_g1

0xb4b5,	// (0x0002a4b8) graphic_text_digital_pane_t1

0xb4c3,	// (0x0002a4c6) graphic_text_digital_pane_t2

0x0001,

0xf9ab,	// (0x0002e9ae) graphic_text_digital_pane_t

0x1659,	// (0x0002065c) navi_icon_pane_srt_ParamLimits

0x1659,	// (0x0002065c) navi_icon_pane_srt

0x15fd,	// (0x00020600) navi_midp_pane_srt

0x15fd,	// (0x00020600) navi_navi_pane_srt

0x1659,	// (0x0002065c) navi_text_pane_srt_ParamLimits

0x1659,	// (0x0002065c) navi_text_pane_srt

0xb478,	// (0x0002a47b) navi_navi_icon_text_pane_srt

0xb480,	// (0x0002a483) navi_navi_pane_srt_g1_ParamLimits

0xb480,	// (0x0002a483) navi_navi_pane_srt_g1

0xb492,	// (0x0002a495) navi_navi_pane_srt_g2_ParamLimits

0xb492,	// (0x0002a495) navi_navi_pane_srt_g2

0x0001,

0xf9a6,	// (0x0002e9a9) navi_navi_pane_srt_g_ParamLimits

0xf9a6,	// (0x0002e9a9) navi_navi_pane_srt_g

0xb4a4,	// (0x0002a4a7) navi_navi_tabs_pane_srt

0xb478,	// (0x0002a47b) navi_navi_text_pane_srt

0xb478,	// (0x0002a47b) navi_navi_volume_pane_srt

0xb469,	// (0x0002a46c) navi_navi_text_pane_srt_t1

0x8d3a,	// (0x00027d3d) navi_navi_volume_pane_srt_g1

0x8d42,	// (0x00027d45) volume_small_pane_srt_ParamLimits

0x8d42,	// (0x00027d45) volume_small_pane_srt

0x7aa4,	// (0x00026aa7) volume_small_pane_srt_g1_ParamLimits

0x7aa4,	// (0x00026aa7) volume_small_pane_srt_g1

0x7ab4,	// (0x00026ab7) volume_small_pane_srt_g2_ParamLimits

0x7ab4,	// (0x00026ab7) volume_small_pane_srt_g2

0x7ac5,	// (0x00026ac8) volume_small_pane_srt_g3_ParamLimits

0x7ac5,	// (0x00026ac8) volume_small_pane_srt_g3

0x7ad6,	// (0x00026ad9) volume_small_pane_srt_g4_ParamLimits

0x7ad6,	// (0x00026ad9) volume_small_pane_srt_g4

0x7ae7,	// (0x00026aea) volume_small_pane_srt_g5_ParamLimits

0x7ae7,	// (0x00026aea) volume_small_pane_srt_g5

0x7af8,	// (0x00026afb) volume_small_pane_srt_g6_ParamLimits

0x7af8,	// (0x00026afb) volume_small_pane_srt_g6

0x7b09,	// (0x00026b0c) volume_small_pane_srt_g7_ParamLimits

0x7b09,	// (0x00026b0c) volume_small_pane_srt_g7

0x7b1a,	// (0x00026b1d) volume_small_pane_srt_g8_ParamLimits

0x7b1a,	// (0x00026b1d) volume_small_pane_srt_g8

0x7b2b,	// (0x00026b2e) volume_small_pane_srt_g9_ParamLimits

0x7b2b,	// (0x00026b2e) volume_small_pane_srt_g9

0x7b3c,	// (0x00026b3f) volume_small_pane_srt_g10_ParamLimits

0x7b3c,	// (0x00026b3f) volume_small_pane_srt_g10

0x0009,

0xf753,	// (0x0002e756) volume_small_pane_srt_g_ParamLimits

0xf753,	// (0x0002e756) volume_small_pane_srt_g

0x6bc4,	// (0x00025bc7) query_popup_data_pane_cp2

0xb44f,	// (0x0002a452) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb44f,	// (0x0002a452) navi_navi_icon_text_pane_srt_t1

0xa55e,	// (0x00029561) navi_tabs_2_long_pane_srt

0xa55e,	// (0x00029561) navi_tabs_2_pane_srt

0xa55e,	// (0x00029561) navi_tabs_3_long_pane_srt

0xa55e,	// (0x00029561) navi_tabs_3_pane_srt

0xa55e,	// (0x00029561) navi_tabs_4_pane_srt

0x8d1a,	// (0x00027d1d) tabs_2_active_pane_srt_ParamLimits

0x8d1a,	// (0x00027d1d) tabs_2_active_pane_srt

0x8d2a,	// (0x00027d2d) tabs_2_passive_pane_srt_ParamLimits

0x8d2a,	// (0x00027d2d) tabs_2_passive_pane_srt

0x7e2b,	// (0x00026e2e) bg_passive_tab_pane_cp1_srt_ParamLimits

0x7e2b,	// (0x00026e2e) bg_passive_tab_pane_cp1_srt

0xb41b,	// (0x0002a41e) bg_passive_tab_pane_g1_cp1_srt

0x7404,	// (0x00026407) bg_passive_tab_pane_g2_cp1_srt

0xb424,	// (0x0002a427) bg_passive_tab_pane_g3_cp1_srt

0x1659,	// (0x0002065c) bg_active_tab_pane_cp1_srt_ParamLimits

0x1659,	// (0x0002065c) bg_active_tab_pane_cp1_srt

0xb42d,	// (0x0002a430) tabs_2_active_pane_srt_g1

0xb435,	// (0x0002a438) tabs_2_active_pane_srt_t1_ParamLimits

0xb435,	// (0x0002a438) tabs_2_active_pane_srt_t1

0xb41b,	// (0x0002a41e) bg_active_tab_pane_g1_cp1_srt

0x7404,	// (0x00026407) bg_active_tab_pane_g2_cp1_srt

0xb424,	// (0x0002a427) bg_active_tab_pane_g3_cp1_srt

0x8ce7,	// (0x00027cea) tabs_3_active_pane_srt_ParamLimits

0x8ce7,	// (0x00027cea) tabs_3_active_pane_srt

0x8cf8,	// (0x00027cfb) tabs_3_passive_pane_cp_srt_ParamLimits

0x8cf8,	// (0x00027cfb) tabs_3_passive_pane_cp_srt

0x8d09,	// (0x00027d0c) tabs_3_passive_pane_srt_ParamLimits

0x8d09,	// (0x00027d0c) tabs_3_passive_pane_srt

0x7e2b,	// (0x00026e2e) bg_passive_tab_pane_cp2_srt_ParamLimits

0x7e2b,	// (0x00026e2e) bg_passive_tab_pane_cp2_srt

0x7b4d,	// (0x00026b50) bg_passive_tab_pane_g1_cp2_srt

0x7404,	// (0x00026407) bg_passive_tab_pane_g2_cp2_srt

0x7b56,	// (0x00026b59) bg_passive_tab_pane_g3_cp2_srt

0x1659,	// (0x0002065c) bg_active_tab_pane_cp2_srt_ParamLimits

0x1659,	// (0x0002065c) bg_active_tab_pane_cp2_srt

0xb401,	// (0x0002a404) tabs_3_active_pane_srt_g1

0xb409,	// (0x0002a40c) tabs_3_active_pane_srt_t1_ParamLimits

0xb409,	// (0x0002a40c) tabs_3_active_pane_srt_t1

0x7b4d,	// (0x00026b50) bg_active_tab_pane_g1_cp2_srt

0x7404,	// (0x00026407) bg_active_tab_pane_g2_cp2_srt

0x7b56,	// (0x00026b59) bg_active_tab_pane_g3_cp2_srt

0x8c9f,	// (0x00027ca2) tabs_4_active_pane_srt_ParamLimits

0x8c9f,	// (0x00027ca2) tabs_4_active_pane_srt

0x8cb1,	// (0x00027cb4) tabs_4_passive_pane_cp2_srt_ParamLimits

0x8cb1,	// (0x00027cb4) tabs_4_passive_pane_cp2_srt

0x7dfb,	// (0x00026dfe) aid_size_cell_toolbar

0x6f59,	// (0x00025f5c) main_idle_act_pane_ParamLimits

0x7fea,	// (0x00026fed) popup_large_graphic_colour_window_ParamLimits

0x8355,	// (0x00027358) popup_toolbar_window_ParamLimits

0x8355,	// (0x00027358) popup_toolbar_window

0x5ca7,	// (0x00024caa) list_single_graphic_2heading_pane_ParamLimits

0x5ca7,	// (0x00024caa) list_single_graphic_2heading_pane

0x3701,	// (0x00022704) aid_size_cell_apps_grid_lsc_pane

0x3713,	// (0x00022716) aid_size_cell_apps_grid_prt_pane

0x7e2b,	// (0x00026e2e) bg_wml_button_pane_cp1_ParamLimits

0x7e2b,	// (0x00026e2e) bg_wml_button_pane_cp1

0x9f4b,	// (0x00028f4e) form_midp_field_text_pane_t1_ParamLimits

0x9d15,	// (0x00028d18) input_focus_pane_cp050_ParamLimits

0x9f85,	// (0x00028f88) list_midp_form_text_pane_ParamLimits

0x9f28,	// (0x00028f2b) input_focus_pane_cp051_ParamLimits

0x9f3c,	// (0x00028f3f) list_midp_choice_pane_ParamLimits

0x9dcb,	// (0x00028dce) list_single_2graphic_pane_cp3_ParamLimits

0x9dcb,	// (0x00028dce) list_single_2graphic_pane_cp3

0x9df0,	// (0x00028df3) list_single_midp_graphic_pane_ParamLimits

0x9df0,	// (0x00028df3) list_single_midp_graphic_pane

0x5af1,	// (0x00024af4) list_single_graphic_2heading_pane_g1_ParamLimits

0x5af1,	// (0x00024af4) list_single_graphic_2heading_pane_g1

0x53a2,	// (0x000243a5) list_single_graphic_2heading_pane_g4_ParamLimits

0x53a2,	// (0x000243a5) list_single_graphic_2heading_pane_g4

0x53ae,	// (0x000243b1) list_single_graphic_2heading_pane_g5_ParamLimits

0x53ae,	// (0x000243b1) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a6,	// (0x0002e7a9) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a6,	// (0x0002e7a9) list_single_graphic_2heading_pane_g

0x5afd,	// (0x00024b00) list_single_graphic_2heading_pane_t1_ParamLimits

0x5afd,	// (0x00024b00) list_single_graphic_2heading_pane_t1

0x5b11,	// (0x00024b14) list_single_graphic_2heading_pane_t2_ParamLimits

0x5b11,	// (0x00024b14) list_single_graphic_2heading_pane_t2

0x5b2b,	// (0x00024b2e) list_single_graphic_2heading_pane_t3_ParamLimits

0x5b2b,	// (0x00024b2e) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ad,	// (0x0002e7b0) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ad,	// (0x0002e7b0) list_single_graphic_2heading_pane_t

0x8833,	// (0x00027836) bg_popup_sub_pane_cp2

0x885d,	// (0x00027860) grid_toobar_pane

0x8899,	// (0x0002789c) cell_toolbar_pane_ParamLimits

0x8899,	// (0x0002789c) cell_toolbar_pane

0x88c9,	// (0x000278cc) cell_toolbar_pane_g1_ParamLimits

0x88c9,	// (0x000278cc) cell_toolbar_pane_g1

0x88dd,	// (0x000278e0) cell_toolbar_pane_g2_ParamLimits

0x88dd,	// (0x000278e0) cell_toolbar_pane_g2

0x0001,

0xf7bb,	// (0x0002e7be) cell_toolbar_pane_g_ParamLimits

0xf7bb,	// (0x0002e7be) cell_toolbar_pane_g

0x88ff,	// (0x00027902) grid_highlight_pane_cp2_ParamLimits

0x88ff,	// (0x00027902) grid_highlight_pane_cp2

0x8919,	// (0x0002791c) toolbar_button_pane

0x8925,	// (0x00027928) toolbar_button_pane_g1

0x892d,	// (0x00027930) toolbar_button_pane_g2

0x8935,	// (0x00027938) toolbar_button_pane_g3

0x893d,	// (0x00027940) toolbar_button_pane_g4

0x8945,	// (0x00027948) toolbar_button_pane_g5

0x894d,	// (0x00027950) toolbar_button_pane_g6

0x8955,	// (0x00027958) toolbar_button_pane_g7

0x895d,	// (0x00027960) toolbar_button_pane_g8

0x8965,	// (0x00027968) toolbar_button_pane_g9

0x0009,

0xf7c0,	// (0x0002e7c3) toolbar_button_pane_g

0x8975,	// (0x00027978) list_single_2graphic_pane_g1_cp3_ParamLimits

0x8975,	// (0x00027978) list_single_2graphic_pane_g1_cp3

0x8981,	// (0x00027984) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8981,	// (0x00027984) list_single_2graphic_pane_g2_cp3

0x7724,	// (0x00026727) list_single_2graphic_pane_g3_cp3

0x8992,	// (0x00027995) list_single_2graphic_pane_g4_cp3_ParamLimits

0x8992,	// (0x00027995) list_single_2graphic_pane_g4_cp3

0x899e,	// (0x000279a1) list_single_2graphic_pane_t1_cp3_ParamLimits

0x899e,	// (0x000279a1) list_single_2graphic_pane_t1_cp3

0x1da1,	// (0x00020da4) list_single_midp_graphic_pane_g2_ParamLimits

0x1da1,	// (0x00020da4) list_single_midp_graphic_pane_g2

0x7e03,	// (0x00026e06) aid_zoom_text_primary

0x5ac5,	// (0x00024ac8) aid_zoom_text_secondary

0x7c07,	// (0x00026c0a) status_small_pane_g7_ParamLimits

0x7c07,	// (0x00026c0a) status_small_pane_g7

0x7c2a,	// (0x00026c2d) status_small_pane_t1_ParamLimits

0x68d0,	// (0x000258d3) title_pane_g2

0x0003,

0xf54e,	// (0x0002e551) title_pane_g

0x6c1e,	// (0x00025c21) aid_size_cell_colour_1_pane_ParamLimits

0x6c1e,	// (0x00025c21) aid_size_cell_colour_1_pane

0x6c32,	// (0x00025c35) aid_size_cell_colour_2_pane_ParamLimits

0x6c32,	// (0x00025c35) aid_size_cell_colour_2_pane

0x6c46,	// (0x00025c49) aid_size_cell_colour_3_pane_ParamLimits

0x6c46,	// (0x00025c49) aid_size_cell_colour_3_pane

0x6c5a,	// (0x00025c5d) aid_size_cell_colour_4_pane_ParamLimits

0x6c5a,	// (0x00025c5d) aid_size_cell_colour_4_pane

0x6fcc,	// (0x00025fcf) title_pane_stacon_g1_ParamLimits

0x6fcc,	// (0x00025fcf) title_pane_stacon_g1

0xa34d,	// (0x00029350) popup_note_wait_window_g3_ParamLimits

0xa34d,	// (0x00029350) popup_note_wait_window_g3

0xa3c3,	// (0x000293c6) popup_note_wait_window_t5_ParamLimits

0xa3c3,	// (0x000293c6) popup_note_wait_window_t5

0x15fd,	// (0x00020600) main_feb_china_hwr_fs_writing_pane

0x7ed1,	// (0x00026ed4) popup_feb_china_hwr_fs_window_ParamLimits

0x7ed1,	// (0x00026ed4) popup_feb_china_hwr_fs_window

0x89d0,	// (0x000279d3) aid_size_cell_hwr_fs_ParamLimits

0x89d0,	// (0x000279d3) aid_size_cell_hwr_fs

0x9d15,	// (0x00028d18) bg_popup_sub_pane_cp3_ParamLimits

0x9d15,	// (0x00028d18) bg_popup_sub_pane_cp3

0x89e5,	// (0x000279e8) grid_hwr_fs_pane_ParamLimits

0x89e5,	// (0x000279e8) grid_hwr_fs_pane

0x89fd,	// (0x00027a00) linegrid_hwr_fs_pane_ParamLimits

0x89fd,	// (0x00027a00) linegrid_hwr_fs_pane

0x8a0d,	// (0x00027a10) cell_hwr_fs_pane_ParamLimits

0x8a0d,	// (0x00027a10) cell_hwr_fs_pane

0x9d21,	// (0x00028d24) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d21,	// (0x00028d24) linegrid_hwr_fs_pane_g1

0x9d2d,	// (0x00028d30) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d2d,	// (0x00028d30) linegrid_hwr_fs_pane_g2

0x9d3f,	// (0x00028d42) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d3f,	// (0x00028d42) linegrid_hwr_fs_pane_g3

0x8a2f,	// (0x00027a32) linegrid_hwr_fs_pane_g4_ParamLimits

0x8a2f,	// (0x00027a32) linegrid_hwr_fs_pane_g4

0x8a49,	// (0x00027a4c) linegrid_hwr_fs_pane_g5_ParamLimits

0x8a49,	// (0x00027a4c) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e6,	// (0x0002e7e9) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e6,	// (0x0002e7e9) linegrid_hwr_fs_pane_g

0x9d4b,	// (0x00028d4e) cell_hwr_fs_pane_g1_ParamLimits

0x9d4b,	// (0x00028d4e) cell_hwr_fs_pane_g1

0x876d,	// (0x00027770) cell_hwr_fs_pane_g2_ParamLimits

0x876d,	// (0x00027770) cell_hwr_fs_pane_g2

0x9d61,	// (0x00028d64) cell_hwr_fs_pane_g3_ParamLimits

0x9d61,	// (0x00028d64) cell_hwr_fs_pane_g3

0x9d6e,	// (0x00028d71) cell_hwr_fs_pane_g4_ParamLimits

0x9d6e,	// (0x00028d71) cell_hwr_fs_pane_g4

0x0003,

0xf7f1,	// (0x0002e7f4) cell_hwr_fs_pane_g_ParamLimits

0xf7f1,	// (0x0002e7f4) cell_hwr_fs_pane_g

0x8a5f,	// (0x00027a62) cell_hwr_fs_pane_t1

0x15fd,	// (0x00020600) grid_highlight_pane_cp6

0x15fd,	// (0x00020600) main_idle_act2_pane

0x1bf7,	// (0x00020bfa) aid_inside_area_popup_secondary

0xa9e2,	// (0x000299e5) aid_inside_area_window_primary_ParamLimits

0xa9e2,	// (0x000299e5) aid_inside_area_window_primary

0xb568,	// (0x0002a56b) ai2_news_ticker_pane

0xb570,	// (0x0002a573) aid_size_cell_ai1_link_ParamLimits

0xb570,	// (0x0002a573) aid_size_cell_ai1_link

0xb58a,	// (0x0002a58d) popup_ai2_data_window_ParamLimits

0xb58a,	// (0x0002a58d) popup_ai2_data_window

0xb5a0,	// (0x0002a5a3) popup_ai2_link_window_ParamLimits

0xb5a0,	// (0x0002a5a3) popup_ai2_link_window

0x9d15,	// (0x00028d18) bg_popup_sub_pane_cp4_ParamLimits

0x9d15,	// (0x00028d18) bg_popup_sub_pane_cp4

0xb5b4,	// (0x0002a5b7) grid_ai2_link_pane_ParamLimits

0xb5b4,	// (0x0002a5b7) grid_ai2_link_pane

0xb5cb,	// (0x0002a5ce) popup_ai2_link_window_g1_ParamLimits

0xb5cb,	// (0x0002a5ce) popup_ai2_link_window_g1

0xb5d7,	// (0x0002a5da) popup_ai2_link_window_g2_ParamLimits

0xb5d7,	// (0x0002a5da) popup_ai2_link_window_g2

0x0001,

0xf9c4,	// (0x0002e9c7) popup_ai2_link_window_g_ParamLimits

0xf9c4,	// (0x0002e9c7) popup_ai2_link_window_g

0xb5e6,	// (0x0002a5e9) ai2_mp_button_pane

0xb5ee,	// (0x0002a5f1) ai2_mp_volume_pane

0x9f28,	// (0x00028f2b) bg_popup_sub_pane_cp5_ParamLimits

0x9f28,	// (0x00028f2b) bg_popup_sub_pane_cp5

0xb5f6,	// (0x0002a5f9) heading_ai2_gene_pane_ParamLimits

0xb5f6,	// (0x0002a5f9) heading_ai2_gene_pane

0xb602,	// (0x0002a605) list_ai2_gene_pane_ParamLimits

0xb602,	// (0x0002a605) list_ai2_gene_pane

0xb64a,	// (0x0002a64d) cell_ai2_link_pane_ParamLimits

0xb64a,	// (0x0002a64d) cell_ai2_link_pane

0xb660,	// (0x0002a663) cell_ai2_link_pane_g1

0x15fd,	// (0x00020600) grid_highlight_pane_cp7

0x8d57,	// (0x00027d5a) ai2_mp_volume_pane_g1

0xb730,	// (0x0002a733) ai2_mp_volume_pane_g2

0xb6a5,	// (0x0002a6a8) list_ai2_gene_pane_t1

0xb738,	// (0x0002a73b) ai2_mp_volume_pane_g3

0x0002,

0xf9dd,	// (0x0002e9e0) ai2_mp_volume_pane_g

0x8d5f,	// (0x00027d62) volume_small_pane_cp3

0xb740,	// (0x0002a743) aid_size_cell_ai2_button

0xb748,	// (0x0002a74b) grid_ai2_button_pane

0xb751,	// (0x0002a754) cell_ai2_button_pane_ParamLimits

0xb751,	// (0x0002a754) cell_ai2_button_pane

0x15f3,	// (0x000205f6) cell_ai2_button_pane_g1

0x15fd,	// (0x00020600) grid_highlight_pane_cp8

0xb6f0,	// (0x0002a6f3) ai2_gene_pane_t1_ParamLimits

0xb6f0,	// (0x0002a6f3) ai2_gene_pane_t1

0x7df1,	// (0x00026df4) aid_height_parent_landscape

0xb04b,	// (0x0002a04e) aid_height_set_list

0xb05c,	// (0x0002a05f) aid_size_parent

0xb38b,	// (0x0002a38e) aid_size_cell_graphic_pane_ParamLimits

0xb612,	// (0x0002a615) popup_ai2_data_window_g1_ParamLimits

0xb612,	// (0x0002a615) popup_ai2_data_window_g1

0xb61e,	// (0x0002a621) ai2_news_ticker_pane_g1

0xb626,	// (0x0002a629) ai2_news_ticker_pane_g2

0x0001,

0xf9c9,	// (0x0002e9cc) ai2_news_ticker_pane_g

0xb62e,	// (0x0002a631) ai2_news_ticker_pane_t1

0xb63c,	// (0x0002a63f) ai2_news_ticker_pane_t2

0x0001,

0xf9ce,	// (0x0002e9d1) ai2_news_ticker_pane_t

0xb669,	// (0x0002a66c) heading_ai2_gene_pane_g1

0xb671,	// (0x0002a674) heading_ai2_gene_pane_t1_ParamLimits

0xb671,	// (0x0002a674) heading_ai2_gene_pane_t1

0xb686,	// (0x0002a689) list_highlight_pane_cp6

0xb68e,	// (0x0002a691) ai2_gene_pane_ParamLimits

0xb68e,	// (0x0002a691) ai2_gene_pane

0xb6b3,	// (0x0002a6b6) list_ai2_gene_pane_t2

0x0001,

0xf9d3,	// (0x0002e9d6) list_ai2_gene_pane_t

0xb6c1,	// (0x0002a6c4) list_highlight_pane_cp8_ParamLimits

0xb6c1,	// (0x0002a6c4) list_highlight_pane_cp8

0xb6d2,	// (0x0002a6d5) ai2_gene_pane_g1_ParamLimits

0xb6d2,	// (0x0002a6d5) ai2_gene_pane_g1

0xb6e4,	// (0x0002a6e7) ai2_gene_pane_g2_ParamLimits

0xb6e4,	// (0x0002a6e7) ai2_gene_pane_g2

0x0001,

0xf9d8,	// (0x0002e9db) ai2_gene_pane_g_ParamLimits

0xf9d8,	// (0x0002e9db) ai2_gene_pane_g

0x19c4,	// (0x000209c7) scroll_pane_cp12

0x7da6,	// (0x00026da9) control_pane_t3_ParamLimits

0x7da6,	// (0x00026da9) control_pane_t3

0x7c1b,	// (0x00026c1e) status_small_pane_g8_ParamLimits

0x7c1b,	// (0x00026c1e) status_small_pane_g8

0x7fb3,	// (0x00026fb6) popup_find_window_ParamLimits

0x81cc,	// (0x000271cf) popup_note_image_window_ParamLimits

0x5b43,	// (0x00024b46) list_double2_graphic_pane_vc_g1_ParamLimits

0x5b43,	// (0x00024b46) list_double2_graphic_pane_vc_g1

0x53a2,	// (0x000243a5) list_double2_graphic_pane_vc_g2_ParamLimits

0x53a2,	// (0x000243a5) list_double2_graphic_pane_vc_g2

0x53ae,	// (0x000243b1) list_double2_graphic_pane_vc_g3_ParamLimits

0x53ae,	// (0x000243b1) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b4,	// (0x0002e7b7) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b4,	// (0x0002e7b7) list_double2_graphic_pane_vc_g

0x5b4f,	// (0x00024b52) list_double2_graphic_pane_vc_t1_ParamLimits

0x5b4f,	// (0x00024b52) list_double2_graphic_pane_vc_t1

0x53a2,	// (0x000243a5) list_single_heading_pane_vc_g1_ParamLimits

0x53a2,	// (0x000243a5) list_single_heading_pane_vc_g1

0x53ae,	// (0x000243b1) list_single_heading_pane_vc_g2_ParamLimits

0x53ae,	// (0x000243b1) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e5cb) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e5cb) list_single_heading_pane_vc_g

0x5b65,	// (0x00024b68) list_single_heading_pane_vc_t1_ParamLimits

0x5b65,	// (0x00024b68) list_single_heading_pane_vc_t1

0x5b7b,	// (0x00024b7e) list_single_heading_pane_vc_t2_ParamLimits

0x5b7b,	// (0x00024b7e) list_single_heading_pane_vc_t2

0x0001,

0xf7d5,	// (0x0002e7d8) list_single_heading_pane_vc_t_ParamLimits

0xf7d5,	// (0x0002e7d8) list_single_heading_pane_vc_t

0x5b8d,	// (0x00024b90) list_setting_number_pane_vc_g1_ParamLimits

0x5b8d,	// (0x00024b90) list_setting_number_pane_vc_g1

0x5b99,	// (0x00024b9c) list_setting_number_pane_vc_g2_ParamLimits

0x5b99,	// (0x00024b9c) list_setting_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0002e7dd) list_setting_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0002e7dd) list_setting_number_pane_vc_g

0x5ba5,	// (0x00024ba8) list_setting_number_pane_vc_t1_ParamLimits

0x5ba5,	// (0x00024ba8) list_setting_number_pane_vc_t1

0x5bb9,	// (0x00024bbc) list_setting_number_pane_vc_t2_ParamLimits

0x5bb9,	// (0x00024bbc) list_setting_number_pane_vc_t2

0x5bd5,	// (0x00024bd8) list_setting_number_pane_vc_t3_ParamLimits

0x5bd5,	// (0x00024bd8) list_setting_number_pane_vc_t3

0x0002,

0xf7df,	// (0x0002e7e2) list_setting_number_pane_vc_t_ParamLimits

0xf7df,	// (0x0002e7e2) list_setting_number_pane_vc_t

0x5c01,	// (0x00024c04) set_value_pane_vc_ParamLimits

0x5c01,	// (0x00024c04) set_value_pane_vc

0x5ca7,	// (0x00024caa) list_double2_graphic_pane_vc_ParamLimits

0x5ca7,	// (0x00024caa) list_double2_graphic_pane_vc

0xb22c,	// (0x0002a22f) list_double2_large_graphic_pane_vc_ParamLimits

0xb22c,	// (0x0002a22f) list_double2_large_graphic_pane_vc

0x5ca7,	// (0x00024caa) list_double2_pane_vc_ParamLimits

0x5ca7,	// (0x00024caa) list_double2_pane_vc

0x5ca7,	// (0x00024caa) list_double_graphic_heading_pane_vc_ParamLimits

0x5ca7,	// (0x00024caa) list_double_graphic_heading_pane_vc

0x5ca7,	// (0x00024caa) list_double_graphic_pane_vc_ParamLimits

0x5ca7,	// (0x00024caa) list_double_graphic_pane_vc

0x5ca7,	// (0x00024caa) list_double_heading_pane_vc_ParamLimits

0x5ca7,	// (0x00024caa) list_double_heading_pane_vc

0xb23e,	// (0x0002a241) list_double_large_graphic_pane_vc_ParamLimits

0xb23e,	// (0x0002a241) list_double_large_graphic_pane_vc

0x5ca7,	// (0x00024caa) list_double_number_pane_vc_ParamLimits

0x5ca7,	// (0x00024caa) list_double_number_pane_vc

0x5ca7,	// (0x00024caa) list_double_pane_vc_ParamLimits

0x5ca7,	// (0x00024caa) list_double_pane_vc

0x5ca7,	// (0x00024caa) list_double_time_pane_vc_ParamLimits

0x5ca7,	// (0x00024caa) list_double_time_pane_vc

0x5ca7,	// (0x00024caa) list_setting_number_pane_vc_ParamLimits

0x5ca7,	// (0x00024caa) list_setting_number_pane_vc

0x5ca7,	// (0x00024caa) list_setting_pane_vc_ParamLimits

0x5ca7,	// (0x00024caa) list_setting_pane_vc

0x5ca7,	// (0x00024caa) list_single_graphic_heading_pane_vc_ParamLimits

0x5ca7,	// (0x00024caa) list_single_graphic_heading_pane_vc

0x5ca7,	// (0x00024caa) list_single_heading_pane_vc_ParamLimits

0x5ca7,	// (0x00024caa) list_single_heading_pane_vc

0x5cd9,	// (0x00024cdc) list_single_number_heading_pane_vc_ParamLimits

0x5cd9,	// (0x00024cdc) list_single_number_heading_pane_vc

0x5d80,	// (0x00024d83) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5d80,	// (0x00024d83) list_double_graphic_heading_pane_vc_g1

0x53a2,	// (0x000243a5) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x53a2,	// (0x000243a5) list_double_graphic_heading_pane_vc_g2

0x53ae,	// (0x000243b1) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x53ae,	// (0x000243b1) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e4,	// (0x0002e9e7) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e4,	// (0x0002e9e7) list_double_graphic_heading_pane_vc_g

0x5d8c,	// (0x00024d8f) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5d8c,	// (0x00024d8f) list_double_graphic_heading_pane_vc_t1

0x5da0,	// (0x00024da3) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5da0,	// (0x00024da3) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9eb,	// (0x0002e9ee) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9eb,	// (0x0002e9ee) list_double_graphic_heading_pane_vc_t

0x5b8d,	// (0x00024b90) list_setting_pane_vc_g1_ParamLimits

0x5b8d,	// (0x00024b90) list_setting_pane_vc_g1

0x5b99,	// (0x00024b9c) list_setting_pane_vc_g2_ParamLimits

0x5b99,	// (0x00024b9c) list_setting_pane_vc_g2

0x0001,

0xf7da,	// (0x0002e7dd) list_setting_pane_vc_g_ParamLimits

0xf7da,	// (0x0002e7dd) list_setting_pane_vc_g

0x5db8,	// (0x00024dbb) list_setting_pane_vc_t1_ParamLimits

0x5db8,	// (0x00024dbb) list_setting_pane_vc_t1

0x5dd4,	// (0x00024dd7) list_setting_pane_vc_t2_ParamLimits

0x5dd4,	// (0x00024dd7) list_setting_pane_vc_t2

0x0001,

0xfa2e,	// (0x0002ea31) list_setting_pane_vc_t_ParamLimits

0xfa2e,	// (0x0002ea31) list_setting_pane_vc_t

0x5c01,	// (0x00024c04) set_value_pane_cp_vc_ParamLimits

0x5c01,	// (0x00024c04) set_value_pane_cp_vc

0x53a2,	// (0x000243a5) list_single_number_heading_pane_vc_g1_ParamLimits

0x53a2,	// (0x000243a5) list_single_number_heading_pane_vc_g1

0x53ae,	// (0x000243b1) list_single_number_heading_pane_vc_g2_ParamLimits

0x53ae,	// (0x000243b1) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e5cb) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e5cb) list_single_number_heading_pane_vc_g

0x5dee,	// (0x00024df1) list_single_number_heading_pane_vc_t1_ParamLimits

0x5dee,	// (0x00024df1) list_single_number_heading_pane_vc_t1

0x5e04,	// (0x00024e07) list_single_number_heading_pane_vc_t2_ParamLimits

0x5e04,	// (0x00024e07) list_single_number_heading_pane_vc_t2

0x5e16,	// (0x00024e19) list_single_number_heading_pane_vc_t3_ParamLimits

0x5e16,	// (0x00024e19) list_single_number_heading_pane_vc_t3

0x0002,

0xfa33,	// (0x0002ea36) list_single_number_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x0002ea36) list_single_number_heading_pane_vc_t

0x5e28,	// (0x00024e2b) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5e28,	// (0x00024e2b) list_single_graphic_heading_pane_vc_g1

0x53a2,	// (0x000243a5) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x53a2,	// (0x000243a5) list_single_graphic_heading_pane_vc_g4

0x53ae,	// (0x000243b1) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x53ae,	// (0x000243b1) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa3a,	// (0x0002ea3d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa3a,	// (0x0002ea3d) list_single_graphic_heading_pane_vc_g

0x5e34,	// (0x00024e37) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5e34,	// (0x00024e37) list_single_graphic_heading_pane_vc_t1

0x5e4a,	// (0x00024e4d) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5e4a,	// (0x00024e4d) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa41,	// (0x0002ea44) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa41,	// (0x0002ea44) list_single_graphic_heading_pane_vc_t

0x53a2,	// (0x000243a5) list_double2_pane_vc_g1_ParamLimits

0x53a2,	// (0x000243a5) list_double2_pane_vc_g1

0x53ae,	// (0x000243b1) list_double2_pane_vc_g2_ParamLimits

0x53ae,	// (0x000243b1) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e5cb) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e5cb) list_double2_pane_vc_g

0x5e5c,	// (0x00024e5f) list_double2_pane_vc_t1_ParamLimits

0x5e5c,	// (0x00024e5f) list_double2_pane_vc_t1

0x5e74,	// (0x00024e77) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5e74,	// (0x00024e77) list_double2_large_graphic_pane_vc_g1

0x5e80,	// (0x00024e83) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5e80,	// (0x00024e83) list_double2_large_graphic_pane_vc_g2

0x5e8c,	// (0x00024e8f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5e8c,	// (0x00024e8f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa46,	// (0x0002ea49) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa46,	// (0x0002ea49) list_double2_large_graphic_pane_vc_g

0x5e98,	// (0x00024e9b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5e98,	// (0x00024e9b) list_double2_large_graphic_pane_vc_t1

0x5eae,	// (0x00024eb1) list_double_time_pane_vc_g1_ParamLimits

0x5eae,	// (0x00024eb1) list_double_time_pane_vc_g1

0x5eba,	// (0x00024ebd) list_double_time_pane_vc_g2_ParamLimits

0x5eba,	// (0x00024ebd) list_double_time_pane_vc_g2

0x0001,

0xfa4d,	// (0x0002ea50) list_double_time_pane_vc_g_ParamLimits

0xfa4d,	// (0x0002ea50) list_double_time_pane_vc_g

0x5ec6,	// (0x00024ec9) list_double_time_pane_vc_t1_ParamLimits

0x5ec6,	// (0x00024ec9) list_double_time_pane_vc_t1

0x5eea,	// (0x00024eed) list_double_time_pane_vc_t2_ParamLimits

0x5eea,	// (0x00024eed) list_double_time_pane_vc_t2

0x5f39,	// (0x00024f3c) list_double_time_pane_vc_t3_ParamLimits

0x5f39,	// (0x00024f3c) list_double_time_pane_vc_t3

0x5f4b,	// (0x00024f4e) list_double_time_pane_vc_t4_ParamLimits

0x5f4b,	// (0x00024f4e) list_double_time_pane_vc_t4

0x0003,

0xfa52,	// (0x0002ea55) list_double_time_pane_vc_t_ParamLimits

0xfa52,	// (0x0002ea55) list_double_time_pane_vc_t

0x53a2,	// (0x000243a5) list_double_pane_vc_g1_ParamLimits

0x53a2,	// (0x000243a5) list_double_pane_vc_g1

0x53ae,	// (0x000243b1) list_double_pane_vc_g2_ParamLimits

0x53ae,	// (0x000243b1) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e5cb) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e5cb) list_double_pane_vc_g

0x5f5f,	// (0x00024f62) list_double_pane_vc_t1_ParamLimits

0x5f5f,	// (0x00024f62) list_double_pane_vc_t1

0x5f73,	// (0x00024f76) list_double_pane_vc_t2_ParamLimits

0x5f73,	// (0x00024f76) list_double_pane_vc_t2

0x0001,

0xfa5b,	// (0x0002ea5e) list_double_pane_vc_t_ParamLimits

0xfa5b,	// (0x0002ea5e) list_double_pane_vc_t

0x53a2,	// (0x000243a5) list_double_number_pane_vc_g1_ParamLimits

0x53a2,	// (0x000243a5) list_double_number_pane_vc_g1

0x53ae,	// (0x000243b1) list_double_number_pane_vc_g2_ParamLimits

0x53ae,	// (0x000243b1) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e5cb) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e5cb) list_double_number_pane_vc_g

0x5f8b,	// (0x00024f8e) list_double_number_pane_vc_t1_ParamLimits

0x5f8b,	// (0x00024f8e) list_double_number_pane_vc_t1

0x5f5f,	// (0x00024f62) list_double_number_pane_vc_t2_ParamLimits

0x5f5f,	// (0x00024f62) list_double_number_pane_vc_t2

0x5f9d,	// (0x00024fa0) list_double_number_pane_vc_t3_ParamLimits

0x5f9d,	// (0x00024fa0) list_double_number_pane_vc_t3

0x0002,

0xfa60,	// (0x0002ea63) list_double_number_pane_vc_t_ParamLimits

0xfa60,	// (0x0002ea63) list_double_number_pane_vc_t

0x5fb5,	// (0x00024fb8) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5fb5,	// (0x00024fb8) list_double_large_graphic_pane_vc_g1

0x5fd7,	// (0x00024fda) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5fd7,	// (0x00024fda) list_double_large_graphic_pane_vc_g2

0x5feb,	// (0x00024fee) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5feb,	// (0x00024fee) list_double_large_graphic_pane_vc_g3

0x5ffa,	// (0x00024ffd) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5ffa,	// (0x00024ffd) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa67,	// (0x0002ea6a) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa67,	// (0x0002ea6a) list_double_large_graphic_pane_vc_g

0x6006,	// (0x00025009) list_double_large_graphic_pane_vc_t1_ParamLimits

0x6006,	// (0x00025009) list_double_large_graphic_pane_vc_t1

0x6022,	// (0x00025025) list_double_large_graphic_pane_vc_t2_ParamLimits

0x6022,	// (0x00025025) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa70,	// (0x0002ea73) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa70,	// (0x0002ea73) list_double_large_graphic_pane_vc_t

0x53a2,	// (0x000243a5) list_double_heading_pane_vc_g1_ParamLimits

0x53a2,	// (0x000243a5) list_double_heading_pane_vc_g1

0x53ae,	// (0x000243b1) list_double_heading_pane_vc_g2_ParamLimits

0x53ae,	// (0x000243b1) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e5cb) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e5cb) list_double_heading_pane_vc_g

0x6044,	// (0x00025047) list_double_heading_pane_vc_t1_ParamLimits

0x6044,	// (0x00025047) list_double_heading_pane_vc_t1

0x6058,	// (0x0002505b) list_double_heading_pane_vc_t2_ParamLimits

0x6058,	// (0x0002505b) list_double_heading_pane_vc_t2

0x0001,

0xfa75,	// (0x0002ea78) list_double_heading_pane_vc_t_ParamLimits

0xfa75,	// (0x0002ea78) list_double_heading_pane_vc_t

0x6070,	// (0x00025073) list_double_graphic_pane_vc_g1_ParamLimits

0x6070,	// (0x00025073) list_double_graphic_pane_vc_g1

0x6088,	// (0x0002508b) list_double_graphic_pane_vc_g2_ParamLimits

0x6088,	// (0x0002508b) list_double_graphic_pane_vc_g2

0x53a2,	// (0x000243a5) list_double_graphic_pane_vc_g3_ParamLimits

0x53a2,	// (0x000243a5) list_double_graphic_pane_vc_g3

0x0003,

0xfa7a,	// (0x0002ea7d) list_double_graphic_pane_vc_g_ParamLimits

0xfa7a,	// (0x0002ea7d) list_double_graphic_pane_vc_g

0x60a5,	// (0x000250a8) list_double_graphic_pane_vc_t1_ParamLimits

0x60a5,	// (0x000250a8) list_double_graphic_pane_vc_t1

0x60c4,	// (0x000250c7) list_double_graphic_pane_vc_t2_ParamLimits

0x60c4,	// (0x000250c7) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x0002ea86) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x0002ea86) list_double_graphic_pane_vc_t

0x64fa,	// (0x000254fd) aid_size_cell_fastswap

0x6502,	// (0x00025505) aid_size_cell_touch_ParamLimits

0x6502,	// (0x00025505) aid_size_cell_touch

0x675d,	// (0x00025760) popup_fast_swap_wide_window_ParamLimits

0x675d,	// (0x00025760) popup_fast_swap_wide_window

0x6863,	// (0x00025866) touch_pane_ParamLimits

0x6863,	// (0x00025866) touch_pane

0x1a4c,	// (0x00020a4f) button_value_adjust_pane_cp2

0x57e4,	// (0x000247e7) button_value_adjust_pane_cp4

0x5804,	// (0x00024807) form_field_data_pane_cp2

0x5823,	// (0x00024826) form_field_data_wide_pane_cp2

0x3742,	// (0x00022745) bg_scroll_pane_ParamLimits

0x71c6,	// (0x000261c9) scroll_handle_pane_ParamLimits

0x71da,	// (0x000261dd) scroll_sc2_down_pane_ParamLimits

0x71da,	// (0x000261dd) scroll_sc2_down_pane

0x3788,	// (0x0002278b) scroll_sc2_up_pane_ParamLimits

0x3788,	// (0x0002278b) scroll_sc2_up_pane

0xbe07,	// (0x0002ae0a) grid_wheel_folder_pane_g1_ParamLimits

0xbe07,	// (0x0002ae0a) grid_wheel_folder_pane_g1

0x754b,	// (0x0002654e) clock_nsta_pane_cp2_ParamLimits

0x754b,	// (0x0002654e) clock_nsta_pane_cp2

0x78fc,	// (0x000268ff) listscroll_midp_pane_ParamLimits

0x7908,	// (0x0002690b) midp_canvas_pane

0x7de9,	// (0x00026dec) nsta_clock_indic_pane

0x7e37,	// (0x00026e3a) listscroll_form_pane_vc

0x7e47,	// (0x00026e4a) listscroll_set_pane_vc_ParamLimits

0x7e47,	// (0x00026e4a) listscroll_set_pane_vc

0x84db,	// (0x000274de) clock_nsta_pane

0x8556,	// (0x00027559) indicator_nsta_pane

0x8833,	// (0x00027836) bg_popup_sub_pane_cp2_ParamLimits

0x8847,	// (0x0002784a) find_pane_cp2_ParamLimits

0x8847,	// (0x0002784a) find_pane_cp2

0x885d,	// (0x00027860) grid_toobar_pane_ParamLimits

0x9ce9,	// (0x00028cec) list_form_gen_pane_vc_ParamLimits

0x9ce9,	// (0x00028cec) list_form_gen_pane_vc

0x9cff,	// (0x00028d02) scroll_pane_cp8_vc_ParamLimits

0x9cff,	// (0x00028d02) scroll_pane_cp8_vc

0x9d7b,	// (0x00028d7e) data_form_wide_pane_vc_ParamLimits

0x9d7b,	// (0x00028d7e) data_form_wide_pane_vc

0x9d87,	// (0x00028d8a) form_field_data_wide_pane_vc_g1

0x9d8f,	// (0x00028d92) form_field_data_wide_pane_vc_t1_ParamLimits

0x9d8f,	// (0x00028d92) form_field_data_wide_pane_vc_t1

0x1a83,	// (0x00020a86) input_focus_pane_cp6_vc_ParamLimits

0x1a83,	// (0x00020a86) input_focus_pane_cp6_vc

0xa0bc,	// (0x000290bf) list_midp_pane_ParamLimits

0xa0c8,	// (0x000290cb) scroll_pane_cp16_ParamLimits

0xa0c8,	// (0x000290cb) scroll_pane_cp16

0xa12a,	// (0x0002912d) button_value_adjust_pane_ParamLimits

0xa12a,	// (0x0002912d) button_value_adjust_pane

0xb06e,	// (0x0002a071) button_value_adjust_pane_cp6_ParamLimits

0xb06e,	// (0x0002a071) button_value_adjust_pane_cp6

0xb194,	// (0x0002a197) settings_code_pane_cp_ParamLimits

0xb194,	// (0x0002a197) settings_code_pane_cp

0x15f3,	// (0x000205f6) cell_touch_pane_g1

0x15f3,	// (0x000205f6) cell_touch_pane_g2

0x0001,

0xf6f9,	// (0x0002e6fc) cell_touch_pane_g

0xb763,	// (0x0002a766) cell_touch_pane_cp_ParamLimits

0xb763,	// (0x0002a766) cell_touch_pane_cp

0xb773,	// (0x0002a776) cell_touch_pane_ParamLimits

0xb773,	// (0x0002a776) cell_touch_pane

0x15f3,	// (0x000205f6) scroll_sc2_down_pane_g1

0x15f3,	// (0x000205f6) scroll_sc2_up_pane_g1

0x15fd,	// (0x00020600) bg_set_opt_pane_cp4_vc

0xb785,	// (0x0002a788) list_set_graphic_pane_vc_g1_ParamLimits

0xb785,	// (0x0002a788) list_set_graphic_pane_vc_g1

0xb791,	// (0x0002a794) list_set_graphic_pane_vc_g2_ParamLimits

0xb791,	// (0x0002a794) list_set_graphic_pane_vc_g2

0x0001,

0xf9f0,	// (0x0002e9f3) list_set_graphic_pane_vc_g_ParamLimits

0xf9f0,	// (0x0002e9f3) list_set_graphic_pane_vc_g

0xb79d,	// (0x0002a7a0) text_primary_small_cp13_vc_ParamLimits

0xb79d,	// (0x0002a7a0) text_primary_small_cp13_vc

0xb7b5,	// (0x0002a7b8) list_set_graphic_pane_vc_ParamLimits

0xb7b5,	// (0x0002a7b8) list_set_graphic_pane_vc

0x15fd,	// (0x00020600) input_focus_pane_cp2_vc

0x15f3,	// (0x000205f6) setting_code_pane_vc_g1

0x1670,	// (0x00020673) setting_code_pane_vc_t1

0xb7c8,	// (0x0002a7cb) set_text_pane_vc_t1_ParamLimits

0xb7c8,	// (0x0002a7cb) set_text_pane_vc_t1

0x15fd,	// (0x00020600) input_focus_pane_cp1_vc

0xb7e4,	// (0x0002a7e7) list_set_text_pane_vc

0x15f3,	// (0x000205f6) setting_text_pane_vc_g1

0x15fd,	// (0x00020600) bg_set_opt_pane_cp2_vc

0x1667,	// (0x0002066a) setting_slider_graphic_pane_vc_g1

0xb7ee,	// (0x0002a7f1) setting_slider_graphic_pane_vc_t1

0xb7fe,	// (0x0002a801) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f5,	// (0x0002e9f8) setting_slider_graphic_pane_vc_t

0xb80e,	// (0x0002a811) slider_set_pane_cp_vc

0xb816,	// (0x0002a819) slider_set_pane_vc_g1

0xb81f,	// (0x0002a822) slider_set_pane_vc_g2

0x0006,

0xf9fa,	// (0x0002e9fd) slider_set_pane_vc_g

0x1b49,	// (0x00020b4c) set_opt_bg_pane_g1_copy1

0x1b51,	// (0x00020b54) set_opt_bg_pane_g2_copy1

0xb84b,	// (0x0002a84e) set_opt_bg_pane_g3_copy1

0x1b61,	// (0x00020b64) set_opt_bg_pane_g4_copy1

0x1b69,	// (0x00020b6c) set_opt_bg_pane_g5_copy1

0x1b71,	// (0x00020b74) set_opt_bg_pane_g6_copy1

0xb853,	// (0x0002a856) set_opt_bg_pane_g7_copy1

0xb85b,	// (0x0002a85e) set_opt_bg_pane_g8_copy1

0xb863,	// (0x0002a866) set_opt_bg_pane_g9_copy1

0x15fd,	// (0x00020600) bg_set_opt_pane_cp_vc

0xb86b,	// (0x0002a86e) setting_slider_pane_vc_t1

0xb87a,	// (0x0002a87d) setting_slider_pane_vc_t2

0xb88a,	// (0x0002a88d) setting_slider_pane_vc_t3

0x0002,

0xfa09,	// (0x0002ea0c) setting_slider_pane_vc_t

0xb89a,	// (0x0002a89d) slider_set_pane_vc

0x8a6d,	// (0x00027a70) volume_set_pane_vc_g1

0x8d68,	// (0x00027d6b) volume_set_pane_vc_g2

0x8d71,	// (0x00027d74) volume_set_pane_vc_g3

0x8d7a,	// (0x00027d7d) volume_set_pane_vc_g4

0x8d83,	// (0x00027d86) volume_set_pane_vc_g5

0x8d8c,	// (0x00027d8f) volume_set_pane_vc_g6

0x8d95,	// (0x00027d98) volume_set_pane_vc_g7

0x8d9e,	// (0x00027da1) volume_set_pane_vc_g8

0x8da7,	// (0x00027daa) volume_set_pane_vc_g9

0x8db0,	// (0x00027db3) volume_set_pane_vc_g10

0x0009,

0xfa10,	// (0x0002ea13) volume_set_pane_vc_g

0xb8a2,	// (0x0002a8a5) volume_set_pane_vc

0xb8aa,	// (0x0002a8ad) button_value_adjust_pane_cp1_vc

0xb8b4,	// (0x0002a8b7) list_highlight_pane_cp2_vc

0xb8bd,	// (0x0002a8c0) list_set_pane_vc_ParamLimits

0xb8bd,	// (0x0002a8c0) list_set_pane_vc

0xb91b,	// (0x0002a91e) main_pane_set_vc_t1_ParamLimits

0xb91b,	// (0x0002a91e) main_pane_set_vc_t1

0xb930,	// (0x0002a933) main_pane_set_vc_t2_ParamLimits

0xb930,	// (0x0002a933) main_pane_set_vc_t2

0xb942,	// (0x0002a945) main_pane_set_vc_t3_ParamLimits

0xb942,	// (0x0002a945) main_pane_set_vc_t3

0xb954,	// (0x0002a957) main_pane_set_vc_t4_ParamLimits

0xb954,	// (0x0002a957) main_pane_set_vc_t4

0x0003,

0xfa25,	// (0x0002ea28) main_pane_set_vc_t_ParamLimits

0xfa25,	// (0x0002ea28) main_pane_set_vc_t

0xb966,	// (0x0002a969) setting_code_pane_vc_ParamLimits

0xb966,	// (0x0002a969) setting_code_pane_vc

0xb975,	// (0x0002a978) setting_slider_graphic_pane_vc

0xb975,	// (0x0002a978) setting_slider_pane_vc

0xb975,	// (0x0002a978) setting_text_pane_vc

0xb975,	// (0x0002a978) setting_volume_pane_vc

0xb97d,	// (0x0002a980) scroll_pane_cp121_vc

0x1a3a,	// (0x00020a3d) set_content_pane_vc

0xb985,	// (0x0002a988) button_value_adjust_pane_g1

0xb98e,	// (0x0002a991) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x0002ea8b) button_value_adjust_pane_g

0xb997,	// (0x0002a99a) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb997,	// (0x0002a99a) form_field_slider_wide_pane_vc_t1

0xb9ab,	// (0x0002a9ae) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb9ab,	// (0x0002a9ae) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8d,	// (0x0002ea90) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x0002ea90) form_field_slider_wide_pane_vc_t

0x164b,	// (0x0002064e) input_focus_pane_cp10_vc_ParamLimits

0x164b,	// (0x0002064e) input_focus_pane_cp10_vc

0xb9d9,	// (0x0002a9dc) slider_cont_pane_cp1_vc_ParamLimits

0xb9d9,	// (0x0002a9dc) slider_cont_pane_cp1_vc

0xb9eb,	// (0x0002a9ee) slider_form_pane_g1_cp2

0xb81f,	// (0x0002a822) slider_form_pane_g2_cp2

0xba18,	// (0x0002aa1b) form_field_slider_pane_vc_t3

0xba26,	// (0x0002aa29) form_field_slider_pane_vc_t4

0xba34,	// (0x0002aa37) slider_form_pane_vc_ParamLimits

0xba34,	// (0x0002aa37) slider_form_pane_vc

0xba41,	// (0x0002aa44) form_field_slider_pane_vc_t1_ParamLimits

0xba41,	// (0x0002aa44) form_field_slider_pane_vc_t1

0xb9ab,	// (0x0002a9ae) form_field_slider_pane_vc_t2_ParamLimits

0xb9ab,	// (0x0002a9ae) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x0002eaa2) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x0002eaa2) form_field_slider_pane_vc_t

0x164b,	// (0x0002064e) input_focus_pane_cp9_vc_ParamLimits

0x164b,	// (0x0002064e) input_focus_pane_cp9_vc

0xba5d,	// (0x0002aa60) slider_cont_pane_vc_ParamLimits

0xba5d,	// (0x0002aa60) slider_cont_pane_vc

0xba71,	// (0x0002aa74) list_form_graphic_pane_cp_vc_ParamLimits

0xba71,	// (0x0002aa74) list_form_graphic_pane_cp_vc

0x9d87,	// (0x00028d8a) form_field_popup_wide_pane_vc_g1

0xba86,	// (0x0002aa89) form_field_popup_wide_pane_vc_t1_ParamLimits

0xba86,	// (0x0002aa89) form_field_popup_wide_pane_vc_t1

0x1a83,	// (0x00020a86) input_focus_pane_cp8_vc_ParamLimits

0x1a83,	// (0x00020a86) input_focus_pane_cp8_vc

0xbacb,	// (0x0002aace) list_form_wide_pane_vc_ParamLimits

0xbacb,	// (0x0002aace) list_form_wide_pane_vc

0xbad7,	// (0x0002aada) list_form_graphic_pane_vc_g1

0xbadf,	// (0x0002aae2) list_form_graphic_pane_vc_t1_ParamLimits

0xbadf,	// (0x0002aae2) list_form_graphic_pane_vc_t1

0x1659,	// (0x0002065c) list_highlight_pane_cp5_vc_ParamLimits

0x1659,	// (0x0002065c) list_highlight_pane_cp5_vc

0xbafb,	// (0x0002aafe) list_form_graphic_pane_vc_ParamLimits

0xbafb,	// (0x0002aafe) list_form_graphic_pane_vc

0x9d87,	// (0x00028d8a) form_field_popup_pane_vc_g1

0xbb11,	// (0x0002ab14) form_field_popup_pane_vc_t1_ParamLimits

0xbb11,	// (0x0002ab14) form_field_popup_pane_vc_t1

0x1a83,	// (0x00020a86) input_focus_pane_cp7_vc_ParamLimits

0x1a83,	// (0x00020a86) input_focus_pane_cp7_vc

0xbb28,	// (0x0002ab2b) list_form_pane_vc_ParamLimits

0xbb28,	// (0x0002ab2b) list_form_pane_vc

0xbb34,	// (0x0002ab37) data_form_pane_vc_t1_ParamLimits

0xbb34,	// (0x0002ab37) data_form_pane_vc_t1

0x1b49,	// (0x00020b4c) input_focus_pane_vc_g1

0x1b51,	// (0x00020b54) input_focus_pane_vc_g2

0x1b59,	// (0x00020b5c) input_focus_pane_vc_g3

0x1b61,	// (0x00020b64) input_focus_pane_vc_g4

0x1b69,	// (0x00020b6c) input_focus_pane_vc_g5

0x1b71,	// (0x00020b74) input_focus_pane_vc_g6

0x1b79,	// (0x00020b7c) input_focus_pane_vc_g7

0x1b81,	// (0x00020b84) input_focus_pane_vc_g8

0x1b89,	// (0x00020b8c) input_focus_pane_vc_g9

0x15f3,	// (0x000205f6) input_focus_pane_vc_g10

0x0009,

0xf682,	// (0x0002e685) input_focus_pane_vc_g

0x9d7b,	// (0x00028d7e) data_form_pane_vc_ParamLimits

0x9d7b,	// (0x00028d7e) data_form_pane_vc

0x9d87,	// (0x00028d8a) form_field_data_pane_vc_g1

0xbb4f,	// (0x0002ab52) form_field_data_pane_vc_t1_ParamLimits

0xbb4f,	// (0x0002ab52) form_field_data_pane_vc_t1

0x1a83,	// (0x00020a86) input_focus_pane_vc_ParamLimits

0x1a83,	// (0x00020a86) input_focus_pane_vc

0xbb69,	// (0x0002ab6c) button_value_adjust_pane_cp3_vc

0xbb71,	// (0x0002ab74) button_value_adjust_pane_cp5_vc

0xbb79,	// (0x0002ab7c) form_field_data_pane_vc_ParamLimits

0xbb79,	// (0x0002ab7c) form_field_data_pane_vc

0xbb90,	// (0x0002ab93) form_field_data_pane_vc_cp2

0xbb98,	// (0x0002ab9b) form_field_data_wide_pane_vc_ParamLimits

0xbb98,	// (0x0002ab9b) form_field_data_wide_pane_vc

0xbbae,	// (0x0002abb1) form_field_data_wide_pane_vc_cp2

0xbbb6,	// (0x0002abb9) form_field_popup_pane_vc_ParamLimits

0xbbb6,	// (0x0002abb9) form_field_popup_pane_vc

0xbbcd,	// (0x0002abd0) form_field_popup_wide_pane_vc_ParamLimits

0xbbcd,	// (0x0002abd0) form_field_popup_wide_pane_vc

0xbbe3,	// (0x0002abe6) form_field_slider_pane_vc_ParamLimits

0xbbe3,	// (0x0002abe6) form_field_slider_pane_vc

0xbbf6,	// (0x0002abf9) form_field_slider_wide_pane_vc_ParamLimits

0xbbf6,	// (0x0002abf9) form_field_slider_wide_pane_vc

0xbc09,	// (0x0002ac0c) grid_touch_1_pane_ParamLimits

0xbc09,	// (0x0002ac0c) grid_touch_1_pane

0xbc15,	// (0x0002ac18) grid_touch_2_pane_ParamLimits

0xbc15,	// (0x0002ac18) grid_touch_2_pane

0x7cae,	// (0x00026cb1) touch_pane_g1_ParamLimits

0x7cae,	// (0x00026cb1) touch_pane_g1

0xbc2d,	// (0x0002ac30) cell_app_pane_cp_wide_ParamLimits

0xbc2d,	// (0x0002ac30) cell_app_pane_cp_wide

0xbc3e,	// (0x0002ac41) grid_popup_fast_wide_pane_ParamLimits

0xbc3e,	// (0x0002ac41) grid_popup_fast_wide_pane

0xbc52,	// (0x0002ac55) scroll_pane_cp19_ParamLimits

0xbc52,	// (0x0002ac55) scroll_pane_cp19

0x15fd,	// (0x00020600) bg_popup_window_pane_cp20

0xbc66,	// (0x0002ac69) listscroll_popup_fast_wide_pane

0x1659,	// (0x0002065c) grid_indicator_nsta_pane

0xbc6e,	// (0x0002ac71) clock_nsta_pane_g1

0xbc77,	// (0x0002ac7a) clock_nsta_pane_t1

0xbc93,	// (0x0002ac96) cell_indicator_nsta_pane_ParamLimits

0xbc93,	// (0x0002ac96) cell_indicator_nsta_pane

0xbcc4,	// (0x0002acc7) cell_indicator_nsta_pane_g1

0xbcd2,	// (0x0002acd5) cell_indicator_nsta_pane_g2

0x0001,

0xfab0,	// (0x0002eab3) cell_indicator_nsta_pane_g

0xbcdf,	// (0x0002ace2) clock_nsta_pane_cp

0xbce8,	// (0x0002aceb) indicator_nsta_pane_cp

0xbcf0,	// (0x0002acf3) nsta_clock_indic_pane_g1

0x16af,	// (0x000206b2) grid_indicator_pane

0x7278,	// (0x0002627b) scroll_pane_cp29

0x7478,	// (0x0002647b) indicator_nsta_pane_cp2_ParamLimits

0x7478,	// (0x0002647b) indicator_nsta_pane_cp2

0x1659,	// (0x0002065c) main_apps_wheel_pane

0x9f9f,	// (0x00028fa2) form_midp_field_text_pane_ParamLimits

0xa0e8,	// (0x000290eb) scroll_bar_cp050_ParamLimits

0xbd40,	// (0x0002ad43) cell_indicator_pane_ParamLimits

0xbd40,	// (0x0002ad43) cell_indicator_pane

0xbd59,	// (0x0002ad5c) cell_indicator_pane_g1

0xbd63,	// (0x0002ad66) grid_wheel_folder_pane_ParamLimits

0xbd63,	// (0x0002ad66) grid_wheel_folder_pane

0xbd79,	// (0x0002ad7c) list_wheel_apps_pane_ParamLimits

0xbd79,	// (0x0002ad7c) list_wheel_apps_pane

0xbd8a,	// (0x0002ad8d) main_apps_wheel_pane_g1_ParamLimits

0xbd8a,	// (0x0002ad8d) main_apps_wheel_pane_g1

0xbd9e,	// (0x0002ada1) main_apps_wheel_pane_g2_ParamLimits

0xbd9e,	// (0x0002ada1) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x0002eacf) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x0002eacf) main_apps_wheel_pane_g

0xbdb6,	// (0x0002adb9) main_apps_wheel_pane_t1_ParamLimits

0xbdb6,	// (0x0002adb9) main_apps_wheel_pane_t1

0xbdd9,	// (0x0002addc) list_wheel_apps_pane_g1

0xbde1,	// (0x0002ade4) list_wheel_apps_pane_g2

0xbde9,	// (0x0002adec) list_wheel_apps_pane_g3

0xbdf3,	// (0x0002adf6) list_wheel_apps_pane_g4

0xbdfd,	// (0x0002ae00) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x0002ead4) list_wheel_apps_pane_g

0x7774,	// (0x00026777) navi_icon_text_pane

0x840a,	// (0x0002740d) aid_fill_nsta

0xbe20,	// (0x0002ae23) navi_icon_text_pane_g1

0xbe2c,	// (0x0002ae2f) navi_icon_text_pane_t1

0x7617,	// (0x0002661a) list_set_graphic_pane_t1_ParamLimits

0x7617,	// (0x0002661a) list_set_graphic_pane_t1

0xa82b,	// (0x0002982e) popup_midp_note_alarm_window_t6_ParamLimits

0xa82b,	// (0x0002982e) popup_midp_note_alarm_window_t6

0xa83d,	// (0x00029840) popup_midp_note_alarm_window_t7_ParamLimits

0xa83d,	// (0x00029840) popup_midp_note_alarm_window_t7

0xa84f,	// (0x00029852) popup_midp_note_alarm_window_t8_ParamLimits

0xa84f,	// (0x00029852) popup_midp_note_alarm_window_t8

0xa861,	// (0x00029864) popup_midp_note_alarm_window_t9_ParamLimits

0xa861,	// (0x00029864) popup_midp_note_alarm_window_t9

0xa873,	// (0x00029876) popup_midp_note_alarm_window_t10_ParamLimits

0xa873,	// (0x00029876) popup_midp_note_alarm_window_t10

0xa885,	// (0x00029888) popup_midp_note_alarm_window_t11_ParamLimits

0xa885,	// (0x00029888) popup_midp_note_alarm_window_t11

0xa897,	// (0x0002989a) scroll_pane_cp17_ParamLimits

0xa897,	// (0x0002989a) scroll_pane_cp17

0x8a6d,	// (0x00027a70) volume_small_pane_cp_g1

0x8db9,	// (0x00027dbc) volume_small_pane_cp_g2

0x8dc2,	// (0x00027dc5) volume_small_pane_cp_g3

0x8dcb,	// (0x00027dce) volume_small_pane_cp_g4

0x8dd4,	// (0x00027dd7) volume_small_pane_cp_g5

0x8d83,	// (0x00027d86) volume_small_pane_cp_g6

0x8ddd,	// (0x00027de0) volume_small_pane_cp_g7

0x8de6,	// (0x00027de9) volume_small_pane_cp_g8

0x8def,	// (0x00027df2) volume_small_pane_cp_g9

0x8df8,	// (0x00027dfb) volume_small_pane_cp_g10

0x79d5,	// (0x000269d8) midp_ticker_pane_g1_ParamLimits

0x79e1,	// (0x000269e4) midp_ticker_pane_g2_ParamLimits

0xf74e,	// (0x0002e751) midp_ticker_pane_g_ParamLimits

0x79ed,	// (0x000269f0) midp_ticker_pane_t1_ParamLimits

0x8420,	// (0x00027423) aid_fill_nsta_2

0xa0d4,	// (0x000290d7) list_form2_midp_pane

0xb1df,	// (0x0002a1e2) midp_editing_number_pane_ParamLimits

0xb1ee,	// (0x0002a1f1) midp_ticker_pane_ParamLimits

0xbe3e,	// (0x0002ae41) form2_midp_field_pane

0xbe62,	// (0x0002ae65) scroll_pane_cp51

0xbe82,	// (0x0002ae85) form2_midp_button_pane_ParamLimits

0xbe82,	// (0x0002ae85) form2_midp_button_pane

0xbe94,	// (0x0002ae97) form2_midp_content_pane_ParamLimits

0xbe94,	// (0x0002ae97) form2_midp_content_pane

0xbeae,	// (0x0002aeb1) form2_midp_field_choice_group_pane

0xbeb6,	// (0x0002aeb9) form2_midp_field_pane_g1

0xbebe,	// (0x0002aec1) form2_midp_field_pane_g2

0xbec6,	// (0x0002aec9) form2_midp_field_pane_g3

0xbece,	// (0x0002aed1) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x0002eaf9) form2_midp_field_pane_g

0xbed6,	// (0x0002aed9) form2_midp_gauge_slider_pane

0xbede,	// (0x0002aee1) form2_midp_gauge_wait_pane

0xbee6,	// (0x0002aee9) form2_midp_image_pane_ParamLimits

0xbee6,	// (0x0002aee9) form2_midp_image_pane

0xbf01,	// (0x0002af04) form2_midp_label_pane_ParamLimits

0xbf01,	// (0x0002af04) form2_midp_label_pane

0xbf1a,	// (0x0002af1d) form2_midp_label_pane_cp_ParamLimits

0xbf1a,	// (0x0002af1d) form2_midp_label_pane_cp

0xbf3b,	// (0x0002af3e) form2_midp_string_pane_ParamLimits

0xbf3b,	// (0x0002af3e) form2_midp_string_pane

0x60ee,	// (0x000250f1) form2_midp_text_pane_ParamLimits

0x60ee,	// (0x000250f1) form2_midp_text_pane

0xbf4d,	// (0x0002af50) form2_midp_time_pane

0xbf5d,	// (0x0002af60) input_focus_pane_cp51_ParamLimits

0xbf5d,	// (0x0002af60) input_focus_pane_cp51

0xbf75,	// (0x0002af78) form2_midp_label_pane_t1_ParamLimits

0xbf75,	// (0x0002af78) form2_midp_label_pane_t1

0x6107,	// (0x0002510a) form2_mdip_text_pane_t1_ParamLimits

0x6107,	// (0x0002510a) form2_mdip_text_pane_t1

0x6125,	// (0x00025128) form2_midp_time_pane_t1

0xbfbe,	// (0x0002afc1) form2_midp_gauge_slider_pane_t1

0xbfd0,	// (0x0002afd3) form2_midp_gauge_slider_pane_t2

0xbfe2,	// (0x0002afe5) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x0002eb02) form2_midp_gauge_slider_pane_t

0xbff4,	// (0x0002aff7) form2_midp_slider_pane

0xc000,	// (0x0002b003) form2_midp_gauge_wait_pane_t1

0xc00e,	// (0x0002b011) form2_midp_wait_pane_ParamLimits

0xc00e,	// (0x0002b011) form2_midp_wait_pane

0xc039,	// (0x0002b03c) list_single_2graphic_pane_cp4_ParamLimits

0xc039,	// (0x0002b03c) list_single_2graphic_pane_cp4

0x9df0,	// (0x00028df3) list_single_midp_graphic_pane_cp_ParamLimits

0x9df0,	// (0x00028df3) list_single_midp_graphic_pane_cp

0x15fd,	// (0x00020600) list_highlight_pane_cp20

0xc061,	// (0x0002b064) list_single_2graphic_pane_g1_cp4

0xb669,	// (0x0002a66c) list_single_2graphic_pane_g2_cp4

0xc069,	// (0x0002b06c) list_single_2graphic_pane_t1_cp4

0x1659,	// (0x0002065c) list_highlight_pane_cp21

0xc078,	// (0x0002b07b) list_single_midp_graphic_pane_g4_cp

0xc087,	// (0x0002b08a) list_single_midp_graphic_pane_t1_cp

0xc09c,	// (0x0002b09f) form2_mdip_string_pane_t1_ParamLimits

0xc09c,	// (0x0002b09f) form2_mdip_string_pane_t1

0x15fd,	// (0x00020600) bg_wml_button_pane_cp2

0x15f3,	// (0x000205f6) form2_midp_image_pane_g1

0x55f6,	// (0x000245f9) list_double_large_graphic_pane_g5_ParamLimits

0x55f6,	// (0x000245f9) list_double_large_graphic_pane_g5

0x78fc,	// (0x000268ff) midp_form_pane_ParamLimits

0x1659,	// (0x0002065c) main_apps_wheel_pane_ParamLimits

0x81f2,	// (0x000271f5) popup_preview_window_ParamLimits

0x81f2,	// (0x000271f5) popup_preview_window

0x83ad,	// (0x000273b0) popup_touch_info_window_ParamLimits

0x83ad,	// (0x000273b0) popup_touch_info_window

0x83cb,	// (0x000273ce) popup_touch_menu_window_ParamLimits

0x83cb,	// (0x000273ce) popup_touch_menu_window

0x15e9,	// (0x000205ec) bg_popup_sub_pane_cp6

0xc1a3,	// (0x0002b1a6) list_touch_menu_pane

0xc1ab,	// (0x0002b1ae) list_single_touch_menu_pane_ParamLimits

0xc1ab,	// (0x0002b1ae) list_single_touch_menu_pane

0xc1c1,	// (0x0002b1c4) list_single_touch_menu_pane_t1

0x1659,	// (0x0002065c) bg_popup_sub_pane_cp7_ParamLimits

0x1659,	// (0x0002065c) bg_popup_sub_pane_cp7

0xc1cf,	// (0x0002b1d2) heading_sub_pane

0xc1d7,	// (0x0002b1da) list_touch_info_pane_ParamLimits

0xc1d7,	// (0x0002b1da) list_touch_info_pane

0xc1e6,	// (0x0002b1e9) list_single_touch_info_pane_ParamLimits

0xc1e6,	// (0x0002b1e9) list_single_touch_info_pane

0xc1f8,	// (0x0002b1fb) list_single_touch_info_pane_t1

0xc206,	// (0x0002b209) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x0002eb10) list_single_touch_info_pane_t

0x78f4,	// (0x000268f7) bg_popup_heading_pane_cp

0xc214,	// (0x0002b217) heading_sub_pane_t1

0x9d15,	// (0x00028d18) bg_popup_preview_window_pane_cp_ParamLimits

0x9d15,	// (0x00028d18) bg_popup_preview_window_pane_cp

0xc1cf,	// (0x0002b1d2) heading_preview_pane

0xc1d7,	// (0x0002b1da) list_preview_pane_ParamLimits

0xc1d7,	// (0x0002b1da) list_preview_pane

0xc222,	// (0x0002b225) popup_preview_window_g1

0xc1e6,	// (0x0002b1e9) list_single_preview_pane_ParamLimits

0xc1e6,	// (0x0002b1e9) list_single_preview_pane

0xc22a,	// (0x0002b22d) list_single_preview_pane_g1

0xc232,	// (0x0002b235) list_single_preview_pane_t1

0xc1f8,	// (0x0002b1fb) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x0002eb15) list_single_preview_pane_t

0xc240,	// (0x0002b243) bg_popup_heading_pane_cp2_ParamLimits

0xc240,	// (0x0002b243) bg_popup_heading_pane_cp2

0xc256,	// (0x0002b259) heading_preview_pane_g1

0xc25e,	// (0x0002b261) heading_preview_pane_t1_ParamLimits

0xc25e,	// (0x0002b261) heading_preview_pane_t1

0x16c6,	// (0x000206c9) soft_indicator_pane_t1_ParamLimits

0x19a1,	// (0x000209a4) scroll_pane_ParamLimits

0x377f,	// (0x00022782) scroll_sc2_left_pane

0x3776,	// (0x00022779) scroll_sc2_right_pane

0x379e,	// (0x000227a1) scroll_bg_pane_g1_ParamLimits

0x37b3,	// (0x000227b6) scroll_bg_pane_g2_ParamLimits

0x37cb,	// (0x000227ce) scroll_bg_pane_g3_ParamLimits

0xf6d9,	// (0x0002e6dc) scroll_bg_pane_g_ParamLimits

0x379e,	// (0x000227a1) scroll_handle_pane_g1_ParamLimits

0x37e0,	// (0x000227e3) scroll_handle_pane_g2_ParamLimits

0x37cb,	// (0x000227ce) scroll_handle_pane_g3_ParamLimits

0xf6e0,	// (0x0002e6e3) scroll_handle_pane_g_ParamLimits

0x7e75,	// (0x00026e78) popup_choice_list_window_ParamLimits

0x7e75,	// (0x00026e78) popup_choice_list_window

0x883f,	// (0x00027842) choice_list_pane

0x88f1,	// (0x000278f4) cell_toolbar_pane_t1

0x8919,	// (0x0002791c) toolbar_button_pane_ParamLimits

0xad51,	// (0x00029d54) ai_gene_pane_1_t2_ParamLimits

0xad51,	// (0x00029d54) ai_gene_pane_1_t2

0x0001,

0xf903,	// (0x0002e906) ai_gene_pane_1_t_ParamLimits

0xf903,	// (0x0002e906) ai_gene_pane_1_t

0xc27b,	// (0x0002b27e) scroll_sc2_left_pane_g1

0xc27b,	// (0x0002b27e) scroll_sc2_right_pane_g1

0x7e2b,	// (0x00026e2e) bg_popup_sub_pane_cp10

0xc285,	// (0x0002b288) list_choice_list_pane

0xc29e,	// (0x0002b2a1) list_single_choice_list_pane_ParamLimits

0xc29e,	// (0x0002b2a1) list_single_choice_list_pane

0xc2b1,	// (0x0002b2b4) list_single_choice_list_pane_g1

0x6f1f,	// (0x00025f22) list_single_choice_list_pane_t1_ParamLimits

0x6f1f,	// (0x00025f22) list_single_choice_list_pane_t1

0xc2b9,	// (0x0002b2bc) choice_list_pane_g1

0xc2c1,	// (0x0002b2c4) choice_list_pane_t1

0x15e9,	// (0x000205ec) input_focus_pane_cp11

0x1d6c,	// (0x00020d6f) title_pane_stacon_g2_ParamLimits

0x1d6c,	// (0x00020d6f) title_pane_stacon_g2

0x0002,

0xf6bf,	// (0x0002e6c2) title_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0002e6c2) title_pane_stacon_g

0x78f4,	// (0x000268f7) cursor_press_pane

0x7f1d,	// (0x00026f20) popup_fep_hwr_window_ParamLimits

0x7f1d,	// (0x00026f20) popup_fep_hwr_window

0x7f95,	// (0x00026f98) popup_fep_vkb_window_ParamLimits

0x7f95,	// (0x00026f98) popup_fep_vkb_window

0xc2cf,	// (0x0002b2d2) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x0002eb3e) fep_vkb_side_pane_g_ParamLimits

0x8e3a,	// (0x00027e3d) fep_hwr_candidate_pane_ParamLimits

0x8e3a,	// (0x00027e3d) fep_hwr_candidate_pane

0x8e64,	// (0x00027e67) fep_hwr_side_pane_ParamLimits

0x8e64,	// (0x00027e67) fep_hwr_side_pane

0x8e84,	// (0x00027e87) fep_hwr_top_pane_ParamLimits

0x8e84,	// (0x00027e87) fep_hwr_top_pane

0x8e9c,	// (0x00027e9f) fep_hwr_write_pane_ParamLimits

0x8e9c,	// (0x00027e9f) fep_hwr_write_pane

0xfb3b,	// (0x0002eb3e) fep_vkb_side_pane_g

0xc2d7,	// (0x0002b2da) fep_hwr_top_pane_g1

0xc2e9,	// (0x0002b2ec) fep_hwr_top_pane_g2

0x8ec8,	// (0x00027ecb) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x0002eb1a) fep_hwr_top_pane_g

0x8edd,	// (0x00027ee0) fep_hwr_top_text_pane

0x38a3,	// (0x000228a6) fep_hwr_top_text_pane_g1

0xc31f,	// (0x0002b322) fep_hwr_top_text_pane_t1

0x8fd3,	// (0x00027fd6) fep_hwr_candidate_pane_g1

0xc564,	// (0x0002b567) fep_vkb_keypad_pane_g3_ParamLimits

0xc564,	// (0x0002b567) fep_vkb_keypad_pane_g3

0xc58c,	// (0x0002b58f) fep_vkb_keypad_pane_g4_ParamLimits

0xc58c,	// (0x0002b58f) fep_vkb_keypad_pane_g4

0xc5fb,	// (0x0002b5fe) fep_vkb_bottom_pane_g2_ParamLimits

0xc5fb,	// (0x0002b5fe) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x0002eb45) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x0002eb45) fep_vkb_bottom_pane_g

0xc27b,	// (0x0002b27e) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x0002eb4f) cell_vkb_side_pane_g

0xc686,	// (0x0002b689) cell_vkb_side_pane_t1

0xc694,	// (0x0002b697) cell_vkb_side_pane_t1_copy1

0xc27b,	// (0x0002b27e) bg_fep_vkb_candidate_pane_g2

0xc7c0,	// (0x0002b7c3) cell_vkb_candidate_pane_ParamLimits

0xc32d,	// (0x0002b330) aid_size_cell_vkb_ParamLimits

0xc32d,	// (0x0002b330) aid_size_cell_vkb

0xc7c0,	// (0x0002b7c3) cell_vkb_candidate_pane

0x8fed,	// (0x00027ff0) bg_popup_fep_shadow_pane_g1

0xc3bb,	// (0x0002b3be) fep_vkb_bottom_pane_ParamLimits

0xc3bb,	// (0x0002b3be) fep_vkb_bottom_pane

0xc3f1,	// (0x0002b3f4) fep_vkb_candidate_pane_ParamLimits

0xc3f1,	// (0x0002b3f4) fep_vkb_candidate_pane

0xc40d,	// (0x0002b410) fep_vkb_keypad_pane_ParamLimits

0xc40d,	// (0x0002b410) fep_vkb_keypad_pane

0xc44c,	// (0x0002b44f) fep_vkb_side_pane_ParamLimits

0xc44c,	// (0x0002b44f) fep_vkb_side_pane

0xc488,	// (0x0002b48b) fep_vkb_top_pane_ParamLimits

0xc488,	// (0x0002b48b) fep_vkb_top_pane

0xc4bd,	// (0x0002b4c0) fep_vkb_top_pane_g1_ParamLimits

0xc4bd,	// (0x0002b4c0) fep_vkb_top_pane_g1

0xc4cc,	// (0x0002b4cf) fep_vkb_top_pane_g2_ParamLimits

0xc4cc,	// (0x0002b4cf) fep_vkb_top_pane_g2

0xc4db,	// (0x0002b4de) fep_vkb_top_pane_g3_ParamLimits

0xc4db,	// (0x0002b4de) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x0002eb35) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x0002eb35) fep_vkb_top_pane_g

0xc4f9,	// (0x0002b4fc) fep_vkb_top_text_pane_ParamLimits

0xc4f9,	// (0x0002b4fc) fep_vkb_top_text_pane

0xc50a,	// (0x0002b50d) fep_vkb_side_pane_g1_ParamLimits

0xc50a,	// (0x0002b50d) fep_vkb_side_pane_g1

0xc553,	// (0x0002b556) grid_vkb_side_pane_ParamLimits

0xc553,	// (0x0002b556) grid_vkb_side_pane

0x8ff5,	// (0x00027ff8) bg_popup_fep_shadow_pane_g2

0x8ffe,	// (0x00028001) bg_popup_fep_shadow_pane_g3

0x9006,	// (0x00028009) bg_popup_fep_shadow_pane_g4

0x900f,	// (0x00028012) bg_popup_fep_shadow_pane_g5

0x9019,	// (0x0002801c) bg_popup_fep_shadow_pane_g6

0x9021,	// (0x00028024) bg_popup_fep_shadow_pane_g7

0x1b69,	// (0x00020b6c) bg_popup_fep_shadow_pane_g8

0xc5aa,	// (0x0002b5ad) grid_vkb_keypad_number_pane_ParamLimits

0xc5aa,	// (0x0002b5ad) grid_vkb_keypad_number_pane

0xc5ba,	// (0x0002b5bd) grid_vkb_keypad_pane_ParamLimits

0xc5ba,	// (0x0002b5bd) grid_vkb_keypad_pane

0xc5e0,	// (0x0002b5e3) fep_vkb_bottom_pane_g1_ParamLimits

0xc5e0,	// (0x0002b5e3) fep_vkb_bottom_pane_g1

0xc609,	// (0x0002b60c) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc609,	// (0x0002b60c) grid_vkb_keypad_bottom_left_pane

0xc61e,	// (0x0002b621) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc61e,	// (0x0002b621) grid_vkb_keypad_bottom_right_pane

0xc633,	// (0x0002b636) fep_vkb_top_text_pane_g1

0xc64e,	// (0x0002b651) fep_vkb_top_text_pane_t1

0xc663,	// (0x0002b666) cell_vkb_side_pane_ParamLimits

0xc663,	// (0x0002b666) cell_vkb_side_pane

0xc27b,	// (0x0002b27e) cell_vkb_side_pane_g1

0xc6a2,	// (0x0002b6a5) cell_vkb_keypad_pane_ParamLimits

0xc6a2,	// (0x0002b6a5) cell_vkb_keypad_pane

0xc717,	// (0x0002b71a) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x0002eb62) bg_popup_fep_shadow_pane_g

0xc27b,	// (0x0002b27e) cell_hwr_side_pane_g1

0xc27b,	// (0x0002b27e) cell_hwr_side_pane_g2

0xc721,	// (0x0002b724) cell_vkb_keypad_pane_t1

0xc72f,	// (0x0002b732) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc72f,	// (0x0002b732) cell_vkb_keypad_bottom_left_pane

0xc74c,	// (0x0002b74f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc74c,	// (0x0002b74f) cell_vkb_keypad_bottom_right_pane

0xc27b,	// (0x0002b27e) cell_vkb_keypad_bottom_left_pane_g1

0xc27b,	// (0x0002b27e) cell_vkb_keypad_bottom_right_pane_g1

0xc785,	// (0x0002b788) cell_vkb_keypad_number_pane_ParamLimits

0xc785,	// (0x0002b788) cell_vkb_keypad_number_pane

0xc7a4,	// (0x0002b7a7) cell_vkb_keypad_number_pane_g1

0xc7ae,	// (0x0002b7b1) cell_vkb_keypad_number_pane_g2

0xc7b7,	// (0x0002b7ba) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x0002eb54) cell_vkb_keypad_number_pane_g

0xc721,	// (0x0002b724) cell_vkb_keypad_number_pane_t1

0xc7db,	// (0x0002b7de) fep_vkb_candidate_pane_g1

0x0001,

0xfb4c,	// (0x0002eb4f) cell_hwr_side_pane_g

0xc7f4,	// (0x0002b7f7) cell_hwr_side_pane_t1

0x9033,	// (0x00028036) cell_hwr_side_pane_t1_copy1

0xc4eb,	// (0x0002b4ee) cell_hwr_candidate_pane_g1

0x9041,	// (0x00028044) cell_hwr_candidate_pane_t1

0xc27b,	// (0x0002b27e) cell_vkb_candidate_pane_g2

0xc87a,	// (0x0002b87d) cell_vkb_candidate_pane_t1

0x8e01,	// (0x00027e04) bg_popup_fep_shadow_pane_ParamLimits

0x8e01,	// (0x00027e04) bg_popup_fep_shadow_pane

0x15b9,	// (0x000205bc) bg_fep_hwr_top_pane_g4

0xc2fb,	// (0x0002b2fe) bg_hwr_side_pane_g1_ParamLimits

0xc2fb,	// (0x0002b2fe) bg_hwr_side_pane_g1

0x8f19,	// (0x00027f1c) cell_hwr_side_pane_ParamLimits

0x8f19,	// (0x00027f1c) cell_hwr_side_pane

0x8f54,	// (0x00027f57) fep_hwr_write_pane_g1_ParamLimits

0x8f54,	// (0x00027f57) fep_hwr_write_pane_g1

0x8f61,	// (0x00027f64) fep_hwr_write_pane_g2_ParamLimits

0x8f61,	// (0x00027f64) fep_hwr_write_pane_g2

0x8f6e,	// (0x00027f71) fep_hwr_write_pane_g3_ParamLimits

0x8f6e,	// (0x00027f71) fep_hwr_write_pane_g3

0x8f7c,	// (0x00027f7f) fep_hwr_write_pane_g4_ParamLimits

0x8f7c,	// (0x00027f7f) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x0002eb21) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x0002eb21) fep_hwr_write_pane_g

0x15b9,	// (0x000205bc) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x15b9,	// (0x000205bc) bg_fep_hwr_candidate_pane_g2

0x8f91,	// (0x00027f94) cell_hwr_candidate_pane_ParamLimits

0x8f91,	// (0x00027f94) cell_hwr_candidate_pane

0x8fd3,	// (0x00027fd6) fep_hwr_candidate_pane_g1_ParamLimits

0xc35b,	// (0x0002b35e) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc35b,	// (0x0002b35e) bg_popup_fep_shadow_pane_cp2

0xc4eb,	// (0x0002b4ee) fep_vkb_top_pane_g4_ParamLimits

0xc4eb,	// (0x0002b4ee) fep_vkb_top_pane_g4

0xc531,	// (0x0002b534) fep_vkb_side_pane_g2_ParamLimits

0xc531,	// (0x0002b534) fep_vkb_side_pane_g2

0x5719,	// (0x0002471c) list_setting_pane_t4_ParamLimits

0x5719,	// (0x0002471c) list_setting_pane_t4

0x57ab,	// (0x000247ae) list_setting_number_pane_t5_ParamLimits

0x57ab,	// (0x000247ae) list_setting_number_pane_t5

0x72a7,	// (0x000262aa) list_double_heading_pane_cp2_ParamLimits

0x72a7,	// (0x000262aa) list_double_heading_pane_cp2

0xc888,	// (0x0002b88b) list_double_heading_pane_g1_cp2_ParamLimits

0xc888,	// (0x0002b88b) list_double_heading_pane_g1_cp2

0xc894,	// (0x0002b897) list_double_heading_pane_g2_cp2_ParamLimits

0xc894,	// (0x0002b897) list_double_heading_pane_g2_cp2

0xc8a8,	// (0x0002b8ab) list_double_heading_pane_t1_cp2_ParamLimits

0xc8a8,	// (0x0002b8ab) list_double_heading_pane_t1_cp2

0xc8be,	// (0x0002b8c1) list_double_heading_pane_t2_cp2_ParamLimits

0xc8be,	// (0x0002b8c1) list_double_heading_pane_t2_cp2

0x15e1,	// (0x000205e4) aid_value_unit2

0x67a9,	// (0x000257ac) popup_preview_fixed_window

0x179d,	// (0x000207a0) bg_popup_preview_window_pane_cp02

0xc8d0,	// (0x0002b8d3) list_preview_fixed_pane

0xc916,	// (0x0002b919) list_empty_pane_fp_ParamLimits

0xc916,	// (0x0002b919) list_empty_pane_fp

0xc916,	// (0x0002b919) list_single_cale_day_pane_fp_ParamLimits

0xc916,	// (0x0002b919) list_single_cale_day_pane_fp

0xc916,	// (0x0002b919) list_single_graphic_heading_pane_fp_ParamLimits

0xc916,	// (0x0002b919) list_single_graphic_heading_pane_fp

0xc916,	// (0x0002b919) list_single_graphic_pane_fp_ParamLimits

0xc916,	// (0x0002b919) list_single_graphic_pane_fp

0xc916,	// (0x0002b919) list_single_heading_pane_fp_ParamLimits

0xc916,	// (0x0002b919) list_single_heading_pane_fp

0xc916,	// (0x0002b919) list_single_pane_fp_ParamLimits

0xc916,	// (0x0002b919) list_single_pane_fp

0xc92c,	// (0x0002b92f) list_single_pane_fp_g1_ParamLimits

0xc92c,	// (0x0002b92f) list_single_pane_fp_g1

0x56e4,	// (0x000246e7) list_single_pane_fp_g2_ParamLimits

0x56e4,	// (0x000246e7) list_single_pane_fp_g2

0x6138,	// (0x0002513b) list_single_pane_fp_g3_ParamLimits

0x6138,	// (0x0002513b) list_single_pane_fp_g3

0xc938,	// (0x0002b93b) list_single_pane_fp_g4_ParamLimits

0xc938,	// (0x0002b93b) list_single_pane_fp_g4

0x0003,

0xfb80,	// (0x0002eb83) list_single_pane_fp_g_ParamLimits

0xfb80,	// (0x0002eb83) list_single_pane_fp_g

0x614c,	// (0x0002514f) list_single_pane_fp_t1_ParamLimits

0x614c,	// (0x0002514f) list_single_pane_fp_t1

0x6163,	// (0x00025166) list_single_graphic_pane_fp_g1_ParamLimits

0x6163,	// (0x00025166) list_single_graphic_pane_fp_g1

0xc92c,	// (0x0002b92f) list_single_graphic_pane_fp_g2_ParamLimits

0xc92c,	// (0x0002b92f) list_single_graphic_pane_fp_g2

0x56e4,	// (0x000246e7) list_single_graphic_pane_fp_g3_ParamLimits

0x56e4,	// (0x000246e7) list_single_graphic_pane_fp_g3

0x6138,	// (0x0002513b) list_single_graphic_pane_fp_g4_ParamLimits

0x6138,	// (0x0002513b) list_single_graphic_pane_fp_g4

0xc938,	// (0x0002b93b) list_single_graphic_pane_fp_g5_ParamLimits

0xc938,	// (0x0002b93b) list_single_graphic_pane_fp_g5

0x0004,

0xfb89,	// (0x0002eb8c) list_single_graphic_pane_fp_g_ParamLimits

0xfb89,	// (0x0002eb8c) list_single_graphic_pane_fp_g

0x616f,	// (0x00025172) list_single_graphic_pane_fp_t1_ParamLimits

0x616f,	// (0x00025172) list_single_graphic_pane_fp_t1

0x6163,	// (0x00025166) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6163,	// (0x00025166) list_single_graphic_heading_pane_fp_g1

0xc92c,	// (0x0002b92f) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc92c,	// (0x0002b92f) list_single_graphic_heading_pane_fp_g2

0x56e4,	// (0x000246e7) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x56e4,	// (0x000246e7) list_single_graphic_heading_pane_fp_g3

0x6138,	// (0x0002513b) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6138,	// (0x0002513b) list_single_graphic_heading_pane_fp_g4

0xc938,	// (0x0002b93b) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc938,	// (0x0002b93b) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb89,	// (0x0002eb8c) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb89,	// (0x0002eb8c) list_single_graphic_heading_pane_fp_g

0x6185,	// (0x00025188) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6185,	// (0x00025188) list_single_graphic_heading_pane_fp_t1

0x619b,	// (0x0002519e) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x619b,	// (0x0002519e) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb94,	// (0x0002eb97) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb94,	// (0x0002eb97) list_single_graphic_heading_pane_fp_t

0x61ad,	// (0x000251b0) list_single_cale_day_pane_fp_g1_ParamLimits

0x61ad,	// (0x000251b0) list_single_cale_day_pane_fp_g1

0xc944,	// (0x0002b947) list_single_cale_day_pane_fp_g2_ParamLimits

0xc944,	// (0x0002b947) list_single_cale_day_pane_fp_g2

0x61e5,	// (0x000251e8) list_single_cale_day_pane_fp_g3_ParamLimits

0x61e5,	// (0x000251e8) list_single_cale_day_pane_fp_g3

0x620d,	// (0x00025210) list_single_cale_day_pane_fp_g4_ParamLimits

0x620d,	// (0x00025210) list_single_cale_day_pane_fp_g4

0x6231,	// (0x00025234) list_single_cale_day_pane_fp_g5_ParamLimits

0x6231,	// (0x00025234) list_single_cale_day_pane_fp_g5

0x0004,

0xfb99,	// (0x0002eb9c) list_single_cale_day_pane_fp_g_ParamLimits

0xfb99,	// (0x0002eb9c) list_single_cale_day_pane_fp_g

0x6255,	// (0x00025258) list_single_cale_day_pane_fp_t1_ParamLimits

0x6255,	// (0x00025258) list_single_cale_day_pane_fp_t1

0x627b,	// (0x0002527e) list_single_cale_day_pane_fp_t2_ParamLimits

0x627b,	// (0x0002527e) list_single_cale_day_pane_fp_t2

0x6294,	// (0x00025297) list_single_cale_day_pane_fp_t3_ParamLimits

0x6294,	// (0x00025297) list_single_cale_day_pane_fp_t3

0x0002,

0xfba4,	// (0x0002eba7) list_single_cale_day_pane_fp_t_ParamLimits

0xfba4,	// (0x0002eba7) list_single_cale_day_pane_fp_t

0xc92c,	// (0x0002b92f) list_empty_pane_fp_g1_ParamLimits

0xc92c,	// (0x0002b92f) list_empty_pane_fp_g1

0x62ad,	// (0x000252b0) list_empty_pane_fp_t1

0x62bb,	// (0x000252be) list_empty_pane_fp_t2

0x0001,

0xfbab,	// (0x0002ebae) list_empty_pane_fp_t

0xc92c,	// (0x0002b92f) list_single_heading_pane_fp_g1_ParamLimits

0xc92c,	// (0x0002b92f) list_single_heading_pane_fp_g1

0x56e4,	// (0x000246e7) list_single_heading_pane_fp_g2_ParamLimits

0x56e4,	// (0x000246e7) list_single_heading_pane_fp_g2

0x6138,	// (0x0002513b) list_single_heading_pane_fp_g3_ParamLimits

0x6138,	// (0x0002513b) list_single_heading_pane_fp_g3

0x0002,

0xfbb0,	// (0x0002ebb3) list_single_heading_pane_fp_g_ParamLimits

0xfbb0,	// (0x0002ebb3) list_single_heading_pane_fp_g

0x62c9,	// (0x000252cc) list_single_heading_pane_fp_t1_ParamLimits

0x62c9,	// (0x000252cc) list_single_heading_pane_fp_t1

0x62db,	// (0x000252de) list_single_heading_pane_fp_t2_ParamLimits

0x62db,	// (0x000252de) list_single_heading_pane_fp_t2

0x0001,

0xfbb7,	// (0x0002ebba) list_single_heading_pane_fp_t_ParamLimits

0xfbb7,	// (0x0002ebba) list_single_heading_pane_fp_t

0x6f77,	// (0x00025f7a) aid_size_cell_fast

0x1780,	// (0x00020783) soft_indicator_pane_cp1_t1

0x6f80,	// (0x00025f83) cell_app_pane_cp2_ParamLimits

0x6f80,	// (0x00025f83) cell_app_pane_cp2

0x8e23,	// (0x00027e26) fep_hwr_candidate_drop_down_list_pane

0x15c7,	// (0x000205ca) fep_hwr_candidate_pane_g3_ParamLimits

0x15c7,	// (0x000205ca) fep_hwr_candidate_pane_g3

0x15d4,	// (0x000205d7) fep_hwr_candidate_pane_g4_ParamLimits

0x15d4,	// (0x000205d7) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x0002eb2e) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x0002eb2e) fep_hwr_candidate_pane_g

0xc3e0,	// (0x0002b3e3) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc3e0,	// (0x0002b3e3) fep_vkb_candidate_drop_down_list_pane

0xc7e3,	// (0x0002b7e6) fep_vkb_candidate_pane_g3

0xc7eb,	// (0x0002b7ee) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x0002eb5b) fep_vkb_candidate_pane_g

0xc4eb,	// (0x0002b4ee) cell_hwr_candidate_pane_g1_ParamLimits

0xc802,	// (0x0002b805) cell_hwr_candidate_pane_g3_ParamLimits

0xc802,	// (0x0002b805) cell_hwr_candidate_pane_g3

0xc823,	// (0x0002b826) cell_hwr_candidate_pane_g4_ParamLimits

0xc823,	// (0x0002b826) cell_hwr_candidate_pane_g4

0x0002,

0xfb72,	// (0x0002eb75) cell_hwr_candidate_pane_g_ParamLimits

0xfb72,	// (0x0002eb75) cell_hwr_candidate_pane_g

0xc844,	// (0x0002b847) cell_vkb_candidate_pane_g3_ParamLimits

0xc844,	// (0x0002b847) cell_vkb_candidate_pane_g3

0xc85f,	// (0x0002b862) cell_vkb_candidate_pane_g4_ParamLimits

0xc85f,	// (0x0002b862) cell_vkb_candidate_pane_g4

0xc950,	// (0x0002b953) cell_app_pane_cp2_g1_ParamLimits

0xc950,	// (0x0002b953) cell_app_pane_cp2_g1

0xc96e,	// (0x0002b971) cell_app_pane_cp2_g2_ParamLimits

0xc96e,	// (0x0002b971) cell_app_pane_cp2_g2

0x0001,

0xfbbc,	// (0x0002ebbf) cell_app_pane_cp2_g_ParamLimits

0xfbbc,	// (0x0002ebbf) cell_app_pane_cp2_g

0xc97a,	// (0x0002b97d) cell_app_pane_cp2_t1_ParamLimits

0xc97a,	// (0x0002b97d) cell_app_pane_cp2_t1

0x1a83,	// (0x00020a86) grid_highlight_pane_cp1_ParamLimits

0x1a83,	// (0x00020a86) grid_highlight_pane_cp1

0x905f,	// (0x00028062) cell_hwr_candidate_pane_cp1_ParamLimits

0x905f,	// (0x00028062) cell_hwr_candidate_pane_cp1

0xc4eb,	// (0x0002b4ee) fep_hwr_candidate_drop_down_list_pane_g1

0xc98c,	// (0x0002b98f) fep_hwr_candidate_drop_down_list_pane_g2

0xc999,	// (0x0002b99c) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc1,	// (0x0002ebc4) fep_hwr_candidate_drop_down_list_pane_g

0x907e,	// (0x00028081) fep_hwr_candidate_drop_down_list_scroll_pane

0x9087,	// (0x0002808a) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x9087,	// (0x0002808a) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x9094,	// (0x00028097) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x9094,	// (0x00028097) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x90a1,	// (0x000280a4) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x90a1,	// (0x000280a4) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc844,	// (0x0002b847) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc844,	// (0x0002b847) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc85f,	// (0x0002b862) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc85f,	// (0x0002b862) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x90ae,	// (0x000280b1) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x90ae,	// (0x000280b1) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x90c9,	// (0x000280cc) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x90c9,	// (0x000280cc) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x90e4,	// (0x000280e7) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x90e4,	// (0x000280e7) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc8,	// (0x0002ebcb) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc8,	// (0x0002ebcb) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc9a6,	// (0x0002b9a9) cell_vkb_candidate_pane_cp1_ParamLimits

0xc9a6,	// (0x0002b9a9) cell_vkb_candidate_pane_cp1

0xc4eb,	// (0x0002b4ee) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc4eb,	// (0x0002b4ee) fep_vkb_candidate_drop_down_list_pane_g1

0xc98c,	// (0x0002b98f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc98c,	// (0x0002b98f) fep_vkb_candidate_drop_down_list_pane_g2

0xc999,	// (0x0002b99c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc999,	// (0x0002b99c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc1,	// (0x0002ebc4) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc1,	// (0x0002ebc4) fep_vkb_candidate_drop_down_list_pane_g

0xc9c6,	// (0x0002b9c9) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc9c6,	// (0x0002b9c9) fep_vkb_candidate_drop_down_list_scroll_pane

0xc9d3,	// (0x0002b9d6) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc9d3,	// (0x0002b9d6) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc9e0,	// (0x0002b9e3) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc9e0,	// (0x0002b9e3) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc9ec,	// (0x0002b9ef) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc9ec,	// (0x0002b9ef) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc802,	// (0x0002b805) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc802,	// (0x0002b805) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc823,	// (0x0002b826) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc823,	// (0x0002b826) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc9f8,	// (0x0002b9fb) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc9f8,	// (0x0002b9fb) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca19,	// (0x0002ba1c) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca19,	// (0x0002ba1c) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca3a,	// (0x0002ba3d) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca3a,	// (0x0002ba3d) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd9,	// (0x0002ebdc) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd9,	// (0x0002ebdc) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x68c3,	// (0x000258c6) title_pane_g1_ParamLimits

0x68d0,	// (0x000258d3) title_pane_g2_ParamLimits

0xf54e,	// (0x0002e551) title_pane_g_ParamLimits

0x389b,	// (0x0002289e) aid_call2_pane

0x3893,	// (0x00022896) aid_call_pane

0x38a3,	// (0x000228a6) popup_clock_analogue_window_g1

0x38a3,	// (0x000228a6) popup_clock_analogue_window_g2

0x7288,	// (0x0002628b) popup_clock_analogue_window_g3

0x7291,	// (0x00026294) popup_clock_analogue_window_g4

0x15f3,	// (0x000205f6) popup_clock_analogue_window_g5

0x0004,

0xf6ee,	// (0x0002e6f1) popup_clock_analogue_window_g

0x7299,	// (0x0002629c) popup_clock_analogue_window_t1

0x72d1,	// (0x000262d4) clock_digital_number_pane_ParamLimits

0x72d1,	// (0x000262d4) clock_digital_number_pane

0x72dd,	// (0x000262e0) clock_digital_number_pane_cp02_ParamLimits

0x72dd,	// (0x000262e0) clock_digital_number_pane_cp02

0x72e9,	// (0x000262ec) clock_digital_number_pane_cp03_ParamLimits

0x72e9,	// (0x000262ec) clock_digital_number_pane_cp03

0x72f5,	// (0x000262f8) clock_digital_number_pane_cp04_ParamLimits

0x72f5,	// (0x000262f8) clock_digital_number_pane_cp04

0x7301,	// (0x00026304) clock_digital_separator_pane_ParamLimits

0x7301,	// (0x00026304) clock_digital_separator_pane

0x730d,	// (0x00026310) popup_clock_digital_window_t1_ParamLimits

0x730d,	// (0x00026310) popup_clock_digital_window_t1

0x15f3,	// (0x000205f6) clock_digital_number_pane_g1

0x15f3,	// (0x000205f6) clock_digital_number_pane_g2

0x0001,

0xf6f9,	// (0x0002e6fc) clock_digital_number_pane_g

0x15f3,	// (0x000205f6) clock_digital_separator_pane_g1

0x15f3,	// (0x000205f6) clock_digital_separator_pane_g2

0x0001,

0xf6f9,	// (0x0002e6fc) clock_digital_separator_pane_g

0x840a,	// (0x0002740d) aid_fill_nsta_ParamLimits

0x8556,	// (0x00027559) indicator_nsta_pane_ParamLimits

0x86cf,	// (0x000276d2) popup_clock_analogue_window

0x86cf,	// (0x000276d2) popup_clock_digital_window

0x1659,	// (0x0002065c) grid_indicator_nsta_pane_ParamLimits

0xbc85,	// (0x0002ac88) clock_nsta_pane_t2

0x0001,

0xfaab,	// (0x0002eaae) clock_nsta_pane_t

0x71b3,	// (0x000261b6) aid_size_max_handle

0x71bd,	// (0x000261c0) aid_size_min_handle

0x78f4,	// (0x000268f7) editor_scroll_pane

0xca55,	// (0x0002ba58) ex_editor_pane

0x1c10,	// (0x00020c13) scroll_pane_cp13

0x19cd,	// (0x000209d0) scroll_pane_cp14

0x38f1,	// (0x000228f4) scroll_pane_cp36

0x72bb,	// (0x000262be) list_single_graphic_hl_pane_cp2_ParamLimits

0x72bb,	// (0x000262be) list_single_graphic_hl_pane_cp2

0xb25c,	// (0x0002a25f) list_single_graphic_hl_pane_ParamLimits

0xb25c,	// (0x0002a25f) list_single_graphic_hl_pane

0xce4a,	// (0x0002be4d) aid_size_min_hl_cp1

0xca5d,	// (0x0002ba60) list_highlight_pane_cp34_ParamLimits

0xca5d,	// (0x0002ba60) list_highlight_pane_cp34

0xca6e,	// (0x0002ba71) list_single_graphic_hl_pane_g1_ParamLimits

0xca6e,	// (0x0002ba71) list_single_graphic_hl_pane_g1

0x62f1,	// (0x000252f4) list_single_graphic_hl_pane_g2_ParamLimits

0x62f1,	// (0x000252f4) list_single_graphic_hl_pane_g2

0x62f1,	// (0x000252f4) list_single_graphic_hl_pane_g3_ParamLimits

0x62f1,	// (0x000252f4) list_single_graphic_hl_pane_g3

0x62fd,	// (0x00025300) list_single_graphic_hl_pane_g4_ParamLimits

0x62fd,	// (0x00025300) list_single_graphic_hl_pane_g4

0x6309,	// (0x0002530c) list_single_graphic_hl_pane_g5_ParamLimits

0x6309,	// (0x0002530c) list_single_graphic_hl_pane_g5

0x0004,

0xfbea,	// (0x0002ebed) list_single_graphic_hl_pane_g_ParamLimits

0xfbea,	// (0x0002ebed) list_single_graphic_hl_pane_g

0x631d,	// (0x00025320) list_single_graphic_hl_pane_t1_ParamLimits

0x631d,	// (0x00025320) list_single_graphic_hl_pane_t1

0xca7b,	// (0x0002ba7e) aid_size_min_hl_cp2

0xca84,	// (0x0002ba87) list_highlight_pane_cp34_cp2_ParamLimits

0xca84,	// (0x0002ba87) list_highlight_pane_cp34_cp2

0xca6e,	// (0x0002ba71) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca6e,	// (0x0002ba71) list_single_graphic_hl_pane_g1_cp2

0xca91,	// (0x0002ba94) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xca91,	// (0x0002ba94) list_single_graphic_hl_pane_g2_cp2

0xca9d,	// (0x0002baa0) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xca9d,	// (0x0002baa0) list_single_graphic_hl_pane_g3_cp2

0x782d,	// (0x00026830) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x782d,	// (0x00026830) list_single_graphic_hl_pane_g4_cp2

0xcaab,	// (0x0002baae) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcaab,	// (0x0002baae) list_single_graphic_hl_pane_g5_cp2

0x7cbc,	// (0x00026cbf) control_pane_g4_ParamLimits

0x7cbc,	// (0x00026cbf) control_pane_g4

0x7e2b,	// (0x00026e2e) bg_popup_sub_pane_cp10_ParamLimits

0xc285,	// (0x0002b288) list_choice_list_pane_ParamLimits

0xc294,	// (0x0002b297) scroll_pane_cp23

0x179d,	// (0x000207a0) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8d0,	// (0x0002b8d3) list_preview_fixed_pane_ParamLimits

0xc8e6,	// (0x0002b8e9) list_preview_fixed_pane_cp_ParamLimits

0xc8e6,	// (0x0002b8e9) list_preview_fixed_pane_cp

0xc8f2,	// (0x0002b8f5) popup_preview_fixed_window_g1_ParamLimits

0xc8f2,	// (0x0002b8f5) popup_preview_fixed_window_g1

0xc8fe,	// (0x0002b901) popup_preview_fixed_window_g2_ParamLimits

0xc8fe,	// (0x0002b901) popup_preview_fixed_window_g2

0x0002,

0xfb79,	// (0x0002eb7c) popup_preview_fixed_window_g_ParamLimits

0xfb79,	// (0x0002eb7c) popup_preview_fixed_window_g

0x708f,	// (0x00026092) aid_navi_side_left_pane_ParamLimits

0x70a4,	// (0x000260a7) aid_navi_side_right_pane_ParamLimits

0x70bc,	// (0x000260bf) navi_icon_pane_stacon_ParamLimits

0x70d0,	// (0x000260d3) navi_navi_pane_stacon_ParamLimits

0x70bc,	// (0x000260bf) navi_text_pane_stacon_ParamLimits

0x15e9,	// (0x000205ec) main_text_info_pane

0xcad5,	// (0x0002bad8) listscroll_text_info_pane

0xcadd,	// (0x0002bae0) list_text_info_pane_ParamLimits

0xcadd,	// (0x0002bae0) list_text_info_pane

0xcaec,	// (0x0002baef) scroll_pane_cp24_ParamLimits

0xcaec,	// (0x0002baef) scroll_pane_cp24

0xcb0a,	// (0x0002bb0d) list_text_info_pane_t1_ParamLimits

0xcb0a,	// (0x0002bb0d) list_text_info_pane_t1

0x7e91,	// (0x00026e94) popup_fast_swap2_window_ParamLimits

0x7e91,	// (0x00026e94) popup_fast_swap2_window

0xcb3e,	// (0x0002bb41) aid_size_cell_fast2

0x15e9,	// (0x000205ec) bg_popup_window_pane_cp17

0xa108,	// (0x0002910b) heading_pane_cp2

0x18d1,	// (0x000208d4) listscroll_fast2_pane

0xcb48,	// (0x0002bb4b) grid_fast2_pane

0xcb52,	// (0x0002bb55) listscroll_fast2_pane_g1

0xcb5a,	// (0x0002bb5d) listscroll_fast2_pane_g2

0x0001,

0xfbf5,	// (0x0002ebf8) listscroll_fast2_pane_g

0x1c10,	// (0x00020c13) scroll_pane_cp26

0xcb64,	// (0x0002bb67) cell_fast2_pane_ParamLimits

0xcb64,	// (0x0002bb67) cell_fast2_pane

0xcb79,	// (0x0002bb7c) cell_fast2_pane_g1

0xcb82,	// (0x0002bb85) cell_fast2_pane_g2

0xcb8b,	// (0x0002bb8e) cell_fast2_pane_g3

0x0002,

0xfbfa,	// (0x0002ebfd) cell_fast2_pane_g

0x1904,	// (0x00020907) grid_highlight_pane_cp9

0x1919,	// (0x0002091c) main_eswt_pane_ParamLimits

0x1919,	// (0x0002091c) main_eswt_pane

0xcb01,	// (0x0002bb04) list_single_text_info_pane

0xcb93,	// (0x0002bb96) eswt_ctrl_button_pane

0xcb93,	// (0x0002bb96) eswt_ctrl_canvas_pane

0xcb9b,	// (0x0002bb9e) eswt_ctrl_combo_pane

0xcb93,	// (0x0002bb96) eswt_ctrl_default_pane

0xcb93,	// (0x0002bb96) eswt_ctrl_label_pane

0xcba3,	// (0x0002bba6) eswt_ctrl_wait_pane

0xcbab,	// (0x0002bbae) eswt_shell_pane

0x15e9,	// (0x000205ec) listscroll_eswt_app_pane

0xcbcb,	// (0x0002bbce) popup_eswt_tasktip_window_ParamLimits

0xcbcb,	// (0x0002bbce) popup_eswt_tasktip_window

0x9d15,	// (0x00028d18) bg_popup_window_pane_cp18

0xcbdc,	// (0x0002bbdf) eswt_control_pane_g1_ParamLimits

0xcbdc,	// (0x0002bbdf) eswt_control_pane_g1

0xcbe9,	// (0x0002bbec) eswt_control_pane_g2_ParamLimits

0xcbe9,	// (0x0002bbec) eswt_control_pane_g2

0xcbf6,	// (0x0002bbf9) eswt_control_pane_g3_ParamLimits

0xcbf6,	// (0x0002bbf9) eswt_control_pane_g3

0xcc03,	// (0x0002bc06) eswt_control_pane_g4_ParamLimits

0xcc03,	// (0x0002bc06) eswt_control_pane_g4

0x0003,

0xfc01,	// (0x0002ec04) eswt_control_pane_g_ParamLimits

0xfc01,	// (0x0002ec04) eswt_control_pane_g

0x1a83,	// (0x00020a86) bg_button_pane_ParamLimits

0x1a83,	// (0x00020a86) bg_button_pane

0x1919,	// (0x0002091c) common_borders_pane_copy2_ParamLimits

0x1919,	// (0x0002091c) common_borders_pane_copy2

0xcc10,	// (0x0002bc13) control_button_pane_g1_ParamLimits

0xcc10,	// (0x0002bc13) control_button_pane_g1

0xcc1c,	// (0x0002bc1f) control_button_pane_g2_ParamLimits

0xcc1c,	// (0x0002bc1f) control_button_pane_g2

0xcc28,	// (0x0002bc2b) control_button_pane_g3_ParamLimits

0xcc28,	// (0x0002bc2b) control_button_pane_g3

0x0002,

0xfc0a,	// (0x0002ec0d) control_button_pane_g_ParamLimits

0xfc0a,	// (0x0002ec0d) control_button_pane_g

0xcc3c,	// (0x0002bc3f) control_button_pane_t1

0xcc4a,	// (0x0002bc4d) control_button_pane_t2

0x0001,

0xfc11,	// (0x0002ec14) control_button_pane_t

0x8925,	// (0x00027928) bg_button_pane_g1

0x892d,	// (0x00027930) bg_button_pane_g2

0x8935,	// (0x00027938) bg_button_pane_g3

0x893d,	// (0x00027940) bg_button_pane_g4

0x8945,	// (0x00027948) bg_button_pane_g5

0x894d,	// (0x00027950) bg_button_pane_g6

0x8955,	// (0x00027958) bg_button_pane_g7

0x895d,	// (0x00027960) bg_button_pane_g8

0x8965,	// (0x00027968) bg_button_pane_g9

0x0008,

0xf857,	// (0x0002e85a) bg_button_pane_g

0xc240,	// (0x0002b243) common_borders_pane_ParamLimits

0xc240,	// (0x0002b243) common_borders_pane

0xcbdc,	// (0x0002bbdf) eswt_control_pane_g1_copy1_ParamLimits

0xcbdc,	// (0x0002bbdf) eswt_control_pane_g1_copy1

0xcbe9,	// (0x0002bbec) eswt_control_pane_g2_copy1_ParamLimits

0xcbe9,	// (0x0002bbec) eswt_control_pane_g2_copy1

0xcbf6,	// (0x0002bbf9) eswt_control_pane_g3_copy1_ParamLimits

0xcbf6,	// (0x0002bbf9) eswt_control_pane_g3_copy1

0xcc03,	// (0x0002bc06) eswt_control_pane_g4_copy1_ParamLimits

0xcc03,	// (0x0002bc06) eswt_control_pane_g4_copy1

0xc27b,	// (0x0002b27e) bg_eswt_ctrl_canvas_pane_g1

0xc240,	// (0x0002b243) common_borders_pane_cp2_ParamLimits

0xc240,	// (0x0002b243) common_borders_pane_cp2

0xc240,	// (0x0002b243) common_borders_pane_cp3_ParamLimits

0xc240,	// (0x0002b243) common_borders_pane_cp3

0xcc58,	// (0x0002bc5b) separator_horizontal_pane

0xcc60,	// (0x0002bc63) separator_vertical_pane

0xcbdc,	// (0x0002bbdf) eswt_control_pane_g1_copy2_ParamLimits

0xcbdc,	// (0x0002bbdf) eswt_control_pane_g1_copy2

0xcbe9,	// (0x0002bbec) eswt_control_pane_g2_copy2_ParamLimits

0xcbe9,	// (0x0002bbec) eswt_control_pane_g2_copy2

0xcbf6,	// (0x0002bbf9) eswt_control_pane_g3_copy2_ParamLimits

0xcbf6,	// (0x0002bbf9) eswt_control_pane_g3_copy2

0xcc03,	// (0x0002bc06) eswt_control_pane_g4_copy2_ParamLimits

0xcc03,	// (0x0002bc06) eswt_control_pane_g4_copy2

0x15e9,	// (0x000205ec) common_borders_pane_cp4

0xcc69,	// (0x0002bc6c) separator_horizontal_pane_g1

0xcc72,	// (0x0002bc75) separator_horizontal_pane_g2

0xcc7b,	// (0x0002bc7e) separator_horizontal_pane_g3

0x0002,

0xfc16,	// (0x0002ec19) separator_horizontal_pane_g

0xcbdc,	// (0x0002bbdf) eswt_control_pane_g1_copy3_ParamLimits

0xcbdc,	// (0x0002bbdf) eswt_control_pane_g1_copy3

0xcbe9,	// (0x0002bbec) eswt_control_pane_g2_copy3_ParamLimits

0xcbe9,	// (0x0002bbec) eswt_control_pane_g2_copy3

0xcbf6,	// (0x0002bbf9) eswt_control_pane_g3_copy3_ParamLimits

0xcbf6,	// (0x0002bbf9) eswt_control_pane_g3_copy3

0xcc03,	// (0x0002bc06) eswt_control_pane_g4_copy3_ParamLimits

0xcc03,	// (0x0002bc06) eswt_control_pane_g4_copy3

0x15e9,	// (0x000205ec) common_borders_pane_cp5

0xcc84,	// (0x0002bc87) separator_vertical_pane_g1

0xcc8d,	// (0x0002bc90) separator_vertical_pane_g2

0xcc96,	// (0x0002bc99) separator_vertical_pane_g3

0x0002,

0xfc1d,	// (0x0002ec20) separator_vertical_pane_g

0xcbdc,	// (0x0002bbdf) eswt_control_pane_g1_copy4_ParamLimits

0xcbdc,	// (0x0002bbdf) eswt_control_pane_g1_copy4

0xcbe9,	// (0x0002bbec) eswt_control_pane_g2_copy4_ParamLimits

0xcbe9,	// (0x0002bbec) eswt_control_pane_g2_copy4

0xcbf6,	// (0x0002bbf9) eswt_control_pane_g3_copy4_ParamLimits

0xcbf6,	// (0x0002bbf9) eswt_control_pane_g3_copy4

0xcc03,	// (0x0002bc06) eswt_control_pane_g4_copy4_ParamLimits

0xcc03,	// (0x0002bc06) eswt_control_pane_g4_copy4

0xcc9f,	// (0x0002bca2) eswt_ctrl_combo_button_pane

0xcca7,	// (0x0002bcaa) eswt_ctrl_input_pane

0xccaf,	// (0x0002bcb2) popup_choice_list_window_cp70

0xccb7,	// (0x0002bcba) eswt_ctrl_input_pane_t1

0x15e9,	// (0x000205ec) input_focus_pane_cp70

0xc240,	// (0x0002b243) bg_button_pane_cp70_ParamLimits

0xc240,	// (0x0002b243) bg_button_pane_cp70

0xccc5,	// (0x0002bcc8) eswt_ctrl_combo_button_pane_g1

0xcccd,	// (0x0002bcd0) wait_bar_pane_cp70

0x9d15,	// (0x00028d18) bg_popup_window_pane_cp70_ParamLimits

0x9d15,	// (0x00028d18) bg_popup_window_pane_cp70

0xccd5,	// (0x0002bcd8) popup_eswt_tasktip_window_t1

0xcceb,	// (0x0002bcee) wait_bar_pane_cp71_ParamLimits

0xcceb,	// (0x0002bcee) wait_bar_pane_cp71

0xccf7,	// (0x0002bcfa) grid_eswt_app_pane

0x3776,	// (0x00022779) scroll_pane_cp70

0xcd00,	// (0x0002bd03) cell_eswt_app_pane_ParamLimits

0xcd00,	// (0x0002bd03) cell_eswt_app_pane

0xcd30,	// (0x0002bd33) cell_eswt_app_pane_g1_ParamLimits

0xcd30,	// (0x0002bd33) cell_eswt_app_pane_g1

0xcd5f,	// (0x0002bd62) cell_eswt_app_pane_g2_ParamLimits

0xcd5f,	// (0x0002bd62) cell_eswt_app_pane_g2

0x0001,

0xfc24,	// (0x0002ec27) cell_eswt_app_pane_g_ParamLimits

0xfc24,	// (0x0002ec27) cell_eswt_app_pane_g

0xcd83,	// (0x0002bd86) cell_eswt_app_pane_t1_ParamLimits

0xcd83,	// (0x0002bd86) cell_eswt_app_pane_t1

0xcdb5,	// (0x0002bdb8) grid_highlight_pane_cp70_ParamLimits

0xcdb5,	// (0x0002bdb8) grid_highlight_pane_cp70

0x77c9,	// (0x000267cc) set_content_pane_g1

0x7c44,	// (0x00026c47) status_small_volume_pane

0x90ff,	// (0x00028102) status_small_volume_pane_g1

0x9107,	// (0x0002810a) volume_small2_pane

0x9110,	// (0x00028113) volume_small2_pane_g1

0x9119,	// (0x0002811c) volume_small2_pane_g2

0x9122,	// (0x00028125) volume_small2_pane_g3

0x912b,	// (0x0002812e) volume_small2_pane_g4

0x9134,	// (0x00028137) volume_small2_pane_g5

0x913d,	// (0x00028140) volume_small2_pane_g6

0x9146,	// (0x00028149) volume_small2_pane_g7

0x914f,	// (0x00028152) volume_small2_pane_g8

0x9158,	// (0x0002815b) volume_small2_pane_g9

0x9161,	// (0x00028164) volume_small2_pane_g10

0x0009,

0xfc29,	// (0x0002ec2c) volume_small2_pane_g

0xc633,	// (0x0002b636) fep_vkb_top_text_pane_g1_ParamLimits

0xc64e,	// (0x0002b651) fep_vkb_top_text_pane_t1_ParamLimits

0xc90a,	// (0x0002b90d) popup_preview_fixed_window_g3_ParamLimits

0xc90a,	// (0x0002b90d) popup_preview_fixed_window_g3

0x8340,	// (0x00027343) popup_toolbar_trans_pane

0xb04b,	// (0x0002a04e) aid_height_set_list_ParamLimits

0xb05c,	// (0x0002a05f) aid_size_parent_ParamLimits

0x7e2b,	// (0x00026e2e) list_highlight_pane_cp2_ParamLimits

0x77c9,	// (0x000267cc) set_content_pane_g1_ParamLimits

0x5d41,	// (0x00024d44) list_single_image_pane_ParamLimits

0x5d41,	// (0x00024d44) list_single_image_pane

0xcdc1,	// (0x0002bdc4) aid_size_cell_image_ParamLimits

0xcdc1,	// (0x0002bdc4) aid_size_cell_image

0xcdce,	// (0x0002bdd1) grid_single_image_pane_ParamLimits

0xcdce,	// (0x0002bdd1) grid_single_image_pane

0xcddc,	// (0x0002bddf) list_single_image_pane_g1_ParamLimits

0xcddc,	// (0x0002bddf) list_single_image_pane_g1

0xcde8,	// (0x0002bdeb) list_single_image_pane_g2_ParamLimits

0xcde8,	// (0x0002bdeb) list_single_image_pane_g2

0x0001,

0xfc3e,	// (0x0002ec41) list_single_image_pane_g_ParamLimits

0xfc3e,	// (0x0002ec41) list_single_image_pane_g

0xcdfc,	// (0x0002bdff) list_single_image_pane_t1_ParamLimits

0xcdfc,	// (0x0002bdff) list_single_image_pane_t1

0xce12,	// (0x0002be15) cell_image_list_pane_ParamLimits

0xce12,	// (0x0002be15) cell_image_list_pane

0xce26,	// (0x0002be29) cell_image_list_pane_g1

0xce2f,	// (0x0002be32) cell_image_list_pane_g2

0x0001,

0xfc43,	// (0x0002ec46) cell_image_list_pane_g

0xce38,	// (0x0002be3b) aid_size_cell_tb_trans_pane

0x1a83,	// (0x00020a86) bg_tb_trans_pane

0xce53,	// (0x0002be56) grid_tb_trans_pane

0x8925,	// (0x00027928) bg_tb_trans_pane_g1

0x892d,	// (0x00027930) bg_tb_trans_pane_g2

0x8935,	// (0x00027938) bg_tb_trans_pane_g3

0x893d,	// (0x00027940) bg_tb_trans_pane_g4

0x8945,	// (0x00027948) bg_tb_trans_pane_g5

0x895d,	// (0x00027960) bg_tb_trans_pane_g6

0x8965,	// (0x00027968) bg_tb_trans_pane_g7

0x894d,	// (0x00027950) bg_tb_trans_pane_g8

0x8955,	// (0x00027958) bg_tb_trans_pane_g9

0x0008,

0xfc48,	// (0x0002ec4b) bg_tb_trans_pane_g

0xce67,	// (0x0002be6a) cell_toolbar_trans_pane_ParamLimits

0xce67,	// (0x0002be6a) cell_toolbar_trans_pane

0xc27b,	// (0x0002b27e) cell_toolbar_trans_pane_g1

0xbe46,	// (0x0002ae49) list_form2_midp_pane_t1

0xbe54,	// (0x0002ae57) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x0002eaf4) list_form2_midp_pane_t

0xbe62,	// (0x0002ae65) scroll_pane_cp51_ParamLimits

0xc01e,	// (0x0002b021) form2_midp_wait_pane_g1

0xc027,	// (0x0002b02a) form2_midp_wait_pane_g2

0xc030,	// (0x0002b033) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x0002eb09) form2_midp_wait_pane_g

0x1659,	// (0x0002065c) list_highlight_pane_cp21_ParamLimits

0xc078,	// (0x0002b07b) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc087,	// (0x0002b08a) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5cd9,	// (0x00024cdc) list_single_2graphic_im_pane_ParamLimits

0x5cd9,	// (0x00024cdc) list_single_2graphic_im_pane

0xce8d,	// (0x0002be90) list_single_2graphic_im_pane_g1_ParamLimits

0xce8d,	// (0x0002be90) list_single_2graphic_im_pane_g1

0xce9e,	// (0x0002bea1) list_single_2graphic_im_pane_g2_ParamLimits

0xce9e,	// (0x0002bea1) list_single_2graphic_im_pane_g2

0xceaa,	// (0x0002bead) list_single_2graphic_im_pane_g3_ParamLimits

0xceaa,	// (0x0002bead) list_single_2graphic_im_pane_g3

0x0003,

0xfc5b,	// (0x0002ec5e) list_single_2graphic_im_pane_g_ParamLimits

0xfc5b,	// (0x0002ec5e) list_single_2graphic_im_pane_g

0xceca,	// (0x0002becd) list_single_2graphic_im_pane_t1_ParamLimits

0xceca,	// (0x0002becd) list_single_2graphic_im_pane_t1

0xc916,	// (0x0002b919) list_single_graphic_2heading_pane_fp_ParamLimits

0xc916,	// (0x0002b919) list_single_graphic_2heading_pane_fp

0x6163,	// (0x00025166) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6163,	// (0x00025166) list_single_graphic_2heading_pane_fp_g1

0xc92c,	// (0x0002b92f) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc92c,	// (0x0002b92f) list_single_graphic_2heading_pane_fp_g2

0x56e4,	// (0x000246e7) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x56e4,	// (0x000246e7) list_single_graphic_2heading_pane_fp_g3

0x6138,	// (0x0002513b) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6138,	// (0x0002513b) list_single_graphic_2heading_pane_fp_g4

0xc938,	// (0x0002b93b) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc938,	// (0x0002b93b) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb89,	// (0x0002eb8c) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb89,	// (0x0002eb8c) list_single_graphic_2heading_pane_fp_g

0x6333,	// (0x00025336) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x6333,	// (0x00025336) list_single_graphic_2heading_pane_fp_t1

0x619b,	// (0x0002519e) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x619b,	// (0x0002519e) list_single_graphic_2heading_pane_fp_t2

0x6349,	// (0x0002534c) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x6349,	// (0x0002534c) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc64,	// (0x0002ec67) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc64,	// (0x0002ec67) list_single_graphic_2heading_pane_fp_t

0xc307,	// (0x0002b30a) fep_hwr_write_pane_g5_ParamLimits

0xc307,	// (0x0002b30a) fep_hwr_write_pane_g5

0xc313,	// (0x0002b316) fep_hwr_write_pane_g6_ParamLimits

0xc313,	// (0x0002b316) fep_hwr_write_pane_g6

0xcbab,	// (0x0002bbae) eswt_shell_pane_ParamLimits

0x9d15,	// (0x00028d18) bg_popup_window_pane_cp18_ParamLimits

0xafa4,	// (0x00029fa7) heading_pane_cp70

0xccd5,	// (0x0002bcd8) popup_eswt_tasktip_window_t1_ParamLimits

0x845f,	// (0x00027462) aid_touch_tab_arrow_left

0x846e,	// (0x00027471) aid_touch_tab_arrow_right

0x68e1,	// (0x000258e4) title_pane_g3_ParamLimits

0x68e1,	// (0x000258e4) title_pane_g3

0x1a1a,	// (0x00020a1d) set_value_pane_g1

0x8340,	// (0x00027343) popup_toolbar_trans_pane_ParamLimits

0xce38,	// (0x0002be3b) aid_size_cell_tb_trans_pane_ParamLimits

0x1a83,	// (0x00020a86) bg_tb_trans_pane_ParamLimits

0xce53,	// (0x0002be56) grid_tb_trans_pane_ParamLimits

0x179d,	// (0x000207a0) cont_note_pane_ParamLimits

0x179d,	// (0x000207a0) cont_note_pane

0x1919,	// (0x0002091c) cont_snote2_single_text_pane_ParamLimits

0x1919,	// (0x0002091c) cont_snote2_single_text_pane

0x1919,	// (0x0002091c) cont_snote2_single_graphic_pane_ParamLimits

0x1919,	// (0x0002091c) cont_snote2_single_graphic_pane

0xa327,	// (0x0002932a) cont_note_wait_pane_ParamLimits

0xa327,	// (0x0002932a) cont_note_wait_pane

0xa327,	// (0x0002932a) cont_note_image_pane_ParamLimits

0xa327,	// (0x0002932a) cont_note_image_pane

0xcefb,	// (0x0002befe) popup_note2_window_g1_ParamLimits

0xcefb,	// (0x0002befe) popup_note2_window_g1

0xcf2c,	// (0x0002bf2f) popup_note2_window_t1_ParamLimits

0xcf2c,	// (0x0002bf2f) popup_note2_window_t1

0xcf71,	// (0x0002bf74) popup_note2_window_t2_ParamLimits

0xcf71,	// (0x0002bf74) popup_note2_window_t2

0xcfb6,	// (0x0002bfb9) popup_note2_window_t3_ParamLimits

0xcfb6,	// (0x0002bfb9) popup_note2_window_t3

0xcffb,	// (0x0002bffe) popup_note2_window_t4_ParamLimits

0xcffb,	// (0x0002bffe) popup_note2_window_t4

0x1821,	// (0x00020824) popup_note2_window_t5_ParamLimits

0x1821,	// (0x00020824) popup_note2_window_t5

0x0004,

0xfc70,	// (0x0002ec73) popup_note2_window_t_ParamLimits

0xfc70,	// (0x0002ec73) popup_note2_window_t

0xd02a,	// (0x0002c02d) popup_note2_image_window_g1_ParamLimits

0xd02a,	// (0x0002c02d) popup_note2_image_window_g1

0xd036,	// (0x0002c039) popup_note2_image_window_g2_ParamLimits

0xd036,	// (0x0002c039) popup_note2_image_window_g2

0x0001,

0xfc7b,	// (0x0002ec7e) popup_note2_image_window_g_ParamLimits

0xfc7b,	// (0x0002ec7e) popup_note2_image_window_g

0xd048,	// (0x0002c04b) popup_note2_image_window_t1_ParamLimits

0xd048,	// (0x0002c04b) popup_note2_image_window_t1

0xd060,	// (0x0002c063) popup_note2_image_window_t2_ParamLimits

0xd060,	// (0x0002c063) popup_note2_image_window_t2

0xd078,	// (0x0002c07b) popup_note2_image_window_t3_ParamLimits

0xd078,	// (0x0002c07b) popup_note2_image_window_t3

0x0002,

0xfc80,	// (0x0002ec83) popup_note2_image_window_t_ParamLimits

0xfc80,	// (0x0002ec83) popup_note2_image_window_t

0xa335,	// (0x00029338) popup_note2_wait_window_g1_ParamLimits

0xa335,	// (0x00029338) popup_note2_wait_window_g1

0xa341,	// (0x00029344) popup_note2_wait_window_g2_ParamLimits

0xa341,	// (0x00029344) popup_note2_wait_window_g2

0xa34d,	// (0x00029350) popup_note2_wait_window_g3_ParamLimits

0xa34d,	// (0x00029350) popup_note2_wait_window_g3

0x0002,

0xf839,	// (0x0002e83c) popup_note2_wait_window_g_ParamLimits

0xf839,	// (0x0002e83c) popup_note2_wait_window_g

0xd094,	// (0x0002c097) popup_note2_wait_window_t1_ParamLimits

0xd094,	// (0x0002c097) popup_note2_wait_window_t1

0xd0b2,	// (0x0002c0b5) popup_note2_wait_window_t2_ParamLimits

0xd0b2,	// (0x0002c0b5) popup_note2_wait_window_t2

0xd0d0,	// (0x0002c0d3) popup_note2_wait_window_t3_ParamLimits

0xd0d0,	// (0x0002c0d3) popup_note2_wait_window_t3

0xd0e2,	// (0x0002c0e5) popup_note2_wait_window_t4_ParamLimits

0xd0e2,	// (0x0002c0e5) popup_note2_wait_window_t4

0x0003,

0xfc87,	// (0x0002ec8a) popup_note2_wait_window_t_ParamLimits

0xfc87,	// (0x0002ec8a) popup_note2_wait_window_t

0xd0f4,	// (0x0002c0f7) wait_bar2_pane_ParamLimits

0xd0f4,	// (0x0002c0f7) wait_bar2_pane

0xd10c,	// (0x0002c10f) popup_snote2_single_text_window_g1_ParamLimits

0xd10c,	// (0x0002c10f) popup_snote2_single_text_window_g1

0xd134,	// (0x0002c137) popup_snote2_single_text_window_t1_ParamLimits

0xd134,	// (0x0002c137) popup_snote2_single_text_window_t1

0xd180,	// (0x0002c183) popup_snote2_single_text_window_t2_ParamLimits

0xd180,	// (0x0002c183) popup_snote2_single_text_window_t2

0xd1cc,	// (0x0002c1cf) popup_snote2_single_text_window_t3_ParamLimits

0xd1cc,	// (0x0002c1cf) popup_snote2_single_text_window_t3

0xd20d,	// (0x0002c210) popup_snote2_single_text_window_t4_ParamLimits

0xd20d,	// (0x0002c210) popup_snote2_single_text_window_t4

0xd243,	// (0x0002c246) popup_snote2_single_text_window_t5_ParamLimits

0xd243,	// (0x0002c246) popup_snote2_single_text_window_t5

0x0004,

0xfc90,	// (0x0002ec93) popup_snote2_single_text_window_t_ParamLimits

0xfc90,	// (0x0002ec93) popup_snote2_single_text_window_t

0xd26e,	// (0x0002c271) popup_snote2_single_graphic_window_g1_ParamLimits

0xd26e,	// (0x0002c271) popup_snote2_single_graphic_window_g1

0xd296,	// (0x0002c299) popup_snote2_single_graphic_window_g2_ParamLimits

0xd296,	// (0x0002c299) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9b,	// (0x0002ec9e) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9b,	// (0x0002ec9e) popup_snote2_single_graphic_window_g

0xd2be,	// (0x0002c2c1) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2be,	// (0x0002c2c1) popup_snote2_single_graphic_window_t1

0xd30a,	// (0x0002c30d) popup_snote2_single_graphic_window_t2_ParamLimits

0xd30a,	// (0x0002c30d) popup_snote2_single_graphic_window_t2

0xd1cc,	// (0x0002c1cf) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1cc,	// (0x0002c1cf) popup_snote2_single_graphic_window_t3

0xd20d,	// (0x0002c210) popup_snote2_single_graphic_window_t4_ParamLimits

0xd20d,	// (0x0002c210) popup_snote2_single_graphic_window_t4

0xd243,	// (0x0002c246) popup_snote2_single_graphic_window_t5_ParamLimits

0xd243,	// (0x0002c246) popup_snote2_single_graphic_window_t5

0x0004,

0xfca0,	// (0x0002eca3) popup_snote2_single_graphic_window_t_ParamLimits

0xfca0,	// (0x0002eca3) popup_snote2_single_graphic_window_t

0xbd1f,	// (0x0002ad22) clock_nsta_pane_cp2_t1

0xbd1f,	// (0x0002ad22) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x0002eaca) clock_nsta_pane_cp2_t

0x58c1,	// (0x000248c4) form_field_data_wide_pane_g1_ParamLimits

0x1aae,	// (0x00020ab1) form_field_data_wide_pane_g2_ParamLimits

0x1aae,	// (0x00020ab1) form_field_data_wide_pane_g2

0x1aba,	// (0x00020abd) form_field_data_wide_pane_g3_ParamLimits

0x1aba,	// (0x00020abd) form_field_data_wide_pane_g3

0x0002,

0xf671,	// (0x0002e674) form_field_data_wide_pane_g_ParamLimits

0xf671,	// (0x0002e674) form_field_data_wide_pane_g

0xbc21,	// (0x0002ac24) grid_touch_3_pane_ParamLimits

0xbc21,	// (0x0002ac24) grid_touch_3_pane

0xd356,	// (0x0002c359) cell_touch_3_pane_ParamLimits

0xd356,	// (0x0002c359) cell_touch_3_pane

0xc27b,	// (0x0002b27e) cell_touch_3_pane_g1

0xc27b,	// (0x0002b27e) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x0002eb4f) cell_touch_3_pane_g

0x1853,	// (0x00020856) cont_query_data_pane

0x185b,	// (0x0002085e) cont_query_data_pane_cp1

0xd384,	// (0x0002c387) button_value_adjust_pane_cp7

0xd38c,	// (0x0002c38f) query_popup_pane_cp3

0x397e,	// (0x00022981) bg_popup_sub_pane_cp22_ParamLimits

0x7387,	// (0x0002638a) navi_navi_volume_pane_cp2

0x739f,	// (0x000263a2) popup_side_volume_key_window_g2

0x73ab,	// (0x000263ae) popup_side_volume_key_window_g3

0x0002,

0xf707,	// (0x0002e70a) popup_side_volume_key_window_g

0x73c5,	// (0x000263c8) popup_side_volume_key_window_t2

0x0001,

0xf70e,	// (0x0002e711) popup_side_volume_key_window_t

0x7696,	// (0x00026699) popup_side_volume_key_window_ParamLimits

0x5573,	// (0x00024576) list_double_graphic_pane_g4_ParamLimits

0x5573,	// (0x00024576) list_double_graphic_pane_g4

0x5d1e,	// (0x00024d21) list_single_2heading_msg_pane_ParamLimits

0x5d1e,	// (0x00024d21) list_single_2heading_msg_pane

0x6369,	// (0x0002536c) list_single_2heading_msg_pane_g1_ParamLimits

0x6369,	// (0x0002536c) list_single_2heading_msg_pane_g1

0x53a2,	// (0x000243a5) list_single_2heading_msg_pane_g2_ParamLimits

0x53a2,	// (0x000243a5) list_single_2heading_msg_pane_g2

0x5eae,	// (0x00024eb1) list_single_2heading_msg_pane_g3_ParamLimits

0x5eae,	// (0x00024eb1) list_single_2heading_msg_pane_g3

0x6375,	// (0x00025378) list_single_2heading_msg_pane_g4_ParamLimits

0x6375,	// (0x00025378) list_single_2heading_msg_pane_g4

0x0003,

0xfcab,	// (0x0002ecae) list_single_2heading_msg_pane_g_ParamLimits

0xfcab,	// (0x0002ecae) list_single_2heading_msg_pane_g

0x638d,	// (0x00025390) list_single_2heading_msg_pane_t1_ParamLimits

0x638d,	// (0x00025390) list_single_2heading_msg_pane_t1

0x63b5,	// (0x000253b8) list_single_2heading_msg_pane_t2_ParamLimits

0x63b5,	// (0x000253b8) list_single_2heading_msg_pane_t2

0x63e9,	// (0x000253ec) list_single_2heading_msg_pane_t3_ParamLimits

0x63e9,	// (0x000253ec) list_single_2heading_msg_pane_t3

0x6422,	// (0x00025425) list_single_2heading_msg_pane_t4_ParamLimits

0x6422,	// (0x00025425) list_single_2heading_msg_pane_t4

0x0003,

0xfcb4,	// (0x0002ecb7) list_single_2heading_msg_pane_t_ParamLimits

0xfcb4,	// (0x0002ecb7) list_single_2heading_msg_pane_t

0x1607,	// (0x0002060a) title_pane_g4_ParamLimits

0x1607,	// (0x0002060a) title_pane_g4

0x6fe0,	// (0x00025fe3) title_pane_stacon_g3_ParamLimits

0x6fe0,	// (0x00025fe3) title_pane_stacon_g3

0xcebe,	// (0x0002bec1) list_single_2graphic_im_pane_g4_ParamLimits

0xcebe,	// (0x0002bec1) list_single_2graphic_im_pane_g4

0xad6e,	// (0x00029d71) popup_side_volume_key_window_cp

0xb57c,	// (0x0002a57f) main_idle_act2_pane_t1

0x896d,	// (0x00027970) toolbar_button_pane_g10

0x6ea0,	// (0x00025ea3) popup_toolbar_window_cp1

0xbd10,	// (0x0002ad13) clock_nsta_pane_cp_t1

0xbd10,	// (0x0002ad13) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x0002eac5) clock_nsta_pane_cp_t

0x7387,	// (0x0002638a) navi_navi_volume_pane_cp2_ParamLimits

0x7393,	// (0x00026396) popup_side_volume_key_window_g1_ParamLimits

0x739f,	// (0x000263a2) popup_side_volume_key_window_g2_ParamLimits

0x73ab,	// (0x000263ae) popup_side_volume_key_window_g3_ParamLimits

0xf707,	// (0x0002e70a) popup_side_volume_key_window_g_ParamLimits

0x8e0f,	// (0x00027e12) fep_hwr_aid_pane

0x15b9,	// (0x000205bc) bg_fep_hwr_top_pane_g4_ParamLimits

0xc2d7,	// (0x0002b2da) fep_hwr_top_pane_g1_ParamLimits

0xc2e9,	// (0x0002b2ec) fep_hwr_top_pane_g2_ParamLimits

0x8ec8,	// (0x00027ecb) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x0002eb1a) fep_hwr_top_pane_g_ParamLimits

0x8edd,	// (0x00027ee0) fep_hwr_top_text_pane_ParamLimits

0xab31,	// (0x00029b34) aid_touch_tab_arrow_arrow_2

0xab3a,	// (0x00029b3d) aid_touch_tab_arrow_left_2

0x8e23,	// (0x00027e26) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x8e5a,	// (0x00027e5d) fep_hwr_prediction_pane

0xc442,	// (0x0002b445) fep_vkb_prediction_pane

0xc53f,	// (0x0002b542) fep_vkb_side_pane_g3_ParamLimits

0xc53f,	// (0x0002b542) fep_vkb_side_pane_g3

0xc4eb,	// (0x0002b4ee) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc98c,	// (0x0002b98f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc999,	// (0x0002b99c) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc1,	// (0x0002ebc4) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd3b1,	// (0x0002c3b4) fep_hwr_prediction_pane_g1

0x916a,	// (0x0002816d) fep_hwr_prediction_pane_g2

0x9172,	// (0x00028175) fep_hwr_prediction_pane_g3

0x917a,	// (0x0002817d) fep_hwr_prediction_pane_g4

0x0003,

0xfcbd,	// (0x0002ecc0) fep_hwr_prediction_pane_g

0xd3b1,	// (0x0002c3b4) fep_vkb_prediction_pane_g1

0xd3bb,	// (0x0002c3be) fep_vkb_prediction_pane_g2

0xd3c3,	// (0x0002c3c6) fep_vkb_prediction_pane_g3

0xd3cb,	// (0x0002c3ce) fep_vkb_prediction_pane_g4

0x0003,

0xfcc6,	// (0x0002ecc9) fep_vkb_prediction_pane_g

0x8c47,	// (0x00027c4a) slider_set_pane_g3

0x8c5b,	// (0x00027c5e) slider_set_pane_g4

0x8c73,	// (0x00027c76) slider_set_pane_g5

0x8c47,	// (0x00027c4a) slider_set_pane_g6

0x8c89,	// (0x00027c8c) slider_set_pane_g7

0xb1bd,	// (0x0002a1c0) slider_form_pane_g3

0xb1c6,	// (0x0002a1c9) slider_form_pane_g4

0xb1ce,	// (0x0002a1d1) slider_form_pane_g5

0xb1bd,	// (0x0002a1c0) slider_form_pane_g6

0xb1d6,	// (0x0002a1d9) slider_form_pane_g7

0xb827,	// (0x0002a82a) slider_set_pane_vc_g3

0xb830,	// (0x0002a833) slider_set_pane_vc_g4

0xb839,	// (0x0002a83c) slider_set_pane_vc_g5

0xb827,	// (0x0002a82a) slider_set_pane_vc_g6

0xb842,	// (0x0002a845) slider_set_pane_vc_g7

0xb9f4,	// (0x0002a9f7) slider_form_pane_vc_g1

0xb9fd,	// (0x0002aa00) slider_form_pane_vc_g2

0xba06,	// (0x0002aa09) slider_form_pane_vc_g3

0xb9f4,	// (0x0002a9f7) slider_form_pane_vc_g4

0xba0f,	// (0x0002aa12) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x0002ea97) slider_form_pane_vc_g

0x15e9,	// (0x000205ec) main_idle_act3_pane

0xd3d3,	// (0x0002c3d6) ai3_links_pane

0xd3dc,	// (0x0002c3df) popup_ai3_data_window_ParamLimits

0xd3dc,	// (0x0002c3df) popup_ai3_data_window

0x15e9,	// (0x000205ec) grid_ai3_links_pane

0xd3f4,	// (0x0002c3f7) cell_ai3_links_pane_ParamLimits

0xd3f4,	// (0x0002c3f7) cell_ai3_links_pane

0xd40c,	// (0x0002c40f) bg_popup_sub_pane_cp11

0xd419,	// (0x0002c41c) cell_ai3_links_pane_g1

0x15e9,	// (0x000205ec) bg_popup_sub_pane_cp12

0xd43e,	// (0x0002c441) heading_ai3_data_pane

0xd446,	// (0x0002c449) list_ai3_gene_pane

0xd452,	// (0x0002c455) popup_ai3_data_window_g1

0xd45a,	// (0x0002c45d) heading_ai3_data_pane_g1

0xd462,	// (0x0002c465) heading_ai3_data_pane_t1

0xd470,	// (0x0002c473) list_double_ai3_gene_pane_ParamLimits

0xd470,	// (0x0002c473) list_double_ai3_gene_pane

0xd47d,	// (0x0002c480) list_single_ai3_gene_pane_ParamLimits

0xd47d,	// (0x0002c480) list_single_ai3_gene_pane

0xc240,	// (0x0002b243) list_highlight_pane_cp7_ParamLimits

0xc240,	// (0x0002b243) list_highlight_pane_cp7

0xd48a,	// (0x0002c48d) list_single_a13_gene_pane_t1_ParamLimits

0xd48a,	// (0x0002c48d) list_single_a13_gene_pane_t1

0xd4a1,	// (0x0002c4a4) list_single_ai3_gene_pane_g1

0xd4aa,	// (0x0002c4ad) list_single_ai3_gene_pane_g2

0x0001,

0xfccf,	// (0x0002ecd2) list_single_ai3_gene_pane_g

0xd4b2,	// (0x0002c4b5) list_double_ai3_gene_pane_g1_ParamLimits

0xd4b2,	// (0x0002c4b5) list_double_ai3_gene_pane_g1

0xd4be,	// (0x0002c4c1) list_double_ai3_gene_pane_t1_ParamLimits

0xd4be,	// (0x0002c4c1) list_double_ai3_gene_pane_t1

0xd4da,	// (0x0002c4dd) list_double_ai3_gene_pane_t2_ParamLimits

0xd4da,	// (0x0002c4dd) list_double_ai3_gene_pane_t2

0xd4ef,	// (0x0002c4f2) list_double_ai3_gene_pane_t3_ParamLimits

0xd4ef,	// (0x0002c4f2) list_double_ai3_gene_pane_t3

0x0002,

0xfcd4,	// (0x0002ecd7) list_double_ai3_gene_pane_t_ParamLimits

0xfcd4,	// (0x0002ecd7) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x635f,	// (0x00025362) aid_size_min_col_2

0xd39d,	// (0x0002c3a0) aid_size_min_msg_ParamLimits

0xd39d,	// (0x0002c3a0) aid_size_min_msg

0xc63f,	// (0x0002b642) fep_vkb_top_text_pane_g2_ParamLimits

0xc63f,	// (0x0002b642) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x0002eb4a) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x0002eb4a) fep_vkb_top_text_pane_g

0x15e9,	// (0x000205ec) main_hc_apps_shell_pane

0xd50c,	// (0x0002c50f) grid_hc_apps_pane_ParamLimits

0xd50c,	// (0x0002c50f) grid_hc_apps_pane

0xd51b,	// (0x0002c51e) list_hc_apps_pane

0xd523,	// (0x0002c526) scroll_pane_cp37_ParamLimits

0xd523,	// (0x0002c526) scroll_pane_cp37

0xd52f,	// (0x0002c532) cell_hc_apps_pane_ParamLimits

0xd52f,	// (0x0002c532) cell_hc_apps_pane

0xd5dd,	// (0x0002c5e0) cell_hc_apps_pane_g1_ParamLimits

0xd5dd,	// (0x0002c5e0) cell_hc_apps_pane_g1

0xd60e,	// (0x0002c611) cell_hc_apps_pane_g2_ParamLimits

0xd60e,	// (0x0002c611) cell_hc_apps_pane_g2

0xd62a,	// (0x0002c62d) cell_hc_apps_pane_g3_ParamLimits

0xd62a,	// (0x0002c62d) cell_hc_apps_pane_g3

0x0002,

0xfcdb,	// (0x0002ecde) cell_hc_apps_pane_g_ParamLimits

0xfcdb,	// (0x0002ecde) cell_hc_apps_pane_g

0xd64c,	// (0x0002c64f) cell_hc_apps_pane_t1_ParamLimits

0xd64c,	// (0x0002c64f) cell_hc_apps_pane_t1

0x179d,	// (0x000207a0) grid_highlight_pane_cp10_ParamLimits

0x179d,	// (0x000207a0) grid_highlight_pane_cp10

0xd68c,	// (0x0002c68f) list_single_hc_apps_pane_ParamLimits

0xd68c,	// (0x0002c68f) list_single_hc_apps_pane

0xd6ef,	// (0x0002c6f2) list_single_hc_apps_pane_g1

0x6447,	// (0x0002544a) list_single_hc_apps_pane_g2

0x0001,

0xfce2,	// (0x0002ece5) list_single_hc_apps_pane_g

0x6460,	// (0x00025463) list_single_hc_apps_pane_g2_copy1

0x647c,	// (0x0002547f) list_single_hc_apps_pane_t1

0x1659,	// (0x0002065c) bg_set_opt_pane_cp_ParamLimits

0x6991,	// (0x00025994) setting_slider_pane_t1_ParamLimits

0x69aa,	// (0x000259ad) setting_slider_pane_t2_ParamLimits

0x69c4,	// (0x000259c7) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0002e561) setting_slider_pane_t_ParamLimits

0x69dc,	// (0x000259df) slider_set_pane_ParamLimits

0x7cd0,	// (0x00026cd3) control_pane_g5_ParamLimits

0x7cd0,	// (0x00026cd3) control_pane_g5

0xb010,	// (0x0002a013) slider_set_pane_g1_ParamLimits

0x8c3b,	// (0x00027c3e) slider_set_pane_g2_ParamLimits

0x8c47,	// (0x00027c4a) slider_set_pane_g3_ParamLimits

0x8c5b,	// (0x00027c5e) slider_set_pane_g4_ParamLimits

0x8c73,	// (0x00027c76) slider_set_pane_g5_ParamLimits

0x8c47,	// (0x00027c4a) slider_set_pane_g6_ParamLimits

0x8c89,	// (0x00027c8c) slider_set_pane_g7_ParamLimits

0xf955,	// (0x0002e958) slider_set_pane_g_ParamLimits

0x7774,	// (0x00026777) navi_icon_text_pane_ParamLimits

0x8420,	// (0x00027423) aid_fill_nsta_2_ParamLimits

0x845f,	// (0x00027462) aid_touch_tab_arrow_left_ParamLimits

0x846e,	// (0x00027471) aid_touch_tab_arrow_right_ParamLimits

0x84db,	// (0x000274de) clock_nsta_pane_ParamLimits

0xab13,	// (0x00029b16) navi_icon_pane_g1_ParamLimits

0xab1f,	// (0x00029b22) navi_text_pane_t1_ParamLimits

0xbe20,	// (0x0002ae23) navi_icon_text_pane_g1_ParamLimits

0xbe2c,	// (0x0002ae2f) navi_icon_text_pane_t1_ParamLimits

0xd6ef,	// (0x0002c6f2) list_single_hc_apps_pane_g1_ParamLimits

0x6447,	// (0x0002544a) list_single_hc_apps_pane_g2_ParamLimits

0xfce2,	// (0x0002ece5) list_single_hc_apps_pane_g_ParamLimits

0x6460,	// (0x00025463) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x647c,	// (0x0002547f) list_single_hc_apps_pane_t1_ParamLimits

0x67d5,	// (0x000257d8) popup_toolbar2_fixed_window_ParamLimits

0x67d5,	// (0x000257d8) popup_toolbar2_fixed_window

0x8336,	// (0x00027339) popup_toolbar2_float_window

0x15e9,	// (0x000205ec) bg_popup_sub_pane_cp27

0xd708,	// (0x0002c70b) grid_toolbar2_float_pane

0x15e9,	// (0x000205ec) bg_popup_sub_pane_cp26

0xd708,	// (0x0002c70b) grid_toolbar2_fixed_pane

0xd710,	// (0x0002c713) cell_toolbar2_fixed_pane_ParamLimits

0xd710,	// (0x0002c713) cell_toolbar2_fixed_pane

0xd720,	// (0x0002c723) cell_toolbar2_fixed_pane_g1

0x8875,	// (0x00027878) toolbar2_fixed_button_pane

0x8925,	// (0x00027928) toolbar2_fixed_button_pane_g1

0x892d,	// (0x00027930) toolbar2_fixed_button_pane_g2

0x8935,	// (0x00027938) toolbar2_fixed_button_pane_g3

0x893d,	// (0x00027940) toolbar2_fixed_button_pane_g4

0x8945,	// (0x00027948) toolbar2_fixed_button_pane_g5

0x894d,	// (0x00027950) toolbar2_fixed_button_pane_g6

0x8955,	// (0x00027958) toolbar2_fixed_button_pane_g7

0x895d,	// (0x00027960) toolbar2_fixed_button_pane_g8

0x8965,	// (0x00027968) toolbar2_fixed_button_pane_g9

0x0008,

0xf857,	// (0x0002e85a) toolbar2_fixed_button_pane_g

0xd729,	// (0x0002c72c) cell_toolbar2_float_pane_ParamLimits

0xd729,	// (0x0002c72c) cell_toolbar2_float_pane

0xd73a,	// (0x0002c73d) cell_toolbar2_float_pane_g1

0x8875,	// (0x00027878) toolbar2_fixed_button_pane_cp

0xc3a9,	// (0x0002b3ac) fep_vkb_accented_list_pane_ParamLimits

0xc3a9,	// (0x0002b3ac) fep_vkb_accented_list_pane

0x902b,	// (0x0002802e) bg_popup_fep_shadow_pane_g9

0x78f4,	// (0x000268f7) bg_popup_fep_shadow_pane_cp3

0x1bf7,	// (0x00020bfa) list_accented_list_pane

0xd743,	// (0x0002c746) list_single_accented_list_pane_ParamLimits

0xd743,	// (0x0002c746) list_single_accented_list_pane

0x78f4,	// (0x000268f7) list_highlight_pane_cp10

0xd754,	// (0x0002c757) list_single_accented_list_pane_t1

0x8286,	// (0x00027289) popup_slider_window_ParamLimits

0x8286,	// (0x00027289) popup_slider_window

0xd394,	// (0x0002c397) aid_indentation_list_msg

0xd812,	// (0x0002c815) bg_popup_window_pane_cp19

0xd87a,	// (0x0002c87d) popup_slider_window_g1

0xd896,	// (0x0002c899) popup_slider_window_g2

0xd8b2,	// (0x0002c8b5) popup_slider_window_g3

0x0005,

0xfce7,	// (0x0002ecea) popup_slider_window_g

0xd918,	// (0x0002c91b) popup_slider_window_t1

0xd98c,	// (0x0002c98f) small_volume_slider_vertical_pane

0xc27b,	// (0x0002b27e) small_volume_slider_vertical_pane_g1

0xc27b,	// (0x0002b27e) small_volume_slider_vertical_pane_g2

0xd9a8,	// (0x0002c9ab) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf9,	// (0x0002ecfc) small_volume_slider_vertical_pane_g

0x65a5,	// (0x000255a8) area_side_right_pane_ParamLimits

0x65a5,	// (0x000255a8) area_side_right_pane

0x9182,	// (0x00028185) aid_size_side_button_ParamLimits

0x9182,	// (0x00028185) aid_size_side_button

0x9196,	// (0x00028199) grid_sctrl_middle_pane_ParamLimits

0x9196,	// (0x00028199) grid_sctrl_middle_pane

0x91b5,	// (0x000281b8) sctrl_sk_bottom_pane

0x91c6,	// (0x000281c9) sctrl_sk_top_pane

0x91d8,	// (0x000281db) aid_touch_sctrl_top

0x179d,	// (0x000207a0) bg_sctrl_sk_pane_ParamLimits

0x179d,	// (0x000207a0) bg_sctrl_sk_pane

0x91e5,	// (0x000281e8) sctrl_sk_top_pane_g1

0x91f2,	// (0x000281f5) sctrl_sk_top_pane_t1

0x91d8,	// (0x000281db) aid_touch_sctrl_bottom

0x179d,	// (0x000207a0) bg_sctrl_sk_pane_cp_ParamLimits

0x179d,	// (0x000207a0) bg_sctrl_sk_pane_cp

0x920d,	// (0x00028210) sctrl_sk_bottom_pane_g1

0x91f2,	// (0x000281f5) sctrl_sk_bottom_pane_t1

0x9216,	// (0x00028219) cell_sctrl_middle_pane_ParamLimits

0x9216,	// (0x00028219) cell_sctrl_middle_pane

0x9231,	// (0x00028234) aid_touch_sctrl_middle_ParamLimits

0x9231,	// (0x00028234) aid_touch_sctrl_middle

0x1a83,	// (0x00020a86) bg_sctrl_middle_pane_ParamLimits

0x1a83,	// (0x00020a86) bg_sctrl_middle_pane

0xc4eb,	// (0x0002b4ee) cell_sctrl_middle_pane_g1_ParamLimits

0xc4eb,	// (0x0002b4ee) cell_sctrl_middle_pane_g1

0x9243,	// (0x00028246) cell_sctrl_middle_pane_g2_ParamLimits

0x9243,	// (0x00028246) cell_sctrl_middle_pane_g2

0x0001,

0xfd05,	// (0x0002ed08) cell_sctrl_middle_pane_g_ParamLimits

0xfd05,	// (0x0002ed08) cell_sctrl_middle_pane_g

0x8925,	// (0x00027928) bg_sctrl_middle_pane_g1

0x892d,	// (0x00027930) bg_sctrl_middle_pane_g2

0x8935,	// (0x00027938) bg_sctrl_middle_pane_g3

0x893d,	// (0x00027940) bg_sctrl_middle_pane_g4

0x8945,	// (0x00027948) bg_sctrl_middle_pane_g5

0x894d,	// (0x00027950) bg_sctrl_middle_pane_g6

0x8955,	// (0x00027958) bg_sctrl_middle_pane_g7

0x895d,	// (0x00027960) bg_sctrl_middle_pane_g8

0x0007,

0xfd0a,	// (0x0002ed0d) bg_sctrl_middle_pane_g

0x8965,	// (0x00027968) bg_sctrl_middle_pane_g8_copy1

0x8925,	// (0x00027928) bg_sctrl_sk_pane_g1

0x892d,	// (0x00027930) bg_sctrl_sk_pane_g2

0x8935,	// (0x00027938) bg_sctrl_sk_pane_g3

0x0008,

0xf857,	// (0x0002e85a) bg_sctrl_sk_pane_g

0x1967,	// (0x0002096a) aid_size_touch_scroll_bar

0x893d,	// (0x00027940) bg_sctrl_sk_pane_g4

0x8945,	// (0x00027948) bg_sctrl_sk_pane_g5

0x894d,	// (0x00027950) bg_sctrl_sk_pane_g6

0x8955,	// (0x00027958) bg_sctrl_sk_pane_g7

0x895d,	// (0x00027960) bg_sctrl_sk_pane_g8

0x8965,	// (0x00027968) bg_sctrl_sk_pane_g9

0x7eef,	// (0x00026ef2) popup_fep_china_hwr2_fs_candidate_window

0x7ef9,	// (0x00026efc) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7ef9,	// (0x00026efc) popup_fep_china_hwr2_fs_control_window

0xc4eb,	// (0x0002b4ee) sctrl_sk_top_pane_g2

0x0001,

0xfd00,	// (0x0002ed03) sctrl_sk_top_pane_g

0xd9b1,	// (0x0002c9b4) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9b1,	// (0x0002c9b4) aid_fep_china_hwr2_fs_cell

0xd9c3,	// (0x0002c9c6) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9c3,	// (0x0002c9c6) bg_popup_fep_shadow_pane_cp4

0xd9da,	// (0x0002c9dd) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9da,	// (0x0002c9dd) bg_popup_fep_shadow_pane_cp5

0xd9ec,	// (0x0002c9ef) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9ec,	// (0x0002c9ef) popup_fep_china_hwr2_fs_control_bar_grid

0xd9fc,	// (0x0002c9ff) popup_fep_china_hwr2_fs_control_funtion_grid

0xda04,	// (0x0002ca07) aid_fep_china_hwr2_fs_candi_cell

0x15e9,	// (0x000205ec) bg_popup_fep_shadow_pane_cp6

0xda0e,	// (0x0002ca11) popup_fep_china_hwr2_fs_candidate_grid

0xda18,	// (0x0002ca1b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda18,	// (0x0002ca1b) cell_fep_china_hwr2_fs_funtion_grid

0xc27b,	// (0x0002b27e) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda30,	// (0x0002ca33) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda30,	// (0x0002ca33) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda3e,	// (0x0002ca41) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda3e,	// (0x0002ca41) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1b,	// (0x0002ed1e) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1b,	// (0x0002ed1e) cell_fep_china_hwr2_fs_funtion_grid_g

0xda54,	// (0x0002ca57) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda54,	// (0x0002ca57) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda69,	// (0x0002ca6c) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda69,	// (0x0002ca6c) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd20,	// (0x0002ed23) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd20,	// (0x0002ed23) cell_fep_china_hwr2_fs_funtion_grid_t

0xda85,	// (0x0002ca88) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda8d,	// (0x0002ca90) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda95,	// (0x0002ca98) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd25,	// (0x0002ed28) popup_fep_china_hwr2_fs_control_bar_grid_g

0xda9d,	// (0x0002caa0) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xda9d,	// (0x0002caa0) cell_fep_china_hwr2_fs_candidate_grid

0xdab6,	// (0x0002cab9) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdabe,	// (0x0002cac1) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc27b,	// (0x0002b27e) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc27b,	// (0x0002b27e) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x0002eb4f) cell_fep_china_hwr2_fs_candidate_grid_g

0xdac6,	// (0x0002cac9) cell_fep_china_hwr2_fs_candidate_grid_t1

0x84ee,	// (0x000274f1) clock_nsta_pane_cp_24_ParamLimits

0x84ee,	// (0x000274f1) clock_nsta_pane_cp_24

0x856c,	// (0x0002756f) indicator_nsta_pane_cp_24_ParamLimits

0x856c,	// (0x0002756f) indicator_nsta_pane_cp_24

0xa98f,	// (0x00029992) heading_pane_g1

0x0001,

0xf8bc,	// (0x0002e8bf) heading_pane_g

0xb3c5,	// (0x0002a3c8) grid_sct_catagory_button_pane

0xb3f5,	// (0x0002a3f8) scroll_pane_cp5_ParamLimits

0xbe6e,	// (0x0002ae71) button_value_adjust_pane_cp5_ParamLimits

0xbe6e,	// (0x0002ae71) button_value_adjust_pane_cp5

0xbf4d,	// (0x0002af50) form2_midp_time_pane_ParamLimits

0xdad4,	// (0x0002cad7) cell_sct_catagory_button_pane_ParamLimits

0xdad4,	// (0x0002cad7) cell_sct_catagory_button_pane

0xc240,	// (0x0002b243) bg_button_pane_cp01_ParamLimits

0xc240,	// (0x0002b243) bg_button_pane_cp01

0xc27b,	// (0x0002b27e) cell_sct_catagory_button_pane_g1

0x82c5,	// (0x000272c8) popup_tb_extension_window

0xdae6,	// (0x0002cae9) aid_size_cell_ext_ParamLimits

0xdae6,	// (0x0002cae9) aid_size_cell_ext

0x179d,	// (0x000207a0) bg_tb_trans_pane_cp1_ParamLimits

0x179d,	// (0x000207a0) bg_tb_trans_pane_cp1

0xdb06,	// (0x0002cb09) grid_tb_ext_pane_ParamLimits

0xdb06,	// (0x0002cb09) grid_tb_ext_pane

0xdb36,	// (0x0002cb39) cell_tb_ext_pane_ParamLimits

0xdb36,	// (0x0002cb39) cell_tb_ext_pane

0xdb4d,	// (0x0002cb50) cell_tb_ext_pane_g1_ParamLimits

0xdb4d,	// (0x0002cb50) cell_tb_ext_pane_g1

0xdb6a,	// (0x0002cb6d) cell_tb_ext_pane_t1

0x179d,	// (0x000207a0) list_highlight_pane_cp11_ParamLimits

0x179d,	// (0x000207a0) list_highlight_pane_cp11

0x67f4,	// (0x000257f7) popup_uni_indicator_window_ParamLimits

0x67f4,	// (0x000257f7) popup_uni_indicator_window

0x1a83,	// (0x00020a86) bg_popup_sub_pane_cp14

0xdb86,	// (0x0002cb89) list_uniindi_pane

0xdb92,	// (0x0002cb95) uniindi_top_pane

0x179d,	// (0x000207a0) bg_uniindi_top_pane

0xdbb1,	// (0x0002cbb4) uniindi_top_pane_g1

0xdbc7,	// (0x0002cbca) uniindi_top_pane_g2

0x0003,

0xfd2c,	// (0x0002ed2f) uniindi_top_pane_g

0xdbf1,	// (0x0002cbf4) uniindi_top_pane_t1

0xdc1b,	// (0x0002cc1e) list_single_uniindi_pane_ParamLimits

0xdc1b,	// (0x0002cc1e) list_single_uniindi_pane

0xc27b,	// (0x0002b27e) bg_uniindi_top_pane_g1

0xdc2d,	// (0x0002cc30) list_single_uniindi_pane_g1

0xdc40,	// (0x0002cc43) list_single_uniindi_pane_t1

0x15e9,	// (0x000205ec) control_bg_pane

0xdc65,	// (0x0002cc68) bg_sctrl_sk_pane_cp1

0xdc6e,	// (0x0002cc71) bg_sctrl_sk_pane_cp2

0xdc77,	// (0x0002cc7a) control_bg_pane_g1

0xdc80,	// (0x0002cc83) control_bg_pane_g2

0x0001,

0xfd35,	// (0x0002ed38) control_bg_pane_g

0xbcc4,	// (0x0002acc7) cell_indicator_nsta_pane_g1_ParamLimits

0xbcd2,	// (0x0002acd5) cell_indicator_nsta_pane_g2_ParamLimits

0xfab0,	// (0x0002eab3) cell_indicator_nsta_pane_g_ParamLimits

0x6125,	// (0x00025128) form2_midp_time_pane_t1_ParamLimits

0x1919,	// (0x0002091c) main_idle_act4_pane_ParamLimits

0x1919,	// (0x0002091c) main_idle_act4_pane

0x82c5,	// (0x000272c8) popup_tb_extension_window_ParamLimits

0xdb26,	// (0x0002cb29) tb_ext_find_pane_ParamLimits

0xdb26,	// (0x0002cb29) tb_ext_find_pane

0xdc89,	// (0x0002cc8c) ai_gene_pane_1_cp1

0x7a3f,	// (0x00026a42) ai_gene_pane_2_cp1

0xdc91,	// (0x0002cc94) list_single_idle_plugin_calendar_pane

0xdc9a,	// (0x0002cc9d) list_single_idle_plugin_notification_pane

0xdca3,	// (0x0002cca6) list_single_idle_plugin_player_pane

0xdcac,	// (0x0002ccaf) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcac,	// (0x0002ccaf) list_single_idle_plugin_shortcut_pane

0xdcce,	// (0x0002ccd1) main_idle_act4_pane_t1

0xdce0,	// (0x0002cce3) main_idle_act4_pane_t2

0x0001,

0xfd3a,	// (0x0002ed3d) main_idle_act4_pane_t

0xdcf2,	// (0x0002ccf5) middle_sk_idle_act4_pane_ParamLimits

0xdcf2,	// (0x0002ccf5) middle_sk_idle_act4_pane

0xdd08,	// (0x0002cd0b) popup_clock_digital_analogue_window_cp2

0xdd22,	// (0x0002cd25) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd22,	// (0x0002cd25) shortcut_wheel_idle_act4_pane

0xc27b,	// (0x0002b27e) shortcut_wheel_idle_act4_pane_g1

0xc27b,	// (0x0002b27e) shortcut_wheel_idle_act4_pane_g2

0xc27b,	// (0x0002b27e) shortcut_wheel_idle_act4_pane_g3

0xc27b,	// (0x0002b27e) shortcut_wheel_idle_act4_pane_g4

0xc27b,	// (0x0002b27e) shortcut_wheel_idle_act4_pane_g5

0xdd36,	// (0x0002cd39) shortcut_wheel_idle_act4_pane_g6

0xdd3e,	// (0x0002cd41) shortcut_wheel_idle_act4_pane_g7

0xdd46,	// (0x0002cd49) shortcut_wheel_idle_act4_pane_g8

0xdd4e,	// (0x0002cd51) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3f,	// (0x0002ed42) shortcut_wheel_idle_act4_pane_g

0xc4eb,	// (0x0002b4ee) middle_sk_idle_act4_pane_g1_ParamLimits

0xc4eb,	// (0x0002b4ee) middle_sk_idle_act4_pane_g1

0xddb2,	// (0x0002cdb5) middle_sk_idle_act4_pane_g2_ParamLimits

0xddb2,	// (0x0002cdb5) middle_sk_idle_act4_pane_g2

0x0001,

0xfd62,	// (0x0002ed65) middle_sk_idle_act4_pane_g_ParamLimits

0xfd62,	// (0x0002ed65) middle_sk_idle_act4_pane_g

0xddbe,	// (0x0002cdc1) middle_sk_idle_act4_pane_t1_ParamLimits

0xddbe,	// (0x0002cdc1) middle_sk_idle_act4_pane_t1

0xdddb,	// (0x0002cdde) grid_ai_shortcut_pane_ParamLimits

0xdddb,	// (0x0002cdde) grid_ai_shortcut_pane

0xddf4,	// (0x0002cdf7) list_highlight_pane_cp16_ParamLimits

0xddf4,	// (0x0002cdf7) list_highlight_pane_cp16

0xde01,	// (0x0002ce04) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde01,	// (0x0002ce04) list_single_idle_plugin_shortcut_pane_g1

0xde0d,	// (0x0002ce10) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde0d,	// (0x0002ce10) list_single_idle_plugin_shortcut_pane_g2

0xde25,	// (0x0002ce28) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde25,	// (0x0002ce28) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd67,	// (0x0002ed6a) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd67,	// (0x0002ed6a) list_single_idle_plugin_shortcut_pane_g

0xde38,	// (0x0002ce3b) cell_ai_shortcut_pane_ParamLimits

0xde38,	// (0x0002ce3b) cell_ai_shortcut_pane

0xde5c,	// (0x0002ce5f) cell_ai_shortcut_pane_g1_ParamLimits

0xde5c,	// (0x0002ce5f) cell_ai_shortcut_pane_g1

0xdc89,	// (0x0002cc8c) ai_gene_pane_1_cp2

0xde7e,	// (0x0002ce81) ai_gene_pane_2_cp2

0xde86,	// (0x0002ce89) list_highlight_pane_cp15

0xde8f,	// (0x0002ce92) list_single_idle_plugin_calendar_pane_g1

0xde86,	// (0x0002ce89) list_highlight_pane_cp17

0xde97,	// (0x0002ce9a) list_single_idle_plugin_calendar_pane_g1_copy1

0xde9f,	// (0x0002cea2) list_single_idle_plugin_player_pane_g1

0xb61e,	// (0x0002a621) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6e,	// (0x0002ed71) list_single_idle_plugin_player_pane_g

0xdea7,	// (0x0002ceaa) list_single_idle_plugin_player_pane_t1

0xdeb5,	// (0x0002ceb8) list_single_idle_plugin_player_pane_t2

0xdec3,	// (0x0002cec6) list_single_idle_plugin_player_pane_t3

0xded1,	// (0x0002ced4) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd73,	// (0x0002ed76) list_single_idle_plugin_player_pane_t

0xdedf,	// (0x0002cee2) wait_bar_pane_cp15

0xdee7,	// (0x0002ceea) grid_ai_notification_pane

0xb61e,	// (0x0002a621) list_single_idle_plugin_notification_pane_g1

0xdef0,	// (0x0002cef3) cell_ai_notification_pane_ParamLimits

0xdef0,	// (0x0002cef3) cell_ai_notification_pane

0xdefd,	// (0x0002cf00) cell_ai_notification_pane_g1

0xdf05,	// (0x0002cf08) cell_ai_notification_pane_t1

0xdf13,	// (0x0002cf16) tb_ext_find_button_pane

0xdf1b,	// (0x0002cf1e) tb_ext_find_pane_g1

0xdf23,	// (0x0002cf26) tb_ext_find_pane_t1

0x38a3,	// (0x000228a6) tb_ext_find_button_pane_g1

0xdf31,	// (0x0002cf34) tb_ext_find_button_pane_g2

0x0001,

0xfd7c,	// (0x0002ed7f) tb_ext_find_button_pane_g

0xdcce,	// (0x0002ccd1) main_idle_act4_pane_t1_ParamLimits

0xdce0,	// (0x0002cce3) main_idle_act4_pane_t2_ParamLimits

0xfd3a,	// (0x0002ed3d) main_idle_act4_pane_t_ParamLimits

0xdd08,	// (0x0002cd0b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd16,	// (0x0002cd19) sat_plugin_idle_act4_pane_ParamLimits

0xdd16,	// (0x0002cd19) sat_plugin_idle_act4_pane

0xdf3a,	// (0x0002cf3d) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf3a,	// (0x0002cf3d) sat_plugin_idle_act4_pane_t1

0xdf4d,	// (0x0002cf50) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf4d,	// (0x0002cf50) sat_plugin_idle_act4_pane_t2

0xdf60,	// (0x0002cf63) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf60,	// (0x0002cf63) sat_plugin_idle_act4_pane_t3

0xdf73,	// (0x0002cf76) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf73,	// (0x0002cf76) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd81,	// (0x0002ed84) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd81,	// (0x0002ed84) sat_plugin_idle_act4_pane_t

0x673d,	// (0x00025740) popup_battery_window_ParamLimits

0x673d,	// (0x00025740) popup_battery_window

0x179d,	// (0x000207a0) bg_popup_sub_pane_cp25_ParamLimits

0x179d,	// (0x000207a0) bg_popup_sub_pane_cp25

0xdf86,	// (0x0002cf89) popup_battery_window_g1_ParamLimits

0xdf86,	// (0x0002cf89) popup_battery_window_g1

0xdf92,	// (0x0002cf95) popup_battery_window_t1_ParamLimits

0xdf92,	// (0x0002cf95) popup_battery_window_t1

0xdfa4,	// (0x0002cfa7) popup_battery_window_t2_ParamLimits

0xdfa4,	// (0x0002cfa7) popup_battery_window_t2

0x0001,

0xfd8a,	// (0x0002ed8d) popup_battery_window_t_ParamLimits

0xfd8a,	// (0x0002ed8d) popup_battery_window_t

0x7908,	// (0x0002690b) midp_canvas_pane_ParamLimits

0x7981,	// (0x00026984) midp_keypad_pane_ParamLimits

0x7981,	// (0x00026984) midp_keypad_pane

0x7e2b,	// (0x00026e2e) main_midp_pane_ParamLimits

0xbd2e,	// (0x0002ad31) signal_pane_g2_cp_ParamLimits

0xdfc1,	// (0x0002cfc4) aid_size_cell_midp_keypad_ParamLimits

0xdfc1,	// (0x0002cfc4) aid_size_cell_midp_keypad

0xdfdb,	// (0x0002cfde) midp_keyp_game_grid_pane_ParamLimits

0xdfdb,	// (0x0002cfde) midp_keyp_game_grid_pane

0xdffb,	// (0x0002cffe) midp_keyp_rocker_pane_ParamLimits

0xdffb,	// (0x0002cffe) midp_keyp_rocker_pane

0xe034,	// (0x0002d037) midp_keyp_sk_left_pane_ParamLimits

0xe034,	// (0x0002d037) midp_keyp_sk_left_pane

0xe08e,	// (0x0002d091) midp_keyp_sk_right_pane_ParamLimits

0xe08e,	// (0x0002d091) midp_keyp_sk_right_pane

0x15e9,	// (0x000205ec) bg_button_pane_cp03

0xe0e8,	// (0x0002d0eb) midp_keyp_sk_left_pane_g1

0x15e9,	// (0x000205ec) bg_button_pane_cp04

0xe0e8,	// (0x0002d0eb) midp_keyp_sk_right_pane_g1

0xc27b,	// (0x0002b27e) midp_keyp_rocker_pane_g1

0xe0f1,	// (0x0002d0f4) keyp_game_cell_pane_ParamLimits

0xe0f1,	// (0x0002d0f4) keyp_game_cell_pane

0x15e9,	// (0x000205ec) bg_button_pane_cp02

0xe104,	// (0x0002d107) keyp_game_cell_pane_g1

0x6773,	// (0x00025776) popup_fep_vkb2_window_ParamLimits

0x6773,	// (0x00025776) popup_fep_vkb2_window

0x9261,	// (0x00028264) aid_size_cell_vkb2_ParamLimits

0x9261,	// (0x00028264) aid_size_cell_vkb2

0x92b5,	// (0x000282b8) popup_fep_vkb2_window_g1_ParamLimits

0x92b5,	// (0x000282b8) popup_fep_vkb2_window_g1

0x92fd,	// (0x00028300) vkb2_area_bottom_pane_ParamLimits

0x92fd,	// (0x00028300) vkb2_area_bottom_pane

0x9349,	// (0x0002834c) vkb2_area_keypad_pane_ParamLimits

0x9349,	// (0x0002834c) vkb2_area_keypad_pane

0x938b,	// (0x0002838e) vkb2_area_top_pane_ParamLimits

0x938b,	// (0x0002838e) vkb2_area_top_pane

0x9405,	// (0x00028408) vkb2_top_entry_pane_ParamLimits

0x9405,	// (0x00028408) vkb2_top_entry_pane

0x942f,	// (0x00028432) vkb2_top_grid_left_pane_ParamLimits

0x942f,	// (0x00028432) vkb2_top_grid_left_pane

0x944d,	// (0x00028450) vkb2_top_grid_right_pane_ParamLimits

0x944d,	// (0x00028450) vkb2_top_grid_right_pane

0x946b,	// (0x0002846e) vkb2_cell_keypad_pane_ParamLimits

0x946b,	// (0x0002846e) vkb2_cell_keypad_pane

0x953c,	// (0x0002853f) vkb2_area_bottom_grid_pane_ParamLimits

0x953c,	// (0x0002853f) vkb2_area_bottom_grid_pane

0x9562,	// (0x00028565) vkb2_area_bottom_pane_g1_ParamLimits

0x9562,	// (0x00028565) vkb2_area_bottom_pane_g1

0x9586,	// (0x00028589) vkb2_area_bottom_pane_g2_ParamLimits

0x9586,	// (0x00028589) vkb2_area_bottom_pane_g2

0x95b4,	// (0x000285b7) vkb2_area_bottom_pane_g3_ParamLimits

0x95b4,	// (0x000285b7) vkb2_area_bottom_pane_g3

0x0002,

0xfd8f,	// (0x0002ed92) vkb2_area_bottom_pane_g_ParamLimits

0xfd8f,	// (0x0002ed92) vkb2_area_bottom_pane_g

0x9615,	// (0x00028618) vkb2_top_cell_left_pane_ParamLimits

0x9615,	// (0x00028618) vkb2_top_cell_left_pane

0xe115,	// (0x0002d118) vkb2_top_entry_pane_g1_ParamLimits

0xe115,	// (0x0002d118) vkb2_top_entry_pane_g1

0xe123,	// (0x0002d126) vkb2_top_entry_pane_t1_ParamLimits

0xe123,	// (0x0002d126) vkb2_top_entry_pane_t1

0xe155,	// (0x0002d158) vkb2_top_entry_pane_t2_ParamLimits

0xe155,	// (0x0002d158) vkb2_top_entry_pane_t2

0xe187,	// (0x0002d18a) vkb2_top_entry_pane_t3_ParamLimits

0xe187,	// (0x0002d18a) vkb2_top_entry_pane_t3

0x0002,

0xfd96,	// (0x0002ed99) vkb2_top_entry_pane_t_ParamLimits

0xfd96,	// (0x0002ed99) vkb2_top_entry_pane_t

0x9662,	// (0x00028665) vkb2_top_grid_right_pane_g1_ParamLimits

0x9662,	// (0x00028665) vkb2_top_grid_right_pane_g1

0x9678,	// (0x0002867b) vkb2_top_grid_right_pane_g2_ParamLimits

0x9678,	// (0x0002867b) vkb2_top_grid_right_pane_g2

0x9690,	// (0x00028693) vkb2_top_grid_right_pane_g3_ParamLimits

0x9690,	// (0x00028693) vkb2_top_grid_right_pane_g3

0x96a8,	// (0x000286ab) vkb2_top_grid_right_pane_g4_ParamLimits

0x96a8,	// (0x000286ab) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9d,	// (0x0002eda0) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9d,	// (0x0002eda0) vkb2_top_grid_right_pane_g

0x96be,	// (0x000286c1) vkb2_top_cell_left_pane_g1

0x96d5,	// (0x000286d8) vkb2_cell_keypad_pane_g1_ParamLimits

0x96d5,	// (0x000286d8) vkb2_cell_keypad_pane_g1

0xe1ab,	// (0x0002d1ae) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1ab,	// (0x0002d1ae) vkb2_cell_keypad_pane_t1

0x96e3,	// (0x000286e6) vkb2_cell_bottom_grid_pane_ParamLimits

0x96e3,	// (0x000286e6) vkb2_cell_bottom_grid_pane

0x971c,	// (0x0002871f) vkb2_cell_bottom_grid_pane_g1

0xdd56,	// (0x0002cd59) aid_call2_pane_cp02

0xdd5e,	// (0x0002cd61) aid_call_pane_cp02

0xdd66,	// (0x0002cd69) clock_digital_number_pane_cp10

0xdd6e,	// (0x0002cd71) clock_digital_number_pane_cp11

0xdd76,	// (0x0002cd79) clock_digital_number_pane_cp12

0xdd7e,	// (0x0002cd81) clock_digital_number_pane_cp13

0xdd86,	// (0x0002cd89) clock_digital_separator_pane_cp10

0x38a3,	// (0x000228a6) popup_clock_digital_analogue_window_cp2_g1

0x38a3,	// (0x000228a6) popup_clock_digital_analogue_window_cp2_g2

0xdd8e,	// (0x0002cd91) popup_clock_digital_analogue_window_cp2_g3

0x38a3,	// (0x000228a6) popup_clock_digital_analogue_window_cp2_g4

0xdd8e,	// (0x0002cd91) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd52,	// (0x0002ed55) popup_clock_digital_analogue_window_cp2_g

0xdd96,	// (0x0002cd99) popup_clock_digital_analogue_window_cp2_t1

0xdda4,	// (0x0002cda7) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5d,	// (0x0002ed60) popup_clock_digital_analogue_window_cp2_t

0xc27b,	// (0x0002b27e) clock_digital_number_pane_cp10_g1

0xc27b,	// (0x0002b27e) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0002eb4f) clock_digital_number_pane_cp10_g

0xc27b,	// (0x0002b27e) clock_digital_separator_pane_cp10_g1

0xc27b,	// (0x0002b27e) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0002eb4f) clock_digital_separator_pane_cp10_g

0xdbd3,	// (0x0002cbd6) uniindi_top_pane_g3

0xdbe4,	// (0x0002cbe7) uniindi_top_pane_g4

0x94f6,	// (0x000284f9) vkb2_row_keypad_pane_ParamLimits

0x94f6,	// (0x000284f9) vkb2_row_keypad_pane

0x9738,	// (0x0002873b) vkb2_cell_t_keypad_pane_ParamLimits

0x9738,	// (0x0002873b) vkb2_cell_t_keypad_pane

0x9748,	// (0x0002874b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9748,	// (0x0002874b) vkb2_cell_t_keypad_pane_cp08

0x975b,	// (0x0002875e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x975b,	// (0x0002875e) vkb2_cell_t_keypad_pane_cp09

0x976f,	// (0x00028772) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x976f,	// (0x00028772) vkb2_cell_t_keypad_pane_cp01

0x9780,	// (0x00028783) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x9780,	// (0x00028783) vkb2_cell_t_keypad_pane_cp02

0x9791,	// (0x00028794) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x9791,	// (0x00028794) vkb2_cell_t_keypad_pane_cp03

0x97a2,	// (0x000287a5) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x97a2,	// (0x000287a5) vkb2_cell_t_keypad_pane_cp04

0x97b3,	// (0x000287b6) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x97b3,	// (0x000287b6) vkb2_cell_t_keypad_pane_cp05

0x97c4,	// (0x000287c7) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x97c4,	// (0x000287c7) vkb2_cell_t_keypad_pane_cp06

0x97d5,	// (0x000287d8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x97d5,	// (0x000287d8) vkb2_cell_t_keypad_pane_cp07

0x97e6,	// (0x000287e9) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x97e6,	// (0x000287e9) vkb2_cell_t_keypad_pane_cp10

0xc4eb,	// (0x0002b4ee) vkb2_cell_t_keypad_pane_g1

0xe1c2,	// (0x0002d1c5) vkb2_cell_t_keypad_pane_t1

0x15e9,	// (0x000205ec) popup_grid_graphic2_window

0xe1d4,	// (0x0002d1d7) aid_size_cell_graphic2_ParamLimits

0xe1d4,	// (0x0002d1d7) aid_size_cell_graphic2

0xe20c,	// (0x0002d20f) bg_popup_window_pane_cp21_ParamLimits

0xe20c,	// (0x0002d20f) bg_popup_window_pane_cp21

0xe21a,	// (0x0002d21d) graphic2_pages_pane_ParamLimits

0xe21a,	// (0x0002d21d) graphic2_pages_pane

0xe260,	// (0x0002d263) grid_graphic2_control_pane_ParamLimits

0xe260,	// (0x0002d263) grid_graphic2_control_pane

0xe29e,	// (0x0002d2a1) grid_graphic2_pane_ParamLimits

0xe29e,	// (0x0002d2a1) grid_graphic2_pane

0xe312,	// (0x0002d315) cell_graphic2_pane

0x15e9,	// (0x000205ec) main_comp_mode_pane

0xd446,	// (0x0002c449) list_ai3_gene_pane_ParamLimits

0xd812,	// (0x0002c815) bg_popup_window_pane_cp19_ParamLimits

0xd81e,	// (0x0002c821) bg_touch_area_indi_pane_ParamLimits

0xd81e,	// (0x0002c821) bg_touch_area_indi_pane

0xd834,	// (0x0002c837) bg_touch_area_indi_pane_cp01_ParamLimits

0xd834,	// (0x0002c837) bg_touch_area_indi_pane_cp01

0xd84a,	// (0x0002c84d) bg_touch_area_indi_pane_cp02_ParamLimits

0xd84a,	// (0x0002c84d) bg_touch_area_indi_pane_cp02

0xd860,	// (0x0002c863) bg_touch_area_indi_pane_cp03_ParamLimits

0xd860,	// (0x0002c863) bg_touch_area_indi_pane_cp03

0xd87a,	// (0x0002c87d) popup_slider_window_g1_ParamLimits

0xd896,	// (0x0002c899) popup_slider_window_g2_ParamLimits

0xd8b2,	// (0x0002c8b5) popup_slider_window_g3_ParamLimits

0xfce7,	// (0x0002ecea) popup_slider_window_g_ParamLimits

0xd918,	// (0x0002c91b) popup_slider_window_t1_ParamLimits

0xd98c,	// (0x0002c98f) small_volume_slider_vertical_pane_ParamLimits

0xe312,	// (0x0002d315) cell_graphic2_pane_ParamLimits

0xe361,	// (0x0002d364) bg_button_pane_cp10_ParamLimits

0xe361,	// (0x0002d364) bg_button_pane_cp10

0xe374,	// (0x0002d377) bg_button_pane_cp11_ParamLimits

0xe374,	// (0x0002d377) bg_button_pane_cp11

0xe387,	// (0x0002d38a) graphic2_pages_pane_g1_ParamLimits

0xe387,	// (0x0002d38a) graphic2_pages_pane_g1

0xe3a2,	// (0x0002d3a5) graphic2_pages_pane_g2_ParamLimits

0xe3a2,	// (0x0002d3a5) graphic2_pages_pane_g2

0x0001,

0xfdab,	// (0x0002edae) graphic2_pages_pane_g_ParamLimits

0xfdab,	// (0x0002edae) graphic2_pages_pane_g

0xe3ba,	// (0x0002d3bd) graphic2_pages_pane_t1_ParamLimits

0xe3ba,	// (0x0002d3bd) graphic2_pages_pane_t1

0xe3d2,	// (0x0002d3d5) cell_graphic2_control_pane_ParamLimits

0xe3d2,	// (0x0002d3d5) cell_graphic2_control_pane

0xe3f0,	// (0x0002d3f3) cell_graphic2_pane_g1_ParamLimits

0xe3f0,	// (0x0002d3f3) cell_graphic2_pane_g1

0xe3fd,	// (0x0002d400) cell_graphic2_pane_g2_ParamLimits

0xe3fd,	// (0x0002d400) cell_graphic2_pane_g2

0xe40a,	// (0x0002d40d) cell_graphic2_pane_g3_ParamLimits

0xe40a,	// (0x0002d40d) cell_graphic2_pane_g3

0xe417,	// (0x0002d41a) cell_graphic2_pane_g4_ParamLimits

0xe417,	// (0x0002d41a) cell_graphic2_pane_g4

0xe424,	// (0x0002d427) cell_graphic2_pane_g5_ParamLimits

0xe424,	// (0x0002d427) cell_graphic2_pane_g5

0x0004,

0xfdb0,	// (0x0002edb3) cell_graphic2_pane_g_ParamLimits

0xfdb0,	// (0x0002edb3) cell_graphic2_pane_g

0xe43f,	// (0x0002d442) cell_graphic2_pane_t1_ParamLimits

0xe43f,	// (0x0002d442) cell_graphic2_pane_t1

0x9d15,	// (0x00028d18) grid_highlight_pane_cp11_ParamLimits

0x9d15,	// (0x00028d18) grid_highlight_pane_cp11

0x179d,	// (0x000207a0) bg_button_pane_cp05

0xe476,	// (0x0002d479) cell_graphic2_control_pane_g1

0xc27b,	// (0x0002b27e) bg_touch_area_indi_pane_g1

0xe49e,	// (0x0002d4a1) aid_cmod_rocker_key_size

0xe4a8,	// (0x0002d4ab) aid_cmode_itu_key_size

0xe4b2,	// (0x0002d4b5) main_cmode_video_pane

0xe4bc,	// (0x0002d4bf) main_comp_mode_itu_pane

0xe4c8,	// (0x0002d4cb) main_comp_mode_rocker_pane

0xe4d4,	// (0x0002d4d7) cell_cmode_rocker_pane_ParamLimits

0xe4d4,	// (0x0002d4d7) cell_cmode_rocker_pane

0xe4e6,	// (0x0002d4e9) cell_cmode_itu_pane_ParamLimits

0xe4e6,	// (0x0002d4e9) cell_cmode_itu_pane

0x1a83,	// (0x00020a86) bg_button_pane_cp06_ParamLimits

0x1a83,	// (0x00020a86) bg_button_pane_cp06

0xc4eb,	// (0x0002b4ee) cell_cmode_rocker_pane_g1_ParamLimits

0xc4eb,	// (0x0002b4ee) cell_cmode_rocker_pane_g1

0xda30,	// (0x0002ca33) cell_cmode_rocker_pane_g2_ParamLimits

0xda30,	// (0x0002ca33) cell_cmode_rocker_pane_g2

0x0001,

0xfdc0,	// (0x0002edc3) cell_cmode_rocker_pane_g_ParamLimits

0xfdc0,	// (0x0002edc3) cell_cmode_rocker_pane_g

0x15e9,	// (0x000205ec) bg_button_pane_cp07

0xe4fb,	// (0x0002d4fe) cell_cmode_itu_pane_g1

0xe504,	// (0x0002d507) cell_cmode_itu_pane_t1

0xe512,	// (0x0002d515) cell_cmode_itu_pane_t2

0x0001,

0xfdc5,	// (0x0002edc8) cell_cmode_itu_pane_t

0xdc55,	// (0x0002cc58) aid_touch_ctrl_left

0xdc5d,	// (0x0002cc60) aid_touch_ctrl_right

0x15e9,	// (0x000205ec) compa_mode_pane

0xe520,	// (0x0002d523) aid_cmod_rocker_key_size_cp

0xe52a,	// (0x0002d52d) aid_cmode_itu_key_size_cp

0xe534,	// (0x0002d537) compa_mode_pane_g1

0xe53c,	// (0x0002d53f) compa_mode_pane_g2

0xe544,	// (0x0002d547) compa_mode_pane_g3

0x0002,

0xfdca,	// (0x0002edcd) compa_mode_pane_g

0xe54c,	// (0x0002d54f) main_comp_mode_itu_pane_cp

0xe554,	// (0x0002d557) main_comp_mode_rocker_pane_cp

0xe55c,	// (0x0002d55f) cell_cmode_itu_pane_cp_ParamLimits

0xe55c,	// (0x0002d55f) cell_cmode_itu_pane_cp

0xe571,	// (0x0002d574) cell_cmode_rocker_pane_cp_ParamLimits

0xe571,	// (0x0002d574) cell_cmode_rocker_pane_cp

0x1a83,	// (0x00020a86) bg_button_pane_cp06_cp_ParamLimits

0x1a83,	// (0x00020a86) bg_button_pane_cp06_cp

0xc4eb,	// (0x0002b4ee) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc4eb,	// (0x0002b4ee) cell_cmode_rocker_pane_g1_cp

0xc27b,	// (0x0002b27e) cell_cmode_rocker_pane_g2_cp

0x15e9,	// (0x000205ec) bg_button_pane_cp07_cp

0xe583,	// (0x0002d586) cell_cmode_itu_pane_g1_cp

0xe58c,	// (0x0002d58f) cell_cmode_itu_pane_t1_cp

0xe58c,	// (0x0002d58f) cell_cmode_itu_pane_t2_cp

0xb1aa,	// (0x0002a1ad) settings_code_pane_cp2

0x1659,	// (0x0002065c) bg_popup_window_pane_cp3_ParamLimits

0x18b6,	// (0x000208b9) heading_pane_cp3_ParamLimits

0x18c2,	// (0x000208c5) listscroll_popup_graphic_pane_ParamLimits

0x8e0f,	// (0x00027e12) fep_hwr_aid_pane_ParamLimits

0x91d8,	// (0x000281db) aid_touch_sctrl_top_ParamLimits

0x91e5,	// (0x000281e8) sctrl_sk_top_pane_g1_ParamLimits

0xc4eb,	// (0x0002b4ee) sctrl_sk_top_pane_g2_ParamLimits

0xfd00,	// (0x0002ed03) sctrl_sk_top_pane_g_ParamLimits

0x91f2,	// (0x000281f5) sctrl_sk_top_pane_t1_ParamLimits

0x91d8,	// (0x000281db) aid_touch_sctrl_bottom_ParamLimits

0x91f2,	// (0x000281f5) sctrl_sk_bottom_pane_t1_ParamLimits

0xdb9f,	// (0x0002cba2) aid_area_touch_clock

0x93cd,	// (0x000283d0) aid_vkb2_area_top_pane_cell_ParamLimits

0x93cd,	// (0x000283d0) aid_vkb2_area_top_pane_cell

0x9518,	// (0x0002851b) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x9518,	// (0x0002851b) aid_vkb2_area_bottom_pane_cell

0xe10d,	// (0x0002d110) popup_char_count_window

0xe59a,	// (0x0002d59d) popup_char_count_window_g1

0xe5a3,	// (0x0002d5a6) popup_char_count_window_g2

0xe5ac,	// (0x0002d5af) popup_char_count_window_g3

0x0002,

0xfdd1,	// (0x0002edd4) popup_char_count_window_g

0xe5b5,	// (0x0002d5b8) popup_char_count_window_t1

0x9293,	// (0x00028296) popup_fep_char_preview_window_ParamLimits

0x9293,	// (0x00028296) popup_fep_char_preview_window

0x93eb,	// (0x000283ee) vkb2_top_candi_pane_ParamLimits

0x93eb,	// (0x000283ee) vkb2_top_candi_pane

0xe5c3,	// (0x0002d5c6) cell_vkb2_top_candi_pane_ParamLimits

0xe5c3,	// (0x0002d5c6) cell_vkb2_top_candi_pane

0xa327,	// (0x0002932a) bg_popup_fep_char_preview_window_ParamLimits

0xa327,	// (0x0002932a) bg_popup_fep_char_preview_window

0x97fb,	// (0x000287fe) popup_fep_char_preview_window_t1_ParamLimits

0x97fb,	// (0x000287fe) popup_fep_char_preview_window_t1

0xe610,	// (0x0002d613) bg_popup_fep_char_preview_window_g1

0xe618,	// (0x0002d61b) bg_popup_fep_char_preview_window_g2

0xe620,	// (0x0002d623) bg_popup_fep_char_preview_window_g3

0xe628,	// (0x0002d62b) bg_popup_fep_char_preview_window_g4

0xe630,	// (0x0002d633) bg_popup_fep_char_preview_window_g5

0x9835,	// (0x00028838) bg_popup_fep_char_preview_window_g6

0xe638,	// (0x0002d63b) bg_popup_fep_char_preview_window_g7

0xe640,	// (0x0002d643) bg_popup_fep_char_preview_window_g8

0xe648,	// (0x0002d64b) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd8,	// (0x0002eddb) bg_popup_fep_char_preview_window_g

0xc4eb,	// (0x0002b4ee) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc4eb,	// (0x0002b4ee) cell_vkb2_top_candi_pane_g1

0xc802,	// (0x0002b805) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc802,	// (0x0002b805) cell_vkb2_top_candi_pane_g2

0xc823,	// (0x0002b826) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc823,	// (0x0002b826) cell_vkb2_top_candi_pane_g3

0x983d,	// (0x00028840) cell_vkb2_top_candi_pane_g4_ParamLimits

0x983d,	// (0x00028840) cell_vkb2_top_candi_pane_g4

0xe650,	// (0x0002d653) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe650,	// (0x0002d653) cell_vkb2_top_candi_pane_g5

0xda30,	// (0x0002ca33) cell_vkb2_top_candi_pane_g6_ParamLimits

0xda30,	// (0x0002ca33) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdeb,	// (0x0002edee) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdeb,	// (0x0002edee) cell_vkb2_top_candi_pane_g

0x985e,	// (0x00028861) cell_vkb2_top_candi_pane_t1

0x8c27,	// (0x00027c2a) aid_size_touch_slider_mark_ParamLimits

0x8c27,	// (0x00027c2a) aid_size_touch_slider_mark

0xe250,	// (0x0002d253) grid_graphic2_catg_pane_ParamLimits

0xe250,	// (0x0002d253) grid_graphic2_catg_pane

0xe2ee,	// (0x0002d2f1) popup_grid_graphic2_window_t1_ParamLimits

0xe2ee,	// (0x0002d2f1) popup_grid_graphic2_window_t1

0xe300,	// (0x0002d303) popup_grid_graphic2_window_t2_ParamLimits

0xe300,	// (0x0002d303) popup_grid_graphic2_window_t2

0x0001,

0xfda6,	// (0x0002eda9) popup_grid_graphic2_window_t_ParamLimits

0xfda6,	// (0x0002eda9) popup_grid_graphic2_window_t

0x179d,	// (0x000207a0) bg_button_pane_cp05_ParamLimits

0xe476,	// (0x0002d479) cell_graphic2_control_pane_g1_ParamLimits

0xe671,	// (0x0002d674) cell_graphic2_catg_pane_ParamLimits

0xe671,	// (0x0002d674) cell_graphic2_catg_pane

0x15e9,	// (0x000205ec) bg_button_pane_cp12

0xe683,	// (0x0002d686) cell_graphic2_catg_pane_g1

0xdb6a,	// (0x0002cb6d) cell_tb_ext_pane_t1_ParamLimits

0x9635,	// (0x00028638) vkb2_top_cell_right_narrow_pane_ParamLimits

0x9635,	// (0x00028638) vkb2_top_cell_right_narrow_pane

0x964d,	// (0x00028650) vkb2_top_cell_right_wide_pane_ParamLimits

0x964d,	// (0x00028650) vkb2_top_cell_right_wide_pane

0x8e01,	// (0x00027e04) bg_vkb2_func_pane_ParamLimits

0x8e01,	// (0x00027e04) bg_vkb2_func_pane

0x96be,	// (0x000286c1) vkb2_top_cell_left_pane_g1_ParamLimits

0x8e01,	// (0x00027e04) bg_vkb2_fuc_pane_cp03_ParamLimits

0x8e01,	// (0x00027e04) bg_vkb2_fuc_pane_cp03

0x971c,	// (0x0002871f) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x892d,	// (0x00027930) bg_vkb2_func_pane_g1

0x8935,	// (0x00027938) bg_vkb2_func_pane_g2

0x8945,	// (0x00027948) bg_vkb2_func_pane_g3

0x893d,	// (0x00027940) bg_vkb2_func_pane_g4

0x894d,	// (0x00027950) bg_vkb2_func_pane_g5

0x8955,	// (0x00027958) bg_vkb2_func_pane_g6

0x895d,	// (0x00027960) bg_vkb2_func_pane_g7

0x8965,	// (0x00027968) bg_vkb2_func_pane_g8

0x8925,	// (0x00027928) bg_vkb2_func_pane_g9

0x0008,

0xfdf8,	// (0x0002edfb) bg_vkb2_func_pane_g

0x8e01,	// (0x00027e04) bg_vkb2_fuc_pane_cp01_ParamLimits

0x8e01,	// (0x00027e04) bg_vkb2_fuc_pane_cp01

0x96be,	// (0x000286c1) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x96be,	// (0x000286c1) vkb2_top_cell_right_wide_pane_g1

0x8e01,	// (0x00027e04) bg_vkb2_fuc_pane_cp02_ParamLimits

0x8e01,	// (0x00027e04) bg_vkb2_fuc_pane_cp02

0x971c,	// (0x0002871f) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x971c,	// (0x0002871f) vkb2_top_cell_right_narrow_pane_g1

0xd78c,	// (0x0002c78f) aid_touch_area_decrease_ParamLimits

0xd78c,	// (0x0002c78f) aid_touch_area_decrease

0xd7b0,	// (0x0002c7b3) aid_touch_area_increase_ParamLimits

0xd7b0,	// (0x0002c7b3) aid_touch_area_increase

0xd7c8,	// (0x0002c7cb) aid_touch_area_mute_ParamLimits

0xd7c8,	// (0x0002c7cb) aid_touch_area_mute

0xd7e4,	// (0x0002c7e7) aid_touch_area_slider_ParamLimits

0xd7e4,	// (0x0002c7e7) aid_touch_area_slider

0xd8ce,	// (0x0002c8d1) popup_slider_window_g4_ParamLimits

0xd8ce,	// (0x0002c8d1) popup_slider_window_g4

0xd8e6,	// (0x0002c8e9) popup_slider_window_g5_ParamLimits

0xd8e6,	// (0x0002c8e9) popup_slider_window_g5

0xd908,	// (0x0002c90b) popup_slider_window_g6_ParamLimits

0xd908,	// (0x0002c90b) popup_slider_window_g6

0xd946,	// (0x0002c949) popup_slider_window_t2_ParamLimits

0xd946,	// (0x0002c949) popup_slider_window_t2

0x0001,

0xfcf4,	// (0x0002ecf7) popup_slider_window_t_ParamLimits

0xfcf4,	// (0x0002ecf7) popup_slider_window_t

0xd95e,	// (0x0002c961) slider_pane_ParamLimits

0xd95e,	// (0x0002c961) slider_pane

0xe68c,	// (0x0002d68f) slider_pane_g1_ParamLimits

0xe68c,	// (0x0002d68f) slider_pane_g1

0xe6a0,	// (0x0002d6a3) slider_pane_g2_ParamLimits

0xe6a0,	// (0x0002d6a3) slider_pane_g2

0xe6b6,	// (0x0002d6b9) slider_pane_g3_ParamLimits

0xe6b6,	// (0x0002d6b9) slider_pane_g3

0x0003,

0xfe0b,	// (0x0002ee0e) slider_pane_g_ParamLimits

0xfe0b,	// (0x0002ee0e) slider_pane_g

0x8321,	// (0x00027324) popup_tb_float_extension_window_ParamLimits

0x8321,	// (0x00027324) popup_tb_float_extension_window

0xe6e2,	// (0x0002d6e5) aid_size_cell_tb_float_ext

0x15e9,	// (0x000205ec) bg_popup_sub_window_cp28

0xe6ee,	// (0x0002d6f1) grid_tb_float_ext_pane

0xe6f8,	// (0x0002d6fb) cell_tb_float_ext_pane_ParamLimits

0xe6f8,	// (0x0002d6fb) cell_tb_float_ext_pane

0xe712,	// (0x0002d715) cell_tb_float_ext_pane_g1

0xe71b,	// (0x0002d71e) grid_highlight_pane_cp12

0x8f42,	// (0x00027f45) cell_last_hwr_side_pane_ParamLimits

0x8f42,	// (0x00027f45) cell_last_hwr_side_pane

0xc27b,	// (0x0002b27e) cell_last_hwr_side_pane_g1

0xe724,	// (0x0002d727) cell_last_hwr_side_pane_g2

0x0001,

0xfe14,	// (0x0002ee17) cell_last_hwr_side_pane_g

0x95e4,	// (0x000285e7) vkb2_area_bottom_space_btn_pane_ParamLimits

0x95e4,	// (0x000285e7) vkb2_area_bottom_space_btn_pane

0xc4eb,	// (0x0002b4ee) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1c2,	// (0x0002d1c5) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x985e,	// (0x00028861) cell_vkb2_top_candi_pane_t1_ParamLimits

0x987d,	// (0x00028880) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x987d,	// (0x00028880) vkb2_area_bottom_space_btn_pane_g1

0x98b7,	// (0x000288ba) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x98b7,	// (0x000288ba) vkb2_area_bottom_space_btn_pane_g2

0x98ed,	// (0x000288f0) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x98ed,	// (0x000288f0) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe19,	// (0x0002ee1c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe19,	// (0x0002ee1c) vkb2_area_bottom_space_btn_pane_g

0x8eb6,	// (0x00027eb9) cel_fep_hwr_func_pane_ParamLimits

0x8eb6,	// (0x00027eb9) cel_fep_hwr_func_pane

0x8ef2,	// (0x00027ef5) cell_hwr_side_button_pane_ParamLimits

0x8ef2,	// (0x00027ef5) cell_hwr_side_button_pane

0xdb9f,	// (0x0002cba2) aid_area_touch_clock_ParamLimits

0x179d,	// (0x000207a0) bg_uniindi_top_pane_ParamLimits

0xdbb1,	// (0x0002cbb4) uniindi_top_pane_g1_ParamLimits

0xdbc7,	// (0x0002cbca) uniindi_top_pane_g2_ParamLimits

0xdbd3,	// (0x0002cbd6) uniindi_top_pane_g3_ParamLimits

0xdbe4,	// (0x0002cbe7) uniindi_top_pane_g4_ParamLimits

0xfd2c,	// (0x0002ed2f) uniindi_top_pane_g_ParamLimits

0xdbf1,	// (0x0002cbf4) uniindi_top_pane_t1_ParamLimits

0x179d,	// (0x000207a0) bg_vkb2_func_pane_cp01_ParamLimits

0x179d,	// (0x000207a0) bg_vkb2_func_pane_cp01

0xe72d,	// (0x0002d730) cel_fep_hwr_func_pane_g1_ParamLimits

0xe72d,	// (0x0002d730) cel_fep_hwr_func_pane_g1

0x179d,	// (0x000207a0) bg_vkb2_func_pane_cp02_ParamLimits

0x179d,	// (0x000207a0) bg_vkb2_func_pane_cp02

0xe72d,	// (0x0002d730) cell_hwr_side_button_pane_g1_ParamLimits

0xe72d,	// (0x0002d730) cell_hwr_side_button_pane_g1

0x8779,	// (0x0002777c) status_pane_g4_ParamLimits

0x8779,	// (0x0002777c) status_pane_g4

0x8793,	// (0x00027796) status_pane_t1

0xbfb6,	// (0x0002afb9) form2_midp_gauge_slider_cont_pane

0xbfbe,	// (0x0002afc1) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbfd0,	// (0x0002afd3) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbfe2,	// (0x0002afe5) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x0002eb02) form2_midp_gauge_slider_pane_t_ParamLimits

0xbff4,	// (0x0002aff7) form2_midp_slider_pane_ParamLimits

0x9253,	// (0x00028256) aid_size_cell_func_vkb2_ParamLimits

0x9253,	// (0x00028256) aid_size_cell_func_vkb2

0xe6ce,	// (0x0002d6d1) slider_pane_g4_ParamLimits

0xe6ce,	// (0x0002d6d1) slider_pane_g4

0x9937,	// (0x0002893a) form2_midp_gauge_slider_pane_t2_cp01

0x9945,	// (0x00028948) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9945,	// (0x00028948) form2_midp_gauge_slider_pane_t3_cp01

0x9962,	// (0x00028965) form2_midp_slider_pane_cp01

0x15e9,	// (0x000205ec) navi_smil_pane

0xe766,	// (0x0002d769) navi_smil_pane_g1

0xe76e,	// (0x0002d771) navi_smil_pane_t1

0xe73b,	// (0x0002d73e) form2_midp_slider_pane_g1

0xe744,	// (0x0002d747) form2_midp_slider_pane_g2

0xe74c,	// (0x0002d74f) form2_midp_slider_pane_g3

0xe73b,	// (0x0002d73e) form2_midp_slider_pane_g4

0xe754,	// (0x0002d757) form2_midp_slider_pane_g5

0x0004,

0xfe22,	// (0x0002ee25) form2_midp_slider_pane_g

0x9927,	// (0x0002892a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9927,	// (0x0002892a) vkb2_area_bottom_space_btn_pane_g4

0x85a8,	// (0x000275ab) lc0_navi_pane_ParamLimits

0x85a8,	// (0x000275ab) lc0_navi_pane

0x861e,	// (0x00027621) lc0_stat_indi_pane_ParamLimits

0x861e,	// (0x00027621) lc0_stat_indi_pane

0x8635,	// (0x00027638) ls0_title_pane_ParamLimits

0x8635,	// (0x00027638) ls0_title_pane

0x1a83,	// (0x00020a86) bg_popup_sub_pane_cp14_ParamLimits

0xdb86,	// (0x0002cb89) list_uniindi_pane_ParamLimits

0xdb92,	// (0x0002cb95) uniindi_top_pane_ParamLimits

0xdc2d,	// (0x0002cc30) list_single_uniindi_pane_g1_ParamLimits

0xdc40,	// (0x0002cc43) list_single_uniindi_pane_t1_ParamLimits

0x996b,	// (0x0002896e) lc0_stat_clock_pane_ParamLimits

0x996b,	// (0x0002896e) lc0_stat_clock_pane

0xe77c,	// (0x0002d77f) lc0_stat_indi_pane_g1_ParamLimits

0xe77c,	// (0x0002d77f) lc0_stat_indi_pane_g1

0xe789,	// (0x0002d78c) lc0_stat_indi_pane_g2_ParamLimits

0xe789,	// (0x0002d78c) lc0_stat_indi_pane_g2

0x0001,

0xfe2d,	// (0x0002ee30) lc0_stat_indi_pane_g_ParamLimits

0xfe2d,	// (0x0002ee30) lc0_stat_indi_pane_g

0x9978,	// (0x0002897b) lc0_uni_indicator_pane_ParamLimits

0x9978,	// (0x0002897b) lc0_uni_indicator_pane

0xe796,	// (0x0002d799) ls0_title_pane_g1_ParamLimits

0xe796,	// (0x0002d799) ls0_title_pane_g1

0xe7aa,	// (0x0002d7ad) ls0_title_pane_t1_ParamLimits

0xe7aa,	// (0x0002d7ad) ls0_title_pane_t1

0x9985,	// (0x00028988) lc0_uni_indicator_pane_g1_ParamLimits

0x9985,	// (0x00028988) lc0_uni_indicator_pane_g1

0xe7e0,	// (0x0002d7e3) lc0_stat_clock_pane_t1

0x15e9,	// (0x000205ec) main_ai5_pane

0xe7ee,	// (0x0002d7f1) ai5_sk_pane_ParamLimits

0xe7ee,	// (0x0002d7f1) ai5_sk_pane

0xe7fb,	// (0x0002d7fe) cell_ai5_widget_pane_ParamLimits

0xe7fb,	// (0x0002d7fe) cell_ai5_widget_pane

0xe8ad,	// (0x0002d8b0) aid_size_cell_widget_grid

0xe8bb,	// (0x0002d8be) bg_ai5_widget_pane_ParamLimits

0xe8bb,	// (0x0002d8be) bg_ai5_widget_pane

0xe933,	// (0x0002d936) cell_ai5_widget_pane_g2

0xe947,	// (0x0002d94a) cell_ai5_widget_pane_g3

0xe961,	// (0x0002d964) cell_ai5_widget_pane_g4

0xe971,	// (0x0002d974) cell_ai5_widget_pane_g5

0xe981,	// (0x0002d984) cell_ai5_widget_pane_g6

0xe98d,	// (0x0002d990) cell_ai5_widget_pane_g7

0xe9d5,	// (0x0002d9d8) cell_ai5_widget_pane_t1_ParamLimits

0xe9d5,	// (0x0002d9d8) cell_ai5_widget_pane_t1

0xe9f2,	// (0x0002d9f5) cell_ai5_widget_pane_t2_ParamLimits

0xe9f2,	// (0x0002d9f5) cell_ai5_widget_pane_t2

0xea0a,	// (0x0002da0d) cell_ai5_widget_pane_t3_ParamLimits

0xea0a,	// (0x0002da0d) cell_ai5_widget_pane_t3

0xea22,	// (0x0002da25) cell_ai5_widget_pane_t4_ParamLimits

0xea22,	// (0x0002da25) cell_ai5_widget_pane_t4

0xea48,	// (0x0002da4b) cell_ai5_widget_pane_t5_ParamLimits

0xea48,	// (0x0002da4b) cell_ai5_widget_pane_t5

0xea68,	// (0x0002da6b) cell_ai5_widget_pane_t6_ParamLimits

0xea68,	// (0x0002da6b) cell_ai5_widget_pane_t6

0xea7a,	// (0x0002da7d) cell_ai5_widget_pane_t7_ParamLimits

0xea7a,	// (0x0002da7d) cell_ai5_widget_pane_t7

0xea93,	// (0x0002da96) cell_ai5_widget_pane_t8_ParamLimits

0xea93,	// (0x0002da96) cell_ai5_widget_pane_t8

0x0009,

0xfe47,	// (0x0002ee4a) cell_ai5_widget_pane_t_ParamLimits

0xfe47,	// (0x0002ee4a) cell_ai5_widget_pane_t

0xeaf2,	// (0x0002daf5) grid_ai5_widget_pane

0x1a83,	// (0x00020a86) highlight_cell_ai5_widget_pane_ParamLimits

0x1a83,	// (0x00020a86) highlight_cell_ai5_widget_pane

0xeb00,	// (0x0002db03) ai5_sk_left_pane

0xeb0a,	// (0x0002db0d) ai5_sk_middle_pane

0xeb14,	// (0x0002db17) ai5_sk_right_pane

0xeb1e,	// (0x0002db21) bg_ai5_widget_pane_g1_ParamLimits

0xeb1e,	// (0x0002db21) bg_ai5_widget_pane_g1

0xeb2a,	// (0x0002db2d) bg_ai5_widget_pane_g2_ParamLimits

0xeb2a,	// (0x0002db2d) bg_ai5_widget_pane_g2

0xeb36,	// (0x0002db39) bg_ai5_widget_pane_g3_ParamLimits

0xeb36,	// (0x0002db39) bg_ai5_widget_pane_g3

0xeb42,	// (0x0002db45) bg_ai5_widget_pane_g4_ParamLimits

0xeb42,	// (0x0002db45) bg_ai5_widget_pane_g4

0xeb4e,	// (0x0002db51) bg_ai5_widget_pane_g5_ParamLimits

0xeb4e,	// (0x0002db51) bg_ai5_widget_pane_g5

0xeb5a,	// (0x0002db5d) bg_ai5_widget_pane_g6_ParamLimits

0xeb5a,	// (0x0002db5d) bg_ai5_widget_pane_g6

0xeb66,	// (0x0002db69) bg_ai5_widget_pane_g7_ParamLimits

0xeb66,	// (0x0002db69) bg_ai5_widget_pane_g7

0xeb72,	// (0x0002db75) bg_ai5_widget_pane_g8_ParamLimits

0xeb72,	// (0x0002db75) bg_ai5_widget_pane_g8

0xeb7e,	// (0x0002db81) bg_ai5_widget_pane_g9_ParamLimits

0xeb7e,	// (0x0002db81) bg_ai5_widget_pane_g9

0x0008,

0xfe5c,	// (0x0002ee5f) bg_ai5_widget_pane_g_ParamLimits

0xfe5c,	// (0x0002ee5f) bg_ai5_widget_pane_g

0xebb0,	// (0x0002dbb3) cell_shortcut_ai5_widget_pane_ParamLimits

0xebb0,	// (0x0002dbb3) cell_shortcut_ai5_widget_pane

0x78f4,	// (0x000268f7) bg_cell_shortcut_ai5_widget_pane

0xebc1,	// (0x0002dbc4) cell_grid_ai5_widget_pane_g1

0x78f4,	// (0x000268f7) highlight_cell_shortcut_ai5_widget_pane

0x8935,	// (0x00027938) ai5_sk_left_pane_g1

0xebca,	// (0x0002dbcd) ai5_sk_left_pane_g2

0xebd2,	// (0x0002dbd5) ai5_sk_left_pane_g3

0xebda,	// (0x0002dbdd) ai5_sk_left_pane_g4

0x0003,

0xfe6f,	// (0x0002ee72) ai5_sk_left_pane_g

0xebe2,	// (0x0002dbe5) ai5_sk_left_pane_t1

0x892d,	// (0x00027930) ai5_sk_right_pane_g1

0xebf0,	// (0x0002dbf3) ai5_sk_right_pane_g2

0xebf8,	// (0x0002dbfb) ai5_sk_right_pane_g3

0xec00,	// (0x0002dc03) ai5_sk_right_pane_g4

0x0003,

0xfe78,	// (0x0002ee7b) ai5_sk_right_pane_g

0xec08,	// (0x0002dc0b) ai5_sk_right_pane_t1

0x892d,	// (0x00027930) ai5_sk_middle_pane_g1

0x8935,	// (0x00027938) ai5_sk_middle_pane_g2

0x894d,	// (0x00027950) ai5_sk_middle_pane_g3

0xebf8,	// (0x0002dbfb) ai5_sk_middle_pane_g4

0xebd2,	// (0x0002dbd5) ai5_sk_middle_pane_g5

0xec16,	// (0x0002dc19) ai5_sk_middle_pane_g6

0xec1e,	// (0x0002dc21) ai5_sk_middle_pane_g7

0x0006,

0xfe81,	// (0x0002ee84) ai5_sk_middle_pane_g

0x842e,	// (0x00027431) aid_touch_area_size_lc0_ParamLimits

0x842e,	// (0x00027431) aid_touch_area_size_lc0

0x9041,	// (0x00028044) cell_hwr_candidate_pane_t1_ParamLimits

0x844a,	// (0x0002744d) aid_touch_navi_pane

0x8723,	// (0x00027726) status_dt_navi_pane_ParamLimits

0x8723,	// (0x00027726) status_dt_navi_pane

0x8730,	// (0x00027733) status_dt_sta_pane_ParamLimits

0x8730,	// (0x00027733) status_dt_sta_pane

0xec26,	// (0x0002dc29) dt_sta_controll_pane

0xec33,	// (0x0002dc36) dt_sta_indi_pane

0xec44,	// (0x0002dc47) dt_sta_title_pane

0x179d,	// (0x000207a0) bg_dt_sta_indi_pane_ParamLimits

0x179d,	// (0x000207a0) bg_dt_sta_indi_pane

0xec57,	// (0x0002dc5a) dt_sta_battery_pane

0xec5f,	// (0x0002dc62) dt_sta_indi_pane_g1

0xec68,	// (0x0002dc6b) dt_sta_indi_pane_g2

0xec71,	// (0x0002dc74) dt_sta_indi_pane_g3

0x0002,

0xfe90,	// (0x0002ee93) dt_sta_indi_pane_g

0xec7a,	// (0x0002dc7d) dt_sta_signal_pane

0x1a83,	// (0x00020a86) bg_dt_sta_title_pane_ParamLimits

0x1a83,	// (0x00020a86) bg_dt_sta_title_pane

0xaae3,	// (0x00029ae6) dt_sta_title_pane_g1

0xec83,	// (0x0002dc86) dt_sta_title_pane_t1_ParamLimits

0xec83,	// (0x0002dc86) dt_sta_title_pane_t1

0x15e9,	// (0x000205ec) bg_dt_sta_control_pane

0xec98,	// (0x0002dc9b) dt_sta_controll_pane_g1

0xeca1,	// (0x0002dca4) bg_dt_sta_title_pane_g1

0xecaa,	// (0x0002dcad) bg_dt_sta_title_pane_g2

0xecb3,	// (0x0002dcb6) bg_dt_sta_title_pane_g3

0x0002,

0xfe97,	// (0x0002ee9a) bg_dt_sta_title_pane_g

0xc27b,	// (0x0002b27e) bg_dt_sta_indi_pane_g1

0xecbc,	// (0x0002dcbf) dt_sta_signal_pane_g1

0xecc4,	// (0x0002dcc7) dt_sta_signal_pane_g2

0x0001,

0xfe9e,	// (0x0002eea1) dt_sta_signal_pane_g

0xeccc,	// (0x0002dccf) dt_sta_battery_pane_g1

0xecd5,	// (0x0002dcd8) dt_sta_battery_pane_t1

0xc27b,	// (0x0002b27e) bg_dt_sta_control_pane_g1

0x39ba,	// (0x000229bd) fep_china_uni_eep_pane

0x39c2,	// (0x000229c5) fep_china_uni_entry_pane_ParamLimits

0x39d2,	// (0x000229d5) popup_fep_china_uni_window_g1_ParamLimits

0x39e2,	// (0x000229e5) popup_fep_china_uni_window_g2_ParamLimits

0x39e2,	// (0x000229e5) popup_fep_china_uni_window_g2

0x0001,

0xf713,	// (0x0002e716) popup_fep_china_uni_window_g_ParamLimits

0xf713,	// (0x0002e716) popup_fep_china_uni_window_g

0xece4,	// (0x0002dce7) fep_china_uni_eep_pane_g1

0xecec,	// (0x0002dcef) fep_china_uni_eep_pane_t1

0xe75d,	// (0x0002d760) aid_touch_area_size_smil_player

0x85a0,	// (0x000275a3) lc0_clock_pane

0x8787,	// (0x0002778a) status_pane_g5_ParamLimits

0x8787,	// (0x0002778a) status_pane_g5

0x7fe2,	// (0x00026fe5) popup_keymap_window

0x8745,	// (0x00027748) status_icon_pane

0xe947,	// (0x0002d94a) cell_ai5_widget_pane_g3_ParamLimits

0xe961,	// (0x0002d964) cell_ai5_widget_pane_g4_ParamLimits

0xe971,	// (0x0002d974) cell_ai5_widget_pane_g5_ParamLimits

0xe999,	// (0x0002d99c) cell_ai5_widget_pane_g8_ParamLimits

0xe999,	// (0x0002d99c) cell_ai5_widget_pane_g8

0xe9ad,	// (0x0002d9b0) cell_ai5_widget_pane_g9_ParamLimits

0xe9ad,	// (0x0002d9b0) cell_ai5_widget_pane_g9

0xe9c1,	// (0x0002d9c4) cell_ai5_widget_pane_g10_ParamLimits

0xe9c1,	// (0x0002d9c4) cell_ai5_widget_pane_g10

0xecfb,	// (0x0002dcfe) status_icon_pane_g1

0x15e9,	// (0x000205ec) bg_popup_sub_pane_cp13

0xed03,	// (0x0002dd06) popup_keymap_window_t1

0x7cdf,	// (0x00026ce2) control_pane_g6_ParamLimits

0x7cdf,	// (0x00026ce2) control_pane_g6

0x7cec,	// (0x00026cef) control_pane_g7_ParamLimits

0x7cec,	// (0x00026cef) control_pane_g7

0x7cf9,	// (0x00026cfc) control_pane_g8_ParamLimits

0x7cf9,	// (0x00026cfc) control_pane_g8

0xec26,	// (0x0002dc29) dt_sta_controll_pane_ParamLimits

0xec33,	// (0x0002dc36) dt_sta_indi_pane_ParamLimits

0xec44,	// (0x0002dc47) dt_sta_title_pane_ParamLimits

0x1970,	// (0x00020973) aid_size_touch_scroll_bar_cale

0x6751,	// (0x00025754) popup_discreet_window_ParamLimits

0x6751,	// (0x00025754) popup_discreet_window

0x67cb,	// (0x000257ce) popup_sk_window

0xa327,	// (0x0002932a) bg_popup_sub_pane_cp28_ParamLimits

0xa327,	// (0x0002932a) bg_popup_sub_pane_cp28

0xed11,	// (0x0002dd14) popup_discreet_window_g1_ParamLimits

0xed11,	// (0x0002dd14) popup_discreet_window_g1

0xed31,	// (0x0002dd34) popup_discreet_window_t1_ParamLimits

0xed31,	// (0x0002dd34) popup_discreet_window_t1

0xed4f,	// (0x0002dd52) popup_discreet_window_t2_ParamLimits

0xed4f,	// (0x0002dd52) popup_discreet_window_t2

0x0002,

0xfea3,	// (0x0002eea6) popup_discreet_window_t_ParamLimits

0xfea3,	// (0x0002eea6) popup_discreet_window_t

0x9999,	// (0x0002899c) popup_sk_window_g1

0x99a3,	// (0x000289a6) popup_sk_window_g2

0x0001,

0xfeaa,	// (0x0002eead) popup_sk_window_g

0x99ab,	// (0x000289ae) popup_sk_window_t1

0x99b9,	// (0x000289bc) popup_sk_window_t1_copy1

0xe933,	// (0x0002d936) cell_ai5_widget_pane_g2_ParamLimits

0xeaa5,	// (0x0002daa8) cell_ai5_widget_pane_t9_ParamLimits

0xeaa5,	// (0x0002daa8) cell_ai5_widget_pane_t9

0x15e9,	// (0x000205ec) main_fep_fshwr2_pane

0x99c7,	// (0x000289ca) aid_fshwr2_btn_pane

0x99d3,	// (0x000289d6) aid_fshwr2_syb_pane

0x99e4,	// (0x000289e7) aid_fshwr2_txt_pane

0x99f0,	// (0x000289f3) fshwr2_func_candi_pane

0x9a08,	// (0x00028a0b) fshwr2_hwr_syb_pane

0x9a1f,	// (0x00028a22) fshwr2_icf_pane

0x15e9,	// (0x000205ec) fshwr2_icf_bg_pane

0x9a48,	// (0x00028a4b) fshwr2_icf_pane_t1_ParamLimits

0x9a48,	// (0x00028a4b) fshwr2_icf_pane_t1

0x38a3,	// (0x000228a6) fshwr2_func_candi_pane_g1

0xeda1,	// (0x0002dda4) fshwr2_func_candi_row_pane_ParamLimits

0xeda1,	// (0x0002dda4) fshwr2_func_candi_row_pane

0x9a61,	// (0x00028a64) cell_fshwr2_syb_pane_ParamLimits

0x9a61,	// (0x00028a64) cell_fshwr2_syb_pane

0xc4eb,	// (0x0002b4ee) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc4eb,	// (0x0002b4ee) fshwr2_hwr_syb_pane_g1

0x15e9,	// (0x000205ec) bg_popup_call_pane_cp01

0x9a77,	// (0x00028a7a) fshwr2_func_candi_cell_pane_ParamLimits

0x9a77,	// (0x00028a7a) fshwr2_func_candi_cell_pane

0xa983,	// (0x00029986) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa983,	// (0x00029986) fshwr2_func_candi_cell_bg_pane

0x9ac2,	// (0x00028ac5) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9ac2,	// (0x00028ac5) fshwr2_func_candi_cell_pane_g1

0x9aea,	// (0x00028aed) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9aea,	// (0x00028aed) fshwr2_func_candi_cell_pane_t1

0x15e9,	// (0x000205ec) bg_button_pane_cp08

0xedb1,	// (0x0002ddb4) cell_fshwr2_syb_bg_pane

0x9afd,	// (0x00028b00) cell_fshwr2_syb_bg_pane_g1

0x9b05,	// (0x00028b08) cell_fshwr2_syb_bg_pane_t1

0x1a83,	// (0x00020a86) main_tmo_pane

0xae1c,	// (0x00029e1f) uni_indicator_pane_g1_ParamLimits

0xae2f,	// (0x00029e32) uni_indicator_pane_g2_ParamLimits

0xae41,	// (0x00029e44) uni_indicator_pane_g3_ParamLimits

0xae50,	// (0x00029e53) uni_indicator_pane_g4_ParamLimits

0xae50,	// (0x00029e53) uni_indicator_pane_g4

0xae64,	// (0x00029e67) uni_indicator_pane_g5_ParamLimits

0xae64,	// (0x00029e67) uni_indicator_pane_g5

0xae64,	// (0x00029e67) uni_indicator_pane_g6_ParamLimits

0xae64,	// (0x00029e67) uni_indicator_pane_g6

0xf912,	// (0x0002e915) uni_indicator_pane_g_ParamLimits

0xd76e,	// (0x0002c771) popup_tmo_note_window_ParamLimits

0xd76e,	// (0x0002c771) popup_tmo_note_window

0x1a83,	// (0x00020a86) fshwr2_bg_pane

0x9adb,	// (0x00028ade) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9adb,	// (0x00028ade) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeaf,	// (0x0002eeb2) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeaf,	// (0x0002eeb2) fshwr2_func_candi_cell_pane_g

0xc27b,	// (0x0002b27e) bg_popup_window_pane_cp01

0x9b14,	// (0x00028b17) bg_popup_window_pane_g1_cp01

0xedb9,	// (0x0002ddbc) bg_popup_window_pane_cp22_ParamLimits

0xedb9,	// (0x0002ddbc) bg_popup_window_pane_cp22

0xedc7,	// (0x0002ddca) listscroll_tmo_link_pane_ParamLimits

0xedc7,	// (0x0002ddca) listscroll_tmo_link_pane

0xee07,	// (0x0002de0a) popup_tmo_note_window_g1_ParamLimits

0xee07,	// (0x0002de0a) popup_tmo_note_window_g1

0xee14,	// (0x0002de17) tmo_note_info_pane_ParamLimits

0xee14,	// (0x0002de17) tmo_note_info_pane

0xee2e,	// (0x0002de31) list_tmo_note_info_pane_g1_ParamLimits

0xee2e,	// (0x0002de31) list_tmo_note_info_pane_g1

0xee45,	// (0x0002de48) list_tmo_note_info_pane_g2_ParamLimits

0xee45,	// (0x0002de48) list_tmo_note_info_pane_g2

0x0001,

0xfeb4,	// (0x0002eeb7) list_tmo_note_info_pane_g_ParamLimits

0xfeb4,	// (0x0002eeb7) list_tmo_note_info_pane_g

0xee61,	// (0x0002de64) list_tmo_note_info_text_pane_ParamLimits

0xee61,	// (0x0002de64) list_tmo_note_info_text_pane

0xeee2,	// (0x0002dee5) list_tmo_link_pane

0xeeef,	// (0x0002def2) scroll_pane_cp20

0xeefc,	// (0x0002deff) list_single_tmo_link_pane_ParamLimits

0xeefc,	// (0x0002deff) list_single_tmo_link_pane

0xef0c,	// (0x0002df0f) list_single_tmo_link_pane_t1

0xef1a,	// (0x0002df1d) list_tmo_note_info_text_pane_t1_ParamLimits

0xef1a,	// (0x0002df1d) list_tmo_note_info_text_pane_t1

0x6ebf,	// (0x00025ec2) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6ebf,	// (0x00025ec2) aid_size_touch_scroll_bar_cp01

0x5924,	// (0x00024927) aid_size_touch_slider_marker

0x67b3,	// (0x000257b6) popup_settings_window_ParamLimits

0x67b3,	// (0x000257b6) popup_settings_window

0x5ae9,	// (0x00024aec) popup_candi_list_indi_window

0x844a,	// (0x0002744d) aid_touch_navi_pane_ParamLimits

0x91ac,	// (0x000281af) rs_clock_indi_pane

0x91b5,	// (0x000281b8) sctrl_sk_bottom_pane_ParamLimits

0x91c6,	// (0x000281c9) sctrl_sk_top_pane_ParamLimits

0x92ad,	// (0x000282b0) popup_fep_tooltip_window

0xe8ad,	// (0x0002d8b0) aid_size_cell_widget_grid_ParamLimits

0xe91e,	// (0x0002d921) cell_ai5_widget_pane_g1_ParamLimits

0xe91e,	// (0x0002d921) cell_ai5_widget_pane_g1

0xe981,	// (0x0002d984) cell_ai5_widget_pane_g6_ParamLimits

0xe98d,	// (0x0002d990) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe32,	// (0x0002ee35) cell_ai5_widget_pane_g_ParamLimits

0xfe32,	// (0x0002ee35) cell_ai5_widget_pane_g

0xead4,	// (0x0002dad7) cell_ai5_widget_pane_t10_ParamLimits

0xead4,	// (0x0002dad7) cell_ai5_widget_pane_t10

0xeaf2,	// (0x0002daf5) grid_ai5_widget_pane_ParamLimits

0xeb8a,	// (0x0002db8d) cell_contacts_ai5_widget_pane_ParamLimits

0xeb8a,	// (0x0002db8d) cell_contacts_ai5_widget_pane

0xed64,	// (0x0002dd67) popup_discreet_window_t3_ParamLimits

0xed64,	// (0x0002dd67) popup_discreet_window_t3

0x9a34,	// (0x00028a37) popup_fshwr2_char_preview_window_ParamLimits

0x9a34,	// (0x00028a37) popup_fshwr2_char_preview_window

0xee7f,	// (0x0002de82) tmo_note_info_pane_t1

0xee94,	// (0x0002de97) tmo_note_info_pane_t2

0xeea9,	// (0x0002deac) tmo_note_info_pane_t3

0xeebe,	// (0x0002dec1) tmo_note_info_pane_t4

0xeed0,	// (0x0002ded3) tmo_note_info_pane_t5

0x0004,

0xfeb9,	// (0x0002eebc) tmo_note_info_pane_t

0xeee2,	// (0x0002dee5) list_tmo_link_pane_ParamLimits

0xeeef,	// (0x0002def2) scroll_pane_cp20_ParamLimits

0x15e9,	// (0x000205ec) bg_popup_fep_char_preview_window_cp01

0xef33,	// (0x0002df36) popup_fshwr2_char_preview_window_t1

0xef41,	// (0x0002df44) popup_candi_list_indi_window_g1

0xef4a,	// (0x0002df4d) bg_cell_contacts_ai5_widget_pane

0xef56,	// (0x0002df59) cell_contacts_ai5_widget_pane_g1

0xc96e,	// (0x0002b971) cell_contacts_ai5_widget_pane_g2

0xef6b,	// (0x0002df6e) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec4,	// (0x0002eec7) cell_contacts_ai5_widget_pane_g

0xef77,	// (0x0002df7a) cell_contacts_ai5_widget_pane_t1

0x1a83,	// (0x00020a86) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefee,	// (0x0002dff1) settings_container_pane

0x78f4,	// (0x000268f7) listscroll_set_pane_copy1

0xb97d,	// (0x0002a980) scroll_pane_cp121_copy1

0xa0d4,	// (0x000290d7) set_content_pane_copy1

0xeffa,	// (0x0002dffd) aid_height_set_list_copy1_ParamLimits

0xeffa,	// (0x0002dffd) aid_height_set_list_copy1

0xb05c,	// (0x0002a05f) aid_size_parent_copy1_ParamLimits

0xb05c,	// (0x0002a05f) aid_size_parent_copy1

0xf006,	// (0x0002e009) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf006,	// (0x0002e009) button_value_adjust_pane_cp6_copy1

0x7e2b,	// (0x00026e2e) list_highlight_pane_cp2_copy1_ParamLimits

0x7e2b,	// (0x00026e2e) list_highlight_pane_cp2_copy1

0xf01a,	// (0x0002e01d) list_set_pane_copy1_ParamLimits

0xf01a,	// (0x0002e01d) list_set_pane_copy1

0xef89,	// (0x0002df8c) main_pane_set_t1_copy1_ParamLimits

0xef89,	// (0x0002df8c) main_pane_set_t1_copy1

0xefc3,	// (0x0002dfc6) main_pane_set_t2_copy1_ParamLimits

0xefc3,	// (0x0002dfc6) main_pane_set_t2_copy1

0xf0c7,	// (0x0002e0ca) main_pane_set_t3_copy1

0xf0d5,	// (0x0002e0d8) main_pane_set_t4_copy1

0xefe2,	// (0x0002dfe5) set_content_pane_g1_copy1_ParamLimits

0xefe2,	// (0x0002dfe5) set_content_pane_g1_copy1

0xf0e3,	// (0x0002e0e6) setting_code_pane_copy1

0xf0eb,	// (0x0002e0ee) setting_slider_graphic_pane_copy1

0xf0eb,	// (0x0002e0ee) setting_slider_pane_copy1

0xf0eb,	// (0x0002e0ee) setting_text_pane_copy1

0xf0eb,	// (0x0002e0ee) setting_volume_pane_copy1

0xf0e3,	// (0x0002e0e6) settings_code_pane_cp2_copy1

0xf0f3,	// (0x0002e0f6) settings_code_pane_cp_copy1_ParamLimits

0xf0f3,	// (0x0002e0f6) settings_code_pane_cp_copy1

0x9b1d,	// (0x00028b20) volume_set_pane_copy1

0xf107,	// (0x0002e10a) volume_set_pane_g10_copy1

0xf10f,	// (0x0002e112) volume_set_pane_g1_copy1

0xf117,	// (0x0002e11a) volume_set_pane_g2_copy1

0xf11f,	// (0x0002e122) volume_set_pane_g3_copy1

0xf127,	// (0x0002e12a) volume_set_pane_g4_copy1

0xf12f,	// (0x0002e132) volume_set_pane_g5_copy1

0xf137,	// (0x0002e13a) volume_set_pane_g6_copy1

0xf13f,	// (0x0002e142) volume_set_pane_g7_copy1

0xf147,	// (0x0002e14a) volume_set_pane_g8_copy1

0xf14f,	// (0x0002e152) volume_set_pane_g9_copy1

0x1659,	// (0x0002065c) bg_set_opt_pane_cp_copy1_ParamLimits

0x1659,	// (0x0002065c) bg_set_opt_pane_cp_copy1

0x9b25,	// (0x00028b28) setting_slider_pane_t1_copy1_ParamLimits

0x9b25,	// (0x00028b28) setting_slider_pane_t1_copy1

0x9b43,	// (0x00028b46) setting_slider_pane_t2_copy1_ParamLimits

0x9b43,	// (0x00028b46) setting_slider_pane_t2_copy1

0x9b5d,	// (0x00028b60) setting_slider_pane_t3_copy1_ParamLimits

0x9b5d,	// (0x00028b60) setting_slider_pane_t3_copy1

0x9b75,	// (0x00028b78) slider_set_pane_copy1_ParamLimits

0x9b75,	// (0x00028b78) slider_set_pane_copy1

0x1b49,	// (0x00020b4c) set_opt_bg_pane_g1_copy2

0x1b51,	// (0x00020b54) set_opt_bg_pane_g2_copy2

0xf157,	// (0x0002e15a) set_opt_bg_pane_g3_copy2

0x1b61,	// (0x00020b64) set_opt_bg_pane_g4_copy2

0x1b69,	// (0x00020b6c) set_opt_bg_pane_g5_copy2

0x1b71,	// (0x00020b74) set_opt_bg_pane_g6_copy2

0xf161,	// (0x0002e164) set_opt_bg_pane_g7_copy2

0xf169,	// (0x0002e16c) set_opt_bg_pane_g8_copy2

0xf173,	// (0x0002e176) set_opt_bg_pane_g9_copy2

0x9b8b,	// (0x00028b8e) aid_size_touch_slider_mark_copy1_ParamLimits

0x9b8b,	// (0x00028b8e) aid_size_touch_slider_mark_copy1

0xf17d,	// (0x0002e180) slider_set_pane_g1_copy1

0x9b9f,	// (0x00028ba2) slider_set_pane_g2_copy1

0x8c47,	// (0x00027c4a) slider_set_pane_g3_copy1_ParamLimits

0x8c47,	// (0x00027c4a) slider_set_pane_g3_copy1

0x8c5b,	// (0x00027c5e) slider_set_pane_g4_copy1_ParamLimits

0x8c5b,	// (0x00027c5e) slider_set_pane_g4_copy1

0x8c73,	// (0x00027c76) slider_set_pane_g5_copy1_ParamLimits

0x8c73,	// (0x00027c76) slider_set_pane_g5_copy1

0x8c47,	// (0x00027c4a) slider_set_pane_g6_copy1_ParamLimits

0x8c47,	// (0x00027c4a) slider_set_pane_g6_copy1

0x9ba7,	// (0x00028baa) slider_set_pane_g7_copy1_ParamLimits

0x9ba7,	// (0x00028baa) slider_set_pane_g7_copy1

0x15fd,	// (0x00020600) bg_set_opt_pane_cp2_copy1

0xf186,	// (0x0002e189) setting_slider_graphic_pane_g1_copy1

0xf18f,	// (0x0002e192) setting_slider_graphic_pane_t1_copy1

0xf19f,	// (0x0002e1a2) setting_slider_graphic_pane_t2_copy1

0xf1af,	// (0x0002e1b2) slider_set_pane_cp_copy1

0xf1bf,	// (0x0002e1c2) input_focus_pane_cp1_copy1

0xf1c8,	// (0x0002e1cb) list_set_text_pane_copy1

0xf1d0,	// (0x0002e1d3) setting_text_pane_g1_copy1

0x64aa,	// (0x000254ad) set_text_pane_t1_copy1

0xf1bf,	// (0x0002e1c2) input_focus_pane_cp2_copy1

0xf1d0,	// (0x0002e1d3) setting_code_pane_g1_copy1

0xf1d9,	// (0x0002e1dc) setting_code_pane_t1_copy1

0xf1e7,	// (0x0002e1ea) list_set_graphic_pane_copy1

0x15fd,	// (0x00020600) bg_set_opt_pane_cp4_copy1

0x75ff,	// (0x00026602) list_set_graphic_pane_g1_copy1_ParamLimits

0x75ff,	// (0x00026602) list_set_graphic_pane_g1_copy1

0xf1fb,	// (0x0002e1fe) list_set_graphic_pane_g2_copy1

0x7617,	// (0x0002661a) list_set_graphic_pane_t1_copy1_ParamLimits

0x7617,	// (0x0002661a) list_set_graphic_pane_t1_copy1

0xc27b,	// (0x0002b27e) rs_clock_indi_pane_g1

0xf203,	// (0x0002e206) rs_clock_indi_pane_t1

0xf211,	// (0x0002e214) rs_indi_pane

0xf219,	// (0x0002e21c) rs_indi_pane_g1

0xf222,	// (0x0002e225) rs_indi_pane_g2

0xef41,	// (0x0002df44) rs_indi_pane_g3

0x0002,

0xfecb,	// (0x0002eece) rs_indi_pane_g

0x78f4,	// (0x000268f7) bg_popup_preview_window_pane_cp03

0xf22b,	// (0x0002e22e) popup_fep_tooltip_window_t1

0xcf1f,	// (0x0002bf22) popup_note2_window_g2_ParamLimits

0xcf1f,	// (0x0002bf22) popup_note2_window_g2

0x0001,

0xfc6b,	// (0x0002ec6e) popup_note2_window_g_ParamLimits

0xfc6b,	// (0x0002ec6e) popup_note2_window_g

0xd40c,	// (0x0002c40f) bg_popup_sub_pane_cp11_ParamLimits

0xd419,	// (0x0002c41c) cell_ai3_links_pane_g1_ParamLimits

0xd430,	// (0x0002c433) cell_ai3_links_pane_t1

0x64aa,	// (0x000254ad) set_text_pane_t1_copy1_ParamLimits

0x7805,	// (0x00026808) cell_graphic_popup_pane_cp2_ParamLimits

0x7805,	// (0x00026808) cell_graphic_popup_pane_cp2

0xf239,	// (0x0002e23c) cell_graphic_popup_pane_g1_cp2

0x18f3,	// (0x000208f6) cell_graphic_popup_pane_g2_cp2

0xf241,	// (0x0002e244) cell_graphic_popup_pane_g3_cp2

0xf249,	// (0x0002e24c) cell_graphic_popup_pane_t2_cp2

0x1904,	// (0x00020907) grid_highlight_pane_cp3_cp2

0x3701,	// (0x00022704) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1a83,	// (0x00020a86) main_tmo_pane_ParamLimits

0xd762,	// (0x0002c765) popup_tmo_big_image_note_window

0xe90d,	// (0x0002d910) cell_ai5_widget_list_pane

0xe915,	// (0x0002d918) cell_ai5_widget_lrg_icon_pane

0xee7f,	// (0x0002de82) tmo_note_info_pane_t1_ParamLimits

0xee94,	// (0x0002de97) tmo_note_info_pane_t2_ParamLimits

0xeea9,	// (0x0002deac) tmo_note_info_pane_t3_ParamLimits

0xeebe,	// (0x0002dec1) tmo_note_info_pane_t4_ParamLimits

0xeed0,	// (0x0002ded3) tmo_note_info_pane_t5_ParamLimits

0xfeb9,	// (0x0002eebc) tmo_note_info_pane_t_ParamLimits

0xefee,	// (0x0002dff1) settings_container_pane_ParamLimits

0xf1b7,	// (0x0002e1ba) indicator_popup_pane_cp5

0xf1b7,	// (0x0002e1ba) indicator_popup_pane_cp6

0xf1e7,	// (0x0002e1ea) list_set_graphic_pane_copy1_ParamLimits

0x15e9,	// (0x000205ec) bg_popup_window_pane_cp23

0xf257,	// (0x0002e25a) popup_tmo_big_image_note_window_g1

0xf260,	// (0x0002e263) popup_tmo_big_image_note_window_t1

0xf270,	// (0x0002e273) popup_tmo_big_image_note_window_t2

0xf280,	// (0x0002e283) popup_tmo_big_image_note_window_t3

0x0002,

0xfed2,	// (0x0002eed5) popup_tmo_big_image_note_window_t

0xc27b,	// (0x0002b27e) cell_ai5_widget_lrg_icon_pane_g1

0xf290,	// (0x0002e293) cell_ai5_widget_lrg_icon_pane_t1

0xf29e,	// (0x0002e2a1) cell_ai5_widget_list_row_pane_ParamLimits

0xf29e,	// (0x0002e2a1) cell_ai5_widget_list_row_pane

0xf2b5,	// (0x0002e2b8) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2b5,	// (0x0002e2b8) cell_ai5_widget_list_row_pane_g1

0xf2c2,	// (0x0002e2c5) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2c2,	// (0x0002e2c5) cell_ai5_widget_list_row_pane_t1

0xf2ed,	// (0x0002e2f0) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2ed,	// (0x0002e2f0) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed9,	// (0x0002eedc) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed9,	// (0x0002eedc) cell_ai5_widget_list_row_pane_t

0x15e9,	// (0x000205ec) main_fep_vtchi_ss_pane

0xf335,	// (0x0002e338) popup_fep_char_pre_window

0xf33d,	// (0x0002e340) popup_fep_ituss_window

0xf35e,	// (0x0002e361) popup_fep_vkbss_window

0xf388,	// (0x0002e38b) grid_vkbss_keypad_pane_ParamLimits

0xf388,	// (0x0002e38b) grid_vkbss_keypad_pane

0xf398,	// (0x0002e39b) ituss_keypad_pane

0x9bc9,	// (0x00028bcc) aid_vkbss_key_offset_ParamLimits

0x9bc9,	// (0x00028bcc) aid_vkbss_key_offset

0x9bd5,	// (0x00028bd8) cell_vkbss_key_pane_ParamLimits

0x9bd5,	// (0x00028bd8) cell_vkbss_key_pane

0x8761,	// (0x00027764) bg_cell_vkbss_key_g1_ParamLimits

0x8761,	// (0x00027764) bg_cell_vkbss_key_g1

0xf3a7,	// (0x0002e3aa) cell_vkbss_key_3p_pane_ParamLimits

0xf3a7,	// (0x0002e3aa) cell_vkbss_key_3p_pane

0xf3bb,	// (0x0002e3be) cell_vkbss_key_g1_ParamLimits

0xf3bb,	// (0x0002e3be) cell_vkbss_key_g1

0xf3cf,	// (0x0002e3d2) cell_vkbss_key_t1_ParamLimits

0xf3cf,	// (0x0002e3d2) cell_vkbss_key_t1

0x9beb,	// (0x00028bee) cell_ituss_key_pane_ParamLimits

0x9beb,	// (0x00028bee) cell_ituss_key_pane

0xf3fa,	// (0x0002e3fd) bg_cell_ituss_key_g1_ParamLimits

0xf3fa,	// (0x0002e3fd) bg_cell_ituss_key_g1

0xf406,	// (0x0002e409) cell_ituss_key_pane_g1_ParamLimits

0xf406,	// (0x0002e409) cell_ituss_key_pane_g1

0x9bfc,	// (0x00028bff) cell_ituss_key_pane_g2_ParamLimits

0x9bfc,	// (0x00028bff) cell_ituss_key_pane_g2

0x0002,

0xfee0,	// (0x0002eee3) cell_ituss_key_pane_g_ParamLimits

0xfee0,	// (0x0002eee3) cell_ituss_key_pane_g

0x9c28,	// (0x00028c2b) cell_ituss_key_t1_ParamLimits

0x9c28,	// (0x00028c2b) cell_ituss_key_t1

0x9c62,	// (0x00028c65) cell_ituss_key_t2_ParamLimits

0x9c62,	// (0x00028c65) cell_ituss_key_t2

0x9c93,	// (0x00028c96) cell_ituss_key_t3_ParamLimits

0x9c93,	// (0x00028c96) cell_ituss_key_t3

0x9c62,	// (0x00028c65) cell_ituss_key_t4_ParamLimits

0x9c62,	// (0x00028c65) cell_ituss_key_t4

0x0004,

0xfee7,	// (0x0002eeea) cell_ituss_key_t_ParamLimits

0xfee7,	// (0x0002eeea) cell_ituss_key_t

0xf42c,	// (0x0002e42f) cell_vkbss_key_3p_pane_g1

0xf434,	// (0x0002e437) cell_vkbss_key_3p_pane_g2

0xf43c,	// (0x0002e43f) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef2,	// (0x0002eef5) cell_vkbss_key_3p_pane_g

0x78f4,	// (0x000268f7) bg_popup_fep_char_preview_window_cp02

0xf444,	// (0x0002e447) popup_fep_char_pre_window_t1

0xe8a3,	// (0x0002d8a6) main_ai5_sk_pane

0xef4a,	// (0x0002df4d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef56,	// (0x0002df59) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc96e,	// (0x0002b971) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef6b,	// (0x0002df6e) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec4,	// (0x0002eec7) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef77,	// (0x0002df7a) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1a83,	// (0x00020a86) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf452,	// (0x0002e455) main_ai5_sk_pane_g1

0xa168,	// (0x0002916b) popup_query_code_window_g1

0xf353,	// (0x0002e356) popup_fep_vkb_icf_pane

0xf372,	// (0x0002e375) popup_fep_vtchi_icf_pane

0xf45b,	// (0x0002e45e) bg_icf_pane

0xf467,	// (0x0002e46a) list_vkb_icf_pane

0xf476,	// (0x0002e479) bg_icf_pane_cp01

0xf489,	// (0x0002e48c) vtchi_icf_list_pane

0xf499,	// (0x0002e49c) list_vkb_icf_pane_t1_ParamLimits

0xf499,	// (0x0002e49c) list_vkb_icf_pane_t1

0xf4b0,	// (0x0002e4b3) vtchi_icf_list_pane_t1_ParamLimits

0xf4b0,	// (0x0002e4b3) vtchi_icf_list_pane_t1

0xf33d,	// (0x0002e340) popup_fep_ituss_window_ParamLimits

0xf372,	// (0x0002e375) popup_fep_vtchi_icf_pane_ParamLimits

0xf398,	// (0x0002e39b) ituss_keypad_pane_ParamLimits

0x9bbd,	// (0x00028bc0) ituss_sks_pane

0xf45b,	// (0x0002e45e) bg_icf_pane_ParamLimits

0xf315,	// (0x0002e318) icf_edit_indi_pane_ParamLimits

0xf315,	// (0x0002e318) icf_edit_indi_pane

0xf467,	// (0x0002e46a) list_vkb_icf_pane_ParamLimits

0xf476,	// (0x0002e479) bg_icf_pane_cp01_ParamLimits

0xf328,	// (0x0002e32b) icf_edit_indi_pane_cp01_ParamLimits

0xf328,	// (0x0002e32b) icf_edit_indi_pane_cp01

0xf491,	// (0x0002e494) vtchi_query_pane

0xe72d,	// (0x0002d730) icf_edit_indi_pane_g1_ParamLimits

0xe72d,	// (0x0002d730) icf_edit_indi_pane_g1

0xf525,	// (0x0002e528) icf_edit_indi_pane_g2_ParamLimits

0xf525,	// (0x0002e528) icf_edit_indi_pane_g2

0x0001,

0xff0a,	// (0x0002ef0d) icf_edit_indi_pane_g_ParamLimits

0xff0a,	// (0x0002ef0d) icf_edit_indi_pane_g

0xf537,	// (0x0002e53a) icf_edit_indi_pane_t1

0xf4ce,	// (0x0002e4d1) bg_input_focus_pane_cp042

0x1967,	// (0x0002096a) vtchi_button_pane

0xf4d7,	// (0x0002e4da) vtchi_query_pane_t1

0xf4e5,	// (0x0002e4e8) vtchi_query_pane_t2

0xf4f3,	// (0x0002e4f6) vtchi_query_pane_t3

0x0002,

0xfef9,	// (0x0002eefc) vtchi_query_pane_t

0x15e9,	// (0x000205ec) bg_button_pane_cp13

0xf501,	// (0x0002e504) vtchi_button_pane_g1

0x9cd6,	// (0x00028cd9) ituss_sks_pane_g1

0x9ce1,	// (0x00028ce4) ituss_sks_pane_g2

0x0001,

0xff00,	// (0x0002ef03) ituss_sks_pane_g

0xf509,	// (0x0002e50c) ituss_sks_pane_t1

0xf517,	// (0x0002e51a) ituss_sks_pane_t2

0x0001,

0xff05,	// (0x0002ef08) ituss_sks_pane_t

0xbcf8,	// (0x0002acfb) indicator_nsta_pane_cp_g1

0xbd00,	// (0x0002ad03) indicator_nsta_pane_cp_g2

0xbd08,	// (0x0002ad0b) indicator_nsta_pane_cp_g3

0xbcf8,	// (0x0002acfb) indicator_nsta_pane_cp_g4

0xbd00,	// (0x0002ad03) indicator_nsta_pane_cp_g5

0xbd08,	// (0x0002ad0b) indicator_nsta_pane_cp_g6

0x0005,

0xfab5,	// (0x0002eab8) indicator_nsta_pane_cp_g

0xe463,	// (0x0002d466) cell_graphic2_pane_t2_ParamLimits

0xe463,	// (0x0002d466) cell_graphic2_pane_t2

0x0001,

0xfdbb,	// (0x0002edbe) cell_graphic2_pane_t_ParamLimits

0xfdbb,	// (0x0002edbe) cell_graphic2_pane_t

0xe490,	// (0x0002d493) cell_graphic2_control_pane_t1

0x7365,	// (0x00026368) signal_pane_g3_ParamLimits

0x7365,	// (0x00026368) signal_pane_g3

0x7377,	// (0x0002637a) signal_pane_g4_ParamLimits

0x7377,	// (0x0002637a) signal_pane_g4

0xf2ff,	// (0x0002e302) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf2ff,	// (0x0002e302) cell_ai5_widget_list_row_pane_t3

0xf41a,	// (0x0002e41d) cell_ituss_key_pane_t1_ParamLimits

0xf41a,	// (0x0002e41d) cell_ituss_key_pane_t1

0x9da3,	// (0x00028da6) form_field_data_wide_pane_vc_t2_ParamLimits

0x9da3,	// (0x00028da6) form_field_data_wide_pane_vc_t2

0x9db7,	// (0x00028dba) form_field_data_wide_pane_vc_t3_ParamLimits

0x9db7,	// (0x00028dba) form_field_data_wide_pane_vc_t3

0x0002,

0xf7fa,	// (0x0002e7fd) form_field_data_wide_pane_vc_t_ParamLimits

0xf7fa,	// (0x0002e7fd) form_field_data_wide_pane_vc_t

0xb9bf,	// (0x0002a9c2) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb9bf,	// (0x0002a9c2) form_field_slider_wide_pane_vc_t3

0xba9d,	// (0x0002aaa0) form_field_popup_wide_pane_vc_t2_ParamLimits

0xba9d,	// (0x0002aaa0) form_field_popup_wide_pane_vc_t2

0xbab4,	// (0x0002aab7) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbab4,	// (0x0002aab7) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa4,	// (0x0002eaa7) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa4,	// (0x0002eaa7) form_field_popup_wide_pane_vc_t

0x99c7,	// (0x000289ca) aid_fshwr2_btn_pane_ParamLimits

0x99d3,	// (0x000289d6) aid_fshwr2_syb_pane_ParamLimits

0x99e4,	// (0x000289e7) aid_fshwr2_txt_pane_ParamLimits

0x1a83,	// (0x00020a86) fshwr2_bg_pane_ParamLimits

0x99f0,	// (0x000289f3) fshwr2_func_candi_pane_ParamLimits

0x9a08,	// (0x00028a0b) fshwr2_hwr_syb_pane_ParamLimits

0x9a1f,	// (0x00028a22) fshwr2_icf_pane_ParamLimits

0x6099,	// (0x0002509c) list_double_graphic_pane_vc_g4_ParamLimits

0x6099,	// (0x0002509c) list_double_graphic_pane_vc_g4

0x9c1c,	// (0x00028c1f) cell_ituss_key_pane_g3_ParamLimits

0x9c1c,	// (0x00028c1f) cell_ituss_key_pane_g3

0x9cc4,	// (0x00028cc7) cell_ituss_key_t5_ParamLimits

0x9cc4,	// (0x00028cc7) cell_ituss_key_t5

0xf35e,	// (0x0002e361) popup_fep_vkbss_window_ParamLimits

0xce4a,	// (0x0002be4d) aid_cell_ai5_quarter

0xf537,	// (0x0002e53a) icf_edit_indi_pane_t1_ParamLimits

0x6b37,	// (0x00025b3a) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x6b37,	// (0x00025b3a) aid_tch_indicator_popup_pane_cp2

0x6b4a,	// (0x00025b4d) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x6b4a,	// (0x00025b4d) aid_tch_query_popup_data_pane_cp2

0xa110,	// (0x00029113) aid_tch_query_popup_pane_ParamLimits

0xa110,	// (0x00029113) aid_tch_query_popup_pane

0xa110,	// (0x00029113) aid_tch_query_popup_data_pane_cp1_ParamLimits

0xa110,	// (0x00029113) aid_tch_query_popup_data_pane_cp1
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small
