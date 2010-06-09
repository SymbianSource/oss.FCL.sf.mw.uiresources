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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000acbc };

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
0x6d9d,	// (0x00011a59) Screen

0x6db1,	// (0x00011a6d) application_window_ParamLimits

0x6db1,	// (0x00011a6d) application_window

0x6dcb,	// (0x00011a87) screen_g1

0x48d8,	// (0x0000f594) area_bottom_pane_ParamLimits

0x48d8,	// (0x0000f594) area_bottom_pane

0x4998,	// (0x0000f654) area_top_pane_ParamLimits

0x4998,	// (0x0000f654) area_top_pane

0x4a36,	// (0x0000f6f2) main_pane_ParamLimits

0x4a36,	// (0x0000f6f2) main_pane

0x6dd5,	// (0x00011a91) misc_graphics

0x8f4b,	// (0x00013c07) battery_pane_ParamLimits

0x8f4b,	// (0x00013c07) battery_pane

0x9d2c,	// (0x000149e8) bg_status_flat_pane_g8

0x9d34,	// (0x000149f0) bg_status_flat_pane_g9

0x900d,	// (0x00013cc9) context_pane_ParamLimits

0x900d,	// (0x00013cc9) context_pane

0x9123,	// (0x00013ddf) navi_pane_ParamLimits

0x9123,	// (0x00013ddf) navi_pane

0x91a7,	// (0x00013e63) signal_pane_ParamLimits

0x91a7,	// (0x00013e63) signal_pane

0x0008,

0xf874,	// (0x0001a530) bg_status_flat_pane_g

0x9214,	// (0x00013ed0) status_pane_g1_ParamLimits

0x9214,	// (0x00013ed0) status_pane_g1

0x9228,	// (0x00013ee4) status_pane_g2_ParamLimits

0x9228,	// (0x00013ee4) status_pane_g2

0x9234,	// (0x00013ef0) status_pane_g3_ParamLimits

0x9234,	// (0x00013ef0) status_pane_g3

0x0004,

0xf79b,	// (0x0001a457) status_pane_g_ParamLimits

0xf79b,	// (0x0001a457) status_pane_g

0x9268,	// (0x00013f24) title_pane_ParamLimits

0x9268,	// (0x00013f24) title_pane

0x92a5,	// (0x00013f61) uni_indicator_pane_ParamLimits

0x92a5,	// (0x00013f61) uni_indicator_pane

0x8e5a,	// (0x00013b16) bg_list_pane_ParamLimits

0x8e5a,	// (0x00013b16) bg_list_pane

0x8e7a,	// (0x00013b36) find_pane

0x8e82,	// (0x00013b3e) listscroll_app_pane_ParamLimits

0x8e82,	// (0x00013b3e) listscroll_app_pane

0x8e93,	// (0x00013b4f) listscroll_form_pane

0x5313,	// (0x0000ffcf) listscroll_gen_pane_ParamLimits

0x5313,	// (0x0000ffcf) listscroll_gen_pane

0x5327,	// (0x0000ffe3) listscroll_set_pane

0x8011,	// (0x00012ccd) main_idle_act_pane

0x8b56,	// (0x00013812) main_idle_trad_pane

0x8b56,	// (0x00013812) main_list_empty_pane

0x8ead,	// (0x00013b69) main_midp_pane

0x8eb9,	// (0x00013b75) main_pane_g1_ParamLimits

0x8eb9,	// (0x00013b75) main_pane_g1

0x533d,	// (0x0000fff9) popup_ai_message_window_ParamLimits

0x533d,	// (0x0000fff9) popup_ai_message_window

0x53e3,	// (0x0001009f) popup_fep_china_uni_window_ParamLimits

0x53e3,	// (0x0001009f) popup_fep_china_uni_window

0x543f,	// (0x000100fb) popup_fep_japan_candidate_window_ParamLimits

0x543f,	// (0x000100fb) popup_fep_japan_candidate_window

0x545f,	// (0x0001011b) popup_fep_japan_predictive_window_ParamLimits

0x545f,	// (0x0001011b) popup_fep_japan_predictive_window

0x548f,	// (0x0001014b) popup_find_window

0x549c,	// (0x00010158) popup_grid_graphic_window_ParamLimits

0x549c,	// (0x00010158) popup_grid_graphic_window

0x54c6,	// (0x00010182) popup_large_graphic_colour_window

0x54ec,	// (0x000101a8) popup_menu_window_ParamLimits

0x54ec,	// (0x000101a8) popup_menu_window

0x56a4,	// (0x00010360) popup_note_image_window

0x5690,	// (0x0001034c) popup_note_wait_window_ParamLimits

0x5690,	// (0x0001034c) popup_note_wait_window

0x5690,	// (0x0001034c) popup_note_window_ParamLimits

0x5690,	// (0x0001034c) popup_note_window

0x56fa,	// (0x000103b6) popup_query_code_window_ParamLimits

0x56fa,	// (0x000103b6) popup_query_code_window

0x570e,	// (0x000103ca) popup_query_data_code_window_ParamLimits

0x570e,	// (0x000103ca) popup_query_data_code_window

0x572b,	// (0x000103e7) popup_query_data_window_ParamLimits

0x572b,	// (0x000103e7) popup_query_data_window

0x5747,	// (0x00010403) popup_query_sat_info_window_ParamLimits

0x5747,	// (0x00010403) popup_query_sat_info_window

0x5780,	// (0x0001043c) popup_snote_single_graphic_window_ParamLimits

0x5780,	// (0x0001043c) popup_snote_single_graphic_window

0x5780,	// (0x0001043c) popup_snote_single_text_window_ParamLimits

0x5780,	// (0x0001043c) popup_snote_single_text_window

0x5795,	// (0x00010451) popup_sub_window_general

0x58c5,	// (0x00010581) popup_window_general_ParamLimits

0x58c5,	// (0x00010581) popup_window_general

0x8ecf,	// (0x00013b8b) power_save_pane

0x519d,	// (0x0000fe59) control_pane_g1_ParamLimits

0x519d,	// (0x0000fe59) control_pane_g1

0x51c4,	// (0x0000fe80) control_pane_g2_ParamLimits

0x51c4,	// (0x0000fe80) control_pane_g2

0x8e1d,	// (0x00013ad9) control_pane_g3_ParamLimits

0x8e1d,	// (0x00013ad9) control_pane_g3

0x0007,

0xf783,	// (0x0001a43f) control_pane_g_ParamLimits

0xf783,	// (0x0001a43f) control_pane_g

0x520e,	// (0x0000feca) control_pane_t1_ParamLimits

0x520e,	// (0x0000feca) control_pane_t1

0x5262,	// (0x0000ff1e) control_pane_t2_ParamLimits

0x5262,	// (0x0000ff1e) control_pane_t2

0x0002,

0xf794,	// (0x0001a450) control_pane_t_ParamLimits

0xf794,	// (0x0001a450) control_pane_t

0x8d42,	// (0x000139fe) navi_navi_volume_pane_cp1

0x8d4a,	// (0x00013a06) status_small_icon_pane

0x8d52,	// (0x00013a0e) status_small_pane_g1_ParamLimits

0x8d52,	// (0x00013a0e) status_small_pane_g1

0x8d86,	// (0x00013a42) status_small_pane_g2_ParamLimits

0x8d86,	// (0x00013a42) status_small_pane_g2

0x8d92,	// (0x00013a4e) status_small_pane_g3_ParamLimits

0x8d92,	// (0x00013a4e) status_small_pane_g3

0x8d9e,	// (0x00013a5a) status_small_pane_g4_ParamLimits

0x8d9e,	// (0x00013a5a) status_small_pane_g4

0x8daa,	// (0x00013a66) status_small_pane_g5_ParamLimits

0x8daa,	// (0x00013a66) status_small_pane_g5

0x8db8,	// (0x00013a74) status_small_pane_g6_ParamLimits

0x8db8,	// (0x00013a74) status_small_pane_g6

0x0007,

0xf772,	// (0x0001a42e) status_small_pane_g_ParamLimits

0xf772,	// (0x0001a42e) status_small_pane_g

0x8de7,	// (0x00013aa3) status_small_pane_t1

0x8e09,	// (0x00013ac5) status_small_wait_pane_ParamLimits

0x8e09,	// (0x00013ac5) status_small_wait_pane

0x8539,	// (0x000131f5) aid_levels_signal_ParamLimits

0x8539,	// (0x000131f5) aid_levels_signal

0x854b,	// (0x00013207) signal_pane_g1_ParamLimits

0x854b,	// (0x00013207) signal_pane_g1

0x8560,	// (0x0001321c) signal_pane_g2_ParamLimits

0x8560,	// (0x0001321c) signal_pane_g2

0x0003,

0xf703,	// (0x0001a3bf) signal_pane_g_ParamLimits

0xf703,	// (0x0001a3bf) signal_pane_g

0x859b,	// (0x00013257) context_pane_g1

0x6ddf,	// (0x00011a9b) title_pane_g1

0x6e15,	// (0x00011ad1) title_pane_t1

0x6e7d,	// (0x00011b39) title_pane_t2

0x6ea3,	// (0x00011b5f) title_pane_t3

0x0002,

0xf557,	// (0x0001a213) title_pane_t

0x92bd,	// (0x00013f79) aid_levels_battery_ParamLimits

0x92bd,	// (0x00013f79) aid_levels_battery

0x92d1,	// (0x00013f8d) battery_pane_g1_ParamLimits

0x92d1,	// (0x00013f8d) battery_pane_g1

0x92e7,	// (0x00013fa3) battery_pane_g2_ParamLimits

0x92e7,	// (0x00013fa3) battery_pane_g2

0x0001,

0xf7a6,	// (0x0001a462) battery_pane_g_ParamLimits

0xf7a6,	// (0x0001a462) battery_pane_g

0xa66e,	// (0x0001532a) uni_indicator_pane_g1

0xa684,	// (0x00015340) uni_indicator_pane_g2

0xa69a,	// (0x00015356) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0001a5d8) uni_indicator_pane_g

0x89c8,	// (0x00013684) navi_icon_pane_ParamLimits

0x89c8,	// (0x00013684) navi_icon_pane

0x8906,	// (0x000135c2) navi_midp_pane

0x89e4,	// (0x000136a0) navi_navi_pane

0x89ee,	// (0x000136aa) navi_text_pane_ParamLimits

0x89ee,	// (0x000136aa) navi_text_pane

0x6dcb,	// (0x00011a87) status_small_wait_pane_g1

0x72ec,	// (0x00011fa8) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0001a5d3) status_small_wait_pane_g

0xa393,	// (0x0001504f) navi_navi_icon_text_pane

0xa39b,	// (0x00015057) navi_navi_pane_g1_ParamLimits

0xa39b,	// (0x00015057) navi_navi_pane_g1

0xa3ad,	// (0x00015069) navi_navi_pane_g2_ParamLimits

0xa3ad,	// (0x00015069) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0001a5a1) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0001a5a1) navi_navi_pane_g

0xa3bf,	// (0x0001507b) navi_navi_tabs_pane

0xa3c8,	// (0x00015084) navi_navi_text_pane

0xa393,	// (0x0001504f) navi_navi_volume_pane

0xa36f,	// (0x0001502b) navi_text_pane_t1

0xa363,	// (0x0001501f) navi_icon_pane_g1

0xa2b6,	// (0x00014f72) navi_navi_text_pane_t1

0x5bdd,	// (0x00010899) navi_navi_volume_pane_g1

0x5be5,	// (0x000108a1) volume_small_pane

0xa21c,	// (0x00014ed8) navi_navi_icon_text_pane_g1

0xa224,	// (0x00014ee0) navi_navi_icon_text_pane_t1

0x89e4,	// (0x000136a0) navi_tabs_2_long_pane

0x89e4,	// (0x000136a0) navi_tabs_2_pane

0x89e4,	// (0x000136a0) navi_tabs_3_long_pane

0x89e4,	// (0x000136a0) navi_tabs_3_pane

0x89e4,	// (0x000136a0) navi_tabs_4_pane

0x5bbd,	// (0x00010879) tabs_2_active_pane_ParamLimits

0x5bbd,	// (0x00010879) tabs_2_active_pane

0x5bcd,	// (0x00010889) tabs_2_passive_pane_ParamLimits

0x5bcd,	// (0x00010889) tabs_2_passive_pane

0x5b8b,	// (0x00010847) tabs_3_active_pane_ParamLimits

0x5b8b,	// (0x00010847) tabs_3_active_pane

0x5b9b,	// (0x00010857) tabs_3_passive_pane_ParamLimits

0x5b9b,	// (0x00010857) tabs_3_passive_pane

0x5bac,	// (0x00010868) tabs_3_passive_pane_cp_ParamLimits

0x5bac,	// (0x00010868) tabs_3_passive_pane_cp

0x5b47,	// (0x00010803) tabs_4_active_pane_ParamLimits

0x5b47,	// (0x00010803) tabs_4_active_pane

0x5b58,	// (0x00010814) tabs_4_passive_pane_ParamLimits

0x5b58,	// (0x00010814) tabs_4_passive_pane

0x5b69,	// (0x00010825) tabs_4_passive_pane_cp_ParamLimits

0x5b69,	// (0x00010825) tabs_4_passive_pane_cp

0x5b7a,	// (0x00010836) tabs_4_passive_pane_cp2_ParamLimits

0x5b7a,	// (0x00010836) tabs_4_passive_pane_cp2

0x5b23,	// (0x000107df) tabs_2_long_active_pane_ParamLimits

0x5b23,	// (0x000107df) tabs_2_long_active_pane

0x5b35,	// (0x000107f1) tabs_2_long_passive_pane_ParamLimits

0x5b35,	// (0x000107f1) tabs_2_long_passive_pane

0x5ae4,	// (0x000107a0) tabs_3_long_active_pane_ParamLimits

0x5ae4,	// (0x000107a0) tabs_3_long_active_pane

0x5af7,	// (0x000107b3) tabs_3_long_passive_pane_ParamLimits

0x5af7,	// (0x000107b3) tabs_3_long_passive_pane

0x5b10,	// (0x000107cc) tabs_3_long_passive_pane_cp_ParamLimits

0x5b10,	// (0x000107cc) tabs_3_long_passive_pane_cp

0x5a8a,	// (0x00010746) volume_small_pane_g1

0x5a93,	// (0x0001074f) volume_small_pane_g2

0x5a9c,	// (0x00010758) volume_small_pane_g3

0x5aa5,	// (0x00010761) volume_small_pane_g4

0x5aae,	// (0x0001076a) volume_small_pane_g5

0x5ab7,	// (0x00010773) volume_small_pane_g6

0x5ac0,	// (0x0001077c) volume_small_pane_g7

0x5ac9,	// (0x00010785) volume_small_pane_g8

0x5ad2,	// (0x0001078e) volume_small_pane_g9

0x5adb,	// (0x00010797) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0001a56d) volume_small_pane_g

0x6eb5,	// (0x00011b71) bg_active_tab_pane_cp2_ParamLimits

0x6eb5,	// (0x00011b71) bg_active_tab_pane_cp2

0x6ec3,	// (0x00011b7f) tabs_3_active_pane_g1

0x6ecb,	// (0x00011b87) tabs_3_active_pane_t1

0x6eb5,	// (0x00011b71) bg_passive_tab_pane_cp2_ParamLimits

0x6eb5,	// (0x00011b71) bg_passive_tab_pane_cp2

0x6ec3,	// (0x00011b7f) tabs_3_passive_pane_g1

0x6ecb,	// (0x00011b87) tabs_3_passive_pane_t1

0x6eb5,	// (0x00011b71) bg_active_tab_pane_cp3_ParamLimits

0x6eb5,	// (0x00011b71) bg_active_tab_pane_cp3

0x6edd,	// (0x00011b99) tabs_4_active_pane_g1

0x6ee5,	// (0x00011ba1) tabs_4_active_pane_t1

0x6eb5,	// (0x00011b71) bg_passive_tab_pane_cp3_ParamLimits

0x6eb5,	// (0x00011b71) bg_passive_tab_pane_cp3

0x6edd,	// (0x00011b99) tabs_4_1_passive_pane_g1

0x6ee5,	// (0x00011ba1) tabs_4_1_passive_pane_t1

0x8ead,	// (0x00013b69) list_highlight_pane_cp2

0xa909,	// (0x000155c5) list_set_pane_ParamLimits

0xa909,	// (0x000155c5) list_set_pane

0xa9af,	// (0x0001566b) main_pane_set_t1_ParamLimits

0xa9af,	// (0x0001566b) main_pane_set_t1

0xa9cf,	// (0x0001568b) main_pane_set_t2_ParamLimits

0xa9cf,	// (0x0001568b) main_pane_set_t2

0xa9e3,	// (0x0001569f) main_pane_set_t3_ParamLimits

0xa9e3,	// (0x0001569f) main_pane_set_t3

0xa9f5,	// (0x000156b1) main_pane_set_t4_ParamLimits

0xa9f5,	// (0x000156b1) main_pane_set_t4

0x0003,

0xf981,	// (0x0001a63d) main_pane_set_t_ParamLimits

0xf981,	// (0x0001a63d) main_pane_set_t

0xaa07,	// (0x000156c3) setting_code_pane

0xaa13,	// (0x000156cf) setting_slider_graphic_pane

0xaa13,	// (0x000156cf) setting_slider_pane

0xaa13,	// (0x000156cf) setting_text_pane

0xaa13,	// (0x000156cf) setting_volume_pane

0x4c85,	// (0x0000f941) volume_set_pane

0x6eb5,	// (0x00011b71) bg_set_opt_pane_cp

0x4c8d,	// (0x0000f949) setting_slider_pane_t1

0x4ca6,	// (0x0000f962) setting_slider_pane_t2

0x4cc0,	// (0x0000f97c) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001a21a) setting_slider_pane_t

0x4cd8,	// (0x0000f994) slider_set_pane

0x6dd5,	// (0x00011a91) bg_set_opt_pane_cp2

0x6ef7,	// (0x00011bb3) setting_slider_graphic_pane_g1

0x4cee,	// (0x0000f9aa) setting_slider_graphic_pane_t1

0x4cfe,	// (0x0000f9ba) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001a221) setting_slider_graphic_pane_t

0x4d0e,	// (0x0000f9ca) slider_set_pane_cp

0x6dd5,	// (0x00011a91) input_focus_pane_cp1

0xa8c8,	// (0x00015584) list_set_text_pane

0x6dcb,	// (0x00011a87) setting_text_pane_g1

0x6dd5,	// (0x00011a91) input_focus_pane_cp2

0x6dcb,	// (0x00011a87) setting_code_pane_g1

0x6f00,	// (0x00011bbc) setting_code_pane_t1

0x6f0e,	// (0x00011bca) set_text_pane_t1_ParamLimits

0x6f0e,	// (0x00011bca) set_text_pane_t1

0x7ddc,	// (0x00012a98) set_opt_bg_pane_g1

0x7de4,	// (0x00012aa0) set_opt_bg_pane_g2

0xa8a2,	// (0x0001555e) set_opt_bg_pane_g3

0x7df4,	// (0x00012ab0) set_opt_bg_pane_g4

0x7dfc,	// (0x00012ab8) set_opt_bg_pane_g5

0x7e04,	// (0x00012ac0) set_opt_bg_pane_g6

0xa8ac,	// (0x00015568) set_opt_bg_pane_g7

0xa8b4,	// (0x00015570) set_opt_bg_pane_g8

0xa8be,	// (0x0001557a) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0001a62a) set_opt_bg_pane_g

0xa895,	// (0x00015551) slider_set_pane_g1

0x5c52,	// (0x0001090e) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0001a61b) slider_set_pane_g

0x5bee,	// (0x000108aa) volume_set_pane_g1

0x5bf6,	// (0x000108b2) volume_set_pane_g2

0x5bfe,	// (0x000108ba) volume_set_pane_g3

0x5c06,	// (0x000108c2) volume_set_pane_g4

0x5c0e,	// (0x000108ca) volume_set_pane_g5

0x5c16,	// (0x000108d2) volume_set_pane_g6

0x5c1e,	// (0x000108da) volume_set_pane_g7

0x5c26,	// (0x000108e2) volume_set_pane_g8

0x5c2e,	// (0x000108ea) volume_set_pane_g9

0x5c36,	// (0x000108f2) volume_set_pane_g10

0x0009,

0xf937,	// (0x0001a5f3) volume_set_pane_g

0x6f28,	// (0x00011be4) indicator_pane_ParamLimits

0x6f28,	// (0x00011be4) indicator_pane

0x6f34,	// (0x00011bf0) main_idle_pane_g2_ParamLimits

0x6f34,	// (0x00011bf0) main_idle_pane_g2

0x6f5c,	// (0x00011c18) main_pane_idle_g1_ParamLimits

0x6f5c,	// (0x00011c18) main_pane_idle_g1

0x6f69,	// (0x00011c25) popup_clock_digital_analogue_window_ParamLimits

0x6f69,	// (0x00011c25) popup_clock_digital_analogue_window

0x6f80,	// (0x00011c3c) soft_indicator_pane_ParamLimits

0x6f80,	// (0x00011c3c) soft_indicator_pane

0x6f8c,	// (0x00011c48) wallpaper_pane_ParamLimits

0x6f8c,	// (0x00011c48) wallpaper_pane

0x6dcb,	// (0x00011a87) wallpaper_pane_g1

0x6fa0,	// (0x00011c5c) indicator_pane_g1_ParamLimits

0x6fa0,	// (0x00011c5c) indicator_pane_g1

0xad95,	// (0x00015a51) navi_navi_icon_text_pane_srt_g1

0x6fbb,	// (0x00011c77) soft_indicator_pane_t1

0x6fd5,	// (0x00011c91) aid_ps_area_pane

0x6fe6,	// (0x00011ca2) aid_ps_clock_pane

0x6ff4,	// (0x00011cb0) aid_ps_indicator_pane

0x7000,	// (0x00011cbc) indicator_ps_pane_ParamLimits

0x7000,	// (0x00011cbc) indicator_ps_pane

0x700f,	// (0x00011ccb) power_save_pane_g1_ParamLimits

0x700f,	// (0x00011ccb) power_save_pane_g1

0x701b,	// (0x00011cd7) power_save_pane_g2_ParamLimits

0x701b,	// (0x00011cd7) power_save_pane_g2

0x488c,	// (0x0000f548) aid_navinavi_width_pane

0x6fd5,	// (0x00011c91) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001a226) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001a226) power_save_pane_g

0x7029,	// (0x00011ce5) power_save_pane_t1_ParamLimits

0x7029,	// (0x00011ce5) power_save_pane_t1

0x6fe6,	// (0x00011ca2) aid_ps_clock_pane_ParamLimits

0x6ff4,	// (0x00011cb0) aid_ps_indicator_pane_ParamLimits

0x703b,	// (0x00011cf7) power_save_pane_t4_ParamLimits

0x703b,	// (0x00011cf7) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001a22b) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001a22b) power_save_pane_t

0x7065,	// (0x00011d21) power_save_t3_ParamLimits

0x7065,	// (0x00011d21) power_save_t3

0x7050,	// (0x00011d0c) power_save_t2_ParamLimits

0x7050,	// (0x00011d0c) power_save_t2

0x707a,	// (0x00011d36) indicator_ps_pane_g1

0x7083,	// (0x00011d3f) ai_gene_pane_ParamLimits

0x7083,	// (0x00011d3f) ai_gene_pane

0x708f,	// (0x00011d4b) ai_links_pane_ParamLimits

0x708f,	// (0x00011d4b) ai_links_pane

0x709b,	// (0x00011d57) indicator_pane_cp1_ParamLimits

0x709b,	// (0x00011d57) indicator_pane_cp1

0x70a7,	// (0x00011d63) main_pane_idle_g1_cp_ParamLimits

0x70a7,	// (0x00011d63) main_pane_idle_g1_cp

0x70b3,	// (0x00011d6f) popup_ai_links_title_window

0x70bc,	// (0x00011d78) soft_indicator_pane_cp1_ParamLimits

0x70bc,	// (0x00011d78) soft_indicator_pane_cp1

0xa65c,	// (0x00015318) ai_links_pane_g1

0xa665,	// (0x00015321) grid_ai_links_pane

0xa63f,	// (0x000152fb) ai_gene_pane_1

0xa64a,	// (0x00015306) ai_gene_pane_2

0xa653,	// (0x0001530f) list_highlight_pane_cp4

0xa623,	// (0x000152df) cell_ai_link_pane_ParamLimits

0xa623,	// (0x000152df) cell_ai_link_pane

0xa61b,	// (0x000152d7) cell_ai_link_pane_g1

0x72ec,	// (0x00011fa8) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0001a5ce) cell_ai_link_pane_g

0x6dd5,	// (0x00011a91) grid_highlight_cp2

0x6dd5,	// (0x00011a91) bg_popup_sub_pane_cp1

0x70d6,	// (0x00011d92) popup_ai_links_title_window_t1

0xa569,	// (0x00015225) ai_gene_pane_1_g1_ParamLimits

0xa569,	// (0x00015225) ai_gene_pane_1_g1

0xa575,	// (0x00015231) ai_gene_pane_1_g2_ParamLimits

0xa575,	// (0x00015231) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0001a5c4) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0001a5c4) ai_gene_pane_1_g

0xa582,	// (0x0001523e) ai_gene_pane_1_t1_ParamLimits

0xa582,	// (0x0001523e) ai_gene_pane_1_t1

0xa5b6,	// (0x00015272) grid_ai_soft_ind_pane

0xa554,	// (0x00015210) ai_gene_pane_2_t1_ParamLimits

0xa554,	// (0x00015210) ai_gene_pane_2_t1

0x70e5,	// (0x00011da1) main_pane_empty_t1_ParamLimits

0x70e5,	// (0x00011da1) main_pane_empty_t1

0x70fd,	// (0x00011db9) main_pane_empty_t2_ParamLimits

0x70fd,	// (0x00011db9) main_pane_empty_t2

0x7112,	// (0x00011dce) main_pane_empty_t3_ParamLimits

0x7112,	// (0x00011dce) main_pane_empty_t3

0x7124,	// (0x00011de0) main_pane_empty_t4_ParamLimits

0x7124,	// (0x00011de0) main_pane_empty_t4

0x7136,	// (0x00011df2) main_pane_empty_t5_ParamLimits

0x7136,	// (0x00011df2) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001a230) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001a230) main_pane_empty_t

0x7ed9,	// (0x00012b95) bg_popup_window_pane_ParamLimits

0x7ed9,	// (0x00012b95) bg_popup_window_pane

0xa2c4,	// (0x00014f80) find_popup_pane_cp2_ParamLimits

0xa2c4,	// (0x00014f80) find_popup_pane_cp2

0xa2d0,	// (0x00014f8c) heading_pane_ParamLimits

0xa2d0,	// (0x00014f8c) heading_pane

0x6dd5,	// (0x00011a91) bg_popup_sub_pane

0xa23e,	// (0x00014efa) bg_popup_window_pane_g1_ParamLimits

0xa23e,	// (0x00014efa) bg_popup_window_pane_g1

0xa24a,	// (0x00014f06) bg_popup_window_pane_g2_ParamLimits

0xa24a,	// (0x00014f06) bg_popup_window_pane_g2

0xa256,	// (0x00014f12) bg_popup_window_pane_g3_ParamLimits

0xa256,	// (0x00014f12) bg_popup_window_pane_g3

0xa262,	// (0x00014f1e) bg_popup_window_pane_g4_ParamLimits

0xa262,	// (0x00014f1e) bg_popup_window_pane_g4

0xa26e,	// (0x00014f2a) bg_popup_window_pane_g5_ParamLimits

0xa26e,	// (0x00014f2a) bg_popup_window_pane_g5

0xa27a,	// (0x00014f36) bg_popup_window_pane_g6_ParamLimits

0xa27a,	// (0x00014f36) bg_popup_window_pane_g6

0xa286,	// (0x00014f42) bg_popup_window_pane_g7_ParamLimits

0xa286,	// (0x00014f42) bg_popup_window_pane_g7

0xa292,	// (0x00014f4e) bg_popup_window_pane_g8_ParamLimits

0xa292,	// (0x00014f4e) bg_popup_window_pane_g8

0xa29e,	// (0x00014f5a) bg_popup_window_pane_g9_ParamLimits

0xa29e,	// (0x00014f5a) bg_popup_window_pane_g9

0xa2aa,	// (0x00014f66) bg_popup_window_pane_g10_ParamLimits

0xa2aa,	// (0x00014f66) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0001a58c) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0001a58c) bg_popup_window_pane_g

0xa1d3,	// (0x00014e8f) bg_popup_heading_pane_ParamLimits

0xa1d3,	// (0x00014e8f) bg_popup_heading_pane

0x5cda,	// (0x00010996) tabs_4_passive_pane_cp_srt_ParamLimits

0x5cda,	// (0x00010996) tabs_4_passive_pane_cp_srt

0x5cec,	// (0x000109a8) tabs_4_passive_pane_srt_ParamLimits

0xa1e7,	// (0x00014ea3) heading_pane_g2

0x5cec,	// (0x000109a8) tabs_4_passive_pane_srt

0x8ead,	// (0x00013b69) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8ead,	// (0x00013b69) bg_passive_tab_pane_cp3_srt

0xa1ef,	// (0x00014eab) heading_pane_t1_ParamLimits

0xa1ef,	// (0x00014eab) heading_pane_t1

0xa206,	// (0x00014ec2) heading_pane_t2_ParamLimits

0xa206,	// (0x00014ec2) heading_pane_t2

0x0001,

0xf8cb,	// (0x0001a587) heading_pane_t_ParamLimits

0xf8cb,	// (0x0001a587) heading_pane_t

0x9cf4,	// (0x000149b0) bg_popup_heading_pane_g1

0x9daf,	// (0x00014a6b) bg_popup_heading_pane_g2

0x9db9,	// (0x00014a75) bg_popup_heading_pane_g3

0x9dc3,	// (0x00014a7f) bg_popup_heading_pane_g4

0x9dcd,	// (0x00014a89) bg_popup_heading_pane_g5

0x9dd7,	// (0x00014a93) bg_popup_heading_pane_g6

0x9ddf,	// (0x00014a9b) bg_popup_heading_pane_g7

0x9de7,	// (0x00014aa3) bg_popup_heading_pane_g8

0x9df1,	// (0x00014aad) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0001a543) bg_popup_heading_pane_g

0x93ed,	// (0x000140a9) bg_popup_sub_pane_g1

0x93fd,	// (0x000140b9) bg_popup_sub_pane_g2

0x93f5,	// (0x000140b1) bg_popup_sub_pane_g3

0x940d,	// (0x000140c9) bg_popup_sub_pane_g4

0x9405,	// (0x000140c1) bg_popup_sub_pane_g5

0x9415,	// (0x000140d1) bg_popup_sub_pane_g6

0x941d,	// (0x000140d9) bg_popup_sub_pane_g7

0x942d,	// (0x000140e9) bg_popup_sub_pane_g8

0x9425,	// (0x000140e1) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0001a51d) bg_popup_sub_pane_g

0x714a,	// (0x00011e06) bg_popup_window_pane_cp5_ParamLimits

0x714a,	// (0x00011e06) bg_popup_window_pane_cp5

0x7166,	// (0x00011e22) popup_note_window_g1_ParamLimits

0x7166,	// (0x00011e22) popup_note_window_g1

0x7172,	// (0x00011e2e) popup_note_window_t1_ParamLimits

0x7172,	// (0x00011e2e) popup_note_window_t1

0x7188,	// (0x00011e44) popup_note_window_t2_ParamLimits

0x7188,	// (0x00011e44) popup_note_window_t2

0x719e,	// (0x00011e5a) popup_note_window_t3_ParamLimits

0x719e,	// (0x00011e5a) popup_note_window_t3

0x71b4,	// (0x00011e70) popup_note_window_t4_ParamLimits

0x71b4,	// (0x00011e70) popup_note_window_t4

0x71dc,	// (0x00011e98) popup_note_window_t5_ParamLimits

0x71dc,	// (0x00011e98) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001a23b) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001a23b) popup_note_window_t

0x7200,	// (0x00011ebc) bg_popup_window_pane_cp6_ParamLimits

0x7200,	// (0x00011ebc) bg_popup_window_pane_cp6

0x9c70,	// (0x0001492c) popup_note_image_window_g1_ParamLimits

0x9c70,	// (0x0001492c) popup_note_image_window_g1

0x9c7c,	// (0x00014938) popup_note_image_window_g2_ParamLimits

0x9c7c,	// (0x00014938) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0001a511) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0001a511) popup_note_image_window_g

0x9c95,	// (0x00014951) popup_note_image_window_t1_ParamLimits

0x9c95,	// (0x00014951) popup_note_image_window_t1

0x9cae,	// (0x0001496a) popup_note_image_window_t2_ParamLimits

0x9cae,	// (0x0001496a) popup_note_image_window_t2

0x9cc7,	// (0x00014983) popup_note_image_window_t3_ParamLimits

0x9cc7,	// (0x00014983) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0001a516) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0001a516) popup_note_image_window_t

0x9b31,	// (0x000147ed) bg_popup_window_pane_cp7_ParamLimits

0x9b31,	// (0x000147ed) bg_popup_window_pane_cp7

0x9b61,	// (0x0001481d) popup_note_wait_window_g1_ParamLimits

0x9b61,	// (0x0001481d) popup_note_wait_window_g1

0x9b6d,	// (0x00014829) popup_note_wait_window_g2_ParamLimits

0x9b6d,	// (0x00014829) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0001a4ff) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0001a4ff) popup_note_wait_window_g

0x9b85,	// (0x00014841) popup_note_wait_window_t1_ParamLimits

0x9b85,	// (0x00014841) popup_note_wait_window_t1

0x9bac,	// (0x00014868) popup_note_wait_window_t2_ParamLimits

0x9bac,	// (0x00014868) popup_note_wait_window_t2

0x9bc9,	// (0x00014885) popup_note_wait_window_t3_ParamLimits

0x9bc9,	// (0x00014885) popup_note_wait_window_t3

0x9bdc,	// (0x00014898) popup_note_wait_window_t4_ParamLimits

0x9bdc,	// (0x00014898) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0001a506) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0001a506) popup_note_wait_window_t

0x9c01,	// (0x000148bd) wait_bar_pane_ParamLimits

0x9c01,	// (0x000148bd) wait_bar_pane

0x6dd5,	// (0x00011a91) wait_anim_pane

0x6dd5,	// (0x00011a91) wait_border_pane

0x6dcb,	// (0x00011a87) wait_anim_pane_g1

0x6dcb,	// (0x00011a87) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0001a3ba) wait_anim_pane_g

0x9ad5,	// (0x00014791) wait_border_pane_g1

0x9ae0,	// (0x0001479c) wait_border_pane_g2

0x9ae9,	// (0x000147a5) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0001a4f8) wait_border_pane_g

0x9940,	// (0x000145fc) bg_popup_window_pane_cp16_ParamLimits

0x9940,	// (0x000145fc) bg_popup_window_pane_cp16

0x9a40,	// (0x000146fc) indicator_popup_pane_cp4_ParamLimits

0x9a40,	// (0x000146fc) indicator_popup_pane_cp4

0x9a54,	// (0x00014710) popup_query_data_window_t1_ParamLimits

0x9a54,	// (0x00014710) popup_query_data_window_t1

0x9a66,	// (0x00014722) popup_query_data_window_t2_ParamLimits

0x9a66,	// (0x00014722) popup_query_data_window_t2

0x9a7f,	// (0x0001473b) popup_query_data_window_t3_ParamLimits

0x9a7f,	// (0x0001473b) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0001a4f1) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0001a4f1) popup_query_data_window_t

0x9a99,	// (0x00014755) query_popup_data_pane_ParamLimits

0x9a99,	// (0x00014755) query_popup_data_pane

0x9aad,	// (0x00014769) query_popup_data_pane_cp1_ParamLimits

0x9aad,	// (0x00014769) query_popup_data_pane_cp1

0x9940,	// (0x000145fc) bg_popup_window_pane_cp10_ParamLimits

0x9940,	// (0x000145fc) bg_popup_window_pane_cp10

0x9972,	// (0x0001462e) indicator_popup_pane_ParamLimits

0x9972,	// (0x0001462e) indicator_popup_pane

0x9994,	// (0x00014650) popup_query_code_window_t1_ParamLimits

0x9994,	// (0x00014650) popup_query_code_window_t1

0x99ae,	// (0x0001466a) popup_query_code_window_t2_ParamLimits

0x99ae,	// (0x0001466a) popup_query_code_window_t2

0x99f7,	// (0x000146b3) popup_query_code_window_t3_ParamLimits

0x99f7,	// (0x000146b3) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0001a4ea) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0001a4ea) popup_query_code_window_t

0x9a26,	// (0x000146e2) query_popup_pane_ParamLimits

0x9a26,	// (0x000146e2) query_popup_pane

0x7200,	// (0x00011ebc) bg_popup_window_pane_cp15_ParamLimits

0x7200,	// (0x00011ebc) bg_popup_window_pane_cp15

0x721e,	// (0x00011eda) indicator_popup_pane_cp1_ParamLimits

0x721e,	// (0x00011eda) indicator_popup_pane_cp1

0x7231,	// (0x00011eed) indicator_popup_pane_cp2_ParamLimits

0x7231,	// (0x00011eed) indicator_popup_pane_cp2

0x7244,	// (0x00011f00) popup_query_data_code_window_g1_ParamLimits

0x7244,	// (0x00011f00) popup_query_data_code_window_g1

0x7257,	// (0x00011f13) popup_query_data_code_window_t1_ParamLimits

0x7257,	// (0x00011f13) popup_query_data_code_window_t1

0x7269,	// (0x00011f25) popup_query_data_code_window_t2_ParamLimits

0x7269,	// (0x00011f25) popup_query_data_code_window_t2

0x727b,	// (0x00011f37) popup_query_data_code_window_t3_ParamLimits

0x727b,	// (0x00011f37) popup_query_data_code_window_t3

0x7291,	// (0x00011f4d) popup_query_data_code_window_t4_ParamLimits

0x7291,	// (0x00011f4d) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001a246) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001a246) popup_query_data_code_window_t

0x599b,	// (0x00010657) list_single_midp_graphic_pane_g3

0x72a9,	// (0x00011f65) query_popup_data_pane_cp2_ParamLimits

0x72bc,	// (0x00011f78) query_popup_pane_cp2_ParamLimits

0x72bc,	// (0x00011f78) query_popup_pane_cp2

0x6dd5,	// (0x00011a91) bg_popup_window_pane_cp11

0x9938,	// (0x000145f4) heading_pane_cp5

0x73a7,	// (0x00012063) listscroll_popup_info_pane

0x6dd5,	// (0x00011a91) input_focus_pane_cp3

0x72cf,	// (0x00011f8b) query_popup_pane_t1

0x72dd,	// (0x00011f99) list_popup_info_pane_ParamLimits

0x72dd,	// (0x00011f99) list_popup_info_pane

0x72ec,	// (0x00011fa8) listscroll_popup_info_pane_g1

0x72f4,	// (0x00011fb0) scroll_pane_cp7

0x72fe,	// (0x00011fba) popup_info_list_pane_t1_ParamLimits

0x72fe,	// (0x00011fba) popup_info_list_pane_t1

0x7318,	// (0x00011fd4) popup_info_list_pane_t2_ParamLimits

0x7318,	// (0x00011fd4) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001a24f) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001a24f) popup_info_list_pane_t

0x6dd5,	// (0x00011a91) bg_popup_window_pane_cp12

0xadaf,	// (0x00015a6b) find_popup_pane

0x6eb5,	// (0x00011b71) bg_popup_window_pane_cp3

0x7332,	// (0x00011fee) heading_pane_cp3

0x733e,	// (0x00011ffa) listscroll_popup_graphic_pane

0x6dd5,	// (0x00011a91) bg_popup_window_pane_cp4

0x739d,	// (0x00012059) heading_pane_cp4

0x73a7,	// (0x00012063) listscroll_popup_colour_pane

0x73af,	// (0x0001206b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x73af,	// (0x0001206b) cell_large_graphic_colour_none_popup_pane

0x73c3,	// (0x0001207f) grid_large_graphic_colour_popup_pane_ParamLimits

0x73c3,	// (0x0001207f) grid_large_graphic_colour_popup_pane

0x73ef,	// (0x000120ab) listscroll_popup_colour_pane_g1_ParamLimits

0x73ef,	// (0x000120ab) listscroll_popup_colour_pane_g1

0x7406,	// (0x000120c2) listscroll_popup_colour_pane_g2_ParamLimits

0x7406,	// (0x000120c2) listscroll_popup_colour_pane_g2

0x741d,	// (0x000120d9) listscroll_popup_colour_pane_g3_ParamLimits

0x741d,	// (0x000120d9) listscroll_popup_colour_pane_g3

0x742d,	// (0x000120e9) listscroll_popup_colour_pane_g4_ParamLimits

0x742d,	// (0x000120e9) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001a254) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001a254) listscroll_popup_colour_pane_g

0x7441,	// (0x000120fd) scroll_pane_cp6_ParamLimits

0x7441,	// (0x000120fd) scroll_pane_cp6

0x7453,	// (0x0001210f) cell_large_graphic_colour_popup_pane_ParamLimits

0x7453,	// (0x0001210f) cell_large_graphic_colour_popup_pane

0x7472,	// (0x0001212e) cell_large_graphic_colour_none_popup_pane_t1

0x6dd5,	// (0x00011a91) grid_highlight_pane_cp5

0x7481,	// (0x0001213d) cell_large_graphic_colour_popup_pane_g1

0x7489,	// (0x00012145) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001a25d) cell_large_graphic_colour_popup_pane_g

0x7491,	// (0x0001214d) cell_large_graphic_colour_popup_pane_g2_copy1

0x749a,	// (0x00012156) grid_highlight_pane_cp4

0x74a2,	// (0x0001215e) bg_popup_window_pane_cp8_ParamLimits

0x74a2,	// (0x0001215e) bg_popup_window_pane_cp8

0x74bd,	// (0x00012179) popup_snote_single_text_window_g1_ParamLimits

0x74bd,	// (0x00012179) popup_snote_single_text_window_g1

0x74cf,	// (0x0001218b) popup_snote_single_text_window_t1_ParamLimits

0x74cf,	// (0x0001218b) popup_snote_single_text_window_t1

0x74e2,	// (0x0001219e) popup_snote_single_text_window_t2_ParamLimits

0x74e2,	// (0x0001219e) popup_snote_single_text_window_t2

0x74f5,	// (0x000121b1) popup_snote_single_text_window_t3_ParamLimits

0x74f5,	// (0x000121b1) popup_snote_single_text_window_t3

0x752e,	// (0x000121ea) popup_snote_single_text_window_t4_ParamLimits

0x752e,	// (0x000121ea) popup_snote_single_text_window_t4

0x7562,	// (0x0001221e) popup_snote_single_text_window_t5_ParamLimits

0x7562,	// (0x0001221e) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001a262) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001a262) popup_snote_single_text_window_t

0x7591,	// (0x0001224d) bg_popup_window_pane_cp9_ParamLimits

0x7591,	// (0x0001224d) bg_popup_window_pane_cp9

0x74bd,	// (0x00012179) popup_snote_single_graphic_window_g1_ParamLimits

0x74bd,	// (0x00012179) popup_snote_single_graphic_window_g1

0x759f,	// (0x0001225b) popup_snote_single_graphic_window_g2_ParamLimits

0x759f,	// (0x0001225b) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001a26d) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001a26d) popup_snote_single_graphic_window_g

0x75ab,	// (0x00012267) popup_snote_single_graphic_window_t1_ParamLimits

0x75ab,	// (0x00012267) popup_snote_single_graphic_window_t1

0x75be,	// (0x0001227a) popup_snote_single_graphic_window_t2_ParamLimits

0x75be,	// (0x0001227a) popup_snote_single_graphic_window_t2

0x75d1,	// (0x0001228d) popup_snote_single_graphic_window_t3_ParamLimits

0x75d1,	// (0x0001228d) popup_snote_single_graphic_window_t3

0x760a,	// (0x000122c6) popup_snote_single_graphic_window_t4_ParamLimits

0x760a,	// (0x000122c6) popup_snote_single_graphic_window_t4

0x763e,	// (0x000122fa) popup_snote_single_graphic_window_t5_ParamLimits

0x763e,	// (0x000122fa) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001a272) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001a272) popup_snote_single_graphic_window_t

0xacf1,	// (0x000159ad) grid_graphic_popup_pane_ParamLimits

0xacf1,	// (0x000159ad) grid_graphic_popup_pane

0xad1b,	// (0x000159d7) listscroll_popup_graphic_pane_g1_ParamLimits

0xad1b,	// (0x000159d7) listscroll_popup_graphic_pane_g1

0xad2f,	// (0x000159eb) listscroll_popup_graphic_pane_g2_ParamLimits

0xad2f,	// (0x000159eb) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0001a667) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0001a667) listscroll_popup_graphic_pane_g

0xad43,	// (0x000159ff) scroll_pane_cp5

0xac90,	// (0x0001594c) cell_graphic_popup_pane_ParamLimits

0xac90,	// (0x0001594c) cell_graphic_popup_pane

0xac71,	// (0x0001592d) cell_graphic_popup_pane_g1

0xac79,	// (0x00015935) cell_graphic_popup_pane_g2

0x7491,	// (0x0001214d) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0001a660) cell_graphic_popup_pane_g

0xac82,	// (0x0001593e) cell_graphic_popup_pane_t2

0x749a,	// (0x00012156) grid_highlight_pane_cp3

0x767f,	// (0x0001233b) list_gen_pane_ParamLimits

0x767f,	// (0x0001233b) list_gen_pane

0x76b1,	// (0x0001236d) scroll_pane

0xabc9,	// (0x00015885) bg_list_pane_g1_ParamLimits

0xabc9,	// (0x00015885) bg_list_pane_g1

0xabe6,	// (0x000158a2) bg_list_pane_g2_ParamLimits

0xabe6,	// (0x000158a2) bg_list_pane_g2

0xabfb,	// (0x000158b7) bg_list_pane_g3_ParamLimits

0xabfb,	// (0x000158b7) bg_list_pane_g3

0xac0f,	// (0x000158cb) bg_list_pane_g4_ParamLimits

0xac0f,	// (0x000158cb) bg_list_pane_g4

0xac23,	// (0x000158df) bg_list_pane_g5_ParamLimits

0xac23,	// (0x000158df) bg_list_pane_g5

0x0004,

0xf999,	// (0x0001a655) bg_list_pane_g_ParamLimits

0xf999,	// (0x0001a655) bg_list_pane_g

0xaacc,	// (0x00015788) list_double2_graphic_large_graphic_pane_ParamLimits

0xaacc,	// (0x00015788) list_double2_graphic_large_graphic_pane

0xaacc,	// (0x00015788) list_double2_graphic_pane_ParamLimits

0xaacc,	// (0x00015788) list_double2_graphic_pane

0xaacc,	// (0x00015788) list_double2_large_graphic_pane_ParamLimits

0xaacc,	// (0x00015788) list_double2_large_graphic_pane

0xaacc,	// (0x00015788) list_double2_pane_ParamLimits

0xaacc,	// (0x00015788) list_double2_pane

0xaacc,	// (0x00015788) list_double_graphic_heading_pane_ParamLimits

0xaacc,	// (0x00015788) list_double_graphic_heading_pane

0xaacc,	// (0x00015788) list_double_graphic_pane_ParamLimits

0xaacc,	// (0x00015788) list_double_graphic_pane

0xaacc,	// (0x00015788) list_double_heading_pane_ParamLimits

0xaacc,	// (0x00015788) list_double_heading_pane

0xaacc,	// (0x00015788) list_double_large_graphic_pane_ParamLimits

0xaacc,	// (0x00015788) list_double_large_graphic_pane

0xaacc,	// (0x00015788) list_double_number_pane_ParamLimits

0xaacc,	// (0x00015788) list_double_number_pane

0xaacc,	// (0x00015788) list_double_pane_ParamLimits

0xaacc,	// (0x00015788) list_double_pane

0xaacc,	// (0x00015788) list_double_time_pane_ParamLimits

0xaacc,	// (0x00015788) list_double_time_pane

0xaacc,	// (0x00015788) list_setting_number_pane_ParamLimits

0xaacc,	// (0x00015788) list_setting_number_pane

0xaacc,	// (0x00015788) list_setting_pane_ParamLimits

0xaacc,	// (0x00015788) list_setting_pane

0xab35,	// (0x000157f1) list_single_2graphic_pane_ParamLimits

0xab35,	// (0x000157f1) list_single_2graphic_pane

0xab35,	// (0x000157f1) list_single_graphic_heading_pane_ParamLimits

0xab35,	// (0x000157f1) list_single_graphic_heading_pane

0xab35,	// (0x000157f1) list_single_graphic_pane_ParamLimits

0xab35,	// (0x000157f1) list_single_graphic_pane

0xab35,	// (0x000157f1) list_single_heading_pane_ParamLimits

0xab35,	// (0x000157f1) list_single_heading_pane

0xabaa,	// (0x00015866) list_single_large_graphic_pane_ParamLimits

0xabaa,	// (0x00015866) list_single_large_graphic_pane

0xab35,	// (0x000157f1) list_single_number_heading_pane_ParamLimits

0xab35,	// (0x000157f1) list_single_number_heading_pane

0xab35,	// (0x000157f1) list_single_number_pane_ParamLimits

0xab35,	// (0x000157f1) list_single_number_pane

0xab35,	// (0x000157f1) list_single_pane_ParamLimits

0xab35,	// (0x000157f1) list_single_pane

0x6dd5,	// (0x00011a91) list_highlight_pane_cp1

0x76f1,	// (0x000123ad) list_single_pane_g1_ParamLimits

0x76f1,	// (0x000123ad) list_single_pane_g1

0x76fd,	// (0x000123b9) list_single_pane_g2_ParamLimits

0x76fd,	// (0x000123b9) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001a284) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001a284) list_single_pane_g

0xaa85,	// (0x00015741) list_single_pane_t1_ParamLimits

0xaa85,	// (0x00015741) list_single_pane_t1

0x76f1,	// (0x000123ad) list_single_number_pane_g1_ParamLimits

0x76f1,	// (0x000123ad) list_single_number_pane_g1

0x76fd,	// (0x000123b9) list_single_number_pane_g2_ParamLimits

0x76fd,	// (0x000123b9) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001a284) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001a284) list_single_number_pane_g

0xa811,	// (0x000154cd) list_single_number_pane_t1_ParamLimits

0xa811,	// (0x000154cd) list_single_number_pane_t1

0xa827,	// (0x000154e3) list_single_number_pane_t2_ParamLimits

0xa827,	// (0x000154e3) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0001a616) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0001a616) list_single_number_pane_t

0x76e5,	// (0x000123a1) list_single_graphic_pane_g1_ParamLimits

0x76e5,	// (0x000123a1) list_single_graphic_pane_g1

0x76f1,	// (0x000123ad) list_single_graphic_pane_g2_ParamLimits

0x76f1,	// (0x000123ad) list_single_graphic_pane_g2

0x76fd,	// (0x000123b9) list_single_graphic_pane_g3_ParamLimits

0x76fd,	// (0x000123b9) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001a27d) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001a27d) list_single_graphic_pane_g

0x7709,	// (0x000123c5) list_single_graphic_pane_t1_ParamLimits

0x7709,	// (0x000123c5) list_single_graphic_pane_t1

0x76f1,	// (0x000123ad) list_single_heading_pane_g1_ParamLimits

0x76f1,	// (0x000123ad) list_single_heading_pane_g1

0x76fd,	// (0x000123b9) list_single_heading_pane_g2_ParamLimits

0x76fd,	// (0x000123b9) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001a284) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001a284) list_single_heading_pane_g

0x771f,	// (0x000123db) list_single_heading_pane_t1_ParamLimits

0x771f,	// (0x000123db) list_single_heading_pane_t1

0x7735,	// (0x000123f1) list_single_heading_pane_t2_ParamLimits

0x7735,	// (0x000123f1) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001a289) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001a289) list_single_heading_pane_t

0x76f1,	// (0x000123ad) list_single_number_heading_pane_g1_ParamLimits

0x76f1,	// (0x000123ad) list_single_number_heading_pane_g1

0x76fd,	// (0x000123b9) list_single_number_heading_pane_g2_ParamLimits

0x76fd,	// (0x000123b9) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001a284) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001a284) list_single_number_heading_pane_g

0x771f,	// (0x000123db) list_single_number_heading_pane_t1_ParamLimits

0x771f,	// (0x000123db) list_single_number_heading_pane_t1

0x7747,	// (0x00012403) list_single_number_heading_pane_t2_ParamLimits

0x7747,	// (0x00012403) list_single_number_heading_pane_t2

0x7759,	// (0x00012415) list_single_number_heading_pane_t3_ParamLimits

0x7759,	// (0x00012415) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001a28e) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001a28e) list_single_number_heading_pane_t

0x776b,	// (0x00012427) list_single_graphic_heading_pane_g1_ParamLimits

0x776b,	// (0x00012427) list_single_graphic_heading_pane_g1

0x7777,	// (0x00012433) list_single_graphic_heading_pane_g4_ParamLimits

0x7777,	// (0x00012433) list_single_graphic_heading_pane_g4

0x76fd,	// (0x000123b9) list_single_graphic_heading_pane_g5_ParamLimits

0x76fd,	// (0x000123b9) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001a295) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001a295) list_single_graphic_heading_pane_g

0x771f,	// (0x000123db) list_single_graphic_heading_pane_t1_ParamLimits

0x771f,	// (0x000123db) list_single_graphic_heading_pane_t1

0x7788,	// (0x00012444) list_single_graphic_heading_pane_t2_ParamLimits

0x7788,	// (0x00012444) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001a29c) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001a29c) list_single_graphic_heading_pane_t

0x779a,	// (0x00012456) list_single_large_graphic_pane_g1_ParamLimits

0x779a,	// (0x00012456) list_single_large_graphic_pane_g1

0x77a6,	// (0x00012462) list_single_large_graphic_pane_g2_ParamLimits

0x77a6,	// (0x00012462) list_single_large_graphic_pane_g2

0x77b2,	// (0x0001246e) list_single_large_graphic_pane_g3_ParamLimits

0x77b2,	// (0x0001246e) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001a2a1) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001a2a1) list_single_large_graphic_pane_g

0x9ae0,	// (0x0001479c) wait_border_pane_g2_copy1

0x77be,	// (0x0001247a) list_single_large_graphic_pane_g4_cp2

0x77c6,	// (0x00012482) list_single_large_graphic_pane_t1_ParamLimits

0x77c6,	// (0x00012482) list_single_large_graphic_pane_t1

0x77dc,	// (0x00012498) list_double_pane_g1_ParamLimits

0x77dc,	// (0x00012498) list_double_pane_g1

0x77e8,	// (0x000124a4) list_double_pane_g2_ParamLimits

0x77e8,	// (0x000124a4) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001a2a8) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001a2a8) list_double_pane_g

0x77f4,	// (0x000124b0) list_double_pane_t1_ParamLimits

0x77f4,	// (0x000124b0) list_double_pane_t1

0x780a,	// (0x000124c6) list_double_pane_t2_ParamLimits

0x780a,	// (0x000124c6) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001a2ad) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001a2ad) list_double_pane_t

0x781c,	// (0x000124d8) list_double2_pane_g1_ParamLimits

0x781c,	// (0x000124d8) list_double2_pane_g1

0x782d,	// (0x000124e9) list_double2_pane_g2_ParamLimits

0x782d,	// (0x000124e9) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001a2b2) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001a2b2) list_double2_pane_g

0x7839,	// (0x000124f5) list_double2_pane_t1_ParamLimits

0x7839,	// (0x000124f5) list_double2_pane_t1

0x784f,	// (0x0001250b) list_double2_pane_t2_ParamLimits

0x784f,	// (0x0001250b) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001a2b7) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001a2b7) list_double2_pane_t

0x77dc,	// (0x00012498) list_double_number_pane_g1_ParamLimits

0x77dc,	// (0x00012498) list_double_number_pane_g1

0x77e8,	// (0x000124a4) list_double_number_pane_g2_ParamLimits

0x77e8,	// (0x000124a4) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001a2a8) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001a2a8) list_double_number_pane_g

0x7861,	// (0x0001251d) list_double_number_pane_t1_ParamLimits

0x7861,	// (0x0001251d) list_double_number_pane_t1

0x7873,	// (0x0001252f) list_double_number_pane_t2_ParamLimits

0x7873,	// (0x0001252f) list_double_number_pane_t2

0x7889,	// (0x00012545) list_double_number_pane_t3_ParamLimits

0x7889,	// (0x00012545) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0001a2bc) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0001a2bc) list_double_number_pane_t

0x789b,	// (0x00012557) list_double_graphic_pane_g1_ParamLimits

0x789b,	// (0x00012557) list_double_graphic_pane_g1

0x78a7,	// (0x00012563) list_double_graphic_pane_g2_ParamLimits

0x78a7,	// (0x00012563) list_double_graphic_pane_g2

0x78b6,	// (0x00012572) list_double_graphic_pane_g3_ParamLimits

0x78b6,	// (0x00012572) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001a2c3) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001a2c3) list_double_graphic_pane_g

0x78ce,	// (0x0001258a) list_double_graphic_pane_t1_ParamLimits

0x78ce,	// (0x0001258a) list_double_graphic_pane_t1

0x78e4,	// (0x000125a0) list_double_graphic_pane_t2_ParamLimits

0x78e4,	// (0x000125a0) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001a2cc) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001a2cc) list_double_graphic_pane_t

0x78f6,	// (0x000125b2) list_double2_graphic_pane_g1_ParamLimits

0x78f6,	// (0x000125b2) list_double2_graphic_pane_g1

0x7902,	// (0x000125be) list_double2_graphic_pane_g2_ParamLimits

0x7902,	// (0x000125be) list_double2_graphic_pane_g2

0x782d,	// (0x000124e9) list_double2_graphic_pane_g3_ParamLimits

0x782d,	// (0x000124e9) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001a2d1) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001a2d1) list_double2_graphic_pane_g

0x790e,	// (0x000125ca) list_double2_graphic_pane_t1_ParamLimits

0x790e,	// (0x000125ca) list_double2_graphic_pane_t1

0x7924,	// (0x000125e0) list_double2_graphic_pane_t2_ParamLimits

0x7924,	// (0x000125e0) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001a2d8) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001a2d8) list_double2_graphic_pane_t

0x7936,	// (0x000125f2) list_double_large_graphic_pane_g1_ParamLimits

0x7936,	// (0x000125f2) list_double_large_graphic_pane_g1

0x7955,	// (0x00012611) list_double_large_graphic_pane_g2_ParamLimits

0x7955,	// (0x00012611) list_double_large_graphic_pane_g2

0x77e8,	// (0x000124a4) list_double_large_graphic_pane_g3_ParamLimits

0x77e8,	// (0x000124a4) list_double_large_graphic_pane_g3

0x7966,	// (0x00012622) list_double_large_graphic_pane_g4_ParamLimits

0x7966,	// (0x00012622) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001a2dd) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001a2dd) list_double_large_graphic_pane_g

0x798c,	// (0x00012648) list_double_large_graphic_pane_t1_ParamLimits

0x798c,	// (0x00012648) list_double_large_graphic_pane_t1

0x79a5,	// (0x00012661) list_double_large_graphic_pane_t2_ParamLimits

0x79a5,	// (0x00012661) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001a2e8) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001a2e8) list_double_large_graphic_pane_t

0x79b7,	// (0x00012673) list_double2_large_graphic_pane_g1_ParamLimits

0x79b7,	// (0x00012673) list_double2_large_graphic_pane_g1

0x781c,	// (0x000124d8) list_double2_large_graphic_pane_g2_ParamLimits

0x781c,	// (0x000124d8) list_double2_large_graphic_pane_g2

0x782d,	// (0x000124e9) list_double2_large_graphic_pane_g3_ParamLimits

0x782d,	// (0x000124e9) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001a2ed) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001a2ed) list_double2_large_graphic_pane_g

0x79c3,	// (0x0001267f) list_double2_large_graphic_pane_t1_ParamLimits

0x79c3,	// (0x0001267f) list_double2_large_graphic_pane_t1

0x79d9,	// (0x00012695) list_double2_large_graphic_pane_t2_ParamLimits

0x79d9,	// (0x00012695) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0001a2f4) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0001a2f4) list_double2_large_graphic_pane_t

0x79eb,	// (0x000126a7) list_double_heading_pane_g1_ParamLimits

0x79eb,	// (0x000126a7) list_double_heading_pane_g1

0x79fc,	// (0x000126b8) list_double_heading_pane_g2_ParamLimits

0x79fc,	// (0x000126b8) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0001a2f9) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0001a2f9) list_double_heading_pane_g

0x7a08,	// (0x000126c4) list_double_heading_pane_t1_ParamLimits

0x7a08,	// (0x000126c4) list_double_heading_pane_t1

0x7a1e,	// (0x000126da) list_double_heading_pane_t2_ParamLimits

0x7a1e,	// (0x000126da) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0001a2fe) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0001a2fe) list_double_heading_pane_t

0x7a30,	// (0x000126ec) list_double_graphic_heading_pane_g1_ParamLimits

0x7a30,	// (0x000126ec) list_double_graphic_heading_pane_g1

0x79eb,	// (0x000126a7) list_double_graphic_heading_pane_g2_ParamLimits

0x79eb,	// (0x000126a7) list_double_graphic_heading_pane_g2

0x79fc,	// (0x000126b8) list_double_graphic_heading_pane_g3_ParamLimits

0x79fc,	// (0x000126b8) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0001a303) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0001a303) list_double_graphic_heading_pane_g

0x7a3c,	// (0x000126f8) list_double_graphic_heading_pane_t1_ParamLimits

0x7a3c,	// (0x000126f8) list_double_graphic_heading_pane_t1

0x7a52,	// (0x0001270e) list_double_graphic_heading_pane_t2_ParamLimits

0x7a52,	// (0x0001270e) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0001a30a) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0001a30a) list_double_graphic_heading_pane_t

0x7955,	// (0x00012611) list_double_time_pane_g1_ParamLimits

0x7955,	// (0x00012611) list_double_time_pane_g1

0x77e8,	// (0x000124a4) list_double_time_pane_g2_ParamLimits

0x77e8,	// (0x000124a4) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0001a30f) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0001a30f) list_double_time_pane_g

0x7a64,	// (0x00012720) list_double_time_pane_t1_ParamLimits

0x7a64,	// (0x00012720) list_double_time_pane_t1

0x7a7a,	// (0x00012736) list_double_time_pane_t2_ParamLimits

0x7a7a,	// (0x00012736) list_double_time_pane_t2

0x7a8c,	// (0x00012748) list_double_time_pane_t3_ParamLimits

0x7a8c,	// (0x00012748) list_double_time_pane_t3

0x7a9e,	// (0x0001275a) list_double_time_pane_t4_ParamLimits

0x7a9e,	// (0x0001275a) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0001a314) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0001a314) list_double_time_pane_t

0x7902,	// (0x000125be) list_setting_pane_g1_ParamLimits

0x7902,	// (0x000125be) list_setting_pane_g1

0x782d,	// (0x000124e9) list_setting_pane_g2_ParamLimits

0x782d,	// (0x000124e9) list_setting_pane_g2

0x0001,

0xf661,	// (0x0001a31d) list_setting_pane_g_ParamLimits

0xf661,	// (0x0001a31d) list_setting_pane_g

0x7ab0,	// (0x0001276c) list_setting_pane_t1_ParamLimits

0x7ab0,	// (0x0001276c) list_setting_pane_t1

0x7ac7,	// (0x00012783) list_setting_pane_t2_ParamLimits

0x7ac7,	// (0x00012783) list_setting_pane_t2

0x0002,

0xf666,	// (0x0001a322) list_setting_pane_t_ParamLimits

0xf666,	// (0x0001a322) list_setting_pane_t

0x7b06,	// (0x000127c2) set_value_pane_cp_ParamLimits

0x7b06,	// (0x000127c2) set_value_pane_cp

0x7902,	// (0x000125be) list_setting_number_pane_g1_ParamLimits

0x7902,	// (0x000125be) list_setting_number_pane_g1

0x782d,	// (0x000124e9) list_setting_number_pane_g2_ParamLimits

0x782d,	// (0x000124e9) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x0001a31d) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x0001a31d) list_setting_number_pane_g

0x7b12,	// (0x000127ce) list_setting_number_pane_t1_ParamLimits

0x7b12,	// (0x000127ce) list_setting_number_pane_t1

0x7b26,	// (0x000127e2) list_setting_number_pane_t2_ParamLimits

0x7b26,	// (0x000127e2) list_setting_number_pane_t2

0x7b3d,	// (0x000127f9) list_setting_number_pane_t3_ParamLimits

0x7b3d,	// (0x000127f9) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0001a329) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0001a329) list_setting_number_pane_t

0x7b06,	// (0x000127c2) set_value_pane_ParamLimits

0x7b06,	// (0x000127c2) set_value_pane

0x7b80,	// (0x0001283c) bg_set_opt_pane_ParamLimits

0x7b80,	// (0x0001283c) bg_set_opt_pane

0x7ba1,	// (0x0001285d) set_value_pane_t1

0x7baf,	// (0x0001286b) slider_set_pane_cp3

0x7bb8,	// (0x00012874) volume_small_pane_cp

0x7bc1,	// (0x0001287d) list_form_gen_pane

0x7bca,	// (0x00012886) scroll_pane_cp8

0x7be3,	// (0x0001289f) form_field_data_pane_ParamLimits

0x7be3,	// (0x0001289f) form_field_data_pane

0x7c05,	// (0x000128c1) form_field_data_wide_pane_ParamLimits

0x7c05,	// (0x000128c1) form_field_data_wide_pane

0x7c28,	// (0x000128e4) form_field_popup_pane_ParamLimits

0x7c28,	// (0x000128e4) form_field_popup_pane

0x7c48,	// (0x00012904) form_field_popup_wide_pane_ParamLimits

0x7c48,	// (0x00012904) form_field_popup_wide_pane

0x7c65,	// (0x00012921) form_field_slider_pane_ParamLimits

0x7c65,	// (0x00012921) form_field_slider_pane

0x7c78,	// (0x00012934) form_field_slider_wide_pane_ParamLimits

0x7c78,	// (0x00012934) form_field_slider_wide_pane

0x7c8b,	// (0x00012947) data_form_pane

0x7ca1,	// (0x0001295d) form_field_data_pane_t1

0x7cb9,	// (0x00012975) input_focus_pane

0x7cc7,	// (0x00012983) data_form_wide_pane

0x7cf3,	// (0x000129af) form_field_data_wide_pane_t1

0x74af,	// (0x0001216b) input_focus_pane_cp6

0x7d12,	// (0x000129ce) form_field_popup_pane_t1

0x7cb9,	// (0x00012975) input_focus_pane_cp7

0x7d2a,	// (0x000129e6) list_form_pane

0x7d3e,	// (0x000129fa) form_field_popup_wide_pane_t1

0x7cb9,	// (0x00012975) input_focus_pane_cp8

0x7d50,	// (0x00012a0c) list_form_wide_pane

0x7d64,	// (0x00012a20) form_field_slider_pane_t1_ParamLimits

0x7d64,	// (0x00012a20) form_field_slider_pane_t1

0x7d76,	// (0x00012a32) form_field_slider_pane_t2_ParamLimits

0x7d76,	// (0x00012a32) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0001a339) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0001a339) form_field_slider_pane_t

0x714a,	// (0x00011e06) input_focus_pane_cp9_ParamLimits

0x714a,	// (0x00011e06) input_focus_pane_cp9

0x7d88,	// (0x00012a44) slider_cont_pane_ParamLimits

0x7d88,	// (0x00012a44) slider_cont_pane

0x7d9c,	// (0x00012a58) form_field_slider_wide_pane_t1_ParamLimits

0x7d9c,	// (0x00012a58) form_field_slider_wide_pane_t1

0x7dae,	// (0x00012a6a) form_field_slider_wide_pane_t2_ParamLimits

0x7dae,	// (0x00012a6a) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0001a33e) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0001a33e) form_field_slider_wide_pane_t

0x714a,	// (0x00011e06) input_focus_pane_cp10_ParamLimits

0x714a,	// (0x00011e06) input_focus_pane_cp10

0x7dc0,	// (0x00012a7c) slider_cont_pane_cp1_ParamLimits

0x7dc0,	// (0x00012a7c) slider_cont_pane_cp1

0x7dd4,	// (0x00012a90) slider_form_pane_cp

0x7ddc,	// (0x00012a98) input_focus_pane_g1

0x7de4,	// (0x00012aa0) input_focus_pane_g2

0x7dec,	// (0x00012aa8) input_focus_pane_g3

0x7df4,	// (0x00012ab0) input_focus_pane_g4

0x7dfc,	// (0x00012ab8) input_focus_pane_g5

0x7e04,	// (0x00012ac0) input_focus_pane_g6

0x7e0c,	// (0x00012ac8) input_focus_pane_g7

0x7e14,	// (0x00012ad0) input_focus_pane_g8

0x7e1c,	// (0x00012ad8) input_focus_pane_g9

0x6dcb,	// (0x00011a87) input_focus_pane_g10

0x0009,

0xf687,	// (0x0001a343) input_focus_pane_g

0x9ae9,	// (0x000147a5) wait_border_pane_g3_copy1

0x7e24,	// (0x00012ae0) data_form_pane_t1

0x6dcb,	// (0x00011a87) wait_anim_pane_g1_copy1

0xaa68,	// (0x00015724) data_form_wide_pane_t1

0x7e3f,	// (0x00012afb) list_form_graphic_pane_cp_ParamLimits

0x7e3f,	// (0x00012afb) list_form_graphic_pane_cp

0xaa3d,	// (0x000156f9) slider_form_pane_g1

0xaa46,	// (0x00015702) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0001a646) slider_form_pane_g

0x7e58,	// (0x00012b14) list_form_graphic_pane_ParamLimits

0x7e58,	// (0x00012b14) list_form_graphic_pane

0x7e74,	// (0x00012b30) list_form_graphic_pane_g1

0x7e7c,	// (0x00012b38) list_form_graphic_pane_t1_ParamLimits

0x7e7c,	// (0x00012b38) list_form_graphic_pane_t1

0x6eb5,	// (0x00011b71) list_highlight_pane_cp5_ParamLimits

0x6eb5,	// (0x00011b71) list_highlight_pane_cp5

0x7e91,	// (0x00012b4d) find_pane_g1

0x7e9a,	// (0x00012b56) input_find_pane

0x7ea3,	// (0x00012b5f) input_find_pane_g1_ParamLimits

0x7ea3,	// (0x00012b5f) input_find_pane_g1

0x7eaf,	// (0x00012b6b) input_find_pane_t1_ParamLimits

0x7eaf,	// (0x00012b6b) input_find_pane_t1

0x7ec4,	// (0x00012b80) input_find_pane_t2_ParamLimits

0x7ec4,	// (0x00012b80) input_find_pane_t2

0x0001,

0xf69c,	// (0x0001a358) input_find_pane_t_ParamLimits

0xf69c,	// (0x0001a358) input_find_pane_t

0x7ed9,	// (0x00012b95) input_focus_pane_cp5_ParamLimits

0x7ed9,	// (0x00012b95) input_focus_pane_cp5

0x7ef3,	// (0x00012baf) bg_popup_window_pane_cp2_ParamLimits

0x7ef3,	// (0x00012baf) bg_popup_window_pane_cp2

0x7f00,	// (0x00012bbc) listscroll_menu_pane_ParamLimits

0x7f00,	// (0x00012bbc) listscroll_menu_pane

0x7f0c,	// (0x00012bc8) popup_submenu_window_ParamLimits

0x7f0c,	// (0x00012bc8) popup_submenu_window

0x7f38,	// (0x00012bf4) find_popup_pane_g1

0x7f40,	// (0x00012bfc) input_popup_find_pane_cp

0x7ed9,	// (0x00012b95) input_focus_pane_cp4_ParamLimits

0x7ed9,	// (0x00012b95) input_focus_pane_cp4

0x7f56,	// (0x00012c12) input_popup_find_pane_t1_ParamLimits

0x7f56,	// (0x00012c12) input_popup_find_pane_t1

0x6dd5,	// (0x00011a91) bg_popup_sub_pane_cp

0x7f84,	// (0x00012c40) listscroll_popup_sub_pane

0x7f8c,	// (0x00012c48) list_submenu_pane_ParamLimits

0x7f8c,	// (0x00012c48) list_submenu_pane

0x7f9d,	// (0x00012c59) scroll_pane_cp4

0x7fa5,	// (0x00012c61) list_single_popup_submenu_pane_ParamLimits

0x7fa5,	// (0x00012c61) list_single_popup_submenu_pane

0x7fb9,	// (0x00012c75) list_single_popup_submenu_pane_g1

0x7fc1,	// (0x00012c7d) list_single_popup_submenu_pane_t1_ParamLimits

0x7fc1,	// (0x00012c7d) list_single_popup_submenu_pane_t1

0x6eb5,	// (0x00011b71) bg_active_tab_pane_cp1_ParamLimits

0x6eb5,	// (0x00011b71) bg_active_tab_pane_cp1

0x7fd6,	// (0x00012c92) tabs_2_active_pane_g1

0x7fde,	// (0x00012c9a) tabs_2_active_pane_t1

0x6eb5,	// (0x00011b71) bg_passive_tab_pane_cp1_ParamLimits

0x6eb5,	// (0x00011b71) bg_passive_tab_pane_cp1

0x7fd6,	// (0x00012c92) tabs_2_passive_pane_g1

0x7fde,	// (0x00012c9a) tabs_2_passive_pane_t1

0x7ff0,	// (0x00012cac) bg_active_tab_pane_cp4

0x7ffe,	// (0x00012cba) tabs_2_long_active_pane_t1

0x8011,	// (0x00012ccd) bg_passive_tab_pane_cp4

0x59a3,	// (0x0001065f) list_single_midp_graphic_pane_g4_ParamLimits

0x7ff0,	// (0x00012cac) bg_active_tab_pane_cp5

0x801d,	// (0x00012cd9) tabs_3_long_active_pane_t1

0x8011,	// (0x00012ccd) bg_passive_tab_pane_cp5

0x59a3,	// (0x0001065f) list_single_midp_graphic_pane_g4

0x6eb5,	// (0x00011b71) bg_popup_window_pane_cp13_ParamLimits

0x6eb5,	// (0x00011b71) bg_popup_window_pane_cp13

0x8038,	// (0x00012cf4) listscroll_popup_fast_pane_ParamLimits

0x8038,	// (0x00012cf4) listscroll_popup_fast_pane

0x8047,	// (0x00012d03) grid_popup_fast_pane_ParamLimits

0x8047,	// (0x00012d03) grid_popup_fast_pane

0x8059,	// (0x00012d15) scroll_pane_cp9_ParamLimits

0x8059,	// (0x00012d15) scroll_pane_cp9

0xc96e,	// (0x0001762a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc96e,	// (0x0001762a) list_single_graphic_hl_pane_t1_cp2

0x807d,	// (0x00012d39) input_focus_pane_cp20_ParamLimits

0x807d,	// (0x00012d39) input_focus_pane_cp20

0x808b,	// (0x00012d47) query_popup_data_pane_t1_ParamLimits

0x808b,	// (0x00012d47) query_popup_data_pane_t1

0x809e,	// (0x00012d5a) query_popup_data_pane_t2_ParamLimits

0x809e,	// (0x00012d5a) query_popup_data_pane_t2

0x80e4,	// (0x00012da0) query_popup_data_pane_t3_ParamLimits

0x80e4,	// (0x00012da0) query_popup_data_pane_t3

0x8125,	// (0x00012de1) query_popup_data_pane_t4_ParamLimits

0x8125,	// (0x00012de1) query_popup_data_pane_t4

0x8161,	// (0x00012e1d) query_popup_data_pane_t5_ParamLimits

0x8161,	// (0x00012e1d) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0001a35d) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0001a35d) query_popup_data_pane_t

0x7ddc,	// (0x00012a98) bg_set_opt_pane_g1

0x7de4,	// (0x00012aa0) bg_set_opt_pane_g2

0x7dec,	// (0x00012aa8) bg_set_opt_pane_g3

0x7df4,	// (0x00012ab0) bg_set_opt_pane_g4

0x7dfc,	// (0x00012ab8) bg_set_opt_pane_g5

0x7e04,	// (0x00012ac0) bg_set_opt_pane_g6

0x7e0c,	// (0x00012ac8) bg_set_opt_pane_g7

0x7e14,	// (0x00012ad0) bg_set_opt_pane_g8

0x7e1c,	// (0x00012ad8) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0001a368) bg_set_opt_pane_g

0x4fb3,	// (0x0000fc6f) control_top_pane_stacon_ParamLimits

0x4fb3,	// (0x0000fc6f) control_top_pane_stacon

0x5006,	// (0x0000fcc2) signal_pane_stacon_ParamLimits

0x5006,	// (0x0000fcc2) signal_pane_stacon

0x87e4,	// (0x000134a0) stacon_top_pane_g1_ParamLimits

0x87e4,	// (0x000134a0) stacon_top_pane_g1

0x502b,	// (0x0000fce7) title_pane_stacon_ParamLimits

0x502b,	// (0x0000fce7) title_pane_stacon

0x5055,	// (0x0000fd11) uni_indicator_pane_stacon_ParamLimits

0x5055,	// (0x0000fd11) uni_indicator_pane_stacon

0x506a,	// (0x0000fd26) battery_pane_stacon_ParamLimits

0x506a,	// (0x0000fd26) battery_pane_stacon

0x50ae,	// (0x0000fd6a) control_bottom_pane_stacon_ParamLimits

0x50ae,	// (0x0000fd6a) control_bottom_pane_stacon

0x50d1,	// (0x0000fd8d) navi_pane_stacon_ParamLimits

0x50d1,	// (0x0000fd8d) navi_pane_stacon

0x8806,	// (0x000134c2) stacon_bottom_pane_g1_ParamLimits

0x8806,	// (0x000134c2) stacon_bottom_pane_g1

0x4d16,	// (0x0000f9d2) aid_levels_signal_lsc_ParamLimits

0x4d16,	// (0x0000f9d2) aid_levels_signal_lsc

0x4d2c,	// (0x0000f9e8) signal_pane_stacon_g1_ParamLimits

0x4d2c,	// (0x0000f9e8) signal_pane_stacon_g1

0x4d40,	// (0x0000f9fc) signal_pane_stacon_g2_ParamLimits

0x4d40,	// (0x0000f9fc) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0001a37b) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0001a37b) signal_pane_stacon_g

0x4d75,	// (0x0000fa31) title_pane_stacon_t1_ParamLimits

0x4d75,	// (0x0000fa31) title_pane_stacon_t1

0x81a5,	// (0x00012e61) uni_indicator_pane_stacon_g1

0x81af,	// (0x00012e6b) uni_indicator_pane_stacon_g2

0x81b9,	// (0x00012e75) uni_indicator_pane_stacon_g3

0x81c3,	// (0x00012e7f) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0001a387) uni_indicator_pane_stacon_g

0x4d9a,	// (0x0000fa56) control_top_pane_stacon_g1

0x4da2,	// (0x0000fa5e) control_top_pane_stacon_t1_ParamLimits

0x4da2,	// (0x0000fa5e) control_top_pane_stacon_t1

0x4dd9,	// (0x0000fa95) aid_levels_battery_lsc_ParamLimits

0x4dd9,	// (0x0000fa95) aid_levels_battery_lsc

0x4df0,	// (0x0000faac) battery_pane_stacon_g1_ParamLimits

0x4df0,	// (0x0000faac) battery_pane_stacon_g1

0x4e03,	// (0x0000fabf) battery_pane_stacon_g2_ParamLimits

0x4e03,	// (0x0000fabf) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0001a390) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0001a390) battery_pane_stacon_g

0x4e41,	// (0x0000fafd) navi_icon_pane_stacon

0x4e55,	// (0x0000fb11) navi_navi_pane_stacon

0x4e41,	// (0x0000fafd) navi_text_pane_stacon

0x4d9a,	// (0x0000fa56) control_bottom_pane_stacon_g1

0x4e69,	// (0x0000fb25) control_bottom_pane_stacon_t1_ParamLimits

0x4e69,	// (0x0000fb25) control_bottom_pane_stacon_t1

0x81e7,	// (0x00012ea3) grid_app_pane_ParamLimits

0x81e7,	// (0x00012ea3) grid_app_pane

0x820b,	// (0x00012ec7) scroll_pane_cp15_ParamLimits

0x820b,	// (0x00012ec7) scroll_pane_cp15

0x821e,	// (0x00012eda) cell_app_pane_ParamLimits

0x821e,	// (0x00012eda) cell_app_pane

0x8246,	// (0x00012f02) cell_app_pane_g1_ParamLimits

0x8246,	// (0x00012f02) cell_app_pane_g1

0x826a,	// (0x00012f26) cell_app_pane_g2_ParamLimits

0x826a,	// (0x00012f26) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0001a395) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0001a395) cell_app_pane_g

0x8276,	// (0x00012f32) cell_app_pane_t1_ParamLimits

0x8276,	// (0x00012f32) cell_app_pane_t1

0x828d,	// (0x00012f49) grid_highlight_pane_ParamLimits

0x828d,	// (0x00012f49) grid_highlight_pane

0x7ddc,	// (0x00012a98) cell_highlight_pane_g1

0x7de4,	// (0x00012aa0) cell_highlight_pane_g2

0x7dec,	// (0x00012aa8) cell_highlight_pane_g3

0x7df4,	// (0x00012ab0) cell_highlight_pane_g4

0x7dfc,	// (0x00012ab8) cell_highlight_pane_g5

0x7e04,	// (0x00012ac0) cell_highlight_pane_g6

0x7e0c,	// (0x00012ac8) cell_highlight_pane_g7

0x7e14,	// (0x00012ad0) cell_highlight_pane_g8

0x7e1c,	// (0x00012ad8) cell_highlight_pane_g9

0x6dcb,	// (0x00011a87) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0001a343) cell_highlight_pane_g

0x829e,	// (0x00012f5a) bg_scroll_pane

0x4eb3,	// (0x0000fb6f) scroll_handle_pane

0x82e5,	// (0x00012fa1) scroll_bg_pane_g1

0x82fa,	// (0x00012fb6) scroll_bg_pane_g2

0x8312,	// (0x00012fce) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0001a39a) scroll_bg_pane_g

0x8327,	// (0x00012fe3) scroll_handle_focus_pane_ParamLimits

0x8327,	// (0x00012fe3) scroll_handle_focus_pane

0x82e5,	// (0x00012fa1) scroll_handle_pane_g1

0x8334,	// (0x00012ff0) scroll_handle_pane_g2

0x8312,	// (0x00012fce) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0001a3a1) scroll_handle_pane_g

0x7ed9,	// (0x00012b95) bg_popup_sub_pane_cp21_ParamLimits

0x7ed9,	// (0x00012b95) bg_popup_sub_pane_cp21

0x8348,	// (0x00013004) popup_fep_japan_predictive_window_t1_ParamLimits

0x8348,	// (0x00013004) popup_fep_japan_predictive_window_t1

0x8362,	// (0x0001301e) popup_fep_japan_predictive_window_t2_ParamLimits

0x8362,	// (0x0001301e) popup_fep_japan_predictive_window_t2

0x8395,	// (0x00013051) popup_fep_japan_predictive_window_t3_ParamLimits

0x8395,	// (0x00013051) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0001a3a8) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0001a3a8) popup_fep_japan_predictive_window_t

0x6dd5,	// (0x00011a91) bg_popup_sub_pane_cp23

0x83cc,	// (0x00013088) listscroll_japin_cand_pane

0x83d4,	// (0x00013090) popup_fep_japan_candidate_window_t1

0x83e2,	// (0x0001309e) candidate_pane_ParamLimits

0x83e2,	// (0x0001309e) candidate_pane

0x83f4,	// (0x000130b0) scroll_pane_cp30

0x83fc,	// (0x000130b8) list_single_popup_jap_candidate_pane_ParamLimits

0x83fc,	// (0x000130b8) list_single_popup_jap_candidate_pane

0x6dd5,	// (0x00011a91) list_highlight_pane_cp30

0x8411,	// (0x000130cd) list_single_popup_jap_candidate_pane_t1

0x8420,	// (0x000130dc) level_1_signal

0x8432,	// (0x000130ee) level_2_signal

0x8445,	// (0x00013101) level_3_signal

0x8458,	// (0x00013114) level_4_signal

0x846b,	// (0x00013127) level_5_signal

0x847e,	// (0x0001313a) level_6_signal

0x8491,	// (0x0001314d) level_7_signal

0x8420,	// (0x000130dc) level_1_battery

0x8432,	// (0x000130ee) level_2_battery

0x8445,	// (0x00013101) level_3_battery

0x8458,	// (0x00013114) level_4_battery

0x846b,	// (0x00013127) level_5_battery

0x847e,	// (0x0001313a) level_6_battery

0x8491,	// (0x0001314d) level_7_battery

0x84bc,	// (0x00013178) list_menu_pane_ParamLimits

0x84bc,	// (0x00013178) list_menu_pane

0x84d2,	// (0x0001318e) scroll_pane_cp25_ParamLimits

0x84d2,	// (0x0001318e) scroll_pane_cp25

0x84eb,	// (0x000131a7) list_double2_graphic_pane_cp2_ParamLimits

0x84eb,	// (0x000131a7) list_double2_graphic_pane_cp2

0x84eb,	// (0x000131a7) list_double2_large_graphic_pane_cp2_ParamLimits

0x84eb,	// (0x000131a7) list_double2_large_graphic_pane_cp2

0x84eb,	// (0x000131a7) list_double2_pane_cp2_ParamLimits

0x84eb,	// (0x000131a7) list_double2_pane_cp2

0x84eb,	// (0x000131a7) list_double_graphic_pane_cp2_ParamLimits

0x84eb,	// (0x000131a7) list_double_graphic_pane_cp2

0x84eb,	// (0x000131a7) list_double_large_graphic_pane_cp2_ParamLimits

0x84eb,	// (0x000131a7) list_double_large_graphic_pane_cp2

0x84eb,	// (0x000131a7) list_double_number_pane_cp2_ParamLimits

0x84eb,	// (0x000131a7) list_double_number_pane_cp2

0x84eb,	// (0x000131a7) list_double_pane_cp2_ParamLimits

0x84eb,	// (0x000131a7) list_double_pane_cp2

0x850f,	// (0x000131cb) list_single_2graphic_pane_cp2_ParamLimits

0x850f,	// (0x000131cb) list_single_2graphic_pane_cp2

0x850f,	// (0x000131cb) list_single_graphic_heading_pane_cp2_ParamLimits

0x850f,	// (0x000131cb) list_single_graphic_heading_pane_cp2

0x850f,	// (0x000131cb) list_single_graphic_pane_cp2_ParamLimits

0x850f,	// (0x000131cb) list_single_graphic_pane_cp2

0x850f,	// (0x000131cb) list_single_heading_pane_cp2_ParamLimits

0x850f,	// (0x000131cb) list_single_heading_pane_cp2

0x8528,	// (0x000131e4) list_single_large_graphic_pane_cp2_ParamLimits

0x8528,	// (0x000131e4) list_single_large_graphic_pane_cp2

0x850f,	// (0x000131cb) list_single_number_heading_pane_cp2_ParamLimits

0x850f,	// (0x000131cb) list_single_number_heading_pane_cp2

0x850f,	// (0x000131cb) list_single_number_pane_cp2_ParamLimits

0x850f,	// (0x000131cb) list_single_number_pane_cp2

0x850f,	// (0x000131cb) list_single_pane_cp2_ParamLimits

0x850f,	// (0x000131cb) list_single_pane_cp2

0x85a4,	// (0x00013260) bg_popup_sub_pane_cp22

0x4f65,	// (0x0000fc21) popup_side_volume_key_window_g1

0x4f8f,	// (0x0000fc4b) popup_side_volume_key_window_t1

0x4fab,	// (0x0000fc67) volume_small_pane_cp1

0x714a,	// (0x00011e06) bg_popup_sub_pane_cp24_ParamLimits

0x714a,	// (0x00011e06) bg_popup_sub_pane_cp24

0x85ba,	// (0x00013276) fep_china_uni_candidate_pane_ParamLimits

0x85ba,	// (0x00013276) fep_china_uni_candidate_pane

0x85ce,	// (0x0001328a) fep_china_uni_entry_pane

0x85de,	// (0x0001329a) popup_fep_china_uni_window_g1

0x85fa,	// (0x000132b6) fep_china_uni_entry_pane_g1

0x8602,	// (0x000132be) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0001a3d9) fep_china_uni_entry_pane_g

0x860a,	// (0x000132c6) fep_entry_item_pane

0x8614,	// (0x000132d0) fep_candidate_item_pane

0x861c,	// (0x000132d8) fep_china_uni_candidate_pane_g1

0x8624,	// (0x000132e0) fep_china_uni_candidate_pane_g2

0x862c,	// (0x000132e8) fep_china_uni_candidate_pane_g3

0x8634,	// (0x000132f0) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0001a3de) fep_china_uni_candidate_pane_g

0x6dcb,	// (0x00011a87) fep_entry_item_pane_g1

0x863c,	// (0x000132f8) fep_entry_item_pane_t1_ParamLimits

0x863c,	// (0x000132f8) fep_entry_item_pane_t1

0x8652,	// (0x0001330e) fep_candidate_item_pane_t1_ParamLimits

0x8652,	// (0x0001330e) fep_candidate_item_pane_t1

0x8667,	// (0x00013323) fep_candidate_item_pane_t2_ParamLimits

0x8667,	// (0x00013323) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0001a3e7) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0001a3e7) fep_candidate_item_pane_t

0x6eb5,	// (0x00011b71) list_highlight_pane_cp31_ParamLimits

0x6eb5,	// (0x00011b71) list_highlight_pane_cp31

0x8679,	// (0x00013335) level_1_signal_lsc

0x8682,	// (0x0001333e) level_2_signal_lsc

0x868b,	// (0x00013347) level_3_signal_lsc

0x8694,	// (0x00013350) level_4_signal_lsc

0x869d,	// (0x00013359) level_5_signal_lsc

0x86a6,	// (0x00013362) level_6_signal_lsc

0x86af,	// (0x0001336b) level_7_signal_lsc

0x86af,	// (0x0001336b) level_1_battery_lsc

0x86b8,	// (0x00013374) level_2_battery_lsc

0x86c1,	// (0x0001337d) level_3_battery_lsc

0x86ca,	// (0x00013386) level_4_battery_lsc

0x86d3,	// (0x0001338f) level_5_battery_lsc

0x86dc,	// (0x00013398) level_6_battery_lsc

0x8679,	// (0x00013335) level_7_battery_lsc

0x86e5,	// (0x000133a1) scroll_handle_focus_pane_g1

0x86ee,	// (0x000133aa) scroll_handle_focus_pane_g2

0x86f7,	// (0x000133b3) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0001a3ec) scroll_handle_focus_pane_g

0x8700,	// (0x000133bc) list_single_2graphic_pane_g1_ParamLimits

0x8700,	// (0x000133bc) list_single_2graphic_pane_g1

0x7777,	// (0x00012433) list_single_2graphic_pane_g2_ParamLimits

0x7777,	// (0x00012433) list_single_2graphic_pane_g2

0x76fd,	// (0x000123b9) list_single_2graphic_pane_g3_ParamLimits

0x76fd,	// (0x000123b9) list_single_2graphic_pane_g3

0x870c,	// (0x000133c8) list_single_2graphic_pane_g4_ParamLimits

0x870c,	// (0x000133c8) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0001a3f3) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0001a3f3) list_single_2graphic_pane_g

0x871d,	// (0x000133d9) list_single_2graphic_pane_t1_ParamLimits

0x871d,	// (0x000133d9) list_single_2graphic_pane_t1

0x874b,	// (0x00013407) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x874b,	// (0x00013407) list_double2_graphic_large_graphic_pane_g1

0x781c,	// (0x000124d8) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x781c,	// (0x000124d8) list_double2_graphic_large_graphic_pane_g2

0x782d,	// (0x000124e9) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x782d,	// (0x000124e9) list_double2_graphic_large_graphic_pane_g3

0x875b,	// (0x00013417) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x875b,	// (0x00013417) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0001a3fc) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0001a3fc) list_double2_graphic_large_graphic_pane_g

0x8767,	// (0x00013423) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8767,	// (0x00013423) list_double2_graphic_large_graphic_pane_t1

0x877d,	// (0x00013439) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x877d,	// (0x00013439) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0001a405) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0001a405) list_double2_graphic_large_graphic_pane_t

0x88ce,	// (0x0001358a) popup_fast_swap_window_ParamLimits

0x88ce,	// (0x0001358a) popup_fast_swap_window

0x88ea,	// (0x000135a6) popup_side_volume_key_window

0x8906,	// (0x000135c2) stacon_top_pane

0x8910,	// (0x000135cc) status_pane_ParamLimits

0x8910,	// (0x000135cc) status_pane

0x891e,	// (0x000135da) status_small_pane

0x6dd5,	// (0x00011a91) control_pane

0x6dd5,	// (0x00011a91) stacon_bottom_pane

0x7bca,	// (0x00012886) scroll_pane_cp121

0x7bc1,	// (0x0001287d) set_content_pane

0x878f,	// (0x0001344b) bg_active_tab_pane_g1_cp1

0x8798,	// (0x00013454) bg_active_tab_pane_g2_cp1

0x87a1,	// (0x0001345d) bg_active_tab_pane_g3_cp1

0x878f,	// (0x0001344b) bg_passive_tab_pane_g1_cp1

0x8798,	// (0x00013454) bg_passive_tab_pane_g2_cp1

0x87a1,	// (0x0001345d) bg_passive_tab_pane_g3_cp1

0x87aa,	// (0x00013466) bg_active_tab_pane_g1_cp2

0x8798,	// (0x00013454) bg_active_tab_pane_g2_cp2

0x87b3,	// (0x0001346f) bg_active_tab_pane_g3_cp2

0x87aa,	// (0x00013466) bg_passive_tab_pane_g1_cp2

0x8798,	// (0x00013454) bg_passive_tab_pane_g2_cp2

0x87b3,	// (0x0001346f) bg_passive_tab_pane_g3_cp2

0x87bc,	// (0x00013478) bg_active_tab_pane_g1_cp3

0x8798,	// (0x00013454) bg_active_tab_pane_g2_cp3

0x87c5,	// (0x00013481) bg_active_tab_pane_g3_cp3

0x87bc,	// (0x00013478) bg_passive_tab_pane_g1_cp3

0x8798,	// (0x00013454) bg_passive_tab_pane_g2_cp3

0x87c5,	// (0x00013481) bg_passive_tab_pane_g3_cp3

0x87ce,	// (0x0001348a) bg_active_tab_pane_g1_cp4

0x8798,	// (0x00013454) bg_active_tab_pane_g2_cp4

0x87d9,	// (0x00013495) bg_active_tab_pane_g3_cp4

0x87ce,	// (0x0001348a) bg_passive_tab_pane_g1_cp4

0x8798,	// (0x00013454) bg_passive_tab_pane_g2_cp4

0x87d9,	// (0x00013495) bg_passive_tab_pane_g3_cp4

0x8822,	// (0x000134de) bg_active_tab_pane_g1_cp5

0x8798,	// (0x00013454) bg_active_tab_pane_g2_cp5

0x882b,	// (0x000134e7) bg_active_tab_pane_g3_cp5

0x8822,	// (0x000134de) bg_passive_tab_pane_g1_cp5

0x8798,	// (0x00013454) bg_passive_tab_pane_g2_cp5

0x882b,	// (0x000134e7) bg_passive_tab_pane_g3_cp5

0x8834,	// (0x000134f0) list_set_graphic_pane_ParamLimits

0x8834,	// (0x000134f0) list_set_graphic_pane

0x6dd5,	// (0x00011a91) bg_set_opt_pane_cp4

0x8851,	// (0x0001350d) list_set_graphic_pane_g1_ParamLimits

0x8851,	// (0x0001350d) list_set_graphic_pane_g1

0x885d,	// (0x00013519) list_set_graphic_pane_g2_ParamLimits

0x885d,	// (0x00013519) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0001a40a) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0001a40a) list_set_graphic_pane_g

0x0009,

0xfacf,	// (0x0001a78b) volume_small_pane_cp_g

0x8881,	// (0x0001353d) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8881,	// (0x0001353d) list_double2_large_graphic_pane_g1_cp2

0x888d,	// (0x00013549) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x888d,	// (0x00013549) list_double2_large_graphic_pane_g2_cp2

0x889e,	// (0x0001355a) list_double2_large_graphic_pane_g3_cp2

0x88a6,	// (0x00013562) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x88a6,	// (0x00013562) list_double2_large_graphic_pane_t1_cp2

0x88bc,	// (0x00013578) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x88bc,	// (0x00013578) list_double2_large_graphic_pane_t2_cp2

0xa5c8,	// (0x00015284) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa5c8,	// (0x00015284) list_double_large_graphic_pane_g1_cp2

0xa5d9,	// (0x00015295) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa5d9,	// (0x00015295) list_double_large_graphic_pane_g2_cp2

0x8a37,	// (0x000136f3) list_double_large_graphic_pane_g3_cp2

0xa5ea,	// (0x000152a6) list_double_large_graphic_pane_g4_cp

0xa5f2,	// (0x000152ae) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa5f2,	// (0x000152ae) list_double_large_graphic_pane_t1_cp2

0xa609,	// (0x000152c5) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa609,	// (0x000152c5) list_double_large_graphic_pane_t2_cp2

0x8929,	// (0x000135e5) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8929,	// (0x000135e5) list_double2_graphic_pane_g1_cp2

0x8937,	// (0x000135f3) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8937,	// (0x000135f3) list_double2_graphic_pane_g2_cp2

0x8948,	// (0x00013604) list_double2_graphic_pane_g3_cp2

0x8952,	// (0x0001360e) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8952,	// (0x0001360e) list_double2_graphic_pane_t1_cp2

0x8968,	// (0x00013624) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8968,	// (0x00013624) list_double2_graphic_pane_t2_cp2

0x897a,	// (0x00013636) list_single_number_heading_pane_g1_cp2_ParamLimits

0x897a,	// (0x00013636) list_single_number_heading_pane_g1_cp2

0x8986,	// (0x00013642) list_single_number_heading_pane_g2_cp2

0x898e,	// (0x0001364a) list_single_number_heading_pane_t1_cp2_ParamLimits

0x898e,	// (0x0001364a) list_single_number_heading_pane_t1_cp2

0x89a4,	// (0x00013660) list_single_number_heading_pane_t2_cp2_ParamLimits

0x89a4,	// (0x00013660) list_single_number_heading_pane_t2_cp2

0x89b6,	// (0x00013672) list_single_number_heading_pane_t3_cp2_ParamLimits

0x89b6,	// (0x00013672) list_single_number_heading_pane_t3_cp2

0x897a,	// (0x00013636) list_single_heading_pane_g1_cp2_ParamLimits

0x897a,	// (0x00013636) list_single_heading_pane_g1_cp2

0x8986,	// (0x00013642) list_single_heading_pane_g2_cp2

0x898e,	// (0x0001364a) list_single_heading_pane_t1_cp2_ParamLimits

0x898e,	// (0x0001364a) list_single_heading_pane_t1_cp2

0xa3d0,	// (0x0001508c) list_single_heading_pane_t2_cp2_ParamLimits

0xa3d0,	// (0x0001508c) list_single_heading_pane_t2_cp2

0xa318,	// (0x00014fd4) list_double_graphic_pane_g1_cp2_ParamLimits

0xa318,	// (0x00014fd4) list_double_graphic_pane_g1_cp2

0xa324,	// (0x00014fe0) list_double_graphic_pane_g2_cp2_ParamLimits

0xa324,	// (0x00014fe0) list_double_graphic_pane_g2_cp2

0xa333,	// (0x00014fef) list_double_graphic_pane_g3_cp2

0xa33b,	// (0x00014ff7) list_double_graphic_pane_t1_cp2_ParamLimits

0xa33b,	// (0x00014ff7) list_double_graphic_pane_t1_cp2

0xa351,	// (0x0001500d) list_double_graphic_pane_t2_cp2_ParamLimits

0xa351,	// (0x0001500d) list_double_graphic_pane_t2_cp2

0x8a2b,	// (0x000136e7) list_double_number_pane_g1_cp2_ParamLimits

0x8a2b,	// (0x000136e7) list_double_number_pane_g1_cp2

0x8a37,	// (0x000136f3) list_double_number_pane_g2_cp2

0xa2dc,	// (0x00014f98) list_double_number_pane_t1_cp2_ParamLimits

0xa2dc,	// (0x00014f98) list_double_number_pane_t1_cp2

0xa2f0,	// (0x00014fac) list_double_number_pane_t2_cp2_ParamLimits

0xa2f0,	// (0x00014fac) list_double_number_pane_t2_cp2

0xa306,	// (0x00014fc2) list_double_number_pane_t3_cp2_ParamLimits

0xa306,	// (0x00014fc2) list_double_number_pane_t3_cp2

0xa1c5,	// (0x00014e81) list_single_graphic_pane_g1_cp2_ParamLimits

0xa1c5,	// (0x00014e81) list_single_graphic_pane_g1_cp2

0x8a8f,	// (0x0001374b) list_single_graphic_pane_g2_cp2_ParamLimits

0x8a8f,	// (0x0001374b) list_single_graphic_pane_g2_cp2

0x8a9b,	// (0x00013757) list_single_graphic_pane_g3_cp2

0xa19b,	// (0x00014e57) list_single_graphic_pane_t1_cp2_ParamLimits

0xa19b,	// (0x00014e57) list_single_graphic_pane_t1_cp2

0x8a8f,	// (0x0001374b) list_single_number_pane_g1_cp2_ParamLimits

0x8a8f,	// (0x0001374b) list_single_number_pane_g1_cp2

0x8a9b,	// (0x00013757) list_single_number_pane_g2_cp2

0xa19b,	// (0x00014e57) list_single_number_pane_t1_cp2_ParamLimits

0xa19b,	// (0x00014e57) list_single_number_pane_t1_cp2

0xa1b1,	// (0x00014e6d) list_single_number_pane_t2_cp2_ParamLimits

0xa1b1,	// (0x00014e6d) list_single_number_pane_t2_cp2

0x888d,	// (0x00013549) list_double2_pane_g1_cp2_ParamLimits

0x888d,	// (0x00013549) list_double2_pane_g1_cp2

0x889e,	// (0x0001355a) list_double2_pane_g2_cp2

0x8a03,	// (0x000136bf) list_double2_pane_t1_cp2_ParamLimits

0x8a03,	// (0x000136bf) list_double2_pane_t1_cp2

0x8a19,	// (0x000136d5) list_double2_pane_t2_cp2_ParamLimits

0x8a19,	// (0x000136d5) list_double2_pane_t2_cp2

0x8a2b,	// (0x000136e7) list_double_pane_g1_cp2_ParamLimits

0x8a2b,	// (0x000136e7) list_double_pane_g1_cp2

0x8a37,	// (0x000136f3) list_double_pane_g2_cp2

0x8a3f,	// (0x000136fb) list_double_pane_t1_cp2_ParamLimits

0x8a3f,	// (0x000136fb) list_double_pane_t1_cp2

0x8a55,	// (0x00013711) list_double_pane_t2_cp2_ParamLimits

0x8a55,	// (0x00013711) list_double_pane_t2_cp2

0x8a7f,	// (0x0001373b) list_single_pane_cp2_g3

0x8a8f,	// (0x0001374b) list_single_pane_g1_cp2_ParamLimits

0x8a8f,	// (0x0001374b) list_single_pane_g1_cp2

0x8a9b,	// (0x00013757) list_single_pane_g2_cp2

0x8aa3,	// (0x0001375f) list_single_pane_t1_cp2_ParamLimits

0x8aa3,	// (0x0001375f) list_single_pane_t1_cp2

0x8abb,	// (0x00013777) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8abb,	// (0x00013777) list_single_large_graphic_pane_g1_cp2

0x8ac7,	// (0x00013783) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8ac7,	// (0x00013783) list_single_large_graphic_pane_g2_cp2

0x8ad3,	// (0x0001378f) list_single_large_graphic_pane_g3_cp2

0x8adb,	// (0x00013797) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8adb,	// (0x00013797) list_single_large_graphic_pane_g4_cp1

0x8af5,	// (0x000137b1) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8af5,	// (0x000137b1) list_single_large_graphic_pane_t1_cp2

0xa167,	// (0x00014e23) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa167,	// (0x00014e23) list_single_graphic_heading_pane_g1_cp2

0xa134,	// (0x00014df0) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa134,	// (0x00014df0) list_single_graphic_heading_pane_g4_cp2

0x8a9b,	// (0x00013757) list_single_graphic_heading_pane_g5_cp2

0xa173,	// (0x00014e2f) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa173,	// (0x00014e2f) list_single_graphic_heading_pane_t1_cp2

0xa189,	// (0x00014e45) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa189,	// (0x00014e45) list_single_graphic_heading_pane_t2_cp2

0xa128,	// (0x00014de4) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa128,	// (0x00014de4) list_single_2graphic_pane_g1_cp2

0xa134,	// (0x00014df0) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa134,	// (0x00014df0) list_single_2graphic_pane_g2_cp2

0x8a9b,	// (0x00013757) list_single_2graphic_pane_g3_cp2

0xa145,	// (0x00014e01) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa145,	// (0x00014e01) list_single_2graphic_pane_g4_cp2

0xa151,	// (0x00014e0d) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa151,	// (0x00014e0d) list_single_2graphic_pane_t1_cp2

0x6dcb,	// (0x00011a87) list_highlight_pane_g10_cp1

0x9cf4,	// (0x000149b0) list_highlight_pane_g1_cp1

0x9cfc,	// (0x000149b8) list_highlight_pane_g2_cp1

0x9d04,	// (0x000149c0) list_highlight_pane_g3_cp1

0x9d0c,	// (0x000149c8) list_highlight_pane_g4_cp1

0x9d14,	// (0x000149d0) list_highlight_pane_g5_cp1

0x9d1c,	// (0x000149d8) list_highlight_pane_g6_cp1

0x9d24,	// (0x000149e0) list_highlight_pane_g7_cp1

0x9d2c,	// (0x000149e8) list_highlight_pane_g8_cp1

0x9d34,	// (0x000149f0) list_highlight_pane_g9_cp1

0x9c14,	// (0x000148d0) form_field_slider_pane_t3

0x9c22,	// (0x000148de) form_field_slider_pane_t4

0x9c30,	// (0x000148ec) slider_form_pane_ParamLimits

0x9c30,	// (0x000148ec) slider_form_pane

0x6dd5,	// (0x00011a91) control_abbreviations

0x6dd5,	// (0x00011a91) control_conventions

0x6dd5,	// (0x00011a91) control_definitions

0x6dd5,	// (0x00011a91) format_table_attribute

0xa41a,	// (0x000150d6) bg_popup_preview_window_pane_g9

0x6dd5,	// (0x00011a91) format_table_data2

0x6dd5,	// (0x00011a91) format_table_data3

0x6dd5,	// (0x00011a91) format_table_data_example

0x0008,

0x6dd5,	// (0x00011a91) intro_purpose

0xf8ea,	// (0x0001a5a6) bg_popup_preview_window_pane_g

0x6dd5,	// (0x00011a91) texts_category

0x6dd5,	// (0x00011a91) texts_graphics

0x8b0b,	// (0x000137c7) text_digital

0x8b1a,	// (0x000137d6) text_primary

0x8b29,	// (0x000137e5) text_primary_small

0x8b38,	// (0x000137f4) text_secondary

0x8b47,	// (0x00013803) text_title

0xac45,	// (0x00015901) bg_passive_tab_pane_g1_cp3_srt

0x8798,	// (0x00013454) bg_passive_tab_pane_g2_cp3_srt

0xac4e,	// (0x0001590a) bg_passive_tab_pane_g3_cp3_srt

0x6eb5,	// (0x00011b71) bg_active_tab_pane_cp3_srt_ParamLimits

0x6eb5,	// (0x00011b71) bg_active_tab_pane_cp3_srt

0xac57,	// (0x00015913) tabs_4_active_pane_srt_g1

0xac5f,	// (0x0001591b) tabs_4_active_pane_srt_t1_ParamLimits

0xac5f,	// (0x0001591b) tabs_4_active_pane_srt_t1

0xac45,	// (0x00015901) bg_active_tab_pane_g1_cp3_copy1

0x8798,	// (0x00013454) bg_active_tab_pane_g2_cp3_copy1

0xac4e,	// (0x0001590a) bg_active_tab_pane_g3_cp3_copy1

0x6eb5,	// (0x00011b71) tabs_2_long_active_pane_srt_ParamLimits

0x6eb5,	// (0x00011b71) tabs_2_long_active_pane_srt

0x6eb5,	// (0x00011b71) tabs_2_long_passive_pane_srt_ParamLimits

0x6eb5,	// (0x00011b71) tabs_2_long_passive_pane_srt

0x8011,	// (0x00012ccd) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8011,	// (0x00012ccd) bg_passive_tab_pane_cp4_srt

0xa870,	// (0x0001552c) bg_passive_tab_pane_g1_cp4_srt

0x8798,	// (0x00013454) bg_passive_tab_pane_g2_cp4_srt

0xa879,	// (0x00015535) bg_passive_tab_pane_g3_cp4_srt

0x7ff0,	// (0x00012cac) bg_active_tab_pane_cp4_srt_ParamLimits

0x7ff0,	// (0x00012cac) bg_active_tab_pane_cp4_srt

0xa882,	// (0x0001553e) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa882,	// (0x0001553e) tabs_2_long_active_pane_srt_t1

0xa870,	// (0x0001552c) bg_active_tab_pane_g1_cp4_srt

0x8798,	// (0x00013454) bg_active_tab_pane_g2_cp4_srt

0xa879,	// (0x00015535) bg_active_tab_pane_g3_cp4_srt

0x714a,	// (0x00011e06) tabs_3_long_active_pane_srt_ParamLimits

0x714a,	// (0x00011e06) tabs_3_long_active_pane_srt

0x714a,	// (0x00011e06) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x714a,	// (0x00011e06) tabs_3_long_passive_pane_cp_srt

0x714a,	// (0x00011e06) tabs_3_long_passive_pane_srt_ParamLimits

0x714a,	// (0x00011e06) tabs_3_long_passive_pane_srt

0x8011,	// (0x00012ccd) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8011,	// (0x00012ccd) bg_passive_tab_pane_cp5_srt

0x8822,	// (0x000134de) bg_passive_tab_pane_g1_cp5_srt

0x8798,	// (0x00013454) bg_passive_tab_pane_g2_cp5_srt

0x882b,	// (0x000134e7) bg_passive_tab_pane_g3_cp5_srt

0x7ff0,	// (0x00012cac) bg_active_tab_pane_cp5_srt_ParamLimits

0x7ff0,	// (0x00012cac) bg_active_tab_pane_cp5_srt

0xa85e,	// (0x0001551a) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa85e,	// (0x0001551a) tabs_3_long_active_pane_srt_t1

0x8822,	// (0x000134de) bg_active_tab_pane_g1_cp5_srt

0x8798,	// (0x00013454) bg_active_tab_pane_g2_cp5_srt

0x882b,	// (0x000134e7) bg_active_tab_pane_g3_cp5_srt

0xa850,	// (0x0001550c) navi_text_pane_srt_t1

0xa848,	// (0x00015504) navi_icon_pane_srt_g1

0x8d1c,	// (0x000139d8) midp_editing_number_pane_srt

0x8b56,	// (0x00013812) midp_ticker_pane_srt

0x8d24,	// (0x000139e0) midp_ticker_pane_srt_g1

0x8d2c,	// (0x000139e8) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0001a429) midp_ticker_pane_srt_g

0x8d34,	// (0x000139f0) midp_ticker_pane_srt_t1

0xa839,	// (0x000154f5) midp_editing_number_pane_t1_copy1

0x8b5e,	// (0x0001381a) listscroll_midp_pane

0x8b5e,	// (0x0001381a) midp_form_pane

0x8bce,	// (0x0001388a) midp_info_popup_window_ParamLimits

0x8bce,	// (0x0001388a) midp_info_popup_window

0x7ed9,	// (0x00012b95) bg_popup_sub_pane_cp50_ParamLimits

0x7ed9,	// (0x00012b95) bg_popup_sub_pane_cp50

0x992c,	// (0x000145e8) listscroll_midp_info_pane_ParamLimits

0x992c,	// (0x000145e8) listscroll_midp_info_pane

0x990c,	// (0x000145c8) listscroll_form_midp_pane_ParamLimits

0x990c,	// (0x000145c8) listscroll_form_midp_pane

0x9918,	// (0x000145d4) scroll_bar_cp050

0x98ec,	// (0x000145a8) list_midp_pane

0xb9df,	// (0x0001669b) signal_pane_g2_cp

0x9826,	// (0x000144e2) listscroll_midp_info_pane_t1_ParamLimits

0x9826,	// (0x000144e2) listscroll_midp_info_pane_t1

0x983e,	// (0x000144fa) listscroll_midp_info_pane_t2_ParamLimits

0x983e,	// (0x000144fa) listscroll_midp_info_pane_t2

0x987c,	// (0x00014538) listscroll_midp_info_pane_t3_ParamLimits

0x987c,	// (0x00014538) listscroll_midp_info_pane_t3

0x98b6,	// (0x00014572) listscroll_midp_info_pane_t4_ParamLimits

0x98b6,	// (0x00014572) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0001a4e1) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0001a4e1) listscroll_midp_info_pane_t

0x7f9d,	// (0x00012c59) scroll_pane_cp21

0x97c4,	// (0x00014480) form_midp_field_choice_group_pane

0x97cd,	// (0x00014489) form_midp_field_text_pane

0x980c,	// (0x000144c8) form_midp_field_time_pane

0x9814,	// (0x000144d0) form_midp_gauge_slider_pane

0x981d,	// (0x000144d9) form_midp_gauge_wait_pane

0x6dd5,	// (0x00011a91) form_midp_image_pane

0x9796,	// (0x00014452) list_single_midp_pane_ParamLimits

0x9796,	// (0x00014452) list_single_midp_pane

0x974e,	// (0x0001440a) form_midp_field_text_pane_t1

0x950f,	// (0x000141cb) input_focus_pane_cp050

0x9785,	// (0x00014441) list_midp_form_text_pane

0x971d,	// (0x000143d9) form_midp_field_choice_group_pane_t1

0x972b,	// (0x000143e7) input_focus_pane_cp051

0x973f,	// (0x000143fb) list_midp_choice_pane

0x6dd5,	// (0x00011a91) status_idle_pane

0x9701,	// (0x000143bd) form_midp_field_time_pane_t1

0x6dcb,	// (0x00011a87) wait_anim_pane_g2_copy1

0x970f,	// (0x000143cb) form_midp_field_time_pane_t2

0x0001,

0x8c7c,	// (0x00013938) aid_navinavi_width_2_pane

0xf820,	// (0x0001a4dc) form_midp_field_time_pane_t

0x6dd5,	// (0x00011a91) input_focus_pane_cp052

0x6dd5,	// (0x00011a91) bg_input_focus_pane_cp040

0x96c1,	// (0x0001437d) form_midp_gauge_slider_pane_t1

0x96cf,	// (0x0001438b) form_midp_gauge_slider_pane_t2

0x96dd,	// (0x00014399) form_midp_gauge_slider_pane_t3

0x96eb,	// (0x000143a7) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0001a4d3) form_midp_gauge_slider_pane_t

0x96f9,	// (0x000143b5) form_midp_slider_pane

0x6eb5,	// (0x00011b71) bg_input_focus_pane_cp041_ParamLimits

0x6eb5,	// (0x00011b71) bg_input_focus_pane_cp041

0x968e,	// (0x0001434a) form_midp_gauge_wait_pane_t1_ParamLimits

0x968e,	// (0x0001434a) form_midp_gauge_wait_pane_t1

0x96a0,	// (0x0001435c) form_midp_gauge_wait_pane_t2_ParamLimits

0x96a0,	// (0x0001435c) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0001a4ce) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0001a4ce) form_midp_gauge_wait_pane_t

0x96b2,	// (0x0001436e) form_midp_wait_pane_ParamLimits

0x96b2,	// (0x0001436e) form_midp_wait_pane

0x9658,	// (0x00014314) form_midp_image_pane_g1

0x9661,	// (0x0001431d) form_midp_image_pane_t1

0x9670,	// (0x0001432c) form_midp_image_pane_t2

0x967f,	// (0x0001433b) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0001a4c7) form_midp_image_pane_t

0x9640,	// (0x000142fc) list_single_midp_pane_g1

0x9649,	// (0x00014305) list_single_midp_pane_t1

0x9618,	// (0x000142d4) list_midp_form_item_pane_ParamLimits

0x9618,	// (0x000142d4) list_midp_form_item_pane

0x8c24,	// (0x000138e0) list_midp_form_item_pane_t1

0x8c33,	// (0x000138ef) midp_ticker_pane_g1

0x8c3f,	// (0x000138fb) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0001a40f) midp_ticker_pane_g

0x8c4b,	// (0x00013907) midp_ticker_pane_t1

0xaabd,	// (0x00015779) midp_editing_number_pane_t1

0xaa9b,	// (0x00015757) midp_editing_number_pane

0xaaaa,	// (0x00015766) midp_ticker_pane

0xa801,	// (0x000154bd) ai_message_heading_pane

0x6dd5,	// (0x00011a91) bg_popup_window_pane_cp14

0xa809,	// (0x000154c5) listscroll_ai_message_pane

0xa78b,	// (0x00015447) ai_message_heading_pane_g1_ParamLimits

0xa78b,	// (0x00015447) ai_message_heading_pane_g1

0xa797,	// (0x00015453) ai_message_heading_pane_g2_ParamLimits

0xa797,	// (0x00015453) ai_message_heading_pane_g2

0xa7a3,	// (0x0001545f) ai_message_heading_pane_g3_ParamLimits

0xa7a3,	// (0x0001545f) ai_message_heading_pane_g3

0xa7af,	// (0x0001546b) ai_message_heading_pane_g4_ParamLimits

0xa7af,	// (0x0001546b) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0001a608) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0001a608) ai_message_heading_pane_g

0xa7bb,	// (0x00015477) ai_message_heading_pane_t1_ParamLimits

0xa7bb,	// (0x00015477) ai_message_heading_pane_t1

0xa7d5,	// (0x00015491) ai_message_heading_pane_t2_ParamLimits

0xa7d5,	// (0x00015491) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0001a611) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0001a611) ai_message_heading_pane_t

0xa7e7,	// (0x000154a3) bg_popup_heading_pane_cp1_ParamLimits

0xa7e7,	// (0x000154a3) bg_popup_heading_pane_cp1

0xa779,	// (0x00015435) list_ai_message_pane_ParamLimits

0xa779,	// (0x00015435) list_ai_message_pane

0x7f9d,	// (0x00012c59) scroll_pane_cp10

0xa715,	// (0x000153d1) list_ai_message_pane_g1

0xa71d,	// (0x000153d9) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0001a5e5) list_ai_message_pane_g

0xa725,	// (0x000153e1) list_ai_message_pane_t1_ParamLimits

0xa725,	// (0x000153e1) list_ai_message_pane_t1

0xa73a,	// (0x000153f6) list_ai_message_pane_t2_ParamLimits

0xa73a,	// (0x000153f6) list_ai_message_pane_t2

0xa74f,	// (0x0001540b) list_ai_message_pane_t3_ParamLimits

0xa74f,	// (0x0001540b) list_ai_message_pane_t3

0xa764,	// (0x00015420) list_ai_message_pane_t4_ParamLimits

0xa764,	// (0x00015420) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0001a5ea) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0001a5ea) list_ai_message_pane_t

0xa700,	// (0x000153bc) cell_ai_soft_ind_pane_ParamLimits

0xa700,	// (0x000153bc) cell_ai_soft_ind_pane

0x8c5d,	// (0x00013919) cell_ai_soft_ind_pane_g1_ParamLimits

0x8c5d,	// (0x00013919) cell_ai_soft_ind_pane_g1

0x6dd5,	// (0x00011a91) grid_highlight_cp1

0x8c6a,	// (0x00013926) text_secondary_cp56_ParamLimits

0x8c6a,	// (0x00013926) text_secondary_cp56

0xa6d5,	// (0x00015391) example_general_pane_ParamLimits

0xa6d5,	// (0x00015391) example_general_pane

0xa6e1,	// (0x0001539d) example_parent_pane_g1_ParamLimits

0xa6e1,	// (0x0001539d) example_parent_pane_g1

0xa6ed,	// (0x000153a9) example_parent_pane_t1_ParamLimits

0xa6ed,	// (0x000153a9) example_parent_pane_t1

0x56b2,	// (0x0001036e) popup_preview_text_window_ParamLimits

0x56b2,	// (0x0001036e) popup_preview_text_window

0x8a87,	// (0x00013743) list_single_pane_cp2_g4

0x7200,	// (0x00011ebc) bg_popup_preview_window_pane_ParamLimits

0x7200,	// (0x00011ebc) bg_popup_preview_window_pane

0xa422,	// (0x000150de) popup_preview_text_window_t1_ParamLimits

0xa422,	// (0x000150de) popup_preview_text_window_t1

0xa440,	// (0x000150fc) popup_preview_text_window_t2_ParamLimits

0xa440,	// (0x000150fc) popup_preview_text_window_t2

0xa489,	// (0x00015145) popup_preview_text_window_t3_ParamLimits

0xa489,	// (0x00015145) popup_preview_text_window_t3

0xa4ce,	// (0x0001518a) popup_preview_text_window_t4_ParamLimits

0xa4ce,	// (0x0001518a) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0001a5b9) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0001a5b9) popup_preview_text_window_t

0xa54c,	// (0x00015208) scroll_pane_cp11

0x93ed,	// (0x000140a9) bg_popup_preview_window_pane_g1

0xa3e2,	// (0x0001509e) bg_popup_preview_window_pane_g2

0xa3ea,	// (0x000150a6) bg_popup_preview_window_pane_g3

0xa3f2,	// (0x000150ae) bg_popup_preview_window_pane_g4

0xa3fa,	// (0x000150b6) bg_popup_preview_window_pane_g5

0xa402,	// (0x000150be) bg_popup_preview_window_pane_g6

0xa40a,	// (0x000150c6) bg_popup_preview_window_pane_g7

0xa412,	// (0x000150ce) bg_popup_preview_window_pane_g8

0x4898,	// (0x0000f554) aid_popup_width_pane

0x5690,	// (0x0001034c) popup_midp_note_alarm_window_ParamLimits

0x5690,	// (0x0001034c) popup_midp_note_alarm_window

0x7c8b,	// (0x00012947) data_form_pane_ParamLimits

0x7c97,	// (0x00012953) form_field_data_pane_g1

0x7ca1,	// (0x0001295d) form_field_data_pane_t1_ParamLimits

0x7cb9,	// (0x00012975) input_focus_pane_ParamLimits

0x7cc7,	// (0x00012983) data_form_wide_pane_ParamLimits

0x7cd3,	// (0x0001298f) form_field_data_wide_pane_g1

0x7cf3,	// (0x000129af) form_field_data_wide_pane_t1_ParamLimits

0x74af,	// (0x0001216b) input_focus_pane_cp6_ParamLimits

0x7f4a,	// (0x00012c06) input_popup_find_pane_g1_ParamLimits

0x7f4a,	// (0x00012c06) input_popup_find_pane_g1

0x4e14,	// (0x0000fad0) aid_navi_side_left_pane

0x4e29,	// (0x0000fae5) aid_navi_side_right_pane

0x9dfb,	// (0x00014ab7) bg_popup_window_pane_cp30_ParamLimits

0x9dfb,	// (0x00014ab7) bg_popup_window_pane_cp30

0x9e75,	// (0x00014b31) popup_midp_note_alarm_window_g1_ParamLimits

0x9e75,	// (0x00014b31) popup_midp_note_alarm_window_g1

0x9ea5,	// (0x00014b61) popup_midp_note_alarm_window_t1_ParamLimits

0x9ea5,	// (0x00014b61) popup_midp_note_alarm_window_t1

0x9f46,	// (0x00014c02) popup_midp_note_alarm_window_t2_ParamLimits

0x9f46,	// (0x00014c02) popup_midp_note_alarm_window_t2

0x9ff4,	// (0x00014cb0) popup_midp_note_alarm_window_t3_ParamLimits

0x9ff4,	// (0x00014cb0) popup_midp_note_alarm_window_t3

0xa026,	// (0x00014ce2) popup_midp_note_alarm_window_t4_ParamLimits

0xa026,	// (0x00014ce2) popup_midp_note_alarm_window_t4

0xa04c,	// (0x00014d08) popup_midp_note_alarm_window_t5_ParamLimits

0xa04c,	// (0x00014d08) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0001a556) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0001a556) popup_midp_note_alarm_window_t

0xa0f8,	// (0x00014db4) wait_bar_pane_cp1_ParamLimits

0xa0f8,	// (0x00014db4) wait_bar_pane_cp1

0x6dd5,	// (0x00011a91) wait_anim_pane_copy1

0x6dd5,	// (0x00011a91) wait_border_pane_copy1

0x9ad5,	// (0x00014791) wait_border_pane_g1_copy1

0x7d0a,	// (0x000129c6) form_field_popup_pane_g1

0x7d12,	// (0x000129ce) form_field_popup_pane_t1_ParamLimits

0x7cb9,	// (0x00012975) input_focus_pane_cp7_ParamLimits

0x7d2a,	// (0x000129e6) list_form_pane_ParamLimits

0x7d36,	// (0x000129f2) form_field_popup_wide_pane_g1

0x7d3e,	// (0x000129fa) form_field_popup_wide_pane_t1_ParamLimits

0x7cb9,	// (0x00012975) input_focus_pane_cp8_ParamLimits

0x7d50,	// (0x00012a0c) list_form_wide_pane_ParamLimits

0xacd9,	// (0x00015995) aid_size_cell_graphic_pane

0x7e24,	// (0x00012ae0) data_form_pane_t1_ParamLimits

0xaa68,	// (0x00015724) data_form_wide_pane_t1_ParamLimits

0x8f8c,	// (0x00013c48) bg_status_flat_pane

0x6e15,	// (0x00011ad1) title_pane_t1_ParamLimits

0x6e7d,	// (0x00011b39) title_pane_t2_ParamLimits

0x6ea3,	// (0x00011b5f) title_pane_t3_ParamLimits

0xf557,	// (0x0001a213) title_pane_t_ParamLimits

0x8420,	// (0x000130dc) level_1_signal_ParamLimits

0x8432,	// (0x000130ee) level_2_signal_ParamLimits

0x8445,	// (0x00013101) level_3_signal_ParamLimits

0x8458,	// (0x00013114) level_4_signal_ParamLimits

0x846b,	// (0x00013127) level_5_signal_ParamLimits

0x847e,	// (0x0001313a) level_6_signal_ParamLimits

0x8491,	// (0x0001314d) level_7_signal_ParamLimits

0x8420,	// (0x000130dc) level_1_battery_ParamLimits

0x8432,	// (0x000130ee) level_2_battery_ParamLimits

0x8445,	// (0x00013101) level_3_battery_ParamLimits

0x8458,	// (0x00013114) level_4_battery_ParamLimits

0x846b,	// (0x00013127) level_5_battery_ParamLimits

0x847e,	// (0x0001313a) level_6_battery_ParamLimits

0x8491,	// (0x0001314d) level_7_battery_ParamLimits

0x9cf4,	// (0x000149b0) bg_status_flat_pane_g1

0x9cfc,	// (0x000149b8) bg_status_flat_pane_g2

0x9d04,	// (0x000149c0) bg_status_flat_pane_g3

0x9d0c,	// (0x000149c8) bg_status_flat_pane_g4

0x9d14,	// (0x000149d0) bg_status_flat_pane_g5

0x9d1c,	// (0x000149d8) bg_status_flat_pane_g6

0x9d24,	// (0x000149e0) bg_status_flat_pane_g7

0x6ecb,	// (0x00011b87) tabs_3_active_pane_t1_ParamLimits

0x6ecb,	// (0x00011b87) tabs_3_passive_pane_t1_ParamLimits

0x6ee5,	// (0x00011ba1) tabs_4_active_pane_t1_ParamLimits

0x6ee5,	// (0x00011ba1) tabs_4_1_passive_pane_t1_ParamLimits

0x7fde,	// (0x00012c9a) tabs_2_active_pane_t1_ParamLimits

0x7fde,	// (0x00012c9a) tabs_2_passive_pane_t1_ParamLimits

0x7ff0,	// (0x00012cac) bg_active_tab_pane_cp4_ParamLimits

0x7ffe,	// (0x00012cba) tabs_2_long_active_pane_t1_ParamLimits

0x8011,	// (0x00012ccd) bg_passive_tab_pane_cp4_ParamLimits

0x59d7,	// (0x00010693) list_single_midp_graphic_pane_t1_ParamLimits

0x7ff0,	// (0x00012cac) bg_active_tab_pane_cp5_ParamLimits

0x801d,	// (0x00012cd9) tabs_3_long_active_pane_t1_ParamLimits

0x8011,	// (0x00012ccd) bg_passive_tab_pane_cp5_ParamLimits

0x59d7,	// (0x00010693) list_single_midp_graphic_pane_t1

0x8f8c,	// (0x00013c48) bg_status_flat_pane_ParamLimits

0x904f,	// (0x00013d0b) indicator_pane_cp2_ParamLimits

0x904f,	// (0x00013d0b) indicator_pane_cp2

0x917a,	// (0x00013e36) navi_pane_srt_ParamLimits

0x917a,	// (0x00013e36) navi_pane_srt

0x919e,	// (0x00013e5a) popup_clock_digital_analogue_window_cp1

0x6fac,	// (0x00011c68) indicator_pane_t1

0x8b56,	// (0x00013812) copy_highlight_pane

0x8b56,	// (0x00013812) cursor_graphics_pane

0x8b56,	// (0x00013812) graphic_within_text_pane

0x8b56,	// (0x00013812) link_highlight_pane

0xa50f,	// (0x000151cb) popup_preview_text_window_t5_ParamLimits

0xa50f,	// (0x000151cb) popup_preview_text_window_t5

0x8c84,	// (0x00013940) cursor_digital_pane

0x8c84,	// (0x00013940) cursor_primary_pane

0x8c95,	// (0x00013951) cursor_primary_small_pane

0x8c9d,	// (0x00013959) cursor_secondary_pane

0x8ca5,	// (0x00013961) cursor_title_pane

0x8c84,	// (0x00013940) link_highlight_digital_pane

0x8c8c,	// (0x00013948) link_highlight_primary_pane

0x8c95,	// (0x00013951) link_highlight_primary_small_pane

0x8c9d,	// (0x00013959) link_highlight_secondary_pane

0x8ca5,	// (0x00013961) link_highlight_title_pane

0x8c84,	// (0x00013940) copy_highlight_digital_pane

0x8c84,	// (0x00013940) copy_highlight_primary_pane

0x8c95,	// (0x00013951) copy_highlight_primary_small_pane

0x8c9d,	// (0x00013959) copy_highlight_secondary_pane

0x8ca5,	// (0x00013961) copy_highlight_title_pane

0x8c9d,	// (0x00013959) graphic_text_digital_pane

0x9d92,	// (0x00014a4e) graphic_text_primary_pane

0x9d9b,	// (0x00014a57) graphic_text_primary_small_pane

0x8c95,	// (0x00013951) graphic_text_secondary_pane

0x8c84,	// (0x00013940) graphic_text_title_pane

0x8cad,	// (0x00013969) cursor_primary_pane_g1

0x9d84,	// (0x00014a40) cursor_text_primary_t1

0x9d6c,	// (0x00014a28) cursor_primary_small_pane_g1

0x9d76,	// (0x00014a32) cursor_text_primary_small_t1

0x9d54,	// (0x00014a10) cursor_primary_small_pane_g1_copy1

0x9d5e,	// (0x00014a1a) cursor_text_primary_small_t1_copy1

0x9d3c,	// (0x000149f8) cursor_text_title_t1

0x9d4a,	// (0x00014a06) cursor_title_pane_g1

0x8cad,	// (0x00013969) cursor_digital_pane_g1

0x8cb7,	// (0x00013973) cursor_text_digital_t1

0x8cdc,	// (0x00013998) link_highlight_primary_pane_g1

0x9ce5,	// (0x000149a1) link_highlight_primary_pane_t1

0x8cc5,	// (0x00013981) link_highlight_primary_small_pane_g1

0x8ccd,	// (0x00013989) link_highlight_primary_small_pane_t1

0x8cdc,	// (0x00013998) link_highlight_secondary_pane_g1

0x8ce4,	// (0x000139a0) link_highlight_secondary_pane_t1

0x9c59,	// (0x00014915) link_highlight_title_pane_g1

0x9c61,	// (0x0001491d) link_highlight_title_pane_t1

0x9c42,	// (0x000148fe) link_highlight_digital_pane_g1

0x9c4a,	// (0x00014906) link_highlight_digital_pane_t1

0x9b1a,	// (0x000147d6) copy_highlight_primary_pane_g1

0x9b22,	// (0x000147de) copy_highlight_primary_pane_t1

0x9af4,	// (0x000147b0) copy_highlight_primary_small_pane_g1

0x9b0b,	// (0x000147c7) copy_highlight_primary_small_pane_t1

0x8cf3,	// (0x000139af) copy_highlight_secondary_pane_g1

0x8cfb,	// (0x000139b7) copy_highlight_secondary_pane_t1

0x9af4,	// (0x000147b0) copy_highlight_title_pane_g1

0x9afc,	// (0x000147b8) copy_highlight_title_pane_t1

0x9b1a,	// (0x000147d6) copy_highlight_digital_pane_g1

0xaea7,	// (0x00015b63) copy_highlight_digital_pane_t1

0xadfb,	// (0x00015ab7) graphic_text_primary_pane_g1

0xae8b,	// (0x00015b47) graphic_text_primary_pane_t1

0xae99,	// (0x00015b55) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0001a685) graphic_text_primary_pane_t

0xae67,	// (0x00015b23) graphic_text_primary_small_pane_g1

0xae6f,	// (0x00015b2b) graphic_text_primary_small_pane_t1

0xae7d,	// (0x00015b39) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0001a680) graphic_text_primary_small_pane_t

0xae43,	// (0x00015aff) graphic_text_secondary_pane_g1

0xae4b,	// (0x00015b07) graphic_text_secondary_pane_t1

0xae59,	// (0x00015b15) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0001a67b) graphic_text_secondary_pane_t

0xae1f,	// (0x00015adb) graphic_text_title_pane_g1

0xae27,	// (0x00015ae3) graphic_text_title_pane_t1

0xae35,	// (0x00015af1) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0001a676) graphic_text_title_pane_t

0xadfb,	// (0x00015ab7) graphic_text_digital_pane_g1

0xae03,	// (0x00015abf) graphic_text_digital_pane_t1

0xae11,	// (0x00015acd) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0001a671) graphic_text_digital_pane_t

0x6eb5,	// (0x00011b71) navi_icon_pane_srt_ParamLimits

0x6eb5,	// (0x00011b71) navi_icon_pane_srt

0x6dd5,	// (0x00011a91) navi_midp_pane_srt

0x6dd5,	// (0x00011a91) navi_navi_pane_srt

0x6eb5,	// (0x00011b71) navi_text_pane_srt_ParamLimits

0x6eb5,	// (0x00011b71) navi_text_pane_srt

0xadc6,	// (0x00015a82) navi_navi_icon_text_pane_srt

0xadce,	// (0x00015a8a) navi_navi_pane_srt_g1_ParamLimits

0xadce,	// (0x00015a8a) navi_navi_pane_srt_g1

0xade0,	// (0x00015a9c) navi_navi_pane_srt_g2_ParamLimits

0xade0,	// (0x00015a9c) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0001a66c) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0001a66c) navi_navi_pane_srt_g

0xadf2,	// (0x00015aae) navi_navi_tabs_pane_srt

0xadc6,	// (0x00015a82) navi_navi_text_pane_srt

0xadc6,	// (0x00015a82) navi_navi_volume_pane_srt

0xadb7,	// (0x00015a73) navi_navi_text_pane_srt_t1

0x5d51,	// (0x00010a0d) navi_navi_volume_pane_srt_g1

0x5d59,	// (0x00010a15) volume_small_pane_srt_ParamLimits

0x5d59,	// (0x00010a15) volume_small_pane_srt

0x50f4,	// (0x0000fdb0) volume_small_pane_srt_g1_ParamLimits

0x50f4,	// (0x0000fdb0) volume_small_pane_srt_g1

0x5104,	// (0x0000fdc0) volume_small_pane_srt_g2_ParamLimits

0x5104,	// (0x0000fdc0) volume_small_pane_srt_g2

0x5115,	// (0x0000fdd1) volume_small_pane_srt_g3_ParamLimits

0x5115,	// (0x0000fdd1) volume_small_pane_srt_g3

0x5126,	// (0x0000fde2) volume_small_pane_srt_g4_ParamLimits

0x5126,	// (0x0000fde2) volume_small_pane_srt_g4

0x5137,	// (0x0000fdf3) volume_small_pane_srt_g5_ParamLimits

0x5137,	// (0x0000fdf3) volume_small_pane_srt_g5

0x5148,	// (0x0000fe04) volume_small_pane_srt_g6_ParamLimits

0x5148,	// (0x0000fe04) volume_small_pane_srt_g6

0x5159,	// (0x0000fe15) volume_small_pane_srt_g7_ParamLimits

0x5159,	// (0x0000fe15) volume_small_pane_srt_g7

0x516a,	// (0x0000fe26) volume_small_pane_srt_g8_ParamLimits

0x516a,	// (0x0000fe26) volume_small_pane_srt_g8

0x517b,	// (0x0000fe37) volume_small_pane_srt_g9_ParamLimits

0x517b,	// (0x0000fe37) volume_small_pane_srt_g9

0x518c,	// (0x0000fe48) volume_small_pane_srt_g10_ParamLimits

0x518c,	// (0x0000fe48) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0001a414) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0001a414) volume_small_pane_srt_g

0x72a9,	// (0x00011f65) query_popup_data_pane_cp2

0xad9d,	// (0x00015a59) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xad9d,	// (0x00015a59) navi_navi_icon_text_pane_srt_t1

0x9d92,	// (0x00014a4e) navi_tabs_2_long_pane_srt

0x9d92,	// (0x00014a4e) navi_tabs_2_pane_srt

0x9d92,	// (0x00014a4e) navi_tabs_3_long_pane_srt

0x9d92,	// (0x00014a4e) navi_tabs_3_pane_srt

0x9d92,	// (0x00014a4e) navi_tabs_4_pane_srt

0x5d31,	// (0x000109ed) tabs_2_active_pane_srt_ParamLimits

0x5d31,	// (0x000109ed) tabs_2_active_pane_srt

0x5d41,	// (0x000109fd) tabs_2_passive_pane_srt_ParamLimits

0x5d41,	// (0x000109fd) tabs_2_passive_pane_srt

0x8ead,	// (0x00013b69) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8ead,	// (0x00013b69) bg_passive_tab_pane_cp1_srt

0xad69,	// (0x00015a25) bg_passive_tab_pane_g1_cp1_srt

0x8798,	// (0x00013454) bg_passive_tab_pane_g2_cp1_srt

0xad72,	// (0x00015a2e) bg_passive_tab_pane_g3_cp1_srt

0x6eb5,	// (0x00011b71) bg_active_tab_pane_cp1_srt_ParamLimits

0x6eb5,	// (0x00011b71) bg_active_tab_pane_cp1_srt

0xad7b,	// (0x00015a37) tabs_2_active_pane_srt_g1

0xad83,	// (0x00015a3f) tabs_2_active_pane_srt_t1_ParamLimits

0xad83,	// (0x00015a3f) tabs_2_active_pane_srt_t1

0xad69,	// (0x00015a25) bg_active_tab_pane_g1_cp1_srt

0x8798,	// (0x00013454) bg_active_tab_pane_g2_cp1_srt

0xad72,	// (0x00015a2e) bg_active_tab_pane_g3_cp1_srt

0x5cfe,	// (0x000109ba) tabs_3_active_pane_srt_ParamLimits

0x5cfe,	// (0x000109ba) tabs_3_active_pane_srt

0x5d0f,	// (0x000109cb) tabs_3_passive_pane_cp_srt_ParamLimits

0x5d0f,	// (0x000109cb) tabs_3_passive_pane_cp_srt

0x5d20,	// (0x000109dc) tabs_3_passive_pane_srt_ParamLimits

0x5d20,	// (0x000109dc) tabs_3_passive_pane_srt

0x8ead,	// (0x00013b69) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8ead,	// (0x00013b69) bg_passive_tab_pane_cp2_srt

0x8d0a,	// (0x000139c6) bg_passive_tab_pane_g1_cp2_srt

0x8798,	// (0x00013454) bg_passive_tab_pane_g2_cp2_srt

0x8d13,	// (0x000139cf) bg_passive_tab_pane_g3_cp2_srt

0x6eb5,	// (0x00011b71) bg_active_tab_pane_cp2_srt_ParamLimits

0x6eb5,	// (0x00011b71) bg_active_tab_pane_cp2_srt

0xad4f,	// (0x00015a0b) tabs_3_active_pane_srt_g1

0xad57,	// (0x00015a13) tabs_3_active_pane_srt_t1_ParamLimits

0xad57,	// (0x00015a13) tabs_3_active_pane_srt_t1

0x8d0a,	// (0x000139c6) bg_active_tab_pane_g1_cp2_srt

0x8798,	// (0x00013454) bg_active_tab_pane_g2_cp2_srt

0x8d13,	// (0x000139cf) bg_active_tab_pane_g3_cp2_srt

0x5cb6,	// (0x00010972) tabs_4_active_pane_srt_ParamLimits

0x5cb6,	// (0x00010972) tabs_4_active_pane_srt

0x5cc8,	// (0x00010984) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5cc8,	// (0x00010984) tabs_4_passive_pane_cp2_srt

0x52fb,	// (0x0000ffb7) aid_size_cell_toolbar

0x8011,	// (0x00012ccd) main_idle_act_pane_ParamLimits

0x54c6,	// (0x00010182) popup_large_graphic_colour_window_ParamLimits

0x582d,	// (0x000104e9) popup_toolbar_window_ParamLimits

0x582d,	// (0x000104e9) popup_toolbar_window

0xaae7,	// (0x000157a3) list_single_graphic_2heading_pane_ParamLimits

0xaae7,	// (0x000157a3) list_single_graphic_2heading_pane

0x81cd,	// (0x00012e89) aid_size_cell_apps_grid_lsc_pane

0x81df,	// (0x00012e9b) aid_size_cell_apps_grid_prt_pane

0x8ead,	// (0x00013b69) bg_wml_button_pane_cp1_ParamLimits

0x8ead,	// (0x00013b69) bg_wml_button_pane_cp1

0x974e,	// (0x0001440a) form_midp_field_text_pane_t1_ParamLimits

0x950f,	// (0x000141cb) input_focus_pane_cp050_ParamLimits

0x9785,	// (0x00014441) list_midp_form_text_pane_ParamLimits

0x972b,	// (0x000143e7) input_focus_pane_cp051_ParamLimits

0x973f,	// (0x000143fb) list_midp_choice_pane_ParamLimits

0x95c8,	// (0x00014284) list_single_2graphic_pane_cp3_ParamLimits

0x95c8,	// (0x00014284) list_single_2graphic_pane_cp3

0x95e9,	// (0x000142a5) list_single_midp_graphic_pane_ParamLimits

0x95e9,	// (0x000142a5) list_single_midp_graphic_pane

0x58da,	// (0x00010596) list_single_graphic_2heading_pane_g1_ParamLimits

0x58da,	// (0x00010596) list_single_graphic_2heading_pane_g1

0x58e6,	// (0x000105a2) list_single_graphic_2heading_pane_g4_ParamLimits

0x58e6,	// (0x000105a2) list_single_graphic_2heading_pane_g4

0x58f2,	// (0x000105ae) list_single_graphic_2heading_pane_g5_ParamLimits

0x58f2,	// (0x000105ae) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0001a467) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0001a467) list_single_graphic_2heading_pane_g

0x58fe,	// (0x000105ba) list_single_graphic_2heading_pane_t1_ParamLimits

0x58fe,	// (0x000105ba) list_single_graphic_2heading_pane_t1

0x5912,	// (0x000105ce) list_single_graphic_2heading_pane_t2_ParamLimits

0x5912,	// (0x000105ce) list_single_graphic_2heading_pane_t2

0x592e,	// (0x000105ea) list_single_graphic_2heading_pane_t3_ParamLimits

0x592e,	// (0x000105ea) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0001a46e) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0001a46e) list_single_graphic_2heading_pane_t

0x92fd,	// (0x00013fb9) bg_popup_sub_pane_cp2

0x9327,	// (0x00013fe3) grid_toobar_pane

0x5946,	// (0x00010602) cell_toolbar_pane_ParamLimits

0x5946,	// (0x00010602) cell_toolbar_pane

0x9391,	// (0x0001404d) cell_toolbar_pane_g1_ParamLimits

0x9391,	// (0x0001404d) cell_toolbar_pane_g1

0x93a5,	// (0x00014061) cell_toolbar_pane_g2_ParamLimits

0x93a5,	// (0x00014061) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0001a47c) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0001a47c) cell_toolbar_pane_g

0x93c7,	// (0x00014083) grid_highlight_pane_cp2_ParamLimits

0x93c7,	// (0x00014083) grid_highlight_pane_cp2

0x93e1,	// (0x0001409d) toolbar_button_pane

0x93ed,	// (0x000140a9) toolbar_button_pane_g1

0x93f5,	// (0x000140b1) toolbar_button_pane_g2

0x93fd,	// (0x000140b9) toolbar_button_pane_g3

0x9405,	// (0x000140c1) toolbar_button_pane_g4

0x940d,	// (0x000140c9) toolbar_button_pane_g5

0x9415,	// (0x000140d1) toolbar_button_pane_g6

0x941d,	// (0x000140d9) toolbar_button_pane_g7

0x9425,	// (0x000140e1) toolbar_button_pane_g8

0x942d,	// (0x000140e9) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0001a481) toolbar_button_pane_g

0x597e,	// (0x0001063a) list_single_2graphic_pane_g1_cp3_ParamLimits

0x597e,	// (0x0001063a) list_single_2graphic_pane_g1_cp3

0x598a,	// (0x00010646) list_single_2graphic_pane_g2_cp3_ParamLimits

0x598a,	// (0x00010646) list_single_2graphic_pane_g2_cp3

0x599b,	// (0x00010657) list_single_2graphic_pane_g3_cp3

0x59a3,	// (0x0001065f) list_single_2graphic_pane_g4_cp3_ParamLimits

0x59a3,	// (0x0001065f) list_single_2graphic_pane_g4_cp3

0x59af,	// (0x0001066b) list_single_2graphic_pane_t1_cp3_ParamLimits

0x59af,	// (0x0001066b) list_single_2graphic_pane_t1_cp3

0x59cb,	// (0x00010687) list_single_midp_graphic_pane_g2_ParamLimits

0x59cb,	// (0x00010687) list_single_midp_graphic_pane_g2

0x5303,	// (0x0000ffbf) aid_zoom_text_primary

0x530b,	// (0x0000ffc7) aid_zoom_text_secondary

0x8dc4,	// (0x00013a80) status_small_pane_g7_ParamLimits

0x8dc4,	// (0x00013a80) status_small_pane_g7

0x8de7,	// (0x00013aa3) status_small_pane_t1_ParamLimits

0x6dec,	// (0x00011aa8) title_pane_g2

0x0003,

0xf54e,	// (0x0001a20a) title_pane_g

0x734d,	// (0x00012009) aid_size_cell_colour_1_pane_ParamLimits

0x734d,	// (0x00012009) aid_size_cell_colour_1_pane

0x7361,	// (0x0001201d) aid_size_cell_colour_2_pane_ParamLimits

0x7361,	// (0x0001201d) aid_size_cell_colour_2_pane

0x7375,	// (0x00012031) aid_size_cell_colour_3_pane_ParamLimits

0x7375,	// (0x00012031) aid_size_cell_colour_3_pane

0x7389,	// (0x00012045) aid_size_cell_colour_4_pane_ParamLimits

0x7389,	// (0x00012045) aid_size_cell_colour_4_pane

0x4d51,	// (0x0000fa0d) title_pane_stacon_g1_ParamLimits

0x4d51,	// (0x0000fa0d) title_pane_stacon_g1

0x9b79,	// (0x00014835) popup_note_wait_window_g3_ParamLimits

0x9b79,	// (0x00014835) popup_note_wait_window_g3

0x9bef,	// (0x000148ab) popup_note_wait_window_t5_ParamLimits

0x9bef,	// (0x000148ab) popup_note_wait_window_t5

0x6dd5,	// (0x00011a91) main_feb_china_hwr_fs_writing_pane

0x53a9,	// (0x00010065) popup_feb_china_hwr_fs_window_ParamLimits

0x53a9,	// (0x00010065) popup_feb_china_hwr_fs_window

0x59ed,	// (0x000106a9) aid_size_cell_hwr_fs_ParamLimits

0x59ed,	// (0x000106a9) aid_size_cell_hwr_fs

0x950f,	// (0x000141cb) bg_popup_sub_pane_cp3_ParamLimits

0x950f,	// (0x000141cb) bg_popup_sub_pane_cp3

0x5a02,	// (0x000106be) grid_hwr_fs_pane_ParamLimits

0x5a02,	// (0x000106be) grid_hwr_fs_pane

0x5a1a,	// (0x000106d6) linegrid_hwr_fs_pane_ParamLimits

0x5a1a,	// (0x000106d6) linegrid_hwr_fs_pane

0x5a2a,	// (0x000106e6) cell_hwr_fs_pane_ParamLimits

0x5a2a,	// (0x000106e6) cell_hwr_fs_pane

0x951b,	// (0x000141d7) linegrid_hwr_fs_pane_g1_ParamLimits

0x951b,	// (0x000141d7) linegrid_hwr_fs_pane_g1

0x9527,	// (0x000141e3) linegrid_hwr_fs_pane_g2_ParamLimits

0x9527,	// (0x000141e3) linegrid_hwr_fs_pane_g2

0x9539,	// (0x000141f5) linegrid_hwr_fs_pane_g3_ParamLimits

0x9539,	// (0x000141f5) linegrid_hwr_fs_pane_g3

0x5a4c,	// (0x00010708) linegrid_hwr_fs_pane_g4_ParamLimits

0x5a4c,	// (0x00010708) linegrid_hwr_fs_pane_g4

0x5a66,	// (0x00010722) linegrid_hwr_fs_pane_g5_ParamLimits

0x5a66,	// (0x00010722) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0001a4ac) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0001a4ac) linegrid_hwr_fs_pane_g

0x9545,	// (0x00014201) cell_hwr_fs_pane_g1_ParamLimits

0x9545,	// (0x00014201) cell_hwr_fs_pane_g1

0x9234,	// (0x00013ef0) cell_hwr_fs_pane_g2_ParamLimits

0x9234,	// (0x00013ef0) cell_hwr_fs_pane_g2

0x955b,	// (0x00014217) cell_hwr_fs_pane_g3_ParamLimits

0x955b,	// (0x00014217) cell_hwr_fs_pane_g3

0x9568,	// (0x00014224) cell_hwr_fs_pane_g4_ParamLimits

0x9568,	// (0x00014224) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0001a4b7) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0001a4b7) cell_hwr_fs_pane_g

0x5a7c,	// (0x00010738) cell_hwr_fs_pane_t1

0x6dd5,	// (0x00011a91) grid_highlight_pane_cp6

0x6dd5,	// (0x00011a91) main_idle_act2_pane

0x7f84,	// (0x00012c40) aid_inside_area_popup_secondary

0xa232,	// (0x00014eee) aid_inside_area_window_primary_ParamLimits

0xa232,	// (0x00014eee) aid_inside_area_window_primary

0xaeb6,	// (0x00015b72) ai2_news_ticker_pane

0xaebe,	// (0x00015b7a) aid_size_cell_ai1_link_ParamLimits

0xaebe,	// (0x00015b7a) aid_size_cell_ai1_link

0xaed8,	// (0x00015b94) popup_ai2_data_window_ParamLimits

0xaed8,	// (0x00015b94) popup_ai2_data_window

0xaeee,	// (0x00015baa) popup_ai2_link_window_ParamLimits

0xaeee,	// (0x00015baa) popup_ai2_link_window

0x950f,	// (0x000141cb) bg_popup_sub_pane_cp4_ParamLimits

0x950f,	// (0x000141cb) bg_popup_sub_pane_cp4

0xaf02,	// (0x00015bbe) grid_ai2_link_pane_ParamLimits

0xaf02,	// (0x00015bbe) grid_ai2_link_pane

0xaf19,	// (0x00015bd5) popup_ai2_link_window_g1_ParamLimits

0xaf19,	// (0x00015bd5) popup_ai2_link_window_g1

0xaf25,	// (0x00015be1) popup_ai2_link_window_g2_ParamLimits

0xaf25,	// (0x00015be1) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0001a68a) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0001a68a) popup_ai2_link_window_g

0xaf34,	// (0x00015bf0) ai2_mp_button_pane

0xaf3c,	// (0x00015bf8) ai2_mp_volume_pane

0x972b,	// (0x000143e7) bg_popup_sub_pane_cp5_ParamLimits

0x972b,	// (0x000143e7) bg_popup_sub_pane_cp5

0xaf44,	// (0x00015c00) heading_ai2_gene_pane_ParamLimits

0xaf44,	// (0x00015c00) heading_ai2_gene_pane

0xaf50,	// (0x00015c0c) list_ai2_gene_pane_ParamLimits

0xaf50,	// (0x00015c0c) list_ai2_gene_pane

0xaf98,	// (0x00015c54) cell_ai2_link_pane_ParamLimits

0xaf98,	// (0x00015c54) cell_ai2_link_pane

0xafae,	// (0x00015c6a) cell_ai2_link_pane_g1

0x6dd5,	// (0x00011a91) grid_highlight_pane_cp7

0x5d6e,	// (0x00010a2a) ai2_mp_volume_pane_g1

0xb07e,	// (0x00015d3a) ai2_mp_volume_pane_g2

0xaff3,	// (0x00015caf) list_ai2_gene_pane_t1

0xb086,	// (0x00015d42) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0001a6a3) ai2_mp_volume_pane_g

0x5d76,	// (0x00010a32) volume_small_pane_cp3

0xb08e,	// (0x00015d4a) aid_size_cell_ai2_button

0xb096,	// (0x00015d52) grid_ai2_button_pane

0xb09f,	// (0x00015d5b) cell_ai2_button_pane_ParamLimits

0xb09f,	// (0x00015d5b) cell_ai2_button_pane

0x6dcb,	// (0x00011a87) cell_ai2_button_pane_g1

0x6dd5,	// (0x00011a91) grid_highlight_pane_cp8

0xb03e,	// (0x00015cfa) ai2_gene_pane_t1_ParamLimits

0xb03e,	// (0x00015cfa) ai2_gene_pane_t1

0x52f1,	// (0x0000ffad) aid_height_parent_landscape

0xa8d0,	// (0x0001558c) aid_height_set_list

0xa8e1,	// (0x0001559d) aid_size_parent

0xacd9,	// (0x00015995) aid_size_cell_graphic_pane_ParamLimits

0xaf60,	// (0x00015c1c) popup_ai2_data_window_g1_ParamLimits

0xaf60,	// (0x00015c1c) popup_ai2_data_window_g1

0xaf6c,	// (0x00015c28) ai2_news_ticker_pane_g1

0xaf74,	// (0x00015c30) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0001a68f) ai2_news_ticker_pane_g

0xaf7c,	// (0x00015c38) ai2_news_ticker_pane_t1

0xaf8a,	// (0x00015c46) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0001a694) ai2_news_ticker_pane_t

0xafb7,	// (0x00015c73) heading_ai2_gene_pane_g1

0xafbf,	// (0x00015c7b) heading_ai2_gene_pane_t1_ParamLimits

0xafbf,	// (0x00015c7b) heading_ai2_gene_pane_t1

0xafd4,	// (0x00015c90) list_highlight_pane_cp6

0xafdc,	// (0x00015c98) ai2_gene_pane_ParamLimits

0xafdc,	// (0x00015c98) ai2_gene_pane

0xb001,	// (0x00015cbd) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0001a699) list_ai2_gene_pane_t

0xb00f,	// (0x00015ccb) list_highlight_pane_cp8_ParamLimits

0xb00f,	// (0x00015ccb) list_highlight_pane_cp8

0xb020,	// (0x00015cdc) ai2_gene_pane_g1_ParamLimits

0xb020,	// (0x00015cdc) ai2_gene_pane_g1

0xb032,	// (0x00015cee) ai2_gene_pane_g2_ParamLimits

0xb032,	// (0x00015cee) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0001a69e) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0001a69e) ai2_gene_pane_g

0x76d4,	// (0x00012390) scroll_pane_cp12

0x52ae,	// (0x0000ff6a) control_pane_t3_ParamLimits

0x52ae,	// (0x0000ff6a) control_pane_t3

0x8dd8,	// (0x00013a94) status_small_pane_g8_ParamLimits

0x8dd8,	// (0x00013a94) status_small_pane_g8

0x548f,	// (0x0001014b) popup_find_window_ParamLimits

0x56a4,	// (0x00010360) popup_note_image_window_ParamLimits

0x9363,	// (0x0001401f) list_double2_graphic_pane_vc_g1_ParamLimits

0x9363,	// (0x0001401f) list_double2_graphic_pane_vc_g1

0x8a8f,	// (0x0001374b) list_double2_graphic_pane_vc_g2_ParamLimits

0x8a8f,	// (0x0001374b) list_double2_graphic_pane_vc_g2

0x936f,	// (0x0001402b) list_double2_graphic_pane_vc_g3_ParamLimits

0x936f,	// (0x0001402b) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0001a475) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001a475) list_double2_graphic_pane_vc_g

0x937b,	// (0x00014037) list_double2_graphic_pane_vc_t1_ParamLimits

0x937b,	// (0x00014037) list_double2_graphic_pane_vc_t1

0x8a8f,	// (0x0001374b) list_single_heading_pane_vc_g1_ParamLimits

0x8a8f,	// (0x0001374b) list_single_heading_pane_vc_g1

0x936f,	// (0x0001402b) list_single_heading_pane_vc_g2_ParamLimits

0x936f,	// (0x0001402b) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a496) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a496) list_single_heading_pane_vc_g

0x9435,	// (0x000140f1) list_single_heading_pane_vc_t1_ParamLimits

0x9435,	// (0x000140f1) list_single_heading_pane_vc_t1

0x944b,	// (0x00014107) list_single_heading_pane_vc_t2_ParamLimits

0x944b,	// (0x00014107) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0001a49b) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0001a49b) list_single_heading_pane_vc_t

0x945d,	// (0x00014119) list_setting_number_pane_vc_g1_ParamLimits

0x945d,	// (0x00014119) list_setting_number_pane_vc_g1

0x9469,	// (0x00014125) list_setting_number_pane_vc_g2_ParamLimits

0x9469,	// (0x00014125) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0001a4a0) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0001a4a0) list_setting_number_pane_vc_g

0x9475,	// (0x00014131) list_setting_number_pane_vc_t1_ParamLimits

0x9475,	// (0x00014131) list_setting_number_pane_vc_t1

0x9489,	// (0x00014145) list_setting_number_pane_vc_t2_ParamLimits

0x9489,	// (0x00014145) list_setting_number_pane_vc_t2

0x94a5,	// (0x00014161) list_setting_number_pane_vc_t3_ParamLimits

0x94a5,	// (0x00014161) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0001a4a5) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0001a4a5) list_setting_number_pane_vc_t

0x94d3,	// (0x0001418f) set_value_pane_vc_ParamLimits

0x94d3,	// (0x0001418f) set_value_pane_vc

0xaae7,	// (0x000157a3) list_double2_graphic_pane_vc_ParamLimits

0xaae7,	// (0x000157a3) list_double2_graphic_pane_vc

0xaae7,	// (0x000157a3) list_double2_large_graphic_pane_vc_ParamLimits

0xaae7,	// (0x000157a3) list_double2_large_graphic_pane_vc

0xaae7,	// (0x000157a3) list_double2_pane_vc_ParamLimits

0xaae7,	// (0x000157a3) list_double2_pane_vc

0xaae7,	// (0x000157a3) list_double_graphic_heading_pane_vc_ParamLimits

0xaae7,	// (0x000157a3) list_double_graphic_heading_pane_vc

0xaae7,	// (0x000157a3) list_double_graphic_pane_vc_ParamLimits

0xaae7,	// (0x000157a3) list_double_graphic_pane_vc

0xaae7,	// (0x000157a3) list_double_heading_pane_vc_ParamLimits

0xaae7,	// (0x000157a3) list_double_heading_pane_vc

0xaaf9,	// (0x000157b5) list_double_large_graphic_pane_vc_ParamLimits

0xaaf9,	// (0x000157b5) list_double_large_graphic_pane_vc

0xaae7,	// (0x000157a3) list_double_number_pane_vc_ParamLimits

0xaae7,	// (0x000157a3) list_double_number_pane_vc

0xaae7,	// (0x000157a3) list_double_pane_vc_ParamLimits

0xaae7,	// (0x000157a3) list_double_pane_vc

0xaae7,	// (0x000157a3) list_double_time_pane_vc_ParamLimits

0xaae7,	// (0x000157a3) list_double_time_pane_vc

0xaae7,	// (0x000157a3) list_setting_number_pane_vc_ParamLimits

0xaae7,	// (0x000157a3) list_setting_number_pane_vc

0xaae7,	// (0x000157a3) list_setting_pane_vc_ParamLimits

0xaae7,	// (0x000157a3) list_setting_pane_vc

0xaae7,	// (0x000157a3) list_single_graphic_heading_pane_vc_ParamLimits

0xaae7,	// (0x000157a3) list_single_graphic_heading_pane_vc

0xaae7,	// (0x000157a3) list_single_heading_pane_vc_ParamLimits

0xaae7,	// (0x000157a3) list_single_heading_pane_vc

0xab17,	// (0x000157d3) list_single_number_heading_pane_vc_ParamLimits

0xab17,	// (0x000157d3) list_single_number_heading_pane_vc

0x9363,	// (0x0001401f) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x9363,	// (0x0001401f) list_double_graphic_heading_pane_vc_g1

0xb0d3,	// (0x00015d8f) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xb0d3,	// (0x00015d8f) list_double_graphic_heading_pane_vc_g2

0xb0df,	// (0x00015d9b) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xb0df,	// (0x00015d9b) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x0001a6aa) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x0001a6aa) list_double_graphic_heading_pane_vc_g

0xb0eb,	// (0x00015da7) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xb0eb,	// (0x00015da7) list_double_graphic_heading_pane_vc_t1

0xb107,	// (0x00015dc3) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xb107,	// (0x00015dc3) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x0001a6b1) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x0001a6b1) list_double_graphic_heading_pane_vc_t

0x945d,	// (0x00014119) list_setting_pane_vc_g1_ParamLimits

0x945d,	// (0x00014119) list_setting_pane_vc_g1

0x9469,	// (0x00014125) list_setting_pane_vc_g2_ParamLimits

0x9469,	// (0x00014125) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0001a4a0) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0001a4a0) list_setting_pane_vc_g

0xb332,	// (0x00015fee) list_setting_pane_vc_t1_ParamLimits

0xb332,	// (0x00015fee) list_setting_pane_vc_t1

0xb34e,	// (0x0001600a) list_setting_pane_vc_t2_ParamLimits

0xb34e,	// (0x0001600a) list_setting_pane_vc_t2

0x0001,

0xfa23,	// (0x0001a6df) list_setting_pane_vc_t_ParamLimits

0xfa23,	// (0x0001a6df) list_setting_pane_vc_t

0x94d3,	// (0x0001418f) set_value_pane_cp_vc_ParamLimits

0x94d3,	// (0x0001418f) set_value_pane_cp_vc

0x8a8f,	// (0x0001374b) list_single_number_heading_pane_vc_g1_ParamLimits

0x8a8f,	// (0x0001374b) list_single_number_heading_pane_vc_g1

0x936f,	// (0x0001402b) list_single_number_heading_pane_vc_g2_ParamLimits

0x936f,	// (0x0001402b) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a496) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a496) list_single_number_heading_pane_vc_g

0xb36a,	// (0x00016026) list_single_number_heading_pane_vc_t1_ParamLimits

0xb36a,	// (0x00016026) list_single_number_heading_pane_vc_t1

0xb380,	// (0x0001603c) list_single_number_heading_pane_vc_t2_ParamLimits

0xb380,	// (0x0001603c) list_single_number_heading_pane_vc_t2

0xb392,	// (0x0001604e) list_single_number_heading_pane_vc_t3_ParamLimits

0xb392,	// (0x0001604e) list_single_number_heading_pane_vc_t3

0x0002,

0xfa28,	// (0x0001a6e4) list_single_number_heading_pane_vc_t_ParamLimits

0xfa28,	// (0x0001a6e4) list_single_number_heading_pane_vc_t

0x9363,	// (0x0001401f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x9363,	// (0x0001401f) list_single_graphic_heading_pane_vc_g1

0x8a8f,	// (0x0001374b) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8a8f,	// (0x0001374b) list_single_graphic_heading_pane_vc_g4

0x936f,	// (0x0001402b) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x936f,	// (0x0001402b) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x0001a475) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001a475) list_single_graphic_heading_pane_vc_g

0xb3a4,	// (0x00016060) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xb3a4,	// (0x00016060) list_single_graphic_heading_pane_vc_t1

0xb3ba,	// (0x00016076) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb3ba,	// (0x00016076) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2f,	// (0x0001a6eb) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2f,	// (0x0001a6eb) list_single_graphic_heading_pane_vc_t

0x8a8f,	// (0x0001374b) list_double2_pane_vc_g1_ParamLimits

0x8a8f,	// (0x0001374b) list_double2_pane_vc_g1

0x936f,	// (0x0001402b) list_double2_pane_vc_g2_ParamLimits

0x936f,	// (0x0001402b) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a496) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a496) list_double2_pane_vc_g

0xb3cc,	// (0x00016088) list_double2_pane_vc_t1_ParamLimits

0xb3cc,	// (0x00016088) list_double2_pane_vc_t1

0xb3e2,	// (0x0001609e) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb3e2,	// (0x0001609e) list_double2_large_graphic_pane_vc_g1

0x8a8f,	// (0x0001374b) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8a8f,	// (0x0001374b) list_double2_large_graphic_pane_vc_g2

0x936f,	// (0x0001402b) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x936f,	// (0x0001402b) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa34,	// (0x0001a6f0) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa34,	// (0x0001a6f0) list_double2_large_graphic_pane_vc_g

0xb3ee,	// (0x000160aa) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb3ee,	// (0x000160aa) list_double2_large_graphic_pane_vc_t1

0xb404,	// (0x000160c0) list_double_time_pane_vc_g1_ParamLimits

0xb404,	// (0x000160c0) list_double_time_pane_vc_g1

0xb410,	// (0x000160cc) list_double_time_pane_vc_g2_ParamLimits

0xb410,	// (0x000160cc) list_double_time_pane_vc_g2

0x0001,

0xfa3b,	// (0x0001a6f7) list_double_time_pane_vc_g_ParamLimits

0xfa3b,	// (0x0001a6f7) list_double_time_pane_vc_g

0xb41c,	// (0x000160d8) list_double_time_pane_vc_t1_ParamLimits

0xb41c,	// (0x000160d8) list_double_time_pane_vc_t1

0xb440,	// (0x000160fc) list_double_time_pane_vc_t2_ParamLimits

0xb440,	// (0x000160fc) list_double_time_pane_vc_t2

0xb46f,	// (0x0001612b) list_double_time_pane_vc_t3_ParamLimits

0xb46f,	// (0x0001612b) list_double_time_pane_vc_t3

0xb481,	// (0x0001613d) list_double_time_pane_vc_t4_ParamLimits

0xb481,	// (0x0001613d) list_double_time_pane_vc_t4

0x0003,

0xfa40,	// (0x0001a6fc) list_double_time_pane_vc_t_ParamLimits

0xfa40,	// (0x0001a6fc) list_double_time_pane_vc_t

0x8a8f,	// (0x0001374b) list_double_pane_vc_g1_ParamLimits

0x8a8f,	// (0x0001374b) list_double_pane_vc_g1

0x936f,	// (0x0001402b) list_double_pane_vc_g2_ParamLimits

0x936f,	// (0x0001402b) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a496) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a496) list_double_pane_vc_g

0xb495,	// (0x00016151) list_double_pane_vc_t1_ParamLimits

0xb495,	// (0x00016151) list_double_pane_vc_t1

0xb4a9,	// (0x00016165) list_double_pane_vc_t2_ParamLimits

0xb4a9,	// (0x00016165) list_double_pane_vc_t2

0x0001,

0xfa49,	// (0x0001a705) list_double_pane_vc_t_ParamLimits

0xfa49,	// (0x0001a705) list_double_pane_vc_t

0x8a8f,	// (0x0001374b) list_double_number_pane_vc_g1_ParamLimits

0x8a8f,	// (0x0001374b) list_double_number_pane_vc_g1

0x936f,	// (0x0001402b) list_double_number_pane_vc_g2_ParamLimits

0x936f,	// (0x0001402b) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a496) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a496) list_double_number_pane_vc_g

0xb4c1,	// (0x0001617d) list_double_number_pane_vc_t1_ParamLimits

0xb4c1,	// (0x0001617d) list_double_number_pane_vc_t1

0xb4d3,	// (0x0001618f) list_double_number_pane_vc_t2_ParamLimits

0xb4d3,	// (0x0001618f) list_double_number_pane_vc_t2

0xb4e7,	// (0x000161a3) list_double_number_pane_vc_t3_ParamLimits

0xb4e7,	// (0x000161a3) list_double_number_pane_vc_t3

0x0002,

0xfa4e,	// (0x0001a70a) list_double_number_pane_vc_t_ParamLimits

0xfa4e,	// (0x0001a70a) list_double_number_pane_vc_t

0xb4ff,	// (0x000161bb) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb4ff,	// (0x000161bb) list_double_large_graphic_pane_vc_g1

0xb521,	// (0x000161dd) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb521,	// (0x000161dd) list_double_large_graphic_pane_vc_g2

0xb535,	// (0x000161f1) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb535,	// (0x000161f1) list_double_large_graphic_pane_vc_g3

0xb544,	// (0x00016200) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb544,	// (0x00016200) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa55,	// (0x0001a711) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x0001a711) list_double_large_graphic_pane_vc_g

0xb550,	// (0x0001620c) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb550,	// (0x0001620c) list_double_large_graphic_pane_vc_t1

0xb56c,	// (0x00016228) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb56c,	// (0x00016228) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x0001a71a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x0001a71a) list_double_large_graphic_pane_vc_t

0xb0d3,	// (0x00015d8f) list_double_heading_pane_vc_g1_ParamLimits

0xb0d3,	// (0x00015d8f) list_double_heading_pane_vc_g1

0xb0df,	// (0x00015d9b) list_double_heading_pane_vc_g2_ParamLimits

0xb0df,	// (0x00015d9b) list_double_heading_pane_vc_g2

0x0001,

0xfa63,	// (0x0001a71f) list_double_heading_pane_vc_g_ParamLimits

0xfa63,	// (0x0001a71f) list_double_heading_pane_vc_g

0xb58e,	// (0x0001624a) list_double_heading_pane_vc_t1_ParamLimits

0xb58e,	// (0x0001624a) list_double_heading_pane_vc_t1

0xb5a2,	// (0x0001625e) list_double_heading_pane_vc_t2_ParamLimits

0xb5a2,	// (0x0001625e) list_double_heading_pane_vc_t2

0x0001,

0xfa68,	// (0x0001a724) list_double_heading_pane_vc_t_ParamLimits

0xfa68,	// (0x0001a724) list_double_heading_pane_vc_t

0xb5ba,	// (0x00016276) list_double_graphic_pane_vc_g1_ParamLimits

0xb5ba,	// (0x00016276) list_double_graphic_pane_vc_g1

0xb5c6,	// (0x00016282) list_double_graphic_pane_vc_g2_ParamLimits

0xb5c6,	// (0x00016282) list_double_graphic_pane_vc_g2

0x8a8f,	// (0x0001374b) list_double_graphic_pane_vc_g3_ParamLimits

0x8a8f,	// (0x0001374b) list_double_graphic_pane_vc_g3

0x0003,

0xfa6d,	// (0x0001a729) list_double_graphic_pane_vc_g_ParamLimits

0xfa6d,	// (0x0001a729) list_double_graphic_pane_vc_g

0xb5e3,	// (0x0001629f) list_double_graphic_pane_vc_t1_ParamLimits

0xb5e3,	// (0x0001629f) list_double_graphic_pane_vc_t1

0xb60d,	// (0x000162c9) list_double_graphic_pane_vc_t2_ParamLimits

0xb60d,	// (0x000162c9) list_double_graphic_pane_vc_t2

0x0001,

0xfa76,	// (0x0001a732) list_double_graphic_pane_vc_t_ParamLimits

0xfa76,	// (0x0001a732) list_double_graphic_pane_vc_t

0x48a4,	// (0x0000f560) aid_size_cell_fastswap

0x48ac,	// (0x0000f568) aid_size_cell_touch_ParamLimits

0x48ac,	// (0x0000f568) aid_size_cell_touch

0x4b11,	// (0x0000f7cd) popup_fast_swap_wide_window_ParamLimits

0x4b11,	// (0x0000f7cd) popup_fast_swap_wide_window

0x4c25,	// (0x0000f8e1) touch_pane_ParamLimits

0x4c25,	// (0x0000f8e1) touch_pane

0x7bd3,	// (0x0001288f) button_value_adjust_pane_cp2

0x7bdb,	// (0x00012897) button_value_adjust_pane_cp4

0x7bfd,	// (0x000128b9) form_field_data_pane_cp2

0x7c1e,	// (0x000128da) form_field_data_wide_pane_cp2

0x829e,	// (0x00012f5a) bg_scroll_pane_ParamLimits

0x4eb3,	// (0x0000fb6f) scroll_handle_pane_ParamLimits

0x4ec7,	// (0x0000fb83) scroll_sc2_down_pane_ParamLimits

0x4ec7,	// (0x0000fb83) scroll_sc2_down_pane

0x82cf,	// (0x00012f8b) scroll_sc2_up_pane_ParamLimits

0x82cf,	// (0x00012f8b) scroll_sc2_up_pane

0xbab4,	// (0x00016770) grid_wheel_folder_pane_g1_ParamLimits

0xbab4,	// (0x00016770) grid_wheel_folder_pane_g1

0x508c,	// (0x0000fd48) clock_nsta_pane_cp2_ParamLimits

0x508c,	// (0x0000fd48) clock_nsta_pane_cp2

0x8b5e,	// (0x0001381a) listscroll_midp_pane_ParamLimits

0x8b6a,	// (0x00013826) midp_canvas_pane

0x8e52,	// (0x00013b0e) nsta_clock_indic_pane

0x8e93,	// (0x00013b4f) listscroll_form_pane_vc

0x8e9b,	// (0x00013b57) listscroll_set_pane_vc_ParamLimits

0x8e9b,	// (0x00013b57) listscroll_set_pane_vc

0x8fa8,	// (0x00013c64) clock_nsta_pane

0x901d,	// (0x00013cd9) indicator_nsta_pane

0x92fd,	// (0x00013fb9) bg_popup_sub_pane_cp2_ParamLimits

0x9311,	// (0x00013fcd) find_pane_cp2_ParamLimits

0x9311,	// (0x00013fcd) find_pane_cp2

0x9327,	// (0x00013fe3) grid_toobar_pane_ParamLimits

0x94e3,	// (0x0001419f) list_form_gen_pane_vc_ParamLimits

0x94e3,	// (0x0001419f) list_form_gen_pane_vc

0x94f9,	// (0x000141b5) scroll_pane_cp8_vc_ParamLimits

0x94f9,	// (0x000141b5) scroll_pane_cp8_vc

0x9575,	// (0x00014231) data_form_wide_pane_vc_ParamLimits

0x9575,	// (0x00014231) data_form_wide_pane_vc

0x9581,	// (0x0001423d) form_field_data_wide_pane_vc_g1

0x9589,	// (0x00014245) form_field_data_wide_pane_vc_t1_ParamLimits

0x9589,	// (0x00014245) form_field_data_wide_pane_vc_t1

0x7cb9,	// (0x00012975) input_focus_pane_cp6_vc_ParamLimits

0x7cb9,	// (0x00012975) input_focus_pane_cp6_vc

0x98ec,	// (0x000145a8) list_midp_pane_ParamLimits

0x98f8,	// (0x000145b4) scroll_pane_cp16_ParamLimits

0x98f8,	// (0x000145b4) scroll_pane_cp16

0x994e,	// (0x0001460a) button_value_adjust_pane_ParamLimits

0x994e,	// (0x0001460a) button_value_adjust_pane

0xa8f3,	// (0x000155af) button_value_adjust_pane_cp6_ParamLimits

0xa8f3,	// (0x000155af) button_value_adjust_pane_cp6

0xaa1d,	// (0x000156d9) settings_code_pane_cp_ParamLimits

0xaa1d,	// (0x000156d9) settings_code_pane_cp

0x6dcb,	// (0x00011a87) cell_touch_pane_g1

0x6dcb,	// (0x00011a87) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0001a3ba) cell_touch_pane_g

0xb0b1,	// (0x00015d6d) cell_touch_pane_cp_ParamLimits

0xb0b1,	// (0x00015d6d) cell_touch_pane_cp

0xb0c1,	// (0x00015d7d) cell_touch_pane_ParamLimits

0xb0c1,	// (0x00015d7d) cell_touch_pane

0x6dcb,	// (0x00011a87) scroll_sc2_down_pane_g1

0x6dcb,	// (0x00011a87) scroll_sc2_up_pane_g1

0x6dd5,	// (0x00011a91) bg_set_opt_pane_cp4_vc

0xb125,	// (0x00015de1) list_set_graphic_pane_vc_g1_ParamLimits

0xb125,	// (0x00015de1) list_set_graphic_pane_vc_g1

0xb131,	// (0x00015ded) list_set_graphic_pane_vc_g2_ParamLimits

0xb131,	// (0x00015ded) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x0001a6b6) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x0001a6b6) list_set_graphic_pane_vc_g

0xb13d,	// (0x00015df9) text_primary_small_cp13_vc_ParamLimits

0xb13d,	// (0x00015df9) text_primary_small_cp13_vc

0xb155,	// (0x00015e11) list_set_graphic_pane_vc_ParamLimits

0xb155,	// (0x00015e11) list_set_graphic_pane_vc

0x6dd5,	// (0x00011a91) input_focus_pane_cp2_vc

0x6dcb,	// (0x00011a87) setting_code_pane_vc_g1

0x6f00,	// (0x00011bbc) setting_code_pane_vc_t1

0xb167,	// (0x00015e23) set_text_pane_vc_t1_ParamLimits

0xb167,	// (0x00015e23) set_text_pane_vc_t1

0x6dd5,	// (0x00011a91) input_focus_pane_cp1_vc

0xb183,	// (0x00015e3f) list_set_text_pane_vc

0x6dcb,	// (0x00011a87) setting_text_pane_vc_g1

0x6dd5,	// (0x00011a91) bg_set_opt_pane_cp2_vc

0x6ef7,	// (0x00011bb3) setting_slider_graphic_pane_vc_g1

0xb18d,	// (0x00015e49) setting_slider_graphic_pane_vc_t1

0xb19d,	// (0x00015e59) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x0001a6bb) setting_slider_graphic_pane_vc_t

0xb1ad,	// (0x00015e69) slider_set_pane_cp_vc

0xb1b5,	// (0x00015e71) slider_set_pane_vc_g1

0xb1be,	// (0x00015e7a) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x0001a6c0) slider_set_pane_vc_g

0x7ddc,	// (0x00012a98) set_opt_bg_pane_g1_copy1

0x7de4,	// (0x00012aa0) set_opt_bg_pane_g2_copy1

0xb1ea,	// (0x00015ea6) set_opt_bg_pane_g3_copy1

0x7df4,	// (0x00012ab0) set_opt_bg_pane_g4_copy1

0x7dfc,	// (0x00012ab8) set_opt_bg_pane_g5_copy1

0x7e04,	// (0x00012ac0) set_opt_bg_pane_g6_copy1

0xb1f4,	// (0x00015eb0) set_opt_bg_pane_g7_copy1

0xb1fc,	// (0x00015eb8) set_opt_bg_pane_g8_copy1

0xb206,	// (0x00015ec2) set_opt_bg_pane_g9_copy1

0x6dd5,	// (0x00011a91) bg_set_opt_pane_cp_vc

0xb210,	// (0x00015ecc) setting_slider_pane_vc_t1

0xb21f,	// (0x00015edb) setting_slider_pane_vc_t2

0xb22f,	// (0x00015eeb) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x0001a6cf) setting_slider_pane_vc_t

0xb23f,	// (0x00015efb) slider_set_pane_vc

0x5a8a,	// (0x00010746) volume_set_pane_vc_g1

0x5a93,	// (0x0001074f) volume_set_pane_vc_g2

0x5a9c,	// (0x00010758) volume_set_pane_vc_g3

0x5aa5,	// (0x00010761) volume_set_pane_vc_g4

0x5aae,	// (0x0001076a) volume_set_pane_vc_g5

0x5ab7,	// (0x00010773) volume_set_pane_vc_g6

0x5ac0,	// (0x0001077c) volume_set_pane_vc_g7

0x5ac9,	// (0x00010785) volume_set_pane_vc_g8

0x5ad2,	// (0x0001078e) volume_set_pane_vc_g9

0x5adb,	// (0x00010797) volume_set_pane_vc_g10

0x0009,

0xf8b1,	// (0x0001a56d) volume_set_pane_vc_g

0xb247,	// (0x00015f03) volume_set_pane_vc

0xb24f,	// (0x00015f0b) button_value_adjust_pane_cp1_vc

0xb259,	// (0x00015f15) list_highlight_pane_cp2_vc

0xb262,	// (0x00015f1e) list_set_pane_vc_ParamLimits

0xb262,	// (0x00015f1e) list_set_pane_vc

0xb2c0,	// (0x00015f7c) main_pane_set_vc_t1_ParamLimits

0xb2c0,	// (0x00015f7c) main_pane_set_vc_t1

0xb2d5,	// (0x00015f91) main_pane_set_vc_t2_ParamLimits

0xb2d5,	// (0x00015f91) main_pane_set_vc_t2

0xb2e7,	// (0x00015fa3) main_pane_set_vc_t3_ParamLimits

0xb2e7,	// (0x00015fa3) main_pane_set_vc_t3

0xb2fb,	// (0x00015fb7) main_pane_set_vc_t4_ParamLimits

0xb2fb,	// (0x00015fb7) main_pane_set_vc_t4

0x0003,

0xfa1a,	// (0x0001a6d6) main_pane_set_vc_t_ParamLimits

0xfa1a,	// (0x0001a6d6) main_pane_set_vc_t

0xb30f,	// (0x00015fcb) setting_code_pane_vc_ParamLimits

0xb30f,	// (0x00015fcb) setting_code_pane_vc

0xb320,	// (0x00015fdc) setting_slider_graphic_pane_vc

0xb320,	// (0x00015fdc) setting_slider_pane_vc

0xb320,	// (0x00015fdc) setting_text_pane_vc

0xb320,	// (0x00015fdc) setting_volume_pane_vc

0xb32a,	// (0x00015fe6) scroll_pane_cp121_vc

0x7bc1,	// (0x0001287d) set_content_pane_vc

0xb637,	// (0x000162f3) button_value_adjust_pane_g1

0xb640,	// (0x000162fc) button_value_adjust_pane_g2

0x0001,

0xfa7b,	// (0x0001a737) button_value_adjust_pane_g

0xb649,	// (0x00016305) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb649,	// (0x00016305) form_field_slider_wide_pane_vc_t1

0xb65d,	// (0x00016319) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb65d,	// (0x00016319) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa80,	// (0x0001a73c) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa80,	// (0x0001a73c) form_field_slider_wide_pane_vc_t

0x714a,	// (0x00011e06) input_focus_pane_cp10_vc_ParamLimits

0x714a,	// (0x00011e06) input_focus_pane_cp10_vc

0xb68b,	// (0x00016347) slider_cont_pane_cp1_vc_ParamLimits

0xb68b,	// (0x00016347) slider_cont_pane_cp1_vc

0xb69d,	// (0x00016359) slider_form_pane_g1_cp2

0xb1be,	// (0x00015e7a) slider_form_pane_g2_cp2

0xb6ca,	// (0x00016386) form_field_slider_pane_vc_t3

0xb6d8,	// (0x00016394) form_field_slider_pane_vc_t4

0xb6e6,	// (0x000163a2) slider_form_pane_vc_ParamLimits

0xb6e6,	// (0x000163a2) slider_form_pane_vc

0xb6f3,	// (0x000163af) form_field_slider_pane_vc_t1_ParamLimits

0xb6f3,	// (0x000163af) form_field_slider_pane_vc_t1

0xb65d,	// (0x00016319) form_field_slider_pane_vc_t2_ParamLimits

0xb65d,	// (0x00016319) form_field_slider_pane_vc_t2

0x0001,

0xfa92,	// (0x0001a74e) form_field_slider_pane_vc_t_ParamLimits

0xfa92,	// (0x0001a74e) form_field_slider_pane_vc_t

0x714a,	// (0x00011e06) input_focus_pane_cp9_vc_ParamLimits

0x714a,	// (0x00011e06) input_focus_pane_cp9_vc

0xb70f,	// (0x000163cb) slider_cont_pane_vc_ParamLimits

0xb70f,	// (0x000163cb) slider_cont_pane_vc

0xb723,	// (0x000163df) list_form_graphic_pane_cp_vc_ParamLimits

0xb723,	// (0x000163df) list_form_graphic_pane_cp_vc

0x9581,	// (0x0001423d) form_field_popup_wide_pane_vc_g1

0xb738,	// (0x000163f4) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb738,	// (0x000163f4) form_field_popup_wide_pane_vc_t1

0x7cb9,	// (0x00012975) input_focus_pane_cp8_vc_ParamLimits

0x7cb9,	// (0x00012975) input_focus_pane_cp8_vc

0xb77d,	// (0x00016439) list_form_wide_pane_vc_ParamLimits

0xb77d,	// (0x00016439) list_form_wide_pane_vc

0xb789,	// (0x00016445) list_form_graphic_pane_vc_g1

0xb791,	// (0x0001644d) list_form_graphic_pane_vc_t1_ParamLimits

0xb791,	// (0x0001644d) list_form_graphic_pane_vc_t1

0x6eb5,	// (0x00011b71) list_highlight_pane_cp5_vc_ParamLimits

0x6eb5,	// (0x00011b71) list_highlight_pane_cp5_vc

0xb7ad,	// (0x00016469) list_form_graphic_pane_vc_ParamLimits

0xb7ad,	// (0x00016469) list_form_graphic_pane_vc

0x9581,	// (0x0001423d) form_field_popup_pane_vc_g1

0xb7c3,	// (0x0001647f) form_field_popup_pane_vc_t1_ParamLimits

0xb7c3,	// (0x0001647f) form_field_popup_pane_vc_t1

0x7cb9,	// (0x00012975) input_focus_pane_cp7_vc_ParamLimits

0x7cb9,	// (0x00012975) input_focus_pane_cp7_vc

0xb7da,	// (0x00016496) list_form_pane_vc_ParamLimits

0xb7da,	// (0x00016496) list_form_pane_vc

0xb7e6,	// (0x000164a2) data_form_pane_vc_t1_ParamLimits

0xb7e6,	// (0x000164a2) data_form_pane_vc_t1

0x7ddc,	// (0x00012a98) input_focus_pane_vc_g1

0x7de4,	// (0x00012aa0) input_focus_pane_vc_g2

0x7dec,	// (0x00012aa8) input_focus_pane_vc_g3

0x7df4,	// (0x00012ab0) input_focus_pane_vc_g4

0x7dfc,	// (0x00012ab8) input_focus_pane_vc_g5

0x7e04,	// (0x00012ac0) input_focus_pane_vc_g6

0x7e0c,	// (0x00012ac8) input_focus_pane_vc_g7

0x7e14,	// (0x00012ad0) input_focus_pane_vc_g8

0x7e1c,	// (0x00012ad8) input_focus_pane_vc_g9

0x6dcb,	// (0x00011a87) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0001a343) input_focus_pane_vc_g

0x9575,	// (0x00014231) data_form_pane_vc_ParamLimits

0x9575,	// (0x00014231) data_form_pane_vc

0x9581,	// (0x0001423d) form_field_data_pane_vc_g1

0xb801,	// (0x000164bd) form_field_data_pane_vc_t1_ParamLimits

0xb801,	// (0x000164bd) form_field_data_pane_vc_t1

0x7cb9,	// (0x00012975) input_focus_pane_vc_ParamLimits

0x7cb9,	// (0x00012975) input_focus_pane_vc

0xb81b,	// (0x000164d7) button_value_adjust_pane_cp3_vc

0xb823,	// (0x000164df) button_value_adjust_pane_cp5_vc

0xb82b,	// (0x000164e7) form_field_data_pane_vc_ParamLimits

0xb82b,	// (0x000164e7) form_field_data_pane_vc

0xb842,	// (0x000164fe) form_field_data_pane_vc_cp2

0xb84a,	// (0x00016506) form_field_data_wide_pane_vc_ParamLimits

0xb84a,	// (0x00016506) form_field_data_wide_pane_vc

0xb860,	// (0x0001651c) form_field_data_wide_pane_vc_cp2

0xb868,	// (0x00016524) form_field_popup_pane_vc_ParamLimits

0xb868,	// (0x00016524) form_field_popup_pane_vc

0xb87f,	// (0x0001653b) form_field_popup_wide_pane_vc_ParamLimits

0xb87f,	// (0x0001653b) form_field_popup_wide_pane_vc

0xb895,	// (0x00016551) form_field_slider_pane_vc_ParamLimits

0xb895,	// (0x00016551) form_field_slider_pane_vc

0xb8a8,	// (0x00016564) form_field_slider_wide_pane_vc_ParamLimits

0xb8a8,	// (0x00016564) form_field_slider_wide_pane_vc

0xb8bb,	// (0x00016577) grid_touch_1_pane_ParamLimits

0xb8bb,	// (0x00016577) grid_touch_1_pane

0xb8c7,	// (0x00016583) grid_touch_2_pane_ParamLimits

0xb8c7,	// (0x00016583) grid_touch_2_pane

0x8e1d,	// (0x00013ad9) touch_pane_g1_ParamLimits

0x8e1d,	// (0x00013ad9) touch_pane_g1

0xb8df,	// (0x0001659b) cell_app_pane_cp_wide_ParamLimits

0xb8df,	// (0x0001659b) cell_app_pane_cp_wide

0xb8f0,	// (0x000165ac) grid_popup_fast_wide_pane_ParamLimits

0xb8f0,	// (0x000165ac) grid_popup_fast_wide_pane

0xb904,	// (0x000165c0) scroll_pane_cp19_ParamLimits

0xb904,	// (0x000165c0) scroll_pane_cp19

0x6dd5,	// (0x00011a91) bg_popup_window_pane_cp20

0xb918,	// (0x000165d4) listscroll_popup_fast_wide_pane

0x6eb5,	// (0x00011b71) grid_indicator_nsta_pane

0xb920,	// (0x000165dc) clock_nsta_pane_g1

0xb929,	// (0x000165e5) clock_nsta_pane_t1

0xb945,	// (0x00016601) cell_indicator_nsta_pane_ParamLimits

0xb945,	// (0x00016601) cell_indicator_nsta_pane

0xb976,	// (0x00016632) cell_indicator_nsta_pane_g1

0xb984,	// (0x00016640) cell_indicator_nsta_pane_g2

0x0001,

0xfaa3,	// (0x0001a75f) cell_indicator_nsta_pane_g

0xb991,	// (0x0001664d) clock_nsta_pane_cp

0xb999,	// (0x00016655) indicator_nsta_pane_cp

0xb9a1,	// (0x0001665d) nsta_clock_indic_pane_g1

0x6f98,	// (0x00011c54) grid_indicator_pane

0x83c4,	// (0x00013080) scroll_pane_cp29

0x4fdb,	// (0x0000fc97) indicator_nsta_pane_cp2_ParamLimits

0x4fdb,	// (0x0000fc97) indicator_nsta_pane_cp2

0x6eb5,	// (0x00011b71) main_apps_wheel_pane

0x97cd,	// (0x00014489) form_midp_field_text_pane_ParamLimits

0x9918,	// (0x000145d4) scroll_bar_cp050_ParamLimits

0xb9f1,	// (0x000166ad) cell_indicator_pane_ParamLimits

0xb9f1,	// (0x000166ad) cell_indicator_pane

0xba08,	// (0x000166c4) cell_indicator_pane_g1

0xba12,	// (0x000166ce) grid_wheel_folder_pane_ParamLimits

0xba12,	// (0x000166ce) grid_wheel_folder_pane

0xba28,	// (0x000166e4) list_wheel_apps_pane_ParamLimits

0xba28,	// (0x000166e4) list_wheel_apps_pane

0xba39,	// (0x000166f5) main_apps_wheel_pane_g1_ParamLimits

0xba39,	// (0x000166f5) main_apps_wheel_pane_g1

0xba4d,	// (0x00016709) main_apps_wheel_pane_g2_ParamLimits

0xba4d,	// (0x00016709) main_apps_wheel_pane_g2

0x0001,

0xfabf,	// (0x0001a77b) main_apps_wheel_pane_g_ParamLimits

0xfabf,	// (0x0001a77b) main_apps_wheel_pane_g

0xba65,	// (0x00016721) main_apps_wheel_pane_t1_ParamLimits

0xba65,	// (0x00016721) main_apps_wheel_pane_t1

0xba88,	// (0x00016744) list_wheel_apps_pane_g1

0xba90,	// (0x0001674c) list_wheel_apps_pane_g2

0xba98,	// (0x00016754) list_wheel_apps_pane_g3

0xbaa0,	// (0x0001675c) list_wheel_apps_pane_g4

0xbaaa,	// (0x00016766) list_wheel_apps_pane_g5

0x0004,

0xfac4,	// (0x0001a780) list_wheel_apps_pane_g

0x89d6,	// (0x00013692) navi_icon_text_pane

0x8ed7,	// (0x00013b93) aid_fill_nsta

0xbacd,	// (0x00016789) navi_icon_text_pane_g1

0xbad9,	// (0x00016795) navi_icon_text_pane_t1

0x8869,	// (0x00013525) list_set_graphic_pane_t1_ParamLimits

0x8869,	// (0x00013525) list_set_graphic_pane_t1

0xa07b,	// (0x00014d37) popup_midp_note_alarm_window_t6_ParamLimits

0xa07b,	// (0x00014d37) popup_midp_note_alarm_window_t6

0xa08d,	// (0x00014d49) popup_midp_note_alarm_window_t7_ParamLimits

0xa08d,	// (0x00014d49) popup_midp_note_alarm_window_t7

0xa09f,	// (0x00014d5b) popup_midp_note_alarm_window_t8_ParamLimits

0xa09f,	// (0x00014d5b) popup_midp_note_alarm_window_t8

0xa0b1,	// (0x00014d6d) popup_midp_note_alarm_window_t9_ParamLimits

0xa0b1,	// (0x00014d6d) popup_midp_note_alarm_window_t9

0xa0c3,	// (0x00014d7f) popup_midp_note_alarm_window_t10_ParamLimits

0xa0c3,	// (0x00014d7f) popup_midp_note_alarm_window_t10

0xa0d5,	// (0x00014d91) popup_midp_note_alarm_window_t11_ParamLimits

0xa0d5,	// (0x00014d91) popup_midp_note_alarm_window_t11

0xa0e7,	// (0x00014da3) scroll_pane_cp17_ParamLimits

0xa0e7,	// (0x00014da3) scroll_pane_cp17

0x5a8a,	// (0x00010746) volume_small_pane_cp_g1

0x5d7f,	// (0x00010a3b) volume_small_pane_cp_g2

0x5d88,	// (0x00010a44) volume_small_pane_cp_g3

0x5d91,	// (0x00010a4d) volume_small_pane_cp_g4

0x5d9a,	// (0x00010a56) volume_small_pane_cp_g5

0x5da3,	// (0x00010a5f) volume_small_pane_cp_g6

0x5dac,	// (0x00010a68) volume_small_pane_cp_g7

0x5db5,	// (0x00010a71) volume_small_pane_cp_g8

0x5dbe,	// (0x00010a7a) volume_small_pane_cp_g9

0x5dc7,	// (0x00010a83) volume_small_pane_cp_g10

0x8c33,	// (0x000138ef) midp_ticker_pane_g1_ParamLimits

0x8c3f,	// (0x000138fb) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0001a40f) midp_ticker_pane_g_ParamLimits

0x8c4b,	// (0x00013907) midp_ticker_pane_t1_ParamLimits

0x8eed,	// (0x00013ba9) aid_fill_nsta_2

0x9904,	// (0x000145c0) list_form2_midp_pane

0xaa9b,	// (0x00015757) midp_editing_number_pane_ParamLimits

0xaaaa,	// (0x00015766) midp_ticker_pane_ParamLimits

0xbaeb,	// (0x000167a7) form2_midp_field_pane

0xbb0f,	// (0x000167cb) scroll_pane_cp51

0xbb2f,	// (0x000167eb) form2_midp_button_pane_ParamLimits

0xbb2f,	// (0x000167eb) form2_midp_button_pane

0xbb41,	// (0x000167fd) form2_midp_content_pane_ParamLimits

0xbb41,	// (0x000167fd) form2_midp_content_pane

0xbb5b,	// (0x00016817) form2_midp_field_choice_group_pane

0xbb63,	// (0x0001681f) form2_midp_field_pane_g1

0xbb6b,	// (0x00016827) form2_midp_field_pane_g2

0xbb73,	// (0x0001682f) form2_midp_field_pane_g3

0xbb7b,	// (0x00016837) form2_midp_field_pane_g4

0x0003,

0xfae9,	// (0x0001a7a5) form2_midp_field_pane_g

0xbb83,	// (0x0001683f) form2_midp_gauge_slider_pane

0xbb8b,	// (0x00016847) form2_midp_gauge_wait_pane

0xbb93,	// (0x0001684f) form2_midp_image_pane_ParamLimits

0xbb93,	// (0x0001684f) form2_midp_image_pane

0xbbae,	// (0x0001686a) form2_midp_label_pane_ParamLimits

0xbbae,	// (0x0001686a) form2_midp_label_pane

0xbbc7,	// (0x00016883) form2_midp_label_pane_cp_ParamLimits

0xbbc7,	// (0x00016883) form2_midp_label_pane_cp

0xbbe8,	// (0x000168a4) form2_midp_string_pane_ParamLimits

0xbbe8,	// (0x000168a4) form2_midp_string_pane

0xbbfa,	// (0x000168b6) form2_midp_text_pane_ParamLimits

0xbbfa,	// (0x000168b6) form2_midp_text_pane

0xbc17,	// (0x000168d3) form2_midp_time_pane

0xbc27,	// (0x000168e3) input_focus_pane_cp51_ParamLimits

0xbc27,	// (0x000168e3) input_focus_pane_cp51

0xbc3f,	// (0x000168fb) form2_midp_label_pane_t1_ParamLimits

0xbc3f,	// (0x000168fb) form2_midp_label_pane_t1

0xbc80,	// (0x0001693c) form2_mdip_text_pane_t1_ParamLimits

0xbc80,	// (0x0001693c) form2_mdip_text_pane_t1

0xbc9f,	// (0x0001695b) form2_midp_time_pane_t1

0xbcba,	// (0x00016976) form2_midp_gauge_slider_pane_t1

0xbccc,	// (0x00016988) form2_midp_gauge_slider_pane_t2

0xbcde,	// (0x0001699a) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf2,	// (0x0001a7ae) form2_midp_gauge_slider_pane_t

0xbcf0,	// (0x000169ac) form2_midp_slider_pane

0xbcfc,	// (0x000169b8) form2_midp_gauge_wait_pane_t1

0xbd0a,	// (0x000169c6) form2_midp_wait_pane_ParamLimits

0xbd0a,	// (0x000169c6) form2_midp_wait_pane

0xbd35,	// (0x000169f1) list_single_2graphic_pane_cp4_ParamLimits

0xbd35,	// (0x000169f1) list_single_2graphic_pane_cp4

0x95e9,	// (0x000142a5) list_single_midp_graphic_pane_cp_ParamLimits

0x95e9,	// (0x000142a5) list_single_midp_graphic_pane_cp

0x6dd5,	// (0x00011a91) list_highlight_pane_cp20

0xbd59,	// (0x00016a15) list_single_2graphic_pane_g1_cp4

0xbd61,	// (0x00016a1d) list_single_2graphic_pane_g2_cp4

0xbd69,	// (0x00016a25) list_single_2graphic_pane_t1_cp4

0x6eb5,	// (0x00011b71) list_highlight_pane_cp21

0xbd78,	// (0x00016a34) list_single_midp_graphic_pane_g4_cp

0xbd87,	// (0x00016a43) list_single_midp_graphic_pane_t1_cp

0xbd9c,	// (0x00016a58) form2_mdip_string_pane_t1_ParamLimits

0xbd9c,	// (0x00016a58) form2_mdip_string_pane_t1

0x6dd5,	// (0x00011a91) bg_wml_button_pane_cp2

0x6dcb,	// (0x00011a87) form2_midp_image_pane_g1

0x7977,	// (0x00012633) list_double_large_graphic_pane_g5_ParamLimits

0x7977,	// (0x00012633) list_double_large_graphic_pane_g5

0x8b5e,	// (0x0001381a) midp_form_pane_ParamLimits

0x6eb5,	// (0x00011b71) main_apps_wheel_pane_ParamLimits

0x56ca,	// (0x00010386) popup_preview_window_ParamLimits

0x56ca,	// (0x00010386) popup_preview_window

0x5885,	// (0x00010541) popup_touch_info_window_ParamLimits

0x5885,	// (0x00010541) popup_touch_info_window

0x58a3,	// (0x0001055f) popup_touch_menu_window_ParamLimits

0x58a3,	// (0x0001055f) popup_touch_menu_window

0x6dc1,	// (0x00011a7d) bg_popup_sub_pane_cp6

0xbe95,	// (0x00016b51) list_touch_menu_pane

0xbe9d,	// (0x00016b59) list_single_touch_menu_pane_ParamLimits

0xbe9d,	// (0x00016b59) list_single_touch_menu_pane

0xbeb3,	// (0x00016b6f) list_single_touch_menu_pane_t1

0x6eb5,	// (0x00011b71) bg_popup_sub_pane_cp7_ParamLimits

0x6eb5,	// (0x00011b71) bg_popup_sub_pane_cp7

0xbec1,	// (0x00016b7d) heading_sub_pane

0xbec9,	// (0x00016b85) list_touch_info_pane_ParamLimits

0xbec9,	// (0x00016b85) list_touch_info_pane

0xbed8,	// (0x00016b94) list_single_touch_info_pane_ParamLimits

0xbed8,	// (0x00016b94) list_single_touch_info_pane

0xbeea,	// (0x00016ba6) list_single_touch_info_pane_t1

0xbef8,	// (0x00016bb4) list_single_touch_info_pane_t2

0x0001,

0xfb00,	// (0x0001a7bc) list_single_touch_info_pane_t

0x8b56,	// (0x00013812) bg_popup_heading_pane_cp

0xbf06,	// (0x00016bc2) heading_sub_pane_t1

0x950f,	// (0x000141cb) bg_popup_preview_window_pane_cp_ParamLimits

0x950f,	// (0x000141cb) bg_popup_preview_window_pane_cp

0xbec1,	// (0x00016b7d) heading_preview_pane

0xbec9,	// (0x00016b85) list_preview_pane_ParamLimits

0xbec9,	// (0x00016b85) list_preview_pane

0xbf14,	// (0x00016bd0) popup_preview_window_g1

0xbed8,	// (0x00016b94) list_single_preview_pane_ParamLimits

0xbed8,	// (0x00016b94) list_single_preview_pane

0xbf1c,	// (0x00016bd8) list_single_preview_pane_g1

0xbf24,	// (0x00016be0) list_single_preview_pane_t1

0xbeea,	// (0x00016ba6) list_single_preview_pane_t2

0x0001,

0xfb05,	// (0x0001a7c1) list_single_preview_pane_t

0xbf32,	// (0x00016bee) bg_popup_heading_pane_cp2_ParamLimits

0xbf32,	// (0x00016bee) bg_popup_heading_pane_cp2

0xbf48,	// (0x00016c04) heading_preview_pane_g1

0xbf50,	// (0x00016c0c) heading_preview_pane_t1_ParamLimits

0xbf50,	// (0x00016c0c) heading_preview_pane_t1

0x6fbb,	// (0x00011c77) soft_indicator_pane_t1_ParamLimits

0x76b1,	// (0x0001236d) scroll_pane_ParamLimits

0x82bd,	// (0x00012f79) scroll_sc2_left_pane

0x82c6,	// (0x00012f82) scroll_sc2_right_pane

0x82e5,	// (0x00012fa1) scroll_bg_pane_g1_ParamLimits

0x82fa,	// (0x00012fb6) scroll_bg_pane_g2_ParamLimits

0x8312,	// (0x00012fce) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0001a39a) scroll_bg_pane_g_ParamLimits

0x82e5,	// (0x00012fa1) scroll_handle_pane_g1_ParamLimits

0x8334,	// (0x00012ff0) scroll_handle_pane_g2_ParamLimits

0x8312,	// (0x00012fce) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0001a3a1) scroll_handle_pane_g_ParamLimits

0x534b,	// (0x00010007) popup_choice_list_window_ParamLimits

0x534b,	// (0x00010007) popup_choice_list_window

0x9309,	// (0x00013fc5) choice_list_pane

0x93b9,	// (0x00014075) cell_toolbar_pane_t1

0x93e1,	// (0x0001409d) toolbar_button_pane_ParamLimits

0xa5a1,	// (0x0001525d) ai_gene_pane_1_t2_ParamLimits

0xa5a1,	// (0x0001525d) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0001a5c9) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0001a5c9) ai_gene_pane_1_t

0xbf6d,	// (0x00016c29) scroll_sc2_left_pane_g1

0xbf6d,	// (0x00016c29) scroll_sc2_right_pane_g1

0x8ead,	// (0x00013b69) bg_popup_sub_pane_cp10

0xbf77,	// (0x00016c33) list_choice_list_pane

0xbf90,	// (0x00016c4c) list_single_choice_list_pane_ParamLimits

0xbf90,	// (0x00016c4c) list_single_choice_list_pane

0xbfa3,	// (0x00016c5f) list_single_choice_list_pane_g1

0x7fc1,	// (0x00012c7d) list_single_choice_list_pane_t1_ParamLimits

0x7fc1,	// (0x00012c7d) list_single_choice_list_pane_t1

0xbfab,	// (0x00016c67) choice_list_pane_g1

0xbfb3,	// (0x00016c6f) choice_list_pane_t1

0x6dc1,	// (0x00011a7d) input_focus_pane_cp11

0x8198,	// (0x00012e54) title_pane_stacon_g2_ParamLimits

0x8198,	// (0x00012e54) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0001a380) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0001a380) title_pane_stacon_g

0x8b56,	// (0x00013812) cursor_press_pane

0x53f7,	// (0x000100b3) popup_fep_hwr_window_ParamLimits

0x53f7,	// (0x000100b3) popup_fep_hwr_window

0x5471,	// (0x0001012d) popup_fep_vkb_window_ParamLimits

0x5471,	// (0x0001012d) popup_fep_vkb_window

0xbfc1,	// (0x00016c7d) cursor_press_pane_g1

0x0002,

0xfb2e,	// (0x0001a7ea) fep_vkb_side_pane_g_ParamLimits

0x5e09,	// (0x00010ac5) fep_hwr_candidate_pane_ParamLimits

0x5e09,	// (0x00010ac5) fep_hwr_candidate_pane

0x5e33,	// (0x00010aef) fep_hwr_side_pane_ParamLimits

0x5e33,	// (0x00010aef) fep_hwr_side_pane

0x5e53,	// (0x00010b0f) fep_hwr_top_pane_ParamLimits

0x5e53,	// (0x00010b0f) fep_hwr_top_pane

0x5e6b,	// (0x00010b27) fep_hwr_write_pane_ParamLimits

0x5e6b,	// (0x00010b27) fep_hwr_write_pane

0xfb2e,	// (0x0001a7ea) fep_vkb_side_pane_g

0xbfc9,	// (0x00016c85) fep_hwr_top_pane_g1

0xbfdb,	// (0x00016c97) fep_hwr_top_pane_g2

0x5ea5,	// (0x00010b61) fep_hwr_top_pane_g3

0x0002,

0xfb0a,	// (0x0001a7c6) fep_hwr_top_pane_g

0x5eba,	// (0x00010b76) fep_hwr_top_text_pane

0x84b4,	// (0x00013170) fep_hwr_top_text_pane_g1

0xc011,	// (0x00016ccd) fep_hwr_top_text_pane_t1

0x5fb0,	// (0x00010c6c) fep_hwr_candidate_pane_g1

0xc264,	// (0x00016f20) fep_vkb_keypad_pane_g3_ParamLimits

0xc264,	// (0x00016f20) fep_vkb_keypad_pane_g3

0xc28c,	// (0x00016f48) fep_vkb_keypad_pane_g4_ParamLimits

0xc28c,	// (0x00016f48) fep_vkb_keypad_pane_g4

0xc2fb,	// (0x00016fb7) fep_vkb_bottom_pane_g2_ParamLimits

0xc2fb,	// (0x00016fb7) fep_vkb_bottom_pane_g2

0x0001,

0xfb35,	// (0x0001a7f1) fep_vkb_bottom_pane_g_ParamLimits

0xfb35,	// (0x0001a7f1) fep_vkb_bottom_pane_g

0xbf6d,	// (0x00016c29) cell_vkb_side_pane_g2

0x0001,

0xfb3f,	// (0x0001a7fb) cell_vkb_side_pane_g

0xc386,	// (0x00017042) cell_vkb_side_pane_t1

0xc394,	// (0x00017050) cell_vkb_side_pane_t1_copy1

0xbf6d,	// (0x00016c29) bg_fep_vkb_candidate_pane_g2

0xc4c0,	// (0x0001717c) cell_vkb_candidate_pane_ParamLimits

0xc01f,	// (0x00016cdb) aid_size_cell_vkb_ParamLimits

0xc01f,	// (0x00016cdb) aid_size_cell_vkb

0xc4c0,	// (0x0001717c) cell_vkb_candidate_pane

0x5fd7,	// (0x00010c93) bg_popup_fep_shadow_pane_g1

0xc0ad,	// (0x00016d69) fep_vkb_bottom_pane_ParamLimits

0xc0ad,	// (0x00016d69) fep_vkb_bottom_pane

0xc0e3,	// (0x00016d9f) fep_vkb_candidate_pane_ParamLimits

0xc0e3,	// (0x00016d9f) fep_vkb_candidate_pane

0xc0ff,	// (0x00016dbb) fep_vkb_keypad_pane_ParamLimits

0xc0ff,	// (0x00016dbb) fep_vkb_keypad_pane

0xc145,	// (0x00016e01) fep_vkb_side_pane_ParamLimits

0xc145,	// (0x00016e01) fep_vkb_side_pane

0xc181,	// (0x00016e3d) fep_vkb_top_pane_ParamLimits

0xc181,	// (0x00016e3d) fep_vkb_top_pane

0xc1bd,	// (0x00016e79) fep_vkb_top_pane_g1_ParamLimits

0xc1bd,	// (0x00016e79) fep_vkb_top_pane_g1

0xc1cc,	// (0x00016e88) fep_vkb_top_pane_g2_ParamLimits

0xc1cc,	// (0x00016e88) fep_vkb_top_pane_g2

0xc1db,	// (0x00016e97) fep_vkb_top_pane_g3_ParamLimits

0xc1db,	// (0x00016e97) fep_vkb_top_pane_g3

0x0003,

0xfb25,	// (0x0001a7e1) fep_vkb_top_pane_g_ParamLimits

0xfb25,	// (0x0001a7e1) fep_vkb_top_pane_g

0xc1f9,	// (0x00016eb5) fep_vkb_top_text_pane_ParamLimits

0xc1f9,	// (0x00016eb5) fep_vkb_top_text_pane

0xc20a,	// (0x00016ec6) fep_vkb_side_pane_g1_ParamLimits

0xc20a,	// (0x00016ec6) fep_vkb_side_pane_g1

0xc253,	// (0x00016f0f) grid_vkb_side_pane_ParamLimits

0xc253,	// (0x00016f0f) grid_vkb_side_pane

0x5fdf,	// (0x00010c9b) bg_popup_fep_shadow_pane_g2

0x5fe8,	// (0x00010ca4) bg_popup_fep_shadow_pane_g3

0x5ff0,	// (0x00010cac) bg_popup_fep_shadow_pane_g4

0x5ff9,	// (0x00010cb5) bg_popup_fep_shadow_pane_g5

0x6003,	// (0x00010cbf) bg_popup_fep_shadow_pane_g6

0x600b,	// (0x00010cc7) bg_popup_fep_shadow_pane_g7

0x7df4,	// (0x00012ab0) bg_popup_fep_shadow_pane_g8

0xc2aa,	// (0x00016f66) grid_vkb_keypad_number_pane_ParamLimits

0xc2aa,	// (0x00016f66) grid_vkb_keypad_number_pane

0xc2ba,	// (0x00016f76) grid_vkb_keypad_pane_ParamLimits

0xc2ba,	// (0x00016f76) grid_vkb_keypad_pane

0xc2e0,	// (0x00016f9c) fep_vkb_bottom_pane_g1_ParamLimits

0xc2e0,	// (0x00016f9c) fep_vkb_bottom_pane_g1

0xc309,	// (0x00016fc5) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc309,	// (0x00016fc5) grid_vkb_keypad_bottom_left_pane

0xc31e,	// (0x00016fda) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc31e,	// (0x00016fda) grid_vkb_keypad_bottom_right_pane

0xc333,	// (0x00016fef) fep_vkb_top_text_pane_g1

0xc34e,	// (0x0001700a) fep_vkb_top_text_pane_t1

0xc363,	// (0x0001701f) cell_vkb_side_pane_ParamLimits

0xc363,	// (0x0001701f) cell_vkb_side_pane

0xbf6d,	// (0x00016c29) cell_vkb_side_pane_g1

0xc3a2,	// (0x0001705e) cell_vkb_keypad_pane_ParamLimits

0xc3a2,	// (0x0001705e) cell_vkb_keypad_pane

0xc417,	// (0x000170d3) cell_vkb_keypad_pane_g1

0x0008,

0xfb52,	// (0x0001a80e) bg_popup_fep_shadow_pane_g

0x601d,	// (0x00010cd9) cell_hwr_side_pane_g1

0x601d,	// (0x00010cd9) cell_hwr_side_pane_g2

0xc421,	// (0x000170dd) cell_vkb_keypad_pane_t1

0xc42f,	// (0x000170eb) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc42f,	// (0x000170eb) cell_vkb_keypad_bottom_left_pane

0xc44c,	// (0x00017108) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc44c,	// (0x00017108) cell_vkb_keypad_bottom_right_pane

0xbf6d,	// (0x00016c29) cell_vkb_keypad_bottom_left_pane_g1

0xbf6d,	// (0x00016c29) cell_vkb_keypad_bottom_right_pane_g1

0xc485,	// (0x00017141) cell_vkb_keypad_number_pane_ParamLimits

0xc485,	// (0x00017141) cell_vkb_keypad_number_pane

0xc4a4,	// (0x00017160) cell_vkb_keypad_number_pane_g1

0xc4ae,	// (0x0001716a) cell_vkb_keypad_number_pane_g2

0xc4b7,	// (0x00017173) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb44,	// (0x0001a800) cell_vkb_keypad_number_pane_g

0xc421,	// (0x000170dd) cell_vkb_keypad_number_pane_t1

0xc4db,	// (0x00017197) fep_vkb_candidate_pane_g1

0x0001,

0xfb65,	// (0x0001a821) cell_hwr_side_pane_g

0xc4f4,	// (0x000171b0) cell_hwr_side_pane_t1

0x6027,	// (0x00010ce3) cell_hwr_side_pane_t1_copy1

0x6035,	// (0x00010cf1) cell_hwr_candidate_pane_g1

0x6064,	// (0x00010d20) cell_hwr_candidate_pane_t1

0xbf6d,	// (0x00016c29) cell_vkb_candidate_pane_g2

0xc538,	// (0x000171f4) cell_vkb_candidate_pane_t1

0x5dd0,	// (0x00010a8c) bg_popup_fep_shadow_pane_ParamLimits

0x5dd0,	// (0x00010a8c) bg_popup_fep_shadow_pane

0x5e85,	// (0x00010b41) bg_fep_hwr_top_pane_g4

0xbfed,	// (0x00016ca9) bg_hwr_side_pane_g1_ParamLimits

0xbfed,	// (0x00016ca9) bg_hwr_side_pane_g1

0x5ef6,	// (0x00010bb2) cell_hwr_side_pane_ParamLimits

0x5ef6,	// (0x00010bb2) cell_hwr_side_pane

0x5f31,	// (0x00010bed) fep_hwr_write_pane_g1_ParamLimits

0x5f31,	// (0x00010bed) fep_hwr_write_pane_g1

0x5f3e,	// (0x00010bfa) fep_hwr_write_pane_g2_ParamLimits

0x5f3e,	// (0x00010bfa) fep_hwr_write_pane_g2

0x5f4b,	// (0x00010c07) fep_hwr_write_pane_g3_ParamLimits

0x5f4b,	// (0x00010c07) fep_hwr_write_pane_g3

0x5f59,	// (0x00010c15) fep_hwr_write_pane_g4_ParamLimits

0x5f59,	// (0x00010c15) fep_hwr_write_pane_g4

0x0005,

0xfb11,	// (0x0001a7cd) fep_hwr_write_pane_g_ParamLimits

0xfb11,	// (0x0001a7cd) fep_hwr_write_pane_g

0x5e85,	// (0x00010b41) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5e85,	// (0x00010b41) bg_fep_hwr_candidate_pane_g2

0x5f6e,	// (0x00010c2a) cell_hwr_candidate_pane_ParamLimits

0x5f6e,	// (0x00010c2a) cell_hwr_candidate_pane

0x5fb0,	// (0x00010c6c) fep_hwr_candidate_pane_g1_ParamLimits

0xc04d,	// (0x00016d09) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc04d,	// (0x00016d09) bg_popup_fep_shadow_pane_cp2

0xc1eb,	// (0x00016ea7) fep_vkb_top_pane_g4_ParamLimits

0xc1eb,	// (0x00016ea7) fep_vkb_top_pane_g4

0xc231,	// (0x00016eed) fep_vkb_side_pane_g2_ParamLimits

0xc231,	// (0x00016eed) fep_vkb_side_pane_g2

0x7adb,	// (0x00012797) list_setting_pane_t4_ParamLimits

0x7adb,	// (0x00012797) list_setting_pane_t4

0x7b55,	// (0x00012811) list_setting_number_pane_t5_ParamLimits

0x7b55,	// (0x00012811) list_setting_number_pane_t5

0x84fb,	// (0x000131b7) list_double_heading_pane_cp2_ParamLimits

0x84fb,	// (0x000131b7) list_double_heading_pane_cp2

0x7902,	// (0x000125be) list_double_heading_pane_g1_cp2_ParamLimits

0x7902,	// (0x000125be) list_double_heading_pane_g1_cp2

0x7cdf,	// (0x0001299b) list_double_heading_pane_g2_cp2_ParamLimits

0x7cdf,	// (0x0001299b) list_double_heading_pane_g2_cp2

0xc546,	// (0x00017202) list_double_heading_pane_t1_cp2_ParamLimits

0xc546,	// (0x00017202) list_double_heading_pane_t1_cp2

0xc55c,	// (0x00017218) list_double_heading_pane_t2_cp2_ParamLimits

0xc55c,	// (0x00017218) list_double_heading_pane_t2_cp2

0x6da9,	// (0x00011a65) aid_value_unit2

0x4b6b,	// (0x0000f827) popup_preview_fixed_window

0x7158,	// (0x00011e14) bg_popup_preview_window_pane_cp02

0xc56e,	// (0x0001722a) list_preview_fixed_pane

0xc5b4,	// (0x00017270) list_empty_pane_fp_ParamLimits

0xc5b4,	// (0x00017270) list_empty_pane_fp

0xc5b4,	// (0x00017270) list_single_cale_day_pane_fp_ParamLimits

0xc5b4,	// (0x00017270) list_single_cale_day_pane_fp

0xc5b4,	// (0x00017270) list_single_graphic_heading_pane_fp_ParamLimits

0xc5b4,	// (0x00017270) list_single_graphic_heading_pane_fp

0xc5b4,	// (0x00017270) list_single_graphic_pane_fp_ParamLimits

0xc5b4,	// (0x00017270) list_single_graphic_pane_fp

0xc5b4,	// (0x00017270) list_single_heading_pane_fp_ParamLimits

0xc5b4,	// (0x00017270) list_single_heading_pane_fp

0xc5b4,	// (0x00017270) list_single_pane_fp_ParamLimits

0xc5b4,	// (0x00017270) list_single_pane_fp

0xc5c9,	// (0x00017285) list_single_pane_fp_g1_ParamLimits

0xc5c9,	// (0x00017285) list_single_pane_fp_g1

0x7902,	// (0x000125be) list_single_pane_fp_g2_ParamLimits

0x7902,	// (0x000125be) list_single_pane_fp_g2

0x7cdf,	// (0x0001299b) list_single_pane_fp_g3_ParamLimits

0x7cdf,	// (0x0001299b) list_single_pane_fp_g3

0xc5d5,	// (0x00017291) list_single_pane_fp_g4_ParamLimits

0xc5d5,	// (0x00017291) list_single_pane_fp_g4

0x0003,

0xfb78,	// (0x0001a834) list_single_pane_fp_g_ParamLimits

0xfb78,	// (0x0001a834) list_single_pane_fp_g

0xc5e1,	// (0x0001729d) list_single_pane_fp_t1_ParamLimits

0xc5e1,	// (0x0001729d) list_single_pane_fp_t1

0xc5f8,	// (0x000172b4) list_single_graphic_pane_fp_g1_ParamLimits

0xc5f8,	// (0x000172b4) list_single_graphic_pane_fp_g1

0xc5c9,	// (0x00017285) list_single_graphic_pane_fp_g2_ParamLimits

0xc5c9,	// (0x00017285) list_single_graphic_pane_fp_g2

0x7902,	// (0x000125be) list_single_graphic_pane_fp_g3_ParamLimits

0x7902,	// (0x000125be) list_single_graphic_pane_fp_g3

0x7cdf,	// (0x0001299b) list_single_graphic_pane_fp_g4_ParamLimits

0x7cdf,	// (0x0001299b) list_single_graphic_pane_fp_g4

0xc5d5,	// (0x00017291) list_single_graphic_pane_fp_g5_ParamLimits

0xc5d5,	// (0x00017291) list_single_graphic_pane_fp_g5

0x0004,

0xfb81,	// (0x0001a83d) list_single_graphic_pane_fp_g_ParamLimits

0xfb81,	// (0x0001a83d) list_single_graphic_pane_fp_g

0xc604,	// (0x000172c0) list_single_graphic_pane_fp_t1_ParamLimits

0xc604,	// (0x000172c0) list_single_graphic_pane_fp_t1

0xc5f8,	// (0x000172b4) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc5f8,	// (0x000172b4) list_single_graphic_heading_pane_fp_g1

0xc5c9,	// (0x00017285) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc5c9,	// (0x00017285) list_single_graphic_heading_pane_fp_g2

0x7902,	// (0x000125be) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7902,	// (0x000125be) list_single_graphic_heading_pane_fp_g3

0x7cdf,	// (0x0001299b) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7cdf,	// (0x0001299b) list_single_graphic_heading_pane_fp_g4

0xc5d5,	// (0x00017291) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc5d5,	// (0x00017291) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb81,	// (0x0001a83d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb81,	// (0x0001a83d) list_single_graphic_heading_pane_fp_g

0xc61a,	// (0x000172d6) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc61a,	// (0x000172d6) list_single_graphic_heading_pane_fp_t1

0xc630,	// (0x000172ec) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc630,	// (0x000172ec) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8c,	// (0x0001a848) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8c,	// (0x0001a848) list_single_graphic_heading_pane_fp_t

0xc642,	// (0x000172fe) list_single_cale_day_pane_fp_g1_ParamLimits

0xc642,	// (0x000172fe) list_single_cale_day_pane_fp_g1

0xc67a,	// (0x00017336) list_single_cale_day_pane_fp_g2_ParamLimits

0xc67a,	// (0x00017336) list_single_cale_day_pane_fp_g2

0xc686,	// (0x00017342) list_single_cale_day_pane_fp_g3_ParamLimits

0xc686,	// (0x00017342) list_single_cale_day_pane_fp_g3

0xc6ae,	// (0x0001736a) list_single_cale_day_pane_fp_g4_ParamLimits

0xc6ae,	// (0x0001736a) list_single_cale_day_pane_fp_g4

0xc6d2,	// (0x0001738e) list_single_cale_day_pane_fp_g5_ParamLimits

0xc6d2,	// (0x0001738e) list_single_cale_day_pane_fp_g5

0x0004,

0xfb91,	// (0x0001a84d) list_single_cale_day_pane_fp_g_ParamLimits

0xfb91,	// (0x0001a84d) list_single_cale_day_pane_fp_g

0xc6f6,	// (0x000173b2) list_single_cale_day_pane_fp_t1_ParamLimits

0xc6f6,	// (0x000173b2) list_single_cale_day_pane_fp_t1

0xc71c,	// (0x000173d8) list_single_cale_day_pane_fp_t2_ParamLimits

0xc71c,	// (0x000173d8) list_single_cale_day_pane_fp_t2

0xc735,	// (0x000173f1) list_single_cale_day_pane_fp_t3_ParamLimits

0xc735,	// (0x000173f1) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9c,	// (0x0001a858) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9c,	// (0x0001a858) list_single_cale_day_pane_fp_t

0xc5c9,	// (0x00017285) list_empty_pane_fp_g1_ParamLimits

0xc5c9,	// (0x00017285) list_empty_pane_fp_g1

0xc74e,	// (0x0001740a) list_empty_pane_fp_t1

0xc75c,	// (0x00017418) list_empty_pane_fp_t2

0x0001,

0xfba3,	// (0x0001a85f) list_empty_pane_fp_t

0xc5c9,	// (0x00017285) list_single_heading_pane_fp_g1_ParamLimits

0xc5c9,	// (0x00017285) list_single_heading_pane_fp_g1

0x7902,	// (0x000125be) list_single_heading_pane_fp_g2_ParamLimits

0x7902,	// (0x000125be) list_single_heading_pane_fp_g2

0x7cdf,	// (0x0001299b) list_single_heading_pane_fp_g3_ParamLimits

0x7cdf,	// (0x0001299b) list_single_heading_pane_fp_g3

0x0002,

0xfba8,	// (0x0001a864) list_single_heading_pane_fp_g_ParamLimits

0xfba8,	// (0x0001a864) list_single_heading_pane_fp_g

0xc76a,	// (0x00017426) list_single_heading_pane_fp_t1_ParamLimits

0xc76a,	// (0x00017426) list_single_heading_pane_fp_t1

0xc77c,	// (0x00017438) list_single_heading_pane_fp_t2_ParamLimits

0xc77c,	// (0x00017438) list_single_heading_pane_fp_t2

0x0001,

0xfbaf,	// (0x0001a86b) list_single_heading_pane_fp_t_ParamLimits

0xfbaf,	// (0x0001a86b) list_single_heading_pane_fp_t

0x802f,	// (0x00012ceb) aid_size_cell_fast

0x70c8,	// (0x00011d84) soft_indicator_pane_cp1_t1

0x806c,	// (0x00012d28) cell_app_pane_cp2_ParamLimits

0x806c,	// (0x00012d28) cell_app_pane_cp2

0x5df2,	// (0x00010aae) fep_hwr_candidate_drop_down_list_pane

0x5fca,	// (0x00010c86) fep_hwr_candidate_pane_g3_ParamLimits

0x5fca,	// (0x00010c86) fep_hwr_candidate_pane_g3

0x4021,	// (0x0000ecdd) fep_hwr_candidate_pane_g4_ParamLimits

0x4021,	// (0x0000ecdd) fep_hwr_candidate_pane_g4

0x0002,

0xfb1e,	// (0x0001a7da) fep_hwr_candidate_pane_g_ParamLimits

0xfb1e,	// (0x0001a7da) fep_hwr_candidate_pane_g

0xc0d2,	// (0x00016d8e) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc0d2,	// (0x00016d8e) fep_vkb_candidate_drop_down_list_pane

0xc4e3,	// (0x0001719f) fep_vkb_candidate_pane_g3

0xc4eb,	// (0x000171a7) fep_vkb_candidate_pane_g4

0x0002,

0xfb4b,	// (0x0001a807) fep_vkb_candidate_pane_g

0x6035,	// (0x00010cf1) cell_hwr_candidate_pane_g1_ParamLimits

0x6043,	// (0x00010cff) cell_hwr_candidate_pane_g3_ParamLimits

0x6043,	// (0x00010cff) cell_hwr_candidate_pane_g3

0xe11b,	// (0x00018dd7) cell_hwr_candidate_pane_g4_ParamLimits

0xe11b,	// (0x00018dd7) cell_hwr_candidate_pane_g4

0x0002,

0xfb6a,	// (0x0001a826) cell_hwr_candidate_pane_g_ParamLimits

0xfb6a,	// (0x0001a826) cell_hwr_candidate_pane_g

0xc502,	// (0x000171be) cell_vkb_candidate_pane_g3_ParamLimits

0xc502,	// (0x000171be) cell_vkb_candidate_pane_g3

0xc51d,	// (0x000171d9) cell_vkb_candidate_pane_g4_ParamLimits

0xc51d,	// (0x000171d9) cell_vkb_candidate_pane_g4

0xc792,	// (0x0001744e) cell_app_pane_cp2_g1_ParamLimits

0xc792,	// (0x0001744e) cell_app_pane_cp2_g1

0xc7b0,	// (0x0001746c) cell_app_pane_cp2_g2_ParamLimits

0xc7b0,	// (0x0001746c) cell_app_pane_cp2_g2

0x0001,

0xfbb4,	// (0x0001a870) cell_app_pane_cp2_g_ParamLimits

0xfbb4,	// (0x0001a870) cell_app_pane_cp2_g

0xc7bc,	// (0x00017478) cell_app_pane_cp2_t1_ParamLimits

0xc7bc,	// (0x00017478) cell_app_pane_cp2_t1

0x7cb9,	// (0x00012975) grid_highlight_pane_cp1_ParamLimits

0x7cb9,	// (0x00012975) grid_highlight_pane_cp1

0x6082,	// (0x00010d3e) cell_hwr_candidate_pane_cp1_ParamLimits

0x6082,	// (0x00010d3e) cell_hwr_candidate_pane_cp1

0x6035,	// (0x00010cf1) fep_hwr_candidate_drop_down_list_pane_g1

0x60a1,	// (0x00010d5d) fep_hwr_candidate_drop_down_list_pane_g2

0x60ae,	// (0x00010d6a) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb9,	// (0x0001a875) fep_hwr_candidate_drop_down_list_pane_g

0x60bb,	// (0x00010d77) fep_hwr_candidate_drop_down_list_scroll_pane

0x60c4,	// (0x00010d80) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x60c4,	// (0x00010d80) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x60d1,	// (0x00010d8d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x60d1,	// (0x00010d8d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x60de,	// (0x00010d9a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x60de,	// (0x00010d9a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x60eb,	// (0x00010da7) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x60eb,	// (0x00010da7) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6106,	// (0x00010dc2) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6106,	// (0x00010dc2) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6121,	// (0x00010ddd) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6121,	// (0x00010ddd) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x613c,	// (0x00010df8) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x613c,	// (0x00010df8) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6157,	// (0x00010e13) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6157,	// (0x00010e13) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc0,	// (0x0001a87c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc0,	// (0x0001a87c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc7ce,	// (0x0001748a) cell_vkb_candidate_pane_cp1_ParamLimits

0xc7ce,	// (0x0001748a) cell_vkb_candidate_pane_cp1

0xc1eb,	// (0x00016ea7) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc1eb,	// (0x00016ea7) fep_vkb_candidate_drop_down_list_pane_g1

0xc7ee,	// (0x000174aa) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc7ee,	// (0x000174aa) fep_vkb_candidate_drop_down_list_pane_g2

0xc7fb,	// (0x000174b7) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc7fb,	// (0x000174b7) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd1,	// (0x0001a88d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd1,	// (0x0001a88d) fep_vkb_candidate_drop_down_list_pane_g

0xc808,	// (0x000174c4) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc808,	// (0x000174c4) fep_vkb_candidate_drop_down_list_scroll_pane

0xc815,	// (0x000174d1) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc815,	// (0x000174d1) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc822,	// (0x000174de) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc822,	// (0x000174de) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc82e,	// (0x000174ea) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc82e,	// (0x000174ea) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc83a,	// (0x000174f6) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc83a,	// (0x000174f6) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc85b,	// (0x00017517) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc85b,	// (0x00017517) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc87c,	// (0x00017538) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc87c,	// (0x00017538) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc89d,	// (0x00017559) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc89d,	// (0x00017559) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc8be,	// (0x0001757a) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc8be,	// (0x0001757a) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd8,	// (0x0001a894) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd8,	// (0x0001a894) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6ddf,	// (0x00011a9b) title_pane_g1_ParamLimits

0x6dec,	// (0x00011aa8) title_pane_g2_ParamLimits

0xf54e,	// (0x0001a20a) title_pane_g_ParamLimits

0x84a4,	// (0x00013160) aid_call2_pane

0x84ac,	// (0x00013168) aid_call_pane

0x84b4,	// (0x00013170) popup_clock_analogue_window_g1

0x84b4,	// (0x00013170) popup_clock_analogue_window_g2

0x4edc,	// (0x0000fb98) popup_clock_analogue_window_g3

0x4ee5,	// (0x0000fba1) popup_clock_analogue_window_g4

0x6dcb,	// (0x00011a87) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0001a3af) popup_clock_analogue_window_g

0x4eed,	// (0x0000fba9) popup_clock_analogue_window_t1

0x4efb,	// (0x0000fbb7) clock_digital_number_pane_ParamLimits

0x4efb,	// (0x0000fbb7) clock_digital_number_pane

0x4f07,	// (0x0000fbc3) clock_digital_number_pane_cp02_ParamLimits

0x4f07,	// (0x0000fbc3) clock_digital_number_pane_cp02

0x4f13,	// (0x0000fbcf) clock_digital_number_pane_cp03_ParamLimits

0x4f13,	// (0x0000fbcf) clock_digital_number_pane_cp03

0x4f1f,	// (0x0000fbdb) clock_digital_number_pane_cp04_ParamLimits

0x4f1f,	// (0x0000fbdb) clock_digital_number_pane_cp04

0x4f2b,	// (0x0000fbe7) clock_digital_separator_pane_ParamLimits

0x4f2b,	// (0x0000fbe7) clock_digital_separator_pane

0x4f37,	// (0x0000fbf3) popup_clock_digital_window_t1_ParamLimits

0x4f37,	// (0x0000fbf3) popup_clock_digital_window_t1

0x6dcb,	// (0x00011a87) clock_digital_number_pane_g1

0x6dcb,	// (0x00011a87) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0001a3ba) clock_digital_number_pane_g

0x6dcb,	// (0x00011a87) clock_digital_separator_pane_g1

0x6dcb,	// (0x00011a87) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0001a3ba) clock_digital_separator_pane_g

0x8ed7,	// (0x00013b93) aid_fill_nsta_ParamLimits

0x901d,	// (0x00013cd9) indicator_nsta_pane_ParamLimits

0x9196,	// (0x00013e52) popup_clock_analogue_window

0x9196,	// (0x00013e52) popup_clock_digital_window

0x6eb5,	// (0x00011b71) grid_indicator_nsta_pane_ParamLimits

0xb937,	// (0x000165f3) clock_nsta_pane_t2

0x0001,

0xfa9e,	// (0x0001a75a) clock_nsta_pane_t

0x4ea0,	// (0x0000fb5c) aid_size_max_handle

0x4eaa,	// (0x0000fb66) aid_size_min_handle

0x8b56,	// (0x00013812) editor_scroll_pane

0xc8d9,	// (0x00017595) ex_editor_pane

0x7f9d,	// (0x00012c59) scroll_pane_cp13

0x76dd,	// (0x00012399) scroll_pane_cp14

0x84e3,	// (0x0001319f) scroll_pane_cp36

0x850f,	// (0x000131cb) list_single_graphic_hl_pane_cp2_ParamLimits

0x850f,	// (0x000131cb) list_single_graphic_hl_pane_cp2

0xab73,	// (0x0001582f) list_single_graphic_hl_pane_ParamLimits

0xab73,	// (0x0001582f) list_single_graphic_hl_pane

0xc8e1,	// (0x0001759d) aid_size_min_hl_cp1

0xc8ea,	// (0x000175a6) list_highlight_pane_cp34_ParamLimits

0xc8ea,	// (0x000175a6) list_highlight_pane_cp34

0xc8fb,	// (0x000175b7) list_single_graphic_hl_pane_g1_ParamLimits

0xc8fb,	// (0x000175b7) list_single_graphic_hl_pane_g1

0xc908,	// (0x000175c4) list_single_graphic_hl_pane_g2_ParamLimits

0xc908,	// (0x000175c4) list_single_graphic_hl_pane_g2

0xc908,	// (0x000175c4) list_single_graphic_hl_pane_g3_ParamLimits

0xc908,	// (0x000175c4) list_single_graphic_hl_pane_g3

0xb0d3,	// (0x00015d8f) list_single_graphic_hl_pane_g4_ParamLimits

0xb0d3,	// (0x00015d8f) list_single_graphic_hl_pane_g4

0xc914,	// (0x000175d0) list_single_graphic_hl_pane_g5_ParamLimits

0xc914,	// (0x000175d0) list_single_graphic_hl_pane_g5

0x0004,

0xfbe9,	// (0x0001a8a5) list_single_graphic_hl_pane_g_ParamLimits

0xfbe9,	// (0x0001a8a5) list_single_graphic_hl_pane_g

0xc928,	// (0x000175e4) list_single_graphic_hl_pane_t1_ParamLimits

0xc928,	// (0x000175e4) list_single_graphic_hl_pane_t1

0xc93e,	// (0x000175fa) aid_size_min_hl_cp2

0xc947,	// (0x00017603) list_highlight_pane_cp34_cp2_ParamLimits

0xc947,	// (0x00017603) list_highlight_pane_cp34_cp2

0xc8fb,	// (0x000175b7) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc8fb,	// (0x000175b7) list_single_graphic_hl_pane_g1_cp2

0xc954,	// (0x00017610) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc954,	// (0x00017610) list_single_graphic_hl_pane_g2_cp2

0xc960,	// (0x0001761c) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc960,	// (0x0001761c) list_single_graphic_hl_pane_g3_cp2

0xb0d3,	// (0x00015d8f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xb0d3,	// (0x00015d8f) list_single_graphic_hl_pane_g4_cp2

0xc914,	// (0x000175d0) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc914,	// (0x000175d0) list_single_graphic_hl_pane_g5_cp2

0x51eb,	// (0x0000fea7) control_pane_g4_ParamLimits

0x51eb,	// (0x0000fea7) control_pane_g4

0x8ead,	// (0x00013b69) bg_popup_sub_pane_cp10_ParamLimits

0xbf77,	// (0x00016c33) list_choice_list_pane_ParamLimits

0xbf86,	// (0x00016c42) scroll_pane_cp23

0x7158,	// (0x00011e14) bg_popup_preview_window_pane_cp02_ParamLimits

0xc56e,	// (0x0001722a) list_preview_fixed_pane_ParamLimits

0xc584,	// (0x00017240) list_preview_fixed_pane_cp_ParamLimits

0xc584,	// (0x00017240) list_preview_fixed_pane_cp

0xc590,	// (0x0001724c) popup_preview_fixed_window_g1_ParamLimits

0xc590,	// (0x0001724c) popup_preview_fixed_window_g1

0xc59c,	// (0x00017258) popup_preview_fixed_window_g2_ParamLimits

0xc59c,	// (0x00017258) popup_preview_fixed_window_g2

0x0002,

0xfb71,	// (0x0001a82d) popup_preview_fixed_window_g_ParamLimits

0xfb71,	// (0x0001a82d) popup_preview_fixed_window_g

0x4e14,	// (0x0000fad0) aid_navi_side_left_pane_ParamLimits

0x4e29,	// (0x0000fae5) aid_navi_side_right_pane_ParamLimits

0x4e41,	// (0x0000fafd) navi_icon_pane_stacon_ParamLimits

0x4e55,	// (0x0000fb11) navi_navi_pane_stacon_ParamLimits

0x4e41,	// (0x0000fafd) navi_text_pane_stacon_ParamLimits

0x4a2c,	// (0x0000f6e8) main_text_info_pane

0xc984,	// (0x00017640) listscroll_text_info_pane

0xc98c,	// (0x00017648) list_text_info_pane_ParamLimits

0xc98c,	// (0x00017648) list_text_info_pane

0xc99b,	// (0x00017657) scroll_pane_cp24_ParamLimits

0xc99b,	// (0x00017657) scroll_pane_cp24

0xc9b9,	// (0x00017675) list_text_info_pane_t1_ParamLimits

0xc9b9,	// (0x00017675) list_text_info_pane_t1

0x5369,	// (0x00010025) popup_fast_swap2_window_ParamLimits

0x5369,	// (0x00010025) popup_fast_swap2_window

0xc9ea,	// (0x000176a6) aid_size_cell_fast2

0x6dc1,	// (0x00011a7d) bg_popup_window_pane_cp17

0x9938,	// (0x000145f4) heading_pane_cp2

0x73a7,	// (0x00012063) listscroll_fast2_pane

0xc9f4,	// (0x000176b0) grid_fast2_pane

0xc9fe,	// (0x000176ba) listscroll_fast2_pane_g1

0xca06,	// (0x000176c2) listscroll_fast2_pane_g2

0x0001,

0xfbf4,	// (0x0001a8b0) listscroll_fast2_pane_g

0x7f9d,	// (0x00012c59) scroll_pane_cp26

0xca10,	// (0x000176cc) cell_fast2_pane_ParamLimits

0xca10,	// (0x000176cc) cell_fast2_pane

0xca25,	// (0x000176e1) cell_fast2_pane_g1

0xca2e,	// (0x000176ea) cell_fast2_pane_g2

0xca37,	// (0x000176f3) cell_fast2_pane_g3

0x0002,

0xfbf9,	// (0x0001a8b5) cell_fast2_pane_g

0x749a,	// (0x00012156) grid_highlight_pane_cp9

0x532f,	// (0x0000ffeb) main_eswt_pane_ParamLimits

0x532f,	// (0x0000ffeb) main_eswt_pane

0xc9b0,	// (0x0001766c) list_single_text_info_pane

0xca3f,	// (0x000176fb) eswt_ctrl_button_pane

0xca3f,	// (0x000176fb) eswt_ctrl_canvas_pane

0xca47,	// (0x00017703) eswt_ctrl_combo_pane

0xca3f,	// (0x000176fb) eswt_ctrl_default_pane

0xca3f,	// (0x000176fb) eswt_ctrl_label_pane

0xca4f,	// (0x0001770b) eswt_ctrl_wait_pane

0xca57,	// (0x00017713) eswt_shell_pane

0x6dc1,	// (0x00011a7d) listscroll_eswt_app_pane

0xca77,	// (0x00017733) popup_eswt_tasktip_window_ParamLimits

0xca77,	// (0x00017733) popup_eswt_tasktip_window

0x950f,	// (0x000141cb) bg_popup_window_pane_cp18

0xca88,	// (0x00017744) eswt_control_pane_g1_ParamLimits

0xca88,	// (0x00017744) eswt_control_pane_g1

0xca95,	// (0x00017751) eswt_control_pane_g2_ParamLimits

0xca95,	// (0x00017751) eswt_control_pane_g2

0xcaa2,	// (0x0001775e) eswt_control_pane_g3_ParamLimits

0xcaa2,	// (0x0001775e) eswt_control_pane_g3

0xcaaf,	// (0x0001776b) eswt_control_pane_g4_ParamLimits

0xcaaf,	// (0x0001776b) eswt_control_pane_g4

0x0003,

0xfc00,	// (0x0001a8bc) eswt_control_pane_g_ParamLimits

0xfc00,	// (0x0001a8bc) eswt_control_pane_g

0x7cb9,	// (0x00012975) bg_button_pane_ParamLimits

0x7cb9,	// (0x00012975) bg_button_pane

0x74af,	// (0x0001216b) common_borders_pane_copy2_ParamLimits

0x74af,	// (0x0001216b) common_borders_pane_copy2

0xcabc,	// (0x00017778) control_button_pane_g1_ParamLimits

0xcabc,	// (0x00017778) control_button_pane_g1

0xcac8,	// (0x00017784) control_button_pane_g2_ParamLimits

0xcac8,	// (0x00017784) control_button_pane_g2

0xcad4,	// (0x00017790) control_button_pane_g3_ParamLimits

0xcad4,	// (0x00017790) control_button_pane_g3

0x0002,

0xfc09,	// (0x0001a8c5) control_button_pane_g_ParamLimits

0xfc09,	// (0x0001a8c5) control_button_pane_g

0xcae8,	// (0x000177a4) control_button_pane_t1

0xcaf6,	// (0x000177b2) control_button_pane_t2

0x0001,

0xfc10,	// (0x0001a8cc) control_button_pane_t

0x93ed,	// (0x000140a9) bg_button_pane_g1

0x93fd,	// (0x000140b9) bg_button_pane_g2

0x93f5,	// (0x000140b1) bg_button_pane_g3

0x940d,	// (0x000140c9) bg_button_pane_g4

0x9405,	// (0x000140c1) bg_button_pane_g5

0x9415,	// (0x000140d1) bg_button_pane_g6

0x941d,	// (0x000140d9) bg_button_pane_g7

0x942d,	// (0x000140e9) bg_button_pane_g8

0x9425,	// (0x000140e1) bg_button_pane_g9

0x0008,

0xf861,	// (0x0001a51d) bg_button_pane_g

0xbf32,	// (0x00016bee) common_borders_pane_ParamLimits

0xbf32,	// (0x00016bee) common_borders_pane

0xca88,	// (0x00017744) eswt_control_pane_g1_copy1_ParamLimits

0xca88,	// (0x00017744) eswt_control_pane_g1_copy1

0xca95,	// (0x00017751) eswt_control_pane_g2_copy1_ParamLimits

0xca95,	// (0x00017751) eswt_control_pane_g2_copy1

0xcaa2,	// (0x0001775e) eswt_control_pane_g3_copy1_ParamLimits

0xcaa2,	// (0x0001775e) eswt_control_pane_g3_copy1

0xcaaf,	// (0x0001776b) eswt_control_pane_g4_copy1_ParamLimits

0xcaaf,	// (0x0001776b) eswt_control_pane_g4_copy1

0xbf6d,	// (0x00016c29) bg_eswt_ctrl_canvas_pane_g1

0xbf32,	// (0x00016bee) common_borders_pane_cp2_ParamLimits

0xbf32,	// (0x00016bee) common_borders_pane_cp2

0xbf32,	// (0x00016bee) common_borders_pane_cp3_ParamLimits

0xbf32,	// (0x00016bee) common_borders_pane_cp3

0xcb04,	// (0x000177c0) separator_horizontal_pane

0xcb0c,	// (0x000177c8) separator_vertical_pane

0xca88,	// (0x00017744) eswt_control_pane_g1_copy2_ParamLimits

0xca88,	// (0x00017744) eswt_control_pane_g1_copy2

0xca95,	// (0x00017751) eswt_control_pane_g2_copy2_ParamLimits

0xca95,	// (0x00017751) eswt_control_pane_g2_copy2

0xcaa2,	// (0x0001775e) eswt_control_pane_g3_copy2_ParamLimits

0xcaa2,	// (0x0001775e) eswt_control_pane_g3_copy2

0xcaaf,	// (0x0001776b) eswt_control_pane_g4_copy2_ParamLimits

0xcaaf,	// (0x0001776b) eswt_control_pane_g4_copy2

0x6dc1,	// (0x00011a7d) common_borders_pane_cp4

0xcb15,	// (0x000177d1) separator_horizontal_pane_g1

0xcb1e,	// (0x000177da) separator_horizontal_pane_g2

0xcb27,	// (0x000177e3) separator_horizontal_pane_g3

0x0002,

0xfc15,	// (0x0001a8d1) separator_horizontal_pane_g

0xca88,	// (0x00017744) eswt_control_pane_g1_copy3_ParamLimits

0xca88,	// (0x00017744) eswt_control_pane_g1_copy3

0xca95,	// (0x00017751) eswt_control_pane_g2_copy3_ParamLimits

0xca95,	// (0x00017751) eswt_control_pane_g2_copy3

0xcaa2,	// (0x0001775e) eswt_control_pane_g3_copy3_ParamLimits

0xcaa2,	// (0x0001775e) eswt_control_pane_g3_copy3

0xcaaf,	// (0x0001776b) eswt_control_pane_g4_copy3_ParamLimits

0xcaaf,	// (0x0001776b) eswt_control_pane_g4_copy3

0x6dc1,	// (0x00011a7d) common_borders_pane_cp5

0xcb30,	// (0x000177ec) separator_vertical_pane_g1

0xcb39,	// (0x000177f5) separator_vertical_pane_g2

0xcb42,	// (0x000177fe) separator_vertical_pane_g3

0x0002,

0xfc1c,	// (0x0001a8d8) separator_vertical_pane_g

0xca88,	// (0x00017744) eswt_control_pane_g1_copy4_ParamLimits

0xca88,	// (0x00017744) eswt_control_pane_g1_copy4

0xca95,	// (0x00017751) eswt_control_pane_g2_copy4_ParamLimits

0xca95,	// (0x00017751) eswt_control_pane_g2_copy4

0xcaa2,	// (0x0001775e) eswt_control_pane_g3_copy4_ParamLimits

0xcaa2,	// (0x0001775e) eswt_control_pane_g3_copy4

0xcaaf,	// (0x0001776b) eswt_control_pane_g4_copy4_ParamLimits

0xcaaf,	// (0x0001776b) eswt_control_pane_g4_copy4

0xcb4b,	// (0x00017807) eswt_ctrl_combo_button_pane

0xcb53,	// (0x0001780f) eswt_ctrl_input_pane

0xcb5b,	// (0x00017817) popup_choice_list_window_cp70

0xcb63,	// (0x0001781f) eswt_ctrl_input_pane_t1

0x6dc1,	// (0x00011a7d) input_focus_pane_cp70

0xbf32,	// (0x00016bee) bg_button_pane_cp70_ParamLimits

0xbf32,	// (0x00016bee) bg_button_pane_cp70

0xcb71,	// (0x0001782d) eswt_ctrl_combo_button_pane_g1

0xcb79,	// (0x00017835) wait_bar_pane_cp70

0x950f,	// (0x000141cb) bg_popup_window_pane_cp70_ParamLimits

0x950f,	// (0x000141cb) bg_popup_window_pane_cp70

0xcb81,	// (0x0001783d) popup_eswt_tasktip_window_t1

0xcb97,	// (0x00017853) wait_bar_pane_cp71_ParamLimits

0xcb97,	// (0x00017853) wait_bar_pane_cp71

0xcba3,	// (0x0001785f) grid_eswt_app_pane

0x82bd,	// (0x00012f79) scroll_pane_cp70

0xcbac,	// (0x00017868) cell_eswt_app_pane_ParamLimits

0xcbac,	// (0x00017868) cell_eswt_app_pane

0xcbdc,	// (0x00017898) cell_eswt_app_pane_g1_ParamLimits

0xcbdc,	// (0x00017898) cell_eswt_app_pane_g1

0xcc0b,	// (0x000178c7) cell_eswt_app_pane_g2_ParamLimits

0xcc0b,	// (0x000178c7) cell_eswt_app_pane_g2

0x0001,

0xfc23,	// (0x0001a8df) cell_eswt_app_pane_g_ParamLimits

0xfc23,	// (0x0001a8df) cell_eswt_app_pane_g

0xcc34,	// (0x000178f0) cell_eswt_app_pane_t1_ParamLimits

0xcc34,	// (0x000178f0) cell_eswt_app_pane_t1

0xcc66,	// (0x00017922) grid_highlight_pane_cp70_ParamLimits

0xcc66,	// (0x00017922) grid_highlight_pane_cp70

0x8a2b,	// (0x000136e7) set_content_pane_g1

0x8e01,	// (0x00013abd) status_small_volume_pane

0x6172,	// (0x00010e2e) status_small_volume_pane_g1

0x617a,	// (0x00010e36) volume_small2_pane

0x6183,	// (0x00010e3f) volume_small2_pane_g1

0x618c,	// (0x00010e48) volume_small2_pane_g2

0x6195,	// (0x00010e51) volume_small2_pane_g3

0x619e,	// (0x00010e5a) volume_small2_pane_g4

0x61a7,	// (0x00010e63) volume_small2_pane_g5

0x61b0,	// (0x00010e6c) volume_small2_pane_g6

0x61b9,	// (0x00010e75) volume_small2_pane_g7

0x61c2,	// (0x00010e7e) volume_small2_pane_g8

0x61cb,	// (0x00010e87) volume_small2_pane_g9

0x61d4,	// (0x00010e90) volume_small2_pane_g10

0x0009,

0xfc28,	// (0x0001a8e4) volume_small2_pane_g

0xc333,	// (0x00016fef) fep_vkb_top_text_pane_g1_ParamLimits

0xc34e,	// (0x0001700a) fep_vkb_top_text_pane_t1_ParamLimits

0xc5a8,	// (0x00017264) popup_preview_fixed_window_g3_ParamLimits

0xc5a8,	// (0x00017264) popup_preview_fixed_window_g3

0x5818,	// (0x000104d4) popup_toolbar_trans_pane

0xa8d0,	// (0x0001558c) aid_height_set_list_ParamLimits

0xa8e1,	// (0x0001559d) aid_size_parent_ParamLimits

0x8ead,	// (0x00013b69) list_highlight_pane_cp2_ParamLimits

0x8a2b,	// (0x000136e7) set_content_pane_g1_ParamLimits

0xab8f,	// (0x0001584b) list_single_image_pane_ParamLimits

0xab8f,	// (0x0001584b) list_single_image_pane

0xcc72,	// (0x0001792e) aid_size_cell_image_ParamLimits

0xcc72,	// (0x0001792e) aid_size_cell_image

0xcc7f,	// (0x0001793b) grid_single_image_pane_ParamLimits

0xcc7f,	// (0x0001793b) grid_single_image_pane

0x9da3,	// (0x00014a5f) list_single_image_pane_g1_ParamLimits

0x9da3,	// (0x00014a5f) list_single_image_pane_g1

0xcc8b,	// (0x00017947) list_single_image_pane_g2_ParamLimits

0xcc8b,	// (0x00017947) list_single_image_pane_g2

0x0001,

0xfc3d,	// (0x0001a8f9) list_single_image_pane_g_ParamLimits

0xfc3d,	// (0x0001a8f9) list_single_image_pane_g

0xcc9f,	// (0x0001795b) list_single_image_pane_t1_ParamLimits

0xcc9f,	// (0x0001795b) list_single_image_pane_t1

0xccb5,	// (0x00017971) cell_image_list_pane_ParamLimits

0xccb5,	// (0x00017971) cell_image_list_pane

0xccc9,	// (0x00017985) cell_image_list_pane_g1

0xccd2,	// (0x0001798e) cell_image_list_pane_g2

0x0001,

0xfc42,	// (0x0001a8fe) cell_image_list_pane_g

0xccdb,	// (0x00017997) aid_size_cell_tb_trans_pane

0x7cb9,	// (0x00012975) bg_tb_trans_pane

0xcced,	// (0x000179a9) grid_tb_trans_pane

0x93ed,	// (0x000140a9) bg_tb_trans_pane_g1

0x93fd,	// (0x000140b9) bg_tb_trans_pane_g2

0x93f5,	// (0x000140b1) bg_tb_trans_pane_g3

0x940d,	// (0x000140c9) bg_tb_trans_pane_g4

0x9405,	// (0x000140c1) bg_tb_trans_pane_g5

0x942d,	// (0x000140e9) bg_tb_trans_pane_g6

0x9425,	// (0x000140e1) bg_tb_trans_pane_g7

0x9415,	// (0x000140d1) bg_tb_trans_pane_g8

0x941d,	// (0x000140d9) bg_tb_trans_pane_g9

0x0008,

0xfc47,	// (0x0001a903) bg_tb_trans_pane_g

0xcd01,	// (0x000179bd) cell_toolbar_trans_pane_ParamLimits

0xcd01,	// (0x000179bd) cell_toolbar_trans_pane

0xbf6d,	// (0x00016c29) cell_toolbar_trans_pane_g1

0xbaf3,	// (0x000167af) list_form2_midp_pane_t1

0xbb01,	// (0x000167bd) list_form2_midp_pane_t2

0x0001,

0xfae4,	// (0x0001a7a0) list_form2_midp_pane_t

0xbb0f,	// (0x000167cb) scroll_pane_cp51_ParamLimits

0xbd1a,	// (0x000169d6) form2_midp_wait_pane_g1

0xbd23,	// (0x000169df) form2_midp_wait_pane_g2

0xbd2c,	// (0x000169e8) form2_midp_wait_pane_g3

0x0002,

0xfaf9,	// (0x0001a7b5) form2_midp_wait_pane_g

0x6eb5,	// (0x00011b71) list_highlight_pane_cp21_ParamLimits

0xbd78,	// (0x00016a34) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbd87,	// (0x00016a43) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xab17,	// (0x000157d3) list_single_2graphic_im_pane_ParamLimits

0xab17,	// (0x000157d3) list_single_2graphic_im_pane

0xcd27,	// (0x000179e3) list_single_2graphic_im_pane_g1_ParamLimits

0xcd27,	// (0x000179e3) list_single_2graphic_im_pane_g1

0xcd38,	// (0x000179f4) list_single_2graphic_im_pane_g2_ParamLimits

0xcd38,	// (0x000179f4) list_single_2graphic_im_pane_g2

0xcd44,	// (0x00017a00) list_single_2graphic_im_pane_g3_ParamLimits

0xcd44,	// (0x00017a00) list_single_2graphic_im_pane_g3

0x0003,

0xfc5a,	// (0x0001a916) list_single_2graphic_im_pane_g_ParamLimits

0xfc5a,	// (0x0001a916) list_single_2graphic_im_pane_g

0xcd64,	// (0x00017a20) list_single_2graphic_im_pane_t1_ParamLimits

0xcd64,	// (0x00017a20) list_single_2graphic_im_pane_t1

0xc5b4,	// (0x00017270) list_single_graphic_2heading_pane_fp_ParamLimits

0xc5b4,	// (0x00017270) list_single_graphic_2heading_pane_fp

0xc5f8,	// (0x000172b4) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc5f8,	// (0x000172b4) list_single_graphic_2heading_pane_fp_g1

0xc5c9,	// (0x00017285) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc5c9,	// (0x00017285) list_single_graphic_2heading_pane_fp_g2

0x7902,	// (0x000125be) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7902,	// (0x000125be) list_single_graphic_2heading_pane_fp_g3

0x7cdf,	// (0x0001299b) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7cdf,	// (0x0001299b) list_single_graphic_2heading_pane_fp_g4

0xc5d5,	// (0x00017291) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc5d5,	// (0x00017291) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb81,	// (0x0001a83d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb81,	// (0x0001a83d) list_single_graphic_2heading_pane_fp_g

0xcd95,	// (0x00017a51) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcd95,	// (0x00017a51) list_single_graphic_2heading_pane_fp_t1

0xc630,	// (0x000172ec) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc630,	// (0x000172ec) list_single_graphic_2heading_pane_fp_t2

0xcdab,	// (0x00017a67) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcdab,	// (0x00017a67) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc63,	// (0x0001a91f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc63,	// (0x0001a91f) list_single_graphic_2heading_pane_fp_t

0xbff9,	// (0x00016cb5) fep_hwr_write_pane_g5_ParamLimits

0xbff9,	// (0x00016cb5) fep_hwr_write_pane_g5

0xc005,	// (0x00016cc1) fep_hwr_write_pane_g6_ParamLimits

0xc005,	// (0x00016cc1) fep_hwr_write_pane_g6

0xca57,	// (0x00017713) eswt_shell_pane_ParamLimits

0x950f,	// (0x000141cb) bg_popup_window_pane_cp18_ParamLimits

0xa801,	// (0x000154bd) heading_pane_cp70

0xcb81,	// (0x0001783d) popup_eswt_tasktip_window_t1_ParamLimits

0x8f2c,	// (0x00013be8) aid_touch_tab_arrow_left

0x8f3b,	// (0x00013bf7) aid_touch_tab_arrow_right

0x6dfd,	// (0x00011ab9) title_pane_g3_ParamLimits

0x6dfd,	// (0x00011ab9) title_pane_g3

0x7b98,	// (0x00012854) set_value_pane_g1

0x5818,	// (0x000104d4) popup_toolbar_trans_pane_ParamLimits

0xccdb,	// (0x00017997) aid_size_cell_tb_trans_pane_ParamLimits

0x7cb9,	// (0x00012975) bg_tb_trans_pane_ParamLimits

0xcced,	// (0x000179a9) grid_tb_trans_pane_ParamLimits

0x7158,	// (0x00011e14) cont_note_pane_ParamLimits

0x7158,	// (0x00011e14) cont_note_pane

0x74af,	// (0x0001216b) cont_snote2_single_text_pane_ParamLimits

0x74af,	// (0x0001216b) cont_snote2_single_text_pane

0x74af,	// (0x0001216b) cont_snote2_single_graphic_pane_ParamLimits

0x74af,	// (0x0001216b) cont_snote2_single_graphic_pane

0x9b53,	// (0x0001480f) cont_note_wait_pane_ParamLimits

0x9b53,	// (0x0001480f) cont_note_wait_pane

0x9b53,	// (0x0001480f) cont_note_image_pane_ParamLimits

0x9b53,	// (0x0001480f) cont_note_image_pane

0xcdc1,	// (0x00017a7d) popup_note2_window_g1_ParamLimits

0xcdc1,	// (0x00017a7d) popup_note2_window_g1

0xcdf2,	// (0x00017aae) popup_note2_window_t1_ParamLimits

0xcdf2,	// (0x00017aae) popup_note2_window_t1

0xce37,	// (0x00017af3) popup_note2_window_t2_ParamLimits

0xce37,	// (0x00017af3) popup_note2_window_t2

0xce7c,	// (0x00017b38) popup_note2_window_t3_ParamLimits

0xce7c,	// (0x00017b38) popup_note2_window_t3

0xcec1,	// (0x00017b7d) popup_note2_window_t4_ParamLimits

0xcec1,	// (0x00017b7d) popup_note2_window_t4

0x71dc,	// (0x00011e98) popup_note2_window_t5_ParamLimits

0x71dc,	// (0x00011e98) popup_note2_window_t5

0x0004,

0xfc6f,	// (0x0001a92b) popup_note2_window_t_ParamLimits

0xfc6f,	// (0x0001a92b) popup_note2_window_t

0xcef0,	// (0x00017bac) popup_note2_image_window_g1_ParamLimits

0xcef0,	// (0x00017bac) popup_note2_image_window_g1

0xcefc,	// (0x00017bb8) popup_note2_image_window_g2_ParamLimits

0xcefc,	// (0x00017bb8) popup_note2_image_window_g2

0x0001,

0xfc7a,	// (0x0001a936) popup_note2_image_window_g_ParamLimits

0xfc7a,	// (0x0001a936) popup_note2_image_window_g

0xcf0e,	// (0x00017bca) popup_note2_image_window_t1_ParamLimits

0xcf0e,	// (0x00017bca) popup_note2_image_window_t1

0xcf26,	// (0x00017be2) popup_note2_image_window_t2_ParamLimits

0xcf26,	// (0x00017be2) popup_note2_image_window_t2

0xcf3e,	// (0x00017bfa) popup_note2_image_window_t3_ParamLimits

0xcf3e,	// (0x00017bfa) popup_note2_image_window_t3

0x0002,

0xfc7f,	// (0x0001a93b) popup_note2_image_window_t_ParamLimits

0xfc7f,	// (0x0001a93b) popup_note2_image_window_t

0x9b61,	// (0x0001481d) popup_note2_wait_window_g1_ParamLimits

0x9b61,	// (0x0001481d) popup_note2_wait_window_g1

0xcf5a,	// (0x00017c16) popup_note2_wait_window_g2_ParamLimits

0xcf5a,	// (0x00017c16) popup_note2_wait_window_g2

0x9b79,	// (0x00014835) popup_note2_wait_window_g3_ParamLimits

0x9b79,	// (0x00014835) popup_note2_wait_window_g3

0x0002,

0xfc86,	// (0x0001a942) popup_note2_wait_window_g_ParamLimits

0xfc86,	// (0x0001a942) popup_note2_wait_window_g

0xcf66,	// (0x00017c22) popup_note2_wait_window_t1_ParamLimits

0xcf66,	// (0x00017c22) popup_note2_wait_window_t1

0xcf84,	// (0x00017c40) popup_note2_wait_window_t2_ParamLimits

0xcf84,	// (0x00017c40) popup_note2_wait_window_t2

0xcfa2,	// (0x00017c5e) popup_note2_wait_window_t3_ParamLimits

0xcfa2,	// (0x00017c5e) popup_note2_wait_window_t3

0xcfb4,	// (0x00017c70) popup_note2_wait_window_t4_ParamLimits

0xcfb4,	// (0x00017c70) popup_note2_wait_window_t4

0x0003,

0xfc8d,	// (0x0001a949) popup_note2_wait_window_t_ParamLimits

0xfc8d,	// (0x0001a949) popup_note2_wait_window_t

0xcfc6,	// (0x00017c82) wait_bar2_pane_ParamLimits

0xcfc6,	// (0x00017c82) wait_bar2_pane

0xcfde,	// (0x00017c9a) popup_snote2_single_text_window_g1_ParamLimits

0xcfde,	// (0x00017c9a) popup_snote2_single_text_window_g1

0xd006,	// (0x00017cc2) popup_snote2_single_text_window_t1_ParamLimits

0xd006,	// (0x00017cc2) popup_snote2_single_text_window_t1

0xd052,	// (0x00017d0e) popup_snote2_single_text_window_t2_ParamLimits

0xd052,	// (0x00017d0e) popup_snote2_single_text_window_t2

0xd09e,	// (0x00017d5a) popup_snote2_single_text_window_t3_ParamLimits

0xd09e,	// (0x00017d5a) popup_snote2_single_text_window_t3

0xd0df,	// (0x00017d9b) popup_snote2_single_text_window_t4_ParamLimits

0xd0df,	// (0x00017d9b) popup_snote2_single_text_window_t4

0xd115,	// (0x00017dd1) popup_snote2_single_text_window_t5_ParamLimits

0xd115,	// (0x00017dd1) popup_snote2_single_text_window_t5

0x0004,

0xfc96,	// (0x0001a952) popup_snote2_single_text_window_t_ParamLimits

0xfc96,	// (0x0001a952) popup_snote2_single_text_window_t

0xd140,	// (0x00017dfc) popup_snote2_single_graphic_window_g1_ParamLimits

0xd140,	// (0x00017dfc) popup_snote2_single_graphic_window_g1

0xd168,	// (0x00017e24) popup_snote2_single_graphic_window_g2_ParamLimits

0xd168,	// (0x00017e24) popup_snote2_single_graphic_window_g2

0x0001,

0xfca1,	// (0x0001a95d) popup_snote2_single_graphic_window_g_ParamLimits

0xfca1,	// (0x0001a95d) popup_snote2_single_graphic_window_g

0xd190,	// (0x00017e4c) popup_snote2_single_graphic_window_t1_ParamLimits

0xd190,	// (0x00017e4c) popup_snote2_single_graphic_window_t1

0xd1dc,	// (0x00017e98) popup_snote2_single_graphic_window_t2_ParamLimits

0xd1dc,	// (0x00017e98) popup_snote2_single_graphic_window_t2

0xd09e,	// (0x00017d5a) popup_snote2_single_graphic_window_t3_ParamLimits

0xd09e,	// (0x00017d5a) popup_snote2_single_graphic_window_t3

0xd0df,	// (0x00017d9b) popup_snote2_single_graphic_window_t4_ParamLimits

0xd0df,	// (0x00017d9b) popup_snote2_single_graphic_window_t4

0xd115,	// (0x00017dd1) popup_snote2_single_graphic_window_t5_ParamLimits

0xd115,	// (0x00017dd1) popup_snote2_single_graphic_window_t5

0x0004,

0xfca6,	// (0x0001a962) popup_snote2_single_graphic_window_t_ParamLimits

0xfca6,	// (0x0001a962) popup_snote2_single_graphic_window_t

0xb9d0,	// (0x0001668c) clock_nsta_pane_cp2_t1

0xb9d0,	// (0x0001668c) clock_nsta_pane_cp2_t2

0x0001,

0xfaba,	// (0x0001a776) clock_nsta_pane_cp2_t

0x7cd3,	// (0x0001298f) form_field_data_wide_pane_g1_ParamLimits

0x7902,	// (0x000125be) form_field_data_wide_pane_g2_ParamLimits

0x7902,	// (0x000125be) form_field_data_wide_pane_g2

0x7cdf,	// (0x0001299b) form_field_data_wide_pane_g3_ParamLimits

0x7cdf,	// (0x0001299b) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0001a332) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0001a332) form_field_data_wide_pane_g

0xb8d3,	// (0x0001658f) grid_touch_3_pane_ParamLimits

0xb8d3,	// (0x0001658f) grid_touch_3_pane

0xd228,	// (0x00017ee4) cell_touch_3_pane_ParamLimits

0xd228,	// (0x00017ee4) cell_touch_3_pane

0xbf6d,	// (0x00016c29) cell_touch_3_pane_g1

0xbf6d,	// (0x00016c29) cell_touch_3_pane_g2

0x0001,

0xfb3f,	// (0x0001a7fb) cell_touch_3_pane_g

0x720e,	// (0x00011eca) cont_query_data_pane

0x7216,	// (0x00011ed2) cont_query_data_pane_cp1

0xd256,	// (0x00017f12) button_value_adjust_pane_cp7

0xd25e,	// (0x00017f1a) query_popup_pane_cp3

0x85a4,	// (0x00013260) bg_popup_sub_pane_cp22_ParamLimits

0x4f56,	// (0x0000fc12) navi_navi_volume_pane_cp2

0x4f71,	// (0x0000fc2d) popup_side_volume_key_window_g2

0x4f80,	// (0x0000fc3c) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0001a3c8) popup_side_volume_key_window_g

0x4f9d,	// (0x0000fc59) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0001a3cf) popup_side_volume_key_window_t

0x88ea,	// (0x000135a6) popup_side_volume_key_window_ParamLimits

0x78c2,	// (0x0001257e) list_double_graphic_pane_g4_ParamLimits

0x78c2,	// (0x0001257e) list_double_graphic_pane_g4

0xab54,	// (0x00015810) list_single_2heading_msg_pane_ParamLimits

0xab54,	// (0x00015810) list_single_2heading_msg_pane

0xd28d,	// (0x00017f49) list_single_2heading_msg_pane_g1_ParamLimits

0xd28d,	// (0x00017f49) list_single_2heading_msg_pane_g1

0x8a8f,	// (0x0001374b) list_single_2heading_msg_pane_g2_ParamLimits

0x8a8f,	// (0x0001374b) list_single_2heading_msg_pane_g2

0xb404,	// (0x000160c0) list_single_2heading_msg_pane_g3_ParamLimits

0xb404,	// (0x000160c0) list_single_2heading_msg_pane_g3

0xd299,	// (0x00017f55) list_single_2heading_msg_pane_g4_ParamLimits

0xd299,	// (0x00017f55) list_single_2heading_msg_pane_g4

0x0003,

0xfcb1,	// (0x0001a96d) list_single_2heading_msg_pane_g_ParamLimits

0xfcb1,	// (0x0001a96d) list_single_2heading_msg_pane_g

0xd2b1,	// (0x00017f6d) list_single_2heading_msg_pane_t1_ParamLimits

0xd2b1,	// (0x00017f6d) list_single_2heading_msg_pane_t1

0xd2d9,	// (0x00017f95) list_single_2heading_msg_pane_t2_ParamLimits

0xd2d9,	// (0x00017f95) list_single_2heading_msg_pane_t2

0xd308,	// (0x00017fc4) list_single_2heading_msg_pane_t3_ParamLimits

0xd308,	// (0x00017fc4) list_single_2heading_msg_pane_t3

0xd341,	// (0x00017ffd) list_single_2heading_msg_pane_t4_ParamLimits

0xd341,	// (0x00017ffd) list_single_2heading_msg_pane_t4

0x0003,

0xfcba,	// (0x0001a976) list_single_2heading_msg_pane_t_ParamLimits

0xfcba,	// (0x0001a976) list_single_2heading_msg_pane_t

0x6e09,	// (0x00011ac5) title_pane_g4_ParamLimits

0x6e09,	// (0x00011ac5) title_pane_g4

0x4d65,	// (0x0000fa21) title_pane_stacon_g3_ParamLimits

0x4d65,	// (0x0000fa21) title_pane_stacon_g3

0xcd58,	// (0x00017a14) list_single_2graphic_im_pane_g4_ParamLimits

0xcd58,	// (0x00017a14) list_single_2graphic_im_pane_g4

0xa5be,	// (0x0001527a) popup_side_volume_key_window_cp

0xaeca,	// (0x00015b86) main_idle_act2_pane_t1

0x5976,	// (0x00010632) toolbar_button_pane_g10

0x76a7,	// (0x00012363) popup_toolbar_window_cp1

0xb9c1,	// (0x0001667d) clock_nsta_pane_cp_t1

0xb9c1,	// (0x0001667d) clock_nsta_pane_cp_t2

0x0001,

0xfab5,	// (0x0001a771) clock_nsta_pane_cp_t

0x4f56,	// (0x0000fc12) navi_navi_volume_pane_cp2_ParamLimits

0x4f65,	// (0x0000fc21) popup_side_volume_key_window_g1_ParamLimits

0x4f71,	// (0x0000fc2d) popup_side_volume_key_window_g2_ParamLimits

0x4f80,	// (0x0000fc3c) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0001a3c8) popup_side_volume_key_window_g_ParamLimits

0x5dde,	// (0x00010a9a) fep_hwr_aid_pane

0x5e85,	// (0x00010b41) bg_fep_hwr_top_pane_g4_ParamLimits

0xbfc9,	// (0x00016c85) fep_hwr_top_pane_g1_ParamLimits

0xbfdb,	// (0x00016c97) fep_hwr_top_pane_g2_ParamLimits

0x5ea5,	// (0x00010b61) fep_hwr_top_pane_g3_ParamLimits

0xfb0a,	// (0x0001a7c6) fep_hwr_top_pane_g_ParamLimits

0x5eba,	// (0x00010b76) fep_hwr_top_text_pane_ParamLimits

0xa381,	// (0x0001503d) aid_touch_tab_arrow_arrow_2

0xa38a,	// (0x00015046) aid_touch_tab_arrow_left_2

0x5df2,	// (0x00010aae) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5e29,	// (0x00010ae5) fep_hwr_prediction_pane

0xc13b,	// (0x00016df7) fep_vkb_prediction_pane

0xc23f,	// (0x00016efb) fep_vkb_side_pane_g3_ParamLimits

0xc23f,	// (0x00016efb) fep_vkb_side_pane_g3

0x6035,	// (0x00010cf1) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x60a1,	// (0x00010d5d) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x60ae,	// (0x00010d6a) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb9,	// (0x0001a875) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x61dd,	// (0x00010e99) fep_hwr_prediction_pane_g1

0x61e7,	// (0x00010ea3) fep_hwr_prediction_pane_g2

0x61ef,	// (0x00010eab) fep_hwr_prediction_pane_g3

0x61f7,	// (0x00010eb3) fep_hwr_prediction_pane_g4

0x0003,

0xfcc3,	// (0x0001a97f) fep_hwr_prediction_pane_g

0xd366,	// (0x00018022) fep_vkb_prediction_pane_g1

0xd370,	// (0x0001802c) fep_vkb_prediction_pane_g2

0xd378,	// (0x00018034) fep_vkb_prediction_pane_g3

0xd380,	// (0x0001803c) fep_vkb_prediction_pane_g4

0x0003,

0xfccc,	// (0x0001a988) fep_vkb_prediction_pane_g

0x5c5e,	// (0x0001091a) slider_set_pane_g3

0x5c72,	// (0x0001092e) slider_set_pane_g4

0x5c8a,	// (0x00010946) slider_set_pane_g5

0x5c5e,	// (0x0001091a) slider_set_pane_g6

0x5ca0,	// (0x0001095c) slider_set_pane_g7

0xaa46,	// (0x00015702) slider_form_pane_g3

0xaa4f,	// (0x0001570b) slider_form_pane_g4

0xaa57,	// (0x00015713) slider_form_pane_g5

0xaa46,	// (0x00015702) slider_form_pane_g6

0xaa5f,	// (0x0001571b) slider_form_pane_g7

0xb1c6,	// (0x00015e82) slider_set_pane_vc_g3

0xb1cf,	// (0x00015e8b) slider_set_pane_vc_g4

0xb1d8,	// (0x00015e94) slider_set_pane_vc_g5

0xb1c6,	// (0x00015e82) slider_set_pane_vc_g6

0xb1e1,	// (0x00015e9d) slider_set_pane_vc_g7

0xb6a6,	// (0x00016362) slider_form_pane_vc_g1

0xb6af,	// (0x0001636b) slider_form_pane_vc_g2

0xb6b8,	// (0x00016374) slider_form_pane_vc_g3

0xb6a6,	// (0x00016362) slider_form_pane_vc_g4

0xb6c1,	// (0x0001637d) slider_form_pane_vc_g5

0x0004,

0xfa87,	// (0x0001a743) slider_form_pane_vc_g

0x4a2c,	// (0x0000f6e8) main_idle_act3_pane

0xd388,	// (0x00018044) ai3_links_pane

0xd391,	// (0x0001804d) popup_ai3_data_window_ParamLimits

0xd391,	// (0x0001804d) popup_ai3_data_window

0x6dc1,	// (0x00011a7d) grid_ai3_links_pane

0xd3ab,	// (0x00018067) cell_ai3_links_pane_ParamLimits

0xd3ab,	// (0x00018067) cell_ai3_links_pane

0xd3c3,	// (0x0001807f) bg_popup_sub_pane_cp11

0xd3d0,	// (0x0001808c) cell_ai3_links_pane_g1

0x6dc1,	// (0x00011a7d) bg_popup_sub_pane_cp12

0xd3f5,	// (0x000180b1) heading_ai3_data_pane

0xd3fd,	// (0x000180b9) list_ai3_gene_pane

0xd409,	// (0x000180c5) popup_ai3_data_window_g1

0xd411,	// (0x000180cd) heading_ai3_data_pane_g1

0xd419,	// (0x000180d5) heading_ai3_data_pane_t1

0xd427,	// (0x000180e3) list_double_ai3_gene_pane_ParamLimits

0xd427,	// (0x000180e3) list_double_ai3_gene_pane

0xd434,	// (0x000180f0) list_single_ai3_gene_pane_ParamLimits

0xd434,	// (0x000180f0) list_single_ai3_gene_pane

0xbf32,	// (0x00016bee) list_highlight_pane_cp7_ParamLimits

0xbf32,	// (0x00016bee) list_highlight_pane_cp7

0xd441,	// (0x000180fd) list_single_a13_gene_pane_t1_ParamLimits

0xd441,	// (0x000180fd) list_single_a13_gene_pane_t1

0xd458,	// (0x00018114) list_single_ai3_gene_pane_g1

0xd461,	// (0x0001811d) list_single_ai3_gene_pane_g2

0x0001,

0xfcd5,	// (0x0001a991) list_single_ai3_gene_pane_g

0xd469,	// (0x00018125) list_double_ai3_gene_pane_g1_ParamLimits

0xd469,	// (0x00018125) list_double_ai3_gene_pane_g1

0xd475,	// (0x00018131) list_double_ai3_gene_pane_t1_ParamLimits

0xd475,	// (0x00018131) list_double_ai3_gene_pane_t1

0xd491,	// (0x0001814d) list_double_ai3_gene_pane_t2_ParamLimits

0xd491,	// (0x0001814d) list_double_ai3_gene_pane_t2

0xd4a7,	// (0x00018163) list_double_ai3_gene_pane_t3_ParamLimits

0xd4a7,	// (0x00018163) list_double_ai3_gene_pane_t3

0x0002,

0xfcda,	// (0x0001a996) list_double_ai3_gene_pane_t_ParamLimits

0xfcda,	// (0x0001a996) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd26f,	// (0x00017f2b) aid_size_min_col_2

0xd279,	// (0x00017f35) aid_size_min_msg_ParamLimits

0xd279,	// (0x00017f35) aid_size_min_msg

0xc33f,	// (0x00016ffb) fep_vkb_top_text_pane_g2_ParamLimits

0xc33f,	// (0x00016ffb) fep_vkb_top_text_pane_g2

0x0001,

0xfb3a,	// (0x0001a7f6) fep_vkb_top_text_pane_g_ParamLimits

0xfb3a,	// (0x0001a7f6) fep_vkb_top_text_pane_g

0x4a2c,	// (0x0000f6e8) main_hc_apps_shell_pane

0xd4c4,	// (0x00018180) grid_hc_apps_pane_ParamLimits

0xd4c4,	// (0x00018180) grid_hc_apps_pane

0xd4d3,	// (0x0001818f) list_hc_apps_pane

0xd4db,	// (0x00018197) scroll_pane_cp37_ParamLimits

0xd4db,	// (0x00018197) scroll_pane_cp37

0xd4e7,	// (0x000181a3) cell_hc_apps_pane_ParamLimits

0xd4e7,	// (0x000181a3) cell_hc_apps_pane

0xd595,	// (0x00018251) cell_hc_apps_pane_g1_ParamLimits

0xd595,	// (0x00018251) cell_hc_apps_pane_g1

0xd5c6,	// (0x00018282) cell_hc_apps_pane_g2_ParamLimits

0xd5c6,	// (0x00018282) cell_hc_apps_pane_g2

0xd5e2,	// (0x0001829e) cell_hc_apps_pane_g3_ParamLimits

0xd5e2,	// (0x0001829e) cell_hc_apps_pane_g3

0x0002,

0xfce1,	// (0x0001a99d) cell_hc_apps_pane_g_ParamLimits

0xfce1,	// (0x0001a99d) cell_hc_apps_pane_g

0xd604,	// (0x000182c0) cell_hc_apps_pane_t1_ParamLimits

0xd604,	// (0x000182c0) cell_hc_apps_pane_t1

0x7158,	// (0x00011e14) grid_highlight_pane_cp10_ParamLimits

0x7158,	// (0x00011e14) grid_highlight_pane_cp10

0xd644,	// (0x00018300) list_single_hc_apps_pane_ParamLimits

0xd644,	// (0x00018300) list_single_hc_apps_pane

0xd6a0,	// (0x0001835c) list_single_hc_apps_pane_g1

0xd6b9,	// (0x00018375) list_single_hc_apps_pane_g2

0x0001,

0xfce8,	// (0x0001a9a4) list_single_hc_apps_pane_g

0xd6d2,	// (0x0001838e) list_single_hc_apps_pane_g2_copy1

0xd6ee,	// (0x000183aa) list_single_hc_apps_pane_t1

0x6eb5,	// (0x00011b71) bg_set_opt_pane_cp_ParamLimits

0x4c8d,	// (0x0000f949) setting_slider_pane_t1_ParamLimits

0x4ca6,	// (0x0000f962) setting_slider_pane_t2_ParamLimits

0x4cc0,	// (0x0000f97c) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001a21a) setting_slider_pane_t_ParamLimits

0x4cd8,	// (0x0000f994) slider_set_pane_ParamLimits

0x51ff,	// (0x0000febb) control_pane_g5_ParamLimits

0x51ff,	// (0x0000febb) control_pane_g5

0xa895,	// (0x00015551) slider_set_pane_g1_ParamLimits

0x5c52,	// (0x0001090e) slider_set_pane_g2_ParamLimits

0x5c5e,	// (0x0001091a) slider_set_pane_g3_ParamLimits

0x5c72,	// (0x0001092e) slider_set_pane_g4_ParamLimits

0x5c8a,	// (0x00010946) slider_set_pane_g5_ParamLimits

0x5c5e,	// (0x0001091a) slider_set_pane_g6_ParamLimits

0x5ca0,	// (0x0001095c) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0001a61b) slider_set_pane_g_ParamLimits

0x89d6,	// (0x00013692) navi_icon_text_pane_ParamLimits

0x8eed,	// (0x00013ba9) aid_fill_nsta_2_ParamLimits

0x8f2c,	// (0x00013be8) aid_touch_tab_arrow_left_ParamLimits

0x8f3b,	// (0x00013bf7) aid_touch_tab_arrow_right_ParamLimits

0x8fa8,	// (0x00013c64) clock_nsta_pane_ParamLimits

0xa363,	// (0x0001501f) navi_icon_pane_g1_ParamLimits

0xa36f,	// (0x0001502b) navi_text_pane_t1_ParamLimits

0xbacd,	// (0x00016789) navi_icon_text_pane_g1_ParamLimits

0xbad9,	// (0x00016795) navi_icon_text_pane_t1_ParamLimits

0xd6a0,	// (0x0001835c) list_single_hc_apps_pane_g1_ParamLimits

0xd6b9,	// (0x00018375) list_single_hc_apps_pane_g2_ParamLimits

0xfce8,	// (0x0001a9a4) list_single_hc_apps_pane_g_ParamLimits

0xd6d2,	// (0x0001838e) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd6ee,	// (0x000183aa) list_single_hc_apps_pane_t1_ParamLimits

0x4b97,	// (0x0000f853) popup_toolbar2_fixed_window_ParamLimits

0x4b97,	// (0x0000f853) popup_toolbar2_fixed_window

0x580e,	// (0x000104ca) popup_toolbar2_float_window

0x6dc1,	// (0x00011a7d) bg_popup_sub_pane_cp27

0xd71c,	// (0x000183d8) grid_toolbar2_float_pane

0x6dc1,	// (0x00011a7d) bg_popup_sub_pane_cp26

0xd71c,	// (0x000183d8) grid_toolbar2_fixed_pane

0xd724,	// (0x000183e0) cell_toolbar2_fixed_pane_ParamLimits

0xd724,	// (0x000183e0) cell_toolbar2_fixed_pane

0xd734,	// (0x000183f0) cell_toolbar2_fixed_pane_g1

0xd73d,	// (0x000183f9) toolbar2_fixed_button_pane

0x93ed,	// (0x000140a9) toolbar2_fixed_button_pane_g1

0x93fd,	// (0x000140b9) toolbar2_fixed_button_pane_g2

0x93f5,	// (0x000140b1) toolbar2_fixed_button_pane_g3

0x940d,	// (0x000140c9) toolbar2_fixed_button_pane_g4

0x9405,	// (0x000140c1) toolbar2_fixed_button_pane_g5

0x9415,	// (0x000140d1) toolbar2_fixed_button_pane_g6

0x941d,	// (0x000140d9) toolbar2_fixed_button_pane_g7

0x942d,	// (0x000140e9) toolbar2_fixed_button_pane_g8

0x9425,	// (0x000140e1) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0001a51d) toolbar2_fixed_button_pane_g

0xd745,	// (0x00018401) cell_toolbar2_float_pane_ParamLimits

0xd745,	// (0x00018401) cell_toolbar2_float_pane

0xd756,	// (0x00018412) cell_toolbar2_float_pane_g1

0xd73d,	// (0x000183f9) toolbar2_fixed_button_pane_cp

0xc09b,	// (0x00016d57) fep_vkb_accented_list_pane_ParamLimits

0xc09b,	// (0x00016d57) fep_vkb_accented_list_pane

0x6015,	// (0x00010cd1) bg_popup_fep_shadow_pane_g9

0x8b56,	// (0x00013812) bg_popup_fep_shadow_pane_cp3

0x7f84,	// (0x00012c40) list_accented_list_pane

0xd75f,	// (0x0001841b) list_single_accented_list_pane_ParamLimits

0xd75f,	// (0x0001841b) list_single_accented_list_pane

0x8b56,	// (0x00013812) list_highlight_pane_cp10

0xd770,	// (0x0001842c) list_single_accented_list_pane_t1

0x575e,	// (0x0001041a) popup_slider_window_ParamLimits

0x575e,	// (0x0001041a) popup_slider_window

0xd266,	// (0x00017f22) aid_indentation_list_msg

0xd82a,	// (0x000184e6) bg_popup_window_pane_cp19

0xd894,	// (0x00018550) popup_slider_window_g1

0xd8b0,	// (0x0001856c) popup_slider_window_g2

0xd8cc,	// (0x00018588) popup_slider_window_g3

0x0005,

0xfced,	// (0x0001a9a9) popup_slider_window_g

0xd928,	// (0x000185e4) popup_slider_window_t1

0xd99c,	// (0x00018658) small_volume_slider_vertical_pane

0xbf6d,	// (0x00016c29) small_volume_slider_vertical_pane_g1

0xbf6d,	// (0x00016c29) small_volume_slider_vertical_pane_g2

0xd9b8,	// (0x00018674) small_volume_slider_vertical_pane_g3

0x0002,

0xfcff,	// (0x0001a9bb) small_volume_slider_vertical_pane_g

0x494f,	// (0x0000f60b) area_side_right_pane_ParamLimits

0x494f,	// (0x0000f60b) area_side_right_pane

0x61ff,	// (0x00010ebb) aid_size_side_button_ParamLimits

0x61ff,	// (0x00010ebb) aid_size_side_button

0x6213,	// (0x00010ecf) grid_sctrl_middle_pane_ParamLimits

0x6213,	// (0x00010ecf) grid_sctrl_middle_pane

0x6232,	// (0x00010eee) sctrl_sk_bottom_pane

0x6243,	// (0x00010eff) sctrl_sk_top_pane

0x6255,	// (0x00010f11) aid_touch_sctrl_top

0x6262,	// (0x00010f1e) bg_sctrl_sk_pane_ParamLimits

0x6262,	// (0x00010f1e) bg_sctrl_sk_pane

0x6270,	// (0x00010f2c) sctrl_sk_top_pane_g1

0x627d,	// (0x00010f39) sctrl_sk_top_pane_t1

0x6255,	// (0x00010f11) aid_touch_sctrl_bottom

0x6262,	// (0x00010f1e) bg_sctrl_sk_pane_cp_ParamLimits

0x6262,	// (0x00010f1e) bg_sctrl_sk_pane_cp

0x6298,	// (0x00010f54) sctrl_sk_bottom_pane_g1

0x627d,	// (0x00010f39) sctrl_sk_bottom_pane_t1

0x62a1,	// (0x00010f5d) cell_sctrl_middle_pane_ParamLimits

0x62a1,	// (0x00010f5d) cell_sctrl_middle_pane

0x62bc,	// (0x00010f78) aid_touch_sctrl_middle_ParamLimits

0x62bc,	// (0x00010f78) aid_touch_sctrl_middle

0x62ce,	// (0x00010f8a) bg_sctrl_middle_pane_ParamLimits

0x62ce,	// (0x00010f8a) bg_sctrl_middle_pane

0x6035,	// (0x00010cf1) cell_sctrl_middle_pane_g1_ParamLimits

0x6035,	// (0x00010cf1) cell_sctrl_middle_pane_g1

0x62dc,	// (0x00010f98) cell_sctrl_middle_pane_g2_ParamLimits

0x62dc,	// (0x00010f98) cell_sctrl_middle_pane_g2

0x0001,

0xfd0b,	// (0x0001a9c7) cell_sctrl_middle_pane_g_ParamLimits

0xfd0b,	// (0x0001a9c7) cell_sctrl_middle_pane_g

0x93ed,	// (0x000140a9) bg_sctrl_middle_pane_g1

0x93f5,	// (0x000140b1) bg_sctrl_middle_pane_g2

0x93fd,	// (0x000140b9) bg_sctrl_middle_pane_g3

0x9405,	// (0x000140c1) bg_sctrl_middle_pane_g4

0x940d,	// (0x000140c9) bg_sctrl_middle_pane_g5

0x9415,	// (0x000140d1) bg_sctrl_middle_pane_g6

0x941d,	// (0x000140d9) bg_sctrl_middle_pane_g7

0x9425,	// (0x000140e1) bg_sctrl_middle_pane_g8

0x0007,

0xfd10,	// (0x0001a9cc) bg_sctrl_middle_pane_g

0x942d,	// (0x000140e9) bg_sctrl_middle_pane_g8_copy1

0x93ed,	// (0x000140a9) bg_sctrl_sk_pane_g1

0x93fd,	// (0x000140b9) bg_sctrl_sk_pane_g2

0x93f5,	// (0x000140b1) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0001a51d) bg_sctrl_sk_pane_g

0x766d,	// (0x00012329) aid_size_touch_scroll_bar

0x940d,	// (0x000140c9) bg_sctrl_sk_pane_g4

0x9405,	// (0x000140c1) bg_sctrl_sk_pane_g5

0x9415,	// (0x000140d1) bg_sctrl_sk_pane_g6

0x941d,	// (0x000140d9) bg_sctrl_sk_pane_g7

0x942d,	// (0x000140e9) bg_sctrl_sk_pane_g8

0x9425,	// (0x000140e1) bg_sctrl_sk_pane_g9

0x53c7,	// (0x00010083) popup_fep_china_hwr2_fs_candidate_window

0x53d1,	// (0x0001008d) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x53d1,	// (0x0001008d) popup_fep_china_hwr2_fs_control_window

0x6035,	// (0x00010cf1) sctrl_sk_top_pane_g2

0x0001,

0xfd06,	// (0x0001a9c2) sctrl_sk_top_pane_g

0xd9c1,	// (0x0001867d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9c1,	// (0x0001867d) aid_fep_china_hwr2_fs_cell

0xd9d3,	// (0x0001868f) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9d3,	// (0x0001868f) bg_popup_fep_shadow_pane_cp4

0xd9ea,	// (0x000186a6) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9ea,	// (0x000186a6) bg_popup_fep_shadow_pane_cp5

0xd9fc,	// (0x000186b8) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9fc,	// (0x000186b8) popup_fep_china_hwr2_fs_control_bar_grid

0xda0c,	// (0x000186c8) popup_fep_china_hwr2_fs_control_funtion_grid

0xda14,	// (0x000186d0) aid_fep_china_hwr2_fs_candi_cell

0x6dc1,	// (0x00011a7d) bg_popup_fep_shadow_pane_cp6

0xda1e,	// (0x000186da) popup_fep_china_hwr2_fs_candidate_grid

0xda28,	// (0x000186e4) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda28,	// (0x000186e4) cell_fep_china_hwr2_fs_funtion_grid

0xbf6d,	// (0x00016c29) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda40,	// (0x000186fc) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda40,	// (0x000186fc) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda4e,	// (0x0001870a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda4e,	// (0x0001870a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd21,	// (0x0001a9dd) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd21,	// (0x0001a9dd) cell_fep_china_hwr2_fs_funtion_grid_g

0xda64,	// (0x00018720) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda64,	// (0x00018720) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda79,	// (0x00018735) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda79,	// (0x00018735) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd26,	// (0x0001a9e2) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd26,	// (0x0001a9e2) cell_fep_china_hwr2_fs_funtion_grid_t

0xda95,	// (0x00018751) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda9d,	// (0x00018759) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdaa5,	// (0x00018761) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2b,	// (0x0001a9e7) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdaad,	// (0x00018769) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdaad,	// (0x00018769) cell_fep_china_hwr2_fs_candidate_grid

0xdac6,	// (0x00018782) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdace,	// (0x0001878a) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbf6d,	// (0x00016c29) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbf6d,	// (0x00016c29) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3f,	// (0x0001a7fb) cell_fep_china_hwr2_fs_candidate_grid_g

0xdad6,	// (0x00018792) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8fb5,	// (0x00013c71) clock_nsta_pane_cp_24_ParamLimits

0x8fb5,	// (0x00013c71) clock_nsta_pane_cp_24

0x9033,	// (0x00013cef) indicator_nsta_pane_cp_24_ParamLimits

0x9033,	// (0x00013cef) indicator_nsta_pane_cp_24

0xa1df,	// (0x00014e9b) heading_pane_g1

0x0001,

0xf8c6,	// (0x0001a582) heading_pane_g

0xad13,	// (0x000159cf) grid_sct_catagory_button_pane

0xad43,	// (0x000159ff) scroll_pane_cp5_ParamLimits

0xbb1b,	// (0x000167d7) button_value_adjust_pane_cp5_ParamLimits

0xbb1b,	// (0x000167d7) button_value_adjust_pane_cp5

0xbc17,	// (0x000168d3) form2_midp_time_pane_ParamLimits

0xdae4,	// (0x000187a0) cell_sct_catagory_button_pane_ParamLimits

0xdae4,	// (0x000187a0) cell_sct_catagory_button_pane

0xbf32,	// (0x00016bee) bg_button_pane_cp01_ParamLimits

0xbf32,	// (0x00016bee) bg_button_pane_cp01

0xbf6d,	// (0x00016c29) cell_sct_catagory_button_pane_g1

0x579d,	// (0x00010459) popup_tb_extension_window

0xdaf6,	// (0x000187b2) aid_size_cell_ext_ParamLimits

0xdaf6,	// (0x000187b2) aid_size_cell_ext

0x7158,	// (0x00011e14) bg_tb_trans_pane_cp1_ParamLimits

0x7158,	// (0x00011e14) bg_tb_trans_pane_cp1

0xdb16,	// (0x000187d2) grid_tb_ext_pane_ParamLimits

0xdb16,	// (0x000187d2) grid_tb_ext_pane

0xdb44,	// (0x00018800) cell_tb_ext_pane_ParamLimits

0xdb44,	// (0x00018800) cell_tb_ext_pane

0xdb5b,	// (0x00018817) cell_tb_ext_pane_g1_ParamLimits

0xdb5b,	// (0x00018817) cell_tb_ext_pane_g1

0xdb78,	// (0x00018834) cell_tb_ext_pane_t1

0x7158,	// (0x00011e14) list_highlight_pane_cp11_ParamLimits

0x7158,	// (0x00011e14) list_highlight_pane_cp11

0x4bb6,	// (0x0000f872) popup_uni_indicator_window_ParamLimits

0x4bb6,	// (0x0000f872) popup_uni_indicator_window

0x7cb9,	// (0x00012975) bg_popup_sub_pane_cp14

0xdb93,	// (0x0001884f) list_uniindi_pane

0xdb9f,	// (0x0001885b) uniindi_top_pane

0x7158,	// (0x00011e14) bg_uniindi_top_pane

0xdbbe,	// (0x0001887a) uniindi_top_pane_g1

0xdbd4,	// (0x00018890) uniindi_top_pane_g2

0x0003,

0xfd32,	// (0x0001a9ee) uniindi_top_pane_g

0xdbfe,	// (0x000188ba) uniindi_top_pane_t1

0xdc28,	// (0x000188e4) list_single_uniindi_pane_ParamLimits

0xdc28,	// (0x000188e4) list_single_uniindi_pane

0xbf6d,	// (0x00016c29) bg_uniindi_top_pane_g1

0xdc3b,	// (0x000188f7) list_single_uniindi_pane_g1

0xdc4e,	// (0x0001890a) list_single_uniindi_pane_t1

0x4a2c,	// (0x0000f6e8) control_bg_pane

0xdc73,	// (0x0001892f) bg_sctrl_sk_pane_cp1

0xdc7c,	// (0x00018938) bg_sctrl_sk_pane_cp2

0xdc85,	// (0x00018941) control_bg_pane_g1

0xdc8e,	// (0x0001894a) control_bg_pane_g2

0x0001,

0xfd3b,	// (0x0001a9f7) control_bg_pane_g

0xb976,	// (0x00016632) cell_indicator_nsta_pane_g1_ParamLimits

0xb984,	// (0x00016640) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa3,	// (0x0001a75f) cell_indicator_nsta_pane_g_ParamLimits

0xbc9f,	// (0x0001695b) form2_midp_time_pane_t1_ParamLimits

0x532f,	// (0x0000ffeb) main_idle_act4_pane_ParamLimits

0x532f,	// (0x0000ffeb) main_idle_act4_pane

0x579d,	// (0x00010459) popup_tb_extension_window_ParamLimits

0xdb34,	// (0x000187f0) tb_ext_find_pane_ParamLimits

0xdb34,	// (0x000187f0) tb_ext_find_pane

0xdc97,	// (0x00018953) ai_gene_pane_1_cp1

0x8c9d,	// (0x00013959) ai_gene_pane_2_cp1

0xdc9f,	// (0x0001895b) list_single_idle_plugin_calendar_pane

0xdca8,	// (0x00018964) list_single_idle_plugin_notification_pane

0xdcb1,	// (0x0001896d) list_single_idle_plugin_player_pane

0xdcba,	// (0x00018976) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcba,	// (0x00018976) list_single_idle_plugin_shortcut_pane

0xdcdc,	// (0x00018998) main_idle_act4_pane_t1

0xdcee,	// (0x000189aa) main_idle_act4_pane_t2

0x0001,

0xfd40,	// (0x0001a9fc) main_idle_act4_pane_t

0xdd00,	// (0x000189bc) middle_sk_idle_act4_pane_ParamLimits

0xdd00,	// (0x000189bc) middle_sk_idle_act4_pane

0xdd16,	// (0x000189d2) popup_clock_digital_analogue_window_cp2

0xdd30,	// (0x000189ec) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd30,	// (0x000189ec) shortcut_wheel_idle_act4_pane

0xbf6d,	// (0x00016c29) shortcut_wheel_idle_act4_pane_g1

0xbf6d,	// (0x00016c29) shortcut_wheel_idle_act4_pane_g2

0xbf6d,	// (0x00016c29) shortcut_wheel_idle_act4_pane_g3

0xbf6d,	// (0x00016c29) shortcut_wheel_idle_act4_pane_g4

0xbf6d,	// (0x00016c29) shortcut_wheel_idle_act4_pane_g5

0xdd44,	// (0x00018a00) shortcut_wheel_idle_act4_pane_g6

0xdd4c,	// (0x00018a08) shortcut_wheel_idle_act4_pane_g7

0xdd54,	// (0x00018a10) shortcut_wheel_idle_act4_pane_g8

0xdd5c,	// (0x00018a18) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd45,	// (0x0001aa01) shortcut_wheel_idle_act4_pane_g

0xc1eb,	// (0x00016ea7) middle_sk_idle_act4_pane_g1_ParamLimits

0xc1eb,	// (0x00016ea7) middle_sk_idle_act4_pane_g1

0xddc0,	// (0x00018a7c) middle_sk_idle_act4_pane_g2_ParamLimits

0xddc0,	// (0x00018a7c) middle_sk_idle_act4_pane_g2

0x0001,

0xfd68,	// (0x0001aa24) middle_sk_idle_act4_pane_g_ParamLimits

0xfd68,	// (0x0001aa24) middle_sk_idle_act4_pane_g

0xddcc,	// (0x00018a88) middle_sk_idle_act4_pane_t1_ParamLimits

0xddcc,	// (0x00018a88) middle_sk_idle_act4_pane_t1

0xdde9,	// (0x00018aa5) grid_ai_shortcut_pane_ParamLimits

0xdde9,	// (0x00018aa5) grid_ai_shortcut_pane

0xde02,	// (0x00018abe) list_highlight_pane_cp16_ParamLimits

0xde02,	// (0x00018abe) list_highlight_pane_cp16

0xde0f,	// (0x00018acb) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde0f,	// (0x00018acb) list_single_idle_plugin_shortcut_pane_g1

0xde1b,	// (0x00018ad7) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde1b,	// (0x00018ad7) list_single_idle_plugin_shortcut_pane_g2

0xde33,	// (0x00018aef) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde33,	// (0x00018aef) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6d,	// (0x0001aa29) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6d,	// (0x0001aa29) list_single_idle_plugin_shortcut_pane_g

0xde46,	// (0x00018b02) cell_ai_shortcut_pane_ParamLimits

0xde46,	// (0x00018b02) cell_ai_shortcut_pane

0xde6a,	// (0x00018b26) cell_ai_shortcut_pane_g1_ParamLimits

0xde6a,	// (0x00018b26) cell_ai_shortcut_pane_g1

0xdc97,	// (0x00018953) ai_gene_pane_1_cp2

0xde8c,	// (0x00018b48) ai_gene_pane_2_cp2

0xde94,	// (0x00018b50) list_highlight_pane_cp15

0xde9d,	// (0x00018b59) list_single_idle_plugin_calendar_pane_g1

0xde94,	// (0x00018b50) list_highlight_pane_cp17

0xdea5,	// (0x00018b61) list_single_idle_plugin_calendar_pane_g1_copy1

0xdead,	// (0x00018b69) list_single_idle_plugin_player_pane_g1

0xaf6c,	// (0x00015c28) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd74,	// (0x0001aa30) list_single_idle_plugin_player_pane_g

0xdeb5,	// (0x00018b71) list_single_idle_plugin_player_pane_t1

0xdec3,	// (0x00018b7f) list_single_idle_plugin_player_pane_t2

0xded1,	// (0x00018b8d) list_single_idle_plugin_player_pane_t3

0xdedf,	// (0x00018b9b) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd79,	// (0x0001aa35) list_single_idle_plugin_player_pane_t

0xdeed,	// (0x00018ba9) wait_bar_pane_cp15

0xdef5,	// (0x00018bb1) grid_ai_notification_pane

0xaf6c,	// (0x00015c28) list_single_idle_plugin_notification_pane_g1

0xdefe,	// (0x00018bba) cell_ai_notification_pane_ParamLimits

0xdefe,	// (0x00018bba) cell_ai_notification_pane

0xdf0b,	// (0x00018bc7) cell_ai_notification_pane_g1

0xdf13,	// (0x00018bcf) cell_ai_notification_pane_t1

0xdf21,	// (0x00018bdd) tb_ext_find_button_pane

0xdf29,	// (0x00018be5) tb_ext_find_pane_g1

0xdf31,	// (0x00018bed) tb_ext_find_pane_t1

0x84b4,	// (0x00013170) tb_ext_find_button_pane_g1

0xdf3f,	// (0x00018bfb) tb_ext_find_button_pane_g2

0x0001,

0xfd82,	// (0x0001aa3e) tb_ext_find_button_pane_g

0xdcdc,	// (0x00018998) main_idle_act4_pane_t1_ParamLimits

0xdcee,	// (0x000189aa) main_idle_act4_pane_t2_ParamLimits

0xfd40,	// (0x0001a9fc) main_idle_act4_pane_t_ParamLimits

0xdd16,	// (0x000189d2) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd24,	// (0x000189e0) sat_plugin_idle_act4_pane_ParamLimits

0xdd24,	// (0x000189e0) sat_plugin_idle_act4_pane

0xdf48,	// (0x00018c04) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf48,	// (0x00018c04) sat_plugin_idle_act4_pane_t1

0xdf5b,	// (0x00018c17) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf5b,	// (0x00018c17) sat_plugin_idle_act4_pane_t2

0xdf6e,	// (0x00018c2a) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf6e,	// (0x00018c2a) sat_plugin_idle_act4_pane_t3

0xdf81,	// (0x00018c3d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf81,	// (0x00018c3d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd87,	// (0x0001aa43) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd87,	// (0x0001aa43) sat_plugin_idle_act4_pane_t

0x4af1,	// (0x0000f7ad) popup_battery_window_ParamLimits

0x4af1,	// (0x0000f7ad) popup_battery_window

0x7158,	// (0x00011e14) bg_popup_sub_pane_cp25_ParamLimits

0x7158,	// (0x00011e14) bg_popup_sub_pane_cp25

0xdf94,	// (0x00018c50) popup_battery_window_g1_ParamLimits

0xdf94,	// (0x00018c50) popup_battery_window_g1

0xdfa0,	// (0x00018c5c) popup_battery_window_t1_ParamLimits

0xdfa0,	// (0x00018c5c) popup_battery_window_t1

0xdfb2,	// (0x00018c6e) popup_battery_window_t2_ParamLimits

0xdfb2,	// (0x00018c6e) popup_battery_window_t2

0x0001,

0xfd90,	// (0x0001aa4c) popup_battery_window_t_ParamLimits

0xfd90,	// (0x0001aa4c) popup_battery_window_t

0x8b6a,	// (0x00013826) midp_canvas_pane_ParamLimits

0x8be1,	// (0x0001389d) midp_keypad_pane_ParamLimits

0x8be1,	// (0x0001389d) midp_keypad_pane

0x8ead,	// (0x00013b69) main_midp_pane_ParamLimits

0xb9df,	// (0x0001669b) signal_pane_g2_cp_ParamLimits

0xdfcf,	// (0x00018c8b) aid_size_cell_midp_keypad_ParamLimits

0xdfcf,	// (0x00018c8b) aid_size_cell_midp_keypad

0xdfe9,	// (0x00018ca5) midp_keyp_game_grid_pane_ParamLimits

0xdfe9,	// (0x00018ca5) midp_keyp_game_grid_pane

0xe009,	// (0x00018cc5) midp_keyp_rocker_pane_ParamLimits

0xe009,	// (0x00018cc5) midp_keyp_rocker_pane

0xe042,	// (0x00018cfe) midp_keyp_sk_left_pane_ParamLimits

0xe042,	// (0x00018cfe) midp_keyp_sk_left_pane

0xe09c,	// (0x00018d58) midp_keyp_sk_right_pane_ParamLimits

0xe09c,	// (0x00018d58) midp_keyp_sk_right_pane

0x6dc1,	// (0x00011a7d) bg_button_pane_cp03

0xe0f6,	// (0x00018db2) midp_keyp_sk_left_pane_g1

0x6dc1,	// (0x00011a7d) bg_button_pane_cp04

0xe0f6,	// (0x00018db2) midp_keyp_sk_right_pane_g1

0xbf6d,	// (0x00016c29) midp_keyp_rocker_pane_g1

0xe0ff,	// (0x00018dbb) keyp_game_cell_pane_ParamLimits

0xe0ff,	// (0x00018dbb) keyp_game_cell_pane

0x6dc1,	// (0x00011a7d) bg_button_pane_cp02

0xe112,	// (0x00018dce) keyp_game_cell_pane_g1

0x4b35,	// (0x0000f7f1) popup_fep_vkb2_window_ParamLimits

0x4b35,	// (0x0000f7f1) popup_fep_vkb2_window

0x62fa,	// (0x00010fb6) aid_size_cell_vkb2_ParamLimits

0x62fa,	// (0x00010fb6) aid_size_cell_vkb2

0x634e,	// (0x0001100a) popup_fep_vkb2_window_g1_ParamLimits

0x634e,	// (0x0001100a) popup_fep_vkb2_window_g1

0x6396,	// (0x00011052) vkb2_area_bottom_pane_ParamLimits

0x6396,	// (0x00011052) vkb2_area_bottom_pane

0x63e2,	// (0x0001109e) vkb2_area_keypad_pane_ParamLimits

0x63e2,	// (0x0001109e) vkb2_area_keypad_pane

0x6424,	// (0x000110e0) vkb2_area_top_pane_ParamLimits

0x6424,	// (0x000110e0) vkb2_area_top_pane

0x649e,	// (0x0001115a) vkb2_top_entry_pane_ParamLimits

0x649e,	// (0x0001115a) vkb2_top_entry_pane

0x64c8,	// (0x00011184) vkb2_top_grid_left_pane_ParamLimits

0x64c8,	// (0x00011184) vkb2_top_grid_left_pane

0x64e6,	// (0x000111a2) vkb2_top_grid_right_pane_ParamLimits

0x64e6,	// (0x000111a2) vkb2_top_grid_right_pane

0x6504,	// (0x000111c0) vkb2_cell_keypad_pane_ParamLimits

0x6504,	// (0x000111c0) vkb2_cell_keypad_pane

0x65d5,	// (0x00011291) vkb2_area_bottom_grid_pane_ParamLimits

0x65d5,	// (0x00011291) vkb2_area_bottom_grid_pane

0x65fb,	// (0x000112b7) vkb2_area_bottom_pane_g1_ParamLimits

0x65fb,	// (0x000112b7) vkb2_area_bottom_pane_g1

0x661f,	// (0x000112db) vkb2_area_bottom_pane_g2_ParamLimits

0x661f,	// (0x000112db) vkb2_area_bottom_pane_g2

0x664d,	// (0x00011309) vkb2_area_bottom_pane_g3_ParamLimits

0x664d,	// (0x00011309) vkb2_area_bottom_pane_g3

0x0002,

0xfd95,	// (0x0001aa51) vkb2_area_bottom_pane_g_ParamLimits

0xfd95,	// (0x0001aa51) vkb2_area_bottom_pane_g

0x66ae,	// (0x0001136a) vkb2_top_cell_left_pane_ParamLimits

0x66ae,	// (0x0001136a) vkb2_top_cell_left_pane

0xe144,	// (0x00018e00) vkb2_top_entry_pane_g1_ParamLimits

0xe144,	// (0x00018e00) vkb2_top_entry_pane_g1

0xe152,	// (0x00018e0e) vkb2_top_entry_pane_t1_ParamLimits

0xe152,	// (0x00018e0e) vkb2_top_entry_pane_t1

0xe184,	// (0x00018e40) vkb2_top_entry_pane_t2_ParamLimits

0xe184,	// (0x00018e40) vkb2_top_entry_pane_t2

0xe1b6,	// (0x00018e72) vkb2_top_entry_pane_t3_ParamLimits

0xe1b6,	// (0x00018e72) vkb2_top_entry_pane_t3

0x0002,

0xfd9c,	// (0x0001aa58) vkb2_top_entry_pane_t_ParamLimits

0xfd9c,	// (0x0001aa58) vkb2_top_entry_pane_t

0x66fb,	// (0x000113b7) vkb2_top_grid_right_pane_g1_ParamLimits

0x66fb,	// (0x000113b7) vkb2_top_grid_right_pane_g1

0x6711,	// (0x000113cd) vkb2_top_grid_right_pane_g2_ParamLimits

0x6711,	// (0x000113cd) vkb2_top_grid_right_pane_g2

0x6729,	// (0x000113e5) vkb2_top_grid_right_pane_g3_ParamLimits

0x6729,	// (0x000113e5) vkb2_top_grid_right_pane_g3

0x6741,	// (0x000113fd) vkb2_top_grid_right_pane_g4_ParamLimits

0x6741,	// (0x000113fd) vkb2_top_grid_right_pane_g4

0x0003,

0xfda3,	// (0x0001aa5f) vkb2_top_grid_right_pane_g_ParamLimits

0xfda3,	// (0x0001aa5f) vkb2_top_grid_right_pane_g

0x6757,	// (0x00011413) vkb2_top_cell_left_pane_g1

0x676e,	// (0x0001142a) vkb2_cell_keypad_pane_g1_ParamLimits

0x676e,	// (0x0001142a) vkb2_cell_keypad_pane_g1

0xe1da,	// (0x00018e96) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1da,	// (0x00018e96) vkb2_cell_keypad_pane_t1

0x677c,	// (0x00011438) vkb2_cell_bottom_grid_pane_ParamLimits

0x677c,	// (0x00011438) vkb2_cell_bottom_grid_pane

0x67b5,	// (0x00011471) vkb2_cell_bottom_grid_pane_g1

0xdd64,	// (0x00018a20) aid_call2_pane_cp02

0xdd6c,	// (0x00018a28) aid_call_pane_cp02

0xdd74,	// (0x00018a30) clock_digital_number_pane_cp10

0xdd7c,	// (0x00018a38) clock_digital_number_pane_cp11

0xdd84,	// (0x00018a40) clock_digital_number_pane_cp12

0xdd8c,	// (0x00018a48) clock_digital_number_pane_cp13

0xdd94,	// (0x00018a50) clock_digital_separator_pane_cp10

0x84b4,	// (0x00013170) popup_clock_digital_analogue_window_cp2_g1

0x84b4,	// (0x00013170) popup_clock_digital_analogue_window_cp2_g2

0xdd9c,	// (0x00018a58) popup_clock_digital_analogue_window_cp2_g3

0x84b4,	// (0x00013170) popup_clock_digital_analogue_window_cp2_g4

0xdd9c,	// (0x00018a58) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd58,	// (0x0001aa14) popup_clock_digital_analogue_window_cp2_g

0xdda4,	// (0x00018a60) popup_clock_digital_analogue_window_cp2_t1

0xddb2,	// (0x00018a6e) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd63,	// (0x0001aa1f) popup_clock_digital_analogue_window_cp2_t

0xbf6d,	// (0x00016c29) clock_digital_number_pane_cp10_g1

0xbf6d,	// (0x00016c29) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3f,	// (0x0001a7fb) clock_digital_number_pane_cp10_g

0xbf6d,	// (0x00016c29) clock_digital_separator_pane_cp10_g1

0xbf6d,	// (0x00016c29) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3f,	// (0x0001a7fb) clock_digital_separator_pane_cp10_g

0xdbe0,	// (0x0001889c) uniindi_top_pane_g3

0xdbf1,	// (0x000188ad) uniindi_top_pane_g4

0x658f,	// (0x0001124b) vkb2_row_keypad_pane_ParamLimits

0x658f,	// (0x0001124b) vkb2_row_keypad_pane

0x67d1,	// (0x0001148d) vkb2_cell_t_keypad_pane_ParamLimits

0x67d1,	// (0x0001148d) vkb2_cell_t_keypad_pane

0x67e1,	// (0x0001149d) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x67e1,	// (0x0001149d) vkb2_cell_t_keypad_pane_cp08

0x67f4,	// (0x000114b0) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x67f4,	// (0x000114b0) vkb2_cell_t_keypad_pane_cp09

0x6808,	// (0x000114c4) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6808,	// (0x000114c4) vkb2_cell_t_keypad_pane_cp01

0x6819,	// (0x000114d5) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6819,	// (0x000114d5) vkb2_cell_t_keypad_pane_cp02

0x682a,	// (0x000114e6) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x682a,	// (0x000114e6) vkb2_cell_t_keypad_pane_cp03

0x683b,	// (0x000114f7) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x683b,	// (0x000114f7) vkb2_cell_t_keypad_pane_cp04

0x684c,	// (0x00011508) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x684c,	// (0x00011508) vkb2_cell_t_keypad_pane_cp05

0x685d,	// (0x00011519) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x685d,	// (0x00011519) vkb2_cell_t_keypad_pane_cp06

0x686e,	// (0x0001152a) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x686e,	// (0x0001152a) vkb2_cell_t_keypad_pane_cp07

0x687f,	// (0x0001153b) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x687f,	// (0x0001153b) vkb2_cell_t_keypad_pane_cp10

0x6035,	// (0x00010cf1) vkb2_cell_t_keypad_pane_g1

0xe1f1,	// (0x00018ead) vkb2_cell_t_keypad_pane_t1

0x4a2c,	// (0x0000f6e8) popup_grid_graphic2_window

0xe203,	// (0x00018ebf) aid_size_cell_graphic2_ParamLimits

0xe203,	// (0x00018ebf) aid_size_cell_graphic2

0xe23b,	// (0x00018ef7) bg_popup_window_pane_cp21_ParamLimits

0xe23b,	// (0x00018ef7) bg_popup_window_pane_cp21

0xe249,	// (0x00018f05) graphic2_pages_pane_ParamLimits

0xe249,	// (0x00018f05) graphic2_pages_pane

0xe28f,	// (0x00018f4b) grid_graphic2_control_pane_ParamLimits

0xe28f,	// (0x00018f4b) grid_graphic2_control_pane

0xe2cd,	// (0x00018f89) grid_graphic2_pane_ParamLimits

0xe2cd,	// (0x00018f89) grid_graphic2_pane

0xe341,	// (0x00018ffd) cell_graphic2_pane

0x4a2c,	// (0x0000f6e8) main_comp_mode_pane

0xd3fd,	// (0x000180b9) list_ai3_gene_pane_ParamLimits

0xd82a,	// (0x000184e6) bg_popup_window_pane_cp19_ParamLimits

0xd836,	// (0x000184f2) bg_touch_area_indi_pane_ParamLimits

0xd836,	// (0x000184f2) bg_touch_area_indi_pane

0xd84c,	// (0x00018508) bg_touch_area_indi_pane_cp01_ParamLimits

0xd84c,	// (0x00018508) bg_touch_area_indi_pane_cp01

0xd862,	// (0x0001851e) bg_touch_area_indi_pane_cp02_ParamLimits

0xd862,	// (0x0001851e) bg_touch_area_indi_pane_cp02

0xd87a,	// (0x00018536) bg_touch_area_indi_pane_cp03_ParamLimits

0xd87a,	// (0x00018536) bg_touch_area_indi_pane_cp03

0xd894,	// (0x00018550) popup_slider_window_g1_ParamLimits

0xd8b0,	// (0x0001856c) popup_slider_window_g2_ParamLimits

0xd8cc,	// (0x00018588) popup_slider_window_g3_ParamLimits

0xfced,	// (0x0001a9a9) popup_slider_window_g_ParamLimits

0xd928,	// (0x000185e4) popup_slider_window_t1_ParamLimits

0xd99c,	// (0x00018658) small_volume_slider_vertical_pane_ParamLimits

0xe341,	// (0x00018ffd) cell_graphic2_pane_ParamLimits

0xe390,	// (0x0001904c) bg_button_pane_cp10_ParamLimits

0xe390,	// (0x0001904c) bg_button_pane_cp10

0xe3a3,	// (0x0001905f) bg_button_pane_cp11_ParamLimits

0xe3a3,	// (0x0001905f) bg_button_pane_cp11

0xe3b6,	// (0x00019072) graphic2_pages_pane_g1_ParamLimits

0xe3b6,	// (0x00019072) graphic2_pages_pane_g1

0xe3d1,	// (0x0001908d) graphic2_pages_pane_g2_ParamLimits

0xe3d1,	// (0x0001908d) graphic2_pages_pane_g2

0x0001,

0xfdb1,	// (0x0001aa6d) graphic2_pages_pane_g_ParamLimits

0xfdb1,	// (0x0001aa6d) graphic2_pages_pane_g

0xe3e9,	// (0x000190a5) graphic2_pages_pane_t1_ParamLimits

0xe3e9,	// (0x000190a5) graphic2_pages_pane_t1

0xe401,	// (0x000190bd) cell_graphic2_control_pane_ParamLimits

0xe401,	// (0x000190bd) cell_graphic2_control_pane

0xe41f,	// (0x000190db) cell_graphic2_pane_g1_ParamLimits

0xe41f,	// (0x000190db) cell_graphic2_pane_g1

0xe42c,	// (0x000190e8) cell_graphic2_pane_g2_ParamLimits

0xe42c,	// (0x000190e8) cell_graphic2_pane_g2

0xe439,	// (0x000190f5) cell_graphic2_pane_g3_ParamLimits

0xe439,	// (0x000190f5) cell_graphic2_pane_g3

0xe446,	// (0x00019102) cell_graphic2_pane_g4_ParamLimits

0xe446,	// (0x00019102) cell_graphic2_pane_g4

0xe453,	// (0x0001910f) cell_graphic2_pane_g5_ParamLimits

0xe453,	// (0x0001910f) cell_graphic2_pane_g5

0x0004,

0xfdb6,	// (0x0001aa72) cell_graphic2_pane_g_ParamLimits

0xfdb6,	// (0x0001aa72) cell_graphic2_pane_g

0xe46e,	// (0x0001912a) cell_graphic2_pane_t1_ParamLimits

0xe46e,	// (0x0001912a) cell_graphic2_pane_t1

0x950f,	// (0x000141cb) grid_highlight_pane_cp11_ParamLimits

0x950f,	// (0x000141cb) grid_highlight_pane_cp11

0x7158,	// (0x00011e14) bg_button_pane_cp05

0xe4a5,	// (0x00019161) cell_graphic2_control_pane_g1

0xbf6d,	// (0x00016c29) bg_touch_area_indi_pane_g1

0xe4cd,	// (0x00019189) aid_cmod_rocker_key_size

0xe4d7,	// (0x00019193) aid_cmode_itu_key_size

0xe4e1,	// (0x0001919d) main_cmode_video_pane

0xe4eb,	// (0x000191a7) main_comp_mode_itu_pane

0xe4f7,	// (0x000191b3) main_comp_mode_rocker_pane

0xe503,	// (0x000191bf) cell_cmode_rocker_pane_ParamLimits

0xe503,	// (0x000191bf) cell_cmode_rocker_pane

0xe515,	// (0x000191d1) cell_cmode_itu_pane_ParamLimits

0xe515,	// (0x000191d1) cell_cmode_itu_pane

0x7cb9,	// (0x00012975) bg_button_pane_cp06_ParamLimits

0x7cb9,	// (0x00012975) bg_button_pane_cp06

0xc1eb,	// (0x00016ea7) cell_cmode_rocker_pane_g1_ParamLimits

0xc1eb,	// (0x00016ea7) cell_cmode_rocker_pane_g1

0xda40,	// (0x000186fc) cell_cmode_rocker_pane_g2_ParamLimits

0xda40,	// (0x000186fc) cell_cmode_rocker_pane_g2

0x0001,

0xfdc6,	// (0x0001aa82) cell_cmode_rocker_pane_g_ParamLimits

0xfdc6,	// (0x0001aa82) cell_cmode_rocker_pane_g

0x6dc1,	// (0x00011a7d) bg_button_pane_cp07

0xe52a,	// (0x000191e6) cell_cmode_itu_pane_g1

0xe533,	// (0x000191ef) cell_cmode_itu_pane_t1

0xe541,	// (0x000191fd) cell_cmode_itu_pane_t2

0x0001,

0xfdcb,	// (0x0001aa87) cell_cmode_itu_pane_t

0xdc63,	// (0x0001891f) aid_touch_ctrl_left

0xdc6b,	// (0x00018927) aid_touch_ctrl_right

0x6dc1,	// (0x00011a7d) compa_mode_pane

0xe54f,	// (0x0001920b) aid_cmod_rocker_key_size_cp

0xe559,	// (0x00019215) aid_cmode_itu_key_size_cp

0xe563,	// (0x0001921f) compa_mode_pane_g1

0xe56b,	// (0x00019227) compa_mode_pane_g2

0xe573,	// (0x0001922f) compa_mode_pane_g3

0x0002,

0xfdd0,	// (0x0001aa8c) compa_mode_pane_g

0xe57b,	// (0x00019237) main_comp_mode_itu_pane_cp

0xe583,	// (0x0001923f) main_comp_mode_rocker_pane_cp

0xe58b,	// (0x00019247) cell_cmode_itu_pane_cp_ParamLimits

0xe58b,	// (0x00019247) cell_cmode_itu_pane_cp

0xe5a0,	// (0x0001925c) cell_cmode_rocker_pane_cp_ParamLimits

0xe5a0,	// (0x0001925c) cell_cmode_rocker_pane_cp

0x7cb9,	// (0x00012975) bg_button_pane_cp06_cp_ParamLimits

0x7cb9,	// (0x00012975) bg_button_pane_cp06_cp

0xc1eb,	// (0x00016ea7) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc1eb,	// (0x00016ea7) cell_cmode_rocker_pane_g1_cp

0xbf6d,	// (0x00016c29) cell_cmode_rocker_pane_g2_cp

0x6dc1,	// (0x00011a7d) bg_button_pane_cp07_cp

0xaa46,	// (0x00015702) cell_cmode_itu_pane_g1_cp

0xe5b2,	// (0x0001926e) cell_cmode_itu_pane_t1_cp

0xe5b2,	// (0x0001926e) cell_cmode_itu_pane_t2_cp

0xaa33,	// (0x000156ef) settings_code_pane_cp2

0x6eb5,	// (0x00011b71) bg_popup_window_pane_cp3_ParamLimits

0x7332,	// (0x00011fee) heading_pane_cp3_ParamLimits

0x733e,	// (0x00011ffa) listscroll_popup_graphic_pane_ParamLimits

0x5dde,	// (0x00010a9a) fep_hwr_aid_pane_ParamLimits

0x6255,	// (0x00010f11) aid_touch_sctrl_top_ParamLimits

0x6270,	// (0x00010f2c) sctrl_sk_top_pane_g1_ParamLimits

0x6035,	// (0x00010cf1) sctrl_sk_top_pane_g2_ParamLimits

0xfd06,	// (0x0001a9c2) sctrl_sk_top_pane_g_ParamLimits

0x627d,	// (0x00010f39) sctrl_sk_top_pane_t1_ParamLimits

0x6255,	// (0x00010f11) aid_touch_sctrl_bottom_ParamLimits

0x627d,	// (0x00010f39) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbac,	// (0x00018868) aid_area_touch_clock

0x6466,	// (0x00011122) aid_vkb2_area_top_pane_cell_ParamLimits

0x6466,	// (0x00011122) aid_vkb2_area_top_pane_cell

0x65b1,	// (0x0001126d) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x65b1,	// (0x0001126d) aid_vkb2_area_bottom_pane_cell

0xe13c,	// (0x00018df8) popup_char_count_window

0xe5c0,	// (0x0001927c) popup_char_count_window_g1

0xe5c9,	// (0x00019285) popup_char_count_window_g2

0xe5d2,	// (0x0001928e) popup_char_count_window_g3

0x0002,

0xfdd7,	// (0x0001aa93) popup_char_count_window_g

0xe5db,	// (0x00019297) popup_char_count_window_t1

0x632c,	// (0x00010fe8) popup_fep_char_preview_window_ParamLimits

0x632c,	// (0x00010fe8) popup_fep_char_preview_window

0x6484,	// (0x00011140) vkb2_top_candi_pane_ParamLimits

0x6484,	// (0x00011140) vkb2_top_candi_pane

0xe5e9,	// (0x000192a5) cell_vkb2_top_candi_pane_ParamLimits

0xe5e9,	// (0x000192a5) cell_vkb2_top_candi_pane

0x6894,	// (0x00011550) bg_popup_fep_char_preview_window_ParamLimits

0x6894,	// (0x00011550) bg_popup_fep_char_preview_window

0x68a2,	// (0x0001155e) popup_fep_char_preview_window_t1_ParamLimits

0x68a2,	// (0x0001155e) popup_fep_char_preview_window_t1

0xe636,	// (0x000192f2) bg_popup_fep_char_preview_window_g1

0xe63e,	// (0x000192fa) bg_popup_fep_char_preview_window_g2

0xe646,	// (0x00019302) bg_popup_fep_char_preview_window_g3

0xe64e,	// (0x0001930a) bg_popup_fep_char_preview_window_g4

0xe656,	// (0x00019312) bg_popup_fep_char_preview_window_g5

0x68dc,	// (0x00011598) bg_popup_fep_char_preview_window_g6

0xe65e,	// (0x0001931a) bg_popup_fep_char_preview_window_g7

0xe666,	// (0x00019322) bg_popup_fep_char_preview_window_g8

0xe66e,	// (0x0001932a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdde,	// (0x0001aa9a) bg_popup_fep_char_preview_window_g

0x6035,	// (0x00010cf1) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6035,	// (0x00010cf1) cell_vkb2_top_candi_pane_g1

0x6043,	// (0x00010cff) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6043,	// (0x00010cff) cell_vkb2_top_candi_pane_g2

0xe11b,	// (0x00018dd7) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe11b,	// (0x00018dd7) cell_vkb2_top_candi_pane_g3

0x68e4,	// (0x000115a0) cell_vkb2_top_candi_pane_g4_ParamLimits

0x68e4,	// (0x000115a0) cell_vkb2_top_candi_pane_g4

0xc85b,	// (0x00017517) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc85b,	// (0x00017517) cell_vkb2_top_candi_pane_g5

0x6905,	// (0x000115c1) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6905,	// (0x000115c1) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf1,	// (0x0001aaad) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf1,	// (0x0001aaad) cell_vkb2_top_candi_pane_g

0x6913,	// (0x000115cf) cell_vkb2_top_candi_pane_t1

0x5c3e,	// (0x000108fa) aid_size_touch_slider_mark_ParamLimits

0x5c3e,	// (0x000108fa) aid_size_touch_slider_mark

0xe27f,	// (0x00018f3b) grid_graphic2_catg_pane_ParamLimits

0xe27f,	// (0x00018f3b) grid_graphic2_catg_pane

0xe31d,	// (0x00018fd9) popup_grid_graphic2_window_t1_ParamLimits

0xe31d,	// (0x00018fd9) popup_grid_graphic2_window_t1

0xe32f,	// (0x00018feb) popup_grid_graphic2_window_t2_ParamLimits

0xe32f,	// (0x00018feb) popup_grid_graphic2_window_t2

0x0001,

0xfdac,	// (0x0001aa68) popup_grid_graphic2_window_t_ParamLimits

0xfdac,	// (0x0001aa68) popup_grid_graphic2_window_t

0x7158,	// (0x00011e14) bg_button_pane_cp05_ParamLimits

0xe4a5,	// (0x00019161) cell_graphic2_control_pane_g1_ParamLimits

0xe676,	// (0x00019332) cell_graphic2_catg_pane_ParamLimits

0xe676,	// (0x00019332) cell_graphic2_catg_pane

0x6dc1,	// (0x00011a7d) bg_button_pane_cp12

0xe688,	// (0x00019344) cell_graphic2_catg_pane_g1

0xdb78,	// (0x00018834) cell_tb_ext_pane_t1_ParamLimits

0x66ce,	// (0x0001138a) vkb2_top_cell_right_narrow_pane_ParamLimits

0x66ce,	// (0x0001138a) vkb2_top_cell_right_narrow_pane

0x66e6,	// (0x000113a2) vkb2_top_cell_right_wide_pane_ParamLimits

0x66e6,	// (0x000113a2) vkb2_top_cell_right_wide_pane

0x5dd0,	// (0x00010a8c) bg_vkb2_func_pane_ParamLimits

0x5dd0,	// (0x00010a8c) bg_vkb2_func_pane

0x6757,	// (0x00011413) vkb2_top_cell_left_pane_g1_ParamLimits

0x5dd0,	// (0x00010a8c) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5dd0,	// (0x00010a8c) bg_vkb2_fuc_pane_cp03

0x67b5,	// (0x00011471) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x93f5,	// (0x000140b1) bg_vkb2_func_pane_g1

0x93fd,	// (0x000140b9) bg_vkb2_func_pane_g2

0x940d,	// (0x000140c9) bg_vkb2_func_pane_g3

0x9405,	// (0x000140c1) bg_vkb2_func_pane_g4

0x9415,	// (0x000140d1) bg_vkb2_func_pane_g5

0x941d,	// (0x000140d9) bg_vkb2_func_pane_g6

0x9425,	// (0x000140e1) bg_vkb2_func_pane_g7

0x942d,	// (0x000140e9) bg_vkb2_func_pane_g8

0x93ed,	// (0x000140a9) bg_vkb2_func_pane_g9

0x0008,

0xfdfe,	// (0x0001aaba) bg_vkb2_func_pane_g

0x5dd0,	// (0x00010a8c) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5dd0,	// (0x00010a8c) bg_vkb2_fuc_pane_cp01

0x6757,	// (0x00011413) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6757,	// (0x00011413) vkb2_top_cell_right_wide_pane_g1

0x5dd0,	// (0x00010a8c) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5dd0,	// (0x00010a8c) bg_vkb2_fuc_pane_cp02

0x67b5,	// (0x00011471) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x67b5,	// (0x00011471) vkb2_top_cell_right_narrow_pane_g1

0xd7ae,	// (0x0001846a) aid_touch_area_decrease_ParamLimits

0xd7ae,	// (0x0001846a) aid_touch_area_decrease

0xd7cc,	// (0x00018488) aid_touch_area_increase_ParamLimits

0xd7cc,	// (0x00018488) aid_touch_area_increase

0xd7d8,	// (0x00018494) aid_touch_area_mute_ParamLimits

0xd7d8,	// (0x00018494) aid_touch_area_mute

0xd7fc,	// (0x000184b8) aid_touch_area_slider_ParamLimits

0xd7fc,	// (0x000184b8) aid_touch_area_slider

0xd8e8,	// (0x000185a4) popup_slider_window_g4_ParamLimits

0xd8e8,	// (0x000185a4) popup_slider_window_g4

0xd8f4,	// (0x000185b0) popup_slider_window_g5_ParamLimits

0xd8f4,	// (0x000185b0) popup_slider_window_g5

0xd916,	// (0x000185d2) popup_slider_window_g6_ParamLimits

0xd916,	// (0x000185d2) popup_slider_window_g6

0xd956,	// (0x00018612) popup_slider_window_t2_ParamLimits

0xd956,	// (0x00018612) popup_slider_window_t2

0x0001,

0xfcfa,	// (0x0001a9b6) popup_slider_window_t_ParamLimits

0xfcfa,	// (0x0001a9b6) popup_slider_window_t

0xd96e,	// (0x0001862a) slider_pane_ParamLimits

0xd96e,	// (0x0001862a) slider_pane

0xe691,	// (0x0001934d) slider_pane_g1_ParamLimits

0xe691,	// (0x0001934d) slider_pane_g1

0xe6a5,	// (0x00019361) slider_pane_g2_ParamLimits

0xe6a5,	// (0x00019361) slider_pane_g2

0xe6bb,	// (0x00019377) slider_pane_g3_ParamLimits

0xe6bb,	// (0x00019377) slider_pane_g3

0x0003,

0xfe11,	// (0x0001aacd) slider_pane_g_ParamLimits

0xfe11,	// (0x0001aacd) slider_pane_g

0x57f9,	// (0x000104b5) popup_tb_float_extension_window_ParamLimits

0x57f9,	// (0x000104b5) popup_tb_float_extension_window

0xe6e7,	// (0x000193a3) aid_size_cell_tb_float_ext

0x6dc1,	// (0x00011a7d) bg_popup_sub_window_cp28

0xe6f3,	// (0x000193af) grid_tb_float_ext_pane

0xe6fd,	// (0x000193b9) cell_tb_float_ext_pane_ParamLimits

0xe6fd,	// (0x000193b9) cell_tb_float_ext_pane

0xe717,	// (0x000193d3) cell_tb_float_ext_pane_g1

0xe720,	// (0x000193dc) grid_highlight_pane_cp12

0x5f1f,	// (0x00010bdb) cell_last_hwr_side_pane_ParamLimits

0x5f1f,	// (0x00010bdb) cell_last_hwr_side_pane

0xbf6d,	// (0x00016c29) cell_last_hwr_side_pane_g1

0xe729,	// (0x000193e5) cell_last_hwr_side_pane_g2

0x0001,

0xfe1a,	// (0x0001aad6) cell_last_hwr_side_pane_g

0x667d,	// (0x00011339) vkb2_area_bottom_space_btn_pane_ParamLimits

0x667d,	// (0x00011339) vkb2_area_bottom_space_btn_pane

0x6035,	// (0x00010cf1) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1f1,	// (0x00018ead) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6913,	// (0x000115cf) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6932,	// (0x000115ee) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6932,	// (0x000115ee) vkb2_area_bottom_space_btn_pane_g1

0x696c,	// (0x00011628) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x696c,	// (0x00011628) vkb2_area_bottom_space_btn_pane_g2

0x69a2,	// (0x0001165e) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x69a2,	// (0x0001165e) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1f,	// (0x0001aadb) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1f,	// (0x0001aadb) vkb2_area_bottom_space_btn_pane_g

0x5e93,	// (0x00010b4f) cel_fep_hwr_func_pane_ParamLimits

0x5e93,	// (0x00010b4f) cel_fep_hwr_func_pane

0x5ecf,	// (0x00010b8b) cell_hwr_side_button_pane_ParamLimits

0x5ecf,	// (0x00010b8b) cell_hwr_side_button_pane

0xdbac,	// (0x00018868) aid_area_touch_clock_ParamLimits

0x7158,	// (0x00011e14) bg_uniindi_top_pane_ParamLimits

0xdbbe,	// (0x0001887a) uniindi_top_pane_g1_ParamLimits

0xdbd4,	// (0x00018890) uniindi_top_pane_g2_ParamLimits

0xdbe0,	// (0x0001889c) uniindi_top_pane_g3_ParamLimits

0xdbf1,	// (0x000188ad) uniindi_top_pane_g4_ParamLimits

0xfd32,	// (0x0001a9ee) uniindi_top_pane_g_ParamLimits

0xdbfe,	// (0x000188ba) uniindi_top_pane_t1_ParamLimits

0x7158,	// (0x00011e14) bg_vkb2_func_pane_cp01_ParamLimits

0x7158,	// (0x00011e14) bg_vkb2_func_pane_cp01

0xe732,	// (0x000193ee) cel_fep_hwr_func_pane_g1_ParamLimits

0xe732,	// (0x000193ee) cel_fep_hwr_func_pane_g1

0x7158,	// (0x00011e14) bg_vkb2_func_pane_cp02_ParamLimits

0x7158,	// (0x00011e14) bg_vkb2_func_pane_cp02

0xe732,	// (0x000193ee) cell_hwr_side_button_pane_g1_ParamLimits

0xe732,	// (0x000193ee) cell_hwr_side_button_pane_g1

0x9240,	// (0x00013efc) status_pane_g4_ParamLimits

0x9240,	// (0x00013efc) status_pane_g4

0x925a,	// (0x00013f16) status_pane_t1

0xbcb2,	// (0x0001696e) form2_midp_gauge_slider_cont_pane

0xbcba,	// (0x00016976) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbccc,	// (0x00016988) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbcde,	// (0x0001699a) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf2,	// (0x0001a7ae) form2_midp_gauge_slider_pane_t_ParamLimits

0xbcf0,	// (0x000169ac) form2_midp_slider_pane_ParamLimits

0x62ec,	// (0x00010fa8) aid_size_cell_func_vkb2_ParamLimits

0x62ec,	// (0x00010fa8) aid_size_cell_func_vkb2

0xe6d3,	// (0x0001938f) slider_pane_g4_ParamLimits

0xe6d3,	// (0x0001938f) slider_pane_g4

0x69ec,	// (0x000116a8) form2_midp_gauge_slider_pane_t2_cp01

0x69fa,	// (0x000116b6) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x69fa,	// (0x000116b6) form2_midp_gauge_slider_pane_t3_cp01

0x6a17,	// (0x000116d3) form2_midp_slider_pane_cp01

0x6dc1,	// (0x00011a7d) navi_smil_pane

0xe76b,	// (0x00019427) navi_smil_pane_g1

0xe773,	// (0x0001942f) navi_smil_pane_t1

0xe740,	// (0x000193fc) form2_midp_slider_pane_g1

0xe749,	// (0x00019405) form2_midp_slider_pane_g2

0xe751,	// (0x0001940d) form2_midp_slider_pane_g3

0xe740,	// (0x000193fc) form2_midp_slider_pane_g4

0xe759,	// (0x00019415) form2_midp_slider_pane_g5

0x0004,

0xfe28,	// (0x0001aae4) form2_midp_slider_pane_g

0x69dc,	// (0x00011698) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x69dc,	// (0x00011698) vkb2_area_bottom_space_btn_pane_g4

0x906f,	// (0x00013d2b) lc0_navi_pane_ParamLimits

0x906f,	// (0x00013d2b) lc0_navi_pane

0x90e5,	// (0x00013da1) lc0_stat_indi_pane_ParamLimits

0x90e5,	// (0x00013da1) lc0_stat_indi_pane

0x90fc,	// (0x00013db8) ls0_title_pane_ParamLimits

0x90fc,	// (0x00013db8) ls0_title_pane

0x7cb9,	// (0x00012975) bg_popup_sub_pane_cp14_ParamLimits

0xdb93,	// (0x0001884f) list_uniindi_pane_ParamLimits

0xdb9f,	// (0x0001885b) uniindi_top_pane_ParamLimits

0xdc3b,	// (0x000188f7) list_single_uniindi_pane_g1_ParamLimits

0xdc4e,	// (0x0001890a) list_single_uniindi_pane_t1_ParamLimits

0x6a20,	// (0x000116dc) lc0_stat_clock_pane_ParamLimits

0x6a20,	// (0x000116dc) lc0_stat_clock_pane

0xe781,	// (0x0001943d) lc0_stat_indi_pane_g1_ParamLimits

0xe781,	// (0x0001943d) lc0_stat_indi_pane_g1

0xe78e,	// (0x0001944a) lc0_stat_indi_pane_g2_ParamLimits

0xe78e,	// (0x0001944a) lc0_stat_indi_pane_g2

0x0001,

0xfe33,	// (0x0001aaef) lc0_stat_indi_pane_g_ParamLimits

0xfe33,	// (0x0001aaef) lc0_stat_indi_pane_g

0x6a2d,	// (0x000116e9) lc0_uni_indicator_pane_ParamLimits

0x6a2d,	// (0x000116e9) lc0_uni_indicator_pane

0xe79b,	// (0x00019457) ls0_title_pane_g1_ParamLimits

0xe79b,	// (0x00019457) ls0_title_pane_g1

0xe7af,	// (0x0001946b) ls0_title_pane_t1_ParamLimits

0xe7af,	// (0x0001946b) ls0_title_pane_t1

0x6a3a,	// (0x000116f6) lc0_uni_indicator_pane_g1_ParamLimits

0x6a3a,	// (0x000116f6) lc0_uni_indicator_pane_g1

0xe7e5,	// (0x000194a1) lc0_stat_clock_pane_t1

0x4a2c,	// (0x0000f6e8) main_ai5_pane

0xe7f3,	// (0x000194af) ai5_sk_pane_ParamLimits

0xe7f3,	// (0x000194af) ai5_sk_pane

0xe800,	// (0x000194bc) cell_ai5_widget_pane_ParamLimits

0xe800,	// (0x000194bc) cell_ai5_widget_pane

0xe8b2,	// (0x0001956e) aid_size_cell_widget_grid

0xe8c8,	// (0x00019584) bg_ai5_widget_pane_ParamLimits

0xe8c8,	// (0x00019584) bg_ai5_widget_pane

0xe93c,	// (0x000195f8) cell_ai5_widget_pane_g2

0xe94c,	// (0x00019608) cell_ai5_widget_pane_g3

0xe963,	// (0x0001961f) cell_ai5_widget_pane_g4

0xe96f,	// (0x0001962b) cell_ai5_widget_pane_g5

0xe97b,	// (0x00019637) cell_ai5_widget_pane_g6

0xe987,	// (0x00019643) cell_ai5_widget_pane_g7

0xe9cf,	// (0x0001968b) cell_ai5_widget_pane_t1_ParamLimits

0xe9cf,	// (0x0001968b) cell_ai5_widget_pane_t1

0xe9ec,	// (0x000196a8) cell_ai5_widget_pane_t2_ParamLimits

0xe9ec,	// (0x000196a8) cell_ai5_widget_pane_t2

0xea04,	// (0x000196c0) cell_ai5_widget_pane_t3_ParamLimits

0xea04,	// (0x000196c0) cell_ai5_widget_pane_t3

0xea1c,	// (0x000196d8) cell_ai5_widget_pane_t4_ParamLimits

0xea1c,	// (0x000196d8) cell_ai5_widget_pane_t4

0xea39,	// (0x000196f5) cell_ai5_widget_pane_t5_ParamLimits

0xea39,	// (0x000196f5) cell_ai5_widget_pane_t5

0xea58,	// (0x00019714) cell_ai5_widget_pane_t6_ParamLimits

0xea58,	// (0x00019714) cell_ai5_widget_pane_t6

0xea6a,	// (0x00019726) cell_ai5_widget_pane_t7_ParamLimits

0xea6a,	// (0x00019726) cell_ai5_widget_pane_t7

0xea83,	// (0x0001973f) cell_ai5_widget_pane_t8_ParamLimits

0xea83,	// (0x0001973f) cell_ai5_widget_pane_t8

0x0009,

0xfe4d,	// (0x0001ab09) cell_ai5_widget_pane_t_ParamLimits

0xfe4d,	// (0x0001ab09) cell_ai5_widget_pane_t

0xead7,	// (0x00019793) grid_ai5_widget_pane

0x7cb9,	// (0x00012975) highlight_cell_ai5_widget_pane_ParamLimits

0x7cb9,	// (0x00012975) highlight_cell_ai5_widget_pane

0xeaee,	// (0x000197aa) ai5_sk_left_pane

0xeaf8,	// (0x000197b4) ai5_sk_middle_pane

0xeb02,	// (0x000197be) ai5_sk_right_pane

0xeb0c,	// (0x000197c8) bg_ai5_widget_pane_g1_ParamLimits

0xeb0c,	// (0x000197c8) bg_ai5_widget_pane_g1

0xeb18,	// (0x000197d4) bg_ai5_widget_pane_g2_ParamLimits

0xeb18,	// (0x000197d4) bg_ai5_widget_pane_g2

0xeb24,	// (0x000197e0) bg_ai5_widget_pane_g3_ParamLimits

0xeb24,	// (0x000197e0) bg_ai5_widget_pane_g3

0xeb30,	// (0x000197ec) bg_ai5_widget_pane_g4_ParamLimits

0xeb30,	// (0x000197ec) bg_ai5_widget_pane_g4

0xeb3c,	// (0x000197f8) bg_ai5_widget_pane_g5_ParamLimits

0xeb3c,	// (0x000197f8) bg_ai5_widget_pane_g5

0xeb48,	// (0x00019804) bg_ai5_widget_pane_g6_ParamLimits

0xeb48,	// (0x00019804) bg_ai5_widget_pane_g6

0xeb54,	// (0x00019810) bg_ai5_widget_pane_g7_ParamLimits

0xeb54,	// (0x00019810) bg_ai5_widget_pane_g7

0xeb60,	// (0x0001981c) bg_ai5_widget_pane_g8_ParamLimits

0xeb60,	// (0x0001981c) bg_ai5_widget_pane_g8

0xeb6c,	// (0x00019828) bg_ai5_widget_pane_g9_ParamLimits

0xeb6c,	// (0x00019828) bg_ai5_widget_pane_g9

0x0008,

0xfe62,	// (0x0001ab1e) bg_ai5_widget_pane_g_ParamLimits

0xfe62,	// (0x0001ab1e) bg_ai5_widget_pane_g

0xeb9e,	// (0x0001985a) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb9e,	// (0x0001985a) cell_shortcut_ai5_widget_pane

0x8b56,	// (0x00013812) bg_cell_shortcut_ai5_widget_pane

0xebaf,	// (0x0001986b) cell_grid_ai5_widget_pane_g1

0x8b56,	// (0x00013812) highlight_cell_shortcut_ai5_widget_pane

0x93f5,	// (0x000140b1) ai5_sk_left_pane_g1

0xebb8,	// (0x00019874) ai5_sk_left_pane_g2

0xebc0,	// (0x0001987c) ai5_sk_left_pane_g3

0xebc8,	// (0x00019884) ai5_sk_left_pane_g4

0x0003,

0xfe75,	// (0x0001ab31) ai5_sk_left_pane_g

0xebd0,	// (0x0001988c) ai5_sk_left_pane_t1

0x93fd,	// (0x000140b9) ai5_sk_right_pane_g1

0xebde,	// (0x0001989a) ai5_sk_right_pane_g2

0xebe6,	// (0x000198a2) ai5_sk_right_pane_g3

0xebee,	// (0x000198aa) ai5_sk_right_pane_g4

0x0003,

0xfe7e,	// (0x0001ab3a) ai5_sk_right_pane_g

0xebf6,	// (0x000198b2) ai5_sk_right_pane_t1

0x93fd,	// (0x000140b9) ai5_sk_middle_pane_g1

0x93f5,	// (0x000140b1) ai5_sk_middle_pane_g2

0x9415,	// (0x000140d1) ai5_sk_middle_pane_g3

0xebe6,	// (0x000198a2) ai5_sk_middle_pane_g4

0xebc0,	// (0x0001987c) ai5_sk_middle_pane_g5

0xec04,	// (0x000198c0) ai5_sk_middle_pane_g6

0xec0c,	// (0x000198c8) ai5_sk_middle_pane_g7

0x0006,

0xfe87,	// (0x0001ab43) ai5_sk_middle_pane_g

0x8efb,	// (0x00013bb7) aid_touch_area_size_lc0_ParamLimits

0x8efb,	// (0x00013bb7) aid_touch_area_size_lc0

0x6064,	// (0x00010d20) cell_hwr_candidate_pane_t1_ParamLimits

0x8f17,	// (0x00013bd3) aid_touch_navi_pane

0x91ea,	// (0x00013ea6) status_dt_navi_pane_ParamLimits

0x91ea,	// (0x00013ea6) status_dt_navi_pane

0x91f7,	// (0x00013eb3) status_dt_sta_pane_ParamLimits

0x91f7,	// (0x00013eb3) status_dt_sta_pane

0xec14,	// (0x000198d0) dt_sta_controll_pane

0xec21,	// (0x000198dd) dt_sta_indi_pane

0xec32,	// (0x000198ee) dt_sta_title_pane

0x7158,	// (0x00011e14) bg_dt_sta_indi_pane_ParamLimits

0x7158,	// (0x00011e14) bg_dt_sta_indi_pane

0xec45,	// (0x00019901) dt_sta_battery_pane

0xec4d,	// (0x00019909) dt_sta_indi_pane_g1

0xec56,	// (0x00019912) dt_sta_indi_pane_g2

0xec5f,	// (0x0001991b) dt_sta_indi_pane_g3

0x0002,

0xfe96,	// (0x0001ab52) dt_sta_indi_pane_g

0xec68,	// (0x00019924) dt_sta_signal_pane

0x7cb9,	// (0x00012975) bg_dt_sta_title_pane_ParamLimits

0x7cb9,	// (0x00012975) bg_dt_sta_title_pane

0xec71,	// (0x0001992d) dt_sta_title_pane_g1

0xec79,	// (0x00019935) dt_sta_title_pane_t1_ParamLimits

0xec79,	// (0x00019935) dt_sta_title_pane_t1

0x6dc1,	// (0x00011a7d) bg_dt_sta_control_pane

0xec8e,	// (0x0001994a) dt_sta_controll_pane_g1

0xec97,	// (0x00019953) bg_dt_sta_title_pane_g1

0xeca0,	// (0x0001995c) bg_dt_sta_title_pane_g2

0xeca9,	// (0x00019965) bg_dt_sta_title_pane_g3

0x0002,

0xfe9d,	// (0x0001ab59) bg_dt_sta_title_pane_g

0xbf6d,	// (0x00016c29) bg_dt_sta_indi_pane_g1

0xecb2,	// (0x0001996e) dt_sta_signal_pane_g1

0xecba,	// (0x00019976) dt_sta_signal_pane_g2

0x0001,

0xfea4,	// (0x0001ab60) dt_sta_signal_pane_g

0xecc2,	// (0x0001997e) dt_sta_battery_pane_g1

0xeccb,	// (0x00019987) dt_sta_battery_pane_t1

0xbf6d,	// (0x00016c29) bg_dt_sta_control_pane_g1

0x85c6,	// (0x00013282) fep_china_uni_eep_pane

0x85ce,	// (0x0001328a) fep_china_uni_entry_pane_ParamLimits

0x85de,	// (0x0001329a) popup_fep_china_uni_window_g1_ParamLimits

0x85ee,	// (0x000132aa) popup_fep_china_uni_window_g2_ParamLimits

0x85ee,	// (0x000132aa) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0001a3d4) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0001a3d4) popup_fep_china_uni_window_g

0xecda,	// (0x00019996) fep_china_uni_eep_pane_g1

0xece2,	// (0x0001999e) fep_china_uni_eep_pane_t1

0xe762,	// (0x0001941e) aid_touch_area_size_smil_player

0x9067,	// (0x00013d23) lc0_clock_pane

0x924e,	// (0x00013f0a) status_pane_g5_ParamLimits

0x924e,	// (0x00013f0a) status_pane_g5

0x54be,	// (0x0001017a) popup_keymap_window

0x920c,	// (0x00013ec8) status_icon_pane

0xe94c,	// (0x00019608) cell_ai5_widget_pane_g3_ParamLimits

0xe963,	// (0x0001961f) cell_ai5_widget_pane_g4_ParamLimits

0xe96f,	// (0x0001962b) cell_ai5_widget_pane_g5_ParamLimits

0xe993,	// (0x0001964f) cell_ai5_widget_pane_g8_ParamLimits

0xe993,	// (0x0001964f) cell_ai5_widget_pane_g8

0xe9a7,	// (0x00019663) cell_ai5_widget_pane_g9_ParamLimits

0xe9a7,	// (0x00019663) cell_ai5_widget_pane_g9

0xe9bb,	// (0x00019677) cell_ai5_widget_pane_g10_ParamLimits

0xe9bb,	// (0x00019677) cell_ai5_widget_pane_g10

0xecf1,	// (0x000199ad) status_icon_pane_g1

0x6dc1,	// (0x00011a7d) bg_popup_sub_pane_cp13

0xecf9,	// (0x000199b5) popup_keymap_window_t1

0x8e2b,	// (0x00013ae7) control_pane_g6_ParamLimits

0x8e2b,	// (0x00013ae7) control_pane_g6

0x8e38,	// (0x00013af4) control_pane_g7_ParamLimits

0x8e38,	// (0x00013af4) control_pane_g7

0x8e45,	// (0x00013b01) control_pane_g8_ParamLimits

0x8e45,	// (0x00013b01) control_pane_g8

0xec14,	// (0x000198d0) dt_sta_controll_pane_ParamLimits

0xec21,	// (0x000198dd) dt_sta_indi_pane_ParamLimits

0xec32,	// (0x000198ee) dt_sta_title_pane_ParamLimits

0x7676,	// (0x00012332) aid_size_touch_scroll_bar_cale

0x4b05,	// (0x0000f7c1) popup_discreet_window_ParamLimits

0x4b05,	// (0x0000f7c1) popup_discreet_window

0x4b8d,	// (0x0000f849) popup_sk_window

0x9b53,	// (0x0001480f) bg_popup_sub_pane_cp28_ParamLimits

0x9b53,	// (0x0001480f) bg_popup_sub_pane_cp28

0xed07,	// (0x000199c3) popup_discreet_window_g1_ParamLimits

0xed07,	// (0x000199c3) popup_discreet_window_g1

0xed27,	// (0x000199e3) popup_discreet_window_t1_ParamLimits

0xed27,	// (0x000199e3) popup_discreet_window_t1

0xed45,	// (0x00019a01) popup_discreet_window_t2_ParamLimits

0xed45,	// (0x00019a01) popup_discreet_window_t2

0x0002,

0xfea9,	// (0x0001ab65) popup_discreet_window_t_ParamLimits

0xfea9,	// (0x0001ab65) popup_discreet_window_t

0x6a4e,	// (0x0001170a) popup_sk_window_g1

0x6a58,	// (0x00011714) popup_sk_window_g2

0x0001,

0xfeb0,	// (0x0001ab6c) popup_sk_window_g

0x6a60,	// (0x0001171c) popup_sk_window_t1

0x6a6e,	// (0x0001172a) popup_sk_window_t1_copy1

0xe93c,	// (0x000195f8) cell_ai5_widget_pane_g2_ParamLimits

0xea95,	// (0x00019751) cell_ai5_widget_pane_t9_ParamLimits

0xea95,	// (0x00019751) cell_ai5_widget_pane_t9

0x6dc1,	// (0x00011a7d) main_fep_fshwr2_pane

0x6a7c,	// (0x00011738) aid_fshwr2_btn_pane

0x6a88,	// (0x00011744) aid_fshwr2_syb_pane

0x6a94,	// (0x00011750) aid_fshwr2_txt_pane

0x6aa0,	// (0x0001175c) fshwr2_func_candi_pane

0x6ab5,	// (0x00011771) fshwr2_hwr_syb_pane

0x6ac5,	// (0x00011781) fshwr2_icf_pane

0x4a2c,	// (0x0000f6e8) fshwr2_icf_bg_pane

0x6aee,	// (0x000117aa) fshwr2_icf_pane_t1_ParamLimits

0x6aee,	// (0x000117aa) fshwr2_icf_pane_t1

0x84b4,	// (0x00013170) fshwr2_func_candi_pane_g1

0xed97,	// (0x00019a53) fshwr2_func_candi_row_pane_ParamLimits

0xed97,	// (0x00019a53) fshwr2_func_candi_row_pane

0x6b06,	// (0x000117c2) cell_fshwr2_syb_pane_ParamLimits

0x6b06,	// (0x000117c2) cell_fshwr2_syb_pane

0x6035,	// (0x00010cf1) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6035,	// (0x00010cf1) fshwr2_hwr_syb_pane_g1

0x4a2c,	// (0x0000f6e8) bg_popup_call_pane_cp01

0x6b1c,	// (0x000117d8) fshwr2_func_candi_cell_pane_ParamLimits

0x6b1c,	// (0x000117d8) fshwr2_func_candi_cell_pane

0xeda7,	// (0x00019a63) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeda7,	// (0x00019a63) fshwr2_func_candi_cell_bg_pane

0x6b67,	// (0x00011823) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x6b67,	// (0x00011823) fshwr2_func_candi_cell_pane_g1

0x6b8f,	// (0x0001184b) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x6b8f,	// (0x0001184b) fshwr2_func_candi_cell_pane_t1

0x4a2c,	// (0x0000f6e8) bg_button_pane_cp08

0xedb3,	// (0x00019a6f) cell_fshwr2_syb_bg_pane

0x6ba2,	// (0x0001185e) cell_fshwr2_syb_bg_pane_g1

0x6baa,	// (0x00011866) cell_fshwr2_syb_bg_pane_t1

0x7cb9,	// (0x00012975) main_tmo_pane

0xa66e,	// (0x0001532a) uni_indicator_pane_g1_ParamLimits

0xa684,	// (0x00015340) uni_indicator_pane_g2_ParamLimits

0xa69a,	// (0x00015356) uni_indicator_pane_g3_ParamLimits

0xa6ad,	// (0x00015369) uni_indicator_pane_g4_ParamLimits

0xa6ad,	// (0x00015369) uni_indicator_pane_g4

0xa6c1,	// (0x0001537d) uni_indicator_pane_g5_ParamLimits

0xa6c1,	// (0x0001537d) uni_indicator_pane_g5

0xa6c1,	// (0x0001537d) uni_indicator_pane_g6_ParamLimits

0xa6c1,	// (0x0001537d) uni_indicator_pane_g6

0xf91c,	// (0x0001a5d8) uni_indicator_pane_g_ParamLimits

0xd78a,	// (0x00018446) popup_tmo_note_window_ParamLimits

0xd78a,	// (0x00018446) popup_tmo_note_window

0x62ce,	// (0x00010f8a) fshwr2_bg_pane

0x6b80,	// (0x0001183c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x6b80,	// (0x0001183c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb5,	// (0x0001ab71) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb5,	// (0x0001ab71) fshwr2_func_candi_cell_pane_g

0x601d,	// (0x00010cd9) bg_popup_window_pane_cp01

0x6bb9,	// (0x00011875) bg_popup_window_pane_g1_cp01

0xedbb,	// (0x00019a77) bg_popup_window_pane_cp22_ParamLimits

0xedbb,	// (0x00019a77) bg_popup_window_pane_cp22

0xedc9,	// (0x00019a85) listscroll_tmo_link_pane_ParamLimits

0xedc9,	// (0x00019a85) listscroll_tmo_link_pane

0xee09,	// (0x00019ac5) popup_tmo_note_window_g1_ParamLimits

0xee09,	// (0x00019ac5) popup_tmo_note_window_g1

0xee16,	// (0x00019ad2) tmo_note_info_pane_ParamLimits

0xee16,	// (0x00019ad2) tmo_note_info_pane

0xee30,	// (0x00019aec) list_tmo_note_info_pane_g1_ParamLimits

0xee30,	// (0x00019aec) list_tmo_note_info_pane_g1

0xee47,	// (0x00019b03) list_tmo_note_info_pane_g2_ParamLimits

0xee47,	// (0x00019b03) list_tmo_note_info_pane_g2

0x0001,

0xfeba,	// (0x0001ab76) list_tmo_note_info_pane_g_ParamLimits

0xfeba,	// (0x0001ab76) list_tmo_note_info_pane_g

0xee63,	// (0x00019b1f) list_tmo_note_info_text_pane_ParamLimits

0xee63,	// (0x00019b1f) list_tmo_note_info_text_pane

0xeee4,	// (0x00019ba0) list_tmo_link_pane

0xeef1,	// (0x00019bad) scroll_pane_cp20

0xeefe,	// (0x00019bba) list_single_tmo_link_pane_ParamLimits

0xeefe,	// (0x00019bba) list_single_tmo_link_pane

0xef0e,	// (0x00019bca) list_single_tmo_link_pane_t1

0xef1c,	// (0x00019bd8) list_tmo_note_info_text_pane_t1_ParamLimits

0xef1c,	// (0x00019bd8) list_tmo_note_info_text_pane_t1

0x7ee7,	// (0x00012ba3) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7ee7,	// (0x00012ba3) aid_size_touch_scroll_bar_cp01

0x7d5c,	// (0x00012a18) aid_size_touch_slider_marker

0x4b75,	// (0x0000f831) popup_settings_window_ParamLimits

0x4b75,	// (0x0000f831) popup_settings_window

0x8ec7,	// (0x00013b83) popup_candi_list_indi_window

0x8f17,	// (0x00013bd3) aid_touch_navi_pane_ParamLimits

0x6229,	// (0x00010ee5) rs_clock_indi_pane

0x6232,	// (0x00010eee) sctrl_sk_bottom_pane_ParamLimits

0x6243,	// (0x00010eff) sctrl_sk_top_pane_ParamLimits

0x6346,	// (0x00011002) popup_fep_tooltip_window

0xe8b2,	// (0x0001956e) aid_size_cell_widget_grid_ParamLimits

0xe927,	// (0x000195e3) cell_ai5_widget_pane_g1_ParamLimits

0xe927,	// (0x000195e3) cell_ai5_widget_pane_g1

0xe97b,	// (0x00019637) cell_ai5_widget_pane_g6_ParamLimits

0xe987,	// (0x00019643) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe38,	// (0x0001aaf4) cell_ai5_widget_pane_g_ParamLimits

0xfe38,	// (0x0001aaf4) cell_ai5_widget_pane_g

0xeab9,	// (0x00019775) cell_ai5_widget_pane_t10_ParamLimits

0xeab9,	// (0x00019775) cell_ai5_widget_pane_t10

0xead7,	// (0x00019793) grid_ai5_widget_pane_ParamLimits

0xeb78,	// (0x00019834) cell_contacts_ai5_widget_pane_ParamLimits

0xeb78,	// (0x00019834) cell_contacts_ai5_widget_pane

0xed5a,	// (0x00019a16) popup_discreet_window_t3_ParamLimits

0xed5a,	// (0x00019a16) popup_discreet_window_t3

0x6ada,	// (0x00011796) popup_fshwr2_char_preview_window_ParamLimits

0x6ada,	// (0x00011796) popup_fshwr2_char_preview_window

0xee81,	// (0x00019b3d) tmo_note_info_pane_t1

0xee96,	// (0x00019b52) tmo_note_info_pane_t2

0xeeab,	// (0x00019b67) tmo_note_info_pane_t3

0xeec0,	// (0x00019b7c) tmo_note_info_pane_t4

0xeed2,	// (0x00019b8e) tmo_note_info_pane_t5

0x0004,

0xfebf,	// (0x0001ab7b) tmo_note_info_pane_t

0xeee4,	// (0x00019ba0) list_tmo_link_pane_ParamLimits

0xeef1,	// (0x00019bad) scroll_pane_cp20_ParamLimits

0x4a2c,	// (0x0000f6e8) bg_popup_fep_char_preview_window_cp01

0xef35,	// (0x00019bf1) popup_fshwr2_char_preview_window_t1

0xef43,	// (0x00019bff) popup_candi_list_indi_window_g1

0xef4c,	// (0x00019c08) bg_cell_contacts_ai5_widget_pane

0xef58,	// (0x00019c14) cell_contacts_ai5_widget_pane_g1

0xc7b0,	// (0x0001746c) cell_contacts_ai5_widget_pane_g2

0xef6d,	// (0x00019c29) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeca,	// (0x0001ab86) cell_contacts_ai5_widget_pane_g

0xef79,	// (0x00019c35) cell_contacts_ai5_widget_pane_t1

0x7cb9,	// (0x00012975) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeff0,	// (0x00019cac) settings_container_pane

0x8b56,	// (0x00013812) listscroll_set_pane_copy1

0xb32a,	// (0x00015fe6) scroll_pane_cp121_copy1

0x9904,	// (0x000145c0) set_content_pane_copy1

0xeffc,	// (0x00019cb8) aid_height_set_list_copy1_ParamLimits

0xeffc,	// (0x00019cb8) aid_height_set_list_copy1

0xa8e1,	// (0x0001559d) aid_size_parent_copy1_ParamLimits

0xa8e1,	// (0x0001559d) aid_size_parent_copy1

0xf008,	// (0x00019cc4) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf008,	// (0x00019cc4) button_value_adjust_pane_cp6_copy1

0x8ead,	// (0x00013b69) list_highlight_pane_cp2_copy1_ParamLimits

0x8ead,	// (0x00013b69) list_highlight_pane_cp2_copy1

0xf01c,	// (0x00019cd8) list_set_pane_copy1_ParamLimits

0xf01c,	// (0x00019cd8) list_set_pane_copy1

0xef8b,	// (0x00019c47) main_pane_set_t1_copy1_ParamLimits

0xef8b,	// (0x00019c47) main_pane_set_t1_copy1

0xefc5,	// (0x00019c81) main_pane_set_t2_copy1_ParamLimits

0xefc5,	// (0x00019c81) main_pane_set_t2_copy1

0xf0c9,	// (0x00019d85) main_pane_set_t3_copy1

0xf0d7,	// (0x00019d93) main_pane_set_t4_copy1

0xefe4,	// (0x00019ca0) set_content_pane_g1_copy1_ParamLimits

0xefe4,	// (0x00019ca0) set_content_pane_g1_copy1

0xf0e5,	// (0x00019da1) setting_code_pane_copy1

0xf0ed,	// (0x00019da9) setting_slider_graphic_pane_copy1

0xf0ed,	// (0x00019da9) setting_slider_pane_copy1

0xf0ed,	// (0x00019da9) setting_text_pane_copy1

0xf0ed,	// (0x00019da9) setting_volume_pane_copy1

0xf0e5,	// (0x00019da1) settings_code_pane_cp2_copy1

0xf0f5,	// (0x00019db1) settings_code_pane_cp_copy1_ParamLimits

0xf0f5,	// (0x00019db1) settings_code_pane_cp_copy1

0x6bc2,	// (0x0001187e) volume_set_pane_copy1

0xf109,	// (0x00019dc5) volume_set_pane_g10_copy1

0xf111,	// (0x00019dcd) volume_set_pane_g1_copy1

0xf119,	// (0x00019dd5) volume_set_pane_g2_copy1

0xf121,	// (0x00019ddd) volume_set_pane_g3_copy1

0xf129,	// (0x00019de5) volume_set_pane_g4_copy1

0xf131,	// (0x00019ded) volume_set_pane_g5_copy1

0xf139,	// (0x00019df5) volume_set_pane_g6_copy1

0xf141,	// (0x00019dfd) volume_set_pane_g7_copy1

0xf149,	// (0x00019e05) volume_set_pane_g8_copy1

0xf151,	// (0x00019e0d) volume_set_pane_g9_copy1

0x6eb5,	// (0x00011b71) bg_set_opt_pane_cp_copy1_ParamLimits

0x6eb5,	// (0x00011b71) bg_set_opt_pane_cp_copy1

0x6bca,	// (0x00011886) setting_slider_pane_t1_copy1_ParamLimits

0x6bca,	// (0x00011886) setting_slider_pane_t1_copy1

0x6be8,	// (0x000118a4) setting_slider_pane_t2_copy1_ParamLimits

0x6be8,	// (0x000118a4) setting_slider_pane_t2_copy1

0x6c02,	// (0x000118be) setting_slider_pane_t3_copy1_ParamLimits

0x6c02,	// (0x000118be) setting_slider_pane_t3_copy1

0x6c1a,	// (0x000118d6) slider_set_pane_copy1_ParamLimits

0x6c1a,	// (0x000118d6) slider_set_pane_copy1

0x7ddc,	// (0x00012a98) set_opt_bg_pane_g1_copy2

0x7de4,	// (0x00012aa0) set_opt_bg_pane_g2_copy2

0xf159,	// (0x00019e15) set_opt_bg_pane_g3_copy2

0x7df4,	// (0x00012ab0) set_opt_bg_pane_g4_copy2

0x7dfc,	// (0x00012ab8) set_opt_bg_pane_g5_copy2

0x7e04,	// (0x00012ac0) set_opt_bg_pane_g6_copy2

0xf163,	// (0x00019e1f) set_opt_bg_pane_g7_copy2

0xf16b,	// (0x00019e27) set_opt_bg_pane_g8_copy2

0xf175,	// (0x00019e31) set_opt_bg_pane_g9_copy2

0x6c30,	// (0x000118ec) aid_size_touch_slider_mark_copy1_ParamLimits

0x6c30,	// (0x000118ec) aid_size_touch_slider_mark_copy1

0xf17f,	// (0x00019e3b) slider_set_pane_g1_copy1

0x6c44,	// (0x00011900) slider_set_pane_g2_copy1

0x5c5e,	// (0x0001091a) slider_set_pane_g3_copy1_ParamLimits

0x5c5e,	// (0x0001091a) slider_set_pane_g3_copy1

0x5c72,	// (0x0001092e) slider_set_pane_g4_copy1_ParamLimits

0x5c72,	// (0x0001092e) slider_set_pane_g4_copy1

0x5c8a,	// (0x00010946) slider_set_pane_g5_copy1_ParamLimits

0x5c8a,	// (0x00010946) slider_set_pane_g5_copy1

0x5c5e,	// (0x0001091a) slider_set_pane_g6_copy1_ParamLimits

0x5c5e,	// (0x0001091a) slider_set_pane_g6_copy1

0x6c4c,	// (0x00011908) slider_set_pane_g7_copy1_ParamLimits

0x6c4c,	// (0x00011908) slider_set_pane_g7_copy1

0x6dd5,	// (0x00011a91) bg_set_opt_pane_cp2_copy1

0xf188,	// (0x00019e44) setting_slider_graphic_pane_g1_copy1

0xf191,	// (0x00019e4d) setting_slider_graphic_pane_t1_copy1

0xf1a1,	// (0x00019e5d) setting_slider_graphic_pane_t2_copy1

0xf1b1,	// (0x00019e6d) slider_set_pane_cp_copy1

0xf1c1,	// (0x00019e7d) input_focus_pane_cp1_copy1

0xf1ca,	// (0x00019e86) list_set_text_pane_copy1

0xf1d2,	// (0x00019e8e) setting_text_pane_g1_copy1

0x6f0e,	// (0x00011bca) set_text_pane_t1_copy1

0xf1c1,	// (0x00019e7d) input_focus_pane_cp2_copy1

0xf1d2,	// (0x00019e8e) setting_code_pane_g1_copy1

0xf1db,	// (0x00019e97) setting_code_pane_t1_copy1

0xf1e9,	// (0x00019ea5) list_set_graphic_pane_copy1

0x6dd5,	// (0x00011a91) bg_set_opt_pane_cp4_copy1

0x8851,	// (0x0001350d) list_set_graphic_pane_g1_copy1_ParamLimits

0x8851,	// (0x0001350d) list_set_graphic_pane_g1_copy1

0xf1fc,	// (0x00019eb8) list_set_graphic_pane_g2_copy1

0x8869,	// (0x00013525) list_set_graphic_pane_t1_copy1_ParamLimits

0x8869,	// (0x00013525) list_set_graphic_pane_t1_copy1

0xbf6d,	// (0x00016c29) rs_clock_indi_pane_g1

0xf204,	// (0x00019ec0) rs_clock_indi_pane_t1

0xf212,	// (0x00019ece) rs_indi_pane

0xf21a,	// (0x00019ed6) rs_indi_pane_g1

0xf223,	// (0x00019edf) rs_indi_pane_g2

0xf22c,	// (0x00019ee8) rs_indi_pane_g3

0x0002,

0xfed1,	// (0x0001ab8d) rs_indi_pane_g

0x8b56,	// (0x00013812) bg_popup_preview_window_pane_cp03

0xf235,	// (0x00019ef1) popup_fep_tooltip_window_t1

0xcde5,	// (0x00017aa1) popup_note2_window_g2_ParamLimits

0xcde5,	// (0x00017aa1) popup_note2_window_g2

0x0001,

0xfc6a,	// (0x0001a926) popup_note2_window_g_ParamLimits

0xfc6a,	// (0x0001a926) popup_note2_window_g

0xd3c3,	// (0x0001807f) bg_popup_sub_pane_cp11_ParamLimits

0xd3d0,	// (0x0001808c) cell_ai3_links_pane_g1_ParamLimits

0xd3e7,	// (0x000180a3) cell_ai3_links_pane_t1

0x6f0e,	// (0x00011bca) set_text_pane_t1_copy1_ParamLimits

0x8a67,	// (0x00013723) cell_graphic_popup_pane_cp2_ParamLimits

0x8a67,	// (0x00013723) cell_graphic_popup_pane_cp2

0xf243,	// (0x00019eff) cell_graphic_popup_pane_g1_cp2

0x7489,	// (0x00012145) cell_graphic_popup_pane_g2_cp2

0xf24b,	// (0x00019f07) cell_graphic_popup_pane_g3_cp2

0xf253,	// (0x00019f0f) cell_graphic_popup_pane_t2_cp2

0x749a,	// (0x00012156) grid_highlight_pane_cp3_cp2

0x81cd,	// (0x00012e89) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7cb9,	// (0x00012975) main_tmo_pane_ParamLimits

0xd77e,	// (0x0001843a) popup_tmo_big_image_note_window

0xe916,	// (0x000195d2) cell_ai5_widget_list_pane

0xe91e,	// (0x000195da) cell_ai5_widget_lrg_icon_pane

0xee81,	// (0x00019b3d) tmo_note_info_pane_t1_ParamLimits

0xee96,	// (0x00019b52) tmo_note_info_pane_t2_ParamLimits

0xeeab,	// (0x00019b67) tmo_note_info_pane_t3_ParamLimits

0xeec0,	// (0x00019b7c) tmo_note_info_pane_t4_ParamLimits

0xeed2,	// (0x00019b8e) tmo_note_info_pane_t5_ParamLimits

0xfebf,	// (0x0001ab7b) tmo_note_info_pane_t_ParamLimits

0xeff0,	// (0x00019cac) settings_container_pane_ParamLimits

0xf1b9,	// (0x00019e75) indicator_popup_pane_cp5

0xf1b9,	// (0x00019e75) indicator_popup_pane_cp6

0xf1e9,	// (0x00019ea5) list_set_graphic_pane_copy1_ParamLimits

0x6dc1,	// (0x00011a7d) bg_popup_window_pane_cp23

0xf261,	// (0x00019f1d) popup_tmo_big_image_note_window_g1

0xf26b,	// (0x00019f27) popup_tmo_big_image_note_window_t1

0xf27b,	// (0x00019f37) popup_tmo_big_image_note_window_t2

0xf28b,	// (0x00019f47) popup_tmo_big_image_note_window_t3

0x0002,

0xfed8,	// (0x0001ab94) popup_tmo_big_image_note_window_t

0xbf6d,	// (0x00016c29) cell_ai5_widget_lrg_icon_pane_g1

0xf29b,	// (0x00019f57) cell_ai5_widget_lrg_icon_pane_t1

0xf2a9,	// (0x00019f65) cell_ai5_widget_list_row_pane_ParamLimits

0xf2a9,	// (0x00019f65) cell_ai5_widget_list_row_pane

0xf2c0,	// (0x00019f7c) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2c0,	// (0x00019f7c) cell_ai5_widget_list_row_pane_g1

0xf2cd,	// (0x00019f89) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2cd,	// (0x00019f89) cell_ai5_widget_list_row_pane_t1

0xf2fe,	// (0x00019fba) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2fe,	// (0x00019fba) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedf,	// (0x0001ab9b) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedf,	// (0x0001ab9b) cell_ai5_widget_list_row_pane_t

0x4a2c,	// (0x0000f6e8) main_fep_vtchi_ss_pane

0xf342,	// (0x00019ffe) popup_fep_char_pre_window

0xf34a,	// (0x0001a006) popup_fep_ituss_window

0xf36b,	// (0x0001a027) popup_fep_vkbss_window

0xf395,	// (0x0001a051) grid_vkbss_keypad_pane_ParamLimits

0xf395,	// (0x0001a051) grid_vkbss_keypad_pane

0xf3a5,	// (0x0001a061) ituss_keypad_pane

0x6c6e,	// (0x0001192a) aid_vkbss_key_offset_ParamLimits

0x6c6e,	// (0x0001192a) aid_vkbss_key_offset

0x6c7a,	// (0x00011936) cell_vkbss_key_pane_ParamLimits

0x6c7a,	// (0x00011936) cell_vkbss_key_pane

0xf3b4,	// (0x0001a070) bg_cell_vkbss_key_g1_ParamLimits

0xf3b4,	// (0x0001a070) bg_cell_vkbss_key_g1

0xf3c0,	// (0x0001a07c) cell_vkbss_key_3p_pane_ParamLimits

0xf3c0,	// (0x0001a07c) cell_vkbss_key_3p_pane

0xf3d4,	// (0x0001a090) cell_vkbss_key_g1_ParamLimits

0xf3d4,	// (0x0001a090) cell_vkbss_key_g1

0xf3e8,	// (0x0001a0a4) cell_vkbss_key_t1_ParamLimits

0xf3e8,	// (0x0001a0a4) cell_vkbss_key_t1

0x6c90,	// (0x0001194c) cell_ituss_key_pane_ParamLimits

0x6c90,	// (0x0001194c) cell_ituss_key_pane

0xf413,	// (0x0001a0cf) bg_cell_ituss_key_g1_ParamLimits

0xf413,	// (0x0001a0cf) bg_cell_ituss_key_g1

0xf41f,	// (0x0001a0db) cell_ituss_key_pane_g1_ParamLimits

0xf41f,	// (0x0001a0db) cell_ituss_key_pane_g1

0x6ca1,	// (0x0001195d) cell_ituss_key_pane_g2_ParamLimits

0x6ca1,	// (0x0001195d) cell_ituss_key_pane_g2

0x0002,

0xfee6,	// (0x0001aba2) cell_ituss_key_pane_g_ParamLimits

0xfee6,	// (0x0001aba2) cell_ituss_key_pane_g

0x6ccd,	// (0x00011989) cell_ituss_key_t1_ParamLimits

0x6ccd,	// (0x00011989) cell_ituss_key_t1

0x6d07,	// (0x000119c3) cell_ituss_key_t2_ParamLimits

0x6d07,	// (0x000119c3) cell_ituss_key_t2

0x6d38,	// (0x000119f4) cell_ituss_key_t3_ParamLimits

0x6d38,	// (0x000119f4) cell_ituss_key_t3

0x6d07,	// (0x000119c3) cell_ituss_key_t4_ParamLimits

0x6d07,	// (0x000119c3) cell_ituss_key_t4

0x0004,

0xfeed,	// (0x0001aba9) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x0001aba9) cell_ituss_key_t

0xf44b,	// (0x0001a107) cell_vkbss_key_3p_pane_g1

0xf453,	// (0x0001a10f) cell_vkbss_key_3p_pane_g2

0xf45b,	// (0x0001a117) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x0001abb4) cell_vkbss_key_3p_pane_g

0x4a2c,	// (0x0000f6e8) bg_popup_fep_char_preview_window_cp02

0x6d7b,	// (0x00011a37) popup_fep_char_pre_window_t1

0xe8a8,	// (0x00019564) main_ai5_sk_pane

0xef4c,	// (0x00019c08) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef58,	// (0x00019c14) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc7b0,	// (0x0001746c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef6d,	// (0x00019c29) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeca,	// (0x0001ab86) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef79,	// (0x00019c35) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7cb9,	// (0x00012975) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf463,	// (0x0001a11f) main_ai5_sk_pane_g1

0x998c,	// (0x00014648) popup_query_code_window_g1

0xf360,	// (0x0001a01c) popup_fep_vkb_icf_pane

0xf37f,	// (0x0001a03b) popup_fep_vtchi_icf_pane

0xf46c,	// (0x0001a128) bg_icf_pane

0xf478,	// (0x0001a134) list_vkb_icf_pane

0xf487,	// (0x0001a143) bg_icf_pane_cp01

0xf49a,	// (0x0001a156) vtchi_icf_list_pane

0xf4aa,	// (0x0001a166) list_vkb_icf_pane_t1_ParamLimits

0xf4aa,	// (0x0001a166) list_vkb_icf_pane_t1

0xf4c0,	// (0x0001a17c) vtchi_icf_list_pane_t1_ParamLimits

0xf4c0,	// (0x0001a17c) vtchi_icf_list_pane_t1

0xf34a,	// (0x0001a006) popup_fep_ituss_window_ParamLimits

0xf37f,	// (0x0001a03b) popup_fep_vtchi_icf_pane_ParamLimits

0xf3a5,	// (0x0001a061) ituss_keypad_pane_ParamLimits

0x6c62,	// (0x0001191e) ituss_sks_pane

0xf46c,	// (0x0001a128) bg_icf_pane_ParamLimits

0xf326,	// (0x00019fe2) icf_edit_indi_pane_ParamLimits

0xf326,	// (0x00019fe2) icf_edit_indi_pane

0xf478,	// (0x0001a134) list_vkb_icf_pane_ParamLimits

0xf487,	// (0x0001a143) bg_icf_pane_cp01_ParamLimits

0xf335,	// (0x00019ff1) icf_edit_indi_pane_cp01_ParamLimits

0xf335,	// (0x00019ff1) icf_edit_indi_pane_cp01

0xf4a2,	// (0x0001a15e) vtchi_query_pane

0xc1eb,	// (0x00016ea7) icf_edit_indi_pane_g1_ParamLimits

0xc1eb,	// (0x00016ea7) icf_edit_indi_pane_g1

0xf531,	// (0x0001a1ed) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x0001a1ed) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0001abcc) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0001abcc) icf_edit_indi_pane_g

0xf540,	// (0x0001a1fc) icf_edit_indi_pane_t1

0xf4da,	// (0x0001a196) bg_input_focus_pane_cp042

0x766d,	// (0x00012329) vtchi_button_pane

0xf4e3,	// (0x0001a19f) vtchi_query_pane_t1

0xf4f1,	// (0x0001a1ad) vtchi_query_pane_t2

0xf4ff,	// (0x0001a1bb) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0001abbb) vtchi_query_pane_t

0x4a2c,	// (0x0000f6e8) bg_button_pane_cp13

0xf50d,	// (0x0001a1c9) vtchi_button_pane_g1

0x6d8a,	// (0x00011a46) ituss_sks_pane_g1

0x6d95,	// (0x00011a51) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0001abc2) ituss_sks_pane_g

0xf515,	// (0x0001a1d1) ituss_sks_pane_t1

0xf523,	// (0x0001a1df) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0001abc7) ituss_sks_pane_t

0xb9a9,	// (0x00016665) indicator_nsta_pane_cp_g1

0xb9b1,	// (0x0001666d) indicator_nsta_pane_cp_g2

0xb9b9,	// (0x00016675) indicator_nsta_pane_cp_g3

0xb9a9,	// (0x00016665) indicator_nsta_pane_cp_g4

0xb9b1,	// (0x0001666d) indicator_nsta_pane_cp_g5

0xb9b9,	// (0x00016675) indicator_nsta_pane_cp_g6

0x0005,

0xfaa8,	// (0x0001a764) indicator_nsta_pane_cp_g

0xe492,	// (0x0001914e) cell_graphic2_pane_t2_ParamLimits

0xe492,	// (0x0001914e) cell_graphic2_pane_t2

0x0001,

0xfdc1,	// (0x0001aa7d) cell_graphic2_pane_t_ParamLimits

0xfdc1,	// (0x0001aa7d) cell_graphic2_pane_t

0xe4bf,	// (0x0001917b) cell_graphic2_control_pane_t1

0x8575,	// (0x00013231) signal_pane_g3_ParamLimits

0x8575,	// (0x00013231) signal_pane_g3

0x8587,	// (0x00013243) signal_pane_g4_ParamLimits

0x8587,	// (0x00013243) signal_pane_g4

0xf310,	// (0x00019fcc) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf310,	// (0x00019fcc) cell_ai5_widget_list_row_pane_t3

0xf439,	// (0x0001a0f5) cell_ituss_key_pane_t1_ParamLimits

0xf439,	// (0x0001a0f5) cell_ituss_key_pane_t1

0x95a0,	// (0x0001425c) form_field_data_wide_pane_vc_t2_ParamLimits

0x95a0,	// (0x0001425c) form_field_data_wide_pane_vc_t2

0x95b4,	// (0x00014270) form_field_data_wide_pane_vc_t3_ParamLimits

0x95b4,	// (0x00014270) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0001a4c0) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0001a4c0) form_field_data_wide_pane_vc_t

0xb671,	// (0x0001632d) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb671,	// (0x0001632d) form_field_slider_wide_pane_vc_t3

0xb74f,	// (0x0001640b) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb74f,	// (0x0001640b) form_field_popup_wide_pane_vc_t2

0xb766,	// (0x00016422) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb766,	// (0x00016422) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa97,	// (0x0001a753) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x0001a753) form_field_popup_wide_pane_vc_t

0x6a7c,	// (0x00011738) aid_fshwr2_btn_pane_ParamLimits

0x6a88,	// (0x00011744) aid_fshwr2_syb_pane_ParamLimits

0x6a94,	// (0x00011750) aid_fshwr2_txt_pane_ParamLimits

0x62ce,	// (0x00010f8a) fshwr2_bg_pane_ParamLimits

0x6aa0,	// (0x0001175c) fshwr2_func_candi_pane_ParamLimits

0x6ab5,	// (0x00011771) fshwr2_hwr_syb_pane_ParamLimits

0x6ac5,	// (0x00011781) fshwr2_icf_pane_ParamLimits

0xb5d7,	// (0x00016293) list_double_graphic_pane_vc_g4_ParamLimits

0xb5d7,	// (0x00016293) list_double_graphic_pane_vc_g4

0x6cc1,	// (0x0001197d) cell_ituss_key_pane_g3_ParamLimits

0x6cc1,	// (0x0001197d) cell_ituss_key_pane_g3

0x6d69,	// (0x00011a25) cell_ituss_key_t5_ParamLimits

0x6d69,	// (0x00011a25) cell_ituss_key_t5

0xf36b,	// (0x0001a027) popup_fep_vkbss_window_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Normal
