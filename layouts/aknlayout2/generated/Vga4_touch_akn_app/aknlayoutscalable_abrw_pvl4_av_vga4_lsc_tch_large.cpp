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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00058604 };

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
0x9f97,	// (0x0006259b) Screen

0x9fa3,	// (0x000625a7) application_window_ParamLimits

0x9fa3,	// (0x000625a7) application_window

0x5707,	// (0x0005dd0b) screen_g1

0x9fdb,	// (0x000625df) area_bottom_pane_ParamLimits

0x9fdb,	// (0x000625df) area_bottom_pane

0xefb5,	// (0x000675b9) area_top_pane_ParamLimits

0xefb5,	// (0x000675b9) area_top_pane

0xf053,	// (0x00067657) main_pane_ParamLimits

0xf053,	// (0x00067657) main_pane

0x5711,	// (0x0005dd15) misc_graphics

0xb848,	// (0x00063e4c) battery_pane_ParamLimits

0xb848,	// (0x00063e4c) battery_pane

0x38ff,	// (0x0005bf03) bg_status_flat_pane_g8

0x3907,	// (0x0005bf0b) bg_status_flat_pane_g9

0x2cd3,	// (0x0005b2d7) context_pane_ParamLimits

0x2cd3,	// (0x0005b2d7) context_pane

0xc37e,	// (0x00064982) navi_pane_ParamLimits

0xc37e,	// (0x00064982) navi_pane

0xc406,	// (0x00064a0a) signal_pane_ParamLimits

0xc406,	// (0x00064a0a) signal_pane

0x0008,

0xf852,	// (0x00067e56) bg_status_flat_pane_g

0xc496,	// (0x00064a9a) status_pane_g1_ParamLimits

0xc496,	// (0x00064a9a) status_pane_g1

0xc4ac,	// (0x00064ab0) status_pane_g2_ParamLimits

0xc4ac,	// (0x00064ab0) status_pane_g2

0x2f0a,	// (0x0005b50e) status_pane_g3_ParamLimits

0x2f0a,	// (0x0005b50e) status_pane_g3

0x0004,

0xf77e,	// (0x00067d82) status_pane_g_ParamLimits

0xf77e,	// (0x00067d82) status_pane_g

0xc4b8,	// (0x00064abc) title_pane_ParamLimits

0xc4b8,	// (0x00064abc) title_pane

0xc51b,	// (0x00064b1f) uni_indicator_pane_ParamLimits

0xc51b,	// (0x00064b1f) uni_indicator_pane

0x2b37,	// (0x0005b13b) bg_list_pane_ParamLimits

0x2b37,	// (0x0005b13b) bg_list_pane

0xb082,	// (0x00063686) find_pane

0x3133,	// (0x0005b737) listscroll_app_pane_ParamLimits

0x3133,	// (0x0005b737) listscroll_app_pane

0x2b6b,	// (0x0005b16f) listscroll_form_pane

0xb08a,	// (0x0006368e) listscroll_gen_pane_ParamLimits

0xb08a,	// (0x0006368e) listscroll_gen_pane

0x0355,	// (0x00058959) listscroll_set_pane

0x467a,	// (0x0005cc7e) main_idle_act_pane

0x2830,	// (0x0005ae34) main_idle_trad_pane

0x2830,	// (0x0005ae34) main_list_empty_pane

0x2b5f,	// (0x0005b163) main_midp_pane

0x2b85,	// (0x0005b189) main_pane_g1_ParamLimits

0x2b85,	// (0x0005b189) main_pane_g1

0xb09e,	// (0x000636a2) popup_ai_message_window_ParamLimits

0xb09e,	// (0x000636a2) popup_ai_message_window

0xb13e,	// (0x00063742) popup_fep_china_uni_window_ParamLimits

0xb13e,	// (0x00063742) popup_fep_china_uni_window

0x047f,	// (0x00058a83) popup_fep_japan_candidate_window_ParamLimits

0x047f,	// (0x00058a83) popup_fep_japan_candidate_window

0x04a9,	// (0x00058aad) popup_fep_japan_predictive_window_ParamLimits

0x04a9,	// (0x00058aad) popup_fep_japan_predictive_window

0xb19e,	// (0x000637a2) popup_find_window

0xb1bb,	// (0x000637bf) popup_grid_graphic_window_ParamLimits

0xb1bb,	// (0x000637bf) popup_grid_graphic_window

0x051c,	// (0x00058b20) popup_large_graphic_colour_window

0xb265,	// (0x00063869) popup_menu_window_ParamLimits

0xb265,	// (0x00063869) popup_menu_window

0xb455,	// (0x00063a59) popup_note_image_window

0xb415,	// (0x00063a19) popup_note_wait_window_ParamLimits

0xb415,	// (0x00063a19) popup_note_wait_window

0xb46d,	// (0x00063a71) popup_note_window_ParamLimits

0xb46d,	// (0x00063a71) popup_note_window

0xb51b,	// (0x00063b1f) popup_query_code_window_ParamLimits

0xb51b,	// (0x00063b1f) popup_query_code_window

0x0788,	// (0x00058d8c) popup_query_data_code_window_ParamLimits

0x0788,	// (0x00058d8c) popup_query_data_code_window

0xb55b,	// (0x00063b5f) popup_query_data_window_ParamLimits

0xb55b,	// (0x00063b5f) popup_query_data_window

0xb5ef,	// (0x00063bf3) popup_query_sat_info_window_ParamLimits

0xb5ef,	// (0x00063bf3) popup_query_sat_info_window

0xb69a,	// (0x00063c9e) popup_snote_single_graphic_window_ParamLimits

0xb69a,	// (0x00063c9e) popup_snote_single_graphic_window

0xb69a,	// (0x00063c9e) popup_snote_single_text_window_ParamLimits

0xb69a,	// (0x00063c9e) popup_snote_single_text_window

0x0823,	// (0x00058e27) popup_sub_window_general

0x0969,	// (0x00058f6d) popup_window_general_ParamLimits

0x0969,	// (0x00058f6d) popup_window_general

0x2b93,	// (0x0005b197) power_save_pane

0x01f8,	// (0x000587fc) control_pane_g1_ParamLimits

0x01f8,	// (0x000587fc) control_pane_g1

0x021b,	// (0x0005881f) control_pane_g2_ParamLimits

0x021b,	// (0x0005881f) control_pane_g2

0x2afa,	// (0x0005b0fe) control_pane_g3_ParamLimits

0x2afa,	// (0x0005b0fe) control_pane_g3

0x0007,

0xf766,	// (0x00067d6a) control_pane_g_ParamLimits

0xf766,	// (0x00067d6a) control_pane_g

0xaf99,	// (0x0006359d) control_pane_t1_ParamLimits

0xaf99,	// (0x0006359d) control_pane_t1

0xafe9,	// (0x000635ed) control_pane_t2_ParamLimits

0xafe9,	// (0x000635ed) control_pane_t2

0x0002,

0xf777,	// (0x00067d7b) control_pane_t_ParamLimits

0xf777,	// (0x00067d7b) control_pane_t

0x2a1f,	// (0x0005b023) navi_navi_volume_pane_cp1

0x2a27,	// (0x0005b02b) status_small_icon_pane

0x2a2f,	// (0x0005b033) status_small_pane_g1_ParamLimits

0x2a2f,	// (0x0005b033) status_small_pane_g1

0x2a63,	// (0x0005b067) status_small_pane_g2_ParamLimits

0x2a63,	// (0x0005b067) status_small_pane_g2

0x2a6f,	// (0x0005b073) status_small_pane_g3_ParamLimits

0x2a6f,	// (0x0005b073) status_small_pane_g3

0xaf4b,	// (0x0006354f) status_small_pane_g4_ParamLimits

0xaf4b,	// (0x0006354f) status_small_pane_g4

0xaf59,	// (0x0006355d) status_small_pane_g5_ParamLimits

0xaf59,	// (0x0006355d) status_small_pane_g5

0x2a95,	// (0x0005b099) status_small_pane_g6_ParamLimits

0x2a95,	// (0x0005b099) status_small_pane_g6

0x0007,

0xf755,	// (0x00067d59) status_small_pane_g_ParamLimits

0xf755,	// (0x00067d59) status_small_pane_g

0x2ac4,	// (0x0005b0c8) status_small_pane_t1

0xaf6f,	// (0x00063573) status_small_wait_pane_ParamLimits

0xaf6f,	// (0x00063573) status_small_wait_pane

0xad7f,	// (0x00063383) aid_levels_signal_ParamLimits

0xad7f,	// (0x00063383) aid_levels_signal

0xad97,	// (0x0006339b) signal_pane_g1_ParamLimits

0xad97,	// (0x0006339b) signal_pane_g1

0xadb2,	// (0x000633b6) signal_pane_g2_ParamLimits

0xadb2,	// (0x000633b6) signal_pane_g2

0x0003,

0xf6e6,	// (0x00067cea) signal_pane_g_ParamLimits

0xf6e6,	// (0x00067cea) signal_pane_g

0x22ff,	// (0x0005a903) context_pane_g1

0xa185,	// (0x00062789) title_pane_g1

0xa1c8,	// (0x000627cc) title_pane_t1

0x5727,	// (0x0005dd2b) title_pane_t2

0x574d,	// (0x0005dd51) title_pane_t3

0x0002,

0xf530,	// (0x00067b34) title_pane_t

0xc543,	// (0x00064b47) aid_levels_battery_ParamLimits

0xc543,	// (0x00064b47) aid_levels_battery

0xc55f,	// (0x00064b63) battery_pane_g1_ParamLimits

0xc55f,	// (0x00064b63) battery_pane_g1

0xc57c,	// (0x00064b80) battery_pane_g2_ParamLimits

0xc57c,	// (0x00064b80) battery_pane_g2

0x0001,

0xf789,	// (0x00067d8d) battery_pane_g_ParamLimits

0xf789,	// (0x00067d8d) battery_pane_g

0xc7ae,	// (0x00064db2) uni_indicator_pane_g1

0xc7c4,	// (0x00064dc8) uni_indicator_pane_g2

0xc7da,	// (0x00064dde) uni_indicator_pane_g3

0x0005,

0xf8fa,	// (0x00067efe) uni_indicator_pane_g

0x268f,	// (0x0005ac93) navi_icon_pane_ParamLimits

0x268f,	// (0x0005ac93) navi_icon_pane

0x25e2,	// (0x0005abe6) navi_midp_pane

0x26ab,	// (0x0005acaf) navi_navi_pane

0x26b5,	// (0x0005acb9) navi_text_pane_ParamLimits

0x26b5,	// (0x0005acb9) navi_text_pane

0x5707,	// (0x0005dd0b) status_small_wait_pane_g1

0x91c3,	// (0x000617c7) status_small_wait_pane_g2

0x0001,

0xf8f5,	// (0x00067ef9) status_small_wait_pane_g

0xc74d,	// (0x00064d51) navi_navi_icon_text_pane

0xc755,	// (0x00064d59) navi_navi_pane_g1_ParamLimits

0xc755,	// (0x00064d59) navi_navi_pane_g1

0xc767,	// (0x00064d6b) navi_navi_pane_g2_ParamLimits

0xc767,	// (0x00064d6b) navi_navi_pane_g2

0x0001,

0xf8c3,	// (0x00067ec7) navi_navi_pane_g_ParamLimits

0xf8c3,	// (0x00067ec7) navi_navi_pane_g

0x4176,	// (0x0005c77a) navi_navi_tabs_pane

0xc779,	// (0x00064d7d) navi_navi_text_pane

0xc74d,	// (0x00064d51) navi_navi_volume_pane

0xc73b,	// (0x00064d3f) navi_text_pane_t1

0xc72f,	// (0x00064d33) navi_icon_pane_g1

0x406d,	// (0x0005c671) navi_navi_text_pane_t1

0xb984,	// (0x00063f88) navi_navi_volume_pane_g1

0xb98c,	// (0x00063f90) volume_small_pane

0xc68b,	// (0x00064c8f) navi_navi_icon_text_pane_g1

0xc693,	// (0x00064c97) navi_navi_icon_text_pane_t1

0x26ab,	// (0x0005acaf) navi_tabs_2_long_pane

0x26ab,	// (0x0005acaf) navi_tabs_2_pane

0x26ab,	// (0x0005acaf) navi_tabs_3_long_pane

0x26ab,	// (0x0005acaf) navi_tabs_3_pane

0x26ab,	// (0x0005acaf) navi_tabs_4_pane

0x0c25,	// (0x00059229) tabs_2_active_pane_ParamLimits

0x0c25,	// (0x00059229) tabs_2_active_pane

0x0c35,	// (0x00059239) tabs_2_passive_pane_ParamLimits

0x0c35,	// (0x00059239) tabs_2_passive_pane

0x0bf3,	// (0x000591f7) tabs_3_active_pane_ParamLimits

0x0bf3,	// (0x000591f7) tabs_3_active_pane

0x0c03,	// (0x00059207) tabs_3_passive_pane_ParamLimits

0x0c03,	// (0x00059207) tabs_3_passive_pane

0x0c14,	// (0x00059218) tabs_3_passive_pane_cp_ParamLimits

0x0c14,	// (0x00059218) tabs_3_passive_pane_cp

0x0ba7,	// (0x000591ab) tabs_4_active_pane_ParamLimits

0x0ba7,	// (0x000591ab) tabs_4_active_pane

0x0bba,	// (0x000591be) tabs_4_passive_pane_ParamLimits

0x0bba,	// (0x000591be) tabs_4_passive_pane

0x0bcb,	// (0x000591cf) tabs_4_passive_pane_cp_ParamLimits

0x0bcb,	// (0x000591cf) tabs_4_passive_pane_cp

0x0bdc,	// (0x000591e0) tabs_4_passive_pane_cp2_ParamLimits

0x0bdc,	// (0x000591e0) tabs_4_passive_pane_cp2

0x0b83,	// (0x00059187) tabs_2_long_active_pane_ParamLimits

0x0b83,	// (0x00059187) tabs_2_long_active_pane

0x0b95,	// (0x00059199) tabs_2_long_passive_pane_ParamLimits

0x0b95,	// (0x00059199) tabs_2_long_passive_pane

0x0b44,	// (0x00059148) tabs_3_long_active_pane_ParamLimits

0x0b44,	// (0x00059148) tabs_3_long_active_pane

0x0b57,	// (0x0005915b) tabs_3_long_passive_pane_ParamLimits

0x0b57,	// (0x0005915b) tabs_3_long_passive_pane

0x0b70,	// (0x00059174) tabs_3_long_passive_pane_cp_ParamLimits

0x0b70,	// (0x00059174) tabs_3_long_passive_pane_cp

0x0aea,	// (0x000590ee) volume_small_pane_g1

0xb933,	// (0x00063f37) volume_small_pane_g2

0xb93c,	// (0x00063f40) volume_small_pane_g3

0xb945,	// (0x00063f49) volume_small_pane_g4

0xb94e,	// (0x00063f52) volume_small_pane_g5

0xb957,	// (0x00063f5b) volume_small_pane_g6

0xb960,	// (0x00063f64) volume_small_pane_g7

0xb969,	// (0x00063f6d) volume_small_pane_g8

0xb972,	// (0x00063f76) volume_small_pane_g9

0xb97b,	// (0x00063f7f) volume_small_pane_g10

0x0009,

0xf88f,	// (0x00067e93) volume_small_pane_g

0x579b,	// (0x0005dd9f) bg_active_tab_pane_cp2_ParamLimits

0x579b,	// (0x0005dd9f) bg_active_tab_pane_cp2

0xa254,	// (0x00062858) tabs_3_active_pane_g1

0xa25c,	// (0x00062860) tabs_3_active_pane_t1

0x579b,	// (0x0005dd9f) bg_passive_tab_pane_cp2_ParamLimits

0x579b,	// (0x0005dd9f) bg_passive_tab_pane_cp2

0xa254,	// (0x00062858) tabs_3_passive_pane_g1

0xa25c,	// (0x00062860) tabs_3_passive_pane_t1

0x579b,	// (0x0005dd9f) bg_active_tab_pane_cp3_ParamLimits

0x579b,	// (0x0005dd9f) bg_active_tab_pane_cp3

0xa26e,	// (0x00062872) tabs_4_active_pane_g1

0xa276,	// (0x0006287a) tabs_4_active_pane_t1

0x579b,	// (0x0005dd9f) bg_passive_tab_pane_cp3_ParamLimits

0x579b,	// (0x0005dd9f) bg_passive_tab_pane_cp3

0xa26e,	// (0x00062872) tabs_4_1_passive_pane_g1

0xa276,	// (0x0006287a) tabs_4_1_passive_pane_t1

0x2b5f,	// (0x0005b163) list_highlight_pane_cp2

0xc86d,	// (0x00064e71) list_set_pane_ParamLimits

0xc86d,	// (0x00064e71) list_set_pane

0xc92f,	// (0x00064f33) main_pane_set_t1_ParamLimits

0xc92f,	// (0x00064f33) main_pane_set_t1

0xc94f,	// (0x00064f53) main_pane_set_t2_ParamLimits

0xc94f,	// (0x00064f53) main_pane_set_t2

0xc963,	// (0x00064f67) main_pane_set_t3_ParamLimits

0xc963,	// (0x00064f67) main_pane_set_t3

0xc977,	// (0x00064f7b) main_pane_set_t4_ParamLimits

0xc977,	// (0x00064f7b) main_pane_set_t4

0x0003,

0xf95f,	// (0x00067f63) main_pane_set_t_ParamLimits

0xf95f,	// (0x00067f63) main_pane_set_t

0xc98b,	// (0x00064f8f) setting_code_pane

0x47c8,	// (0x0005cdcc) setting_slider_graphic_pane

0x47c8,	// (0x0005cdcc) setting_slider_pane

0x47c8,	// (0x0005cdcc) setting_text_pane

0x47c8,	// (0x0005cdcc) setting_volume_pane

0xf162,	// (0x00067766) volume_set_pane

0x575f,	// (0x0005dd63) bg_set_opt_pane_cp

0xf16c,	// (0x00067770) setting_slider_pane_t1

0xf185,	// (0x00067789) setting_slider_pane_t2

0xf19f,	// (0x000677a3) setting_slider_pane_t3

0x0002,

0xf537,	// (0x00067b3b) setting_slider_pane_t

0xf1b7,	// (0x000677bb) slider_set_pane

0x5711,	// (0x0005dd15) bg_set_opt_pane_cp2

0x576d,	// (0x0005dd71) setting_slider_graphic_pane_g1

0xf1cd,	// (0x000677d1) setting_slider_graphic_pane_t1

0xf1dd,	// (0x000677e1) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x00067b42) setting_slider_graphic_pane_t

0xf1ed,	// (0x000677f1) slider_set_pane_cp

0x5711,	// (0x0005dd15) input_focus_pane_cp1

0x4661,	// (0x0005cc65) list_set_text_pane

0x5707,	// (0x0005dd0b) setting_text_pane_g1

0x5711,	// (0x0005dd15) input_focus_pane_cp2

0x5707,	// (0x0005dd0b) setting_code_pane_g1

0x5776,	// (0x0005dd7a) setting_code_pane_t1

0xdd0d,	// (0x00066311) set_text_pane_t1_ParamLimits

0xdd0d,	// (0x00066311) set_text_pane_t1

0x955c,	// (0x00061b60) set_opt_bg_pane_g1

0x9564,	// (0x00061b68) set_opt_bg_pane_g2

0x4639,	// (0x0005cc3d) set_opt_bg_pane_g3

0x9574,	// (0x00061b78) set_opt_bg_pane_g4

0x957c,	// (0x00061b80) set_opt_bg_pane_g5

0x9584,	// (0x00061b88) set_opt_bg_pane_g6

0x4643,	// (0x0005cc47) set_opt_bg_pane_g7

0x464d,	// (0x0005cc51) set_opt_bg_pane_g8

0x4657,	// (0x0005cc5b) set_opt_bg_pane_g9

0x0008,

0xf94c,	// (0x00067f50) set_opt_bg_pane_g

0x462c,	// (0x0005cc30) slider_set_pane_g1

0x0cf6,	// (0x000592fa) slider_set_pane_g2

0x0006,

0xf93d,	// (0x00067f41) slider_set_pane_g

0x0c56,	// (0x0005925a) volume_set_pane_g1

0x0c60,	// (0x00059264) volume_set_pane_g2

0x0c6a,	// (0x0005926e) volume_set_pane_g3

0x0c74,	// (0x00059278) volume_set_pane_g4

0x0c7e,	// (0x00059282) volume_set_pane_g5

0x0c88,	// (0x0005928c) volume_set_pane_g6

0x0c92,	// (0x00059296) volume_set_pane_g7

0x0c9c,	// (0x000592a0) volume_set_pane_g8

0x0ca6,	// (0x000592aa) volume_set_pane_g9

0x0cb0,	// (0x000592b4) volume_set_pane_g10

0x0009,

0xf915,	// (0x00067f19) volume_set_pane_g

0xa288,	// (0x0006288c) indicator_pane_ParamLimits

0xa288,	// (0x0006288c) indicator_pane

0xa2b4,	// (0x000628b8) main_idle_pane_g2_ParamLimits

0xa2b4,	// (0x000628b8) main_idle_pane_g2

0xa2ec,	// (0x000628f0) main_pane_idle_g1_ParamLimits

0xa2ec,	// (0x000628f0) main_pane_idle_g1

0x5784,	// (0x0005dd88) popup_clock_digital_analogue_window_ParamLimits

0x5784,	// (0x0005dd88) popup_clock_digital_analogue_window

0xa316,	// (0x0006291a) soft_indicator_pane_ParamLimits

0xa316,	// (0x0006291a) soft_indicator_pane

0xa332,	// (0x00062936) wallpaper_pane_ParamLimits

0xa332,	// (0x00062936) wallpaper_pane

0x5707,	// (0x0005dd0b) wallpaper_pane_g1

0xa344,	// (0x00062948) indicator_pane_g1_ParamLimits

0xa344,	// (0x00062948) indicator_pane_g1

0x4a94,	// (0x0005d098) navi_navi_icon_text_pane_srt_g1

0x8c71,	// (0x00061275) soft_indicator_pane_t1

0x8c8b,	// (0x0006128f) aid_ps_area_pane

0xa35d,	// (0x00062961) aid_ps_clock_pane

0x8c9c,	// (0x000612a0) aid_ps_indicator_pane

0x8ca8,	// (0x000612ac) indicator_ps_pane_ParamLimits

0x8ca8,	// (0x000612ac) indicator_ps_pane

0x8cb7,	// (0x000612bb) power_save_pane_g1_ParamLimits

0x8cb7,	// (0x000612bb) power_save_pane_g1

0x8cc3,	// (0x000612c7) power_save_pane_g2_ParamLimits

0x8cc3,	// (0x000612c7) power_save_pane_g2

0xef46,	// (0x0006754a) aid_navinavi_width_pane

0x8c8b,	// (0x0006128f) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x00067b47) power_save_pane_g_ParamLimits

0xf543,	// (0x00067b47) power_save_pane_g

0x8cd1,	// (0x000612d5) power_save_pane_t1_ParamLimits

0x8cd1,	// (0x000612d5) power_save_pane_t1

0xa35d,	// (0x00062961) aid_ps_clock_pane_ParamLimits

0x8c9c,	// (0x000612a0) aid_ps_indicator_pane_ParamLimits

0x8ce3,	// (0x000612e7) power_save_pane_t4_ParamLimits

0x8ce3,	// (0x000612e7) power_save_pane_t4

0x0001,

0xf548,	// (0x00067b4c) power_save_pane_t_ParamLimits

0xf548,	// (0x00067b4c) power_save_pane_t

0x8d0d,	// (0x00061311) power_save_t3_ParamLimits

0x8d0d,	// (0x00061311) power_save_t3

0x8cf8,	// (0x000612fc) power_save_t2_ParamLimits

0x8cf8,	// (0x000612fc) power_save_t2

0x8d22,	// (0x00061326) indicator_ps_pane_g1

0xa36b,	// (0x0006296f) ai_gene_pane_ParamLimits

0xa36b,	// (0x0006296f) ai_gene_pane

0xa382,	// (0x00062986) ai_links_pane_ParamLimits

0xa382,	// (0x00062986) ai_links_pane

0xa39a,	// (0x0006299e) indicator_pane_cp1_ParamLimits

0xa39a,	// (0x0006299e) indicator_pane_cp1

0xa3a9,	// (0x000629ad) main_pane_idle_g1_cp_ParamLimits

0xa3a9,	// (0x000629ad) main_pane_idle_g1_cp

0x8d2b,	// (0x0006132f) popup_ai_links_title_window

0xa3c1,	// (0x000629c5) soft_indicator_pane_cp1_ParamLimits

0xa3c1,	// (0x000629c5) soft_indicator_pane_cp1

0x4425,	// (0x0005ca29) ai_links_pane_g1

0x442e,	// (0x0005ca32) grid_ai_links_pane

0xc7a5,	// (0x00064da9) ai_gene_pane_1

0x4413,	// (0x0005ca17) ai_gene_pane_2

0x441c,	// (0x0005ca20) list_highlight_pane_cp4

0xc781,	// (0x00064d85) cell_ai_link_pane_ParamLimits

0xc781,	// (0x00064d85) cell_ai_link_pane

0x43e2,	// (0x0005c9e6) cell_ai_link_pane_g1

0x91c3,	// (0x000617c7) cell_ai_link_pane_g2

0x0001,

0xf8f0,	// (0x00067ef4) cell_ai_link_pane_g

0x5711,	// (0x0005dd15) grid_highlight_cp2

0x5711,	// (0x0005dd15) bg_popup_sub_pane_cp1

0x8d42,	// (0x00061346) popup_ai_links_title_window_t1

0x432e,	// (0x0005c932) ai_gene_pane_1_g1_ParamLimits

0x432e,	// (0x0005c932) ai_gene_pane_1_g1

0x433a,	// (0x0005c93e) ai_gene_pane_1_g2_ParamLimits

0x433a,	// (0x0005c93e) ai_gene_pane_1_g2

0x0001,

0xf8e6,	// (0x00067eea) ai_gene_pane_1_g_ParamLimits

0xf8e6,	// (0x00067eea) ai_gene_pane_1_g

0x4347,	// (0x0005c94b) ai_gene_pane_1_t1_ParamLimits

0x4347,	// (0x0005c94b) ai_gene_pane_1_t1

0x437b,	// (0x0005c97f) grid_ai_soft_ind_pane

0x4319,	// (0x0005c91d) ai_gene_pane_2_t1_ParamLimits

0x4319,	// (0x0005c91d) ai_gene_pane_2_t1

0xa3d5,	// (0x000629d9) main_pane_empty_t1_ParamLimits

0xa3d5,	// (0x000629d9) main_pane_empty_t1

0xa3ed,	// (0x000629f1) main_pane_empty_t2_ParamLimits

0xa3ed,	// (0x000629f1) main_pane_empty_t2

0xa402,	// (0x00062a06) main_pane_empty_t3_ParamLimits

0xa402,	// (0x00062a06) main_pane_empty_t3

0xa414,	// (0x00062a18) main_pane_empty_t4_ParamLimits

0xa414,	// (0x00062a18) main_pane_empty_t4

0xa426,	// (0x00062a2a) main_pane_empty_t5_ParamLimits

0xa426,	// (0x00062a2a) main_pane_empty_t5

0x0004,

0xf54d,	// (0x00067b51) main_pane_empty_t_ParamLimits

0xf54d,	// (0x00067b51) main_pane_empty_t

0xdeb9,	// (0x000664bd) bg_popup_window_pane_ParamLimits

0xdeb9,	// (0x000664bd) bg_popup_window_pane

0x407b,	// (0x0005c67f) find_popup_pane_cp2_ParamLimits

0x407b,	// (0x0005c67f) find_popup_pane_cp2

0x4087,	// (0x0005c68b) heading_pane_ParamLimits

0x4087,	// (0x0005c68b) heading_pane

0x5711,	// (0x0005dd15) bg_popup_sub_pane

0xc6b0,	// (0x00064cb4) bg_popup_window_pane_g1_ParamLimits

0xc6b0,	// (0x00064cb4) bg_popup_window_pane_g1

0xc6bf,	// (0x00064cc3) bg_popup_window_pane_g2_ParamLimits

0xc6bf,	// (0x00064cc3) bg_popup_window_pane_g2

0xc6cb,	// (0x00064ccf) bg_popup_window_pane_g3_ParamLimits

0xc6cb,	// (0x00064ccf) bg_popup_window_pane_g3

0xc6d7,	// (0x00064cdb) bg_popup_window_pane_g4_ParamLimits

0xc6d7,	// (0x00064cdb) bg_popup_window_pane_g4

0xc6e6,	// (0x00064cea) bg_popup_window_pane_g5_ParamLimits

0xc6e6,	// (0x00064cea) bg_popup_window_pane_g5

0xc6f6,	// (0x00064cfa) bg_popup_window_pane_g6_ParamLimits

0xc6f6,	// (0x00064cfa) bg_popup_window_pane_g6

0xc702,	// (0x00064d06) bg_popup_window_pane_g7_ParamLimits

0xc702,	// (0x00064d06) bg_popup_window_pane_g7

0xc711,	// (0x00064d15) bg_popup_window_pane_g8_ParamLimits

0xc711,	// (0x00064d15) bg_popup_window_pane_g8

0xc720,	// (0x00064d24) bg_popup_window_pane_g9_ParamLimits

0xc720,	// (0x00064d24) bg_popup_window_pane_g9

0x4061,	// (0x0005c665) bg_popup_window_pane_g10_ParamLimits

0x4061,	// (0x0005c665) bg_popup_window_pane_g10

0x0009,

0xf8ae,	// (0x00067eb2) bg_popup_window_pane_g_ParamLimits

0xf8ae,	// (0x00067eb2) bg_popup_window_pane_g

0x3f8a,	// (0x0005c58e) bg_popup_heading_pane_ParamLimits

0x3f8a,	// (0x0005c58e) bg_popup_heading_pane

0x0df2,	// (0x000593f6) tabs_4_passive_pane_cp_srt_ParamLimits

0x0df2,	// (0x000593f6) tabs_4_passive_pane_cp_srt

0x0e04,	// (0x00059408) tabs_4_passive_pane_srt_ParamLimits

0x3f9e,	// (0x0005c5a2) heading_pane_g2

0x0e04,	// (0x00059408) tabs_4_passive_pane_srt

0x3133,	// (0x0005b737) bg_passive_tab_pane_cp3_srt_ParamLimits

0x3133,	// (0x0005b737) bg_passive_tab_pane_cp3_srt

0x3fa6,	// (0x0005c5aa) heading_pane_t1_ParamLimits

0x3fa6,	// (0x0005c5aa) heading_pane_t1

0x3fbd,	// (0x0005c5c1) heading_pane_t2_ParamLimits

0x3fbd,	// (0x0005c5c1) heading_pane_t2

0x0001,

0xf8a9,	// (0x00067ead) heading_pane_t_ParamLimits

0xf8a9,	// (0x00067ead) heading_pane_t

0x38c7,	// (0x0005becb) bg_popup_heading_pane_g1

0x3976,	// (0x0005bf7a) bg_popup_heading_pane_g2

0x3980,	// (0x0005bf84) bg_popup_heading_pane_g3

0x398a,	// (0x0005bf8e) bg_popup_heading_pane_g4

0x3994,	// (0x0005bf98) bg_popup_heading_pane_g5

0x399e,	// (0x0005bfa2) bg_popup_heading_pane_g6

0x39a6,	// (0x0005bfaa) bg_popup_heading_pane_g7

0x39ae,	// (0x0005bfb2) bg_popup_heading_pane_g8

0x39b8,	// (0x0005bfbc) bg_popup_heading_pane_g9

0x0008,

0xf865,	// (0x00067e69) bg_popup_heading_pane_g

0x30a7,	// (0x0005b6ab) bg_popup_sub_pane_g1

0x30b7,	// (0x0005b6bb) bg_popup_sub_pane_g2

0x30af,	// (0x0005b6b3) bg_popup_sub_pane_g3

0x30c7,	// (0x0005b6cb) bg_popup_sub_pane_g4

0x30bf,	// (0x0005b6c3) bg_popup_sub_pane_g5

0x30cf,	// (0x0005b6d3) bg_popup_sub_pane_g6

0x30d7,	// (0x0005b6db) bg_popup_sub_pane_g7

0x30e7,	// (0x0005b6eb) bg_popup_sub_pane_g8

0x30df,	// (0x0005b6e3) bg_popup_sub_pane_g9

0x0008,

0xf83f,	// (0x00067e43) bg_popup_sub_pane_g

0x579b,	// (0x0005dd9f) bg_popup_window_pane_cp5_ParamLimits

0x579b,	// (0x0005dd9f) bg_popup_window_pane_cp5

0x8d5f,	// (0x00061363) popup_note_window_g1_ParamLimits

0x8d5f,	// (0x00061363) popup_note_window_g1

0x8d6b,	// (0x0006136f) popup_note_window_t1_ParamLimits

0x8d6b,	// (0x0006136f) popup_note_window_t1

0x8d81,	// (0x00061385) popup_note_window_t2_ParamLimits

0x8d81,	// (0x00061385) popup_note_window_t2

0x8d97,	// (0x0006139b) popup_note_window_t3_ParamLimits

0x8d97,	// (0x0006139b) popup_note_window_t3

0x8dad,	// (0x000613b1) popup_note_window_t4_ParamLimits

0x8dad,	// (0x000613b1) popup_note_window_t4

0x9079,	// (0x0006167d) popup_note_window_t5_ParamLimits

0x9079,	// (0x0006167d) popup_note_window_t5

0x0004,

0xf558,	// (0x00067b5c) popup_note_window_t_ParamLimits

0xf558,	// (0x00067b5c) popup_note_window_t

0x90c3,	// (0x000616c7) bg_popup_window_pane_cp6_ParamLimits

0x90c3,	// (0x000616c7) bg_popup_window_pane_cp6

0x3843,	// (0x0005be47) popup_note_image_window_g1_ParamLimits

0x3843,	// (0x0005be47) popup_note_image_window_g1

0x384f,	// (0x0005be53) popup_note_image_window_g2_ParamLimits

0x384f,	// (0x0005be53) popup_note_image_window_g2

0x0001,

0xf833,	// (0x00067e37) popup_note_image_window_g_ParamLimits

0xf833,	// (0x00067e37) popup_note_image_window_g

0x3868,	// (0x0005be6c) popup_note_image_window_t1_ParamLimits

0x3868,	// (0x0005be6c) popup_note_image_window_t1

0x3881,	// (0x0005be85) popup_note_image_window_t2_ParamLimits

0x3881,	// (0x0005be85) popup_note_image_window_t2

0x389a,	// (0x0005be9e) popup_note_image_window_t3_ParamLimits

0x389a,	// (0x0005be9e) popup_note_image_window_t3

0x0002,

0xf838,	// (0x00067e3c) popup_note_image_window_t_ParamLimits

0xf838,	// (0x00067e3c) popup_note_image_window_t

0x3703,	// (0x0005bd07) bg_popup_window_pane_cp7_ParamLimits

0x3703,	// (0x0005bd07) bg_popup_window_pane_cp7

0x3733,	// (0x0005bd37) popup_note_wait_window_g1_ParamLimits

0x3733,	// (0x0005bd37) popup_note_wait_window_g1

0x373f,	// (0x0005bd43) popup_note_wait_window_g2_ParamLimits

0x373f,	// (0x0005bd43) popup_note_wait_window_g2

0x0002,

0xf821,	// (0x00067e25) popup_note_wait_window_g_ParamLimits

0xf821,	// (0x00067e25) popup_note_wait_window_g

0x3757,	// (0x0005bd5b) popup_note_wait_window_t1_ParamLimits

0x3757,	// (0x0005bd5b) popup_note_wait_window_t1

0x377e,	// (0x0005bd82) popup_note_wait_window_t2_ParamLimits

0x377e,	// (0x0005bd82) popup_note_wait_window_t2

0x379c,	// (0x0005bda0) popup_note_wait_window_t3_ParamLimits

0x379c,	// (0x0005bda0) popup_note_wait_window_t3

0x37af,	// (0x0005bdb3) popup_note_wait_window_t4_ParamLimits

0x37af,	// (0x0005bdb3) popup_note_wait_window_t4

0x0004,

0xf828,	// (0x00067e2c) popup_note_wait_window_t_ParamLimits

0xf828,	// (0x00067e2c) popup_note_wait_window_t

0x37d4,	// (0x0005bdd8) wait_bar_pane_ParamLimits

0x37d4,	// (0x0005bdd8) wait_bar_pane

0x5711,	// (0x0005dd15) wait_anim_pane

0x5711,	// (0x0005dd15) wait_border_pane

0x5707,	// (0x0005dd0b) wait_anim_pane_g1

0x5707,	// (0x0005dd0b) wait_anim_pane_g2

0x0001,

0xf6e1,	// (0x00067ce5) wait_anim_pane_g

0x36a7,	// (0x0005bcab) wait_border_pane_g1

0x36b2,	// (0x0005bcb6) wait_border_pane_g2

0x36bb,	// (0x0005bcbf) wait_border_pane_g3

0x0002,

0xf81a,	// (0x00067e1e) wait_border_pane_g

0x3511,	// (0x0005bb15) bg_popup_window_pane_cp16_ParamLimits

0x3511,	// (0x0005bb15) bg_popup_window_pane_cp16

0x3611,	// (0x0005bc15) indicator_popup_pane_cp4_ParamLimits

0x3611,	// (0x0005bc15) indicator_popup_pane_cp4

0x3625,	// (0x0005bc29) popup_query_data_window_t1_ParamLimits

0x3625,	// (0x0005bc29) popup_query_data_window_t1

0x3637,	// (0x0005bc3b) popup_query_data_window_t2_ParamLimits

0x3637,	// (0x0005bc3b) popup_query_data_window_t2

0x3650,	// (0x0005bc54) popup_query_data_window_t3_ParamLimits

0x3650,	// (0x0005bc54) popup_query_data_window_t3

0x0002,

0xf813,	// (0x00067e17) popup_query_data_window_t_ParamLimits

0xf813,	// (0x00067e17) popup_query_data_window_t

0x366a,	// (0x0005bc6e) query_popup_data_pane_ParamLimits

0x366a,	// (0x0005bc6e) query_popup_data_pane

0x367e,	// (0x0005bc82) query_popup_data_pane_cp1_ParamLimits

0x367e,	// (0x0005bc82) query_popup_data_pane_cp1

0x3511,	// (0x0005bb15) bg_popup_window_pane_cp10_ParamLimits

0x3511,	// (0x0005bb15) bg_popup_window_pane_cp10

0x3543,	// (0x0005bb47) indicator_popup_pane_ParamLimits

0x3543,	// (0x0005bb47) indicator_popup_pane

0x3565,	// (0x0005bb69) popup_query_code_window_t1_ParamLimits

0x3565,	// (0x0005bb69) popup_query_code_window_t1

0x357f,	// (0x0005bb83) popup_query_code_window_t2_ParamLimits

0x357f,	// (0x0005bb83) popup_query_code_window_t2

0x35c8,	// (0x0005bbcc) popup_query_code_window_t3_ParamLimits

0x35c8,	// (0x0005bbcc) popup_query_code_window_t3

0x0002,

0xf80c,	// (0x00067e10) popup_query_code_window_t_ParamLimits

0xf80c,	// (0x00067e10) popup_query_code_window_t

0x35f7,	// (0x0005bbfb) query_popup_pane_ParamLimits

0x35f7,	// (0x0005bbfb) query_popup_pane

0x90c3,	// (0x000616c7) bg_popup_window_pane_cp15_ParamLimits

0x90c3,	// (0x000616c7) bg_popup_window_pane_cp15

0x90e3,	// (0x000616e7) indicator_popup_pane_cp1_ParamLimits

0x90e3,	// (0x000616e7) indicator_popup_pane_cp1

0x90f6,	// (0x000616fa) indicator_popup_pane_cp2_ParamLimits

0x90f6,	// (0x000616fa) indicator_popup_pane_cp2

0x9111,	// (0x00061715) popup_query_data_code_window_g1_ParamLimits

0x9111,	// (0x00061715) popup_query_data_code_window_g1

0x9124,	// (0x00061728) popup_query_data_code_window_t1_ParamLimits

0x9124,	// (0x00061728) popup_query_data_code_window_t1

0x9136,	// (0x0006173a) popup_query_data_code_window_t2_ParamLimits

0x9136,	// (0x0006173a) popup_query_data_code_window_t2

0x9148,	// (0x0006174c) popup_query_data_code_window_t3_ParamLimits

0x9148,	// (0x0006174c) popup_query_data_code_window_t3

0x915e,	// (0x00061762) popup_query_data_code_window_t4_ParamLimits

0x915e,	// (0x00061762) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x00067b67) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x00067b67) popup_query_data_code_window_t

0x09d7,	// (0x00058fdb) list_single_midp_graphic_pane_g3

0x9178,	// (0x0006177c) query_popup_data_pane_cp2_ParamLimits

0x918b,	// (0x0006178f) query_popup_pane_cp2_ParamLimits

0x918b,	// (0x0006178f) query_popup_pane_cp2

0x5711,	// (0x0005dd15) bg_popup_window_pane_cp11

0x34f5,	// (0x0005baf9) heading_pane_cp5

0x34fd,	// (0x0005bb01) listscroll_popup_info_pane

0x5711,	// (0x0005dd15) input_focus_pane_cp3

0x91a6,	// (0x000617aa) query_popup_pane_t1

0x91b4,	// (0x000617b8) list_popup_info_pane_ParamLimits

0x91b4,	// (0x000617b8) list_popup_info_pane

0x91c3,	// (0x000617c7) listscroll_popup_info_pane_g1

0x91cb,	// (0x000617cf) scroll_pane_cp7

0x91d5,	// (0x000617d9) popup_info_list_pane_t1_ParamLimits

0x91d5,	// (0x000617d9) popup_info_list_pane_t1

0x91ef,	// (0x000617f3) popup_info_list_pane_t2_ParamLimits

0x91ef,	// (0x000617f3) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x00067b70) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x00067b70) popup_info_list_pane_t

0x5711,	// (0x0005dd15) bg_popup_window_pane_cp12

0x4aae,	// (0x0005d0b2) find_popup_pane

0x575f,	// (0x0005dd63) bg_popup_window_pane_cp3

0x9209,	// (0x0006180d) heading_pane_cp3

0x9218,	// (0x0006181c) listscroll_popup_graphic_pane

0x5711,	// (0x0005dd15) bg_popup_window_pane_cp4

0xa488,	// (0x00062a8c) heading_pane_cp4

0x9228,	// (0x0006182c) listscroll_popup_colour_pane

0xa492,	// (0x00062a96) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa492,	// (0x00062a96) cell_large_graphic_colour_none_popup_pane

0xa4a6,	// (0x00062aaa) grid_large_graphic_colour_popup_pane_ParamLimits

0xa4a6,	// (0x00062aaa) grid_large_graphic_colour_popup_pane

0xa4ce,	// (0x00062ad2) listscroll_popup_colour_pane_g1_ParamLimits

0xa4ce,	// (0x00062ad2) listscroll_popup_colour_pane_g1

0xa4e5,	// (0x00062ae9) listscroll_popup_colour_pane_g2_ParamLimits

0xa4e5,	// (0x00062ae9) listscroll_popup_colour_pane_g2

0xa4fc,	// (0x00062b00) listscroll_popup_colour_pane_g3_ParamLimits

0xa4fc,	// (0x00062b00) listscroll_popup_colour_pane_g3

0xa50c,	// (0x00062b10) listscroll_popup_colour_pane_g4_ParamLimits

0xa50c,	// (0x00062b10) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x00067b75) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x00067b75) listscroll_popup_colour_pane_g

0x9230,	// (0x00061834) scroll_pane_cp6_ParamLimits

0x9230,	// (0x00061834) scroll_pane_cp6

0xa51c,	// (0x00062b20) cell_large_graphic_colour_popup_pane_ParamLimits

0xa51c,	// (0x00062b20) cell_large_graphic_colour_popup_pane

0x9242,	// (0x00061846) cell_large_graphic_colour_none_popup_pane_t1

0x5711,	// (0x0005dd15) grid_highlight_pane_cp5

0x9251,	// (0x00061855) cell_large_graphic_colour_popup_pane_g1

0x9259,	// (0x0006185d) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x00067b7e) cell_large_graphic_colour_popup_pane_g

0x9261,	// (0x00061865) cell_large_graphic_colour_popup_pane_g2_copy1

0x926a,	// (0x0006186e) grid_highlight_pane_cp4

0x9272,	// (0x00061876) bg_popup_window_pane_cp8_ParamLimits

0x9272,	// (0x00061876) bg_popup_window_pane_cp8

0x928d,	// (0x00061891) popup_snote_single_text_window_g1_ParamLimits

0x928d,	// (0x00061891) popup_snote_single_text_window_g1

0x929f,	// (0x000618a3) popup_snote_single_text_window_t1_ParamLimits

0x929f,	// (0x000618a3) popup_snote_single_text_window_t1

0x92b2,	// (0x000618b6) popup_snote_single_text_window_t2_ParamLimits

0x92b2,	// (0x000618b6) popup_snote_single_text_window_t2

0x92c5,	// (0x000618c9) popup_snote_single_text_window_t3_ParamLimits

0x92c5,	// (0x000618c9) popup_snote_single_text_window_t3

0x92fe,	// (0x00061902) popup_snote_single_text_window_t4_ParamLimits

0x92fe,	// (0x00061902) popup_snote_single_text_window_t4

0x9332,	// (0x00061936) popup_snote_single_text_window_t5_ParamLimits

0x9332,	// (0x00061936) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x00067b83) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x00067b83) popup_snote_single_text_window_t

0x9361,	// (0x00061965) bg_popup_window_pane_cp9_ParamLimits

0x9361,	// (0x00061965) bg_popup_window_pane_cp9

0x928d,	// (0x00061891) popup_snote_single_graphic_window_g1_ParamLimits

0x928d,	// (0x00061891) popup_snote_single_graphic_window_g1

0x936f,	// (0x00061973) popup_snote_single_graphic_window_g2_ParamLimits

0x936f,	// (0x00061973) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x00067b8e) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x00067b8e) popup_snote_single_graphic_window_g

0x937b,	// (0x0006197f) popup_snote_single_graphic_window_t1_ParamLimits

0x937b,	// (0x0006197f) popup_snote_single_graphic_window_t1

0x938e,	// (0x00061992) popup_snote_single_graphic_window_t2_ParamLimits

0x938e,	// (0x00061992) popup_snote_single_graphic_window_t2

0x93a1,	// (0x000619a5) popup_snote_single_graphic_window_t3_ParamLimits

0x93a1,	// (0x000619a5) popup_snote_single_graphic_window_t3

0x93da,	// (0x000619de) popup_snote_single_graphic_window_t4_ParamLimits

0x93da,	// (0x000619de) popup_snote_single_graphic_window_t4

0x940e,	// (0x00061a12) popup_snote_single_graphic_window_t5_ParamLimits

0x940e,	// (0x00061a12) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x00067b93) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x00067b93) popup_snote_single_graphic_window_t

0x49ec,	// (0x0005cff0) grid_graphic_popup_pane_ParamLimits

0x49ec,	// (0x0005cff0) grid_graphic_popup_pane

0x4a1a,	// (0x0005d01e) listscroll_popup_graphic_pane_g1_ParamLimits

0x4a1a,	// (0x0005d01e) listscroll_popup_graphic_pane_g1

0xcac4,	// (0x000650c8) listscroll_popup_graphic_pane_g2_ParamLimits

0xcac4,	// (0x000650c8) listscroll_popup_graphic_pane_g2

0x0001,

0xf989,	// (0x00067f8d) listscroll_popup_graphic_pane_g_ParamLimits

0xf989,	// (0x00067f8d) listscroll_popup_graphic_pane_g

0x4a42,	// (0x0005d046) scroll_pane_cp5

0xca78,	// (0x0006507c) cell_graphic_popup_pane_ParamLimits

0xca78,	// (0x0006507c) cell_graphic_popup_pane

0x495c,	// (0x0005cf60) cell_graphic_popup_pane_g1

0x4964,	// (0x0005cf68) cell_graphic_popup_pane_g2

0x9261,	// (0x00061865) cell_graphic_popup_pane_g3

0x0002,

0xf982,	// (0x00067f86) cell_graphic_popup_pane_g

0x496d,	// (0x0005cf71) cell_graphic_popup_pane_t2

0x926a,	// (0x0006186e) grid_highlight_pane_cp3

0x944f,	// (0x00061a53) list_gen_pane_ParamLimits

0x944f,	// (0x00061a53) list_gen_pane

0x9477,	// (0x00061a7b) scroll_pane

0xca2f,	// (0x00065033) bg_list_pane_g1_ParamLimits

0xca2f,	// (0x00065033) bg_list_pane_g1

0x48d1,	// (0x0005ced5) bg_list_pane_g2_ParamLimits

0x48d1,	// (0x0005ced5) bg_list_pane_g2

0x48e6,	// (0x0005ceea) bg_list_pane_g3_ParamLimits

0x48e6,	// (0x0005ceea) bg_list_pane_g3

0x48fa,	// (0x0005cefe) bg_list_pane_g4_ParamLimits

0x48fa,	// (0x0005cefe) bg_list_pane_g4

0xca4c,	// (0x00065050) bg_list_pane_g5_ParamLimits

0xca4c,	// (0x00065050) bg_list_pane_g5

0x0004,

0xf977,	// (0x00067f7b) bg_list_pane_g_ParamLimits

0xf977,	// (0x00067f7b) bg_list_pane_g

0xc9c9,	// (0x00064fcd) list_double2_graphic_large_graphic_pane_ParamLimits

0xc9c9,	// (0x00064fcd) list_double2_graphic_large_graphic_pane

0xc9c9,	// (0x00064fcd) list_double2_graphic_pane_ParamLimits

0xc9c9,	// (0x00064fcd) list_double2_graphic_pane

0xc9c9,	// (0x00064fcd) list_double2_large_graphic_pane_ParamLimits

0xc9c9,	// (0x00064fcd) list_double2_large_graphic_pane

0xc9c9,	// (0x00064fcd) list_double2_pane_ParamLimits

0xc9c9,	// (0x00064fcd) list_double2_pane

0xc9c9,	// (0x00064fcd) list_double_graphic_heading_pane_ParamLimits

0xc9c9,	// (0x00064fcd) list_double_graphic_heading_pane

0xc9c9,	// (0x00064fcd) list_double_graphic_pane_ParamLimits

0xc9c9,	// (0x00064fcd) list_double_graphic_pane

0xc9c9,	// (0x00064fcd) list_double_heading_pane_ParamLimits

0xc9c9,	// (0x00064fcd) list_double_heading_pane

0xc9c9,	// (0x00064fcd) list_double_large_graphic_pane_ParamLimits

0xc9c9,	// (0x00064fcd) list_double_large_graphic_pane

0xc9c9,	// (0x00064fcd) list_double_number_pane_ParamLimits

0xc9c9,	// (0x00064fcd) list_double_number_pane

0xc9c9,	// (0x00064fcd) list_double_pane_ParamLimits

0xc9c9,	// (0x00064fcd) list_double_pane

0xc9c9,	// (0x00064fcd) list_double_time_pane_ParamLimits

0xc9c9,	// (0x00064fcd) list_double_time_pane

0xc9c9,	// (0x00064fcd) list_setting_number_pane_ParamLimits

0xc9c9,	// (0x00064fcd) list_setting_number_pane

0xc9c9,	// (0x00064fcd) list_setting_pane_ParamLimits

0xc9c9,	// (0x00064fcd) list_setting_pane

0xc9dd,	// (0x00064fe1) list_single_2graphic_pane_ParamLimits

0xc9dd,	// (0x00064fe1) list_single_2graphic_pane

0xc9dd,	// (0x00064fe1) list_single_graphic_heading_pane_ParamLimits

0xc9dd,	// (0x00064fe1) list_single_graphic_heading_pane

0xc9dd,	// (0x00064fe1) list_single_graphic_pane_ParamLimits

0xc9dd,	// (0x00064fe1) list_single_graphic_pane

0xc9dd,	// (0x00064fe1) list_single_heading_pane_ParamLimits

0xc9dd,	// (0x00064fe1) list_single_heading_pane

0xc9dd,	// (0x00064fe1) list_single_large_graphic_pane_ParamLimits

0xc9dd,	// (0x00064fe1) list_single_large_graphic_pane

0xc9dd,	// (0x00064fe1) list_single_number_heading_pane_ParamLimits

0xc9dd,	// (0x00064fe1) list_single_number_heading_pane

0xc9dd,	// (0x00064fe1) list_single_number_pane_ParamLimits

0xc9dd,	// (0x00064fe1) list_single_number_pane

0xc9dd,	// (0x00064fe1) list_single_pane_ParamLimits

0xc9dd,	// (0x00064fe1) list_single_pane

0x5711,	// (0x0005dd15) list_highlight_pane_cp1

0x3033,	// (0x0005b637) list_single_pane_g1_ParamLimits

0x3033,	// (0x0005b637) list_single_pane_g1

0x303f,	// (0x0005b643) list_single_pane_g2_ParamLimits

0x303f,	// (0x0005b643) list_single_pane_g2

0x0001,

0xf5ab,	// (0x00067baf) list_single_pane_g_ParamLimits

0xf5ab,	// (0x00067baf) list_single_pane_g

0xe374,	// (0x00066978) list_single_pane_t1_ParamLimits

0xe374,	// (0x00066978) list_single_pane_t1

0x3033,	// (0x0005b637) list_single_number_pane_g1_ParamLimits

0x3033,	// (0x0005b637) list_single_number_pane_g1

0x303f,	// (0x0005b643) list_single_number_pane_g2_ParamLimits

0x303f,	// (0x0005b643) list_single_number_pane_g2

0x0001,

0xf5ab,	// (0x00067baf) list_single_number_pane_g_ParamLimits

0xf5ab,	// (0x00067baf) list_single_number_pane_g

0xe2a5,	// (0x000668a9) list_single_number_pane_t1_ParamLimits

0xe2a5,	// (0x000668a9) list_single_number_pane_t1

0xe362,	// (0x00066966) list_single_number_pane_t2_ParamLimits

0xe362,	// (0x00066966) list_single_number_pane_t2

0x0001,

0xf938,	// (0x00067f3c) list_single_number_pane_t_ParamLimits

0xf938,	// (0x00067f3c) list_single_number_pane_t

0xa547,	// (0x00062b4b) list_single_graphic_pane_g1_ParamLimits

0xa547,	// (0x00062b4b) list_single_graphic_pane_g1

0x3033,	// (0x0005b637) list_single_graphic_pane_g2_ParamLimits

0x3033,	// (0x0005b637) list_single_graphic_pane_g2

0x303f,	// (0x0005b643) list_single_graphic_pane_g3_ParamLimits

0x303f,	// (0x0005b643) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x00067b9e) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x00067b9e) list_single_graphic_pane_g

0xa553,	// (0x00062b57) list_single_graphic_pane_t1_ParamLimits

0xa553,	// (0x00062b57) list_single_graphic_pane_t1

0xa569,	// (0x00062b6d) list_single_heading_pane_g1_ParamLimits

0xa569,	// (0x00062b6d) list_single_heading_pane_g1

0x303f,	// (0x0005b643) list_single_heading_pane_g2_ParamLimits

0x303f,	// (0x0005b643) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x00067ba5) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x00067ba5) list_single_heading_pane_g

0xa57c,	// (0x00062b80) list_single_heading_pane_t1_ParamLimits

0xa57c,	// (0x00062b80) list_single_heading_pane_t1

0xa592,	// (0x00062b96) list_single_heading_pane_t2_ParamLimits

0xa592,	// (0x00062b96) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x00067baa) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x00067baa) list_single_heading_pane_t

0x3033,	// (0x0005b637) list_single_number_heading_pane_g1_ParamLimits

0x3033,	// (0x0005b637) list_single_number_heading_pane_g1

0x303f,	// (0x0005b643) list_single_number_heading_pane_g2_ParamLimits

0x303f,	// (0x0005b643) list_single_number_heading_pane_g2

0x0001,

0xf5ab,	// (0x00067baf) list_single_number_heading_pane_g_ParamLimits

0xf5ab,	// (0x00067baf) list_single_number_heading_pane_g

0xdd26,	// (0x0006632a) list_single_number_heading_pane_t1_ParamLimits

0xdd26,	// (0x0006632a) list_single_number_heading_pane_t1

0xa5a4,	// (0x00062ba8) list_single_number_heading_pane_t2_ParamLimits

0xa5a4,	// (0x00062ba8) list_single_number_heading_pane_t2

0xdd3c,	// (0x00066340) list_single_number_heading_pane_t3_ParamLimits

0xdd3c,	// (0x00066340) list_single_number_heading_pane_t3

0x0002,

0xf5b0,	// (0x00067bb4) list_single_number_heading_pane_t_ParamLimits

0xf5b0,	// (0x00067bb4) list_single_number_heading_pane_t

0xdd4e,	// (0x00066352) list_single_graphic_heading_pane_g1_ParamLimits

0xdd4e,	// (0x00066352) list_single_graphic_heading_pane_g1

0xa5b6,	// (0x00062bba) list_single_graphic_heading_pane_g4_ParamLimits

0xa5b6,	// (0x00062bba) list_single_graphic_heading_pane_g4

0x303f,	// (0x0005b643) list_single_graphic_heading_pane_g5_ParamLimits

0x303f,	// (0x0005b643) list_single_graphic_heading_pane_g5

0x0002,

0xf5b7,	// (0x00067bbb) list_single_graphic_heading_pane_g_ParamLimits

0xf5b7,	// (0x00067bbb) list_single_graphic_heading_pane_g

0xdd26,	// (0x0006632a) list_single_graphic_heading_pane_t1_ParamLimits

0xdd26,	// (0x0006632a) list_single_graphic_heading_pane_t1

0xa5c7,	// (0x00062bcb) list_single_graphic_heading_pane_t2_ParamLimits

0xa5c7,	// (0x00062bcb) list_single_graphic_heading_pane_t2

0x0001,

0xf5be,	// (0x00067bc2) list_single_graphic_heading_pane_t_ParamLimits

0xf5be,	// (0x00067bc2) list_single_graphic_heading_pane_t

0x3ac7,	// (0x0005c0cb) list_single_large_graphic_pane_g1_ParamLimits

0x3ac7,	// (0x0005c0cb) list_single_large_graphic_pane_g1

0x3033,	// (0x0005b637) list_single_large_graphic_pane_g2_ParamLimits

0x3033,	// (0x0005b637) list_single_large_graphic_pane_g2

0x303f,	// (0x0005b643) list_single_large_graphic_pane_g3_ParamLimits

0x303f,	// (0x0005b643) list_single_large_graphic_pane_g3

0x0002,

0xf5c3,	// (0x00067bc7) list_single_large_graphic_pane_g_ParamLimits

0xf5c3,	// (0x00067bc7) list_single_large_graphic_pane_g

0x36b2,	// (0x0005bcb6) wait_border_pane_g2_copy1

0xa5d9,	// (0x00062bdd) list_single_large_graphic_pane_g4_cp2

0xdd5a,	// (0x0006635e) list_single_large_graphic_pane_t1_ParamLimits

0xdd5a,	// (0x0006635e) list_single_large_graphic_pane_t1

0xa5e1,	// (0x00062be5) list_double_pane_g1_ParamLimits

0xa5e1,	// (0x00062be5) list_double_pane_g1

0xa5ed,	// (0x00062bf1) list_double_pane_g2_ParamLimits

0xa5ed,	// (0x00062bf1) list_double_pane_g2

0x0001,

0xf5ca,	// (0x00067bce) list_double_pane_g_ParamLimits

0xf5ca,	// (0x00067bce) list_double_pane_g

0xa5f9,	// (0x00062bfd) list_double_pane_t1_ParamLimits

0xa5f9,	// (0x00062bfd) list_double_pane_t1

0xa60f,	// (0x00062c13) list_double_pane_t2_ParamLimits

0xa60f,	// (0x00062c13) list_double_pane_t2

0x0001,

0xf5cf,	// (0x00067bd3) list_double_pane_t_ParamLimits

0xf5cf,	// (0x00067bd3) list_double_pane_t

0xa621,	// (0x00062c25) list_double2_pane_g1_ParamLimits

0xa621,	// (0x00062c25) list_double2_pane_g1

0xa632,	// (0x00062c36) list_double2_pane_g2_ParamLimits

0xa632,	// (0x00062c36) list_double2_pane_g2

0x0001,

0xf5d4,	// (0x00067bd8) list_double2_pane_g_ParamLimits

0xf5d4,	// (0x00067bd8) list_double2_pane_g

0xa63e,	// (0x00062c42) list_double2_pane_t1_ParamLimits

0xa63e,	// (0x00062c42) list_double2_pane_t1

0xa654,	// (0x00062c58) list_double2_pane_t2_ParamLimits

0xa654,	// (0x00062c58) list_double2_pane_t2

0x0001,

0xf5d9,	// (0x00067bdd) list_double2_pane_t_ParamLimits

0xf5d9,	// (0x00067bdd) list_double2_pane_t

0xa5e1,	// (0x00062be5) list_double_number_pane_g1_ParamLimits

0xa5e1,	// (0x00062be5) list_double_number_pane_g1

0xa5ed,	// (0x00062bf1) list_double_number_pane_g2_ParamLimits

0xa5ed,	// (0x00062bf1) list_double_number_pane_g2

0x0001,

0xf5ca,	// (0x00067bce) list_double_number_pane_g_ParamLimits

0xf5ca,	// (0x00067bce) list_double_number_pane_g

0xa666,	// (0x00062c6a) list_double_number_pane_t1_ParamLimits

0xa666,	// (0x00062c6a) list_double_number_pane_t1

0xa678,	// (0x00062c7c) list_double_number_pane_t2_ParamLimits

0xa678,	// (0x00062c7c) list_double_number_pane_t2

0xa68e,	// (0x00062c92) list_double_number_pane_t3_ParamLimits

0xa68e,	// (0x00062c92) list_double_number_pane_t3

0x0002,

0xf5de,	// (0x00067be2) list_double_number_pane_t_ParamLimits

0xf5de,	// (0x00067be2) list_double_number_pane_t

0xa6a0,	// (0x00062ca4) list_double_graphic_pane_g1_ParamLimits

0xa6a0,	// (0x00062ca4) list_double_graphic_pane_g1

0xa6ac,	// (0x00062cb0) list_double_graphic_pane_g2_ParamLimits

0xa6ac,	// (0x00062cb0) list_double_graphic_pane_g2

0xa6bb,	// (0x00062cbf) list_double_graphic_pane_g3_ParamLimits

0xa6bb,	// (0x00062cbf) list_double_graphic_pane_g3

0x0003,

0xf5e5,	// (0x00067be9) list_double_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00067be9) list_double_graphic_pane_g

0xa6d3,	// (0x00062cd7) list_double_graphic_pane_t1_ParamLimits

0xa6d3,	// (0x00062cd7) list_double_graphic_pane_t1

0xa6e9,	// (0x00062ced) list_double_graphic_pane_t2_ParamLimits

0xa6e9,	// (0x00062ced) list_double_graphic_pane_t2

0x0001,

0xf5ee,	// (0x00067bf2) list_double_graphic_pane_t_ParamLimits

0xf5ee,	// (0x00067bf2) list_double_graphic_pane_t

0xa6fb,	// (0x00062cff) list_double2_graphic_pane_g1_ParamLimits

0xa6fb,	// (0x00062cff) list_double2_graphic_pane_g1

0x5f87,	// (0x0005e58b) list_double2_graphic_pane_g2_ParamLimits

0x5f87,	// (0x0005e58b) list_double2_graphic_pane_g2

0xa707,	// (0x00062d0b) list_double2_graphic_pane_g3_ParamLimits

0xa707,	// (0x00062d0b) list_double2_graphic_pane_g3

0x0002,

0xf5f3,	// (0x00067bf7) list_double2_graphic_pane_g_ParamLimits

0xf5f3,	// (0x00067bf7) list_double2_graphic_pane_g

0xa713,	// (0x00062d17) list_double2_graphic_pane_t1_ParamLimits

0xa713,	// (0x00062d17) list_double2_graphic_pane_t1

0xa729,	// (0x00062d2d) list_double2_graphic_pane_t2_ParamLimits

0xa729,	// (0x00062d2d) list_double2_graphic_pane_t2

0x0001,

0xf5fa,	// (0x00067bfe) list_double2_graphic_pane_t_ParamLimits

0xf5fa,	// (0x00067bfe) list_double2_graphic_pane_t

0xa73b,	// (0x00062d3f) list_double_large_graphic_pane_g1_ParamLimits

0xa73b,	// (0x00062d3f) list_double_large_graphic_pane_g1

0xa75a,	// (0x00062d5e) list_double_large_graphic_pane_g2_ParamLimits

0xa75a,	// (0x00062d5e) list_double_large_graphic_pane_g2

0xa5ed,	// (0x00062bf1) list_double_large_graphic_pane_g3_ParamLimits

0xa5ed,	// (0x00062bf1) list_double_large_graphic_pane_g3

0xa770,	// (0x00062d74) list_double_large_graphic_pane_g4_ParamLimits

0xa770,	// (0x00062d74) list_double_large_graphic_pane_g4

0x0004,

0xf5ff,	// (0x00067c03) list_double_large_graphic_pane_g_ParamLimits

0xf5ff,	// (0x00067c03) list_double_large_graphic_pane_g

0xa783,	// (0x00062d87) list_double_large_graphic_pane_t1_ParamLimits

0xa783,	// (0x00062d87) list_double_large_graphic_pane_t1

0xa79c,	// (0x00062da0) list_double_large_graphic_pane_t2_ParamLimits

0xa79c,	// (0x00062da0) list_double_large_graphic_pane_t2

0x0001,

0xf60a,	// (0x00067c0e) list_double_large_graphic_pane_t_ParamLimits

0xf60a,	// (0x00067c0e) list_double_large_graphic_pane_t

0xa7ae,	// (0x00062db2) list_double2_large_graphic_pane_g1_ParamLimits

0xa7ae,	// (0x00062db2) list_double2_large_graphic_pane_g1

0xa7ba,	// (0x00062dbe) list_double2_large_graphic_pane_g2_ParamLimits

0xa7ba,	// (0x00062dbe) list_double2_large_graphic_pane_g2

0xa707,	// (0x00062d0b) list_double2_large_graphic_pane_g3_ParamLimits

0xa707,	// (0x00062d0b) list_double2_large_graphic_pane_g3

0x0002,

0xf60f,	// (0x00067c13) list_double2_large_graphic_pane_g_ParamLimits

0xf60f,	// (0x00067c13) list_double2_large_graphic_pane_g

0xa7cb,	// (0x00062dcf) list_double2_large_graphic_pane_t1_ParamLimits

0xa7cb,	// (0x00062dcf) list_double2_large_graphic_pane_t1

0xa7e1,	// (0x00062de5) list_double2_large_graphic_pane_t2_ParamLimits

0xa7e1,	// (0x00062de5) list_double2_large_graphic_pane_t2

0x0001,

0xf616,	// (0x00067c1a) list_double2_large_graphic_pane_t_ParamLimits

0xf616,	// (0x00067c1a) list_double2_large_graphic_pane_t

0xa7f3,	// (0x00062df7) list_double_heading_pane_g1_ParamLimits

0xa7f3,	// (0x00062df7) list_double_heading_pane_g1

0xa804,	// (0x00062e08) list_double_heading_pane_g2_ParamLimits

0xa804,	// (0x00062e08) list_double_heading_pane_g2

0x0001,

0xf61b,	// (0x00067c1f) list_double_heading_pane_g_ParamLimits

0xf61b,	// (0x00067c1f) list_double_heading_pane_g

0xa810,	// (0x00062e14) list_double_heading_pane_t1_ParamLimits

0xa810,	// (0x00062e14) list_double_heading_pane_t1

0xa826,	// (0x00062e2a) list_double_heading_pane_t2_ParamLimits

0xa826,	// (0x00062e2a) list_double_heading_pane_t2

0x0001,

0xf620,	// (0x00067c24) list_double_heading_pane_t_ParamLimits

0xf620,	// (0x00067c24) list_double_heading_pane_t

0xa838,	// (0x00062e3c) list_double_graphic_heading_pane_g1_ParamLimits

0xa838,	// (0x00062e3c) list_double_graphic_heading_pane_g1

0xa7f3,	// (0x00062df7) list_double_graphic_heading_pane_g2_ParamLimits

0xa7f3,	// (0x00062df7) list_double_graphic_heading_pane_g2

0xa804,	// (0x00062e08) list_double_graphic_heading_pane_g3_ParamLimits

0xa804,	// (0x00062e08) list_double_graphic_heading_pane_g3

0x0002,

0xf625,	// (0x00067c29) list_double_graphic_heading_pane_g_ParamLimits

0xf625,	// (0x00067c29) list_double_graphic_heading_pane_g

0xa844,	// (0x00062e48) list_double_graphic_heading_pane_t1_ParamLimits

0xa844,	// (0x00062e48) list_double_graphic_heading_pane_t1

0xa85a,	// (0x00062e5e) list_double_graphic_heading_pane_t2_ParamLimits

0xa85a,	// (0x00062e5e) list_double_graphic_heading_pane_t2

0x0001,

0xf62c,	// (0x00067c30) list_double_graphic_heading_pane_t_ParamLimits

0xf62c,	// (0x00067c30) list_double_graphic_heading_pane_t

0xa86c,	// (0x00062e70) list_double_time_pane_g1_ParamLimits

0xa86c,	// (0x00062e70) list_double_time_pane_g1

0xa87d,	// (0x00062e81) list_double_time_pane_g2_ParamLimits

0xa87d,	// (0x00062e81) list_double_time_pane_g2

0x0001,

0xf631,	// (0x00067c35) list_double_time_pane_g_ParamLimits

0xf631,	// (0x00067c35) list_double_time_pane_g

0xa889,	// (0x00062e8d) list_double_time_pane_t1_ParamLimits

0xa889,	// (0x00062e8d) list_double_time_pane_t1

0xa89f,	// (0x00062ea3) list_double_time_pane_t2_ParamLimits

0xa89f,	// (0x00062ea3) list_double_time_pane_t2

0xa8b1,	// (0x00062eb5) list_double_time_pane_t3_ParamLimits

0xa8b1,	// (0x00062eb5) list_double_time_pane_t3

0xa8c3,	// (0x00062ec7) list_double_time_pane_t4_ParamLimits

0xa8c3,	// (0x00062ec7) list_double_time_pane_t4

0x0003,

0xf636,	// (0x00067c3a) list_double_time_pane_t_ParamLimits

0xf636,	// (0x00067c3a) list_double_time_pane_t

0xa8d5,	// (0x00062ed9) list_setting_pane_g1_ParamLimits

0xa8d5,	// (0x00062ed9) list_setting_pane_g1

0xa8e1,	// (0x00062ee5) list_setting_pane_g2_ParamLimits

0xa8e1,	// (0x00062ee5) list_setting_pane_g2

0x0001,

0xf63f,	// (0x00067c43) list_setting_pane_g_ParamLimits

0xf63f,	// (0x00067c43) list_setting_pane_g

0xa8ed,	// (0x00062ef1) list_setting_pane_t1_ParamLimits

0xa8ed,	// (0x00062ef1) list_setting_pane_t1

0xa907,	// (0x00062f0b) list_setting_pane_t2_ParamLimits

0xa907,	// (0x00062f0b) list_setting_pane_t2

0x0002,

0xf644,	// (0x00067c48) list_setting_pane_t_ParamLimits

0xf644,	// (0x00067c48) list_setting_pane_t

0xa946,	// (0x00062f4a) set_value_pane_cp_ParamLimits

0xa946,	// (0x00062f4a) set_value_pane_cp

0xa954,	// (0x00062f58) list_setting_number_pane_g1_ParamLimits

0xa954,	// (0x00062f58) list_setting_number_pane_g1

0xa960,	// (0x00062f64) list_setting_number_pane_g2_ParamLimits

0xa960,	// (0x00062f64) list_setting_number_pane_g2

0x0001,

0xf64b,	// (0x00067c4f) list_setting_number_pane_g_ParamLimits

0xf64b,	// (0x00067c4f) list_setting_number_pane_g

0xa96c,	// (0x00062f70) list_setting_number_pane_t1_ParamLimits

0xa96c,	// (0x00062f70) list_setting_number_pane_t1

0xa985,	// (0x00062f89) list_setting_number_pane_t2_ParamLimits

0xa985,	// (0x00062f89) list_setting_number_pane_t2

0xa99f,	// (0x00062fa3) list_setting_number_pane_t3_ParamLimits

0xa99f,	// (0x00062fa3) list_setting_number_pane_t3

0x0003,

0xf650,	// (0x00067c54) list_setting_number_pane_t_ParamLimits

0xf650,	// (0x00067c54) list_setting_number_pane_t

0xa946,	// (0x00062f4a) set_value_pane_ParamLimits

0xa946,	// (0x00062f4a) set_value_pane

0x94ab,	// (0x00061aaf) bg_set_opt_pane_ParamLimits

0x94ab,	// (0x00061aaf) bg_set_opt_pane

0xdd70,	// (0x00066374) set_value_pane_t1

0x94cc,	// (0x00061ad0) slider_set_pane_cp3

0x94d5,	// (0x00061ad9) volume_small_pane_cp

0x94de,	// (0x00061ae2) list_form_gen_pane

0x94e7,	// (0x00061aeb) scroll_pane_cp8

0xa9e2,	// (0x00062fe6) form_field_data_pane_ParamLimits

0xa9e2,	// (0x00062fe6) form_field_data_pane

0xa9ff,	// (0x00063003) form_field_data_wide_pane_ParamLimits

0xa9ff,	// (0x00063003) form_field_data_wide_pane

0xaa23,	// (0x00063027) form_field_popup_pane_ParamLimits

0xaa23,	// (0x00063027) form_field_popup_pane

0xdd8e,	// (0x00066392) form_field_popup_wide_pane_ParamLimits

0xdd8e,	// (0x00066392) form_field_popup_wide_pane

0xddaf,	// (0x000663b3) form_field_slider_pane_ParamLimits

0xddaf,	// (0x000663b3) form_field_slider_pane

0xddc2,	// (0x000663c6) form_field_slider_wide_pane_ParamLimits

0xddc2,	// (0x000663c6) form_field_slider_wide_pane

0x94f8,	// (0x00061afc) data_form_pane

0xaa4f,	// (0x00063053) form_field_data_pane_t1

0x9504,	// (0x00061b08) input_focus_pane

0xddd5,	// (0x000663d9) data_form_wide_pane

0xddf2,	// (0x000663f6) form_field_data_wide_pane_t1

0x927f,	// (0x00061883) input_focus_pane_cp6

0xaa69,	// (0x0006306d) form_field_popup_pane_t1

0x9504,	// (0x00061b08) input_focus_pane_cp7

0x9532,	// (0x00061b36) list_form_pane

0xde1c,	// (0x00066420) form_field_popup_wide_pane_t1

0x9504,	// (0x00061b08) input_focus_pane_cp8

0x953e,	// (0x00061b42) list_form_wide_pane

0xaa8b,	// (0x0006308f) form_field_slider_pane_t1_ParamLimits

0xaa8b,	// (0x0006308f) form_field_slider_pane_t1

0xaaa3,	// (0x000630a7) form_field_slider_pane_t2_ParamLimits

0xaaa3,	// (0x000630a7) form_field_slider_pane_t2

0x0001,

0xf660,	// (0x00067c64) form_field_slider_pane_t_ParamLimits

0xf660,	// (0x00067c64) form_field_slider_pane_t

0x579b,	// (0x0005dd9f) input_focus_pane_cp9_ParamLimits

0x579b,	// (0x0005dd9f) input_focus_pane_cp9

0xaab8,	// (0x000630bc) slider_cont_pane_ParamLimits

0xaab8,	// (0x000630bc) slider_cont_pane

0x954a,	// (0x00061b4e) form_field_slider_wide_pane_t1_ParamLimits

0x954a,	// (0x00061b4e) form_field_slider_wide_pane_t1

0xde31,	// (0x00066435) form_field_slider_wide_pane_t2_ParamLimits

0xde31,	// (0x00066435) form_field_slider_wide_pane_t2

0x0001,

0xf665,	// (0x00067c69) form_field_slider_wide_pane_t_ParamLimits

0xf665,	// (0x00067c69) form_field_slider_wide_pane_t

0x579b,	// (0x0005dd9f) input_focus_pane_cp10_ParamLimits

0x579b,	// (0x0005dd9f) input_focus_pane_cp10

0xaacc,	// (0x000630d0) slider_cont_pane_cp1_ParamLimits

0xaacc,	// (0x000630d0) slider_cont_pane_cp1

0xaae0,	// (0x000630e4) slider_form_pane_cp

0x955c,	// (0x00061b60) input_focus_pane_g1

0x9564,	// (0x00061b68) input_focus_pane_g2

0x956c,	// (0x00061b70) input_focus_pane_g3

0x9574,	// (0x00061b78) input_focus_pane_g4

0x957c,	// (0x00061b80) input_focus_pane_g5

0x9584,	// (0x00061b88) input_focus_pane_g6

0x958c,	// (0x00061b90) input_focus_pane_g7

0x9594,	// (0x00061b98) input_focus_pane_g8

0x959c,	// (0x00061ba0) input_focus_pane_g9

0x5707,	// (0x0005dd0b) input_focus_pane_g10

0x0009,

0xf66a,	// (0x00067c6e) input_focus_pane_g

0x36bb,	// (0x0005bcbf) wait_border_pane_g3_copy1

0xaae8,	// (0x000630ec) data_form_pane_t1

0x5707,	// (0x0005dd0b) wait_anim_pane_g1_copy1

0xb995,	// (0x00063f99) data_form_wide_pane_t1

0xde43,	// (0x00066447) list_form_graphic_pane_cp_ParamLimits

0xde43,	// (0x00066447) list_form_graphic_pane_cp

0x47f0,	// (0x0005cdf4) slider_form_pane_g1

0x47f9,	// (0x0005cdfd) slider_form_pane_g2

0x0006,

0xf968,	// (0x00067f6c) slider_form_pane_g

0xab04,	// (0x00063108) list_form_graphic_pane_ParamLimits

0xab04,	// (0x00063108) list_form_graphic_pane

0xde55,	// (0x00066459) list_form_graphic_pane_g1

0xde5d,	// (0x00066461) list_form_graphic_pane_t1_ParamLimits

0xde5d,	// (0x00066461) list_form_graphic_pane_t1

0x575f,	// (0x0005dd63) list_highlight_pane_cp5_ParamLimits

0x575f,	// (0x0005dd63) list_highlight_pane_cp5

0xab15,	// (0x00063119) find_pane_g1

0xde72,	// (0x00066476) input_find_pane

0xab1e,	// (0x00063122) input_find_pane_g1_ParamLimits

0xab1e,	// (0x00063122) input_find_pane_g1

0xab2a,	// (0x0006312e) input_find_pane_t1_ParamLimits

0xab2a,	// (0x0006312e) input_find_pane_t1

0xab3f,	// (0x00063143) input_find_pane_t2_ParamLimits

0xab3f,	// (0x00063143) input_find_pane_t2

0x0001,

0xf67f,	// (0x00067c83) input_find_pane_t_ParamLimits

0xf67f,	// (0x00067c83) input_find_pane_t

0xde7b,	// (0x0006647f) input_focus_pane_cp5_ParamLimits

0xde7b,	// (0x0006647f) input_focus_pane_cp5

0xde8e,	// (0x00066492) bg_popup_window_pane_cp2_ParamLimits

0xde8e,	// (0x00066492) bg_popup_window_pane_cp2

0xde9b,	// (0x0006649f) listscroll_menu_pane_ParamLimits

0xde9b,	// (0x0006649f) listscroll_menu_pane

0xab60,	// (0x00063164) popup_submenu_window_ParamLimits

0xab60,	// (0x00063164) popup_submenu_window

0xdea7,	// (0x000664ab) find_popup_pane_g1

0xdeaf,	// (0x000664b3) input_popup_find_pane_cp

0xdeb9,	// (0x000664bd) input_focus_pane_cp4_ParamLimits

0xdeb9,	// (0x000664bd) input_focus_pane_cp4

0xdec7,	// (0x000664cb) input_popup_find_pane_t1_ParamLimits

0xdec7,	// (0x000664cb) input_popup_find_pane_t1

0x5711,	// (0x0005dd15) bg_popup_sub_pane_cp

0xdef5,	// (0x000664f9) listscroll_popup_sub_pane

0xdefd,	// (0x00066501) list_submenu_pane_ParamLimits

0xdefd,	// (0x00066501) list_submenu_pane

0xdf0e,	// (0x00066512) scroll_pane_cp4

0xdf16,	// (0x0006651a) list_single_popup_submenu_pane_ParamLimits

0xdf16,	// (0x0006651a) list_single_popup_submenu_pane

0xdf2b,	// (0x0006652f) list_single_popup_submenu_pane_g1

0xdf33,	// (0x00066537) list_single_popup_submenu_pane_t1_ParamLimits

0xdf33,	// (0x00066537) list_single_popup_submenu_pane_t1

0x579b,	// (0x0005dd9f) bg_active_tab_pane_cp1_ParamLimits

0x579b,	// (0x0005dd9f) bg_active_tab_pane_cp1

0xab9e,	// (0x000631a2) tabs_2_active_pane_g1

0xaba6,	// (0x000631aa) tabs_2_active_pane_t1

0x579b,	// (0x0005dd9f) bg_passive_tab_pane_cp1_ParamLimits

0x579b,	// (0x0005dd9f) bg_passive_tab_pane_cp1

0xab9e,	// (0x000631a2) tabs_2_passive_pane_g1

0xaba6,	// (0x000631aa) tabs_2_passive_pane_t1

0x575f,	// (0x0005dd63) bg_active_tab_pane_cp4

0xabb8,	// (0x000631bc) tabs_2_long_active_pane_t1

0x2b5f,	// (0x0005b163) bg_passive_tab_pane_cp4

0x09df,	// (0x00058fe3) list_single_midp_graphic_pane_g4_ParamLimits

0x575f,	// (0x0005dd63) bg_active_tab_pane_cp5

0xabcb,	// (0x000631cf) tabs_3_long_active_pane_t1

0x2b5f,	// (0x0005b163) bg_passive_tab_pane_cp5

0x09df,	// (0x00058fe3) list_single_midp_graphic_pane_g4

0x575f,	// (0x0005dd63) bg_popup_window_pane_cp13_ParamLimits

0x575f,	// (0x0005dd63) bg_popup_window_pane_cp13

0xdf51,	// (0x00066555) listscroll_popup_fast_pane_ParamLimits

0xdf51,	// (0x00066555) listscroll_popup_fast_pane

0xdf60,	// (0x00066564) grid_popup_fast_pane_ParamLimits

0xdf60,	// (0x00066564) grid_popup_fast_pane

0xdf72,	// (0x00066576) scroll_pane_cp9_ParamLimits

0xdf72,	// (0x00066576) scroll_pane_cp9

0x6215,	// (0x0005e819) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x6215,	// (0x0005e819) list_single_graphic_hl_pane_t1_cp2

0xdf96,	// (0x0006659a) input_focus_pane_cp20_ParamLimits

0xdf96,	// (0x0006659a) input_focus_pane_cp20

0xdfa4,	// (0x000665a8) query_popup_data_pane_t1_ParamLimits

0xdfa4,	// (0x000665a8) query_popup_data_pane_t1

0xdfb7,	// (0x000665bb) query_popup_data_pane_t2_ParamLimits

0xdfb7,	// (0x000665bb) query_popup_data_pane_t2

0xdffd,	// (0x00066601) query_popup_data_pane_t3_ParamLimits

0xdffd,	// (0x00066601) query_popup_data_pane_t3

0xe03e,	// (0x00066642) query_popup_data_pane_t4_ParamLimits

0xe03e,	// (0x00066642) query_popup_data_pane_t4

0xe07a,	// (0x0006667e) query_popup_data_pane_t5_ParamLimits

0xe07a,	// (0x0006667e) query_popup_data_pane_t5

0x0004,

0xf684,	// (0x00067c88) query_popup_data_pane_t_ParamLimits

0xf684,	// (0x00067c88) query_popup_data_pane_t

0x955c,	// (0x00061b60) bg_set_opt_pane_g1

0x9564,	// (0x00061b68) bg_set_opt_pane_g2

0x956c,	// (0x00061b70) bg_set_opt_pane_g3

0x9574,	// (0x00061b78) bg_set_opt_pane_g4

0x957c,	// (0x00061b80) bg_set_opt_pane_g5

0x9584,	// (0x00061b88) bg_set_opt_pane_g6

0x958c,	// (0x00061b90) bg_set_opt_pane_g7

0x9594,	// (0x00061b98) bg_set_opt_pane_g8

0x959c,	// (0x00061ba0) bg_set_opt_pane_g9

0x0008,

0xf68f,	// (0x00067c93) bg_set_opt_pane_g

0x000e,	// (0x00058612) control_top_pane_stacon_ParamLimits

0x000e,	// (0x00058612) control_top_pane_stacon

0x0061,	// (0x00058665) signal_pane_stacon_ParamLimits

0x0061,	// (0x00058665) signal_pane_stacon

0x24c1,	// (0x0005aac5) stacon_top_pane_g1_ParamLimits

0x24c1,	// (0x0005aac5) stacon_top_pane_g1

0x0086,	// (0x0005868a) title_pane_stacon_ParamLimits

0x0086,	// (0x0005868a) title_pane_stacon

0x00b0,	// (0x000586b4) uni_indicator_pane_stacon_ParamLimits

0x00b0,	// (0x000586b4) uni_indicator_pane_stacon

0x00c5,	// (0x000586c9) battery_pane_stacon_ParamLimits

0x00c5,	// (0x000586c9) battery_pane_stacon

0x0109,	// (0x0005870d) control_bottom_pane_stacon_ParamLimits

0x0109,	// (0x0005870d) control_bottom_pane_stacon

0x012c,	// (0x00058730) navi_pane_stacon_ParamLimits

0x012c,	// (0x00058730) navi_pane_stacon

0x24e3,	// (0x0005aae7) stacon_bottom_pane_g1_ParamLimits

0x24e3,	// (0x0005aae7) stacon_bottom_pane_g1

0xf286,	// (0x0006788a) aid_levels_signal_lsc_ParamLimits

0xf286,	// (0x0006788a) aid_levels_signal_lsc

0xf29d,	// (0x000678a1) signal_pane_stacon_g1_ParamLimits

0xf29d,	// (0x000678a1) signal_pane_stacon_g1

0xf2b1,	// (0x000678b5) signal_pane_stacon_g2_ParamLimits

0xf2b1,	// (0x000678b5) signal_pane_stacon_g2

0x0001,

0xf6a2,	// (0x00067ca6) signal_pane_stacon_g_ParamLimits

0xf6a2,	// (0x00067ca6) signal_pane_stacon_g

0xf2e6,	// (0x000678ea) title_pane_stacon_t1_ParamLimits

0xf2e6,	// (0x000678ea) title_pane_stacon_t1

0xe0be,	// (0x000666c2) uni_indicator_pane_stacon_g1

0xe0c8,	// (0x000666cc) uni_indicator_pane_stacon_g2

0xe0d2,	// (0x000666d6) uni_indicator_pane_stacon_g3

0xe0dc,	// (0x000666e0) uni_indicator_pane_stacon_g4

0x0003,

0xf6ae,	// (0x00067cb2) uni_indicator_pane_stacon_g

0xf30b,	// (0x0006790f) control_top_pane_stacon_g1

0xf313,	// (0x00067917) control_top_pane_stacon_t1_ParamLimits

0xf313,	// (0x00067917) control_top_pane_stacon_t1

0xf34a,	// (0x0006794e) aid_levels_battery_lsc_ParamLimits

0xf34a,	// (0x0006794e) aid_levels_battery_lsc

0xf362,	// (0x00067966) battery_pane_stacon_g1_ParamLimits

0xf362,	// (0x00067966) battery_pane_stacon_g1

0xf374,	// (0x00067978) battery_pane_stacon_g2_ParamLimits

0xf374,	// (0x00067978) battery_pane_stacon_g2

0x0001,

0xf6b7,	// (0x00067cbb) battery_pane_stacon_g_ParamLimits

0xf6b7,	// (0x00067cbb) battery_pane_stacon_g

0xf3b2,	// (0x000679b6) navi_icon_pane_stacon

0xf3c6,	// (0x000679ca) navi_navi_pane_stacon

0xf3b2,	// (0x000679b6) navi_text_pane_stacon

0xf3dc,	// (0x000679e0) control_bottom_pane_stacon_g1

0xf3e4,	// (0x000679e8) control_bottom_pane_stacon_t1_ParamLimits

0xf3e4,	// (0x000679e8) control_bottom_pane_stacon_t1

0xabdd,	// (0x000631e1) grid_app_pane_ParamLimits

0xabdd,	// (0x000631e1) grid_app_pane

0xac15,	// (0x00063219) scroll_pane_cp15_ParamLimits

0xac15,	// (0x00063219) scroll_pane_cp15

0xac2a,	// (0x0006322e) cell_app_pane_ParamLimits

0xac2a,	// (0x0006322e) cell_app_pane

0xac75,	// (0x00063279) cell_app_pane_g1_ParamLimits

0xac75,	// (0x00063279) cell_app_pane_g1

0xe100,	// (0x00066704) cell_app_pane_g2_ParamLimits

0xe100,	// (0x00066704) cell_app_pane_g2

0x0001,

0xf6bc,	// (0x00067cc0) cell_app_pane_g_ParamLimits

0xf6bc,	// (0x00067cc0) cell_app_pane_g

0xac99,	// (0x0006329d) cell_app_pane_t1_ParamLimits

0xac99,	// (0x0006329d) cell_app_pane_t1

0xe10c,	// (0x00066710) grid_highlight_pane_ParamLimits

0xe10c,	// (0x00066710) grid_highlight_pane

0x955c,	// (0x00061b60) cell_highlight_pane_g1

0x9564,	// (0x00061b68) cell_highlight_pane_g2

0x956c,	// (0x00061b70) cell_highlight_pane_g3

0x9574,	// (0x00061b78) cell_highlight_pane_g4

0x957c,	// (0x00061b80) cell_highlight_pane_g5

0x9584,	// (0x00061b88) cell_highlight_pane_g6

0x958c,	// (0x00061b90) cell_highlight_pane_g7

0x9594,	// (0x00061b98) cell_highlight_pane_g8

0x959c,	// (0x00061ba0) cell_highlight_pane_g9

0x5707,	// (0x0005dd0b) cell_highlight_pane_g10

0x0009,

0xf66a,	// (0x00067c6e) cell_highlight_pane_g

0xe11d,	// (0x00066721) bg_scroll_pane

0xf425,	// (0x00067a29) scroll_handle_pane

0xe164,	// (0x00066768) scroll_bg_pane_g1

0xe179,	// (0x0006677d) scroll_bg_pane_g2

0xe191,	// (0x00066795) scroll_bg_pane_g3

0x0002,

0xf6c1,	// (0x00067cc5) scroll_bg_pane_g

0xe1a6,	// (0x000667aa) scroll_handle_focus_pane_ParamLimits

0xe1a6,	// (0x000667aa) scroll_handle_focus_pane

0xe164,	// (0x00066768) scroll_handle_pane_g1

0xe1b3,	// (0x000667b7) scroll_handle_pane_g2

0xe191,	// (0x00066795) scroll_handle_pane_g3

0x0002,

0xf6c8,	// (0x00067ccc) scroll_handle_pane_g

0xdeb9,	// (0x000664bd) bg_popup_sub_pane_cp21_ParamLimits

0xdeb9,	// (0x000664bd) bg_popup_sub_pane_cp21

0xe1c7,	// (0x000667cb) popup_fep_japan_predictive_window_t1_ParamLimits

0xe1c7,	// (0x000667cb) popup_fep_japan_predictive_window_t1

0xe1de,	// (0x000667e2) popup_fep_japan_predictive_window_t2_ParamLimits

0xe1de,	// (0x000667e2) popup_fep_japan_predictive_window_t2

0xe211,	// (0x00066815) popup_fep_japan_predictive_window_t3_ParamLimits

0xe211,	// (0x00066815) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cf,	// (0x00067cd3) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cf,	// (0x00067cd3) popup_fep_japan_predictive_window_t

0x5711,	// (0x0005dd15) bg_popup_sub_pane_cp23

0xe248,	// (0x0006684c) listscroll_japin_cand_pane

0xe250,	// (0x00066854) popup_fep_japan_candidate_window_t1

0xe25e,	// (0x00066862) candidate_pane_ParamLimits

0xe25e,	// (0x00066862) candidate_pane

0xe270,	// (0x00066874) scroll_pane_cp30

0xe27a,	// (0x0006687e) list_single_popup_jap_candidate_pane_ParamLimits

0xe27a,	// (0x0006687e) list_single_popup_jap_candidate_pane

0x5711,	// (0x0005dd15) list_highlight_pane_cp30

0xe28e,	// (0x00066892) list_single_popup_jap_candidate_pane_t1

0xacd3,	// (0x000632d7) level_1_signal

0xace5,	// (0x000632e9) level_2_signal

0xacf8,	// (0x000632fc) level_3_signal

0xad0b,	// (0x0006330f) level_4_signal

0xad1e,	// (0x00063322) level_5_signal

0xad31,	// (0x00063335) level_6_signal

0xad44,	// (0x00063348) level_7_signal

0xacd3,	// (0x000632d7) level_1_battery

0xace5,	// (0x000632e9) level_2_battery

0xacf8,	// (0x000632fc) level_3_battery

0xad0b,	// (0x0006330f) level_4_battery

0xad1e,	// (0x00063322) level_5_battery

0xad31,	// (0x00063335) level_6_battery

0xad44,	// (0x00063348) level_7_battery

0x220b,	// (0x0005a80f) list_menu_pane_ParamLimits

0x220b,	// (0x0005a80f) list_menu_pane

0x2221,	// (0x0005a825) scroll_pane_cp25_ParamLimits

0x2221,	// (0x0005a825) scroll_pane_cp25

0x223a,	// (0x0005a83e) list_double2_graphic_pane_cp2_ParamLimits

0x223a,	// (0x0005a83e) list_double2_graphic_pane_cp2

0x223a,	// (0x0005a83e) list_double2_large_graphic_pane_cp2_ParamLimits

0x223a,	// (0x0005a83e) list_double2_large_graphic_pane_cp2

0x223a,	// (0x0005a83e) list_double2_pane_cp2_ParamLimits

0x223a,	// (0x0005a83e) list_double2_pane_cp2

0x223a,	// (0x0005a83e) list_double_graphic_pane_cp2_ParamLimits

0x223a,	// (0x0005a83e) list_double_graphic_pane_cp2

0x223a,	// (0x0005a83e) list_double_large_graphic_pane_cp2_ParamLimits

0x223a,	// (0x0005a83e) list_double_large_graphic_pane_cp2

0x223a,	// (0x0005a83e) list_double_number_pane_cp2_ParamLimits

0x223a,	// (0x0005a83e) list_double_number_pane_cp2

0x223a,	// (0x0005a83e) list_double_pane_cp2_ParamLimits

0x223a,	// (0x0005a83e) list_double_pane_cp2

0xad57,	// (0x0006335b) list_single_2graphic_pane_cp2_ParamLimits

0xad57,	// (0x0006335b) list_single_2graphic_pane_cp2

0xad57,	// (0x0006335b) list_single_graphic_heading_pane_cp2_ParamLimits

0xad57,	// (0x0006335b) list_single_graphic_heading_pane_cp2

0xad57,	// (0x0006335b) list_single_graphic_pane_cp2_ParamLimits

0xad57,	// (0x0006335b) list_single_graphic_pane_cp2

0xad57,	// (0x0006335b) list_single_heading_pane_cp2_ParamLimits

0xad57,	// (0x0006335b) list_single_heading_pane_cp2

0x227d,	// (0x0005a881) list_single_large_graphic_pane_cp2_ParamLimits

0x227d,	// (0x0005a881) list_single_large_graphic_pane_cp2

0xad57,	// (0x0006335b) list_single_number_heading_pane_cp2_ParamLimits

0xad57,	// (0x0006335b) list_single_number_heading_pane_cp2

0xad57,	// (0x0006335b) list_single_number_pane_cp2_ParamLimits

0xad57,	// (0x0006335b) list_single_number_pane_cp2

0xad6b,	// (0x0006336f) list_single_pane_cp2_ParamLimits

0xad6b,	// (0x0006336f) list_single_pane_cp2

0x2308,	// (0x0005a90c) bg_popup_sub_pane_cp22

0xf4d7,	// (0x00067adb) popup_side_volume_key_window_g1

0xf501,	// (0x00067b05) popup_side_volume_key_window_t1

0xf51f,	// (0x00067b23) volume_small_pane_cp1

0x579b,	// (0x0005dd9f) bg_popup_sub_pane_cp24_ParamLimits

0x579b,	// (0x0005dd9f) bg_popup_sub_pane_cp24

0x231e,	// (0x0005a922) fep_china_uni_candidate_pane_ParamLimits

0x231e,	// (0x0005a922) fep_china_uni_candidate_pane

0x2332,	// (0x0005a936) fep_china_uni_entry_pane

0x2342,	// (0x0005a946) popup_fep_china_uni_window_g1

0x235e,	// (0x0005a962) fep_china_uni_entry_pane_g1

0x2368,	// (0x0005a96c) fep_china_uni_entry_pane_g2

0x0001,

0xf700,	// (0x00067d04) fep_china_uni_entry_pane_g

0x2372,	// (0x0005a976) fep_entry_item_pane

0x237c,	// (0x0005a980) fep_candidate_item_pane

0x2384,	// (0x0005a988) fep_china_uni_candidate_pane_g1

0x238e,	// (0x0005a992) fep_china_uni_candidate_pane_g2

0x2396,	// (0x0005a99a) fep_china_uni_candidate_pane_g3

0x239e,	// (0x0005a9a2) fep_china_uni_candidate_pane_g4

0x0003,

0xf705,	// (0x00067d09) fep_china_uni_candidate_pane_g

0x5707,	// (0x0005dd0b) fep_entry_item_pane_g1

0x23a8,	// (0x0005a9ac) fep_entry_item_pane_t1_ParamLimits

0x23a8,	// (0x0005a9ac) fep_entry_item_pane_t1

0x23be,	// (0x0005a9c2) fep_candidate_item_pane_t1_ParamLimits

0x23be,	// (0x0005a9c2) fep_candidate_item_pane_t1

0x23d3,	// (0x0005a9d7) fep_candidate_item_pane_t2_ParamLimits

0x23d3,	// (0x0005a9d7) fep_candidate_item_pane_t2

0x0001,

0xf70e,	// (0x00067d12) fep_candidate_item_pane_t_ParamLimits

0xf70e,	// (0x00067d12) fep_candidate_item_pane_t

0x575f,	// (0x0005dd63) list_highlight_pane_cp31_ParamLimits

0x575f,	// (0x0005dd63) list_highlight_pane_cp31

0x23e5,	// (0x0005a9e9) level_1_signal_lsc

0x23ee,	// (0x0005a9f2) level_2_signal_lsc

0x23f7,	// (0x0005a9fb) level_3_signal_lsc

0x2400,	// (0x0005aa04) level_4_signal_lsc

0x2409,	// (0x0005aa0d) level_5_signal_lsc

0x2412,	// (0x0005aa16) level_6_signal_lsc

0x241b,	// (0x0005aa1f) level_7_signal_lsc

0x241b,	// (0x0005aa1f) level_1_battery_lsc

0x2424,	// (0x0005aa28) level_2_battery_lsc

0x242d,	// (0x0005aa31) level_3_battery_lsc

0x2436,	// (0x0005aa3a) level_4_battery_lsc

0x243f,	// (0x0005aa43) level_5_battery_lsc

0x2448,	// (0x0005aa4c) level_6_battery_lsc

0x23e5,	// (0x0005a9e9) level_7_battery_lsc

0x2451,	// (0x0005aa55) scroll_handle_focus_pane_g1

0x245a,	// (0x0005aa5e) scroll_handle_focus_pane_g2

0x2463,	// (0x0005aa67) scroll_handle_focus_pane_g3

0x0002,

0xf713,	// (0x00067d17) scroll_handle_focus_pane_g

0xadfa,	// (0x000633fe) list_single_2graphic_pane_g1_ParamLimits

0xadfa,	// (0x000633fe) list_single_2graphic_pane_g1

0xa5b6,	// (0x00062bba) list_single_2graphic_pane_g2_ParamLimits

0xa5b6,	// (0x00062bba) list_single_2graphic_pane_g2

0x303f,	// (0x0005b643) list_single_2graphic_pane_g3_ParamLimits

0x303f,	// (0x0005b643) list_single_2graphic_pane_g3

0xae06,	// (0x0006340a) list_single_2graphic_pane_g4_ParamLimits

0xae06,	// (0x0006340a) list_single_2graphic_pane_g4

0x0003,

0xf71a,	// (0x00067d1e) list_single_2graphic_pane_g_ParamLimits

0xf71a,	// (0x00067d1e) list_single_2graphic_pane_g

0xae17,	// (0x0006341b) list_single_2graphic_pane_t1_ParamLimits

0xae17,	// (0x0006341b) list_single_2graphic_pane_t1

0xae45,	// (0x00063449) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xae45,	// (0x00063449) list_double2_graphic_large_graphic_pane_g1

0xa7ba,	// (0x00062dbe) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa7ba,	// (0x00062dbe) list_double2_graphic_large_graphic_pane_g2

0xa707,	// (0x00062d0b) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa707,	// (0x00062d0b) list_double2_graphic_large_graphic_pane_g3

0xae57,	// (0x0006345b) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xae57,	// (0x0006345b) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf723,	// (0x00067d27) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf723,	// (0x00067d27) list_double2_graphic_large_graphic_pane_g

0xae63,	// (0x00063467) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xae63,	// (0x00063467) list_double2_graphic_large_graphic_pane_t1

0xae79,	// (0x0006347d) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xae79,	// (0x0006347d) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72c,	// (0x00067d30) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72c,	// (0x00067d30) list_double2_graphic_large_graphic_pane_t

0x25a6,	// (0x0005abaa) popup_fast_swap_window_ParamLimits

0x25a6,	// (0x0005abaa) popup_fast_swap_window

0x25c4,	// (0x0005abc8) popup_side_volume_key_window

0x25e2,	// (0x0005abe6) stacon_top_pane

0x25ec,	// (0x0005abf0) status_pane_ParamLimits

0x25ec,	// (0x0005abf0) status_pane

0x56fd,	// (0x0005dd01) status_small_pane

0x5711,	// (0x0005dd15) control_pane

0x5711,	// (0x0005dd15) stacon_bottom_pane

0x94e7,	// (0x00061aeb) scroll_pane_cp121

0x94de,	// (0x00061ae2) set_content_pane

0x246c,	// (0x0005aa70) bg_active_tab_pane_g1_cp1

0x2475,	// (0x0005aa79) bg_active_tab_pane_g2_cp1

0x247e,	// (0x0005aa82) bg_active_tab_pane_g3_cp1

0x246c,	// (0x0005aa70) bg_passive_tab_pane_g1_cp1

0x2475,	// (0x0005aa79) bg_passive_tab_pane_g2_cp1

0x247e,	// (0x0005aa82) bg_passive_tab_pane_g3_cp1

0x2487,	// (0x0005aa8b) bg_active_tab_pane_g1_cp2

0x2475,	// (0x0005aa79) bg_active_tab_pane_g2_cp2

0x2490,	// (0x0005aa94) bg_active_tab_pane_g3_cp2

0x2487,	// (0x0005aa8b) bg_passive_tab_pane_g1_cp2

0x2475,	// (0x0005aa79) bg_passive_tab_pane_g2_cp2

0x2490,	// (0x0005aa94) bg_passive_tab_pane_g3_cp2

0x2499,	// (0x0005aa9d) bg_active_tab_pane_g1_cp3

0x2475,	// (0x0005aa79) bg_active_tab_pane_g2_cp3

0x24a2,	// (0x0005aaa6) bg_active_tab_pane_g3_cp3

0x2499,	// (0x0005aa9d) bg_passive_tab_pane_g1_cp3

0x2475,	// (0x0005aa79) bg_passive_tab_pane_g2_cp3

0x24a2,	// (0x0005aaa6) bg_passive_tab_pane_g3_cp3

0x24ab,	// (0x0005aaaf) bg_active_tab_pane_g1_cp4

0x2475,	// (0x0005aa79) bg_active_tab_pane_g2_cp4

0x24b6,	// (0x0005aaba) bg_active_tab_pane_g3_cp4

0x24ab,	// (0x0005aaaf) bg_passive_tab_pane_g1_cp4

0x2475,	// (0x0005aa79) bg_passive_tab_pane_g2_cp4

0x24b6,	// (0x0005aaba) bg_passive_tab_pane_g3_cp4

0x24ff,	// (0x0005ab03) bg_active_tab_pane_g1_cp5

0x2475,	// (0x0005aa79) bg_active_tab_pane_g2_cp5

0x2508,	// (0x0005ab0c) bg_active_tab_pane_g3_cp5

0x24ff,	// (0x0005ab03) bg_passive_tab_pane_g1_cp5

0x2475,	// (0x0005aa79) bg_passive_tab_pane_g2_cp5

0x2508,	// (0x0005ab0c) bg_passive_tab_pane_g3_cp5

0x4e10,	// (0x0005d414) list_set_graphic_pane_ParamLimits

0x4e10,	// (0x0005d414) list_set_graphic_pane

0x5711,	// (0x0005dd15) bg_set_opt_pane_cp4

0x2527,	// (0x0005ab2b) list_set_graphic_pane_g1_ParamLimits

0x2527,	// (0x0005ab2b) list_set_graphic_pane_g1

0x2533,	// (0x0005ab37) list_set_graphic_pane_g2_ParamLimits

0x2533,	// (0x0005ab37) list_set_graphic_pane_g2

0x0001,

0xf731,	// (0x00067d35) list_set_graphic_pane_g_ParamLimits

0xf731,	// (0x00067d35) list_set_graphic_pane_g

0x0009,

0xfab6,	// (0x000680ba) volume_small_pane_cp_g

0x2557,	// (0x0005ab5b) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x2557,	// (0x0005ab5b) list_double2_large_graphic_pane_g1_cp2

0x2565,	// (0x0005ab69) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2565,	// (0x0005ab69) list_double2_large_graphic_pane_g2_cp2

0x2576,	// (0x0005ab7a) list_double2_large_graphic_pane_g3_cp2

0x257e,	// (0x0005ab82) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x257e,	// (0x0005ab82) list_double2_large_graphic_pane_t1_cp2

0x2594,	// (0x0005ab98) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2594,	// (0x0005ab98) list_double2_large_graphic_pane_t2_cp2

0x438d,	// (0x0005c991) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x438d,	// (0x0005c991) list_double_large_graphic_pane_g1_cp2

0x43a0,	// (0x0005c9a4) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x43a0,	// (0x0005c9a4) list_double_large_graphic_pane_g2_cp2

0x26fe,	// (0x0005ad02) list_double_large_graphic_pane_g3_cp2

0x43b1,	// (0x0005c9b5) list_double_large_graphic_pane_g4_cp

0x43b9,	// (0x0005c9bd) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x43b9,	// (0x0005c9bd) list_double_large_graphic_pane_t1_cp2

0x43d0,	// (0x0005c9d4) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x43d0,	// (0x0005c9d4) list_double_large_graphic_pane_t2_cp2

0x25fa,	// (0x0005abfe) list_double2_graphic_pane_g1_cp2_ParamLimits

0x25fa,	// (0x0005abfe) list_double2_graphic_pane_g1_cp2

0x2608,	// (0x0005ac0c) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2608,	// (0x0005ac0c) list_double2_graphic_pane_g2_cp2

0x2619,	// (0x0005ac1d) list_double2_graphic_pane_g3_cp2

0x2623,	// (0x0005ac27) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2623,	// (0x0005ac27) list_double2_graphic_pane_t1_cp2

0x2639,	// (0x0005ac3d) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2639,	// (0x0005ac3d) list_double2_graphic_pane_t2_cp2

0x21c0,	// (0x0005a7c4) list_single_number_heading_pane_g1_cp2_ParamLimits

0x21c0,	// (0x0005a7c4) list_single_number_heading_pane_g1_cp2

0x264b,	// (0x0005ac4f) list_single_number_heading_pane_g2_cp2

0x2653,	// (0x0005ac57) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2653,	// (0x0005ac57) list_single_number_heading_pane_t1_cp2

0x2669,	// (0x0005ac6d) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2669,	// (0x0005ac6d) list_single_number_heading_pane_t2_cp2

0x267d,	// (0x0005ac81) list_single_number_heading_pane_t3_cp2_ParamLimits

0x267d,	// (0x0005ac81) list_single_number_heading_pane_t3_cp2

0x21c0,	// (0x0005a7c4) list_single_heading_pane_g1_cp2_ParamLimits

0x21c0,	// (0x0005a7c4) list_single_heading_pane_g1_cp2

0x264b,	// (0x0005ac4f) list_single_heading_pane_g2_cp2

0x2653,	// (0x0005ac57) list_single_heading_pane_t1_cp2_ParamLimits

0x2653,	// (0x0005ac57) list_single_heading_pane_t1_cp2

0x4187,	// (0x0005c78b) list_single_heading_pane_t2_cp2_ParamLimits

0x4187,	// (0x0005c78b) list_single_heading_pane_t2_cp2

0x40cf,	// (0x0005c6d3) list_double_graphic_pane_g1_cp2_ParamLimits

0x40cf,	// (0x0005c6d3) list_double_graphic_pane_g1_cp2

0x40db,	// (0x0005c6df) list_double_graphic_pane_g2_cp2_ParamLimits

0x40db,	// (0x0005c6df) list_double_graphic_pane_g2_cp2

0x40ea,	// (0x0005c6ee) list_double_graphic_pane_g3_cp2

0x40f2,	// (0x0005c6f6) list_double_graphic_pane_t1_cp2_ParamLimits

0x40f2,	// (0x0005c6f6) list_double_graphic_pane_t1_cp2

0x4108,	// (0x0005c70c) list_double_graphic_pane_t2_cp2_ParamLimits

0x4108,	// (0x0005c70c) list_double_graphic_pane_t2_cp2

0x26f2,	// (0x0005acf6) list_double_number_pane_g1_cp2_ParamLimits

0x26f2,	// (0x0005acf6) list_double_number_pane_g1_cp2

0x26fe,	// (0x0005ad02) list_double_number_pane_g2_cp2

0x4093,	// (0x0005c697) list_double_number_pane_t1_cp2_ParamLimits

0x4093,	// (0x0005c697) list_double_number_pane_t1_cp2

0x40a7,	// (0x0005c6ab) list_double_number_pane_t2_cp2_ParamLimits

0x40a7,	// (0x0005c6ab) list_double_number_pane_t2_cp2

0x40bd,	// (0x0005c6c1) list_double_number_pane_t3_cp2_ParamLimits

0x40bd,	// (0x0005c6c1) list_double_number_pane_t3_cp2

0x3f7c,	// (0x0005c580) list_single_graphic_pane_g1_cp2_ParamLimits

0x3f7c,	// (0x0005c580) list_single_graphic_pane_g1_cp2

0x2767,	// (0x0005ad6b) list_single_graphic_pane_g2_cp2_ParamLimits

0x2767,	// (0x0005ad6b) list_single_graphic_pane_g2_cp2

0x2773,	// (0x0005ad77) list_single_graphic_pane_g3_cp2

0x3f52,	// (0x0005c556) list_single_graphic_pane_t1_cp2_ParamLimits

0x3f52,	// (0x0005c556) list_single_graphic_pane_t1_cp2

0x2767,	// (0x0005ad6b) list_single_number_pane_g1_cp2_ParamLimits

0x2767,	// (0x0005ad6b) list_single_number_pane_g1_cp2

0x2773,	// (0x0005ad77) list_single_number_pane_g2_cp2

0x3f52,	// (0x0005c556) list_single_number_pane_t1_cp2_ParamLimits

0x3f52,	// (0x0005c556) list_single_number_pane_t1_cp2

0x3f68,	// (0x0005c56c) list_single_number_pane_t2_cp2_ParamLimits

0x3f68,	// (0x0005c56c) list_single_number_pane_t2_cp2

0x2565,	// (0x0005ab69) list_double2_pane_g1_cp2_ParamLimits

0x2565,	// (0x0005ab69) list_double2_pane_g1_cp2

0x2576,	// (0x0005ab7a) list_double2_pane_g2_cp2

0x26ca,	// (0x0005acce) list_double2_pane_t1_cp2_ParamLimits

0x26ca,	// (0x0005acce) list_double2_pane_t1_cp2

0x26e0,	// (0x0005ace4) list_double2_pane_t2_cp2_ParamLimits

0x26e0,	// (0x0005ace4) list_double2_pane_t2_cp2

0x26f2,	// (0x0005acf6) list_double_pane_g1_cp2_ParamLimits

0x26f2,	// (0x0005acf6) list_double_pane_g1_cp2

0x26fe,	// (0x0005ad02) list_double_pane_g2_cp2

0x2706,	// (0x0005ad0a) list_double_pane_t1_cp2_ParamLimits

0x2706,	// (0x0005ad0a) list_double_pane_t1_cp2

0x271c,	// (0x0005ad20) list_double_pane_t2_cp2_ParamLimits

0x271c,	// (0x0005ad20) list_double_pane_t2_cp2

0x2757,	// (0x0005ad5b) list_single_pane_cp2_g3

0x2767,	// (0x0005ad6b) list_single_pane_g1_cp2_ParamLimits

0x2767,	// (0x0005ad6b) list_single_pane_g1_cp2

0x2773,	// (0x0005ad77) list_single_pane_g2_cp2

0x277b,	// (0x0005ad7f) list_single_pane_t1_cp2_ParamLimits

0x277b,	// (0x0005ad7f) list_single_pane_t1_cp2

0x2793,	// (0x0005ad97) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x2793,	// (0x0005ad97) list_single_large_graphic_pane_g1_cp2

0x27a1,	// (0x0005ada5) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x27a1,	// (0x0005ada5) list_single_large_graphic_pane_g2_cp2

0x27ad,	// (0x0005adb1) list_single_large_graphic_pane_g3_cp2

0x27b5,	// (0x0005adb9) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x27b5,	// (0x0005adb9) list_single_large_graphic_pane_g4_cp1

0x27cf,	// (0x0005add3) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x27cf,	// (0x0005add3) list_single_large_graphic_pane_t1_cp2

0x3f1c,	// (0x0005c520) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3f1c,	// (0x0005c520) list_single_graphic_heading_pane_g1_cp2

0x3ee9,	// (0x0005c4ed) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x3ee9,	// (0x0005c4ed) list_single_graphic_heading_pane_g4_cp2

0x2773,	// (0x0005ad77) list_single_graphic_heading_pane_g5_cp2

0x3f28,	// (0x0005c52c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3f28,	// (0x0005c52c) list_single_graphic_heading_pane_t1_cp2

0x3f3e,	// (0x0005c542) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3f3e,	// (0x0005c542) list_single_graphic_heading_pane_t2_cp2

0x3edd,	// (0x0005c4e1) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3edd,	// (0x0005c4e1) list_single_2graphic_pane_g1_cp2

0x3ee9,	// (0x0005c4ed) list_single_2graphic_pane_g2_cp2_ParamLimits

0x3ee9,	// (0x0005c4ed) list_single_2graphic_pane_g2_cp2

0x2773,	// (0x0005ad77) list_single_2graphic_pane_g3_cp2

0x3efa,	// (0x0005c4fe) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3efa,	// (0x0005c4fe) list_single_2graphic_pane_g4_cp2

0x3f06,	// (0x0005c50a) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3f06,	// (0x0005c50a) list_single_2graphic_pane_t1_cp2

0x5707,	// (0x0005dd0b) list_highlight_pane_g10_cp1

0x38c7,	// (0x0005becb) list_highlight_pane_g1_cp1

0x38cf,	// (0x0005bed3) list_highlight_pane_g2_cp1

0x38d7,	// (0x0005bedb) list_highlight_pane_g3_cp1

0x38df,	// (0x0005bee3) list_highlight_pane_g4_cp1

0x38e7,	// (0x0005beeb) list_highlight_pane_g5_cp1

0x38ef,	// (0x0005bef3) list_highlight_pane_g6_cp1

0x38f7,	// (0x0005befb) list_highlight_pane_g7_cp1

0x38ff,	// (0x0005bf03) list_highlight_pane_g8_cp1

0x3907,	// (0x0005bf0b) list_highlight_pane_g9_cp1

0xc651,	// (0x00064c55) form_field_slider_pane_t3

0xc65f,	// (0x00064c63) form_field_slider_pane_t4

0x3803,	// (0x0005be07) slider_form_pane_ParamLimits

0x3803,	// (0x0005be07) slider_form_pane

0x5711,	// (0x0005dd15) control_abbreviations

0x5711,	// (0x0005dd15) control_conventions

0x5711,	// (0x0005dd15) control_definitions

0x5711,	// (0x0005dd15) format_table_attribute

0x41dd,	// (0x0005c7e1) bg_popup_preview_window_pane_g9

0x5711,	// (0x0005dd15) format_table_data2

0x5711,	// (0x0005dd15) format_table_data3

0x5711,	// (0x0005dd15) format_table_data_example

0x0008,

0x5711,	// (0x0005dd15) intro_purpose

0xf8c8,	// (0x00067ecc) bg_popup_preview_window_pane_g

0x5711,	// (0x0005dd15) texts_category

0x5711,	// (0x0005dd15) texts_graphics

0x27e5,	// (0x0005ade9) text_digital

0x27f4,	// (0x0005adf8) text_primary

0x2803,	// (0x0005ae07) text_primary_small

0x2812,	// (0x0005ae16) text_secondary

0x2821,	// (0x0005ae25) text_title

0x4930,	// (0x0005cf34) bg_passive_tab_pane_g1_cp3_srt

0x2475,	// (0x0005aa79) bg_passive_tab_pane_g2_cp3_srt

0x4939,	// (0x0005cf3d) bg_passive_tab_pane_g3_cp3_srt

0x579b,	// (0x0005dd9f) bg_active_tab_pane_cp3_srt_ParamLimits

0x579b,	// (0x0005dd9f) bg_active_tab_pane_cp3_srt

0x4942,	// (0x0005cf46) tabs_4_active_pane_srt_g1

0xca62,	// (0x00065066) tabs_4_active_pane_srt_t1_ParamLimits

0xca62,	// (0x00065066) tabs_4_active_pane_srt_t1

0x4930,	// (0x0005cf34) bg_active_tab_pane_g1_cp3_copy1

0x2475,	// (0x0005aa79) bg_active_tab_pane_g2_cp3_copy1

0x4939,	// (0x0005cf3d) bg_active_tab_pane_g3_cp3_copy1

0x575f,	// (0x0005dd63) tabs_2_long_active_pane_srt_ParamLimits

0x575f,	// (0x0005dd63) tabs_2_long_active_pane_srt

0x575f,	// (0x0005dd63) tabs_2_long_passive_pane_srt_ParamLimits

0x575f,	// (0x0005dd63) tabs_2_long_passive_pane_srt

0x2b5f,	// (0x0005b163) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2b5f,	// (0x0005b163) bg_passive_tab_pane_cp4_srt

0x4607,	// (0x0005cc0b) bg_passive_tab_pane_g1_cp4_srt

0x2475,	// (0x0005aa79) bg_passive_tab_pane_g2_cp4_srt

0x4610,	// (0x0005cc14) bg_passive_tab_pane_g3_cp4_srt

0x575f,	// (0x0005dd63) bg_active_tab_pane_cp4_srt_ParamLimits

0x575f,	// (0x0005dd63) bg_active_tab_pane_cp4_srt

0xc831,	// (0x00064e35) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc831,	// (0x00064e35) tabs_2_long_active_pane_srt_t1

0x4607,	// (0x0005cc0b) bg_active_tab_pane_g1_cp4_srt

0x2475,	// (0x0005aa79) bg_active_tab_pane_g2_cp4_srt

0x4610,	// (0x0005cc14) bg_active_tab_pane_g3_cp4_srt

0x579b,	// (0x0005dd9f) tabs_3_long_active_pane_srt_ParamLimits

0x579b,	// (0x0005dd9f) tabs_3_long_active_pane_srt

0x579b,	// (0x0005dd9f) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x579b,	// (0x0005dd9f) tabs_3_long_passive_pane_cp_srt

0x579b,	// (0x0005dd9f) tabs_3_long_passive_pane_srt_ParamLimits

0x579b,	// (0x0005dd9f) tabs_3_long_passive_pane_srt

0x2b5f,	// (0x0005b163) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2b5f,	// (0x0005b163) bg_passive_tab_pane_cp5_srt

0x24ff,	// (0x0005ab03) bg_passive_tab_pane_g1_cp5_srt

0x2475,	// (0x0005aa79) bg_passive_tab_pane_g2_cp5_srt

0x2508,	// (0x0005ab0c) bg_passive_tab_pane_g3_cp5_srt

0x575f,	// (0x0005dd63) bg_active_tab_pane_cp5_srt_ParamLimits

0x575f,	// (0x0005dd63) bg_active_tab_pane_cp5_srt

0xc81b,	// (0x00064e1f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc81b,	// (0x00064e1f) tabs_3_long_active_pane_srt_t1

0x24ff,	// (0x0005ab03) bg_active_tab_pane_g1_cp5_srt

0x2475,	// (0x0005aa79) bg_active_tab_pane_g2_cp5_srt

0x2508,	// (0x0005ab0c) bg_active_tab_pane_g3_cp5_srt

0x45e7,	// (0x0005cbeb) navi_text_pane_srt_t1

0x45df,	// (0x0005cbe3) navi_icon_pane_srt_g1

0x29f9,	// (0x0005affd) midp_editing_number_pane_srt

0x2830,	// (0x0005ae34) midp_ticker_pane_srt

0x2a01,	// (0x0005b005) midp_ticker_pane_srt_g1

0x2a09,	// (0x0005b00d) midp_ticker_pane_srt_g2

0x0001,

0xf750,	// (0x00067d54) midp_ticker_pane_srt_g

0x2a11,	// (0x0005b015) midp_ticker_pane_srt_t1

0x45d0,	// (0x0005cbd4) midp_editing_number_pane_t1_copy1

0xae8b,	// (0x0006348f) listscroll_midp_pane

0xae8b,	// (0x0006348f) midp_form_pane

0x28a7,	// (0x0005aeab) midp_info_popup_window_ParamLimits

0x28a7,	// (0x0005aeab) midp_info_popup_window

0xdeb9,	// (0x000664bd) bg_popup_sub_pane_cp50_ParamLimits

0xdeb9,	// (0x000664bd) bg_popup_sub_pane_cp50

0x34e9,	// (0x0005baed) listscroll_midp_info_pane_ParamLimits

0x34e9,	// (0x0005baed) listscroll_midp_info_pane

0x34c9,	// (0x0005bacd) listscroll_form_midp_pane_ParamLimits

0x34c9,	// (0x0005bacd) listscroll_form_midp_pane

0x34d5,	// (0x0005bad9) scroll_bar_cp050

0x34c9,	// (0x0005bacd) list_midp_pane

0x53ed,	// (0x0005d9f1) signal_pane_g2_cp

0x33e3,	// (0x0005b9e7) listscroll_midp_info_pane_t1_ParamLimits

0x33e3,	// (0x0005b9e7) listscroll_midp_info_pane_t1

0x33fb,	// (0x0005b9ff) listscroll_midp_info_pane_t2_ParamLimits

0x33fb,	// (0x0005b9ff) listscroll_midp_info_pane_t2

0x3439,	// (0x0005ba3d) listscroll_midp_info_pane_t3_ParamLimits

0x3439,	// (0x0005ba3d) listscroll_midp_info_pane_t3

0x3473,	// (0x0005ba77) listscroll_midp_info_pane_t4_ParamLimits

0x3473,	// (0x0005ba77) listscroll_midp_info_pane_t4

0x0003,

0xf803,	// (0x00067e07) listscroll_midp_info_pane_t_ParamLimits

0xf803,	// (0x00067e07) listscroll_midp_info_pane_t

0xdf0e,	// (0x00066512) scroll_pane_cp21

0x337d,	// (0x0005b981) form_midp_field_choice_group_pane

0x3386,	// (0x0005b98a) form_midp_field_text_pane

0x33c9,	// (0x0005b9cd) form_midp_field_time_pane

0x33d1,	// (0x0005b9d5) form_midp_gauge_slider_pane

0x33da,	// (0x0005b9de) form_midp_gauge_wait_pane

0x5711,	// (0x0005dd15) form_midp_image_pane

0xb919,	// (0x00063f1d) list_single_midp_pane_ParamLimits

0xb919,	// (0x00063f1d) list_single_midp_pane

0xc62c,	// (0x00064c30) form_midp_field_text_pane_t1

0x3133,	// (0x0005b737) input_focus_pane_cp050

0x336c,	// (0x0005b970) list_midp_form_text_pane

0x3310,	// (0x0005b914) form_midp_field_choice_group_pane_t1

0x331e,	// (0x0005b922) input_focus_pane_cp051

0x3332,	// (0x0005b936) list_midp_choice_pane

0x5711,	// (0x0005dd15) status_idle_pane

0x32f4,	// (0x0005b8f8) form_midp_field_time_pane_t1

0x5707,	// (0x0005dd0b) wait_anim_pane_g2_copy1

0x3302,	// (0x0005b906) form_midp_field_time_pane_t2

0x0001,

0x2957,	// (0x0005af5b) aid_navinavi_width_2_pane

0xf7fe,	// (0x00067e02) form_midp_field_time_pane_t

0x5711,	// (0x0005dd15) input_focus_pane_cp052

0x5711,	// (0x0005dd15) bg_input_focus_pane_cp040

0x32b4,	// (0x0005b8b8) form_midp_gauge_slider_pane_t1

0x32c2,	// (0x0005b8c6) form_midp_gauge_slider_pane_t2

0xc610,	// (0x00064c14) form_midp_gauge_slider_pane_t3

0xc61e,	// (0x00064c22) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f5,	// (0x00067df9) form_midp_gauge_slider_pane_t

0x32ec,	// (0x0005b8f0) form_midp_slider_pane

0x575f,	// (0x0005dd63) bg_input_focus_pane_cp041_ParamLimits

0x575f,	// (0x0005dd63) bg_input_focus_pane_cp041

0x3281,	// (0x0005b885) form_midp_gauge_wait_pane_t1_ParamLimits

0x3281,	// (0x0005b885) form_midp_gauge_wait_pane_t1

0x3293,	// (0x0005b897) form_midp_gauge_wait_pane_t2_ParamLimits

0x3293,	// (0x0005b897) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f0,	// (0x00067df4) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f0,	// (0x00067df4) form_midp_gauge_wait_pane_t

0x32a5,	// (0x0005b8a9) form_midp_wait_pane_ParamLimits

0x32a5,	// (0x0005b8a9) form_midp_wait_pane

0x3249,	// (0x0005b84d) form_midp_image_pane_g1

0x3252,	// (0x0005b856) form_midp_image_pane_t1

0x3261,	// (0x0005b865) form_midp_image_pane_t2

0x3270,	// (0x0005b874) form_midp_image_pane_t3

0x0002,

0xf7e9,	// (0x00067ded) form_midp_image_pane_t

0x3240,	// (0x0005b844) list_single_midp_pane_g1

0xe353,	// (0x00066957) list_single_midp_pane_t1

0xc5f9,	// (0x00064bfd) list_midp_form_item_pane_ParamLimits

0xc5f9,	// (0x00064bfd) list_midp_form_item_pane

0x28ff,	// (0x0005af03) list_midp_form_item_pane_t1

0x290e,	// (0x0005af12) midp_ticker_pane_g1

0x291a,	// (0x0005af1e) midp_ticker_pane_g2

0x0001,

0xf736,	// (0x00067d3a) midp_ticker_pane_g

0xaf2f,	// (0x00063533) midp_ticker_pane_t1

0xc9ba,	// (0x00064fbe) midp_editing_number_pane_t1

0x481b,	// (0x0005ce1f) midp_editing_number_pane

0x482a,	// (0x0005ce2e) midp_ticker_pane

0x34f5,	// (0x0005baf9) ai_message_heading_pane

0x5711,	// (0x0005dd15) bg_popup_window_pane_cp14

0x34fd,	// (0x0005bb01) listscroll_ai_message_pane

0x4556,	// (0x0005cb5a) ai_message_heading_pane_g1_ParamLimits

0x4556,	// (0x0005cb5a) ai_message_heading_pane_g1

0x4562,	// (0x0005cb66) ai_message_heading_pane_g2_ParamLimits

0x4562,	// (0x0005cb66) ai_message_heading_pane_g2

0x4570,	// (0x0005cb74) ai_message_heading_pane_g3_ParamLimits

0x4570,	// (0x0005cb74) ai_message_heading_pane_g3

0x457c,	// (0x0005cb80) ai_message_heading_pane_g4_ParamLimits

0x457c,	// (0x0005cb80) ai_message_heading_pane_g4

0x0003,

0xf92a,	// (0x00067f2e) ai_message_heading_pane_g_ParamLimits

0xf92a,	// (0x00067f2e) ai_message_heading_pane_g

0x4588,	// (0x0005cb8c) ai_message_heading_pane_t1_ParamLimits

0x4588,	// (0x0005cb8c) ai_message_heading_pane_t1

0x45a2,	// (0x0005cba6) ai_message_heading_pane_t2_ParamLimits

0x45a2,	// (0x0005cba6) ai_message_heading_pane_t2

0x0001,

0xf933,	// (0x00067f37) ai_message_heading_pane_t_ParamLimits

0xf933,	// (0x00067f37) ai_message_heading_pane_t

0x45b6,	// (0x0005cbba) bg_popup_heading_pane_cp1_ParamLimits

0x45b6,	// (0x0005cbba) bg_popup_heading_pane_cp1

0x4544,	// (0x0005cb48) list_ai_message_pane_ParamLimits

0x4544,	// (0x0005cb48) list_ai_message_pane

0xdf0e,	// (0x00066512) scroll_pane_cp10

0x44e0,	// (0x0005cae4) list_ai_message_pane_g1

0x44e8,	// (0x0005caec) list_ai_message_pane_g2

0x0001,

0xf907,	// (0x00067f0b) list_ai_message_pane_g

0x44f0,	// (0x0005caf4) list_ai_message_pane_t1_ParamLimits

0x44f0,	// (0x0005caf4) list_ai_message_pane_t1

0x4505,	// (0x0005cb09) list_ai_message_pane_t2_ParamLimits

0x4505,	// (0x0005cb09) list_ai_message_pane_t2

0x451a,	// (0x0005cb1e) list_ai_message_pane_t3_ParamLimits

0x451a,	// (0x0005cb1e) list_ai_message_pane_t3

0x452f,	// (0x0005cb33) list_ai_message_pane_t4_ParamLimits

0x452f,	// (0x0005cb33) list_ai_message_pane_t4

0x0003,

0xf90c,	// (0x00067f10) list_ai_message_pane_t_ParamLimits

0xf90c,	// (0x00067f10) list_ai_message_pane_t

0xc801,	// (0x00064e05) cell_ai_soft_ind_pane_ParamLimits

0xc801,	// (0x00064e05) cell_ai_soft_ind_pane

0x2938,	// (0x0005af3c) cell_ai_soft_ind_pane_g1_ParamLimits

0x2938,	// (0x0005af3c) cell_ai_soft_ind_pane_g1

0x5711,	// (0x0005dd15) grid_highlight_cp1

0x2945,	// (0x0005af49) text_secondary_cp56_ParamLimits

0x2945,	// (0x0005af49) text_secondary_cp56

0x449e,	// (0x0005caa2) example_general_pane_ParamLimits

0x449e,	// (0x0005caa2) example_general_pane

0x44aa,	// (0x0005caae) example_parent_pane_g1_ParamLimits

0x44aa,	// (0x0005caae) example_parent_pane_g1

0x44b6,	// (0x0005caba) example_parent_pane_t1_ParamLimits

0x44b6,	// (0x0005caba) example_parent_pane_t1

0xb4a5,	// (0x00063aa9) popup_preview_text_window_ParamLimits

0xb4a5,	// (0x00063aa9) popup_preview_text_window

0x275f,	// (0x0005ad63) list_single_pane_cp2_g4

0x90c3,	// (0x000616c7) bg_popup_preview_window_pane_ParamLimits

0x90c3,	// (0x000616c7) bg_popup_preview_window_pane

0x41e7,	// (0x0005c7eb) popup_preview_text_window_t1_ParamLimits

0x41e7,	// (0x0005c7eb) popup_preview_text_window_t1

0x4205,	// (0x0005c809) popup_preview_text_window_t2_ParamLimits

0x4205,	// (0x0005c809) popup_preview_text_window_t2

0x424e,	// (0x0005c852) popup_preview_text_window_t3_ParamLimits

0x424e,	// (0x0005c852) popup_preview_text_window_t3

0x4293,	// (0x0005c897) popup_preview_text_window_t4_ParamLimits

0x4293,	// (0x0005c897) popup_preview_text_window_t4

0x0004,

0xf8db,	// (0x00067edf) popup_preview_text_window_t_ParamLimits

0xf8db,	// (0x00067edf) popup_preview_text_window_t

0x4311,	// (0x0005c915) scroll_pane_cp11

0x30a7,	// (0x0005b6ab) bg_popup_preview_window_pane_g1

0x419b,	// (0x0005c79f) bg_popup_preview_window_pane_g2

0x41a5,	// (0x0005c7a9) bg_popup_preview_window_pane_g3

0x41af,	// (0x0005c7b3) bg_popup_preview_window_pane_g4

0x41b9,	// (0x0005c7bd) bg_popup_preview_window_pane_g5

0x41c3,	// (0x0005c7c7) bg_popup_preview_window_pane_g6

0x41cb,	// (0x0005c7cf) bg_popup_preview_window_pane_g7

0x41d3,	// (0x0005c7d7) bg_popup_preview_window_pane_g8

0xef52,	// (0x00067556) aid_popup_width_pane

0xb415,	// (0x00063a19) popup_midp_note_alarm_window_ParamLimits

0xb415,	// (0x00063a19) popup_midp_note_alarm_window

0x94f8,	// (0x00061afc) data_form_pane_ParamLimits

0xaa45,	// (0x00063049) form_field_data_pane_g1

0xaa4f,	// (0x00063053) form_field_data_pane_t1_ParamLimits

0x9504,	// (0x00061b08) input_focus_pane_ParamLimits

0xddd5,	// (0x000663d9) data_form_wide_pane_ParamLimits

0xdde6,	// (0x000663ea) form_field_data_wide_pane_g1

0xddf2,	// (0x000663f6) form_field_data_wide_pane_t1_ParamLimits

0x927f,	// (0x00061883) input_focus_pane_cp6_ParamLimits

0xab90,	// (0x00063194) input_popup_find_pane_g1_ParamLimits

0xab90,	// (0x00063194) input_popup_find_pane_g1

0xf385,	// (0x00067989) aid_navi_side_left_pane

0xf39a,	// (0x0006799e) aid_navi_side_right_pane

0x39c2,	// (0x0005bfc6) bg_popup_window_pane_cp30_ParamLimits

0x39c2,	// (0x0005bfc6) bg_popup_window_pane_cp30

0x3a3c,	// (0x0005c040) popup_midp_note_alarm_window_g1_ParamLimits

0x3a3c,	// (0x0005c040) popup_midp_note_alarm_window_g1

0x3c5a,	// (0x0005c25e) popup_midp_note_alarm_window_t1_ParamLimits

0x3c5a,	// (0x0005c25e) popup_midp_note_alarm_window_t1

0x3cfb,	// (0x0005c2ff) popup_midp_note_alarm_window_t2_ParamLimits

0x3cfb,	// (0x0005c2ff) popup_midp_note_alarm_window_t2

0x3da9,	// (0x0005c3ad) popup_midp_note_alarm_window_t3_ParamLimits

0x3da9,	// (0x0005c3ad) popup_midp_note_alarm_window_t3

0x3ddb,	// (0x0005c3df) popup_midp_note_alarm_window_t4_ParamLimits

0x3ddb,	// (0x0005c3df) popup_midp_note_alarm_window_t4

0x3e01,	// (0x0005c405) popup_midp_note_alarm_window_t5_ParamLimits

0x3e01,	// (0x0005c405) popup_midp_note_alarm_window_t5

0x000a,

0xf878,	// (0x00067e7c) popup_midp_note_alarm_window_t_ParamLimits

0xf878,	// (0x00067e7c) popup_midp_note_alarm_window_t

0x3ead,	// (0x0005c4b1) wait_bar_pane_cp1_ParamLimits

0x3ead,	// (0x0005c4b1) wait_bar_pane_cp1

0x5711,	// (0x0005dd15) wait_anim_pane_copy1

0x5711,	// (0x0005dd15) wait_border_pane_copy1

0x36a7,	// (0x0005bcab) wait_border_pane_g1_copy1

0xde0c,	// (0x00066410) form_field_popup_pane_g1

0xaa69,	// (0x0006306d) form_field_popup_pane_t1_ParamLimits

0x9504,	// (0x00061b08) input_focus_pane_cp7_ParamLimits

0x9532,	// (0x00061b36) list_form_pane_ParamLimits

0xde14,	// (0x00066418) form_field_popup_wide_pane_g1

0xde1c,	// (0x00066420) form_field_popup_wide_pane_t1_ParamLimits

0x9504,	// (0x00061b08) input_focus_pane_cp8_ParamLimits

0x953e,	// (0x00061b42) list_form_wide_pane_ParamLimits

0x49d4,	// (0x0005cfd8) aid_size_cell_graphic_pane

0xaae8,	// (0x000630ec) data_form_pane_t1_ParamLimits

0xb995,	// (0x00063f99) data_form_wide_pane_t1_ParamLimits

0xc266,	// (0x0006486a) bg_status_flat_pane

0xa1c8,	// (0x000627cc) title_pane_t1_ParamLimits

0x5727,	// (0x0005dd2b) title_pane_t2_ParamLimits

0x574d,	// (0x0005dd51) title_pane_t3_ParamLimits

0xf530,	// (0x00067b34) title_pane_t_ParamLimits

0xacd3,	// (0x000632d7) level_1_signal_ParamLimits

0xace5,	// (0x000632e9) level_2_signal_ParamLimits

0xacf8,	// (0x000632fc) level_3_signal_ParamLimits

0xad0b,	// (0x0006330f) level_4_signal_ParamLimits

0xad1e,	// (0x00063322) level_5_signal_ParamLimits

0xad31,	// (0x00063335) level_6_signal_ParamLimits

0xad44,	// (0x00063348) level_7_signal_ParamLimits

0xacd3,	// (0x000632d7) level_1_battery_ParamLimits

0xace5,	// (0x000632e9) level_2_battery_ParamLimits

0xacf8,	// (0x000632fc) level_3_battery_ParamLimits

0xad0b,	// (0x0006330f) level_4_battery_ParamLimits

0xad1e,	// (0x00063322) level_5_battery_ParamLimits

0xad31,	// (0x00063335) level_6_battery_ParamLimits

0xad44,	// (0x00063348) level_7_battery_ParamLimits

0x38c7,	// (0x0005becb) bg_status_flat_pane_g1

0x38cf,	// (0x0005bed3) bg_status_flat_pane_g2

0x38d7,	// (0x0005bedb) bg_status_flat_pane_g3

0x38df,	// (0x0005bee3) bg_status_flat_pane_g4

0x38e7,	// (0x0005beeb) bg_status_flat_pane_g5

0x38ef,	// (0x0005bef3) bg_status_flat_pane_g6

0x38f7,	// (0x0005befb) bg_status_flat_pane_g7

0xa25c,	// (0x00062860) tabs_3_active_pane_t1_ParamLimits

0xa25c,	// (0x00062860) tabs_3_passive_pane_t1_ParamLimits

0xa276,	// (0x0006287a) tabs_4_active_pane_t1_ParamLimits

0xa276,	// (0x0006287a) tabs_4_1_passive_pane_t1_ParamLimits

0xaba6,	// (0x000631aa) tabs_2_active_pane_t1_ParamLimits

0xaba6,	// (0x000631aa) tabs_2_passive_pane_t1_ParamLimits

0x575f,	// (0x0005dd63) bg_active_tab_pane_cp4_ParamLimits

0xabb8,	// (0x000631bc) tabs_2_long_active_pane_t1_ParamLimits

0x2b5f,	// (0x0005b163) bg_passive_tab_pane_cp4_ParamLimits

0x0a12,	// (0x00059016) list_single_midp_graphic_pane_t1_ParamLimits

0x575f,	// (0x0005dd63) bg_active_tab_pane_cp5_ParamLimits

0xabcb,	// (0x000631cf) tabs_3_long_active_pane_t1_ParamLimits

0x2b5f,	// (0x0005b163) bg_passive_tab_pane_cp5_ParamLimits

0x0a12,	// (0x00059016) list_single_midp_graphic_pane_t1

0xc266,	// (0x0006486a) bg_status_flat_pane_ParamLimits

0x2d17,	// (0x0005b31b) indicator_pane_cp2_ParamLimits

0x2d17,	// (0x0005b31b) indicator_pane_cp2

0xc3fa,	// (0x000649fe) navi_pane_srt_ParamLimits

0xc3fa,	// (0x000649fe) navi_pane_srt

0x2e7c,	// (0x0005b480) popup_clock_digital_analogue_window_cp1

0x8c62,	// (0x00061266) indicator_pane_t1

0x2830,	// (0x0005ae34) copy_highlight_pane

0x2830,	// (0x0005ae34) cursor_graphics_pane

0x2830,	// (0x0005ae34) graphic_within_text_pane

0x2830,	// (0x0005ae34) link_highlight_pane

0x42d4,	// (0x0005c8d8) popup_preview_text_window_t5_ParamLimits

0x42d4,	// (0x0005c8d8) popup_preview_text_window_t5

0x2961,	// (0x0005af65) cursor_digital_pane

0x2961,	// (0x0005af65) cursor_primary_pane

0x2972,	// (0x0005af76) cursor_primary_small_pane

0x297a,	// (0x0005af7e) cursor_secondary_pane

0x2982,	// (0x0005af86) cursor_title_pane

0x2961,	// (0x0005af65) link_highlight_digital_pane

0x2969,	// (0x0005af6d) link_highlight_primary_pane

0x2972,	// (0x0005af76) link_highlight_primary_small_pane

0x297a,	// (0x0005af7e) link_highlight_secondary_pane

0x2982,	// (0x0005af86) link_highlight_title_pane

0x2961,	// (0x0005af65) copy_highlight_digital_pane

0x2961,	// (0x0005af65) copy_highlight_primary_pane

0x2972,	// (0x0005af76) copy_highlight_primary_small_pane

0x297a,	// (0x0005af7e) copy_highlight_secondary_pane

0x2982,	// (0x0005af86) copy_highlight_title_pane

0x297a,	// (0x0005af7e) graphic_text_digital_pane

0x3965,	// (0x0005bf69) graphic_text_primary_pane

0x396e,	// (0x0005bf72) graphic_text_primary_small_pane

0x2972,	// (0x0005af76) graphic_text_secondary_pane

0x2961,	// (0x0005af65) graphic_text_title_pane

0xaf41,	// (0x00063545) cursor_primary_pane_g1

0x3957,	// (0x0005bf5b) cursor_text_primary_t1

0xc681,	// (0x00064c85) cursor_primary_small_pane_g1

0x3949,	// (0x0005bf4d) cursor_text_primary_small_t1

0xc677,	// (0x00064c7b) cursor_primary_small_pane_g1_copy1

0x3931,	// (0x0005bf35) cursor_text_primary_small_t1_copy1

0x390f,	// (0x0005bf13) cursor_text_title_t1

0xc66d,	// (0x00064c71) cursor_title_pane_g1

0xaf41,	// (0x00063545) cursor_digital_pane_g1

0x2994,	// (0x0005af98) cursor_text_digital_t1

0x29a2,	// (0x0005afa6) link_highlight_primary_pane_g1

0x38b8,	// (0x0005bebc) link_highlight_primary_pane_t1

0x29a2,	// (0x0005afa6) link_highlight_primary_small_pane_g1

0x29aa,	// (0x0005afae) link_highlight_primary_small_pane_t1

0x29b9,	// (0x0005afbd) link_highlight_secondary_pane_g1

0x29c1,	// (0x0005afc5) link_highlight_secondary_pane_t1

0x382c,	// (0x0005be30) link_highlight_title_pane_g1

0x3834,	// (0x0005be38) link_highlight_title_pane_t1

0x3815,	// (0x0005be19) link_highlight_digital_pane_g1

0x381d,	// (0x0005be21) link_highlight_digital_pane_t1

0x36dd,	// (0x0005bce1) copy_highlight_primary_pane_g1

0x36f4,	// (0x0005bcf8) copy_highlight_primary_pane_t1

0x36dd,	// (0x0005bce1) copy_highlight_primary_small_pane_g1

0x36e5,	// (0x0005bce9) copy_highlight_primary_small_pane_t1

0x29d0,	// (0x0005afd4) copy_highlight_secondary_pane_g1

0x29d8,	// (0x0005afdc) copy_highlight_secondary_pane_t1

0x36c6,	// (0x0005bcca) copy_highlight_title_pane_g1

0x36ce,	// (0x0005bcd2) copy_highlight_title_pane_t1

0x36dd,	// (0x0005bce1) copy_highlight_digital_pane_g1

0x4ba6,	// (0x0005d1aa) copy_highlight_digital_pane_t1

0x4afa,	// (0x0005d0fe) graphic_text_primary_pane_g1

0x4b8a,	// (0x0005d18e) graphic_text_primary_pane_t1

0x4b98,	// (0x0005d19c) graphic_text_primary_pane_t2

0x0001,

0xf9a7,	// (0x00067fab) graphic_text_primary_pane_t

0x4b66,	// (0x0005d16a) graphic_text_primary_small_pane_g1

0x4b6e,	// (0x0005d172) graphic_text_primary_small_pane_t1

0x4b7c,	// (0x0005d180) graphic_text_primary_small_pane_t2

0x0001,

0xf9a2,	// (0x00067fa6) graphic_text_primary_small_pane_t

0x4b42,	// (0x0005d146) graphic_text_secondary_pane_g1

0x4b4a,	// (0x0005d14e) graphic_text_secondary_pane_t1

0x4b58,	// (0x0005d15c) graphic_text_secondary_pane_t2

0x0001,

0xf99d,	// (0x00067fa1) graphic_text_secondary_pane_t

0x4b1e,	// (0x0005d122) graphic_text_title_pane_g1

0x4b26,	// (0x0005d12a) graphic_text_title_pane_t1

0x4b34,	// (0x0005d138) graphic_text_title_pane_t2

0x0001,

0xf998,	// (0x00067f9c) graphic_text_title_pane_t

0x4afa,	// (0x0005d0fe) graphic_text_digital_pane_g1

0x4b02,	// (0x0005d106) graphic_text_digital_pane_t1

0x4b10,	// (0x0005d114) graphic_text_digital_pane_t2

0x0001,

0xf993,	// (0x00067f97) graphic_text_digital_pane_t

0x575f,	// (0x0005dd63) navi_icon_pane_srt_ParamLimits

0x575f,	// (0x0005dd63) navi_icon_pane_srt

0x5711,	// (0x0005dd15) navi_midp_pane_srt

0x5711,	// (0x0005dd15) navi_navi_pane_srt

0x575f,	// (0x0005dd63) navi_text_pane_srt_ParamLimits

0x575f,	// (0x0005dd63) navi_text_pane_srt

0x4ac5,	// (0x0005d0c9) navi_navi_icon_text_pane_srt

0x4acd,	// (0x0005d0d1) navi_navi_pane_srt_g1_ParamLimits

0x4acd,	// (0x0005d0d1) navi_navi_pane_srt_g1

0x4adf,	// (0x0005d0e3) navi_navi_pane_srt_g2_ParamLimits

0x4adf,	// (0x0005d0e3) navi_navi_pane_srt_g2

0x0001,

0xf98e,	// (0x00067f92) navi_navi_pane_srt_g_ParamLimits

0xf98e,	// (0x00067f92) navi_navi_pane_srt_g

0x4af1,	// (0x0005d0f5) navi_navi_tabs_pane_srt

0x4ac5,	// (0x0005d0c9) navi_navi_text_pane_srt

0x4ac5,	// (0x0005d0c9) navi_navi_volume_pane_srt

0x4ab6,	// (0x0005d0ba) navi_navi_text_pane_srt_t1

0x0e69,	// (0x0005946d) navi_navi_volume_pane_srt_g1

0x0e71,	// (0x00059475) volume_small_pane_srt_ParamLimits

0x0e71,	// (0x00059475) volume_small_pane_srt

0x014f,	// (0x00058753) volume_small_pane_srt_g1_ParamLimits

0x014f,	// (0x00058753) volume_small_pane_srt_g1

0x015f,	// (0x00058763) volume_small_pane_srt_g2_ParamLimits

0x015f,	// (0x00058763) volume_small_pane_srt_g2

0x0170,	// (0x00058774) volume_small_pane_srt_g3_ParamLimits

0x0170,	// (0x00058774) volume_small_pane_srt_g3

0x0181,	// (0x00058785) volume_small_pane_srt_g4_ParamLimits

0x0181,	// (0x00058785) volume_small_pane_srt_g4

0x0192,	// (0x00058796) volume_small_pane_srt_g5_ParamLimits

0x0192,	// (0x00058796) volume_small_pane_srt_g5

0x01a3,	// (0x000587a7) volume_small_pane_srt_g6_ParamLimits

0x01a3,	// (0x000587a7) volume_small_pane_srt_g6

0x01b4,	// (0x000587b8) volume_small_pane_srt_g7_ParamLimits

0x01b4,	// (0x000587b8) volume_small_pane_srt_g7

0x01c5,	// (0x000587c9) volume_small_pane_srt_g8_ParamLimits

0x01c5,	// (0x000587c9) volume_small_pane_srt_g8

0x01d6,	// (0x000587da) volume_small_pane_srt_g9_ParamLimits

0x01d6,	// (0x000587da) volume_small_pane_srt_g9

0x01e7,	// (0x000587eb) volume_small_pane_srt_g10_ParamLimits

0x01e7,	// (0x000587eb) volume_small_pane_srt_g10

0x0009,

0xf73b,	// (0x00067d3f) volume_small_pane_srt_g_ParamLimits

0xf73b,	// (0x00067d3f) volume_small_pane_srt_g

0x9178,	// (0x0006177c) query_popup_data_pane_cp2

0x4a9c,	// (0x0005d0a0) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4a9c,	// (0x0005d0a0) navi_navi_icon_text_pane_srt_t1

0x3965,	// (0x0005bf69) navi_tabs_2_long_pane_srt

0x3965,	// (0x0005bf69) navi_tabs_2_pane_srt

0x3965,	// (0x0005bf69) navi_tabs_3_long_pane_srt

0x3965,	// (0x0005bf69) navi_tabs_3_pane_srt

0x3965,	// (0x0005bf69) navi_tabs_4_pane_srt

0x0e49,	// (0x0005944d) tabs_2_active_pane_srt_ParamLimits

0x0e49,	// (0x0005944d) tabs_2_active_pane_srt

0x0e59,	// (0x0005945d) tabs_2_passive_pane_srt_ParamLimits

0x0e59,	// (0x0005945d) tabs_2_passive_pane_srt

0x3133,	// (0x0005b737) bg_passive_tab_pane_cp1_srt_ParamLimits

0x3133,	// (0x0005b737) bg_passive_tab_pane_cp1_srt

0x4a68,	// (0x0005d06c) bg_passive_tab_pane_g1_cp1_srt

0x2475,	// (0x0005aa79) bg_passive_tab_pane_g2_cp1_srt

0x4a71,	// (0x0005d075) bg_passive_tab_pane_g3_cp1_srt

0x579b,	// (0x0005dd9f) bg_active_tab_pane_cp1_srt_ParamLimits

0x579b,	// (0x0005dd9f) bg_active_tab_pane_cp1_srt

0x4a7a,	// (0x0005d07e) tabs_2_active_pane_srt_g1

0xcaee,	// (0x000650f2) tabs_2_active_pane_srt_t1_ParamLimits

0xcaee,	// (0x000650f2) tabs_2_active_pane_srt_t1

0x4a68,	// (0x0005d06c) bg_active_tab_pane_g1_cp1_srt

0x2475,	// (0x0005aa79) bg_active_tab_pane_g2_cp1_srt

0x4a71,	// (0x0005d075) bg_active_tab_pane_g3_cp1_srt

0x0e16,	// (0x0005941a) tabs_3_active_pane_srt_ParamLimits

0x0e16,	// (0x0005941a) tabs_3_active_pane_srt

0x0e27,	// (0x0005942b) tabs_3_passive_pane_cp_srt_ParamLimits

0x0e27,	// (0x0005942b) tabs_3_passive_pane_cp_srt

0x0e38,	// (0x0005943c) tabs_3_passive_pane_srt_ParamLimits

0x0e38,	// (0x0005943c) tabs_3_passive_pane_srt

0x3133,	// (0x0005b737) bg_passive_tab_pane_cp2_srt_ParamLimits

0x3133,	// (0x0005b737) bg_passive_tab_pane_cp2_srt

0x29e7,	// (0x0005afeb) bg_passive_tab_pane_g1_cp2_srt

0x2475,	// (0x0005aa79) bg_passive_tab_pane_g2_cp2_srt

0x29f0,	// (0x0005aff4) bg_passive_tab_pane_g3_cp2_srt

0x579b,	// (0x0005dd9f) bg_active_tab_pane_cp2_srt_ParamLimits

0x579b,	// (0x0005dd9f) bg_active_tab_pane_cp2_srt

0x4a4e,	// (0x0005d052) tabs_3_active_pane_srt_g1

0xcad8,	// (0x000650dc) tabs_3_active_pane_srt_t1_ParamLimits

0xcad8,	// (0x000650dc) tabs_3_active_pane_srt_t1

0x29e7,	// (0x0005afeb) bg_active_tab_pane_g1_cp2_srt

0x2475,	// (0x0005aa79) bg_active_tab_pane_g2_cp2_srt

0x29f0,	// (0x0005aff4) bg_active_tab_pane_g3_cp2_srt

0x0dce,	// (0x000593d2) tabs_4_active_pane_srt_ParamLimits

0x0dce,	// (0x000593d2) tabs_4_active_pane_srt

0x0de0,	// (0x000593e4) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0de0,	// (0x000593e4) tabs_4_passive_pane_cp2_srt

0x0339,	// (0x0005893d) aid_size_cell_toolbar

0x467a,	// (0x0005cc7e) main_idle_act_pane_ParamLimits

0x051c,	// (0x00058b20) popup_large_graphic_colour_window_ParamLimits

0xb76b,	// (0x00063d6f) popup_toolbar_window_ParamLimits

0xb76b,	// (0x00063d6f) popup_toolbar_window

0x4863,	// (0x0005ce67) list_single_graphic_2heading_pane_ParamLimits

0x4863,	// (0x0005ce67) list_single_graphic_2heading_pane

0xe0e6,	// (0x000666ea) aid_size_cell_apps_grid_lsc_pane

0xe0f8,	// (0x000666fc) aid_size_cell_apps_grid_prt_pane

0x2b5f,	// (0x0005b163) bg_wml_button_pane_cp1_ParamLimits

0x2b5f,	// (0x0005b163) bg_wml_button_pane_cp1

0xc62c,	// (0x00064c30) form_midp_field_text_pane_t1_ParamLimits

0x3133,	// (0x0005b737) input_focus_pane_cp050_ParamLimits

0x336c,	// (0x0005b970) list_midp_form_text_pane_ParamLimits

0x331e,	// (0x0005b922) input_focus_pane_cp051_ParamLimits

0x3332,	// (0x0005b936) list_midp_choice_pane_ParamLimits

0xc5c5,	// (0x00064bc9) list_single_2graphic_pane_cp3_ParamLimits

0xc5c5,	// (0x00064bc9) list_single_2graphic_pane_cp3

0xc5d8,	// (0x00064bdc) list_single_midp_graphic_pane_ParamLimits

0xc5d8,	// (0x00064bdc) list_single_midp_graphic_pane

0xf21a,	// (0x0006781e) list_single_graphic_2heading_pane_g1_ParamLimits

0xf21a,	// (0x0006781e) list_single_graphic_2heading_pane_g1

0xf226,	// (0x0006782a) list_single_graphic_2heading_pane_g4_ParamLimits

0xf226,	// (0x0006782a) list_single_graphic_2heading_pane_g4

0xf232,	// (0x00067836) list_single_graphic_2heading_pane_g5_ParamLimits

0xf232,	// (0x00067836) list_single_graphic_2heading_pane_g5

0x0002,

0xf78e,	// (0x00067d92) list_single_graphic_2heading_pane_g_ParamLimits

0xf78e,	// (0x00067d92) list_single_graphic_2heading_pane_g

0xf23e,	// (0x00067842) list_single_graphic_2heading_pane_t1_ParamLimits

0xf23e,	// (0x00067842) list_single_graphic_2heading_pane_t1

0xf252,	// (0x00067856) list_single_graphic_2heading_pane_t2_ParamLimits

0xf252,	// (0x00067856) list_single_graphic_2heading_pane_t2

0xf26e,	// (0x00067872) list_single_graphic_2heading_pane_t3_ParamLimits

0xf26e,	// (0x00067872) list_single_graphic_2heading_pane_t3

0x0002,

0xf795,	// (0x00067d99) list_single_graphic_2heading_pane_t_ParamLimits

0xf795,	// (0x00067d99) list_single_graphic_2heading_pane_t

0x2fcd,	// (0x0005b5d1) bg_popup_sub_pane_cp2

0x2ff7,	// (0x0005b5fb) grid_toobar_pane

0x0982,	// (0x00058f86) cell_toolbar_pane_ParamLimits

0x0982,	// (0x00058f86) cell_toolbar_pane

0x304b,	// (0x0005b64f) cell_toolbar_pane_g1_ParamLimits

0x304b,	// (0x0005b64f) cell_toolbar_pane_g1

0x305f,	// (0x0005b663) cell_toolbar_pane_g2_ParamLimits

0x305f,	// (0x0005b663) cell_toolbar_pane_g2

0x0001,

0xf7a3,	// (0x00067da7) cell_toolbar_pane_g_ParamLimits

0xf7a3,	// (0x00067da7) cell_toolbar_pane_g

0x3081,	// (0x0005b685) grid_highlight_pane_cp2_ParamLimits

0x3081,	// (0x0005b685) grid_highlight_pane_cp2

0x309b,	// (0x0005b69f) toolbar_button_pane

0x30a7,	// (0x0005b6ab) toolbar_button_pane_g1

0x30af,	// (0x0005b6b3) toolbar_button_pane_g2

0x30b7,	// (0x0005b6bb) toolbar_button_pane_g3

0x30bf,	// (0x0005b6c3) toolbar_button_pane_g4

0x30c7,	// (0x0005b6cb) toolbar_button_pane_g5

0x30cf,	// (0x0005b6d3) toolbar_button_pane_g6

0x30d7,	// (0x0005b6db) toolbar_button_pane_g7

0x30df,	// (0x0005b6e3) toolbar_button_pane_g8

0x30e7,	// (0x0005b6eb) toolbar_button_pane_g9

0x0009,

0xf7a8,	// (0x00067dac) toolbar_button_pane_g

0x09ba,	// (0x00058fbe) list_single_2graphic_pane_g1_cp3_ParamLimits

0x09ba,	// (0x00058fbe) list_single_2graphic_pane_g1_cp3

0xb8a7,	// (0x00063eab) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb8a7,	// (0x00063eab) list_single_2graphic_pane_g2_cp3

0x09d7,	// (0x00058fdb) list_single_2graphic_pane_g3_cp3

0x09df,	// (0x00058fe3) list_single_2graphic_pane_g4_cp3_ParamLimits

0x09df,	// (0x00058fe3) list_single_2graphic_pane_g4_cp3

0x09eb,	// (0x00058fef) list_single_2graphic_pane_t1_cp3_ParamLimits

0x09eb,	// (0x00058fef) list_single_2graphic_pane_t1_cp3

0x0a06,	// (0x0005900a) list_single_midp_graphic_pane_g2_ParamLimits

0x0a06,	// (0x0005900a) list_single_midp_graphic_pane_g2

0xf20a,	// (0x0006780e) aid_zoom_text_primary

0xf212,	// (0x00067816) aid_zoom_text_secondary

0x2aa1,	// (0x0005b0a5) status_small_pane_g7_ParamLimits

0x2aa1,	// (0x0005b0a5) status_small_pane_g7

0x2ac4,	// (0x0005b0c8) status_small_pane_t1_ParamLimits

0xa198,	// (0x0006279c) title_pane_g2

0x0003,

0xf527,	// (0x00067b2b) title_pane_g

0xa438,	// (0x00062a3c) aid_size_cell_colour_1_pane_ParamLimits

0xa438,	// (0x00062a3c) aid_size_cell_colour_1_pane

0xa44c,	// (0x00062a50) aid_size_cell_colour_2_pane_ParamLimits

0xa44c,	// (0x00062a50) aid_size_cell_colour_2_pane

0xa460,	// (0x00062a64) aid_size_cell_colour_3_pane_ParamLimits

0xa460,	// (0x00062a64) aid_size_cell_colour_3_pane

0xa474,	// (0x00062a78) aid_size_cell_colour_4_pane_ParamLimits

0xa474,	// (0x00062a78) aid_size_cell_colour_4_pane

0xf2c2,	// (0x000678c6) title_pane_stacon_g1_ParamLimits

0xf2c2,	// (0x000678c6) title_pane_stacon_g1

0x374b,	// (0x0005bd4f) popup_note_wait_window_g3_ParamLimits

0x374b,	// (0x0005bd4f) popup_note_wait_window_g3

0x37c2,	// (0x0005bdc6) popup_note_wait_window_t5_ParamLimits

0x37c2,	// (0x0005bdc6) popup_note_wait_window_t5

0x5711,	// (0x0005dd15) main_feb_china_hwr_fs_writing_pane

0xb0fc,	// (0x00063700) popup_feb_china_hwr_fs_window_ParamLimits

0xb0fc,	// (0x00063700) popup_feb_china_hwr_fs_window

0xb8b8,	// (0x00063ebc) aid_size_cell_hwr_fs_ParamLimits

0xb8b8,	// (0x00063ebc) aid_size_cell_hwr_fs

0x3133,	// (0x0005b737) bg_popup_sub_pane_cp3_ParamLimits

0x3133,	// (0x0005b737) bg_popup_sub_pane_cp3

0xb8cd,	// (0x00063ed1) grid_hwr_fs_pane_ParamLimits

0xb8cd,	// (0x00063ed1) grid_hwr_fs_pane

0x0a55,	// (0x00059059) linegrid_hwr_fs_pane_ParamLimits

0x0a55,	// (0x00059059) linegrid_hwr_fs_pane

0xb8e5,	// (0x00063ee9) cell_hwr_fs_pane_ParamLimits

0xb8e5,	// (0x00063ee9) cell_hwr_fs_pane

0x313f,	// (0x0005b743) linegrid_hwr_fs_pane_g1_ParamLimits

0x313f,	// (0x0005b743) linegrid_hwr_fs_pane_g1

0xc599,	// (0x00064b9d) linegrid_hwr_fs_pane_g2_ParamLimits

0xc599,	// (0x00064b9d) linegrid_hwr_fs_pane_g2

0x315d,	// (0x0005b761) linegrid_hwr_fs_pane_g3_ParamLimits

0x315d,	// (0x0005b761) linegrid_hwr_fs_pane_g3

0x0a89,	// (0x0005908d) linegrid_hwr_fs_pane_g4_ParamLimits

0x0a89,	// (0x0005908d) linegrid_hwr_fs_pane_g4

0x0aa7,	// (0x000590ab) linegrid_hwr_fs_pane_g5_ParamLimits

0x0aa7,	// (0x000590ab) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ce,	// (0x00067dd2) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ce,	// (0x00067dd2) linegrid_hwr_fs_pane_g

0x3169,	// (0x0005b76d) cell_hwr_fs_pane_g1_ParamLimits

0x3169,	// (0x0005b76d) cell_hwr_fs_pane_g1

0x2f0a,	// (0x0005b50e) cell_hwr_fs_pane_g2_ParamLimits

0x2f0a,	// (0x0005b50e) cell_hwr_fs_pane_g2

0xc5ab,	// (0x00064baf) cell_hwr_fs_pane_g3_ParamLimits

0xc5ab,	// (0x00064baf) cell_hwr_fs_pane_g3

0xc5b8,	// (0x00064bbc) cell_hwr_fs_pane_g4_ParamLimits

0xc5b8,	// (0x00064bbc) cell_hwr_fs_pane_g4

0x0003,

0xf7d9,	// (0x00067ddd) cell_hwr_fs_pane_g_ParamLimits

0xf7d9,	// (0x00067ddd) cell_hwr_fs_pane_g

0xb90b,	// (0x00063f0f) cell_hwr_fs_pane_t1

0x5711,	// (0x0005dd15) grid_highlight_pane_cp6

0x5711,	// (0x0005dd15) main_idle_act2_pane

0xdef5,	// (0x000664f9) aid_inside_area_popup_secondary

0xc6a1,	// (0x00064ca5) aid_inside_area_window_primary_ParamLimits

0xc6a1,	// (0x00064ca5) aid_inside_area_window_primary

0x4bb5,	// (0x0005d1b9) ai2_news_ticker_pane

0x4bbd,	// (0x0005d1c1) aid_size_cell_ai1_link_ParamLimits

0x4bbd,	// (0x0005d1c1) aid_size_cell_ai1_link

0x4bd7,	// (0x0005d1db) popup_ai2_data_window_ParamLimits

0x4bd7,	// (0x0005d1db) popup_ai2_data_window

0x4bf5,	// (0x0005d1f9) popup_ai2_link_window_ParamLimits

0x4bf5,	// (0x0005d1f9) popup_ai2_link_window

0x3133,	// (0x0005b737) bg_popup_sub_pane_cp4_ParamLimits

0x3133,	// (0x0005b737) bg_popup_sub_pane_cp4

0x4c0b,	// (0x0005d20f) grid_ai2_link_pane_ParamLimits

0x4c0b,	// (0x0005d20f) grid_ai2_link_pane

0x4c22,	// (0x0005d226) popup_ai2_link_window_g1_ParamLimits

0x4c22,	// (0x0005d226) popup_ai2_link_window_g1

0x4c2e,	// (0x0005d232) popup_ai2_link_window_g2_ParamLimits

0x4c2e,	// (0x0005d232) popup_ai2_link_window_g2

0x0001,

0xf9ac,	// (0x00067fb0) popup_ai2_link_window_g_ParamLimits

0xf9ac,	// (0x00067fb0) popup_ai2_link_window_g

0x4c3f,	// (0x0005d243) ai2_mp_button_pane

0x4c47,	// (0x0005d24b) ai2_mp_volume_pane

0x331e,	// (0x0005b922) bg_popup_sub_pane_cp5_ParamLimits

0x331e,	// (0x0005b922) bg_popup_sub_pane_cp5

0x4c4f,	// (0x0005d253) heading_ai2_gene_pane_ParamLimits

0x4c4f,	// (0x0005d253) heading_ai2_gene_pane

0x4c5b,	// (0x0005d25f) list_ai2_gene_pane_ParamLimits

0x4c5b,	// (0x0005d25f) list_ai2_gene_pane

0x4ca3,	// (0x0005d2a7) cell_ai2_link_pane_ParamLimits

0x4ca3,	// (0x0005d2a7) cell_ai2_link_pane

0x4cb9,	// (0x0005d2bd) cell_ai2_link_pane_g1

0x5711,	// (0x0005dd15) grid_highlight_pane_cp7

0x0e86,	// (0x0005948a) ai2_mp_volume_pane_g1

0x4d8c,	// (0x0005d390) ai2_mp_volume_pane_g2

0x4d01,	// (0x0005d305) list_ai2_gene_pane_t1

0x4d94,	// (0x0005d398) ai2_mp_volume_pane_g3

0x0002,

0xf9c5,	// (0x00067fc9) ai2_mp_volume_pane_g

0x0e8e,	// (0x00059492) volume_small_pane_cp3

0x4d9c,	// (0x0005d3a0) aid_size_cell_ai2_button

0x4da4,	// (0x0005d3a8) grid_ai2_button_pane

0x4dad,	// (0x0005d3b1) cell_ai2_button_pane_ParamLimits

0x4dad,	// (0x0005d3b1) cell_ai2_button_pane

0x5707,	// (0x0005dd0b) cell_ai2_button_pane_g1

0x5711,	// (0x0005dd15) grid_highlight_pane_cp8

0x4d4c,	// (0x0005d350) ai2_gene_pane_t1_ParamLimits

0x4d4c,	// (0x0005d350) ai2_gene_pane_t1

0xb078,	// (0x0006367c) aid_height_parent_landscape

0xc848,	// (0x00064e4c) aid_height_set_list

0x467a,	// (0x0005cc7e) aid_size_parent

0x49d4,	// (0x0005cfd8) aid_size_cell_graphic_pane_ParamLimits

0x4c6b,	// (0x0005d26f) popup_ai2_data_window_g1_ParamLimits

0x4c6b,	// (0x0005d26f) popup_ai2_data_window_g1

0x4c77,	// (0x0005d27b) ai2_news_ticker_pane_g1

0x4c7f,	// (0x0005d283) ai2_news_ticker_pane_g2

0x0001,

0xf9b1,	// (0x00067fb5) ai2_news_ticker_pane_g

0x4c87,	// (0x0005d28b) ai2_news_ticker_pane_t1

0x4c95,	// (0x0005d299) ai2_news_ticker_pane_t2

0x0001,

0xf9b6,	// (0x00067fba) ai2_news_ticker_pane_t

0x4cc2,	// (0x0005d2c6) heading_ai2_gene_pane_g1

0x4cca,	// (0x0005d2ce) heading_ai2_gene_pane_t1_ParamLimits

0x4cca,	// (0x0005d2ce) heading_ai2_gene_pane_t1

0x4cdf,	// (0x0005d2e3) list_highlight_pane_cp6

0x4ce7,	// (0x0005d2eb) ai2_gene_pane_ParamLimits

0x4ce7,	// (0x0005d2eb) ai2_gene_pane

0x4d0f,	// (0x0005d313) list_ai2_gene_pane_t2

0x0001,

0xf9bb,	// (0x00067fbf) list_ai2_gene_pane_t

0x4d1d,	// (0x0005d321) list_highlight_pane_cp8_ParamLimits

0x4d1d,	// (0x0005d321) list_highlight_pane_cp8

0x4d2e,	// (0x0005d332) ai2_gene_pane_g1_ParamLimits

0x4d2e,	// (0x0005d332) ai2_gene_pane_g1

0x4d40,	// (0x0005d344) ai2_gene_pane_g2_ParamLimits

0x4d40,	// (0x0005d344) ai2_gene_pane_g2

0x0001,

0xf9c0,	// (0x00067fc4) ai2_gene_pane_g_ParamLimits

0xf9c0,	// (0x00067fc4) ai2_gene_pane_g

0x949a,	// (0x00061a9e) scroll_pane_cp12

0xb037,	// (0x0006363b) control_pane_t3_ParamLimits

0xb037,	// (0x0006363b) control_pane_t3

0x2ab5,	// (0x0005b0b9) status_small_pane_g8_ParamLimits

0x2ab5,	// (0x0005b0b9) status_small_pane_g8

0xb19e,	// (0x000637a2) popup_find_window_ParamLimits

0xb455,	// (0x00063a59) popup_note_image_window_ParamLimits

0xdd4e,	// (0x00066352) list_double2_graphic_pane_vc_g1_ParamLimits

0xdd4e,	// (0x00066352) list_double2_graphic_pane_vc_g1

0x3033,	// (0x0005b637) list_double2_graphic_pane_vc_g2_ParamLimits

0x3033,	// (0x0005b637) list_double2_graphic_pane_vc_g2

0x303f,	// (0x0005b643) list_double2_graphic_pane_vc_g3_ParamLimits

0x303f,	// (0x0005b643) list_double2_graphic_pane_vc_g3

0x0002,

0xf79c,	// (0x00067da0) list_double2_graphic_pane_vc_g_ParamLimits

0xf79c,	// (0x00067da0) list_double2_graphic_pane_vc_g

0xe2a5,	// (0x000668a9) list_double2_graphic_pane_vc_t1_ParamLimits

0xe2a5,	// (0x000668a9) list_double2_graphic_pane_vc_t1

0x3033,	// (0x0005b637) list_single_heading_pane_vc_g1_ParamLimits

0x3033,	// (0x0005b637) list_single_heading_pane_vc_g1

0x303f,	// (0x0005b643) list_single_heading_pane_vc_g2_ParamLimits

0x303f,	// (0x0005b643) list_single_heading_pane_vc_g2

0x0001,

0xf5ab,	// (0x00067baf) list_single_heading_pane_vc_g_ParamLimits

0xf5ab,	// (0x00067baf) list_single_heading_pane_vc_g

0xe2bb,	// (0x000668bf) list_single_heading_pane_vc_t1_ParamLimits

0xe2bb,	// (0x000668bf) list_single_heading_pane_vc_t1

0xe2d1,	// (0x000668d5) list_single_heading_pane_vc_t2_ParamLimits

0xe2d1,	// (0x000668d5) list_single_heading_pane_vc_t2

0x0001,

0xf7bd,	// (0x00067dc1) list_single_heading_pane_vc_t_ParamLimits

0xf7bd,	// (0x00067dc1) list_single_heading_pane_vc_t

0x30ef,	// (0x0005b6f3) list_setting_number_pane_vc_g1_ParamLimits

0x30ef,	// (0x0005b6f3) list_setting_number_pane_vc_g1

0x30fb,	// (0x0005b6ff) list_setting_number_pane_vc_g2_ParamLimits

0x30fb,	// (0x0005b6ff) list_setting_number_pane_vc_g2

0x0001,

0xf7c2,	// (0x00067dc6) list_setting_number_pane_vc_g_ParamLimits

0xf7c2,	// (0x00067dc6) list_setting_number_pane_vc_g

0xe2e3,	// (0x000668e7) list_setting_number_pane_vc_t1_ParamLimits

0xe2e3,	// (0x000668e7) list_setting_number_pane_vc_t1

0xe2f7,	// (0x000668fb) list_setting_number_pane_vc_t2_ParamLimits

0xe2f7,	// (0x000668fb) list_setting_number_pane_vc_t2

0xe313,	// (0x00066917) list_setting_number_pane_vc_t3_ParamLimits

0xe313,	// (0x00066917) list_setting_number_pane_vc_t3

0x0002,

0xf7c7,	// (0x00067dcb) list_setting_number_pane_vc_t_ParamLimits

0xf7c7,	// (0x00067dcb) list_setting_number_pane_vc_t

0xe341,	// (0x00066945) set_value_pane_vc_ParamLimits

0xe341,	// (0x00066945) set_value_pane_vc

0x4863,	// (0x0005ce67) list_double2_graphic_pane_vc_ParamLimits

0x4863,	// (0x0005ce67) list_double2_graphic_pane_vc

0x4863,	// (0x0005ce67) list_double2_large_graphic_pane_vc_ParamLimits

0x4863,	// (0x0005ce67) list_double2_large_graphic_pane_vc

0x4863,	// (0x0005ce67) list_double2_pane_vc_ParamLimits

0x4863,	// (0x0005ce67) list_double2_pane_vc

0x4863,	// (0x0005ce67) list_double_graphic_heading_pane_vc_ParamLimits

0x4863,	// (0x0005ce67) list_double_graphic_heading_pane_vc

0x4863,	// (0x0005ce67) list_double_graphic_pane_vc_ParamLimits

0x4863,	// (0x0005ce67) list_double_graphic_pane_vc

0x4863,	// (0x0005ce67) list_double_heading_pane_vc_ParamLimits

0x4863,	// (0x0005ce67) list_double_heading_pane_vc

0x4877,	// (0x0005ce7b) list_double_large_graphic_pane_vc_ParamLimits

0x4877,	// (0x0005ce7b) list_double_large_graphic_pane_vc

0x4863,	// (0x0005ce67) list_double_number_pane_vc_ParamLimits

0x4863,	// (0x0005ce67) list_double_number_pane_vc

0x4863,	// (0x0005ce67) list_double_pane_vc_ParamLimits

0x4863,	// (0x0005ce67) list_double_pane_vc

0x4863,	// (0x0005ce67) list_double_time_pane_vc_ParamLimits

0x4863,	// (0x0005ce67) list_double_time_pane_vc

0x4863,	// (0x0005ce67) list_setting_number_pane_vc_ParamLimits

0x4863,	// (0x0005ce67) list_setting_number_pane_vc

0x4863,	// (0x0005ce67) list_setting_pane_vc_ParamLimits

0x4863,	// (0x0005ce67) list_setting_pane_vc

0x4863,	// (0x0005ce67) list_single_graphic_heading_pane_vc_ParamLimits

0x4863,	// (0x0005ce67) list_single_graphic_heading_pane_vc

0x4863,	// (0x0005ce67) list_single_heading_pane_vc_ParamLimits

0x4863,	// (0x0005ce67) list_single_heading_pane_vc

0x4863,	// (0x0005ce67) list_single_number_heading_pane_vc_ParamLimits

0x4863,	// (0x0005ce67) list_single_number_heading_pane_vc

0xe38a,	// (0x0006698e) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe38a,	// (0x0006698e) list_double_graphic_heading_pane_vc_g1

0x3033,	// (0x0005b637) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3033,	// (0x0005b637) list_double_graphic_heading_pane_vc_g2

0x303f,	// (0x0005b643) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x303f,	// (0x0005b643) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9cc,	// (0x00067fd0) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9cc,	// (0x00067fd0) list_double_graphic_heading_pane_vc_g

0xe396,	// (0x0006699a) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xe396,	// (0x0006699a) list_double_graphic_heading_pane_vc_t1

0xe3ac,	// (0x000669b0) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xe3ac,	// (0x000669b0) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d3,	// (0x00067fd7) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d3,	// (0x00067fd7) list_double_graphic_heading_pane_vc_t

0x30ef,	// (0x0005b6f3) list_setting_pane_vc_g1_ParamLimits

0x30ef,	// (0x0005b6f3) list_setting_pane_vc_g1

0x30fb,	// (0x0005b6ff) list_setting_pane_vc_g2_ParamLimits

0x30fb,	// (0x0005b6ff) list_setting_pane_vc_g2

0x0001,

0xf7c2,	// (0x00067dc6) list_setting_pane_vc_g_ParamLimits

0xf7c2,	// (0x00067dc6) list_setting_pane_vc_g

0xe3ca,	// (0x000669ce) list_setting_pane_vc_t1_ParamLimits

0xe3ca,	// (0x000669ce) list_setting_pane_vc_t1

0xe3e6,	// (0x000669ea) list_setting_pane_vc_t2_ParamLimits

0xe3e6,	// (0x000669ea) list_setting_pane_vc_t2

0x0001,

0xfa16,	// (0x0006801a) list_setting_pane_vc_t_ParamLimits

0xfa16,	// (0x0006801a) list_setting_pane_vc_t

0xe341,	// (0x00066945) set_value_pane_cp_vc_ParamLimits

0xe341,	// (0x00066945) set_value_pane_cp_vc

0x3033,	// (0x0005b637) list_single_number_heading_pane_vc_g1_ParamLimits

0x3033,	// (0x0005b637) list_single_number_heading_pane_vc_g1

0x303f,	// (0x0005b643) list_single_number_heading_pane_vc_g2_ParamLimits

0x303f,	// (0x0005b643) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ab,	// (0x00067baf) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ab,	// (0x00067baf) list_single_number_heading_pane_vc_g

0xdd26,	// (0x0006632a) list_single_number_heading_pane_vc_t1_ParamLimits

0xdd26,	// (0x0006632a) list_single_number_heading_pane_vc_t1

0xe402,	// (0x00066a06) list_single_number_heading_pane_vc_t2_ParamLimits

0xe402,	// (0x00066a06) list_single_number_heading_pane_vc_t2

0xdd3c,	// (0x00066340) list_single_number_heading_pane_vc_t3_ParamLimits

0xdd3c,	// (0x00066340) list_single_number_heading_pane_vc_t3

0x0002,

0xfa1b,	// (0x0006801f) list_single_number_heading_pane_vc_t_ParamLimits

0xfa1b,	// (0x0006801f) list_single_number_heading_pane_vc_t

0xdd4e,	// (0x00066352) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xdd4e,	// (0x00066352) list_single_graphic_heading_pane_vc_g1

0x3033,	// (0x0005b637) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3033,	// (0x0005b637) list_single_graphic_heading_pane_vc_g4

0x303f,	// (0x0005b643) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x303f,	// (0x0005b643) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79c,	// (0x00067da0) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79c,	// (0x00067da0) list_single_graphic_heading_pane_vc_g

0xdd26,	// (0x0006632a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xdd26,	// (0x0006632a) list_single_graphic_heading_pane_vc_t1

0xe418,	// (0x00066a1c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xe418,	// (0x00066a1c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa22,	// (0x00068026) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa22,	// (0x00068026) list_single_graphic_heading_pane_vc_t

0x3033,	// (0x0005b637) list_double2_pane_vc_g1_ParamLimits

0x3033,	// (0x0005b637) list_double2_pane_vc_g1

0x303f,	// (0x0005b643) list_double2_pane_vc_g2_ParamLimits

0x303f,	// (0x0005b643) list_double2_pane_vc_g2

0x0001,

0xf5ab,	// (0x00067baf) list_double2_pane_vc_g_ParamLimits

0xf5ab,	// (0x00067baf) list_double2_pane_vc_g

0xe374,	// (0x00066978) list_double2_pane_vc_t1_ParamLimits

0xe374,	// (0x00066978) list_double2_pane_vc_t1

0x3ac7,	// (0x0005c0cb) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3ac7,	// (0x0005c0cb) list_double2_large_graphic_pane_vc_g1

0x3033,	// (0x0005b637) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3033,	// (0x0005b637) list_double2_large_graphic_pane_vc_g2

0x303f,	// (0x0005b643) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x303f,	// (0x0005b643) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c3,	// (0x00067bc7) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c3,	// (0x00067bc7) list_double2_large_graphic_pane_vc_g

0xdd5a,	// (0x0006635e) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xdd5a,	// (0x0006635e) list_double2_large_graphic_pane_vc_t1

0x3ad3,	// (0x0005c0d7) list_double_time_pane_vc_g1_ParamLimits

0x3ad3,	// (0x0005c0d7) list_double_time_pane_vc_g1

0x3adf,	// (0x0005c0e3) list_double_time_pane_vc_g2_ParamLimits

0x3adf,	// (0x0005c0e3) list_double_time_pane_vc_g2

0x0001,

0xfa27,	// (0x0006802b) list_double_time_pane_vc_g_ParamLimits

0xfa27,	// (0x0006802b) list_double_time_pane_vc_g

0xe42a,	// (0x00066a2e) list_double_time_pane_vc_t1_ParamLimits

0xe42a,	// (0x00066a2e) list_double_time_pane_vc_t1

0xe454,	// (0x00066a58) list_double_time_pane_vc_t2_ParamLimits

0xe454,	// (0x00066a58) list_double_time_pane_vc_t2

0xe49d,	// (0x00066aa1) list_double_time_pane_vc_t3_ParamLimits

0xe49d,	// (0x00066aa1) list_double_time_pane_vc_t3

0xe4af,	// (0x00066ab3) list_double_time_pane_vc_t4_ParamLimits

0xe4af,	// (0x00066ab3) list_double_time_pane_vc_t4

0x0003,

0xfa2c,	// (0x00068030) list_double_time_pane_vc_t_ParamLimits

0xfa2c,	// (0x00068030) list_double_time_pane_vc_t

0x3033,	// (0x0005b637) list_double_pane_vc_g1_ParamLimits

0x3033,	// (0x0005b637) list_double_pane_vc_g1

0x303f,	// (0x0005b643) list_double_pane_vc_g2_ParamLimits

0x303f,	// (0x0005b643) list_double_pane_vc_g2

0x0001,

0xf5ab,	// (0x00067baf) list_double_pane_vc_g_ParamLimits

0xf5ab,	// (0x00067baf) list_double_pane_vc_g

0xe4c3,	// (0x00066ac7) list_double_pane_vc_t1_ParamLimits

0xe4c3,	// (0x00066ac7) list_double_pane_vc_t1

0xe4d7,	// (0x00066adb) list_double_pane_vc_t2_ParamLimits

0xe4d7,	// (0x00066adb) list_double_pane_vc_t2

0x0001,

0xfa35,	// (0x00068039) list_double_pane_vc_t_ParamLimits

0xfa35,	// (0x00068039) list_double_pane_vc_t

0x3033,	// (0x0005b637) list_double_number_pane_vc_g1_ParamLimits

0x3033,	// (0x0005b637) list_double_number_pane_vc_g1

0x303f,	// (0x0005b643) list_double_number_pane_vc_g2_ParamLimits

0x303f,	// (0x0005b643) list_double_number_pane_vc_g2

0x0001,

0xf5ab,	// (0x00067baf) list_double_number_pane_vc_g_ParamLimits

0xf5ab,	// (0x00067baf) list_double_number_pane_vc_g

0xe362,	// (0x00066966) list_double_number_pane_vc_t1_ParamLimits

0xe362,	// (0x00066966) list_double_number_pane_vc_t1

0xe4ed,	// (0x00066af1) list_double_number_pane_vc_t2_ParamLimits

0xe4ed,	// (0x00066af1) list_double_number_pane_vc_t2

0xe501,	// (0x00066b05) list_double_number_pane_vc_t3_ParamLimits

0xe501,	// (0x00066b05) list_double_number_pane_vc_t3

0x0002,

0xfa3a,	// (0x0006803e) list_double_number_pane_vc_t_ParamLimits

0xfa3a,	// (0x0006803e) list_double_number_pane_vc_t

0x3aeb,	// (0x0005c0ef) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3aeb,	// (0x0005c0ef) list_double_large_graphic_pane_vc_g1

0x3b0d,	// (0x0005c111) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3b0d,	// (0x0005c111) list_double_large_graphic_pane_vc_g2

0x3b21,	// (0x0005c125) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3b21,	// (0x0005c125) list_double_large_graphic_pane_vc_g3

0xe519,	// (0x00066b1d) list_double_large_graphic_pane_vc_g4_ParamLimits

0xe519,	// (0x00066b1d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa41,	// (0x00068045) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa41,	// (0x00068045) list_double_large_graphic_pane_vc_g

0xe525,	// (0x00066b29) list_double_large_graphic_pane_vc_t1_ParamLimits

0xe525,	// (0x00066b29) list_double_large_graphic_pane_vc_t1

0xe541,	// (0x00066b45) list_double_large_graphic_pane_vc_t2_ParamLimits

0xe541,	// (0x00066b45) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa4a,	// (0x0006804e) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa4a,	// (0x0006804e) list_double_large_graphic_pane_vc_t

0x3033,	// (0x0005b637) list_double_heading_pane_vc_g1_ParamLimits

0x3033,	// (0x0005b637) list_double_heading_pane_vc_g1

0x303f,	// (0x0005b643) list_double_heading_pane_vc_g2_ParamLimits

0x303f,	// (0x0005b643) list_double_heading_pane_vc_g2

0x0001,

0xf5ab,	// (0x00067baf) list_double_heading_pane_vc_g_ParamLimits

0xf5ab,	// (0x00067baf) list_double_heading_pane_vc_g

0xe561,	// (0x00066b65) list_double_heading_pane_vc_t1_ParamLimits

0xe561,	// (0x00066b65) list_double_heading_pane_vc_t1

0xe573,	// (0x00066b77) list_double_heading_pane_vc_t2_ParamLimits

0xe573,	// (0x00066b77) list_double_heading_pane_vc_t2

0x0001,

0xfa4f,	// (0x00068053) list_double_heading_pane_vc_t_ParamLimits

0xfa4f,	// (0x00068053) list_double_heading_pane_vc_t

0xe58b,	// (0x00066b8f) list_double_graphic_pane_vc_g1_ParamLimits

0xe58b,	// (0x00066b8f) list_double_graphic_pane_vc_g1

0x3b30,	// (0x0005c134) list_double_graphic_pane_vc_g2_ParamLimits

0x3b30,	// (0x0005c134) list_double_graphic_pane_vc_g2

0x3033,	// (0x0005b637) list_double_graphic_pane_vc_g3_ParamLimits

0x3033,	// (0x0005b637) list_double_graphic_pane_vc_g3

0x0003,

0xfa54,	// (0x00068058) list_double_graphic_pane_vc_g_ParamLimits

0xfa54,	// (0x00068058) list_double_graphic_pane_vc_g

0xe597,	// (0x00066b9b) list_double_graphic_pane_vc_t1_ParamLimits

0xe597,	// (0x00066b9b) list_double_graphic_pane_vc_t1

0xe5c1,	// (0x00066bc5) list_double_graphic_pane_vc_t2_ParamLimits

0xe5c1,	// (0x00066bc5) list_double_graphic_pane_vc_t2

0x0001,

0xfa5d,	// (0x00068061) list_double_graphic_pane_vc_t_ParamLimits

0xfa5d,	// (0x00068061) list_double_graphic_pane_vc_t

0xef5e,	// (0x00067562) aid_size_cell_fastswap

0x9fb3,	// (0x000625b7) aid_size_cell_touch_ParamLimits

0x9fb3,	// (0x000625b7) aid_size_cell_touch

0xf134,	// (0x00067738) popup_fast_swap_wide_window_ParamLimits

0xf134,	// (0x00067738) popup_fast_swap_wide_window

0xa12f,	// (0x00062733) touch_pane_ParamLimits

0xa12f,	// (0x00062733) touch_pane

0x94f0,	// (0x00061af4) button_value_adjust_pane_cp2

0xdd7e,	// (0x00066382) button_value_adjust_pane_cp4

0xdd86,	// (0x0006638a) form_field_data_pane_cp2

0xaa19,	// (0x0006301d) form_field_data_wide_pane_cp2

0xe11d,	// (0x00066721) bg_scroll_pane_ParamLimits

0xf425,	// (0x00067a29) scroll_handle_pane_ParamLimits

0xf439,	// (0x00067a3d) scroll_sc2_down_pane_ParamLimits

0xf439,	// (0x00067a3d) scroll_sc2_down_pane

0xe14e,	// (0x00066752) scroll_sc2_up_pane_ParamLimits

0xe14e,	// (0x00066752) scroll_sc2_up_pane

0xcc30,	// (0x00065234) grid_wheel_folder_pane_g1_ParamLimits

0xcc30,	// (0x00065234) grid_wheel_folder_pane_g1

0x00e7,	// (0x000586eb) clock_nsta_pane_cp2_ParamLimits

0x00e7,	// (0x000586eb) clock_nsta_pane_cp2

0xae8b,	// (0x0006348f) listscroll_midp_pane_ParamLimits

0xae97,	// (0x0006349b) midp_canvas_pane

0x2b2f,	// (0x0005b133) nsta_clock_indic_pane

0x2b6b,	// (0x0005b16f) listscroll_form_pane_vc

0x2b73,	// (0x0005b177) listscroll_set_pane_vc_ParamLimits

0x2b73,	// (0x0005b177) listscroll_set_pane_vc

0xc28e,	// (0x00064892) clock_nsta_pane

0xc2b8,	// (0x000648bc) indicator_nsta_pane

0x2fcd,	// (0x0005b5d1) bg_popup_sub_pane_cp2_ParamLimits

0x2fe1,	// (0x0005b5e5) find_pane_cp2_ParamLimits

0x2fe1,	// (0x0005b5e5) find_pane_cp2

0x2ff7,	// (0x0005b5fb) grid_toobar_pane_ParamLimits

0x3107,	// (0x0005b70b) list_form_gen_pane_vc_ParamLimits

0x3107,	// (0x0005b70b) list_form_gen_pane_vc

0x311d,	// (0x0005b721) scroll_pane_cp8_vc_ParamLimits

0x311d,	// (0x0005b721) scroll_pane_cp8_vc

0x3199,	// (0x0005b79d) data_form_wide_pane_vc_ParamLimits

0x3199,	// (0x0005b79d) data_form_wide_pane_vc

0x31a5,	// (0x0005b7a9) form_field_data_wide_pane_vc_g1

0x31ad,	// (0x0005b7b1) form_field_data_wide_pane_vc_t1_ParamLimits

0x31ad,	// (0x0005b7b1) form_field_data_wide_pane_vc_t1

0x9504,	// (0x00061b08) input_focus_pane_cp6_vc_ParamLimits

0x9504,	// (0x00061b08) input_focus_pane_cp6_vc

0x34c9,	// (0x0005bacd) list_midp_pane_ParamLimits

0x4a42,	// (0x0005d046) scroll_pane_cp16_ParamLimits

0x4a42,	// (0x0005d046) scroll_pane_cp16

0x351f,	// (0x0005bb23) button_value_adjust_pane_ParamLimits

0x351f,	// (0x0005bb23) button_value_adjust_pane

0xc859,	// (0x00064e5d) button_value_adjust_pane_cp6_ParamLimits

0xc859,	// (0x00064e5d) button_value_adjust_pane_cp6

0xc995,	// (0x00064f99) settings_code_pane_cp_ParamLimits

0xc995,	// (0x00064f99) settings_code_pane_cp

0x5707,	// (0x0005dd0b) cell_touch_pane_g1

0x5707,	// (0x0005dd0b) cell_touch_pane_g2

0x0001,

0xf6e1,	// (0x00067ce5) cell_touch_pane_g

0xcb04,	// (0x00065108) cell_touch_pane_cp_ParamLimits

0xcb04,	// (0x00065108) cell_touch_pane_cp

0xcb20,	// (0x00065124) cell_touch_pane_ParamLimits

0xcb20,	// (0x00065124) cell_touch_pane

0x5707,	// (0x0005dd0b) scroll_sc2_down_pane_g1

0x5707,	// (0x0005dd0b) scroll_sc2_up_pane_g1

0x5711,	// (0x0005dd15) bg_set_opt_pane_cp4_vc

0x4de0,	// (0x0005d3e4) list_set_graphic_pane_vc_g1_ParamLimits

0x4de0,	// (0x0005d3e4) list_set_graphic_pane_vc_g1

0x4dec,	// (0x0005d3f0) list_set_graphic_pane_vc_g2_ParamLimits

0x4dec,	// (0x0005d3f0) list_set_graphic_pane_vc_g2

0x0001,

0xf9d8,	// (0x00067fdc) list_set_graphic_pane_vc_g_ParamLimits

0xf9d8,	// (0x00067fdc) list_set_graphic_pane_vc_g

0x4df8,	// (0x0005d3fc) text_primary_small_cp13_vc_ParamLimits

0x4df8,	// (0x0005d3fc) text_primary_small_cp13_vc

0x4e10,	// (0x0005d414) list_set_graphic_pane_vc_ParamLimits

0x4e10,	// (0x0005d414) list_set_graphic_pane_vc

0x5711,	// (0x0005dd15) input_focus_pane_cp2_vc

0x5707,	// (0x0005dd0b) setting_code_pane_vc_g1

0x5776,	// (0x0005dd7a) setting_code_pane_vc_t1

0x4e23,	// (0x0005d427) set_text_pane_vc_t1_ParamLimits

0x4e23,	// (0x0005d427) set_text_pane_vc_t1

0x5711,	// (0x0005dd15) input_focus_pane_cp1_vc

0x4e44,	// (0x0005d448) list_set_text_pane_vc

0x5707,	// (0x0005dd0b) setting_text_pane_vc_g1

0x5711,	// (0x0005dd15) bg_set_opt_pane_cp2_vc

0x576d,	// (0x0005dd71) setting_slider_graphic_pane_vc_g1

0x4e4e,	// (0x0005d452) setting_slider_graphic_pane_vc_t1

0x4e60,	// (0x0005d464) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9dd,	// (0x00067fe1) setting_slider_graphic_pane_vc_t

0x4e72,	// (0x0005d476) slider_set_pane_cp_vc

0x4e7c,	// (0x0005d480) slider_set_pane_vc_g1

0x4e85,	// (0x0005d489) slider_set_pane_vc_g2

0x0006,

0xf9e2,	// (0x00067fe6) slider_set_pane_vc_g

0x955c,	// (0x00061b60) set_opt_bg_pane_g1_copy1

0x9564,	// (0x00061b68) set_opt_bg_pane_g2_copy1

0x4eb1,	// (0x0005d4b5) set_opt_bg_pane_g3_copy1

0x9574,	// (0x00061b78) set_opt_bg_pane_g4_copy1

0x957c,	// (0x00061b80) set_opt_bg_pane_g5_copy1

0x9584,	// (0x00061b88) set_opt_bg_pane_g6_copy1

0x4ebb,	// (0x0005d4bf) set_opt_bg_pane_g7_copy1

0x4ec5,	// (0x0005d4c9) set_opt_bg_pane_g8_copy1

0x4ecf,	// (0x0005d4d3) set_opt_bg_pane_g9_copy1

0x5711,	// (0x0005dd15) bg_set_opt_pane_cp_vc

0x4ed9,	// (0x0005d4dd) setting_slider_pane_vc_t1

0x4ee8,	// (0x0005d4ec) setting_slider_pane_vc_t2

0x4efa,	// (0x0005d4fe) setting_slider_pane_vc_t3

0x0002,

0xf9f1,	// (0x00067ff5) setting_slider_pane_vc_t

0x4f0c,	// (0x0005d510) slider_set_pane_vc

0x0aea,	// (0x000590ee) volume_set_pane_vc_g1

0x0af3,	// (0x000590f7) volume_set_pane_vc_g2

0x0afc,	// (0x00059100) volume_set_pane_vc_g3

0x0b05,	// (0x00059109) volume_set_pane_vc_g4

0x0b0e,	// (0x00059112) volume_set_pane_vc_g5

0x0b17,	// (0x0005911b) volume_set_pane_vc_g6

0x0b20,	// (0x00059124) volume_set_pane_vc_g7

0x0b29,	// (0x0005912d) volume_set_pane_vc_g8

0x0b32,	// (0x00059136) volume_set_pane_vc_g9

0x0b3b,	// (0x0005913f) volume_set_pane_vc_g10

0x0009,

0xf9f8,	// (0x00067ffc) volume_set_pane_vc_g

0x4f16,	// (0x0005d51a) volume_set_pane_vc

0x4f20,	// (0x0005d524) button_value_adjust_pane_cp1_vc

0x4f2a,	// (0x0005d52e) list_highlight_pane_cp2_vc

0x4f33,	// (0x0005d537) list_set_pane_vc_ParamLimits

0x4f33,	// (0x0005d537) list_set_pane_vc

0x4fa1,	// (0x0005d5a5) main_pane_set_vc_t1_ParamLimits

0x4fa1,	// (0x0005d5a5) main_pane_set_vc_t1

0x4fb6,	// (0x0005d5ba) main_pane_set_vc_t2_ParamLimits

0x4fb6,	// (0x0005d5ba) main_pane_set_vc_t2

0x4fc8,	// (0x0005d5cc) main_pane_set_vc_t3_ParamLimits

0x4fc8,	// (0x0005d5cc) main_pane_set_vc_t3

0x4fdc,	// (0x0005d5e0) main_pane_set_vc_t4_ParamLimits

0x4fdc,	// (0x0005d5e0) main_pane_set_vc_t4

0x0003,

0xfa0d,	// (0x00068011) main_pane_set_vc_t_ParamLimits

0xfa0d,	// (0x00068011) main_pane_set_vc_t

0x4ff0,	// (0x0005d5f4) setting_code_pane_vc_ParamLimits

0x4ff0,	// (0x0005d5f4) setting_code_pane_vc

0x5001,	// (0x0005d605) setting_slider_graphic_pane_vc

0x5001,	// (0x0005d605) setting_slider_pane_vc

0x5001,	// (0x0005d605) setting_text_pane_vc

0x5001,	// (0x0005d605) setting_volume_pane_vc

0x500b,	// (0x0005d60f) scroll_pane_cp121_vc

0x94de,	// (0x00061ae2) set_content_pane_vc

0x5013,	// (0x0005d617) button_value_adjust_pane_g1

0x501c,	// (0x0005d620) button_value_adjust_pane_g2

0x0001,

0xfa62,	// (0x00068066) button_value_adjust_pane_g

0x5025,	// (0x0005d629) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5025,	// (0x0005d629) form_field_slider_wide_pane_vc_t1

0x5037,	// (0x0005d63b) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5037,	// (0x0005d63b) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa67,	// (0x0006806b) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa67,	// (0x0006806b) form_field_slider_wide_pane_vc_t

0x579b,	// (0x0005dd9f) input_focus_pane_cp10_vc_ParamLimits

0x579b,	// (0x0005dd9f) input_focus_pane_cp10_vc

0x5063,	// (0x0005d667) slider_cont_pane_cp1_vc_ParamLimits

0x5063,	// (0x0005d667) slider_cont_pane_cp1_vc

0x5075,	// (0x0005d679) slider_form_pane_g1_cp2

0x4e85,	// (0x0005d489) slider_form_pane_g2_cp2

0x50a2,	// (0x0005d6a6) form_field_slider_pane_vc_t3

0x50b0,	// (0x0005d6b4) form_field_slider_pane_vc_t4

0x50be,	// (0x0005d6c2) slider_form_pane_vc_ParamLimits

0x50be,	// (0x0005d6c2) slider_form_pane_vc

0x50cb,	// (0x0005d6cf) form_field_slider_pane_vc_t1_ParamLimits

0x50cb,	// (0x0005d6cf) form_field_slider_pane_vc_t1

0x5037,	// (0x0005d63b) form_field_slider_pane_vc_t2_ParamLimits

0x5037,	// (0x0005d63b) form_field_slider_pane_vc_t2

0x0001,

0xfa79,	// (0x0006807d) form_field_slider_pane_vc_t_ParamLimits

0xfa79,	// (0x0006807d) form_field_slider_pane_vc_t

0x579b,	// (0x0005dd9f) input_focus_pane_cp9_vc_ParamLimits

0x579b,	// (0x0005dd9f) input_focus_pane_cp9_vc

0x50e1,	// (0x0005d6e5) slider_cont_pane_vc_ParamLimits

0x50e1,	// (0x0005d6e5) slider_cont_pane_vc

0x50f5,	// (0x0005d6f9) list_form_graphic_pane_cp_vc_ParamLimits

0x50f5,	// (0x0005d6f9) list_form_graphic_pane_cp_vc

0x31a5,	// (0x0005b7a9) form_field_popup_wide_pane_vc_g1

0x510a,	// (0x0005d70e) form_field_popup_wide_pane_vc_t1_ParamLimits

0x510a,	// (0x0005d70e) form_field_popup_wide_pane_vc_t1

0x9504,	// (0x00061b08) input_focus_pane_cp8_vc_ParamLimits

0x9504,	// (0x00061b08) input_focus_pane_cp8_vc

0x514f,	// (0x0005d753) list_form_wide_pane_vc_ParamLimits

0x514f,	// (0x0005d753) list_form_wide_pane_vc

0x515b,	// (0x0005d75f) list_form_graphic_pane_vc_g1

0x5163,	// (0x0005d767) list_form_graphic_pane_vc_t1_ParamLimits

0x5163,	// (0x0005d767) list_form_graphic_pane_vc_t1

0x575f,	// (0x0005dd63) list_highlight_pane_cp5_vc_ParamLimits

0x575f,	// (0x0005dd63) list_highlight_pane_cp5_vc

0x517f,	// (0x0005d783) list_form_graphic_pane_vc_ParamLimits

0x517f,	// (0x0005d783) list_form_graphic_pane_vc

0x31a5,	// (0x0005b7a9) form_field_popup_pane_vc_g1

0x5195,	// (0x0005d799) form_field_popup_pane_vc_t1_ParamLimits

0x5195,	// (0x0005d799) form_field_popup_pane_vc_t1

0x9504,	// (0x00061b08) input_focus_pane_cp7_vc_ParamLimits

0x9504,	// (0x00061b08) input_focus_pane_cp7_vc

0x51ac,	// (0x0005d7b0) list_form_pane_vc_ParamLimits

0x51ac,	// (0x0005d7b0) list_form_pane_vc

0x51b8,	// (0x0005d7bc) data_form_pane_vc_t1_ParamLimits

0x51b8,	// (0x0005d7bc) data_form_pane_vc_t1

0x955c,	// (0x00061b60) input_focus_pane_vc_g1

0x9564,	// (0x00061b68) input_focus_pane_vc_g2

0x956c,	// (0x00061b70) input_focus_pane_vc_g3

0x9574,	// (0x00061b78) input_focus_pane_vc_g4

0x957c,	// (0x00061b80) input_focus_pane_vc_g5

0x9584,	// (0x00061b88) input_focus_pane_vc_g6

0x958c,	// (0x00061b90) input_focus_pane_vc_g7

0x9594,	// (0x00061b98) input_focus_pane_vc_g8

0x959c,	// (0x00061ba0) input_focus_pane_vc_g9

0x5707,	// (0x0005dd0b) input_focus_pane_vc_g10

0x0009,

0xf66a,	// (0x00067c6e) input_focus_pane_vc_g

0x3199,	// (0x0005b79d) data_form_pane_vc_ParamLimits

0x3199,	// (0x0005b79d) data_form_pane_vc

0x31a5,	// (0x0005b7a9) form_field_data_pane_vc_g1

0x51d5,	// (0x0005d7d9) form_field_data_pane_vc_t1_ParamLimits

0x51d5,	// (0x0005d7d9) form_field_data_pane_vc_t1

0x9504,	// (0x00061b08) input_focus_pane_vc_ParamLimits

0x9504,	// (0x00061b08) input_focus_pane_vc

0x51ef,	// (0x0005d7f3) button_value_adjust_pane_cp3_vc

0x51f7,	// (0x0005d7fb) button_value_adjust_pane_cp5_vc

0x51ff,	// (0x0005d803) form_field_data_pane_vc_ParamLimits

0x51ff,	// (0x0005d803) form_field_data_pane_vc

0x521a,	// (0x0005d81e) form_field_data_pane_vc_cp2

0x5222,	// (0x0005d826) form_field_data_wide_pane_vc_ParamLimits

0x5222,	// (0x0005d826) form_field_data_wide_pane_vc

0x523c,	// (0x0005d840) form_field_data_wide_pane_vc_cp2

0x5244,	// (0x0005d848) form_field_popup_pane_vc_ParamLimits

0x5244,	// (0x0005d848) form_field_popup_pane_vc

0x525f,	// (0x0005d863) form_field_popup_wide_pane_vc_ParamLimits

0x525f,	// (0x0005d863) form_field_popup_wide_pane_vc

0x5279,	// (0x0005d87d) form_field_slider_pane_vc_ParamLimits

0x5279,	// (0x0005d87d) form_field_slider_pane_vc

0x528c,	// (0x0005d890) form_field_slider_wide_pane_vc_ParamLimits

0x528c,	// (0x0005d890) form_field_slider_wide_pane_vc

0xcb3e,	// (0x00065142) grid_touch_1_pane_ParamLimits

0xcb3e,	// (0x00065142) grid_touch_1_pane

0xcb52,	// (0x00065156) grid_touch_2_pane_ParamLimits

0xcb52,	// (0x00065156) grid_touch_2_pane

0x5372,	// (0x0005d976) touch_pane_g1_ParamLimits

0x5372,	// (0x0005d976) touch_pane_g1

0x52c5,	// (0x0005d8c9) cell_app_pane_cp_wide_ParamLimits

0x52c5,	// (0x0005d8c9) cell_app_pane_cp_wide

0x52d6,	// (0x0005d8da) grid_popup_fast_wide_pane_ParamLimits

0x52d6,	// (0x0005d8da) grid_popup_fast_wide_pane

0x52ea,	// (0x0005d8ee) scroll_pane_cp19_ParamLimits

0x52ea,	// (0x0005d8ee) scroll_pane_cp19

0x5711,	// (0x0005dd15) bg_popup_window_pane_cp20

0x52fe,	// (0x0005d902) listscroll_popup_fast_wide_pane

0xcb7e,	// (0x00065182) grid_indicator_nsta_pane

0x5318,	// (0x0005d91c) clock_nsta_pane_g1

0x5321,	// (0x0005d925) clock_nsta_pane_t1

0xcb8a,	// (0x0006518e) cell_indicator_nsta_pane_ParamLimits

0xcb8a,	// (0x0006518e) cell_indicator_nsta_pane

0x5372,	// (0x0005d976) cell_indicator_nsta_pane_g1

0xcba5,	// (0x000651a9) cell_indicator_nsta_pane_g2

0x0001,

0xfa8a,	// (0x0006808e) cell_indicator_nsta_pane_g

0x5393,	// (0x0005d997) clock_nsta_pane_cp

0x539c,	// (0x0005d9a0) indicator_nsta_pane_cp

0x53a6,	// (0x0005d9aa) nsta_clock_indic_pane_g1

0x8c5a,	// (0x0006125e) grid_indicator_pane

0xe240,	// (0x00066844) scroll_pane_cp29

0x0036,	// (0x0005863a) indicator_nsta_pane_cp2_ParamLimits

0x0036,	// (0x0005863a) indicator_nsta_pane_cp2

0x575f,	// (0x0005dd63) main_apps_wheel_pane

0x3386,	// (0x0005b98a) form_midp_field_text_pane_ParamLimits

0x34d5,	// (0x0005bad9) scroll_bar_cp050_ParamLimits

0x53ff,	// (0x0005da03) cell_indicator_pane_ParamLimits

0x53ff,	// (0x0005da03) cell_indicator_pane

0x5417,	// (0x0005da1b) cell_indicator_pane_g1

0xcbb2,	// (0x000651b6) grid_wheel_folder_pane_ParamLimits

0xcbb2,	// (0x000651b6) grid_wheel_folder_pane

0xcbc0,	// (0x000651c4) list_wheel_apps_pane_ParamLimits

0xcbc0,	// (0x000651c4) list_wheel_apps_pane

0xcbce,	// (0x000651d2) main_apps_wheel_pane_g1_ParamLimits

0xcbce,	// (0x000651d2) main_apps_wheel_pane_g1

0xcbde,	// (0x000651e2) main_apps_wheel_pane_g2_ParamLimits

0xcbde,	// (0x000651e2) main_apps_wheel_pane_g2

0x0001,

0xfaa6,	// (0x000680aa) main_apps_wheel_pane_g_ParamLimits

0xfaa6,	// (0x000680aa) main_apps_wheel_pane_g

0xcbee,	// (0x000651f2) main_apps_wheel_pane_t1_ParamLimits

0xcbee,	// (0x000651f2) main_apps_wheel_pane_t1

0xcc06,	// (0x0006520a) list_wheel_apps_pane_g1

0xcc0e,	// (0x00065212) list_wheel_apps_pane_g2

0xcc16,	// (0x0006521a) list_wheel_apps_pane_g3

0xcc1e,	// (0x00065222) list_wheel_apps_pane_g4

0xcc26,	// (0x0006522a) list_wheel_apps_pane_g5

0x0004,

0xfaab,	// (0x000680af) list_wheel_apps_pane_g

0x269d,	// (0x0005aca1) navi_icon_text_pane

0xb7c3,	// (0x00063dc7) aid_fill_nsta

0xcc41,	// (0x00065245) navi_icon_text_pane_g1

0xcc4d,	// (0x00065251) navi_icon_text_pane_t1

0x253f,	// (0x0005ab43) list_set_graphic_pane_t1_ParamLimits

0x253f,	// (0x0005ab43) list_set_graphic_pane_t1

0x3e30,	// (0x0005c434) popup_midp_note_alarm_window_t6_ParamLimits

0x3e30,	// (0x0005c434) popup_midp_note_alarm_window_t6

0x3e42,	// (0x0005c446) popup_midp_note_alarm_window_t7_ParamLimits

0x3e42,	// (0x0005c446) popup_midp_note_alarm_window_t7

0x3e54,	// (0x0005c458) popup_midp_note_alarm_window_t8_ParamLimits

0x3e54,	// (0x0005c458) popup_midp_note_alarm_window_t8

0x3e66,	// (0x0005c46a) popup_midp_note_alarm_window_t9_ParamLimits

0x3e66,	// (0x0005c46a) popup_midp_note_alarm_window_t9

0x3e78,	// (0x0005c47c) popup_midp_note_alarm_window_t10_ParamLimits

0x3e78,	// (0x0005c47c) popup_midp_note_alarm_window_t10

0x3e8a,	// (0x0005c48e) popup_midp_note_alarm_window_t11_ParamLimits

0x3e8a,	// (0x0005c48e) popup_midp_note_alarm_window_t11

0x3e9c,	// (0x0005c4a0) scroll_pane_cp17_ParamLimits

0x3e9c,	// (0x0005c4a0) scroll_pane_cp17

0x0aea,	// (0x000590ee) volume_small_pane_cp_g1

0x0e97,	// (0x0005949b) volume_small_pane_cp_g2

0x0ea0,	// (0x000594a4) volume_small_pane_cp_g3

0x0ea9,	// (0x000594ad) volume_small_pane_cp_g4

0x0eb2,	// (0x000594b6) volume_small_pane_cp_g5

0x0ebb,	// (0x000594bf) volume_small_pane_cp_g6

0x0ec4,	// (0x000594c8) volume_small_pane_cp_g7

0x0ecd,	// (0x000594d1) volume_small_pane_cp_g8

0x0ed6,	// (0x000594da) volume_small_pane_cp_g9

0x0edf,	// (0x000594e3) volume_small_pane_cp_g10

0x290e,	// (0x0005af12) midp_ticker_pane_g1_ParamLimits

0x291a,	// (0x0005af1e) midp_ticker_pane_g2_ParamLimits

0xf736,	// (0x00067d3a) midp_ticker_pane_g_ParamLimits

0xaf2f,	// (0x00063533) midp_ticker_pane_t1_ParamLimits

0xb7e7,	// (0x00063deb) aid_fill_nsta_2

0x34c1,	// (0x0005bac5) list_form2_midp_pane

0x481b,	// (0x0005ce1f) midp_editing_number_pane_ParamLimits

0x482a,	// (0x0005ce2e) midp_ticker_pane_ParamLimits

0x550a,	// (0x0005db0e) form2_midp_field_pane

0x552e,	// (0x0005db32) scroll_pane_cp51

0x554e,	// (0x0005db52) form2_midp_button_pane_ParamLimits

0x554e,	// (0x0005db52) form2_midp_button_pane

0x5560,	// (0x0005db64) form2_midp_content_pane_ParamLimits

0x5560,	// (0x0005db64) form2_midp_content_pane

0x557a,	// (0x0005db7e) form2_midp_field_choice_group_pane

0x5582,	// (0x0005db86) form2_midp_field_pane_g1

0x558a,	// (0x0005db8e) form2_midp_field_pane_g2

0x5592,	// (0x0005db96) form2_midp_field_pane_g3

0x559a,	// (0x0005db9e) form2_midp_field_pane_g4

0x0003,

0xfad0,	// (0x000680d4) form2_midp_field_pane_g

0x55a2,	// (0x0005dba6) form2_midp_gauge_slider_pane

0x55aa,	// (0x0005dbae) form2_midp_gauge_wait_pane

0x55b2,	// (0x0005dbb6) form2_midp_image_pane_ParamLimits

0x55b2,	// (0x0005dbb6) form2_midp_image_pane

0x55cd,	// (0x0005dbd1) form2_midp_label_pane_ParamLimits

0x55cd,	// (0x0005dbd1) form2_midp_label_pane

0xcc7b,	// (0x0006527f) form2_midp_label_pane_cp_ParamLimits

0xcc7b,	// (0x0006527f) form2_midp_label_pane_cp

0x560d,	// (0x0005dc11) form2_midp_string_pane_ParamLimits

0x560d,	// (0x0005dc11) form2_midp_string_pane

0xb9c5,	// (0x00063fc9) form2_midp_text_pane_ParamLimits

0xb9c5,	// (0x00063fc9) form2_midp_text_pane

0x561f,	// (0x0005dc23) form2_midp_time_pane

0x562f,	// (0x0005dc33) input_focus_pane_cp51_ParamLimits

0x562f,	// (0x0005dc33) input_focus_pane_cp51

0x5647,	// (0x0005dc4b) form2_midp_label_pane_t1_ParamLimits

0x5647,	// (0x0005dc4b) form2_midp_label_pane_t1

0xb9e8,	// (0x00063fec) form2_mdip_text_pane_t1_ParamLimits

0xb9e8,	// (0x00063fec) form2_mdip_text_pane_t1

0xe5e4,	// (0x00066be8) form2_midp_time_pane_t1

0x5695,	// (0x0005dc99) form2_midp_gauge_slider_pane_t1

0xcc9c,	// (0x000652a0) form2_midp_gauge_slider_pane_t2

0xccae,	// (0x000652b2) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad9,	// (0x000680dd) form2_midp_gauge_slider_pane_t

0x56cb,	// (0x0005dccf) form2_midp_slider_pane

0x56d7,	// (0x0005dcdb) form2_midp_gauge_wait_pane_t1

0x56e5,	// (0x0005dce9) form2_midp_wait_pane_ParamLimits

0x56e5,	// (0x0005dce9) form2_midp_wait_pane

0x31ec,	// (0x0005b7f0) list_single_2graphic_pane_cp4_ParamLimits

0x31ec,	// (0x0005b7f0) list_single_2graphic_pane_cp4

0xc5d8,	// (0x00064bdc) list_single_midp_graphic_pane_cp_ParamLimits

0xc5d8,	// (0x00064bdc) list_single_midp_graphic_pane_cp

0x5711,	// (0x0005dd15) list_highlight_pane_cp20

0x57dd,	// (0x0005dde1) list_single_2graphic_pane_g1_cp4

0x4cc2,	// (0x0005d2c6) list_single_2graphic_pane_g2_cp4

0x57e5,	// (0x0005dde9) list_single_2graphic_pane_t1_cp4

0x575f,	// (0x0005dd63) list_highlight_pane_cp21

0x57f4,	// (0x0005ddf8) list_single_midp_graphic_pane_g4_cp

0x5803,	// (0x0005de07) list_single_midp_graphic_pane_t1_cp

0xccc0,	// (0x000652c4) form2_mdip_string_pane_t1_ParamLimits

0xccc0,	// (0x000652c4) form2_mdip_string_pane_t1

0x5711,	// (0x0005dd15) bg_wml_button_pane_cp2

0x5707,	// (0x0005dd0b) form2_midp_image_pane_g1

0xf1f5,	// (0x000677f9) list_double_large_graphic_pane_g5_ParamLimits

0xf1f5,	// (0x000677f9) list_double_large_graphic_pane_g5

0xae8b,	// (0x0006348f) midp_form_pane_ParamLimits

0x575f,	// (0x0005dd63) main_apps_wheel_pane_ParamLimits

0xb4db,	// (0x00063adf) popup_preview_window_ParamLimits

0xb4db,	// (0x00063adf) popup_preview_window

0x091b,	// (0x00058f1f) popup_touch_info_window_ParamLimits

0x091b,	// (0x00058f1f) popup_touch_info_window

0x093d,	// (0x00058f41) popup_touch_menu_window_ParamLimits

0x093d,	// (0x00058f41) popup_touch_menu_window

0x56fd,	// (0x0005dd01) bg_popup_sub_pane_cp6

0x58b4,	// (0x0005deb8) list_touch_menu_pane

0x58bc,	// (0x0005dec0) list_single_touch_menu_pane_ParamLimits

0x58bc,	// (0x0005dec0) list_single_touch_menu_pane

0x58d4,	// (0x0005ded8) list_single_touch_menu_pane_t1

0x575f,	// (0x0005dd63) bg_popup_sub_pane_cp7_ParamLimits

0x575f,	// (0x0005dd63) bg_popup_sub_pane_cp7

0x34f5,	// (0x0005baf9) heading_sub_pane

0x58e2,	// (0x0005dee6) list_touch_info_pane_ParamLimits

0x58e2,	// (0x0005dee6) list_touch_info_pane

0x58f2,	// (0x0005def6) list_single_touch_info_pane_ParamLimits

0x58f2,	// (0x0005def6) list_single_touch_info_pane

0x5904,	// (0x0005df08) list_single_touch_info_pane_t1

0x5912,	// (0x0005df16) list_single_touch_info_pane_t2

0x0001,

0xfae7,	// (0x000680eb) list_single_touch_info_pane_t

0x2830,	// (0x0005ae34) bg_popup_heading_pane_cp

0x5920,	// (0x0005df24) heading_sub_pane_t1

0x3133,	// (0x0005b737) bg_popup_preview_window_pane_cp_ParamLimits

0x3133,	// (0x0005b737) bg_popup_preview_window_pane_cp

0x34f5,	// (0x0005baf9) heading_preview_pane

0x58e2,	// (0x0005dee6) list_preview_pane_ParamLimits

0x58e2,	// (0x0005dee6) list_preview_pane

0x592e,	// (0x0005df32) popup_preview_window_g1

0x58f2,	// (0x0005def6) list_single_preview_pane_ParamLimits

0x58f2,	// (0x0005def6) list_single_preview_pane

0x5936,	// (0x0005df3a) list_single_preview_pane_g1

0x593e,	// (0x0005df42) list_single_preview_pane_t1

0x5904,	// (0x0005df08) list_single_preview_pane_t2

0x0001,

0xfaec,	// (0x000680f0) list_single_preview_pane_t

0x594c,	// (0x0005df50) bg_popup_heading_pane_cp2_ParamLimits

0x594c,	// (0x0005df50) bg_popup_heading_pane_cp2

0x5962,	// (0x0005df66) heading_preview_pane_g1

0x596a,	// (0x0005df6e) heading_preview_pane_t1_ParamLimits

0x596a,	// (0x0005df6e) heading_preview_pane_t1

0x8c71,	// (0x00061275) soft_indicator_pane_t1_ParamLimits

0x9477,	// (0x00061a7b) scroll_pane_ParamLimits

0xe13c,	// (0x00066740) scroll_sc2_left_pane

0xe145,	// (0x00066749) scroll_sc2_right_pane

0xe164,	// (0x00066768) scroll_bg_pane_g1_ParamLimits

0xe179,	// (0x0006677d) scroll_bg_pane_g2_ParamLimits

0xe191,	// (0x00066795) scroll_bg_pane_g3_ParamLimits

0xf6c1,	// (0x00067cc5) scroll_bg_pane_g_ParamLimits

0xe164,	// (0x00066768) scroll_handle_pane_g1_ParamLimits

0xe1b3,	// (0x000667b7) scroll_handle_pane_g2_ParamLimits

0xe191,	// (0x00066795) scroll_handle_pane_g3_ParamLimits

0xf6c8,	// (0x00067ccc) scroll_handle_pane_g_ParamLimits

0x0379,	// (0x0005897d) popup_choice_list_window_ParamLimits

0x0379,	// (0x0005897d) popup_choice_list_window

0x2fd9,	// (0x0005b5dd) choice_list_pane

0x3073,	// (0x0005b677) cell_toolbar_pane_t1

0x309b,	// (0x0005b69f) toolbar_button_pane_ParamLimits

0x4366,	// (0x0005c96a) ai_gene_pane_1_t2_ParamLimits

0x4366,	// (0x0005c96a) ai_gene_pane_1_t2

0x0001,

0xf8eb,	// (0x00067eef) ai_gene_pane_1_t_ParamLimits

0xf8eb,	// (0x00067eef) ai_gene_pane_1_t

0x5987,	// (0x0005df8b) scroll_sc2_left_pane_g1

0x5987,	// (0x0005df8b) scroll_sc2_right_pane_g1

0x2b5f,	// (0x0005b163) bg_popup_sub_pane_cp10

0x5991,	// (0x0005df95) list_choice_list_pane

0x59aa,	// (0x0005dfae) list_single_choice_list_pane_ParamLimits

0x59aa,	// (0x0005dfae) list_single_choice_list_pane

0x59c2,	// (0x0005dfc6) list_single_choice_list_pane_g1

0xdf33,	// (0x00066537) list_single_choice_list_pane_t1_ParamLimits

0xdf33,	// (0x00066537) list_single_choice_list_pane_t1

0x59ca,	// (0x0005dfce) choice_list_pane_g1

0x59d2,	// (0x0005dfd6) choice_list_pane_t1

0x56fd,	// (0x0005dd01) input_focus_pane_cp11

0xe0b1,	// (0x000666b5) title_pane_stacon_g2_ParamLimits

0xe0b1,	// (0x000666b5) title_pane_stacon_g2

0x0002,

0xf6a7,	// (0x00067cab) title_pane_stacon_g_ParamLimits

0xf6a7,	// (0x00067cab) title_pane_stacon_g

0x2830,	// (0x0005ae34) cursor_press_pane

0xb152,	// (0x00063756) popup_fep_hwr_window_ParamLimits

0xb152,	// (0x00063756) popup_fep_hwr_window

0x04bd,	// (0x00058ac1) popup_fep_vkb_window_ParamLimits

0x04bd,	// (0x00058ac1) popup_fep_vkb_window

0x59e0,	// (0x0005dfe4) cursor_press_pane_g1

0x0002,

0xfb15,	// (0x00068119) fep_vkb_side_pane_g_ParamLimits

0x0f63,	// (0x00059567) fep_hwr_candidate_pane_ParamLimits

0x0f63,	// (0x00059567) fep_hwr_candidate_pane

0x0f8d,	// (0x00059591) fep_hwr_side_pane_ParamLimits

0x0f8d,	// (0x00059591) fep_hwr_side_pane

0x0faf,	// (0x000595b3) fep_hwr_top_pane_ParamLimits

0x0faf,	// (0x000595b3) fep_hwr_top_pane

0x0fc7,	// (0x000595cb) fep_hwr_write_pane_ParamLimits

0x0fc7,	// (0x000595cb) fep_hwr_write_pane

0xfb15,	// (0x00068119) fep_vkb_side_pane_g

0x59e8,	// (0x0005dfec) fep_hwr_top_pane_g1

0x59fa,	// (0x0005dffe) fep_hwr_top_pane_g2

0x1001,	// (0x00059605) fep_hwr_top_pane_g3

0x0002,

0xfaf1,	// (0x000680f5) fep_hwr_top_pane_g

0x1016,	// (0x0005961a) fep_hwr_top_text_pane

0x2203,	// (0x0005a807) fep_hwr_top_text_pane_g1

0x5a30,	// (0x0005e034) fep_hwr_top_text_pane_t1

0x1120,	// (0x00059724) fep_hwr_candidate_pane_g1

0x5c7b,	// (0x0005e27f) fep_vkb_keypad_pane_g3_ParamLimits

0x5c7b,	// (0x0005e27f) fep_vkb_keypad_pane_g3

0x5ca7,	// (0x0005e2ab) fep_vkb_keypad_pane_g4_ParamLimits

0x5ca7,	// (0x0005e2ab) fep_vkb_keypad_pane_g4

0x5d1e,	// (0x0005e322) fep_vkb_bottom_pane_g2_ParamLimits

0x5d1e,	// (0x0005e322) fep_vkb_bottom_pane_g2

0x0001,

0xfb1c,	// (0x00068120) fep_vkb_bottom_pane_g_ParamLimits

0xfb1c,	// (0x00068120) fep_vkb_bottom_pane_g

0x5987,	// (0x0005df8b) cell_vkb_side_pane_g2

0x0001,

0xfb26,	// (0x0006812a) cell_vkb_side_pane_g

0x5da9,	// (0x0005e3ad) cell_vkb_side_pane_t1

0x5db7,	// (0x0005e3bb) cell_vkb_side_pane_t1_copy1

0x5987,	// (0x0005df8b) bg_fep_vkb_candidate_pane_g2

0x5efb,	// (0x0005e4ff) cell_vkb_candidate_pane_ParamLimits

0x5a3e,	// (0x0005e042) aid_size_cell_vkb_ParamLimits

0x5a3e,	// (0x0005e042) aid_size_cell_vkb

0x5efb,	// (0x0005e4ff) cell_vkb_candidate_pane

0x1147,	// (0x0005974b) bg_popup_fep_shadow_pane_g1

0xcd56,	// (0x0006535a) fep_vkb_bottom_pane_ParamLimits

0xcd56,	// (0x0006535a) fep_vkb_bottom_pane

0x5b0d,	// (0x0005e111) fep_vkb_candidate_pane_ParamLimits

0x5b0d,	// (0x0005e111) fep_vkb_candidate_pane

0xcd82,	// (0x00065386) fep_vkb_keypad_pane_ParamLimits

0xcd82,	// (0x00065386) fep_vkb_keypad_pane

0xcda9,	// (0x000653ad) fep_vkb_side_pane_ParamLimits

0xcda9,	// (0x000653ad) fep_vkb_side_pane

0xcde5,	// (0x000653e9) fep_vkb_top_pane_ParamLimits

0xcde5,	// (0x000653e9) fep_vkb_top_pane

0x5bd4,	// (0x0005e1d8) fep_vkb_top_pane_g1_ParamLimits

0x5bd4,	// (0x0005e1d8) fep_vkb_top_pane_g1

0x5be3,	// (0x0005e1e7) fep_vkb_top_pane_g2_ParamLimits

0x5be3,	// (0x0005e1e7) fep_vkb_top_pane_g2

0x5bf2,	// (0x0005e1f6) fep_vkb_top_pane_g3_ParamLimits

0x5bf2,	// (0x0005e1f6) fep_vkb_top_pane_g3

0x0003,

0xfb0c,	// (0x00068110) fep_vkb_top_pane_g_ParamLimits

0xfb0c,	// (0x00068110) fep_vkb_top_pane_g

0x5c10,	// (0x0005e214) fep_vkb_top_text_pane_ParamLimits

0x5c10,	// (0x0005e214) fep_vkb_top_text_pane

0xce21,	// (0x00065425) fep_vkb_side_pane_g1_ParamLimits

0xce21,	// (0x00065425) fep_vkb_side_pane_g1

0x5c6a,	// (0x0005e26e) grid_vkb_side_pane_ParamLimits

0x5c6a,	// (0x0005e26e) grid_vkb_side_pane

0x114f,	// (0x00059753) bg_popup_fep_shadow_pane_g2

0x1158,	// (0x0005975c) bg_popup_fep_shadow_pane_g3

0x1160,	// (0x00059764) bg_popup_fep_shadow_pane_g4

0x1169,	// (0x0005976d) bg_popup_fep_shadow_pane_g5

0x1173,	// (0x00059777) bg_popup_fep_shadow_pane_g6

0x117b,	// (0x0005977f) bg_popup_fep_shadow_pane_g7

0x9574,	// (0x00061b78) bg_popup_fep_shadow_pane_g8

0x5cc9,	// (0x0005e2cd) grid_vkb_keypad_number_pane_ParamLimits

0x5cc9,	// (0x0005e2cd) grid_vkb_keypad_number_pane

0x5cdd,	// (0x0005e2e1) grid_vkb_keypad_pane_ParamLimits

0x5cdd,	// (0x0005e2e1) grid_vkb_keypad_pane

0x5d03,	// (0x0005e307) fep_vkb_bottom_pane_g1_ParamLimits

0x5d03,	// (0x0005e307) fep_vkb_bottom_pane_g1

0x5d2c,	// (0x0005e330) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x5d2c,	// (0x0005e330) grid_vkb_keypad_bottom_left_pane

0x5d41,	// (0x0005e345) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5d41,	// (0x0005e345) grid_vkb_keypad_bottom_right_pane

0x5d56,	// (0x0005e35a) fep_vkb_top_text_pane_g1

0xce68,	// (0x0006546c) fep_vkb_top_text_pane_t1

0xce7a,	// (0x0006547e) cell_vkb_side_pane_ParamLimits

0xce7a,	// (0x0006547e) cell_vkb_side_pane

0x5987,	// (0x0005df8b) cell_vkb_side_pane_g1

0x5dc5,	// (0x0005e3c9) cell_vkb_keypad_pane_ParamLimits

0x5dc5,	// (0x0005e3c9) cell_vkb_keypad_pane

0x5e52,	// (0x0005e456) cell_vkb_keypad_pane_g1

0x0008,

0xfb39,	// (0x0006813d) bg_popup_fep_shadow_pane_g

0x118d,	// (0x00059791) cell_hwr_side_pane_g1

0x118d,	// (0x00059791) cell_hwr_side_pane_g2

0x5e5c,	// (0x0005e460) cell_vkb_keypad_pane_t1

0xce90,	// (0x00065494) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xce90,	// (0x00065494) cell_vkb_keypad_bottom_left_pane

0xcea5,	// (0x000654a9) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcea5,	// (0x000654a9) cell_vkb_keypad_bottom_right_pane

0x5987,	// (0x0005df8b) cell_vkb_keypad_bottom_left_pane_g1

0x5987,	// (0x0005df8b) cell_vkb_keypad_bottom_right_pane_g1

0x5ec0,	// (0x0005e4c4) cell_vkb_keypad_number_pane_ParamLimits

0x5ec0,	// (0x0005e4c4) cell_vkb_keypad_number_pane

0x5edf,	// (0x0005e4e3) cell_vkb_keypad_number_pane_g1

0x5ee9,	// (0x0005e4ed) cell_vkb_keypad_number_pane_g2

0x5ef2,	// (0x0005e4f6) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb2b,	// (0x0006812f) cell_vkb_keypad_number_pane_g

0x5e5c,	// (0x0005e460) cell_vkb_keypad_number_pane_t1

0x5f1c,	// (0x0005e520) fep_vkb_candidate_pane_g1

0x0001,

0xfb4c,	// (0x00068150) cell_hwr_side_pane_g

0x5f35,	// (0x0005e539) cell_hwr_side_pane_t1

0x1197,	// (0x0005979b) cell_hwr_side_pane_t1_copy1

0x11a5,	// (0x000597a9) cell_hwr_candidate_pane_g1

0x11d4,	// (0x000597d8) cell_hwr_candidate_pane_t1

0x5987,	// (0x0005df8b) cell_vkb_candidate_pane_g2

0x5f79,	// (0x0005e57d) cell_vkb_candidate_pane_t1

0x0f2a,	// (0x0005952e) bg_popup_fep_shadow_pane_ParamLimits

0x0f2a,	// (0x0005952e) bg_popup_fep_shadow_pane

0x0fe1,	// (0x000595e5) bg_fep_hwr_top_pane_g4

0x5a0c,	// (0x0005e010) bg_hwr_side_pane_g1_ParamLimits

0x5a0c,	// (0x0005e010) bg_hwr_side_pane_g1

0xba1c,	// (0x00064020) cell_hwr_side_pane_ParamLimits

0xba1c,	// (0x00064020) cell_hwr_side_pane

0x1091,	// (0x00059695) fep_hwr_write_pane_g1_ParamLimits

0x1091,	// (0x00059695) fep_hwr_write_pane_g1

0x109e,	// (0x000596a2) fep_hwr_write_pane_g2_ParamLimits

0x109e,	// (0x000596a2) fep_hwr_write_pane_g2

0x10ab,	// (0x000596af) fep_hwr_write_pane_g3_ParamLimits

0x10ab,	// (0x000596af) fep_hwr_write_pane_g3

0xba3c,	// (0x00064040) fep_hwr_write_pane_g4_ParamLimits

0xba3c,	// (0x00064040) fep_hwr_write_pane_g4

0x0005,

0xfaf8,	// (0x000680fc) fep_hwr_write_pane_g_ParamLimits

0xfaf8,	// (0x000680fc) fep_hwr_write_pane_g

0x0fe1,	// (0x000595e5) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0fe1,	// (0x000595e5) bg_fep_hwr_candidate_pane_g2

0x10ce,	// (0x000596d2) cell_hwr_candidate_pane_ParamLimits

0x10ce,	// (0x000596d2) cell_hwr_candidate_pane

0x1120,	// (0x00059724) fep_hwr_candidate_pane_g1_ParamLimits

0x5a6c,	// (0x0005e070) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x5a6c,	// (0x0005e070) bg_popup_fep_shadow_pane_cp2

0x5c02,	// (0x0005e206) fep_vkb_top_pane_g4_ParamLimits

0x5c02,	// (0x0005e206) fep_vkb_top_pane_g4

0x5c48,	// (0x0005e24c) fep_vkb_side_pane_g2_ParamLimits

0x5c48,	// (0x0005e24c) fep_vkb_side_pane_g2

0xa91b,	// (0x00062f1f) list_setting_pane_t4_ParamLimits

0xa91b,	// (0x00062f1f) list_setting_pane_t4

0xa9b7,	// (0x00062fbb) list_setting_number_pane_t5_ParamLimits

0xa9b7,	// (0x00062fbb) list_setting_number_pane_t5

0x223a,	// (0x0005a83e) list_double_heading_pane_cp2_ParamLimits

0x223a,	// (0x0005a83e) list_double_heading_pane_cp2

0x5f87,	// (0x0005e58b) list_double_heading_pane_g1_cp2_ParamLimits

0x5f87,	// (0x0005e58b) list_double_heading_pane_g1_cp2

0x5f93,	// (0x0005e597) list_double_heading_pane_g2_cp2_ParamLimits

0x5f93,	// (0x0005e597) list_double_heading_pane_g2_cp2

0x5fa7,	// (0x0005e5ab) list_double_heading_pane_t1_cp2_ParamLimits

0x5fa7,	// (0x0005e5ab) list_double_heading_pane_t1_cp2

0x5fbd,	// (0x0005e5c1) list_double_heading_pane_t2_cp2_ParamLimits

0x5fbd,	// (0x0005e5c1) list_double_heading_pane_t2_cp2

0x56f5,	// (0x0005dcf9) aid_value_unit2

0xf158,	// (0x0006775c) popup_preview_fixed_window

0x8d51,	// (0x00061355) bg_popup_preview_window_pane_cp02

0x5fcf,	// (0x0005e5d3) list_preview_fixed_pane

0x6015,	// (0x0005e619) list_empty_pane_fp_ParamLimits

0x6015,	// (0x0005e619) list_empty_pane_fp

0x6015,	// (0x0005e619) list_single_cale_day_pane_fp_ParamLimits

0x6015,	// (0x0005e619) list_single_cale_day_pane_fp

0x6015,	// (0x0005e619) list_single_graphic_heading_pane_fp_ParamLimits

0x6015,	// (0x0005e619) list_single_graphic_heading_pane_fp

0x6015,	// (0x0005e619) list_single_graphic_pane_fp_ParamLimits

0x6015,	// (0x0005e619) list_single_graphic_pane_fp

0x6015,	// (0x0005e619) list_single_heading_pane_fp_ParamLimits

0x6015,	// (0x0005e619) list_single_heading_pane_fp

0x6015,	// (0x0005e619) list_single_pane_fp_ParamLimits

0x6015,	// (0x0005e619) list_single_pane_fp

0x602e,	// (0x0005e632) list_single_pane_fp_g1_ParamLimits

0x602e,	// (0x0005e632) list_single_pane_fp_g1

0x3b4d,	// (0x0005c151) list_single_pane_fp_g2_ParamLimits

0x3b4d,	// (0x0005c151) list_single_pane_fp_g2

0x3b59,	// (0x0005c15d) list_single_pane_fp_g3_ParamLimits

0x3b59,	// (0x0005c15d) list_single_pane_fp_g3

0x603a,	// (0x0005e63e) list_single_pane_fp_g4_ParamLimits

0x603a,	// (0x0005e63e) list_single_pane_fp_g4

0x0003,

0xfb5f,	// (0x00068163) list_single_pane_fp_g_ParamLimits

0xfb5f,	// (0x00068163) list_single_pane_fp_g

0xe604,	// (0x00066c08) list_single_pane_fp_t1_ParamLimits

0xe604,	// (0x00066c08) list_single_pane_fp_t1

0xe61b,	// (0x00066c1f) list_single_graphic_pane_fp_g1_ParamLimits

0xe61b,	// (0x00066c1f) list_single_graphic_pane_fp_g1

0x602e,	// (0x0005e632) list_single_graphic_pane_fp_g2_ParamLimits

0x602e,	// (0x0005e632) list_single_graphic_pane_fp_g2

0x3b4d,	// (0x0005c151) list_single_graphic_pane_fp_g3_ParamLimits

0x3b4d,	// (0x0005c151) list_single_graphic_pane_fp_g3

0x3b59,	// (0x0005c15d) list_single_graphic_pane_fp_g4_ParamLimits

0x3b59,	// (0x0005c15d) list_single_graphic_pane_fp_g4

0x603a,	// (0x0005e63e) list_single_graphic_pane_fp_g5_ParamLimits

0x603a,	// (0x0005e63e) list_single_graphic_pane_fp_g5

0x0004,

0xfb68,	// (0x0006816c) list_single_graphic_pane_fp_g_ParamLimits

0xfb68,	// (0x0006816c) list_single_graphic_pane_fp_g

0xe627,	// (0x00066c2b) list_single_graphic_pane_fp_t1_ParamLimits

0xe627,	// (0x00066c2b) list_single_graphic_pane_fp_t1

0xe61b,	// (0x00066c1f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xe61b,	// (0x00066c1f) list_single_graphic_heading_pane_fp_g1

0x602e,	// (0x0005e632) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x602e,	// (0x0005e632) list_single_graphic_heading_pane_fp_g2

0x3b4d,	// (0x0005c151) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3b4d,	// (0x0005c151) list_single_graphic_heading_pane_fp_g3

0x3b59,	// (0x0005c15d) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3b59,	// (0x0005c15d) list_single_graphic_heading_pane_fp_g4

0x603a,	// (0x0005e63e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x603a,	// (0x0005e63e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb68,	// (0x0006816c) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb68,	// (0x0006816c) list_single_graphic_heading_pane_fp_g

0xe63d,	// (0x00066c41) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xe63d,	// (0x00066c41) list_single_graphic_heading_pane_fp_t1

0xe653,	// (0x00066c57) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xe653,	// (0x00066c57) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb73,	// (0x00068177) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb73,	// (0x00068177) list_single_graphic_heading_pane_fp_t

0xe665,	// (0x00066c69) list_single_cale_day_pane_fp_g1_ParamLimits

0xe665,	// (0x00066c69) list_single_cale_day_pane_fp_g1

0x6046,	// (0x0005e64a) list_single_cale_day_pane_fp_g2_ParamLimits

0x6046,	// (0x0005e64a) list_single_cale_day_pane_fp_g2

0x3b6d,	// (0x0005c171) list_single_cale_day_pane_fp_g3_ParamLimits

0x3b6d,	// (0x0005c171) list_single_cale_day_pane_fp_g3

0x3b95,	// (0x0005c199) list_single_cale_day_pane_fp_g4_ParamLimits

0x3b95,	// (0x0005c199) list_single_cale_day_pane_fp_g4

0x3bb9,	// (0x0005c1bd) list_single_cale_day_pane_fp_g5_ParamLimits

0x3bb9,	// (0x0005c1bd) list_single_cale_day_pane_fp_g5

0x0004,

0xfb78,	// (0x0006817c) list_single_cale_day_pane_fp_g_ParamLimits

0xfb78,	// (0x0006817c) list_single_cale_day_pane_fp_g

0xe69d,	// (0x00066ca1) list_single_cale_day_pane_fp_t1_ParamLimits

0xe69d,	// (0x00066ca1) list_single_cale_day_pane_fp_t1

0xe6c3,	// (0x00066cc7) list_single_cale_day_pane_fp_t2_ParamLimits

0xe6c3,	// (0x00066cc7) list_single_cale_day_pane_fp_t2

0xe6dc,	// (0x00066ce0) list_single_cale_day_pane_fp_t3_ParamLimits

0xe6dc,	// (0x00066ce0) list_single_cale_day_pane_fp_t3

0x0002,

0xfb83,	// (0x00068187) list_single_cale_day_pane_fp_t_ParamLimits

0xfb83,	// (0x00068187) list_single_cale_day_pane_fp_t

0x602e,	// (0x0005e632) list_empty_pane_fp_g1_ParamLimits

0x602e,	// (0x0005e632) list_empty_pane_fp_g1

0xe6f5,	// (0x00066cf9) list_empty_pane_fp_t1

0xe703,	// (0x00066d07) list_empty_pane_fp_t2

0x0001,

0xfb8a,	// (0x0006818e) list_empty_pane_fp_t

0x602e,	// (0x0005e632) list_single_heading_pane_fp_g1_ParamLimits

0x602e,	// (0x0005e632) list_single_heading_pane_fp_g1

0x3b4d,	// (0x0005c151) list_single_heading_pane_fp_g2_ParamLimits

0x3b4d,	// (0x0005c151) list_single_heading_pane_fp_g2

0x3b59,	// (0x0005c15d) list_single_heading_pane_fp_g3_ParamLimits

0x3b59,	// (0x0005c15d) list_single_heading_pane_fp_g3

0x0002,

0xfb8f,	// (0x00068193) list_single_heading_pane_fp_g_ParamLimits

0xfb8f,	// (0x00068193) list_single_heading_pane_fp_g

0xe711,	// (0x00066d15) list_single_heading_pane_fp_t1_ParamLimits

0xe711,	// (0x00066d15) list_single_heading_pane_fp_t1

0xe723,	// (0x00066d27) list_single_heading_pane_fp_t2_ParamLimits

0xe723,	// (0x00066d27) list_single_heading_pane_fp_t2

0x0001,

0xfb96,	// (0x0006819a) list_single_heading_pane_fp_t_ParamLimits

0xfb96,	// (0x0006819a) list_single_heading_pane_fp_t

0xdf48,	// (0x0006654c) aid_size_cell_fast

0x8d34,	// (0x00061338) soft_indicator_pane_cp1_t1

0xdf85,	// (0x00066589) cell_app_pane_cp2_ParamLimits

0xdf85,	// (0x00066589) cell_app_pane_cp2

0x0f4c,	// (0x00059550) fep_hwr_candidate_drop_down_list_pane

0x113a,	// (0x0005973e) fep_hwr_candidate_pane_g3_ParamLimits

0x113a,	// (0x0005973e) fep_hwr_candidate_pane_g3

0xe5f7,	// (0x00066bfb) fep_hwr_candidate_pane_g4_ParamLimits

0xe5f7,	// (0x00066bfb) fep_hwr_candidate_pane_g4

0x0002,

0xfb05,	// (0x00068109) fep_hwr_candidate_pane_g_ParamLimits

0xfb05,	// (0x00068109) fep_hwr_candidate_pane_g

0x5afc,	// (0x0005e100) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x5afc,	// (0x0005e100) fep_vkb_candidate_drop_down_list_pane

0x5f24,	// (0x0005e528) fep_vkb_candidate_pane_g3

0x5f2c,	// (0x0005e530) fep_vkb_candidate_pane_g4

0x0002,

0xfb32,	// (0x00068136) fep_vkb_candidate_pane_g

0x11a5,	// (0x000597a9) cell_hwr_candidate_pane_g1_ParamLimits

0x11b3,	// (0x000597b7) cell_hwr_candidate_pane_g3_ParamLimits

0x11b3,	// (0x000597b7) cell_hwr_candidate_pane_g3

0x718f,	// (0x0005f793) cell_hwr_candidate_pane_g4_ParamLimits

0x718f,	// (0x0005f793) cell_hwr_candidate_pane_g4

0x0002,

0xfb51,	// (0x00068155) cell_hwr_candidate_pane_g_ParamLimits

0xfb51,	// (0x00068155) cell_hwr_candidate_pane_g

0x5f43,	// (0x0005e547) cell_vkb_candidate_pane_g3_ParamLimits

0x5f43,	// (0x0005e547) cell_vkb_candidate_pane_g3

0x5f5e,	// (0x0005e562) cell_vkb_candidate_pane_g4_ParamLimits

0x5f5e,	// (0x0005e562) cell_vkb_candidate_pane_g4

0x6052,	// (0x0005e656) cell_app_pane_cp2_g1_ParamLimits

0x6052,	// (0x0005e656) cell_app_pane_cp2_g1

0x6070,	// (0x0005e674) cell_app_pane_cp2_g2_ParamLimits

0x6070,	// (0x0005e674) cell_app_pane_cp2_g2

0x0001,

0xfb9b,	// (0x0006819f) cell_app_pane_cp2_g_ParamLimits

0xfb9b,	// (0x0006819f) cell_app_pane_cp2_g

0x607c,	// (0x0005e680) cell_app_pane_cp2_t1_ParamLimits

0x607c,	// (0x0005e680) cell_app_pane_cp2_t1

0x9504,	// (0x00061b08) grid_highlight_pane_cp1_ParamLimits

0x9504,	// (0x00061b08) grid_highlight_pane_cp1

0x11f2,	// (0x000597f6) cell_hwr_candidate_pane_cp1_ParamLimits

0x11f2,	// (0x000597f6) cell_hwr_candidate_pane_cp1

0x11a5,	// (0x000597a9) fep_hwr_candidate_drop_down_list_pane_g1

0x1216,	// (0x0005981a) fep_hwr_candidate_drop_down_list_pane_g2

0x1223,	// (0x00059827) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba0,	// (0x000681a4) fep_hwr_candidate_drop_down_list_pane_g

0x1230,	// (0x00059834) fep_hwr_candidate_drop_down_list_scroll_pane

0x1239,	// (0x0005983d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1239,	// (0x0005983d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1246,	// (0x0005984a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1246,	// (0x0005984a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1253,	// (0x00059857) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1253,	// (0x00059857) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1260,	// (0x00059864) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1260,	// (0x00059864) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x127b,	// (0x0005987f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x127b,	// (0x0005987f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1296,	// (0x0005989a) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1296,	// (0x0005989a) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x12b1,	// (0x000598b5) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x12b1,	// (0x000598b5) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x12cc,	// (0x000598d0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x12cc,	// (0x000598d0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba7,	// (0x000681ab) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba7,	// (0x000681ab) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x608e,	// (0x0005e692) cell_vkb_candidate_pane_cp1_ParamLimits

0x608e,	// (0x0005e692) cell_vkb_candidate_pane_cp1

0x5c02,	// (0x0005e206) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x5c02,	// (0x0005e206) fep_vkb_candidate_drop_down_list_pane_g1

0x60b4,	// (0x0005e6b8) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x60b4,	// (0x0005e6b8) fep_vkb_candidate_drop_down_list_pane_g2

0x60c1,	// (0x0005e6c5) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x60c1,	// (0x0005e6c5) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb8,	// (0x000681bc) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb8,	// (0x000681bc) fep_vkb_candidate_drop_down_list_pane_g

0x60ce,	// (0x0005e6d2) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x60ce,	// (0x0005e6d2) fep_vkb_candidate_drop_down_list_scroll_pane

0x60db,	// (0x0005e6df) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x60db,	// (0x0005e6df) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x60e8,	// (0x0005e6ec) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x60e8,	// (0x0005e6ec) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x60f4,	// (0x0005e6f8) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x60f4,	// (0x0005e6f8) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6100,	// (0x0005e704) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6100,	// (0x0005e704) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6121,	// (0x0005e725) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6121,	// (0x0005e725) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x6142,	// (0x0005e746) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6142,	// (0x0005e746) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x6163,	// (0x0005e767) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6163,	// (0x0005e767) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x6184,	// (0x0005e788) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6184,	// (0x0005e788) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbf,	// (0x000681c3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbf,	// (0x000681c3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa185,	// (0x00062789) title_pane_g1_ParamLimits

0xa198,	// (0x0006279c) title_pane_g2_ParamLimits

0xf527,	// (0x00067b2b) title_pane_g_ParamLimits

0x21f3,	// (0x0005a7f7) aid_call2_pane

0x21fb,	// (0x0005a7ff) aid_call_pane

0x2203,	// (0x0005a807) popup_clock_analogue_window_g1

0x2203,	// (0x0005a807) popup_clock_analogue_window_g2

0xf44e,	// (0x00067a52) popup_clock_analogue_window_g3

0xf457,	// (0x00067a5b) popup_clock_analogue_window_g4

0x5707,	// (0x0005dd0b) popup_clock_analogue_window_g5

0x0004,

0xf6d6,	// (0x00067cda) popup_clock_analogue_window_g

0xf45f,	// (0x00067a63) popup_clock_analogue_window_t1

0xf46d,	// (0x00067a71) clock_digital_number_pane_ParamLimits

0xf46d,	// (0x00067a71) clock_digital_number_pane

0xf479,	// (0x00067a7d) clock_digital_number_pane_cp02_ParamLimits

0xf479,	// (0x00067a7d) clock_digital_number_pane_cp02

0xf485,	// (0x00067a89) clock_digital_number_pane_cp03_ParamLimits

0xf485,	// (0x00067a89) clock_digital_number_pane_cp03

0xf491,	// (0x00067a95) clock_digital_number_pane_cp04_ParamLimits

0xf491,	// (0x00067a95) clock_digital_number_pane_cp04

0xf49d,	// (0x00067aa1) clock_digital_separator_pane_ParamLimits

0xf49d,	// (0x00067aa1) clock_digital_separator_pane

0xf4a9,	// (0x00067aad) popup_clock_digital_window_t1_ParamLimits

0xf4a9,	// (0x00067aad) popup_clock_digital_window_t1

0x5707,	// (0x0005dd0b) clock_digital_number_pane_g1

0x5707,	// (0x0005dd0b) clock_digital_number_pane_g2

0x0001,

0xf6e1,	// (0x00067ce5) clock_digital_number_pane_g

0x5707,	// (0x0005dd0b) clock_digital_separator_pane_g1

0x5707,	// (0x0005dd0b) clock_digital_separator_pane_g2

0x0001,

0xf6e1,	// (0x00067ce5) clock_digital_separator_pane_g

0xb7c3,	// (0x00063dc7) aid_fill_nsta_ParamLimits

0xc2b8,	// (0x000648bc) indicator_nsta_pane_ParamLimits

0x2e74,	// (0x0005b478) popup_clock_analogue_window

0x2e74,	// (0x0005b478) popup_clock_digital_window

0xcb7e,	// (0x00065182) grid_indicator_nsta_pane_ParamLimits

0x532f,	// (0x0005d933) clock_nsta_pane_t2

0x0001,

0xfa85,	// (0x00068089) clock_nsta_pane_t

0xf41b,	// (0x00067a1f) aid_size_max_handle

0xacca,	// (0x000632ce) aid_size_min_handle

0x2830,	// (0x0005ae34) editor_scroll_pane

0x619f,	// (0x0005e7a3) ex_editor_pane

0xdf0e,	// (0x00066512) scroll_pane_cp13

0x94a3,	// (0x00061aa7) scroll_pane_cp14

0x2232,	// (0x0005a836) scroll_pane_cp36

0xad57,	// (0x0006335b) list_single_graphic_hl_pane_cp2_ParamLimits

0xad57,	// (0x0006335b) list_single_graphic_hl_pane_cp2

0xca07,	// (0x0006500b) list_single_graphic_hl_pane_ParamLimits

0xca07,	// (0x0006500b) list_single_graphic_hl_pane

0xe739,	// (0x00066d3d) aid_size_min_hl_cp1

0x61a7,	// (0x0005e7ab) list_highlight_pane_cp34_ParamLimits

0x61a7,	// (0x0005e7ab) list_highlight_pane_cp34

0x61b8,	// (0x0005e7bc) list_single_graphic_hl_pane_g1_ParamLimits

0x61b8,	// (0x0005e7bc) list_single_graphic_hl_pane_g1

0xba51,	// (0x00064055) list_single_graphic_hl_pane_g2_ParamLimits

0xba51,	// (0x00064055) list_single_graphic_hl_pane_g2

0xba51,	// (0x00064055) list_single_graphic_hl_pane_g3_ParamLimits

0xba51,	// (0x00064055) list_single_graphic_hl_pane_g3

0x2767,	// (0x0005ad6b) list_single_graphic_hl_pane_g4_ParamLimits

0x2767,	// (0x0005ad6b) list_single_graphic_hl_pane_g4

0xcec0,	// (0x000654c4) list_single_graphic_hl_pane_g5_ParamLimits

0xcec0,	// (0x000654c4) list_single_graphic_hl_pane_g5

0x0004,

0xfbd0,	// (0x000681d4) list_single_graphic_hl_pane_g_ParamLimits

0xfbd0,	// (0x000681d4) list_single_graphic_hl_pane_g

0xba5d,	// (0x00064061) list_single_graphic_hl_pane_t1_ParamLimits

0xba5d,	// (0x00064061) list_single_graphic_hl_pane_t1

0x61c5,	// (0x0005e7c9) aid_size_min_hl_cp2

0x61ce,	// (0x0005e7d2) list_highlight_pane_cp34_cp2_ParamLimits

0x61ce,	// (0x0005e7d2) list_highlight_pane_cp34_cp2

0x61b8,	// (0x0005e7bc) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x61b8,	// (0x0005e7bc) list_single_graphic_hl_pane_g1_cp2

0x61db,	// (0x0005e7df) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x61db,	// (0x0005e7df) list_single_graphic_hl_pane_g2_cp2

0x61e7,	// (0x0005e7eb) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x61e7,	// (0x0005e7eb) list_single_graphic_hl_pane_g3_cp2

0x61f5,	// (0x0005e7f9) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x61f5,	// (0x0005e7f9) list_single_graphic_hl_pane_g4_cp2

0x6201,	// (0x0005e805) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x6201,	// (0x0005e805) list_single_graphic_hl_pane_g5_cp2

0xaf83,	// (0x00063587) control_pane_g4_ParamLimits

0xaf83,	// (0x00063587) control_pane_g4

0x2b5f,	// (0x0005b163) bg_popup_sub_pane_cp10_ParamLimits

0x5991,	// (0x0005df95) list_choice_list_pane_ParamLimits

0x59a0,	// (0x0005dfa4) scroll_pane_cp23

0x8d51,	// (0x00061355) bg_popup_preview_window_pane_cp02_ParamLimits

0x5fcf,	// (0x0005e5d3) list_preview_fixed_pane_ParamLimits

0x5fe5,	// (0x0005e5e9) list_preview_fixed_pane_cp_ParamLimits

0x5fe5,	// (0x0005e5e9) list_preview_fixed_pane_cp

0x5ff1,	// (0x0005e5f5) popup_preview_fixed_window_g1_ParamLimits

0x5ff1,	// (0x0005e5f5) popup_preview_fixed_window_g1

0x5ffd,	// (0x0005e601) popup_preview_fixed_window_g2_ParamLimits

0x5ffd,	// (0x0005e601) popup_preview_fixed_window_g2

0x0002,

0xfb58,	// (0x0006815c) popup_preview_fixed_window_g_ParamLimits

0xfb58,	// (0x0006815c) popup_preview_fixed_window_g

0xf385,	// (0x00067989) aid_navi_side_left_pane_ParamLimits

0xf39a,	// (0x0006799e) aid_navi_side_right_pane_ParamLimits

0xf3b2,	// (0x000679b6) navi_icon_pane_stacon_ParamLimits

0xf3c6,	// (0x000679ca) navi_navi_pane_stacon_ParamLimits

0xf3b2,	// (0x000679b6) navi_text_pane_stacon_ParamLimits

0xf049,	// (0x0006764d) main_text_info_pane

0x622b,	// (0x0005e82f) listscroll_text_info_pane

0x6233,	// (0x0005e837) list_text_info_pane_ParamLimits

0x6233,	// (0x0005e837) list_text_info_pane

0x6242,	// (0x0005e846) scroll_pane_cp24_ParamLimits

0x6242,	// (0x0005e846) scroll_pane_cp24

0xced4,	// (0x000654d8) list_text_info_pane_t1_ParamLimits

0xced4,	// (0x000654d8) list_text_info_pane_t1

0xb0b6,	// (0x000636ba) popup_fast_swap2_window_ParamLimits

0xb0b6,	// (0x000636ba) popup_fast_swap2_window

0x6285,	// (0x0005e889) aid_size_cell_fast2

0x56fd,	// (0x0005dd01) bg_popup_window_pane_cp17

0x34f5,	// (0x0005baf9) heading_pane_cp2

0x628f,	// (0x0005e893) listscroll_fast2_pane

0x6297,	// (0x0005e89b) grid_fast2_pane

0x62a1,	// (0x0005e8a5) listscroll_fast2_pane_g1

0x62ab,	// (0x0005e8af) listscroll_fast2_pane_g2

0x0001,

0xfbdb,	// (0x000681df) listscroll_fast2_pane_g

0xdf0e,	// (0x00066512) scroll_pane_cp26

0x62b5,	// (0x0005e8b9) cell_fast2_pane_ParamLimits

0x62b5,	// (0x0005e8b9) cell_fast2_pane

0x62cc,	// (0x0005e8d0) cell_fast2_pane_g1

0x62d5,	// (0x0005e8d9) cell_fast2_pane_g2

0x62de,	// (0x0005e8e2) cell_fast2_pane_g3

0x0002,

0xfbe0,	// (0x000681e4) cell_fast2_pane_g

0x926a,	// (0x0006186e) grid_highlight_pane_cp9

0x035d,	// (0x00058961) main_eswt_pane_ParamLimits

0x035d,	// (0x00058961) main_eswt_pane

0x6257,	// (0x0005e85b) list_single_text_info_pane

0x62e6,	// (0x0005e8ea) eswt_ctrl_button_pane

0x62e6,	// (0x0005e8ea) eswt_ctrl_canvas_pane

0x62ee,	// (0x0005e8f2) eswt_ctrl_combo_pane

0x62e6,	// (0x0005e8ea) eswt_ctrl_default_pane

0x62e6,	// (0x0005e8ea) eswt_ctrl_label_pane

0x62f6,	// (0x0005e8fa) eswt_ctrl_wait_pane

0x62fe,	// (0x0005e902) eswt_shell_pane

0x56fd,	// (0x0005dd01) listscroll_eswt_app_pane

0x631e,	// (0x0005e922) popup_eswt_tasktip_window_ParamLimits

0x631e,	// (0x0005e922) popup_eswt_tasktip_window

0x3133,	// (0x0005b737) bg_popup_window_pane_cp18

0x632f,	// (0x0005e933) eswt_control_pane_g1_ParamLimits

0x632f,	// (0x0005e933) eswt_control_pane_g1

0x633c,	// (0x0005e940) eswt_control_pane_g2_ParamLimits

0x633c,	// (0x0005e940) eswt_control_pane_g2

0x6349,	// (0x0005e94d) eswt_control_pane_g3_ParamLimits

0x6349,	// (0x0005e94d) eswt_control_pane_g3

0x6356,	// (0x0005e95a) eswt_control_pane_g4_ParamLimits

0x6356,	// (0x0005e95a) eswt_control_pane_g4

0x0003,

0xfbe7,	// (0x000681eb) eswt_control_pane_g_ParamLimits

0xfbe7,	// (0x000681eb) eswt_control_pane_g

0x9504,	// (0x00061b08) bg_button_pane_ParamLimits

0x9504,	// (0x00061b08) bg_button_pane

0x927f,	// (0x00061883) common_borders_pane_copy2_ParamLimits

0x927f,	// (0x00061883) common_borders_pane_copy2

0x6363,	// (0x0005e967) control_button_pane_g1_ParamLimits

0x6363,	// (0x0005e967) control_button_pane_g1

0x636f,	// (0x0005e973) control_button_pane_g2_ParamLimits

0x636f,	// (0x0005e973) control_button_pane_g2

0x637b,	// (0x0005e97f) control_button_pane_g3_ParamLimits

0x637b,	// (0x0005e97f) control_button_pane_g3

0x0002,

0xfbf0,	// (0x000681f4) control_button_pane_g_ParamLimits

0xfbf0,	// (0x000681f4) control_button_pane_g

0x638f,	// (0x0005e993) control_button_pane_t1

0x639d,	// (0x0005e9a1) control_button_pane_t2

0x0001,

0xfbf7,	// (0x000681fb) control_button_pane_t

0x30a7,	// (0x0005b6ab) bg_button_pane_g1

0x30b7,	// (0x0005b6bb) bg_button_pane_g2

0x30af,	// (0x0005b6b3) bg_button_pane_g3

0x30c7,	// (0x0005b6cb) bg_button_pane_g4

0x30bf,	// (0x0005b6c3) bg_button_pane_g5

0x30cf,	// (0x0005b6d3) bg_button_pane_g6

0x30d7,	// (0x0005b6db) bg_button_pane_g7

0x30e7,	// (0x0005b6eb) bg_button_pane_g8

0x30df,	// (0x0005b6e3) bg_button_pane_g9

0x0008,

0xf83f,	// (0x00067e43) bg_button_pane_g

0x594c,	// (0x0005df50) common_borders_pane_ParamLimits

0x594c,	// (0x0005df50) common_borders_pane

0x632f,	// (0x0005e933) eswt_control_pane_g1_copy1_ParamLimits

0x632f,	// (0x0005e933) eswt_control_pane_g1_copy1

0x633c,	// (0x0005e940) eswt_control_pane_g2_copy1_ParamLimits

0x633c,	// (0x0005e940) eswt_control_pane_g2_copy1

0x6349,	// (0x0005e94d) eswt_control_pane_g3_copy1_ParamLimits

0x6349,	// (0x0005e94d) eswt_control_pane_g3_copy1

0x6356,	// (0x0005e95a) eswt_control_pane_g4_copy1_ParamLimits

0x6356,	// (0x0005e95a) eswt_control_pane_g4_copy1

0x5987,	// (0x0005df8b) bg_eswt_ctrl_canvas_pane_g1

0x594c,	// (0x0005df50) common_borders_pane_cp2_ParamLimits

0x594c,	// (0x0005df50) common_borders_pane_cp2

0x594c,	// (0x0005df50) common_borders_pane_cp3_ParamLimits

0x594c,	// (0x0005df50) common_borders_pane_cp3

0x63ab,	// (0x0005e9af) separator_horizontal_pane

0x63b3,	// (0x0005e9b7) separator_vertical_pane

0x632f,	// (0x0005e933) eswt_control_pane_g1_copy2_ParamLimits

0x632f,	// (0x0005e933) eswt_control_pane_g1_copy2

0x633c,	// (0x0005e940) eswt_control_pane_g2_copy2_ParamLimits

0x633c,	// (0x0005e940) eswt_control_pane_g2_copy2

0x6349,	// (0x0005e94d) eswt_control_pane_g3_copy2_ParamLimits

0x6349,	// (0x0005e94d) eswt_control_pane_g3_copy2

0x6356,	// (0x0005e95a) eswt_control_pane_g4_copy2_ParamLimits

0x6356,	// (0x0005e95a) eswt_control_pane_g4_copy2

0x56fd,	// (0x0005dd01) common_borders_pane_cp4

0x63bc,	// (0x0005e9c0) separator_horizontal_pane_g1

0x63c5,	// (0x0005e9c9) separator_horizontal_pane_g2

0x63ce,	// (0x0005e9d2) separator_horizontal_pane_g3

0x0002,

0xfbfc,	// (0x00068200) separator_horizontal_pane_g

0x632f,	// (0x0005e933) eswt_control_pane_g1_copy3_ParamLimits

0x632f,	// (0x0005e933) eswt_control_pane_g1_copy3

0x633c,	// (0x0005e940) eswt_control_pane_g2_copy3_ParamLimits

0x633c,	// (0x0005e940) eswt_control_pane_g2_copy3

0x6349,	// (0x0005e94d) eswt_control_pane_g3_copy3_ParamLimits

0x6349,	// (0x0005e94d) eswt_control_pane_g3_copy3

0x6356,	// (0x0005e95a) eswt_control_pane_g4_copy3_ParamLimits

0x6356,	// (0x0005e95a) eswt_control_pane_g4_copy3

0x56fd,	// (0x0005dd01) common_borders_pane_cp5

0x63d7,	// (0x0005e9db) separator_vertical_pane_g1

0x63e0,	// (0x0005e9e4) separator_vertical_pane_g2

0x63e9,	// (0x0005e9ed) separator_vertical_pane_g3

0x0002,

0xfc03,	// (0x00068207) separator_vertical_pane_g

0x632f,	// (0x0005e933) eswt_control_pane_g1_copy4_ParamLimits

0x632f,	// (0x0005e933) eswt_control_pane_g1_copy4

0x633c,	// (0x0005e940) eswt_control_pane_g2_copy4_ParamLimits

0x633c,	// (0x0005e940) eswt_control_pane_g2_copy4

0x6349,	// (0x0005e94d) eswt_control_pane_g3_copy4_ParamLimits

0x6349,	// (0x0005e94d) eswt_control_pane_g3_copy4

0x6356,	// (0x0005e95a) eswt_control_pane_g4_copy4_ParamLimits

0x6356,	// (0x0005e95a) eswt_control_pane_g4_copy4

0xcef6,	// (0x000654fa) eswt_ctrl_combo_button_pane

0xcefe,	// (0x00065502) eswt_ctrl_input_pane

0xcf06,	// (0x0006550a) popup_choice_list_window_cp70

0xcf0e,	// (0x00065512) eswt_ctrl_input_pane_t1

0x56fd,	// (0x0005dd01) input_focus_pane_cp70

0x594c,	// (0x0005df50) bg_button_pane_cp70_ParamLimits

0x594c,	// (0x0005df50) bg_button_pane_cp70

0xcf1c,	// (0x00065520) eswt_ctrl_combo_button_pane_g1

0x6420,	// (0x0005ea24) wait_bar_pane_cp70

0x3133,	// (0x0005b737) bg_popup_window_pane_cp70_ParamLimits

0x3133,	// (0x0005b737) bg_popup_window_pane_cp70

0x6428,	// (0x0005ea2c) popup_eswt_tasktip_window_t1

0x643e,	// (0x0005ea42) wait_bar_pane_cp71_ParamLimits

0x643e,	// (0x0005ea42) wait_bar_pane_cp71

0x644a,	// (0x0005ea4e) grid_eswt_app_pane

0xe13c,	// (0x00066740) scroll_pane_cp70

0xcf24,	// (0x00065528) cell_eswt_app_pane_ParamLimits

0xcf24,	// (0x00065528) cell_eswt_app_pane

0xcf56,	// (0x0006555a) cell_eswt_app_pane_g1_ParamLimits

0xcf56,	// (0x0006555a) cell_eswt_app_pane_g1

0xcf85,	// (0x00065589) cell_eswt_app_pane_g2_ParamLimits

0xcf85,	// (0x00065589) cell_eswt_app_pane_g2

0x0001,

0xfc0a,	// (0x0006820e) cell_eswt_app_pane_g_ParamLimits

0xfc0a,	// (0x0006820e) cell_eswt_app_pane_g

0xcfae,	// (0x000655b2) cell_eswt_app_pane_t1_ParamLimits

0xcfae,	// (0x000655b2) cell_eswt_app_pane_t1

0x650f,	// (0x0005eb13) grid_highlight_pane_cp70_ParamLimits

0x650f,	// (0x0005eb13) grid_highlight_pane_cp70

0x26f2,	// (0x0005acf6) set_content_pane_g1

0xaf67,	// (0x0006356b) status_small_volume_pane

0xba73,	// (0x00064077) status_small_volume_pane_g1

0xba7b,	// (0x0006407f) volume_small2_pane

0xba84,	// (0x00064088) volume_small2_pane_g1

0xba8d,	// (0x00064091) volume_small2_pane_g2

0xba96,	// (0x0006409a) volume_small2_pane_g3

0xba9f,	// (0x000640a3) volume_small2_pane_g4

0xbaa8,	// (0x000640ac) volume_small2_pane_g5

0xbab1,	// (0x000640b5) volume_small2_pane_g6

0xbaba,	// (0x000640be) volume_small2_pane_g7

0xbac3,	// (0x000640c7) volume_small2_pane_g8

0xbacc,	// (0x000640d0) volume_small2_pane_g9

0xbad5,	// (0x000640d9) volume_small2_pane_g10

0x0009,

0xfc0f,	// (0x00068213) volume_small2_pane_g

0x5d56,	// (0x0005e35a) fep_vkb_top_text_pane_g1_ParamLimits

0xce68,	// (0x0006546c) fep_vkb_top_text_pane_t1_ParamLimits

0x6009,	// (0x0005e60d) popup_preview_fixed_window_g3_ParamLimits

0x6009,	// (0x0005e60d) popup_preview_fixed_window_g3

0xb756,	// (0x00063d5a) popup_toolbar_trans_pane

0xc848,	// (0x00064e4c) aid_height_set_list_ParamLimits

0x467a,	// (0x0005cc7e) aid_size_parent_ParamLimits

0x2b5f,	// (0x0005b163) list_highlight_pane_cp2_ParamLimits

0x26f2,	// (0x0005acf6) set_content_pane_g1_ParamLimits

0xca1b,	// (0x0006501f) list_single_image_pane_ParamLimits

0xca1b,	// (0x0006501f) list_single_image_pane

0xcfe0,	// (0x000655e4) aid_size_cell_image_ParamLimits

0xcfe0,	// (0x000655e4) aid_size_cell_image

0xcfed,	// (0x000655f1) grid_single_image_pane_ParamLimits

0xcfed,	// (0x000655f1) grid_single_image_pane

0x9512,	// (0x00061b16) list_single_image_pane_g1_ParamLimits

0x9512,	// (0x00061b16) list_single_image_pane_g1

0x951e,	// (0x00061b22) list_single_image_pane_g2_ParamLimits

0x951e,	// (0x00061b22) list_single_image_pane_g2

0x0001,

0xfc24,	// (0x00068228) list_single_image_pane_g_ParamLimits

0xfc24,	// (0x00068228) list_single_image_pane_g

0x6536,	// (0x0005eb3a) list_single_image_pane_t1_ParamLimits

0x6536,	// (0x0005eb3a) list_single_image_pane_t1

0xcffb,	// (0x000655ff) cell_image_list_pane_ParamLimits

0xcffb,	// (0x000655ff) cell_image_list_pane

0xd011,	// (0x00065615) cell_image_list_pane_g1

0xd01a,	// (0x0006561e) cell_image_list_pane_g2

0x0001,

0xfc29,	// (0x0006822d) cell_image_list_pane_g

0x6576,	// (0x0005eb7a) aid_size_cell_tb_trans_pane

0x9504,	// (0x00061b08) bg_tb_trans_pane

0x6588,	// (0x0005eb8c) grid_tb_trans_pane

0x30a7,	// (0x0005b6ab) bg_tb_trans_pane_g1

0x30b7,	// (0x0005b6bb) bg_tb_trans_pane_g2

0x30af,	// (0x0005b6b3) bg_tb_trans_pane_g3

0x30c7,	// (0x0005b6cb) bg_tb_trans_pane_g4

0x30bf,	// (0x0005b6c3) bg_tb_trans_pane_g5

0x30e7,	// (0x0005b6eb) bg_tb_trans_pane_g6

0x30df,	// (0x0005b6e3) bg_tb_trans_pane_g7

0x30cf,	// (0x0005b6d3) bg_tb_trans_pane_g8

0x30d7,	// (0x0005b6db) bg_tb_trans_pane_g9

0x0008,

0xfc2e,	// (0x00068232) bg_tb_trans_pane_g

0x659c,	// (0x0005eba0) cell_toolbar_trans_pane_ParamLimits

0x659c,	// (0x0005eba0) cell_toolbar_trans_pane

0x5987,	// (0x0005df8b) cell_toolbar_trans_pane_g1

0xcc5f,	// (0x00065263) list_form2_midp_pane_t1

0xcc6d,	// (0x00065271) list_form2_midp_pane_t2

0x0001,

0xfacb,	// (0x000680cf) list_form2_midp_pane_t

0x552e,	// (0x0005db32) scroll_pane_cp51_ParamLimits

0x57a9,	// (0x0005ddad) form2_midp_wait_pane_g1

0x57b2,	// (0x0005ddb6) form2_midp_wait_pane_g2

0x57bb,	// (0x0005ddbf) form2_midp_wait_pane_g3

0x0002,

0xfae0,	// (0x000680e4) form2_midp_wait_pane_g

0x575f,	// (0x0005dd63) list_highlight_pane_cp21_ParamLimits

0x57f4,	// (0x0005ddf8) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x5803,	// (0x0005de07) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x4863,	// (0x0005ce67) list_single_2graphic_im_pane_ParamLimits

0x4863,	// (0x0005ce67) list_single_2graphic_im_pane

0xd023,	// (0x00065627) list_single_2graphic_im_pane_g1_ParamLimits

0xd023,	// (0x00065627) list_single_2graphic_im_pane_g1

0xd034,	// (0x00065638) list_single_2graphic_im_pane_g2_ParamLimits

0xd034,	// (0x00065638) list_single_2graphic_im_pane_g2

0xd040,	// (0x00065644) list_single_2graphic_im_pane_g3_ParamLimits

0xd040,	// (0x00065644) list_single_2graphic_im_pane_g3

0x0003,

0xfc41,	// (0x00068245) list_single_2graphic_im_pane_g_ParamLimits

0xfc41,	// (0x00068245) list_single_2graphic_im_pane_g

0xd054,	// (0x00065658) list_single_2graphic_im_pane_t1_ParamLimits

0xd054,	// (0x00065658) list_single_2graphic_im_pane_t1

0x6015,	// (0x0005e619) list_single_graphic_2heading_pane_fp_ParamLimits

0x6015,	// (0x0005e619) list_single_graphic_2heading_pane_fp

0xe61b,	// (0x00066c1f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xe61b,	// (0x00066c1f) list_single_graphic_2heading_pane_fp_g1

0x602e,	// (0x0005e632) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x602e,	// (0x0005e632) list_single_graphic_2heading_pane_fp_g2

0x3b4d,	// (0x0005c151) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3b4d,	// (0x0005c151) list_single_graphic_2heading_pane_fp_g3

0x3b59,	// (0x0005c15d) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3b59,	// (0x0005c15d) list_single_graphic_2heading_pane_fp_g4

0x603a,	// (0x0005e63e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x603a,	// (0x0005e63e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb68,	// (0x0006816c) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb68,	// (0x0006816c) list_single_graphic_2heading_pane_fp_g

0xe742,	// (0x00066d46) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe742,	// (0x00066d46) list_single_graphic_2heading_pane_fp_t1

0xe653,	// (0x00066c57) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xe653,	// (0x00066c57) list_single_graphic_2heading_pane_fp_t2

0xe758,	// (0x00066d5c) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe758,	// (0x00066d5c) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc4a,	// (0x0006824e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc4a,	// (0x0006824e) list_single_graphic_2heading_pane_fp_t

0x5a18,	// (0x0005e01c) fep_hwr_write_pane_g5_ParamLimits

0x5a18,	// (0x0005e01c) fep_hwr_write_pane_g5

0x5a24,	// (0x0005e028) fep_hwr_write_pane_g6_ParamLimits

0x5a24,	// (0x0005e028) fep_hwr_write_pane_g6

0x62fe,	// (0x0005e902) eswt_shell_pane_ParamLimits

0x3133,	// (0x0005b737) bg_popup_window_pane_cp18_ParamLimits

0x34f5,	// (0x0005baf9) heading_pane_cp70

0x6428,	// (0x0005ea2c) popup_eswt_tasktip_window_t1_ParamLimits

0xb820,	// (0x00063e24) aid_touch_tab_arrow_left

0xb834,	// (0x00063e38) aid_touch_tab_arrow_right

0xa1bc,	// (0x000627c0) title_pane_g3_ParamLimits

0xa1bc,	// (0x000627c0) title_pane_g3

0x94c3,	// (0x00061ac7) set_value_pane_g1

0xb756,	// (0x00063d5a) popup_toolbar_trans_pane_ParamLimits

0x6576,	// (0x0005eb7a) aid_size_cell_tb_trans_pane_ParamLimits

0x9504,	// (0x00061b08) bg_tb_trans_pane_ParamLimits

0x6588,	// (0x0005eb8c) grid_tb_trans_pane_ParamLimits

0x8d51,	// (0x00061355) cont_note_pane_ParamLimits

0x8d51,	// (0x00061355) cont_note_pane

0x927f,	// (0x00061883) cont_snote2_single_text_pane_ParamLimits

0x927f,	// (0x00061883) cont_snote2_single_text_pane

0x927f,	// (0x00061883) cont_snote2_single_graphic_pane_ParamLimits

0x927f,	// (0x00061883) cont_snote2_single_graphic_pane

0x3725,	// (0x0005bd29) cont_note_wait_pane_ParamLimits

0x3725,	// (0x0005bd29) cont_note_wait_pane

0x3725,	// (0x0005bd29) cont_note_image_pane_ParamLimits

0x3725,	// (0x0005bd29) cont_note_image_pane

0x6630,	// (0x0005ec34) popup_note2_window_g1_ParamLimits

0x6630,	// (0x0005ec34) popup_note2_window_g1

0x6661,	// (0x0005ec65) popup_note2_window_t1_ParamLimits

0x6661,	// (0x0005ec65) popup_note2_window_t1

0x66a6,	// (0x0005ecaa) popup_note2_window_t2_ParamLimits

0x66a6,	// (0x0005ecaa) popup_note2_window_t2

0x66eb,	// (0x0005ecef) popup_note2_window_t3_ParamLimits

0x66eb,	// (0x0005ecef) popup_note2_window_t3

0x6730,	// (0x0005ed34) popup_note2_window_t4_ParamLimits

0x6730,	// (0x0005ed34) popup_note2_window_t4

0x9079,	// (0x0006167d) popup_note2_window_t5_ParamLimits

0x9079,	// (0x0006167d) popup_note2_window_t5

0x0004,

0xfc56,	// (0x0006825a) popup_note2_window_t_ParamLimits

0xfc56,	// (0x0006825a) popup_note2_window_t

0x675f,	// (0x0005ed63) popup_note2_image_window_g1_ParamLimits

0x675f,	// (0x0005ed63) popup_note2_image_window_g1

0x676b,	// (0x0005ed6f) popup_note2_image_window_g2_ParamLimits

0x676b,	// (0x0005ed6f) popup_note2_image_window_g2

0x0001,

0xfc61,	// (0x00068265) popup_note2_image_window_g_ParamLimits

0xfc61,	// (0x00068265) popup_note2_image_window_g

0x677d,	// (0x0005ed81) popup_note2_image_window_t1_ParamLimits

0x677d,	// (0x0005ed81) popup_note2_image_window_t1

0x6795,	// (0x0005ed99) popup_note2_image_window_t2_ParamLimits

0x6795,	// (0x0005ed99) popup_note2_image_window_t2

0x67ad,	// (0x0005edb1) popup_note2_image_window_t3_ParamLimits

0x67ad,	// (0x0005edb1) popup_note2_image_window_t3

0x0002,

0xfc66,	// (0x0006826a) popup_note2_image_window_t_ParamLimits

0xfc66,	// (0x0006826a) popup_note2_image_window_t

0x3733,	// (0x0005bd37) popup_note2_wait_window_g1_ParamLimits

0x3733,	// (0x0005bd37) popup_note2_wait_window_g1

0x67c9,	// (0x0005edcd) popup_note2_wait_window_g2_ParamLimits

0x67c9,	// (0x0005edcd) popup_note2_wait_window_g2

0x374b,	// (0x0005bd4f) popup_note2_wait_window_g3_ParamLimits

0x374b,	// (0x0005bd4f) popup_note2_wait_window_g3

0x0002,

0xfc6d,	// (0x00068271) popup_note2_wait_window_g_ParamLimits

0xfc6d,	// (0x00068271) popup_note2_wait_window_g

0x67d5,	// (0x0005edd9) popup_note2_wait_window_t1_ParamLimits

0x67d5,	// (0x0005edd9) popup_note2_wait_window_t1

0x67f3,	// (0x0005edf7) popup_note2_wait_window_t2_ParamLimits

0x67f3,	// (0x0005edf7) popup_note2_wait_window_t2

0x6811,	// (0x0005ee15) popup_note2_wait_window_t3_ParamLimits

0x6811,	// (0x0005ee15) popup_note2_wait_window_t3

0x6823,	// (0x0005ee27) popup_note2_wait_window_t4_ParamLimits

0x6823,	// (0x0005ee27) popup_note2_wait_window_t4

0x0003,

0xfc74,	// (0x00068278) popup_note2_wait_window_t_ParamLimits

0xfc74,	// (0x00068278) popup_note2_wait_window_t

0x6835,	// (0x0005ee39) wait_bar2_pane_ParamLimits

0x6835,	// (0x0005ee39) wait_bar2_pane

0x684d,	// (0x0005ee51) popup_snote2_single_text_window_g1_ParamLimits

0x684d,	// (0x0005ee51) popup_snote2_single_text_window_g1

0x6875,	// (0x0005ee79) popup_snote2_single_text_window_t1_ParamLimits

0x6875,	// (0x0005ee79) popup_snote2_single_text_window_t1

0x68c1,	// (0x0005eec5) popup_snote2_single_text_window_t2_ParamLimits

0x68c1,	// (0x0005eec5) popup_snote2_single_text_window_t2

0x690d,	// (0x0005ef11) popup_snote2_single_text_window_t3_ParamLimits

0x690d,	// (0x0005ef11) popup_snote2_single_text_window_t3

0x694e,	// (0x0005ef52) popup_snote2_single_text_window_t4_ParamLimits

0x694e,	// (0x0005ef52) popup_snote2_single_text_window_t4

0x6984,	// (0x0005ef88) popup_snote2_single_text_window_t5_ParamLimits

0x6984,	// (0x0005ef88) popup_snote2_single_text_window_t5

0x0004,

0xfc7d,	// (0x00068281) popup_snote2_single_text_window_t_ParamLimits

0xfc7d,	// (0x00068281) popup_snote2_single_text_window_t

0x69af,	// (0x0005efb3) popup_snote2_single_graphic_window_g1_ParamLimits

0x69af,	// (0x0005efb3) popup_snote2_single_graphic_window_g1

0x69d7,	// (0x0005efdb) popup_snote2_single_graphic_window_g2_ParamLimits

0x69d7,	// (0x0005efdb) popup_snote2_single_graphic_window_g2

0x0001,

0xfc88,	// (0x0006828c) popup_snote2_single_graphic_window_g_ParamLimits

0xfc88,	// (0x0006828c) popup_snote2_single_graphic_window_g

0x69ff,	// (0x0005f003) popup_snote2_single_graphic_window_t1_ParamLimits

0x69ff,	// (0x0005f003) popup_snote2_single_graphic_window_t1

0x6a4b,	// (0x0005f04f) popup_snote2_single_graphic_window_t2_ParamLimits

0x6a4b,	// (0x0005f04f) popup_snote2_single_graphic_window_t2

0x690d,	// (0x0005ef11) popup_snote2_single_graphic_window_t3_ParamLimits

0x690d,	// (0x0005ef11) popup_snote2_single_graphic_window_t3

0x694e,	// (0x0005ef52) popup_snote2_single_graphic_window_t4_ParamLimits

0x694e,	// (0x0005ef52) popup_snote2_single_graphic_window_t4

0x6984,	// (0x0005ef88) popup_snote2_single_graphic_window_t5_ParamLimits

0x6984,	// (0x0005ef88) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8d,	// (0x00068291) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8d,	// (0x00068291) popup_snote2_single_graphic_window_t

0x53de,	// (0x0005d9e2) clock_nsta_pane_cp2_t1

0x53de,	// (0x0005d9e2) clock_nsta_pane_cp2_t2

0x0001,

0xfaa1,	// (0x000680a5) clock_nsta_pane_cp2_t

0xdde6,	// (0x000663ea) form_field_data_wide_pane_g1_ParamLimits

0x9512,	// (0x00061b16) form_field_data_wide_pane_g2_ParamLimits

0x9512,	// (0x00061b16) form_field_data_wide_pane_g2

0x951e,	// (0x00061b22) form_field_data_wide_pane_g3_ParamLimits

0x951e,	// (0x00061b22) form_field_data_wide_pane_g3

0x0002,

0xf659,	// (0x00067c5d) form_field_data_wide_pane_g_ParamLimits

0xf659,	// (0x00067c5d) form_field_data_wide_pane_g

0xcb68,	// (0x0006516c) grid_touch_3_pane_ParamLimits

0xcb68,	// (0x0006516c) grid_touch_3_pane

0xd085,	// (0x00065689) cell_touch_3_pane_ParamLimits

0xd085,	// (0x00065689) cell_touch_3_pane

0x5987,	// (0x0005df8b) cell_touch_3_pane_g1

0x5987,	// (0x0005df8b) cell_touch_3_pane_g2

0x0001,

0xfb26,	// (0x0006812a) cell_touch_3_pane_g

0x90d1,	// (0x000616d5) cont_query_data_pane

0x90d9,	// (0x000616dd) cont_query_data_pane_cp1

0x6aca,	// (0x0005f0ce) button_value_adjust_pane_cp7

0x6ad2,	// (0x0005f0d6) query_popup_pane_cp3

0x2308,	// (0x0005a90c) bg_popup_sub_pane_cp22_ParamLimits

0xf4c8,	// (0x00067acc) navi_navi_volume_pane_cp2

0xf4e3,	// (0x00067ae7) popup_side_volume_key_window_g2

0xf4f2,	// (0x00067af6) popup_side_volume_key_window_g3

0x0002,

0xf6ef,	// (0x00067cf3) popup_side_volume_key_window_g

0xf50f,	// (0x00067b13) popup_side_volume_key_window_t2

0x0001,

0xf6f6,	// (0x00067cfa) popup_side_volume_key_window_t

0x25c4,	// (0x0005abc8) popup_side_volume_key_window_ParamLimits

0xa6c7,	// (0x00062ccb) list_double_graphic_pane_g4_ParamLimits

0xa6c7,	// (0x00062ccb) list_double_graphic_pane_g4

0xc9f2,	// (0x00064ff6) list_single_2heading_msg_pane_ParamLimits

0xc9f2,	// (0x00064ff6) list_single_2heading_msg_pane

0xd0d1,	// (0x000656d5) list_single_2heading_msg_pane_g1_ParamLimits

0xd0d1,	// (0x000656d5) list_single_2heading_msg_pane_g1

0xd0dd,	// (0x000656e1) list_single_2heading_msg_pane_g2_ParamLimits

0xd0dd,	// (0x000656e1) list_single_2heading_msg_pane_g2

0xd0f0,	// (0x000656f4) list_single_2heading_msg_pane_g3_ParamLimits

0xd0f0,	// (0x000656f4) list_single_2heading_msg_pane_g3

0xd0fc,	// (0x00065700) list_single_2heading_msg_pane_g4_ParamLimits

0xd0fc,	// (0x00065700) list_single_2heading_msg_pane_g4

0x0003,

0xfc98,	// (0x0006829c) list_single_2heading_msg_pane_g_ParamLimits

0xfc98,	// (0x0006829c) list_single_2heading_msg_pane_g

0xbade,	// (0x000640e2) list_single_2heading_msg_pane_t1_ParamLimits

0xbade,	// (0x000640e2) list_single_2heading_msg_pane_t1

0xbb06,	// (0x0006410a) list_single_2heading_msg_pane_t2_ParamLimits

0xbb06,	// (0x0006410a) list_single_2heading_msg_pane_t2

0xbb71,	// (0x00064175) list_single_2heading_msg_pane_t3_ParamLimits

0xbb71,	// (0x00064175) list_single_2heading_msg_pane_t3

0xe778,	// (0x00066d7c) list_single_2heading_msg_pane_t4_ParamLimits

0xe778,	// (0x00066d7c) list_single_2heading_msg_pane_t4

0x0003,

0xfca1,	// (0x000682a5) list_single_2heading_msg_pane_t_ParamLimits

0xfca1,	// (0x000682a5) list_single_2heading_msg_pane_t

0x571b,	// (0x0005dd1f) title_pane_g4_ParamLimits

0x571b,	// (0x0005dd1f) title_pane_g4

0xf2d6,	// (0x000678da) title_pane_stacon_g3_ParamLimits

0xf2d6,	// (0x000678da) title_pane_stacon_g3

0x65f3,	// (0x0005ebf7) list_single_2graphic_im_pane_g4_ParamLimits

0x65f3,	// (0x0005ebf7) list_single_2graphic_im_pane_g4

0x4383,	// (0x0005c987) popup_side_volume_key_window_cp

0x4bc9,	// (0x0005d1cd) main_idle_act2_pane_t1

0x09b2,	// (0x00058fb6) toolbar_button_pane_g10

0xa53d,	// (0x00062b41) popup_toolbar_window_cp1

0x53cf,	// (0x0005d9d3) clock_nsta_pane_cp_t1

0x53cf,	// (0x0005d9d3) clock_nsta_pane_cp_t2

0x0001,

0xfa9c,	// (0x000680a0) clock_nsta_pane_cp_t

0xf4c8,	// (0x00067acc) navi_navi_volume_pane_cp2_ParamLimits

0xf4d7,	// (0x00067adb) popup_side_volume_key_window_g1_ParamLimits

0xf4e3,	// (0x00067ae7) popup_side_volume_key_window_g2_ParamLimits

0xf4f2,	// (0x00067af6) popup_side_volume_key_window_g3_ParamLimits

0xf6ef,	// (0x00067cf3) popup_side_volume_key_window_g_ParamLimits

0x0f38,	// (0x0005953c) fep_hwr_aid_pane

0x0fe1,	// (0x000595e5) bg_fep_hwr_top_pane_g4_ParamLimits

0x59e8,	// (0x0005dfec) fep_hwr_top_pane_g1_ParamLimits

0x59fa,	// (0x0005dffe) fep_hwr_top_pane_g2_ParamLimits

0x1001,	// (0x00059605) fep_hwr_top_pane_g3_ParamLimits

0xfaf1,	// (0x000680f5) fep_hwr_top_pane_g_ParamLimits

0x1016,	// (0x0005961a) fep_hwr_top_text_pane_ParamLimits

0x4138,	// (0x0005c73c) aid_touch_tab_arrow_arrow_2

0x4141,	// (0x0005c745) aid_touch_tab_arrow_left_2

0x0f4c,	// (0x00059550) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0f83,	// (0x00059587) fep_hwr_prediction_pane

0x5b50,	// (0x0005e154) fep_vkb_prediction_pane

0xce48,	// (0x0006544c) fep_vkb_side_pane_g3_ParamLimits

0xce48,	// (0x0006544c) fep_vkb_side_pane_g3

0x11a5,	// (0x000597a9) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1216,	// (0x0005981a) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1223,	// (0x00059827) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba0,	// (0x000681a4) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1418,	// (0x00059a1c) fep_hwr_prediction_pane_g1

0x1422,	// (0x00059a26) fep_hwr_prediction_pane_g2

0x142a,	// (0x00059a2e) fep_hwr_prediction_pane_g3

0x1432,	// (0x00059a36) fep_hwr_prediction_pane_g4

0x0003,

0xfcaa,	// (0x000682ae) fep_hwr_prediction_pane_g

0x6af9,	// (0x0005f0fd) fep_vkb_prediction_pane_g1

0x6b03,	// (0x0005f107) fep_vkb_prediction_pane_g2

0x6b0b,	// (0x0005f10f) fep_vkb_prediction_pane_g3

0x6b13,	// (0x0005f117) fep_vkb_prediction_pane_g4

0x0003,

0xfcb3,	// (0x000682b7) fep_vkb_prediction_pane_g

0x0d02,	// (0x00059306) slider_set_pane_g3

0x0d16,	// (0x0005931a) slider_set_pane_g4

0x0d2e,	// (0x00059332) slider_set_pane_g5

0x0d02,	// (0x00059306) slider_set_pane_g6

0x0d44,	// (0x00059348) slider_set_pane_g7

0x47f9,	// (0x0005cdfd) slider_form_pane_g3

0x4802,	// (0x0005ce06) slider_form_pane_g4

0x480a,	// (0x0005ce0e) slider_form_pane_g5

0x47f9,	// (0x0005cdfd) slider_form_pane_g6

0xc9b1,	// (0x00064fb5) slider_form_pane_g7

0x4e8d,	// (0x0005d491) slider_set_pane_vc_g3

0x4e96,	// (0x0005d49a) slider_set_pane_vc_g4

0x4e9f,	// (0x0005d4a3) slider_set_pane_vc_g5

0x4e8d,	// (0x0005d491) slider_set_pane_vc_g6

0x4ea8,	// (0x0005d4ac) slider_set_pane_vc_g7

0x507e,	// (0x0005d682) slider_form_pane_vc_g1

0x5087,	// (0x0005d68b) slider_form_pane_vc_g2

0x5090,	// (0x0005d694) slider_form_pane_vc_g3

0x507e,	// (0x0005d682) slider_form_pane_vc_g4

0x5099,	// (0x0005d69d) slider_form_pane_vc_g5

0x0004,

0xfa6e,	// (0x00068072) slider_form_pane_vc_g

0xf049,	// (0x0006764d) main_idle_act3_pane

0x6b1b,	// (0x0005f11f) ai3_links_pane

0xd114,	// (0x00065718) popup_ai3_data_window_ParamLimits

0xd114,	// (0x00065718) popup_ai3_data_window

0x56fd,	// (0x0005dd01) grid_ai3_links_pane

0xd132,	// (0x00065736) cell_ai3_links_pane_ParamLimits

0xd132,	// (0x00065736) cell_ai3_links_pane

0x6b5c,	// (0x0005f160) bg_popup_sub_pane_cp11

0x6b69,	// (0x0005f16d) cell_ai3_links_pane_g1

0x56fd,	// (0x0005dd01) bg_popup_sub_pane_cp12

0x6b8e,	// (0x0005f192) heading_ai3_data_pane

0x6b96,	// (0x0005f19a) list_ai3_gene_pane

0x6ba2,	// (0x0005f1a6) popup_ai3_data_window_g1

0x6baa,	// (0x0005f1ae) heading_ai3_data_pane_g1

0x6bb2,	// (0x0005f1b6) heading_ai3_data_pane_t1

0x6bc0,	// (0x0005f1c4) list_double_ai3_gene_pane_ParamLimits

0x6bc0,	// (0x0005f1c4) list_double_ai3_gene_pane

0x6bcd,	// (0x0005f1d1) list_single_ai3_gene_pane_ParamLimits

0x6bcd,	// (0x0005f1d1) list_single_ai3_gene_pane

0x594c,	// (0x0005df50) list_highlight_pane_cp7_ParamLimits

0x594c,	// (0x0005df50) list_highlight_pane_cp7

0x6bda,	// (0x0005f1de) list_single_a13_gene_pane_t1_ParamLimits

0x6bda,	// (0x0005f1de) list_single_a13_gene_pane_t1

0x6bf1,	// (0x0005f1f5) list_single_ai3_gene_pane_g1

0x6bfa,	// (0x0005f1fe) list_single_ai3_gene_pane_g2

0x0001,

0xfcbc,	// (0x000682c0) list_single_ai3_gene_pane_g

0x6c02,	// (0x0005f206) list_double_ai3_gene_pane_g1_ParamLimits

0x6c02,	// (0x0005f206) list_double_ai3_gene_pane_g1

0x6c0e,	// (0x0005f212) list_double_ai3_gene_pane_t1_ParamLimits

0x6c0e,	// (0x0005f212) list_double_ai3_gene_pane_t1

0x6c2a,	// (0x0005f22e) list_double_ai3_gene_pane_t2_ParamLimits

0x6c2a,	// (0x0005f22e) list_double_ai3_gene_pane_t2

0x6c3f,	// (0x0005f243) list_double_ai3_gene_pane_t3_ParamLimits

0x6c3f,	// (0x0005f243) list_double_ai3_gene_pane_t3

0x0002,

0xfcc1,	// (0x000682c5) list_double_ai3_gene_pane_t_ParamLimits

0xfcc1,	// (0x000682c5) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe76e,	// (0x00066d72) aid_size_min_col_2

0xd0bb,	// (0x000656bf) aid_size_min_msg_ParamLimits

0xd0bb,	// (0x000656bf) aid_size_min_msg

0xce5c,	// (0x00065460) fep_vkb_top_text_pane_g2_ParamLimits

0xce5c,	// (0x00065460) fep_vkb_top_text_pane_g2

0x0001,

0xfb21,	// (0x00068125) fep_vkb_top_text_pane_g_ParamLimits

0xfb21,	// (0x00068125) fep_vkb_top_text_pane_g

0xf049,	// (0x0006764d) main_hc_apps_shell_pane

0x6c5c,	// (0x0005f260) grid_hc_apps_pane_ParamLimits

0x6c5c,	// (0x0005f260) grid_hc_apps_pane

0x6c6e,	// (0x0005f272) list_hc_apps_pane

0x6c76,	// (0x0005f27a) scroll_pane_cp37_ParamLimits

0x6c76,	// (0x0005f27a) scroll_pane_cp37

0xd14c,	// (0x00065750) cell_hc_apps_pane_ParamLimits

0xd14c,	// (0x00065750) cell_hc_apps_pane

0xd212,	// (0x00065816) cell_hc_apps_pane_g1_ParamLimits

0xd212,	// (0x00065816) cell_hc_apps_pane_g1

0x6d62,	// (0x0005f366) cell_hc_apps_pane_g2_ParamLimits

0x6d62,	// (0x0005f366) cell_hc_apps_pane_g2

0x6d7e,	// (0x0005f382) cell_hc_apps_pane_g3_ParamLimits

0x6d7e,	// (0x0005f382) cell_hc_apps_pane_g3

0x0002,

0xfcc8,	// (0x000682cc) cell_hc_apps_pane_g_ParamLimits

0xfcc8,	// (0x000682cc) cell_hc_apps_pane_g

0xd23e,	// (0x00065842) cell_hc_apps_pane_t1_ParamLimits

0xd23e,	// (0x00065842) cell_hc_apps_pane_t1

0x8d51,	// (0x00061355) grid_highlight_pane_cp10_ParamLimits

0x8d51,	// (0x00061355) grid_highlight_pane_cp10

0xd27c,	// (0x00065880) list_single_hc_apps_pane_ParamLimits

0xd27c,	// (0x00065880) list_single_hc_apps_pane

0xd2af,	// (0x000658b3) list_single_hc_apps_pane_g1

0xd2c8,	// (0x000658cc) list_single_hc_apps_pane_g2

0x0001,

0xfccf,	// (0x000682d3) list_single_hc_apps_pane_g

0xd2e1,	// (0x000658e5) list_single_hc_apps_pane_g2_copy1

0xbbdf,	// (0x000641e3) list_single_hc_apps_pane_t1

0x575f,	// (0x0005dd63) bg_set_opt_pane_cp_ParamLimits

0xf16c,	// (0x00067770) setting_slider_pane_t1_ParamLimits

0xf185,	// (0x00067789) setting_slider_pane_t2_ParamLimits

0xf19f,	// (0x000677a3) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x00067b3b) setting_slider_pane_t_ParamLimits

0xf1b7,	// (0x000677bb) slider_set_pane_ParamLimits

0x0251,	// (0x00058855) control_pane_g5_ParamLimits

0x0251,	// (0x00058855) control_pane_g5

0x462c,	// (0x0005cc30) slider_set_pane_g1_ParamLimits

0x0cf6,	// (0x000592fa) slider_set_pane_g2_ParamLimits

0x0d02,	// (0x00059306) slider_set_pane_g3_ParamLimits

0x0d16,	// (0x0005931a) slider_set_pane_g4_ParamLimits

0x0d2e,	// (0x00059332) slider_set_pane_g5_ParamLimits

0x0d02,	// (0x00059306) slider_set_pane_g6_ParamLimits

0x0d44,	// (0x00059348) slider_set_pane_g7_ParamLimits

0xf93d,	// (0x00067f41) slider_set_pane_g_ParamLimits

0x269d,	// (0x0005aca1) navi_icon_text_pane_ParamLimits

0xb7e7,	// (0x00063deb) aid_fill_nsta_2_ParamLimits

0xb820,	// (0x00063e24) aid_touch_tab_arrow_left_ParamLimits

0xb834,	// (0x00063e38) aid_touch_tab_arrow_right_ParamLimits

0xc28e,	// (0x00064892) clock_nsta_pane_ParamLimits

0xc72f,	// (0x00064d33) navi_icon_pane_g1_ParamLimits

0xc73b,	// (0x00064d3f) navi_text_pane_t1_ParamLimits

0xcc41,	// (0x00065245) navi_icon_text_pane_g1_ParamLimits

0xcc4d,	// (0x00065251) navi_icon_text_pane_t1_ParamLimits

0xd2af,	// (0x000658b3) list_single_hc_apps_pane_g1_ParamLimits

0xd2c8,	// (0x000658cc) list_single_hc_apps_pane_g2_ParamLimits

0xfccf,	// (0x000682d3) list_single_hc_apps_pane_g_ParamLimits

0xd2e1,	// (0x000658e5) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbbdf,	// (0x000641e3) list_single_hc_apps_pane_t1_ParamLimits

0xa0ab,	// (0x000626af) popup_toolbar2_fixed_window_ParamLimits

0xa0ab,	// (0x000626af) popup_toolbar2_fixed_window

0xb74c,	// (0x00063d50) popup_toolbar2_float_window

0x56fd,	// (0x0005dd01) bg_popup_sub_pane_cp27

0x6e38,	// (0x0005f43c) grid_toolbar2_float_pane

0x56fd,	// (0x0005dd01) bg_popup_sub_pane_cp26

0x6e38,	// (0x0005f43c) grid_toolbar2_fixed_pane

0xd2fd,	// (0x00065901) cell_toolbar2_fixed_pane_ParamLimits

0xd2fd,	// (0x00065901) cell_toolbar2_fixed_pane

0xd317,	// (0x0006591b) cell_toolbar2_fixed_pane_g1

0x6e59,	// (0x0005f45d) toolbar2_fixed_button_pane

0x30a7,	// (0x0005b6ab) toolbar2_fixed_button_pane_g1

0x30b7,	// (0x0005b6bb) toolbar2_fixed_button_pane_g2

0x30af,	// (0x0005b6b3) toolbar2_fixed_button_pane_g3

0x30c7,	// (0x0005b6cb) toolbar2_fixed_button_pane_g4

0x30bf,	// (0x0005b6c3) toolbar2_fixed_button_pane_g5

0x30cf,	// (0x0005b6d3) toolbar2_fixed_button_pane_g6

0x30d7,	// (0x0005b6db) toolbar2_fixed_button_pane_g7

0x30e7,	// (0x0005b6eb) toolbar2_fixed_button_pane_g8

0x30df,	// (0x0005b6e3) toolbar2_fixed_button_pane_g9

0x0008,

0xf83f,	// (0x00067e43) toolbar2_fixed_button_pane_g

0x6e61,	// (0x0005f465) cell_toolbar2_float_pane_ParamLimits

0x6e61,	// (0x0005f465) cell_toolbar2_float_pane

0x6e72,	// (0x0005f476) cell_toolbar2_float_pane_g1

0x6e59,	// (0x0005f45d) toolbar2_fixed_button_pane_cp

0xcd44,	// (0x00065348) fep_vkb_accented_list_pane_ParamLimits

0xcd44,	// (0x00065348) fep_vkb_accented_list_pane

0x1185,	// (0x00059789) bg_popup_fep_shadow_pane_g9

0x2830,	// (0x0005ae34) bg_popup_fep_shadow_pane_cp3

0xdef5,	// (0x000664f9) list_accented_list_pane

0x6e7b,	// (0x0005f47f) list_single_accented_list_pane_ParamLimits

0x6e7b,	// (0x0005f47f) list_single_accented_list_pane

0x2830,	// (0x0005ae34) list_highlight_pane_cp10

0x6e8c,	// (0x0005f490) list_single_accented_list_pane_t1

0xb668,	// (0x00063c6c) popup_slider_window_ParamLimits

0xb668,	// (0x00063c6c) popup_slider_window

0x6ada,	// (0x0005f0de) aid_indentation_list_msg

0xd41a,	// (0x00065a1e) bg_popup_window_pane_cp19

0x6fc8,	// (0x0005f5cc) popup_slider_window_g1

0x6fe4,	// (0x0005f5e8) popup_slider_window_g2

0x7000,	// (0x0005f604) popup_slider_window_g3

0x0005,

0xfcd4,	// (0x000682d8) popup_slider_window_g

0x7066,	// (0x0005f66a) popup_slider_window_t1

0x70da,	// (0x0005f6de) small_volume_slider_vertical_pane

0x5987,	// (0x0005df8b) small_volume_slider_vertical_pane_g1

0x5987,	// (0x0005df8b) small_volume_slider_vertical_pane_g2

0x70f6,	// (0x0005f6fa) small_volume_slider_vertical_pane_g3

0x0002,

0xfce6,	// (0x000682ea) small_volume_slider_vertical_pane_g

0xef66,	// (0x0006756a) area_side_right_pane_ParamLimits

0xef66,	// (0x0006756a) area_side_right_pane

0xbc0d,	// (0x00064211) aid_size_side_button_ParamLimits

0xbc0d,	// (0x00064211) aid_size_side_button

0xbc26,	// (0x0006422a) grid_sctrl_middle_pane_ParamLimits

0xbc26,	// (0x0006422a) grid_sctrl_middle_pane

0x149b,	// (0x00059a9f) sctrl_sk_bottom_pane

0x14ac,	// (0x00059ab0) sctrl_sk_top_pane

0x14be,	// (0x00059ac2) aid_touch_sctrl_top

0x14cb,	// (0x00059acf) bg_sctrl_sk_pane_ParamLimits

0x14cb,	// (0x00059acf) bg_sctrl_sk_pane

0x14d9,	// (0x00059add) sctrl_sk_top_pane_g1

0x14e6,	// (0x00059aea) sctrl_sk_top_pane_t1

0x14be,	// (0x00059ac2) aid_touch_sctrl_bottom

0x14cb,	// (0x00059acf) bg_sctrl_sk_pane_cp_ParamLimits

0x14cb,	// (0x00059acf) bg_sctrl_sk_pane_cp

0x1501,	// (0x00059b05) sctrl_sk_bottom_pane_g1

0x14e6,	// (0x00059aea) sctrl_sk_bottom_pane_t1

0xbc45,	// (0x00064249) cell_sctrl_middle_pane_ParamLimits

0xbc45,	// (0x00064249) cell_sctrl_middle_pane

0xbc6c,	// (0x00064270) aid_touch_sctrl_middle_ParamLimits

0xbc6c,	// (0x00064270) aid_touch_sctrl_middle

0x14cb,	// (0x00059acf) bg_sctrl_middle_pane_ParamLimits

0x14cb,	// (0x00059acf) bg_sctrl_middle_pane

0x1dec,	// (0x0005a3f0) cell_sctrl_middle_pane_g1_ParamLimits

0x1dec,	// (0x0005a3f0) cell_sctrl_middle_pane_g1

0xbc80,	// (0x00064284) cell_sctrl_middle_pane_g2_ParamLimits

0xbc80,	// (0x00064284) cell_sctrl_middle_pane_g2

0x0001,

0xfcf2,	// (0x000682f6) cell_sctrl_middle_pane_g_ParamLimits

0xfcf2,	// (0x000682f6) cell_sctrl_middle_pane_g

0x30a7,	// (0x0005b6ab) bg_sctrl_middle_pane_g1

0x30af,	// (0x0005b6b3) bg_sctrl_middle_pane_g2

0x30b7,	// (0x0005b6bb) bg_sctrl_middle_pane_g3

0x30bf,	// (0x0005b6c3) bg_sctrl_middle_pane_g4

0x30c7,	// (0x0005b6cb) bg_sctrl_middle_pane_g5

0x30cf,	// (0x0005b6d3) bg_sctrl_middle_pane_g6

0x30d7,	// (0x0005b6db) bg_sctrl_middle_pane_g7

0x30df,	// (0x0005b6e3) bg_sctrl_middle_pane_g8

0x0007,

0xfcf7,	// (0x000682fb) bg_sctrl_middle_pane_g

0x30e7,	// (0x0005b6eb) bg_sctrl_middle_pane_g8_copy1

0x30a7,	// (0x0005b6ab) bg_sctrl_sk_pane_g1

0x30b7,	// (0x0005b6bb) bg_sctrl_sk_pane_g2

0x30af,	// (0x0005b6b3) bg_sctrl_sk_pane_g3

0x0008,

0xf83f,	// (0x00067e43) bg_sctrl_sk_pane_g

0x943d,	// (0x00061a41) aid_size_touch_scroll_bar

0x30c7,	// (0x0005b6cb) bg_sctrl_sk_pane_g4

0x30bf,	// (0x0005b6c3) bg_sctrl_sk_pane_g5

0x30cf,	// (0x0005b6d3) bg_sctrl_sk_pane_g6

0x30d7,	// (0x0005b6db) bg_sctrl_sk_pane_g7

0x30e7,	// (0x0005b6eb) bg_sctrl_sk_pane_g8

0x30df,	// (0x0005b6e3) bg_sctrl_sk_pane_g9

0x03ff,	// (0x00058a03) popup_fep_china_hwr2_fs_candidate_window

0xb11a,	// (0x0006371e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb11a,	// (0x0006371e) popup_fep_china_hwr2_fs_control_window

0x11a5,	// (0x000597a9) sctrl_sk_top_pane_g2

0x0001,

0xfced,	// (0x000682f1) sctrl_sk_top_pane_g

0xd4d2,	// (0x00065ad6) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd4d2,	// (0x00065ad6) aid_fep_china_hwr2_fs_cell

0xd4e8,	// (0x00065aec) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd4e8,	// (0x00065aec) bg_popup_fep_shadow_pane_cp4

0xd4ff,	// (0x00065b03) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd4ff,	// (0x00065b03) bg_popup_fep_shadow_pane_cp5

0xd511,	// (0x00065b15) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd511,	// (0x00065b15) popup_fep_china_hwr2_fs_control_bar_grid

0xd525,	// (0x00065b29) popup_fep_china_hwr2_fs_control_funtion_grid

0x7155,	// (0x0005f759) aid_fep_china_hwr2_fs_candi_cell

0x56fd,	// (0x0005dd01) bg_popup_fep_shadow_pane_cp6

0x715f,	// (0x0005f763) popup_fep_china_hwr2_fs_candidate_grid

0xd52d,	// (0x00065b31) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd52d,	// (0x00065b31) cell_fep_china_hwr2_fs_funtion_grid

0x5987,	// (0x0005df8b) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x7181,	// (0x0005f785) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x7181,	// (0x0005f785) cell_fep_china_hwr2_fs_funtion_grid_g1

0x71b0,	// (0x0005f7b4) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x71b0,	// (0x0005f7b4) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd08,	// (0x0006830c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd08,	// (0x0006830c) cell_fep_china_hwr2_fs_funtion_grid_g

0xd545,	// (0x00065b49) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd545,	// (0x00065b49) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd55a,	// (0x00065b5e) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd55a,	// (0x00065b5e) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0d,	// (0x00068311) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0d,	// (0x00068311) cell_fep_china_hwr2_fs_funtion_grid_t

0x71f7,	// (0x0005f7fb) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x71ff,	// (0x0005f803) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x7207,	// (0x0005f80b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd12,	// (0x00068316) popup_fep_china_hwr2_fs_control_bar_grid_g

0x720f,	// (0x0005f813) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x720f,	// (0x0005f813) cell_fep_china_hwr2_fs_candidate_grid

0x722e,	// (0x0005f832) popup_fep_china_hwr2_fs_candidate_grid_g20

0x7236,	// (0x0005f83a) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5987,	// (0x0005df8b) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5987,	// (0x0005df8b) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb26,	// (0x0006812a) cell_fep_china_hwr2_fs_candidate_grid_g

0x723e,	// (0x0005f842) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2c7b,	// (0x0005b27f) clock_nsta_pane_cp_24_ParamLimits

0x2c7b,	// (0x0005b27f) clock_nsta_pane_cp_24

0x2cfb,	// (0x0005b2ff) indicator_nsta_pane_cp_24_ParamLimits

0x2cfb,	// (0x0005b2ff) indicator_nsta_pane_cp_24

0x3f96,	// (0x0005c59a) heading_pane_g1

0x0001,

0xf8a4,	// (0x00067ea8) heading_pane_g

0x4a10,	// (0x0005d014) grid_sct_catagory_button_pane

0x4a42,	// (0x0005d046) scroll_pane_cp5_ParamLimits

0x553a,	// (0x0005db3e) button_value_adjust_pane_cp5_ParamLimits

0x553a,	// (0x0005db3e) button_value_adjust_pane_cp5

0x561f,	// (0x0005dc23) form2_midp_time_pane_ParamLimits

0x724c,	// (0x0005f850) cell_sct_catagory_button_pane_ParamLimits

0x724c,	// (0x0005f850) cell_sct_catagory_button_pane

0x594c,	// (0x0005df50) bg_button_pane_cp01_ParamLimits

0x594c,	// (0x0005df50) bg_button_pane_cp01

0x5987,	// (0x0005df8b) cell_sct_catagory_button_pane_g1

0xb6e9,	// (0x00063ced) popup_tb_extension_window

0xd576,	// (0x00065b7a) aid_size_cell_ext_ParamLimits

0xd576,	// (0x00065b7a) aid_size_cell_ext

0x927f,	// (0x00061883) bg_tb_trans_pane_cp1_ParamLimits

0x927f,	// (0x00061883) bg_tb_trans_pane_cp1

0xd59c,	// (0x00065ba0) grid_tb_ext_pane_ParamLimits

0xd59c,	// (0x00065ba0) grid_tb_ext_pane

0xd5d9,	// (0x00065bdd) cell_tb_ext_pane_ParamLimits

0xd5d9,	// (0x00065bdd) cell_tb_ext_pane

0xd601,	// (0x00065c05) cell_tb_ext_pane_g1_ParamLimits

0xd601,	// (0x00065c05) cell_tb_ext_pane_g1

0x72e0,	// (0x0005f8e4) cell_tb_ext_pane_t1

0x8d51,	// (0x00061355) list_highlight_pane_cp11_ParamLimits

0x8d51,	// (0x00061355) list_highlight_pane_cp11

0xa0c0,	// (0x000626c4) popup_uni_indicator_window_ParamLimits

0xa0c0,	// (0x000626c4) popup_uni_indicator_window

0x9504,	// (0x00061b08) bg_popup_sub_pane_cp14

0x72fd,	// (0x0005f901) list_uniindi_pane

0x7309,	// (0x0005f90d) uniindi_top_pane

0x8d51,	// (0x00061355) bg_uniindi_top_pane

0x732a,	// (0x0005f92e) uniindi_top_pane_g1

0x7340,	// (0x0005f944) uniindi_top_pane_g2

0x0003,

0xfd19,	// (0x0006831d) uniindi_top_pane_g

0x736a,	// (0x0005f96e) uniindi_top_pane_t1

0x7396,	// (0x0005f99a) list_single_uniindi_pane_ParamLimits

0x7396,	// (0x0005f99a) list_single_uniindi_pane

0x5987,	// (0x0005df8b) bg_uniindi_top_pane_g1

0x73a9,	// (0x0005f9ad) list_single_uniindi_pane_g1

0x73bc,	// (0x0005f9c0) list_single_uniindi_pane_t1

0xf049,	// (0x0006764d) control_bg_pane

0x73e1,	// (0x0005f9e5) bg_sctrl_sk_pane_cp1

0x73ea,	// (0x0005f9ee) bg_sctrl_sk_pane_cp2

0x73f3,	// (0x0005f9f7) control_bg_pane_g1

0x73fc,	// (0x0005fa00) control_bg_pane_g2

0x0001,

0xfd22,	// (0x00068326) control_bg_pane_g

0x5372,	// (0x0005d976) cell_indicator_nsta_pane_g1_ParamLimits

0xcba5,	// (0x000651a9) cell_indicator_nsta_pane_g2_ParamLimits

0xfa8a,	// (0x0006808e) cell_indicator_nsta_pane_g_ParamLimits

0xe5e4,	// (0x00066be8) form2_midp_time_pane_t1_ParamLimits

0x0f2a,	// (0x0005952e) main_idle_act4_pane_ParamLimits

0x0f2a,	// (0x0005952e) main_idle_act4_pane

0xb6e9,	// (0x00063ced) popup_tb_extension_window_ParamLimits

0xd5c1,	// (0x00065bc5) tb_ext_find_pane_ParamLimits

0xd5c1,	// (0x00065bc5) tb_ext_find_pane

0x7405,	// (0x0005fa09) ai_gene_pane_1_cp1

0x297a,	// (0x0005af7e) ai_gene_pane_2_cp1

0x740d,	// (0x0005fa11) list_single_idle_plugin_calendar_pane

0x7416,	// (0x0005fa1a) list_single_idle_plugin_notification_pane

0x741f,	// (0x0005fa23) list_single_idle_plugin_player_pane

0xd61e,	// (0x00065c22) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd61e,	// (0x00065c22) list_single_idle_plugin_shortcut_pane

0xd646,	// (0x00065c4a) main_idle_act4_pane_t1

0xd65e,	// (0x00065c62) main_idle_act4_pane_t2

0x0001,

0xfd27,	// (0x0006832b) main_idle_act4_pane_t

0xd676,	// (0x00065c7a) middle_sk_idle_act4_pane_ParamLimits

0xd676,	// (0x00065c7a) middle_sk_idle_act4_pane

0xd692,	// (0x00065c96) popup_clock_digital_analogue_window_cp2

0xd6b9,	// (0x00065cbd) shortcut_wheel_idle_act4_pane_ParamLimits

0xd6b9,	// (0x00065cbd) shortcut_wheel_idle_act4_pane

0x5987,	// (0x0005df8b) shortcut_wheel_idle_act4_pane_g1

0x5987,	// (0x0005df8b) shortcut_wheel_idle_act4_pane_g2

0x5987,	// (0x0005df8b) shortcut_wheel_idle_act4_pane_g3

0x5987,	// (0x0005df8b) shortcut_wheel_idle_act4_pane_g4

0x5987,	// (0x0005df8b) shortcut_wheel_idle_act4_pane_g5

0x74b2,	// (0x0005fab6) shortcut_wheel_idle_act4_pane_g6

0x74ba,	// (0x0005fabe) shortcut_wheel_idle_act4_pane_g7

0x74c2,	// (0x0005fac6) shortcut_wheel_idle_act4_pane_g8

0x74ca,	// (0x0005face) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2c,	// (0x00068330) shortcut_wheel_idle_act4_pane_g

0xd736,	// (0x00065d3a) middle_sk_idle_act4_pane_g1_ParamLimits

0xd736,	// (0x00065d3a) middle_sk_idle_act4_pane_g1

0xd744,	// (0x00065d48) middle_sk_idle_act4_pane_g2_ParamLimits

0xd744,	// (0x00065d48) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4f,	// (0x00068353) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4f,	// (0x00068353) middle_sk_idle_act4_pane_g

0xd75c,	// (0x00065d60) middle_sk_idle_act4_pane_t1_ParamLimits

0xd75c,	// (0x00065d60) middle_sk_idle_act4_pane_t1

0xd78b,	// (0x00065d8f) grid_ai_shortcut_pane_ParamLimits

0xd78b,	// (0x00065d8f) grid_ai_shortcut_pane

0xd7a8,	// (0x00065dac) list_highlight_pane_cp16_ParamLimits

0xd7a8,	// (0x00065dac) list_highlight_pane_cp16

0xd7b5,	// (0x00065db9) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd7b5,	// (0x00065db9) list_single_idle_plugin_shortcut_pane_g1

0xd7c1,	// (0x00065dc5) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd7c1,	// (0x00065dc5) list_single_idle_plugin_shortcut_pane_g2

0xd7df,	// (0x00065de3) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd7df,	// (0x00065de3) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd54,	// (0x00068358) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd54,	// (0x00068358) list_single_idle_plugin_shortcut_pane_g

0xd7f4,	// (0x00065df8) cell_ai_shortcut_pane_ParamLimits

0xd7f4,	// (0x00065df8) cell_ai_shortcut_pane

0xd80a,	// (0x00065e0e) cell_ai_shortcut_pane_g1_ParamLimits

0xd80a,	// (0x00065e0e) cell_ai_shortcut_pane_g1

0x7405,	// (0x0005fa09) ai_gene_pane_1_cp2

0x75fb,	// (0x0005fbff) ai_gene_pane_2_cp2

0x7603,	// (0x0005fc07) list_highlight_pane_cp15

0x760c,	// (0x0005fc10) list_single_idle_plugin_calendar_pane_g1

0x7603,	// (0x0005fc07) list_highlight_pane_cp17

0x7614,	// (0x0005fc18) list_single_idle_plugin_calendar_pane_g1_copy1

0x761c,	// (0x0005fc20) list_single_idle_plugin_player_pane_g1

0x4c77,	// (0x0005d27b) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5b,	// (0x0006835f) list_single_idle_plugin_player_pane_g

0x7624,	// (0x0005fc28) list_single_idle_plugin_player_pane_t1

0x7632,	// (0x0005fc36) list_single_idle_plugin_player_pane_t2

0x7640,	// (0x0005fc44) list_single_idle_plugin_player_pane_t3

0x764e,	// (0x0005fc52) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd60,	// (0x00068364) list_single_idle_plugin_player_pane_t

0x765c,	// (0x0005fc60) wait_bar_pane_cp15

0x7664,	// (0x0005fc68) grid_ai_notification_pane

0x4c77,	// (0x0005d27b) list_single_idle_plugin_notification_pane_g1

0xd82c,	// (0x00065e30) cell_ai_notification_pane_ParamLimits

0xd82c,	// (0x00065e30) cell_ai_notification_pane

0x767a,	// (0x0005fc7e) cell_ai_notification_pane_g1

0x7682,	// (0x0005fc86) cell_ai_notification_pane_t1

0xd839,	// (0x00065e3d) tb_ext_find_button_pane

0xd841,	// (0x00065e45) tb_ext_find_pane_g1

0xd849,	// (0x00065e4d) tb_ext_find_pane_t1

0x2203,	// (0x0005a807) tb_ext_find_button_pane_g1

0x76ae,	// (0x0005fcb2) tb_ext_find_button_pane_g2

0x0001,

0xfd69,	// (0x0006836d) tb_ext_find_button_pane_g

0xd646,	// (0x00065c4a) main_idle_act4_pane_t1_ParamLimits

0xd65e,	// (0x00065c62) main_idle_act4_pane_t2_ParamLimits

0xfd27,	// (0x0006832b) main_idle_act4_pane_t_ParamLimits

0xd692,	// (0x00065c96) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd6a9,	// (0x00065cad) sat_plugin_idle_act4_pane_ParamLimits

0xd6a9,	// (0x00065cad) sat_plugin_idle_act4_pane

0xd857,	// (0x00065e5b) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd857,	// (0x00065e5b) sat_plugin_idle_act4_pane_t1

0xd86f,	// (0x00065e73) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd86f,	// (0x00065e73) sat_plugin_idle_act4_pane_t2

0xd887,	// (0x00065e8b) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd887,	// (0x00065e8b) sat_plugin_idle_act4_pane_t3

0xd89f,	// (0x00065ea3) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd89f,	// (0x00065ea3) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6e,	// (0x00068372) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6e,	// (0x00068372) sat_plugin_idle_act4_pane_t

0xf10e,	// (0x00067712) popup_battery_window_ParamLimits

0xf10e,	// (0x00067712) popup_battery_window

0x8d51,	// (0x00061355) bg_popup_sub_pane_cp25_ParamLimits

0x8d51,	// (0x00061355) bg_popup_sub_pane_cp25

0x7703,	// (0x0005fd07) popup_battery_window_g1_ParamLimits

0x7703,	// (0x0005fd07) popup_battery_window_g1

0x770f,	// (0x0005fd13) popup_battery_window_t1_ParamLimits

0x770f,	// (0x0005fd13) popup_battery_window_t1

0x7721,	// (0x0005fd25) popup_battery_window_t2_ParamLimits

0x7721,	// (0x0005fd25) popup_battery_window_t2

0x0001,

0xfd77,	// (0x0006837b) popup_battery_window_t_ParamLimits

0xfd77,	// (0x0006837b) popup_battery_window_t

0xae97,	// (0x0006349b) midp_canvas_pane_ParamLimits

0xaef3,	// (0x000634f7) midp_keypad_pane_ParamLimits

0xaef3,	// (0x000634f7) midp_keypad_pane

0x2b5f,	// (0x0005b163) main_midp_pane_ParamLimits

0x53ed,	// (0x0005d9f1) signal_pane_g2_cp_ParamLimits

0xd8b7,	// (0x00065ebb) aid_size_cell_midp_keypad_ParamLimits

0xd8b7,	// (0x00065ebb) aid_size_cell_midp_keypad

0xd8d5,	// (0x00065ed9) midp_keyp_game_grid_pane_ParamLimits

0xd8d5,	// (0x00065ed9) midp_keyp_game_grid_pane

0xd8fc,	// (0x00065f00) midp_keyp_rocker_pane_ParamLimits

0xd8fc,	// (0x00065f00) midp_keyp_rocker_pane

0xd94b,	// (0x00065f4f) midp_keyp_sk_left_pane_ParamLimits

0xd94b,	// (0x00065f4f) midp_keyp_sk_left_pane

0xd9a1,	// (0x00065fa5) midp_keyp_sk_right_pane_ParamLimits

0xd9a1,	// (0x00065fa5) midp_keyp_sk_right_pane

0x56fd,	// (0x0005dd01) bg_button_pane_cp03

0xd9f7,	// (0x00065ffb) midp_keyp_sk_left_pane_g1

0x56fd,	// (0x0005dd01) bg_button_pane_cp04

0xd9f7,	// (0x00065ffb) midp_keyp_sk_right_pane_g1

0x5987,	// (0x0005df8b) midp_keyp_rocker_pane_g1

0xd9ff,	// (0x00066003) keyp_game_cell_pane_ParamLimits

0xd9ff,	// (0x00066003) keyp_game_cell_pane

0x56fd,	// (0x0005dd01) bg_button_pane_cp02

0xda25,	// (0x00066029) keyp_game_cell_pane_g1

0xa057,	// (0x0006265b) popup_fep_vkb2_window_ParamLimits

0xa057,	// (0x0006265b) popup_fep_vkb2_window

0xbc92,	// (0x00064296) aid_size_cell_vkb2_ParamLimits

0xbc92,	// (0x00064296) aid_size_cell_vkb2

0xbcbe,	// (0x000642c2) popup_fep_vkb2_window_g1_ParamLimits

0xbcbe,	// (0x000642c2) popup_fep_vkb2_window_g1

0xbd0e,	// (0x00064312) vkb2_area_bottom_pane_ParamLimits

0xbd0e,	// (0x00064312) vkb2_area_bottom_pane

0xbd6a,	// (0x0006436e) vkb2_area_keypad_pane_ParamLimits

0xbd6a,	// (0x0006436e) vkb2_area_keypad_pane

0xbdb8,	// (0x000643bc) vkb2_area_top_pane_ParamLimits

0xbdb8,	// (0x000643bc) vkb2_area_top_pane

0xbe45,	// (0x00064449) vkb2_top_entry_pane_ParamLimits

0xbe45,	// (0x00064449) vkb2_top_entry_pane

0xbe72,	// (0x00064476) vkb2_top_grid_left_pane_ParamLimits

0xbe72,	// (0x00064476) vkb2_top_grid_left_pane

0xbe93,	// (0x00064497) vkb2_top_grid_right_pane_ParamLimits

0xbe93,	// (0x00064497) vkb2_top_grid_right_pane

0x177b,	// (0x00059d7f) vkb2_cell_keypad_pane_ParamLimits

0x177b,	// (0x00059d7f) vkb2_cell_keypad_pane

0xbedb,	// (0x000644df) vkb2_area_bottom_grid_pane_ParamLimits

0xbedb,	// (0x000644df) vkb2_area_bottom_grid_pane

0xbf05,	// (0x00064509) vkb2_area_bottom_pane_g1_ParamLimits

0xbf05,	// (0x00064509) vkb2_area_bottom_pane_g1

0xbf2b,	// (0x0006452f) vkb2_area_bottom_pane_g2_ParamLimits

0xbf2b,	// (0x0006452f) vkb2_area_bottom_pane_g2

0xbf5c,	// (0x00064560) vkb2_area_bottom_pane_g3_ParamLimits

0xbf5c,	// (0x00064560) vkb2_area_bottom_pane_g3

0x0002,

0xfd7c,	// (0x00068380) vkb2_area_bottom_pane_g_ParamLimits

0xfd7c,	// (0x00068380) vkb2_area_bottom_pane_g

0x1925,	// (0x00059f29) vkb2_top_cell_left_pane_ParamLimits

0x1925,	// (0x00059f29) vkb2_top_cell_left_pane

0xda2e,	// (0x00066032) vkb2_top_entry_pane_g1_ParamLimits

0xda2e,	// (0x00066032) vkb2_top_entry_pane_g1

0xda3c,	// (0x00066040) vkb2_top_entry_pane_t1_ParamLimits

0xda3c,	// (0x00066040) vkb2_top_entry_pane_t1

0x78cb,	// (0x0005fecf) vkb2_top_entry_pane_t2_ParamLimits

0x78cb,	// (0x0005fecf) vkb2_top_entry_pane_t2

0x78fd,	// (0x0005ff01) vkb2_top_entry_pane_t3_ParamLimits

0x78fd,	// (0x0005ff01) vkb2_top_entry_pane_t3

0x0002,

0xfd83,	// (0x00068387) vkb2_top_entry_pane_t_ParamLimits

0xfd83,	// (0x00068387) vkb2_top_entry_pane_t

0xbfc6,	// (0x000645ca) vkb2_top_grid_right_pane_g1_ParamLimits

0xbfc6,	// (0x000645ca) vkb2_top_grid_right_pane_g1

0x1988,	// (0x00059f8c) vkb2_top_grid_right_pane_g2_ParamLimits

0x1988,	// (0x00059f8c) vkb2_top_grid_right_pane_g2

0x19a0,	// (0x00059fa4) vkb2_top_grid_right_pane_g3_ParamLimits

0x19a0,	// (0x00059fa4) vkb2_top_grid_right_pane_g3

0xbfdc,	// (0x000645e0) vkb2_top_grid_right_pane_g4_ParamLimits

0xbfdc,	// (0x000645e0) vkb2_top_grid_right_pane_g4

0x0003,

0xfd8a,	// (0x0006838e) vkb2_top_grid_right_pane_g_ParamLimits

0xfd8a,	// (0x0006838e) vkb2_top_grid_right_pane_g

0x19ce,	// (0x00059fd2) vkb2_top_cell_left_pane_g1

0x19e5,	// (0x00059fe9) vkb2_cell_keypad_pane_g1_ParamLimits

0x19e5,	// (0x00059fe9) vkb2_cell_keypad_pane_g1

0x7921,	// (0x0005ff25) vkb2_cell_keypad_pane_t1_ParamLimits

0x7921,	// (0x0005ff25) vkb2_cell_keypad_pane_t1

0x19f3,	// (0x00059ff7) vkb2_cell_bottom_grid_pane_ParamLimits

0x19f3,	// (0x00059ff7) vkb2_cell_bottom_grid_pane

0x1a2c,	// (0x0005a030) vkb2_cell_bottom_grid_pane_g1

0xd6da,	// (0x00065cde) aid_call2_pane_cp02

0xd6e2,	// (0x00065ce6) aid_call_pane_cp02

0xd6ea,	// (0x00065cee) clock_digital_number_pane_cp10

0xd6f2,	// (0x00065cf6) clock_digital_number_pane_cp11

0xd6fa,	// (0x00065cfe) clock_digital_number_pane_cp12

0xd702,	// (0x00065d06) clock_digital_number_pane_cp13

0xd70a,	// (0x00065d0e) clock_digital_separator_pane_cp10

0x2203,	// (0x0005a807) popup_clock_digital_analogue_window_cp2_g1

0x2203,	// (0x0005a807) popup_clock_digital_analogue_window_cp2_g2

0xd712,	// (0x00065d16) popup_clock_digital_analogue_window_cp2_g3

0x2203,	// (0x0005a807) popup_clock_digital_analogue_window_cp2_g4

0xd712,	// (0x00065d16) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3f,	// (0x00068343) popup_clock_digital_analogue_window_cp2_g

0xd71a,	// (0x00065d1e) popup_clock_digital_analogue_window_cp2_t1

0xd728,	// (0x00065d2c) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd4a,	// (0x0006834e) popup_clock_digital_analogue_window_cp2_t

0x5987,	// (0x0005df8b) clock_digital_number_pane_cp10_g1

0x5987,	// (0x0005df8b) clock_digital_number_pane_cp10_g2

0x0001,

0xfb26,	// (0x0006812a) clock_digital_number_pane_cp10_g

0x5987,	// (0x0005df8b) clock_digital_separator_pane_cp10_g1

0x5987,	// (0x0005df8b) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb26,	// (0x0006812a) clock_digital_separator_pane_cp10_g

0x734c,	// (0x0005f950) uniindi_top_pane_g3

0x735d,	// (0x0005f961) uniindi_top_pane_g4

0x1806,	// (0x00059e0a) vkb2_row_keypad_pane_ParamLimits

0x1806,	// (0x00059e0a) vkb2_row_keypad_pane

0x1a48,	// (0x0005a04c) vkb2_cell_t_keypad_pane_ParamLimits

0x1a48,	// (0x0005a04c) vkb2_cell_t_keypad_pane

0x1a58,	// (0x0005a05c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1a58,	// (0x0005a05c) vkb2_cell_t_keypad_pane_cp08

0x1a6d,	// (0x0005a071) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1a6d,	// (0x0005a071) vkb2_cell_t_keypad_pane_cp09

0x1a81,	// (0x0005a085) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1a81,	// (0x0005a085) vkb2_cell_t_keypad_pane_cp01

0x1a92,	// (0x0005a096) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1a92,	// (0x0005a096) vkb2_cell_t_keypad_pane_cp02

0x1aa3,	// (0x0005a0a7) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1aa3,	// (0x0005a0a7) vkb2_cell_t_keypad_pane_cp03

0x1ab4,	// (0x0005a0b8) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1ab4,	// (0x0005a0b8) vkb2_cell_t_keypad_pane_cp04

0x1ac5,	// (0x0005a0c9) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1ac5,	// (0x0005a0c9) vkb2_cell_t_keypad_pane_cp05

0x1ad6,	// (0x0005a0da) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1ad6,	// (0x0005a0da) vkb2_cell_t_keypad_pane_cp06

0x1ae9,	// (0x0005a0ed) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1ae9,	// (0x0005a0ed) vkb2_cell_t_keypad_pane_cp07

0x1afe,	// (0x0005a102) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1afe,	// (0x0005a102) vkb2_cell_t_keypad_pane_cp10

0x11a5,	// (0x000597a9) vkb2_cell_t_keypad_pane_g1

0x7938,	// (0x0005ff3c) vkb2_cell_t_keypad_pane_t1

0xf049,	// (0x0006764d) popup_grid_graphic2_window

0xda75,	// (0x00066079) aid_size_cell_graphic2_ParamLimits

0xda75,	// (0x00066079) aid_size_cell_graphic2

0xdab3,	// (0x000660b7) bg_popup_window_pane_cp21_ParamLimits

0xdab3,	// (0x000660b7) bg_popup_window_pane_cp21

0xdac1,	// (0x000660c5) graphic2_pages_pane_ParamLimits

0xdac1,	// (0x000660c5) graphic2_pages_pane

0xdb19,	// (0x0006611d) grid_graphic2_control_pane_ParamLimits

0xdb19,	// (0x0006611d) grid_graphic2_control_pane

0xdb61,	// (0x00066165) grid_graphic2_pane_ParamLimits

0xdb61,	// (0x00066165) grid_graphic2_pane

0xdbec,	// (0x000661f0) cell_graphic2_pane

0xf049,	// (0x0006764d) main_comp_mode_pane

0x6b96,	// (0x0005f19a) list_ai3_gene_pane_ParamLimits

0xd41a,	// (0x00065a1e) bg_popup_window_pane_cp19_ParamLimits

0x6f68,	// (0x0005f56c) bg_touch_area_indi_pane_ParamLimits

0x6f68,	// (0x0005f56c) bg_touch_area_indi_pane

0x6f7e,	// (0x0005f582) bg_touch_area_indi_pane_cp01_ParamLimits

0x6f7e,	// (0x0005f582) bg_touch_area_indi_pane_cp01

0x6f94,	// (0x0005f598) bg_touch_area_indi_pane_cp02_ParamLimits

0x6f94,	// (0x0005f598) bg_touch_area_indi_pane_cp02

0x6fae,	// (0x0005f5b2) bg_touch_area_indi_pane_cp03_ParamLimits

0x6fae,	// (0x0005f5b2) bg_touch_area_indi_pane_cp03

0x6fc8,	// (0x0005f5cc) popup_slider_window_g1_ParamLimits

0x6fe4,	// (0x0005f5e8) popup_slider_window_g2_ParamLimits

0x7000,	// (0x0005f604) popup_slider_window_g3_ParamLimits

0xfcd4,	// (0x000682d8) popup_slider_window_g_ParamLimits

0x7066,	// (0x0005f66a) popup_slider_window_t1_ParamLimits

0x70da,	// (0x0005f6de) small_volume_slider_vertical_pane_ParamLimits

0xdbec,	// (0x000661f0) cell_graphic2_pane_ParamLimits

0xdc4e,	// (0x00066252) bg_button_pane_cp10_ParamLimits

0xdc4e,	// (0x00066252) bg_button_pane_cp10

0xdc61,	// (0x00066265) bg_button_pane_cp11_ParamLimits

0xdc61,	// (0x00066265) bg_button_pane_cp11

0xdc74,	// (0x00066278) graphic2_pages_pane_g1_ParamLimits

0xdc74,	// (0x00066278) graphic2_pages_pane_g1

0xdc8f,	// (0x00066293) graphic2_pages_pane_g2_ParamLimits

0xdc8f,	// (0x00066293) graphic2_pages_pane_g2

0x0001,

0xfd98,	// (0x0006839c) graphic2_pages_pane_g_ParamLimits

0xfd98,	// (0x0006839c) graphic2_pages_pane_g

0xdca7,	// (0x000662ab) graphic2_pages_pane_t1_ParamLimits

0xdca7,	// (0x000662ab) graphic2_pages_pane_t1

0xdcbf,	// (0x000662c3) cell_graphic2_control_pane_ParamLimits

0xdcbf,	// (0x000662c3) cell_graphic2_control_pane

0xe79d,	// (0x00066da1) cell_graphic2_pane_g1_ParamLimits

0xe79d,	// (0x00066da1) cell_graphic2_pane_g1

0xdcf3,	// (0x000662f7) cell_graphic2_pane_g2_ParamLimits

0xdcf3,	// (0x000662f7) cell_graphic2_pane_g2

0xe5f7,	// (0x00066bfb) cell_graphic2_pane_g3_ParamLimits

0xe5f7,	// (0x00066bfb) cell_graphic2_pane_g3

0xdd00,	// (0x00066304) cell_graphic2_pane_g4_ParamLimits

0xdd00,	// (0x00066304) cell_graphic2_pane_g4

0xe7aa,	// (0x00066dae) cell_graphic2_pane_g5_ParamLimits

0xe7aa,	// (0x00066dae) cell_graphic2_pane_g5

0x0004,

0xfd9d,	// (0x000683a1) cell_graphic2_pane_g_ParamLimits

0xfd9d,	// (0x000683a1) cell_graphic2_pane_g

0xe7c6,	// (0x00066dca) cell_graphic2_pane_t1_ParamLimits

0xe7c6,	// (0x00066dca) cell_graphic2_pane_t1

0x3f8a,	// (0x0005c58e) grid_highlight_pane_cp11_ParamLimits

0x3f8a,	// (0x0005c58e) grid_highlight_pane_cp11

0x8d51,	// (0x00061355) bg_button_pane_cp05

0xe80f,	// (0x00066e13) cell_graphic2_control_pane_g1

0x5987,	// (0x0005df8b) bg_touch_area_indi_pane_g1

0x7c1b,	// (0x0006021f) aid_cmod_rocker_key_size

0x7c25,	// (0x00060229) aid_cmode_itu_key_size

0x7c2f,	// (0x00060233) main_cmode_video_pane

0x7c39,	// (0x0006023d) main_comp_mode_itu_pane

0x7c45,	// (0x00060249) main_comp_mode_rocker_pane

0x7c51,	// (0x00060255) cell_cmode_rocker_pane_ParamLimits

0x7c51,	// (0x00060255) cell_cmode_rocker_pane

0x7c65,	// (0x00060269) cell_cmode_itu_pane_ParamLimits

0x7c65,	// (0x00060269) cell_cmode_itu_pane

0x9504,	// (0x00061b08) bg_button_pane_cp06_ParamLimits

0x9504,	// (0x00061b08) bg_button_pane_cp06

0x5c02,	// (0x0005e206) cell_cmode_rocker_pane_g1_ParamLimits

0x5c02,	// (0x0005e206) cell_cmode_rocker_pane_g1

0x7181,	// (0x0005f785) cell_cmode_rocker_pane_g2_ParamLimits

0x7181,	// (0x0005f785) cell_cmode_rocker_pane_g2

0x0001,

0xfdad,	// (0x000683b1) cell_cmode_rocker_pane_g_ParamLimits

0xfdad,	// (0x000683b1) cell_cmode_rocker_pane_g

0x56fd,	// (0x0005dd01) bg_button_pane_cp07

0x7c7c,	// (0x00060280) cell_cmode_itu_pane_g1

0x7c85,	// (0x00060289) cell_cmode_itu_pane_t1

0x7c93,	// (0x00060297) cell_cmode_itu_pane_t2

0x0001,

0xfdb2,	// (0x000683b6) cell_cmode_itu_pane_t

0x73d1,	// (0x0005f9d5) aid_touch_ctrl_left

0x73d9,	// (0x0005f9dd) aid_touch_ctrl_right

0x56fd,	// (0x0005dd01) compa_mode_pane

0xe837,	// (0x00066e3b) aid_cmod_rocker_key_size_cp

0xe841,	// (0x00066e45) aid_cmode_itu_key_size_cp

0x7cb5,	// (0x000602b9) compa_mode_pane_g1

0x7cbd,	// (0x000602c1) compa_mode_pane_g2

0x7cc5,	// (0x000602c9) compa_mode_pane_g3

0x0002,

0xfdb7,	// (0x000683bb) compa_mode_pane_g

0xe84b,	// (0x00066e4f) main_comp_mode_itu_pane_cp

0xe853,	// (0x00066e57) main_comp_mode_rocker_pane_cp

0xe85b,	// (0x00066e5f) cell_cmode_itu_pane_cp_ParamLimits

0xe85b,	// (0x00066e5f) cell_cmode_itu_pane_cp

0xe870,	// (0x00066e74) cell_cmode_rocker_pane_cp_ParamLimits

0xe870,	// (0x00066e74) cell_cmode_rocker_pane_cp

0x9504,	// (0x00061b08) bg_button_pane_cp06_cp_ParamLimits

0x9504,	// (0x00061b08) bg_button_pane_cp06_cp

0x5c02,	// (0x0005e206) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x5c02,	// (0x0005e206) cell_cmode_rocker_pane_g1_cp

0x5987,	// (0x0005df8b) cell_cmode_rocker_pane_g2_cp

0x56fd,	// (0x0005dd01) bg_button_pane_cp07_cp

0xe882,	// (0x00066e86) cell_cmode_itu_pane_g1_cp

0xe88b,	// (0x00066e8f) cell_cmode_itu_pane_t1_cp

0xe88b,	// (0x00066e8f) cell_cmode_itu_pane_t2_cp

0xc9a9,	// (0x00064fad) settings_code_pane_cp2

0x575f,	// (0x0005dd63) bg_popup_window_pane_cp3_ParamLimits

0x9209,	// (0x0006180d) heading_pane_cp3_ParamLimits

0x9218,	// (0x0006181c) listscroll_popup_graphic_pane_ParamLimits

0x0f38,	// (0x0005953c) fep_hwr_aid_pane_ParamLimits

0x14be,	// (0x00059ac2) aid_touch_sctrl_top_ParamLimits

0x14d9,	// (0x00059add) sctrl_sk_top_pane_g1_ParamLimits

0x11a5,	// (0x000597a9) sctrl_sk_top_pane_g2_ParamLimits

0xfced,	// (0x000682f1) sctrl_sk_top_pane_g_ParamLimits

0x14e6,	// (0x00059aea) sctrl_sk_top_pane_t1_ParamLimits

0x14be,	// (0x00059ac2) aid_touch_sctrl_bottom_ParamLimits

0x14e6,	// (0x00059aea) sctrl_sk_bottom_pane_t1_ParamLimits

0x7316,	// (0x0005f91a) aid_area_touch_clock

0xbe04,	// (0x00064408) aid_vkb2_area_top_pane_cell_ParamLimits

0xbe04,	// (0x00064408) aid_vkb2_area_top_pane_cell

0xbeb4,	// (0x000644b8) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbeb4,	// (0x000644b8) aid_vkb2_area_bottom_pane_cell

0x7883,	// (0x0005fe87) popup_char_count_window

0x7d1b,	// (0x0006031f) popup_char_count_window_g1

0x7d24,	// (0x00060328) popup_char_count_window_g2

0x7d2d,	// (0x00060331) popup_char_count_window_g3

0x0002,

0xfdbe,	// (0x000683c2) popup_char_count_window_g

0x7d36,	// (0x0006033a) popup_char_count_window_t1

0x158f,	// (0x00059b93) popup_fep_char_preview_window_ParamLimits

0x158f,	// (0x00059b93) popup_fep_char_preview_window

0xbe24,	// (0x00064428) vkb2_top_candi_pane_ParamLimits

0xbe24,	// (0x00064428) vkb2_top_candi_pane

0xe899,	// (0x00066e9d) cell_vkb2_top_candi_pane_ParamLimits

0xe899,	// (0x00066e9d) cell_vkb2_top_candi_pane

0x1b13,	// (0x0005a117) bg_popup_fep_char_preview_window_ParamLimits

0x1b13,	// (0x0005a117) bg_popup_fep_char_preview_window

0x1b21,	// (0x0005a125) popup_fep_char_preview_window_t1_ParamLimits

0x1b21,	// (0x0005a125) popup_fep_char_preview_window_t1

0x7d92,	// (0x00060396) bg_popup_fep_char_preview_window_g1

0x7d9a,	// (0x0006039e) bg_popup_fep_char_preview_window_g2

0x7da2,	// (0x000603a6) bg_popup_fep_char_preview_window_g3

0x7daa,	// (0x000603ae) bg_popup_fep_char_preview_window_g4

0x7db2,	// (0x000603b6) bg_popup_fep_char_preview_window_g5

0x7dba,	// (0x000603be) bg_popup_fep_char_preview_window_g6

0x7dc2,	// (0x000603c6) bg_popup_fep_char_preview_window_g7

0x7dca,	// (0x000603ce) bg_popup_fep_char_preview_window_g8

0x7dd2,	// (0x000603d6) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdc5,	// (0x000683c9) bg_popup_fep_char_preview_window_g

0x11a5,	// (0x000597a9) cell_vkb2_top_candi_pane_g1_ParamLimits

0x11a5,	// (0x000597a9) cell_vkb2_top_candi_pane_g1

0x11b3,	// (0x000597b7) cell_vkb2_top_candi_pane_g2_ParamLimits

0x11b3,	// (0x000597b7) cell_vkb2_top_candi_pane_g2

0x718f,	// (0x0005f793) cell_vkb2_top_candi_pane_g3_ParamLimits

0x718f,	// (0x0005f793) cell_vkb2_top_candi_pane_g3

0x1b63,	// (0x0005a167) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1b63,	// (0x0005a167) cell_vkb2_top_candi_pane_g4

0x6121,	// (0x0005e725) cell_vkb2_top_candi_pane_g5_ParamLimits

0x6121,	// (0x0005e725) cell_vkb2_top_candi_pane_g5

0x1b84,	// (0x0005a188) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1b84,	// (0x0005a188) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdda,	// (0x000683de) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdda,	// (0x000683de) cell_vkb2_top_candi_pane_g

0x1b92,	// (0x0005a196) cell_vkb2_top_candi_pane_t1

0x0ce2,	// (0x000592e6) aid_size_touch_slider_mark_ParamLimits

0x0ce2,	// (0x000592e6) aid_size_touch_slider_mark

0xdafd,	// (0x00066101) grid_graphic2_catg_pane_ParamLimits

0xdafd,	// (0x00066101) grid_graphic2_catg_pane

0xdbbb,	// (0x000661bf) popup_grid_graphic2_window_t1_ParamLimits

0xdbbb,	// (0x000661bf) popup_grid_graphic2_window_t1

0xdbd1,	// (0x000661d5) popup_grid_graphic2_window_t2_ParamLimits

0xdbd1,	// (0x000661d5) popup_grid_graphic2_window_t2

0x0001,

0xfd93,	// (0x00068397) popup_grid_graphic2_window_t_ParamLimits

0xfd93,	// (0x00068397) popup_grid_graphic2_window_t

0x8d51,	// (0x00061355) bg_button_pane_cp05_ParamLimits

0xe80f,	// (0x00066e13) cell_graphic2_control_pane_g1_ParamLimits

0xe8fd,	// (0x00066f01) cell_graphic2_catg_pane_ParamLimits

0xe8fd,	// (0x00066f01) cell_graphic2_catg_pane

0x56fd,	// (0x0005dd01) bg_button_pane_cp12

0xe90f,	// (0x00066f13) cell_graphic2_catg_pane_g1

0x72e0,	// (0x0005f8e4) cell_tb_ext_pane_t1_ParamLimits

0x1945,	// (0x00059f49) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1945,	// (0x00059f49) vkb2_top_cell_right_narrow_pane

0x195d,	// (0x00059f61) vkb2_top_cell_right_wide_pane_ParamLimits

0x195d,	// (0x00059f61) vkb2_top_cell_right_wide_pane

0x0f2a,	// (0x0005952e) bg_vkb2_func_pane_ParamLimits

0x0f2a,	// (0x0005952e) bg_vkb2_func_pane

0x19ce,	// (0x00059fd2) vkb2_top_cell_left_pane_g1_ParamLimits

0x0f2a,	// (0x0005952e) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0f2a,	// (0x0005952e) bg_vkb2_fuc_pane_cp03

0x1a2c,	// (0x0005a030) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x30af,	// (0x0005b6b3) bg_vkb2_func_pane_g1

0x30b7,	// (0x0005b6bb) bg_vkb2_func_pane_g2

0x30c7,	// (0x0005b6cb) bg_vkb2_func_pane_g3

0x30bf,	// (0x0005b6c3) bg_vkb2_func_pane_g4

0x30cf,	// (0x0005b6d3) bg_vkb2_func_pane_g5

0x30d7,	// (0x0005b6db) bg_vkb2_func_pane_g6

0x30df,	// (0x0005b6e3) bg_vkb2_func_pane_g7

0x30e7,	// (0x0005b6eb) bg_vkb2_func_pane_g8

0x30a7,	// (0x0005b6ab) bg_vkb2_func_pane_g9

0x0008,

0xfde7,	// (0x000683eb) bg_vkb2_func_pane_g

0x0f2a,	// (0x0005952e) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0f2a,	// (0x0005952e) bg_vkb2_fuc_pane_cp01

0x19ce,	// (0x00059fd2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x19ce,	// (0x00059fd2) vkb2_top_cell_right_wide_pane_g1

0x0f2a,	// (0x0005952e) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0f2a,	// (0x0005952e) bg_vkb2_fuc_pane_cp02

0x1bb0,	// (0x0005a1b4) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1bb0,	// (0x0005a1b4) vkb2_top_cell_right_narrow_pane_g1

0xd35c,	// (0x00065960) aid_touch_area_decrease_ParamLimits

0xd35c,	// (0x00065960) aid_touch_area_decrease

0xd396,	// (0x0006599a) aid_touch_area_increase_ParamLimits

0xd396,	// (0x0006599a) aid_touch_area_increase

0xd3be,	// (0x000659c2) aid_touch_area_mute_ParamLimits

0xd3be,	// (0x000659c2) aid_touch_area_mute

0xd3e6,	// (0x000659ea) aid_touch_area_slider_ParamLimits

0xd3e6,	// (0x000659ea) aid_touch_area_slider

0xd426,	// (0x00065a2a) popup_slider_window_g4_ParamLimits

0xd426,	// (0x00065a2a) popup_slider_window_g4

0xd44e,	// (0x00065a52) popup_slider_window_g5_ParamLimits

0xd44e,	// (0x00065a52) popup_slider_window_g5

0xd482,	// (0x00065a86) popup_slider_window_g6_ParamLimits

0xd482,	// (0x00065a86) popup_slider_window_g6

0x7094,	// (0x0005f698) popup_slider_window_t2_ParamLimits

0x7094,	// (0x0005f698) popup_slider_window_t2

0x0001,

0xfce1,	// (0x000682e5) popup_slider_window_t_ParamLimits

0xfce1,	// (0x000682e5) popup_slider_window_t

0xd49e,	// (0x00065aa2) slider_pane_ParamLimits

0xd49e,	// (0x00065aa2) slider_pane

0x7df5,	// (0x000603f9) slider_pane_g1_ParamLimits

0x7df5,	// (0x000603f9) slider_pane_g1

0x7e09,	// (0x0006040d) slider_pane_g2_ParamLimits

0x7e09,	// (0x0006040d) slider_pane_g2

0x7e1f,	// (0x00060423) slider_pane_g3_ParamLimits

0x7e1f,	// (0x00060423) slider_pane_g3

0x0003,

0xfdfa,	// (0x000683fe) slider_pane_g_ParamLimits

0xfdfa,	// (0x000683fe) slider_pane_g

0xb735,	// (0x00063d39) popup_tb_float_extension_window_ParamLimits

0xb735,	// (0x00063d39) popup_tb_float_extension_window

0x7e4b,	// (0x0006044f) aid_size_cell_tb_float_ext

0x56fd,	// (0x0005dd01) bg_popup_sub_window_cp28

0x7e57,	// (0x0006045b) grid_tb_float_ext_pane

0x7e63,	// (0x00060467) cell_tb_float_ext_pane_ParamLimits

0x7e63,	// (0x00060467) cell_tb_float_ext_pane

0x7e7f,	// (0x00060483) cell_tb_float_ext_pane_g1

0x7e88,	// (0x0006048c) grid_highlight_pane_cp12

0xba2f,	// (0x00064033) cell_last_hwr_side_pane_ParamLimits

0xba2f,	// (0x00064033) cell_last_hwr_side_pane

0x5987,	// (0x0005df8b) cell_last_hwr_side_pane_g1

0x7e91,	// (0x00060495) cell_last_hwr_side_pane_g2

0x0001,

0xfe03,	// (0x00068407) cell_last_hwr_side_pane_g

0xbf91,	// (0x00064595) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbf91,	// (0x00064595) vkb2_area_bottom_space_btn_pane

0x11a5,	// (0x000597a9) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7938,	// (0x0005ff3c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1b92,	// (0x0005a196) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1bcc,	// (0x0005a1d0) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1bcc,	// (0x0005a1d0) vkb2_area_bottom_space_btn_pane_g1

0x1c06,	// (0x0005a20a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1c06,	// (0x0005a20a) vkb2_area_bottom_space_btn_pane_g2

0x1c3c,	// (0x0005a240) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1c3c,	// (0x0005a240) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe08,	// (0x0006840c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe08,	// (0x0006840c) vkb2_area_bottom_space_btn_pane_g

0x0fef,	// (0x000595f3) cel_fep_hwr_func_pane_ParamLimits

0x0fef,	// (0x000595f3) cel_fep_hwr_func_pane

0xba04,	// (0x00064008) cell_hwr_side_button_pane_ParamLimits

0xba04,	// (0x00064008) cell_hwr_side_button_pane

0x7316,	// (0x0005f91a) aid_area_touch_clock_ParamLimits

0x8d51,	// (0x00061355) bg_uniindi_top_pane_ParamLimits

0x732a,	// (0x0005f92e) uniindi_top_pane_g1_ParamLimits

0x7340,	// (0x0005f944) uniindi_top_pane_g2_ParamLimits

0x734c,	// (0x0005f950) uniindi_top_pane_g3_ParamLimits

0x735d,	// (0x0005f961) uniindi_top_pane_g4_ParamLimits

0xfd19,	// (0x0006831d) uniindi_top_pane_g_ParamLimits

0x736a,	// (0x0005f96e) uniindi_top_pane_t1_ParamLimits

0x8d51,	// (0x00061355) bg_vkb2_func_pane_cp01_ParamLimits

0x8d51,	// (0x00061355) bg_vkb2_func_pane_cp01

0x7e9a,	// (0x0006049e) cel_fep_hwr_func_pane_g1_ParamLimits

0x7e9a,	// (0x0006049e) cel_fep_hwr_func_pane_g1

0x8d51,	// (0x00061355) bg_vkb2_func_pane_cp02_ParamLimits

0x8d51,	// (0x00061355) bg_vkb2_func_pane_cp02

0x7e9a,	// (0x0006049e) cell_hwr_side_button_pane_g1_ParamLimits

0x7e9a,	// (0x0006049e) cell_hwr_side_button_pane_g1

0x2f16,	// (0x0005b51a) status_pane_g4_ParamLimits

0x2f16,	// (0x0005b51a) status_pane_g4

0x2f30,	// (0x0005b534) status_pane_t1

0x568d,	// (0x0005dc91) form2_midp_gauge_slider_cont_pane

0x5695,	// (0x0005dc99) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcc9c,	// (0x000652a0) form2_midp_gauge_slider_pane_t2_ParamLimits

0xccae,	// (0x000652b2) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad9,	// (0x000680dd) form2_midp_gauge_slider_pane_t_ParamLimits

0x56cb,	// (0x0005dccf) form2_midp_slider_pane_ParamLimits

0x1557,	// (0x00059b5b) aid_size_cell_func_vkb2_ParamLimits

0x1557,	// (0x00059b5b) aid_size_cell_func_vkb2

0x7e37,	// (0x0006043b) slider_pane_g4_ParamLimits

0x7e37,	// (0x0006043b) slider_pane_g4

0xbffa,	// (0x000645fe) form2_midp_gauge_slider_pane_t2_cp01

0xc008,	// (0x0006460c) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc008,	// (0x0006460c) form2_midp_gauge_slider_pane_t3_cp01

0x1cb1,	// (0x0005a2b5) form2_midp_slider_pane_cp01

0x56fd,	// (0x0005dd01) navi_smil_pane

0x7ed3,	// (0x000604d7) navi_smil_pane_g1

0x7edb,	// (0x000604df) navi_smil_pane_t1

0x7ea8,	// (0x000604ac) form2_midp_slider_pane_g1

0x7eb1,	// (0x000604b5) form2_midp_slider_pane_g2

0x7eb9,	// (0x000604bd) form2_midp_slider_pane_g3

0x7ea8,	// (0x000604ac) form2_midp_slider_pane_g4

0xe918,	// (0x00066f1c) form2_midp_slider_pane_g5

0x0004,

0xfe11,	// (0x00068415) form2_midp_slider_pane_g

0x1c76,	// (0x0005a27a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1c76,	// (0x0005a27a) vkb2_area_bottom_space_btn_pane_g4

0xc2d9,	// (0x000648dd) lc0_navi_pane_ParamLimits

0xc2d9,	// (0x000648dd) lc0_navi_pane

0xc349,	// (0x0006494d) lc0_stat_indi_pane_ParamLimits

0xc349,	// (0x0006494d) lc0_stat_indi_pane

0xc35e,	// (0x00064962) ls0_title_pane_ParamLimits

0xc35e,	// (0x00064962) ls0_title_pane

0x9504,	// (0x00061b08) bg_popup_sub_pane_cp14_ParamLimits

0x72fd,	// (0x0005f901) list_uniindi_pane_ParamLimits

0x7309,	// (0x0005f90d) uniindi_top_pane_ParamLimits

0x73a9,	// (0x0005f9ad) list_single_uniindi_pane_g1_ParamLimits

0x73bc,	// (0x0005f9c0) list_single_uniindi_pane_t1_ParamLimits

0xc025,	// (0x00064629) lc0_stat_clock_pane_ParamLimits

0xc025,	// (0x00064629) lc0_stat_clock_pane

0xe921,	// (0x00066f25) lc0_stat_indi_pane_g1_ParamLimits

0xe921,	// (0x00066f25) lc0_stat_indi_pane_g1

0xe92e,	// (0x00066f32) lc0_stat_indi_pane_g2_ParamLimits

0xe92e,	// (0x00066f32) lc0_stat_indi_pane_g2

0x0001,

0xfe1c,	// (0x00068420) lc0_stat_indi_pane_g_ParamLimits

0xfe1c,	// (0x00068420) lc0_stat_indi_pane_g

0xc032,	// (0x00064636) lc0_uni_indicator_pane_ParamLimits

0xc032,	// (0x00064636) lc0_uni_indicator_pane

0xe93b,	// (0x00066f3f) ls0_title_pane_g1_ParamLimits

0xe93b,	// (0x00066f3f) ls0_title_pane_g1

0xe94f,	// (0x00066f53) ls0_title_pane_t1_ParamLimits

0xe94f,	// (0x00066f53) ls0_title_pane_t1

0xc03f,	// (0x00064643) lc0_uni_indicator_pane_g1_ParamLimits

0xc03f,	// (0x00064643) lc0_uni_indicator_pane_g1

0x7f4d,	// (0x00060551) lc0_stat_clock_pane_t1

0xf049,	// (0x0006764d) main_ai5_pane

0x7f63,	// (0x00060567) ai5_sk_pane_ParamLimits

0x7f63,	// (0x00060567) ai5_sk_pane

0xe985,	// (0x00066f89) cell_ai5_widget_pane_ParamLimits

0xe985,	// (0x00066f89) cell_ai5_widget_pane

0xea04,	// (0x00067008) aid_size_cell_widget_grid

0x801d,	// (0x00060621) bg_ai5_widget_pane_ParamLimits

0x801d,	// (0x00060621) bg_ai5_widget_pane

0xea3a,	// (0x0006703e) cell_ai5_widget_pane_g2

0xea4e,	// (0x00067052) cell_ai5_widget_pane_g3

0xea68,	// (0x0006706c) cell_ai5_widget_pane_g4

0xea78,	// (0x0006707c) cell_ai5_widget_pane_g5

0x80e9,	// (0x000606ed) cell_ai5_widget_pane_g6

0xea88,	// (0x0006708c) cell_ai5_widget_pane_g7

0xeaac,	// (0x000670b0) cell_ai5_widget_pane_t1_ParamLimits

0xeaac,	// (0x000670b0) cell_ai5_widget_pane_t1

0x817f,	// (0x00060783) cell_ai5_widget_pane_t2_ParamLimits

0x817f,	// (0x00060783) cell_ai5_widget_pane_t2

0x8197,	// (0x0006079b) cell_ai5_widget_pane_t3_ParamLimits

0x8197,	// (0x0006079b) cell_ai5_widget_pane_t3

0xeac9,	// (0x000670cd) cell_ai5_widget_pane_t4_ParamLimits

0xeac9,	// (0x000670cd) cell_ai5_widget_pane_t4

0xeaef,	// (0x000670f3) cell_ai5_widget_pane_t5_ParamLimits

0xeaef,	// (0x000670f3) cell_ai5_widget_pane_t5

0x81f5,	// (0x000607f9) cell_ai5_widget_pane_t6_ParamLimits

0x81f5,	// (0x000607f9) cell_ai5_widget_pane_t6

0x8207,	// (0x0006080b) cell_ai5_widget_pane_t7_ParamLimits

0x8207,	// (0x0006080b) cell_ai5_widget_pane_t7

0x8226,	// (0x0006082a) cell_ai5_widget_pane_t8_ParamLimits

0x8226,	// (0x0006082a) cell_ai5_widget_pane_t8

0x000b,

0xfe3c,	// (0x00068440) cell_ai5_widget_pane_t_ParamLimits

0xfe3c,	// (0x00068440) cell_ai5_widget_pane_t

0xeb81,	// (0x00067185) grid_ai5_widget_pane

0x9504,	// (0x00061b08) highlight_cell_ai5_widget_pane_ParamLimits

0x9504,	// (0x00061b08) highlight_cell_ai5_widget_pane

0xeb95,	// (0x00067199) ai5_sk_left_pane

0xeb9f,	// (0x000671a3) ai5_sk_middle_pane

0xeba9,	// (0x000671ad) ai5_sk_right_pane

0x82dc,	// (0x000608e0) bg_ai5_widget_pane_g1_ParamLimits

0x82dc,	// (0x000608e0) bg_ai5_widget_pane_g1

0x82e8,	// (0x000608ec) bg_ai5_widget_pane_g2_ParamLimits

0x82e8,	// (0x000608ec) bg_ai5_widget_pane_g2

0x82f4,	// (0x000608f8) bg_ai5_widget_pane_g3_ParamLimits

0x82f4,	// (0x000608f8) bg_ai5_widget_pane_g3

0x8300,	// (0x00060904) bg_ai5_widget_pane_g4_ParamLimits

0x8300,	// (0x00060904) bg_ai5_widget_pane_g4

0x830c,	// (0x00060910) bg_ai5_widget_pane_g5_ParamLimits

0x830c,	// (0x00060910) bg_ai5_widget_pane_g5

0x8318,	// (0x0006091c) bg_ai5_widget_pane_g6_ParamLimits

0x8318,	// (0x0006091c) bg_ai5_widget_pane_g6

0x8324,	// (0x00060928) bg_ai5_widget_pane_g7_ParamLimits

0x8324,	// (0x00060928) bg_ai5_widget_pane_g7

0x8330,	// (0x00060934) bg_ai5_widget_pane_g8_ParamLimits

0x8330,	// (0x00060934) bg_ai5_widget_pane_g8

0x833c,	// (0x00060940) bg_ai5_widget_pane_g9_ParamLimits

0x833c,	// (0x00060940) bg_ai5_widget_pane_g9

0x0008,

0xfe55,	// (0x00068459) bg_ai5_widget_pane_g_ParamLimits

0xfe55,	// (0x00068459) bg_ai5_widget_pane_g

0xebdf,	// (0x000671e3) cell_shortcut_ai5_widget_pane_ParamLimits

0xebdf,	// (0x000671e3) cell_shortcut_ai5_widget_pane

0x2830,	// (0x0005ae34) bg_cell_shortcut_ai5_widget_pane

0x8387,	// (0x0006098b) cell_grid_ai5_widget_pane_g1

0x2830,	// (0x0005ae34) highlight_cell_shortcut_ai5_widget_pane

0x30af,	// (0x0005b6b3) ai5_sk_left_pane_g1

0x8390,	// (0x00060994) ai5_sk_left_pane_g2

0x8398,	// (0x0006099c) ai5_sk_left_pane_g3

0x83a0,	// (0x000609a4) ai5_sk_left_pane_g4

0x0003,

0xfe68,	// (0x0006846c) ai5_sk_left_pane_g

0x83a8,	// (0x000609ac) ai5_sk_left_pane_t1

0x30b7,	// (0x0005b6bb) ai5_sk_right_pane_g1

0x83b6,	// (0x000609ba) ai5_sk_right_pane_g2

0x83be,	// (0x000609c2) ai5_sk_right_pane_g3

0x83c6,	// (0x000609ca) ai5_sk_right_pane_g4

0x0003,

0xfe71,	// (0x00068475) ai5_sk_right_pane_g

0x83ce,	// (0x000609d2) ai5_sk_right_pane_t1

0x30b7,	// (0x0005b6bb) ai5_sk_middle_pane_g1

0x30af,	// (0x0005b6b3) ai5_sk_middle_pane_g2

0x30cf,	// (0x0005b6d3) ai5_sk_middle_pane_g3

0x83be,	// (0x000609c2) ai5_sk_middle_pane_g4

0x8398,	// (0x0006099c) ai5_sk_middle_pane_g5

0x83dc,	// (0x000609e0) ai5_sk_middle_pane_g6

0xebf2,	// (0x000671f6) ai5_sk_middle_pane_g7

0x0006,

0xfe7a,	// (0x0006847e) ai5_sk_middle_pane_g

0xb806,	// (0x00063e0a) aid_touch_area_size_lc0_ParamLimits

0xb806,	// (0x00063e0a) aid_touch_area_size_lc0

0x11d4,	// (0x000597d8) cell_hwr_candidate_pane_t1_ParamLimits

0x2bdd,	// (0x0005b1e1) aid_touch_navi_pane

0xc467,	// (0x00064a6b) status_dt_navi_pane_ParamLimits

0xc467,	// (0x00064a6b) status_dt_navi_pane

0xc47f,	// (0x00064a83) status_dt_sta_pane_ParamLimits

0xc47f,	// (0x00064a83) status_dt_sta_pane

0xebfa,	// (0x000671fe) dt_sta_controll_pane

0xec07,	// (0x0006720b) dt_sta_indi_pane

0xec14,	// (0x00067218) dt_sta_title_pane

0x8d51,	// (0x00061355) bg_dt_sta_indi_pane_ParamLimits

0x8d51,	// (0x00061355) bg_dt_sta_indi_pane

0xec26,	// (0x0006722a) dt_sta_battery_pane

0xec2e,	// (0x00067232) dt_sta_indi_pane_g1

0xec37,	// (0x0006723b) dt_sta_indi_pane_g2

0xec40,	// (0x00067244) dt_sta_indi_pane_g3

0x0002,

0xfe89,	// (0x0006848d) dt_sta_indi_pane_g

0xec49,	// (0x0006724d) dt_sta_signal_pane

0x9504,	// (0x00061b08) bg_dt_sta_title_pane_ParamLimits

0x9504,	// (0x00061b08) bg_dt_sta_title_pane

0xec52,	// (0x00067256) dt_sta_title_pane_g1

0xec5a,	// (0x0006725e) dt_sta_title_pane_t1_ParamLimits

0xec5a,	// (0x0006725e) dt_sta_title_pane_t1

0x56fd,	// (0x0005dd01) bg_dt_sta_control_pane

0xec6f,	// (0x00067273) dt_sta_controll_pane_g1

0xec78,	// (0x0006727c) bg_dt_sta_title_pane_g1

0xec81,	// (0x00067285) bg_dt_sta_title_pane_g2

0xec8a,	// (0x0006728e) bg_dt_sta_title_pane_g3

0x0002,

0xfe90,	// (0x00068494) bg_dt_sta_title_pane_g

0x5987,	// (0x0005df8b) bg_dt_sta_indi_pane_g1

0x848a,	// (0x00060a8e) dt_sta_signal_pane_g1

0x8492,	// (0x00060a96) dt_sta_signal_pane_g2

0x0001,

0xfe97,	// (0x0006849b) dt_sta_signal_pane_g

0x849a,	// (0x00060a9e) dt_sta_battery_pane_g1

0x84a3,	// (0x00060aa7) dt_sta_battery_pane_t1

0x5987,	// (0x0005df8b) bg_dt_sta_control_pane_g1

0x232a,	// (0x0005a92e) fep_china_uni_eep_pane

0x2332,	// (0x0005a936) fep_china_uni_entry_pane_ParamLimits

0x2342,	// (0x0005a946) popup_fep_china_uni_window_g1_ParamLimits

0x2352,	// (0x0005a956) popup_fep_china_uni_window_g2_ParamLimits

0x2352,	// (0x0005a956) popup_fep_china_uni_window_g2

0x0001,

0xf6fb,	// (0x00067cff) popup_fep_china_uni_window_g_ParamLimits

0xf6fb,	// (0x00067cff) popup_fep_china_uni_window_g

0x84b2,	// (0x00060ab6) fep_china_uni_eep_pane_g1

0x84ba,	// (0x00060abe) fep_china_uni_eep_pane_t1

0x7eca,	// (0x000604ce) aid_touch_area_size_smil_player

0x2d2f,	// (0x0005b333) lc0_clock_pane

0x2f24,	// (0x0005b528) status_pane_g5_ParamLimits

0x2f24,	// (0x0005b528) status_pane_g5

0xb25b,	// (0x0006385f) popup_keymap_window

0x2eea,	// (0x0005b4ee) status_icon_pane

0xea4e,	// (0x00067052) cell_ai5_widget_pane_g3_ParamLimits

0xea68,	// (0x0006706c) cell_ai5_widget_pane_g4_ParamLimits

0xea78,	// (0x0006707c) cell_ai5_widget_pane_g5_ParamLimits

0x8102,	// (0x00060706) cell_ai5_widget_pane_g8_ParamLimits

0x8102,	// (0x00060706) cell_ai5_widget_pane_g8

0x8116,	// (0x0006071a) cell_ai5_widget_pane_g9_ParamLimits

0x8116,	// (0x0006071a) cell_ai5_widget_pane_g9

0x812a,	// (0x0006072e) cell_ai5_widget_pane_g10_ParamLimits

0x812a,	// (0x0006072e) cell_ai5_widget_pane_g10

0x84c9,	// (0x00060acd) status_icon_pane_g1

0x56fd,	// (0x0005dd01) bg_popup_sub_pane_cp13

0x84d1,	// (0x00060ad5) popup_keymap_window_t1

0x2b08,	// (0x0005b10c) control_pane_g6_ParamLimits

0x2b08,	// (0x0005b10c) control_pane_g6

0x2b15,	// (0x0005b119) control_pane_g7_ParamLimits

0x2b15,	// (0x0005b119) control_pane_g7

0x2b22,	// (0x0005b126) control_pane_g8_ParamLimits

0x2b22,	// (0x0005b126) control_pane_g8

0xebfa,	// (0x000671fe) dt_sta_controll_pane_ParamLimits

0xec07,	// (0x0006720b) dt_sta_indi_pane_ParamLimits

0xec14,	// (0x00067218) dt_sta_title_pane_ParamLimits

0x9446,	// (0x00061a4a) aid_size_touch_scroll_bar_cale

0xf126,	// (0x0006772a) popup_discreet_window_ParamLimits

0xf126,	// (0x0006772a) popup_discreet_window

0xa0a1,	// (0x000626a5) popup_sk_window

0x3725,	// (0x0005bd29) bg_popup_sub_pane_cp28_ParamLimits

0x3725,	// (0x0005bd29) bg_popup_sub_pane_cp28

0x84df,	// (0x00060ae3) popup_discreet_window_g1_ParamLimits

0x84df,	// (0x00060ae3) popup_discreet_window_g1

0x84ff,	// (0x00060b03) popup_discreet_window_t1_ParamLimits

0x84ff,	// (0x00060b03) popup_discreet_window_t1

0x851d,	// (0x00060b21) popup_discreet_window_t2_ParamLimits

0x851d,	// (0x00060b21) popup_discreet_window_t2

0x0002,

0xfe9c,	// (0x000684a0) popup_discreet_window_t_ParamLimits

0xfe9c,	// (0x000684a0) popup_discreet_window_t

0x1ce7,	// (0x0005a2eb) popup_sk_window_g1

0x1cf1,	// (0x0005a2f5) popup_sk_window_g2

0x0001,

0xfea3,	// (0x000684a7) popup_sk_window_g

0x1cf9,	// (0x0005a2fd) popup_sk_window_t1

0x1d07,	// (0x0005a30b) popup_sk_window_t1_copy1

0xea3a,	// (0x0006703e) cell_ai5_widget_pane_g2_ParamLimits

0xeb0f,	// (0x00067113) cell_ai5_widget_pane_t9_ParamLimits

0xeb0f,	// (0x00067113) cell_ai5_widget_pane_t9

0x56fd,	// (0x0005dd01) main_fep_fshwr2_pane

0xc05e,	// (0x00064662) aid_fshwr2_btn_pane

0xc072,	// (0x00064676) aid_fshwr2_syb_pane

0xc086,	// (0x0006468a) aid_fshwr2_txt_pane

0xc096,	// (0x0006469a) fshwr2_func_candi_pane

0xc0b8,	// (0x000646bc) fshwr2_hwr_syb_pane

0xc0dc,	// (0x000646e0) fshwr2_icf_pane

0xf049,	// (0x0006764d) fshwr2_icf_bg_pane

0x1db3,	// (0x0005a3b7) fshwr2_icf_pane_t1_ParamLimits

0x1db3,	// (0x0005a3b7) fshwr2_icf_pane_t1

0x2203,	// (0x0005a807) fshwr2_func_candi_pane_g1

0xec93,	// (0x00067297) fshwr2_func_candi_row_pane_ParamLimits

0xec93,	// (0x00067297) fshwr2_func_candi_row_pane

0xc10c,	// (0x00064710) cell_fshwr2_syb_pane_ParamLimits

0xc10c,	// (0x00064710) cell_fshwr2_syb_pane

0x1dec,	// (0x0005a3f0) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1dec,	// (0x0005a3f0) fshwr2_hwr_syb_pane_g1

0xf049,	// (0x0006764d) bg_popup_call_pane_cp01

0xc134,	// (0x00064738) fshwr2_func_candi_cell_pane_ParamLimits

0xc134,	// (0x00064738) fshwr2_func_candi_cell_pane

0x3505,	// (0x0005bb09) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x3505,	// (0x0005bb09) fshwr2_func_candi_cell_bg_pane

0xc17f,	// (0x00064783) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc17f,	// (0x00064783) fshwr2_func_candi_cell_pane_g1

0xc1b6,	// (0x000647ba) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc1b6,	// (0x000647ba) fshwr2_func_candi_cell_pane_t1

0xf049,	// (0x0006764d) bg_button_pane_cp08

0x2b5f,	// (0x0005b163) cell_fshwr2_syb_bg_pane

0xc1d1,	// (0x000647d5) cell_fshwr2_syb_bg_pane_g1

0xc1e5,	// (0x000647e9) cell_fshwr2_syb_bg_pane_t1

0x9504,	// (0x00061b08) main_tmo_pane

0xc7ae,	// (0x00064db2) uni_indicator_pane_g1_ParamLimits

0xc7c4,	// (0x00064dc8) uni_indicator_pane_g2_ParamLimits

0xc7da,	// (0x00064dde) uni_indicator_pane_g3_ParamLimits

0xc7ed,	// (0x00064df1) uni_indicator_pane_g4_ParamLimits

0xc7ed,	// (0x00064df1) uni_indicator_pane_g4

0x448a,	// (0x0005ca8e) uni_indicator_pane_g5_ParamLimits

0x448a,	// (0x0005ca8e) uni_indicator_pane_g5

0x448a,	// (0x0005ca8e) uni_indicator_pane_g6_ParamLimits

0x448a,	// (0x0005ca8e) uni_indicator_pane_g6

0xf8fa,	// (0x00067efe) uni_indicator_pane_g_ParamLimits

0xd32c,	// (0x00065930) popup_tmo_note_window_ParamLimits

0xd32c,	// (0x00065930) popup_tmo_note_window

0x1539,	// (0x00059b3d) fshwr2_bg_pane

0xc1a7,	// (0x000647ab) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc1a7,	// (0x000647ab) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea8,	// (0x000684ac) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea8,	// (0x000684ac) fshwr2_func_candi_cell_pane_g

0x118d,	// (0x00059791) bg_popup_window_pane_cp01

0x1eb3,	// (0x0005a4b7) bg_popup_window_pane_g1_cp01

0x8592,	// (0x00060b96) bg_popup_window_pane_cp22_ParamLimits

0x8592,	// (0x00060b96) bg_popup_window_pane_cp22

0x85a0,	// (0x00060ba4) listscroll_tmo_link_pane_ParamLimits

0x85a0,	// (0x00060ba4) listscroll_tmo_link_pane

0x85e0,	// (0x00060be4) popup_tmo_note_window_g1_ParamLimits

0x85e0,	// (0x00060be4) popup_tmo_note_window_g1

0x85ed,	// (0x00060bf1) tmo_note_info_pane_ParamLimits

0x85ed,	// (0x00060bf1) tmo_note_info_pane

0xecba,	// (0x000672be) list_tmo_note_info_pane_g1_ParamLimits

0xecba,	// (0x000672be) list_tmo_note_info_pane_g1

0x861e,	// (0x00060c22) list_tmo_note_info_pane_g2_ParamLimits

0x861e,	// (0x00060c22) list_tmo_note_info_pane_g2

0x0001,

0xfead,	// (0x000684b1) list_tmo_note_info_pane_g_ParamLimits

0xfead,	// (0x000684b1) list_tmo_note_info_pane_g

0x863a,	// (0x00060c3e) list_tmo_note_info_text_pane_ParamLimits

0x863a,	// (0x00060c3e) list_tmo_note_info_text_pane

0x86bf,	// (0x00060cc3) list_tmo_link_pane

0x86cc,	// (0x00060cd0) scroll_pane_cp20

0x86d9,	// (0x00060cdd) list_single_tmo_link_pane_ParamLimits

0x86d9,	// (0x00060cdd) list_single_tmo_link_pane

0x86e9,	// (0x00060ced) list_single_tmo_link_pane_t1

0x86f7,	// (0x00060cfb) list_tmo_note_info_text_pane_t1_ParamLimits

0x86f7,	// (0x00060cfb) list_tmo_note_info_text_pane_t1

0xab54,	// (0x00063158) aid_size_touch_scroll_bar_cp01_ParamLimits

0xab54,	// (0x00063158) aid_size_touch_scroll_bar_cp01

0xaa83,	// (0x00063087) aid_size_touch_slider_marker

0xa091,	// (0x00062695) popup_settings_window_ParamLimits

0xa091,	// (0x00062695) popup_settings_window

0xe29d,	// (0x000668a1) popup_candi_list_indi_window

0x2bdd,	// (0x0005b1e1) aid_touch_navi_pane_ParamLimits

0x1492,	// (0x00059a96) rs_clock_indi_pane

0x149b,	// (0x00059a9f) sctrl_sk_bottom_pane_ParamLimits

0x14ac,	// (0x00059ab0) sctrl_sk_top_pane_ParamLimits

0x15a9,	// (0x00059bad) popup_fep_tooltip_window

0xea04,	// (0x00067008) aid_size_cell_widget_grid_ParamLimits

0xea23,	// (0x00067027) cell_ai5_widget_pane_g1_ParamLimits

0xea23,	// (0x00067027) cell_ai5_widget_pane_g1

0x80e9,	// (0x000606ed) cell_ai5_widget_pane_g6_ParamLimits

0xea88,	// (0x0006708c) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe21,	// (0x00068425) cell_ai5_widget_pane_g_ParamLimits

0xfe21,	// (0x00068425) cell_ai5_widget_pane_g

0xeb3e,	// (0x00067142) cell_ai5_widget_pane_t10_ParamLimits

0xeb3e,	// (0x00067142) cell_ai5_widget_pane_t10

0xeb81,	// (0x00067185) grid_ai5_widget_pane_ParamLimits

0xebb3,	// (0x000671b7) cell_contacts_ai5_widget_pane_ParamLimits

0xebb3,	// (0x000671b7) cell_contacts_ai5_widget_pane

0x8532,	// (0x00060b36) popup_discreet_window_t3_ParamLimits

0x8532,	// (0x00060b36) popup_discreet_window_t3

0xc0f8,	// (0x000646fc) popup_fshwr2_char_preview_window_ParamLimits

0xc0f8,	// (0x000646fc) popup_fshwr2_char_preview_window

0xecd1,	// (0x000672d5) tmo_note_info_pane_t1

0xece6,	// (0x000672ea) tmo_note_info_pane_t2

0xecff,	// (0x00067303) tmo_note_info_pane_t3

0x869b,	// (0x00060c9f) tmo_note_info_pane_t4

0x86ad,	// (0x00060cb1) tmo_note_info_pane_t5

0x0004,

0xfeb2,	// (0x000684b6) tmo_note_info_pane_t

0x86bf,	// (0x00060cc3) list_tmo_link_pane_ParamLimits

0x86cc,	// (0x00060cd0) scroll_pane_cp20_ParamLimits

0xf049,	// (0x0006764d) bg_popup_fep_char_preview_window_cp01

0x8710,	// (0x00060d14) popup_fshwr2_char_preview_window_t1

0x871e,	// (0x00060d22) popup_candi_list_indi_window_g1

0x8727,	// (0x00060d2b) bg_cell_contacts_ai5_widget_pane

0xed14,	// (0x00067318) cell_contacts_ai5_widget_pane_g1

0x8748,	// (0x00060d4c) cell_contacts_ai5_widget_pane_g2

0x8754,	// (0x00060d58) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebd,	// (0x000684c1) cell_contacts_ai5_widget_pane_g

0x8760,	// (0x00060d64) cell_contacts_ai5_widget_pane_t1

0x9504,	// (0x00061b08) highlight_cell_shortcut_ai5_widget_pane_cp01

0x87d7,	// (0x00060ddb) settings_container_pane

0x2830,	// (0x0005ae34) listscroll_set_pane_copy1

0x500b,	// (0x0005d60f) scroll_pane_cp121_copy1

0x87e3,	// (0x00060de7) set_content_pane_copy1

0x87eb,	// (0x00060def) aid_height_set_list_copy1_ParamLimits

0x87eb,	// (0x00060def) aid_height_set_list_copy1

0x467a,	// (0x0005cc7e) aid_size_parent_copy1_ParamLimits

0x467a,	// (0x0005cc7e) aid_size_parent_copy1

0x87f7,	// (0x00060dfb) button_value_adjust_pane_cp6_copy1_ParamLimits

0x87f7,	// (0x00060dfb) button_value_adjust_pane_cp6_copy1

0x2b5f,	// (0x0005b163) list_highlight_pane_cp2_copy1_ParamLimits

0x2b5f,	// (0x0005b163) list_highlight_pane_cp2_copy1

0x880b,	// (0x00060e0f) list_set_pane_copy1_ParamLimits

0x880b,	// (0x00060e0f) list_set_pane_copy1

0x8772,	// (0x00060d76) main_pane_set_t1_copy1_ParamLimits

0x8772,	// (0x00060d76) main_pane_set_t1_copy1

0x87ac,	// (0x00060db0) main_pane_set_t2_copy1_ParamLimits

0x87ac,	// (0x00060db0) main_pane_set_t2_copy1

0x88cc,	// (0x00060ed0) main_pane_set_t3_copy1

0x88da,	// (0x00060ede) main_pane_set_t4_copy1

0x87cb,	// (0x00060dcf) set_content_pane_g1_copy1_ParamLimits

0x87cb,	// (0x00060dcf) set_content_pane_g1_copy1

0x88e8,	// (0x00060eec) setting_code_pane_copy1

0x88f0,	// (0x00060ef4) setting_slider_graphic_pane_copy1

0x88f0,	// (0x00060ef4) setting_slider_pane_copy1

0x88f8,	// (0x00060efc) setting_text_pane_copy1

0x88f8,	// (0x00060efc) setting_volume_pane_copy1

0x88e8,	// (0x00060eec) settings_code_pane_cp2_copy1

0x8900,	// (0x00060f04) settings_code_pane_cp_copy1_ParamLimits

0x8900,	// (0x00060f04) settings_code_pane_cp_copy1

0x1ebc,	// (0x0005a4c0) volume_set_pane_copy1

0x8914,	// (0x00060f18) volume_set_pane_g10_copy1

0x8920,	// (0x00060f24) volume_set_pane_g1_copy1

0x892a,	// (0x00060f2e) volume_set_pane_g2_copy1

0x8934,	// (0x00060f38) volume_set_pane_g3_copy1

0x893e,	// (0x00060f42) volume_set_pane_g4_copy1

0x8948,	// (0x00060f4c) volume_set_pane_g5_copy1

0x8952,	// (0x00060f56) volume_set_pane_g6_copy1

0x895c,	// (0x00060f60) volume_set_pane_g7_copy1

0x8966,	// (0x00060f6a) volume_set_pane_g8_copy1

0x8970,	// (0x00060f74) volume_set_pane_g9_copy1

0x575f,	// (0x0005dd63) bg_set_opt_pane_cp_copy1_ParamLimits

0x575f,	// (0x0005dd63) bg_set_opt_pane_cp_copy1

0x1ec8,	// (0x0005a4cc) setting_slider_pane_t1_copy1_ParamLimits

0x1ec8,	// (0x0005a4cc) setting_slider_pane_t1_copy1

0x1ee7,	// (0x0005a4eb) setting_slider_pane_t2_copy1_ParamLimits

0x1ee7,	// (0x0005a4eb) setting_slider_pane_t2_copy1

0x1f01,	// (0x0005a505) setting_slider_pane_t3_copy1_ParamLimits

0x1f01,	// (0x0005a505) setting_slider_pane_t3_copy1

0x1f19,	// (0x0005a51d) slider_set_pane_copy1_ParamLimits

0x1f19,	// (0x0005a51d) slider_set_pane_copy1

0x955c,	// (0x00061b60) set_opt_bg_pane_g1_copy2

0x9564,	// (0x00061b68) set_opt_bg_pane_g2_copy2

0x897c,	// (0x00060f80) set_opt_bg_pane_g3_copy2

0x9574,	// (0x00061b78) set_opt_bg_pane_g4_copy2

0x957c,	// (0x00061b80) set_opt_bg_pane_g5_copy2

0x9584,	// (0x00061b88) set_opt_bg_pane_g6_copy2

0x8986,	// (0x00060f8a) set_opt_bg_pane_g7_copy2

0x8990,	// (0x00060f94) set_opt_bg_pane_g8_copy2

0x899a,	// (0x00060f9e) set_opt_bg_pane_g9_copy2

0x1f2f,	// (0x0005a533) aid_size_touch_slider_mark_copy1_ParamLimits

0x1f2f,	// (0x0005a533) aid_size_touch_slider_mark_copy1

0x89a4,	// (0x00060fa8) slider_set_pane_g1_copy1

0x1f43,	// (0x0005a547) slider_set_pane_g2_copy1

0x0d02,	// (0x00059306) slider_set_pane_g3_copy1_ParamLimits

0x0d02,	// (0x00059306) slider_set_pane_g3_copy1

0x0d16,	// (0x0005931a) slider_set_pane_g4_copy1_ParamLimits

0x0d16,	// (0x0005931a) slider_set_pane_g4_copy1

0x0d2e,	// (0x00059332) slider_set_pane_g5_copy1_ParamLimits

0x0d2e,	// (0x00059332) slider_set_pane_g5_copy1

0x0d02,	// (0x00059306) slider_set_pane_g6_copy1_ParamLimits

0x0d02,	// (0x00059306) slider_set_pane_g6_copy1

0x1f4b,	// (0x0005a54f) slider_set_pane_g7_copy1_ParamLimits

0x1f4b,	// (0x0005a54f) slider_set_pane_g7_copy1

0x5711,	// (0x0005dd15) bg_set_opt_pane_cp2_copy1

0x89ad,	// (0x00060fb1) setting_slider_graphic_pane_g1_copy1

0x89b6,	// (0x00060fba) setting_slider_graphic_pane_t1_copy1

0x89c6,	// (0x00060fca) setting_slider_graphic_pane_t2_copy1

0x89d6,	// (0x00060fda) slider_set_pane_cp_copy1

0x89e6,	// (0x00060fea) input_focus_pane_cp1_copy1

0x89ef,	// (0x00060ff3) list_set_text_pane_copy1

0x89f7,	// (0x00060ffb) setting_text_pane_g1_copy1

0xdd0d,	// (0x00066311) set_text_pane_t1_copy1

0x89e6,	// (0x00060fea) input_focus_pane_cp2_copy1

0x89f7,	// (0x00060ffb) setting_code_pane_g1_copy1

0x8a00,	// (0x00061004) setting_code_pane_t1_copy1

0x4e10,	// (0x0005d414) list_set_graphic_pane_copy1

0x5711,	// (0x0005dd15) bg_set_opt_pane_cp4_copy1

0x2527,	// (0x0005ab2b) list_set_graphic_pane_g1_copy1_ParamLimits

0x2527,	// (0x0005ab2b) list_set_graphic_pane_g1_copy1

0x8a0e,	// (0x00061012) list_set_graphic_pane_g2_copy1

0x253f,	// (0x0005ab43) list_set_graphic_pane_t1_copy1_ParamLimits

0x253f,	// (0x0005ab43) list_set_graphic_pane_t1_copy1

0x5987,	// (0x0005df8b) rs_clock_indi_pane_g1

0x8a16,	// (0x0006101a) rs_clock_indi_pane_t1

0x8a24,	// (0x00061028) rs_indi_pane

0x8a2c,	// (0x00061030) rs_indi_pane_g1

0x8a35,	// (0x00061039) rs_indi_pane_g2

0x871e,	// (0x00060d22) rs_indi_pane_g3

0x0002,

0xfec4,	// (0x000684c8) rs_indi_pane_g

0x2830,	// (0x0005ae34) bg_popup_preview_window_pane_cp03

0x8a3e,	// (0x00061042) popup_fep_tooltip_window_t1

0x6654,	// (0x0005ec58) popup_note2_window_g2_ParamLimits

0x6654,	// (0x0005ec58) popup_note2_window_g2

0x0001,

0xfc51,	// (0x00068255) popup_note2_window_g_ParamLimits

0xfc51,	// (0x00068255) popup_note2_window_g

0x6b5c,	// (0x0005f160) bg_popup_sub_pane_cp11_ParamLimits

0x6b69,	// (0x0005f16d) cell_ai3_links_pane_g1_ParamLimits

0x6b80,	// (0x0005f184) cell_ai3_links_pane_t1

0xdd0d,	// (0x00066311) set_text_pane_t1_copy1_ParamLimits

0x272e,	// (0x0005ad32) cell_graphic_popup_pane_cp2_ParamLimits

0x272e,	// (0x0005ad32) cell_graphic_popup_pane_cp2

0x8a4c,	// (0x00061050) cell_graphic_popup_pane_g1_cp2

0x9259,	// (0x0006185d) cell_graphic_popup_pane_g2_cp2

0x8a54,	// (0x00061058) cell_graphic_popup_pane_g3_cp2

0x8a5c,	// (0x00061060) cell_graphic_popup_pane_t2_cp2

0x926a,	// (0x0006186e) grid_highlight_pane_cp3_cp2

0xe0e6,	// (0x000666ea) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x9504,	// (0x00061b08) main_tmo_pane_ParamLimits

0xd320,	// (0x00065924) popup_tmo_big_image_note_window

0xea12,	// (0x00067016) cell_ai5_widget_list_pane

0xea1a,	// (0x0006701e) cell_ai5_widget_lrg_icon_pane

0xecd1,	// (0x000672d5) tmo_note_info_pane_t1_ParamLimits

0xece6,	// (0x000672ea) tmo_note_info_pane_t2_ParamLimits

0xecff,	// (0x00067303) tmo_note_info_pane_t3_ParamLimits

0x869b,	// (0x00060c9f) tmo_note_info_pane_t4_ParamLimits

0x86ad,	// (0x00060cb1) tmo_note_info_pane_t5_ParamLimits

0xfeb2,	// (0x000684b6) tmo_note_info_pane_t_ParamLimits

0x87d7,	// (0x00060ddb) settings_container_pane_ParamLimits

0x89de,	// (0x00060fe2) indicator_popup_pane_cp5

0x89de,	// (0x00060fe2) indicator_popup_pane_cp6

0x4e10,	// (0x0005d414) list_set_graphic_pane_copy1_ParamLimits

0x56fd,	// (0x0005dd01) bg_popup_window_pane_cp23

0x8a6a,	// (0x0006106e) popup_tmo_big_image_note_window_g1

0x8a76,	// (0x0006107a) popup_tmo_big_image_note_window_t1

0x8a86,	// (0x0006108a) popup_tmo_big_image_note_window_t2

0x8a96,	// (0x0006109a) popup_tmo_big_image_note_window_t3

0x0002,

0xfecb,	// (0x000684cf) popup_tmo_big_image_note_window_t

0x5987,	// (0x0005df8b) cell_ai5_widget_lrg_icon_pane_g1

0xed29,	// (0x0006732d) cell_ai5_widget_lrg_icon_pane_t1

0xed37,	// (0x0006733b) cell_ai5_widget_list_row_pane_ParamLimits

0xed37,	// (0x0006733b) cell_ai5_widget_list_row_pane

0xed4f,	// (0x00067353) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xed4f,	// (0x00067353) cell_ai5_widget_list_row_pane_g1

0xed5c,	// (0x00067360) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xed5c,	// (0x00067360) cell_ai5_widget_list_row_pane_t1

0xed87,	// (0x0006738b) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xed87,	// (0x0006738b) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed2,	// (0x000684d6) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed2,	// (0x000684d6) cell_ai5_widget_list_row_pane_t

0xf049,	// (0x0006764d) main_fep_vtchi_ss_pane

0x8b54,	// (0x00061158) popup_fep_char_pre_window

0x8b5c,	// (0x00061160) popup_fep_ituss_window

0xedbe,	// (0x000673c2) popup_fep_vkbss_window

0x2b5f,	// (0x0005b163) grid_vkbss_keypad_pane_ParamLimits

0x2b5f,	// (0x0005b163) grid_vkbss_keypad_pane

0x8bd6,	// (0x000611da) ituss_keypad_pane

0x1f8c,	// (0x0005a590) aid_vkbss_key_offset_ParamLimits

0x1f8c,	// (0x0005a590) aid_vkbss_key_offset

0xc20f,	// (0x00064813) cell_vkbss_key_pane_ParamLimits

0xc20f,	// (0x00064813) cell_vkbss_key_pane

0x8be2,	// (0x000611e6) bg_cell_vkbss_key_g1_ParamLimits

0x8be2,	// (0x000611e6) bg_cell_vkbss_key_g1

0xedcd,	// (0x000673d1) cell_vkbss_key_3p_pane_ParamLimits

0xedcd,	// (0x000673d1) cell_vkbss_key_3p_pane

0xee03,	// (0x00067407) cell_vkbss_key_g1_ParamLimits

0xee03,	// (0x00067407) cell_vkbss_key_g1

0xee39,	// (0x0006743d) cell_vkbss_key_t1_ParamLimits

0xee39,	// (0x0006743d) cell_vkbss_key_t1

0x1ffa,	// (0x0005a5fe) cell_ituss_key_pane_ParamLimits

0x1ffa,	// (0x0005a5fe) cell_ituss_key_pane

0x8e31,	// (0x00061435) bg_cell_ituss_key_g1_ParamLimits

0x8e31,	// (0x00061435) bg_cell_ituss_key_g1

0x8e3d,	// (0x00061441) cell_ituss_key_pane_g1_ParamLimits

0x8e3d,	// (0x00061441) cell_ituss_key_pane_g1

0x200b,	// (0x0005a60f) cell_ituss_key_pane_g2_ParamLimits

0x200b,	// (0x0005a60f) cell_ituss_key_pane_g2

0x0005,

0xfed9,	// (0x000684dd) cell_ituss_key_pane_g_ParamLimits

0xfed9,	// (0x000684dd) cell_ituss_key_pane_g

0x208f,	// (0x0005a693) cell_ituss_key_t1_ParamLimits

0x208f,	// (0x0005a693) cell_ituss_key_t1

0x20c9,	// (0x0005a6cd) cell_ituss_key_t2_ParamLimits

0x20c9,	// (0x0005a6cd) cell_ituss_key_t2

0x20fb,	// (0x0005a6ff) cell_ituss_key_t3_ParamLimits

0x20fb,	// (0x0005a6ff) cell_ituss_key_t3

0x212c,	// (0x0005a730) cell_ituss_key_t4_ParamLimits

0x212c,	// (0x0005a730) cell_ituss_key_t4

0x0005,

0xfee6,	// (0x000684ea) cell_ituss_key_t_ParamLimits

0xfee6,	// (0x000684ea) cell_ituss_key_t

0xee95,	// (0x00067499) cell_vkbss_key_3p_pane_g1

0xee9d,	// (0x000674a1) cell_vkbss_key_3p_pane_g2

0xeea5,	// (0x000674a9) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef3,	// (0x000684f7) cell_vkbss_key_3p_pane_g

0x2830,	// (0x0005ae34) bg_popup_fep_char_preview_window_cp02

0x8e7b,	// (0x0006147f) popup_fep_char_pre_window_t1

0xe9f1,	// (0x00066ff5) main_ai5_sk_pane

0x8727,	// (0x00060d2b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed14,	// (0x00067318) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8748,	// (0x00060d4c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8754,	// (0x00060d58) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebd,	// (0x000684c1) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8760,	// (0x00060d64) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x9504,	// (0x00061b08) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xeead,	// (0x000674b1) main_ai5_sk_pane_g1

0x355d,	// (0x0005bb61) popup_query_code_window_g1

0xedaf,	// (0x000673b3) popup_fep_vkb_icf_pane

0x8baa,	// (0x000611ae) popup_fep_vtchi_icf_pane

0x8e92,	// (0x00061496) bg_icf_pane

0x8e92,	// (0x00061496) list_vkb_icf_pane

0x8e9e,	// (0x000614a2) bg_icf_pane_cp01

0x8eb1,	// (0x000614b5) vtchi_icf_list_pane

0xef02,	// (0x00067506) list_vkb_icf_pane_t1_ParamLimits

0xef02,	// (0x00067506) list_vkb_icf_pane_t1

0x8f2a,	// (0x0006152e) vtchi_icf_list_pane_t1_ParamLimits

0x8f2a,	// (0x0006152e) vtchi_icf_list_pane_t1

0x8b5c,	// (0x00061160) popup_fep_ituss_window_ParamLimits

0x8baa,	// (0x000611ae) popup_fep_vtchi_icf_pane_ParamLimits

0x8bd6,	// (0x000611da) ituss_keypad_pane_ParamLimits

0x1f82,	// (0x0005a586) ituss_sks_pane

0x8e92,	// (0x00061496) bg_icf_pane_ParamLimits

0x8b2c,	// (0x00061130) icf_edit_indi_pane_ParamLimits

0x8b2c,	// (0x00061130) icf_edit_indi_pane

0x8e92,	// (0x00061496) list_vkb_icf_pane_ParamLimits

0x8e9e,	// (0x000614a2) bg_icf_pane_cp01_ParamLimits

0x8b47,	// (0x0006114b) icf_edit_indi_pane_cp01_ParamLimits

0x8b47,	// (0x0006114b) icf_edit_indi_pane_cp01

0x8eb1,	// (0x000614b5) vtchi_query_pane

0x7e9a,	// (0x0006049e) icf_edit_indi_pane_g1_ParamLimits

0x7e9a,	// (0x0006049e) icf_edit_indi_pane_g1

0xef19,	// (0x0006751d) icf_edit_indi_pane_g2_ParamLimits

0xef19,	// (0x0006751d) icf_edit_indi_pane_g2

0x0001,

0xff1e,	// (0x00068522) icf_edit_indi_pane_g_ParamLimits

0xff1e,	// (0x00068522) icf_edit_indi_pane_g

0xef2d,	// (0x00067531) icf_edit_indi_pane_t1

0x8f43,	// (0x00061547) bg_input_focus_pane_cp042

0x943d,	// (0x00061a41) vtchi_button_pane

0x8f4c,	// (0x00061550) vtchi_query_pane_t1

0x8f5a,	// (0x0006155e) vtchi_query_pane_t2

0x8f68,	// (0x0006156c) vtchi_query_pane_t3

0x0002,

0xff0d,	// (0x00068511) vtchi_query_pane_t

0xf049,	// (0x0006764d) bg_button_pane_cp13

0x8f76,	// (0x0006157a) vtchi_button_pane_g1

0x21ad,	// (0x0005a7b1) ituss_sks_pane_g1

0x21b8,	// (0x0005a7bc) ituss_sks_pane_g2

0x0001,

0xff14,	// (0x00068518) ituss_sks_pane_g

0x8f7e,	// (0x00061582) ituss_sks_pane_t1

0x8f8c,	// (0x00061590) ituss_sks_pane_t2

0x0001,

0xff19,	// (0x0006851d) ituss_sks_pane_t

0x53ae,	// (0x0005d9b2) indicator_nsta_pane_cp_g1

0x53b7,	// (0x0005d9bb) indicator_nsta_pane_cp_g2

0x53bf,	// (0x0005d9c3) indicator_nsta_pane_cp_g3

0x53c7,	// (0x0005d9cb) indicator_nsta_pane_cp_g4

0x53b7,	// (0x0005d9bb) indicator_nsta_pane_cp_g5

0x53bf,	// (0x0005d9c3) indicator_nsta_pane_cp_g6

0x0005,

0xfa8f,	// (0x00068093) indicator_nsta_pane_cp_g

0xe7f1,	// (0x00066df5) cell_graphic2_pane_t2_ParamLimits

0xe7f1,	// (0x00066df5) cell_graphic2_pane_t2

0x0001,

0xfda8,	// (0x000683ac) cell_graphic2_pane_t_ParamLimits

0xfda8,	// (0x000683ac) cell_graphic2_pane_t

0xe829,	// (0x00066e2d) cell_graphic2_control_pane_t1

0xadce,	// (0x000633d2) signal_pane_g3_ParamLimits

0xadce,	// (0x000633d2) signal_pane_g3

0xade2,	// (0x000633e6) signal_pane_g4_ParamLimits

0xade2,	// (0x000633e6) signal_pane_g4

0xed99,	// (0x0006739d) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xed99,	// (0x0006739d) cell_ai5_widget_list_row_pane_t3

0x8e51,	// (0x00061455) cell_ituss_key_pane_t1_ParamLimits

0x8e51,	// (0x00061455) cell_ituss_key_pane_t1

0x31c4,	// (0x0005b7c8) form_field_data_wide_pane_vc_t2_ParamLimits

0x31c4,	// (0x0005b7c8) form_field_data_wide_pane_vc_t2

0x31d8,	// (0x0005b7dc) form_field_data_wide_pane_vc_t3_ParamLimits

0x31d8,	// (0x0005b7dc) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e2,	// (0x00067de6) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e2,	// (0x00067de6) form_field_data_wide_pane_vc_t

0x504b,	// (0x0005d64f) form_field_slider_wide_pane_vc_t3_ParamLimits

0x504b,	// (0x0005d64f) form_field_slider_wide_pane_vc_t3

0x5121,	// (0x0005d725) form_field_popup_wide_pane_vc_t2_ParamLimits

0x5121,	// (0x0005d725) form_field_popup_wide_pane_vc_t2

0x5138,	// (0x0005d73c) form_field_popup_wide_pane_vc_t3_ParamLimits

0x5138,	// (0x0005d73c) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7e,	// (0x00068082) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7e,	// (0x00068082) form_field_popup_wide_pane_vc_t

0xc05e,	// (0x00064662) aid_fshwr2_btn_pane_ParamLimits

0xc072,	// (0x00064676) aid_fshwr2_syb_pane_ParamLimits

0xc086,	// (0x0006468a) aid_fshwr2_txt_pane_ParamLimits

0x1539,	// (0x00059b3d) fshwr2_bg_pane_ParamLimits

0xc096,	// (0x0006469a) fshwr2_func_candi_pane_ParamLimits

0xc0b8,	// (0x000646bc) fshwr2_hwr_syb_pane_ParamLimits

0xc0dc,	// (0x000646e0) fshwr2_icf_pane_ParamLimits

0x3b41,	// (0x0005c145) list_double_graphic_pane_vc_g4_ParamLimits

0x3b41,	// (0x0005c145) list_double_graphic_pane_vc_g4

0x202b,	// (0x0005a62f) cell_ituss_key_pane_g3_ParamLimits

0x202b,	// (0x0005a62f) cell_ituss_key_pane_g3

0x215d,	// (0x0005a761) cell_ituss_key_t5_ParamLimits

0x215d,	// (0x0005a761) cell_ituss_key_t5

0xedbe,	// (0x000673c2) popup_fep_vkbss_window_ParamLimits

0xe9fb,	// (0x00066fff) aid_cell_ai5_quarter

0xef2d,	// (0x00067531) icf_edit_indi_pane_t1_ParamLimits

0x909d,	// (0x000616a1) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x909d,	// (0x000616a1) aid_tch_indicator_popup_pane_cp2

0x90b0,	// (0x000616b4) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x90b0,	// (0x000616b4) aid_tch_query_popup_data_pane_cp2

0x3505,	// (0x0005bb09) aid_tch_query_popup_pane_ParamLimits

0x3505,	// (0x0005bb09) aid_tch_query_popup_pane

0x3505,	// (0x0005bb09) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x3505,	// (0x0005bb09) aid_tch_query_popup_data_pane_cp1

0x2b5f,	// (0x0005b163) cell_fshwr2_syb_bg_pane_ParamLimits

0xc1d1,	// (0x000647d5) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xc1e5,	// (0x000647e9) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xedaf,	// (0x000673b3) popup_fep_vkb_icf_pane_ParamLimits

0xbff2,	// (0x000645f6) bg_popup_fep_char_preview_window_g10

0xea94,	// (0x00067098) cell_ai5_widget_pane_g11_ParamLimits

0xea94,	// (0x00067098) cell_ai5_widget_pane_g11

0x814a,	// (0x0006074e) cell_ai5_widget_pane_g12_ParamLimits

0x814a,	// (0x0006074e) cell_ai5_widget_pane_g12

0xeaa0,	// (0x000670a4) cell_ai5_widget_pane_g13_ParamLimits

0xeaa0,	// (0x000670a4) cell_ai5_widget_pane_g13

0xeb5d,	// (0x00067161) cell_ai5_widget_pane_t11_ParamLimits

0xeb5d,	// (0x00067161) cell_ai5_widget_pane_t11

0xeb6f,	// (0x00067173) cell_ai5_widget_pane_t12_ParamLimits

0xeb6f,	// (0x00067173) cell_ai5_widget_pane_t12

0x2037,	// (0x0005a63b) cell_ituss_key_pane_g4_ParamLimits

0x2037,	// (0x0005a63b) cell_ituss_key_pane_g4

0x2053,	// (0x0005a657) cell_ituss_key_pane_g5_ParamLimits

0x2053,	// (0x0005a657) cell_ituss_key_pane_g5

0x206f,	// (0x0005a673) cell_ituss_key_pane_g6_ParamLimits

0x206f,	// (0x0005a673) cell_ituss_key_pane_g6

0x30a7,	// (0x0005b6ab) bg_icf_pane_g1

0xeeb6,	// (0x000674ba) bg_icf_pane_g2

0xeec0,	// (0x000674c4) bg_icf_pane_g3

0xeec8,	// (0x000674cc) bg_icf_pane_g4

0xeed2,	// (0x000674d6) bg_icf_pane_g5

0xeedc,	// (0x000674e0) bg_icf_pane_g6

0xeee6,	// (0x000674ea) bg_icf_pane_g7

0xeeee,	// (0x000674f2) bg_icf_pane_g8

0xeef8,	// (0x000674fc) bg_icf_pane_g9

0x0008,

0xfefa,	// (0x000684fe) bg_icf_pane_g

0x8bc3,	// (0x000611c7) popup_hyb_candi_window_ParamLimits

0x8bc3,	// (0x000611c7) popup_hyb_candi_window

0x3133,	// (0x0005b737) bg_popup_sub_pane_cp01_ParamLimits

0x3133,	// (0x0005b737) bg_popup_sub_pane_cp01

0x8fc7,	// (0x000615cb) entry_hyb_candi_pane_ParamLimits

0x8fc7,	// (0x000615cb) entry_hyb_candi_pane

0x8fd6,	// (0x000615da) grid_hyb_candi_pane_ParamLimits

0x8fd6,	// (0x000615da) grid_hyb_candi_pane

0x8feb,	// (0x000615ef) grid_hyb_phrase_pane_ParamLimits

0x8feb,	// (0x000615ef) grid_hyb_phrase_pane

0x8ffa,	// (0x000615fe) cell_hyb_candi_pane_ParamLimits

0x8ffa,	// (0x000615fe) cell_hyb_candi_pane

0x9446,	// (0x00061a4a) cell_hyb_candi_scroll_pane

0x2203,	// (0x0005a807) cell_hyb_candi_pane_g1

0x9016,	// (0x0006161a) cell_hyb_candi_pane_t1

0x9024,	// (0x00061628) cell_hyb_phrase_pane

0x2203,	// (0x0005a807) cell_hyb_phrase_pane_g1

0x902d,	// (0x00061631) cell_hyb_phrase_pane_t1

0x903b,	// (0x0006163f) entry_hyb_candi_pane_t1

0x2830,	// (0x0005ae34) input_focus_pane_cp06

0x9049,	// (0x0006164d) cell_hyb_candi_scroll_pane_g1

0x9051,	// (0x00061655) cell_hyb_candi_scroll_pane_g1_aid

0x9059,	// (0x0006165d) cell_hyb_candi_scroll_pane_g2

0x9061,	// (0x00061665) cell_hyb_candi_scroll_pane_g2_aid

0x9069,	// (0x0006166d) cell_hyb_candi_scroll_pane_g3

0x9071,	// (0x00061675) cell_hyb_candi_scroll_pane_g4

0xe97d,	// (0x00066f81) ai5_page_g1

0x216f,	// (0x0005a773) cell_ituss_key_t6_ParamLimits

0x216f,	// (0x0005a773) cell_ituss_key_t6

0xc1fb,	// (0x000647ff) icf_edit_indi_pane_cp02_ParamLimits

0xc1fb,	// (0x000647ff) icf_edit_indi_pane_cp02

0x1f75,	// (0x0005a579) icf_edit_indi_pane_cp03_ParamLimits

0x1f75,	// (0x0005a579) icf_edit_indi_pane_cp03
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large
