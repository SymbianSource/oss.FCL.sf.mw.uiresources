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

#include "aknlayoutscalable_abrw_pqp_av_qvga_prt_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0002e780 };

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
0x9bb9,	// (0x00038339) Screen

0x9bc3,	// (0x00038343) application_window_ParamLimits

0x9bc3,	// (0x00038343) application_window

0x2061,	// (0x000307e1) screen_g1

0x9c0c,	// (0x0003838c) area_bottom_pane_ParamLimits

0x9c0c,	// (0x0003838c) area_bottom_pane

0x2136,	// (0x000308b6) area_top_pane_ParamLimits

0x2136,	// (0x000308b6) area_top_pane

0x9cc4,	// (0x00038444) main_pane_ParamLimits

0x9cc4,	// (0x00038444) main_pane

0x21ae,	// (0x0003092e) misc_graphics

0xae16,	// (0x00039596) battery_pane_ParamLimits

0xae16,	// (0x00039596) battery_pane

0x7042,	// (0x000357c2) bg_status_flat_pane_g8

0x704a,	// (0x000357ca) bg_status_flat_pane_g9

0x67a2,	// (0x00034f22) context_pane_ParamLimits

0x67a2,	// (0x00034f22) context_pane

0xaf48,	// (0x000396c8) navi_pane_ParamLimits

0xaf48,	// (0x000396c8) navi_pane

0xafb4,	// (0x00039734) signal_pane_ParamLimits

0xafb4,	// (0x00039734) signal_pane

0x0008,

0xf88a,	// (0x0003e00a) bg_status_flat_pane_g

0xb015,	// (0x00039795) status_pane_g1_ParamLimits

0xb015,	// (0x00039795) status_pane_g1

0xb021,	// (0x000397a1) status_pane_g2_ParamLimits

0xb021,	// (0x000397a1) status_pane_g2

0x6808,	// (0x00034f88) status_pane_g3_ParamLimits

0x6808,	// (0x00034f88) status_pane_g3

0x0004,

0xf7bd,	// (0x0003df3d) status_pane_g_ParamLimits

0xf7bd,	// (0x0003df3d) status_pane_g

0xb02d,	// (0x000397ad) title_pane_ParamLimits

0xb02d,	// (0x000397ad) title_pane

0xb06a,	// (0x000397ea) uni_indicator_pane_ParamLimits

0xb06a,	// (0x000397ea) uni_indicator_pane

0x6604,	// (0x00034d84) bg_list_pane_ParamLimits

0x6604,	// (0x00034d84) bg_list_pane

0xeec5,	// (0x0003d645) find_pane

0xaa22,	// (0x000391a2) listscroll_app_pane_ParamLimits

0xaa22,	// (0x000391a2) listscroll_app_pane

0x6624,	// (0x00034da4) listscroll_form_pane

0xeecd,	// (0x0003d64d) listscroll_gen_pane_ParamLimits

0xeecd,	// (0x0003d64d) listscroll_gen_pane

0x6624,	// (0x00034da4) listscroll_set_pane

0xa230,	// (0x000389b0) main_idle_act_pane

0x63e2,	// (0x00034b62) main_idle_trad_pane

0x63e2,	// (0x00034b62) main_list_empty_pane

0x5d20,	// (0x000344a0) main_midp_pane

0x663e,	// (0x00034dbe) main_pane_g1_ParamLimits

0x663e,	// (0x00034dbe) main_pane_g1

0xaa2e,	// (0x000391ae) popup_ai_message_window_ParamLimits

0xaa2e,	// (0x000391ae) popup_ai_message_window

0xaaa2,	// (0x00039222) popup_fep_china_uni_window_ParamLimits

0xaaa2,	// (0x00039222) popup_fep_china_uni_window

0x666e,	// (0x00034dee) popup_fep_japan_candidate_window_ParamLimits

0x666e,	// (0x00034dee) popup_fep_japan_candidate_window

0x668c,	// (0x00034e0c) popup_fep_japan_predictive_window_ParamLimits

0x668c,	// (0x00034e0c) popup_fep_japan_predictive_window

0xaae0,	// (0x00039260) popup_find_window

0xaaed,	// (0x0003926d) popup_grid_graphic_window_ParamLimits

0xaaed,	// (0x0003926d) popup_grid_graphic_window

0x66b8,	// (0x00034e38) popup_large_graphic_colour_window

0xab0b,	// (0x0003928b) popup_menu_window_ParamLimits

0xab0b,	// (0x0003928b) popup_menu_window

0xac43,	// (0x000393c3) popup_note_image_window

0xac31,	// (0x000393b1) popup_note_wait_window_ParamLimits

0xac31,	// (0x000393b1) popup_note_wait_window

0xac31,	// (0x000393b1) popup_note_window_ParamLimits

0xac31,	// (0x000393b1) popup_note_window

0xac97,	// (0x00039417) popup_query_code_window_ParamLimits

0xac97,	// (0x00039417) popup_query_code_window

0x66d7,	// (0x00034e57) popup_query_data_code_window_ParamLimits

0x66d7,	// (0x00034e57) popup_query_data_code_window

0xaca9,	// (0x00039429) popup_query_data_window_ParamLimits

0xaca9,	// (0x00039429) popup_query_data_window

0xacbf,	// (0x0003943f) popup_query_sat_info_window_ParamLimits

0xacbf,	// (0x0003943f) popup_query_sat_info_window

0xacf0,	// (0x00039470) popup_snote_single_graphic_window_ParamLimits

0xacf0,	// (0x00039470) popup_snote_single_graphic_window

0xacf0,	// (0x00039470) popup_snote_single_text_window_ParamLimits

0xacf0,	// (0x00039470) popup_snote_single_text_window

0x66ec,	// (0x00034e6c) popup_sub_window_general

0x672e,	// (0x00034eae) popup_window_general_ParamLimits

0x672e,	// (0x00034eae) popup_window_general

0x6741,	// (0x00034ec1) power_save_pane

0xa8a6,	// (0x00039026) control_pane_g1_ParamLimits

0xa8a6,	// (0x00039026) control_pane_g1

0xa8c7,	// (0x00039047) control_pane_g2_ParamLimits

0xa8c7,	// (0x00039047) control_pane_g2

0x65ee,	// (0x00034d6e) control_pane_g3_ParamLimits

0x65ee,	// (0x00034d6e) control_pane_g3

0x0007,

0xf7a5,	// (0x0003df25) control_pane_g_ParamLimits

0xf7a5,	// (0x0003df25) control_pane_g

0xa931,	// (0x000390b1) control_pane_t1_ParamLimits

0xa931,	// (0x000390b1) control_pane_t1

0xa983,	// (0x00039103) control_pane_t2_ParamLimits

0xa983,	// (0x00039103) control_pane_t2

0x0002,

0xf7b6,	// (0x0003df36) control_pane_t_ParamLimits

0xf7b6,	// (0x0003df36) control_pane_t

0x6511,	// (0x00034c91) navi_navi_volume_pane_cp1

0x651a,	// (0x00034c9a) status_small_icon_pane

0x6522,	// (0x00034ca2) status_small_pane_g1_ParamLimits

0x6522,	// (0x00034ca2) status_small_pane_g1

0x6556,	// (0x00034cd6) status_small_pane_g2_ParamLimits

0x6556,	// (0x00034cd6) status_small_pane_g2

0x6562,	// (0x00034ce2) status_small_pane_g3_ParamLimits

0x6562,	// (0x00034ce2) status_small_pane_g3

0x656e,	// (0x00034cee) status_small_pane_g4_ParamLimits

0x656e,	// (0x00034cee) status_small_pane_g4

0x657a,	// (0x00034cfa) status_small_pane_g5_ParamLimits

0x657a,	// (0x00034cfa) status_small_pane_g5

0x6587,	// (0x00034d07) status_small_pane_g6_ParamLimits

0x6587,	// (0x00034d07) status_small_pane_g6

0x0007,

0xf794,	// (0x0003df14) status_small_pane_g_ParamLimits

0xf794,	// (0x0003df14) status_small_pane_g

0x65b7,	// (0x00034d37) status_small_pane_t1

0x65da,	// (0x00034d5a) status_small_wait_pane_ParamLimits

0x65da,	// (0x00034d5a) status_small_wait_pane

0xa534,	// (0x00038cb4) aid_levels_signal_ParamLimits

0xa534,	// (0x00038cb4) aid_levels_signal

0xa545,	// (0x00038cc5) signal_pane_g1_ParamLimits

0xa545,	// (0x00038cc5) signal_pane_g1

0xa55b,	// (0x00038cdb) signal_pane_g2_ParamLimits

0xa55b,	// (0x00038cdb) signal_pane_g2

0x0001,

0xf729,	// (0x0003dea9) signal_pane_g_ParamLimits

0xf729,	// (0x0003dea9) signal_pane_g

0x5f87,	// (0x00034707) context_pane_g1

0x9ec3,	// (0x00038643) title_pane_g1

0x9eed,	// (0x0003866d) title_pane_t1

0x2338,	// (0x00030ab8) title_pane_t2

0x235e,	// (0x00030ade) title_pane_t3

0x0002,

0xf573,	// (0x0003dcf3) title_pane_t

0xb080,	// (0x00039800) aid_levels_battery_ParamLimits

0xb080,	// (0x00039800) aid_levels_battery

0xb093,	// (0x00039813) battery_pane_g1_ParamLimits

0xb093,	// (0x00039813) battery_pane_g1

0xb0a8,	// (0x00039828) battery_pane_g2_ParamLimits

0xb0a8,	// (0x00039828) battery_pane_g2

0x0001,

0xf7c8,	// (0x0003df48) battery_pane_g_ParamLimits

0xf7c8,	// (0x0003df48) battery_pane_g

0xb4f6,	// (0x00039c76) uni_indicator_pane_g1

0xb50b,	// (0x00039c8b) uni_indicator_pane_g2

0xb521,	// (0x00039ca1) uni_indicator_pane_g3

0x0005,

0xf932,	// (0x0003e0b2) uni_indicator_pane_g

0x2d3f,	// (0x000314bf) navi_icon_pane_ParamLimits

0x2d3f,	// (0x000314bf) navi_icon_pane

0x21ae,	// (0x0003092e) navi_midp_pane

0x21ae,	// (0x0003092e) navi_navi_pane

0x2d3f,	// (0x000314bf) navi_text_pane_ParamLimits

0x2d3f,	// (0x000314bf) navi_text_pane

0x2061,	// (0x000307e1) status_small_wait_pane_g1

0x28a3,	// (0x00031023) status_small_wait_pane_g2

0x0001,

0xf92d,	// (0x0003e0ad) status_small_wait_pane_g

0x7ce8,	// (0x00036468) navi_navi_icon_text_pane

0x7d02,	// (0x00036482) navi_navi_pane_g1_ParamLimits

0x7d02,	// (0x00036482) navi_navi_pane_g1

0x7cf0,	// (0x00036470) navi_navi_pane_g2_ParamLimits

0x7cf0,	// (0x00036470) navi_navi_pane_g2

0x0001,

0xf8fb,	// (0x0003e07b) navi_navi_pane_g_ParamLimits

0xf8fb,	// (0x0003e07b) navi_navi_pane_g

0x7d14,	// (0x00036494) navi_navi_tabs_pane

0x7ce8,	// (0x00036468) navi_navi_text_pane

0x7ce8,	// (0x00036468) navi_navi_volume_pane

0x776d,	// (0x00035eed) navi_text_pane_t1

0x7761,	// (0x00035ee1) navi_icon_pane_g1

0x76b5,	// (0x00035e35) navi_navi_text_pane_t1

0xb4c0,	// (0x00039c40) navi_navi_volume_pane_g1

0xb4c8,	// (0x00039c48) volume_small_pane

0xb432,	// (0x00039bb2) navi_navi_icon_text_pane_g1

0xb43a,	// (0x00039bba) navi_navi_icon_text_pane_t1

0x708a,	// (0x0003580a) navi_tabs_2_long_pane

0x708a,	// (0x0003580a) navi_tabs_2_pane

0x708a,	// (0x0003580a) navi_tabs_3_long_pane

0x708a,	// (0x0003580a) navi_tabs_3_pane

0x708a,	// (0x0003580a) navi_tabs_4_pane

0xb412,	// (0x00039b92) tabs_2_active_pane_ParamLimits

0xb412,	// (0x00039b92) tabs_2_active_pane

0xb422,	// (0x00039ba2) tabs_2_passive_pane_ParamLimits

0xb422,	// (0x00039ba2) tabs_2_passive_pane

0xb3e0,	// (0x00039b60) tabs_3_active_pane_ParamLimits

0xb3e0,	// (0x00039b60) tabs_3_active_pane

0xb3f0,	// (0x00039b70) tabs_3_passive_pane_ParamLimits

0xb3f0,	// (0x00039b70) tabs_3_passive_pane

0xb401,	// (0x00039b81) tabs_3_passive_pane_cp_ParamLimits

0xb401,	// (0x00039b81) tabs_3_passive_pane_cp

0xb39c,	// (0x00039b1c) tabs_4_active_pane_ParamLimits

0xb39c,	// (0x00039b1c) tabs_4_active_pane

0xb3ad,	// (0x00039b2d) tabs_4_passive_pane_ParamLimits

0xb3ad,	// (0x00039b2d) tabs_4_passive_pane

0xb3be,	// (0x00039b3e) tabs_4_passive_pane_cp_ParamLimits

0xb3be,	// (0x00039b3e) tabs_4_passive_pane_cp

0xb3cf,	// (0x00039b4f) tabs_4_passive_pane_cp2_ParamLimits

0xb3cf,	// (0x00039b4f) tabs_4_passive_pane_cp2

0xb37c,	// (0x00039afc) tabs_2_long_active_pane_ParamLimits

0xb37c,	// (0x00039afc) tabs_2_long_active_pane

0xb38c,	// (0x00039b0c) tabs_2_long_passive_pane_ParamLimits

0xb38c,	// (0x00039b0c) tabs_2_long_passive_pane

0xb347,	// (0x00039ac7) tabs_3_long_active_pane_ParamLimits

0xb347,	// (0x00039ac7) tabs_3_long_active_pane

0xb358,	// (0x00039ad8) tabs_3_long_passive_pane_ParamLimits

0xb358,	// (0x00039ad8) tabs_3_long_passive_pane

0xb36b,	// (0x00039aeb) tabs_3_long_passive_pane_cp_ParamLimits

0xb36b,	// (0x00039aeb) tabs_3_long_passive_pane_cp

0xb2ed,	// (0x00039a6d) volume_small_pane_g1

0xb2f6,	// (0x00039a76) volume_small_pane_g2

0xb2ff,	// (0x00039a7f) volume_small_pane_g3

0xb308,	// (0x00039a88) volume_small_pane_g4

0xb311,	// (0x00039a91) volume_small_pane_g5

0xb31a,	// (0x00039a9a) volume_small_pane_g6

0xb323,	// (0x00039aa3) volume_small_pane_g7

0xb32c,	// (0x00039aac) volume_small_pane_g8

0xb335,	// (0x00039ab5) volume_small_pane_g9

0xb33e,	// (0x00039abe) volume_small_pane_g10

0x0009,

0xf8c7,	// (0x0003e047) volume_small_pane_g

0x23ba,	// (0x00030b3a) bg_active_tab_pane_cp2_ParamLimits

0x23ba,	// (0x00030b3a) bg_active_tab_pane_cp2

0x237e,	// (0x00030afe) tabs_3_active_pane_g1

0x9f55,	// (0x000386d5) tabs_3_active_pane_t1

0x23ba,	// (0x00030b3a) bg_passive_tab_pane_cp2_ParamLimits

0x23ba,	// (0x00030b3a) bg_passive_tab_pane_cp2

0x237e,	// (0x00030afe) tabs_3_passive_pane_g1

0x9f55,	// (0x000386d5) tabs_3_passive_pane_t1

0x23ba,	// (0x00030b3a) bg_active_tab_pane_cp3_ParamLimits

0x23ba,	// (0x00030b3a) bg_active_tab_pane_cp3

0x9f67,	// (0x000386e7) tabs_4_active_pane_g1

0x9f6f,	// (0x000386ef) tabs_4_active_pane_t1

0x23ba,	// (0x00030b3a) bg_passive_tab_pane_cp3_ParamLimits

0x23ba,	// (0x00030b3a) bg_passive_tab_pane_cp3

0x9f67,	// (0x000386e7) tabs_4_1_passive_pane_g1

0x9f6f,	// (0x000386ef) tabs_4_1_passive_pane_t1

0x5d20,	// (0x000344a0) list_highlight_pane_cp2

0xb63f,	// (0x00039dbf) list_set_pane_ParamLimits

0xb63f,	// (0x00039dbf) list_set_pane

0xb6cd,	// (0x00039e4d) main_pane_set_t1_ParamLimits

0xb6cd,	// (0x00039e4d) main_pane_set_t1

0xb6ed,	// (0x00039e6d) main_pane_set_t2_ParamLimits

0xb6ed,	// (0x00039e6d) main_pane_set_t2

0xb6ff,	// (0x00039e7f) main_pane_set_t3_ParamLimits

0xb6ff,	// (0x00039e7f) main_pane_set_t3

0xb711,	// (0x00039e91) main_pane_set_t4_ParamLimits

0xb711,	// (0x00039e91) main_pane_set_t4

0x0003,

0xf997,	// (0x0003e117) main_pane_set_t_ParamLimits

0xf997,	// (0x0003e117) main_pane_set_t

0xb723,	// (0x00039ea3) setting_code_pane

0xb72b,	// (0x00039eab) setting_slider_graphic_pane

0xb72b,	// (0x00039eab) setting_slider_pane

0xb72b,	// (0x00039eab) setting_text_pane

0xb72b,	// (0x00039eab) setting_volume_pane

0x9f81,	// (0x00038701) volume_set_pane

0x23ba,	// (0x00030b3a) bg_set_opt_pane_cp

0x9f89,	// (0x00038709) setting_slider_pane_t1

0x9f9f,	// (0x0003871f) setting_slider_pane_t2

0x9fb8,	// (0x00038738) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0003dcfa) setting_slider_pane_t

0x9fcf,	// (0x0003874f) slider_set_pane

0x21ae,	// (0x0003092e) bg_set_opt_pane_cp2

0x2424,	// (0x00030ba4) setting_slider_graphic_pane_g1

0x9fe5,	// (0x00038765) setting_slider_graphic_pane_t1

0x9ff4,	// (0x00038774) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0003dd01) setting_slider_graphic_pane_t

0xa003,	// (0x00038783) slider_set_pane_cp

0x21ae,	// (0x0003092e) input_focus_pane_cp1

0x7bbd,	// (0x0003633d) list_set_text_pane

0x2061,	// (0x000307e1) setting_text_pane_g1

0x21ae,	// (0x0003092e) input_focus_pane_cp2

0x2061,	// (0x000307e1) setting_code_pane_g1

0x2453,	// (0x00030bd3) setting_code_pane_t1

0xe6e0,	// (0x0003ce60) set_text_pane_t1_ParamLimits

0xe6e0,	// (0x0003ce60) set_text_pane_t1

0x2cee,	// (0x0003146e) set_opt_bg_pane_g1

0x2cf6,	// (0x00031476) set_opt_bg_pane_g2

0xb5ff,	// (0x00039d7f) set_opt_bg_pane_g3

0x2d06,	// (0x00031486) set_opt_bg_pane_g4

0x2d0e,	// (0x0003148e) set_opt_bg_pane_g5

0x2d16,	// (0x00031496) set_opt_bg_pane_g6

0xb607,	// (0x00039d87) set_opt_bg_pane_g7

0xb60f,	// (0x00039d8f) set_opt_bg_pane_g8

0xb617,	// (0x00039d97) set_opt_bg_pane_g9

0x0008,

0xf984,	// (0x0003e104) set_opt_bg_pane_g

0x7bb0,	// (0x00036330) slider_set_pane_g1

0xb59b,	// (0x00039d1b) slider_set_pane_g2

0x0006,

0xf975,	// (0x0003e0f5) slider_set_pane_g

0xb537,	// (0x00039cb7) volume_set_pane_g1

0xb53f,	// (0x00039cbf) volume_set_pane_g2

0xb547,	// (0x00039cc7) volume_set_pane_g3

0xb54f,	// (0x00039ccf) volume_set_pane_g4

0xb557,	// (0x00039cd7) volume_set_pane_g5

0xb55f,	// (0x00039cdf) volume_set_pane_g6

0xb567,	// (0x00039ce7) volume_set_pane_g7

0xb56f,	// (0x00039cef) volume_set_pane_g8

0xb577,	// (0x00039cf7) volume_set_pane_g9

0xb57f,	// (0x00039cff) volume_set_pane_g10

0x0009,

0xf94d,	// (0x0003e0cd) volume_set_pane_g

0xa00b,	// (0x0003878b) indicator_pane_ParamLimits

0xa00b,	// (0x0003878b) indicator_pane

0xa017,	// (0x00038797) main_idle_pane_g2_ParamLimits

0xa017,	// (0x00038797) main_idle_pane_g2

0xa03b,	// (0x000387bb) main_pane_idle_g1_ParamLimits

0xa03b,	// (0x000387bb) main_pane_idle_g1

0x24de,	// (0x00030c5e) popup_clock_digital_analogue_window_ParamLimits

0x24de,	// (0x00030c5e) popup_clock_digital_analogue_window

0xa048,	// (0x000387c8) soft_indicator_pane_ParamLimits

0xa048,	// (0x000387c8) soft_indicator_pane

0xa054,	// (0x000387d4) wallpaper_pane_ParamLimits

0xa054,	// (0x000387d4) wallpaper_pane

0x2061,	// (0x000307e1) wallpaper_pane_g1

0xa060,	// (0x000387e0) indicator_pane_g1_ParamLimits

0xa060,	// (0x000387e0) indicator_pane_g1

0x7cb7,	// (0x00036437) navi_navi_icon_text_pane_srt_g1

0x2551,	// (0x00030cd1) soft_indicator_pane_t1

0x256b,	// (0x00030ceb) aid_ps_area_pane

0xa06c,	// (0x000387ec) aid_ps_clock_pane

0x2588,	// (0x00030d08) aid_ps_indicator_pane

0x2594,	// (0x00030d14) indicator_ps_pane_ParamLimits

0x2594,	// (0x00030d14) indicator_ps_pane

0x25a3,	// (0x00030d23) power_save_pane_g1_ParamLimits

0x25a3,	// (0x00030d23) power_save_pane_g1

0x25af,	// (0x00030d2f) power_save_pane_g2_ParamLimits

0x25af,	// (0x00030d2f) power_save_pane_g2

0x9bd1,	// (0x00038351) aid_navinavi_width_pane

0x256b,	// (0x00030ceb) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0003dd06) power_save_pane_g_ParamLimits

0xf586,	// (0x0003dd06) power_save_pane_g

0x25bd,	// (0x00030d3d) power_save_pane_t1_ParamLimits

0x25bd,	// (0x00030d3d) power_save_pane_t1

0xa06c,	// (0x000387ec) aid_ps_clock_pane_ParamLimits

0x2588,	// (0x00030d08) aid_ps_indicator_pane_ParamLimits

0x25cf,	// (0x00030d4f) power_save_pane_t4_ParamLimits

0x25cf,	// (0x00030d4f) power_save_pane_t4

0x0001,

0xf58b,	// (0x0003dd0b) power_save_pane_t_ParamLimits

0xf58b,	// (0x0003dd0b) power_save_pane_t

0x25f9,	// (0x00030d79) power_save_t3_ParamLimits

0x25f9,	// (0x00030d79) power_save_t3

0x25e4,	// (0x00030d64) power_save_t2_ParamLimits

0x25e4,	// (0x00030d64) power_save_t2

0x260e,	// (0x00030d8e) indicator_ps_pane_g1

0xa078,	// (0x000387f8) ai_gene_pane_ParamLimits

0xa078,	// (0x000387f8) ai_gene_pane

0xa084,	// (0x00038804) ai_links_pane_ParamLimits

0xa084,	// (0x00038804) ai_links_pane

0xa090,	// (0x00038810) indicator_pane_cp1_ParamLimits

0xa090,	// (0x00038810) indicator_pane_cp1

0xa09c,	// (0x0003881c) main_pane_idle_g1_cp_ParamLimits

0xa09c,	// (0x0003881c) main_pane_idle_g1_cp

0x2667,	// (0x00030de7) popup_ai_links_title_window

0xa0a8,	// (0x00038828) soft_indicator_pane_cp1_ParamLimits

0xa0a8,	// (0x00038828) soft_indicator_pane_cp1

0x79f2,	// (0x00036172) ai_links_pane_g1

0x79fb,	// (0x0003617b) grid_ai_links_pane

0xb4ed,	// (0x00039c6d) ai_gene_pane_1

0x79e0,	// (0x00036160) ai_gene_pane_2

0x79e9,	// (0x00036169) list_highlight_pane_cp4

0xb4d1,	// (0x00039c51) cell_ai_link_pane_ParamLimits

0xb4d1,	// (0x00039c51) cell_ai_link_pane

0x79d8,	// (0x00036158) cell_ai_link_pane_g1

0x28a3,	// (0x00031023) cell_ai_link_pane_g2

0x0001,

0xf928,	// (0x0003e0a8) cell_ai_link_pane_g

0x21ae,	// (0x0003092e) grid_highlight_cp2

0x21ae,	// (0x0003092e) bg_popup_sub_pane_cp1

0x2692,	// (0x00030e12) popup_ai_links_title_window_t1

0x792a,	// (0x000360aa) ai_gene_pane_1_g1_ParamLimits

0x792a,	// (0x000360aa) ai_gene_pane_1_g1

0x7936,	// (0x000360b6) ai_gene_pane_1_g2_ParamLimits

0x7936,	// (0x000360b6) ai_gene_pane_1_g2

0x0001,

0xf91e,	// (0x0003e09e) ai_gene_pane_1_g_ParamLimits

0xf91e,	// (0x0003e09e) ai_gene_pane_1_g

0x7943,	// (0x000360c3) ai_gene_pane_1_t1_ParamLimits

0x7943,	// (0x000360c3) ai_gene_pane_1_t1

0x7977,	// (0x000360f7) grid_ai_soft_ind_pane

0x7915,	// (0x00036095) ai_gene_pane_2_t1_ParamLimits

0x7915,	// (0x00036095) ai_gene_pane_2_t1

0xa0b4,	// (0x00038834) main_pane_empty_t1_ParamLimits

0xa0b4,	// (0x00038834) main_pane_empty_t1

0xa0d1,	// (0x00038851) main_pane_empty_t2_ParamLimits

0xa0d1,	// (0x00038851) main_pane_empty_t2

0xa0e9,	// (0x00038869) main_pane_empty_t3_ParamLimits

0xa0e9,	// (0x00038869) main_pane_empty_t3

0xa0fc,	// (0x0003887c) main_pane_empty_t4_ParamLimits

0xa0fc,	// (0x0003887c) main_pane_empty_t4

0xa10f,	// (0x0003888f) main_pane_empty_t5_ParamLimits

0xa10f,	// (0x0003888f) main_pane_empty_t5

0x0004,

0xf590,	// (0x0003dd10) main_pane_empty_t_ParamLimits

0xf590,	// (0x0003dd10) main_pane_empty_t

0x2d3f,	// (0x000314bf) bg_popup_window_pane_ParamLimits

0x2d3f,	// (0x000314bf) bg_popup_window_pane

0x76c4,	// (0x00035e44) find_popup_pane_cp2_ParamLimits

0x76c4,	// (0x00035e44) find_popup_pane_cp2

0x76d0,	// (0x00035e50) heading_pane_ParamLimits

0x76d0,	// (0x00035e50) heading_pane

0x21ae,	// (0x0003092e) bg_popup_sub_pane

0xb454,	// (0x00039bd4) bg_popup_window_pane_g1_ParamLimits

0xb454,	// (0x00039bd4) bg_popup_window_pane_g1

0xb460,	// (0x00039be0) bg_popup_window_pane_g2_ParamLimits

0xb460,	// (0x00039be0) bg_popup_window_pane_g2

0xb46c,	// (0x00039bec) bg_popup_window_pane_g3_ParamLimits

0xb46c,	// (0x00039bec) bg_popup_window_pane_g3

0xb478,	// (0x00039bf8) bg_popup_window_pane_g4_ParamLimits

0xb478,	// (0x00039bf8) bg_popup_window_pane_g4

0xb484,	// (0x00039c04) bg_popup_window_pane_g5_ParamLimits

0xb484,	// (0x00039c04) bg_popup_window_pane_g5

0xb490,	// (0x00039c10) bg_popup_window_pane_g6_ParamLimits

0xb490,	// (0x00039c10) bg_popup_window_pane_g6

0xb49c,	// (0x00039c1c) bg_popup_window_pane_g7_ParamLimits

0xb49c,	// (0x00039c1c) bg_popup_window_pane_g7

0xb4a8,	// (0x00039c28) bg_popup_window_pane_g8_ParamLimits

0xb4a8,	// (0x00039c28) bg_popup_window_pane_g8

0xb4b4,	// (0x00039c34) bg_popup_window_pane_g9_ParamLimits

0xb4b4,	// (0x00039c34) bg_popup_window_pane_g9

0x76a9,	// (0x00035e29) bg_popup_window_pane_g10_ParamLimits

0x76a9,	// (0x00035e29) bg_popup_window_pane_g10

0x0009,

0xf8e6,	// (0x0003e066) bg_popup_window_pane_g_ParamLimits

0xf8e6,	// (0x0003e066) bg_popup_window_pane_g

0x7660,	// (0x00035de0) bg_popup_heading_pane_ParamLimits

0x7660,	// (0x00035de0) bg_popup_heading_pane

0xb861,	// (0x00039fe1) tabs_4_passive_pane_cp_srt_ParamLimits

0xb861,	// (0x00039fe1) tabs_4_passive_pane_cp_srt

0xb873,	// (0x00039ff3) tabs_4_passive_pane_srt_ParamLimits

0x7674,	// (0x00035df4) heading_pane_g2

0xb873,	// (0x00039ff3) tabs_4_passive_pane_srt

0x5d20,	// (0x000344a0) bg_passive_tab_pane_cp3_srt_ParamLimits

0x5d20,	// (0x000344a0) bg_passive_tab_pane_cp3_srt

0x767c,	// (0x00035dfc) heading_pane_t1_ParamLimits

0x767c,	// (0x00035dfc) heading_pane_t1

0x7693,	// (0x00035e13) heading_pane_t2_ParamLimits

0x7693,	// (0x00035e13) heading_pane_t2

0x0001,

0xf8e1,	// (0x0003e061) heading_pane_t_ParamLimits

0xf8e1,	// (0x0003e061) heading_pane_t

0x700a,	// (0x0003578a) bg_popup_heading_pane_g1

0x709b,	// (0x0003581b) bg_popup_heading_pane_g2

0x70a3,	// (0x00035823) bg_popup_heading_pane_g3

0x70ab,	// (0x0003582b) bg_popup_heading_pane_g4

0x70b3,	// (0x00035833) bg_popup_heading_pane_g5

0x70bb,	// (0x0003583b) bg_popup_heading_pane_g6

0x70c3,	// (0x00035843) bg_popup_heading_pane_g7

0x70cb,	// (0x0003584b) bg_popup_heading_pane_g8

0x70d3,	// (0x00035853) bg_popup_heading_pane_g9

0x0008,

0xf89d,	// (0x0003e01d) bg_popup_heading_pane_g

0x68f0,	// (0x00035070) bg_popup_sub_pane_g1

0x68f8,	// (0x00035078) bg_popup_sub_pane_g2

0x6900,	// (0x00035080) bg_popup_sub_pane_g3

0x6908,	// (0x00035088) bg_popup_sub_pane_g4

0x6910,	// (0x00035090) bg_popup_sub_pane_g5

0x6918,	// (0x00035098) bg_popup_sub_pane_g6

0x6920,	// (0x000350a0) bg_popup_sub_pane_g7

0x6928,	// (0x000350a8) bg_popup_sub_pane_g8

0x6930,	// (0x000350b0) bg_popup_sub_pane_g9

0x0008,

0xf877,	// (0x0003dff7) bg_popup_sub_pane_g

0x2370,	// (0x00030af0) bg_popup_window_pane_cp5_ParamLimits

0x2370,	// (0x00030af0) bg_popup_window_pane_cp5

0x271d,	// (0x00030e9d) popup_note_window_g1_ParamLimits

0x271d,	// (0x00030e9d) popup_note_window_g1

0x2729,	// (0x00030ea9) popup_note_window_t1_ParamLimits

0x2729,	// (0x00030ea9) popup_note_window_t1

0x273f,	// (0x00030ebf) popup_note_window_t2_ParamLimits

0x273f,	// (0x00030ebf) popup_note_window_t2

0x2755,	// (0x00030ed5) popup_note_window_t3_ParamLimits

0x2755,	// (0x00030ed5) popup_note_window_t3

0x276b,	// (0x00030eeb) popup_note_window_t4_ParamLimits

0x276b,	// (0x00030eeb) popup_note_window_t4

0x2793,	// (0x00030f13) popup_note_window_t5_ParamLimits

0x2793,	// (0x00030f13) popup_note_window_t5

0x0004,

0xf59b,	// (0x0003dd1b) popup_note_window_t_ParamLimits

0xf59b,	// (0x0003dd1b) popup_note_window_t

0x27b7,	// (0x00030f37) bg_popup_window_pane_cp6_ParamLimits

0x27b7,	// (0x00030f37) bg_popup_window_pane_cp6

0x6f86,	// (0x00035706) popup_note_image_window_g1_ParamLimits

0x6f86,	// (0x00035706) popup_note_image_window_g1

0x6f92,	// (0x00035712) popup_note_image_window_g2_ParamLimits

0x6f92,	// (0x00035712) popup_note_image_window_g2

0x0001,

0xf86b,	// (0x0003dfeb) popup_note_image_window_g_ParamLimits

0xf86b,	// (0x0003dfeb) popup_note_image_window_g

0x6fab,	// (0x0003572b) popup_note_image_window_t1_ParamLimits

0x6fab,	// (0x0003572b) popup_note_image_window_t1

0x6fc4,	// (0x00035744) popup_note_image_window_t2_ParamLimits

0x6fc4,	// (0x00035744) popup_note_image_window_t2

0x6fdd,	// (0x0003575d) popup_note_image_window_t3_ParamLimits

0x6fdd,	// (0x0003575d) popup_note_image_window_t3

0x0002,

0xf870,	// (0x0003dff0) popup_note_image_window_t_ParamLimits

0xf870,	// (0x0003dff0) popup_note_image_window_t

0x6e71,	// (0x000355f1) bg_popup_window_pane_cp7_ParamLimits

0x6e71,	// (0x000355f1) bg_popup_window_pane_cp7

0x6ea1,	// (0x00035621) popup_note_wait_window_g1_ParamLimits

0x6ea1,	// (0x00035621) popup_note_wait_window_g1

0x6ead,	// (0x0003562d) popup_note_wait_window_g2_ParamLimits

0x6ead,	// (0x0003562d) popup_note_wait_window_g2

0x0002,

0xf859,	// (0x0003dfd9) popup_note_wait_window_g_ParamLimits

0xf859,	// (0x0003dfd9) popup_note_wait_window_g

0x6ec5,	// (0x00035645) popup_note_wait_window_t1_ParamLimits

0x6ec5,	// (0x00035645) popup_note_wait_window_t1

0x6eec,	// (0x0003566c) popup_note_wait_window_t2_ParamLimits

0x6eec,	// (0x0003566c) popup_note_wait_window_t2

0x6f09,	// (0x00035689) popup_note_wait_window_t3_ParamLimits

0x6f09,	// (0x00035689) popup_note_wait_window_t3

0x6f1c,	// (0x0003569c) popup_note_wait_window_t4_ParamLimits

0x6f1c,	// (0x0003569c) popup_note_wait_window_t4

0x0004,

0xf860,	// (0x0003dfe0) popup_note_wait_window_t_ParamLimits

0xf860,	// (0x0003dfe0) popup_note_wait_window_t

0x6f41,	// (0x000356c1) wait_bar_pane_ParamLimits

0x6f41,	// (0x000356c1) wait_bar_pane

0x21ae,	// (0x0003092e) wait_anim_pane

0x21ae,	// (0x0003092e) wait_border_pane

0x2061,	// (0x000307e1) wait_anim_pane_g1

0x2061,	// (0x000307e1) wait_anim_pane_g2

0x0001,

0xf724,	// (0x0003dea4) wait_anim_pane_g

0x6e21,	// (0x000355a1) wait_border_pane_g1

0x6e2a,	// (0x000355aa) wait_border_pane_g2

0x6e33,	// (0x000355b3) wait_border_pane_g3

0x0002,

0xf852,	// (0x0003dfd2) wait_border_pane_g

0x6c91,	// (0x00035411) bg_popup_window_pane_cp16_ParamLimits

0x6c91,	// (0x00035411) bg_popup_window_pane_cp16

0x6d91,	// (0x00035511) indicator_popup_pane_cp4_ParamLimits

0x6d91,	// (0x00035511) indicator_popup_pane_cp4

0x6da5,	// (0x00035525) popup_query_data_window_t1_ParamLimits

0x6da5,	// (0x00035525) popup_query_data_window_t1

0x6db7,	// (0x00035537) popup_query_data_window_t2_ParamLimits

0x6db7,	// (0x00035537) popup_query_data_window_t2

0x6dd0,	// (0x00035550) popup_query_data_window_t3_ParamLimits

0x6dd0,	// (0x00035550) popup_query_data_window_t3

0x0002,

0xf84b,	// (0x0003dfcb) popup_query_data_window_t_ParamLimits

0xf84b,	// (0x0003dfcb) popup_query_data_window_t

0x6dea,	// (0x0003556a) query_popup_data_pane_ParamLimits

0x6dea,	// (0x0003556a) query_popup_data_pane

0x6dfe,	// (0x0003557e) query_popup_data_pane_cp1_ParamLimits

0x6dfe,	// (0x0003557e) query_popup_data_pane_cp1

0x6c91,	// (0x00035411) bg_popup_window_pane_cp10_ParamLimits

0x6c91,	// (0x00035411) bg_popup_window_pane_cp10

0x6cc3,	// (0x00035443) indicator_popup_pane_ParamLimits

0x6cc3,	// (0x00035443) indicator_popup_pane

0x6ce5,	// (0x00035465) popup_query_code_window_t1_ParamLimits

0x6ce5,	// (0x00035465) popup_query_code_window_t1

0x6cff,	// (0x0003547f) popup_query_code_window_t2_ParamLimits

0x6cff,	// (0x0003547f) popup_query_code_window_t2

0x6d48,	// (0x000354c8) popup_query_code_window_t3_ParamLimits

0x6d48,	// (0x000354c8) popup_query_code_window_t3

0x0002,

0xf844,	// (0x0003dfc4) popup_query_code_window_t_ParamLimits

0xf844,	// (0x0003dfc4) popup_query_code_window_t

0x6d77,	// (0x000354f7) query_popup_pane_ParamLimits

0x6d77,	// (0x000354f7) query_popup_pane

0x27b7,	// (0x00030f37) bg_popup_window_pane_cp15_ParamLimits

0x27b7,	// (0x00030f37) bg_popup_window_pane_cp15

0x27d5,	// (0x00030f55) indicator_popup_pane_cp1_ParamLimits

0x27d5,	// (0x00030f55) indicator_popup_pane_cp1

0x27e8,	// (0x00030f68) indicator_popup_pane_cp2_ParamLimits

0x27e8,	// (0x00030f68) indicator_popup_pane_cp2

0x27fb,	// (0x00030f7b) popup_query_data_code_window_g1_ParamLimits

0x27fb,	// (0x00030f7b) popup_query_data_code_window_g1

0x280e,	// (0x00030f8e) popup_query_data_code_window_t1_ParamLimits

0x280e,	// (0x00030f8e) popup_query_data_code_window_t1

0x2820,	// (0x00030fa0) popup_query_data_code_window_t2_ParamLimits

0x2820,	// (0x00030fa0) popup_query_data_code_window_t2

0x2832,	// (0x00030fb2) popup_query_data_code_window_t3_ParamLimits

0x2832,	// (0x00030fb2) popup_query_data_code_window_t3

0x2848,	// (0x00030fc8) popup_query_data_code_window_t4_ParamLimits

0x2848,	// (0x00030fc8) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0003dd26) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0003dd26) popup_query_data_code_window_t

0xb107,	// (0x00039887) list_single_midp_graphic_pane_g3

0x2860,	// (0x00030fe0) query_popup_data_pane_cp2_ParamLimits

0x2873,	// (0x00030ff3) query_popup_pane_cp2_ParamLimits

0x2873,	// (0x00030ff3) query_popup_pane_cp2

0x21ae,	// (0x0003092e) bg_popup_window_pane_cp11

0x6c89,	// (0x00035409) heading_pane_cp5

0x2957,	// (0x000310d7) listscroll_popup_info_pane

0x21ae,	// (0x0003092e) input_focus_pane_cp3

0x2886,	// (0x00031006) query_popup_pane_t1

0x2894,	// (0x00031014) list_popup_info_pane_ParamLimits

0x2894,	// (0x00031014) list_popup_info_pane

0x28a3,	// (0x00031023) listscroll_popup_info_pane_g1

0x28ab,	// (0x0003102b) scroll_pane_cp7

0x28b3,	// (0x00031033) popup_info_list_pane_t1_ParamLimits

0x28b3,	// (0x00031033) popup_info_list_pane_t1

0x28cd,	// (0x0003104d) popup_info_list_pane_t2_ParamLimits

0x28cd,	// (0x0003104d) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0003dd2f) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0003dd2f) popup_info_list_pane_t

0x21ae,	// (0x0003092e) bg_popup_window_pane_cp12

0x7cd1,	// (0x00036451) find_popup_pane

0x23ba,	// (0x00030b3a) bg_popup_window_pane_cp3

0x28e7,	// (0x00031067) heading_pane_cp3

0x28f3,	// (0x00031073) listscroll_popup_graphic_pane

0x21ae,	// (0x0003092e) bg_popup_window_pane_cp4

0xa172,	// (0x000388f2) heading_pane_cp4

0x2957,	// (0x000310d7) listscroll_popup_colour_pane

0x295f,	// (0x000310df) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x295f,	// (0x000310df) cell_large_graphic_colour_none_popup_pane

0xa17a,	// (0x000388fa) grid_large_graphic_colour_popup_pane_ParamLimits

0xa17a,	// (0x000388fa) grid_large_graphic_colour_popup_pane

0xa196,	// (0x00038916) listscroll_popup_colour_pane_g1_ParamLimits

0xa196,	// (0x00038916) listscroll_popup_colour_pane_g1

0xa1ad,	// (0x0003892d) listscroll_popup_colour_pane_g2_ParamLimits

0xa1ad,	// (0x0003892d) listscroll_popup_colour_pane_g2

0x29b6,	// (0x00031136) listscroll_popup_colour_pane_g3_ParamLimits

0x29b6,	// (0x00031136) listscroll_popup_colour_pane_g3

0xa1c1,	// (0x00038941) listscroll_popup_colour_pane_g4_ParamLimits

0xa1c1,	// (0x00038941) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0003dd34) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0003dd34) listscroll_popup_colour_pane_g

0x29d5,	// (0x00031155) scroll_pane_cp6_ParamLimits

0x29d5,	// (0x00031155) scroll_pane_cp6

0xa1d0,	// (0x00038950) cell_large_graphic_colour_popup_pane_ParamLimits

0xa1d0,	// (0x00038950) cell_large_graphic_colour_popup_pane

0x2a06,	// (0x00031186) cell_large_graphic_colour_none_popup_pane_t1

0x21ae,	// (0x0003092e) grid_highlight_pane_cp5

0x2a15,	// (0x00031195) cell_large_graphic_colour_popup_pane_g1

0x2a1d,	// (0x0003119d) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0003dd3d) cell_large_graphic_colour_popup_pane_g

0x2a25,	// (0x000311a5) cell_large_graphic_colour_popup_pane_g2_copy1

0x2a2e,	// (0x000311ae) grid_highlight_pane_cp4

0x2a36,	// (0x000311b6) bg_popup_window_pane_cp8_ParamLimits

0x2a36,	// (0x000311b6) bg_popup_window_pane_cp8

0x2a51,	// (0x000311d1) popup_snote_single_text_window_g1_ParamLimits

0x2a51,	// (0x000311d1) popup_snote_single_text_window_g1

0x2a63,	// (0x000311e3) popup_snote_single_text_window_t1_ParamLimits

0x2a63,	// (0x000311e3) popup_snote_single_text_window_t1

0x2a76,	// (0x000311f6) popup_snote_single_text_window_t2_ParamLimits

0x2a76,	// (0x000311f6) popup_snote_single_text_window_t2

0x2a89,	// (0x00031209) popup_snote_single_text_window_t3_ParamLimits

0x2a89,	// (0x00031209) popup_snote_single_text_window_t3

0x2ac2,	// (0x00031242) popup_snote_single_text_window_t4_ParamLimits

0x2ac2,	// (0x00031242) popup_snote_single_text_window_t4

0x2af6,	// (0x00031276) popup_snote_single_text_window_t5_ParamLimits

0x2af6,	// (0x00031276) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0003dd42) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0003dd42) popup_snote_single_text_window_t

0x2b25,	// (0x000312a5) bg_popup_window_pane_cp9_ParamLimits

0x2b25,	// (0x000312a5) bg_popup_window_pane_cp9

0x2a51,	// (0x000311d1) popup_snote_single_graphic_window_g1_ParamLimits

0x2a51,	// (0x000311d1) popup_snote_single_graphic_window_g1

0x2b33,	// (0x000312b3) popup_snote_single_graphic_window_g2_ParamLimits

0x2b33,	// (0x000312b3) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0003dd4d) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0003dd4d) popup_snote_single_graphic_window_g

0x2b3f,	// (0x000312bf) popup_snote_single_graphic_window_t1_ParamLimits

0x2b3f,	// (0x000312bf) popup_snote_single_graphic_window_t1

0x2b52,	// (0x000312d2) popup_snote_single_graphic_window_t2_ParamLimits

0x2b52,	// (0x000312d2) popup_snote_single_graphic_window_t2

0x2a89,	// (0x00031209) popup_snote_single_graphic_window_t3_ParamLimits

0x2a89,	// (0x00031209) popup_snote_single_graphic_window_t3

0x2ac2,	// (0x00031242) popup_snote_single_graphic_window_t4_ParamLimits

0x2ac2,	// (0x00031242) popup_snote_single_graphic_window_t4

0x2af6,	// (0x00031276) popup_snote_single_graphic_window_t5_ParamLimits

0x2af6,	// (0x00031276) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0003dd52) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0003dd52) popup_snote_single_graphic_window_t

0xb7f2,	// (0x00039f72) grid_graphic_popup_pane_ParamLimits

0xb7f2,	// (0x00039f72) grid_graphic_popup_pane

0xb815,	// (0x00039f95) listscroll_popup_graphic_pane_g1_ParamLimits

0xb815,	// (0x00039f95) listscroll_popup_graphic_pane_g1

0xb829,	// (0x00039fa9) listscroll_popup_graphic_pane_g2_ParamLimits

0xb829,	// (0x00039fa9) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c1,	// (0x0003e141) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c1,	// (0x0003e141) listscroll_popup_graphic_pane_g

0x7620,	// (0x00035da0) scroll_pane_cp5

0xb7ab,	// (0x00039f2b) cell_graphic_popup_pane_ParamLimits

0xb7ab,	// (0x00039f2b) cell_graphic_popup_pane

0x7c7a,	// (0x000363fa) cell_graphic_popup_pane_g1

0x7c82,	// (0x00036402) cell_graphic_popup_pane_g2

0x2a25,	// (0x000311a5) cell_graphic_popup_pane_g3

0x0002,

0xf9ba,	// (0x0003e13a) cell_graphic_popup_pane_g

0x7c8b,	// (0x0003640b) cell_graphic_popup_pane_t2

0x2a2e,	// (0x000311ae) grid_highlight_pane_cp3

0x2b77,	// (0x000312f7) list_gen_pane_ParamLimits

0x2b77,	// (0x000312f7) list_gen_pane

0x2ba8,	// (0x00031328) scroll_pane

0xb77c,	// (0x00039efc) bg_list_pane_g1_ParamLimits

0xb77c,	// (0x00039efc) bg_list_pane_g1

0x7c31,	// (0x000363b1) bg_list_pane_g2_ParamLimits

0x7c31,	// (0x000363b1) bg_list_pane_g2

0x7c44,	// (0x000363c4) bg_list_pane_g3_ParamLimits

0x7c44,	// (0x000363c4) bg_list_pane_g3

0x7c56,	// (0x000363d6) bg_list_pane_g4_ParamLimits

0x7c56,	// (0x000363d6) bg_list_pane_g4

0xb793,	// (0x00039f13) bg_list_pane_g5_ParamLimits

0xb793,	// (0x00039f13) bg_list_pane_g5

0x0004,

0xf9af,	// (0x0003e12f) bg_list_pane_g_ParamLimits

0xf9af,	// (0x0003e12f) bg_list_pane_g

0xb758,	// (0x00039ed8) list_double2_graphic_large_graphic_pane_ParamLimits

0xb758,	// (0x00039ed8) list_double2_graphic_large_graphic_pane

0xb758,	// (0x00039ed8) list_double2_graphic_pane_ParamLimits

0xb758,	// (0x00039ed8) list_double2_graphic_pane

0xb758,	// (0x00039ed8) list_double2_large_graphic_pane_ParamLimits

0xb758,	// (0x00039ed8) list_double2_large_graphic_pane

0xb758,	// (0x00039ed8) list_double2_pane_ParamLimits

0xb758,	// (0x00039ed8) list_double2_pane

0xb758,	// (0x00039ed8) list_double_graphic_heading_pane_ParamLimits

0xb758,	// (0x00039ed8) list_double_graphic_heading_pane

0xb758,	// (0x00039ed8) list_double_graphic_pane_ParamLimits

0xb758,	// (0x00039ed8) list_double_graphic_pane

0xb758,	// (0x00039ed8) list_double_heading_pane_ParamLimits

0xb758,	// (0x00039ed8) list_double_heading_pane

0xb758,	// (0x00039ed8) list_double_large_graphic_pane_ParamLimits

0xb758,	// (0x00039ed8) list_double_large_graphic_pane

0xb758,	// (0x00039ed8) list_double_number_pane_ParamLimits

0xb758,	// (0x00039ed8) list_double_number_pane

0xb758,	// (0x00039ed8) list_double_pane_ParamLimits

0xb758,	// (0x00039ed8) list_double_pane

0xb758,	// (0x00039ed8) list_double_time_pane_ParamLimits

0xb758,	// (0x00039ed8) list_double_time_pane

0xb758,	// (0x00039ed8) list_setting_number_pane_ParamLimits

0xb758,	// (0x00039ed8) list_setting_number_pane

0xb758,	// (0x00039ed8) list_setting_pane_ParamLimits

0xb758,	// (0x00039ed8) list_setting_pane

0xefa3,	// (0x0003d723) list_single_2graphic_pane_ParamLimits

0xefa3,	// (0x0003d723) list_single_2graphic_pane

0xefa3,	// (0x0003d723) list_single_graphic_heading_pane_ParamLimits

0xefa3,	// (0x0003d723) list_single_graphic_heading_pane

0xefa3,	// (0x0003d723) list_single_graphic_pane_ParamLimits

0xefa3,	// (0x0003d723) list_single_graphic_pane

0xefa3,	// (0x0003d723) list_single_heading_pane_ParamLimits

0xefa3,	// (0x0003d723) list_single_heading_pane

0xf468,	// (0x0003dbe8) list_single_large_graphic_pane_ParamLimits

0xf468,	// (0x0003dbe8) list_single_large_graphic_pane

0xefa3,	// (0x0003d723) list_single_number_heading_pane_ParamLimits

0xefa3,	// (0x0003d723) list_single_number_heading_pane

0xefa3,	// (0x0003d723) list_single_number_pane_ParamLimits

0xefa3,	// (0x0003d723) list_single_number_pane

0xefa3,	// (0x0003d723) list_single_pane_ParamLimits

0xefa3,	// (0x0003d723) list_single_pane

0x21ae,	// (0x0003092e) list_highlight_pane_cp1

0xe707,	// (0x0003ce87) list_single_pane_g1_ParamLimits

0xe707,	// (0x0003ce87) list_single_pane_g1

0xe713,	// (0x0003ce93) list_single_pane_g2_ParamLimits

0xe713,	// (0x0003ce93) list_single_pane_g2

0x0001,

0xf5ee,	// (0x0003dd6e) list_single_pane_g_ParamLimits

0xf5ee,	// (0x0003dd6e) list_single_pane_g

0xef79,	// (0x0003d6f9) list_single_pane_t1_ParamLimits

0xef79,	// (0x0003d6f9) list_single_pane_t1

0xe707,	// (0x0003ce87) list_single_number_pane_g1_ParamLimits

0xe707,	// (0x0003ce87) list_single_number_pane_g1

0xe713,	// (0x0003ce93) list_single_number_pane_g2_ParamLimits

0xe713,	// (0x0003ce93) list_single_number_pane_g2

0x0001,

0xf5ee,	// (0x0003dd6e) list_single_number_pane_g_ParamLimits

0xf5ee,	// (0x0003dd6e) list_single_number_pane_g

0xe71f,	// (0x0003ce9f) list_single_number_pane_t1_ParamLimits

0xe71f,	// (0x0003ce9f) list_single_number_pane_t1

0xef38,	// (0x0003d6b8) list_single_number_pane_t2_ParamLimits

0xef38,	// (0x0003d6b8) list_single_number_pane_t2

0x0001,

0xf970,	// (0x0003e0f0) list_single_number_pane_t_ParamLimits

0xf970,	// (0x0003e0f0) list_single_number_pane_t

0xe6fb,	// (0x0003ce7b) list_single_graphic_pane_g1_ParamLimits

0xe6fb,	// (0x0003ce7b) list_single_graphic_pane_g1

0xe707,	// (0x0003ce87) list_single_graphic_pane_g2_ParamLimits

0xe707,	// (0x0003ce87) list_single_graphic_pane_g2

0xe713,	// (0x0003ce93) list_single_graphic_pane_g3_ParamLimits

0xe713,	// (0x0003ce93) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0003dd5d) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0003dd5d) list_single_graphic_pane_g

0xe71f,	// (0x0003ce9f) list_single_graphic_pane_t1_ParamLimits

0xe71f,	// (0x0003ce9f) list_single_graphic_pane_t1

0xe735,	// (0x0003ceb5) list_single_heading_pane_g1_ParamLimits

0xe735,	// (0x0003ceb5) list_single_heading_pane_g1

0xe713,	// (0x0003ce93) list_single_heading_pane_g2_ParamLimits

0xe713,	// (0x0003ce93) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0003dd64) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0003dd64) list_single_heading_pane_g

0xe748,	// (0x0003cec8) list_single_heading_pane_t1_ParamLimits

0xe748,	// (0x0003cec8) list_single_heading_pane_t1

0xe75e,	// (0x0003cede) list_single_heading_pane_t2_ParamLimits

0xe75e,	// (0x0003cede) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0003dd69) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0003dd69) list_single_heading_pane_t

0xe707,	// (0x0003ce87) list_single_number_heading_pane_g1_ParamLimits

0xe707,	// (0x0003ce87) list_single_number_heading_pane_g1

0xe713,	// (0x0003ce93) list_single_number_heading_pane_g2_ParamLimits

0xe713,	// (0x0003ce93) list_single_number_heading_pane_g2

0x0001,

0xf5ee,	// (0x0003dd6e) list_single_number_heading_pane_g_ParamLimits

0xf5ee,	// (0x0003dd6e) list_single_number_heading_pane_g

0xe770,	// (0x0003cef0) list_single_number_heading_pane_t1_ParamLimits

0xe770,	// (0x0003cef0) list_single_number_heading_pane_t1

0xe786,	// (0x0003cf06) list_single_number_heading_pane_t2_ParamLimits

0xe786,	// (0x0003cf06) list_single_number_heading_pane_t2

0xe798,	// (0x0003cf18) list_single_number_heading_pane_t3_ParamLimits

0xe798,	// (0x0003cf18) list_single_number_heading_pane_t3

0x0002,

0xf5f3,	// (0x0003dd73) list_single_number_heading_pane_t_ParamLimits

0xf5f3,	// (0x0003dd73) list_single_number_heading_pane_t

0xe7aa,	// (0x0003cf2a) list_single_graphic_heading_pane_g1_ParamLimits

0xe7aa,	// (0x0003cf2a) list_single_graphic_heading_pane_g1

0xe7be,	// (0x0003cf3e) list_single_graphic_heading_pane_g4_ParamLimits

0xe7be,	// (0x0003cf3e) list_single_graphic_heading_pane_g4

0xe713,	// (0x0003ce93) list_single_graphic_heading_pane_g5_ParamLimits

0xe713,	// (0x0003ce93) list_single_graphic_heading_pane_g5

0x0002,

0xf5fa,	// (0x0003dd7a) list_single_graphic_heading_pane_g_ParamLimits

0xf5fa,	// (0x0003dd7a) list_single_graphic_heading_pane_g

0xe770,	// (0x0003cef0) list_single_graphic_heading_pane_t1_ParamLimits

0xe770,	// (0x0003cef0) list_single_graphic_heading_pane_t1

0xe7cd,	// (0x0003cf4d) list_single_graphic_heading_pane_t2_ParamLimits

0xe7cd,	// (0x0003cf4d) list_single_graphic_heading_pane_t2

0x0001,

0xf601,	// (0x0003dd81) list_single_graphic_heading_pane_t_ParamLimits

0xf601,	// (0x0003dd81) list_single_graphic_heading_pane_t

0xe7e5,	// (0x0003cf65) list_single_large_graphic_pane_g1_ParamLimits

0xe7e5,	// (0x0003cf65) list_single_large_graphic_pane_g1

0xe7f1,	// (0x0003cf71) list_single_large_graphic_pane_g2_ParamLimits

0xe7f1,	// (0x0003cf71) list_single_large_graphic_pane_g2

0xe7fd,	// (0x0003cf7d) list_single_large_graphic_pane_g3_ParamLimits

0xe7fd,	// (0x0003cf7d) list_single_large_graphic_pane_g3

0x0002,

0xf606,	// (0x0003dd86) list_single_large_graphic_pane_g_ParamLimits

0xf606,	// (0x0003dd86) list_single_large_graphic_pane_g

0x6e2a,	// (0x000355aa) wait_border_pane_g2_copy1

0xe809,	// (0x0003cf89) list_single_large_graphic_pane_g4_cp2

0xe811,	// (0x0003cf91) list_single_large_graphic_pane_t1_ParamLimits

0xe811,	// (0x0003cf91) list_single_large_graphic_pane_t1

0xe827,	// (0x0003cfa7) list_double_pane_g1_ParamLimits

0xe827,	// (0x0003cfa7) list_double_pane_g1

0xe833,	// (0x0003cfb3) list_double_pane_g2_ParamLimits

0xe833,	// (0x0003cfb3) list_double_pane_g2

0x0001,

0xf60d,	// (0x0003dd8d) list_double_pane_g_ParamLimits

0xf60d,	// (0x0003dd8d) list_double_pane_g

0xe83f,	// (0x0003cfbf) list_double_pane_t1_ParamLimits

0xe83f,	// (0x0003cfbf) list_double_pane_t1

0xe855,	// (0x0003cfd5) list_double_pane_t2_ParamLimits

0xe855,	// (0x0003cfd5) list_double_pane_t2

0x0001,

0xf612,	// (0x0003dd92) list_double_pane_t_ParamLimits

0xf612,	// (0x0003dd92) list_double_pane_t

0xe867,	// (0x0003cfe7) list_double2_pane_g1_ParamLimits

0xe867,	// (0x0003cfe7) list_double2_pane_g1

0xe876,	// (0x0003cff6) list_double2_pane_g2_ParamLimits

0xe876,	// (0x0003cff6) list_double2_pane_g2

0x0001,

0xf617,	// (0x0003dd97) list_double2_pane_g_ParamLimits

0xf617,	// (0x0003dd97) list_double2_pane_g

0xe882,	// (0x0003d002) list_double2_pane_t1_ParamLimits

0xe882,	// (0x0003d002) list_double2_pane_t1

0xe898,	// (0x0003d018) list_double2_pane_t2_ParamLimits

0xe898,	// (0x0003d018) list_double2_pane_t2

0x0001,

0xf61c,	// (0x0003dd9c) list_double2_pane_t_ParamLimits

0xf61c,	// (0x0003dd9c) list_double2_pane_t

0xe827,	// (0x0003cfa7) list_double_number_pane_g1_ParamLimits

0xe827,	// (0x0003cfa7) list_double_number_pane_g1

0xe833,	// (0x0003cfb3) list_double_number_pane_g2_ParamLimits

0xe833,	// (0x0003cfb3) list_double_number_pane_g2

0x0001,

0xf60d,	// (0x0003dd8d) list_double_number_pane_g_ParamLimits

0xf60d,	// (0x0003dd8d) list_double_number_pane_g

0xe8aa,	// (0x0003d02a) list_double_number_pane_t1_ParamLimits

0xe8aa,	// (0x0003d02a) list_double_number_pane_t1

0xe8bc,	// (0x0003d03c) list_double_number_pane_t2_ParamLimits

0xe8bc,	// (0x0003d03c) list_double_number_pane_t2

0xe8d2,	// (0x0003d052) list_double_number_pane_t3_ParamLimits

0xe8d2,	// (0x0003d052) list_double_number_pane_t3

0x0002,

0xf621,	// (0x0003dda1) list_double_number_pane_t_ParamLimits

0xf621,	// (0x0003dda1) list_double_number_pane_t

0xe8e4,	// (0x0003d064) list_double_graphic_pane_g1_ParamLimits

0xe8e4,	// (0x0003d064) list_double_graphic_pane_g1

0xe8f0,	// (0x0003d070) list_double_graphic_pane_g2_ParamLimits

0xe8f0,	// (0x0003d070) list_double_graphic_pane_g2

0xe8ff,	// (0x0003d07f) list_double_graphic_pane_g3_ParamLimits

0xe8ff,	// (0x0003d07f) list_double_graphic_pane_g3

0x0003,

0xf628,	// (0x0003dda8) list_double_graphic_pane_g_ParamLimits

0xf628,	// (0x0003dda8) list_double_graphic_pane_g

0xe917,	// (0x0003d097) list_double_graphic_pane_t1_ParamLimits

0xe917,	// (0x0003d097) list_double_graphic_pane_t1

0xe92d,	// (0x0003d0ad) list_double_graphic_pane_t2_ParamLimits

0xe92d,	// (0x0003d0ad) list_double_graphic_pane_t2

0x0001,

0xf631,	// (0x0003ddb1) list_double_graphic_pane_t_ParamLimits

0xf631,	// (0x0003ddb1) list_double_graphic_pane_t

0xe93f,	// (0x0003d0bf) list_double2_graphic_pane_g1_ParamLimits

0xe93f,	// (0x0003d0bf) list_double2_graphic_pane_g1

0x2cad,	// (0x0003142d) list_double2_graphic_pane_g2_ParamLimits

0x2cad,	// (0x0003142d) list_double2_graphic_pane_g2

0xe94b,	// (0x0003d0cb) list_double2_graphic_pane_g3_ParamLimits

0xe94b,	// (0x0003d0cb) list_double2_graphic_pane_g3

0x0002,

0xf636,	// (0x0003ddb6) list_double2_graphic_pane_g_ParamLimits

0xf636,	// (0x0003ddb6) list_double2_graphic_pane_g

0xe957,	// (0x0003d0d7) list_double2_graphic_pane_t1_ParamLimits

0xe957,	// (0x0003d0d7) list_double2_graphic_pane_t1

0xe96d,	// (0x0003d0ed) list_double2_graphic_pane_t2_ParamLimits

0xe96d,	// (0x0003d0ed) list_double2_graphic_pane_t2

0x0001,

0xf63d,	// (0x0003ddbd) list_double2_graphic_pane_t_ParamLimits

0xf63d,	// (0x0003ddbd) list_double2_graphic_pane_t

0xe97f,	// (0x0003d0ff) list_double_large_graphic_pane_g1_ParamLimits

0xe97f,	// (0x0003d0ff) list_double_large_graphic_pane_g1

0xe99c,	// (0x0003d11c) list_double_large_graphic_pane_g2_ParamLimits

0xe99c,	// (0x0003d11c) list_double_large_graphic_pane_g2

0xe833,	// (0x0003cfb3) list_double_large_graphic_pane_g3_ParamLimits

0xe833,	// (0x0003cfb3) list_double_large_graphic_pane_g3

0xe9b0,	// (0x0003d130) list_double_large_graphic_pane_g4_ParamLimits

0xe9b0,	// (0x0003d130) list_double_large_graphic_pane_g4

0x0004,

0xf642,	// (0x0003ddc2) list_double_large_graphic_pane_g_ParamLimits

0xf642,	// (0x0003ddc2) list_double_large_graphic_pane_g

0xe9d6,	// (0x0003d156) list_double_large_graphic_pane_t1_ParamLimits

0xe9d6,	// (0x0003d156) list_double_large_graphic_pane_t1

0xe9ef,	// (0x0003d16f) list_double_large_graphic_pane_t2_ParamLimits

0xe9ef,	// (0x0003d16f) list_double_large_graphic_pane_t2

0x0001,

0xf64d,	// (0x0003ddcd) list_double_large_graphic_pane_t_ParamLimits

0xf64d,	// (0x0003ddcd) list_double_large_graphic_pane_t

0xea01,	// (0x0003d181) list_double2_large_graphic_pane_g1_ParamLimits

0xea01,	// (0x0003d181) list_double2_large_graphic_pane_g1

0xea0d,	// (0x0003d18d) list_double2_large_graphic_pane_g2_ParamLimits

0xea0d,	// (0x0003d18d) list_double2_large_graphic_pane_g2

0xe94b,	// (0x0003d0cb) list_double2_large_graphic_pane_g3_ParamLimits

0xe94b,	// (0x0003d0cb) list_double2_large_graphic_pane_g3

0x0002,

0xf652,	// (0x0003ddd2) list_double2_large_graphic_pane_g_ParamLimits

0xf652,	// (0x0003ddd2) list_double2_large_graphic_pane_g

0xea1c,	// (0x0003d19c) list_double2_large_graphic_pane_t1_ParamLimits

0xea1c,	// (0x0003d19c) list_double2_large_graphic_pane_t1

0xea32,	// (0x0003d1b2) list_double2_large_graphic_pane_t2_ParamLimits

0xea32,	// (0x0003d1b2) list_double2_large_graphic_pane_t2

0x0001,

0xf659,	// (0x0003ddd9) list_double2_large_graphic_pane_t_ParamLimits

0xf659,	// (0x0003ddd9) list_double2_large_graphic_pane_t

0xea44,	// (0x0003d1c4) list_double_heading_pane_g1_ParamLimits

0xea44,	// (0x0003d1c4) list_double_heading_pane_g1

0xea53,	// (0x0003d1d3) list_double_heading_pane_g2_ParamLimits

0xea53,	// (0x0003d1d3) list_double_heading_pane_g2

0x0001,

0xf65e,	// (0x0003ddde) list_double_heading_pane_g_ParamLimits

0xf65e,	// (0x0003ddde) list_double_heading_pane_g

0xea5f,	// (0x0003d1df) list_double_heading_pane_t1_ParamLimits

0xea5f,	// (0x0003d1df) list_double_heading_pane_t1

0xe898,	// (0x0003d018) list_double_heading_pane_t2_ParamLimits

0xe898,	// (0x0003d018) list_double_heading_pane_t2

0x0001,

0xf663,	// (0x0003dde3) list_double_heading_pane_t_ParamLimits

0xf663,	// (0x0003dde3) list_double_heading_pane_t

0xea75,	// (0x0003d1f5) list_double_graphic_heading_pane_g1_ParamLimits

0xea75,	// (0x0003d1f5) list_double_graphic_heading_pane_g1

0xea44,	// (0x0003d1c4) list_double_graphic_heading_pane_g2_ParamLimits

0xea44,	// (0x0003d1c4) list_double_graphic_heading_pane_g2

0xea53,	// (0x0003d1d3) list_double_graphic_heading_pane_g3_ParamLimits

0xea53,	// (0x0003d1d3) list_double_graphic_heading_pane_g3

0x0002,

0xf668,	// (0x0003dde8) list_double_graphic_heading_pane_g_ParamLimits

0xf668,	// (0x0003dde8) list_double_graphic_heading_pane_g

0xea81,	// (0x0003d201) list_double_graphic_heading_pane_t1_ParamLimits

0xea81,	// (0x0003d201) list_double_graphic_heading_pane_t1

0xe96d,	// (0x0003d0ed) list_double_graphic_heading_pane_t2_ParamLimits

0xe96d,	// (0x0003d0ed) list_double_graphic_heading_pane_t2

0x0001,

0xf66f,	// (0x0003ddef) list_double_graphic_heading_pane_t_ParamLimits

0xf66f,	// (0x0003ddef) list_double_graphic_heading_pane_t

0xea97,	// (0x0003d217) list_double_time_pane_g1_ParamLimits

0xea97,	// (0x0003d217) list_double_time_pane_g1

0xeaa6,	// (0x0003d226) list_double_time_pane_g2_ParamLimits

0xeaa6,	// (0x0003d226) list_double_time_pane_g2

0x0001,

0xf674,	// (0x0003ddf4) list_double_time_pane_g_ParamLimits

0xf674,	// (0x0003ddf4) list_double_time_pane_g

0xeab2,	// (0x0003d232) list_double_time_pane_t1_ParamLimits

0xeab2,	// (0x0003d232) list_double_time_pane_t1

0xeac8,	// (0x0003d248) list_double_time_pane_t2_ParamLimits

0xeac8,	// (0x0003d248) list_double_time_pane_t2

0xeada,	// (0x0003d25a) list_double_time_pane_t3_ParamLimits

0xeada,	// (0x0003d25a) list_double_time_pane_t3

0xeaec,	// (0x0003d26c) list_double_time_pane_t4_ParamLimits

0xeaec,	// (0x0003d26c) list_double_time_pane_t4

0x0003,

0xf679,	// (0x0003ddf9) list_double_time_pane_t_ParamLimits

0xf679,	// (0x0003ddf9) list_double_time_pane_t

0xeafe,	// (0x0003d27e) list_setting_pane_g1_ParamLimits

0xeafe,	// (0x0003d27e) list_setting_pane_g1

0xe876,	// (0x0003cff6) list_setting_pane_g2_ParamLimits

0xe876,	// (0x0003cff6) list_setting_pane_g2

0x0001,

0xf682,	// (0x0003de02) list_setting_pane_g_ParamLimits

0xf682,	// (0x0003de02) list_setting_pane_g

0xeb0a,	// (0x0003d28a) list_setting_pane_t1_ParamLimits

0xeb0a,	// (0x0003d28a) list_setting_pane_t1

0xeb24,	// (0x0003d2a4) list_setting_pane_t2_ParamLimits

0xeb24,	// (0x0003d2a4) list_setting_pane_t2

0x0002,

0xf687,	// (0x0003de07) list_setting_pane_t_ParamLimits

0xf687,	// (0x0003de07) list_setting_pane_t

0xeb61,	// (0x0003d2e1) set_value_pane_cp_ParamLimits

0xeb61,	// (0x0003d2e1) set_value_pane_cp

0xeb6d,	// (0x0003d2ed) list_setting_number_pane_g1_ParamLimits

0xeb6d,	// (0x0003d2ed) list_setting_number_pane_g1

0xeb79,	// (0x0003d2f9) list_setting_number_pane_g2_ParamLimits

0xeb79,	// (0x0003d2f9) list_setting_number_pane_g2

0x0001,

0xf68e,	// (0x0003de0e) list_setting_number_pane_g_ParamLimits

0xf68e,	// (0x0003de0e) list_setting_number_pane_g

0xeb85,	// (0x0003d305) list_setting_number_pane_t1_ParamLimits

0xeb85,	// (0x0003d305) list_setting_number_pane_t1

0xeb9c,	// (0x0003d31c) list_setting_number_pane_t2_ParamLimits

0xeb9c,	// (0x0003d31c) list_setting_number_pane_t2

0xebb6,	// (0x0003d336) list_setting_number_pane_t3_ParamLimits

0xebb6,	// (0x0003d336) list_setting_number_pane_t3

0x0003,

0xf693,	// (0x0003de13) list_setting_number_pane_t_ParamLimits

0xf693,	// (0x0003de13) list_setting_number_pane_t

0xeb61,	// (0x0003d2e1) set_value_pane_ParamLimits

0xeb61,	// (0x0003d2e1) set_value_pane

0x2c4b,	// (0x000313cb) bg_set_opt_pane_ParamLimits

0x2c4b,	// (0x000313cb) bg_set_opt_pane

0xebf7,	// (0x0003d377) set_value_pane_t1

0x2c6c,	// (0x000313ec) slider_set_pane_cp3

0x2c75,	// (0x000313f5) volume_small_pane_cp

0x2c7e,	// (0x000313fe) list_form_gen_pane

0x2bcc,	// (0x0003134c) scroll_pane_cp8

0xec15,	// (0x0003d395) form_field_data_pane_ParamLimits

0xec15,	// (0x0003d395) form_field_data_pane

0xec35,	// (0x0003d3b5) form_field_data_wide_pane_ParamLimits

0xec35,	// (0x0003d3b5) form_field_data_wide_pane

0xec54,	// (0x0003d3d4) form_field_popup_pane_ParamLimits

0xec54,	// (0x0003d3d4) form_field_popup_pane

0xec6c,	// (0x0003d3ec) form_field_popup_wide_pane_ParamLimits

0xec6c,	// (0x0003d3ec) form_field_popup_wide_pane

0xec83,	// (0x0003d403) form_field_slider_pane_ParamLimits

0xec83,	// (0x0003d403) form_field_slider_pane

0xec96,	// (0x0003d416) form_field_slider_wide_pane_ParamLimits

0xec96,	// (0x0003d416) form_field_slider_wide_pane

0x2c87,	// (0x00031407) data_form_pane

0xecb1,	// (0x0003d431) form_field_data_pane_t1

0x2c93,	// (0x00031413) input_focus_pane

0x2ca1,	// (0x00031421) data_form_wide_pane

0xecd5,	// (0x0003d455) form_field_data_wide_pane_t1

0x2a43,	// (0x000311c3) input_focus_pane_cp6

0xecf7,	// (0x0003d477) form_field_popup_pane_t1

0x2c93,	// (0x00031413) input_focus_pane_cp7

0x2c87,	// (0x00031407) list_form_pane

0xed17,	// (0x0003d497) form_field_popup_wide_pane_t1

0x2c93,	// (0x00031413) input_focus_pane_cp8

0x2ccd,	// (0x0003144d) list_form_wide_pane

0xed34,	// (0x0003d4b4) form_field_slider_pane_t1_ParamLimits

0xed34,	// (0x0003d4b4) form_field_slider_pane_t1

0xed4a,	// (0x0003d4ca) form_field_slider_pane_t2_ParamLimits

0xed4a,	// (0x0003d4ca) form_field_slider_pane_t2

0x0001,

0xf6a3,	// (0x0003de23) form_field_slider_pane_t_ParamLimits

0xf6a3,	// (0x0003de23) form_field_slider_pane_t

0x2370,	// (0x00030af0) input_focus_pane_cp9_ParamLimits

0x2370,	// (0x00030af0) input_focus_pane_cp9

0xed5f,	// (0x0003d4df) slider_cont_pane_ParamLimits

0xed5f,	// (0x0003d4df) slider_cont_pane

0x2cdc,	// (0x0003145c) form_field_slider_wide_pane_t1_ParamLimits

0x2cdc,	// (0x0003145c) form_field_slider_wide_pane_t1

0xed73,	// (0x0003d4f3) form_field_slider_wide_pane_t2_ParamLimits

0xed73,	// (0x0003d4f3) form_field_slider_wide_pane_t2

0x0001,

0xf6a8,	// (0x0003de28) form_field_slider_wide_pane_t_ParamLimits

0xf6a8,	// (0x0003de28) form_field_slider_wide_pane_t

0x2370,	// (0x00030af0) input_focus_pane_cp10_ParamLimits

0x2370,	// (0x00030af0) input_focus_pane_cp10

0xed85,	// (0x0003d505) slider_cont_pane_cp1_ParamLimits

0xed85,	// (0x0003d505) slider_cont_pane_cp1

0xed9b,	// (0x0003d51b) slider_form_pane_cp

0x2cee,	// (0x0003146e) input_focus_pane_g1

0x2cf6,	// (0x00031476) input_focus_pane_g2

0x2cfe,	// (0x0003147e) input_focus_pane_g3

0x2d06,	// (0x00031486) input_focus_pane_g4

0x2d0e,	// (0x0003148e) input_focus_pane_g5

0x2d16,	// (0x00031496) input_focus_pane_g6

0x2d1e,	// (0x0003149e) input_focus_pane_g7

0x2d26,	// (0x000314a6) input_focus_pane_g8

0x2d2e,	// (0x000314ae) input_focus_pane_g9

0x2061,	// (0x000307e1) input_focus_pane_g10

0x0009,

0xf6ad,	// (0x0003de2d) input_focus_pane_g

0x6e33,	// (0x000355b3) wait_border_pane_g3_copy1

0xeda3,	// (0x0003d523) data_form_pane_t1

0x2061,	// (0x000307e1) wait_anim_pane_g1_copy1

0xef4a,	// (0x0003d6ca) data_form_wide_pane_t1

0xedbd,	// (0x0003d53d) list_form_graphic_pane_cp_ParamLimits

0xedbd,	// (0x0003d53d) list_form_graphic_pane_cp

0x7bd7,	// (0x00036357) slider_form_pane_g1

0x7be0,	// (0x00036360) slider_form_pane_g2

0x0006,

0xf9a0,	// (0x0003e120) slider_form_pane_g

0xedd1,	// (0x0003d551) list_form_graphic_pane_ParamLimits

0xedd1,	// (0x0003d551) list_form_graphic_pane

0xede7,	// (0x0003d567) list_form_graphic_pane_g1

0xedef,	// (0x0003d56f) list_form_graphic_pane_t1_ParamLimits

0xedef,	// (0x0003d56f) list_form_graphic_pane_t1

0x23ba,	// (0x00030b3a) list_highlight_pane_cp5_ParamLimits

0x23ba,	// (0x00030b3a) list_highlight_pane_cp5

0xee04,	// (0x0003d584) find_pane_g1

0x2d36,	// (0x000314b6) input_find_pane

0xee0d,	// (0x0003d58d) input_find_pane_g1_ParamLimits

0xee0d,	// (0x0003d58d) input_find_pane_g1

0xee19,	// (0x0003d599) input_find_pane_t1_ParamLimits

0xee19,	// (0x0003d599) input_find_pane_t1

0xee2e,	// (0x0003d5ae) input_find_pane_t2_ParamLimits

0xee2e,	// (0x0003d5ae) input_find_pane_t2

0x0001,

0xf6c2,	// (0x0003de42) input_find_pane_t_ParamLimits

0xf6c2,	// (0x0003de42) input_find_pane_t

0x2d3f,	// (0x000314bf) input_focus_pane_cp5_ParamLimits

0x2d3f,	// (0x000314bf) input_focus_pane_cp5

0x2370,	// (0x00030af0) bg_popup_window_pane_cp2_ParamLimits

0x2370,	// (0x00030af0) bg_popup_window_pane_cp2

0x2d59,	// (0x000314d9) listscroll_menu_pane_ParamLimits

0x2d59,	// (0x000314d9) listscroll_menu_pane

0x2d65,	// (0x000314e5) popup_submenu_window_ParamLimits

0x2d65,	// (0x000314e5) popup_submenu_window

0x2d89,	// (0x00031509) find_popup_pane_g1

0x2d91,	// (0x00031511) input_popup_find_pane_cp

0x2d3f,	// (0x000314bf) input_focus_pane_cp4_ParamLimits

0x2d3f,	// (0x000314bf) input_focus_pane_cp4

0x2da7,	// (0x00031527) input_popup_find_pane_t1_ParamLimits

0x2da7,	// (0x00031527) input_popup_find_pane_t1

0x21ae,	// (0x0003092e) bg_popup_sub_pane_cp

0x2dd5,	// (0x00031555) listscroll_popup_sub_pane

0x2ddd,	// (0x0003155d) list_submenu_pane_ParamLimits

0x2ddd,	// (0x0003155d) list_submenu_pane

0x2dee,	// (0x0003156e) scroll_pane_cp4

0x2df6,	// (0x00031576) list_single_popup_submenu_pane_ParamLimits

0x2df6,	// (0x00031576) list_single_popup_submenu_pane

0x2e0a,	// (0x0003158a) list_single_popup_submenu_pane_g1

0x2e12,	// (0x00031592) list_single_popup_submenu_pane_t1_ParamLimits

0x2e12,	// (0x00031592) list_single_popup_submenu_pane_t1

0x23ba,	// (0x00030b3a) bg_active_tab_pane_cp1_ParamLimits

0x23ba,	// (0x00030b3a) bg_active_tab_pane_cp1

0xa203,	// (0x00038983) tabs_2_active_pane_g1

0xa20b,	// (0x0003898b) tabs_2_active_pane_t1

0x23ba,	// (0x00030b3a) bg_passive_tab_pane_cp1_ParamLimits

0x23ba,	// (0x00030b3a) bg_passive_tab_pane_cp1

0xa203,	// (0x00038983) tabs_2_passive_pane_g1

0xa20b,	// (0x0003898b) tabs_2_passive_pane_t1

0x7457,	// (0x00035bd7) bg_active_tab_pane_cp4

0xa21d,	// (0x0003899d) tabs_2_long_active_pane_t1

0xa230,	// (0x000389b0) bg_passive_tab_pane_cp4

0xb10f,	// (0x0003988f) list_single_midp_graphic_pane_g4_ParamLimits

0x7457,	// (0x00035bd7) bg_active_tab_pane_cp5

0xa23c,	// (0x000389bc) tabs_3_long_active_pane_t1

0xa230,	// (0x000389b0) bg_passive_tab_pane_cp5

0xb10f,	// (0x0003988f) list_single_midp_graphic_pane_g4

0x23ba,	// (0x00030b3a) bg_popup_window_pane_cp13_ParamLimits

0x23ba,	// (0x00030b3a) bg_popup_window_pane_cp13

0x2e73,	// (0x000315f3) listscroll_popup_fast_pane_ParamLimits

0x2e73,	// (0x000315f3) listscroll_popup_fast_pane

0x2e82,	// (0x00031602) grid_popup_fast_pane_ParamLimits

0x2e82,	// (0x00031602) grid_popup_fast_pane

0x2e94,	// (0x00031614) scroll_pane_cp9_ParamLimits

0x2e94,	// (0x00031614) scroll_pane_cp9

0x8eb3,	// (0x00037633) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x8eb3,	// (0x00037633) list_single_graphic_hl_pane_t1_cp2

0x2eb8,	// (0x00031638) input_focus_pane_cp20_ParamLimits

0x2eb8,	// (0x00031638) input_focus_pane_cp20

0x2ec6,	// (0x00031646) query_popup_data_pane_t1_ParamLimits

0x2ec6,	// (0x00031646) query_popup_data_pane_t1

0x2ed9,	// (0x00031659) query_popup_data_pane_t2_ParamLimits

0x2ed9,	// (0x00031659) query_popup_data_pane_t2

0x2f1f,	// (0x0003169f) query_popup_data_pane_t3_ParamLimits

0x2f1f,	// (0x0003169f) query_popup_data_pane_t3

0x2f60,	// (0x000316e0) query_popup_data_pane_t4_ParamLimits

0x2f60,	// (0x000316e0) query_popup_data_pane_t4

0x2f9c,	// (0x0003171c) query_popup_data_pane_t5_ParamLimits

0x2f9c,	// (0x0003171c) query_popup_data_pane_t5

0x0004,

0xf6c7,	// (0x0003de47) query_popup_data_pane_t_ParamLimits

0xf6c7,	// (0x0003de47) query_popup_data_pane_t

0x2cee,	// (0x0003146e) bg_set_opt_pane_g1

0x2cf6,	// (0x00031476) bg_set_opt_pane_g2

0x2cfe,	// (0x0003147e) bg_set_opt_pane_g3

0x2d06,	// (0x00031486) bg_set_opt_pane_g4

0x2d0e,	// (0x0003148e) bg_set_opt_pane_g5

0x2d16,	// (0x00031496) bg_set_opt_pane_g6

0x2d1e,	// (0x0003149e) bg_set_opt_pane_g7

0x2d26,	// (0x000314a6) bg_set_opt_pane_g8

0x2d2e,	// (0x000314ae) bg_set_opt_pane_g9

0x0008,

0xf6d2,	// (0x0003de52) bg_set_opt_pane_g

0xa60d,	// (0x00038d8d) control_top_pane_stacon_ParamLimits

0xa60d,	// (0x00038d8d) control_top_pane_stacon

0xa660,	// (0x00038de0) signal_pane_stacon_ParamLimits

0xa660,	// (0x00038de0) signal_pane_stacon

0x60f5,	// (0x00034875) stacon_top_pane_g1_ParamLimits

0x60f5,	// (0x00034875) stacon_top_pane_g1

0xa685,	// (0x00038e05) title_pane_stacon_ParamLimits

0xa685,	// (0x00038e05) title_pane_stacon

0xa6a7,	// (0x00038e27) uni_indicator_pane_stacon_ParamLimits

0xa6a7,	// (0x00038e27) uni_indicator_pane_stacon

0xa6bc,	// (0x00038e3c) battery_pane_stacon_ParamLimits

0xa6bc,	// (0x00038e3c) battery_pane_stacon

0xa6fc,	// (0x00038e7c) control_bottom_pane_stacon_ParamLimits

0xa6fc,	// (0x00038e7c) control_bottom_pane_stacon

0xa71b,	// (0x00038e9b) navi_pane_stacon_ParamLimits

0xa71b,	// (0x00038e9b) navi_pane_stacon

0x6117,	// (0x00034897) stacon_bottom_pane_g1_ParamLimits

0x6117,	// (0x00034897) stacon_bottom_pane_g1

0x5d2c,	// (0x000344ac) aid_levels_signal_lsc_ParamLimits

0x5d2c,	// (0x000344ac) aid_levels_signal_lsc

0xa24e,	// (0x000389ce) signal_pane_stacon_g1_ParamLimits

0xa24e,	// (0x000389ce) signal_pane_stacon_g1

0xa25a,	// (0x000389da) signal_pane_stacon_g2_ParamLimits

0xa25a,	// (0x000389da) signal_pane_stacon_g2

0x0001,

0xf6e5,	// (0x0003de65) signal_pane_stacon_g_ParamLimits

0xf6e5,	// (0x0003de65) signal_pane_stacon_g

0xa28e,	// (0x00038a0e) title_pane_stacon_t1_ParamLimits

0xa28e,	// (0x00038a0e) title_pane_stacon_t1

0x5d5a,	// (0x000344da) uni_indicator_pane_stacon_g1

0x5d64,	// (0x000344e4) uni_indicator_pane_stacon_g2

0x5d46,	// (0x000344c6) uni_indicator_pane_stacon_g3

0x5d50,	// (0x000344d0) uni_indicator_pane_stacon_g4

0x0003,

0xf6f1,	// (0x0003de71) uni_indicator_pane_stacon_g

0xa2b3,	// (0x00038a33) control_top_pane_stacon_g1

0xa2bb,	// (0x00038a3b) control_top_pane_stacon_t1_ParamLimits

0xa2bb,	// (0x00038a3b) control_top_pane_stacon_t1

0x5d6e,	// (0x000344ee) aid_levels_battery_lsc_ParamLimits

0x5d6e,	// (0x000344ee) aid_levels_battery_lsc

0xa2ec,	// (0x00038a6c) battery_pane_stacon_g1_ParamLimits

0xa2ec,	// (0x00038a6c) battery_pane_stacon_g1

0xa2f8,	// (0x00038a78) battery_pane_stacon_g2_ParamLimits

0xa2f8,	// (0x00038a78) battery_pane_stacon_g2

0x0001,

0xf6fa,	// (0x0003de7a) battery_pane_stacon_g_ParamLimits

0xf6fa,	// (0x0003de7a) battery_pane_stacon_g

0xa327,	// (0x00038aa7) navi_icon_pane_stacon

0xa337,	// (0x00038ab7) navi_navi_pane_stacon

0xa327,	// (0x00038aa7) navi_text_pane_stacon

0xa2b3,	// (0x00038a33) control_bottom_pane_stacon_g1

0xa347,	// (0x00038ac7) control_bottom_pane_stacon_t1_ParamLimits

0xa347,	// (0x00038ac7) control_bottom_pane_stacon_t1

0xa378,	// (0x00038af8) grid_app_pane_ParamLimits

0xa378,	// (0x00038af8) grid_app_pane

0xa394,	// (0x00038b14) scroll_pane_cp15_ParamLimits

0xa394,	// (0x00038b14) scroll_pane_cp15

0xa3a7,	// (0x00038b27) cell_app_pane_ParamLimits

0xa3a7,	// (0x00038b27) cell_app_pane

0xa3c9,	// (0x00038b49) cell_app_pane_g1_ParamLimits

0xa3c9,	// (0x00038b49) cell_app_pane_g1

0x5d96,	// (0x00034516) cell_app_pane_g2_ParamLimits

0x5d96,	// (0x00034516) cell_app_pane_g2

0x0001,

0xf6ff,	// (0x0003de7f) cell_app_pane_g_ParamLimits

0xf6ff,	// (0x0003de7f) cell_app_pane_g

0x5da2,	// (0x00034522) cell_app_pane_t1_ParamLimits

0x5da2,	// (0x00034522) cell_app_pane_t1

0x5db4,	// (0x00034534) grid_highlight_pane_ParamLimits

0x5db4,	// (0x00034534) grid_highlight_pane

0x2cee,	// (0x0003146e) cell_highlight_pane_g1

0x2cf6,	// (0x00031476) cell_highlight_pane_g2

0x2cfe,	// (0x0003147e) cell_highlight_pane_g3

0x2d06,	// (0x00031486) cell_highlight_pane_g4

0x2d0e,	// (0x0003148e) cell_highlight_pane_g5

0x2d16,	// (0x00031496) cell_highlight_pane_g6

0x2d1e,	// (0x0003149e) cell_highlight_pane_g7

0x2d26,	// (0x000314a6) cell_highlight_pane_g8

0x2d2e,	// (0x000314ae) cell_highlight_pane_g9

0x2061,	// (0x000307e1) cell_highlight_pane_g10

0x0009,

0xf6ad,	// (0x0003de2d) cell_highlight_pane_g

0x5dc5,	// (0x00034545) bg_scroll_pane

0xa400,	// (0x00038b80) scroll_handle_pane

0x5e0c,	// (0x0003458c) scroll_bg_pane_g1

0x5e21,	// (0x000345a1) scroll_bg_pane_g2

0x5e39,	// (0x000345b9) scroll_bg_pane_g3

0x0002,

0xf704,	// (0x0003de84) scroll_bg_pane_g

0x5e4e,	// (0x000345ce) scroll_handle_focus_pane_ParamLimits

0x5e4e,	// (0x000345ce) scroll_handle_focus_pane

0x5e0c,	// (0x0003458c) scroll_handle_pane_g1

0x5e5b,	// (0x000345db) scroll_handle_pane_g2

0x5e39,	// (0x000345b9) scroll_handle_pane_g3

0x0002,

0xf70b,	// (0x0003de8b) scroll_handle_pane_g

0x2d3f,	// (0x000314bf) bg_popup_sub_pane_cp21_ParamLimits

0x2d3f,	// (0x000314bf) bg_popup_sub_pane_cp21

0x5e6f,	// (0x000345ef) popup_fep_japan_predictive_window_t1_ParamLimits

0x5e6f,	// (0x000345ef) popup_fep_japan_predictive_window_t1

0x5e86,	// (0x00034606) popup_fep_japan_predictive_window_t2_ParamLimits

0x5e86,	// (0x00034606) popup_fep_japan_predictive_window_t2

0x5eb9,	// (0x00034639) popup_fep_japan_predictive_window_t3_ParamLimits

0x5eb9,	// (0x00034639) popup_fep_japan_predictive_window_t3

0x0002,

0xf712,	// (0x0003de92) popup_fep_japan_predictive_window_t_ParamLimits

0xf712,	// (0x0003de92) popup_fep_japan_predictive_window_t

0x21ae,	// (0x0003092e) bg_popup_sub_pane_cp23

0x5ef0,	// (0x00034670) listscroll_japin_cand_pane

0x5ef8,	// (0x00034678) popup_fep_japan_candidate_window_t1

0x5f06,	// (0x00034686) candidate_pane_ParamLimits

0x5f06,	// (0x00034686) candidate_pane

0x5f19,	// (0x00034699) scroll_pane_cp30

0x5f21,	// (0x000346a1) list_single_popup_jap_candidate_pane_ParamLimits

0x5f21,	// (0x000346a1) list_single_popup_jap_candidate_pane

0x21ae,	// (0x0003092e) list_highlight_pane_cp30

0x5f36,	// (0x000346b6) list_single_popup_jap_candidate_pane_t1

0xa429,	// (0x00038ba9) level_1_signal

0xa436,	// (0x00038bb6) level_2_signal

0xa443,	// (0x00038bc3) level_3_signal

0xa450,	// (0x00038bd0) level_4_signal

0xa45d,	// (0x00038bdd) level_5_signal

0xa46a,	// (0x00038bea) level_6_signal

0xa477,	// (0x00038bf7) level_7_signal

0xa429,	// (0x00038ba9) level_1_battery

0xa436,	// (0x00038bb6) level_2_battery

0xa443,	// (0x00038bc3) level_3_battery

0xa450,	// (0x00038bd0) level_4_battery

0xa45d,	// (0x00038bdd) level_5_battery

0xa46a,	// (0x00038bea) level_6_battery

0xa477,	// (0x00038bf7) level_7_battery

0x5f5d,	// (0x000346dd) list_menu_pane_ParamLimits

0x5f5d,	// (0x000346dd) list_menu_pane

0x5f6e,	// (0x000346ee) scroll_pane_cp25_ParamLimits

0x5f6e,	// (0x000346ee) scroll_pane_cp25

0xa4a3,	// (0x00038c23) list_double2_graphic_pane_cp2_ParamLimits

0xa4a3,	// (0x00038c23) list_double2_graphic_pane_cp2

0xa4a3,	// (0x00038c23) list_double2_large_graphic_pane_cp2_ParamLimits

0xa4a3,	// (0x00038c23) list_double2_large_graphic_pane_cp2

0xa4a3,	// (0x00038c23) list_double2_pane_cp2_ParamLimits

0xa4a3,	// (0x00038c23) list_double2_pane_cp2

0xa4a3,	// (0x00038c23) list_double_graphic_pane_cp2_ParamLimits

0xa4a3,	// (0x00038c23) list_double_graphic_pane_cp2

0xa4a3,	// (0x00038c23) list_double_large_graphic_pane_cp2_ParamLimits

0xa4a3,	// (0x00038c23) list_double_large_graphic_pane_cp2

0xa4a3,	// (0x00038c23) list_double_number_pane_cp2_ParamLimits

0xa4a3,	// (0x00038c23) list_double_number_pane_cp2

0xa4a3,	// (0x00038c23) list_double_pane_cp2_ParamLimits

0xa4a3,	// (0x00038c23) list_double_pane_cp2

0xa4b3,	// (0x00038c33) list_single_2graphic_pane_cp2_ParamLimits

0xa4b3,	// (0x00038c33) list_single_2graphic_pane_cp2

0xa4b3,	// (0x00038c33) list_single_graphic_heading_pane_cp2_ParamLimits

0xa4b3,	// (0x00038c33) list_single_graphic_heading_pane_cp2

0xa4b3,	// (0x00038c33) list_single_graphic_pane_cp2_ParamLimits

0xa4b3,	// (0x00038c33) list_single_graphic_pane_cp2

0xa4b3,	// (0x00038c33) list_single_heading_pane_cp2_ParamLimits

0xa4b3,	// (0x00038c33) list_single_heading_pane_cp2

0xa4c8,	// (0x00038c48) list_single_large_graphic_pane_cp2_ParamLimits

0xa4c8,	// (0x00038c48) list_single_large_graphic_pane_cp2

0xa4b3,	// (0x00038c33) list_single_number_heading_pane_cp2_ParamLimits

0xa4b3,	// (0x00038c33) list_single_number_heading_pane_cp2

0xa4b3,	// (0x00038c33) list_single_number_pane_cp2_ParamLimits

0xa4b3,	// (0x00038c33) list_single_number_pane_cp2

0xa4b3,	// (0x00038c33) list_single_pane_cp2_ParamLimits

0xa4b3,	// (0x00038c33) list_single_pane_cp2

0x5f90,	// (0x00034710) bg_popup_sub_pane_cp22

0xa57d,	// (0x00038cfd) popup_side_volume_key_window_g1

0xa5a1,	// (0x00038d21) popup_side_volume_key_window_t1

0xa5bd,	// (0x00038d3d) volume_small_pane_cp1

0x2370,	// (0x00030af0) bg_popup_sub_pane_cp24_ParamLimits

0x2370,	// (0x00030af0) bg_popup_sub_pane_cp24

0x5fa6,	// (0x00034726) fep_china_uni_candidate_pane_ParamLimits

0x5fa6,	// (0x00034726) fep_china_uni_candidate_pane

0x5fba,	// (0x0003473a) fep_china_uni_entry_pane

0x5fca,	// (0x0003474a) popup_fep_china_uni_window_g1

0x5fe6,	// (0x00034766) fep_china_uni_entry_pane_g1

0x5fee,	// (0x0003476e) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x0003debf) fep_china_uni_entry_pane_g

0x5ff6,	// (0x00034776) fep_entry_item_pane

0x6000,	// (0x00034780) fep_candidate_item_pane

0x6008,	// (0x00034788) fep_china_uni_candidate_pane_g1

0x6010,	// (0x00034790) fep_china_uni_candidate_pane_g2

0x6018,	// (0x00034798) fep_china_uni_candidate_pane_g3

0x6020,	// (0x000347a0) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x0003dec4) fep_china_uni_candidate_pane_g

0x2061,	// (0x000307e1) fep_entry_item_pane_g1

0x6028,	// (0x000347a8) fep_entry_item_pane_t1_ParamLimits

0x6028,	// (0x000347a8) fep_entry_item_pane_t1

0x603e,	// (0x000347be) fep_candidate_item_pane_t1_ParamLimits

0x603e,	// (0x000347be) fep_candidate_item_pane_t1

0x6053,	// (0x000347d3) fep_candidate_item_pane_t2_ParamLimits

0x6053,	// (0x000347d3) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x0003decd) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x0003decd) fep_candidate_item_pane_t

0x23ba,	// (0x00030b3a) list_highlight_pane_cp31_ParamLimits

0x23ba,	// (0x00030b3a) list_highlight_pane_cp31

0x6065,	// (0x000347e5) level_1_signal_lsc

0x606e,	// (0x000347ee) level_2_signal_lsc

0x6077,	// (0x000347f7) level_3_signal_lsc

0x6080,	// (0x00034800) level_4_signal_lsc

0x6089,	// (0x00034809) level_5_signal_lsc

0x6092,	// (0x00034812) level_6_signal_lsc

0x609b,	// (0x0003481b) level_7_signal_lsc

0x609b,	// (0x0003481b) level_1_battery_lsc

0x60a4,	// (0x00034824) level_2_battery_lsc

0x60ad,	// (0x0003482d) level_3_battery_lsc

0x60b6,	// (0x00034836) level_4_battery_lsc

0x60bf,	// (0x0003483f) level_5_battery_lsc

0x60c8,	// (0x00034848) level_6_battery_lsc

0x6065,	// (0x000347e5) level_7_battery_lsc

0x60d1,	// (0x00034851) scroll_handle_focus_pane_g1

0x60da,	// (0x0003485a) scroll_handle_focus_pane_g2

0x60e3,	// (0x00034863) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x0003ded2) scroll_handle_focus_pane_g

0xee43,	// (0x0003d5c3) list_single_2graphic_pane_g1_ParamLimits

0xee43,	// (0x0003d5c3) list_single_2graphic_pane_g1

0xe7be,	// (0x0003cf3e) list_single_2graphic_pane_g2_ParamLimits

0xe7be,	// (0x0003cf3e) list_single_2graphic_pane_g2

0xe713,	// (0x0003ce93) list_single_2graphic_pane_g3_ParamLimits

0xe713,	// (0x0003ce93) list_single_2graphic_pane_g3

0xee4f,	// (0x0003d5cf) list_single_2graphic_pane_g4_ParamLimits

0xee4f,	// (0x0003d5cf) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x0003ded9) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x0003ded9) list_single_2graphic_pane_g

0xee5b,	// (0x0003d5db) list_single_2graphic_pane_t1_ParamLimits

0xee5b,	// (0x0003d5db) list_single_2graphic_pane_t1

0xf43d,	// (0x0003dbbd) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xf43d,	// (0x0003dbbd) list_double2_graphic_large_graphic_pane_g1

0xea0d,	// (0x0003d18d) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xea0d,	// (0x0003d18d) list_double2_graphic_large_graphic_pane_g2

0xe94b,	// (0x0003d0cb) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xe94b,	// (0x0003d0cb) list_double2_graphic_large_graphic_pane_g3

0xee89,	// (0x0003d609) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xee89,	// (0x0003d609) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x0003dee2) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x0003dee2) list_double2_graphic_large_graphic_pane_g

0xee95,	// (0x0003d615) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xee95,	// (0x0003d615) list_double2_graphic_large_graphic_pane_t1

0xeeab,	// (0x0003d62b) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xeeab,	// (0x0003d62b) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x0003deeb) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x0003deeb) list_double2_graphic_large_graphic_pane_t

0x61be,	// (0x0003493e) popup_fast_swap_window_ParamLimits

0x61be,	// (0x0003493e) popup_fast_swap_window

0x61da,	// (0x0003495a) popup_side_volume_key_window

0x61f4,	// (0x00034974) stacon_top_pane

0x61fe,	// (0x0003497e) status_pane_ParamLimits

0x61fe,	// (0x0003497e) status_pane

0x61f4,	// (0x00034974) status_small_pane

0x21ae,	// (0x0003092e) control_pane

0x21ae,	// (0x0003092e) stacon_bottom_pane

0x2bcc,	// (0x0003134c) scroll_pane_cp121

0x2c7e,	// (0x000313fe) set_content_pane

0xa5c5,	// (0x00038d45) bg_active_tab_pane_g1_cp1

0x60ec,	// (0x0003486c) bg_active_tab_pane_g2_cp1

0xa5ce,	// (0x00038d4e) bg_active_tab_pane_g3_cp1

0xa5c5,	// (0x00038d45) bg_passive_tab_pane_g1_cp1

0x60ec,	// (0x0003486c) bg_passive_tab_pane_g2_cp1

0xa5ce,	// (0x00038d4e) bg_passive_tab_pane_g3_cp1

0xa5d7,	// (0x00038d57) bg_active_tab_pane_g1_cp2

0x60ec,	// (0x0003486c) bg_active_tab_pane_g2_cp2

0xa5e0,	// (0x00038d60) bg_active_tab_pane_g3_cp2

0xa5d7,	// (0x00038d57) bg_passive_tab_pane_g1_cp2

0x60ec,	// (0x0003486c) bg_passive_tab_pane_g2_cp2

0xa5e0,	// (0x00038d60) bg_passive_tab_pane_g3_cp2

0xa5e9,	// (0x00038d69) bg_active_tab_pane_g1_cp3

0x60ec,	// (0x0003486c) bg_active_tab_pane_g2_cp3

0xa5f2,	// (0x00038d72) bg_active_tab_pane_g3_cp3

0xa5e9,	// (0x00038d69) bg_passive_tab_pane_g1_cp3

0x60ec,	// (0x0003486c) bg_passive_tab_pane_g2_cp3

0xa5f2,	// (0x00038d72) bg_passive_tab_pane_g3_cp3

0xa5fb,	// (0x00038d7b) bg_active_tab_pane_g1_cp4

0x60ec,	// (0x0003486c) bg_active_tab_pane_g2_cp4

0xa604,	// (0x00038d84) bg_active_tab_pane_g3_cp4

0xa5fb,	// (0x00038d7b) bg_passive_tab_pane_g1_cp4

0x60ec,	// (0x0003486c) bg_passive_tab_pane_g2_cp4

0xa604,	// (0x00038d84) bg_passive_tab_pane_g3_cp4

0x613c,	// (0x000348bc) bg_active_tab_pane_g1_cp5

0x60ec,	// (0x0003486c) bg_active_tab_pane_g2_cp5

0x6133,	// (0x000348b3) bg_active_tab_pane_g3_cp5

0x613c,	// (0x000348bc) bg_passive_tab_pane_g1_cp5

0x60ec,	// (0x0003486c) bg_passive_tab_pane_g2_cp5

0x6133,	// (0x000348b3) bg_passive_tab_pane_g3_cp5

0xa73a,	// (0x00038eba) list_set_graphic_pane_ParamLimits

0xa73a,	// (0x00038eba) list_set_graphic_pane

0x21ae,	// (0x0003092e) bg_set_opt_pane_cp4

0x6145,	// (0x000348c5) list_set_graphic_pane_g1_ParamLimits

0x6145,	// (0x000348c5) list_set_graphic_pane_g1

0x6151,	// (0x000348d1) list_set_graphic_pane_g2_ParamLimits

0x6151,	// (0x000348d1) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x0003def0) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x0003def0) list_set_graphic_pane_g

0x0009,

0xfad7,	// (0x0003e257) volume_small_pane_cp_g

0x6173,	// (0x000348f3) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x6173,	// (0x000348f3) list_double2_large_graphic_pane_g1_cp2

0x617f,	// (0x000348ff) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x617f,	// (0x000348ff) list_double2_large_graphic_pane_g2_cp2

0x618e,	// (0x0003490e) list_double2_large_graphic_pane_g3_cp2

0x6196,	// (0x00034916) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x6196,	// (0x00034916) list_double2_large_graphic_pane_t1_cp2

0x61ac,	// (0x0003492c) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x61ac,	// (0x0003492c) list_double2_large_graphic_pane_t2_cp2

0x7987,	// (0x00036107) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x7987,	// (0x00036107) list_double_large_graphic_pane_g1_cp2

0x7998,	// (0x00036118) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x7998,	// (0x00036118) list_double_large_graphic_pane_g2_cp2

0x62d9,	// (0x00034a59) list_double_large_graphic_pane_g3_cp2

0x79a7,	// (0x00036127) list_double_large_graphic_pane_g4_cp

0x79af,	// (0x0003612f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x79af,	// (0x0003612f) list_double_large_graphic_pane_t1_cp2

0x79c6,	// (0x00036146) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x79c6,	// (0x00036146) list_double_large_graphic_pane_t2_cp2

0x620c,	// (0x0003498c) list_double2_graphic_pane_g1_cp2_ParamLimits

0x620c,	// (0x0003498c) list_double2_graphic_pane_g1_cp2

0x6218,	// (0x00034998) list_double2_graphic_pane_g2_cp2_ParamLimits

0x6218,	// (0x00034998) list_double2_graphic_pane_g2_cp2

0x6227,	// (0x000349a7) list_double2_graphic_pane_g3_cp2

0x622f,	// (0x000349af) list_double2_graphic_pane_t1_cp2_ParamLimits

0x622f,	// (0x000349af) list_double2_graphic_pane_t1_cp2

0x6245,	// (0x000349c5) list_double2_graphic_pane_t2_cp2_ParamLimits

0x6245,	// (0x000349c5) list_double2_graphic_pane_t2_cp2

0x6257,	// (0x000349d7) list_single_number_heading_pane_g1_cp2_ParamLimits

0x6257,	// (0x000349d7) list_single_number_heading_pane_g1_cp2

0x6263,	// (0x000349e3) list_single_number_heading_pane_g2_cp2

0x626b,	// (0x000349eb) list_single_number_heading_pane_t1_cp2_ParamLimits

0x626b,	// (0x000349eb) list_single_number_heading_pane_t1_cp2

0x6281,	// (0x00034a01) list_single_number_heading_pane_t2_cp2_ParamLimits

0x6281,	// (0x00034a01) list_single_number_heading_pane_t2_cp2

0x6293,	// (0x00034a13) list_single_number_heading_pane_t3_cp2_ParamLimits

0x6293,	// (0x00034a13) list_single_number_heading_pane_t3_cp2

0x6257,	// (0x000349d7) list_single_heading_pane_g1_cp2_ParamLimits

0x6257,	// (0x000349d7) list_single_heading_pane_g1_cp2

0x6263,	// (0x000349e3) list_single_heading_pane_g2_cp2

0x626b,	// (0x000349eb) list_single_heading_pane_t1_cp2_ParamLimits

0x626b,	// (0x000349eb) list_single_heading_pane_t1_cp2

0x7791,	// (0x00035f11) list_single_heading_pane_t2_cp2_ParamLimits

0x7791,	// (0x00035f11) list_single_heading_pane_t2_cp2

0x7716,	// (0x00035e96) list_double_graphic_pane_g1_cp2_ParamLimits

0x7716,	// (0x00035e96) list_double_graphic_pane_g1_cp2

0x7722,	// (0x00035ea2) list_double_graphic_pane_g2_cp2_ParamLimits

0x7722,	// (0x00035ea2) list_double_graphic_pane_g2_cp2

0x7731,	// (0x00035eb1) list_double_graphic_pane_g3_cp2

0x7739,	// (0x00035eb9) list_double_graphic_pane_t1_cp2_ParamLimits

0x7739,	// (0x00035eb9) list_double_graphic_pane_t1_cp2

0x774f,	// (0x00035ecf) list_double_graphic_pane_t2_cp2_ParamLimits

0x774f,	// (0x00035ecf) list_double_graphic_pane_t2_cp2

0x62cd,	// (0x00034a4d) list_double_number_pane_g1_cp2_ParamLimits

0x62cd,	// (0x00034a4d) list_double_number_pane_g1_cp2

0x62d9,	// (0x00034a59) list_double_number_pane_g2_cp2

0x76dc,	// (0x00035e5c) list_double_number_pane_t1_cp2_ParamLimits

0x76dc,	// (0x00035e5c) list_double_number_pane_t1_cp2

0x76ee,	// (0x00035e6e) list_double_number_pane_t2_cp2_ParamLimits

0x76ee,	// (0x00035e6e) list_double_number_pane_t2_cp2

0x7704,	// (0x00035e84) list_double_number_pane_t3_cp2_ParamLimits

0x7704,	// (0x00035e84) list_double_number_pane_t3_cp2

0x7654,	// (0x00035dd4) list_single_graphic_pane_g1_cp2_ParamLimits

0x7654,	// (0x00035dd4) list_single_graphic_pane_g1_cp2

0x6257,	// (0x000349d7) list_single_graphic_pane_g2_cp2_ParamLimits

0x6257,	// (0x000349d7) list_single_graphic_pane_g2_cp2

0x6263,	// (0x000349e3) list_single_graphic_pane_g3_cp2

0x762c,	// (0x00035dac) list_single_graphic_pane_t1_cp2_ParamLimits

0x762c,	// (0x00035dac) list_single_graphic_pane_t1_cp2

0x6257,	// (0x000349d7) list_single_number_pane_g1_cp2_ParamLimits

0x6257,	// (0x000349d7) list_single_number_pane_g1_cp2

0x6263,	// (0x000349e3) list_single_number_pane_g2_cp2

0x762c,	// (0x00035dac) list_single_number_pane_t1_cp2_ParamLimits

0x762c,	// (0x00035dac) list_single_number_pane_t1_cp2

0x7642,	// (0x00035dc2) list_single_number_pane_t2_cp2_ParamLimits

0x7642,	// (0x00035dc2) list_single_number_pane_t2_cp2

0x617f,	// (0x000348ff) list_double2_pane_g1_cp2_ParamLimits

0x617f,	// (0x000348ff) list_double2_pane_g1_cp2

0x618e,	// (0x0003490e) list_double2_pane_g2_cp2

0x62a5,	// (0x00034a25) list_double2_pane_t1_cp2_ParamLimits

0x62a5,	// (0x00034a25) list_double2_pane_t1_cp2

0x62bb,	// (0x00034a3b) list_double2_pane_t2_cp2_ParamLimits

0x62bb,	// (0x00034a3b) list_double2_pane_t2_cp2

0x62cd,	// (0x00034a4d) list_double_pane_g1_cp2_ParamLimits

0x62cd,	// (0x00034a4d) list_double_pane_g1_cp2

0x62d9,	// (0x00034a59) list_double_pane_g2_cp2

0x62e1,	// (0x00034a61) list_double_pane_t1_cp2_ParamLimits

0x62e1,	// (0x00034a61) list_double_pane_t1_cp2

0x62f7,	// (0x00034a77) list_double_pane_t2_cp2_ParamLimits

0x62f7,	// (0x00034a77) list_double_pane_t2_cp2

0x631f,	// (0x00034a9f) list_single_pane_cp2_g3

0x6257,	// (0x000349d7) list_single_pane_g1_cp2_ParamLimits

0x6257,	// (0x000349d7) list_single_pane_g1_cp2

0x6263,	// (0x000349e3) list_single_pane_g2_cp2

0x632f,	// (0x00034aaf) list_single_pane_t1_cp2_ParamLimits

0x632f,	// (0x00034aaf) list_single_pane_t1_cp2

0x6347,	// (0x00034ac7) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x6347,	// (0x00034ac7) list_single_large_graphic_pane_g1_cp2

0x6353,	// (0x00034ad3) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x6353,	// (0x00034ad3) list_single_large_graphic_pane_g2_cp2

0x635f,	// (0x00034adf) list_single_large_graphic_pane_g3_cp2

0x6367,	// (0x00034ae7) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x6367,	// (0x00034ae7) list_single_large_graphic_pane_g4_cp1

0x6381,	// (0x00034b01) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x6381,	// (0x00034b01) list_single_large_graphic_pane_t1_cp2

0x7429,	// (0x00035ba9) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x7429,	// (0x00035ba9) list_single_graphic_heading_pane_g1_cp2

0x7404,	// (0x00035b84) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x7404,	// (0x00035b84) list_single_graphic_heading_pane_g4_cp2

0x6263,	// (0x000349e3) list_single_graphic_heading_pane_g5_cp2

0x626b,	// (0x000349eb) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x626b,	// (0x000349eb) list_single_graphic_heading_pane_t1_cp2

0x7435,	// (0x00035bb5) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x7435,	// (0x00035bb5) list_single_graphic_heading_pane_t2_cp2

0x73f8,	// (0x00035b78) list_single_2graphic_pane_g1_cp2_ParamLimits

0x73f8,	// (0x00035b78) list_single_2graphic_pane_g1_cp2

0x7404,	// (0x00035b84) list_single_2graphic_pane_g2_cp2_ParamLimits

0x7404,	// (0x00035b84) list_single_2graphic_pane_g2_cp2

0x6263,	// (0x000349e3) list_single_2graphic_pane_g3_cp2

0x6938,	// (0x000350b8) list_single_2graphic_pane_g4_cp2_ParamLimits

0x6938,	// (0x000350b8) list_single_2graphic_pane_g4_cp2

0x7413,	// (0x00035b93) list_single_2graphic_pane_t1_cp2_ParamLimits

0x7413,	// (0x00035b93) list_single_2graphic_pane_t1_cp2

0x2061,	// (0x000307e1) list_highlight_pane_g10_cp1

0x700a,	// (0x0003578a) list_highlight_pane_g1_cp1

0x7012,	// (0x00035792) list_highlight_pane_g2_cp1

0x701a,	// (0x0003579a) list_highlight_pane_g3_cp1

0x7022,	// (0x000357a2) list_highlight_pane_g4_cp1

0x702a,	// (0x000357aa) list_highlight_pane_g5_cp1

0x7032,	// (0x000357b2) list_highlight_pane_g6_cp1

0x703a,	// (0x000357ba) list_highlight_pane_g7_cp1

0x7042,	// (0x000357c2) list_highlight_pane_g8_cp1

0x704a,	// (0x000357ca) list_highlight_pane_g9_cp1

0xb2b9,	// (0x00039a39) form_field_slider_pane_t3

0xb2c7,	// (0x00039a47) form_field_slider_pane_t4

0x6f54,	// (0x000356d4) slider_form_pane_ParamLimits

0x6f54,	// (0x000356d4) slider_form_pane

0x21ae,	// (0x0003092e) control_abbreviations

0x21ae,	// (0x0003092e) control_conventions

0x21ae,	// (0x0003092e) control_definitions

0x21ae,	// (0x0003092e) format_table_attribute

0x77db,	// (0x00035f5b) bg_popup_preview_window_pane_g9

0x21ae,	// (0x0003092e) format_table_data2

0x21ae,	// (0x0003092e) format_table_data3

0x21ae,	// (0x0003092e) format_table_data_example

0x0008,

0x21ae,	// (0x0003092e) intro_purpose

0xf900,	// (0x0003e080) bg_popup_preview_window_pane_g

0x21ae,	// (0x0003092e) texts_category

0x21ae,	// (0x0003092e) texts_graphics

0x6397,	// (0x00034b17) text_digital

0x63a6,	// (0x00034b26) text_primary

0x63b5,	// (0x00034b35) text_primary_small

0x63c4,	// (0x00034b44) text_secondary

0x63d3,	// (0x00034b53) text_title

0x7c71,	// (0x000363f1) bg_passive_tab_pane_g1_cp3_srt

0x60ec,	// (0x0003486c) bg_passive_tab_pane_g2_cp3_srt

0x7c68,	// (0x000363e8) bg_passive_tab_pane_g3_cp3_srt

0x23ba,	// (0x00030b3a) bg_active_tab_pane_cp3_srt_ParamLimits

0x23ba,	// (0x00030b3a) bg_active_tab_pane_cp3_srt

0x75fe,	// (0x00035d7e) tabs_4_active_pane_srt_g1

0x9f6f,	// (0x000386ef) tabs_4_active_pane_srt_t1_ParamLimits

0x9f6f,	// (0x000386ef) tabs_4_active_pane_srt_t1

0x7c71,	// (0x000363f1) bg_active_tab_pane_g1_cp3_copy1

0x60ec,	// (0x0003486c) bg_active_tab_pane_g2_cp3_copy1

0x7c68,	// (0x000363e8) bg_active_tab_pane_g3_cp3_copy1

0x23ba,	// (0x00030b3a) tabs_2_long_active_pane_srt_ParamLimits

0x23ba,	// (0x00030b3a) tabs_2_long_active_pane_srt

0x23ba,	// (0x00030b3a) tabs_2_long_passive_pane_srt_ParamLimits

0x23ba,	// (0x00030b3a) tabs_2_long_passive_pane_srt

0xa230,	// (0x000389b0) bg_passive_tab_pane_cp4_srt_ParamLimits

0xa230,	// (0x000389b0) bg_passive_tab_pane_cp4_srt

0x7ba7,	// (0x00036327) bg_passive_tab_pane_g1_cp4_srt

0x60ec,	// (0x0003486c) bg_passive_tab_pane_g2_cp4_srt

0x7b9e,	// (0x0003631e) bg_passive_tab_pane_g3_cp4_srt

0x7457,	// (0x00035bd7) bg_active_tab_pane_cp4_srt_ParamLimits

0x7457,	// (0x00035bd7) bg_active_tab_pane_cp4_srt

0xa21d,	// (0x0003899d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa21d,	// (0x0003899d) tabs_2_long_active_pane_srt_t1

0x7ba7,	// (0x00036327) bg_active_tab_pane_g1_cp4_srt

0x60ec,	// (0x0003486c) bg_active_tab_pane_g2_cp4_srt

0x7b9e,	// (0x0003631e) bg_active_tab_pane_g3_cp4_srt

0x2370,	// (0x00030af0) tabs_3_long_active_pane_srt_ParamLimits

0x2370,	// (0x00030af0) tabs_3_long_active_pane_srt

0x2370,	// (0x00030af0) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2370,	// (0x00030af0) tabs_3_long_passive_pane_cp_srt

0x2370,	// (0x00030af0) tabs_3_long_passive_pane_srt_ParamLimits

0x2370,	// (0x00030af0) tabs_3_long_passive_pane_srt

0xa230,	// (0x000389b0) bg_passive_tab_pane_cp5_srt_ParamLimits

0xa230,	// (0x000389b0) bg_passive_tab_pane_cp5_srt

0x613c,	// (0x000348bc) bg_passive_tab_pane_g1_cp5_srt

0x60ec,	// (0x0003486c) bg_passive_tab_pane_g2_cp5_srt

0x6133,	// (0x000348b3) bg_passive_tab_pane_g3_cp5_srt

0x7457,	// (0x00035bd7) bg_active_tab_pane_cp5_srt_ParamLimits

0x7457,	// (0x00035bd7) bg_active_tab_pane_cp5_srt

0xa23c,	// (0x000389bc) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa23c,	// (0x000389bc) tabs_3_long_active_pane_srt_t1

0x613c,	// (0x000348bc) bg_active_tab_pane_g1_cp5_srt

0x60ec,	// (0x0003486c) bg_active_tab_pane_g2_cp5_srt

0x6133,	// (0x000348b3) bg_active_tab_pane_g3_cp5_srt

0x7b90,	// (0x00036310) navi_text_pane_srt_t1

0x7b88,	// (0x00036308) navi_icon_pane_srt_g1

0x64eb,	// (0x00034c6b) midp_editing_number_pane_srt

0x63e2,	// (0x00034b62) midp_ticker_pane_srt

0x64f3,	// (0x00034c73) midp_ticker_pane_srt_g1

0x64fb,	// (0x00034c7b) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x0003df0f) midp_ticker_pane_srt_g

0x6503,	// (0x00034c83) midp_ticker_pane_srt_t1

0x7b79,	// (0x000362f9) midp_editing_number_pane_t1_copy1

0xa750,	// (0x00038ed0) listscroll_midp_pane

0xa750,	// (0x00038ed0) midp_form_pane

0x63ea,	// (0x00034b6a) midp_info_popup_window_ParamLimits

0x63ea,	// (0x00034b6a) midp_info_popup_window

0x2d3f,	// (0x000314bf) bg_popup_sub_pane_cp50_ParamLimits

0x2d3f,	// (0x000314bf) bg_popup_sub_pane_cp50

0x6c7d,	// (0x000353fd) listscroll_midp_info_pane_ParamLimits

0x6c7d,	// (0x000353fd) listscroll_midp_info_pane

0x6c65,	// (0x000353e5) listscroll_form_midp_pane_ParamLimits

0x6c65,	// (0x000353e5) listscroll_form_midp_pane

0x6c71,	// (0x000353f1) scroll_bar_cp050

0xb2a1,	// (0x00039a21) list_midp_pane

0x847d,	// (0x00036bfd) signal_pane_g2_cp

0x6b97,	// (0x00035317) listscroll_midp_info_pane_t1_ParamLimits

0x6b97,	// (0x00035317) listscroll_midp_info_pane_t1

0x6baf,	// (0x0003532f) listscroll_midp_info_pane_t2_ParamLimits

0x6baf,	// (0x0003532f) listscroll_midp_info_pane_t2

0x6bed,	// (0x0003536d) listscroll_midp_info_pane_t3_ParamLimits

0x6bed,	// (0x0003536d) listscroll_midp_info_pane_t3

0x6c27,	// (0x000353a7) listscroll_midp_info_pane_t4_ParamLimits

0x6c27,	// (0x000353a7) listscroll_midp_info_pane_t4

0x0003,

0xf83b,	// (0x0003dfbb) listscroll_midp_info_pane_t_ParamLimits

0xf83b,	// (0x0003dfbb) listscroll_midp_info_pane_t

0x2dee,	// (0x0003156e) scroll_pane_cp21

0x6b3b,	// (0x000352bb) form_midp_field_choice_group_pane

0x6b44,	// (0x000352c4) form_midp_field_text_pane

0x6b7d,	// (0x000352fd) form_midp_field_time_pane

0x6b85,	// (0x00035305) form_midp_gauge_slider_pane

0x6b8e,	// (0x0003530e) form_midp_gauge_wait_pane

0x21ae,	// (0x0003092e) form_midp_image_pane

0xef21,	// (0x0003d6a1) list_single_midp_pane_ParamLimits

0xef21,	// (0x0003d6a1) list_single_midp_pane

0xb27e,	// (0x000399fe) form_midp_field_text_pane_t1

0x69ea,	// (0x0003516a) input_focus_pane_cp050

0x6b2a,	// (0x000352aa) list_midp_form_text_pane

0x6af9,	// (0x00035279) form_midp_field_choice_group_pane_t1

0x6b07,	// (0x00035287) input_focus_pane_cp051

0x6b1b,	// (0x0003529b) list_midp_choice_pane

0x21ae,	// (0x0003092e) status_idle_pane

0x6add,	// (0x0003525d) form_midp_field_time_pane_t1

0x2061,	// (0x000307e1) wait_anim_pane_g2_copy1

0x6aeb,	// (0x0003526b) form_midp_field_time_pane_t2

0x0001,

0x6455,	// (0x00034bd5) aid_navinavi_width_2_pane

0xf836,	// (0x0003dfb6) form_midp_field_time_pane_t

0x21ae,	// (0x0003092e) input_focus_pane_cp052

0x21ae,	// (0x0003092e) bg_input_focus_pane_cp040

0x6ab9,	// (0x00035239) form_midp_gauge_slider_pane_t1

0x6ac7,	// (0x00035247) form_midp_gauge_slider_pane_t2

0xb262,	// (0x000399e2) form_midp_gauge_slider_pane_t3

0xb270,	// (0x000399f0) form_midp_gauge_slider_pane_t4

0x0003,

0xf82d,	// (0x0003dfad) form_midp_gauge_slider_pane_t

0x6ad5,	// (0x00035255) form_midp_slider_pane

0x23ba,	// (0x00030b3a) bg_input_focus_pane_cp041_ParamLimits

0x23ba,	// (0x00030b3a) bg_input_focus_pane_cp041

0x6a89,	// (0x00035209) form_midp_gauge_wait_pane_t1_ParamLimits

0x6a89,	// (0x00035209) form_midp_gauge_wait_pane_t1

0x6a9b,	// (0x0003521b) form_midp_gauge_wait_pane_t2_ParamLimits

0x6a9b,	// (0x0003521b) form_midp_gauge_wait_pane_t2

0x0001,

0xf828,	// (0x0003dfa8) form_midp_gauge_wait_pane_t_ParamLimits

0xf828,	// (0x0003dfa8) form_midp_gauge_wait_pane_t

0x6aad,	// (0x0003522d) form_midp_wait_pane_ParamLimits

0x6aad,	// (0x0003522d) form_midp_wait_pane

0x6a53,	// (0x000351d3) form_midp_image_pane_g1

0x6a5c,	// (0x000351dc) form_midp_image_pane_t1

0x6a6b,	// (0x000351eb) form_midp_image_pane_t2

0x6a7a,	// (0x000351fa) form_midp_image_pane_t3

0x0002,

0xf821,	// (0x0003dfa1) form_midp_image_pane_t

0x6a4a,	// (0x000351ca) list_single_midp_pane_g1

0xef12,	// (0x0003d692) list_single_midp_pane_t1

0xb24c,	// (0x000399cc) list_midp_form_item_pane_ParamLimits

0xb24c,	// (0x000399cc) list_midp_form_item_pane

0x63fd,	// (0x00034b7d) list_midp_form_item_pane_t1

0x640c,	// (0x00034b8c) midp_ticker_pane_g1

0x6418,	// (0x00034b98) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x0003def5) midp_ticker_pane_g

0x6424,	// (0x00034ba4) midp_ticker_pane_t1

0x7b79,	// (0x000362f9) midp_editing_number_pane_t1

0x7c01,	// (0x00036381) midp_editing_number_pane

0x7c0d,	// (0x0003638d) midp_ticker_pane

0x7b69,	// (0x000362e9) ai_message_heading_pane

0x21ae,	// (0x0003092e) bg_popup_window_pane_cp14

0x7b71,	// (0x000362f1) listscroll_ai_message_pane

0x7af3,	// (0x00036273) ai_message_heading_pane_g1_ParamLimits

0x7af3,	// (0x00036273) ai_message_heading_pane_g1

0x7aff,	// (0x0003627f) ai_message_heading_pane_g2_ParamLimits

0x7aff,	// (0x0003627f) ai_message_heading_pane_g2

0x7b0b,	// (0x0003628b) ai_message_heading_pane_g3_ParamLimits

0x7b0b,	// (0x0003628b) ai_message_heading_pane_g3

0x7b17,	// (0x00036297) ai_message_heading_pane_g4_ParamLimits

0x7b17,	// (0x00036297) ai_message_heading_pane_g4

0x0003,

0xf962,	// (0x0003e0e2) ai_message_heading_pane_g_ParamLimits

0xf962,	// (0x0003e0e2) ai_message_heading_pane_g

0x7b23,	// (0x000362a3) ai_message_heading_pane_t1_ParamLimits

0x7b23,	// (0x000362a3) ai_message_heading_pane_t1

0x7b3d,	// (0x000362bd) ai_message_heading_pane_t2_ParamLimits

0x7b3d,	// (0x000362bd) ai_message_heading_pane_t2

0x0001,

0xf96b,	// (0x0003e0eb) ai_message_heading_pane_t_ParamLimits

0xf96b,	// (0x0003e0eb) ai_message_heading_pane_t

0x7b4f,	// (0x000362cf) bg_popup_heading_pane_cp1_ParamLimits

0x7b4f,	// (0x000362cf) bg_popup_heading_pane_cp1

0x7ae1,	// (0x00036261) list_ai_message_pane_ParamLimits

0x7ae1,	// (0x00036261) list_ai_message_pane

0x2dee,	// (0x0003156e) scroll_pane_cp10

0x7a7d,	// (0x000361fd) list_ai_message_pane_g1

0x7a85,	// (0x00036205) list_ai_message_pane_g2

0x0001,

0xf93f,	// (0x0003e0bf) list_ai_message_pane_g

0x7a8d,	// (0x0003620d) list_ai_message_pane_t1_ParamLimits

0x7a8d,	// (0x0003620d) list_ai_message_pane_t1

0x7aa2,	// (0x00036222) list_ai_message_pane_t2_ParamLimits

0x7aa2,	// (0x00036222) list_ai_message_pane_t2

0x7ab7,	// (0x00036237) list_ai_message_pane_t3_ParamLimits

0x7ab7,	// (0x00036237) list_ai_message_pane_t3

0x7acc,	// (0x0003624c) list_ai_message_pane_t4_ParamLimits

0x7acc,	// (0x0003624c) list_ai_message_pane_t4

0x0003,

0xf944,	// (0x0003e0c4) list_ai_message_pane_t_ParamLimits

0xf944,	// (0x0003e0c4) list_ai_message_pane_t

0x7a6b,	// (0x000361eb) cell_ai_soft_ind_pane_ParamLimits

0x7a6b,	// (0x000361eb) cell_ai_soft_ind_pane

0x6436,	// (0x00034bb6) cell_ai_soft_ind_pane_g1_ParamLimits

0x6436,	// (0x00034bb6) cell_ai_soft_ind_pane_g1

0x21ae,	// (0x0003092e) grid_highlight_cp1

0x6443,	// (0x00034bc3) text_secondary_cp56_ParamLimits

0x6443,	// (0x00034bc3) text_secondary_cp56

0x7a40,	// (0x000361c0) example_general_pane_ParamLimits

0x7a40,	// (0x000361c0) example_general_pane

0x7a4c,	// (0x000361cc) example_parent_pane_g1_ParamLimits

0x7a4c,	// (0x000361cc) example_parent_pane_g1

0x7a58,	// (0x000361d8) example_parent_pane_t1_ParamLimits

0x7a58,	// (0x000361d8) example_parent_pane_t1

0xac4f,	// (0x000393cf) popup_preview_text_window_ParamLimits

0xac4f,	// (0x000393cf) popup_preview_text_window

0x6327,	// (0x00034aa7) list_single_pane_cp2_g4

0x27b7,	// (0x00030f37) bg_popup_preview_window_pane_ParamLimits

0x27b7,	// (0x00030f37) bg_popup_preview_window_pane

0x77e3,	// (0x00035f63) popup_preview_text_window_t1_ParamLimits

0x77e3,	// (0x00035f63) popup_preview_text_window_t1

0x7801,	// (0x00035f81) popup_preview_text_window_t2_ParamLimits

0x7801,	// (0x00035f81) popup_preview_text_window_t2

0x784a,	// (0x00035fca) popup_preview_text_window_t3_ParamLimits

0x784a,	// (0x00035fca) popup_preview_text_window_t3

0x788f,	// (0x0003600f) popup_preview_text_window_t4_ParamLimits

0x788f,	// (0x0003600f) popup_preview_text_window_t4

0x0004,

0xf913,	// (0x0003e093) popup_preview_text_window_t_ParamLimits

0xf913,	// (0x0003e093) popup_preview_text_window_t

0x790d,	// (0x0003608d) scroll_pane_cp11

0x68f0,	// (0x00035070) bg_popup_preview_window_pane_g1

0x77a3,	// (0x00035f23) bg_popup_preview_window_pane_g2

0x77ab,	// (0x00035f2b) bg_popup_preview_window_pane_g3

0x77b3,	// (0x00035f33) bg_popup_preview_window_pane_g4

0x77bb,	// (0x00035f3b) bg_popup_preview_window_pane_g5

0x77c3,	// (0x00035f43) bg_popup_preview_window_pane_g6

0x77cb,	// (0x00035f4b) bg_popup_preview_window_pane_g7

0x77d3,	// (0x00035f53) bg_popup_preview_window_pane_g8

0x9bd9,	// (0x00038359) aid_popup_width_pane

0xac31,	// (0x000393b1) popup_midp_note_alarm_window_ParamLimits

0xac31,	// (0x000393b1) popup_midp_note_alarm_window

0x2c87,	// (0x00031407) data_form_pane_ParamLimits

0xeca9,	// (0x0003d429) form_field_data_pane_g1

0xecb1,	// (0x0003d431) form_field_data_pane_t1_ParamLimits

0x2c93,	// (0x00031413) input_focus_pane_ParamLimits

0x2ca1,	// (0x00031421) data_form_wide_pane_ParamLimits

0xecc9,	// (0x0003d449) form_field_data_wide_pane_g1

0xecd5,	// (0x0003d455) form_field_data_wide_pane_t1_ParamLimits

0x2a43,	// (0x000311c3) input_focus_pane_cp6_ParamLimits

0xa1f7,	// (0x00038977) input_popup_find_pane_g1_ParamLimits

0xa1f7,	// (0x00038977) input_popup_find_pane_g1

0xa308,	// (0x00038a88) aid_navi_side_left_pane

0xa318,	// (0x00038a98) aid_navi_side_right_pane

0x70db,	// (0x0003585b) bg_popup_window_pane_cp30_ParamLimits

0x70db,	// (0x0003585b) bg_popup_window_pane_cp30

0x7155,	// (0x000358d5) popup_midp_note_alarm_window_g1_ParamLimits

0x7155,	// (0x000358d5) popup_midp_note_alarm_window_g1

0x7185,	// (0x00035905) popup_midp_note_alarm_window_t1_ParamLimits

0x7185,	// (0x00035905) popup_midp_note_alarm_window_t1

0x7226,	// (0x000359a6) popup_midp_note_alarm_window_t2_ParamLimits

0x7226,	// (0x000359a6) popup_midp_note_alarm_window_t2

0x72d4,	// (0x00035a54) popup_midp_note_alarm_window_t3_ParamLimits

0x72d4,	// (0x00035a54) popup_midp_note_alarm_window_t3

0x72fc,	// (0x00035a7c) popup_midp_note_alarm_window_t4_ParamLimits

0x72fc,	// (0x00035a7c) popup_midp_note_alarm_window_t4

0x731c,	// (0x00035a9c) popup_midp_note_alarm_window_t5_ParamLimits

0x731c,	// (0x00035a9c) popup_midp_note_alarm_window_t5

0x000a,

0xf8b0,	// (0x0003e030) popup_midp_note_alarm_window_t_ParamLimits

0xf8b0,	// (0x0003e030) popup_midp_note_alarm_window_t

0x73c8,	// (0x00035b48) wait_bar_pane_cp1_ParamLimits

0x73c8,	// (0x00035b48) wait_bar_pane_cp1

0x21ae,	// (0x0003092e) wait_anim_pane_copy1

0x21ae,	// (0x0003092e) wait_border_pane_copy1

0x6e21,	// (0x000355a1) wait_border_pane_g1_copy1

0xecef,	// (0x0003d46f) form_field_popup_pane_g1

0xecf7,	// (0x0003d477) form_field_popup_pane_t1_ParamLimits

0x2c93,	// (0x00031413) input_focus_pane_cp7_ParamLimits

0x2c87,	// (0x00031407) list_form_pane_ParamLimits

0xed0f,	// (0x0003d48f) form_field_popup_wide_pane_g1

0xed17,	// (0x0003d497) form_field_popup_wide_pane_t1_ParamLimits

0x2c93,	// (0x00031413) input_focus_pane_cp8_ParamLimits

0x2ccd,	// (0x0003144d) list_form_wide_pane_ParamLimits

0x7c99,	// (0x00036419) aid_size_cell_graphic_pane

0xeda3,	// (0x0003d523) data_form_pane_t1_ParamLimits

0xef4a,	// (0x0003d6ca) data_form_wide_pane_t1_ParamLimits

0xae55,	// (0x000395d5) bg_status_flat_pane

0x9eed,	// (0x0003866d) title_pane_t1_ParamLimits

0x2338,	// (0x00030ab8) title_pane_t2_ParamLimits

0x235e,	// (0x00030ade) title_pane_t3_ParamLimits

0xf573,	// (0x0003dcf3) title_pane_t_ParamLimits

0xa429,	// (0x00038ba9) level_1_signal_ParamLimits

0xa436,	// (0x00038bb6) level_2_signal_ParamLimits

0xa443,	// (0x00038bc3) level_3_signal_ParamLimits

0xa450,	// (0x00038bd0) level_4_signal_ParamLimits

0xa45d,	// (0x00038bdd) level_5_signal_ParamLimits

0xa46a,	// (0x00038bea) level_6_signal_ParamLimits

0xa477,	// (0x00038bf7) level_7_signal_ParamLimits

0xa429,	// (0x00038ba9) level_1_battery_ParamLimits

0xa436,	// (0x00038bb6) level_2_battery_ParamLimits

0xa443,	// (0x00038bc3) level_3_battery_ParamLimits

0xa450,	// (0x00038bd0) level_4_battery_ParamLimits

0xa45d,	// (0x00038bdd) level_5_battery_ParamLimits

0xa46a,	// (0x00038bea) level_6_battery_ParamLimits

0xa477,	// (0x00038bf7) level_7_battery_ParamLimits

0x700a,	// (0x0003578a) bg_status_flat_pane_g1

0x7012,	// (0x00035792) bg_status_flat_pane_g2

0x701a,	// (0x0003579a) bg_status_flat_pane_g3

0x7022,	// (0x000357a2) bg_status_flat_pane_g4

0x702a,	// (0x000357aa) bg_status_flat_pane_g5

0x7032,	// (0x000357b2) bg_status_flat_pane_g6

0x703a,	// (0x000357ba) bg_status_flat_pane_g7

0x9f55,	// (0x000386d5) tabs_3_active_pane_t1_ParamLimits

0x9f55,	// (0x000386d5) tabs_3_passive_pane_t1_ParamLimits

0x9f6f,	// (0x000386ef) tabs_4_active_pane_t1_ParamLimits

0x9f6f,	// (0x000386ef) tabs_4_1_passive_pane_t1_ParamLimits

0xa20b,	// (0x0003898b) tabs_2_active_pane_t1_ParamLimits

0xa20b,	// (0x0003898b) tabs_2_passive_pane_t1_ParamLimits

0x7457,	// (0x00035bd7) bg_active_tab_pane_cp4_ParamLimits

0xa21d,	// (0x0003899d) tabs_2_long_active_pane_t1_ParamLimits

0xa230,	// (0x000389b0) bg_passive_tab_pane_cp4_ParamLimits

0xb141,	// (0x000398c1) list_single_midp_graphic_pane_t1_ParamLimits

0x7457,	// (0x00035bd7) bg_active_tab_pane_cp5_ParamLimits

0xa23c,	// (0x000389bc) tabs_3_long_active_pane_t1_ParamLimits

0xa230,	// (0x000389b0) bg_passive_tab_pane_cp5_ParamLimits

0xb141,	// (0x000398c1) list_single_midp_graphic_pane_t1

0xae55,	// (0x000395d5) bg_status_flat_pane_ParamLimits

0x67cf,	// (0x00034f4f) indicator_pane_cp2_ParamLimits

0x67cf,	// (0x00034f4f) indicator_pane_cp2

0xaf98,	// (0x00039718) navi_pane_srt_ParamLimits

0xaf98,	// (0x00039718) navi_pane_srt

0x67f7,	// (0x00034f77) popup_clock_digital_analogue_window_cp1

0x2542,	// (0x00030cc2) indicator_pane_t1

0x63e2,	// (0x00034b62) copy_highlight_pane

0x63e2,	// (0x00034b62) cursor_graphics_pane

0x63e2,	// (0x00034b62) graphic_within_text_pane

0x63e2,	// (0x00034b62) link_highlight_pane

0x78d0,	// (0x00036050) popup_preview_text_window_t5_ParamLimits

0x78d0,	// (0x00036050) popup_preview_text_window_t5

0x645d,	// (0x00034bdd) cursor_digital_pane

0x645d,	// (0x00034bdd) cursor_primary_pane

0x646e,	// (0x00034bee) cursor_primary_small_pane

0x6476,	// (0x00034bf6) cursor_secondary_pane

0x647e,	// (0x00034bfe) cursor_title_pane

0x645d,	// (0x00034bdd) link_highlight_digital_pane

0x6465,	// (0x00034be5) link_highlight_primary_pane

0x646e,	// (0x00034bee) link_highlight_primary_small_pane

0x6476,	// (0x00034bf6) link_highlight_secondary_pane

0x647e,	// (0x00034bfe) link_highlight_title_pane

0x645d,	// (0x00034bdd) copy_highlight_digital_pane

0x645d,	// (0x00034bdd) copy_highlight_primary_pane

0x646e,	// (0x00034bee) copy_highlight_primary_small_pane

0x6476,	// (0x00034bf6) copy_highlight_secondary_pane

0x647e,	// (0x00034bfe) copy_highlight_title_pane

0x6476,	// (0x00034bf6) graphic_text_digital_pane

0x708a,	// (0x0003580a) graphic_text_primary_pane

0x7093,	// (0x00035813) graphic_text_primary_small_pane

0x646e,	// (0x00034bee) graphic_text_secondary_pane

0x645d,	// (0x00034bdd) graphic_text_title_pane

0xa7f5,	// (0x00038f75) cursor_primary_pane_g1

0x707c,	// (0x000357fc) cursor_text_primary_t1

0xb2e5,	// (0x00039a65) cursor_primary_small_pane_g1

0x706e,	// (0x000357ee) cursor_text_primary_small_t1

0xb2dd,	// (0x00039a5d) cursor_primary_small_pane_g1_copy1

0x7060,	// (0x000357e0) cursor_text_primary_small_t1_copy1

0x7052,	// (0x000357d2) cursor_text_title_t1

0xb2d5,	// (0x00039a55) cursor_title_pane_g1

0xa7f5,	// (0x00038f75) cursor_digital_pane_g1

0x6486,	// (0x00034c06) cursor_text_digital_t1

0x6494,	// (0x00034c14) link_highlight_primary_pane_g1

0x6ffb,	// (0x0003577b) link_highlight_primary_pane_t1

0x6494,	// (0x00034c14) link_highlight_primary_small_pane_g1

0x649c,	// (0x00034c1c) link_highlight_primary_small_pane_t1

0x64ab,	// (0x00034c2b) link_highlight_secondary_pane_g1

0x64b3,	// (0x00034c33) link_highlight_secondary_pane_t1

0x6f60,	// (0x000356e0) link_highlight_title_pane_g1

0x6f77,	// (0x000356f7) link_highlight_title_pane_t1

0x6f60,	// (0x000356e0) link_highlight_digital_pane_g1

0x6f68,	// (0x000356e8) link_highlight_digital_pane_t1

0x6e3c,	// (0x000355bc) copy_highlight_primary_pane_g1

0x6e62,	// (0x000355e2) copy_highlight_primary_pane_t1

0x6e3c,	// (0x000355bc) copy_highlight_primary_small_pane_g1

0x6e53,	// (0x000355d3) copy_highlight_primary_small_pane_t1

0x64c2,	// (0x00034c42) copy_highlight_secondary_pane_g1

0x64ca,	// (0x00034c4a) copy_highlight_secondary_pane_t1

0x6e3c,	// (0x000355bc) copy_highlight_title_pane_g1

0x6e44,	// (0x000355c4) copy_highlight_title_pane_t1

0x6e3c,	// (0x000355bc) copy_highlight_digital_pane_g1

0x7dc9,	// (0x00036549) copy_highlight_digital_pane_t1

0x7d1d,	// (0x0003649d) graphic_text_primary_pane_g1

0x7dad,	// (0x0003652d) graphic_text_primary_pane_t1

0x7dbb,	// (0x0003653b) graphic_text_primary_pane_t2

0x0001,

0xf9da,	// (0x0003e15a) graphic_text_primary_pane_t

0x7d89,	// (0x00036509) graphic_text_primary_small_pane_g1

0x7d91,	// (0x00036511) graphic_text_primary_small_pane_t1

0x7d9f,	// (0x0003651f) graphic_text_primary_small_pane_t2

0x0001,

0xf9d5,	// (0x0003e155) graphic_text_primary_small_pane_t

0x7d65,	// (0x000364e5) graphic_text_secondary_pane_g1

0x7d6d,	// (0x000364ed) graphic_text_secondary_pane_t1

0x7d7b,	// (0x000364fb) graphic_text_secondary_pane_t2

0x0001,

0xf9d0,	// (0x0003e150) graphic_text_secondary_pane_t

0x7d41,	// (0x000364c1) graphic_text_title_pane_g1

0x7d49,	// (0x000364c9) graphic_text_title_pane_t1

0x7d57,	// (0x000364d7) graphic_text_title_pane_t2

0x0001,

0xf9cb,	// (0x0003e14b) graphic_text_title_pane_t

0x7d1d,	// (0x0003649d) graphic_text_digital_pane_g1

0x7d25,	// (0x000364a5) graphic_text_digital_pane_t1

0x7d33,	// (0x000364b3) graphic_text_digital_pane_t2

0x0001,

0xf9c6,	// (0x0003e146) graphic_text_digital_pane_t

0x23ba,	// (0x00030b3a) navi_icon_pane_srt_ParamLimits

0x23ba,	// (0x00030b3a) navi_icon_pane_srt

0x21ae,	// (0x0003092e) navi_midp_pane_srt

0x21ae,	// (0x0003092e) navi_navi_pane_srt

0x23ba,	// (0x00030b3a) navi_text_pane_srt_ParamLimits

0x23ba,	// (0x00030b3a) navi_text_pane_srt

0x7ce8,	// (0x00036468) navi_navi_icon_text_pane_srt

0x7d02,	// (0x00036482) navi_navi_pane_srt_g1_ParamLimits

0x7d02,	// (0x00036482) navi_navi_pane_srt_g1

0x7cf0,	// (0x00036470) navi_navi_pane_srt_g2_ParamLimits

0x7cf0,	// (0x00036470) navi_navi_pane_srt_g2

0x0001,

0xf8fb,	// (0x0003e07b) navi_navi_pane_srt_g_ParamLimits

0xf8fb,	// (0x0003e07b) navi_navi_pane_srt_g

0x7d14,	// (0x00036494) navi_navi_tabs_pane_srt

0x7ce8,	// (0x00036468) navi_navi_text_pane_srt

0x7ce8,	// (0x00036468) navi_navi_volume_pane_srt

0x7cd9,	// (0x00036459) navi_navi_text_pane_srt_t1

0xb8d8,	// (0x0003a058) navi_navi_volume_pane_srt_g1

0xb8e0,	// (0x0003a060) volume_small_pane_srt_ParamLimits

0xb8e0,	// (0x0003a060) volume_small_pane_srt

0xa7fd,	// (0x00038f7d) volume_small_pane_srt_g1_ParamLimits

0xa7fd,	// (0x00038f7d) volume_small_pane_srt_g1

0xa80d,	// (0x00038f8d) volume_small_pane_srt_g2_ParamLimits

0xa80d,	// (0x00038f8d) volume_small_pane_srt_g2

0xa81e,	// (0x00038f9e) volume_small_pane_srt_g3_ParamLimits

0xa81e,	// (0x00038f9e) volume_small_pane_srt_g3

0xa82f,	// (0x00038faf) volume_small_pane_srt_g4_ParamLimits

0xa82f,	// (0x00038faf) volume_small_pane_srt_g4

0xa840,	// (0x00038fc0) volume_small_pane_srt_g5_ParamLimits

0xa840,	// (0x00038fc0) volume_small_pane_srt_g5

0xa851,	// (0x00038fd1) volume_small_pane_srt_g6_ParamLimits

0xa851,	// (0x00038fd1) volume_small_pane_srt_g6

0xa862,	// (0x00038fe2) volume_small_pane_srt_g7_ParamLimits

0xa862,	// (0x00038fe2) volume_small_pane_srt_g7

0xa873,	// (0x00038ff3) volume_small_pane_srt_g8_ParamLimits

0xa873,	// (0x00038ff3) volume_small_pane_srt_g8

0xa884,	// (0x00039004) volume_small_pane_srt_g9_ParamLimits

0xa884,	// (0x00039004) volume_small_pane_srt_g9

0xa895,	// (0x00039015) volume_small_pane_srt_g10_ParamLimits

0xa895,	// (0x00039015) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x0003defa) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x0003defa) volume_small_pane_srt_g

0x2860,	// (0x00030fe0) query_popup_data_pane_cp2

0x7cbf,	// (0x0003643f) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x7cbf,	// (0x0003643f) navi_navi_icon_text_pane_srt_t1

0x708a,	// (0x0003580a) navi_tabs_2_long_pane_srt

0x708a,	// (0x0003580a) navi_tabs_2_pane_srt

0x708a,	// (0x0003580a) navi_tabs_3_long_pane_srt

0x708a,	// (0x0003580a) navi_tabs_3_pane_srt

0x708a,	// (0x0003580a) navi_tabs_4_pane_srt

0xb8b8,	// (0x0003a038) tabs_2_active_pane_srt_ParamLimits

0xb8b8,	// (0x0003a038) tabs_2_active_pane_srt

0xb8c8,	// (0x0003a048) tabs_2_passive_pane_srt_ParamLimits

0xb8c8,	// (0x0003a048) tabs_2_passive_pane_srt

0x5d20,	// (0x000344a0) bg_passive_tab_pane_cp1_srt_ParamLimits

0x5d20,	// (0x000344a0) bg_passive_tab_pane_cp1_srt

0x7617,	// (0x00035d97) bg_passive_tab_pane_g1_cp1_srt

0x60ec,	// (0x0003486c) bg_passive_tab_pane_g2_cp1_srt

0x760e,	// (0x00035d8e) bg_passive_tab_pane_g3_cp1_srt

0x23ba,	// (0x00030b3a) bg_active_tab_pane_cp1_srt_ParamLimits

0x23ba,	// (0x00030b3a) bg_active_tab_pane_cp1_srt

0x7606,	// (0x00035d86) tabs_2_active_pane_srt_g1

0xa20b,	// (0x0003898b) tabs_2_active_pane_srt_t1_ParamLimits

0xa20b,	// (0x0003898b) tabs_2_active_pane_srt_t1

0x7617,	// (0x00035d97) bg_active_tab_pane_g1_cp1_srt

0x60ec,	// (0x0003486c) bg_active_tab_pane_g2_cp1_srt

0x760e,	// (0x00035d8e) bg_active_tab_pane_g3_cp1_srt

0xb885,	// (0x0003a005) tabs_3_active_pane_srt_ParamLimits

0xb885,	// (0x0003a005) tabs_3_active_pane_srt

0xb896,	// (0x0003a016) tabs_3_passive_pane_cp_srt_ParamLimits

0xb896,	// (0x0003a016) tabs_3_passive_pane_cp_srt

0xb8a7,	// (0x0003a027) tabs_3_passive_pane_srt_ParamLimits

0xb8a7,	// (0x0003a027) tabs_3_passive_pane_srt

0x5d20,	// (0x000344a0) bg_passive_tab_pane_cp2_srt_ParamLimits

0x5d20,	// (0x000344a0) bg_passive_tab_pane_cp2_srt

0x64e2,	// (0x00034c62) bg_passive_tab_pane_g1_cp2_srt

0x60ec,	// (0x0003486c) bg_passive_tab_pane_g2_cp2_srt

0x64d9,	// (0x00034c59) bg_passive_tab_pane_g3_cp2_srt

0x23ba,	// (0x00030b3a) bg_active_tab_pane_cp2_srt_ParamLimits

0x23ba,	// (0x00030b3a) bg_active_tab_pane_cp2_srt

0x7caf,	// (0x0003642f) tabs_3_active_pane_srt_g1

0x9f55,	// (0x000386d5) tabs_3_active_pane_srt_t1_ParamLimits

0x9f55,	// (0x000386d5) tabs_3_active_pane_srt_t1

0x64e2,	// (0x00034c62) bg_active_tab_pane_g1_cp2_srt

0x60ec,	// (0x0003486c) bg_active_tab_pane_g2_cp2_srt

0x64d9,	// (0x00034c59) bg_active_tab_pane_g3_cp2_srt

0xb83d,	// (0x00039fbd) tabs_4_active_pane_srt_ParamLimits

0xb83d,	// (0x00039fbd) tabs_4_active_pane_srt

0xb84f,	// (0x00039fcf) tabs_4_passive_pane_cp2_srt_ParamLimits

0xb84f,	// (0x00039fcf) tabs_4_passive_pane_cp2_srt

0x65fc,	// (0x00034d7c) aid_size_cell_toolbar

0xa230,	// (0x000389b0) main_idle_act_pane_ParamLimits

0x66b8,	// (0x00034e38) popup_large_graphic_colour_window_ParamLimits

0xad83,	// (0x00039503) popup_toolbar_window_ParamLimits

0xad83,	// (0x00039503) popup_toolbar_window

0xf455,	// (0x0003dbd5) list_single_graphic_2heading_pane_ParamLimits

0xf455,	// (0x0003dbd5) list_single_graphic_2heading_pane

0x5d7c,	// (0x000344fc) aid_size_cell_apps_grid_lsc_pane

0x5d8e,	// (0x0003450e) aid_size_cell_apps_grid_prt_pane

0x5d20,	// (0x000344a0) bg_wml_button_pane_cp1_ParamLimits

0x5d20,	// (0x000344a0) bg_wml_button_pane_cp1

0xb27e,	// (0x000399fe) form_midp_field_text_pane_t1_ParamLimits

0x69ea,	// (0x0003516a) input_focus_pane_cp050_ParamLimits

0x6b2a,	// (0x000352aa) list_midp_form_text_pane_ParamLimits

0x6b07,	// (0x00035287) input_focus_pane_cp051_ParamLimits

0x6b1b,	// (0x0003529b) list_midp_choice_pane_ParamLimits

0xb218,	// (0x00039998) list_single_2graphic_pane_cp3_ParamLimits

0xb218,	// (0x00039998) list_single_2graphic_pane_cp3

0xb22c,	// (0x000399ac) list_single_midp_graphic_pane_ParamLimits

0xb22c,	// (0x000399ac) list_single_midp_graphic_pane

0x9b4f,	// (0x000382cf) list_single_graphic_2heading_pane_g1_ParamLimits

0x9b4f,	// (0x000382cf) list_single_graphic_2heading_pane_g1

0x9b5b,	// (0x000382db) list_single_graphic_2heading_pane_g4_ParamLimits

0x9b5b,	// (0x000382db) list_single_graphic_2heading_pane_g4

0x9b67,	// (0x000382e7) list_single_graphic_2heading_pane_g5_ParamLimits

0x9b67,	// (0x000382e7) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x0003df4d) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x0003df4d) list_single_graphic_2heading_pane_g

0x9b73,	// (0x000382f3) list_single_graphic_2heading_pane_t1_ParamLimits

0x9b73,	// (0x000382f3) list_single_graphic_2heading_pane_t1

0x9b87,	// (0x00038307) list_single_graphic_2heading_pane_t2_ParamLimits

0x9b87,	// (0x00038307) list_single_graphic_2heading_pane_t2

0x9ba1,	// (0x00038321) list_single_graphic_2heading_pane_t3_ParamLimits

0x9ba1,	// (0x00038321) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x0003df54) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x0003df54) list_single_graphic_2heading_pane_t

0x683a,	// (0x00034fba) bg_popup_sub_pane_cp2

0x6860,	// (0x00034fe0) grid_toobar_pane

0xb0bd,	// (0x0003983d) cell_toolbar_pane_ParamLimits

0xb0bd,	// (0x0003983d) cell_toolbar_pane

0x6896,	// (0x00035016) cell_toolbar_pane_g1_ParamLimits

0x6896,	// (0x00035016) cell_toolbar_pane_g1

0x68a8,	// (0x00035028) cell_toolbar_pane_g2_ParamLimits

0x68a8,	// (0x00035028) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x0003df62) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x0003df62) cell_toolbar_pane_g

0x68ca,	// (0x0003504a) grid_highlight_pane_cp2_ParamLimits

0x68ca,	// (0x0003504a) grid_highlight_pane_cp2

0x68e4,	// (0x00035064) toolbar_button_pane

0x68f0,	// (0x00035070) toolbar_button_pane_g1

0x6900,	// (0x00035080) toolbar_button_pane_g2

0x68f8,	// (0x00035078) toolbar_button_pane_g3

0x6910,	// (0x00035090) toolbar_button_pane_g4

0x6908,	// (0x00035088) toolbar_button_pane_g5

0x6918,	// (0x00035098) toolbar_button_pane_g6

0x6920,	// (0x000350a0) toolbar_button_pane_g7

0x6930,	// (0x000350b0) toolbar_button_pane_g8

0x6928,	// (0x000350a8) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x0003df67) toolbar_button_pane_g

0xb0ec,	// (0x0003986c) list_single_2graphic_pane_g1_cp3_ParamLimits

0xb0ec,	// (0x0003986c) list_single_2graphic_pane_g1_cp3

0xb0f8,	// (0x00039878) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb0f8,	// (0x00039878) list_single_2graphic_pane_g2_cp3

0xb107,	// (0x00039887) list_single_2graphic_pane_g3_cp3

0xb10f,	// (0x0003988f) list_single_2graphic_pane_g4_cp3_ParamLimits

0xb10f,	// (0x0003988f) list_single_2graphic_pane_g4_cp3

0xb11b,	// (0x0003989b) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb11b,	// (0x0003989b) list_single_2graphic_pane_t1_cp3

0xb135,	// (0x000398b5) list_single_midp_graphic_pane_g2_ParamLimits

0xb135,	// (0x000398b5) list_single_midp_graphic_pane_g2

0xeebd,	// (0x0003d63d) aid_zoom_text_primary

0xf44d,	// (0x0003dbcd) aid_zoom_text_secondary

0x6594,	// (0x00034d14) status_small_pane_g7_ParamLimits

0x6594,	// (0x00034d14) status_small_pane_g7

0x65b7,	// (0x00034d37) status_small_pane_t1_ParamLimits

0x9ed0,	// (0x00038650) title_pane_g2

0x0003,

0xf56a,	// (0x0003dcea) title_pane_g

0xa122,	// (0x000388a2) aid_size_cell_colour_1_pane_ParamLimits

0xa122,	// (0x000388a2) aid_size_cell_colour_1_pane

0xa136,	// (0x000388b6) aid_size_cell_colour_2_pane_ParamLimits

0xa136,	// (0x000388b6) aid_size_cell_colour_2_pane

0xa14a,	// (0x000388ca) aid_size_cell_colour_3_pane_ParamLimits

0xa14a,	// (0x000388ca) aid_size_cell_colour_3_pane

0xa15e,	// (0x000388de) aid_size_cell_colour_4_pane_ParamLimits

0xa15e,	// (0x000388de) aid_size_cell_colour_4_pane

0xa26a,	// (0x000389ea) title_pane_stacon_g1_ParamLimits

0xa26a,	// (0x000389ea) title_pane_stacon_g1

0x6eb9,	// (0x00035639) popup_note_wait_window_g3_ParamLimits

0x6eb9,	// (0x00035639) popup_note_wait_window_g3

0x6f2f,	// (0x000356af) popup_note_wait_window_t5_ParamLimits

0x6f2f,	// (0x000356af) popup_note_wait_window_t5

0x21ae,	// (0x0003092e) main_feb_china_hwr_fs_writing_pane

0xaa72,	// (0x000391f2) popup_feb_china_hwr_fs_window_ParamLimits

0xaa72,	// (0x000391f2) popup_feb_china_hwr_fs_window

0xb157,	// (0x000398d7) aid_size_cell_hwr_fs_ParamLimits

0xb157,	// (0x000398d7) aid_size_cell_hwr_fs

0x69ea,	// (0x0003516a) bg_popup_sub_pane_cp3_ParamLimits

0x69ea,	// (0x0003516a) bg_popup_sub_pane_cp3

0xb16c,	// (0x000398ec) grid_hwr_fs_pane_ParamLimits

0xb16c,	// (0x000398ec) grid_hwr_fs_pane

0xb180,	// (0x00039900) linegrid_hwr_fs_pane_ParamLimits

0xb180,	// (0x00039900) linegrid_hwr_fs_pane

0xb190,	// (0x00039910) cell_hwr_fs_pane_ParamLimits

0xb190,	// (0x00039910) cell_hwr_fs_pane

0x69f6,	// (0x00035176) linegrid_hwr_fs_pane_g1_ParamLimits

0x69f6,	// (0x00035176) linegrid_hwr_fs_pane_g1

0xb1ae,	// (0x0003992e) linegrid_hwr_fs_pane_g2_ParamLimits

0xb1ae,	// (0x0003992e) linegrid_hwr_fs_pane_g2

0x6a02,	// (0x00035182) linegrid_hwr_fs_pane_g3_ParamLimits

0x6a02,	// (0x00035182) linegrid_hwr_fs_pane_g3

0xb1c0,	// (0x00039940) linegrid_hwr_fs_pane_g4_ParamLimits

0xb1c0,	// (0x00039940) linegrid_hwr_fs_pane_g4

0xb1da,	// (0x0003995a) linegrid_hwr_fs_pane_g5_ParamLimits

0xb1da,	// (0x0003995a) linegrid_hwr_fs_pane_g5

0x0004,

0xf80d,	// (0x0003df8d) linegrid_hwr_fs_pane_g_ParamLimits

0xf80d,	// (0x0003df8d) linegrid_hwr_fs_pane_g

0x6a0e,	// (0x0003518e) cell_hwr_fs_pane_g1_ParamLimits

0x6a0e,	// (0x0003518e) cell_hwr_fs_pane_g1

0x6808,	// (0x00034f88) cell_hwr_fs_pane_g2_ParamLimits

0x6808,	// (0x00034f88) cell_hwr_fs_pane_g2

0xb1f0,	// (0x00039970) cell_hwr_fs_pane_g3_ParamLimits

0xb1f0,	// (0x00039970) cell_hwr_fs_pane_g3

0xb1fd,	// (0x0003997d) cell_hwr_fs_pane_g4_ParamLimits

0xb1fd,	// (0x0003997d) cell_hwr_fs_pane_g4

0x0003,

0xf818,	// (0x0003df98) cell_hwr_fs_pane_g_ParamLimits

0xf818,	// (0x0003df98) cell_hwr_fs_pane_g

0xb20a,	// (0x0003998a) cell_hwr_fs_pane_t1

0x21ae,	// (0x0003092e) grid_highlight_pane_cp6

0x21ae,	// (0x0003092e) main_idle_act2_pane

0x2dd5,	// (0x00031555) aid_inside_area_popup_secondary

0xb448,	// (0x00039bc8) aid_inside_area_window_primary_ParamLimits

0xb448,	// (0x00039bc8) aid_inside_area_window_primary

0x7dd8,	// (0x00036558) ai2_news_ticker_pane

0x7de0,	// (0x00036560) aid_size_cell_ai1_link_ParamLimits

0x7de0,	// (0x00036560) aid_size_cell_ai1_link

0xb8f5,	// (0x0003a075) popup_ai2_data_window_ParamLimits

0xb8f5,	// (0x0003a075) popup_ai2_data_window

0x7dfa,	// (0x0003657a) popup_ai2_link_window_ParamLimits

0x7dfa,	// (0x0003657a) popup_ai2_link_window

0x69ea,	// (0x0003516a) bg_popup_sub_pane_cp4_ParamLimits

0x69ea,	// (0x0003516a) bg_popup_sub_pane_cp4

0x7e0e,	// (0x0003658e) grid_ai2_link_pane_ParamLimits

0x7e0e,	// (0x0003658e) grid_ai2_link_pane

0x7e25,	// (0x000365a5) popup_ai2_link_window_g1_ParamLimits

0x7e25,	// (0x000365a5) popup_ai2_link_window_g1

0x7e31,	// (0x000365b1) popup_ai2_link_window_g2_ParamLimits

0x7e31,	// (0x000365b1) popup_ai2_link_window_g2

0x0001,

0xf9df,	// (0x0003e15f) popup_ai2_link_window_g_ParamLimits

0xf9df,	// (0x0003e15f) popup_ai2_link_window_g

0x7e40,	// (0x000365c0) ai2_mp_button_pane

0x7e48,	// (0x000365c8) ai2_mp_volume_pane

0x6b07,	// (0x00035287) bg_popup_sub_pane_cp5_ParamLimits

0x6b07,	// (0x00035287) bg_popup_sub_pane_cp5

0x7e50,	// (0x000365d0) heading_ai2_gene_pane_ParamLimits

0x7e50,	// (0x000365d0) heading_ai2_gene_pane

0x7e5c,	// (0x000365dc) list_ai2_gene_pane_ParamLimits

0x7e5c,	// (0x000365dc) list_ai2_gene_pane

0x7ea4,	// (0x00036624) cell_ai2_link_pane_ParamLimits

0x7ea4,	// (0x00036624) cell_ai2_link_pane

0x7eba,	// (0x0003663a) cell_ai2_link_pane_g1

0x21ae,	// (0x0003092e) grid_highlight_pane_cp7

0xb93c,	// (0x0003a0bc) ai2_mp_volume_pane_g1

0x7f57,	// (0x000366d7) ai2_mp_volume_pane_g2

0xb920,	// (0x0003a0a0) list_ai2_gene_pane_t1

0x7f4f,	// (0x000366cf) ai2_mp_volume_pane_g3

0x0002,

0xf9f8,	// (0x0003e178) ai2_mp_volume_pane_g

0xb944,	// (0x0003a0c4) volume_small_pane_cp3

0x7f5f,	// (0x000366df) aid_size_cell_ai2_button

0x7f67,	// (0x000366e7) grid_ai2_button_pane

0x7f70,	// (0x000366f0) cell_ai2_button_pane_ParamLimits

0x7f70,	// (0x000366f0) cell_ai2_button_pane

0x2061,	// (0x000307e1) cell_ai2_button_pane_g1

0x21ae,	// (0x0003092e) grid_highlight_pane_cp8

0x7f0f,	// (0x0003668f) ai2_gene_pane_t1_ParamLimits

0x7f0f,	// (0x0003668f) ai2_gene_pane_t1

0xaa18,	// (0x00039198) aid_height_parent_landscape

0xb61f,	// (0x00039d9f) aid_height_set_list

0x7bc5,	// (0x00036345) aid_size_parent

0x7c99,	// (0x00036419) aid_size_cell_graphic_pane_ParamLimits

0x7e6c,	// (0x000365ec) popup_ai2_data_window_g1_ParamLimits

0x7e6c,	// (0x000365ec) popup_ai2_data_window_g1

0x7e78,	// (0x000365f8) ai2_news_ticker_pane_g1

0x7e80,	// (0x00036600) ai2_news_ticker_pane_g2

0x0001,

0xf9e4,	// (0x0003e164) ai2_news_ticker_pane_g

0x7e88,	// (0x00036608) ai2_news_ticker_pane_t1

0x7e96,	// (0x00036616) ai2_news_ticker_pane_t2

0x0001,

0xf9e9,	// (0x0003e169) ai2_news_ticker_pane_t

0x7c7a,	// (0x000363fa) heading_ai2_gene_pane_g1

0x7ec3,	// (0x00036643) heading_ai2_gene_pane_t1_ParamLimits

0x7ec3,	// (0x00036643) heading_ai2_gene_pane_t1

0x7ed8,	// (0x00036658) list_highlight_pane_cp6

0xb909,	// (0x0003a089) ai2_gene_pane_ParamLimits

0xb909,	// (0x0003a089) ai2_gene_pane

0xb92e,	// (0x0003a0ae) list_ai2_gene_pane_t2

0x0001,

0xf9ee,	// (0x0003e16e) list_ai2_gene_pane_t

0x7ee0,	// (0x00036660) list_highlight_pane_cp8_ParamLimits

0x7ee0,	// (0x00036660) list_highlight_pane_cp8

0x7ef1,	// (0x00036671) ai2_gene_pane_g1_ParamLimits

0x7ef1,	// (0x00036671) ai2_gene_pane_g1

0x7f03,	// (0x00036683) ai2_gene_pane_g2_ParamLimits

0x7f03,	// (0x00036683) ai2_gene_pane_g2

0x0001,

0xf9f3,	// (0x0003e173) ai2_gene_pane_g_ParamLimits

0xf9f3,	// (0x0003e173) ai2_gene_pane_g

0x2bcc,	// (0x0003134c) scroll_pane_cp12

0xa9cf,	// (0x0003914f) control_pane_t3_ParamLimits

0xa9cf,	// (0x0003914f) control_pane_t3

0x65a8,	// (0x00034d28) status_small_pane_g8_ParamLimits

0x65a8,	// (0x00034d28) status_small_pane_g8

0xaae0,	// (0x00039260) popup_find_window_ParamLimits

0xac43,	// (0x000393c3) popup_note_image_window_ParamLimits

0xe8e4,	// (0x0003d064) list_double2_graphic_pane_vc_g1_ParamLimits

0xe8e4,	// (0x0003d064) list_double2_graphic_pane_vc_g1

0xe827,	// (0x0003cfa7) list_double2_graphic_pane_vc_g2_ParamLimits

0xe827,	// (0x0003cfa7) list_double2_graphic_pane_vc_g2

0xe833,	// (0x0003cfb3) list_double2_graphic_pane_vc_g3_ParamLimits

0xe833,	// (0x0003cfb3) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x0003df5b) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x0003df5b) list_double2_graphic_pane_vc_g

0xe8bc,	// (0x0003d03c) list_double2_graphic_pane_vc_t1_ParamLimits

0xe8bc,	// (0x0003d03c) list_double2_graphic_pane_vc_t1

0xe827,	// (0x0003cfa7) list_single_heading_pane_vc_g1_ParamLimits

0xe827,	// (0x0003cfa7) list_single_heading_pane_vc_g1

0xe833,	// (0x0003cfb3) list_single_heading_pane_vc_g2_ParamLimits

0xe833,	// (0x0003cfb3) list_single_heading_pane_vc_g2

0x0001,

0xf60d,	// (0x0003dd8d) list_single_heading_pane_vc_g_ParamLimits

0xf60d,	// (0x0003dd8d) list_single_heading_pane_vc_g

0xeeea,	// (0x0003d66a) list_single_heading_pane_vc_t1_ParamLimits

0xeeea,	// (0x0003d66a) list_single_heading_pane_vc_t1

0xef00,	// (0x0003d680) list_single_heading_pane_vc_t2_ParamLimits

0xef00,	// (0x0003d680) list_single_heading_pane_vc_t2

0x0001,

0xf7fc,	// (0x0003df7c) list_single_heading_pane_vc_t_ParamLimits

0xf7fc,	// (0x0003df7c) list_single_heading_pane_vc_t

0x6944,	// (0x000350c4) list_setting_number_pane_vc_g1_ParamLimits

0x6944,	// (0x000350c4) list_setting_number_pane_vc_g1

0x6950,	// (0x000350d0) list_setting_number_pane_vc_g2_ParamLimits

0x6950,	// (0x000350d0) list_setting_number_pane_vc_g2

0x0001,

0xf801,	// (0x0003df81) list_setting_number_pane_vc_g_ParamLimits

0xf801,	// (0x0003df81) list_setting_number_pane_vc_g

0x695c,	// (0x000350dc) list_setting_number_pane_vc_t1_ParamLimits

0x695c,	// (0x000350dc) list_setting_number_pane_vc_t1

0x6970,	// (0x000350f0) list_setting_number_pane_vc_t2_ParamLimits

0x6970,	// (0x000350f0) list_setting_number_pane_vc_t2

0x698c,	// (0x0003510c) list_setting_number_pane_vc_t3_ParamLimits

0x698c,	// (0x0003510c) list_setting_number_pane_vc_t3

0x0002,

0xf806,	// (0x0003df86) list_setting_number_pane_vc_t_ParamLimits

0xf806,	// (0x0003df86) list_setting_number_pane_vc_t

0x69b2,	// (0x00035132) set_value_pane_vc_ParamLimits

0x69b2,	// (0x00035132) set_value_pane_vc

0xf455,	// (0x0003dbd5) list_double2_graphic_pane_vc_ParamLimits

0xf455,	// (0x0003dbd5) list_double2_graphic_pane_vc

0x7c20,	// (0x000363a0) list_double2_large_graphic_pane_vc_ParamLimits

0x7c20,	// (0x000363a0) list_double2_large_graphic_pane_vc

0xf455,	// (0x0003dbd5) list_double2_pane_vc_ParamLimits

0xf455,	// (0x0003dbd5) list_double2_pane_vc

0xf455,	// (0x0003dbd5) list_double_graphic_heading_pane_vc_ParamLimits

0xf455,	// (0x0003dbd5) list_double_graphic_heading_pane_vc

0xf455,	// (0x0003dbd5) list_double_graphic_pane_vc_ParamLimits

0xf455,	// (0x0003dbd5) list_double_graphic_pane_vc

0xf455,	// (0x0003dbd5) list_double_heading_pane_vc_ParamLimits

0xf455,	// (0x0003dbd5) list_double_heading_pane_vc

0x7c20,	// (0x000363a0) list_double_large_graphic_pane_vc_ParamLimits

0x7c20,	// (0x000363a0) list_double_large_graphic_pane_vc

0xf455,	// (0x0003dbd5) list_double_number_pane_vc_ParamLimits

0xf455,	// (0x0003dbd5) list_double_number_pane_vc

0xf455,	// (0x0003dbd5) list_double_pane_vc_ParamLimits

0xf455,	// (0x0003dbd5) list_double_pane_vc

0xf455,	// (0x0003dbd5) list_double_time_pane_vc_ParamLimits

0xf455,	// (0x0003dbd5) list_double_time_pane_vc

0xf455,	// (0x0003dbd5) list_setting_number_pane_vc_ParamLimits

0xf455,	// (0x0003dbd5) list_setting_number_pane_vc

0xf455,	// (0x0003dbd5) list_setting_pane_vc_ParamLimits

0xf455,	// (0x0003dbd5) list_setting_pane_vc

0xf455,	// (0x0003dbd5) list_single_graphic_heading_pane_vc_ParamLimits

0xf455,	// (0x0003dbd5) list_single_graphic_heading_pane_vc

0xf455,	// (0x0003dbd5) list_single_heading_pane_vc_ParamLimits

0xf455,	// (0x0003dbd5) list_single_heading_pane_vc

0xef8f,	// (0x0003d70f) list_single_number_heading_pane_vc_ParamLimits

0xef8f,	// (0x0003d70f) list_single_number_heading_pane_vc

0xe8e4,	// (0x0003d064) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe8e4,	// (0x0003d064) list_double_graphic_heading_pane_vc_g1

0xe827,	// (0x0003cfa7) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xe827,	// (0x0003cfa7) list_double_graphic_heading_pane_vc_g2

0xe833,	// (0x0003cfb3) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xe833,	// (0x0003cfb3) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7db,	// (0x0003df5b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x0003df5b) list_double_graphic_heading_pane_vc_g

0xefe2,	// (0x0003d762) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xefe2,	// (0x0003d762) list_double_graphic_heading_pane_vc_t1

0xeeea,	// (0x0003d66a) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xeeea,	// (0x0003d66a) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ff,	// (0x0003e17f) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ff,	// (0x0003e17f) list_double_graphic_heading_pane_vc_t

0x6944,	// (0x000350c4) list_setting_pane_vc_g1_ParamLimits

0x6944,	// (0x000350c4) list_setting_pane_vc_g1

0x6950,	// (0x000350d0) list_setting_pane_vc_g2_ParamLimits

0x6950,	// (0x000350d0) list_setting_pane_vc_g2

0x0001,

0xf801,	// (0x0003df81) list_setting_pane_vc_g_ParamLimits

0xf801,	// (0x0003df81) list_setting_pane_vc_g

0x815f,	// (0x000368df) list_setting_pane_vc_t1_ParamLimits

0x815f,	// (0x000368df) list_setting_pane_vc_t1

0x8173,	// (0x000368f3) list_setting_pane_vc_t2_ParamLimits

0x8173,	// (0x000368f3) list_setting_pane_vc_t2

0x0001,

0xfa42,	// (0x0003e1c2) list_setting_pane_vc_t_ParamLimits

0xfa42,	// (0x0003e1c2) list_setting_pane_vc_t

0x69b2,	// (0x00035132) set_value_pane_cp_vc_ParamLimits

0x69b2,	// (0x00035132) set_value_pane_cp_vc

0xe827,	// (0x0003cfa7) list_single_number_heading_pane_vc_g1_ParamLimits

0xe827,	// (0x0003cfa7) list_single_number_heading_pane_vc_g1

0xe833,	// (0x0003cfb3) list_single_number_heading_pane_vc_g2_ParamLimits

0xe833,	// (0x0003cfb3) list_single_number_heading_pane_vc_g2

0x0001,

0xf60d,	// (0x0003dd8d) list_single_number_heading_pane_vc_g_ParamLimits

0xf60d,	// (0x0003dd8d) list_single_number_heading_pane_vc_g

0xeeea,	// (0x0003d66a) list_single_number_heading_pane_vc_t1_ParamLimits

0xeeea,	// (0x0003d66a) list_single_number_heading_pane_vc_t1

0xeff4,	// (0x0003d774) list_single_number_heading_pane_vc_t2_ParamLimits

0xeff4,	// (0x0003d774) list_single_number_heading_pane_vc_t2

0xf006,	// (0x0003d786) list_single_number_heading_pane_vc_t3_ParamLimits

0xf006,	// (0x0003d786) list_single_number_heading_pane_vc_t3

0x0002,

0xfa47,	// (0x0003e1c7) list_single_number_heading_pane_vc_t_ParamLimits

0xfa47,	// (0x0003e1c7) list_single_number_heading_pane_vc_t

0xe8e4,	// (0x0003d064) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe8e4,	// (0x0003d064) list_single_graphic_heading_pane_vc_g1

0xe827,	// (0x0003cfa7) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xe827,	// (0x0003cfa7) list_single_graphic_heading_pane_vc_g4

0xe833,	// (0x0003cfb3) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xe833,	// (0x0003cfb3) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x0003df5b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x0003df5b) list_single_graphic_heading_pane_vc_g

0xeeea,	// (0x0003d66a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xeeea,	// (0x0003d66a) list_single_graphic_heading_pane_vc_t1

0xf018,	// (0x0003d798) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xf018,	// (0x0003d798) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4e,	// (0x0003e1ce) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4e,	// (0x0003e1ce) list_single_graphic_heading_pane_vc_t

0xe827,	// (0x0003cfa7) list_double2_pane_vc_g1_ParamLimits

0xe827,	// (0x0003cfa7) list_double2_pane_vc_g1

0xe833,	// (0x0003cfb3) list_double2_pane_vc_g2_ParamLimits

0xe833,	// (0x0003cfb3) list_double2_pane_vc_g2

0x0001,

0xf60d,	// (0x0003dd8d) list_double2_pane_vc_g_ParamLimits

0xf60d,	// (0x0003dd8d) list_double2_pane_vc_g

0xe83f,	// (0x0003cfbf) list_double2_pane_vc_t1_ParamLimits

0xe83f,	// (0x0003cfbf) list_double2_pane_vc_t1

0xe7e5,	// (0x0003cf65) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xe7e5,	// (0x0003cf65) list_double2_large_graphic_pane_vc_g1

0xe7f1,	// (0x0003cf71) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe7f1,	// (0x0003cf71) list_double2_large_graphic_pane_vc_g2

0xe7fd,	// (0x0003cf7d) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xe7fd,	// (0x0003cf7d) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf606,	// (0x0003dd86) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf606,	// (0x0003dd86) list_double2_large_graphic_pane_vc_g

0xe811,	// (0x0003cf91) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe811,	// (0x0003cf91) list_double2_large_graphic_pane_vc_t1

0xf47e,	// (0x0003dbfe) list_double_time_pane_vc_g1_ParamLimits

0xf47e,	// (0x0003dbfe) list_double_time_pane_vc_g1

0xf48a,	// (0x0003dc0a) list_double_time_pane_vc_g2_ParamLimits

0xf48a,	// (0x0003dc0a) list_double_time_pane_vc_g2

0x0001,

0xfa53,	// (0x0003e1d3) list_double_time_pane_vc_g_ParamLimits

0xfa53,	// (0x0003e1d3) list_double_time_pane_vc_g

0xf02a,	// (0x0003d7aa) list_double_time_pane_vc_t1_ParamLimits

0xf02a,	// (0x0003d7aa) list_double_time_pane_vc_t1

0xf043,	// (0x0003d7c3) list_double_time_pane_vc_t2_ParamLimits

0xf043,	// (0x0003d7c3) list_double_time_pane_vc_t2

0xf07c,	// (0x0003d7fc) list_double_time_pane_vc_t3_ParamLimits

0xf07c,	// (0x0003d7fc) list_double_time_pane_vc_t3

0xf094,	// (0x0003d814) list_double_time_pane_vc_t4_ParamLimits

0xf094,	// (0x0003d814) list_double_time_pane_vc_t4

0x0003,

0xfa58,	// (0x0003e1d8) list_double_time_pane_vc_t_ParamLimits

0xfa58,	// (0x0003e1d8) list_double_time_pane_vc_t

0xe827,	// (0x0003cfa7) list_double_pane_vc_g1_ParamLimits

0xe827,	// (0x0003cfa7) list_double_pane_vc_g1

0xe833,	// (0x0003cfb3) list_double_pane_vc_g2_ParamLimits

0xe833,	// (0x0003cfb3) list_double_pane_vc_g2

0x0001,

0xf60d,	// (0x0003dd8d) list_double_pane_vc_g_ParamLimits

0xf60d,	// (0x0003dd8d) list_double_pane_vc_g

0xf0a6,	// (0x0003d826) list_double_pane_vc_t1_ParamLimits

0xf0a6,	// (0x0003d826) list_double_pane_vc_t1

0xf0b8,	// (0x0003d838) list_double_pane_vc_t2_ParamLimits

0xf0b8,	// (0x0003d838) list_double_pane_vc_t2

0x0001,

0xfa61,	// (0x0003e1e1) list_double_pane_vc_t_ParamLimits

0xfa61,	// (0x0003e1e1) list_double_pane_vc_t

0xe827,	// (0x0003cfa7) list_double_number_pane_vc_g1_ParamLimits

0xe827,	// (0x0003cfa7) list_double_number_pane_vc_g1

0xe833,	// (0x0003cfb3) list_double_number_pane_vc_g2_ParamLimits

0xe833,	// (0x0003cfb3) list_double_number_pane_vc_g2

0x0001,

0xf60d,	// (0x0003dd8d) list_double_number_pane_vc_g_ParamLimits

0xf60d,	// (0x0003dd8d) list_double_number_pane_vc_g

0xf0ce,	// (0x0003d84e) list_double_number_pane_vc_t1_ParamLimits

0xf0ce,	// (0x0003d84e) list_double_number_pane_vc_t1

0xf0e2,	// (0x0003d862) list_double_number_pane_vc_t2_ParamLimits

0xf0e2,	// (0x0003d862) list_double_number_pane_vc_t2

0xf0b8,	// (0x0003d838) list_double_number_pane_vc_t3_ParamLimits

0xf0b8,	// (0x0003d838) list_double_number_pane_vc_t3

0x0002,

0xfa66,	// (0x0003e1e6) list_double_number_pane_vc_t_ParamLimits

0xfa66,	// (0x0003e1e6) list_double_number_pane_vc_t

0xf496,	// (0x0003dc16) list_double_large_graphic_pane_vc_g1_ParamLimits

0xf496,	// (0x0003dc16) list_double_large_graphic_pane_vc_g1

0xf4a2,	// (0x0003dc22) list_double_large_graphic_pane_vc_g2_ParamLimits

0xf4a2,	// (0x0003dc22) list_double_large_graphic_pane_vc_g2

0xe7fd,	// (0x0003cf7d) list_double_large_graphic_pane_vc_g3_ParamLimits

0xe7fd,	// (0x0003cf7d) list_double_large_graphic_pane_vc_g3

0xf0f4,	// (0x0003d874) list_double_large_graphic_pane_vc_g4_ParamLimits

0xf0f4,	// (0x0003d874) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6d,	// (0x0003e1ed) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6d,	// (0x0003e1ed) list_double_large_graphic_pane_vc_g

0xf100,	// (0x0003d880) list_double_large_graphic_pane_vc_t1_ParamLimits

0xf100,	// (0x0003d880) list_double_large_graphic_pane_vc_t1

0xf112,	// (0x0003d892) list_double_large_graphic_pane_vc_t2_ParamLimits

0xf112,	// (0x0003d892) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa76,	// (0x0003e1f6) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa76,	// (0x0003e1f6) list_double_large_graphic_pane_vc_t

0xe827,	// (0x0003cfa7) list_double_heading_pane_vc_g1_ParamLimits

0xe827,	// (0x0003cfa7) list_double_heading_pane_vc_g1

0xe833,	// (0x0003cfb3) list_double_heading_pane_vc_g2_ParamLimits

0xe833,	// (0x0003cfb3) list_double_heading_pane_vc_g2

0x0001,

0xf60d,	// (0x0003dd8d) list_double_heading_pane_vc_g_ParamLimits

0xf60d,	// (0x0003dd8d) list_double_heading_pane_vc_g

0xf129,	// (0x0003d8a9) list_double_heading_pane_vc_t1_ParamLimits

0xf129,	// (0x0003d8a9) list_double_heading_pane_vc_t1

0xeeea,	// (0x0003d66a) list_double_heading_pane_vc_t2_ParamLimits

0xeeea,	// (0x0003d66a) list_double_heading_pane_vc_t2

0x0001,

0xfa7b,	// (0x0003e1fb) list_double_heading_pane_vc_t_ParamLimits

0xfa7b,	// (0x0003e1fb) list_double_heading_pane_vc_t

0xe8e4,	// (0x0003d064) list_double_graphic_pane_vc_g1_ParamLimits

0xe8e4,	// (0x0003d064) list_double_graphic_pane_vc_g1

0xe8f0,	// (0x0003d070) list_double_graphic_pane_vc_g2_ParamLimits

0xe8f0,	// (0x0003d070) list_double_graphic_pane_vc_g2

0xe8ff,	// (0x0003d07f) list_double_graphic_pane_vc_g3_ParamLimits

0xe8ff,	// (0x0003d07f) list_double_graphic_pane_vc_g3

0x0002,

0xfa80,	// (0x0003e200) list_double_graphic_pane_vc_g_ParamLimits

0xfa80,	// (0x0003e200) list_double_graphic_pane_vc_g

0xf13b,	// (0x0003d8bb) list_double_graphic_pane_vc_t1_ParamLimits

0xf13b,	// (0x0003d8bb) list_double_graphic_pane_vc_t1

0xf0b8,	// (0x0003d838) list_double_graphic_pane_vc_t2_ParamLimits

0xf0b8,	// (0x0003d838) list_double_graphic_pane_vc_t2

0x0001,

0xfa87,	// (0x0003e207) list_double_graphic_pane_vc_t_ParamLimits

0xfa87,	// (0x0003e207) list_double_graphic_pane_vc_t

0x9be1,	// (0x00038361) aid_size_cell_fastswap

0x9be9,	// (0x00038369) aid_size_cell_touch_ParamLimits

0x9be9,	// (0x00038369) aid_size_cell_touch

0x9d9d,	// (0x0003851d) popup_fast_swap_wide_window_ParamLimits

0x9d9d,	// (0x0003851d) popup_fast_swap_wide_window

0x9e63,	// (0x000385e3) touch_pane_ParamLimits

0x9e63,	// (0x000385e3) touch_pane

0xec05,	// (0x0003d385) button_value_adjust_pane_cp2

0xec0d,	// (0x0003d38d) button_value_adjust_pane_cp4

0xec2d,	// (0x0003d3ad) form_field_data_pane_cp2

0xec4c,	// (0x0003d3cc) form_field_data_wide_pane_cp2

0x5dc5,	// (0x00034545) bg_scroll_pane_ParamLimits

0xa400,	// (0x00038b80) scroll_handle_pane_ParamLimits

0xa414,	// (0x00038b94) scroll_sc2_down_pane_ParamLimits

0xa414,	// (0x00038b94) scroll_sc2_down_pane

0x5df6,	// (0x00034576) scroll_sc2_up_pane_ParamLimits

0x5df6,	// (0x00034576) scroll_sc2_up_pane

0xcc4f,	// (0x0003b3cf) grid_wheel_folder_pane_g1_ParamLimits

0xcc4f,	// (0x0003b3cf) grid_wheel_folder_pane_g1

0xa6de,	// (0x00038e5e) clock_nsta_pane_cp2_ParamLimits

0xa6de,	// (0x00038e5e) clock_nsta_pane_cp2

0xa750,	// (0x00038ed0) listscroll_midp_pane_ParamLimits

0xa75c,	// (0x00038edc) midp_canvas_pane

0xaa10,	// (0x00039190) nsta_clock_indic_pane

0x6624,	// (0x00034da4) listscroll_form_pane_vc

0x662c,	// (0x00034dac) listscroll_set_pane_vc_ParamLimits

0x662c,	// (0x00034dac) listscroll_set_pane_vc

0xae71,	// (0x000395f1) clock_nsta_pane

0xae7e,	// (0x000395fe) indicator_nsta_pane

0x683a,	// (0x00034fba) bg_popup_sub_pane_cp2_ParamLimits

0x684e,	// (0x00034fce) find_pane_cp2_ParamLimits

0x684e,	// (0x00034fce) find_pane_cp2

0x6860,	// (0x00034fe0) grid_toobar_pane_ParamLimits

0x69be,	// (0x0003513e) list_form_gen_pane_vc_ParamLimits

0x69be,	// (0x0003513e) list_form_gen_pane_vc

0x69d4,	// (0x00035154) scroll_pane_cp8_vc_ParamLimits

0x69d4,	// (0x00035154) scroll_pane_cp8_vc

0x6a24,	// (0x000351a4) data_form_wide_pane_vc_ParamLimits

0x6a24,	// (0x000351a4) data_form_wide_pane_vc

0x6a30,	// (0x000351b0) form_field_data_wide_pane_vc_g1

0x6a38,	// (0x000351b8) form_field_data_wide_pane_vc_t1_ParamLimits

0x6a38,	// (0x000351b8) form_field_data_wide_pane_vc_t1

0x2c93,	// (0x00031413) input_focus_pane_cp6_vc_ParamLimits

0x2c93,	// (0x00031413) input_focus_pane_cp6_vc

0xb2a1,	// (0x00039a21) list_midp_pane_ParamLimits

0xb2ad,	// (0x00039a2d) scroll_pane_cp16_ParamLimits

0xb2ad,	// (0x00039a2d) scroll_pane_cp16

0x6c9f,	// (0x0003541f) button_value_adjust_pane_ParamLimits

0x6c9f,	// (0x0003541f) button_value_adjust_pane

0xb62b,	// (0x00039dab) button_value_adjust_pane_cp6_ParamLimits

0xb62b,	// (0x00039dab) button_value_adjust_pane_cp6

0xb733,	// (0x00039eb3) settings_code_pane_cp_ParamLimits

0xb733,	// (0x00039eb3) settings_code_pane_cp

0x2061,	// (0x000307e1) cell_touch_pane_g1

0x2061,	// (0x000307e1) cell_touch_pane_g2

0x0001,

0xf724,	// (0x0003dea4) cell_touch_pane_g

0xcb2c,	// (0x0003b2ac) cell_touch_pane_cp_ParamLimits

0xcb2c,	// (0x0003b2ac) cell_touch_pane_cp

0xcb3c,	// (0x0003b2bc) cell_touch_pane_ParamLimits

0xcb3c,	// (0x0003b2bc) cell_touch_pane

0x2061,	// (0x000307e1) scroll_sc2_down_pane_g1

0x2061,	// (0x000307e1) scroll_sc2_up_pane_g1

0x21ae,	// (0x0003092e) bg_set_opt_pane_cp4_vc

0x7f82,	// (0x00036702) list_set_graphic_pane_vc_g1_ParamLimits

0x7f82,	// (0x00036702) list_set_graphic_pane_vc_g1

0x7f8e,	// (0x0003670e) list_set_graphic_pane_vc_g2_ParamLimits

0x7f8e,	// (0x0003670e) list_set_graphic_pane_vc_g2

0x0001,

0xfa04,	// (0x0003e184) list_set_graphic_pane_vc_g_ParamLimits

0xfa04,	// (0x0003e184) list_set_graphic_pane_vc_g

0x7f9a,	// (0x0003671a) text_primary_small_cp13_vc_ParamLimits

0x7f9a,	// (0x0003671a) text_primary_small_cp13_vc

0x7fb2,	// (0x00036732) list_set_graphic_pane_vc_ParamLimits

0x7fb2,	// (0x00036732) list_set_graphic_pane_vc

0x21ae,	// (0x0003092e) input_focus_pane_cp2_vc

0x2061,	// (0x000307e1) setting_code_pane_vc_g1

0x7fc5,	// (0x00036745) setting_code_pane_vc_t1

0x7fd3,	// (0x00036753) set_text_pane_vc_t1_ParamLimits

0x7fd3,	// (0x00036753) set_text_pane_vc_t1

0x21ae,	// (0x0003092e) input_focus_pane_cp1_vc

0x7fee,	// (0x0003676e) list_set_text_pane_vc

0x2061,	// (0x000307e1) setting_text_pane_vc_g1

0x21ae,	// (0x0003092e) bg_set_opt_pane_cp2_vc

0x7ff8,	// (0x00036778) setting_slider_graphic_pane_vc_g1

0x8000,	// (0x00036780) setting_slider_graphic_pane_vc_t1

0x800e,	// (0x0003678e) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa09,	// (0x0003e189) setting_slider_graphic_pane_vc_t

0x801c,	// (0x0003679c) slider_set_pane_cp_vc

0x8024,	// (0x000367a4) slider_set_pane_vc_g1

0x802d,	// (0x000367ad) slider_set_pane_vc_g2

0x0006,

0xfa0e,	// (0x0003e18e) slider_set_pane_vc_g

0x2cee,	// (0x0003146e) set_opt_bg_pane_g1_copy1

0x2cf6,	// (0x00031476) set_opt_bg_pane_g2_copy1

0x8059,	// (0x000367d9) set_opt_bg_pane_g3_copy1

0x2d06,	// (0x00031486) set_opt_bg_pane_g4_copy1

0x2d0e,	// (0x0003148e) set_opt_bg_pane_g5_copy1

0x2d16,	// (0x00031496) set_opt_bg_pane_g6_copy1

0x8061,	// (0x000367e1) set_opt_bg_pane_g7_copy1

0x8069,	// (0x000367e9) set_opt_bg_pane_g8_copy1

0x8071,	// (0x000367f1) set_opt_bg_pane_g9_copy1

0x21ae,	// (0x0003092e) bg_set_opt_pane_cp_vc

0x8079,	// (0x000367f9) setting_slider_pane_vc_t1

0x8000,	// (0x00036780) setting_slider_pane_vc_t2

0x800e,	// (0x0003678e) setting_slider_pane_vc_t3

0x0002,

0xfa1d,	// (0x0003e19d) setting_slider_pane_vc_t

0x801c,	// (0x0003679c) slider_set_pane_vc

0xb2ed,	// (0x00039a6d) volume_set_pane_vc_g1

0xb94d,	// (0x0003a0cd) volume_set_pane_vc_g2

0xb956,	// (0x0003a0d6) volume_set_pane_vc_g3

0xb95f,	// (0x0003a0df) volume_set_pane_vc_g4

0xb968,	// (0x0003a0e8) volume_set_pane_vc_g5

0xb971,	// (0x0003a0f1) volume_set_pane_vc_g6

0xb97a,	// (0x0003a0fa) volume_set_pane_vc_g7

0xb983,	// (0x0003a103) volume_set_pane_vc_g8

0xb98c,	// (0x0003a10c) volume_set_pane_vc_g9

0xb995,	// (0x0003a115) volume_set_pane_vc_g10

0x0009,

0xfa24,	// (0x0003e1a4) volume_set_pane_vc_g

0x8088,	// (0x00036808) volume_set_pane_vc

0x8090,	// (0x00036810) button_value_adjust_pane_cp1_vc

0x809a,	// (0x0003681a) list_highlight_pane_cp2_vc

0x80a3,	// (0x00036823) list_set_pane_vc_ParamLimits

0x80a3,	// (0x00036823) list_set_pane_vc

0x80f5,	// (0x00036875) main_pane_set_vc_t1_ParamLimits

0x80f5,	// (0x00036875) main_pane_set_vc_t1

0x810a,	// (0x0003688a) main_pane_set_vc_t2_ParamLimits

0x810a,	// (0x0003688a) main_pane_set_vc_t2

0x811c,	// (0x0003689c) main_pane_set_vc_t3_ParamLimits

0x811c,	// (0x0003689c) main_pane_set_vc_t3

0x812e,	// (0x000368ae) main_pane_set_vc_t4_ParamLimits

0x812e,	// (0x000368ae) main_pane_set_vc_t4

0x0003,

0xfa39,	// (0x0003e1b9) main_pane_set_vc_t_ParamLimits

0xfa39,	// (0x0003e1b9) main_pane_set_vc_t

0x8140,	// (0x000368c0) setting_code_pane_vc_ParamLimits

0x8140,	// (0x000368c0) setting_code_pane_vc

0x814f,	// (0x000368cf) setting_slider_graphic_pane_vc

0x814f,	// (0x000368cf) setting_slider_pane_vc

0x814f,	// (0x000368cf) setting_text_pane_vc

0x814f,	// (0x000368cf) setting_volume_pane_vc

0x8157,	// (0x000368d7) scroll_pane_cp121_vc

0x2c7e,	// (0x000313fe) set_content_pane_vc

0x8195,	// (0x00036915) button_value_adjust_pane_g1

0x819e,	// (0x0003691e) button_value_adjust_pane_g2

0x0001,

0xfa8c,	// (0x0003e20c) button_value_adjust_pane_g

0x81a7,	// (0x00036927) form_field_slider_wide_pane_vc_t1_ParamLimits

0x81a7,	// (0x00036927) form_field_slider_wide_pane_vc_t1

0x81bd,	// (0x0003693d) form_field_slider_wide_pane_vc_t2_ParamLimits

0x81bd,	// (0x0003693d) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa91,	// (0x0003e211) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa91,	// (0x0003e211) form_field_slider_wide_pane_vc_t

0x2370,	// (0x00030af0) input_focus_pane_cp10_vc_ParamLimits

0x2370,	// (0x00030af0) input_focus_pane_cp10_vc

0x81d2,	// (0x00036952) slider_cont_pane_cp1_vc_ParamLimits

0x81d2,	// (0x00036952) slider_cont_pane_cp1_vc

0x8024,	// (0x000367a4) slider_form_pane_g1_cp2

0x802d,	// (0x000367ad) slider_form_pane_g2_cp2

0x81ed,	// (0x0003696d) form_field_slider_pane_vc_t3

0x81fb,	// (0x0003697b) form_field_slider_pane_vc_t4

0x8211,	// (0x00036991) slider_form_pane_vc_ParamLimits

0x8211,	// (0x00036991) slider_form_pane_vc

0x821e,	// (0x0003699e) form_field_slider_pane_vc_t1_ParamLimits

0x821e,	// (0x0003699e) form_field_slider_pane_vc_t1

0x8234,	// (0x000369b4) form_field_slider_pane_vc_t2_ParamLimits

0x8234,	// (0x000369b4) form_field_slider_pane_vc_t2

0x0001,

0xfaa1,	// (0x0003e221) form_field_slider_pane_vc_t_ParamLimits

0xfaa1,	// (0x0003e221) form_field_slider_pane_vc_t

0x2370,	// (0x00030af0) input_focus_pane_cp9_vc_ParamLimits

0x2370,	// (0x00030af0) input_focus_pane_cp9_vc

0x8246,	// (0x000369c6) slider_cont_pane_vc_ParamLimits

0x8246,	// (0x000369c6) slider_cont_pane_vc

0x8258,	// (0x000369d8) list_form_graphic_pane_cp_vc_ParamLimits

0x8258,	// (0x000369d8) list_form_graphic_pane_cp_vc

0x6a30,	// (0x000351b0) form_field_popup_wide_pane_vc_g1

0x826d,	// (0x000369ed) form_field_popup_wide_pane_vc_t1_ParamLimits

0x826d,	// (0x000369ed) form_field_popup_wide_pane_vc_t1

0x2c93,	// (0x00031413) input_focus_pane_cp8_vc_ParamLimits

0x2c93,	// (0x00031413) input_focus_pane_cp8_vc

0x8282,	// (0x00036a02) list_form_wide_pane_vc_ParamLimits

0x8282,	// (0x00036a02) list_form_wide_pane_vc

0x828e,	// (0x00036a0e) list_form_graphic_pane_vc_g1

0x8296,	// (0x00036a16) list_form_graphic_pane_vc_t1_ParamLimits

0x8296,	// (0x00036a16) list_form_graphic_pane_vc_t1

0x23ba,	// (0x00030b3a) list_highlight_pane_cp5_vc_ParamLimits

0x23ba,	// (0x00030b3a) list_highlight_pane_cp5_vc

0x82b2,	// (0x00036a32) list_form_graphic_pane_vc_ParamLimits

0x82b2,	// (0x00036a32) list_form_graphic_pane_vc

0x6a30,	// (0x000351b0) form_field_popup_pane_vc_g1

0x82c8,	// (0x00036a48) form_field_popup_pane_vc_t1_ParamLimits

0x82c8,	// (0x00036a48) form_field_popup_pane_vc_t1

0x2c93,	// (0x00031413) input_focus_pane_cp7_vc_ParamLimits

0x2c93,	// (0x00031413) input_focus_pane_cp7_vc

0x82dd,	// (0x00036a5d) list_form_pane_vc_ParamLimits

0x82dd,	// (0x00036a5d) list_form_pane_vc

0x82e9,	// (0x00036a69) data_form_pane_vc_t1_ParamLimits

0x82e9,	// (0x00036a69) data_form_pane_vc_t1

0x2cee,	// (0x0003146e) input_focus_pane_vc_g1

0x2cf6,	// (0x00031476) input_focus_pane_vc_g2

0x2cfe,	// (0x0003147e) input_focus_pane_vc_g3

0x2d06,	// (0x00031486) input_focus_pane_vc_g4

0x2d0e,	// (0x0003148e) input_focus_pane_vc_g5

0x2d16,	// (0x00031496) input_focus_pane_vc_g6

0x2d1e,	// (0x0003149e) input_focus_pane_vc_g7

0x2d26,	// (0x000314a6) input_focus_pane_vc_g8

0x2d2e,	// (0x000314ae) input_focus_pane_vc_g9

0x2061,	// (0x000307e1) input_focus_pane_vc_g10

0x0009,

0xf6ad,	// (0x0003de2d) input_focus_pane_vc_g

0x6a24,	// (0x000351a4) data_form_pane_vc_ParamLimits

0x6a24,	// (0x000351a4) data_form_pane_vc

0x6a30,	// (0x000351b0) form_field_data_pane_vc_g1

0x8304,	// (0x00036a84) form_field_data_pane_vc_t1_ParamLimits

0x8304,	// (0x00036a84) form_field_data_pane_vc_t1

0x2c93,	// (0x00031413) input_focus_pane_vc_ParamLimits

0x2c93,	// (0x00031413) input_focus_pane_vc

0x7447,	// (0x00035bc7) button_value_adjust_pane_cp3_vc

0x8209,	// (0x00036989) button_value_adjust_pane_cp5_vc

0x831a,	// (0x00036a9a) form_field_data_pane_vc_ParamLimits

0x831a,	// (0x00036a9a) form_field_data_pane_vc

0x744f,	// (0x00035bcf) form_field_data_pane_vc_cp2

0x8331,	// (0x00036ab1) form_field_data_wide_pane_vc_ParamLimits

0x8331,	// (0x00036ab1) form_field_data_wide_pane_vc

0x8347,	// (0x00036ac7) form_field_data_wide_pane_vc_cp2

0x834f,	// (0x00036acf) form_field_popup_pane_vc_ParamLimits

0x834f,	// (0x00036acf) form_field_popup_pane_vc

0x8366,	// (0x00036ae6) form_field_popup_wide_pane_vc_ParamLimits

0x8366,	// (0x00036ae6) form_field_popup_wide_pane_vc

0x837c,	// (0x00036afc) form_field_slider_pane_vc_ParamLimits

0x837c,	// (0x00036afc) form_field_slider_pane_vc

0x838f,	// (0x00036b0f) form_field_slider_wide_pane_vc_ParamLimits

0x838f,	// (0x00036b0f) form_field_slider_wide_pane_vc

0xcb4e,	// (0x0003b2ce) grid_touch_1_pane_ParamLimits

0xcb4e,	// (0x0003b2ce) grid_touch_1_pane

0xcb5a,	// (0x0003b2da) grid_touch_2_pane_ParamLimits

0xcb5a,	// (0x0003b2da) grid_touch_2_pane

0x65ee,	// (0x00034d6e) touch_pane_g1_ParamLimits

0x65ee,	// (0x00034d6e) touch_pane_g1

0x83b0,	// (0x00036b30) cell_app_pane_cp_wide_ParamLimits

0x83b0,	// (0x00036b30) cell_app_pane_cp_wide

0x83c0,	// (0x00036b40) grid_popup_fast_wide_pane_ParamLimits

0x83c0,	// (0x00036b40) grid_popup_fast_wide_pane

0x83d4,	// (0x00036b54) scroll_pane_cp19_ParamLimits

0x83d4,	// (0x00036b54) scroll_pane_cp19

0x21ae,	// (0x0003092e) bg_popup_window_pane_cp20

0x83e8,	// (0x00036b68) listscroll_popup_fast_wide_pane

0x23ba,	// (0x00030b3a) grid_indicator_nsta_pane

0x83f0,	// (0x00036b70) clock_nsta_pane_g1

0x83f9,	// (0x00036b79) clock_nsta_pane_t1

0xcb72,	// (0x0003b2f2) cell_indicator_nsta_pane_ParamLimits

0xcb72,	// (0x0003b2f2) cell_indicator_nsta_pane

0x83a2,	// (0x00036b22) cell_indicator_nsta_pane_g1

0xcbaa,	// (0x0003b32a) cell_indicator_nsta_pane_g2

0x0001,

0xfaab,	// (0x0003e22b) cell_indicator_nsta_pane_g

0x8415,	// (0x00036b95) clock_nsta_pane_cp

0x841d,	// (0x00036b9d) indicator_nsta_pane_cp

0x8426,	// (0x00036ba6) nsta_clock_indic_pane_g1

0x2521,	// (0x00030ca1) grid_indicator_pane

0x5ee8,	// (0x00034668) scroll_pane_cp29

0xa635,	// (0x00038db5) indicator_nsta_pane_cp2_ParamLimits

0xa635,	// (0x00038db5) indicator_nsta_pane_cp2

0x23ba,	// (0x00030b3a) main_apps_wheel_pane

0x6b44,	// (0x000352c4) form_midp_field_text_pane_ParamLimits

0x6c71,	// (0x000353f1) scroll_bar_cp050_ParamLimits

0x848f,	// (0x00036c0f) cell_indicator_pane_ParamLimits

0x848f,	// (0x00036c0f) cell_indicator_pane

0x84a5,	// (0x00036c25) cell_indicator_pane_g1

0xcbbf,	// (0x0003b33f) grid_wheel_folder_pane_ParamLimits

0xcbbf,	// (0x0003b33f) grid_wheel_folder_pane

0xcbd1,	// (0x0003b351) list_wheel_apps_pane_ParamLimits

0xcbd1,	// (0x0003b351) list_wheel_apps_pane

0xcbe0,	// (0x0003b360) main_apps_wheel_pane_g1_ParamLimits

0xcbe0,	// (0x0003b360) main_apps_wheel_pane_g1

0xcbf4,	// (0x0003b374) main_apps_wheel_pane_g2_ParamLimits

0xcbf4,	// (0x0003b374) main_apps_wheel_pane_g2

0x0001,

0xfac7,	// (0x0003e247) main_apps_wheel_pane_g_ParamLimits

0xfac7,	// (0x0003e247) main_apps_wheel_pane_g

0xcc08,	// (0x0003b388) main_apps_wheel_pane_t1_ParamLimits

0xcc08,	// (0x0003b388) main_apps_wheel_pane_t1

0xcc27,	// (0x0003b3a7) list_wheel_apps_pane_g1

0xcc2f,	// (0x0003b3af) list_wheel_apps_pane_g2

0xcc37,	// (0x0003b3b7) list_wheel_apps_pane_g3

0xcc3f,	// (0x0003b3bf) list_wheel_apps_pane_g4

0xcc47,	// (0x0003b3c7) list_wheel_apps_pane_g5

0x0004,

0xfacc,	// (0x0003e24c) list_wheel_apps_pane_g

0x23ba,	// (0x00030b3a) navi_icon_text_pane

0xadc5,	// (0x00039545) aid_fill_nsta

0x84af,	// (0x00036c2f) navi_icon_text_pane_g1

0x84bb,	// (0x00036c3b) navi_icon_text_pane_t1

0x615d,	// (0x000348dd) list_set_graphic_pane_t1_ParamLimits

0x615d,	// (0x000348dd) list_set_graphic_pane_t1

0x734b,	// (0x00035acb) popup_midp_note_alarm_window_t6_ParamLimits

0x734b,	// (0x00035acb) popup_midp_note_alarm_window_t6

0x735d,	// (0x00035add) popup_midp_note_alarm_window_t7_ParamLimits

0x735d,	// (0x00035add) popup_midp_note_alarm_window_t7

0x736f,	// (0x00035aef) popup_midp_note_alarm_window_t8_ParamLimits

0x736f,	// (0x00035aef) popup_midp_note_alarm_window_t8

0x7381,	// (0x00035b01) popup_midp_note_alarm_window_t9_ParamLimits

0x7381,	// (0x00035b01) popup_midp_note_alarm_window_t9

0x7393,	// (0x00035b13) popup_midp_note_alarm_window_t10_ParamLimits

0x7393,	// (0x00035b13) popup_midp_note_alarm_window_t10

0x73a5,	// (0x00035b25) popup_midp_note_alarm_window_t11_ParamLimits

0x73a5,	// (0x00035b25) popup_midp_note_alarm_window_t11

0x73b7,	// (0x00035b37) scroll_pane_cp17_ParamLimits

0x73b7,	// (0x00035b37) scroll_pane_cp17

0xb2ed,	// (0x00039a6d) volume_small_pane_cp_g1

0xb99e,	// (0x0003a11e) volume_small_pane_cp_g2

0xb9a7,	// (0x0003a127) volume_small_pane_cp_g3

0xb9b0,	// (0x0003a130) volume_small_pane_cp_g4

0xb31a,	// (0x00039a9a) volume_small_pane_cp_g5

0xb9b9,	// (0x0003a139) volume_small_pane_cp_g6

0xb9c2,	// (0x0003a142) volume_small_pane_cp_g7

0xb9cb,	// (0x0003a14b) volume_small_pane_cp_g8

0xb9d4,	// (0x0003a154) volume_small_pane_cp_g9

0xb9dd,	// (0x0003a15d) volume_small_pane_cp_g10

0x640c,	// (0x00034b8c) midp_ticker_pane_g1_ParamLimits

0x6418,	// (0x00034b98) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x0003def5) midp_ticker_pane_g_ParamLimits

0x6424,	// (0x00034ba4) midp_ticker_pane_t1_ParamLimits

0xadd5,	// (0x00039555) aid_fill_nsta_2

0x6c5d,	// (0x000353dd) list_form2_midp_pane

0x7c01,	// (0x00036381) midp_editing_number_pane_ParamLimits

0x7c0d,	// (0x0003638d) midp_ticker_pane_ParamLimits

0x84cd,	// (0x00036c4d) form2_midp_field_pane

0x84d5,	// (0x00036c55) scroll_pane_cp51

0x84f5,	// (0x00036c75) form2_midp_button_pane_ParamLimits

0x84f5,	// (0x00036c75) form2_midp_button_pane

0x8507,	// (0x00036c87) form2_midp_content_pane_ParamLimits

0x8507,	// (0x00036c87) form2_midp_content_pane

0x8521,	// (0x00036ca1) form2_midp_field_choice_group_pane

0x8529,	// (0x00036ca9) form2_midp_field_pane_g1

0x8531,	// (0x00036cb1) form2_midp_field_pane_g2

0x8539,	// (0x00036cb9) form2_midp_field_pane_g3

0x8541,	// (0x00036cc1) form2_midp_field_pane_g4

0x0003,

0xfaf1,	// (0x0003e271) form2_midp_field_pane_g

0x8549,	// (0x00036cc9) form2_midp_gauge_slider_pane

0x8551,	// (0x00036cd1) form2_midp_gauge_wait_pane

0x8559,	// (0x00036cd9) form2_midp_image_pane_ParamLimits

0x8559,	// (0x00036cd9) form2_midp_image_pane

0x8574,	// (0x00036cf4) form2_midp_label_pane_ParamLimits

0x8574,	// (0x00036cf4) form2_midp_label_pane

0xcc82,	// (0x0003b402) form2_midp_label_pane_cp_ParamLimits

0xcc82,	// (0x0003b402) form2_midp_label_pane_cp

0x858d,	// (0x00036d0d) form2_midp_string_pane_ParamLimits

0x858d,	// (0x00036d0d) form2_midp_string_pane

0xf14d,	// (0x0003d8cd) form2_midp_text_pane_ParamLimits

0xf14d,	// (0x0003d8cd) form2_midp_text_pane

0x859f,	// (0x00036d1f) form2_midp_time_pane

0x85af,	// (0x00036d2f) input_focus_pane_cp51_ParamLimits

0x85af,	// (0x00036d2f) input_focus_pane_cp51

0x85c7,	// (0x00036d47) form2_midp_label_pane_t1_ParamLimits

0x85c7,	// (0x00036d47) form2_midp_label_pane_t1

0xf166,	// (0x0003d8e6) form2_mdip_text_pane_t1_ParamLimits

0xf166,	// (0x0003d8e6) form2_mdip_text_pane_t1

0xf181,	// (0x0003d901) form2_midp_time_pane_t1

0x860f,	// (0x00036d8f) form2_midp_gauge_slider_pane_t1

0xcca1,	// (0x0003b421) form2_midp_gauge_slider_pane_t2

0xccb3,	// (0x0003b433) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafa,	// (0x0003e27a) form2_midp_gauge_slider_pane_t

0x8621,	// (0x00036da1) form2_midp_slider_pane

0x862d,	// (0x00036dad) form2_midp_gauge_wait_pane_t1

0x863b,	// (0x00036dbb) form2_midp_wait_pane_ParamLimits

0x863b,	// (0x00036dbb) form2_midp_wait_pane

0xa4b3,	// (0x00038c33) list_single_2graphic_pane_cp4_ParamLimits

0xa4b3,	// (0x00038c33) list_single_2graphic_pane_cp4

0xb22c,	// (0x000399ac) list_single_midp_graphic_pane_cp_ParamLimits

0xb22c,	// (0x000399ac) list_single_midp_graphic_pane_cp

0x21ae,	// (0x0003092e) list_highlight_pane_cp20

0x8666,	// (0x00036de6) list_single_2graphic_pane_g1_cp4

0x7c7a,	// (0x000363fa) list_single_2graphic_pane_g2_cp4

0x866e,	// (0x00036dee) list_single_2graphic_pane_t1_cp4

0x23ba,	// (0x00030b3a) list_highlight_pane_cp21

0x867d,	// (0x00036dfd) list_single_midp_graphic_pane_g4_cp

0x868c,	// (0x00036e0c) list_single_midp_graphic_pane_t1_cp

0xccc5,	// (0x0003b445) form2_mdip_string_pane_t1_ParamLimits

0xccc5,	// (0x0003b445) form2_mdip_string_pane_t1

0x21ae,	// (0x0003092e) bg_wml_button_pane_cp2

0x2061,	// (0x000307e1) form2_midp_image_pane_g1

0xe9c1,	// (0x0003d141) list_double_large_graphic_pane_g5_ParamLimits

0xe9c1,	// (0x0003d141) list_double_large_graphic_pane_g5

0xa750,	// (0x00038ed0) midp_form_pane_ParamLimits

0x23ba,	// (0x00030b3a) main_apps_wheel_pane_ParamLimits

0xac67,	// (0x000393e7) popup_preview_window_ParamLimits

0xac67,	// (0x000393e7) popup_preview_window

0x66f4,	// (0x00034e74) popup_touch_info_window_ParamLimits

0x66f4,	// (0x00034e74) popup_touch_info_window

0x6712,	// (0x00034e92) popup_touch_menu_window_ParamLimits

0x6712,	// (0x00034e92) popup_touch_menu_window

0x2057,	// (0x000307d7) bg_popup_sub_pane_cp6

0x86a1,	// (0x00036e21) list_touch_menu_pane

0x86a9,	// (0x00036e29) list_single_touch_menu_pane_ParamLimits

0x86a9,	// (0x00036e29) list_single_touch_menu_pane

0x86c0,	// (0x00036e40) list_single_touch_menu_pane_t1

0x23ba,	// (0x00030b3a) bg_popup_sub_pane_cp7_ParamLimits

0x23ba,	// (0x00030b3a) bg_popup_sub_pane_cp7

0x86ce,	// (0x00036e4e) heading_sub_pane

0x86d6,	// (0x00036e56) list_touch_info_pane_ParamLimits

0x86d6,	// (0x00036e56) list_touch_info_pane

0x86e5,	// (0x00036e65) list_single_touch_info_pane_ParamLimits

0x86e5,	// (0x00036e65) list_single_touch_info_pane

0x86f6,	// (0x00036e76) list_single_touch_info_pane_t1

0x8704,	// (0x00036e84) list_single_touch_info_pane_t2

0x0001,

0xfb08,	// (0x0003e288) list_single_touch_info_pane_t

0x63e2,	// (0x00034b62) bg_popup_heading_pane_cp

0x8712,	// (0x00036e92) heading_sub_pane_t1

0x69ea,	// (0x0003516a) bg_popup_preview_window_pane_cp_ParamLimits

0x69ea,	// (0x0003516a) bg_popup_preview_window_pane_cp

0x86ce,	// (0x00036e4e) heading_preview_pane

0x86d6,	// (0x00036e56) list_preview_pane_ParamLimits

0x86d6,	// (0x00036e56) list_preview_pane

0x8720,	// (0x00036ea0) popup_preview_window_g1

0x86e5,	// (0x00036e65) list_single_preview_pane_ParamLimits

0x86e5,	// (0x00036e65) list_single_preview_pane

0x8728,	// (0x00036ea8) list_single_preview_pane_g1

0x8730,	// (0x00036eb0) list_single_preview_pane_t1

0x86f6,	// (0x00036e76) list_single_preview_pane_t2

0x0001,

0xfb0d,	// (0x0003e28d) list_single_preview_pane_t

0x873e,	// (0x00036ebe) bg_popup_heading_pane_cp2_ParamLimits

0x873e,	// (0x00036ebe) bg_popup_heading_pane_cp2

0x8754,	// (0x00036ed4) heading_preview_pane_g1

0x875c,	// (0x00036edc) heading_preview_pane_t1_ParamLimits

0x875c,	// (0x00036edc) heading_preview_pane_t1

0x2551,	// (0x00030cd1) soft_indicator_pane_t1_ParamLimits

0x2ba8,	// (0x00031328) scroll_pane_ParamLimits

0x5ded,	// (0x0003456d) scroll_sc2_left_pane

0x5de4,	// (0x00034564) scroll_sc2_right_pane

0x5e0c,	// (0x0003458c) scroll_bg_pane_g1_ParamLimits

0x5e21,	// (0x000345a1) scroll_bg_pane_g2_ParamLimits

0x5e39,	// (0x000345b9) scroll_bg_pane_g3_ParamLimits

0xf704,	// (0x0003de84) scroll_bg_pane_g_ParamLimits

0x5e0c,	// (0x0003458c) scroll_handle_pane_g1_ParamLimits

0x5e5b,	// (0x000345db) scroll_handle_pane_g2_ParamLimits

0x5e39,	// (0x000345b9) scroll_handle_pane_g3_ParamLimits

0xf70b,	// (0x0003de8b) scroll_handle_pane_g_ParamLimits

0x664c,	// (0x00034dcc) popup_choice_list_window_ParamLimits

0x664c,	// (0x00034dcc) popup_choice_list_window

0x6846,	// (0x00034fc6) choice_list_pane

0x68bc,	// (0x0003503c) cell_toolbar_pane_t1

0x68e4,	// (0x00035064) toolbar_button_pane_ParamLimits

0x7962,	// (0x000360e2) ai_gene_pane_1_t2_ParamLimits

0x7962,	// (0x000360e2) ai_gene_pane_1_t2

0x0001,

0xf923,	// (0x0003e0a3) ai_gene_pane_1_t_ParamLimits

0xf923,	// (0x0003e0a3) ai_gene_pane_1_t

0x8779,	// (0x00036ef9) scroll_sc2_left_pane_g1

0x8779,	// (0x00036ef9) scroll_sc2_right_pane_g1

0x5d20,	// (0x000344a0) bg_popup_sub_pane_cp10

0x8783,	// (0x00036f03) list_choice_list_pane

0x879a,	// (0x00036f1a) list_single_choice_list_pane_ParamLimits

0x879a,	// (0x00036f1a) list_single_choice_list_pane

0x87ae,	// (0x00036f2e) list_single_choice_list_pane_g1

0x2e12,	// (0x00031592) list_single_choice_list_pane_t1_ParamLimits

0x2e12,	// (0x00031592) list_single_choice_list_pane_t1

0x87b6,	// (0x00036f36) choice_list_pane_g1

0x87be,	// (0x00036f3e) choice_list_pane_t1

0x2057,	// (0x000307d7) input_focus_pane_cp11

0x5d39,	// (0x000344b9) title_pane_stacon_g2_ParamLimits

0x5d39,	// (0x000344b9) title_pane_stacon_g2

0x0002,

0xf6ea,	// (0x0003de6a) title_pane_stacon_g_ParamLimits

0xf6ea,	// (0x0003de6a) title_pane_stacon_g

0x63e2,	// (0x00034b62) cursor_press_pane

0xaab4,	// (0x00039234) popup_fep_hwr_window_ParamLimits

0xaab4,	// (0x00039234) popup_fep_hwr_window

0x669e,	// (0x00034e1e) popup_fep_vkb_window_ParamLimits

0x669e,	// (0x00034e1e) popup_fep_vkb_window

0x87cc,	// (0x00036f4c) cursor_press_pane_g1

0x0002,

0xfb36,	// (0x0003e2b6) fep_vkb_side_pane_g_ParamLimits

0xba1b,	// (0x0003a19b) fep_hwr_candidate_pane_ParamLimits

0xba1b,	// (0x0003a19b) fep_hwr_candidate_pane

0xba43,	// (0x0003a1c3) fep_hwr_side_pane_ParamLimits

0xba43,	// (0x0003a1c3) fep_hwr_side_pane

0xba63,	// (0x0003a1e3) fep_hwr_top_pane_ParamLimits

0xba63,	// (0x0003a1e3) fep_hwr_top_pane

0xba7b,	// (0x0003a1fb) fep_hwr_write_pane_ParamLimits

0xba7b,	// (0x0003a1fb) fep_hwr_write_pane

0xfb36,	// (0x0003e2b6) fep_vkb_side_pane_g

0x87e6,	// (0x00036f66) fep_hwr_top_pane_g1

0x87d4,	// (0x00036f54) fep_hwr_top_pane_g2

0xbab5,	// (0x0003a235) fep_hwr_top_pane_g3

0x0002,

0xfb12,	// (0x0003e292) fep_hwr_top_pane_g

0xbaca,	// (0x0003a24a) fep_hwr_top_text_pane

0x5f55,	// (0x000346d5) fep_hwr_top_text_pane_g1

0x881c,	// (0x00036f9c) fep_hwr_top_text_pane_t1

0xbbb8,	// (0x0003a338) fep_hwr_candidate_pane_g1

0x89e5,	// (0x00037165) fep_vkb_keypad_pane_g3_ParamLimits

0x89e5,	// (0x00037165) fep_vkb_keypad_pane_g3

0x8a07,	// (0x00037187) fep_vkb_keypad_pane_g4_ParamLimits

0x8a07,	// (0x00037187) fep_vkb_keypad_pane_g4

0x8a76,	// (0x000371f6) fep_vkb_bottom_pane_g2_ParamLimits

0x8a76,	// (0x000371f6) fep_vkb_bottom_pane_g2

0x0001,

0xfb3d,	// (0x0003e2bd) fep_vkb_bottom_pane_g_ParamLimits

0xfb3d,	// (0x0003e2bd) fep_vkb_bottom_pane_g

0x8779,	// (0x00036ef9) cell_vkb_side_pane_g2

0x0001,

0xfb47,	// (0x0003e2c7) cell_vkb_side_pane_g

0x8aba,	// (0x0003723a) cell_vkb_side_pane_t1

0x8ac8,	// (0x00037248) cell_vkb_side_pane_t1_copy1

0x8779,	// (0x00036ef9) bg_fep_vkb_candidate_pane_g2

0x8b96,	// (0x00037316) cell_vkb_candidate_pane_ParamLimits

0x882a,	// (0x00036faa) aid_size_cell_vkb_ParamLimits

0x882a,	// (0x00036faa) aid_size_cell_vkb

0x8b96,	// (0x00037316) cell_vkb_candidate_pane

0xbbdf,	// (0x0003a35f) bg_popup_fep_shadow_pane_g1

0x8894,	// (0x00037014) fep_vkb_bottom_pane_ParamLimits

0x8894,	// (0x00037014) fep_vkb_bottom_pane

0x88d1,	// (0x00037051) fep_vkb_candidate_pane_ParamLimits

0x88d1,	// (0x00037051) fep_vkb_candidate_pane

0x88ed,	// (0x0003706d) fep_vkb_keypad_pane_ParamLimits

0x88ed,	// (0x0003706d) fep_vkb_keypad_pane

0x8921,	// (0x000370a1) fep_vkb_side_pane_ParamLimits

0x8921,	// (0x000370a1) fep_vkb_side_pane

0x894d,	// (0x000370cd) fep_vkb_top_pane_ParamLimits

0x894d,	// (0x000370cd) fep_vkb_top_pane

0x8979,	// (0x000370f9) fep_vkb_top_pane_g1_ParamLimits

0x8979,	// (0x000370f9) fep_vkb_top_pane_g1

0x8988,	// (0x00037108) fep_vkb_top_pane_g2_ParamLimits

0x8988,	// (0x00037108) fep_vkb_top_pane_g2

0x8997,	// (0x00037117) fep_vkb_top_pane_g3_ParamLimits

0x8997,	// (0x00037117) fep_vkb_top_pane_g3

0x0003,

0xfb2d,	// (0x0003e2ad) fep_vkb_top_pane_g_ParamLimits

0xfb2d,	// (0x0003e2ad) fep_vkb_top_pane_g

0x89b5,	// (0x00037135) fep_vkb_top_text_pane_ParamLimits

0x89b5,	// (0x00037135) fep_vkb_top_text_pane

0xcd49,	// (0x0003b4c9) fep_vkb_side_pane_g1_ParamLimits

0xcd49,	// (0x0003b4c9) fep_vkb_side_pane_g1

0x89d4,	// (0x00037154) grid_vkb_side_pane_ParamLimits

0x89d4,	// (0x00037154) grid_vkb_side_pane

0xbbe7,	// (0x0003a367) bg_popup_fep_shadow_pane_g2

0xbbf0,	// (0x0003a370) bg_popup_fep_shadow_pane_g3

0xbbf8,	// (0x0003a378) bg_popup_fep_shadow_pane_g4

0xbc01,	// (0x0003a381) bg_popup_fep_shadow_pane_g5

0xbc09,	// (0x0003a389) bg_popup_fep_shadow_pane_g6

0xbc11,	// (0x0003a391) bg_popup_fep_shadow_pane_g7

0x2d06,	// (0x00031486) bg_popup_fep_shadow_pane_g8

0x8a25,	// (0x000371a5) grid_vkb_keypad_number_pane_ParamLimits

0x8a25,	// (0x000371a5) grid_vkb_keypad_number_pane

0x8a35,	// (0x000371b5) grid_vkb_keypad_pane_ParamLimits

0x8a35,	// (0x000371b5) grid_vkb_keypad_pane

0x8a5b,	// (0x000371db) fep_vkb_bottom_pane_g1_ParamLimits

0x8a5b,	// (0x000371db) fep_vkb_bottom_pane_g1

0x8a84,	// (0x00037204) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x8a84,	// (0x00037204) grid_vkb_keypad_bottom_left_pane

0x8a99,	// (0x00037219) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x8a99,	// (0x00037219) grid_vkb_keypad_bottom_right_pane

0x8aae,	// (0x0003722e) fep_vkb_top_text_pane_g1

0xcd93,	// (0x0003b513) fep_vkb_top_text_pane_t1

0xcda8,	// (0x0003b528) cell_vkb_side_pane_ParamLimits

0xcda8,	// (0x0003b528) cell_vkb_side_pane

0x8779,	// (0x00036ef9) cell_vkb_side_pane_g1

0x8ad6,	// (0x00037256) cell_vkb_keypad_pane_ParamLimits

0x8ad6,	// (0x00037256) cell_vkb_keypad_pane

0x8b43,	// (0x000372c3) cell_vkb_keypad_pane_g1

0x0008,

0xfb5a,	// (0x0003e2da) bg_popup_fep_shadow_pane_g

0xbc21,	// (0x0003a3a1) cell_hwr_side_pane_g1

0xbc21,	// (0x0003a3a1) cell_hwr_side_pane_g2

0x8b4d,	// (0x000372cd) cell_vkb_keypad_pane_t1

0xcdcb,	// (0x0003b54b) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcdcb,	// (0x0003b54b) cell_vkb_keypad_bottom_left_pane

0xcde8,	// (0x0003b568) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcde8,	// (0x0003b568) cell_vkb_keypad_bottom_right_pane

0x8779,	// (0x00036ef9) cell_vkb_keypad_bottom_left_pane_g1

0x8779,	// (0x00036ef9) cell_vkb_keypad_bottom_right_pane_g1

0x8b5b,	// (0x000372db) cell_vkb_keypad_number_pane_ParamLimits

0x8b5b,	// (0x000372db) cell_vkb_keypad_number_pane

0x8b7a,	// (0x000372fa) cell_vkb_keypad_number_pane_g1

0x8b84,	// (0x00037304) cell_vkb_keypad_number_pane_g2

0x8b8d,	// (0x0003730d) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4c,	// (0x0003e2cc) cell_vkb_keypad_number_pane_g

0x8b4d,	// (0x000372cd) cell_vkb_keypad_number_pane_t1

0x8baf,	// (0x0003732f) fep_vkb_candidate_pane_g1

0x0001,

0xfb6d,	// (0x0003e2ed) cell_hwr_side_pane_g

0x8bc8,	// (0x00037348) cell_hwr_side_pane_t1

0xbc2b,	// (0x0003a3ab) cell_hwr_side_pane_t1_copy1

0xbc39,	// (0x0003a3b9) cell_hwr_candidate_pane_g1

0xbc68,	// (0x0003a3e8) cell_hwr_candidate_pane_t1

0x8779,	// (0x00036ef9) cell_vkb_candidate_pane_g2

0x8c4e,	// (0x000373ce) cell_vkb_candidate_pane_t1

0xb9e6,	// (0x0003a166) bg_popup_fep_shadow_pane_ParamLimits

0xb9e6,	// (0x0003a166) bg_popup_fep_shadow_pane

0xba95,	// (0x0003a215) bg_fep_hwr_top_pane_g4

0x87f8,	// (0x00036f78) bg_hwr_side_pane_g1_ParamLimits

0x87f8,	// (0x00036f78) bg_hwr_side_pane_g1

0xbb06,	// (0x0003a286) cell_hwr_side_pane_ParamLimits

0xbb06,	// (0x0003a286) cell_hwr_side_pane

0xbb41,	// (0x0003a2c1) fep_hwr_write_pane_g1_ParamLimits

0xbb41,	// (0x0003a2c1) fep_hwr_write_pane_g1

0xbb4e,	// (0x0003a2ce) fep_hwr_write_pane_g2_ParamLimits

0xbb4e,	// (0x0003a2ce) fep_hwr_write_pane_g2

0xbb5b,	// (0x0003a2db) fep_hwr_write_pane_g3_ParamLimits

0xbb5b,	// (0x0003a2db) fep_hwr_write_pane_g3

0xbb69,	// (0x0003a2e9) fep_hwr_write_pane_g4_ParamLimits

0xbb69,	// (0x0003a2e9) fep_hwr_write_pane_g4

0x0005,

0xfb19,	// (0x0003e299) fep_hwr_write_pane_g_ParamLimits

0xfb19,	// (0x0003e299) fep_hwr_write_pane_g

0xba95,	// (0x0003a215) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xba95,	// (0x0003a215) bg_fep_hwr_candidate_pane_g2

0xbb7e,	// (0x0003a2fe) cell_hwr_candidate_pane_ParamLimits

0xbb7e,	// (0x0003a2fe) cell_hwr_candidate_pane

0xbbb8,	// (0x0003a338) fep_hwr_candidate_pane_g1_ParamLimits

0x8858,	// (0x00036fd8) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x8858,	// (0x00036fd8) bg_popup_fep_shadow_pane_cp2

0x89a7,	// (0x00037127) fep_vkb_top_pane_g4_ParamLimits

0x89a7,	// (0x00037127) fep_vkb_top_pane_g4

0x89c6,	// (0x00037146) fep_vkb_side_pane_g2_ParamLimits

0x89c6,	// (0x00037146) fep_vkb_side_pane_g2

0xeb36,	// (0x0003d2b6) list_setting_pane_t4_ParamLimits

0xeb36,	// (0x0003d2b6) list_setting_pane_t4

0xebcc,	// (0x0003d34c) list_setting_number_pane_t5_ParamLimits

0xebcc,	// (0x0003d34c) list_setting_number_pane_t5

0xa4a3,	// (0x00038c23) list_double_heading_pane_cp2_ParamLimits

0xa4a3,	// (0x00038c23) list_double_heading_pane_cp2

0x6257,	// (0x000349d7) list_double_heading_pane_g1_cp2_ParamLimits

0x6257,	// (0x000349d7) list_double_heading_pane_g1_cp2

0x8c5c,	// (0x000373dc) list_double_heading_pane_g2_cp2_ParamLimits

0x8c5c,	// (0x000373dc) list_double_heading_pane_g2_cp2

0x8c70,	// (0x000373f0) list_double_heading_pane_t1_cp2_ParamLimits

0x8c70,	// (0x000373f0) list_double_heading_pane_t1_cp2

0x8c86,	// (0x00037406) list_double_heading_pane_t2_cp2_ParamLimits

0x8c86,	// (0x00037406) list_double_heading_pane_t2_cp2

0x2041,	// (0x000307c1) aid_value_unit2

0x9dd9,	// (0x00038559) popup_preview_fixed_window

0x270f,	// (0x00030e8f) bg_popup_preview_window_pane_cp02

0x8c98,	// (0x00037418) list_preview_fixed_pane

0x8cde,	// (0x0003745e) list_empty_pane_fp_ParamLimits

0x8cde,	// (0x0003745e) list_empty_pane_fp

0x8cde,	// (0x0003745e) list_single_cale_day_pane_fp_ParamLimits

0x8cde,	// (0x0003745e) list_single_cale_day_pane_fp

0x8cde,	// (0x0003745e) list_single_graphic_heading_pane_fp_ParamLimits

0x8cde,	// (0x0003745e) list_single_graphic_heading_pane_fp

0x8cde,	// (0x0003745e) list_single_graphic_pane_fp_ParamLimits

0x8cde,	// (0x0003745e) list_single_graphic_pane_fp

0x8cde,	// (0x0003745e) list_single_heading_pane_fp_ParamLimits

0x8cde,	// (0x0003745e) list_single_heading_pane_fp

0x8cde,	// (0x0003745e) list_single_pane_fp_ParamLimits

0x8cde,	// (0x0003745e) list_single_pane_fp

0x8cf2,	// (0x00037472) list_single_pane_fp_g1_ParamLimits

0x8cf2,	// (0x00037472) list_single_pane_fp_g1

0xe827,	// (0x0003cfa7) list_single_pane_fp_g2_ParamLimits

0xe827,	// (0x0003cfa7) list_single_pane_fp_g2

0xf4b1,	// (0x0003dc31) list_single_pane_fp_g3_ParamLimits

0xf4b1,	// (0x0003dc31) list_single_pane_fp_g3

0x8cfe,	// (0x0003747e) list_single_pane_fp_g4_ParamLimits

0x8cfe,	// (0x0003747e) list_single_pane_fp_g4

0x0003,

0xfb80,	// (0x0003e300) list_single_pane_fp_g_ParamLimits

0xfb80,	// (0x0003e300) list_single_pane_fp_g

0xf194,	// (0x0003d914) list_single_pane_fp_t1_ParamLimits

0xf194,	// (0x0003d914) list_single_pane_fp_t1

0xf1ab,	// (0x0003d92b) list_single_graphic_pane_fp_g1_ParamLimits

0xf1ab,	// (0x0003d92b) list_single_graphic_pane_fp_g1

0x8cf2,	// (0x00037472) list_single_graphic_pane_fp_g2_ParamLimits

0x8cf2,	// (0x00037472) list_single_graphic_pane_fp_g2

0xe827,	// (0x0003cfa7) list_single_graphic_pane_fp_g3_ParamLimits

0xe827,	// (0x0003cfa7) list_single_graphic_pane_fp_g3

0xf4b1,	// (0x0003dc31) list_single_graphic_pane_fp_g4_ParamLimits

0xf4b1,	// (0x0003dc31) list_single_graphic_pane_fp_g4

0x8cfe,	// (0x0003747e) list_single_graphic_pane_fp_g5_ParamLimits

0x8cfe,	// (0x0003747e) list_single_graphic_pane_fp_g5

0x0004,

0xfb89,	// (0x0003e309) list_single_graphic_pane_fp_g_ParamLimits

0xfb89,	// (0x0003e309) list_single_graphic_pane_fp_g

0xf1b7,	// (0x0003d937) list_single_graphic_pane_fp_t1_ParamLimits

0xf1b7,	// (0x0003d937) list_single_graphic_pane_fp_t1

0xf1ab,	// (0x0003d92b) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf1ab,	// (0x0003d92b) list_single_graphic_heading_pane_fp_g1

0x8cf2,	// (0x00037472) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x8cf2,	// (0x00037472) list_single_graphic_heading_pane_fp_g2

0xe827,	// (0x0003cfa7) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xe827,	// (0x0003cfa7) list_single_graphic_heading_pane_fp_g3

0xf4b1,	// (0x0003dc31) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xf4b1,	// (0x0003dc31) list_single_graphic_heading_pane_fp_g4

0x8cfe,	// (0x0003747e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x8cfe,	// (0x0003747e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb89,	// (0x0003e309) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb89,	// (0x0003e309) list_single_graphic_heading_pane_fp_g

0xf1cd,	// (0x0003d94d) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf1cd,	// (0x0003d94d) list_single_graphic_heading_pane_fp_t1

0xf1e3,	// (0x0003d963) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf1e3,	// (0x0003d963) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb94,	// (0x0003e314) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb94,	// (0x0003e314) list_single_graphic_heading_pane_fp_t

0xf1f5,	// (0x0003d975) list_single_cale_day_pane_fp_g1_ParamLimits

0xf1f5,	// (0x0003d975) list_single_cale_day_pane_fp_g1

0x8d0a,	// (0x0003748a) list_single_cale_day_pane_fp_g2_ParamLimits

0x8d0a,	// (0x0003748a) list_single_cale_day_pane_fp_g2

0xf4c5,	// (0x0003dc45) list_single_cale_day_pane_fp_g3_ParamLimits

0xf4c5,	// (0x0003dc45) list_single_cale_day_pane_fp_g3

0xf4ed,	// (0x0003dc6d) list_single_cale_day_pane_fp_g4_ParamLimits

0xf4ed,	// (0x0003dc6d) list_single_cale_day_pane_fp_g4

0xf511,	// (0x0003dc91) list_single_cale_day_pane_fp_g5_ParamLimits

0xf511,	// (0x0003dc91) list_single_cale_day_pane_fp_g5

0x0004,

0xfb99,	// (0x0003e319) list_single_cale_day_pane_fp_g_ParamLimits

0xfb99,	// (0x0003e319) list_single_cale_day_pane_fp_g

0xf22d,	// (0x0003d9ad) list_single_cale_day_pane_fp_t1_ParamLimits

0xf22d,	// (0x0003d9ad) list_single_cale_day_pane_fp_t1

0xf253,	// (0x0003d9d3) list_single_cale_day_pane_fp_t2_ParamLimits

0xf253,	// (0x0003d9d3) list_single_cale_day_pane_fp_t2

0xf26c,	// (0x0003d9ec) list_single_cale_day_pane_fp_t3_ParamLimits

0xf26c,	// (0x0003d9ec) list_single_cale_day_pane_fp_t3

0x0002,

0xfba4,	// (0x0003e324) list_single_cale_day_pane_fp_t_ParamLimits

0xfba4,	// (0x0003e324) list_single_cale_day_pane_fp_t

0x8cf2,	// (0x00037472) list_empty_pane_fp_g1_ParamLimits

0x8cf2,	// (0x00037472) list_empty_pane_fp_g1

0xf285,	// (0x0003da05) list_empty_pane_fp_t1

0xf293,	// (0x0003da13) list_empty_pane_fp_t2

0x0001,

0xfbab,	// (0x0003e32b) list_empty_pane_fp_t

0x8cf2,	// (0x00037472) list_single_heading_pane_fp_g1_ParamLimits

0x8cf2,	// (0x00037472) list_single_heading_pane_fp_g1

0xe827,	// (0x0003cfa7) list_single_heading_pane_fp_g2_ParamLimits

0xe827,	// (0x0003cfa7) list_single_heading_pane_fp_g2

0xf4b1,	// (0x0003dc31) list_single_heading_pane_fp_g3_ParamLimits

0xf4b1,	// (0x0003dc31) list_single_heading_pane_fp_g3

0x0002,

0xfbb0,	// (0x0003e330) list_single_heading_pane_fp_g_ParamLimits

0xfbb0,	// (0x0003e330) list_single_heading_pane_fp_g

0xf2a1,	// (0x0003da21) list_single_heading_pane_fp_t1_ParamLimits

0xf2a1,	// (0x0003da21) list_single_heading_pane_fp_t1

0xf2b3,	// (0x0003da33) list_single_heading_pane_fp_t2_ParamLimits

0xf2b3,	// (0x0003da33) list_single_heading_pane_fp_t2

0x0001,

0xfbb7,	// (0x0003e337) list_single_heading_pane_fp_t_ParamLimits

0xfbb7,	// (0x0003e337) list_single_heading_pane_fp_t

0x2e6a,	// (0x000315ea) aid_size_cell_fast

0x2684,	// (0x00030e04) soft_indicator_pane_cp1_t1

0x2ea7,	// (0x00031627) cell_app_pane_cp2_ParamLimits

0x2ea7,	// (0x00031627) cell_app_pane_cp2

0xba08,	// (0x0003a188) fep_hwr_candidate_drop_down_list_pane

0xbbd2,	// (0x0003a352) fep_hwr_candidate_pane_g3_ParamLimits

0xbbd2,	// (0x0003a352) fep_hwr_candidate_pane_g3

0x5734,	// (0x00033eb4) fep_hwr_candidate_pane_g4_ParamLimits

0x5734,	// (0x00033eb4) fep_hwr_candidate_pane_g4

0x0002,

0xfb26,	// (0x0003e2a6) fep_hwr_candidate_pane_g_ParamLimits

0xfb26,	// (0x0003e2a6) fep_hwr_candidate_pane_g

0x88c0,	// (0x00037040) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x88c0,	// (0x00037040) fep_vkb_candidate_drop_down_list_pane

0x8bb7,	// (0x00037337) fep_vkb_candidate_pane_g3

0x8bbf,	// (0x0003733f) fep_vkb_candidate_pane_g4

0x0002,

0xfb53,	// (0x0003e2d3) fep_vkb_candidate_pane_g

0xbc39,	// (0x0003a3b9) cell_hwr_candidate_pane_g1_ParamLimits

0xbc47,	// (0x0003a3c7) cell_hwr_candidate_pane_g3_ParamLimits

0xbc47,	// (0x0003a3c7) cell_hwr_candidate_pane_g3

0xce21,	// (0x0003b5a1) cell_hwr_candidate_pane_g4_ParamLimits

0xce21,	// (0x0003b5a1) cell_hwr_candidate_pane_g4

0x0002,

0xfb72,	// (0x0003e2f2) cell_hwr_candidate_pane_g_ParamLimits

0xfb72,	// (0x0003e2f2) cell_hwr_candidate_pane_g

0x8c18,	// (0x00037398) cell_vkb_candidate_pane_g3_ParamLimits

0x8c18,	// (0x00037398) cell_vkb_candidate_pane_g3

0x8c33,	// (0x000373b3) cell_vkb_candidate_pane_g4_ParamLimits

0x8c33,	// (0x000373b3) cell_vkb_candidate_pane_g4

0x8d16,	// (0x00037496) cell_app_pane_cp2_g1_ParamLimits

0x8d16,	// (0x00037496) cell_app_pane_cp2_g1

0x8d34,	// (0x000374b4) cell_app_pane_cp2_g2_ParamLimits

0x8d34,	// (0x000374b4) cell_app_pane_cp2_g2

0x0001,

0xfbbc,	// (0x0003e33c) cell_app_pane_cp2_g_ParamLimits

0xfbbc,	// (0x0003e33c) cell_app_pane_cp2_g

0x8d40,	// (0x000374c0) cell_app_pane_cp2_t1_ParamLimits

0x8d40,	// (0x000374c0) cell_app_pane_cp2_t1

0x2c93,	// (0x00031413) grid_highlight_pane_cp1_ParamLimits

0x2c93,	// (0x00031413) grid_highlight_pane_cp1

0xbc85,	// (0x0003a405) cell_hwr_candidate_pane_cp1_ParamLimits

0xbc85,	// (0x0003a405) cell_hwr_candidate_pane_cp1

0xbc39,	// (0x0003a3b9) fep_hwr_candidate_drop_down_list_pane_g1

0xbca3,	// (0x0003a423) fep_hwr_candidate_drop_down_list_pane_g2

0xbcb0,	// (0x0003a430) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc1,	// (0x0003e341) fep_hwr_candidate_drop_down_list_pane_g

0xbcbd,	// (0x0003a43d) fep_hwr_candidate_drop_down_list_scroll_pane

0xbcc6,	// (0x0003a446) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbcc6,	// (0x0003a446) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xbcd3,	// (0x0003a453) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbcd3,	// (0x0003a453) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xbce0,	// (0x0003a460) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbce0,	// (0x0003a460) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xbced,	// (0x0003a46d) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbced,	// (0x0003a46d) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xbd08,	// (0x0003a488) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbd08,	// (0x0003a488) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xbd23,	// (0x0003a4a3) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xbd23,	// (0x0003a4a3) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xbd3e,	// (0x0003a4be) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xbd3e,	// (0x0003a4be) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xbd59,	// (0x0003a4d9) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xbd59,	// (0x0003a4d9) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc8,	// (0x0003e348) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc8,	// (0x0003e348) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xce42,	// (0x0003b5c2) cell_vkb_candidate_pane_cp1_ParamLimits

0xce42,	// (0x0003b5c2) cell_vkb_candidate_pane_cp1

0x89a7,	// (0x00037127) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x89a7,	// (0x00037127) fep_vkb_candidate_drop_down_list_pane_g1

0x8d52,	// (0x000374d2) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x8d52,	// (0x000374d2) fep_vkb_candidate_drop_down_list_pane_g2

0x8d5f,	// (0x000374df) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x8d5f,	// (0x000374df) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd9,	// (0x0003e359) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd9,	// (0x0003e359) fep_vkb_candidate_drop_down_list_pane_g

0x8d6c,	// (0x000374ec) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x8d6c,	// (0x000374ec) fep_vkb_candidate_drop_down_list_scroll_pane

0x8d79,	// (0x000374f9) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8d79,	// (0x000374f9) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x8d86,	// (0x00037506) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8d86,	// (0x00037506) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x8d92,	// (0x00037512) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8d92,	// (0x00037512) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x8bd6,	// (0x00037356) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8bd6,	// (0x00037356) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x8bf7,	// (0x00037377) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8bf7,	// (0x00037377) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x8d9e,	// (0x0003751e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8d9e,	// (0x0003751e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x8dbf,	// (0x0003753f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8dbf,	// (0x0003753f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x8de0,	// (0x00037560) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8de0,	// (0x00037560) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe0,	// (0x0003e360) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe0,	// (0x0003e360) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9ec3,	// (0x00038643) title_pane_g1_ParamLimits

0x9ed0,	// (0x00038650) title_pane_g2_ParamLimits

0xf56a,	// (0x0003dcea) title_pane_g_ParamLimits

0x5f4d,	// (0x000346cd) aid_call2_pane

0x5f45,	// (0x000346c5) aid_call_pane

0x5f55,	// (0x000346d5) popup_clock_analogue_window_g1

0x5f55,	// (0x000346d5) popup_clock_analogue_window_g2

0xa484,	// (0x00038c04) popup_clock_analogue_window_g3

0xa48d,	// (0x00038c0d) popup_clock_analogue_window_g4

0x2061,	// (0x000307e1) popup_clock_analogue_window_g5

0x0004,

0xf719,	// (0x0003de99) popup_clock_analogue_window_g

0xa495,	// (0x00038c15) popup_clock_analogue_window_t1

0xa4d9,	// (0x00038c59) clock_digital_number_pane_ParamLimits

0xa4d9,	// (0x00038c59) clock_digital_number_pane

0xa4e5,	// (0x00038c65) clock_digital_number_pane_cp02_ParamLimits

0xa4e5,	// (0x00038c65) clock_digital_number_pane_cp02

0xa4f1,	// (0x00038c71) clock_digital_number_pane_cp03_ParamLimits

0xa4f1,	// (0x00038c71) clock_digital_number_pane_cp03

0xa4fd,	// (0x00038c7d) clock_digital_number_pane_cp04_ParamLimits

0xa4fd,	// (0x00038c7d) clock_digital_number_pane_cp04

0xa509,	// (0x00038c89) clock_digital_separator_pane_ParamLimits

0xa509,	// (0x00038c89) clock_digital_separator_pane

0xa515,	// (0x00038c95) popup_clock_digital_window_t1_ParamLimits

0xa515,	// (0x00038c95) popup_clock_digital_window_t1

0x2061,	// (0x000307e1) clock_digital_number_pane_g1

0x2061,	// (0x000307e1) clock_digital_number_pane_g2

0x0001,

0xf724,	// (0x0003dea4) clock_digital_number_pane_g

0x2061,	// (0x000307e1) clock_digital_separator_pane_g1

0x2061,	// (0x000307e1) clock_digital_separator_pane_g2

0x0001,

0xf724,	// (0x0003dea4) clock_digital_separator_pane_g

0xadc5,	// (0x00039545) aid_fill_nsta_ParamLimits

0xae7e,	// (0x000395fe) indicator_nsta_pane_ParamLimits

0x67ef,	// (0x00034f6f) popup_clock_analogue_window

0x67ef,	// (0x00034f6f) popup_clock_digital_window

0x23ba,	// (0x00030b3a) grid_indicator_nsta_pane_ParamLimits

0x8407,	// (0x00036b87) clock_nsta_pane_t2

0x0001,

0xfaa6,	// (0x0003e226) clock_nsta_pane_t

0xa3ed,	// (0x00038b6d) aid_size_max_handle

0xa3f7,	// (0x00038b77) aid_size_min_handle

0x63e2,	// (0x00034b62) editor_scroll_pane

0x8dfb,	// (0x0003757b) ex_editor_pane

0x2dee,	// (0x0003156e) scroll_pane_cp13

0x2bd5,	// (0x00031355) scroll_pane_cp14

0x5f7f,	// (0x000346ff) scroll_pane_cp36

0xa4b3,	// (0x00038c33) list_single_graphic_hl_pane_cp2_ParamLimits

0xa4b3,	// (0x00038c33) list_single_graphic_hl_pane_cp2

0xefce,	// (0x0003d74e) list_single_graphic_hl_pane_ParamLimits

0xefce,	// (0x0003d74e) list_single_graphic_hl_pane

0xf2c9,	// (0x0003da49) aid_size_min_hl_cp1

0x8e03,	// (0x00037583) list_highlight_pane_cp34_ParamLimits

0x8e03,	// (0x00037583) list_highlight_pane_cp34

0x8e14,	// (0x00037594) list_single_graphic_hl_pane_g1_ParamLimits

0x8e14,	// (0x00037594) list_single_graphic_hl_pane_g1

0xf2d2,	// (0x0003da52) list_single_graphic_hl_pane_g2_ParamLimits

0xf2d2,	// (0x0003da52) list_single_graphic_hl_pane_g2

0xf2d2,	// (0x0003da52) list_single_graphic_hl_pane_g3_ParamLimits

0xf2d2,	// (0x0003da52) list_single_graphic_hl_pane_g3

0xe827,	// (0x0003cfa7) list_single_graphic_hl_pane_g4_ParamLimits

0xe827,	// (0x0003cfa7) list_single_graphic_hl_pane_g4

0xf4b1,	// (0x0003dc31) list_single_graphic_hl_pane_g5_ParamLimits

0xf4b1,	// (0x0003dc31) list_single_graphic_hl_pane_g5

0x0004,

0xfbf1,	// (0x0003e371) list_single_graphic_hl_pane_g_ParamLimits

0xfbf1,	// (0x0003e371) list_single_graphic_hl_pane_g

0xe917,	// (0x0003d097) list_single_graphic_hl_pane_t1_ParamLimits

0xe917,	// (0x0003d097) list_single_graphic_hl_pane_t1

0x8e85,	// (0x00037605) aid_size_min_hl_cp2

0x8e8e,	// (0x0003760e) list_highlight_pane_cp34_cp2_ParamLimits

0x8e8e,	// (0x0003760e) list_highlight_pane_cp34_cp2

0x8e14,	// (0x00037594) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x8e14,	// (0x00037594) list_single_graphic_hl_pane_g1_cp2

0x8e9b,	// (0x0003761b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x8e9b,	// (0x0003761b) list_single_graphic_hl_pane_g2_cp2

0x8ea7,	// (0x00037627) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x8ea7,	// (0x00037627) list_single_graphic_hl_pane_g3_cp2

0x6257,	// (0x000349d7) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x6257,	// (0x000349d7) list_single_graphic_hl_pane_g4_cp2

0x8c5c,	// (0x000373dc) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x8c5c,	// (0x000373dc) list_single_graphic_hl_pane_g5_cp2

0xa8e8,	// (0x00039068) control_pane_g4_ParamLimits

0xa8e8,	// (0x00039068) control_pane_g4

0x5d20,	// (0x000344a0) bg_popup_sub_pane_cp10_ParamLimits

0x8783,	// (0x00036f03) list_choice_list_pane_ParamLimits

0x8792,	// (0x00036f12) scroll_pane_cp23

0x270f,	// (0x00030e8f) bg_popup_preview_window_pane_cp02_ParamLimits

0x8c98,	// (0x00037418) list_preview_fixed_pane_ParamLimits

0x8cae,	// (0x0003742e) list_preview_fixed_pane_cp_ParamLimits

0x8cae,	// (0x0003742e) list_preview_fixed_pane_cp

0x8cba,	// (0x0003743a) popup_preview_fixed_window_g1_ParamLimits

0x8cba,	// (0x0003743a) popup_preview_fixed_window_g1

0x8cc6,	// (0x00037446) popup_preview_fixed_window_g2_ParamLimits

0x8cc6,	// (0x00037446) popup_preview_fixed_window_g2

0x0002,

0xfb79,	// (0x0003e2f9) popup_preview_fixed_window_g_ParamLimits

0xfb79,	// (0x0003e2f9) popup_preview_fixed_window_g

0xa308,	// (0x00038a88) aid_navi_side_left_pane_ParamLimits

0xa318,	// (0x00038a98) aid_navi_side_right_pane_ParamLimits

0xa327,	// (0x00038aa7) navi_icon_pane_stacon_ParamLimits

0xa337,	// (0x00038ab7) navi_navi_pane_stacon_ParamLimits

0xa327,	// (0x00038aa7) navi_text_pane_stacon_ParamLimits

0x2057,	// (0x000307d7) main_text_info_pane

0x8ec9,	// (0x00037649) listscroll_text_info_pane

0x8ed1,	// (0x00037651) list_text_info_pane_ParamLimits

0x8ed1,	// (0x00037651) list_text_info_pane

0x8ee0,	// (0x00037660) scroll_pane_cp24_ParamLimits

0x8ee0,	// (0x00037660) scroll_pane_cp24

0xce65,	// (0x0003b5e5) list_text_info_pane_t1_ParamLimits

0xce65,	// (0x0003b5e5) list_text_info_pane_t1

0xaa3a,	// (0x000391ba) popup_fast_swap2_window_ParamLimits

0xaa3a,	// (0x000391ba) popup_fast_swap2_window

0x8efe,	// (0x0003767e) aid_size_cell_fast2

0x2057,	// (0x000307d7) bg_popup_window_pane_cp17

0x6c89,	// (0x00035409) heading_pane_cp2

0x2957,	// (0x000310d7) listscroll_fast2_pane

0x8f08,	// (0x00037688) grid_fast2_pane

0x8f10,	// (0x00037690) listscroll_fast2_pane_g1

0x8f18,	// (0x00037698) listscroll_fast2_pane_g2

0x0001,

0xfbfc,	// (0x0003e37c) listscroll_fast2_pane_g

0x2dee,	// (0x0003156e) scroll_pane_cp26

0x8f20,	// (0x000376a0) cell_fast2_pane_ParamLimits

0x8f20,	// (0x000376a0) cell_fast2_pane

0x8f36,	// (0x000376b6) cell_fast2_pane_g1

0x8f3f,	// (0x000376bf) cell_fast2_pane_g2

0x8f48,	// (0x000376c8) cell_fast2_pane_g3

0x0002,

0xfc01,	// (0x0003e381) cell_fast2_pane_g

0x2a2e,	// (0x000311ae) grid_highlight_pane_cp9

0x2a43,	// (0x000311c3) main_eswt_pane_ParamLimits

0x2a43,	// (0x000311c3) main_eswt_pane

0x8ef5,	// (0x00037675) list_single_text_info_pane

0x8f50,	// (0x000376d0) eswt_ctrl_button_pane

0x8f50,	// (0x000376d0) eswt_ctrl_canvas_pane

0x8f58,	// (0x000376d8) eswt_ctrl_combo_pane

0x8f50,	// (0x000376d0) eswt_ctrl_default_pane

0x8f50,	// (0x000376d0) eswt_ctrl_label_pane

0x8f60,	// (0x000376e0) eswt_ctrl_wait_pane

0x8f68,	// (0x000376e8) eswt_shell_pane

0x2057,	// (0x000307d7) listscroll_eswt_app_pane

0x8f84,	// (0x00037704) popup_eswt_tasktip_window_ParamLimits

0x8f84,	// (0x00037704) popup_eswt_tasktip_window

0x69ea,	// (0x0003516a) bg_popup_window_pane_cp18

0x8f95,	// (0x00037715) eswt_control_pane_g1_ParamLimits

0x8f95,	// (0x00037715) eswt_control_pane_g1

0x8fa2,	// (0x00037722) eswt_control_pane_g2_ParamLimits

0x8fa2,	// (0x00037722) eswt_control_pane_g2

0x8faf,	// (0x0003772f) eswt_control_pane_g3_ParamLimits

0x8faf,	// (0x0003772f) eswt_control_pane_g3

0x8fbc,	// (0x0003773c) eswt_control_pane_g4_ParamLimits

0x8fbc,	// (0x0003773c) eswt_control_pane_g4

0x0003,

0xfc08,	// (0x0003e388) eswt_control_pane_g_ParamLimits

0xfc08,	// (0x0003e388) eswt_control_pane_g

0x2c93,	// (0x00031413) bg_button_pane_ParamLimits

0x2c93,	// (0x00031413) bg_button_pane

0x2a43,	// (0x000311c3) common_borders_pane_copy2_ParamLimits

0x2a43,	// (0x000311c3) common_borders_pane_copy2

0x8fc9,	// (0x00037749) control_button_pane_g1_ParamLimits

0x8fc9,	// (0x00037749) control_button_pane_g1

0x8fd5,	// (0x00037755) control_button_pane_g2_ParamLimits

0x8fd5,	// (0x00037755) control_button_pane_g2

0x8fe1,	// (0x00037761) control_button_pane_g3_ParamLimits

0x8fe1,	// (0x00037761) control_button_pane_g3

0x0002,

0xfc11,	// (0x0003e391) control_button_pane_g_ParamLimits

0xfc11,	// (0x0003e391) control_button_pane_g

0x8ff5,	// (0x00037775) control_button_pane_t1

0x9003,	// (0x00037783) control_button_pane_t2

0x0001,

0xfc18,	// (0x0003e398) control_button_pane_t

0x68f0,	// (0x00035070) bg_button_pane_g1

0x68f8,	// (0x00035078) bg_button_pane_g2

0x6900,	// (0x00035080) bg_button_pane_g3

0x6908,	// (0x00035088) bg_button_pane_g4

0x6910,	// (0x00035090) bg_button_pane_g5

0x6918,	// (0x00035098) bg_button_pane_g6

0x6920,	// (0x000350a0) bg_button_pane_g7

0x6928,	// (0x000350a8) bg_button_pane_g8

0x6930,	// (0x000350b0) bg_button_pane_g9

0x0008,

0xf877,	// (0x0003dff7) bg_button_pane_g

0x873e,	// (0x00036ebe) common_borders_pane_ParamLimits

0x873e,	// (0x00036ebe) common_borders_pane

0x8f95,	// (0x00037715) eswt_control_pane_g1_copy1_ParamLimits

0x8f95,	// (0x00037715) eswt_control_pane_g1_copy1

0x8fa2,	// (0x00037722) eswt_control_pane_g2_copy1_ParamLimits

0x8fa2,	// (0x00037722) eswt_control_pane_g2_copy1

0x8faf,	// (0x0003772f) eswt_control_pane_g3_copy1_ParamLimits

0x8faf,	// (0x0003772f) eswt_control_pane_g3_copy1

0x8fbc,	// (0x0003773c) eswt_control_pane_g4_copy1_ParamLimits

0x8fbc,	// (0x0003773c) eswt_control_pane_g4_copy1

0x8779,	// (0x00036ef9) bg_eswt_ctrl_canvas_pane_g1

0x873e,	// (0x00036ebe) common_borders_pane_cp2_ParamLimits

0x873e,	// (0x00036ebe) common_borders_pane_cp2

0x873e,	// (0x00036ebe) common_borders_pane_cp3_ParamLimits

0x873e,	// (0x00036ebe) common_borders_pane_cp3

0x9011,	// (0x00037791) separator_horizontal_pane

0x5de4,	// (0x00034564) separator_vertical_pane

0x8f95,	// (0x00037715) eswt_control_pane_g1_copy2_ParamLimits

0x8f95,	// (0x00037715) eswt_control_pane_g1_copy2

0x8fa2,	// (0x00037722) eswt_control_pane_g2_copy2_ParamLimits

0x8fa2,	// (0x00037722) eswt_control_pane_g2_copy2

0x8faf,	// (0x0003772f) eswt_control_pane_g3_copy2_ParamLimits

0x8faf,	// (0x0003772f) eswt_control_pane_g3_copy2

0x8fbc,	// (0x0003773c) eswt_control_pane_g4_copy2_ParamLimits

0x8fbc,	// (0x0003773c) eswt_control_pane_g4_copy2

0x2057,	// (0x000307d7) common_borders_pane_cp4

0x9019,	// (0x00037799) separator_horizontal_pane_g1

0x9022,	// (0x000377a2) separator_horizontal_pane_g2

0x902b,	// (0x000377ab) separator_horizontal_pane_g3

0x0002,

0xfc1d,	// (0x0003e39d) separator_horizontal_pane_g

0x8f95,	// (0x00037715) eswt_control_pane_g1_copy3_ParamLimits

0x8f95,	// (0x00037715) eswt_control_pane_g1_copy3

0x8fa2,	// (0x00037722) eswt_control_pane_g2_copy3_ParamLimits

0x8fa2,	// (0x00037722) eswt_control_pane_g2_copy3

0x8faf,	// (0x0003772f) eswt_control_pane_g3_copy3_ParamLimits

0x8faf,	// (0x0003772f) eswt_control_pane_g3_copy3

0x8fbc,	// (0x0003773c) eswt_control_pane_g4_copy3_ParamLimits

0x8fbc,	// (0x0003773c) eswt_control_pane_g4_copy3

0x2057,	// (0x000307d7) common_borders_pane_cp5

0x9034,	// (0x000377b4) separator_vertical_pane_g1

0x903d,	// (0x000377bd) separator_vertical_pane_g2

0x9046,	// (0x000377c6) separator_vertical_pane_g3

0x0002,

0xfc24,	// (0x0003e3a4) separator_vertical_pane_g

0x8f95,	// (0x00037715) eswt_control_pane_g1_copy4_ParamLimits

0x8f95,	// (0x00037715) eswt_control_pane_g1_copy4

0x8fa2,	// (0x00037722) eswt_control_pane_g2_copy4_ParamLimits

0x8fa2,	// (0x00037722) eswt_control_pane_g2_copy4

0x8faf,	// (0x0003772f) eswt_control_pane_g3_copy4_ParamLimits

0x8faf,	// (0x0003772f) eswt_control_pane_g3_copy4

0x8fbc,	// (0x0003773c) eswt_control_pane_g4_copy4_ParamLimits

0x8fbc,	// (0x0003773c) eswt_control_pane_g4_copy4

0xce82,	// (0x0003b602) eswt_ctrl_combo_button_pane

0xce8a,	// (0x0003b60a) eswt_ctrl_input_pane

0xce92,	// (0x0003b612) popup_choice_list_window_cp70

0xce9a,	// (0x0003b61a) eswt_ctrl_input_pane_t1

0x2057,	// (0x000307d7) input_focus_pane_cp70

0x873e,	// (0x00036ebe) bg_button_pane_cp70_ParamLimits

0x873e,	// (0x00036ebe) bg_button_pane_cp70

0xcea8,	// (0x0003b628) eswt_ctrl_combo_button_pane_g1

0x904f,	// (0x000377cf) wait_bar_pane_cp70

0x69ea,	// (0x0003516a) bg_popup_window_pane_cp70_ParamLimits

0x69ea,	// (0x0003516a) bg_popup_window_pane_cp70

0x9057,	// (0x000377d7) popup_eswt_tasktip_window_t1

0x906d,	// (0x000377ed) wait_bar_pane_cp71_ParamLimits

0x906d,	// (0x000377ed) wait_bar_pane_cp71

0x9079,	// (0x000377f9) grid_eswt_app_pane

0x5ded,	// (0x0003456d) scroll_pane_cp70

0xceb0,	// (0x0003b630) cell_eswt_app_pane_ParamLimits

0xceb0,	// (0x0003b630) cell_eswt_app_pane

0xced8,	// (0x0003b658) cell_eswt_app_pane_g1_ParamLimits

0xced8,	// (0x0003b658) cell_eswt_app_pane_g1

0xcf07,	// (0x0003b687) cell_eswt_app_pane_g2_ParamLimits

0xcf07,	// (0x0003b687) cell_eswt_app_pane_g2

0x0001,

0xfc2b,	// (0x0003e3ab) cell_eswt_app_pane_g_ParamLimits

0xfc2b,	// (0x0003e3ab) cell_eswt_app_pane_g

0xcf30,	// (0x0003b6b0) cell_eswt_app_pane_t1_ParamLimits

0xcf30,	// (0x0003b6b0) cell_eswt_app_pane_t1

0x9082,	// (0x00037802) grid_highlight_pane_cp70_ParamLimits

0x9082,	// (0x00037802) grid_highlight_pane_cp70

0x2cad,	// (0x0003142d) set_content_pane_g1

0x65d1,	// (0x00034d51) status_small_volume_pane

0xbd74,	// (0x0003a4f4) status_small_volume_pane_g1

0xbd7c,	// (0x0003a4fc) volume_small2_pane

0xbd85,	// (0x0003a505) volume_small2_pane_g1

0xbd8e,	// (0x0003a50e) volume_small2_pane_g2

0xbd97,	// (0x0003a517) volume_small2_pane_g3

0xbda0,	// (0x0003a520) volume_small2_pane_g4

0xbda9,	// (0x0003a529) volume_small2_pane_g5

0xbdb2,	// (0x0003a532) volume_small2_pane_g6

0xbdbb,	// (0x0003a53b) volume_small2_pane_g7

0xbdc4,	// (0x0003a544) volume_small2_pane_g8

0xbdcd,	// (0x0003a54d) volume_small2_pane_g9

0xbdd6,	// (0x0003a556) volume_small2_pane_g10

0x0009,

0xfc30,	// (0x0003e3b0) volume_small2_pane_g

0x8aae,	// (0x0003722e) fep_vkb_top_text_pane_g1_ParamLimits

0xcd93,	// (0x0003b513) fep_vkb_top_text_pane_t1_ParamLimits

0x8cd2,	// (0x00037452) popup_preview_fixed_window_g3_ParamLimits

0x8cd2,	// (0x00037452) popup_preview_fixed_window_g3

0xad6e,	// (0x000394ee) popup_toolbar_trans_pane

0xb61f,	// (0x00039d9f) aid_height_set_list_ParamLimits

0x7bc5,	// (0x00036345) aid_size_parent_ParamLimits

0x5d20,	// (0x000344a0) list_highlight_pane_cp2_ParamLimits

0x2cad,	// (0x0003142d) set_content_pane_g1_ParamLimits

0xb76a,	// (0x00039eea) list_single_image_pane_ParamLimits

0xb76a,	// (0x00039eea) list_single_image_pane

0xcf62,	// (0x0003b6e2) aid_size_cell_image_ParamLimits

0xcf62,	// (0x0003b6e2) aid_size_cell_image

0xcf6f,	// (0x0003b6ef) grid_single_image_pane_ParamLimits

0xcf6f,	// (0x0003b6ef) grid_single_image_pane

0x2cad,	// (0x0003142d) list_single_image_pane_g1_ParamLimits

0x2cad,	// (0x0003142d) list_single_image_pane_g1

0x2cb9,	// (0x00031439) list_single_image_pane_g2_ParamLimits

0x2cb9,	// (0x00031439) list_single_image_pane_g2

0x0001,

0xfc45,	// (0x0003e3c5) list_single_image_pane_g_ParamLimits

0xfc45,	// (0x0003e3c5) list_single_image_pane_g

0x908e,	// (0x0003780e) list_single_image_pane_t1_ParamLimits

0x908e,	// (0x0003780e) list_single_image_pane_t1

0xcf7b,	// (0x0003b6fb) cell_image_list_pane_ParamLimits

0xcf7b,	// (0x0003b6fb) cell_image_list_pane

0xcf8e,	// (0x0003b70e) cell_image_list_pane_g1

0xcf97,	// (0x0003b717) cell_image_list_pane_g2

0x0001,

0xfc4a,	// (0x0003e3ca) cell_image_list_pane_g

0x90a4,	// (0x00037824) aid_size_cell_tb_trans_pane

0x2c93,	// (0x00031413) bg_tb_trans_pane

0x90b6,	// (0x00037836) grid_tb_trans_pane

0x68f0,	// (0x00035070) bg_tb_trans_pane_g1

0x68f8,	// (0x00035078) bg_tb_trans_pane_g2

0x6900,	// (0x00035080) bg_tb_trans_pane_g3

0x6908,	// (0x00035088) bg_tb_trans_pane_g4

0x6910,	// (0x00035090) bg_tb_trans_pane_g5

0x6928,	// (0x000350a8) bg_tb_trans_pane_g6

0x6930,	// (0x000350b0) bg_tb_trans_pane_g7

0x6918,	// (0x00035098) bg_tb_trans_pane_g8

0x6920,	// (0x000350a0) bg_tb_trans_pane_g9

0x0008,

0xfc4f,	// (0x0003e3cf) bg_tb_trans_pane_g

0x90ca,	// (0x0003784a) cell_toolbar_trans_pane_ParamLimits

0x90ca,	// (0x0003784a) cell_toolbar_trans_pane

0x8779,	// (0x00036ef9) cell_toolbar_trans_pane_g1

0xcc66,	// (0x0003b3e6) list_form2_midp_pane_t1

0xcc74,	// (0x0003b3f4) list_form2_midp_pane_t2

0x0001,

0xfaec,	// (0x0003e26c) list_form2_midp_pane_t

0x84d5,	// (0x00036c55) scroll_pane_cp51_ParamLimits

0x864b,	// (0x00036dcb) form2_midp_wait_pane_g1

0x8654,	// (0x00036dd4) form2_midp_wait_pane_g2

0x865d,	// (0x00036ddd) form2_midp_wait_pane_g3

0x0002,

0xfb01,	// (0x0003e281) form2_midp_wait_pane_g

0x23ba,	// (0x00030b3a) list_highlight_pane_cp21_ParamLimits

0x867d,	// (0x00036dfd) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x868c,	// (0x00036e0c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xef8f,	// (0x0003d70f) list_single_2graphic_im_pane_ParamLimits

0xef8f,	// (0x0003d70f) list_single_2graphic_im_pane

0xcfa0,	// (0x0003b720) list_single_2graphic_im_pane_g1_ParamLimits

0xcfa0,	// (0x0003b720) list_single_2graphic_im_pane_g1

0xcfb1,	// (0x0003b731) list_single_2graphic_im_pane_g2_ParamLimits

0xcfb1,	// (0x0003b731) list_single_2graphic_im_pane_g2

0xcfbd,	// (0x0003b73d) list_single_2graphic_im_pane_g3_ParamLimits

0xcfbd,	// (0x0003b73d) list_single_2graphic_im_pane_g3

0x0003,

0xfc62,	// (0x0003e3e2) list_single_2graphic_im_pane_g_ParamLimits

0xfc62,	// (0x0003e3e2) list_single_2graphic_im_pane_g

0xcfd1,	// (0x0003b751) list_single_2graphic_im_pane_t1_ParamLimits

0xcfd1,	// (0x0003b751) list_single_2graphic_im_pane_t1

0x8cde,	// (0x0003745e) list_single_graphic_2heading_pane_fp_ParamLimits

0x8cde,	// (0x0003745e) list_single_graphic_2heading_pane_fp

0xf1ab,	// (0x0003d92b) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf1ab,	// (0x0003d92b) list_single_graphic_2heading_pane_fp_g1

0x8cf2,	// (0x00037472) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x8cf2,	// (0x00037472) list_single_graphic_2heading_pane_fp_g2

0xe827,	// (0x0003cfa7) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xe827,	// (0x0003cfa7) list_single_graphic_2heading_pane_fp_g3

0xf4b1,	// (0x0003dc31) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xf4b1,	// (0x0003dc31) list_single_graphic_2heading_pane_fp_g4

0x8cfe,	// (0x0003747e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x8cfe,	// (0x0003747e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb89,	// (0x0003e309) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb89,	// (0x0003e309) list_single_graphic_2heading_pane_fp_g

0xf2de,	// (0x0003da5e) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf2de,	// (0x0003da5e) list_single_graphic_2heading_pane_fp_t1

0xf1e3,	// (0x0003d963) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf1e3,	// (0x0003d963) list_single_graphic_2heading_pane_fp_t2

0xf2f4,	// (0x0003da74) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf2f4,	// (0x0003da74) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6b,	// (0x0003e3eb) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6b,	// (0x0003e3eb) list_single_graphic_2heading_pane_fp_t

0x8804,	// (0x00036f84) fep_hwr_write_pane_g5_ParamLimits

0x8804,	// (0x00036f84) fep_hwr_write_pane_g5

0x8810,	// (0x00036f90) fep_hwr_write_pane_g6_ParamLimits

0x8810,	// (0x00036f90) fep_hwr_write_pane_g6

0x8f68,	// (0x000376e8) eswt_shell_pane_ParamLimits

0x69ea,	// (0x0003516a) bg_popup_window_pane_cp18_ParamLimits

0x7b69,	// (0x000362e9) heading_pane_cp70

0x9057,	// (0x000377d7) popup_eswt_tasktip_window_t1_ParamLimits

0xadfb,	// (0x0003957b) aid_touch_tab_arrow_left

0xae07,	// (0x00039587) aid_touch_tab_arrow_right

0x9ee1,	// (0x00038661) title_pane_g3_ParamLimits

0x9ee1,	// (0x00038661) title_pane_g3

0x2c63,	// (0x000313e3) set_value_pane_g1

0xad6e,	// (0x000394ee) popup_toolbar_trans_pane_ParamLimits

0x90a4,	// (0x00037824) aid_size_cell_tb_trans_pane_ParamLimits

0x2c93,	// (0x00031413) bg_tb_trans_pane_ParamLimits

0x90b6,	// (0x00037836) grid_tb_trans_pane_ParamLimits

0x270f,	// (0x00030e8f) cont_note_pane_ParamLimits

0x270f,	// (0x00030e8f) cont_note_pane

0x2a43,	// (0x000311c3) cont_snote2_single_text_pane_ParamLimits

0x2a43,	// (0x000311c3) cont_snote2_single_text_pane

0x2a43,	// (0x000311c3) cont_snote2_single_graphic_pane_ParamLimits

0x2a43,	// (0x000311c3) cont_snote2_single_graphic_pane

0x6e93,	// (0x00035613) cont_note_wait_pane_ParamLimits

0x6e93,	// (0x00035613) cont_note_wait_pane

0x6e93,	// (0x00035613) cont_note_image_pane_ParamLimits

0x6e93,	// (0x00035613) cont_note_image_pane

0x90fc,	// (0x0003787c) popup_note2_window_g1_ParamLimits

0x90fc,	// (0x0003787c) popup_note2_window_g1

0x912d,	// (0x000378ad) popup_note2_window_t1_ParamLimits

0x912d,	// (0x000378ad) popup_note2_window_t1

0x9172,	// (0x000378f2) popup_note2_window_t2_ParamLimits

0x9172,	// (0x000378f2) popup_note2_window_t2

0xbddf,	// (0x0003a55f) popup_note2_window_t3_ParamLimits

0xbddf,	// (0x0003a55f) popup_note2_window_t3

0xbe24,	// (0x0003a5a4) popup_note2_window_t4_ParamLimits

0xbe24,	// (0x0003a5a4) popup_note2_window_t4

0x2793,	// (0x00030f13) popup_note2_window_t5_ParamLimits

0x2793,	// (0x00030f13) popup_note2_window_t5

0x0004,

0xfc77,	// (0x0003e3f7) popup_note2_window_t_ParamLimits

0xfc77,	// (0x0003e3f7) popup_note2_window_t

0xbe53,	// (0x0003a5d3) popup_note2_image_window_g1_ParamLimits

0xbe53,	// (0x0003a5d3) popup_note2_image_window_g1

0xbe5f,	// (0x0003a5df) popup_note2_image_window_g2_ParamLimits

0xbe5f,	// (0x0003a5df) popup_note2_image_window_g2

0x0001,

0xfc82,	// (0x0003e402) popup_note2_image_window_g_ParamLimits

0xfc82,	// (0x0003e402) popup_note2_image_window_g

0xbe71,	// (0x0003a5f1) popup_note2_image_window_t1_ParamLimits

0xbe71,	// (0x0003a5f1) popup_note2_image_window_t1

0xbe89,	// (0x0003a609) popup_note2_image_window_t2_ParamLimits

0xbe89,	// (0x0003a609) popup_note2_image_window_t2

0xbea1,	// (0x0003a621) popup_note2_image_window_t3_ParamLimits

0xbea1,	// (0x0003a621) popup_note2_image_window_t3

0x0002,

0xfc87,	// (0x0003e407) popup_note2_image_window_t_ParamLimits

0xfc87,	// (0x0003e407) popup_note2_image_window_t

0x6ea1,	// (0x00035621) popup_note2_wait_window_g1_ParamLimits

0x6ea1,	// (0x00035621) popup_note2_wait_window_g1

0x6ead,	// (0x0003562d) popup_note2_wait_window_g2_ParamLimits

0x6ead,	// (0x0003562d) popup_note2_wait_window_g2

0x6eb9,	// (0x00035639) popup_note2_wait_window_g3_ParamLimits

0x6eb9,	// (0x00035639) popup_note2_wait_window_g3

0x0002,

0xf859,	// (0x0003dfd9) popup_note2_wait_window_g_ParamLimits

0xf859,	// (0x0003dfd9) popup_note2_wait_window_g

0xbebd,	// (0x0003a63d) popup_note2_wait_window_t1_ParamLimits

0xbebd,	// (0x0003a63d) popup_note2_wait_window_t1

0xbedb,	// (0x0003a65b) popup_note2_wait_window_t2_ParamLimits

0xbedb,	// (0x0003a65b) popup_note2_wait_window_t2

0xbef9,	// (0x0003a679) popup_note2_wait_window_t3_ParamLimits

0xbef9,	// (0x0003a679) popup_note2_wait_window_t3

0xbf0b,	// (0x0003a68b) popup_note2_wait_window_t4_ParamLimits

0xbf0b,	// (0x0003a68b) popup_note2_wait_window_t4

0x0003,

0xfc8e,	// (0x0003e40e) popup_note2_wait_window_t_ParamLimits

0xfc8e,	// (0x0003e40e) popup_note2_wait_window_t

0xbf1d,	// (0x0003a69d) wait_bar2_pane_ParamLimits

0xbf1d,	// (0x0003a69d) wait_bar2_pane

0xbf35,	// (0x0003a6b5) popup_snote2_single_text_window_g1_ParamLimits

0xbf35,	// (0x0003a6b5) popup_snote2_single_text_window_g1

0xbf5d,	// (0x0003a6dd) popup_snote2_single_text_window_t1_ParamLimits

0xbf5d,	// (0x0003a6dd) popup_snote2_single_text_window_t1

0xbfa9,	// (0x0003a729) popup_snote2_single_text_window_t2_ParamLimits

0xbfa9,	// (0x0003a729) popup_snote2_single_text_window_t2

0xbff5,	// (0x0003a775) popup_snote2_single_text_window_t3_ParamLimits

0xbff5,	// (0x0003a775) popup_snote2_single_text_window_t3

0xc036,	// (0x0003a7b6) popup_snote2_single_text_window_t4_ParamLimits

0xc036,	// (0x0003a7b6) popup_snote2_single_text_window_t4

0xc06c,	// (0x0003a7ec) popup_snote2_single_text_window_t5_ParamLimits

0xc06c,	// (0x0003a7ec) popup_snote2_single_text_window_t5

0x0004,

0xfc97,	// (0x0003e417) popup_snote2_single_text_window_t_ParamLimits

0xfc97,	// (0x0003e417) popup_snote2_single_text_window_t

0xc097,	// (0x0003a817) popup_snote2_single_graphic_window_g1_ParamLimits

0xc097,	// (0x0003a817) popup_snote2_single_graphic_window_g1

0xc0bf,	// (0x0003a83f) popup_snote2_single_graphic_window_g2_ParamLimits

0xc0bf,	// (0x0003a83f) popup_snote2_single_graphic_window_g2

0x0001,

0xfca2,	// (0x0003e422) popup_snote2_single_graphic_window_g_ParamLimits

0xfca2,	// (0x0003e422) popup_snote2_single_graphic_window_g

0xc0e7,	// (0x0003a867) popup_snote2_single_graphic_window_t1_ParamLimits

0xc0e7,	// (0x0003a867) popup_snote2_single_graphic_window_t1

0xc133,	// (0x0003a8b3) popup_snote2_single_graphic_window_t2_ParamLimits

0xc133,	// (0x0003a8b3) popup_snote2_single_graphic_window_t2

0xbff5,	// (0x0003a775) popup_snote2_single_graphic_window_t3_ParamLimits

0xbff5,	// (0x0003a775) popup_snote2_single_graphic_window_t3

0xc036,	// (0x0003a7b6) popup_snote2_single_graphic_window_t4_ParamLimits

0xc036,	// (0x0003a7b6) popup_snote2_single_graphic_window_t4

0xc06c,	// (0x0003a7ec) popup_snote2_single_graphic_window_t5_ParamLimits

0xc06c,	// (0x0003a7ec) popup_snote2_single_graphic_window_t5

0x0004,

0xfca7,	// (0x0003e427) popup_snote2_single_graphic_window_t_ParamLimits

0xfca7,	// (0x0003e427) popup_snote2_single_graphic_window_t

0x846e,	// (0x00036bee) clock_nsta_pane_cp2_t1

0x846e,	// (0x00036bee) clock_nsta_pane_cp2_t2

0x0001,

0xfac2,	// (0x0003e242) clock_nsta_pane_cp2_t

0xecc9,	// (0x0003d449) form_field_data_wide_pane_g1_ParamLimits

0x2cad,	// (0x0003142d) form_field_data_wide_pane_g2_ParamLimits

0x2cad,	// (0x0003142d) form_field_data_wide_pane_g2

0x2cb9,	// (0x00031439) form_field_data_wide_pane_g3_ParamLimits

0x2cb9,	// (0x00031439) form_field_data_wide_pane_g3

0x0002,

0xf69c,	// (0x0003de1c) form_field_data_wide_pane_g_ParamLimits

0xf69c,	// (0x0003de1c) form_field_data_wide_pane_g

0xcb66,	// (0x0003b2e6) grid_touch_3_pane_ParamLimits

0xcb66,	// (0x0003b2e6) grid_touch_3_pane

0xd002,	// (0x0003b782) cell_touch_3_pane_ParamLimits

0xd002,	// (0x0003b782) cell_touch_3_pane

0x8779,	// (0x00036ef9) cell_touch_3_pane_g1

0x8779,	// (0x00036ef9) cell_touch_3_pane_g2

0x0001,

0xfb47,	// (0x0003e2c7) cell_touch_3_pane_g

0x27c5,	// (0x00030f45) cont_query_data_pane

0x27cd,	// (0x00030f4d) cont_query_data_pane_cp1

0xc17f,	// (0x0003a8ff) button_value_adjust_pane_cp7

0xc187,	// (0x0003a907) query_popup_pane_cp3

0x5f90,	// (0x00034710) bg_popup_sub_pane_cp22_ParamLimits

0xa571,	// (0x00038cf1) navi_navi_volume_pane_cp2

0xa589,	// (0x00038d09) popup_side_volume_key_window_g2

0xa595,	// (0x00038d15) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x0003deae) popup_side_volume_key_window_g

0xa5af,	// (0x00038d2f) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x0003deb5) popup_side_volume_key_window_t

0x61da,	// (0x0003495a) popup_side_volume_key_window_ParamLimits

0xe90b,	// (0x0003d08b) list_double_graphic_pane_g4_ParamLimits

0xe90b,	// (0x0003d08b) list_double_graphic_pane_g4

0xefb8,	// (0x0003d738) list_single_2heading_msg_pane_ParamLimits

0xefb8,	// (0x0003d738) list_single_2heading_msg_pane

0xf312,	// (0x0003da92) list_single_2heading_msg_pane_g1_ParamLimits

0xf312,	// (0x0003da92) list_single_2heading_msg_pane_g1

0x6257,	// (0x000349d7) list_single_2heading_msg_pane_g2_ParamLimits

0x6257,	// (0x000349d7) list_single_2heading_msg_pane_g2

0xf31e,	// (0x0003da9e) list_single_2heading_msg_pane_g3_ParamLimits

0xf31e,	// (0x0003da9e) list_single_2heading_msg_pane_g3

0xf32a,	// (0x0003daaa) list_single_2heading_msg_pane_g4_ParamLimits

0xf32a,	// (0x0003daaa) list_single_2heading_msg_pane_g4

0x0003,

0xfcb2,	// (0x0003e432) list_single_2heading_msg_pane_g_ParamLimits

0xfcb2,	// (0x0003e432) list_single_2heading_msg_pane_g

0xf342,	// (0x0003dac2) list_single_2heading_msg_pane_t1_ParamLimits

0xf342,	// (0x0003dac2) list_single_2heading_msg_pane_t1

0xf36a,	// (0x0003daea) list_single_2heading_msg_pane_t2_ParamLimits

0xf36a,	// (0x0003daea) list_single_2heading_msg_pane_t2

0xf399,	// (0x0003db19) list_single_2heading_msg_pane_t3_ParamLimits

0xf399,	// (0x0003db19) list_single_2heading_msg_pane_t3

0xf3d2,	// (0x0003db52) list_single_2heading_msg_pane_t4_ParamLimits

0xf3d2,	// (0x0003db52) list_single_2heading_msg_pane_t4

0x0003,

0xfcbb,	// (0x0003e43b) list_single_2heading_msg_pane_t_ParamLimits

0xfcbb,	// (0x0003e43b) list_single_2heading_msg_pane_t

0x229f,	// (0x00030a1f) title_pane_g4_ParamLimits

0x229f,	// (0x00030a1f) title_pane_g4

0xa27e,	// (0x000389fe) title_pane_stacon_g3_ParamLimits

0xa27e,	// (0x000389fe) title_pane_stacon_g3

0x90f0,	// (0x00037870) list_single_2graphic_im_pane_g4_ParamLimits

0x90f0,	// (0x00037870) list_single_2graphic_im_pane_g4

0x797f,	// (0x000360ff) popup_side_volume_key_window_cp

0x7dec,	// (0x0003656c) main_idle_act2_pane_t1

0xb0e4,	// (0x00039864) toolbar_button_pane_g10

0xa1ef,	// (0x0003896f) popup_toolbar_window_cp1

0x845f,	// (0x00036bdf) clock_nsta_pane_cp_t1

0x845f,	// (0x00036bdf) clock_nsta_pane_cp_t2

0x0001,

0xfabd,	// (0x0003e23d) clock_nsta_pane_cp_t

0xa571,	// (0x00038cf1) navi_navi_volume_pane_cp2_ParamLimits

0xa57d,	// (0x00038cfd) popup_side_volume_key_window_g1_ParamLimits

0xa589,	// (0x00038d09) popup_side_volume_key_window_g2_ParamLimits

0xa595,	// (0x00038d15) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x0003deae) popup_side_volume_key_window_g_ParamLimits

0xb9f4,	// (0x0003a174) fep_hwr_aid_pane

0xba95,	// (0x0003a215) bg_fep_hwr_top_pane_g4_ParamLimits

0x87e6,	// (0x00036f66) fep_hwr_top_pane_g1_ParamLimits

0x87d4,	// (0x00036f54) fep_hwr_top_pane_g2_ParamLimits

0xbab5,	// (0x0003a235) fep_hwr_top_pane_g3_ParamLimits

0xfb12,	// (0x0003e292) fep_hwr_top_pane_g_ParamLimits

0xbaca,	// (0x0003a24a) fep_hwr_top_text_pane_ParamLimits

0x7788,	// (0x00035f08) aid_touch_tab_arrow_arrow_2

0x777f,	// (0x00035eff) aid_touch_tab_arrow_left_2

0xba08,	// (0x0003a188) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xba3b,	// (0x0003a1bb) fep_hwr_prediction_pane

0x8919,	// (0x00037099) fep_vkb_prediction_pane

0xcd70,	// (0x0003b4f0) fep_vkb_side_pane_g3_ParamLimits

0xcd70,	// (0x0003b4f0) fep_vkb_side_pane_g3

0xbc39,	// (0x0003a3b9) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xbca3,	// (0x0003a423) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xbcb0,	// (0x0003a430) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc1,	// (0x0003e341) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xc198,	// (0x0003a918) fep_hwr_prediction_pane_g1

0xc1a2,	// (0x0003a922) fep_hwr_prediction_pane_g2

0xc1aa,	// (0x0003a92a) fep_hwr_prediction_pane_g3

0xc1b2,	// (0x0003a932) fep_hwr_prediction_pane_g4

0x0003,

0xfcc4,	// (0x0003e444) fep_hwr_prediction_pane_g

0xc1ba,	// (0x0003a93a) fep_vkb_prediction_pane_g1

0xc1c4,	// (0x0003a944) fep_vkb_prediction_pane_g2

0xc1cc,	// (0x0003a94c) fep_vkb_prediction_pane_g3

0xc1d4,	// (0x0003a954) fep_vkb_prediction_pane_g4

0x0003,

0xfccd,	// (0x0003e44d) fep_vkb_prediction_pane_g

0xb5a7,	// (0x00039d27) slider_set_pane_g3

0xb5bb,	// (0x00039d3b) slider_set_pane_g4

0xb5d3,	// (0x00039d53) slider_set_pane_g5

0xb5a7,	// (0x00039d27) slider_set_pane_g6

0xb5e9,	// (0x00039d69) slider_set_pane_g7

0x7be8,	// (0x00036368) slider_form_pane_g3

0x7bf1,	// (0x00036371) slider_form_pane_g4

0x7bf9,	// (0x00036379) slider_form_pane_g5

0x7be8,	// (0x00036368) slider_form_pane_g6

0xb74f,	// (0x00039ecf) slider_form_pane_g7

0x8035,	// (0x000367b5) slider_set_pane_vc_g3

0x803e,	// (0x000367be) slider_set_pane_vc_g4

0x8047,	// (0x000367c7) slider_set_pane_vc_g5

0x8035,	// (0x000367b5) slider_set_pane_vc_g6

0x8050,	// (0x000367d0) slider_set_pane_vc_g7

0x8035,	// (0x000367b5) slider_form_pane_vc_g1

0x803e,	// (0x000367be) slider_form_pane_vc_g2

0x8047,	// (0x000367c7) slider_form_pane_vc_g3

0x8035,	// (0x000367b5) slider_form_pane_vc_g4

0x81e4,	// (0x00036964) slider_form_pane_vc_g5

0x0004,

0xfa96,	// (0x0003e216) slider_form_pane_vc_g

0x2057,	// (0x000307d7) main_idle_act3_pane

0xc1dc,	// (0x0003a95c) ai3_links_pane

0xd043,	// (0x0003b7c3) popup_ai3_data_window_ParamLimits

0xd043,	// (0x0003b7c3) popup_ai3_data_window

0x2057,	// (0x000307d7) grid_ai3_links_pane

0xd05b,	// (0x0003b7db) cell_ai3_links_pane_ParamLimits

0xd05b,	// (0x0003b7db) cell_ai3_links_pane

0xc1e5,	// (0x0003a965) bg_popup_sub_pane_cp11

0xc1f2,	// (0x0003a972) cell_ai3_links_pane_g1

0x2057,	// (0x000307d7) bg_popup_sub_pane_cp12

0xc217,	// (0x0003a997) heading_ai3_data_pane

0xc21f,	// (0x0003a99f) list_ai3_gene_pane

0xc22b,	// (0x0003a9ab) popup_ai3_data_window_g1

0xc233,	// (0x0003a9b3) heading_ai3_data_pane_g1

0xc23b,	// (0x0003a9bb) heading_ai3_data_pane_t1

0xc249,	// (0x0003a9c9) list_double_ai3_gene_pane_ParamLimits

0xc249,	// (0x0003a9c9) list_double_ai3_gene_pane

0xc256,	// (0x0003a9d6) list_single_ai3_gene_pane_ParamLimits

0xc256,	// (0x0003a9d6) list_single_ai3_gene_pane

0x873e,	// (0x00036ebe) list_highlight_pane_cp7_ParamLimits

0x873e,	// (0x00036ebe) list_highlight_pane_cp7

0xc263,	// (0x0003a9e3) list_single_a13_gene_pane_t1_ParamLimits

0xc263,	// (0x0003a9e3) list_single_a13_gene_pane_t1

0xc27a,	// (0x0003a9fa) list_single_ai3_gene_pane_g1

0xc283,	// (0x0003aa03) list_single_ai3_gene_pane_g2

0x0001,

0xfcd6,	// (0x0003e456) list_single_ai3_gene_pane_g

0xc28b,	// (0x0003aa0b) list_double_ai3_gene_pane_g1_ParamLimits

0xc28b,	// (0x0003aa0b) list_double_ai3_gene_pane_g1

0xc297,	// (0x0003aa17) list_double_ai3_gene_pane_t1_ParamLimits

0xc297,	// (0x0003aa17) list_double_ai3_gene_pane_t1

0xc2b3,	// (0x0003aa33) list_double_ai3_gene_pane_t2_ParamLimits

0xc2b3,	// (0x0003aa33) list_double_ai3_gene_pane_t2

0xc2c8,	// (0x0003aa48) list_double_ai3_gene_pane_t3_ParamLimits

0xc2c8,	// (0x0003aa48) list_double_ai3_gene_pane_t3

0x0002,

0xfcdb,	// (0x0003e45b) list_double_ai3_gene_pane_t_ParamLimits

0xfcdb,	// (0x0003e45b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf30a,	// (0x0003da8a) aid_size_min_col_2

0xd02f,	// (0x0003b7af) aid_size_min_msg_ParamLimits

0xd02f,	// (0x0003b7af) aid_size_min_msg

0xcd84,	// (0x0003b504) fep_vkb_top_text_pane_g2_ParamLimits

0xcd84,	// (0x0003b504) fep_vkb_top_text_pane_g2

0x0001,

0xfb42,	// (0x0003e2c2) fep_vkb_top_text_pane_g_ParamLimits

0xfb42,	// (0x0003e2c2) fep_vkb_top_text_pane_g

0x2057,	// (0x000307d7) main_hc_apps_shell_pane

0xc2e5,	// (0x0003aa65) grid_hc_apps_pane_ParamLimits

0xc2e5,	// (0x0003aa65) grid_hc_apps_pane

0xc2f4,	// (0x0003aa74) list_hc_apps_pane

0xc2fc,	// (0x0003aa7c) scroll_pane_cp37_ParamLimits

0xc2fc,	// (0x0003aa7c) scroll_pane_cp37

0xd06f,	// (0x0003b7ef) cell_hc_apps_pane_ParamLimits

0xd06f,	// (0x0003b7ef) cell_hc_apps_pane

0xd0fd,	// (0x0003b87d) cell_hc_apps_pane_g1_ParamLimits

0xd0fd,	// (0x0003b87d) cell_hc_apps_pane_g1

0xc308,	// (0x0003aa88) cell_hc_apps_pane_g2_ParamLimits

0xc308,	// (0x0003aa88) cell_hc_apps_pane_g2

0xc324,	// (0x0003aaa4) cell_hc_apps_pane_g3_ParamLimits

0xc324,	// (0x0003aaa4) cell_hc_apps_pane_g3

0x0002,

0xfce2,	// (0x0003e462) cell_hc_apps_pane_g_ParamLimits

0xfce2,	// (0x0003e462) cell_hc_apps_pane_g

0xd12a,	// (0x0003b8aa) cell_hc_apps_pane_t1_ParamLimits

0xd12a,	// (0x0003b8aa) cell_hc_apps_pane_t1

0x270f,	// (0x00030e8f) grid_highlight_pane_cp10_ParamLimits

0x270f,	// (0x00030e8f) grid_highlight_pane_cp10

0xd168,	// (0x0003b8e8) list_single_hc_apps_pane_ParamLimits

0xd168,	// (0x0003b8e8) list_single_hc_apps_pane

0xd198,	// (0x0003b918) list_single_hc_apps_pane_g1

0xf535,	// (0x0003dcb5) list_single_hc_apps_pane_g2

0x0001,

0xfce9,	// (0x0003e469) list_single_hc_apps_pane_g

0xf54e,	// (0x0003dcce) list_single_hc_apps_pane_g2_copy1

0xf3f7,	// (0x0003db77) list_single_hc_apps_pane_t1

0x23ba,	// (0x00030b3a) bg_set_opt_pane_cp_ParamLimits

0x9f89,	// (0x00038709) setting_slider_pane_t1_ParamLimits

0x9f9f,	// (0x0003871f) setting_slider_pane_t2_ParamLimits

0x9fb8,	// (0x00038738) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0003dcfa) setting_slider_pane_t_ParamLimits

0x9fcf,	// (0x0003874f) slider_set_pane_ParamLimits

0xa8fd,	// (0x0003907d) control_pane_g5_ParamLimits

0xa8fd,	// (0x0003907d) control_pane_g5

0x7bb0,	// (0x00036330) slider_set_pane_g1_ParamLimits

0xb59b,	// (0x00039d1b) slider_set_pane_g2_ParamLimits

0xb5a7,	// (0x00039d27) slider_set_pane_g3_ParamLimits

0xb5bb,	// (0x00039d3b) slider_set_pane_g4_ParamLimits

0xb5d3,	// (0x00039d53) slider_set_pane_g5_ParamLimits

0xb5a7,	// (0x00039d27) slider_set_pane_g6_ParamLimits

0xb5e9,	// (0x00039d69) slider_set_pane_g7_ParamLimits

0xf975,	// (0x0003e0f5) slider_set_pane_g_ParamLimits

0x23ba,	// (0x00030b3a) navi_icon_text_pane_ParamLimits

0xadd5,	// (0x00039555) aid_fill_nsta_2_ParamLimits

0xadfb,	// (0x0003957b) aid_touch_tab_arrow_left_ParamLimits

0xae07,	// (0x00039587) aid_touch_tab_arrow_right_ParamLimits

0xae71,	// (0x000395f1) clock_nsta_pane_ParamLimits

0x7761,	// (0x00035ee1) navi_icon_pane_g1_ParamLimits

0x776d,	// (0x00035eed) navi_text_pane_t1_ParamLimits

0x84af,	// (0x00036c2f) navi_icon_text_pane_g1_ParamLimits

0x84bb,	// (0x00036c3b) navi_icon_text_pane_t1_ParamLimits

0xd198,	// (0x0003b918) list_single_hc_apps_pane_g1_ParamLimits

0xf535,	// (0x0003dcb5) list_single_hc_apps_pane_g2_ParamLimits

0xfce9,	// (0x0003e469) list_single_hc_apps_pane_g_ParamLimits

0xf54e,	// (0x0003dcce) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xf3f7,	// (0x0003db77) list_single_hc_apps_pane_t1_ParamLimits

0x9dfd,	// (0x0003857d) popup_toolbar2_fixed_window_ParamLimits

0x9dfd,	// (0x0003857d) popup_toolbar2_fixed_window

0xad66,	// (0x000394e6) popup_toolbar2_float_window

0x2057,	// (0x000307d7) bg_popup_sub_pane_cp27

0xd1b1,	// (0x0003b931) grid_toolbar2_float_pane

0x2057,	// (0x000307d7) bg_popup_sub_pane_cp26

0xd1b1,	// (0x0003b931) grid_toolbar2_fixed_pane

0xd1b9,	// (0x0003b939) cell_toolbar2_fixed_pane_ParamLimits

0xd1b9,	// (0x0003b939) cell_toolbar2_fixed_pane

0xd1ca,	// (0x0003b94a) cell_toolbar2_fixed_pane_g1

0xd1d3,	// (0x0003b953) toolbar2_fixed_button_pane

0x68f0,	// (0x00035070) toolbar2_fixed_button_pane_g1

0x68f8,	// (0x00035078) toolbar2_fixed_button_pane_g2

0x6900,	// (0x00035080) toolbar2_fixed_button_pane_g3

0x6908,	// (0x00035088) toolbar2_fixed_button_pane_g4

0x6910,	// (0x00035090) toolbar2_fixed_button_pane_g5

0x6918,	// (0x00035098) toolbar2_fixed_button_pane_g6

0x6920,	// (0x000350a0) toolbar2_fixed_button_pane_g7

0x6928,	// (0x000350a8) toolbar2_fixed_button_pane_g8

0x6930,	// (0x000350b0) toolbar2_fixed_button_pane_g9

0x0008,

0xf877,	// (0x0003dff7) toolbar2_fixed_button_pane_g

0xd1db,	// (0x0003b95b) cell_toolbar2_float_pane_ParamLimits

0xd1db,	// (0x0003b95b) cell_toolbar2_float_pane

0xd1ec,	// (0x0003b96c) cell_toolbar2_float_pane_g1

0xd1d3,	// (0x0003b953) toolbar2_fixed_button_pane_cp

0xcd3d,	// (0x0003b4bd) fep_vkb_accented_list_pane_ParamLimits

0xcd3d,	// (0x0003b4bd) fep_vkb_accented_list_pane

0xbc19,	// (0x0003a399) bg_popup_fep_shadow_pane_g9

0x63e2,	// (0x00034b62) bg_popup_fep_shadow_pane_cp3

0x2dd5,	// (0x00031555) list_accented_list_pane

0xd1f5,	// (0x0003b975) list_single_accented_list_pane_ParamLimits

0xd1f5,	// (0x0003b975) list_single_accented_list_pane

0x63e2,	// (0x00034b62) list_highlight_pane_cp10

0xd206,	// (0x0003b986) list_single_accented_list_pane_t1

0xacd4,	// (0x00039454) popup_slider_window_ParamLimits

0xacd4,	// (0x00039454) popup_slider_window

0xc18f,	// (0x0003a90f) aid_indentation_list_msg

0xd2a6,	// (0x0003ba26) bg_popup_window_pane_cp19

0xd30a,	// (0x0003ba8a) popup_slider_window_g1

0xd326,	// (0x0003baa6) popup_slider_window_g2

0xd342,	// (0x0003bac2) popup_slider_window_g3

0x0005,

0xfcee,	// (0x0003e46e) popup_slider_window_g

0xd39e,	// (0x0003bb1e) popup_slider_window_t1

0xd410,	// (0x0003bb90) small_volume_slider_vertical_pane

0x8779,	// (0x00036ef9) small_volume_slider_vertical_pane_g1

0x8779,	// (0x00036ef9) small_volume_slider_vertical_pane_g2

0xd42c,	// (0x0003bbac) small_volume_slider_vertical_pane_g3

0x0002,

0xfd00,	// (0x0003e480) small_volume_slider_vertical_pane_g

0x9c71,	// (0x000383f1) area_side_right_pane_ParamLimits

0x9c71,	// (0x000383f1) area_side_right_pane

0xc346,	// (0x0003aac6) aid_size_side_button_ParamLimits

0xc346,	// (0x0003aac6) aid_size_side_button

0xc35a,	// (0x0003aada) grid_sctrl_middle_pane_ParamLimits

0xc35a,	// (0x0003aada) grid_sctrl_middle_pane

0xc376,	// (0x0003aaf6) sctrl_sk_bottom_pane

0xc387,	// (0x0003ab07) sctrl_sk_top_pane

0xc399,	// (0x0003ab19) aid_touch_sctrl_top

0xc3a6,	// (0x0003ab26) bg_sctrl_sk_pane_ParamLimits

0xc3a6,	// (0x0003ab26) bg_sctrl_sk_pane

0xc3b4,	// (0x0003ab34) sctrl_sk_top_pane_g1

0xc3c1,	// (0x0003ab41) sctrl_sk_top_pane_t1

0xc399,	// (0x0003ab19) aid_touch_sctrl_bottom

0xc3a6,	// (0x0003ab26) bg_sctrl_sk_pane_cp_ParamLimits

0xc3a6,	// (0x0003ab26) bg_sctrl_sk_pane_cp

0xc3dc,	// (0x0003ab5c) sctrl_sk_bottom_pane_g1

0xc3c1,	// (0x0003ab41) sctrl_sk_bottom_pane_t1

0xc3e5,	// (0x0003ab65) cell_sctrl_middle_pane_ParamLimits

0xc3e5,	// (0x0003ab65) cell_sctrl_middle_pane

0xc400,	// (0x0003ab80) aid_touch_sctrl_middle_ParamLimits

0xc400,	// (0x0003ab80) aid_touch_sctrl_middle

0xc411,	// (0x0003ab91) bg_sctrl_middle_pane_ParamLimits

0xc411,	// (0x0003ab91) bg_sctrl_middle_pane

0xbc39,	// (0x0003a3b9) cell_sctrl_middle_pane_g1_ParamLimits

0xbc39,	// (0x0003a3b9) cell_sctrl_middle_pane_g1

0xc41f,	// (0x0003ab9f) cell_sctrl_middle_pane_g2_ParamLimits

0xc41f,	// (0x0003ab9f) cell_sctrl_middle_pane_g2

0x0001,

0xfd0c,	// (0x0003e48c) cell_sctrl_middle_pane_g_ParamLimits

0xfd0c,	// (0x0003e48c) cell_sctrl_middle_pane_g

0x68f0,	// (0x00035070) bg_sctrl_middle_pane_g1

0x6900,	// (0x00035080) bg_sctrl_middle_pane_g2

0x68f8,	// (0x00035078) bg_sctrl_middle_pane_g3

0x6910,	// (0x00035090) bg_sctrl_middle_pane_g4

0x6908,	// (0x00035088) bg_sctrl_middle_pane_g5

0x6918,	// (0x00035098) bg_sctrl_middle_pane_g6

0x6920,	// (0x000350a0) bg_sctrl_middle_pane_g7

0x6930,	// (0x000350b0) bg_sctrl_middle_pane_g8

0x0007,

0xfd11,	// (0x0003e491) bg_sctrl_middle_pane_g

0x6928,	// (0x000350a8) bg_sctrl_middle_pane_g8_copy1

0x68f0,	// (0x00035070) bg_sctrl_sk_pane_g1

0x68f8,	// (0x00035078) bg_sctrl_sk_pane_g2

0x6900,	// (0x00035080) bg_sctrl_sk_pane_g3

0x0008,

0xf877,	// (0x0003dff7) bg_sctrl_sk_pane_g

0x2b65,	// (0x000312e5) aid_size_touch_scroll_bar

0x6908,	// (0x00035088) bg_sctrl_sk_pane_g4

0x6910,	// (0x00035090) bg_sctrl_sk_pane_g5

0x6918,	// (0x00035098) bg_sctrl_sk_pane_g6

0x6920,	// (0x000350a0) bg_sctrl_sk_pane_g7

0x6928,	// (0x000350a8) bg_sctrl_sk_pane_g8

0x6930,	// (0x000350b0) bg_sctrl_sk_pane_g9

0x6666,	// (0x00034de6) popup_fep_china_hwr2_fs_candidate_window

0xaa90,	// (0x00039210) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xaa90,	// (0x00039210) popup_fep_china_hwr2_fs_control_window

0xbc39,	// (0x0003a3b9) sctrl_sk_top_pane_g2

0x0001,

0xfd07,	// (0x0003e487) sctrl_sk_top_pane_g

0xd435,	// (0x0003bbb5) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd435,	// (0x0003bbb5) aid_fep_china_hwr2_fs_cell

0xd446,	// (0x0003bbc6) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd446,	// (0x0003bbc6) bg_popup_fep_shadow_pane_cp4

0xd45d,	// (0x0003bbdd) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd45d,	// (0x0003bbdd) bg_popup_fep_shadow_pane_cp5

0xd46f,	// (0x0003bbef) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd46f,	// (0x0003bbef) popup_fep_china_hwr2_fs_control_bar_grid

0xd47f,	// (0x0003bbff) popup_fep_china_hwr2_fs_control_funtion_grid

0xd487,	// (0x0003bc07) aid_fep_china_hwr2_fs_candi_cell

0x2057,	// (0x000307d7) bg_popup_fep_shadow_pane_cp6

0xd491,	// (0x0003bc11) popup_fep_china_hwr2_fs_candidate_grid

0xd499,	// (0x0003bc19) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd499,	// (0x0003bc19) cell_fep_china_hwr2_fs_funtion_grid

0x8779,	// (0x00036ef9) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd4b1,	// (0x0003bc31) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd4b1,	// (0x0003bc31) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd4bf,	// (0x0003bc3f) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd4bf,	// (0x0003bc3f) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd22,	// (0x0003e4a2) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd22,	// (0x0003e4a2) cell_fep_china_hwr2_fs_funtion_grid_g

0xd4d5,	// (0x0003bc55) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd4d5,	// (0x0003bc55) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd4ea,	// (0x0003bc6a) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd4ea,	// (0x0003bc6a) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd27,	// (0x0003e4a7) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd27,	// (0x0003e4a7) cell_fep_china_hwr2_fs_funtion_grid_t

0xd506,	// (0x0003bc86) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd50e,	// (0x0003bc8e) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd516,	// (0x0003bc96) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2c,	// (0x0003e4ac) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd51e,	// (0x0003bc9e) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd51e,	// (0x0003bc9e) cell_fep_china_hwr2_fs_candidate_grid

0xd537,	// (0x0003bcb7) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd53f,	// (0x0003bcbf) popup_fep_china_hwr2_fs_candidate_grid_g21

0x8779,	// (0x00036ef9) cell_fep_china_hwr2_fs_candidate_grid_g1

0x8779,	// (0x00036ef9) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb47,	// (0x0003e2c7) cell_fep_china_hwr2_fs_candidate_grid_g

0xd547,	// (0x0003bcc7) cell_fep_china_hwr2_fs_candidate_grid_t1

0x6755,	// (0x00034ed5) clock_nsta_pane_cp_24_ParamLimits

0x6755,	// (0x00034ed5) clock_nsta_pane_cp_24

0x67b2,	// (0x00034f32) indicator_nsta_pane_cp_24_ParamLimits

0x67b2,	// (0x00034f32) indicator_nsta_pane_cp_24

0x766c,	// (0x00035dec) heading_pane_g1

0x0001,

0xf8dc,	// (0x0003e05c) heading_pane_g

0xb80d,	// (0x00039f8d) grid_sct_catagory_button_pane

0x7620,	// (0x00035da0) scroll_pane_cp5_ParamLimits

0x84e1,	// (0x00036c61) button_value_adjust_pane_cp5_ParamLimits

0x84e1,	// (0x00036c61) button_value_adjust_pane_cp5

0x859f,	// (0x00036d1f) form2_midp_time_pane_ParamLimits

0xd555,	// (0x0003bcd5) cell_sct_catagory_button_pane_ParamLimits

0xd555,	// (0x0003bcd5) cell_sct_catagory_button_pane

0x873e,	// (0x00036ebe) bg_button_pane_cp01_ParamLimits

0x873e,	// (0x00036ebe) bg_button_pane_cp01

0x8779,	// (0x00036ef9) cell_sct_catagory_button_pane_g1

0xad03,	// (0x00039483) popup_tb_extension_window

0xd567,	// (0x0003bce7) aid_size_cell_ext_ParamLimits

0xd567,	// (0x0003bce7) aid_size_cell_ext

0x270f,	// (0x00030e8f) bg_tb_trans_pane_cp1_ParamLimits

0x270f,	// (0x00030e8f) bg_tb_trans_pane_cp1

0xd587,	// (0x0003bd07) grid_tb_ext_pane_ParamLimits

0xd587,	// (0x0003bd07) grid_tb_ext_pane

0xd5ad,	// (0x0003bd2d) cell_tb_ext_pane_ParamLimits

0xd5ad,	// (0x0003bd2d) cell_tb_ext_pane

0xd5c2,	// (0x0003bd42) cell_tb_ext_pane_g1_ParamLimits

0xd5c2,	// (0x0003bd42) cell_tb_ext_pane_g1

0xd5df,	// (0x0003bd5f) cell_tb_ext_pane_t1

0x270f,	// (0x00030e8f) list_highlight_pane_cp11_ParamLimits

0x270f,	// (0x00030e8f) list_highlight_pane_cp11

0x9e1c,	// (0x0003859c) popup_uni_indicator_window_ParamLimits

0x9e1c,	// (0x0003859c) popup_uni_indicator_window

0x2c93,	// (0x00031413) bg_popup_sub_pane_cp14

0xd5fa,	// (0x0003bd7a) list_uniindi_pane

0xd606,	// (0x0003bd86) uniindi_top_pane

0x270f,	// (0x00030e8f) bg_uniindi_top_pane

0xd625,	// (0x0003bda5) uniindi_top_pane_g1

0xd63b,	// (0x0003bdbb) uniindi_top_pane_g2

0x0003,

0xfd33,	// (0x0003e4b3) uniindi_top_pane_g

0xd665,	// (0x0003bde5) uniindi_top_pane_t1

0xd68f,	// (0x0003be0f) list_single_uniindi_pane_ParamLimits

0xd68f,	// (0x0003be0f) list_single_uniindi_pane

0x8779,	// (0x00036ef9) bg_uniindi_top_pane_g1

0xd6a1,	// (0x0003be21) list_single_uniindi_pane_g1

0xd6b4,	// (0x0003be34) list_single_uniindi_pane_t1

0x9cba,	// (0x0003843a) control_bg_pane

0xd6d9,	// (0x0003be59) bg_sctrl_sk_pane_cp1

0xd6e2,	// (0x0003be62) bg_sctrl_sk_pane_cp2

0xd6eb,	// (0x0003be6b) control_bg_pane_g1

0xd6f4,	// (0x0003be74) control_bg_pane_g2

0x0001,

0xfd3c,	// (0x0003e4bc) control_bg_pane_g

0x83a2,	// (0x00036b22) cell_indicator_nsta_pane_g1_ParamLimits

0xcbaa,	// (0x0003b32a) cell_indicator_nsta_pane_g2_ParamLimits

0xfaab,	// (0x0003e22b) cell_indicator_nsta_pane_g_ParamLimits

0xf181,	// (0x0003d901) form2_midp_time_pane_t1_ParamLimits

0x2a43,	// (0x000311c3) main_idle_act4_pane_ParamLimits

0x2a43,	// (0x000311c3) main_idle_act4_pane

0xad03,	// (0x00039483) popup_tb_extension_window_ParamLimits

0xd5a1,	// (0x0003bd21) tb_ext_find_pane_ParamLimits

0xd5a1,	// (0x0003bd21) tb_ext_find_pane

0xd6fd,	// (0x0003be7d) ai_gene_pane_1_cp1

0x6476,	// (0x00034bf6) ai_gene_pane_2_cp1

0xd705,	// (0x0003be85) list_single_idle_plugin_calendar_pane

0xd70e,	// (0x0003be8e) list_single_idle_plugin_notification_pane

0xd717,	// (0x0003be97) list_single_idle_plugin_player_pane

0xd720,	// (0x0003bea0) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd720,	// (0x0003bea0) list_single_idle_plugin_shortcut_pane

0xd742,	// (0x0003bec2) main_idle_act4_pane_t1

0xd754,	// (0x0003bed4) main_idle_act4_pane_t2

0x0001,

0xfd41,	// (0x0003e4c1) main_idle_act4_pane_t

0xd766,	// (0x0003bee6) middle_sk_idle_act4_pane_ParamLimits

0xd766,	// (0x0003bee6) middle_sk_idle_act4_pane

0xd77c,	// (0x0003befc) popup_clock_digital_analogue_window_cp2

0xd796,	// (0x0003bf16) shortcut_wheel_idle_act4_pane_ParamLimits

0xd796,	// (0x0003bf16) shortcut_wheel_idle_act4_pane

0x8779,	// (0x00036ef9) shortcut_wheel_idle_act4_pane_g1

0x8779,	// (0x00036ef9) shortcut_wheel_idle_act4_pane_g2

0x8779,	// (0x00036ef9) shortcut_wheel_idle_act4_pane_g3

0x8779,	// (0x00036ef9) shortcut_wheel_idle_act4_pane_g4

0x8779,	// (0x00036ef9) shortcut_wheel_idle_act4_pane_g5

0xd7aa,	// (0x0003bf2a) shortcut_wheel_idle_act4_pane_g6

0xd7b2,	// (0x0003bf32) shortcut_wheel_idle_act4_pane_g7

0xd7ba,	// (0x0003bf3a) shortcut_wheel_idle_act4_pane_g8

0xd7c2,	// (0x0003bf42) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd46,	// (0x0003e4c6) shortcut_wheel_idle_act4_pane_g

0x89a7,	// (0x00037127) middle_sk_idle_act4_pane_g1_ParamLimits

0x89a7,	// (0x00037127) middle_sk_idle_act4_pane_g1

0xd826,	// (0x0003bfa6) middle_sk_idle_act4_pane_g2_ParamLimits

0xd826,	// (0x0003bfa6) middle_sk_idle_act4_pane_g2

0x0001,

0xfd69,	// (0x0003e4e9) middle_sk_idle_act4_pane_g_ParamLimits

0xfd69,	// (0x0003e4e9) middle_sk_idle_act4_pane_g

0xd832,	// (0x0003bfb2) middle_sk_idle_act4_pane_t1_ParamLimits

0xd832,	// (0x0003bfb2) middle_sk_idle_act4_pane_t1

0xd84f,	// (0x0003bfcf) grid_ai_shortcut_pane_ParamLimits

0xd84f,	// (0x0003bfcf) grid_ai_shortcut_pane

0xd868,	// (0x0003bfe8) list_highlight_pane_cp16_ParamLimits

0xd868,	// (0x0003bfe8) list_highlight_pane_cp16

0xd875,	// (0x0003bff5) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd875,	// (0x0003bff5) list_single_idle_plugin_shortcut_pane_g1

0xd881,	// (0x0003c001) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd881,	// (0x0003c001) list_single_idle_plugin_shortcut_pane_g2

0xd899,	// (0x0003c019) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd899,	// (0x0003c019) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6e,	// (0x0003e4ee) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6e,	// (0x0003e4ee) list_single_idle_plugin_shortcut_pane_g

0xd8ac,	// (0x0003c02c) cell_ai_shortcut_pane_ParamLimits

0xd8ac,	// (0x0003c02c) cell_ai_shortcut_pane

0xd8cd,	// (0x0003c04d) cell_ai_shortcut_pane_g1_ParamLimits

0xd8cd,	// (0x0003c04d) cell_ai_shortcut_pane_g1

0xd6fd,	// (0x0003be7d) ai_gene_pane_1_cp2

0xd8ef,	// (0x0003c06f) ai_gene_pane_2_cp2

0xd8f7,	// (0x0003c077) list_highlight_pane_cp15

0xd900,	// (0x0003c080) list_single_idle_plugin_calendar_pane_g1

0xd8f7,	// (0x0003c077) list_highlight_pane_cp17

0xd908,	// (0x0003c088) list_single_idle_plugin_calendar_pane_g1_copy1

0xd910,	// (0x0003c090) list_single_idle_plugin_player_pane_g1

0x7e78,	// (0x000365f8) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd75,	// (0x0003e4f5) list_single_idle_plugin_player_pane_g

0xd918,	// (0x0003c098) list_single_idle_plugin_player_pane_t1

0xd926,	// (0x0003c0a6) list_single_idle_plugin_player_pane_t2

0xd934,	// (0x0003c0b4) list_single_idle_plugin_player_pane_t3

0xd942,	// (0x0003c0c2) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7a,	// (0x0003e4fa) list_single_idle_plugin_player_pane_t

0xd950,	// (0x0003c0d0) wait_bar_pane_cp15

0xd958,	// (0x0003c0d8) grid_ai_notification_pane

0x7e78,	// (0x000365f8) list_single_idle_plugin_notification_pane_g1

0xd961,	// (0x0003c0e1) cell_ai_notification_pane_ParamLimits

0xd961,	// (0x0003c0e1) cell_ai_notification_pane

0xd96e,	// (0x0003c0ee) cell_ai_notification_pane_g1

0xd976,	// (0x0003c0f6) cell_ai_notification_pane_t1

0xd984,	// (0x0003c104) tb_ext_find_button_pane

0xd98c,	// (0x0003c10c) tb_ext_find_pane_g1

0xd994,	// (0x0003c114) tb_ext_find_pane_t1

0x5f55,	// (0x000346d5) tb_ext_find_button_pane_g1

0xd9a2,	// (0x0003c122) tb_ext_find_button_pane_g2

0x0001,

0xfd83,	// (0x0003e503) tb_ext_find_button_pane_g

0xd742,	// (0x0003bec2) main_idle_act4_pane_t1_ParamLimits

0xd754,	// (0x0003bed4) main_idle_act4_pane_t2_ParamLimits

0xfd41,	// (0x0003e4c1) main_idle_act4_pane_t_ParamLimits

0xd77c,	// (0x0003befc) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd78a,	// (0x0003bf0a) sat_plugin_idle_act4_pane_ParamLimits

0xd78a,	// (0x0003bf0a) sat_plugin_idle_act4_pane

0xd9ab,	// (0x0003c12b) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd9ab,	// (0x0003c12b) sat_plugin_idle_act4_pane_t1

0xd9be,	// (0x0003c13e) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd9be,	// (0x0003c13e) sat_plugin_idle_act4_pane_t2

0xd9d1,	// (0x0003c151) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd9d1,	// (0x0003c151) sat_plugin_idle_act4_pane_t3

0xd9e4,	// (0x0003c164) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd9e4,	// (0x0003c164) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd88,	// (0x0003e508) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd88,	// (0x0003e508) sat_plugin_idle_act4_pane_t

0x9d7d,	// (0x000384fd) popup_battery_window_ParamLimits

0x9d7d,	// (0x000384fd) popup_battery_window

0x270f,	// (0x00030e8f) bg_popup_sub_pane_cp25_ParamLimits

0x270f,	// (0x00030e8f) bg_popup_sub_pane_cp25

0xd9f7,	// (0x0003c177) popup_battery_window_g1_ParamLimits

0xd9f7,	// (0x0003c177) popup_battery_window_g1

0xda03,	// (0x0003c183) popup_battery_window_t1_ParamLimits

0xda03,	// (0x0003c183) popup_battery_window_t1

0xda15,	// (0x0003c195) popup_battery_window_t2_ParamLimits

0xda15,	// (0x0003c195) popup_battery_window_t2

0x0001,

0xfd91,	// (0x0003e511) popup_battery_window_t_ParamLimits

0xfd91,	// (0x0003e511) popup_battery_window_t

0xa75c,	// (0x00038edc) midp_canvas_pane_ParamLimits

0xa7b8,	// (0x00038f38) midp_keypad_pane_ParamLimits

0xa7b8,	// (0x00038f38) midp_keypad_pane

0x5d20,	// (0x000344a0) main_midp_pane_ParamLimits

0x847d,	// (0x00036bfd) signal_pane_g2_cp_ParamLimits

0xda32,	// (0x0003c1b2) aid_size_cell_midp_keypad_ParamLimits

0xda32,	// (0x0003c1b2) aid_size_cell_midp_keypad

0xda4c,	// (0x0003c1cc) midp_keyp_game_grid_pane_ParamLimits

0xda4c,	// (0x0003c1cc) midp_keyp_game_grid_pane

0xda66,	// (0x0003c1e6) midp_keyp_rocker_pane_ParamLimits

0xda66,	// (0x0003c1e6) midp_keyp_rocker_pane

0xda93,	// (0x0003c213) midp_keyp_sk_left_pane_ParamLimits

0xda93,	// (0x0003c213) midp_keyp_sk_left_pane

0xdaeb,	// (0x0003c26b) midp_keyp_sk_right_pane_ParamLimits

0xdaeb,	// (0x0003c26b) midp_keyp_sk_right_pane

0x2057,	// (0x000307d7) bg_button_pane_cp03

0xdb3d,	// (0x0003c2bd) midp_keyp_sk_left_pane_g1

0x2057,	// (0x000307d7) bg_button_pane_cp04

0xdb3d,	// (0x0003c2bd) midp_keyp_sk_right_pane_g1

0x8779,	// (0x00036ef9) midp_keyp_rocker_pane_g1

0xdb46,	// (0x0003c2c6) keyp_game_cell_pane_ParamLimits

0xdb46,	// (0x0003c2c6) keyp_game_cell_pane

0x2057,	// (0x000307d7) bg_button_pane_cp02

0xdb57,	// (0x0003c2d7) keyp_game_cell_pane_g1

0x9db3,	// (0x00038533) popup_fep_vkb2_window_ParamLimits

0x9db3,	// (0x00038533) popup_fep_vkb2_window

0xc443,	// (0x0003abc3) aid_size_cell_vkb2_ParamLimits

0xc443,	// (0x0003abc3) aid_size_cell_vkb2

0xc497,	// (0x0003ac17) popup_fep_vkb2_window_g1_ParamLimits

0xc497,	// (0x0003ac17) popup_fep_vkb2_window_g1

0xc4df,	// (0x0003ac5f) vkb2_area_bottom_pane_ParamLimits

0xc4df,	// (0x0003ac5f) vkb2_area_bottom_pane

0xc517,	// (0x0003ac97) vkb2_area_keypad_pane_ParamLimits

0xc517,	// (0x0003ac97) vkb2_area_keypad_pane

0xc54f,	// (0x0003accf) vkb2_area_top_pane_ParamLimits

0xc54f,	// (0x0003accf) vkb2_area_top_pane

0xc5bf,	// (0x0003ad3f) vkb2_top_entry_pane_ParamLimits

0xc5bf,	// (0x0003ad3f) vkb2_top_entry_pane

0xc5e9,	// (0x0003ad69) vkb2_top_grid_left_pane_ParamLimits

0xc5e9,	// (0x0003ad69) vkb2_top_grid_left_pane

0xc607,	// (0x0003ad87) vkb2_top_grid_right_pane_ParamLimits

0xc607,	// (0x0003ad87) vkb2_top_grid_right_pane

0xc625,	// (0x0003ada5) vkb2_cell_keypad_pane_ParamLimits

0xc625,	// (0x0003ada5) vkb2_cell_keypad_pane

0xc6d6,	// (0x0003ae56) vkb2_area_bottom_grid_pane_ParamLimits

0xc6d6,	// (0x0003ae56) vkb2_area_bottom_grid_pane

0xc6fa,	// (0x0003ae7a) vkb2_area_bottom_pane_g1_ParamLimits

0xc6fa,	// (0x0003ae7a) vkb2_area_bottom_pane_g1

0xc71e,	// (0x0003ae9e) vkb2_area_bottom_pane_g2_ParamLimits

0xc71e,	// (0x0003ae9e) vkb2_area_bottom_pane_g2

0xc74c,	// (0x0003aecc) vkb2_area_bottom_pane_g3_ParamLimits

0xc74c,	// (0x0003aecc) vkb2_area_bottom_pane_g3

0x0002,

0xfd96,	// (0x0003e516) vkb2_area_bottom_pane_g_ParamLimits

0xfd96,	// (0x0003e516) vkb2_area_bottom_pane_g

0xc79d,	// (0x0003af1d) vkb2_top_cell_left_pane_ParamLimits

0xc79d,	// (0x0003af1d) vkb2_top_cell_left_pane

0x0255,	// (0x0002e9d5) vkb2_top_entry_pane_g1_ParamLimits

0x0255,	// (0x0002e9d5) vkb2_top_entry_pane_g1

0x0263,	// (0x0002e9e3) vkb2_top_entry_pane_t1_ParamLimits

0x0263,	// (0x0002e9e3) vkb2_top_entry_pane_t1

0xdb68,	// (0x0003c2e8) vkb2_top_entry_pane_t2_ParamLimits

0xdb68,	// (0x0003c2e8) vkb2_top_entry_pane_t2

0xdb9a,	// (0x0003c31a) vkb2_top_entry_pane_t3_ParamLimits

0xdb9a,	// (0x0003c31a) vkb2_top_entry_pane_t3

0x0002,

0xfd9d,	// (0x0003e51d) vkb2_top_entry_pane_t_ParamLimits

0xfd9d,	// (0x0003e51d) vkb2_top_entry_pane_t

0xc7ea,	// (0x0003af6a) vkb2_top_grid_right_pane_g1_ParamLimits

0xc7ea,	// (0x0003af6a) vkb2_top_grid_right_pane_g1

0xc800,	// (0x0003af80) vkb2_top_grid_right_pane_g2_ParamLimits

0xc800,	// (0x0003af80) vkb2_top_grid_right_pane_g2

0xc818,	// (0x0003af98) vkb2_top_grid_right_pane_g3_ParamLimits

0xc818,	// (0x0003af98) vkb2_top_grid_right_pane_g3

0xc830,	// (0x0003afb0) vkb2_top_grid_right_pane_g4_ParamLimits

0xc830,	// (0x0003afb0) vkb2_top_grid_right_pane_g4

0x0003,

0xfda4,	// (0x0003e524) vkb2_top_grid_right_pane_g_ParamLimits

0xfda4,	// (0x0003e524) vkb2_top_grid_right_pane_g

0xc846,	// (0x0003afc6) vkb2_top_cell_left_pane_g1

0xc85d,	// (0x0003afdd) vkb2_cell_keypad_pane_g1_ParamLimits

0xc85d,	// (0x0003afdd) vkb2_cell_keypad_pane_g1

0xdbb0,	// (0x0003c330) vkb2_cell_keypad_pane_t1_ParamLimits

0xdbb0,	// (0x0003c330) vkb2_cell_keypad_pane_t1

0xc86b,	// (0x0003afeb) vkb2_cell_bottom_grid_pane_ParamLimits

0xc86b,	// (0x0003afeb) vkb2_cell_bottom_grid_pane

0xc8a4,	// (0x0003b024) vkb2_cell_bottom_grid_pane_g1

0xd7ca,	// (0x0003bf4a) aid_call2_pane_cp02

0xd7d2,	// (0x0003bf52) aid_call_pane_cp02

0xd7da,	// (0x0003bf5a) clock_digital_number_pane_cp10

0xd7e2,	// (0x0003bf62) clock_digital_number_pane_cp11

0xd7ea,	// (0x0003bf6a) clock_digital_number_pane_cp12

0xd7f2,	// (0x0003bf72) clock_digital_number_pane_cp13

0xd7fa,	// (0x0003bf7a) clock_digital_separator_pane_cp10

0x5f55,	// (0x000346d5) popup_clock_digital_analogue_window_cp2_g1

0x5f55,	// (0x000346d5) popup_clock_digital_analogue_window_cp2_g2

0xd802,	// (0x0003bf82) popup_clock_digital_analogue_window_cp2_g3

0x5f55,	// (0x000346d5) popup_clock_digital_analogue_window_cp2_g4

0xd802,	// (0x0003bf82) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd59,	// (0x0003e4d9) popup_clock_digital_analogue_window_cp2_g

0xd80a,	// (0x0003bf8a) popup_clock_digital_analogue_window_cp2_t1

0xd818,	// (0x0003bf98) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd64,	// (0x0003e4e4) popup_clock_digital_analogue_window_cp2_t

0x8779,	// (0x00036ef9) clock_digital_number_pane_cp10_g1

0x8779,	// (0x00036ef9) clock_digital_number_pane_cp10_g2

0x0001,

0xfb47,	// (0x0003e2c7) clock_digital_number_pane_cp10_g

0x8779,	// (0x00036ef9) clock_digital_separator_pane_cp10_g1

0x8779,	// (0x00036ef9) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb47,	// (0x0003e2c7) clock_digital_separator_pane_cp10_g

0xd647,	// (0x0003bdc7) uniindi_top_pane_g3

0xd658,	// (0x0003bdd8) uniindi_top_pane_g4

0xc690,	// (0x0003ae10) vkb2_row_keypad_pane_ParamLimits

0xc690,	// (0x0003ae10) vkb2_row_keypad_pane

0xc8c0,	// (0x0003b040) vkb2_cell_t_keypad_pane_ParamLimits

0xc8c0,	// (0x0003b040) vkb2_cell_t_keypad_pane

0xc8cd,	// (0x0003b04d) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xc8cd,	// (0x0003b04d) vkb2_cell_t_keypad_pane_cp08

0xc8dd,	// (0x0003b05d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xc8dd,	// (0x0003b05d) vkb2_cell_t_keypad_pane_cp09

0xc8ee,	// (0x0003b06e) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xc8ee,	// (0x0003b06e) vkb2_cell_t_keypad_pane_cp01

0xc8fe,	// (0x0003b07e) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xc8fe,	// (0x0003b07e) vkb2_cell_t_keypad_pane_cp02

0xc90e,	// (0x0003b08e) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xc90e,	// (0x0003b08e) vkb2_cell_t_keypad_pane_cp03

0xc91e,	// (0x0003b09e) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xc91e,	// (0x0003b09e) vkb2_cell_t_keypad_pane_cp04

0xc92e,	// (0x0003b0ae) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xc92e,	// (0x0003b0ae) vkb2_cell_t_keypad_pane_cp05

0xc93e,	// (0x0003b0be) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xc93e,	// (0x0003b0be) vkb2_cell_t_keypad_pane_cp06

0xc94e,	// (0x0003b0ce) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xc94e,	// (0x0003b0ce) vkb2_cell_t_keypad_pane_cp07

0xc95e,	// (0x0003b0de) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xc95e,	// (0x0003b0de) vkb2_cell_t_keypad_pane_cp10

0xbc39,	// (0x0003a3b9) vkb2_cell_t_keypad_pane_g1

0xdbc7,	// (0x0003c347) vkb2_cell_t_keypad_pane_t1

0x9cba,	// (0x0003843a) popup_grid_graphic2_window

0x044b,	// (0x0002ebcb) aid_size_cell_graphic2_ParamLimits

0x044b,	// (0x0002ebcb) aid_size_cell_graphic2

0x8e21,	// (0x000375a1) bg_popup_window_pane_cp21_ParamLimits

0x8e21,	// (0x000375a1) bg_popup_window_pane_cp21

0x0477,	// (0x0002ebf7) graphic2_pages_pane_ParamLimits

0x0477,	// (0x0002ebf7) graphic2_pages_pane

0x04b1,	// (0x0002ec31) grid_graphic2_control_pane_ParamLimits

0x04b1,	// (0x0002ec31) grid_graphic2_control_pane

0x04d9,	// (0x0002ec59) grid_graphic2_pane_ParamLimits

0x04d9,	// (0x0002ec59) grid_graphic2_pane

0x0529,	// (0x0002eca9) cell_graphic2_pane

0x2057,	// (0x000307d7) main_comp_mode_pane

0xc21f,	// (0x0003a99f) list_ai3_gene_pane_ParamLimits

0xd2a6,	// (0x0003ba26) bg_popup_window_pane_cp19_ParamLimits

0xd2b2,	// (0x0003ba32) bg_touch_area_indi_pane_ParamLimits

0xd2b2,	// (0x0003ba32) bg_touch_area_indi_pane

0xd2c8,	// (0x0003ba48) bg_touch_area_indi_pane_cp01_ParamLimits

0xd2c8,	// (0x0003ba48) bg_touch_area_indi_pane_cp01

0xd2de,	// (0x0003ba5e) bg_touch_area_indi_pane_cp02_ParamLimits

0xd2de,	// (0x0003ba5e) bg_touch_area_indi_pane_cp02

0xd2f4,	// (0x0003ba74) bg_touch_area_indi_pane_cp03_ParamLimits

0xd2f4,	// (0x0003ba74) bg_touch_area_indi_pane_cp03

0xd30a,	// (0x0003ba8a) popup_slider_window_g1_ParamLimits

0xd326,	// (0x0003baa6) popup_slider_window_g2_ParamLimits

0xd342,	// (0x0003bac2) popup_slider_window_g3_ParamLimits

0xfcee,	// (0x0003e46e) popup_slider_window_g_ParamLimits

0xd39e,	// (0x0003bb1e) popup_slider_window_t1_ParamLimits

0xd410,	// (0x0003bb90) small_volume_slider_vertical_pane_ParamLimits

0x0529,	// (0x0002eca9) cell_graphic2_pane_ParamLimits

0x0566,	// (0x0002ece6) bg_button_pane_cp10_ParamLimits

0x0566,	// (0x0002ece6) bg_button_pane_cp10

0x0577,	// (0x0002ecf7) bg_button_pane_cp11_ParamLimits

0x0577,	// (0x0002ecf7) bg_button_pane_cp11

0x0588,	// (0x0002ed08) graphic2_pages_pane_g1_ParamLimits

0x0588,	// (0x0002ed08) graphic2_pages_pane_g1

0x059b,	// (0x0002ed1b) graphic2_pages_pane_g2_ParamLimits

0x059b,	// (0x0002ed1b) graphic2_pages_pane_g2

0x0001,

0xfdb2,	// (0x0003e532) graphic2_pages_pane_g_ParamLimits

0xfdb2,	// (0x0003e532) graphic2_pages_pane_g

0x05b1,	// (0x0002ed31) graphic2_pages_pane_t1_ParamLimits

0x05b1,	// (0x0002ed31) graphic2_pages_pane_t1

0x05c7,	// (0x0002ed47) cell_graphic2_control_pane_ParamLimits

0x05c7,	// (0x0002ed47) cell_graphic2_control_pane

0x05e1,	// (0x0002ed61) cell_graphic2_pane_g1_ParamLimits

0x05e1,	// (0x0002ed61) cell_graphic2_pane_g1

0x05ee,	// (0x0002ed6e) cell_graphic2_pane_g2_ParamLimits

0x05ee,	// (0x0002ed6e) cell_graphic2_pane_g2

0x05fb,	// (0x0002ed7b) cell_graphic2_pane_g3_ParamLimits

0x05fb,	// (0x0002ed7b) cell_graphic2_pane_g3

0x0608,	// (0x0002ed88) cell_graphic2_pane_g4_ParamLimits

0x0608,	// (0x0002ed88) cell_graphic2_pane_g4

0x0615,	// (0x0002ed95) cell_graphic2_pane_g5_ParamLimits

0x0615,	// (0x0002ed95) cell_graphic2_pane_g5

0x0004,

0xfdb7,	// (0x0003e537) cell_graphic2_pane_g_ParamLimits

0xfdb7,	// (0x0003e537) cell_graphic2_pane_g

0x0630,	// (0x0002edb0) cell_graphic2_pane_t1_ParamLimits

0x0630,	// (0x0002edb0) cell_graphic2_pane_t1

0x69ea,	// (0x0003516a) grid_highlight_pane_cp11_ParamLimits

0x69ea,	// (0x0003516a) grid_highlight_pane_cp11

0x2c93,	// (0x00031413) bg_button_pane_cp05

0x0659,	// (0x0002edd9) cell_graphic2_control_pane_g1

0x8779,	// (0x00036ef9) bg_touch_area_indi_pane_g1

0xdbd9,	// (0x0003c359) aid_cmod_rocker_key_size

0xdbe3,	// (0x0003c363) aid_cmode_itu_key_size

0xdbed,	// (0x0003c36d) main_cmode_video_pane

0xdbf5,	// (0x0003c375) main_comp_mode_itu_pane

0xdbff,	// (0x0003c37f) main_comp_mode_rocker_pane

0xdc07,	// (0x0003c387) cell_cmode_rocker_pane_ParamLimits

0xdc07,	// (0x0003c387) cell_cmode_rocker_pane

0xdc19,	// (0x0003c399) cell_cmode_itu_pane_ParamLimits

0xdc19,	// (0x0003c399) cell_cmode_itu_pane

0x2c93,	// (0x00031413) bg_button_pane_cp06_ParamLimits

0x2c93,	// (0x00031413) bg_button_pane_cp06

0x89a7,	// (0x00037127) cell_cmode_rocker_pane_g1_ParamLimits

0x89a7,	// (0x00037127) cell_cmode_rocker_pane_g1

0xd4b1,	// (0x0003bc31) cell_cmode_rocker_pane_g2_ParamLimits

0xd4b1,	// (0x0003bc31) cell_cmode_rocker_pane_g2

0x0001,

0xfdc7,	// (0x0003e547) cell_cmode_rocker_pane_g_ParamLimits

0xfdc7,	// (0x0003e547) cell_cmode_rocker_pane_g

0x2057,	// (0x000307d7) bg_button_pane_cp07

0xdc2e,	// (0x0003c3ae) cell_cmode_itu_pane_g1

0xdc37,	// (0x0003c3b7) cell_cmode_itu_pane_t1

0xdc45,	// (0x0003c3c5) cell_cmode_itu_pane_t2

0x0001,

0xfdcc,	// (0x0003e54c) cell_cmode_itu_pane_t

0xd6c9,	// (0x0003be49) aid_touch_ctrl_left

0xd6d1,	// (0x0003be51) aid_touch_ctrl_right

0x2057,	// (0x000307d7) compa_mode_pane

0x0666,	// (0x0002ede6) aid_cmod_rocker_key_size_cp

0x0670,	// (0x0002edf0) aid_cmode_itu_key_size_cp

0xdc53,	// (0x0003c3d3) compa_mode_pane_g1

0xdc5b,	// (0x0003c3db) compa_mode_pane_g2

0xdc63,	// (0x0003c3e3) compa_mode_pane_g3

0x0002,

0xfdd1,	// (0x0003e551) compa_mode_pane_g

0x067a,	// (0x0002edfa) main_comp_mode_itu_pane_cp

0x0682,	// (0x0002ee02) main_comp_mode_rocker_pane_cp

0x068a,	// (0x0002ee0a) cell_cmode_itu_pane_cp_ParamLimits

0x068a,	// (0x0002ee0a) cell_cmode_itu_pane_cp

0x069f,	// (0x0002ee1f) cell_cmode_rocker_pane_cp_ParamLimits

0x069f,	// (0x0002ee1f) cell_cmode_rocker_pane_cp

0x2c93,	// (0x00031413) bg_button_pane_cp06_cp_ParamLimits

0x2c93,	// (0x00031413) bg_button_pane_cp06_cp

0x89a7,	// (0x00037127) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x89a7,	// (0x00037127) cell_cmode_rocker_pane_g1_cp

0x8779,	// (0x00036ef9) cell_cmode_rocker_pane_g2_cp

0x2057,	// (0x000307d7) bg_button_pane_cp07_cp

0x06b1,	// (0x0002ee31) cell_cmode_itu_pane_g1_cp

0x06ba,	// (0x0002ee3a) cell_cmode_itu_pane_t1_cp

0x06c8,	// (0x0002ee48) cell_cmode_itu_pane_t2_cp

0xb747,	// (0x00039ec7) settings_code_pane_cp2

0x23ba,	// (0x00030b3a) bg_popup_window_pane_cp3_ParamLimits

0x28e7,	// (0x00031067) heading_pane_cp3_ParamLimits

0x28f3,	// (0x00031073) listscroll_popup_graphic_pane_ParamLimits

0xb9f4,	// (0x0003a174) fep_hwr_aid_pane_ParamLimits

0xc399,	// (0x0003ab19) aid_touch_sctrl_top_ParamLimits

0xc3b4,	// (0x0003ab34) sctrl_sk_top_pane_g1_ParamLimits

0xbc39,	// (0x0003a3b9) sctrl_sk_top_pane_g2_ParamLimits

0xfd07,	// (0x0003e487) sctrl_sk_top_pane_g_ParamLimits

0xc3c1,	// (0x0003ab41) sctrl_sk_top_pane_t1_ParamLimits

0xc399,	// (0x0003ab19) aid_touch_sctrl_bottom_ParamLimits

0xc3c1,	// (0x0003ab41) sctrl_sk_bottom_pane_t1_ParamLimits

0xd613,	// (0x0003bd93) aid_area_touch_clock

0xc587,	// (0x0003ad07) aid_vkb2_area_top_pane_cell_ParamLimits

0xc587,	// (0x0003ad07) aid_vkb2_area_top_pane_cell

0xc6b2,	// (0x0003ae32) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc6b2,	// (0x0003ae32) aid_vkb2_area_bottom_pane_cell

0xdb60,	// (0x0003c2e0) popup_char_count_window

0xdc6b,	// (0x0003c3eb) popup_char_count_window_g1

0xdc74,	// (0x0003c3f4) popup_char_count_window_g2

0xdc7d,	// (0x0003c3fd) popup_char_count_window_g3

0x0002,

0xfdd8,	// (0x0003e558) popup_char_count_window_g

0xdc86,	// (0x0003c406) popup_char_count_window_t1

0xc475,	// (0x0003abf5) popup_fep_char_preview_window_ParamLimits

0xc475,	// (0x0003abf5) popup_fep_char_preview_window

0xc5a5,	// (0x0003ad25) vkb2_top_candi_pane_ParamLimits

0xc5a5,	// (0x0003ad25) vkb2_top_candi_pane

0x06d6,	// (0x0002ee56) cell_vkb2_top_candi_pane_ParamLimits

0x06d6,	// (0x0002ee56) cell_vkb2_top_candi_pane

0xc973,	// (0x0003b0f3) bg_popup_fep_char_preview_window_ParamLimits

0xc973,	// (0x0003b0f3) bg_popup_fep_char_preview_window

0xc981,	// (0x0003b101) popup_fep_char_preview_window_t1_ParamLimits

0xc981,	// (0x0003b101) popup_fep_char_preview_window_t1

0xdc94,	// (0x0003c414) bg_popup_fep_char_preview_window_g1

0xdc9c,	// (0x0003c41c) bg_popup_fep_char_preview_window_g2

0xdca4,	// (0x0003c424) bg_popup_fep_char_preview_window_g3

0xdcac,	// (0x0003c42c) bg_popup_fep_char_preview_window_g4

0xdcb4,	// (0x0003c434) bg_popup_fep_char_preview_window_g5

0xc9bb,	// (0x0003b13b) bg_popup_fep_char_preview_window_g6

0xdcbc,	// (0x0003c43c) bg_popup_fep_char_preview_window_g7

0xdcc4,	// (0x0003c444) bg_popup_fep_char_preview_window_g8

0xdccc,	// (0x0003c44c) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddf,	// (0x0003e55f) bg_popup_fep_char_preview_window_g

0xbc39,	// (0x0003a3b9) cell_vkb2_top_candi_pane_g1_ParamLimits

0xbc39,	// (0x0003a3b9) cell_vkb2_top_candi_pane_g1

0xbc47,	// (0x0003a3c7) cell_vkb2_top_candi_pane_g2_ParamLimits

0xbc47,	// (0x0003a3c7) cell_vkb2_top_candi_pane_g2

0xce21,	// (0x0003b5a1) cell_vkb2_top_candi_pane_g3_ParamLimits

0xce21,	// (0x0003b5a1) cell_vkb2_top_candi_pane_g3

0xc9c3,	// (0x0003b143) cell_vkb2_top_candi_pane_g4_ParamLimits

0xc9c3,	// (0x0003b143) cell_vkb2_top_candi_pane_g4

0x8bf7,	// (0x00037377) cell_vkb2_top_candi_pane_g5_ParamLimits

0x8bf7,	// (0x00037377) cell_vkb2_top_candi_pane_g5

0xc9e4,	// (0x0003b164) cell_vkb2_top_candi_pane_g6_ParamLimits

0xc9e4,	// (0x0003b164) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf2,	// (0x0003e572) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf2,	// (0x0003e572) cell_vkb2_top_candi_pane_g

0xc9f2,	// (0x0003b172) cell_vkb2_top_candi_pane_t1

0xb587,	// (0x00039d07) aid_size_touch_slider_mark_ParamLimits

0xb587,	// (0x00039d07) aid_size_touch_slider_mark

0x04a5,	// (0x0002ec25) grid_graphic2_catg_pane_ParamLimits

0x04a5,	// (0x0002ec25) grid_graphic2_catg_pane

0x0505,	// (0x0002ec85) popup_grid_graphic2_window_t1_ParamLimits

0x0505,	// (0x0002ec85) popup_grid_graphic2_window_t1

0x0517,	// (0x0002ec97) popup_grid_graphic2_window_t2_ParamLimits

0x0517,	// (0x0002ec97) popup_grid_graphic2_window_t2

0x0001,

0xfdad,	// (0x0003e52d) popup_grid_graphic2_window_t_ParamLimits

0xfdad,	// (0x0003e52d) popup_grid_graphic2_window_t

0x2c93,	// (0x00031413) bg_button_pane_cp05_ParamLimits

0x0659,	// (0x0002edd9) cell_graphic2_control_pane_g1_ParamLimits

0x0788,	// (0x0002ef08) cell_graphic2_catg_pane_ParamLimits

0x0788,	// (0x0002ef08) cell_graphic2_catg_pane

0x2057,	// (0x000307d7) bg_button_pane_cp12

0x079a,	// (0x0002ef1a) cell_graphic2_catg_pane_g1

0xd5df,	// (0x0003bd5f) cell_tb_ext_pane_t1_ParamLimits

0xc7bd,	// (0x0003af3d) vkb2_top_cell_right_narrow_pane_ParamLimits

0xc7bd,	// (0x0003af3d) vkb2_top_cell_right_narrow_pane

0xc7d5,	// (0x0003af55) vkb2_top_cell_right_wide_pane_ParamLimits

0xc7d5,	// (0x0003af55) vkb2_top_cell_right_wide_pane

0xb9e6,	// (0x0003a166) bg_vkb2_func_pane_ParamLimits

0xb9e6,	// (0x0003a166) bg_vkb2_func_pane

0xc846,	// (0x0003afc6) vkb2_top_cell_left_pane_g1_ParamLimits

0xb9e6,	// (0x0003a166) bg_vkb2_fuc_pane_cp03_ParamLimits

0xb9e6,	// (0x0003a166) bg_vkb2_fuc_pane_cp03

0xc8a4,	// (0x0003b024) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x6900,	// (0x00035080) bg_vkb2_func_pane_g1

0x68f8,	// (0x00035078) bg_vkb2_func_pane_g2

0x6908,	// (0x00035088) bg_vkb2_func_pane_g3

0x6910,	// (0x00035090) bg_vkb2_func_pane_g4

0x6918,	// (0x00035098) bg_vkb2_func_pane_g5

0x6920,	// (0x000350a0) bg_vkb2_func_pane_g6

0x6930,	// (0x000350b0) bg_vkb2_func_pane_g7

0x6928,	// (0x000350a8) bg_vkb2_func_pane_g8

0x68f0,	// (0x00035070) bg_vkb2_func_pane_g9

0x0008,

0xfdff,	// (0x0003e57f) bg_vkb2_func_pane_g

0xb9e6,	// (0x0003a166) bg_vkb2_fuc_pane_cp01_ParamLimits

0xb9e6,	// (0x0003a166) bg_vkb2_fuc_pane_cp01

0xc846,	// (0x0003afc6) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xc846,	// (0x0003afc6) vkb2_top_cell_right_wide_pane_g1

0xb9e6,	// (0x0003a166) bg_vkb2_fuc_pane_cp02_ParamLimits

0xb9e6,	// (0x0003a166) bg_vkb2_fuc_pane_cp02

0xc8a4,	// (0x0003b024) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xc8a4,	// (0x0003b024) vkb2_top_cell_right_narrow_pane_g1

0xd238,	// (0x0003b9b8) aid_touch_area_decrease_ParamLimits

0xd238,	// (0x0003b9b8) aid_touch_area_decrease

0xd250,	// (0x0003b9d0) aid_touch_area_increase_ParamLimits

0xd250,	// (0x0003b9d0) aid_touch_area_increase

0xd25c,	// (0x0003b9dc) aid_touch_area_mute_ParamLimits

0xd25c,	// (0x0003b9dc) aid_touch_area_mute

0xd278,	// (0x0003b9f8) aid_touch_area_slider_ParamLimits

0xd278,	// (0x0003b9f8) aid_touch_area_slider

0xd35e,	// (0x0003bade) popup_slider_window_g4_ParamLimits

0xd35e,	// (0x0003bade) popup_slider_window_g4

0xd36a,	// (0x0003baea) popup_slider_window_g5_ParamLimits

0xd36a,	// (0x0003baea) popup_slider_window_g5

0xd38c,	// (0x0003bb0c) popup_slider_window_g6_ParamLimits

0xd38c,	// (0x0003bb0c) popup_slider_window_g6

0xd3ca,	// (0x0003bb4a) popup_slider_window_t2_ParamLimits

0xd3ca,	// (0x0003bb4a) popup_slider_window_t2

0x0001,

0xfcfb,	// (0x0003e47b) popup_slider_window_t_ParamLimits

0xfcfb,	// (0x0003e47b) popup_slider_window_t

0xd3e2,	// (0x0003bb62) slider_pane_ParamLimits

0xd3e2,	// (0x0003bb62) slider_pane

0xdcd4,	// (0x0003c454) slider_pane_g1_ParamLimits

0xdcd4,	// (0x0003c454) slider_pane_g1

0xdce8,	// (0x0003c468) slider_pane_g2_ParamLimits

0xdce8,	// (0x0003c468) slider_pane_g2

0xdcfe,	// (0x0003c47e) slider_pane_g3_ParamLimits

0xdcfe,	// (0x0003c47e) slider_pane_g3

0x0003,

0xfe12,	// (0x0003e592) slider_pane_g_ParamLimits

0xfe12,	// (0x0003e592) slider_pane_g

0xad53,	// (0x000394d3) popup_tb_float_extension_window_ParamLimits

0xad53,	// (0x000394d3) popup_tb_float_extension_window

0xdd2a,	// (0x0003c4aa) aid_size_cell_tb_float_ext

0x2057,	// (0x000307d7) bg_popup_sub_window_cp28

0xdd35,	// (0x0003c4b5) grid_tb_float_ext_pane

0xdd3d,	// (0x0003c4bd) cell_tb_float_ext_pane_ParamLimits

0xdd3d,	// (0x0003c4bd) cell_tb_float_ext_pane

0xdd55,	// (0x0003c4d5) cell_tb_float_ext_pane_g1

0xdd5e,	// (0x0003c4de) grid_highlight_pane_cp12

0xbb2f,	// (0x0003a2af) cell_last_hwr_side_pane_ParamLimits

0xbb2f,	// (0x0003a2af) cell_last_hwr_side_pane

0x8779,	// (0x00036ef9) cell_last_hwr_side_pane_g1

0xdd67,	// (0x0003c4e7) cell_last_hwr_side_pane_g2

0x0001,

0xfe1b,	// (0x0003e59b) cell_last_hwr_side_pane_g

0xc77a,	// (0x0003aefa) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc77a,	// (0x0003aefa) vkb2_area_bottom_space_btn_pane

0xbc39,	// (0x0003a3b9) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdbc7,	// (0x0003c347) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xc9f2,	// (0x0003b172) cell_vkb2_top_candi_pane_t1_ParamLimits

0xca08,	// (0x0003b188) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xca08,	// (0x0003b188) vkb2_area_bottom_space_btn_pane_g1

0xca3e,	// (0x0003b1be) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xca3e,	// (0x0003b1be) vkb2_area_bottom_space_btn_pane_g2

0xca74,	// (0x0003b1f4) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xca74,	// (0x0003b1f4) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe20,	// (0x0003e5a0) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe20,	// (0x0003e5a0) vkb2_area_bottom_space_btn_pane_g

0xbaa3,	// (0x0003a223) cel_fep_hwr_func_pane_ParamLimits

0xbaa3,	// (0x0003a223) cel_fep_hwr_func_pane

0xbadf,	// (0x0003a25f) cell_hwr_side_button_pane_ParamLimits

0xbadf,	// (0x0003a25f) cell_hwr_side_button_pane

0xd613,	// (0x0003bd93) aid_area_touch_clock_ParamLimits

0x270f,	// (0x00030e8f) bg_uniindi_top_pane_ParamLimits

0xd625,	// (0x0003bda5) uniindi_top_pane_g1_ParamLimits

0xd63b,	// (0x0003bdbb) uniindi_top_pane_g2_ParamLimits

0xd647,	// (0x0003bdc7) uniindi_top_pane_g3_ParamLimits

0xd658,	// (0x0003bdd8) uniindi_top_pane_g4_ParamLimits

0xfd33,	// (0x0003e4b3) uniindi_top_pane_g_ParamLimits

0xd665,	// (0x0003bde5) uniindi_top_pane_t1_ParamLimits

0x270f,	// (0x00030e8f) bg_vkb2_func_pane_cp01_ParamLimits

0x270f,	// (0x00030e8f) bg_vkb2_func_pane_cp01

0xdd70,	// (0x0003c4f0) cel_fep_hwr_func_pane_g1_ParamLimits

0xdd70,	// (0x0003c4f0) cel_fep_hwr_func_pane_g1

0x270f,	// (0x00030e8f) bg_vkb2_func_pane_cp02_ParamLimits

0x270f,	// (0x00030e8f) bg_vkb2_func_pane_cp02

0xdd70,	// (0x0003c4f0) cell_hwr_side_button_pane_g1_ParamLimits

0xdd70,	// (0x0003c4f0) cell_hwr_side_button_pane_g1

0x6814,	// (0x00034f94) status_pane_g4_ParamLimits

0x6814,	// (0x00034f94) status_pane_g4

0x682c,	// (0x00034fac) status_pane_t1

0x8607,	// (0x00036d87) form2_midp_gauge_slider_cont_pane

0x860f,	// (0x00036d8f) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcca1,	// (0x0003b421) form2_midp_gauge_slider_pane_t2_ParamLimits

0xccb3,	// (0x0003b433) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafa,	// (0x0003e27a) form2_midp_gauge_slider_pane_t_ParamLimits

0x8621,	// (0x00036da1) form2_midp_slider_pane_ParamLimits

0xc435,	// (0x0003abb5) aid_size_cell_func_vkb2_ParamLimits

0xc435,	// (0x0003abb5) aid_size_cell_func_vkb2

0xdd16,	// (0x0003c496) slider_pane_g4_ParamLimits

0xdd16,	// (0x0003c496) slider_pane_g4

0xcaba,	// (0x0003b23a) form2_midp_gauge_slider_pane_t2_cp01

0xcac8,	// (0x0003b248) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcac8,	// (0x0003b248) form2_midp_gauge_slider_pane_t3_cp01

0xcae5,	// (0x0003b265) form2_midp_slider_pane_cp01

0x2057,	// (0x000307d7) navi_smil_pane

0xdda0,	// (0x0003c520) navi_smil_pane_g1

0xdda8,	// (0x0003c528) navi_smil_pane_t1

0xdd7e,	// (0x0003c4fe) form2_midp_slider_pane_g1

0xdd87,	// (0x0003c507) form2_midp_slider_pane_g2

0xdd8f,	// (0x0003c50f) form2_midp_slider_pane_g3

0xdd7e,	// (0x0003c4fe) form2_midp_slider_pane_g4

0x0889,	// (0x0002f009) form2_midp_slider_pane_g5

0x0004,

0xfe29,	// (0x0003e5a9) form2_midp_slider_pane_g

0xcaaa,	// (0x0003b22a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xcaaa,	// (0x0003b22a) vkb2_area_bottom_space_btn_pane_g4

0xae94,	// (0x00039614) lc0_navi_pane_ParamLimits

0xae94,	// (0x00039614) lc0_navi_pane

0xaf0a,	// (0x0003968a) lc0_stat_indi_pane_ParamLimits

0xaf0a,	// (0x0003968a) lc0_stat_indi_pane

0xaf21,	// (0x000396a1) ls0_title_pane_ParamLimits

0xaf21,	// (0x000396a1) ls0_title_pane

0x2c93,	// (0x00031413) bg_popup_sub_pane_cp14_ParamLimits

0xd5fa,	// (0x0003bd7a) list_uniindi_pane_ParamLimits

0xd606,	// (0x0003bd86) uniindi_top_pane_ParamLimits

0xd6a1,	// (0x0003be21) list_single_uniindi_pane_g1_ParamLimits

0xd6b4,	// (0x0003be34) list_single_uniindi_pane_t1_ParamLimits

0xcaee,	// (0x0003b26e) lc0_stat_clock_pane_ParamLimits

0xcaee,	// (0x0003b26e) lc0_stat_clock_pane

0x08ac,	// (0x0002f02c) lc0_stat_indi_pane_g1_ParamLimits

0x08ac,	// (0x0002f02c) lc0_stat_indi_pane_g1

0x089f,	// (0x0002f01f) lc0_stat_indi_pane_g2_ParamLimits

0x089f,	// (0x0002f01f) lc0_stat_indi_pane_g2

0x0001,

0xfe34,	// (0x0003e5b4) lc0_stat_indi_pane_g_ParamLimits

0xfe34,	// (0x0003e5b4) lc0_stat_indi_pane_g

0xcafb,	// (0x0003b27b) lc0_uni_indicator_pane_ParamLimits

0xcafb,	// (0x0003b27b) lc0_uni_indicator_pane

0xddb6,	// (0x0003c536) ls0_title_pane_g1_ParamLimits

0xddb6,	// (0x0003c536) ls0_title_pane_g1

0x08c6,	// (0x0002f046) ls0_title_pane_t1_ParamLimits

0x08c6,	// (0x0002f046) ls0_title_pane_t1

0xcb08,	// (0x0003b288) lc0_uni_indicator_pane_g1_ParamLimits

0xcb08,	// (0x0003b288) lc0_uni_indicator_pane_g1

0xddca,	// (0x0003c54a) lc0_stat_clock_pane_t1

0x2057,	// (0x000307d7) main_ai5_pane

0xddd8,	// (0x0003c558) ai5_sk_pane_ParamLimits

0xddd8,	// (0x0003c558) ai5_sk_pane

0x090e,	// (0x0002f08e) cell_ai5_widget_pane_ParamLimits

0x090e,	// (0x0002f08e) cell_ai5_widget_pane

0xdde5,	// (0x0003c565) aid_size_cell_widget_grid

0xddf7,	// (0x0003c577) bg_ai5_widget_pane_ParamLimits

0xddf7,	// (0x0003c577) bg_ai5_widget_pane

0x0983,	// (0x0002f103) cell_ai5_widget_pane_g2

0x0993,	// (0x0002f113) cell_ai5_widget_pane_g3

0x09b2,	// (0x0002f132) cell_ai5_widget_pane_g4

0x09be,	// (0x0002f13e) cell_ai5_widget_pane_g5

0x09ca,	// (0x0002f14a) cell_ai5_widget_pane_g6

0x09d6,	// (0x0002f156) cell_ai5_widget_pane_g7

0x0a1e,	// (0x0002f19e) cell_ai5_widget_pane_t1_ParamLimits

0x0a1e,	// (0x0002f19e) cell_ai5_widget_pane_t1

0x0a3b,	// (0x0002f1bb) cell_ai5_widget_pane_t2_ParamLimits

0x0a3b,	// (0x0002f1bb) cell_ai5_widget_pane_t2

0x0a53,	// (0x0002f1d3) cell_ai5_widget_pane_t3_ParamLimits

0x0a53,	// (0x0002f1d3) cell_ai5_widget_pane_t3

0x0a6b,	// (0x0002f1eb) cell_ai5_widget_pane_t4_ParamLimits

0x0a6b,	// (0x0002f1eb) cell_ai5_widget_pane_t4

0x0a85,	// (0x0002f205) cell_ai5_widget_pane_t5_ParamLimits

0x0a85,	// (0x0002f205) cell_ai5_widget_pane_t5

0xde03,	// (0x0003c583) cell_ai5_widget_pane_t6_ParamLimits

0xde03,	// (0x0003c583) cell_ai5_widget_pane_t6

0xde15,	// (0x0003c595) cell_ai5_widget_pane_t7_ParamLimits

0xde15,	// (0x0003c595) cell_ai5_widget_pane_t7

0x0aa4,	// (0x0002f224) cell_ai5_widget_pane_t8_ParamLimits

0x0aa4,	// (0x0002f224) cell_ai5_widget_pane_t8

0x0009,

0xfe4e,	// (0x0003e5ce) cell_ai5_widget_pane_t_ParamLimits

0xfe4e,	// (0x0003e5ce) cell_ai5_widget_pane_t

0x0aef,	// (0x0002f26f) grid_ai5_widget_pane

0x2c93,	// (0x00031413) highlight_cell_ai5_widget_pane_ParamLimits

0x2c93,	// (0x00031413) highlight_cell_ai5_widget_pane

0x0b03,	// (0x0002f283) ai5_sk_left_pane

0x0b0d,	// (0x0002f28d) ai5_sk_middle_pane

0x0b17,	// (0x0002f297) ai5_sk_right_pane

0xde2e,	// (0x0003c5ae) bg_ai5_widget_pane_g1_ParamLimits

0xde2e,	// (0x0003c5ae) bg_ai5_widget_pane_g1

0xde3a,	// (0x0003c5ba) bg_ai5_widget_pane_g2_ParamLimits

0xde3a,	// (0x0003c5ba) bg_ai5_widget_pane_g2

0xde46,	// (0x0003c5c6) bg_ai5_widget_pane_g3_ParamLimits

0xde46,	// (0x0003c5c6) bg_ai5_widget_pane_g3

0xde52,	// (0x0003c5d2) bg_ai5_widget_pane_g4_ParamLimits

0xde52,	// (0x0003c5d2) bg_ai5_widget_pane_g4

0xde5e,	// (0x0003c5de) bg_ai5_widget_pane_g5_ParamLimits

0xde5e,	// (0x0003c5de) bg_ai5_widget_pane_g5

0xde6a,	// (0x0003c5ea) bg_ai5_widget_pane_g6_ParamLimits

0xde6a,	// (0x0003c5ea) bg_ai5_widget_pane_g6

0xde76,	// (0x0003c5f6) bg_ai5_widget_pane_g7_ParamLimits

0xde76,	// (0x0003c5f6) bg_ai5_widget_pane_g7

0xde82,	// (0x0003c602) bg_ai5_widget_pane_g8_ParamLimits

0xde82,	// (0x0003c602) bg_ai5_widget_pane_g8

0xde8e,	// (0x0003c60e) bg_ai5_widget_pane_g9_ParamLimits

0xde8e,	// (0x0003c60e) bg_ai5_widget_pane_g9

0x0008,

0xfe63,	// (0x0003e5e3) bg_ai5_widget_pane_g_ParamLimits

0xfe63,	// (0x0003e5e3) bg_ai5_widget_pane_g

0xdec0,	// (0x0003c640) cell_shortcut_ai5_widget_pane_ParamLimits

0xdec0,	// (0x0003c640) cell_shortcut_ai5_widget_pane

0x2521,	// (0x00030ca1) bg_cell_shortcut_ai5_widget_pane

0xdecc,	// (0x0003c64c) cell_grid_ai5_widget_pane_g1

0xded5,	// (0x0003c655) highlight_cell_shortcut_ai5_widget_pane

0x6900,	// (0x00035080) ai5_sk_left_pane_g1

0xdedd,	// (0x0003c65d) ai5_sk_left_pane_g2

0xdee5,	// (0x0003c665) ai5_sk_left_pane_g3

0xdeed,	// (0x0003c66d) ai5_sk_left_pane_g4

0x0003,

0xfe76,	// (0x0003e5f6) ai5_sk_left_pane_g

0xdef5,	// (0x0003c675) ai5_sk_left_pane_t1

0x68f8,	// (0x00035078) ai5_sk_right_pane_g1

0xdf03,	// (0x0003c683) ai5_sk_right_pane_g2

0xdf0b,	// (0x0003c68b) ai5_sk_right_pane_g3

0xdf13,	// (0x0003c693) ai5_sk_right_pane_g4

0x0003,

0xfe7f,	// (0x0003e5ff) ai5_sk_right_pane_g

0xdf1b,	// (0x0003c69b) ai5_sk_right_pane_t1

0x68f8,	// (0x00035078) ai5_sk_middle_pane_g1

0x6900,	// (0x00035080) ai5_sk_middle_pane_g2

0x6918,	// (0x00035098) ai5_sk_middle_pane_g3

0xdf0b,	// (0x0003c68b) ai5_sk_middle_pane_g4

0xdee5,	// (0x0003c665) ai5_sk_middle_pane_g5

0xdf29,	// (0x0003c6a9) ai5_sk_middle_pane_g6

0x0b21,	// (0x0002f2a1) ai5_sk_middle_pane_g7

0x0006,

0xfe88,	// (0x0003e608) ai5_sk_middle_pane_g

0xade1,	// (0x00039561) aid_touch_area_size_lc0_ParamLimits

0xade1,	// (0x00039561) aid_touch_area_size_lc0

0xbc68,	// (0x0003a3e8) cell_hwr_candidate_pane_t1_ParamLimits

0x6749,	// (0x00034ec9) aid_touch_navi_pane

0xaff3,	// (0x00039773) status_dt_navi_pane_ParamLimits

0xaff3,	// (0x00039773) status_dt_navi_pane

0xb000,	// (0x00039780) status_dt_sta_pane_ParamLimits

0xb000,	// (0x00039780) status_dt_sta_pane

0x0b29,	// (0x0002f2a9) dt_sta_controll_pane

0x0b36,	// (0x0002f2b6) dt_sta_indi_pane

0x0b47,	// (0x0002f2c7) dt_sta_title_pane

0x270f,	// (0x00030e8f) bg_dt_sta_indi_pane_ParamLimits

0x270f,	// (0x00030e8f) bg_dt_sta_indi_pane

0x0b5a,	// (0x0002f2da) dt_sta_battery_pane

0x0b62,	// (0x0002f2e2) dt_sta_indi_pane_g1

0x0b6b,	// (0x0002f2eb) dt_sta_indi_pane_g2

0x0b74,	// (0x0002f2f4) dt_sta_indi_pane_g3

0x0002,

0xfe97,	// (0x0003e617) dt_sta_indi_pane_g

0x0b7d,	// (0x0002f2fd) dt_sta_signal_pane

0x2c93,	// (0x00031413) bg_dt_sta_title_pane_ParamLimits

0x2c93,	// (0x00031413) bg_dt_sta_title_pane

0x0b86,	// (0x0002f306) dt_sta_title_pane_g1

0x0b8e,	// (0x0002f30e) dt_sta_title_pane_t1_ParamLimits

0x0b8e,	// (0x0002f30e) dt_sta_title_pane_t1

0x2057,	// (0x000307d7) bg_dt_sta_control_pane

0x0ba3,	// (0x0002f323) dt_sta_controll_pane_g1

0x0bac,	// (0x0002f32c) bg_dt_sta_title_pane_g1

0x0bb5,	// (0x0002f335) bg_dt_sta_title_pane_g2

0x0bbe,	// (0x0002f33e) bg_dt_sta_title_pane_g3

0x0002,

0xfe9e,	// (0x0003e61e) bg_dt_sta_title_pane_g

0x8779,	// (0x00036ef9) bg_dt_sta_indi_pane_g1

0x0bc7,	// (0x0002f347) dt_sta_signal_pane_g1

0x0bcf,	// (0x0002f34f) dt_sta_signal_pane_g2

0x0001,

0xfea5,	// (0x0003e625) dt_sta_signal_pane_g

0xdf31,	// (0x0003c6b1) dt_sta_battery_pane_g1

0xdf3a,	// (0x0003c6ba) dt_sta_battery_pane_t1

0x8779,	// (0x00036ef9) bg_dt_sta_control_pane_g1

0x5fb2,	// (0x00034732) fep_china_uni_eep_pane

0x5fba,	// (0x0003473a) fep_china_uni_entry_pane_ParamLimits

0x5fca,	// (0x0003474a) popup_fep_china_uni_window_g1_ParamLimits

0x5fda,	// (0x0003475a) popup_fep_china_uni_window_g2_ParamLimits

0x5fda,	// (0x0003475a) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x0003deba) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x0003deba) popup_fep_china_uni_window_g

0xdf49,	// (0x0003c6c9) fep_china_uni_eep_pane_g1

0xdf51,	// (0x0003c6d1) fep_china_uni_eep_pane_t1

0xdd97,	// (0x0003c517) aid_touch_area_size_smil_player

0x67e7,	// (0x00034f67) lc0_clock_pane

0x6820,	// (0x00034fa0) status_pane_g5_ParamLimits

0x6820,	// (0x00034fa0) status_pane_g5

0xab03,	// (0x00039283) popup_keymap_window

0x6800,	// (0x00034f80) status_icon_pane

0x0993,	// (0x0002f113) cell_ai5_widget_pane_g3_ParamLimits

0x09b2,	// (0x0002f132) cell_ai5_widget_pane_g4_ParamLimits

0x09be,	// (0x0002f13e) cell_ai5_widget_pane_g5_ParamLimits

0x09e2,	// (0x0002f162) cell_ai5_widget_pane_g8_ParamLimits

0x09e2,	// (0x0002f162) cell_ai5_widget_pane_g8

0x09f6,	// (0x0002f176) cell_ai5_widget_pane_g9_ParamLimits

0x09f6,	// (0x0002f176) cell_ai5_widget_pane_g9

0x0a0a,	// (0x0002f18a) cell_ai5_widget_pane_g10_ParamLimits

0x0a0a,	// (0x0002f18a) cell_ai5_widget_pane_g10

0xdf60,	// (0x0003c6e0) status_icon_pane_g1

0x2057,	// (0x000307d7) bg_popup_sub_pane_cp13

0xdf68,	// (0x0003c6e8) popup_keymap_window_t1

0xa90a,	// (0x0003908a) control_pane_g6_ParamLimits

0xa90a,	// (0x0003908a) control_pane_g6

0xa917,	// (0x00039097) control_pane_g7_ParamLimits

0xa917,	// (0x00039097) control_pane_g7

0xa924,	// (0x000390a4) control_pane_g8_ParamLimits

0xa924,	// (0x000390a4) control_pane_g8

0x0b29,	// (0x0002f2a9) dt_sta_controll_pane_ParamLimits

0x0b36,	// (0x0002f2b6) dt_sta_indi_pane_ParamLimits

0x0b47,	// (0x0002f2c7) dt_sta_title_pane_ParamLimits

0x2b6e,	// (0x000312ee) aid_size_touch_scroll_bar_cale

0x9d91,	// (0x00038511) popup_discreet_window_ParamLimits

0x9d91,	// (0x00038511) popup_discreet_window

0x9df5,	// (0x00038575) popup_sk_window

0x6e93,	// (0x00035613) bg_popup_sub_pane_cp28_ParamLimits

0x6e93,	// (0x00035613) bg_popup_sub_pane_cp28

0xdf76,	// (0x0003c6f6) popup_discreet_window_g1_ParamLimits

0xdf76,	// (0x0003c6f6) popup_discreet_window_g1

0xdf96,	// (0x0003c716) popup_discreet_window_t1_ParamLimits

0xdf96,	// (0x0003c716) popup_discreet_window_t1

0xdfb4,	// (0x0003c734) popup_discreet_window_t2_ParamLimits

0xdfb4,	// (0x0003c734) popup_discreet_window_t2

0x0002,

0xfeaa,	// (0x0003e62a) popup_discreet_window_t_ParamLimits

0xfeaa,	// (0x0003e62a) popup_discreet_window_t

0xcb1a,	// (0x0003b29a) popup_sk_window_g1

0xcb23,	// (0x0003b2a3) popup_sk_window_g2

0x0001,

0xfeb1,	// (0x0003e631) popup_sk_window_g

0xe006,	// (0x0003c786) popup_sk_window_t1

0xe014,	// (0x0003c794) popup_sk_window_t1_copy1

0x0983,	// (0x0002f103) cell_ai5_widget_pane_g2_ParamLimits

0x0ab6,	// (0x0002f236) cell_ai5_widget_pane_t9_ParamLimits

0x0ab6,	// (0x0002f236) cell_ai5_widget_pane_t9

0x2057,	// (0x000307d7) main_fep_fshwr2_pane

0x0be9,	// (0x0002f369) aid_fshwr2_btn_pane

0x0bf1,	// (0x0002f371) aid_fshwr2_syb_pane

0x0bf9,	// (0x0002f379) aid_fshwr2_txt_pane

0x0c01,	// (0x0002f381) fshwr2_func_candi_pane

0x0c09,	// (0x0002f389) fshwr2_hwr_syb_pane

0x0c11,	// (0x0002f391) fshwr2_icf_pane

0x2057,	// (0x000307d7) fshwr2_icf_bg_pane

0x0c19,	// (0x0002f399) fshwr2_icf_pane_t1_ParamLimits

0x0c19,	// (0x0002f399) fshwr2_icf_pane_t1

0x8779,	// (0x00036ef9) fshwr2_func_candi_pane_g1

0xe034,	// (0x0003c7b4) fshwr2_func_candi_row_pane_ParamLimits

0xe034,	// (0x0003c7b4) fshwr2_func_candi_row_pane

0x0c30,	// (0x0002f3b0) cell_fshwr2_syb_pane_ParamLimits

0x0c30,	// (0x0002f3b0) cell_fshwr2_syb_pane

0x89a7,	// (0x00037127) fshwr2_hwr_syb_pane_g1_ParamLimits

0x89a7,	// (0x00037127) fshwr2_hwr_syb_pane_g1

0x2057,	// (0x000307d7) bg_popup_call_pane_cp01

0xe045,	// (0x0003c7c5) fshwr2_func_candi_cell_pane_ParamLimits

0xe045,	// (0x0003c7c5) fshwr2_func_candi_cell_pane

0xe070,	// (0x0003c7f0) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe070,	// (0x0003c7f0) fshwr2_func_candi_cell_bg_pane

0xe08a,	// (0x0003c80a) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe08a,	// (0x0003c80a) fshwr2_func_candi_cell_pane_g1

0xe0aa,	// (0x0003c82a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe0aa,	// (0x0003c82a) fshwr2_func_candi_cell_pane_t1

0x2057,	// (0x000307d7) bg_button_pane_cp08

0x63e2,	// (0x00034b62) cell_fshwr2_syb_bg_pane

0x0c47,	// (0x0002f3c7) cell_fshwr2_syb_bg_pane_g1

0x0c4f,	// (0x0002f3cf) cell_fshwr2_syb_bg_pane_t1

0x2c93,	// (0x00031413) main_tmo_pane

0xb4f6,	// (0x00039c76) uni_indicator_pane_g1_ParamLimits

0xb50b,	// (0x00039c8b) uni_indicator_pane_g2_ParamLimits

0xb521,	// (0x00039ca1) uni_indicator_pane_g3_ParamLimits

0x7a04,	// (0x00036184) uni_indicator_pane_g4_ParamLimits

0x7a04,	// (0x00036184) uni_indicator_pane_g4

0x7a18,	// (0x00036198) uni_indicator_pane_g5_ParamLimits

0x7a18,	// (0x00036198) uni_indicator_pane_g5

0x7a2c,	// (0x000361ac) uni_indicator_pane_g6_ParamLimits

0x7a2c,	// (0x000361ac) uni_indicator_pane_g6

0xf932,	// (0x0003e0b2) uni_indicator_pane_g_ParamLimits

0xd21c,	// (0x0003b99c) popup_tmo_note_window_ParamLimits

0xd21c,	// (0x0003b99c) popup_tmo_note_window

0x2057,	// (0x000307d7) fshwr2_bg_pane

0xe09b,	// (0x0003c81b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe09b,	// (0x0003c81b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb6,	// (0x0003e636) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb6,	// (0x0003e636) fshwr2_func_candi_cell_pane_g

0x8779,	// (0x00036ef9) bg_popup_window_pane_cp01

0xe0bd,	// (0x0003c83d) bg_popup_window_pane_g1_cp01

0xe0c6,	// (0x0003c846) bg_popup_window_pane_cp22_ParamLimits

0xe0c6,	// (0x0003c846) bg_popup_window_pane_cp22

0xe0d4,	// (0x0003c854) listscroll_tmo_link_pane_ParamLimits

0xe0d4,	// (0x0003c854) listscroll_tmo_link_pane

0xe114,	// (0x0003c894) popup_tmo_note_window_g1_ParamLimits

0xe114,	// (0x0003c894) popup_tmo_note_window_g1

0xe121,	// (0x0003c8a1) tmo_note_info_pane_ParamLimits

0xe121,	// (0x0003c8a1) tmo_note_info_pane

0x0c5e,	// (0x0002f3de) list_tmo_note_info_pane_g1_ParamLimits

0x0c5e,	// (0x0002f3de) list_tmo_note_info_pane_g1

0xe13b,	// (0x0003c8bb) list_tmo_note_info_pane_g2_ParamLimits

0xe13b,	// (0x0003c8bb) list_tmo_note_info_pane_g2

0x0001,

0xfebb,	// (0x0003e63b) list_tmo_note_info_pane_g_ParamLimits

0xfebb,	// (0x0003e63b) list_tmo_note_info_pane_g

0xe157,	// (0x0003c8d7) list_tmo_note_info_text_pane_ParamLimits

0xe157,	// (0x0003c8d7) list_tmo_note_info_text_pane

0xe199,	// (0x0003c919) list_tmo_link_pane

0xe1a6,	// (0x0003c926) scroll_pane_cp20

0xe1b3,	// (0x0003c933) list_single_tmo_link_pane_ParamLimits

0xe1b3,	// (0x0003c933) list_single_tmo_link_pane

0xe1c3,	// (0x0003c943) list_single_tmo_link_pane_t1

0xe1d1,	// (0x0003c951) list_tmo_note_info_text_pane_t1_ParamLimits

0xe1d1,	// (0x0003c951) list_tmo_note_info_text_pane_t1

0x2d4d,	// (0x000314cd) aid_size_touch_scroll_bar_cp01_ParamLimits

0x2d4d,	// (0x000314cd) aid_size_touch_scroll_bar_cp01

0xed2c,	// (0x0003d4ac) aid_size_touch_slider_marker

0x9de1,	// (0x00038561) popup_settings_window_ParamLimits

0x9de1,	// (0x00038561) popup_settings_window

0xeee2,	// (0x0003d662) popup_candi_list_indi_window

0x6749,	// (0x00034ec9) aid_touch_navi_pane_ParamLimits

0xc36d,	// (0x0003aaed) rs_clock_indi_pane

0xc376,	// (0x0003aaf6) sctrl_sk_bottom_pane_ParamLimits

0xc387,	// (0x0003ab07) sctrl_sk_top_pane_ParamLimits

0xc48f,	// (0x0003ac0f) popup_fep_tooltip_window

0xdde5,	// (0x0003c565) aid_size_cell_widget_grid_ParamLimits

0x0977,	// (0x0002f0f7) cell_ai5_widget_pane_g1_ParamLimits

0x0977,	// (0x0002f0f7) cell_ai5_widget_pane_g1

0x09ca,	// (0x0002f14a) cell_ai5_widget_pane_g6_ParamLimits

0x09d6,	// (0x0002f156) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe39,	// (0x0003e5b9) cell_ai5_widget_pane_g_ParamLimits

0xfe39,	// (0x0003e5b9) cell_ai5_widget_pane_g

0x0ada,	// (0x0002f25a) cell_ai5_widget_pane_t10_ParamLimits

0x0ada,	// (0x0002f25a) cell_ai5_widget_pane_t10

0x0aef,	// (0x0002f26f) grid_ai5_widget_pane_ParamLimits

0xde9a,	// (0x0003c61a) cell_contacts_ai5_widget_pane_ParamLimits

0xde9a,	// (0x0003c61a) cell_contacts_ai5_widget_pane

0xdfc9,	// (0x0003c749) popup_discreet_window_t3_ParamLimits

0xdfc9,	// (0x0003c749) popup_discreet_window_t3

0xe022,	// (0x0003c7a2) popup_fshwr2_char_preview_window_ParamLimits

0xe022,	// (0x0003c7a2) popup_fshwr2_char_preview_window

0x0c75,	// (0x0002f3f5) tmo_note_info_pane_t1

0x0c8a,	// (0x0002f40a) tmo_note_info_pane_t2

0x0c9f,	// (0x0002f41f) tmo_note_info_pane_t3

0xe175,	// (0x0003c8f5) tmo_note_info_pane_t4

0xe187,	// (0x0003c907) tmo_note_info_pane_t5

0x0004,

0xfec0,	// (0x0003e640) tmo_note_info_pane_t

0xe199,	// (0x0003c919) list_tmo_link_pane_ParamLimits

0xe1a6,	// (0x0003c926) scroll_pane_cp20_ParamLimits

0x2057,	// (0x000307d7) bg_popup_fep_char_preview_window_cp01

0xe1ea,	// (0x0003c96a) popup_fshwr2_char_preview_window_t1

0xe1f8,	// (0x0003c978) popup_candi_list_indi_window_g1

0xe201,	// (0x0003c981) bg_cell_contacts_ai5_widget_pane

0xe20d,	// (0x0003c98d) cell_contacts_ai5_widget_pane_g1

0xe221,	// (0x0003c9a1) cell_contacts_ai5_widget_pane_g2

0xe230,	// (0x0003c9b0) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfecb,	// (0x0003e64b) cell_contacts_ai5_widget_pane_g

0xe243,	// (0x0003c9c3) cell_contacts_ai5_widget_pane_t1

0x2c93,	// (0x00031413) highlight_cell_shortcut_ai5_widget_pane_cp01

0x0d17,	// (0x0002f497) settings_container_pane

0x63e2,	// (0x00034b62) listscroll_set_pane_copy1

0x8157,	// (0x000368d7) scroll_pane_cp121_copy1

0xe258,	// (0x0003c9d8) set_content_pane_copy1

0xe260,	// (0x0003c9e0) aid_height_set_list_copy1_ParamLimits

0xe260,	// (0x0003c9e0) aid_height_set_list_copy1

0x7bc5,	// (0x00036345) aid_size_parent_copy1_ParamLimits

0x7bc5,	// (0x00036345) aid_size_parent_copy1

0xe26c,	// (0x0003c9ec) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe26c,	// (0x0003c9ec) button_value_adjust_pane_cp6_copy1

0x5d20,	// (0x000344a0) list_highlight_pane_cp2_copy1_ParamLimits

0x5d20,	// (0x000344a0) list_highlight_pane_cp2_copy1

0x0d23,	// (0x0002f4a3) list_set_pane_copy1_ParamLimits

0x0d23,	// (0x0002f4a3) list_set_pane_copy1

0x0cb4,	// (0x0002f434) main_pane_set_t1_copy1_ParamLimits

0x0cb4,	// (0x0002f434) main_pane_set_t1_copy1

0x0cee,	// (0x0002f46e) main_pane_set_t2_copy1_ParamLimits

0x0cee,	// (0x0002f46e) main_pane_set_t2_copy1

0xe280,	// (0x0003ca00) main_pane_set_t3_copy1

0xe28e,	// (0x0003ca0e) main_pane_set_t4_copy1

0x0d0b,	// (0x0002f48b) set_content_pane_g1_copy1_ParamLimits

0x0d0b,	// (0x0002f48b) set_content_pane_g1_copy1

0xe29c,	// (0x0003ca1c) setting_code_pane_copy1

0xe2a4,	// (0x0003ca24) setting_slider_graphic_pane_copy1

0xe2a4,	// (0x0003ca24) setting_slider_pane_copy1

0xe2a4,	// (0x0003ca24) setting_text_pane_copy1

0xe2a4,	// (0x0003ca24) setting_volume_pane_copy1

0xe2ac,	// (0x0003ca2c) settings_code_pane_cp2_copy1

0xe2b4,	// (0x0003ca34) settings_code_pane_cp_copy1_ParamLimits

0xe2b4,	// (0x0003ca34) settings_code_pane_cp_copy1

0x0db1,	// (0x0002f531) volume_set_pane_copy1

0x0db9,	// (0x0002f539) volume_set_pane_g10_copy1

0x0dc1,	// (0x0002f541) volume_set_pane_g1_copy1

0x0dc9,	// (0x0002f549) volume_set_pane_g2_copy1

0x0dd1,	// (0x0002f551) volume_set_pane_g3_copy1

0x0dd9,	// (0x0002f559) volume_set_pane_g4_copy1

0x0de1,	// (0x0002f561) volume_set_pane_g5_copy1

0x0de9,	// (0x0002f569) volume_set_pane_g6_copy1

0x0df1,	// (0x0002f571) volume_set_pane_g7_copy1

0x0df9,	// (0x0002f579) volume_set_pane_g8_copy1

0x0e01,	// (0x0002f581) volume_set_pane_g9_copy1

0x23ba,	// (0x00030b3a) bg_set_opt_pane_cp_copy1_ParamLimits

0x23ba,	// (0x00030b3a) bg_set_opt_pane_cp_copy1

0x23c8,	// (0x00030b48) setting_slider_pane_t1_copy1_ParamLimits

0x23c8,	// (0x00030b48) setting_slider_pane_t1_copy1

0xe2c8,	// (0x0003ca48) setting_slider_pane_t2_copy1_ParamLimits

0xe2c8,	// (0x0003ca48) setting_slider_pane_t2_copy1

0xe2e1,	// (0x0003ca61) setting_slider_pane_t3_copy1_ParamLimits

0xe2e1,	// (0x0003ca61) setting_slider_pane_t3_copy1

0x240e,	// (0x00030b8e) slider_set_pane_copy1_ParamLimits

0x240e,	// (0x00030b8e) slider_set_pane_copy1

0x2cee,	// (0x0003146e) set_opt_bg_pane_g1_copy2

0x2cf6,	// (0x00031476) set_opt_bg_pane_g2_copy2

0xe2f8,	// (0x0003ca78) set_opt_bg_pane_g3_copy2

0x2d06,	// (0x00031486) set_opt_bg_pane_g4_copy2

0x2d0e,	// (0x0003148e) set_opt_bg_pane_g5_copy2

0x2d16,	// (0x00031496) set_opt_bg_pane_g6_copy2

0x0e09,	// (0x0002f589) set_opt_bg_pane_g7_copy2

0xe300,	// (0x0003ca80) set_opt_bg_pane_g8_copy2

0xe308,	// (0x0003ca88) set_opt_bg_pane_g9_copy2

0x8e2f,	// (0x000375af) aid_size_touch_slider_mark_copy1_ParamLimits

0x8e2f,	// (0x000375af) aid_size_touch_slider_mark_copy1

0x7bd7,	// (0x00036357) slider_set_pane_g1_copy1

0x7be0,	// (0x00036360) slider_set_pane_g2_copy1

0x8e43,	// (0x000375c3) slider_set_pane_g3_copy1_ParamLimits

0x8e43,	// (0x000375c3) slider_set_pane_g3_copy1

0x8e57,	// (0x000375d7) slider_set_pane_g4_copy1_ParamLimits

0x8e57,	// (0x000375d7) slider_set_pane_g4_copy1

0x8e6f,	// (0x000375ef) slider_set_pane_g5_copy1_ParamLimits

0x8e6f,	// (0x000375ef) slider_set_pane_g5_copy1

0x8e43,	// (0x000375c3) slider_set_pane_g6_copy1_ParamLimits

0x8e43,	// (0x000375c3) slider_set_pane_g6_copy1

0x0e11,	// (0x0002f591) slider_set_pane_g7_copy1_ParamLimits

0x0e11,	// (0x0002f591) slider_set_pane_g7_copy1

0x21ae,	// (0x0003092e) bg_set_opt_pane_cp2_copy1

0x2424,	// (0x00030ba4) setting_slider_graphic_pane_g1_copy1

0x0e27,	// (0x0002f5a7) setting_slider_graphic_pane_t1_copy1

0x0e36,	// (0x0002f5b6) setting_slider_graphic_pane_t2_copy1

0x0e45,	// (0x0002f5c5) slider_set_pane_cp_copy1

0xe318,	// (0x0003ca98) input_focus_pane_cp1_copy1

0xe321,	// (0x0003caa1) list_set_text_pane_copy1

0xe329,	// (0x0003caa9) setting_text_pane_g1_copy1

0xf425,	// (0x0003dba5) set_text_pane_t1_copy1

0xe318,	// (0x0003ca98) input_focus_pane_cp2_copy1

0xe329,	// (0x0003caa9) setting_code_pane_g1_copy1

0xe332,	// (0x0003cab2) setting_code_pane_t1_copy1

0x0e4d,	// (0x0002f5cd) list_set_graphic_pane_copy1

0x21ae,	// (0x0003092e) bg_set_opt_pane_cp4_copy1

0xe340,	// (0x0003cac0) list_set_graphic_pane_g1_copy1_ParamLimits

0xe340,	// (0x0003cac0) list_set_graphic_pane_g1_copy1

0xe34c,	// (0x0003cacc) list_set_graphic_pane_g2_copy1

0x615d,	// (0x000348dd) list_set_graphic_pane_t1_copy1_ParamLimits

0x615d,	// (0x000348dd) list_set_graphic_pane_t1_copy1

0x8779,	// (0x00036ef9) rs_clock_indi_pane_g1

0xe354,	// (0x0003cad4) rs_clock_indi_pane_t1

0xe362,	// (0x0003cae2) rs_indi_pane

0xe36a,	// (0x0003caea) rs_indi_pane_g1

0xe373,	// (0x0003caf3) rs_indi_pane_g2

0xe1f8,	// (0x0003c978) rs_indi_pane_g3

0x0002,

0xfed2,	// (0x0003e652) rs_indi_pane_g

0x63e2,	// (0x00034b62) bg_popup_preview_window_pane_cp03

0xe37c,	// (0x0003cafc) popup_fep_tooltip_window_t1

0x9120,	// (0x000378a0) popup_note2_window_g2_ParamLimits

0x9120,	// (0x000378a0) popup_note2_window_g2

0x0001,

0xfc72,	// (0x0003e3f2) popup_note2_window_g_ParamLimits

0xfc72,	// (0x0003e3f2) popup_note2_window_g

0xc1e5,	// (0x0003a965) bg_popup_sub_pane_cp11_ParamLimits

0xc1f2,	// (0x0003a972) cell_ai3_links_pane_g1_ParamLimits

0xc209,	// (0x0003a989) cell_ai3_links_pane_t1

0xf425,	// (0x0003dba5) set_text_pane_t1_copy1_ParamLimits

0x6309,	// (0x00034a89) cell_graphic_popup_pane_cp2_ParamLimits

0x6309,	// (0x00034a89) cell_graphic_popup_pane_cp2

0xe38a,	// (0x0003cb0a) cell_graphic_popup_pane_g1_cp2

0x2a1d,	// (0x0003119d) cell_graphic_popup_pane_g2_cp2

0xe392,	// (0x0003cb12) cell_graphic_popup_pane_g3_cp2

0xe39a,	// (0x0003cb1a) cell_graphic_popup_pane_t2_cp2

0x2a2e,	// (0x000311ae) grid_highlight_pane_cp3_cp2

0x5d7c,	// (0x000344fc) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2c93,	// (0x00031413) main_tmo_pane_ParamLimits

0xd214,	// (0x0003b994) popup_tmo_big_image_note_window

0x0967,	// (0x0002f0e7) cell_ai5_widget_list_pane

0x096f,	// (0x0002f0ef) cell_ai5_widget_lrg_icon_pane

0x0c75,	// (0x0002f3f5) tmo_note_info_pane_t1_ParamLimits

0x0c8a,	// (0x0002f40a) tmo_note_info_pane_t2_ParamLimits

0x0c9f,	// (0x0002f41f) tmo_note_info_pane_t3_ParamLimits

0xe175,	// (0x0003c8f5) tmo_note_info_pane_t4_ParamLimits

0xe187,	// (0x0003c907) tmo_note_info_pane_t5_ParamLimits

0xfec0,	// (0x0003e640) tmo_note_info_pane_t_ParamLimits

0x0d17,	// (0x0002f497) settings_container_pane_ParamLimits

0xe310,	// (0x0003ca90) indicator_popup_pane_cp5

0xe310,	// (0x0003ca90) indicator_popup_pane_cp6

0x0e4d,	// (0x0002f5cd) list_set_graphic_pane_copy1_ParamLimits

0x2057,	// (0x000307d7) bg_popup_window_pane_cp23

0xe3a8,	// (0x0003cb28) popup_tmo_big_image_note_window_g1

0xe3b1,	// (0x0003cb31) popup_tmo_big_image_note_window_t1

0xe3bf,	// (0x0003cb3f) popup_tmo_big_image_note_window_t2

0xe3cd,	// (0x0003cb4d) popup_tmo_big_image_note_window_t3

0x0002,

0xfed9,	// (0x0003e659) popup_tmo_big_image_note_window_t

0x0e61,	// (0x0002f5e1) cell_ai5_widget_lrg_icon_pane_g1

0x0e69,	// (0x0002f5e9) cell_ai5_widget_lrg_icon_pane_t1

0x0e77,	// (0x0002f5f7) cell_ai5_widget_list_row_pane_ParamLimits

0x0e77,	// (0x0002f5f7) cell_ai5_widget_list_row_pane

0x0e90,	// (0x0002f610) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x0e90,	// (0x0002f610) cell_ai5_widget_list_row_pane_g1

0x0e9d,	// (0x0002f61d) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x0e9d,	// (0x0002f61d) cell_ai5_widget_list_row_pane_t1

0x0eb5,	// (0x0002f635) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x0eb5,	// (0x0002f635) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee0,	// (0x0003e660) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee0,	// (0x0003e660) cell_ai5_widget_list_row_pane_t

0x9cba,	// (0x0003843a) main_fep_vtchi_ss_pane

0xe3db,	// (0x0003cb5b) popup_fep_char_pre_window

0xe3e3,	// (0x0003cb63) popup_fep_ituss_window

0xe400,	// (0x0003cb80) popup_fep_vkbss_window

0xe41f,	// (0x0003cb9f) grid_vkbss_keypad_pane_ParamLimits

0xe41f,	// (0x0003cb9f) grid_vkbss_keypad_pane

0xe42f,	// (0x0003cbaf) ituss_keypad_pane

0xe448,	// (0x0003cbc8) aid_vkbss_key_offset_ParamLimits

0xe448,	// (0x0003cbc8) aid_vkbss_key_offset

0xe454,	// (0x0003cbd4) cell_vkbss_key_pane_ParamLimits

0xe454,	// (0x0003cbd4) cell_vkbss_key_pane

0xe46a,	// (0x0003cbea) bg_cell_vkbss_key_g1_ParamLimits

0xe46a,	// (0x0003cbea) bg_cell_vkbss_key_g1

0xe476,	// (0x0003cbf6) cell_vkbss_key_3p_pane_ParamLimits

0xe476,	// (0x0003cbf6) cell_vkbss_key_3p_pane

0xe490,	// (0x0003cc10) cell_vkbss_key_g1_ParamLimits

0xe490,	// (0x0003cc10) cell_vkbss_key_g1

0xe4aa,	// (0x0003cc2a) cell_vkbss_key_t1_ParamLimits

0xe4aa,	// (0x0003cc2a) cell_vkbss_key_t1

0xe4d5,	// (0x0003cc55) cell_ituss_key_pane_ParamLimits

0xe4d5,	// (0x0003cc55) cell_ituss_key_pane

0xe4e5,	// (0x0003cc65) bg_cell_ituss_key_g1_ParamLimits

0xe4e5,	// (0x0003cc65) bg_cell_ituss_key_g1

0xe4f1,	// (0x0003cc71) cell_ituss_key_pane_g1_ParamLimits

0xe4f1,	// (0x0003cc71) cell_ituss_key_pane_g1

0xe4fd,	// (0x0003cc7d) cell_ituss_key_pane_g2_ParamLimits

0xe4fd,	// (0x0003cc7d) cell_ituss_key_pane_g2

0x0001,

0xfee5,	// (0x0003e665) cell_ituss_key_pane_g_ParamLimits

0xfee5,	// (0x0003e665) cell_ituss_key_pane_g

0xe516,	// (0x0003cc96) cell_ituss_key_t1_ParamLimits

0xe516,	// (0x0003cc96) cell_ituss_key_t1

0xe544,	// (0x0003ccc4) cell_ituss_key_t2_ParamLimits

0xe544,	// (0x0003ccc4) cell_ituss_key_t2

0xe575,	// (0x0003ccf5) cell_ituss_key_t3_ParamLimits

0xe575,	// (0x0003ccf5) cell_ituss_key_t3

0xe5a6,	// (0x0003cd26) cell_ituss_key_t4_ParamLimits

0xe5a6,	// (0x0003cd26) cell_ituss_key_t4

0x0003,

0xfeea,	// (0x0003e66a) cell_ituss_key_t_ParamLimits

0xfeea,	// (0x0003e66a) cell_ituss_key_t

0xe5d7,	// (0x0003cd57) cell_vkbss_key_3p_pane_g1

0xe5df,	// (0x0003cd5f) cell_vkbss_key_3p_pane_g2

0xe5e7,	// (0x0003cd67) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef3,	// (0x0003e673) cell_vkbss_key_3p_pane_g

0x2057,	// (0x000307d7) bg_popup_fep_char_preview_window_cp02

0xe5ef,	// (0x0003cd6f) popup_fep_char_pre_window_t1

0x095d,	// (0x0002f0dd) main_ai5_sk_pane

0xe201,	// (0x0003c981) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe20d,	// (0x0003c98d) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe221,	// (0x0003c9a1) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe230,	// (0x0003c9b0) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfecb,	// (0x0003e64b) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe243,	// (0x0003c9c3) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2c93,	// (0x00031413) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x0ec7,	// (0x0002f647) main_ai5_sk_pane_g1

0x6cdd,	// (0x0003545d) popup_query_code_window_g1

0xe3f5,	// (0x0003cb75) popup_fep_vkb_icf_pane

0xe409,	// (0x0003cb89) popup_fep_vtchi_icf_pane

0x2c93,	// (0x00031413) bg_icf_pane

0xe60d,	// (0x0003cd8d) list_vkb_icf_pane

0x2c93,	// (0x00031413) bg_icf_pane_cp01

0xd1d3,	// (0x0003b953) vtchi_icf_list_pane

0xe62d,	// (0x0003cdad) list_vkb_icf_pane_t1_ParamLimits

0xe62d,	// (0x0003cdad) list_vkb_icf_pane_t1

0xe644,	// (0x0003cdc4) vtchi_icf_list_pane_t1_ParamLimits

0xe644,	// (0x0003cdc4) vtchi_icf_list_pane_t1

0xe3e3,	// (0x0003cb63) popup_fep_ituss_window_ParamLimits

0xe409,	// (0x0003cb89) popup_fep_vtchi_icf_pane_ParamLimits

0xe42f,	// (0x0003cbaf) ituss_keypad_pane_ParamLimits

0xe43f,	// (0x0003cbbf) ituss_sks_pane

0x2c93,	// (0x00031413) bg_icf_pane_ParamLimits

0xe5fe,	// (0x0003cd7e) icf_edit_indi_pane_ParamLimits

0xe5fe,	// (0x0003cd7e) icf_edit_indi_pane

0xe60d,	// (0x0003cd8d) list_vkb_icf_pane_ParamLimits

0x2c93,	// (0x00031413) bg_icf_pane_cp01_ParamLimits

0xe619,	// (0x0003cd99) icf_edit_indi_pane_cp01_ParamLimits

0xe619,	// (0x0003cd99) icf_edit_indi_pane_cp01

0xe625,	// (0x0003cda5) vtchi_query_pane

0x89a7,	// (0x00037127) icf_edit_indi_pane_g1_ParamLimits

0x89a7,	// (0x00037127) icf_edit_indi_pane_g1

0xe65d,	// (0x0003cddd) icf_edit_indi_pane_g2_ParamLimits

0xe65d,	// (0x0003cddd) icf_edit_indi_pane_g2

0x0001,

0xfefa,	// (0x0003e67a) icf_edit_indi_pane_g_ParamLimits

0xfefa,	// (0x0003e67a) icf_edit_indi_pane_g

0xe669,	// (0x0003cde9) icf_edit_indi_pane_t1

0xe677,	// (0x0003cdf7) bg_input_focus_pane_cp042

0xe680,	// (0x0003ce00) vtchi_button_pane

0xe689,	// (0x0003ce09) vtchi_query_pane_t1

0xe697,	// (0x0003ce17) vtchi_query_pane_t2

0xe6a5,	// (0x0003ce25) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0003e67f) vtchi_query_pane_t

0x2057,	// (0x000307d7) bg_button_pane_cp13

0xe6b3,	// (0x0003ce33) vtchi_button_pane_g1

0xd6eb,	// (0x0003be6b) ituss_sks_pane_g1

0xe6bb,	// (0x0003ce3b) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0003e686) ituss_sks_pane_g

0xe6c4,	// (0x0003ce44) ituss_sks_pane_t1

0xe6d2,	// (0x0003ce52) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0003e68b) ituss_sks_pane_t

0x842e,	// (0x00036bae) indicator_nsta_pane_cp_g1

0x8437,	// (0x00036bb7) indicator_nsta_pane_cp_g2

0x843f,	// (0x00036bbf) indicator_nsta_pane_cp_g3

0x8447,	// (0x00036bc7) indicator_nsta_pane_cp_g4

0x844f,	// (0x00036bcf) indicator_nsta_pane_cp_g5

0x8457,	// (0x00036bd7) indicator_nsta_pane_cp_g6

0x0005,

0xfab0,	// (0x0003e230) indicator_nsta_pane_cp_g

0x0646,	// (0x0002edc6) cell_graphic2_pane_t2_ParamLimits

0x0646,	// (0x0002edc6) cell_graphic2_pane_t2

0x0001,

0xfdc2,	// (0x0003e542) cell_graphic2_pane_t_ParamLimits

0xfdc2,	// (0x0003e542) cell_graphic2_pane_t
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
	};

} // end of namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Large
