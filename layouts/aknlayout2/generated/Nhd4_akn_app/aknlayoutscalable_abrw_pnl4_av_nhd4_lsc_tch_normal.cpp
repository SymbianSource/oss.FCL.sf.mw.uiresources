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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00015417 };

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
0x94f2,	// (0x0001e909) Screen

0x94fe,	// (0x0001e915) application_window_ParamLimits

0x94fe,	// (0x0001e915) application_window

0xc20d,	// (0x00021624) screen_g1

0x7fb3,	// (0x0001d3ca) area_bottom_pane_ParamLimits

0x7fb3,	// (0x0001d3ca) area_bottom_pane

0xe205,	// (0x0002361c) area_top_pane_ParamLimits

0xe205,	// (0x0002361c) area_top_pane

0xe2a3,	// (0x000236ba) main_pane_ParamLimits

0xe2a3,	// (0x000236ba) main_pane

0xc217,	// (0x0002162e) misc_graphics

0xa6cd,	// (0x0001fae4) battery_pane_ParamLimits

0xa6cd,	// (0x0001fae4) battery_pane

0x1b23,	// (0x00016f3a) bg_status_flat_pane_g8

0x1b2b,	// (0x00016f42) bg_status_flat_pane_g9

0x0dfa,	// (0x00016211) context_pane_ParamLimits

0x0dfa,	// (0x00016211) context_pane

0xa838,	// (0x0001fc4f) navi_pane_ParamLimits

0xa838,	// (0x0001fc4f) navi_pane

0xa8b6,	// (0x0001fccd) signal_pane_ParamLimits

0xa8b6,	// (0x0001fccd) signal_pane

0x0008,

0xf834,	// (0x00024c4b) bg_status_flat_pane_g

0xa946,	// (0x0001fd5d) status_pane_g1_ParamLimits

0xa946,	// (0x0001fd5d) status_pane_g1

0xa95c,	// (0x0001fd73) status_pane_g2_ParamLimits

0xa95c,	// (0x0001fd73) status_pane_g2

0x1021,	// (0x00016438) status_pane_g3_ParamLimits

0x1021,	// (0x00016438) status_pane_g3

0x0004,

0xf767,	// (0x00024b7e) status_pane_g_ParamLimits

0xf767,	// (0x00024b7e) status_pane_g

0xa968,	// (0x0001fd7f) title_pane_ParamLimits

0xa968,	// (0x0001fd7f) title_pane

0xa9cb,	// (0x0001fde2) uni_indicator_pane_ParamLimits

0xa9cb,	// (0x0001fde2) uni_indicator_pane

0xd0ea,	// (0x00022501) bg_list_pane_ParamLimits

0xd0ea,	// (0x00022501) bg_list_pane

0xa640,	// (0x0001fa57) find_pane

0x12f7,	// (0x0001670e) listscroll_app_pane_ParamLimits

0x12f7,	// (0x0001670e) listscroll_app_pane

0xd10a,	// (0x00022521) listscroll_form_pane

0x841d,	// (0x0001d834) listscroll_gen_pane_ParamLimits

0x841d,	// (0x0001d834) listscroll_gen_pane

0xe7cc,	// (0x00023be3) listscroll_set_pane

0x2699,	// (0x00017ab0) main_idle_act_pane

0xcf9e,	// (0x000223b5) main_idle_trad_pane

0xcf9e,	// (0x000223b5) main_list_empty_pane

0xc85d,	// (0x00021c74) main_midp_pane

0xd124,	// (0x0002253b) main_pane_g1_ParamLimits

0xd124,	// (0x0002253b) main_pane_g1

0x8431,	// (0x0001d848) popup_ai_message_window_ParamLimits

0x8431,	// (0x0001d848) popup_ai_message_window

0x84e2,	// (0x0001d8f9) popup_fep_china_uni_window_ParamLimits

0x84e2,	// (0x0001d8f9) popup_fep_china_uni_window

0x853c,	// (0x0001d953) popup_fep_japan_candidate_window_ParamLimits

0x853c,	// (0x0001d953) popup_fep_japan_candidate_window

0x855a,	// (0x0001d971) popup_fep_japan_predictive_window_ParamLimits

0x855a,	// (0x0001d971) popup_fep_japan_predictive_window

0x856c,	// (0x0001d983) popup_find_window

0x8589,	// (0x0001d9a0) popup_grid_graphic_window_ParamLimits

0x8589,	// (0x0001d9a0) popup_grid_graphic_window

0xe818,	// (0x00023c2f) popup_large_graphic_colour_window

0x8627,	// (0x0001da3e) popup_menu_window_ParamLimits

0x8627,	// (0x0001da3e) popup_menu_window

0x87f9,	// (0x0001dc10) popup_note_image_window

0x87bf,	// (0x0001dbd6) popup_note_wait_window_ParamLimits

0x87bf,	// (0x0001dbd6) popup_note_wait_window

0x8811,	// (0x0001dc28) popup_note_window_ParamLimits

0x8811,	// (0x0001dc28) popup_note_window

0x88c0,	// (0x0001dcd7) popup_query_code_window_ParamLimits

0x88c0,	// (0x0001dcd7) popup_query_code_window

0x88fa,	// (0x0001dd11) popup_query_data_code_window_ParamLimits

0x88fa,	// (0x0001dd11) popup_query_data_code_window

0x8917,	// (0x0001dd2e) popup_query_data_window_ParamLimits

0x8917,	// (0x0001dd2e) popup_query_data_window

0x8999,	// (0x0001ddb0) popup_query_sat_info_window_ParamLimits

0x8999,	// (0x0001ddb0) popup_query_sat_info_window

0x8a30,	// (0x0001de47) popup_snote_single_graphic_window_ParamLimits

0x8a30,	// (0x0001de47) popup_snote_single_graphic_window

0x8a30,	// (0x0001de47) popup_snote_single_text_window_ParamLimits

0x8a30,	// (0x0001de47) popup_snote_single_text_window

0xe83e,	// (0x00023c55) popup_sub_window_general

0x8b8d,	// (0x0001dfa4) popup_window_general_ParamLimits

0x8b8d,	// (0x0001dfa4) popup_window_general

0x0cb6,	// (0x000160cd) power_save_pane

0x82a2,	// (0x0001d6b9) control_pane_g1_ParamLimits

0x82a2,	// (0x0001d6b9) control_pane_g1

0x82cb,	// (0x0001d6e2) control_pane_g2_ParamLimits

0x82cb,	// (0x0001d6e2) control_pane_g2

0xd0d4,	// (0x000224eb) control_pane_g3_ParamLimits

0xd0d4,	// (0x000224eb) control_pane_g3

0x0007,

0xf74f,	// (0x00024b66) control_pane_g_ParamLimits

0xf74f,	// (0x00024b66) control_pane_g

0x830c,	// (0x0001d723) control_pane_t1_ParamLimits

0x830c,	// (0x0001d723) control_pane_t1

0x8372,	// (0x0001d789) control_pane_t2_ParamLimits

0x8372,	// (0x0001d789) control_pane_t2

0x0002,

0xf760,	// (0x00024b77) control_pane_t_ParamLimits

0xf760,	// (0x00024b77) control_pane_t

0xa572,	// (0x0001f989) navi_navi_volume_pane_cp1

0xa57a,	// (0x0001f991) status_small_icon_pane

0xd0a0,	// (0x000224b7) status_small_pane_g1_ParamLimits

0xd0a0,	// (0x000224b7) status_small_pane_g1

0xa582,	// (0x0001f999) status_small_pane_g2_ParamLimits

0xa582,	// (0x0001f999) status_small_pane_g2

0xa58e,	// (0x0001f9a5) status_small_pane_g3_ParamLimits

0xa58e,	// (0x0001f9a5) status_small_pane_g3

0xa59a,	// (0x0001f9b1) status_small_pane_g4_ParamLimits

0xa59a,	// (0x0001f9b1) status_small_pane_g4

0xa5a6,	// (0x0001f9bd) status_small_pane_g5_ParamLimits

0xa5a6,	// (0x0001f9bd) status_small_pane_g5

0xa5b4,	// (0x0001f9cb) status_small_pane_g6_ParamLimits

0xa5b4,	// (0x0001f9cb) status_small_pane_g6

0x0007,

0xf73e,	// (0x00024b55) status_small_pane_g_ParamLimits

0xf73e,	// (0x00024b55) status_small_pane_g

0xa5e3,	// (0x0001f9fa) status_small_pane_t1

0xa605,	// (0x0001fa1c) status_small_wait_pane_ParamLimits

0xa605,	// (0x0001fa1c) status_small_wait_pane

0xa26e,	// (0x0001f685) aid_levels_signal_ParamLimits

0xa26e,	// (0x0001f685) aid_levels_signal

0xa286,	// (0x0001f69d) signal_pane_g1_ParamLimits

0xa286,	// (0x0001f69d) signal_pane_g1

0xa2a1,	// (0x0001f6b8) signal_pane_g2_ParamLimits

0xa2a1,	// (0x0001f6b8) signal_pane_g2

0x0003,

0xf6cf,	// (0x00024ae6) signal_pane_g_ParamLimits

0xf6cf,	// (0x00024ae6) signal_pane_g

0xcbc5,	// (0x00021fdc) context_pane_g1

0x950e,	// (0x0001e925) title_pane_g1

0x9545,	// (0x0001e95c) title_pane_t1

0xc22d,	// (0x00021644) title_pane_t2

0xc253,	// (0x0002166a) title_pane_t3

0x0002,

0xf532,	// (0x00024949) title_pane_t

0xa9f3,	// (0x0001fe0a) aid_levels_battery_ParamLimits

0xa9f3,	// (0x0001fe0a) aid_levels_battery

0xaa0f,	// (0x0001fe26) battery_pane_g1_ParamLimits

0xaa0f,	// (0x0001fe26) battery_pane_g1

0xaa2c,	// (0x0001fe43) battery_pane_g2_ParamLimits

0xaa2c,	// (0x0001fe43) battery_pane_g2

0x0001,

0xf772,	// (0x00024b89) battery_pane_g_ParamLimits

0xf772,	// (0x00024b89) battery_pane_g

0xb009,	// (0x00020420) uni_indicator_pane_g1

0xb01f,	// (0x00020436) uni_indicator_pane_g2

0xb035,	// (0x0002044c) uni_indicator_pane_g3

0x0005,

0xf8dc,	// (0x00024cf3) uni_indicator_pane_g

0xce62,	// (0x00022279) navi_icon_pane_ParamLimits

0xce62,	// (0x00022279) navi_icon_pane

0xcdb7,	// (0x000221ce) navi_midp_pane

0xce7e,	// (0x00022295) navi_navi_pane

0xce88,	// (0x0002229f) navi_text_pane_ParamLimits

0xce88,	// (0x0002229f) navi_text_pane

0xc20d,	// (0x00021624) status_small_wait_pane_g1

0xc4be,	// (0x000218d5) status_small_wait_pane_g2

0x0001,

0xf8d7,	// (0x00024cee) status_small_wait_pane_g

0xaf62,	// (0x00020379) navi_navi_icon_text_pane

0x2176,	// (0x0001758d) navi_navi_pane_g1_ParamLimits

0x2176,	// (0x0001758d) navi_navi_pane_g1

0x2188,	// (0x0001759f) navi_navi_pane_g2_ParamLimits

0x2188,	// (0x0001759f) navi_navi_pane_g2

0x0001,

0xf8a5,	// (0x00024cbc) navi_navi_pane_g_ParamLimits

0xf8a5,	// (0x00024cbc) navi_navi_pane_g

0x219a,	// (0x000175b1) navi_navi_tabs_pane

0x21a3,	// (0x000175ba) navi_navi_text_pane

0xaf62,	// (0x00020379) navi_navi_volume_pane

0x214a,	// (0x00017561) navi_text_pane_t1

0x213e,	// (0x00017555) navi_icon_pane_g1

0x2091,	// (0x000174a8) navi_navi_text_pane_t1

0x8c4a,	// (0x0001e061) navi_navi_volume_pane_g1

0xeaa9,	// (0x00023ec0) volume_small_pane

0x1ff7,	// (0x0001740e) navi_navi_icon_text_pane_g1

0xaeba,	// (0x000202d1) navi_navi_icon_text_pane_t1

0xce7e,	// (0x00022295) navi_tabs_2_long_pane

0xce7e,	// (0x00022295) navi_tabs_2_pane

0xce7e,	// (0x00022295) navi_tabs_3_long_pane

0xce7e,	// (0x00022295) navi_tabs_3_pane

0xce7e,	// (0x00022295) navi_tabs_4_pane

0xea89,	// (0x00023ea0) tabs_2_active_pane_ParamLimits

0xea89,	// (0x00023ea0) tabs_2_active_pane

0xea99,	// (0x00023eb0) tabs_2_passive_pane_ParamLimits

0xea99,	// (0x00023eb0) tabs_2_passive_pane

0xea57,	// (0x00023e6e) tabs_3_active_pane_ParamLimits

0xea57,	// (0x00023e6e) tabs_3_active_pane

0xea67,	// (0x00023e7e) tabs_3_passive_pane_ParamLimits

0xea67,	// (0x00023e7e) tabs_3_passive_pane

0xea78,	// (0x00023e8f) tabs_3_passive_pane_cp_ParamLimits

0xea78,	// (0x00023e8f) tabs_3_passive_pane_cp

0xea13,	// (0x00023e2a) tabs_4_active_pane_ParamLimits

0xea13,	// (0x00023e2a) tabs_4_active_pane

0xea24,	// (0x00023e3b) tabs_4_passive_pane_ParamLimits

0xea24,	// (0x00023e3b) tabs_4_passive_pane

0xea35,	// (0x00023e4c) tabs_4_passive_pane_cp_ParamLimits

0xea35,	// (0x00023e4c) tabs_4_passive_pane_cp

0xea46,	// (0x00023e5d) tabs_4_passive_pane_cp2_ParamLimits

0xea46,	// (0x00023e5d) tabs_4_passive_pane_cp2

0xe9ef,	// (0x00023e06) tabs_2_long_active_pane_ParamLimits

0xe9ef,	// (0x00023e06) tabs_2_long_active_pane

0xea01,	// (0x00023e18) tabs_2_long_passive_pane_ParamLimits

0xea01,	// (0x00023e18) tabs_2_long_passive_pane

0xe9aa,	// (0x00023dc1) tabs_3_long_active_pane_ParamLimits

0xe9aa,	// (0x00023dc1) tabs_3_long_active_pane

0xe9c3,	// (0x00023dda) tabs_3_long_passive_pane_ParamLimits

0xe9c3,	// (0x00023dda) tabs_3_long_passive_pane

0xe9d6,	// (0x00023ded) tabs_3_long_passive_pane_cp_ParamLimits

0xe9d6,	// (0x00023ded) tabs_3_long_passive_pane_cp

0xe950,	// (0x00023d67) volume_small_pane_g1

0xe959,	// (0x00023d70) volume_small_pane_g2

0xe962,	// (0x00023d79) volume_small_pane_g3

0xe96b,	// (0x00023d82) volume_small_pane_g4

0xe974,	// (0x00023d8b) volume_small_pane_g5

0xe97d,	// (0x00023d94) volume_small_pane_g6

0xe986,	// (0x00023d9d) volume_small_pane_g7

0xe98f,	// (0x00023da6) volume_small_pane_g8

0xe998,	// (0x00023daf) volume_small_pane_g9

0xe9a1,	// (0x00023db8) volume_small_pane_g10

0x0009,

0xf871,	// (0x00024c88) volume_small_pane_g

0xc265,	// (0x0002167c) bg_active_tab_pane_cp2_ParamLimits

0xc265,	// (0x0002167c) bg_active_tab_pane_cp2

0x95d1,	// (0x0001e9e8) tabs_3_active_pane_g1

0x95d9,	// (0x0001e9f0) tabs_3_active_pane_t1

0xc265,	// (0x0002167c) bg_passive_tab_pane_cp2_ParamLimits

0xc265,	// (0x0002167c) bg_passive_tab_pane_cp2

0x95d1,	// (0x0001e9e8) tabs_3_passive_pane_g1

0x95d9,	// (0x0001e9f0) tabs_3_passive_pane_t1

0xc265,	// (0x0002167c) bg_active_tab_pane_cp3_ParamLimits

0xc265,	// (0x0002167c) bg_active_tab_pane_cp3

0x95eb,	// (0x0001ea02) tabs_4_active_pane_g1

0x95f3,	// (0x0001ea0a) tabs_4_active_pane_t1

0xc265,	// (0x0002167c) bg_passive_tab_pane_cp3_ParamLimits

0xc265,	// (0x0002167c) bg_passive_tab_pane_cp3

0x95eb,	// (0x0001ea02) tabs_4_1_passive_pane_g1

0x95f3,	// (0x0001ea0a) tabs_4_1_passive_pane_t1

0xc85d,	// (0x00021c74) list_highlight_pane_cp2

0xb14d,	// (0x00020564) list_set_pane_ParamLimits

0xb14d,	// (0x00020564) list_set_pane

0xb1e7,	// (0x000205fe) main_pane_set_t1_ParamLimits

0xb1e7,	// (0x000205fe) main_pane_set_t1

0xb207,	// (0x0002061e) main_pane_set_t2_ParamLimits

0xb207,	// (0x0002061e) main_pane_set_t2

0xb21b,	// (0x00020632) main_pane_set_t3_ParamLimits

0xb21b,	// (0x00020632) main_pane_set_t3

0xb22d,	// (0x00020644) main_pane_set_t4_ParamLimits

0xb22d,	// (0x00020644) main_pane_set_t4

0x0003,

0xf941,	// (0x00024d58) main_pane_set_t_ParamLimits

0xf941,	// (0x00024d58) main_pane_set_t

0xb23f,	// (0x00020656) setting_code_pane

0xb249,	// (0x00020660) setting_slider_graphic_pane

0xb249,	// (0x00020660) setting_slider_pane

0xb249,	// (0x00020660) setting_text_pane

0xb249,	// (0x00020660) setting_volume_pane

0x81b1,	// (0x0001d5c8) volume_set_pane

0xc273,	// (0x0002168a) bg_set_opt_pane_cp

0x81b9,	// (0x0001d5d0) setting_slider_pane_t1

0x81d2,	// (0x0001d5e9) setting_slider_pane_t2

0x81ec,	// (0x0001d603) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00024950) setting_slider_pane_t

0x8204,	// (0x0001d61b) slider_set_pane

0xc217,	// (0x0002162e) bg_set_opt_pane_cp2

0xc281,	// (0x00021698) setting_slider_graphic_pane_g1

0x821a,	// (0x0001d631) setting_slider_graphic_pane_t1

0x822a,	// (0x0001d641) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00024957) setting_slider_graphic_pane_t

0x823a,	// (0x0001d651) slider_set_pane_cp

0xc217,	// (0x0002162e) input_focus_pane_cp1

0x2680,	// (0x00017a97) list_set_text_pane

0xc20d,	// (0x00021624) setting_text_pane_g1

0xc217,	// (0x0002162e) input_focus_pane_cp2

0xc20d,	// (0x00021624) setting_code_pane_g1

0xc28a,	// (0x000216a1) setting_code_pane_t1

0xc298,	// (0x000216af) set_text_pane_t1_ParamLimits

0xc298,	// (0x000216af) set_text_pane_t1

0xc773,	// (0x00021b8a) set_opt_bg_pane_g1

0xc77b,	// (0x00021b92) set_opt_bg_pane_g2

0xb102,	// (0x00020519) set_opt_bg_pane_g3

0xc78b,	// (0x00021ba2) set_opt_bg_pane_g4

0xc793,	// (0x00021baa) set_opt_bg_pane_g5

0xc79b,	// (0x00021bb2) set_opt_bg_pane_g6

0xb10c,	// (0x00020523) set_opt_bg_pane_g7

0xb114,	// (0x0002052b) set_opt_bg_pane_g8

0xb11e,	// (0x00020535) set_opt_bg_pane_g9

0x0008,

0xf92e,	// (0x00024d45) set_opt_bg_pane_g

0xb0f5,	// (0x0002050c) slider_set_pane_g1

0xeab2,	// (0x00023ec9) slider_set_pane_g2

0x0006,

0xf91f,	// (0x00024d36) slider_set_pane_g

0x8c52,	// (0x0001e069) volume_set_pane_g1

0x8c5a,	// (0x0001e071) volume_set_pane_g2

0x8c62,	// (0x0001e079) volume_set_pane_g3

0x8c6a,	// (0x0001e081) volume_set_pane_g4

0x8c72,	// (0x0001e089) volume_set_pane_g5

0x8c7a,	// (0x0001e091) volume_set_pane_g6

0x8c82,	// (0x0001e099) volume_set_pane_g7

0x8c8a,	// (0x0001e0a1) volume_set_pane_g8

0x8c92,	// (0x0001e0a9) volume_set_pane_g9

0x8c9a,	// (0x0001e0b1) volume_set_pane_g10

0x0009,

0xf8f7,	// (0x00024d0e) volume_set_pane_g

0x9605,	// (0x0001ea1c) indicator_pane_ParamLimits

0x9605,	// (0x0001ea1c) indicator_pane

0x962d,	// (0x0001ea44) main_idle_pane_g2_ParamLimits

0x962d,	// (0x0001ea44) main_idle_pane_g2

0x9665,	// (0x0001ea7c) main_pane_idle_g1_ParamLimits

0x9665,	// (0x0001ea7c) main_pane_idle_g1

0xc2b2,	// (0x000216c9) popup_clock_digital_analogue_window_ParamLimits

0xc2b2,	// (0x000216c9) popup_clock_digital_analogue_window

0x968c,	// (0x0001eaa3) soft_indicator_pane_ParamLimits

0x968c,	// (0x0001eaa3) soft_indicator_pane

0x96b0,	// (0x0001eac7) wallpaper_pane_ParamLimits

0x96b0,	// (0x0001eac7) wallpaper_pane

0xc20d,	// (0x00021624) wallpaper_pane_g1

0x96c2,	// (0x0001ead9) indicator_pane_g1_ParamLimits

0x96c2,	// (0x0001ead9) indicator_pane_g1

0x2b71,	// (0x00017f88) navi_navi_icon_text_pane_srt_g1

0xc2e0,	// (0x000216f7) soft_indicator_pane_t1

0xc2fa,	// (0x00021711) aid_ps_area_pane

0x96d8,	// (0x0001eaef) aid_ps_clock_pane

0xc30b,	// (0x00021722) aid_ps_indicator_pane

0xc317,	// (0x0002172e) indicator_ps_pane_ParamLimits

0xc317,	// (0x0002172e) indicator_ps_pane

0xc326,	// (0x0002173d) power_save_pane_g1_ParamLimits

0xc326,	// (0x0002173d) power_save_pane_g1

0xc332,	// (0x00021749) power_save_pane_g2_ParamLimits

0xc332,	// (0x00021749) power_save_pane_g2

0xe1e5,	// (0x000235fc) aid_navinavi_width_pane

0xc2fa,	// (0x00021711) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0002495c) power_save_pane_g_ParamLimits

0xf545,	// (0x0002495c) power_save_pane_g

0xc340,	// (0x00021757) power_save_pane_t1_ParamLimits

0xc340,	// (0x00021757) power_save_pane_t1

0x96d8,	// (0x0001eaef) aid_ps_clock_pane_ParamLimits

0xc30b,	// (0x00021722) aid_ps_indicator_pane_ParamLimits

0xc352,	// (0x00021769) power_save_pane_t4_ParamLimits

0xc352,	// (0x00021769) power_save_pane_t4

0x0001,

0xf54a,	// (0x00024961) power_save_pane_t_ParamLimits

0xf54a,	// (0x00024961) power_save_pane_t

0xc37c,	// (0x00021793) power_save_t3_ParamLimits

0xc37c,	// (0x00021793) power_save_t3

0xc367,	// (0x0002177e) power_save_t2_ParamLimits

0xc367,	// (0x0002177e) power_save_t2

0xc391,	// (0x000217a8) indicator_ps_pane_g1

0x96e6,	// (0x0001eafd) ai_gene_pane_ParamLimits

0x96e6,	// (0x0001eafd) ai_gene_pane

0x96fd,	// (0x0001eb14) ai_links_pane_ParamLimits

0x96fd,	// (0x0001eb14) ai_links_pane

0x9715,	// (0x0001eb2c) indicator_pane_cp1_ParamLimits

0x9715,	// (0x0001eb2c) indicator_pane_cp1

0x9724,	// (0x0001eb3b) main_pane_idle_g1_cp_ParamLimits

0x9724,	// (0x0001eb3b) main_pane_idle_g1_cp

0x973c,	// (0x0001eb53) popup_ai_links_title_window

0x9745,	// (0x0001eb5c) soft_indicator_pane_cp1_ParamLimits

0x9745,	// (0x0001eb5c) soft_indicator_pane_cp1

0x2435,	// (0x0001784c) ai_links_pane_g1

0x243e,	// (0x00017855) grid_ai_links_pane

0xb000,	// (0x00020417) ai_gene_pane_1

0x2423,	// (0x0001783a) ai_gene_pane_2

0x242c,	// (0x00017843) list_highlight_pane_cp4

0xafdc,	// (0x000203f3) cell_ai_link_pane_ParamLimits

0xafdc,	// (0x000203f3) cell_ai_link_pane

0x23f4,	// (0x0001780b) cell_ai_link_pane_g1

0xc4be,	// (0x000218d5) cell_ai_link_pane_g2

0x0001,

0xf8d2,	// (0x00024ce9) cell_ai_link_pane_g

0xc217,	// (0x0002162e) grid_highlight_cp2

0xc217,	// (0x0002162e) bg_popup_sub_pane_cp1

0xc3a8,	// (0x000217bf) popup_ai_links_title_window_t1

0x2344,	// (0x0001775b) ai_gene_pane_1_g1_ParamLimits

0x2344,	// (0x0001775b) ai_gene_pane_1_g1

0x2350,	// (0x00017767) ai_gene_pane_1_g2_ParamLimits

0x2350,	// (0x00017767) ai_gene_pane_1_g2

0x0001,

0xf8c8,	// (0x00024cdf) ai_gene_pane_1_g_ParamLimits

0xf8c8,	// (0x00024cdf) ai_gene_pane_1_g

0x235d,	// (0x00017774) ai_gene_pane_1_t1_ParamLimits

0x235d,	// (0x00017774) ai_gene_pane_1_t1

0x2391,	// (0x000177a8) grid_ai_soft_ind_pane

0x232f,	// (0x00017746) ai_gene_pane_2_t1_ParamLimits

0x232f,	// (0x00017746) ai_gene_pane_2_t1

0x9759,	// (0x0001eb70) main_pane_empty_t1_ParamLimits

0x9759,	// (0x0001eb70) main_pane_empty_t1

0x9771,	// (0x0001eb88) main_pane_empty_t2_ParamLimits

0x9771,	// (0x0001eb88) main_pane_empty_t2

0x9786,	// (0x0001eb9d) main_pane_empty_t3_ParamLimits

0x9786,	// (0x0001eb9d) main_pane_empty_t3

0x9798,	// (0x0001ebaf) main_pane_empty_t4_ParamLimits

0x9798,	// (0x0001ebaf) main_pane_empty_t4

0x97aa,	// (0x0001ebc1) main_pane_empty_t5_ParamLimits

0x97aa,	// (0x0001ebc1) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00024966) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00024966) main_pane_empty_t

0xc7f8,	// (0x00021c0f) bg_popup_window_pane_ParamLimits

0xc7f8,	// (0x00021c0f) bg_popup_window_pane

0xaf56,	// (0x0002036d) find_popup_pane_cp2_ParamLimits

0xaf56,	// (0x0002036d) find_popup_pane_cp2

0x20ab,	// (0x000174c2) heading_pane_ParamLimits

0x20ab,	// (0x000174c2) heading_pane

0xc217,	// (0x0002162e) bg_popup_sub_pane

0xaed7,	// (0x000202ee) bg_popup_window_pane_g1_ParamLimits

0xaed7,	// (0x000202ee) bg_popup_window_pane_g1

0xaee6,	// (0x000202fd) bg_popup_window_pane_g2_ParamLimits

0xaee6,	// (0x000202fd) bg_popup_window_pane_g2

0xaef2,	// (0x00020309) bg_popup_window_pane_g3_ParamLimits

0xaef2,	// (0x00020309) bg_popup_window_pane_g3

0xaefe,	// (0x00020315) bg_popup_window_pane_g4_ParamLimits

0xaefe,	// (0x00020315) bg_popup_window_pane_g4

0xaf0d,	// (0x00020324) bg_popup_window_pane_g5_ParamLimits

0xaf0d,	// (0x00020324) bg_popup_window_pane_g5

0xaf1d,	// (0x00020334) bg_popup_window_pane_g6_ParamLimits

0xaf1d,	// (0x00020334) bg_popup_window_pane_g6

0xaf29,	// (0x00020340) bg_popup_window_pane_g7_ParamLimits

0xaf29,	// (0x00020340) bg_popup_window_pane_g7

0xaf38,	// (0x0002034f) bg_popup_window_pane_g8_ParamLimits

0xaf38,	// (0x0002034f) bg_popup_window_pane_g8

0xaf47,	// (0x0002035e) bg_popup_window_pane_g9_ParamLimits

0xaf47,	// (0x0002035e) bg_popup_window_pane_g9

0x2085,	// (0x0001749c) bg_popup_window_pane_g10_ParamLimits

0x2085,	// (0x0001749c) bg_popup_window_pane_g10

0x0009,

0xf890,	// (0x00024ca7) bg_popup_window_pane_g_ParamLimits

0xf890,	// (0x00024ca7) bg_popup_window_pane_g

0x1fae,	// (0x000173c5) bg_popup_heading_pane_ParamLimits

0x1fae,	// (0x000173c5) bg_popup_heading_pane

0xeae2,	// (0x00023ef9) tabs_4_passive_pane_cp_srt_ParamLimits

0xeae2,	// (0x00023ef9) tabs_4_passive_pane_cp_srt

0xeaf4,	// (0x00023f0b) tabs_4_passive_pane_srt_ParamLimits

0x1fc2,	// (0x000173d9) heading_pane_g2

0xeaf4,	// (0x00023f0b) tabs_4_passive_pane_srt

0x12f7,	// (0x0001670e) bg_passive_tab_pane_cp3_srt_ParamLimits

0x12f7,	// (0x0001670e) bg_passive_tab_pane_cp3_srt

0x1fca,	// (0x000173e1) heading_pane_t1_ParamLimits

0x1fca,	// (0x000173e1) heading_pane_t1

0x1fe1,	// (0x000173f8) heading_pane_t2_ParamLimits

0x1fe1,	// (0x000173f8) heading_pane_t2

0x0001,

0xf88b,	// (0x00024ca2) heading_pane_t_ParamLimits

0xf88b,	// (0x00024ca2) heading_pane_t

0x1aeb,	// (0x00016f02) bg_popup_heading_pane_g1

0x1b9a,	// (0x00016fb1) bg_popup_heading_pane_g2

0x1ba4,	// (0x00016fbb) bg_popup_heading_pane_g3

0x1bae,	// (0x00016fc5) bg_popup_heading_pane_g4

0x1bb8,	// (0x00016fcf) bg_popup_heading_pane_g5

0x1bc2,	// (0x00016fd9) bg_popup_heading_pane_g6

0x1bca,	// (0x00016fe1) bg_popup_heading_pane_g7

0x1bd2,	// (0x00016fe9) bg_popup_heading_pane_g8

0x1bdc,	// (0x00016ff3) bg_popup_heading_pane_g9

0x0008,

0xf847,	// (0x00024c5e) bg_popup_heading_pane_g

0x11d7,	// (0x000165ee) bg_popup_sub_pane_g1

0x11e7,	// (0x000165fe) bg_popup_sub_pane_g2

0x11df,	// (0x000165f6) bg_popup_sub_pane_g3

0x11f7,	// (0x0001660e) bg_popup_sub_pane_g4

0x11ef,	// (0x00016606) bg_popup_sub_pane_g5

0x11ff,	// (0x00016616) bg_popup_sub_pane_g6

0x1207,	// (0x0001661e) bg_popup_sub_pane_g7

0x1217,	// (0x0001662e) bg_popup_sub_pane_g8

0x120f,	// (0x00016626) bg_popup_sub_pane_g9

0x0008,

0xf821,	// (0x00024c38) bg_popup_sub_pane_g

0xc265,	// (0x0002167c) bg_popup_window_pane_cp5_ParamLimits

0xc265,	// (0x0002167c) bg_popup_window_pane_cp5

0xc3c5,	// (0x000217dc) popup_note_window_g1_ParamLimits

0xc3c5,	// (0x000217dc) popup_note_window_g1

0xc3d1,	// (0x000217e8) popup_note_window_t1_ParamLimits

0xc3d1,	// (0x000217e8) popup_note_window_t1

0xc3e7,	// (0x000217fe) popup_note_window_t2_ParamLimits

0xc3e7,	// (0x000217fe) popup_note_window_t2

0xc3fd,	// (0x00021814) popup_note_window_t3_ParamLimits

0xc3fd,	// (0x00021814) popup_note_window_t3

0xc413,	// (0x0002182a) popup_note_window_t4_ParamLimits

0xc413,	// (0x0002182a) popup_note_window_t4

0xc43b,	// (0x00021852) popup_note_window_t5_ParamLimits

0xc43b,	// (0x00021852) popup_note_window_t5

0x0004,

0xf55a,	// (0x00024971) popup_note_window_t_ParamLimits

0xf55a,	// (0x00024971) popup_note_window_t

0xc45f,	// (0x00021876) bg_popup_window_pane_cp6_ParamLimits

0xc45f,	// (0x00021876) bg_popup_window_pane_cp6

0x1a67,	// (0x00016e7e) popup_note_image_window_g1_ParamLimits

0x1a67,	// (0x00016e7e) popup_note_image_window_g1

0xad7c,	// (0x00020193) popup_note_image_window_g2_ParamLimits

0xad7c,	// (0x00020193) popup_note_image_window_g2

0x0001,

0xf815,	// (0x00024c2c) popup_note_image_window_g_ParamLimits

0xf815,	// (0x00024c2c) popup_note_image_window_g

0x1a8c,	// (0x00016ea3) popup_note_image_window_t1_ParamLimits

0x1a8c,	// (0x00016ea3) popup_note_image_window_t1

0x1aa5,	// (0x00016ebc) popup_note_image_window_t2_ParamLimits

0x1aa5,	// (0x00016ebc) popup_note_image_window_t2

0x1abe,	// (0x00016ed5) popup_note_image_window_t3_ParamLimits

0x1abe,	// (0x00016ed5) popup_note_image_window_t3

0x0002,

0xf81a,	// (0x00024c31) popup_note_image_window_t_ParamLimits

0xf81a,	// (0x00024c31) popup_note_image_window_t

0x1930,	// (0x00016d47) bg_popup_window_pane_cp7_ParamLimits

0x1930,	// (0x00016d47) bg_popup_window_pane_cp7

0x1960,	// (0x00016d77) popup_note_wait_window_g1_ParamLimits

0x1960,	// (0x00016d77) popup_note_wait_window_g1

0x196c,	// (0x00016d83) popup_note_wait_window_g2_ParamLimits

0x196c,	// (0x00016d83) popup_note_wait_window_g2

0x0002,

0xf803,	// (0x00024c1a) popup_note_wait_window_g_ParamLimits

0xf803,	// (0x00024c1a) popup_note_wait_window_g

0x1984,	// (0x00016d9b) popup_note_wait_window_t1_ParamLimits

0x1984,	// (0x00016d9b) popup_note_wait_window_t1

0xad1d,	// (0x00020134) popup_note_wait_window_t2_ParamLimits

0xad1d,	// (0x00020134) popup_note_wait_window_t2

0xad3a,	// (0x00020151) popup_note_wait_window_t3_ParamLimits

0xad3a,	// (0x00020151) popup_note_wait_window_t3

0xad4d,	// (0x00020164) popup_note_wait_window_t4_ParamLimits

0xad4d,	// (0x00020164) popup_note_wait_window_t4

0x0004,

0xf80a,	// (0x00024c21) popup_note_wait_window_t_ParamLimits

0xf80a,	// (0x00024c21) popup_note_wait_window_t

0x1a00,	// (0x00016e17) wait_bar_pane_ParamLimits

0x1a00,	// (0x00016e17) wait_bar_pane

0xc217,	// (0x0002162e) wait_anim_pane

0xc217,	// (0x0002162e) wait_border_pane

0xc20d,	// (0x00021624) wait_anim_pane_g1

0xc20d,	// (0x00021624) wait_anim_pane_g2

0x0001,

0xf6ca,	// (0x00024ae1) wait_anim_pane_g

0x18dc,	// (0x00016cf3) wait_border_pane_g1

0x18e7,	// (0x00016cfe) wait_border_pane_g2

0x18f0,	// (0x00016d07) wait_border_pane_g3

0x0002,

0xf7fc,	// (0x00024c13) wait_border_pane_g

0x1747,	// (0x00016b5e) bg_popup_window_pane_cp16_ParamLimits

0x1747,	// (0x00016b5e) bg_popup_window_pane_cp16

0xaccd,	// (0x000200e4) indicator_popup_pane_cp4_ParamLimits

0xaccd,	// (0x000200e4) indicator_popup_pane_cp4

0x185b,	// (0x00016c72) popup_query_data_window_t1_ParamLimits

0x185b,	// (0x00016c72) popup_query_data_window_t1

0x186d,	// (0x00016c84) popup_query_data_window_t2_ParamLimits

0x186d,	// (0x00016c84) popup_query_data_window_t2

0x1886,	// (0x00016c9d) popup_query_data_window_t3_ParamLimits

0x1886,	// (0x00016c9d) popup_query_data_window_t3

0x0002,

0xf7f5,	// (0x00024c0c) popup_query_data_window_t_ParamLimits

0xf7f5,	// (0x00024c0c) popup_query_data_window_t

0xace1,	// (0x000200f8) query_popup_data_pane_ParamLimits

0xace1,	// (0x000200f8) query_popup_data_pane

0xacf5,	// (0x0002010c) query_popup_data_pane_cp1_ParamLimits

0xacf5,	// (0x0002010c) query_popup_data_pane_cp1

0x1747,	// (0x00016b5e) bg_popup_window_pane_cp10_ParamLimits

0x1747,	// (0x00016b5e) bg_popup_window_pane_cp10

0xac48,	// (0x0002005f) indicator_popup_pane_ParamLimits

0xac48,	// (0x0002005f) indicator_popup_pane

0xac6a,	// (0x00020081) popup_query_code_window_t1_ParamLimits

0xac6a,	// (0x00020081) popup_query_code_window_t1

0xac84,	// (0x0002009b) popup_query_code_window_t2_ParamLimits

0xac84,	// (0x0002009b) popup_query_code_window_t2

0x17fe,	// (0x00016c15) popup_query_code_window_t3_ParamLimits

0x17fe,	// (0x00016c15) popup_query_code_window_t3

0x0002,

0xf7ee,	// (0x00024c05) popup_query_code_window_t_ParamLimits

0xf7ee,	// (0x00024c05) popup_query_code_window_t

0x182d,	// (0x00016c44) query_popup_pane_ParamLimits

0x182d,	// (0x00016c44) query_popup_pane

0xc45f,	// (0x00021876) bg_popup_window_pane_cp15_ParamLimits

0xc45f,	// (0x00021876) bg_popup_window_pane_cp15

0x97e2,	// (0x0001ebf9) indicator_popup_pane_cp1_ParamLimits

0x97e2,	// (0x0001ebf9) indicator_popup_pane_cp1

0x97f5,	// (0x0001ec0c) indicator_popup_pane_cp2_ParamLimits

0x97f5,	// (0x0001ec0c) indicator_popup_pane_cp2

0x9808,	// (0x0001ec1f) popup_query_data_code_window_g1_ParamLimits

0x9808,	// (0x0001ec1f) popup_query_data_code_window_g1

0xc47d,	// (0x00021894) popup_query_data_code_window_t1_ParamLimits

0xc47d,	// (0x00021894) popup_query_data_code_window_t1

0xc48f,	// (0x000218a6) popup_query_data_code_window_t2_ParamLimits

0xc48f,	// (0x000218a6) popup_query_data_code_window_t2

0x981b,	// (0x0001ec32) popup_query_data_code_window_t3_ParamLimits

0x981b,	// (0x0001ec32) popup_query_data_code_window_t3

0x9831,	// (0x0001ec48) popup_query_data_code_window_t4_ParamLimits

0x9831,	// (0x0001ec48) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0002497c) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0002497c) popup_query_data_code_window_t

0xe8f4,	// (0x00023d0b) list_single_midp_graphic_pane_g3

0x9849,	// (0x0001ec60) query_popup_data_pane_cp2_ParamLimits

0x985c,	// (0x0001ec73) query_popup_pane_cp2_ParamLimits

0x985c,	// (0x0001ec73) query_popup_pane_cp2

0xc217,	// (0x0002162e) bg_popup_window_pane_cp11

0x172b,	// (0x00016b42) heading_pane_cp5

0x1733,	// (0x00016b4a) listscroll_popup_info_pane

0xc217,	// (0x0002162e) input_focus_pane_cp3

0xc4a1,	// (0x000218b8) query_popup_pane_t1

0xc4af,	// (0x000218c6) list_popup_info_pane_ParamLimits

0xc4af,	// (0x000218c6) list_popup_info_pane

0xc4be,	// (0x000218d5) listscroll_popup_info_pane_g1

0xc4c6,	// (0x000218dd) scroll_pane_cp7

0x986f,	// (0x0001ec86) popup_info_list_pane_t1_ParamLimits

0x986f,	// (0x0001ec86) popup_info_list_pane_t1

0x9889,	// (0x0001eca0) popup_info_list_pane_t2_ParamLimits

0x9889,	// (0x0001eca0) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00024985) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00024985) popup_info_list_pane_t

0xc217,	// (0x0002162e) bg_popup_window_pane_cp12

0xb43c,	// (0x00020853) find_popup_pane

0xc273,	// (0x0002168a) bg_popup_window_pane_cp3

0xc4d0,	// (0x000218e7) heading_pane_cp3

0xc4df,	// (0x000218f6) listscroll_popup_graphic_pane

0xc217,	// (0x0002162e) bg_popup_window_pane_cp4

0x98f3,	// (0x0001ed0a) heading_pane_cp4

0xc4ef,	// (0x00021906) listscroll_popup_colour_pane

0x98fd,	// (0x0001ed14) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x98fd,	// (0x0001ed14) cell_large_graphic_colour_none_popup_pane

0x9911,	// (0x0001ed28) grid_large_graphic_colour_popup_pane_ParamLimits

0x9911,	// (0x0001ed28) grid_large_graphic_colour_popup_pane

0x9935,	// (0x0001ed4c) listscroll_popup_colour_pane_g1_ParamLimits

0x9935,	// (0x0001ed4c) listscroll_popup_colour_pane_g1

0x994c,	// (0x0001ed63) listscroll_popup_colour_pane_g2_ParamLimits

0x994c,	// (0x0001ed63) listscroll_popup_colour_pane_g2

0x9963,	// (0x0001ed7a) listscroll_popup_colour_pane_g3_ParamLimits

0x9963,	// (0x0001ed7a) listscroll_popup_colour_pane_g3

0x9973,	// (0x0001ed8a) listscroll_popup_colour_pane_g4_ParamLimits

0x9973,	// (0x0001ed8a) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0002498a) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0002498a) listscroll_popup_colour_pane_g

0xc4f7,	// (0x0002190e) scroll_pane_cp6_ParamLimits

0xc4f7,	// (0x0002190e) scroll_pane_cp6

0x9983,	// (0x0001ed9a) cell_large_graphic_colour_popup_pane_ParamLimits

0x9983,	// (0x0001ed9a) cell_large_graphic_colour_popup_pane

0x99a2,	// (0x0001edb9) cell_large_graphic_colour_none_popup_pane_t1

0xc217,	// (0x0002162e) grid_highlight_pane_cp5

0xc509,	// (0x00021920) cell_large_graphic_colour_popup_pane_g1

0xc511,	// (0x00021928) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00024993) cell_large_graphic_colour_popup_pane_g

0xc519,	// (0x00021930) cell_large_graphic_colour_popup_pane_g2_copy1

0xc522,	// (0x00021939) grid_highlight_pane_cp4

0xc52a,	// (0x00021941) bg_popup_window_pane_cp8_ParamLimits

0xc52a,	// (0x00021941) bg_popup_window_pane_cp8

0x99b1,	// (0x0001edc8) popup_snote_single_text_window_g1_ParamLimits

0x99b1,	// (0x0001edc8) popup_snote_single_text_window_g1

0x99c3,	// (0x0001edda) popup_snote_single_text_window_t1_ParamLimits

0x99c3,	// (0x0001edda) popup_snote_single_text_window_t1

0x99d6,	// (0x0001eded) popup_snote_single_text_window_t2_ParamLimits

0x99d6,	// (0x0001eded) popup_snote_single_text_window_t2

0x99e9,	// (0x0001ee00) popup_snote_single_text_window_t3_ParamLimits

0x99e9,	// (0x0001ee00) popup_snote_single_text_window_t3

0x9a22,	// (0x0001ee39) popup_snote_single_text_window_t4_ParamLimits

0x9a22,	// (0x0001ee39) popup_snote_single_text_window_t4

0x9a56,	// (0x0001ee6d) popup_snote_single_text_window_t5_ParamLimits

0x9a56,	// (0x0001ee6d) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00024998) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00024998) popup_snote_single_text_window_t

0xc545,	// (0x0002195c) bg_popup_window_pane_cp9_ParamLimits

0xc545,	// (0x0002195c) bg_popup_window_pane_cp9

0x99b1,	// (0x0001edc8) popup_snote_single_graphic_window_g1_ParamLimits

0x99b1,	// (0x0001edc8) popup_snote_single_graphic_window_g1

0xc553,	// (0x0002196a) popup_snote_single_graphic_window_g2_ParamLimits

0xc553,	// (0x0002196a) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x000249a3) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x000249a3) popup_snote_single_graphic_window_g

0xc55f,	// (0x00021976) popup_snote_single_graphic_window_t1_ParamLimits

0xc55f,	// (0x00021976) popup_snote_single_graphic_window_t1

0xc572,	// (0x00021989) popup_snote_single_graphic_window_t2_ParamLimits

0xc572,	// (0x00021989) popup_snote_single_graphic_window_t2

0x99e9,	// (0x0001ee00) popup_snote_single_graphic_window_t3_ParamLimits

0x99e9,	// (0x0001ee00) popup_snote_single_graphic_window_t3

0x9a22,	// (0x0001ee39) popup_snote_single_graphic_window_t4_ParamLimits

0x9a22,	// (0x0001ee39) popup_snote_single_graphic_window_t4

0x9a85,	// (0x0001ee9c) popup_snote_single_graphic_window_t5_ParamLimits

0x9a85,	// (0x0001ee9c) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x000249a8) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x000249a8) popup_snote_single_graphic_window_t

0x2acd,	// (0x00017ee4) grid_graphic_popup_pane_ParamLimits

0x2acd,	// (0x00017ee4) grid_graphic_popup_pane

0x2af7,	// (0x00017f0e) listscroll_popup_graphic_pane_g1_ParamLimits

0x2af7,	// (0x00017f0e) listscroll_popup_graphic_pane_g1

0xb3da,	// (0x000207f1) listscroll_popup_graphic_pane_g2_ParamLimits

0xb3da,	// (0x000207f1) listscroll_popup_graphic_pane_g2

0x0001,

0xf96b,	// (0x00024d82) listscroll_popup_graphic_pane_g_ParamLimits

0xf96b,	// (0x00024d82) listscroll_popup_graphic_pane_g

0x2b1f,	// (0x00017f36) scroll_pane_cp5

0xb399,	// (0x000207b0) cell_graphic_popup_pane_ParamLimits

0xb399,	// (0x000207b0) cell_graphic_popup_pane

0x2a44,	// (0x00017e5b) cell_graphic_popup_pane_g1

0x2a4c,	// (0x00017e63) cell_graphic_popup_pane_g2

0xc519,	// (0x00021930) cell_graphic_popup_pane_g3

0x0002,

0xf964,	// (0x00024d7b) cell_graphic_popup_pane_g

0xb38b,	// (0x000207a2) cell_graphic_popup_pane_t2

0xc522,	// (0x00021939) grid_highlight_pane_cp3

0xc597,	// (0x000219ae) list_gen_pane_ParamLimits

0xc597,	// (0x000219ae) list_gen_pane

0xc5bf,	// (0x000219d6) scroll_pane

0xb2f5,	// (0x0002070c) bg_list_pane_g1_ParamLimits

0xb2f5,	// (0x0002070c) bg_list_pane_g1

0xb310,	// (0x00020727) bg_list_pane_g2_ParamLimits

0xb310,	// (0x00020727) bg_list_pane_g2

0xb323,	// (0x0002073a) bg_list_pane_g3_ParamLimits

0xb323,	// (0x0002073a) bg_list_pane_g3

0xb335,	// (0x0002074c) bg_list_pane_g4_ParamLimits

0xb335,	// (0x0002074c) bg_list_pane_g4

0xb347,	// (0x0002075e) bg_list_pane_g5_ParamLimits

0xb347,	// (0x0002075e) bg_list_pane_g5

0x0004,

0xf959,	// (0x00024d70) bg_list_pane_g_ParamLimits

0xf959,	// (0x00024d70) bg_list_pane_g

0xb298,	// (0x000206af) list_double2_graphic_large_graphic_pane_ParamLimits

0xb298,	// (0x000206af) list_double2_graphic_large_graphic_pane

0xb298,	// (0x000206af) list_double2_graphic_pane_ParamLimits

0xb298,	// (0x000206af) list_double2_graphic_pane

0xb298,	// (0x000206af) list_double2_large_graphic_pane_ParamLimits

0xb298,	// (0x000206af) list_double2_large_graphic_pane

0xb2ab,	// (0x000206c2) list_double2_pane_ParamLimits

0xb2ab,	// (0x000206c2) list_double2_pane

0xb298,	// (0x000206af) list_double_graphic_heading_pane_ParamLimits

0xb298,	// (0x000206af) list_double_graphic_heading_pane

0xb298,	// (0x000206af) list_double_graphic_pane_ParamLimits

0xb298,	// (0x000206af) list_double_graphic_pane

0xb298,	// (0x000206af) list_double_heading_pane_ParamLimits

0xb298,	// (0x000206af) list_double_heading_pane

0xb298,	// (0x000206af) list_double_large_graphic_pane_ParamLimits

0xb298,	// (0x000206af) list_double_large_graphic_pane

0xb298,	// (0x000206af) list_double_number_pane_ParamLimits

0xb298,	// (0x000206af) list_double_number_pane

0xb298,	// (0x000206af) list_double_pane_ParamLimits

0xb298,	// (0x000206af) list_double_pane

0xb298,	// (0x000206af) list_double_time_pane_ParamLimits

0xb298,	// (0x000206af) list_double_time_pane

0xb298,	// (0x000206af) list_setting_number_pane_ParamLimits

0xb298,	// (0x000206af) list_setting_number_pane

0xb298,	// (0x000206af) list_setting_pane_ParamLimits

0xb298,	// (0x000206af) list_setting_pane

0xa060,	// (0x0001f477) list_single_2graphic_pane_ParamLimits

0xa060,	// (0x0001f477) list_single_2graphic_pane

0xa060,	// (0x0001f477) list_single_graphic_heading_pane_ParamLimits

0xa060,	// (0x0001f477) list_single_graphic_heading_pane

0xa060,	// (0x0001f477) list_single_graphic_pane_ParamLimits

0xa060,	// (0x0001f477) list_single_graphic_pane

0xa060,	// (0x0001f477) list_single_heading_pane_ParamLimits

0xa060,	// (0x0001f477) list_single_heading_pane

0xb298,	// (0x000206af) list_single_large_graphic_pane_ParamLimits

0xb298,	// (0x000206af) list_single_large_graphic_pane

0xa060,	// (0x0001f477) list_single_number_heading_pane_ParamLimits

0xa060,	// (0x0001f477) list_single_number_heading_pane

0xa060,	// (0x0001f477) list_single_number_pane_ParamLimits

0xa060,	// (0x0001f477) list_single_number_pane

0xa060,	// (0x0001f477) list_single_pane_ParamLimits

0xa060,	// (0x0001f477) list_single_pane

0xc217,	// (0x0002162e) list_highlight_pane_cp1

0xc5f3,	// (0x00021a0a) list_single_pane_g1_ParamLimits

0xc5f3,	// (0x00021a0a) list_single_pane_g1

0x1159,	// (0x00016570) list_single_pane_g2_ParamLimits

0x1159,	// (0x00016570) list_single_pane_g2

0x0001,

0xf5a3,	// (0x000249ba) list_single_pane_g_ParamLimits

0xf5a3,	// (0x000249ba) list_single_pane_g

0x4769,	// (0x00019b80) list_single_pane_t1_ParamLimits

0x4769,	// (0x00019b80) list_single_pane_t1

0xc5f3,	// (0x00021a0a) list_single_number_pane_g1_ParamLimits

0xc5f3,	// (0x00021a0a) list_single_number_pane_g1

0x1159,	// (0x00016570) list_single_number_pane_g2_ParamLimits

0x1159,	// (0x00016570) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x000249ba) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x000249ba) list_single_number_pane_g

0x1165,	// (0x0001657c) list_single_number_pane_t1_ParamLimits

0x1165,	// (0x0001657c) list_single_number_pane_t1

0xb0a4,	// (0x000204bb) list_single_number_pane_t2_ParamLimits

0xb0a4,	// (0x000204bb) list_single_number_pane_t2

0x0001,

0xf91a,	// (0x00024d31) list_single_number_pane_t_ParamLimits

0xf91a,	// (0x00024d31) list_single_number_pane_t

0x114d,	// (0x00016564) list_single_graphic_pane_g1_ParamLimits

0x114d,	// (0x00016564) list_single_graphic_pane_g1

0xc5f3,	// (0x00021a0a) list_single_graphic_pane_g2_ParamLimits

0xc5f3,	// (0x00021a0a) list_single_graphic_pane_g2

0x1159,	// (0x00016570) list_single_graphic_pane_g3_ParamLimits

0x1159,	// (0x00016570) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x000249b3) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x000249b3) list_single_graphic_pane_g

0x1165,	// (0x0001657c) list_single_graphic_pane_t1_ParamLimits

0x1165,	// (0x0001657c) list_single_graphic_pane_t1

0xc5f3,	// (0x00021a0a) list_single_heading_pane_g1_ParamLimits

0xc5f3,	// (0x00021a0a) list_single_heading_pane_g1

0x1159,	// (0x00016570) list_single_heading_pane_g2_ParamLimits

0x1159,	// (0x00016570) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x000249ba) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x000249ba) list_single_heading_pane_g

0x9abe,	// (0x0001eed5) list_single_heading_pane_t1_ParamLimits

0x9abe,	// (0x0001eed5) list_single_heading_pane_t1

0x9ad4,	// (0x0001eeeb) list_single_heading_pane_t2_ParamLimits

0x9ad4,	// (0x0001eeeb) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x000249bf) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x000249bf) list_single_heading_pane_t

0xc5f3,	// (0x00021a0a) list_single_number_heading_pane_g1_ParamLimits

0xc5f3,	// (0x00021a0a) list_single_number_heading_pane_g1

0x1159,	// (0x00016570) list_single_number_heading_pane_g2_ParamLimits

0x1159,	// (0x00016570) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x000249ba) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x000249ba) list_single_number_heading_pane_g

0x9abe,	// (0x0001eed5) list_single_number_heading_pane_t1_ParamLimits

0x9abe,	// (0x0001eed5) list_single_number_heading_pane_t1

0x9ae6,	// (0x0001eefd) list_single_number_heading_pane_t2_ParamLimits

0x9ae6,	// (0x0001eefd) list_single_number_heading_pane_t2

0x9af8,	// (0x0001ef0f) list_single_number_heading_pane_t3_ParamLimits

0x9af8,	// (0x0001ef0f) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x000249c4) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x000249c4) list_single_number_heading_pane_t

0x9b0a,	// (0x0001ef21) list_single_graphic_heading_pane_g1_ParamLimits

0x9b0a,	// (0x0001ef21) list_single_graphic_heading_pane_g1

0x9b16,	// (0x0001ef2d) list_single_graphic_heading_pane_g4_ParamLimits

0x9b16,	// (0x0001ef2d) list_single_graphic_heading_pane_g4

0x1159,	// (0x00016570) list_single_graphic_heading_pane_g5_ParamLimits

0x1159,	// (0x00016570) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x000249cb) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x000249cb) list_single_graphic_heading_pane_g

0x9abe,	// (0x0001eed5) list_single_graphic_heading_pane_t1_ParamLimits

0x9abe,	// (0x0001eed5) list_single_graphic_heading_pane_t1

0x9b27,	// (0x0001ef3e) list_single_graphic_heading_pane_t2_ParamLimits

0x9b27,	// (0x0001ef3e) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x000249d2) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x000249d2) list_single_graphic_heading_pane_t

0x3192,	// (0x000185a9) list_single_large_graphic_pane_g1_ParamLimits

0x3192,	// (0x000185a9) list_single_large_graphic_pane_g1

0x319e,	// (0x000185b5) list_single_large_graphic_pane_g2_ParamLimits

0x319e,	// (0x000185b5) list_single_large_graphic_pane_g2

0x31aa,	// (0x000185c1) list_single_large_graphic_pane_g3_ParamLimits

0x31aa,	// (0x000185c1) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x000249d7) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x000249d7) list_single_large_graphic_pane_g

0x18e7,	// (0x00016cfe) wait_border_pane_g2_copy1

0x9b39,	// (0x0001ef50) list_single_large_graphic_pane_g4_cp2

0x31b6,	// (0x000185cd) list_single_large_graphic_pane_t1_ParamLimits

0x31b6,	// (0x000185cd) list_single_large_graphic_pane_t1

0xc5ff,	// (0x00021a16) list_double_pane_g1_ParamLimits

0xc5ff,	// (0x00021a16) list_double_pane_g1

0xc60b,	// (0x00021a22) list_double_pane_g2_ParamLimits

0xc60b,	// (0x00021a22) list_double_pane_g2

0x0001,

0xf5c7,	// (0x000249de) list_double_pane_g_ParamLimits

0xf5c7,	// (0x000249de) list_double_pane_g

0x9b41,	// (0x0001ef58) list_double_pane_t1_ParamLimits

0x9b41,	// (0x0001ef58) list_double_pane_t1

0x9b57,	// (0x0001ef6e) list_double_pane_t2_ParamLimits

0x9b57,	// (0x0001ef6e) list_double_pane_t2

0x0001,

0xf5cc,	// (0x000249e3) list_double_pane_t_ParamLimits

0xf5cc,	// (0x000249e3) list_double_pane_t

0x9b69,	// (0x0001ef80) list_double2_pane_g1_ParamLimits

0x9b69,	// (0x0001ef80) list_double2_pane_g1

0x9b7a,	// (0x0001ef91) list_double2_pane_g2_ParamLimits

0x9b7a,	// (0x0001ef91) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x000249e8) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x000249e8) list_double2_pane_g

0x9b86,	// (0x0001ef9d) list_double2_pane_t1_ParamLimits

0x9b86,	// (0x0001ef9d) list_double2_pane_t1

0x9b9c,	// (0x0001efb3) list_double2_pane_t2_ParamLimits

0x9b9c,	// (0x0001efb3) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x000249ed) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x000249ed) list_double2_pane_t

0xc5ff,	// (0x00021a16) list_double_number_pane_g1_ParamLimits

0xc5ff,	// (0x00021a16) list_double_number_pane_g1

0xc60b,	// (0x00021a22) list_double_number_pane_g2_ParamLimits

0xc60b,	// (0x00021a22) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x000249de) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x000249de) list_double_number_pane_g

0x9bae,	// (0x0001efc5) list_double_number_pane_t1_ParamLimits

0x9bae,	// (0x0001efc5) list_double_number_pane_t1

0x9bc0,	// (0x0001efd7) list_double_number_pane_t2_ParamLimits

0x9bc0,	// (0x0001efd7) list_double_number_pane_t2

0x9bd6,	// (0x0001efed) list_double_number_pane_t3_ParamLimits

0x9bd6,	// (0x0001efed) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x000249f2) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x000249f2) list_double_number_pane_t

0x9be8,	// (0x0001efff) list_double_graphic_pane_g1_ParamLimits

0x9be8,	// (0x0001efff) list_double_graphic_pane_g1

0x9bf4,	// (0x0001f00b) list_double_graphic_pane_g2_ParamLimits

0x9bf4,	// (0x0001f00b) list_double_graphic_pane_g2

0x9c03,	// (0x0001f01a) list_double_graphic_pane_g3_ParamLimits

0x9c03,	// (0x0001f01a) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x000249f9) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x000249f9) list_double_graphic_pane_g

0x9b41,	// (0x0001ef58) list_double_graphic_pane_t1_ParamLimits

0x9b41,	// (0x0001ef58) list_double_graphic_pane_t1

0x9b57,	// (0x0001ef6e) list_double_graphic_pane_t2_ParamLimits

0x9b57,	// (0x0001ef6e) list_double_graphic_pane_t2

0x0001,

0xf5cc,	// (0x000249e3) list_double_graphic_pane_t_ParamLimits

0xf5cc,	// (0x000249e3) list_double_graphic_pane_t

0x9c1b,	// (0x0001f032) list_double2_graphic_pane_g1_ParamLimits

0x9c1b,	// (0x0001f032) list_double2_graphic_pane_g1

0x9c27,	// (0x0001f03e) list_double2_graphic_pane_g2_ParamLimits

0x9c27,	// (0x0001f03e) list_double2_graphic_pane_g2

0x9c33,	// (0x0001f04a) list_double2_graphic_pane_g3_ParamLimits

0x9c33,	// (0x0001f04a) list_double2_graphic_pane_g3

0x0002,

0xf5eb,	// (0x00024a02) list_double2_graphic_pane_g_ParamLimits

0xf5eb,	// (0x00024a02) list_double2_graphic_pane_g

0x9c3f,	// (0x0001f056) list_double2_graphic_pane_t1_ParamLimits

0x9c3f,	// (0x0001f056) list_double2_graphic_pane_t1

0x9c55,	// (0x0001f06c) list_double2_graphic_pane_t2_ParamLimits

0x9c55,	// (0x0001f06c) list_double2_graphic_pane_t2

0x0001,

0xf5f2,	// (0x00024a09) list_double2_graphic_pane_t_ParamLimits

0xf5f2,	// (0x00024a09) list_double2_graphic_pane_t

0x9c67,	// (0x0001f07e) list_double_large_graphic_pane_g1_ParamLimits

0x9c67,	// (0x0001f07e) list_double_large_graphic_pane_g1

0x9c86,	// (0x0001f09d) list_double_large_graphic_pane_g2_ParamLimits

0x9c86,	// (0x0001f09d) list_double_large_graphic_pane_g2

0xc60b,	// (0x00021a22) list_double_large_graphic_pane_g3_ParamLimits

0xc60b,	// (0x00021a22) list_double_large_graphic_pane_g3

0x9c97,	// (0x0001f0ae) list_double_large_graphic_pane_g4_ParamLimits

0x9c97,	// (0x0001f0ae) list_double_large_graphic_pane_g4

0x0004,

0xf5f7,	// (0x00024a0e) list_double_large_graphic_pane_g_ParamLimits

0xf5f7,	// (0x00024a0e) list_double_large_graphic_pane_g

0x9ca9,	// (0x0001f0c0) list_double_large_graphic_pane_t1_ParamLimits

0x9ca9,	// (0x0001f0c0) list_double_large_graphic_pane_t1

0x9cc2,	// (0x0001f0d9) list_double_large_graphic_pane_t2_ParamLimits

0x9cc2,	// (0x0001f0d9) list_double_large_graphic_pane_t2

0x0001,

0xf602,	// (0x00024a19) list_double_large_graphic_pane_t_ParamLimits

0xf602,	// (0x00024a19) list_double_large_graphic_pane_t

0x9cd4,	// (0x0001f0eb) list_double2_large_graphic_pane_g1_ParamLimits

0x9cd4,	// (0x0001f0eb) list_double2_large_graphic_pane_g1

0x9ce0,	// (0x0001f0f7) list_double2_large_graphic_pane_g2_ParamLimits

0x9ce0,	// (0x0001f0f7) list_double2_large_graphic_pane_g2

0x9c33,	// (0x0001f04a) list_double2_large_graphic_pane_g3_ParamLimits

0x9c33,	// (0x0001f04a) list_double2_large_graphic_pane_g3

0x0002,

0xf607,	// (0x00024a1e) list_double2_large_graphic_pane_g_ParamLimits

0xf607,	// (0x00024a1e) list_double2_large_graphic_pane_g

0x9c3f,	// (0x0001f056) list_double2_large_graphic_pane_t1_ParamLimits

0x9c3f,	// (0x0001f056) list_double2_large_graphic_pane_t1

0x9c55,	// (0x0001f06c) list_double2_large_graphic_pane_t2_ParamLimits

0x9c55,	// (0x0001f06c) list_double2_large_graphic_pane_t2

0x0001,

0xf5f2,	// (0x00024a09) list_double2_large_graphic_pane_t_ParamLimits

0xf5f2,	// (0x00024a09) list_double2_large_graphic_pane_t

0x9cf1,	// (0x0001f108) list_double_heading_pane_g1_ParamLimits

0x9cf1,	// (0x0001f108) list_double_heading_pane_g1

0x9d02,	// (0x0001f119) list_double_heading_pane_g2_ParamLimits

0x9d02,	// (0x0001f119) list_double_heading_pane_g2

0x0001,

0xf60e,	// (0x00024a25) list_double_heading_pane_g_ParamLimits

0xf60e,	// (0x00024a25) list_double_heading_pane_g

0x9d0e,	// (0x0001f125) list_double_heading_pane_t1_ParamLimits

0x9d0e,	// (0x0001f125) list_double_heading_pane_t1

0x9c55,	// (0x0001f06c) list_double_heading_pane_t2_ParamLimits

0x9c55,	// (0x0001f06c) list_double_heading_pane_t2

0x0001,

0xf613,	// (0x00024a2a) list_double_heading_pane_t_ParamLimits

0xf613,	// (0x00024a2a) list_double_heading_pane_t

0x9d24,	// (0x0001f13b) list_double_graphic_heading_pane_g1_ParamLimits

0x9d24,	// (0x0001f13b) list_double_graphic_heading_pane_g1

0x9cf1,	// (0x0001f108) list_double_graphic_heading_pane_g2_ParamLimits

0x9cf1,	// (0x0001f108) list_double_graphic_heading_pane_g2

0x9d02,	// (0x0001f119) list_double_graphic_heading_pane_g3_ParamLimits

0x9d02,	// (0x0001f119) list_double_graphic_heading_pane_g3

0x0002,

0xf618,	// (0x00024a2f) list_double_graphic_heading_pane_g_ParamLimits

0xf618,	// (0x00024a2f) list_double_graphic_heading_pane_g

0x9d0e,	// (0x0001f125) list_double_graphic_heading_pane_t1_ParamLimits

0x9d0e,	// (0x0001f125) list_double_graphic_heading_pane_t1

0x9c55,	// (0x0001f06c) list_double_graphic_heading_pane_t2_ParamLimits

0x9c55,	// (0x0001f06c) list_double_graphic_heading_pane_t2

0x0001,

0xf613,	// (0x00024a2a) list_double_graphic_heading_pane_t_ParamLimits

0xf613,	// (0x00024a2a) list_double_graphic_heading_pane_t

0x9c86,	// (0x0001f09d) list_double_time_pane_g1_ParamLimits

0x9c86,	// (0x0001f09d) list_double_time_pane_g1

0xc60b,	// (0x00021a22) list_double_time_pane_g2_ParamLimits

0xc60b,	// (0x00021a22) list_double_time_pane_g2

0x0001,

0xf61f,	// (0x00024a36) list_double_time_pane_g_ParamLimits

0xf61f,	// (0x00024a36) list_double_time_pane_g

0x9d30,	// (0x0001f147) list_double_time_pane_t1_ParamLimits

0x9d30,	// (0x0001f147) list_double_time_pane_t1

0x9d46,	// (0x0001f15d) list_double_time_pane_t2_ParamLimits

0x9d46,	// (0x0001f15d) list_double_time_pane_t2

0x9d58,	// (0x0001f16f) list_double_time_pane_t3_ParamLimits

0x9d58,	// (0x0001f16f) list_double_time_pane_t3

0x9d6a,	// (0x0001f181) list_double_time_pane_t4_ParamLimits

0x9d6a,	// (0x0001f181) list_double_time_pane_t4

0x0003,

0xf624,	// (0x00024a3b) list_double_time_pane_t_ParamLimits

0xf624,	// (0x00024a3b) list_double_time_pane_t

0x9c27,	// (0x0001f03e) list_setting_pane_g1_ParamLimits

0x9c27,	// (0x0001f03e) list_setting_pane_g1

0x9c33,	// (0x0001f04a) list_setting_pane_g2_ParamLimits

0x9c33,	// (0x0001f04a) list_setting_pane_g2

0x0001,

0xf62d,	// (0x00024a44) list_setting_pane_g_ParamLimits

0xf62d,	// (0x00024a44) list_setting_pane_g

0x9d7c,	// (0x0001f193) list_setting_pane_t1_ParamLimits

0x9d7c,	// (0x0001f193) list_setting_pane_t1

0x9d93,	// (0x0001f1aa) list_setting_pane_t2_ParamLimits

0x9d93,	// (0x0001f1aa) list_setting_pane_t2

0x0002,

0xf632,	// (0x00024a49) list_setting_pane_t_ParamLimits

0xf632,	// (0x00024a49) list_setting_pane_t

0x9dd2,	// (0x0001f1e9) set_value_pane_cp_ParamLimits

0x9dd2,	// (0x0001f1e9) set_value_pane_cp

0x9c27,	// (0x0001f03e) list_setting_number_pane_g1_ParamLimits

0x9c27,	// (0x0001f03e) list_setting_number_pane_g1

0x9c33,	// (0x0001f04a) list_setting_number_pane_g2_ParamLimits

0x9c33,	// (0x0001f04a) list_setting_number_pane_g2

0x0001,

0xf62d,	// (0x00024a44) list_setting_number_pane_g_ParamLimits

0xf62d,	// (0x00024a44) list_setting_number_pane_g

0x9dde,	// (0x0001f1f5) list_setting_number_pane_t1_ParamLimits

0x9dde,	// (0x0001f1f5) list_setting_number_pane_t1

0x9df2,	// (0x0001f209) list_setting_number_pane_t2_ParamLimits

0x9df2,	// (0x0001f209) list_setting_number_pane_t2

0x9e09,	// (0x0001f220) list_setting_number_pane_t3_ParamLimits

0x9e09,	// (0x0001f220) list_setting_number_pane_t3

0x0003,

0xf639,	// (0x00024a50) list_setting_number_pane_t_ParamLimits

0xf639,	// (0x00024a50) list_setting_number_pane_t

0x9dd2,	// (0x0001f1e9) set_value_pane_ParamLimits

0x9dd2,	// (0x0001f1e9) set_value_pane

0xc62c,	// (0x00021a43) bg_set_opt_pane_ParamLimits

0xc62c,	// (0x00021a43) bg_set_opt_pane

0xc64d,	// (0x00021a64) set_value_pane_t1

0xc65b,	// (0x00021a72) slider_set_pane_cp3

0x9e4c,	// (0x0001f263) volume_small_pane_cp

0xc664,	// (0x00021a7b) list_form_gen_pane

0xc66d,	// (0x00021a84) scroll_pane_cp8

0x9e55,	// (0x0001f26c) form_field_data_pane_ParamLimits

0x9e55,	// (0x0001f26c) form_field_data_pane

0x9e6c,	// (0x0001f283) form_field_data_wide_pane_ParamLimits

0x9e6c,	// (0x0001f283) form_field_data_wide_pane

0x9e8c,	// (0x0001f2a3) form_field_popup_pane_ParamLimits

0x9e8c,	// (0x0001f2a3) form_field_popup_pane

0x9eac,	// (0x0001f2c3) form_field_popup_wide_pane_ParamLimits

0x9eac,	// (0x0001f2c3) form_field_popup_wide_pane

0xc68e,	// (0x00021aa5) form_field_slider_pane_ParamLimits

0xc68e,	// (0x00021aa5) form_field_slider_pane

0x9ec3,	// (0x0001f2da) form_field_slider_wide_pane_ParamLimits

0x9ec3,	// (0x0001f2da) form_field_slider_wide_pane

0xc6a1,	// (0x00021ab8) data_form_pane

0x9ee0,	// (0x0001f2f7) form_field_data_pane_t1

0xc6ad,	// (0x00021ac4) input_focus_pane

0xc6bb,	// (0x00021ad2) data_form_wide_pane

0xc6f8,	// (0x00021b0f) form_field_data_wide_pane_t1

0xc537,	// (0x0002194e) input_focus_pane_cp6

0x9efa,	// (0x0001f311) form_field_popup_pane_t1

0xc6ad,	// (0x00021ac4) input_focus_pane_cp7

0xc71a,	// (0x00021b31) list_form_pane

0xc72e,	// (0x00021b45) form_field_popup_wide_pane_t1

0xc6ad,	// (0x00021ac4) input_focus_pane_cp8

0xc743,	// (0x00021b5a) list_form_wide_pane

0x9f1c,	// (0x0001f333) form_field_slider_pane_t1_ParamLimits

0x9f1c,	// (0x0001f333) form_field_slider_pane_t1

0x9f34,	// (0x0001f34b) form_field_slider_pane_t2_ParamLimits

0x9f34,	// (0x0001f34b) form_field_slider_pane_t2

0x0001,

0xf649,	// (0x00024a60) form_field_slider_pane_t_ParamLimits

0xf649,	// (0x00024a60) form_field_slider_pane_t

0xc265,	// (0x0002167c) input_focus_pane_cp9_ParamLimits

0xc265,	// (0x0002167c) input_focus_pane_cp9

0x9f49,	// (0x0001f360) slider_cont_pane_ParamLimits

0x9f49,	// (0x0001f360) slider_cont_pane

0xc74f,	// (0x00021b66) form_field_slider_wide_pane_t1_ParamLimits

0xc74f,	// (0x00021b66) form_field_slider_wide_pane_t1

0xc761,	// (0x00021b78) form_field_slider_wide_pane_t2_ParamLimits

0xc761,	// (0x00021b78) form_field_slider_wide_pane_t2

0x0001,

0xf64e,	// (0x00024a65) form_field_slider_wide_pane_t_ParamLimits

0xf64e,	// (0x00024a65) form_field_slider_wide_pane_t

0xc265,	// (0x0002167c) input_focus_pane_cp10_ParamLimits

0xc265,	// (0x0002167c) input_focus_pane_cp10

0x9f5d,	// (0x0001f374) slider_cont_pane_cp1_ParamLimits

0x9f5d,	// (0x0001f374) slider_cont_pane_cp1

0x9f71,	// (0x0001f388) slider_form_pane_cp

0xc773,	// (0x00021b8a) input_focus_pane_g1

0xc77b,	// (0x00021b92) input_focus_pane_g2

0xc783,	// (0x00021b9a) input_focus_pane_g3

0xc78b,	// (0x00021ba2) input_focus_pane_g4

0xc793,	// (0x00021baa) input_focus_pane_g5

0xc79b,	// (0x00021bb2) input_focus_pane_g6

0xc7a3,	// (0x00021bba) input_focus_pane_g7

0xc7ab,	// (0x00021bc2) input_focus_pane_g8

0xc7b3,	// (0x00021bca) input_focus_pane_g9

0xc20d,	// (0x00021624) input_focus_pane_g10

0x0009,

0xf653,	// (0x00024a6a) input_focus_pane_g

0x18f0,	// (0x00016d07) wait_border_pane_g3_copy1

0x9f79,	// (0x0001f390) data_form_pane_t1

0xc20d,	// (0x00021624) wait_anim_pane_g1_copy1

0xb27c,	// (0x00020693) data_form_wide_pane_t1

0x9f93,	// (0x0001f3aa) list_form_graphic_pane_cp_ParamLimits

0x9f93,	// (0x0001f3aa) list_form_graphic_pane_cp

0x27f1,	// (0x00017c08) slider_form_pane_g1

0x27fa,	// (0x00017c11) slider_form_pane_g2

0x0006,

0xf94a,	// (0x00024d61) slider_form_pane_g

0x9fa5,	// (0x0001f3bc) list_form_graphic_pane_ParamLimits

0x9fa5,	// (0x0001f3bc) list_form_graphic_pane

0x9fb8,	// (0x0001f3cf) list_form_graphic_pane_g1

0x9fc0,	// (0x0001f3d7) list_form_graphic_pane_t1_ParamLimits

0x9fc0,	// (0x0001f3d7) list_form_graphic_pane_t1

0xc273,	// (0x0002168a) list_highlight_pane_cp5_ParamLimits

0xc273,	// (0x0002168a) list_highlight_pane_cp5

0x9fd5,	// (0x0001f3ec) find_pane_g1

0xc7bb,	// (0x00021bd2) input_find_pane

0x9fde,	// (0x0001f3f5) input_find_pane_g1_ParamLimits

0x9fde,	// (0x0001f3f5) input_find_pane_g1

0x9fea,	// (0x0001f401) input_find_pane_t1_ParamLimits

0x9fea,	// (0x0001f401) input_find_pane_t1

0x9fff,	// (0x0001f416) input_find_pane_t2_ParamLimits

0x9fff,	// (0x0001f416) input_find_pane_t2

0x0001,

0xf668,	// (0x00024a7f) input_find_pane_t_ParamLimits

0xf668,	// (0x00024a7f) input_find_pane_t

0xc7c4,	// (0x00021bdb) input_focus_pane_cp5_ParamLimits

0xc7c4,	// (0x00021bdb) input_focus_pane_cp5

0xc7d7,	// (0x00021bee) bg_popup_window_pane_cp2_ParamLimits

0xc7d7,	// (0x00021bee) bg_popup_window_pane_cp2

0xc7e4,	// (0x00021bfb) listscroll_menu_pane_ParamLimits

0xc7e4,	// (0x00021bfb) listscroll_menu_pane

0xa020,	// (0x0001f437) popup_submenu_window_ParamLimits

0xa020,	// (0x0001f437) popup_submenu_window

0xc7f0,	// (0x00021c07) find_popup_pane_g1

0xa048,	// (0x0001f45f) input_popup_find_pane_cp

0xc7f8,	// (0x00021c0f) input_focus_pane_cp4_ParamLimits

0xc7f8,	// (0x00021c0f) input_focus_pane_cp4

0xc806,	// (0x00021c1d) input_popup_find_pane_t1_ParamLimits

0xc806,	// (0x00021c1d) input_popup_find_pane_t1

0xc217,	// (0x0002162e) bg_popup_sub_pane_cp

0xc834,	// (0x00021c4b) listscroll_popup_sub_pane

0xc83c,	// (0x00021c53) list_submenu_pane_ParamLimits

0xc83c,	// (0x00021c53) list_submenu_pane

0xc84d,	// (0x00021c64) scroll_pane_cp4

0xa060,	// (0x0001f477) list_single_popup_submenu_pane_ParamLimits

0xa060,	// (0x0001f477) list_single_popup_submenu_pane

0xa074,	// (0x0001f48b) list_single_popup_submenu_pane_g1

0xa07c,	// (0x0001f493) list_single_popup_submenu_pane_t1_ParamLimits

0xa07c,	// (0x0001f493) list_single_popup_submenu_pane_t1

0xc265,	// (0x0002167c) bg_active_tab_pane_cp1_ParamLimits

0xc265,	// (0x0002167c) bg_active_tab_pane_cp1

0xc855,	// (0x00021c6c) tabs_2_active_pane_g1

0xa091,	// (0x0001f4a8) tabs_2_active_pane_t1

0xc265,	// (0x0002167c) bg_passive_tab_pane_cp1_ParamLimits

0xc265,	// (0x0002167c) bg_passive_tab_pane_cp1

0xc855,	// (0x00021c6c) tabs_2_passive_pane_g1

0xa091,	// (0x0001f4a8) tabs_2_passive_pane_t1

0xc273,	// (0x0002168a) bg_active_tab_pane_cp4

0xa0a3,	// (0x0001f4ba) tabs_2_long_active_pane_t1

0xc85d,	// (0x00021c74) bg_passive_tab_pane_cp4

0xe8fc,	// (0x00023d13) list_single_midp_graphic_pane_g4_ParamLimits

0xc273,	// (0x0002168a) bg_active_tab_pane_cp5

0xa0b6,	// (0x0001f4cd) tabs_3_long_active_pane_t1

0xc85d,	// (0x00021c74) bg_passive_tab_pane_cp5

0xe8fc,	// (0x00023d13) list_single_midp_graphic_pane_g4

0xc273,	// (0x0002168a) bg_popup_window_pane_cp13_ParamLimits

0xc273,	// (0x0002168a) bg_popup_window_pane_cp13

0xc869,	// (0x00021c80) listscroll_popup_fast_pane_ParamLimits

0xc869,	// (0x00021c80) listscroll_popup_fast_pane

0xc875,	// (0x00021c8c) grid_popup_fast_pane_ParamLimits

0xc875,	// (0x00021c8c) grid_popup_fast_pane

0xc887,	// (0x00021c9e) scroll_pane_cp9_ParamLimits

0xc887,	// (0x00021c9e) scroll_pane_cp9

0x4769,	// (0x00019b80) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4769,	// (0x00019b80) list_single_graphic_hl_pane_t1_cp2

0xc89a,	// (0x00021cb1) input_focus_pane_cp20_ParamLimits

0xc89a,	// (0x00021cb1) input_focus_pane_cp20

0xc8a8,	// (0x00021cbf) query_popup_data_pane_t1_ParamLimits

0xc8a8,	// (0x00021cbf) query_popup_data_pane_t1

0xc8bb,	// (0x00021cd2) query_popup_data_pane_t2_ParamLimits

0xc8bb,	// (0x00021cd2) query_popup_data_pane_t2

0xc901,	// (0x00021d18) query_popup_data_pane_t3_ParamLimits

0xc901,	// (0x00021d18) query_popup_data_pane_t3

0xc942,	// (0x00021d59) query_popup_data_pane_t4_ParamLimits

0xc942,	// (0x00021d59) query_popup_data_pane_t4

0xc97e,	// (0x00021d95) query_popup_data_pane_t5_ParamLimits

0xc97e,	// (0x00021d95) query_popup_data_pane_t5

0x0004,

0xf66d,	// (0x00024a84) query_popup_data_pane_t_ParamLimits

0xf66d,	// (0x00024a84) query_popup_data_pane_t

0xc773,	// (0x00021b8a) bg_set_opt_pane_g1

0xc77b,	// (0x00021b92) bg_set_opt_pane_g2

0xc783,	// (0x00021b9a) bg_set_opt_pane_g3

0xc78b,	// (0x00021ba2) bg_set_opt_pane_g4

0xc793,	// (0x00021baa) bg_set_opt_pane_g5

0xc79b,	// (0x00021bb2) bg_set_opt_pane_g6

0xc7a3,	// (0x00021bba) bg_set_opt_pane_g7

0xc7ab,	// (0x00021bc2) bg_set_opt_pane_g8

0xc7b3,	// (0x00021bca) bg_set_opt_pane_g9

0x0008,

0xf678,	// (0x00024a8f) bg_set_opt_pane_g

0xe5bb,	// (0x000239d2) control_top_pane_stacon_ParamLimits

0xe5bb,	// (0x000239d2) control_top_pane_stacon

0xe60e,	// (0x00023a25) signal_pane_stacon_ParamLimits

0xe60e,	// (0x00023a25) signal_pane_stacon

0xcd0a,	// (0x00022121) stacon_top_pane_g1_ParamLimits

0xcd0a,	// (0x00022121) stacon_top_pane_g1

0xe633,	// (0x00023a4a) title_pane_stacon_ParamLimits

0xe633,	// (0x00023a4a) title_pane_stacon

0xe65d,	// (0x00023a74) uni_indicator_pane_stacon_ParamLimits

0xe65d,	// (0x00023a74) uni_indicator_pane_stacon

0xe672,	// (0x00023a89) battery_pane_stacon_ParamLimits

0xe672,	// (0x00023a89) battery_pane_stacon

0xe6b6,	// (0x00023acd) control_bottom_pane_stacon_ParamLimits

0xe6b6,	// (0x00023acd) control_bottom_pane_stacon

0xe6d9,	// (0x00023af0) navi_pane_stacon_ParamLimits

0xe6d9,	// (0x00023af0) navi_pane_stacon

0xcd2c,	// (0x00022143) stacon_bottom_pane_g1_ParamLimits

0xcd2c,	// (0x00022143) stacon_bottom_pane_g1

0xe37e,	// (0x00023795) aid_levels_signal_lsc_ParamLimits

0xe37e,	// (0x00023795) aid_levels_signal_lsc

0xe394,	// (0x000237ab) signal_pane_stacon_g1_ParamLimits

0xe394,	// (0x000237ab) signal_pane_stacon_g1

0xe3a8,	// (0x000237bf) signal_pane_stacon_g2_ParamLimits

0xe3a8,	// (0x000237bf) signal_pane_stacon_g2

0x0001,

0xf68b,	// (0x00024aa2) signal_pane_stacon_g_ParamLimits

0xf68b,	// (0x00024aa2) signal_pane_stacon_g

0xe3dd,	// (0x000237f4) title_pane_stacon_t1_ParamLimits

0xe3dd,	// (0x000237f4) title_pane_stacon_t1

0xc9c2,	// (0x00021dd9) uni_indicator_pane_stacon_g1

0xc9cc,	// (0x00021de3) uni_indicator_pane_stacon_g2

0xc9d6,	// (0x00021ded) uni_indicator_pane_stacon_g3

0xc9e0,	// (0x00021df7) uni_indicator_pane_stacon_g4

0x0003,

0xf697,	// (0x00024aae) uni_indicator_pane_stacon_g

0xe402,	// (0x00023819) control_top_pane_stacon_g1

0xe40a,	// (0x00023821) control_top_pane_stacon_t1_ParamLimits

0xe40a,	// (0x00023821) control_top_pane_stacon_t1

0xe441,	// (0x00023858) aid_levels_battery_lsc_ParamLimits

0xe441,	// (0x00023858) aid_levels_battery_lsc

0xe458,	// (0x0002386f) battery_pane_stacon_g1_ParamLimits

0xe458,	// (0x0002386f) battery_pane_stacon_g1

0xe46b,	// (0x00023882) battery_pane_stacon_g2_ParamLimits

0xe46b,	// (0x00023882) battery_pane_stacon_g2

0x0001,

0xf6a0,	// (0x00024ab7) battery_pane_stacon_g_ParamLimits

0xf6a0,	// (0x00024ab7) battery_pane_stacon_g

0xe4a9,	// (0x000238c0) navi_icon_pane_stacon

0xe4bd,	// (0x000238d4) navi_navi_pane_stacon

0xe4a9,	// (0x000238c0) navi_text_pane_stacon

0xe402,	// (0x00023819) control_bottom_pane_stacon_g1

0xe4d1,	// (0x000238e8) control_bottom_pane_stacon_t1_ParamLimits

0xe4d1,	// (0x000238e8) control_bottom_pane_stacon_t1

0xa0e2,	// (0x0001f4f9) grid_app_pane_ParamLimits

0xa0e2,	// (0x0001f4f9) grid_app_pane

0xa11a,	// (0x0001f531) scroll_pane_cp15_ParamLimits

0xa11a,	// (0x0001f531) scroll_pane_cp15

0xa12f,	// (0x0001f546) cell_app_pane_ParamLimits

0xa12f,	// (0x0001f546) cell_app_pane

0xa174,	// (0x0001f58b) cell_app_pane_g1_ParamLimits

0xa174,	// (0x0001f58b) cell_app_pane_g1

0xca04,	// (0x00021e1b) cell_app_pane_g2_ParamLimits

0xca04,	// (0x00021e1b) cell_app_pane_g2

0x0001,

0xf6a5,	// (0x00024abc) cell_app_pane_g_ParamLimits

0xf6a5,	// (0x00024abc) cell_app_pane_g

0xa198,	// (0x0001f5af) cell_app_pane_t1_ParamLimits

0xa198,	// (0x0001f5af) cell_app_pane_t1

0xca10,	// (0x00021e27) grid_highlight_pane_ParamLimits

0xca10,	// (0x00021e27) grid_highlight_pane

0xc773,	// (0x00021b8a) cell_highlight_pane_g1

0xc77b,	// (0x00021b92) cell_highlight_pane_g2

0xc783,	// (0x00021b9a) cell_highlight_pane_g3

0xc78b,	// (0x00021ba2) cell_highlight_pane_g4

0xc793,	// (0x00021baa) cell_highlight_pane_g5

0xc79b,	// (0x00021bb2) cell_highlight_pane_g6

0xc7a3,	// (0x00021bba) cell_highlight_pane_g7

0xc7ab,	// (0x00021bc2) cell_highlight_pane_g8

0xc7b3,	// (0x00021bca) cell_highlight_pane_g9

0xc20d,	// (0x00021624) cell_highlight_pane_g10

0x0009,

0xf653,	// (0x00024a6a) cell_highlight_pane_g

0xca21,	// (0x00021e38) bg_scroll_pane

0x824b,	// (0x0001d662) scroll_handle_pane

0xca68,	// (0x00021e7f) scroll_bg_pane_g1

0xca7d,	// (0x00021e94) scroll_bg_pane_g2

0xca95,	// (0x00021eac) scroll_bg_pane_g3

0x0002,

0xf6aa,	// (0x00024ac1) scroll_bg_pane_g

0xa1af,	// (0x0001f5c6) scroll_handle_focus_pane_ParamLimits

0xa1af,	// (0x0001f5c6) scroll_handle_focus_pane

0xca68,	// (0x00021e7f) scroll_handle_pane_g1

0xcaaa,	// (0x00021ec1) scroll_handle_pane_g2

0xca95,	// (0x00021eac) scroll_handle_pane_g3

0x0002,

0xf6b1,	// (0x00024ac8) scroll_handle_pane_g

0xc7f8,	// (0x00021c0f) bg_popup_sub_pane_cp21_ParamLimits

0xc7f8,	// (0x00021c0f) bg_popup_sub_pane_cp21

0xa1bc,	// (0x0001f5d3) popup_fep_japan_predictive_window_t1_ParamLimits

0xa1bc,	// (0x0001f5d3) popup_fep_japan_predictive_window_t1

0xa1d3,	// (0x0001f5ea) popup_fep_japan_predictive_window_t2_ParamLimits

0xa1d3,	// (0x0001f5ea) popup_fep_japan_predictive_window_t2

0xa206,	// (0x0001f61d) popup_fep_japan_predictive_window_t3_ParamLimits

0xa206,	// (0x0001f61d) popup_fep_japan_predictive_window_t3

0x0002,

0xf6b8,	// (0x00024acf) popup_fep_japan_predictive_window_t_ParamLimits

0xf6b8,	// (0x00024acf) popup_fep_japan_predictive_window_t

0xc217,	// (0x0002162e) bg_popup_sub_pane_cp23

0xa23d,	// (0x0001f654) listscroll_japin_cand_pane

0xcabe,	// (0x00021ed5) popup_fep_japan_candidate_window_t1

0xcacc,	// (0x00021ee3) candidate_pane_ParamLimits

0xcacc,	// (0x00021ee3) candidate_pane

0xa245,	// (0x0001f65c) scroll_pane_cp30

0xcade,	// (0x00021ef5) list_single_popup_jap_candidate_pane_ParamLimits

0xcade,	// (0x00021ef5) list_single_popup_jap_candidate_pane

0xc217,	// (0x0002162e) list_highlight_pane_cp30

0xcaf3,	// (0x00021f0a) list_single_popup_jap_candidate_pane_t1

0xcb02,	// (0x00021f19) level_1_signal

0xcb0f,	// (0x00021f26) level_2_signal

0xcb1c,	// (0x00021f33) level_3_signal

0xcb29,	// (0x00021f40) level_4_signal

0xcb36,	// (0x00021f4d) level_5_signal

0xcb43,	// (0x00021f5a) level_6_signal

0xcb50,	// (0x00021f67) level_7_signal

0xcb02,	// (0x00021f19) level_1_battery

0xcb0f,	// (0x00021f26) level_2_battery

0xcb1c,	// (0x00021f33) level_3_battery

0xcb29,	// (0x00021f40) level_4_battery

0xcb36,	// (0x00021f4d) level_5_battery

0xcb43,	// (0x00021f5a) level_6_battery

0xcb50,	// (0x00021f67) level_7_battery

0xcb75,	// (0x00021f8c) list_menu_pane_ParamLimits

0xcb75,	// (0x00021f8c) list_menu_pane

0xcb8b,	// (0x00021fa2) scroll_pane_cp25_ParamLimits

0xcb8b,	// (0x00021fa2) scroll_pane_cp25

0xa24d,	// (0x0001f664) list_double2_graphic_pane_cp2_ParamLimits

0xa24d,	// (0x0001f664) list_double2_graphic_pane_cp2

0xa24d,	// (0x0001f664) list_double2_large_graphic_pane_cp2_ParamLimits

0xa24d,	// (0x0001f664) list_double2_large_graphic_pane_cp2

0xa24d,	// (0x0001f664) list_double2_pane_cp2_ParamLimits

0xa24d,	// (0x0001f664) list_double2_pane_cp2

0xa24d,	// (0x0001f664) list_double_graphic_pane_cp2_ParamLimits

0xa24d,	// (0x0001f664) list_double_graphic_pane_cp2

0xa24d,	// (0x0001f664) list_double_large_graphic_pane_cp2_ParamLimits

0xa24d,	// (0x0001f664) list_double_large_graphic_pane_cp2

0xa24d,	// (0x0001f664) list_double_number_pane_cp2_ParamLimits

0xa24d,	// (0x0001f664) list_double_number_pane_cp2

0xa24d,	// (0x0001f664) list_double_pane_cp2_ParamLimits

0xa24d,	// (0x0001f664) list_double_pane_cp2

0xa25c,	// (0x0001f673) list_single_2graphic_pane_cp2_ParamLimits

0xa25c,	// (0x0001f673) list_single_2graphic_pane_cp2

0xa25c,	// (0x0001f673) list_single_graphic_heading_pane_cp2_ParamLimits

0xa25c,	// (0x0001f673) list_single_graphic_heading_pane_cp2

0xa25c,	// (0x0001f673) list_single_graphic_pane_cp2_ParamLimits

0xa25c,	// (0x0001f673) list_single_graphic_pane_cp2

0xa25c,	// (0x0001f673) list_single_heading_pane_cp2_ParamLimits

0xa25c,	// (0x0001f673) list_single_heading_pane_cp2

0xcbb4,	// (0x00021fcb) list_single_large_graphic_pane_cp2_ParamLimits

0xcbb4,	// (0x00021fcb) list_single_large_graphic_pane_cp2

0xa25c,	// (0x0001f673) list_single_number_heading_pane_cp2_ParamLimits

0xa25c,	// (0x0001f673) list_single_number_heading_pane_cp2

0xa25c,	// (0x0001f673) list_single_number_pane_cp2_ParamLimits

0xa25c,	// (0x0001f673) list_single_number_pane_cp2

0xa25c,	// (0x0001f673) list_single_pane_cp2_ParamLimits

0xa25c,	// (0x0001f673) list_single_pane_cp2

0xcbce,	// (0x00021fe5) bg_popup_sub_pane_cp22

0xe5a1,	// (0x000239b8) popup_side_volume_key_window_g1

0xe5ad,	// (0x000239c4) popup_side_volume_key_window_t1

0x829a,	// (0x0001d6b1) volume_small_pane_cp1

0xc265,	// (0x0002167c) bg_popup_sub_pane_cp24_ParamLimits

0xc265,	// (0x0002167c) bg_popup_sub_pane_cp24

0xcbe4,	// (0x00021ffb) fep_china_uni_candidate_pane_ParamLimits

0xcbe4,	// (0x00021ffb) fep_china_uni_candidate_pane

0xcbf8,	// (0x0002200f) fep_china_uni_entry_pane

0xcc08,	// (0x0002201f) popup_fep_china_uni_window_g1

0xa2e9,	// (0x0001f700) fep_china_uni_entry_pane_g1

0xa2f1,	// (0x0001f708) fep_china_uni_entry_pane_g2

0x0001,

0xf6e9,	// (0x00024b00) fep_china_uni_entry_pane_g

0xcc24,	// (0x0002203b) fep_entry_item_pane

0xcc2e,	// (0x00022045) fep_candidate_item_pane

0xa2f9,	// (0x0001f710) fep_china_uni_candidate_pane_g1

0xcc36,	// (0x0002204d) fep_china_uni_candidate_pane_g2

0xcc3e,	// (0x00022055) fep_china_uni_candidate_pane_g3

0xa301,	// (0x0001f718) fep_china_uni_candidate_pane_g4

0x0003,

0xf6ee,	// (0x00024b05) fep_china_uni_candidate_pane_g

0xc20d,	// (0x00021624) fep_entry_item_pane_g1

0xcc46,	// (0x0002205d) fep_entry_item_pane_t1_ParamLimits

0xcc46,	// (0x0002205d) fep_entry_item_pane_t1

0xcc5c,	// (0x00022073) fep_candidate_item_pane_t1_ParamLimits

0xcc5c,	// (0x00022073) fep_candidate_item_pane_t1

0xcc71,	// (0x00022088) fep_candidate_item_pane_t2_ParamLimits

0xcc71,	// (0x00022088) fep_candidate_item_pane_t2

0x0001,

0xf6f7,	// (0x00024b0e) fep_candidate_item_pane_t_ParamLimits

0xf6f7,	// (0x00024b0e) fep_candidate_item_pane_t

0xc273,	// (0x0002168a) list_highlight_pane_cp31_ParamLimits

0xc273,	// (0x0002168a) list_highlight_pane_cp31

0xcc83,	// (0x0002209a) level_1_signal_lsc

0xcc8c,	// (0x000220a3) level_2_signal_lsc

0xcc95,	// (0x000220ac) level_3_signal_lsc

0xcc9e,	// (0x000220b5) level_4_signal_lsc

0xcca7,	// (0x000220be) level_5_signal_lsc

0xccb0,	// (0x000220c7) level_6_signal_lsc

0xccb9,	// (0x000220d0) level_7_signal_lsc

0xccb9,	// (0x000220d0) level_1_battery_lsc

0xccc2,	// (0x000220d9) level_2_battery_lsc

0xcccb,	// (0x000220e2) level_3_battery_lsc

0xccd4,	// (0x000220eb) level_4_battery_lsc

0xccdd,	// (0x000220f4) level_5_battery_lsc

0xcce6,	// (0x000220fd) level_6_battery_lsc

0xcc83,	// (0x0002209a) level_7_battery_lsc

0xccef,	// (0x00022106) scroll_handle_focus_pane_g1

0xccf8,	// (0x0002210f) scroll_handle_focus_pane_g2

0xcd01,	// (0x00022118) scroll_handle_focus_pane_g3

0x0002,

0xf6fc,	// (0x00024b13) scroll_handle_focus_pane_g

0xa309,	// (0x0001f720) list_single_2graphic_pane_g1_ParamLimits

0xa309,	// (0x0001f720) list_single_2graphic_pane_g1

0x9b16,	// (0x0001ef2d) list_single_2graphic_pane_g2_ParamLimits

0x9b16,	// (0x0001ef2d) list_single_2graphic_pane_g2

0x1159,	// (0x00016570) list_single_2graphic_pane_g3_ParamLimits

0x1159,	// (0x00016570) list_single_2graphic_pane_g3

0xa315,	// (0x0001f72c) list_single_2graphic_pane_g4_ParamLimits

0xa315,	// (0x0001f72c) list_single_2graphic_pane_g4

0x0003,

0xf703,	// (0x00024b1a) list_single_2graphic_pane_g_ParamLimits

0xf703,	// (0x00024b1a) list_single_2graphic_pane_g

0xa321,	// (0x0001f738) list_single_2graphic_pane_t1_ParamLimits

0xa321,	// (0x0001f738) list_single_2graphic_pane_t1

0xa34f,	// (0x0001f766) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa34f,	// (0x0001f766) list_double2_graphic_large_graphic_pane_g1

0x9ce0,	// (0x0001f0f7) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9ce0,	// (0x0001f0f7) list_double2_graphic_large_graphic_pane_g2

0x9c33,	// (0x0001f04a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9c33,	// (0x0001f04a) list_double2_graphic_large_graphic_pane_g3

0xa361,	// (0x0001f778) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa361,	// (0x0001f778) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf70c,	// (0x00024b23) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf70c,	// (0x00024b23) list_double2_graphic_large_graphic_pane_g

0xa36d,	// (0x0001f784) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa36d,	// (0x0001f784) list_double2_graphic_large_graphic_pane_t1

0xa383,	// (0x0001f79a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa383,	// (0x0001f79a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf715,	// (0x00024b2c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf715,	// (0x00024b2c) list_double2_graphic_large_graphic_pane_t

0xa408,	// (0x0001f81f) popup_fast_swap_window_ParamLimits

0xa408,	// (0x0001f81f) popup_fast_swap_window

0xa424,	// (0x0001f83b) popup_side_volume_key_window

0xcdb7,	// (0x000221ce) stacon_top_pane

0xcdc1,	// (0x000221d8) status_pane_ParamLimits

0xcdc1,	// (0x000221d8) status_pane

0xa43e,	// (0x0001f855) status_small_pane

0xc217,	// (0x0002162e) control_pane

0xc217,	// (0x0002162e) stacon_bottom_pane

0xc66d,	// (0x00021a84) scroll_pane_cp121

0xc664,	// (0x00021a7b) set_content_pane

0xa395,	// (0x0001f7ac) bg_active_tab_pane_g1_cp1

0xa39e,	// (0x0001f7b5) bg_active_tab_pane_g2_cp1

0xa3a7,	// (0x0001f7be) bg_active_tab_pane_g3_cp1

0xa395,	// (0x0001f7ac) bg_passive_tab_pane_g1_cp1

0xa39e,	// (0x0001f7b5) bg_passive_tab_pane_g2_cp1

0xa3a7,	// (0x0001f7be) bg_passive_tab_pane_g3_cp1

0xa3b0,	// (0x0001f7c7) bg_active_tab_pane_g1_cp2

0xa39e,	// (0x0001f7b5) bg_active_tab_pane_g2_cp2

0xa3b9,	// (0x0001f7d0) bg_active_tab_pane_g3_cp2

0xa3b0,	// (0x0001f7c7) bg_passive_tab_pane_g1_cp2

0xa39e,	// (0x0001f7b5) bg_passive_tab_pane_g2_cp2

0xa3b9,	// (0x0001f7d0) bg_passive_tab_pane_g3_cp2

0xa3c2,	// (0x0001f7d9) bg_active_tab_pane_g1_cp3

0xa39e,	// (0x0001f7b5) bg_active_tab_pane_g2_cp3

0xa3cb,	// (0x0001f7e2) bg_active_tab_pane_g3_cp3

0xa3c2,	// (0x0001f7d9) bg_passive_tab_pane_g1_cp3

0xa39e,	// (0x0001f7b5) bg_passive_tab_pane_g2_cp3

0xa3cb,	// (0x0001f7e2) bg_passive_tab_pane_g3_cp3

0xa3d4,	// (0x0001f7eb) bg_active_tab_pane_g1_cp4

0xa39e,	// (0x0001f7b5) bg_active_tab_pane_g2_cp4

0xa3df,	// (0x0001f7f6) bg_active_tab_pane_g3_cp4

0xa3d4,	// (0x0001f7eb) bg_passive_tab_pane_g1_cp4

0xa39e,	// (0x0001f7b5) bg_passive_tab_pane_g2_cp4

0xa3df,	// (0x0001f7f6) bg_passive_tab_pane_g3_cp4

0xa3ea,	// (0x0001f801) bg_active_tab_pane_g1_cp5

0xa39e,	// (0x0001f7b5) bg_active_tab_pane_g2_cp5

0xa3f3,	// (0x0001f80a) bg_active_tab_pane_g3_cp5

0xa3ea,	// (0x0001f801) bg_passive_tab_pane_g1_cp5

0xa39e,	// (0x0001f7b5) bg_passive_tab_pane_g2_cp5

0xa3f3,	// (0x0001f80a) bg_passive_tab_pane_g3_cp5

0x2f17,	// (0x0001832e) list_set_graphic_pane_ParamLimits

0x2f17,	// (0x0001832e) list_set_graphic_pane

0xc217,	// (0x0002162e) bg_set_opt_pane_cp4

0xcd48,	// (0x0002215f) list_set_graphic_pane_g1_ParamLimits

0xcd48,	// (0x0002215f) list_set_graphic_pane_g1

0xcd54,	// (0x0002216b) list_set_graphic_pane_g2_ParamLimits

0xcd54,	// (0x0002216b) list_set_graphic_pane_g2

0x0001,

0xf71a,	// (0x00024b31) list_set_graphic_pane_g_ParamLimits

0xf71a,	// (0x00024b31) list_set_graphic_pane_g

0x0009,

0xfa9f,	// (0x00024eb6) volume_small_pane_cp_g

0xa3fc,	// (0x0001f813) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa3fc,	// (0x0001f813) list_double2_large_graphic_pane_g1_cp2

0xcd76,	// (0x0002218d) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xcd76,	// (0x0002218d) list_double2_large_graphic_pane_g2_cp2

0xcd87,	// (0x0002219e) list_double2_large_graphic_pane_g3_cp2

0xcd8f,	// (0x000221a6) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xcd8f,	// (0x000221a6) list_double2_large_graphic_pane_t1_cp2

0xcda5,	// (0x000221bc) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xcda5,	// (0x000221bc) list_double2_large_graphic_pane_t2_cp2

0xafcb,	// (0x000203e2) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xafcb,	// (0x000203e2) list_double_large_graphic_pane_g1_cp2

0x23b2,	// (0x000177c9) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x23b2,	// (0x000177c9) list_double_large_graphic_pane_g2_cp2

0xced1,	// (0x000222e8) list_double_large_graphic_pane_g3_cp2

0x23c3,	// (0x000177da) list_double_large_graphic_pane_g4_cp

0x23cb,	// (0x000177e2) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x23cb,	// (0x000177e2) list_double_large_graphic_pane_t1_cp2

0x23e2,	// (0x000177f9) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x23e2,	// (0x000177f9) list_double_large_graphic_pane_t2_cp2

0xcdcf,	// (0x000221e6) list_double2_graphic_pane_g1_cp2_ParamLimits

0xcdcf,	// (0x000221e6) list_double2_graphic_pane_g1_cp2

0xcddd,	// (0x000221f4) list_double2_graphic_pane_g2_cp2_ParamLimits

0xcddd,	// (0x000221f4) list_double2_graphic_pane_g2_cp2

0xcdee,	// (0x00022205) list_double2_graphic_pane_g3_cp2

0xcdf8,	// (0x0002220f) list_double2_graphic_pane_t1_cp2_ParamLimits

0xcdf8,	// (0x0002220f) list_double2_graphic_pane_t1_cp2

0xce0e,	// (0x00022225) list_double2_graphic_pane_t2_cp2_ParamLimits

0xce0e,	// (0x00022225) list_double2_graphic_pane_t2_cp2

0xc5ff,	// (0x00021a16) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc5ff,	// (0x00021a16) list_single_number_heading_pane_g1_cp2

0xce20,	// (0x00022237) list_single_number_heading_pane_g2_cp2

0xce28,	// (0x0002223f) list_single_number_heading_pane_t1_cp2_ParamLimits

0xce28,	// (0x0002223f) list_single_number_heading_pane_t1_cp2

0xce3e,	// (0x00022255) list_single_number_heading_pane_t2_cp2_ParamLimits

0xce3e,	// (0x00022255) list_single_number_heading_pane_t2_cp2

0xce50,	// (0x00022267) list_single_number_heading_pane_t3_cp2_ParamLimits

0xce50,	// (0x00022267) list_single_number_heading_pane_t3_cp2

0xc5ff,	// (0x00021a16) list_single_heading_pane_g1_cp2_ParamLimits

0xc5ff,	// (0x00021a16) list_single_heading_pane_g1_cp2

0xce20,	// (0x00022237) list_single_heading_pane_g2_cp2

0xce28,	// (0x0002223f) list_single_heading_pane_t1_cp2_ParamLimits

0xce28,	// (0x0002223f) list_single_heading_pane_t1_cp2

0x21ab,	// (0x000175c2) list_single_heading_pane_t2_cp2_ParamLimits

0x21ab,	// (0x000175c2) list_single_heading_pane_t2_cp2

0x20f3,	// (0x0001750a) list_double_graphic_pane_g1_cp2_ParamLimits

0x20f3,	// (0x0001750a) list_double_graphic_pane_g1_cp2

0x20ff,	// (0x00017516) list_double_graphic_pane_g2_cp2_ParamLimits

0x20ff,	// (0x00017516) list_double_graphic_pane_g2_cp2

0x210e,	// (0x00017525) list_double_graphic_pane_g3_cp2

0x2116,	// (0x0001752d) list_double_graphic_pane_t1_cp2_ParamLimits

0x2116,	// (0x0001752d) list_double_graphic_pane_t1_cp2

0x212c,	// (0x00017543) list_double_graphic_pane_t2_cp2_ParamLimits

0x212c,	// (0x00017543) list_double_graphic_pane_t2_cp2

0xcec5,	// (0x000222dc) list_double_number_pane_g1_cp2_ParamLimits

0xcec5,	// (0x000222dc) list_double_number_pane_g1_cp2

0xced1,	// (0x000222e8) list_double_number_pane_g2_cp2

0x20b7,	// (0x000174ce) list_double_number_pane_t1_cp2_ParamLimits

0x20b7,	// (0x000174ce) list_double_number_pane_t1_cp2

0x20cb,	// (0x000174e2) list_double_number_pane_t2_cp2_ParamLimits

0x20cb,	// (0x000174e2) list_double_number_pane_t2_cp2

0x20e1,	// (0x000174f8) list_double_number_pane_t3_cp2_ParamLimits

0x20e1,	// (0x000174f8) list_double_number_pane_t3_cp2

0x1fa0,	// (0x000173b7) list_single_graphic_pane_g1_cp2_ParamLimits

0x1fa0,	// (0x000173b7) list_single_graphic_pane_g1_cp2

0xc5f3,	// (0x00021a0a) list_single_graphic_pane_g2_cp2_ParamLimits

0xc5f3,	// (0x00021a0a) list_single_graphic_pane_g2_cp2

0xcf09,	// (0x00022320) list_single_graphic_pane_g3_cp2

0x1f76,	// (0x0001738d) list_single_graphic_pane_t1_cp2_ParamLimits

0x1f76,	// (0x0001738d) list_single_graphic_pane_t1_cp2

0xc5f3,	// (0x00021a0a) list_single_number_pane_g1_cp2_ParamLimits

0xc5f3,	// (0x00021a0a) list_single_number_pane_g1_cp2

0xcf09,	// (0x00022320) list_single_number_pane_g2_cp2

0x1f76,	// (0x0001738d) list_single_number_pane_t1_cp2_ParamLimits

0x1f76,	// (0x0001738d) list_single_number_pane_t1_cp2

0x1f8c,	// (0x000173a3) list_single_number_pane_t2_cp2_ParamLimits

0x1f8c,	// (0x000173a3) list_single_number_pane_t2_cp2

0xcd76,	// (0x0002218d) list_double2_pane_g1_cp2_ParamLimits

0xcd76,	// (0x0002218d) list_double2_pane_g1_cp2

0xcd87,	// (0x0002219e) list_double2_pane_g2_cp2

0xce9d,	// (0x000222b4) list_double2_pane_t1_cp2_ParamLimits

0xce9d,	// (0x000222b4) list_double2_pane_t1_cp2

0xceb3,	// (0x000222ca) list_double2_pane_t2_cp2_ParamLimits

0xceb3,	// (0x000222ca) list_double2_pane_t2_cp2

0xcec5,	// (0x000222dc) list_double_pane_g1_cp2_ParamLimits

0xcec5,	// (0x000222dc) list_double_pane_g1_cp2

0xced1,	// (0x000222e8) list_double_pane_g2_cp2

0xced9,	// (0x000222f0) list_double_pane_t1_cp2_ParamLimits

0xced9,	// (0x000222f0) list_double_pane_t1_cp2

0xceef,	// (0x00022306) list_double_pane_t2_cp2_ParamLimits

0xceef,	// (0x00022306) list_double_pane_t2_cp2

0xa46c,	// (0x0001f883) list_single_pane_cp2_g3

0xc5f3,	// (0x00021a0a) list_single_pane_g1_cp2_ParamLimits

0xc5f3,	// (0x00021a0a) list_single_pane_g1_cp2

0xcf09,	// (0x00022320) list_single_pane_g2_cp2

0xcf11,	// (0x00022328) list_single_pane_t1_cp2_ParamLimits

0xcf11,	// (0x00022328) list_single_pane_t1_cp2

0xa474,	// (0x0001f88b) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa474,	// (0x0001f88b) list_single_large_graphic_pane_g1_cp2

0xcf29,	// (0x00022340) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xcf29,	// (0x00022340) list_single_large_graphic_pane_g2_cp2

0xcf35,	// (0x0002234c) list_single_large_graphic_pane_g3_cp2

0xa480,	// (0x0001f897) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa480,	// (0x0001f897) list_single_large_graphic_pane_g4_cp1

0xcf3d,	// (0x00022354) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xcf3d,	// (0x00022354) list_single_large_graphic_pane_t1_cp2

0x1f42,	// (0x00017359) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x1f42,	// (0x00017359) list_single_graphic_heading_pane_g1_cp2

0x1f0f,	// (0x00017326) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x1f0f,	// (0x00017326) list_single_graphic_heading_pane_g4_cp2

0xcf09,	// (0x00022320) list_single_graphic_heading_pane_g5_cp2

0x1f4e,	// (0x00017365) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x1f4e,	// (0x00017365) list_single_graphic_heading_pane_t1_cp2

0x1f64,	// (0x0001737b) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x1f64,	// (0x0001737b) list_single_graphic_heading_pane_t2_cp2

0x1f03,	// (0x0001731a) list_single_2graphic_pane_g1_cp2_ParamLimits

0x1f03,	// (0x0001731a) list_single_2graphic_pane_g1_cp2

0x1f0f,	// (0x00017326) list_single_2graphic_pane_g2_cp2_ParamLimits

0x1f0f,	// (0x00017326) list_single_2graphic_pane_g2_cp2

0xcf09,	// (0x00022320) list_single_2graphic_pane_g3_cp2

0x1f20,	// (0x00017337) list_single_2graphic_pane_g4_cp2_ParamLimits

0x1f20,	// (0x00017337) list_single_2graphic_pane_g4_cp2

0x1f2c,	// (0x00017343) list_single_2graphic_pane_t1_cp2_ParamLimits

0x1f2c,	// (0x00017343) list_single_2graphic_pane_t1_cp2

0xc20d,	// (0x00021624) list_highlight_pane_g10_cp1

0x1aeb,	// (0x00016f02) list_highlight_pane_g1_cp1

0x1af3,	// (0x00016f0a) list_highlight_pane_g2_cp1

0x1afb,	// (0x00016f12) list_highlight_pane_g3_cp1

0x1b03,	// (0x00016f1a) list_highlight_pane_g4_cp1

0x1b0b,	// (0x00016f22) list_highlight_pane_g5_cp1

0x1b13,	// (0x00016f2a) list_highlight_pane_g6_cp1

0x1b1b,	// (0x00016f32) list_highlight_pane_g7_cp1

0x1b23,	// (0x00016f3a) list_highlight_pane_g8_cp1

0x1b2b,	// (0x00016f42) list_highlight_pane_g9_cp1

0xad60,	// (0x00020177) form_field_slider_pane_t3

0xad6e,	// (0x00020185) form_field_slider_pane_t4

0x1a2f,	// (0x00016e46) slider_form_pane_ParamLimits

0x1a2f,	// (0x00016e46) slider_form_pane

0xc217,	// (0x0002162e) control_abbreviations

0xc217,	// (0x0002162e) control_conventions

0xc217,	// (0x0002162e) control_definitions

0xc217,	// (0x0002162e) format_table_attribute

0xafa2,	// (0x000203b9) bg_popup_preview_window_pane_g9

0xc217,	// (0x0002162e) format_table_data2

0xc217,	// (0x0002162e) format_table_data3

0xc217,	// (0x0002162e) format_table_data_example

0x0008,

0xc217,	// (0x0002162e) intro_purpose

0xf8aa,	// (0x00024cc1) bg_popup_preview_window_pane_g

0xc217,	// (0x0002162e) texts_category

0xc217,	// (0x0002162e) texts_graphics

0xcf53,	// (0x0002236a) text_digital

0xcf62,	// (0x00022379) text_primary

0xcf71,	// (0x00022388) text_primary_small

0xcf80,	// (0x00022397) text_secondary

0xcf8f,	// (0x000223a6) text_title

0xb35b,	// (0x00020772) bg_passive_tab_pane_g1_cp3_srt

0xa39e,	// (0x0001f7b5) bg_passive_tab_pane_g2_cp3_srt

0xb364,	// (0x0002077b) bg_passive_tab_pane_g3_cp3_srt

0xc265,	// (0x0002167c) bg_active_tab_pane_cp3_srt_ParamLimits

0xc265,	// (0x0002167c) bg_active_tab_pane_cp3_srt

0xb36d,	// (0x00020784) tabs_4_active_pane_srt_g1

0xb375,	// (0x0002078c) tabs_4_active_pane_srt_t1_ParamLimits

0xb375,	// (0x0002078c) tabs_4_active_pane_srt_t1

0xb35b,	// (0x00020772) bg_active_tab_pane_g1_cp3_copy1

0xa39e,	// (0x0001f7b5) bg_active_tab_pane_g2_cp3_copy1

0xb364,	// (0x0002077b) bg_active_tab_pane_g3_cp3_copy1

0xc273,	// (0x0002168a) tabs_2_long_active_pane_srt_ParamLimits

0xc273,	// (0x0002168a) tabs_2_long_active_pane_srt

0xc273,	// (0x0002168a) tabs_2_long_passive_pane_srt_ParamLimits

0xc273,	// (0x0002168a) tabs_2_long_passive_pane_srt

0xc85d,	// (0x00021c74) bg_passive_tab_pane_cp4_srt_ParamLimits

0xc85d,	// (0x00021c74) bg_passive_tab_pane_cp4_srt

0xb0cc,	// (0x000204e3) bg_passive_tab_pane_g1_cp4_srt

0xa39e,	// (0x0001f7b5) bg_passive_tab_pane_g2_cp4_srt

0xb0d5,	// (0x000204ec) bg_passive_tab_pane_g3_cp4_srt

0xc273,	// (0x0002168a) bg_active_tab_pane_cp4_srt_ParamLimits

0xc273,	// (0x0002168a) bg_active_tab_pane_cp4_srt

0xb0de,	// (0x000204f5) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb0de,	// (0x000204f5) tabs_2_long_active_pane_srt_t1

0xb0cc,	// (0x000204e3) bg_active_tab_pane_g1_cp4_srt

0xa39e,	// (0x0001f7b5) bg_active_tab_pane_g2_cp4_srt

0xb0d5,	// (0x000204ec) bg_active_tab_pane_g3_cp4_srt

0xc265,	// (0x0002167c) tabs_3_long_active_pane_srt_ParamLimits

0xc265,	// (0x0002167c) tabs_3_long_active_pane_srt

0xc265,	// (0x0002167c) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc265,	// (0x0002167c) tabs_3_long_passive_pane_cp_srt

0xc265,	// (0x0002167c) tabs_3_long_passive_pane_srt_ParamLimits

0xc265,	// (0x0002167c) tabs_3_long_passive_pane_srt

0xc85d,	// (0x00021c74) bg_passive_tab_pane_cp5_srt_ParamLimits

0xc85d,	// (0x00021c74) bg_passive_tab_pane_cp5_srt

0xa3ea,	// (0x0001f801) bg_passive_tab_pane_g1_cp5_srt

0xa39e,	// (0x0001f7b5) bg_passive_tab_pane_g2_cp5_srt

0xa3f3,	// (0x0001f80a) bg_passive_tab_pane_g3_cp5_srt

0xc273,	// (0x0002168a) bg_active_tab_pane_cp5_srt_ParamLimits

0xc273,	// (0x0002168a) bg_active_tab_pane_cp5_srt

0xb0b6,	// (0x000204cd) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb0b6,	// (0x000204cd) tabs_3_long_active_pane_srt_t1

0xa3ea,	// (0x0001f801) bg_active_tab_pane_g1_cp5_srt

0xa39e,	// (0x0001f7b5) bg_active_tab_pane_g2_cp5_srt

0xa3f3,	// (0x0001f80a) bg_active_tab_pane_g3_cp5_srt

0x2608,	// (0x00017a1f) navi_text_pane_srt_t1

0x2600,	// (0x00017a17) navi_icon_pane_srt_g1

0xd07a,	// (0x00022491) midp_editing_number_pane_srt

0xcf9e,	// (0x000223b5) midp_ticker_pane_srt

0xd082,	// (0x00022499) midp_ticker_pane_srt_g1

0xd08a,	// (0x000224a1) midp_ticker_pane_srt_g2

0x0001,

0xf739,	// (0x00024b50) midp_ticker_pane_srt_g

0xd092,	// (0x000224a9) midp_ticker_pane_srt_t1

0x25f1,	// (0x00017a08) midp_editing_number_pane_t1_copy1

0xa49a,	// (0x0001f8b1) listscroll_midp_pane

0xa49a,	// (0x0001f8b1) midp_form_pane

0xa505,	// (0x0001f91c) midp_info_popup_window_ParamLimits

0xa505,	// (0x0001f91c) midp_info_popup_window

0xc7f8,	// (0x00021c0f) bg_popup_sub_pane_cp50_ParamLimits

0xc7f8,	// (0x00021c0f) bg_popup_sub_pane_cp50

0x171f,	// (0x00016b36) listscroll_midp_info_pane_ParamLimits

0x171f,	// (0x00016b36) listscroll_midp_info_pane

0x16ff,	// (0x00016b16) listscroll_form_midp_pane_ParamLimits

0x16ff,	// (0x00016b16) listscroll_form_midp_pane

0x170b,	// (0x00016b22) scroll_bar_cp050

0x16ff,	// (0x00016b16) list_midp_pane

0xb50d,	// (0x00020924) signal_pane_g2_cp

0x1619,	// (0x00016a30) listscroll_midp_info_pane_t1_ParamLimits

0x1619,	// (0x00016a30) listscroll_midp_info_pane_t1

0xab9a,	// (0x0001ffb1) listscroll_midp_info_pane_t2_ParamLimits

0xab9a,	// (0x0001ffb1) listscroll_midp_info_pane_t2

0xabd8,	// (0x0001ffef) listscroll_midp_info_pane_t3_ParamLimits

0xabd8,	// (0x0001ffef) listscroll_midp_info_pane_t3

0xac12,	// (0x00020029) listscroll_midp_info_pane_t4_ParamLimits

0xac12,	// (0x00020029) listscroll_midp_info_pane_t4

0x0003,

0xf7e5,	// (0x00024bfc) listscroll_midp_info_pane_t_ParamLimits

0xf7e5,	// (0x00024bfc) listscroll_midp_info_pane_t

0xc84d,	// (0x00021c64) scroll_pane_cp21

0x15b9,	// (0x000169d0) form_midp_field_choice_group_pane

0xab5d,	// (0x0001ff74) form_midp_field_text_pane

0x15ff,	// (0x00016a16) form_midp_field_time_pane

0x1607,	// (0x00016a1e) form_midp_gauge_slider_pane

0x1610,	// (0x00016a27) form_midp_gauge_wait_pane

0xc217,	// (0x0002162e) form_midp_image_pane

0xab46,	// (0x0001ff5d) list_single_midp_pane_ParamLimits

0xab46,	// (0x0001ff5d) list_single_midp_pane

0xab24,	// (0x0001ff3b) form_midp_field_text_pane_t1

0x12f7,	// (0x0001670e) input_focus_pane_cp050

0x1576,	// (0x0001698d) list_midp_form_text_pane

0x150b,	// (0x00016922) form_midp_field_choice_group_pane_t1

0x1519,	// (0x00016930) input_focus_pane_cp051

0x152d,	// (0x00016944) list_midp_choice_pane

0xc217,	// (0x0002162e) status_idle_pane

0x14ef,	// (0x00016906) form_midp_field_time_pane_t1

0xc20d,	// (0x00021624) wait_anim_pane_g2_copy1

0x14fd,	// (0x00016914) form_midp_field_time_pane_t2

0x0001,

0xcffe,	// (0x00022415) aid_navinavi_width_2_pane

0xf7e0,	// (0x00024bf7) form_midp_field_time_pane_t

0xc217,	// (0x0002162e) input_focus_pane_cp052

0xc217,	// (0x0002162e) bg_input_focus_pane_cp040

0x14af,	// (0x000168c6) form_midp_gauge_slider_pane_t1

0x14bd,	// (0x000168d4) form_midp_gauge_slider_pane_t2

0xab08,	// (0x0001ff1f) form_midp_gauge_slider_pane_t3

0xab16,	// (0x0001ff2d) form_midp_gauge_slider_pane_t4

0x0003,

0xf7d7,	// (0x00024bee) form_midp_gauge_slider_pane_t

0x14e7,	// (0x000168fe) form_midp_slider_pane

0xc273,	// (0x0002168a) bg_input_focus_pane_cp041_ParamLimits

0xc273,	// (0x0002168a) bg_input_focus_pane_cp041

0x147c,	// (0x00016893) form_midp_gauge_wait_pane_t1_ParamLimits

0x147c,	// (0x00016893) form_midp_gauge_wait_pane_t1

0x148e,	// (0x000168a5) form_midp_gauge_wait_pane_t2_ParamLimits

0x148e,	// (0x000168a5) form_midp_gauge_wait_pane_t2

0x0001,

0xf7d2,	// (0x00024be9) form_midp_gauge_wait_pane_t_ParamLimits

0xf7d2,	// (0x00024be9) form_midp_gauge_wait_pane_t

0x14a0,	// (0x000168b7) form_midp_wait_pane_ParamLimits

0x14a0,	// (0x000168b7) form_midp_wait_pane

0xaad2,	// (0x0001fee9) form_midp_image_pane_g1

0xaadb,	// (0x0001fef2) form_midp_image_pane_t1

0xaaea,	// (0x0001ff01) form_midp_image_pane_t2

0xaaf9,	// (0x0001ff10) form_midp_image_pane_t3

0x0002,

0xf7cb,	// (0x00024be2) form_midp_image_pane_t

0x142e,	// (0x00016845) list_single_midp_pane_g1

0x1437,	// (0x0001684e) list_single_midp_pane_t1

0xaabd,	// (0x0001fed4) list_midp_form_item_pane_ParamLimits

0xaabd,	// (0x0001fed4) list_midp_form_item_pane

0xcfa6,	// (0x000223bd) list_midp_form_item_pane_t1

0xcfb5,	// (0x000223cc) midp_ticker_pane_g1

0xcfc1,	// (0x000223d8) midp_ticker_pane_g2

0x0001,

0xf71f,	// (0x00024b36) midp_ticker_pane_g

0xcfcd,	// (0x000223e4) midp_ticker_pane_t1

0x2871,	// (0x00017c88) midp_editing_number_pane_t1

0x284f,	// (0x00017c66) midp_editing_number_pane

0x285e,	// (0x00017c75) midp_ticker_pane

0x25cf,	// (0x000179e6) ai_message_heading_pane

0xc217,	// (0x0002162e) bg_popup_window_pane_cp14

0x25d7,	// (0x000179ee) listscroll_ai_message_pane

0x2559,	// (0x00017970) ai_message_heading_pane_g1_ParamLimits

0x2559,	// (0x00017970) ai_message_heading_pane_g1

0xb06c,	// (0x00020483) ai_message_heading_pane_g2_ParamLimits

0xb06c,	// (0x00020483) ai_message_heading_pane_g2

0x2571,	// (0x00017988) ai_message_heading_pane_g3_ParamLimits

0x2571,	// (0x00017988) ai_message_heading_pane_g3

0x257d,	// (0x00017994) ai_message_heading_pane_g4_ParamLimits

0x257d,	// (0x00017994) ai_message_heading_pane_g4

0x0003,

0xf90c,	// (0x00024d23) ai_message_heading_pane_g_ParamLimits

0xf90c,	// (0x00024d23) ai_message_heading_pane_g

0xb078,	// (0x0002048f) ai_message_heading_pane_t1_ParamLimits

0xb078,	// (0x0002048f) ai_message_heading_pane_t1

0xb092,	// (0x000204a9) ai_message_heading_pane_t2_ParamLimits

0xb092,	// (0x000204a9) ai_message_heading_pane_t2

0x0001,

0xf915,	// (0x00024d2c) ai_message_heading_pane_t_ParamLimits

0xf915,	// (0x00024d2c) ai_message_heading_pane_t

0x25b5,	// (0x000179cc) bg_popup_heading_pane_cp1_ParamLimits

0x25b5,	// (0x000179cc) bg_popup_heading_pane_cp1

0x2547,	// (0x0001795e) list_ai_message_pane_ParamLimits

0x2547,	// (0x0001795e) list_ai_message_pane

0xc84d,	// (0x00021c64) scroll_pane_cp10

0x24e3,	// (0x000178fa) list_ai_message_pane_g1

0x24eb,	// (0x00017902) list_ai_message_pane_g2

0x0001,

0xf8e9,	// (0x00024d00) list_ai_message_pane_g

0x24f3,	// (0x0001790a) list_ai_message_pane_t1_ParamLimits

0x24f3,	// (0x0001790a) list_ai_message_pane_t1

0x2508,	// (0x0001791f) list_ai_message_pane_t2_ParamLimits

0x2508,	// (0x0001791f) list_ai_message_pane_t2

0x251d,	// (0x00017934) list_ai_message_pane_t3_ParamLimits

0x251d,	// (0x00017934) list_ai_message_pane_t3

0x2532,	// (0x00017949) list_ai_message_pane_t4_ParamLimits

0x2532,	// (0x00017949) list_ai_message_pane_t4

0x0003,

0xf8ee,	// (0x00024d05) list_ai_message_pane_t_ParamLimits

0xf8ee,	// (0x00024d05) list_ai_message_pane_t

0xb048,	// (0x0002045f) cell_ai_soft_ind_pane_ParamLimits

0xb048,	// (0x0002045f) cell_ai_soft_ind_pane

0xcfdf,	// (0x000223f6) cell_ai_soft_ind_pane_g1_ParamLimits

0xcfdf,	// (0x000223f6) cell_ai_soft_ind_pane_g1

0xc217,	// (0x0002162e) grid_highlight_cp1

0xcfec,	// (0x00022403) text_secondary_cp56_ParamLimits

0xcfec,	// (0x00022403) text_secondary_cp56

0x24a3,	// (0x000178ba) example_general_pane_ParamLimits

0x24a3,	// (0x000178ba) example_general_pane

0x24af,	// (0x000178c6) example_parent_pane_g1_ParamLimits

0x24af,	// (0x000178c6) example_parent_pane_g1

0x24bb,	// (0x000178d2) example_parent_pane_t1_ParamLimits

0x24bb,	// (0x000178d2) example_parent_pane_t1

0x8843,	// (0x0001dc5a) popup_preview_text_window_ParamLimits

0x8843,	// (0x0001dc5a) popup_preview_text_window

0xcf01,	// (0x00022318) list_single_pane_cp2_g4

0xc45f,	// (0x00021876) bg_popup_preview_window_pane_ParamLimits

0xc45f,	// (0x00021876) bg_popup_preview_window_pane

0xafaa,	// (0x000203c1) popup_preview_text_window_t1_ParamLimits

0xafaa,	// (0x000203c1) popup_preview_text_window_t1

0x221b,	// (0x00017632) popup_preview_text_window_t2_ParamLimits

0x221b,	// (0x00017632) popup_preview_text_window_t2

0x2264,	// (0x0001767b) popup_preview_text_window_t3_ParamLimits

0x2264,	// (0x0001767b) popup_preview_text_window_t3

0x22a9,	// (0x000176c0) popup_preview_text_window_t4_ParamLimits

0x22a9,	// (0x000176c0) popup_preview_text_window_t4

0x0004,

0xf8bd,	// (0x00024cd4) popup_preview_text_window_t_ParamLimits

0xf8bd,	// (0x00024cd4) popup_preview_text_window_t

0x2327,	// (0x0001773e) scroll_pane_cp11

0x11d7,	// (0x000165ee) bg_popup_preview_window_pane_g1

0xaf6a,	// (0x00020381) bg_popup_preview_window_pane_g2

0xaf72,	// (0x00020389) bg_popup_preview_window_pane_g3

0xaf7a,	// (0x00020391) bg_popup_preview_window_pane_g4

0xaf82,	// (0x00020399) bg_popup_preview_window_pane_g5

0xaf8a,	// (0x000203a1) bg_popup_preview_window_pane_g6

0xaf92,	// (0x000203a9) bg_popup_preview_window_pane_g7

0xaf9a,	// (0x000203b1) bg_popup_preview_window_pane_g8

0xe1f1,	// (0x00023608) aid_popup_width_pane

0x87bf,	// (0x0001dbd6) popup_midp_note_alarm_window_ParamLimits

0x87bf,	// (0x0001dbd6) popup_midp_note_alarm_window

0xc6a1,	// (0x00021ab8) data_form_pane_ParamLimits

0x9ed6,	// (0x0001f2ed) form_field_data_pane_g1

0x9ee0,	// (0x0001f2f7) form_field_data_pane_t1_ParamLimits

0xc6ad,	// (0x00021ac4) input_focus_pane_ParamLimits

0xc6bb,	// (0x00021ad2) data_form_wide_pane_ParamLimits

0xc6cc,	// (0x00021ae3) form_field_data_wide_pane_g1

0xc6f8,	// (0x00021b0f) form_field_data_wide_pane_t1_ParamLimits

0xc537,	// (0x0002194e) input_focus_pane_cp6_ParamLimits

0xa052,	// (0x0001f469) input_popup_find_pane_g1_ParamLimits

0xa052,	// (0x0001f469) input_popup_find_pane_g1

0xe47c,	// (0x00023893) aid_navi_side_left_pane

0xe491,	// (0x000238a8) aid_navi_side_right_pane

0x1be6,	// (0x00016ffd) bg_popup_window_pane_cp30_ParamLimits

0x1be6,	// (0x00016ffd) bg_popup_window_pane_cp30

0x1c60,	// (0x00017077) popup_midp_note_alarm_window_g1_ParamLimits

0x1c60,	// (0x00017077) popup_midp_note_alarm_window_g1

0x1c90,	// (0x000170a7) popup_midp_note_alarm_window_t1_ParamLimits

0x1c90,	// (0x000170a7) popup_midp_note_alarm_window_t1

0xadb3,	// (0x000201ca) popup_midp_note_alarm_window_t2_ParamLimits

0xadb3,	// (0x000201ca) popup_midp_note_alarm_window_t2

0xae61,	// (0x00020278) popup_midp_note_alarm_window_t3_ParamLimits

0xae61,	// (0x00020278) popup_midp_note_alarm_window_t3

0xae89,	// (0x000202a0) popup_midp_note_alarm_window_t4_ParamLimits

0xae89,	// (0x000202a0) popup_midp_note_alarm_window_t4

0x1e27,	// (0x0001723e) popup_midp_note_alarm_window_t5_ParamLimits

0x1e27,	// (0x0001723e) popup_midp_note_alarm_window_t5

0x000a,

0xf85a,	// (0x00024c71) popup_midp_note_alarm_window_t_ParamLimits

0xf85a,	// (0x00024c71) popup_midp_note_alarm_window_t

0x1ed3,	// (0x000172ea) wait_bar_pane_cp1_ParamLimits

0x1ed3,	// (0x000172ea) wait_bar_pane_cp1

0xc217,	// (0x0002162e) wait_anim_pane_copy1

0xc217,	// (0x0002162e) wait_border_pane_copy1

0x18dc,	// (0x00016cf3) wait_border_pane_g1_copy1

0xc712,	// (0x00021b29) form_field_popup_pane_g1

0x9efa,	// (0x0001f311) form_field_popup_pane_t1_ParamLimits

0xc6ad,	// (0x00021ac4) input_focus_pane_cp7_ParamLimits

0xc71a,	// (0x00021b31) list_form_pane_ParamLimits

0xc726,	// (0x00021b3d) form_field_popup_wide_pane_g1

0xc72e,	// (0x00021b45) form_field_popup_wide_pane_t1_ParamLimits

0xc6ad,	// (0x00021ac4) input_focus_pane_cp8_ParamLimits

0xc743,	// (0x00021b5a) list_form_wide_pane_ParamLimits

0x2ab5,	// (0x00017ecc) aid_size_cell_graphic_pane

0x9f79,	// (0x0001f390) data_form_pane_t1_ParamLimits

0xb27c,	// (0x00020693) data_form_wide_pane_t1_ParamLimits

0xa72c,	// (0x0001fb43) bg_status_flat_pane

0x9545,	// (0x0001e95c) title_pane_t1_ParamLimits

0xc22d,	// (0x00021644) title_pane_t2_ParamLimits

0xc253,	// (0x0002166a) title_pane_t3_ParamLimits

0xf532,	// (0x00024949) title_pane_t_ParamLimits

0xcb02,	// (0x00021f19) level_1_signal_ParamLimits

0xcb0f,	// (0x00021f26) level_2_signal_ParamLimits

0xcb1c,	// (0x00021f33) level_3_signal_ParamLimits

0xcb29,	// (0x00021f40) level_4_signal_ParamLimits

0xcb36,	// (0x00021f4d) level_5_signal_ParamLimits

0xcb43,	// (0x00021f5a) level_6_signal_ParamLimits

0xcb50,	// (0x00021f67) level_7_signal_ParamLimits

0xcb02,	// (0x00021f19) level_1_battery_ParamLimits

0xcb0f,	// (0x00021f26) level_2_battery_ParamLimits

0xcb1c,	// (0x00021f33) level_3_battery_ParamLimits

0xcb29,	// (0x00021f40) level_4_battery_ParamLimits

0xcb36,	// (0x00021f4d) level_5_battery_ParamLimits

0xcb43,	// (0x00021f5a) level_6_battery_ParamLimits

0xcb50,	// (0x00021f67) level_7_battery_ParamLimits

0x1aeb,	// (0x00016f02) bg_status_flat_pane_g1

0x1af3,	// (0x00016f0a) bg_status_flat_pane_g2

0x1afb,	// (0x00016f12) bg_status_flat_pane_g3

0x1b03,	// (0x00016f1a) bg_status_flat_pane_g4

0x1b0b,	// (0x00016f22) bg_status_flat_pane_g5

0x1b13,	// (0x00016f2a) bg_status_flat_pane_g6

0x1b1b,	// (0x00016f32) bg_status_flat_pane_g7

0x95d9,	// (0x0001e9f0) tabs_3_active_pane_t1_ParamLimits

0x95d9,	// (0x0001e9f0) tabs_3_passive_pane_t1_ParamLimits

0x95f3,	// (0x0001ea0a) tabs_4_active_pane_t1_ParamLimits

0x95f3,	// (0x0001ea0a) tabs_4_1_passive_pane_t1_ParamLimits

0xa091,	// (0x0001f4a8) tabs_2_active_pane_t1_ParamLimits

0xa091,	// (0x0001f4a8) tabs_2_passive_pane_t1_ParamLimits

0xc273,	// (0x0002168a) bg_active_tab_pane_cp4_ParamLimits

0xa0a3,	// (0x0001f4ba) tabs_2_long_active_pane_t1_ParamLimits

0xc85d,	// (0x00021c74) bg_passive_tab_pane_cp4_ParamLimits

0xe914,	// (0x00023d2b) list_single_midp_graphic_pane_t1_ParamLimits

0xc273,	// (0x0002168a) bg_active_tab_pane_cp5_ParamLimits

0xa0b6,	// (0x0001f4cd) tabs_3_long_active_pane_t1_ParamLimits

0xc85d,	// (0x00021c74) bg_passive_tab_pane_cp5_ParamLimits

0xe914,	// (0x00023d2b) list_single_midp_graphic_pane_t1

0xa72c,	// (0x0001fb43) bg_status_flat_pane_ParamLimits

0x0e3c,	// (0x00016253) indicator_pane_cp2_ParamLimits

0x0e3c,	// (0x00016253) indicator_pane_cp2

0xa8aa,	// (0x0001fcc1) navi_pane_srt_ParamLimits

0xa8aa,	// (0x0001fcc1) navi_pane_srt

0x0f8b,	// (0x000163a2) popup_clock_digital_analogue_window_cp1

0xc2d1,	// (0x000216e8) indicator_pane_t1

0xcf9e,	// (0x000223b5) copy_highlight_pane

0xcf9e,	// (0x000223b5) cursor_graphics_pane

0xcf9e,	// (0x000223b5) graphic_within_text_pane

0xcf9e,	// (0x000223b5) link_highlight_pane

0x22ea,	// (0x00017701) popup_preview_text_window_t5_ParamLimits

0x22ea,	// (0x00017701) popup_preview_text_window_t5

0xd006,	// (0x0002241d) cursor_digital_pane

0xd006,	// (0x0002241d) cursor_primary_pane

0xd017,	// (0x0002242e) cursor_primary_small_pane

0xd01f,	// (0x00022436) cursor_secondary_pane

0xd027,	// (0x0002243e) cursor_title_pane

0xd006,	// (0x0002241d) link_highlight_digital_pane

0xd00e,	// (0x00022425) link_highlight_primary_pane

0xd017,	// (0x0002242e) link_highlight_primary_small_pane

0xd01f,	// (0x00022436) link_highlight_secondary_pane

0xd027,	// (0x0002243e) link_highlight_title_pane

0xd006,	// (0x0002241d) copy_highlight_digital_pane

0xd006,	// (0x0002241d) copy_highlight_primary_pane

0xd017,	// (0x0002242e) copy_highlight_primary_small_pane

0xd01f,	// (0x00022436) copy_highlight_secondary_pane

0xd027,	// (0x0002243e) copy_highlight_title_pane

0xd01f,	// (0x00022436) graphic_text_digital_pane

0x1b89,	// (0x00016fa0) graphic_text_primary_pane

0x1b92,	// (0x00016fa9) graphic_text_primary_small_pane

0xd017,	// (0x0002242e) graphic_text_secondary_pane

0xd006,	// (0x0002241d) graphic_text_title_pane

0xa556,	// (0x0001f96d) cursor_primary_pane_g1

0x1b7b,	// (0x00016f92) cursor_text_primary_t1

0xada9,	// (0x000201c0) cursor_primary_small_pane_g1

0x1b6d,	// (0x00016f84) cursor_text_primary_small_t1

0xad9f,	// (0x000201b6) cursor_primary_small_pane_g1_copy1

0x1b55,	// (0x00016f6c) cursor_text_primary_small_t1_copy1

0x1b33,	// (0x00016f4a) cursor_text_title_t1

0xad95,	// (0x000201ac) cursor_title_pane_g1

0xa556,	// (0x0001f96d) cursor_digital_pane_g1

0xd02f,	// (0x00022446) cursor_text_digital_t1

0xd03d,	// (0x00022454) link_highlight_primary_pane_g1

0x1adc,	// (0x00016ef3) link_highlight_primary_pane_t1

0xd03d,	// (0x00022454) link_highlight_primary_small_pane_g1

0xd045,	// (0x0002245c) link_highlight_primary_small_pane_t1

0xd03d,	// (0x00022454) link_highlight_secondary_pane_g1

0xd054,	// (0x0002246b) link_highlight_secondary_pane_t1

0x1a41,	// (0x00016e58) link_highlight_title_pane_g1

0x1a58,	// (0x00016e6f) link_highlight_title_pane_t1

0x1a41,	// (0x00016e58) link_highlight_digital_pane_g1

0x1a49,	// (0x00016e60) link_highlight_digital_pane_t1

0x18fb,	// (0x00016d12) copy_highlight_primary_pane_g1

0x1921,	// (0x00016d38) copy_highlight_primary_pane_t1

0x18fb,	// (0x00016d12) copy_highlight_primary_small_pane_g1

0x1912,	// (0x00016d29) copy_highlight_primary_small_pane_t1

0xd063,	// (0x0002247a) copy_highlight_secondary_pane_g1

0xd06b,	// (0x00022482) copy_highlight_secondary_pane_t1

0x18fb,	// (0x00016d12) copy_highlight_title_pane_g1

0x1903,	// (0x00016d1a) copy_highlight_title_pane_t1

0x18fb,	// (0x00016d12) copy_highlight_digital_pane_g1

0x2c83,	// (0x0001809a) copy_highlight_digital_pane_t1

0x2bd7,	// (0x00017fee) graphic_text_primary_pane_g1

0x2c67,	// (0x0001807e) graphic_text_primary_pane_t1

0x2c75,	// (0x0001808c) graphic_text_primary_pane_t2

0x0001,

0xf989,	// (0x00024da0) graphic_text_primary_pane_t

0x2c43,	// (0x0001805a) graphic_text_primary_small_pane_g1

0x2c4b,	// (0x00018062) graphic_text_primary_small_pane_t1

0x2c59,	// (0x00018070) graphic_text_primary_small_pane_t2

0x0001,

0xf984,	// (0x00024d9b) graphic_text_primary_small_pane_t

0x2c1f,	// (0x00018036) graphic_text_secondary_pane_g1

0x2c27,	// (0x0001803e) graphic_text_secondary_pane_t1

0x2c35,	// (0x0001804c) graphic_text_secondary_pane_t2

0x0001,

0xf97f,	// (0x00024d96) graphic_text_secondary_pane_t

0x2bfb,	// (0x00018012) graphic_text_title_pane_g1

0x2c03,	// (0x0001801a) graphic_text_title_pane_t1

0x2c11,	// (0x00018028) graphic_text_title_pane_t2

0x0001,

0xf97a,	// (0x00024d91) graphic_text_title_pane_t

0x2bd7,	// (0x00017fee) graphic_text_digital_pane_g1

0x2bdf,	// (0x00017ff6) graphic_text_digital_pane_t1

0x2bed,	// (0x00018004) graphic_text_digital_pane_t2

0x0001,

0xf975,	// (0x00024d8c) graphic_text_digital_pane_t

0xc273,	// (0x0002168a) navi_icon_pane_srt_ParamLimits

0xc273,	// (0x0002168a) navi_icon_pane_srt

0xc217,	// (0x0002162e) navi_midp_pane_srt

0xc217,	// (0x0002162e) navi_navi_pane_srt

0xc273,	// (0x0002168a) navi_text_pane_srt_ParamLimits

0xc273,	// (0x0002168a) navi_text_pane_srt

0x2ba2,	// (0x00017fb9) navi_navi_icon_text_pane_srt

0x2baa,	// (0x00017fc1) navi_navi_pane_srt_g1_ParamLimits

0x2baa,	// (0x00017fc1) navi_navi_pane_srt_g1

0x2bbc,	// (0x00017fd3) navi_navi_pane_srt_g2_ParamLimits

0x2bbc,	// (0x00017fd3) navi_navi_pane_srt_g2

0x0001,

0xf970,	// (0x00024d87) navi_navi_pane_srt_g_ParamLimits

0xf970,	// (0x00024d87) navi_navi_pane_srt_g

0x2bce,	// (0x00017fe5) navi_navi_tabs_pane_srt

0x2ba2,	// (0x00017fb9) navi_navi_text_pane_srt

0x2ba2,	// (0x00017fb9) navi_navi_volume_pane_srt

0x2b93,	// (0x00017faa) navi_navi_text_pane_srt_t1

0xeb06,	// (0x00023f1d) navi_navi_volume_pane_srt_g1

0xeb0e,	// (0x00023f25) volume_small_pane_srt_ParamLimits

0xeb0e,	// (0x00023f25) volume_small_pane_srt

0xe6fc,	// (0x00023b13) volume_small_pane_srt_g1_ParamLimits

0xe6fc,	// (0x00023b13) volume_small_pane_srt_g1

0xe70c,	// (0x00023b23) volume_small_pane_srt_g2_ParamLimits

0xe70c,	// (0x00023b23) volume_small_pane_srt_g2

0xe71d,	// (0x00023b34) volume_small_pane_srt_g3_ParamLimits

0xe71d,	// (0x00023b34) volume_small_pane_srt_g3

0xe72e,	// (0x00023b45) volume_small_pane_srt_g4_ParamLimits

0xe72e,	// (0x00023b45) volume_small_pane_srt_g4

0xe73f,	// (0x00023b56) volume_small_pane_srt_g5_ParamLimits

0xe73f,	// (0x00023b56) volume_small_pane_srt_g5

0xe750,	// (0x00023b67) volume_small_pane_srt_g6_ParamLimits

0xe750,	// (0x00023b67) volume_small_pane_srt_g6

0xe761,	// (0x00023b78) volume_small_pane_srt_g7_ParamLimits

0xe761,	// (0x00023b78) volume_small_pane_srt_g7

0xe772,	// (0x00023b89) volume_small_pane_srt_g8_ParamLimits

0xe772,	// (0x00023b89) volume_small_pane_srt_g8

0xe783,	// (0x00023b9a) volume_small_pane_srt_g9_ParamLimits

0xe783,	// (0x00023b9a) volume_small_pane_srt_g9

0xe794,	// (0x00023bab) volume_small_pane_srt_g10_ParamLimits

0xe794,	// (0x00023bab) volume_small_pane_srt_g10

0x0009,

0xf724,	// (0x00024b3b) volume_small_pane_srt_g_ParamLimits

0xf724,	// (0x00024b3b) volume_small_pane_srt_g

0x9849,	// (0x0001ec60) query_popup_data_pane_cp2

0x2b79,	// (0x00017f90) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x2b79,	// (0x00017f90) navi_navi_icon_text_pane_srt_t1

0x1b89,	// (0x00016fa0) navi_tabs_2_long_pane_srt

0x1b89,	// (0x00016fa0) navi_tabs_2_pane_srt

0x1b89,	// (0x00016fa0) navi_tabs_3_long_pane_srt

0x1b89,	// (0x00016fa0) navi_tabs_3_pane_srt

0x1b89,	// (0x00016fa0) navi_tabs_4_pane_srt

0x8d41,	// (0x0001e158) tabs_2_active_pane_srt_ParamLimits

0x8d41,	// (0x0001e158) tabs_2_active_pane_srt

0x8d51,	// (0x0001e168) tabs_2_passive_pane_srt_ParamLimits

0x8d51,	// (0x0001e168) tabs_2_passive_pane_srt

0x12f7,	// (0x0001670e) bg_passive_tab_pane_cp1_srt_ParamLimits

0x12f7,	// (0x0001670e) bg_passive_tab_pane_cp1_srt

0xb40c,	// (0x00020823) bg_passive_tab_pane_g1_cp1_srt

0xa39e,	// (0x0001f7b5) bg_passive_tab_pane_g2_cp1_srt

0xb415,	// (0x0002082c) bg_passive_tab_pane_g3_cp1_srt

0xc265,	// (0x0002167c) bg_active_tab_pane_cp1_srt_ParamLimits

0xc265,	// (0x0002167c) bg_active_tab_pane_cp1_srt

0xb41e,	// (0x00020835) tabs_2_active_pane_srt_g1

0xb426,	// (0x0002083d) tabs_2_active_pane_srt_t1_ParamLimits

0xb426,	// (0x0002083d) tabs_2_active_pane_srt_t1

0xb40c,	// (0x00020823) bg_active_tab_pane_g1_cp1_srt

0xa39e,	// (0x0001f7b5) bg_active_tab_pane_g2_cp1_srt

0xb415,	// (0x0002082c) bg_active_tab_pane_g3_cp1_srt

0x8d0e,	// (0x0001e125) tabs_3_active_pane_srt_ParamLimits

0x8d0e,	// (0x0001e125) tabs_3_active_pane_srt

0x8d1f,	// (0x0001e136) tabs_3_passive_pane_cp_srt_ParamLimits

0x8d1f,	// (0x0001e136) tabs_3_passive_pane_cp_srt

0x8d30,	// (0x0001e147) tabs_3_passive_pane_srt_ParamLimits

0x8d30,	// (0x0001e147) tabs_3_passive_pane_srt

0x12f7,	// (0x0001670e) bg_passive_tab_pane_cp2_srt_ParamLimits

0x12f7,	// (0x0001670e) bg_passive_tab_pane_cp2_srt

0xa560,	// (0x0001f977) bg_passive_tab_pane_g1_cp2_srt

0xa39e,	// (0x0001f7b5) bg_passive_tab_pane_g2_cp2_srt

0xa569,	// (0x0001f980) bg_passive_tab_pane_g3_cp2_srt

0xc265,	// (0x0002167c) bg_active_tab_pane_cp2_srt_ParamLimits

0xc265,	// (0x0002167c) bg_active_tab_pane_cp2_srt

0xb3ee,	// (0x00020805) tabs_3_active_pane_srt_g1

0xb3f6,	// (0x0002080d) tabs_3_active_pane_srt_t1_ParamLimits

0xb3f6,	// (0x0002080d) tabs_3_active_pane_srt_t1

0xa560,	// (0x0001f977) bg_active_tab_pane_g1_cp2_srt

0xa39e,	// (0x0001f7b5) bg_active_tab_pane_g2_cp2_srt

0xa569,	// (0x0001f980) bg_active_tab_pane_g3_cp2_srt

0xeabe,	// (0x00023ed5) tabs_4_active_pane_srt_ParamLimits

0xeabe,	// (0x00023ed5) tabs_4_active_pane_srt

0xead0,	// (0x00023ee7) tabs_4_passive_pane_cp2_srt_ParamLimits

0xead0,	// (0x00023ee7) tabs_4_passive_pane_cp2_srt

0xe7b4,	// (0x00023bcb) aid_size_cell_toolbar

0x2699,	// (0x00017ab0) main_idle_act_pane_ParamLimits

0xe818,	// (0x00023c2f) popup_large_graphic_colour_window_ParamLimits

0x8af5,	// (0x0001df0c) popup_toolbar_window_ParamLimits

0x8af5,	// (0x0001df0c) popup_toolbar_window

0x289c,	// (0x00017cb3) list_single_graphic_2heading_pane_ParamLimits

0x289c,	// (0x00017cb3) list_single_graphic_2heading_pane

0xc9ea,	// (0x00021e01) aid_size_cell_apps_grid_lsc_pane

0xc9fc,	// (0x00021e13) aid_size_cell_apps_grid_prt_pane

0xc85d,	// (0x00021c74) bg_wml_button_pane_cp1_ParamLimits

0xc85d,	// (0x00021c74) bg_wml_button_pane_cp1

0xab24,	// (0x0001ff3b) form_midp_field_text_pane_t1_ParamLimits

0x12f7,	// (0x0001670e) input_focus_pane_cp050_ParamLimits

0x1576,	// (0x0001698d) list_midp_form_text_pane_ParamLimits

0x1519,	// (0x00016930) input_focus_pane_cp051_ParamLimits

0x152d,	// (0x00016944) list_midp_choice_pane_ParamLimits

0xaa89,	// (0x0001fea0) list_single_2graphic_pane_cp3_ParamLimits

0xaa89,	// (0x0001fea0) list_single_2graphic_pane_cp3

0xaa9d,	// (0x0001feb4) list_single_midp_graphic_pane_ParamLimits

0xaa9d,	// (0x0001feb4) list_single_midp_graphic_pane

0xe846,	// (0x00023c5d) list_single_graphic_2heading_pane_g1_ParamLimits

0xe846,	// (0x00023c5d) list_single_graphic_2heading_pane_g1

0xe852,	// (0x00023c69) list_single_graphic_2heading_pane_g4_ParamLimits

0xe852,	// (0x00023c69) list_single_graphic_2heading_pane_g4

0xe85e,	// (0x00023c75) list_single_graphic_2heading_pane_g5_ParamLimits

0xe85e,	// (0x00023c75) list_single_graphic_2heading_pane_g5

0x0002,

0xf777,	// (0x00024b8e) list_single_graphic_2heading_pane_g_ParamLimits

0xf777,	// (0x00024b8e) list_single_graphic_2heading_pane_g

0xe86a,	// (0x00023c81) list_single_graphic_2heading_pane_t1_ParamLimits

0xe86a,	// (0x00023c81) list_single_graphic_2heading_pane_t1

0xe87e,	// (0x00023c95) list_single_graphic_2heading_pane_t2_ParamLimits

0xe87e,	// (0x00023c95) list_single_graphic_2heading_pane_t2

0xe898,	// (0x00023caf) list_single_graphic_2heading_pane_t3_ParamLimits

0xe898,	// (0x00023caf) list_single_graphic_2heading_pane_t3

0x0002,

0xf77e,	// (0x00024b95) list_single_graphic_2heading_pane_t_ParamLimits

0xf77e,	// (0x00024b95) list_single_graphic_2heading_pane_t

0x10e7,	// (0x000164fe) bg_popup_sub_pane_cp2

0x1111,	// (0x00016528) grid_toobar_pane

0xe8b0,	// (0x00023cc7) cell_toolbar_pane_ParamLimits

0xe8b0,	// (0x00023cc7) cell_toolbar_pane

0x117b,	// (0x00016592) cell_toolbar_pane_g1_ParamLimits

0x117b,	// (0x00016592) cell_toolbar_pane_g1

0xaa49,	// (0x0001fe60) cell_toolbar_pane_g2_ParamLimits

0xaa49,	// (0x0001fe60) cell_toolbar_pane_g2

0x0001,

0xf785,	// (0x00024b9c) cell_toolbar_pane_g_ParamLimits

0xf785,	// (0x00024b9c) cell_toolbar_pane_g

0x11b1,	// (0x000165c8) grid_highlight_pane_cp2_ParamLimits

0x11b1,	// (0x000165c8) grid_highlight_pane_cp2

0x11cb,	// (0x000165e2) toolbar_button_pane

0x11d7,	// (0x000165ee) toolbar_button_pane_g1

0x11df,	// (0x000165f6) toolbar_button_pane_g2

0x11e7,	// (0x000165fe) toolbar_button_pane_g3

0x11ef,	// (0x00016606) toolbar_button_pane_g4

0x11f7,	// (0x0001660e) toolbar_button_pane_g5

0x11ff,	// (0x00016616) toolbar_button_pane_g6

0x1207,	// (0x0001661e) toolbar_button_pane_g7

0x120f,	// (0x00016626) toolbar_button_pane_g8

0x1217,	// (0x0001662e) toolbar_button_pane_g9

0x0009,

0xf78a,	// (0x00024ba1) toolbar_button_pane_g

0xe8e8,	// (0x00023cff) list_single_2graphic_pane_g1_cp3_ParamLimits

0xe8e8,	// (0x00023cff) list_single_2graphic_pane_g1_cp3

0x8ba2,	// (0x0001dfb9) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8ba2,	// (0x0001dfb9) list_single_2graphic_pane_g2_cp3

0xe8f4,	// (0x00023d0b) list_single_2graphic_pane_g3_cp3

0xe8fc,	// (0x00023d13) list_single_2graphic_pane_g4_cp3_ParamLimits

0xe8fc,	// (0x00023d13) list_single_2graphic_pane_g4_cp3

0x8bb3,	// (0x0001dfca) list_single_2graphic_pane_t1_cp3_ParamLimits

0x8bb3,	// (0x0001dfca) list_single_2graphic_pane_t1_cp3

0xe908,	// (0x00023d1f) list_single_midp_graphic_pane_g2_ParamLimits

0xe908,	// (0x00023d1f) list_single_midp_graphic_pane_g2

0xe7bc,	// (0x00023bd3) aid_zoom_text_primary

0xe7c4,	// (0x00023bdb) aid_zoom_text_secondary

0xa5c0,	// (0x0001f9d7) status_small_pane_g7_ParamLimits

0xa5c0,	// (0x0001f9d7) status_small_pane_g7

0xa5e3,	// (0x0001f9fa) status_small_pane_t1_ParamLimits

0x9521,	// (0x0001e938) title_pane_g2

0x0003,

0xf529,	// (0x00024940) title_pane_g

0x98a3,	// (0x0001ecba) aid_size_cell_colour_1_pane_ParamLimits

0x98a3,	// (0x0001ecba) aid_size_cell_colour_1_pane

0x98b7,	// (0x0001ecce) aid_size_cell_colour_2_pane_ParamLimits

0x98b7,	// (0x0001ecce) aid_size_cell_colour_2_pane

0x98cb,	// (0x0001ece2) aid_size_cell_colour_3_pane_ParamLimits

0x98cb,	// (0x0001ece2) aid_size_cell_colour_3_pane

0x98df,	// (0x0001ecf6) aid_size_cell_colour_4_pane_ParamLimits

0x98df,	// (0x0001ecf6) aid_size_cell_colour_4_pane

0xe3b9,	// (0x000237d0) title_pane_stacon_g1_ParamLimits

0xe3b9,	// (0x000237d0) title_pane_stacon_g1

0x1978,	// (0x00016d8f) popup_note_wait_window_g3_ParamLimits

0x1978,	// (0x00016d8f) popup_note_wait_window_g3

0x19ee,	// (0x00016e05) popup_note_wait_window_t5_ParamLimits

0x19ee,	// (0x00016e05) popup_note_wait_window_t5

0xc217,	// (0x0002162e) main_feb_china_hwr_fs_writing_pane

0x84a9,	// (0x0001d8c0) popup_feb_china_hwr_fs_window_ParamLimits

0x84a9,	// (0x0001d8c0) popup_feb_china_hwr_fs_window

0x8bcf,	// (0x0001dfe6) aid_size_cell_hwr_fs_ParamLimits

0x8bcf,	// (0x0001dfe6) aid_size_cell_hwr_fs

0x12f7,	// (0x0001670e) bg_popup_sub_pane_cp3_ParamLimits

0x12f7,	// (0x0001670e) bg_popup_sub_pane_cp3

0x8be4,	// (0x0001dffb) grid_hwr_fs_pane_ParamLimits

0x8be4,	// (0x0001dffb) grid_hwr_fs_pane

0xe92a,	// (0x00023d41) linegrid_hwr_fs_pane_ParamLimits

0xe92a,	// (0x00023d41) linegrid_hwr_fs_pane

0x8bfc,	// (0x0001e013) cell_hwr_fs_pane_ParamLimits

0x8bfc,	// (0x0001e013) cell_hwr_fs_pane

0x1303,	// (0x0001671a) linegrid_hwr_fs_pane_g1_ParamLimits

0x1303,	// (0x0001671a) linegrid_hwr_fs_pane_g1

0xaa5d,	// (0x0001fe74) linegrid_hwr_fs_pane_g2_ParamLimits

0xaa5d,	// (0x0001fe74) linegrid_hwr_fs_pane_g2

0x1321,	// (0x00016738) linegrid_hwr_fs_pane_g3_ParamLimits

0x1321,	// (0x00016738) linegrid_hwr_fs_pane_g3

0x8c22,	// (0x0001e039) linegrid_hwr_fs_pane_g4_ParamLimits

0x8c22,	// (0x0001e039) linegrid_hwr_fs_pane_g4

0xe93a,	// (0x00023d51) linegrid_hwr_fs_pane_g5_ParamLimits

0xe93a,	// (0x00023d51) linegrid_hwr_fs_pane_g5

0x0004,

0xf7b0,	// (0x00024bc7) linegrid_hwr_fs_pane_g_ParamLimits

0xf7b0,	// (0x00024bc7) linegrid_hwr_fs_pane_g

0x132d,	// (0x00016744) cell_hwr_fs_pane_g1_ParamLimits

0x132d,	// (0x00016744) cell_hwr_fs_pane_g1

0x1021,	// (0x00016438) cell_hwr_fs_pane_g2_ParamLimits

0x1021,	// (0x00016438) cell_hwr_fs_pane_g2

0xaa6f,	// (0x0001fe86) cell_hwr_fs_pane_g3_ParamLimits

0xaa6f,	// (0x0001fe86) cell_hwr_fs_pane_g3

0xaa7c,	// (0x0001fe93) cell_hwr_fs_pane_g4_ParamLimits

0xaa7c,	// (0x0001fe93) cell_hwr_fs_pane_g4

0x0003,

0xf7bb,	// (0x00024bd2) cell_hwr_fs_pane_g_ParamLimits

0xf7bb,	// (0x00024bd2) cell_hwr_fs_pane_g

0x8c3c,	// (0x0001e053) cell_hwr_fs_pane_t1

0xc217,	// (0x0002162e) grid_highlight_pane_cp6

0xc217,	// (0x0002162e) main_idle_act2_pane

0xc834,	// (0x00021c4b) aid_inside_area_popup_secondary

0xaec8,	// (0x000202df) aid_inside_area_window_primary_ParamLimits

0xaec8,	// (0x000202df) aid_inside_area_window_primary

0xb444,	// (0x0002085b) ai2_news_ticker_pane

0x2c9a,	// (0x000180b1) aid_size_cell_ai1_link_ParamLimits

0x2c9a,	// (0x000180b1) aid_size_cell_ai1_link

0xb44c,	// (0x00020863) popup_ai2_data_window_ParamLimits

0xb44c,	// (0x00020863) popup_ai2_data_window

0x2cca,	// (0x000180e1) popup_ai2_link_window_ParamLimits

0x2cca,	// (0x000180e1) popup_ai2_link_window

0x12f7,	// (0x0001670e) bg_popup_sub_pane_cp4_ParamLimits

0x12f7,	// (0x0001670e) bg_popup_sub_pane_cp4

0x2cde,	// (0x000180f5) grid_ai2_link_pane_ParamLimits

0x2cde,	// (0x000180f5) grid_ai2_link_pane

0x2cf5,	// (0x0001810c) popup_ai2_link_window_g1_ParamLimits

0x2cf5,	// (0x0001810c) popup_ai2_link_window_g1

0x2d01,	// (0x00018118) popup_ai2_link_window_g2_ParamLimits

0x2d01,	// (0x00018118) popup_ai2_link_window_g2

0x0001,

0xf98e,	// (0x00024da5) popup_ai2_link_window_g_ParamLimits

0xf98e,	// (0x00024da5) popup_ai2_link_window_g

0x2d10,	// (0x00018127) ai2_mp_button_pane

0x2d18,	// (0x0001812f) ai2_mp_volume_pane

0x1519,	// (0x00016930) bg_popup_sub_pane_cp5_ParamLimits

0x1519,	// (0x00016930) bg_popup_sub_pane_cp5

0x2d20,	// (0x00018137) heading_ai2_gene_pane_ParamLimits

0x2d20,	// (0x00018137) heading_ai2_gene_pane

0x2d2c,	// (0x00018143) list_ai2_gene_pane_ParamLimits

0x2d2c,	// (0x00018143) list_ai2_gene_pane

0x2d74,	// (0x0001818b) cell_ai2_link_pane_ParamLimits

0x2d74,	// (0x0001818b) cell_ai2_link_pane

0x2d8a,	// (0x000181a1) cell_ai2_link_pane_g1

0xc217,	// (0x0002162e) grid_highlight_pane_cp7

0xeb23,	// (0x00023f3a) ai2_mp_volume_pane_g1

0x2e5a,	// (0x00018271) ai2_mp_volume_pane_g2

0x2dcf,	// (0x000181e6) list_ai2_gene_pane_t1

0x2e62,	// (0x00018279) ai2_mp_volume_pane_g3

0x0002,

0xf9a7,	// (0x00024dbe) ai2_mp_volume_pane_g

0x8d61,	// (0x0001e178) volume_small_pane_cp3

0x2e6a,	// (0x00018281) aid_size_cell_ai2_button

0x2e72,	// (0x00018289) grid_ai2_button_pane

0x2e7b,	// (0x00018292) cell_ai2_button_pane_ParamLimits

0x2e7b,	// (0x00018292) cell_ai2_button_pane

0xc20d,	// (0x00021624) cell_ai2_button_pane_g1

0xc217,	// (0x0002162e) grid_highlight_pane_cp8

0x2e1a,	// (0x00018231) ai2_gene_pane_t1_ParamLimits

0x2e1a,	// (0x00018231) ai2_gene_pane_t1

0x8413,	// (0x0001d82a) aid_height_parent_landscape

0xb128,	// (0x0002053f) aid_height_set_list

0x2699,	// (0x00017ab0) aid_size_parent

0x2ab5,	// (0x00017ecc) aid_size_cell_graphic_pane_ParamLimits

0x2d3c,	// (0x00018153) popup_ai2_data_window_g1_ParamLimits

0x2d3c,	// (0x00018153) popup_ai2_data_window_g1

0x2d48,	// (0x0001815f) ai2_news_ticker_pane_g1

0x2d50,	// (0x00018167) ai2_news_ticker_pane_g2

0x0001,

0xf993,	// (0x00024daa) ai2_news_ticker_pane_g

0x2d58,	// (0x0001816f) ai2_news_ticker_pane_t1

0x2d66,	// (0x0001817d) ai2_news_ticker_pane_t2

0x0001,

0xf998,	// (0x00024daf) ai2_news_ticker_pane_t

0x2d93,	// (0x000181aa) heading_ai2_gene_pane_g1

0x2d9b,	// (0x000181b2) heading_ai2_gene_pane_t1_ParamLimits

0x2d9b,	// (0x000181b2) heading_ai2_gene_pane_t1

0x2db0,	// (0x000181c7) list_highlight_pane_cp6

0x2db8,	// (0x000181cf) ai2_gene_pane_ParamLimits

0x2db8,	// (0x000181cf) ai2_gene_pane

0x2ddd,	// (0x000181f4) list_ai2_gene_pane_t2

0x0001,

0xf99d,	// (0x00024db4) list_ai2_gene_pane_t

0x2deb,	// (0x00018202) list_highlight_pane_cp8_ParamLimits

0x2deb,	// (0x00018202) list_highlight_pane_cp8

0x2dfc,	// (0x00018213) ai2_gene_pane_g1_ParamLimits

0x2dfc,	// (0x00018213) ai2_gene_pane_g1

0x2e0e,	// (0x00018225) ai2_gene_pane_g2_ParamLimits

0x2e0e,	// (0x00018225) ai2_gene_pane_g2

0x0001,

0xf9a2,	// (0x00024db9) ai2_gene_pane_g_ParamLimits

0xf9a2,	// (0x00024db9) ai2_gene_pane_g

0xc5e2,	// (0x000219f9) scroll_pane_cp12

0x83d0,	// (0x0001d7e7) control_pane_t3_ParamLimits

0x83d0,	// (0x0001d7e7) control_pane_t3

0xa5d4,	// (0x0001f9eb) status_small_pane_g8_ParamLimits

0xa5d4,	// (0x0001f9eb) status_small_pane_g8

0x856c,	// (0x0001d983) popup_find_window_ParamLimits

0x87f9,	// (0x0001dc10) popup_note_image_window_ParamLimits

0x114d,	// (0x00016564) list_double2_graphic_pane_vc_g1_ParamLimits

0x114d,	// (0x00016564) list_double2_graphic_pane_vc_g1

0xc5f3,	// (0x00021a0a) list_double2_graphic_pane_vc_g2_ParamLimits

0xc5f3,	// (0x00021a0a) list_double2_graphic_pane_vc_g2

0x1159,	// (0x00016570) list_double2_graphic_pane_vc_g3_ParamLimits

0x1159,	// (0x00016570) list_double2_graphic_pane_vc_g3

0x0002,

0xf59c,	// (0x000249b3) list_double2_graphic_pane_vc_g_ParamLimits

0xf59c,	// (0x000249b3) list_double2_graphic_pane_vc_g

0x1165,	// (0x0001657c) list_double2_graphic_pane_vc_t1_ParamLimits

0x1165,	// (0x0001657c) list_double2_graphic_pane_vc_t1

0xc5f3,	// (0x00021a0a) list_single_heading_pane_vc_g1_ParamLimits

0xc5f3,	// (0x00021a0a) list_single_heading_pane_vc_g1

0x1159,	// (0x00016570) list_single_heading_pane_vc_g2_ParamLimits

0x1159,	// (0x00016570) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x000249ba) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x000249ba) list_single_heading_pane_vc_g

0x121f,	// (0x00016636) list_single_heading_pane_vc_t1_ParamLimits

0x121f,	// (0x00016636) list_single_heading_pane_vc_t1

0x1235,	// (0x0001664c) list_single_heading_pane_vc_t2_ParamLimits

0x1235,	// (0x0001664c) list_single_heading_pane_vc_t2

0x0001,

0xf79f,	// (0x00024bb6) list_single_heading_pane_vc_t_ParamLimits

0xf79f,	// (0x00024bb6) list_single_heading_pane_vc_t

0x1247,	// (0x0001665e) list_setting_number_pane_vc_g1_ParamLimits

0x1247,	// (0x0001665e) list_setting_number_pane_vc_g1

0x1253,	// (0x0001666a) list_setting_number_pane_vc_g2_ParamLimits

0x1253,	// (0x0001666a) list_setting_number_pane_vc_g2

0x0001,

0xf7a4,	// (0x00024bbb) list_setting_number_pane_vc_g_ParamLimits

0xf7a4,	// (0x00024bbb) list_setting_number_pane_vc_g

0x125f,	// (0x00016676) list_setting_number_pane_vc_t1_ParamLimits

0x125f,	// (0x00016676) list_setting_number_pane_vc_t1

0x1273,	// (0x0001668a) list_setting_number_pane_vc_t2_ParamLimits

0x1273,	// (0x0001668a) list_setting_number_pane_vc_t2

0x128f,	// (0x000166a6) list_setting_number_pane_vc_t3_ParamLimits

0x128f,	// (0x000166a6) list_setting_number_pane_vc_t3

0x0002,

0xf7a9,	// (0x00024bc0) list_setting_number_pane_vc_t_ParamLimits

0xf7a9,	// (0x00024bc0) list_setting_number_pane_vc_t

0x12bb,	// (0x000166d2) set_value_pane_vc_ParamLimits

0x12bb,	// (0x000166d2) set_value_pane_vc

0x289c,	// (0x00017cb3) list_double2_graphic_pane_vc_ParamLimits

0x289c,	// (0x00017cb3) list_double2_graphic_pane_vc

0x28af,	// (0x00017cc6) list_double2_large_graphic_pane_vc_ParamLimits

0x28af,	// (0x00017cc6) list_double2_large_graphic_pane_vc

0x289c,	// (0x00017cb3) list_double2_pane_vc_ParamLimits

0x289c,	// (0x00017cb3) list_double2_pane_vc

0x289c,	// (0x00017cb3) list_double_graphic_heading_pane_vc_ParamLimits

0x289c,	// (0x00017cb3) list_double_graphic_heading_pane_vc

0x289c,	// (0x00017cb3) list_double_graphic_pane_vc_ParamLimits

0x289c,	// (0x00017cb3) list_double_graphic_pane_vc

0x289c,	// (0x00017cb3) list_double_heading_pane_vc_ParamLimits

0x289c,	// (0x00017cb3) list_double_heading_pane_vc

0x28c1,	// (0x00017cd8) list_double_large_graphic_pane_vc_ParamLimits

0x28c1,	// (0x00017cd8) list_double_large_graphic_pane_vc

0x289c,	// (0x00017cb3) list_double_number_pane_vc_ParamLimits

0x289c,	// (0x00017cb3) list_double_number_pane_vc

0x289c,	// (0x00017cb3) list_double_pane_vc_ParamLimits

0x289c,	// (0x00017cb3) list_double_pane_vc

0x289c,	// (0x00017cb3) list_double_time_pane_vc_ParamLimits

0x289c,	// (0x00017cb3) list_double_time_pane_vc

0x289c,	// (0x00017cb3) list_setting_number_pane_vc_ParamLimits

0x289c,	// (0x00017cb3) list_setting_number_pane_vc

0x289c,	// (0x00017cb3) list_setting_pane_vc_ParamLimits

0x289c,	// (0x00017cb3) list_setting_pane_vc

0x289c,	// (0x00017cb3) list_single_graphic_heading_pane_vc_ParamLimits

0x289c,	// (0x00017cb3) list_single_graphic_heading_pane_vc

0x289c,	// (0x00017cb3) list_single_heading_pane_vc_ParamLimits

0x289c,	// (0x00017cb3) list_single_heading_pane_vc

0x289c,	// (0x00017cb3) list_single_number_heading_pane_vc_ParamLimits

0x289c,	// (0x00017cb3) list_single_number_heading_pane_vc

0x2eaf,	// (0x000182c6) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x2eaf,	// (0x000182c6) list_double_graphic_heading_pane_vc_g1

0xc5f3,	// (0x00021a0a) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xc5f3,	// (0x00021a0a) list_double_graphic_heading_pane_vc_g2

0x1159,	// (0x00016570) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x1159,	// (0x00016570) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ae,	// (0x00024dc5) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ae,	// (0x00024dc5) list_double_graphic_heading_pane_vc_g

0x2ebb,	// (0x000182d2) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x2ebb,	// (0x000182d2) list_double_graphic_heading_pane_vc_t1

0x2ecf,	// (0x000182e6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x2ecf,	// (0x000182e6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9b5,	// (0x00024dcc) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9b5,	// (0x00024dcc) list_double_graphic_heading_pane_vc_t

0x1247,	// (0x0001665e) list_setting_pane_vc_g1_ParamLimits

0x1247,	// (0x0001665e) list_setting_pane_vc_g1

0x1253,	// (0x0001666a) list_setting_pane_vc_g2_ParamLimits

0x1253,	// (0x0001666a) list_setting_pane_vc_g2

0x0001,

0xf7a4,	// (0x00024bbb) list_setting_pane_vc_g_ParamLimits

0xf7a4,	// (0x00024bbb) list_setting_pane_vc_g

0x30ec,	// (0x00018503) list_setting_pane_vc_t1_ParamLimits

0x30ec,	// (0x00018503) list_setting_pane_vc_t1

0x3108,	// (0x0001851f) list_setting_pane_vc_t2_ParamLimits

0x3108,	// (0x0001851f) list_setting_pane_vc_t2

0x0001,

0xf9f8,	// (0x00024e0f) list_setting_pane_vc_t_ParamLimits

0xf9f8,	// (0x00024e0f) list_setting_pane_vc_t

0x12bb,	// (0x000166d2) set_value_pane_cp_vc_ParamLimits

0x12bb,	// (0x000166d2) set_value_pane_cp_vc

0xc5f3,	// (0x00021a0a) list_single_number_heading_pane_vc_g1_ParamLimits

0xc5f3,	// (0x00021a0a) list_single_number_heading_pane_vc_g1

0x1159,	// (0x00016570) list_single_number_heading_pane_vc_g2_ParamLimits

0x1159,	// (0x00016570) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x000249ba) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x000249ba) list_single_number_heading_pane_vc_g

0x3122,	// (0x00018539) list_single_number_heading_pane_vc_t1_ParamLimits

0x3122,	// (0x00018539) list_single_number_heading_pane_vc_t1

0x3138,	// (0x0001854f) list_single_number_heading_pane_vc_t2_ParamLimits

0x3138,	// (0x0001854f) list_single_number_heading_pane_vc_t2

0x314a,	// (0x00018561) list_single_number_heading_pane_vc_t3_ParamLimits

0x314a,	// (0x00018561) list_single_number_heading_pane_vc_t3

0x0002,

0xf9fd,	// (0x00024e14) list_single_number_heading_pane_vc_t_ParamLimits

0xf9fd,	// (0x00024e14) list_single_number_heading_pane_vc_t

0x315c,	// (0x00018573) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x315c,	// (0x00018573) list_single_graphic_heading_pane_vc_g1

0xc5f3,	// (0x00021a0a) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xc5f3,	// (0x00021a0a) list_single_graphic_heading_pane_vc_g4

0x1159,	// (0x00016570) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1159,	// (0x00016570) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa04,	// (0x00024e1b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x00024e1b) list_single_graphic_heading_pane_vc_g

0x1f4e,	// (0x00017365) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x1f4e,	// (0x00017365) list_single_graphic_heading_pane_vc_t1

0x3168,	// (0x0001857f) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3168,	// (0x0001857f) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0b,	// (0x00024e22) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0b,	// (0x00024e22) list_single_graphic_heading_pane_vc_t

0xc5f3,	// (0x00021a0a) list_double2_pane_vc_g1_ParamLimits

0xc5f3,	// (0x00021a0a) list_double2_pane_vc_g1

0x1159,	// (0x00016570) list_double2_pane_vc_g2_ParamLimits

0x1159,	// (0x00016570) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x000249ba) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x000249ba) list_double2_pane_vc_g

0x317a,	// (0x00018591) list_double2_pane_vc_t1_ParamLimits

0x317a,	// (0x00018591) list_double2_pane_vc_t1

0x3192,	// (0x000185a9) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3192,	// (0x000185a9) list_double2_large_graphic_pane_vc_g1

0x319e,	// (0x000185b5) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x319e,	// (0x000185b5) list_double2_large_graphic_pane_vc_g2

0x31aa,	// (0x000185c1) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x31aa,	// (0x000185c1) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x000249d7) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x000249d7) list_double2_large_graphic_pane_vc_g

0x31b6,	// (0x000185cd) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x31b6,	// (0x000185cd) list_double2_large_graphic_pane_vc_t1

0x31cc,	// (0x000185e3) list_double_time_pane_vc_g1_ParamLimits

0x31cc,	// (0x000185e3) list_double_time_pane_vc_g1

0x31d8,	// (0x000185ef) list_double_time_pane_vc_g2_ParamLimits

0x31d8,	// (0x000185ef) list_double_time_pane_vc_g2

0x0001,

0xfa10,	// (0x00024e27) list_double_time_pane_vc_g_ParamLimits

0xfa10,	// (0x00024e27) list_double_time_pane_vc_g

0x31e4,	// (0x000185fb) list_double_time_pane_vc_t1_ParamLimits

0x31e4,	// (0x000185fb) list_double_time_pane_vc_t1

0x3208,	// (0x0001861f) list_double_time_pane_vc_t2_ParamLimits

0x3208,	// (0x0001861f) list_double_time_pane_vc_t2

0x3237,	// (0x0001864e) list_double_time_pane_vc_t3_ParamLimits

0x3237,	// (0x0001864e) list_double_time_pane_vc_t3

0x3249,	// (0x00018660) list_double_time_pane_vc_t4_ParamLimits

0x3249,	// (0x00018660) list_double_time_pane_vc_t4

0x0003,

0xfa15,	// (0x00024e2c) list_double_time_pane_vc_t_ParamLimits

0xfa15,	// (0x00024e2c) list_double_time_pane_vc_t

0xc5f3,	// (0x00021a0a) list_double_pane_vc_g1_ParamLimits

0xc5f3,	// (0x00021a0a) list_double_pane_vc_g1

0x1159,	// (0x00016570) list_double_pane_vc_g2_ParamLimits

0x1159,	// (0x00016570) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x000249ba) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x000249ba) list_double_pane_vc_g

0x325d,	// (0x00018674) list_double_pane_vc_t1_ParamLimits

0x325d,	// (0x00018674) list_double_pane_vc_t1

0x3271,	// (0x00018688) list_double_pane_vc_t2_ParamLimits

0x3271,	// (0x00018688) list_double_pane_vc_t2

0x0001,

0xfa1e,	// (0x00024e35) list_double_pane_vc_t_ParamLimits

0xfa1e,	// (0x00024e35) list_double_pane_vc_t

0xc5f3,	// (0x00021a0a) list_double_number_pane_vc_g1_ParamLimits

0xc5f3,	// (0x00021a0a) list_double_number_pane_vc_g1

0x1159,	// (0x00016570) list_double_number_pane_vc_g2_ParamLimits

0x1159,	// (0x00016570) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x000249ba) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x000249ba) list_double_number_pane_vc_g

0x3289,	// (0x000186a0) list_double_number_pane_vc_t1_ParamLimits

0x3289,	// (0x000186a0) list_double_number_pane_vc_t1

0x325d,	// (0x00018674) list_double_number_pane_vc_t2_ParamLimits

0x325d,	// (0x00018674) list_double_number_pane_vc_t2

0x329b,	// (0x000186b2) list_double_number_pane_vc_t3_ParamLimits

0x329b,	// (0x000186b2) list_double_number_pane_vc_t3

0x0002,

0xfa23,	// (0x00024e3a) list_double_number_pane_vc_t_ParamLimits

0xfa23,	// (0x00024e3a) list_double_number_pane_vc_t

0x32b3,	// (0x000186ca) list_double_large_graphic_pane_vc_g1_ParamLimits

0x32b3,	// (0x000186ca) list_double_large_graphic_pane_vc_g1

0x32cf,	// (0x000186e6) list_double_large_graphic_pane_vc_g2_ParamLimits

0x32cf,	// (0x000186e6) list_double_large_graphic_pane_vc_g2

0x32e3,	// (0x000186fa) list_double_large_graphic_pane_vc_g3_ParamLimits

0x32e3,	// (0x000186fa) list_double_large_graphic_pane_vc_g3

0x32f2,	// (0x00018709) list_double_large_graphic_pane_vc_g4_ParamLimits

0x32f2,	// (0x00018709) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa2a,	// (0x00024e41) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa2a,	// (0x00024e41) list_double_large_graphic_pane_vc_g

0x3301,	// (0x00018718) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3301,	// (0x00018718) list_double_large_graphic_pane_vc_t1

0x331d,	// (0x00018734) list_double_large_graphic_pane_vc_t2_ParamLimits

0x331d,	// (0x00018734) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa33,	// (0x00024e4a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa33,	// (0x00024e4a) list_double_large_graphic_pane_vc_t

0xc5f3,	// (0x00021a0a) list_double_heading_pane_vc_g1_ParamLimits

0xc5f3,	// (0x00021a0a) list_double_heading_pane_vc_g1

0x1159,	// (0x00016570) list_double_heading_pane_vc_g2_ParamLimits

0x1159,	// (0x00016570) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x000249ba) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x000249ba) list_double_heading_pane_vc_g

0x333f,	// (0x00018756) list_double_heading_pane_vc_t1_ParamLimits

0x333f,	// (0x00018756) list_double_heading_pane_vc_t1

0x3353,	// (0x0001876a) list_double_heading_pane_vc_t2_ParamLimits

0x3353,	// (0x0001876a) list_double_heading_pane_vc_t2

0x0001,

0xfa38,	// (0x00024e4f) list_double_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x00024e4f) list_double_heading_pane_vc_t

0x336b,	// (0x00018782) list_double_graphic_pane_vc_g1_ParamLimits

0x336b,	// (0x00018782) list_double_graphic_pane_vc_g1

0x337e,	// (0x00018795) list_double_graphic_pane_vc_g2_ParamLimits

0x337e,	// (0x00018795) list_double_graphic_pane_vc_g2

0xc5f3,	// (0x00021a0a) list_double_graphic_pane_vc_g3_ParamLimits

0xc5f3,	// (0x00021a0a) list_double_graphic_pane_vc_g3

0x0003,

0xfa3d,	// (0x00024e54) list_double_graphic_pane_vc_g_ParamLimits

0xfa3d,	// (0x00024e54) list_double_graphic_pane_vc_g

0x339b,	// (0x000187b2) list_double_graphic_pane_vc_t1_ParamLimits

0x339b,	// (0x000187b2) list_double_graphic_pane_vc_t1

0x33ba,	// (0x000187d1) list_double_graphic_pane_vc_t2_ParamLimits

0x33ba,	// (0x000187d1) list_double_graphic_pane_vc_t2

0x0001,

0xfa46,	// (0x00024e5d) list_double_graphic_pane_vc_t_ParamLimits

0xfa46,	// (0x00024e5d) list_double_graphic_pane_vc_t

0xe1fd,	// (0x00023614) aid_size_cell_fastswap

0x7f8b,	// (0x0001d3a2) aid_size_cell_touch_ParamLimits

0x7f8b,	// (0x0001d3a2) aid_size_cell_touch

0xe35e,	// (0x00023775) popup_fast_swap_wide_window_ParamLimits

0xe35e,	// (0x00023775) popup_fast_swap_wide_window

0x815b,	// (0x0001d572) touch_pane_ParamLimits

0x815b,	// (0x0001d572) touch_pane

0xc676,	// (0x00021a8d) button_value_adjust_pane_cp2

0xc67e,	// (0x00021a95) button_value_adjust_pane_cp4

0xc686,	// (0x00021a9d) form_field_data_pane_cp2

0x9e82,	// (0x0001f299) form_field_data_wide_pane_cp2

0xca21,	// (0x00021e38) bg_scroll_pane_ParamLimits

0x824b,	// (0x0001d662) scroll_handle_pane_ParamLimits

0xe512,	// (0x00023929) scroll_sc2_down_pane_ParamLimits

0xe512,	// (0x00023929) scroll_sc2_down_pane

0xca52,	// (0x00021e69) scroll_sc2_up_pane_ParamLimits

0xca52,	// (0x00021e69) scroll_sc2_up_pane

0xb595,	// (0x000209ac) grid_wheel_folder_pane_g1_ParamLimits

0xb595,	// (0x000209ac) grid_wheel_folder_pane_g1

0xe694,	// (0x00023aab) clock_nsta_pane_cp2_ParamLimits

0xe694,	// (0x00023aab) clock_nsta_pane_cp2

0xa49a,	// (0x0001f8b1) listscroll_midp_pane_ParamLimits

0xa4a6,	// (0x0001f8bd) midp_canvas_pane

0xd0e2,	// (0x000224f9) nsta_clock_indic_pane

0xd10a,	// (0x00022521) listscroll_form_pane_vc

0xd112,	// (0x00022529) listscroll_set_pane_vc_ParamLimits

0xd112,	// (0x00022529) listscroll_set_pane_vc

0xa754,	// (0x0001fb6b) clock_nsta_pane

0xa77e,	// (0x0001fb95) indicator_nsta_pane

0x10e7,	// (0x000164fe) bg_popup_sub_pane_cp2_ParamLimits

0x10fb,	// (0x00016512) find_pane_cp2_ParamLimits

0x10fb,	// (0x00016512) find_pane_cp2

0x1111,	// (0x00016528) grid_toobar_pane_ParamLimits

0x12cb,	// (0x000166e2) list_form_gen_pane_vc_ParamLimits

0x12cb,	// (0x000166e2) list_form_gen_pane_vc

0x12e1,	// (0x000166f8) scroll_pane_cp8_vc_ParamLimits

0x12e1,	// (0x000166f8) scroll_pane_cp8_vc

0x135d,	// (0x00016774) data_form_wide_pane_vc_ParamLimits

0x135d,	// (0x00016774) data_form_wide_pane_vc

0x1369,	// (0x00016780) form_field_data_wide_pane_vc_g1

0x1371,	// (0x00016788) form_field_data_wide_pane_vc_t1_ParamLimits

0x1371,	// (0x00016788) form_field_data_wide_pane_vc_t1

0xc6ad,	// (0x00021ac4) input_focus_pane_cp6_vc_ParamLimits

0xc6ad,	// (0x00021ac4) input_focus_pane_cp6_vc

0x16ff,	// (0x00016b16) list_midp_pane_ParamLimits

0x2b1f,	// (0x00017f36) scroll_pane_cp16_ParamLimits

0x2b1f,	// (0x00017f36) scroll_pane_cp16

0x1755,	// (0x00016b6c) button_value_adjust_pane_ParamLimits

0x1755,	// (0x00016b6c) button_value_adjust_pane

0xb139,	// (0x00020550) button_value_adjust_pane_cp6_ParamLimits

0xb139,	// (0x00020550) button_value_adjust_pane_cp6

0xb253,	// (0x0002066a) settings_code_pane_cp_ParamLimits

0xb253,	// (0x0002066a) settings_code_pane_cp

0xc20d,	// (0x00021624) cell_touch_pane_g1

0xc20d,	// (0x00021624) cell_touch_pane_g2

0x0001,

0xf6ca,	// (0x00024ae1) cell_touch_pane_g

0xb462,	// (0x00020879) cell_touch_pane_cp_ParamLimits

0xb462,	// (0x00020879) cell_touch_pane_cp

0xb47e,	// (0x00020895) cell_touch_pane_ParamLimits

0xb47e,	// (0x00020895) cell_touch_pane

0xc20d,	// (0x00021624) scroll_sc2_down_pane_g1

0xc20d,	// (0x00021624) scroll_sc2_up_pane_g1

0xc217,	// (0x0002162e) bg_set_opt_pane_cp4_vc

0x2ee7,	// (0x000182fe) list_set_graphic_pane_vc_g1_ParamLimits

0x2ee7,	// (0x000182fe) list_set_graphic_pane_vc_g1

0x2ef3,	// (0x0001830a) list_set_graphic_pane_vc_g2_ParamLimits

0x2ef3,	// (0x0001830a) list_set_graphic_pane_vc_g2

0x0001,

0xf9ba,	// (0x00024dd1) list_set_graphic_pane_vc_g_ParamLimits

0xf9ba,	// (0x00024dd1) list_set_graphic_pane_vc_g

0x2eff,	// (0x00018316) text_primary_small_cp13_vc_ParamLimits

0x2eff,	// (0x00018316) text_primary_small_cp13_vc

0x2f17,	// (0x0001832e) list_set_graphic_pane_vc_ParamLimits

0x2f17,	// (0x0001832e) list_set_graphic_pane_vc

0xc217,	// (0x0002162e) input_focus_pane_cp2_vc

0xc20d,	// (0x00021624) setting_code_pane_vc_g1

0xc28a,	// (0x000216a1) setting_code_pane_vc_t1

0x2f2a,	// (0x00018341) set_text_pane_vc_t1_ParamLimits

0x2f2a,	// (0x00018341) set_text_pane_vc_t1

0xc217,	// (0x0002162e) input_focus_pane_cp1_vc

0x2f47,	// (0x0001835e) list_set_text_pane_vc

0xc20d,	// (0x00021624) setting_text_pane_vc_g1

0xc217,	// (0x0002162e) bg_set_opt_pane_cp2_vc

0xc281,	// (0x00021698) setting_slider_graphic_pane_vc_g1

0x2f51,	// (0x00018368) setting_slider_graphic_pane_vc_t1

0x2f61,	// (0x00018378) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9bf,	// (0x00024dd6) setting_slider_graphic_pane_vc_t

0x2f71,	// (0x00018388) slider_set_pane_cp_vc

0x2f79,	// (0x00018390) slider_set_pane_vc_g1

0x2f82,	// (0x00018399) slider_set_pane_vc_g2

0x0006,

0xf9c4,	// (0x00024ddb) slider_set_pane_vc_g

0xc773,	// (0x00021b8a) set_opt_bg_pane_g1_copy1

0xc77b,	// (0x00021b92) set_opt_bg_pane_g2_copy1

0x2fae,	// (0x000183c5) set_opt_bg_pane_g3_copy1

0xc78b,	// (0x00021ba2) set_opt_bg_pane_g4_copy1

0xc793,	// (0x00021baa) set_opt_bg_pane_g5_copy1

0xc79b,	// (0x00021bb2) set_opt_bg_pane_g6_copy1

0x2fb6,	// (0x000183cd) set_opt_bg_pane_g7_copy1

0x2fc0,	// (0x000183d7) set_opt_bg_pane_g8_copy1

0x2fc8,	// (0x000183df) set_opt_bg_pane_g9_copy1

0xc217,	// (0x0002162e) bg_set_opt_pane_cp_vc

0x2fd0,	// (0x000183e7) setting_slider_pane_vc_t1

0x2fdf,	// (0x000183f6) setting_slider_pane_vc_t2

0x2fef,	// (0x00018406) setting_slider_pane_vc_t3

0x0002,

0xf9d3,	// (0x00024dea) setting_slider_pane_vc_t

0x2fff,	// (0x00018416) slider_set_pane_vc

0xe950,	// (0x00023d67) volume_set_pane_vc_g1

0xeb2b,	// (0x00023f42) volume_set_pane_vc_g2

0xeb34,	// (0x00023f4b) volume_set_pane_vc_g3

0xeb3d,	// (0x00023f54) volume_set_pane_vc_g4

0xeb46,	// (0x00023f5d) volume_set_pane_vc_g5

0xeb4f,	// (0x00023f66) volume_set_pane_vc_g6

0xeb58,	// (0x00023f6f) volume_set_pane_vc_g7

0xeb61,	// (0x00023f78) volume_set_pane_vc_g8

0xeb6a,	// (0x00023f81) volume_set_pane_vc_g9

0xeb73,	// (0x00023f8a) volume_set_pane_vc_g10

0x0009,

0xf9da,	// (0x00024df1) volume_set_pane_vc_g

0x3007,	// (0x0001841e) volume_set_pane_vc

0x3011,	// (0x00018428) button_value_adjust_pane_cp1_vc

0x301b,	// (0x00018432) list_highlight_pane_cp2_vc

0x3024,	// (0x0001843b) list_set_pane_vc_ParamLimits

0x3024,	// (0x0001843b) list_set_pane_vc

0x3082,	// (0x00018499) main_pane_set_vc_t1_ParamLimits

0x3082,	// (0x00018499) main_pane_set_vc_t1

0x3097,	// (0x000184ae) main_pane_set_vc_t2_ParamLimits

0x3097,	// (0x000184ae) main_pane_set_vc_t2

0x30a9,	// (0x000184c0) main_pane_set_vc_t3_ParamLimits

0x30a9,	// (0x000184c0) main_pane_set_vc_t3

0x30bb,	// (0x000184d2) main_pane_set_vc_t4_ParamLimits

0x30bb,	// (0x000184d2) main_pane_set_vc_t4

0x0003,

0xf9ef,	// (0x00024e06) main_pane_set_vc_t_ParamLimits

0xf9ef,	// (0x00024e06) main_pane_set_vc_t

0x30cd,	// (0x000184e4) setting_code_pane_vc_ParamLimits

0x30cd,	// (0x000184e4) setting_code_pane_vc

0x30dc,	// (0x000184f3) setting_slider_graphic_pane_vc

0x30dc,	// (0x000184f3) setting_slider_pane_vc

0x30dc,	// (0x000184f3) setting_text_pane_vc

0x30dc,	// (0x000184f3) setting_volume_pane_vc

0x30e4,	// (0x000184fb) scroll_pane_cp121_vc

0xc664,	// (0x00021a7b) set_content_pane_vc

0x33e4,	// (0x000187fb) button_value_adjust_pane_g1

0x33ed,	// (0x00018804) button_value_adjust_pane_g2

0x0001,

0xfa4b,	// (0x00024e62) button_value_adjust_pane_g

0x33f6,	// (0x0001880d) form_field_slider_wide_pane_vc_t1_ParamLimits

0x33f6,	// (0x0001880d) form_field_slider_wide_pane_vc_t1

0x340a,	// (0x00018821) form_field_slider_wide_pane_vc_t2_ParamLimits

0x340a,	// (0x00018821) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa50,	// (0x00024e67) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa50,	// (0x00024e67) form_field_slider_wide_pane_vc_t

0xc265,	// (0x0002167c) input_focus_pane_cp10_vc_ParamLimits

0xc265,	// (0x0002167c) input_focus_pane_cp10_vc

0x3438,	// (0x0001884f) slider_cont_pane_cp1_vc_ParamLimits

0x3438,	// (0x0001884f) slider_cont_pane_cp1_vc

0x344a,	// (0x00018861) slider_form_pane_g1_cp2

0x2f82,	// (0x00018399) slider_form_pane_g2_cp2

0x3477,	// (0x0001888e) form_field_slider_pane_vc_t3

0x3485,	// (0x0001889c) form_field_slider_pane_vc_t4

0x3493,	// (0x000188aa) slider_form_pane_vc_ParamLimits

0x3493,	// (0x000188aa) slider_form_pane_vc

0x34a0,	// (0x000188b7) form_field_slider_pane_vc_t1_ParamLimits

0x34a0,	// (0x000188b7) form_field_slider_pane_vc_t1

0x340a,	// (0x00018821) form_field_slider_pane_vc_t2_ParamLimits

0x340a,	// (0x00018821) form_field_slider_pane_vc_t2

0x0001,

0xfa62,	// (0x00024e79) form_field_slider_pane_vc_t_ParamLimits

0xfa62,	// (0x00024e79) form_field_slider_pane_vc_t

0xc265,	// (0x0002167c) input_focus_pane_cp9_vc_ParamLimits

0xc265,	// (0x0002167c) input_focus_pane_cp9_vc

0x34bc,	// (0x000188d3) slider_cont_pane_vc_ParamLimits

0x34bc,	// (0x000188d3) slider_cont_pane_vc

0x34d0,	// (0x000188e7) list_form_graphic_pane_cp_vc_ParamLimits

0x34d0,	// (0x000188e7) list_form_graphic_pane_cp_vc

0x1369,	// (0x00016780) form_field_popup_wide_pane_vc_g1

0x34e5,	// (0x000188fc) form_field_popup_wide_pane_vc_t1_ParamLimits

0x34e5,	// (0x000188fc) form_field_popup_wide_pane_vc_t1

0xc6ad,	// (0x00021ac4) input_focus_pane_cp8_vc_ParamLimits

0xc6ad,	// (0x00021ac4) input_focus_pane_cp8_vc

0x352a,	// (0x00018941) list_form_wide_pane_vc_ParamLimits

0x352a,	// (0x00018941) list_form_wide_pane_vc

0x3536,	// (0x0001894d) list_form_graphic_pane_vc_g1

0x353e,	// (0x00018955) list_form_graphic_pane_vc_t1_ParamLimits

0x353e,	// (0x00018955) list_form_graphic_pane_vc_t1

0xc273,	// (0x0002168a) list_highlight_pane_cp5_vc_ParamLimits

0xc273,	// (0x0002168a) list_highlight_pane_cp5_vc

0x355a,	// (0x00018971) list_form_graphic_pane_vc_ParamLimits

0x355a,	// (0x00018971) list_form_graphic_pane_vc

0x1369,	// (0x00016780) form_field_popup_pane_vc_g1

0x3570,	// (0x00018987) form_field_popup_pane_vc_t1_ParamLimits

0x3570,	// (0x00018987) form_field_popup_pane_vc_t1

0xc6ad,	// (0x00021ac4) input_focus_pane_cp7_vc_ParamLimits

0xc6ad,	// (0x00021ac4) input_focus_pane_cp7_vc

0x3587,	// (0x0001899e) list_form_pane_vc_ParamLimits

0x3587,	// (0x0001899e) list_form_pane_vc

0x3593,	// (0x000189aa) data_form_pane_vc_t1_ParamLimits

0x3593,	// (0x000189aa) data_form_pane_vc_t1

0xc773,	// (0x00021b8a) input_focus_pane_vc_g1

0xc77b,	// (0x00021b92) input_focus_pane_vc_g2

0xc783,	// (0x00021b9a) input_focus_pane_vc_g3

0xc78b,	// (0x00021ba2) input_focus_pane_vc_g4

0xc793,	// (0x00021baa) input_focus_pane_vc_g5

0xc79b,	// (0x00021bb2) input_focus_pane_vc_g6

0xc7a3,	// (0x00021bba) input_focus_pane_vc_g7

0xc7ab,	// (0x00021bc2) input_focus_pane_vc_g8

0xc7b3,	// (0x00021bca) input_focus_pane_vc_g9

0xc20d,	// (0x00021624) input_focus_pane_vc_g10

0x0009,

0xf653,	// (0x00024a6a) input_focus_pane_vc_g

0x135d,	// (0x00016774) data_form_pane_vc_ParamLimits

0x135d,	// (0x00016774) data_form_pane_vc

0x1369,	// (0x00016780) form_field_data_pane_vc_g1

0x35ae,	// (0x000189c5) form_field_data_pane_vc_t1_ParamLimits

0x35ae,	// (0x000189c5) form_field_data_pane_vc_t1

0xc6ad,	// (0x00021ac4) input_focus_pane_vc_ParamLimits

0xc6ad,	// (0x00021ac4) input_focus_pane_vc

0x35c8,	// (0x000189df) button_value_adjust_pane_cp3_vc

0x35d0,	// (0x000189e7) button_value_adjust_pane_cp5_vc

0x35d8,	// (0x000189ef) form_field_data_pane_vc_ParamLimits

0x35d8,	// (0x000189ef) form_field_data_pane_vc

0x35ef,	// (0x00018a06) form_field_data_pane_vc_cp2

0x35f7,	// (0x00018a0e) form_field_data_wide_pane_vc_ParamLimits

0x35f7,	// (0x00018a0e) form_field_data_wide_pane_vc

0x360d,	// (0x00018a24) form_field_data_wide_pane_vc_cp2

0x3615,	// (0x00018a2c) form_field_popup_pane_vc_ParamLimits

0x3615,	// (0x00018a2c) form_field_popup_pane_vc

0x362c,	// (0x00018a43) form_field_popup_wide_pane_vc_ParamLimits

0x362c,	// (0x00018a43) form_field_popup_wide_pane_vc

0x3642,	// (0x00018a59) form_field_slider_pane_vc_ParamLimits

0x3642,	// (0x00018a59) form_field_slider_pane_vc

0x3655,	// (0x00018a6c) form_field_slider_wide_pane_vc_ParamLimits

0x3655,	// (0x00018a6c) form_field_slider_wide_pane_vc

0xb49b,	// (0x000208b2) grid_touch_1_pane_ParamLimits

0xb49b,	// (0x000208b2) grid_touch_1_pane

0xb4af,	// (0x000208c6) grid_touch_2_pane_ParamLimits

0xb4af,	// (0x000208c6) grid_touch_2_pane

0x3739,	// (0x00018b50) touch_pane_g1_ParamLimits

0x3739,	// (0x00018b50) touch_pane_g1

0x368c,	// (0x00018aa3) cell_app_pane_cp_wide_ParamLimits

0x368c,	// (0x00018aa3) cell_app_pane_cp_wide

0x369d,	// (0x00018ab4) grid_popup_fast_wide_pane_ParamLimits

0x369d,	// (0x00018ab4) grid_popup_fast_wide_pane

0x36b1,	// (0x00018ac8) scroll_pane_cp19_ParamLimits

0x36b1,	// (0x00018ac8) scroll_pane_cp19

0xc217,	// (0x0002162e) bg_popup_window_pane_cp20

0x36c5,	// (0x00018adc) listscroll_popup_fast_wide_pane

0xb4d9,	// (0x000208f0) grid_indicator_nsta_pane

0x36df,	// (0x00018af6) clock_nsta_pane_g1

0x36e8,	// (0x00018aff) clock_nsta_pane_t1

0xb4e5,	// (0x000208fc) cell_indicator_nsta_pane_ParamLimits

0xb4e5,	// (0x000208fc) cell_indicator_nsta_pane

0x3739,	// (0x00018b50) cell_indicator_nsta_pane_g1

0xb500,	// (0x00020917) cell_indicator_nsta_pane_g2

0x0001,

0xfa73,	// (0x00024e8a) cell_indicator_nsta_pane_g

0x3759,	// (0x00018b70) clock_nsta_pane_cp

0x3762,	// (0x00018b79) indicator_nsta_pane_cp

0x376c,	// (0x00018b83) nsta_clock_indic_pane_g1

0xc2c9,	// (0x000216e0) grid_indicator_pane

0xa235,	// (0x0001f64c) scroll_pane_cp29

0xe5e3,	// (0x000239fa) indicator_nsta_pane_cp2_ParamLimits

0xe5e3,	// (0x000239fa) indicator_nsta_pane_cp2

0xc273,	// (0x0002168a) main_apps_wheel_pane

0xab5d,	// (0x0001ff74) form_midp_field_text_pane_ParamLimits

0x170b,	// (0x00016b22) scroll_bar_cp050_ParamLimits

0x37c5,	// (0x00018bdc) cell_indicator_pane_ParamLimits

0x37c5,	// (0x00018bdc) cell_indicator_pane

0x37de,	// (0x00018bf5) cell_indicator_pane_g1

0xb51f,	// (0x00020936) grid_wheel_folder_pane_ParamLimits

0xb51f,	// (0x00020936) grid_wheel_folder_pane

0xb52d,	// (0x00020944) list_wheel_apps_pane_ParamLimits

0xb52d,	// (0x00020944) list_wheel_apps_pane

0xb53b,	// (0x00020952) main_apps_wheel_pane_g1_ParamLimits

0xb53b,	// (0x00020952) main_apps_wheel_pane_g1

0xb547,	// (0x0002095e) main_apps_wheel_pane_g2_ParamLimits

0xb547,	// (0x0002095e) main_apps_wheel_pane_g2

0x0001,

0xfa8f,	// (0x00024ea6) main_apps_wheel_pane_g_ParamLimits

0xfa8f,	// (0x00024ea6) main_apps_wheel_pane_g

0xb555,	// (0x0002096c) main_apps_wheel_pane_t1_ParamLimits

0xb555,	// (0x0002096c) main_apps_wheel_pane_t1

0xb569,	// (0x00020980) list_wheel_apps_pane_g1

0xb571,	// (0x00020988) list_wheel_apps_pane_g2

0xb579,	// (0x00020990) list_wheel_apps_pane_g3

0xb581,	// (0x00020998) list_wheel_apps_pane_g4

0xb58b,	// (0x000209a2) list_wheel_apps_pane_g5

0x0004,

0xfa94,	// (0x00024eab) list_wheel_apps_pane_g

0xce70,	// (0x00022287) navi_icon_text_pane

0xa648,	// (0x0001fa5f) aid_fill_nsta

0x38a5,	// (0x00018cbc) navi_icon_text_pane_g1

0x38b1,	// (0x00018cc8) navi_icon_text_pane_t1

0xcd60,	// (0x00022177) list_set_graphic_pane_t1_ParamLimits

0xcd60,	// (0x00022177) list_set_graphic_pane_t1

0x1e56,	// (0x0001726d) popup_midp_note_alarm_window_t6_ParamLimits

0x1e56,	// (0x0001726d) popup_midp_note_alarm_window_t6

0x1e68,	// (0x0001727f) popup_midp_note_alarm_window_t7_ParamLimits

0x1e68,	// (0x0001727f) popup_midp_note_alarm_window_t7

0x1e7a,	// (0x00017291) popup_midp_note_alarm_window_t8_ParamLimits

0x1e7a,	// (0x00017291) popup_midp_note_alarm_window_t8

0x1e8c,	// (0x000172a3) popup_midp_note_alarm_window_t9_ParamLimits

0x1e8c,	// (0x000172a3) popup_midp_note_alarm_window_t9

0x1e9e,	// (0x000172b5) popup_midp_note_alarm_window_t10_ParamLimits

0x1e9e,	// (0x000172b5) popup_midp_note_alarm_window_t10

0x1eb0,	// (0x000172c7) popup_midp_note_alarm_window_t11_ParamLimits

0x1eb0,	// (0x000172c7) popup_midp_note_alarm_window_t11

0xaea9,	// (0x000202c0) scroll_pane_cp17_ParamLimits

0xaea9,	// (0x000202c0) scroll_pane_cp17

0xe950,	// (0x00023d67) volume_small_pane_cp_g1

0xeb7c,	// (0x00023f93) volume_small_pane_cp_g2

0xeb85,	// (0x00023f9c) volume_small_pane_cp_g3

0xeb8e,	// (0x00023fa5) volume_small_pane_cp_g4

0xeb97,	// (0x00023fae) volume_small_pane_cp_g5

0xeb46,	// (0x00023f5d) volume_small_pane_cp_g6

0xeba0,	// (0x00023fb7) volume_small_pane_cp_g7

0xeba9,	// (0x00023fc0) volume_small_pane_cp_g8

0xebb2,	// (0x00023fc9) volume_small_pane_cp_g9

0xebbb,	// (0x00023fd2) volume_small_pane_cp_g10

0xcfb5,	// (0x000223cc) midp_ticker_pane_g1_ParamLimits

0xcfc1,	// (0x000223d8) midp_ticker_pane_g2_ParamLimits

0xf71f,	// (0x00024b36) midp_ticker_pane_g_ParamLimits

0xcfcd,	// (0x000223e4) midp_ticker_pane_t1_ParamLimits

0xa66c,	// (0x0001fa83) aid_fill_nsta_2

0x16f7,	// (0x00016b0e) list_form2_midp_pane

0x284f,	// (0x00017c66) midp_editing_number_pane_ParamLimits

0x285e,	// (0x00017c75) midp_ticker_pane_ParamLimits

0x38c3,	// (0x00018cda) form2_midp_field_pane

0x38e7,	// (0x00018cfe) scroll_pane_cp51

0x3907,	// (0x00018d1e) form2_midp_button_pane_ParamLimits

0x3907,	// (0x00018d1e) form2_midp_button_pane

0x3919,	// (0x00018d30) form2_midp_content_pane_ParamLimits

0x3919,	// (0x00018d30) form2_midp_content_pane

0x3933,	// (0x00018d4a) form2_midp_field_choice_group_pane

0x393b,	// (0x00018d52) form2_midp_field_pane_g1

0x3943,	// (0x00018d5a) form2_midp_field_pane_g2

0x394b,	// (0x00018d62) form2_midp_field_pane_g3

0x3953,	// (0x00018d6a) form2_midp_field_pane_g4

0x0003,

0xfab9,	// (0x00024ed0) form2_midp_field_pane_g

0x395b,	// (0x00018d72) form2_midp_gauge_slider_pane

0x3963,	// (0x00018d7a) form2_midp_gauge_wait_pane

0x396b,	// (0x00018d82) form2_midp_image_pane_ParamLimits

0x396b,	// (0x00018d82) form2_midp_image_pane

0xb5be,	// (0x000209d5) form2_midp_label_pane_ParamLimits

0xb5be,	// (0x000209d5) form2_midp_label_pane

0xb5d7,	// (0x000209ee) form2_midp_label_pane_cp_ParamLimits

0xb5d7,	// (0x000209ee) form2_midp_label_pane_cp

0x39c0,	// (0x00018dd7) form2_midp_string_pane_ParamLimits

0x39c0,	// (0x00018dd7) form2_midp_string_pane

0xb5f6,	// (0x00020a0d) form2_midp_text_pane_ParamLimits

0xb5f6,	// (0x00020a0d) form2_midp_text_pane

0x39ed,	// (0x00018e04) form2_midp_time_pane

0x39fd,	// (0x00018e14) input_focus_pane_cp51_ParamLimits

0x39fd,	// (0x00018e14) input_focus_pane_cp51

0xb60f,	// (0x00020a26) form2_midp_label_pane_t1_ParamLimits

0xb60f,	// (0x00020a26) form2_midp_label_pane_t1

0xb64f,	// (0x00020a66) form2_mdip_text_pane_t1_ParamLimits

0xb64f,	// (0x00020a66) form2_mdip_text_pane_t1

0x3a75,	// (0x00018e8c) form2_midp_time_pane_t1

0x3a90,	// (0x00018ea7) form2_midp_gauge_slider_pane_t1

0xb66b,	// (0x00020a82) form2_midp_gauge_slider_pane_t2

0xb67d,	// (0x00020a94) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac2,	// (0x00024ed9) form2_midp_gauge_slider_pane_t

0x3ac6,	// (0x00018edd) form2_midp_slider_pane

0x3ad2,	// (0x00018ee9) form2_midp_gauge_wait_pane_t1

0x3ae0,	// (0x00018ef7) form2_midp_wait_pane_ParamLimits

0x3ae0,	// (0x00018ef7) form2_midp_wait_pane

0xb68f,	// (0x00020aa6) list_single_2graphic_pane_cp4_ParamLimits

0xb68f,	// (0x00020aa6) list_single_2graphic_pane_cp4

0xaa9d,	// (0x0001feb4) list_single_midp_graphic_pane_cp_ParamLimits

0xaa9d,	// (0x0001feb4) list_single_midp_graphic_pane_cp

0xc217,	// (0x0002162e) list_highlight_pane_cp20

0x3b33,	// (0x00018f4a) list_single_2graphic_pane_g1_cp4

0x2d93,	// (0x000181aa) list_single_2graphic_pane_g2_cp4

0x3b3b,	// (0x00018f52) list_single_2graphic_pane_t1_cp4

0xc273,	// (0x0002168a) list_highlight_pane_cp21

0x3b4a,	// (0x00018f61) list_single_midp_graphic_pane_g4_cp

0x3b59,	// (0x00018f70) list_single_midp_graphic_pane_t1_cp

0xb6a4,	// (0x00020abb) form2_mdip_string_pane_t1_ParamLimits

0xb6a4,	// (0x00020abb) form2_mdip_string_pane_t1

0xc217,	// (0x0002162e) bg_wml_button_pane_cp2

0xc20d,	// (0x00021624) form2_midp_image_pane_g1

0xc617,	// (0x00021a2e) list_double_large_graphic_pane_g5_ParamLimits

0xc617,	// (0x00021a2e) list_double_large_graphic_pane_g5

0xa49a,	// (0x0001f8b1) midp_form_pane_ParamLimits

0xc273,	// (0x0002168a) main_apps_wheel_pane_ParamLimits

0x8880,	// (0x0001dc97) popup_preview_window_ParamLimits

0x8880,	// (0x0001dc97) popup_preview_window

0x8b4d,	// (0x0001df64) popup_touch_info_window_ParamLimits

0x8b4d,	// (0x0001df64) popup_touch_info_window

0x8b6b,	// (0x0001df82) popup_touch_menu_window_ParamLimits

0x8b6b,	// (0x0001df82) popup_touch_menu_window

0xc203,	// (0x0002161a) bg_popup_sub_pane_cp6

0x3c75,	// (0x0001908c) list_touch_menu_pane

0xb71a,	// (0x00020b31) list_single_touch_menu_pane_ParamLimits

0xb71a,	// (0x00020b31) list_single_touch_menu_pane

0xb72e,	// (0x00020b45) list_single_touch_menu_pane_t1

0xc273,	// (0x0002168a) bg_popup_sub_pane_cp7_ParamLimits

0xc273,	// (0x0002168a) bg_popup_sub_pane_cp7

0x3ca1,	// (0x000190b8) heading_sub_pane

0x3ca9,	// (0x000190c0) list_touch_info_pane_ParamLimits

0x3ca9,	// (0x000190c0) list_touch_info_pane

0x3cb8,	// (0x000190cf) list_single_touch_info_pane_ParamLimits

0x3cb8,	// (0x000190cf) list_single_touch_info_pane

0x3cca,	// (0x000190e1) list_single_touch_info_pane_t1

0x3cd8,	// (0x000190ef) list_single_touch_info_pane_t2

0x0001,

0xfad0,	// (0x00024ee7) list_single_touch_info_pane_t

0xcf9e,	// (0x000223b5) bg_popup_heading_pane_cp

0x3ce6,	// (0x000190fd) heading_sub_pane_t1

0x12f7,	// (0x0001670e) bg_popup_preview_window_pane_cp_ParamLimits

0x12f7,	// (0x0001670e) bg_popup_preview_window_pane_cp

0x3ca1,	// (0x000190b8) heading_preview_pane

0x3ca9,	// (0x000190c0) list_preview_pane_ParamLimits

0x3ca9,	// (0x000190c0) list_preview_pane

0x3cf4,	// (0x0001910b) popup_preview_window_g1

0x3cb8,	// (0x000190cf) list_single_preview_pane_ParamLimits

0x3cb8,	// (0x000190cf) list_single_preview_pane

0x3cfc,	// (0x00019113) list_single_preview_pane_g1

0x3d04,	// (0x0001911b) list_single_preview_pane_t1

0x3cca,	// (0x000190e1) list_single_preview_pane_t2

0x0001,

0xfad5,	// (0x00024eec) list_single_preview_pane_t

0x3d12,	// (0x00019129) bg_popup_heading_pane_cp2_ParamLimits

0x3d12,	// (0x00019129) bg_popup_heading_pane_cp2

0x3d28,	// (0x0001913f) heading_preview_pane_g1

0x3d30,	// (0x00019147) heading_preview_pane_t1_ParamLimits

0x3d30,	// (0x00019147) heading_preview_pane_t1

0xc2e0,	// (0x000216f7) soft_indicator_pane_t1_ParamLimits

0xc5bf,	// (0x000219d6) scroll_pane_ParamLimits

0xca40,	// (0x00021e57) scroll_sc2_left_pane

0xca49,	// (0x00021e60) scroll_sc2_right_pane

0xca68,	// (0x00021e7f) scroll_bg_pane_g1_ParamLimits

0xca7d,	// (0x00021e94) scroll_bg_pane_g2_ParamLimits

0xca95,	// (0x00021eac) scroll_bg_pane_g3_ParamLimits

0xf6aa,	// (0x00024ac1) scroll_bg_pane_g_ParamLimits

0xca68,	// (0x00021e7f) scroll_handle_pane_g1_ParamLimits

0xcaaa,	// (0x00021ec1) scroll_handle_pane_g2_ParamLimits

0xca95,	// (0x00021eac) scroll_handle_pane_g3_ParamLimits

0xf6b1,	// (0x00024ac8) scroll_handle_pane_g_ParamLimits

0x844d,	// (0x0001d864) popup_choice_list_window_ParamLimits

0x844d,	// (0x0001d864) popup_choice_list_window

0x10f3,	// (0x0001650a) choice_list_pane

0x11a3,	// (0x000165ba) cell_toolbar_pane_t1

0x11cb,	// (0x000165e2) toolbar_button_pane_ParamLimits

0x237c,	// (0x00017793) ai_gene_pane_1_t2_ParamLimits

0x237c,	// (0x00017793) ai_gene_pane_1_t2

0x0001,

0xf8cd,	// (0x00024ce4) ai_gene_pane_1_t_ParamLimits

0xf8cd,	// (0x00024ce4) ai_gene_pane_1_t

0x3d4d,	// (0x00019164) scroll_sc2_left_pane_g1

0x3d4d,	// (0x00019164) scroll_sc2_right_pane_g1

0xc85d,	// (0x00021c74) bg_popup_sub_pane_cp10

0x3d57,	// (0x0001916e) list_choice_list_pane

0xb2bd,	// (0x000206d4) list_single_choice_list_pane_ParamLimits

0xb2bd,	// (0x000206d4) list_single_choice_list_pane

0xd13a,	// (0x00022551) list_single_choice_list_pane_g1

0xa07c,	// (0x0001f493) list_single_choice_list_pane_t1_ParamLimits

0xa07c,	// (0x0001f493) list_single_choice_list_pane_t1

0x3d8b,	// (0x000191a2) choice_list_pane_g1

0xb73c,	// (0x00020b53) choice_list_pane_t1

0xc203,	// (0x0002161a) input_focus_pane_cp11

0xc9b5,	// (0x00021dcc) title_pane_stacon_g2_ParamLimits

0xc9b5,	// (0x00021dcc) title_pane_stacon_g2

0x0002,

0xf690,	// (0x00024aa7) title_pane_stacon_g_ParamLimits

0xf690,	// (0x00024aa7) title_pane_stacon_g

0xcf9e,	// (0x000223b5) cursor_press_pane

0x84f4,	// (0x0001d90b) popup_fep_hwr_window_ParamLimits

0x84f4,	// (0x0001d90b) popup_fep_hwr_window

0xe7fa,	// (0x00023c11) popup_fep_vkb_window_ParamLimits

0xe7fa,	// (0x00023c11) popup_fep_vkb_window

0xb74a,	// (0x00020b61) cursor_press_pane_g1

0x0002,

0xfafe,	// (0x00024f15) fep_vkb_side_pane_g_ParamLimits

0xebef,	// (0x00024006) fep_hwr_candidate_pane_ParamLimits

0xebef,	// (0x00024006) fep_hwr_candidate_pane

0xec19,	// (0x00024030) fep_hwr_side_pane_ParamLimits

0xec19,	// (0x00024030) fep_hwr_side_pane

0xec39,	// (0x00024050) fep_hwr_top_pane_ParamLimits

0xec39,	// (0x00024050) fep_hwr_top_pane

0xec51,	// (0x00024068) fep_hwr_write_pane_ParamLimits

0xec51,	// (0x00024068) fep_hwr_write_pane

0xfafe,	// (0x00024f15) fep_vkb_side_pane_g

0x3da9,	// (0x000191c0) fep_hwr_top_pane_g1

0x3dbb,	// (0x000191d2) fep_hwr_top_pane_g2

0xec8b,	// (0x000240a2) fep_hwr_top_pane_g3

0x0002,

0xfada,	// (0x00024ef1) fep_hwr_top_pane_g

0xeca0,	// (0x000240b7) fep_hwr_top_text_pane

0xcb6d,	// (0x00021f84) fep_hwr_top_text_pane_g1

0x3df1,	// (0x00019208) fep_hwr_top_text_pane_t1

0xed1f,	// (0x00024136) fep_hwr_candidate_pane_g1

0x4036,	// (0x0001944d) fep_vkb_keypad_pane_g3_ParamLimits

0x4036,	// (0x0001944d) fep_vkb_keypad_pane_g3

0x405e,	// (0x00019475) fep_vkb_keypad_pane_g4_ParamLimits

0x405e,	// (0x00019475) fep_vkb_keypad_pane_g4

0x40cd,	// (0x000194e4) fep_vkb_bottom_pane_g2_ParamLimits

0x40cd,	// (0x000194e4) fep_vkb_bottom_pane_g2

0x0001,

0xfb05,	// (0x00024f1c) fep_vkb_bottom_pane_g_ParamLimits

0xfb05,	// (0x00024f1c) fep_vkb_bottom_pane_g

0x3d4d,	// (0x00019164) cell_vkb_side_pane_g2

0x0001,

0xfb0f,	// (0x00024f26) cell_vkb_side_pane_g

0x4158,	// (0x0001956f) cell_vkb_side_pane_t1

0x4166,	// (0x0001957d) cell_vkb_side_pane_t1_copy1

0x3d4d,	// (0x00019164) bg_fep_vkb_candidate_pane_g2

0x4292,	// (0x000196a9) cell_vkb_candidate_pane_ParamLimits

0x3dff,	// (0x00019216) aid_size_cell_vkb_ParamLimits

0x3dff,	// (0x00019216) aid_size_cell_vkb

0x4292,	// (0x000196a9) cell_vkb_candidate_pane

0xed46,	// (0x0002415d) bg_popup_fep_shadow_pane_g1

0xb764,	// (0x00020b7b) fep_vkb_bottom_pane_ParamLimits

0xb764,	// (0x00020b7b) fep_vkb_bottom_pane

0x3ec3,	// (0x000192da) fep_vkb_candidate_pane_ParamLimits

0x3ec3,	// (0x000192da) fep_vkb_candidate_pane

0xb789,	// (0x00020ba0) fep_vkb_keypad_pane_ParamLimits

0xb789,	// (0x00020ba0) fep_vkb_keypad_pane

0xb7be,	// (0x00020bd5) fep_vkb_side_pane_ParamLimits

0xb7be,	// (0x00020bd5) fep_vkb_side_pane

0xb7fa,	// (0x00020c11) fep_vkb_top_pane_ParamLimits

0xb7fa,	// (0x00020c11) fep_vkb_top_pane

0x3f8f,	// (0x000193a6) fep_vkb_top_pane_g1_ParamLimits

0x3f8f,	// (0x000193a6) fep_vkb_top_pane_g1

0x3f9e,	// (0x000193b5) fep_vkb_top_pane_g2_ParamLimits

0x3f9e,	// (0x000193b5) fep_vkb_top_pane_g2

0x3fad,	// (0x000193c4) fep_vkb_top_pane_g3_ParamLimits

0x3fad,	// (0x000193c4) fep_vkb_top_pane_g3

0x0003,

0xfaf5,	// (0x00024f0c) fep_vkb_top_pane_g_ParamLimits

0xfaf5,	// (0x00024f0c) fep_vkb_top_pane_g

0x3fcb,	// (0x000193e2) fep_vkb_top_text_pane_ParamLimits

0x3fcb,	// (0x000193e2) fep_vkb_top_text_pane

0xb82f,	// (0x00020c46) fep_vkb_side_pane_g1_ParamLimits

0xb82f,	// (0x00020c46) fep_vkb_side_pane_g1

0x4025,	// (0x0001943c) grid_vkb_side_pane_ParamLimits

0x4025,	// (0x0001943c) grid_vkb_side_pane

0xed4e,	// (0x00024165) bg_popup_fep_shadow_pane_g2

0xed57,	// (0x0002416e) bg_popup_fep_shadow_pane_g3

0xed5f,	// (0x00024176) bg_popup_fep_shadow_pane_g4

0xed68,	// (0x0002417f) bg_popup_fep_shadow_pane_g5

0xed72,	// (0x00024189) bg_popup_fep_shadow_pane_g6

0xed7a,	// (0x00024191) bg_popup_fep_shadow_pane_g7

0xc78b,	// (0x00021ba2) bg_popup_fep_shadow_pane_g8

0x407c,	// (0x00019493) grid_vkb_keypad_number_pane_ParamLimits

0x407c,	// (0x00019493) grid_vkb_keypad_number_pane

0x408c,	// (0x000194a3) grid_vkb_keypad_pane_ParamLimits

0x408c,	// (0x000194a3) grid_vkb_keypad_pane

0x40b2,	// (0x000194c9) fep_vkb_bottom_pane_g1_ParamLimits

0x40b2,	// (0x000194c9) fep_vkb_bottom_pane_g1

0x40db,	// (0x000194f2) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x40db,	// (0x000194f2) grid_vkb_keypad_bottom_left_pane

0x40f0,	// (0x00019507) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x40f0,	// (0x00019507) grid_vkb_keypad_bottom_right_pane

0x4105,	// (0x0001951c) fep_vkb_top_text_pane_g1

0xb876,	// (0x00020c8d) fep_vkb_top_text_pane_t1

0xb888,	// (0x00020c9f) cell_vkb_side_pane_ParamLimits

0xb888,	// (0x00020c9f) cell_vkb_side_pane

0x3d4d,	// (0x00019164) cell_vkb_side_pane_g1

0x4174,	// (0x0001958b) cell_vkb_keypad_pane_ParamLimits

0x4174,	// (0x0001958b) cell_vkb_keypad_pane

0x41e9,	// (0x00019600) cell_vkb_keypad_pane_g1

0x0008,

0xfb22,	// (0x00024f39) bg_popup_fep_shadow_pane_g

0xed8c,	// (0x000241a3) cell_hwr_side_pane_g1

0xed8c,	// (0x000241a3) cell_hwr_side_pane_g2

0x41f3,	// (0x0001960a) cell_vkb_keypad_pane_t1

0xb89e,	// (0x00020cb5) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xb89e,	// (0x00020cb5) cell_vkb_keypad_bottom_left_pane

0xb8b3,	// (0x00020cca) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xb8b3,	// (0x00020cca) cell_vkb_keypad_bottom_right_pane

0x3d4d,	// (0x00019164) cell_vkb_keypad_bottom_left_pane_g1

0x3d4d,	// (0x00019164) cell_vkb_keypad_bottom_right_pane_g1

0x4257,	// (0x0001966e) cell_vkb_keypad_number_pane_ParamLimits

0x4257,	// (0x0001966e) cell_vkb_keypad_number_pane

0x4276,	// (0x0001968d) cell_vkb_keypad_number_pane_g1

0x4280,	// (0x00019697) cell_vkb_keypad_number_pane_g2

0x4289,	// (0x000196a0) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb14,	// (0x00024f2b) cell_vkb_keypad_number_pane_g

0x41f3,	// (0x0001960a) cell_vkb_keypad_number_pane_t1

0x42ad,	// (0x000196c4) fep_vkb_candidate_pane_g1

0x0001,

0xfb35,	// (0x00024f4c) cell_hwr_side_pane_g

0x42c6,	// (0x000196dd) cell_hwr_side_pane_t1

0xed96,	// (0x000241ad) cell_hwr_side_pane_t1_copy1

0xeda4,	// (0x000241bb) cell_hwr_candidate_pane_g1

0xedd3,	// (0x000241ea) cell_hwr_candidate_pane_t1

0x3d4d,	// (0x00019164) cell_vkb_candidate_pane_g2

0x430a,	// (0x00019721) cell_vkb_candidate_pane_t1

0xe7e2,	// (0x00023bf9) bg_popup_fep_shadow_pane_ParamLimits

0xe7e2,	// (0x00023bf9) bg_popup_fep_shadow_pane

0xec6b,	// (0x00024082) bg_fep_hwr_top_pane_g4

0x3dcd,	// (0x000191e4) bg_hwr_side_pane_g1_ParamLimits

0x3dcd,	// (0x000191e4) bg_hwr_side_pane_g1

0x8d82,	// (0x0001e199) cell_hwr_side_pane_ParamLimits

0x8d82,	// (0x0001e199) cell_hwr_side_pane

0xecb5,	// (0x000240cc) fep_hwr_write_pane_g1_ParamLimits

0xecb5,	// (0x000240cc) fep_hwr_write_pane_g1

0xecc2,	// (0x000240d9) fep_hwr_write_pane_g2_ParamLimits

0xecc2,	// (0x000240d9) fep_hwr_write_pane_g2

0xeccf,	// (0x000240e6) fep_hwr_write_pane_g3_ParamLimits

0xeccf,	// (0x000240e6) fep_hwr_write_pane_g3

0x8da2,	// (0x0001e1b9) fep_hwr_write_pane_g4_ParamLimits

0x8da2,	// (0x0001e1b9) fep_hwr_write_pane_g4

0x0005,

0xfae1,	// (0x00024ef8) fep_hwr_write_pane_g_ParamLimits

0xfae1,	// (0x00024ef8) fep_hwr_write_pane_g

0xec6b,	// (0x00024082) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xec6b,	// (0x00024082) bg_fep_hwr_candidate_pane_g2

0xecdd,	// (0x000240f4) cell_hwr_candidate_pane_ParamLimits

0xecdd,	// (0x000240f4) cell_hwr_candidate_pane

0xed1f,	// (0x00024136) fep_hwr_candidate_pane_g1_ParamLimits

0x3e2d,	// (0x00019244) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x3e2d,	// (0x00019244) bg_popup_fep_shadow_pane_cp2

0x3fbd,	// (0x000193d4) fep_vkb_top_pane_g4_ParamLimits

0x3fbd,	// (0x000193d4) fep_vkb_top_pane_g4

0x4003,	// (0x0001941a) fep_vkb_side_pane_g2_ParamLimits

0x4003,	// (0x0001941a) fep_vkb_side_pane_g2

0x9da7,	// (0x0001f1be) list_setting_pane_t4_ParamLimits

0x9da7,	// (0x0001f1be) list_setting_pane_t4

0x9e21,	// (0x0001f238) list_setting_number_pane_t5_ParamLimits

0x9e21,	// (0x0001f238) list_setting_number_pane_t5

0xcba4,	// (0x00021fbb) list_double_heading_pane_cp2_ParamLimits

0xcba4,	// (0x00021fbb) list_double_heading_pane_cp2

0xd14f,	// (0x00022566) list_double_heading_pane_g1_cp2_ParamLimits

0xd14f,	// (0x00022566) list_double_heading_pane_g1_cp2

0x4318,	// (0x0001972f) list_double_heading_pane_g2_cp2_ParamLimits

0x4318,	// (0x0001972f) list_double_heading_pane_g2_cp2

0x432c,	// (0x00019743) list_double_heading_pane_t1_cp2_ParamLimits

0x432c,	// (0x00019743) list_double_heading_pane_t1_cp2

0x4342,	// (0x00019759) list_double_heading_pane_t2_cp2_ParamLimits

0x4342,	// (0x00019759) list_double_heading_pane_t2_cp2

0xc1fb,	// (0x00021612) aid_value_unit2

0xe374,	// (0x0002378b) popup_preview_fixed_window

0xc3b7,	// (0x000217ce) bg_popup_preview_window_pane_cp02

0x4354,	// (0x0001976b) list_preview_fixed_pane

0x439a,	// (0x000197b1) list_empty_pane_fp_ParamLimits

0x439a,	// (0x000197b1) list_empty_pane_fp

0x439a,	// (0x000197b1) list_single_cale_day_pane_fp_ParamLimits

0x439a,	// (0x000197b1) list_single_cale_day_pane_fp

0x439a,	// (0x000197b1) list_single_graphic_heading_pane_fp_ParamLimits

0x439a,	// (0x000197b1) list_single_graphic_heading_pane_fp

0x439a,	// (0x000197b1) list_single_graphic_pane_fp_ParamLimits

0x439a,	// (0x000197b1) list_single_graphic_pane_fp

0x439a,	// (0x000197b1) list_single_heading_pane_fp_ParamLimits

0x439a,	// (0x000197b1) list_single_heading_pane_fp

0x439a,	// (0x000197b1) list_single_pane_fp_ParamLimits

0x439a,	// (0x000197b1) list_single_pane_fp

0x43b0,	// (0x000197c7) list_single_pane_fp_g1_ParamLimits

0x43b0,	// (0x000197c7) list_single_pane_fp_g1

0xd15b,	// (0x00022572) list_single_pane_fp_g2_ParamLimits

0xd15b,	// (0x00022572) list_single_pane_fp_g2

0x43bc,	// (0x000197d3) list_single_pane_fp_g3_ParamLimits

0x43bc,	// (0x000197d3) list_single_pane_fp_g3

0x43d0,	// (0x000197e7) list_single_pane_fp_g4_ParamLimits

0x43d0,	// (0x000197e7) list_single_pane_fp_g4

0x0003,

0xfb48,	// (0x00024f5f) list_single_pane_fp_g_ParamLimits

0xfb48,	// (0x00024f5f) list_single_pane_fp_g

0x43dc,	// (0x000197f3) list_single_pane_fp_t1_ParamLimits

0x43dc,	// (0x000197f3) list_single_pane_fp_t1

0x43f3,	// (0x0001980a) list_single_graphic_pane_fp_g1_ParamLimits

0x43f3,	// (0x0001980a) list_single_graphic_pane_fp_g1

0x43b0,	// (0x000197c7) list_single_graphic_pane_fp_g2_ParamLimits

0x43b0,	// (0x000197c7) list_single_graphic_pane_fp_g2

0xd15b,	// (0x00022572) list_single_graphic_pane_fp_g3_ParamLimits

0xd15b,	// (0x00022572) list_single_graphic_pane_fp_g3

0x43bc,	// (0x000197d3) list_single_graphic_pane_fp_g4_ParamLimits

0x43bc,	// (0x000197d3) list_single_graphic_pane_fp_g4

0x43d0,	// (0x000197e7) list_single_graphic_pane_fp_g5_ParamLimits

0x43d0,	// (0x000197e7) list_single_graphic_pane_fp_g5

0x0004,

0xfb51,	// (0x00024f68) list_single_graphic_pane_fp_g_ParamLimits

0xfb51,	// (0x00024f68) list_single_graphic_pane_fp_g

0x43ff,	// (0x00019816) list_single_graphic_pane_fp_t1_ParamLimits

0x43ff,	// (0x00019816) list_single_graphic_pane_fp_t1

0x43f3,	// (0x0001980a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x43f3,	// (0x0001980a) list_single_graphic_heading_pane_fp_g1

0x43b0,	// (0x000197c7) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x43b0,	// (0x000197c7) list_single_graphic_heading_pane_fp_g2

0xd15b,	// (0x00022572) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd15b,	// (0x00022572) list_single_graphic_heading_pane_fp_g3

0x43bc,	// (0x000197d3) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x43bc,	// (0x000197d3) list_single_graphic_heading_pane_fp_g4

0x43d0,	// (0x000197e7) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x43d0,	// (0x000197e7) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb51,	// (0x00024f68) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb51,	// (0x00024f68) list_single_graphic_heading_pane_fp_g

0x4415,	// (0x0001982c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4415,	// (0x0001982c) list_single_graphic_heading_pane_fp_t1

0x442b,	// (0x00019842) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x442b,	// (0x00019842) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb5c,	// (0x00024f73) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb5c,	// (0x00024f73) list_single_graphic_heading_pane_fp_t

0x443d,	// (0x00019854) list_single_cale_day_pane_fp_g1_ParamLimits

0x443d,	// (0x00019854) list_single_cale_day_pane_fp_g1

0x4475,	// (0x0001988c) list_single_cale_day_pane_fp_g2_ParamLimits

0x4475,	// (0x0001988c) list_single_cale_day_pane_fp_g2

0x4481,	// (0x00019898) list_single_cale_day_pane_fp_g3_ParamLimits

0x4481,	// (0x00019898) list_single_cale_day_pane_fp_g3

0x44a9,	// (0x000198c0) list_single_cale_day_pane_fp_g4_ParamLimits

0x44a9,	// (0x000198c0) list_single_cale_day_pane_fp_g4

0x44cd,	// (0x000198e4) list_single_cale_day_pane_fp_g5_ParamLimits

0x44cd,	// (0x000198e4) list_single_cale_day_pane_fp_g5

0x0004,

0xfb61,	// (0x00024f78) list_single_cale_day_pane_fp_g_ParamLimits

0xfb61,	// (0x00024f78) list_single_cale_day_pane_fp_g

0x44f1,	// (0x00019908) list_single_cale_day_pane_fp_t1_ParamLimits

0x44f1,	// (0x00019908) list_single_cale_day_pane_fp_t1

0x4517,	// (0x0001992e) list_single_cale_day_pane_fp_t2_ParamLimits

0x4517,	// (0x0001992e) list_single_cale_day_pane_fp_t2

0x4530,	// (0x00019947) list_single_cale_day_pane_fp_t3_ParamLimits

0x4530,	// (0x00019947) list_single_cale_day_pane_fp_t3

0x0002,

0xfb6c,	// (0x00024f83) list_single_cale_day_pane_fp_t_ParamLimits

0xfb6c,	// (0x00024f83) list_single_cale_day_pane_fp_t

0x43b0,	// (0x000197c7) list_empty_pane_fp_g1_ParamLimits

0x43b0,	// (0x000197c7) list_empty_pane_fp_g1

0x4549,	// (0x00019960) list_empty_pane_fp_t1

0x4557,	// (0x0001996e) list_empty_pane_fp_t2

0x0001,

0xfb73,	// (0x00024f8a) list_empty_pane_fp_t

0x43b0,	// (0x000197c7) list_single_heading_pane_fp_g1_ParamLimits

0x43b0,	// (0x000197c7) list_single_heading_pane_fp_g1

0xd15b,	// (0x00022572) list_single_heading_pane_fp_g2_ParamLimits

0xd15b,	// (0x00022572) list_single_heading_pane_fp_g2

0x43bc,	// (0x000197d3) list_single_heading_pane_fp_g3_ParamLimits

0x43bc,	// (0x000197d3) list_single_heading_pane_fp_g3

0x0002,

0xfb78,	// (0x00024f8f) list_single_heading_pane_fp_g_ParamLimits

0xfb78,	// (0x00024f8f) list_single_heading_pane_fp_g

0x4565,	// (0x0001997c) list_single_heading_pane_fp_t1_ParamLimits

0x4565,	// (0x0001997c) list_single_heading_pane_fp_t1

0x4577,	// (0x0001998e) list_single_heading_pane_fp_t2_ParamLimits

0x4577,	// (0x0001998e) list_single_heading_pane_fp_t2

0x0001,

0xfb7f,	// (0x00024f96) list_single_heading_pane_fp_t_ParamLimits

0xfb7f,	// (0x00024f96) list_single_heading_pane_fp_t

0xa0c8,	// (0x0001f4df) aid_size_cell_fast

0xc39a,	// (0x000217b1) soft_indicator_pane_cp1_t1

0xa0d1,	// (0x0001f4e8) cell_app_pane_cp2_ParamLimits

0xa0d1,	// (0x0001f4e8) cell_app_pane_cp2

0xebd8,	// (0x00023fef) fep_hwr_candidate_drop_down_list_pane

0xed39,	// (0x00024150) fep_hwr_candidate_pane_g3_ParamLimits

0xed39,	// (0x00024150) fep_hwr_candidate_pane_g3

0xd142,	// (0x00022559) fep_hwr_candidate_pane_g4_ParamLimits

0xd142,	// (0x00022559) fep_hwr_candidate_pane_g4

0x0002,

0xfaee,	// (0x00024f05) fep_hwr_candidate_pane_g_ParamLimits

0xfaee,	// (0x00024f05) fep_hwr_candidate_pane_g

0x3eb2,	// (0x000192c9) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x3eb2,	// (0x000192c9) fep_vkb_candidate_drop_down_list_pane

0x42b5,	// (0x000196cc) fep_vkb_candidate_pane_g3

0x42bd,	// (0x000196d4) fep_vkb_candidate_pane_g4

0x0002,

0xfb1b,	// (0x00024f32) fep_vkb_candidate_pane_g

0xeda4,	// (0x000241bb) cell_hwr_candidate_pane_g1_ParamLimits

0xedb2,	// (0x000241c9) cell_hwr_candidate_pane_g3_ParamLimits

0xedb2,	// (0x000241c9) cell_hwr_candidate_pane_g3

0x5fab,	// (0x0001b3c2) cell_hwr_candidate_pane_g4_ParamLimits

0x5fab,	// (0x0001b3c2) cell_hwr_candidate_pane_g4

0x0002,

0xfb3a,	// (0x00024f51) cell_hwr_candidate_pane_g_ParamLimits

0xfb3a,	// (0x00024f51) cell_hwr_candidate_pane_g

0x42d4,	// (0x000196eb) cell_vkb_candidate_pane_g3_ParamLimits

0x42d4,	// (0x000196eb) cell_vkb_candidate_pane_g3

0x42ef,	// (0x00019706) cell_vkb_candidate_pane_g4_ParamLimits

0x42ef,	// (0x00019706) cell_vkb_candidate_pane_g4

0xb8ce,	// (0x00020ce5) cell_app_pane_cp2_g1_ParamLimits

0xb8ce,	// (0x00020ce5) cell_app_pane_cp2_g1

0x45ab,	// (0x000199c2) cell_app_pane_cp2_g2_ParamLimits

0x45ab,	// (0x000199c2) cell_app_pane_cp2_g2

0x0001,

0xfb84,	// (0x00024f9b) cell_app_pane_cp2_g_ParamLimits

0xfb84,	// (0x00024f9b) cell_app_pane_cp2_g

0x45b7,	// (0x000199ce) cell_app_pane_cp2_t1_ParamLimits

0x45b7,	// (0x000199ce) cell_app_pane_cp2_t1

0xc6ad,	// (0x00021ac4) grid_highlight_pane_cp1_ParamLimits

0xc6ad,	// (0x00021ac4) grid_highlight_pane_cp1

0xedf1,	// (0x00024208) cell_hwr_candidate_pane_cp1_ParamLimits

0xedf1,	// (0x00024208) cell_hwr_candidate_pane_cp1

0xeda4,	// (0x000241bb) fep_hwr_candidate_drop_down_list_pane_g1

0xee10,	// (0x00024227) fep_hwr_candidate_drop_down_list_pane_g2

0xee1d,	// (0x00024234) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb89,	// (0x00024fa0) fep_hwr_candidate_drop_down_list_pane_g

0xee2a,	// (0x00024241) fep_hwr_candidate_drop_down_list_scroll_pane

0xee33,	// (0x0002424a) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xee33,	// (0x0002424a) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xee40,	// (0x00024257) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xee40,	// (0x00024257) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xee4d,	// (0x00024264) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xee4d,	// (0x00024264) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xee5a,	// (0x00024271) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xee5a,	// (0x00024271) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xee75,	// (0x0002428c) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xee75,	// (0x0002428c) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xee90,	// (0x000242a7) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xee90,	// (0x000242a7) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xeeab,	// (0x000242c2) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xeeab,	// (0x000242c2) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xeec6,	// (0x000242dd) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xeec6,	// (0x000242dd) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb90,	// (0x00024fa7) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb90,	// (0x00024fa7) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x45c9,	// (0x000199e0) cell_vkb_candidate_pane_cp1_ParamLimits

0x45c9,	// (0x000199e0) cell_vkb_candidate_pane_cp1

0x3fbd,	// (0x000193d4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x3fbd,	// (0x000193d4) fep_vkb_candidate_drop_down_list_pane_g1

0x45e9,	// (0x00019a00) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x45e9,	// (0x00019a00) fep_vkb_candidate_drop_down_list_pane_g2

0x45f6,	// (0x00019a0d) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x45f6,	// (0x00019a0d) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba1,	// (0x00024fb8) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba1,	// (0x00024fb8) fep_vkb_candidate_drop_down_list_pane_g

0x4603,	// (0x00019a1a) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4603,	// (0x00019a1a) fep_vkb_candidate_drop_down_list_scroll_pane

0x4610,	// (0x00019a27) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4610,	// (0x00019a27) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x461d,	// (0x00019a34) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x461d,	// (0x00019a34) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4629,	// (0x00019a40) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4629,	// (0x00019a40) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4635,	// (0x00019a4c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4635,	// (0x00019a4c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4656,	// (0x00019a6d) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4656,	// (0x00019a6d) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4677,	// (0x00019a8e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4677,	// (0x00019a8e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4698,	// (0x00019aaf) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4698,	// (0x00019aaf) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x46b9,	// (0x00019ad0) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x46b9,	// (0x00019ad0) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba8,	// (0x00024fbf) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba8,	// (0x00024fbf) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x950e,	// (0x0001e925) title_pane_g1_ParamLimits

0x9521,	// (0x0001e938) title_pane_g2_ParamLimits

0xf529,	// (0x00024940) title_pane_g_ParamLimits

0xcb5d,	// (0x00021f74) aid_call2_pane

0xcb65,	// (0x00021f7c) aid_call_pane

0xcb6d,	// (0x00021f84) popup_clock_analogue_window_g1

0xcb6d,	// (0x00021f84) popup_clock_analogue_window_g2

0xe527,	// (0x0002393e) popup_clock_analogue_window_g3

0xe530,	// (0x00023947) popup_clock_analogue_window_g4

0xc20d,	// (0x00021624) popup_clock_analogue_window_g5

0x0004,

0xf6bf,	// (0x00024ad6) popup_clock_analogue_window_g

0xe538,	// (0x0002394f) popup_clock_analogue_window_t1

0xe546,	// (0x0002395d) clock_digital_number_pane_ParamLimits

0xe546,	// (0x0002395d) clock_digital_number_pane

0xe552,	// (0x00023969) clock_digital_number_pane_cp02_ParamLimits

0xe552,	// (0x00023969) clock_digital_number_pane_cp02

0xe55e,	// (0x00023975) clock_digital_number_pane_cp03_ParamLimits

0xe55e,	// (0x00023975) clock_digital_number_pane_cp03

0xe56a,	// (0x00023981) clock_digital_number_pane_cp04_ParamLimits

0xe56a,	// (0x00023981) clock_digital_number_pane_cp04

0xe576,	// (0x0002398d) clock_digital_separator_pane_ParamLimits

0xe576,	// (0x0002398d) clock_digital_separator_pane

0xe582,	// (0x00023999) popup_clock_digital_window_t1_ParamLimits

0xe582,	// (0x00023999) popup_clock_digital_window_t1

0xc20d,	// (0x00021624) clock_digital_number_pane_g1

0xc20d,	// (0x00021624) clock_digital_number_pane_g2

0x0001,

0xf6ca,	// (0x00024ae1) clock_digital_number_pane_g

0xc20d,	// (0x00021624) clock_digital_separator_pane_g1

0xc20d,	// (0x00021624) clock_digital_separator_pane_g2

0x0001,

0xf6ca,	// (0x00024ae1) clock_digital_separator_pane_g

0xa648,	// (0x0001fa5f) aid_fill_nsta_ParamLimits

0xa77e,	// (0x0001fb95) indicator_nsta_pane_ParamLimits

0x0f83,	// (0x0001639a) popup_clock_analogue_window

0x0f83,	// (0x0001639a) popup_clock_digital_window

0xb4d9,	// (0x000208f0) grid_indicator_nsta_pane_ParamLimits

0x36f6,	// (0x00018b0d) clock_nsta_pane_t2

0x0001,

0xfa6e,	// (0x00024e85) clock_nsta_pane_t

0xe508,	// (0x0002391f) aid_size_max_handle

0x8242,	// (0x0001d659) aid_size_min_handle

0xcf9e,	// (0x000223b5) editor_scroll_pane

0x46d4,	// (0x00019aeb) ex_editor_pane

0xc84d,	// (0x00021c64) scroll_pane_cp13

0xc5eb,	// (0x00021a02) scroll_pane_cp14

0xcb9c,	// (0x00021fb3) scroll_pane_cp36

0xa25c,	// (0x0001f673) list_single_graphic_hl_pane_cp2_ParamLimits

0xa25c,	// (0x0001f673) list_single_graphic_hl_pane_cp2

0xb2d1,	// (0x000206e8) list_single_graphic_hl_pane_ParamLimits

0xb2d1,	// (0x000206e8) list_single_graphic_hl_pane

0x66c0,	// (0x0001bad7) aid_size_min_hl_cp1

0x46e5,	// (0x00019afc) list_highlight_pane_cp34_ParamLimits

0x46e5,	// (0x00019afc) list_highlight_pane_cp34

0x46f6,	// (0x00019b0d) list_single_graphic_hl_pane_g1_ParamLimits

0x46f6,	// (0x00019b0d) list_single_graphic_hl_pane_g1

0xb8ec,	// (0x00020d03) list_single_graphic_hl_pane_g2_ParamLimits

0xb8ec,	// (0x00020d03) list_single_graphic_hl_pane_g2

0xb8ec,	// (0x00020d03) list_single_graphic_hl_pane_g3_ParamLimits

0xb8ec,	// (0x00020d03) list_single_graphic_hl_pane_g3

0xcf29,	// (0x00022340) list_single_graphic_hl_pane_g4_ParamLimits

0xcf29,	// (0x00022340) list_single_graphic_hl_pane_g4

0xb8f8,	// (0x00020d0f) list_single_graphic_hl_pane_g5_ParamLimits

0xb8f8,	// (0x00020d0f) list_single_graphic_hl_pane_g5

0x0004,

0xfbb9,	// (0x00024fd0) list_single_graphic_hl_pane_g_ParamLimits

0xfbb9,	// (0x00024fd0) list_single_graphic_hl_pane_g

0xb90c,	// (0x00020d23) list_single_graphic_hl_pane_t1_ParamLimits

0xb90c,	// (0x00020d23) list_single_graphic_hl_pane_t1

0x4739,	// (0x00019b50) aid_size_min_hl_cp2

0x4742,	// (0x00019b59) list_highlight_pane_cp34_cp2_ParamLimits

0x4742,	// (0x00019b59) list_highlight_pane_cp34_cp2

0x46f6,	// (0x00019b0d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x46f6,	// (0x00019b0d) list_single_graphic_hl_pane_g1_cp2

0x474f,	// (0x00019b66) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x474f,	// (0x00019b66) list_single_graphic_hl_pane_g2_cp2

0xb922,	// (0x00020d39) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xb922,	// (0x00020d39) list_single_graphic_hl_pane_g3_cp2

0xc5f3,	// (0x00021a0a) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc5f3,	// (0x00021a0a) list_single_graphic_hl_pane_g4_cp2

0x470f,	// (0x00019b26) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x470f,	// (0x00019b26) list_single_graphic_hl_pane_g5_cp2

0x82f4,	// (0x0001d70b) control_pane_g4_ParamLimits

0x82f4,	// (0x0001d70b) control_pane_g4

0xc85d,	// (0x00021c74) bg_popup_sub_pane_cp10_ParamLimits

0x3d57,	// (0x0001916e) list_choice_list_pane_ParamLimits

0x3d66,	// (0x0001917d) scroll_pane_cp23

0xc3b7,	// (0x000217ce) bg_popup_preview_window_pane_cp02_ParamLimits

0x4354,	// (0x0001976b) list_preview_fixed_pane_ParamLimits

0x436a,	// (0x00019781) list_preview_fixed_pane_cp_ParamLimits

0x436a,	// (0x00019781) list_preview_fixed_pane_cp

0x4376,	// (0x0001978d) popup_preview_fixed_window_g1_ParamLimits

0x4376,	// (0x0001978d) popup_preview_fixed_window_g1

0x4382,	// (0x00019799) popup_preview_fixed_window_g2_ParamLimits

0x4382,	// (0x00019799) popup_preview_fixed_window_g2

0x0002,

0xfb41,	// (0x00024f58) popup_preview_fixed_window_g_ParamLimits

0xfb41,	// (0x00024f58) popup_preview_fixed_window_g

0xe47c,	// (0x00023893) aid_navi_side_left_pane_ParamLimits

0xe491,	// (0x000238a8) aid_navi_side_right_pane_ParamLimits

0xe4a9,	// (0x000238c0) navi_icon_pane_stacon_ParamLimits

0xe4bd,	// (0x000238d4) navi_navi_pane_stacon_ParamLimits

0xe4a9,	// (0x000238c0) navi_text_pane_stacon_ParamLimits

0xe299,	// (0x000236b0) main_text_info_pane

0x477f,	// (0x00019b96) listscroll_text_info_pane

0x4787,	// (0x00019b9e) list_text_info_pane_ParamLimits

0x4787,	// (0x00019b9e) list_text_info_pane

0x4796,	// (0x00019bad) scroll_pane_cp24_ParamLimits

0x4796,	// (0x00019bad) scroll_pane_cp24

0xb930,	// (0x00020d47) list_text_info_pane_t1_ParamLimits

0xb930,	// (0x00020d47) list_text_info_pane_t1

0x8469,	// (0x0001d880) popup_fast_swap2_window_ParamLimits

0x8469,	// (0x0001d880) popup_fast_swap2_window

0x47e8,	// (0x00019bff) aid_size_cell_fast2

0xc203,	// (0x0002161a) bg_popup_window_pane_cp17

0x172b,	// (0x00016b42) heading_pane_cp2

0x1733,	// (0x00016b4a) listscroll_fast2_pane

0x47f2,	// (0x00019c09) grid_fast2_pane

0x47fc,	// (0x00019c13) listscroll_fast2_pane_g1

0x4804,	// (0x00019c1b) listscroll_fast2_pane_g2

0x0001,

0xfbc4,	// (0x00024fdb) listscroll_fast2_pane_g

0xc84d,	// (0x00021c64) scroll_pane_cp26

0x480e,	// (0x00019c25) cell_fast2_pane_ParamLimits

0x480e,	// (0x00019c25) cell_fast2_pane

0x4823,	// (0x00019c3a) cell_fast2_pane_g1

0x482c,	// (0x00019c43) cell_fast2_pane_g2

0x4835,	// (0x00019c4c) cell_fast2_pane_g3

0x0002,

0xfbc9,	// (0x00024fe0) cell_fast2_pane_g

0xc522,	// (0x00021939) grid_highlight_pane_cp9

0xe7d4,	// (0x00023beb) main_eswt_pane_ParamLimits

0xe7d4,	// (0x00023beb) main_eswt_pane

0x47ab,	// (0x00019bc2) list_single_text_info_pane

0x483d,	// (0x00019c54) eswt_ctrl_button_pane

0x483d,	// (0x00019c54) eswt_ctrl_canvas_pane

0xb94c,	// (0x00020d63) eswt_ctrl_combo_pane

0x483d,	// (0x00019c54) eswt_ctrl_default_pane

0x483d,	// (0x00019c54) eswt_ctrl_label_pane

0x484d,	// (0x00019c64) eswt_ctrl_wait_pane

0xb954,	// (0x00020d6b) eswt_shell_pane

0xc203,	// (0x0002161a) listscroll_eswt_app_pane

0x4875,	// (0x00019c8c) popup_eswt_tasktip_window_ParamLimits

0x4875,	// (0x00019c8c) popup_eswt_tasktip_window

0x12f7,	// (0x0001670e) bg_popup_window_pane_cp18

0x4886,	// (0x00019c9d) eswt_control_pane_g1_ParamLimits

0x4886,	// (0x00019c9d) eswt_control_pane_g1

0x4893,	// (0x00019caa) eswt_control_pane_g2_ParamLimits

0x4893,	// (0x00019caa) eswt_control_pane_g2

0x48a0,	// (0x00019cb7) eswt_control_pane_g3_ParamLimits

0x48a0,	// (0x00019cb7) eswt_control_pane_g3

0x48ad,	// (0x00019cc4) eswt_control_pane_g4_ParamLimits

0x48ad,	// (0x00019cc4) eswt_control_pane_g4

0x0003,

0xfbd0,	// (0x00024fe7) eswt_control_pane_g_ParamLimits

0xfbd0,	// (0x00024fe7) eswt_control_pane_g

0xc6ad,	// (0x00021ac4) bg_button_pane_ParamLimits

0xc6ad,	// (0x00021ac4) bg_button_pane

0xc537,	// (0x0002194e) common_borders_pane_copy2_ParamLimits

0xc537,	// (0x0002194e) common_borders_pane_copy2

0x48ba,	// (0x00019cd1) control_button_pane_g1_ParamLimits

0x48ba,	// (0x00019cd1) control_button_pane_g1

0x48c6,	// (0x00019cdd) control_button_pane_g2_ParamLimits

0x48c6,	// (0x00019cdd) control_button_pane_g2

0x48d2,	// (0x00019ce9) control_button_pane_g3_ParamLimits

0x48d2,	// (0x00019ce9) control_button_pane_g3

0x0002,

0xfbd9,	// (0x00024ff0) control_button_pane_g_ParamLimits

0xfbd9,	// (0x00024ff0) control_button_pane_g

0x48e6,	// (0x00019cfd) control_button_pane_t1

0x48f4,	// (0x00019d0b) control_button_pane_t2

0x0001,

0xfbe0,	// (0x00024ff7) control_button_pane_t

0x11d7,	// (0x000165ee) bg_button_pane_g1

0x11e7,	// (0x000165fe) bg_button_pane_g2

0x11df,	// (0x000165f6) bg_button_pane_g3

0x11f7,	// (0x0001660e) bg_button_pane_g4

0x11ef,	// (0x00016606) bg_button_pane_g5

0x11ff,	// (0x00016616) bg_button_pane_g6

0x1207,	// (0x0001661e) bg_button_pane_g7

0x1217,	// (0x0001662e) bg_button_pane_g8

0x120f,	// (0x00016626) bg_button_pane_g9

0x0008,

0xf821,	// (0x00024c38) bg_button_pane_g

0x3d12,	// (0x00019129) common_borders_pane_ParamLimits

0x3d12,	// (0x00019129) common_borders_pane

0x4886,	// (0x00019c9d) eswt_control_pane_g1_copy1_ParamLimits

0x4886,	// (0x00019c9d) eswt_control_pane_g1_copy1

0x4893,	// (0x00019caa) eswt_control_pane_g2_copy1_ParamLimits

0x4893,	// (0x00019caa) eswt_control_pane_g2_copy1

0x48a0,	// (0x00019cb7) eswt_control_pane_g3_copy1_ParamLimits

0x48a0,	// (0x00019cb7) eswt_control_pane_g3_copy1

0x48ad,	// (0x00019cc4) eswt_control_pane_g4_copy1_ParamLimits

0x48ad,	// (0x00019cc4) eswt_control_pane_g4_copy1

0x3d4d,	// (0x00019164) bg_eswt_ctrl_canvas_pane_g1

0x3d12,	// (0x00019129) common_borders_pane_cp2_ParamLimits

0x3d12,	// (0x00019129) common_borders_pane_cp2

0x3d12,	// (0x00019129) common_borders_pane_cp3_ParamLimits

0x3d12,	// (0x00019129) common_borders_pane_cp3

0x4902,	// (0x00019d19) separator_horizontal_pane

0x490a,	// (0x00019d21) separator_vertical_pane

0x4886,	// (0x00019c9d) eswt_control_pane_g1_copy2_ParamLimits

0x4886,	// (0x00019c9d) eswt_control_pane_g1_copy2

0x4893,	// (0x00019caa) eswt_control_pane_g2_copy2_ParamLimits

0x4893,	// (0x00019caa) eswt_control_pane_g2_copy2

0x48a0,	// (0x00019cb7) eswt_control_pane_g3_copy2_ParamLimits

0x48a0,	// (0x00019cb7) eswt_control_pane_g3_copy2

0x48ad,	// (0x00019cc4) eswt_control_pane_g4_copy2_ParamLimits

0x48ad,	// (0x00019cc4) eswt_control_pane_g4_copy2

0xc203,	// (0x0002161a) common_borders_pane_cp4

0x4913,	// (0x00019d2a) separator_horizontal_pane_g1

0x491c,	// (0x00019d33) separator_horizontal_pane_g2

0x4925,	// (0x00019d3c) separator_horizontal_pane_g3

0x0002,

0xfbe5,	// (0x00024ffc) separator_horizontal_pane_g

0x4886,	// (0x00019c9d) eswt_control_pane_g1_copy3_ParamLimits

0x4886,	// (0x00019c9d) eswt_control_pane_g1_copy3

0x4893,	// (0x00019caa) eswt_control_pane_g2_copy3_ParamLimits

0x4893,	// (0x00019caa) eswt_control_pane_g2_copy3

0x48a0,	// (0x00019cb7) eswt_control_pane_g3_copy3_ParamLimits

0x48a0,	// (0x00019cb7) eswt_control_pane_g3_copy3

0x48ad,	// (0x00019cc4) eswt_control_pane_g4_copy3_ParamLimits

0x48ad,	// (0x00019cc4) eswt_control_pane_g4_copy3

0xc203,	// (0x0002161a) common_borders_pane_cp5

0x492e,	// (0x00019d45) separator_vertical_pane_g1

0x4937,	// (0x00019d4e) separator_vertical_pane_g2

0x4940,	// (0x00019d57) separator_vertical_pane_g3

0x0002,

0xfbec,	// (0x00025003) separator_vertical_pane_g

0x4886,	// (0x00019c9d) eswt_control_pane_g1_copy4_ParamLimits

0x4886,	// (0x00019c9d) eswt_control_pane_g1_copy4

0x4893,	// (0x00019caa) eswt_control_pane_g2_copy4_ParamLimits

0x4893,	// (0x00019caa) eswt_control_pane_g2_copy4

0x48a0,	// (0x00019cb7) eswt_control_pane_g3_copy4_ParamLimits

0x48a0,	// (0x00019cb7) eswt_control_pane_g3_copy4

0x48ad,	// (0x00019cc4) eswt_control_pane_g4_copy4_ParamLimits

0x48ad,	// (0x00019cc4) eswt_control_pane_g4_copy4

0xb974,	// (0x00020d8b) eswt_ctrl_combo_button_pane

0xb97c,	// (0x00020d93) eswt_ctrl_input_pane

0xb984,	// (0x00020d9b) popup_choice_list_window_cp70

0xb98c,	// (0x00020da3) eswt_ctrl_input_pane_t1

0xc203,	// (0x0002161a) input_focus_pane_cp70

0x3d12,	// (0x00019129) bg_button_pane_cp70_ParamLimits

0x3d12,	// (0x00019129) bg_button_pane_cp70

0xb99a,	// (0x00020db1) eswt_ctrl_combo_button_pane_g1

0x4977,	// (0x00019d8e) wait_bar_pane_cp70

0x12f7,	// (0x0001670e) bg_popup_window_pane_cp70_ParamLimits

0x12f7,	// (0x0001670e) bg_popup_window_pane_cp70

0x497f,	// (0x00019d96) popup_eswt_tasktip_window_t1

0x4995,	// (0x00019dac) wait_bar_pane_cp71_ParamLimits

0x4995,	// (0x00019dac) wait_bar_pane_cp71

0x49a1,	// (0x00019db8) grid_eswt_app_pane

0xca40,	// (0x00021e57) scroll_pane_cp70

0xb9a2,	// (0x00020db9) cell_eswt_app_pane_ParamLimits

0xb9a2,	// (0x00020db9) cell_eswt_app_pane

0xb9cc,	// (0x00020de3) cell_eswt_app_pane_g1_ParamLimits

0xb9cc,	// (0x00020de3) cell_eswt_app_pane_g1

0xb9fb,	// (0x00020e12) cell_eswt_app_pane_g2_ParamLimits

0xb9fb,	// (0x00020e12) cell_eswt_app_pane_g2

0x0001,

0xfbf3,	// (0x0002500a) cell_eswt_app_pane_g_ParamLimits

0xfbf3,	// (0x0002500a) cell_eswt_app_pane_g

0xba1f,	// (0x00020e36) cell_eswt_app_pane_t1_ParamLimits

0xba1f,	// (0x00020e36) cell_eswt_app_pane_t1

0x4a5f,	// (0x00019e76) grid_highlight_pane_cp70_ParamLimits

0x4a5f,	// (0x00019e76) grid_highlight_pane_cp70

0xcec5,	// (0x000222dc) set_content_pane_g1

0xa5fd,	// (0x0001fa14) status_small_volume_pane

0x8db7,	// (0x0001e1ce) status_small_volume_pane_g1

0x8dbf,	// (0x0001e1d6) volume_small2_pane

0x8dc8,	// (0x0001e1df) volume_small2_pane_g1

0x8dd1,	// (0x0001e1e8) volume_small2_pane_g2

0x8dda,	// (0x0001e1f1) volume_small2_pane_g3

0x8de3,	// (0x0001e1fa) volume_small2_pane_g4

0x8dec,	// (0x0001e203) volume_small2_pane_g5

0x8df5,	// (0x0001e20c) volume_small2_pane_g6

0x8dfe,	// (0x0001e215) volume_small2_pane_g7

0x8e07,	// (0x0001e21e) volume_small2_pane_g8

0x8e10,	// (0x0001e227) volume_small2_pane_g9

0x8e19,	// (0x0001e230) volume_small2_pane_g10

0x0009,

0xfbf8,	// (0x0002500f) volume_small2_pane_g

0x4105,	// (0x0001951c) fep_vkb_top_text_pane_g1_ParamLimits

0xb876,	// (0x00020c8d) fep_vkb_top_text_pane_t1_ParamLimits

0x438e,	// (0x000197a5) popup_preview_fixed_window_g3_ParamLimits

0x438e,	// (0x000197a5) popup_preview_fixed_window_g3

0x8ae0,	// (0x0001def7) popup_toolbar_trans_pane

0xb128,	// (0x0002053f) aid_height_set_list_ParamLimits

0x2699,	// (0x00017ab0) aid_size_parent_ParamLimits

0xc85d,	// (0x00021c74) list_highlight_pane_cp2_ParamLimits

0xcec5,	// (0x000222dc) set_content_pane_g1_ParamLimits

0xb2e3,	// (0x000206fa) list_single_image_pane_ParamLimits

0xb2e3,	// (0x000206fa) list_single_image_pane

0xba51,	// (0x00020e68) aid_size_cell_image_ParamLimits

0xba51,	// (0x00020e68) aid_size_cell_image

0xba5e,	// (0x00020e75) grid_single_image_pane_ParamLimits

0xba5e,	// (0x00020e75) grid_single_image_pane

0xd15b,	// (0x00022572) list_single_image_pane_g1_ParamLimits

0xd15b,	// (0x00022572) list_single_image_pane_g1

0x43bc,	// (0x000197d3) list_single_image_pane_g2_ParamLimits

0x43bc,	// (0x000197d3) list_single_image_pane_g2

0x0001,

0xfc0d,	// (0x00025024) list_single_image_pane_g_ParamLimits

0xfc0d,	// (0x00025024) list_single_image_pane_g

0x4a84,	// (0x00019e9b) list_single_image_pane_t1_ParamLimits

0x4a84,	// (0x00019e9b) list_single_image_pane_t1

0xba6a,	// (0x00020e81) cell_image_list_pane_ParamLimits

0xba6a,	// (0x00020e81) cell_image_list_pane

0xba7e,	// (0x00020e95) cell_image_list_pane_g1

0xba87,	// (0x00020e9e) cell_image_list_pane_g2

0x0001,

0xfc12,	// (0x00025029) cell_image_list_pane_g

0xba90,	// (0x00020ea7) aid_size_cell_tb_trans_pane

0xc6ad,	// (0x00021ac4) bg_tb_trans_pane

0xbaa2,	// (0x00020eb9) grid_tb_trans_pane

0x11d7,	// (0x000165ee) bg_tb_trans_pane_g1

0x11e7,	// (0x000165fe) bg_tb_trans_pane_g2

0x11df,	// (0x000165f6) bg_tb_trans_pane_g3

0x11f7,	// (0x0001660e) bg_tb_trans_pane_g4

0x11ef,	// (0x00016606) bg_tb_trans_pane_g5

0x1217,	// (0x0001662e) bg_tb_trans_pane_g6

0x120f,	// (0x00016626) bg_tb_trans_pane_g7

0x11ff,	// (0x00016616) bg_tb_trans_pane_g8

0x1207,	// (0x0001661e) bg_tb_trans_pane_g9

0x0008,

0xfc17,	// (0x0002502e) bg_tb_trans_pane_g

0xbab6,	// (0x00020ecd) cell_toolbar_trans_pane_ParamLimits

0xbab6,	// (0x00020ecd) cell_toolbar_trans_pane

0x3d4d,	// (0x00019164) cell_toolbar_trans_pane_g1

0xb5a2,	// (0x000209b9) list_form2_midp_pane_t1

0xb5b0,	// (0x000209c7) list_form2_midp_pane_t2

0x0001,

0xfab4,	// (0x00024ecb) list_form2_midp_pane_t

0x38e7,	// (0x00018cfe) scroll_pane_cp51_ParamLimits

0x3af0,	// (0x00018f07) form2_midp_wait_pane_g1

0x3af9,	// (0x00018f10) form2_midp_wait_pane_g2

0x3b02,	// (0x00018f19) form2_midp_wait_pane_g3

0x0002,

0xfac9,	// (0x00024ee0) form2_midp_wait_pane_g

0xc273,	// (0x0002168a) list_highlight_pane_cp21_ParamLimits

0x3b4a,	// (0x00018f61) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x3b59,	// (0x00018f70) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x289c,	// (0x00017cb3) list_single_2graphic_im_pane_ParamLimits

0x289c,	// (0x00017cb3) list_single_2graphic_im_pane

0xbadc,	// (0x00020ef3) list_single_2graphic_im_pane_g1_ParamLimits

0xbadc,	// (0x00020ef3) list_single_2graphic_im_pane_g1

0xbaed,	// (0x00020f04) list_single_2graphic_im_pane_g2_ParamLimits

0xbaed,	// (0x00020f04) list_single_2graphic_im_pane_g2

0xbaf9,	// (0x00020f10) list_single_2graphic_im_pane_g3_ParamLimits

0xbaf9,	// (0x00020f10) list_single_2graphic_im_pane_g3

0x0003,

0xfc2a,	// (0x00025041) list_single_2graphic_im_pane_g_ParamLimits

0xfc2a,	// (0x00025041) list_single_2graphic_im_pane_g

0xbb0d,	// (0x00020f24) list_single_2graphic_im_pane_t1_ParamLimits

0xbb0d,	// (0x00020f24) list_single_2graphic_im_pane_t1

0x439a,	// (0x000197b1) list_single_graphic_2heading_pane_fp_ParamLimits

0x439a,	// (0x000197b1) list_single_graphic_2heading_pane_fp

0x43f3,	// (0x0001980a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x43f3,	// (0x0001980a) list_single_graphic_2heading_pane_fp_g1

0x43b0,	// (0x000197c7) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x43b0,	// (0x000197c7) list_single_graphic_2heading_pane_fp_g2

0xd15b,	// (0x00022572) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd15b,	// (0x00022572) list_single_graphic_2heading_pane_fp_g3

0x43bc,	// (0x000197d3) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x43bc,	// (0x000197d3) list_single_graphic_2heading_pane_fp_g4

0x43d0,	// (0x000197e7) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x43d0,	// (0x000197e7) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb51,	// (0x00024f68) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb51,	// (0x00024f68) list_single_graphic_2heading_pane_fp_g

0x4b7a,	// (0x00019f91) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4b7a,	// (0x00019f91) list_single_graphic_2heading_pane_fp_t1

0x442b,	// (0x00019842) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x442b,	// (0x00019842) list_single_graphic_2heading_pane_fp_t2

0x4b90,	// (0x00019fa7) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4b90,	// (0x00019fa7) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc33,	// (0x0002504a) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc33,	// (0x0002504a) list_single_graphic_2heading_pane_fp_t

0x3dd9,	// (0x000191f0) fep_hwr_write_pane_g5_ParamLimits

0x3dd9,	// (0x000191f0) fep_hwr_write_pane_g5

0x3de5,	// (0x000191fc) fep_hwr_write_pane_g6_ParamLimits

0x3de5,	// (0x000191fc) fep_hwr_write_pane_g6

0xb954,	// (0x00020d6b) eswt_shell_pane_ParamLimits

0x12f7,	// (0x0001670e) bg_popup_window_pane_cp18_ParamLimits

0x25cf,	// (0x000179e6) heading_pane_cp70

0x497f,	// (0x00019d96) popup_eswt_tasktip_window_t1_ParamLimits

0xa6a3,	// (0x0001faba) aid_touch_tab_arrow_left

0xa6b9,	// (0x0001fad0) aid_touch_tab_arrow_right

0x9539,	// (0x0001e950) title_pane_g3_ParamLimits

0x9539,	// (0x0001e950) title_pane_g3

0xc644,	// (0x00021a5b) set_value_pane_g1

0x8ae0,	// (0x0001def7) popup_toolbar_trans_pane_ParamLimits

0xba90,	// (0x00020ea7) aid_size_cell_tb_trans_pane_ParamLimits

0xc6ad,	// (0x00021ac4) bg_tb_trans_pane_ParamLimits

0xbaa2,	// (0x00020eb9) grid_tb_trans_pane_ParamLimits

0xc3b7,	// (0x000217ce) cont_note_pane_ParamLimits

0xc3b7,	// (0x000217ce) cont_note_pane

0xc537,	// (0x0002194e) cont_snote2_single_text_pane_ParamLimits

0xc537,	// (0x0002194e) cont_snote2_single_text_pane

0xc537,	// (0x0002194e) cont_snote2_single_graphic_pane_ParamLimits

0xc537,	// (0x0002194e) cont_snote2_single_graphic_pane

0x1952,	// (0x00016d69) cont_note_wait_pane_ParamLimits

0x1952,	// (0x00016d69) cont_note_wait_pane

0x1952,	// (0x00016d69) cont_note_image_pane_ParamLimits

0x1952,	// (0x00016d69) cont_note_image_pane

0x4ba6,	// (0x00019fbd) popup_note2_window_g1_ParamLimits

0x4ba6,	// (0x00019fbd) popup_note2_window_g1

0xbb4b,	// (0x00020f62) popup_note2_window_t1_ParamLimits

0xbb4b,	// (0x00020f62) popup_note2_window_t1

0xbb90,	// (0x00020fa7) popup_note2_window_t2_ParamLimits

0xbb90,	// (0x00020fa7) popup_note2_window_t2

0xbbd5,	// (0x00020fec) popup_note2_window_t3_ParamLimits

0xbbd5,	// (0x00020fec) popup_note2_window_t3

0x4ca6,	// (0x0001a0bd) popup_note2_window_t4_ParamLimits

0x4ca6,	// (0x0001a0bd) popup_note2_window_t4

0xc43b,	// (0x00021852) popup_note2_window_t5_ParamLimits

0xc43b,	// (0x00021852) popup_note2_window_t5

0x0004,

0xfc3f,	// (0x00025056) popup_note2_window_t_ParamLimits

0xfc3f,	// (0x00025056) popup_note2_window_t

0x4cd5,	// (0x0001a0ec) popup_note2_image_window_g1_ParamLimits

0x4cd5,	// (0x0001a0ec) popup_note2_image_window_g1

0xbc1a,	// (0x00021031) popup_note2_image_window_g2_ParamLimits

0xbc1a,	// (0x00021031) popup_note2_image_window_g2

0x0001,

0xfc4a,	// (0x00025061) popup_note2_image_window_g_ParamLimits

0xfc4a,	// (0x00025061) popup_note2_image_window_g

0x4cf3,	// (0x0001a10a) popup_note2_image_window_t1_ParamLimits

0x4cf3,	// (0x0001a10a) popup_note2_image_window_t1

0x4d0b,	// (0x0001a122) popup_note2_image_window_t2_ParamLimits

0x4d0b,	// (0x0001a122) popup_note2_image_window_t2

0x4d23,	// (0x0001a13a) popup_note2_image_window_t3_ParamLimits

0x4d23,	// (0x0001a13a) popup_note2_image_window_t3

0x0002,

0xfc4f,	// (0x00025066) popup_note2_image_window_t_ParamLimits

0xfc4f,	// (0x00025066) popup_note2_image_window_t

0x1960,	// (0x00016d77) popup_note2_wait_window_g1_ParamLimits

0x1960,	// (0x00016d77) popup_note2_wait_window_g1

0x196c,	// (0x00016d83) popup_note2_wait_window_g2_ParamLimits

0x196c,	// (0x00016d83) popup_note2_wait_window_g2

0x1978,	// (0x00016d8f) popup_note2_wait_window_g3_ParamLimits

0x1978,	// (0x00016d8f) popup_note2_wait_window_g3

0x0002,

0xf803,	// (0x00024c1a) popup_note2_wait_window_g_ParamLimits

0xf803,	// (0x00024c1a) popup_note2_wait_window_g

0x4d3f,	// (0x0001a156) popup_note2_wait_window_t1_ParamLimits

0x4d3f,	// (0x0001a156) popup_note2_wait_window_t1

0x4d5d,	// (0x0001a174) popup_note2_wait_window_t2_ParamLimits

0x4d5d,	// (0x0001a174) popup_note2_wait_window_t2

0x4d7b,	// (0x0001a192) popup_note2_wait_window_t3_ParamLimits

0x4d7b,	// (0x0001a192) popup_note2_wait_window_t3

0x4d8d,	// (0x0001a1a4) popup_note2_wait_window_t4_ParamLimits

0x4d8d,	// (0x0001a1a4) popup_note2_wait_window_t4

0x0003,

0xfc56,	// (0x0002506d) popup_note2_wait_window_t_ParamLimits

0xfc56,	// (0x0002506d) popup_note2_wait_window_t

0x4d9f,	// (0x0001a1b6) wait_bar2_pane_ParamLimits

0x4d9f,	// (0x0001a1b6) wait_bar2_pane

0x4db7,	// (0x0001a1ce) popup_snote2_single_text_window_g1_ParamLimits

0x4db7,	// (0x0001a1ce) popup_snote2_single_text_window_g1

0x4ddf,	// (0x0001a1f6) popup_snote2_single_text_window_t1_ParamLimits

0x4ddf,	// (0x0001a1f6) popup_snote2_single_text_window_t1

0x4e2b,	// (0x0001a242) popup_snote2_single_text_window_t2_ParamLimits

0x4e2b,	// (0x0001a242) popup_snote2_single_text_window_t2

0x4e77,	// (0x0001a28e) popup_snote2_single_text_window_t3_ParamLimits

0x4e77,	// (0x0001a28e) popup_snote2_single_text_window_t3

0x4eb8,	// (0x0001a2cf) popup_snote2_single_text_window_t4_ParamLimits

0x4eb8,	// (0x0001a2cf) popup_snote2_single_text_window_t4

0x4eee,	// (0x0001a305) popup_snote2_single_text_window_t5_ParamLimits

0x4eee,	// (0x0001a305) popup_snote2_single_text_window_t5

0x0004,

0xfc5f,	// (0x00025076) popup_snote2_single_text_window_t_ParamLimits

0xfc5f,	// (0x00025076) popup_snote2_single_text_window_t

0xbc2c,	// (0x00021043) popup_snote2_single_graphic_window_g1_ParamLimits

0xbc2c,	// (0x00021043) popup_snote2_single_graphic_window_g1

0x4f41,	// (0x0001a358) popup_snote2_single_graphic_window_g2_ParamLimits

0x4f41,	// (0x0001a358) popup_snote2_single_graphic_window_g2

0x0001,

0xfc6a,	// (0x00025081) popup_snote2_single_graphic_window_g_ParamLimits

0xfc6a,	// (0x00025081) popup_snote2_single_graphic_window_g

0x4f69,	// (0x0001a380) popup_snote2_single_graphic_window_t1_ParamLimits

0x4f69,	// (0x0001a380) popup_snote2_single_graphic_window_t1

0x4fb5,	// (0x0001a3cc) popup_snote2_single_graphic_window_t2_ParamLimits

0x4fb5,	// (0x0001a3cc) popup_snote2_single_graphic_window_t2

0x4e77,	// (0x0001a28e) popup_snote2_single_graphic_window_t3_ParamLimits

0x4e77,	// (0x0001a28e) popup_snote2_single_graphic_window_t3

0x4eb8,	// (0x0001a2cf) popup_snote2_single_graphic_window_t4_ParamLimits

0x4eb8,	// (0x0001a2cf) popup_snote2_single_graphic_window_t4

0x4eee,	// (0x0001a305) popup_snote2_single_graphic_window_t5_ParamLimits

0x4eee,	// (0x0001a305) popup_snote2_single_graphic_window_t5

0x0004,

0xfc6f,	// (0x00025086) popup_snote2_single_graphic_window_t_ParamLimits

0xfc6f,	// (0x00025086) popup_snote2_single_graphic_window_t

0x37a4,	// (0x00018bbb) clock_nsta_pane_cp2_t1

0x37a4,	// (0x00018bbb) clock_nsta_pane_cp2_t2

0x0001,

0xfa8a,	// (0x00024ea1) clock_nsta_pane_cp2_t

0xc6cc,	// (0x00021ae3) form_field_data_wide_pane_g1_ParamLimits

0xc6d8,	// (0x00021aef) form_field_data_wide_pane_g2_ParamLimits

0xc6d8,	// (0x00021aef) form_field_data_wide_pane_g2

0xc6e4,	// (0x00021afb) form_field_data_wide_pane_g3_ParamLimits

0xc6e4,	// (0x00021afb) form_field_data_wide_pane_g3

0x0002,

0xf642,	// (0x00024a59) form_field_data_wide_pane_g_ParamLimits

0xf642,	// (0x00024a59) form_field_data_wide_pane_g

0xb4c3,	// (0x000208da) grid_touch_3_pane_ParamLimits

0xb4c3,	// (0x000208da) grid_touch_3_pane

0xbc54,	// (0x0002106b) cell_touch_3_pane_ParamLimits

0xbc54,	// (0x0002106b) cell_touch_3_pane

0x3d4d,	// (0x00019164) cell_touch_3_pane_g1

0x3d4d,	// (0x00019164) cell_touch_3_pane_g2

0x0001,

0xfb0f,	// (0x00024f26) cell_touch_3_pane_g

0xc46d,	// (0x00021884) cont_query_data_pane

0xc475,	// (0x0002188c) cont_query_data_pane_cp1

0x502f,	// (0x0001a446) button_value_adjust_pane_cp7

0x5037,	// (0x0001a44e) query_popup_pane_cp3

0xcbce,	// (0x00021fe5) bg_popup_sub_pane_cp22_ParamLimits

0x825f,	// (0x0001d676) navi_navi_volume_pane_cp2

0x826e,	// (0x0001d685) popup_side_volume_key_window_g2

0x827d,	// (0x0001d694) popup_side_volume_key_window_g3

0x0002,

0xf6d8,	// (0x00024aef) popup_side_volume_key_window_g

0x828c,	// (0x0001d6a3) popup_side_volume_key_window_t2

0x0001,

0xf6df,	// (0x00024af6) popup_side_volume_key_window_t

0xa424,	// (0x0001f83b) popup_side_volume_key_window_ParamLimits

0x9c0f,	// (0x0001f026) list_double_graphic_pane_g4_ParamLimits

0x9c0f,	// (0x0001f026) list_double_graphic_pane_g4

0xb2bd,	// (0x000206d4) list_single_2heading_msg_pane_ParamLimits

0xb2bd,	// (0x000206d4) list_single_2heading_msg_pane

0xbc9d,	// (0x000210b4) list_single_2heading_msg_pane_g1_ParamLimits

0xbc9d,	// (0x000210b4) list_single_2heading_msg_pane_g1

0xbca9,	// (0x000210c0) list_single_2heading_msg_pane_g2_ParamLimits

0xbca9,	// (0x000210c0) list_single_2heading_msg_pane_g2

0xbcbc,	// (0x000210d3) list_single_2heading_msg_pane_g3_ParamLimits

0xbcbc,	// (0x000210d3) list_single_2heading_msg_pane_g3

0xbcc8,	// (0x000210df) list_single_2heading_msg_pane_g4_ParamLimits

0xbcc8,	// (0x000210df) list_single_2heading_msg_pane_g4

0x0003,

0xfc7a,	// (0x00025091) list_single_2heading_msg_pane_g_ParamLimits

0xfc7a,	// (0x00025091) list_single_2heading_msg_pane_g

0xbce0,	// (0x000210f7) list_single_2heading_msg_pane_t1_ParamLimits

0xbce0,	// (0x000210f7) list_single_2heading_msg_pane_t1

0xbd08,	// (0x0002111f) list_single_2heading_msg_pane_t2_ParamLimits

0xbd08,	// (0x0002111f) list_single_2heading_msg_pane_t2

0xbd73,	// (0x0002118a) list_single_2heading_msg_pane_t3_ParamLimits

0xbd73,	// (0x0002118a) list_single_2heading_msg_pane_t3

0x5126,	// (0x0001a53d) list_single_2heading_msg_pane_t4_ParamLimits

0x5126,	// (0x0001a53d) list_single_2heading_msg_pane_t4

0x0003,

0xfc83,	// (0x0002509a) list_single_2heading_msg_pane_t_ParamLimits

0xfc83,	// (0x0002509a) list_single_2heading_msg_pane_t

0xc221,	// (0x00021638) title_pane_g4_ParamLimits

0xc221,	// (0x00021638) title_pane_g4

0xe3cd,	// (0x000237e4) title_pane_stacon_g3_ParamLimits

0xe3cd,	// (0x000237e4) title_pane_stacon_g3

0x4b3d,	// (0x00019f54) list_single_2graphic_im_pane_g4_ParamLimits

0x4b3d,	// (0x00019f54) list_single_2graphic_im_pane_g4

0xafc3,	// (0x000203da) popup_side_volume_key_window_cp

0x2ca6,	// (0x000180bd) main_idle_act2_pane_t1

0xe8e0,	// (0x00023cf7) toolbar_button_pane_g10

0x9ab4,	// (0x0001eecb) popup_toolbar_window_cp1

0x3795,	// (0x00018bac) clock_nsta_pane_cp_t1

0x3795,	// (0x00018bac) clock_nsta_pane_cp_t2

0x0001,

0xfa85,	// (0x00024e9c) clock_nsta_pane_cp_t

0x825f,	// (0x0001d676) navi_navi_volume_pane_cp2_ParamLimits

0xe5a1,	// (0x000239b8) popup_side_volume_key_window_g1_ParamLimits

0x826e,	// (0x0001d685) popup_side_volume_key_window_g2_ParamLimits

0x827d,	// (0x0001d694) popup_side_volume_key_window_g3_ParamLimits

0xf6d8,	// (0x00024aef) popup_side_volume_key_window_g_ParamLimits

0xebc4,	// (0x00023fdb) fep_hwr_aid_pane

0xec6b,	// (0x00024082) bg_fep_hwr_top_pane_g4_ParamLimits

0x3da9,	// (0x000191c0) fep_hwr_top_pane_g1_ParamLimits

0x3dbb,	// (0x000191d2) fep_hwr_top_pane_g2_ParamLimits

0xec8b,	// (0x000240a2) fep_hwr_top_pane_g3_ParamLimits

0xfada,	// (0x00024ef1) fep_hwr_top_pane_g_ParamLimits

0xeca0,	// (0x000240b7) fep_hwr_top_text_pane_ParamLimits

0x215c,	// (0x00017573) aid_touch_tab_arrow_arrow_2

0x2165,	// (0x0001757c) aid_touch_tab_arrow_left_2

0xebd8,	// (0x00023fef) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xec0f,	// (0x00024026) fep_hwr_prediction_pane

0x3f14,	// (0x0001932b) fep_vkb_prediction_pane

0xb856,	// (0x00020c6d) fep_vkb_side_pane_g3_ParamLimits

0xb856,	// (0x00020c6d) fep_vkb_side_pane_g3

0xeda4,	// (0x000241bb) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xee10,	// (0x00024227) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xee1d,	// (0x00024234) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb89,	// (0x00024fa0) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xeee1,	// (0x000242f8) fep_hwr_prediction_pane_g1

0xeeeb,	// (0x00024302) fep_hwr_prediction_pane_g2

0xeef3,	// (0x0002430a) fep_hwr_prediction_pane_g3

0xeefb,	// (0x00024312) fep_hwr_prediction_pane_g4

0x0003,

0xfc8c,	// (0x000250a3) fep_hwr_prediction_pane_g

0x514b,	// (0x0001a562) fep_vkb_prediction_pane_g1

0x5155,	// (0x0001a56c) fep_vkb_prediction_pane_g2

0x515d,	// (0x0001a574) fep_vkb_prediction_pane_g3

0x5165,	// (0x0001a57c) fep_vkb_prediction_pane_g4

0x0003,

0xfc95,	// (0x000250ac) fep_vkb_prediction_pane_g

0x8cb6,	// (0x0001e0cd) slider_set_pane_g3

0x8cca,	// (0x0001e0e1) slider_set_pane_g4

0x8ce2,	// (0x0001e0f9) slider_set_pane_g5

0x8cb6,	// (0x0001e0cd) slider_set_pane_g6

0x8cf8,	// (0x0001e10f) slider_set_pane_g7

0x27fa,	// (0x00017c11) slider_form_pane_g3

0x2803,	// (0x00017c1a) slider_form_pane_g4

0x280b,	// (0x00017c22) slider_form_pane_g5

0x27fa,	// (0x00017c11) slider_form_pane_g6

0xb273,	// (0x0002068a) slider_form_pane_g7

0x2f8a,	// (0x000183a1) slider_set_pane_vc_g3

0x2f93,	// (0x000183aa) slider_set_pane_vc_g4

0x2f9c,	// (0x000183b3) slider_set_pane_vc_g5

0x2f8a,	// (0x000183a1) slider_set_pane_vc_g6

0x2fa5,	// (0x000183bc) slider_set_pane_vc_g7

0x3453,	// (0x0001886a) slider_form_pane_vc_g1

0x345c,	// (0x00018873) slider_form_pane_vc_g2

0x3465,	// (0x0001887c) slider_form_pane_vc_g3

0x3453,	// (0x0001886a) slider_form_pane_vc_g4

0x346e,	// (0x00018885) slider_form_pane_vc_g5

0x0004,

0xfa57,	// (0x00024e6e) slider_form_pane_vc_g

0xe299,	// (0x000236b0) main_idle_act3_pane

0x516d,	// (0x0001a584) ai3_links_pane

0xbde1,	// (0x000211f8) popup_ai3_data_window_ParamLimits

0xbde1,	// (0x000211f8) popup_ai3_data_window

0xc203,	// (0x0002161a) grid_ai3_links_pane

0xbdf9,	// (0x00021210) cell_ai3_links_pane_ParamLimits

0xbdf9,	// (0x00021210) cell_ai3_links_pane

0x51a6,	// (0x0001a5bd) bg_popup_sub_pane_cp11

0x51b3,	// (0x0001a5ca) cell_ai3_links_pane_g1

0xc203,	// (0x0002161a) bg_popup_sub_pane_cp12

0x51d8,	// (0x0001a5ef) heading_ai3_data_pane

0x51e0,	// (0x0001a5f7) list_ai3_gene_pane

0x51ec,	// (0x0001a603) popup_ai3_data_window_g1

0x51f4,	// (0x0001a60b) heading_ai3_data_pane_g1

0x51fc,	// (0x0001a613) heading_ai3_data_pane_t1

0xbe13,	// (0x0002122a) list_double_ai3_gene_pane_ParamLimits

0xbe13,	// (0x0002122a) list_double_ai3_gene_pane

0x5217,	// (0x0001a62e) list_single_ai3_gene_pane_ParamLimits

0x5217,	// (0x0001a62e) list_single_ai3_gene_pane

0x3d12,	// (0x00019129) list_highlight_pane_cp7_ParamLimits

0x3d12,	// (0x00019129) list_highlight_pane_cp7

0x5224,	// (0x0001a63b) list_single_a13_gene_pane_t1_ParamLimits

0x5224,	// (0x0001a63b) list_single_a13_gene_pane_t1

0x523b,	// (0x0001a652) list_single_ai3_gene_pane_g1

0x5244,	// (0x0001a65b) list_single_ai3_gene_pane_g2

0x0001,

0xfc9e,	// (0x000250b5) list_single_ai3_gene_pane_g

0x524c,	// (0x0001a663) list_double_ai3_gene_pane_g1_ParamLimits

0x524c,	// (0x0001a663) list_double_ai3_gene_pane_g1

0xbe20,	// (0x00021237) list_double_ai3_gene_pane_t1_ParamLimits

0xbe20,	// (0x00021237) list_double_ai3_gene_pane_t1

0x5274,	// (0x0001a68b) list_double_ai3_gene_pane_t2_ParamLimits

0x5274,	// (0x0001a68b) list_double_ai3_gene_pane_t2

0x5289,	// (0x0001a6a0) list_double_ai3_gene_pane_t3_ParamLimits

0x5289,	// (0x0001a6a0) list_double_ai3_gene_pane_t3

0x0002,

0xfca3,	// (0x000250ba) list_double_ai3_gene_pane_t_ParamLimits

0xfca3,	// (0x000250ba) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5048,	// (0x0001a45f) aid_size_min_col_2

0xbc87,	// (0x0002109e) aid_size_min_msg_ParamLimits

0xbc87,	// (0x0002109e) aid_size_min_msg

0xb86a,	// (0x00020c81) fep_vkb_top_text_pane_g2_ParamLimits

0xb86a,	// (0x00020c81) fep_vkb_top_text_pane_g2

0x0001,

0xfb0a,	// (0x00024f21) fep_vkb_top_text_pane_g_ParamLimits

0xfb0a,	// (0x00024f21) fep_vkb_top_text_pane_g

0xe299,	// (0x000236b0) main_hc_apps_shell_pane

0x52a6,	// (0x0001a6bd) grid_hc_apps_pane_ParamLimits

0x52a6,	// (0x0001a6bd) grid_hc_apps_pane

0x52b8,	// (0x0001a6cf) list_hc_apps_pane

0x52c0,	// (0x0001a6d7) scroll_pane_cp37_ParamLimits

0x52c0,	// (0x0001a6d7) scroll_pane_cp37

0xbe3c,	// (0x00021253) cell_hc_apps_pane_ParamLimits

0xbe3c,	// (0x00021253) cell_hc_apps_pane

0xbefa,	// (0x00021311) cell_hc_apps_pane_g1_ParamLimits

0xbefa,	// (0x00021311) cell_hc_apps_pane_g1

0x53aa,	// (0x0001a7c1) cell_hc_apps_pane_g2_ParamLimits

0x53aa,	// (0x0001a7c1) cell_hc_apps_pane_g2

0x53c6,	// (0x0001a7dd) cell_hc_apps_pane_g3_ParamLimits

0x53c6,	// (0x0001a7dd) cell_hc_apps_pane_g3

0x0002,

0xfcaa,	// (0x000250c1) cell_hc_apps_pane_g_ParamLimits

0xfcaa,	// (0x000250c1) cell_hc_apps_pane_g

0xbf26,	// (0x0002133d) cell_hc_apps_pane_t1_ParamLimits

0xbf26,	// (0x0002133d) cell_hc_apps_pane_t1

0xc3b7,	// (0x000217ce) grid_highlight_pane_cp10_ParamLimits

0xc3b7,	// (0x000217ce) grid_highlight_pane_cp10

0xbf64,	// (0x0002137b) list_single_hc_apps_pane_ParamLimits

0xbf64,	// (0x0002137b) list_single_hc_apps_pane

0xbf94,	// (0x000213ab) list_single_hc_apps_pane_g1

0xbfad,	// (0x000213c4) list_single_hc_apps_pane_g2

0x0001,

0xfcb1,	// (0x000250c8) list_single_hc_apps_pane_g

0xbfc6,	// (0x000213dd) list_single_hc_apps_pane_g2_copy1

0xbfe2,	// (0x000213f9) list_single_hc_apps_pane_t1

0xc273,	// (0x0002168a) bg_set_opt_pane_cp_ParamLimits

0x81b9,	// (0x0001d5d0) setting_slider_pane_t1_ParamLimits

0x81d2,	// (0x0001d5e9) setting_slider_pane_t2_ParamLimits

0x81ec,	// (0x0001d603) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00024950) setting_slider_pane_t_ParamLimits

0x8204,	// (0x0001d61b) slider_set_pane_ParamLimits

0xe7a5,	// (0x00023bbc) control_pane_g5_ParamLimits

0xe7a5,	// (0x00023bbc) control_pane_g5

0xb0f5,	// (0x0002050c) slider_set_pane_g1_ParamLimits

0xeab2,	// (0x00023ec9) slider_set_pane_g2_ParamLimits

0x8cb6,	// (0x0001e0cd) slider_set_pane_g3_ParamLimits

0x8cca,	// (0x0001e0e1) slider_set_pane_g4_ParamLimits

0x8ce2,	// (0x0001e0f9) slider_set_pane_g5_ParamLimits

0x8cb6,	// (0x0001e0cd) slider_set_pane_g6_ParamLimits

0x8cf8,	// (0x0001e10f) slider_set_pane_g7_ParamLimits

0xf91f,	// (0x00024d36) slider_set_pane_g_ParamLimits

0xce70,	// (0x00022287) navi_icon_text_pane_ParamLimits

0xa66c,	// (0x0001fa83) aid_fill_nsta_2_ParamLimits

0xa6a3,	// (0x0001faba) aid_touch_tab_arrow_left_ParamLimits

0xa6b9,	// (0x0001fad0) aid_touch_tab_arrow_right_ParamLimits

0xa754,	// (0x0001fb6b) clock_nsta_pane_ParamLimits

0x213e,	// (0x00017555) navi_icon_pane_g1_ParamLimits

0x214a,	// (0x00017561) navi_text_pane_t1_ParamLimits

0x38a5,	// (0x00018cbc) navi_icon_text_pane_g1_ParamLimits

0x38b1,	// (0x00018cc8) navi_icon_text_pane_t1_ParamLimits

0xbf94,	// (0x000213ab) list_single_hc_apps_pane_g1_ParamLimits

0xbfad,	// (0x000213c4) list_single_hc_apps_pane_g2_ParamLimits

0xfcb1,	// (0x000250c8) list_single_hc_apps_pane_g_ParamLimits

0xbfc6,	// (0x000213dd) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbfe2,	// (0x000213f9) list_single_hc_apps_pane_t1_ParamLimits

0x80e1,	// (0x0001d4f8) popup_toolbar2_fixed_window_ParamLimits

0x80e1,	// (0x0001d4f8) popup_toolbar2_fixed_window

0x8ad6,	// (0x0001deed) popup_toolbar2_float_window

0xc203,	// (0x0002161a) bg_popup_sub_pane_cp27

0x5507,	// (0x0001a91e) grid_toolbar2_float_pane

0xc203,	// (0x0002161a) bg_popup_sub_pane_cp26

0x5507,	// (0x0001a91e) grid_toolbar2_fixed_pane

0xc010,	// (0x00021427) cell_toolbar2_fixed_pane_ParamLimits

0xc010,	// (0x00021427) cell_toolbar2_fixed_pane

0xc02a,	// (0x00021441) cell_toolbar2_fixed_pane_g1

0x1129,	// (0x00016540) toolbar2_fixed_button_pane

0x11d7,	// (0x000165ee) toolbar2_fixed_button_pane_g1

0x11e7,	// (0x000165fe) toolbar2_fixed_button_pane_g2

0x11df,	// (0x000165f6) toolbar2_fixed_button_pane_g3

0x11f7,	// (0x0001660e) toolbar2_fixed_button_pane_g4

0x11ef,	// (0x00016606) toolbar2_fixed_button_pane_g5

0x11ff,	// (0x00016616) toolbar2_fixed_button_pane_g6

0x1207,	// (0x0001661e) toolbar2_fixed_button_pane_g7

0x1217,	// (0x0001662e) toolbar2_fixed_button_pane_g8

0x120f,	// (0x00016626) toolbar2_fixed_button_pane_g9

0x0008,

0xf821,	// (0x00024c38) toolbar2_fixed_button_pane_g

0x5528,	// (0x0001a93f) cell_toolbar2_float_pane_ParamLimits

0x5528,	// (0x0001a93f) cell_toolbar2_float_pane

0x5539,	// (0x0001a950) cell_toolbar2_float_pane_g1

0x1129,	// (0x00016540) toolbar2_fixed_button_pane_cp

0xb752,	// (0x00020b69) fep_vkb_accented_list_pane_ParamLimits

0xb752,	// (0x00020b69) fep_vkb_accented_list_pane

0xed84,	// (0x0002419b) bg_popup_fep_shadow_pane_g9

0xcf9e,	// (0x000223b5) bg_popup_fep_shadow_pane_cp3

0xc834,	// (0x00021c4b) list_accented_list_pane

0x5542,	// (0x0001a959) list_single_accented_list_pane_ParamLimits

0x5542,	// (0x0001a959) list_single_accented_list_pane

0xcf9e,	// (0x000223b5) list_highlight_pane_cp10

0x5553,	// (0x0001a96a) list_single_accented_list_pane_t1

0x8a00,	// (0x0001de17) popup_slider_window_ParamLimits

0x8a00,	// (0x0001de17) popup_slider_window

0x503f,	// (0x0001a456) aid_indentation_list_msg

0xc11b,	// (0x00021532) bg_popup_window_pane_cp19

0x5679,	// (0x0001aa90) popup_slider_window_g1

0x5695,	// (0x0001aaac) popup_slider_window_g2

0x56b1,	// (0x0001aac8) popup_slider_window_g3

0x0005,

0xfcb6,	// (0x000250cd) popup_slider_window_g

0x5717,	// (0x0001ab2e) popup_slider_window_t1

0x578b,	// (0x0001aba2) small_volume_slider_vertical_pane

0x3d4d,	// (0x00019164) small_volume_slider_vertical_pane_g1

0x3d4d,	// (0x00019164) small_volume_slider_vertical_pane_g2

0x57a7,	// (0x0001abbe) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc8,	// (0x000250df) small_volume_slider_vertical_pane_g

0x802f,	// (0x0001d446) area_side_right_pane_ParamLimits

0x802f,	// (0x0001d446) area_side_right_pane

0x8e22,	// (0x0001e239) aid_size_side_button_ParamLimits

0x8e22,	// (0x0001e239) aid_size_side_button

0x8e3b,	// (0x0001e252) grid_sctrl_middle_pane_ParamLimits

0x8e3b,	// (0x0001e252) grid_sctrl_middle_pane

0xef0c,	// (0x00024323) sctrl_sk_bottom_pane

0xef1d,	// (0x00024334) sctrl_sk_top_pane

0xef2f,	// (0x00024346) aid_touch_sctrl_top

0xef3c,	// (0x00024353) bg_sctrl_sk_pane_ParamLimits

0xef3c,	// (0x00024353) bg_sctrl_sk_pane

0xef4a,	// (0x00024361) sctrl_sk_top_pane_g1

0xef57,	// (0x0002436e) sctrl_sk_top_pane_t1

0xef2f,	// (0x00024346) aid_touch_sctrl_bottom

0xef3c,	// (0x00024353) bg_sctrl_sk_pane_cp_ParamLimits

0xef3c,	// (0x00024353) bg_sctrl_sk_pane_cp

0xef72,	// (0x00024389) sctrl_sk_bottom_pane_g1

0xef57,	// (0x0002436e) sctrl_sk_bottom_pane_t1

0x8e55,	// (0x0001e26c) cell_sctrl_middle_pane_ParamLimits

0x8e55,	// (0x0001e26c) cell_sctrl_middle_pane

0x8e66,	// (0x0001e27d) aid_touch_sctrl_middle_ParamLimits

0x8e66,	// (0x0001e27d) aid_touch_sctrl_middle

0x8e73,	// (0x0001e28a) bg_sctrl_middle_pane_ParamLimits

0x8e73,	// (0x0001e28a) bg_sctrl_middle_pane

0xef7b,	// (0x00024392) cell_sctrl_middle_pane_g1_ParamLimits

0xef7b,	// (0x00024392) cell_sctrl_middle_pane_g1

0x8e81,	// (0x0001e298) cell_sctrl_middle_pane_g2_ParamLimits

0x8e81,	// (0x0001e298) cell_sctrl_middle_pane_g2

0x0001,

0xfcd4,	// (0x000250eb) cell_sctrl_middle_pane_g_ParamLimits

0xfcd4,	// (0x000250eb) cell_sctrl_middle_pane_g

0x11d7,	// (0x000165ee) bg_sctrl_middle_pane_g1

0x11df,	// (0x000165f6) bg_sctrl_middle_pane_g2

0x11e7,	// (0x000165fe) bg_sctrl_middle_pane_g3

0x11ef,	// (0x00016606) bg_sctrl_middle_pane_g4

0x11f7,	// (0x0001660e) bg_sctrl_middle_pane_g5

0x11ff,	// (0x00016616) bg_sctrl_middle_pane_g6

0x1207,	// (0x0001661e) bg_sctrl_middle_pane_g7

0x120f,	// (0x00016626) bg_sctrl_middle_pane_g8

0x0007,

0xfcd9,	// (0x000250f0) bg_sctrl_middle_pane_g

0x1217,	// (0x0001662e) bg_sctrl_middle_pane_g8_copy1

0x11d7,	// (0x000165ee) bg_sctrl_sk_pane_g1

0x11e7,	// (0x000165fe) bg_sctrl_sk_pane_g2

0x11df,	// (0x000165f6) bg_sctrl_sk_pane_g3

0x0008,

0xf821,	// (0x00024c38) bg_sctrl_sk_pane_g

0xc585,	// (0x0002199c) aid_size_touch_scroll_bar

0x11f7,	// (0x0001660e) bg_sctrl_sk_pane_g4

0x11ef,	// (0x00016606) bg_sctrl_sk_pane_g5

0x11ff,	// (0x00016616) bg_sctrl_sk_pane_g6

0x1207,	// (0x0001661e) bg_sctrl_sk_pane_g7

0x1217,	// (0x0001662e) bg_sctrl_sk_pane_g8

0x120f,	// (0x00016626) bg_sctrl_sk_pane_g9

0xe7f0,	// (0x00023c07) popup_fep_china_hwr2_fs_candidate_window

0x84c6,	// (0x0001d8dd) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x84c6,	// (0x0001d8dd) popup_fep_china_hwr2_fs_control_window

0xeda4,	// (0x000241bb) sctrl_sk_top_pane_g2

0x0001,

0xfccf,	// (0x000250e6) sctrl_sk_top_pane_g

0xd167,	// (0x0002257e) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd167,	// (0x0002257e) aid_fep_china_hwr2_fs_cell

0xd17b,	// (0x00022592) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd17b,	// (0x00022592) bg_popup_fep_shadow_pane_cp4

0xd192,	// (0x000225a9) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd192,	// (0x000225a9) bg_popup_fep_shadow_pane_cp5

0xd1a4,	// (0x000225bb) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd1a4,	// (0x000225bb) popup_fep_china_hwr2_fs_control_bar_grid

0xd1b8,	// (0x000225cf) popup_fep_china_hwr2_fs_control_funtion_grid

0x5803,	// (0x0001ac1a) aid_fep_china_hwr2_fs_candi_cell

0xc203,	// (0x0002161a) bg_popup_fep_shadow_pane_cp6

0x580d,	// (0x0001ac24) popup_fep_china_hwr2_fs_candidate_grid

0xd1c0,	// (0x000225d7) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd1c0,	// (0x000225d7) cell_fep_china_hwr2_fs_funtion_grid

0x3d4d,	// (0x00019164) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x582f,	// (0x0001ac46) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x582f,	// (0x0001ac46) cell_fep_china_hwr2_fs_funtion_grid_g1

0x583d,	// (0x0001ac54) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x583d,	// (0x0001ac54) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcea,	// (0x00025101) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcea,	// (0x00025101) cell_fep_china_hwr2_fs_funtion_grid_g

0xd1d8,	// (0x000225ef) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd1d8,	// (0x000225ef) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd1ed,	// (0x00022604) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd1ed,	// (0x00022604) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcef,	// (0x00025106) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcef,	// (0x00025106) cell_fep_china_hwr2_fs_funtion_grid_t

0x5884,	// (0x0001ac9b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x588c,	// (0x0001aca3) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5894,	// (0x0001acab) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf4,	// (0x0002510b) popup_fep_china_hwr2_fs_control_bar_grid_g

0x589c,	// (0x0001acb3) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x589c,	// (0x0001acb3) cell_fep_china_hwr2_fs_candidate_grid

0x58b5,	// (0x0001accc) popup_fep_china_hwr2_fs_candidate_grid_g20

0x58bd,	// (0x0001acd4) popup_fep_china_hwr2_fs_candidate_grid_g21

0x3d4d,	// (0x00019164) cell_fep_china_hwr2_fs_candidate_grid_g1

0x3d4d,	// (0x00019164) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb0f,	// (0x00024f26) cell_fep_china_hwr2_fs_candidate_grid_g

0x58c5,	// (0x0001acdc) cell_fep_china_hwr2_fs_candidate_grid_t1

0x0da2,	// (0x000161b9) clock_nsta_pane_cp_24_ParamLimits

0x0da2,	// (0x000161b9) clock_nsta_pane_cp_24

0x0e20,	// (0x00016237) indicator_nsta_pane_cp_24_ParamLimits

0x0e20,	// (0x00016237) indicator_nsta_pane_cp_24

0x1fba,	// (0x000173d1) heading_pane_g1

0x0001,

0xf886,	// (0x00024c9d) heading_pane_g

0x2aef,	// (0x00017f06) grid_sct_catagory_button_pane

0x2b1f,	// (0x00017f36) scroll_pane_cp5_ParamLimits

0x38f3,	// (0x00018d0a) button_value_adjust_pane_cp5_ParamLimits

0x38f3,	// (0x00018d0a) button_value_adjust_pane_cp5

0x39ed,	// (0x00018e04) form2_midp_time_pane_ParamLimits

0x58d3,	// (0x0001acea) cell_sct_catagory_button_pane_ParamLimits

0x58d3,	// (0x0001acea) cell_sct_catagory_button_pane

0x3d12,	// (0x00019129) bg_button_pane_cp01_ParamLimits

0x3d12,	// (0x00019129) bg_button_pane_cp01

0x3d4d,	// (0x00019164) cell_sct_catagory_button_pane_g1

0x8a79,	// (0x0001de90) popup_tb_extension_window

0xd209,	// (0x00022620) aid_size_cell_ext_ParamLimits

0xd209,	// (0x00022620) aid_size_cell_ext

0xc537,	// (0x0002194e) bg_tb_trans_pane_cp1_ParamLimits

0xc537,	// (0x0002194e) bg_tb_trans_pane_cp1

0xd22f,	// (0x00022646) grid_tb_ext_pane_ParamLimits

0xd22f,	// (0x00022646) grid_tb_ext_pane

0xd26e,	// (0x00022685) cell_tb_ext_pane_ParamLimits

0xd26e,	// (0x00022685) cell_tb_ext_pane

0xd296,	// (0x000226ad) cell_tb_ext_pane_g1_ParamLimits

0xd296,	// (0x000226ad) cell_tb_ext_pane_g1

0x5969,	// (0x0001ad80) cell_tb_ext_pane_t1

0xc3b7,	// (0x000217ce) list_highlight_pane_cp11_ParamLimits

0xc3b7,	// (0x000217ce) list_highlight_pane_cp11

0x80f6,	// (0x0001d50d) popup_uni_indicator_window_ParamLimits

0x80f6,	// (0x0001d50d) popup_uni_indicator_window

0xc6ad,	// (0x00021ac4) bg_popup_sub_pane_cp14

0xd2b3,	// (0x000226ca) list_uniindi_pane

0xd2bf,	// (0x000226d6) uniindi_top_pane

0xc3b7,	// (0x000217ce) bg_uniindi_top_pane

0xd2de,	// (0x000226f5) uniindi_top_pane_g1

0xd2f4,	// (0x0002270b) uniindi_top_pane_g2

0x0003,

0xfcfb,	// (0x00025112) uniindi_top_pane_g

0xd311,	// (0x00022728) uniindi_top_pane_t1

0x5a1a,	// (0x0001ae31) list_single_uniindi_pane_ParamLimits

0x5a1a,	// (0x0001ae31) list_single_uniindi_pane

0x3d4d,	// (0x00019164) bg_uniindi_top_pane_g1

0x5a2d,	// (0x0001ae44) list_single_uniindi_pane_g1

0x5a40,	// (0x0001ae57) list_single_uniindi_pane_t1

0xe299,	// (0x000236b0) control_bg_pane

0x5a65,	// (0x0001ae7c) bg_sctrl_sk_pane_cp1

0x5a6e,	// (0x0001ae85) bg_sctrl_sk_pane_cp2

0x5a77,	// (0x0001ae8e) control_bg_pane_g1

0x5a80,	// (0x0001ae97) control_bg_pane_g2

0x0001,

0xfd04,	// (0x0002511b) control_bg_pane_g

0x3739,	// (0x00018b50) cell_indicator_nsta_pane_g1_ParamLimits

0xb500,	// (0x00020917) cell_indicator_nsta_pane_g2_ParamLimits

0xfa73,	// (0x00024e8a) cell_indicator_nsta_pane_g_ParamLimits

0x3a75,	// (0x00018e8c) form2_midp_time_pane_t1_ParamLimits

0xe7e2,	// (0x00023bf9) main_idle_act4_pane_ParamLimits

0xe7e2,	// (0x00023bf9) main_idle_act4_pane

0x8a79,	// (0x0001de90) popup_tb_extension_window_ParamLimits

0xd254,	// (0x0002266b) tb_ext_find_pane_ParamLimits

0xd254,	// (0x0002266b) tb_ext_find_pane

0x5a89,	// (0x0001aea0) ai_gene_pane_1_cp1

0xd01f,	// (0x00022436) ai_gene_pane_2_cp1

0xd33b,	// (0x00022752) list_single_idle_plugin_calendar_pane

0x5a9a,	// (0x0001aeb1) list_single_idle_plugin_notification_pane

0x5aa3,	// (0x0001aeba) list_single_idle_plugin_player_pane

0xd344,	// (0x0002275b) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd344,	// (0x0002275b) list_single_idle_plugin_shortcut_pane

0xd36c,	// (0x00022783) main_idle_act4_pane_t1

0xd383,	// (0x0002279a) main_idle_act4_pane_t2

0x0001,

0xfd09,	// (0x00025120) main_idle_act4_pane_t

0xd39a,	// (0x000227b1) middle_sk_idle_act4_pane_ParamLimits

0xd39a,	// (0x000227b1) middle_sk_idle_act4_pane

0xd3b6,	// (0x000227cd) popup_clock_digital_analogue_window_cp2

0xd3e2,	// (0x000227f9) shortcut_wheel_idle_act4_pane_ParamLimits

0xd3e2,	// (0x000227f9) shortcut_wheel_idle_act4_pane

0x3d4d,	// (0x00019164) shortcut_wheel_idle_act4_pane_g1

0x3d4d,	// (0x00019164) shortcut_wheel_idle_act4_pane_g2

0x3d4d,	// (0x00019164) shortcut_wheel_idle_act4_pane_g3

0x3d4d,	// (0x00019164) shortcut_wheel_idle_act4_pane_g4

0x3d4d,	// (0x00019164) shortcut_wheel_idle_act4_pane_g5

0x5b36,	// (0x0001af4d) shortcut_wheel_idle_act4_pane_g6

0x5b3e,	// (0x0001af55) shortcut_wheel_idle_act4_pane_g7

0x5b46,	// (0x0001af5d) shortcut_wheel_idle_act4_pane_g8

0x5b4e,	// (0x0001af65) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd0e,	// (0x00025125) shortcut_wheel_idle_act4_pane_g

0xc1d3,	// (0x000215ea) middle_sk_idle_act4_pane_g1_ParamLimits

0xc1d3,	// (0x000215ea) middle_sk_idle_act4_pane_g1

0xd45f,	// (0x00022876) middle_sk_idle_act4_pane_g2_ParamLimits

0xd45f,	// (0x00022876) middle_sk_idle_act4_pane_g2

0x0001,

0xfd31,	// (0x00025148) middle_sk_idle_act4_pane_g_ParamLimits

0xfd31,	// (0x00025148) middle_sk_idle_act4_pane_g

0xd477,	// (0x0002288e) middle_sk_idle_act4_pane_t1_ParamLimits

0xd477,	// (0x0002288e) middle_sk_idle_act4_pane_t1

0xd4a6,	// (0x000228bd) grid_ai_shortcut_pane_ParamLimits

0xd4a6,	// (0x000228bd) grid_ai_shortcut_pane

0xd4c3,	// (0x000228da) list_highlight_pane_cp16_ParamLimits

0xd4c3,	// (0x000228da) list_highlight_pane_cp16

0xd4d0,	// (0x000228e7) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd4d0,	// (0x000228e7) list_single_idle_plugin_shortcut_pane_g1

0xd4dc,	// (0x000228f3) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd4dc,	// (0x000228f3) list_single_idle_plugin_shortcut_pane_g2

0xd4f8,	// (0x0002290f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd4f8,	// (0x0002290f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd36,	// (0x0002514d) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd36,	// (0x0002514d) list_single_idle_plugin_shortcut_pane_g

0xd50d,	// (0x00022924) cell_ai_shortcut_pane_ParamLimits

0xd50d,	// (0x00022924) cell_ai_shortcut_pane

0xd523,	// (0x0002293a) cell_ai_shortcut_pane_g1_ParamLimits

0xd523,	// (0x0002293a) cell_ai_shortcut_pane_g1

0x5a89,	// (0x0001aea0) ai_gene_pane_1_cp2

0x5c7e,	// (0x0001b095) ai_gene_pane_2_cp2

0x5c86,	// (0x0001b09d) list_highlight_pane_cp15

0xd545,	// (0x0002295c) list_single_idle_plugin_calendar_pane_g1

0x5c86,	// (0x0001b09d) list_highlight_pane_cp17

0x5c97,	// (0x0001b0ae) list_single_idle_plugin_calendar_pane_g1_copy1

0x5c9f,	// (0x0001b0b6) list_single_idle_plugin_player_pane_g1

0x2d48,	// (0x0001815f) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd3d,	// (0x00025154) list_single_idle_plugin_player_pane_g

0x5ca7,	// (0x0001b0be) list_single_idle_plugin_player_pane_t1

0x5cb5,	// (0x0001b0cc) list_single_idle_plugin_player_pane_t2

0x5cc3,	// (0x0001b0da) list_single_idle_plugin_player_pane_t3

0x5cd1,	// (0x0001b0e8) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd42,	// (0x00025159) list_single_idle_plugin_player_pane_t

0x5cdf,	// (0x0001b0f6) wait_bar_pane_cp15

0x5ce7,	// (0x0001b0fe) grid_ai_notification_pane

0x2d48,	// (0x0001815f) list_single_idle_plugin_notification_pane_g1

0xd54d,	// (0x00022964) cell_ai_notification_pane_ParamLimits

0xd54d,	// (0x00022964) cell_ai_notification_pane

0x5cfd,	// (0x0001b114) cell_ai_notification_pane_g1

0x5d05,	// (0x0001b11c) cell_ai_notification_pane_t1

0xd55a,	// (0x00022971) tb_ext_find_button_pane

0xd562,	// (0x00022979) tb_ext_find_pane_g1

0xd56a,	// (0x00022981) tb_ext_find_pane_t1

0xcb6d,	// (0x00021f84) tb_ext_find_button_pane_g1

0xd578,	// (0x0002298f) tb_ext_find_button_pane_g2

0x0001,

0xfd4b,	// (0x00025162) tb_ext_find_button_pane_g

0xd36c,	// (0x00022783) main_idle_act4_pane_t1_ParamLimits

0xd383,	// (0x0002279a) main_idle_act4_pane_t2_ParamLimits

0xfd09,	// (0x00025120) main_idle_act4_pane_t_ParamLimits

0xd3b6,	// (0x000227cd) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd3ce,	// (0x000227e5) sat_plugin_idle_act4_pane_ParamLimits

0xd3ce,	// (0x000227e5) sat_plugin_idle_act4_pane

0xd581,	// (0x00022998) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd581,	// (0x00022998) sat_plugin_idle_act4_pane_t1

0xd599,	// (0x000229b0) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd599,	// (0x000229b0) sat_plugin_idle_act4_pane_t2

0xd5b1,	// (0x000229c8) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd5b1,	// (0x000229c8) sat_plugin_idle_act4_pane_t3

0xd5c9,	// (0x000229e0) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd5c9,	// (0x000229e0) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd50,	// (0x00025167) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd50,	// (0x00025167) sat_plugin_idle_act4_pane_t

0x8071,	// (0x0001d488) popup_battery_window_ParamLimits

0x8071,	// (0x0001d488) popup_battery_window

0xc3b7,	// (0x000217ce) bg_popup_sub_pane_cp25_ParamLimits

0xc3b7,	// (0x000217ce) bg_popup_sub_pane_cp25

0x5d86,	// (0x0001b19d) popup_battery_window_g1_ParamLimits

0x5d86,	// (0x0001b19d) popup_battery_window_g1

0x5d92,	// (0x0001b1a9) popup_battery_window_t1_ParamLimits

0x5d92,	// (0x0001b1a9) popup_battery_window_t1

0x5da4,	// (0x0001b1bb) popup_battery_window_t2_ParamLimits

0x5da4,	// (0x0001b1bb) popup_battery_window_t2

0x0001,

0xfd59,	// (0x00025170) popup_battery_window_t_ParamLimits

0xfd59,	// (0x00025170) popup_battery_window_t

0xa4a6,	// (0x0001f8bd) midp_canvas_pane_ParamLimits

0xa518,	// (0x0001f92f) midp_keypad_pane_ParamLimits

0xa518,	// (0x0001f92f) midp_keypad_pane

0xc85d,	// (0x00021c74) main_midp_pane_ParamLimits

0xb50d,	// (0x00020924) signal_pane_g2_cp_ParamLimits

0xd5e1,	// (0x000229f8) aid_size_cell_midp_keypad_ParamLimits

0xd5e1,	// (0x000229f8) aid_size_cell_midp_keypad

0xd5ff,	// (0x00022a16) midp_keyp_game_grid_pane_ParamLimits

0xd5ff,	// (0x00022a16) midp_keyp_game_grid_pane

0xd626,	// (0x00022a3d) midp_keyp_rocker_pane_ParamLimits

0xd626,	// (0x00022a3d) midp_keyp_rocker_pane

0xd677,	// (0x00022a8e) midp_keyp_sk_left_pane_ParamLimits

0xd677,	// (0x00022a8e) midp_keyp_sk_left_pane

0xd6cb,	// (0x00022ae2) midp_keyp_sk_right_pane_ParamLimits

0xd6cb,	// (0x00022ae2) midp_keyp_sk_right_pane

0xc203,	// (0x0002161a) bg_button_pane_cp03

0xd71f,	// (0x00022b36) midp_keyp_sk_left_pane_g1

0xc203,	// (0x0002161a) bg_button_pane_cp04

0xd71f,	// (0x00022b36) midp_keyp_sk_right_pane_g1

0x3d4d,	// (0x00019164) midp_keyp_rocker_pane_g1

0xd728,	// (0x00022b3f) keyp_game_cell_pane_ParamLimits

0xd728,	// (0x00022b3f) keyp_game_cell_pane

0xc203,	// (0x0002161a) bg_button_pane_cp02

0xd74c,	// (0x00022b63) keyp_game_cell_pane_g1

0x8091,	// (0x0001d4a8) popup_fep_vkb2_window_ParamLimits

0x8091,	// (0x0001d4a8) popup_fep_vkb2_window

0x8e8d,	// (0x0001e2a4) aid_size_cell_vkb2_ParamLimits

0x8e8d,	// (0x0001e2a4) aid_size_cell_vkb2

0x8ecb,	// (0x0001e2e2) popup_fep_vkb2_window_g1_ParamLimits

0x8ecb,	// (0x0001e2e2) popup_fep_vkb2_window_g1

0x8f1b,	// (0x0001e332) vkb2_area_bottom_pane_ParamLimits

0x8f1b,	// (0x0001e332) vkb2_area_bottom_pane

0x8f6f,	// (0x0001e386) vkb2_area_keypad_pane_ParamLimits

0x8f6f,	// (0x0001e386) vkb2_area_keypad_pane

0x8fb7,	// (0x0001e3ce) vkb2_area_top_pane_ParamLimits

0x8fb7,	// (0x0001e3ce) vkb2_area_top_pane

0x903d,	// (0x0001e454) vkb2_top_entry_pane_ParamLimits

0x903d,	// (0x0001e454) vkb2_top_entry_pane

0x906a,	// (0x0001e481) vkb2_top_grid_left_pane_ParamLimits

0x906a,	// (0x0001e481) vkb2_top_grid_left_pane

0x908a,	// (0x0001e4a1) vkb2_top_grid_right_pane_ParamLimits

0x908a,	// (0x0001e4a1) vkb2_top_grid_right_pane

0xefb1,	// (0x000243c8) vkb2_cell_keypad_pane_ParamLimits

0xefb1,	// (0x000243c8) vkb2_cell_keypad_pane

0x90d0,	// (0x0001e4e7) vkb2_area_bottom_grid_pane_ParamLimits

0x90d0,	// (0x0001e4e7) vkb2_area_bottom_grid_pane

0x90fa,	// (0x0001e511) vkb2_area_bottom_pane_g1_ParamLimits

0x90fa,	// (0x0001e511) vkb2_area_bottom_pane_g1

0x9120,	// (0x0001e537) vkb2_area_bottom_pane_g2_ParamLimits

0x9120,	// (0x0001e537) vkb2_area_bottom_pane_g2

0x9151,	// (0x0001e568) vkb2_area_bottom_pane_g3_ParamLimits

0x9151,	// (0x0001e568) vkb2_area_bottom_pane_g3

0x0002,

0xfd5e,	// (0x00025175) vkb2_area_bottom_pane_g_ParamLimits

0xfd5e,	// (0x00025175) vkb2_area_bottom_pane_g

0xf05e,	// (0x00024475) vkb2_top_cell_left_pane_ParamLimits

0xf05e,	// (0x00024475) vkb2_top_cell_left_pane

0xd755,	// (0x00022b6c) vkb2_top_entry_pane_g1_ParamLimits

0xd755,	// (0x00022b6c) vkb2_top_entry_pane_g1

0xd763,	// (0x00022b7a) vkb2_top_entry_pane_t1_ParamLimits

0xd763,	// (0x00022b7a) vkb2_top_entry_pane_t1

0x5f55,	// (0x0001b36c) vkb2_top_entry_pane_t2_ParamLimits

0x5f55,	// (0x0001b36c) vkb2_top_entry_pane_t2

0x5f87,	// (0x0001b39e) vkb2_top_entry_pane_t3_ParamLimits

0x5f87,	// (0x0001b39e) vkb2_top_entry_pane_t3

0x0002,

0xfd65,	// (0x0002517c) vkb2_top_entry_pane_t_ParamLimits

0xfd65,	// (0x0002517c) vkb2_top_entry_pane_t

0x91bb,	// (0x0001e5d2) vkb2_top_grid_right_pane_g1_ParamLimits

0x91bb,	// (0x0001e5d2) vkb2_top_grid_right_pane_g1

0xf0ab,	// (0x000244c2) vkb2_top_grid_right_pane_g2_ParamLimits

0xf0ab,	// (0x000244c2) vkb2_top_grid_right_pane_g2

0xf0c3,	// (0x000244da) vkb2_top_grid_right_pane_g3_ParamLimits

0xf0c3,	// (0x000244da) vkb2_top_grid_right_pane_g3

0x91d1,	// (0x0001e5e8) vkb2_top_grid_right_pane_g4_ParamLimits

0x91d1,	// (0x0001e5e8) vkb2_top_grid_right_pane_g4

0x0003,

0xfd6c,	// (0x00025183) vkb2_top_grid_right_pane_g_ParamLimits

0xfd6c,	// (0x00025183) vkb2_top_grid_right_pane_g

0xf0db,	// (0x000244f2) vkb2_top_cell_left_pane_g1

0xf0f2,	// (0x00024509) vkb2_cell_keypad_pane_g1_ParamLimits

0xf0f2,	// (0x00024509) vkb2_cell_keypad_pane_g1

0x5fcc,	// (0x0001b3e3) vkb2_cell_keypad_pane_t1_ParamLimits

0x5fcc,	// (0x0001b3e3) vkb2_cell_keypad_pane_t1

0xf100,	// (0x00024517) vkb2_cell_bottom_grid_pane_ParamLimits

0xf100,	// (0x00024517) vkb2_cell_bottom_grid_pane

0xf139,	// (0x00024550) vkb2_cell_bottom_grid_pane_g1

0xd403,	// (0x0002281a) aid_call2_pane_cp02

0xd40b,	// (0x00022822) aid_call_pane_cp02

0xd413,	// (0x0002282a) clock_digital_number_pane_cp10

0xd41b,	// (0x00022832) clock_digital_number_pane_cp11

0xd423,	// (0x0002283a) clock_digital_number_pane_cp12

0xd42b,	// (0x00022842) clock_digital_number_pane_cp13

0xd433,	// (0x0002284a) clock_digital_separator_pane_cp10

0xcb6d,	// (0x00021f84) popup_clock_digital_analogue_window_cp2_g1

0xcb6d,	// (0x00021f84) popup_clock_digital_analogue_window_cp2_g2

0xd43b,	// (0x00022852) popup_clock_digital_analogue_window_cp2_g3

0xcb6d,	// (0x00021f84) popup_clock_digital_analogue_window_cp2_g4

0xd43b,	// (0x00022852) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd21,	// (0x00025138) popup_clock_digital_analogue_window_cp2_g

0xd443,	// (0x0002285a) popup_clock_digital_analogue_window_cp2_t1

0xd451,	// (0x00022868) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd2c,	// (0x00025143) popup_clock_digital_analogue_window_cp2_t

0x3d4d,	// (0x00019164) clock_digital_number_pane_cp10_g1

0x3d4d,	// (0x00019164) clock_digital_number_pane_cp10_g2

0x0001,

0xfb0f,	// (0x00024f26) clock_digital_number_pane_cp10_g

0x3d4d,	// (0x00019164) clock_digital_separator_pane_cp10_g1

0x3d4d,	// (0x00019164) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb0f,	// (0x00024f26) clock_digital_separator_pane_cp10_g

0xd300,	// (0x00022717) uniindi_top_pane_g3

0x59e3,	// (0x0001adfa) uniindi_top_pane_g4

0xf03c,	// (0x00024453) vkb2_row_keypad_pane_ParamLimits

0xf03c,	// (0x00024453) vkb2_row_keypad_pane

0xf155,	// (0x0002456c) vkb2_cell_t_keypad_pane_ParamLimits

0xf155,	// (0x0002456c) vkb2_cell_t_keypad_pane

0xf165,	// (0x0002457c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xf165,	// (0x0002457c) vkb2_cell_t_keypad_pane_cp08

0xf178,	// (0x0002458f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xf178,	// (0x0002458f) vkb2_cell_t_keypad_pane_cp09

0xf18c,	// (0x000245a3) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xf18c,	// (0x000245a3) vkb2_cell_t_keypad_pane_cp01

0xf19d,	// (0x000245b4) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xf19d,	// (0x000245b4) vkb2_cell_t_keypad_pane_cp02

0xf1ae,	// (0x000245c5) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xf1ae,	// (0x000245c5) vkb2_cell_t_keypad_pane_cp03

0xf1bf,	// (0x000245d6) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xf1bf,	// (0x000245d6) vkb2_cell_t_keypad_pane_cp04

0xf1d0,	// (0x000245e7) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xf1d0,	// (0x000245e7) vkb2_cell_t_keypad_pane_cp05

0xf1e1,	// (0x000245f8) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xf1e1,	// (0x000245f8) vkb2_cell_t_keypad_pane_cp06

0xf1f2,	// (0x00024609) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xf1f2,	// (0x00024609) vkb2_cell_t_keypad_pane_cp07

0xf203,	// (0x0002461a) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xf203,	// (0x0002461a) vkb2_cell_t_keypad_pane_cp10

0xeda4,	// (0x000241bb) vkb2_cell_t_keypad_pane_g1

0x5fe3,	// (0x0001b3fa) vkb2_cell_t_keypad_pane_t1

0xe299,	// (0x000236b0) popup_grid_graphic2_window

0xd79c,	// (0x00022bb3) aid_size_cell_graphic2_ParamLimits

0xd79c,	// (0x00022bb3) aid_size_cell_graphic2

0xd7da,	// (0x00022bf1) bg_popup_window_pane_cp21_ParamLimits

0xd7da,	// (0x00022bf1) bg_popup_window_pane_cp21

0xd7e8,	// (0x00022bff) graphic2_pages_pane_ParamLimits

0xd7e8,	// (0x00022bff) graphic2_pages_pane

0xd83e,	// (0x00022c55) grid_graphic2_control_pane_ParamLimits

0xd83e,	// (0x00022c55) grid_graphic2_control_pane

0xd886,	// (0x00022c9d) grid_graphic2_pane_ParamLimits

0xd886,	// (0x00022c9d) grid_graphic2_pane

0xd90d,	// (0x00022d24) cell_graphic2_pane

0xe299,	// (0x000236b0) main_comp_mode_pane

0x51e0,	// (0x0001a5f7) list_ai3_gene_pane_ParamLimits

0xc11b,	// (0x00021532) bg_popup_window_pane_cp19_ParamLimits

0x561d,	// (0x0001aa34) bg_touch_area_indi_pane_ParamLimits

0x561d,	// (0x0001aa34) bg_touch_area_indi_pane

0x5633,	// (0x0001aa4a) bg_touch_area_indi_pane_cp01_ParamLimits

0x5633,	// (0x0001aa4a) bg_touch_area_indi_pane_cp01

0x5649,	// (0x0001aa60) bg_touch_area_indi_pane_cp02_ParamLimits

0x5649,	// (0x0001aa60) bg_touch_area_indi_pane_cp02

0x565f,	// (0x0001aa76) bg_touch_area_indi_pane_cp03_ParamLimits

0x565f,	// (0x0001aa76) bg_touch_area_indi_pane_cp03

0x5679,	// (0x0001aa90) popup_slider_window_g1_ParamLimits

0x5695,	// (0x0001aaac) popup_slider_window_g2_ParamLimits

0x56b1,	// (0x0001aac8) popup_slider_window_g3_ParamLimits

0xfcb6,	// (0x000250cd) popup_slider_window_g_ParamLimits

0x5717,	// (0x0001ab2e) popup_slider_window_t1_ParamLimits

0x578b,	// (0x0001aba2) small_volume_slider_vertical_pane_ParamLimits

0xd90d,	// (0x00022d24) cell_graphic2_pane_ParamLimits

0xd968,	// (0x00022d7f) bg_button_pane_cp10_ParamLimits

0xd968,	// (0x00022d7f) bg_button_pane_cp10

0xd97b,	// (0x00022d92) bg_button_pane_cp11_ParamLimits

0xd97b,	// (0x00022d92) bg_button_pane_cp11

0xd98e,	// (0x00022da5) graphic2_pages_pane_g1_ParamLimits

0xd98e,	// (0x00022da5) graphic2_pages_pane_g1

0xd9a9,	// (0x00022dc0) graphic2_pages_pane_g2_ParamLimits

0xd9a9,	// (0x00022dc0) graphic2_pages_pane_g2

0x0001,

0xfd7a,	// (0x00025191) graphic2_pages_pane_g_ParamLimits

0xfd7a,	// (0x00025191) graphic2_pages_pane_g

0xd9c1,	// (0x00022dd8) graphic2_pages_pane_t1_ParamLimits

0xd9c1,	// (0x00022dd8) graphic2_pages_pane_t1

0xd9d9,	// (0x00022df0) cell_graphic2_control_pane_ParamLimits

0xd9d9,	// (0x00022df0) cell_graphic2_control_pane

0xda0b,	// (0x00022e22) cell_graphic2_pane_g1_ParamLimits

0xda0b,	// (0x00022e22) cell_graphic2_pane_g1

0xc1e1,	// (0x000215f8) cell_graphic2_pane_g2_ParamLimits

0xc1e1,	// (0x000215f8) cell_graphic2_pane_g2

0xd142,	// (0x00022559) cell_graphic2_pane_g3_ParamLimits

0xd142,	// (0x00022559) cell_graphic2_pane_g3

0xc1ee,	// (0x00021605) cell_graphic2_pane_g4_ParamLimits

0xc1ee,	// (0x00021605) cell_graphic2_pane_g4

0xda18,	// (0x00022e2f) cell_graphic2_pane_g5_ParamLimits

0xda18,	// (0x00022e2f) cell_graphic2_pane_g5

0x0004,

0xfd7f,	// (0x00025196) cell_graphic2_pane_g_ParamLimits

0xfd7f,	// (0x00025196) cell_graphic2_pane_g

0xda35,	// (0x00022e4c) cell_graphic2_pane_t1_ParamLimits

0xda35,	// (0x00022e4c) cell_graphic2_pane_t1

0x1fae,	// (0x000173c5) grid_highlight_pane_cp11_ParamLimits

0x1fae,	// (0x000173c5) grid_highlight_pane_cp11

0xc3b7,	// (0x000217ce) bg_button_pane_cp05

0xda7f,	// (0x00022e96) cell_graphic2_control_pane_g1

0x3d4d,	// (0x00019164) bg_touch_area_indi_pane_g1

0x62bc,	// (0x0001b6d3) aid_cmod_rocker_key_size

0x62c6,	// (0x0001b6dd) aid_cmode_itu_key_size

0x62d0,	// (0x0001b6e7) main_cmode_video_pane

0x62da,	// (0x0001b6f1) main_comp_mode_itu_pane

0x62e6,	// (0x0001b6fd) main_comp_mode_rocker_pane

0x62f2,	// (0x0001b709) cell_cmode_rocker_pane_ParamLimits

0x62f2,	// (0x0001b709) cell_cmode_rocker_pane

0x6304,	// (0x0001b71b) cell_cmode_itu_pane_ParamLimits

0x6304,	// (0x0001b71b) cell_cmode_itu_pane

0xc6ad,	// (0x00021ac4) bg_button_pane_cp06_ParamLimits

0xc6ad,	// (0x00021ac4) bg_button_pane_cp06

0x3fbd,	// (0x000193d4) cell_cmode_rocker_pane_g1_ParamLimits

0x3fbd,	// (0x000193d4) cell_cmode_rocker_pane_g1

0x582f,	// (0x0001ac46) cell_cmode_rocker_pane_g2_ParamLimits

0x582f,	// (0x0001ac46) cell_cmode_rocker_pane_g2

0x0001,

0xfd8f,	// (0x000251a6) cell_cmode_rocker_pane_g_ParamLimits

0xfd8f,	// (0x000251a6) cell_cmode_rocker_pane_g

0xc203,	// (0x0002161a) bg_button_pane_cp07

0x6319,	// (0x0001b730) cell_cmode_itu_pane_g1

0x6322,	// (0x0001b739) cell_cmode_itu_pane_t1

0x6330,	// (0x0001b747) cell_cmode_itu_pane_t2

0x0001,

0xfd94,	// (0x000251ab) cell_cmode_itu_pane_t

0x5a55,	// (0x0001ae6c) aid_touch_ctrl_left

0x5a5d,	// (0x0001ae74) aid_touch_ctrl_right

0xc203,	// (0x0002161a) compa_mode_pane

0xdaa5,	// (0x00022ebc) aid_cmod_rocker_key_size_cp

0xdaaf,	// (0x00022ec6) aid_cmode_itu_key_size_cp

0x6352,	// (0x0001b769) compa_mode_pane_g1

0x635a,	// (0x0001b771) compa_mode_pane_g2

0x6362,	// (0x0001b779) compa_mode_pane_g3

0x0002,

0xfd99,	// (0x000251b0) compa_mode_pane_g

0xdab9,	// (0x00022ed0) main_comp_mode_itu_pane_cp

0xdac1,	// (0x00022ed8) main_comp_mode_rocker_pane_cp

0xdac9,	// (0x00022ee0) cell_cmode_itu_pane_cp_ParamLimits

0xdac9,	// (0x00022ee0) cell_cmode_itu_pane_cp

0xdade,	// (0x00022ef5) cell_cmode_rocker_pane_cp_ParamLimits

0xdade,	// (0x00022ef5) cell_cmode_rocker_pane_cp

0xc6ad,	// (0x00021ac4) bg_button_pane_cp06_cp_ParamLimits

0xc6ad,	// (0x00021ac4) bg_button_pane_cp06_cp

0x3fbd,	// (0x000193d4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x3fbd,	// (0x000193d4) cell_cmode_rocker_pane_g1_cp

0x3d4d,	// (0x00019164) cell_cmode_rocker_pane_g2_cp

0xc203,	// (0x0002161a) bg_button_pane_cp07_cp

0xdaf0,	// (0x00022f07) cell_cmode_itu_pane_g1_cp

0xdaf9,	// (0x00022f10) cell_cmode_itu_pane_t1_cp

0xdaf9,	// (0x00022f10) cell_cmode_itu_pane_t2_cp

0xb269,	// (0x00020680) settings_code_pane_cp2

0xc273,	// (0x0002168a) bg_popup_window_pane_cp3_ParamLimits

0xc4d0,	// (0x000218e7) heading_pane_cp3_ParamLimits

0xc4df,	// (0x000218f6) listscroll_popup_graphic_pane_ParamLimits

0xebc4,	// (0x00023fdb) fep_hwr_aid_pane_ParamLimits

0xef2f,	// (0x00024346) aid_touch_sctrl_top_ParamLimits

0xef4a,	// (0x00024361) sctrl_sk_top_pane_g1_ParamLimits

0xeda4,	// (0x000241bb) sctrl_sk_top_pane_g2_ParamLimits

0xfccf,	// (0x000250e6) sctrl_sk_top_pane_g_ParamLimits

0xef57,	// (0x0002436e) sctrl_sk_top_pane_t1_ParamLimits

0xef2f,	// (0x00024346) aid_touch_sctrl_bottom_ParamLimits

0xef57,	// (0x0002436e) sctrl_sk_bottom_pane_t1_ParamLimits

0xd2cc,	// (0x000226e3) aid_area_touch_clock

0x8fff,	// (0x0001e416) aid_vkb2_area_top_pane_cell_ParamLimits

0x8fff,	// (0x0001e416) aid_vkb2_area_top_pane_cell

0x90aa,	// (0x0001e4c1) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x90aa,	// (0x0001e4c1) aid_vkb2_area_bottom_pane_cell

0x5f0d,	// (0x0001b324) popup_char_count_window

0x63b8,	// (0x0001b7cf) popup_char_count_window_g1

0x63c1,	// (0x0001b7d8) popup_char_count_window_g2

0x63ca,	// (0x0001b7e1) popup_char_count_window_g3

0x0002,

0xfda0,	// (0x000251b7) popup_char_count_window_g

0x63d3,	// (0x0001b7ea) popup_char_count_window_t1

0xef97,	// (0x000243ae) popup_fep_char_preview_window_ParamLimits

0xef97,	// (0x000243ae) popup_fep_char_preview_window

0x901f,	// (0x0001e436) vkb2_top_candi_pane_ParamLimits

0x901f,	// (0x0001e436) vkb2_top_candi_pane

0xdb07,	// (0x00022f1e) cell_vkb2_top_candi_pane_ParamLimits

0xdb07,	// (0x00022f1e) cell_vkb2_top_candi_pane

0xf218,	// (0x0002462f) bg_popup_fep_char_preview_window_ParamLimits

0xf218,	// (0x0002462f) bg_popup_fep_char_preview_window

0xf226,	// (0x0002463d) popup_fep_char_preview_window_t1_ParamLimits

0xf226,	// (0x0002463d) popup_fep_char_preview_window_t1

0x642e,	// (0x0001b845) bg_popup_fep_char_preview_window_g1

0x6436,	// (0x0001b84d) bg_popup_fep_char_preview_window_g2

0x643e,	// (0x0001b855) bg_popup_fep_char_preview_window_g3

0x6446,	// (0x0001b85d) bg_popup_fep_char_preview_window_g4

0x644e,	// (0x0001b865) bg_popup_fep_char_preview_window_g5

0x6456,	// (0x0001b86d) bg_popup_fep_char_preview_window_g6

0x645e,	// (0x0001b875) bg_popup_fep_char_preview_window_g7

0x6466,	// (0x0001b87d) bg_popup_fep_char_preview_window_g8

0x646e,	// (0x0001b885) bg_popup_fep_char_preview_window_g9

0x0009,

0xfda7,	// (0x000251be) bg_popup_fep_char_preview_window_g

0xeda4,	// (0x000241bb) cell_vkb2_top_candi_pane_g1_ParamLimits

0xeda4,	// (0x000241bb) cell_vkb2_top_candi_pane_g1

0xedb2,	// (0x000241c9) cell_vkb2_top_candi_pane_g2_ParamLimits

0xedb2,	// (0x000241c9) cell_vkb2_top_candi_pane_g2

0x5fab,	// (0x0001b3c2) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5fab,	// (0x0001b3c2) cell_vkb2_top_candi_pane_g3

0xf260,	// (0x00024677) cell_vkb2_top_candi_pane_g4_ParamLimits

0xf260,	// (0x00024677) cell_vkb2_top_candi_pane_g4

0x4656,	// (0x00019a6d) cell_vkb2_top_candi_pane_g5_ParamLimits

0x4656,	// (0x00019a6d) cell_vkb2_top_candi_pane_g5

0xef7b,	// (0x00024392) cell_vkb2_top_candi_pane_g6_ParamLimits

0xef7b,	// (0x00024392) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdbc,	// (0x000251d3) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdbc,	// (0x000251d3) cell_vkb2_top_candi_pane_g

0xf281,	// (0x00024698) cell_vkb2_top_candi_pane_t1

0x8ca2,	// (0x0001e0b9) aid_size_touch_slider_mark_ParamLimits

0x8ca2,	// (0x0001e0b9) aid_size_touch_slider_mark

0xd824,	// (0x00022c3b) grid_graphic2_catg_pane_ParamLimits

0xd824,	// (0x00022c3b) grid_graphic2_catg_pane

0xd8e0,	// (0x00022cf7) popup_grid_graphic2_window_t1_ParamLimits

0xd8e0,	// (0x00022cf7) popup_grid_graphic2_window_t1

0xd8f6,	// (0x00022d0d) popup_grid_graphic2_window_t2_ParamLimits

0xd8f6,	// (0x00022d0d) popup_grid_graphic2_window_t2

0x0001,

0xfd75,	// (0x0002518c) popup_grid_graphic2_window_t_ParamLimits

0xfd75,	// (0x0002518c) popup_grid_graphic2_window_t

0xc3b7,	// (0x000217ce) bg_button_pane_cp05_ParamLimits

0xda7f,	// (0x00022e96) cell_graphic2_control_pane_g1_ParamLimits

0xdb6d,	// (0x00022f84) cell_graphic2_catg_pane_ParamLimits

0xdb6d,	// (0x00022f84) cell_graphic2_catg_pane

0xc203,	// (0x0002161a) bg_button_pane_cp12

0xdb7f,	// (0x00022f96) cell_graphic2_catg_pane_g1

0x5969,	// (0x0001ad80) cell_tb_ext_pane_t1_ParamLimits

0xf07e,	// (0x00024495) vkb2_top_cell_right_narrow_pane_ParamLimits

0xf07e,	// (0x00024495) vkb2_top_cell_right_narrow_pane

0xf096,	// (0x000244ad) vkb2_top_cell_right_wide_pane_ParamLimits

0xf096,	// (0x000244ad) vkb2_top_cell_right_wide_pane

0xe7e2,	// (0x00023bf9) bg_vkb2_func_pane_ParamLimits

0xe7e2,	// (0x00023bf9) bg_vkb2_func_pane

0xf0db,	// (0x000244f2) vkb2_top_cell_left_pane_g1_ParamLimits

0xe7e2,	// (0x00023bf9) bg_vkb2_fuc_pane_cp03_ParamLimits

0xe7e2,	// (0x00023bf9) bg_vkb2_fuc_pane_cp03

0xf139,	// (0x00024550) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x11df,	// (0x000165f6) bg_vkb2_func_pane_g1

0x11e7,	// (0x000165fe) bg_vkb2_func_pane_g2

0x11f7,	// (0x0001660e) bg_vkb2_func_pane_g3

0x11ef,	// (0x00016606) bg_vkb2_func_pane_g4

0x11ff,	// (0x00016616) bg_vkb2_func_pane_g5

0x1207,	// (0x0001661e) bg_vkb2_func_pane_g6

0x120f,	// (0x00016626) bg_vkb2_func_pane_g7

0x1217,	// (0x0001662e) bg_vkb2_func_pane_g8

0x11d7,	// (0x000165ee) bg_vkb2_func_pane_g9

0x0008,

0xfdc9,	// (0x000251e0) bg_vkb2_func_pane_g

0xe7e2,	// (0x00023bf9) bg_vkb2_fuc_pane_cp01_ParamLimits

0xe7e2,	// (0x00023bf9) bg_vkb2_fuc_pane_cp01

0xf0db,	// (0x000244f2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xf0db,	// (0x000244f2) vkb2_top_cell_right_wide_pane_g1

0xe7e2,	// (0x00023bf9) bg_vkb2_fuc_pane_cp02_ParamLimits

0xe7e2,	// (0x00023bf9) bg_vkb2_fuc_pane_cp02

0xf139,	// (0x00024550) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xf139,	// (0x00024550) vkb2_top_cell_right_narrow_pane_g1

0xc05d,	// (0x00021474) aid_touch_area_decrease_ParamLimits

0xc05d,	// (0x00021474) aid_touch_area_decrease

0xc097,	// (0x000214ae) aid_touch_area_increase_ParamLimits

0xc097,	// (0x000214ae) aid_touch_area_increase

0xc0bf,	// (0x000214d6) aid_touch_area_mute_ParamLimits

0xc0bf,	// (0x000214d6) aid_touch_area_mute

0xc0e7,	// (0x000214fe) aid_touch_area_slider_ParamLimits

0xc0e7,	// (0x000214fe) aid_touch_area_slider

0xc127,	// (0x0002153e) popup_slider_window_g4_ParamLimits

0xc127,	// (0x0002153e) popup_slider_window_g4

0xc14f,	// (0x00021566) popup_slider_window_g5_ParamLimits

0xc14f,	// (0x00021566) popup_slider_window_g5

0xc183,	// (0x0002159a) popup_slider_window_g6_ParamLimits

0xc183,	// (0x0002159a) popup_slider_window_g6

0x5745,	// (0x0001ab5c) popup_slider_window_t2_ParamLimits

0x5745,	// (0x0001ab5c) popup_slider_window_t2

0x0001,

0xfcc3,	// (0x000250da) popup_slider_window_t_ParamLimits

0xfcc3,	// (0x000250da) popup_slider_window_t

0xc19f,	// (0x000215b6) slider_pane_ParamLimits

0xc19f,	// (0x000215b6) slider_pane

0x6491,	// (0x0001b8a8) slider_pane_g1_ParamLimits

0x6491,	// (0x0001b8a8) slider_pane_g1

0x64a5,	// (0x0001b8bc) slider_pane_g2_ParamLimits

0x64a5,	// (0x0001b8bc) slider_pane_g2

0x64bb,	// (0x0001b8d2) slider_pane_g3_ParamLimits

0x64bb,	// (0x0001b8d2) slider_pane_g3

0x0003,

0xfddc,	// (0x000251f3) slider_pane_g_ParamLimits

0xfddc,	// (0x000251f3) slider_pane_g

0x8ac1,	// (0x0001ded8) popup_tb_float_extension_window_ParamLimits

0x8ac1,	// (0x0001ded8) popup_tb_float_extension_window

0x64e7,	// (0x0001b8fe) aid_size_cell_tb_float_ext

0xc203,	// (0x0002161a) bg_popup_sub_window_cp28

0xdb88,	// (0x00022f9f) grid_tb_float_ext_pane

0xdb92,	// (0x00022fa9) cell_tb_float_ext_pane_ParamLimits

0xdb92,	// (0x00022fa9) cell_tb_float_ext_pane

0xdbac,	// (0x00022fc3) cell_tb_float_ext_pane_g1

0xdbb5,	// (0x00022fcc) grid_highlight_pane_cp12

0x8d95,	// (0x0001e1ac) cell_last_hwr_side_pane_ParamLimits

0x8d95,	// (0x0001e1ac) cell_last_hwr_side_pane

0x3d4d,	// (0x00019164) cell_last_hwr_side_pane_g1

0x6529,	// (0x0001b940) cell_last_hwr_side_pane_g2

0x0001,

0xfde5,	// (0x000251fc) cell_last_hwr_side_pane_g

0x9186,	// (0x0001e59d) vkb2_area_bottom_space_btn_pane_ParamLimits

0x9186,	// (0x0001e59d) vkb2_area_bottom_space_btn_pane

0xeda4,	// (0x000241bb) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x5fe3,	// (0x0001b3fa) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xf281,	// (0x00024698) cell_vkb2_top_candi_pane_t1_ParamLimits

0xf2a0,	// (0x000246b7) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xf2a0,	// (0x000246b7) vkb2_area_bottom_space_btn_pane_g1

0xf2da,	// (0x000246f1) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xf2da,	// (0x000246f1) vkb2_area_bottom_space_btn_pane_g2

0xf310,	// (0x00024727) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xf310,	// (0x00024727) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdea,	// (0x00025201) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdea,	// (0x00025201) vkb2_area_bottom_space_btn_pane_g

0xec79,	// (0x00024090) cel_fep_hwr_func_pane_ParamLimits

0xec79,	// (0x00024090) cel_fep_hwr_func_pane

0x8d6a,	// (0x0001e181) cell_hwr_side_button_pane_ParamLimits

0x8d6a,	// (0x0001e181) cell_hwr_side_button_pane

0xd2cc,	// (0x000226e3) aid_area_touch_clock_ParamLimits

0xc3b7,	// (0x000217ce) bg_uniindi_top_pane_ParamLimits

0xd2de,	// (0x000226f5) uniindi_top_pane_g1_ParamLimits

0xd2f4,	// (0x0002270b) uniindi_top_pane_g2_ParamLimits

0xd300,	// (0x00022717) uniindi_top_pane_g3_ParamLimits

0x59e3,	// (0x0001adfa) uniindi_top_pane_g4_ParamLimits

0xfcfb,	// (0x00025112) uniindi_top_pane_g_ParamLimits

0xd311,	// (0x00022728) uniindi_top_pane_t1_ParamLimits

0xc3b7,	// (0x000217ce) bg_vkb2_func_pane_cp01_ParamLimits

0xc3b7,	// (0x000217ce) bg_vkb2_func_pane_cp01

0x6532,	// (0x0001b949) cel_fep_hwr_func_pane_g1_ParamLimits

0x6532,	// (0x0001b949) cel_fep_hwr_func_pane_g1

0xc3b7,	// (0x000217ce) bg_vkb2_func_pane_cp02_ParamLimits

0xc3b7,	// (0x000217ce) bg_vkb2_func_pane_cp02

0x6532,	// (0x0001b949) cell_hwr_side_button_pane_g1_ParamLimits

0x6532,	// (0x0001b949) cell_hwr_side_button_pane_g1

0x102d,	// (0x00016444) status_pane_g4_ParamLimits

0x102d,	// (0x00016444) status_pane_g4

0x1047,	// (0x0001645e) status_pane_t1

0x3a88,	// (0x00018e9f) form2_midp_gauge_slider_cont_pane

0x3a90,	// (0x00018ea7) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb66b,	// (0x00020a82) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb67d,	// (0x00020a94) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac2,	// (0x00024ed9) form2_midp_gauge_slider_pane_t_ParamLimits

0x3ac6,	// (0x00018edd) form2_midp_slider_pane_ParamLimits

0xef89,	// (0x000243a0) aid_size_cell_func_vkb2_ParamLimits

0xef89,	// (0x000243a0) aid_size_cell_func_vkb2

0x64d3,	// (0x0001b8ea) slider_pane_g4_ParamLimits

0x64d3,	// (0x0001b8ea) slider_pane_g4

0x91ef,	// (0x0001e606) form2_midp_gauge_slider_pane_t2_cp01

0x91fd,	// (0x0001e614) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x91fd,	// (0x0001e614) form2_midp_gauge_slider_pane_t3_cp01

0xf35a,	// (0x00024771) form2_midp_slider_pane_cp01

0xc203,	// (0x0002161a) navi_smil_pane

0x656b,	// (0x0001b982) navi_smil_pane_g1

0x6573,	// (0x0001b98a) navi_smil_pane_t1

0x6540,	// (0x0001b957) form2_midp_slider_pane_g1

0x6549,	// (0x0001b960) form2_midp_slider_pane_g2

0x6551,	// (0x0001b968) form2_midp_slider_pane_g3

0x6540,	// (0x0001b957) form2_midp_slider_pane_g4

0xdbbe,	// (0x00022fd5) form2_midp_slider_pane_g5

0x0004,

0xfdf3,	// (0x0002520a) form2_midp_slider_pane_g

0xf34a,	// (0x00024761) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xf34a,	// (0x00024761) vkb2_area_bottom_space_btn_pane_g4

0xa79f,	// (0x0001fbb6) lc0_navi_pane_ParamLimits

0xa79f,	// (0x0001fbb6) lc0_navi_pane

0xa809,	// (0x0001fc20) lc0_stat_indi_pane_ParamLimits

0xa809,	// (0x0001fc20) lc0_stat_indi_pane

0xa81e,	// (0x0001fc35) ls0_title_pane_ParamLimits

0xa81e,	// (0x0001fc35) ls0_title_pane

0xc6ad,	// (0x00021ac4) bg_popup_sub_pane_cp14_ParamLimits

0xd2b3,	// (0x000226ca) list_uniindi_pane_ParamLimits

0xd2bf,	// (0x000226d6) uniindi_top_pane_ParamLimits

0x5a2d,	// (0x0001ae44) list_single_uniindi_pane_g1_ParamLimits

0x5a40,	// (0x0001ae57) list_single_uniindi_pane_t1_ParamLimits

0x921a,	// (0x0001e631) lc0_stat_clock_pane_ParamLimits

0x921a,	// (0x0001e631) lc0_stat_clock_pane

0xdbc9,	// (0x00022fe0) lc0_stat_indi_pane_g1_ParamLimits

0xdbc9,	// (0x00022fe0) lc0_stat_indi_pane_g1

0xdbd6,	// (0x00022fed) lc0_stat_indi_pane_g2_ParamLimits

0xdbd6,	// (0x00022fed) lc0_stat_indi_pane_g2

0x0001,

0xfdfe,	// (0x00025215) lc0_stat_indi_pane_g_ParamLimits

0xfdfe,	// (0x00025215) lc0_stat_indi_pane_g

0x922a,	// (0x0001e641) lc0_uni_indicator_pane_ParamLimits

0x922a,	// (0x0001e641) lc0_uni_indicator_pane

0xdbe3,	// (0x00022ffa) ls0_title_pane_g1_ParamLimits

0xdbe3,	// (0x00022ffa) ls0_title_pane_g1

0xdbf7,	// (0x0002300e) ls0_title_pane_t1_ParamLimits

0xdbf7,	// (0x0002300e) ls0_title_pane_t1

0x923a,	// (0x0001e651) lc0_uni_indicator_pane_g1_ParamLimits

0x923a,	// (0x0001e651) lc0_uni_indicator_pane_g1

0x65e5,	// (0x0001b9fc) lc0_stat_clock_pane_t1

0xe299,	// (0x000236b0) main_ai5_pane

0x65f3,	// (0x0001ba0a) ai5_sk_pane_ParamLimits

0x65f3,	// (0x0001ba0a) ai5_sk_pane

0xdc25,	// (0x0002303c) cell_ai5_widget_pane_ParamLimits

0xdc25,	// (0x0002303c) cell_ai5_widget_pane

0x66c9,	// (0x0001bae0) aid_size_cell_widget_grid

0x66d7,	// (0x0001baee) bg_ai5_widget_pane_ParamLimits

0x66d7,	// (0x0001baee) bg_ai5_widget_pane

0x6753,	// (0x0001bb6a) cell_ai5_widget_pane_g2

0x6767,	// (0x0001bb7e) cell_ai5_widget_pane_g3

0x6781,	// (0x0001bb98) cell_ai5_widget_pane_g4

0x6791,	// (0x0001bba8) cell_ai5_widget_pane_g5

0x67a1,	// (0x0001bbb8) cell_ai5_widget_pane_g6

0x67ad,	// (0x0001bbc4) cell_ai5_widget_pane_g7

0x6819,	// (0x0001bc30) cell_ai5_widget_pane_t1_ParamLimits

0x6819,	// (0x0001bc30) cell_ai5_widget_pane_t1

0x6836,	// (0x0001bc4d) cell_ai5_widget_pane_t2_ParamLimits

0x6836,	// (0x0001bc4d) cell_ai5_widget_pane_t2

0x684e,	// (0x0001bc65) cell_ai5_widget_pane_t3_ParamLimits

0x684e,	// (0x0001bc65) cell_ai5_widget_pane_t3

0x6866,	// (0x0001bc7d) cell_ai5_widget_pane_t4_ParamLimits

0x6866,	// (0x0001bc7d) cell_ai5_widget_pane_t4

0xdc91,	// (0x000230a8) cell_ai5_widget_pane_t5_ParamLimits

0xdc91,	// (0x000230a8) cell_ai5_widget_pane_t5

0x68ab,	// (0x0001bcc2) cell_ai5_widget_pane_t6_ParamLimits

0x68ab,	// (0x0001bcc2) cell_ai5_widget_pane_t6

0x68bd,	// (0x0001bcd4) cell_ai5_widget_pane_t7_ParamLimits

0x68bd,	// (0x0001bcd4) cell_ai5_widget_pane_t7

0x68dc,	// (0x0001bcf3) cell_ai5_widget_pane_t8_ParamLimits

0x68dc,	// (0x0001bcf3) cell_ai5_widget_pane_t8

0x000b,

0xfe1e,	// (0x00025235) cell_ai5_widget_pane_t_ParamLimits

0xfe1e,	// (0x00025235) cell_ai5_widget_pane_t

0x6960,	// (0x0001bd77) grid_ai5_widget_pane

0xc6ad,	// (0x00021ac4) highlight_cell_ai5_widget_pane_ParamLimits

0xc6ad,	// (0x00021ac4) highlight_cell_ai5_widget_pane

0xdcb1,	// (0x000230c8) ai5_sk_left_pane

0xdcbb,	// (0x000230d2) ai5_sk_middle_pane

0xdcc5,	// (0x000230dc) ai5_sk_right_pane

0x698c,	// (0x0001bda3) bg_ai5_widget_pane_g1_ParamLimits

0x698c,	// (0x0001bda3) bg_ai5_widget_pane_g1

0x6998,	// (0x0001bdaf) bg_ai5_widget_pane_g2_ParamLimits

0x6998,	// (0x0001bdaf) bg_ai5_widget_pane_g2

0x69a4,	// (0x0001bdbb) bg_ai5_widget_pane_g3_ParamLimits

0x69a4,	// (0x0001bdbb) bg_ai5_widget_pane_g3

0x69b0,	// (0x0001bdc7) bg_ai5_widget_pane_g4_ParamLimits

0x69b0,	// (0x0001bdc7) bg_ai5_widget_pane_g4

0x69bc,	// (0x0001bdd3) bg_ai5_widget_pane_g5_ParamLimits

0x69bc,	// (0x0001bdd3) bg_ai5_widget_pane_g5

0x69c8,	// (0x0001bddf) bg_ai5_widget_pane_g6_ParamLimits

0x69c8,	// (0x0001bddf) bg_ai5_widget_pane_g6

0x69d4,	// (0x0001bdeb) bg_ai5_widget_pane_g7_ParamLimits

0x69d4,	// (0x0001bdeb) bg_ai5_widget_pane_g7

0x69e0,	// (0x0001bdf7) bg_ai5_widget_pane_g8_ParamLimits

0x69e0,	// (0x0001bdf7) bg_ai5_widget_pane_g8

0x69ec,	// (0x0001be03) bg_ai5_widget_pane_g9_ParamLimits

0x69ec,	// (0x0001be03) bg_ai5_widget_pane_g9

0x0008,

0xfe37,	// (0x0002524e) bg_ai5_widget_pane_g_ParamLimits

0xfe37,	// (0x0002524e) bg_ai5_widget_pane_g

0x6a1e,	// (0x0001be35) cell_shortcut_ai5_widget_pane_ParamLimits

0x6a1e,	// (0x0001be35) cell_shortcut_ai5_widget_pane

0xcf9e,	// (0x000223b5) bg_cell_shortcut_ai5_widget_pane

0x6a2f,	// (0x0001be46) cell_grid_ai5_widget_pane_g1

0xcf9e,	// (0x000223b5) highlight_cell_shortcut_ai5_widget_pane

0x11df,	// (0x000165f6) ai5_sk_left_pane_g1

0x6a38,	// (0x0001be4f) ai5_sk_left_pane_g2

0x6a40,	// (0x0001be57) ai5_sk_left_pane_g3

0x6a48,	// (0x0001be5f) ai5_sk_left_pane_g4

0x0003,

0xfe4a,	// (0x00025261) ai5_sk_left_pane_g

0x6a50,	// (0x0001be67) ai5_sk_left_pane_t1

0x11e7,	// (0x000165fe) ai5_sk_right_pane_g1

0x6a5e,	// (0x0001be75) ai5_sk_right_pane_g2

0x6a66,	// (0x0001be7d) ai5_sk_right_pane_g3

0x6a6e,	// (0x0001be85) ai5_sk_right_pane_g4

0x0003,

0xfe53,	// (0x0002526a) ai5_sk_right_pane_g

0x6a76,	// (0x0001be8d) ai5_sk_right_pane_t1

0x11e7,	// (0x000165fe) ai5_sk_middle_pane_g1

0x11df,	// (0x000165f6) ai5_sk_middle_pane_g2

0x11ff,	// (0x00016616) ai5_sk_middle_pane_g3

0x6a66,	// (0x0001be7d) ai5_sk_middle_pane_g4

0x6a40,	// (0x0001be57) ai5_sk_middle_pane_g5

0x6a84,	// (0x0001be9b) ai5_sk_middle_pane_g6

0xdccf,	// (0x000230e6) ai5_sk_middle_pane_g7

0x0006,

0xfe5c,	// (0x00025273) ai5_sk_middle_pane_g

0xa68b,	// (0x0001faa2) aid_touch_area_size_lc0_ParamLimits

0xa68b,	// (0x0001faa2) aid_touch_area_size_lc0

0xedd3,	// (0x000241ea) cell_hwr_candidate_pane_t1_ParamLimits

0x0cfe,	// (0x00016115) aid_touch_navi_pane

0xa917,	// (0x0001fd2e) status_dt_navi_pane_ParamLimits

0xa917,	// (0x0001fd2e) status_dt_navi_pane

0xa92f,	// (0x0001fd46) status_dt_sta_pane_ParamLimits

0xa92f,	// (0x0001fd46) status_dt_sta_pane

0xdcd7,	// (0x000230ee) dt_sta_controll_pane

0xdce4,	// (0x000230fb) dt_sta_indi_pane

0xdcf1,	// (0x00023108) dt_sta_title_pane

0xc3b7,	// (0x000217ce) bg_dt_sta_indi_pane_ParamLimits

0xc3b7,	// (0x000217ce) bg_dt_sta_indi_pane

0xdd03,	// (0x0002311a) dt_sta_battery_pane

0xdd0b,	// (0x00023122) dt_sta_indi_pane_g1

0x6ad6,	// (0x0001beed) dt_sta_indi_pane_g2

0x6adf,	// (0x0001bef6) dt_sta_indi_pane_g3

0x0002,

0xfe6b,	// (0x00025282) dt_sta_indi_pane_g

0x6ae8,	// (0x0001beff) dt_sta_signal_pane

0xc6ad,	// (0x00021ac4) bg_dt_sta_title_pane_ParamLimits

0xc6ad,	// (0x00021ac4) bg_dt_sta_title_pane

0x210e,	// (0x00017525) dt_sta_title_pane_g1

0xdd14,	// (0x0002312b) dt_sta_title_pane_t1_ParamLimits

0xdd14,	// (0x0002312b) dt_sta_title_pane_t1

0xc203,	// (0x0002161a) bg_dt_sta_control_pane

0xdd29,	// (0x00023140) dt_sta_controll_pane_g1

0xdd32,	// (0x00023149) bg_dt_sta_title_pane_g1

0xdd3b,	// (0x00023152) bg_dt_sta_title_pane_g2

0xdd44,	// (0x0002315b) bg_dt_sta_title_pane_g3

0x0002,

0xfe72,	// (0x00025289) bg_dt_sta_title_pane_g

0x3d4d,	// (0x00019164) bg_dt_sta_indi_pane_g1

0x6b2a,	// (0x0001bf41) dt_sta_signal_pane_g1

0x6b32,	// (0x0001bf49) dt_sta_signal_pane_g2

0x0001,

0xfe79,	// (0x00025290) dt_sta_signal_pane_g

0x6b3a,	// (0x0001bf51) dt_sta_battery_pane_g1

0x6b43,	// (0x0001bf5a) dt_sta_battery_pane_t1

0x3d4d,	// (0x00019164) bg_dt_sta_control_pane_g1

0xcbf0,	// (0x00022007) fep_china_uni_eep_pane

0xcbf8,	// (0x0002200f) fep_china_uni_entry_pane_ParamLimits

0xcc08,	// (0x0002201f) popup_fep_china_uni_window_g1_ParamLimits

0xcc18,	// (0x0002202f) popup_fep_china_uni_window_g2_ParamLimits

0xcc18,	// (0x0002202f) popup_fep_china_uni_window_g2

0x0001,

0xf6e4,	// (0x00024afb) popup_fep_china_uni_window_g_ParamLimits

0xf6e4,	// (0x00024afb) popup_fep_china_uni_window_g

0x6b52,	// (0x0001bf69) fep_china_uni_eep_pane_g1

0x6b5a,	// (0x0001bf71) fep_china_uni_eep_pane_t1

0x6562,	// (0x0001b979) aid_touch_area_size_smil_player

0x0e54,	// (0x0001626b) lc0_clock_pane

0x103b,	// (0x00016452) status_pane_g5_ParamLimits

0x103b,	// (0x00016452) status_pane_g5

0x861d,	// (0x0001da34) popup_keymap_window

0x0ff9,	// (0x00016410) status_icon_pane

0x6767,	// (0x0001bb7e) cell_ai5_widget_pane_g3_ParamLimits

0x6781,	// (0x0001bb98) cell_ai5_widget_pane_g4_ParamLimits

0x6791,	// (0x0001bba8) cell_ai5_widget_pane_g5_ParamLimits

0x67b9,	// (0x0001bbd0) cell_ai5_widget_pane_g8_ParamLimits

0x67b9,	// (0x0001bbd0) cell_ai5_widget_pane_g8

0x67cd,	// (0x0001bbe4) cell_ai5_widget_pane_g9_ParamLimits

0x67cd,	// (0x0001bbe4) cell_ai5_widget_pane_g9

0x67e1,	// (0x0001bbf8) cell_ai5_widget_pane_g10_ParamLimits

0x67e1,	// (0x0001bbf8) cell_ai5_widget_pane_g10

0x6b69,	// (0x0001bf80) status_icon_pane_g1

0xc203,	// (0x0002161a) bg_popup_sub_pane_cp13

0x6b71,	// (0x0001bf88) popup_keymap_window_t1

0xa619,	// (0x0001fa30) control_pane_g6_ParamLimits

0xa619,	// (0x0001fa30) control_pane_g6

0xa626,	// (0x0001fa3d) control_pane_g7_ParamLimits

0xa626,	// (0x0001fa3d) control_pane_g7

0xa633,	// (0x0001fa4a) control_pane_g8_ParamLimits

0xa633,	// (0x0001fa4a) control_pane_g8

0xdcd7,	// (0x000230ee) dt_sta_controll_pane_ParamLimits

0xdce4,	// (0x000230fb) dt_sta_indi_pane_ParamLimits

0xdcf1,	// (0x00023108) dt_sta_title_pane_ParamLimits

0xc58e,	// (0x000219a5) aid_size_touch_scroll_bar_cale

0x8085,	// (0x0001d49c) popup_discreet_window_ParamLimits

0x8085,	// (0x0001d49c) popup_discreet_window

0x80d7,	// (0x0001d4ee) popup_sk_window

0x1952,	// (0x00016d69) bg_popup_sub_pane_cp28_ParamLimits

0x1952,	// (0x00016d69) bg_popup_sub_pane_cp28

0x6b7f,	// (0x0001bf96) popup_discreet_window_g1_ParamLimits

0x6b7f,	// (0x0001bf96) popup_discreet_window_g1

0xdd4d,	// (0x00023164) popup_discreet_window_t1_ParamLimits

0xdd4d,	// (0x00023164) popup_discreet_window_t1

0x6bbd,	// (0x0001bfd4) popup_discreet_window_t2_ParamLimits

0x6bbd,	// (0x0001bfd4) popup_discreet_window_t2

0x0002,

0xfe7e,	// (0x00025295) popup_discreet_window_t_ParamLimits

0xfe7e,	// (0x00025295) popup_discreet_window_t

0xf371,	// (0x00024788) popup_sk_window_g1

0xf37b,	// (0x00024792) popup_sk_window_g2

0x0001,

0xfe85,	// (0x0002529c) popup_sk_window_g

0x9265,	// (0x0001e67c) popup_sk_window_t1

0x9273,	// (0x0001e68a) popup_sk_window_t1_copy1

0x6753,	// (0x0001bb6a) cell_ai5_widget_pane_g2_ParamLimits

0x68ee,	// (0x0001bd05) cell_ai5_widget_pane_t9_ParamLimits

0x68ee,	// (0x0001bd05) cell_ai5_widget_pane_t9

0xc203,	// (0x0002161a) main_fep_fshwr2_pane

0x9281,	// (0x0001e698) aid_fshwr2_btn_pane

0x9295,	// (0x0001e6ac) aid_fshwr2_syb_pane

0x92a9,	// (0x0001e6c0) aid_fshwr2_txt_pane

0x92b9,	// (0x0001e6d0) fshwr2_func_candi_pane

0x92d9,	// (0x0001e6f0) fshwr2_hwr_syb_pane

0x92fd,	// (0x0001e714) fshwr2_icf_pane

0xe299,	// (0x000236b0) fshwr2_icf_bg_pane

0xf383,	// (0x0002479a) fshwr2_icf_pane_t1_ParamLimits

0xf383,	// (0x0002479a) fshwr2_icf_pane_t1

0xcb6d,	// (0x00021f84) fshwr2_func_candi_pane_g1

0xdd6b,	// (0x00023182) fshwr2_func_candi_row_pane_ParamLimits

0xdd6b,	// (0x00023182) fshwr2_func_candi_row_pane

0x932d,	// (0x0001e744) cell_fshwr2_syb_pane_ParamLimits

0x932d,	// (0x0001e744) cell_fshwr2_syb_pane

0xf39c,	// (0x000247b3) fshwr2_hwr_syb_pane_g1_ParamLimits

0xf39c,	// (0x000247b3) fshwr2_hwr_syb_pane_g1

0xe299,	// (0x000236b0) bg_popup_call_pane_cp01

0x9353,	// (0x0001e76a) fshwr2_func_candi_cell_pane_ParamLimits

0x9353,	// (0x0001e76a) fshwr2_func_candi_cell_pane

0x173b,	// (0x00016b52) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x173b,	// (0x00016b52) fshwr2_func_candi_cell_bg_pane

0x939e,	// (0x0001e7b5) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x939e,	// (0x0001e7b5) fshwr2_func_candi_cell_pane_g1

0x93d5,	// (0x0001e7ec) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x93d5,	// (0x0001e7ec) fshwr2_func_candi_cell_pane_t1

0xe299,	// (0x000236b0) bg_button_pane_cp08

0xc85d,	// (0x00021c74) cell_fshwr2_syb_bg_pane

0x93f0,	// (0x0001e807) cell_fshwr2_syb_bg_pane_g1

0x9403,	// (0x0001e81a) cell_fshwr2_syb_bg_pane_t1

0xc6ad,	// (0x00021ac4) main_tmo_pane

0xb009,	// (0x00020420) uni_indicator_pane_g1_ParamLimits

0xb01f,	// (0x00020436) uni_indicator_pane_g2_ParamLimits

0xb035,	// (0x0002044c) uni_indicator_pane_g3_ParamLimits

0x247b,	// (0x00017892) uni_indicator_pane_g4_ParamLimits

0x247b,	// (0x00017892) uni_indicator_pane_g4

0x248f,	// (0x000178a6) uni_indicator_pane_g5_ParamLimits

0x248f,	// (0x000178a6) uni_indicator_pane_g5

0x248f,	// (0x000178a6) uni_indicator_pane_g6_ParamLimits

0x248f,	// (0x000178a6) uni_indicator_pane_g6

0xf8dc,	// (0x00024cf3) uni_indicator_pane_g_ParamLimits

0xc03f,	// (0x00021456) popup_tmo_note_window_ParamLimits

0xc03f,	// (0x00021456) popup_tmo_note_window

0xf363,	// (0x0002477a) fshwr2_bg_pane

0x93c6,	// (0x0001e7dd) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x93c6,	// (0x0001e7dd) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe8a,	// (0x000252a1) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe8a,	// (0x000252a1) fshwr2_func_candi_cell_pane_g

0xed8c,	// (0x000241a3) bg_popup_window_pane_cp01

0xf3aa,	// (0x000247c1) bg_popup_window_pane_g1_cp01

0x6c36,	// (0x0001c04d) bg_popup_window_pane_cp22_ParamLimits

0x6c36,	// (0x0001c04d) bg_popup_window_pane_cp22

0xdd8e,	// (0x000231a5) listscroll_tmo_link_pane_ParamLimits

0xdd8e,	// (0x000231a5) listscroll_tmo_link_pane

0x6c84,	// (0x0001c09b) popup_tmo_note_window_g1_ParamLimits

0x6c84,	// (0x0001c09b) popup_tmo_note_window_g1

0xddce,	// (0x000231e5) tmo_note_info_pane_ParamLimits

0xddce,	// (0x000231e5) tmo_note_info_pane

0xdde8,	// (0x000231ff) list_tmo_note_info_pane_g1_ParamLimits

0xdde8,	// (0x000231ff) list_tmo_note_info_pane_g1

0x6cc2,	// (0x0001c0d9) list_tmo_note_info_pane_g2_ParamLimits

0x6cc2,	// (0x0001c0d9) list_tmo_note_info_pane_g2

0x0001,

0xfe8f,	// (0x000252a6) list_tmo_note_info_pane_g_ParamLimits

0xfe8f,	// (0x000252a6) list_tmo_note_info_pane_g

0x6cde,	// (0x0001c0f5) list_tmo_note_info_text_pane_ParamLimits

0x6cde,	// (0x0001c0f5) list_tmo_note_info_text_pane

0x6d5f,	// (0x0001c176) list_tmo_link_pane

0x6d6c,	// (0x0001c183) scroll_pane_cp20

0x6d79,	// (0x0001c190) list_single_tmo_link_pane_ParamLimits

0x6d79,	// (0x0001c190) list_single_tmo_link_pane

0x6d89,	// (0x0001c1a0) list_single_tmo_link_pane_t1

0x6d97,	// (0x0001c1ae) list_tmo_note_info_text_pane_t1_ParamLimits

0x6d97,	// (0x0001c1ae) list_tmo_note_info_text_pane_t1

0xa014,	// (0x0001f42b) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa014,	// (0x0001f42b) aid_size_touch_scroll_bar_cp01

0x9f14,	// (0x0001f32b) aid_size_touch_slider_marker

0x80c7,	// (0x0001d4de) popup_settings_window_ParamLimits

0x80c7,	// (0x0001d4de) popup_settings_window

0xd132,	// (0x00022549) popup_candi_list_indi_window

0x0cfe,	// (0x00016115) aid_touch_navi_pane_ParamLimits

0xef03,	// (0x0002431a) rs_clock_indi_pane

0xef0c,	// (0x00024323) sctrl_sk_bottom_pane_ParamLimits

0xef1d,	// (0x00024334) sctrl_sk_top_pane_ParamLimits

0x8ec3,	// (0x0001e2da) popup_fep_tooltip_window

0x66c9,	// (0x0001bae0) aid_size_cell_widget_grid_ParamLimits

0x673e,	// (0x0001bb55) cell_ai5_widget_pane_g1_ParamLimits

0x673e,	// (0x0001bb55) cell_ai5_widget_pane_g1

0x67a1,	// (0x0001bbb8) cell_ai5_widget_pane_g6_ParamLimits

0x67ad,	// (0x0001bbc4) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe03,	// (0x0002521a) cell_ai5_widget_pane_g_ParamLimits

0xfe03,	// (0x0002521a) cell_ai5_widget_pane_g

0x691d,	// (0x0001bd34) cell_ai5_widget_pane_t10_ParamLimits

0x691d,	// (0x0001bd34) cell_ai5_widget_pane_t10

0x6960,	// (0x0001bd77) grid_ai5_widget_pane_ParamLimits

0x69f8,	// (0x0001be0f) cell_contacts_ai5_widget_pane_ParamLimits

0x69f8,	// (0x0001be0f) cell_contacts_ai5_widget_pane

0x6bd2,	// (0x0001bfe9) popup_discreet_window_t3_ParamLimits

0x6bd2,	// (0x0001bfe9) popup_discreet_window_t3

0x9319,	// (0x0001e730) popup_fshwr2_char_preview_window_ParamLimits

0x9319,	// (0x0001e730) popup_fshwr2_char_preview_window

0xddff,	// (0x00023216) tmo_note_info_pane_t1

0xde14,	// (0x0002322b) tmo_note_info_pane_t2

0xde2b,	// (0x00023242) tmo_note_info_pane_t3

0x6d3b,	// (0x0001c152) tmo_note_info_pane_t4

0x6d4d,	// (0x0001c164) tmo_note_info_pane_t5

0x0004,

0xfe94,	// (0x000252ab) tmo_note_info_pane_t

0x6d5f,	// (0x0001c176) list_tmo_link_pane_ParamLimits

0x6d6c,	// (0x0001c183) scroll_pane_cp20_ParamLimits

0xe299,	// (0x000236b0) bg_popup_fep_char_preview_window_cp01

0xde40,	// (0x00023257) popup_fshwr2_char_preview_window_t1

0x6dbe,	// (0x0001c1d5) popup_candi_list_indi_window_g1

0x6dc7,	// (0x0001c1de) bg_cell_contacts_ai5_widget_pane

0x6dd3,	// (0x0001c1ea) cell_contacts_ai5_widget_pane_g1

0x45ab,	// (0x000199c2) cell_contacts_ai5_widget_pane_g2

0x6de8,	// (0x0001c1ff) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe9f,	// (0x000252b6) cell_contacts_ai5_widget_pane_g

0x6df4,	// (0x0001c20b) cell_contacts_ai5_widget_pane_t1

0xc6ad,	// (0x00021ac4) highlight_cell_shortcut_ai5_widget_pane_cp01

0x6e6b,	// (0x0001c282) settings_container_pane

0xcf9e,	// (0x000223b5) listscroll_set_pane_copy1

0x30e4,	// (0x000184fb) scroll_pane_cp121_copy1

0x16f7,	// (0x00016b0e) set_content_pane_copy1

0xde4e,	// (0x00023265) aid_height_set_list_copy1_ParamLimits

0xde4e,	// (0x00023265) aid_height_set_list_copy1

0x2699,	// (0x00017ab0) aid_size_parent_copy1_ParamLimits

0x2699,	// (0x00017ab0) aid_size_parent_copy1

0xde5a,	// (0x00023271) button_value_adjust_pane_cp6_copy1_ParamLimits

0xde5a,	// (0x00023271) button_value_adjust_pane_cp6_copy1

0xc85d,	// (0x00021c74) list_highlight_pane_cp2_copy1_ParamLimits

0xc85d,	// (0x00021c74) list_highlight_pane_cp2_copy1

0xde6e,	// (0x00023285) list_set_pane_copy1_ParamLimits

0xde6e,	// (0x00023285) list_set_pane_copy1

0x6e06,	// (0x0001c21d) main_pane_set_t1_copy1_ParamLimits

0x6e06,	// (0x0001c21d) main_pane_set_t1_copy1

0x6e40,	// (0x0001c257) main_pane_set_t2_copy1_ParamLimits

0x6e40,	// (0x0001c257) main_pane_set_t2_copy1

0xdf1b,	// (0x00023332) main_pane_set_t3_copy1

0xdf29,	// (0x00023340) main_pane_set_t4_copy1

0x6e5f,	// (0x0001c276) set_content_pane_g1_copy1_ParamLimits

0x6e5f,	// (0x0001c276) set_content_pane_g1_copy1

0xdf37,	// (0x0002334e) setting_code_pane_copy1

0x6f68,	// (0x0001c37f) setting_slider_graphic_pane_copy1

0x6f68,	// (0x0001c37f) setting_slider_pane_copy1

0x6f70,	// (0x0001c387) setting_text_pane_copy1

0x6f70,	// (0x0001c387) setting_volume_pane_copy1

0xdf37,	// (0x0002334e) settings_code_pane_cp2_copy1

0xdf3f,	// (0x00023356) settings_code_pane_cp_copy1_ParamLimits

0xdf3f,	// (0x00023356) settings_code_pane_cp_copy1

0x9419,	// (0x0001e830) volume_set_pane_copy1

0xdf53,	// (0x0002336a) volume_set_pane_g10_copy1

0xdf5b,	// (0x00023372) volume_set_pane_g1_copy1

0xdf63,	// (0x0002337a) volume_set_pane_g2_copy1

0xdf6b,	// (0x00023382) volume_set_pane_g3_copy1

0xdf73,	// (0x0002338a) volume_set_pane_g4_copy1

0xdf7b,	// (0x00023392) volume_set_pane_g5_copy1

0xdf83,	// (0x0002339a) volume_set_pane_g6_copy1

0xdf8b,	// (0x000233a2) volume_set_pane_g7_copy1

0xdf93,	// (0x000233aa) volume_set_pane_g8_copy1

0xdf9b,	// (0x000233b2) volume_set_pane_g9_copy1

0xc273,	// (0x0002168a) bg_set_opt_pane_cp_copy1_ParamLimits

0xc273,	// (0x0002168a) bg_set_opt_pane_cp_copy1

0x9421,	// (0x0001e838) setting_slider_pane_t1_copy1_ParamLimits

0x9421,	// (0x0001e838) setting_slider_pane_t1_copy1

0x9440,	// (0x0001e857) setting_slider_pane_t2_copy1_ParamLimits

0x9440,	// (0x0001e857) setting_slider_pane_t2_copy1

0x945a,	// (0x0001e871) setting_slider_pane_t3_copy1_ParamLimits

0x945a,	// (0x0001e871) setting_slider_pane_t3_copy1

0x9472,	// (0x0001e889) slider_set_pane_copy1_ParamLimits

0x9472,	// (0x0001e889) slider_set_pane_copy1

0xc773,	// (0x00021b8a) set_opt_bg_pane_g1_copy2

0xc77b,	// (0x00021b92) set_opt_bg_pane_g2_copy2

0x6fdc,	// (0x0001c3f3) set_opt_bg_pane_g3_copy2

0xc78b,	// (0x00021ba2) set_opt_bg_pane_g4_copy2

0xc793,	// (0x00021baa) set_opt_bg_pane_g5_copy2

0xc79b,	// (0x00021bb2) set_opt_bg_pane_g6_copy2

0xdfa3,	// (0x000233ba) set_opt_bg_pane_g7_copy2

0x6fee,	// (0x0001c405) set_opt_bg_pane_g8_copy2

0x6ff8,	// (0x0001c40f) set_opt_bg_pane_g9_copy2

0x9488,	// (0x0001e89f) aid_size_touch_slider_mark_copy1_ParamLimits

0x9488,	// (0x0001e89f) aid_size_touch_slider_mark_copy1

0xdfab,	// (0x000233c2) slider_set_pane_g1_copy1

0xf3b3,	// (0x000247ca) slider_set_pane_g2_copy1

0x8cb6,	// (0x0001e0cd) slider_set_pane_g3_copy1_ParamLimits

0x8cb6,	// (0x0001e0cd) slider_set_pane_g3_copy1

0x8cca,	// (0x0001e0e1) slider_set_pane_g4_copy1_ParamLimits

0x8cca,	// (0x0001e0e1) slider_set_pane_g4_copy1

0x8ce2,	// (0x0001e0f9) slider_set_pane_g5_copy1_ParamLimits

0x8ce2,	// (0x0001e0f9) slider_set_pane_g5_copy1

0x8cb6,	// (0x0001e0cd) slider_set_pane_g6_copy1_ParamLimits

0x8cb6,	// (0x0001e0cd) slider_set_pane_g6_copy1

0x949c,	// (0x0001e8b3) slider_set_pane_g7_copy1_ParamLimits

0x949c,	// (0x0001e8b3) slider_set_pane_g7_copy1

0xc217,	// (0x0002162e) bg_set_opt_pane_cp2_copy1

0xdfb4,	// (0x000233cb) setting_slider_graphic_pane_g1_copy1

0xdfbd,	// (0x000233d4) setting_slider_graphic_pane_t1_copy1

0xdfcd,	// (0x000233e4) setting_slider_graphic_pane_t2_copy1

0xdfdd,	// (0x000233f4) slider_set_pane_cp_copy1

0x7044,	// (0x0001c45b) input_focus_pane_cp1_copy1

0x704d,	// (0x0001c464) list_set_text_pane_copy1

0x7055,	// (0x0001c46c) setting_text_pane_g1_copy1

0x705e,	// (0x0001c475) set_text_pane_t1_copy1

0x7044,	// (0x0001c45b) input_focus_pane_cp2_copy1

0x7055,	// (0x0001c46c) setting_code_pane_g1_copy1

0x7079,	// (0x0001c490) setting_code_pane_t1_copy1

0x7087,	// (0x0001c49e) list_set_graphic_pane_copy1

0xc217,	// (0x0002162e) bg_set_opt_pane_cp4_copy1

0xcd48,	// (0x0002215f) list_set_graphic_pane_g1_copy1_ParamLimits

0xcd48,	// (0x0002215f) list_set_graphic_pane_g1_copy1

0x709b,	// (0x0001c4b2) list_set_graphic_pane_g2_copy1

0xcd60,	// (0x00022177) list_set_graphic_pane_t1_copy1_ParamLimits

0xcd60,	// (0x00022177) list_set_graphic_pane_t1_copy1

0x3d4d,	// (0x00019164) rs_clock_indi_pane_g1

0x70a3,	// (0x0001c4ba) rs_clock_indi_pane_t1

0x70b1,	// (0x0001c4c8) rs_indi_pane

0x70b9,	// (0x0001c4d0) rs_indi_pane_g1

0x70c2,	// (0x0001c4d9) rs_indi_pane_g2

0x6dbe,	// (0x0001c1d5) rs_indi_pane_g3

0x0002,

0xfea6,	// (0x000252bd) rs_indi_pane_g

0xcf9e,	// (0x000223b5) bg_popup_preview_window_pane_cp03

0x70cb,	// (0x0001c4e2) popup_fep_tooltip_window_t1

0xbb3e,	// (0x00020f55) popup_note2_window_g2_ParamLimits

0xbb3e,	// (0x00020f55) popup_note2_window_g2

0x0001,

0xfc3a,	// (0x00025051) popup_note2_window_g_ParamLimits

0xfc3a,	// (0x00025051) popup_note2_window_g

0x51a6,	// (0x0001a5bd) bg_popup_sub_pane_cp11_ParamLimits

0x51b3,	// (0x0001a5ca) cell_ai3_links_pane_g1_ParamLimits

0x51ca,	// (0x0001a5e1) cell_ai3_links_pane_t1

0x705e,	// (0x0001c475) set_text_pane_t1_copy1_ParamLimits

0xa449,	// (0x0001f860) cell_graphic_popup_pane_cp2_ParamLimits

0xa449,	// (0x0001f860) cell_graphic_popup_pane_cp2

0xdfed,	// (0x00023404) cell_graphic_popup_pane_g1_cp2

0xc511,	// (0x00021928) cell_graphic_popup_pane_g2_cp2

0x70e1,	// (0x0001c4f8) cell_graphic_popup_pane_g3_cp2

0xdff5,	// (0x0002340c) cell_graphic_popup_pane_t2_cp2

0xc522,	// (0x00021939) grid_highlight_pane_cp3_cp2

0xc9ea,	// (0x00021e01) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc6ad,	// (0x00021ac4) main_tmo_pane_ParamLimits

0xc033,	// (0x0002144a) popup_tmo_big_image_note_window

0x672d,	// (0x0001bb44) cell_ai5_widget_list_pane

0x6735,	// (0x0001bb4c) cell_ai5_widget_lrg_icon_pane

0xddff,	// (0x00023216) tmo_note_info_pane_t1_ParamLimits

0xde14,	// (0x0002322b) tmo_note_info_pane_t2_ParamLimits

0xde2b,	// (0x00023242) tmo_note_info_pane_t3_ParamLimits

0x6d3b,	// (0x0001c152) tmo_note_info_pane_t4_ParamLimits

0x6d4d,	// (0x0001c164) tmo_note_info_pane_t5_ParamLimits

0xfe94,	// (0x000252ab) tmo_note_info_pane_t_ParamLimits

0x6e6b,	// (0x0001c282) settings_container_pane_ParamLimits

0xdfe5,	// (0x000233fc) indicator_popup_pane_cp5

0xdfe5,	// (0x000233fc) indicator_popup_pane_cp6

0x7087,	// (0x0001c49e) list_set_graphic_pane_copy1_ParamLimits

0xc203,	// (0x0002161a) bg_popup_window_pane_cp23

0x70f7,	// (0x0001c50e) popup_tmo_big_image_note_window_g1

0x7100,	// (0x0001c517) popup_tmo_big_image_note_window_t1

0x7110,	// (0x0001c527) popup_tmo_big_image_note_window_t2

0x7120,	// (0x0001c537) popup_tmo_big_image_note_window_t3

0x0002,

0xfead,	// (0x000252c4) popup_tmo_big_image_note_window_t

0x3d4d,	// (0x00019164) cell_ai5_widget_lrg_icon_pane_g1

0x7130,	// (0x0001c547) cell_ai5_widget_lrg_icon_pane_t1

0x713e,	// (0x0001c555) cell_ai5_widget_list_row_pane_ParamLimits

0x713e,	// (0x0001c555) cell_ai5_widget_list_row_pane

0x7155,	// (0x0001c56c) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7155,	// (0x0001c56c) cell_ai5_widget_list_row_pane_g1

0xe003,	// (0x0002341a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe003,	// (0x0002341a) cell_ai5_widget_list_row_pane_t1

0x718d,	// (0x0001c5a4) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x718d,	// (0x0001c5a4) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb4,	// (0x000252cb) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb4,	// (0x000252cb) cell_ai5_widget_list_row_pane_t

0xe299,	// (0x000236b0) main_fep_vtchi_ss_pane

0x71dd,	// (0x0001c5f4) popup_fep_char_pre_window

0x71e5,	// (0x0001c5fc) popup_fep_ituss_window

0xe05e,	// (0x00023475) popup_fep_vkbss_window

0xc85d,	// (0x00021c74) grid_vkbss_keypad_pane_ParamLimits

0xc85d,	// (0x00021c74) grid_vkbss_keypad_pane

0x7251,	// (0x0001c668) ituss_keypad_pane

0xf3c7,	// (0x000247de) aid_vkbss_key_offset_ParamLimits

0xf3c7,	// (0x000247de) aid_vkbss_key_offset

0x94b2,	// (0x0001e8c9) cell_vkbss_key_pane_ParamLimits

0x94b2,	// (0x0001e8c9) cell_vkbss_key_pane

0x7260,	// (0x0001c677) bg_cell_vkbss_key_g1_ParamLimits

0x7260,	// (0x0001c677) bg_cell_vkbss_key_g1

0xe06b,	// (0x00023482) cell_vkbss_key_3p_pane_ParamLimits

0xe06b,	// (0x00023482) cell_vkbss_key_3p_pane

0xe0a1,	// (0x000234b8) cell_vkbss_key_g1_ParamLimits

0xe0a1,	// (0x000234b8) cell_vkbss_key_g1

0xe0d7,	// (0x000234ee) cell_vkbss_key_t1_ParamLimits

0xe0d7,	// (0x000234ee) cell_vkbss_key_t1

0xf3d3,	// (0x000247ea) cell_ituss_key_pane_ParamLimits

0xf3d3,	// (0x000247ea) cell_ituss_key_pane

0x7334,	// (0x0001c74b) bg_cell_ituss_key_g1_ParamLimits

0x7334,	// (0x0001c74b) bg_cell_ituss_key_g1

0x7340,	// (0x0001c757) cell_ituss_key_pane_g1_ParamLimits

0x7340,	// (0x0001c757) cell_ituss_key_pane_g1

0xf3e4,	// (0x000247fb) cell_ituss_key_pane_g2_ParamLimits

0xf3e4,	// (0x000247fb) cell_ituss_key_pane_g2

0x0005,

0xfebb,	// (0x000252d2) cell_ituss_key_pane_g_ParamLimits

0xfebb,	// (0x000252d2) cell_ituss_key_pane_g

0xf468,	// (0x0002487f) cell_ituss_key_t1_ParamLimits

0xf468,	// (0x0002487f) cell_ituss_key_t1

0xf4a2,	// (0x000248b9) cell_ituss_key_t2_ParamLimits

0xf4a2,	// (0x000248b9) cell_ituss_key_t2

0xf4d3,	// (0x000248ea) cell_ituss_key_t3_ParamLimits

0xf4d3,	// (0x000248ea) cell_ituss_key_t3

0xf4a2,	// (0x000248b9) cell_ituss_key_t4_ParamLimits

0xf4a2,	// (0x000248b9) cell_ituss_key_t4

0x0004,

0xfec8,	// (0x000252df) cell_ituss_key_t_ParamLimits

0xfec8,	// (0x000252df) cell_ituss_key_t

0xe133,	// (0x0002354a) cell_vkbss_key_3p_pane_g1

0xe13b,	// (0x00023552) cell_vkbss_key_3p_pane_g2

0xe143,	// (0x0002355a) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed3,	// (0x000252ea) cell_vkbss_key_3p_pane_g

0xcf9e,	// (0x000223b5) bg_popup_fep_char_preview_window_cp02

0x737e,	// (0x0001c795) popup_fep_char_pre_window_t1

0xdc87,	// (0x0002309e) main_ai5_sk_pane

0x6dc7,	// (0x0001c1de) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x6dd3,	// (0x0001c1ea) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x45ab,	// (0x000199c2) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x6de8,	// (0x0001c1ff) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe9f,	// (0x000252b6) cell_contacts_ai5_widget_pane_g_ParamLimits

0x6df4,	// (0x0001c20b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc6ad,	// (0x00021ac4) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe14b,	// (0x00023562) main_ai5_sk_pane_g1

0xac62,	// (0x00020079) popup_query_code_window_g1

0xe04f,	// (0x00023466) popup_fep_vkb_icf_pane

0x7228,	// (0x0001c63f) popup_fep_vtchi_icf_pane

0xc85d,	// (0x00021c74) bg_icf_pane

0xc85d,	// (0x00021c74) list_vkb_icf_pane

0x7395,	// (0x0001c7ac) bg_icf_pane_cp01

0x73a8,	// (0x0001c7bf) vtchi_icf_list_pane

0xe1a0,	// (0x000235b7) list_vkb_icf_pane_t1_ParamLimits

0xe1a0,	// (0x000235b7) list_vkb_icf_pane_t1

0x7432,	// (0x0001c849) vtchi_icf_list_pane_t1_ParamLimits

0x7432,	// (0x0001c849) vtchi_icf_list_pane_t1

0x71e5,	// (0x0001c5fc) popup_fep_ituss_window_ParamLimits

0x7228,	// (0x0001c63f) popup_fep_vtchi_icf_pane_ParamLimits

0x7251,	// (0x0001c668) ituss_keypad_pane_ParamLimits

0xf3bb,	// (0x000247d2) ituss_sks_pane

0xc85d,	// (0x00021c74) bg_icf_pane_ParamLimits

0xe034,	// (0x0002344b) icf_edit_indi_pane_ParamLimits

0xe034,	// (0x0002344b) icf_edit_indi_pane

0xc85d,	// (0x00021c74) list_vkb_icf_pane_ParamLimits

0x7395,	// (0x0001c7ac) bg_icf_pane_cp01_ParamLimits

0x71d0,	// (0x0001c5e7) icf_edit_indi_pane_cp01_ParamLimits

0x71d0,	// (0x0001c5e7) icf_edit_indi_pane_cp01

0x73b0,	// (0x0001c7c7) vtchi_query_pane

0x6532,	// (0x0001b949) icf_edit_indi_pane_g1_ParamLimits

0x6532,	// (0x0001b949) icf_edit_indi_pane_g1

0xe1b8,	// (0x000235cf) icf_edit_indi_pane_g2_ParamLimits

0xe1b8,	// (0x000235cf) icf_edit_indi_pane_g2

0x0001,

0xfefe,	// (0x00025315) icf_edit_indi_pane_g_ParamLimits

0xfefe,	// (0x00025315) icf_edit_indi_pane_g

0xe1cc,	// (0x000235e3) icf_edit_indi_pane_t1

0x7453,	// (0x0001c86a) bg_input_focus_pane_cp042

0xc585,	// (0x0002199c) vtchi_button_pane

0x745c,	// (0x0001c873) vtchi_query_pane_t1

0x746a,	// (0x0001c881) vtchi_query_pane_t2

0x7478,	// (0x0001c88f) vtchi_query_pane_t3

0x0002,

0xfeed,	// (0x00025304) vtchi_query_pane_t

0xe299,	// (0x000236b0) bg_button_pane_cp13

0x7486,	// (0x0001c89d) vtchi_button_pane_g1

0xf516,	// (0x0002492d) ituss_sks_pane_g1

0xf521,	// (0x00024938) ituss_sks_pane_g2

0x0001,

0xfef4,	// (0x0002530b) ituss_sks_pane_g

0x748e,	// (0x0001c8a5) ituss_sks_pane_t1

0x749c,	// (0x0001c8b3) ituss_sks_pane_t2

0x0001,

0xfef9,	// (0x00025310) ituss_sks_pane_t

0x3774,	// (0x00018b8b) indicator_nsta_pane_cp_g1

0x377d,	// (0x00018b94) indicator_nsta_pane_cp_g2

0x3785,	// (0x00018b9c) indicator_nsta_pane_cp_g3

0x378d,	// (0x00018ba4) indicator_nsta_pane_cp_g4

0x377d,	// (0x00018b94) indicator_nsta_pane_cp_g5

0x3785,	// (0x00018b9c) indicator_nsta_pane_cp_g6

0x0005,

0xfa78,	// (0x00024e8f) indicator_nsta_pane_cp_g

0xda60,	// (0x00022e77) cell_graphic2_pane_t2_ParamLimits

0xda60,	// (0x00022e77) cell_graphic2_pane_t2

0x0001,

0xfd8a,	// (0x000251a1) cell_graphic2_pane_t_ParamLimits

0xfd8a,	// (0x000251a1) cell_graphic2_pane_t

0xda97,	// (0x00022eae) cell_graphic2_control_pane_t1

0xa2bd,	// (0x0001f6d4) signal_pane_g3_ParamLimits

0xa2bd,	// (0x0001f6d4) signal_pane_g3

0xa2d1,	// (0x0001f6e8) signal_pane_g4_ParamLimits

0xa2d1,	// (0x0001f6e8) signal_pane_g4

0x719f,	// (0x0001c5b6) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x719f,	// (0x0001c5b6) cell_ai5_widget_list_row_pane_t3

0x7354,	// (0x0001c76b) cell_ituss_key_pane_t1_ParamLimits

0x7354,	// (0x0001c76b) cell_ituss_key_pane_t1

0x1385,	// (0x0001679c) form_field_data_wide_pane_vc_t2_ParamLimits

0x1385,	// (0x0001679c) form_field_data_wide_pane_vc_t2

0x1399,	// (0x000167b0) form_field_data_wide_pane_vc_t3_ParamLimits

0x1399,	// (0x000167b0) form_field_data_wide_pane_vc_t3

0x0002,

0xf7c4,	// (0x00024bdb) form_field_data_wide_pane_vc_t_ParamLimits

0xf7c4,	// (0x00024bdb) form_field_data_wide_pane_vc_t

0x341e,	// (0x00018835) form_field_slider_wide_pane_vc_t3_ParamLimits

0x341e,	// (0x00018835) form_field_slider_wide_pane_vc_t3

0x34fc,	// (0x00018913) form_field_popup_wide_pane_vc_t2_ParamLimits

0x34fc,	// (0x00018913) form_field_popup_wide_pane_vc_t2

0x3513,	// (0x0001892a) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3513,	// (0x0001892a) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa67,	// (0x00024e7e) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa67,	// (0x00024e7e) form_field_popup_wide_pane_vc_t

0x9281,	// (0x0001e698) aid_fshwr2_btn_pane_ParamLimits

0x9295,	// (0x0001e6ac) aid_fshwr2_syb_pane_ParamLimits

0x92a9,	// (0x0001e6c0) aid_fshwr2_txt_pane_ParamLimits

0xf363,	// (0x0002477a) fshwr2_bg_pane_ParamLimits

0x92b9,	// (0x0001e6d0) fshwr2_func_candi_pane_ParamLimits

0x92d9,	// (0x0001e6f0) fshwr2_hwr_syb_pane_ParamLimits

0x92fd,	// (0x0001e714) fshwr2_icf_pane_ParamLimits

0x338f,	// (0x000187a6) list_double_graphic_pane_vc_g4_ParamLimits

0x338f,	// (0x000187a6) list_double_graphic_pane_vc_g4

0xf404,	// (0x0002481b) cell_ituss_key_pane_g3_ParamLimits

0xf404,	// (0x0002481b) cell_ituss_key_pane_g3

0xf504,	// (0x0002491b) cell_ituss_key_t5_ParamLimits

0xf504,	// (0x0002491b) cell_ituss_key_t5

0xe05e,	// (0x00023475) popup_fep_vkbss_window_ParamLimits

0x66c0,	// (0x0001bad7) aid_cell_ai5_quarter

0xe1cc,	// (0x000235e3) icf_edit_indi_pane_t1_ParamLimits

0x97bc,	// (0x0001ebd3) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x97bc,	// (0x0001ebd3) aid_tch_indicator_popup_pane_cp2

0x97cf,	// (0x0001ebe6) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x97cf,	// (0x0001ebe6) aid_tch_query_popup_data_pane_cp2

0x173b,	// (0x00016b52) aid_tch_query_popup_pane_ParamLimits

0x173b,	// (0x00016b52) aid_tch_query_popup_pane

0x173b,	// (0x00016b52) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x173b,	// (0x00016b52) aid_tch_query_popup_data_pane_cp1

0xc85d,	// (0x00021c74) cell_fshwr2_syb_bg_pane_ParamLimits

0x93f0,	// (0x0001e807) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x9403,	// (0x0001e81a) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe04f,	// (0x00023466) popup_fep_vkb_icf_pane_ParamLimits

0x91e7,	// (0x0001e5fe) bg_popup_fep_char_preview_window_g10

0x67f5,	// (0x0001bc0c) cell_ai5_widget_pane_g11_ParamLimits

0x67f5,	// (0x0001bc0c) cell_ai5_widget_pane_g11

0x6801,	// (0x0001bc18) cell_ai5_widget_pane_g12_ParamLimits

0x6801,	// (0x0001bc18) cell_ai5_widget_pane_g12

0x680d,	// (0x0001bc24) cell_ai5_widget_pane_g13_ParamLimits

0x680d,	// (0x0001bc24) cell_ai5_widget_pane_g13

0x693c,	// (0x0001bd53) cell_ai5_widget_pane_t11_ParamLimits

0x693c,	// (0x0001bd53) cell_ai5_widget_pane_t11

0x694e,	// (0x0001bd65) cell_ai5_widget_pane_t12_ParamLimits

0x694e,	// (0x0001bd65) cell_ai5_widget_pane_t12

0xf410,	// (0x00024827) cell_ituss_key_pane_g4_ParamLimits

0xf410,	// (0x00024827) cell_ituss_key_pane_g4

0xf42c,	// (0x00024843) cell_ituss_key_pane_g5_ParamLimits

0xf42c,	// (0x00024843) cell_ituss_key_pane_g5

0xf448,	// (0x0002485f) cell_ituss_key_pane_g6_ParamLimits

0xf448,	// (0x0002485f) cell_ituss_key_pane_g6

0x11d7,	// (0x000165ee) bg_icf_pane_g1

0xe154,	// (0x0002356b) bg_icf_pane_g2

0xe15e,	// (0x00023575) bg_icf_pane_g3

0xe166,	// (0x0002357d) bg_icf_pane_g4

0xe170,	// (0x00023587) bg_icf_pane_g5

0xe17a,	// (0x00023591) bg_icf_pane_g6

0xe184,	// (0x0002359b) bg_icf_pane_g7

0xe18c,	// (0x000235a3) bg_icf_pane_g8

0xe196,	// (0x000235ad) bg_icf_pane_g9

0x0008,

0xfeda,	// (0x000252f1) bg_icf_pane_g

0x723e,	// (0x0001c655) popup_hyb_candi_window_ParamLimits

0x723e,	// (0x0001c655) popup_hyb_candi_window

0x12f7,	// (0x0001670e) bg_popup_sub_pane_cp01_ParamLimits

0x12f7,	// (0x0001670e) bg_popup_sub_pane_cp01

0x74d7,	// (0x0001c8ee) entry_hyb_candi_pane_ParamLimits

0x74d7,	// (0x0001c8ee) entry_hyb_candi_pane

0x74e6,	// (0x0001c8fd) grid_hyb_candi_pane_ParamLimits

0x74e6,	// (0x0001c8fd) grid_hyb_candi_pane

0x74fb,	// (0x0001c912) grid_hyb_phrase_pane_ParamLimits

0x74fb,	// (0x0001c912) grid_hyb_phrase_pane

0x750a,	// (0x0001c921) cell_hyb_candi_pane_ParamLimits

0x750a,	// (0x0001c921) cell_hyb_candi_pane

0x752d,	// (0x0001c944) cell_hyb_candi_scroll_pane

0xcb6d,	// (0x00021f84) cell_hyb_candi_pane_g1

0x7536,	// (0x0001c94d) cell_hyb_candi_pane_t1

0x7544,	// (0x0001c95b) cell_hyb_phrase_pane

0xcb6d,	// (0x00021f84) cell_hyb_phrase_pane_g1

0x754d,	// (0x0001c964) cell_hyb_phrase_pane_t1

0x755b,	// (0x0001c972) entry_hyb_candi_pane_t1

0xcf9e,	// (0x000223b5) input_focus_pane_cp06

0x7569,	// (0x0001c980) cell_hyb_candi_scroll_pane_g1

0x7571,	// (0x0001c988) cell_hyb_candi_scroll_pane_g1_aid

0x7579,	// (0x0001c990) cell_hyb_candi_scroll_pane_g2

0x7581,	// (0x0001c998) cell_hyb_candi_scroll_pane_g2_aid

0x7589,	// (0x0001c9a0) cell_hyb_candi_scroll_pane_g3

0x7591,	// (0x0001c9a8) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal
