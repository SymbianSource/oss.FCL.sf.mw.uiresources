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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0001f00a };

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
0x654b,	// (0x00025555) Screen

0x6557,	// (0x00025561) application_window_ParamLimits

0x6557,	// (0x00025561) application_window

0x15c0,	// (0x000205ca) screen_g1

0x65b3,	// (0x000255bd) area_bottom_pane_ParamLimits

0x65b3,	// (0x000255bd) area_bottom_pane

0x6673,	// (0x0002567d) area_top_pane_ParamLimits

0x6673,	// (0x0002567d) area_top_pane

0x6707,	// (0x00025711) main_pane_ParamLimits

0x6707,	// (0x00025711) main_pane

0x15ca,	// (0x000205d4) misc_graphics

0x84d7,	// (0x000274e1) battery_pane_ParamLimits

0x84d7,	// (0x000274e1) battery_pane

0xa53c,	// (0x00029546) bg_status_flat_pane_g8

0xa544,	// (0x0002954e) bg_status_flat_pane_g9

0x859f,	// (0x000275a9) context_pane_ParamLimits

0x859f,	// (0x000275a9) context_pane

0x86b5,	// (0x000276bf) navi_pane_ParamLimits

0x86b5,	// (0x000276bf) navi_pane

0x8739,	// (0x00027743) signal_pane_ParamLimits

0x8739,	// (0x00027743) signal_pane

0x0008,

0xf874,	// (0x0002e87e) bg_status_flat_pane_g

0x87a6,	// (0x000277b0) status_pane_g1_ParamLimits

0x87a6,	// (0x000277b0) status_pane_g1

0x87ba,	// (0x000277c4) status_pane_g2_ParamLimits

0x87ba,	// (0x000277c4) status_pane_g2

0x87c6,	// (0x000277d0) status_pane_g3_ParamLimits

0x87c6,	// (0x000277d0) status_pane_g3

0x0004,

0xf7a0,	// (0x0002e7aa) status_pane_g_ParamLimits

0xf7a0,	// (0x0002e7aa) status_pane_g

0x87fa,	// (0x00027804) title_pane_ParamLimits

0x87fa,	// (0x00027804) title_pane

0x8837,	// (0x00027841) uni_indicator_pane_ParamLimits

0x8837,	// (0x00027841) uni_indicator_pane

0x7e58,	// (0x00026e62) bg_list_pane_ParamLimits

0x7e58,	// (0x00026e62) bg_list_pane

0x5ba4,	// (0x00024bae) find_pane

0x7e78,	// (0x00026e82) listscroll_app_pane_ParamLimits

0x7e78,	// (0x00026e82) listscroll_app_pane

0x7e84,	// (0x00026e8e) listscroll_form_pane

0x5bac,	// (0x00024bb6) listscroll_gen_pane_ParamLimits

0x5bac,	// (0x00024bb6) listscroll_gen_pane

0x7e8c,	// (0x00026e96) listscroll_set_pane

0x6fb8,	// (0x00025fc2) main_idle_act_pane

0x7957,	// (0x00026961) main_idle_trad_pane

0x7957,	// (0x00026961) main_list_empty_pane

0x7ea6,	// (0x00026eb0) main_midp_pane

0x7eb2,	// (0x00026ebc) main_pane_g1_ParamLimits

0x7eb2,	// (0x00026ebc) main_pane_g1

0x7ec0,	// (0x00026eca) popup_ai_message_window_ParamLimits

0x7ec0,	// (0x00026eca) popup_ai_message_window

0x7f64,	// (0x00026f6e) popup_fep_china_uni_window_ParamLimits

0x7f64,	// (0x00026f6e) popup_fep_china_uni_window

0x7fbe,	// (0x00026fc8) popup_fep_japan_candidate_window_ParamLimits

0x7fbe,	// (0x00026fc8) popup_fep_japan_candidate_window

0x7fdc,	// (0x00026fe6) popup_fep_japan_predictive_window_ParamLimits

0x7fdc,	// (0x00026fe6) popup_fep_japan_predictive_window

0x800c,	// (0x00027016) popup_find_window

0x8019,	// (0x00027023) popup_grid_graphic_window_ParamLimits

0x8019,	// (0x00027023) popup_grid_graphic_window

0x8043,	// (0x0002704d) popup_large_graphic_colour_window

0x8069,	// (0x00027073) popup_menu_window_ParamLimits

0x8069,	// (0x00027073) popup_menu_window

0x8225,	// (0x0002722f) popup_note_image_window

0x8211,	// (0x0002721b) popup_note_wait_window_ParamLimits

0x8211,	// (0x0002721b) popup_note_wait_window

0x8211,	// (0x0002721b) popup_note_window_ParamLimits

0x8211,	// (0x0002721b) popup_note_window

0x827b,	// (0x00027285) popup_query_code_window_ParamLimits

0x827b,	// (0x00027285) popup_query_code_window

0x828f,	// (0x00027299) popup_query_data_code_window_ParamLimits

0x828f,	// (0x00027299) popup_query_data_code_window

0x82ac,	// (0x000272b6) popup_query_data_window_ParamLimits

0x82ac,	// (0x000272b6) popup_query_data_window

0x82c8,	// (0x000272d2) popup_query_sat_info_window_ParamLimits

0x82c8,	// (0x000272d2) popup_query_sat_info_window

0x8301,	// (0x0002730b) popup_snote_single_graphic_window_ParamLimits

0x8301,	// (0x0002730b) popup_snote_single_graphic_window

0x8301,	// (0x0002730b) popup_snote_single_text_window_ParamLimits

0x8301,	// (0x0002730b) popup_snote_single_text_window

0x8316,	// (0x00027320) popup_sub_window_general

0x8446,	// (0x00027450) popup_window_general_ParamLimits

0x8446,	// (0x00027450) popup_window_general

0x845b,	// (0x00027465) power_save_pane

0x7cb7,	// (0x00026cc1) control_pane_g1_ParamLimits

0x7cb7,	// (0x00026cc1) control_pane_g1

0x7cde,	// (0x00026ce8) control_pane_g2_ParamLimits

0x7cde,	// (0x00026ce8) control_pane_g2

0x7d05,	// (0x00026d0f) control_pane_g3_ParamLimits

0x7d05,	// (0x00026d0f) control_pane_g3

0x0007,

0xf788,	// (0x0002e792) control_pane_g_ParamLimits

0xf788,	// (0x0002e792) control_pane_g

0x7d5d,	// (0x00026d67) control_pane_t1_ParamLimits

0x7d5d,	// (0x00026d67) control_pane_t1

0x7da9,	// (0x00026db3) control_pane_t2_ParamLimits

0x7da9,	// (0x00026db3) control_pane_t2

0x0002,

0xf799,	// (0x0002e7a3) control_pane_t_ParamLimits

0xf799,	// (0x0002e7a3) control_pane_t

0x7bdc,	// (0x00026be6) navi_navi_volume_pane_cp1

0x7be4,	// (0x00026bee) status_small_icon_pane

0x7bec,	// (0x00026bf6) status_small_pane_g1_ParamLimits

0x7bec,	// (0x00026bf6) status_small_pane_g1

0x7c20,	// (0x00026c2a) status_small_pane_g2_ParamLimits

0x7c20,	// (0x00026c2a) status_small_pane_g2

0x7c2c,	// (0x00026c36) status_small_pane_g3_ParamLimits

0x7c2c,	// (0x00026c36) status_small_pane_g3

0x7c38,	// (0x00026c42) status_small_pane_g4_ParamLimits

0x7c38,	// (0x00026c42) status_small_pane_g4

0x7c44,	// (0x00026c4e) status_small_pane_g5_ParamLimits

0x7c44,	// (0x00026c4e) status_small_pane_g5

0x7c52,	// (0x00026c5c) status_small_pane_g6_ParamLimits

0x7c52,	// (0x00026c5c) status_small_pane_g6

0x0007,

0xf777,	// (0x0002e781) status_small_pane_g_ParamLimits

0xf777,	// (0x0002e781) status_small_pane_g

0x7c81,	// (0x00026c8b) status_small_pane_t1

0x7ca3,	// (0x00026cad) status_small_wait_pane_ParamLimits

0x7ca3,	// (0x00026cad) status_small_wait_pane

0x738d,	// (0x00026397) aid_levels_signal_ParamLimits

0x738d,	// (0x00026397) aid_levels_signal

0x739f,	// (0x000263a9) signal_pane_g1_ParamLimits

0x739f,	// (0x000263a9) signal_pane_g1

0x73b4,	// (0x000263be) signal_pane_g2_ParamLimits

0x73b4,	// (0x000263be) signal_pane_g2

0x0003,

0xf708,	// (0x0002e712) signal_pane_g_ParamLimits

0xf708,	// (0x0002e712) signal_pane_g

0x39a6,	// (0x000229b0) context_pane_g1

0x6948,	// (0x00025952) title_pane_g1

0x6972,	// (0x0002597c) title_pane_t1

0x15e0,	// (0x000205ea) title_pane_t2

0x1606,	// (0x00020610) title_pane_t3

0x0002,

0xf557,	// (0x0002e561) title_pane_t

0x884f,	// (0x00027859) aid_levels_battery_ParamLimits

0x884f,	// (0x00027859) aid_levels_battery

0x8863,	// (0x0002786d) battery_pane_g1_ParamLimits

0x8863,	// (0x0002786d) battery_pane_g1

0x8879,	// (0x00027883) battery_pane_g2_ParamLimits

0x8879,	// (0x00027883) battery_pane_g2

0x0001,

0xf7ab,	// (0x0002e7b5) battery_pane_g_ParamLimits

0xf7ab,	// (0x0002e7b5) battery_pane_g

0xae60,	// (0x00029e6a) uni_indicator_pane_g1

0xae76,	// (0x00029e80) uni_indicator_pane_g2

0xae8c,	// (0x00029e96) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0002e926) uni_indicator_pane_g

0x77c9,	// (0x000267d3) navi_icon_pane_ParamLimits

0x77c9,	// (0x000267d3) navi_icon_pane

0x7713,	// (0x0002671d) navi_midp_pane

0x77e5,	// (0x000267ef) navi_navi_pane

0x77ef,	// (0x000267f9) navi_text_pane_ParamLimits

0x77ef,	// (0x000267f9) navi_text_pane

0x15c0,	// (0x000205ca) status_small_wait_pane_g1

0x1871,	// (0x0002087b) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0002e921) status_small_wait_pane_g

0xab87,	// (0x00029b91) navi_navi_icon_text_pane

0xab8f,	// (0x00029b99) navi_navi_pane_g1_ParamLimits

0xab8f,	// (0x00029b99) navi_navi_pane_g1

0xaba1,	// (0x00029bab) navi_navi_pane_g2_ParamLimits

0xaba1,	// (0x00029bab) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0002e8ef) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0002e8ef) navi_navi_pane_g

0xabb3,	// (0x00029bbd) navi_navi_tabs_pane

0xabbc,	// (0x00029bc6) navi_navi_text_pane

0xab87,	// (0x00029b91) navi_navi_volume_pane

0xab63,	// (0x00029b6d) navi_text_pane_t1

0xab57,	// (0x00029b61) navi_icon_pane_g1

0xaaaa,	// (0x00029ab4) navi_navi_text_pane_t1

0x8c1f,	// (0x00027c29) navi_navi_volume_pane_g1

0x8c27,	// (0x00027c31) volume_small_pane

0xaa10,	// (0x00029a1a) navi_navi_icon_text_pane_g1

0xaa18,	// (0x00029a22) navi_navi_icon_text_pane_t1

0x77e5,	// (0x000267ef) navi_tabs_2_long_pane

0x77e5,	// (0x000267ef) navi_tabs_2_pane

0x77e5,	// (0x000267ef) navi_tabs_3_long_pane

0x77e5,	// (0x000267ef) navi_tabs_3_pane

0x77e5,	// (0x000267ef) navi_tabs_4_pane

0x8bff,	// (0x00027c09) tabs_2_active_pane_ParamLimits

0x8bff,	// (0x00027c09) tabs_2_active_pane

0x8c0f,	// (0x00027c19) tabs_2_passive_pane_ParamLimits

0x8c0f,	// (0x00027c19) tabs_2_passive_pane

0x8bcd,	// (0x00027bd7) tabs_3_active_pane_ParamLimits

0x8bcd,	// (0x00027bd7) tabs_3_active_pane

0x8bdd,	// (0x00027be7) tabs_3_passive_pane_ParamLimits

0x8bdd,	// (0x00027be7) tabs_3_passive_pane

0x8bee,	// (0x00027bf8) tabs_3_passive_pane_cp_ParamLimits

0x8bee,	// (0x00027bf8) tabs_3_passive_pane_cp

0x8b89,	// (0x00027b93) tabs_4_active_pane_ParamLimits

0x8b89,	// (0x00027b93) tabs_4_active_pane

0x8b9a,	// (0x00027ba4) tabs_4_passive_pane_ParamLimits

0x8b9a,	// (0x00027ba4) tabs_4_passive_pane

0x8bab,	// (0x00027bb5) tabs_4_passive_pane_cp_ParamLimits

0x8bab,	// (0x00027bb5) tabs_4_passive_pane_cp

0x8bbc,	// (0x00027bc6) tabs_4_passive_pane_cp2_ParamLimits

0x8bbc,	// (0x00027bc6) tabs_4_passive_pane_cp2

0x8b65,	// (0x00027b6f) tabs_2_long_active_pane_ParamLimits

0x8b65,	// (0x00027b6f) tabs_2_long_active_pane

0x8b77,	// (0x00027b81) tabs_2_long_passive_pane_ParamLimits

0x8b77,	// (0x00027b81) tabs_2_long_passive_pane

0x8b20,	// (0x00027b2a) tabs_3_long_active_pane_ParamLimits

0x8b20,	// (0x00027b2a) tabs_3_long_active_pane

0x8b39,	// (0x00027b43) tabs_3_long_passive_pane_ParamLimits

0x8b39,	// (0x00027b43) tabs_3_long_passive_pane

0x8b4c,	// (0x00027b56) tabs_3_long_passive_pane_cp_ParamLimits

0x8b4c,	// (0x00027b56) tabs_3_long_passive_pane_cp

0x8ac6,	// (0x00027ad0) volume_small_pane_g1

0x8acf,	// (0x00027ad9) volume_small_pane_g2

0x8ad8,	// (0x00027ae2) volume_small_pane_g3

0x8ae1,	// (0x00027aeb) volume_small_pane_g4

0x8aea,	// (0x00027af4) volume_small_pane_g5

0x8af3,	// (0x00027afd) volume_small_pane_g6

0x8afc,	// (0x00027b06) volume_small_pane_g7

0x8b05,	// (0x00027b0f) volume_small_pane_g8

0x8b0e,	// (0x00027b18) volume_small_pane_g9

0x8b17,	// (0x00027b21) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0002e8bb) volume_small_pane_g

0x1626,	// (0x00020630) bg_active_tab_pane_cp2_ParamLimits

0x1626,	// (0x00020630) bg_active_tab_pane_cp2

0x69da,	// (0x000259e4) tabs_3_active_pane_g1

0x69e2,	// (0x000259ec) tabs_3_active_pane_t1

0x1626,	// (0x00020630) bg_passive_tab_pane_cp2_ParamLimits

0x1626,	// (0x00020630) bg_passive_tab_pane_cp2

0x69da,	// (0x000259e4) tabs_3_passive_pane_g1

0x69e2,	// (0x000259ec) tabs_3_passive_pane_t1

0x1626,	// (0x00020630) bg_active_tab_pane_cp3_ParamLimits

0x1626,	// (0x00020630) bg_active_tab_pane_cp3

0x69f4,	// (0x000259fe) tabs_4_active_pane_g1

0x69fc,	// (0x00025a06) tabs_4_active_pane_t1

0x1626,	// (0x00020630) bg_passive_tab_pane_cp3_ParamLimits

0x1626,	// (0x00020630) bg_passive_tab_pane_cp3

0x69f4,	// (0x000259fe) tabs_4_1_passive_pane_g1

0x69fc,	// (0x00025a06) tabs_4_1_passive_pane_t1

0x7ea6,	// (0x00026eb0) list_highlight_pane_cp2

0xb0d5,	// (0x0002a0df) list_set_pane_ParamLimits

0xb0d5,	// (0x0002a0df) list_set_pane

0xb17b,	// (0x0002a185) main_pane_set_t1_ParamLimits

0xb17b,	// (0x0002a185) main_pane_set_t1

0xb19b,	// (0x0002a1a5) main_pane_set_t2_ParamLimits

0xb19b,	// (0x0002a1a5) main_pane_set_t2

0xb1af,	// (0x0002a1b9) main_pane_set_t3_ParamLimits

0xb1af,	// (0x0002a1b9) main_pane_set_t3

0xb1c1,	// (0x0002a1cb) main_pane_set_t4_ParamLimits

0xb1c1,	// (0x0002a1cb) main_pane_set_t4

0x0003,

0xf981,	// (0x0002e98b) main_pane_set_t_ParamLimits

0xf981,	// (0x0002e98b) main_pane_set_t

0xb1d3,	// (0x0002a1dd) setting_code_pane

0xb1df,	// (0x0002a1e9) setting_slider_graphic_pane

0xb1df,	// (0x0002a1e9) setting_slider_pane

0xb1df,	// (0x0002a1e9) setting_text_pane

0xb1df,	// (0x0002a1e9) setting_volume_pane

0x6a0e,	// (0x00025a18) volume_set_pane

0x1626,	// (0x00020630) bg_set_opt_pane_cp

0x6a16,	// (0x00025a20) setting_slider_pane_t1

0x6a2f,	// (0x00025a39) setting_slider_pane_t2

0x6a49,	// (0x00025a53) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0002e568) setting_slider_pane_t

0x6a61,	// (0x00025a6b) slider_set_pane

0x15ca,	// (0x000205d4) bg_set_opt_pane_cp2

0x1634,	// (0x0002063e) setting_slider_graphic_pane_g1

0x6a77,	// (0x00025a81) setting_slider_graphic_pane_t1

0x6a87,	// (0x00025a91) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0002e56f) setting_slider_graphic_pane_t

0x6a97,	// (0x00025aa1) slider_set_pane_cp

0x15ca,	// (0x000205d4) input_focus_pane_cp1

0xb094,	// (0x0002a09e) list_set_text_pane

0x15c0,	// (0x000205ca) setting_text_pane_g1

0x15ca,	// (0x000205d4) input_focus_pane_cp2

0x15c0,	// (0x000205ca) setting_code_pane_g1

0x163d,	// (0x00020647) setting_code_pane_t1

0x53da,	// (0x000243e4) set_text_pane_t1_ParamLimits

0x53da,	// (0x000243e4) set_text_pane_t1

0x1afa,	// (0x00020b04) set_opt_bg_pane_g1

0x1b02,	// (0x00020b0c) set_opt_bg_pane_g2

0xb06e,	// (0x0002a078) set_opt_bg_pane_g3

0x1b12,	// (0x00020b1c) set_opt_bg_pane_g4

0x1b1a,	// (0x00020b24) set_opt_bg_pane_g5

0x1b22,	// (0x00020b2c) set_opt_bg_pane_g6

0xb078,	// (0x0002a082) set_opt_bg_pane_g7

0xb080,	// (0x0002a08a) set_opt_bg_pane_g8

0xb08a,	// (0x0002a094) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0002e978) set_opt_bg_pane_g

0xb061,	// (0x0002a06b) slider_set_pane_g1

0x8c94,	// (0x00027c9e) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0002e969) slider_set_pane_g

0x8c30,	// (0x00027c3a) volume_set_pane_g1

0x8c38,	// (0x00027c42) volume_set_pane_g2

0x8c40,	// (0x00027c4a) volume_set_pane_g3

0x8c48,	// (0x00027c52) volume_set_pane_g4

0x8c50,	// (0x00027c5a) volume_set_pane_g5

0x8c58,	// (0x00027c62) volume_set_pane_g6

0x8c60,	// (0x00027c6a) volume_set_pane_g7

0x8c68,	// (0x00027c72) volume_set_pane_g8

0x8c70,	// (0x00027c7a) volume_set_pane_g9

0x8c78,	// (0x00027c82) volume_set_pane_g10

0x0009,

0xf937,	// (0x0002e941) volume_set_pane_g

0x6a9f,	// (0x00025aa9) indicator_pane_ParamLimits

0x6a9f,	// (0x00025aa9) indicator_pane

0x6aab,	// (0x00025ab5) main_idle_pane_g2_ParamLimits

0x6aab,	// (0x00025ab5) main_idle_pane_g2

0x6ad3,	// (0x00025add) main_pane_idle_g1_ParamLimits

0x6ad3,	// (0x00025add) main_pane_idle_g1

0x1665,	// (0x0002066f) popup_clock_digital_analogue_window_ParamLimits

0x1665,	// (0x0002066f) popup_clock_digital_analogue_window

0x6ae0,	// (0x00025aea) soft_indicator_pane_ParamLimits

0x6ae0,	// (0x00025aea) soft_indicator_pane

0x6aec,	// (0x00025af6) wallpaper_pane_ParamLimits

0x6aec,	// (0x00025af6) wallpaper_pane

0x15c0,	// (0x000205ca) wallpaper_pane_g1

0x6af8,	// (0x00025b02) indicator_pane_g1_ParamLimits

0x6af8,	// (0x00025b02) indicator_pane_g1

0xb49c,	// (0x0002a4a6) navi_navi_icon_text_pane_srt_g1

0x1693,	// (0x0002069d) soft_indicator_pane_t1

0x16ad,	// (0x000206b7) aid_ps_area_pane

0x6b04,	// (0x00025b0e) aid_ps_clock_pane

0x16be,	// (0x000206c8) aid_ps_indicator_pane

0x16ca,	// (0x000206d4) indicator_ps_pane_ParamLimits

0x16ca,	// (0x000206d4) indicator_ps_pane

0x16d9,	// (0x000206e3) power_save_pane_g1_ParamLimits

0x16d9,	// (0x000206e3) power_save_pane_g1

0x16e5,	// (0x000206ef) power_save_pane_g2_ParamLimits

0x16e5,	// (0x000206ef) power_save_pane_g2

0x6567,	// (0x00025571) aid_navinavi_width_pane

0x16ad,	// (0x000206b7) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0002e574) power_save_pane_g_ParamLimits

0xf56a,	// (0x0002e574) power_save_pane_g

0x16f3,	// (0x000206fd) power_save_pane_t1_ParamLimits

0x16f3,	// (0x000206fd) power_save_pane_t1

0x6b04,	// (0x00025b0e) aid_ps_clock_pane_ParamLimits

0x16be,	// (0x000206c8) aid_ps_indicator_pane_ParamLimits

0x1705,	// (0x0002070f) power_save_pane_t4_ParamLimits

0x1705,	// (0x0002070f) power_save_pane_t4

0x0001,

0xf56f,	// (0x0002e579) power_save_pane_t_ParamLimits

0xf56f,	// (0x0002e579) power_save_pane_t

0x172f,	// (0x00020739) power_save_t3_ParamLimits

0x172f,	// (0x00020739) power_save_t3

0x171a,	// (0x00020724) power_save_t2_ParamLimits

0x171a,	// (0x00020724) power_save_t2

0x1744,	// (0x0002074e) indicator_ps_pane_g1

0x6b12,	// (0x00025b1c) ai_gene_pane_ParamLimits

0x6b12,	// (0x00025b1c) ai_gene_pane

0x6b1e,	// (0x00025b28) ai_links_pane_ParamLimits

0x6b1e,	// (0x00025b28) ai_links_pane

0x6b2a,	// (0x00025b34) indicator_pane_cp1_ParamLimits

0x6b2a,	// (0x00025b34) indicator_pane_cp1

0x6b36,	// (0x00025b40) main_pane_idle_g1_cp_ParamLimits

0x6b36,	// (0x00025b40) main_pane_idle_g1_cp

0x6b42,	// (0x00025b4c) popup_ai_links_title_window

0x6b4b,	// (0x00025b55) soft_indicator_pane_cp1_ParamLimits

0x6b4b,	// (0x00025b55) soft_indicator_pane_cp1

0xae4e,	// (0x00029e58) ai_links_pane_g1

0xae57,	// (0x00029e61) grid_ai_links_pane

0xae31,	// (0x00029e3b) ai_gene_pane_1

0xae3c,	// (0x00029e46) ai_gene_pane_2

0xae45,	// (0x00029e4f) list_highlight_pane_cp4

0xae15,	// (0x00029e1f) cell_ai_link_pane_ParamLimits

0xae15,	// (0x00029e1f) cell_ai_link_pane

0xae0d,	// (0x00029e17) cell_ai_link_pane_g1

0x1871,	// (0x0002087b) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0002e91c) cell_ai_link_pane_g

0x15ca,	// (0x000205d4) grid_highlight_cp2

0x15ca,	// (0x000205d4) bg_popup_sub_pane_cp1

0x175b,	// (0x00020765) popup_ai_links_title_window_t1

0xad5d,	// (0x00029d67) ai_gene_pane_1_g1_ParamLimits

0xad5d,	// (0x00029d67) ai_gene_pane_1_g1

0xad69,	// (0x00029d73) ai_gene_pane_1_g2_ParamLimits

0xad69,	// (0x00029d73) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0002e912) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0002e912) ai_gene_pane_1_g

0xad76,	// (0x00029d80) ai_gene_pane_1_t1_ParamLimits

0xad76,	// (0x00029d80) ai_gene_pane_1_t1

0xadaa,	// (0x00029db4) grid_ai_soft_ind_pane

0xad48,	// (0x00029d52) ai_gene_pane_2_t1_ParamLimits

0xad48,	// (0x00029d52) ai_gene_pane_2_t1

0x6b57,	// (0x00025b61) main_pane_empty_t1_ParamLimits

0x6b57,	// (0x00025b61) main_pane_empty_t1

0x6b6f,	// (0x00025b79) main_pane_empty_t2_ParamLimits

0x6b6f,	// (0x00025b79) main_pane_empty_t2

0x6b84,	// (0x00025b8e) main_pane_empty_t3_ParamLimits

0x6b84,	// (0x00025b8e) main_pane_empty_t3

0x6b96,	// (0x00025ba0) main_pane_empty_t4_ParamLimits

0x6b96,	// (0x00025ba0) main_pane_empty_t4

0x6ba8,	// (0x00025bb2) main_pane_empty_t5_ParamLimits

0x6ba8,	// (0x00025bb2) main_pane_empty_t5

0x0004,

0xf574,	// (0x0002e57e) main_pane_empty_t_ParamLimits

0xf574,	// (0x0002e57e) main_pane_empty_t

0x1b4b,	// (0x00020b55) bg_popup_window_pane_ParamLimits

0x1b4b,	// (0x00020b55) bg_popup_window_pane

0xaab8,	// (0x00029ac2) find_popup_pane_cp2_ParamLimits

0xaab8,	// (0x00029ac2) find_popup_pane_cp2

0xaac4,	// (0x00029ace) heading_pane_ParamLimits

0xaac4,	// (0x00029ace) heading_pane

0x15ca,	// (0x000205d4) bg_popup_sub_pane

0xaa32,	// (0x00029a3c) bg_popup_window_pane_g1_ParamLimits

0xaa32,	// (0x00029a3c) bg_popup_window_pane_g1

0xaa3e,	// (0x00029a48) bg_popup_window_pane_g2_ParamLimits

0xaa3e,	// (0x00029a48) bg_popup_window_pane_g2

0xaa4a,	// (0x00029a54) bg_popup_window_pane_g3_ParamLimits

0xaa4a,	// (0x00029a54) bg_popup_window_pane_g3

0xaa56,	// (0x00029a60) bg_popup_window_pane_g4_ParamLimits

0xaa56,	// (0x00029a60) bg_popup_window_pane_g4

0xaa62,	// (0x00029a6c) bg_popup_window_pane_g5_ParamLimits

0xaa62,	// (0x00029a6c) bg_popup_window_pane_g5

0xaa6e,	// (0x00029a78) bg_popup_window_pane_g6_ParamLimits

0xaa6e,	// (0x00029a78) bg_popup_window_pane_g6

0xaa7a,	// (0x00029a84) bg_popup_window_pane_g7_ParamLimits

0xaa7a,	// (0x00029a84) bg_popup_window_pane_g7

0xaa86,	// (0x00029a90) bg_popup_window_pane_g8_ParamLimits

0xaa86,	// (0x00029a90) bg_popup_window_pane_g8

0xaa92,	// (0x00029a9c) bg_popup_window_pane_g9_ParamLimits

0xaa92,	// (0x00029a9c) bg_popup_window_pane_g9

0xaa9e,	// (0x00029aa8) bg_popup_window_pane_g10_ParamLimits

0xaa9e,	// (0x00029aa8) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0002e8da) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0002e8da) bg_popup_window_pane_g

0xa9c7,	// (0x000299d1) bg_popup_heading_pane_ParamLimits

0xa9c7,	// (0x000299d1) bg_popup_heading_pane

0x8d1c,	// (0x00027d26) tabs_4_passive_pane_cp_srt_ParamLimits

0x8d1c,	// (0x00027d26) tabs_4_passive_pane_cp_srt

0x8d2e,	// (0x00027d38) tabs_4_passive_pane_srt_ParamLimits

0xa9db,	// (0x000299e5) heading_pane_g2

0x8d2e,	// (0x00027d38) tabs_4_passive_pane_srt

0x7ea6,	// (0x00026eb0) bg_passive_tab_pane_cp3_srt_ParamLimits

0x7ea6,	// (0x00026eb0) bg_passive_tab_pane_cp3_srt

0xa9e3,	// (0x000299ed) heading_pane_t1_ParamLimits

0xa9e3,	// (0x000299ed) heading_pane_t1

0xa9fa,	// (0x00029a04) heading_pane_t2_ParamLimits

0xa9fa,	// (0x00029a04) heading_pane_t2

0x0001,

0xf8cb,	// (0x0002e8d5) heading_pane_t_ParamLimits

0xf8cb,	// (0x0002e8d5) heading_pane_t

0xa504,	// (0x0002950e) bg_popup_heading_pane_g1

0xa5b3,	// (0x000295bd) bg_popup_heading_pane_g2

0xa5bd,	// (0x000295c7) bg_popup_heading_pane_g3

0xa5c7,	// (0x000295d1) bg_popup_heading_pane_g4

0xa5d1,	// (0x000295db) bg_popup_heading_pane_g5

0xa5db,	// (0x000295e5) bg_popup_heading_pane_g6

0xa5e3,	// (0x000295ed) bg_popup_heading_pane_g7

0xa5eb,	// (0x000295f5) bg_popup_heading_pane_g8

0xa5f5,	// (0x000295ff) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0002e891) bg_popup_heading_pane_g

0x897e,	// (0x00027988) bg_popup_sub_pane_g1

0x8986,	// (0x00027990) bg_popup_sub_pane_g2

0x898e,	// (0x00027998) bg_popup_sub_pane_g3

0x8996,	// (0x000279a0) bg_popup_sub_pane_g4

0x899e,	// (0x000279a8) bg_popup_sub_pane_g5

0x89a6,	// (0x000279b0) bg_popup_sub_pane_g6

0x89ae,	// (0x000279b8) bg_popup_sub_pane_g7

0x89b6,	// (0x000279c0) bg_popup_sub_pane_g8

0x89be,	// (0x000279c8) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0002e86b) bg_popup_sub_pane_g

0x1618,	// (0x00020622) bg_popup_window_pane_cp5_ParamLimits

0x1618,	// (0x00020622) bg_popup_window_pane_cp5

0x1778,	// (0x00020782) popup_note_window_g1_ParamLimits

0x1778,	// (0x00020782) popup_note_window_g1

0x1784,	// (0x0002078e) popup_note_window_t1_ParamLimits

0x1784,	// (0x0002078e) popup_note_window_t1

0x179a,	// (0x000207a4) popup_note_window_t2_ParamLimits

0x179a,	// (0x000207a4) popup_note_window_t2

0x17b0,	// (0x000207ba) popup_note_window_t3_ParamLimits

0x17b0,	// (0x000207ba) popup_note_window_t3

0x17c6,	// (0x000207d0) popup_note_window_t4_ParamLimits

0x17c6,	// (0x000207d0) popup_note_window_t4

0x17ee,	// (0x000207f8) popup_note_window_t5_ParamLimits

0x17ee,	// (0x000207f8) popup_note_window_t5

0x0004,

0xf57f,	// (0x0002e589) popup_note_window_t_ParamLimits

0xf57f,	// (0x0002e589) popup_note_window_t

0x1812,	// (0x0002081c) bg_popup_window_pane_cp6_ParamLimits

0x1812,	// (0x0002081c) bg_popup_window_pane_cp6

0xa480,	// (0x0002948a) popup_note_image_window_g1_ParamLimits

0xa480,	// (0x0002948a) popup_note_image_window_g1

0xa48c,	// (0x00029496) popup_note_image_window_g2_ParamLimits

0xa48c,	// (0x00029496) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0002e85f) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0002e85f) popup_note_image_window_g

0xa4a5,	// (0x000294af) popup_note_image_window_t1_ParamLimits

0xa4a5,	// (0x000294af) popup_note_image_window_t1

0xa4be,	// (0x000294c8) popup_note_image_window_t2_ParamLimits

0xa4be,	// (0x000294c8) popup_note_image_window_t2

0xa4d7,	// (0x000294e1) popup_note_image_window_t3_ParamLimits

0xa4d7,	// (0x000294e1) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0002e864) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0002e864) popup_note_image_window_t

0xa349,	// (0x00029353) bg_popup_window_pane_cp7_ParamLimits

0xa349,	// (0x00029353) bg_popup_window_pane_cp7

0xa379,	// (0x00029383) popup_note_wait_window_g1_ParamLimits

0xa379,	// (0x00029383) popup_note_wait_window_g1

0xa385,	// (0x0002938f) popup_note_wait_window_g2_ParamLimits

0xa385,	// (0x0002938f) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0002e84d) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0002e84d) popup_note_wait_window_g

0xa39d,	// (0x000293a7) popup_note_wait_window_t1_ParamLimits

0xa39d,	// (0x000293a7) popup_note_wait_window_t1

0xa3c4,	// (0x000293ce) popup_note_wait_window_t2_ParamLimits

0xa3c4,	// (0x000293ce) popup_note_wait_window_t2

0xa3e1,	// (0x000293eb) popup_note_wait_window_t3_ParamLimits

0xa3e1,	// (0x000293eb) popup_note_wait_window_t3

0xa3f4,	// (0x000293fe) popup_note_wait_window_t4_ParamLimits

0xa3f4,	// (0x000293fe) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0002e854) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0002e854) popup_note_wait_window_t

0xa419,	// (0x00029423) wait_bar_pane_ParamLimits

0xa419,	// (0x00029423) wait_bar_pane

0x15ca,	// (0x000205d4) wait_anim_pane

0x15ca,	// (0x000205d4) wait_border_pane

0x15c0,	// (0x000205ca) wait_anim_pane_g1

0x15c0,	// (0x000205ca) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0002e70d) wait_anim_pane_g

0xa2f5,	// (0x000292ff) wait_border_pane_g1

0xa300,	// (0x0002930a) wait_border_pane_g2

0xa309,	// (0x00029313) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0002e846) wait_border_pane_g

0xa160,	// (0x0002916a) bg_popup_window_pane_cp16_ParamLimits

0xa160,	// (0x0002916a) bg_popup_window_pane_cp16

0xa260,	// (0x0002926a) indicator_popup_pane_cp4_ParamLimits

0xa260,	// (0x0002926a) indicator_popup_pane_cp4

0xa274,	// (0x0002927e) popup_query_data_window_t1_ParamLimits

0xa274,	// (0x0002927e) popup_query_data_window_t1

0xa286,	// (0x00029290) popup_query_data_window_t2_ParamLimits

0xa286,	// (0x00029290) popup_query_data_window_t2

0xa29f,	// (0x000292a9) popup_query_data_window_t3_ParamLimits

0xa29f,	// (0x000292a9) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0002e83f) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0002e83f) popup_query_data_window_t

0xa2b9,	// (0x000292c3) query_popup_data_pane_ParamLimits

0xa2b9,	// (0x000292c3) query_popup_data_pane

0xa2cd,	// (0x000292d7) query_popup_data_pane_cp1_ParamLimits

0xa2cd,	// (0x000292d7) query_popup_data_pane_cp1

0xa160,	// (0x0002916a) bg_popup_window_pane_cp10_ParamLimits

0xa160,	// (0x0002916a) bg_popup_window_pane_cp10

0xa192,	// (0x0002919c) indicator_popup_pane_ParamLimits

0xa192,	// (0x0002919c) indicator_popup_pane

0xa1b4,	// (0x000291be) popup_query_code_window_t1_ParamLimits

0xa1b4,	// (0x000291be) popup_query_code_window_t1

0xa1ce,	// (0x000291d8) popup_query_code_window_t2_ParamLimits

0xa1ce,	// (0x000291d8) popup_query_code_window_t2

0xa217,	// (0x00029221) popup_query_code_window_t3_ParamLimits

0xa217,	// (0x00029221) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0002e838) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0002e838) popup_query_code_window_t

0xa246,	// (0x00029250) query_popup_pane_ParamLimits

0xa246,	// (0x00029250) query_popup_pane

0x1812,	// (0x0002081c) bg_popup_window_pane_cp15_ParamLimits

0x1812,	// (0x0002081c) bg_popup_window_pane_cp15

0x6bbc,	// (0x00025bc6) indicator_popup_pane_cp1_ParamLimits

0x6bbc,	// (0x00025bc6) indicator_popup_pane_cp1

0x6bcf,	// (0x00025bd9) indicator_popup_pane_cp2_ParamLimits

0x6bcf,	// (0x00025bd9) indicator_popup_pane_cp2

0x6be2,	// (0x00025bec) popup_query_data_code_window_g1_ParamLimits

0x6be2,	// (0x00025bec) popup_query_data_code_window_g1

0x1830,	// (0x0002083a) popup_query_data_code_window_t1_ParamLimits

0x1830,	// (0x0002083a) popup_query_data_code_window_t1

0x1842,	// (0x0002084c) popup_query_data_code_window_t2_ParamLimits

0x1842,	// (0x0002084c) popup_query_data_code_window_t2

0x6bf5,	// (0x00025bff) popup_query_data_code_window_t3_ParamLimits

0x6bf5,	// (0x00025bff) popup_query_data_code_window_t3

0x6c0b,	// (0x00025c15) popup_query_data_code_window_t4_ParamLimits

0x6c0b,	// (0x00025c15) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0002e594) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0002e594) popup_query_data_code_window_t

0x7787,	// (0x00026791) list_single_midp_graphic_pane_g3

0x6c23,	// (0x00025c2d) query_popup_data_pane_cp2_ParamLimits

0x6c36,	// (0x00025c40) query_popup_pane_cp2_ParamLimits

0x6c36,	// (0x00025c40) query_popup_pane_cp2

0x15ca,	// (0x000205d4) bg_popup_window_pane_cp11

0xa158,	// (0x00029162) heading_pane_cp5

0x189e,	// (0x000208a8) listscroll_popup_info_pane

0x15ca,	// (0x000205d4) input_focus_pane_cp3

0x1854,	// (0x0002085e) query_popup_pane_t1

0x1862,	// (0x0002086c) list_popup_info_pane_ParamLimits

0x1862,	// (0x0002086c) list_popup_info_pane

0x1871,	// (0x0002087b) listscroll_popup_info_pane_g1

0x1879,	// (0x00020883) scroll_pane_cp7

0x6c49,	// (0x00025c53) popup_info_list_pane_t1_ParamLimits

0x6c49,	// (0x00025c53) popup_info_list_pane_t1

0x6c63,	// (0x00025c6d) popup_info_list_pane_t2_ParamLimits

0x6c63,	// (0x00025c6d) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0002e59d) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0002e59d) popup_info_list_pane_t

0x15ca,	// (0x000205d4) bg_popup_window_pane_cp12

0xb4b6,	// (0x0002a4c0) find_popup_pane

0x1626,	// (0x00020630) bg_popup_window_pane_cp3

0x1883,	// (0x0002088d) heading_pane_cp3

0x188f,	// (0x00020899) listscroll_popup_graphic_pane

0x15ca,	// (0x000205d4) bg_popup_window_pane_cp4

0x6ccd,	// (0x00025cd7) heading_pane_cp4

0x189e,	// (0x000208a8) listscroll_popup_colour_pane

0x6cd7,	// (0x00025ce1) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6cd7,	// (0x00025ce1) cell_large_graphic_colour_none_popup_pane

0x6ceb,	// (0x00025cf5) grid_large_graphic_colour_popup_pane_ParamLimits

0x6ceb,	// (0x00025cf5) grid_large_graphic_colour_popup_pane

0x6d13,	// (0x00025d1d) listscroll_popup_colour_pane_g1_ParamLimits

0x6d13,	// (0x00025d1d) listscroll_popup_colour_pane_g1

0x6d2a,	// (0x00025d34) listscroll_popup_colour_pane_g2_ParamLimits

0x6d2a,	// (0x00025d34) listscroll_popup_colour_pane_g2

0x6d41,	// (0x00025d4b) listscroll_popup_colour_pane_g3_ParamLimits

0x6d41,	// (0x00025d4b) listscroll_popup_colour_pane_g3

0x6d51,	// (0x00025d5b) listscroll_popup_colour_pane_g4_ParamLimits

0x6d51,	// (0x00025d5b) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0002e5a2) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0002e5a2) listscroll_popup_colour_pane_g

0x18a6,	// (0x000208b0) scroll_pane_cp6_ParamLimits

0x18a6,	// (0x000208b0) scroll_pane_cp6

0x6d61,	// (0x00025d6b) cell_large_graphic_colour_popup_pane_ParamLimits

0x6d61,	// (0x00025d6b) cell_large_graphic_colour_popup_pane

0x6d80,	// (0x00025d8a) cell_large_graphic_colour_none_popup_pane_t1

0x15ca,	// (0x000205d4) grid_highlight_pane_cp5

0x18b8,	// (0x000208c2) cell_large_graphic_colour_popup_pane_g1

0x18c0,	// (0x000208ca) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0002e5ab) cell_large_graphic_colour_popup_pane_g

0x18c8,	// (0x000208d2) cell_large_graphic_colour_popup_pane_g2_copy1

0x18d1,	// (0x000208db) grid_highlight_pane_cp4

0x18d9,	// (0x000208e3) bg_popup_window_pane_cp8_ParamLimits

0x18d9,	// (0x000208e3) bg_popup_window_pane_cp8

0x6d8f,	// (0x00025d99) popup_snote_single_text_window_g1_ParamLimits

0x6d8f,	// (0x00025d99) popup_snote_single_text_window_g1

0x6da1,	// (0x00025dab) popup_snote_single_text_window_t1_ParamLimits

0x6da1,	// (0x00025dab) popup_snote_single_text_window_t1

0x6db4,	// (0x00025dbe) popup_snote_single_text_window_t2_ParamLimits

0x6db4,	// (0x00025dbe) popup_snote_single_text_window_t2

0x6dc7,	// (0x00025dd1) popup_snote_single_text_window_t3_ParamLimits

0x6dc7,	// (0x00025dd1) popup_snote_single_text_window_t3

0x6e00,	// (0x00025e0a) popup_snote_single_text_window_t4_ParamLimits

0x6e00,	// (0x00025e0a) popup_snote_single_text_window_t4

0x6e34,	// (0x00025e3e) popup_snote_single_text_window_t5_ParamLimits

0x6e34,	// (0x00025e3e) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0002e5b0) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0002e5b0) popup_snote_single_text_window_t

0x18f4,	// (0x000208fe) bg_popup_window_pane_cp9_ParamLimits

0x18f4,	// (0x000208fe) bg_popup_window_pane_cp9

0x6d8f,	// (0x00025d99) popup_snote_single_graphic_window_g1_ParamLimits

0x6d8f,	// (0x00025d99) popup_snote_single_graphic_window_g1

0x1902,	// (0x0002090c) popup_snote_single_graphic_window_g2_ParamLimits

0x1902,	// (0x0002090c) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0002e5bb) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0002e5bb) popup_snote_single_graphic_window_g

0x190e,	// (0x00020918) popup_snote_single_graphic_window_t1_ParamLimits

0x190e,	// (0x00020918) popup_snote_single_graphic_window_t1

0x1921,	// (0x0002092b) popup_snote_single_graphic_window_t2_ParamLimits

0x1921,	// (0x0002092b) popup_snote_single_graphic_window_t2

0x6e63,	// (0x00025e6d) popup_snote_single_graphic_window_t3_ParamLimits

0x6e63,	// (0x00025e6d) popup_snote_single_graphic_window_t3

0x6e9c,	// (0x00025ea6) popup_snote_single_graphic_window_t4_ParamLimits

0x6e9c,	// (0x00025ea6) popup_snote_single_graphic_window_t4

0x6ed0,	// (0x00025eda) popup_snote_single_graphic_window_t5_ParamLimits

0x6ed0,	// (0x00025eda) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0002e5c0) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0002e5c0) popup_snote_single_graphic_window_t

0xb3fa,	// (0x0002a404) grid_graphic_popup_pane_ParamLimits

0xb3fa,	// (0x0002a404) grid_graphic_popup_pane

0xb422,	// (0x0002a42c) listscroll_popup_graphic_pane_g1_ParamLimits

0xb422,	// (0x0002a42c) listscroll_popup_graphic_pane_g1

0xb436,	// (0x0002a440) listscroll_popup_graphic_pane_g2_ParamLimits

0xb436,	// (0x0002a440) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0002e9b5) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0002e9b5) listscroll_popup_graphic_pane_g

0xb44a,	// (0x0002a454) scroll_pane_cp5

0xb397,	// (0x0002a3a1) cell_graphic_popup_pane_ParamLimits

0xb397,	// (0x0002a3a1) cell_graphic_popup_pane

0xb378,	// (0x0002a382) cell_graphic_popup_pane_g1

0xb380,	// (0x0002a38a) cell_graphic_popup_pane_g2

0x18c8,	// (0x000208d2) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0002e9ae) cell_graphic_popup_pane_g

0xb389,	// (0x0002a393) cell_graphic_popup_pane_t2

0x18d1,	// (0x000208db) grid_highlight_pane_cp3

0x1946,	// (0x00020950) list_gen_pane_ParamLimits

0x1946,	// (0x00020950) list_gen_pane

0x196e,	// (0x00020978) scroll_pane

0xb2d0,	// (0x0002a2da) bg_list_pane_g1_ParamLimits

0xb2d0,	// (0x0002a2da) bg_list_pane_g1

0xb2ed,	// (0x0002a2f7) bg_list_pane_g2_ParamLimits

0xb2ed,	// (0x0002a2f7) bg_list_pane_g2

0xb302,	// (0x0002a30c) bg_list_pane_g3_ParamLimits

0xb302,	// (0x0002a30c) bg_list_pane_g3

0xb316,	// (0x0002a320) bg_list_pane_g4_ParamLimits

0xb316,	// (0x0002a320) bg_list_pane_g4

0xb32a,	// (0x0002a334) bg_list_pane_g5_ParamLimits

0xb32a,	// (0x0002a334) bg_list_pane_g5

0x0004,

0xf999,	// (0x0002e9a3) bg_list_pane_g_ParamLimits

0xf999,	// (0x0002e9a3) bg_list_pane_g

0xb265,	// (0x0002a26f) list_double2_graphic_large_graphic_pane_ParamLimits

0xb265,	// (0x0002a26f) list_double2_graphic_large_graphic_pane

0xb265,	// (0x0002a26f) list_double2_graphic_pane_ParamLimits

0xb265,	// (0x0002a26f) list_double2_graphic_pane

0xb265,	// (0x0002a26f) list_double2_large_graphic_pane_ParamLimits

0xb265,	// (0x0002a26f) list_double2_large_graphic_pane

0x5d9f,	// (0x00024da9) list_double2_pane_ParamLimits

0x5d9f,	// (0x00024da9) list_double2_pane

0xb265,	// (0x0002a26f) list_double_graphic_heading_pane_ParamLimits

0xb265,	// (0x0002a26f) list_double_graphic_heading_pane

0xb265,	// (0x0002a26f) list_double_graphic_pane_ParamLimits

0xb265,	// (0x0002a26f) list_double_graphic_pane

0xb265,	// (0x0002a26f) list_double_heading_pane_ParamLimits

0xb265,	// (0x0002a26f) list_double_heading_pane

0xb265,	// (0x0002a26f) list_double_large_graphic_pane_ParamLimits

0xb265,	// (0x0002a26f) list_double_large_graphic_pane

0xb265,	// (0x0002a26f) list_double_number_pane_ParamLimits

0xb265,	// (0x0002a26f) list_double_number_pane

0xb265,	// (0x0002a26f) list_double_pane_ParamLimits

0xb265,	// (0x0002a26f) list_double_pane

0xb265,	// (0x0002a26f) list_double_time_pane_ParamLimits

0xb265,	// (0x0002a26f) list_double_time_pane

0xb265,	// (0x0002a26f) list_setting_number_pane_ParamLimits

0xb265,	// (0x0002a26f) list_setting_number_pane

0xb265,	// (0x0002a26f) list_setting_pane_ParamLimits

0xb265,	// (0x0002a26f) list_setting_pane

0x5de0,	// (0x00024dea) list_single_2graphic_pane_ParamLimits

0x5de0,	// (0x00024dea) list_single_2graphic_pane

0x5de0,	// (0x00024dea) list_single_graphic_heading_pane_ParamLimits

0x5de0,	// (0x00024dea) list_single_graphic_heading_pane

0x5de0,	// (0x00024dea) list_single_graphic_pane_ParamLimits

0x5de0,	// (0x00024dea) list_single_graphic_pane

0x5de0,	// (0x00024dea) list_single_heading_pane_ParamLimits

0x5de0,	// (0x00024dea) list_single_heading_pane

0x5e42,	// (0x00024e4c) list_single_large_graphic_pane_ParamLimits

0x5e42,	// (0x00024e4c) list_single_large_graphic_pane

0x5de0,	// (0x00024dea) list_single_number_heading_pane_ParamLimits

0x5de0,	// (0x00024dea) list_single_number_heading_pane

0x5de0,	// (0x00024dea) list_single_number_pane_ParamLimits

0x5de0,	// (0x00024dea) list_single_number_pane

0x5de0,	// (0x00024dea) list_single_pane_ParamLimits

0x5de0,	// (0x00024dea) list_single_pane

0x15ca,	// (0x000205d4) list_highlight_pane_cp1

0x5401,	// (0x0002440b) list_single_pane_g1_ParamLimits

0x5401,	// (0x0002440b) list_single_pane_g1

0x540d,	// (0x00024417) list_single_pane_g2_ParamLimits

0x540d,	// (0x00024417) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0002e5d2) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0002e5d2) list_single_pane_g

0x5d76,	// (0x00024d80) list_single_pane_t1_ParamLimits

0x5d76,	// (0x00024d80) list_single_pane_t1

0x5401,	// (0x0002440b) list_single_number_pane_g1_ParamLimits

0x5401,	// (0x0002440b) list_single_number_pane_g1

0x540d,	// (0x00024417) list_single_number_pane_g2_ParamLimits

0x540d,	// (0x00024417) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0002e5d2) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0002e5d2) list_single_number_pane_g

0x5c26,	// (0x00024c30) list_single_number_pane_t1_ParamLimits

0x5c26,	// (0x00024c30) list_single_number_pane_t1

0x5d38,	// (0x00024d42) list_single_number_pane_t2_ParamLimits

0x5d38,	// (0x00024d42) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0002e964) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0002e964) list_single_number_pane_t

0x53f5,	// (0x000243ff) list_single_graphic_pane_g1_ParamLimits

0x53f5,	// (0x000243ff) list_single_graphic_pane_g1

0x5401,	// (0x0002440b) list_single_graphic_pane_g2_ParamLimits

0x5401,	// (0x0002440b) list_single_graphic_pane_g2

0x540d,	// (0x00024417) list_single_graphic_pane_g3_ParamLimits

0x540d,	// (0x00024417) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0002e5cb) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0002e5cb) list_single_graphic_pane_g

0x5419,	// (0x00024423) list_single_graphic_pane_t1_ParamLimits

0x5419,	// (0x00024423) list_single_graphic_pane_t1

0x5401,	// (0x0002440b) list_single_heading_pane_g1_ParamLimits

0x5401,	// (0x0002440b) list_single_heading_pane_g1

0x540d,	// (0x00024417) list_single_heading_pane_g2_ParamLimits

0x540d,	// (0x00024417) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002e5d2) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002e5d2) list_single_heading_pane_g

0x542f,	// (0x00024439) list_single_heading_pane_t1_ParamLimits

0x542f,	// (0x00024439) list_single_heading_pane_t1

0x5445,	// (0x0002444f) list_single_heading_pane_t2_ParamLimits

0x5445,	// (0x0002444f) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0002e5d7) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0002e5d7) list_single_heading_pane_t

0x5401,	// (0x0002440b) list_single_number_heading_pane_g1_ParamLimits

0x5401,	// (0x0002440b) list_single_number_heading_pane_g1

0x540d,	// (0x00024417) list_single_number_heading_pane_g2_ParamLimits

0x540d,	// (0x00024417) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002e5d2) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002e5d2) list_single_number_heading_pane_g

0x542f,	// (0x00024439) list_single_number_heading_pane_t1_ParamLimits

0x542f,	// (0x00024439) list_single_number_heading_pane_t1

0x5457,	// (0x00024461) list_single_number_heading_pane_t2_ParamLimits

0x5457,	// (0x00024461) list_single_number_heading_pane_t2

0x5469,	// (0x00024473) list_single_number_heading_pane_t3_ParamLimits

0x5469,	// (0x00024473) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0002e5dc) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0002e5dc) list_single_number_heading_pane_t

0x547b,	// (0x00024485) list_single_graphic_heading_pane_g1_ParamLimits

0x547b,	// (0x00024485) list_single_graphic_heading_pane_g1

0x5487,	// (0x00024491) list_single_graphic_heading_pane_g4_ParamLimits

0x5487,	// (0x00024491) list_single_graphic_heading_pane_g4

0x540d,	// (0x00024417) list_single_graphic_heading_pane_g5_ParamLimits

0x540d,	// (0x00024417) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0002e5e3) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0002e5e3) list_single_graphic_heading_pane_g

0x542f,	// (0x00024439) list_single_graphic_heading_pane_t1_ParamLimits

0x542f,	// (0x00024439) list_single_graphic_heading_pane_t1

0x5498,	// (0x000244a2) list_single_graphic_heading_pane_t2_ParamLimits

0x5498,	// (0x000244a2) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0002e5ea) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0002e5ea) list_single_graphic_heading_pane_t

0x54aa,	// (0x000244b4) list_single_large_graphic_pane_g1_ParamLimits

0x54aa,	// (0x000244b4) list_single_large_graphic_pane_g1

0x54b6,	// (0x000244c0) list_single_large_graphic_pane_g2_ParamLimits

0x54b6,	// (0x000244c0) list_single_large_graphic_pane_g2

0x54c2,	// (0x000244cc) list_single_large_graphic_pane_g3_ParamLimits

0x54c2,	// (0x000244cc) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0002e5ef) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0002e5ef) list_single_large_graphic_pane_g

0xa300,	// (0x0002930a) wait_border_pane_g2_copy1

0x54ce,	// (0x000244d8) list_single_large_graphic_pane_g4_cp2

0x54d6,	// (0x000244e0) list_single_large_graphic_pane_t1_ParamLimits

0x54d6,	// (0x000244e0) list_single_large_graphic_pane_t1

0x54ec,	// (0x000244f6) list_double_pane_g1_ParamLimits

0x54ec,	// (0x000244f6) list_double_pane_g1

0x54f8,	// (0x00024502) list_double_pane_g2_ParamLimits

0x54f8,	// (0x00024502) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0002e5f6) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0002e5f6) list_double_pane_g

0x5504,	// (0x0002450e) list_double_pane_t1_ParamLimits

0x5504,	// (0x0002450e) list_double_pane_t1

0x551a,	// (0x00024524) list_double_pane_t2_ParamLimits

0x551a,	// (0x00024524) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0002e5fb) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0002e5fb) list_double_pane_t

0x552c,	// (0x00024536) list_double2_pane_g1_ParamLimits

0x552c,	// (0x00024536) list_double2_pane_g1

0x553d,	// (0x00024547) list_double2_pane_g2_ParamLimits

0x553d,	// (0x00024547) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0002e600) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0002e600) list_double2_pane_g

0x5549,	// (0x00024553) list_double2_pane_t1_ParamLimits

0x5549,	// (0x00024553) list_double2_pane_t1

0x555f,	// (0x00024569) list_double2_pane_t2_ParamLimits

0x555f,	// (0x00024569) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0002e605) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0002e605) list_double2_pane_t

0x54ec,	// (0x000244f6) list_double_number_pane_g1_ParamLimits

0x54ec,	// (0x000244f6) list_double_number_pane_g1

0x54f8,	// (0x00024502) list_double_number_pane_g2_ParamLimits

0x54f8,	// (0x00024502) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0002e5f6) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0002e5f6) list_double_number_pane_g

0x5571,	// (0x0002457b) list_double_number_pane_t1_ParamLimits

0x5571,	// (0x0002457b) list_double_number_pane_t1

0x5583,	// (0x0002458d) list_double_number_pane_t2_ParamLimits

0x5583,	// (0x0002458d) list_double_number_pane_t2

0x5599,	// (0x000245a3) list_double_number_pane_t3_ParamLimits

0x5599,	// (0x000245a3) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0002e60a) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0002e60a) list_double_number_pane_t

0x55ab,	// (0x000245b5) list_double_graphic_pane_g1_ParamLimits

0x55ab,	// (0x000245b5) list_double_graphic_pane_g1

0x55b7,	// (0x000245c1) list_double_graphic_pane_g2_ParamLimits

0x55b7,	// (0x000245c1) list_double_graphic_pane_g2

0x55c6,	// (0x000245d0) list_double_graphic_pane_g3_ParamLimits

0x55c6,	// (0x000245d0) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0002e611) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0002e611) list_double_graphic_pane_g

0x55de,	// (0x000245e8) list_double_graphic_pane_t1_ParamLimits

0x55de,	// (0x000245e8) list_double_graphic_pane_t1

0x55f4,	// (0x000245fe) list_double_graphic_pane_t2_ParamLimits

0x55f4,	// (0x000245fe) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0002e61a) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0002e61a) list_double_graphic_pane_t

0x5606,	// (0x00024610) list_double2_graphic_pane_g1_ParamLimits

0x5606,	// (0x00024610) list_double2_graphic_pane_g1

0x54ec,	// (0x000244f6) list_double2_graphic_pane_g2_ParamLimits

0x54ec,	// (0x000244f6) list_double2_graphic_pane_g2

0x54f8,	// (0x00024502) list_double2_graphic_pane_g3_ParamLimits

0x54f8,	// (0x00024502) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0002e61f) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0002e61f) list_double2_graphic_pane_g

0x5612,	// (0x0002461c) list_double2_graphic_pane_t1_ParamLimits

0x5612,	// (0x0002461c) list_double2_graphic_pane_t1

0x5628,	// (0x00024632) list_double2_graphic_pane_t2_ParamLimits

0x5628,	// (0x00024632) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002e626) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002e626) list_double2_graphic_pane_t

0x563a,	// (0x00024644) list_double_large_graphic_pane_g1_ParamLimits

0x563a,	// (0x00024644) list_double_large_graphic_pane_g1

0x5659,	// (0x00024663) list_double_large_graphic_pane_g2_ParamLimits

0x5659,	// (0x00024663) list_double_large_graphic_pane_g2

0x54f8,	// (0x00024502) list_double_large_graphic_pane_g3_ParamLimits

0x54f8,	// (0x00024502) list_double_large_graphic_pane_g3

0x566a,	// (0x00024674) list_double_large_graphic_pane_g4_ParamLimits

0x566a,	// (0x00024674) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0002e62b) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0002e62b) list_double_large_graphic_pane_g

0x5692,	// (0x0002469c) list_double_large_graphic_pane_t1_ParamLimits

0x5692,	// (0x0002469c) list_double_large_graphic_pane_t1

0x56ab,	// (0x000246b5) list_double_large_graphic_pane_t2_ParamLimits

0x56ab,	// (0x000246b5) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002e636) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002e636) list_double_large_graphic_pane_t

0x6f09,	// (0x00025f13) list_double2_large_graphic_pane_g1_ParamLimits

0x6f09,	// (0x00025f13) list_double2_large_graphic_pane_g1

0x56bd,	// (0x000246c7) list_double2_large_graphic_pane_g2_ParamLimits

0x56bd,	// (0x000246c7) list_double2_large_graphic_pane_g2

0x56ce,	// (0x000246d8) list_double2_large_graphic_pane_g3_ParamLimits

0x56ce,	// (0x000246d8) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0002e63b) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0002e63b) list_double2_large_graphic_pane_g

0x56da,	// (0x000246e4) list_double2_large_graphic_pane_t1_ParamLimits

0x56da,	// (0x000246e4) list_double2_large_graphic_pane_t1

0x56f0,	// (0x000246fa) list_double2_large_graphic_pane_t2_ParamLimits

0x56f0,	// (0x000246fa) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0002e642) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0002e642) list_double2_large_graphic_pane_t

0x5702,	// (0x0002470c) list_double_heading_pane_g1_ParamLimits

0x5702,	// (0x0002470c) list_double_heading_pane_g1

0x5713,	// (0x0002471d) list_double_heading_pane_g2_ParamLimits

0x5713,	// (0x0002471d) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0002e647) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0002e647) list_double_heading_pane_g

0x571f,	// (0x00024729) list_double_heading_pane_t1_ParamLimits

0x571f,	// (0x00024729) list_double_heading_pane_t1

0x5735,	// (0x0002473f) list_double_heading_pane_t2_ParamLimits

0x5735,	// (0x0002473f) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0002e64c) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0002e64c) list_double_heading_pane_t

0x5606,	// (0x00024610) list_double_graphic_heading_pane_g1_ParamLimits

0x5606,	// (0x00024610) list_double_graphic_heading_pane_g1

0x5702,	// (0x0002470c) list_double_graphic_heading_pane_g2_ParamLimits

0x5702,	// (0x0002470c) list_double_graphic_heading_pane_g2

0x5713,	// (0x0002471d) list_double_graphic_heading_pane_g3_ParamLimits

0x5713,	// (0x0002471d) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0002e651) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0002e651) list_double_graphic_heading_pane_g

0x5747,	// (0x00024751) list_double_graphic_heading_pane_t1_ParamLimits

0x5747,	// (0x00024751) list_double_graphic_heading_pane_t1

0x575d,	// (0x00024767) list_double_graphic_heading_pane_t2_ParamLimits

0x575d,	// (0x00024767) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0002e658) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0002e658) list_double_graphic_heading_pane_t

0x5659,	// (0x00024663) list_double_time_pane_g1_ParamLimits

0x5659,	// (0x00024663) list_double_time_pane_g1

0x54f8,	// (0x00024502) list_double_time_pane_g2_ParamLimits

0x54f8,	// (0x00024502) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0002e65d) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0002e65d) list_double_time_pane_g

0x576f,	// (0x00024779) list_double_time_pane_t1_ParamLimits

0x576f,	// (0x00024779) list_double_time_pane_t1

0x5785,	// (0x0002478f) list_double_time_pane_t2_ParamLimits

0x5785,	// (0x0002478f) list_double_time_pane_t2

0x5797,	// (0x000247a1) list_double_time_pane_t3_ParamLimits

0x5797,	// (0x000247a1) list_double_time_pane_t3

0x57a9,	// (0x000247b3) list_double_time_pane_t4_ParamLimits

0x57a9,	// (0x000247b3) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0002e662) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0002e662) list_double_time_pane_t

0x57bb,	// (0x000247c5) list_setting_pane_g1_ParamLimits

0x57bb,	// (0x000247c5) list_setting_pane_g1

0x5713,	// (0x0002471d) list_setting_pane_g2_ParamLimits

0x5713,	// (0x0002471d) list_setting_pane_g2

0x0001,

0xf661,	// (0x0002e66b) list_setting_pane_g_ParamLimits

0xf661,	// (0x0002e66b) list_setting_pane_g

0x57c7,	// (0x000247d1) list_setting_pane_t1_ParamLimits

0x57c7,	// (0x000247d1) list_setting_pane_t1

0x57de,	// (0x000247e8) list_setting_pane_t2_ParamLimits

0x57de,	// (0x000247e8) list_setting_pane_t2

0x0002,

0xf666,	// (0x0002e670) list_setting_pane_t_ParamLimits

0xf666,	// (0x0002e670) list_setting_pane_t

0x581b,	// (0x00024825) set_value_pane_cp_ParamLimits

0x581b,	// (0x00024825) set_value_pane_cp

0x5827,	// (0x00024831) list_setting_number_pane_g1_ParamLimits

0x5827,	// (0x00024831) list_setting_number_pane_g1

0x5833,	// (0x0002483d) list_setting_number_pane_g2_ParamLimits

0x5833,	// (0x0002483d) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0002e677) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0002e677) list_setting_number_pane_g

0x583f,	// (0x00024849) list_setting_number_pane_t1_ParamLimits

0x583f,	// (0x00024849) list_setting_number_pane_t1

0x5853,	// (0x0002485d) list_setting_number_pane_t2_ParamLimits

0x5853,	// (0x0002485d) list_setting_number_pane_t2

0x586a,	// (0x00024874) list_setting_number_pane_t3_ParamLimits

0x586a,	// (0x00024874) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0002e67c) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0002e67c) list_setting_number_pane_t

0x581b,	// (0x00024825) set_value_pane_ParamLimits

0x581b,	// (0x00024825) set_value_pane

0x19db,	// (0x000209e5) bg_set_opt_pane_ParamLimits

0x19db,	// (0x000209e5) bg_set_opt_pane

0x58ad,	// (0x000248b7) set_value_pane_t1

0x1a0a,	// (0x00020a14) slider_set_pane_cp3

0x6f15,	// (0x00025f1f) volume_small_pane_cp

0x1a13,	// (0x00020a1d) list_form_gen_pane

0x1a1c,	// (0x00020a26) scroll_pane_cp8

0x58c3,	// (0x000248cd) form_field_data_pane_ParamLimits

0x58c3,	// (0x000248cd) form_field_data_pane

0x58e3,	// (0x000248ed) form_field_data_wide_pane_ParamLimits

0x58e3,	// (0x000248ed) form_field_data_wide_pane

0x5904,	// (0x0002490e) form_field_popup_pane_ParamLimits

0x5904,	// (0x0002490e) form_field_popup_pane

0x5922,	// (0x0002492c) form_field_popup_wide_pane_ParamLimits

0x5922,	// (0x0002492c) form_field_popup_wide_pane

0x593f,	// (0x00024949) form_field_slider_pane_ParamLimits

0x593f,	// (0x00024949) form_field_slider_pane

0x5952,	// (0x0002495c) form_field_slider_wide_pane_ParamLimits

0x5952,	// (0x0002495c) form_field_slider_wide_pane

0x1a50,	// (0x00020a5a) data_form_pane

0x596f,	// (0x00024979) form_field_data_pane_t1

0x1a5c,	// (0x00020a66) input_focus_pane

0x5987,	// (0x00024991) data_form_wide_pane

0x59a4,	// (0x000249ae) form_field_data_wide_pane_t1

0x18e6,	// (0x000208f0) input_focus_pane_cp6

0x59c6,	// (0x000249d0) form_field_popup_pane_t1

0x1a5c,	// (0x00020a66) input_focus_pane_cp7

0x1a9e,	// (0x00020aa8) list_form_pane

0x59e6,	// (0x000249f0) form_field_popup_wide_pane_t1

0x1a5c,	// (0x00020a66) input_focus_pane_cp8

0x1ac7,	// (0x00020ad1) list_form_wide_pane

0x5a03,	// (0x00024a0d) form_field_slider_pane_t1_ParamLimits

0x5a03,	// (0x00024a0d) form_field_slider_pane_t1

0x5a19,	// (0x00024a23) form_field_slider_pane_t2_ParamLimits

0x5a19,	// (0x00024a23) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0002e68c) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0002e68c) form_field_slider_pane_t

0x1618,	// (0x00020622) input_focus_pane_cp9_ParamLimits

0x1618,	// (0x00020622) input_focus_pane_cp9

0x5a2e,	// (0x00024a38) slider_cont_pane_ParamLimits

0x5a2e,	// (0x00024a38) slider_cont_pane

0x1ad6,	// (0x00020ae0) form_field_slider_wide_pane_t1_ParamLimits

0x1ad6,	// (0x00020ae0) form_field_slider_wide_pane_t1

0x5a42,	// (0x00024a4c) form_field_slider_wide_pane_t2_ParamLimits

0x5a42,	// (0x00024a4c) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0002e691) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0002e691) form_field_slider_wide_pane_t

0x1618,	// (0x00020622) input_focus_pane_cp10_ParamLimits

0x1618,	// (0x00020622) input_focus_pane_cp10

0x5a54,	// (0x00024a5e) slider_cont_pane_cp1_ParamLimits

0x5a54,	// (0x00024a5e) slider_cont_pane_cp1

0x5a68,	// (0x00024a72) slider_form_pane_cp

0x1afa,	// (0x00020b04) input_focus_pane_g1

0x1b02,	// (0x00020b0c) input_focus_pane_g2

0x1b0a,	// (0x00020b14) input_focus_pane_g3

0x1b12,	// (0x00020b1c) input_focus_pane_g4

0x1b1a,	// (0x00020b24) input_focus_pane_g5

0x1b22,	// (0x00020b2c) input_focus_pane_g6

0x1b2a,	// (0x00020b34) input_focus_pane_g7

0x1b32,	// (0x00020b3c) input_focus_pane_g8

0x1b3a,	// (0x00020b44) input_focus_pane_g9

0x15c0,	// (0x000205ca) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0002e696) input_focus_pane_g

0xa309,	// (0x00029313) wait_border_pane_g3_copy1

0x5a70,	// (0x00024a7a) data_form_pane_t1

0x15c0,	// (0x000205ca) wait_anim_pane_g1_copy1

0x5d4a,	// (0x00024d54) data_form_wide_pane_t1

0x5a8b,	// (0x00024a95) list_form_graphic_pane_cp_ParamLimits

0x5a8b,	// (0x00024a95) list_form_graphic_pane_cp

0xb209,	// (0x0002a213) slider_form_pane_g1

0xb212,	// (0x0002a21c) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0002e994) slider_form_pane_g

0x5a9f,	// (0x00024aa9) list_form_graphic_pane_ParamLimits

0x5a9f,	// (0x00024aa9) list_form_graphic_pane

0x5ab6,	// (0x00024ac0) list_form_graphic_pane_g1

0x5abe,	// (0x00024ac8) list_form_graphic_pane_t1_ParamLimits

0x5abe,	// (0x00024ac8) list_form_graphic_pane_t1

0x1626,	// (0x00020630) list_highlight_pane_cp5_ParamLimits

0x1626,	// (0x00020630) list_highlight_pane_cp5

0x5ad3,	// (0x00024add) find_pane_g1

0x1b42,	// (0x00020b4c) input_find_pane

0x5adc,	// (0x00024ae6) input_find_pane_g1_ParamLimits

0x5adc,	// (0x00024ae6) input_find_pane_g1

0x5ae8,	// (0x00024af2) input_find_pane_t1_ParamLimits

0x5ae8,	// (0x00024af2) input_find_pane_t1

0x5afd,	// (0x00024b07) input_find_pane_t2_ParamLimits

0x5afd,	// (0x00024b07) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0002e6ab) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0002e6ab) input_find_pane_t

0x1b4b,	// (0x00020b55) input_focus_pane_cp5_ParamLimits

0x1b4b,	// (0x00020b55) input_focus_pane_cp5

0x1b59,	// (0x00020b63) bg_popup_window_pane_cp2_ParamLimits

0x1b59,	// (0x00020b63) bg_popup_window_pane_cp2

0x1b66,	// (0x00020b70) listscroll_menu_pane_ParamLimits

0x1b66,	// (0x00020b70) listscroll_menu_pane

0x6f2a,	// (0x00025f34) popup_submenu_window_ParamLimits

0x6f2a,	// (0x00025f34) popup_submenu_window

0x1b72,	// (0x00020b7c) find_popup_pane_g1

0x6f52,	// (0x00025f5c) input_popup_find_pane_cp

0x1b4b,	// (0x00020b55) input_focus_pane_cp4_ParamLimits

0x1b4b,	// (0x00020b55) input_focus_pane_cp4

0x1b7a,	// (0x00020b84) input_popup_find_pane_t1_ParamLimits

0x1b7a,	// (0x00020b84) input_popup_find_pane_t1

0x15ca,	// (0x000205d4) bg_popup_sub_pane_cp

0x1ba8,	// (0x00020bb2) listscroll_popup_sub_pane

0x1bb0,	// (0x00020bba) list_submenu_pane_ParamLimits

0x1bb0,	// (0x00020bba) list_submenu_pane

0x1bc1,	// (0x00020bcb) scroll_pane_cp4

0x6f6a,	// (0x00025f74) list_single_popup_submenu_pane_ParamLimits

0x6f6a,	// (0x00025f74) list_single_popup_submenu_pane

0x1d44,	// (0x00020d4e) list_single_popup_submenu_pane_g1

0x6f7e,	// (0x00025f88) list_single_popup_submenu_pane_t1_ParamLimits

0x6f7e,	// (0x00025f88) list_single_popup_submenu_pane_t1

0x1626,	// (0x00020630) bg_active_tab_pane_cp1_ParamLimits

0x1626,	// (0x00020630) bg_active_tab_pane_cp1

0x1bc9,	// (0x00020bd3) tabs_2_active_pane_g1

0x6f93,	// (0x00025f9d) tabs_2_active_pane_t1

0x1626,	// (0x00020630) bg_passive_tab_pane_cp1_ParamLimits

0x1626,	// (0x00020630) bg_passive_tab_pane_cp1

0x1bc9,	// (0x00020bd3) tabs_2_passive_pane_g1

0x6f93,	// (0x00025f9d) tabs_2_passive_pane_t1

0x1d36,	// (0x00020d40) bg_active_tab_pane_cp4

0x6fa5,	// (0x00025faf) tabs_2_long_active_pane_t1

0x6fb8,	// (0x00025fc2) bg_passive_tab_pane_cp4

0x89eb,	// (0x000279f5) list_single_midp_graphic_pane_g4_ParamLimits

0x1d36,	// (0x00020d40) bg_active_tab_pane_cp5

0x6fc4,	// (0x00025fce) tabs_3_long_active_pane_t1

0x6fb8,	// (0x00025fc2) bg_passive_tab_pane_cp5

0x89eb,	// (0x000279f5) list_single_midp_graphic_pane_g4

0x1626,	// (0x00020630) bg_popup_window_pane_cp13_ParamLimits

0x1626,	// (0x00020630) bg_popup_window_pane_cp13

0x1bd1,	// (0x00020bdb) listscroll_popup_fast_pane_ParamLimits

0x1bd1,	// (0x00020bdb) listscroll_popup_fast_pane

0x1bdd,	// (0x00020be7) grid_popup_fast_pane_ParamLimits

0x1bdd,	// (0x00020be7) grid_popup_fast_pane

0x1bef,	// (0x00020bf9) scroll_pane_cp9_ParamLimits

0x1bef,	// (0x00020bf9) scroll_pane_cp9

0xcb2a,	// (0x0002bb34) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcb2a,	// (0x0002bb34) list_single_graphic_hl_pane_t1_cp2

0x1c02,	// (0x00020c0c) input_focus_pane_cp20_ParamLimits

0x1c02,	// (0x00020c0c) input_focus_pane_cp20

0x1c10,	// (0x00020c1a) query_popup_data_pane_t1_ParamLimits

0x1c10,	// (0x00020c1a) query_popup_data_pane_t1

0x1c23,	// (0x00020c2d) query_popup_data_pane_t2_ParamLimits

0x1c23,	// (0x00020c2d) query_popup_data_pane_t2

0x1c69,	// (0x00020c73) query_popup_data_pane_t3_ParamLimits

0x1c69,	// (0x00020c73) query_popup_data_pane_t3

0x1caa,	// (0x00020cb4) query_popup_data_pane_t4_ParamLimits

0x1caa,	// (0x00020cb4) query_popup_data_pane_t4

0x1ce6,	// (0x00020cf0) query_popup_data_pane_t5_ParamLimits

0x1ce6,	// (0x00020cf0) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0002e6b0) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0002e6b0) query_popup_data_pane_t

0x1afa,	// (0x00020b04) bg_set_opt_pane_g1

0x1b02,	// (0x00020b0c) bg_set_opt_pane_g2

0x1b0a,	// (0x00020b14) bg_set_opt_pane_g3

0x1b12,	// (0x00020b1c) bg_set_opt_pane_g4

0x1b1a,	// (0x00020b24) bg_set_opt_pane_g5

0x1b22,	// (0x00020b2c) bg_set_opt_pane_g6

0x1b2a,	// (0x00020b34) bg_set_opt_pane_g7

0x1b32,	// (0x00020b3c) bg_set_opt_pane_g8

0x1b3a,	// (0x00020b44) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0002e6bb) bg_set_opt_pane_g

0x74b1,	// (0x000264bb) control_top_pane_stacon_ParamLimits

0x74b1,	// (0x000264bb) control_top_pane_stacon

0x7504,	// (0x0002650e) signal_pane_stacon_ParamLimits

0x7504,	// (0x0002650e) signal_pane_stacon

0x7529,	// (0x00026533) stacon_top_pane_g1_ParamLimits

0x7529,	// (0x00026533) stacon_top_pane_g1

0x754b,	// (0x00026555) title_pane_stacon_ParamLimits

0x754b,	// (0x00026555) title_pane_stacon

0x7575,	// (0x0002657f) uni_indicator_pane_stacon_ParamLimits

0x7575,	// (0x0002657f) uni_indicator_pane_stacon

0x758a,	// (0x00026594) battery_pane_stacon_ParamLimits

0x758a,	// (0x00026594) battery_pane_stacon

0x75ce,	// (0x000265d8) control_bottom_pane_stacon_ParamLimits

0x75ce,	// (0x000265d8) control_bottom_pane_stacon

0x75f1,	// (0x000265fb) navi_pane_stacon_ParamLimits

0x75f1,	// (0x000265fb) navi_pane_stacon

0x7614,	// (0x0002661e) stacon_bottom_pane_g1_ParamLimits

0x7614,	// (0x0002661e) stacon_bottom_pane_g1

0x6ff0,	// (0x00025ffa) aid_levels_signal_lsc_ParamLimits

0x6ff0,	// (0x00025ffa) aid_levels_signal_lsc

0x7006,	// (0x00026010) signal_pane_stacon_g1_ParamLimits

0x7006,	// (0x00026010) signal_pane_stacon_g1

0x701a,	// (0x00026024) signal_pane_stacon_g2_ParamLimits

0x701a,	// (0x00026024) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0002e6ce) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0002e6ce) signal_pane_stacon_g

0x704f,	// (0x00026059) title_pane_stacon_t1_ParamLimits

0x704f,	// (0x00026059) title_pane_stacon_t1

0x3618,	// (0x00022622) uni_indicator_pane_stacon_g1

0x3622,	// (0x0002262c) uni_indicator_pane_stacon_g2

0x3604,	// (0x0002260e) uni_indicator_pane_stacon_g3

0x360e,	// (0x00022618) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0002e6da) uni_indicator_pane_stacon_g

0x7074,	// (0x0002607e) control_top_pane_stacon_g1

0x707c,	// (0x00026086) control_top_pane_stacon_t1_ParamLimits

0x707c,	// (0x00026086) control_top_pane_stacon_t1

0x70b3,	// (0x000260bd) aid_levels_battery_lsc_ParamLimits

0x70b3,	// (0x000260bd) aid_levels_battery_lsc

0x70ca,	// (0x000260d4) battery_pane_stacon_g1_ParamLimits

0x70ca,	// (0x000260d4) battery_pane_stacon_g1

0x70dd,	// (0x000260e7) battery_pane_stacon_g2_ParamLimits

0x70dd,	// (0x000260e7) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0002e6e3) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0002e6e3) battery_pane_stacon_g

0x711b,	// (0x00026125) navi_icon_pane_stacon

0x712f,	// (0x00026139) navi_navi_pane_stacon

0x711b,	// (0x00026125) navi_text_pane_stacon

0x7074,	// (0x0002607e) control_bottom_pane_stacon_g1

0x7143,	// (0x0002614d) control_bottom_pane_stacon_t1_ParamLimits

0x7143,	// (0x0002614d) control_bottom_pane_stacon_t1

0x717a,	// (0x00026184) grid_app_pane_ParamLimits

0x717a,	// (0x00026184) grid_app_pane

0x719e,	// (0x000261a8) scroll_pane_cp15_ParamLimits

0x719e,	// (0x000261a8) scroll_pane_cp15

0x71b1,	// (0x000261bb) cell_app_pane_ParamLimits

0x71b1,	// (0x000261bb) cell_app_pane

0x71d9,	// (0x000261e3) cell_app_pane_g1_ParamLimits

0x71d9,	// (0x000261e3) cell_app_pane_g1

0x374c,	// (0x00022756) cell_app_pane_g2_ParamLimits

0x374c,	// (0x00022756) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0002e6e8) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0002e6e8) cell_app_pane_g

0x71fd,	// (0x00026207) cell_app_pane_t1_ParamLimits

0x71fd,	// (0x00026207) cell_app_pane_t1

0x3758,	// (0x00022762) grid_highlight_pane_ParamLimits

0x3758,	// (0x00022762) grid_highlight_pane

0x1afa,	// (0x00020b04) cell_highlight_pane_g1

0x1b02,	// (0x00020b0c) cell_highlight_pane_g2

0x1b0a,	// (0x00020b14) cell_highlight_pane_g3

0x1b12,	// (0x00020b1c) cell_highlight_pane_g4

0x1b1a,	// (0x00020b24) cell_highlight_pane_g5

0x1b22,	// (0x00020b2c) cell_highlight_pane_g6

0x1b2a,	// (0x00020b34) cell_highlight_pane_g7

0x1b32,	// (0x00020b3c) cell_highlight_pane_g8

0x1b3a,	// (0x00020b44) cell_highlight_pane_g9

0x15c0,	// (0x000205ca) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0002e696) cell_highlight_pane_g

0x3773,	// (0x0002277d) bg_scroll_pane

0x7227,	// (0x00026231) scroll_handle_pane

0x37cf,	// (0x000227d9) scroll_bg_pane_g1

0x37e4,	// (0x000227ee) scroll_bg_pane_g2

0x37fc,	// (0x00022806) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0002e6ed) scroll_bg_pane_g

0x7250,	// (0x0002625a) scroll_handle_focus_pane_ParamLimits

0x7250,	// (0x0002625a) scroll_handle_focus_pane

0x37cf,	// (0x000227d9) scroll_handle_pane_g1

0x3811,	// (0x0002281b) scroll_handle_pane_g2

0x37fc,	// (0x00022806) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0002e6f4) scroll_handle_pane_g

0x1b4b,	// (0x00020b55) bg_popup_sub_pane_cp21_ParamLimits

0x1b4b,	// (0x00020b55) bg_popup_sub_pane_cp21

0x725d,	// (0x00026267) popup_fep_japan_predictive_window_t1_ParamLimits

0x725d,	// (0x00026267) popup_fep_japan_predictive_window_t1

0x7277,	// (0x00026281) popup_fep_japan_predictive_window_t2_ParamLimits

0x7277,	// (0x00026281) popup_fep_japan_predictive_window_t2

0x72aa,	// (0x000262b4) popup_fep_japan_predictive_window_t3_ParamLimits

0x72aa,	// (0x000262b4) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0002e6fb) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0002e6fb) popup_fep_japan_predictive_window_t

0x15ca,	// (0x000205d4) bg_popup_sub_pane_cp23

0x3d5c,	// (0x00022d66) listscroll_japin_cand_pane

0x3825,	// (0x0002282f) popup_fep_japan_candidate_window_t1

0x3833,	// (0x0002283d) candidate_pane_ParamLimits

0x3833,	// (0x0002283d) candidate_pane

0x72e1,	// (0x000262eb) scroll_pane_cp30

0x3845,	// (0x0002284f) list_single_popup_jap_candidate_pane_ParamLimits

0x3845,	// (0x0002284f) list_single_popup_jap_candidate_pane

0x15ca,	// (0x000205d4) list_highlight_pane_cp30

0x385a,	// (0x00022864) list_single_popup_jap_candidate_pane_t1

0x3869,	// (0x00022873) level_1_signal

0x3876,	// (0x00022880) level_2_signal

0x3883,	// (0x0002288d) level_3_signal

0x3890,	// (0x0002289a) level_4_signal

0x389d,	// (0x000228a7) level_5_signal

0x38aa,	// (0x000228b4) level_6_signal

0x38b7,	// (0x000228c1) level_7_signal

0x3869,	// (0x00022873) level_1_battery

0x3876,	// (0x00022880) level_2_battery

0x3883,	// (0x0002288d) level_3_battery

0x3890,	// (0x0002289a) level_4_battery

0x389d,	// (0x000228a7) level_5_battery

0x38aa,	// (0x000228b4) level_6_battery

0x38b7,	// (0x000228c1) level_7_battery

0x38fb,	// (0x00022905) list_menu_pane_ParamLimits

0x38fb,	// (0x00022905) list_menu_pane

0x3911,	// (0x0002291b) scroll_pane_cp25_ParamLimits

0x3911,	// (0x0002291b) scroll_pane_cp25

0x392a,	// (0x00022934) list_double2_graphic_pane_cp2_ParamLimits

0x392a,	// (0x00022934) list_double2_graphic_pane_cp2

0x392a,	// (0x00022934) list_double2_large_graphic_pane_cp2_ParamLimits

0x392a,	// (0x00022934) list_double2_large_graphic_pane_cp2

0x392a,	// (0x00022934) list_double2_pane_cp2_ParamLimits

0x392a,	// (0x00022934) list_double2_pane_cp2

0x392a,	// (0x00022934) list_double_graphic_pane_cp2_ParamLimits

0x392a,	// (0x00022934) list_double_graphic_pane_cp2

0x392a,	// (0x00022934) list_double_large_graphic_pane_cp2_ParamLimits

0x392a,	// (0x00022934) list_double_large_graphic_pane_cp2

0x392a,	// (0x00022934) list_double_number_pane_cp2_ParamLimits

0x392a,	// (0x00022934) list_double_number_pane_cp2

0x392a,	// (0x00022934) list_double_pane_cp2_ParamLimits

0x392a,	// (0x00022934) list_double_pane_cp2

0x731c,	// (0x00026326) list_single_2graphic_pane_cp2_ParamLimits

0x731c,	// (0x00026326) list_single_2graphic_pane_cp2

0x731c,	// (0x00026326) list_single_graphic_heading_pane_cp2_ParamLimits

0x731c,	// (0x00026326) list_single_graphic_heading_pane_cp2

0x731c,	// (0x00026326) list_single_graphic_pane_cp2_ParamLimits

0x731c,	// (0x00026326) list_single_graphic_pane_cp2

0x731c,	// (0x00026326) list_single_heading_pane_cp2_ParamLimits

0x731c,	// (0x00026326) list_single_heading_pane_cp2

0x393a,	// (0x00022944) list_single_large_graphic_pane_cp2_ParamLimits

0x393a,	// (0x00022944) list_single_large_graphic_pane_cp2

0x731c,	// (0x00026326) list_single_number_heading_pane_cp2_ParamLimits

0x731c,	// (0x00026326) list_single_number_heading_pane_cp2

0x731c,	// (0x00026326) list_single_number_pane_cp2_ParamLimits

0x731c,	// (0x00026326) list_single_number_pane_cp2

0x731c,	// (0x00026326) list_single_pane_cp2_ParamLimits

0x731c,	// (0x00026326) list_single_pane_cp2

0x39af,	// (0x000229b9) bg_popup_sub_pane_cp22

0x73f4,	// (0x000263fe) popup_side_volume_key_window_g1

0x7418,	// (0x00026422) popup_side_volume_key_window_t1

0x7434,	// (0x0002643e) volume_small_pane_cp1

0x1618,	// (0x00020622) bg_popup_sub_pane_cp24_ParamLimits

0x1618,	// (0x00020622) bg_popup_sub_pane_cp24

0x39df,	// (0x000229e9) fep_china_uni_candidate_pane_ParamLimits

0x39df,	// (0x000229e9) fep_china_uni_candidate_pane

0x39f3,	// (0x000229fd) fep_china_uni_entry_pane

0x3a03,	// (0x00022a0d) popup_fep_china_uni_window_g1

0x743c,	// (0x00026446) fep_china_uni_entry_pane_g1

0x7444,	// (0x0002644e) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0002e72c) fep_china_uni_entry_pane_g

0x3a1f,	// (0x00022a29) fep_entry_item_pane

0x3a29,	// (0x00022a33) fep_candidate_item_pane

0x744c,	// (0x00026456) fep_china_uni_candidate_pane_g1

0x3a31,	// (0x00022a3b) fep_china_uni_candidate_pane_g2

0x3a39,	// (0x00022a43) fep_china_uni_candidate_pane_g3

0x7454,	// (0x0002645e) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0002e731) fep_china_uni_candidate_pane_g

0x15c0,	// (0x000205ca) fep_entry_item_pane_g1

0x3a41,	// (0x00022a4b) fep_entry_item_pane_t1_ParamLimits

0x3a41,	// (0x00022a4b) fep_entry_item_pane_t1

0x3a57,	// (0x00022a61) fep_candidate_item_pane_t1_ParamLimits

0x3a57,	// (0x00022a61) fep_candidate_item_pane_t1

0x3a6c,	// (0x00022a76) fep_candidate_item_pane_t2_ParamLimits

0x3a6c,	// (0x00022a76) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0002e73a) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0002e73a) fep_candidate_item_pane_t

0x1626,	// (0x00020630) list_highlight_pane_cp31_ParamLimits

0x1626,	// (0x00020630) list_highlight_pane_cp31

0x3a7e,	// (0x00022a88) level_1_signal_lsc

0x3a87,	// (0x00022a91) level_2_signal_lsc

0x3a90,	// (0x00022a9a) level_3_signal_lsc

0x3a99,	// (0x00022aa3) level_4_signal_lsc

0x3aa2,	// (0x00022aac) level_5_signal_lsc

0x3aab,	// (0x00022ab5) level_6_signal_lsc

0x3ab4,	// (0x00022abe) level_7_signal_lsc

0x3ab4,	// (0x00022abe) level_1_battery_lsc

0x3abd,	// (0x00022ac7) level_2_battery_lsc

0x3ac6,	// (0x00022ad0) level_3_battery_lsc

0x3acf,	// (0x00022ad9) level_4_battery_lsc

0x3ad8,	// (0x00022ae2) level_5_battery_lsc

0x3ae1,	// (0x00022aeb) level_6_battery_lsc

0x3a7e,	// (0x00022a88) level_7_battery_lsc

0x3aea,	// (0x00022af4) scroll_handle_focus_pane_g1

0x3af3,	// (0x00022afd) scroll_handle_focus_pane_g2

0x3afc,	// (0x00022b06) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0002e73f) scroll_handle_focus_pane_g

0x5b12,	// (0x00024b1c) list_single_2graphic_pane_g1_ParamLimits

0x5b12,	// (0x00024b1c) list_single_2graphic_pane_g1

0x5487,	// (0x00024491) list_single_2graphic_pane_g2_ParamLimits

0x5487,	// (0x00024491) list_single_2graphic_pane_g2

0x540d,	// (0x00024417) list_single_2graphic_pane_g3_ParamLimits

0x540d,	// (0x00024417) list_single_2graphic_pane_g3

0x5b1e,	// (0x00024b28) list_single_2graphic_pane_g4_ParamLimits

0x5b1e,	// (0x00024b28) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0002e746) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0002e746) list_single_2graphic_pane_g

0x5b2a,	// (0x00024b34) list_single_2graphic_pane_t1_ParamLimits

0x5b2a,	// (0x00024b34) list_single_2graphic_pane_t1

0x5b58,	// (0x00024b62) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5b58,	// (0x00024b62) list_double2_graphic_large_graphic_pane_g1

0x56bd,	// (0x000246c7) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x56bd,	// (0x000246c7) list_double2_graphic_large_graphic_pane_g2

0x56ce,	// (0x000246d8) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x56ce,	// (0x000246d8) list_double2_graphic_large_graphic_pane_g3

0x5b68,	// (0x00024b72) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5b68,	// (0x00024b72) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0002e74f) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0002e74f) list_double2_graphic_large_graphic_pane_g

0x5b74,	// (0x00024b7e) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5b74,	// (0x00024b7e) list_double2_graphic_large_graphic_pane_t1

0x5b8a,	// (0x00024b94) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5b8a,	// (0x00024b94) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0002e758) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0002e758) list_double2_graphic_large_graphic_pane_t

0x76dd,	// (0x000266e7) popup_fast_swap_window_ParamLimits

0x76dd,	// (0x000266e7) popup_fast_swap_window

0x76f9,	// (0x00026703) popup_side_volume_key_window

0x7713,	// (0x0002671d) stacon_top_pane

0x771d,	// (0x00026727) status_pane_ParamLimits

0x771d,	// (0x00026727) status_pane

0x772b,	// (0x00026735) status_small_pane

0x15ca,	// (0x000205d4) control_pane

0x15ca,	// (0x000205d4) stacon_bottom_pane

0x1a1c,	// (0x00020a26) scroll_pane_cp121

0x1a13,	// (0x00020a1d) set_content_pane

0x745c,	// (0x00026466) bg_active_tab_pane_g1_cp1

0x7465,	// (0x0002646f) bg_active_tab_pane_g2_cp1

0x746e,	// (0x00026478) bg_active_tab_pane_g3_cp1

0x745c,	// (0x00026466) bg_passive_tab_pane_g1_cp1

0x7465,	// (0x0002646f) bg_passive_tab_pane_g2_cp1

0x746e,	// (0x00026478) bg_passive_tab_pane_g3_cp1

0x7477,	// (0x00026481) bg_active_tab_pane_g1_cp2

0x7465,	// (0x0002646f) bg_active_tab_pane_g2_cp2

0x7480,	// (0x0002648a) bg_active_tab_pane_g3_cp2

0x7477,	// (0x00026481) bg_passive_tab_pane_g1_cp2

0x7465,	// (0x0002646f) bg_passive_tab_pane_g2_cp2

0x7480,	// (0x0002648a) bg_passive_tab_pane_g3_cp2

0x7489,	// (0x00026493) bg_active_tab_pane_g1_cp3

0x7465,	// (0x0002646f) bg_active_tab_pane_g2_cp3

0x7492,	// (0x0002649c) bg_active_tab_pane_g3_cp3

0x7489,	// (0x00026493) bg_passive_tab_pane_g1_cp3

0x7465,	// (0x0002646f) bg_passive_tab_pane_g2_cp3

0x7492,	// (0x0002649c) bg_passive_tab_pane_g3_cp3

0x749b,	// (0x000264a5) bg_active_tab_pane_g1_cp4

0x7465,	// (0x0002646f) bg_active_tab_pane_g2_cp4

0x74a6,	// (0x000264b0) bg_active_tab_pane_g3_cp4

0x749b,	// (0x000264a5) bg_passive_tab_pane_g1_cp4

0x7465,	// (0x0002646f) bg_passive_tab_pane_g2_cp4

0x74a6,	// (0x000264b0) bg_passive_tab_pane_g3_cp4

0x7630,	// (0x0002663a) bg_active_tab_pane_g1_cp5

0x7465,	// (0x0002646f) bg_active_tab_pane_g2_cp5

0x7639,	// (0x00026643) bg_active_tab_pane_g3_cp5

0x7630,	// (0x0002663a) bg_passive_tab_pane_g1_cp5

0x7465,	// (0x0002646f) bg_passive_tab_pane_g2_cp5

0x7639,	// (0x00026643) bg_passive_tab_pane_g3_cp5

0x7642,	// (0x0002664c) list_set_graphic_pane_ParamLimits

0x7642,	// (0x0002664c) list_set_graphic_pane

0x15ca,	// (0x000205d4) bg_set_opt_pane_cp4

0x7662,	// (0x0002666c) list_set_graphic_pane_g1_ParamLimits

0x7662,	// (0x0002666c) list_set_graphic_pane_g1

0x766e,	// (0x00026678) list_set_graphic_pane_g2_ParamLimits

0x766e,	// (0x00026678) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0002e75d) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0002e75d) list_set_graphic_pane_g

0x0009,

0xfad8,	// (0x0002eae2) volume_small_pane_cp_g

0x7690,	// (0x0002669a) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x7690,	// (0x0002669a) list_double2_large_graphic_pane_g1_cp2

0x769c,	// (0x000266a6) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x769c,	// (0x000266a6) list_double2_large_graphic_pane_g2_cp2

0x76ad,	// (0x000266b7) list_double2_large_graphic_pane_g3_cp2

0x76b5,	// (0x000266bf) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x76b5,	// (0x000266bf) list_double2_large_graphic_pane_t1_cp2

0x76cb,	// (0x000266d5) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x76cb,	// (0x000266d5) list_double2_large_graphic_pane_t2_cp2

0xadba,	// (0x00029dc4) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xadba,	// (0x00029dc4) list_double_large_graphic_pane_g1_cp2

0xadcb,	// (0x00029dd5) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xadcb,	// (0x00029dd5) list_double_large_graphic_pane_g2_cp2

0x7838,	// (0x00026842) list_double_large_graphic_pane_g3_cp2

0xaddc,	// (0x00029de6) list_double_large_graphic_pane_g4_cp

0xade4,	// (0x00029dee) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xade4,	// (0x00029dee) list_double_large_graphic_pane_t1_cp2

0xadfb,	// (0x00029e05) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xadfb,	// (0x00029e05) list_double_large_graphic_pane_t2_cp2

0x7736,	// (0x00026740) list_double2_graphic_pane_g1_cp2_ParamLimits

0x7736,	// (0x00026740) list_double2_graphic_pane_g1_cp2

0x7744,	// (0x0002674e) list_double2_graphic_pane_g2_cp2_ParamLimits

0x7744,	// (0x0002674e) list_double2_graphic_pane_g2_cp2

0x7755,	// (0x0002675f) list_double2_graphic_pane_g3_cp2

0x775f,	// (0x00026769) list_double2_graphic_pane_t1_cp2_ParamLimits

0x775f,	// (0x00026769) list_double2_graphic_pane_t1_cp2

0x7775,	// (0x0002677f) list_double2_graphic_pane_t2_cp2_ParamLimits

0x7775,	// (0x0002677f) list_double2_graphic_pane_t2_cp2

0x1d2a,	// (0x00020d34) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1d2a,	// (0x00020d34) list_single_number_heading_pane_g1_cp2

0x7787,	// (0x00026791) list_single_number_heading_pane_g2_cp2

0x778f,	// (0x00026799) list_single_number_heading_pane_t1_cp2_ParamLimits

0x778f,	// (0x00026799) list_single_number_heading_pane_t1_cp2

0x77a5,	// (0x000267af) list_single_number_heading_pane_t2_cp2_ParamLimits

0x77a5,	// (0x000267af) list_single_number_heading_pane_t2_cp2

0x77b7,	// (0x000267c1) list_single_number_heading_pane_t3_cp2_ParamLimits

0x77b7,	// (0x000267c1) list_single_number_heading_pane_t3_cp2

0x1d2a,	// (0x00020d34) list_single_heading_pane_g1_cp2_ParamLimits

0x1d2a,	// (0x00020d34) list_single_heading_pane_g1_cp2

0x7787,	// (0x00026791) list_single_heading_pane_g2_cp2

0x778f,	// (0x00026799) list_single_heading_pane_t1_cp2_ParamLimits

0x778f,	// (0x00026799) list_single_heading_pane_t1_cp2

0xabc4,	// (0x00029bce) list_single_heading_pane_t2_cp2_ParamLimits

0xabc4,	// (0x00029bce) list_single_heading_pane_t2_cp2

0xab0c,	// (0x00029b16) list_double_graphic_pane_g1_cp2_ParamLimits

0xab0c,	// (0x00029b16) list_double_graphic_pane_g1_cp2

0xab18,	// (0x00029b22) list_double_graphic_pane_g2_cp2_ParamLimits

0xab18,	// (0x00029b22) list_double_graphic_pane_g2_cp2

0xab27,	// (0x00029b31) list_double_graphic_pane_g3_cp2

0xab2f,	// (0x00029b39) list_double_graphic_pane_t1_cp2_ParamLimits

0xab2f,	// (0x00029b39) list_double_graphic_pane_t1_cp2

0xab45,	// (0x00029b4f) list_double_graphic_pane_t2_cp2_ParamLimits

0xab45,	// (0x00029b4f) list_double_graphic_pane_t2_cp2

0x782c,	// (0x00026836) list_double_number_pane_g1_cp2_ParamLimits

0x782c,	// (0x00026836) list_double_number_pane_g1_cp2

0x7838,	// (0x00026842) list_double_number_pane_g2_cp2

0xaad0,	// (0x00029ada) list_double_number_pane_t1_cp2_ParamLimits

0xaad0,	// (0x00029ada) list_double_number_pane_t1_cp2

0xaae4,	// (0x00029aee) list_double_number_pane_t2_cp2_ParamLimits

0xaae4,	// (0x00029aee) list_double_number_pane_t2_cp2

0xaafa,	// (0x00029b04) list_double_number_pane_t3_cp2_ParamLimits

0xaafa,	// (0x00029b04) list_double_number_pane_t3_cp2

0xa9b9,	// (0x000299c3) list_single_graphic_pane_g1_cp2_ParamLimits

0xa9b9,	// (0x000299c3) list_single_graphic_pane_g1_cp2

0x7890,	// (0x0002689a) list_single_graphic_pane_g2_cp2_ParamLimits

0x7890,	// (0x0002689a) list_single_graphic_pane_g2_cp2

0x789c,	// (0x000268a6) list_single_graphic_pane_g3_cp2

0xa98f,	// (0x00029999) list_single_graphic_pane_t1_cp2_ParamLimits

0xa98f,	// (0x00029999) list_single_graphic_pane_t1_cp2

0x7890,	// (0x0002689a) list_single_number_pane_g1_cp2_ParamLimits

0x7890,	// (0x0002689a) list_single_number_pane_g1_cp2

0x789c,	// (0x000268a6) list_single_number_pane_g2_cp2

0xa98f,	// (0x00029999) list_single_number_pane_t1_cp2_ParamLimits

0xa98f,	// (0x00029999) list_single_number_pane_t1_cp2

0xa9a5,	// (0x000299af) list_single_number_pane_t2_cp2_ParamLimits

0xa9a5,	// (0x000299af) list_single_number_pane_t2_cp2

0x769c,	// (0x000266a6) list_double2_pane_g1_cp2_ParamLimits

0x769c,	// (0x000266a6) list_double2_pane_g1_cp2

0x76ad,	// (0x000266b7) list_double2_pane_g2_cp2

0x7804,	// (0x0002680e) list_double2_pane_t1_cp2_ParamLimits

0x7804,	// (0x0002680e) list_double2_pane_t1_cp2

0x781a,	// (0x00026824) list_double2_pane_t2_cp2_ParamLimits

0x781a,	// (0x00026824) list_double2_pane_t2_cp2

0x782c,	// (0x00026836) list_double_pane_g1_cp2_ParamLimits

0x782c,	// (0x00026836) list_double_pane_g1_cp2

0x7838,	// (0x00026842) list_double_pane_g2_cp2

0x7840,	// (0x0002684a) list_double_pane_t1_cp2_ParamLimits

0x7840,	// (0x0002684a) list_double_pane_t1_cp2

0x7856,	// (0x00026860) list_double_pane_t2_cp2_ParamLimits

0x7856,	// (0x00026860) list_double_pane_t2_cp2

0x7880,	// (0x0002688a) list_single_pane_cp2_g3

0x7890,	// (0x0002689a) list_single_pane_g1_cp2_ParamLimits

0x7890,	// (0x0002689a) list_single_pane_g1_cp2

0x789c,	// (0x000268a6) list_single_pane_g2_cp2

0x78a4,	// (0x000268ae) list_single_pane_t1_cp2_ParamLimits

0x78a4,	// (0x000268ae) list_single_pane_t1_cp2

0x78bc,	// (0x000268c6) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x78bc,	// (0x000268c6) list_single_large_graphic_pane_g1_cp2

0x78c8,	// (0x000268d2) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x78c8,	// (0x000268d2) list_single_large_graphic_pane_g2_cp2

0x78d4,	// (0x000268de) list_single_large_graphic_pane_g3_cp2

0x78dc,	// (0x000268e6) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x78dc,	// (0x000268e6) list_single_large_graphic_pane_g4_cp1

0x78f6,	// (0x00026900) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x78f6,	// (0x00026900) list_single_large_graphic_pane_t1_cp2

0xa95b,	// (0x00029965) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa95b,	// (0x00029965) list_single_graphic_heading_pane_g1_cp2

0xa928,	// (0x00029932) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa928,	// (0x00029932) list_single_graphic_heading_pane_g4_cp2

0x789c,	// (0x000268a6) list_single_graphic_heading_pane_g5_cp2

0xa967,	// (0x00029971) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa967,	// (0x00029971) list_single_graphic_heading_pane_t1_cp2

0xa97d,	// (0x00029987) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa97d,	// (0x00029987) list_single_graphic_heading_pane_t2_cp2

0xa91c,	// (0x00029926) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa91c,	// (0x00029926) list_single_2graphic_pane_g1_cp2

0xa928,	// (0x00029932) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa928,	// (0x00029932) list_single_2graphic_pane_g2_cp2

0x789c,	// (0x000268a6) list_single_2graphic_pane_g3_cp2

0xa939,	// (0x00029943) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa939,	// (0x00029943) list_single_2graphic_pane_g4_cp2

0xa945,	// (0x0002994f) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa945,	// (0x0002994f) list_single_2graphic_pane_t1_cp2

0x15c0,	// (0x000205ca) list_highlight_pane_g10_cp1

0xa504,	// (0x0002950e) list_highlight_pane_g1_cp1

0xa50c,	// (0x00029516) list_highlight_pane_g2_cp1

0xa514,	// (0x0002951e) list_highlight_pane_g3_cp1

0xa51c,	// (0x00029526) list_highlight_pane_g4_cp1

0xa524,	// (0x0002952e) list_highlight_pane_g5_cp1

0xa52c,	// (0x00029536) list_highlight_pane_g6_cp1

0xa534,	// (0x0002953e) list_highlight_pane_g7_cp1

0xa53c,	// (0x00029546) list_highlight_pane_g8_cp1

0xa544,	// (0x0002954e) list_highlight_pane_g9_cp1

0xa42c,	// (0x00029436) form_field_slider_pane_t3

0xa43a,	// (0x00029444) form_field_slider_pane_t4

0xa448,	// (0x00029452) slider_form_pane_ParamLimits

0xa448,	// (0x00029452) slider_form_pane

0x15ca,	// (0x000205d4) control_abbreviations

0x15ca,	// (0x000205d4) control_conventions

0x15ca,	// (0x000205d4) control_definitions

0x15ca,	// (0x000205d4) format_table_attribute

0xac0e,	// (0x00029c18) bg_popup_preview_window_pane_g9

0x15ca,	// (0x000205d4) format_table_data2

0x15ca,	// (0x000205d4) format_table_data3

0x15ca,	// (0x000205d4) format_table_data_example

0x0008,

0x15ca,	// (0x000205d4) intro_purpose

0xf8ea,	// (0x0002e8f4) bg_popup_preview_window_pane_g

0x15ca,	// (0x000205d4) texts_category

0x15ca,	// (0x000205d4) texts_graphics

0x790c,	// (0x00026916) text_digital

0x791b,	// (0x00026925) text_primary

0x792a,	// (0x00026934) text_primary_small

0x7939,	// (0x00026943) text_secondary

0x7948,	// (0x00026952) text_title

0xb34c,	// (0x0002a356) bg_passive_tab_pane_g1_cp3_srt

0x7465,	// (0x0002646f) bg_passive_tab_pane_g2_cp3_srt

0xb355,	// (0x0002a35f) bg_passive_tab_pane_g3_cp3_srt

0x1626,	// (0x00020630) bg_active_tab_pane_cp3_srt_ParamLimits

0x1626,	// (0x00020630) bg_active_tab_pane_cp3_srt

0xb35e,	// (0x0002a368) tabs_4_active_pane_srt_g1

0xb366,	// (0x0002a370) tabs_4_active_pane_srt_t1_ParamLimits

0xb366,	// (0x0002a370) tabs_4_active_pane_srt_t1

0xb34c,	// (0x0002a356) bg_active_tab_pane_g1_cp3_copy1

0x7465,	// (0x0002646f) bg_active_tab_pane_g2_cp3_copy1

0xb355,	// (0x0002a35f) bg_active_tab_pane_g3_cp3_copy1

0x1626,	// (0x00020630) tabs_2_long_active_pane_srt_ParamLimits

0x1626,	// (0x00020630) tabs_2_long_active_pane_srt

0x1626,	// (0x00020630) tabs_2_long_passive_pane_srt_ParamLimits

0x1626,	// (0x00020630) tabs_2_long_passive_pane_srt

0x6fb8,	// (0x00025fc2) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6fb8,	// (0x00025fc2) bg_passive_tab_pane_cp4_srt

0xb03c,	// (0x0002a046) bg_passive_tab_pane_g1_cp4_srt

0x7465,	// (0x0002646f) bg_passive_tab_pane_g2_cp4_srt

0xb045,	// (0x0002a04f) bg_passive_tab_pane_g3_cp4_srt

0x1d36,	// (0x00020d40) bg_active_tab_pane_cp4_srt_ParamLimits

0x1d36,	// (0x00020d40) bg_active_tab_pane_cp4_srt

0xb04e,	// (0x0002a058) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb04e,	// (0x0002a058) tabs_2_long_active_pane_srt_t1

0xb03c,	// (0x0002a046) bg_active_tab_pane_g1_cp4_srt

0x7465,	// (0x0002646f) bg_active_tab_pane_g2_cp4_srt

0xb045,	// (0x0002a04f) bg_active_tab_pane_g3_cp4_srt

0x1618,	// (0x00020622) tabs_3_long_active_pane_srt_ParamLimits

0x1618,	// (0x00020622) tabs_3_long_active_pane_srt

0x1618,	// (0x00020622) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x1618,	// (0x00020622) tabs_3_long_passive_pane_cp_srt

0x1618,	// (0x00020622) tabs_3_long_passive_pane_srt_ParamLimits

0x1618,	// (0x00020622) tabs_3_long_passive_pane_srt

0x6fb8,	// (0x00025fc2) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6fb8,	// (0x00025fc2) bg_passive_tab_pane_cp5_srt

0x7630,	// (0x0002663a) bg_passive_tab_pane_g1_cp5_srt

0x7465,	// (0x0002646f) bg_passive_tab_pane_g2_cp5_srt

0x7639,	// (0x00026643) bg_passive_tab_pane_g3_cp5_srt

0x1d36,	// (0x00020d40) bg_active_tab_pane_cp5_srt_ParamLimits

0x1d36,	// (0x00020d40) bg_active_tab_pane_cp5_srt

0xb02a,	// (0x0002a034) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb02a,	// (0x0002a034) tabs_3_long_active_pane_srt_t1

0x7630,	// (0x0002663a) bg_active_tab_pane_g1_cp5_srt

0x7465,	// (0x0002646f) bg_active_tab_pane_g2_cp5_srt

0x7639,	// (0x00026643) bg_active_tab_pane_g3_cp5_srt

0xb01c,	// (0x0002a026) navi_text_pane_srt_t1

0xb014,	// (0x0002a01e) navi_icon_pane_srt_g1

0x7bb6,	// (0x00026bc0) midp_editing_number_pane_srt

0x7957,	// (0x00026961) midp_ticker_pane_srt

0x7bbe,	// (0x00026bc8) midp_ticker_pane_srt_g1

0x7bc6,	// (0x00026bd0) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0002e77c) midp_ticker_pane_srt_g

0x7bce,	// (0x00026bd8) midp_ticker_pane_srt_t1

0xb005,	// (0x0002a00f) midp_editing_number_pane_t1_copy1

0x6fb8,	// (0x00025fc2) listscroll_midp_pane

0x6fb8,	// (0x00025fc2) midp_form_pane

0x79c5,	// (0x000269cf) midp_info_popup_window_ParamLimits

0x79c5,	// (0x000269cf) midp_info_popup_window

0x1b4b,	// (0x00020b55) bg_popup_sub_pane_cp50_ParamLimits

0x1b4b,	// (0x00020b55) bg_popup_sub_pane_cp50

0xa14c,	// (0x00029156) listscroll_midp_info_pane_ParamLimits

0xa14c,	// (0x00029156) listscroll_midp_info_pane

0xa134,	// (0x0002913e) listscroll_form_midp_pane_ParamLimits

0xa134,	// (0x0002913e) listscroll_form_midp_pane

0xa140,	// (0x0002914a) scroll_bar_cp050

0xa114,	// (0x0002911e) list_midp_pane

0xbd93,	// (0x0002ad9d) signal_pane_g2_cp

0xa04e,	// (0x00029058) listscroll_midp_info_pane_t1_ParamLimits

0xa04e,	// (0x00029058) listscroll_midp_info_pane_t1

0xa066,	// (0x00029070) listscroll_midp_info_pane_t2_ParamLimits

0xa066,	// (0x00029070) listscroll_midp_info_pane_t2

0xa0a4,	// (0x000290ae) listscroll_midp_info_pane_t3_ParamLimits

0xa0a4,	// (0x000290ae) listscroll_midp_info_pane_t3

0xa0de,	// (0x000290e8) listscroll_midp_info_pane_t4_ParamLimits

0xa0de,	// (0x000290e8) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0002e82f) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0002e82f) listscroll_midp_info_pane_t

0x1bc1,	// (0x00020bcb) scroll_pane_cp21

0x9fee,	// (0x00028ff8) form_midp_field_choice_group_pane

0x9ff7,	// (0x00029001) form_midp_field_text_pane

0xa034,	// (0x0002903e) form_midp_field_time_pane

0xa03c,	// (0x00029046) form_midp_gauge_slider_pane

0xa045,	// (0x0002904f) form_midp_gauge_wait_pane

0x15ca,	// (0x000205d4) form_midp_image_pane

0x5d03,	// (0x00024d0d) list_single_midp_pane_ParamLimits

0x5d03,	// (0x00024d0d) list_single_midp_pane

0x9fa3,	// (0x00028fad) form_midp_field_text_pane_t1

0x9d6d,	// (0x00028d77) input_focus_pane_cp050

0x9fdd,	// (0x00028fe7) list_midp_form_text_pane

0x9f72,	// (0x00028f7c) form_midp_field_choice_group_pane_t1

0x9f80,	// (0x00028f8a) input_focus_pane_cp051

0x9f94,	// (0x00028f9e) list_midp_choice_pane

0x15ca,	// (0x000205d4) status_idle_pane

0x9f56,	// (0x00028f60) form_midp_field_time_pane_t1

0x15c0,	// (0x000205ca) wait_anim_pane_g2_copy1

0x9f64,	// (0x00028f6e) form_midp_field_time_pane_t2

0x0001,

0x7a75,	// (0x00026a7f) aid_navinavi_width_2_pane

0xf820,	// (0x0002e82a) form_midp_field_time_pane_t

0x15ca,	// (0x000205d4) input_focus_pane_cp052

0x15ca,	// (0x000205d4) bg_input_focus_pane_cp040

0x9f16,	// (0x00028f20) form_midp_gauge_slider_pane_t1

0x9f24,	// (0x00028f2e) form_midp_gauge_slider_pane_t2

0x9f32,	// (0x00028f3c) form_midp_gauge_slider_pane_t3

0x9f40,	// (0x00028f4a) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0002e821) form_midp_gauge_slider_pane_t

0x9f4e,	// (0x00028f58) form_midp_slider_pane

0x1626,	// (0x00020630) bg_input_focus_pane_cp041_ParamLimits

0x1626,	// (0x00020630) bg_input_focus_pane_cp041

0x9ee3,	// (0x00028eed) form_midp_gauge_wait_pane_t1_ParamLimits

0x9ee3,	// (0x00028eed) form_midp_gauge_wait_pane_t1

0x9ef5,	// (0x00028eff) form_midp_gauge_wait_pane_t2_ParamLimits

0x9ef5,	// (0x00028eff) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0002e81c) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0002e81c) form_midp_gauge_wait_pane_t

0x9f07,	// (0x00028f11) form_midp_wait_pane_ParamLimits

0x9f07,	// (0x00028f11) form_midp_wait_pane

0x9ead,	// (0x00028eb7) form_midp_image_pane_g1

0x9eb6,	// (0x00028ec0) form_midp_image_pane_t1

0x9ec5,	// (0x00028ecf) form_midp_image_pane_t2

0x9ed4,	// (0x00028ede) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0002e815) form_midp_image_pane_t

0x9ea4,	// (0x00028eae) list_single_midp_pane_g1

0x5cf4,	// (0x00024cfe) list_single_midp_pane_t1

0x9e7b,	// (0x00028e85) list_midp_form_item_pane_ParamLimits

0x9e7b,	// (0x00028e85) list_midp_form_item_pane

0x7a1d,	// (0x00026a27) list_midp_form_item_pane_t1

0x7a2c,	// (0x00026a36) midp_ticker_pane_g1

0x7a38,	// (0x00026a42) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0002e762) midp_ticker_pane_g

0x7a44,	// (0x00026a4e) midp_ticker_pane_t1

0xb256,	// (0x0002a260) midp_editing_number_pane_t1

0xb234,	// (0x0002a23e) midp_editing_number_pane

0xb243,	// (0x0002a24d) midp_ticker_pane

0xaff5,	// (0x00029fff) ai_message_heading_pane

0x15ca,	// (0x000205d4) bg_popup_window_pane_cp14

0xaffd,	// (0x0002a007) listscroll_ai_message_pane

0xaf7f,	// (0x00029f89) ai_message_heading_pane_g1_ParamLimits

0xaf7f,	// (0x00029f89) ai_message_heading_pane_g1

0xaf8b,	// (0x00029f95) ai_message_heading_pane_g2_ParamLimits

0xaf8b,	// (0x00029f95) ai_message_heading_pane_g2

0xaf97,	// (0x00029fa1) ai_message_heading_pane_g3_ParamLimits

0xaf97,	// (0x00029fa1) ai_message_heading_pane_g3

0xafa3,	// (0x00029fad) ai_message_heading_pane_g4_ParamLimits

0xafa3,	// (0x00029fad) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0002e956) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0002e956) ai_message_heading_pane_g

0xafaf,	// (0x00029fb9) ai_message_heading_pane_t1_ParamLimits

0xafaf,	// (0x00029fb9) ai_message_heading_pane_t1

0xafc9,	// (0x00029fd3) ai_message_heading_pane_t2_ParamLimits

0xafc9,	// (0x00029fd3) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0002e95f) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0002e95f) ai_message_heading_pane_t

0xafdb,	// (0x00029fe5) bg_popup_heading_pane_cp1_ParamLimits

0xafdb,	// (0x00029fe5) bg_popup_heading_pane_cp1

0xaf6d,	// (0x00029f77) list_ai_message_pane_ParamLimits

0xaf6d,	// (0x00029f77) list_ai_message_pane

0x1bc1,	// (0x00020bcb) scroll_pane_cp10

0xaf09,	// (0x00029f13) list_ai_message_pane_g1

0xaf11,	// (0x00029f1b) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0002e933) list_ai_message_pane_g

0xaf19,	// (0x00029f23) list_ai_message_pane_t1_ParamLimits

0xaf19,	// (0x00029f23) list_ai_message_pane_t1

0xaf2e,	// (0x00029f38) list_ai_message_pane_t2_ParamLimits

0xaf2e,	// (0x00029f38) list_ai_message_pane_t2

0xaf43,	// (0x00029f4d) list_ai_message_pane_t3_ParamLimits

0xaf43,	// (0x00029f4d) list_ai_message_pane_t3

0xaf58,	// (0x00029f62) list_ai_message_pane_t4_ParamLimits

0xaf58,	// (0x00029f62) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0002e938) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0002e938) list_ai_message_pane_t

0xaef4,	// (0x00029efe) cell_ai_soft_ind_pane_ParamLimits

0xaef4,	// (0x00029efe) cell_ai_soft_ind_pane

0x7a56,	// (0x00026a60) cell_ai_soft_ind_pane_g1_ParamLimits

0x7a56,	// (0x00026a60) cell_ai_soft_ind_pane_g1

0x15ca,	// (0x000205d4) grid_highlight_cp1

0x7a63,	// (0x00026a6d) text_secondary_cp56_ParamLimits

0x7a63,	// (0x00026a6d) text_secondary_cp56

0xaec9,	// (0x00029ed3) example_general_pane_ParamLimits

0xaec9,	// (0x00029ed3) example_general_pane

0xaed5,	// (0x00029edf) example_parent_pane_g1_ParamLimits

0xaed5,	// (0x00029edf) example_parent_pane_g1

0xaee1,	// (0x00029eeb) example_parent_pane_t1_ParamLimits

0xaee1,	// (0x00029eeb) example_parent_pane_t1

0x8233,	// (0x0002723d) popup_preview_text_window_ParamLimits

0x8233,	// (0x0002723d) popup_preview_text_window

0x7888,	// (0x00026892) list_single_pane_cp2_g4

0x1812,	// (0x0002081c) bg_popup_preview_window_pane_ParamLimits

0x1812,	// (0x0002081c) bg_popup_preview_window_pane

0xac16,	// (0x00029c20) popup_preview_text_window_t1_ParamLimits

0xac16,	// (0x00029c20) popup_preview_text_window_t1

0xac34,	// (0x00029c3e) popup_preview_text_window_t2_ParamLimits

0xac34,	// (0x00029c3e) popup_preview_text_window_t2

0xac7d,	// (0x00029c87) popup_preview_text_window_t3_ParamLimits

0xac7d,	// (0x00029c87) popup_preview_text_window_t3

0xacc2,	// (0x00029ccc) popup_preview_text_window_t4_ParamLimits

0xacc2,	// (0x00029ccc) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0002e907) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0002e907) popup_preview_text_window_t

0xad40,	// (0x00029d4a) scroll_pane_cp11

0x897e,	// (0x00027988) bg_popup_preview_window_pane_g1

0xabd6,	// (0x00029be0) bg_popup_preview_window_pane_g2

0xabde,	// (0x00029be8) bg_popup_preview_window_pane_g3

0xabe6,	// (0x00029bf0) bg_popup_preview_window_pane_g4

0xabee,	// (0x00029bf8) bg_popup_preview_window_pane_g5

0xabf6,	// (0x00029c00) bg_popup_preview_window_pane_g6

0xabfe,	// (0x00029c08) bg_popup_preview_window_pane_g7

0xac06,	// (0x00029c10) bg_popup_preview_window_pane_g8

0x6573,	// (0x0002557d) aid_popup_width_pane

0x8211,	// (0x0002721b) popup_midp_note_alarm_window_ParamLimits

0x8211,	// (0x0002721b) popup_midp_note_alarm_window

0x1a50,	// (0x00020a5a) data_form_pane_ParamLimits

0x5965,	// (0x0002496f) form_field_data_pane_g1

0x596f,	// (0x00024979) form_field_data_pane_t1_ParamLimits

0x1a5c,	// (0x00020a66) input_focus_pane_ParamLimits

0x5987,	// (0x00024991) data_form_wide_pane_ParamLimits

0x5998,	// (0x000249a2) form_field_data_wide_pane_g1

0x59a4,	// (0x000249ae) form_field_data_wide_pane_t1_ParamLimits

0x18e6,	// (0x000208f0) input_focus_pane_cp6_ParamLimits

0x6f5c,	// (0x00025f66) input_popup_find_pane_g1_ParamLimits

0x6f5c,	// (0x00025f66) input_popup_find_pane_g1

0x70ee,	// (0x000260f8) aid_navi_side_left_pane

0x7103,	// (0x0002610d) aid_navi_side_right_pane

0xa5ff,	// (0x00029609) bg_popup_window_pane_cp30_ParamLimits

0xa5ff,	// (0x00029609) bg_popup_window_pane_cp30

0xa679,	// (0x00029683) popup_midp_note_alarm_window_g1_ParamLimits

0xa679,	// (0x00029683) popup_midp_note_alarm_window_g1

0xa6a9,	// (0x000296b3) popup_midp_note_alarm_window_t1_ParamLimits

0xa6a9,	// (0x000296b3) popup_midp_note_alarm_window_t1

0xa74a,	// (0x00029754) popup_midp_note_alarm_window_t2_ParamLimits

0xa74a,	// (0x00029754) popup_midp_note_alarm_window_t2

0xa7f8,	// (0x00029802) popup_midp_note_alarm_window_t3_ParamLimits

0xa7f8,	// (0x00029802) popup_midp_note_alarm_window_t3

0xa820,	// (0x0002982a) popup_midp_note_alarm_window_t4_ParamLimits

0xa820,	// (0x0002982a) popup_midp_note_alarm_window_t4

0xa840,	// (0x0002984a) popup_midp_note_alarm_window_t5_ParamLimits

0xa840,	// (0x0002984a) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0002e8a4) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0002e8a4) popup_midp_note_alarm_window_t

0xa8ec,	// (0x000298f6) wait_bar_pane_cp1_ParamLimits

0xa8ec,	// (0x000298f6) wait_bar_pane_cp1

0x15ca,	// (0x000205d4) wait_anim_pane_copy1

0x15ca,	// (0x000205d4) wait_border_pane_copy1

0xa2f5,	// (0x000292ff) wait_border_pane_g1_copy1

0x59be,	// (0x000249c8) form_field_popup_pane_g1

0x59c6,	// (0x000249d0) form_field_popup_pane_t1_ParamLimits

0x1a5c,	// (0x00020a66) input_focus_pane_cp7_ParamLimits

0x1a9e,	// (0x00020aa8) list_form_pane_ParamLimits

0x59de,	// (0x000249e8) form_field_popup_wide_pane_g1

0x59e6,	// (0x000249f0) form_field_popup_wide_pane_t1_ParamLimits

0x1a5c,	// (0x00020a66) input_focus_pane_cp8_ParamLimits

0x1ac7,	// (0x00020ad1) list_form_wide_pane_ParamLimits

0xb3e4,	// (0x0002a3ee) aid_size_cell_graphic_pane

0x5a70,	// (0x00024a7a) data_form_pane_t1_ParamLimits

0x5d4a,	// (0x00024d54) data_form_wide_pane_t1_ParamLimits

0x8518,	// (0x00027522) bg_status_flat_pane

0x6972,	// (0x0002597c) title_pane_t1_ParamLimits

0x15e0,	// (0x000205ea) title_pane_t2_ParamLimits

0x1606,	// (0x00020610) title_pane_t3_ParamLimits

0xf557,	// (0x0002e561) title_pane_t_ParamLimits

0x3869,	// (0x00022873) level_1_signal_ParamLimits

0x3876,	// (0x00022880) level_2_signal_ParamLimits

0x3883,	// (0x0002288d) level_3_signal_ParamLimits

0x3890,	// (0x0002289a) level_4_signal_ParamLimits

0x389d,	// (0x000228a7) level_5_signal_ParamLimits

0x38aa,	// (0x000228b4) level_6_signal_ParamLimits

0x38b7,	// (0x000228c1) level_7_signal_ParamLimits

0x3869,	// (0x00022873) level_1_battery_ParamLimits

0x3876,	// (0x00022880) level_2_battery_ParamLimits

0x3883,	// (0x0002288d) level_3_battery_ParamLimits

0x3890,	// (0x0002289a) level_4_battery_ParamLimits

0x389d,	// (0x000228a7) level_5_battery_ParamLimits

0x38aa,	// (0x000228b4) level_6_battery_ParamLimits

0x38b7,	// (0x000228c1) level_7_battery_ParamLimits

0xa504,	// (0x0002950e) bg_status_flat_pane_g1

0xa50c,	// (0x00029516) bg_status_flat_pane_g2

0xa514,	// (0x0002951e) bg_status_flat_pane_g3

0xa51c,	// (0x00029526) bg_status_flat_pane_g4

0xa524,	// (0x0002952e) bg_status_flat_pane_g5

0xa52c,	// (0x00029536) bg_status_flat_pane_g6

0xa534,	// (0x0002953e) bg_status_flat_pane_g7

0x69e2,	// (0x000259ec) tabs_3_active_pane_t1_ParamLimits

0x69e2,	// (0x000259ec) tabs_3_passive_pane_t1_ParamLimits

0x69fc,	// (0x00025a06) tabs_4_active_pane_t1_ParamLimits

0x69fc,	// (0x00025a06) tabs_4_1_passive_pane_t1_ParamLimits

0x6f93,	// (0x00025f9d) tabs_2_active_pane_t1_ParamLimits

0x6f93,	// (0x00025f9d) tabs_2_passive_pane_t1_ParamLimits

0x1d36,	// (0x00020d40) bg_active_tab_pane_cp4_ParamLimits

0x6fa5,	// (0x00025faf) tabs_2_long_active_pane_t1_ParamLimits

0x6fb8,	// (0x00025fc2) bg_passive_tab_pane_cp4_ParamLimits

0x8a13,	// (0x00027a1d) list_single_midp_graphic_pane_t1_ParamLimits

0x1d36,	// (0x00020d40) bg_active_tab_pane_cp5_ParamLimits

0x6fc4,	// (0x00025fce) tabs_3_long_active_pane_t1_ParamLimits

0x6fb8,	// (0x00025fc2) bg_passive_tab_pane_cp5_ParamLimits

0x8a13,	// (0x00027a1d) list_single_midp_graphic_pane_t1

0x8518,	// (0x00027522) bg_status_flat_pane_ParamLimits

0x85e1,	// (0x000275eb) indicator_pane_cp2_ParamLimits

0x85e1,	// (0x000275eb) indicator_pane_cp2

0x870c,	// (0x00027716) navi_pane_srt_ParamLimits

0x870c,	// (0x00027716) navi_pane_srt

0x8730,	// (0x0002773a) popup_clock_digital_analogue_window_cp1

0x1684,	// (0x0002068e) indicator_pane_t1

0x7957,	// (0x00026961) copy_highlight_pane

0x7957,	// (0x00026961) cursor_graphics_pane

0x7957,	// (0x00026961) graphic_within_text_pane

0x7957,	// (0x00026961) link_highlight_pane

0xad03,	// (0x00029d0d) popup_preview_text_window_t5_ParamLimits

0xad03,	// (0x00029d0d) popup_preview_text_window_t5

0x7a7d,	// (0x00026a87) cursor_digital_pane

0x7a7d,	// (0x00026a87) cursor_primary_pane

0x7a8e,	// (0x00026a98) cursor_primary_small_pane

0x7a96,	// (0x00026aa0) cursor_secondary_pane

0x7a9e,	// (0x00026aa8) cursor_title_pane

0x7a7d,	// (0x00026a87) link_highlight_digital_pane

0x7a85,	// (0x00026a8f) link_highlight_primary_pane

0x7a8e,	// (0x00026a98) link_highlight_primary_small_pane

0x7a96,	// (0x00026aa0) link_highlight_secondary_pane

0x7a9e,	// (0x00026aa8) link_highlight_title_pane

0x7a7d,	// (0x00026a87) copy_highlight_digital_pane

0x7a7d,	// (0x00026a87) copy_highlight_primary_pane

0x7a8e,	// (0x00026a98) copy_highlight_primary_small_pane

0x7a96,	// (0x00026aa0) copy_highlight_secondary_pane

0x7a9e,	// (0x00026aa8) copy_highlight_title_pane

0x7a96,	// (0x00026aa0) graphic_text_digital_pane

0xa5a2,	// (0x000295ac) graphic_text_primary_pane

0xa5ab,	// (0x000295b5) graphic_text_primary_small_pane

0x7a8e,	// (0x00026a98) graphic_text_secondary_pane

0x7a7d,	// (0x00026a87) graphic_text_title_pane

0x7aa6,	// (0x00026ab0) cursor_primary_pane_g1

0xa594,	// (0x0002959e) cursor_text_primary_t1

0xa57c,	// (0x00029586) cursor_primary_small_pane_g1

0xa586,	// (0x00029590) cursor_text_primary_small_t1

0xa564,	// (0x0002956e) cursor_primary_small_pane_g1_copy1

0xa56e,	// (0x00029578) cursor_text_primary_small_t1_copy1

0xa54c,	// (0x00029556) cursor_text_title_t1

0xa55a,	// (0x00029564) cursor_title_pane_g1

0x7aa6,	// (0x00026ab0) cursor_digital_pane_g1

0x7ab0,	// (0x00026aba) cursor_text_digital_t1

0x7abe,	// (0x00026ac8) link_highlight_primary_pane_g1

0xa4f5,	// (0x000294ff) link_highlight_primary_pane_t1

0x7abe,	// (0x00026ac8) link_highlight_primary_small_pane_g1

0x7ac6,	// (0x00026ad0) link_highlight_primary_small_pane_t1

0x7abe,	// (0x00026ac8) link_highlight_secondary_pane_g1

0x7ad5,	// (0x00026adf) link_highlight_secondary_pane_t1

0xa45a,	// (0x00029464) link_highlight_title_pane_g1

0xa471,	// (0x0002947b) link_highlight_title_pane_t1

0xa45a,	// (0x00029464) link_highlight_digital_pane_g1

0xa462,	// (0x0002946c) link_highlight_digital_pane_t1

0xa314,	// (0x0002931e) copy_highlight_primary_pane_g1

0xa33a,	// (0x00029344) copy_highlight_primary_pane_t1

0xa314,	// (0x0002931e) copy_highlight_primary_small_pane_g1

0xa32b,	// (0x00029335) copy_highlight_primary_small_pane_t1

0x7ae4,	// (0x00026aee) copy_highlight_secondary_pane_g1

0x7aec,	// (0x00026af6) copy_highlight_secondary_pane_t1

0xa314,	// (0x0002931e) copy_highlight_title_pane_g1

0xa31c,	// (0x00029326) copy_highlight_title_pane_t1

0xa314,	// (0x0002931e) copy_highlight_digital_pane_g1

0xb5ae,	// (0x0002a5b8) copy_highlight_digital_pane_t1

0xb502,	// (0x0002a50c) graphic_text_primary_pane_g1

0xb592,	// (0x0002a59c) graphic_text_primary_pane_t1

0xb5a0,	// (0x0002a5aa) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0002e9d3) graphic_text_primary_pane_t

0xb56e,	// (0x0002a578) graphic_text_primary_small_pane_g1

0xb576,	// (0x0002a580) graphic_text_primary_small_pane_t1

0xb584,	// (0x0002a58e) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0002e9ce) graphic_text_primary_small_pane_t

0xb54a,	// (0x0002a554) graphic_text_secondary_pane_g1

0xb552,	// (0x0002a55c) graphic_text_secondary_pane_t1

0xb560,	// (0x0002a56a) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0002e9c9) graphic_text_secondary_pane_t

0xb526,	// (0x0002a530) graphic_text_title_pane_g1

0xb52e,	// (0x0002a538) graphic_text_title_pane_t1

0xb53c,	// (0x0002a546) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0002e9c4) graphic_text_title_pane_t

0xb502,	// (0x0002a50c) graphic_text_digital_pane_g1

0xb50a,	// (0x0002a514) graphic_text_digital_pane_t1

0xb518,	// (0x0002a522) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0002e9bf) graphic_text_digital_pane_t

0x1626,	// (0x00020630) navi_icon_pane_srt_ParamLimits

0x1626,	// (0x00020630) navi_icon_pane_srt

0x15ca,	// (0x000205d4) navi_midp_pane_srt

0x15ca,	// (0x000205d4) navi_navi_pane_srt

0x1626,	// (0x00020630) navi_text_pane_srt_ParamLimits

0x1626,	// (0x00020630) navi_text_pane_srt

0xb4cd,	// (0x0002a4d7) navi_navi_icon_text_pane_srt

0xb4d5,	// (0x0002a4df) navi_navi_pane_srt_g1_ParamLimits

0xb4d5,	// (0x0002a4df) navi_navi_pane_srt_g1

0xb4e7,	// (0x0002a4f1) navi_navi_pane_srt_g2_ParamLimits

0xb4e7,	// (0x0002a4f1) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0002e9ba) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0002e9ba) navi_navi_pane_srt_g

0xb4f9,	// (0x0002a503) navi_navi_tabs_pane_srt

0xb4cd,	// (0x0002a4d7) navi_navi_text_pane_srt

0xb4cd,	// (0x0002a4d7) navi_navi_volume_pane_srt

0xb4be,	// (0x0002a4c8) navi_navi_text_pane_srt_t1

0x8d93,	// (0x00027d9d) navi_navi_volume_pane_srt_g1

0x8d9b,	// (0x00027da5) volume_small_pane_srt_ParamLimits

0x8d9b,	// (0x00027da5) volume_small_pane_srt

0x7afb,	// (0x00026b05) volume_small_pane_srt_g1_ParamLimits

0x7afb,	// (0x00026b05) volume_small_pane_srt_g1

0x7b0b,	// (0x00026b15) volume_small_pane_srt_g2_ParamLimits

0x7b0b,	// (0x00026b15) volume_small_pane_srt_g2

0x7b1c,	// (0x00026b26) volume_small_pane_srt_g3_ParamLimits

0x7b1c,	// (0x00026b26) volume_small_pane_srt_g3

0x7b2d,	// (0x00026b37) volume_small_pane_srt_g4_ParamLimits

0x7b2d,	// (0x00026b37) volume_small_pane_srt_g4

0x7b3e,	// (0x00026b48) volume_small_pane_srt_g5_ParamLimits

0x7b3e,	// (0x00026b48) volume_small_pane_srt_g5

0x7b4f,	// (0x00026b59) volume_small_pane_srt_g6_ParamLimits

0x7b4f,	// (0x00026b59) volume_small_pane_srt_g6

0x7b60,	// (0x00026b6a) volume_small_pane_srt_g7_ParamLimits

0x7b60,	// (0x00026b6a) volume_small_pane_srt_g7

0x7b71,	// (0x00026b7b) volume_small_pane_srt_g8_ParamLimits

0x7b71,	// (0x00026b7b) volume_small_pane_srt_g8

0x7b82,	// (0x00026b8c) volume_small_pane_srt_g9_ParamLimits

0x7b82,	// (0x00026b8c) volume_small_pane_srt_g9

0x7b93,	// (0x00026b9d) volume_small_pane_srt_g10_ParamLimits

0x7b93,	// (0x00026b9d) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0002e767) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0002e767) volume_small_pane_srt_g

0x6c23,	// (0x00025c2d) query_popup_data_pane_cp2

0xb4a4,	// (0x0002a4ae) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb4a4,	// (0x0002a4ae) navi_navi_icon_text_pane_srt_t1

0xa5a2,	// (0x000295ac) navi_tabs_2_long_pane_srt

0xa5a2,	// (0x000295ac) navi_tabs_2_pane_srt

0xa5a2,	// (0x000295ac) navi_tabs_3_long_pane_srt

0xa5a2,	// (0x000295ac) navi_tabs_3_pane_srt

0xa5a2,	// (0x000295ac) navi_tabs_4_pane_srt

0x8d73,	// (0x00027d7d) tabs_2_active_pane_srt_ParamLimits

0x8d73,	// (0x00027d7d) tabs_2_active_pane_srt

0x8d83,	// (0x00027d8d) tabs_2_passive_pane_srt_ParamLimits

0x8d83,	// (0x00027d8d) tabs_2_passive_pane_srt

0x7ea6,	// (0x00026eb0) bg_passive_tab_pane_cp1_srt_ParamLimits

0x7ea6,	// (0x00026eb0) bg_passive_tab_pane_cp1_srt

0xb470,	// (0x0002a47a) bg_passive_tab_pane_g1_cp1_srt

0x7465,	// (0x0002646f) bg_passive_tab_pane_g2_cp1_srt

0xb479,	// (0x0002a483) bg_passive_tab_pane_g3_cp1_srt

0x1626,	// (0x00020630) bg_active_tab_pane_cp1_srt_ParamLimits

0x1626,	// (0x00020630) bg_active_tab_pane_cp1_srt

0xb482,	// (0x0002a48c) tabs_2_active_pane_srt_g1

0xb48a,	// (0x0002a494) tabs_2_active_pane_srt_t1_ParamLimits

0xb48a,	// (0x0002a494) tabs_2_active_pane_srt_t1

0xb470,	// (0x0002a47a) bg_active_tab_pane_g1_cp1_srt

0x7465,	// (0x0002646f) bg_active_tab_pane_g2_cp1_srt

0xb479,	// (0x0002a483) bg_active_tab_pane_g3_cp1_srt

0x8d40,	// (0x00027d4a) tabs_3_active_pane_srt_ParamLimits

0x8d40,	// (0x00027d4a) tabs_3_active_pane_srt

0x8d51,	// (0x00027d5b) tabs_3_passive_pane_cp_srt_ParamLimits

0x8d51,	// (0x00027d5b) tabs_3_passive_pane_cp_srt

0x8d62,	// (0x00027d6c) tabs_3_passive_pane_srt_ParamLimits

0x8d62,	// (0x00027d6c) tabs_3_passive_pane_srt

0x7ea6,	// (0x00026eb0) bg_passive_tab_pane_cp2_srt_ParamLimits

0x7ea6,	// (0x00026eb0) bg_passive_tab_pane_cp2_srt

0x7ba4,	// (0x00026bae) bg_passive_tab_pane_g1_cp2_srt

0x7465,	// (0x0002646f) bg_passive_tab_pane_g2_cp2_srt

0x7bad,	// (0x00026bb7) bg_passive_tab_pane_g3_cp2_srt

0x1626,	// (0x00020630) bg_active_tab_pane_cp2_srt_ParamLimits

0x1626,	// (0x00020630) bg_active_tab_pane_cp2_srt

0xb456,	// (0x0002a460) tabs_3_active_pane_srt_g1

0xb45e,	// (0x0002a468) tabs_3_active_pane_srt_t1_ParamLimits

0xb45e,	// (0x0002a468) tabs_3_active_pane_srt_t1

0x7ba4,	// (0x00026bae) bg_active_tab_pane_g1_cp2_srt

0x7465,	// (0x0002646f) bg_active_tab_pane_g2_cp2_srt

0x7bad,	// (0x00026bb7) bg_active_tab_pane_g3_cp2_srt

0x8cf8,	// (0x00027d02) tabs_4_active_pane_srt_ParamLimits

0x8cf8,	// (0x00027d02) tabs_4_active_pane_srt

0x8d0a,	// (0x00027d14) tabs_4_passive_pane_cp2_srt_ParamLimits

0x8d0a,	// (0x00027d14) tabs_4_passive_pane_cp2_srt

0x7e48,	// (0x00026e52) aid_size_cell_toolbar

0x6fb8,	// (0x00025fc2) main_idle_act_pane_ParamLimits

0x8043,	// (0x0002704d) popup_large_graphic_colour_window_ParamLimits

0x83ae,	// (0x000273b8) popup_toolbar_window_ParamLimits

0x83ae,	// (0x000273b8) popup_toolbar_window

0x5d8c,	// (0x00024d96) list_single_graphic_2heading_pane_ParamLimits

0x5d8c,	// (0x00024d96) list_single_graphic_2heading_pane

0x3732,	// (0x0002273c) aid_size_cell_apps_grid_lsc_pane

0x3744,	// (0x0002274e) aid_size_cell_apps_grid_prt_pane

0x7ea6,	// (0x00026eb0) bg_wml_button_pane_cp1_ParamLimits

0x7ea6,	// (0x00026eb0) bg_wml_button_pane_cp1

0x9fa3,	// (0x00028fad) form_midp_field_text_pane_t1_ParamLimits

0x9d6d,	// (0x00028d77) input_focus_pane_cp050_ParamLimits

0x9fdd,	// (0x00028fe7) list_midp_form_text_pane_ParamLimits

0x9f80,	// (0x00028f8a) input_focus_pane_cp051_ParamLimits

0x9f94,	// (0x00028f9e) list_midp_choice_pane_ParamLimits

0x9e23,	// (0x00028e2d) list_single_2graphic_pane_cp3_ParamLimits

0x9e23,	// (0x00028e2d) list_single_2graphic_pane_cp3

0x9e48,	// (0x00028e52) list_single_midp_graphic_pane_ParamLimits

0x9e48,	// (0x00028e52) list_single_midp_graphic_pane

0x5bc8,	// (0x00024bd2) list_single_graphic_2heading_pane_g1_ParamLimits

0x5bc8,	// (0x00024bd2) list_single_graphic_2heading_pane_g1

0x5401,	// (0x0002440b) list_single_graphic_2heading_pane_g4_ParamLimits

0x5401,	// (0x0002440b) list_single_graphic_2heading_pane_g4

0x540d,	// (0x00024417) list_single_graphic_2heading_pane_g5_ParamLimits

0x540d,	// (0x00024417) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0002e7ba) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0002e7ba) list_single_graphic_2heading_pane_g

0x5bd4,	// (0x00024bde) list_single_graphic_2heading_pane_t1_ParamLimits

0x5bd4,	// (0x00024bde) list_single_graphic_2heading_pane_t1

0x5be8,	// (0x00024bf2) list_single_graphic_2heading_pane_t2_ParamLimits

0x5be8,	// (0x00024bf2) list_single_graphic_2heading_pane_t2

0x5c02,	// (0x00024c0c) list_single_graphic_2heading_pane_t3_ParamLimits

0x5c02,	// (0x00024c0c) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0002e7c1) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0002e7c1) list_single_graphic_2heading_pane_t

0x888c,	// (0x00027896) bg_popup_sub_pane_cp2

0x88b6,	// (0x000278c0) grid_toobar_pane

0x88f2,	// (0x000278fc) cell_toolbar_pane_ParamLimits

0x88f2,	// (0x000278fc) cell_toolbar_pane

0x8922,	// (0x0002792c) cell_toolbar_pane_g1_ParamLimits

0x8922,	// (0x0002792c) cell_toolbar_pane_g1

0x8936,	// (0x00027940) cell_toolbar_pane_g2_ParamLimits

0x8936,	// (0x00027940) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x0002e7cf) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x0002e7cf) cell_toolbar_pane_g

0x8958,	// (0x00027962) grid_highlight_pane_cp2_ParamLimits

0x8958,	// (0x00027962) grid_highlight_pane_cp2

0x8972,	// (0x0002797c) toolbar_button_pane

0x897e,	// (0x00027988) toolbar_button_pane_g1

0x8986,	// (0x00027990) toolbar_button_pane_g2

0x898e,	// (0x00027998) toolbar_button_pane_g3

0x8996,	// (0x000279a0) toolbar_button_pane_g4

0x899e,	// (0x000279a8) toolbar_button_pane_g5

0x89a6,	// (0x000279b0) toolbar_button_pane_g6

0x89ae,	// (0x000279b8) toolbar_button_pane_g7

0x89b6,	// (0x000279c0) toolbar_button_pane_g8

0x89be,	// (0x000279c8) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x0002e7d4) toolbar_button_pane_g

0x89ce,	// (0x000279d8) list_single_2graphic_pane_g1_cp3_ParamLimits

0x89ce,	// (0x000279d8) list_single_2graphic_pane_g1_cp3

0x89da,	// (0x000279e4) list_single_2graphic_pane_g2_cp3_ParamLimits

0x89da,	// (0x000279e4) list_single_2graphic_pane_g2_cp3

0x7787,	// (0x00026791) list_single_2graphic_pane_g3_cp3

0x89eb,	// (0x000279f5) list_single_2graphic_pane_g4_cp3_ParamLimits

0x89eb,	// (0x000279f5) list_single_2graphic_pane_g4_cp3

0x89f7,	// (0x00027a01) list_single_2graphic_pane_t1_cp3_ParamLimits

0x89f7,	// (0x00027a01) list_single_2graphic_pane_t1_cp3

0x1d2a,	// (0x00020d34) list_single_midp_graphic_pane_g2_ParamLimits

0x1d2a,	// (0x00020d34) list_single_midp_graphic_pane_g2

0x7e50,	// (0x00026e5a) aid_zoom_text_primary

0x5b9c,	// (0x00024ba6) aid_zoom_text_secondary

0x7c5e,	// (0x00026c68) status_small_pane_g7_ParamLimits

0x7c5e,	// (0x00026c68) status_small_pane_g7

0x7c81,	// (0x00026c8b) status_small_pane_t1_ParamLimits

0x6955,	// (0x0002595f) title_pane_g2

0x0003,

0xf54e,	// (0x0002e558) title_pane_g

0x6c7d,	// (0x00025c87) aid_size_cell_colour_1_pane_ParamLimits

0x6c7d,	// (0x00025c87) aid_size_cell_colour_1_pane

0x6c91,	// (0x00025c9b) aid_size_cell_colour_2_pane_ParamLimits

0x6c91,	// (0x00025c9b) aid_size_cell_colour_2_pane

0x6ca5,	// (0x00025caf) aid_size_cell_colour_3_pane_ParamLimits

0x6ca5,	// (0x00025caf) aid_size_cell_colour_3_pane

0x6cb9,	// (0x00025cc3) aid_size_cell_colour_4_pane_ParamLimits

0x6cb9,	// (0x00025cc3) aid_size_cell_colour_4_pane

0x702b,	// (0x00026035) title_pane_stacon_g1_ParamLimits

0x702b,	// (0x00026035) title_pane_stacon_g1

0xa391,	// (0x0002939b) popup_note_wait_window_g3_ParamLimits

0xa391,	// (0x0002939b) popup_note_wait_window_g3

0xa407,	// (0x00029411) popup_note_wait_window_t5_ParamLimits

0xa407,	// (0x00029411) popup_note_wait_window_t5

0x15ca,	// (0x000205d4) main_feb_china_hwr_fs_writing_pane

0x7f2a,	// (0x00026f34) popup_feb_china_hwr_fs_window_ParamLimits

0x7f2a,	// (0x00026f34) popup_feb_china_hwr_fs_window

0x8a29,	// (0x00027a33) aid_size_cell_hwr_fs_ParamLimits

0x8a29,	// (0x00027a33) aid_size_cell_hwr_fs

0x9d6d,	// (0x00028d77) bg_popup_sub_pane_cp3_ParamLimits

0x9d6d,	// (0x00028d77) bg_popup_sub_pane_cp3

0x8a3e,	// (0x00027a48) grid_hwr_fs_pane_ParamLimits

0x8a3e,	// (0x00027a48) grid_hwr_fs_pane

0x8a56,	// (0x00027a60) linegrid_hwr_fs_pane_ParamLimits

0x8a56,	// (0x00027a60) linegrid_hwr_fs_pane

0x8a66,	// (0x00027a70) cell_hwr_fs_pane_ParamLimits

0x8a66,	// (0x00027a70) cell_hwr_fs_pane

0x9d79,	// (0x00028d83) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d79,	// (0x00028d83) linegrid_hwr_fs_pane_g1

0x9d85,	// (0x00028d8f) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d85,	// (0x00028d8f) linegrid_hwr_fs_pane_g2

0x9d97,	// (0x00028da1) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d97,	// (0x00028da1) linegrid_hwr_fs_pane_g3

0x8a88,	// (0x00027a92) linegrid_hwr_fs_pane_g4_ParamLimits

0x8a88,	// (0x00027a92) linegrid_hwr_fs_pane_g4

0x8aa2,	// (0x00027aac) linegrid_hwr_fs_pane_g5_ParamLimits

0x8aa2,	// (0x00027aac) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0002e7fa) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0002e7fa) linegrid_hwr_fs_pane_g

0x9da3,	// (0x00028dad) cell_hwr_fs_pane_g1_ParamLimits

0x9da3,	// (0x00028dad) cell_hwr_fs_pane_g1

0x87c6,	// (0x000277d0) cell_hwr_fs_pane_g2_ParamLimits

0x87c6,	// (0x000277d0) cell_hwr_fs_pane_g2

0x9db9,	// (0x00028dc3) cell_hwr_fs_pane_g3_ParamLimits

0x9db9,	// (0x00028dc3) cell_hwr_fs_pane_g3

0x9dc6,	// (0x00028dd0) cell_hwr_fs_pane_g4_ParamLimits

0x9dc6,	// (0x00028dd0) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0002e805) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0002e805) cell_hwr_fs_pane_g

0x8ab8,	// (0x00027ac2) cell_hwr_fs_pane_t1

0x15ca,	// (0x000205d4) grid_highlight_pane_cp6

0x15ca,	// (0x000205d4) main_idle_act2_pane

0x1ba8,	// (0x00020bb2) aid_inside_area_popup_secondary

0xaa26,	// (0x00029a30) aid_inside_area_window_primary_ParamLimits

0xaa26,	// (0x00029a30) aid_inside_area_window_primary

0xb5bd,	// (0x0002a5c7) ai2_news_ticker_pane

0xb5c5,	// (0x0002a5cf) aid_size_cell_ai1_link_ParamLimits

0xb5c5,	// (0x0002a5cf) aid_size_cell_ai1_link

0xb5df,	// (0x0002a5e9) popup_ai2_data_window_ParamLimits

0xb5df,	// (0x0002a5e9) popup_ai2_data_window

0xb5f5,	// (0x0002a5ff) popup_ai2_link_window_ParamLimits

0xb5f5,	// (0x0002a5ff) popup_ai2_link_window

0x9d6d,	// (0x00028d77) bg_popup_sub_pane_cp4_ParamLimits

0x9d6d,	// (0x00028d77) bg_popup_sub_pane_cp4

0xb609,	// (0x0002a613) grid_ai2_link_pane_ParamLimits

0xb609,	// (0x0002a613) grid_ai2_link_pane

0xb620,	// (0x0002a62a) popup_ai2_link_window_g1_ParamLimits

0xb620,	// (0x0002a62a) popup_ai2_link_window_g1

0xb62c,	// (0x0002a636) popup_ai2_link_window_g2_ParamLimits

0xb62c,	// (0x0002a636) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0002e9d8) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0002e9d8) popup_ai2_link_window_g

0xb63b,	// (0x0002a645) ai2_mp_button_pane

0xb643,	// (0x0002a64d) ai2_mp_volume_pane

0x9f80,	// (0x00028f8a) bg_popup_sub_pane_cp5_ParamLimits

0x9f80,	// (0x00028f8a) bg_popup_sub_pane_cp5

0xb64b,	// (0x0002a655) heading_ai2_gene_pane_ParamLimits

0xb64b,	// (0x0002a655) heading_ai2_gene_pane

0xb657,	// (0x0002a661) list_ai2_gene_pane_ParamLimits

0xb657,	// (0x0002a661) list_ai2_gene_pane

0xb69f,	// (0x0002a6a9) cell_ai2_link_pane_ParamLimits

0xb69f,	// (0x0002a6a9) cell_ai2_link_pane

0xb6b5,	// (0x0002a6bf) cell_ai2_link_pane_g1

0x15ca,	// (0x000205d4) grid_highlight_pane_cp7

0x8db0,	// (0x00027dba) ai2_mp_volume_pane_g1

0xb785,	// (0x0002a78f) ai2_mp_volume_pane_g2

0xb6fa,	// (0x0002a704) list_ai2_gene_pane_t1

0xb78d,	// (0x0002a797) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0002e9f1) ai2_mp_volume_pane_g

0x8db8,	// (0x00027dc2) volume_small_pane_cp3

0xb795,	// (0x0002a79f) aid_size_cell_ai2_button

0xb79d,	// (0x0002a7a7) grid_ai2_button_pane

0xb7a6,	// (0x0002a7b0) cell_ai2_button_pane_ParamLimits

0xb7a6,	// (0x0002a7b0) cell_ai2_button_pane

0x15c0,	// (0x000205ca) cell_ai2_button_pane_g1

0x15ca,	// (0x000205d4) grid_highlight_pane_cp8

0xb745,	// (0x0002a74f) ai2_gene_pane_t1_ParamLimits

0xb745,	// (0x0002a74f) ai2_gene_pane_t1

0x7e3e,	// (0x00026e48) aid_height_parent_landscape

0xb09c,	// (0x0002a0a6) aid_height_set_list

0xb0ad,	// (0x0002a0b7) aid_size_parent

0xb3e4,	// (0x0002a3ee) aid_size_cell_graphic_pane_ParamLimits

0xb667,	// (0x0002a671) popup_ai2_data_window_g1_ParamLimits

0xb667,	// (0x0002a671) popup_ai2_data_window_g1

0xb673,	// (0x0002a67d) ai2_news_ticker_pane_g1

0xb67b,	// (0x0002a685) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0002e9dd) ai2_news_ticker_pane_g

0xb683,	// (0x0002a68d) ai2_news_ticker_pane_t1

0xb691,	// (0x0002a69b) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0002e9e2) ai2_news_ticker_pane_t

0xb6be,	// (0x0002a6c8) heading_ai2_gene_pane_g1

0xb6c6,	// (0x0002a6d0) heading_ai2_gene_pane_t1_ParamLimits

0xb6c6,	// (0x0002a6d0) heading_ai2_gene_pane_t1

0xb6db,	// (0x0002a6e5) list_highlight_pane_cp6

0xb6e3,	// (0x0002a6ed) ai2_gene_pane_ParamLimits

0xb6e3,	// (0x0002a6ed) ai2_gene_pane

0xb708,	// (0x0002a712) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0002e9e7) list_ai2_gene_pane_t

0xb716,	// (0x0002a720) list_highlight_pane_cp8_ParamLimits

0xb716,	// (0x0002a720) list_highlight_pane_cp8

0xb727,	// (0x0002a731) ai2_gene_pane_g1_ParamLimits

0xb727,	// (0x0002a731) ai2_gene_pane_g1

0xb739,	// (0x0002a743) ai2_gene_pane_g2_ParamLimits

0xb739,	// (0x0002a743) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0002e9ec) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0002e9ec) ai2_gene_pane_g

0x1991,	// (0x0002099b) scroll_pane_cp12

0x7df5,	// (0x00026dff) control_pane_t3_ParamLimits

0x7df5,	// (0x00026dff) control_pane_t3

0x7c72,	// (0x00026c7c) status_small_pane_g8_ParamLimits

0x7c72,	// (0x00026c7c) status_small_pane_g8

0x800c,	// (0x00027016) popup_find_window_ParamLimits

0x8225,	// (0x0002722f) popup_note_image_window_ParamLimits

0x5c1a,	// (0x00024c24) list_double2_graphic_pane_vc_g1_ParamLimits

0x5c1a,	// (0x00024c24) list_double2_graphic_pane_vc_g1

0x5401,	// (0x0002440b) list_double2_graphic_pane_vc_g2_ParamLimits

0x5401,	// (0x0002440b) list_double2_graphic_pane_vc_g2

0x540d,	// (0x00024417) list_double2_graphic_pane_vc_g3_ParamLimits

0x540d,	// (0x00024417) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x0002e7c8) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x0002e7c8) list_double2_graphic_pane_vc_g

0x5c26,	// (0x00024c30) list_double2_graphic_pane_vc_t1_ParamLimits

0x5c26,	// (0x00024c30) list_double2_graphic_pane_vc_t1

0x5401,	// (0x0002440b) list_single_heading_pane_vc_g1_ParamLimits

0x5401,	// (0x0002440b) list_single_heading_pane_vc_g1

0x540d,	// (0x00024417) list_single_heading_pane_vc_g2_ParamLimits

0x540d,	// (0x00024417) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e5d2) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e5d2) list_single_heading_pane_vc_g

0x5c3c,	// (0x00024c46) list_single_heading_pane_vc_t1_ParamLimits

0x5c3c,	// (0x00024c46) list_single_heading_pane_vc_t1

0x5c54,	// (0x00024c5e) list_single_heading_pane_vc_t2_ParamLimits

0x5c54,	// (0x00024c5e) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0002e7e9) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0002e7e9) list_single_heading_pane_vc_t

0x5c70,	// (0x00024c7a) list_setting_number_pane_vc_g1_ParamLimits

0x5c70,	// (0x00024c7a) list_setting_number_pane_vc_g1

0x5c7c,	// (0x00024c86) list_setting_number_pane_vc_g2_ParamLimits

0x5c7c,	// (0x00024c86) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0002e7ee) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0002e7ee) list_setting_number_pane_vc_g

0x5c88,	// (0x00024c92) list_setting_number_pane_vc_t1_ParamLimits

0x5c88,	// (0x00024c92) list_setting_number_pane_vc_t1

0x5c9c,	// (0x00024ca6) list_setting_number_pane_vc_t2_ParamLimits

0x5c9c,	// (0x00024ca6) list_setting_number_pane_vc_t2

0x5cb8,	// (0x00024cc2) list_setting_number_pane_vc_t3_ParamLimits

0x5cb8,	// (0x00024cc2) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0002e7f3) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0002e7f3) list_setting_number_pane_vc_t

0x5ce4,	// (0x00024cee) set_value_pane_vc_ParamLimits

0x5ce4,	// (0x00024cee) set_value_pane_vc

0x5d8c,	// (0x00024d96) list_double2_graphic_pane_vc_ParamLimits

0x5d8c,	// (0x00024d96) list_double2_graphic_pane_vc

0xb281,	// (0x0002a28b) list_double2_large_graphic_pane_vc_ParamLimits

0xb281,	// (0x0002a28b) list_double2_large_graphic_pane_vc

0x5d8c,	// (0x00024d96) list_double2_pane_vc_ParamLimits

0x5d8c,	// (0x00024d96) list_double2_pane_vc

0x5d8c,	// (0x00024d96) list_double_graphic_heading_pane_vc_ParamLimits

0x5d8c,	// (0x00024d96) list_double_graphic_heading_pane_vc

0x5d8c,	// (0x00024d96) list_double_graphic_pane_vc_ParamLimits

0x5d8c,	// (0x00024d96) list_double_graphic_pane_vc

0x5d8c,	// (0x00024d96) list_double_heading_pane_vc_ParamLimits

0x5d8c,	// (0x00024d96) list_double_heading_pane_vc

0xb293,	// (0x0002a29d) list_double_large_graphic_pane_vc_ParamLimits

0xb293,	// (0x0002a29d) list_double_large_graphic_pane_vc

0x5d8c,	// (0x00024d96) list_double_number_pane_vc_ParamLimits

0x5d8c,	// (0x00024d96) list_double_number_pane_vc

0x5d8c,	// (0x00024d96) list_double_pane_vc_ParamLimits

0x5d8c,	// (0x00024d96) list_double_pane_vc

0x5d8c,	// (0x00024d96) list_double_time_pane_vc_ParamLimits

0x5d8c,	// (0x00024d96) list_double_time_pane_vc

0x5d8c,	// (0x00024d96) list_setting_number_pane_vc_ParamLimits

0x5d8c,	// (0x00024d96) list_setting_number_pane_vc

0x5d8c,	// (0x00024d96) list_setting_pane_vc_ParamLimits

0x5d8c,	// (0x00024d96) list_setting_pane_vc

0x5d8c,	// (0x00024d96) list_single_graphic_heading_pane_vc_ParamLimits

0x5d8c,	// (0x00024d96) list_single_graphic_heading_pane_vc

0x5d8c,	// (0x00024d96) list_single_heading_pane_vc_ParamLimits

0x5d8c,	// (0x00024d96) list_single_heading_pane_vc

0x5dbe,	// (0x00024dc8) list_single_number_heading_pane_vc_ParamLimits

0x5dbe,	// (0x00024dc8) list_single_number_heading_pane_vc

0x5c1a,	// (0x00024c24) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5c1a,	// (0x00024c24) list_double_graphic_heading_pane_vc_g1

0x5401,	// (0x0002440b) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5401,	// (0x0002440b) list_double_graphic_heading_pane_vc_g2

0x540d,	// (0x00024417) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x540d,	// (0x00024417) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7be,	// (0x0002e7c8) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0002e7c8) list_double_graphic_heading_pane_vc_g

0x5e65,	// (0x00024e6f) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5e65,	// (0x00024e6f) list_double_graphic_heading_pane_vc_t1

0x5e81,	// (0x00024e8b) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5e81,	// (0x00024e8b) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ee,	// (0x0002e9f8) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ee,	// (0x0002e9f8) list_double_graphic_heading_pane_vc_t

0x5c70,	// (0x00024c7a) list_setting_pane_vc_g1_ParamLimits

0x5c70,	// (0x00024c7a) list_setting_pane_vc_g1

0x5c7c,	// (0x00024c86) list_setting_pane_vc_g2_ParamLimits

0x5c7c,	// (0x00024c86) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0002e7ee) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0002e7ee) list_setting_pane_vc_g

0x5e9f,	// (0x00024ea9) list_setting_pane_vc_t1_ParamLimits

0x5e9f,	// (0x00024ea9) list_setting_pane_vc_t1

0x5ebb,	// (0x00024ec5) list_setting_pane_vc_t2_ParamLimits

0x5ebb,	// (0x00024ec5) list_setting_pane_vc_t2

0x0001,

0xfa31,	// (0x0002ea3b) list_setting_pane_vc_t_ParamLimits

0xfa31,	// (0x0002ea3b) list_setting_pane_vc_t

0x5ce4,	// (0x00024cee) set_value_pane_cp_vc_ParamLimits

0x5ce4,	// (0x00024cee) set_value_pane_cp_vc

0x5401,	// (0x0002440b) list_single_number_heading_pane_vc_g1_ParamLimits

0x5401,	// (0x0002440b) list_single_number_heading_pane_vc_g1

0x540d,	// (0x00024417) list_single_number_heading_pane_vc_g2_ParamLimits

0x540d,	// (0x00024417) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e5d2) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e5d2) list_single_number_heading_pane_vc_g

0x5c3c,	// (0x00024c46) list_single_number_heading_pane_vc_t1_ParamLimits

0x5c3c,	// (0x00024c46) list_single_number_heading_pane_vc_t1

0x5ed5,	// (0x00024edf) list_single_number_heading_pane_vc_t2_ParamLimits

0x5ed5,	// (0x00024edf) list_single_number_heading_pane_vc_t2

0x5469,	// (0x00024473) list_single_number_heading_pane_vc_t3_ParamLimits

0x5469,	// (0x00024473) list_single_number_heading_pane_vc_t3

0x0002,

0xfa36,	// (0x0002ea40) list_single_number_heading_pane_vc_t_ParamLimits

0xfa36,	// (0x0002ea40) list_single_number_heading_pane_vc_t

0x5c1a,	// (0x00024c24) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5c1a,	// (0x00024c24) list_single_graphic_heading_pane_vc_g1

0x5401,	// (0x0002440b) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x5401,	// (0x0002440b) list_single_graphic_heading_pane_vc_g4

0x540d,	// (0x00024417) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x540d,	// (0x00024417) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7be,	// (0x0002e7c8) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0002e7c8) list_single_graphic_heading_pane_vc_g

0x5c3c,	// (0x00024c46) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5c3c,	// (0x00024c46) list_single_graphic_heading_pane_vc_t1

0x5ee9,	// (0x00024ef3) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5ee9,	// (0x00024ef3) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3d,	// (0x0002ea47) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x0002ea47) list_single_graphic_heading_pane_vc_t

0x5401,	// (0x0002440b) list_double2_pane_vc_g1_ParamLimits

0x5401,	// (0x0002440b) list_double2_pane_vc_g1

0x540d,	// (0x00024417) list_double2_pane_vc_g2_ParamLimits

0x540d,	// (0x00024417) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e5d2) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e5d2) list_double2_pane_vc_g

0x5d76,	// (0x00024d80) list_double2_pane_vc_t1_ParamLimits

0x5d76,	// (0x00024d80) list_double2_pane_vc_t1

0x5efd,	// (0x00024f07) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5efd,	// (0x00024f07) list_double2_large_graphic_pane_vc_g1

0x5f09,	// (0x00024f13) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5f09,	// (0x00024f13) list_double2_large_graphic_pane_vc_g2

0x5f15,	// (0x00024f1f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5f15,	// (0x00024f1f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa42,	// (0x0002ea4c) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa42,	// (0x0002ea4c) list_double2_large_graphic_pane_vc_g

0x5f21,	// (0x00024f2b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5f21,	// (0x00024f2b) list_double2_large_graphic_pane_vc_t1

0x5f37,	// (0x00024f41) list_double_time_pane_vc_g1_ParamLimits

0x5f37,	// (0x00024f41) list_double_time_pane_vc_g1

0x5f43,	// (0x00024f4d) list_double_time_pane_vc_g2_ParamLimits

0x5f43,	// (0x00024f4d) list_double_time_pane_vc_g2

0x0001,

0xfa49,	// (0x0002ea53) list_double_time_pane_vc_g_ParamLimits

0xfa49,	// (0x0002ea53) list_double_time_pane_vc_g

0x5f4f,	// (0x00024f59) list_double_time_pane_vc_t1_ParamLimits

0x5f4f,	// (0x00024f59) list_double_time_pane_vc_t1

0x5f73,	// (0x00024f7d) list_double_time_pane_vc_t2_ParamLimits

0x5f73,	// (0x00024f7d) list_double_time_pane_vc_t2

0x5fc2,	// (0x00024fcc) list_double_time_pane_vc_t3_ParamLimits

0x5fc2,	// (0x00024fcc) list_double_time_pane_vc_t3

0x5fd4,	// (0x00024fde) list_double_time_pane_vc_t4_ParamLimits

0x5fd4,	// (0x00024fde) list_double_time_pane_vc_t4

0x0003,

0xfa4e,	// (0x0002ea58) list_double_time_pane_vc_t_ParamLimits

0xfa4e,	// (0x0002ea58) list_double_time_pane_vc_t

0x5401,	// (0x0002440b) list_double_pane_vc_g1_ParamLimits

0x5401,	// (0x0002440b) list_double_pane_vc_g1

0x540d,	// (0x00024417) list_double_pane_vc_g2_ParamLimits

0x540d,	// (0x00024417) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e5d2) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e5d2) list_double_pane_vc_g

0x5fe8,	// (0x00024ff2) list_double_pane_vc_t1_ParamLimits

0x5fe8,	// (0x00024ff2) list_double_pane_vc_t1

0x5ffc,	// (0x00025006) list_double_pane_vc_t2_ParamLimits

0x5ffc,	// (0x00025006) list_double_pane_vc_t2

0x0001,

0xfa57,	// (0x0002ea61) list_double_pane_vc_t_ParamLimits

0xfa57,	// (0x0002ea61) list_double_pane_vc_t

0x5401,	// (0x0002440b) list_double_number_pane_vc_g1_ParamLimits

0x5401,	// (0x0002440b) list_double_number_pane_vc_g1

0x540d,	// (0x00024417) list_double_number_pane_vc_g2_ParamLimits

0x540d,	// (0x00024417) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e5d2) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e5d2) list_double_number_pane_vc_g

0x6014,	// (0x0002501e) list_double_number_pane_vc_t1_ParamLimits

0x6014,	// (0x0002501e) list_double_number_pane_vc_t1

0x6026,	// (0x00025030) list_double_number_pane_vc_t2_ParamLimits

0x6026,	// (0x00025030) list_double_number_pane_vc_t2

0x603a,	// (0x00025044) list_double_number_pane_vc_t3_ParamLimits

0x603a,	// (0x00025044) list_double_number_pane_vc_t3

0x0002,

0xfa5c,	// (0x0002ea66) list_double_number_pane_vc_t_ParamLimits

0xfa5c,	// (0x0002ea66) list_double_number_pane_vc_t

0x6052,	// (0x0002505c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6052,	// (0x0002505c) list_double_large_graphic_pane_vc_g1

0x6074,	// (0x0002507e) list_double_large_graphic_pane_vc_g2_ParamLimits

0x6074,	// (0x0002507e) list_double_large_graphic_pane_vc_g2

0x6088,	// (0x00025092) list_double_large_graphic_pane_vc_g3_ParamLimits

0x6088,	// (0x00025092) list_double_large_graphic_pane_vc_g3

0x6097,	// (0x000250a1) list_double_large_graphic_pane_vc_g4_ParamLimits

0x6097,	// (0x000250a1) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa63,	// (0x0002ea6d) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa63,	// (0x0002ea6d) list_double_large_graphic_pane_vc_g

0x60a3,	// (0x000250ad) list_double_large_graphic_pane_vc_t1_ParamLimits

0x60a3,	// (0x000250ad) list_double_large_graphic_pane_vc_t1

0x60bf,	// (0x000250c9) list_double_large_graphic_pane_vc_t2_ParamLimits

0x60bf,	// (0x000250c9) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6c,	// (0x0002ea76) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6c,	// (0x0002ea76) list_double_large_graphic_pane_vc_t

0x5401,	// (0x0002440b) list_double_heading_pane_vc_g1_ParamLimits

0x5401,	// (0x0002440b) list_double_heading_pane_vc_g1

0x540d,	// (0x00024417) list_double_heading_pane_vc_g2_ParamLimits

0x540d,	// (0x00024417) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e5d2) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e5d2) list_double_heading_pane_vc_g

0x60e1,	// (0x000250eb) list_double_heading_pane_vc_t1_ParamLimits

0x60e1,	// (0x000250eb) list_double_heading_pane_vc_t1

0x5c3c,	// (0x00024c46) list_double_heading_pane_vc_t2_ParamLimits

0x5c3c,	// (0x00024c46) list_double_heading_pane_vc_t2

0x0001,

0xfa71,	// (0x0002ea7b) list_double_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x0002ea7b) list_double_heading_pane_vc_t

0x60f5,	// (0x000250ff) list_double_graphic_pane_vc_g1_ParamLimits

0x60f5,	// (0x000250ff) list_double_graphic_pane_vc_g1

0x6108,	// (0x00025112) list_double_graphic_pane_vc_g2_ParamLimits

0x6108,	// (0x00025112) list_double_graphic_pane_vc_g2

0x5401,	// (0x0002440b) list_double_graphic_pane_vc_g3_ParamLimits

0x5401,	// (0x0002440b) list_double_graphic_pane_vc_g3

0x0003,

0xfa76,	// (0x0002ea80) list_double_graphic_pane_vc_g_ParamLimits

0xfa76,	// (0x0002ea80) list_double_graphic_pane_vc_g

0x6125,	// (0x0002512f) list_double_graphic_pane_vc_t1_ParamLimits

0x6125,	// (0x0002512f) list_double_graphic_pane_vc_t1

0x6149,	// (0x00025153) list_double_graphic_pane_vc_t2_ParamLimits

0x6149,	// (0x00025153) list_double_graphic_pane_vc_t2

0x0001,

0xfa7f,	// (0x0002ea89) list_double_graphic_pane_vc_t_ParamLimits

0xfa7f,	// (0x0002ea89) list_double_graphic_pane_vc_t

0x657f,	// (0x00025589) aid_size_cell_fastswap

0x6587,	// (0x00025591) aid_size_cell_touch_ParamLimits

0x6587,	// (0x00025591) aid_size_cell_touch

0x67e2,	// (0x000257ec) popup_fast_swap_wide_window_ParamLimits

0x67e2,	// (0x000257ec) popup_fast_swap_wide_window

0x68e8,	// (0x000258f2) touch_pane_ParamLimits

0x68e8,	// (0x000258f2) touch_pane

0x1a25,	// (0x00020a2f) button_value_adjust_pane_cp2

0x58bb,	// (0x000248c5) button_value_adjust_pane_cp4

0x58db,	// (0x000248e5) form_field_data_pane_cp2

0x58fa,	// (0x00024904) form_field_data_wide_pane_cp2

0x3773,	// (0x0002277d) bg_scroll_pane_ParamLimits

0x7227,	// (0x00026231) scroll_handle_pane_ParamLimits

0x723b,	// (0x00026245) scroll_sc2_down_pane_ParamLimits

0x723b,	// (0x00026245) scroll_sc2_down_pane

0x37b9,	// (0x000227c3) scroll_sc2_up_pane_ParamLimits

0x37b9,	// (0x000227c3) scroll_sc2_up_pane

0xbe6c,	// (0x0002ae76) grid_wheel_folder_pane_g1_ParamLimits

0xbe6c,	// (0x0002ae76) grid_wheel_folder_pane_g1

0x75ac,	// (0x000265b6) clock_nsta_pane_cp2_ParamLimits

0x75ac,	// (0x000265b6) clock_nsta_pane_cp2

0x6fb8,	// (0x00025fc2) listscroll_midp_pane_ParamLimits

0x795f,	// (0x00026969) midp_canvas_pane

0x7e36,	// (0x00026e40) nsta_clock_indic_pane

0x7e84,	// (0x00026e8e) listscroll_form_pane_vc

0x7e94,	// (0x00026e9e) listscroll_set_pane_vc_ParamLimits

0x7e94,	// (0x00026e9e) listscroll_set_pane_vc

0x8534,	// (0x0002753e) clock_nsta_pane

0x85af,	// (0x000275b9) indicator_nsta_pane

0x888c,	// (0x00027896) bg_popup_sub_pane_cp2_ParamLimits

0x88a0,	// (0x000278aa) find_pane_cp2_ParamLimits

0x88a0,	// (0x000278aa) find_pane_cp2

0x88b6,	// (0x000278c0) grid_toobar_pane_ParamLimits

0x9d41,	// (0x00028d4b) list_form_gen_pane_vc_ParamLimits

0x9d41,	// (0x00028d4b) list_form_gen_pane_vc

0x9d57,	// (0x00028d61) scroll_pane_cp8_vc_ParamLimits

0x9d57,	// (0x00028d61) scroll_pane_cp8_vc

0x9dd3,	// (0x00028ddd) data_form_wide_pane_vc_ParamLimits

0x9dd3,	// (0x00028ddd) data_form_wide_pane_vc

0x9ddf,	// (0x00028de9) form_field_data_wide_pane_vc_g1

0x9de7,	// (0x00028df1) form_field_data_wide_pane_vc_t1_ParamLimits

0x9de7,	// (0x00028df1) form_field_data_wide_pane_vc_t1

0x1a5c,	// (0x00020a66) input_focus_pane_cp6_vc_ParamLimits

0x1a5c,	// (0x00020a66) input_focus_pane_cp6_vc

0xa114,	// (0x0002911e) list_midp_pane_ParamLimits

0xa120,	// (0x0002912a) scroll_pane_cp16_ParamLimits

0xa120,	// (0x0002912a) scroll_pane_cp16

0xa16e,	// (0x00029178) button_value_adjust_pane_ParamLimits

0xa16e,	// (0x00029178) button_value_adjust_pane

0xb0bf,	// (0x0002a0c9) button_value_adjust_pane_cp6_ParamLimits

0xb0bf,	// (0x0002a0c9) button_value_adjust_pane_cp6

0xb1e9,	// (0x0002a1f3) settings_code_pane_cp_ParamLimits

0xb1e9,	// (0x0002a1f3) settings_code_pane_cp

0x15c0,	// (0x000205ca) cell_touch_pane_g1

0x15c0,	// (0x000205ca) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0002e70d) cell_touch_pane_g

0xb7b8,	// (0x0002a7c2) cell_touch_pane_cp_ParamLimits

0xb7b8,	// (0x0002a7c2) cell_touch_pane_cp

0xb7c8,	// (0x0002a7d2) cell_touch_pane_ParamLimits

0xb7c8,	// (0x0002a7d2) cell_touch_pane

0x15c0,	// (0x000205ca) scroll_sc2_down_pane_g1

0x15c0,	// (0x000205ca) scroll_sc2_up_pane_g1

0x15ca,	// (0x000205d4) bg_set_opt_pane_cp4_vc

0xb7da,	// (0x0002a7e4) list_set_graphic_pane_vc_g1_ParamLimits

0xb7da,	// (0x0002a7e4) list_set_graphic_pane_vc_g1

0xb7e6,	// (0x0002a7f0) list_set_graphic_pane_vc_g2_ParamLimits

0xb7e6,	// (0x0002a7f0) list_set_graphic_pane_vc_g2

0x0001,

0xf9f3,	// (0x0002e9fd) list_set_graphic_pane_vc_g_ParamLimits

0xf9f3,	// (0x0002e9fd) list_set_graphic_pane_vc_g

0xb7f2,	// (0x0002a7fc) text_primary_small_cp13_vc_ParamLimits

0xb7f2,	// (0x0002a7fc) text_primary_small_cp13_vc

0xb80a,	// (0x0002a814) list_set_graphic_pane_vc_ParamLimits

0xb80a,	// (0x0002a814) list_set_graphic_pane_vc

0x15ca,	// (0x000205d4) input_focus_pane_cp2_vc

0x15c0,	// (0x000205ca) setting_code_pane_vc_g1

0x163d,	// (0x00020647) setting_code_pane_vc_t1

0xb81d,	// (0x0002a827) set_text_pane_vc_t1_ParamLimits

0xb81d,	// (0x0002a827) set_text_pane_vc_t1

0x15ca,	// (0x000205d4) input_focus_pane_cp1_vc

0xb839,	// (0x0002a843) list_set_text_pane_vc

0x15c0,	// (0x000205ca) setting_text_pane_vc_g1

0x15ca,	// (0x000205d4) bg_set_opt_pane_cp2_vc

0x1634,	// (0x0002063e) setting_slider_graphic_pane_vc_g1

0xb843,	// (0x0002a84d) setting_slider_graphic_pane_vc_t1

0xb853,	// (0x0002a85d) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f8,	// (0x0002ea02) setting_slider_graphic_pane_vc_t

0xb863,	// (0x0002a86d) slider_set_pane_cp_vc

0xb86b,	// (0x0002a875) slider_set_pane_vc_g1

0xb874,	// (0x0002a87e) slider_set_pane_vc_g2

0x0006,

0xf9fd,	// (0x0002ea07) slider_set_pane_vc_g

0x1afa,	// (0x00020b04) set_opt_bg_pane_g1_copy1

0x1b02,	// (0x00020b0c) set_opt_bg_pane_g2_copy1

0xb8a0,	// (0x0002a8aa) set_opt_bg_pane_g3_copy1

0x1b12,	// (0x00020b1c) set_opt_bg_pane_g4_copy1

0x1b1a,	// (0x00020b24) set_opt_bg_pane_g5_copy1

0x1b22,	// (0x00020b2c) set_opt_bg_pane_g6_copy1

0xb8a8,	// (0x0002a8b2) set_opt_bg_pane_g7_copy1

0xb8b0,	// (0x0002a8ba) set_opt_bg_pane_g8_copy1

0xb8b8,	// (0x0002a8c2) set_opt_bg_pane_g9_copy1

0x15ca,	// (0x000205d4) bg_set_opt_pane_cp_vc

0xb8c0,	// (0x0002a8ca) setting_slider_pane_vc_t1

0xb8cf,	// (0x0002a8d9) setting_slider_pane_vc_t2

0xb8df,	// (0x0002a8e9) setting_slider_pane_vc_t3

0x0002,

0xfa0c,	// (0x0002ea16) setting_slider_pane_vc_t

0xb8ef,	// (0x0002a8f9) slider_set_pane_vc

0x8ac6,	// (0x00027ad0) volume_set_pane_vc_g1

0x8dc1,	// (0x00027dcb) volume_set_pane_vc_g2

0x8dca,	// (0x00027dd4) volume_set_pane_vc_g3

0x8dd3,	// (0x00027ddd) volume_set_pane_vc_g4

0x8ddc,	// (0x00027de6) volume_set_pane_vc_g5

0x8de5,	// (0x00027def) volume_set_pane_vc_g6

0x8dee,	// (0x00027df8) volume_set_pane_vc_g7

0x8df7,	// (0x00027e01) volume_set_pane_vc_g8

0x8e00,	// (0x00027e0a) volume_set_pane_vc_g9

0x8e09,	// (0x00027e13) volume_set_pane_vc_g10

0x0009,

0xfa13,	// (0x0002ea1d) volume_set_pane_vc_g

0xb8f7,	// (0x0002a901) volume_set_pane_vc

0xb8ff,	// (0x0002a909) button_value_adjust_pane_cp1_vc

0xb909,	// (0x0002a913) list_highlight_pane_cp2_vc

0xb912,	// (0x0002a91c) list_set_pane_vc_ParamLimits

0xb912,	// (0x0002a91c) list_set_pane_vc

0xb970,	// (0x0002a97a) main_pane_set_vc_t1_ParamLimits

0xb970,	// (0x0002a97a) main_pane_set_vc_t1

0xb985,	// (0x0002a98f) main_pane_set_vc_t2_ParamLimits

0xb985,	// (0x0002a98f) main_pane_set_vc_t2

0xb997,	// (0x0002a9a1) main_pane_set_vc_t3_ParamLimits

0xb997,	// (0x0002a9a1) main_pane_set_vc_t3

0xb9a9,	// (0x0002a9b3) main_pane_set_vc_t4_ParamLimits

0xb9a9,	// (0x0002a9b3) main_pane_set_vc_t4

0x0003,

0xfa28,	// (0x0002ea32) main_pane_set_vc_t_ParamLimits

0xfa28,	// (0x0002ea32) main_pane_set_vc_t

0xb9bb,	// (0x0002a9c5) setting_code_pane_vc_ParamLimits

0xb9bb,	// (0x0002a9c5) setting_code_pane_vc

0xb9ca,	// (0x0002a9d4) setting_slider_graphic_pane_vc

0xb9ca,	// (0x0002a9d4) setting_slider_pane_vc

0xb9ca,	// (0x0002a9d4) setting_text_pane_vc

0xb9ca,	// (0x0002a9d4) setting_volume_pane_vc

0xb9d2,	// (0x0002a9dc) scroll_pane_cp121_vc

0x1a13,	// (0x00020a1d) set_content_pane_vc

0xb9da,	// (0x0002a9e4) button_value_adjust_pane_g1

0xb9e3,	// (0x0002a9ed) button_value_adjust_pane_g2

0x0001,

0xfa84,	// (0x0002ea8e) button_value_adjust_pane_g

0xb9ec,	// (0x0002a9f6) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb9ec,	// (0x0002a9f6) form_field_slider_wide_pane_vc_t1

0xba00,	// (0x0002aa0a) form_field_slider_wide_pane_vc_t2_ParamLimits

0xba00,	// (0x0002aa0a) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa89,	// (0x0002ea93) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0002ea93) form_field_slider_wide_pane_vc_t

0x1618,	// (0x00020622) input_focus_pane_cp10_vc_ParamLimits

0x1618,	// (0x00020622) input_focus_pane_cp10_vc

0xba2e,	// (0x0002aa38) slider_cont_pane_cp1_vc_ParamLimits

0xba2e,	// (0x0002aa38) slider_cont_pane_cp1_vc

0xba40,	// (0x0002aa4a) slider_form_pane_g1_cp2

0xb874,	// (0x0002a87e) slider_form_pane_g2_cp2

0xba6d,	// (0x0002aa77) form_field_slider_pane_vc_t3

0xba7b,	// (0x0002aa85) form_field_slider_pane_vc_t4

0xba89,	// (0x0002aa93) slider_form_pane_vc_ParamLimits

0xba89,	// (0x0002aa93) slider_form_pane_vc

0xba96,	// (0x0002aaa0) form_field_slider_pane_vc_t1_ParamLimits

0xba96,	// (0x0002aaa0) form_field_slider_pane_vc_t1

0xba00,	// (0x0002aa0a) form_field_slider_pane_vc_t2_ParamLimits

0xba00,	// (0x0002aa0a) form_field_slider_pane_vc_t2

0x0001,

0xfa9b,	// (0x0002eaa5) form_field_slider_pane_vc_t_ParamLimits

0xfa9b,	// (0x0002eaa5) form_field_slider_pane_vc_t

0x1618,	// (0x00020622) input_focus_pane_cp9_vc_ParamLimits

0x1618,	// (0x00020622) input_focus_pane_cp9_vc

0xbab2,	// (0x0002aabc) slider_cont_pane_vc_ParamLimits

0xbab2,	// (0x0002aabc) slider_cont_pane_vc

0xbac6,	// (0x0002aad0) list_form_graphic_pane_cp_vc_ParamLimits

0xbac6,	// (0x0002aad0) list_form_graphic_pane_cp_vc

0x9ddf,	// (0x00028de9) form_field_popup_wide_pane_vc_g1

0xbadb,	// (0x0002aae5) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbadb,	// (0x0002aae5) form_field_popup_wide_pane_vc_t1

0x1a5c,	// (0x00020a66) input_focus_pane_cp8_vc_ParamLimits

0x1a5c,	// (0x00020a66) input_focus_pane_cp8_vc

0xbb20,	// (0x0002ab2a) list_form_wide_pane_vc_ParamLimits

0xbb20,	// (0x0002ab2a) list_form_wide_pane_vc

0xbb2c,	// (0x0002ab36) list_form_graphic_pane_vc_g1

0xbb34,	// (0x0002ab3e) list_form_graphic_pane_vc_t1_ParamLimits

0xbb34,	// (0x0002ab3e) list_form_graphic_pane_vc_t1

0x1626,	// (0x00020630) list_highlight_pane_cp5_vc_ParamLimits

0x1626,	// (0x00020630) list_highlight_pane_cp5_vc

0xbb50,	// (0x0002ab5a) list_form_graphic_pane_vc_ParamLimits

0xbb50,	// (0x0002ab5a) list_form_graphic_pane_vc

0x9ddf,	// (0x00028de9) form_field_popup_pane_vc_g1

0xbb66,	// (0x0002ab70) form_field_popup_pane_vc_t1_ParamLimits

0xbb66,	// (0x0002ab70) form_field_popup_pane_vc_t1

0x1a5c,	// (0x00020a66) input_focus_pane_cp7_vc_ParamLimits

0x1a5c,	// (0x00020a66) input_focus_pane_cp7_vc

0xbb7d,	// (0x0002ab87) list_form_pane_vc_ParamLimits

0xbb7d,	// (0x0002ab87) list_form_pane_vc

0xbb89,	// (0x0002ab93) data_form_pane_vc_t1_ParamLimits

0xbb89,	// (0x0002ab93) data_form_pane_vc_t1

0x1afa,	// (0x00020b04) input_focus_pane_vc_g1

0x1b02,	// (0x00020b0c) input_focus_pane_vc_g2

0x1b0a,	// (0x00020b14) input_focus_pane_vc_g3

0x1b12,	// (0x00020b1c) input_focus_pane_vc_g4

0x1b1a,	// (0x00020b24) input_focus_pane_vc_g5

0x1b22,	// (0x00020b2c) input_focus_pane_vc_g6

0x1b2a,	// (0x00020b34) input_focus_pane_vc_g7

0x1b32,	// (0x00020b3c) input_focus_pane_vc_g8

0x1b3a,	// (0x00020b44) input_focus_pane_vc_g9

0x15c0,	// (0x000205ca) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0002e696) input_focus_pane_vc_g

0x9dd3,	// (0x00028ddd) data_form_pane_vc_ParamLimits

0x9dd3,	// (0x00028ddd) data_form_pane_vc

0x9ddf,	// (0x00028de9) form_field_data_pane_vc_g1

0xbba4,	// (0x0002abae) form_field_data_pane_vc_t1_ParamLimits

0xbba4,	// (0x0002abae) form_field_data_pane_vc_t1

0x1a5c,	// (0x00020a66) input_focus_pane_vc_ParamLimits

0x1a5c,	// (0x00020a66) input_focus_pane_vc

0xbbbe,	// (0x0002abc8) button_value_adjust_pane_cp3_vc

0xbbc6,	// (0x0002abd0) button_value_adjust_pane_cp5_vc

0xbbce,	// (0x0002abd8) form_field_data_pane_vc_ParamLimits

0xbbce,	// (0x0002abd8) form_field_data_pane_vc

0xbbe5,	// (0x0002abef) form_field_data_pane_vc_cp2

0xbbed,	// (0x0002abf7) form_field_data_wide_pane_vc_ParamLimits

0xbbed,	// (0x0002abf7) form_field_data_wide_pane_vc

0xbc03,	// (0x0002ac0d) form_field_data_wide_pane_vc_cp2

0xbc0b,	// (0x0002ac15) form_field_popup_pane_vc_ParamLimits

0xbc0b,	// (0x0002ac15) form_field_popup_pane_vc

0xbc22,	// (0x0002ac2c) form_field_popup_wide_pane_vc_ParamLimits

0xbc22,	// (0x0002ac2c) form_field_popup_wide_pane_vc

0xbc38,	// (0x0002ac42) form_field_slider_pane_vc_ParamLimits

0xbc38,	// (0x0002ac42) form_field_slider_pane_vc

0xbc4b,	// (0x0002ac55) form_field_slider_wide_pane_vc_ParamLimits

0xbc4b,	// (0x0002ac55) form_field_slider_wide_pane_vc

0xbc5e,	// (0x0002ac68) grid_touch_1_pane_ParamLimits

0xbc5e,	// (0x0002ac68) grid_touch_1_pane

0xbc6a,	// (0x0002ac74) grid_touch_2_pane_ParamLimits

0xbc6a,	// (0x0002ac74) grid_touch_2_pane

0x7d05,	// (0x00026d0f) touch_pane_g1_ParamLimits

0x7d05,	// (0x00026d0f) touch_pane_g1

0xbc82,	// (0x0002ac8c) cell_app_pane_cp_wide_ParamLimits

0xbc82,	// (0x0002ac8c) cell_app_pane_cp_wide

0xbc93,	// (0x0002ac9d) grid_popup_fast_wide_pane_ParamLimits

0xbc93,	// (0x0002ac9d) grid_popup_fast_wide_pane

0xbca7,	// (0x0002acb1) scroll_pane_cp19_ParamLimits

0xbca7,	// (0x0002acb1) scroll_pane_cp19

0x15ca,	// (0x000205d4) bg_popup_window_pane_cp20

0xbcbb,	// (0x0002acc5) listscroll_popup_fast_wide_pane

0x1626,	// (0x00020630) grid_indicator_nsta_pane

0xbcc3,	// (0x0002accd) clock_nsta_pane_g1

0xbccc,	// (0x0002acd6) clock_nsta_pane_t1

0xbce8,	// (0x0002acf2) cell_indicator_nsta_pane_ParamLimits

0xbce8,	// (0x0002acf2) cell_indicator_nsta_pane

0xbd19,	// (0x0002ad23) cell_indicator_nsta_pane_g1

0xbd27,	// (0x0002ad31) cell_indicator_nsta_pane_g2

0x0001,

0xfaac,	// (0x0002eab6) cell_indicator_nsta_pane_g

0xbd34,	// (0x0002ad3e) clock_nsta_pane_cp

0xbd3c,	// (0x0002ad46) indicator_nsta_pane_cp

0xbd44,	// (0x0002ad4e) nsta_clock_indic_pane_g1

0x167c,	// (0x00020686) grid_indicator_pane

0x72d9,	// (0x000262e3) scroll_pane_cp29

0x74d9,	// (0x000264e3) indicator_nsta_pane_cp2_ParamLimits

0x74d9,	// (0x000264e3) indicator_nsta_pane_cp2

0x1626,	// (0x00020630) main_apps_wheel_pane

0x9ff7,	// (0x00029001) form_midp_field_text_pane_ParamLimits

0xa140,	// (0x0002914a) scroll_bar_cp050_ParamLimits

0xbda5,	// (0x0002adaf) cell_indicator_pane_ParamLimits

0xbda5,	// (0x0002adaf) cell_indicator_pane

0xbdbe,	// (0x0002adc8) cell_indicator_pane_g1

0xbdc8,	// (0x0002add2) grid_wheel_folder_pane_ParamLimits

0xbdc8,	// (0x0002add2) grid_wheel_folder_pane

0xbdde,	// (0x0002ade8) list_wheel_apps_pane_ParamLimits

0xbdde,	// (0x0002ade8) list_wheel_apps_pane

0xbdef,	// (0x0002adf9) main_apps_wheel_pane_g1_ParamLimits

0xbdef,	// (0x0002adf9) main_apps_wheel_pane_g1

0xbe03,	// (0x0002ae0d) main_apps_wheel_pane_g2_ParamLimits

0xbe03,	// (0x0002ae0d) main_apps_wheel_pane_g2

0x0001,

0xfac8,	// (0x0002ead2) main_apps_wheel_pane_g_ParamLimits

0xfac8,	// (0x0002ead2) main_apps_wheel_pane_g

0xbe1b,	// (0x0002ae25) main_apps_wheel_pane_t1_ParamLimits

0xbe1b,	// (0x0002ae25) main_apps_wheel_pane_t1

0xbe3e,	// (0x0002ae48) list_wheel_apps_pane_g1

0xbe46,	// (0x0002ae50) list_wheel_apps_pane_g2

0xbe4e,	// (0x0002ae58) list_wheel_apps_pane_g3

0xbe58,	// (0x0002ae62) list_wheel_apps_pane_g4

0xbe62,	// (0x0002ae6c) list_wheel_apps_pane_g5

0x0004,

0xfacd,	// (0x0002ead7) list_wheel_apps_pane_g

0x77d7,	// (0x000267e1) navi_icon_text_pane

0x8463,	// (0x0002746d) aid_fill_nsta

0xbe85,	// (0x0002ae8f) navi_icon_text_pane_g1

0xbe91,	// (0x0002ae9b) navi_icon_text_pane_t1

0x767a,	// (0x00026684) list_set_graphic_pane_t1_ParamLimits

0x767a,	// (0x00026684) list_set_graphic_pane_t1

0xa86f,	// (0x00029879) popup_midp_note_alarm_window_t6_ParamLimits

0xa86f,	// (0x00029879) popup_midp_note_alarm_window_t6

0xa881,	// (0x0002988b) popup_midp_note_alarm_window_t7_ParamLimits

0xa881,	// (0x0002988b) popup_midp_note_alarm_window_t7

0xa893,	// (0x0002989d) popup_midp_note_alarm_window_t8_ParamLimits

0xa893,	// (0x0002989d) popup_midp_note_alarm_window_t8

0xa8a5,	// (0x000298af) popup_midp_note_alarm_window_t9_ParamLimits

0xa8a5,	// (0x000298af) popup_midp_note_alarm_window_t9

0xa8b7,	// (0x000298c1) popup_midp_note_alarm_window_t10_ParamLimits

0xa8b7,	// (0x000298c1) popup_midp_note_alarm_window_t10

0xa8c9,	// (0x000298d3) popup_midp_note_alarm_window_t11_ParamLimits

0xa8c9,	// (0x000298d3) popup_midp_note_alarm_window_t11

0xa8db,	// (0x000298e5) scroll_pane_cp17_ParamLimits

0xa8db,	// (0x000298e5) scroll_pane_cp17

0x8ac6,	// (0x00027ad0) volume_small_pane_cp_g1

0x8e12,	// (0x00027e1c) volume_small_pane_cp_g2

0x8e1b,	// (0x00027e25) volume_small_pane_cp_g3

0x8e24,	// (0x00027e2e) volume_small_pane_cp_g4

0x8e2d,	// (0x00027e37) volume_small_pane_cp_g5

0x8ddc,	// (0x00027de6) volume_small_pane_cp_g6

0x8e36,	// (0x00027e40) volume_small_pane_cp_g7

0x8e3f,	// (0x00027e49) volume_small_pane_cp_g8

0x8e48,	// (0x00027e52) volume_small_pane_cp_g9

0x8e51,	// (0x00027e5b) volume_small_pane_cp_g10

0x7a2c,	// (0x00026a36) midp_ticker_pane_g1_ParamLimits

0x7a38,	// (0x00026a42) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0002e762) midp_ticker_pane_g_ParamLimits

0x7a44,	// (0x00026a4e) midp_ticker_pane_t1_ParamLimits

0x8479,	// (0x00027483) aid_fill_nsta_2

0xa12c,	// (0x00029136) list_form2_midp_pane

0xb234,	// (0x0002a23e) midp_editing_number_pane_ParamLimits

0xb243,	// (0x0002a24d) midp_ticker_pane_ParamLimits

0xbea3,	// (0x0002aead) form2_midp_field_pane

0xbec7,	// (0x0002aed1) scroll_pane_cp51

0xbee7,	// (0x0002aef1) form2_midp_button_pane_ParamLimits

0xbee7,	// (0x0002aef1) form2_midp_button_pane

0xbef9,	// (0x0002af03) form2_midp_content_pane_ParamLimits

0xbef9,	// (0x0002af03) form2_midp_content_pane

0xbf13,	// (0x0002af1d) form2_midp_field_choice_group_pane

0xbf1b,	// (0x0002af25) form2_midp_field_pane_g1

0xbf23,	// (0x0002af2d) form2_midp_field_pane_g2

0xbf2b,	// (0x0002af35) form2_midp_field_pane_g3

0xbf33,	// (0x0002af3d) form2_midp_field_pane_g4

0x0003,

0xfaf2,	// (0x0002eafc) form2_midp_field_pane_g

0xbf3b,	// (0x0002af45) form2_midp_gauge_slider_pane

0xbf43,	// (0x0002af4d) form2_midp_gauge_wait_pane

0xbf4b,	// (0x0002af55) form2_midp_image_pane_ParamLimits

0xbf4b,	// (0x0002af55) form2_midp_image_pane

0xbf66,	// (0x0002af70) form2_midp_label_pane_ParamLimits

0xbf66,	// (0x0002af70) form2_midp_label_pane

0xbf7f,	// (0x0002af89) form2_midp_label_pane_cp_ParamLimits

0xbf7f,	// (0x0002af89) form2_midp_label_pane_cp

0xbfa0,	// (0x0002afaa) form2_midp_string_pane_ParamLimits

0xbfa0,	// (0x0002afaa) form2_midp_string_pane

0x6173,	// (0x0002517d) form2_midp_text_pane_ParamLimits

0x6173,	// (0x0002517d) form2_midp_text_pane

0xbfb2,	// (0x0002afbc) form2_midp_time_pane

0xbfc2,	// (0x0002afcc) input_focus_pane_cp51_ParamLimits

0xbfc2,	// (0x0002afcc) input_focus_pane_cp51

0xbfda,	// (0x0002afe4) form2_midp_label_pane_t1_ParamLimits

0xbfda,	// (0x0002afe4) form2_midp_label_pane_t1

0x618c,	// (0x00025196) form2_mdip_text_pane_t1_ParamLimits

0x618c,	// (0x00025196) form2_mdip_text_pane_t1

0x61aa,	// (0x000251b4) form2_midp_time_pane_t1

0xc023,	// (0x0002b02d) form2_midp_gauge_slider_pane_t1

0xc035,	// (0x0002b03f) form2_midp_gauge_slider_pane_t2

0xc047,	// (0x0002b051) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafb,	// (0x0002eb05) form2_midp_gauge_slider_pane_t

0xc059,	// (0x0002b063) form2_midp_slider_pane

0xc065,	// (0x0002b06f) form2_midp_gauge_wait_pane_t1

0xc073,	// (0x0002b07d) form2_midp_wait_pane_ParamLimits

0xc073,	// (0x0002b07d) form2_midp_wait_pane

0xc09e,	// (0x0002b0a8) list_single_2graphic_pane_cp4_ParamLimits

0xc09e,	// (0x0002b0a8) list_single_2graphic_pane_cp4

0x9e48,	// (0x00028e52) list_single_midp_graphic_pane_cp_ParamLimits

0x9e48,	// (0x00028e52) list_single_midp_graphic_pane_cp

0x15ca,	// (0x000205d4) list_highlight_pane_cp20

0xc0c6,	// (0x0002b0d0) list_single_2graphic_pane_g1_cp4

0xb6be,	// (0x0002a6c8) list_single_2graphic_pane_g2_cp4

0xc0ce,	// (0x0002b0d8) list_single_2graphic_pane_t1_cp4

0x1626,	// (0x00020630) list_highlight_pane_cp21

0xc0dd,	// (0x0002b0e7) list_single_midp_graphic_pane_g4_cp

0xc0ec,	// (0x0002b0f6) list_single_midp_graphic_pane_t1_cp

0xc101,	// (0x0002b10b) form2_mdip_string_pane_t1_ParamLimits

0xc101,	// (0x0002b10b) form2_mdip_string_pane_t1

0x15ca,	// (0x000205d4) bg_wml_button_pane_cp2

0x15c0,	// (0x000205ca) form2_midp_image_pane_g1

0x567d,	// (0x00024687) list_double_large_graphic_pane_g5_ParamLimits

0x567d,	// (0x00024687) list_double_large_graphic_pane_g5

0x6fb8,	// (0x00025fc2) midp_form_pane_ParamLimits

0x1626,	// (0x00020630) main_apps_wheel_pane_ParamLimits

0x824b,	// (0x00027255) popup_preview_window_ParamLimits

0x824b,	// (0x00027255) popup_preview_window

0x8406,	// (0x00027410) popup_touch_info_window_ParamLimits

0x8406,	// (0x00027410) popup_touch_info_window

0x8424,	// (0x0002742e) popup_touch_menu_window_ParamLimits

0x8424,	// (0x0002742e) popup_touch_menu_window

0x15b6,	// (0x000205c0) bg_popup_sub_pane_cp6

0xc20e,	// (0x0002b218) list_touch_menu_pane

0xc216,	// (0x0002b220) list_single_touch_menu_pane_ParamLimits

0xc216,	// (0x0002b220) list_single_touch_menu_pane

0xc22c,	// (0x0002b236) list_single_touch_menu_pane_t1

0x1626,	// (0x00020630) bg_popup_sub_pane_cp7_ParamLimits

0x1626,	// (0x00020630) bg_popup_sub_pane_cp7

0xc23a,	// (0x0002b244) heading_sub_pane

0xc242,	// (0x0002b24c) list_touch_info_pane_ParamLimits

0xc242,	// (0x0002b24c) list_touch_info_pane

0xc251,	// (0x0002b25b) list_single_touch_info_pane_ParamLimits

0xc251,	// (0x0002b25b) list_single_touch_info_pane

0xc263,	// (0x0002b26d) list_single_touch_info_pane_t1

0xc271,	// (0x0002b27b) list_single_touch_info_pane_t2

0x0001,

0xfb09,	// (0x0002eb13) list_single_touch_info_pane_t

0x7957,	// (0x00026961) bg_popup_heading_pane_cp

0xc27f,	// (0x0002b289) heading_sub_pane_t1

0x9d6d,	// (0x00028d77) bg_popup_preview_window_pane_cp_ParamLimits

0x9d6d,	// (0x00028d77) bg_popup_preview_window_pane_cp

0xc23a,	// (0x0002b244) heading_preview_pane

0xc242,	// (0x0002b24c) list_preview_pane_ParamLimits

0xc242,	// (0x0002b24c) list_preview_pane

0xc28d,	// (0x0002b297) popup_preview_window_g1

0xc251,	// (0x0002b25b) list_single_preview_pane_ParamLimits

0xc251,	// (0x0002b25b) list_single_preview_pane

0xc295,	// (0x0002b29f) list_single_preview_pane_g1

0xc29d,	// (0x0002b2a7) list_single_preview_pane_t1

0xc263,	// (0x0002b26d) list_single_preview_pane_t2

0x0001,

0xfb0e,	// (0x0002eb18) list_single_preview_pane_t

0xc2ab,	// (0x0002b2b5) bg_popup_heading_pane_cp2_ParamLimits

0xc2ab,	// (0x0002b2b5) bg_popup_heading_pane_cp2

0xc2c1,	// (0x0002b2cb) heading_preview_pane_g1

0xc2c9,	// (0x0002b2d3) heading_preview_pane_t1_ParamLimits

0xc2c9,	// (0x0002b2d3) heading_preview_pane_t1

0x1693,	// (0x0002069d) soft_indicator_pane_t1_ParamLimits

0x196e,	// (0x00020978) scroll_pane_ParamLimits

0x37b0,	// (0x000227ba) scroll_sc2_left_pane

0x37a7,	// (0x000227b1) scroll_sc2_right_pane

0x37cf,	// (0x000227d9) scroll_bg_pane_g1_ParamLimits

0x37e4,	// (0x000227ee) scroll_bg_pane_g2_ParamLimits

0x37fc,	// (0x00022806) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0002e6ed) scroll_bg_pane_g_ParamLimits

0x37cf,	// (0x000227d9) scroll_handle_pane_g1_ParamLimits

0x3811,	// (0x0002281b) scroll_handle_pane_g2_ParamLimits

0x37fc,	// (0x00022806) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0002e6f4) scroll_handle_pane_g_ParamLimits

0x7ece,	// (0x00026ed8) popup_choice_list_window_ParamLimits

0x7ece,	// (0x00026ed8) popup_choice_list_window

0x8898,	// (0x000278a2) choice_list_pane

0x894a,	// (0x00027954) cell_toolbar_pane_t1

0x8972,	// (0x0002797c) toolbar_button_pane_ParamLimits

0xad95,	// (0x00029d9f) ai_gene_pane_1_t2_ParamLimits

0xad95,	// (0x00029d9f) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0002e917) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0002e917) ai_gene_pane_1_t

0xc2e6,	// (0x0002b2f0) scroll_sc2_left_pane_g1

0xc2e6,	// (0x0002b2f0) scroll_sc2_right_pane_g1

0x7ea6,	// (0x00026eb0) bg_popup_sub_pane_cp10

0xc2f0,	// (0x0002b2fa) list_choice_list_pane

0xc309,	// (0x0002b313) list_single_choice_list_pane_ParamLimits

0xc309,	// (0x0002b313) list_single_choice_list_pane

0xc31c,	// (0x0002b326) list_single_choice_list_pane_g1

0x6f7e,	// (0x00025f88) list_single_choice_list_pane_t1_ParamLimits

0x6f7e,	// (0x00025f88) list_single_choice_list_pane_t1

0xc324,	// (0x0002b32e) choice_list_pane_g1

0xc32c,	// (0x0002b336) choice_list_pane_t1

0x15b6,	// (0x000205c0) input_focus_pane_cp11

0x1d1d,	// (0x00020d27) title_pane_stacon_g2_ParamLimits

0x1d1d,	// (0x00020d27) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0002e6d3) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0002e6d3) title_pane_stacon_g

0x7957,	// (0x00026961) cursor_press_pane

0x7f76,	// (0x00026f80) popup_fep_hwr_window_ParamLimits

0x7f76,	// (0x00026f80) popup_fep_hwr_window

0x7fee,	// (0x00026ff8) popup_fep_vkb_window_ParamLimits

0x7fee,	// (0x00026ff8) popup_fep_vkb_window

0xc33a,	// (0x0002b344) cursor_press_pane_g1

0x0002,

0xfb37,	// (0x0002eb41) fep_vkb_side_pane_g_ParamLimits

0x8e93,	// (0x00027e9d) fep_hwr_candidate_pane_ParamLimits

0x8e93,	// (0x00027e9d) fep_hwr_candidate_pane

0x8ebd,	// (0x00027ec7) fep_hwr_side_pane_ParamLimits

0x8ebd,	// (0x00027ec7) fep_hwr_side_pane

0x8edd,	// (0x00027ee7) fep_hwr_top_pane_ParamLimits

0x8edd,	// (0x00027ee7) fep_hwr_top_pane

0x8ef5,	// (0x00027eff) fep_hwr_write_pane_ParamLimits

0x8ef5,	// (0x00027eff) fep_hwr_write_pane

0xfb37,	// (0x0002eb41) fep_vkb_side_pane_g

0xc342,	// (0x0002b34c) fep_hwr_top_pane_g1

0xc354,	// (0x0002b35e) fep_hwr_top_pane_g2

0x8f21,	// (0x00027f2b) fep_hwr_top_pane_g3

0x0002,

0xfb13,	// (0x0002eb1d) fep_hwr_top_pane_g

0x8f36,	// (0x00027f40) fep_hwr_top_text_pane

0x38d4,	// (0x000228de) fep_hwr_top_text_pane_g1

0xc38a,	// (0x0002b394) fep_hwr_top_text_pane_t1

0x902c,	// (0x00028036) fep_hwr_candidate_pane_g1

0xc5cf,	// (0x0002b5d9) fep_vkb_keypad_pane_g3_ParamLimits

0xc5cf,	// (0x0002b5d9) fep_vkb_keypad_pane_g3

0xc5f7,	// (0x0002b601) fep_vkb_keypad_pane_g4_ParamLimits

0xc5f7,	// (0x0002b601) fep_vkb_keypad_pane_g4

0xc666,	// (0x0002b670) fep_vkb_bottom_pane_g2_ParamLimits

0xc666,	// (0x0002b670) fep_vkb_bottom_pane_g2

0x0001,

0xfb3e,	// (0x0002eb48) fep_vkb_bottom_pane_g_ParamLimits

0xfb3e,	// (0x0002eb48) fep_vkb_bottom_pane_g

0xc2e6,	// (0x0002b2f0) cell_vkb_side_pane_g2

0x0001,

0xfb48,	// (0x0002eb52) cell_vkb_side_pane_g

0xc6f1,	// (0x0002b6fb) cell_vkb_side_pane_t1

0xc6ff,	// (0x0002b709) cell_vkb_side_pane_t1_copy1

0xc2e6,	// (0x0002b2f0) bg_fep_vkb_candidate_pane_g2

0xc82b,	// (0x0002b835) cell_vkb_candidate_pane_ParamLimits

0xc398,	// (0x0002b3a2) aid_size_cell_vkb_ParamLimits

0xc398,	// (0x0002b3a2) aid_size_cell_vkb

0xc82b,	// (0x0002b835) cell_vkb_candidate_pane

0x9046,	// (0x00028050) bg_popup_fep_shadow_pane_g1

0xc426,	// (0x0002b430) fep_vkb_bottom_pane_ParamLimits

0xc426,	// (0x0002b430) fep_vkb_bottom_pane

0xc45c,	// (0x0002b466) fep_vkb_candidate_pane_ParamLimits

0xc45c,	// (0x0002b466) fep_vkb_candidate_pane

0xc478,	// (0x0002b482) fep_vkb_keypad_pane_ParamLimits

0xc478,	// (0x0002b482) fep_vkb_keypad_pane

0xc4b7,	// (0x0002b4c1) fep_vkb_side_pane_ParamLimits

0xc4b7,	// (0x0002b4c1) fep_vkb_side_pane

0xc4f3,	// (0x0002b4fd) fep_vkb_top_pane_ParamLimits

0xc4f3,	// (0x0002b4fd) fep_vkb_top_pane

0xc528,	// (0x0002b532) fep_vkb_top_pane_g1_ParamLimits

0xc528,	// (0x0002b532) fep_vkb_top_pane_g1

0xc537,	// (0x0002b541) fep_vkb_top_pane_g2_ParamLimits

0xc537,	// (0x0002b541) fep_vkb_top_pane_g2

0xc546,	// (0x0002b550) fep_vkb_top_pane_g3_ParamLimits

0xc546,	// (0x0002b550) fep_vkb_top_pane_g3

0x0003,

0xfb2e,	// (0x0002eb38) fep_vkb_top_pane_g_ParamLimits

0xfb2e,	// (0x0002eb38) fep_vkb_top_pane_g

0xc564,	// (0x0002b56e) fep_vkb_top_text_pane_ParamLimits

0xc564,	// (0x0002b56e) fep_vkb_top_text_pane

0xc575,	// (0x0002b57f) fep_vkb_side_pane_g1_ParamLimits

0xc575,	// (0x0002b57f) fep_vkb_side_pane_g1

0xc5be,	// (0x0002b5c8) grid_vkb_side_pane_ParamLimits

0xc5be,	// (0x0002b5c8) grid_vkb_side_pane

0x904e,	// (0x00028058) bg_popup_fep_shadow_pane_g2

0x9057,	// (0x00028061) bg_popup_fep_shadow_pane_g3

0x905f,	// (0x00028069) bg_popup_fep_shadow_pane_g4

0x9068,	// (0x00028072) bg_popup_fep_shadow_pane_g5

0x9072,	// (0x0002807c) bg_popup_fep_shadow_pane_g6

0x907a,	// (0x00028084) bg_popup_fep_shadow_pane_g7

0x1b1a,	// (0x00020b24) bg_popup_fep_shadow_pane_g8

0xc615,	// (0x0002b61f) grid_vkb_keypad_number_pane_ParamLimits

0xc615,	// (0x0002b61f) grid_vkb_keypad_number_pane

0xc625,	// (0x0002b62f) grid_vkb_keypad_pane_ParamLimits

0xc625,	// (0x0002b62f) grid_vkb_keypad_pane

0xc64b,	// (0x0002b655) fep_vkb_bottom_pane_g1_ParamLimits

0xc64b,	// (0x0002b655) fep_vkb_bottom_pane_g1

0xc674,	// (0x0002b67e) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc674,	// (0x0002b67e) grid_vkb_keypad_bottom_left_pane

0xc689,	// (0x0002b693) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc689,	// (0x0002b693) grid_vkb_keypad_bottom_right_pane

0xc69e,	// (0x0002b6a8) fep_vkb_top_text_pane_g1

0xc6b9,	// (0x0002b6c3) fep_vkb_top_text_pane_t1

0xc6ce,	// (0x0002b6d8) cell_vkb_side_pane_ParamLimits

0xc6ce,	// (0x0002b6d8) cell_vkb_side_pane

0xc2e6,	// (0x0002b2f0) cell_vkb_side_pane_g1

0xc70d,	// (0x0002b717) cell_vkb_keypad_pane_ParamLimits

0xc70d,	// (0x0002b717) cell_vkb_keypad_pane

0xc782,	// (0x0002b78c) cell_vkb_keypad_pane_g1

0x0008,

0xfb5b,	// (0x0002eb65) bg_popup_fep_shadow_pane_g

0xc2e6,	// (0x0002b2f0) cell_hwr_side_pane_g1

0xc2e6,	// (0x0002b2f0) cell_hwr_side_pane_g2

0xc78c,	// (0x0002b796) cell_vkb_keypad_pane_t1

0xc79a,	// (0x0002b7a4) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc79a,	// (0x0002b7a4) cell_vkb_keypad_bottom_left_pane

0xc7b7,	// (0x0002b7c1) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc7b7,	// (0x0002b7c1) cell_vkb_keypad_bottom_right_pane

0xc2e6,	// (0x0002b2f0) cell_vkb_keypad_bottom_left_pane_g1

0xc2e6,	// (0x0002b2f0) cell_vkb_keypad_bottom_right_pane_g1

0xc7f0,	// (0x0002b7fa) cell_vkb_keypad_number_pane_ParamLimits

0xc7f0,	// (0x0002b7fa) cell_vkb_keypad_number_pane

0xc80f,	// (0x0002b819) cell_vkb_keypad_number_pane_g1

0xc819,	// (0x0002b823) cell_vkb_keypad_number_pane_g2

0xc822,	// (0x0002b82c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4d,	// (0x0002eb57) cell_vkb_keypad_number_pane_g

0xc78c,	// (0x0002b796) cell_vkb_keypad_number_pane_t1

0xc846,	// (0x0002b850) fep_vkb_candidate_pane_g1

0x0001,

0xfb48,	// (0x0002eb52) cell_hwr_side_pane_g

0xc85f,	// (0x0002b869) cell_hwr_side_pane_t1

0x908c,	// (0x00028096) cell_hwr_side_pane_t1_copy1

0xc556,	// (0x0002b560) cell_hwr_candidate_pane_g1

0x909a,	// (0x000280a4) cell_hwr_candidate_pane_t1

0xc2e6,	// (0x0002b2f0) cell_vkb_candidate_pane_g2

0xc8e5,	// (0x0002b8ef) cell_vkb_candidate_pane_t1

0x8e5a,	// (0x00027e64) bg_popup_fep_shadow_pane_ParamLimits

0x8e5a,	// (0x00027e64) bg_popup_fep_shadow_pane

0x1586,	// (0x00020590) bg_fep_hwr_top_pane_g4

0xc366,	// (0x0002b370) bg_hwr_side_pane_g1_ParamLimits

0xc366,	// (0x0002b370) bg_hwr_side_pane_g1

0x8f72,	// (0x00027f7c) cell_hwr_side_pane_ParamLimits

0x8f72,	// (0x00027f7c) cell_hwr_side_pane

0x8fad,	// (0x00027fb7) fep_hwr_write_pane_g1_ParamLimits

0x8fad,	// (0x00027fb7) fep_hwr_write_pane_g1

0x8fba,	// (0x00027fc4) fep_hwr_write_pane_g2_ParamLimits

0x8fba,	// (0x00027fc4) fep_hwr_write_pane_g2

0x8fc7,	// (0x00027fd1) fep_hwr_write_pane_g3_ParamLimits

0x8fc7,	// (0x00027fd1) fep_hwr_write_pane_g3

0x8fd5,	// (0x00027fdf) fep_hwr_write_pane_g4_ParamLimits

0x8fd5,	// (0x00027fdf) fep_hwr_write_pane_g4

0x0005,

0xfb1a,	// (0x0002eb24) fep_hwr_write_pane_g_ParamLimits

0xfb1a,	// (0x0002eb24) fep_hwr_write_pane_g

0x1586,	// (0x00020590) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1586,	// (0x00020590) bg_fep_hwr_candidate_pane_g2

0x8fea,	// (0x00027ff4) cell_hwr_candidate_pane_ParamLimits

0x8fea,	// (0x00027ff4) cell_hwr_candidate_pane

0x902c,	// (0x00028036) fep_hwr_candidate_pane_g1_ParamLimits

0xc3c6,	// (0x0002b3d0) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc3c6,	// (0x0002b3d0) bg_popup_fep_shadow_pane_cp2

0xc556,	// (0x0002b560) fep_vkb_top_pane_g4_ParamLimits

0xc556,	// (0x0002b560) fep_vkb_top_pane_g4

0xc59c,	// (0x0002b5a6) fep_vkb_side_pane_g2_ParamLimits

0xc59c,	// (0x0002b5a6) fep_vkb_side_pane_g2

0x57f0,	// (0x000247fa) list_setting_pane_t4_ParamLimits

0x57f0,	// (0x000247fa) list_setting_pane_t4

0x5882,	// (0x0002488c) list_setting_number_pane_t5_ParamLimits

0x5882,	// (0x0002488c) list_setting_number_pane_t5

0x7308,	// (0x00026312) list_double_heading_pane_cp2_ParamLimits

0x7308,	// (0x00026312) list_double_heading_pane_cp2

0xc8f3,	// (0x0002b8fd) list_double_heading_pane_g1_cp2_ParamLimits

0xc8f3,	// (0x0002b8fd) list_double_heading_pane_g1_cp2

0xc8ff,	// (0x0002b909) list_double_heading_pane_g2_cp2_ParamLimits

0xc8ff,	// (0x0002b909) list_double_heading_pane_g2_cp2

0xc913,	// (0x0002b91d) list_double_heading_pane_t1_cp2_ParamLimits

0xc913,	// (0x0002b91d) list_double_heading_pane_t1_cp2

0xc929,	// (0x0002b933) list_double_heading_pane_t2_cp2_ParamLimits

0xc929,	// (0x0002b933) list_double_heading_pane_t2_cp2

0x15ae,	// (0x000205b8) aid_value_unit2

0x682e,	// (0x00025838) popup_preview_fixed_window

0x176a,	// (0x00020774) bg_popup_preview_window_pane_cp02

0xc93b,	// (0x0002b945) list_preview_fixed_pane

0xc981,	// (0x0002b98b) list_empty_pane_fp_ParamLimits

0xc981,	// (0x0002b98b) list_empty_pane_fp

0xc981,	// (0x0002b98b) list_single_cale_day_pane_fp_ParamLimits

0xc981,	// (0x0002b98b) list_single_cale_day_pane_fp

0xc981,	// (0x0002b98b) list_single_graphic_heading_pane_fp_ParamLimits

0xc981,	// (0x0002b98b) list_single_graphic_heading_pane_fp

0xc981,	// (0x0002b98b) list_single_graphic_pane_fp_ParamLimits

0xc981,	// (0x0002b98b) list_single_graphic_pane_fp

0xc981,	// (0x0002b98b) list_single_heading_pane_fp_ParamLimits

0xc981,	// (0x0002b98b) list_single_heading_pane_fp

0xc981,	// (0x0002b98b) list_single_pane_fp_ParamLimits

0xc981,	// (0x0002b98b) list_single_pane_fp

0xc997,	// (0x0002b9a1) list_single_pane_fp_g1_ParamLimits

0xc997,	// (0x0002b9a1) list_single_pane_fp_g1

0x57bb,	// (0x000247c5) list_single_pane_fp_g2_ParamLimits

0x57bb,	// (0x000247c5) list_single_pane_fp_g2

0x61bd,	// (0x000251c7) list_single_pane_fp_g3_ParamLimits

0x61bd,	// (0x000251c7) list_single_pane_fp_g3

0xc9a3,	// (0x0002b9ad) list_single_pane_fp_g4_ParamLimits

0xc9a3,	// (0x0002b9ad) list_single_pane_fp_g4

0x0003,

0xfb7c,	// (0x0002eb86) list_single_pane_fp_g_ParamLimits

0xfb7c,	// (0x0002eb86) list_single_pane_fp_g

0x61d1,	// (0x000251db) list_single_pane_fp_t1_ParamLimits

0x61d1,	// (0x000251db) list_single_pane_fp_t1

0x61e8,	// (0x000251f2) list_single_graphic_pane_fp_g1_ParamLimits

0x61e8,	// (0x000251f2) list_single_graphic_pane_fp_g1

0xc997,	// (0x0002b9a1) list_single_graphic_pane_fp_g2_ParamLimits

0xc997,	// (0x0002b9a1) list_single_graphic_pane_fp_g2

0x57bb,	// (0x000247c5) list_single_graphic_pane_fp_g3_ParamLimits

0x57bb,	// (0x000247c5) list_single_graphic_pane_fp_g3

0x61bd,	// (0x000251c7) list_single_graphic_pane_fp_g4_ParamLimits

0x61bd,	// (0x000251c7) list_single_graphic_pane_fp_g4

0xc9a3,	// (0x0002b9ad) list_single_graphic_pane_fp_g5_ParamLimits

0xc9a3,	// (0x0002b9ad) list_single_graphic_pane_fp_g5

0x0004,

0xfb85,	// (0x0002eb8f) list_single_graphic_pane_fp_g_ParamLimits

0xfb85,	// (0x0002eb8f) list_single_graphic_pane_fp_g

0x61f4,	// (0x000251fe) list_single_graphic_pane_fp_t1_ParamLimits

0x61f4,	// (0x000251fe) list_single_graphic_pane_fp_t1

0x61e8,	// (0x000251f2) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x61e8,	// (0x000251f2) list_single_graphic_heading_pane_fp_g1

0xc997,	// (0x0002b9a1) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc997,	// (0x0002b9a1) list_single_graphic_heading_pane_fp_g2

0x57bb,	// (0x000247c5) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x57bb,	// (0x000247c5) list_single_graphic_heading_pane_fp_g3

0x61bd,	// (0x000251c7) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x61bd,	// (0x000251c7) list_single_graphic_heading_pane_fp_g4

0xc9a3,	// (0x0002b9ad) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc9a3,	// (0x0002b9ad) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0002eb8f) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0002eb8f) list_single_graphic_heading_pane_fp_g

0x620a,	// (0x00025214) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x620a,	// (0x00025214) list_single_graphic_heading_pane_fp_t1

0x6220,	// (0x0002522a) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6220,	// (0x0002522a) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x0002eb9a) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x0002eb9a) list_single_graphic_heading_pane_fp_t

0x6232,	// (0x0002523c) list_single_cale_day_pane_fp_g1_ParamLimits

0x6232,	// (0x0002523c) list_single_cale_day_pane_fp_g1

0xc9af,	// (0x0002b9b9) list_single_cale_day_pane_fp_g2_ParamLimits

0xc9af,	// (0x0002b9b9) list_single_cale_day_pane_fp_g2

0x626a,	// (0x00025274) list_single_cale_day_pane_fp_g3_ParamLimits

0x626a,	// (0x00025274) list_single_cale_day_pane_fp_g3

0x6292,	// (0x0002529c) list_single_cale_day_pane_fp_g4_ParamLimits

0x6292,	// (0x0002529c) list_single_cale_day_pane_fp_g4

0x62b6,	// (0x000252c0) list_single_cale_day_pane_fp_g5_ParamLimits

0x62b6,	// (0x000252c0) list_single_cale_day_pane_fp_g5

0x0004,

0xfb95,	// (0x0002eb9f) list_single_cale_day_pane_fp_g_ParamLimits

0xfb95,	// (0x0002eb9f) list_single_cale_day_pane_fp_g

0x62da,	// (0x000252e4) list_single_cale_day_pane_fp_t1_ParamLimits

0x62da,	// (0x000252e4) list_single_cale_day_pane_fp_t1

0x6300,	// (0x0002530a) list_single_cale_day_pane_fp_t2_ParamLimits

0x6300,	// (0x0002530a) list_single_cale_day_pane_fp_t2

0x6319,	// (0x00025323) list_single_cale_day_pane_fp_t3_ParamLimits

0x6319,	// (0x00025323) list_single_cale_day_pane_fp_t3

0x0002,

0xfba0,	// (0x0002ebaa) list_single_cale_day_pane_fp_t_ParamLimits

0xfba0,	// (0x0002ebaa) list_single_cale_day_pane_fp_t

0xc997,	// (0x0002b9a1) list_empty_pane_fp_g1_ParamLimits

0xc997,	// (0x0002b9a1) list_empty_pane_fp_g1

0x6332,	// (0x0002533c) list_empty_pane_fp_t1

0x6340,	// (0x0002534a) list_empty_pane_fp_t2

0x0001,

0xfba7,	// (0x0002ebb1) list_empty_pane_fp_t

0xc997,	// (0x0002b9a1) list_single_heading_pane_fp_g1_ParamLimits

0xc997,	// (0x0002b9a1) list_single_heading_pane_fp_g1

0x57bb,	// (0x000247c5) list_single_heading_pane_fp_g2_ParamLimits

0x57bb,	// (0x000247c5) list_single_heading_pane_fp_g2

0x61bd,	// (0x000251c7) list_single_heading_pane_fp_g3_ParamLimits

0x61bd,	// (0x000251c7) list_single_heading_pane_fp_g3

0x0002,

0xfbac,	// (0x0002ebb6) list_single_heading_pane_fp_g_ParamLimits

0xfbac,	// (0x0002ebb6) list_single_heading_pane_fp_g

0x634e,	// (0x00025358) list_single_heading_pane_fp_t1_ParamLimits

0x634e,	// (0x00025358) list_single_heading_pane_fp_t1

0x6360,	// (0x0002536a) list_single_heading_pane_fp_t2_ParamLimits

0x6360,	// (0x0002536a) list_single_heading_pane_fp_t2

0x0001,

0xfbb3,	// (0x0002ebbd) list_single_heading_pane_fp_t_ParamLimits

0xfbb3,	// (0x0002ebbd) list_single_heading_pane_fp_t

0x6fd6,	// (0x00025fe0) aid_size_cell_fast

0x174d,	// (0x00020757) soft_indicator_pane_cp1_t1

0x6fdf,	// (0x00025fe9) cell_app_pane_cp2_ParamLimits

0x6fdf,	// (0x00025fe9) cell_app_pane_cp2

0x8e7c,	// (0x00027e86) fep_hwr_candidate_drop_down_list_pane

0x1594,	// (0x0002059e) fep_hwr_candidate_pane_g3_ParamLimits

0x1594,	// (0x0002059e) fep_hwr_candidate_pane_g3

0x15a1,	// (0x000205ab) fep_hwr_candidate_pane_g4_ParamLimits

0x15a1,	// (0x000205ab) fep_hwr_candidate_pane_g4

0x0002,

0xfb27,	// (0x0002eb31) fep_hwr_candidate_pane_g_ParamLimits

0xfb27,	// (0x0002eb31) fep_hwr_candidate_pane_g

0xc44b,	// (0x0002b455) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc44b,	// (0x0002b455) fep_vkb_candidate_drop_down_list_pane

0xc84e,	// (0x0002b858) fep_vkb_candidate_pane_g3

0xc856,	// (0x0002b860) fep_vkb_candidate_pane_g4

0x0002,

0xfb54,	// (0x0002eb5e) fep_vkb_candidate_pane_g

0xc556,	// (0x0002b560) cell_hwr_candidate_pane_g1_ParamLimits

0xc86d,	// (0x0002b877) cell_hwr_candidate_pane_g3_ParamLimits

0xc86d,	// (0x0002b877) cell_hwr_candidate_pane_g3

0xc88e,	// (0x0002b898) cell_hwr_candidate_pane_g4_ParamLimits

0xc88e,	// (0x0002b898) cell_hwr_candidate_pane_g4

0x0002,

0xfb6e,	// (0x0002eb78) cell_hwr_candidate_pane_g_ParamLimits

0xfb6e,	// (0x0002eb78) cell_hwr_candidate_pane_g

0xc8af,	// (0x0002b8b9) cell_vkb_candidate_pane_g3_ParamLimits

0xc8af,	// (0x0002b8b9) cell_vkb_candidate_pane_g3

0xc8ca,	// (0x0002b8d4) cell_vkb_candidate_pane_g4_ParamLimits

0xc8ca,	// (0x0002b8d4) cell_vkb_candidate_pane_g4

0xc9bb,	// (0x0002b9c5) cell_app_pane_cp2_g1_ParamLimits

0xc9bb,	// (0x0002b9c5) cell_app_pane_cp2_g1

0xc9d9,	// (0x0002b9e3) cell_app_pane_cp2_g2_ParamLimits

0xc9d9,	// (0x0002b9e3) cell_app_pane_cp2_g2

0x0001,

0xfbb8,	// (0x0002ebc2) cell_app_pane_cp2_g_ParamLimits

0xfbb8,	// (0x0002ebc2) cell_app_pane_cp2_g

0xc9e5,	// (0x0002b9ef) cell_app_pane_cp2_t1_ParamLimits

0xc9e5,	// (0x0002b9ef) cell_app_pane_cp2_t1

0x1a5c,	// (0x00020a66) grid_highlight_pane_cp1_ParamLimits

0x1a5c,	// (0x00020a66) grid_highlight_pane_cp1

0x90b8,	// (0x000280c2) cell_hwr_candidate_pane_cp1_ParamLimits

0x90b8,	// (0x000280c2) cell_hwr_candidate_pane_cp1

0xc556,	// (0x0002b560) fep_hwr_candidate_drop_down_list_pane_g1

0xc9f7,	// (0x0002ba01) fep_hwr_candidate_drop_down_list_pane_g2

0xca04,	// (0x0002ba0e) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbd,	// (0x0002ebc7) fep_hwr_candidate_drop_down_list_pane_g

0x90d7,	// (0x000280e1) fep_hwr_candidate_drop_down_list_scroll_pane

0x90e0,	// (0x000280ea) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x90e0,	// (0x000280ea) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x90ed,	// (0x000280f7) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x90ed,	// (0x000280f7) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x90fa,	// (0x00028104) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x90fa,	// (0x00028104) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc8af,	// (0x0002b8b9) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc8af,	// (0x0002b8b9) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc8ca,	// (0x0002b8d4) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc8ca,	// (0x0002b8d4) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x9107,	// (0x00028111) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x9107,	// (0x00028111) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x9122,	// (0x0002812c) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x9122,	// (0x0002812c) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x913d,	// (0x00028147) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x913d,	// (0x00028147) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc4,	// (0x0002ebce) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc4,	// (0x0002ebce) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xca11,	// (0x0002ba1b) cell_vkb_candidate_pane_cp1_ParamLimits

0xca11,	// (0x0002ba1b) cell_vkb_candidate_pane_cp1

0xc556,	// (0x0002b560) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc556,	// (0x0002b560) fep_vkb_candidate_drop_down_list_pane_g1

0xc9f7,	// (0x0002ba01) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc9f7,	// (0x0002ba01) fep_vkb_candidate_drop_down_list_pane_g2

0xca04,	// (0x0002ba0e) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xca04,	// (0x0002ba0e) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbd,	// (0x0002ebc7) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbd,	// (0x0002ebc7) fep_vkb_candidate_drop_down_list_pane_g

0xca31,	// (0x0002ba3b) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xca31,	// (0x0002ba3b) fep_vkb_candidate_drop_down_list_scroll_pane

0xca3e,	// (0x0002ba48) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xca3e,	// (0x0002ba48) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xca4b,	// (0x0002ba55) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xca4b,	// (0x0002ba55) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xca57,	// (0x0002ba61) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xca57,	// (0x0002ba61) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc86d,	// (0x0002b877) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc86d,	// (0x0002b877) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc88e,	// (0x0002b898) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc88e,	// (0x0002b898) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xca63,	// (0x0002ba6d) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xca63,	// (0x0002ba6d) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca84,	// (0x0002ba8e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca84,	// (0x0002ba8e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xcaa5,	// (0x0002baaf) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xcaa5,	// (0x0002baaf) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd5,	// (0x0002ebdf) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd5,	// (0x0002ebdf) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6948,	// (0x00025952) title_pane_g1_ParamLimits

0x6955,	// (0x0002595f) title_pane_g2_ParamLimits

0xf54e,	// (0x0002e558) title_pane_g_ParamLimits

0x38cc,	// (0x000228d6) aid_call2_pane

0x38c4,	// (0x000228ce) aid_call_pane

0x38d4,	// (0x000228de) popup_clock_analogue_window_g1

0x38d4,	// (0x000228de) popup_clock_analogue_window_g2

0x72e9,	// (0x000262f3) popup_clock_analogue_window_g3

0x72f2,	// (0x000262fc) popup_clock_analogue_window_g4

0x15c0,	// (0x000205ca) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0002e702) popup_clock_analogue_window_g

0x72fa,	// (0x00026304) popup_clock_analogue_window_t1

0x7332,	// (0x0002633c) clock_digital_number_pane_ParamLimits

0x7332,	// (0x0002633c) clock_digital_number_pane

0x733e,	// (0x00026348) clock_digital_number_pane_cp02_ParamLimits

0x733e,	// (0x00026348) clock_digital_number_pane_cp02

0x734a,	// (0x00026354) clock_digital_number_pane_cp03_ParamLimits

0x734a,	// (0x00026354) clock_digital_number_pane_cp03

0x7356,	// (0x00026360) clock_digital_number_pane_cp04_ParamLimits

0x7356,	// (0x00026360) clock_digital_number_pane_cp04

0x7362,	// (0x0002636c) clock_digital_separator_pane_ParamLimits

0x7362,	// (0x0002636c) clock_digital_separator_pane

0x736e,	// (0x00026378) popup_clock_digital_window_t1_ParamLimits

0x736e,	// (0x00026378) popup_clock_digital_window_t1

0x15c0,	// (0x000205ca) clock_digital_number_pane_g1

0x15c0,	// (0x000205ca) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0002e70d) clock_digital_number_pane_g

0x15c0,	// (0x000205ca) clock_digital_separator_pane_g1

0x15c0,	// (0x000205ca) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0002e70d) clock_digital_separator_pane_g

0x8463,	// (0x0002746d) aid_fill_nsta_ParamLimits

0x85af,	// (0x000275b9) indicator_nsta_pane_ParamLimits

0x8728,	// (0x00027732) popup_clock_analogue_window

0x8728,	// (0x00027732) popup_clock_digital_window

0x1626,	// (0x00020630) grid_indicator_nsta_pane_ParamLimits

0xbcda,	// (0x0002ace4) clock_nsta_pane_t2

0x0001,

0xfaa7,	// (0x0002eab1) clock_nsta_pane_t

0x7214,	// (0x0002621e) aid_size_max_handle

0x721e,	// (0x00026228) aid_size_min_handle

0x7957,	// (0x00026961) editor_scroll_pane

0xcac0,	// (0x0002baca) ex_editor_pane

0x1bc1,	// (0x00020bcb) scroll_pane_cp13

0x199a,	// (0x000209a4) scroll_pane_cp14

0x3922,	// (0x0002292c) scroll_pane_cp36

0x731c,	// (0x00026326) list_single_graphic_hl_pane_cp2_ParamLimits

0x731c,	// (0x00026326) list_single_graphic_hl_pane_cp2

0xb2b1,	// (0x0002a2bb) list_single_graphic_hl_pane_ParamLimits

0xb2b1,	// (0x0002a2bb) list_single_graphic_hl_pane

0x1348,	// (0x00020352) aid_size_min_hl_cp1

0xcac8,	// (0x0002bad2) list_highlight_pane_cp34_ParamLimits

0xcac8,	// (0x0002bad2) list_highlight_pane_cp34

0xcad9,	// (0x0002bae3) list_single_graphic_hl_pane_g1_ParamLimits

0xcad9,	// (0x0002bae3) list_single_graphic_hl_pane_g1

0x6376,	// (0x00025380) list_single_graphic_hl_pane_g2_ParamLimits

0x6376,	// (0x00025380) list_single_graphic_hl_pane_g2

0x6376,	// (0x00025380) list_single_graphic_hl_pane_g3_ParamLimits

0x6376,	// (0x00025380) list_single_graphic_hl_pane_g3

0x6382,	// (0x0002538c) list_single_graphic_hl_pane_g4_ParamLimits

0x6382,	// (0x0002538c) list_single_graphic_hl_pane_g4

0x638e,	// (0x00025398) list_single_graphic_hl_pane_g5_ParamLimits

0x638e,	// (0x00025398) list_single_graphic_hl_pane_g5

0x0004,

0xfbe6,	// (0x0002ebf0) list_single_graphic_hl_pane_g_ParamLimits

0xfbe6,	// (0x0002ebf0) list_single_graphic_hl_pane_g

0x63a2,	// (0x000253ac) list_single_graphic_hl_pane_t1_ParamLimits

0x63a2,	// (0x000253ac) list_single_graphic_hl_pane_t1

0xcae6,	// (0x0002baf0) aid_size_min_hl_cp2

0xcaef,	// (0x0002baf9) list_highlight_pane_cp34_cp2_ParamLimits

0xcaef,	// (0x0002baf9) list_highlight_pane_cp34_cp2

0xcad9,	// (0x0002bae3) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xcad9,	// (0x0002bae3) list_single_graphic_hl_pane_g1_cp2

0xcafc,	// (0x0002bb06) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcafc,	// (0x0002bb06) list_single_graphic_hl_pane_g2_cp2

0xcb08,	// (0x0002bb12) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcb08,	// (0x0002bb12) list_single_graphic_hl_pane_g3_cp2

0x7890,	// (0x0002689a) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7890,	// (0x0002689a) list_single_graphic_hl_pane_g4_cp2

0xcb16,	// (0x0002bb20) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcb16,	// (0x0002bb20) list_single_graphic_hl_pane_g5_cp2

0x7d13,	// (0x00026d1d) control_pane_g4_ParamLimits

0x7d13,	// (0x00026d1d) control_pane_g4

0x7ea6,	// (0x00026eb0) bg_popup_sub_pane_cp10_ParamLimits

0xc2f0,	// (0x0002b2fa) list_choice_list_pane_ParamLimits

0xc2ff,	// (0x0002b309) scroll_pane_cp23

0x176a,	// (0x00020774) bg_popup_preview_window_pane_cp02_ParamLimits

0xc93b,	// (0x0002b945) list_preview_fixed_pane_ParamLimits

0xc951,	// (0x0002b95b) list_preview_fixed_pane_cp_ParamLimits

0xc951,	// (0x0002b95b) list_preview_fixed_pane_cp

0xc95d,	// (0x0002b967) popup_preview_fixed_window_g1_ParamLimits

0xc95d,	// (0x0002b967) popup_preview_fixed_window_g1

0xc969,	// (0x0002b973) popup_preview_fixed_window_g2_ParamLimits

0xc969,	// (0x0002b973) popup_preview_fixed_window_g2

0x0002,

0xfb75,	// (0x0002eb7f) popup_preview_fixed_window_g_ParamLimits

0xfb75,	// (0x0002eb7f) popup_preview_fixed_window_g

0x70ee,	// (0x000260f8) aid_navi_side_left_pane_ParamLimits

0x7103,	// (0x0002610d) aid_navi_side_right_pane_ParamLimits

0x711b,	// (0x00026125) navi_icon_pane_stacon_ParamLimits

0x712f,	// (0x00026139) navi_navi_pane_stacon_ParamLimits

0x711b,	// (0x00026125) navi_text_pane_stacon_ParamLimits

0x15b6,	// (0x000205c0) main_text_info_pane

0xcb40,	// (0x0002bb4a) listscroll_text_info_pane

0xcb48,	// (0x0002bb52) list_text_info_pane_ParamLimits

0xcb48,	// (0x0002bb52) list_text_info_pane

0xcb57,	// (0x0002bb61) scroll_pane_cp24_ParamLimits

0xcb57,	// (0x0002bb61) scroll_pane_cp24

0xcb75,	// (0x0002bb7f) list_text_info_pane_t1_ParamLimits

0xcb75,	// (0x0002bb7f) list_text_info_pane_t1

0x7eea,	// (0x00026ef4) popup_fast_swap2_window_ParamLimits

0x7eea,	// (0x00026ef4) popup_fast_swap2_window

0xcba9,	// (0x0002bbb3) aid_size_cell_fast2

0x15b6,	// (0x000205c0) bg_popup_window_pane_cp17

0xa158,	// (0x00029162) heading_pane_cp2

0x189e,	// (0x000208a8) listscroll_fast2_pane

0xcbb3,	// (0x0002bbbd) grid_fast2_pane

0xcbbd,	// (0x0002bbc7) listscroll_fast2_pane_g1

0xcbc5,	// (0x0002bbcf) listscroll_fast2_pane_g2

0x0001,

0xfbf1,	// (0x0002ebfb) listscroll_fast2_pane_g

0x1bc1,	// (0x00020bcb) scroll_pane_cp26

0xcbcf,	// (0x0002bbd9) cell_fast2_pane_ParamLimits

0xcbcf,	// (0x0002bbd9) cell_fast2_pane

0xcbe4,	// (0x0002bbee) cell_fast2_pane_g1

0xcbed,	// (0x0002bbf7) cell_fast2_pane_g2

0xcbf6,	// (0x0002bc00) cell_fast2_pane_g3

0x0002,

0xfbf6,	// (0x0002ec00) cell_fast2_pane_g

0x18d1,	// (0x000208db) grid_highlight_pane_cp9

0x18e6,	// (0x000208f0) main_eswt_pane_ParamLimits

0x18e6,	// (0x000208f0) main_eswt_pane

0xcb6c,	// (0x0002bb76) list_single_text_info_pane

0xcbfe,	// (0x0002bc08) eswt_ctrl_button_pane

0xcbfe,	// (0x0002bc08) eswt_ctrl_canvas_pane

0xcc06,	// (0x0002bc10) eswt_ctrl_combo_pane

0xcbfe,	// (0x0002bc08) eswt_ctrl_default_pane

0xcbfe,	// (0x0002bc08) eswt_ctrl_label_pane

0xcc0e,	// (0x0002bc18) eswt_ctrl_wait_pane

0xcc16,	// (0x0002bc20) eswt_shell_pane

0x15b6,	// (0x000205c0) listscroll_eswt_app_pane

0xcc36,	// (0x0002bc40) popup_eswt_tasktip_window_ParamLimits

0xcc36,	// (0x0002bc40) popup_eswt_tasktip_window

0x9d6d,	// (0x00028d77) bg_popup_window_pane_cp18

0xcc47,	// (0x0002bc51) eswt_control_pane_g1_ParamLimits

0xcc47,	// (0x0002bc51) eswt_control_pane_g1

0xcc54,	// (0x0002bc5e) eswt_control_pane_g2_ParamLimits

0xcc54,	// (0x0002bc5e) eswt_control_pane_g2

0xcc61,	// (0x0002bc6b) eswt_control_pane_g3_ParamLimits

0xcc61,	// (0x0002bc6b) eswt_control_pane_g3

0xcc6e,	// (0x0002bc78) eswt_control_pane_g4_ParamLimits

0xcc6e,	// (0x0002bc78) eswt_control_pane_g4

0x0003,

0xfbfd,	// (0x0002ec07) eswt_control_pane_g_ParamLimits

0xfbfd,	// (0x0002ec07) eswt_control_pane_g

0x1a5c,	// (0x00020a66) bg_button_pane_ParamLimits

0x1a5c,	// (0x00020a66) bg_button_pane

0x18e6,	// (0x000208f0) common_borders_pane_copy2_ParamLimits

0x18e6,	// (0x000208f0) common_borders_pane_copy2

0xcc7b,	// (0x0002bc85) control_button_pane_g1_ParamLimits

0xcc7b,	// (0x0002bc85) control_button_pane_g1

0xcc87,	// (0x0002bc91) control_button_pane_g2_ParamLimits

0xcc87,	// (0x0002bc91) control_button_pane_g2

0xcc93,	// (0x0002bc9d) control_button_pane_g3_ParamLimits

0xcc93,	// (0x0002bc9d) control_button_pane_g3

0x0002,

0xfc06,	// (0x0002ec10) control_button_pane_g_ParamLimits

0xfc06,	// (0x0002ec10) control_button_pane_g

0xcca7,	// (0x0002bcb1) control_button_pane_t1

0xccb5,	// (0x0002bcbf) control_button_pane_t2

0x0001,

0xfc0d,	// (0x0002ec17) control_button_pane_t

0x897e,	// (0x00027988) bg_button_pane_g1

0x8986,	// (0x00027990) bg_button_pane_g2

0x898e,	// (0x00027998) bg_button_pane_g3

0x8996,	// (0x000279a0) bg_button_pane_g4

0x899e,	// (0x000279a8) bg_button_pane_g5

0x89a6,	// (0x000279b0) bg_button_pane_g6

0x89ae,	// (0x000279b8) bg_button_pane_g7

0x89b6,	// (0x000279c0) bg_button_pane_g8

0x89be,	// (0x000279c8) bg_button_pane_g9

0x0008,

0xf861,	// (0x0002e86b) bg_button_pane_g

0xc2ab,	// (0x0002b2b5) common_borders_pane_ParamLimits

0xc2ab,	// (0x0002b2b5) common_borders_pane

0xcc47,	// (0x0002bc51) eswt_control_pane_g1_copy1_ParamLimits

0xcc47,	// (0x0002bc51) eswt_control_pane_g1_copy1

0xcc54,	// (0x0002bc5e) eswt_control_pane_g2_copy1_ParamLimits

0xcc54,	// (0x0002bc5e) eswt_control_pane_g2_copy1

0xcc61,	// (0x0002bc6b) eswt_control_pane_g3_copy1_ParamLimits

0xcc61,	// (0x0002bc6b) eswt_control_pane_g3_copy1

0xcc6e,	// (0x0002bc78) eswt_control_pane_g4_copy1_ParamLimits

0xcc6e,	// (0x0002bc78) eswt_control_pane_g4_copy1

0xc2e6,	// (0x0002b2f0) bg_eswt_ctrl_canvas_pane_g1

0xc2ab,	// (0x0002b2b5) common_borders_pane_cp2_ParamLimits

0xc2ab,	// (0x0002b2b5) common_borders_pane_cp2

0xc2ab,	// (0x0002b2b5) common_borders_pane_cp3_ParamLimits

0xc2ab,	// (0x0002b2b5) common_borders_pane_cp3

0xccc3,	// (0x0002bccd) separator_horizontal_pane

0xcccb,	// (0x0002bcd5) separator_vertical_pane

0xcc47,	// (0x0002bc51) eswt_control_pane_g1_copy2_ParamLimits

0xcc47,	// (0x0002bc51) eswt_control_pane_g1_copy2

0xcc54,	// (0x0002bc5e) eswt_control_pane_g2_copy2_ParamLimits

0xcc54,	// (0x0002bc5e) eswt_control_pane_g2_copy2

0xcc61,	// (0x0002bc6b) eswt_control_pane_g3_copy2_ParamLimits

0xcc61,	// (0x0002bc6b) eswt_control_pane_g3_copy2

0xcc6e,	// (0x0002bc78) eswt_control_pane_g4_copy2_ParamLimits

0xcc6e,	// (0x0002bc78) eswt_control_pane_g4_copy2

0x15b6,	// (0x000205c0) common_borders_pane_cp4

0xccd4,	// (0x0002bcde) separator_horizontal_pane_g1

0xccdd,	// (0x0002bce7) separator_horizontal_pane_g2

0xcce6,	// (0x0002bcf0) separator_horizontal_pane_g3

0x0002,

0xfc12,	// (0x0002ec1c) separator_horizontal_pane_g

0xcc47,	// (0x0002bc51) eswt_control_pane_g1_copy3_ParamLimits

0xcc47,	// (0x0002bc51) eswt_control_pane_g1_copy3

0xcc54,	// (0x0002bc5e) eswt_control_pane_g2_copy3_ParamLimits

0xcc54,	// (0x0002bc5e) eswt_control_pane_g2_copy3

0xcc61,	// (0x0002bc6b) eswt_control_pane_g3_copy3_ParamLimits

0xcc61,	// (0x0002bc6b) eswt_control_pane_g3_copy3

0xcc6e,	// (0x0002bc78) eswt_control_pane_g4_copy3_ParamLimits

0xcc6e,	// (0x0002bc78) eswt_control_pane_g4_copy3

0x15b6,	// (0x000205c0) common_borders_pane_cp5

0xccef,	// (0x0002bcf9) separator_vertical_pane_g1

0xccf8,	// (0x0002bd02) separator_vertical_pane_g2

0xcd01,	// (0x0002bd0b) separator_vertical_pane_g3

0x0002,

0xfc19,	// (0x0002ec23) separator_vertical_pane_g

0xcc47,	// (0x0002bc51) eswt_control_pane_g1_copy4_ParamLimits

0xcc47,	// (0x0002bc51) eswt_control_pane_g1_copy4

0xcc54,	// (0x0002bc5e) eswt_control_pane_g2_copy4_ParamLimits

0xcc54,	// (0x0002bc5e) eswt_control_pane_g2_copy4

0xcc61,	// (0x0002bc6b) eswt_control_pane_g3_copy4_ParamLimits

0xcc61,	// (0x0002bc6b) eswt_control_pane_g3_copy4

0xcc6e,	// (0x0002bc78) eswt_control_pane_g4_copy4_ParamLimits

0xcc6e,	// (0x0002bc78) eswt_control_pane_g4_copy4

0xcd0a,	// (0x0002bd14) eswt_ctrl_combo_button_pane

0xcd12,	// (0x0002bd1c) eswt_ctrl_input_pane

0xcd1a,	// (0x0002bd24) popup_choice_list_window_cp70

0xcd22,	// (0x0002bd2c) eswt_ctrl_input_pane_t1

0x15b6,	// (0x000205c0) input_focus_pane_cp70

0xc2ab,	// (0x0002b2b5) bg_button_pane_cp70_ParamLimits

0xc2ab,	// (0x0002b2b5) bg_button_pane_cp70

0xcd30,	// (0x0002bd3a) eswt_ctrl_combo_button_pane_g1

0xcd38,	// (0x0002bd42) wait_bar_pane_cp70

0x9d6d,	// (0x00028d77) bg_popup_window_pane_cp70_ParamLimits

0x9d6d,	// (0x00028d77) bg_popup_window_pane_cp70

0xcd40,	// (0x0002bd4a) popup_eswt_tasktip_window_t1

0xcd56,	// (0x0002bd60) wait_bar_pane_cp71_ParamLimits

0xcd56,	// (0x0002bd60) wait_bar_pane_cp71

0xcd62,	// (0x0002bd6c) grid_eswt_app_pane

0x37a7,	// (0x000227b1) scroll_pane_cp70

0xcd6b,	// (0x0002bd75) cell_eswt_app_pane_ParamLimits

0xcd6b,	// (0x0002bd75) cell_eswt_app_pane

0xcd9b,	// (0x0002bda5) cell_eswt_app_pane_g1_ParamLimits

0xcd9b,	// (0x0002bda5) cell_eswt_app_pane_g1

0xcdca,	// (0x0002bdd4) cell_eswt_app_pane_g2_ParamLimits

0xcdca,	// (0x0002bdd4) cell_eswt_app_pane_g2

0x0001,

0xfc20,	// (0x0002ec2a) cell_eswt_app_pane_g_ParamLimits

0xfc20,	// (0x0002ec2a) cell_eswt_app_pane_g

0xcdee,	// (0x0002bdf8) cell_eswt_app_pane_t1_ParamLimits

0xcdee,	// (0x0002bdf8) cell_eswt_app_pane_t1

0xce20,	// (0x0002be2a) grid_highlight_pane_cp70_ParamLimits

0xce20,	// (0x0002be2a) grid_highlight_pane_cp70

0x782c,	// (0x00026836) set_content_pane_g1

0x7c9b,	// (0x00026ca5) status_small_volume_pane

0x9158,	// (0x00028162) status_small_volume_pane_g1

0x9160,	// (0x0002816a) volume_small2_pane

0x9169,	// (0x00028173) volume_small2_pane_g1

0x9172,	// (0x0002817c) volume_small2_pane_g2

0x917b,	// (0x00028185) volume_small2_pane_g3

0x9184,	// (0x0002818e) volume_small2_pane_g4

0x918d,	// (0x00028197) volume_small2_pane_g5

0x9196,	// (0x000281a0) volume_small2_pane_g6

0x919f,	// (0x000281a9) volume_small2_pane_g7

0x91a8,	// (0x000281b2) volume_small2_pane_g8

0x91b1,	// (0x000281bb) volume_small2_pane_g9

0x91ba,	// (0x000281c4) volume_small2_pane_g10

0x0009,

0xfc25,	// (0x0002ec2f) volume_small2_pane_g

0xc69e,	// (0x0002b6a8) fep_vkb_top_text_pane_g1_ParamLimits

0xc6b9,	// (0x0002b6c3) fep_vkb_top_text_pane_t1_ParamLimits

0xc975,	// (0x0002b97f) popup_preview_fixed_window_g3_ParamLimits

0xc975,	// (0x0002b97f) popup_preview_fixed_window_g3

0x8399,	// (0x000273a3) popup_toolbar_trans_pane

0xb09c,	// (0x0002a0a6) aid_height_set_list_ParamLimits

0xb0ad,	// (0x0002a0b7) aid_size_parent_ParamLimits

0x7ea6,	// (0x00026eb0) list_highlight_pane_cp2_ParamLimits

0x782c,	// (0x00026836) set_content_pane_g1_ParamLimits

0x5e26,	// (0x00024e30) list_single_image_pane_ParamLimits

0x5e26,	// (0x00024e30) list_single_image_pane

0xce2c,	// (0x0002be36) aid_size_cell_image_ParamLimits

0xce2c,	// (0x0002be36) aid_size_cell_image

0xce39,	// (0x0002be43) grid_single_image_pane_ParamLimits

0xce39,	// (0x0002be43) grid_single_image_pane

0xce47,	// (0x0002be51) list_single_image_pane_g1_ParamLimits

0xce47,	// (0x0002be51) list_single_image_pane_g1

0xce53,	// (0x0002be5d) list_single_image_pane_g2_ParamLimits

0xce53,	// (0x0002be5d) list_single_image_pane_g2

0x0001,

0xfc3a,	// (0x0002ec44) list_single_image_pane_g_ParamLimits

0xfc3a,	// (0x0002ec44) list_single_image_pane_g

0xce67,	// (0x0002be71) list_single_image_pane_t1_ParamLimits

0xce67,	// (0x0002be71) list_single_image_pane_t1

0xce7d,	// (0x0002be87) cell_image_list_pane_ParamLimits

0xce7d,	// (0x0002be87) cell_image_list_pane

0xce91,	// (0x0002be9b) cell_image_list_pane_g1

0xce9a,	// (0x0002bea4) cell_image_list_pane_g2

0x0001,

0xfc3f,	// (0x0002ec49) cell_image_list_pane_g

0xcea3,	// (0x0002bead) aid_size_cell_tb_trans_pane

0x1a5c,	// (0x00020a66) bg_tb_trans_pane

0xceb5,	// (0x0002bebf) grid_tb_trans_pane

0x897e,	// (0x00027988) bg_tb_trans_pane_g1

0x8986,	// (0x00027990) bg_tb_trans_pane_g2

0x898e,	// (0x00027998) bg_tb_trans_pane_g3

0x8996,	// (0x000279a0) bg_tb_trans_pane_g4

0x899e,	// (0x000279a8) bg_tb_trans_pane_g5

0x89b6,	// (0x000279c0) bg_tb_trans_pane_g6

0x89be,	// (0x000279c8) bg_tb_trans_pane_g7

0x89a6,	// (0x000279b0) bg_tb_trans_pane_g8

0x89ae,	// (0x000279b8) bg_tb_trans_pane_g9

0x0008,

0xfc44,	// (0x0002ec4e) bg_tb_trans_pane_g

0xcec9,	// (0x0002bed3) cell_toolbar_trans_pane_ParamLimits

0xcec9,	// (0x0002bed3) cell_toolbar_trans_pane

0xc2e6,	// (0x0002b2f0) cell_toolbar_trans_pane_g1

0xbeab,	// (0x0002aeb5) list_form2_midp_pane_t1

0xbeb9,	// (0x0002aec3) list_form2_midp_pane_t2

0x0001,

0xfaed,	// (0x0002eaf7) list_form2_midp_pane_t

0xbec7,	// (0x0002aed1) scroll_pane_cp51_ParamLimits

0xc083,	// (0x0002b08d) form2_midp_wait_pane_g1

0xc08c,	// (0x0002b096) form2_midp_wait_pane_g2

0xc095,	// (0x0002b09f) form2_midp_wait_pane_g3

0x0002,

0xfb02,	// (0x0002eb0c) form2_midp_wait_pane_g

0x1626,	// (0x00020630) list_highlight_pane_cp21_ParamLimits

0xc0dd,	// (0x0002b0e7) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0ec,	// (0x0002b0f6) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5dbe,	// (0x00024dc8) list_single_2graphic_im_pane_ParamLimits

0x5dbe,	// (0x00024dc8) list_single_2graphic_im_pane

0xceef,	// (0x0002bef9) list_single_2graphic_im_pane_g1_ParamLimits

0xceef,	// (0x0002bef9) list_single_2graphic_im_pane_g1

0xcf00,	// (0x0002bf0a) list_single_2graphic_im_pane_g2_ParamLimits

0xcf00,	// (0x0002bf0a) list_single_2graphic_im_pane_g2

0xcf0c,	// (0x0002bf16) list_single_2graphic_im_pane_g3_ParamLimits

0xcf0c,	// (0x0002bf16) list_single_2graphic_im_pane_g3

0x0003,

0xfc57,	// (0x0002ec61) list_single_2graphic_im_pane_g_ParamLimits

0xfc57,	// (0x0002ec61) list_single_2graphic_im_pane_g

0xcf2c,	// (0x0002bf36) list_single_2graphic_im_pane_t1_ParamLimits

0xcf2c,	// (0x0002bf36) list_single_2graphic_im_pane_t1

0xc981,	// (0x0002b98b) list_single_graphic_2heading_pane_fp_ParamLimits

0xc981,	// (0x0002b98b) list_single_graphic_2heading_pane_fp

0x61e8,	// (0x000251f2) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x61e8,	// (0x000251f2) list_single_graphic_2heading_pane_fp_g1

0xc997,	// (0x0002b9a1) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc997,	// (0x0002b9a1) list_single_graphic_2heading_pane_fp_g2

0x57bb,	// (0x000247c5) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x57bb,	// (0x000247c5) list_single_graphic_2heading_pane_fp_g3

0x61bd,	// (0x000251c7) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x61bd,	// (0x000251c7) list_single_graphic_2heading_pane_fp_g4

0xc9a3,	// (0x0002b9ad) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc9a3,	// (0x0002b9ad) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0002eb8f) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0002eb8f) list_single_graphic_2heading_pane_fp_g

0x63b8,	// (0x000253c2) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x63b8,	// (0x000253c2) list_single_graphic_2heading_pane_fp_t1

0x6220,	// (0x0002522a) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6220,	// (0x0002522a) list_single_graphic_2heading_pane_fp_t2

0x63ce,	// (0x000253d8) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x63ce,	// (0x000253d8) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc60,	// (0x0002ec6a) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc60,	// (0x0002ec6a) list_single_graphic_2heading_pane_fp_t

0xc372,	// (0x0002b37c) fep_hwr_write_pane_g5_ParamLimits

0xc372,	// (0x0002b37c) fep_hwr_write_pane_g5

0xc37e,	// (0x0002b388) fep_hwr_write_pane_g6_ParamLimits

0xc37e,	// (0x0002b388) fep_hwr_write_pane_g6

0xcc16,	// (0x0002bc20) eswt_shell_pane_ParamLimits

0x9d6d,	// (0x00028d77) bg_popup_window_pane_cp18_ParamLimits

0xaff5,	// (0x00029fff) heading_pane_cp70

0xcd40,	// (0x0002bd4a) popup_eswt_tasktip_window_t1_ParamLimits

0x84b8,	// (0x000274c2) aid_touch_tab_arrow_left

0x84c7,	// (0x000274d1) aid_touch_tab_arrow_right

0x6966,	// (0x00025970) title_pane_g3_ParamLimits

0x6966,	// (0x00025970) title_pane_g3

0x19f3,	// (0x000209fd) set_value_pane_g1

0x8399,	// (0x000273a3) popup_toolbar_trans_pane_ParamLimits

0xcea3,	// (0x0002bead) aid_size_cell_tb_trans_pane_ParamLimits

0x1a5c,	// (0x00020a66) bg_tb_trans_pane_ParamLimits

0xceb5,	// (0x0002bebf) grid_tb_trans_pane_ParamLimits

0x176a,	// (0x00020774) cont_note_pane_ParamLimits

0x176a,	// (0x00020774) cont_note_pane

0x18e6,	// (0x000208f0) cont_snote2_single_text_pane_ParamLimits

0x18e6,	// (0x000208f0) cont_snote2_single_text_pane

0x18e6,	// (0x000208f0) cont_snote2_single_graphic_pane_ParamLimits

0x18e6,	// (0x000208f0) cont_snote2_single_graphic_pane

0xa36b,	// (0x00029375) cont_note_wait_pane_ParamLimits

0xa36b,	// (0x00029375) cont_note_wait_pane

0xa36b,	// (0x00029375) cont_note_image_pane_ParamLimits

0xa36b,	// (0x00029375) cont_note_image_pane

0xcf5d,	// (0x0002bf67) popup_note2_window_g1_ParamLimits

0xcf5d,	// (0x0002bf67) popup_note2_window_g1

0xcf8e,	// (0x0002bf98) popup_note2_window_t1_ParamLimits

0xcf8e,	// (0x0002bf98) popup_note2_window_t1

0xcfd3,	// (0x0002bfdd) popup_note2_window_t2_ParamLimits

0xcfd3,	// (0x0002bfdd) popup_note2_window_t2

0xd018,	// (0x0002c022) popup_note2_window_t3_ParamLimits

0xd018,	// (0x0002c022) popup_note2_window_t3

0xd05d,	// (0x0002c067) popup_note2_window_t4_ParamLimits

0xd05d,	// (0x0002c067) popup_note2_window_t4

0x17ee,	// (0x000207f8) popup_note2_window_t5_ParamLimits

0x17ee,	// (0x000207f8) popup_note2_window_t5

0x0004,

0xfc6c,	// (0x0002ec76) popup_note2_window_t_ParamLimits

0xfc6c,	// (0x0002ec76) popup_note2_window_t

0xd08c,	// (0x0002c096) popup_note2_image_window_g1_ParamLimits

0xd08c,	// (0x0002c096) popup_note2_image_window_g1

0xd098,	// (0x0002c0a2) popup_note2_image_window_g2_ParamLimits

0xd098,	// (0x0002c0a2) popup_note2_image_window_g2

0x0001,

0xfc77,	// (0x0002ec81) popup_note2_image_window_g_ParamLimits

0xfc77,	// (0x0002ec81) popup_note2_image_window_g

0xd0aa,	// (0x0002c0b4) popup_note2_image_window_t1_ParamLimits

0xd0aa,	// (0x0002c0b4) popup_note2_image_window_t1

0xd0c2,	// (0x0002c0cc) popup_note2_image_window_t2_ParamLimits

0xd0c2,	// (0x0002c0cc) popup_note2_image_window_t2

0xd0da,	// (0x0002c0e4) popup_note2_image_window_t3_ParamLimits

0xd0da,	// (0x0002c0e4) popup_note2_image_window_t3

0x0002,

0xfc7c,	// (0x0002ec86) popup_note2_image_window_t_ParamLimits

0xfc7c,	// (0x0002ec86) popup_note2_image_window_t

0xa379,	// (0x00029383) popup_note2_wait_window_g1_ParamLimits

0xa379,	// (0x00029383) popup_note2_wait_window_g1

0xa385,	// (0x0002938f) popup_note2_wait_window_g2_ParamLimits

0xa385,	// (0x0002938f) popup_note2_wait_window_g2

0xa391,	// (0x0002939b) popup_note2_wait_window_g3_ParamLimits

0xa391,	// (0x0002939b) popup_note2_wait_window_g3

0x0002,

0xf843,	// (0x0002e84d) popup_note2_wait_window_g_ParamLimits

0xf843,	// (0x0002e84d) popup_note2_wait_window_g

0xd0f6,	// (0x0002c100) popup_note2_wait_window_t1_ParamLimits

0xd0f6,	// (0x0002c100) popup_note2_wait_window_t1

0xd114,	// (0x0002c11e) popup_note2_wait_window_t2_ParamLimits

0xd114,	// (0x0002c11e) popup_note2_wait_window_t2

0xd132,	// (0x0002c13c) popup_note2_wait_window_t3_ParamLimits

0xd132,	// (0x0002c13c) popup_note2_wait_window_t3

0xd144,	// (0x0002c14e) popup_note2_wait_window_t4_ParamLimits

0xd144,	// (0x0002c14e) popup_note2_wait_window_t4

0x0003,

0xfc83,	// (0x0002ec8d) popup_note2_wait_window_t_ParamLimits

0xfc83,	// (0x0002ec8d) popup_note2_wait_window_t

0xd156,	// (0x0002c160) wait_bar2_pane_ParamLimits

0xd156,	// (0x0002c160) wait_bar2_pane

0xd16e,	// (0x0002c178) popup_snote2_single_text_window_g1_ParamLimits

0xd16e,	// (0x0002c178) popup_snote2_single_text_window_g1

0xd196,	// (0x0002c1a0) popup_snote2_single_text_window_t1_ParamLimits

0xd196,	// (0x0002c1a0) popup_snote2_single_text_window_t1

0xd1e2,	// (0x0002c1ec) popup_snote2_single_text_window_t2_ParamLimits

0xd1e2,	// (0x0002c1ec) popup_snote2_single_text_window_t2

0xd22e,	// (0x0002c238) popup_snote2_single_text_window_t3_ParamLimits

0xd22e,	// (0x0002c238) popup_snote2_single_text_window_t3

0xd26f,	// (0x0002c279) popup_snote2_single_text_window_t4_ParamLimits

0xd26f,	// (0x0002c279) popup_snote2_single_text_window_t4

0xd2a5,	// (0x0002c2af) popup_snote2_single_text_window_t5_ParamLimits

0xd2a5,	// (0x0002c2af) popup_snote2_single_text_window_t5

0x0004,

0xfc8c,	// (0x0002ec96) popup_snote2_single_text_window_t_ParamLimits

0xfc8c,	// (0x0002ec96) popup_snote2_single_text_window_t

0xd2d0,	// (0x0002c2da) popup_snote2_single_graphic_window_g1_ParamLimits

0xd2d0,	// (0x0002c2da) popup_snote2_single_graphic_window_g1

0xd2f8,	// (0x0002c302) popup_snote2_single_graphic_window_g2_ParamLimits

0xd2f8,	// (0x0002c302) popup_snote2_single_graphic_window_g2

0x0001,

0xfc97,	// (0x0002eca1) popup_snote2_single_graphic_window_g_ParamLimits

0xfc97,	// (0x0002eca1) popup_snote2_single_graphic_window_g

0xd320,	// (0x0002c32a) popup_snote2_single_graphic_window_t1_ParamLimits

0xd320,	// (0x0002c32a) popup_snote2_single_graphic_window_t1

0xd36c,	// (0x0002c376) popup_snote2_single_graphic_window_t2_ParamLimits

0xd36c,	// (0x0002c376) popup_snote2_single_graphic_window_t2

0xd22e,	// (0x0002c238) popup_snote2_single_graphic_window_t3_ParamLimits

0xd22e,	// (0x0002c238) popup_snote2_single_graphic_window_t3

0xd26f,	// (0x0002c279) popup_snote2_single_graphic_window_t4_ParamLimits

0xd26f,	// (0x0002c279) popup_snote2_single_graphic_window_t4

0xd2a5,	// (0x0002c2af) popup_snote2_single_graphic_window_t5_ParamLimits

0xd2a5,	// (0x0002c2af) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9c,	// (0x0002eca6) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9c,	// (0x0002eca6) popup_snote2_single_graphic_window_t

0xbd84,	// (0x0002ad8e) clock_nsta_pane_cp2_t1

0xbd84,	// (0x0002ad8e) clock_nsta_pane_cp2_t2

0x0001,

0xfac3,	// (0x0002eacd) clock_nsta_pane_cp2_t

0x5998,	// (0x000249a2) form_field_data_wide_pane_g1_ParamLimits

0x1a76,	// (0x00020a80) form_field_data_wide_pane_g2_ParamLimits

0x1a76,	// (0x00020a80) form_field_data_wide_pane_g2

0x1a82,	// (0x00020a8c) form_field_data_wide_pane_g3_ParamLimits

0x1a82,	// (0x00020a8c) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0002e685) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0002e685) form_field_data_wide_pane_g

0xbc76,	// (0x0002ac80) grid_touch_3_pane_ParamLimits

0xbc76,	// (0x0002ac80) grid_touch_3_pane

0xd3b8,	// (0x0002c3c2) cell_touch_3_pane_ParamLimits

0xd3b8,	// (0x0002c3c2) cell_touch_3_pane

0xc2e6,	// (0x0002b2f0) cell_touch_3_pane_g1

0xc2e6,	// (0x0002b2f0) cell_touch_3_pane_g2

0x0001,

0xfb48,	// (0x0002eb52) cell_touch_3_pane_g

0x1820,	// (0x0002082a) cont_query_data_pane

0x1828,	// (0x00020832) cont_query_data_pane_cp1

0xd3e6,	// (0x0002c3f0) button_value_adjust_pane_cp7

0xd3ee,	// (0x0002c3f8) query_popup_pane_cp3

0x39af,	// (0x000229b9) bg_popup_sub_pane_cp22_ParamLimits

0x73e8,	// (0x000263f2) navi_navi_volume_pane_cp2

0x7400,	// (0x0002640a) popup_side_volume_key_window_g2

0x740c,	// (0x00026416) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0002e71b) popup_side_volume_key_window_g

0x7426,	// (0x00026430) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0002e722) popup_side_volume_key_window_t

0x76f9,	// (0x00026703) popup_side_volume_key_window_ParamLimits

0x55d2,	// (0x000245dc) list_double_graphic_pane_g4_ParamLimits

0x55d2,	// (0x000245dc) list_double_graphic_pane_g4

0x5e03,	// (0x00024e0d) list_single_2heading_msg_pane_ParamLimits

0x5e03,	// (0x00024e0d) list_single_2heading_msg_pane

0x63ee,	// (0x000253f8) list_single_2heading_msg_pane_g1_ParamLimits

0x63ee,	// (0x000253f8) list_single_2heading_msg_pane_g1

0x5401,	// (0x0002440b) list_single_2heading_msg_pane_g2_ParamLimits

0x5401,	// (0x0002440b) list_single_2heading_msg_pane_g2

0x5f37,	// (0x00024f41) list_single_2heading_msg_pane_g3_ParamLimits

0x5f37,	// (0x00024f41) list_single_2heading_msg_pane_g3

0x63fa,	// (0x00025404) list_single_2heading_msg_pane_g4_ParamLimits

0x63fa,	// (0x00025404) list_single_2heading_msg_pane_g4

0x0003,

0xfca7,	// (0x0002ecb1) list_single_2heading_msg_pane_g_ParamLimits

0xfca7,	// (0x0002ecb1) list_single_2heading_msg_pane_g

0x6412,	// (0x0002541c) list_single_2heading_msg_pane_t1_ParamLimits

0x6412,	// (0x0002541c) list_single_2heading_msg_pane_t1

0x643a,	// (0x00025444) list_single_2heading_msg_pane_t2_ParamLimits

0x643a,	// (0x00025444) list_single_2heading_msg_pane_t2

0x646e,	// (0x00025478) list_single_2heading_msg_pane_t3_ParamLimits

0x646e,	// (0x00025478) list_single_2heading_msg_pane_t3

0x64a7,	// (0x000254b1) list_single_2heading_msg_pane_t4_ParamLimits

0x64a7,	// (0x000254b1) list_single_2heading_msg_pane_t4

0x0003,

0xfcb0,	// (0x0002ecba) list_single_2heading_msg_pane_t_ParamLimits

0xfcb0,	// (0x0002ecba) list_single_2heading_msg_pane_t

0x15d4,	// (0x000205de) title_pane_g4_ParamLimits

0x15d4,	// (0x000205de) title_pane_g4

0x703f,	// (0x00026049) title_pane_stacon_g3_ParamLimits

0x703f,	// (0x00026049) title_pane_stacon_g3

0xcf20,	// (0x0002bf2a) list_single_2graphic_im_pane_g4_ParamLimits

0xcf20,	// (0x0002bf2a) list_single_2graphic_im_pane_g4

0xadb2,	// (0x00029dbc) popup_side_volume_key_window_cp

0xb5d1,	// (0x0002a5db) main_idle_act2_pane_t1

0x89c6,	// (0x000279d0) toolbar_button_pane_g10

0x6eff,	// (0x00025f09) popup_toolbar_window_cp1

0xbd75,	// (0x0002ad7f) clock_nsta_pane_cp_t1

0xbd75,	// (0x0002ad7f) clock_nsta_pane_cp_t2

0x0001,

0xfabe,	// (0x0002eac8) clock_nsta_pane_cp_t

0x73e8,	// (0x000263f2) navi_navi_volume_pane_cp2_ParamLimits

0x73f4,	// (0x000263fe) popup_side_volume_key_window_g1_ParamLimits

0x7400,	// (0x0002640a) popup_side_volume_key_window_g2_ParamLimits

0x740c,	// (0x00026416) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0002e71b) popup_side_volume_key_window_g_ParamLimits

0x8e68,	// (0x00027e72) fep_hwr_aid_pane

0x1586,	// (0x00020590) bg_fep_hwr_top_pane_g4_ParamLimits

0xc342,	// (0x0002b34c) fep_hwr_top_pane_g1_ParamLimits

0xc354,	// (0x0002b35e) fep_hwr_top_pane_g2_ParamLimits

0x8f21,	// (0x00027f2b) fep_hwr_top_pane_g3_ParamLimits

0xfb13,	// (0x0002eb1d) fep_hwr_top_pane_g_ParamLimits

0x8f36,	// (0x00027f40) fep_hwr_top_text_pane_ParamLimits

0xab75,	// (0x00029b7f) aid_touch_tab_arrow_arrow_2

0xab7e,	// (0x00029b88) aid_touch_tab_arrow_left_2

0x8e7c,	// (0x00027e86) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x8eb3,	// (0x00027ebd) fep_hwr_prediction_pane

0xc4ad,	// (0x0002b4b7) fep_vkb_prediction_pane

0xc5aa,	// (0x0002b5b4) fep_vkb_side_pane_g3_ParamLimits

0xc5aa,	// (0x0002b5b4) fep_vkb_side_pane_g3

0xc556,	// (0x0002b560) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc9f7,	// (0x0002ba01) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xca04,	// (0x0002ba0e) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbd,	// (0x0002ebc7) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd413,	// (0x0002c41d) fep_hwr_prediction_pane_g1

0x91c3,	// (0x000281cd) fep_hwr_prediction_pane_g2

0x91cb,	// (0x000281d5) fep_hwr_prediction_pane_g3

0x91d3,	// (0x000281dd) fep_hwr_prediction_pane_g4

0x0003,

0xfcb9,	// (0x0002ecc3) fep_hwr_prediction_pane_g

0xd413,	// (0x0002c41d) fep_vkb_prediction_pane_g1

0xd41d,	// (0x0002c427) fep_vkb_prediction_pane_g2

0xd425,	// (0x0002c42f) fep_vkb_prediction_pane_g3

0xd42d,	// (0x0002c437) fep_vkb_prediction_pane_g4

0x0003,

0xfcc2,	// (0x0002eccc) fep_vkb_prediction_pane_g

0x8ca0,	// (0x00027caa) slider_set_pane_g3

0x8cb4,	// (0x00027cbe) slider_set_pane_g4

0x8ccc,	// (0x00027cd6) slider_set_pane_g5

0x8ca0,	// (0x00027caa) slider_set_pane_g6

0x8ce2,	// (0x00027cec) slider_set_pane_g7

0xb212,	// (0x0002a21c) slider_form_pane_g3

0xb21b,	// (0x0002a225) slider_form_pane_g4

0xb223,	// (0x0002a22d) slider_form_pane_g5

0xb212,	// (0x0002a21c) slider_form_pane_g6

0xb22b,	// (0x0002a235) slider_form_pane_g7

0xb87c,	// (0x0002a886) slider_set_pane_vc_g3

0xb885,	// (0x0002a88f) slider_set_pane_vc_g4

0xb88e,	// (0x0002a898) slider_set_pane_vc_g5

0xb87c,	// (0x0002a886) slider_set_pane_vc_g6

0xb897,	// (0x0002a8a1) slider_set_pane_vc_g7

0xba49,	// (0x0002aa53) slider_form_pane_vc_g1

0xba52,	// (0x0002aa5c) slider_form_pane_vc_g2

0xba5b,	// (0x0002aa65) slider_form_pane_vc_g3

0xba49,	// (0x0002aa53) slider_form_pane_vc_g4

0xba64,	// (0x0002aa6e) slider_form_pane_vc_g5

0x0004,

0xfa90,	// (0x0002ea9a) slider_form_pane_vc_g

0x15b6,	// (0x000205c0) main_idle_act3_pane

0xd435,	// (0x0002c43f) ai3_links_pane

0xd43e,	// (0x0002c448) popup_ai3_data_window_ParamLimits

0xd43e,	// (0x0002c448) popup_ai3_data_window

0x15b6,	// (0x000205c0) grid_ai3_links_pane

0xd456,	// (0x0002c460) cell_ai3_links_pane_ParamLimits

0xd456,	// (0x0002c460) cell_ai3_links_pane

0xd46e,	// (0x0002c478) bg_popup_sub_pane_cp11

0xd47b,	// (0x0002c485) cell_ai3_links_pane_g1

0x15b6,	// (0x000205c0) bg_popup_sub_pane_cp12

0xd4a0,	// (0x0002c4aa) heading_ai3_data_pane

0xd4a8,	// (0x0002c4b2) list_ai3_gene_pane

0xd4b4,	// (0x0002c4be) popup_ai3_data_window_g1

0xd4bc,	// (0x0002c4c6) heading_ai3_data_pane_g1

0xd4c4,	// (0x0002c4ce) heading_ai3_data_pane_t1

0xd4d2,	// (0x0002c4dc) list_double_ai3_gene_pane_ParamLimits

0xd4d2,	// (0x0002c4dc) list_double_ai3_gene_pane

0xd4df,	// (0x0002c4e9) list_single_ai3_gene_pane_ParamLimits

0xd4df,	// (0x0002c4e9) list_single_ai3_gene_pane

0xc2ab,	// (0x0002b2b5) list_highlight_pane_cp7_ParamLimits

0xc2ab,	// (0x0002b2b5) list_highlight_pane_cp7

0xd4ec,	// (0x0002c4f6) list_single_a13_gene_pane_t1_ParamLimits

0xd4ec,	// (0x0002c4f6) list_single_a13_gene_pane_t1

0xd503,	// (0x0002c50d) list_single_ai3_gene_pane_g1

0xd50c,	// (0x0002c516) list_single_ai3_gene_pane_g2

0x0001,

0xfccb,	// (0x0002ecd5) list_single_ai3_gene_pane_g

0xd514,	// (0x0002c51e) list_double_ai3_gene_pane_g1_ParamLimits

0xd514,	// (0x0002c51e) list_double_ai3_gene_pane_g1

0xd520,	// (0x0002c52a) list_double_ai3_gene_pane_t1_ParamLimits

0xd520,	// (0x0002c52a) list_double_ai3_gene_pane_t1

0xd53c,	// (0x0002c546) list_double_ai3_gene_pane_t2_ParamLimits

0xd53c,	// (0x0002c546) list_double_ai3_gene_pane_t2

0xd551,	// (0x0002c55b) list_double_ai3_gene_pane_t3_ParamLimits

0xd551,	// (0x0002c55b) list_double_ai3_gene_pane_t3

0x0002,

0xfcd0,	// (0x0002ecda) list_double_ai3_gene_pane_t_ParamLimits

0xfcd0,	// (0x0002ecda) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x63e4,	// (0x000253ee) aid_size_min_col_2

0xd3ff,	// (0x0002c409) aid_size_min_msg_ParamLimits

0xd3ff,	// (0x0002c409) aid_size_min_msg

0xc6aa,	// (0x0002b6b4) fep_vkb_top_text_pane_g2_ParamLimits

0xc6aa,	// (0x0002b6b4) fep_vkb_top_text_pane_g2

0x0001,

0xfb43,	// (0x0002eb4d) fep_vkb_top_text_pane_g_ParamLimits

0xfb43,	// (0x0002eb4d) fep_vkb_top_text_pane_g

0x15b6,	// (0x000205c0) main_hc_apps_shell_pane

0xd56e,	// (0x0002c578) grid_hc_apps_pane_ParamLimits

0xd56e,	// (0x0002c578) grid_hc_apps_pane

0xd57d,	// (0x0002c587) list_hc_apps_pane

0xd585,	// (0x0002c58f) scroll_pane_cp37_ParamLimits

0xd585,	// (0x0002c58f) scroll_pane_cp37

0xd591,	// (0x0002c59b) cell_hc_apps_pane_ParamLimits

0xd591,	// (0x0002c59b) cell_hc_apps_pane

0xd63f,	// (0x0002c649) cell_hc_apps_pane_g1_ParamLimits

0xd63f,	// (0x0002c649) cell_hc_apps_pane_g1

0xd670,	// (0x0002c67a) cell_hc_apps_pane_g2_ParamLimits

0xd670,	// (0x0002c67a) cell_hc_apps_pane_g2

0xd68c,	// (0x0002c696) cell_hc_apps_pane_g3_ParamLimits

0xd68c,	// (0x0002c696) cell_hc_apps_pane_g3

0x0002,

0xfcd7,	// (0x0002ece1) cell_hc_apps_pane_g_ParamLimits

0xfcd7,	// (0x0002ece1) cell_hc_apps_pane_g

0xd6ae,	// (0x0002c6b8) cell_hc_apps_pane_t1_ParamLimits

0xd6ae,	// (0x0002c6b8) cell_hc_apps_pane_t1

0x176a,	// (0x00020774) grid_highlight_pane_cp10_ParamLimits

0x176a,	// (0x00020774) grid_highlight_pane_cp10

0xd6ee,	// (0x0002c6f8) list_single_hc_apps_pane_ParamLimits

0xd6ee,	// (0x0002c6f8) list_single_hc_apps_pane

0xd751,	// (0x0002c75b) list_single_hc_apps_pane_g1

0x64cc,	// (0x000254d6) list_single_hc_apps_pane_g2

0x0001,

0xfcde,	// (0x0002ece8) list_single_hc_apps_pane_g

0x64e5,	// (0x000254ef) list_single_hc_apps_pane_g2_copy1

0x6501,	// (0x0002550b) list_single_hc_apps_pane_t1

0x1626,	// (0x00020630) bg_set_opt_pane_cp_ParamLimits

0x6a16,	// (0x00025a20) setting_slider_pane_t1_ParamLimits

0x6a2f,	// (0x00025a39) setting_slider_pane_t2_ParamLimits

0x6a49,	// (0x00025a53) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0002e568) setting_slider_pane_t_ParamLimits

0x6a61,	// (0x00025a6b) slider_set_pane_ParamLimits

0x7d27,	// (0x00026d31) control_pane_g5_ParamLimits

0x7d27,	// (0x00026d31) control_pane_g5

0xb061,	// (0x0002a06b) slider_set_pane_g1_ParamLimits

0x8c94,	// (0x00027c9e) slider_set_pane_g2_ParamLimits

0x8ca0,	// (0x00027caa) slider_set_pane_g3_ParamLimits

0x8cb4,	// (0x00027cbe) slider_set_pane_g4_ParamLimits

0x8ccc,	// (0x00027cd6) slider_set_pane_g5_ParamLimits

0x8ca0,	// (0x00027caa) slider_set_pane_g6_ParamLimits

0x8ce2,	// (0x00027cec) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0002e969) slider_set_pane_g_ParamLimits

0x77d7,	// (0x000267e1) navi_icon_text_pane_ParamLimits

0x8479,	// (0x00027483) aid_fill_nsta_2_ParamLimits

0x84b8,	// (0x000274c2) aid_touch_tab_arrow_left_ParamLimits

0x84c7,	// (0x000274d1) aid_touch_tab_arrow_right_ParamLimits

0x8534,	// (0x0002753e) clock_nsta_pane_ParamLimits

0xab57,	// (0x00029b61) navi_icon_pane_g1_ParamLimits

0xab63,	// (0x00029b6d) navi_text_pane_t1_ParamLimits

0xbe85,	// (0x0002ae8f) navi_icon_text_pane_g1_ParamLimits

0xbe91,	// (0x0002ae9b) navi_icon_text_pane_t1_ParamLimits

0xd751,	// (0x0002c75b) list_single_hc_apps_pane_g1_ParamLimits

0x64cc,	// (0x000254d6) list_single_hc_apps_pane_g2_ParamLimits

0xfcde,	// (0x0002ece8) list_single_hc_apps_pane_g_ParamLimits

0x64e5,	// (0x000254ef) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x6501,	// (0x0002550b) list_single_hc_apps_pane_t1_ParamLimits

0x685a,	// (0x00025864) popup_toolbar2_fixed_window_ParamLimits

0x685a,	// (0x00025864) popup_toolbar2_fixed_window

0x838f,	// (0x00027399) popup_toolbar2_float_window

0x15b6,	// (0x000205c0) bg_popup_sub_pane_cp27

0xd76a,	// (0x0002c774) grid_toolbar2_float_pane

0x15b6,	// (0x000205c0) bg_popup_sub_pane_cp26

0xd76a,	// (0x0002c774) grid_toolbar2_fixed_pane

0xd772,	// (0x0002c77c) cell_toolbar2_fixed_pane_ParamLimits

0xd772,	// (0x0002c77c) cell_toolbar2_fixed_pane

0xd782,	// (0x0002c78c) cell_toolbar2_fixed_pane_g1

0x88ce,	// (0x000278d8) toolbar2_fixed_button_pane

0x897e,	// (0x00027988) toolbar2_fixed_button_pane_g1

0x8986,	// (0x00027990) toolbar2_fixed_button_pane_g2

0x898e,	// (0x00027998) toolbar2_fixed_button_pane_g3

0x8996,	// (0x000279a0) toolbar2_fixed_button_pane_g4

0x899e,	// (0x000279a8) toolbar2_fixed_button_pane_g5

0x89a6,	// (0x000279b0) toolbar2_fixed_button_pane_g6

0x89ae,	// (0x000279b8) toolbar2_fixed_button_pane_g7

0x89b6,	// (0x000279c0) toolbar2_fixed_button_pane_g8

0x89be,	// (0x000279c8) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0002e86b) toolbar2_fixed_button_pane_g

0xd78b,	// (0x0002c795) cell_toolbar2_float_pane_ParamLimits

0xd78b,	// (0x0002c795) cell_toolbar2_float_pane

0xd79c,	// (0x0002c7a6) cell_toolbar2_float_pane_g1

0x88ce,	// (0x000278d8) toolbar2_fixed_button_pane_cp

0xc414,	// (0x0002b41e) fep_vkb_accented_list_pane_ParamLimits

0xc414,	// (0x0002b41e) fep_vkb_accented_list_pane

0x9084,	// (0x0002808e) bg_popup_fep_shadow_pane_g9

0x7957,	// (0x00026961) bg_popup_fep_shadow_pane_cp3

0x1ba8,	// (0x00020bb2) list_accented_list_pane

0xd7a5,	// (0x0002c7af) list_single_accented_list_pane_ParamLimits

0xd7a5,	// (0x0002c7af) list_single_accented_list_pane

0x7957,	// (0x00026961) list_highlight_pane_cp10

0xd7b6,	// (0x0002c7c0) list_single_accented_list_pane_t1

0x82df,	// (0x000272e9) popup_slider_window_ParamLimits

0x82df,	// (0x000272e9) popup_slider_window

0xd3f6,	// (0x0002c400) aid_indentation_list_msg

0xd86c,	// (0x0002c876) bg_popup_window_pane_cp19

0xd8d6,	// (0x0002c8e0) popup_slider_window_g1

0xd8f2,	// (0x0002c8fc) popup_slider_window_g2

0xd90e,	// (0x0002c918) popup_slider_window_g3

0x0005,

0xfce3,	// (0x0002eced) popup_slider_window_g

0xd96a,	// (0x0002c974) popup_slider_window_t1

0xd9de,	// (0x0002c9e8) small_volume_slider_vertical_pane

0xc2e6,	// (0x0002b2f0) small_volume_slider_vertical_pane_g1

0xc2e6,	// (0x0002b2f0) small_volume_slider_vertical_pane_g2

0xd9fa,	// (0x0002ca04) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf5,	// (0x0002ecff) small_volume_slider_vertical_pane_g

0x662a,	// (0x00025634) area_side_right_pane_ParamLimits

0x662a,	// (0x00025634) area_side_right_pane

0x91db,	// (0x000281e5) aid_size_side_button_ParamLimits

0x91db,	// (0x000281e5) aid_size_side_button

0x91ef,	// (0x000281f9) grid_sctrl_middle_pane_ParamLimits

0x91ef,	// (0x000281f9) grid_sctrl_middle_pane

0x920e,	// (0x00028218) sctrl_sk_bottom_pane

0x921f,	// (0x00028229) sctrl_sk_top_pane

0x9231,	// (0x0002823b) aid_touch_sctrl_top

0x176a,	// (0x00020774) bg_sctrl_sk_pane_ParamLimits

0x176a,	// (0x00020774) bg_sctrl_sk_pane

0x923e,	// (0x00028248) sctrl_sk_top_pane_g1

0x924b,	// (0x00028255) sctrl_sk_top_pane_t1

0x9231,	// (0x0002823b) aid_touch_sctrl_bottom

0x176a,	// (0x00020774) bg_sctrl_sk_pane_cp_ParamLimits

0x176a,	// (0x00020774) bg_sctrl_sk_pane_cp

0x9266,	// (0x00028270) sctrl_sk_bottom_pane_g1

0x924b,	// (0x00028255) sctrl_sk_bottom_pane_t1

0x926f,	// (0x00028279) cell_sctrl_middle_pane_ParamLimits

0x926f,	// (0x00028279) cell_sctrl_middle_pane

0x928a,	// (0x00028294) aid_touch_sctrl_middle_ParamLimits

0x928a,	// (0x00028294) aid_touch_sctrl_middle

0x1a5c,	// (0x00020a66) bg_sctrl_middle_pane_ParamLimits

0x1a5c,	// (0x00020a66) bg_sctrl_middle_pane

0xc556,	// (0x0002b560) cell_sctrl_middle_pane_g1_ParamLimits

0xc556,	// (0x0002b560) cell_sctrl_middle_pane_g1

0x929c,	// (0x000282a6) cell_sctrl_middle_pane_g2_ParamLimits

0x929c,	// (0x000282a6) cell_sctrl_middle_pane_g2

0x0001,

0xfd01,	// (0x0002ed0b) cell_sctrl_middle_pane_g_ParamLimits

0xfd01,	// (0x0002ed0b) cell_sctrl_middle_pane_g

0x897e,	// (0x00027988) bg_sctrl_middle_pane_g1

0x8986,	// (0x00027990) bg_sctrl_middle_pane_g2

0x898e,	// (0x00027998) bg_sctrl_middle_pane_g3

0x8996,	// (0x000279a0) bg_sctrl_middle_pane_g4

0x899e,	// (0x000279a8) bg_sctrl_middle_pane_g5

0x89a6,	// (0x000279b0) bg_sctrl_middle_pane_g6

0x89ae,	// (0x000279b8) bg_sctrl_middle_pane_g7

0x89b6,	// (0x000279c0) bg_sctrl_middle_pane_g8

0x0007,

0xfd06,	// (0x0002ed10) bg_sctrl_middle_pane_g

0x89be,	// (0x000279c8) bg_sctrl_middle_pane_g8_copy1

0x897e,	// (0x00027988) bg_sctrl_sk_pane_g1

0x8986,	// (0x00027990) bg_sctrl_sk_pane_g2

0x898e,	// (0x00027998) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0002e86b) bg_sctrl_sk_pane_g

0x1934,	// (0x0002093e) aid_size_touch_scroll_bar

0x8996,	// (0x000279a0) bg_sctrl_sk_pane_g4

0x899e,	// (0x000279a8) bg_sctrl_sk_pane_g5

0x89a6,	// (0x000279b0) bg_sctrl_sk_pane_g6

0x89ae,	// (0x000279b8) bg_sctrl_sk_pane_g7

0x89b6,	// (0x000279c0) bg_sctrl_sk_pane_g8

0x89be,	// (0x000279c8) bg_sctrl_sk_pane_g9

0x7f48,	// (0x00026f52) popup_fep_china_hwr2_fs_candidate_window

0x7f52,	// (0x00026f5c) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7f52,	// (0x00026f5c) popup_fep_china_hwr2_fs_control_window

0xc556,	// (0x0002b560) sctrl_sk_top_pane_g2

0x0001,

0xfcfc,	// (0x0002ed06) sctrl_sk_top_pane_g

0xda03,	// (0x0002ca0d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xda03,	// (0x0002ca0d) aid_fep_china_hwr2_fs_cell

0xda15,	// (0x0002ca1f) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xda15,	// (0x0002ca1f) bg_popup_fep_shadow_pane_cp4

0xda2c,	// (0x0002ca36) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda2c,	// (0x0002ca36) bg_popup_fep_shadow_pane_cp5

0xda3e,	// (0x0002ca48) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda3e,	// (0x0002ca48) popup_fep_china_hwr2_fs_control_bar_grid

0xda4e,	// (0x0002ca58) popup_fep_china_hwr2_fs_control_funtion_grid

0xda56,	// (0x0002ca60) aid_fep_china_hwr2_fs_candi_cell

0x15b6,	// (0x000205c0) bg_popup_fep_shadow_pane_cp6

0xda60,	// (0x0002ca6a) popup_fep_china_hwr2_fs_candidate_grid

0xda6a,	// (0x0002ca74) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda6a,	// (0x0002ca74) cell_fep_china_hwr2_fs_funtion_grid

0xc2e6,	// (0x0002b2f0) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda82,	// (0x0002ca8c) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda82,	// (0x0002ca8c) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda90,	// (0x0002ca9a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda90,	// (0x0002ca9a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd17,	// (0x0002ed21) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd17,	// (0x0002ed21) cell_fep_china_hwr2_fs_funtion_grid_g

0xdaa6,	// (0x0002cab0) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdaa6,	// (0x0002cab0) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdabb,	// (0x0002cac5) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdabb,	// (0x0002cac5) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1c,	// (0x0002ed26) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1c,	// (0x0002ed26) cell_fep_china_hwr2_fs_funtion_grid_t

0xdad7,	// (0x0002cae1) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdadf,	// (0x0002cae9) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdae7,	// (0x0002caf1) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd21,	// (0x0002ed2b) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdaef,	// (0x0002caf9) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdaef,	// (0x0002caf9) cell_fep_china_hwr2_fs_candidate_grid

0xdb08,	// (0x0002cb12) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdb10,	// (0x0002cb1a) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc2e6,	// (0x0002b2f0) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc2e6,	// (0x0002b2f0) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb48,	// (0x0002eb52) cell_fep_china_hwr2_fs_candidate_grid_g

0xdb18,	// (0x0002cb22) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8547,	// (0x00027551) clock_nsta_pane_cp_24_ParamLimits

0x8547,	// (0x00027551) clock_nsta_pane_cp_24

0x85c5,	// (0x000275cf) indicator_nsta_pane_cp_24_ParamLimits

0x85c5,	// (0x000275cf) indicator_nsta_pane_cp_24

0xa9d3,	// (0x000299dd) heading_pane_g1

0x0001,

0xf8c6,	// (0x0002e8d0) heading_pane_g

0xb41a,	// (0x0002a424) grid_sct_catagory_button_pane

0xb44a,	// (0x0002a454) scroll_pane_cp5_ParamLimits

0xbed3,	// (0x0002aedd) button_value_adjust_pane_cp5_ParamLimits

0xbed3,	// (0x0002aedd) button_value_adjust_pane_cp5

0xbfb2,	// (0x0002afbc) form2_midp_time_pane_ParamLimits

0xdb26,	// (0x0002cb30) cell_sct_catagory_button_pane_ParamLimits

0xdb26,	// (0x0002cb30) cell_sct_catagory_button_pane

0xc2ab,	// (0x0002b2b5) bg_button_pane_cp01_ParamLimits

0xc2ab,	// (0x0002b2b5) bg_button_pane_cp01

0xc2e6,	// (0x0002b2f0) cell_sct_catagory_button_pane_g1

0x831e,	// (0x00027328) popup_tb_extension_window

0xdb38,	// (0x0002cb42) aid_size_cell_ext_ParamLimits

0xdb38,	// (0x0002cb42) aid_size_cell_ext

0x176a,	// (0x00020774) bg_tb_trans_pane_cp1_ParamLimits

0x176a,	// (0x00020774) bg_tb_trans_pane_cp1

0xdb58,	// (0x0002cb62) grid_tb_ext_pane_ParamLimits

0xdb58,	// (0x0002cb62) grid_tb_ext_pane

0xdb88,	// (0x0002cb92) cell_tb_ext_pane_ParamLimits

0xdb88,	// (0x0002cb92) cell_tb_ext_pane

0xdb9f,	// (0x0002cba9) cell_tb_ext_pane_g1_ParamLimits

0xdb9f,	// (0x0002cba9) cell_tb_ext_pane_g1

0xdbbc,	// (0x0002cbc6) cell_tb_ext_pane_t1

0x176a,	// (0x00020774) list_highlight_pane_cp11_ParamLimits

0x176a,	// (0x00020774) list_highlight_pane_cp11

0x6879,	// (0x00025883) popup_uni_indicator_window_ParamLimits

0x6879,	// (0x00025883) popup_uni_indicator_window

0x1a5c,	// (0x00020a66) bg_popup_sub_pane_cp14

0xdbd7,	// (0x0002cbe1) list_uniindi_pane

0xdbe3,	// (0x0002cbed) uniindi_top_pane

0x176a,	// (0x00020774) bg_uniindi_top_pane

0xdc02,	// (0x0002cc0c) uniindi_top_pane_g1

0xdc18,	// (0x0002cc22) uniindi_top_pane_g2

0x0003,

0xfd28,	// (0x0002ed32) uniindi_top_pane_g

0xdc42,	// (0x0002cc4c) uniindi_top_pane_t1

0xdc6c,	// (0x0002cc76) list_single_uniindi_pane_ParamLimits

0xdc6c,	// (0x0002cc76) list_single_uniindi_pane

0xc2e6,	// (0x0002b2f0) bg_uniindi_top_pane_g1

0xdc7e,	// (0x0002cc88) list_single_uniindi_pane_g1

0xdc91,	// (0x0002cc9b) list_single_uniindi_pane_t1

0x15b6,	// (0x000205c0) control_bg_pane

0xdcb6,	// (0x0002ccc0) bg_sctrl_sk_pane_cp1

0xdcbf,	// (0x0002ccc9) bg_sctrl_sk_pane_cp2

0xdcc8,	// (0x0002ccd2) control_bg_pane_g1

0xdcd1,	// (0x0002ccdb) control_bg_pane_g2

0x0001,

0xfd31,	// (0x0002ed3b) control_bg_pane_g

0xbd19,	// (0x0002ad23) cell_indicator_nsta_pane_g1_ParamLimits

0xbd27,	// (0x0002ad31) cell_indicator_nsta_pane_g2_ParamLimits

0xfaac,	// (0x0002eab6) cell_indicator_nsta_pane_g_ParamLimits

0x61aa,	// (0x000251b4) form2_midp_time_pane_t1_ParamLimits

0x18e6,	// (0x000208f0) main_idle_act4_pane_ParamLimits

0x18e6,	// (0x000208f0) main_idle_act4_pane

0x831e,	// (0x00027328) popup_tb_extension_window_ParamLimits

0xdb78,	// (0x0002cb82) tb_ext_find_pane_ParamLimits

0xdb78,	// (0x0002cb82) tb_ext_find_pane

0xdcda,	// (0x0002cce4) ai_gene_pane_1_cp1

0x7a96,	// (0x00026aa0) ai_gene_pane_2_cp1

0xdce2,	// (0x0002ccec) list_single_idle_plugin_calendar_pane

0xdceb,	// (0x0002ccf5) list_single_idle_plugin_notification_pane

0xdcf4,	// (0x0002ccfe) list_single_idle_plugin_player_pane

0xdcfd,	// (0x0002cd07) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcfd,	// (0x0002cd07) list_single_idle_plugin_shortcut_pane

0xdd1f,	// (0x0002cd29) main_idle_act4_pane_t1

0xdd31,	// (0x0002cd3b) main_idle_act4_pane_t2

0x0001,

0xfd36,	// (0x0002ed40) main_idle_act4_pane_t

0xdd43,	// (0x0002cd4d) middle_sk_idle_act4_pane_ParamLimits

0xdd43,	// (0x0002cd4d) middle_sk_idle_act4_pane

0xdd59,	// (0x0002cd63) popup_clock_digital_analogue_window_cp2

0xdd73,	// (0x0002cd7d) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd73,	// (0x0002cd7d) shortcut_wheel_idle_act4_pane

0xc2e6,	// (0x0002b2f0) shortcut_wheel_idle_act4_pane_g1

0xc2e6,	// (0x0002b2f0) shortcut_wheel_idle_act4_pane_g2

0xc2e6,	// (0x0002b2f0) shortcut_wheel_idle_act4_pane_g3

0xc2e6,	// (0x0002b2f0) shortcut_wheel_idle_act4_pane_g4

0xc2e6,	// (0x0002b2f0) shortcut_wheel_idle_act4_pane_g5

0xdd87,	// (0x0002cd91) shortcut_wheel_idle_act4_pane_g6

0xdd8f,	// (0x0002cd99) shortcut_wheel_idle_act4_pane_g7

0xdd97,	// (0x0002cda1) shortcut_wheel_idle_act4_pane_g8

0xdd9f,	// (0x0002cda9) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3b,	// (0x0002ed45) shortcut_wheel_idle_act4_pane_g

0xc556,	// (0x0002b560) middle_sk_idle_act4_pane_g1_ParamLimits

0xc556,	// (0x0002b560) middle_sk_idle_act4_pane_g1

0xde03,	// (0x0002ce0d) middle_sk_idle_act4_pane_g2_ParamLimits

0xde03,	// (0x0002ce0d) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5e,	// (0x0002ed68) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5e,	// (0x0002ed68) middle_sk_idle_act4_pane_g

0xde0f,	// (0x0002ce19) middle_sk_idle_act4_pane_t1_ParamLimits

0xde0f,	// (0x0002ce19) middle_sk_idle_act4_pane_t1

0xde2c,	// (0x0002ce36) grid_ai_shortcut_pane_ParamLimits

0xde2c,	// (0x0002ce36) grid_ai_shortcut_pane

0xde45,	// (0x0002ce4f) list_highlight_pane_cp16_ParamLimits

0xde45,	// (0x0002ce4f) list_highlight_pane_cp16

0xde52,	// (0x0002ce5c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde52,	// (0x0002ce5c) list_single_idle_plugin_shortcut_pane_g1

0xde5e,	// (0x0002ce68) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde5e,	// (0x0002ce68) list_single_idle_plugin_shortcut_pane_g2

0xde76,	// (0x0002ce80) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde76,	// (0x0002ce80) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd63,	// (0x0002ed6d) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd63,	// (0x0002ed6d) list_single_idle_plugin_shortcut_pane_g

0xde89,	// (0x0002ce93) cell_ai_shortcut_pane_ParamLimits

0xde89,	// (0x0002ce93) cell_ai_shortcut_pane

0xdead,	// (0x0002ceb7) cell_ai_shortcut_pane_g1_ParamLimits

0xdead,	// (0x0002ceb7) cell_ai_shortcut_pane_g1

0xdcda,	// (0x0002cce4) ai_gene_pane_1_cp2

0xdecf,	// (0x0002ced9) ai_gene_pane_2_cp2

0xded7,	// (0x0002cee1) list_highlight_pane_cp15

0xdee0,	// (0x0002ceea) list_single_idle_plugin_calendar_pane_g1

0xded7,	// (0x0002cee1) list_highlight_pane_cp17

0xdee8,	// (0x0002cef2) list_single_idle_plugin_calendar_pane_g1_copy1

0xdef0,	// (0x0002cefa) list_single_idle_plugin_player_pane_g1

0xb673,	// (0x0002a67d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6a,	// (0x0002ed74) list_single_idle_plugin_player_pane_g

0xdef8,	// (0x0002cf02) list_single_idle_plugin_player_pane_t1

0xdf06,	// (0x0002cf10) list_single_idle_plugin_player_pane_t2

0xdf14,	// (0x0002cf1e) list_single_idle_plugin_player_pane_t3

0xdf22,	// (0x0002cf2c) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6f,	// (0x0002ed79) list_single_idle_plugin_player_pane_t

0xdf30,	// (0x0002cf3a) wait_bar_pane_cp15

0xdf38,	// (0x0002cf42) grid_ai_notification_pane

0xb673,	// (0x0002a67d) list_single_idle_plugin_notification_pane_g1

0xdf41,	// (0x0002cf4b) cell_ai_notification_pane_ParamLimits

0xdf41,	// (0x0002cf4b) cell_ai_notification_pane

0xdf4e,	// (0x0002cf58) cell_ai_notification_pane_g1

0xdf56,	// (0x0002cf60) cell_ai_notification_pane_t1

0xdf64,	// (0x0002cf6e) tb_ext_find_button_pane

0xdf6c,	// (0x0002cf76) tb_ext_find_pane_g1

0xdf74,	// (0x0002cf7e) tb_ext_find_pane_t1

0x38d4,	// (0x000228de) tb_ext_find_button_pane_g1

0xdf82,	// (0x0002cf8c) tb_ext_find_button_pane_g2

0x0001,

0xfd78,	// (0x0002ed82) tb_ext_find_button_pane_g

0xdd1f,	// (0x0002cd29) main_idle_act4_pane_t1_ParamLimits

0xdd31,	// (0x0002cd3b) main_idle_act4_pane_t2_ParamLimits

0xfd36,	// (0x0002ed40) main_idle_act4_pane_t_ParamLimits

0xdd59,	// (0x0002cd63) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd67,	// (0x0002cd71) sat_plugin_idle_act4_pane_ParamLimits

0xdd67,	// (0x0002cd71) sat_plugin_idle_act4_pane

0xdf8b,	// (0x0002cf95) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf8b,	// (0x0002cf95) sat_plugin_idle_act4_pane_t1

0xdf9e,	// (0x0002cfa8) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf9e,	// (0x0002cfa8) sat_plugin_idle_act4_pane_t2

0xdfb1,	// (0x0002cfbb) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdfb1,	// (0x0002cfbb) sat_plugin_idle_act4_pane_t3

0xdfc4,	// (0x0002cfce) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdfc4,	// (0x0002cfce) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7d,	// (0x0002ed87) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7d,	// (0x0002ed87) sat_plugin_idle_act4_pane_t

0x67c2,	// (0x000257cc) popup_battery_window_ParamLimits

0x67c2,	// (0x000257cc) popup_battery_window

0x176a,	// (0x00020774) bg_popup_sub_pane_cp25_ParamLimits

0x176a,	// (0x00020774) bg_popup_sub_pane_cp25

0xdfd7,	// (0x0002cfe1) popup_battery_window_g1_ParamLimits

0xdfd7,	// (0x0002cfe1) popup_battery_window_g1

0xdfe3,	// (0x0002cfed) popup_battery_window_t1_ParamLimits

0xdfe3,	// (0x0002cfed) popup_battery_window_t1

0xdff5,	// (0x0002cfff) popup_battery_window_t2_ParamLimits

0xdff5,	// (0x0002cfff) popup_battery_window_t2

0x0001,

0xfd86,	// (0x0002ed90) popup_battery_window_t_ParamLimits

0xfd86,	// (0x0002ed90) popup_battery_window_t

0x795f,	// (0x00026969) midp_canvas_pane_ParamLimits

0x79d8,	// (0x000269e2) midp_keypad_pane_ParamLimits

0x79d8,	// (0x000269e2) midp_keypad_pane

0x7ea6,	// (0x00026eb0) main_midp_pane_ParamLimits

0xbd93,	// (0x0002ad9d) signal_pane_g2_cp_ParamLimits

0xe012,	// (0x0002d01c) aid_size_cell_midp_keypad_ParamLimits

0xe012,	// (0x0002d01c) aid_size_cell_midp_keypad

0xe02c,	// (0x0002d036) midp_keyp_game_grid_pane_ParamLimits

0xe02c,	// (0x0002d036) midp_keyp_game_grid_pane

0xe04c,	// (0x0002d056) midp_keyp_rocker_pane_ParamLimits

0xe04c,	// (0x0002d056) midp_keyp_rocker_pane

0xe085,	// (0x0002d08f) midp_keyp_sk_left_pane_ParamLimits

0xe085,	// (0x0002d08f) midp_keyp_sk_left_pane

0xe0df,	// (0x0002d0e9) midp_keyp_sk_right_pane_ParamLimits

0xe0df,	// (0x0002d0e9) midp_keyp_sk_right_pane

0x15b6,	// (0x000205c0) bg_button_pane_cp03

0xe139,	// (0x0002d143) midp_keyp_sk_left_pane_g1

0x15b6,	// (0x000205c0) bg_button_pane_cp04

0xe139,	// (0x0002d143) midp_keyp_sk_right_pane_g1

0xc2e6,	// (0x0002b2f0) midp_keyp_rocker_pane_g1

0xe142,	// (0x0002d14c) keyp_game_cell_pane_ParamLimits

0xe142,	// (0x0002d14c) keyp_game_cell_pane

0x15b6,	// (0x000205c0) bg_button_pane_cp02

0xe155,	// (0x0002d15f) keyp_game_cell_pane_g1

0x67f8,	// (0x00025802) popup_fep_vkb2_window_ParamLimits

0x67f8,	// (0x00025802) popup_fep_vkb2_window

0x92ba,	// (0x000282c4) aid_size_cell_vkb2_ParamLimits

0x92ba,	// (0x000282c4) aid_size_cell_vkb2

0x930e,	// (0x00028318) popup_fep_vkb2_window_g1_ParamLimits

0x930e,	// (0x00028318) popup_fep_vkb2_window_g1

0x9356,	// (0x00028360) vkb2_area_bottom_pane_ParamLimits

0x9356,	// (0x00028360) vkb2_area_bottom_pane

0x93a2,	// (0x000283ac) vkb2_area_keypad_pane_ParamLimits

0x93a2,	// (0x000283ac) vkb2_area_keypad_pane

0x93e4,	// (0x000283ee) vkb2_area_top_pane_ParamLimits

0x93e4,	// (0x000283ee) vkb2_area_top_pane

0x945e,	// (0x00028468) vkb2_top_entry_pane_ParamLimits

0x945e,	// (0x00028468) vkb2_top_entry_pane

0x9488,	// (0x00028492) vkb2_top_grid_left_pane_ParamLimits

0x9488,	// (0x00028492) vkb2_top_grid_left_pane

0x94a6,	// (0x000284b0) vkb2_top_grid_right_pane_ParamLimits

0x94a6,	// (0x000284b0) vkb2_top_grid_right_pane

0x94c4,	// (0x000284ce) vkb2_cell_keypad_pane_ParamLimits

0x94c4,	// (0x000284ce) vkb2_cell_keypad_pane

0x9595,	// (0x0002859f) vkb2_area_bottom_grid_pane_ParamLimits

0x9595,	// (0x0002859f) vkb2_area_bottom_grid_pane

0x95bb,	// (0x000285c5) vkb2_area_bottom_pane_g1_ParamLimits

0x95bb,	// (0x000285c5) vkb2_area_bottom_pane_g1

0x95df,	// (0x000285e9) vkb2_area_bottom_pane_g2_ParamLimits

0x95df,	// (0x000285e9) vkb2_area_bottom_pane_g2

0x960d,	// (0x00028617) vkb2_area_bottom_pane_g3_ParamLimits

0x960d,	// (0x00028617) vkb2_area_bottom_pane_g3

0x0002,

0xfd8b,	// (0x0002ed95) vkb2_area_bottom_pane_g_ParamLimits

0xfd8b,	// (0x0002ed95) vkb2_area_bottom_pane_g

0x966e,	// (0x00028678) vkb2_top_cell_left_pane_ParamLimits

0x966e,	// (0x00028678) vkb2_top_cell_left_pane

0xe166,	// (0x0002d170) vkb2_top_entry_pane_g1_ParamLimits

0xe166,	// (0x0002d170) vkb2_top_entry_pane_g1

0xe174,	// (0x0002d17e) vkb2_top_entry_pane_t1_ParamLimits

0xe174,	// (0x0002d17e) vkb2_top_entry_pane_t1

0xe1a6,	// (0x0002d1b0) vkb2_top_entry_pane_t2_ParamLimits

0xe1a6,	// (0x0002d1b0) vkb2_top_entry_pane_t2

0xe1d8,	// (0x0002d1e2) vkb2_top_entry_pane_t3_ParamLimits

0xe1d8,	// (0x0002d1e2) vkb2_top_entry_pane_t3

0x0002,

0xfd92,	// (0x0002ed9c) vkb2_top_entry_pane_t_ParamLimits

0xfd92,	// (0x0002ed9c) vkb2_top_entry_pane_t

0x96bb,	// (0x000286c5) vkb2_top_grid_right_pane_g1_ParamLimits

0x96bb,	// (0x000286c5) vkb2_top_grid_right_pane_g1

0x96d1,	// (0x000286db) vkb2_top_grid_right_pane_g2_ParamLimits

0x96d1,	// (0x000286db) vkb2_top_grid_right_pane_g2

0x96e9,	// (0x000286f3) vkb2_top_grid_right_pane_g3_ParamLimits

0x96e9,	// (0x000286f3) vkb2_top_grid_right_pane_g3

0x9701,	// (0x0002870b) vkb2_top_grid_right_pane_g4_ParamLimits

0x9701,	// (0x0002870b) vkb2_top_grid_right_pane_g4

0x0003,

0xfd99,	// (0x0002eda3) vkb2_top_grid_right_pane_g_ParamLimits

0xfd99,	// (0x0002eda3) vkb2_top_grid_right_pane_g

0x9717,	// (0x00028721) vkb2_top_cell_left_pane_g1

0x972e,	// (0x00028738) vkb2_cell_keypad_pane_g1_ParamLimits

0x972e,	// (0x00028738) vkb2_cell_keypad_pane_g1

0xe1fc,	// (0x0002d206) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1fc,	// (0x0002d206) vkb2_cell_keypad_pane_t1

0x973c,	// (0x00028746) vkb2_cell_bottom_grid_pane_ParamLimits

0x973c,	// (0x00028746) vkb2_cell_bottom_grid_pane

0x9775,	// (0x0002877f) vkb2_cell_bottom_grid_pane_g1

0xdda7,	// (0x0002cdb1) aid_call2_pane_cp02

0xddaf,	// (0x0002cdb9) aid_call_pane_cp02

0xddb7,	// (0x0002cdc1) clock_digital_number_pane_cp10

0xddbf,	// (0x0002cdc9) clock_digital_number_pane_cp11

0xddc7,	// (0x0002cdd1) clock_digital_number_pane_cp12

0xddcf,	// (0x0002cdd9) clock_digital_number_pane_cp13

0xddd7,	// (0x0002cde1) clock_digital_separator_pane_cp10

0x38d4,	// (0x000228de) popup_clock_digital_analogue_window_cp2_g1

0x38d4,	// (0x000228de) popup_clock_digital_analogue_window_cp2_g2

0xdddf,	// (0x0002cde9) popup_clock_digital_analogue_window_cp2_g3

0x38d4,	// (0x000228de) popup_clock_digital_analogue_window_cp2_g4

0xdddf,	// (0x0002cde9) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4e,	// (0x0002ed58) popup_clock_digital_analogue_window_cp2_g

0xdde7,	// (0x0002cdf1) popup_clock_digital_analogue_window_cp2_t1

0xddf5,	// (0x0002cdff) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd59,	// (0x0002ed63) popup_clock_digital_analogue_window_cp2_t

0xc2e6,	// (0x0002b2f0) clock_digital_number_pane_cp10_g1

0xc2e6,	// (0x0002b2f0) clock_digital_number_pane_cp10_g2

0x0001,

0xfb48,	// (0x0002eb52) clock_digital_number_pane_cp10_g

0xc2e6,	// (0x0002b2f0) clock_digital_separator_pane_cp10_g1

0xc2e6,	// (0x0002b2f0) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb48,	// (0x0002eb52) clock_digital_separator_pane_cp10_g

0xdc24,	// (0x0002cc2e) uniindi_top_pane_g3

0xdc35,	// (0x0002cc3f) uniindi_top_pane_g4

0x954f,	// (0x00028559) vkb2_row_keypad_pane_ParamLimits

0x954f,	// (0x00028559) vkb2_row_keypad_pane

0x9791,	// (0x0002879b) vkb2_cell_t_keypad_pane_ParamLimits

0x9791,	// (0x0002879b) vkb2_cell_t_keypad_pane

0x97a1,	// (0x000287ab) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x97a1,	// (0x000287ab) vkb2_cell_t_keypad_pane_cp08

0x97b4,	// (0x000287be) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x97b4,	// (0x000287be) vkb2_cell_t_keypad_pane_cp09

0x97c8,	// (0x000287d2) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x97c8,	// (0x000287d2) vkb2_cell_t_keypad_pane_cp01

0x97d9,	// (0x000287e3) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x97d9,	// (0x000287e3) vkb2_cell_t_keypad_pane_cp02

0x97ea,	// (0x000287f4) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x97ea,	// (0x000287f4) vkb2_cell_t_keypad_pane_cp03

0x97fb,	// (0x00028805) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x97fb,	// (0x00028805) vkb2_cell_t_keypad_pane_cp04

0x980c,	// (0x00028816) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x980c,	// (0x00028816) vkb2_cell_t_keypad_pane_cp05

0x981d,	// (0x00028827) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x981d,	// (0x00028827) vkb2_cell_t_keypad_pane_cp06

0x982e,	// (0x00028838) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x982e,	// (0x00028838) vkb2_cell_t_keypad_pane_cp07

0x983f,	// (0x00028849) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x983f,	// (0x00028849) vkb2_cell_t_keypad_pane_cp10

0xc556,	// (0x0002b560) vkb2_cell_t_keypad_pane_g1

0xe213,	// (0x0002d21d) vkb2_cell_t_keypad_pane_t1

0x15b6,	// (0x000205c0) popup_grid_graphic2_window

0xe225,	// (0x0002d22f) aid_size_cell_graphic2_ParamLimits

0xe225,	// (0x0002d22f) aid_size_cell_graphic2

0xe25d,	// (0x0002d267) bg_popup_window_pane_cp21_ParamLimits

0xe25d,	// (0x0002d267) bg_popup_window_pane_cp21

0xe26b,	// (0x0002d275) graphic2_pages_pane_ParamLimits

0xe26b,	// (0x0002d275) graphic2_pages_pane

0xe2b1,	// (0x0002d2bb) grid_graphic2_control_pane_ParamLimits

0xe2b1,	// (0x0002d2bb) grid_graphic2_control_pane

0xe2ef,	// (0x0002d2f9) grid_graphic2_pane_ParamLimits

0xe2ef,	// (0x0002d2f9) grid_graphic2_pane

0xe363,	// (0x0002d36d) cell_graphic2_pane

0x15b6,	// (0x000205c0) main_comp_mode_pane

0xd4a8,	// (0x0002c4b2) list_ai3_gene_pane_ParamLimits

0xd86c,	// (0x0002c876) bg_popup_window_pane_cp19_ParamLimits

0xd878,	// (0x0002c882) bg_touch_area_indi_pane_ParamLimits

0xd878,	// (0x0002c882) bg_touch_area_indi_pane

0xd88e,	// (0x0002c898) bg_touch_area_indi_pane_cp01_ParamLimits

0xd88e,	// (0x0002c898) bg_touch_area_indi_pane_cp01

0xd8a4,	// (0x0002c8ae) bg_touch_area_indi_pane_cp02_ParamLimits

0xd8a4,	// (0x0002c8ae) bg_touch_area_indi_pane_cp02

0xd8bc,	// (0x0002c8c6) bg_touch_area_indi_pane_cp03_ParamLimits

0xd8bc,	// (0x0002c8c6) bg_touch_area_indi_pane_cp03

0xd8d6,	// (0x0002c8e0) popup_slider_window_g1_ParamLimits

0xd8f2,	// (0x0002c8fc) popup_slider_window_g2_ParamLimits

0xd90e,	// (0x0002c918) popup_slider_window_g3_ParamLimits

0xfce3,	// (0x0002eced) popup_slider_window_g_ParamLimits

0xd96a,	// (0x0002c974) popup_slider_window_t1_ParamLimits

0xd9de,	// (0x0002c9e8) small_volume_slider_vertical_pane_ParamLimits

0xe363,	// (0x0002d36d) cell_graphic2_pane_ParamLimits

0xe3b1,	// (0x0002d3bb) bg_button_pane_cp10_ParamLimits

0xe3b1,	// (0x0002d3bb) bg_button_pane_cp10

0xe3c4,	// (0x0002d3ce) bg_button_pane_cp11_ParamLimits

0xe3c4,	// (0x0002d3ce) bg_button_pane_cp11

0xe3d7,	// (0x0002d3e1) graphic2_pages_pane_g1_ParamLimits

0xe3d7,	// (0x0002d3e1) graphic2_pages_pane_g1

0xe3f2,	// (0x0002d3fc) graphic2_pages_pane_g2_ParamLimits

0xe3f2,	// (0x0002d3fc) graphic2_pages_pane_g2

0x0001,

0xfda7,	// (0x0002edb1) graphic2_pages_pane_g_ParamLimits

0xfda7,	// (0x0002edb1) graphic2_pages_pane_g

0xe40a,	// (0x0002d414) graphic2_pages_pane_t1_ParamLimits

0xe40a,	// (0x0002d414) graphic2_pages_pane_t1

0xe422,	// (0x0002d42c) cell_graphic2_control_pane_ParamLimits

0xe422,	// (0x0002d42c) cell_graphic2_control_pane

0xe443,	// (0x0002d44d) cell_graphic2_pane_g1_ParamLimits

0xe443,	// (0x0002d44d) cell_graphic2_pane_g1

0xe450,	// (0x0002d45a) cell_graphic2_pane_g2_ParamLimits

0xe450,	// (0x0002d45a) cell_graphic2_pane_g2

0xe45d,	// (0x0002d467) cell_graphic2_pane_g3_ParamLimits

0xe45d,	// (0x0002d467) cell_graphic2_pane_g3

0xe46a,	// (0x0002d474) cell_graphic2_pane_g4_ParamLimits

0xe46a,	// (0x0002d474) cell_graphic2_pane_g4

0xe477,	// (0x0002d481) cell_graphic2_pane_g5_ParamLimits

0xe477,	// (0x0002d481) cell_graphic2_pane_g5

0x0004,

0xfdac,	// (0x0002edb6) cell_graphic2_pane_g_ParamLimits

0xfdac,	// (0x0002edb6) cell_graphic2_pane_g

0xe492,	// (0x0002d49c) cell_graphic2_pane_t1_ParamLimits

0xe492,	// (0x0002d49c) cell_graphic2_pane_t1

0x9d6d,	// (0x00028d77) grid_highlight_pane_cp11_ParamLimits

0x9d6d,	// (0x00028d77) grid_highlight_pane_cp11

0x176a,	// (0x00020774) bg_button_pane_cp05

0xe4bb,	// (0x0002d4c5) cell_graphic2_control_pane_g1

0xc2e6,	// (0x0002b2f0) bg_touch_area_indi_pane_g1

0xe4e3,	// (0x0002d4ed) aid_cmod_rocker_key_size

0xe4ed,	// (0x0002d4f7) aid_cmode_itu_key_size

0xe4f7,	// (0x0002d501) main_cmode_video_pane

0xe501,	// (0x0002d50b) main_comp_mode_itu_pane

0xe50d,	// (0x0002d517) main_comp_mode_rocker_pane

0xe519,	// (0x0002d523) cell_cmode_rocker_pane_ParamLimits

0xe519,	// (0x0002d523) cell_cmode_rocker_pane

0xe52b,	// (0x0002d535) cell_cmode_itu_pane_ParamLimits

0xe52b,	// (0x0002d535) cell_cmode_itu_pane

0x1a5c,	// (0x00020a66) bg_button_pane_cp06_ParamLimits

0x1a5c,	// (0x00020a66) bg_button_pane_cp06

0xc556,	// (0x0002b560) cell_cmode_rocker_pane_g1_ParamLimits

0xc556,	// (0x0002b560) cell_cmode_rocker_pane_g1

0xda82,	// (0x0002ca8c) cell_cmode_rocker_pane_g2_ParamLimits

0xda82,	// (0x0002ca8c) cell_cmode_rocker_pane_g2

0x0001,

0xfdbc,	// (0x0002edc6) cell_cmode_rocker_pane_g_ParamLimits

0xfdbc,	// (0x0002edc6) cell_cmode_rocker_pane_g

0x15b6,	// (0x000205c0) bg_button_pane_cp07

0xe540,	// (0x0002d54a) cell_cmode_itu_pane_g1

0xe549,	// (0x0002d553) cell_cmode_itu_pane_t1

0xe557,	// (0x0002d561) cell_cmode_itu_pane_t2

0x0001,

0xfdc1,	// (0x0002edcb) cell_cmode_itu_pane_t

0xdca6,	// (0x0002ccb0) aid_touch_ctrl_left

0xdcae,	// (0x0002ccb8) aid_touch_ctrl_right

0x15b6,	// (0x000205c0) compa_mode_pane

0xe565,	// (0x0002d56f) aid_cmod_rocker_key_size_cp

0xe56f,	// (0x0002d579) aid_cmode_itu_key_size_cp

0xe579,	// (0x0002d583) compa_mode_pane_g1

0xe581,	// (0x0002d58b) compa_mode_pane_g2

0xe589,	// (0x0002d593) compa_mode_pane_g3

0x0002,

0xfdc6,	// (0x0002edd0) compa_mode_pane_g

0xe591,	// (0x0002d59b) main_comp_mode_itu_pane_cp

0xe599,	// (0x0002d5a3) main_comp_mode_rocker_pane_cp

0xe5a1,	// (0x0002d5ab) cell_cmode_itu_pane_cp_ParamLimits

0xe5a1,	// (0x0002d5ab) cell_cmode_itu_pane_cp

0xe5b6,	// (0x0002d5c0) cell_cmode_rocker_pane_cp_ParamLimits

0xe5b6,	// (0x0002d5c0) cell_cmode_rocker_pane_cp

0x1a5c,	// (0x00020a66) bg_button_pane_cp06_cp_ParamLimits

0x1a5c,	// (0x00020a66) bg_button_pane_cp06_cp

0xc556,	// (0x0002b560) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc556,	// (0x0002b560) cell_cmode_rocker_pane_g1_cp

0xc2e6,	// (0x0002b2f0) cell_cmode_rocker_pane_g2_cp

0x15b6,	// (0x000205c0) bg_button_pane_cp07_cp

0xe5c8,	// (0x0002d5d2) cell_cmode_itu_pane_g1_cp

0xe5d1,	// (0x0002d5db) cell_cmode_itu_pane_t1_cp

0xe5d1,	// (0x0002d5db) cell_cmode_itu_pane_t2_cp

0xb1ff,	// (0x0002a209) settings_code_pane_cp2

0x1626,	// (0x00020630) bg_popup_window_pane_cp3_ParamLimits

0x1883,	// (0x0002088d) heading_pane_cp3_ParamLimits

0x188f,	// (0x00020899) listscroll_popup_graphic_pane_ParamLimits

0x8e68,	// (0x00027e72) fep_hwr_aid_pane_ParamLimits

0x9231,	// (0x0002823b) aid_touch_sctrl_top_ParamLimits

0x923e,	// (0x00028248) sctrl_sk_top_pane_g1_ParamLimits

0xc556,	// (0x0002b560) sctrl_sk_top_pane_g2_ParamLimits

0xfcfc,	// (0x0002ed06) sctrl_sk_top_pane_g_ParamLimits

0x924b,	// (0x00028255) sctrl_sk_top_pane_t1_ParamLimits

0x9231,	// (0x0002823b) aid_touch_sctrl_bottom_ParamLimits

0x924b,	// (0x00028255) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbf0,	// (0x0002cbfa) aid_area_touch_clock

0x9426,	// (0x00028430) aid_vkb2_area_top_pane_cell_ParamLimits

0x9426,	// (0x00028430) aid_vkb2_area_top_pane_cell

0x9571,	// (0x0002857b) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x9571,	// (0x0002857b) aid_vkb2_area_bottom_pane_cell

0xe15e,	// (0x0002d168) popup_char_count_window

0xe5df,	// (0x0002d5e9) popup_char_count_window_g1

0xe5e8,	// (0x0002d5f2) popup_char_count_window_g2

0xe5f1,	// (0x0002d5fb) popup_char_count_window_g3

0x0002,

0xfdcd,	// (0x0002edd7) popup_char_count_window_g

0xe5fa,	// (0x0002d604) popup_char_count_window_t1

0x92ec,	// (0x000282f6) popup_fep_char_preview_window_ParamLimits

0x92ec,	// (0x000282f6) popup_fep_char_preview_window

0x9444,	// (0x0002844e) vkb2_top_candi_pane_ParamLimits

0x9444,	// (0x0002844e) vkb2_top_candi_pane

0xe608,	// (0x0002d612) cell_vkb2_top_candi_pane_ParamLimits

0xe608,	// (0x0002d612) cell_vkb2_top_candi_pane

0xa36b,	// (0x00029375) bg_popup_fep_char_preview_window_ParamLimits

0xa36b,	// (0x00029375) bg_popup_fep_char_preview_window

0x9854,	// (0x0002885e) popup_fep_char_preview_window_t1_ParamLimits

0x9854,	// (0x0002885e) popup_fep_char_preview_window_t1

0xe655,	// (0x0002d65f) bg_popup_fep_char_preview_window_g1

0xe65d,	// (0x0002d667) bg_popup_fep_char_preview_window_g2

0xe665,	// (0x0002d66f) bg_popup_fep_char_preview_window_g3

0xe66d,	// (0x0002d677) bg_popup_fep_char_preview_window_g4

0xe675,	// (0x0002d67f) bg_popup_fep_char_preview_window_g5

0x988e,	// (0x00028898) bg_popup_fep_char_preview_window_g6

0xe67d,	// (0x0002d687) bg_popup_fep_char_preview_window_g7

0xe685,	// (0x0002d68f) bg_popup_fep_char_preview_window_g8

0xe68d,	// (0x0002d697) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd4,	// (0x0002edde) bg_popup_fep_char_preview_window_g

0xc556,	// (0x0002b560) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc556,	// (0x0002b560) cell_vkb2_top_candi_pane_g1

0xc86d,	// (0x0002b877) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc86d,	// (0x0002b877) cell_vkb2_top_candi_pane_g2

0xc88e,	// (0x0002b898) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc88e,	// (0x0002b898) cell_vkb2_top_candi_pane_g3

0x9896,	// (0x000288a0) cell_vkb2_top_candi_pane_g4_ParamLimits

0x9896,	// (0x000288a0) cell_vkb2_top_candi_pane_g4

0xe695,	// (0x0002d69f) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe695,	// (0x0002d69f) cell_vkb2_top_candi_pane_g5

0xda82,	// (0x0002ca8c) cell_vkb2_top_candi_pane_g6_ParamLimits

0xda82,	// (0x0002ca8c) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde7,	// (0x0002edf1) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde7,	// (0x0002edf1) cell_vkb2_top_candi_pane_g

0x98b7,	// (0x000288c1) cell_vkb2_top_candi_pane_t1

0x8c80,	// (0x00027c8a) aid_size_touch_slider_mark_ParamLimits

0x8c80,	// (0x00027c8a) aid_size_touch_slider_mark

0xe2a1,	// (0x0002d2ab) grid_graphic2_catg_pane_ParamLimits

0xe2a1,	// (0x0002d2ab) grid_graphic2_catg_pane

0xe33f,	// (0x0002d349) popup_grid_graphic2_window_t1_ParamLimits

0xe33f,	// (0x0002d349) popup_grid_graphic2_window_t1

0xe351,	// (0x0002d35b) popup_grid_graphic2_window_t2_ParamLimits

0xe351,	// (0x0002d35b) popup_grid_graphic2_window_t2

0x0001,

0xfda2,	// (0x0002edac) popup_grid_graphic2_window_t_ParamLimits

0xfda2,	// (0x0002edac) popup_grid_graphic2_window_t

0x176a,	// (0x00020774) bg_button_pane_cp05_ParamLimits

0xe4bb,	// (0x0002d4c5) cell_graphic2_control_pane_g1_ParamLimits

0xe6b6,	// (0x0002d6c0) cell_graphic2_catg_pane_ParamLimits

0xe6b6,	// (0x0002d6c0) cell_graphic2_catg_pane

0x15b6,	// (0x000205c0) bg_button_pane_cp12

0xe6c8,	// (0x0002d6d2) cell_graphic2_catg_pane_g1

0xdbbc,	// (0x0002cbc6) cell_tb_ext_pane_t1_ParamLimits

0x968e,	// (0x00028698) vkb2_top_cell_right_narrow_pane_ParamLimits

0x968e,	// (0x00028698) vkb2_top_cell_right_narrow_pane

0x96a6,	// (0x000286b0) vkb2_top_cell_right_wide_pane_ParamLimits

0x96a6,	// (0x000286b0) vkb2_top_cell_right_wide_pane

0x8e5a,	// (0x00027e64) bg_vkb2_func_pane_ParamLimits

0x8e5a,	// (0x00027e64) bg_vkb2_func_pane

0x9717,	// (0x00028721) vkb2_top_cell_left_pane_g1_ParamLimits

0x8e5a,	// (0x00027e64) bg_vkb2_fuc_pane_cp03_ParamLimits

0x8e5a,	// (0x00027e64) bg_vkb2_fuc_pane_cp03

0x9775,	// (0x0002877f) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x8986,	// (0x00027990) bg_vkb2_func_pane_g1

0x898e,	// (0x00027998) bg_vkb2_func_pane_g2

0x899e,	// (0x000279a8) bg_vkb2_func_pane_g3

0x8996,	// (0x000279a0) bg_vkb2_func_pane_g4

0x89a6,	// (0x000279b0) bg_vkb2_func_pane_g5

0x89ae,	// (0x000279b8) bg_vkb2_func_pane_g6

0x89b6,	// (0x000279c0) bg_vkb2_func_pane_g7

0x89be,	// (0x000279c8) bg_vkb2_func_pane_g8

0x897e,	// (0x00027988) bg_vkb2_func_pane_g9

0x0008,

0xfdf4,	// (0x0002edfe) bg_vkb2_func_pane_g

0x8e5a,	// (0x00027e64) bg_vkb2_fuc_pane_cp01_ParamLimits

0x8e5a,	// (0x00027e64) bg_vkb2_fuc_pane_cp01

0x9717,	// (0x00028721) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x9717,	// (0x00028721) vkb2_top_cell_right_wide_pane_g1

0x8e5a,	// (0x00027e64) bg_vkb2_fuc_pane_cp02_ParamLimits

0x8e5a,	// (0x00027e64) bg_vkb2_fuc_pane_cp02

0x9775,	// (0x0002877f) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9775,	// (0x0002877f) vkb2_top_cell_right_narrow_pane_g1

0xd7ee,	// (0x0002c7f8) aid_touch_area_decrease_ParamLimits

0xd7ee,	// (0x0002c7f8) aid_touch_area_decrease

0xd80e,	// (0x0002c818) aid_touch_area_increase_ParamLimits

0xd80e,	// (0x0002c818) aid_touch_area_increase

0xd81a,	// (0x0002c824) aid_touch_area_mute_ParamLimits

0xd81a,	// (0x0002c824) aid_touch_area_mute

0xd83e,	// (0x0002c848) aid_touch_area_slider_ParamLimits

0xd83e,	// (0x0002c848) aid_touch_area_slider

0xd92a,	// (0x0002c934) popup_slider_window_g4_ParamLimits

0xd92a,	// (0x0002c934) popup_slider_window_g4

0xd936,	// (0x0002c940) popup_slider_window_g5_ParamLimits

0xd936,	// (0x0002c940) popup_slider_window_g5

0xd958,	// (0x0002c962) popup_slider_window_g6_ParamLimits

0xd958,	// (0x0002c962) popup_slider_window_g6

0xd998,	// (0x0002c9a2) popup_slider_window_t2_ParamLimits

0xd998,	// (0x0002c9a2) popup_slider_window_t2

0x0001,

0xfcf0,	// (0x0002ecfa) popup_slider_window_t_ParamLimits

0xfcf0,	// (0x0002ecfa) popup_slider_window_t

0xd9b0,	// (0x0002c9ba) slider_pane_ParamLimits

0xd9b0,	// (0x0002c9ba) slider_pane

0xe6d1,	// (0x0002d6db) slider_pane_g1_ParamLimits

0xe6d1,	// (0x0002d6db) slider_pane_g1

0xe6e5,	// (0x0002d6ef) slider_pane_g2_ParamLimits

0xe6e5,	// (0x0002d6ef) slider_pane_g2

0xe6fb,	// (0x0002d705) slider_pane_g3_ParamLimits

0xe6fb,	// (0x0002d705) slider_pane_g3

0x0003,

0xfe07,	// (0x0002ee11) slider_pane_g_ParamLimits

0xfe07,	// (0x0002ee11) slider_pane_g

0x837a,	// (0x00027384) popup_tb_float_extension_window_ParamLimits

0x837a,	// (0x00027384) popup_tb_float_extension_window

0xe727,	// (0x0002d731) aid_size_cell_tb_float_ext

0x15b6,	// (0x000205c0) bg_popup_sub_window_cp28

0xe733,	// (0x0002d73d) grid_tb_float_ext_pane

0xe73d,	// (0x0002d747) cell_tb_float_ext_pane_ParamLimits

0xe73d,	// (0x0002d747) cell_tb_float_ext_pane

0xe757,	// (0x0002d761) cell_tb_float_ext_pane_g1

0xe760,	// (0x0002d76a) grid_highlight_pane_cp12

0x8f9b,	// (0x00027fa5) cell_last_hwr_side_pane_ParamLimits

0x8f9b,	// (0x00027fa5) cell_last_hwr_side_pane

0xc2e6,	// (0x0002b2f0) cell_last_hwr_side_pane_g1

0xe769,	// (0x0002d773) cell_last_hwr_side_pane_g2

0x0001,

0xfe10,	// (0x0002ee1a) cell_last_hwr_side_pane_g

0x963d,	// (0x00028647) vkb2_area_bottom_space_btn_pane_ParamLimits

0x963d,	// (0x00028647) vkb2_area_bottom_space_btn_pane

0xc556,	// (0x0002b560) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe213,	// (0x0002d21d) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x98b7,	// (0x000288c1) cell_vkb2_top_candi_pane_t1_ParamLimits

0x98d6,	// (0x000288e0) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x98d6,	// (0x000288e0) vkb2_area_bottom_space_btn_pane_g1

0x9910,	// (0x0002891a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9910,	// (0x0002891a) vkb2_area_bottom_space_btn_pane_g2

0x9946,	// (0x00028950) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9946,	// (0x00028950) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe15,	// (0x0002ee1f) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe15,	// (0x0002ee1f) vkb2_area_bottom_space_btn_pane_g

0x8f0f,	// (0x00027f19) cel_fep_hwr_func_pane_ParamLimits

0x8f0f,	// (0x00027f19) cel_fep_hwr_func_pane

0x8f4b,	// (0x00027f55) cell_hwr_side_button_pane_ParamLimits

0x8f4b,	// (0x00027f55) cell_hwr_side_button_pane

0xdbf0,	// (0x0002cbfa) aid_area_touch_clock_ParamLimits

0x176a,	// (0x00020774) bg_uniindi_top_pane_ParamLimits

0xdc02,	// (0x0002cc0c) uniindi_top_pane_g1_ParamLimits

0xdc18,	// (0x0002cc22) uniindi_top_pane_g2_ParamLimits

0xdc24,	// (0x0002cc2e) uniindi_top_pane_g3_ParamLimits

0xdc35,	// (0x0002cc3f) uniindi_top_pane_g4_ParamLimits

0xfd28,	// (0x0002ed32) uniindi_top_pane_g_ParamLimits

0xdc42,	// (0x0002cc4c) uniindi_top_pane_t1_ParamLimits

0x176a,	// (0x00020774) bg_vkb2_func_pane_cp01_ParamLimits

0x176a,	// (0x00020774) bg_vkb2_func_pane_cp01

0xe772,	// (0x0002d77c) cel_fep_hwr_func_pane_g1_ParamLimits

0xe772,	// (0x0002d77c) cel_fep_hwr_func_pane_g1

0x176a,	// (0x00020774) bg_vkb2_func_pane_cp02_ParamLimits

0x176a,	// (0x00020774) bg_vkb2_func_pane_cp02

0xe772,	// (0x0002d77c) cell_hwr_side_button_pane_g1_ParamLimits

0xe772,	// (0x0002d77c) cell_hwr_side_button_pane_g1

0x87d2,	// (0x000277dc) status_pane_g4_ParamLimits

0x87d2,	// (0x000277dc) status_pane_g4

0x87ec,	// (0x000277f6) status_pane_t1

0xc01b,	// (0x0002b025) form2_midp_gauge_slider_cont_pane

0xc023,	// (0x0002b02d) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc035,	// (0x0002b03f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc047,	// (0x0002b051) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafb,	// (0x0002eb05) form2_midp_gauge_slider_pane_t_ParamLimits

0xc059,	// (0x0002b063) form2_midp_slider_pane_ParamLimits

0x92ac,	// (0x000282b6) aid_size_cell_func_vkb2_ParamLimits

0x92ac,	// (0x000282b6) aid_size_cell_func_vkb2

0xe713,	// (0x0002d71d) slider_pane_g4_ParamLimits

0xe713,	// (0x0002d71d) slider_pane_g4

0x9990,	// (0x0002899a) form2_midp_gauge_slider_pane_t2_cp01

0x999e,	// (0x000289a8) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x999e,	// (0x000289a8) form2_midp_gauge_slider_pane_t3_cp01

0x99bb,	// (0x000289c5) form2_midp_slider_pane_cp01

0x15b6,	// (0x000205c0) navi_smil_pane

0xe7ab,	// (0x0002d7b5) navi_smil_pane_g1

0xe7b3,	// (0x0002d7bd) navi_smil_pane_t1

0xe780,	// (0x0002d78a) form2_midp_slider_pane_g1

0xe789,	// (0x0002d793) form2_midp_slider_pane_g2

0xe791,	// (0x0002d79b) form2_midp_slider_pane_g3

0xe780,	// (0x0002d78a) form2_midp_slider_pane_g4

0xe799,	// (0x0002d7a3) form2_midp_slider_pane_g5

0x0004,

0xfe1e,	// (0x0002ee28) form2_midp_slider_pane_g

0x9980,	// (0x0002898a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9980,	// (0x0002898a) vkb2_area_bottom_space_btn_pane_g4

0x8601,	// (0x0002760b) lc0_navi_pane_ParamLimits

0x8601,	// (0x0002760b) lc0_navi_pane

0x8677,	// (0x00027681) lc0_stat_indi_pane_ParamLimits

0x8677,	// (0x00027681) lc0_stat_indi_pane

0x868e,	// (0x00027698) ls0_title_pane_ParamLimits

0x868e,	// (0x00027698) ls0_title_pane

0x1a5c,	// (0x00020a66) bg_popup_sub_pane_cp14_ParamLimits

0xdbd7,	// (0x0002cbe1) list_uniindi_pane_ParamLimits

0xdbe3,	// (0x0002cbed) uniindi_top_pane_ParamLimits

0xdc7e,	// (0x0002cc88) list_single_uniindi_pane_g1_ParamLimits

0xdc91,	// (0x0002cc9b) list_single_uniindi_pane_t1_ParamLimits

0x99c4,	// (0x000289ce) lc0_stat_clock_pane_ParamLimits

0x99c4,	// (0x000289ce) lc0_stat_clock_pane

0xe7c1,	// (0x0002d7cb) lc0_stat_indi_pane_g1_ParamLimits

0xe7c1,	// (0x0002d7cb) lc0_stat_indi_pane_g1

0xe7ce,	// (0x0002d7d8) lc0_stat_indi_pane_g2_ParamLimits

0xe7ce,	// (0x0002d7d8) lc0_stat_indi_pane_g2

0x0001,

0xfe29,	// (0x0002ee33) lc0_stat_indi_pane_g_ParamLimits

0xfe29,	// (0x0002ee33) lc0_stat_indi_pane_g

0x99d1,	// (0x000289db) lc0_uni_indicator_pane_ParamLimits

0x99d1,	// (0x000289db) lc0_uni_indicator_pane

0xe7db,	// (0x0002d7e5) ls0_title_pane_g1_ParamLimits

0xe7db,	// (0x0002d7e5) ls0_title_pane_g1

0xe7ef,	// (0x0002d7f9) ls0_title_pane_t1_ParamLimits

0xe7ef,	// (0x0002d7f9) ls0_title_pane_t1

0x99de,	// (0x000289e8) lc0_uni_indicator_pane_g1_ParamLimits

0x99de,	// (0x000289e8) lc0_uni_indicator_pane_g1

0xe825,	// (0x0002d82f) lc0_stat_clock_pane_t1

0x15b6,	// (0x000205c0) main_ai5_pane

0xe833,	// (0x0002d83d) ai5_sk_pane_ParamLimits

0xe833,	// (0x0002d83d) ai5_sk_pane

0xe840,	// (0x0002d84a) cell_ai5_widget_pane_ParamLimits

0xe840,	// (0x0002d84a) cell_ai5_widget_pane

0xe8fc,	// (0x0002d906) aid_size_cell_widget_grid

0xe90a,	// (0x0002d914) bg_ai5_widget_pane_ParamLimits

0xe90a,	// (0x0002d914) bg_ai5_widget_pane

0xe97e,	// (0x0002d988) cell_ai5_widget_pane_g2

0xe98e,	// (0x0002d998) cell_ai5_widget_pane_g3

0xe9a5,	// (0x0002d9af) cell_ai5_widget_pane_g4

0xe9b1,	// (0x0002d9bb) cell_ai5_widget_pane_g5

0xe9bd,	// (0x0002d9c7) cell_ai5_widget_pane_g6

0xe9c9,	// (0x0002d9d3) cell_ai5_widget_pane_g7

0xea11,	// (0x0002da1b) cell_ai5_widget_pane_t1_ParamLimits

0xea11,	// (0x0002da1b) cell_ai5_widget_pane_t1

0xea2e,	// (0x0002da38) cell_ai5_widget_pane_t2_ParamLimits

0xea2e,	// (0x0002da38) cell_ai5_widget_pane_t2

0xea46,	// (0x0002da50) cell_ai5_widget_pane_t3_ParamLimits

0xea46,	// (0x0002da50) cell_ai5_widget_pane_t3

0xea5e,	// (0x0002da68) cell_ai5_widget_pane_t4_ParamLimits

0xea5e,	// (0x0002da68) cell_ai5_widget_pane_t4

0xea7b,	// (0x0002da85) cell_ai5_widget_pane_t5_ParamLimits

0xea7b,	// (0x0002da85) cell_ai5_widget_pane_t5

0xea9a,	// (0x0002daa4) cell_ai5_widget_pane_t6_ParamLimits

0xea9a,	// (0x0002daa4) cell_ai5_widget_pane_t6

0xeaac,	// (0x0002dab6) cell_ai5_widget_pane_t7_ParamLimits

0xeaac,	// (0x0002dab6) cell_ai5_widget_pane_t7

0xeac5,	// (0x0002dacf) cell_ai5_widget_pane_t8_ParamLimits

0xeac5,	// (0x0002dacf) cell_ai5_widget_pane_t8

0x0009,

0xfe43,	// (0x0002ee4d) cell_ai5_widget_pane_t_ParamLimits

0xfe43,	// (0x0002ee4d) cell_ai5_widget_pane_t

0xeb19,	// (0x0002db23) grid_ai5_widget_pane

0x1a5c,	// (0x00020a66) highlight_cell_ai5_widget_pane_ParamLimits

0x1a5c,	// (0x00020a66) highlight_cell_ai5_widget_pane

0xeb27,	// (0x0002db31) ai5_sk_left_pane

0xeb31,	// (0x0002db3b) ai5_sk_middle_pane

0xeb3b,	// (0x0002db45) ai5_sk_right_pane

0xeb45,	// (0x0002db4f) bg_ai5_widget_pane_g1_ParamLimits

0xeb45,	// (0x0002db4f) bg_ai5_widget_pane_g1

0xeb51,	// (0x0002db5b) bg_ai5_widget_pane_g2_ParamLimits

0xeb51,	// (0x0002db5b) bg_ai5_widget_pane_g2

0xeb5d,	// (0x0002db67) bg_ai5_widget_pane_g3_ParamLimits

0xeb5d,	// (0x0002db67) bg_ai5_widget_pane_g3

0xeb69,	// (0x0002db73) bg_ai5_widget_pane_g4_ParamLimits

0xeb69,	// (0x0002db73) bg_ai5_widget_pane_g4

0xeb75,	// (0x0002db7f) bg_ai5_widget_pane_g5_ParamLimits

0xeb75,	// (0x0002db7f) bg_ai5_widget_pane_g5

0xeb81,	// (0x0002db8b) bg_ai5_widget_pane_g6_ParamLimits

0xeb81,	// (0x0002db8b) bg_ai5_widget_pane_g6

0xeb8d,	// (0x0002db97) bg_ai5_widget_pane_g7_ParamLimits

0xeb8d,	// (0x0002db97) bg_ai5_widget_pane_g7

0xeb99,	// (0x0002dba3) bg_ai5_widget_pane_g8_ParamLimits

0xeb99,	// (0x0002dba3) bg_ai5_widget_pane_g8

0xeba5,	// (0x0002dbaf) bg_ai5_widget_pane_g9_ParamLimits

0xeba5,	// (0x0002dbaf) bg_ai5_widget_pane_g9

0x0008,

0xfe58,	// (0x0002ee62) bg_ai5_widget_pane_g_ParamLimits

0xfe58,	// (0x0002ee62) bg_ai5_widget_pane_g

0xebd7,	// (0x0002dbe1) cell_shortcut_ai5_widget_pane_ParamLimits

0xebd7,	// (0x0002dbe1) cell_shortcut_ai5_widget_pane

0x7957,	// (0x00026961) bg_cell_shortcut_ai5_widget_pane

0xebe8,	// (0x0002dbf2) cell_grid_ai5_widget_pane_g1

0x7957,	// (0x00026961) highlight_cell_shortcut_ai5_widget_pane

0x898e,	// (0x00027998) ai5_sk_left_pane_g1

0xebf1,	// (0x0002dbfb) ai5_sk_left_pane_g2

0xebf9,	// (0x0002dc03) ai5_sk_left_pane_g3

0xec01,	// (0x0002dc0b) ai5_sk_left_pane_g4

0x0003,

0xfe6b,	// (0x0002ee75) ai5_sk_left_pane_g

0xec09,	// (0x0002dc13) ai5_sk_left_pane_t1

0x8986,	// (0x00027990) ai5_sk_right_pane_g1

0xec17,	// (0x0002dc21) ai5_sk_right_pane_g2

0xec1f,	// (0x0002dc29) ai5_sk_right_pane_g3

0xec27,	// (0x0002dc31) ai5_sk_right_pane_g4

0x0003,

0xfe74,	// (0x0002ee7e) ai5_sk_right_pane_g

0xec2f,	// (0x0002dc39) ai5_sk_right_pane_t1

0x8986,	// (0x00027990) ai5_sk_middle_pane_g1

0x898e,	// (0x00027998) ai5_sk_middle_pane_g2

0x89a6,	// (0x000279b0) ai5_sk_middle_pane_g3

0xec1f,	// (0x0002dc29) ai5_sk_middle_pane_g4

0xebf9,	// (0x0002dc03) ai5_sk_middle_pane_g5

0xec3d,	// (0x0002dc47) ai5_sk_middle_pane_g6

0xec45,	// (0x0002dc4f) ai5_sk_middle_pane_g7

0x0006,

0xfe7d,	// (0x0002ee87) ai5_sk_middle_pane_g

0x8487,	// (0x00027491) aid_touch_area_size_lc0_ParamLimits

0x8487,	// (0x00027491) aid_touch_area_size_lc0

0x909a,	// (0x000280a4) cell_hwr_candidate_pane_t1_ParamLimits

0x84a3,	// (0x000274ad) aid_touch_navi_pane

0x877c,	// (0x00027786) status_dt_navi_pane_ParamLimits

0x877c,	// (0x00027786) status_dt_navi_pane

0x8789,	// (0x00027793) status_dt_sta_pane_ParamLimits

0x8789,	// (0x00027793) status_dt_sta_pane

0xec4d,	// (0x0002dc57) dt_sta_controll_pane

0xec5a,	// (0x0002dc64) dt_sta_indi_pane

0xec6b,	// (0x0002dc75) dt_sta_title_pane

0x176a,	// (0x00020774) bg_dt_sta_indi_pane_ParamLimits

0x176a,	// (0x00020774) bg_dt_sta_indi_pane

0xec7e,	// (0x0002dc88) dt_sta_battery_pane

0xec86,	// (0x0002dc90) dt_sta_indi_pane_g1

0xec8f,	// (0x0002dc99) dt_sta_indi_pane_g2

0xec98,	// (0x0002dca2) dt_sta_indi_pane_g3

0x0002,

0xfe8c,	// (0x0002ee96) dt_sta_indi_pane_g

0xeca1,	// (0x0002dcab) dt_sta_signal_pane

0x1a5c,	// (0x00020a66) bg_dt_sta_title_pane_ParamLimits

0x1a5c,	// (0x00020a66) bg_dt_sta_title_pane

0xab27,	// (0x00029b31) dt_sta_title_pane_g1

0xecaa,	// (0x0002dcb4) dt_sta_title_pane_t1_ParamLimits

0xecaa,	// (0x0002dcb4) dt_sta_title_pane_t1

0x15b6,	// (0x000205c0) bg_dt_sta_control_pane

0xecbf,	// (0x0002dcc9) dt_sta_controll_pane_g1

0xecc8,	// (0x0002dcd2) bg_dt_sta_title_pane_g1

0xecd1,	// (0x0002dcdb) bg_dt_sta_title_pane_g2

0xecda,	// (0x0002dce4) bg_dt_sta_title_pane_g3

0x0002,

0xfe93,	// (0x0002ee9d) bg_dt_sta_title_pane_g

0xc2e6,	// (0x0002b2f0) bg_dt_sta_indi_pane_g1

0xece3,	// (0x0002dced) dt_sta_signal_pane_g1

0xeceb,	// (0x0002dcf5) dt_sta_signal_pane_g2

0x0001,

0xfe9a,	// (0x0002eea4) dt_sta_signal_pane_g

0xecf3,	// (0x0002dcfd) dt_sta_battery_pane_g1

0xecfc,	// (0x0002dd06) dt_sta_battery_pane_t1

0xc2e6,	// (0x0002b2f0) bg_dt_sta_control_pane_g1

0x39eb,	// (0x000229f5) fep_china_uni_eep_pane

0x39f3,	// (0x000229fd) fep_china_uni_entry_pane_ParamLimits

0x3a03,	// (0x00022a0d) popup_fep_china_uni_window_g1_ParamLimits

0x3a13,	// (0x00022a1d) popup_fep_china_uni_window_g2_ParamLimits

0x3a13,	// (0x00022a1d) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0002e727) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0002e727) popup_fep_china_uni_window_g

0xed0b,	// (0x0002dd15) fep_china_uni_eep_pane_g1

0xed13,	// (0x0002dd1d) fep_china_uni_eep_pane_t1

0xe7a2,	// (0x0002d7ac) aid_touch_area_size_smil_player

0x85f9,	// (0x00027603) lc0_clock_pane

0x87e0,	// (0x000277ea) status_pane_g5_ParamLimits

0x87e0,	// (0x000277ea) status_pane_g5

0x803b,	// (0x00027045) popup_keymap_window

0x879e,	// (0x000277a8) status_icon_pane

0xe98e,	// (0x0002d998) cell_ai5_widget_pane_g3_ParamLimits

0xe9a5,	// (0x0002d9af) cell_ai5_widget_pane_g4_ParamLimits

0xe9b1,	// (0x0002d9bb) cell_ai5_widget_pane_g5_ParamLimits

0xe9d5,	// (0x0002d9df) cell_ai5_widget_pane_g8_ParamLimits

0xe9d5,	// (0x0002d9df) cell_ai5_widget_pane_g8

0xe9e9,	// (0x0002d9f3) cell_ai5_widget_pane_g9_ParamLimits

0xe9e9,	// (0x0002d9f3) cell_ai5_widget_pane_g9

0xe9fd,	// (0x0002da07) cell_ai5_widget_pane_g10_ParamLimits

0xe9fd,	// (0x0002da07) cell_ai5_widget_pane_g10

0xed22,	// (0x0002dd2c) status_icon_pane_g1

0x15b6,	// (0x000205c0) bg_popup_sub_pane_cp13

0xed2a,	// (0x0002dd34) popup_keymap_window_t1

0x7d36,	// (0x00026d40) control_pane_g6_ParamLimits

0x7d36,	// (0x00026d40) control_pane_g6

0x7d43,	// (0x00026d4d) control_pane_g7_ParamLimits

0x7d43,	// (0x00026d4d) control_pane_g7

0x7d50,	// (0x00026d5a) control_pane_g8_ParamLimits

0x7d50,	// (0x00026d5a) control_pane_g8

0xec4d,	// (0x0002dc57) dt_sta_controll_pane_ParamLimits

0xec5a,	// (0x0002dc64) dt_sta_indi_pane_ParamLimits

0xec6b,	// (0x0002dc75) dt_sta_title_pane_ParamLimits

0x193d,	// (0x00020947) aid_size_touch_scroll_bar_cale

0x67d6,	// (0x000257e0) popup_discreet_window_ParamLimits

0x67d6,	// (0x000257e0) popup_discreet_window

0x6850,	// (0x0002585a) popup_sk_window

0xa36b,	// (0x00029375) bg_popup_sub_pane_cp28_ParamLimits

0xa36b,	// (0x00029375) bg_popup_sub_pane_cp28

0xed38,	// (0x0002dd42) popup_discreet_window_g1_ParamLimits

0xed38,	// (0x0002dd42) popup_discreet_window_g1

0xed58,	// (0x0002dd62) popup_discreet_window_t1_ParamLimits

0xed58,	// (0x0002dd62) popup_discreet_window_t1

0xed76,	// (0x0002dd80) popup_discreet_window_t2_ParamLimits

0xed76,	// (0x0002dd80) popup_discreet_window_t2

0x0002,

0xfe9f,	// (0x0002eea9) popup_discreet_window_t_ParamLimits

0xfe9f,	// (0x0002eea9) popup_discreet_window_t

0x99f2,	// (0x000289fc) popup_sk_window_g1

0x99fc,	// (0x00028a06) popup_sk_window_g2

0x0001,

0xfea6,	// (0x0002eeb0) popup_sk_window_g

0x9a06,	// (0x00028a10) popup_sk_window_t1

0x9a14,	// (0x00028a1e) popup_sk_window_t1_copy1

0xe97e,	// (0x0002d988) cell_ai5_widget_pane_g2_ParamLimits

0xead7,	// (0x0002dae1) cell_ai5_widget_pane_t9_ParamLimits

0xead7,	// (0x0002dae1) cell_ai5_widget_pane_t9

0x15b6,	// (0x000205c0) main_fep_fshwr2_pane

0x9a22,	// (0x00028a2c) aid_fshwr2_btn_pane

0x9a2e,	// (0x00028a38) aid_fshwr2_syb_pane

0x9a3a,	// (0x00028a44) aid_fshwr2_txt_pane

0x9a46,	// (0x00028a50) fshwr2_func_candi_pane

0x9a5b,	// (0x00028a65) fshwr2_hwr_syb_pane

0x9a6b,	// (0x00028a75) fshwr2_icf_pane

0x15b6,	// (0x000205c0) fshwr2_icf_bg_pane

0x9a94,	// (0x00028a9e) fshwr2_icf_pane_t1_ParamLimits

0x9a94,	// (0x00028a9e) fshwr2_icf_pane_t1

0x38d4,	// (0x000228de) fshwr2_func_candi_pane_g1

0xedc8,	// (0x0002ddd2) fshwr2_func_candi_row_pane_ParamLimits

0xedc8,	// (0x0002ddd2) fshwr2_func_candi_row_pane

0x9aac,	// (0x00028ab6) cell_fshwr2_syb_pane_ParamLimits

0x9aac,	// (0x00028ab6) cell_fshwr2_syb_pane

0xc556,	// (0x0002b560) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc556,	// (0x0002b560) fshwr2_hwr_syb_pane_g1

0x15b6,	// (0x000205c0) bg_popup_call_pane_cp01

0x9ac2,	// (0x00028acc) fshwr2_func_candi_cell_pane_ParamLimits

0x9ac2,	// (0x00028acc) fshwr2_func_candi_cell_pane

0xa9c7,	// (0x000299d1) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa9c7,	// (0x000299d1) fshwr2_func_candi_cell_bg_pane

0x9b0b,	// (0x00028b15) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9b0b,	// (0x00028b15) fshwr2_func_candi_cell_pane_g1

0x9b33,	// (0x00028b3d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9b33,	// (0x00028b3d) fshwr2_func_candi_cell_pane_t1

0x15b6,	// (0x000205c0) bg_button_pane_cp08

0xedd8,	// (0x0002dde2) cell_fshwr2_syb_bg_pane

0x9b46,	// (0x00028b50) cell_fshwr2_syb_bg_pane_g1

0x9b4e,	// (0x00028b58) cell_fshwr2_syb_bg_pane_t1

0x1a5c,	// (0x00020a66) main_tmo_pane

0xae60,	// (0x00029e6a) uni_indicator_pane_g1_ParamLimits

0xae76,	// (0x00029e80) uni_indicator_pane_g2_ParamLimits

0xae8c,	// (0x00029e96) uni_indicator_pane_g3_ParamLimits

0xaea1,	// (0x00029eab) uni_indicator_pane_g4_ParamLimits

0xaea1,	// (0x00029eab) uni_indicator_pane_g4

0xaeb5,	// (0x00029ebf) uni_indicator_pane_g5_ParamLimits

0xaeb5,	// (0x00029ebf) uni_indicator_pane_g5

0xaeb5,	// (0x00029ebf) uni_indicator_pane_g6_ParamLimits

0xaeb5,	// (0x00029ebf) uni_indicator_pane_g6

0xf91c,	// (0x0002e926) uni_indicator_pane_g_ParamLimits

0xd7d0,	// (0x0002c7da) popup_tmo_note_window_ParamLimits

0xd7d0,	// (0x0002c7da) popup_tmo_note_window

0x1a5c,	// (0x00020a66) fshwr2_bg_pane

0x9b24,	// (0x00028b2e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9b24,	// (0x00028b2e) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeab,	// (0x0002eeb5) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeab,	// (0x0002eeb5) fshwr2_func_candi_cell_pane_g

0xc2e6,	// (0x0002b2f0) bg_popup_window_pane_cp01

0x9b5d,	// (0x00028b67) bg_popup_window_pane_g1_cp01

0xede0,	// (0x0002ddea) bg_popup_window_pane_cp22_ParamLimits

0xede0,	// (0x0002ddea) bg_popup_window_pane_cp22

0xedee,	// (0x0002ddf8) listscroll_tmo_link_pane_ParamLimits

0xedee,	// (0x0002ddf8) listscroll_tmo_link_pane

0xee2e,	// (0x0002de38) popup_tmo_note_window_g1_ParamLimits

0xee2e,	// (0x0002de38) popup_tmo_note_window_g1

0xee3b,	// (0x0002de45) tmo_note_info_pane_ParamLimits

0xee3b,	// (0x0002de45) tmo_note_info_pane

0xee55,	// (0x0002de5f) list_tmo_note_info_pane_g1_ParamLimits

0xee55,	// (0x0002de5f) list_tmo_note_info_pane_g1

0xee6c,	// (0x0002de76) list_tmo_note_info_pane_g2_ParamLimits

0xee6c,	// (0x0002de76) list_tmo_note_info_pane_g2

0x0001,

0xfeb0,	// (0x0002eeba) list_tmo_note_info_pane_g_ParamLimits

0xfeb0,	// (0x0002eeba) list_tmo_note_info_pane_g

0xee88,	// (0x0002de92) list_tmo_note_info_text_pane_ParamLimits

0xee88,	// (0x0002de92) list_tmo_note_info_text_pane

0xef09,	// (0x0002df13) list_tmo_link_pane

0xef16,	// (0x0002df20) scroll_pane_cp20

0xef23,	// (0x0002df2d) list_single_tmo_link_pane_ParamLimits

0xef23,	// (0x0002df2d) list_single_tmo_link_pane

0xef33,	// (0x0002df3d) list_single_tmo_link_pane_t1

0xef41,	// (0x0002df4b) list_tmo_note_info_text_pane_t1_ParamLimits

0xef41,	// (0x0002df4b) list_tmo_note_info_text_pane_t1

0x6f1e,	// (0x00025f28) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6f1e,	// (0x00025f28) aid_size_touch_scroll_bar_cp01

0x59fb,	// (0x00024a05) aid_size_touch_slider_marker

0x6838,	// (0x00025842) popup_settings_window_ParamLimits

0x6838,	// (0x00025842) popup_settings_window

0x5bc0,	// (0x00024bca) popup_candi_list_indi_window

0x84a3,	// (0x000274ad) aid_touch_navi_pane_ParamLimits

0x9205,	// (0x0002820f) rs_clock_indi_pane

0x920e,	// (0x00028218) sctrl_sk_bottom_pane_ParamLimits

0x921f,	// (0x00028229) sctrl_sk_top_pane_ParamLimits

0x9306,	// (0x00028310) popup_fep_tooltip_window

0xe8fc,	// (0x0002d906) aid_size_cell_widget_grid_ParamLimits

0xe969,	// (0x0002d973) cell_ai5_widget_pane_g1_ParamLimits

0xe969,	// (0x0002d973) cell_ai5_widget_pane_g1

0xe9bd,	// (0x0002d9c7) cell_ai5_widget_pane_g6_ParamLimits

0xe9c9,	// (0x0002d9d3) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2e,	// (0x0002ee38) cell_ai5_widget_pane_g_ParamLimits

0xfe2e,	// (0x0002ee38) cell_ai5_widget_pane_g

0xeafb,	// (0x0002db05) cell_ai5_widget_pane_t10_ParamLimits

0xeafb,	// (0x0002db05) cell_ai5_widget_pane_t10

0xeb19,	// (0x0002db23) grid_ai5_widget_pane_ParamLimits

0xebb1,	// (0x0002dbbb) cell_contacts_ai5_widget_pane_ParamLimits

0xebb1,	// (0x0002dbbb) cell_contacts_ai5_widget_pane

0xed8b,	// (0x0002dd95) popup_discreet_window_t3_ParamLimits

0xed8b,	// (0x0002dd95) popup_discreet_window_t3

0x9a80,	// (0x00028a8a) popup_fshwr2_char_preview_window_ParamLimits

0x9a80,	// (0x00028a8a) popup_fshwr2_char_preview_window

0xeea6,	// (0x0002deb0) tmo_note_info_pane_t1

0xeebb,	// (0x0002dec5) tmo_note_info_pane_t2

0xeed0,	// (0x0002deda) tmo_note_info_pane_t3

0xeee5,	// (0x0002deef) tmo_note_info_pane_t4

0xeef7,	// (0x0002df01) tmo_note_info_pane_t5

0x0004,

0xfeb5,	// (0x0002eebf) tmo_note_info_pane_t

0xef09,	// (0x0002df13) list_tmo_link_pane_ParamLimits

0xef16,	// (0x0002df20) scroll_pane_cp20_ParamLimits

0x15b6,	// (0x000205c0) bg_popup_fep_char_preview_window_cp01

0xef5a,	// (0x0002df64) popup_fshwr2_char_preview_window_t1

0xef68,	// (0x0002df72) popup_candi_list_indi_window_g1

0xef71,	// (0x0002df7b) bg_cell_contacts_ai5_widget_pane

0xef7d,	// (0x0002df87) cell_contacts_ai5_widget_pane_g1

0xc9d9,	// (0x0002b9e3) cell_contacts_ai5_widget_pane_g2

0xef92,	// (0x0002df9c) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec0,	// (0x0002eeca) cell_contacts_ai5_widget_pane_g

0xef9e,	// (0x0002dfa8) cell_contacts_ai5_widget_pane_t1

0x1a5c,	// (0x00020a66) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf015,	// (0x0002e01f) settings_container_pane

0x7957,	// (0x00026961) listscroll_set_pane_copy1

0xb9d2,	// (0x0002a9dc) scroll_pane_cp121_copy1

0xf021,	// (0x0002e02b) set_content_pane_copy1

0xf029,	// (0x0002e033) aid_height_set_list_copy1_ParamLimits

0xf029,	// (0x0002e033) aid_height_set_list_copy1

0xb0ad,	// (0x0002a0b7) aid_size_parent_copy1_ParamLimits

0xb0ad,	// (0x0002a0b7) aid_size_parent_copy1

0xf035,	// (0x0002e03f) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf035,	// (0x0002e03f) button_value_adjust_pane_cp6_copy1

0x7ea6,	// (0x00026eb0) list_highlight_pane_cp2_copy1_ParamLimits

0x7ea6,	// (0x00026eb0) list_highlight_pane_cp2_copy1

0xf049,	// (0x0002e053) list_set_pane_copy1_ParamLimits

0xf049,	// (0x0002e053) list_set_pane_copy1

0xefb0,	// (0x0002dfba) main_pane_set_t1_copy1_ParamLimits

0xefb0,	// (0x0002dfba) main_pane_set_t1_copy1

0xefea,	// (0x0002dff4) main_pane_set_t2_copy1_ParamLimits

0xefea,	// (0x0002dff4) main_pane_set_t2_copy1

0xf0f6,	// (0x0002e100) main_pane_set_t3_copy1

0xf104,	// (0x0002e10e) main_pane_set_t4_copy1

0xf009,	// (0x0002e013) set_content_pane_g1_copy1_ParamLimits

0xf009,	// (0x0002e013) set_content_pane_g1_copy1

0xf112,	// (0x0002e11c) setting_code_pane_copy1

0xf11a,	// (0x0002e124) setting_slider_graphic_pane_copy1

0xf11a,	// (0x0002e124) setting_slider_pane_copy1

0xf11a,	// (0x0002e124) setting_text_pane_copy1

0xf11a,	// (0x0002e124) setting_volume_pane_copy1

0xf112,	// (0x0002e11c) settings_code_pane_cp2_copy1

0xf122,	// (0x0002e12c) settings_code_pane_cp_copy1_ParamLimits

0xf122,	// (0x0002e12c) settings_code_pane_cp_copy1

0x9b66,	// (0x00028b70) volume_set_pane_copy1

0xf136,	// (0x0002e140) volume_set_pane_g10_copy1

0xf13e,	// (0x0002e148) volume_set_pane_g1_copy1

0xf146,	// (0x0002e150) volume_set_pane_g2_copy1

0xf14e,	// (0x0002e158) volume_set_pane_g3_copy1

0xf156,	// (0x0002e160) volume_set_pane_g4_copy1

0xf15e,	// (0x0002e168) volume_set_pane_g5_copy1

0xf166,	// (0x0002e170) volume_set_pane_g6_copy1

0xf16e,	// (0x0002e178) volume_set_pane_g7_copy1

0xf176,	// (0x0002e180) volume_set_pane_g8_copy1

0xf17e,	// (0x0002e188) volume_set_pane_g9_copy1

0x1626,	// (0x00020630) bg_set_opt_pane_cp_copy1_ParamLimits

0x1626,	// (0x00020630) bg_set_opt_pane_cp_copy1

0x9b6e,	// (0x00028b78) setting_slider_pane_t1_copy1_ParamLimits

0x9b6e,	// (0x00028b78) setting_slider_pane_t1_copy1

0x9b8c,	// (0x00028b96) setting_slider_pane_t2_copy1_ParamLimits

0x9b8c,	// (0x00028b96) setting_slider_pane_t2_copy1

0x9ba6,	// (0x00028bb0) setting_slider_pane_t3_copy1_ParamLimits

0x9ba6,	// (0x00028bb0) setting_slider_pane_t3_copy1

0x9bbe,	// (0x00028bc8) slider_set_pane_copy1_ParamLimits

0x9bbe,	// (0x00028bc8) slider_set_pane_copy1

0x1afa,	// (0x00020b04) set_opt_bg_pane_g1_copy2

0x1b02,	// (0x00020b0c) set_opt_bg_pane_g2_copy2

0xf186,	// (0x0002e190) set_opt_bg_pane_g3_copy2

0x1b12,	// (0x00020b1c) set_opt_bg_pane_g4_copy2

0x1b1a,	// (0x00020b24) set_opt_bg_pane_g5_copy2

0x1b22,	// (0x00020b2c) set_opt_bg_pane_g6_copy2

0xf190,	// (0x0002e19a) set_opt_bg_pane_g7_copy2

0xf198,	// (0x0002e1a2) set_opt_bg_pane_g8_copy2

0xf1a2,	// (0x0002e1ac) set_opt_bg_pane_g9_copy2

0x9bd4,	// (0x00028bde) aid_size_touch_slider_mark_copy1_ParamLimits

0x9bd4,	// (0x00028bde) aid_size_touch_slider_mark_copy1

0xf1ac,	// (0x0002e1b6) slider_set_pane_g1_copy1

0x9be8,	// (0x00028bf2) slider_set_pane_g2_copy1

0x8ca0,	// (0x00027caa) slider_set_pane_g3_copy1_ParamLimits

0x8ca0,	// (0x00027caa) slider_set_pane_g3_copy1

0x8cb4,	// (0x00027cbe) slider_set_pane_g4_copy1_ParamLimits

0x8cb4,	// (0x00027cbe) slider_set_pane_g4_copy1

0x8ccc,	// (0x00027cd6) slider_set_pane_g5_copy1_ParamLimits

0x8ccc,	// (0x00027cd6) slider_set_pane_g5_copy1

0x8ca0,	// (0x00027caa) slider_set_pane_g6_copy1_ParamLimits

0x8ca0,	// (0x00027caa) slider_set_pane_g6_copy1

0x9bf0,	// (0x00028bfa) slider_set_pane_g7_copy1_ParamLimits

0x9bf0,	// (0x00028bfa) slider_set_pane_g7_copy1

0x15ca,	// (0x000205d4) bg_set_opt_pane_cp2_copy1

0xf1b5,	// (0x0002e1bf) setting_slider_graphic_pane_g1_copy1

0xf1be,	// (0x0002e1c8) setting_slider_graphic_pane_t1_copy1

0xf1ce,	// (0x0002e1d8) setting_slider_graphic_pane_t2_copy1

0xf1de,	// (0x0002e1e8) slider_set_pane_cp_copy1

0xf1ee,	// (0x0002e1f8) input_focus_pane_cp1_copy1

0xf1f7,	// (0x0002e201) list_set_text_pane_copy1

0xf1ff,	// (0x0002e209) setting_text_pane_g1_copy1

0x652f,	// (0x00025539) set_text_pane_t1_copy1

0xf1ee,	// (0x0002e1f8) input_focus_pane_cp2_copy1

0xf1ff,	// (0x0002e209) setting_code_pane_g1_copy1

0xf208,	// (0x0002e212) setting_code_pane_t1_copy1

0xb80a,	// (0x0002a814) list_set_graphic_pane_copy1

0x15ca,	// (0x000205d4) bg_set_opt_pane_cp4_copy1

0x7662,	// (0x0002666c) list_set_graphic_pane_g1_copy1_ParamLimits

0x7662,	// (0x0002666c) list_set_graphic_pane_g1_copy1

0xf216,	// (0x0002e220) list_set_graphic_pane_g2_copy1

0x767a,	// (0x00026684) list_set_graphic_pane_t1_copy1_ParamLimits

0x767a,	// (0x00026684) list_set_graphic_pane_t1_copy1

0xc2e6,	// (0x0002b2f0) rs_clock_indi_pane_g1

0xf21e,	// (0x0002e228) rs_clock_indi_pane_t1

0xf22c,	// (0x0002e236) rs_indi_pane

0xf234,	// (0x0002e23e) rs_indi_pane_g1

0xf23d,	// (0x0002e247) rs_indi_pane_g2

0xef68,	// (0x0002df72) rs_indi_pane_g3

0x0002,

0xfec7,	// (0x0002eed1) rs_indi_pane_g

0x7957,	// (0x00026961) bg_popup_preview_window_pane_cp03

0xf246,	// (0x0002e250) popup_fep_tooltip_window_t1

0xcf81,	// (0x0002bf8b) popup_note2_window_g2_ParamLimits

0xcf81,	// (0x0002bf8b) popup_note2_window_g2

0x0001,

0xfc67,	// (0x0002ec71) popup_note2_window_g_ParamLimits

0xfc67,	// (0x0002ec71) popup_note2_window_g

0xd46e,	// (0x0002c478) bg_popup_sub_pane_cp11_ParamLimits

0xd47b,	// (0x0002c485) cell_ai3_links_pane_g1_ParamLimits

0xd492,	// (0x0002c49c) cell_ai3_links_pane_t1

0x652f,	// (0x00025539) set_text_pane_t1_copy1_ParamLimits

0x7868,	// (0x00026872) cell_graphic_popup_pane_cp2_ParamLimits

0x7868,	// (0x00026872) cell_graphic_popup_pane_cp2

0xf254,	// (0x0002e25e) cell_graphic_popup_pane_g1_cp2

0x18c0,	// (0x000208ca) cell_graphic_popup_pane_g2_cp2

0xf25c,	// (0x0002e266) cell_graphic_popup_pane_g3_cp2

0xf264,	// (0x0002e26e) cell_graphic_popup_pane_t2_cp2

0x18d1,	// (0x000208db) grid_highlight_pane_cp3_cp2

0x3732,	// (0x0002273c) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1a5c,	// (0x00020a66) main_tmo_pane_ParamLimits

0xd7c4,	// (0x0002c7ce) popup_tmo_big_image_note_window

0xe958,	// (0x0002d962) cell_ai5_widget_list_pane

0xe960,	// (0x0002d96a) cell_ai5_widget_lrg_icon_pane

0xeea6,	// (0x0002deb0) tmo_note_info_pane_t1_ParamLimits

0xeebb,	// (0x0002dec5) tmo_note_info_pane_t2_ParamLimits

0xeed0,	// (0x0002deda) tmo_note_info_pane_t3_ParamLimits

0xeee5,	// (0x0002deef) tmo_note_info_pane_t4_ParamLimits

0xeef7,	// (0x0002df01) tmo_note_info_pane_t5_ParamLimits

0xfeb5,	// (0x0002eebf) tmo_note_info_pane_t_ParamLimits

0xf015,	// (0x0002e01f) settings_container_pane_ParamLimits

0xf1e6,	// (0x0002e1f0) indicator_popup_pane_cp5

0xf1e6,	// (0x0002e1f0) indicator_popup_pane_cp6

0xb80a,	// (0x0002a814) list_set_graphic_pane_copy1_ParamLimits

0x15b6,	// (0x000205c0) bg_popup_window_pane_cp23

0xf272,	// (0x0002e27c) popup_tmo_big_image_note_window_g1

0xf27b,	// (0x0002e285) popup_tmo_big_image_note_window_t1

0xf28b,	// (0x0002e295) popup_tmo_big_image_note_window_t2

0xf29b,	// (0x0002e2a5) popup_tmo_big_image_note_window_t3

0x0002,

0xfece,	// (0x0002eed8) popup_tmo_big_image_note_window_t

0xc2e6,	// (0x0002b2f0) cell_ai5_widget_lrg_icon_pane_g1

0xf2ab,	// (0x0002e2b5) cell_ai5_widget_lrg_icon_pane_t1

0xf2b9,	// (0x0002e2c3) cell_ai5_widget_list_row_pane_ParamLimits

0xf2b9,	// (0x0002e2c3) cell_ai5_widget_list_row_pane

0xf2d0,	// (0x0002e2da) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2d0,	// (0x0002e2da) cell_ai5_widget_list_row_pane_g1

0xf2dd,	// (0x0002e2e7) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2dd,	// (0x0002e2e7) cell_ai5_widget_list_row_pane_t1

0xf308,	// (0x0002e312) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf308,	// (0x0002e312) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed5,	// (0x0002eedf) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed5,	// (0x0002eedf) cell_ai5_widget_list_row_pane_t

0x15b6,	// (0x000205c0) main_fep_vtchi_ss_pane

0xf34c,	// (0x0002e356) popup_fep_char_pre_window

0xf354,	// (0x0002e35e) popup_fep_ituss_window

0xf375,	// (0x0002e37f) popup_fep_vkbss_window

0xf394,	// (0x0002e39e) grid_vkbss_keypad_pane_ParamLimits

0xf394,	// (0x0002e39e) grid_vkbss_keypad_pane

0xf3a4,	// (0x0002e3ae) ituss_keypad_pane

0x9c12,	// (0x00028c1c) aid_vkbss_key_offset_ParamLimits

0x9c12,	// (0x00028c1c) aid_vkbss_key_offset

0x9c1e,	// (0x00028c28) cell_vkbss_key_pane_ParamLimits

0x9c1e,	// (0x00028c28) cell_vkbss_key_pane

0x87ba,	// (0x000277c4) bg_cell_vkbss_key_g1_ParamLimits

0x87ba,	// (0x000277c4) bg_cell_vkbss_key_g1

0xf3b3,	// (0x0002e3bd) cell_vkbss_key_3p_pane_ParamLimits

0xf3b3,	// (0x0002e3bd) cell_vkbss_key_3p_pane

0xf3cd,	// (0x0002e3d7) cell_vkbss_key_g1_ParamLimits

0xf3cd,	// (0x0002e3d7) cell_vkbss_key_g1

0xf3e7,	// (0x0002e3f1) cell_vkbss_key_t1_ParamLimits

0xf3e7,	// (0x0002e3f1) cell_vkbss_key_t1

0x9c34,	// (0x00028c3e) cell_ituss_key_pane_ParamLimits

0x9c34,	// (0x00028c3e) cell_ituss_key_pane

0xf412,	// (0x0002e41c) bg_cell_ituss_key_g1_ParamLimits

0xf412,	// (0x0002e41c) bg_cell_ituss_key_g1

0xf41e,	// (0x0002e428) cell_ituss_key_pane_g1_ParamLimits

0xf41e,	// (0x0002e428) cell_ituss_key_pane_g1

0x9c45,	// (0x00028c4f) cell_ituss_key_pane_g2_ParamLimits

0x9c45,	// (0x00028c4f) cell_ituss_key_pane_g2

0x0002,

0xfedc,	// (0x0002eee6) cell_ituss_key_pane_g_ParamLimits

0xfedc,	// (0x0002eee6) cell_ituss_key_pane_g

0x9c71,	// (0x00028c7b) cell_ituss_key_t1_ParamLimits

0x9c71,	// (0x00028c7b) cell_ituss_key_t1

0x9cab,	// (0x00028cb5) cell_ituss_key_t2_ParamLimits

0x9cab,	// (0x00028cb5) cell_ituss_key_t2

0x9cdc,	// (0x00028ce6) cell_ituss_key_t3_ParamLimits

0x9cdc,	// (0x00028ce6) cell_ituss_key_t3

0x9cab,	// (0x00028cb5) cell_ituss_key_t4_ParamLimits

0x9cab,	// (0x00028cb5) cell_ituss_key_t4

0x0004,

0xfee3,	// (0x0002eeed) cell_ituss_key_t_ParamLimits

0xfee3,	// (0x0002eeed) cell_ituss_key_t

0xf44a,	// (0x0002e454) cell_vkbss_key_3p_pane_g1

0xf452,	// (0x0002e45c) cell_vkbss_key_3p_pane_g2

0xf45a,	// (0x0002e464) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x0002eef8) cell_vkbss_key_3p_pane_g

0x15b6,	// (0x000205c0) bg_popup_fep_char_preview_window_cp02

0x9d1f,	// (0x00028d29) popup_fep_char_pre_window_t1

0xe8f2,	// (0x0002d8fc) main_ai5_sk_pane

0xef71,	// (0x0002df7b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef7d,	// (0x0002df87) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc9d9,	// (0x0002b9e3) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef92,	// (0x0002df9c) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec0,	// (0x0002eeca) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef9e,	// (0x0002dfa8) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1a5c,	// (0x00020a66) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf462,	// (0x0002e46c) main_ai5_sk_pane_g1

0xa1ac,	// (0x000291b6) popup_query_code_window_g1

0xf36a,	// (0x0002e374) popup_fep_vkb_icf_pane

0xf37e,	// (0x0002e388) popup_fep_vtchi_icf_pane

0xf46b,	// (0x0002e475) bg_icf_pane

0xf477,	// (0x0002e481) list_vkb_icf_pane

0xf486,	// (0x0002e490) bg_icf_pane_cp01

0xf499,	// (0x0002e4a3) vtchi_icf_list_pane

0xf4a9,	// (0x0002e4b3) list_vkb_icf_pane_t1_ParamLimits

0xf4a9,	// (0x0002e4b3) list_vkb_icf_pane_t1

0xf4bf,	// (0x0002e4c9) vtchi_icf_list_pane_t1_ParamLimits

0xf4bf,	// (0x0002e4c9) vtchi_icf_list_pane_t1

0xf354,	// (0x0002e35e) popup_fep_ituss_window_ParamLimits

0xf37e,	// (0x0002e388) popup_fep_vtchi_icf_pane_ParamLimits

0xf3a4,	// (0x0002e3ae) ituss_keypad_pane_ParamLimits

0x9c06,	// (0x00028c10) ituss_sks_pane

0xf46b,	// (0x0002e475) bg_icf_pane_ParamLimits

0xf330,	// (0x0002e33a) icf_edit_indi_pane_ParamLimits

0xf330,	// (0x0002e33a) icf_edit_indi_pane

0xf477,	// (0x0002e481) list_vkb_icf_pane_ParamLimits

0xf486,	// (0x0002e490) bg_icf_pane_cp01_ParamLimits

0xf33f,	// (0x0002e349) icf_edit_indi_pane_cp01_ParamLimits

0xf33f,	// (0x0002e349) icf_edit_indi_pane_cp01

0xf4a1,	// (0x0002e4ab) vtchi_query_pane

0xc556,	// (0x0002b560) icf_edit_indi_pane_g1_ParamLimits

0xc556,	// (0x0002b560) icf_edit_indi_pane_g1

0xf531,	// (0x0002e53b) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x0002e53b) icf_edit_indi_pane_g2

0x0001,

0xff06,	// (0x0002ef10) icf_edit_indi_pane_g_ParamLimits

0xff06,	// (0x0002ef10) icf_edit_indi_pane_g

0xf540,	// (0x0002e54a) icf_edit_indi_pane_t1

0xf4da,	// (0x0002e4e4) bg_input_focus_pane_cp042

0x1934,	// (0x0002093e) vtchi_button_pane

0xf4e3,	// (0x0002e4ed) vtchi_query_pane_t1

0xf4f1,	// (0x0002e4fb) vtchi_query_pane_t2

0xf4ff,	// (0x0002e509) vtchi_query_pane_t3

0x0002,

0xfef5,	// (0x0002eeff) vtchi_query_pane_t

0x15b6,	// (0x000205c0) bg_button_pane_cp13

0xf50d,	// (0x0002e517) vtchi_button_pane_g1

0x9d2e,	// (0x00028d38) ituss_sks_pane_g1

0x9d39,	// (0x00028d43) ituss_sks_pane_g2

0x0001,

0xfefc,	// (0x0002ef06) ituss_sks_pane_g

0xf515,	// (0x0002e51f) ituss_sks_pane_t1

0xf523,	// (0x0002e52d) ituss_sks_pane_t2

0x0001,

0xff01,	// (0x0002ef0b) ituss_sks_pane_t

0xbd4c,	// (0x0002ad56) indicator_nsta_pane_cp_g1

0xbd55,	// (0x0002ad5f) indicator_nsta_pane_cp_g2

0xbd5d,	// (0x0002ad67) indicator_nsta_pane_cp_g3

0xbd65,	// (0x0002ad6f) indicator_nsta_pane_cp_g4

0xbd6d,	// (0x0002ad77) indicator_nsta_pane_cp_g5

0xbd6d,	// (0x0002ad77) indicator_nsta_pane_cp_g6

0x0005,

0xfab1,	// (0x0002eabb) indicator_nsta_pane_cp_g

0xe4a8,	// (0x0002d4b2) cell_graphic2_pane_t2_ParamLimits

0xe4a8,	// (0x0002d4b2) cell_graphic2_pane_t2

0x0001,

0xfdb7,	// (0x0002edc1) cell_graphic2_pane_t_ParamLimits

0xfdb7,	// (0x0002edc1) cell_graphic2_pane_t

0xe4d5,	// (0x0002d4df) cell_graphic2_control_pane_t1

0x73c6,	// (0x000263d0) signal_pane_g3_ParamLimits

0x73c6,	// (0x000263d0) signal_pane_g3

0x73d8,	// (0x000263e2) signal_pane_g4_ParamLimits

0x73d8,	// (0x000263e2) signal_pane_g4

0xf31a,	// (0x0002e324) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf31a,	// (0x0002e324) cell_ai5_widget_list_row_pane_t3

0xf438,	// (0x0002e442) cell_ituss_key_pane_t1_ParamLimits

0xf438,	// (0x0002e442) cell_ituss_key_pane_t1

0x9dfb,	// (0x00028e05) form_field_data_wide_pane_vc_t2_ParamLimits

0x9dfb,	// (0x00028e05) form_field_data_wide_pane_vc_t2

0x9e0f,	// (0x00028e19) form_field_data_wide_pane_vc_t3_ParamLimits

0x9e0f,	// (0x00028e19) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0002e80e) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0002e80e) form_field_data_wide_pane_vc_t

0xba14,	// (0x0002aa1e) form_field_slider_wide_pane_vc_t3_ParamLimits

0xba14,	// (0x0002aa1e) form_field_slider_wide_pane_vc_t3

0xbaf2,	// (0x0002aafc) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbaf2,	// (0x0002aafc) form_field_popup_wide_pane_vc_t2

0xbb09,	// (0x0002ab13) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbb09,	// (0x0002ab13) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa0,	// (0x0002eaaa) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa0,	// (0x0002eaaa) form_field_popup_wide_pane_vc_t

0x9a22,	// (0x00028a2c) aid_fshwr2_btn_pane_ParamLimits

0x9a2e,	// (0x00028a38) aid_fshwr2_syb_pane_ParamLimits

0x9a3a,	// (0x00028a44) aid_fshwr2_txt_pane_ParamLimits

0x1a5c,	// (0x00020a66) fshwr2_bg_pane_ParamLimits

0x9a46,	// (0x00028a50) fshwr2_func_candi_pane_ParamLimits

0x9a5b,	// (0x00028a65) fshwr2_hwr_syb_pane_ParamLimits

0x9a6b,	// (0x00028a75) fshwr2_icf_pane_ParamLimits

0x6119,	// (0x00025123) list_double_graphic_pane_vc_g4_ParamLimits

0x6119,	// (0x00025123) list_double_graphic_pane_vc_g4

0x9c65,	// (0x00028c6f) cell_ituss_key_pane_g3_ParamLimits

0x9c65,	// (0x00028c6f) cell_ituss_key_pane_g3

0x9d0d,	// (0x00028d17) cell_ituss_key_t5_ParamLimits

0x9d0d,	// (0x00028d17) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small
