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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00052681 };

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
0x4c89,	// (0x0005730a) Screen

0x4c95,	// (0x00057316) application_window_ParamLimits

0x4c95,	// (0x00057316) application_window

0xb68a,	// (0x0005dd0b) screen_g1

0x4cf1,	// (0x00057372) area_bottom_pane_ParamLimits

0x4cf1,	// (0x00057372) area_bottom_pane

0x4db7,	// (0x00057438) area_top_pane_ParamLimits

0x4db7,	// (0x00057438) area_top_pane

0x4e55,	// (0x000574d6) main_pane_ParamLimits

0x4e55,	// (0x000574d6) main_pane

0xb694,	// (0x0005dd15) misc_graphics

0x8b8e,	// (0x0005b20f) battery_pane_ParamLimits

0x8b8e,	// (0x0005b20f) battery_pane

0x9882,	// (0x0005bf03) bg_status_flat_pane_g8

0x988a,	// (0x0005bf0b) bg_status_flat_pane_g9

0x8c56,	// (0x0005b2d7) context_pane_ParamLimits

0x8c56,	// (0x0005b2d7) context_pane

0x8d7a,	// (0x0005b3fb) navi_pane_ParamLimits

0x8d7a,	// (0x0005b3fb) navi_pane

0x8e08,	// (0x0005b489) signal_pane_ParamLimits

0x8e08,	// (0x0005b489) signal_pane

0x0008,

0xf857,	// (0x00061ed8) bg_status_flat_pane_g

0x8e75,	// (0x0005b4f6) status_pane_g1_ParamLimits

0x8e75,	// (0x0005b4f6) status_pane_g1

0x8e81,	// (0x0005b502) status_pane_g2_ParamLimits

0x8e81,	// (0x0005b502) status_pane_g2

0x8e8d,	// (0x0005b50e) status_pane_g3_ParamLimits

0x8e8d,	// (0x0005b50e) status_pane_g3

0x0004,

0xf77e,	// (0x00061dff) status_pane_g_ParamLimits

0xf77e,	// (0x00061dff) status_pane_g

0x8ec1,	// (0x0005b542) title_pane_ParamLimits

0x8ec1,	// (0x0005b542) title_pane

0x8efe,	// (0x0005b57f) uni_indicator_pane_ParamLimits

0x8efe,	// (0x0005b57f) uni_indicator_pane

0x8aba,	// (0x0005b13b) bg_list_pane_ParamLimits

0x8aba,	// (0x0005b13b) bg_list_pane

0x8ada,	// (0x0005b15b) find_pane

0x8ae2,	// (0x0005b163) listscroll_app_pane_ParamLimits

0x8ae2,	// (0x0005b163) listscroll_app_pane

0x8aee,	// (0x0005b16f) listscroll_form_pane

0x62c4,	// (0x00058945) listscroll_gen_pane_ParamLimits

0x62c4,	// (0x00058945) listscroll_gen_pane

0x62d8,	// (0x00058959) listscroll_set_pane

0x5b4e,	// (0x000581cf) main_idle_act_pane

0x87b3,	// (0x0005ae34) main_idle_trad_pane

0x87b3,	// (0x0005ae34) main_list_empty_pane

0x8ae2,	// (0x0005b163) main_midp_pane

0x8b08,	// (0x0005b189) main_pane_g1_ParamLimits

0x8b08,	// (0x0005b189) main_pane_g1

0x62ee,	// (0x0005896f) popup_ai_message_window_ParamLimits

0x62ee,	// (0x0005896f) popup_ai_message_window

0x63a2,	// (0x00058a23) popup_fep_china_uni_window_ParamLimits

0x63a2,	// (0x00058a23) popup_fep_china_uni_window

0x6402,	// (0x00058a83) popup_fep_japan_candidate_window_ParamLimits

0x6402,	// (0x00058a83) popup_fep_japan_candidate_window

0x642c,	// (0x00058aad) popup_fep_japan_predictive_window_ParamLimits

0x642c,	// (0x00058aad) popup_fep_japan_predictive_window

0x6462,	// (0x00058ae3) popup_find_window

0x646f,	// (0x00058af0) popup_grid_graphic_window_ParamLimits

0x646f,	// (0x00058af0) popup_grid_graphic_window

0x649f,	// (0x00058b20) popup_large_graphic_colour_window

0x64c5,	// (0x00058b46) popup_menu_window_ParamLimits

0x64c5,	// (0x00058b46) popup_menu_window

0x668f,	// (0x00058d10) popup_note_image_window

0x6679,	// (0x00058cfa) popup_note_wait_window_ParamLimits

0x6679,	// (0x00058cfa) popup_note_wait_window

0x6679,	// (0x00058cfa) popup_note_window_ParamLimits

0x6679,	// (0x00058cfa) popup_note_window

0x66f5,	// (0x00058d76) popup_query_code_window_ParamLimits

0x66f5,	// (0x00058d76) popup_query_code_window

0x670b,	// (0x00058d8c) popup_query_data_code_window_ParamLimits

0x670b,	// (0x00058d8c) popup_query_data_code_window

0x672e,	// (0x00058daf) popup_query_data_window_ParamLimits

0x672e,	// (0x00058daf) popup_query_data_window

0x6750,	// (0x00058dd1) popup_query_sat_info_window_ParamLimits

0x6750,	// (0x00058dd1) popup_query_sat_info_window

0x678f,	// (0x00058e10) popup_snote_single_graphic_window_ParamLimits

0x678f,	// (0x00058e10) popup_snote_single_graphic_window

0x678f,	// (0x00058e10) popup_snote_single_text_window_ParamLimits

0x678f,	// (0x00058e10) popup_snote_single_text_window

0x67a6,	// (0x00058e27) popup_sub_window_general

0x68ec,	// (0x00058f6d) popup_window_general_ParamLimits

0x68ec,	// (0x00058f6d) popup_window_general

0x8b16,	// (0x0005b197) power_save_pane

0x617b,	// (0x000587fc) control_pane_g1_ParamLimits

0x617b,	// (0x000587fc) control_pane_g1

0x619e,	// (0x0005881f) control_pane_g2_ParamLimits

0x619e,	// (0x0005881f) control_pane_g2

0x8a7d,	// (0x0005b0fe) control_pane_g3_ParamLimits

0x8a7d,	// (0x0005b0fe) control_pane_g3

0x0007,

0xf766,	// (0x00061de7) control_pane_g_ParamLimits

0xf766,	// (0x00061de7) control_pane_g

0x61e3,	// (0x00058864) control_pane_t1_ParamLimits

0x61e3,	// (0x00058864) control_pane_t1

0x622b,	// (0x000588ac) control_pane_t2_ParamLimits

0x622b,	// (0x000588ac) control_pane_t2

0x0002,

0xf777,	// (0x00061df8) control_pane_t_ParamLimits

0xf777,	// (0x00061df8) control_pane_t

0x89a2,	// (0x0005b023) navi_navi_volume_pane_cp1

0x89aa,	// (0x0005b02b) status_small_icon_pane

0x89b2,	// (0x0005b033) status_small_pane_g1_ParamLimits

0x89b2,	// (0x0005b033) status_small_pane_g1

0x89e6,	// (0x0005b067) status_small_pane_g2_ParamLimits

0x89e6,	// (0x0005b067) status_small_pane_g2

0x89f2,	// (0x0005b073) status_small_pane_g3_ParamLimits

0x89f2,	// (0x0005b073) status_small_pane_g3

0x89fe,	// (0x0005b07f) status_small_pane_g4_ParamLimits

0x89fe,	// (0x0005b07f) status_small_pane_g4

0x8a0a,	// (0x0005b08b) status_small_pane_g5_ParamLimits

0x8a0a,	// (0x0005b08b) status_small_pane_g5

0x8a18,	// (0x0005b099) status_small_pane_g6_ParamLimits

0x8a18,	// (0x0005b099) status_small_pane_g6

0x0007,

0xf755,	// (0x00061dd6) status_small_pane_g_ParamLimits

0xf755,	// (0x00061dd6) status_small_pane_g

0x8a47,	// (0x0005b0c8) status_small_pane_t1

0x8a69,	// (0x0005b0ea) status_small_wait_pane_ParamLimits

0x8a69,	// (0x0005b0ea) status_small_wait_pane

0x822d,	// (0x0005a8ae) aid_levels_signal_ParamLimits

0x822d,	// (0x0005a8ae) aid_levels_signal

0x823c,	// (0x0005a8bd) signal_pane_g1_ParamLimits

0x823c,	// (0x0005a8bd) signal_pane_g1

0x8251,	// (0x0005a8d2) signal_pane_g2_ParamLimits

0x8251,	// (0x0005a8d2) signal_pane_g2

0x0003,

0xf6e6,	// (0x00061d67) signal_pane_g_ParamLimits

0xf6e6,	// (0x00061d67) signal_pane_g

0x8282,	// (0x0005a903) context_pane_g1

0x50b4,	// (0x00057735) title_pane_g1

0x50e6,	// (0x00057767) title_pane_t1

0xb6aa,	// (0x0005dd2b) title_pane_t2

0xb6d0,	// (0x0005dd51) title_pane_t3

0x0002,

0xf530,	// (0x00061bb1) title_pane_t

0x8f16,	// (0x0005b597) aid_levels_battery_ParamLimits

0x8f16,	// (0x0005b597) aid_levels_battery

0x8f27,	// (0x0005b5a8) battery_pane_g1_ParamLimits

0x8f27,	// (0x0005b5a8) battery_pane_g1

0x8f3d,	// (0x0005b5be) battery_pane_g2_ParamLimits

0x8f3d,	// (0x0005b5be) battery_pane_g2

0x0001,

0xf789,	// (0x00061e0a) battery_pane_g_ParamLimits

0xf789,	// (0x00061e0a) battery_pane_g

0xa3ba,	// (0x0005ca3b) uni_indicator_pane_g1

0xa3d0,	// (0x0005ca51) uni_indicator_pane_g2

0xa3e6,	// (0x0005ca67) uni_indicator_pane_g3

0x0005,

0xf8ff,	// (0x00061f80) uni_indicator_pane_g

0x8612,	// (0x0005ac93) navi_icon_pane_ParamLimits

0x8612,	// (0x0005ac93) navi_icon_pane

0x8565,	// (0x0005abe6) navi_midp_pane

0x862e,	// (0x0005acaf) navi_navi_pane

0x8638,	// (0x0005acb9) navi_text_pane_ParamLimits

0x8638,	// (0x0005acb9) navi_text_pane

0xb68a,	// (0x0005dd0b) status_small_wait_pane_g1

0xf146,	// (0x000617c7) status_small_wait_pane_g2

0x0001,

0xf8fa,	// (0x00061f7b) status_small_wait_pane_g

0xa0cd,	// (0x0005c74e) navi_navi_icon_text_pane

0xa0d5,	// (0x0005c756) navi_navi_pane_g1_ParamLimits

0xa0d5,	// (0x0005c756) navi_navi_pane_g1

0xa0e7,	// (0x0005c768) navi_navi_pane_g2_ParamLimits

0xa0e7,	// (0x0005c768) navi_navi_pane_g2

0x0001,

0xf8c8,	// (0x00061f49) navi_navi_pane_g_ParamLimits

0xf8c8,	// (0x00061f49) navi_navi_pane_g

0xa0f9,	// (0x0005c77a) navi_navi_tabs_pane

0xa102,	// (0x0005c783) navi_navi_text_pane

0xa0cd,	// (0x0005c74e) navi_navi_volume_pane

0xa0a9,	// (0x0005c72a) navi_text_pane_t1

0xa09d,	// (0x0005c71e) navi_icon_pane_g1

0x9ff0,	// (0x0005c671) navi_navi_text_pane_t1

0x6bc8,	// (0x00059249) navi_navi_volume_pane_g1

0x6bd0,	// (0x00059251) volume_small_pane

0x9f56,	// (0x0005c5d7) navi_navi_icon_text_pane_g1

0x9f5e,	// (0x0005c5df) navi_navi_icon_text_pane_t1

0x862e,	// (0x0005acaf) navi_tabs_2_long_pane

0x862e,	// (0x0005acaf) navi_tabs_2_pane

0x862e,	// (0x0005acaf) navi_tabs_3_long_pane

0x862e,	// (0x0005acaf) navi_tabs_3_pane

0x862e,	// (0x0005acaf) navi_tabs_4_pane

0x6ba8,	// (0x00059229) tabs_2_active_pane_ParamLimits

0x6ba8,	// (0x00059229) tabs_2_active_pane

0x6bb8,	// (0x00059239) tabs_2_passive_pane_ParamLimits

0x6bb8,	// (0x00059239) tabs_2_passive_pane

0x6b76,	// (0x000591f7) tabs_3_active_pane_ParamLimits

0x6b76,	// (0x000591f7) tabs_3_active_pane

0x6b86,	// (0x00059207) tabs_3_passive_pane_ParamLimits

0x6b86,	// (0x00059207) tabs_3_passive_pane

0x6b97,	// (0x00059218) tabs_3_passive_pane_cp_ParamLimits

0x6b97,	// (0x00059218) tabs_3_passive_pane_cp

0x6b2a,	// (0x000591ab) tabs_4_active_pane_ParamLimits

0x6b2a,	// (0x000591ab) tabs_4_active_pane

0x6b3d,	// (0x000591be) tabs_4_passive_pane_ParamLimits

0x6b3d,	// (0x000591be) tabs_4_passive_pane

0x6b4e,	// (0x000591cf) tabs_4_passive_pane_cp_ParamLimits

0x6b4e,	// (0x000591cf) tabs_4_passive_pane_cp

0x6b5f,	// (0x000591e0) tabs_4_passive_pane_cp2_ParamLimits

0x6b5f,	// (0x000591e0) tabs_4_passive_pane_cp2

0x6b06,	// (0x00059187) tabs_2_long_active_pane_ParamLimits

0x6b06,	// (0x00059187) tabs_2_long_active_pane

0x6b18,	// (0x00059199) tabs_2_long_passive_pane_ParamLimits

0x6b18,	// (0x00059199) tabs_2_long_passive_pane

0x6ac7,	// (0x00059148) tabs_3_long_active_pane_ParamLimits

0x6ac7,	// (0x00059148) tabs_3_long_active_pane

0x6ada,	// (0x0005915b) tabs_3_long_passive_pane_ParamLimits

0x6ada,	// (0x0005915b) tabs_3_long_passive_pane

0x6af3,	// (0x00059174) tabs_3_long_passive_pane_cp_ParamLimits

0x6af3,	// (0x00059174) tabs_3_long_passive_pane_cp

0x6a6d,	// (0x000590ee) volume_small_pane_g1

0x6a76,	// (0x000590f7) volume_small_pane_g2

0x6a7f,	// (0x00059100) volume_small_pane_g3

0x6a88,	// (0x00059109) volume_small_pane_g4

0x6a91,	// (0x00059112) volume_small_pane_g5

0x6a9a,	// (0x0005911b) volume_small_pane_g6

0x6aa3,	// (0x00059124) volume_small_pane_g7

0x6aac,	// (0x0005912d) volume_small_pane_g8

0x6ab5,	// (0x00059136) volume_small_pane_g9

0x6abe,	// (0x0005913f) volume_small_pane_g10

0x0009,

0xf894,	// (0x00061f15) volume_small_pane_g

0xb6e2,	// (0x0005dd63) bg_active_tab_pane_cp2_ParamLimits

0xb6e2,	// (0x0005dd63) bg_active_tab_pane_cp2

0x514e,	// (0x000577cf) tabs_3_active_pane_g1

0x5156,	// (0x000577d7) tabs_3_active_pane_t1

0xb6e2,	// (0x0005dd63) bg_passive_tab_pane_cp2_ParamLimits

0xb6e2,	// (0x0005dd63) bg_passive_tab_pane_cp2

0x514e,	// (0x000577cf) tabs_3_passive_pane_g1

0x5156,	// (0x000577d7) tabs_3_passive_pane_t1

0xb6e2,	// (0x0005dd63) bg_active_tab_pane_cp3_ParamLimits

0xb6e2,	// (0x0005dd63) bg_active_tab_pane_cp3

0x5168,	// (0x000577e9) tabs_4_active_pane_g1

0x5170,	// (0x000577f1) tabs_4_active_pane_t1

0xb6e2,	// (0x0005dd63) bg_passive_tab_pane_cp3_ParamLimits

0xb6e2,	// (0x0005dd63) bg_passive_tab_pane_cp3

0x5168,	// (0x000577e9) tabs_4_1_passive_pane_g1

0x5170,	// (0x000577f1) tabs_4_1_passive_pane_t1

0x8ae2,	// (0x0005b163) list_highlight_pane_cp2

0xa623,	// (0x0005cca4) list_set_pane_ParamLimits

0xa623,	// (0x0005cca4) list_set_pane

0xa6e5,	// (0x0005cd66) main_pane_set_t1_ParamLimits

0xa6e5,	// (0x0005cd66) main_pane_set_t1

0xa705,	// (0x0005cd86) main_pane_set_t2_ParamLimits

0xa705,	// (0x0005cd86) main_pane_set_t2

0xa719,	// (0x0005cd9a) main_pane_set_t3_ParamLimits

0xa719,	// (0x0005cd9a) main_pane_set_t3

0xa72d,	// (0x0005cdae) main_pane_set_t4_ParamLimits

0xa72d,	// (0x0005cdae) main_pane_set_t4

0x0003,

0xf964,	// (0x00061fe5) main_pane_set_t_ParamLimits

0xf964,	// (0x00061fe5) main_pane_set_t

0xa741,	// (0x0005cdc2) setting_code_pane

0xa74b,	// (0x0005cdcc) setting_slider_graphic_pane

0xa74b,	// (0x0005cdcc) setting_slider_pane

0xa74b,	// (0x0005cdcc) setting_text_pane

0xa74b,	// (0x0005cdcc) setting_volume_pane

0x5182,	// (0x00057803) volume_set_pane

0xb6e2,	// (0x0005dd63) bg_set_opt_pane_cp

0x518c,	// (0x0005780d) setting_slider_pane_t1

0x51a5,	// (0x00057826) setting_slider_pane_t2

0x51bf,	// (0x00057840) setting_slider_pane_t3

0x0002,

0xf537,	// (0x00061bb8) setting_slider_pane_t

0x51d7,	// (0x00057858) slider_set_pane

0xb694,	// (0x0005dd15) bg_set_opt_pane_cp2

0xb6f0,	// (0x0005dd71) setting_slider_graphic_pane_g1

0x51ed,	// (0x0005786e) setting_slider_graphic_pane_t1

0x51fd,	// (0x0005787e) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x00061bbf) setting_slider_graphic_pane_t

0x520d,	// (0x0005788e) slider_set_pane_cp

0xb694,	// (0x0005dd15) input_focus_pane_cp1

0xa5e4,	// (0x0005cc65) list_set_text_pane

0xb68a,	// (0x0005dd0b) setting_text_pane_g1

0xb694,	// (0x0005dd15) input_focus_pane_cp2

0xb68a,	// (0x0005dd0b) setting_code_pane_g1

0xb6f9,	// (0x0005dd7a) setting_code_pane_t1

0x3173,	// (0x000557f4) set_text_pane_t1_ParamLimits

0x3173,	// (0x000557f4) set_text_pane_t1

0xf4df,	// (0x00061b60) set_opt_bg_pane_g1

0xf4e7,	// (0x00061b68) set_opt_bg_pane_g2

0xa5bc,	// (0x0005cc3d) set_opt_bg_pane_g3

0xf4f7,	// (0x00061b78) set_opt_bg_pane_g4

0xf4ff,	// (0x00061b80) set_opt_bg_pane_g5

0xf507,	// (0x00061b88) set_opt_bg_pane_g6

0xa5c6,	// (0x0005cc47) set_opt_bg_pane_g7

0xa5d0,	// (0x0005cc51) set_opt_bg_pane_g8

0xa5da,	// (0x0005cc5b) set_opt_bg_pane_g9

0x0008,

0xf951,	// (0x00061fd2) set_opt_bg_pane_g

0xa5af,	// (0x0005cc30) slider_set_pane_g1

0x6c79,	// (0x000592fa) slider_set_pane_g2

0x0006,

0xf942,	// (0x00061fc3) slider_set_pane_g

0x6bd9,	// (0x0005925a) volume_set_pane_g1

0x6be3,	// (0x00059264) volume_set_pane_g2

0x6bed,	// (0x0005926e) volume_set_pane_g3

0x6bf7,	// (0x00059278) volume_set_pane_g4

0x6c01,	// (0x00059282) volume_set_pane_g5

0x6c0b,	// (0x0005928c) volume_set_pane_g6

0x6c15,	// (0x00059296) volume_set_pane_g7

0x6c1f,	// (0x000592a0) volume_set_pane_g8

0x6c29,	// (0x000592aa) volume_set_pane_g9

0x6c33,	// (0x000592b4) volume_set_pane_g10

0x0009,

0xf91a,	// (0x00061f9b) volume_set_pane_g

0x5215,	// (0x00057896) indicator_pane_ParamLimits

0x5215,	// (0x00057896) indicator_pane

0x5221,	// (0x000578a2) main_idle_pane_g2_ParamLimits

0x5221,	// (0x000578a2) main_idle_pane_g2

0x5249,	// (0x000578ca) main_pane_idle_g1_ParamLimits

0x5249,	// (0x000578ca) main_pane_idle_g1

0xb707,	// (0x0005dd88) popup_clock_digital_analogue_window_ParamLimits

0xb707,	// (0x0005dd88) popup_clock_digital_analogue_window

0x5257,	// (0x000578d8) soft_indicator_pane_ParamLimits

0x5257,	// (0x000578d8) soft_indicator_pane

0x5265,	// (0x000578e6) wallpaper_pane_ParamLimits

0x5265,	// (0x000578e6) wallpaper_pane

0xb68a,	// (0x0005dd0b) wallpaper_pane_g1

0x5271,	// (0x000578f2) indicator_pane_g1_ParamLimits

0x5271,	// (0x000578f2) indicator_pane_g1

0xaa17,	// (0x0005d098) navi_navi_icon_text_pane_srt_g1

0xebf4,	// (0x00061275) soft_indicator_pane_t1

0xec0e,	// (0x0006128f) aid_ps_area_pane

0x527d,	// (0x000578fe) aid_ps_clock_pane

0xec1f,	// (0x000612a0) aid_ps_indicator_pane

0xec2b,	// (0x000612ac) indicator_ps_pane_ParamLimits

0xec2b,	// (0x000612ac) indicator_ps_pane

0xec3a,	// (0x000612bb) power_save_pane_g1_ParamLimits

0xec3a,	// (0x000612bb) power_save_pane_g1

0xec46,	// (0x000612c7) power_save_pane_g2_ParamLimits

0xec46,	// (0x000612c7) power_save_pane_g2

0x4ca5,	// (0x00057326) aid_navinavi_width_pane

0xec0e,	// (0x0006128f) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x00061bc4) power_save_pane_g_ParamLimits

0xf543,	// (0x00061bc4) power_save_pane_g

0xec54,	// (0x000612d5) power_save_pane_t1_ParamLimits

0xec54,	// (0x000612d5) power_save_pane_t1

0x527d,	// (0x000578fe) aid_ps_clock_pane_ParamLimits

0xec1f,	// (0x000612a0) aid_ps_indicator_pane_ParamLimits

0xec66,	// (0x000612e7) power_save_pane_t4_ParamLimits

0xec66,	// (0x000612e7) power_save_pane_t4

0x0001,

0xf548,	// (0x00061bc9) power_save_pane_t_ParamLimits

0xf548,	// (0x00061bc9) power_save_pane_t

0xec90,	// (0x00061311) power_save_t3_ParamLimits

0xec90,	// (0x00061311) power_save_t3

0xec7b,	// (0x000612fc) power_save_t2_ParamLimits

0xec7b,	// (0x000612fc) power_save_t2

0xeca5,	// (0x00061326) indicator_ps_pane_g1

0x528b,	// (0x0005790c) ai_gene_pane_ParamLimits

0x528b,	// (0x0005790c) ai_gene_pane

0x5297,	// (0x00057918) ai_links_pane_ParamLimits

0x5297,	// (0x00057918) ai_links_pane

0x52a3,	// (0x00057924) indicator_pane_cp1_ParamLimits

0x52a3,	// (0x00057924) indicator_pane_cp1

0x52af,	// (0x00057930) main_pane_idle_g1_cp_ParamLimits

0x52af,	// (0x00057930) main_pane_idle_g1_cp

0xecae,	// (0x0006132f) popup_ai_links_title_window

0x52bb,	// (0x0005793c) soft_indicator_pane_cp1_ParamLimits

0x52bb,	// (0x0005793c) soft_indicator_pane_cp1

0xa3a8,	// (0x0005ca29) ai_links_pane_g1

0xa3b1,	// (0x0005ca32) grid_ai_links_pane

0xa38d,	// (0x0005ca0e) ai_gene_pane_1

0xa396,	// (0x0005ca17) ai_gene_pane_2

0xa39f,	// (0x0005ca20) list_highlight_pane_cp4

0xa36d,	// (0x0005c9ee) cell_ai_link_pane_ParamLimits

0xa36d,	// (0x0005c9ee) cell_ai_link_pane

0xa365,	// (0x0005c9e6) cell_ai_link_pane_g1

0xf146,	// (0x000617c7) cell_ai_link_pane_g2

0x0001,

0xf8f5,	// (0x00061f76) cell_ai_link_pane_g

0xb694,	// (0x0005dd15) grid_highlight_cp2

0xb694,	// (0x0005dd15) bg_popup_sub_pane_cp1

0xecc5,	// (0x00061346) popup_ai_links_title_window_t1

0xa2b1,	// (0x0005c932) ai_gene_pane_1_g1_ParamLimits

0xa2b1,	// (0x0005c932) ai_gene_pane_1_g1

0xa2bd,	// (0x0005c93e) ai_gene_pane_1_g2_ParamLimits

0xa2bd,	// (0x0005c93e) ai_gene_pane_1_g2

0x0001,

0xf8eb,	// (0x00061f6c) ai_gene_pane_1_g_ParamLimits

0xf8eb,	// (0x00061f6c) ai_gene_pane_1_g

0xa2ca,	// (0x0005c94b) ai_gene_pane_1_t1_ParamLimits

0xa2ca,	// (0x0005c94b) ai_gene_pane_1_t1

0xa2fe,	// (0x0005c97f) grid_ai_soft_ind_pane

0xa29c,	// (0x0005c91d) ai_gene_pane_2_t1_ParamLimits

0xa29c,	// (0x0005c91d) ai_gene_pane_2_t1

0x52c7,	// (0x00057948) main_pane_empty_t1_ParamLimits

0x52c7,	// (0x00057948) main_pane_empty_t1

0x52df,	// (0x00057960) main_pane_empty_t2_ParamLimits

0x52df,	// (0x00057960) main_pane_empty_t2

0x52f4,	// (0x00057975) main_pane_empty_t3_ParamLimits

0x52f4,	// (0x00057975) main_pane_empty_t3

0x5306,	// (0x00057987) main_pane_empty_t4_ParamLimits

0x5306,	// (0x00057987) main_pane_empty_t4

0x5318,	// (0x00057999) main_pane_empty_t5_ParamLimits

0x5318,	// (0x00057999) main_pane_empty_t5

0x0004,

0xf54d,	// (0x00061bce) main_pane_empty_t_ParamLimits

0xf54d,	// (0x00061bce) main_pane_empty_t

0x3225,	// (0x000558a6) bg_popup_window_pane_ParamLimits

0x3225,	// (0x000558a6) bg_popup_window_pane

0x9ffe,	// (0x0005c67f) find_popup_pane_cp2_ParamLimits

0x9ffe,	// (0x0005c67f) find_popup_pane_cp2

0xa00a,	// (0x0005c68b) heading_pane_ParamLimits

0xa00a,	// (0x0005c68b) heading_pane

0xb694,	// (0x0005dd15) bg_popup_sub_pane

0x9f78,	// (0x0005c5f9) bg_popup_window_pane_g1_ParamLimits

0x9f78,	// (0x0005c5f9) bg_popup_window_pane_g1

0x9f84,	// (0x0005c605) bg_popup_window_pane_g2_ParamLimits

0x9f84,	// (0x0005c605) bg_popup_window_pane_g2

0x9f90,	// (0x0005c611) bg_popup_window_pane_g3_ParamLimits

0x9f90,	// (0x0005c611) bg_popup_window_pane_g3

0x9f9c,	// (0x0005c61d) bg_popup_window_pane_g4_ParamLimits

0x9f9c,	// (0x0005c61d) bg_popup_window_pane_g4

0x9fa8,	// (0x0005c629) bg_popup_window_pane_g5_ParamLimits

0x9fa8,	// (0x0005c629) bg_popup_window_pane_g5

0x9fb4,	// (0x0005c635) bg_popup_window_pane_g6_ParamLimits

0x9fb4,	// (0x0005c635) bg_popup_window_pane_g6

0x9fc0,	// (0x0005c641) bg_popup_window_pane_g7_ParamLimits

0x9fc0,	// (0x0005c641) bg_popup_window_pane_g7

0x9fcc,	// (0x0005c64d) bg_popup_window_pane_g8_ParamLimits

0x9fcc,	// (0x0005c64d) bg_popup_window_pane_g8

0x9fd8,	// (0x0005c659) bg_popup_window_pane_g9_ParamLimits

0x9fd8,	// (0x0005c659) bg_popup_window_pane_g9

0x9fe4,	// (0x0005c665) bg_popup_window_pane_g10_ParamLimits

0x9fe4,	// (0x0005c665) bg_popup_window_pane_g10

0x0009,

0xf8b3,	// (0x00061f34) bg_popup_window_pane_g_ParamLimits

0xf8b3,	// (0x00061f34) bg_popup_window_pane_g

0x9f0d,	// (0x0005c58e) bg_popup_heading_pane_ParamLimits

0x9f0d,	// (0x0005c58e) bg_popup_heading_pane

0x6d75,	// (0x000593f6) tabs_4_passive_pane_cp_srt_ParamLimits

0x6d75,	// (0x000593f6) tabs_4_passive_pane_cp_srt

0x6d87,	// (0x00059408) tabs_4_passive_pane_srt_ParamLimits

0x9f21,	// (0x0005c5a2) heading_pane_g2

0x6d87,	// (0x00059408) tabs_4_passive_pane_srt

0x8ae2,	// (0x0005b163) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8ae2,	// (0x0005b163) bg_passive_tab_pane_cp3_srt

0x9f29,	// (0x0005c5aa) heading_pane_t1_ParamLimits

0x9f29,	// (0x0005c5aa) heading_pane_t1

0x9f40,	// (0x0005c5c1) heading_pane_t2_ParamLimits

0x9f40,	// (0x0005c5c1) heading_pane_t2

0x0001,

0xf8ae,	// (0x00061f2f) heading_pane_t_ParamLimits

0xf8ae,	// (0x00061f2f) heading_pane_t

0x984a,	// (0x0005becb) bg_popup_heading_pane_g1

0x98f9,	// (0x0005bf7a) bg_popup_heading_pane_g2

0x9903,	// (0x0005bf84) bg_popup_heading_pane_g3

0x990d,	// (0x0005bf8e) bg_popup_heading_pane_g4

0x9917,	// (0x0005bf98) bg_popup_heading_pane_g5

0x9921,	// (0x0005bfa2) bg_popup_heading_pane_g6

0x9929,	// (0x0005bfaa) bg_popup_heading_pane_g7

0x9931,	// (0x0005bfb2) bg_popup_heading_pane_g8

0x993b,	// (0x0005bfbc) bg_popup_heading_pane_g9

0x0008,

0xf86a,	// (0x00061eeb) bg_popup_heading_pane_g

0x902a,	// (0x0005b6ab) bg_popup_sub_pane_g1

0x903a,	// (0x0005b6bb) bg_popup_sub_pane_g2

0x9032,	// (0x0005b6b3) bg_popup_sub_pane_g3

0x904a,	// (0x0005b6cb) bg_popup_sub_pane_g4

0x9042,	// (0x0005b6c3) bg_popup_sub_pane_g5

0x9052,	// (0x0005b6d3) bg_popup_sub_pane_g6

0x905a,	// (0x0005b6db) bg_popup_sub_pane_g7

0x906a,	// (0x0005b6eb) bg_popup_sub_pane_g8

0x9062,	// (0x0005b6e3) bg_popup_sub_pane_g9

0x0008,

0xf844,	// (0x00061ec5) bg_popup_sub_pane_g

0xb71e,	// (0x0005dd9f) bg_popup_window_pane_cp5_ParamLimits

0xb71e,	// (0x0005dd9f) bg_popup_window_pane_cp5

0xece2,	// (0x00061363) popup_note_window_g1_ParamLimits

0xece2,	// (0x00061363) popup_note_window_g1

0xecee,	// (0x0006136f) popup_note_window_t1_ParamLimits

0xecee,	// (0x0006136f) popup_note_window_t1

0xed04,	// (0x00061385) popup_note_window_t2_ParamLimits

0xed04,	// (0x00061385) popup_note_window_t2

0xed1a,	// (0x0006139b) popup_note_window_t3_ParamLimits

0xed1a,	// (0x0006139b) popup_note_window_t3

0xed30,	// (0x000613b1) popup_note_window_t4_ParamLimits

0xed30,	// (0x000613b1) popup_note_window_t4

0xeffc,	// (0x0006167d) popup_note_window_t5_ParamLimits

0xeffc,	// (0x0006167d) popup_note_window_t5

0x0004,

0xf558,	// (0x00061bd9) popup_note_window_t_ParamLimits

0xf558,	// (0x00061bd9) popup_note_window_t

0xf046,	// (0x000616c7) bg_popup_window_pane_cp6_ParamLimits

0xf046,	// (0x000616c7) bg_popup_window_pane_cp6

0x97c6,	// (0x0005be47) popup_note_image_window_g1_ParamLimits

0x97c6,	// (0x0005be47) popup_note_image_window_g1

0x97d2,	// (0x0005be53) popup_note_image_window_g2_ParamLimits

0x97d2,	// (0x0005be53) popup_note_image_window_g2

0x0001,

0xf838,	// (0x00061eb9) popup_note_image_window_g_ParamLimits

0xf838,	// (0x00061eb9) popup_note_image_window_g

0x97eb,	// (0x0005be6c) popup_note_image_window_t1_ParamLimits

0x97eb,	// (0x0005be6c) popup_note_image_window_t1

0x9804,	// (0x0005be85) popup_note_image_window_t2_ParamLimits

0x9804,	// (0x0005be85) popup_note_image_window_t2

0x981d,	// (0x0005be9e) popup_note_image_window_t3_ParamLimits

0x981d,	// (0x0005be9e) popup_note_image_window_t3

0x0002,

0xf83d,	// (0x00061ebe) popup_note_image_window_t_ParamLimits

0xf83d,	// (0x00061ebe) popup_note_image_window_t

0x9686,	// (0x0005bd07) bg_popup_window_pane_cp7_ParamLimits

0x9686,	// (0x0005bd07) bg_popup_window_pane_cp7

0x96b6,	// (0x0005bd37) popup_note_wait_window_g1_ParamLimits

0x96b6,	// (0x0005bd37) popup_note_wait_window_g1

0x96c2,	// (0x0005bd43) popup_note_wait_window_g2_ParamLimits

0x96c2,	// (0x0005bd43) popup_note_wait_window_g2

0x0002,

0xf826,	// (0x00061ea7) popup_note_wait_window_g_ParamLimits

0xf826,	// (0x00061ea7) popup_note_wait_window_g

0x96da,	// (0x0005bd5b) popup_note_wait_window_t1_ParamLimits

0x96da,	// (0x0005bd5b) popup_note_wait_window_t1

0x9701,	// (0x0005bd82) popup_note_wait_window_t2_ParamLimits

0x9701,	// (0x0005bd82) popup_note_wait_window_t2

0x971f,	// (0x0005bda0) popup_note_wait_window_t3_ParamLimits

0x971f,	// (0x0005bda0) popup_note_wait_window_t3

0x9732,	// (0x0005bdb3) popup_note_wait_window_t4_ParamLimits

0x9732,	// (0x0005bdb3) popup_note_wait_window_t4

0x0004,

0xf82d,	// (0x00061eae) popup_note_wait_window_t_ParamLimits

0xf82d,	// (0x00061eae) popup_note_wait_window_t

0x9757,	// (0x0005bdd8) wait_bar_pane_ParamLimits

0x9757,	// (0x0005bdd8) wait_bar_pane

0xb694,	// (0x0005dd15) wait_anim_pane

0xb694,	// (0x0005dd15) wait_border_pane

0xb68a,	// (0x0005dd0b) wait_anim_pane_g1

0xb68a,	// (0x0005dd0b) wait_anim_pane_g2

0x0001,

0xf6e1,	// (0x00061d62) wait_anim_pane_g

0x962a,	// (0x0005bcab) wait_border_pane_g1

0x9635,	// (0x0005bcb6) wait_border_pane_g2

0x963e,	// (0x0005bcbf) wait_border_pane_g3

0x0002,

0xf81f,	// (0x00061ea0) wait_border_pane_g

0x9494,	// (0x0005bb15) bg_popup_window_pane_cp16_ParamLimits

0x9494,	// (0x0005bb15) bg_popup_window_pane_cp16

0x9594,	// (0x0005bc15) indicator_popup_pane_cp4_ParamLimits

0x9594,	// (0x0005bc15) indicator_popup_pane_cp4

0x95a8,	// (0x0005bc29) popup_query_data_window_t1_ParamLimits

0x95a8,	// (0x0005bc29) popup_query_data_window_t1

0x95ba,	// (0x0005bc3b) popup_query_data_window_t2_ParamLimits

0x95ba,	// (0x0005bc3b) popup_query_data_window_t2

0x95d3,	// (0x0005bc54) popup_query_data_window_t3_ParamLimits

0x95d3,	// (0x0005bc54) popup_query_data_window_t3

0x0002,

0xf818,	// (0x00061e99) popup_query_data_window_t_ParamLimits

0xf818,	// (0x00061e99) popup_query_data_window_t

0x95ed,	// (0x0005bc6e) query_popup_data_pane_ParamLimits

0x95ed,	// (0x0005bc6e) query_popup_data_pane

0x9601,	// (0x0005bc82) query_popup_data_pane_cp1_ParamLimits

0x9601,	// (0x0005bc82) query_popup_data_pane_cp1

0x9494,	// (0x0005bb15) bg_popup_window_pane_cp10_ParamLimits

0x9494,	// (0x0005bb15) bg_popup_window_pane_cp10

0x94c6,	// (0x0005bb47) indicator_popup_pane_ParamLimits

0x94c6,	// (0x0005bb47) indicator_popup_pane

0x94e8,	// (0x0005bb69) popup_query_code_window_t1_ParamLimits

0x94e8,	// (0x0005bb69) popup_query_code_window_t1

0x9502,	// (0x0005bb83) popup_query_code_window_t2_ParamLimits

0x9502,	// (0x0005bb83) popup_query_code_window_t2

0x954b,	// (0x0005bbcc) popup_query_code_window_t3_ParamLimits

0x954b,	// (0x0005bbcc) popup_query_code_window_t3

0x0002,

0xf811,	// (0x00061e92) popup_query_code_window_t_ParamLimits

0xf811,	// (0x00061e92) popup_query_code_window_t

0x957a,	// (0x0005bbfb) query_popup_pane_ParamLimits

0x957a,	// (0x0005bbfb) query_popup_pane

0xf046,	// (0x000616c7) bg_popup_window_pane_cp15_ParamLimits

0xf046,	// (0x000616c7) bg_popup_window_pane_cp15

0xf066,	// (0x000616e7) indicator_popup_pane_cp1_ParamLimits

0xf066,	// (0x000616e7) indicator_popup_pane_cp1

0xf079,	// (0x000616fa) indicator_popup_pane_cp2_ParamLimits

0xf079,	// (0x000616fa) indicator_popup_pane_cp2

0xf094,	// (0x00061715) popup_query_data_code_window_g1_ParamLimits

0xf094,	// (0x00061715) popup_query_data_code_window_g1

0xf0a7,	// (0x00061728) popup_query_data_code_window_t1_ParamLimits

0xf0a7,	// (0x00061728) popup_query_data_code_window_t1

0xf0b9,	// (0x0006173a) popup_query_data_code_window_t2_ParamLimits

0xf0b9,	// (0x0006173a) popup_query_data_code_window_t2

0xf0cb,	// (0x0006174c) popup_query_data_code_window_t3_ParamLimits

0xf0cb,	// (0x0006174c) popup_query_data_code_window_t3

0xf0e1,	// (0x00061762) popup_query_data_code_window_t4_ParamLimits

0xf0e1,	// (0x00061762) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x00061be4) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x00061be4) popup_query_data_code_window_t

0x695a,	// (0x00058fdb) list_single_midp_graphic_pane_g3

0xf0fb,	// (0x0006177c) query_popup_data_pane_cp2_ParamLimits

0xf10e,	// (0x0006178f) query_popup_pane_cp2_ParamLimits

0xf10e,	// (0x0006178f) query_popup_pane_cp2

0xb694,	// (0x0005dd15) bg_popup_window_pane_cp11

0x9478,	// (0x0005baf9) heading_pane_cp5

0x9480,	// (0x0005bb01) listscroll_popup_info_pane

0xb694,	// (0x0005dd15) input_focus_pane_cp3

0xf129,	// (0x000617aa) query_popup_pane_t1

0xf137,	// (0x000617b8) list_popup_info_pane_ParamLimits

0xf137,	// (0x000617b8) list_popup_info_pane

0xf146,	// (0x000617c7) listscroll_popup_info_pane_g1

0xf14e,	// (0x000617cf) scroll_pane_cp7

0xf158,	// (0x000617d9) popup_info_list_pane_t1_ParamLimits

0xf158,	// (0x000617d9) popup_info_list_pane_t1

0xf172,	// (0x000617f3) popup_info_list_pane_t2_ParamLimits

0xf172,	// (0x000617f3) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x00061bed) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x00061bed) popup_info_list_pane_t

0xb694,	// (0x0005dd15) bg_popup_window_pane_cp12

0xaa31,	// (0x0005d0b2) find_popup_pane

0xb6e2,	// (0x0005dd63) bg_popup_window_pane_cp3

0xf18c,	// (0x0006180d) heading_pane_cp3

0xf19b,	// (0x0006181c) listscroll_popup_graphic_pane

0xb694,	// (0x0005dd15) bg_popup_window_pane_cp4

0x537a,	// (0x000579fb) heading_pane_cp4

0xf1ab,	// (0x0006182c) listscroll_popup_colour_pane

0x5384,	// (0x00057a05) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x5384,	// (0x00057a05) cell_large_graphic_colour_none_popup_pane

0x5398,	// (0x00057a19) grid_large_graphic_colour_popup_pane_ParamLimits

0x5398,	// (0x00057a19) grid_large_graphic_colour_popup_pane

0x53c4,	// (0x00057a45) listscroll_popup_colour_pane_g1_ParamLimits

0x53c4,	// (0x00057a45) listscroll_popup_colour_pane_g1

0x53db,	// (0x00057a5c) listscroll_popup_colour_pane_g2_ParamLimits

0x53db,	// (0x00057a5c) listscroll_popup_colour_pane_g2

0x53f2,	// (0x00057a73) listscroll_popup_colour_pane_g3_ParamLimits

0x53f2,	// (0x00057a73) listscroll_popup_colour_pane_g3

0x5402,	// (0x00057a83) listscroll_popup_colour_pane_g4_ParamLimits

0x5402,	// (0x00057a83) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x00061bf2) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x00061bf2) listscroll_popup_colour_pane_g

0xf1b3,	// (0x00061834) scroll_pane_cp6_ParamLimits

0xf1b3,	// (0x00061834) scroll_pane_cp6

0x5416,	// (0x00057a97) cell_large_graphic_colour_popup_pane_ParamLimits

0x5416,	// (0x00057a97) cell_large_graphic_colour_popup_pane

0xf1c5,	// (0x00061846) cell_large_graphic_colour_none_popup_pane_t1

0xb694,	// (0x0005dd15) grid_highlight_pane_cp5

0xf1d4,	// (0x00061855) cell_large_graphic_colour_popup_pane_g1

0xf1dc,	// (0x0006185d) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x00061bfb) cell_large_graphic_colour_popup_pane_g

0xf1e4,	// (0x00061865) cell_large_graphic_colour_popup_pane_g2_copy1

0xf1ed,	// (0x0006186e) grid_highlight_pane_cp4

0xf1f5,	// (0x00061876) bg_popup_window_pane_cp8_ParamLimits

0xf1f5,	// (0x00061876) bg_popup_window_pane_cp8

0xf210,	// (0x00061891) popup_snote_single_text_window_g1_ParamLimits

0xf210,	// (0x00061891) popup_snote_single_text_window_g1

0xf222,	// (0x000618a3) popup_snote_single_text_window_t1_ParamLimits

0xf222,	// (0x000618a3) popup_snote_single_text_window_t1

0xf235,	// (0x000618b6) popup_snote_single_text_window_t2_ParamLimits

0xf235,	// (0x000618b6) popup_snote_single_text_window_t2

0xf248,	// (0x000618c9) popup_snote_single_text_window_t3_ParamLimits

0xf248,	// (0x000618c9) popup_snote_single_text_window_t3

0xf281,	// (0x00061902) popup_snote_single_text_window_t4_ParamLimits

0xf281,	// (0x00061902) popup_snote_single_text_window_t4

0xf2b5,	// (0x00061936) popup_snote_single_text_window_t5_ParamLimits

0xf2b5,	// (0x00061936) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x00061c00) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x00061c00) popup_snote_single_text_window_t

0xf2e4,	// (0x00061965) bg_popup_window_pane_cp9_ParamLimits

0xf2e4,	// (0x00061965) bg_popup_window_pane_cp9

0xf210,	// (0x00061891) popup_snote_single_graphic_window_g1_ParamLimits

0xf210,	// (0x00061891) popup_snote_single_graphic_window_g1

0xf2f2,	// (0x00061973) popup_snote_single_graphic_window_g2_ParamLimits

0xf2f2,	// (0x00061973) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x00061c0b) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x00061c0b) popup_snote_single_graphic_window_g

0xf2fe,	// (0x0006197f) popup_snote_single_graphic_window_t1_ParamLimits

0xf2fe,	// (0x0006197f) popup_snote_single_graphic_window_t1

0xf311,	// (0x00061992) popup_snote_single_graphic_window_t2_ParamLimits

0xf311,	// (0x00061992) popup_snote_single_graphic_window_t2

0xf324,	// (0x000619a5) popup_snote_single_graphic_window_t3_ParamLimits

0xf324,	// (0x000619a5) popup_snote_single_graphic_window_t3

0xf35d,	// (0x000619de) popup_snote_single_graphic_window_t4_ParamLimits

0xf35d,	// (0x000619de) popup_snote_single_graphic_window_t4

0xf391,	// (0x00061a12) popup_snote_single_graphic_window_t5_ParamLimits

0xf391,	// (0x00061a12) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x00061c10) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x00061c10) popup_snote_single_graphic_window_t

0xa96f,	// (0x0005cff0) grid_graphic_popup_pane_ParamLimits

0xa96f,	// (0x0005cff0) grid_graphic_popup_pane

0xa99d,	// (0x0005d01e) listscroll_popup_graphic_pane_g1_ParamLimits

0xa99d,	// (0x0005d01e) listscroll_popup_graphic_pane_g1

0xa9b1,	// (0x0005d032) listscroll_popup_graphic_pane_g2_ParamLimits

0xa9b1,	// (0x0005d032) listscroll_popup_graphic_pane_g2

0x0001,

0xf98e,	// (0x0006200f) listscroll_popup_graphic_pane_g_ParamLimits

0xf98e,	// (0x0006200f) listscroll_popup_graphic_pane_g

0xa9c5,	// (0x0005d046) scroll_pane_cp5

0xa8fe,	// (0x0005cf7f) cell_graphic_popup_pane_ParamLimits

0xa8fe,	// (0x0005cf7f) cell_graphic_popup_pane

0xa8df,	// (0x0005cf60) cell_graphic_popup_pane_g1

0xa8e7,	// (0x0005cf68) cell_graphic_popup_pane_g2

0xf1e4,	// (0x00061865) cell_graphic_popup_pane_g3

0x0002,

0xf987,	// (0x00062008) cell_graphic_popup_pane_g

0xa8f0,	// (0x0005cf71) cell_graphic_popup_pane_t2

0xf1ed,	// (0x0006186e) grid_highlight_pane_cp3

0xf3d2,	// (0x00061a53) list_gen_pane_ParamLimits

0xf3d2,	// (0x00061a53) list_gen_pane

0xf3fa,	// (0x00061a7b) scroll_pane

0xa837,	// (0x0005ceb8) bg_list_pane_g1_ParamLimits

0xa837,	// (0x0005ceb8) bg_list_pane_g1

0xa854,	// (0x0005ced5) bg_list_pane_g2_ParamLimits

0xa854,	// (0x0005ced5) bg_list_pane_g2

0xa869,	// (0x0005ceea) bg_list_pane_g3_ParamLimits

0xa869,	// (0x0005ceea) bg_list_pane_g3

0xa87d,	// (0x0005cefe) bg_list_pane_g4_ParamLimits

0xa87d,	// (0x0005cefe) bg_list_pane_g4

0xa891,	// (0x0005cf12) bg_list_pane_g5_ParamLimits

0xa891,	// (0x0005cf12) bg_list_pane_g5

0x0004,

0xf97c,	// (0x00061ffd) bg_list_pane_g_ParamLimits

0xf97c,	// (0x00061ffd) bg_list_pane_g

0xa7cf,	// (0x0005ce50) list_double2_graphic_large_graphic_pane_ParamLimits

0xa7cf,	// (0x0005ce50) list_double2_graphic_large_graphic_pane

0xa7cf,	// (0x0005ce50) list_double2_graphic_pane_ParamLimits

0xa7cf,	// (0x0005ce50) list_double2_graphic_pane

0xa7cf,	// (0x0005ce50) list_double2_large_graphic_pane_ParamLimits

0xa7cf,	// (0x0005ce50) list_double2_large_graphic_pane

0x6d29,	// (0x000593aa) list_double2_pane_ParamLimits

0x6d29,	// (0x000593aa) list_double2_pane

0xa7cf,	// (0x0005ce50) list_double_graphic_heading_pane_ParamLimits

0xa7cf,	// (0x0005ce50) list_double_graphic_heading_pane

0xa7cf,	// (0x0005ce50) list_double_graphic_pane_ParamLimits

0xa7cf,	// (0x0005ce50) list_double_graphic_pane

0xa7cf,	// (0x0005ce50) list_double_heading_pane_ParamLimits

0xa7cf,	// (0x0005ce50) list_double_heading_pane

0xa7cf,	// (0x0005ce50) list_double_large_graphic_pane_ParamLimits

0xa7cf,	// (0x0005ce50) list_double_large_graphic_pane

0xa7cf,	// (0x0005ce50) list_double_number_pane_ParamLimits

0xa7cf,	// (0x0005ce50) list_double_number_pane

0xa7cf,	// (0x0005ce50) list_double_pane_ParamLimits

0xa7cf,	// (0x0005ce50) list_double_pane

0xa7cf,	// (0x0005ce50) list_double_time_pane_ParamLimits

0xa7cf,	// (0x0005ce50) list_double_time_pane

0xa7cf,	// (0x0005ce50) list_setting_number_pane_ParamLimits

0xa7cf,	// (0x0005ce50) list_setting_number_pane

0xa7cf,	// (0x0005ce50) list_setting_pane_ParamLimits

0xa7cf,	// (0x0005ce50) list_setting_pane

0x9a06,	// (0x0005c087) list_single_2graphic_pane_ParamLimits

0x9a06,	// (0x0005c087) list_single_2graphic_pane

0x9a06,	// (0x0005c087) list_single_graphic_heading_pane_ParamLimits

0x9a06,	// (0x0005c087) list_single_graphic_heading_pane

0x9a06,	// (0x0005c087) list_single_graphic_pane_ParamLimits

0x9a06,	// (0x0005c087) list_single_graphic_pane

0x9a06,	// (0x0005c087) list_single_heading_pane_ParamLimits

0x9a06,	// (0x0005c087) list_single_heading_pane

0xa81c,	// (0x0005ce9d) list_single_large_graphic_pane_ParamLimits

0xa81c,	// (0x0005ce9d) list_single_large_graphic_pane

0x9a06,	// (0x0005c087) list_single_number_heading_pane_ParamLimits

0x9a06,	// (0x0005c087) list_single_number_heading_pane

0x9a06,	// (0x0005c087) list_single_number_pane_ParamLimits

0x9a06,	// (0x0005c087) list_single_number_pane

0x9a06,	// (0x0005c087) list_single_pane_ParamLimits

0x9a06,	// (0x0005c087) list_single_pane

0xb694,	// (0x0005dd15) list_highlight_pane_cp1

0x544d,	// (0x00057ace) list_single_pane_g1_ParamLimits

0x544d,	// (0x00057ace) list_single_pane_g1

0x5459,	// (0x00057ada) list_single_pane_g2_ParamLimits

0x5459,	// (0x00057ada) list_single_pane_g2

0x0001,

0xf5ab,	// (0x00061c2c) list_single_pane_g_ParamLimits

0xf5ab,	// (0x00061c2c) list_single_pane_g

0x6d13,	// (0x00059394) list_single_pane_t1_ParamLimits

0x6d13,	// (0x00059394) list_single_pane_t1

0x544d,	// (0x00057ace) list_single_number_pane_g1_ParamLimits

0x544d,	// (0x00057ace) list_single_number_pane_g1

0x5459,	// (0x00057ada) list_single_number_pane_g2_ParamLimits

0x5459,	// (0x00057ada) list_single_number_pane_g2

0x0001,

0xf5ab,	// (0x00061c2c) list_single_number_pane_g_ParamLimits

0xf5ab,	// (0x00061c2c) list_single_number_pane_g

0x6c3d,	// (0x000592be) list_single_number_pane_t1_ParamLimits

0x6c3d,	// (0x000592be) list_single_number_pane_t1

0x6c53,	// (0x000592d4) list_single_number_pane_t2_ParamLimits

0x6c53,	// (0x000592d4) list_single_number_pane_t2

0x0001,

0xf93d,	// (0x00061fbe) list_single_number_pane_t_ParamLimits

0xf93d,	// (0x00061fbe) list_single_number_pane_t

0x5441,	// (0x00057ac2) list_single_graphic_pane_g1_ParamLimits

0x5441,	// (0x00057ac2) list_single_graphic_pane_g1

0x544d,	// (0x00057ace) list_single_graphic_pane_g2_ParamLimits

0x544d,	// (0x00057ace) list_single_graphic_pane_g2

0x5459,	// (0x00057ada) list_single_graphic_pane_g3_ParamLimits

0x5459,	// (0x00057ada) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x00061c1b) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x00061c1b) list_single_graphic_pane_g

0x5465,	// (0x00057ae6) list_single_graphic_pane_t1_ParamLimits

0x5465,	// (0x00057ae6) list_single_graphic_pane_t1

0x547b,	// (0x00057afc) list_single_heading_pane_g1_ParamLimits

0x547b,	// (0x00057afc) list_single_heading_pane_g1

0x5459,	// (0x00057ada) list_single_heading_pane_g2_ParamLimits

0x5459,	// (0x00057ada) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x00061c22) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x00061c22) list_single_heading_pane_g

0x548e,	// (0x00057b0f) list_single_heading_pane_t1_ParamLimits

0x548e,	// (0x00057b0f) list_single_heading_pane_t1

0x54a4,	// (0x00057b25) list_single_heading_pane_t2_ParamLimits

0x54a4,	// (0x00057b25) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x00061c27) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x00061c27) list_single_heading_pane_t

0x544d,	// (0x00057ace) list_single_number_heading_pane_g1_ParamLimits

0x544d,	// (0x00057ace) list_single_number_heading_pane_g1

0x5459,	// (0x00057ada) list_single_number_heading_pane_g2_ParamLimits

0x5459,	// (0x00057ada) list_single_number_heading_pane_g2

0x0001,

0xf5ab,	// (0x00061c2c) list_single_number_heading_pane_g_ParamLimits

0xf5ab,	// (0x00061c2c) list_single_number_heading_pane_g

0x54b6,	// (0x00057b37) list_single_number_heading_pane_t1_ParamLimits

0x54b6,	// (0x00057b37) list_single_number_heading_pane_t1

0x54cc,	// (0x00057b4d) list_single_number_heading_pane_t2_ParamLimits

0x54cc,	// (0x00057b4d) list_single_number_heading_pane_t2

0x54de,	// (0x00057b5f) list_single_number_heading_pane_t3_ParamLimits

0x54de,	// (0x00057b5f) list_single_number_heading_pane_t3

0x0002,

0xf5b0,	// (0x00061c31) list_single_number_heading_pane_t_ParamLimits

0xf5b0,	// (0x00061c31) list_single_number_heading_pane_t

0x54f0,	// (0x00057b71) list_single_graphic_heading_pane_g1_ParamLimits

0x54f0,	// (0x00057b71) list_single_graphic_heading_pane_g1

0x54fc,	// (0x00057b7d) list_single_graphic_heading_pane_g4_ParamLimits

0x54fc,	// (0x00057b7d) list_single_graphic_heading_pane_g4

0x5459,	// (0x00057ada) list_single_graphic_heading_pane_g5_ParamLimits

0x5459,	// (0x00057ada) list_single_graphic_heading_pane_g5

0x0002,

0xf5b7,	// (0x00061c38) list_single_graphic_heading_pane_g_ParamLimits

0xf5b7,	// (0x00061c38) list_single_graphic_heading_pane_g

0x54b6,	// (0x00057b37) list_single_graphic_heading_pane_t1_ParamLimits

0x54b6,	// (0x00057b37) list_single_graphic_heading_pane_t1

0x550d,	// (0x00057b8e) list_single_graphic_heading_pane_t2_ParamLimits

0x550d,	// (0x00057b8e) list_single_graphic_heading_pane_t2

0x0001,

0xf5be,	// (0x00061c3f) list_single_graphic_heading_pane_t_ParamLimits

0xf5be,	// (0x00061c3f) list_single_graphic_heading_pane_t

0x551f,	// (0x00057ba0) list_single_large_graphic_pane_g1_ParamLimits

0x551f,	// (0x00057ba0) list_single_large_graphic_pane_g1

0x544d,	// (0x00057ace) list_single_large_graphic_pane_g2_ParamLimits

0x544d,	// (0x00057ace) list_single_large_graphic_pane_g2

0x5459,	// (0x00057ada) list_single_large_graphic_pane_g3_ParamLimits

0x5459,	// (0x00057ada) list_single_large_graphic_pane_g3

0x0002,

0xf5c3,	// (0x00061c44) list_single_large_graphic_pane_g_ParamLimits

0xf5c3,	// (0x00061c44) list_single_large_graphic_pane_g

0x9635,	// (0x0005bcb6) wait_border_pane_g2_copy1

0x552b,	// (0x00057bac) list_single_large_graphic_pane_g4_cp2

0x5533,	// (0x00057bb4) list_single_large_graphic_pane_t1_ParamLimits

0x5533,	// (0x00057bb4) list_single_large_graphic_pane_t1

0x8143,	// (0x0005a7c4) list_double_pane_g1_ParamLimits

0x8143,	// (0x0005a7c4) list_double_pane_g1

0x5549,	// (0x00057bca) list_double_pane_g2_ParamLimits

0x5549,	// (0x00057bca) list_double_pane_g2

0x0001,

0xf5ca,	// (0x00061c4b) list_double_pane_g_ParamLimits

0xf5ca,	// (0x00061c4b) list_double_pane_g

0x5555,	// (0x00057bd6) list_double_pane_t1_ParamLimits

0x5555,	// (0x00057bd6) list_double_pane_t1

0x556b,	// (0x00057bec) list_double_pane_t2_ParamLimits

0x556b,	// (0x00057bec) list_double_pane_t2

0x0001,

0xf5cf,	// (0x00061c50) list_double_pane_t_ParamLimits

0xf5cf,	// (0x00061c50) list_double_pane_t

0x557d,	// (0x00057bfe) list_double2_pane_g1_ParamLimits

0x557d,	// (0x00057bfe) list_double2_pane_g1

0x558e,	// (0x00057c0f) list_double2_pane_g2_ParamLimits

0x558e,	// (0x00057c0f) list_double2_pane_g2

0x0001,

0xf5d4,	// (0x00061c55) list_double2_pane_g_ParamLimits

0xf5d4,	// (0x00061c55) list_double2_pane_g

0x559a,	// (0x00057c1b) list_double2_pane_t1_ParamLimits

0x559a,	// (0x00057c1b) list_double2_pane_t1

0x55b0,	// (0x00057c31) list_double2_pane_t2_ParamLimits

0x55b0,	// (0x00057c31) list_double2_pane_t2

0x0001,

0xf5d9,	// (0x00061c5a) list_double2_pane_t_ParamLimits

0xf5d9,	// (0x00061c5a) list_double2_pane_t

0x8143,	// (0x0005a7c4) list_double_number_pane_g1_ParamLimits

0x8143,	// (0x0005a7c4) list_double_number_pane_g1

0x5549,	// (0x00057bca) list_double_number_pane_g2_ParamLimits

0x5549,	// (0x00057bca) list_double_number_pane_g2

0x0001,

0xf5ca,	// (0x00061c4b) list_double_number_pane_g_ParamLimits

0xf5ca,	// (0x00061c4b) list_double_number_pane_g

0x55c2,	// (0x00057c43) list_double_number_pane_t1_ParamLimits

0x55c2,	// (0x00057c43) list_double_number_pane_t1

0x55d4,	// (0x00057c55) list_double_number_pane_t2_ParamLimits

0x55d4,	// (0x00057c55) list_double_number_pane_t2

0x55ea,	// (0x00057c6b) list_double_number_pane_t3_ParamLimits

0x55ea,	// (0x00057c6b) list_double_number_pane_t3

0x0002,

0xf5de,	// (0x00061c5f) list_double_number_pane_t_ParamLimits

0xf5de,	// (0x00061c5f) list_double_number_pane_t

0x55fc,	// (0x00057c7d) list_double_graphic_pane_g1_ParamLimits

0x55fc,	// (0x00057c7d) list_double_graphic_pane_g1

0x5608,	// (0x00057c89) list_double_graphic_pane_g2_ParamLimits

0x5608,	// (0x00057c89) list_double_graphic_pane_g2

0x5617,	// (0x00057c98) list_double_graphic_pane_g3_ParamLimits

0x5617,	// (0x00057c98) list_double_graphic_pane_g3

0x0003,

0xf5e5,	// (0x00061c66) list_double_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00061c66) list_double_graphic_pane_g

0x562f,	// (0x00057cb0) list_double_graphic_pane_t1_ParamLimits

0x562f,	// (0x00057cb0) list_double_graphic_pane_t1

0x5645,	// (0x00057cc6) list_double_graphic_pane_t2_ParamLimits

0x5645,	// (0x00057cc6) list_double_graphic_pane_t2

0x0001,

0xf5ee,	// (0x00061c6f) list_double_graphic_pane_t_ParamLimits

0xf5ee,	// (0x00061c6f) list_double_graphic_pane_t

0x5657,	// (0x00057cd8) list_double2_graphic_pane_g1_ParamLimits

0x5657,	// (0x00057cd8) list_double2_graphic_pane_g1

0x5663,	// (0x00057ce4) list_double2_graphic_pane_g2_ParamLimits

0x5663,	// (0x00057ce4) list_double2_graphic_pane_g2

0x566f,	// (0x00057cf0) list_double2_graphic_pane_g3_ParamLimits

0x566f,	// (0x00057cf0) list_double2_graphic_pane_g3

0x0002,

0xf5f3,	// (0x00061c74) list_double2_graphic_pane_g_ParamLimits

0xf5f3,	// (0x00061c74) list_double2_graphic_pane_g

0x567b,	// (0x00057cfc) list_double2_graphic_pane_t1_ParamLimits

0x567b,	// (0x00057cfc) list_double2_graphic_pane_t1

0x5691,	// (0x00057d12) list_double2_graphic_pane_t2_ParamLimits

0x5691,	// (0x00057d12) list_double2_graphic_pane_t2

0x0001,

0xf5fa,	// (0x00061c7b) list_double2_graphic_pane_t_ParamLimits

0xf5fa,	// (0x00061c7b) list_double2_graphic_pane_t

0x56a3,	// (0x00057d24) list_double_large_graphic_pane_g1_ParamLimits

0x56a3,	// (0x00057d24) list_double_large_graphic_pane_g1

0x56c2,	// (0x00057d43) list_double_large_graphic_pane_g2_ParamLimits

0x56c2,	// (0x00057d43) list_double_large_graphic_pane_g2

0x5549,	// (0x00057bca) list_double_large_graphic_pane_g3_ParamLimits

0x5549,	// (0x00057bca) list_double_large_graphic_pane_g3

0x56d8,	// (0x00057d59) list_double_large_graphic_pane_g4_ParamLimits

0x56d8,	// (0x00057d59) list_double_large_graphic_pane_g4

0x0004,

0xf5ff,	// (0x00061c80) list_double_large_graphic_pane_g_ParamLimits

0xf5ff,	// (0x00061c80) list_double_large_graphic_pane_g

0x5700,	// (0x00057d81) list_double_large_graphic_pane_t1_ParamLimits

0x5700,	// (0x00057d81) list_double_large_graphic_pane_t1

0x5719,	// (0x00057d9a) list_double_large_graphic_pane_t2_ParamLimits

0x5719,	// (0x00057d9a) list_double_large_graphic_pane_t2

0x0001,

0xf60a,	// (0x00061c8b) list_double_large_graphic_pane_t_ParamLimits

0xf60a,	// (0x00061c8b) list_double_large_graphic_pane_t

0x572b,	// (0x00057dac) list_double2_large_graphic_pane_g1_ParamLimits

0x572b,	// (0x00057dac) list_double2_large_graphic_pane_g1

0x5737,	// (0x00057db8) list_double2_large_graphic_pane_g2_ParamLimits

0x5737,	// (0x00057db8) list_double2_large_graphic_pane_g2

0x566f,	// (0x00057cf0) list_double2_large_graphic_pane_g3_ParamLimits

0x566f,	// (0x00057cf0) list_double2_large_graphic_pane_g3

0x0002,

0xf60f,	// (0x00061c90) list_double2_large_graphic_pane_g_ParamLimits

0xf60f,	// (0x00061c90) list_double2_large_graphic_pane_g

0x5748,	// (0x00057dc9) list_double2_large_graphic_pane_t1_ParamLimits

0x5748,	// (0x00057dc9) list_double2_large_graphic_pane_t1

0x575e,	// (0x00057ddf) list_double2_large_graphic_pane_t2_ParamLimits

0x575e,	// (0x00057ddf) list_double2_large_graphic_pane_t2

0x0001,

0xf616,	// (0x00061c97) list_double2_large_graphic_pane_t_ParamLimits

0xf616,	// (0x00061c97) list_double2_large_graphic_pane_t

0x5770,	// (0x00057df1) list_double_heading_pane_g1_ParamLimits

0x5770,	// (0x00057df1) list_double_heading_pane_g1

0x5781,	// (0x00057e02) list_double_heading_pane_g2_ParamLimits

0x5781,	// (0x00057e02) list_double_heading_pane_g2

0x0001,

0xf61b,	// (0x00061c9c) list_double_heading_pane_g_ParamLimits

0xf61b,	// (0x00061c9c) list_double_heading_pane_g

0x578d,	// (0x00057e0e) list_double_heading_pane_t1_ParamLimits

0x578d,	// (0x00057e0e) list_double_heading_pane_t1

0x57a3,	// (0x00057e24) list_double_heading_pane_t2_ParamLimits

0x57a3,	// (0x00057e24) list_double_heading_pane_t2

0x0001,

0xf620,	// (0x00061ca1) list_double_heading_pane_t_ParamLimits

0xf620,	// (0x00061ca1) list_double_heading_pane_t

0x57b5,	// (0x00057e36) list_double_graphic_heading_pane_g1_ParamLimits

0x57b5,	// (0x00057e36) list_double_graphic_heading_pane_g1

0x5770,	// (0x00057df1) list_double_graphic_heading_pane_g2_ParamLimits

0x5770,	// (0x00057df1) list_double_graphic_heading_pane_g2

0x5781,	// (0x00057e02) list_double_graphic_heading_pane_g3_ParamLimits

0x5781,	// (0x00057e02) list_double_graphic_heading_pane_g3

0x0002,

0xf625,	// (0x00061ca6) list_double_graphic_heading_pane_g_ParamLimits

0xf625,	// (0x00061ca6) list_double_graphic_heading_pane_g

0x57c1,	// (0x00057e42) list_double_graphic_heading_pane_t1_ParamLimits

0x57c1,	// (0x00057e42) list_double_graphic_heading_pane_t1

0x57d7,	// (0x00057e58) list_double_graphic_heading_pane_t2_ParamLimits

0x57d7,	// (0x00057e58) list_double_graphic_heading_pane_t2

0x0001,

0xf62c,	// (0x00061cad) list_double_graphic_heading_pane_t_ParamLimits

0xf62c,	// (0x00061cad) list_double_graphic_heading_pane_t

0x57e9,	// (0x00057e6a) list_double_time_pane_g1_ParamLimits

0x57e9,	// (0x00057e6a) list_double_time_pane_g1

0x57fa,	// (0x00057e7b) list_double_time_pane_g2_ParamLimits

0x57fa,	// (0x00057e7b) list_double_time_pane_g2

0x0001,

0xf631,	// (0x00061cb2) list_double_time_pane_g_ParamLimits

0xf631,	// (0x00061cb2) list_double_time_pane_g

0x5806,	// (0x00057e87) list_double_time_pane_t1_ParamLimits

0x5806,	// (0x00057e87) list_double_time_pane_t1

0x581c,	// (0x00057e9d) list_double_time_pane_t2_ParamLimits

0x581c,	// (0x00057e9d) list_double_time_pane_t2

0x582e,	// (0x00057eaf) list_double_time_pane_t3_ParamLimits

0x582e,	// (0x00057eaf) list_double_time_pane_t3

0x5840,	// (0x00057ec1) list_double_time_pane_t4_ParamLimits

0x5840,	// (0x00057ec1) list_double_time_pane_t4

0x0003,

0xf636,	// (0x00061cb7) list_double_time_pane_t_ParamLimits

0xf636,	// (0x00061cb7) list_double_time_pane_t

0x5852,	// (0x00057ed3) list_setting_pane_g1_ParamLimits

0x5852,	// (0x00057ed3) list_setting_pane_g1

0x585e,	// (0x00057edf) list_setting_pane_g2_ParamLimits

0x585e,	// (0x00057edf) list_setting_pane_g2

0x0001,

0xf63f,	// (0x00061cc0) list_setting_pane_g_ParamLimits

0xf63f,	// (0x00061cc0) list_setting_pane_g

0x586a,	// (0x00057eeb) list_setting_pane_t1_ParamLimits

0x586a,	// (0x00057eeb) list_setting_pane_t1

0x5884,	// (0x00057f05) list_setting_pane_t2_ParamLimits

0x5884,	// (0x00057f05) list_setting_pane_t2

0x0002,

0xf644,	// (0x00061cc5) list_setting_pane_t_ParamLimits

0xf644,	// (0x00061cc5) list_setting_pane_t

0x58c3,	// (0x00057f44) set_value_pane_cp_ParamLimits

0x58c3,	// (0x00057f44) set_value_pane_cp

0x58d1,	// (0x00057f52) list_setting_number_pane_g1_ParamLimits

0x58d1,	// (0x00057f52) list_setting_number_pane_g1

0x58dd,	// (0x00057f5e) list_setting_number_pane_g2_ParamLimits

0x58dd,	// (0x00057f5e) list_setting_number_pane_g2

0x0001,

0xf64b,	// (0x00061ccc) list_setting_number_pane_g_ParamLimits

0xf64b,	// (0x00061ccc) list_setting_number_pane_g

0x58e9,	// (0x00057f6a) list_setting_number_pane_t1_ParamLimits

0x58e9,	// (0x00057f6a) list_setting_number_pane_t1

0x5902,	// (0x00057f83) list_setting_number_pane_t2_ParamLimits

0x5902,	// (0x00057f83) list_setting_number_pane_t2

0x591c,	// (0x00057f9d) list_setting_number_pane_t3_ParamLimits

0x591c,	// (0x00057f9d) list_setting_number_pane_t3

0x0003,

0xf650,	// (0x00061cd1) list_setting_number_pane_t_ParamLimits

0xf650,	// (0x00061cd1) list_setting_number_pane_t

0x58c3,	// (0x00057f44) set_value_pane_ParamLimits

0x58c3,	// (0x00057f44) set_value_pane

0xf42e,	// (0x00061aaf) bg_set_opt_pane_ParamLimits

0xf42e,	// (0x00061aaf) bg_set_opt_pane

0x318c,	// (0x0005580d) set_value_pane_t1

0xf44f,	// (0x00061ad0) slider_set_pane_cp3

0xf458,	// (0x00061ad9) volume_small_pane_cp

0xf461,	// (0x00061ae2) list_form_gen_pane

0xf46a,	// (0x00061aeb) scroll_pane_cp8

0x595f,	// (0x00057fe0) form_field_data_pane_ParamLimits

0x595f,	// (0x00057fe0) form_field_data_pane

0x597f,	// (0x00058000) form_field_data_wide_pane_ParamLimits

0x597f,	// (0x00058000) form_field_data_wide_pane

0x59a6,	// (0x00058027) form_field_popup_pane_ParamLimits

0x59a6,	// (0x00058027) form_field_popup_pane

0x31aa,	// (0x0005582b) form_field_popup_wide_pane_ParamLimits

0x31aa,	// (0x0005582b) form_field_popup_wide_pane

0x31cb,	// (0x0005584c) form_field_slider_pane_ParamLimits

0x31cb,	// (0x0005584c) form_field_slider_pane

0x3959,	// (0x00055fda) form_field_slider_wide_pane_ParamLimits

0x3959,	// (0x00055fda) form_field_slider_wide_pane

0xf47b,	// (0x00061afc) data_form_pane

0x59d2,	// (0x00058053) form_field_data_pane_t1

0xf487,	// (0x00061b08) input_focus_pane

0x396c,	// (0x00055fed) data_form_wide_pane

0x3989,	// (0x0005600a) form_field_data_wide_pane_t1

0xf202,	// (0x00061883) input_focus_pane_cp6

0x59ec,	// (0x0005806d) form_field_popup_pane_t1

0xf487,	// (0x00061b08) input_focus_pane_cp7

0xf4b5,	// (0x00061b36) list_form_pane

0x39b3,	// (0x00056034) form_field_popup_wide_pane_t1

0xf487,	// (0x00061b08) input_focus_pane_cp8

0xf4c1,	// (0x00061b42) list_form_wide_pane

0x5a0e,	// (0x0005808f) form_field_slider_pane_t1_ParamLimits

0x5a0e,	// (0x0005808f) form_field_slider_pane_t1

0x5a26,	// (0x000580a7) form_field_slider_pane_t2_ParamLimits

0x5a26,	// (0x000580a7) form_field_slider_pane_t2

0x0001,

0xf660,	// (0x00061ce1) form_field_slider_pane_t_ParamLimits

0xf660,	// (0x00061ce1) form_field_slider_pane_t

0xb71e,	// (0x0005dd9f) input_focus_pane_cp9_ParamLimits

0xb71e,	// (0x0005dd9f) input_focus_pane_cp9

0x5a3b,	// (0x000580bc) slider_cont_pane_ParamLimits

0x5a3b,	// (0x000580bc) slider_cont_pane

0xf4cd,	// (0x00061b4e) form_field_slider_wide_pane_t1_ParamLimits

0xf4cd,	// (0x00061b4e) form_field_slider_wide_pane_t1

0x39c8,	// (0x00056049) form_field_slider_wide_pane_t2_ParamLimits

0x39c8,	// (0x00056049) form_field_slider_wide_pane_t2

0x0001,

0xf665,	// (0x00061ce6) form_field_slider_wide_pane_t_ParamLimits

0xf665,	// (0x00061ce6) form_field_slider_wide_pane_t

0xb71e,	// (0x0005dd9f) input_focus_pane_cp10_ParamLimits

0xb71e,	// (0x0005dd9f) input_focus_pane_cp10

0x5a4f,	// (0x000580d0) slider_cont_pane_cp1_ParamLimits

0x5a4f,	// (0x000580d0) slider_cont_pane_cp1

0x5a63,	// (0x000580e4) slider_form_pane_cp

0xf4df,	// (0x00061b60) input_focus_pane_g1

0xf4e7,	// (0x00061b68) input_focus_pane_g2

0xf4ef,	// (0x00061b70) input_focus_pane_g3

0xf4f7,	// (0x00061b78) input_focus_pane_g4

0xf4ff,	// (0x00061b80) input_focus_pane_g5

0xf507,	// (0x00061b88) input_focus_pane_g6

0xf50f,	// (0x00061b90) input_focus_pane_g7

0xf517,	// (0x00061b98) input_focus_pane_g8

0xf51f,	// (0x00061ba0) input_focus_pane_g9

0xb68a,	// (0x0005dd0b) input_focus_pane_g10

0x0009,

0xf66a,	// (0x00061ceb) input_focus_pane_g

0x963e,	// (0x0005bcbf) wait_border_pane_g3_copy1

0x5a6b,	// (0x000580ec) data_form_pane_t1

0xb68a,	// (0x0005dd0b) wait_anim_pane_g1_copy1

0x6cdd,	// (0x0005935e) data_form_wide_pane_t1

0x39da,	// (0x0005605b) list_form_graphic_pane_cp_ParamLimits

0x39da,	// (0x0005605b) list_form_graphic_pane_cp

0xa773,	// (0x0005cdf4) slider_form_pane_g1

0xa77c,	// (0x0005cdfd) slider_form_pane_g2

0x0006,

0xf96d,	// (0x00061fee) slider_form_pane_g

0x39da,	// (0x0005605b) list_form_graphic_pane_ParamLimits

0x39da,	// (0x0005605b) list_form_graphic_pane

0x39ec,	// (0x0005606d) list_form_graphic_pane_g1

0x39f4,	// (0x00056075) list_form_graphic_pane_t1_ParamLimits

0x39f4,	// (0x00056075) list_form_graphic_pane_t1

0xb6e2,	// (0x0005dd63) list_highlight_pane_cp5_ParamLimits

0xb6e2,	// (0x0005dd63) list_highlight_pane_cp5

0x5a8a,	// (0x0005810b) find_pane_g1

0x31de,	// (0x0005585f) input_find_pane

0x5a93,	// (0x00058114) input_find_pane_g1_ParamLimits

0x5a93,	// (0x00058114) input_find_pane_g1

0x5a9f,	// (0x00058120) input_find_pane_t1_ParamLimits

0x5a9f,	// (0x00058120) input_find_pane_t1

0x5ab4,	// (0x00058135) input_find_pane_t2_ParamLimits

0x5ab4,	// (0x00058135) input_find_pane_t2

0x0001,

0xf67f,	// (0x00061d00) input_find_pane_t_ParamLimits

0xf67f,	// (0x00061d00) input_find_pane_t

0x31e7,	// (0x00055868) input_focus_pane_cp5_ParamLimits

0x31e7,	// (0x00055868) input_focus_pane_cp5

0x31fa,	// (0x0005587b) bg_popup_window_pane_cp2_ParamLimits

0x31fa,	// (0x0005587b) bg_popup_window_pane_cp2

0x3207,	// (0x00055888) listscroll_menu_pane_ParamLimits

0x3207,	// (0x00055888) listscroll_menu_pane

0x5ad5,	// (0x00058156) popup_submenu_window_ParamLimits

0x5ad5,	// (0x00058156) popup_submenu_window

0x3213,	// (0x00055894) find_popup_pane_g1

0x321b,	// (0x0005589c) input_popup_find_pane_cp

0x3225,	// (0x000558a6) input_focus_pane_cp4_ParamLimits

0x3225,	// (0x000558a6) input_focus_pane_cp4

0x3233,	// (0x000558b4) input_popup_find_pane_t1_ParamLimits

0x3233,	// (0x000558b4) input_popup_find_pane_t1

0xb694,	// (0x0005dd15) bg_popup_sub_pane_cp

0x3261,	// (0x000558e2) listscroll_popup_sub_pane

0x3269,	// (0x000558ea) list_submenu_pane_ParamLimits

0x3269,	// (0x000558ea) list_submenu_pane

0x327a,	// (0x000558fb) scroll_pane_cp4

0x3282,	// (0x00055903) list_single_popup_submenu_pane_ParamLimits

0x3282,	// (0x00055903) list_single_popup_submenu_pane

0x3297,	// (0x00055918) list_single_popup_submenu_pane_g1

0x329f,	// (0x00055920) list_single_popup_submenu_pane_t1_ParamLimits

0x329f,	// (0x00055920) list_single_popup_submenu_pane_t1

0xb6e2,	// (0x0005dd63) bg_active_tab_pane_cp1_ParamLimits

0xb6e2,	// (0x0005dd63) bg_active_tab_pane_cp1

0x5b13,	// (0x00058194) tabs_2_active_pane_g1

0x5b1b,	// (0x0005819c) tabs_2_active_pane_t1

0xb6e2,	// (0x0005dd63) bg_passive_tab_pane_cp1_ParamLimits

0xb6e2,	// (0x0005dd63) bg_passive_tab_pane_cp1

0x5b13,	// (0x00058194) tabs_2_passive_pane_g1

0x5b1b,	// (0x0005819c) tabs_2_passive_pane_t1

0x5b2d,	// (0x000581ae) bg_active_tab_pane_cp4

0x5b3b,	// (0x000581bc) tabs_2_long_active_pane_t1

0x5b4e,	// (0x000581cf) bg_passive_tab_pane_cp4

0x6962,	// (0x00058fe3) list_single_midp_graphic_pane_g4_ParamLimits

0x5b2d,	// (0x000581ae) bg_active_tab_pane_cp5

0x5b5a,	// (0x000581db) tabs_3_long_active_pane_t1

0x5b4e,	// (0x000581cf) bg_passive_tab_pane_cp5

0x6962,	// (0x00058fe3) list_single_midp_graphic_pane_g4

0xb6e2,	// (0x0005dd63) bg_popup_window_pane_cp13_ParamLimits

0xb6e2,	// (0x0005dd63) bg_popup_window_pane_cp13

0x32bd,	// (0x0005593e) listscroll_popup_fast_pane_ParamLimits

0x32bd,	// (0x0005593e) listscroll_popup_fast_pane

0x32cc,	// (0x0005594d) grid_popup_fast_pane_ParamLimits

0x32cc,	// (0x0005594d) grid_popup_fast_pane

0x32de,	// (0x0005595f) scroll_pane_cp9_ParamLimits

0x32de,	// (0x0005595f) scroll_pane_cp9

0xc198,	// (0x0005e819) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc198,	// (0x0005e819) list_single_graphic_hl_pane_t1_cp2

0x3302,	// (0x00055983) input_focus_pane_cp20_ParamLimits

0x3302,	// (0x00055983) input_focus_pane_cp20

0x3310,	// (0x00055991) query_popup_data_pane_t1_ParamLimits

0x3310,	// (0x00055991) query_popup_data_pane_t1

0x3323,	// (0x000559a4) query_popup_data_pane_t2_ParamLimits

0x3323,	// (0x000559a4) query_popup_data_pane_t2

0x3369,	// (0x000559ea) query_popup_data_pane_t3_ParamLimits

0x3369,	// (0x000559ea) query_popup_data_pane_t3

0x33aa,	// (0x00055a2b) query_popup_data_pane_t4_ParamLimits

0x33aa,	// (0x00055a2b) query_popup_data_pane_t4

0x33e6,	// (0x00055a67) query_popup_data_pane_t5_ParamLimits

0x33e6,	// (0x00055a67) query_popup_data_pane_t5

0x0004,

0xf684,	// (0x00061d05) query_popup_data_pane_t_ParamLimits

0xf684,	// (0x00061d05) query_popup_data_pane_t

0xf4df,	// (0x00061b60) bg_set_opt_pane_g1

0xf4e7,	// (0x00061b68) bg_set_opt_pane_g2

0xf4ef,	// (0x00061b70) bg_set_opt_pane_g3

0xf4f7,	// (0x00061b78) bg_set_opt_pane_g4

0xf4ff,	// (0x00061b80) bg_set_opt_pane_g5

0xf507,	// (0x00061b88) bg_set_opt_pane_g6

0xf50f,	// (0x00061b90) bg_set_opt_pane_g7

0xf517,	// (0x00061b98) bg_set_opt_pane_g8

0xf51f,	// (0x00061ba0) bg_set_opt_pane_g9

0x0008,

0xf68f,	// (0x00061d10) bg_set_opt_pane_g

0x5f91,	// (0x00058612) control_top_pane_stacon_ParamLimits

0x5f91,	// (0x00058612) control_top_pane_stacon

0x5fe4,	// (0x00058665) signal_pane_stacon_ParamLimits

0x5fe4,	// (0x00058665) signal_pane_stacon

0x8444,	// (0x0005aac5) stacon_top_pane_g1_ParamLimits

0x8444,	// (0x0005aac5) stacon_top_pane_g1

0x6009,	// (0x0005868a) title_pane_stacon_ParamLimits

0x6009,	// (0x0005868a) title_pane_stacon

0x6033,	// (0x000586b4) uni_indicator_pane_stacon_ParamLimits

0x6033,	// (0x000586b4) uni_indicator_pane_stacon

0x6048,	// (0x000586c9) battery_pane_stacon_ParamLimits

0x6048,	// (0x000586c9) battery_pane_stacon

0x608c,	// (0x0005870d) control_bottom_pane_stacon_ParamLimits

0x608c,	// (0x0005870d) control_bottom_pane_stacon

0x60af,	// (0x00058730) navi_pane_stacon_ParamLimits

0x60af,	// (0x00058730) navi_pane_stacon

0x8466,	// (0x0005aae7) stacon_bottom_pane_g1_ParamLimits

0x8466,	// (0x0005aae7) stacon_bottom_pane_g1

0x5b6c,	// (0x000581ed) aid_levels_signal_lsc_ParamLimits

0x5b6c,	// (0x000581ed) aid_levels_signal_lsc

0x5b83,	// (0x00058204) signal_pane_stacon_g1_ParamLimits

0x5b83,	// (0x00058204) signal_pane_stacon_g1

0x5b97,	// (0x00058218) signal_pane_stacon_g2_ParamLimits

0x5b97,	// (0x00058218) signal_pane_stacon_g2

0x0001,

0xf6a2,	// (0x00061d23) signal_pane_stacon_g_ParamLimits

0xf6a2,	// (0x00061d23) signal_pane_stacon_g

0x5bcc,	// (0x0005824d) title_pane_stacon_t1_ParamLimits

0x5bcc,	// (0x0005824d) title_pane_stacon_t1

0x343e,	// (0x00055abf) uni_indicator_pane_stacon_g1

0x3448,	// (0x00055ac9) uni_indicator_pane_stacon_g2

0x342a,	// (0x00055aab) uni_indicator_pane_stacon_g3

0x3434,	// (0x00055ab5) uni_indicator_pane_stacon_g4

0x0003,

0xf6ae,	// (0x00061d2f) uni_indicator_pane_stacon_g

0x5bf1,	// (0x00058272) control_top_pane_stacon_g1

0x5bf9,	// (0x0005827a) control_top_pane_stacon_t1_ParamLimits

0x5bf9,	// (0x0005827a) control_top_pane_stacon_t1

0x5c30,	// (0x000582b1) aid_levels_battery_lsc_ParamLimits

0x5c30,	// (0x000582b1) aid_levels_battery_lsc

0x5c48,	// (0x000582c9) battery_pane_stacon_g1_ParamLimits

0x5c48,	// (0x000582c9) battery_pane_stacon_g1

0x5c5a,	// (0x000582db) battery_pane_stacon_g2_ParamLimits

0x5c5a,	// (0x000582db) battery_pane_stacon_g2

0x0001,

0xf6b7,	// (0x00061d38) battery_pane_stacon_g_ParamLimits

0xf6b7,	// (0x00061d38) battery_pane_stacon_g

0x5c98,	// (0x00058319) navi_icon_pane_stacon

0x5cac,	// (0x0005832d) navi_navi_pane_stacon

0x5c98,	// (0x00058319) navi_text_pane_stacon

0x5cc2,	// (0x00058343) control_bottom_pane_stacon_g1

0x5cca,	// (0x0005834b) control_bottom_pane_stacon_t1_ParamLimits

0x5cca,	// (0x0005834b) control_bottom_pane_stacon_t1

0x5d01,	// (0x00058382) grid_app_pane_ParamLimits

0x5d01,	// (0x00058382) grid_app_pane

0x5d23,	// (0x000583a4) scroll_pane_cp15_ParamLimits

0x5d23,	// (0x000583a4) scroll_pane_cp15

0x5d36,	// (0x000583b7) cell_app_pane_ParamLimits

0x5d36,	// (0x000583b7) cell_app_pane

0x5d62,	// (0x000583e3) cell_app_pane_g1_ParamLimits

0x5d62,	// (0x000583e3) cell_app_pane_g1

0x346c,	// (0x00055aed) cell_app_pane_g2_ParamLimits

0x346c,	// (0x00055aed) cell_app_pane_g2

0x0001,

0xf6bc,	// (0x00061d3d) cell_app_pane_g_ParamLimits

0xf6bc,	// (0x00061d3d) cell_app_pane_g

0x5d86,	// (0x00058407) cell_app_pane_t1_ParamLimits

0x5d86,	// (0x00058407) cell_app_pane_t1

0x3478,	// (0x00055af9) grid_highlight_pane_ParamLimits

0x3478,	// (0x00055af9) grid_highlight_pane

0xf4df,	// (0x00061b60) cell_highlight_pane_g1

0xf4e7,	// (0x00061b68) cell_highlight_pane_g2

0xf4ef,	// (0x00061b70) cell_highlight_pane_g3

0xf4f7,	// (0x00061b78) cell_highlight_pane_g4

0xf4ff,	// (0x00061b80) cell_highlight_pane_g5

0xf507,	// (0x00061b88) cell_highlight_pane_g6

0xf50f,	// (0x00061b90) cell_highlight_pane_g7

0xf517,	// (0x00061b98) cell_highlight_pane_g8

0xf51f,	// (0x00061ba0) cell_highlight_pane_g9

0xb68a,	// (0x0005dd0b) cell_highlight_pane_g10

0x0009,

0xf66a,	// (0x00061ceb) cell_highlight_pane_g

0x3489,	// (0x00055b0a) bg_scroll_pane

0x5dca,	// (0x0005844b) scroll_handle_pane

0x34d0,	// (0x00055b51) scroll_bg_pane_g1

0x34e5,	// (0x00055b66) scroll_bg_pane_g2

0x34fd,	// (0x00055b7e) scroll_bg_pane_g3

0x0002,

0xf6c1,	// (0x00061d42) scroll_bg_pane_g

0x3512,	// (0x00055b93) scroll_handle_focus_pane_ParamLimits

0x3512,	// (0x00055b93) scroll_handle_focus_pane

0x34d0,	// (0x00055b51) scroll_handle_pane_g1

0x351f,	// (0x00055ba0) scroll_handle_pane_g2

0x34fd,	// (0x00055b7e) scroll_handle_pane_g3

0x0002,

0xf6c8,	// (0x00061d49) scroll_handle_pane_g

0x3225,	// (0x000558a6) bg_popup_sub_pane_cp21_ParamLimits

0x3225,	// (0x000558a6) bg_popup_sub_pane_cp21

0x3533,	// (0x00055bb4) popup_fep_japan_predictive_window_t1_ParamLimits

0x3533,	// (0x00055bb4) popup_fep_japan_predictive_window_t1

0x354a,	// (0x00055bcb) popup_fep_japan_predictive_window_t2_ParamLimits

0x354a,	// (0x00055bcb) popup_fep_japan_predictive_window_t2

0x357d,	// (0x00055bfe) popup_fep_japan_predictive_window_t3_ParamLimits

0x357d,	// (0x00055bfe) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cf,	// (0x00061d50) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cf,	// (0x00061d50) popup_fep_japan_predictive_window_t

0xb694,	// (0x0005dd15) bg_popup_sub_pane_cp23

0x35b4,	// (0x00055c35) listscroll_japin_cand_pane

0x35bc,	// (0x00055c3d) popup_fep_japan_candidate_window_t1

0x35ca,	// (0x00055c4b) candidate_pane_ParamLimits

0x35ca,	// (0x00055c4b) candidate_pane

0x35dc,	// (0x00055c5d) scroll_pane_cp30

0x35e6,	// (0x00055c67) list_single_popup_jap_candidate_pane_ParamLimits

0x35e6,	// (0x00055c67) list_single_popup_jap_candidate_pane

0xb694,	// (0x0005dd15) list_highlight_pane_cp30

0x35fa,	// (0x00055c7b) list_single_popup_jap_candidate_pane_t1

0x5df3,	// (0x00058474) level_1_signal

0x5e00,	// (0x00058481) level_2_signal

0x5e0d,	// (0x0005848e) level_3_signal

0x5e1a,	// (0x0005849b) level_4_signal

0x814f,	// (0x0005a7d0) level_5_signal

0x815c,	// (0x0005a7dd) level_6_signal

0x8169,	// (0x0005a7ea) level_7_signal

0x5df3,	// (0x00058474) level_1_battery

0x5e00,	// (0x00058481) level_2_battery

0x5e0d,	// (0x0005848e) level_3_battery

0x5e1a,	// (0x0005849b) level_4_battery

0x814f,	// (0x0005a7d0) level_5_battery

0x815c,	// (0x0005a7dd) level_6_battery

0x8169,	// (0x0005a7ea) level_7_battery

0x818e,	// (0x0005a80f) list_menu_pane_ParamLimits

0x818e,	// (0x0005a80f) list_menu_pane

0x81a4,	// (0x0005a825) scroll_pane_cp25_ParamLimits

0x81a4,	// (0x0005a825) scroll_pane_cp25

0x81bd,	// (0x0005a83e) list_double2_graphic_pane_cp2_ParamLimits

0x81bd,	// (0x0005a83e) list_double2_graphic_pane_cp2

0x81bd,	// (0x0005a83e) list_double2_large_graphic_pane_cp2_ParamLimits

0x81bd,	// (0x0005a83e) list_double2_large_graphic_pane_cp2

0x81bd,	// (0x0005a83e) list_double2_pane_cp2_ParamLimits

0x81bd,	// (0x0005a83e) list_double2_pane_cp2

0x81bd,	// (0x0005a83e) list_double_graphic_pane_cp2_ParamLimits

0x81bd,	// (0x0005a83e) list_double_graphic_pane_cp2

0x81bd,	// (0x0005a83e) list_double_large_graphic_pane_cp2_ParamLimits

0x81bd,	// (0x0005a83e) list_double_large_graphic_pane_cp2

0x81bd,	// (0x0005a83e) list_double_number_pane_cp2_ParamLimits

0x81bd,	// (0x0005a83e) list_double_number_pane_cp2

0x81bd,	// (0x0005a83e) list_double_pane_cp2_ParamLimits

0x81bd,	// (0x0005a83e) list_double_pane_cp2

0x81e3,	// (0x0005a864) list_single_2graphic_pane_cp2_ParamLimits

0x81e3,	// (0x0005a864) list_single_2graphic_pane_cp2

0x81e3,	// (0x0005a864) list_single_graphic_heading_pane_cp2_ParamLimits

0x81e3,	// (0x0005a864) list_single_graphic_heading_pane_cp2

0x81e3,	// (0x0005a864) list_single_graphic_pane_cp2_ParamLimits

0x81e3,	// (0x0005a864) list_single_graphic_pane_cp2

0x81e3,	// (0x0005a864) list_single_heading_pane_cp2_ParamLimits

0x81e3,	// (0x0005a864) list_single_heading_pane_cp2

0x8200,	// (0x0005a881) list_single_large_graphic_pane_cp2_ParamLimits

0x8200,	// (0x0005a881) list_single_large_graphic_pane_cp2

0x81e3,	// (0x0005a864) list_single_number_heading_pane_cp2_ParamLimits

0x81e3,	// (0x0005a864) list_single_number_heading_pane_cp2

0x81e3,	// (0x0005a864) list_single_number_pane_cp2_ParamLimits

0x81e3,	// (0x0005a864) list_single_number_pane_cp2

0x8210,	// (0x0005a891) list_single_pane_cp2_ParamLimits

0x8210,	// (0x0005a891) list_single_pane_cp2

0x828b,	// (0x0005a90c) bg_popup_sub_pane_cp22

0x5eb0,	// (0x00058531) popup_side_volume_key_window_g1

0x5eda,	// (0x0005855b) popup_side_volume_key_window_t1

0x5ef8,	// (0x00058579) volume_small_pane_cp1

0xb71e,	// (0x0005dd9f) bg_popup_sub_pane_cp24_ParamLimits

0xb71e,	// (0x0005dd9f) bg_popup_sub_pane_cp24

0x82a1,	// (0x0005a922) fep_china_uni_candidate_pane_ParamLimits

0x82a1,	// (0x0005a922) fep_china_uni_candidate_pane

0x82b5,	// (0x0005a936) fep_china_uni_entry_pane

0x82c5,	// (0x0005a946) popup_fep_china_uni_window_g1

0x82e1,	// (0x0005a962) fep_china_uni_entry_pane_g1

0x82eb,	// (0x0005a96c) fep_china_uni_entry_pane_g2

0x0001,

0xf700,	// (0x00061d81) fep_china_uni_entry_pane_g

0x82f5,	// (0x0005a976) fep_entry_item_pane

0x82ff,	// (0x0005a980) fep_candidate_item_pane

0x8307,	// (0x0005a988) fep_china_uni_candidate_pane_g1

0x8311,	// (0x0005a992) fep_china_uni_candidate_pane_g2

0x8319,	// (0x0005a99a) fep_china_uni_candidate_pane_g3

0x8321,	// (0x0005a9a2) fep_china_uni_candidate_pane_g4

0x0003,

0xf705,	// (0x00061d86) fep_china_uni_candidate_pane_g

0xb68a,	// (0x0005dd0b) fep_entry_item_pane_g1

0x832b,	// (0x0005a9ac) fep_entry_item_pane_t1_ParamLimits

0x832b,	// (0x0005a9ac) fep_entry_item_pane_t1

0x8341,	// (0x0005a9c2) fep_candidate_item_pane_t1_ParamLimits

0x8341,	// (0x0005a9c2) fep_candidate_item_pane_t1

0x8356,	// (0x0005a9d7) fep_candidate_item_pane_t2_ParamLimits

0x8356,	// (0x0005a9d7) fep_candidate_item_pane_t2

0x0001,

0xf70e,	// (0x00061d8f) fep_candidate_item_pane_t_ParamLimits

0xf70e,	// (0x00061d8f) fep_candidate_item_pane_t

0xb6e2,	// (0x0005dd63) list_highlight_pane_cp31_ParamLimits

0xb6e2,	// (0x0005dd63) list_highlight_pane_cp31

0x8368,	// (0x0005a9e9) level_1_signal_lsc

0x8371,	// (0x0005a9f2) level_2_signal_lsc

0x837a,	// (0x0005a9fb) level_3_signal_lsc

0x8383,	// (0x0005aa04) level_4_signal_lsc

0x838c,	// (0x0005aa0d) level_5_signal_lsc

0x8395,	// (0x0005aa16) level_6_signal_lsc

0x839e,	// (0x0005aa1f) level_7_signal_lsc

0x839e,	// (0x0005aa1f) level_1_battery_lsc

0x83a7,	// (0x0005aa28) level_2_battery_lsc

0x83b0,	// (0x0005aa31) level_3_battery_lsc

0x83b9,	// (0x0005aa3a) level_4_battery_lsc

0x83c2,	// (0x0005aa43) level_5_battery_lsc

0x83cb,	// (0x0005aa4c) level_6_battery_lsc

0x8368,	// (0x0005a9e9) level_7_battery_lsc

0x83d4,	// (0x0005aa55) scroll_handle_focus_pane_g1

0x83dd,	// (0x0005aa5e) scroll_handle_focus_pane_g2

0x83e6,	// (0x0005aa67) scroll_handle_focus_pane_g3

0x0002,

0xf713,	// (0x00061d94) scroll_handle_focus_pane_g

0x5f00,	// (0x00058581) list_single_2graphic_pane_g1_ParamLimits

0x5f00,	// (0x00058581) list_single_2graphic_pane_g1

0x54fc,	// (0x00057b7d) list_single_2graphic_pane_g2_ParamLimits

0x54fc,	// (0x00057b7d) list_single_2graphic_pane_g2

0x5459,	// (0x00057ada) list_single_2graphic_pane_g3_ParamLimits

0x5459,	// (0x00057ada) list_single_2graphic_pane_g3

0x5f0c,	// (0x0005858d) list_single_2graphic_pane_g4_ParamLimits

0x5f0c,	// (0x0005858d) list_single_2graphic_pane_g4

0x0003,

0xf71a,	// (0x00061d9b) list_single_2graphic_pane_g_ParamLimits

0xf71a,	// (0x00061d9b) list_single_2graphic_pane_g

0x5f1d,	// (0x0005859e) list_single_2graphic_pane_t1_ParamLimits

0x5f1d,	// (0x0005859e) list_single_2graphic_pane_t1

0x5f4b,	// (0x000585cc) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5f4b,	// (0x000585cc) list_double2_graphic_large_graphic_pane_g1

0x5737,	// (0x00057db8) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5737,	// (0x00057db8) list_double2_graphic_large_graphic_pane_g2

0x566f,	// (0x00057cf0) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x566f,	// (0x00057cf0) list_double2_graphic_large_graphic_pane_g3

0x5f5d,	// (0x000585de) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5f5d,	// (0x000585de) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf723,	// (0x00061da4) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf723,	// (0x00061da4) list_double2_graphic_large_graphic_pane_g

0x5f69,	// (0x000585ea) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5f69,	// (0x000585ea) list_double2_graphic_large_graphic_pane_t1

0x5f7f,	// (0x00058600) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5f7f,	// (0x00058600) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72c,	// (0x00061dad) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72c,	// (0x00061dad) list_double2_graphic_large_graphic_pane_t

0x8529,	// (0x0005abaa) popup_fast_swap_window_ParamLimits

0x8529,	// (0x0005abaa) popup_fast_swap_window

0x8547,	// (0x0005abc8) popup_side_volume_key_window

0x8565,	// (0x0005abe6) stacon_top_pane

0x856f,	// (0x0005abf0) status_pane_ParamLimits

0x856f,	// (0x0005abf0) status_pane

0xb680,	// (0x0005dd01) status_small_pane

0xb694,	// (0x0005dd15) control_pane

0xb694,	// (0x0005dd15) stacon_bottom_pane

0xf46a,	// (0x00061aeb) scroll_pane_cp121

0xf461,	// (0x00061ae2) set_content_pane

0x83ef,	// (0x0005aa70) bg_active_tab_pane_g1_cp1

0x83f8,	// (0x0005aa79) bg_active_tab_pane_g2_cp1

0x8401,	// (0x0005aa82) bg_active_tab_pane_g3_cp1

0x83ef,	// (0x0005aa70) bg_passive_tab_pane_g1_cp1

0x83f8,	// (0x0005aa79) bg_passive_tab_pane_g2_cp1

0x8401,	// (0x0005aa82) bg_passive_tab_pane_g3_cp1

0x840a,	// (0x0005aa8b) bg_active_tab_pane_g1_cp2

0x83f8,	// (0x0005aa79) bg_active_tab_pane_g2_cp2

0x8413,	// (0x0005aa94) bg_active_tab_pane_g3_cp2

0x840a,	// (0x0005aa8b) bg_passive_tab_pane_g1_cp2

0x83f8,	// (0x0005aa79) bg_passive_tab_pane_g2_cp2

0x8413,	// (0x0005aa94) bg_passive_tab_pane_g3_cp2

0x841c,	// (0x0005aa9d) bg_active_tab_pane_g1_cp3

0x83f8,	// (0x0005aa79) bg_active_tab_pane_g2_cp3

0x8425,	// (0x0005aaa6) bg_active_tab_pane_g3_cp3

0x841c,	// (0x0005aa9d) bg_passive_tab_pane_g1_cp3

0x83f8,	// (0x0005aa79) bg_passive_tab_pane_g2_cp3

0x8425,	// (0x0005aaa6) bg_passive_tab_pane_g3_cp3

0x842e,	// (0x0005aaaf) bg_active_tab_pane_g1_cp4

0x83f8,	// (0x0005aa79) bg_active_tab_pane_g2_cp4

0x8439,	// (0x0005aaba) bg_active_tab_pane_g3_cp4

0x842e,	// (0x0005aaaf) bg_passive_tab_pane_g1_cp4

0x83f8,	// (0x0005aa79) bg_passive_tab_pane_g2_cp4

0x8439,	// (0x0005aaba) bg_passive_tab_pane_g3_cp4

0x8482,	// (0x0005ab03) bg_active_tab_pane_g1_cp5

0x83f8,	// (0x0005aa79) bg_active_tab_pane_g2_cp5

0x848b,	// (0x0005ab0c) bg_active_tab_pane_g3_cp5

0x8482,	// (0x0005ab03) bg_passive_tab_pane_g1_cp5

0x83f8,	// (0x0005aa79) bg_passive_tab_pane_g2_cp5

0x848b,	// (0x0005ab0c) bg_passive_tab_pane_g3_cp5

0x8494,	// (0x0005ab15) list_set_graphic_pane_ParamLimits

0x8494,	// (0x0005ab15) list_set_graphic_pane

0xb694,	// (0x0005dd15) bg_set_opt_pane_cp4

0x84aa,	// (0x0005ab2b) list_set_graphic_pane_g1_ParamLimits

0x84aa,	// (0x0005ab2b) list_set_graphic_pane_g1

0x84b6,	// (0x0005ab37) list_set_graphic_pane_g2_ParamLimits

0x84b6,	// (0x0005ab37) list_set_graphic_pane_g2

0x0001,

0xf731,	// (0x00061db2) list_set_graphic_pane_g_ParamLimits

0xf731,	// (0x00061db2) list_set_graphic_pane_g

0x0009,

0xfaad,	// (0x0006212e) volume_small_pane_cp_g

0x84da,	// (0x0005ab5b) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x84da,	// (0x0005ab5b) list_double2_large_graphic_pane_g1_cp2

0x84e8,	// (0x0005ab69) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x84e8,	// (0x0005ab69) list_double2_large_graphic_pane_g2_cp2

0x84f9,	// (0x0005ab7a) list_double2_large_graphic_pane_g3_cp2

0x8501,	// (0x0005ab82) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8501,	// (0x0005ab82) list_double2_large_graphic_pane_t1_cp2

0x8517,	// (0x0005ab98) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8517,	// (0x0005ab98) list_double2_large_graphic_pane_t2_cp2

0xa310,	// (0x0005c991) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa310,	// (0x0005c991) list_double_large_graphic_pane_g1_cp2

0xa323,	// (0x0005c9a4) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa323,	// (0x0005c9a4) list_double_large_graphic_pane_g2_cp2

0x8681,	// (0x0005ad02) list_double_large_graphic_pane_g3_cp2

0xa334,	// (0x0005c9b5) list_double_large_graphic_pane_g4_cp

0xa33c,	// (0x0005c9bd) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa33c,	// (0x0005c9bd) list_double_large_graphic_pane_t1_cp2

0xa353,	// (0x0005c9d4) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa353,	// (0x0005c9d4) list_double_large_graphic_pane_t2_cp2

0x857d,	// (0x0005abfe) list_double2_graphic_pane_g1_cp2_ParamLimits

0x857d,	// (0x0005abfe) list_double2_graphic_pane_g1_cp2

0x858b,	// (0x0005ac0c) list_double2_graphic_pane_g2_cp2_ParamLimits

0x858b,	// (0x0005ac0c) list_double2_graphic_pane_g2_cp2

0x859c,	// (0x0005ac1d) list_double2_graphic_pane_g3_cp2

0x85a6,	// (0x0005ac27) list_double2_graphic_pane_t1_cp2_ParamLimits

0x85a6,	// (0x0005ac27) list_double2_graphic_pane_t1_cp2

0x85bc,	// (0x0005ac3d) list_double2_graphic_pane_t2_cp2_ParamLimits

0x85bc,	// (0x0005ac3d) list_double2_graphic_pane_t2_cp2

0x8143,	// (0x0005a7c4) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8143,	// (0x0005a7c4) list_single_number_heading_pane_g1_cp2

0x85ce,	// (0x0005ac4f) list_single_number_heading_pane_g2_cp2

0x85d6,	// (0x0005ac57) list_single_number_heading_pane_t1_cp2_ParamLimits

0x85d6,	// (0x0005ac57) list_single_number_heading_pane_t1_cp2

0x85ec,	// (0x0005ac6d) list_single_number_heading_pane_t2_cp2_ParamLimits

0x85ec,	// (0x0005ac6d) list_single_number_heading_pane_t2_cp2

0x8600,	// (0x0005ac81) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8600,	// (0x0005ac81) list_single_number_heading_pane_t3_cp2

0x8143,	// (0x0005a7c4) list_single_heading_pane_g1_cp2_ParamLimits

0x8143,	// (0x0005a7c4) list_single_heading_pane_g1_cp2

0x85ce,	// (0x0005ac4f) list_single_heading_pane_g2_cp2

0x85d6,	// (0x0005ac57) list_single_heading_pane_t1_cp2_ParamLimits

0x85d6,	// (0x0005ac57) list_single_heading_pane_t1_cp2

0xa10a,	// (0x0005c78b) list_single_heading_pane_t2_cp2_ParamLimits

0xa10a,	// (0x0005c78b) list_single_heading_pane_t2_cp2

0xa052,	// (0x0005c6d3) list_double_graphic_pane_g1_cp2_ParamLimits

0xa052,	// (0x0005c6d3) list_double_graphic_pane_g1_cp2

0xa05e,	// (0x0005c6df) list_double_graphic_pane_g2_cp2_ParamLimits

0xa05e,	// (0x0005c6df) list_double_graphic_pane_g2_cp2

0xa06d,	// (0x0005c6ee) list_double_graphic_pane_g3_cp2

0xa075,	// (0x0005c6f6) list_double_graphic_pane_t1_cp2_ParamLimits

0xa075,	// (0x0005c6f6) list_double_graphic_pane_t1_cp2

0xa08b,	// (0x0005c70c) list_double_graphic_pane_t2_cp2_ParamLimits

0xa08b,	// (0x0005c70c) list_double_graphic_pane_t2_cp2

0x8675,	// (0x0005acf6) list_double_number_pane_g1_cp2_ParamLimits

0x8675,	// (0x0005acf6) list_double_number_pane_g1_cp2

0x8681,	// (0x0005ad02) list_double_number_pane_g2_cp2

0xa016,	// (0x0005c697) list_double_number_pane_t1_cp2_ParamLimits

0xa016,	// (0x0005c697) list_double_number_pane_t1_cp2

0xa02a,	// (0x0005c6ab) list_double_number_pane_t2_cp2_ParamLimits

0xa02a,	// (0x0005c6ab) list_double_number_pane_t2_cp2

0xa040,	// (0x0005c6c1) list_double_number_pane_t3_cp2_ParamLimits

0xa040,	// (0x0005c6c1) list_double_number_pane_t3_cp2

0x9eff,	// (0x0005c580) list_single_graphic_pane_g1_cp2_ParamLimits

0x9eff,	// (0x0005c580) list_single_graphic_pane_g1_cp2

0x86ea,	// (0x0005ad6b) list_single_graphic_pane_g2_cp2_ParamLimits

0x86ea,	// (0x0005ad6b) list_single_graphic_pane_g2_cp2

0x86f6,	// (0x0005ad77) list_single_graphic_pane_g3_cp2

0x9ed5,	// (0x0005c556) list_single_graphic_pane_t1_cp2_ParamLimits

0x9ed5,	// (0x0005c556) list_single_graphic_pane_t1_cp2

0x86ea,	// (0x0005ad6b) list_single_number_pane_g1_cp2_ParamLimits

0x86ea,	// (0x0005ad6b) list_single_number_pane_g1_cp2

0x86f6,	// (0x0005ad77) list_single_number_pane_g2_cp2

0x9ed5,	// (0x0005c556) list_single_number_pane_t1_cp2_ParamLimits

0x9ed5,	// (0x0005c556) list_single_number_pane_t1_cp2

0x9eeb,	// (0x0005c56c) list_single_number_pane_t2_cp2_ParamLimits

0x9eeb,	// (0x0005c56c) list_single_number_pane_t2_cp2

0x84e8,	// (0x0005ab69) list_double2_pane_g1_cp2_ParamLimits

0x84e8,	// (0x0005ab69) list_double2_pane_g1_cp2

0x84f9,	// (0x0005ab7a) list_double2_pane_g2_cp2

0x864d,	// (0x0005acce) list_double2_pane_t1_cp2_ParamLimits

0x864d,	// (0x0005acce) list_double2_pane_t1_cp2

0x8663,	// (0x0005ace4) list_double2_pane_t2_cp2_ParamLimits

0x8663,	// (0x0005ace4) list_double2_pane_t2_cp2

0x8675,	// (0x0005acf6) list_double_pane_g1_cp2_ParamLimits

0x8675,	// (0x0005acf6) list_double_pane_g1_cp2

0x8681,	// (0x0005ad02) list_double_pane_g2_cp2

0x8689,	// (0x0005ad0a) list_double_pane_t1_cp2_ParamLimits

0x8689,	// (0x0005ad0a) list_double_pane_t1_cp2

0x869f,	// (0x0005ad20) list_double_pane_t2_cp2_ParamLimits

0x869f,	// (0x0005ad20) list_double_pane_t2_cp2

0x86da,	// (0x0005ad5b) list_single_pane_cp2_g3

0x86ea,	// (0x0005ad6b) list_single_pane_g1_cp2_ParamLimits

0x86ea,	// (0x0005ad6b) list_single_pane_g1_cp2

0x86f6,	// (0x0005ad77) list_single_pane_g2_cp2

0x86fe,	// (0x0005ad7f) list_single_pane_t1_cp2_ParamLimits

0x86fe,	// (0x0005ad7f) list_single_pane_t1_cp2

0x8716,	// (0x0005ad97) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8716,	// (0x0005ad97) list_single_large_graphic_pane_g1_cp2

0x8724,	// (0x0005ada5) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8724,	// (0x0005ada5) list_single_large_graphic_pane_g2_cp2

0x8730,	// (0x0005adb1) list_single_large_graphic_pane_g3_cp2

0x8738,	// (0x0005adb9) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8738,	// (0x0005adb9) list_single_large_graphic_pane_g4_cp1

0x8752,	// (0x0005add3) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8752,	// (0x0005add3) list_single_large_graphic_pane_t1_cp2

0x9e9f,	// (0x0005c520) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9e9f,	// (0x0005c520) list_single_graphic_heading_pane_g1_cp2

0x9e6c,	// (0x0005c4ed) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9e6c,	// (0x0005c4ed) list_single_graphic_heading_pane_g4_cp2

0x86f6,	// (0x0005ad77) list_single_graphic_heading_pane_g5_cp2

0x9eab,	// (0x0005c52c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9eab,	// (0x0005c52c) list_single_graphic_heading_pane_t1_cp2

0x9ec1,	// (0x0005c542) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9ec1,	// (0x0005c542) list_single_graphic_heading_pane_t2_cp2

0x9e60,	// (0x0005c4e1) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9e60,	// (0x0005c4e1) list_single_2graphic_pane_g1_cp2

0x9e6c,	// (0x0005c4ed) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9e6c,	// (0x0005c4ed) list_single_2graphic_pane_g2_cp2

0x86f6,	// (0x0005ad77) list_single_2graphic_pane_g3_cp2

0x9e7d,	// (0x0005c4fe) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9e7d,	// (0x0005c4fe) list_single_2graphic_pane_g4_cp2

0x9e89,	// (0x0005c50a) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9e89,	// (0x0005c50a) list_single_2graphic_pane_t1_cp2

0xb68a,	// (0x0005dd0b) list_highlight_pane_g10_cp1

0x984a,	// (0x0005becb) list_highlight_pane_g1_cp1

0x9852,	// (0x0005bed3) list_highlight_pane_g2_cp1

0x985a,	// (0x0005bedb) list_highlight_pane_g3_cp1

0x9862,	// (0x0005bee3) list_highlight_pane_g4_cp1

0x986a,	// (0x0005beeb) list_highlight_pane_g5_cp1

0x9872,	// (0x0005bef3) list_highlight_pane_g6_cp1

0x987a,	// (0x0005befb) list_highlight_pane_g7_cp1

0x9882,	// (0x0005bf03) list_highlight_pane_g8_cp1

0x988a,	// (0x0005bf0b) list_highlight_pane_g9_cp1

0x976a,	// (0x0005bdeb) form_field_slider_pane_t3

0x9778,	// (0x0005bdf9) form_field_slider_pane_t4

0x9786,	// (0x0005be07) slider_form_pane_ParamLimits

0x9786,	// (0x0005be07) slider_form_pane

0xb694,	// (0x0005dd15) control_abbreviations

0xb694,	// (0x0005dd15) control_conventions

0xb694,	// (0x0005dd15) control_definitions

0xb694,	// (0x0005dd15) format_table_attribute

0xa160,	// (0x0005c7e1) bg_popup_preview_window_pane_g9

0xb694,	// (0x0005dd15) format_table_data2

0xb694,	// (0x0005dd15) format_table_data3

0xb694,	// (0x0005dd15) format_table_data_example

0x0008,

0xb694,	// (0x0005dd15) intro_purpose

0xf8cd,	// (0x00061f4e) bg_popup_preview_window_pane_g

0xb694,	// (0x0005dd15) texts_category

0xb694,	// (0x0005dd15) texts_graphics

0x8768,	// (0x0005ade9) text_digital

0x8777,	// (0x0005adf8) text_primary

0x8786,	// (0x0005ae07) text_primary_small

0x8795,	// (0x0005ae16) text_secondary

0x87a4,	// (0x0005ae25) text_title

0xa8b3,	// (0x0005cf34) bg_passive_tab_pane_g1_cp3_srt

0x83f8,	// (0x0005aa79) bg_passive_tab_pane_g2_cp3_srt

0xa8bc,	// (0x0005cf3d) bg_passive_tab_pane_g3_cp3_srt

0xb6e2,	// (0x0005dd63) bg_active_tab_pane_cp3_srt_ParamLimits

0xb6e2,	// (0x0005dd63) bg_active_tab_pane_cp3_srt

0xa8c5,	// (0x0005cf46) tabs_4_active_pane_srt_g1

0xa8cd,	// (0x0005cf4e) tabs_4_active_pane_srt_t1_ParamLimits

0xa8cd,	// (0x0005cf4e) tabs_4_active_pane_srt_t1

0xa8b3,	// (0x0005cf34) bg_active_tab_pane_g1_cp3_copy1

0x83f8,	// (0x0005aa79) bg_active_tab_pane_g2_cp3_copy1

0xa8bc,	// (0x0005cf3d) bg_active_tab_pane_g3_cp3_copy1

0xb6e2,	// (0x0005dd63) tabs_2_long_active_pane_srt_ParamLimits

0xb6e2,	// (0x0005dd63) tabs_2_long_active_pane_srt

0xb6e2,	// (0x0005dd63) tabs_2_long_passive_pane_srt_ParamLimits

0xb6e2,	// (0x0005dd63) tabs_2_long_passive_pane_srt

0x5b4e,	// (0x000581cf) bg_passive_tab_pane_cp4_srt_ParamLimits

0x5b4e,	// (0x000581cf) bg_passive_tab_pane_cp4_srt

0xa58a,	// (0x0005cc0b) bg_passive_tab_pane_g1_cp4_srt

0x83f8,	// (0x0005aa79) bg_passive_tab_pane_g2_cp4_srt

0xa593,	// (0x0005cc14) bg_passive_tab_pane_g3_cp4_srt

0x5b2d,	// (0x000581ae) bg_active_tab_pane_cp4_srt_ParamLimits

0x5b2d,	// (0x000581ae) bg_active_tab_pane_cp4_srt

0xa59c,	// (0x0005cc1d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa59c,	// (0x0005cc1d) tabs_2_long_active_pane_srt_t1

0xa58a,	// (0x0005cc0b) bg_active_tab_pane_g1_cp4_srt

0x83f8,	// (0x0005aa79) bg_active_tab_pane_g2_cp4_srt

0xa593,	// (0x0005cc14) bg_active_tab_pane_g3_cp4_srt

0xb71e,	// (0x0005dd9f) tabs_3_long_active_pane_srt_ParamLimits

0xb71e,	// (0x0005dd9f) tabs_3_long_active_pane_srt

0xb71e,	// (0x0005dd9f) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb71e,	// (0x0005dd9f) tabs_3_long_passive_pane_cp_srt

0xb71e,	// (0x0005dd9f) tabs_3_long_passive_pane_srt_ParamLimits

0xb71e,	// (0x0005dd9f) tabs_3_long_passive_pane_srt

0x5b4e,	// (0x000581cf) bg_passive_tab_pane_cp5_srt_ParamLimits

0x5b4e,	// (0x000581cf) bg_passive_tab_pane_cp5_srt

0x8482,	// (0x0005ab03) bg_passive_tab_pane_g1_cp5_srt

0x83f8,	// (0x0005aa79) bg_passive_tab_pane_g2_cp5_srt

0x848b,	// (0x0005ab0c) bg_passive_tab_pane_g3_cp5_srt

0x5b2d,	// (0x000581ae) bg_active_tab_pane_cp5_srt_ParamLimits

0x5b2d,	// (0x000581ae) bg_active_tab_pane_cp5_srt

0xa578,	// (0x0005cbf9) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa578,	// (0x0005cbf9) tabs_3_long_active_pane_srt_t1

0x8482,	// (0x0005ab03) bg_active_tab_pane_g1_cp5_srt

0x83f8,	// (0x0005aa79) bg_active_tab_pane_g2_cp5_srt

0x848b,	// (0x0005ab0c) bg_active_tab_pane_g3_cp5_srt

0xa56a,	// (0x0005cbeb) navi_text_pane_srt_t1

0xa562,	// (0x0005cbe3) navi_icon_pane_srt_g1

0x897c,	// (0x0005affd) midp_editing_number_pane_srt

0x87b3,	// (0x0005ae34) midp_ticker_pane_srt

0x8984,	// (0x0005b005) midp_ticker_pane_srt_g1

0x898c,	// (0x0005b00d) midp_ticker_pane_srt_g2

0x0001,

0xf750,	// (0x00061dd1) midp_ticker_pane_srt_g

0x8994,	// (0x0005b015) midp_ticker_pane_srt_t1

0xa553,	// (0x0005cbd4) midp_editing_number_pane_t1_copy1

0x87bb,	// (0x0005ae3c) listscroll_midp_pane

0x87bb,	// (0x0005ae3c) midp_form_pane

0x882a,	// (0x0005aeab) midp_info_popup_window_ParamLimits

0x882a,	// (0x0005aeab) midp_info_popup_window

0x3225,	// (0x000558a6) bg_popup_sub_pane_cp50_ParamLimits

0x3225,	// (0x000558a6) bg_popup_sub_pane_cp50

0x946c,	// (0x0005baed) listscroll_midp_info_pane_ParamLimits

0x946c,	// (0x0005baed) listscroll_midp_info_pane

0x944c,	// (0x0005bacd) listscroll_form_midp_pane_ParamLimits

0x944c,	// (0x0005bacd) listscroll_form_midp_pane

0x9458,	// (0x0005bad9) scroll_bar_cp050

0x942c,	// (0x0005baad) list_midp_pane

0xb370,	// (0x0005d9f1) signal_pane_g2_cp

0x9366,	// (0x0005b9e7) listscroll_midp_info_pane_t1_ParamLimits

0x9366,	// (0x0005b9e7) listscroll_midp_info_pane_t1

0x937e,	// (0x0005b9ff) listscroll_midp_info_pane_t2_ParamLimits

0x937e,	// (0x0005b9ff) listscroll_midp_info_pane_t2

0x93bc,	// (0x0005ba3d) listscroll_midp_info_pane_t3_ParamLimits

0x93bc,	// (0x0005ba3d) listscroll_midp_info_pane_t3

0x93f6,	// (0x0005ba77) listscroll_midp_info_pane_t4_ParamLimits

0x93f6,	// (0x0005ba77) listscroll_midp_info_pane_t4

0x0003,

0xf808,	// (0x00061e89) listscroll_midp_info_pane_t_ParamLimits

0xf808,	// (0x00061e89) listscroll_midp_info_pane_t

0x327a,	// (0x000558fb) scroll_pane_cp21

0x9300,	// (0x0005b981) form_midp_field_choice_group_pane

0x9309,	// (0x0005b98a) form_midp_field_text_pane

0x934c,	// (0x0005b9cd) form_midp_field_time_pane

0x9354,	// (0x0005b9d5) form_midp_gauge_slider_pane

0x935d,	// (0x0005b9de) form_midp_gauge_wait_pane

0xb694,	// (0x0005dd15) form_midp_image_pane

0x6a4e,	// (0x000590cf) list_single_midp_pane_ParamLimits

0x6a4e,	// (0x000590cf) list_single_midp_pane

0x92c4,	// (0x0005b945) form_midp_field_text_pane_t1

0x90b6,	// (0x0005b737) input_focus_pane_cp050

0x92ef,	// (0x0005b970) list_midp_form_text_pane

0x9293,	// (0x0005b914) form_midp_field_choice_group_pane_t1

0x92a1,	// (0x0005b922) input_focus_pane_cp051

0x92b5,	// (0x0005b936) list_midp_choice_pane

0xb694,	// (0x0005dd15) status_idle_pane

0x9277,	// (0x0005b8f8) form_midp_field_time_pane_t1

0xb68a,	// (0x0005dd0b) wait_anim_pane_g2_copy1

0x9285,	// (0x0005b906) form_midp_field_time_pane_t2

0x0001,

0x88da,	// (0x0005af5b) aid_navinavi_width_2_pane

0xf803,	// (0x00061e84) form_midp_field_time_pane_t

0xb694,	// (0x0005dd15) input_focus_pane_cp052

0xb694,	// (0x0005dd15) bg_input_focus_pane_cp040

0x9237,	// (0x0005b8b8) form_midp_gauge_slider_pane_t1

0x9245,	// (0x0005b8c6) form_midp_gauge_slider_pane_t2

0x9253,	// (0x0005b8d4) form_midp_gauge_slider_pane_t3

0x9261,	// (0x0005b8e2) form_midp_gauge_slider_pane_t4

0x0003,

0xf7fa,	// (0x00061e7b) form_midp_gauge_slider_pane_t

0x926f,	// (0x0005b8f0) form_midp_slider_pane

0xb6e2,	// (0x0005dd63) bg_input_focus_pane_cp041_ParamLimits

0xb6e2,	// (0x0005dd63) bg_input_focus_pane_cp041

0x9204,	// (0x0005b885) form_midp_gauge_wait_pane_t1_ParamLimits

0x9204,	// (0x0005b885) form_midp_gauge_wait_pane_t1

0x9216,	// (0x0005b897) form_midp_gauge_wait_pane_t2_ParamLimits

0x9216,	// (0x0005b897) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f5,	// (0x00061e76) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f5,	// (0x00061e76) form_midp_gauge_wait_pane_t

0x9228,	// (0x0005b8a9) form_midp_wait_pane_ParamLimits

0x9228,	// (0x0005b8a9) form_midp_wait_pane

0x91cc,	// (0x0005b84d) form_midp_image_pane_g1

0x91d5,	// (0x0005b856) form_midp_image_pane_t1

0x91e4,	// (0x0005b865) form_midp_image_pane_t2

0x91f3,	// (0x0005b874) form_midp_image_pane_t3

0x0002,

0xf7ee,	// (0x00061e6f) form_midp_image_pane_t

0x91c3,	// (0x0005b844) list_single_midp_pane_g1

0x3b3b,	// (0x000561bc) list_single_midp_pane_t1

0x91a9,	// (0x0005b82a) list_midp_form_item_pane_ParamLimits

0x91a9,	// (0x0005b82a) list_midp_form_item_pane

0x8882,	// (0x0005af03) list_midp_form_item_pane_t1

0x8891,	// (0x0005af12) midp_ticker_pane_g1

0x889d,	// (0x0005af1e) midp_ticker_pane_g2

0x0001,

0xf736,	// (0x00061db7) midp_ticker_pane_g

0x88a9,	// (0x0005af2a) midp_ticker_pane_t1

0xa7c0,	// (0x0005ce41) midp_editing_number_pane_t1

0xa79e,	// (0x0005ce1f) midp_editing_number_pane

0xa7ad,	// (0x0005ce2e) midp_ticker_pane

0x9478,	// (0x0005baf9) ai_message_heading_pane

0xb694,	// (0x0005dd15) bg_popup_window_pane_cp14

0x9480,	// (0x0005bb01) listscroll_ai_message_pane

0xa4d9,	// (0x0005cb5a) ai_message_heading_pane_g1_ParamLimits

0xa4d9,	// (0x0005cb5a) ai_message_heading_pane_g1

0xa4e5,	// (0x0005cb66) ai_message_heading_pane_g2_ParamLimits

0xa4e5,	// (0x0005cb66) ai_message_heading_pane_g2

0xa4f3,	// (0x0005cb74) ai_message_heading_pane_g3_ParamLimits

0xa4f3,	// (0x0005cb74) ai_message_heading_pane_g3

0xa4ff,	// (0x0005cb80) ai_message_heading_pane_g4_ParamLimits

0xa4ff,	// (0x0005cb80) ai_message_heading_pane_g4

0x0003,

0xf92f,	// (0x00061fb0) ai_message_heading_pane_g_ParamLimits

0xf92f,	// (0x00061fb0) ai_message_heading_pane_g

0xa50b,	// (0x0005cb8c) ai_message_heading_pane_t1_ParamLimits

0xa50b,	// (0x0005cb8c) ai_message_heading_pane_t1

0xa525,	// (0x0005cba6) ai_message_heading_pane_t2_ParamLimits

0xa525,	// (0x0005cba6) ai_message_heading_pane_t2

0x0001,

0xf938,	// (0x00061fb9) ai_message_heading_pane_t_ParamLimits

0xf938,	// (0x00061fb9) ai_message_heading_pane_t

0xa539,	// (0x0005cbba) bg_popup_heading_pane_cp1_ParamLimits

0xa539,	// (0x0005cbba) bg_popup_heading_pane_cp1

0xa4c7,	// (0x0005cb48) list_ai_message_pane_ParamLimits

0xa4c7,	// (0x0005cb48) list_ai_message_pane

0x327a,	// (0x000558fb) scroll_pane_cp10

0xa463,	// (0x0005cae4) list_ai_message_pane_g1

0xa46b,	// (0x0005caec) list_ai_message_pane_g2

0x0001,

0xf90c,	// (0x00061f8d) list_ai_message_pane_g

0xa473,	// (0x0005caf4) list_ai_message_pane_t1_ParamLimits

0xa473,	// (0x0005caf4) list_ai_message_pane_t1

0xa488,	// (0x0005cb09) list_ai_message_pane_t2_ParamLimits

0xa488,	// (0x0005cb09) list_ai_message_pane_t2

0xa49d,	// (0x0005cb1e) list_ai_message_pane_t3_ParamLimits

0xa49d,	// (0x0005cb1e) list_ai_message_pane_t3

0xa4b2,	// (0x0005cb33) list_ai_message_pane_t4_ParamLimits

0xa4b2,	// (0x0005cb33) list_ai_message_pane_t4

0x0003,

0xf911,	// (0x00061f92) list_ai_message_pane_t_ParamLimits

0xf911,	// (0x00061f92) list_ai_message_pane_t

0xa44c,	// (0x0005cacd) cell_ai_soft_ind_pane_ParamLimits

0xa44c,	// (0x0005cacd) cell_ai_soft_ind_pane

0x88bb,	// (0x0005af3c) cell_ai_soft_ind_pane_g1_ParamLimits

0x88bb,	// (0x0005af3c) cell_ai_soft_ind_pane_g1

0xb694,	// (0x0005dd15) grid_highlight_cp1

0x88c8,	// (0x0005af49) text_secondary_cp56_ParamLimits

0x88c8,	// (0x0005af49) text_secondary_cp56

0xa421,	// (0x0005caa2) example_general_pane_ParamLimits

0xa421,	// (0x0005caa2) example_general_pane

0xa42d,	// (0x0005caae) example_parent_pane_g1_ParamLimits

0xa42d,	// (0x0005caae) example_parent_pane_g1

0xa439,	// (0x0005caba) example_parent_pane_t1_ParamLimits

0xa439,	// (0x0005caba) example_parent_pane_t1

0x669d,	// (0x00058d1e) popup_preview_text_window_ParamLimits

0x669d,	// (0x00058d1e) popup_preview_text_window

0x86e2,	// (0x0005ad63) list_single_pane_cp2_g4

0xf046,	// (0x000616c7) bg_popup_preview_window_pane_ParamLimits

0xf046,	// (0x000616c7) bg_popup_preview_window_pane

0xa16a,	// (0x0005c7eb) popup_preview_text_window_t1_ParamLimits

0xa16a,	// (0x0005c7eb) popup_preview_text_window_t1

0xa188,	// (0x0005c809) popup_preview_text_window_t2_ParamLimits

0xa188,	// (0x0005c809) popup_preview_text_window_t2

0xa1d1,	// (0x0005c852) popup_preview_text_window_t3_ParamLimits

0xa1d1,	// (0x0005c852) popup_preview_text_window_t3

0xa216,	// (0x0005c897) popup_preview_text_window_t4_ParamLimits

0xa216,	// (0x0005c897) popup_preview_text_window_t4

0x0004,

0xf8e0,	// (0x00061f61) popup_preview_text_window_t_ParamLimits

0xf8e0,	// (0x00061f61) popup_preview_text_window_t

0xa294,	// (0x0005c915) scroll_pane_cp11

0x902a,	// (0x0005b6ab) bg_popup_preview_window_pane_g1

0xa11e,	// (0x0005c79f) bg_popup_preview_window_pane_g2

0xa128,	// (0x0005c7a9) bg_popup_preview_window_pane_g3

0xa132,	// (0x0005c7b3) bg_popup_preview_window_pane_g4

0xa13c,	// (0x0005c7bd) bg_popup_preview_window_pane_g5

0xa146,	// (0x0005c7c7) bg_popup_preview_window_pane_g6

0xa14e,	// (0x0005c7cf) bg_popup_preview_window_pane_g7

0xa156,	// (0x0005c7d7) bg_popup_preview_window_pane_g8

0x4cb1,	// (0x00057332) aid_popup_width_pane

0x6679,	// (0x00058cfa) popup_midp_note_alarm_window_ParamLimits

0x6679,	// (0x00058cfa) popup_midp_note_alarm_window

0xf47b,	// (0x00061afc) data_form_pane_ParamLimits

0x59c8,	// (0x00058049) form_field_data_pane_g1

0x59d2,	// (0x00058053) form_field_data_pane_t1_ParamLimits

0xf487,	// (0x00061b08) input_focus_pane_ParamLimits

0x396c,	// (0x00055fed) data_form_wide_pane_ParamLimits

0x397d,	// (0x00055ffe) form_field_data_wide_pane_g1

0x3989,	// (0x0005600a) form_field_data_wide_pane_t1_ParamLimits

0xf202,	// (0x00061883) input_focus_pane_cp6_ParamLimits

0x5b05,	// (0x00058186) input_popup_find_pane_g1_ParamLimits

0x5b05,	// (0x00058186) input_popup_find_pane_g1

0x5c6b,	// (0x000582ec) aid_navi_side_left_pane

0x5c80,	// (0x00058301) aid_navi_side_right_pane

0x9945,	// (0x0005bfc6) bg_popup_window_pane_cp30_ParamLimits

0x9945,	// (0x0005bfc6) bg_popup_window_pane_cp30

0x99bf,	// (0x0005c040) popup_midp_note_alarm_window_g1_ParamLimits

0x99bf,	// (0x0005c040) popup_midp_note_alarm_window_g1

0x9bdd,	// (0x0005c25e) popup_midp_note_alarm_window_t1_ParamLimits

0x9bdd,	// (0x0005c25e) popup_midp_note_alarm_window_t1

0x9c7e,	// (0x0005c2ff) popup_midp_note_alarm_window_t2_ParamLimits

0x9c7e,	// (0x0005c2ff) popup_midp_note_alarm_window_t2

0x9d2c,	// (0x0005c3ad) popup_midp_note_alarm_window_t3_ParamLimits

0x9d2c,	// (0x0005c3ad) popup_midp_note_alarm_window_t3

0x9d5e,	// (0x0005c3df) popup_midp_note_alarm_window_t4_ParamLimits

0x9d5e,	// (0x0005c3df) popup_midp_note_alarm_window_t4

0x9d84,	// (0x0005c405) popup_midp_note_alarm_window_t5_ParamLimits

0x9d84,	// (0x0005c405) popup_midp_note_alarm_window_t5

0x000a,

0xf87d,	// (0x00061efe) popup_midp_note_alarm_window_t_ParamLimits

0xf87d,	// (0x00061efe) popup_midp_note_alarm_window_t

0x9e30,	// (0x0005c4b1) wait_bar_pane_cp1_ParamLimits

0x9e30,	// (0x0005c4b1) wait_bar_pane_cp1

0xb694,	// (0x0005dd15) wait_anim_pane_copy1

0xb694,	// (0x0005dd15) wait_border_pane_copy1

0x962a,	// (0x0005bcab) wait_border_pane_g1_copy1

0x39a3,	// (0x00056024) form_field_popup_pane_g1

0x59ec,	// (0x0005806d) form_field_popup_pane_t1_ParamLimits

0xf487,	// (0x00061b08) input_focus_pane_cp7_ParamLimits

0xf4b5,	// (0x00061b36) list_form_pane_ParamLimits

0x39ab,	// (0x0005602c) form_field_popup_wide_pane_g1

0x39b3,	// (0x00056034) form_field_popup_wide_pane_t1_ParamLimits

0xf487,	// (0x00061b08) input_focus_pane_cp8_ParamLimits

0xf4c1,	// (0x00061b42) list_form_wide_pane_ParamLimits

0xa957,	// (0x0005cfd8) aid_size_cell_graphic_pane

0x5a6b,	// (0x000580ec) data_form_pane_t1_ParamLimits

0x6cdd,	// (0x0005935e) data_form_wide_pane_t1_ParamLimits

0x8bcf,	// (0x0005b250) bg_status_flat_pane

0x50e6,	// (0x00057767) title_pane_t1_ParamLimits

0xb6aa,	// (0x0005dd2b) title_pane_t2_ParamLimits

0xb6d0,	// (0x0005dd51) title_pane_t3_ParamLimits

0xf530,	// (0x00061bb1) title_pane_t_ParamLimits

0x5df3,	// (0x00058474) level_1_signal_ParamLimits

0x5e00,	// (0x00058481) level_2_signal_ParamLimits

0x5e0d,	// (0x0005848e) level_3_signal_ParamLimits

0x5e1a,	// (0x0005849b) level_4_signal_ParamLimits

0x814f,	// (0x0005a7d0) level_5_signal_ParamLimits

0x815c,	// (0x0005a7dd) level_6_signal_ParamLimits

0x8169,	// (0x0005a7ea) level_7_signal_ParamLimits

0x5df3,	// (0x00058474) level_1_battery_ParamLimits

0x5e00,	// (0x00058481) level_2_battery_ParamLimits

0x5e0d,	// (0x0005848e) level_3_battery_ParamLimits

0x5e1a,	// (0x0005849b) level_4_battery_ParamLimits

0x814f,	// (0x0005a7d0) level_5_battery_ParamLimits

0x815c,	// (0x0005a7dd) level_6_battery_ParamLimits

0x8169,	// (0x0005a7ea) level_7_battery_ParamLimits

0x984a,	// (0x0005becb) bg_status_flat_pane_g1

0x9852,	// (0x0005bed3) bg_status_flat_pane_g2

0x985a,	// (0x0005bedb) bg_status_flat_pane_g3

0x9862,	// (0x0005bee3) bg_status_flat_pane_g4

0x986a,	// (0x0005beeb) bg_status_flat_pane_g5

0x9872,	// (0x0005bef3) bg_status_flat_pane_g6

0x987a,	// (0x0005befb) bg_status_flat_pane_g7

0x5156,	// (0x000577d7) tabs_3_active_pane_t1_ParamLimits

0x5156,	// (0x000577d7) tabs_3_passive_pane_t1_ParamLimits

0x5170,	// (0x000577f1) tabs_4_active_pane_t1_ParamLimits

0x5170,	// (0x000577f1) tabs_4_1_passive_pane_t1_ParamLimits

0x5b1b,	// (0x0005819c) tabs_2_active_pane_t1_ParamLimits

0x5b1b,	// (0x0005819c) tabs_2_passive_pane_t1_ParamLimits

0x5b2d,	// (0x000581ae) bg_active_tab_pane_cp4_ParamLimits

0x5b3b,	// (0x000581bc) tabs_2_long_active_pane_t1_ParamLimits

0x5b4e,	// (0x000581cf) bg_passive_tab_pane_cp4_ParamLimits

0x6995,	// (0x00059016) list_single_midp_graphic_pane_t1_ParamLimits

0x5b2d,	// (0x000581ae) bg_active_tab_pane_cp5_ParamLimits

0x5b5a,	// (0x000581db) tabs_3_long_active_pane_t1_ParamLimits

0x5b4e,	// (0x000581cf) bg_passive_tab_pane_cp5_ParamLimits

0x6995,	// (0x00059016) list_single_midp_graphic_pane_t1

0x8bcf,	// (0x0005b250) bg_status_flat_pane_ParamLimits

0x8c9a,	// (0x0005b31b) indicator_pane_cp2_ParamLimits

0x8c9a,	// (0x0005b31b) indicator_pane_cp2

0x8ddb,	// (0x0005b45c) navi_pane_srt_ParamLimits

0x8ddb,	// (0x0005b45c) navi_pane_srt

0x8dff,	// (0x0005b480) popup_clock_digital_analogue_window_cp1

0xebe5,	// (0x00061266) indicator_pane_t1

0x87b3,	// (0x0005ae34) copy_highlight_pane

0x87b3,	// (0x0005ae34) cursor_graphics_pane

0x87b3,	// (0x0005ae34) graphic_within_text_pane

0x87b3,	// (0x0005ae34) link_highlight_pane

0xa257,	// (0x0005c8d8) popup_preview_text_window_t5_ParamLimits

0xa257,	// (0x0005c8d8) popup_preview_text_window_t5

0x88e4,	// (0x0005af65) cursor_digital_pane

0x88e4,	// (0x0005af65) cursor_primary_pane

0x88f5,	// (0x0005af76) cursor_primary_small_pane

0x88fd,	// (0x0005af7e) cursor_secondary_pane

0x8905,	// (0x0005af86) cursor_title_pane

0x88e4,	// (0x0005af65) link_highlight_digital_pane

0x88ec,	// (0x0005af6d) link_highlight_primary_pane

0x88f5,	// (0x0005af76) link_highlight_primary_small_pane

0x88fd,	// (0x0005af7e) link_highlight_secondary_pane

0x8905,	// (0x0005af86) link_highlight_title_pane

0x88e4,	// (0x0005af65) copy_highlight_digital_pane

0x88e4,	// (0x0005af65) copy_highlight_primary_pane

0x88f5,	// (0x0005af76) copy_highlight_primary_small_pane

0x88fd,	// (0x0005af7e) copy_highlight_secondary_pane

0x8905,	// (0x0005af86) copy_highlight_title_pane

0x88fd,	// (0x0005af7e) graphic_text_digital_pane

0x98e8,	// (0x0005bf69) graphic_text_primary_pane

0x98f1,	// (0x0005bf72) graphic_text_primary_small_pane

0x88f5,	// (0x0005af76) graphic_text_secondary_pane

0x88e4,	// (0x0005af65) graphic_text_title_pane

0x890d,	// (0x0005af8e) cursor_primary_pane_g1

0x98da,	// (0x0005bf5b) cursor_text_primary_t1

0x98c2,	// (0x0005bf43) cursor_primary_small_pane_g1

0x98cc,	// (0x0005bf4d) cursor_text_primary_small_t1

0x98aa,	// (0x0005bf2b) cursor_primary_small_pane_g1_copy1

0x98b4,	// (0x0005bf35) cursor_text_primary_small_t1_copy1

0x9892,	// (0x0005bf13) cursor_text_title_t1

0x98a0,	// (0x0005bf21) cursor_title_pane_g1

0x890d,	// (0x0005af8e) cursor_digital_pane_g1

0x8917,	// (0x0005af98) cursor_text_digital_t1

0x8925,	// (0x0005afa6) link_highlight_primary_pane_g1

0x983b,	// (0x0005bebc) link_highlight_primary_pane_t1

0x8925,	// (0x0005afa6) link_highlight_primary_small_pane_g1

0x892d,	// (0x0005afae) link_highlight_primary_small_pane_t1

0x893c,	// (0x0005afbd) link_highlight_secondary_pane_g1

0x8944,	// (0x0005afc5) link_highlight_secondary_pane_t1

0x97af,	// (0x0005be30) link_highlight_title_pane_g1

0x97b7,	// (0x0005be38) link_highlight_title_pane_t1

0x9798,	// (0x0005be19) link_highlight_digital_pane_g1

0x97a0,	// (0x0005be21) link_highlight_digital_pane_t1

0x9660,	// (0x0005bce1) copy_highlight_primary_pane_g1

0x9677,	// (0x0005bcf8) copy_highlight_primary_pane_t1

0x9660,	// (0x0005bce1) copy_highlight_primary_small_pane_g1

0x9668,	// (0x0005bce9) copy_highlight_primary_small_pane_t1

0x8953,	// (0x0005afd4) copy_highlight_secondary_pane_g1

0x895b,	// (0x0005afdc) copy_highlight_secondary_pane_t1

0x9649,	// (0x0005bcca) copy_highlight_title_pane_g1

0x9651,	// (0x0005bcd2) copy_highlight_title_pane_t1

0x9660,	// (0x0005bce1) copy_highlight_digital_pane_g1

0xab29,	// (0x0005d1aa) copy_highlight_digital_pane_t1

0xaa7d,	// (0x0005d0fe) graphic_text_primary_pane_g1

0xab0d,	// (0x0005d18e) graphic_text_primary_pane_t1

0xab1b,	// (0x0005d19c) graphic_text_primary_pane_t2

0x0001,

0xf9ac,	// (0x0006202d) graphic_text_primary_pane_t

0xaae9,	// (0x0005d16a) graphic_text_primary_small_pane_g1

0xaaf1,	// (0x0005d172) graphic_text_primary_small_pane_t1

0xaaff,	// (0x0005d180) graphic_text_primary_small_pane_t2

0x0001,

0xf9a7,	// (0x00062028) graphic_text_primary_small_pane_t

0xaac5,	// (0x0005d146) graphic_text_secondary_pane_g1

0xaacd,	// (0x0005d14e) graphic_text_secondary_pane_t1

0xaadb,	// (0x0005d15c) graphic_text_secondary_pane_t2

0x0001,

0xf9a2,	// (0x00062023) graphic_text_secondary_pane_t

0xaaa1,	// (0x0005d122) graphic_text_title_pane_g1

0xaaa9,	// (0x0005d12a) graphic_text_title_pane_t1

0xaab7,	// (0x0005d138) graphic_text_title_pane_t2

0x0001,

0xf99d,	// (0x0006201e) graphic_text_title_pane_t

0xaa7d,	// (0x0005d0fe) graphic_text_digital_pane_g1

0xaa85,	// (0x0005d106) graphic_text_digital_pane_t1

0xaa93,	// (0x0005d114) graphic_text_digital_pane_t2

0x0001,

0xf998,	// (0x00062019) graphic_text_digital_pane_t

0xb6e2,	// (0x0005dd63) navi_icon_pane_srt_ParamLimits

0xb6e2,	// (0x0005dd63) navi_icon_pane_srt

0xb694,	// (0x0005dd15) navi_midp_pane_srt

0xb694,	// (0x0005dd15) navi_navi_pane_srt

0xb6e2,	// (0x0005dd63) navi_text_pane_srt_ParamLimits

0xb6e2,	// (0x0005dd63) navi_text_pane_srt

0xaa48,	// (0x0005d0c9) navi_navi_icon_text_pane_srt

0xaa50,	// (0x0005d0d1) navi_navi_pane_srt_g1_ParamLimits

0xaa50,	// (0x0005d0d1) navi_navi_pane_srt_g1

0xaa62,	// (0x0005d0e3) navi_navi_pane_srt_g2_ParamLimits

0xaa62,	// (0x0005d0e3) navi_navi_pane_srt_g2

0x0001,

0xf993,	// (0x00062014) navi_navi_pane_srt_g_ParamLimits

0xf993,	// (0x00062014) navi_navi_pane_srt_g

0xaa74,	// (0x0005d0f5) navi_navi_tabs_pane_srt

0xaa48,	// (0x0005d0c9) navi_navi_text_pane_srt

0xaa48,	// (0x0005d0c9) navi_navi_volume_pane_srt

0xaa39,	// (0x0005d0ba) navi_navi_text_pane_srt_t1

0x6dec,	// (0x0005946d) navi_navi_volume_pane_srt_g1

0x6df4,	// (0x00059475) volume_small_pane_srt_ParamLimits

0x6df4,	// (0x00059475) volume_small_pane_srt

0x60d2,	// (0x00058753) volume_small_pane_srt_g1_ParamLimits

0x60d2,	// (0x00058753) volume_small_pane_srt_g1

0x60e2,	// (0x00058763) volume_small_pane_srt_g2_ParamLimits

0x60e2,	// (0x00058763) volume_small_pane_srt_g2

0x60f3,	// (0x00058774) volume_small_pane_srt_g3_ParamLimits

0x60f3,	// (0x00058774) volume_small_pane_srt_g3

0x6104,	// (0x00058785) volume_small_pane_srt_g4_ParamLimits

0x6104,	// (0x00058785) volume_small_pane_srt_g4

0x6115,	// (0x00058796) volume_small_pane_srt_g5_ParamLimits

0x6115,	// (0x00058796) volume_small_pane_srt_g5

0x6126,	// (0x000587a7) volume_small_pane_srt_g6_ParamLimits

0x6126,	// (0x000587a7) volume_small_pane_srt_g6

0x6137,	// (0x000587b8) volume_small_pane_srt_g7_ParamLimits

0x6137,	// (0x000587b8) volume_small_pane_srt_g7

0x6148,	// (0x000587c9) volume_small_pane_srt_g8_ParamLimits

0x6148,	// (0x000587c9) volume_small_pane_srt_g8

0x6159,	// (0x000587da) volume_small_pane_srt_g9_ParamLimits

0x6159,	// (0x000587da) volume_small_pane_srt_g9

0x616a,	// (0x000587eb) volume_small_pane_srt_g10_ParamLimits

0x616a,	// (0x000587eb) volume_small_pane_srt_g10

0x0009,

0xf73b,	// (0x00061dbc) volume_small_pane_srt_g_ParamLimits

0xf73b,	// (0x00061dbc) volume_small_pane_srt_g

0xf0fb,	// (0x0006177c) query_popup_data_pane_cp2

0xaa1f,	// (0x0005d0a0) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xaa1f,	// (0x0005d0a0) navi_navi_icon_text_pane_srt_t1

0x98e8,	// (0x0005bf69) navi_tabs_2_long_pane_srt

0x98e8,	// (0x0005bf69) navi_tabs_2_pane_srt

0x98e8,	// (0x0005bf69) navi_tabs_3_long_pane_srt

0x98e8,	// (0x0005bf69) navi_tabs_3_pane_srt

0x98e8,	// (0x0005bf69) navi_tabs_4_pane_srt

0x6dcc,	// (0x0005944d) tabs_2_active_pane_srt_ParamLimits

0x6dcc,	// (0x0005944d) tabs_2_active_pane_srt

0x6ddc,	// (0x0005945d) tabs_2_passive_pane_srt_ParamLimits

0x6ddc,	// (0x0005945d) tabs_2_passive_pane_srt

0x8ae2,	// (0x0005b163) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8ae2,	// (0x0005b163) bg_passive_tab_pane_cp1_srt

0xa9eb,	// (0x0005d06c) bg_passive_tab_pane_g1_cp1_srt

0x83f8,	// (0x0005aa79) bg_passive_tab_pane_g2_cp1_srt

0xa9f4,	// (0x0005d075) bg_passive_tab_pane_g3_cp1_srt

0xb6e2,	// (0x0005dd63) bg_active_tab_pane_cp1_srt_ParamLimits

0xb6e2,	// (0x0005dd63) bg_active_tab_pane_cp1_srt

0xa9fd,	// (0x0005d07e) tabs_2_active_pane_srt_g1

0xaa05,	// (0x0005d086) tabs_2_active_pane_srt_t1_ParamLimits

0xaa05,	// (0x0005d086) tabs_2_active_pane_srt_t1

0xa9eb,	// (0x0005d06c) bg_active_tab_pane_g1_cp1_srt

0x83f8,	// (0x0005aa79) bg_active_tab_pane_g2_cp1_srt

0xa9f4,	// (0x0005d075) bg_active_tab_pane_g3_cp1_srt

0x6d99,	// (0x0005941a) tabs_3_active_pane_srt_ParamLimits

0x6d99,	// (0x0005941a) tabs_3_active_pane_srt

0x6daa,	// (0x0005942b) tabs_3_passive_pane_cp_srt_ParamLimits

0x6daa,	// (0x0005942b) tabs_3_passive_pane_cp_srt

0x6dbb,	// (0x0005943c) tabs_3_passive_pane_srt_ParamLimits

0x6dbb,	// (0x0005943c) tabs_3_passive_pane_srt

0x8ae2,	// (0x0005b163) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8ae2,	// (0x0005b163) bg_passive_tab_pane_cp2_srt

0x896a,	// (0x0005afeb) bg_passive_tab_pane_g1_cp2_srt

0x83f8,	// (0x0005aa79) bg_passive_tab_pane_g2_cp2_srt

0x8973,	// (0x0005aff4) bg_passive_tab_pane_g3_cp2_srt

0xb6e2,	// (0x0005dd63) bg_active_tab_pane_cp2_srt_ParamLimits

0xb6e2,	// (0x0005dd63) bg_active_tab_pane_cp2_srt

0xa9d1,	// (0x0005d052) tabs_3_active_pane_srt_g1

0xa9d9,	// (0x0005d05a) tabs_3_active_pane_srt_t1_ParamLimits

0xa9d9,	// (0x0005d05a) tabs_3_active_pane_srt_t1

0x896a,	// (0x0005afeb) bg_active_tab_pane_g1_cp2_srt

0x83f8,	// (0x0005aa79) bg_active_tab_pane_g2_cp2_srt

0x8973,	// (0x0005aff4) bg_active_tab_pane_g3_cp2_srt

0x6d51,	// (0x000593d2) tabs_4_active_pane_srt_ParamLimits

0x6d51,	// (0x000593d2) tabs_4_active_pane_srt

0x6d63,	// (0x000593e4) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6d63,	// (0x000593e4) tabs_4_passive_pane_cp2_srt

0x62bc,	// (0x0005893d) aid_size_cell_toolbar

0x5b4e,	// (0x000581cf) main_idle_act_pane_ParamLimits

0x649f,	// (0x00058b20) popup_large_graphic_colour_window_ParamLimits

0x6846,	// (0x00058ec7) popup_toolbar_window_ParamLimits

0x6846,	// (0x00058ec7) popup_toolbar_window

0xa7e6,	// (0x0005ce67) list_single_graphic_2heading_pane_ParamLimits

0xa7e6,	// (0x0005ce67) list_single_graphic_2heading_pane

0x3452,	// (0x00055ad3) aid_size_cell_apps_grid_lsc_pane

0x3464,	// (0x00055ae5) aid_size_cell_apps_grid_prt_pane

0x8ae2,	// (0x0005b163) bg_wml_button_pane_cp1_ParamLimits

0x8ae2,	// (0x0005b163) bg_wml_button_pane_cp1

0x92c4,	// (0x0005b945) form_midp_field_text_pane_t1_ParamLimits

0x90b6,	// (0x0005b737) input_focus_pane_cp050_ParamLimits

0x92ef,	// (0x0005b970) list_midp_form_text_pane_ParamLimits

0x92a1,	// (0x0005b922) input_focus_pane_cp051_ParamLimits

0x92b5,	// (0x0005b936) list_midp_choice_pane_ParamLimits

0x916f,	// (0x0005b7f0) list_single_2graphic_pane_cp3_ParamLimits

0x916f,	// (0x0005b7f0) list_single_2graphic_pane_cp3

0x9185,	// (0x0005b806) list_single_midp_graphic_pane_ParamLimits

0x9185,	// (0x0005b806) list_single_midp_graphic_pane

0x4c1d,	// (0x0005729e) list_single_graphic_2heading_pane_g1_ParamLimits

0x4c1d,	// (0x0005729e) list_single_graphic_2heading_pane_g1

0x4c29,	// (0x000572aa) list_single_graphic_2heading_pane_g4_ParamLimits

0x4c29,	// (0x000572aa) list_single_graphic_2heading_pane_g4

0x4c35,	// (0x000572b6) list_single_graphic_2heading_pane_g5_ParamLimits

0x4c35,	// (0x000572b6) list_single_graphic_2heading_pane_g5

0x0002,

0xf78e,	// (0x00061e0f) list_single_graphic_2heading_pane_g_ParamLimits

0xf78e,	// (0x00061e0f) list_single_graphic_2heading_pane_g

0x4c41,	// (0x000572c2) list_single_graphic_2heading_pane_t1_ParamLimits

0x4c41,	// (0x000572c2) list_single_graphic_2heading_pane_t1

0x4c55,	// (0x000572d6) list_single_graphic_2heading_pane_t2_ParamLimits

0x4c55,	// (0x000572d6) list_single_graphic_2heading_pane_t2

0x4c71,	// (0x000572f2) list_single_graphic_2heading_pane_t3_ParamLimits

0x4c71,	// (0x000572f2) list_single_graphic_2heading_pane_t3

0x0002,

0xf795,	// (0x00061e16) list_single_graphic_2heading_pane_t_ParamLimits

0xf795,	// (0x00061e16) list_single_graphic_2heading_pane_t

0x8f50,	// (0x0005b5d1) bg_popup_sub_pane_cp2

0x8f7a,	// (0x0005b5fb) grid_toobar_pane

0x6905,	// (0x00058f86) cell_toolbar_pane_ParamLimits

0x6905,	// (0x00058f86) cell_toolbar_pane

0x8fce,	// (0x0005b64f) cell_toolbar_pane_g1_ParamLimits

0x8fce,	// (0x0005b64f) cell_toolbar_pane_g1

0x8fe2,	// (0x0005b663) cell_toolbar_pane_g2_ParamLimits

0x8fe2,	// (0x0005b663) cell_toolbar_pane_g2

0x0001,

0xf7a3,	// (0x00061e24) cell_toolbar_pane_g_ParamLimits

0xf7a3,	// (0x00061e24) cell_toolbar_pane_g

0x9004,	// (0x0005b685) grid_highlight_pane_cp2_ParamLimits

0x9004,	// (0x0005b685) grid_highlight_pane_cp2

0x901e,	// (0x0005b69f) toolbar_button_pane

0x902a,	// (0x0005b6ab) toolbar_button_pane_g1

0x9032,	// (0x0005b6b3) toolbar_button_pane_g2

0x903a,	// (0x0005b6bb) toolbar_button_pane_g3

0x9042,	// (0x0005b6c3) toolbar_button_pane_g4

0x904a,	// (0x0005b6cb) toolbar_button_pane_g5

0x9052,	// (0x0005b6d3) toolbar_button_pane_g6

0x905a,	// (0x0005b6db) toolbar_button_pane_g7

0x9062,	// (0x0005b6e3) toolbar_button_pane_g8

0x906a,	// (0x0005b6eb) toolbar_button_pane_g9

0x0009,

0xf7a8,	// (0x00061e29) toolbar_button_pane_g

0x693d,	// (0x00058fbe) list_single_2graphic_pane_g1_cp3_ParamLimits

0x693d,	// (0x00058fbe) list_single_2graphic_pane_g1_cp3

0x6949,	// (0x00058fca) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6949,	// (0x00058fca) list_single_2graphic_pane_g2_cp3

0x695a,	// (0x00058fdb) list_single_2graphic_pane_g3_cp3

0x6962,	// (0x00058fe3) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6962,	// (0x00058fe3) list_single_2graphic_pane_g4_cp3

0x696e,	// (0x00058fef) list_single_2graphic_pane_t1_cp3_ParamLimits

0x696e,	// (0x00058fef) list_single_2graphic_pane_t1_cp3

0x6989,	// (0x0005900a) list_single_midp_graphic_pane_g2_ParamLimits

0x6989,	// (0x0005900a) list_single_midp_graphic_pane_g2

0x4c0d,	// (0x0005728e) aid_zoom_text_primary

0x4c15,	// (0x00057296) aid_zoom_text_secondary

0x8a24,	// (0x0005b0a5) status_small_pane_g7_ParamLimits

0x8a24,	// (0x0005b0a5) status_small_pane_g7

0x8a47,	// (0x0005b0c8) status_small_pane_t1_ParamLimits

0x50c1,	// (0x00057742) title_pane_g2

0x0003,

0xf527,	// (0x00061ba8) title_pane_g

0x532a,	// (0x000579ab) aid_size_cell_colour_1_pane_ParamLimits

0x532a,	// (0x000579ab) aid_size_cell_colour_1_pane

0x533e,	// (0x000579bf) aid_size_cell_colour_2_pane_ParamLimits

0x533e,	// (0x000579bf) aid_size_cell_colour_2_pane

0x5352,	// (0x000579d3) aid_size_cell_colour_3_pane_ParamLimits

0x5352,	// (0x000579d3) aid_size_cell_colour_3_pane

0x5366,	// (0x000579e7) aid_size_cell_colour_4_pane_ParamLimits

0x5366,	// (0x000579e7) aid_size_cell_colour_4_pane

0x5ba8,	// (0x00058229) title_pane_stacon_g1_ParamLimits

0x5ba8,	// (0x00058229) title_pane_stacon_g1

0x96ce,	// (0x0005bd4f) popup_note_wait_window_g3_ParamLimits

0x96ce,	// (0x0005bd4f) popup_note_wait_window_g3

0x9745,	// (0x0005bdc6) popup_note_wait_window_t5_ParamLimits

0x9745,	// (0x0005bdc6) popup_note_wait_window_t5

0xb694,	// (0x0005dd15) main_feb_china_hwr_fs_writing_pane

0x6364,	// (0x000589e5) popup_feb_china_hwr_fs_window_ParamLimits

0x6364,	// (0x000589e5) popup_feb_china_hwr_fs_window

0x69ab,	// (0x0005902c) aid_size_cell_hwr_fs_ParamLimits

0x69ab,	// (0x0005902c) aid_size_cell_hwr_fs

0x90b6,	// (0x0005b737) bg_popup_sub_pane_cp3_ParamLimits

0x90b6,	// (0x0005b737) bg_popup_sub_pane_cp3

0x69c0,	// (0x00059041) grid_hwr_fs_pane_ParamLimits

0x69c0,	// (0x00059041) grid_hwr_fs_pane

0x69d8,	// (0x00059059) linegrid_hwr_fs_pane_ParamLimits

0x69d8,	// (0x00059059) linegrid_hwr_fs_pane

0x69e8,	// (0x00059069) cell_hwr_fs_pane_ParamLimits

0x69e8,	// (0x00059069) cell_hwr_fs_pane

0x90c2,	// (0x0005b743) linegrid_hwr_fs_pane_g1_ParamLimits

0x90c2,	// (0x0005b743) linegrid_hwr_fs_pane_g1

0x90ce,	// (0x0005b74f) linegrid_hwr_fs_pane_g2_ParamLimits

0x90ce,	// (0x0005b74f) linegrid_hwr_fs_pane_g2

0x90e0,	// (0x0005b761) linegrid_hwr_fs_pane_g3_ParamLimits

0x90e0,	// (0x0005b761) linegrid_hwr_fs_pane_g3

0x6a0c,	// (0x0005908d) linegrid_hwr_fs_pane_g4_ParamLimits

0x6a0c,	// (0x0005908d) linegrid_hwr_fs_pane_g4

0x6a2a,	// (0x000590ab) linegrid_hwr_fs_pane_g5_ParamLimits

0x6a2a,	// (0x000590ab) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d3,	// (0x00061e54) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d3,	// (0x00061e54) linegrid_hwr_fs_pane_g

0x90ec,	// (0x0005b76d) cell_hwr_fs_pane_g1_ParamLimits

0x90ec,	// (0x0005b76d) cell_hwr_fs_pane_g1

0x8e8d,	// (0x0005b50e) cell_hwr_fs_pane_g2_ParamLimits

0x8e8d,	// (0x0005b50e) cell_hwr_fs_pane_g2

0x9102,	// (0x0005b783) cell_hwr_fs_pane_g3_ParamLimits

0x9102,	// (0x0005b783) cell_hwr_fs_pane_g3

0x910f,	// (0x0005b790) cell_hwr_fs_pane_g4_ParamLimits

0x910f,	// (0x0005b790) cell_hwr_fs_pane_g4

0x0003,

0xf7de,	// (0x00061e5f) cell_hwr_fs_pane_g_ParamLimits

0xf7de,	// (0x00061e5f) cell_hwr_fs_pane_g

0x6a40,	// (0x000590c1) cell_hwr_fs_pane_t1

0xb694,	// (0x0005dd15) grid_highlight_pane_cp6

0xb694,	// (0x0005dd15) main_idle_act2_pane

0x3261,	// (0x000558e2) aid_inside_area_popup_secondary

0x9f6c,	// (0x0005c5ed) aid_inside_area_window_primary_ParamLimits

0x9f6c,	// (0x0005c5ed) aid_inside_area_window_primary

0xab38,	// (0x0005d1b9) ai2_news_ticker_pane

0xab40,	// (0x0005d1c1) aid_size_cell_ai1_link_ParamLimits

0xab40,	// (0x0005d1c1) aid_size_cell_ai1_link

0xab5a,	// (0x0005d1db) popup_ai2_data_window_ParamLimits

0xab5a,	// (0x0005d1db) popup_ai2_data_window

0xab78,	// (0x0005d1f9) popup_ai2_link_window_ParamLimits

0xab78,	// (0x0005d1f9) popup_ai2_link_window

0x90b6,	// (0x0005b737) bg_popup_sub_pane_cp4_ParamLimits

0x90b6,	// (0x0005b737) bg_popup_sub_pane_cp4

0xab8e,	// (0x0005d20f) grid_ai2_link_pane_ParamLimits

0xab8e,	// (0x0005d20f) grid_ai2_link_pane

0xaba5,	// (0x0005d226) popup_ai2_link_window_g1_ParamLimits

0xaba5,	// (0x0005d226) popup_ai2_link_window_g1

0xabb1,	// (0x0005d232) popup_ai2_link_window_g2_ParamLimits

0xabb1,	// (0x0005d232) popup_ai2_link_window_g2

0x0001,

0xf9b1,	// (0x00062032) popup_ai2_link_window_g_ParamLimits

0xf9b1,	// (0x00062032) popup_ai2_link_window_g

0xabc2,	// (0x0005d243) ai2_mp_button_pane

0xabca,	// (0x0005d24b) ai2_mp_volume_pane

0x92a1,	// (0x0005b922) bg_popup_sub_pane_cp5_ParamLimits

0x92a1,	// (0x0005b922) bg_popup_sub_pane_cp5

0xabd2,	// (0x0005d253) heading_ai2_gene_pane_ParamLimits

0xabd2,	// (0x0005d253) heading_ai2_gene_pane

0xabde,	// (0x0005d25f) list_ai2_gene_pane_ParamLimits

0xabde,	// (0x0005d25f) list_ai2_gene_pane

0xac26,	// (0x0005d2a7) cell_ai2_link_pane_ParamLimits

0xac26,	// (0x0005d2a7) cell_ai2_link_pane

0xac3c,	// (0x0005d2bd) cell_ai2_link_pane_g1

0xb694,	// (0x0005dd15) grid_highlight_pane_cp7

0x6e09,	// (0x0005948a) ai2_mp_volume_pane_g1

0xad0f,	// (0x0005d390) ai2_mp_volume_pane_g2

0xac84,	// (0x0005d305) list_ai2_gene_pane_t1

0xad17,	// (0x0005d398) ai2_mp_volume_pane_g3

0x0002,

0xf9ca,	// (0x0006204b) ai2_mp_volume_pane_g

0x6e11,	// (0x00059492) volume_small_pane_cp3

0xad1f,	// (0x0005d3a0) aid_size_cell_ai2_button

0xad27,	// (0x0005d3a8) grid_ai2_button_pane

0xad30,	// (0x0005d3b1) cell_ai2_button_pane_ParamLimits

0xad30,	// (0x0005d3b1) cell_ai2_button_pane

0xb68a,	// (0x0005dd0b) cell_ai2_button_pane_g1

0xb694,	// (0x0005dd15) grid_highlight_pane_cp8

0xaccf,	// (0x0005d350) ai2_gene_pane_t1_ParamLimits

0xaccf,	// (0x0005d350) ai2_gene_pane_t1

0x62b2,	// (0x00058933) aid_height_parent_landscape

0xa5ec,	// (0x0005cc6d) aid_height_set_list

0xa5fd,	// (0x0005cc7e) aid_size_parent

0xa957,	// (0x0005cfd8) aid_size_cell_graphic_pane_ParamLimits

0xabee,	// (0x0005d26f) popup_ai2_data_window_g1_ParamLimits

0xabee,	// (0x0005d26f) popup_ai2_data_window_g1

0xabfa,	// (0x0005d27b) ai2_news_ticker_pane_g1

0xac02,	// (0x0005d283) ai2_news_ticker_pane_g2

0x0001,

0xf9b6,	// (0x00062037) ai2_news_ticker_pane_g

0xac0a,	// (0x0005d28b) ai2_news_ticker_pane_t1

0xac18,	// (0x0005d299) ai2_news_ticker_pane_t2

0x0001,

0xf9bb,	// (0x0006203c) ai2_news_ticker_pane_t

0xac45,	// (0x0005d2c6) heading_ai2_gene_pane_g1

0xac4d,	// (0x0005d2ce) heading_ai2_gene_pane_t1_ParamLimits

0xac4d,	// (0x0005d2ce) heading_ai2_gene_pane_t1

0xac62,	// (0x0005d2e3) list_highlight_pane_cp6

0xac6a,	// (0x0005d2eb) ai2_gene_pane_ParamLimits

0xac6a,	// (0x0005d2eb) ai2_gene_pane

0xac92,	// (0x0005d313) list_ai2_gene_pane_t2

0x0001,

0xf9c0,	// (0x00062041) list_ai2_gene_pane_t

0xaca0,	// (0x0005d321) list_highlight_pane_cp8_ParamLimits

0xaca0,	// (0x0005d321) list_highlight_pane_cp8

0xacb1,	// (0x0005d332) ai2_gene_pane_g1_ParamLimits

0xacb1,	// (0x0005d332) ai2_gene_pane_g1

0xacc3,	// (0x0005d344) ai2_gene_pane_g2_ParamLimits

0xacc3,	// (0x0005d344) ai2_gene_pane_g2

0x0001,

0xf9c5,	// (0x00062046) ai2_gene_pane_g_ParamLimits

0xf9c5,	// (0x00062046) ai2_gene_pane_g

0xf41d,	// (0x00061a9e) scroll_pane_cp12

0x6271,	// (0x000588f2) control_pane_t3_ParamLimits

0x6271,	// (0x000588f2) control_pane_t3

0x8a38,	// (0x0005b0b9) status_small_pane_g8_ParamLimits

0x8a38,	// (0x0005b0b9) status_small_pane_g8

0x6462,	// (0x00058ae3) popup_find_window_ParamLimits

0x668f,	// (0x00058d10) popup_note_image_window_ParamLimits

0x3937,	// (0x00055fb8) list_double2_graphic_pane_vc_g1_ParamLimits

0x3937,	// (0x00055fb8) list_double2_graphic_pane_vc_g1

0x8fb6,	// (0x0005b637) list_double2_graphic_pane_vc_g2_ParamLimits

0x8fb6,	// (0x0005b637) list_double2_graphic_pane_vc_g2

0x8fc2,	// (0x0005b643) list_double2_graphic_pane_vc_g3_ParamLimits

0x8fc2,	// (0x0005b643) list_double2_graphic_pane_vc_g3

0x0002,

0xf79c,	// (0x00061e1d) list_double2_graphic_pane_vc_g_ParamLimits

0xf79c,	// (0x00061e1d) list_double2_graphic_pane_vc_g

0x3a8d,	// (0x0005610e) list_double2_graphic_pane_vc_t1_ParamLimits

0x3a8d,	// (0x0005610e) list_double2_graphic_pane_vc_t1

0x8fb6,	// (0x0005b637) list_single_heading_pane_vc_g1_ParamLimits

0x8fb6,	// (0x0005b637) list_single_heading_pane_vc_g1

0x8fc2,	// (0x0005b643) list_single_heading_pane_vc_g2_ParamLimits

0x8fc2,	// (0x0005b643) list_single_heading_pane_vc_g2

0x0001,

0xf7bd,	// (0x00061e3e) list_single_heading_pane_vc_g_ParamLimits

0xf7bd,	// (0x00061e3e) list_single_heading_pane_vc_g

0x3aa3,	// (0x00056124) list_single_heading_pane_vc_t1_ParamLimits

0x3aa3,	// (0x00056124) list_single_heading_pane_vc_t1

0x3ab9,	// (0x0005613a) list_single_heading_pane_vc_t2_ParamLimits

0x3ab9,	// (0x0005613a) list_single_heading_pane_vc_t2

0x0001,

0xf7c2,	// (0x00061e43) list_single_heading_pane_vc_t_ParamLimits

0xf7c2,	// (0x00061e43) list_single_heading_pane_vc_t

0x9072,	// (0x0005b6f3) list_setting_number_pane_vc_g1_ParamLimits

0x9072,	// (0x0005b6f3) list_setting_number_pane_vc_g1

0x907e,	// (0x0005b6ff) list_setting_number_pane_vc_g2_ParamLimits

0x907e,	// (0x0005b6ff) list_setting_number_pane_vc_g2

0x0001,

0xf7c7,	// (0x00061e48) list_setting_number_pane_vc_g_ParamLimits

0xf7c7,	// (0x00061e48) list_setting_number_pane_vc_g

0x3acb,	// (0x0005614c) list_setting_number_pane_vc_t1_ParamLimits

0x3acb,	// (0x0005614c) list_setting_number_pane_vc_t1

0x3adf,	// (0x00056160) list_setting_number_pane_vc_t2_ParamLimits

0x3adf,	// (0x00056160) list_setting_number_pane_vc_t2

0x3afb,	// (0x0005617c) list_setting_number_pane_vc_t3_ParamLimits

0x3afb,	// (0x0005617c) list_setting_number_pane_vc_t3

0x0002,

0xf7cc,	// (0x00061e4d) list_setting_number_pane_vc_t_ParamLimits

0xf7cc,	// (0x00061e4d) list_setting_number_pane_vc_t

0x3b29,	// (0x000561aa) set_value_pane_vc_ParamLimits

0x3b29,	// (0x000561aa) set_value_pane_vc

0xa7e6,	// (0x0005ce67) list_double2_graphic_pane_vc_ParamLimits

0xa7e6,	// (0x0005ce67) list_double2_graphic_pane_vc

0xa7e6,	// (0x0005ce67) list_double2_large_graphic_pane_vc_ParamLimits

0xa7e6,	// (0x0005ce67) list_double2_large_graphic_pane_vc

0xa7e6,	// (0x0005ce67) list_double2_pane_vc_ParamLimits

0xa7e6,	// (0x0005ce67) list_double2_pane_vc

0xa7e6,	// (0x0005ce67) list_double_graphic_heading_pane_vc_ParamLimits

0xa7e6,	// (0x0005ce67) list_double_graphic_heading_pane_vc

0xa7e6,	// (0x0005ce67) list_double_graphic_pane_vc_ParamLimits

0xa7e6,	// (0x0005ce67) list_double_graphic_pane_vc

0xa7e6,	// (0x0005ce67) list_double_heading_pane_vc_ParamLimits

0xa7e6,	// (0x0005ce67) list_double_heading_pane_vc

0xa7fa,	// (0x0005ce7b) list_double_large_graphic_pane_vc_ParamLimits

0xa7fa,	// (0x0005ce7b) list_double_large_graphic_pane_vc

0xa7e6,	// (0x0005ce67) list_double_number_pane_vc_ParamLimits

0xa7e6,	// (0x0005ce67) list_double_number_pane_vc

0xa7e6,	// (0x0005ce67) list_double_pane_vc_ParamLimits

0xa7e6,	// (0x0005ce67) list_double_pane_vc

0xa7e6,	// (0x0005ce67) list_double_time_pane_vc_ParamLimits

0xa7e6,	// (0x0005ce67) list_double_time_pane_vc

0xa7e6,	// (0x0005ce67) list_setting_number_pane_vc_ParamLimits

0xa7e6,	// (0x0005ce67) list_setting_number_pane_vc

0xa7e6,	// (0x0005ce67) list_setting_pane_vc_ParamLimits

0xa7e6,	// (0x0005ce67) list_setting_pane_vc

0xa7e6,	// (0x0005ce67) list_single_graphic_heading_pane_vc_ParamLimits

0xa7e6,	// (0x0005ce67) list_single_graphic_heading_pane_vc

0xa7e6,	// (0x0005ce67) list_single_heading_pane_vc_ParamLimits

0xa7e6,	// (0x0005ce67) list_single_heading_pane_vc

0x99ef,	// (0x0005c070) list_single_number_heading_pane_vc_ParamLimits

0x99ef,	// (0x0005c070) list_single_number_heading_pane_vc

0x3b72,	// (0x000561f3) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3b72,	// (0x000561f3) list_double_graphic_heading_pane_vc_g1

0x8fb6,	// (0x0005b637) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x8fb6,	// (0x0005b637) list_double_graphic_heading_pane_vc_g2

0x8fc2,	// (0x0005b643) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x8fc2,	// (0x0005b643) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9d1,	// (0x00062052) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9d1,	// (0x00062052) list_double_graphic_heading_pane_vc_g

0x3b7e,	// (0x000561ff) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3b7e,	// (0x000561ff) list_double_graphic_heading_pane_vc_t1

0x3b94,	// (0x00056215) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3b94,	// (0x00056215) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d8,	// (0x00062059) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d8,	// (0x00062059) list_double_graphic_heading_pane_vc_t

0x9072,	// (0x0005b6f3) list_setting_pane_vc_g1_ParamLimits

0x9072,	// (0x0005b6f3) list_setting_pane_vc_g1

0x907e,	// (0x0005b6ff) list_setting_pane_vc_g2_ParamLimits

0x907e,	// (0x0005b6ff) list_setting_pane_vc_g2

0x0001,

0xf7c7,	// (0x00061e48) list_setting_pane_vc_g_ParamLimits

0xf7c7,	// (0x00061e48) list_setting_pane_vc_g

0x3bb2,	// (0x00056233) list_setting_pane_vc_t1_ParamLimits

0x3bb2,	// (0x00056233) list_setting_pane_vc_t1

0x3bce,	// (0x0005624f) list_setting_pane_vc_t2_ParamLimits

0x3bce,	// (0x0005624f) list_setting_pane_vc_t2

0x0001,

0xfa06,	// (0x00062087) list_setting_pane_vc_t_ParamLimits

0xfa06,	// (0x00062087) list_setting_pane_vc_t

0x3b29,	// (0x000561aa) set_value_pane_cp_vc_ParamLimits

0x3b29,	// (0x000561aa) set_value_pane_cp_vc

0x8fb6,	// (0x0005b637) list_single_number_heading_pane_vc_g1_ParamLimits

0x8fb6,	// (0x0005b637) list_single_number_heading_pane_vc_g1

0x8fc2,	// (0x0005b643) list_single_number_heading_pane_vc_g2_ParamLimits

0x8fc2,	// (0x0005b643) list_single_number_heading_pane_vc_g2

0x0001,

0xf7bd,	// (0x00061e3e) list_single_number_heading_pane_vc_g_ParamLimits

0xf7bd,	// (0x00061e3e) list_single_number_heading_pane_vc_g

0x390f,	// (0x00055f90) list_single_number_heading_pane_vc_t1_ParamLimits

0x390f,	// (0x00055f90) list_single_number_heading_pane_vc_t1

0x3bea,	// (0x0005626b) list_single_number_heading_pane_vc_t2_ParamLimits

0x3bea,	// (0x0005626b) list_single_number_heading_pane_vc_t2

0x3925,	// (0x00055fa6) list_single_number_heading_pane_vc_t3_ParamLimits

0x3925,	// (0x00055fa6) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0b,	// (0x0006208c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0b,	// (0x0006208c) list_single_number_heading_pane_vc_t

0x3937,	// (0x00055fb8) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3937,	// (0x00055fb8) list_single_graphic_heading_pane_vc_g1

0x8fb6,	// (0x0005b637) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8fb6,	// (0x0005b637) list_single_graphic_heading_pane_vc_g4

0x8fc2,	// (0x0005b643) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x8fc2,	// (0x0005b643) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79c,	// (0x00061e1d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79c,	// (0x00061e1d) list_single_graphic_heading_pane_vc_g

0x390f,	// (0x00055f90) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x390f,	// (0x00055f90) list_single_graphic_heading_pane_vc_t1

0x3c00,	// (0x00056281) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3c00,	// (0x00056281) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa12,	// (0x00062093) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa12,	// (0x00062093) list_single_graphic_heading_pane_vc_t

0x8fb6,	// (0x0005b637) list_double2_pane_vc_g1_ParamLimits

0x8fb6,	// (0x0005b637) list_double2_pane_vc_g1

0x8fc2,	// (0x0005b643) list_double2_pane_vc_g2_ParamLimits

0x8fc2,	// (0x0005b643) list_double2_pane_vc_g2

0x0001,

0xf7bd,	// (0x00061e3e) list_double2_pane_vc_g_ParamLimits

0xf7bd,	// (0x00061e3e) list_double2_pane_vc_g

0x3b5c,	// (0x000561dd) list_double2_pane_vc_t1_ParamLimits

0x3b5c,	// (0x000561dd) list_double2_pane_vc_t1

0x9a4a,	// (0x0005c0cb) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x9a4a,	// (0x0005c0cb) list_double2_large_graphic_pane_vc_g1

0x8fb6,	// (0x0005b637) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8fb6,	// (0x0005b637) list_double2_large_graphic_pane_vc_g2

0x8fc2,	// (0x0005b643) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x8fc2,	// (0x0005b643) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa17,	// (0x00062098) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa17,	// (0x00062098) list_double2_large_graphic_pane_vc_g

0x3943,	// (0x00055fc4) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3943,	// (0x00055fc4) list_double2_large_graphic_pane_vc_t1

0x9a56,	// (0x0005c0d7) list_double_time_pane_vc_g1_ParamLimits

0x9a56,	// (0x0005c0d7) list_double_time_pane_vc_g1

0x9a62,	// (0x0005c0e3) list_double_time_pane_vc_g2_ParamLimits

0x9a62,	// (0x0005c0e3) list_double_time_pane_vc_g2

0x0001,

0xfa1e,	// (0x0006209f) list_double_time_pane_vc_g_ParamLimits

0xfa1e,	// (0x0006209f) list_double_time_pane_vc_g

0x3c12,	// (0x00056293) list_double_time_pane_vc_t1_ParamLimits

0x3c12,	// (0x00056293) list_double_time_pane_vc_t1

0x3c3c,	// (0x000562bd) list_double_time_pane_vc_t2_ParamLimits

0x3c3c,	// (0x000562bd) list_double_time_pane_vc_t2

0x3c85,	// (0x00056306) list_double_time_pane_vc_t3_ParamLimits

0x3c85,	// (0x00056306) list_double_time_pane_vc_t3

0x3c97,	// (0x00056318) list_double_time_pane_vc_t4_ParamLimits

0x3c97,	// (0x00056318) list_double_time_pane_vc_t4

0x0003,

0xfa23,	// (0x000620a4) list_double_time_pane_vc_t_ParamLimits

0xfa23,	// (0x000620a4) list_double_time_pane_vc_t

0x8fb6,	// (0x0005b637) list_double_pane_vc_g1_ParamLimits

0x8fb6,	// (0x0005b637) list_double_pane_vc_g1

0x8fc2,	// (0x0005b643) list_double_pane_vc_g2_ParamLimits

0x8fc2,	// (0x0005b643) list_double_pane_vc_g2

0x0001,

0xf7bd,	// (0x00061e3e) list_double_pane_vc_g_ParamLimits

0xf7bd,	// (0x00061e3e) list_double_pane_vc_g

0x3cab,	// (0x0005632c) list_double_pane_vc_t1_ParamLimits

0x3cab,	// (0x0005632c) list_double_pane_vc_t1

0x3cbf,	// (0x00056340) list_double_pane_vc_t2_ParamLimits

0x3cbf,	// (0x00056340) list_double_pane_vc_t2

0x0001,

0xfa2c,	// (0x000620ad) list_double_pane_vc_t_ParamLimits

0xfa2c,	// (0x000620ad) list_double_pane_vc_t

0x8fb6,	// (0x0005b637) list_double_number_pane_vc_g1_ParamLimits

0x8fb6,	// (0x0005b637) list_double_number_pane_vc_g1

0x8fc2,	// (0x0005b643) list_double_number_pane_vc_g2_ParamLimits

0x8fc2,	// (0x0005b643) list_double_number_pane_vc_g2

0x0001,

0xf7bd,	// (0x00061e3e) list_double_number_pane_vc_g_ParamLimits

0xf7bd,	// (0x00061e3e) list_double_number_pane_vc_g

0x3b4a,	// (0x000561cb) list_double_number_pane_vc_t1_ParamLimits

0x3b4a,	// (0x000561cb) list_double_number_pane_vc_t1

0x3cd5,	// (0x00056356) list_double_number_pane_vc_t2_ParamLimits

0x3cd5,	// (0x00056356) list_double_number_pane_vc_t2

0x3ce9,	// (0x0005636a) list_double_number_pane_vc_t3_ParamLimits

0x3ce9,	// (0x0005636a) list_double_number_pane_vc_t3

0x0002,

0xfa31,	// (0x000620b2) list_double_number_pane_vc_t_ParamLimits

0xfa31,	// (0x000620b2) list_double_number_pane_vc_t

0x9a6e,	// (0x0005c0ef) list_double_large_graphic_pane_vc_g1_ParamLimits

0x9a6e,	// (0x0005c0ef) list_double_large_graphic_pane_vc_g1

0x9a90,	// (0x0005c111) list_double_large_graphic_pane_vc_g2_ParamLimits

0x9a90,	// (0x0005c111) list_double_large_graphic_pane_vc_g2

0x9aa4,	// (0x0005c125) list_double_large_graphic_pane_vc_g3_ParamLimits

0x9aa4,	// (0x0005c125) list_double_large_graphic_pane_vc_g3

0x3d01,	// (0x00056382) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3d01,	// (0x00056382) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa38,	// (0x000620b9) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa38,	// (0x000620b9) list_double_large_graphic_pane_vc_g

0x3d0d,	// (0x0005638e) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3d0d,	// (0x0005638e) list_double_large_graphic_pane_vc_t1

0x3d29,	// (0x000563aa) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3d29,	// (0x000563aa) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa41,	// (0x000620c2) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa41,	// (0x000620c2) list_double_large_graphic_pane_vc_t

0x8fb6,	// (0x0005b637) list_double_heading_pane_vc_g1_ParamLimits

0x8fb6,	// (0x0005b637) list_double_heading_pane_vc_g1

0x8fc2,	// (0x0005b643) list_double_heading_pane_vc_g2_ParamLimits

0x8fc2,	// (0x0005b643) list_double_heading_pane_vc_g2

0x0001,

0xf7bd,	// (0x00061e3e) list_double_heading_pane_vc_g_ParamLimits

0xf7bd,	// (0x00061e3e) list_double_heading_pane_vc_g

0x3d49,	// (0x000563ca) list_double_heading_pane_vc_t1_ParamLimits

0x3d49,	// (0x000563ca) list_double_heading_pane_vc_t1

0x3d5b,	// (0x000563dc) list_double_heading_pane_vc_t2_ParamLimits

0x3d5b,	// (0x000563dc) list_double_heading_pane_vc_t2

0x0001,

0xfa46,	// (0x000620c7) list_double_heading_pane_vc_t_ParamLimits

0xfa46,	// (0x000620c7) list_double_heading_pane_vc_t

0x3d73,	// (0x000563f4) list_double_graphic_pane_vc_g1_ParamLimits

0x3d73,	// (0x000563f4) list_double_graphic_pane_vc_g1

0x9ab3,	// (0x0005c134) list_double_graphic_pane_vc_g2_ParamLimits

0x9ab3,	// (0x0005c134) list_double_graphic_pane_vc_g2

0x8fb6,	// (0x0005b637) list_double_graphic_pane_vc_g3_ParamLimits

0x8fb6,	// (0x0005b637) list_double_graphic_pane_vc_g3

0x0003,

0xfa4b,	// (0x000620cc) list_double_graphic_pane_vc_g_ParamLimits

0xfa4b,	// (0x000620cc) list_double_graphic_pane_vc_g

0x3d7f,	// (0x00056400) list_double_graphic_pane_vc_t1_ParamLimits

0x3d7f,	// (0x00056400) list_double_graphic_pane_vc_t1

0x3da9,	// (0x0005642a) list_double_graphic_pane_vc_t2_ParamLimits

0x3da9,	// (0x0005642a) list_double_graphic_pane_vc_t2

0x0001,

0xfa54,	// (0x000620d5) list_double_graphic_pane_vc_t_ParamLimits

0xfa54,	// (0x000620d5) list_double_graphic_pane_vc_t

0x4cbd,	// (0x0005733e) aid_size_cell_fastswap

0x4cc5,	// (0x00057346) aid_size_cell_touch_ParamLimits

0x4cc5,	// (0x00057346) aid_size_cell_touch

0x4f36,	// (0x000575b7) popup_fast_swap_wide_window_ParamLimits

0x4f36,	// (0x000575b7) popup_fast_swap_wide_window

0x5054,	// (0x000576d5) touch_pane_ParamLimits

0x5054,	// (0x000576d5) touch_pane

0xf473,	// (0x00061af4) button_value_adjust_pane_cp2

0x319a,	// (0x0005581b) button_value_adjust_pane_cp4

0x31a2,	// (0x00055823) form_field_data_pane_cp2

0x599c,	// (0x0005801d) form_field_data_wide_pane_cp2

0x3489,	// (0x00055b0a) bg_scroll_pane_ParamLimits

0x5dca,	// (0x0005844b) scroll_handle_pane_ParamLimits

0x5dde,	// (0x0005845f) scroll_sc2_down_pane_ParamLimits

0x5dde,	// (0x0005845f) scroll_sc2_down_pane

0x34ba,	// (0x00055b3b) scroll_sc2_up_pane_ParamLimits

0x34ba,	// (0x00055b3b) scroll_sc2_up_pane

0xb458,	// (0x0005dad9) grid_wheel_folder_pane_g1_ParamLimits

0xb458,	// (0x0005dad9) grid_wheel_folder_pane_g1

0x606a,	// (0x000586eb) clock_nsta_pane_cp2_ParamLimits

0x606a,	// (0x000586eb) clock_nsta_pane_cp2

0x87bb,	// (0x0005ae3c) listscroll_midp_pane_ParamLimits

0x87c7,	// (0x0005ae48) midp_canvas_pane

0x8ab2,	// (0x0005b133) nsta_clock_indic_pane

0x8aee,	// (0x0005b16f) listscroll_form_pane_vc

0x8af6,	// (0x0005b177) listscroll_set_pane_vc_ParamLimits

0x8af6,	// (0x0005b177) listscroll_set_pane_vc

0x8beb,	// (0x0005b26c) clock_nsta_pane

0x8c68,	// (0x0005b2e9) indicator_nsta_pane

0x8f50,	// (0x0005b5d1) bg_popup_sub_pane_cp2_ParamLimits

0x8f64,	// (0x0005b5e5) find_pane_cp2_ParamLimits

0x8f64,	// (0x0005b5e5) find_pane_cp2

0x8f7a,	// (0x0005b5fb) grid_toobar_pane_ParamLimits

0x908a,	// (0x0005b70b) list_form_gen_pane_vc_ParamLimits

0x908a,	// (0x0005b70b) list_form_gen_pane_vc

0x90a0,	// (0x0005b721) scroll_pane_cp8_vc_ParamLimits

0x90a0,	// (0x0005b721) scroll_pane_cp8_vc

0x911c,	// (0x0005b79d) data_form_wide_pane_vc_ParamLimits

0x911c,	// (0x0005b79d) data_form_wide_pane_vc

0x9128,	// (0x0005b7a9) form_field_data_wide_pane_vc_g1

0x9130,	// (0x0005b7b1) form_field_data_wide_pane_vc_t1_ParamLimits

0x9130,	// (0x0005b7b1) form_field_data_wide_pane_vc_t1

0xf487,	// (0x00061b08) input_focus_pane_cp6_vc_ParamLimits

0xf487,	// (0x00061b08) input_focus_pane_cp6_vc

0x942c,	// (0x0005baad) list_midp_pane_ParamLimits

0x9438,	// (0x0005bab9) scroll_pane_cp16_ParamLimits

0x9438,	// (0x0005bab9) scroll_pane_cp16

0x94a2,	// (0x0005bb23) button_value_adjust_pane_ParamLimits

0x94a2,	// (0x0005bb23) button_value_adjust_pane

0xa60f,	// (0x0005cc90) button_value_adjust_pane_cp6_ParamLimits

0xa60f,	// (0x0005cc90) button_value_adjust_pane_cp6

0xa757,	// (0x0005cdd8) settings_code_pane_cp_ParamLimits

0xa757,	// (0x0005cdd8) settings_code_pane_cp

0xb68a,	// (0x0005dd0b) cell_touch_pane_g1

0xb68a,	// (0x0005dd0b) cell_touch_pane_g2

0x0001,

0xf6e1,	// (0x00061d62) cell_touch_pane_g

0xad42,	// (0x0005d3c3) cell_touch_pane_cp_ParamLimits

0xad42,	// (0x0005d3c3) cell_touch_pane_cp

0xad52,	// (0x0005d3d3) cell_touch_pane_ParamLimits

0xad52,	// (0x0005d3d3) cell_touch_pane

0xb68a,	// (0x0005dd0b) scroll_sc2_down_pane_g1

0xb68a,	// (0x0005dd0b) scroll_sc2_up_pane_g1

0xb694,	// (0x0005dd15) bg_set_opt_pane_cp4_vc

0xad63,	// (0x0005d3e4) list_set_graphic_pane_vc_g1_ParamLimits

0xad63,	// (0x0005d3e4) list_set_graphic_pane_vc_g1

0xad6f,	// (0x0005d3f0) list_set_graphic_pane_vc_g2_ParamLimits

0xad6f,	// (0x0005d3f0) list_set_graphic_pane_vc_g2

0x0001,

0xf9dd,	// (0x0006205e) list_set_graphic_pane_vc_g_ParamLimits

0xf9dd,	// (0x0006205e) list_set_graphic_pane_vc_g

0xad7b,	// (0x0005d3fc) text_primary_small_cp13_vc_ParamLimits

0xad7b,	// (0x0005d3fc) text_primary_small_cp13_vc

0xad93,	// (0x0005d414) list_set_graphic_pane_vc_ParamLimits

0xad93,	// (0x0005d414) list_set_graphic_pane_vc

0xb694,	// (0x0005dd15) input_focus_pane_cp2_vc

0xb68a,	// (0x0005dd0b) setting_code_pane_vc_g1

0xb6f9,	// (0x0005dd7a) setting_code_pane_vc_t1

0xada6,	// (0x0005d427) set_text_pane_vc_t1_ParamLimits

0xada6,	// (0x0005d427) set_text_pane_vc_t1

0xb694,	// (0x0005dd15) input_focus_pane_cp1_vc

0xadc7,	// (0x0005d448) list_set_text_pane_vc

0xb68a,	// (0x0005dd0b) setting_text_pane_vc_g1

0xb694,	// (0x0005dd15) bg_set_opt_pane_cp2_vc

0xb6f0,	// (0x0005dd71) setting_slider_graphic_pane_vc_g1

0xadd1,	// (0x0005d452) setting_slider_graphic_pane_vc_t1

0xade3,	// (0x0005d464) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9e2,	// (0x00062063) setting_slider_graphic_pane_vc_t

0xadf5,	// (0x0005d476) slider_set_pane_cp_vc

0xadff,	// (0x0005d480) slider_set_pane_vc_g1

0xae08,	// (0x0005d489) slider_set_pane_vc_g2

0x0006,

0xf9e7,	// (0x00062068) slider_set_pane_vc_g

0xf4df,	// (0x00061b60) set_opt_bg_pane_g1_copy1

0xf4e7,	// (0x00061b68) set_opt_bg_pane_g2_copy1

0xae34,	// (0x0005d4b5) set_opt_bg_pane_g3_copy1

0xf4f7,	// (0x00061b78) set_opt_bg_pane_g4_copy1

0xf4ff,	// (0x00061b80) set_opt_bg_pane_g5_copy1

0xf507,	// (0x00061b88) set_opt_bg_pane_g6_copy1

0xae3e,	// (0x0005d4bf) set_opt_bg_pane_g7_copy1

0xae48,	// (0x0005d4c9) set_opt_bg_pane_g8_copy1

0xae52,	// (0x0005d4d3) set_opt_bg_pane_g9_copy1

0xb694,	// (0x0005dd15) bg_set_opt_pane_cp_vc

0xae5c,	// (0x0005d4dd) setting_slider_pane_vc_t1

0xae6b,	// (0x0005d4ec) setting_slider_pane_vc_t2

0xae7d,	// (0x0005d4fe) setting_slider_pane_vc_t3

0x0002,

0xf9f6,	// (0x00062077) setting_slider_pane_vc_t

0xae8f,	// (0x0005d510) slider_set_pane_vc

0x6a6d,	// (0x000590ee) volume_set_pane_vc_g1

0x6a76,	// (0x000590f7) volume_set_pane_vc_g2

0x6a7f,	// (0x00059100) volume_set_pane_vc_g3

0x6a88,	// (0x00059109) volume_set_pane_vc_g4

0x6a91,	// (0x00059112) volume_set_pane_vc_g5

0x6a9a,	// (0x0005911b) volume_set_pane_vc_g6

0x6aa3,	// (0x00059124) volume_set_pane_vc_g7

0x6aac,	// (0x0005912d) volume_set_pane_vc_g8

0x6ab5,	// (0x00059136) volume_set_pane_vc_g9

0x6abe,	// (0x0005913f) volume_set_pane_vc_g10

0x0009,

0xf894,	// (0x00061f15) volume_set_pane_vc_g

0xae99,	// (0x0005d51a) volume_set_pane_vc

0xaea3,	// (0x0005d524) button_value_adjust_pane_cp1_vc

0xaead,	// (0x0005d52e) list_highlight_pane_cp2_vc

0xaeb6,	// (0x0005d537) list_set_pane_vc_ParamLimits

0xaeb6,	// (0x0005d537) list_set_pane_vc

0xaf24,	// (0x0005d5a5) main_pane_set_vc_t1_ParamLimits

0xaf24,	// (0x0005d5a5) main_pane_set_vc_t1

0xaf39,	// (0x0005d5ba) main_pane_set_vc_t2_ParamLimits

0xaf39,	// (0x0005d5ba) main_pane_set_vc_t2

0xaf4b,	// (0x0005d5cc) main_pane_set_vc_t3_ParamLimits

0xaf4b,	// (0x0005d5cc) main_pane_set_vc_t3

0xaf5f,	// (0x0005d5e0) main_pane_set_vc_t4_ParamLimits

0xaf5f,	// (0x0005d5e0) main_pane_set_vc_t4

0x0003,

0xf9fd,	// (0x0006207e) main_pane_set_vc_t_ParamLimits

0xf9fd,	// (0x0006207e) main_pane_set_vc_t

0xaf73,	// (0x0005d5f4) setting_code_pane_vc_ParamLimits

0xaf73,	// (0x0005d5f4) setting_code_pane_vc

0xaf84,	// (0x0005d605) setting_slider_graphic_pane_vc

0xaf84,	// (0x0005d605) setting_slider_pane_vc

0xaf84,	// (0x0005d605) setting_text_pane_vc

0xaf84,	// (0x0005d605) setting_volume_pane_vc

0xaf8e,	// (0x0005d60f) scroll_pane_cp121_vc

0xf461,	// (0x00061ae2) set_content_pane_vc

0xaf96,	// (0x0005d617) button_value_adjust_pane_g1

0xaf9f,	// (0x0005d620) button_value_adjust_pane_g2

0x0001,

0xfa59,	// (0x000620da) button_value_adjust_pane_g

0xafa8,	// (0x0005d629) form_field_slider_wide_pane_vc_t1_ParamLimits

0xafa8,	// (0x0005d629) form_field_slider_wide_pane_vc_t1

0xafba,	// (0x0005d63b) form_field_slider_wide_pane_vc_t2_ParamLimits

0xafba,	// (0x0005d63b) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5e,	// (0x000620df) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5e,	// (0x000620df) form_field_slider_wide_pane_vc_t

0xb71e,	// (0x0005dd9f) input_focus_pane_cp10_vc_ParamLimits

0xb71e,	// (0x0005dd9f) input_focus_pane_cp10_vc

0xafe6,	// (0x0005d667) slider_cont_pane_cp1_vc_ParamLimits

0xafe6,	// (0x0005d667) slider_cont_pane_cp1_vc

0xaff8,	// (0x0005d679) slider_form_pane_g1_cp2

0xae08,	// (0x0005d489) slider_form_pane_g2_cp2

0xb025,	// (0x0005d6a6) form_field_slider_pane_vc_t3

0xb033,	// (0x0005d6b4) form_field_slider_pane_vc_t4

0xb041,	// (0x0005d6c2) slider_form_pane_vc_ParamLimits

0xb041,	// (0x0005d6c2) slider_form_pane_vc

0xb04e,	// (0x0005d6cf) form_field_slider_pane_vc_t1_ParamLimits

0xb04e,	// (0x0005d6cf) form_field_slider_pane_vc_t1

0xafba,	// (0x0005d63b) form_field_slider_pane_vc_t2_ParamLimits

0xafba,	// (0x0005d63b) form_field_slider_pane_vc_t2

0x0001,

0xfa70,	// (0x000620f1) form_field_slider_pane_vc_t_ParamLimits

0xfa70,	// (0x000620f1) form_field_slider_pane_vc_t

0xb71e,	// (0x0005dd9f) input_focus_pane_cp9_vc_ParamLimits

0xb71e,	// (0x0005dd9f) input_focus_pane_cp9_vc

0xb064,	// (0x0005d6e5) slider_cont_pane_vc_ParamLimits

0xb064,	// (0x0005d6e5) slider_cont_pane_vc

0xb078,	// (0x0005d6f9) list_form_graphic_pane_cp_vc_ParamLimits

0xb078,	// (0x0005d6f9) list_form_graphic_pane_cp_vc

0x9128,	// (0x0005b7a9) form_field_popup_wide_pane_vc_g1

0xb08d,	// (0x0005d70e) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb08d,	// (0x0005d70e) form_field_popup_wide_pane_vc_t1

0xf487,	// (0x00061b08) input_focus_pane_cp8_vc_ParamLimits

0xf487,	// (0x00061b08) input_focus_pane_cp8_vc

0xb0d2,	// (0x0005d753) list_form_wide_pane_vc_ParamLimits

0xb0d2,	// (0x0005d753) list_form_wide_pane_vc

0xb0de,	// (0x0005d75f) list_form_graphic_pane_vc_g1

0xb0e6,	// (0x0005d767) list_form_graphic_pane_vc_t1_ParamLimits

0xb0e6,	// (0x0005d767) list_form_graphic_pane_vc_t1

0xb6e2,	// (0x0005dd63) list_highlight_pane_cp5_vc_ParamLimits

0xb6e2,	// (0x0005dd63) list_highlight_pane_cp5_vc

0xb102,	// (0x0005d783) list_form_graphic_pane_vc_ParamLimits

0xb102,	// (0x0005d783) list_form_graphic_pane_vc

0x9128,	// (0x0005b7a9) form_field_popup_pane_vc_g1

0xb118,	// (0x0005d799) form_field_popup_pane_vc_t1_ParamLimits

0xb118,	// (0x0005d799) form_field_popup_pane_vc_t1

0xf487,	// (0x00061b08) input_focus_pane_cp7_vc_ParamLimits

0xf487,	// (0x00061b08) input_focus_pane_cp7_vc

0xb12f,	// (0x0005d7b0) list_form_pane_vc_ParamLimits

0xb12f,	// (0x0005d7b0) list_form_pane_vc

0xb13b,	// (0x0005d7bc) data_form_pane_vc_t1_ParamLimits

0xb13b,	// (0x0005d7bc) data_form_pane_vc_t1

0xf4df,	// (0x00061b60) input_focus_pane_vc_g1

0xf4e7,	// (0x00061b68) input_focus_pane_vc_g2

0xf4ef,	// (0x00061b70) input_focus_pane_vc_g3

0xf4f7,	// (0x00061b78) input_focus_pane_vc_g4

0xf4ff,	// (0x00061b80) input_focus_pane_vc_g5

0xf507,	// (0x00061b88) input_focus_pane_vc_g6

0xf50f,	// (0x00061b90) input_focus_pane_vc_g7

0xf517,	// (0x00061b98) input_focus_pane_vc_g8

0xf51f,	// (0x00061ba0) input_focus_pane_vc_g9

0xb68a,	// (0x0005dd0b) input_focus_pane_vc_g10

0x0009,

0xf66a,	// (0x00061ceb) input_focus_pane_vc_g

0x911c,	// (0x0005b79d) data_form_pane_vc_ParamLimits

0x911c,	// (0x0005b79d) data_form_pane_vc

0x9128,	// (0x0005b7a9) form_field_data_pane_vc_g1

0xb158,	// (0x0005d7d9) form_field_data_pane_vc_t1_ParamLimits

0xb158,	// (0x0005d7d9) form_field_data_pane_vc_t1

0xf487,	// (0x00061b08) input_focus_pane_vc_ParamLimits

0xf487,	// (0x00061b08) input_focus_pane_vc

0xb172,	// (0x0005d7f3) button_value_adjust_pane_cp3_vc

0xb17a,	// (0x0005d7fb) button_value_adjust_pane_cp5_vc

0xb182,	// (0x0005d803) form_field_data_pane_vc_ParamLimits

0xb182,	// (0x0005d803) form_field_data_pane_vc

0xb19d,	// (0x0005d81e) form_field_data_pane_vc_cp2

0xb1a5,	// (0x0005d826) form_field_data_wide_pane_vc_ParamLimits

0xb1a5,	// (0x0005d826) form_field_data_wide_pane_vc

0xb1bf,	// (0x0005d840) form_field_data_wide_pane_vc_cp2

0xb1c7,	// (0x0005d848) form_field_popup_pane_vc_ParamLimits

0xb1c7,	// (0x0005d848) form_field_popup_pane_vc

0xb1e2,	// (0x0005d863) form_field_popup_wide_pane_vc_ParamLimits

0xb1e2,	// (0x0005d863) form_field_popup_wide_pane_vc

0xb1fc,	// (0x0005d87d) form_field_slider_pane_vc_ParamLimits

0xb1fc,	// (0x0005d87d) form_field_slider_pane_vc

0xb20f,	// (0x0005d890) form_field_slider_wide_pane_vc_ParamLimits

0xb20f,	// (0x0005d890) form_field_slider_wide_pane_vc

0xb222,	// (0x0005d8a3) grid_touch_1_pane_ParamLimits

0xb222,	// (0x0005d8a3) grid_touch_1_pane

0xb22e,	// (0x0005d8af) grid_touch_2_pane_ParamLimits

0xb22e,	// (0x0005d8af) grid_touch_2_pane

0x8a7d,	// (0x0005b0fe) touch_pane_g1_ParamLimits

0x8a7d,	// (0x0005b0fe) touch_pane_g1

0xb248,	// (0x0005d8c9) cell_app_pane_cp_wide_ParamLimits

0xb248,	// (0x0005d8c9) cell_app_pane_cp_wide

0xb259,	// (0x0005d8da) grid_popup_fast_wide_pane_ParamLimits

0xb259,	// (0x0005d8da) grid_popup_fast_wide_pane

0xb26d,	// (0x0005d8ee) scroll_pane_cp19_ParamLimits

0xb26d,	// (0x0005d8ee) scroll_pane_cp19

0xb694,	// (0x0005dd15) bg_popup_window_pane_cp20

0xb281,	// (0x0005d902) listscroll_popup_fast_wide_pane

0xb289,	// (0x0005d90a) grid_indicator_nsta_pane

0xb29b,	// (0x0005d91c) clock_nsta_pane_g1

0xb2a4,	// (0x0005d925) clock_nsta_pane_t1

0xb2c0,	// (0x0005d941) cell_indicator_nsta_pane_ParamLimits

0xb2c0,	// (0x0005d941) cell_indicator_nsta_pane

0xb2f5,	// (0x0005d976) cell_indicator_nsta_pane_g1

0xb303,	// (0x0005d984) cell_indicator_nsta_pane_g2

0x0001,

0xfa81,	// (0x00062102) cell_indicator_nsta_pane_g

0xb316,	// (0x0005d997) clock_nsta_pane_cp

0xb31f,	// (0x0005d9a0) indicator_nsta_pane_cp

0xb329,	// (0x0005d9aa) nsta_clock_indic_pane_g1

0xebdd,	// (0x0006125e) grid_indicator_pane

0x35ac,	// (0x00055c2d) scroll_pane_cp29

0x5fb9,	// (0x0005863a) indicator_nsta_pane_cp2_ParamLimits

0x5fb9,	// (0x0005863a) indicator_nsta_pane_cp2

0xb6e2,	// (0x0005dd63) main_apps_wheel_pane

0x9309,	// (0x0005b98a) form_midp_field_text_pane_ParamLimits

0x9458,	// (0x0005bad9) scroll_bar_cp050_ParamLimits

0xb382,	// (0x0005da03) cell_indicator_pane_ParamLimits

0xb382,	// (0x0005da03) cell_indicator_pane

0xb39a,	// (0x0005da1b) cell_indicator_pane_g1

0xb3a4,	// (0x0005da25) grid_wheel_folder_pane_ParamLimits

0xb3a4,	// (0x0005da25) grid_wheel_folder_pane

0xb3b8,	// (0x0005da39) list_wheel_apps_pane_ParamLimits

0xb3b8,	// (0x0005da39) list_wheel_apps_pane

0xb3cb,	// (0x0005da4c) main_apps_wheel_pane_g1_ParamLimits

0xb3cb,	// (0x0005da4c) main_apps_wheel_pane_g1

0xb3e7,	// (0x0005da68) main_apps_wheel_pane_g2_ParamLimits

0xb3e7,	// (0x0005da68) main_apps_wheel_pane_g2

0x0001,

0xfa9d,	// (0x0006211e) main_apps_wheel_pane_g_ParamLimits

0xfa9d,	// (0x0006211e) main_apps_wheel_pane_g

0xb403,	// (0x0005da84) main_apps_wheel_pane_t1_ParamLimits

0xb403,	// (0x0005da84) main_apps_wheel_pane_t1

0xb42c,	// (0x0005daad) list_wheel_apps_pane_g1

0xb434,	// (0x0005dab5) list_wheel_apps_pane_g2

0xb43c,	// (0x0005dabd) list_wheel_apps_pane_g3

0xb444,	// (0x0005dac5) list_wheel_apps_pane_g4

0xb44e,	// (0x0005dacf) list_wheel_apps_pane_g5

0x0004,

0xfaa2,	// (0x00062123) list_wheel_apps_pane_g

0x8620,	// (0x0005aca1) navi_icon_text_pane

0x8b1e,	// (0x0005b19f) aid_fill_nsta

0xb46f,	// (0x0005daf0) navi_icon_text_pane_g1

0xb47b,	// (0x0005dafc) navi_icon_text_pane_t1

0x84c2,	// (0x0005ab43) list_set_graphic_pane_t1_ParamLimits

0x84c2,	// (0x0005ab43) list_set_graphic_pane_t1

0x9db3,	// (0x0005c434) popup_midp_note_alarm_window_t6_ParamLimits

0x9db3,	// (0x0005c434) popup_midp_note_alarm_window_t6

0x9dc5,	// (0x0005c446) popup_midp_note_alarm_window_t7_ParamLimits

0x9dc5,	// (0x0005c446) popup_midp_note_alarm_window_t7

0x9dd7,	// (0x0005c458) popup_midp_note_alarm_window_t8_ParamLimits

0x9dd7,	// (0x0005c458) popup_midp_note_alarm_window_t8

0x9de9,	// (0x0005c46a) popup_midp_note_alarm_window_t9_ParamLimits

0x9de9,	// (0x0005c46a) popup_midp_note_alarm_window_t9

0x9dfb,	// (0x0005c47c) popup_midp_note_alarm_window_t10_ParamLimits

0x9dfb,	// (0x0005c47c) popup_midp_note_alarm_window_t10

0x9e0d,	// (0x0005c48e) popup_midp_note_alarm_window_t11_ParamLimits

0x9e0d,	// (0x0005c48e) popup_midp_note_alarm_window_t11

0x9e1f,	// (0x0005c4a0) scroll_pane_cp17_ParamLimits

0x9e1f,	// (0x0005c4a0) scroll_pane_cp17

0x6a6d,	// (0x000590ee) volume_small_pane_cp_g1

0x6e1a,	// (0x0005949b) volume_small_pane_cp_g2

0x6e23,	// (0x000594a4) volume_small_pane_cp_g3

0x6e2c,	// (0x000594ad) volume_small_pane_cp_g4

0x6e35,	// (0x000594b6) volume_small_pane_cp_g5

0x6e3e,	// (0x000594bf) volume_small_pane_cp_g6

0x6e47,	// (0x000594c8) volume_small_pane_cp_g7

0x6e50,	// (0x000594d1) volume_small_pane_cp_g8

0x6e59,	// (0x000594da) volume_small_pane_cp_g9

0x6e62,	// (0x000594e3) volume_small_pane_cp_g10

0x8891,	// (0x0005af12) midp_ticker_pane_g1_ParamLimits

0x889d,	// (0x0005af1e) midp_ticker_pane_g2_ParamLimits

0xf736,	// (0x00061db7) midp_ticker_pane_g_ParamLimits

0x88a9,	// (0x0005af2a) midp_ticker_pane_t1_ParamLimits

0x8b34,	// (0x0005b1b5) aid_fill_nsta_2

0x9444,	// (0x0005bac5) list_form2_midp_pane

0xa79e,	// (0x0005ce1f) midp_editing_number_pane_ParamLimits

0xa7ad,	// (0x0005ce2e) midp_ticker_pane_ParamLimits

0xb48d,	// (0x0005db0e) form2_midp_field_pane

0xb4b1,	// (0x0005db32) scroll_pane_cp51

0xb4d1,	// (0x0005db52) form2_midp_button_pane_ParamLimits

0xb4d1,	// (0x0005db52) form2_midp_button_pane

0xb4e3,	// (0x0005db64) form2_midp_content_pane_ParamLimits

0xb4e3,	// (0x0005db64) form2_midp_content_pane

0xb4fd,	// (0x0005db7e) form2_midp_field_choice_group_pane

0xb505,	// (0x0005db86) form2_midp_field_pane_g1

0xb50d,	// (0x0005db8e) form2_midp_field_pane_g2

0xb515,	// (0x0005db96) form2_midp_field_pane_g3

0xb51d,	// (0x0005db9e) form2_midp_field_pane_g4

0x0003,

0xfac7,	// (0x00062148) form2_midp_field_pane_g

0xb525,	// (0x0005dba6) form2_midp_gauge_slider_pane

0xb52d,	// (0x0005dbae) form2_midp_gauge_wait_pane

0xb535,	// (0x0005dbb6) form2_midp_image_pane_ParamLimits

0xb535,	// (0x0005dbb6) form2_midp_image_pane

0xb550,	// (0x0005dbd1) form2_midp_label_pane_ParamLimits

0xb550,	// (0x0005dbd1) form2_midp_label_pane

0xb56f,	// (0x0005dbf0) form2_midp_label_pane_cp_ParamLimits

0xb56f,	// (0x0005dbf0) form2_midp_label_pane_cp

0xb590,	// (0x0005dc11) form2_midp_string_pane_ParamLimits

0xb590,	// (0x0005dc11) form2_midp_string_pane

0x6e6b,	// (0x000594ec) form2_midp_text_pane_ParamLimits

0x6e6b,	// (0x000594ec) form2_midp_text_pane

0xb5a2,	// (0x0005dc23) form2_midp_time_pane

0xb5b2,	// (0x0005dc33) input_focus_pane_cp51_ParamLimits

0xb5b2,	// (0x0005dc33) input_focus_pane_cp51

0xb5ca,	// (0x0005dc4b) form2_midp_label_pane_t1_ParamLimits

0xb5ca,	// (0x0005dc4b) form2_midp_label_pane_t1

0x6e8e,	// (0x0005950f) form2_mdip_text_pane_t1_ParamLimits

0x6e8e,	// (0x0005950f) form2_mdip_text_pane_t1

0x3dcc,	// (0x0005644d) form2_midp_time_pane_t1

0xb618,	// (0x0005dc99) form2_midp_gauge_slider_pane_t1

0xb62a,	// (0x0005dcab) form2_midp_gauge_slider_pane_t2

0xb63c,	// (0x0005dcbd) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad0,	// (0x00062151) form2_midp_gauge_slider_pane_t

0xb64e,	// (0x0005dccf) form2_midp_slider_pane

0xb65a,	// (0x0005dcdb) form2_midp_gauge_wait_pane_t1

0xb668,	// (0x0005dce9) form2_midp_wait_pane_ParamLimits

0xb668,	// (0x0005dce9) form2_midp_wait_pane

0xb747,	// (0x0005ddc8) list_single_2graphic_pane_cp4_ParamLimits

0xb747,	// (0x0005ddc8) list_single_2graphic_pane_cp4

0x9185,	// (0x0005b806) list_single_midp_graphic_pane_cp_ParamLimits

0x9185,	// (0x0005b806) list_single_midp_graphic_pane_cp

0xb694,	// (0x0005dd15) list_highlight_pane_cp20

0xb760,	// (0x0005dde1) list_single_2graphic_pane_g1_cp4

0xac45,	// (0x0005d2c6) list_single_2graphic_pane_g2_cp4

0xb768,	// (0x0005dde9) list_single_2graphic_pane_t1_cp4

0xb6e2,	// (0x0005dd63) list_highlight_pane_cp21

0xb777,	// (0x0005ddf8) list_single_midp_graphic_pane_g4_cp

0xb786,	// (0x0005de07) list_single_midp_graphic_pane_t1_cp

0xb79b,	// (0x0005de1c) form2_mdip_string_pane_t1_ParamLimits

0xb79b,	// (0x0005de1c) form2_mdip_string_pane_t1

0xb694,	// (0x0005dd15) bg_wml_button_pane_cp2

0xb68a,	// (0x0005dd0b) form2_midp_image_pane_g1

0x56eb,	// (0x00057d6c) list_double_large_graphic_pane_g5_ParamLimits

0x56eb,	// (0x00057d6c) list_double_large_graphic_pane_g5

0x87bb,	// (0x0005ae3c) midp_form_pane_ParamLimits

0xb6e2,	// (0x0005dd63) main_apps_wheel_pane_ParamLimits

0x66b7,	// (0x00058d38) popup_preview_window_ParamLimits

0x66b7,	// (0x00058d38) popup_preview_window

0x689e,	// (0x00058f1f) popup_touch_info_window_ParamLimits

0x689e,	// (0x00058f1f) popup_touch_info_window

0x68c0,	// (0x00058f41) popup_touch_menu_window_ParamLimits

0x68c0,	// (0x00058f41) popup_touch_menu_window

0xb680,	// (0x0005dd01) bg_popup_sub_pane_cp6

0xb837,	// (0x0005deb8) list_touch_menu_pane

0xb83f,	// (0x0005dec0) list_single_touch_menu_pane_ParamLimits

0xb83f,	// (0x0005dec0) list_single_touch_menu_pane

0xb857,	// (0x0005ded8) list_single_touch_menu_pane_t1

0xb6e2,	// (0x0005dd63) bg_popup_sub_pane_cp7_ParamLimits

0xb6e2,	// (0x0005dd63) bg_popup_sub_pane_cp7

0x9478,	// (0x0005baf9) heading_sub_pane

0xb865,	// (0x0005dee6) list_touch_info_pane_ParamLimits

0xb865,	// (0x0005dee6) list_touch_info_pane

0xb875,	// (0x0005def6) list_single_touch_info_pane_ParamLimits

0xb875,	// (0x0005def6) list_single_touch_info_pane

0xb887,	// (0x0005df08) list_single_touch_info_pane_t1

0xb895,	// (0x0005df16) list_single_touch_info_pane_t2

0x0001,

0xfade,	// (0x0006215f) list_single_touch_info_pane_t

0x87b3,	// (0x0005ae34) bg_popup_heading_pane_cp

0xb8a3,	// (0x0005df24) heading_sub_pane_t1

0x90b6,	// (0x0005b737) bg_popup_preview_window_pane_cp_ParamLimits

0x90b6,	// (0x0005b737) bg_popup_preview_window_pane_cp

0x9478,	// (0x0005baf9) heading_preview_pane

0xb865,	// (0x0005dee6) list_preview_pane_ParamLimits

0xb865,	// (0x0005dee6) list_preview_pane

0xb8b1,	// (0x0005df32) popup_preview_window_g1

0xb875,	// (0x0005def6) list_single_preview_pane_ParamLimits

0xb875,	// (0x0005def6) list_single_preview_pane

0xb8b9,	// (0x0005df3a) list_single_preview_pane_g1

0xb8c1,	// (0x0005df42) list_single_preview_pane_t1

0xb887,	// (0x0005df08) list_single_preview_pane_t2

0x0001,

0xfae3,	// (0x00062164) list_single_preview_pane_t

0xb8cf,	// (0x0005df50) bg_popup_heading_pane_cp2_ParamLimits

0xb8cf,	// (0x0005df50) bg_popup_heading_pane_cp2

0xb8e5,	// (0x0005df66) heading_preview_pane_g1

0xb8ed,	// (0x0005df6e) heading_preview_pane_t1_ParamLimits

0xb8ed,	// (0x0005df6e) heading_preview_pane_t1

0xebf4,	// (0x00061275) soft_indicator_pane_t1_ParamLimits

0xf3fa,	// (0x00061a7b) scroll_pane_ParamLimits

0x34b1,	// (0x00055b32) scroll_sc2_left_pane

0x34a8,	// (0x00055b29) scroll_sc2_right_pane

0x34d0,	// (0x00055b51) scroll_bg_pane_g1_ParamLimits

0x34e5,	// (0x00055b66) scroll_bg_pane_g2_ParamLimits

0x34fd,	// (0x00055b7e) scroll_bg_pane_g3_ParamLimits

0xf6c1,	// (0x00061d42) scroll_bg_pane_g_ParamLimits

0x34d0,	// (0x00055b51) scroll_handle_pane_g1_ParamLimits

0x351f,	// (0x00055ba0) scroll_handle_pane_g2_ParamLimits

0x34fd,	// (0x00055b7e) scroll_handle_pane_g3_ParamLimits

0xf6c8,	// (0x00061d49) scroll_handle_pane_g_ParamLimits

0x62fc,	// (0x0005897d) popup_choice_list_window_ParamLimits

0x62fc,	// (0x0005897d) popup_choice_list_window

0x8f5c,	// (0x0005b5dd) choice_list_pane

0x8ff6,	// (0x0005b677) cell_toolbar_pane_t1

0x901e,	// (0x0005b69f) toolbar_button_pane_ParamLimits

0xa2e9,	// (0x0005c96a) ai_gene_pane_1_t2_ParamLimits

0xa2e9,	// (0x0005c96a) ai_gene_pane_1_t2

0x0001,

0xf8f0,	// (0x00061f71) ai_gene_pane_1_t_ParamLimits

0xf8f0,	// (0x00061f71) ai_gene_pane_1_t

0xb90a,	// (0x0005df8b) scroll_sc2_left_pane_g1

0xb90a,	// (0x0005df8b) scroll_sc2_right_pane_g1

0x8ae2,	// (0x0005b163) bg_popup_sub_pane_cp10

0xb914,	// (0x0005df95) list_choice_list_pane

0xb92d,	// (0x0005dfae) list_single_choice_list_pane_ParamLimits

0xb92d,	// (0x0005dfae) list_single_choice_list_pane

0xb945,	// (0x0005dfc6) list_single_choice_list_pane_g1

0x329f,	// (0x00055920) list_single_choice_list_pane_t1_ParamLimits

0x329f,	// (0x00055920) list_single_choice_list_pane_t1

0xb94d,	// (0x0005dfce) choice_list_pane_g1

0xb955,	// (0x0005dfd6) choice_list_pane_t1

0xb680,	// (0x0005dd01) input_focus_pane_cp11

0x341d,	// (0x00055a9e) title_pane_stacon_g2_ParamLimits

0x341d,	// (0x00055a9e) title_pane_stacon_g2

0x0002,

0xf6a7,	// (0x00061d28) title_pane_stacon_g_ParamLimits

0xf6a7,	// (0x00061d28) title_pane_stacon_g

0x87b3,	// (0x0005ae34) cursor_press_pane

0x63b6,	// (0x00058a37) popup_fep_hwr_window_ParamLimits

0x63b6,	// (0x00058a37) popup_fep_hwr_window

0x6440,	// (0x00058ac1) popup_fep_vkb_window_ParamLimits

0x6440,	// (0x00058ac1) popup_fep_vkb_window

0xb963,	// (0x0005dfe4) cursor_press_pane_g1

0x0002,

0xfb0c,	// (0x0006218d) fep_vkb_side_pane_g_ParamLimits

0x6ee6,	// (0x00059567) fep_hwr_candidate_pane_ParamLimits

0x6ee6,	// (0x00059567) fep_hwr_candidate_pane

0x6f10,	// (0x00059591) fep_hwr_side_pane_ParamLimits

0x6f10,	// (0x00059591) fep_hwr_side_pane

0x6f32,	// (0x000595b3) fep_hwr_top_pane_ParamLimits

0x6f32,	// (0x000595b3) fep_hwr_top_pane

0x6f4a,	// (0x000595cb) fep_hwr_write_pane_ParamLimits

0x6f4a,	// (0x000595cb) fep_hwr_write_pane

0xfb0c,	// (0x0006218d) fep_vkb_side_pane_g

0xb96b,	// (0x0005dfec) fep_hwr_top_pane_g1

0xb97d,	// (0x0005dffe) fep_hwr_top_pane_g2

0x6f84,	// (0x00059605) fep_hwr_top_pane_g3

0x0002,

0xfae8,	// (0x00062169) fep_hwr_top_pane_g

0x6f99,	// (0x0005961a) fep_hwr_top_text_pane

0x8186,	// (0x0005a807) fep_hwr_top_text_pane_g1

0xb9b3,	// (0x0005e034) fep_hwr_top_text_pane_t1

0x70a3,	// (0x00059724) fep_hwr_candidate_pane_g1

0xbbfe,	// (0x0005e27f) fep_vkb_keypad_pane_g3_ParamLimits

0xbbfe,	// (0x0005e27f) fep_vkb_keypad_pane_g3

0xbc2a,	// (0x0005e2ab) fep_vkb_keypad_pane_g4_ParamLimits

0xbc2a,	// (0x0005e2ab) fep_vkb_keypad_pane_g4

0xbca1,	// (0x0005e322) fep_vkb_bottom_pane_g2_ParamLimits

0xbca1,	// (0x0005e322) fep_vkb_bottom_pane_g2

0x0001,

0xfb13,	// (0x00062194) fep_vkb_bottom_pane_g_ParamLimits

0xfb13,	// (0x00062194) fep_vkb_bottom_pane_g

0xb90a,	// (0x0005df8b) cell_vkb_side_pane_g2

0x0001,

0xfb1d,	// (0x0006219e) cell_vkb_side_pane_g

0xbd2c,	// (0x0005e3ad) cell_vkb_side_pane_t1

0xbd3a,	// (0x0005e3bb) cell_vkb_side_pane_t1_copy1

0xb90a,	// (0x0005df8b) bg_fep_vkb_candidate_pane_g2

0xbe7e,	// (0x0005e4ff) cell_vkb_candidate_pane_ParamLimits

0xb9c1,	// (0x0005e042) aid_size_cell_vkb_ParamLimits

0xb9c1,	// (0x0005e042) aid_size_cell_vkb

0xbe7e,	// (0x0005e4ff) cell_vkb_candidate_pane

0x70ca,	// (0x0005974b) bg_popup_fep_shadow_pane_g1

0xba53,	// (0x0005e0d4) fep_vkb_bottom_pane_ParamLimits

0xba53,	// (0x0005e0d4) fep_vkb_bottom_pane

0xba90,	// (0x0005e111) fep_vkb_candidate_pane_ParamLimits

0xba90,	// (0x0005e111) fep_vkb_candidate_pane

0xbaac,	// (0x0005e12d) fep_vkb_keypad_pane_ParamLimits

0xbaac,	// (0x0005e12d) fep_vkb_keypad_pane

0xbadf,	// (0x0005e160) fep_vkb_side_pane_ParamLimits

0xbadf,	// (0x0005e160) fep_vkb_side_pane

0xbb1b,	// (0x0005e19c) fep_vkb_top_pane_ParamLimits

0xbb1b,	// (0x0005e19c) fep_vkb_top_pane

0xbb57,	// (0x0005e1d8) fep_vkb_top_pane_g1_ParamLimits

0xbb57,	// (0x0005e1d8) fep_vkb_top_pane_g1

0xbb66,	// (0x0005e1e7) fep_vkb_top_pane_g2_ParamLimits

0xbb66,	// (0x0005e1e7) fep_vkb_top_pane_g2

0xbb75,	// (0x0005e1f6) fep_vkb_top_pane_g3_ParamLimits

0xbb75,	// (0x0005e1f6) fep_vkb_top_pane_g3

0x0003,

0xfb03,	// (0x00062184) fep_vkb_top_pane_g_ParamLimits

0xfb03,	// (0x00062184) fep_vkb_top_pane_g

0xbb93,	// (0x0005e214) fep_vkb_top_text_pane_ParamLimits

0xbb93,	// (0x0005e214) fep_vkb_top_text_pane

0xbba4,	// (0x0005e225) fep_vkb_side_pane_g1_ParamLimits

0xbba4,	// (0x0005e225) fep_vkb_side_pane_g1

0xbbed,	// (0x0005e26e) grid_vkb_side_pane_ParamLimits

0xbbed,	// (0x0005e26e) grid_vkb_side_pane

0x70d2,	// (0x00059753) bg_popup_fep_shadow_pane_g2

0x70db,	// (0x0005975c) bg_popup_fep_shadow_pane_g3

0x70e3,	// (0x00059764) bg_popup_fep_shadow_pane_g4

0x70ec,	// (0x0005976d) bg_popup_fep_shadow_pane_g5

0x70f6,	// (0x00059777) bg_popup_fep_shadow_pane_g6

0x70fe,	// (0x0005977f) bg_popup_fep_shadow_pane_g7

0xf4f7,	// (0x00061b78) bg_popup_fep_shadow_pane_g8

0xbc4c,	// (0x0005e2cd) grid_vkb_keypad_number_pane_ParamLimits

0xbc4c,	// (0x0005e2cd) grid_vkb_keypad_number_pane

0xbc60,	// (0x0005e2e1) grid_vkb_keypad_pane_ParamLimits

0xbc60,	// (0x0005e2e1) grid_vkb_keypad_pane

0xbc86,	// (0x0005e307) fep_vkb_bottom_pane_g1_ParamLimits

0xbc86,	// (0x0005e307) fep_vkb_bottom_pane_g1

0xbcaf,	// (0x0005e330) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbcaf,	// (0x0005e330) grid_vkb_keypad_bottom_left_pane

0xbcc4,	// (0x0005e345) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbcc4,	// (0x0005e345) grid_vkb_keypad_bottom_right_pane

0xbcd9,	// (0x0005e35a) fep_vkb_top_text_pane_g1

0xbcf4,	// (0x0005e375) fep_vkb_top_text_pane_t1

0xbd09,	// (0x0005e38a) cell_vkb_side_pane_ParamLimits

0xbd09,	// (0x0005e38a) cell_vkb_side_pane

0xb90a,	// (0x0005df8b) cell_vkb_side_pane_g1

0xbd48,	// (0x0005e3c9) cell_vkb_keypad_pane_ParamLimits

0xbd48,	// (0x0005e3c9) cell_vkb_keypad_pane

0xbdd5,	// (0x0005e456) cell_vkb_keypad_pane_g1

0x0008,

0xfb30,	// (0x000621b1) bg_popup_fep_shadow_pane_g

0x7110,	// (0x00059791) cell_hwr_side_pane_g1

0x7110,	// (0x00059791) cell_hwr_side_pane_g2

0xbddf,	// (0x0005e460) cell_vkb_keypad_pane_t1

0xbded,	// (0x0005e46e) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbded,	// (0x0005e46e) cell_vkb_keypad_bottom_left_pane

0xbe0a,	// (0x0005e48b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbe0a,	// (0x0005e48b) cell_vkb_keypad_bottom_right_pane

0xb90a,	// (0x0005df8b) cell_vkb_keypad_bottom_left_pane_g1

0xb90a,	// (0x0005df8b) cell_vkb_keypad_bottom_right_pane_g1

0xbe43,	// (0x0005e4c4) cell_vkb_keypad_number_pane_ParamLimits

0xbe43,	// (0x0005e4c4) cell_vkb_keypad_number_pane

0xbe62,	// (0x0005e4e3) cell_vkb_keypad_number_pane_g1

0xbe6c,	// (0x0005e4ed) cell_vkb_keypad_number_pane_g2

0xbe75,	// (0x0005e4f6) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb22,	// (0x000621a3) cell_vkb_keypad_number_pane_g

0xbddf,	// (0x0005e460) cell_vkb_keypad_number_pane_t1

0xbe9f,	// (0x0005e520) fep_vkb_candidate_pane_g1

0x0001,

0xfb43,	// (0x000621c4) cell_hwr_side_pane_g

0xbeb8,	// (0x0005e539) cell_hwr_side_pane_t1

0x711a,	// (0x0005979b) cell_hwr_side_pane_t1_copy1

0x7128,	// (0x000597a9) cell_hwr_candidate_pane_g1

0x7157,	// (0x000597d8) cell_hwr_candidate_pane_t1

0xb90a,	// (0x0005df8b) cell_vkb_candidate_pane_g2

0xbefc,	// (0x0005e57d) cell_vkb_candidate_pane_t1

0x6ead,	// (0x0005952e) bg_popup_fep_shadow_pane_ParamLimits

0x6ead,	// (0x0005952e) bg_popup_fep_shadow_pane

0x6f64,	// (0x000595e5) bg_fep_hwr_top_pane_g4

0xb98f,	// (0x0005e010) bg_hwr_side_pane_g1_ParamLimits

0xb98f,	// (0x0005e010) bg_hwr_side_pane_g1

0x6fd7,	// (0x00059658) cell_hwr_side_pane_ParamLimits

0x6fd7,	// (0x00059658) cell_hwr_side_pane

0x7014,	// (0x00059695) fep_hwr_write_pane_g1_ParamLimits

0x7014,	// (0x00059695) fep_hwr_write_pane_g1

0x7021,	// (0x000596a2) fep_hwr_write_pane_g2_ParamLimits

0x7021,	// (0x000596a2) fep_hwr_write_pane_g2

0x702e,	// (0x000596af) fep_hwr_write_pane_g3_ParamLimits

0x702e,	// (0x000596af) fep_hwr_write_pane_g3

0x703c,	// (0x000596bd) fep_hwr_write_pane_g4_ParamLimits

0x703c,	// (0x000596bd) fep_hwr_write_pane_g4

0x0005,

0xfaef,	// (0x00062170) fep_hwr_write_pane_g_ParamLimits

0xfaef,	// (0x00062170) fep_hwr_write_pane_g

0x6f64,	// (0x000595e5) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6f64,	// (0x000595e5) bg_fep_hwr_candidate_pane_g2

0x7051,	// (0x000596d2) cell_hwr_candidate_pane_ParamLimits

0x7051,	// (0x000596d2) cell_hwr_candidate_pane

0x70a3,	// (0x00059724) fep_hwr_candidate_pane_g1_ParamLimits

0xb9ef,	// (0x0005e070) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb9ef,	// (0x0005e070) bg_popup_fep_shadow_pane_cp2

0xbb85,	// (0x0005e206) fep_vkb_top_pane_g4_ParamLimits

0xbb85,	// (0x0005e206) fep_vkb_top_pane_g4

0xbbcb,	// (0x0005e24c) fep_vkb_side_pane_g2_ParamLimits

0xbbcb,	// (0x0005e24c) fep_vkb_side_pane_g2

0x5898,	// (0x00057f19) list_setting_pane_t4_ParamLimits

0x5898,	// (0x00057f19) list_setting_pane_t4

0x5934,	// (0x00057fb5) list_setting_number_pane_t5_ParamLimits

0x5934,	// (0x00057fb5) list_setting_number_pane_t5

0x81cd,	// (0x0005a84e) list_double_heading_pane_cp2_ParamLimits

0x81cd,	// (0x0005a84e) list_double_heading_pane_cp2

0xbf0a,	// (0x0005e58b) list_double_heading_pane_g1_cp2_ParamLimits

0xbf0a,	// (0x0005e58b) list_double_heading_pane_g1_cp2

0xbf16,	// (0x0005e597) list_double_heading_pane_g2_cp2_ParamLimits

0xbf16,	// (0x0005e597) list_double_heading_pane_g2_cp2

0xbf2a,	// (0x0005e5ab) list_double_heading_pane_t1_cp2_ParamLimits

0xbf2a,	// (0x0005e5ab) list_double_heading_pane_t1_cp2

0xbf40,	// (0x0005e5c1) list_double_heading_pane_t2_cp2_ParamLimits

0xbf40,	// (0x0005e5c1) list_double_heading_pane_t2_cp2

0xb678,	// (0x0005dcf9) aid_value_unit2

0x4f94,	// (0x00057615) popup_preview_fixed_window

0xecd4,	// (0x00061355) bg_popup_preview_window_pane_cp02

0xbf52,	// (0x0005e5d3) list_preview_fixed_pane

0xbf98,	// (0x0005e619) list_empty_pane_fp_ParamLimits

0xbf98,	// (0x0005e619) list_empty_pane_fp

0xbf98,	// (0x0005e619) list_single_cale_day_pane_fp_ParamLimits

0xbf98,	// (0x0005e619) list_single_cale_day_pane_fp

0xbf98,	// (0x0005e619) list_single_graphic_heading_pane_fp_ParamLimits

0xbf98,	// (0x0005e619) list_single_graphic_heading_pane_fp

0xbf98,	// (0x0005e619) list_single_graphic_pane_fp_ParamLimits

0xbf98,	// (0x0005e619) list_single_graphic_pane_fp

0xbf98,	// (0x0005e619) list_single_heading_pane_fp_ParamLimits

0xbf98,	// (0x0005e619) list_single_heading_pane_fp

0xbf98,	// (0x0005e619) list_single_pane_fp_ParamLimits

0xbf98,	// (0x0005e619) list_single_pane_fp

0xbfb1,	// (0x0005e632) list_single_pane_fp_g1_ParamLimits

0xbfb1,	// (0x0005e632) list_single_pane_fp_g1

0x9ad0,	// (0x0005c151) list_single_pane_fp_g2_ParamLimits

0x9ad0,	// (0x0005c151) list_single_pane_fp_g2

0x9adc,	// (0x0005c15d) list_single_pane_fp_g3_ParamLimits

0x9adc,	// (0x0005c15d) list_single_pane_fp_g3

0xbfbd,	// (0x0005e63e) list_single_pane_fp_g4_ParamLimits

0xbfbd,	// (0x0005e63e) list_single_pane_fp_g4

0x0003,

0xfb56,	// (0x000621d7) list_single_pane_fp_g_ParamLimits

0xfb56,	// (0x000621d7) list_single_pane_fp_g

0x3ddf,	// (0x00056460) list_single_pane_fp_t1_ParamLimits

0x3ddf,	// (0x00056460) list_single_pane_fp_t1

0x3df6,	// (0x00056477) list_single_graphic_pane_fp_g1_ParamLimits

0x3df6,	// (0x00056477) list_single_graphic_pane_fp_g1

0xbfb1,	// (0x0005e632) list_single_graphic_pane_fp_g2_ParamLimits

0xbfb1,	// (0x0005e632) list_single_graphic_pane_fp_g2

0x9ad0,	// (0x0005c151) list_single_graphic_pane_fp_g3_ParamLimits

0x9ad0,	// (0x0005c151) list_single_graphic_pane_fp_g3

0x9adc,	// (0x0005c15d) list_single_graphic_pane_fp_g4_ParamLimits

0x9adc,	// (0x0005c15d) list_single_graphic_pane_fp_g4

0xbfbd,	// (0x0005e63e) list_single_graphic_pane_fp_g5_ParamLimits

0xbfbd,	// (0x0005e63e) list_single_graphic_pane_fp_g5

0x0004,

0xfb5f,	// (0x000621e0) list_single_graphic_pane_fp_g_ParamLimits

0xfb5f,	// (0x000621e0) list_single_graphic_pane_fp_g

0x3e02,	// (0x00056483) list_single_graphic_pane_fp_t1_ParamLimits

0x3e02,	// (0x00056483) list_single_graphic_pane_fp_t1

0x3df6,	// (0x00056477) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3df6,	// (0x00056477) list_single_graphic_heading_pane_fp_g1

0xbfb1,	// (0x0005e632) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xbfb1,	// (0x0005e632) list_single_graphic_heading_pane_fp_g2

0x9ad0,	// (0x0005c151) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x9ad0,	// (0x0005c151) list_single_graphic_heading_pane_fp_g3

0x9adc,	// (0x0005c15d) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x9adc,	// (0x0005c15d) list_single_graphic_heading_pane_fp_g4

0xbfbd,	// (0x0005e63e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xbfbd,	// (0x0005e63e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5f,	// (0x000621e0) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5f,	// (0x000621e0) list_single_graphic_heading_pane_fp_g

0x3e18,	// (0x00056499) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3e18,	// (0x00056499) list_single_graphic_heading_pane_fp_t1

0x3e2e,	// (0x000564af) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3e2e,	// (0x000564af) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6a,	// (0x000621eb) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6a,	// (0x000621eb) list_single_graphic_heading_pane_fp_t

0x4052,	// (0x000566d3) list_single_cale_day_pane_fp_g1_ParamLimits

0x4052,	// (0x000566d3) list_single_cale_day_pane_fp_g1

0xbfc9,	// (0x0005e64a) list_single_cale_day_pane_fp_g2_ParamLimits

0xbfc9,	// (0x0005e64a) list_single_cale_day_pane_fp_g2

0x9af0,	// (0x0005c171) list_single_cale_day_pane_fp_g3_ParamLimits

0x9af0,	// (0x0005c171) list_single_cale_day_pane_fp_g3

0x9b18,	// (0x0005c199) list_single_cale_day_pane_fp_g4_ParamLimits

0x9b18,	// (0x0005c199) list_single_cale_day_pane_fp_g4

0x9b3c,	// (0x0005c1bd) list_single_cale_day_pane_fp_g5_ParamLimits

0x9b3c,	// (0x0005c1bd) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6f,	// (0x000621f0) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6f,	// (0x000621f0) list_single_cale_day_pane_fp_g

0x408a,	// (0x0005670b) list_single_cale_day_pane_fp_t1_ParamLimits

0x408a,	// (0x0005670b) list_single_cale_day_pane_fp_t1

0x40b0,	// (0x00056731) list_single_cale_day_pane_fp_t2_ParamLimits

0x40b0,	// (0x00056731) list_single_cale_day_pane_fp_t2

0x40c9,	// (0x0005674a) list_single_cale_day_pane_fp_t3_ParamLimits

0x40c9,	// (0x0005674a) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7a,	// (0x000621fb) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7a,	// (0x000621fb) list_single_cale_day_pane_fp_t

0xbfb1,	// (0x0005e632) list_empty_pane_fp_g1_ParamLimits

0xbfb1,	// (0x0005e632) list_empty_pane_fp_g1

0x40e2,	// (0x00056763) list_empty_pane_fp_t1

0x40f0,	// (0x00056771) list_empty_pane_fp_t2

0x0001,

0xfb81,	// (0x00062202) list_empty_pane_fp_t

0xbfb1,	// (0x0005e632) list_single_heading_pane_fp_g1_ParamLimits

0xbfb1,	// (0x0005e632) list_single_heading_pane_fp_g1

0x9ad0,	// (0x0005c151) list_single_heading_pane_fp_g2_ParamLimits

0x9ad0,	// (0x0005c151) list_single_heading_pane_fp_g2

0x9adc,	// (0x0005c15d) list_single_heading_pane_fp_g3_ParamLimits

0x9adc,	// (0x0005c15d) list_single_heading_pane_fp_g3

0x0002,

0xfb86,	// (0x00062207) list_single_heading_pane_fp_g_ParamLimits

0xfb86,	// (0x00062207) list_single_heading_pane_fp_g

0x40fe,	// (0x0005677f) list_single_heading_pane_fp_t1_ParamLimits

0x40fe,	// (0x0005677f) list_single_heading_pane_fp_t1

0x4110,	// (0x00056791) list_single_heading_pane_fp_t2_ParamLimits

0x4110,	// (0x00056791) list_single_heading_pane_fp_t2

0x0001,

0xfb8d,	// (0x0006220e) list_single_heading_pane_fp_t_ParamLimits

0xfb8d,	// (0x0006220e) list_single_heading_pane_fp_t

0x32b4,	// (0x00055935) aid_size_cell_fast

0xecb7,	// (0x00061338) soft_indicator_pane_cp1_t1

0x32f1,	// (0x00055972) cell_app_pane_cp2_ParamLimits

0x32f1,	// (0x00055972) cell_app_pane_cp2

0x6ecf,	// (0x00059550) fep_hwr_candidate_drop_down_list_pane

0x70bd,	// (0x0005973e) fep_hwr_candidate_pane_g3_ParamLimits

0x70bd,	// (0x0005973e) fep_hwr_candidate_pane_g3

0x2cd0,	// (0x00055351) fep_hwr_candidate_pane_g4_ParamLimits

0x2cd0,	// (0x00055351) fep_hwr_candidate_pane_g4

0x0002,

0xfafc,	// (0x0006217d) fep_hwr_candidate_pane_g_ParamLimits

0xfafc,	// (0x0006217d) fep_hwr_candidate_pane_g

0xba7f,	// (0x0005e100) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xba7f,	// (0x0005e100) fep_vkb_candidate_drop_down_list_pane

0xbea7,	// (0x0005e528) fep_vkb_candidate_pane_g3

0xbeaf,	// (0x0005e530) fep_vkb_candidate_pane_g4

0x0002,

0xfb29,	// (0x000621aa) fep_vkb_candidate_pane_g

0x7128,	// (0x000597a9) cell_hwr_candidate_pane_g1_ParamLimits

0x7136,	// (0x000597b7) cell_hwr_candidate_pane_g3_ParamLimits

0x7136,	// (0x000597b7) cell_hwr_candidate_pane_g3

0xd112,	// (0x0005f793) cell_hwr_candidate_pane_g4_ParamLimits

0xd112,	// (0x0005f793) cell_hwr_candidate_pane_g4

0x0002,

0xfb48,	// (0x000621c9) cell_hwr_candidate_pane_g_ParamLimits

0xfb48,	// (0x000621c9) cell_hwr_candidate_pane_g

0xbec6,	// (0x0005e547) cell_vkb_candidate_pane_g3_ParamLimits

0xbec6,	// (0x0005e547) cell_vkb_candidate_pane_g3

0xbee1,	// (0x0005e562) cell_vkb_candidate_pane_g4_ParamLimits

0xbee1,	// (0x0005e562) cell_vkb_candidate_pane_g4

0xbfd5,	// (0x0005e656) cell_app_pane_cp2_g1_ParamLimits

0xbfd5,	// (0x0005e656) cell_app_pane_cp2_g1

0xbff3,	// (0x0005e674) cell_app_pane_cp2_g2_ParamLimits

0xbff3,	// (0x0005e674) cell_app_pane_cp2_g2

0x0001,

0xfb92,	// (0x00062213) cell_app_pane_cp2_g_ParamLimits

0xfb92,	// (0x00062213) cell_app_pane_cp2_g

0xbfff,	// (0x0005e680) cell_app_pane_cp2_t1_ParamLimits

0xbfff,	// (0x0005e680) cell_app_pane_cp2_t1

0xf487,	// (0x00061b08) grid_highlight_pane_cp1_ParamLimits

0xf487,	// (0x00061b08) grid_highlight_pane_cp1

0x7175,	// (0x000597f6) cell_hwr_candidate_pane_cp1_ParamLimits

0x7175,	// (0x000597f6) cell_hwr_candidate_pane_cp1

0x7128,	// (0x000597a9) fep_hwr_candidate_drop_down_list_pane_g1

0x7199,	// (0x0005981a) fep_hwr_candidate_drop_down_list_pane_g2

0x71a6,	// (0x00059827) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb97,	// (0x00062218) fep_hwr_candidate_drop_down_list_pane_g

0x71b3,	// (0x00059834) fep_hwr_candidate_drop_down_list_scroll_pane

0x71bc,	// (0x0005983d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x71bc,	// (0x0005983d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x71c9,	// (0x0005984a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x71c9,	// (0x0005984a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x71d6,	// (0x00059857) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x71d6,	// (0x00059857) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x71e3,	// (0x00059864) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x71e3,	// (0x00059864) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x71fe,	// (0x0005987f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x71fe,	// (0x0005987f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7219,	// (0x0005989a) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7219,	// (0x0005989a) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7234,	// (0x000598b5) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7234,	// (0x000598b5) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x724f,	// (0x000598d0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x724f,	// (0x000598d0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9e,	// (0x0006221f) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9e,	// (0x0006221f) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc011,	// (0x0005e692) cell_vkb_candidate_pane_cp1_ParamLimits

0xc011,	// (0x0005e692) cell_vkb_candidate_pane_cp1

0xbb85,	// (0x0005e206) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbb85,	// (0x0005e206) fep_vkb_candidate_drop_down_list_pane_g1

0xc037,	// (0x0005e6b8) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc037,	// (0x0005e6b8) fep_vkb_candidate_drop_down_list_pane_g2

0xc044,	// (0x0005e6c5) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc044,	// (0x0005e6c5) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbaf,	// (0x00062230) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbaf,	// (0x00062230) fep_vkb_candidate_drop_down_list_pane_g

0xc051,	// (0x0005e6d2) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc051,	// (0x0005e6d2) fep_vkb_candidate_drop_down_list_scroll_pane

0xc05e,	// (0x0005e6df) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc05e,	// (0x0005e6df) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc06b,	// (0x0005e6ec) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc06b,	// (0x0005e6ec) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc077,	// (0x0005e6f8) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc077,	// (0x0005e6f8) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc083,	// (0x0005e704) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc083,	// (0x0005e704) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc0a4,	// (0x0005e725) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc0a4,	// (0x0005e725) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc0c5,	// (0x0005e746) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc0c5,	// (0x0005e746) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc0e6,	// (0x0005e767) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc0e6,	// (0x0005e767) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc107,	// (0x0005e788) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc107,	// (0x0005e788) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb6,	// (0x00062237) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb6,	// (0x00062237) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x50b4,	// (0x00057735) title_pane_g1_ParamLimits

0x50c1,	// (0x00057742) title_pane_g2_ParamLimits

0xf527,	// (0x00061ba8) title_pane_g_ParamLimits

0x8176,	// (0x0005a7f7) aid_call2_pane

0x817e,	// (0x0005a7ff) aid_call_pane

0x8186,	// (0x0005a807) popup_clock_analogue_window_g1

0x8186,	// (0x0005a807) popup_clock_analogue_window_g2

0x5e27,	// (0x000584a8) popup_clock_analogue_window_g3

0x5e30,	// (0x000584b1) popup_clock_analogue_window_g4

0xb68a,	// (0x0005dd0b) popup_clock_analogue_window_g5

0x0004,

0xf6d6,	// (0x00061d57) popup_clock_analogue_window_g

0x5e38,	// (0x000584b9) popup_clock_analogue_window_t1

0x5e46,	// (0x000584c7) clock_digital_number_pane_ParamLimits

0x5e46,	// (0x000584c7) clock_digital_number_pane

0x5e52,	// (0x000584d3) clock_digital_number_pane_cp02_ParamLimits

0x5e52,	// (0x000584d3) clock_digital_number_pane_cp02

0x5e5e,	// (0x000584df) clock_digital_number_pane_cp03_ParamLimits

0x5e5e,	// (0x000584df) clock_digital_number_pane_cp03

0x5e6a,	// (0x000584eb) clock_digital_number_pane_cp04_ParamLimits

0x5e6a,	// (0x000584eb) clock_digital_number_pane_cp04

0x5e76,	// (0x000584f7) clock_digital_separator_pane_ParamLimits

0x5e76,	// (0x000584f7) clock_digital_separator_pane

0x5e82,	// (0x00058503) popup_clock_digital_window_t1_ParamLimits

0x5e82,	// (0x00058503) popup_clock_digital_window_t1

0xb68a,	// (0x0005dd0b) clock_digital_number_pane_g1

0xb68a,	// (0x0005dd0b) clock_digital_number_pane_g2

0x0001,

0xf6e1,	// (0x00061d62) clock_digital_number_pane_g

0xb68a,	// (0x0005dd0b) clock_digital_separator_pane_g1

0xb68a,	// (0x0005dd0b) clock_digital_separator_pane_g2

0x0001,

0xf6e1,	// (0x00061d62) clock_digital_separator_pane_g

0x8b1e,	// (0x0005b19f) aid_fill_nsta_ParamLimits

0x8c68,	// (0x0005b2e9) indicator_nsta_pane_ParamLimits

0x8df7,	// (0x0005b478) popup_clock_analogue_window

0x8df7,	// (0x0005b478) popup_clock_digital_window

0xb289,	// (0x0005d90a) grid_indicator_nsta_pane_ParamLimits

0xb2b2,	// (0x0005d933) clock_nsta_pane_t2

0x0001,

0xfa7c,	// (0x000620fd) clock_nsta_pane_t

0x5db7,	// (0x00058438) aid_size_max_handle

0x5dc1,	// (0x00058442) aid_size_min_handle

0x87b3,	// (0x0005ae34) editor_scroll_pane

0xc122,	// (0x0005e7a3) ex_editor_pane

0x327a,	// (0x000558fb) scroll_pane_cp13

0xf426,	// (0x00061aa7) scroll_pane_cp14

0x81b5,	// (0x0005a836) scroll_pane_cp36

0x81e3,	// (0x0005a864) list_single_graphic_hl_pane_cp2_ParamLimits

0x81e3,	// (0x0005a864) list_single_graphic_hl_pane_cp2

0x6d3d,	// (0x000593be) list_single_graphic_hl_pane_ParamLimits

0x6d3d,	// (0x000593be) list_single_graphic_hl_pane

0x4126,	// (0x000567a7) aid_size_min_hl_cp1

0xc12a,	// (0x0005e7ab) list_highlight_pane_cp34_ParamLimits

0xc12a,	// (0x0005e7ab) list_highlight_pane_cp34

0xc13b,	// (0x0005e7bc) list_single_graphic_hl_pane_g1_ParamLimits

0xc13b,	// (0x0005e7bc) list_single_graphic_hl_pane_g1

0x726a,	// (0x000598eb) list_single_graphic_hl_pane_g2_ParamLimits

0x726a,	// (0x000598eb) list_single_graphic_hl_pane_g2

0x726a,	// (0x000598eb) list_single_graphic_hl_pane_g3_ParamLimits

0x726a,	// (0x000598eb) list_single_graphic_hl_pane_g3

0x9b60,	// (0x0005c1e1) list_single_graphic_hl_pane_g4_ParamLimits

0x9b60,	// (0x0005c1e1) list_single_graphic_hl_pane_g4

0x7276,	// (0x000598f7) list_single_graphic_hl_pane_g5_ParamLimits

0x7276,	// (0x000598f7) list_single_graphic_hl_pane_g5

0x0004,

0xfbc7,	// (0x00062248) list_single_graphic_hl_pane_g_ParamLimits

0xfbc7,	// (0x00062248) list_single_graphic_hl_pane_g

0x728a,	// (0x0005990b) list_single_graphic_hl_pane_t1_ParamLimits

0x728a,	// (0x0005990b) list_single_graphic_hl_pane_t1

0xc148,	// (0x0005e7c9) aid_size_min_hl_cp2

0xc151,	// (0x0005e7d2) list_highlight_pane_cp34_cp2_ParamLimits

0xc151,	// (0x0005e7d2) list_highlight_pane_cp34_cp2

0xc13b,	// (0x0005e7bc) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc13b,	// (0x0005e7bc) list_single_graphic_hl_pane_g1_cp2

0xc15e,	// (0x0005e7df) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc15e,	// (0x0005e7df) list_single_graphic_hl_pane_g2_cp2

0xc16a,	// (0x0005e7eb) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc16a,	// (0x0005e7eb) list_single_graphic_hl_pane_g3_cp2

0xc178,	// (0x0005e7f9) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc178,	// (0x0005e7f9) list_single_graphic_hl_pane_g4_cp2

0xc184,	// (0x0005e805) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc184,	// (0x0005e805) list_single_graphic_hl_pane_g5_cp2

0x61c0,	// (0x00058841) control_pane_g4_ParamLimits

0x61c0,	// (0x00058841) control_pane_g4

0x8ae2,	// (0x0005b163) bg_popup_sub_pane_cp10_ParamLimits

0xb914,	// (0x0005df95) list_choice_list_pane_ParamLimits

0xb923,	// (0x0005dfa4) scroll_pane_cp23

0xecd4,	// (0x00061355) bg_popup_preview_window_pane_cp02_ParamLimits

0xbf52,	// (0x0005e5d3) list_preview_fixed_pane_ParamLimits

0xbf68,	// (0x0005e5e9) list_preview_fixed_pane_cp_ParamLimits

0xbf68,	// (0x0005e5e9) list_preview_fixed_pane_cp

0xbf74,	// (0x0005e5f5) popup_preview_fixed_window_g1_ParamLimits

0xbf74,	// (0x0005e5f5) popup_preview_fixed_window_g1

0xbf80,	// (0x0005e601) popup_preview_fixed_window_g2_ParamLimits

0xbf80,	// (0x0005e601) popup_preview_fixed_window_g2

0x0002,

0xfb4f,	// (0x000621d0) popup_preview_fixed_window_g_ParamLimits

0xfb4f,	// (0x000621d0) popup_preview_fixed_window_g

0x5c6b,	// (0x000582ec) aid_navi_side_left_pane_ParamLimits

0x5c80,	// (0x00058301) aid_navi_side_right_pane_ParamLimits

0x5c98,	// (0x00058319) navi_icon_pane_stacon_ParamLimits

0x5cac,	// (0x0005832d) navi_navi_pane_stacon_ParamLimits

0x5c98,	// (0x00058319) navi_text_pane_stacon_ParamLimits

0x4e4b,	// (0x000574cc) main_text_info_pane

0xc1ae,	// (0x0005e82f) listscroll_text_info_pane

0xc1b6,	// (0x0005e837) list_text_info_pane_ParamLimits

0xc1b6,	// (0x0005e837) list_text_info_pane

0xc1c5,	// (0x0005e846) scroll_pane_cp24_ParamLimits

0xc1c5,	// (0x0005e846) scroll_pane_cp24

0xc1e3,	// (0x0005e864) list_text_info_pane_t1_ParamLimits

0xc1e3,	// (0x0005e864) list_text_info_pane_t1

0x631e,	// (0x0005899f) popup_fast_swap2_window_ParamLimits

0x631e,	// (0x0005899f) popup_fast_swap2_window

0xc208,	// (0x0005e889) aid_size_cell_fast2

0xb680,	// (0x0005dd01) bg_popup_window_pane_cp17

0x9478,	// (0x0005baf9) heading_pane_cp2

0xc212,	// (0x0005e893) listscroll_fast2_pane

0xc21a,	// (0x0005e89b) grid_fast2_pane

0xc224,	// (0x0005e8a5) listscroll_fast2_pane_g1

0xc22e,	// (0x0005e8af) listscroll_fast2_pane_g2

0x0001,

0xfbd2,	// (0x00062253) listscroll_fast2_pane_g

0x327a,	// (0x000558fb) scroll_pane_cp26

0xc238,	// (0x0005e8b9) cell_fast2_pane_ParamLimits

0xc238,	// (0x0005e8b9) cell_fast2_pane

0xc24f,	// (0x0005e8d0) cell_fast2_pane_g1

0xc258,	// (0x0005e8d9) cell_fast2_pane_g2

0xc261,	// (0x0005e8e2) cell_fast2_pane_g3

0x0002,

0xfbd7,	// (0x00062258) cell_fast2_pane_g

0xf1ed,	// (0x0006186e) grid_highlight_pane_cp9

0x62e0,	// (0x00058961) main_eswt_pane_ParamLimits

0x62e0,	// (0x00058961) main_eswt_pane

0xc1da,	// (0x0005e85b) list_single_text_info_pane

0xc269,	// (0x0005e8ea) eswt_ctrl_button_pane

0xc269,	// (0x0005e8ea) eswt_ctrl_canvas_pane

0xc271,	// (0x0005e8f2) eswt_ctrl_combo_pane

0xc269,	// (0x0005e8ea) eswt_ctrl_default_pane

0xc269,	// (0x0005e8ea) eswt_ctrl_label_pane

0xc279,	// (0x0005e8fa) eswt_ctrl_wait_pane

0xc281,	// (0x0005e902) eswt_shell_pane

0xb680,	// (0x0005dd01) listscroll_eswt_app_pane

0xc2a1,	// (0x0005e922) popup_eswt_tasktip_window_ParamLimits

0xc2a1,	// (0x0005e922) popup_eswt_tasktip_window

0x90b6,	// (0x0005b737) bg_popup_window_pane_cp18

0xc2b2,	// (0x0005e933) eswt_control_pane_g1_ParamLimits

0xc2b2,	// (0x0005e933) eswt_control_pane_g1

0xc2bf,	// (0x0005e940) eswt_control_pane_g2_ParamLimits

0xc2bf,	// (0x0005e940) eswt_control_pane_g2

0xc2cc,	// (0x0005e94d) eswt_control_pane_g3_ParamLimits

0xc2cc,	// (0x0005e94d) eswt_control_pane_g3

0xc2d9,	// (0x0005e95a) eswt_control_pane_g4_ParamLimits

0xc2d9,	// (0x0005e95a) eswt_control_pane_g4

0x0003,

0xfbde,	// (0x0006225f) eswt_control_pane_g_ParamLimits

0xfbde,	// (0x0006225f) eswt_control_pane_g

0xf487,	// (0x00061b08) bg_button_pane_ParamLimits

0xf487,	// (0x00061b08) bg_button_pane

0xf202,	// (0x00061883) common_borders_pane_copy2_ParamLimits

0xf202,	// (0x00061883) common_borders_pane_copy2

0xc2e6,	// (0x0005e967) control_button_pane_g1_ParamLimits

0xc2e6,	// (0x0005e967) control_button_pane_g1

0xc2f2,	// (0x0005e973) control_button_pane_g2_ParamLimits

0xc2f2,	// (0x0005e973) control_button_pane_g2

0xc2fe,	// (0x0005e97f) control_button_pane_g3_ParamLimits

0xc2fe,	// (0x0005e97f) control_button_pane_g3

0x0002,

0xfbe7,	// (0x00062268) control_button_pane_g_ParamLimits

0xfbe7,	// (0x00062268) control_button_pane_g

0xc312,	// (0x0005e993) control_button_pane_t1

0xc320,	// (0x0005e9a1) control_button_pane_t2

0x0001,

0xfbee,	// (0x0006226f) control_button_pane_t

0x902a,	// (0x0005b6ab) bg_button_pane_g1

0x903a,	// (0x0005b6bb) bg_button_pane_g2

0x9032,	// (0x0005b6b3) bg_button_pane_g3

0x904a,	// (0x0005b6cb) bg_button_pane_g4

0x9042,	// (0x0005b6c3) bg_button_pane_g5

0x9052,	// (0x0005b6d3) bg_button_pane_g6

0x905a,	// (0x0005b6db) bg_button_pane_g7

0x906a,	// (0x0005b6eb) bg_button_pane_g8

0x9062,	// (0x0005b6e3) bg_button_pane_g9

0x0008,

0xf844,	// (0x00061ec5) bg_button_pane_g

0xb8cf,	// (0x0005df50) common_borders_pane_ParamLimits

0xb8cf,	// (0x0005df50) common_borders_pane

0xc2b2,	// (0x0005e933) eswt_control_pane_g1_copy1_ParamLimits

0xc2b2,	// (0x0005e933) eswt_control_pane_g1_copy1

0xc2bf,	// (0x0005e940) eswt_control_pane_g2_copy1_ParamLimits

0xc2bf,	// (0x0005e940) eswt_control_pane_g2_copy1

0xc2cc,	// (0x0005e94d) eswt_control_pane_g3_copy1_ParamLimits

0xc2cc,	// (0x0005e94d) eswt_control_pane_g3_copy1

0xc2d9,	// (0x0005e95a) eswt_control_pane_g4_copy1_ParamLimits

0xc2d9,	// (0x0005e95a) eswt_control_pane_g4_copy1

0xb90a,	// (0x0005df8b) bg_eswt_ctrl_canvas_pane_g1

0xb8cf,	// (0x0005df50) common_borders_pane_cp2_ParamLimits

0xb8cf,	// (0x0005df50) common_borders_pane_cp2

0xb8cf,	// (0x0005df50) common_borders_pane_cp3_ParamLimits

0xb8cf,	// (0x0005df50) common_borders_pane_cp3

0xc32e,	// (0x0005e9af) separator_horizontal_pane

0xc336,	// (0x0005e9b7) separator_vertical_pane

0xc2b2,	// (0x0005e933) eswt_control_pane_g1_copy2_ParamLimits

0xc2b2,	// (0x0005e933) eswt_control_pane_g1_copy2

0xc2bf,	// (0x0005e940) eswt_control_pane_g2_copy2_ParamLimits

0xc2bf,	// (0x0005e940) eswt_control_pane_g2_copy2

0xc2cc,	// (0x0005e94d) eswt_control_pane_g3_copy2_ParamLimits

0xc2cc,	// (0x0005e94d) eswt_control_pane_g3_copy2

0xc2d9,	// (0x0005e95a) eswt_control_pane_g4_copy2_ParamLimits

0xc2d9,	// (0x0005e95a) eswt_control_pane_g4_copy2

0xb680,	// (0x0005dd01) common_borders_pane_cp4

0xc33f,	// (0x0005e9c0) separator_horizontal_pane_g1

0xc348,	// (0x0005e9c9) separator_horizontal_pane_g2

0xc351,	// (0x0005e9d2) separator_horizontal_pane_g3

0x0002,

0xfbf3,	// (0x00062274) separator_horizontal_pane_g

0xc2b2,	// (0x0005e933) eswt_control_pane_g1_copy3_ParamLimits

0xc2b2,	// (0x0005e933) eswt_control_pane_g1_copy3

0xc2bf,	// (0x0005e940) eswt_control_pane_g2_copy3_ParamLimits

0xc2bf,	// (0x0005e940) eswt_control_pane_g2_copy3

0xc2cc,	// (0x0005e94d) eswt_control_pane_g3_copy3_ParamLimits

0xc2cc,	// (0x0005e94d) eswt_control_pane_g3_copy3

0xc2d9,	// (0x0005e95a) eswt_control_pane_g4_copy3_ParamLimits

0xc2d9,	// (0x0005e95a) eswt_control_pane_g4_copy3

0xb680,	// (0x0005dd01) common_borders_pane_cp5

0xc35a,	// (0x0005e9db) separator_vertical_pane_g1

0xc363,	// (0x0005e9e4) separator_vertical_pane_g2

0xc36c,	// (0x0005e9ed) separator_vertical_pane_g3

0x0002,

0xfbfa,	// (0x0006227b) separator_vertical_pane_g

0xc2b2,	// (0x0005e933) eswt_control_pane_g1_copy4_ParamLimits

0xc2b2,	// (0x0005e933) eswt_control_pane_g1_copy4

0xc2bf,	// (0x0005e940) eswt_control_pane_g2_copy4_ParamLimits

0xc2bf,	// (0x0005e940) eswt_control_pane_g2_copy4

0xc2cc,	// (0x0005e94d) eswt_control_pane_g3_copy4_ParamLimits

0xc2cc,	// (0x0005e94d) eswt_control_pane_g3_copy4

0xc2d9,	// (0x0005e95a) eswt_control_pane_g4_copy4_ParamLimits

0xc2d9,	// (0x0005e95a) eswt_control_pane_g4_copy4

0xc375,	// (0x0005e9f6) eswt_ctrl_combo_button_pane

0xc37d,	// (0x0005e9fe) eswt_ctrl_input_pane

0xc385,	// (0x0005ea06) popup_choice_list_window_cp70

0xc38d,	// (0x0005ea0e) eswt_ctrl_input_pane_t1

0xb680,	// (0x0005dd01) input_focus_pane_cp70

0xb8cf,	// (0x0005df50) bg_button_pane_cp70_ParamLimits

0xb8cf,	// (0x0005df50) bg_button_pane_cp70

0xc39b,	// (0x0005ea1c) eswt_ctrl_combo_button_pane_g1

0xc3a3,	// (0x0005ea24) wait_bar_pane_cp70

0x90b6,	// (0x0005b737) bg_popup_window_pane_cp70_ParamLimits

0x90b6,	// (0x0005b737) bg_popup_window_pane_cp70

0xc3ab,	// (0x0005ea2c) popup_eswt_tasktip_window_t1

0xc3c1,	// (0x0005ea42) wait_bar_pane_cp71_ParamLimits

0xc3c1,	// (0x0005ea42) wait_bar_pane_cp71

0xc3cd,	// (0x0005ea4e) grid_eswt_app_pane

0x34b1,	// (0x00055b32) scroll_pane_cp70

0xc3d6,	// (0x0005ea57) cell_eswt_app_pane_ParamLimits

0xc3d6,	// (0x0005ea57) cell_eswt_app_pane

0xc408,	// (0x0005ea89) cell_eswt_app_pane_g1_ParamLimits

0xc408,	// (0x0005ea89) cell_eswt_app_pane_g1

0xc437,	// (0x0005eab8) cell_eswt_app_pane_g2_ParamLimits

0xc437,	// (0x0005eab8) cell_eswt_app_pane_g2

0x0001,

0xfc01,	// (0x00062282) cell_eswt_app_pane_g_ParamLimits

0xfc01,	// (0x00062282) cell_eswt_app_pane_g

0xc460,	// (0x0005eae1) cell_eswt_app_pane_t1_ParamLimits

0xc460,	// (0x0005eae1) cell_eswt_app_pane_t1

0xc492,	// (0x0005eb13) grid_highlight_pane_cp70_ParamLimits

0xc492,	// (0x0005eb13) grid_highlight_pane_cp70

0x8675,	// (0x0005acf6) set_content_pane_g1

0x8a61,	// (0x0005b0e2) status_small_volume_pane

0x72a0,	// (0x00059921) status_small_volume_pane_g1

0x72a8,	// (0x00059929) volume_small2_pane

0x72b1,	// (0x00059932) volume_small2_pane_g1

0x72ba,	// (0x0005993b) volume_small2_pane_g2

0x72c3,	// (0x00059944) volume_small2_pane_g3

0x72cc,	// (0x0005994d) volume_small2_pane_g4

0x72d5,	// (0x00059956) volume_small2_pane_g5

0x72de,	// (0x0005995f) volume_small2_pane_g6

0x72e7,	// (0x00059968) volume_small2_pane_g7

0x72f0,	// (0x00059971) volume_small2_pane_g8

0x72f9,	// (0x0005997a) volume_small2_pane_g9

0x7302,	// (0x00059983) volume_small2_pane_g10

0x0009,

0xfc06,	// (0x00062287) volume_small2_pane_g

0xbcd9,	// (0x0005e35a) fep_vkb_top_text_pane_g1_ParamLimits

0xbcf4,	// (0x0005e375) fep_vkb_top_text_pane_t1_ParamLimits

0xbf8c,	// (0x0005e60d) popup_preview_fixed_window_g3_ParamLimits

0xbf8c,	// (0x0005e60d) popup_preview_fixed_window_g3

0x6831,	// (0x00058eb2) popup_toolbar_trans_pane

0xa5ec,	// (0x0005cc6d) aid_height_set_list_ParamLimits

0xa5fd,	// (0x0005cc7e) aid_size_parent_ParamLimits

0x8ae2,	// (0x0005b163) list_highlight_pane_cp2_ParamLimits

0x8675,	// (0x0005acf6) set_content_pane_g1_ParamLimits

0x9a36,	// (0x0005c0b7) list_single_image_pane_ParamLimits

0x9a36,	// (0x0005c0b7) list_single_image_pane

0xc49e,	// (0x0005eb1f) aid_size_cell_image_ParamLimits

0xc49e,	// (0x0005eb1f) aid_size_cell_image

0xc4ab,	// (0x0005eb2c) grid_single_image_pane_ParamLimits

0xc4ab,	// (0x0005eb2c) grid_single_image_pane

0xf495,	// (0x00061b16) list_single_image_pane_g1_ParamLimits

0xf495,	// (0x00061b16) list_single_image_pane_g1

0xf4a1,	// (0x00061b22) list_single_image_pane_g2_ParamLimits

0xf4a1,	// (0x00061b22) list_single_image_pane_g2

0x0001,

0xfc1b,	// (0x0006229c) list_single_image_pane_g_ParamLimits

0xfc1b,	// (0x0006229c) list_single_image_pane_g

0xc4b9,	// (0x0005eb3a) list_single_image_pane_t1_ParamLimits

0xc4b9,	// (0x0005eb3a) list_single_image_pane_t1

0xc4cf,	// (0x0005eb50) cell_image_list_pane_ParamLimits

0xc4cf,	// (0x0005eb50) cell_image_list_pane

0xc4e7,	// (0x0005eb68) cell_image_list_pane_g1

0xc4f0,	// (0x0005eb71) cell_image_list_pane_g2

0x0001,

0xfc20,	// (0x000622a1) cell_image_list_pane_g

0xc4f9,	// (0x0005eb7a) aid_size_cell_tb_trans_pane

0xf487,	// (0x00061b08) bg_tb_trans_pane

0xc50b,	// (0x0005eb8c) grid_tb_trans_pane

0x902a,	// (0x0005b6ab) bg_tb_trans_pane_g1

0x903a,	// (0x0005b6bb) bg_tb_trans_pane_g2

0x9032,	// (0x0005b6b3) bg_tb_trans_pane_g3

0x904a,	// (0x0005b6cb) bg_tb_trans_pane_g4

0x9042,	// (0x0005b6c3) bg_tb_trans_pane_g5

0x906a,	// (0x0005b6eb) bg_tb_trans_pane_g6

0x9062,	// (0x0005b6e3) bg_tb_trans_pane_g7

0x9052,	// (0x0005b6d3) bg_tb_trans_pane_g8

0x905a,	// (0x0005b6db) bg_tb_trans_pane_g9

0x0008,

0xfc25,	// (0x000622a6) bg_tb_trans_pane_g

0xc51f,	// (0x0005eba0) cell_toolbar_trans_pane_ParamLimits

0xc51f,	// (0x0005eba0) cell_toolbar_trans_pane

0xb90a,	// (0x0005df8b) cell_toolbar_trans_pane_g1

0xb495,	// (0x0005db16) list_form2_midp_pane_t1

0xb4a3,	// (0x0005db24) list_form2_midp_pane_t2

0x0001,

0xfac2,	// (0x00062143) list_form2_midp_pane_t

0xb4b1,	// (0x0005db32) scroll_pane_cp51_ParamLimits

0xb72c,	// (0x0005ddad) form2_midp_wait_pane_g1

0xb735,	// (0x0005ddb6) form2_midp_wait_pane_g2

0xb73e,	// (0x0005ddbf) form2_midp_wait_pane_g3

0x0002,

0xfad7,	// (0x00062158) form2_midp_wait_pane_g

0xb6e2,	// (0x0005dd63) list_highlight_pane_cp21_ParamLimits

0xb777,	// (0x0005ddf8) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb786,	// (0x0005de07) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x99ef,	// (0x0005c070) list_single_2graphic_im_pane_ParamLimits

0x99ef,	// (0x0005c070) list_single_2graphic_im_pane

0xc545,	// (0x0005ebc6) list_single_2graphic_im_pane_g1_ParamLimits

0xc545,	// (0x0005ebc6) list_single_2graphic_im_pane_g1

0xc556,	// (0x0005ebd7) list_single_2graphic_im_pane_g2_ParamLimits

0xc556,	// (0x0005ebd7) list_single_2graphic_im_pane_g2

0xc562,	// (0x0005ebe3) list_single_2graphic_im_pane_g3_ParamLimits

0xc562,	// (0x0005ebe3) list_single_2graphic_im_pane_g3

0x0003,

0xfc38,	// (0x000622b9) list_single_2graphic_im_pane_g_ParamLimits

0xfc38,	// (0x000622b9) list_single_2graphic_im_pane_g

0xc582,	// (0x0005ec03) list_single_2graphic_im_pane_t1_ParamLimits

0xc582,	// (0x0005ec03) list_single_2graphic_im_pane_t1

0xbf98,	// (0x0005e619) list_single_graphic_2heading_pane_fp_ParamLimits

0xbf98,	// (0x0005e619) list_single_graphic_2heading_pane_fp

0x3df6,	// (0x00056477) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3df6,	// (0x00056477) list_single_graphic_2heading_pane_fp_g1

0xbfb1,	// (0x0005e632) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xbfb1,	// (0x0005e632) list_single_graphic_2heading_pane_fp_g2

0x9ad0,	// (0x0005c151) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x9ad0,	// (0x0005c151) list_single_graphic_2heading_pane_fp_g3

0x9adc,	// (0x0005c15d) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x9adc,	// (0x0005c15d) list_single_graphic_2heading_pane_fp_g4

0xbfbd,	// (0x0005e63e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xbfbd,	// (0x0005e63e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5f,	// (0x000621e0) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5f,	// (0x000621e0) list_single_graphic_2heading_pane_fp_g

0x412f,	// (0x000567b0) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x412f,	// (0x000567b0) list_single_graphic_2heading_pane_fp_t1

0x3e2e,	// (0x000564af) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3e2e,	// (0x000564af) list_single_graphic_2heading_pane_fp_t2

0x4145,	// (0x000567c6) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4145,	// (0x000567c6) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc41,	// (0x000622c2) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc41,	// (0x000622c2) list_single_graphic_2heading_pane_fp_t

0xb99b,	// (0x0005e01c) fep_hwr_write_pane_g5_ParamLimits

0xb99b,	// (0x0005e01c) fep_hwr_write_pane_g5

0xb9a7,	// (0x0005e028) fep_hwr_write_pane_g6_ParamLimits

0xb9a7,	// (0x0005e028) fep_hwr_write_pane_g6

0xc281,	// (0x0005e902) eswt_shell_pane_ParamLimits

0x90b6,	// (0x0005b737) bg_popup_window_pane_cp18_ParamLimits

0x9478,	// (0x0005baf9) heading_pane_cp70

0xc3ab,	// (0x0005ea2c) popup_eswt_tasktip_window_t1_ParamLimits

0x8b73,	// (0x0005b1f4) aid_touch_tab_arrow_left

0x8b7f,	// (0x0005b200) aid_touch_tab_arrow_right

0x50da,	// (0x0005775b) title_pane_g3_ParamLimits

0x50da,	// (0x0005775b) title_pane_g3

0xf446,	// (0x00061ac7) set_value_pane_g1

0x6831,	// (0x00058eb2) popup_toolbar_trans_pane_ParamLimits

0xc4f9,	// (0x0005eb7a) aid_size_cell_tb_trans_pane_ParamLimits

0xf487,	// (0x00061b08) bg_tb_trans_pane_ParamLimits

0xc50b,	// (0x0005eb8c) grid_tb_trans_pane_ParamLimits

0xecd4,	// (0x00061355) cont_note_pane_ParamLimits

0xecd4,	// (0x00061355) cont_note_pane

0xf202,	// (0x00061883) cont_snote2_single_text_pane_ParamLimits

0xf202,	// (0x00061883) cont_snote2_single_text_pane

0xf202,	// (0x00061883) cont_snote2_single_graphic_pane_ParamLimits

0xf202,	// (0x00061883) cont_snote2_single_graphic_pane

0x96a8,	// (0x0005bd29) cont_note_wait_pane_ParamLimits

0x96a8,	// (0x0005bd29) cont_note_wait_pane

0x96a8,	// (0x0005bd29) cont_note_image_pane_ParamLimits

0x96a8,	// (0x0005bd29) cont_note_image_pane

0xc5b3,	// (0x0005ec34) popup_note2_window_g1_ParamLimits

0xc5b3,	// (0x0005ec34) popup_note2_window_g1

0xc5e4,	// (0x0005ec65) popup_note2_window_t1_ParamLimits

0xc5e4,	// (0x0005ec65) popup_note2_window_t1

0xc629,	// (0x0005ecaa) popup_note2_window_t2_ParamLimits

0xc629,	// (0x0005ecaa) popup_note2_window_t2

0xc66e,	// (0x0005ecef) popup_note2_window_t3_ParamLimits

0xc66e,	// (0x0005ecef) popup_note2_window_t3

0xc6b3,	// (0x0005ed34) popup_note2_window_t4_ParamLimits

0xc6b3,	// (0x0005ed34) popup_note2_window_t4

0xeffc,	// (0x0006167d) popup_note2_window_t5_ParamLimits

0xeffc,	// (0x0006167d) popup_note2_window_t5

0x0004,

0xfc4d,	// (0x000622ce) popup_note2_window_t_ParamLimits

0xfc4d,	// (0x000622ce) popup_note2_window_t

0xc6e2,	// (0x0005ed63) popup_note2_image_window_g1_ParamLimits

0xc6e2,	// (0x0005ed63) popup_note2_image_window_g1

0xc6ee,	// (0x0005ed6f) popup_note2_image_window_g2_ParamLimits

0xc6ee,	// (0x0005ed6f) popup_note2_image_window_g2

0x0001,

0xfc58,	// (0x000622d9) popup_note2_image_window_g_ParamLimits

0xfc58,	// (0x000622d9) popup_note2_image_window_g

0xc700,	// (0x0005ed81) popup_note2_image_window_t1_ParamLimits

0xc700,	// (0x0005ed81) popup_note2_image_window_t1

0xc718,	// (0x0005ed99) popup_note2_image_window_t2_ParamLimits

0xc718,	// (0x0005ed99) popup_note2_image_window_t2

0xc730,	// (0x0005edb1) popup_note2_image_window_t3_ParamLimits

0xc730,	// (0x0005edb1) popup_note2_image_window_t3

0x0002,

0xfc5d,	// (0x000622de) popup_note2_image_window_t_ParamLimits

0xfc5d,	// (0x000622de) popup_note2_image_window_t

0x96b6,	// (0x0005bd37) popup_note2_wait_window_g1_ParamLimits

0x96b6,	// (0x0005bd37) popup_note2_wait_window_g1

0xc74c,	// (0x0005edcd) popup_note2_wait_window_g2_ParamLimits

0xc74c,	// (0x0005edcd) popup_note2_wait_window_g2

0x96ce,	// (0x0005bd4f) popup_note2_wait_window_g3_ParamLimits

0x96ce,	// (0x0005bd4f) popup_note2_wait_window_g3

0x0002,

0xfc64,	// (0x000622e5) popup_note2_wait_window_g_ParamLimits

0xfc64,	// (0x000622e5) popup_note2_wait_window_g

0xc758,	// (0x0005edd9) popup_note2_wait_window_t1_ParamLimits

0xc758,	// (0x0005edd9) popup_note2_wait_window_t1

0xc776,	// (0x0005edf7) popup_note2_wait_window_t2_ParamLimits

0xc776,	// (0x0005edf7) popup_note2_wait_window_t2

0xc794,	// (0x0005ee15) popup_note2_wait_window_t3_ParamLimits

0xc794,	// (0x0005ee15) popup_note2_wait_window_t3

0xc7a6,	// (0x0005ee27) popup_note2_wait_window_t4_ParamLimits

0xc7a6,	// (0x0005ee27) popup_note2_wait_window_t4

0x0003,

0xfc6b,	// (0x000622ec) popup_note2_wait_window_t_ParamLimits

0xfc6b,	// (0x000622ec) popup_note2_wait_window_t

0xc7b8,	// (0x0005ee39) wait_bar2_pane_ParamLimits

0xc7b8,	// (0x0005ee39) wait_bar2_pane

0xc7d0,	// (0x0005ee51) popup_snote2_single_text_window_g1_ParamLimits

0xc7d0,	// (0x0005ee51) popup_snote2_single_text_window_g1

0xc7f8,	// (0x0005ee79) popup_snote2_single_text_window_t1_ParamLimits

0xc7f8,	// (0x0005ee79) popup_snote2_single_text_window_t1

0xc844,	// (0x0005eec5) popup_snote2_single_text_window_t2_ParamLimits

0xc844,	// (0x0005eec5) popup_snote2_single_text_window_t2

0xc890,	// (0x0005ef11) popup_snote2_single_text_window_t3_ParamLimits

0xc890,	// (0x0005ef11) popup_snote2_single_text_window_t3

0xc8d1,	// (0x0005ef52) popup_snote2_single_text_window_t4_ParamLimits

0xc8d1,	// (0x0005ef52) popup_snote2_single_text_window_t4

0xc907,	// (0x0005ef88) popup_snote2_single_text_window_t5_ParamLimits

0xc907,	// (0x0005ef88) popup_snote2_single_text_window_t5

0x0004,

0xfc74,	// (0x000622f5) popup_snote2_single_text_window_t_ParamLimits

0xfc74,	// (0x000622f5) popup_snote2_single_text_window_t

0xc932,	// (0x0005efb3) popup_snote2_single_graphic_window_g1_ParamLimits

0xc932,	// (0x0005efb3) popup_snote2_single_graphic_window_g1

0xc95a,	// (0x0005efdb) popup_snote2_single_graphic_window_g2_ParamLimits

0xc95a,	// (0x0005efdb) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7f,	// (0x00062300) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7f,	// (0x00062300) popup_snote2_single_graphic_window_g

0xc982,	// (0x0005f003) popup_snote2_single_graphic_window_t1_ParamLimits

0xc982,	// (0x0005f003) popup_snote2_single_graphic_window_t1

0xc9ce,	// (0x0005f04f) popup_snote2_single_graphic_window_t2_ParamLimits

0xc9ce,	// (0x0005f04f) popup_snote2_single_graphic_window_t2

0xc890,	// (0x0005ef11) popup_snote2_single_graphic_window_t3_ParamLimits

0xc890,	// (0x0005ef11) popup_snote2_single_graphic_window_t3

0xc8d1,	// (0x0005ef52) popup_snote2_single_graphic_window_t4_ParamLimits

0xc8d1,	// (0x0005ef52) popup_snote2_single_graphic_window_t4

0xc907,	// (0x0005ef88) popup_snote2_single_graphic_window_t5_ParamLimits

0xc907,	// (0x0005ef88) popup_snote2_single_graphic_window_t5

0x0004,

0xfc84,	// (0x00062305) popup_snote2_single_graphic_window_t_ParamLimits

0xfc84,	// (0x00062305) popup_snote2_single_graphic_window_t

0xb361,	// (0x0005d9e2) clock_nsta_pane_cp2_t1

0xb361,	// (0x0005d9e2) clock_nsta_pane_cp2_t2

0x0001,

0xfa98,	// (0x00062119) clock_nsta_pane_cp2_t

0x397d,	// (0x00055ffe) form_field_data_wide_pane_g1_ParamLimits

0xf495,	// (0x00061b16) form_field_data_wide_pane_g2_ParamLimits

0xf495,	// (0x00061b16) form_field_data_wide_pane_g2

0xf4a1,	// (0x00061b22) form_field_data_wide_pane_g3_ParamLimits

0xf4a1,	// (0x00061b22) form_field_data_wide_pane_g3

0x0002,

0xf659,	// (0x00061cda) form_field_data_wide_pane_g_ParamLimits

0xf659,	// (0x00061cda) form_field_data_wide_pane_g

0xb23c,	// (0x0005d8bd) grid_touch_3_pane_ParamLimits

0xb23c,	// (0x0005d8bd) grid_touch_3_pane

0xca1a,	// (0x0005f09b) cell_touch_3_pane_ParamLimits

0xca1a,	// (0x0005f09b) cell_touch_3_pane

0xb90a,	// (0x0005df8b) cell_touch_3_pane_g1

0xb90a,	// (0x0005df8b) cell_touch_3_pane_g2

0x0001,

0xfb1d,	// (0x0006219e) cell_touch_3_pane_g

0xf054,	// (0x000616d5) cont_query_data_pane

0xf05c,	// (0x000616dd) cont_query_data_pane_cp1

0xca4d,	// (0x0005f0ce) button_value_adjust_pane_cp7

0xca55,	// (0x0005f0d6) query_popup_pane_cp3

0x828b,	// (0x0005a90c) bg_popup_sub_pane_cp22_ParamLimits

0x5ea1,	// (0x00058522) navi_navi_volume_pane_cp2

0x5ebc,	// (0x0005853d) popup_side_volume_key_window_g2

0x5ecb,	// (0x0005854c) popup_side_volume_key_window_g3

0x0002,

0xf6ef,	// (0x00061d70) popup_side_volume_key_window_g

0x5ee8,	// (0x00058569) popup_side_volume_key_window_t2

0x0001,

0xf6f6,	// (0x00061d77) popup_side_volume_key_window_t

0x8547,	// (0x0005abc8) popup_side_volume_key_window_ParamLimits

0x5623,	// (0x00057ca4) list_double_graphic_pane_g4_ParamLimits

0x5623,	// (0x00057ca4) list_double_graphic_pane_g4

0x9a1e,	// (0x0005c09f) list_single_2heading_msg_pane_ParamLimits

0x9a1e,	// (0x0005c09f) list_single_2heading_msg_pane

0x9b6c,	// (0x0005c1ed) list_single_2heading_msg_pane_g1_ParamLimits

0x9b6c,	// (0x0005c1ed) list_single_2heading_msg_pane_g1

0x9b78,	// (0x0005c1f9) list_single_2heading_msg_pane_g2_ParamLimits

0x9b78,	// (0x0005c1f9) list_single_2heading_msg_pane_g2

0x9b84,	// (0x0005c205) list_single_2heading_msg_pane_g3_ParamLimits

0x9b84,	// (0x0005c205) list_single_2heading_msg_pane_g3

0x9b90,	// (0x0005c211) list_single_2heading_msg_pane_g4_ParamLimits

0x9b90,	// (0x0005c211) list_single_2heading_msg_pane_g4

0x0003,

0xfc8f,	// (0x00062310) list_single_2heading_msg_pane_g_ParamLimits

0xfc8f,	// (0x00062310) list_single_2heading_msg_pane_g

0x730b,	// (0x0005998c) list_single_2heading_msg_pane_t1_ParamLimits

0x730b,	// (0x0005998c) list_single_2heading_msg_pane_t1

0x7333,	// (0x000599b4) list_single_2heading_msg_pane_t2_ParamLimits

0x7333,	// (0x000599b4) list_single_2heading_msg_pane_t2

0x7362,	// (0x000599e3) list_single_2heading_msg_pane_t3_ParamLimits

0x7362,	// (0x000599e3) list_single_2heading_msg_pane_t3

0x4165,	// (0x000567e6) list_single_2heading_msg_pane_t4_ParamLimits

0x4165,	// (0x000567e6) list_single_2heading_msg_pane_t4

0x0003,

0xfc98,	// (0x00062319) list_single_2heading_msg_pane_t_ParamLimits

0xfc98,	// (0x00062319) list_single_2heading_msg_pane_t

0xb69e,	// (0x0005dd1f) title_pane_g4_ParamLimits

0xb69e,	// (0x0005dd1f) title_pane_g4

0x5bbc,	// (0x0005823d) title_pane_stacon_g3_ParamLimits

0x5bbc,	// (0x0005823d) title_pane_stacon_g3

0xc576,	// (0x0005ebf7) list_single_2graphic_im_pane_g4_ParamLimits

0xc576,	// (0x0005ebf7) list_single_2graphic_im_pane_g4

0xa306,	// (0x0005c987) popup_side_volume_key_window_cp

0xab4c,	// (0x0005d1cd) main_idle_act2_pane_t1

0x6935,	// (0x00058fb6) toolbar_button_pane_g10

0x5437,	// (0x00057ab8) popup_toolbar_window_cp1

0xb352,	// (0x0005d9d3) clock_nsta_pane_cp_t1

0xb352,	// (0x0005d9d3) clock_nsta_pane_cp_t2

0x0001,

0xfa93,	// (0x00062114) clock_nsta_pane_cp_t

0x5ea1,	// (0x00058522) navi_navi_volume_pane_cp2_ParamLimits

0x5eb0,	// (0x00058531) popup_side_volume_key_window_g1_ParamLimits

0x5ebc,	// (0x0005853d) popup_side_volume_key_window_g2_ParamLimits

0x5ecb,	// (0x0005854c) popup_side_volume_key_window_g3_ParamLimits

0xf6ef,	// (0x00061d70) popup_side_volume_key_window_g_ParamLimits

0x6ebb,	// (0x0005953c) fep_hwr_aid_pane

0x6f64,	// (0x000595e5) bg_fep_hwr_top_pane_g4_ParamLimits

0xb96b,	// (0x0005dfec) fep_hwr_top_pane_g1_ParamLimits

0xb97d,	// (0x0005dffe) fep_hwr_top_pane_g2_ParamLimits

0x6f84,	// (0x00059605) fep_hwr_top_pane_g3_ParamLimits

0xfae8,	// (0x00062169) fep_hwr_top_pane_g_ParamLimits

0x6f99,	// (0x0005961a) fep_hwr_top_text_pane_ParamLimits

0xa0bb,	// (0x0005c73c) aid_touch_tab_arrow_arrow_2

0xa0c4,	// (0x0005c745) aid_touch_tab_arrow_left_2

0x6ecf,	// (0x00059550) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6f06,	// (0x00059587) fep_hwr_prediction_pane

0xbad3,	// (0x0005e154) fep_vkb_prediction_pane

0xbbd9,	// (0x0005e25a) fep_vkb_side_pane_g3_ParamLimits

0xbbd9,	// (0x0005e25a) fep_vkb_side_pane_g3

0x7128,	// (0x000597a9) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7199,	// (0x0005981a) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x71a6,	// (0x00059827) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb97,	// (0x00062218) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x739b,	// (0x00059a1c) fep_hwr_prediction_pane_g1

0x73a5,	// (0x00059a26) fep_hwr_prediction_pane_g2

0x73ad,	// (0x00059a2e) fep_hwr_prediction_pane_g3

0x73b5,	// (0x00059a36) fep_hwr_prediction_pane_g4

0x0003,

0xfca1,	// (0x00062322) fep_hwr_prediction_pane_g

0xca7c,	// (0x0005f0fd) fep_vkb_prediction_pane_g1

0xca86,	// (0x0005f107) fep_vkb_prediction_pane_g2

0xca8e,	// (0x0005f10f) fep_vkb_prediction_pane_g3

0xca96,	// (0x0005f117) fep_vkb_prediction_pane_g4

0x0003,

0xfcaa,	// (0x0006232b) fep_vkb_prediction_pane_g

0x6c85,	// (0x00059306) slider_set_pane_g3

0x6c99,	// (0x0005931a) slider_set_pane_g4

0x6cb1,	// (0x00059332) slider_set_pane_g5

0x6c85,	// (0x00059306) slider_set_pane_g6

0x6cc7,	// (0x00059348) slider_set_pane_g7

0xa77c,	// (0x0005cdfd) slider_form_pane_g3

0xa785,	// (0x0005ce06) slider_form_pane_g4

0xa78d,	// (0x0005ce0e) slider_form_pane_g5

0xa77c,	// (0x0005cdfd) slider_form_pane_g6

0xa795,	// (0x0005ce16) slider_form_pane_g7

0xae10,	// (0x0005d491) slider_set_pane_vc_g3

0xae19,	// (0x0005d49a) slider_set_pane_vc_g4

0xae22,	// (0x0005d4a3) slider_set_pane_vc_g5

0xae10,	// (0x0005d491) slider_set_pane_vc_g6

0xae2b,	// (0x0005d4ac) slider_set_pane_vc_g7

0xb001,	// (0x0005d682) slider_form_pane_vc_g1

0xb00a,	// (0x0005d68b) slider_form_pane_vc_g2

0xb013,	// (0x0005d694) slider_form_pane_vc_g3

0xb001,	// (0x0005d682) slider_form_pane_vc_g4

0xb01c,	// (0x0005d69d) slider_form_pane_vc_g5

0x0004,

0xfa65,	// (0x000620e6) slider_form_pane_vc_g

0x4e4b,	// (0x000574cc) main_idle_act3_pane

0xca9e,	// (0x0005f11f) ai3_links_pane

0xcaa7,	// (0x0005f128) popup_ai3_data_window_ParamLimits

0xcaa7,	// (0x0005f128) popup_ai3_data_window

0xb680,	// (0x0005dd01) grid_ai3_links_pane

0xcac5,	// (0x0005f146) cell_ai3_links_pane_ParamLimits

0xcac5,	// (0x0005f146) cell_ai3_links_pane

0xcadf,	// (0x0005f160) bg_popup_sub_pane_cp11

0xcaec,	// (0x0005f16d) cell_ai3_links_pane_g1

0xb680,	// (0x0005dd01) bg_popup_sub_pane_cp12

0xcb11,	// (0x0005f192) heading_ai3_data_pane

0xcb19,	// (0x0005f19a) list_ai3_gene_pane

0xcb25,	// (0x0005f1a6) popup_ai3_data_window_g1

0xcb2d,	// (0x0005f1ae) heading_ai3_data_pane_g1

0xcb35,	// (0x0005f1b6) heading_ai3_data_pane_t1

0xcb43,	// (0x0005f1c4) list_double_ai3_gene_pane_ParamLimits

0xcb43,	// (0x0005f1c4) list_double_ai3_gene_pane

0xcb50,	// (0x0005f1d1) list_single_ai3_gene_pane_ParamLimits

0xcb50,	// (0x0005f1d1) list_single_ai3_gene_pane

0xb8cf,	// (0x0005df50) list_highlight_pane_cp7_ParamLimits

0xb8cf,	// (0x0005df50) list_highlight_pane_cp7

0xcb5d,	// (0x0005f1de) list_single_a13_gene_pane_t1_ParamLimits

0xcb5d,	// (0x0005f1de) list_single_a13_gene_pane_t1

0xcb74,	// (0x0005f1f5) list_single_ai3_gene_pane_g1

0xcb7d,	// (0x0005f1fe) list_single_ai3_gene_pane_g2

0x0001,

0xfcb3,	// (0x00062334) list_single_ai3_gene_pane_g

0xcb85,	// (0x0005f206) list_double_ai3_gene_pane_g1_ParamLimits

0xcb85,	// (0x0005f206) list_double_ai3_gene_pane_g1

0xcb91,	// (0x0005f212) list_double_ai3_gene_pane_t1_ParamLimits

0xcb91,	// (0x0005f212) list_double_ai3_gene_pane_t1

0xcbad,	// (0x0005f22e) list_double_ai3_gene_pane_t2_ParamLimits

0xcbad,	// (0x0005f22e) list_double_ai3_gene_pane_t2

0xcbc2,	// (0x0005f243) list_double_ai3_gene_pane_t3_ParamLimits

0xcbc2,	// (0x0005f243) list_double_ai3_gene_pane_t3

0x0002,

0xfcb8,	// (0x00062339) list_double_ai3_gene_pane_t_ParamLimits

0xfcb8,	// (0x00062339) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x415b,	// (0x000567dc) aid_size_min_col_2

0xca66,	// (0x0005f0e7) aid_size_min_msg_ParamLimits

0xca66,	// (0x0005f0e7) aid_size_min_msg

0xbce5,	// (0x0005e366) fep_vkb_top_text_pane_g2_ParamLimits

0xbce5,	// (0x0005e366) fep_vkb_top_text_pane_g2

0x0001,

0xfb18,	// (0x00062199) fep_vkb_top_text_pane_g_ParamLimits

0xfb18,	// (0x00062199) fep_vkb_top_text_pane_g

0x4e4b,	// (0x000574cc) main_hc_apps_shell_pane

0xcbdf,	// (0x0005f260) grid_hc_apps_pane_ParamLimits

0xcbdf,	// (0x0005f260) grid_hc_apps_pane

0xcbf1,	// (0x0005f272) list_hc_apps_pane

0xcbf9,	// (0x0005f27a) scroll_pane_cp37_ParamLimits

0xcbf9,	// (0x0005f27a) scroll_pane_cp37

0xcc05,	// (0x0005f286) cell_hc_apps_pane_ParamLimits

0xcc05,	// (0x0005f286) cell_hc_apps_pane

0xccb9,	// (0x0005f33a) cell_hc_apps_pane_g1_ParamLimits

0xccb9,	// (0x0005f33a) cell_hc_apps_pane_g1

0xcce5,	// (0x0005f366) cell_hc_apps_pane_g2_ParamLimits

0xcce5,	// (0x0005f366) cell_hc_apps_pane_g2

0xcd01,	// (0x0005f382) cell_hc_apps_pane_g3_ParamLimits

0xcd01,	// (0x0005f382) cell_hc_apps_pane_g3

0x0002,

0xfcbf,	// (0x00062340) cell_hc_apps_pane_g_ParamLimits

0xfcbf,	// (0x00062340) cell_hc_apps_pane_g

0xcd23,	// (0x0005f3a4) cell_hc_apps_pane_t1_ParamLimits

0xcd23,	// (0x0005f3a4) cell_hc_apps_pane_t1

0xecd4,	// (0x00061355) grid_highlight_pane_cp10_ParamLimits

0xecd4,	// (0x00061355) grid_highlight_pane_cp10

0xcd63,	// (0x0005f3e4) list_single_hc_apps_pane_ParamLimits

0xcd63,	// (0x0005f3e4) list_single_hc_apps_pane

0xcda2,	// (0x0005f423) list_single_hc_apps_pane_g1

0x9ba8,	// (0x0005c229) list_single_hc_apps_pane_g2

0x0001,

0xfcc6,	// (0x00062347) list_single_hc_apps_pane_g

0x9bc1,	// (0x0005c242) list_single_hc_apps_pane_g2_copy1

0x73bd,	// (0x00059a3e) list_single_hc_apps_pane_t1

0xb6e2,	// (0x0005dd63) bg_set_opt_pane_cp_ParamLimits

0x518c,	// (0x0005780d) setting_slider_pane_t1_ParamLimits

0x51a5,	// (0x00057826) setting_slider_pane_t2_ParamLimits

0x51bf,	// (0x00057840) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x00061bb8) setting_slider_pane_t_ParamLimits

0x51d7,	// (0x00057858) slider_set_pane_ParamLimits

0x61d4,	// (0x00058855) control_pane_g5_ParamLimits

0x61d4,	// (0x00058855) control_pane_g5

0xa5af,	// (0x0005cc30) slider_set_pane_g1_ParamLimits

0x6c79,	// (0x000592fa) slider_set_pane_g2_ParamLimits

0x6c85,	// (0x00059306) slider_set_pane_g3_ParamLimits

0x6c99,	// (0x0005931a) slider_set_pane_g4_ParamLimits

0x6cb1,	// (0x00059332) slider_set_pane_g5_ParamLimits

0x6c85,	// (0x00059306) slider_set_pane_g6_ParamLimits

0x6cc7,	// (0x00059348) slider_set_pane_g7_ParamLimits

0xf942,	// (0x00061fc3) slider_set_pane_g_ParamLimits

0x8620,	// (0x0005aca1) navi_icon_text_pane_ParamLimits

0x8b34,	// (0x0005b1b5) aid_fill_nsta_2_ParamLimits

0x8b73,	// (0x0005b1f4) aid_touch_tab_arrow_left_ParamLimits

0x8b7f,	// (0x0005b200) aid_touch_tab_arrow_right_ParamLimits

0x8beb,	// (0x0005b26c) clock_nsta_pane_ParamLimits

0xa09d,	// (0x0005c71e) navi_icon_pane_g1_ParamLimits

0xa0a9,	// (0x0005c72a) navi_text_pane_t1_ParamLimits

0xb46f,	// (0x0005daf0) navi_icon_text_pane_g1_ParamLimits

0xb47b,	// (0x0005dafc) navi_icon_text_pane_t1_ParamLimits

0xcda2,	// (0x0005f423) list_single_hc_apps_pane_g1_ParamLimits

0x9ba8,	// (0x0005c229) list_single_hc_apps_pane_g2_ParamLimits

0xfcc6,	// (0x00062347) list_single_hc_apps_pane_g_ParamLimits

0x9bc1,	// (0x0005c242) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x73bd,	// (0x00059a3e) list_single_hc_apps_pane_t1_ParamLimits

0x4fc0,	// (0x00057641) popup_toolbar2_fixed_window_ParamLimits

0x4fc0,	// (0x00057641) popup_toolbar2_fixed_window

0x6827,	// (0x00058ea8) popup_toolbar2_float_window

0xb680,	// (0x0005dd01) bg_popup_sub_pane_cp27

0xcdbb,	// (0x0005f43c) grid_toolbar2_float_pane

0xb680,	// (0x0005dd01) bg_popup_sub_pane_cp26

0xcdbb,	// (0x0005f43c) grid_toolbar2_fixed_pane

0xcdc3,	// (0x0005f444) cell_toolbar2_fixed_pane_ParamLimits

0xcdc3,	// (0x0005f444) cell_toolbar2_fixed_pane

0xcdd3,	// (0x0005f454) cell_toolbar2_fixed_pane_g1

0xcddc,	// (0x0005f45d) toolbar2_fixed_button_pane

0x902a,	// (0x0005b6ab) toolbar2_fixed_button_pane_g1

0x903a,	// (0x0005b6bb) toolbar2_fixed_button_pane_g2

0x9032,	// (0x0005b6b3) toolbar2_fixed_button_pane_g3

0x904a,	// (0x0005b6cb) toolbar2_fixed_button_pane_g4

0x9042,	// (0x0005b6c3) toolbar2_fixed_button_pane_g5

0x9052,	// (0x0005b6d3) toolbar2_fixed_button_pane_g6

0x905a,	// (0x0005b6db) toolbar2_fixed_button_pane_g7

0x906a,	// (0x0005b6eb) toolbar2_fixed_button_pane_g8

0x9062,	// (0x0005b6e3) toolbar2_fixed_button_pane_g9

0x0008,

0xf844,	// (0x00061ec5) toolbar2_fixed_button_pane_g

0xcde4,	// (0x0005f465) cell_toolbar2_float_pane_ParamLimits

0xcde4,	// (0x0005f465) cell_toolbar2_float_pane

0xcdf5,	// (0x0005f476) cell_toolbar2_float_pane_g1

0xcddc,	// (0x0005f45d) toolbar2_fixed_button_pane_cp

0xba41,	// (0x0005e0c2) fep_vkb_accented_list_pane_ParamLimits

0xba41,	// (0x0005e0c2) fep_vkb_accented_list_pane

0x7108,	// (0x00059789) bg_popup_fep_shadow_pane_g9

0x87b3,	// (0x0005ae34) bg_popup_fep_shadow_pane_cp3

0x3261,	// (0x000558e2) list_accented_list_pane

0xcdfe,	// (0x0005f47f) list_single_accented_list_pane_ParamLimits

0xcdfe,	// (0x0005f47f) list_single_accented_list_pane

0x87b3,	// (0x0005ae34) list_highlight_pane_cp10

0xce0f,	// (0x0005f490) list_single_accented_list_pane_t1

0x676d,	// (0x00058dee) popup_slider_window_ParamLimits

0x676d,	// (0x00058dee) popup_slider_window

0xca5d,	// (0x0005f0de) aid_indentation_list_msg

0xcedf,	// (0x0005f560) bg_popup_window_pane_cp19

0xcf4b,	// (0x0005f5cc) popup_slider_window_g1

0xcf67,	// (0x0005f5e8) popup_slider_window_g2

0xcf83,	// (0x0005f604) popup_slider_window_g3

0x0005,

0xfccb,	// (0x0006234c) popup_slider_window_g

0xcfe9,	// (0x0005f66a) popup_slider_window_t1

0xd05d,	// (0x0005f6de) small_volume_slider_vertical_pane

0xb90a,	// (0x0005df8b) small_volume_slider_vertical_pane_g1

0xb90a,	// (0x0005df8b) small_volume_slider_vertical_pane_g2

0xd079,	// (0x0005f6fa) small_volume_slider_vertical_pane_g3

0x0002,

0xfcdd,	// (0x0006235e) small_volume_slider_vertical_pane_g

0x4d68,	// (0x000573e9) area_side_right_pane_ParamLimits

0x4d68,	// (0x000573e9) area_side_right_pane

0x73eb,	// (0x00059a6c) aid_size_side_button_ParamLimits

0x73eb,	// (0x00059a6c) aid_size_side_button

0x73ff,	// (0x00059a80) grid_sctrl_middle_pane_ParamLimits

0x73ff,	// (0x00059a80) grid_sctrl_middle_pane

0x741e,	// (0x00059a9f) sctrl_sk_bottom_pane

0x742f,	// (0x00059ab0) sctrl_sk_top_pane

0x7441,	// (0x00059ac2) aid_touch_sctrl_top

0x744e,	// (0x00059acf) bg_sctrl_sk_pane_ParamLimits

0x744e,	// (0x00059acf) bg_sctrl_sk_pane

0x745c,	// (0x00059add) sctrl_sk_top_pane_g1

0x7469,	// (0x00059aea) sctrl_sk_top_pane_t1

0x7441,	// (0x00059ac2) aid_touch_sctrl_bottom

0x744e,	// (0x00059acf) bg_sctrl_sk_pane_cp_ParamLimits

0x744e,	// (0x00059acf) bg_sctrl_sk_pane_cp

0x7484,	// (0x00059b05) sctrl_sk_bottom_pane_g1

0x7469,	// (0x00059aea) sctrl_sk_bottom_pane_t1

0x748d,	// (0x00059b0e) cell_sctrl_middle_pane_ParamLimits

0x748d,	// (0x00059b0e) cell_sctrl_middle_pane

0x74aa,	// (0x00059b2b) aid_touch_sctrl_middle_ParamLimits

0x74aa,	// (0x00059b2b) aid_touch_sctrl_middle

0x74bc,	// (0x00059b3d) bg_sctrl_middle_pane_ParamLimits

0x74bc,	// (0x00059b3d) bg_sctrl_middle_pane

0x7128,	// (0x000597a9) cell_sctrl_middle_pane_g1_ParamLimits

0x7128,	// (0x000597a9) cell_sctrl_middle_pane_g1

0x74ca,	// (0x00059b4b) cell_sctrl_middle_pane_g2_ParamLimits

0x74ca,	// (0x00059b4b) cell_sctrl_middle_pane_g2

0x0001,

0xfce9,	// (0x0006236a) cell_sctrl_middle_pane_g_ParamLimits

0xfce9,	// (0x0006236a) cell_sctrl_middle_pane_g

0x902a,	// (0x0005b6ab) bg_sctrl_middle_pane_g1

0x9032,	// (0x0005b6b3) bg_sctrl_middle_pane_g2

0x903a,	// (0x0005b6bb) bg_sctrl_middle_pane_g3

0x9042,	// (0x0005b6c3) bg_sctrl_middle_pane_g4

0x904a,	// (0x0005b6cb) bg_sctrl_middle_pane_g5

0x9052,	// (0x0005b6d3) bg_sctrl_middle_pane_g6

0x905a,	// (0x0005b6db) bg_sctrl_middle_pane_g7

0x9062,	// (0x0005b6e3) bg_sctrl_middle_pane_g8

0x0007,

0xfcee,	// (0x0006236f) bg_sctrl_middle_pane_g

0x906a,	// (0x0005b6eb) bg_sctrl_middle_pane_g8_copy1

0x902a,	// (0x0005b6ab) bg_sctrl_sk_pane_g1

0x903a,	// (0x0005b6bb) bg_sctrl_sk_pane_g2

0x9032,	// (0x0005b6b3) bg_sctrl_sk_pane_g3

0x0008,

0xf844,	// (0x00061ec5) bg_sctrl_sk_pane_g

0xf3c0,	// (0x00061a41) aid_size_touch_scroll_bar

0x904a,	// (0x0005b6cb) bg_sctrl_sk_pane_g4

0x9042,	// (0x0005b6c3) bg_sctrl_sk_pane_g5

0x9052,	// (0x0005b6d3) bg_sctrl_sk_pane_g6

0x905a,	// (0x0005b6db) bg_sctrl_sk_pane_g7

0x906a,	// (0x0005b6eb) bg_sctrl_sk_pane_g8

0x9062,	// (0x0005b6e3) bg_sctrl_sk_pane_g9

0x6382,	// (0x00058a03) popup_fep_china_hwr2_fs_candidate_window

0x638c,	// (0x00058a0d) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x638c,	// (0x00058a0d) popup_fep_china_hwr2_fs_control_window

0x7128,	// (0x000597a9) sctrl_sk_top_pane_g2

0x0001,

0xfce4,	// (0x00062365) sctrl_sk_top_pane_g

0xd082,	// (0x0005f703) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd082,	// (0x0005f703) aid_fep_china_hwr2_fs_cell

0xd095,	// (0x0005f716) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd095,	// (0x0005f716) bg_popup_fep_shadow_pane_cp4

0xd0ae,	// (0x0005f72f) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd0ae,	// (0x0005f72f) bg_popup_fep_shadow_pane_cp5

0xd0c0,	// (0x0005f741) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd0c0,	// (0x0005f741) popup_fep_china_hwr2_fs_control_bar_grid

0xd0d0,	// (0x0005f751) popup_fep_china_hwr2_fs_control_funtion_grid

0xd0d8,	// (0x0005f759) aid_fep_china_hwr2_fs_candi_cell

0xb680,	// (0x0005dd01) bg_popup_fep_shadow_pane_cp6

0xd0e2,	// (0x0005f763) popup_fep_china_hwr2_fs_candidate_grid

0xd0ec,	// (0x0005f76d) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd0ec,	// (0x0005f76d) cell_fep_china_hwr2_fs_funtion_grid

0xb90a,	// (0x0005df8b) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd104,	// (0x0005f785) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd104,	// (0x0005f785) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd133,	// (0x0005f7b4) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd133,	// (0x0005f7b4) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcff,	// (0x00062380) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcff,	// (0x00062380) cell_fep_china_hwr2_fs_funtion_grid_g

0xd149,	// (0x0005f7ca) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd149,	// (0x0005f7ca) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd15e,	// (0x0005f7df) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd15e,	// (0x0005f7df) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd04,	// (0x00062385) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd04,	// (0x00062385) cell_fep_china_hwr2_fs_funtion_grid_t

0xd17a,	// (0x0005f7fb) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd182,	// (0x0005f803) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd18a,	// (0x0005f80b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd09,	// (0x0006238a) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd192,	// (0x0005f813) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd192,	// (0x0005f813) cell_fep_china_hwr2_fs_candidate_grid

0xd1b1,	// (0x0005f832) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd1b9,	// (0x0005f83a) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb90a,	// (0x0005df8b) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb90a,	// (0x0005df8b) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1d,	// (0x0006219e) cell_fep_china_hwr2_fs_candidate_grid_g

0xd1c1,	// (0x0005f842) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8bfe,	// (0x0005b27f) clock_nsta_pane_cp_24_ParamLimits

0x8bfe,	// (0x0005b27f) clock_nsta_pane_cp_24

0x8c7e,	// (0x0005b2ff) indicator_nsta_pane_cp_24_ParamLimits

0x8c7e,	// (0x0005b2ff) indicator_nsta_pane_cp_24

0x9f19,	// (0x0005c59a) heading_pane_g1

0x0001,

0xf8a9,	// (0x00061f2a) heading_pane_g

0xa993,	// (0x0005d014) grid_sct_catagory_button_pane

0xa9c5,	// (0x0005d046) scroll_pane_cp5_ParamLimits

0xb4bd,	// (0x0005db3e) button_value_adjust_pane_cp5_ParamLimits

0xb4bd,	// (0x0005db3e) button_value_adjust_pane_cp5

0xb5a2,	// (0x0005dc23) form2_midp_time_pane_ParamLimits

0xd1cf,	// (0x0005f850) cell_sct_catagory_button_pane_ParamLimits

0xd1cf,	// (0x0005f850) cell_sct_catagory_button_pane

0xb8cf,	// (0x0005df50) bg_button_pane_cp01_ParamLimits

0xb8cf,	// (0x0005df50) bg_button_pane_cp01

0xb90a,	// (0x0005df8b) cell_sct_catagory_button_pane_g1

0x67ae,	// (0x00058e2f) popup_tb_extension_window

0xd1e1,	// (0x0005f862) aid_size_cell_ext_ParamLimits

0xd1e1,	// (0x0005f862) aid_size_cell_ext

0xecd4,	// (0x00061355) bg_tb_trans_pane_cp1_ParamLimits

0xecd4,	// (0x00061355) bg_tb_trans_pane_cp1

0xd201,	// (0x0005f882) grid_tb_ext_pane_ParamLimits

0xd201,	// (0x0005f882) grid_tb_ext_pane

0xd22f,	// (0x0005f8b0) cell_tb_ext_pane_ParamLimits

0xd22f,	// (0x0005f8b0) cell_tb_ext_pane

0xd246,	// (0x0005f8c7) cell_tb_ext_pane_g1_ParamLimits

0xd246,	// (0x0005f8c7) cell_tb_ext_pane_g1

0xd263,	// (0x0005f8e4) cell_tb_ext_pane_t1

0xecd4,	// (0x00061355) list_highlight_pane_cp11_ParamLimits

0xecd4,	// (0x00061355) list_highlight_pane_cp11

0x4fdf,	// (0x00057660) popup_uni_indicator_window_ParamLimits

0x4fdf,	// (0x00057660) popup_uni_indicator_window

0xf487,	// (0x00061b08) bg_popup_sub_pane_cp14

0xd280,	// (0x0005f901) list_uniindi_pane

0xd28c,	// (0x0005f90d) uniindi_top_pane

0xecd4,	// (0x00061355) bg_uniindi_top_pane

0xd2ad,	// (0x0005f92e) uniindi_top_pane_g1

0xd2c3,	// (0x0005f944) uniindi_top_pane_g2

0x0003,

0xfd10,	// (0x00062391) uniindi_top_pane_g

0xd2ed,	// (0x0005f96e) uniindi_top_pane_t1

0xd319,	// (0x0005f99a) list_single_uniindi_pane_ParamLimits

0xd319,	// (0x0005f99a) list_single_uniindi_pane

0xb90a,	// (0x0005df8b) bg_uniindi_top_pane_g1

0xd32c,	// (0x0005f9ad) list_single_uniindi_pane_g1

0xd33f,	// (0x0005f9c0) list_single_uniindi_pane_t1

0x4e4b,	// (0x000574cc) control_bg_pane

0xd364,	// (0x0005f9e5) bg_sctrl_sk_pane_cp1

0xd36d,	// (0x0005f9ee) bg_sctrl_sk_pane_cp2

0xd376,	// (0x0005f9f7) control_bg_pane_g1

0xd37f,	// (0x0005fa00) control_bg_pane_g2

0x0001,

0xfd19,	// (0x0006239a) control_bg_pane_g

0xb2f5,	// (0x0005d976) cell_indicator_nsta_pane_g1_ParamLimits

0xb303,	// (0x0005d984) cell_indicator_nsta_pane_g2_ParamLimits

0xfa81,	// (0x00062102) cell_indicator_nsta_pane_g_ParamLimits

0x3dcc,	// (0x0005644d) form2_midp_time_pane_t1_ParamLimits

0x62e0,	// (0x00058961) main_idle_act4_pane_ParamLimits

0x62e0,	// (0x00058961) main_idle_act4_pane

0x67ae,	// (0x00058e2f) popup_tb_extension_window_ParamLimits

0xd221,	// (0x0005f8a2) tb_ext_find_pane_ParamLimits

0xd221,	// (0x0005f8a2) tb_ext_find_pane

0xd388,	// (0x0005fa09) ai_gene_pane_1_cp1

0x88fd,	// (0x0005af7e) ai_gene_pane_2_cp1

0xd390,	// (0x0005fa11) list_single_idle_plugin_calendar_pane

0xd399,	// (0x0005fa1a) list_single_idle_plugin_notification_pane

0xd3a2,	// (0x0005fa23) list_single_idle_plugin_player_pane

0xd3ab,	// (0x0005fa2c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd3ab,	// (0x0005fa2c) list_single_idle_plugin_shortcut_pane

0xd3cd,	// (0x0005fa4e) main_idle_act4_pane_t1

0xd3df,	// (0x0005fa60) main_idle_act4_pane_t2

0x0001,

0xfd1e,	// (0x0006239f) main_idle_act4_pane_t

0xd3f1,	// (0x0005fa72) middle_sk_idle_act4_pane_ParamLimits

0xd3f1,	// (0x0005fa72) middle_sk_idle_act4_pane

0xd407,	// (0x0005fa88) popup_clock_digital_analogue_window_cp2

0xd421,	// (0x0005faa2) shortcut_wheel_idle_act4_pane_ParamLimits

0xd421,	// (0x0005faa2) shortcut_wheel_idle_act4_pane

0xb90a,	// (0x0005df8b) shortcut_wheel_idle_act4_pane_g1

0xb90a,	// (0x0005df8b) shortcut_wheel_idle_act4_pane_g2

0xb90a,	// (0x0005df8b) shortcut_wheel_idle_act4_pane_g3

0xb90a,	// (0x0005df8b) shortcut_wheel_idle_act4_pane_g4

0xb90a,	// (0x0005df8b) shortcut_wheel_idle_act4_pane_g5

0xd435,	// (0x0005fab6) shortcut_wheel_idle_act4_pane_g6

0xd43d,	// (0x0005fabe) shortcut_wheel_idle_act4_pane_g7

0xd445,	// (0x0005fac6) shortcut_wheel_idle_act4_pane_g8

0xd44d,	// (0x0005face) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd23,	// (0x000623a4) shortcut_wheel_idle_act4_pane_g

0xbb85,	// (0x0005e206) middle_sk_idle_act4_pane_g1_ParamLimits

0xbb85,	// (0x0005e206) middle_sk_idle_act4_pane_g1

0xd4b1,	// (0x0005fb32) middle_sk_idle_act4_pane_g2_ParamLimits

0xd4b1,	// (0x0005fb32) middle_sk_idle_act4_pane_g2

0x0001,

0xfd46,	// (0x000623c7) middle_sk_idle_act4_pane_g_ParamLimits

0xfd46,	// (0x000623c7) middle_sk_idle_act4_pane_g

0xd4bd,	// (0x0005fb3e) middle_sk_idle_act4_pane_t1_ParamLimits

0xd4bd,	// (0x0005fb3e) middle_sk_idle_act4_pane_t1

0xd4da,	// (0x0005fb5b) grid_ai_shortcut_pane_ParamLimits

0xd4da,	// (0x0005fb5b) grid_ai_shortcut_pane

0xd4f3,	// (0x0005fb74) list_highlight_pane_cp16_ParamLimits

0xd4f3,	// (0x0005fb74) list_highlight_pane_cp16

0xd500,	// (0x0005fb81) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd500,	// (0x0005fb81) list_single_idle_plugin_shortcut_pane_g1

0xd50c,	// (0x0005fb8d) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd50c,	// (0x0005fb8d) list_single_idle_plugin_shortcut_pane_g2

0xd526,	// (0x0005fba7) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd526,	// (0x0005fba7) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4b,	// (0x000623cc) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4b,	// (0x000623cc) list_single_idle_plugin_shortcut_pane_g

0xd539,	// (0x0005fbba) cell_ai_shortcut_pane_ParamLimits

0xd539,	// (0x0005fbba) cell_ai_shortcut_pane

0xd55c,	// (0x0005fbdd) cell_ai_shortcut_pane_g1_ParamLimits

0xd55c,	// (0x0005fbdd) cell_ai_shortcut_pane_g1

0xd388,	// (0x0005fa09) ai_gene_pane_1_cp2

0xd57e,	// (0x0005fbff) ai_gene_pane_2_cp2

0xd586,	// (0x0005fc07) list_highlight_pane_cp15

0xd58f,	// (0x0005fc10) list_single_idle_plugin_calendar_pane_g1

0xd586,	// (0x0005fc07) list_highlight_pane_cp17

0xd597,	// (0x0005fc18) list_single_idle_plugin_calendar_pane_g1_copy1

0xd59f,	// (0x0005fc20) list_single_idle_plugin_player_pane_g1

0xabfa,	// (0x0005d27b) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd52,	// (0x000623d3) list_single_idle_plugin_player_pane_g

0xd5a7,	// (0x0005fc28) list_single_idle_plugin_player_pane_t1

0xd5b5,	// (0x0005fc36) list_single_idle_plugin_player_pane_t2

0xd5c3,	// (0x0005fc44) list_single_idle_plugin_player_pane_t3

0xd5d1,	// (0x0005fc52) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd57,	// (0x000623d8) list_single_idle_plugin_player_pane_t

0xd5df,	// (0x0005fc60) wait_bar_pane_cp15

0xd5e7,	// (0x0005fc68) grid_ai_notification_pane

0xabfa,	// (0x0005d27b) list_single_idle_plugin_notification_pane_g1

0xd5f0,	// (0x0005fc71) cell_ai_notification_pane_ParamLimits

0xd5f0,	// (0x0005fc71) cell_ai_notification_pane

0xd5fd,	// (0x0005fc7e) cell_ai_notification_pane_g1

0xd605,	// (0x0005fc86) cell_ai_notification_pane_t1

0xd613,	// (0x0005fc94) tb_ext_find_button_pane

0xd61b,	// (0x0005fc9c) tb_ext_find_pane_g1

0xd623,	// (0x0005fca4) tb_ext_find_pane_t1

0x8186,	// (0x0005a807) tb_ext_find_button_pane_g1

0xd631,	// (0x0005fcb2) tb_ext_find_button_pane_g2

0x0001,

0xfd60,	// (0x000623e1) tb_ext_find_button_pane_g

0xd3cd,	// (0x0005fa4e) main_idle_act4_pane_t1_ParamLimits

0xd3df,	// (0x0005fa60) main_idle_act4_pane_t2_ParamLimits

0xfd1e,	// (0x0006239f) main_idle_act4_pane_t_ParamLimits

0xd407,	// (0x0005fa88) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd415,	// (0x0005fa96) sat_plugin_idle_act4_pane_ParamLimits

0xd415,	// (0x0005fa96) sat_plugin_idle_act4_pane

0xd63a,	// (0x0005fcbb) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd63a,	// (0x0005fcbb) sat_plugin_idle_act4_pane_t1

0xd64d,	// (0x0005fcce) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd64d,	// (0x0005fcce) sat_plugin_idle_act4_pane_t2

0xd660,	// (0x0005fce1) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd660,	// (0x0005fce1) sat_plugin_idle_act4_pane_t3

0xd673,	// (0x0005fcf4) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd673,	// (0x0005fcf4) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd65,	// (0x000623e6) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd65,	// (0x000623e6) sat_plugin_idle_act4_pane_t

0x4f10,	// (0x00057591) popup_battery_window_ParamLimits

0x4f10,	// (0x00057591) popup_battery_window

0xecd4,	// (0x00061355) bg_popup_sub_pane_cp25_ParamLimits

0xecd4,	// (0x00061355) bg_popup_sub_pane_cp25

0xd686,	// (0x0005fd07) popup_battery_window_g1_ParamLimits

0xd686,	// (0x0005fd07) popup_battery_window_g1

0xd692,	// (0x0005fd13) popup_battery_window_t1_ParamLimits

0xd692,	// (0x0005fd13) popup_battery_window_t1

0xd6a4,	// (0x0005fd25) popup_battery_window_t2_ParamLimits

0xd6a4,	// (0x0005fd25) popup_battery_window_t2

0x0001,

0xfd6e,	// (0x000623ef) popup_battery_window_t_ParamLimits

0xfd6e,	// (0x000623ef) popup_battery_window_t

0x87c7,	// (0x0005ae48) midp_canvas_pane_ParamLimits

0x883f,	// (0x0005aec0) midp_keypad_pane_ParamLimits

0x883f,	// (0x0005aec0) midp_keypad_pane

0x8ae2,	// (0x0005b163) main_midp_pane_ParamLimits

0xb370,	// (0x0005d9f1) signal_pane_g2_cp_ParamLimits

0xd6c1,	// (0x0005fd42) aid_size_cell_midp_keypad_ParamLimits

0xd6c1,	// (0x0005fd42) aid_size_cell_midp_keypad

0xd6db,	// (0x0005fd5c) midp_keyp_game_grid_pane_ParamLimits

0xd6db,	// (0x0005fd5c) midp_keyp_game_grid_pane

0xd6fb,	// (0x0005fd7c) midp_keyp_rocker_pane_ParamLimits

0xd6fb,	// (0x0005fd7c) midp_keyp_rocker_pane

0xd72a,	// (0x0005fdab) midp_keyp_sk_left_pane_ParamLimits

0xd72a,	// (0x0005fdab) midp_keyp_sk_left_pane

0xd786,	// (0x0005fe07) midp_keyp_sk_right_pane_ParamLimits

0xd786,	// (0x0005fe07) midp_keyp_sk_right_pane

0xb680,	// (0x0005dd01) bg_button_pane_cp03

0xd7e2,	// (0x0005fe63) midp_keyp_sk_left_pane_g1

0xb680,	// (0x0005dd01) bg_button_pane_cp04

0xd7e2,	// (0x0005fe63) midp_keyp_sk_right_pane_g1

0xb90a,	// (0x0005df8b) midp_keyp_rocker_pane_g1

0xd7ea,	// (0x0005fe6b) keyp_game_cell_pane_ParamLimits

0xd7ea,	// (0x0005fe6b) keyp_game_cell_pane

0xb680,	// (0x0005dd01) bg_button_pane_cp02

0xd7fd,	// (0x0005fe7e) keyp_game_cell_pane_g1

0x4f5a,	// (0x000575db) popup_fep_vkb2_window_ParamLimits

0x4f5a,	// (0x000575db) popup_fep_vkb2_window

0x74e8,	// (0x00059b69) aid_size_cell_vkb2_ParamLimits

0x74e8,	// (0x00059b69) aid_size_cell_vkb2

0x7534,	// (0x00059bb5) popup_fep_vkb2_window_g1_ParamLimits

0x7534,	// (0x00059bb5) popup_fep_vkb2_window_g1

0x757c,	// (0x00059bfd) vkb2_area_bottom_pane_ParamLimits

0x757c,	// (0x00059bfd) vkb2_area_bottom_pane

0x75d0,	// (0x00059c51) vkb2_area_keypad_pane_ParamLimits

0x75d0,	// (0x00059c51) vkb2_area_keypad_pane

0x7616,	// (0x00059c97) vkb2_area_top_pane_ParamLimits

0x7616,	// (0x00059c97) vkb2_area_top_pane

0x7696,	// (0x00059d17) vkb2_top_entry_pane_ParamLimits

0x7696,	// (0x00059d17) vkb2_top_entry_pane

0x76c0,	// (0x00059d41) vkb2_top_grid_left_pane_ParamLimits

0x76c0,	// (0x00059d41) vkb2_top_grid_left_pane

0x76df,	// (0x00059d60) vkb2_top_grid_right_pane_ParamLimits

0x76df,	// (0x00059d60) vkb2_top_grid_right_pane

0x76fe,	// (0x00059d7f) vkb2_cell_keypad_pane_ParamLimits

0x76fe,	// (0x00059d7f) vkb2_cell_keypad_pane

0x77cf,	// (0x00059e50) vkb2_area_bottom_grid_pane_ParamLimits

0x77cf,	// (0x00059e50) vkb2_area_bottom_grid_pane

0x77f5,	// (0x00059e76) vkb2_area_bottom_pane_g1_ParamLimits

0x77f5,	// (0x00059e76) vkb2_area_bottom_pane_g1

0x7819,	// (0x00059e9a) vkb2_area_bottom_pane_g2_ParamLimits

0x7819,	// (0x00059e9a) vkb2_area_bottom_pane_g2

0x7847,	// (0x00059ec8) vkb2_area_bottom_pane_g3_ParamLimits

0x7847,	// (0x00059ec8) vkb2_area_bottom_pane_g3

0x0002,

0xfd73,	// (0x000623f4) vkb2_area_bottom_pane_g_ParamLimits

0xfd73,	// (0x000623f4) vkb2_area_bottom_pane_g

0x78a8,	// (0x00059f29) vkb2_top_cell_left_pane_ParamLimits

0x78a8,	// (0x00059f29) vkb2_top_cell_left_pane

0xd80e,	// (0x0005fe8f) vkb2_top_entry_pane_g1_ParamLimits

0xd80e,	// (0x0005fe8f) vkb2_top_entry_pane_g1

0xd81c,	// (0x0005fe9d) vkb2_top_entry_pane_t1_ParamLimits

0xd81c,	// (0x0005fe9d) vkb2_top_entry_pane_t1

0xd84e,	// (0x0005fecf) vkb2_top_entry_pane_t2_ParamLimits

0xd84e,	// (0x0005fecf) vkb2_top_entry_pane_t2

0xd880,	// (0x0005ff01) vkb2_top_entry_pane_t3_ParamLimits

0xd880,	// (0x0005ff01) vkb2_top_entry_pane_t3

0x0002,

0xfd7a,	// (0x000623fb) vkb2_top_entry_pane_t_ParamLimits

0xfd7a,	// (0x000623fb) vkb2_top_entry_pane_t

0x78f5,	// (0x00059f76) vkb2_top_grid_right_pane_g1_ParamLimits

0x78f5,	// (0x00059f76) vkb2_top_grid_right_pane_g1

0x790b,	// (0x00059f8c) vkb2_top_grid_right_pane_g2_ParamLimits

0x790b,	// (0x00059f8c) vkb2_top_grid_right_pane_g2

0x7923,	// (0x00059fa4) vkb2_top_grid_right_pane_g3_ParamLimits

0x7923,	// (0x00059fa4) vkb2_top_grid_right_pane_g3

0x793b,	// (0x00059fbc) vkb2_top_grid_right_pane_g4_ParamLimits

0x793b,	// (0x00059fbc) vkb2_top_grid_right_pane_g4

0x0003,

0xfd81,	// (0x00062402) vkb2_top_grid_right_pane_g_ParamLimits

0xfd81,	// (0x00062402) vkb2_top_grid_right_pane_g

0x7951,	// (0x00059fd2) vkb2_top_cell_left_pane_g1

0x7968,	// (0x00059fe9) vkb2_cell_keypad_pane_g1_ParamLimits

0x7968,	// (0x00059fe9) vkb2_cell_keypad_pane_g1

0xd8a4,	// (0x0005ff25) vkb2_cell_keypad_pane_t1_ParamLimits

0xd8a4,	// (0x0005ff25) vkb2_cell_keypad_pane_t1

0x7976,	// (0x00059ff7) vkb2_cell_bottom_grid_pane_ParamLimits

0x7976,	// (0x00059ff7) vkb2_cell_bottom_grid_pane

0x79af,	// (0x0005a030) vkb2_cell_bottom_grid_pane_g1

0xd455,	// (0x0005fad6) aid_call2_pane_cp02

0xd45d,	// (0x0005fade) aid_call_pane_cp02

0xd465,	// (0x0005fae6) clock_digital_number_pane_cp10

0xd46d,	// (0x0005faee) clock_digital_number_pane_cp11

0xd475,	// (0x0005faf6) clock_digital_number_pane_cp12

0xd47d,	// (0x0005fafe) clock_digital_number_pane_cp13

0xd485,	// (0x0005fb06) clock_digital_separator_pane_cp10

0x8186,	// (0x0005a807) popup_clock_digital_analogue_window_cp2_g1

0x8186,	// (0x0005a807) popup_clock_digital_analogue_window_cp2_g2

0xd48d,	// (0x0005fb0e) popup_clock_digital_analogue_window_cp2_g3

0x8186,	// (0x0005a807) popup_clock_digital_analogue_window_cp2_g4

0xd48d,	// (0x0005fb0e) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd36,	// (0x000623b7) popup_clock_digital_analogue_window_cp2_g

0xd495,	// (0x0005fb16) popup_clock_digital_analogue_window_cp2_t1

0xd4a3,	// (0x0005fb24) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd41,	// (0x000623c2) popup_clock_digital_analogue_window_cp2_t

0xb90a,	// (0x0005df8b) clock_digital_number_pane_cp10_g1

0xb90a,	// (0x0005df8b) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1d,	// (0x0006219e) clock_digital_number_pane_cp10_g

0xb90a,	// (0x0005df8b) clock_digital_separator_pane_cp10_g1

0xb90a,	// (0x0005df8b) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1d,	// (0x0006219e) clock_digital_separator_pane_cp10_g

0xd2cf,	// (0x0005f950) uniindi_top_pane_g3

0xd2e0,	// (0x0005f961) uniindi_top_pane_g4

0x7789,	// (0x00059e0a) vkb2_row_keypad_pane_ParamLimits

0x7789,	// (0x00059e0a) vkb2_row_keypad_pane

0x79cb,	// (0x0005a04c) vkb2_cell_t_keypad_pane_ParamLimits

0x79cb,	// (0x0005a04c) vkb2_cell_t_keypad_pane

0x79db,	// (0x0005a05c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x79db,	// (0x0005a05c) vkb2_cell_t_keypad_pane_cp08

0x79f0,	// (0x0005a071) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x79f0,	// (0x0005a071) vkb2_cell_t_keypad_pane_cp09

0x7a04,	// (0x0005a085) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7a04,	// (0x0005a085) vkb2_cell_t_keypad_pane_cp01

0x7a15,	// (0x0005a096) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7a15,	// (0x0005a096) vkb2_cell_t_keypad_pane_cp02

0x7a26,	// (0x0005a0a7) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7a26,	// (0x0005a0a7) vkb2_cell_t_keypad_pane_cp03

0x7a37,	// (0x0005a0b8) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7a37,	// (0x0005a0b8) vkb2_cell_t_keypad_pane_cp04

0x7a48,	// (0x0005a0c9) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7a48,	// (0x0005a0c9) vkb2_cell_t_keypad_pane_cp05

0x7a59,	// (0x0005a0da) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7a59,	// (0x0005a0da) vkb2_cell_t_keypad_pane_cp06

0x7a6c,	// (0x0005a0ed) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7a6c,	// (0x0005a0ed) vkb2_cell_t_keypad_pane_cp07

0x7a81,	// (0x0005a102) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7a81,	// (0x0005a102) vkb2_cell_t_keypad_pane_cp10

0x7128,	// (0x000597a9) vkb2_cell_t_keypad_pane_g1

0xd8bb,	// (0x0005ff3c) vkb2_cell_t_keypad_pane_t1

0x4e4b,	// (0x000574cc) popup_grid_graphic2_window

0xd8cd,	// (0x0005ff4e) aid_size_cell_graphic2_ParamLimits

0xd8cd,	// (0x0005ff4e) aid_size_cell_graphic2

0xd905,	// (0x0005ff86) bg_popup_window_pane_cp21_ParamLimits

0xd905,	// (0x0005ff86) bg_popup_window_pane_cp21

0xd913,	// (0x0005ff94) graphic2_pages_pane_ParamLimits

0xd913,	// (0x0005ff94) graphic2_pages_pane

0xd959,	// (0x0005ffda) grid_graphic2_control_pane_ParamLimits

0xd959,	// (0x0005ffda) grid_graphic2_control_pane

0xd997,	// (0x00060018) grid_graphic2_pane_ParamLimits

0xd997,	// (0x00060018) grid_graphic2_pane

0xda0d,	// (0x0006008e) cell_graphic2_pane

0x4e4b,	// (0x000574cc) main_comp_mode_pane

0xcb19,	// (0x0005f19a) list_ai3_gene_pane_ParamLimits

0xcedf,	// (0x0005f560) bg_popup_window_pane_cp19_ParamLimits

0xceeb,	// (0x0005f56c) bg_touch_area_indi_pane_ParamLimits

0xceeb,	// (0x0005f56c) bg_touch_area_indi_pane

0xcf01,	// (0x0005f582) bg_touch_area_indi_pane_cp01_ParamLimits

0xcf01,	// (0x0005f582) bg_touch_area_indi_pane_cp01

0xcf17,	// (0x0005f598) bg_touch_area_indi_pane_cp02_ParamLimits

0xcf17,	// (0x0005f598) bg_touch_area_indi_pane_cp02

0xcf31,	// (0x0005f5b2) bg_touch_area_indi_pane_cp03_ParamLimits

0xcf31,	// (0x0005f5b2) bg_touch_area_indi_pane_cp03

0xcf4b,	// (0x0005f5cc) popup_slider_window_g1_ParamLimits

0xcf67,	// (0x0005f5e8) popup_slider_window_g2_ParamLimits

0xcf83,	// (0x0005f604) popup_slider_window_g3_ParamLimits

0xfccb,	// (0x0006234c) popup_slider_window_g_ParamLimits

0xcfe9,	// (0x0005f66a) popup_slider_window_t1_ParamLimits

0xd05d,	// (0x0005f6de) small_volume_slider_vertical_pane_ParamLimits

0xda0d,	// (0x0006008e) cell_graphic2_pane_ParamLimits

0xda61,	// (0x000600e2) bg_button_pane_cp10_ParamLimits

0xda61,	// (0x000600e2) bg_button_pane_cp10

0xda76,	// (0x000600f7) bg_button_pane_cp11_ParamLimits

0xda76,	// (0x000600f7) bg_button_pane_cp11

0xda8b,	// (0x0006010c) graphic2_pages_pane_g1_ParamLimits

0xda8b,	// (0x0006010c) graphic2_pages_pane_g1

0xdaa6,	// (0x00060127) graphic2_pages_pane_g2_ParamLimits

0xdaa6,	// (0x00060127) graphic2_pages_pane_g2

0x0001,

0xfd8f,	// (0x00062410) graphic2_pages_pane_g_ParamLimits

0xfd8f,	// (0x00062410) graphic2_pages_pane_g

0xdabe,	// (0x0006013f) graphic2_pages_pane_t1_ParamLimits

0xdabe,	// (0x0006013f) graphic2_pages_pane_t1

0xdad4,	// (0x00060155) cell_graphic2_control_pane_ParamLimits

0xdad4,	// (0x00060155) cell_graphic2_control_pane

0xdaf4,	// (0x00060175) cell_graphic2_pane_g1_ParamLimits

0xdaf4,	// (0x00060175) cell_graphic2_pane_g1

0xdb01,	// (0x00060182) cell_graphic2_pane_g2_ParamLimits

0xdb01,	// (0x00060182) cell_graphic2_pane_g2

0xdb0e,	// (0x0006018f) cell_graphic2_pane_g3_ParamLimits

0xdb0e,	// (0x0006018f) cell_graphic2_pane_g3

0xdb1b,	// (0x0006019c) cell_graphic2_pane_g4_ParamLimits

0xdb1b,	// (0x0006019c) cell_graphic2_pane_g4

0xdb28,	// (0x000601a9) cell_graphic2_pane_g5_ParamLimits

0xdb28,	// (0x000601a9) cell_graphic2_pane_g5

0x0004,

0xfd94,	// (0x00062415) cell_graphic2_pane_g_ParamLimits

0xfd94,	// (0x00062415) cell_graphic2_pane_g

0xdb40,	// (0x000601c1) cell_graphic2_pane_t1_ParamLimits

0xdb40,	// (0x000601c1) cell_graphic2_pane_t1

0x90b6,	// (0x0005b737) grid_highlight_pane_cp11_ParamLimits

0x90b6,	// (0x0005b737) grid_highlight_pane_cp11

0xecd4,	// (0x00061355) bg_button_pane_cp05

0xdb76,	// (0x000601f7) cell_graphic2_control_pane_g1

0xb90a,	// (0x0005df8b) bg_touch_area_indi_pane_g1

0xdb9e,	// (0x0006021f) aid_cmod_rocker_key_size

0xdba8,	// (0x00060229) aid_cmode_itu_key_size

0xdbb2,	// (0x00060233) main_cmode_video_pane

0xdbbc,	// (0x0006023d) main_comp_mode_itu_pane

0xdbc8,	// (0x00060249) main_comp_mode_rocker_pane

0xdbd4,	// (0x00060255) cell_cmode_rocker_pane_ParamLimits

0xdbd4,	// (0x00060255) cell_cmode_rocker_pane

0xdbe8,	// (0x00060269) cell_cmode_itu_pane_ParamLimits

0xdbe8,	// (0x00060269) cell_cmode_itu_pane

0xf487,	// (0x00061b08) bg_button_pane_cp06_ParamLimits

0xf487,	// (0x00061b08) bg_button_pane_cp06

0xbb85,	// (0x0005e206) cell_cmode_rocker_pane_g1_ParamLimits

0xbb85,	// (0x0005e206) cell_cmode_rocker_pane_g1

0xd104,	// (0x0005f785) cell_cmode_rocker_pane_g2_ParamLimits

0xd104,	// (0x0005f785) cell_cmode_rocker_pane_g2

0x0001,

0xfda4,	// (0x00062425) cell_cmode_rocker_pane_g_ParamLimits

0xfda4,	// (0x00062425) cell_cmode_rocker_pane_g

0xb680,	// (0x0005dd01) bg_button_pane_cp07

0xdbff,	// (0x00060280) cell_cmode_itu_pane_g1

0xdc08,	// (0x00060289) cell_cmode_itu_pane_t1

0xdc16,	// (0x00060297) cell_cmode_itu_pane_t2

0x0001,

0xfda9,	// (0x0006242a) cell_cmode_itu_pane_t

0xd354,	// (0x0005f9d5) aid_touch_ctrl_left

0xd35c,	// (0x0005f9dd) aid_touch_ctrl_right

0xb680,	// (0x0005dd01) compa_mode_pane

0xdc24,	// (0x000602a5) aid_cmod_rocker_key_size_cp

0xdc2e,	// (0x000602af) aid_cmode_itu_key_size_cp

0xdc38,	// (0x000602b9) compa_mode_pane_g1

0xdc40,	// (0x000602c1) compa_mode_pane_g2

0xdc48,	// (0x000602c9) compa_mode_pane_g3

0x0002,

0xfdae,	// (0x0006242f) compa_mode_pane_g

0xdc50,	// (0x000602d1) main_comp_mode_itu_pane_cp

0xdc58,	// (0x000602d9) main_comp_mode_rocker_pane_cp

0xdc60,	// (0x000602e1) cell_cmode_itu_pane_cp_ParamLimits

0xdc60,	// (0x000602e1) cell_cmode_itu_pane_cp

0xdc75,	// (0x000602f6) cell_cmode_rocker_pane_cp_ParamLimits

0xdc75,	// (0x000602f6) cell_cmode_rocker_pane_cp

0xf487,	// (0x00061b08) bg_button_pane_cp06_cp_ParamLimits

0xf487,	// (0x00061b08) bg_button_pane_cp06_cp

0xbb85,	// (0x0005e206) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbb85,	// (0x0005e206) cell_cmode_rocker_pane_g1_cp

0xb90a,	// (0x0005df8b) cell_cmode_rocker_pane_g2_cp

0xb680,	// (0x0005dd01) bg_button_pane_cp07_cp

0xdc87,	// (0x00060308) cell_cmode_itu_pane_g1_cp

0xdc90,	// (0x00060311) cell_cmode_itu_pane_t1_cp

0xdc90,	// (0x00060311) cell_cmode_itu_pane_t2_cp

0xa76b,	// (0x0005cdec) settings_code_pane_cp2

0xb6e2,	// (0x0005dd63) bg_popup_window_pane_cp3_ParamLimits

0xf18c,	// (0x0006180d) heading_pane_cp3_ParamLimits

0xf19b,	// (0x0006181c) listscroll_popup_graphic_pane_ParamLimits

0x6ebb,	// (0x0005953c) fep_hwr_aid_pane_ParamLimits

0x7441,	// (0x00059ac2) aid_touch_sctrl_top_ParamLimits

0x745c,	// (0x00059add) sctrl_sk_top_pane_g1_ParamLimits

0x7128,	// (0x000597a9) sctrl_sk_top_pane_g2_ParamLimits

0xfce4,	// (0x00062365) sctrl_sk_top_pane_g_ParamLimits

0x7469,	// (0x00059aea) sctrl_sk_top_pane_t1_ParamLimits

0x7441,	// (0x00059ac2) aid_touch_sctrl_bottom_ParamLimits

0x7469,	// (0x00059aea) sctrl_sk_bottom_pane_t1_ParamLimits

0xd299,	// (0x0005f91a) aid_area_touch_clock

0x765c,	// (0x00059cdd) aid_vkb2_area_top_pane_cell_ParamLimits

0x765c,	// (0x00059cdd) aid_vkb2_area_top_pane_cell

0x77ab,	// (0x00059e2c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x77ab,	// (0x00059e2c) aid_vkb2_area_bottom_pane_cell

0xd806,	// (0x0005fe87) popup_char_count_window

0xdc9e,	// (0x0006031f) popup_char_count_window_g1

0xdca7,	// (0x00060328) popup_char_count_window_g2

0xdcb0,	// (0x00060331) popup_char_count_window_g3

0x0002,

0xfdb5,	// (0x00062436) popup_char_count_window_g

0xdcb9,	// (0x0006033a) popup_char_count_window_t1

0x7512,	// (0x00059b93) popup_fep_char_preview_window_ParamLimits

0x7512,	// (0x00059b93) popup_fep_char_preview_window

0x767a,	// (0x00059cfb) vkb2_top_candi_pane_ParamLimits

0x767a,	// (0x00059cfb) vkb2_top_candi_pane

0xdcc7,	// (0x00060348) cell_vkb2_top_candi_pane_ParamLimits

0xdcc7,	// (0x00060348) cell_vkb2_top_candi_pane

0x7a96,	// (0x0005a117) bg_popup_fep_char_preview_window_ParamLimits

0x7a96,	// (0x0005a117) bg_popup_fep_char_preview_window

0x7aa4,	// (0x0005a125) popup_fep_char_preview_window_t1_ParamLimits

0x7aa4,	// (0x0005a125) popup_fep_char_preview_window_t1

0xdd15,	// (0x00060396) bg_popup_fep_char_preview_window_g1

0xdd1d,	// (0x0006039e) bg_popup_fep_char_preview_window_g2

0xdd25,	// (0x000603a6) bg_popup_fep_char_preview_window_g3

0xdd2d,	// (0x000603ae) bg_popup_fep_char_preview_window_g4

0xdd35,	// (0x000603b6) bg_popup_fep_char_preview_window_g5

0xdd3d,	// (0x000603be) bg_popup_fep_char_preview_window_g6

0xdd45,	// (0x000603c6) bg_popup_fep_char_preview_window_g7

0xdd4d,	// (0x000603ce) bg_popup_fep_char_preview_window_g8

0xdd55,	// (0x000603d6) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdbc,	// (0x0006243d) bg_popup_fep_char_preview_window_g

0x7128,	// (0x000597a9) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7128,	// (0x000597a9) cell_vkb2_top_candi_pane_g1

0x7136,	// (0x000597b7) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7136,	// (0x000597b7) cell_vkb2_top_candi_pane_g2

0xd112,	// (0x0005f793) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd112,	// (0x0005f793) cell_vkb2_top_candi_pane_g3

0x7ae6,	// (0x0005a167) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7ae6,	// (0x0005a167) cell_vkb2_top_candi_pane_g4

0xc0a4,	// (0x0005e725) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc0a4,	// (0x0005e725) cell_vkb2_top_candi_pane_g5

0x7b07,	// (0x0005a188) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7b07,	// (0x0005a188) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd1,	// (0x00062452) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd1,	// (0x00062452) cell_vkb2_top_candi_pane_g

0x7b15,	// (0x0005a196) cell_vkb2_top_candi_pane_t1

0x6c65,	// (0x000592e6) aid_size_touch_slider_mark_ParamLimits

0x6c65,	// (0x000592e6) aid_size_touch_slider_mark

0xd949,	// (0x0005ffca) grid_graphic2_catg_pane_ParamLimits

0xd949,	// (0x0005ffca) grid_graphic2_catg_pane

0xd9e7,	// (0x00060068) popup_grid_graphic2_window_t1_ParamLimits

0xd9e7,	// (0x00060068) popup_grid_graphic2_window_t1

0xd9f9,	// (0x0006007a) popup_grid_graphic2_window_t2_ParamLimits

0xd9f9,	// (0x0006007a) popup_grid_graphic2_window_t2

0x0001,

0xfd8a,	// (0x0006240b) popup_grid_graphic2_window_t_ParamLimits

0xfd8a,	// (0x0006240b) popup_grid_graphic2_window_t

0xecd4,	// (0x00061355) bg_button_pane_cp05_ParamLimits

0xdb76,	// (0x000601f7) cell_graphic2_control_pane_g1_ParamLimits

0xdd5d,	// (0x000603de) cell_graphic2_catg_pane_ParamLimits

0xdd5d,	// (0x000603de) cell_graphic2_catg_pane

0xb680,	// (0x0005dd01) bg_button_pane_cp12

0xdd6f,	// (0x000603f0) cell_graphic2_catg_pane_g1

0xd263,	// (0x0005f8e4) cell_tb_ext_pane_t1_ParamLimits

0x78c8,	// (0x00059f49) vkb2_top_cell_right_narrow_pane_ParamLimits

0x78c8,	// (0x00059f49) vkb2_top_cell_right_narrow_pane

0x78e0,	// (0x00059f61) vkb2_top_cell_right_wide_pane_ParamLimits

0x78e0,	// (0x00059f61) vkb2_top_cell_right_wide_pane

0x6ead,	// (0x0005952e) bg_vkb2_func_pane_ParamLimits

0x6ead,	// (0x0005952e) bg_vkb2_func_pane

0x7951,	// (0x00059fd2) vkb2_top_cell_left_pane_g1_ParamLimits

0x6ead,	// (0x0005952e) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6ead,	// (0x0005952e) bg_vkb2_fuc_pane_cp03

0x79af,	// (0x0005a030) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9032,	// (0x0005b6b3) bg_vkb2_func_pane_g1

0x903a,	// (0x0005b6bb) bg_vkb2_func_pane_g2

0x904a,	// (0x0005b6cb) bg_vkb2_func_pane_g3

0x9042,	// (0x0005b6c3) bg_vkb2_func_pane_g4

0x9052,	// (0x0005b6d3) bg_vkb2_func_pane_g5

0x905a,	// (0x0005b6db) bg_vkb2_func_pane_g6

0x9062,	// (0x0005b6e3) bg_vkb2_func_pane_g7

0x906a,	// (0x0005b6eb) bg_vkb2_func_pane_g8

0x902a,	// (0x0005b6ab) bg_vkb2_func_pane_g9

0x0008,

0xfdde,	// (0x0006245f) bg_vkb2_func_pane_g

0x6ead,	// (0x0005952e) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6ead,	// (0x0005952e) bg_vkb2_fuc_pane_cp01

0x7951,	// (0x00059fd2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7951,	// (0x00059fd2) vkb2_top_cell_right_wide_pane_g1

0x6ead,	// (0x0005952e) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6ead,	// (0x0005952e) bg_vkb2_fuc_pane_cp02

0x7b33,	// (0x0005a1b4) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7b33,	// (0x0005a1b4) vkb2_top_cell_right_narrow_pane_g1

0xce59,	// (0x0005f4da) aid_touch_area_decrease_ParamLimits

0xce59,	// (0x0005f4da) aid_touch_area_decrease

0xce7d,	// (0x0005f4fe) aid_touch_area_increase_ParamLimits

0xce7d,	// (0x0005f4fe) aid_touch_area_increase

0xce95,	// (0x0005f516) aid_touch_area_mute_ParamLimits

0xce95,	// (0x0005f516) aid_touch_area_mute

0xceb1,	// (0x0005f532) aid_touch_area_slider_ParamLimits

0xceb1,	// (0x0005f532) aid_touch_area_slider

0xcf9f,	// (0x0005f620) popup_slider_window_g4_ParamLimits

0xcf9f,	// (0x0005f620) popup_slider_window_g4

0xcfb7,	// (0x0005f638) popup_slider_window_g5_ParamLimits

0xcfb7,	// (0x0005f638) popup_slider_window_g5

0xcfd9,	// (0x0005f65a) popup_slider_window_g6_ParamLimits

0xcfd9,	// (0x0005f65a) popup_slider_window_g6

0xd017,	// (0x0005f698) popup_slider_window_t2_ParamLimits

0xd017,	// (0x0005f698) popup_slider_window_t2

0x0001,

0xfcd8,	// (0x00062359) popup_slider_window_t_ParamLimits

0xfcd8,	// (0x00062359) popup_slider_window_t

0xd02f,	// (0x0005f6b0) slider_pane_ParamLimits

0xd02f,	// (0x0005f6b0) slider_pane

0xdd78,	// (0x000603f9) slider_pane_g1_ParamLimits

0xdd78,	// (0x000603f9) slider_pane_g1

0xdd8c,	// (0x0006040d) slider_pane_g2_ParamLimits

0xdd8c,	// (0x0006040d) slider_pane_g2

0xdda2,	// (0x00060423) slider_pane_g3_ParamLimits

0xdda2,	// (0x00060423) slider_pane_g3

0x0003,

0xfdf1,	// (0x00062472) slider_pane_g_ParamLimits

0xfdf1,	// (0x00062472) slider_pane_g

0x6810,	// (0x00058e91) popup_tb_float_extension_window_ParamLimits

0x6810,	// (0x00058e91) popup_tb_float_extension_window

0xddce,	// (0x0006044f) aid_size_cell_tb_float_ext

0xb680,	// (0x0005dd01) bg_popup_sub_window_cp28

0xddda,	// (0x0006045b) grid_tb_float_ext_pane

0xdde6,	// (0x00060467) cell_tb_float_ext_pane_ParamLimits

0xdde6,	// (0x00060467) cell_tb_float_ext_pane

0xde02,	// (0x00060483) cell_tb_float_ext_pane_g1

0xde0b,	// (0x0006048c) grid_highlight_pane_cp12

0x7002,	// (0x00059683) cell_last_hwr_side_pane_ParamLimits

0x7002,	// (0x00059683) cell_last_hwr_side_pane

0xb90a,	// (0x0005df8b) cell_last_hwr_side_pane_g1

0xde14,	// (0x00060495) cell_last_hwr_side_pane_g2

0x0001,

0xfdfa,	// (0x0006247b) cell_last_hwr_side_pane_g

0x7877,	// (0x00059ef8) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7877,	// (0x00059ef8) vkb2_area_bottom_space_btn_pane

0x7128,	// (0x000597a9) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd8bb,	// (0x0005ff3c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7b15,	// (0x0005a196) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7b4f,	// (0x0005a1d0) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7b4f,	// (0x0005a1d0) vkb2_area_bottom_space_btn_pane_g1

0x7b89,	// (0x0005a20a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7b89,	// (0x0005a20a) vkb2_area_bottom_space_btn_pane_g2

0x7bbf,	// (0x0005a240) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7bbf,	// (0x0005a240) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdff,	// (0x00062480) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdff,	// (0x00062480) vkb2_area_bottom_space_btn_pane_g

0x6f72,	// (0x000595f3) cel_fep_hwr_func_pane_ParamLimits

0x6f72,	// (0x000595f3) cel_fep_hwr_func_pane

0x6fae,	// (0x0005962f) cell_hwr_side_button_pane_ParamLimits

0x6fae,	// (0x0005962f) cell_hwr_side_button_pane

0xd299,	// (0x0005f91a) aid_area_touch_clock_ParamLimits

0xecd4,	// (0x00061355) bg_uniindi_top_pane_ParamLimits

0xd2ad,	// (0x0005f92e) uniindi_top_pane_g1_ParamLimits

0xd2c3,	// (0x0005f944) uniindi_top_pane_g2_ParamLimits

0xd2cf,	// (0x0005f950) uniindi_top_pane_g3_ParamLimits

0xd2e0,	// (0x0005f961) uniindi_top_pane_g4_ParamLimits

0xfd10,	// (0x00062391) uniindi_top_pane_g_ParamLimits

0xd2ed,	// (0x0005f96e) uniindi_top_pane_t1_ParamLimits

0xecd4,	// (0x00061355) bg_vkb2_func_pane_cp01_ParamLimits

0xecd4,	// (0x00061355) bg_vkb2_func_pane_cp01

0xde1d,	// (0x0006049e) cel_fep_hwr_func_pane_g1_ParamLimits

0xde1d,	// (0x0006049e) cel_fep_hwr_func_pane_g1

0xecd4,	// (0x00061355) bg_vkb2_func_pane_cp02_ParamLimits

0xecd4,	// (0x00061355) bg_vkb2_func_pane_cp02

0xde1d,	// (0x0006049e) cell_hwr_side_button_pane_g1_ParamLimits

0xde1d,	// (0x0006049e) cell_hwr_side_button_pane_g1

0x8e99,	// (0x0005b51a) status_pane_g4_ParamLimits

0x8e99,	// (0x0005b51a) status_pane_g4

0x8eb3,	// (0x0005b534) status_pane_t1

0xb610,	// (0x0005dc91) form2_midp_gauge_slider_cont_pane

0xb618,	// (0x0005dc99) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb62a,	// (0x0005dcab) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb63c,	// (0x0005dcbd) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad0,	// (0x00062151) form2_midp_gauge_slider_pane_t_ParamLimits

0xb64e,	// (0x0005dccf) form2_midp_slider_pane_ParamLimits

0x74da,	// (0x00059b5b) aid_size_cell_func_vkb2_ParamLimits

0x74da,	// (0x00059b5b) aid_size_cell_func_vkb2

0xddba,	// (0x0006043b) slider_pane_g4_ParamLimits

0xddba,	// (0x0006043b) slider_pane_g4

0x7c09,	// (0x0005a28a) form2_midp_gauge_slider_pane_t2_cp01

0x7c17,	// (0x0005a298) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7c17,	// (0x0005a298) form2_midp_gauge_slider_pane_t3_cp01

0x7c34,	// (0x0005a2b5) form2_midp_slider_pane_cp01

0xb680,	// (0x0005dd01) navi_smil_pane

0xde56,	// (0x000604d7) navi_smil_pane_g1

0xde5e,	// (0x000604df) navi_smil_pane_t1

0xde2b,	// (0x000604ac) form2_midp_slider_pane_g1

0xde34,	// (0x000604b5) form2_midp_slider_pane_g2

0xde3c,	// (0x000604bd) form2_midp_slider_pane_g3

0xde2b,	// (0x000604ac) form2_midp_slider_pane_g4

0xde44,	// (0x000604c5) form2_midp_slider_pane_g5

0x0004,

0xfe08,	// (0x00062489) form2_midp_slider_pane_g

0x7bf9,	// (0x0005a27a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7bf9,	// (0x0005a27a) vkb2_area_bottom_space_btn_pane_g4

0x8cba,	// (0x0005b33b) lc0_navi_pane_ParamLimits

0x8cba,	// (0x0005b33b) lc0_navi_pane

0x8d36,	// (0x0005b3b7) lc0_stat_indi_pane_ParamLimits

0x8d36,	// (0x0005b3b7) lc0_stat_indi_pane

0x8d4d,	// (0x0005b3ce) ls0_title_pane_ParamLimits

0x8d4d,	// (0x0005b3ce) ls0_title_pane

0xf487,	// (0x00061b08) bg_popup_sub_pane_cp14_ParamLimits

0xd280,	// (0x0005f901) list_uniindi_pane_ParamLimits

0xd28c,	// (0x0005f90d) uniindi_top_pane_ParamLimits

0xd32c,	// (0x0005f9ad) list_single_uniindi_pane_g1_ParamLimits

0xd33f,	// (0x0005f9c0) list_single_uniindi_pane_t1_ParamLimits

0x7c3d,	// (0x0005a2be) lc0_stat_clock_pane_ParamLimits

0x7c3d,	// (0x0005a2be) lc0_stat_clock_pane

0xde6c,	// (0x000604ed) lc0_stat_indi_pane_g1_ParamLimits

0xde6c,	// (0x000604ed) lc0_stat_indi_pane_g1

0xde79,	// (0x000604fa) lc0_stat_indi_pane_g2_ParamLimits

0xde79,	// (0x000604fa) lc0_stat_indi_pane_g2

0x0001,

0xfe13,	// (0x00062494) lc0_stat_indi_pane_g_ParamLimits

0xfe13,	// (0x00062494) lc0_stat_indi_pane_g

0x7c4a,	// (0x0005a2cb) lc0_uni_indicator_pane_ParamLimits

0x7c4a,	// (0x0005a2cb) lc0_uni_indicator_pane

0xde86,	// (0x00060507) ls0_title_pane_g1_ParamLimits

0xde86,	// (0x00060507) ls0_title_pane_g1

0xde9a,	// (0x0006051b) ls0_title_pane_t1_ParamLimits

0xde9a,	// (0x0006051b) ls0_title_pane_t1

0x7c57,	// (0x0005a2d8) lc0_uni_indicator_pane_g1_ParamLimits

0x7c57,	// (0x0005a2d8) lc0_uni_indicator_pane_g1

0xded0,	// (0x00060551) lc0_stat_clock_pane_t1

0x4e4b,	// (0x000574cc) main_ai5_pane

0xdee6,	// (0x00060567) ai5_sk_pane_ParamLimits

0xdee6,	// (0x00060567) ai5_sk_pane

0xdef3,	// (0x00060574) cell_ai5_widget_pane_ParamLimits

0xdef3,	// (0x00060574) cell_ai5_widget_pane

0xdf92,	// (0x00060613) aid_size_cell_widget_grid

0xdfa0,	// (0x00060621) bg_ai5_widget_pane_ParamLimits

0xdfa0,	// (0x00060621) bg_ai5_widget_pane

0xe01e,	// (0x0006069f) cell_ai5_widget_pane_g2

0xe032,	// (0x000606b3) cell_ai5_widget_pane_g3

0xe04c,	// (0x000606cd) cell_ai5_widget_pane_g4

0xe05c,	// (0x000606dd) cell_ai5_widget_pane_g5

0xe06c,	// (0x000606ed) cell_ai5_widget_pane_g6

0xe079,	// (0x000606fa) cell_ai5_widget_pane_g7

0xe0e5,	// (0x00060766) cell_ai5_widget_pane_t1_ParamLimits

0xe0e5,	// (0x00060766) cell_ai5_widget_pane_t1

0xe102,	// (0x00060783) cell_ai5_widget_pane_t2_ParamLimits

0xe102,	// (0x00060783) cell_ai5_widget_pane_t2

0xe11a,	// (0x0006079b) cell_ai5_widget_pane_t3_ParamLimits

0xe11a,	// (0x0006079b) cell_ai5_widget_pane_t3

0xe132,	// (0x000607b3) cell_ai5_widget_pane_t4_ParamLimits

0xe132,	// (0x000607b3) cell_ai5_widget_pane_t4

0xe158,	// (0x000607d9) cell_ai5_widget_pane_t5_ParamLimits

0xe158,	// (0x000607d9) cell_ai5_widget_pane_t5

0xe178,	// (0x000607f9) cell_ai5_widget_pane_t6_ParamLimits

0xe178,	// (0x000607f9) cell_ai5_widget_pane_t6

0xe18a,	// (0x0006080b) cell_ai5_widget_pane_t7_ParamLimits

0xe18a,	// (0x0006080b) cell_ai5_widget_pane_t7

0xe1a9,	// (0x0006082a) cell_ai5_widget_pane_t8_ParamLimits

0xe1a9,	// (0x0006082a) cell_ai5_widget_pane_t8

0x000b,

0xfe33,	// (0x000624b4) cell_ai5_widget_pane_t_ParamLimits

0xfe33,	// (0x000624b4) cell_ai5_widget_pane_t

0xe22d,	// (0x000608ae) grid_ai5_widget_pane

0xf487,	// (0x00061b08) highlight_cell_ai5_widget_pane_ParamLimits

0xf487,	// (0x00061b08) highlight_cell_ai5_widget_pane

0xe241,	// (0x000608c2) ai5_sk_left_pane

0xe24b,	// (0x000608cc) ai5_sk_middle_pane

0xe255,	// (0x000608d6) ai5_sk_right_pane

0xe25f,	// (0x000608e0) bg_ai5_widget_pane_g1_ParamLimits

0xe25f,	// (0x000608e0) bg_ai5_widget_pane_g1

0xe26b,	// (0x000608ec) bg_ai5_widget_pane_g2_ParamLimits

0xe26b,	// (0x000608ec) bg_ai5_widget_pane_g2

0xe277,	// (0x000608f8) bg_ai5_widget_pane_g3_ParamLimits

0xe277,	// (0x000608f8) bg_ai5_widget_pane_g3

0xe283,	// (0x00060904) bg_ai5_widget_pane_g4_ParamLimits

0xe283,	// (0x00060904) bg_ai5_widget_pane_g4

0xe28f,	// (0x00060910) bg_ai5_widget_pane_g5_ParamLimits

0xe28f,	// (0x00060910) bg_ai5_widget_pane_g5

0xe29b,	// (0x0006091c) bg_ai5_widget_pane_g6_ParamLimits

0xe29b,	// (0x0006091c) bg_ai5_widget_pane_g6

0xe2a7,	// (0x00060928) bg_ai5_widget_pane_g7_ParamLimits

0xe2a7,	// (0x00060928) bg_ai5_widget_pane_g7

0xe2b3,	// (0x00060934) bg_ai5_widget_pane_g8_ParamLimits

0xe2b3,	// (0x00060934) bg_ai5_widget_pane_g8

0xe2bf,	// (0x00060940) bg_ai5_widget_pane_g9_ParamLimits

0xe2bf,	// (0x00060940) bg_ai5_widget_pane_g9

0x0008,

0xfe4c,	// (0x000624cd) bg_ai5_widget_pane_g_ParamLimits

0xfe4c,	// (0x000624cd) bg_ai5_widget_pane_g

0xe2f7,	// (0x00060978) cell_shortcut_ai5_widget_pane_ParamLimits

0xe2f7,	// (0x00060978) cell_shortcut_ai5_widget_pane

0x87b3,	// (0x0005ae34) bg_cell_shortcut_ai5_widget_pane

0xe30a,	// (0x0006098b) cell_grid_ai5_widget_pane_g1

0x87b3,	// (0x0005ae34) highlight_cell_shortcut_ai5_widget_pane

0x9032,	// (0x0005b6b3) ai5_sk_left_pane_g1

0xe313,	// (0x00060994) ai5_sk_left_pane_g2

0xe31b,	// (0x0006099c) ai5_sk_left_pane_g3

0xe323,	// (0x000609a4) ai5_sk_left_pane_g4

0x0003,

0xfe5f,	// (0x000624e0) ai5_sk_left_pane_g

0xe32b,	// (0x000609ac) ai5_sk_left_pane_t1

0x903a,	// (0x0005b6bb) ai5_sk_right_pane_g1

0xe339,	// (0x000609ba) ai5_sk_right_pane_g2

0xe341,	// (0x000609c2) ai5_sk_right_pane_g3

0xe349,	// (0x000609ca) ai5_sk_right_pane_g4

0x0003,

0xfe68,	// (0x000624e9) ai5_sk_right_pane_g

0xe351,	// (0x000609d2) ai5_sk_right_pane_t1

0x903a,	// (0x0005b6bb) ai5_sk_middle_pane_g1

0x9032,	// (0x0005b6b3) ai5_sk_middle_pane_g2

0x9052,	// (0x0005b6d3) ai5_sk_middle_pane_g3

0xe341,	// (0x000609c2) ai5_sk_middle_pane_g4

0xe31b,	// (0x0006099c) ai5_sk_middle_pane_g5

0xe35f,	// (0x000609e0) ai5_sk_middle_pane_g6

0xe367,	// (0x000609e8) ai5_sk_middle_pane_g7

0x0006,

0xfe71,	// (0x000624f2) ai5_sk_middle_pane_g

0x8b42,	// (0x0005b1c3) aid_touch_area_size_lc0_ParamLimits

0x8b42,	// (0x0005b1c3) aid_touch_area_size_lc0

0x7157,	// (0x000597d8) cell_hwr_candidate_pane_t1_ParamLimits

0x8b60,	// (0x0005b1e1) aid_touch_navi_pane

0x8e4b,	// (0x0005b4cc) status_dt_navi_pane_ParamLimits

0x8e4b,	// (0x0005b4cc) status_dt_navi_pane

0x8e58,	// (0x0005b4d9) status_dt_sta_pane_ParamLimits

0x8e58,	// (0x0005b4d9) status_dt_sta_pane

0xe36f,	// (0x000609f0) dt_sta_controll_pane

0xe37c,	// (0x000609fd) dt_sta_indi_pane

0xe38d,	// (0x00060a0e) dt_sta_title_pane

0xecd4,	// (0x00061355) bg_dt_sta_indi_pane_ParamLimits

0xecd4,	// (0x00061355) bg_dt_sta_indi_pane

0xe3a0,	// (0x00060a21) dt_sta_battery_pane

0xe3a8,	// (0x00060a29) dt_sta_indi_pane_g1

0xe3b1,	// (0x00060a32) dt_sta_indi_pane_g2

0xe3ba,	// (0x00060a3b) dt_sta_indi_pane_g3

0x0002,

0xfe80,	// (0x00062501) dt_sta_indi_pane_g

0xe3c3,	// (0x00060a44) dt_sta_signal_pane

0xf487,	// (0x00061b08) bg_dt_sta_title_pane_ParamLimits

0xf487,	// (0x00061b08) bg_dt_sta_title_pane

0xe3cc,	// (0x00060a4d) dt_sta_title_pane_g1

0xe3d4,	// (0x00060a55) dt_sta_title_pane_t1_ParamLimits

0xe3d4,	// (0x00060a55) dt_sta_title_pane_t1

0xb680,	// (0x0005dd01) bg_dt_sta_control_pane

0xe3e9,	// (0x00060a6a) dt_sta_controll_pane_g1

0xe3f2,	// (0x00060a73) bg_dt_sta_title_pane_g1

0xe3fb,	// (0x00060a7c) bg_dt_sta_title_pane_g2

0xe404,	// (0x00060a85) bg_dt_sta_title_pane_g3

0x0002,

0xfe87,	// (0x00062508) bg_dt_sta_title_pane_g

0xb90a,	// (0x0005df8b) bg_dt_sta_indi_pane_g1

0xe40d,	// (0x00060a8e) dt_sta_signal_pane_g1

0xe415,	// (0x00060a96) dt_sta_signal_pane_g2

0x0001,

0xfe8e,	// (0x0006250f) dt_sta_signal_pane_g

0xe41d,	// (0x00060a9e) dt_sta_battery_pane_g1

0xe426,	// (0x00060aa7) dt_sta_battery_pane_t1

0xb90a,	// (0x0005df8b) bg_dt_sta_control_pane_g1

0x82ad,	// (0x0005a92e) fep_china_uni_eep_pane

0x82b5,	// (0x0005a936) fep_china_uni_entry_pane_ParamLimits

0x82c5,	// (0x0005a946) popup_fep_china_uni_window_g1_ParamLimits

0x82d5,	// (0x0005a956) popup_fep_china_uni_window_g2_ParamLimits

0x82d5,	// (0x0005a956) popup_fep_china_uni_window_g2

0x0001,

0xf6fb,	// (0x00061d7c) popup_fep_china_uni_window_g_ParamLimits

0xf6fb,	// (0x00061d7c) popup_fep_china_uni_window_g

0xe435,	// (0x00060ab6) fep_china_uni_eep_pane_g1

0xe43d,	// (0x00060abe) fep_china_uni_eep_pane_t1

0xde4d,	// (0x000604ce) aid_touch_area_size_smil_player

0x8cb2,	// (0x0005b333) lc0_clock_pane

0x8ea7,	// (0x0005b528) status_pane_g5_ParamLimits

0x8ea7,	// (0x0005b528) status_pane_g5

0x6495,	// (0x00058b16) popup_keymap_window

0x8e6d,	// (0x0005b4ee) status_icon_pane

0xe032,	// (0x000606b3) cell_ai5_widget_pane_g3_ParamLimits

0xe04c,	// (0x000606cd) cell_ai5_widget_pane_g4_ParamLimits

0xe05c,	// (0x000606dd) cell_ai5_widget_pane_g5_ParamLimits

0xe085,	// (0x00060706) cell_ai5_widget_pane_g8_ParamLimits

0xe085,	// (0x00060706) cell_ai5_widget_pane_g8

0xe099,	// (0x0006071a) cell_ai5_widget_pane_g9_ParamLimits

0xe099,	// (0x0006071a) cell_ai5_widget_pane_g9

0xe0ad,	// (0x0006072e) cell_ai5_widget_pane_g10_ParamLimits

0xe0ad,	// (0x0006072e) cell_ai5_widget_pane_g10

0xe44c,	// (0x00060acd) status_icon_pane_g1

0xb680,	// (0x0005dd01) bg_popup_sub_pane_cp13

0xe454,	// (0x00060ad5) popup_keymap_window_t1

0x8a8b,	// (0x0005b10c) control_pane_g6_ParamLimits

0x8a8b,	// (0x0005b10c) control_pane_g6

0x8a98,	// (0x0005b119) control_pane_g7_ParamLimits

0x8a98,	// (0x0005b119) control_pane_g7

0x8aa5,	// (0x0005b126) control_pane_g8_ParamLimits

0x8aa5,	// (0x0005b126) control_pane_g8

0xe36f,	// (0x000609f0) dt_sta_controll_pane_ParamLimits

0xe37c,	// (0x000609fd) dt_sta_indi_pane_ParamLimits

0xe38d,	// (0x00060a0e) dt_sta_title_pane_ParamLimits

0xf3c9,	// (0x00061a4a) aid_size_touch_scroll_bar_cale

0x4f28,	// (0x000575a9) popup_discreet_window_ParamLimits

0x4f28,	// (0x000575a9) popup_discreet_window

0x4fb6,	// (0x00057637) popup_sk_window

0x96a8,	// (0x0005bd29) bg_popup_sub_pane_cp28_ParamLimits

0x96a8,	// (0x0005bd29) bg_popup_sub_pane_cp28

0xe462,	// (0x00060ae3) popup_discreet_window_g1_ParamLimits

0xe462,	// (0x00060ae3) popup_discreet_window_g1

0xe482,	// (0x00060b03) popup_discreet_window_t1_ParamLimits

0xe482,	// (0x00060b03) popup_discreet_window_t1

0xe4a0,	// (0x00060b21) popup_discreet_window_t2_ParamLimits

0xe4a0,	// (0x00060b21) popup_discreet_window_t2

0x0002,

0xfe93,	// (0x00062514) popup_discreet_window_t_ParamLimits

0xfe93,	// (0x00062514) popup_discreet_window_t

0x7c6a,	// (0x0005a2eb) popup_sk_window_g1

0x7c74,	// (0x0005a2f5) popup_sk_window_g2

0x0001,

0xfe9a,	// (0x0006251b) popup_sk_window_g

0x7c7c,	// (0x0005a2fd) popup_sk_window_t1

0x7c8a,	// (0x0005a30b) popup_sk_window_t1_copy1

0xe01e,	// (0x0006069f) cell_ai5_widget_pane_g2_ParamLimits

0xe1bb,	// (0x0006083c) cell_ai5_widget_pane_t9_ParamLimits

0xe1bb,	// (0x0006083c) cell_ai5_widget_pane_t9

0xb680,	// (0x0005dd01) main_fep_fshwr2_pane

0x7c98,	// (0x0005a319) aid_fshwr2_btn_pane

0x7ca8,	// (0x0005a329) aid_fshwr2_syb_pane

0x7cbc,	// (0x0005a33d) aid_fshwr2_txt_pane

0x7ccc,	// (0x0005a34d) fshwr2_func_candi_pane

0x7cec,	// (0x0005a36d) fshwr2_hwr_syb_pane

0x7d02,	// (0x0005a383) fshwr2_icf_pane

0x4e4b,	// (0x000574cc) fshwr2_icf_bg_pane

0x7d36,	// (0x0005a3b7) fshwr2_icf_pane_t1_ParamLimits

0x7d36,	// (0x0005a3b7) fshwr2_icf_pane_t1

0x8186,	// (0x0005a807) fshwr2_func_candi_pane_g1

0xe4f2,	// (0x00060b73) fshwr2_func_candi_row_pane_ParamLimits

0xe4f2,	// (0x00060b73) fshwr2_func_candi_row_pane

0x7d4e,	// (0x0005a3cf) cell_fshwr2_syb_pane_ParamLimits

0x7d4e,	// (0x0005a3cf) cell_fshwr2_syb_pane

0x7d6f,	// (0x0005a3f0) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7d6f,	// (0x0005a3f0) fshwr2_hwr_syb_pane_g1

0x4e4b,	// (0x000574cc) bg_popup_call_pane_cp01

0x7d7d,	// (0x0005a3fe) fshwr2_func_candi_cell_pane_ParamLimits

0x7d7d,	// (0x0005a3fe) fshwr2_func_candi_cell_pane

0x9f0d,	// (0x0005c58e) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9f0d,	// (0x0005c58e) fshwr2_func_candi_cell_bg_pane

0x7dce,	// (0x0005a44f) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7dce,	// (0x0005a44f) fshwr2_func_candi_cell_pane_g1

0x7df9,	// (0x0005a47a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7df9,	// (0x0005a47a) fshwr2_func_candi_cell_pane_t1

0x4e4b,	// (0x000574cc) bg_button_pane_cp08

0x8ae2,	// (0x0005b163) cell_fshwr2_syb_bg_pane

0x7e0c,	// (0x0005a48d) cell_fshwr2_syb_bg_pane_g1

0x7e20,	// (0x0005a4a1) cell_fshwr2_syb_bg_pane_t1

0xf487,	// (0x00061b08) main_tmo_pane

0xa3ba,	// (0x0005ca3b) uni_indicator_pane_g1_ParamLimits

0xa3d0,	// (0x0005ca51) uni_indicator_pane_g2_ParamLimits

0xa3e6,	// (0x0005ca67) uni_indicator_pane_g3_ParamLimits

0xa3f9,	// (0x0005ca7a) uni_indicator_pane_g4_ParamLimits

0xa3f9,	// (0x0005ca7a) uni_indicator_pane_g4

0xa40d,	// (0x0005ca8e) uni_indicator_pane_g5_ParamLimits

0xa40d,	// (0x0005ca8e) uni_indicator_pane_g5

0xa40d,	// (0x0005ca8e) uni_indicator_pane_g6_ParamLimits

0xa40d,	// (0x0005ca8e) uni_indicator_pane_g6

0xf8ff,	// (0x00061f80) uni_indicator_pane_g_ParamLimits

0xce29,	// (0x0005f4aa) popup_tmo_note_window_ParamLimits

0xce29,	// (0x0005f4aa) popup_tmo_note_window

0x74bc,	// (0x00059b3d) fshwr2_bg_pane

0x7dea,	// (0x0005a46b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7dea,	// (0x0005a46b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9f,	// (0x00062520) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9f,	// (0x00062520) fshwr2_func_candi_cell_pane_g

0x7110,	// (0x00059791) bg_popup_window_pane_cp01

0x7e36,	// (0x0005a4b7) bg_popup_window_pane_g1_cp01

0xe515,	// (0x00060b96) bg_popup_window_pane_cp22_ParamLimits

0xe515,	// (0x00060b96) bg_popup_window_pane_cp22

0xe523,	// (0x00060ba4) listscroll_tmo_link_pane_ParamLimits

0xe523,	// (0x00060ba4) listscroll_tmo_link_pane

0xe563,	// (0x00060be4) popup_tmo_note_window_g1_ParamLimits

0xe563,	// (0x00060be4) popup_tmo_note_window_g1

0xe570,	// (0x00060bf1) tmo_note_info_pane_ParamLimits

0xe570,	// (0x00060bf1) tmo_note_info_pane

0xe58a,	// (0x00060c0b) list_tmo_note_info_pane_g1_ParamLimits

0xe58a,	// (0x00060c0b) list_tmo_note_info_pane_g1

0xe5a1,	// (0x00060c22) list_tmo_note_info_pane_g2_ParamLimits

0xe5a1,	// (0x00060c22) list_tmo_note_info_pane_g2

0x0001,

0xfea4,	// (0x00062525) list_tmo_note_info_pane_g_ParamLimits

0xfea4,	// (0x00062525) list_tmo_note_info_pane_g

0xe5bd,	// (0x00060c3e) list_tmo_note_info_text_pane_ParamLimits

0xe5bd,	// (0x00060c3e) list_tmo_note_info_text_pane

0xe642,	// (0x00060cc3) list_tmo_link_pane

0xe64f,	// (0x00060cd0) scroll_pane_cp20

0xe65c,	// (0x00060cdd) list_single_tmo_link_pane_ParamLimits

0xe65c,	// (0x00060cdd) list_single_tmo_link_pane

0xe66c,	// (0x00060ced) list_single_tmo_link_pane_t1

0xe67a,	// (0x00060cfb) list_tmo_note_info_text_pane_t1_ParamLimits

0xe67a,	// (0x00060cfb) list_tmo_note_info_text_pane_t1

0x5ac9,	// (0x0005814a) aid_size_touch_scroll_bar_cp01_ParamLimits

0x5ac9,	// (0x0005814a) aid_size_touch_scroll_bar_cp01

0x5a06,	// (0x00058087) aid_size_touch_slider_marker

0x4f9e,	// (0x0005761f) popup_settings_window_ParamLimits

0x4f9e,	// (0x0005761f) popup_settings_window

0x3a19,	// (0x0005609a) popup_candi_list_indi_window

0x8b60,	// (0x0005b1e1) aid_touch_navi_pane_ParamLimits

0x7415,	// (0x00059a96) rs_clock_indi_pane

0x741e,	// (0x00059a9f) sctrl_sk_bottom_pane_ParamLimits

0x742f,	// (0x00059ab0) sctrl_sk_top_pane_ParamLimits

0x752c,	// (0x00059bad) popup_fep_tooltip_window

0xdf92,	// (0x00060613) aid_size_cell_widget_grid_ParamLimits

0xe007,	// (0x00060688) cell_ai5_widget_pane_g1_ParamLimits

0xe007,	// (0x00060688) cell_ai5_widget_pane_g1

0xe06c,	// (0x000606ed) cell_ai5_widget_pane_g6_ParamLimits

0xe079,	// (0x000606fa) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe18,	// (0x00062499) cell_ai5_widget_pane_g_ParamLimits

0xfe18,	// (0x00062499) cell_ai5_widget_pane_g

0xe1ea,	// (0x0006086b) cell_ai5_widget_pane_t10_ParamLimits

0xe1ea,	// (0x0006086b) cell_ai5_widget_pane_t10

0xe22d,	// (0x000608ae) grid_ai5_widget_pane_ParamLimits

0xe2cb,	// (0x0006094c) cell_contacts_ai5_widget_pane_ParamLimits

0xe2cb,	// (0x0006094c) cell_contacts_ai5_widget_pane

0xe4b5,	// (0x00060b36) popup_discreet_window_t3_ParamLimits

0xe4b5,	// (0x00060b36) popup_discreet_window_t3

0x7d1e,	// (0x0005a39f) popup_fshwr2_char_preview_window_ParamLimits

0x7d1e,	// (0x0005a39f) popup_fshwr2_char_preview_window

0xe5db,	// (0x00060c5c) tmo_note_info_pane_t1

0xe5f0,	// (0x00060c71) tmo_note_info_pane_t2

0xe609,	// (0x00060c8a) tmo_note_info_pane_t3

0xe61e,	// (0x00060c9f) tmo_note_info_pane_t4

0xe630,	// (0x00060cb1) tmo_note_info_pane_t5

0x0004,

0xfea9,	// (0x0006252a) tmo_note_info_pane_t

0xe642,	// (0x00060cc3) list_tmo_link_pane_ParamLimits

0xe64f,	// (0x00060cd0) scroll_pane_cp20_ParamLimits

0x4e4b,	// (0x000574cc) bg_popup_fep_char_preview_window_cp01

0xe693,	// (0x00060d14) popup_fshwr2_char_preview_window_t1

0xe6a1,	// (0x00060d22) popup_candi_list_indi_window_g1

0xe6aa,	// (0x00060d2b) bg_cell_contacts_ai5_widget_pane

0xe6b6,	// (0x00060d37) cell_contacts_ai5_widget_pane_g1

0xe6cb,	// (0x00060d4c) cell_contacts_ai5_widget_pane_g2

0xe6d7,	// (0x00060d58) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb4,	// (0x00062535) cell_contacts_ai5_widget_pane_g

0xe6e3,	// (0x00060d64) cell_contacts_ai5_widget_pane_t1

0xf487,	// (0x00061b08) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe75a,	// (0x00060ddb) settings_container_pane

0x87b3,	// (0x0005ae34) listscroll_set_pane_copy1

0xaf8e,	// (0x0005d60f) scroll_pane_cp121_copy1

0xe766,	// (0x00060de7) set_content_pane_copy1

0xe76e,	// (0x00060def) aid_height_set_list_copy1_ParamLimits

0xe76e,	// (0x00060def) aid_height_set_list_copy1

0xa5fd,	// (0x0005cc7e) aid_size_parent_copy1_ParamLimits

0xa5fd,	// (0x0005cc7e) aid_size_parent_copy1

0xe77a,	// (0x00060dfb) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe77a,	// (0x00060dfb) button_value_adjust_pane_cp6_copy1

0x8ae2,	// (0x0005b163) list_highlight_pane_cp2_copy1_ParamLimits

0x8ae2,	// (0x0005b163) list_highlight_pane_cp2_copy1

0xe78e,	// (0x00060e0f) list_set_pane_copy1_ParamLimits

0xe78e,	// (0x00060e0f) list_set_pane_copy1

0xe6f5,	// (0x00060d76) main_pane_set_t1_copy1_ParamLimits

0xe6f5,	// (0x00060d76) main_pane_set_t1_copy1

0xe72f,	// (0x00060db0) main_pane_set_t2_copy1_ParamLimits

0xe72f,	// (0x00060db0) main_pane_set_t2_copy1

0xe84f,	// (0x00060ed0) main_pane_set_t3_copy1

0xe85d,	// (0x00060ede) main_pane_set_t4_copy1

0xe74e,	// (0x00060dcf) set_content_pane_g1_copy1_ParamLimits

0xe74e,	// (0x00060dcf) set_content_pane_g1_copy1

0xe86b,	// (0x00060eec) setting_code_pane_copy1

0xe873,	// (0x00060ef4) setting_slider_graphic_pane_copy1

0xe873,	// (0x00060ef4) setting_slider_pane_copy1

0xe87b,	// (0x00060efc) setting_text_pane_copy1

0xe87b,	// (0x00060efc) setting_volume_pane_copy1

0xe86b,	// (0x00060eec) settings_code_pane_cp2_copy1

0xe883,	// (0x00060f04) settings_code_pane_cp_copy1_ParamLimits

0xe883,	// (0x00060f04) settings_code_pane_cp_copy1

0x7e3f,	// (0x0005a4c0) volume_set_pane_copy1

0xe897,	// (0x00060f18) volume_set_pane_g10_copy1

0xe8a3,	// (0x00060f24) volume_set_pane_g1_copy1

0xe8ad,	// (0x00060f2e) volume_set_pane_g2_copy1

0xe8b7,	// (0x00060f38) volume_set_pane_g3_copy1

0xe8c1,	// (0x00060f42) volume_set_pane_g4_copy1

0xe8cb,	// (0x00060f4c) volume_set_pane_g5_copy1

0xe8d5,	// (0x00060f56) volume_set_pane_g6_copy1

0xe8df,	// (0x00060f60) volume_set_pane_g7_copy1

0xe8e9,	// (0x00060f6a) volume_set_pane_g8_copy1

0xe8f3,	// (0x00060f74) volume_set_pane_g9_copy1

0xb6e2,	// (0x0005dd63) bg_set_opt_pane_cp_copy1_ParamLimits

0xb6e2,	// (0x0005dd63) bg_set_opt_pane_cp_copy1

0x7e4b,	// (0x0005a4cc) setting_slider_pane_t1_copy1_ParamLimits

0x7e4b,	// (0x0005a4cc) setting_slider_pane_t1_copy1

0x7e6a,	// (0x0005a4eb) setting_slider_pane_t2_copy1_ParamLimits

0x7e6a,	// (0x0005a4eb) setting_slider_pane_t2_copy1

0x7e84,	// (0x0005a505) setting_slider_pane_t3_copy1_ParamLimits

0x7e84,	// (0x0005a505) setting_slider_pane_t3_copy1

0x7e9c,	// (0x0005a51d) slider_set_pane_copy1_ParamLimits

0x7e9c,	// (0x0005a51d) slider_set_pane_copy1

0xf4df,	// (0x00061b60) set_opt_bg_pane_g1_copy2

0xf4e7,	// (0x00061b68) set_opt_bg_pane_g2_copy2

0xe8ff,	// (0x00060f80) set_opt_bg_pane_g3_copy2

0xf4f7,	// (0x00061b78) set_opt_bg_pane_g4_copy2

0xf4ff,	// (0x00061b80) set_opt_bg_pane_g5_copy2

0xf507,	// (0x00061b88) set_opt_bg_pane_g6_copy2

0xe909,	// (0x00060f8a) set_opt_bg_pane_g7_copy2

0xe913,	// (0x00060f94) set_opt_bg_pane_g8_copy2

0xe91d,	// (0x00060f9e) set_opt_bg_pane_g9_copy2

0x7eb2,	// (0x0005a533) aid_size_touch_slider_mark_copy1_ParamLimits

0x7eb2,	// (0x0005a533) aid_size_touch_slider_mark_copy1

0xe927,	// (0x00060fa8) slider_set_pane_g1_copy1

0x7ec6,	// (0x0005a547) slider_set_pane_g2_copy1

0x6c85,	// (0x00059306) slider_set_pane_g3_copy1_ParamLimits

0x6c85,	// (0x00059306) slider_set_pane_g3_copy1

0x6c99,	// (0x0005931a) slider_set_pane_g4_copy1_ParamLimits

0x6c99,	// (0x0005931a) slider_set_pane_g4_copy1

0x6cb1,	// (0x00059332) slider_set_pane_g5_copy1_ParamLimits

0x6cb1,	// (0x00059332) slider_set_pane_g5_copy1

0x6c85,	// (0x00059306) slider_set_pane_g6_copy1_ParamLimits

0x6c85,	// (0x00059306) slider_set_pane_g6_copy1

0x7ece,	// (0x0005a54f) slider_set_pane_g7_copy1_ParamLimits

0x7ece,	// (0x0005a54f) slider_set_pane_g7_copy1

0xb694,	// (0x0005dd15) bg_set_opt_pane_cp2_copy1

0xe930,	// (0x00060fb1) setting_slider_graphic_pane_g1_copy1

0xe939,	// (0x00060fba) setting_slider_graphic_pane_t1_copy1

0xe949,	// (0x00060fca) setting_slider_graphic_pane_t2_copy1

0xe959,	// (0x00060fda) slider_set_pane_cp_copy1

0xe969,	// (0x00060fea) input_focus_pane_cp1_copy1

0xe972,	// (0x00060ff3) list_set_text_pane_copy1

0xe97a,	// (0x00060ffb) setting_text_pane_g1_copy1

0x3173,	// (0x000557f4) set_text_pane_t1_copy1

0xe969,	// (0x00060fea) input_focus_pane_cp2_copy1

0xe97a,	// (0x00060ffb) setting_code_pane_g1_copy1

0xe983,	// (0x00061004) setting_code_pane_t1_copy1

0xad93,	// (0x0005d414) list_set_graphic_pane_copy1

0xb694,	// (0x0005dd15) bg_set_opt_pane_cp4_copy1

0x84aa,	// (0x0005ab2b) list_set_graphic_pane_g1_copy1_ParamLimits

0x84aa,	// (0x0005ab2b) list_set_graphic_pane_g1_copy1

0xe991,	// (0x00061012) list_set_graphic_pane_g2_copy1

0x84c2,	// (0x0005ab43) list_set_graphic_pane_t1_copy1_ParamLimits

0x84c2,	// (0x0005ab43) list_set_graphic_pane_t1_copy1

0xb90a,	// (0x0005df8b) rs_clock_indi_pane_g1

0xe999,	// (0x0006101a) rs_clock_indi_pane_t1

0xe9a7,	// (0x00061028) rs_indi_pane

0xe9af,	// (0x00061030) rs_indi_pane_g1

0xe9b8,	// (0x00061039) rs_indi_pane_g2

0xe6a1,	// (0x00060d22) rs_indi_pane_g3

0x0002,

0xfebb,	// (0x0006253c) rs_indi_pane_g

0x87b3,	// (0x0005ae34) bg_popup_preview_window_pane_cp03

0xe9c1,	// (0x00061042) popup_fep_tooltip_window_t1

0xc5d7,	// (0x0005ec58) popup_note2_window_g2_ParamLimits

0xc5d7,	// (0x0005ec58) popup_note2_window_g2

0x0001,

0xfc48,	// (0x000622c9) popup_note2_window_g_ParamLimits

0xfc48,	// (0x000622c9) popup_note2_window_g

0xcadf,	// (0x0005f160) bg_popup_sub_pane_cp11_ParamLimits

0xcaec,	// (0x0005f16d) cell_ai3_links_pane_g1_ParamLimits

0xcb03,	// (0x0005f184) cell_ai3_links_pane_t1

0x3173,	// (0x000557f4) set_text_pane_t1_copy1_ParamLimits

0x86b1,	// (0x0005ad32) cell_graphic_popup_pane_cp2_ParamLimits

0x86b1,	// (0x0005ad32) cell_graphic_popup_pane_cp2

0xe9cf,	// (0x00061050) cell_graphic_popup_pane_g1_cp2

0xf1dc,	// (0x0006185d) cell_graphic_popup_pane_g2_cp2

0xe9d7,	// (0x00061058) cell_graphic_popup_pane_g3_cp2

0xe9df,	// (0x00061060) cell_graphic_popup_pane_t2_cp2

0xf1ed,	// (0x0006186e) grid_highlight_pane_cp3_cp2

0x3452,	// (0x00055ad3) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xf487,	// (0x00061b08) main_tmo_pane_ParamLimits

0xce1d,	// (0x0005f49e) popup_tmo_big_image_note_window

0xdff6,	// (0x00060677) cell_ai5_widget_list_pane

0xdffe,	// (0x0006067f) cell_ai5_widget_lrg_icon_pane

0xe5db,	// (0x00060c5c) tmo_note_info_pane_t1_ParamLimits

0xe5f0,	// (0x00060c71) tmo_note_info_pane_t2_ParamLimits

0xe609,	// (0x00060c8a) tmo_note_info_pane_t3_ParamLimits

0xe61e,	// (0x00060c9f) tmo_note_info_pane_t4_ParamLimits

0xe630,	// (0x00060cb1) tmo_note_info_pane_t5_ParamLimits

0xfea9,	// (0x0006252a) tmo_note_info_pane_t_ParamLimits

0xe75a,	// (0x00060ddb) settings_container_pane_ParamLimits

0xe961,	// (0x00060fe2) indicator_popup_pane_cp5

0xe961,	// (0x00060fe2) indicator_popup_pane_cp6

0xad93,	// (0x0005d414) list_set_graphic_pane_copy1_ParamLimits

0xb680,	// (0x0005dd01) bg_popup_window_pane_cp23

0xe9ed,	// (0x0006106e) popup_tmo_big_image_note_window_g1

0xe9f9,	// (0x0006107a) popup_tmo_big_image_note_window_t1

0xea09,	// (0x0006108a) popup_tmo_big_image_note_window_t2

0xea19,	// (0x0006109a) popup_tmo_big_image_note_window_t3

0x0002,

0xfec2,	// (0x00062543) popup_tmo_big_image_note_window_t

0xb90a,	// (0x0005df8b) cell_ai5_widget_lrg_icon_pane_g1

0xea29,	// (0x000610aa) cell_ai5_widget_lrg_icon_pane_t1

0xea37,	// (0x000610b8) cell_ai5_widget_list_row_pane_ParamLimits

0xea37,	// (0x000610b8) cell_ai5_widget_list_row_pane

0xea4f,	// (0x000610d0) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xea4f,	// (0x000610d0) cell_ai5_widget_list_row_pane_g1

0xea5c,	// (0x000610dd) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xea5c,	// (0x000610dd) cell_ai5_widget_list_row_pane_t1

0xea87,	// (0x00061108) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xea87,	// (0x00061108) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec9,	// (0x0006254a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec9,	// (0x0006254a) cell_ai5_widget_list_row_pane_t

0x4e4b,	// (0x000574cc) main_fep_vtchi_ss_pane

0xead7,	// (0x00061158) popup_fep_char_pre_window

0xeadf,	// (0x00061160) popup_fep_ituss_window

0xeb11,	// (0x00061192) popup_fep_vkbss_window

0x8ae2,	// (0x0005b163) grid_vkbss_keypad_pane_ParamLimits

0x8ae2,	// (0x0005b163) grid_vkbss_keypad_pane

0xeb59,	// (0x000611da) ituss_keypad_pane

0x7f0f,	// (0x0005a590) aid_vkbss_key_offset_ParamLimits

0x7f0f,	// (0x0005a590) aid_vkbss_key_offset

0x7f1b,	// (0x0005a59c) cell_vkbss_key_pane_ParamLimits

0x7f1b,	// (0x0005a59c) cell_vkbss_key_pane

0xeb65,	// (0x000611e6) bg_cell_vkbss_key_g1_ParamLimits

0xeb65,	// (0x000611e6) bg_cell_vkbss_key_g1

0xeb71,	// (0x000611f2) cell_vkbss_key_3p_pane_ParamLimits

0xeb71,	// (0x000611f2) cell_vkbss_key_3p_pane

0xeba7,	// (0x00061228) cell_vkbss_key_g1_ParamLimits

0xeba7,	// (0x00061228) cell_vkbss_key_g1

0xed58,	// (0x000613d9) cell_vkbss_key_t1_ParamLimits

0xed58,	// (0x000613d9) cell_vkbss_key_t1

0x7f7d,	// (0x0005a5fe) cell_ituss_key_pane_ParamLimits

0x7f7d,	// (0x0005a5fe) cell_ituss_key_pane

0xedb4,	// (0x00061435) bg_cell_ituss_key_g1_ParamLimits

0xedb4,	// (0x00061435) bg_cell_ituss_key_g1

0xedc0,	// (0x00061441) cell_ituss_key_pane_g1_ParamLimits

0xedc0,	// (0x00061441) cell_ituss_key_pane_g1

0x7f8e,	// (0x0005a60f) cell_ituss_key_pane_g2_ParamLimits

0x7f8e,	// (0x0005a60f) cell_ituss_key_pane_g2

0x0005,

0xfed0,	// (0x00062551) cell_ituss_key_pane_g_ParamLimits

0xfed0,	// (0x00062551) cell_ituss_key_pane_g

0x8012,	// (0x0005a693) cell_ituss_key_t1_ParamLimits

0x8012,	// (0x0005a693) cell_ituss_key_t1

0x804c,	// (0x0005a6cd) cell_ituss_key_t2_ParamLimits

0x804c,	// (0x0005a6cd) cell_ituss_key_t2

0x807e,	// (0x0005a6ff) cell_ituss_key_t3_ParamLimits

0x807e,	// (0x0005a6ff) cell_ituss_key_t3

0x80af,	// (0x0005a730) cell_ituss_key_t4_ParamLimits

0x80af,	// (0x0005a730) cell_ituss_key_t4

0x0005,

0xfedd,	// (0x0006255e) cell_ituss_key_t_ParamLimits

0xfedd,	// (0x0006255e) cell_ituss_key_t

0xede6,	// (0x00061467) cell_vkbss_key_3p_pane_g1

0xedee,	// (0x0006146f) cell_vkbss_key_3p_pane_g2

0xedf6,	// (0x00061477) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeea,	// (0x0006256b) cell_vkbss_key_3p_pane_g

0x87b3,	// (0x0005ae34) bg_popup_fep_char_preview_window_cp02

0xedfe,	// (0x0006147f) popup_fep_char_pre_window_t1

0xdf7f,	// (0x00060600) main_ai5_sk_pane

0xe6aa,	// (0x00060d2b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe6b6,	// (0x00060d37) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe6cb,	// (0x00060d4c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe6d7,	// (0x00060d58) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb4,	// (0x00062535) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe6e3,	// (0x00060d64) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xf487,	// (0x00061b08) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xee0c,	// (0x0006148d) main_ai5_sk_pane_g1

0x94e0,	// (0x0005bb61) popup_query_code_window_g1

0xeaf8,	// (0x00061179) popup_fep_vkb_icf_pane

0xeb2d,	// (0x000611ae) popup_fep_vtchi_icf_pane

0xee15,	// (0x00061496) bg_icf_pane

0xee15,	// (0x00061496) list_vkb_icf_pane

0xee21,	// (0x000614a2) bg_icf_pane_cp01

0xee34,	// (0x000614b5) vtchi_icf_list_pane

0xee94,	// (0x00061515) list_vkb_icf_pane_t1_ParamLimits

0xee94,	// (0x00061515) list_vkb_icf_pane_t1

0xeead,	// (0x0006152e) vtchi_icf_list_pane_t1_ParamLimits

0xeead,	// (0x0006152e) vtchi_icf_list_pane_t1

0xeadf,	// (0x00061160) popup_fep_ituss_window_ParamLimits

0xeb2d,	// (0x000611ae) popup_fep_vtchi_icf_pane_ParamLimits

0xeb59,	// (0x000611da) ituss_keypad_pane_ParamLimits

0x7f05,	// (0x0005a586) ituss_sks_pane

0xee15,	// (0x00061496) bg_icf_pane_ParamLimits

0xeaaf,	// (0x00061130) icf_edit_indi_pane_ParamLimits

0xeaaf,	// (0x00061130) icf_edit_indi_pane

0xee15,	// (0x00061496) list_vkb_icf_pane_ParamLimits

0xee21,	// (0x000614a2) bg_icf_pane_cp01_ParamLimits

0xeaca,	// (0x0006114b) icf_edit_indi_pane_cp01_ParamLimits

0xeaca,	// (0x0006114b) icf_edit_indi_pane_cp01

0xee34,	// (0x000614b5) vtchi_query_pane

0xde1d,	// (0x0006049e) icf_edit_indi_pane_g1_ParamLimits

0xde1d,	// (0x0006049e) icf_edit_indi_pane_g1

0xef1d,	// (0x0006159e) icf_edit_indi_pane_g2_ParamLimits

0xef1d,	// (0x0006159e) icf_edit_indi_pane_g2

0x0001,

0xff15,	// (0x00062596) icf_edit_indi_pane_g_ParamLimits

0xff15,	// (0x00062596) icf_edit_indi_pane_g

0xef31,	// (0x000615b2) icf_edit_indi_pane_t1

0xeec6,	// (0x00061547) bg_input_focus_pane_cp042

0xf3c0,	// (0x00061a41) vtchi_button_pane

0xeecf,	// (0x00061550) vtchi_query_pane_t1

0xeedd,	// (0x0006155e) vtchi_query_pane_t2

0xeeeb,	// (0x0006156c) vtchi_query_pane_t3

0x0002,

0xff04,	// (0x00062585) vtchi_query_pane_t

0x4e4b,	// (0x000574cc) bg_button_pane_cp13

0xeef9,	// (0x0006157a) vtchi_button_pane_g1

0x8130,	// (0x0005a7b1) ituss_sks_pane_g1

0x813b,	// (0x0005a7bc) ituss_sks_pane_g2

0x0001,

0xff0b,	// (0x0006258c) ituss_sks_pane_g

0xef01,	// (0x00061582) ituss_sks_pane_t1

0xef0f,	// (0x00061590) ituss_sks_pane_t2

0x0001,

0xff10,	// (0x00062591) ituss_sks_pane_t

0xb331,	// (0x0005d9b2) indicator_nsta_pane_cp_g1

0xb33a,	// (0x0005d9bb) indicator_nsta_pane_cp_g2

0xb342,	// (0x0005d9c3) indicator_nsta_pane_cp_g3

0xb34a,	// (0x0005d9cb) indicator_nsta_pane_cp_g4

0xb33a,	// (0x0005d9bb) indicator_nsta_pane_cp_g5

0xb342,	// (0x0005d9c3) indicator_nsta_pane_cp_g6

0x0005,

0xfa86,	// (0x00062107) indicator_nsta_pane_cp_g

0xdb64,	// (0x000601e5) cell_graphic2_pane_t2_ParamLimits

0xdb64,	// (0x000601e5) cell_graphic2_pane_t2

0x0001,

0xfd9f,	// (0x00062420) cell_graphic2_pane_t_ParamLimits

0xfd9f,	// (0x00062420) cell_graphic2_pane_t

0xdb90,	// (0x00060211) cell_graphic2_control_pane_t1

0x8263,	// (0x0005a8e4) signal_pane_g3_ParamLimits

0x8263,	// (0x0005a8e4) signal_pane_g3

0x8272,	// (0x0005a8f3) signal_pane_g4_ParamLimits

0x8272,	// (0x0005a8f3) signal_pane_g4

0xea99,	// (0x0006111a) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xea99,	// (0x0006111a) cell_ai5_widget_list_row_pane_t3

0xedd4,	// (0x00061455) cell_ituss_key_pane_t1_ParamLimits

0xedd4,	// (0x00061455) cell_ituss_key_pane_t1

0x9147,	// (0x0005b7c8) form_field_data_wide_pane_vc_t2_ParamLimits

0x9147,	// (0x0005b7c8) form_field_data_wide_pane_vc_t2

0x915b,	// (0x0005b7dc) form_field_data_wide_pane_vc_t3_ParamLimits

0x915b,	// (0x0005b7dc) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e7,	// (0x00061e68) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e7,	// (0x00061e68) form_field_data_wide_pane_vc_t

0xafce,	// (0x0005d64f) form_field_slider_wide_pane_vc_t3_ParamLimits

0xafce,	// (0x0005d64f) form_field_slider_wide_pane_vc_t3

0xb0a4,	// (0x0005d725) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb0a4,	// (0x0005d725) form_field_popup_wide_pane_vc_t2

0xb0bb,	// (0x0005d73c) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb0bb,	// (0x0005d73c) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa75,	// (0x000620f6) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa75,	// (0x000620f6) form_field_popup_wide_pane_vc_t

0x7c98,	// (0x0005a319) aid_fshwr2_btn_pane_ParamLimits

0x7ca8,	// (0x0005a329) aid_fshwr2_syb_pane_ParamLimits

0x7cbc,	// (0x0005a33d) aid_fshwr2_txt_pane_ParamLimits

0x74bc,	// (0x00059b3d) fshwr2_bg_pane_ParamLimits

0x7ccc,	// (0x0005a34d) fshwr2_func_candi_pane_ParamLimits

0x7cec,	// (0x0005a36d) fshwr2_hwr_syb_pane_ParamLimits

0x7d02,	// (0x0005a383) fshwr2_icf_pane_ParamLimits

0x9ac4,	// (0x0005c145) list_double_graphic_pane_vc_g4_ParamLimits

0x9ac4,	// (0x0005c145) list_double_graphic_pane_vc_g4

0x7fae,	// (0x0005a62f) cell_ituss_key_pane_g3_ParamLimits

0x7fae,	// (0x0005a62f) cell_ituss_key_pane_g3

0x80e0,	// (0x0005a761) cell_ituss_key_t5_ParamLimits

0x80e0,	// (0x0005a761) cell_ituss_key_t5

0xeb11,	// (0x00061192) popup_fep_vkbss_window_ParamLimits

0xdf89,	// (0x0006060a) aid_cell_ai5_quarter

0xef31,	// (0x000615b2) icf_edit_indi_pane_t1_ParamLimits

0xf020,	// (0x000616a1) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xf020,	// (0x000616a1) aid_tch_indicator_popup_pane_cp2

0xf033,	// (0x000616b4) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xf033,	// (0x000616b4) aid_tch_query_popup_data_pane_cp2

0x9488,	// (0x0005bb09) aid_tch_query_popup_pane_ParamLimits

0x9488,	// (0x0005bb09) aid_tch_query_popup_pane

0x9488,	// (0x0005bb09) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9488,	// (0x0005bb09) aid_tch_query_popup_data_pane_cp1

0x8ae2,	// (0x0005b163) cell_fshwr2_syb_bg_pane_ParamLimits

0x7e0c,	// (0x0005a48d) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x7e20,	// (0x0005a4a1) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xeaf8,	// (0x00061179) popup_fep_vkb_icf_pane_ParamLimits

0x7ade,	// (0x0005a15f) bg_popup_fep_char_preview_window_g10

0xe0c1,	// (0x00060742) cell_ai5_widget_pane_g11_ParamLimits

0xe0c1,	// (0x00060742) cell_ai5_widget_pane_g11

0xe0cd,	// (0x0006074e) cell_ai5_widget_pane_g12_ParamLimits

0xe0cd,	// (0x0006074e) cell_ai5_widget_pane_g12

0xe0d9,	// (0x0006075a) cell_ai5_widget_pane_g13_ParamLimits

0xe0d9,	// (0x0006075a) cell_ai5_widget_pane_g13

0xe209,	// (0x0006088a) cell_ai5_widget_pane_t11_ParamLimits

0xe209,	// (0x0006088a) cell_ai5_widget_pane_t11

0xe21b,	// (0x0006089c) cell_ai5_widget_pane_t12_ParamLimits

0xe21b,	// (0x0006089c) cell_ai5_widget_pane_t12

0x7fba,	// (0x0005a63b) cell_ituss_key_pane_g4_ParamLimits

0x7fba,	// (0x0005a63b) cell_ituss_key_pane_g4

0x7fd6,	// (0x0005a657) cell_ituss_key_pane_g5_ParamLimits

0x7fd6,	// (0x0005a657) cell_ituss_key_pane_g5

0x7ff2,	// (0x0005a673) cell_ituss_key_pane_g6_ParamLimits

0x7ff2,	// (0x0005a673) cell_ituss_key_pane_g6

0x902a,	// (0x0005b6ab) bg_icf_pane_g1

0xee3c,	// (0x000614bd) bg_icf_pane_g2

0xee48,	// (0x000614c9) bg_icf_pane_g3

0xee52,	// (0x000614d3) bg_icf_pane_g4

0xee5e,	// (0x000614df) bg_icf_pane_g5

0xee68,	// (0x000614e9) bg_icf_pane_g6

0xee74,	// (0x000614f5) bg_icf_pane_g7

0xee7e,	// (0x000614ff) bg_icf_pane_g8

0xee8a,	// (0x0006150b) bg_icf_pane_g9

0x0008,

0xfef1,	// (0x00062572) bg_icf_pane_g

0xeb46,	// (0x000611c7) popup_hyb_candi_window_ParamLimits

0xeb46,	// (0x000611c7) popup_hyb_candi_window

0x90b6,	// (0x0005b737) bg_popup_sub_pane_cp01_ParamLimits

0x90b6,	// (0x0005b737) bg_popup_sub_pane_cp01

0xef4a,	// (0x000615cb) entry_hyb_candi_pane_ParamLimits

0xef4a,	// (0x000615cb) entry_hyb_candi_pane

0xef59,	// (0x000615da) grid_hyb_candi_pane_ParamLimits

0xef59,	// (0x000615da) grid_hyb_candi_pane

0xef6e,	// (0x000615ef) grid_hyb_phrase_pane_ParamLimits

0xef6e,	// (0x000615ef) grid_hyb_phrase_pane

0xef7d,	// (0x000615fe) cell_hyb_candi_pane_ParamLimits

0xef7d,	// (0x000615fe) cell_hyb_candi_pane

0xf3c9,	// (0x00061a4a) cell_hyb_candi_scroll_pane

0x8186,	// (0x0005a807) cell_hyb_candi_pane_g1

0xef99,	// (0x0006161a) cell_hyb_candi_pane_t1

0xefa7,	// (0x00061628) cell_hyb_phrase_pane

0x8186,	// (0x0005a807) cell_hyb_phrase_pane_g1

0xefb0,	// (0x00061631) cell_hyb_phrase_pane_t1

0xefbe,	// (0x0006163f) entry_hyb_candi_pane_t1

0x87b3,	// (0x0005ae34) input_focus_pane_cp06

0xefcc,	// (0x0006164d) cell_hyb_candi_scroll_pane_g1

0xefd4,	// (0x00061655) cell_hyb_candi_scroll_pane_g1_aid

0xefdc,	// (0x0006165d) cell_hyb_candi_scroll_pane_g2

0xefe4,	// (0x00061665) cell_hyb_candi_scroll_pane_g2_aid

0xefec,	// (0x0006166d) cell_hyb_candi_scroll_pane_g3

0xeff4,	// (0x00061675) cell_hyb_candi_scroll_pane_g4

0xdede,	// (0x0006055f) ai5_page_g1

0x80f2,	// (0x0005a773) cell_ituss_key_t6_ParamLimits

0x80f2,	// (0x0005a773) cell_ituss_key_t6

0x7ee4,	// (0x0005a565) icf_edit_indi_pane_cp02_ParamLimits

0x7ee4,	// (0x0005a565) icf_edit_indi_pane_cp02

0x7ef8,	// (0x0005a579) icf_edit_indi_pane_cp03_ParamLimits

0x7ef8,	// (0x0005a579) icf_edit_indi_pane_cp03
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Large
